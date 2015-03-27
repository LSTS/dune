//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: bd24744a7b3932c3a956ddc60e9abdd6                            *
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
    msg.setTimeStamp(0.5422581510688023);
    msg.setSource(25554U);
    msg.setSourceEntity(222U);
    msg.setDestination(21015U);
    msg.setDestinationEntity(43U);
    msg.state = 50U;
    msg.flags = 252U;
    msg.description.assign("YXSKQYBMGXAZOEFUJOGFEUSHFWPOKHEWWAFGJRLPYBUNCARAWPKVXZCWNGSATCPHOOWSVFCSDCQCTFKQRDVCUJXOPOMOMKDSXTLWVZWZXXZQHEYXPKKIDNNJBNOSIHMAFEL");

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
    msg.setTimeStamp(0.9455006740596774);
    msg.setSource(56127U);
    msg.setSourceEntity(43U);
    msg.setDestination(50784U);
    msg.setDestinationEntity(101U);
    msg.state = 46U;
    msg.flags = 25U;
    msg.description.assign("SMXPIYLUDSUBXRFAADTQXKWHHTOWKVPRUYAPGUWCUHMSVLDNBMJXYWKRVC");

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
    msg.setTimeStamp(0.2988444721550666);
    msg.setSource(30480U);
    msg.setSourceEntity(34U);
    msg.setDestination(48633U);
    msg.setDestinationEntity(155U);
    msg.state = 205U;
    msg.flags = 92U;
    msg.description.assign("TAXPKKCPWAAKKJVPOOCIWRCUTOWXECGMEOXVZFBESTRYSRQEXBPAQTBVPKMJXXZLDFTDTFLJYOENRWLJMFUIKMWNYGNUJLLUDQAXTBDZHVQTEUZAPBXOBBNDWSCHOYVPUAUDZMIOCNKNHFFW");

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
    msg.setTimeStamp(0.5669802279762519);
    msg.setSource(6620U);
    msg.setSourceEntity(5U);
    msg.setDestination(31000U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.4657117767583745);
    msg.setSource(7832U);
    msg.setSourceEntity(124U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.1593845790023164);
    msg.setSource(21045U);
    msg.setSourceEntity(218U);
    msg.setDestination(17579U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.9902044662933339);
    msg.setSource(4940U);
    msg.setSourceEntity(214U);
    msg.setDestination(16079U);
    msg.setDestinationEntity(200U);
    msg.id = 42U;
    msg.label.assign("EPEGZCFTBHTIVOEKWWDWXBW");
    msg.component.assign("JOWXXWARMOVIQMAGQUSUWPPTALGEQHNWSFHPN");
    msg.act_time = 40969U;
    msg.deact_time = 19063U;

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
    msg.setTimeStamp(0.07316285202864725);
    msg.setSource(53203U);
    msg.setSourceEntity(224U);
    msg.setDestination(4625U);
    msg.setDestinationEntity(64U);
    msg.id = 60U;
    msg.label.assign("FVTNLLLEHJZQSODZTWKEZODKNSVVQCVPWNHEBEGOCEJRKYNHMJQIBFZONXPUGRJMAPZOQJFOCSHUDKWCKDWXXFNQMBMXFFZUISPQHZJAKGGKMNRIBZQLTJYYUBFYFGTTXLPLXDXIPJRTHUDQZYZFVGVSUBHTYNVAOIRBRSPAMPCMWAFBEUAYYDEK");
    msg.component.assign("MNJEEZOUFOX");
    msg.act_time = 23724U;
    msg.deact_time = 3605U;

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
    msg.setTimeStamp(0.3286285888517634);
    msg.setSource(8442U);
    msg.setSourceEntity(9U);
    msg.setDestination(30307U);
    msg.setDestinationEntity(58U);
    msg.id = 177U;
    msg.label.assign("IYINPZFCPQVHOYWKOUVINDSOKSYXHDAVWCEPVYLGTEDNRVTPSFRYNY");
    msg.component.assign("WFQYSZPKSNLRRPARITVPVPLZBTHIHUAYYQFNFDMXGLMNGBLFAIIGJJUZIOVZCNHFJQRYSNKGCXOTREWYVSXZGRTKCAZDYAOOXRXSNWEBOJPGGQSPSUJOPQPBHCVUAZKRBJTLBQCTKKSUUEUIHJAIHEHRACWWUXDVFMFNZKYTOICMVKXGWCYWMMFISMPQBLBKXFJHLV");
    msg.act_time = 6278U;
    msg.deact_time = 6831U;

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
    msg.setTimeStamp(0.06863086717500344);
    msg.setSource(25903U);
    msg.setSourceEntity(17U);
    msg.setDestination(11370U);
    msg.setDestinationEntity(170U);
    msg.id = 51U;

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
    msg.setTimeStamp(0.0031293967127669076);
    msg.setSource(11480U);
    msg.setSourceEntity(130U);
    msg.setDestination(51399U);
    msg.setDestinationEntity(92U);
    msg.id = 142U;

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
    msg.setTimeStamp(0.0838072389055754);
    msg.setSource(48658U);
    msg.setSourceEntity(200U);
    msg.setDestination(41335U);
    msg.setDestinationEntity(131U);
    msg.id = 113U;

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
    msg.setTimeStamp(0.977908066003939);
    msg.setSource(28283U);
    msg.setSourceEntity(23U);
    msg.setDestination(17280U);
    msg.setDestinationEntity(34U);
    msg.op = 61U;
    msg.list.assign("HVNCJWKSUAQZJBVRHPNYSMDBJGVORSBTRJDIAJMEGXWKFSHBWFYQHXWIWKDIUQFXTWAINLFTLPVJDOYUXQZLTKTSEHOUBYORTGBFFOBRNYGHWIPZHQVEJEXNRAWSCEYIVMZQLZKPULYIOISRBFEWXFZMDMGGDJTKLXDYPGNLQPNCVVRFKITAMURNDLQUUJAXGMQSFHIEHADBZPYMMCOKEANOVCLMZALBEU");

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
    msg.setTimeStamp(0.2180248720114486);
    msg.setSource(10051U);
    msg.setSourceEntity(119U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(134U);
    msg.op = 181U;
    msg.list.assign("JDQHWERQOMMSWMLBGFMPXILPVDBVNQQNUOEV");

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
    msg.setTimeStamp(0.1549226413969721);
    msg.setSource(30585U);
    msg.setSourceEntity(45U);
    msg.setDestination(35009U);
    msg.setDestinationEntity(216U);
    msg.op = 221U;
    msg.list.assign("BENBJBOVHEXHLCNZEFMOQRJFDSJZGQRFWHOSWRVVIWFFOHCQWPGYUUTUIKASDBCCFVPUBJRKDPLYEANVIMUCYXIQIUPXXKDBUAVXASYGXHTQASPTJZLTIDRVDPMXMXNERZCFCYLGYMWRGHUQWHJTPBGFWUYKLKJANNDZLQXEAAYSXIVVOMEJJBFHGNKCLKSZTEFSLMPROICADQOISJGDTHTLEQKZKMZMVNWO");

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
    msg.setTimeStamp(0.9976923816666264);
    msg.setSource(28864U);
    msg.setSourceEntity(133U);
    msg.setDestination(37508U);
    msg.setDestinationEntity(145U);
    msg.value = 131U;

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
    msg.setTimeStamp(0.9021564046581314);
    msg.setSource(27737U);
    msg.setSourceEntity(103U);
    msg.setDestination(31478U);
    msg.setDestinationEntity(37U);
    msg.value = 76U;

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
    msg.setTimeStamp(0.740868716667178);
    msg.setSource(29261U);
    msg.setSourceEntity(156U);
    msg.setDestination(39916U);
    msg.setDestinationEntity(31U);
    msg.value = 178U;

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
    msg.setTimeStamp(0.0970539998273573);
    msg.setSource(64665U);
    msg.setSourceEntity(87U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(123U);
    msg.consumer.assign("HGLPLLIFUSJFDPLCEDKYWJVZZMBAVWMPQIONBQTQAHDMJOSFCRJSTMMTFILNTCSIEYYEHGZFVNNTHXGCZFFAHNRWBWXJZGKZATGUIRNXOZCPPXMKBWONEX");
    msg.message_id = 55278U;

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
    msg.setTimeStamp(0.9548062453344139);
    msg.setSource(27867U);
    msg.setSourceEntity(102U);
    msg.setDestination(38998U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("NPGIPXTFRVRAMSOTEQMKMDNTQNAYXUEUULNWZOPKAJGHDWHFCSYNYDQEZZXSUCGVZIBHMRNYMDJEOMIBDLXHNKJGWSGQMQUCFKDAROVKBOOWPGCNVJQHKSCLUSMHSCJHLDXYFNDPBKZHXZTGXFKTVWZXRYVYXCBPJLFNIVRUAARKBBWWGUEMRSOPTLZFZPJVFQYTDRWJOEIELIHSOBQQGZAC");
    msg.message_id = 59803U;

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
    msg.setTimeStamp(0.744627263637109);
    msg.setSource(51517U);
    msg.setSourceEntity(99U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(59U);
    msg.consumer.assign("WSKFNCAUBHREREDVQBCBJKCGLODIKYTQ");
    msg.message_id = 8267U;

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
    msg.setTimeStamp(0.04770485691574844);
    msg.setSource(15730U);
    msg.setSourceEntity(11U);
    msg.setDestination(60653U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.4234065852131932);
    msg.setSource(17238U);
    msg.setSourceEntity(170U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.7797505944891869);
    msg.setSource(51372U);
    msg.setSourceEntity(253U);
    msg.setDestination(42127U);
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
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0034195177216087558);
    msg.setSource(8141U);
    msg.setSourceEntity(215U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(49U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.672959475669569);
    msg.setSource(35686U);
    msg.setSourceEntity(174U);
    msg.setDestination(56826U);
    msg.setDestinationEntity(55U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.8255256626222385);
    msg.setSource(43971U);
    msg.setSourceEntity(81U);
    msg.setDestination(57548U);
    msg.setDestinationEntity(32U);
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
    msg.setTimeStamp(0.9060043235157232);
    msg.setSource(12648U);
    msg.setSourceEntity(47U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(34U);
    msg.total_steps = 206U;
    msg.step_number = 202U;
    msg.step.assign("HSCWOVMJDTTMIZTIBQWBVRMZEJQGXLROKMUKEGFSPWUIKAPRZBEHKOLWTMTMGZQFQHUDANXIDFWOMACRGHLPBYYQKWDXEIUDEUNZYRERSJJCSIUEQPG");
    msg.flags = 235U;

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
    msg.setTimeStamp(0.8677865292329179);
    msg.setSource(30287U);
    msg.setSourceEntity(84U);
    msg.setDestination(7676U);
    msg.setDestinationEntity(181U);
    msg.total_steps = 105U;
    msg.step_number = 204U;
    msg.step.assign("BGWJRVRUJHUKFVRUJGYKPKENYRENDBPMDEFDNTQGWYKYXVPESKADARXABHZCXOOLRRMALXVOSHXIBWIGJGBSZAANAQTIGTFUYVZDMLQQVXQPFCIYMYPEKHJMVMLQOIFSTBZPGUBQIUWPKNCESQOBVETRK");
    msg.flags = 2U;

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
    msg.setTimeStamp(0.9045225059334153);
    msg.setSource(19284U);
    msg.setSourceEntity(114U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(82U);
    msg.total_steps = 133U;
    msg.step_number = 167U;
    msg.step.assign("PCJVVZJSVECCCQNMCNYJEUGGOKADUIBJPDUFTBKSPDRTHHKEYKXFIBKBMMWWHDRTGLDLNUYCJVMVIWQBMERZFZZKXBOQACXLGZGLHGFFLKHNLQOLDXWRZTONWSMFVETWHYOPSRHZBKNQMSYAQBTUTPHDQSAJWBDONGA");
    msg.flags = 95U;

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
    msg.setTimeStamp(0.716422401761293);
    msg.setSource(50873U);
    msg.setSourceEntity(184U);
    msg.setDestination(60324U);
    msg.setDestinationEntity(121U);
    msg.state = 118U;
    msg.error.assign("NSLMXOPEALQHDOVLYSBGQSHJCJNOPLTDUYAXHHRVIOQYHBKZEIZPWCLJNNQYSOJEHCJUOMYXKEBDKREMRXIETCNJGUAWGAP");

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
    msg.setTimeStamp(0.7271797866704104);
    msg.setSource(45178U);
    msg.setSourceEntity(73U);
    msg.setDestination(39292U);
    msg.setDestinationEntity(76U);
    msg.state = 75U;
    msg.error.assign("VDNBSWMGIEUAQLWCZSRYMJSOHIHYMPRZLGIUJRXXIOMRGHZCCIARLANUYGBHXZUWBUNUVDFAZVPHEPFRTKEEVOYIQZYTVRTSLMUJKPTSHMLKKSKJMONYHDEDNYAQUMWEP");

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
    msg.setTimeStamp(0.99753767346112);
    msg.setSource(7690U);
    msg.setSourceEntity(208U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(6U);
    msg.state = 248U;
    msg.error.assign("TJMUZDVBHDAOVMYVC");

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
    msg.setTimeStamp(0.9955195431539465);
    msg.setSource(58432U);
    msg.setSourceEntity(186U);
    msg.setDestination(56937U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.5096681812427737);
    msg.setSource(18395U);
    msg.setSourceEntity(212U);
    msg.setDestination(1474U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.33983556168922024);
    msg.setSource(0U);
    msg.setSourceEntity(176U);
    msg.setDestination(2942U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.05694676220517869);
    msg.setSource(21238U);
    msg.setSourceEntity(99U);
    msg.setDestination(28078U);
    msg.setDestinationEntity(102U);
    msg.op = 192U;
    msg.speed_min = 0.18452140338821;
    msg.speed_max = 0.518717354837874;
    msg.long_accel = 0.7614264092627581;
    msg.alt_max_msl = 0.8076690228926592;
    msg.dive_fraction_max = 0.8417993993337162;
    msg.climb_fraction_max = 0.3163730101827521;
    msg.bank_max = 0.5880082718776907;
    msg.p_max = 0.38190608954072736;
    msg.pitch_min = 0.47193019856975316;
    msg.pitch_max = 0.3451353835369343;
    msg.q_max = 0.250991401050921;
    msg.g_min = 0.8544038416020056;
    msg.g_max = 0.24212445422444895;
    msg.g_lat_max = 0.46008619240502313;
    msg.rpm_min = 0.5820254011114842;
    msg.rpm_max = 0.5927366005441448;
    msg.rpm_rate_max = 0.16116910651494298;

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
    msg.setTimeStamp(0.3566708424635605);
    msg.setSource(4836U);
    msg.setSourceEntity(245U);
    msg.setDestination(21236U);
    msg.setDestinationEntity(248U);
    msg.op = 185U;
    msg.speed_min = 0.6623155888571792;
    msg.speed_max = 0.4132026781503898;
    msg.long_accel = 0.8827530058701814;
    msg.alt_max_msl = 0.4500998297338883;
    msg.dive_fraction_max = 0.6017427197203743;
    msg.climb_fraction_max = 0.3589960050691491;
    msg.bank_max = 0.4778333253857492;
    msg.p_max = 0.5179486253800113;
    msg.pitch_min = 0.34165737525829953;
    msg.pitch_max = 0.7276645774355124;
    msg.q_max = 0.39721777463829555;
    msg.g_min = 0.4092770977465233;
    msg.g_max = 0.42909267784788396;
    msg.g_lat_max = 0.41517582044817325;
    msg.rpm_min = 0.11858105550017084;
    msg.rpm_max = 0.9728978233644493;
    msg.rpm_rate_max = 0.4282044753714237;

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
    msg.setTimeStamp(0.7347501317628017);
    msg.setSource(52074U);
    msg.setSourceEntity(27U);
    msg.setDestination(38926U);
    msg.setDestinationEntity(196U);
    msg.op = 127U;
    msg.speed_min = 0.9442606374259112;
    msg.speed_max = 0.7985027628010029;
    msg.long_accel = 0.19723005392710413;
    msg.alt_max_msl = 0.2864685728565598;
    msg.dive_fraction_max = 0.18192961062468138;
    msg.climb_fraction_max = 0.5378111457809515;
    msg.bank_max = 0.2171084375470106;
    msg.p_max = 0.49366199057673854;
    msg.pitch_min = 0.21699075974321747;
    msg.pitch_max = 0.6049218570468975;
    msg.q_max = 0.25391239754009753;
    msg.g_min = 0.10132733539580907;
    msg.g_max = 0.5985013009190894;
    msg.g_lat_max = 0.9735321859535112;
    msg.rpm_min = 0.7069100912075118;
    msg.rpm_max = 0.5152827638629663;
    msg.rpm_rate_max = 0.03124114909348641;

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
    msg.setTimeStamp(0.9933124974744011);
    msg.setSource(20105U);
    msg.setSourceEntity(193U);
    msg.setDestination(62U);
    msg.setDestinationEntity(115U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HUCRGAKYKUHCKDEPIMVOWLBQQFTTXNBDECAOCSRKUCXNEYAIGX");
    tmp_msg_0.value.assign("QNBJWRYZBOWUMWSJEQEAEAICBSSHOYRXSZOIDUHXGGOFPPUPYTLDRHMBIUBKVJZIWISQPBVGNUVYIIPQOONXMFYLTVHJHEDJDTZEZATMRLHOWELPNVCTDEEQUZWAVIPXGBCKAGJGFWZJTLWGSZBUJACKMYOFNDECOXMXVLUXMIARQXXWPJNQCRNQTGYKKGCNAXSUHVZNYHLGMRHLQDMEZTTJKFLQDFRTKIHKKK");
    tmp_msg_0.type = 221U;
    tmp_msg_0.access = 62U;
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
    msg.setTimeStamp(0.7203795854534645);
    msg.setSource(41661U);
    msg.setSourceEntity(70U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(112U);
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.4241621365573607);
    msg.setSource(16146U);
    msg.setSourceEntity(51U);
    msg.setDestination(1115U);
    msg.setDestinationEntity(80U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.6662335557634136;
    tmp_msg_0.dist_min_abs = 0.8139906518450636;
    tmp_msg_0.dist_min_mean = 0.06037459915526189;
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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.9930411060380999);
    msg.setSource(60640U);
    msg.setSourceEntity(208U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.4991905496150383;
    msg.lon = 0.5098284736743214;
    msg.height = 0.8762963618952497;
    msg.x = 0.0571932498543718;
    msg.y = 0.45477472127251506;
    msg.z = 0.721265178924149;
    msg.phi = 0.672932977184518;
    msg.theta = 0.16220074701199794;
    msg.psi = 0.14478806460970672;
    msg.u = 0.032207275172304484;
    msg.v = 0.659635429027719;
    msg.w = 0.1317947881923115;
    msg.p = 0.3898848684324885;
    msg.q = 0.3923633881225307;
    msg.r = 0.08902447858616491;
    msg.svx = 0.7696214580225539;
    msg.svy = 0.8522108087547543;
    msg.svz = 0.4418538610378734;

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
    msg.setTimeStamp(0.6278019510907857);
    msg.setSource(19650U);
    msg.setSourceEntity(3U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.5184400273057396;
    msg.lon = 0.31581581415784843;
    msg.height = 0.8643834601149502;
    msg.x = 0.5185748292104543;
    msg.y = 0.2695064199417928;
    msg.z = 0.21811826273528057;
    msg.phi = 0.9336104391231227;
    msg.theta = 0.1811005670267748;
    msg.psi = 0.18835547658512597;
    msg.u = 0.3542872321255096;
    msg.v = 0.9478285824661529;
    msg.w = 0.3041068783945057;
    msg.p = 0.8297078021116244;
    msg.q = 0.2513835953158754;
    msg.r = 0.06828098540047556;
    msg.svx = 0.704238042922435;
    msg.svy = 0.3569073138599552;
    msg.svz = 0.07762043801751095;

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
    msg.setTimeStamp(0.3361771789877981);
    msg.setSource(4452U);
    msg.setSourceEntity(149U);
    msg.setDestination(61812U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.9981063089609323;
    msg.lon = 0.1981848827995364;
    msg.height = 0.7125951549444745;
    msg.x = 0.22800973458850837;
    msg.y = 0.010846312996578011;
    msg.z = 0.5269568386259895;
    msg.phi = 0.8270428088186715;
    msg.theta = 0.29568903193943885;
    msg.psi = 0.17397499689313212;
    msg.u = 0.42174266264847615;
    msg.v = 0.10928752539135911;
    msg.w = 0.6856247531715689;
    msg.p = 0.10382766262681253;
    msg.q = 0.4901181626336957;
    msg.r = 0.5527561142636823;
    msg.svx = 0.401115838108311;
    msg.svy = 0.8486288188011808;
    msg.svz = 0.6849550729621515;

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
    msg.setTimeStamp(0.5716617833147282);
    msg.setSource(41789U);
    msg.setSourceEntity(43U);
    msg.setDestination(38404U);
    msg.setDestinationEntity(124U);
    msg.op = 14U;
    msg.entities.assign("GWYAEMGPLRWITLF");

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
    msg.setTimeStamp(0.0931950800041016);
    msg.setSource(35600U);
    msg.setSourceEntity(97U);
    msg.setDestination(2716U);
    msg.setDestinationEntity(221U);
    msg.op = 108U;
    msg.entities.assign("LZZTWQLQNABDJFRRFPKIUILMHCCKFCMAPEJLCYEFSKVSOJFAGPOKDXDQLQNAHUUBXSFYJNYOOYRDXLFGXBBEIUTYIT");

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
    msg.setTimeStamp(0.6109169906337931);
    msg.setSource(50429U);
    msg.setSourceEntity(10U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(18U);
    msg.op = 38U;
    msg.entities.assign("MYQRESTWGTLXZQLTJVGSTSHEFLDBKNLQOJQTJNGJIIGREMXOKXXSWPDBSM");

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
    msg.setTimeStamp(0.3421935118967343);
    msg.setSource(52971U);
    msg.setSourceEntity(188U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(220U);
    msg.type = 97U;
    msg.speed = 64289U;
    const char tmp_msg_0[] = {-100, 119, -89, 66, 62, -94, 42, -62, -103, 67, 6, -112, -25, -24, -124, -79, -73, 82, 69, 68, -123, -119, 31, -116, -64, 110, -111, -125, 114, 12, -83, -78, 25, -16, -112, 105, -51, 35, -83, 38, 120, 57, -82, 0, -20, -13, 68, 10, 44, -31, 126, -55, 25, 102, -30, -85, 119, -99, 79, 33, -18, 86, -74, 64, 30, -78, -106, 69, 90, 34, 30, 6, 60, -61, 12};
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
    msg.setTimeStamp(0.7219608516970066);
    msg.setSource(38034U);
    msg.setSourceEntity(166U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(19U);
    msg.type = 221U;
    msg.speed = 48337U;
    const char tmp_msg_0[] = {50, -125, 125, -103, 53, -28, -32, -112, -89, -62, -29, -62, 45, -6, 93, -11, -44, 36, 43, 122, 3, 0, -80, 50, -50, 50, -31, 74, 101, -22, -103, -118, 28, 88, 74, -91, -10, -35, 83, -116, -111, 25, 71, -27, -63, -119, 44, -102, 98, 71, 29, 7, -69, 47, 83, 106, -116, -41, -36};
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
    msg.setTimeStamp(0.06757506737875951);
    msg.setSource(2026U);
    msg.setSourceEntity(160U);
    msg.setDestination(5723U);
    msg.setDestinationEntity(68U);
    msg.type = 88U;
    msg.speed = 65516U;
    const char tmp_msg_0[] = {13, 114, 40, -113, 122, 83, 68, 17, 91, 85, -13, 69, -70, -11, 47, 12, 54, 103, -108, -60, 44, -75, -111, 40, 2, 64, 10, -7, 113, 113, 59, 94, -97, 42, -98, 72, -75, -36, 76, -84, 92, 40, -28, 60, -120, 122};
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
    msg.setTimeStamp(0.5787656667033585);
    msg.setSource(44793U);
    msg.setSourceEntity(215U);
    msg.setDestination(20142U);
    msg.setDestinationEntity(47U);
    msg.op = 123U;
    msg.tas2acc_pgain = 0.4698083942320417;
    msg.bank2p_pgain = 0.32358502541984147;

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
    msg.setTimeStamp(0.6182144882799112);
    msg.setSource(54855U);
    msg.setSourceEntity(22U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(45U);
    msg.op = 43U;
    msg.tas2acc_pgain = 0.7682364744364253;
    msg.bank2p_pgain = 0.04589518491327538;

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
    msg.setTimeStamp(0.9957455533232266);
    msg.setSource(38241U);
    msg.setSourceEntity(68U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(167U);
    msg.op = 16U;
    msg.tas2acc_pgain = 0.04886829112011226;
    msg.bank2p_pgain = 0.2901882150159999;

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
    msg.setTimeStamp(0.935917248139503);
    msg.setSource(30450U);
    msg.setSourceEntity(207U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(24U);
    msg.available = 1626971563U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.8569524977153472);
    msg.setSource(42351U);
    msg.setSourceEntity(135U);
    msg.setDestination(17137U);
    msg.setDestinationEntity(7U);
    msg.available = 884776818U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.5217221047886207);
    msg.setSource(55506U);
    msg.setSourceEntity(227U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(96U);
    msg.available = 770037292U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.5814582340413678);
    msg.setSource(33638U);
    msg.setSourceEntity(27U);
    msg.setDestination(9231U);
    msg.setDestinationEntity(162U);
    msg.op = 201U;
    msg.snapshot.assign("HLKUDGFZTGFPRUERBAWCNPMZSJTYSBOLMSROIETEMXOSIITAGMMWGMARJRASZPAKSHTLDJTOCZQKGVEGRCHLOPDROHHXDMIFBLUNYVTPQQFYLKTXATCNQKKJJPQEYSXKKLQFWEJZJXYJHNNAZXWUIGANPSOXZWDEWCPLUFFVYIQUIYNBQWYDVCKVUENSXVMCAZJRUFIINJVTXLBUHVFCGEWBWWOQKA");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {5, -31, 71, -117, 117, -83, 104, -111, -100, -106, 9, -48, -48, 23, 87, -42, 82, 51, -8, -122, 51, 100, -33, 59, -57, 74, -39, -64, 65, -61, -30, 5, -98, 123, 126, -50, -4, 66, 61, -90, -75, 55, 110, 79, -115, 77, -50, 42, -49, -66, -83, -29, -23, -65, -21, 55, 55, 59, 62, 93, -86, -100, 25, 91, -119, -9, 117, -25, 56, 2, 89, -13, 104, -102, 110, 9, -81, -47, 96, 101, -14, -86, 69, -110, 95, -80, 5, 26, 37, -111, 70, 125, -16, -82, 115, 12, 90, 38, 119, 37, -42, -104, 61, 25, -91, 86, 82, -29, 88, 14, -52, -10, 90, -3, 13, -51, 18, 21, -71, 23, 92, 122, 64, 99, -49, 69, 99, -38, -112, 110, -100, -9, -69, 7, -116, -113, -79, -58, -74, 40, 97, 102, 119, -91, -7, -70, -41, 110, 112, 84, -9, 94, -74, 34, 113, 120, 117, 9, -80, 57, 99, -88, -101, -49, -89, 101, 61, -118, 2, 65, 59, 2, -85, 117, 29, -31, -1, 116, -34, -59, 13, -3, -105, 73, 81, 104, 59, 76, 64, 17, -123, -6, -33, -105, -33, 32, -90, -51, -26, 65, -125, -110, 97, 27, -3, -71, 36, 29, 55, 7, 1, -59, -125, -78, 47, -101, 114, 122, -109, 103, 86, -120, 54, -7, 71, 30};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5116479312947473);
    msg.setSource(4669U);
    msg.setSourceEntity(181U);
    msg.setDestination(53115U);
    msg.setDestinationEntity(144U);
    msg.op = 24U;
    msg.snapshot.assign("BFUEZVKSLXCLUABPMVCQELHPNEPLNVVWCKCISBXQQHIFDGJPXEXLTOKGQSEKVJMXDDFTOMMZYXZNYVGHMOSDDLQJYBJBYQBGRAUZJHWWUSITAQIRVRFDWMOOAIPOLNKBSGR");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.15637192559976587;
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
    msg.setTimeStamp(0.3527973012926292);
    msg.setSource(43369U);
    msg.setSourceEntity(78U);
    msg.setDestination(62464U);
    msg.setDestinationEntity(195U);
    msg.op = 194U;
    msg.snapshot.assign("XULEDZBPPRQRYGRXVWGOPFVSTJDWGEMGZRWQJSWOLCRQENKPDHIKVTIPNEUHLCUXNGJUDIMSEMAPDQKNKZBRAPLLZYOVTOJIBJXGDZEWCFKUKVGAGUAUXPCHFGEQXHCJBUMOYHEDSHBWFRSSOWMDLIYNYVRZLENZWJFQVDFVBKNJCHRMQTYLTJXTSTAXYQWBANKHFIAICZLLOKUOTBMHAXGXVIFNSFDBMKVMQNIYSZMROYIJCE");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 159U;
    tmp_msg_0.speed = 356U;
    const char tmp_tmp_msg_0_0[] = {-52, -47, 53, -44, 120, 105, -109, 118, -27, 11, -64, 126, -120, -117, -82, -31, -44, -63, -73, -119, 116, 9, 126, 92, -6, 88, 58, 113, -120, 78, 80, -126, 43, -81, -41, 110, 97, 124, -34, -112, -56};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9646637877552856);
    msg.setSource(38039U);
    msg.setSourceEntity(194U);
    msg.setDestination(59876U);
    msg.setDestinationEntity(136U);
    msg.op = 191U;
    msg.name.assign("JKRKSNZEWBUFENPSSKKXEBNEVYRKZFGXAXJYFNKPGTCLWYZHZVTMVJEXJRFYGERXZODPHCFGLIUVUUXLCMTRAPAUTLJCLMDSIZFIAFRPSQQWNYQOJLRIOTQDRBVZPBYGMGWEEYQHMDASBCXTTWF");

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
    msg.setTimeStamp(0.6906289407391442);
    msg.setSource(9902U);
    msg.setSourceEntity(119U);
    msg.setDestination(59143U);
    msg.setDestinationEntity(237U);
    msg.op = 191U;
    msg.name.assign("TZQJXMFEDYKTWMAOCETSDJNDQGLZLYVHGBKEYAPJNEBLNTBWJ");

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
    msg.setTimeStamp(0.9652830385865081);
    msg.setSource(10460U);
    msg.setSourceEntity(197U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(57U);
    msg.op = 88U;
    msg.name.assign("HHAGARXRWFXFDXNPXOBXATBQMDKVPQQIJXGICRMBWLZDOPJSHZJGHHFPUDRGENBRREPXCDFWUWNSMGUNYBULFYNATSWMSDAOIDKDZMNMMQZRONZYTOIJKBJSPKLHIKFOJOCAWFKYPMHAGTEVIDXGQZYYSTLZTUWQT");

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
    msg.setTimeStamp(0.9327000453893608);
    msg.setSource(49098U);
    msg.setSourceEntity(163U);
    msg.setDestination(60403U);
    msg.setDestinationEntity(32U);
    msg.type = 41U;
    msg.htime = 0.10544111166690406;
    msg.context.assign("JOMRPYMLQGMOGMVIHTBYXGAIQBCLWNKGUEPZTSXIUCJKWGRDZHCNKBDDQZCGRUPQBPESJIXFALHIVGCMAVKDFTXKDHHUXQVFZKTLSVILJVCDIQMQUALNBIROVTLETMNJREFJKJFKOHVQXFOJASYPNSSPCQYTXCWDEYRFYRBYUAMOYBWAXSNY");
    msg.text.assign("DOTPYRNMZXUNWARKHSETEAHWEFTXYLUCSCZDTOVZIJZLYQSAIDNOMSPWKWUMUWFHADJBRQHUVTLOPQISOZRQXSJGFBXCEXFBNPZVFMINGRNKICTQPVCLMZYDFIHDSLOZGPLCOETMURZKQCWEGJFNGHZKDJXJNRUSWOKPJCFGKHBAVLIPGKHABQYAFUARVIXGHVTWUIBETFXQLXONLQBYCKSOBKAPVMYN");

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
    msg.setTimeStamp(0.527381857379579);
    msg.setSource(47765U);
    msg.setSourceEntity(130U);
    msg.setDestination(8850U);
    msg.setDestinationEntity(193U);
    msg.type = 170U;
    msg.htime = 0.471748599127919;
    msg.context.assign("WQXYBVCAXVMGDSFCUHDDUASJWZBGHQPEWRDMTNMDQHUKEATPGJYKNUNKEUWGBWGPUXZWJHEUFLGOZLIYIDYCYBLQJVHAMCSHMAUQRZYDXEVCFJJYRTRVC");
    msg.text.assign("OLBTENIFSVGNWYMSPJOKSDBUFOAZPYKDWCHYZHXFANNCCXJFMHIMJIRUFBTZCXKUUTJJADVZQUDYQEPNTYTETFMMYSQDYJKLCYVWGSBOJWDGMGCDEGGCCITWVPXIRYRUHEKWRNIHOVKRPBPFT");

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
    msg.setTimeStamp(0.019353953312694183);
    msg.setSource(80U);
    msg.setSourceEntity(51U);
    msg.setDestination(42562U);
    msg.setDestinationEntity(176U);
    msg.type = 64U;
    msg.htime = 0.2772244246861212;
    msg.context.assign("RHWRQLEBDU");
    msg.text.assign("CTTPWHUIDRQIOVOPDRTXHREQRJPBYMCFJTNJLNTKCMEFYUQPECZTSAPOWXTYJQLAZUKBVVASAOUUAWDXSMEFXOECRYGQCBFZSLVQZYLRDLWHVAHNXUVNQPCGAAYECHUIHLLBKBZJXEMMPADMMLLKSHDWKJRUXFSNHQGF");

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
    msg.setTimeStamp(0.5528962900044555);
    msg.setSource(35672U);
    msg.setSourceEntity(244U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(5U);
    msg.command = 104U;
    msg.htime = 0.33152281312908005;

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
    msg.setTimeStamp(0.9692915376472173);
    msg.setSource(37079U);
    msg.setSourceEntity(228U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(236U);
    msg.command = 101U;
    msg.htime = 0.787857616228601;

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
    msg.setTimeStamp(0.7701491507841973);
    msg.setSource(1711U);
    msg.setSourceEntity(34U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(229U);
    msg.command = 1U;
    msg.htime = 0.6457087579299183;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.htime = 0.8483999428555361;
    tmp_msg_0.context.assign("PMSEZXNRIMDWTTTBRUCNOVGCMKSOYHCMOKDHUMSKAEAENNYTUETMRWBRNWKRZUXZUKAPQOXKVAQZNRPWHFNXIDNLQGGLVICYAHBHSFPQJOCSTEYBYFPLEXXHWLSTQBIUKIEVYVHRVRGIBPFAAXYKDVLLUMIWLKLFJBMGPQLIWAVCJFMTBZOJTOISCULWDOEYJEFSWGNZIFQNCMPFQVGUCYWZXVGJSFJPZC");
    tmp_msg_0.text.assign("NMVNYZENHNIKDHLBARTNBBIHCAKJHGALLMQXSJZQJOIDTULMQWDXCBKRPZVSXHRKOHBWKXRBYAYHDQWUYFNECMFGGWYOZLFGRZYOVEPPSDOFXVOCGCBACTEZSUCUDEWNHOSPVFVKDZSPGRWMRETTXSCVFAXROTXMUIILSGLUHTMFCVEMAFWBMDM");
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
    msg.setTimeStamp(0.3028966026779898);
    msg.setSource(18572U);
    msg.setSourceEntity(223U);
    msg.setDestination(29345U);
    msg.setDestinationEntity(110U);
    msg.op = 137U;
    msg.file.assign("FVMKQCTQTISQNQUPPACEXBLYTODHINEPGDJCXFSHVLBRAKHEUZNLFCGBYOMZYWMPKIJWWJBNAEDLNYBQJUPPHDDAGJRSVXAJMKIOPOOIGEHGZCJYBKEETXKCRQQWFIWCMRITXMKNALPBQUJHKGZGXXZXUORRKQRSIOYVZXHNXFNWFYHVASAAZYDWLZHPZDTSBLZOQVDTFVVTULJJYLUDSUAPCWIVBOKSIHTOLNDCMEFB");

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
    msg.setTimeStamp(0.053530032975646735);
    msg.setSource(29884U);
    msg.setSourceEntity(242U);
    msg.setDestination(2392U);
    msg.setDestinationEntity(43U);
    msg.op = 2U;
    msg.file.assign("LUHWGLCDXYKVDZEQYAEUJKOXYRILCXHQBPTHFMGMBPZZHDQTBMGSVHKZVUXANKBCGONOLUOVZSRPSXJEODIVWGDLVDDIPHQEBRYWWZKXNFFANMYQTMBECJXHPWREAVCANGBACLEURJWEIXRNJNVFFLIQOWQKPEURZSOYSCBIPZFIFRWQGTCFDDBYRJTILTGNEHJYPQTZGLAOUOUSPSSPCVRYBZTMUFGKKAHOAYMAKSMNKNTJ");

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
    msg.setTimeStamp(0.4141123951186364);
    msg.setSource(20533U);
    msg.setSourceEntity(40U);
    msg.setDestination(55828U);
    msg.setDestinationEntity(38U);
    msg.op = 93U;
    msg.file.assign("SIAYNIFOARWDXVMWCFRBPUBQZXWKBVXGCDXCYUTQLOUXRIQGGNDVPCURYFIUJBIFEQZHEOVTPNAHXOQEOCBZTXERFSRROLEAFATMHGLYSADDEWHSQSZEAHPDIJSNKQEVYJKVOPPNWTNZLMZBGULKPQIYSLUMWJQYDPTMTMJCLNNCFLFXDUXEYVWXKDKMMSQRLAYWVCMRPRFTGJO");

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
    msg.setTimeStamp(0.45727826437911023);
    msg.setSource(52446U);
    msg.setSourceEntity(195U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(159U);
    msg.op = 175U;
    msg.clock = 0.22212248151460168;
    msg.tz = -111;

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
    msg.setTimeStamp(0.13410765670369884);
    msg.setSource(16404U);
    msg.setSourceEntity(244U);
    msg.setDestination(50872U);
    msg.setDestinationEntity(191U);
    msg.op = 56U;
    msg.clock = 0.9373845454695969;
    msg.tz = -51;

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
    msg.setTimeStamp(0.48605290740524254);
    msg.setSource(40273U);
    msg.setSourceEntity(79U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(181U);
    msg.op = 52U;
    msg.clock = 0.9602092858672484;
    msg.tz = -121;

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
    msg.setTimeStamp(0.42813055670763045);
    msg.setSource(35912U);
    msg.setSourceEntity(238U);
    msg.setDestination(22738U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0724535270605644);
    msg.setSource(47881U);
    msg.setSourceEntity(235U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.11745393790672054);
    msg.setSource(43088U);
    msg.setSourceEntity(116U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.4898937670899709);
    msg.setSource(3453U);
    msg.setSourceEntity(195U);
    msg.setDestination(34046U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("PUQEHTWYHPSDNDZTGTIRRPJJYFAVDUYUWVASOVPKIWIEXIMPRJNDZLGCEHEEOPBITQBZSYCHNDAKMSHWXG");
    msg.sys_type = 21U;
    msg.owner = 28584U;
    msg.lat = 0.11974380834441334;
    msg.lon = 0.11445430186649797;
    msg.height = 0.19769265996389784;
    msg.services.assign("SURAMHVUBUEHWWFNYMBEOQVMATICQHLZYWVNYPQXQ");

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
    msg.setTimeStamp(0.008376806150973026);
    msg.setSource(50285U);
    msg.setSourceEntity(124U);
    msg.setDestination(25866U);
    msg.setDestinationEntity(105U);
    msg.sys_name.assign("FVXLZHVWVJUBBLYSBFSQJLYEPXIKWYMMI");
    msg.sys_type = 116U;
    msg.owner = 27716U;
    msg.lat = 0.9302868381177722;
    msg.lon = 0.6362249107330897;
    msg.height = 0.03876551932728234;
    msg.services.assign("MDBBKDTFXYPNJVRBGJOQBEIQEOTXFHONPGWWUMAAACWFCFLXOOUYDIEDWKCGVJWCSFIXMXSDNWUWTIMLJHSTPOZRGKGBMQUKGDCPDBUHONYAEFVICHTWJGVRKZXYNBUVBERPLBFUYSHLINNKHRUKYANLVZZZZTZF");

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
    msg.setTimeStamp(0.8898775999410464);
    msg.setSource(20944U);
    msg.setSourceEntity(132U);
    msg.setDestination(62583U);
    msg.setDestinationEntity(21U);
    msg.sys_name.assign("FORQKNHCXSYYMPBHOPERGDWTNLECDDBTTHSXADHBNFRWZKBMQJOOWSZVJVTMAPJQIKEIZEIPTGQYNSOTZSXGKSCJJQVMAWCDLCLOGUEXKELFYIEGDYUTDNVDUXCWRQHIRSSCFYYSNAFFLUWLBVMVCAHLZATORFNKXZEMJZADWJIRZNXWZGBHVHEUUGRUCQWIKFQDYPGPUYXETIAMLPAQOKLXRYKURNQPPHIOJZLCOH");
    msg.sys_type = 239U;
    msg.owner = 4310U;
    msg.lat = 0.5807337208807508;
    msg.lon = 0.3997176919197075;
    msg.height = 0.2483373936185158;
    msg.services.assign("RZLPBHWXMJDJTKMQYNJHEVPGYSBLIKIBFTUCEVIQBKWTHSOQSOXULYIEDBQYLSUFIGFBEGNDOWVMWIEHFZID");

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
    msg.setTimeStamp(0.7206446794999399);
    msg.setSource(27165U);
    msg.setSourceEntity(54U);
    msg.setDestination(57946U);
    msg.setDestinationEntity(230U);
    msg.service.assign("XRLAYQNLRRUPTPBRWEIUXCWXVUBNUSNVNOEOAUZTTNHGNAVPZADKLMBGUYIBFSJGJHYDHMQXBLCQIDVQYCDTLEEGVJFFYWXIJIGKEGQZFNHZWKWGPNMCBAQPGVZWXBAROVRTUVDEHUTOHKNRSZSROZSHHVXYCE");
    msg.service_type = 197U;

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
    msg.setTimeStamp(0.2756200790498259);
    msg.setSource(59247U);
    msg.setSourceEntity(193U);
    msg.setDestination(55131U);
    msg.setDestinationEntity(81U);
    msg.service.assign("BMUJOKRPJJ");
    msg.service_type = 28U;

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
    msg.setTimeStamp(0.22395676602899506);
    msg.setSource(42106U);
    msg.setSourceEntity(92U);
    msg.setDestination(40871U);
    msg.setDestinationEntity(144U);
    msg.service.assign("ZLGQJGYABATKGNPIZNOPHQCJSWBZCK");
    msg.service_type = 195U;

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
    msg.setTimeStamp(0.3171660512455474);
    msg.setSource(26748U);
    msg.setSourceEntity(31U);
    msg.setDestination(28972U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8572590710194803;

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
    msg.setTimeStamp(0.6855886326345407);
    msg.setSource(51155U);
    msg.setSourceEntity(107U);
    msg.setDestination(43367U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7155529297176393;

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
    msg.setTimeStamp(0.7955273392561322);
    msg.setSource(13294U);
    msg.setSourceEntity(53U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(95U);
    msg.value = 0.26148468169082506;

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
    msg.setTimeStamp(0.550094229314237);
    msg.setSource(30992U);
    msg.setSourceEntity(61U);
    msg.setDestination(39427U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3686457340274806;

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
    msg.setTimeStamp(0.4258290625913699);
    msg.setSource(4368U);
    msg.setSourceEntity(0U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6476593813383112;

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
    msg.setTimeStamp(0.5125474831236958);
    msg.setSource(5303U);
    msg.setSourceEntity(219U);
    msg.setDestination(55690U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6693140397400144;

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
    msg.setTimeStamp(0.4639021850915559);
    msg.setSource(37188U);
    msg.setSourceEntity(56U);
    msg.setDestination(50875U);
    msg.setDestinationEntity(30U);
    msg.value = 0.0399559836035297;

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
    msg.setTimeStamp(0.7193714639739457);
    msg.setSource(25062U);
    msg.setSourceEntity(35U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8250794798206057;

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
    msg.setTimeStamp(0.5951295101478437);
    msg.setSource(52289U);
    msg.setSourceEntity(163U);
    msg.setDestination(19022U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9321843596571228;

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
    msg.setTimeStamp(0.7096486028121807);
    msg.setSource(47682U);
    msg.setSourceEntity(244U);
    msg.setDestination(50181U);
    msg.setDestinationEntity(14U);
    msg.number.assign("XCIZWCGLJYKROEHMACZIQQYEJWIAQYWONDBPPIXXKH");
    msg.timeout = 48054U;
    msg.contents.assign("SOBLZEYQZCIYYSMRDVGGWRPAXJHMUFCQHITXKUAEMITWMQVWWDPGWPXYKPKPJRJDLSRSDZVKVHAQHNIJKCPTRRPBLVGOTCMKGEENBTMPNWFDEDVZFAERZTIIXLUOLZYFZZWTOKBVUMUUCIPQHJSSXUQOVMXZAEFAFYIYQYKHD");

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
    msg.setTimeStamp(0.041872956297663855);
    msg.setSource(46763U);
    msg.setSourceEntity(155U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(74U);
    msg.number.assign("GHSIVMJFZVCEHBXDBGLCHBZGIXNRHQXPZEMJICWNQISWSLREZSUXUXUDTNYSBTVNZOIUAGLCOFKYGFKOATTYSFEWTBDDQFYEYOYOGUQULDJLZPVJATRWXKAPRPRNUNYRFYELXACRKXG");
    msg.timeout = 28899U;
    msg.contents.assign("NJMOUTDOAYMTXLGKYQAZZZEBQXYRHXHENQUPDDQHHJZPVGJDKETROIHMKMVFPLLLHVRQKBOJGWUSNTTWCGFZODYXBQUHTSKLVKIFZRCHTWMCTQCBSNGAXMRPBGVPIIDZFOIZEOBWRUPNHCNXCMIQJWGESVVUSAXAERZMKNNJFYBVUUCRFNPRPCULETIDYKDACPKISWWFDZJCGYBXFLSJAMBYIVVL");

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
    msg.setTimeStamp(0.948132574407163);
    msg.setSource(30668U);
    msg.setSourceEntity(170U);
    msg.setDestination(64477U);
    msg.setDestinationEntity(46U);
    msg.number.assign("CXWHVZKRTFRMRGZ");
    msg.timeout = 45562U;
    msg.contents.assign("OBCMNPKFQIZLHKAGOSJPZFCMTSSGRX");

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
    msg.setTimeStamp(0.6458805438378281);
    msg.setSource(24863U);
    msg.setSourceEntity(77U);
    msg.setDestination(64540U);
    msg.setDestinationEntity(21U);
    msg.seq = 1061415407U;
    msg.destination.assign("LJHVEBMCLJEPQQONUEUTJICIAKYMWTIBOGQDVTRZPIVRGXKJALYWQMOALYJXPZECCENGZLAFVHWCUQUGNGUBBLPEPFGPTCJTNDFQJSUXGWHOKXQTFVEYRLUS");
    msg.timeout = 56874U;
    const char tmp_msg_0[] = {-45, 16, -30, 88, -79, -33, 71, -45, -84, -59, -3, -78, -105, 28, -24, -75, -48, 46, 46, 94, -20};
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
    msg.setTimeStamp(0.8440112776034552);
    msg.setSource(21209U);
    msg.setSourceEntity(254U);
    msg.setDestination(19234U);
    msg.setDestinationEntity(195U);
    msg.seq = 2105955813U;
    msg.destination.assign("FACRCPOHDMDEAVKLVIFKJRXCIKWYYBZWAMDESGKVQXLNZSGUBWMIKTHTXQYLKJKHGRWUMCJMNTBMOFLBJGBQGSEQCEHFYNMRVXCZSRDIYTFUANZIPCTOUPCSPPUNSQZTVPIYOSIMRGQZTXRCDEXHBVPVLLDJRLBLJN");
    msg.timeout = 4618U;
    const char tmp_msg_0[] = {-31, -66, 118, -119, -6, -67, 90, 81, -56, 87, -100, -67, -4, -100, -14, -4, -96, -20, 3, 32, 87, -25, -2, -96, -15, -17, -74, -77, 54, -86, 115, 89, -18, 65, 66, -52, 16, -33, -89, -80, -83, 95, -88, -8, -80, -33, -103, -17, 3, 19, 60, 12, 23, 97, -112, -89, -81, 120, 80, 112, -69, -59, -72, -92, -30, 16, -30, 112, 62, 49, -72, 11, -109, -102, -41, 85, 0, -18, -21, -91, 99, 115, -128, 39, -77, 97, -88, 54, 76, 2, 95, -17, -104, -76, 18, -28, -5, 90, -35, -17, -31, 91, 49, 104, 100, 126, 49, -114, -11, -115, 126, -97, 22, -24, 4, -87, 88, -128, -117, -84, -55, 125, -109, -60, -13, 95, -29, 0, -58, -109, 100, 20, 35, -89, -128, 99, -91, 16, 41, 51, 21, 65, 116, 25, -83, 88, -9, 35, 95, -88, 120, -63, 71, 24, 61, 22, 88, 111, -89, 38, 60};
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
    msg.setTimeStamp(0.7319578916302028);
    msg.setSource(36331U);
    msg.setSourceEntity(193U);
    msg.setDestination(34221U);
    msg.setDestinationEntity(161U);
    msg.seq = 1241719198U;
    msg.destination.assign("EBXLVOYBXBSTJNWNUCEKAJOWTBYIHGXIQDAQUIHPPKSTNTRDDAMQLNYLKBEEPMGHKDPKVFBIWIWTAYAVZJCWVMZYR");
    msg.timeout = 56112U;
    const char tmp_msg_0[] = {-71, 56, 101, -36, -104, 106, 100, 33, -64, -99, -29, 19, 38, 17, 9, 30, -40, 115, 26, 55, -52, -79, 66, -128, -118, -44, 83, 17, -47, -3, 33, -10, -2, -16, -46, 41, -93, 55, 24, -120, 108, -66, 126, 30, 85, 12, 99, -3, 54, -42, 1, 53, 113, 14, -117, -53, -28, 8, -100, -61, 120, -92, -33, 54, 30, -45, 28, 104, 67, 57};
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
    msg.setTimeStamp(0.29697082627550864);
    msg.setSource(12286U);
    msg.setSourceEntity(134U);
    msg.setDestination(20142U);
    msg.setDestinationEntity(54U);
    msg.source.assign("XFKIVCCIXNGDAMXLWSUAOPUONKQPVJBYTQBIFWORIMUOWPVCJRYFNAZXARWAGKICLSKSYNVWJHYMONXIJZNUXTAUQTCHIBTSJLXRQGWZWBLTWFJLMEPZMQRCKBYYJLOCURKNLDEQSQVHTSMHN");
    const char tmp_msg_0[] = {0, -36, 21, -23, -81, 1, 38, 63, -66, 33, 19, -60, 51, 30, -79, -15, 117, 110, 85, 60, -29, -3, -125, 120, -96, 95, -96, 74, 101, -44, 67, -78, 7, -104, 103, 15, -96, 99, 25, -68, -63, -42, -106, 110, -48, 34, 77, 88, -17, -99, 121, -10, 47, -48, -71, -45, -83, -52, -33, -28, 87, 49, 7, -49, 68, -58, 96, -74, -77, -81, -45, -33, -77, 35, -51, -94, -102, -34, 38, -85, -34, -10, 37, 72, -24, 29, 46, -100, -128, -70, 24, -69, 71, 109, 56, -6, -48, -47, -63, -62, -13, -51, 109, -80, -97, -33, 106, 117, 47, 78, 85, -27, -10, -87, -97, 11, -83, 74, -69, -94, -123, -66, 45, -126, 121, -22, 20, -56, 3, -38, 98, -44, -35, 116, -66, -119, -92, -65, -96, 57, 94, 112, 19, -109, 40, 50, 46, 35, -119, -60, 12, 85, -88, 124, 31, 122, 121, -122, -25, 76, -49, -125, -71, -117, -12, -49, -17, -114, -90, 69, -39, -117, -113, 60, -13, 42, -9, 33, -65, -113, -8, -122, -81, -7, -12, 50, -73, 103, -48, 64, 3, 116, 71, -70, 112, -2, 40, 37, -68, -16, -6, -16};
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
    msg.setTimeStamp(0.382268279670967);
    msg.setSource(15674U);
    msg.setSourceEntity(127U);
    msg.setDestination(22139U);
    msg.setDestinationEntity(164U);
    msg.source.assign("BYNEPMDAILQVVZHRPXOFTCHYVZKAMEWFLVLRISCKBBHEJVRASAYXEBGKFTXJLXCZUNNGOGOQSLKKNTANDYFZSTPABUPIRBVJRQSAVQSCSNHSMMXZEQINXRRZFPTKRYQJYWKMFDDTCIWFDOIGFLBHJGZMPXUGJOUETHHQIHBUTLFVCISDHJCUTCPFLKB");
    const char tmp_msg_0[] = {106, 52, -27, -42, -31, 120, -12, 84, -48, 63, 91, -25, 98, 66, -107, 109, -79, -43, -67, 55, 98, -12, -31, 107, 22, 89, -117, -76, -40, 124, 44, -112, 39, -89, -17, 38, 80, 123, 4, 54, -112, -15, 120, -57, 119, -11, 123, -88, 61, -86, -120, 84, 103, 1, -69, -60, 59, -20, -67, 88, -84, 47, -127, 118, 105, 124, -12, 63, -125, -74};
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
    msg.setTimeStamp(0.48946451474559616);
    msg.setSource(15567U);
    msg.setSourceEntity(74U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(11U);
    msg.source.assign("QCJXSTAXTLAEJEACYBOJSOBUGTGZWZEXFANCWCUHROGQFFYRNLVAFVKRTRFNOKBZNXBISZUUVKVJEVLLHXKGEIPOFWSSJPDPGJQQQXUNSLRICVPYDIIENTBVHKHMUI");
    const char tmp_msg_0[] = {110, 44, 69, 87, 77, -10, -8, 60, 79, 90, -79, 45, -128, -116, 106, -107, 125, -18, -23, 56, 47, 9, 119, -111, -124, -66, 122, 24, 91, 4, 39, 16, -56, -116, -91, -34};
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
    msg.setTimeStamp(0.7344658022239159);
    msg.setSource(3196U);
    msg.setSourceEntity(14U);
    msg.setDestination(18676U);
    msg.setDestinationEntity(122U);
    msg.seq = 3225807298U;
    msg.state = 20U;
    msg.error.assign("AWAXMCYVKVIQLMNGSHPTLLVZAOODAYPZIOOGXQUSRRWNGPJVGRCCGFQNEHPWSZNBBRKMEZYMRPJDBJUTNGXKKOYDBDTEUHUKBEQHXYKPJIMSLYTUITMDBZOXPFCAFOQHLKVNJEKTPMWFCSMKCUFOLPQEMBSBVDXERSJWPIZQAYHRWCVAKQGWVXWIZSIYDJ");

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
    msg.setTimeStamp(0.13213794423480163);
    msg.setSource(45045U);
    msg.setSourceEntity(30U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(13U);
    msg.seq = 3936820217U;
    msg.state = 73U;
    msg.error.assign("ESUIJATKQVQJXQBGXNCZVJWLDQIAQHLLWTOKZSWMNTFYWYDTXKVINKABAMCJDXWLGOAEYSREPMEXSTULVBEKNVYRNADFUVELNSCUSDZCPYVTZFBJBMS");

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
    msg.setTimeStamp(0.8500750894037847);
    msg.setSource(17752U);
    msg.setSourceEntity(91U);
    msg.setDestination(11093U);
    msg.setDestinationEntity(137U);
    msg.seq = 3142268303U;
    msg.state = 209U;
    msg.error.assign("JEPAQNWOTLZPXJXGIHYEBDBCRNRIRBQDFFZXUVADEPNTWMHMOXVWFCMADKYPSYGLZXKJQIMGTJRCCAMDQZRIVATQORFWPXQAJTKWIKAXURVNNLXPUTBSWZKKEQHZIHGCDTMLV");

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
    msg.setTimeStamp(0.5316077881208681);
    msg.setSource(51190U);
    msg.setSourceEntity(170U);
    msg.setDestination(7011U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("MSWGCYGDIXODHSTGXCJCHEYMDIFSAWNATJALTIQNRKNNCISCMSBTLAZGIXOBDPZSRFTCWVOAOHOQPXDKPHNVRJFQCUYIYMENBRTOKCPPLWFWMXMBZ");
    msg.text.assign("YOLCWDHHCUKUMBPPXTWRBPRAOEFNMRAZDPZWBUUMQV");

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
    msg.setTimeStamp(0.7992318195340999);
    msg.setSource(6654U);
    msg.setSourceEntity(148U);
    msg.setDestination(39647U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("ZXNEJECTHYI");
    msg.text.assign("VGBMYBNXIKWEWEDQVTIMTOSCLADVOZYRENIEKXIVDPKGHVSTJVXPTYWUCGEUZOUUPWLZJBTWGBRMLDKSRRFFDJAZKBGROWNUXTKTNFQJKCDNYAOQMWJLRFABFARENPUJZMOYMCPHCLCXMCIVCGKAFGSQQ");

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
    msg.setTimeStamp(0.8990106725075279);
    msg.setSource(17834U);
    msg.setSourceEntity(216U);
    msg.setDestination(4313U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("DRYMIOMJQBRYCRKJLOHQMUMFLZRAKYWIOCPPWATCPEQAFSAEEYWVGIWLMWFQUTKWBCJJYSKSOPDSCYURGXEMBKVQNCXFVZXSSJBIYCDCQTFAISKRZTDNOZILXTAHXJZRXAZFBDYPNXIJBJKOMLFKZTLGEOONZGJBH");
    msg.text.assign("WTIYRGJVQDTKYEBLWOPECSLFKDWHVURPTVEUFXVRQNGCEZDFLEYVRMMWQPGOAADBPKIMZFSXUQJAHUYGLKVILIASKOOQKLUJSJXHSCWQCZVLMXOJJDEFGNGXBMTZRUWYBTFFAIKYDBAJMGYMNYNXZHNMEUIB");

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
    msg.setTimeStamp(0.775238048973604);
    msg.setSource(47712U);
    msg.setSourceEntity(249U);
    msg.setDestination(50125U);
    msg.setDestinationEntity(172U);
    msg.origin.assign("SIXGWRXGKRIUZKKZYTVYQTDOUTTDTECHJDXVJBEFBOARLLRMASSQVMHQGMECBFJ");
    msg.htime = 0.43774005969989005;
    msg.lat = 0.5460285578715848;
    msg.lon = 0.6464793412936338;
    const char tmp_msg_0[] = {79, -54, -5, 4, 66, -74, 13, 15, -29, -53, -120, -120, -49, 87, -17, -7, 116, -67, -45, -74, 119, 118};
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
    msg.setTimeStamp(0.4947101153402499);
    msg.setSource(65312U);
    msg.setSourceEntity(96U);
    msg.setDestination(50320U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("AUDGFBBHGCLWZWTSLZSFEYMTHWDEEDIIQAFMUDAYAYBLSQDYVVRDPFVRC");
    msg.htime = 0.590339345092646;
    msg.lat = 0.856541733251445;
    msg.lon = 0.7456187741176865;
    const char tmp_msg_0[] = {-76, -74, 86, -9, 64, 88, 53, 125, 107, 65, 10, -20, 23, -41, -98, -72, 64, -39, -79, -105, 9, 113, -54, 94, 2, 13, 35, 113, 50, -128, -45, -57, -104, -99, 91, -81, -48, 108, 100, 116, -90, -121, 96, 100, -100, 48, -22, -4, 39, 49, 67, 123, -61, 30, 21, 99, -69, 24, 91, 103, -97, 34, 6, -98, 53, 45, -105, -11, -53, -53, -121, -58, 117, -126, 50, -64, 92, -66, 67, -12, 58, -39, 33, -11, -51, -64, -68, -74, -46, 113, 1, -58, -107, -46, -2, -27, -73, -73, 93, -125, 84, -74, 38, -50, 10, -50, 55, 50, 24, 107, 81, -117, -125, 121, -71, -65, -11, 80, 14, 106, 14, 112, -74, -74, -57, 10, -91, -126, 54, 74, 89, 118, -14, -77, 28, 14, 69, -59, -112, 35, -10, 1, 103, -108, 126, -74, -23, -97, 31, 118, 5, 50, 3, -15, -98, 76, -92, -103, 13, 12, -70, -50, 98};
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
    msg.setTimeStamp(0.061216465953788046);
    msg.setSource(13676U);
    msg.setSourceEntity(189U);
    msg.setDestination(47142U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("TZDEVOBKLNXXSVMKBEILMUXZLYZKYJOJLFHANNIGRHKHTAQGOJWSHIJFFVYNDVZTEFOKBOAITSGDRXXCOGAGKGVFPLQTTGBSPJZWNNYJODWMUZXDKFHIUVROUYIBUISZFCENPPYCMRCIXWTZBYKUAPMENFAHWJFLCTLNNWLEMJKAFMTGPDDUQLYHVVWDCBEPQRQQPUKDRQIUM");
    msg.htime = 0.5356836468738878;
    msg.lat = 0.02271707497478337;
    msg.lon = 0.23798494978679785;
    const char tmp_msg_0[] = {8, 81, -78, -106, 79, -27, 35, 115, -64, 28, -113, 44, -51, 2, 3, 33, 84, 103, 73, -103, 79, -44, -7, -83, 37, 65, -31, 3, 61, 34, 1, 66, -95, 70, -88, -80, 44, 80, 31, 61, 33, -60, -70};
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
    msg.setTimeStamp(0.593951983781045);
    msg.setSource(54901U);
    msg.setSourceEntity(74U);
    msg.setDestination(29742U);
    msg.setDestinationEntity(87U);
    msg.req_id = 59007U;
    msg.ttl = 4934U;
    msg.destination.assign("WMLJPFKSQLZKKTBJOGBOHWKJCXBLFUTRTEZXYKWDLUGFNDGAPNSNBRGQLJNSGVMJGQNADEXICVZDRCDYETFSCPRWLVVMZWSAXOTYHAELBOHEZYJIMAJNPTIOYZKQYBDMTBCWVXCFASQFQDOLFZJNYKXPMXP");
    const char tmp_msg_0[] = {27, 9, -32, -66, 106, 126, -67, -64, -15, 10, 29, -71, 15, 64, -73, -127, 119, 52, -66, -117, -100, 48, 81, -91, 35, 91, 110, -106, 33, 4, -93, -26, -115, 91, -20, -74, 113, 66, -81, -1, -128, -119, -18, 105, 49, -84, -88, 106, -45, 55, -68, -72, 115, 106, -46, 25, 113, -74, 85, 96, -98, -23, 78, -5, 73, -94, 8, 68, -95, -11, -61, -69, 44, 113, 105, 61, -46, 5, 114, -58, 124, -63, -99, 66, 98, -122, 2, 113, 38, 48, -20, 85, -34, 92, 69, -25, -32, 97, 7, 56, -50, 4, -109, -108, 85, 85, 109, -98, -47, 44, -20, 116, 120, 117, 74, -49, 60, 8, 13, 10, -12, 97, 103, 57, 81, 61, -17, -108, -52, -111};
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
    msg.setTimeStamp(0.11952479266779925);
    msg.setSource(6802U);
    msg.setSourceEntity(212U);
    msg.setDestination(6409U);
    msg.setDestinationEntity(236U);
    msg.req_id = 35781U;
    msg.ttl = 56657U;
    msg.destination.assign("ILKSLRRWZYVMPCFHNKNYIQKPQVZUFVOMYVQFIBFKILJTRDTRANKWPYKCBVUCXMEYJFJ");
    const char tmp_msg_0[] = {-18, 68, 103, 42, -1, -26, -57, -36, 106, 29, -81, -24, -60, -90, 76, 93, 78, -84, -58, -12, 6, 117, 110, -124, 6, 39, -76, -18, 66, -73, -110, 47, -20, -81, 70, -3, 105, -93, -8, 84, 41, -31, 51, -15, 73, 41, -127, 126, 108, 96, -46, -128, -14, -98, -3, -30, -21, 83, -96, 44, -80, -65, 12, -116, -42, -97, 98, -108, -20, -125, 4, 57, 4, 68, -76, -97, 14, -63, 29, 75, 52, 75, -127, 49, -119, 50, -24, -88, 104, 25, -74, 41, 69, -45, -4, -23, 44, -38, -100, 80, -121, -96, 13, -116, -109, -95, -43, -121, 95, -59, -113, 72, 77, 112, -68, 109, -102, -123, -112, -54, -22, -66, -51, -85, -24, -121, -33, 19, 103, -1, -86, -95, -86, -114, -125, 94, -94, 55, -8, -96, 71, -119, 117, -64, -99, -80, -93, 40, 109, -59, -55, -22, -16, 106, -14, 76, 44, -48, -28, 25, 45, -34, 120, -119, 73, 49, -28, -28, 29, 15, 48, 84, 68, -45, 39, 3, -115, -14, 30, 64, -97, 30, 11, 7, -78, -30, 96, -43, 9, 60, 21, -64, 113, -52, -68, 2, -109, 123, -90, -90, -30, -38, -14, -54, -27, 114, -98, 109, 42, 99, 32, -104, 48, 70, -22};
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
    msg.setTimeStamp(0.5194425797965805);
    msg.setSource(56850U);
    msg.setSourceEntity(39U);
    msg.setDestination(41768U);
    msg.setDestinationEntity(79U);
    msg.req_id = 36617U;
    msg.ttl = 5806U;
    msg.destination.assign("TDSXDAZOXPAMIMYBPYVLDTENUFCYNEWIXVYPWDHEGQEHFQOOWKZFLCBJMBQWMHNLUJCVCNJGDVIZBCKBJLTKOHUZIUYCKVHMRDCOLRZADHSESCYWSNZDQSUUQMRJBGXWHPZIQNGFKXRVSSMKGSTEPBNQPYLGWAGVAFMVIHCNUSCFPRF");
    const char tmp_msg_0[] = {114, -67, -59, -86, -95, -86, 123, 67, 66, -42, 74, 68, 6, -17, 55, 4, -24, 89, -116, -22, -18, 120, 43, 105, -7, -21, -15, 113, -59, 45, -56, -89, 113, 64, -4, -103, 10, 2, -124, -109, -98, -27, -118, 13, -92, -49, 11, -36, 62, -18, 91, -46, -61, 32, 25, 80, 106, 31, -68, -88, -41, 74, -74, 112, 10, -19, 95, 9, -22, -80, 93, 95, 108, -89, -119, -120, -65, 22, -81, -52, -3, -33, 31, 16, 0, 48, -122, -45, 23, -90, -126, 109, 73, -47, -81, 79, 118, -112, 24, 52, 58, 3, 76, -97, -85, 116, 90, 37, 25, 110, -4, 119, -44, 94, -109, 46, 51, -116, 78, 28, 109, 74, -91, -105, -31, 65};
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
    msg.setTimeStamp(0.5090033445237312);
    msg.setSource(57915U);
    msg.setSourceEntity(131U);
    msg.setDestination(42332U);
    msg.setDestinationEntity(10U);
    msg.req_id = 43038U;
    msg.status = 81U;
    msg.text.assign("WPBAOUGPVTQUTHQKGOXZTZZLPNFHUIZNHGRCNBBBSGNFYKMJFFPVJEWTACJXNMYTIUCVLTZTHWULWSOYBIINJVYYFDHOMIHJAEQBJNLYFLPXAAXKTGWSWQODSSGPFZYEBMXHEONTDRNDMUECVESXHLOGYZAVKRCVXWUOXRDCUSFDAUKZRWYZGSCPFQOOWMDSRDQVGKXIXL");

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
    msg.setTimeStamp(0.5621158028570814);
    msg.setSource(4098U);
    msg.setSourceEntity(77U);
    msg.setDestination(50505U);
    msg.setDestinationEntity(102U);
    msg.req_id = 47262U;
    msg.status = 254U;
    msg.text.assign("AHHFMELMQOJURDVFCNIHBEPSKWQVKDVHKJSLPYJTWKLRNTXAZHFFVZBCHOEBAXVEQTRRWBOYORQYYOSIUCJGPASNIDRAZFANGYFQGMJBXGQDZHFTRXXJVXBGDLODXREUKBUQWGWMVUOLZWALECEXTJNCHIBHPKBIACZYMTKMQSXWPNICWPVFLMKCGQILMTOWYCZPJNEKGHLZDDEZYSAIENGVDKUPSONYCBFWYRG");

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
    msg.setTimeStamp(0.24777512685746594);
    msg.setSource(58829U);
    msg.setSourceEntity(67U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(42U);
    msg.req_id = 6106U;
    msg.status = 125U;
    msg.text.assign("KMFANPJLINXIYSJDIXVHRTURAGYHGWDX");

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
    msg.setTimeStamp(0.4586425434779766);
    msg.setSource(26113U);
    msg.setSourceEntity(183U);
    msg.setDestination(48951U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("LQLIOAOZFMTNQPGDFSQWYHNGESGBXXUHGKFSIAPABSWDAEXRCUDUCWYNHJPXPDMFDERJRBABITJNUPZZJKGGEOFLYIYFEIORDYXTDEKFZKZSQTOXHUSNWUTSMYFIKHJOKOEILHBRUUCZXVBRIDWZMJWCOTAHOMSUNQCQTJIKDIVWSBYRJAXBZLCGVDPVFVVTMJQKOHRMNCUWEKAQNNHNPWLKHLTAZMVEQYXYPPMLGB");
    msg.links = 3589108940U;

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
    msg.setTimeStamp(0.18862826540248456);
    msg.setSource(40252U);
    msg.setSourceEntity(212U);
    msg.setDestination(10932U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("LXCOCMPWQLGTXGBWPIBDUKLPFCTYINYJGPQVAZWDVVKJHQWUYBTCEJBFNNVSLTQSSMUKZRVOFRPFJDDUBPDMCNUNSJSXOFKPZDZKMQZLCPHOYOQYDWMSWUTMCRNVMNTEBSTTPYSICWQYARBGAQVIEJCENBULQFIDVTGAKHMYOFMKYXWIIIAGFEPXHXQMROAHKTUHULRHEJEWBAXLKOHDAHIDZFJXJ");
    msg.links = 2897645242U;

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
    msg.setTimeStamp(0.022440993667885656);
    msg.setSource(15657U);
    msg.setSourceEntity(117U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("UALWMVVIALXZGFNYJAVMEWOVLMXROGSDBSIGAKYEGJDPUZKZLHAQXVQIBKSYTJDKGUFPNCQIBYNERHAPPUSEQNLWYPKUICHOXFHTWWHMXHCNZQHNUXQKOSCCMYKJZDJJGSMYESTRPAEWBSYLCMCFLCDDMMEUKWUFFIJKZCOVYDJNTTMVRTIUECTBBBQRHHDHAFUENXTGPXRFDOYTPJWVGBROQS");
    msg.links = 2138160910U;

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
    msg.setTimeStamp(0.39789831283413235);
    msg.setSource(747U);
    msg.setSourceEntity(51U);
    msg.setDestination(30459U);
    msg.setDestinationEntity(122U);
    msg.groupname.assign("FALHCCQAJBUVC");
    msg.action = 3U;
    msg.grouplist.assign("ZLKJUXAQBTEEAYGPIOLFHKDPIIGSBECSLLZLTISSVXUFOEZJONDAZAWWTJKFYBOJVLZNCJUNKMLDHLKHBHBMCOGMYUSEEHGYMSHIDNRKVDMFZFVSJUQQWXRGLMZAVWCAMTNYLKPDRB");

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
    msg.setTimeStamp(0.28490095059115406);
    msg.setSource(14945U);
    msg.setSourceEntity(147U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(65U);
    msg.groupname.assign("QXEBEARRPFFRXLNYZCECFMOTGPNEPCVMUKGYJPUXGBGDYIIXFDEZQJADXRVMTAGZTUJNTLWUTMRPOVGCPCHILTHOBCQCYGSSXDBQMTAPWJHHCUOBTYVMKVMMFHBJDWHVWKWOOYKQDNXRLOCLYIRJSLAFJONBSJUIH");
    msg.action = 95U;
    msg.grouplist.assign("BGTGKLVAPXUNAZFONUMGPYCWJXRSWPLPJRLHTNFITQMMIUQGWSVDCUYYDUJOZOAMLBWEDUARPHQZSZZRXOKCSGJSEGHKDHMPDJYPOYVBFCMQIADXAKMZDXAQKIYURKXKJXQGOAFZXZVFWNGDSBENJCVTIFIBLEBCJRLRCHJWMTVKFTEHCHFAOFHRQITUNQYEOVXXSQANBBPBNKLWHIDKNSULD");

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
    msg.setTimeStamp(0.9148613161252701);
    msg.setSource(26872U);
    msg.setSourceEntity(152U);
    msg.setDestination(648U);
    msg.setDestinationEntity(207U);
    msg.groupname.assign("JJVTBJKRKFQBBEJNHFFRGFVERCELFYQVTKKISOIGBQPBYZAIUEUVZHVIOWAUALSPWXVTZYRCKKDZRDSPGREDIIHGOGTRQOSDPYQKHTNBWNZZWNLJOLOXRLSYLMERJCFZETJXBWCJSDNFASWOKGHKPXVLXBXWMQNMMNBITAYXILOTUANUCQCGDJLOAUQTSDXVPMIUCJYVEHYFUZFQMWHACPTEPIMLW");
    msg.action = 185U;
    msg.grouplist.assign("KWNPOGTGOSFYWIXYUPOQPHVNKDHSFRTRTYBYWPHQDNCIXFNBQOQFGSXTCXQQRUZIJIZUCZUUIEGLCVLSOJCNTYASDPCNHMJDYXMFXLHXVEMMGUINRHHEWBUVMCDVKZLLYPLFNFDYBRCDYCZCIETPHQBBPJBKSEHVWPUAABIKEAGFSZEBRGXLPAWOWOAUQJJWLVF");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.4961346314627708);
    msg.setSource(30111U);
    msg.setSourceEntity(70U);
    msg.setDestination(28168U);
    msg.setDestinationEntity(88U);
    msg.id = 60U;
    msg.range = 0.7547981392276387;

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
    msg.setTimeStamp(0.6847067789109448);
    msg.setSource(22226U);
    msg.setSourceEntity(211U);
    msg.setDestination(27529U);
    msg.setDestinationEntity(175U);
    msg.id = 94U;
    msg.range = 0.2864607765652809;

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
    msg.setTimeStamp(0.2307268580743509);
    msg.setSource(45182U);
    msg.setSourceEntity(219U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(233U);
    msg.id = 246U;
    msg.range = 0.6642758419964762;

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
    msg.setTimeStamp(0.33857163382041955);
    msg.setSource(56109U);
    msg.setSourceEntity(189U);
    msg.setDestination(53345U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("EHVJAJZLNHWGFCULOYDQAETISQIXYESVTCPGXYCSVVBNFZRRVOUTQMAEVQOPMPRINKQBFSJEURXNNJUOBVRUGDPFWRAMZTRGBOEEYGBXZPVJLSWLUPEHMHSWRALSBHTLUMSAXVLBDWAZJCLTESYXJQMSZZTEPGUDCZDOQKHVMIOGAWXJTHIGDIYLMKLY");
    msg.lat = 0.43014451665658826;
    msg.lon = 0.9847707977260683;
    msg.depth = 0.037332125416612794;
    msg.query_channel = 114U;
    msg.reply_channel = 157U;
    msg.transponder_delay = 3U;

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
    msg.setTimeStamp(0.39847279164184035);
    msg.setSource(14541U);
    msg.setSourceEntity(42U);
    msg.setDestination(48039U);
    msg.setDestinationEntity(154U);
    msg.beacon.assign("ULZIHBGLMJFTTPWYWJYQXPPWQXIRQNWLPVBJRIOKHMACHVIBVBKCSTDVYYZTMBOKMPUSRDGPNR");
    msg.lat = 0.5056979432653382;
    msg.lon = 0.9382174307533688;
    msg.depth = 0.6117028706859048;
    msg.query_channel = 226U;
    msg.reply_channel = 27U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.8650231394645558);
    msg.setSource(22998U);
    msg.setSourceEntity(20U);
    msg.setDestination(36201U);
    msg.setDestinationEntity(168U);
    msg.beacon.assign("ZYXAYOIUXPGYSCTSYOBLQQTSKDFFSPIJVQEZGLMIQRMGXHEZLBTXPFPJBZBFEPRBPGYCASNGIHRUGHNRJMDTLBRWWJZYNUCRANJFGCREAVKKUKIWIFCUQZKWU");
    msg.lat = 0.07553230227498997;
    msg.lon = 0.14927977991189434;
    msg.depth = 0.8391635540027081;
    msg.query_channel = 174U;
    msg.reply_channel = 62U;
    msg.transponder_delay = 217U;

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
    msg.setTimeStamp(0.9217040517304212);
    msg.setSource(36491U);
    msg.setSourceEntity(139U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(172U);
    msg.op = 67U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ERXFWTQMGC");
    tmp_msg_0.lat = 0.975647950334893;
    tmp_msg_0.lon = 0.9637520865215927;
    tmp_msg_0.depth = 0.050906835090103075;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 33U;
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
    msg.setTimeStamp(0.42053355229078737);
    msg.setSource(28420U);
    msg.setSourceEntity(245U);
    msg.setDestination(64851U);
    msg.setDestinationEntity(38U);
    msg.op = 79U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PMOZABLIFVX");
    tmp_msg_0.lat = 0.6071186307644567;
    tmp_msg_0.lon = 0.8639184262953095;
    tmp_msg_0.depth = 0.1854779148099518;
    tmp_msg_0.query_channel = 226U;
    tmp_msg_0.reply_channel = 183U;
    tmp_msg_0.transponder_delay = 186U;
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
    msg.setTimeStamp(0.12910040206773998);
    msg.setSource(42757U);
    msg.setSourceEntity(23U);
    msg.setDestination(46579U);
    msg.setDestinationEntity(175U);
    msg.op = 115U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DFUMVXBTCGPRXPFBFKQNLPATFLGRKMRPNBWCBDCPZVQSVMWGRGLTQVABCHFIJKWWBHM");
    tmp_msg_0.lat = 0.08963699623114063;
    tmp_msg_0.lon = 0.676820201493002;
    tmp_msg_0.depth = 0.7656605875614522;
    tmp_msg_0.query_channel = 100U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 20U;
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
    msg.setTimeStamp(0.7132826071830686);
    msg.setSource(11134U);
    msg.setSourceEntity(92U);
    msg.setDestination(34870U);
    msg.setDestinationEntity(23U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("BJYJNJISHPFEQSGOYBHLQTUUNGSTSWWSDDRHYMIADNJRRTSXQFWGXPIEIGRTCGKUEXARSRPNLRUFMFAAALDUHQWOLEOZKHIUEHWFXYEEVKMOHCDAKZAVTDTPO");
    tmp_msg_0.reference_frame = 205U;
    tmp_msg_0.custom.assign("MGOJALSACJBBSTGSHDHLYHMWQ");
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
    msg.setTimeStamp(0.7766699343244222);
    msg.setSource(8548U);
    msg.setSourceEntity(244U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(34U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.37197268243079296;
    tmp_msg_0.x = 0.9440181090893172;
    tmp_msg_0.y = 0.7136089627713343;
    tmp_msg_0.z = 0.12577734579064848;
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
    msg.setTimeStamp(0.22538683705421614);
    msg.setSource(47669U);
    msg.setSourceEntity(37U);
    msg.setDestination(43973U);
    msg.setDestinationEntity(216U);
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("ZDMLKZIIYSKBRMNILTTSECDVHVEHUNJOKUJEWIVHEZUPOXKXCPXNPHOTQQUR");
    tmp_msg_0.service_type = 230U;
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
    msg.setTimeStamp(0.2831221063946091);
    msg.setSource(31828U);
    msg.setSourceEntity(89U);
    msg.setDestination(26592U);
    msg.setDestinationEntity(227U);
    msg.op = 123U;
    msg.system.assign("IGCMZKOAONITERTFJCKMKOQKZURJREGEZKGRFILPTRPIQQABYTYNSOWIFLRQSXLTUV");
    msg.range = 0.43653374313202786;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.45609927184378884;
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
    msg.setTimeStamp(0.5859066507825476);
    msg.setSource(23360U);
    msg.setSourceEntity(234U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(207U);
    msg.op = 85U;
    msg.system.assign("XOFHUGTCZGQWVFAOATOQDJJKCWVLULPRXYSPNTYQWAAJUBQZCOBJHNKXK");
    msg.range = 0.6835685352091985;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 22117U;
    tmp_msg_0.x = 0.3911443900798388;
    tmp_msg_0.y = 0.0819968643133181;
    tmp_msg_0.z = 0.012949595722458795;
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
    msg.setTimeStamp(0.3219771818955417);
    msg.setSource(9046U);
    msg.setSourceEntity(118U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(187U);
    msg.op = 147U;
    msg.system.assign("IXXQZKDLBTYPSYPXUAGUYWVSTTRNFKLTIGNQHLEAJXDELUUICAEOHPGA");
    msg.range = 0.6591625698361587;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 185U;
    tmp_msg_0.eta = 60314U;
    tmp_msg_0.info.assign("SSJNBISKURQOULKT");
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
    msg.setTimeStamp(0.3473126773971402);
    msg.setSource(19445U);
    msg.setSourceEntity(53U);
    msg.setDestination(29767U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.8199718512173523);
    msg.setSource(26404U);
    msg.setSourceEntity(71U);
    msg.setDestination(12150U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.37124497405122014);
    msg.setSource(51350U);
    msg.setSourceEntity(238U);
    msg.setDestination(44029U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.3313647739471489);
    msg.setSource(57786U);
    msg.setSourceEntity(115U);
    msg.setDestination(5085U);
    msg.setDestinationEntity(192U);
    msg.list.assign("OBHCBGKCQYQEPTUVMYFLUXTLKPMXBMZBFDTSKNUEOXRGPAJJOEEZMPSRSHRRGXOZNWUDBAKVRIJVNNGZXXBCFOJHWPEIQDCUKIJTXGDVVXCHSLINOTBEKCYUZUATOEIMJPYBHDIHLCIHHSYWQATZSQSBJVXMMBAYIQFNKRRWDNCYEAPFQJVAFKGULWDZGMFNCSE");

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
    msg.setTimeStamp(0.5874893369331848);
    msg.setSource(53134U);
    msg.setSourceEntity(99U);
    msg.setDestination(25321U);
    msg.setDestinationEntity(221U);
    msg.list.assign("MAVQAZXOYCNLMLQPKGEPJEMYEJNBWKEQTDNOERBABZDCJWWEVRCCWRQYVZOVVCIQZLHNHALMRDLJHPHEGWKFGRVUERKHNOFAIBBSSFGOXPCGTFIEFXWJDOWZSAJSSKYIKBEKPIOLDLH");

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
    msg.setTimeStamp(0.2664512923831386);
    msg.setSource(54599U);
    msg.setSourceEntity(155U);
    msg.setDestination(36187U);
    msg.setDestinationEntity(155U);
    msg.list.assign("VSJXBYOWPCLNCXYIZZUPWPQBFCFURITUIFYLTYRJMFOMTUSJSZFHSAHAHNXQVEJOKDUEUYHUZVQNAQFCNZYSECLBMYGAFSPCHIIPWPRBFMQLBABNKVTVRZKQOOEJRGYDSGEOADDOMGEMRLTGNPTBNASEIVGDIWLAXLPMZQYTXGSHVRECXUWQWXOHLF");

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
    msg.setTimeStamp(0.1921917069679019);
    msg.setSource(49779U);
    msg.setSourceEntity(129U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(13U);
    msg.value = -28178;

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
    msg.setTimeStamp(0.04464097168888337);
    msg.setSource(9573U);
    msg.setSourceEntity(184U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(239U);
    msg.value = 4185;

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
    msg.setTimeStamp(0.6540457432466418);
    msg.setSource(32481U);
    msg.setSourceEntity(225U);
    msg.setDestination(38965U);
    msg.setDestinationEntity(230U);
    msg.value = -25109;

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
    msg.setTimeStamp(0.9313631447880144);
    msg.setSource(41455U);
    msg.setSourceEntity(44U);
    msg.setDestination(27273U);
    msg.setDestinationEntity(28U);
    msg.value = 0.17002134854484452;

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
    msg.setTimeStamp(0.16689511186881278);
    msg.setSource(21327U);
    msg.setSourceEntity(87U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7343184395735868;

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
    msg.setTimeStamp(0.1250230834542725);
    msg.setSource(21262U);
    msg.setSourceEntity(245U);
    msg.setDestination(10644U);
    msg.setDestinationEntity(195U);
    msg.value = 0.4698073969740597;

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
    msg.setTimeStamp(0.5116765084747548);
    msg.setSource(2609U);
    msg.setSourceEntity(206U);
    msg.setDestination(24032U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6724400344384166;

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
    msg.setTimeStamp(0.1462958117833859);
    msg.setSource(24649U);
    msg.setSourceEntity(161U);
    msg.setDestination(60105U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6391492934685179;

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
    msg.setTimeStamp(0.7153316589346653);
    msg.setSource(33817U);
    msg.setSourceEntity(1U);
    msg.setDestination(37670U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6342477514505416;

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
    msg.setTimeStamp(0.17247348116614225);
    msg.setSource(63811U);
    msg.setSourceEntity(180U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(24U);
    msg.validity = 25209U;
    msg.type = 24U;
    msg.utc_year = 9476U;
    msg.utc_month = 31U;
    msg.utc_day = 101U;
    msg.utc_time = 0.9682919353744215;
    msg.lat = 0.17855434720051733;
    msg.lon = 0.017031101784196867;
    msg.height = 0.019241415819891694;
    msg.satellites = 34U;
    msg.cog = 0.3310113791577163;
    msg.sog = 0.3074644610076468;
    msg.hdop = 0.8219229163826435;
    msg.vdop = 0.2967923792474868;
    msg.hacc = 0.03613958073687984;
    msg.vacc = 0.8306493119350504;

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
    msg.setTimeStamp(0.8355319854549603);
    msg.setSource(46541U);
    msg.setSourceEntity(207U);
    msg.setDestination(60406U);
    msg.setDestinationEntity(106U);
    msg.validity = 1779U;
    msg.type = 252U;
    msg.utc_year = 60969U;
    msg.utc_month = 224U;
    msg.utc_day = 37U;
    msg.utc_time = 0.6318132234267618;
    msg.lat = 0.8767356081429213;
    msg.lon = 0.6630230725098605;
    msg.height = 0.8279209384661922;
    msg.satellites = 248U;
    msg.cog = 0.631813859464015;
    msg.sog = 0.6465389819307449;
    msg.hdop = 0.6131695070638382;
    msg.vdop = 0.9228962062805515;
    msg.hacc = 0.053768228168807775;
    msg.vacc = 0.5685454487390033;

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
    msg.setTimeStamp(0.8016323160926184);
    msg.setSource(18889U);
    msg.setSourceEntity(131U);
    msg.setDestination(14798U);
    msg.setDestinationEntity(187U);
    msg.validity = 55453U;
    msg.type = 128U;
    msg.utc_year = 41591U;
    msg.utc_month = 110U;
    msg.utc_day = 23U;
    msg.utc_time = 0.12080778932006053;
    msg.lat = 0.8489012209644163;
    msg.lon = 0.14426574747507748;
    msg.height = 0.19777269939894504;
    msg.satellites = 139U;
    msg.cog = 0.5334259358254729;
    msg.sog = 0.37356352092837997;
    msg.hdop = 0.10072980392513631;
    msg.vdop = 0.8469060993307242;
    msg.hacc = 0.09580645806763433;
    msg.vacc = 0.05833270934291368;

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
    msg.setTimeStamp(0.7574463502144513);
    msg.setSource(34860U);
    msg.setSourceEntity(212U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(235U);
    msg.time = 0.4860023085607429;
    msg.phi = 0.920874557229361;
    msg.theta = 0.16840425666912462;
    msg.psi = 0.2194073736174489;
    msg.psi_magnetic = 0.4388166019267813;

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
    msg.setTimeStamp(0.8213549670849487);
    msg.setSource(21385U);
    msg.setSourceEntity(205U);
    msg.setDestination(64212U);
    msg.setDestinationEntity(125U);
    msg.time = 0.9314213498026451;
    msg.phi = 0.5860713024799836;
    msg.theta = 0.6778754051992087;
    msg.psi = 0.5681430001973966;
    msg.psi_magnetic = 0.8132217174563219;

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
    msg.setTimeStamp(0.9932856823114417);
    msg.setSource(29940U);
    msg.setSourceEntity(21U);
    msg.setDestination(60426U);
    msg.setDestinationEntity(153U);
    msg.time = 0.19448330597754115;
    msg.phi = 0.05876749278919735;
    msg.theta = 0.11892936529325404;
    msg.psi = 0.23428755922966515;
    msg.psi_magnetic = 0.8297443661540402;

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
    msg.setTimeStamp(0.04081010878455882);
    msg.setSource(8501U);
    msg.setSourceEntity(199U);
    msg.setDestination(45228U);
    msg.setDestinationEntity(240U);
    msg.time = 0.38632981485411655;
    msg.x = 0.9821025918149436;
    msg.y = 0.6559064202865675;
    msg.z = 0.29710049556677975;
    msg.timestep = 0.7072318607848459;

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
    msg.setTimeStamp(0.4053084550278224);
    msg.setSource(48691U);
    msg.setSourceEntity(177U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(137U);
    msg.time = 0.11262027854107892;
    msg.x = 0.9583212060556425;
    msg.y = 0.4546659206726632;
    msg.z = 0.6651258484998441;
    msg.timestep = 0.07453260105515525;

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
    msg.setTimeStamp(0.8852103028848896);
    msg.setSource(20496U);
    msg.setSourceEntity(50U);
    msg.setDestination(5448U);
    msg.setDestinationEntity(172U);
    msg.time = 0.293140278563805;
    msg.x = 0.7938776095165433;
    msg.y = 0.9261319643803481;
    msg.z = 0.07105012239974418;
    msg.timestep = 0.5901436092462299;

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
    msg.setTimeStamp(0.2120966412408033);
    msg.setSource(47525U);
    msg.setSourceEntity(250U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(214U);
    msg.time = 0.17270323080532035;
    msg.x = 0.22348859169871105;
    msg.y = 0.8729359589192157;
    msg.z = 0.7931641225774934;

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
    msg.setTimeStamp(0.07117352379121633);
    msg.setSource(26097U);
    msg.setSourceEntity(17U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(29U);
    msg.time = 0.18529655469994355;
    msg.x = 0.07665507116354286;
    msg.y = 0.9474357358489871;
    msg.z = 0.6207144096087925;

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
    msg.setTimeStamp(0.6913938108037676);
    msg.setSource(7002U);
    msg.setSourceEntity(251U);
    msg.setDestination(29053U);
    msg.setDestinationEntity(93U);
    msg.time = 0.4314511214348553;
    msg.x = 0.5136787484908126;
    msg.y = 0.12450801975021264;
    msg.z = 0.6483027647115401;

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
    msg.setTimeStamp(0.5472482000292539);
    msg.setSource(25186U);
    msg.setSourceEntity(150U);
    msg.setDestination(2149U);
    msg.setDestinationEntity(149U);
    msg.time = 0.8585257872783887;
    msg.x = 0.5436475243761824;
    msg.y = 0.1056058283533775;
    msg.z = 0.600545220980591;

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
    msg.setTimeStamp(0.042130261270384994);
    msg.setSource(10648U);
    msg.setSourceEntity(151U);
    msg.setDestination(30524U);
    msg.setDestinationEntity(148U);
    msg.time = 0.9718881459765971;
    msg.x = 0.13882327103688863;
    msg.y = 0.41006190501351514;
    msg.z = 0.14629550915638845;

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
    msg.setTimeStamp(0.5273709090082356);
    msg.setSource(22422U);
    msg.setSourceEntity(56U);
    msg.setDestination(32428U);
    msg.setDestinationEntity(130U);
    msg.time = 0.9724894218575693;
    msg.x = 0.755591883461396;
    msg.y = 0.2652902823489225;
    msg.z = 0.765778405125695;

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
    msg.setTimeStamp(0.7353929105445789);
    msg.setSource(22542U);
    msg.setSourceEntity(153U);
    msg.setDestination(56647U);
    msg.setDestinationEntity(248U);
    msg.time = 0.38183173815243676;
    msg.x = 0.7414111786326723;
    msg.y = 0.8409463128885863;
    msg.z = 0.5073601061551494;

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
    msg.setTimeStamp(0.7910483568193909);
    msg.setSource(47288U);
    msg.setSourceEntity(216U);
    msg.setDestination(7433U);
    msg.setDestinationEntity(178U);
    msg.time = 0.3064364384315439;
    msg.x = 0.21302469552053527;
    msg.y = 0.4076457500812991;
    msg.z = 0.42699790479990374;

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
    msg.setTimeStamp(0.9524150020148012);
    msg.setSource(58155U);
    msg.setSourceEntity(52U);
    msg.setDestination(17213U);
    msg.setDestinationEntity(151U);
    msg.time = 0.04281270969853246;
    msg.x = 0.22037977527372954;
    msg.y = 0.09191344927183454;
    msg.z = 0.6635909644786505;

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
    msg.setTimeStamp(0.283503688448955);
    msg.setSource(64905U);
    msg.setSourceEntity(152U);
    msg.setDestination(38106U);
    msg.setDestinationEntity(22U);
    msg.validity = 46U;
    msg.x = 0.5086486982422437;
    msg.y = 0.2559573280147134;
    msg.z = 0.560665643223526;

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
    msg.setTimeStamp(0.4701209897248153);
    msg.setSource(8085U);
    msg.setSourceEntity(117U);
    msg.setDestination(4423U);
    msg.setDestinationEntity(29U);
    msg.validity = 181U;
    msg.x = 0.44911668884522005;
    msg.y = 0.17591498362004354;
    msg.z = 0.0069454577366179215;

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
    msg.setTimeStamp(0.8433684767137691);
    msg.setSource(40415U);
    msg.setSourceEntity(131U);
    msg.setDestination(15308U);
    msg.setDestinationEntity(130U);
    msg.validity = 116U;
    msg.x = 0.7231003474371434;
    msg.y = 0.958404254752725;
    msg.z = 0.16713206937031244;

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
    msg.setTimeStamp(0.43871796241891436);
    msg.setSource(36845U);
    msg.setSourceEntity(205U);
    msg.setDestination(20176U);
    msg.setDestinationEntity(166U);
    msg.validity = 112U;
    msg.x = 0.6035683251630661;
    msg.y = 0.14233014186494652;
    msg.z = 0.7409610336568635;

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
    msg.setTimeStamp(0.8761946100631353);
    msg.setSource(60669U);
    msg.setSourceEntity(122U);
    msg.setDestination(41594U);
    msg.setDestinationEntity(140U);
    msg.validity = 209U;
    msg.x = 0.15885229313393145;
    msg.y = 0.5554845315317167;
    msg.z = 0.6541104326081506;

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
    msg.setTimeStamp(0.35074920828801426);
    msg.setSource(61455U);
    msg.setSourceEntity(162U);
    msg.setDestination(32620U);
    msg.setDestinationEntity(52U);
    msg.validity = 50U;
    msg.x = 0.16845957150878932;
    msg.y = 0.19587791535596355;
    msg.z = 0.839672060825313;

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
    msg.setTimeStamp(0.3156582423587644);
    msg.setSource(58535U);
    msg.setSourceEntity(103U);
    msg.setDestination(49649U);
    msg.setDestinationEntity(193U);
    msg.time = 0.11000670431450399;
    msg.x = 0.7811831653757922;
    msg.y = 0.7994912677328521;
    msg.z = 0.7691724999555245;

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
    msg.setTimeStamp(0.8197113017497644);
    msg.setSource(28080U);
    msg.setSourceEntity(252U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(25U);
    msg.time = 0.519860227862241;
    msg.x = 0.7544322395490917;
    msg.y = 0.6160789234951591;
    msg.z = 0.3219607195770616;

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
    msg.setTimeStamp(0.053682672868584524);
    msg.setSource(22700U);
    msg.setSourceEntity(11U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(144U);
    msg.time = 0.846539837752117;
    msg.x = 0.02526883044985384;
    msg.y = 0.6962561405561349;
    msg.z = 0.40459651109614025;

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
    msg.setTimeStamp(0.06743559763407192);
    msg.setSource(58855U);
    msg.setSourceEntity(96U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(182U);
    msg.validity = 105U;
    msg.value = 0.36638869993781886;

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
    msg.setTimeStamp(0.6659363559362418);
    msg.setSource(26797U);
    msg.setSourceEntity(249U);
    msg.setDestination(39448U);
    msg.setDestinationEntity(247U);
    msg.validity = 141U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5875199359675193;
    tmp_msg_0.beam_height = 0.2033651230030772;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.04207104237003911;

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
    msg.setTimeStamp(0.5589147116798796);
    msg.setSource(42513U);
    msg.setSourceEntity(128U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(120U);
    msg.validity = 221U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6882914568373056;
    tmp_msg_0.y = 0.646070055030903;
    tmp_msg_0.z = 0.29431293578715123;
    tmp_msg_0.phi = 0.7796369087036085;
    tmp_msg_0.theta = 0.7454678129523123;
    tmp_msg_0.psi = 0.3882548479857517;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7496961875958696;
    tmp_msg_1.beam_height = 0.1299325072824027;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5900730881076488;

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
    msg.setTimeStamp(0.9306770474282017);
    msg.setSource(46119U);
    msg.setSourceEntity(150U);
    msg.setDestination(19039U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9741545782454132;

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
    msg.setTimeStamp(0.04479129797463621);
    msg.setSource(56596U);
    msg.setSourceEntity(99U);
    msg.setDestination(48754U);
    msg.setDestinationEntity(46U);
    msg.value = 0.487894405873744;

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
    msg.setTimeStamp(0.9112487785282705);
    msg.setSource(50577U);
    msg.setSourceEntity(143U);
    msg.setDestination(11556U);
    msg.setDestinationEntity(203U);
    msg.value = 0.29049862223540424;

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
    msg.setTimeStamp(0.14107745933774507);
    msg.setSource(34676U);
    msg.setSourceEntity(37U);
    msg.setDestination(41138U);
    msg.setDestinationEntity(70U);
    msg.value = 0.4849476883652013;

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
    msg.setTimeStamp(0.983493915966972);
    msg.setSource(55581U);
    msg.setSourceEntity(65U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(17U);
    msg.value = 0.7583752810883817;

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
    msg.setTimeStamp(0.5908012566175423);
    msg.setSource(17311U);
    msg.setSourceEntity(164U);
    msg.setDestination(35163U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4775027767378728;

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
    msg.setTimeStamp(0.5779150731652997);
    msg.setSource(45669U);
    msg.setSourceEntity(8U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(186U);
    msg.value = 0.5425300172852922;

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
    msg.setTimeStamp(0.21638345690696836);
    msg.setSource(57973U);
    msg.setSourceEntity(128U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5558816854049914;

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
    msg.setTimeStamp(0.7802396644642877);
    msg.setSource(12028U);
    msg.setSourceEntity(198U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(37U);
    msg.value = 0.45819838706131155;

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
    msg.setTimeStamp(0.07350828538258403);
    msg.setSource(12173U);
    msg.setSourceEntity(165U);
    msg.setDestination(22328U);
    msg.setDestinationEntity(13U);
    msg.value = 0.3169980121350018;

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
    msg.setTimeStamp(0.3354491201539098);
    msg.setSource(38621U);
    msg.setSourceEntity(55U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(132U);
    msg.value = 0.4051665967043119;

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
    msg.setTimeStamp(0.16209197652131746);
    msg.setSource(34860U);
    msg.setSourceEntity(143U);
    msg.setDestination(8033U);
    msg.setDestinationEntity(200U);
    msg.value = 0.7731423482679987;

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
    msg.setTimeStamp(0.9816885872436241);
    msg.setSource(48657U);
    msg.setSourceEntity(38U);
    msg.setDestination(20761U);
    msg.setDestinationEntity(44U);
    msg.value = 0.34080263795576204;

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
    msg.setTimeStamp(0.48645406306456107);
    msg.setSource(45920U);
    msg.setSourceEntity(67U);
    msg.setDestination(46665U);
    msg.setDestinationEntity(71U);
    msg.value = 0.7249379291916757;

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
    msg.setTimeStamp(0.41415368598308);
    msg.setSource(8727U);
    msg.setSourceEntity(144U);
    msg.setDestination(17545U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6961831455225463;

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
    msg.setTimeStamp(0.10898037692211704);
    msg.setSource(33373U);
    msg.setSourceEntity(43U);
    msg.setDestination(21932U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8026246527294513;

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
    msg.setTimeStamp(0.29975605826945884);
    msg.setSource(54664U);
    msg.setSourceEntity(202U);
    msg.setDestination(50199U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8880689359967079;

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
    msg.setTimeStamp(0.6905226924734943);
    msg.setSource(21663U);
    msg.setSourceEntity(104U);
    msg.setDestination(1945U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9473501352434412;

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
    msg.setTimeStamp(0.23014479267758847);
    msg.setSource(1972U);
    msg.setSourceEntity(0U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(166U);
    msg.value = 0.7716792784802139;

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
    msg.setTimeStamp(0.14771348232180803);
    msg.setSource(38798U);
    msg.setSourceEntity(1U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(3U);
    msg.value = 0.4932681067396445;

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
    msg.setTimeStamp(0.4186414314285568);
    msg.setSource(152U);
    msg.setSourceEntity(234U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7192393726457926;

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
    msg.setTimeStamp(0.313420290769321);
    msg.setSource(59962U);
    msg.setSourceEntity(165U);
    msg.setDestination(44453U);
    msg.setDestinationEntity(172U);
    msg.value = 0.737964602477408;

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
    msg.setTimeStamp(0.5474533703517496);
    msg.setSource(30328U);
    msg.setSourceEntity(174U);
    msg.setDestination(30217U);
    msg.setDestinationEntity(146U);
    msg.value = 0.10705248288864444;

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
    msg.setTimeStamp(0.9995825618490105);
    msg.setSource(36590U);
    msg.setSourceEntity(99U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(36U);
    msg.value = 0.13866919459998173;

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
    msg.setTimeStamp(0.16845685404190414);
    msg.setSource(28755U);
    msg.setSourceEntity(224U);
    msg.setDestination(48054U);
    msg.setDestinationEntity(87U);
    msg.direction = 0.04169520676268834;
    msg.speed = 0.5016161953547592;
    msg.turbulence = 0.9360456821073396;

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
    msg.setTimeStamp(0.08007439998041099);
    msg.setSource(19880U);
    msg.setSourceEntity(64U);
    msg.setDestination(5323U);
    msg.setDestinationEntity(31U);
    msg.direction = 0.6094660724560774;
    msg.speed = 0.046440611538729026;
    msg.turbulence = 0.5809383927039361;

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
    msg.setTimeStamp(0.39266047997852505);
    msg.setSource(46991U);
    msg.setSourceEntity(181U);
    msg.setDestination(33952U);
    msg.setDestinationEntity(145U);
    msg.direction = 0.415538774405234;
    msg.speed = 0.5502474228646146;
    msg.turbulence = 0.024599088271638037;

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
    msg.setTimeStamp(0.8241842194841549);
    msg.setSource(4730U);
    msg.setSourceEntity(28U);
    msg.setDestination(46364U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7855191947070362;

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
    msg.setTimeStamp(0.3004387621364708);
    msg.setSource(8728U);
    msg.setSourceEntity(183U);
    msg.setDestination(53678U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6131254151279532;

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
    msg.setTimeStamp(0.7038937276487723);
    msg.setSource(20209U);
    msg.setSourceEntity(190U);
    msg.setDestination(60139U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8308248896883343;

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
    msg.setTimeStamp(0.9235484175827167);
    msg.setSource(39828U);
    msg.setSourceEntity(79U);
    msg.setDestination(11203U);
    msg.setDestinationEntity(52U);
    msg.value.assign("MJJVZYZYMQNQAIXRUVYXARJMHQGFGSCDIHJQSUNHGUXHZWWOABTRVZWRYLBRRVERHDPZOTVLCWUHKSHVOLOVSCRQPBDATSOAGNEYWQHDDJIUPNJEZPZKRPGBGS");

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
    msg.setTimeStamp(0.19125685833253936);
    msg.setSource(14567U);
    msg.setSourceEntity(48U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(30U);
    msg.value.assign("ICPLEUSEXBHXJKPCRABURZJSULSOTENVPNMFLCAZLRUBRIWMWTCCDLPTUOZYOVAZIBLOVZZYEAPLRKNKTXPBDEMDEJXMWXQXJYUFOWYVESSIQJQBZHGRBEEUAQMNFPMCUQNFVILLIQACNWNJFFIOXCZQRKJMYHVGSYKGDNMSWOSJYTY");

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
    msg.setTimeStamp(0.36005771990080515);
    msg.setSource(23692U);
    msg.setSourceEntity(103U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(152U);
    msg.value.assign("BRNLXEKIZGGCQ");

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
    msg.setTimeStamp(0.7929876696269281);
    msg.setSource(65227U);
    msg.setSourceEntity(22U);
    msg.setDestination(53822U);
    msg.setDestinationEntity(150U);
    const char tmp_msg_0[] = {68, 70, -81, -115, -124, 97, -4, 2, -120, -126, -128, -124, -91, -125, -52, -18, -20, -32, -69, 38, -94, -128, -27, -38, 90, -17, 36, 74, 8, -28, -9, -127, 45, 97, 99, -50, -10, 13, -120, 121, 99, 100, -72, 20, -110, -87, 84, 119, 25, 90, -49, 64, 92, -43, -14, 4, -6, 42, -77, -116, 106, -38, 19, 102, 75, -18, 80, 7, -59, -33, 21, -67, 40};
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
    msg.setTimeStamp(0.749560169832379);
    msg.setSource(62331U);
    msg.setSourceEntity(175U);
    msg.setDestination(8917U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {-71, 39, -90, 26, -17, 102, 9, 77, -44, -102, 122, -99, -29, 114, 97, 21, 40, -105, 10, -59, -112, -18, 112, 85, 46, -15, 85, -3, -37, -42, -94, -27, -41, -42, -111, 101, 51, -67, -49, -15, 69, 107, -8, -125, -7, -87, 62, -62, -36, 23, -14, 68, -46, 33, -28, 30, -66, 109, -127, 58, -16, -25, 123, 91, 49, -53, 125, 122, 89, 71, 88, 61, -24, 85, 107, 56, 17, 83, -38, 29, 112, 48, 26, -60, 2, -3, -27, 119, 108, -72, 36, -124, 30, 22, 28, 54, 2, 8, 2, -23, -97, -112, 24, -95, 53, -69, -26, 36, -46, -3, -112, -11, -61, -103, 41, 85, 73, 113, -118, 10, 25, -58, -82, 42, 19, -105, -73, 21, 79, 16, 21, 105, -16, -19, 94, -66, 18, -80, 92, -120, 10, 8, 32, -35, -77, -99, 19, -57, 103, -124, 31, 101, 6, 116, -121, 78, 87, -25, 84, -106, 91, 110, 15, -120, -58, 19, 63, 115, -49, -20, 4, -8, -85, -87, -49, -100, -46, -94, 120, -34, 87, 113, 56, -79, 51, 112, 39, -115, 120, 57, -124, -126, 11, -117, -3, -31, -72, 22, -9};
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
    msg.setTimeStamp(0.05717705324864675);
    msg.setSource(64415U);
    msg.setSourceEntity(108U);
    msg.setDestination(40890U);
    msg.setDestinationEntity(45U);
    const char tmp_msg_0[] = {3, -32, 86, -100, -100, -81, -24, 37, 51, 78, -16, 60, 56, -34, -113, -16, -75, 37, 62, -112, -126, -101, -18, -32, 124, 1, 5, -111, 36, -86, 66, 92, -3, 11, 50, -108, 24, 115, 115, 26, 7, -11, 108, -55, 62, 89, 125, -77, 55, -60, -35, 56, -33, -101, -59, 126, -41, -125, -26, 6, 41, -122, 68, -102, -49, 71, 65, 17, -41, -34, 126, -84, 89, -57, 4, -12, -13, -8, 55, 65, 72, 3, -28, 68, -72, 7, 56, 113, -79, -127, 84, 100, 76, -103, 45, 121, 66, 107, 80, -30, 42, 57, 33, 70, 123, 126, 10, 25, 76, 115, 11, 52, -125, 0, -97, 96, 66, 79, -111, 54, -12, -24, -78, 121, -2, -36, -56, 109, -30, -105, -3, -44, 9, 98, -108, 6, 116, 75, -104, 17, 112, 19, 33, -55, 88, 35, -119, -42, 17, -53, -57, 126, 75, 24, -32, -87, -119, 33, -95, 55, -115, -66, 86, -126, 112, 17, 115, -118, -4, 10, 3, 62, -84, -104, 119, -88, -40, -11, -103, 84, 17, -32, 11, -29, 16, -43, -112, -70};
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
    msg.setTimeStamp(0.9841259281691984);
    msg.setSource(49708U);
    msg.setSourceEntity(161U);
    msg.setDestination(29227U);
    msg.setDestinationEntity(104U);
    msg.type = 63U;
    msg.frequency = 1521207000U;
    msg.min_range = 40429U;
    msg.max_range = 35371U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.5301899475625022;
    const char tmp_msg_0[] = {-104, -84, -40, -67, -102, -17, -64, -122, -37, -89, 16, -9, -114, -99, 1, 87, -31, 110, -39, 109, -38, -39, -64, -6, 80, 106, -60, 23, 90, 126, 9, 125, -46, 73, -79, -119, -97, -94, -37, -85, -122, -15, -106, -109, -80, 108, -123, -78, -52, 48, 105, 107, 118, 58, 63, -1, -37, 40, -74, -71, -61, 116, 118, 126, -3, -65, -55, -82, -6, 124, -22, -75, -11, -41, 77, -93};
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
    msg.setTimeStamp(0.8933617985388228);
    msg.setSource(25259U);
    msg.setSourceEntity(56U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(254U);
    msg.type = 201U;
    msg.frequency = 2509528244U;
    msg.min_range = 36381U;
    msg.max_range = 5447U;
    msg.bits_per_point = 199U;
    msg.scale_factor = 0.845408190899616;
    const char tmp_msg_0[] = {-60, -64, -3, 53, -64, 66, -31, -1, 6, -127, -70, -56, 65, -33, 17, 50, 101, -101, 14, 117, -38, 122, 99, 70, -77, -69, 97, -120, -122, -125, 67, 124, 116, -52, 42, -85, -11, -107, 91, 7, 30, 44, 94, 124, 98, 122, -14, -104, -51, -120, 75, -17, -49, 81, 4, 105, -89, -68, 125, -93, -117, 66, 101, -101, 112, 65, -107, 106, -61, 60, 91, 55, 110, 110, 21, -47, -91, -4, 45, -31, 112, 126, -102, -111, 110, 19, -120, -105, -96, -29, -96, 18, 89, -25};
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
    msg.setTimeStamp(0.6688023550572233);
    msg.setSource(46289U);
    msg.setSourceEntity(85U);
    msg.setDestination(63405U);
    msg.setDestinationEntity(220U);
    msg.type = 124U;
    msg.frequency = 770896523U;
    msg.min_range = 57660U;
    msg.max_range = 44666U;
    msg.bits_per_point = 68U;
    msg.scale_factor = 0.17317294757215373;
    const char tmp_msg_0[] = {-107, 118, -83, -54, 62, -102, 110, 3, -2, 2, 38, -47, -71, 82, 38, -58, 84, -117, 55, -119, 10, 96, -41, 46, -77, 68, -80, 89, -94, -40, -117, 82, -71, -54, 125, 106, -90, -118, -72, -56, 17, -34, 93, -83, 70, 111, 2, 76, -90, 95, -41, 92, 103, 120, -91, 7, -19, 125, -103, -30, 39, -55, -31, 65, 1, 79, 79, 3, 29, 86, -15, 31, -115, -83, 49, 90, -1, 0, -103, 2, 65, -109, -54, -78, -21, 74, -94, 24, 11, -128, -22, 26, -73, -74, 64, 7, 46, 87, -107, -58, 72, 102, -105, -87, -31, -38, -9, 109, -123, -90, 12, -63, 57, 70, -17, -85, -106, 28, -91, -28};
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
    msg.setTimeStamp(0.5288491503651894);
    msg.setSource(7707U);
    msg.setSourceEntity(183U);
    msg.setDestination(5493U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.8931321509595598);
    msg.setSource(34077U);
    msg.setSourceEntity(149U);
    msg.setDestination(31043U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.00976789896151986);
    msg.setSource(13158U);
    msg.setSourceEntity(162U);
    msg.setDestination(65131U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.8880400547832359);
    msg.setSource(46089U);
    msg.setSourceEntity(176U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(194U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.12635963887070278);
    msg.setSource(5111U);
    msg.setSourceEntity(144U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(5U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.2844893024267715);
    msg.setSource(65190U);
    msg.setSourceEntity(38U);
    msg.setDestination(26576U);
    msg.setDestinationEntity(157U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.45688738786490235);
    msg.setSource(55306U);
    msg.setSourceEntity(203U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(210U);
    msg.value = 0.41263209087896857;
    msg.confidence = 0.30618860308450513;
    msg.opmodes.assign("STJROCTFTMBNFZSCBJFVTKHFUMATVYYLSYENFEAXQKZIXWCKQNQFQWOAANUPZYLCYEW");

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
    msg.setTimeStamp(0.17614565436987029);
    msg.setSource(12880U);
    msg.setSourceEntity(7U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4672523906322127;
    msg.confidence = 0.5765129350483016;
    msg.opmodes.assign("KBWYBGTKJDWQOEJQSTEIGZBQOZNMECNGGPHCCHDSJUJVKXAJRWTRXVLPOEDECULODCZDWUTGXHKPPNMUYHREHTWVILDBXOFFRAYPZNHIWNMHKMGVKSTXVRPCSAZLMGAQQPNGIRWYWMDUYZOPNUAVZTJWLVQQUKS");

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
    msg.setTimeStamp(0.5879693421368306);
    msg.setSource(17193U);
    msg.setSourceEntity(214U);
    msg.setDestination(46191U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0215545848370986;
    msg.confidence = 0.6454245253249327;
    msg.opmodes.assign("INNGKOSHQBJCSPHELLZNONZNDFBZCSTWXQYRYLKJFLERMGXFTVCWUZLGMOUAMWKAFCQJTDCLSWYZTLPOFTSKYCIYOLFRKPKVFVPIURRACIHCXFAP");

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
    msg.setTimeStamp(0.0023187279080124634);
    msg.setSource(50678U);
    msg.setSourceEntity(195U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(219U);
    msg.itow = 2657681112U;
    msg.lat = 0.4179655464687101;
    msg.lon = 0.786310678784074;
    msg.height_ell = 0.5646442101815236;
    msg.height_sea = 0.7538446195116966;
    msg.hacc = 0.7964414356435986;
    msg.vacc = 0.28595642471432003;
    msg.vel_n = 0.23581629206786459;
    msg.vel_e = 0.5899801480315157;
    msg.vel_d = 0.6181555766188327;
    msg.speed = 0.8769725843989493;
    msg.gspeed = 0.7066616975406702;
    msg.heading = 0.20019083792520287;
    msg.sacc = 0.6608502620340976;
    msg.cacc = 0.04483276919679724;

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
    msg.setTimeStamp(0.5833126382544207);
    msg.setSource(46718U);
    msg.setSourceEntity(227U);
    msg.setDestination(41352U);
    msg.setDestinationEntity(39U);
    msg.itow = 2517203567U;
    msg.lat = 0.2564878266184414;
    msg.lon = 0.207328138945039;
    msg.height_ell = 0.8718516313050388;
    msg.height_sea = 0.904784407420095;
    msg.hacc = 0.01868567116377129;
    msg.vacc = 0.6196233967827348;
    msg.vel_n = 0.4382869084225297;
    msg.vel_e = 0.23011225960879167;
    msg.vel_d = 0.03340361387423385;
    msg.speed = 0.2699894632040003;
    msg.gspeed = 0.07420123199973183;
    msg.heading = 0.2286396596112673;
    msg.sacc = 0.9398695684487028;
    msg.cacc = 0.24701755047995788;

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
    msg.setTimeStamp(0.7798129099969484);
    msg.setSource(61931U);
    msg.setSourceEntity(14U);
    msg.setDestination(42895U);
    msg.setDestinationEntity(216U);
    msg.itow = 3292442249U;
    msg.lat = 0.11840934908399914;
    msg.lon = 0.4778937123266249;
    msg.height_ell = 0.09813101708170369;
    msg.height_sea = 0.7273283961162061;
    msg.hacc = 0.3186234155152965;
    msg.vacc = 0.8973155144955448;
    msg.vel_n = 0.8780078620831075;
    msg.vel_e = 0.11449181733243474;
    msg.vel_d = 0.2560377751492634;
    msg.speed = 0.29072382866545654;
    msg.gspeed = 0.14830999244779874;
    msg.heading = 0.24680617253159787;
    msg.sacc = 0.777852821123269;
    msg.cacc = 0.5450578855513694;

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
    msg.setTimeStamp(0.9857895350263404);
    msg.setSource(59039U);
    msg.setSourceEntity(154U);
    msg.setDestination(21301U);
    msg.setDestinationEntity(176U);
    msg.id = 246U;
    msg.value = 0.7790051541338263;

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
    msg.setTimeStamp(0.11085895112817457);
    msg.setSource(10475U);
    msg.setSourceEntity(57U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(24U);
    msg.id = 109U;
    msg.value = 0.7945614770496625;

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
    msg.setTimeStamp(0.665328925327458);
    msg.setSource(7004U);
    msg.setSourceEntity(54U);
    msg.setDestination(14859U);
    msg.setDestinationEntity(61U);
    msg.id = 166U;
    msg.value = 0.785853753457299;

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
    msg.setTimeStamp(0.9126715578235074);
    msg.setSource(19298U);
    msg.setSourceEntity(24U);
    msg.setDestination(38069U);
    msg.setDestinationEntity(164U);
    msg.x = 0.7635483154460999;
    msg.y = 0.049933046126475866;
    msg.z = 0.0718497946525336;
    msg.phi = 0.3273300943046036;
    msg.theta = 0.3934899836957768;
    msg.psi = 0.5185454699482911;

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
    msg.setTimeStamp(0.7970497935159571);
    msg.setSource(6974U);
    msg.setSourceEntity(14U);
    msg.setDestination(33689U);
    msg.setDestinationEntity(194U);
    msg.x = 0.9941075425553235;
    msg.y = 0.27222673652235274;
    msg.z = 0.48567826743306053;
    msg.phi = 0.1443707997281185;
    msg.theta = 0.2326268491472797;
    msg.psi = 0.41480222160404023;

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
    msg.setTimeStamp(0.37099660762409603);
    msg.setSource(23102U);
    msg.setSourceEntity(219U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(13U);
    msg.x = 0.28223250812030043;
    msg.y = 0.12500121151776034;
    msg.z = 0.10281486341208812;
    msg.phi = 0.9134775668611246;
    msg.theta = 0.9273095704326864;
    msg.psi = 0.34515336198916136;

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
    msg.setTimeStamp(0.3227223682580094);
    msg.setSource(20679U);
    msg.setSourceEntity(97U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(151U);
    msg.beam_width = 0.894866912703964;
    msg.beam_height = 0.7810065967793303;

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
    msg.setTimeStamp(0.9560998751339282);
    msg.setSource(20580U);
    msg.setSourceEntity(237U);
    msg.setDestination(48960U);
    msg.setDestinationEntity(232U);
    msg.beam_width = 0.03044996570411085;
    msg.beam_height = 0.20031584712874972;

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
    msg.setTimeStamp(0.48134619850777083);
    msg.setSource(62440U);
    msg.setSourceEntity(40U);
    msg.setDestination(50471U);
    msg.setDestinationEntity(241U);
    msg.beam_width = 0.15920554443889334;
    msg.beam_height = 0.7322525403624206;

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
    msg.setTimeStamp(0.7873237140581855);
    msg.setSource(13335U);
    msg.setSourceEntity(53U);
    msg.setDestination(869U);
    msg.setDestinationEntity(169U);
    msg.sane = 214U;

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
    msg.setTimeStamp(0.6893502138557251);
    msg.setSource(61588U);
    msg.setSourceEntity(71U);
    msg.setDestination(8348U);
    msg.setDestinationEntity(109U);
    msg.sane = 212U;

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
    msg.setTimeStamp(0.6600245838723023);
    msg.setSource(5395U);
    msg.setSourceEntity(16U);
    msg.setDestination(26003U);
    msg.setDestinationEntity(43U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.3511898548103104);
    msg.setSource(43106U);
    msg.setSourceEntity(194U);
    msg.setDestination(30894U);
    msg.setDestinationEntity(35U);
    msg.value = 0.9209041904116664;

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
    msg.setTimeStamp(0.9647731997139006);
    msg.setSource(31718U);
    msg.setSourceEntity(176U);
    msg.setDestination(5847U);
    msg.setDestinationEntity(89U);
    msg.value = 0.07354635109627361;

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
    msg.setTimeStamp(0.03765398639924222);
    msg.setSource(64360U);
    msg.setSourceEntity(84U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(32U);
    msg.value = 0.6077532050228651;

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
    msg.setTimeStamp(0.2964272931064821);
    msg.setSource(58315U);
    msg.setSourceEntity(43U);
    msg.setDestination(41205U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9364506433107846;

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
    msg.setTimeStamp(0.801965156859386);
    msg.setSource(63666U);
    msg.setSourceEntity(60U);
    msg.setDestination(17000U);
    msg.setDestinationEntity(3U);
    msg.value = 0.16049339931823248;

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
    msg.setTimeStamp(0.46782846654768984);
    msg.setSource(32684U);
    msg.setSourceEntity(250U);
    msg.setDestination(15374U);
    msg.setDestinationEntity(193U);
    msg.value = 0.31508418902800517;

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
    msg.setTimeStamp(0.07598388141798817);
    msg.setSource(37563U);
    msg.setSourceEntity(32U);
    msg.setDestination(40632U);
    msg.setDestinationEntity(249U);
    msg.value = 0.1515151100090325;

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
    msg.setTimeStamp(0.766086079345532);
    msg.setSource(48096U);
    msg.setSourceEntity(176U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5619034141500606;

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
    msg.setTimeStamp(0.6594872245863502);
    msg.setSource(39276U);
    msg.setSourceEntity(132U);
    msg.setDestination(32953U);
    msg.setDestinationEntity(38U);
    msg.value = 0.858284304660468;

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
    msg.setTimeStamp(0.4471263815344242);
    msg.setSource(5U);
    msg.setSourceEntity(52U);
    msg.setDestination(7231U);
    msg.setDestinationEntity(87U);
    msg.value = 0.33605901256016035;

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
    msg.setTimeStamp(0.16335432786523618);
    msg.setSource(45368U);
    msg.setSourceEntity(197U);
    msg.setDestination(49201U);
    msg.setDestinationEntity(22U);
    msg.value = 0.612176769112399;

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
    msg.setTimeStamp(0.7421271084034544);
    msg.setSource(54088U);
    msg.setSourceEntity(177U);
    msg.setDestination(37968U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9866736038600723;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.5320321216258485);
    msg.setSource(22196U);
    msg.setSourceEntity(84U);
    msg.setDestination(65259U);
    msg.setDestinationEntity(233U);
    msg.id = 236U;
    msg.zoom = 28U;
    msg.action = 187U;

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
    msg.setTimeStamp(0.5231768526629804);
    msg.setSource(10000U);
    msg.setSourceEntity(25U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(254U);
    msg.id = 127U;
    msg.zoom = 127U;
    msg.action = 38U;

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
    msg.setTimeStamp(0.7008923605987938);
    msg.setSource(54725U);
    msg.setSourceEntity(127U);
    msg.setDestination(59150U);
    msg.setDestinationEntity(148U);
    msg.id = 94U;
    msg.zoom = 77U;
    msg.action = 245U;

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
    msg.setTimeStamp(0.8982410405613457);
    msg.setSource(24455U);
    msg.setSourceEntity(213U);
    msg.setDestination(48070U);
    msg.setDestinationEntity(39U);
    msg.id = 233U;
    msg.value = 0.5711650514768883;

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
    msg.setTimeStamp(0.9953803514322799);
    msg.setSource(44633U);
    msg.setSourceEntity(57U);
    msg.setDestination(4874U);
    msg.setDestinationEntity(16U);
    msg.id = 160U;
    msg.value = 0.035476416622861606;

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
    msg.setTimeStamp(0.8092054917821477);
    msg.setSource(41847U);
    msg.setSourceEntity(38U);
    msg.setDestination(8110U);
    msg.setDestinationEntity(246U);
    msg.id = 241U;
    msg.value = 0.44226669916913064;

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
    msg.setTimeStamp(0.4798553687497915);
    msg.setSource(59379U);
    msg.setSourceEntity(124U);
    msg.setDestination(35382U);
    msg.setDestinationEntity(160U);
    msg.id = 93U;
    msg.value = 0.562057065051851;

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
    msg.setTimeStamp(0.790432874462294);
    msg.setSource(58977U);
    msg.setSourceEntity(8U);
    msg.setDestination(62008U);
    msg.setDestinationEntity(128U);
    msg.id = 36U;
    msg.value = 0.5051548922465525;

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
    msg.setTimeStamp(0.0932452315687099);
    msg.setSource(52654U);
    msg.setSourceEntity(31U);
    msg.setDestination(53356U);
    msg.setDestinationEntity(159U);
    msg.id = 222U;
    msg.value = 0.3854506498857315;

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
    msg.setTimeStamp(0.669221517027619);
    msg.setSource(34985U);
    msg.setSourceEntity(113U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(249U);
    msg.id = 252U;
    msg.angle = 0.5676427586161518;

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
    msg.setTimeStamp(0.843709772900497);
    msg.setSource(55604U);
    msg.setSourceEntity(7U);
    msg.setDestination(50109U);
    msg.setDestinationEntity(43U);
    msg.id = 73U;
    msg.angle = 0.9380624165349063;

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
    msg.setTimeStamp(0.7420307474488077);
    msg.setSource(38566U);
    msg.setSourceEntity(144U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(15U);
    msg.id = 93U;
    msg.angle = 0.5337778984781727;

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
    msg.setTimeStamp(0.32196822942801195);
    msg.setSource(7591U);
    msg.setSourceEntity(188U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(121U);
    msg.op = 97U;
    msg.actions.assign("TAZJJQHUIILOPXKZUJAPBZSGZEHRVBBJJUVRMTQYWLROULFTWMDEALSNBIPAERWSAIOUYTEMFLEGHBJFXFCKARAYAXTXJVCXTQVHWEKKHIZS");

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
    msg.setTimeStamp(0.5754589237976612);
    msg.setSource(13473U);
    msg.setSourceEntity(240U);
    msg.setDestination(25944U);
    msg.setDestinationEntity(54U);
    msg.op = 57U;
    msg.actions.assign("LWNKLKGKKYUCRUIJGJDEQMSFVMXFSHAXVHQTWYXEMYNMPJEPWCQHVRJLFWWEQORHNTZBUKBOZTNQPIHA");

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
    msg.setTimeStamp(0.4364385566399386);
    msg.setSource(23382U);
    msg.setSourceEntity(132U);
    msg.setDestination(12967U);
    msg.setDestinationEntity(111U);
    msg.op = 104U;
    msg.actions.assign("YMFKGZIUPHAYBLPGGKHARTQEPKSVNDSLQKSVSFZBXHTFXUMHDQRDKPIXDKRYFUAVDVRQTINPFKHUGJUJHQVIITBZCRXORAWBANJZFKOWIRYWNDJTFPXVIGBWOSWBMJSYPQMQJBQZBLAEZT");

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
    msg.setTimeStamp(0.990437227578728);
    msg.setSource(61701U);
    msg.setSourceEntity(171U);
    msg.setDestination(26282U);
    msg.setDestinationEntity(247U);
    msg.actions.assign("FADAUTXVWHVSKLDKCZLGHKSYREXBKMDRFBWKTNONMRRRBYUXKGJQPFBSSHYHQVBVZURYDLJMAYOWTNIAPHLEZDAKJLGVTKSMWTHJEQUZQFIINFWEHXKQVIDYUQUEVGRCIRCPGPPOEJGRFJXOBGFAIEINQUXOUWRWSNCMXCCUNTNWFZGTEQPOCTAXEIPYECBCJHOBNZCWAXLDFLPGZYYAUOIMMYJPJVOBIQBMSZLH");

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
    msg.setTimeStamp(0.3619991974917277);
    msg.setSource(31348U);
    msg.setSourceEntity(226U);
    msg.setDestination(40544U);
    msg.setDestinationEntity(148U);
    msg.actions.assign("XAMQGNUNSQEYMORJXBFIWEXFNCJWVMERWYYFSFJCYHDFKPXZBQNOWMUKJZKWIYAYHEMYUIFXAINZEMVLPNFRBSFZDNLLPTJDPJNSTKIJXKBCCXZIPHRRHVJHZXBOTGVUANRMXVRTOOTGITLSCSDCWQVQTLYSGKAWZJPQVGGVZQSCIIFFOADEBUUHHWMYRIDKVEAPPGGUHCKSOHBDEULDGTHMWBXWMO");

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
    msg.setTimeStamp(0.46086998058069384);
    msg.setSource(20892U);
    msg.setSourceEntity(242U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(230U);
    msg.actions.assign("UAWJYBGHHIMLXCBJODNTNARLHKMISRLXPTDBPIQZDMFJWWRTBAIGZITDDZTBIYSBWHG");

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
    msg.setTimeStamp(0.22020630955727916);
    msg.setSource(17629U);
    msg.setSourceEntity(239U);
    msg.setDestination(22378U);
    msg.setDestinationEntity(205U);
    msg.button = 152U;
    msg.value = 34U;

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
    msg.setTimeStamp(0.2725907227853369);
    msg.setSource(45396U);
    msg.setSourceEntity(5U);
    msg.setDestination(8149U);
    msg.setDestinationEntity(58U);
    msg.button = 51U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.09097537593164717);
    msg.setSource(56277U);
    msg.setSourceEntity(248U);
    msg.setDestination(49527U);
    msg.setDestinationEntity(248U);
    msg.button = 4U;
    msg.value = 137U;

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
    msg.setTimeStamp(0.052754189623562375);
    msg.setSource(63592U);
    msg.setSourceEntity(86U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(145U);
    msg.op = 135U;
    msg.text.assign("THMIMCQXIABLIOLNIUDXWRQGVEDUNERLOFWCKEZYUIYNVJLBKZWQUZHHVYSBXZTHTMDEHNTOFKHWPATSEPDRBNI");

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
    msg.setTimeStamp(0.8552714918051477);
    msg.setSource(16114U);
    msg.setSourceEntity(93U);
    msg.setDestination(23612U);
    msg.setDestinationEntity(138U);
    msg.op = 89U;
    msg.text.assign("KXGIYNCIKTSWHTLLNJCAELYDVCPINERBXZOTJDLBWOSOMYARZZDGRWGACGFNJWZSXRJWPJQFJJLKCKQOTLFIYDXPVZBCTMNZHEKMXRNMKMGWWFWZOHOQHDYDFYVQXKVUTEFXXYKOPQAMWUGZNHHZLIVZMVBQTSBKTSNJVLSQR");

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
    msg.setTimeStamp(0.6070623045022812);
    msg.setSource(59218U);
    msg.setSourceEntity(183U);
    msg.setDestination(58266U);
    msg.setDestinationEntity(10U);
    msg.op = 234U;
    msg.text.assign("RBOQQTUXCRGAEHZPHLBPELCABEVGUTXNIJGFOILWKTTCERADIRBRDJMQZAYUNSAMNQWNIPJLVNJRFWKMYRQUXTHYSIWNCSCCRZALIPJXNGILYXHDOXIDYFEXJWKONUJKQYUXSAMEOESVFDZQVKPYRWVHAMSFKHPOLJNFVESGUZJYDQHWSCWLYOWMSHVXBBVZOOPVCTCFSDKFMPKDZMTIZCEJAQBBGIPGGOPAMNXTUVQRZYB");

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
    msg.setTimeStamp(0.1759622900950818);
    msg.setSource(57446U);
    msg.setSourceEntity(44U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(226U);
    msg.op = 89U;
    msg.time_remain = 0.8351467773765103;
    msg.sched_time = 0.38990194952913104;

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
    msg.setTimeStamp(0.2624472037002059);
    msg.setSource(48919U);
    msg.setSourceEntity(203U);
    msg.setDestination(16539U);
    msg.setDestinationEntity(94U);
    msg.op = 98U;
    msg.time_remain = 0.366168611842392;
    msg.sched_time = 0.5325320206842928;

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
    msg.setTimeStamp(0.8376751783619859);
    msg.setSource(9420U);
    msg.setSourceEntity(27U);
    msg.setDestination(34168U);
    msg.setDestinationEntity(48U);
    msg.op = 168U;
    msg.time_remain = 0.7900482992501553;
    msg.sched_time = 0.6448592297169264;

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
    msg.setTimeStamp(0.6819412479676861);
    msg.setSource(2275U);
    msg.setSourceEntity(40U);
    msg.setDestination(59536U);
    msg.setDestinationEntity(21U);
    msg.name.assign("YMNIAIGEVIFUS");
    msg.op = 191U;
    msg.sched_time = 0.7143878444479556;

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
    msg.setTimeStamp(0.8543188084821595);
    msg.setSource(5509U);
    msg.setSourceEntity(132U);
    msg.setDestination(2242U);
    msg.setDestinationEntity(174U);
    msg.name.assign("MRHSKBJKFXGJQMTDZXCMFNYWVICWQZVQUTNUNDNSBBPAZMGDCYFICPUGRGZKSGBOIYKHAVWFGKLNZYSNIXUETYAMPDWQRXDZSWRFJXNSFAJJXFJDDLGHJWROOBCIGOKEYDXXH");
    msg.op = 45U;
    msg.sched_time = 0.41716855328649105;

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
    msg.setTimeStamp(0.9440156653158988);
    msg.setSource(52897U);
    msg.setSourceEntity(58U);
    msg.setDestination(37983U);
    msg.setDestinationEntity(1U);
    msg.name.assign("SXJOLXOHJZWTQLEEVMIKCWNDSTVWGJIYBZGAMBYSDACWDSARJGQCWDKROUVYUKEZTGIHNXGPPYAIQBBKOZCQTIPUOUYMNMQWRVPPFHBGRXZTDGKMELWZENQTHHTDUQQYYSVANTPGXRCFHJKNBOAYRPXIJCXKEAXYMZWJOBLPAKNUCFKFS");
    msg.op = 221U;
    msg.sched_time = 0.7482222924915412;

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
    msg.setTimeStamp(0.9186350394332773);
    msg.setSource(45425U);
    msg.setSourceEntity(246U);
    msg.setDestination(961U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.4232450722767458);
    msg.setSource(55209U);
    msg.setSourceEntity(151U);
    msg.setDestination(55406U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.2099281934357089);
    msg.setSource(28797U);
    msg.setSourceEntity(45U);
    msg.setDestination(33779U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.4765524313785151);
    msg.setSource(4706U);
    msg.setSourceEntity(0U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(245U);
    msg.name.assign("HITHTYINWILROXDYDMEOEJYGACCEYJOHQVUHUPYZZGUVRTLRDRZFKKDCFQKTFPBIAMHUIWQTCXXLCUSWCUVJVANABQWSJBMMSNYRISJQXPXRQDUGGNGDGUTJUWIPESHVVLWNYLKALIMBCEGOCXSAFQVFMXPGEZDOETNYAMPBSCVRKO");
    msg.state = 34U;

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
    msg.setTimeStamp(0.48923325341117974);
    msg.setSource(7338U);
    msg.setSourceEntity(64U);
    msg.setDestination(1200U);
    msg.setDestinationEntity(213U);
    msg.name.assign("JBTDYIOTBDHOWKVCHTLYJLNQUQRUWVNRSRFFHLMKYOPERTSZWUXWOXDLPBLGCVOANESWMNOUAVKTQIQJXPRPECSZAWFPJENDXHMGZCSAJDUUZZRDFVDGMSCIUBFFOBOGTSGZIJVBYCFYRAGRQQSIGKJHXNPQBKDXJMZJKKEYXOGQFKAMXVCFZHKRPGAWETEMLRCQEVLBYYDT");
    msg.state = 247U;

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
    msg.setTimeStamp(0.34914393912925124);
    msg.setSource(46043U);
    msg.setSourceEntity(170U);
    msg.setDestination(16418U);
    msg.setDestinationEntity(67U);
    msg.name.assign("BEUZMZXOMJPHGKCOGOJNHRCODLVUNTIWVEGXYWWGGQXLLQCALTGRRZPJMQUPATRXQANUDYPAKSYDHPBSIYHKGOBJYTBWRBHJBHMOLUVQIZCOYXANVLWLUSZCKNMHDRSFEQIVNZMOPLBSIEZFFFTDNVJZVDUWUGRIUFHIECWITWPKYNHXFUJBAGYXEJOWIPZBHTFYCERCME");
    msg.state = 237U;

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
    msg.setTimeStamp(0.7600614542921463);
    msg.setSource(32350U);
    msg.setSourceEntity(214U);
    msg.setDestination(27438U);
    msg.setDestinationEntity(202U);
    msg.name.assign("KIQOLVGXPTLRD");
    msg.value = 213U;

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
    msg.setTimeStamp(0.8300254511865135);
    msg.setSource(23692U);
    msg.setSourceEntity(146U);
    msg.setDestination(49430U);
    msg.setDestinationEntity(233U);
    msg.name.assign("RWMBMECGZVYQFUWPOTVNEJIZHYSXGMFMRVWFFEXRYBTUQKAWCGQJTOUXDJKSSDBSEKSZYPPPDRXMTYKIGSAVNGOYBRPNLBIEUDGAZALZJENZXLOFFBIADIHTVYINLKRXKWCUACRIPDJMFHDRCRIHWTTKYJCAQPSYQVWTMAUHEHEQZSJECNQMGULPML");
    msg.value = 73U;

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
    msg.setTimeStamp(0.8083001139711595);
    msg.setSource(12169U);
    msg.setSourceEntity(243U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(175U);
    msg.name.assign("AWJOTWFBCUAPWXNTMIZUYUMEHNKUIOLXAEDRCHYGSGZCVWILQAVZUMGESEKDBXUQOHDYQAJSLVJSMMLKYLAYLJEJHCR");
    msg.value = 206U;

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
    msg.setTimeStamp(0.8530109416879755);
    msg.setSource(46994U);
    msg.setSourceEntity(177U);
    msg.setDestination(2069U);
    msg.setDestinationEntity(97U);
    msg.name.assign("IROGWLGBXUYOFTOKMWSPZNNAJNIWDPAOOOFRTRAITMSFEBAHPDLZNVFCEGHLNBHHESZFZTAAXDFCKDETHQPRHJYXTIWBPVCIU");

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
    msg.setTimeStamp(0.5699068810683305);
    msg.setSource(50023U);
    msg.setSourceEntity(77U);
    msg.setDestination(54563U);
    msg.setDestinationEntity(111U);
    msg.name.assign("JXCDBUZIFYLGZQRGXUDJEIPMCHTFLPSYJJGYUFOWHDKXQKMCKCHPCTVOZCMDFHXMLGFSJZIDAQITANKNMRVJHQGTQUZWBFEUTASJVENYOPJFDGETAEHWUDRVWLJEWANVDLVSFSEOLYJBAERGGQHHHLOFSBAIPAKHPEMBNQRCYY");

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
    msg.setTimeStamp(0.8440939291161663);
    msg.setSource(54788U);
    msg.setSourceEntity(134U);
    msg.setDestination(17578U);
    msg.setDestinationEntity(152U);
    msg.name.assign("TBBXNXBEYWCSMWQSPOROQHRLEYNQGYUZHNCGQKARIWSAAKIPFGCKJFXOUUIBIIHXBQXFAUQCCTQD");

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
    msg.setTimeStamp(0.9213010139994743);
    msg.setSource(13501U);
    msg.setSourceEntity(149U);
    msg.setDestination(7792U);
    msg.setDestinationEntity(68U);
    msg.name.assign("LBFNUJTXRUCFANKPVSAJOGAKVQLBTNHJQCEZOEDLFXQLNFEIEXITRFGJIRSDGPKCUDFSSKRPXYGSEEVMQQZYSQGIWNIAWYIHLBCWKBWKMHROE");
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
    msg.setTimeStamp(0.6208120995941259);
    msg.setSource(40418U);
    msg.setSourceEntity(26U);
    msg.setDestination(34217U);
    msg.setDestinationEntity(0U);
    msg.name.assign("BXJPSSNPWPWIIRMLAWAFTBJWRNLEQUDJJQJCMKVCITAYRSYCDDKJHGONGYFXHFWTPXDYMOQUTOQYCRNMOPLVVSJXWSLKQLIXZGWVE");
    msg.value = 98U;

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
    msg.setTimeStamp(0.5330012369685666);
    msg.setSource(40034U);
    msg.setSourceEntity(86U);
    msg.setDestination(3325U);
    msg.setDestinationEntity(20U);
    msg.name.assign("QJBUZSDELRKDYOOMKWHYEAGFYATZXZRBWSOGAZAKJNDKMSBZNZJLEHPTDQCVJCNHQXWPWPBJINOLYYHZTGRFJUZCCHJAOTESUMCFGQMYEQU");
    msg.value = 238U;

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
    msg.setTimeStamp(0.7605636941439295);
    msg.setSource(13668U);
    msg.setSourceEntity(252U);
    msg.setDestination(485U);
    msg.setDestinationEntity(162U);
    msg.id = 88U;
    msg.period = 64417402U;
    msg.duty_cycle = 508438958U;

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
    msg.setTimeStamp(0.42130553970055795);
    msg.setSource(9590U);
    msg.setSourceEntity(163U);
    msg.setDestination(40842U);
    msg.setDestinationEntity(185U);
    msg.id = 74U;
    msg.period = 4233898290U;
    msg.duty_cycle = 2451711385U;

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
    msg.setTimeStamp(0.36348756300847385);
    msg.setSource(26676U);
    msg.setSourceEntity(186U);
    msg.setDestination(56804U);
    msg.setDestinationEntity(233U);
    msg.id = 202U;
    msg.period = 713988926U;
    msg.duty_cycle = 2653198342U;

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
    msg.setTimeStamp(0.15514165309988326);
    msg.setSource(49669U);
    msg.setSourceEntity(15U);
    msg.setDestination(61331U);
    msg.setDestinationEntity(245U);
    msg.id = 216U;
    msg.period = 1465626501U;
    msg.duty_cycle = 144274653U;

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
    msg.setTimeStamp(0.23197780683853275);
    msg.setSource(40851U);
    msg.setSourceEntity(104U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(172U);
    msg.id = 232U;
    msg.period = 406929613U;
    msg.duty_cycle = 4172854999U;

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
    msg.setTimeStamp(0.06800758401346274);
    msg.setSource(45820U);
    msg.setSourceEntity(69U);
    msg.setDestination(51026U);
    msg.setDestinationEntity(193U);
    msg.id = 147U;
    msg.period = 211408486U;
    msg.duty_cycle = 184598506U;

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
    msg.setTimeStamp(0.8042824493996388);
    msg.setSource(6489U);
    msg.setSourceEntity(189U);
    msg.setDestination(4175U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.8088545712658887;
    msg.lon = 0.4957274908659083;
    msg.height = 0.9167770676290852;
    msg.x = 0.4432599078201962;
    msg.y = 0.5922921339564621;
    msg.z = 0.3892345825403354;
    msg.phi = 0.5089676097667527;
    msg.theta = 0.289410289956726;
    msg.psi = 0.056250044519317366;
    msg.u = 0.4246505956633083;
    msg.v = 0.03332089342275646;
    msg.w = 0.006747534488210083;
    msg.vx = 0.3319723247400489;
    msg.vy = 0.8385897365977591;
    msg.vz = 0.9289350286625705;
    msg.p = 0.8634261268973628;
    msg.q = 0.3219260840717987;
    msg.r = 0.5770739491809497;
    msg.depth = 0.9475942621084665;
    msg.alt = 0.295815982744874;

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
    msg.setTimeStamp(0.2663591568370357);
    msg.setSource(14698U);
    msg.setSourceEntity(112U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.7442341169299556;
    msg.lon = 0.05618419891907933;
    msg.height = 0.9541117016925971;
    msg.x = 0.734472475907832;
    msg.y = 0.38803457359033244;
    msg.z = 0.6274012755029854;
    msg.phi = 0.3367687391979959;
    msg.theta = 0.24867099310393037;
    msg.psi = 0.9635378458360307;
    msg.u = 0.41413542690660865;
    msg.v = 0.5075368390285167;
    msg.w = 0.06768149744704832;
    msg.vx = 0.6231194226897423;
    msg.vy = 0.7849015410249339;
    msg.vz = 0.45897256210767534;
    msg.p = 0.607597816380858;
    msg.q = 0.37313693031356476;
    msg.r = 0.953926202516592;
    msg.depth = 0.1788425787579898;
    msg.alt = 0.12810158207653333;

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
    msg.setTimeStamp(0.4355548181321396);
    msg.setSource(11743U);
    msg.setSourceEntity(23U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.525809307727113;
    msg.lon = 0.05769346279790721;
    msg.height = 0.15057172771530103;
    msg.x = 0.11219489771653823;
    msg.y = 0.83858113772202;
    msg.z = 0.40043301127919084;
    msg.phi = 0.048697681305561624;
    msg.theta = 0.50312560454236;
    msg.psi = 0.2832932007950335;
    msg.u = 0.6882816655827881;
    msg.v = 0.24427794811838266;
    msg.w = 0.3697988339564906;
    msg.vx = 0.3490062485996098;
    msg.vy = 0.7389071122386174;
    msg.vz = 0.7631414418642007;
    msg.p = 0.023906534810491098;
    msg.q = 0.37322523425897103;
    msg.r = 0.9231856424515158;
    msg.depth = 0.9893798166656559;
    msg.alt = 0.6410603447609279;

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
    msg.setTimeStamp(0.4813240359822336);
    msg.setSource(14825U);
    msg.setSourceEntity(130U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(1U);
    msg.x = 0.4612839348561685;
    msg.y = 0.6609927029020675;
    msg.z = 0.2863893409742977;

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
    msg.setTimeStamp(0.5308443670483407);
    msg.setSource(4077U);
    msg.setSourceEntity(228U);
    msg.setDestination(5065U);
    msg.setDestinationEntity(6U);
    msg.x = 0.7141070590224343;
    msg.y = 0.6874201110782368;
    msg.z = 0.8224639875591455;

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
    msg.setTimeStamp(0.31687672444283377);
    msg.setSource(28912U);
    msg.setSourceEntity(159U);
    msg.setDestination(13452U);
    msg.setDestinationEntity(151U);
    msg.x = 0.13774875825583477;
    msg.y = 0.06376415125858803;
    msg.z = 0.0018448699461539597;

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
    msg.setTimeStamp(0.6756831641403775);
    msg.setSource(2447U);
    msg.setSourceEntity(169U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(230U);
    msg.value = 0.06620209648539765;

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
    msg.setTimeStamp(0.32544972264469196);
    msg.setSource(20199U);
    msg.setSourceEntity(61U);
    msg.setDestination(18123U);
    msg.setDestinationEntity(178U);
    msg.value = 0.4078473391214813;

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
    msg.setTimeStamp(0.8681820411671243);
    msg.setSource(11759U);
    msg.setSourceEntity(43U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(178U);
    msg.value = 0.02254061345354963;

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
    msg.setTimeStamp(0.49374940749818097);
    msg.setSource(6943U);
    msg.setSourceEntity(183U);
    msg.setDestination(49189U);
    msg.setDestinationEntity(55U);
    msg.value = 0.7781695250565374;

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
    msg.setTimeStamp(0.9382835747372618);
    msg.setSource(38421U);
    msg.setSourceEntity(252U);
    msg.setDestination(7448U);
    msg.setDestinationEntity(122U);
    msg.value = 0.545470057515594;

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
    msg.setTimeStamp(0.2587666988164553);
    msg.setSource(47903U);
    msg.setSourceEntity(30U);
    msg.setDestination(20432U);
    msg.setDestinationEntity(42U);
    msg.value = 0.011199665112316626;

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
    msg.setTimeStamp(0.8601753282793364);
    msg.setSource(3919U);
    msg.setSourceEntity(3U);
    msg.setDestination(39573U);
    msg.setDestinationEntity(209U);
    msg.x = 0.025278740531406663;
    msg.y = 0.6470186750157274;
    msg.z = 0.7958562399074276;
    msg.phi = 0.16741382364004131;
    msg.theta = 0.7821065259926282;
    msg.psi = 0.10020194467109322;
    msg.p = 0.11551095498795572;
    msg.q = 0.3704172251780141;
    msg.r = 0.8406192855636722;
    msg.u = 0.5058999553281418;
    msg.v = 0.20654922876010262;
    msg.w = 0.9370300106643957;
    msg.bias_psi = 0.8787019698984512;
    msg.bias_r = 0.6419877850202454;

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
    msg.setTimeStamp(0.906855505752142);
    msg.setSource(6317U);
    msg.setSourceEntity(67U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(31U);
    msg.x = 0.627448468774715;
    msg.y = 0.26064193741462516;
    msg.z = 0.6170775292826816;
    msg.phi = 0.5239135554118001;
    msg.theta = 0.9297463622493478;
    msg.psi = 0.4445491402608581;
    msg.p = 0.779141671992098;
    msg.q = 0.3732296610231237;
    msg.r = 0.4802814413846369;
    msg.u = 0.5905493938061884;
    msg.v = 0.811877340609387;
    msg.w = 0.47406471294200825;
    msg.bias_psi = 0.7911392336839086;
    msg.bias_r = 0.7225444057593499;

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
    msg.setTimeStamp(0.09012520280574454);
    msg.setSource(28844U);
    msg.setSourceEntity(15U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(11U);
    msg.x = 0.5673266752181972;
    msg.y = 0.07984097522143851;
    msg.z = 0.4680557451960826;
    msg.phi = 0.044105545938552204;
    msg.theta = 0.025568751858802363;
    msg.psi = 0.7842872865789416;
    msg.p = 0.3187481097760547;
    msg.q = 0.28056943531440226;
    msg.r = 0.32916477029620717;
    msg.u = 0.3454615884017025;
    msg.v = 0.15234383581804967;
    msg.w = 0.09566410328762576;
    msg.bias_psi = 0.19157947342000659;
    msg.bias_r = 0.03715021647917238;

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
    msg.setTimeStamp(0.7759307218863102);
    msg.setSource(9649U);
    msg.setSourceEntity(169U);
    msg.setDestination(2337U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.8151320519641828;
    msg.bias_r = 0.8880382382932558;
    msg.cog = 0.9597420490097719;
    msg.cyaw = 0.2714663882055883;
    msg.lbl_rej_level = 0.38279861853180197;
    msg.gps_rej_level = 0.5206066855910748;
    msg.custom_x = 0.09317402109007344;
    msg.custom_y = 0.9607119952155321;
    msg.custom_z = 0.047891572500111335;

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
    msg.setTimeStamp(0.6079020112233242);
    msg.setSource(47907U);
    msg.setSourceEntity(254U);
    msg.setDestination(9964U);
    msg.setDestinationEntity(156U);
    msg.bias_psi = 0.42679758075220897;
    msg.bias_r = 0.2660277379503101;
    msg.cog = 0.7650300422239483;
    msg.cyaw = 0.9176351813281783;
    msg.lbl_rej_level = 0.16177541846925492;
    msg.gps_rej_level = 0.05860939889722372;
    msg.custom_x = 0.7409552182569977;
    msg.custom_y = 0.07243989313529586;
    msg.custom_z = 0.5285110744452286;

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
    msg.setTimeStamp(0.18694854819382478);
    msg.setSource(28495U);
    msg.setSourceEntity(19U);
    msg.setDestination(24430U);
    msg.setDestinationEntity(82U);
    msg.bias_psi = 0.24448313341527916;
    msg.bias_r = 0.07203762793260293;
    msg.cog = 0.09608562031424761;
    msg.cyaw = 0.7182932394032661;
    msg.lbl_rej_level = 0.9394940807542209;
    msg.gps_rej_level = 0.2795050754289753;
    msg.custom_x = 0.40809173850184677;
    msg.custom_y = 0.605513893570227;
    msg.custom_z = 0.49828206696914656;

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
    msg.setTimeStamp(0.8368554405276387);
    msg.setSource(18472U);
    msg.setSourceEntity(226U);
    msg.setDestination(47035U);
    msg.setDestinationEntity(222U);
    msg.utc_time = 0.9001941359251696;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.14796993478371057);
    msg.setSource(42042U);
    msg.setSourceEntity(139U);
    msg.setDestination(91U);
    msg.setDestinationEntity(45U);
    msg.utc_time = 0.32428723992405173;
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
    msg.setTimeStamp(0.2427145849794834);
    msg.setSource(14602U);
    msg.setSourceEntity(124U);
    msg.setDestination(21369U);
    msg.setDestinationEntity(89U);
    msg.utc_time = 0.13342003350135845;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.35588977295680224);
    msg.setSource(33313U);
    msg.setSourceEntity(94U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(194U);
    msg.id = 246U;
    msg.range = 0.25117961902928954;
    msg.acceptance = 205U;

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
    msg.setTimeStamp(0.7812389282598752);
    msg.setSource(7165U);
    msg.setSourceEntity(192U);
    msg.setDestination(5086U);
    msg.setDestinationEntity(92U);
    msg.id = 154U;
    msg.range = 0.28668096843784896;
    msg.acceptance = 197U;

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
    msg.setTimeStamp(0.7190497492833174);
    msg.setSource(64403U);
    msg.setSourceEntity(129U);
    msg.setDestination(41332U);
    msg.setDestinationEntity(67U);
    msg.id = 90U;
    msg.range = 0.386474385345252;
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
    msg.setTimeStamp(0.2225663236381954);
    msg.setSource(23241U);
    msg.setSourceEntity(191U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(12U);
    msg.type = 50U;
    msg.reason = 28U;
    msg.value = 0.8191452782145501;
    msg.timestep = 0.48777980240864194;

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
    msg.setTimeStamp(0.5346803812940184);
    msg.setSource(48943U);
    msg.setSourceEntity(50U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(52U);
    msg.type = 164U;
    msg.reason = 2U;
    msg.value = 0.1295271868656177;
    msg.timestep = 0.74065229020019;

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
    msg.setTimeStamp(0.02768031900663226);
    msg.setSource(19425U);
    msg.setSourceEntity(9U);
    msg.setDestination(41131U);
    msg.setDestinationEntity(55U);
    msg.type = 80U;
    msg.reason = 93U;
    msg.value = 0.7559475354414679;
    msg.timestep = 0.6672490943259918;

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
    msg.setTimeStamp(0.5266005653813453);
    msg.setSource(21139U);
    msg.setSourceEntity(238U);
    msg.setDestination(24348U);
    msg.setDestinationEntity(78U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TWCKCVBNXXNLXIBZMQPCZRMSUXVFBGSZHDJYQQXILEOMDOAUYDWQLJIGQVJKSLAXYMVDWOLAYNVBWPNMRJERYRZRGGWOVUEJVTDPDRKKOUACLYCTDQOVZGMJPXUWBHVYRASUFJLZXCFHAMBKNNBCMEIRPQIDOUZKGYTHRLYJITTTHTYFSDDFSCZUACWTAFPVWHTHJNNNIXPREKIUAUKEWGFLQOICEPLKE");
    tmp_msg_0.lat = 0.6623923572514618;
    tmp_msg_0.lon = 0.4432291759657393;
    tmp_msg_0.depth = 0.5054779931289324;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 27U;
    tmp_msg_0.transponder_delay = 29U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.14889015212627954;
    msg.y = 0.9183097431152284;
    msg.var_x = 0.4561742855122958;
    msg.var_y = 0.02582877566635633;
    msg.distance = 0.4859513633611193;

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
    msg.setTimeStamp(0.08129424422982201);
    msg.setSource(35660U);
    msg.setSourceEntity(187U);
    msg.setDestination(1964U);
    msg.setDestinationEntity(157U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ICSVIKTLCHBTRBAFOXMQYJJWBLNVMAFOIASXPXACLRBVUDGZHDADMNSQBMKPKYEXLWRPKTTI");
    tmp_msg_0.lat = 0.00599359097687191;
    tmp_msg_0.lon = 0.36225840159372624;
    tmp_msg_0.depth = 0.3343912564992775;
    tmp_msg_0.query_channel = 150U;
    tmp_msg_0.reply_channel = 77U;
    tmp_msg_0.transponder_delay = 7U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.978048389170848;
    msg.y = 0.270911987059265;
    msg.var_x = 0.35649429665764276;
    msg.var_y = 0.48245871702823007;
    msg.distance = 0.4340356350687963;

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
    msg.setTimeStamp(0.7516486773118212);
    msg.setSource(19485U);
    msg.setSourceEntity(57U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DOZPWVGVOLFCPIXUPAEXRBJBHFKRKSZWBBMWRWUEWNVLGQSMNEYHVHARBHTTMDIIOGGEOACXJUVFPIEQISFIZCQAQECRJJCHYDUXNIONWXKWCGWPNFPQDBTYPZZGTVONQEUASMXYJRBMBOITDHHFDHHVOZJNKYYPVTESLXKRLBQELDARYGPUSCLNCTMCQDKDGOAJUOFXGLWMFQCMZSUMNKLJKTY");
    tmp_msg_0.lat = 0.7360699075797977;
    tmp_msg_0.lon = 0.3843234974468607;
    tmp_msg_0.depth = 0.932535384063349;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 54U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7218934605286301;
    msg.y = 0.6145631118037193;
    msg.var_x = 0.013187034101339146;
    msg.var_y = 0.7367354907265319;
    msg.distance = 0.8627885559039464;

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
    msg.setTimeStamp(0.8348860259755692);
    msg.setSource(58587U);
    msg.setSourceEntity(32U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(1U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.797940780461863);
    msg.setSource(60469U);
    msg.setSourceEntity(31U);
    msg.setDestination(63079U);
    msg.setDestinationEntity(112U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.5682544913008202);
    msg.setSource(16078U);
    msg.setSourceEntity(4U);
    msg.setDestination(33764U);
    msg.setDestinationEntity(56U);
    msg.state = 53U;

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
    msg.setTimeStamp(0.9035441931032234);
    msg.setSource(7030U);
    msg.setSourceEntity(102U);
    msg.setDestination(8101U);
    msg.setDestinationEntity(132U);
    msg.x = 0.13644508011096879;
    msg.y = 0.5918753556464313;
    msg.z = 0.9431471837922764;

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
    msg.setTimeStamp(0.28238442694449817);
    msg.setSource(28903U);
    msg.setSourceEntity(186U);
    msg.setDestination(29330U);
    msg.setDestinationEntity(125U);
    msg.x = 0.19417707026160336;
    msg.y = 0.017958520159934377;
    msg.z = 0.13248892039961635;

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
    msg.setTimeStamp(0.4669641939814704);
    msg.setSource(51393U);
    msg.setSourceEntity(115U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(131U);
    msg.x = 0.5406082065810895;
    msg.y = 0.4169477909942496;
    msg.z = 0.06637207800774081;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.7929265843727079);
    msg.setSource(3214U);
    msg.setSourceEntity(134U);
    msg.setDestination(62638U);
    msg.setDestinationEntity(188U);
    msg.value = 0.1540505890057975;

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
    msg.setTimeStamp(0.4512871846943747);
    msg.setSource(20858U);
    msg.setSourceEntity(187U);
    msg.setDestination(52703U);
    msg.setDestinationEntity(54U);
    msg.value = 0.2923586680164473;

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
    msg.setTimeStamp(0.6015540492590119);
    msg.setSource(27448U);
    msg.setSourceEntity(90U);
    msg.setDestination(8544U);
    msg.setDestinationEntity(156U);
    msg.value = 0.503390027995758;

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
    msg.setTimeStamp(0.7236194579213645);
    msg.setSource(46676U);
    msg.setSourceEntity(62U);
    msg.setDestination(55100U);
    msg.setDestinationEntity(155U);
    msg.value = 0.33458195551991754;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.2138445643196909);
    msg.setSource(61969U);
    msg.setSourceEntity(104U);
    msg.setDestination(13026U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9266457523399599;
    msg.z_units = 123U;

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
    msg.setTimeStamp(0.3879712869455203);
    msg.setSource(12607U);
    msg.setSourceEntity(158U);
    msg.setDestination(54146U);
    msg.setDestinationEntity(84U);
    msg.value = 0.42607946682215836;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.5931715508302507);
    msg.setSource(24477U);
    msg.setSourceEntity(163U);
    msg.setDestination(38295U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5308062766336574;
    msg.speed_units = 241U;

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
    msg.setTimeStamp(0.262413269862247);
    msg.setSource(21773U);
    msg.setSourceEntity(148U);
    msg.setDestination(6485U);
    msg.setDestinationEntity(124U);
    msg.value = 0.9716788800879225;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.35560673546448296);
    msg.setSource(59704U);
    msg.setSourceEntity(228U);
    msg.setDestination(57935U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3419295328819374;
    msg.speed_units = 84U;

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
    msg.setTimeStamp(0.18942209039533553);
    msg.setSource(31878U);
    msg.setSourceEntity(69U);
    msg.setDestination(55900U);
    msg.setDestinationEntity(165U);
    msg.value = 0.13998338658898113;

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
    msg.setTimeStamp(0.17417338048812692);
    msg.setSource(31834U);
    msg.setSourceEntity(32U);
    msg.setDestination(44623U);
    msg.setDestinationEntity(79U);
    msg.value = 0.015264637975721418;

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
    msg.setTimeStamp(0.2398814564361288);
    msg.setSource(45361U);
    msg.setSourceEntity(69U);
    msg.setDestination(56444U);
    msg.setDestinationEntity(135U);
    msg.value = 0.7599223633103631;

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
    msg.setTimeStamp(0.11308698924271277);
    msg.setSource(62536U);
    msg.setSourceEntity(119U);
    msg.setDestination(1467U);
    msg.setDestinationEntity(175U);
    msg.value = 0.24087737834633904;

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
    msg.setTimeStamp(0.6218264477342119);
    msg.setSource(32344U);
    msg.setSourceEntity(12U);
    msg.setDestination(49074U);
    msg.setDestinationEntity(29U);
    msg.value = 0.1431139857360052;

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
    msg.setTimeStamp(0.4164277357712278);
    msg.setSource(8643U);
    msg.setSourceEntity(174U);
    msg.setDestination(45823U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7185063188622289;

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
    msg.setTimeStamp(0.28593083166236266);
    msg.setSource(55381U);
    msg.setSourceEntity(64U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6496169235022046;

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
    msg.setTimeStamp(0.35801980447445536);
    msg.setSource(59412U);
    msg.setSourceEntity(182U);
    msg.setDestination(27170U);
    msg.setDestinationEntity(39U);
    msg.value = 0.16524022836335073;

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
    msg.setTimeStamp(0.4411928513297899);
    msg.setSource(1512U);
    msg.setSourceEntity(26U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(227U);
    msg.value = 0.8078028173552936;

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
    msg.setTimeStamp(0.38797228783007165);
    msg.setSource(5703U);
    msg.setSourceEntity(226U);
    msg.setDestination(52622U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 4189462017U;
    msg.start_lat = 0.9212444044726398;
    msg.start_lon = 0.2399189023465491;
    msg.start_z = 0.1668580393906417;
    msg.start_z_units = 234U;
    msg.end_lat = 0.13472094404207635;
    msg.end_lon = 0.7757152875037732;
    msg.end_z = 0.8097639507222832;
    msg.end_z_units = 94U;
    msg.speed = 0.7893238436136301;
    msg.speed_units = 87U;
    msg.lradius = 0.9872594891904318;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.8781064754288744);
    msg.setSource(51873U);
    msg.setSourceEntity(181U);
    msg.setDestination(58742U);
    msg.setDestinationEntity(244U);
    msg.path_ref = 1482319116U;
    msg.start_lat = 0.15502488823082583;
    msg.start_lon = 0.11584736364492165;
    msg.start_z = 0.2992795844667897;
    msg.start_z_units = 229U;
    msg.end_lat = 0.7523331738213097;
    msg.end_lon = 0.8947609839013009;
    msg.end_z = 0.08026000102166797;
    msg.end_z_units = 212U;
    msg.speed = 0.5914707903753209;
    msg.speed_units = 205U;
    msg.lradius = 0.07709907465199817;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.18460535792914734);
    msg.setSource(47868U);
    msg.setSourceEntity(135U);
    msg.setDestination(50529U);
    msg.setDestinationEntity(11U);
    msg.path_ref = 2070101989U;
    msg.start_lat = 0.8780611833676809;
    msg.start_lon = 0.5874629174380315;
    msg.start_z = 0.6712758081362306;
    msg.start_z_units = 217U;
    msg.end_lat = 0.03087272938413066;
    msg.end_lon = 0.45886168871252253;
    msg.end_z = 0.9155055011069704;
    msg.end_z_units = 52U;
    msg.speed = 0.10411770308191948;
    msg.speed_units = 89U;
    msg.lradius = 0.6560764702020242;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.9455631780264242);
    msg.setSource(64127U);
    msg.setSourceEntity(53U);
    msg.setDestination(47737U);
    msg.setDestinationEntity(212U);
    msg.x = 0.09982013150970026;
    msg.y = 0.3206216549330918;
    msg.z = 0.16544000756263066;
    msg.k = 0.6514907391893399;
    msg.m = 0.902260065788903;
    msg.n = 0.28062128986572377;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.34317015360358627);
    msg.setSource(3093U);
    msg.setSourceEntity(120U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(7U);
    msg.x = 0.5188591981986491;
    msg.y = 0.6248374177641015;
    msg.z = 0.8372326743876398;
    msg.k = 0.2808371855366042;
    msg.m = 0.8932615057003063;
    msg.n = 0.17846496228271158;
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
    msg.setTimeStamp(0.22841694496080334);
    msg.setSource(47110U);
    msg.setSourceEntity(102U);
    msg.setDestination(1785U);
    msg.setDestinationEntity(13U);
    msg.x = 0.5514924841811764;
    msg.y = 0.5287445428207863;
    msg.z = 0.7733488351539494;
    msg.k = 0.6440467726908985;
    msg.m = 0.9195668067615413;
    msg.n = 0.8857275260776133;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.5048278128166306);
    msg.setSource(13228U);
    msg.setSourceEntity(111U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8574415290024221;

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
    msg.setTimeStamp(0.330117937662771);
    msg.setSource(47948U);
    msg.setSourceEntity(102U);
    msg.setDestination(3642U);
    msg.setDestinationEntity(183U);
    msg.value = 0.016652896003901074;

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
    msg.setTimeStamp(0.6802060245104562);
    msg.setSource(29312U);
    msg.setSourceEntity(22U);
    msg.setDestination(29388U);
    msg.setDestinationEntity(251U);
    msg.value = 0.6920561424413507;

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
    msg.setTimeStamp(0.26521836871008464);
    msg.setSource(31567U);
    msg.setSourceEntity(103U);
    msg.setDestination(43685U);
    msg.setDestinationEntity(66U);
    msg.u = 0.6686293936812683;
    msg.v = 0.5299906054080559;
    msg.w = 0.24578900748997923;
    msg.p = 0.04696819944535069;
    msg.q = 0.7130041712754558;
    msg.r = 0.5237999646181072;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.04236737488104547);
    msg.setSource(40970U);
    msg.setSourceEntity(128U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(195U);
    msg.u = 0.17651687753473777;
    msg.v = 0.7791437930091669;
    msg.w = 0.03220336887121278;
    msg.p = 0.7241103075932988;
    msg.q = 0.9383720527183387;
    msg.r = 0.7858030314700886;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.03739881350992558);
    msg.setSource(36026U);
    msg.setSourceEntity(0U);
    msg.setDestination(42947U);
    msg.setDestinationEntity(111U);
    msg.u = 0.4415807944769744;
    msg.v = 0.11496209039343808;
    msg.w = 0.018909029931012178;
    msg.p = 0.12399648137137564;
    msg.q = 0.9314888470966638;
    msg.r = 0.48925278805845107;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.06811804513486197);
    msg.setSource(20560U);
    msg.setSourceEntity(95U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 4110562070U;
    msg.start_lat = 0.3652448317040181;
    msg.start_lon = 0.31908399947015087;
    msg.start_z = 0.0970483019260251;
    msg.start_z_units = 245U;
    msg.end_lat = 0.9769782059086295;
    msg.end_lon = 0.5661274299688747;
    msg.end_z = 0.7586815794271051;
    msg.end_z_units = 21U;
    msg.lradius = 0.9872463024997341;
    msg.flags = 130U;
    msg.x = 0.7302404775417888;
    msg.y = 0.9553149287108034;
    msg.z = 0.3913595844512193;
    msg.vx = 0.22380810388577965;
    msg.vy = 0.3287675997165206;
    msg.vz = 0.08750099976500225;
    msg.course_error = 0.04236053238820725;
    msg.eta = 62036U;

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
    msg.setTimeStamp(0.27298858500849554);
    msg.setSource(54120U);
    msg.setSourceEntity(99U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 1314081030U;
    msg.start_lat = 0.6845500498689606;
    msg.start_lon = 0.762472340853228;
    msg.start_z = 0.19289322784362728;
    msg.start_z_units = 10U;
    msg.end_lat = 0.4985839672443515;
    msg.end_lon = 0.3668705974524967;
    msg.end_z = 0.020835363291608844;
    msg.end_z_units = 89U;
    msg.lradius = 0.4348172181365184;
    msg.flags = 223U;
    msg.x = 0.7775969106981403;
    msg.y = 0.6436921222911954;
    msg.z = 0.9836124446890819;
    msg.vx = 0.22470328680493878;
    msg.vy = 0.4572510874688388;
    msg.vz = 0.893263083685289;
    msg.course_error = 0.54319123866244;
    msg.eta = 47705U;

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
    msg.setTimeStamp(0.9861305539141296);
    msg.setSource(19709U);
    msg.setSourceEntity(34U);
    msg.setDestination(5413U);
    msg.setDestinationEntity(152U);
    msg.path_ref = 25275082U;
    msg.start_lat = 0.42685678789699855;
    msg.start_lon = 0.5289822934833736;
    msg.start_z = 0.8497197155687288;
    msg.start_z_units = 43U;
    msg.end_lat = 0.8450033176090693;
    msg.end_lon = 0.9847422258858102;
    msg.end_z = 0.8728166507255279;
    msg.end_z_units = 149U;
    msg.lradius = 0.2767413507617542;
    msg.flags = 241U;
    msg.x = 0.5675492819742091;
    msg.y = 0.4145243967688259;
    msg.z = 0.8763405798508703;
    msg.vx = 0.07585330774338028;
    msg.vy = 0.7420986064668822;
    msg.vz = 0.27276729031102265;
    msg.course_error = 0.9501501914013162;
    msg.eta = 41152U;

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
    msg.setTimeStamp(0.37128517208322975);
    msg.setSource(64385U);
    msg.setSourceEntity(96U);
    msg.setDestination(8921U);
    msg.setDestinationEntity(246U);
    msg.k = 0.008640162209256341;
    msg.m = 0.32219530585481393;
    msg.n = 0.7384883201624481;

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
    msg.setTimeStamp(0.6973438012604888);
    msg.setSource(15196U);
    msg.setSourceEntity(122U);
    msg.setDestination(39959U);
    msg.setDestinationEntity(40U);
    msg.k = 0.05582531057147555;
    msg.m = 0.6736257640065643;
    msg.n = 0.35889886589172737;

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
    msg.setTimeStamp(0.5991988767368026);
    msg.setSource(60399U);
    msg.setSourceEntity(241U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(114U);
    msg.k = 0.7816791483537963;
    msg.m = 0.10637536008813453;
    msg.n = 0.12022994516123686;

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
    msg.setTimeStamp(0.8919136281164524);
    msg.setSource(42806U);
    msg.setSourceEntity(113U);
    msg.setDestination(17404U);
    msg.setDestinationEntity(3U);
    msg.p = 0.8008858731264433;
    msg.i = 0.6191615847332794;
    msg.d = 0.9769709833433752;
    msg.a = 0.9600085122956421;

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
    msg.setTimeStamp(0.680483639183101);
    msg.setSource(44384U);
    msg.setSourceEntity(48U);
    msg.setDestination(15023U);
    msg.setDestinationEntity(14U);
    msg.p = 0.5208752522884261;
    msg.i = 0.08958856096823553;
    msg.d = 0.04034681701089915;
    msg.a = 0.585284933352039;

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
    msg.setTimeStamp(0.6834769899619848);
    msg.setSource(50059U);
    msg.setSourceEntity(193U);
    msg.setDestination(7711U);
    msg.setDestinationEntity(5U);
    msg.p = 0.7548364017790203;
    msg.i = 0.5426655060679022;
    msg.d = 0.41880232701497255;
    msg.a = 0.6720634298302968;

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
    msg.setTimeStamp(0.04508641655377066);
    msg.setSource(37859U);
    msg.setSourceEntity(176U);
    msg.setDestination(31204U);
    msg.setDestinationEntity(243U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.9296324138046395);
    msg.setSource(32972U);
    msg.setSourceEntity(14U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(101U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.7330360170116546);
    msg.setSource(58320U);
    msg.setSourceEntity(56U);
    msg.setDestination(51486U);
    msg.setDestinationEntity(66U);
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
    IMC::Goto msg;
    msg.setTimeStamp(0.34658340454564285);
    msg.setSource(39193U);
    msg.setSourceEntity(249U);
    msg.setDestination(37438U);
    msg.setDestinationEntity(2U);
    msg.timeout = 50832U;
    msg.lat = 0.5088101305816535;
    msg.lon = 0.4305177735365884;
    msg.z = 0.3176710416168095;
    msg.z_units = 109U;
    msg.speed = 0.7119261489827381;
    msg.speed_units = 112U;
    msg.roll = 0.14161224331133715;
    msg.pitch = 0.07976658620241761;
    msg.yaw = 0.8694207447238904;
    msg.custom.assign("HPDWQTDTVSMSDMTUFUEKBMLZHUJFHJFYSXVFCLYRIMWPRMNCKGWKNLWJNORAHRHPGNSVOFNLYSQUALPXANSNBUOUILVRBYFXZTPAEZEPISYRWLKVUEPOEOUBQZRDZQAIXTGPZGVDDVWGAJEYCQIHTTWBIQAOCGZQXFOKKFQDIQGVTYKBBCYJEBODNVZYEJEPIKXNJWDRCXLZGRNHYFMCPMX");

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
    msg.setTimeStamp(0.9653536836544527);
    msg.setSource(26730U);
    msg.setSourceEntity(180U);
    msg.setDestination(51167U);
    msg.setDestinationEntity(222U);
    msg.timeout = 65023U;
    msg.lat = 0.11301394460582259;
    msg.lon = 0.8186138822555294;
    msg.z = 0.4955403179335156;
    msg.z_units = 150U;
    msg.speed = 0.4555896480120467;
    msg.speed_units = 44U;
    msg.roll = 0.7064224059769452;
    msg.pitch = 0.9127454104738827;
    msg.yaw = 0.5368877441476151;
    msg.custom.assign("MNBEKYQUAHZGLJDMCTFCHQLAUWXHVBILASYRAPHJNEIVXKXSOXYQQYPZHDPEKFZWLRNEFDSPSZLGNZVTSVQCPVAIZNGUOXWYJJDJIFKKTMERHAMJVAWFLWCEUNOXKLHEMHFTRGREOBXPTLIBGGBCCRDWNERYATAIYQUJZGTIMCPYMISMCGUPRXROOKKTFZUBDXUMNOWRHDF");

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
    msg.setTimeStamp(0.37068271374630835);
    msg.setSource(23399U);
    msg.setSourceEntity(246U);
    msg.setDestination(920U);
    msg.setDestinationEntity(12U);
    msg.timeout = 50274U;
    msg.lat = 0.185399491743364;
    msg.lon = 0.7139468680040961;
    msg.z = 0.39247546980146664;
    msg.z_units = 42U;
    msg.speed = 0.4260621102730494;
    msg.speed_units = 91U;
    msg.roll = 0.09030028230848908;
    msg.pitch = 0.13980506984509522;
    msg.yaw = 0.4820841189311196;
    msg.custom.assign("NRPUZNWIJGSSPOPKFYOHXLFVYNIJIMWODAVEWBRHRCFRQXOWAKZOYEULOQDDMLMGHZBBEIZOJJBOLUMUAVUZWMGZIBMOXGPYEKGLKGDSSXSVUQXSRUDHDXHSIZTHGNDHLJIQYQDCSHZEVWFRDFWZKVKYASEKUBBQERXQNRVAVYAIPPQEYIAKA");

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
    msg.setTimeStamp(0.11305850389960814);
    msg.setSource(7291U);
    msg.setSourceEntity(225U);
    msg.setDestination(42055U);
    msg.setDestinationEntity(230U);
    msg.timeout = 35177U;
    msg.lat = 0.6086664504454663;
    msg.lon = 0.15109011466333166;
    msg.z = 0.367660382697257;
    msg.z_units = 43U;
    msg.speed = 0.6205741470042662;
    msg.speed_units = 150U;
    msg.duration = 62434U;
    msg.radius = 0.004404915637540752;
    msg.flags = 69U;
    msg.custom.assign("FQEULWIQTMLUJFIHIPGKTAPLBSNKZDAYUFELNXRYSWLZONFMIMYVYNGXSKEJXQQKTMZJBK");

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
    msg.setTimeStamp(0.7968343798883734);
    msg.setSource(14332U);
    msg.setSourceEntity(138U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(15U);
    msg.timeout = 18282U;
    msg.lat = 0.3758721167250302;
    msg.lon = 0.7374187532573764;
    msg.z = 0.28116735621554;
    msg.z_units = 97U;
    msg.speed = 0.9071491926296336;
    msg.speed_units = 172U;
    msg.duration = 48784U;
    msg.radius = 0.2754419512390027;
    msg.flags = 5U;
    msg.custom.assign("ZYPIJSLLGKXRBWOWMMXSELNHZDGPALKYMIBDVXTEZINKDBPQGPUXOAJEPRXLSOFFBQKYYOFXLABHRJUHIKKAGZKGCQCQHISRLJFCAQJYVIWSASNDOFYBLVMIGWBVVKKYTOQTDZWGXUGOQRJH");

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
    msg.setTimeStamp(0.4250080889117076);
    msg.setSource(14824U);
    msg.setSourceEntity(191U);
    msg.setDestination(21601U);
    msg.setDestinationEntity(247U);
    msg.timeout = 45660U;
    msg.lat = 0.05273357575435489;
    msg.lon = 0.973798004820974;
    msg.z = 0.6643268416640234;
    msg.z_units = 171U;
    msg.speed = 0.8765445055762029;
    msg.speed_units = 36U;
    msg.duration = 35143U;
    msg.radius = 0.9944164819731914;
    msg.flags = 19U;
    msg.custom.assign("XYWXTVJGMHEUOUSIUSCFFBQHKCNESAMXMQPTQRKQFVZSMRVNCLQRPORJIQTESLRXDUWMZDAKWIUZJYUDCXYOPPYDEOLRB");

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
    msg.setTimeStamp(0.8536542883765925);
    msg.setSource(8622U);
    msg.setSourceEntity(104U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(172U);
    msg.custom.assign("GGNPXUBLZSXKRHQYFDVCFTORIMKADTLFGLTQZCNZYEKZEMIJGXCBAJJSBOHNNKGRMYCYHEUQNWTZZTIYVVADADTPHNCDMSQAVXMBOEFJEWOQWNMLSWRBEGVFUIYYUYJAOVRMHLOKHUGWRHOJAXUPVFLZKGRPLIDJSGPKQIXESKTAEJIIQFXQCKJAEBTVZWRCIUBDFYOYHBNCFMUNPOMBTSZWSFVXPZSOQPRKDXWGCEXLILBJCWVUPRHMWTNU");

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
    msg.setTimeStamp(0.44267530979887293);
    msg.setSource(33070U);
    msg.setSourceEntity(218U);
    msg.setDestination(16608U);
    msg.setDestinationEntity(53U);
    msg.custom.assign("GUUKLZRZPWDYEIZMYQTPOSETANAVJNLWENRLGOQLYXLBFDBNZNMHSAVRHIOACHOGPDNZXTUBVSEVKXRSJMRKIQMFRDJATXREDXFKBMYR");

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
    msg.setTimeStamp(0.8316088098018541);
    msg.setSource(28729U);
    msg.setSourceEntity(120U);
    msg.setDestination(32827U);
    msg.setDestinationEntity(13U);
    msg.custom.assign("AXBKVILIUONCVQMEGKDEPLLKSIXKJPUHGTEJUCLHKOYDSGWEERLPIADNSOQTETFCHSHTVHCEIAJOBTIOLWUZAPATOIUBZFQYRRVZCXJHHVYSLYZHO");

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
    msg.setTimeStamp(0.3831523234376437);
    msg.setSource(62216U);
    msg.setSourceEntity(247U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(64U);
    msg.timeout = 21369U;
    msg.lat = 0.0529361250176974;
    msg.lon = 0.20997265089888317;
    msg.z = 0.6064089395603541;
    msg.z_units = 57U;
    msg.duration = 42637U;
    msg.speed = 0.5766966701038633;
    msg.speed_units = 246U;
    msg.type = 29U;
    msg.radius = 0.31967059509689455;
    msg.length = 0.5394770062023694;
    msg.bearing = 0.38862505084604027;
    msg.direction = 81U;
    msg.custom.assign("CGMWUIKRTMFRNYYTUGRCSUDLJNJZLVZHQYQGRNGFASVKTEJHJIORXKJGINBUPVIOJGPUHFMICYMTAPRFQYEDEGAFWWECDJQCQK");

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
    msg.setTimeStamp(0.06549700584168505);
    msg.setSource(58720U);
    msg.setSourceEntity(199U);
    msg.setDestination(42338U);
    msg.setDestinationEntity(235U);
    msg.timeout = 30242U;
    msg.lat = 0.7117562825587285;
    msg.lon = 0.40667771041507195;
    msg.z = 0.19530132342134454;
    msg.z_units = 253U;
    msg.duration = 61675U;
    msg.speed = 0.9136648397215094;
    msg.speed_units = 2U;
    msg.type = 50U;
    msg.radius = 0.3674635965652975;
    msg.length = 0.8968787002713484;
    msg.bearing = 0.25906319060920024;
    msg.direction = 206U;
    msg.custom.assign("CTHQYIFTHGVDUJLWWIGMURXNJCBUDWJHTTZDGSMFEFHGQPKVZDSORKK");

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
    msg.setTimeStamp(0.3753298470360307);
    msg.setSource(53152U);
    msg.setSourceEntity(126U);
    msg.setDestination(11157U);
    msg.setDestinationEntity(72U);
    msg.timeout = 52546U;
    msg.lat = 0.026334341187990606;
    msg.lon = 0.1687417365433177;
    msg.z = 0.33347502988869715;
    msg.z_units = 31U;
    msg.duration = 37678U;
    msg.speed = 0.283462748865269;
    msg.speed_units = 184U;
    msg.type = 90U;
    msg.radius = 0.7662120732188084;
    msg.length = 0.3874011811779533;
    msg.bearing = 0.797068865220672;
    msg.direction = 215U;
    msg.custom.assign("OXLPSLWABNMZYJPSIFXUBUTPVSCEQSFDCZLMIJDFLXRVBJOKVOMLUEWBNLIWDEURWDVORETRAGPIMHFMYQYUPXSLSWQ");

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
    msg.setTimeStamp(0.4275049788434939);
    msg.setSource(1435U);
    msg.setSourceEntity(17U);
    msg.setDestination(52096U);
    msg.setDestinationEntity(220U);
    msg.duration = 61195U;
    msg.custom.assign("JEUZVODNQKKNQLMBESDWKGYJTFPGQZGITHAGAPFMRASZFUWRBFDHOCULECGMJXVWONNFNZZZIBSJPSUQVQNXTXDBVVPLLWAOEKHFZGYTFDFNUFXPZHXBYVYGALEUQCYPTNHIOIWEARIXCRSCYODCLQCMDBLAOMYOTMEJVYVQCDRTRZJQHPPVHGBSEPPFQXNLUGHUKTUWR");

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
    msg.setTimeStamp(0.03823066475125858);
    msg.setSource(49186U);
    msg.setSourceEntity(27U);
    msg.setDestination(55663U);
    msg.setDestinationEntity(26U);
    msg.duration = 34206U;
    msg.custom.assign("PLZEJKSMBFDGQJWIEJZHIRVYFDCCBRXGPSARZQOYVPLVWMMIENDGSPYANHBWRCEQFASNUOSOAVYZOCTBEUBVMLNERXKKCWFXBQDXVTBVLTKFUMRHMMUMFMURGNJCWPPYPFIBHCGTROIUROLPWMIPNYKHIFNGODSKHBLSTYXXYEAJQWSOFDNQLTQWJKJNWESSIVGAOKZVTEHKHUUU");

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
    msg.setTimeStamp(0.3890281354255666);
    msg.setSource(38892U);
    msg.setSourceEntity(26U);
    msg.setDestination(19775U);
    msg.setDestinationEntity(69U);
    msg.duration = 34490U;
    msg.custom.assign("PQOEOTFZWVYFYGXUWREKQATPUZZKUYWQIGNHKIUHENSACJROHMFXUTRZCISHCZNYTEOJLDPASUGLQXQBWGXVPYHUJRQWNEXVOTRDSCPLMEJOHCJVBCIVHNTMLSDVKURGHMUZEWFKRYTMDBKDODSEXFAMXVLBQ");

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
    msg.setTimeStamp(0.8452140875551105);
    msg.setSource(15288U);
    msg.setSourceEntity(19U);
    msg.setDestination(57295U);
    msg.setDestinationEntity(55U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.4224778054687228;
    tmp_msg_0.z_units = 158U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45353U;
    msg.custom.assign("DLIBYCZJRUGADEQQPPUZPDLKQYHRIZTFCYHBPHBCCMVCQNDEXWPHQFVMTAXARVJNTJEVLPXVKWTWMUZVBZTAKANKNZSHZKSLQRYGFKOMOFHDJXURWBCFUKIFAPHKDAHRQWMOCBTVWTOISBGEHLSESYBCFNPJKQLPFXXOMGPXGTCBWCDILNVOKGWUXGXTDFBANLMVIUVLSZINQTRIDRMESFGJGLSUEJDYSSOOMXEAUIYIYZNJ");

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
    msg.setTimeStamp(0.6663418452086833);
    msg.setSource(20020U);
    msg.setSourceEntity(192U);
    msg.setDestination(23150U);
    msg.setDestinationEntity(11U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1799731243U;
    tmp_msg_0.start_lat = 0.13705263670340517;
    tmp_msg_0.start_lon = 0.6901571059838144;
    tmp_msg_0.start_z = 0.0948274234551113;
    tmp_msg_0.start_z_units = 52U;
    tmp_msg_0.end_lat = 0.10877801278202259;
    tmp_msg_0.end_lon = 0.5189449978130916;
    tmp_msg_0.end_z = 0.6804571202680431;
    tmp_msg_0.end_z_units = 203U;
    tmp_msg_0.speed = 0.28259214640086505;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.lradius = 0.40478470382372533;
    tmp_msg_0.flags = 210U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52960U;
    msg.custom.assign("WLAQYONMNKSCHKFDQXHWRTPJHDPOMAAAIXMWXMJWKANVLQJKJGYGHTZSWIEJZCPUAOHFBDBNYVWYG");

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
    msg.setTimeStamp(0.17107328953436762);
    msg.setSource(10194U);
    msg.setSourceEntity(190U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(143U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.27448703588522283;
    tmp_msg_0.speed_units = 170U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21599U;
    msg.custom.assign("ADBCCZUSZYDIJWQKOIDWSSGYHSGWUODGFJOSO");

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
    msg.setTimeStamp(0.7176875764093039);
    msg.setSource(9810U);
    msg.setSourceEntity(189U);
    msg.setDestination(54919U);
    msg.setDestinationEntity(224U);
    msg.timeout = 37400U;
    msg.lat = 0.03519047368939965;
    msg.lon = 0.80911555991806;
    msg.z = 0.6882532553809002;
    msg.z_units = 42U;
    msg.speed = 0.6217490375564579;
    msg.speed_units = 67U;
    msg.bearing = 0.9878895862196062;
    msg.cross_angle = 0.5783945752964432;
    msg.width = 0.44020138091615035;
    msg.length = 0.7277052550024443;
    msg.hstep = 0.026236362364876253;
    msg.coff = 141U;
    msg.alternation = 57U;
    msg.flags = 51U;
    msg.custom.assign("DZTAGOPDYZUYURXCYIRXAHPWYUCWSLKWSVNRLUAUJSYQNSUZADKZAGNLFLGZRJOBGPTAZKKSVSTZFSMKQRTCQWPGRQREEPMYUKXGMWBJAIMCEFXEHVHLPQQKVU");

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
    msg.setTimeStamp(0.5958395458377697);
    msg.setSource(43889U);
    msg.setSourceEntity(184U);
    msg.setDestination(13308U);
    msg.setDestinationEntity(98U);
    msg.timeout = 48338U;
    msg.lat = 0.04594342124172868;
    msg.lon = 0.6223595325254977;
    msg.z = 0.9556744567322446;
    msg.z_units = 75U;
    msg.speed = 0.8407342181523475;
    msg.speed_units = 239U;
    msg.bearing = 0.3328135054136099;
    msg.cross_angle = 0.4878529970315417;
    msg.width = 0.38628080953359645;
    msg.length = 0.35149963737868395;
    msg.hstep = 0.8605269360878679;
    msg.coff = 229U;
    msg.alternation = 72U;
    msg.flags = 154U;
    msg.custom.assign("IFBTIXIMWOPJHYHYWDIWDQMYTSDEFVFGKSUEQAYVAXALCJHNXHBKYKQHKSBCJKJDQBWHEORDXUNTVAQRAQNASKOBEEFMKVGMCNRPWMQGAAFLOUZBSSGXMJYHKUTPZJDGUWUFYLVZIFGU");

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
    msg.setTimeStamp(0.8590940736262207);
    msg.setSource(11837U);
    msg.setSourceEntity(199U);
    msg.setDestination(11235U);
    msg.setDestinationEntity(199U);
    msg.timeout = 37236U;
    msg.lat = 0.2623231409804917;
    msg.lon = 0.516995823716263;
    msg.z = 0.37822269387399876;
    msg.z_units = 94U;
    msg.speed = 0.09616715011922017;
    msg.speed_units = 9U;
    msg.bearing = 0.22499488429960024;
    msg.cross_angle = 0.8378990420059784;
    msg.width = 0.8034200980275458;
    msg.length = 0.957838240670618;
    msg.hstep = 0.5871600170305534;
    msg.coff = 235U;
    msg.alternation = 14U;
    msg.flags = 98U;
    msg.custom.assign("PFHXUUXORAESQBYUCWCWLRPDHVTWQBQGPLVSETYSVJXJHEENLVPIXFXVVRRNRNAMOFFNGBPBFYFYJRGMKJIWTACVSAMTMWAZOXQKDNIABGIUQJIDASENPHQQ");

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
    msg.setTimeStamp(0.340921124196747);
    msg.setSource(22107U);
    msg.setSourceEntity(196U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(176U);
    msg.timeout = 36113U;
    msg.lat = 0.413644478927102;
    msg.lon = 0.5782296941400344;
    msg.z = 0.7501673839409234;
    msg.z_units = 139U;
    msg.speed = 0.9619193108482664;
    msg.speed_units = 127U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6409543990533377;
    tmp_msg_0.y = 0.476373818168609;
    tmp_msg_0.z = 0.5701299444460431;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DMIIHLUFFKJAACHDBUOXKEIZFYKROHJRMYJJSEVXWCKOVURQZQKYNTVDLNLIUQGERKSXDVWXUVZNMYADFQXBXEHEHVTQRYTCBJ");

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
    msg.setTimeStamp(0.44802106116397733);
    msg.setSource(17081U);
    msg.setSourceEntity(205U);
    msg.setDestination(44167U);
    msg.setDestinationEntity(210U);
    msg.timeout = 671U;
    msg.lat = 0.4310949265509194;
    msg.lon = 0.35947591577834914;
    msg.z = 0.2059683655456348;
    msg.z_units = 159U;
    msg.speed = 0.5660395838768002;
    msg.speed_units = 238U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9100738119890855;
    tmp_msg_0.y = 0.45324111795743727;
    tmp_msg_0.z = 0.8869055942242943;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HFIQVICGUKQJMKZRWLSDWRFRIKCYYEAFSSNHIZ");

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
    msg.setTimeStamp(0.06672334943881619);
    msg.setSource(4019U);
    msg.setSourceEntity(8U);
    msg.setDestination(11064U);
    msg.setDestinationEntity(147U);
    msg.timeout = 41324U;
    msg.lat = 0.24068106069628759;
    msg.lon = 0.9583366288978169;
    msg.z = 0.040900442715273155;
    msg.z_units = 96U;
    msg.speed = 0.4423803625867603;
    msg.speed_units = 96U;
    msg.custom.assign("ZTDZTIECMIVLCEQLTOBUZMSNKJJNZUUMLJFNDCOK");

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
    msg.setTimeStamp(0.2302367084529462);
    msg.setSource(64748U);
    msg.setSourceEntity(119U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(226U);
    msg.x = 0.9433763070191452;
    msg.y = 0.24871788180114085;
    msg.z = 0.30792444934846697;

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
    msg.setTimeStamp(0.7585567782996236);
    msg.setSource(42238U);
    msg.setSourceEntity(164U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(81U);
    msg.x = 0.4237084875766235;
    msg.y = 0.9107484176244169;
    msg.z = 0.2287019612046619;

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
    msg.setTimeStamp(0.6461939369534412);
    msg.setSource(60718U);
    msg.setSourceEntity(110U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(88U);
    msg.x = 0.8005722268466119;
    msg.y = 0.3814720191487231;
    msg.z = 0.5533952170171422;

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
    msg.setTimeStamp(0.7534716271400496);
    msg.setSource(1590U);
    msg.setSourceEntity(140U);
    msg.setDestination(60938U);
    msg.setDestinationEntity(46U);
    msg.timeout = 51141U;
    msg.lat = 0.998685011512208;
    msg.lon = 0.21163745212691298;
    msg.z = 0.05981373882091867;
    msg.z_units = 146U;
    msg.amplitude = 0.692474941418632;
    msg.pitch = 0.06340824421000113;
    msg.speed = 0.2141273400685474;
    msg.speed_units = 171U;
    msg.custom.assign("WUAUCAYZDODMYMXVBBCXGBWDTFIKAKQRLLEQDELQXZSMKBZUCEJWCAETTCWWHKWUNTCLRMDRXOYXAMPQCZJPKRPPSXOBVZZJLVIQYVISMROGASSJITU");

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
    msg.setTimeStamp(0.7168945407171861);
    msg.setSource(47360U);
    msg.setSourceEntity(124U);
    msg.setDestination(27324U);
    msg.setDestinationEntity(250U);
    msg.timeout = 18121U;
    msg.lat = 0.5506830832839889;
    msg.lon = 0.8488165411902229;
    msg.z = 0.7485979253718684;
    msg.z_units = 178U;
    msg.amplitude = 0.9695364305630064;
    msg.pitch = 0.3875275889602843;
    msg.speed = 0.2657153312481285;
    msg.speed_units = 246U;
    msg.custom.assign("JERBFWIDGMBXNHOSYTUUBBKMUBWOWWSJSRQSWUOVCDDTPJVCKKLYGQBIIXYOPJLMFQXOMYTRAJBJNPHHSLTYMINFQGZDAAFLLIHVPUAKHZJHQCKANGFGOPJTAEOXYPUKXSZEXTEFFALIZBLOUOGUD");

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
    msg.setTimeStamp(0.33040152726522165);
    msg.setSource(47392U);
    msg.setSourceEntity(194U);
    msg.setDestination(4412U);
    msg.setDestinationEntity(240U);
    msg.timeout = 33011U;
    msg.lat = 0.9290761254533695;
    msg.lon = 0.23169117843797526;
    msg.z = 0.3692908792590589;
    msg.z_units = 52U;
    msg.amplitude = 0.022523863363470675;
    msg.pitch = 0.4919018024722327;
    msg.speed = 0.7600734031896277;
    msg.speed_units = 218U;
    msg.custom.assign("HRPOUFFLYQUTFICVIKVFTFPWZIKSFRJRGHEGUEEZMCADVUAHBLMYPBJBBCVNRYPDTZTCIDRWVANVIPXWNVKDNJNZUZWXHCKKLRUJYDTYKBBHLWHRKVWGJRHDSXENASQXKPLJJOZJSQOGIOZABFQQPDYEZQGTOQICMFXEBXOEMUSAAGUTAWLSEPQCIHAQXWSDMHTSSPTPOTLBMDZXNYEMSKAGGWYJXGMC");

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
    msg.setTimeStamp(0.5213579710538607);
    msg.setSource(1487U);
    msg.setSourceEntity(174U);
    msg.setDestination(51924U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.7393373753974124);
    msg.setSource(26108U);
    msg.setSourceEntity(24U);
    msg.setDestination(3177U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.6912604706594865);
    msg.setSource(41152U);
    msg.setSourceEntity(67U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.772526368972835);
    msg.setSource(30585U);
    msg.setSourceEntity(104U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.5564106575903723;
    msg.lon = 0.5997543619907045;
    msg.z = 0.401482046027857;
    msg.z_units = 132U;
    msg.radius = 0.06821335300733411;
    msg.duration = 22994U;
    msg.speed = 0.48924842355360876;
    msg.speed_units = 223U;
    msg.custom.assign("CMWTPRKXVMUEGYUYXBIYUOJIPDNGMKCFQVIFZXZLTKTSJSWHSJQCBUQVFFDKBRDOQCPZGSYJECGTNGRIMDWLJGHEEOTUUNSFMYVZPXMDLMFHCRIKXOANRXTLQZADPYIOBUJGNMLFEAECQSXWZOXMVHNULAARVUZALPZKLHJNIMOOYHKNLBGTJPORVYIHHKVKPBAOAQWEBPFJVCAGIXYEKUXTSRBTHWIPWDFTRNDHB");

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
    msg.setTimeStamp(0.8057743667053896);
    msg.setSource(51610U);
    msg.setSourceEntity(201U);
    msg.setDestination(52682U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.36613827700867296;
    msg.lon = 0.6319081272974914;
    msg.z = 0.06943600176856135;
    msg.z_units = 169U;
    msg.radius = 0.8283632566362217;
    msg.duration = 45003U;
    msg.speed = 0.48557883419917514;
    msg.speed_units = 73U;
    msg.custom.assign("AEBSTKJLNUJMYRQPAXTUUECTMXWFBUZVQUCNBNOBVKYVMPPXHLXADMORMSFPFNGJJTCBDHFORQZ");

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
    msg.setTimeStamp(0.3718893512249607);
    msg.setSource(36128U);
    msg.setSourceEntity(97U);
    msg.setDestination(48147U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.45582108177534764;
    msg.lon = 0.2851967760491003;
    msg.z = 0.22556005769838883;
    msg.z_units = 19U;
    msg.radius = 0.34064656208660293;
    msg.duration = 2981U;
    msg.speed = 0.5390803719577595;
    msg.speed_units = 136U;
    msg.custom.assign("KASFNMUFZCITLABQWDGZIJMDSQEHUNRHDOVSIAYZEYVQJPWFBSFTGIZHKPKMAENJNTDLUTHUPERCSBHEHSCRLIDMRHTXOXDWHZWUETJXLRMOOUIYMVQQLPYJVJYUBLCUESJUQOBYKHKGAMTYIGYNLWAYGADOCMBNTIRCQKQMKKCXRKPPPVFTMGOWWWVCNVCAXWGOYRZXBDTLXZVLSGSFXFLKVJIQHO");

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
    msg.setTimeStamp(0.32498903751832586);
    msg.setSource(39366U);
    msg.setSourceEntity(87U);
    msg.setDestination(29793U);
    msg.setDestinationEntity(3U);
    msg.timeout = 39587U;
    msg.flags = 0U;
    msg.lat = 0.3344820758775502;
    msg.lon = 0.10367901380860933;
    msg.start_z = 0.506252363586588;
    msg.start_z_units = 22U;
    msg.end_z = 0.7939566402280713;
    msg.end_z_units = 234U;
    msg.radius = 0.055170578311546925;
    msg.speed = 0.8761774430381783;
    msg.speed_units = 77U;
    msg.custom.assign("RCTZCXEFYLGWPFFUQLIIUFDKQGMNMAYBTGXGOEPMNCVEKUEPQYJVHIMDMLLMBM");

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
    msg.setTimeStamp(0.8366709528559514);
    msg.setSource(54806U);
    msg.setSourceEntity(67U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(12U);
    msg.timeout = 58926U;
    msg.flags = 119U;
    msg.lat = 0.024349932281965914;
    msg.lon = 0.9311563496274889;
    msg.start_z = 0.8885263799905377;
    msg.start_z_units = 233U;
    msg.end_z = 0.9674908402745842;
    msg.end_z_units = 253U;
    msg.radius = 0.9981627218377902;
    msg.speed = 0.6867914387727784;
    msg.speed_units = 16U;
    msg.custom.assign("HNRWONPSPHWSLOTLONFARIGTEBVYUFCKYNGHPQAOBFUIEYMWLCUOSGVTPGODIHJMTZLTZJGOAYNBWRTDNRKJQMCTBAVVVBEXOEZGMKZDHWYRHFBDJCIZVICGXBEQPDJJEREMYUHSIIQFMACECNJBSMDUSFJKWXLFPKACRXDQPLGVZFEDQHVVIQCGRZPQUTWWBDPLYLHLCZJUUFQXYNAIKOUSQYXEXRNH");

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
    msg.setTimeStamp(0.582906465323286);
    msg.setSource(62020U);
    msg.setSourceEntity(3U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(93U);
    msg.timeout = 3412U;
    msg.flags = 190U;
    msg.lat = 0.856041914324443;
    msg.lon = 0.36835993406297163;
    msg.start_z = 0.2914310366772994;
    msg.start_z_units = 207U;
    msg.end_z = 0.9350716061348604;
    msg.end_z_units = 158U;
    msg.radius = 0.717914037840596;
    msg.speed = 0.6776716677848241;
    msg.speed_units = 50U;
    msg.custom.assign("HSBYQKGAZJDWXCHUYJZEVKQCWGYITNKSAYNIQLOTAFGHPAECQOSFDYYDUEZYKCMTJNLXGMFPYDKXLIEUPVTQOLHBDFNABZXBTNGWMDCPIVJGLIRKUPAZRJZTUWWWLGNEQBFWHRYSJ");

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
    msg.setTimeStamp(0.8979862846156997);
    msg.setSource(56064U);
    msg.setSourceEntity(171U);
    msg.setDestination(3537U);
    msg.setDestinationEntity(246U);
    msg.timeout = 55740U;
    msg.lat = 0.023170306396335216;
    msg.lon = 0.8255573711817314;
    msg.z = 0.9864671795754856;
    msg.z_units = 179U;
    msg.speed = 0.6775316966056733;
    msg.speed_units = 178U;
    msg.custom.assign("CUZCQUIBYNPYGOZAEXQLHCDFEWGIFNXGWHJQYTNDMDVQUFSOMXKOVGCKERAEIPQAJRRWZWWXARJLHBKEMALSCHRBBALUOTYOLNZDBTROTQFTRPEDPRVCETBIAFJGJOWQWLGLZWDFOFLPXUXSMZYVBRZSYJPVKTKSVPSEWIIKPFDQLIUQADNRHJGJHTYNMSAOIKYEBCFPJPUYHTVXHZNAMNNGXVIXQZBBMCVH");

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
    msg.setTimeStamp(0.10967240487722751);
    msg.setSource(15723U);
    msg.setSourceEntity(214U);
    msg.setDestination(27891U);
    msg.setDestinationEntity(164U);
    msg.timeout = 49589U;
    msg.lat = 0.8384478143784776;
    msg.lon = 0.9063324394887767;
    msg.z = 0.2891107835658818;
    msg.z_units = 40U;
    msg.speed = 0.22284116827047962;
    msg.speed_units = 140U;
    msg.custom.assign("FTQSYANJIBLEGDJAEOIZZWXBFENJSAGICIHQIJWLCYXECOTCNIUCTCRTJCKROVLMUHWHCJXYUZHSIHMNKN");

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
    msg.setTimeStamp(0.23014274549818325);
    msg.setSource(42325U);
    msg.setSourceEntity(29U);
    msg.setDestination(46114U);
    msg.setDestinationEntity(105U);
    msg.timeout = 7744U;
    msg.lat = 0.8978895979638136;
    msg.lon = 0.8201782194635382;
    msg.z = 0.2408292395013194;
    msg.z_units = 237U;
    msg.speed = 0.7354569835131998;
    msg.speed_units = 15U;
    msg.custom.assign("GMADDPXTJFHLQYSSAWRVGSTMON");

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
    msg.setTimeStamp(0.6307908323364672);
    msg.setSource(23460U);
    msg.setSourceEntity(38U);
    msg.setDestination(14642U);
    msg.setDestinationEntity(118U);
    msg.x = 0.8934783271924117;
    msg.y = 0.6310526865026792;
    msg.z = 0.08141572536239894;
    msg.t = 0.3650254463138233;

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
    msg.setTimeStamp(0.4550427255651376);
    msg.setSource(62528U);
    msg.setSourceEntity(193U);
    msg.setDestination(8616U);
    msg.setDestinationEntity(146U);
    msg.x = 0.5876047086109579;
    msg.y = 0.22630223399786564;
    msg.z = 0.3836268323727958;
    msg.t = 0.939143562837559;

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
    msg.setTimeStamp(0.28541514099291554);
    msg.setSource(16849U);
    msg.setSourceEntity(84U);
    msg.setDestination(12922U);
    msg.setDestinationEntity(24U);
    msg.x = 0.758996770073181;
    msg.y = 0.828355255468324;
    msg.z = 0.8549379716176142;
    msg.t = 0.4037573807889968;

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
    msg.setTimeStamp(0.36170294960711624);
    msg.setSource(15988U);
    msg.setSourceEntity(57U);
    msg.setDestination(53486U);
    msg.setDestinationEntity(81U);
    msg.timeout = 28078U;
    msg.name.assign("MVKDVRZAZOCGLPFOCGZIDRQHRDBNLLZYCIHHXGVZAAJESYWEX");
    msg.custom.assign("HFCSUOYLKWZKSYDZERRCHFBTXEBWDRNQGSRWFBPCMGBMHOIBVTFFSSYQPMSTVZAEHIQNTUCBCARTPYMNKLLOAEXJODWIDTRQKDZVVILULGRFIOGYMMZVCPOICVGVPMBJUAESWLFQJNQQFHUEINX");

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
    msg.setTimeStamp(0.09982022833113946);
    msg.setSource(64404U);
    msg.setSourceEntity(90U);
    msg.setDestination(63339U);
    msg.setDestinationEntity(212U);
    msg.timeout = 23490U;
    msg.name.assign("AGILZDEXPSCDNHREQMEMSFNLMJRQZAEMPJIGFPPWANKJAYMAUNCBPMTUKRBXKIWVHUOSJANMFWFKRSZIFIGXAXTYFKZXOHGXIBVFQPHGOTRHFSKLZZEVJTHNHSYLCTRLDFBEYLJGBRPWRQUFQWUSDYZ");
    msg.custom.assign("ZPEISFKSDMODVHWBSPNRHDKGOLHSKFUJCKRMBLOAWUIGTQKNILLVDTFQMMDKWFXSZOTLGWVLBTBMOMJCAGHCVUFOSPOQQGMYWLVFXZEICHJWFIINONEXSKBCKDEMXAHXLPFYWHJCEZNXTGQZPTZXCQHDRRMAVLDYWPAZUYGJPYDZLQARGAHYTBEXYUMRWYBXEUIZFBEETNJDCXVJRYPSQPZBRIWYNVP");

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
    msg.setTimeStamp(0.913334446735778);
    msg.setSource(28707U);
    msg.setSourceEntity(142U);
    msg.setDestination(46162U);
    msg.setDestinationEntity(195U);
    msg.timeout = 24200U;
    msg.name.assign("XRPWALVXUIUSTYUGIWMKQEBKQWHYTGOPUIAQMNKRPTJFBNNEQILLDUILZDJRUCSFLDVEHSFZPXDDXYWIZOSRBLPOMW");
    msg.custom.assign("JPIHEMVVUCPWNWLHBSASIOYVADZCXVMOOQOKVDLKCWTXBOQNCCCJMMBDKYGQUEKPJLEKHUTDTKYJHNXVQAUZMMYHQLAPKCKWGRPDOIIYUYFEQSADZAWQWGJNCTICANUFKTENURDFYRNRRTMSCWTFJSJFMYXJUABISAJWTOXNEZLLNZYHOWNBFFGZGXWGSLK");

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
    msg.setTimeStamp(0.13475349850678675);
    msg.setSource(54114U);
    msg.setSourceEntity(42U);
    msg.setDestination(39697U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.8738400841498178;
    msg.lon = 0.7133782104967247;
    msg.z = 0.17305305819396144;
    msg.z_units = 60U;
    msg.speed = 0.26852124922248133;
    msg.speed_units = 136U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9874154767471082;
    tmp_msg_0.y = 0.7757495412135202;
    tmp_msg_0.z = 0.3170784512366682;
    tmp_msg_0.t = 0.41137173505920144;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 32721U;
    tmp_msg_1.off_x = 0.21021097879473172;
    tmp_msg_1.off_y = 0.9456741501388181;
    tmp_msg_1.off_z = 0.9143680424489086;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.869717740186909;
    msg.custom.assign("WFIYJNGRVMBWPGTZZSOXJMLYIDKFHXGKFBRLSRBZNXXQIDOBWVHUSCLMVWPKTPBDFMHJFTRQLNPUPLDYUNUMOHYCQEAQWKVWKVKBSNRAAQHABIOOAZHJ");

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
    msg.setTimeStamp(0.9861217387149093);
    msg.setSource(23435U);
    msg.setSourceEntity(32U);
    msg.setDestination(6947U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.6601624106521016;
    msg.lon = 0.17148572322690492;
    msg.z = 0.7613555663601451;
    msg.z_units = 143U;
    msg.speed = 0.7467120688087757;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.021377566871594866;
    tmp_msg_0.y = 0.43623344537161013;
    tmp_msg_0.z = 0.8568376104497436;
    tmp_msg_0.t = 0.07765303023808579;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 37740U;
    tmp_msg_1.off_x = 0.7747562002074985;
    tmp_msg_1.off_y = 0.7384301191650222;
    tmp_msg_1.off_z = 0.8227046846336549;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.13743657269760345;
    msg.custom.assign("TFONGQNEOMFGWLGSXYQDNJFCAJXRUZPSOIRRGZIVAFDNO");

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
    msg.setTimeStamp(0.6495795013717934);
    msg.setSource(42323U);
    msg.setSourceEntity(168U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.8424331922292269;
    msg.lon = 0.6025168122635008;
    msg.z = 0.04749768811253052;
    msg.z_units = 177U;
    msg.speed = 0.867495214433433;
    msg.speed_units = 117U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7784087556841672;
    tmp_msg_0.y = 0.2813136977070678;
    tmp_msg_0.z = 0.651149224032187;
    tmp_msg_0.t = 0.5753874720544929;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.13361326536468987;
    msg.custom.assign("QGVUMGTVFAWMZRPUDQYNHCAFIENNSXBZKRDYOGVPKRWQZPTHPDVEHPJLDTTOYKLWY");

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
    msg.setTimeStamp(0.03527318463027829);
    msg.setSource(18854U);
    msg.setSourceEntity(59U);
    msg.setDestination(53340U);
    msg.setDestinationEntity(0U);
    msg.vid = 23815U;
    msg.off_x = 0.5926706487083825;
    msg.off_y = 0.6166919201933333;
    msg.off_z = 0.6327827177148367;

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
    msg.setTimeStamp(0.5591301673339555);
    msg.setSource(47384U);
    msg.setSourceEntity(182U);
    msg.setDestination(53355U);
    msg.setDestinationEntity(219U);
    msg.vid = 11570U;
    msg.off_x = 0.20924429533935784;
    msg.off_y = 0.6320735389899885;
    msg.off_z = 0.33679713721807114;

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
    msg.setTimeStamp(0.6363642634154735);
    msg.setSource(56597U);
    msg.setSourceEntity(72U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(37U);
    msg.vid = 16011U;
    msg.off_x = 0.1945043197398485;
    msg.off_y = 0.40507926362616875;
    msg.off_z = 0.893575872418251;

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
    msg.setTimeStamp(0.6887548263389114);
    msg.setSource(32763U);
    msg.setSourceEntity(136U);
    msg.setDestination(29919U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.3787020389300666);
    msg.setSource(19160U);
    msg.setSourceEntity(106U);
    msg.setDestination(2001U);
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
    msg.setTimeStamp(0.7242340919739405);
    msg.setSource(45090U);
    msg.setSourceEntity(179U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.7168933000517734);
    msg.setSource(33798U);
    msg.setSourceEntity(157U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(167U);
    msg.mid = 56941U;

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
    msg.setTimeStamp(0.6377853344202741);
    msg.setSource(64939U);
    msg.setSourceEntity(233U);
    msg.setDestination(9213U);
    msg.setDestinationEntity(57U);
    msg.mid = 24897U;

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
    msg.setTimeStamp(0.7196859842294652);
    msg.setSource(34563U);
    msg.setSourceEntity(192U);
    msg.setDestination(282U);
    msg.setDestinationEntity(36U);
    msg.mid = 31888U;

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
    msg.setTimeStamp(0.908361763813283);
    msg.setSource(31772U);
    msg.setSourceEntity(191U);
    msg.setDestination(7723U);
    msg.setDestinationEntity(63U);
    msg.state = 156U;
    msg.eta = 3265U;
    msg.info.assign("ELLUIRCMZHLXGQJMJGNAZVOIWXRTDDMBIFZOGJIFFPCZHDYBGIUAOSYKSSTSHHLKLNXOGPJXKBXRDMOTJKPCTILROHDSWHNBYPNUHFEPPVTQEKBGHGRMYRVDBAKUNNYJQKVMADX");

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
    msg.setTimeStamp(0.2622308708085058);
    msg.setSource(23220U);
    msg.setSourceEntity(57U);
    msg.setDestination(15702U);
    msg.setDestinationEntity(89U);
    msg.state = 151U;
    msg.eta = 1871U;
    msg.info.assign("DEQXZIFUVMAOLWPBPPITBJXYCLDCGSGTLSQDXKIHNNROWYQANBJKZJMWOCWHDNPUXHNSFZCTKRQQQWUYXTQGXAFMYMRZJNHQXSVHGYGHLAKTBKUDPBJJFKKUERFHERQMUOCRMWLVVAZWVELAESZTYBIAHNOORCGVEBTIFJKMHFXSBAYTMTEVGVUDIUPSJSBNRQPKZNAZOEVXYDEYNOGZBFAIFDMIVDLWUFZWKXSJLSOWYCGTCE");

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
    msg.setTimeStamp(0.5125120438999161);
    msg.setSource(3993U);
    msg.setSourceEntity(192U);
    msg.setDestination(21961U);
    msg.setDestinationEntity(244U);
    msg.state = 106U;
    msg.eta = 63122U;
    msg.info.assign("QBBLWTGWTMPGGMBXAORASSJTQUYERQZEYSVDEJPLEVNKVJFGHVWFYAADOFSTYLPFCUMZIKMIHSZQORMIOFANEDZMROWKUNPMIOJDPVKTVVRYGNTMTQUXZBDGIXPOKJSCTEXOQEGYUHWVRIUESRWHXZPUOGAUKAGYFBLPKFCRBKIQHZHFDNZCILGBDTHQLOKXAXIEHNHJZCRLJXMPWARLDFKNYSCCZIVTEHSXXYCVJMNDWAWQBLCQLNJUFYWPB");

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
    msg.setTimeStamp(0.6472567869785877);
    msg.setSource(23561U);
    msg.setSourceEntity(196U);
    msg.setDestination(4097U);
    msg.setDestinationEntity(167U);
    msg.system = 11676U;
    msg.duration = 14823U;
    msg.speed = 0.04945718488112527;
    msg.speed_units = 9U;
    msg.x = 0.27224061157091706;
    msg.y = 0.32420438607526136;
    msg.z = 0.5601196568433882;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.8336491005194878);
    msg.setSource(16954U);
    msg.setSourceEntity(238U);
    msg.setDestination(26595U);
    msg.setDestinationEntity(100U);
    msg.system = 20775U;
    msg.duration = 56807U;
    msg.speed = 0.6908438196027498;
    msg.speed_units = 193U;
    msg.x = 0.007112155840918066;
    msg.y = 0.9693867970830313;
    msg.z = 0.6806751176601481;
    msg.z_units = 160U;

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
    msg.setTimeStamp(0.0682659766603152);
    msg.setSource(44346U);
    msg.setSourceEntity(18U);
    msg.setDestination(12216U);
    msg.setDestinationEntity(49U);
    msg.system = 52459U;
    msg.duration = 59353U;
    msg.speed = 0.7703223970119499;
    msg.speed_units = 152U;
    msg.x = 0.9481445476192142;
    msg.y = 0.4923520606314311;
    msg.z = 0.5840731288102138;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.7376985517998264);
    msg.setSource(2173U);
    msg.setSourceEntity(233U);
    msg.setDestination(49305U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.43713162235293956;
    msg.lon = 0.3132034996750619;
    msg.speed = 0.5122307599703856;
    msg.speed_units = 141U;
    msg.duration = 61822U;
    msg.sys_a = 38853U;
    msg.sys_b = 2214U;
    msg.move_threshold = 0.6127352704407846;

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
    msg.setTimeStamp(0.7795693147276829);
    msg.setSource(42780U);
    msg.setSourceEntity(33U);
    msg.setDestination(47334U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.690476997654374;
    msg.lon = 0.47438550326371254;
    msg.speed = 0.24662208036261313;
    msg.speed_units = 167U;
    msg.duration = 29666U;
    msg.sys_a = 53159U;
    msg.sys_b = 63436U;
    msg.move_threshold = 0.747095336318112;

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
    msg.setTimeStamp(0.41580147278496005);
    msg.setSource(24838U);
    msg.setSourceEntity(82U);
    msg.setDestination(32403U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.7048244010137215;
    msg.lon = 0.8034996556733548;
    msg.speed = 0.7422679908094502;
    msg.speed_units = 46U;
    msg.duration = 39705U;
    msg.sys_a = 31364U;
    msg.sys_b = 49415U;
    msg.move_threshold = 0.39757958423561013;

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
    msg.setTimeStamp(0.6825355046552251);
    msg.setSource(41047U);
    msg.setSourceEntity(187U);
    msg.setDestination(21237U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.8556976668008963;
    msg.lon = 0.3330818788246007;
    msg.z = 0.3149856899720499;
    msg.z_units = 154U;
    msg.speed = 0.8082197627260952;
    msg.speed_units = 63U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.669104632974469;
    tmp_msg_0.lon = 0.05236204223039265;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FXHEQOMVTESLRBQEXPNIJOGWCWJTINICURSCGPNEYNUYLZRQQDCPWMBBHTDHPXKLZZVPAHQKSFKWDLVILHNRXOFICEBWRZBCMOOSFPYKTVIAHZIGPMKMEWVPGRSADEUGBDRAQQMXWAYLEL");

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
    msg.setTimeStamp(0.021384067663623885);
    msg.setSource(59138U);
    msg.setSourceEntity(54U);
    msg.setDestination(32955U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.38046170189382844;
    msg.lon = 0.9932475099116159;
    msg.z = 0.25341017938251265;
    msg.z_units = 101U;
    msg.speed = 0.7132296590092566;
    msg.speed_units = 230U;
    msg.custom.assign("UUFPXEVFBYSAZUUVEJIEA");

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
    msg.setTimeStamp(0.9886278430775777);
    msg.setSource(9854U);
    msg.setSourceEntity(96U);
    msg.setDestination(47832U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.09400159805448927;
    msg.lon = 0.3076500985567573;
    msg.z = 0.19594072994754075;
    msg.z_units = 183U;
    msg.speed = 0.2728216829295125;
    msg.speed_units = 87U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.042809747998416525;
    tmp_msg_0.lon = 0.3412201142551675;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GUFSNQKBISTBALTYAHDEDZZBGJMEWTKUNTUACDUVPLQSWHGHDVSSYPTVANWEZFRWPBLNCEEIAHEPSBINXKDYTMXMMPR");

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
    msg.setTimeStamp(0.2514674578362085);
    msg.setSource(64042U);
    msg.setSourceEntity(82U);
    msg.setDestination(61316U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.831856964434625;
    msg.lon = 0.9993249151820717;

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
    msg.setTimeStamp(0.33208389006950734);
    msg.setSource(54110U);
    msg.setSourceEntity(172U);
    msg.setDestination(20173U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.25618609097021894;
    msg.lon = 0.12200196695609355;

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
    msg.setTimeStamp(0.5641878126362786);
    msg.setSource(50055U);
    msg.setSourceEntity(144U);
    msg.setDestination(21131U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.6674329121078816;
    msg.lon = 0.9922031703386657;

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
    msg.setTimeStamp(0.29527100002104756);
    msg.setSource(51149U);
    msg.setSourceEntity(195U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(119U);
    msg.timeout = 4021U;
    msg.lat = 0.8392193596183496;
    msg.lon = 0.04458757459806384;
    msg.z = 0.05546541038960029;
    msg.z_units = 189U;
    msg.pitch = 0.5405563481425947;
    msg.amplitude = 0.9730078044998782;
    msg.duration = 781U;
    msg.speed = 0.7323079930149345;
    msg.speed_units = 142U;
    msg.radius = 0.05813304022954502;
    msg.direction = 75U;
    msg.custom.assign("QEVHBHNJNQRCNHNIKIZORXWTWSCUDTLYCMTLDVUXAPXVLEQPBYSKUEFOVAMYBIFO");

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
    msg.setTimeStamp(0.40990961245928703);
    msg.setSource(49595U);
    msg.setSourceEntity(166U);
    msg.setDestination(55452U);
    msg.setDestinationEntity(123U);
    msg.timeout = 39921U;
    msg.lat = 0.24405714379159105;
    msg.lon = 0.5095703885092416;
    msg.z = 0.6584722852503807;
    msg.z_units = 78U;
    msg.pitch = 0.36466872709080067;
    msg.amplitude = 0.16251293371497866;
    msg.duration = 27955U;
    msg.speed = 0.24120010949319903;
    msg.speed_units = 173U;
    msg.radius = 0.18002025267591715;
    msg.direction = 184U;
    msg.custom.assign("ZNVGVYSAOAUVIUEJBFCIQHNWNFDCFCXXXBCOXHSALDPLWSOHYUONUZUCKONMRKWOUVPJIQBQPLGYYYJHNSUSDEEAEVDKUNGTXRKBLZOJPGLZLSAGZGCEWTPFNYABKIWVDXRSGDDQLRWIPHUGQMJMZZHTJSYCAMRRYYTWMPWZMJMHZICLEFFAXXJMPHIXBBEKMOBTNHAADGVCJHR");

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
    msg.setTimeStamp(0.4565325930009445);
    msg.setSource(45877U);
    msg.setSourceEntity(47U);
    msg.setDestination(18487U);
    msg.setDestinationEntity(35U);
    msg.timeout = 44634U;
    msg.lat = 0.20577276440031667;
    msg.lon = 0.1843794614375901;
    msg.z = 0.20532294799099537;
    msg.z_units = 47U;
    msg.pitch = 0.8189904343942125;
    msg.amplitude = 0.5477954854699385;
    msg.duration = 59037U;
    msg.speed = 0.26021986231977956;
    msg.speed_units = 113U;
    msg.radius = 0.24177169573254098;
    msg.direction = 35U;
    msg.custom.assign("VYCSCJHVRPRRXKLHMEMJTMGHKGBQNWSISUUSFDFLRMZIVFRZTVSQLDZTCQUIHOZQGGEAFSVCHODWTKYMAFUWWDRKAMJVAYODZIFEJYOZXTOGEPIDIVTXFPPTHKCPTIKZQNLPQYSNWWKLNGGBBHGDAZINZUUEEJHWEJATETXNDSKWKVBCWNMFPCNUJBLFXXACAQYJRLBSPPGLYXDHQMUOCXNRKGOUODMBVIEBCSAYXYLYFQJEIULOBO");

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
    msg.setTimeStamp(0.1304816714179391);
    msg.setSource(42565U);
    msg.setSourceEntity(104U);
    msg.setDestination(9442U);
    msg.setDestinationEntity(70U);
    msg.formation_name.assign("AFYAESKGUKDMZNVBNLWITEGSYOLJUXDSIYVTZWIXMCDRUEDIUGTENDEQPOMLPRUB");
    msg.reference_frame = 90U;
    msg.custom.assign("ASNMHRILUOSPZGIPGVRBXRGUNRVKQTQLZCXEHNSGCXMCWUQZEYYAOFSYBKTLDIDPICSEOQNHANCMHDMUWITGLZNOYHKYOAGDJOBKJILYTLSQBASZRGGXLEVIRWCMITQDFBHXEJIQVFTEMYXEMHKJKJOSRSUXDKJSYQWBTCQNYJEJBNKUPFXBAFNYFRVOCJTMPVWEJRMPPGIZVWPFXNZHUZRLUVLXVDTAFD");

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
    msg.setTimeStamp(0.37453755653737875);
    msg.setSource(39733U);
    msg.setSourceEntity(216U);
    msg.setDestination(21250U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("PLBXTFONXMMKIRVDWFQMUBFSHHCXRHWEYJHHTSVOBSGFJPQKSMOZNSHNBRSIUQESKTMGRUAWMAAZYRCWYKUSMNSOFZXYLGAINAEKVJLQNDUSGWABPAXUXWVRNXHYIXIZFEPYLKVDXWLG");
    msg.reference_frame = 194U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38360U;
    tmp_msg_0.off_x = 0.17144871692367147;
    tmp_msg_0.off_y = 0.30755373802743347;
    tmp_msg_0.off_z = 0.7103118318936913;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BROTIWEBCJNGGYYIRDXZOQFMCULTETGESLFGMGAJHKECDJGDBPFKZIXIVFBZVITPBYWOZCFNLZVOKJLVHCOGOPVAI");

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
    msg.setTimeStamp(0.5815544148255827);
    msg.setSource(19943U);
    msg.setSourceEntity(112U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("OLVEGHOZDGWVPJAMNBLLKCUWQHSYHEXIRRSGAPWTFKFUJVUSZZYNILSCUWPVAGBJOPSXVGIZPYMSYYJCIGXNMIRLEDQNMBCIRYJBLGJLSXTROONTCEFDRRPAWKBQYKLCQBOYCTDGTXDWBANQAHBCTQEFXYVIHMN");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16627U;
    tmp_msg_0.off_x = 0.7829624899992157;
    tmp_msg_0.off_y = 0.48375531669033556;
    tmp_msg_0.off_z = 0.23677736592201382;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VQKUBMHYFBXZKALSCDGDVPMRMXMBNOINNVLRISSCWJNBIGRBHPHYYXRQZFZFTLEHNBWBMJZMSLUCAAFLITELGVDGAHWGFLMFCBJJTTWPRXAVHPKALIUYCJNQJDFVDZXJLYWIVCMYQMGXKNEEUCPFOHIHWEDEKYELGSTTXUEIJVAZSYHQPURTUDRBTOCVDIOQEQBQZDTWOOSONRCVGDNRSY");

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
    msg.setTimeStamp(0.10662062912961257);
    msg.setSource(50125U);
    msg.setSourceEntity(13U);
    msg.setDestination(18468U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("NXALVWNRTIMCGBRYJCS");
    msg.formation_name.assign("ARBSZXVWJJYKZURYMPRWJQUCGSGLGMDLOYAMCIIXIDJCVNAMYMVZLZSZTTARMJCNLTWXEJBRPTCZMQGTHHRWVHBUTPDLELUQKUBSVI");
    msg.plan_id.assign("SSFONOWVHMOBTJYEHARYZERSCCWVCVASGQWDCHBWRHGTPALUQHZRNCDLWLPVXYJBQXLUHMPBLJRNTPLVKUWXYIBUMFUPXZKZDLDTKAWIISOCBOAOIESFAAFIMNRZDLGKHNEBBFRJKQYSSHTLXHRVBICIIHRXPGENWCJYUDFJQAUUBXS");
    msg.description.assign("QEKVOUTRPOSGITSSQMCJBDSGCNULXZSSHMWWBKWVKEHMKCRWBAUBDFRIPKNVTJTILNYQTTYEFYWMIVNXZONECGABIGDNHDKAOITHYRRQOTUUWFECHBLHZJMRVXJPFLYWNJOYWLZXUTFAKJAXAUXSXESAGQFHFMADGXMLEWGZHGYCVLKRGJVDBFPZQAZCELUVMPVQOURLXVBWKIOLZJMCSJDPUDOHQZYBGHYPCFCFQPRDANSENBZTNYDM");
    msg.leader_speed = 0.6169584611458037;
    msg.leader_bank_lim = 0.9849018322951096;
    msg.pos_sim_err_lim = 0.3915317242723988;
    msg.pos_sim_err_wrn = 0.5665956124284832;
    msg.pos_sim_err_timeout = 65351U;
    msg.converg_max = 0.9362523062395496;
    msg.converg_timeout = 64942U;
    msg.comms_timeout = 28524U;
    msg.turb_lim = 0.1479902926147152;
    msg.custom.assign("UFXLXHQPZIIRGPBPBNZVPTRKVKOUFGHKQVUTGZYFJBUSTGZFCDQNSJASNYWDBNHICRCFZOXLTAISMMCAWHGAHWYGNSIDMBTSDYLXQKVKRZZMOPQVDCYZNABBWCPMXJFXLXIXOHJYEPCFMGYOJWOMBQKDNQFRJSXLBYUVVQAULRUJWKZUYJEENWKICEPENTATEKSDRHTCFLVXJGUWMHILGPYJNQAHMEP");

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
    msg.setTimeStamp(0.11750909390734932);
    msg.setSource(28005U);
    msg.setSourceEntity(235U);
    msg.setDestination(5593U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("KKGPJMETXUJIVGAXMBHPXABPOLIIDAHQGOAARMJTIAHGLBVCWKDPGEFSANEXWNDHUMQDGKCVOFQMLTLCQLYZMSPDJBRUJTWTQBISGOUZCZOFXHKWVJMXJQPTWERLIUCTMANIYUBVDLNVMKOTFZYHJSNNGAFWKZLFSURYBNDSXPGZUEOEZXHHKFTIRVGYRKYCQTUEDVRCUVFDYYCC");
    msg.formation_name.assign("PRZFNSJQBJMTBDVDSJPFGWEOXGZYCDPDWNYKHUJLROVBMKAFGTSSFEGCSVDHIWNUKLAOYWCRGTQECARXHSJZHYAKIOVMYQUFWXXDAGV");
    msg.plan_id.assign("GMZUAYQLLNOIMXJPXIKNHJFRPRAHEHIBZWOMQFVHJORIFIKEJOBELOAKUWTRVZCIGLPGBWYXIARUBQJDLTXBYCBZPIXAFCCSIDTLYVYSOFOLVSYDOOWDSCHJTBPTMNGGUTPEMQQXVSCVENKMEDXYNGFZCVWGBKKS");
    msg.description.assign("OEQVDUPSJGKPVWWCDNJZBIQQUMRYFEXLPKKASPXOZACIAASWMFIWVUFCEQLTWFYHOYJDQZOLKRXKGNDDTMCKJZWLNXFHVEYFSLCEGTVPBOOROBGCLNFSZAYSGATKFEZN");
    msg.leader_speed = 0.11980367952471482;
    msg.leader_bank_lim = 0.7491362880369397;
    msg.pos_sim_err_lim = 0.4007549801967769;
    msg.pos_sim_err_wrn = 0.07806832024029886;
    msg.pos_sim_err_timeout = 38432U;
    msg.converg_max = 0.8726316678345865;
    msg.converg_timeout = 11907U;
    msg.comms_timeout = 16184U;
    msg.turb_lim = 0.5308339034975628;
    msg.custom.assign("RMSEXRTXNGZUUQCANIWXCZWKXGOVCLVFKBMPLTOMSQVZMEHHFUJYFIAVDECLVDHNTLHZU");

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
    msg.setTimeStamp(0.8155439444908829);
    msg.setSource(44930U);
    msg.setSourceEntity(98U);
    msg.setDestination(48560U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("HAPAFTLXXUUWMWKBHYBAKNKIRMJCFVWVEFMACUZYTFHRRPQNPXDBVXYNCEGZXGMMIYAOPSJVXTVGON");
    msg.formation_name.assign("WGONHUQIBYDGCTOMYWQCJRVINZBYXUZHLGIVXRMFHMXSMNSLMPWTNLPAPTBPDPBUUPSFXDRKVEVORSCYGNOCEUWQCADIHUDAKKMYEVWJLAWJUKBSVLFGIXGCKETZWXMCCNTLVDWQAYGBPOQZJITJB");
    msg.plan_id.assign("SVINEPWVKDUEVKPOCYZRCYNLLUDCHLVAMHJTEFABSQGAZRKJPBJXPCYVFXRZIKHYCBSBAXPDYMTJXLDPZLGIIUFHCTIFZN");
    msg.description.assign("NOWPLSDHGGRAHKJFYJXSXUVDTBQAMEFZSDEZWNIOGDMAVBLZJPXMLDKKNEAXXHICPYAJNQWPUUNJXBWRIGFAODFYYEAKUGSQKTHKCTPFFIVHIVQJJDGAUTIVURWBOPHDFWZHXGU");
    msg.leader_speed = 0.5402257071856124;
    msg.leader_bank_lim = 0.4179113376798954;
    msg.pos_sim_err_lim = 0.6599062664526844;
    msg.pos_sim_err_wrn = 0.9133942654589733;
    msg.pos_sim_err_timeout = 49274U;
    msg.converg_max = 0.7654541007637997;
    msg.converg_timeout = 41059U;
    msg.comms_timeout = 6592U;
    msg.turb_lim = 0.3234102176918452;
    msg.custom.assign("BZMCCUXJZVINDYZMRGLAIFVUHOUXMGGELLKYJPSDWWKYRWJJDUXNZZBJCSBRRATVVDPBYSOUWCWRHKIAGEVGVUQGJXZAIMVYBMZQKSPMEXPFICZAQLPCLDOXQYBLXOTKJNIAQFXUTPSSCZFNOW");

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
    msg.setTimeStamp(0.6803158355651926);
    msg.setSource(31328U);
    msg.setSourceEntity(127U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(247U);
    msg.control_src = 27091U;
    msg.control_ent = 91U;
    msg.timeout = 0.30118437624175365;
    msg.loiter_radius = 0.7903781615299073;
    msg.altitude_interval = 0.411424839739726;

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
    msg.setTimeStamp(0.29700014079876724);
    msg.setSource(27171U);
    msg.setSourceEntity(70U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(186U);
    msg.control_src = 37966U;
    msg.control_ent = 70U;
    msg.timeout = 0.6035152603398753;
    msg.loiter_radius = 0.568789573280158;
    msg.altitude_interval = 0.751208963546203;

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
    msg.setTimeStamp(0.004744262058541837);
    msg.setSource(64288U);
    msg.setSourceEntity(226U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(236U);
    msg.control_src = 63018U;
    msg.control_ent = 60U;
    msg.timeout = 0.15811287971607646;
    msg.loiter_radius = 0.3611224447748256;
    msg.altitude_interval = 0.4352924803484701;

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
    msg.setTimeStamp(0.35228519821412263);
    msg.setSource(34130U);
    msg.setSourceEntity(62U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(130U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.42931898771670884;
    tmp_msg_0.speed_units = 233U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9142606326537883;
    tmp_msg_1.z_units = 125U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7321950477244449;
    msg.lon = 0.7032614353201961;
    msg.radius = 0.67961914998753;

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
    msg.setTimeStamp(0.5471704353424718);
    msg.setSource(44272U);
    msg.setSourceEntity(32U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(20U);
    msg.flags = 124U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6037845355905364;
    tmp_msg_0.speed_units = 237U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5240503711071279;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.44188203168061335;
    msg.lon = 0.19260532679832154;
    msg.radius = 0.15689317769042976;

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
    msg.setTimeStamp(0.5252678984958439);
    msg.setSource(20819U);
    msg.setSourceEntity(128U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(40U);
    msg.flags = 157U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3286319705601679;
    tmp_msg_0.speed_units = 51U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.39340077917942273;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6499314797355286;
    msg.lon = 0.8744817043258046;
    msg.radius = 0.7366026255851117;

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
    msg.setTimeStamp(0.37173977124506863);
    msg.setSource(44732U);
    msg.setSourceEntity(231U);
    msg.setDestination(30959U);
    msg.setDestinationEntity(213U);
    msg.control_src = 53637U;
    msg.control_ent = 116U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 64U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.23343732126493044;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5015595714391167;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9420552460134956;
    tmp_msg_0.lon = 0.23101396446747813;
    tmp_msg_0.radius = 0.4136055845982398;
    msg.reference.set(tmp_msg_0);
    msg.state = 146U;
    msg.proximity = 238U;

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
    msg.setTimeStamp(0.11935877966201636);
    msg.setSource(38089U);
    msg.setSourceEntity(142U);
    msg.setDestination(34617U);
    msg.setDestinationEntity(114U);
    msg.control_src = 65367U;
    msg.control_ent = 122U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 99U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4995186038250773;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5122881324181711;
    tmp_tmp_msg_0_1.z_units = 220U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7779912229901348;
    tmp_msg_0.lon = 0.627342784091414;
    tmp_msg_0.radius = 0.8675294739729991;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 176U;

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
    msg.setTimeStamp(0.6826317178035668);
    msg.setSource(24118U);
    msg.setSourceEntity(16U);
    msg.setDestination(57443U);
    msg.setDestinationEntity(96U);
    msg.control_src = 45917U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 70U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5215639848048305;
    tmp_tmp_msg_0_0.speed_units = 232U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8790489965802268;
    tmp_tmp_msg_0_1.z_units = 209U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.40452881228424864;
    tmp_msg_0.lon = 0.3637096470115714;
    tmp_msg_0.radius = 0.5853690293436455;
    msg.reference.set(tmp_msg_0);
    msg.state = 116U;
    msg.proximity = 45U;

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
    msg.setTimeStamp(0.2413326994066165);
    msg.setSource(64387U);
    msg.setSourceEntity(90U);
    msg.setDestination(59350U);
    msg.setDestinationEntity(44U);
    msg.ax_cmd = 0.3298213666753198;
    msg.ay_cmd = 0.6917112118616155;
    msg.az_cmd = 0.36022484511152864;
    msg.ax_des = 0.4459216077665159;
    msg.ay_des = 0.4386489286900359;
    msg.az_des = 0.5689409617190139;
    msg.virt_err_x = 0.5842004271040808;
    msg.virt_err_y = 0.9273043741472841;
    msg.virt_err_z = 0.9281060167929559;
    msg.surf_fdbk_x = 0.5082889596605111;
    msg.surf_fdbk_y = 0.7405984308426694;
    msg.surf_fdbk_z = 0.07256072053321716;
    msg.surf_unkn_x = 0.3854864962676827;
    msg.surf_unkn_y = 0.2587896501501872;
    msg.surf_unkn_z = 0.8497116393978636;
    msg.ss_x = 0.9158905037112438;
    msg.ss_y = 0.5388063023766052;
    msg.ss_z = 0.2602352948588069;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IRZHFPNZTVUTGCUKZSELQRBFMCEGYFYWBRTWPUACXKANWDYOODASYIWSAUTIQHFFHLKJSWXFIPESQATJCVICVSGFXOWUORLRQDUJLMEMHVABGBUGWQMYOWUBJIWWBQRPRNYDTSYKTOBZXPJGVVNZTNKOSDHJNMZQEBYJUEQHDFILVJKVDBONLNZRALCYHXQKXMRZMEPLEXFADZMQEPPK");
    tmp_msg_0.dist = 0.019468324902248146;
    tmp_msg_0.err = 0.4667915958290051;
    tmp_msg_0.ctrl_imp = 0.4364627367155036;
    tmp_msg_0.rel_dir_x = 0.2493769721980612;
    tmp_msg_0.rel_dir_y = 0.09536607302443723;
    tmp_msg_0.rel_dir_z = 0.41183525036387525;
    tmp_msg_0.err_x = 0.23505670991186023;
    tmp_msg_0.err_y = 0.848767764188912;
    tmp_msg_0.err_z = 0.5995150863609325;
    tmp_msg_0.rf_err_x = 0.8885201304776024;
    tmp_msg_0.rf_err_y = 0.4055998635456155;
    tmp_msg_0.rf_err_z = 0.6816814857702385;
    tmp_msg_0.rf_err_vx = 0.02947093041350468;
    tmp_msg_0.rf_err_vy = 0.10417006868529666;
    tmp_msg_0.rf_err_vz = 0.6567229019459072;
    tmp_msg_0.ss_x = 0.6303392890800785;
    tmp_msg_0.ss_y = 0.6409366337042595;
    tmp_msg_0.ss_z = 0.37831555881838275;
    tmp_msg_0.virt_err_x = 0.13002045214401137;
    tmp_msg_0.virt_err_y = 0.5668797234777901;
    tmp_msg_0.virt_err_z = 0.7457183088420172;
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
    msg.setTimeStamp(0.5393930149171875);
    msg.setSource(55971U);
    msg.setSourceEntity(17U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.5824572578897018;
    msg.ay_cmd = 0.9053718838523654;
    msg.az_cmd = 0.07975142037278038;
    msg.ax_des = 0.559458376138964;
    msg.ay_des = 0.6639584660887075;
    msg.az_des = 0.13534738347099118;
    msg.virt_err_x = 0.46270530147079236;
    msg.virt_err_y = 0.817242534064824;
    msg.virt_err_z = 0.8228035280806869;
    msg.surf_fdbk_x = 0.9511726610974649;
    msg.surf_fdbk_y = 0.9216845038528019;
    msg.surf_fdbk_z = 0.7980602506893072;
    msg.surf_unkn_x = 0.47811363406617946;
    msg.surf_unkn_y = 0.3639549426866;
    msg.surf_unkn_z = 0.9469469838646325;
    msg.ss_x = 0.9971369939213149;
    msg.ss_y = 0.6704222496753717;
    msg.ss_z = 0.04897124362528915;

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
    msg.setTimeStamp(0.4059310581560662);
    msg.setSource(24352U);
    msg.setSourceEntity(134U);
    msg.setDestination(14562U);
    msg.setDestinationEntity(176U);
    msg.ax_cmd = 0.9152338621162824;
    msg.ay_cmd = 0.4374228195456006;
    msg.az_cmd = 0.5494298255039436;
    msg.ax_des = 0.520659938969299;
    msg.ay_des = 0.6516930547623586;
    msg.az_des = 0.8334960615795403;
    msg.virt_err_x = 0.8897471152552843;
    msg.virt_err_y = 0.3612299299028775;
    msg.virt_err_z = 0.20016027287590354;
    msg.surf_fdbk_x = 0.9809596725659279;
    msg.surf_fdbk_y = 0.9321306165667658;
    msg.surf_fdbk_z = 0.5116220186313212;
    msg.surf_unkn_x = 0.061095811415346146;
    msg.surf_unkn_y = 0.42802219080866544;
    msg.surf_unkn_z = 0.7090400021590824;
    msg.ss_x = 0.43810494825302426;
    msg.ss_y = 0.25329145374977713;
    msg.ss_z = 0.5679320677298424;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UCUCKODUBPGLHZMXZFDOHLHOJCQFBJDJNHVJMQOHLZCKUZZIDCWRGTPJGQDBWKFVMPRJBEEAETDHOKKDUNAADFESNNZARFHVKVOGFLXYSC");
    tmp_msg_0.dist = 0.5399142615588891;
    tmp_msg_0.err = 0.23171821762863087;
    tmp_msg_0.ctrl_imp = 0.20792942409116688;
    tmp_msg_0.rel_dir_x = 0.5488913402260085;
    tmp_msg_0.rel_dir_y = 0.3396317959411307;
    tmp_msg_0.rel_dir_z = 0.5411670027624825;
    tmp_msg_0.err_x = 0.30854715073932115;
    tmp_msg_0.err_y = 0.616471550413053;
    tmp_msg_0.err_z = 0.6294116970758195;
    tmp_msg_0.rf_err_x = 0.6939251828056108;
    tmp_msg_0.rf_err_y = 0.7072945884730062;
    tmp_msg_0.rf_err_z = 0.19664507874772374;
    tmp_msg_0.rf_err_vx = 0.8797060209887001;
    tmp_msg_0.rf_err_vy = 0.5750327971556668;
    tmp_msg_0.rf_err_vz = 0.7605328140465937;
    tmp_msg_0.ss_x = 0.24000565918867622;
    tmp_msg_0.ss_y = 0.931407771047266;
    tmp_msg_0.ss_z = 0.16408449138848002;
    tmp_msg_0.virt_err_x = 0.6093796721600253;
    tmp_msg_0.virt_err_y = 0.6195497474574222;
    tmp_msg_0.virt_err_z = 0.8808630268786914;
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
    msg.setTimeStamp(0.1304144477276752);
    msg.setSource(33455U);
    msg.setSourceEntity(104U);
    msg.setDestination(16157U);
    msg.setDestinationEntity(139U);
    msg.s_id.assign("PSIGXBERQDUAYQOFCIOXTFDFWYJSGADIGNLHIWELGUICUDXTVWIHGAYWZYBZNMWPJTQSSJNKKHPCSXNECMBUOVQXVCJIAHNTOECWLGNPJPQOOZETFHULDXJBMBUSNLZOGK");
    msg.dist = 0.3877472298553155;
    msg.err = 0.27632766767196304;
    msg.ctrl_imp = 0.3776596890986177;
    msg.rel_dir_x = 0.6950559113947097;
    msg.rel_dir_y = 0.07743211546833917;
    msg.rel_dir_z = 0.6039583961907744;
    msg.err_x = 0.5305751903259311;
    msg.err_y = 0.48422283187080994;
    msg.err_z = 0.02527077574743497;
    msg.rf_err_x = 0.626215578127422;
    msg.rf_err_y = 0.9136192576524824;
    msg.rf_err_z = 0.5148198746712283;
    msg.rf_err_vx = 0.06107470408723925;
    msg.rf_err_vy = 0.061248393824384406;
    msg.rf_err_vz = 0.6755262233763732;
    msg.ss_x = 0.47652234743384336;
    msg.ss_y = 0.6214725063049067;
    msg.ss_z = 0.14338769817544839;
    msg.virt_err_x = 0.31249077595506614;
    msg.virt_err_y = 0.06373241870631718;
    msg.virt_err_z = 0.004229717996134141;

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
    msg.setTimeStamp(0.9405194974278341);
    msg.setSource(31534U);
    msg.setSourceEntity(122U);
    msg.setDestination(47229U);
    msg.setDestinationEntity(73U);
    msg.s_id.assign("JUENINMEREPJFAFAQQBXUFZRATYXAWXYMLLRRDFOVPWZXDQNIGSBYUBKWUCDWDSGNRZJJEZPXGGNNSMJBDHHXLMKOAUVYJVMIMYEPNMLBNKSWQYJBCDGKIZPKJGLCSZTIBAMFWWVBCCTOCHCQQAAHUSTXQYPETOQVKAGLSTHNOQZODESIYFXIPDPIOVHTKVEOKFTPGTDZLMCR");
    msg.dist = 0.9908054712639115;
    msg.err = 0.29368124164303955;
    msg.ctrl_imp = 0.6362846628182302;
    msg.rel_dir_x = 0.005091495197514062;
    msg.rel_dir_y = 0.17212030585582871;
    msg.rel_dir_z = 0.15217875907635536;
    msg.err_x = 0.9852021280120977;
    msg.err_y = 0.8852678575138895;
    msg.err_z = 0.9499504126058671;
    msg.rf_err_x = 0.5354726636978654;
    msg.rf_err_y = 0.8069551694036567;
    msg.rf_err_z = 0.9527446721706757;
    msg.rf_err_vx = 0.06397836597876227;
    msg.rf_err_vy = 0.907740058625462;
    msg.rf_err_vz = 0.5330549978243255;
    msg.ss_x = 0.5424790531225324;
    msg.ss_y = 0.6961367879026655;
    msg.ss_z = 0.10467477530733671;
    msg.virt_err_x = 0.011744771306672064;
    msg.virt_err_y = 0.5501343905739574;
    msg.virt_err_z = 0.2309767552344879;

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
    msg.setTimeStamp(0.6690741660304379);
    msg.setSource(45702U);
    msg.setSourceEntity(76U);
    msg.setDestination(884U);
    msg.setDestinationEntity(187U);
    msg.s_id.assign("VTRVDKBCTAEYCGLASHSWSTYWGHKHJQMIAJRMNEDDXIWIIZJFFJOOTZNNFPGQCXNPLUBYMSMLDFKWKVPJTSJXQSFJLCVQURKGCJCOFRXGLUUDYVPRMSWRXGTUQEAOBAPMYIABEOOFJEQWYLCQKSFGECLZSUBQPOFUMONNDZAVQCCTYGKRBZAONNDUHHIDIQHYHETLVRBUZLPVBTZ");
    msg.dist = 0.785231352345346;
    msg.err = 0.2583955642114374;
    msg.ctrl_imp = 0.9891982657084082;
    msg.rel_dir_x = 0.9267446834741792;
    msg.rel_dir_y = 0.8530366290703709;
    msg.rel_dir_z = 0.7134347551120721;
    msg.err_x = 0.8054839148950743;
    msg.err_y = 0.949048296764393;
    msg.err_z = 0.105627501419843;
    msg.rf_err_x = 0.46879300346899666;
    msg.rf_err_y = 0.7803581353051358;
    msg.rf_err_z = 0.8609866290330773;
    msg.rf_err_vx = 0.6513545761459445;
    msg.rf_err_vy = 0.8879527591746907;
    msg.rf_err_vz = 0.009610109179378434;
    msg.ss_x = 0.5061328652510391;
    msg.ss_y = 0.3505315984983002;
    msg.ss_z = 0.3727226124002281;
    msg.virt_err_x = 0.09048140582159558;
    msg.virt_err_y = 0.23008181705618924;
    msg.virt_err_z = 0.6368689494980111;

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
    msg.setTimeStamp(0.5534683721618545);
    msg.setSource(23512U);
    msg.setSourceEntity(187U);
    msg.setDestination(65325U);
    msg.setDestinationEntity(78U);
    msg.timeout = 54019U;
    msg.rpm = 0.49032117068619097;
    msg.direction = 235U;
    msg.custom.assign("YQGVYIJDMWBZUBQKWXRRVUJLKGDLEHKATTQGSSRRIPJCEDKSDXNWAOSBLNPVGCBNBERYKSUPIBKCNMVUFSWWVEVZIGZWJDCCZYEJYXQODBPLOAHHUSAJEOTLYAUMGGWIIZOLQKWXGLQVILAAUMAMFHDVZNBKSXJRMOGSERMUBQFTFQZMDXNZHOWVNNQJRTEKCRPTIENLUHOOEWPTCFUOHATTMTJJIDFZGDPHFYRCCNXC");

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
    msg.setTimeStamp(0.6158042397379843);
    msg.setSource(19571U);
    msg.setSourceEntity(149U);
    msg.setDestination(35645U);
    msg.setDestinationEntity(249U);
    msg.timeout = 19859U;
    msg.rpm = 0.5025761133363494;
    msg.direction = 26U;
    msg.custom.assign("TTDKUUAEESNMNEJUWWFXAEXNTGHQTGKNVAKYHZZIVEBLCZJPWSSOHKEVFDIPXRHFMHZYWLRXXHCFRZTTRRDUQLQLOGKVIOYFPQEMCQBKKOZMWNDZYYPSTITNEGDHILBFPGPZLKLWPAJCFJEMQHUGQNGOCVJXSDSFVZBQRUBMRFJWQGYEKWJLACXYISRDBUJLXVXHMLTGAVBMYBANXCNBOAIPI");

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
    msg.setTimeStamp(0.6293679301300105);
    msg.setSource(34685U);
    msg.setSourceEntity(7U);
    msg.setDestination(64280U);
    msg.setDestinationEntity(240U);
    msg.timeout = 46150U;
    msg.rpm = 0.7476848625358927;
    msg.direction = 144U;
    msg.custom.assign("MVRJUJPKADICVTEBVWWWSOFFTRPUKRBYWLJMLRISXRYZLRNNKRYKTGBMEJXWTKWOFACAXSMOVSIXQNUZWHUCQOQAYSMFHSHPTEQCTFJPLV");

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
    msg.setTimeStamp(0.6485360381614611);
    msg.setSource(41328U);
    msg.setSourceEntity(173U);
    msg.setDestination(3920U);
    msg.setDestinationEntity(98U);
    msg.formation_name.assign("ITECSGUKZVPWTXAYJXMKQXGZRROULFGOHWBTDPDXSCFHOWYTSNTJYZYBGTMEBQNEFKYIYAPMHTLIJODDNRYVMPKQBAMVEKTJKBODLUZRNXRZOQUOHVESMNNFLVDWCHVIKZQNPLBGEMWVTAEUSLSIAAFSUYYPQLHHVRAEHFR");
    msg.type = 27U;
    msg.op = 228U;
    msg.group_name.assign("EYMVYMXOUFTMJHAHU");
    msg.plan_id.assign("UUBFEBCHMOEIHTYWWPERVWHKYXSMSLSPXPEUVJMFTVAMQHGOCKMGKFCTVVQYNUMUGUZBIYYRFDDQSAINRLPRKJVKOLCPYAHYCANEDPNZFTDEIOQACP");
    msg.description.assign("UUSBTFWZTHPOXXUHAFNZSITEORMWTXVBWDCTWGVERYGQUVYLYIFLFQSAEVPUKKWQKTDDWDTCIDFSDKILBGJGINBZIOCBQPEVRYMTJDCJXKQPYAMWJEXVLFXHHUMNNSQGJJBFHXPTOJHVURJHZSVFLPCYNDARAGLXDBELMYXEKRPZILIUHOAETWZHWKZOHKPZKOPLLYCCAKWPONSQVGYVRMYBFCCAEINCMRIZSMBDSGNNZMANGGQRUFUXQSOB");
    msg.reference_frame = 240U;
    msg.leader_bank_lim = 0.8792968202887115;
    msg.leader_speed_min = 0.16270398389902407;
    msg.leader_speed_max = 0.9495288891124274;
    msg.leader_alt_min = 0.6383442202354658;
    msg.leader_alt_max = 0.5227741099187476;
    msg.pos_sim_err_lim = 0.9041265241724152;
    msg.pos_sim_err_wrn = 0.8866535729794084;
    msg.pos_sim_err_timeout = 22419U;
    msg.converg_max = 0.7778211978771968;
    msg.converg_timeout = 19554U;
    msg.comms_timeout = 61384U;
    msg.turb_lim = 0.322524698639975;
    msg.custom.assign("EEVEMOTVBKUJAMXKYXIXNCWIWHXWWJRPEGIKZDFFXNIQTQEMDIQLCY");

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
    msg.setTimeStamp(0.3939457955787352);
    msg.setSource(46655U);
    msg.setSourceEntity(217U);
    msg.setDestination(60254U);
    msg.setDestinationEntity(23U);
    msg.formation_name.assign("MREKZOVAZOLBGPFCHTENNWSWVJGNQFBEBKDXMZHLOAMXEYRQKVIQXRRBCBHEJLCTTAPKMOCXLDZSSQUHFTSSKMXNACAFVRQJCNZGCQPZZWMUIWFUSUMWKWDRSVDMNBISGITLJMIZUUJGOGBVXAZBDUMJPK");
    msg.type = 201U;
    msg.op = 4U;
    msg.group_name.assign("RFEAQDOUXMEHWBSISWTMPAWAZXVIYFBEONEVFLOTRYLWIKGEQMWJSWAZTKLVBFXMTQBQGVOXNRYNMZVVBGSCRNHPPAHRDPDODQCWPLPNHZDVFKJJDXRCOLBSAZUUEHPARJ");
    msg.plan_id.assign("UWBCALRJEVRLCNKMEWTHYGSIOFKYRKLCQZAHTEWOJFLYRQXHVPGWRGXU");
    msg.description.assign("RKLJTWPQSVHAQMYTPKPMONONPGDAUBYGLHZEUPJSZIYDDKWAWBLIKXWGRPYMZJOTEHHMUALFXFAOBSHXXLQVMSKQXSWLYRZCIOOYAJFQKNVAZDMBYTWUDNVFMZEKSCCWYVUFGHHHIWXECBXNMZSVJCLPPMPNUGYLTQIVKIDFRVJKFIVJSIULGAJIFEATORFU");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56025U;
    tmp_msg_0.off_x = 0.8712197370132677;
    tmp_msg_0.off_y = 0.5968071448742851;
    tmp_msg_0.off_z = 0.34112916683431405;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5216405057594161;
    msg.leader_speed_min = 0.9582732745535393;
    msg.leader_speed_max = 0.33708779164532454;
    msg.leader_alt_min = 0.2927722853159812;
    msg.leader_alt_max = 0.47698441998529706;
    msg.pos_sim_err_lim = 0.9922277395163297;
    msg.pos_sim_err_wrn = 0.9377128729640606;
    msg.pos_sim_err_timeout = 10613U;
    msg.converg_max = 0.07404199874702788;
    msg.converg_timeout = 21933U;
    msg.comms_timeout = 8694U;
    msg.turb_lim = 0.6521520639480248;
    msg.custom.assign("EHPPGMSWWWVZWNSGCSQOSNZDVTCYYCDTPZOTJOZRCLNXBVVFQVAJETXZYUEXQCISBIEFGRB");

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
    msg.setTimeStamp(0.2385137771473722);
    msg.setSource(20354U);
    msg.setSourceEntity(253U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(35U);
    msg.formation_name.assign("IKZOMRSAGTKDASHVVHHODGWJKBNBRPRGJVUHYKGADPWMNZXBXKUCARFYPOGRXZZQTCCIMBJRZVSVOIOAADKFWGXKTQXONQBIWXVECVPQZQICMPRJPDCZMCYJHPOFTWQLXSUWQMEFMPLJAJASILYJSSNCEXNRTTEOMGXUEDLAJQQNUHPLWBIGTHFMESEWNTBUDKEHNSSK");
    msg.type = 25U;
    msg.op = 53U;
    msg.group_name.assign("LZVZFTLMCBYVDSIAHWPDDQKQOFVNNCJEBCGQRBHPHKNBVPNBPIYCGEMSEXJFCXOURRHQLHTMPBXDMBAHUDBGAGLNQLUJJZ");
    msg.plan_id.assign("AVDVRVWEMXCJQAQNRRUWCPPHQXXHWDNAMZXQUVYGCYBHXHKYRTFGMZSTXUOKLBVRMZWDFFAQSE");
    msg.description.assign("AMIAXXPESOAGHGIYZWPICZCZEOOPZZEKUVTRZZGRGQGOJEVYJWFATEJFBWLLGDZWHUSRTKLMNSNLLCJMSRMFPJUXVPDKBFMCMYDTLYTCOGDKILGEJBYBQBPEWUIMCTSVKDUVYFOHITQXFBYHDSREAIKZSXEWCPYHLVBVOQRVJRMBUHPXANYDXTORFFUNEOQDQWYBJZNJKK");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13932U;
    tmp_msg_0.off_x = 0.15871696214193798;
    tmp_msg_0.off_y = 0.10014525840327104;
    tmp_msg_0.off_z = 0.49203393901093073;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6522746056937699;
    msg.leader_speed_min = 0.5113270828537396;
    msg.leader_speed_max = 0.7104488408236209;
    msg.leader_alt_min = 0.352035802253741;
    msg.leader_alt_max = 0.16725004934466792;
    msg.pos_sim_err_lim = 0.7902728944518043;
    msg.pos_sim_err_wrn = 0.9710603914319755;
    msg.pos_sim_err_timeout = 55793U;
    msg.converg_max = 0.3467909330169382;
    msg.converg_timeout = 24704U;
    msg.comms_timeout = 12052U;
    msg.turb_lim = 0.15816790207171905;
    msg.custom.assign("UPWSPLARKPHESYBMNSDZGSPURNILVNZIFDLYZYJWFZJEJXSXCNWCXHBKAXRHKGGRPLWIFCXBWKLSVBYIHOGAYTETTVEBINMJFJQMEGKBECAEZOUZDBHGZLAGGMEYBDNVJILRQDOKTTSFXJUHPORQDMWRCTVYSUWVDYMHWWGUQOQJVEBJQHTSMPOXYVKFZUQXDBVUNEMOYZOAAFTFKUPTNCIONXRHVQRQPQACKCAWIZJXTHLASCLFODLMPCI");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5858535281090512);
    msg.setSource(46995U);
    msg.setSourceEntity(226U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(235U);
    msg.op_mode = 28U;
    msg.error_count = 210U;
    msg.error_ents.assign("LJHRNVYBZPISHCXFKLVXQJPPUOPVWKYHWKDIEIUUZOAMRGXURPMHXVAIULKMRMYAZRNJPGSDMPQRCEDTNJNBVCNWSLZKONYVFIBBABHTILLHYNQXCXUFYSZEIXQQGTSIVTTWEESYQKVFNWBOTDGM");
    msg.maneuver_type = 26904U;
    msg.maneuver_stime = 0.6394231673886984;
    msg.maneuver_eta = 10896U;
    msg.control_loops = 1993231239U;
    msg.flags = 209U;
    msg.last_error.assign("EIANRQVZWKUX");
    msg.last_error_time = 0.6040294053265811;

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
    msg.setTimeStamp(0.1515244748783019);
    msg.setSource(54097U);
    msg.setSourceEntity(218U);
    msg.setDestination(39294U);
    msg.setDestinationEntity(28U);
    msg.op_mode = 231U;
    msg.error_count = 230U;
    msg.error_ents.assign("PNJAGMPKALGWEULAQSYPIMTCDSPXACCEBWOWWOWKPLBNFOTEIMLMFNUQQBORQXKXETROYZLDNDIUGPQRKXRZEZSUCRREHVXSITKQXCPVNGZLSGATSSQCMZWRMNPFLYIOZAROBJYUVSDUEGDODRSNZHVIHBTQZYHJWFFKGIHLKBLHUDWZUNOADKMYTFWAMKASJXGYJGTIYICEUEMYLFFBOERWVHYPFVJCTAJJQUVZH");
    msg.maneuver_type = 38679U;
    msg.maneuver_stime = 0.8465527626214125;
    msg.maneuver_eta = 36458U;
    msg.control_loops = 1990678949U;
    msg.flags = 223U;
    msg.last_error.assign("PFRMONIEXENMFALRCWWRLOLFJQHUWXDCBIIGDOZUCPQJKJUBMQHRVCDWJSVTCEEYRYIDHAUZGNFMBEHXKIISHJCAPUIQRGSDDNANYZDQVZWRORWQBQLHYRLAKFDXBVOEWQTOSZVW");
    msg.last_error_time = 0.29127065548966746;

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
    msg.setTimeStamp(0.8685891302466315);
    msg.setSource(19644U);
    msg.setSourceEntity(92U);
    msg.setDestination(154U);
    msg.setDestinationEntity(68U);
    msg.op_mode = 129U;
    msg.error_count = 27U;
    msg.error_ents.assign("UTNWDIAJIZWOERPNXVXCFCLLHEKFIVHEASVZRSUNAPQCSWHWGYIKRNMBYAQFZWNFEGHUSKJSGZTGXMVCYJPLKRZTZMUUTKTQYGPFBNDJZGUXLMBJCYXIADNXLHCIPITOCMUEXRUQKMJARGKNIPPMFTBATVDESVWELJWWYZHQOLZBDMCTFLWYYRJOOHMBSFXQPRXYLHFQPDAHIOSUDGTSPOZQBQEHIDKJAEKGOBXKARNQYGJMBLEDCWOVC");
    msg.maneuver_type = 23770U;
    msg.maneuver_stime = 0.6959080254429434;
    msg.maneuver_eta = 13857U;
    msg.control_loops = 447001934U;
    msg.flags = 192U;
    msg.last_error.assign("VWHYMZNUABSRLXRDXNEOUGETGQPVNPOQCWOXKIFUQVQOLVDTHROWNPIEWHFKZQITO");
    msg.last_error_time = 0.4456332099048239;

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
    msg.setTimeStamp(0.3701013494080194);
    msg.setSource(18689U);
    msg.setSourceEntity(149U);
    msg.setDestination(433U);
    msg.setDestinationEntity(73U);
    msg.type = 221U;
    msg.request_id = 3322U;
    msg.command = 98U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 37578U;
    tmp_msg_0.lat = 0.29825529508468096;
    tmp_msg_0.lon = 0.2034524252954688;
    tmp_msg_0.z = 0.0500383260331988;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.3457213451604324;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.roll = 0.8755809359033705;
    tmp_msg_0.pitch = 0.2884400516548302;
    tmp_msg_0.yaw = 0.03263708993376002;
    tmp_msg_0.custom.assign("HQCWMGROICRFPRJCSKJNLQHVKOUGARCHPGKEVWJJNFSPYICZKKMXTWSTBBYBXOUYIYSESMPRGBTGIRRSTKJOMFLWOLEDDHVVJTZALUVAXQSDCQYZLXAZYDPAHEIFBWLUBMVZCPKNAOOYENXELNUVTQULNYQXWBRJDYWMPDGWJKHXMOPOVOCDXHMFFFVFUZGZRIE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28430U;
    msg.info.assign("JGTHPQAAAVJRMDEWMVSMAROOQUVZEMYRFPTQVKCAEFCGKRNTMPAETIZDOGYLWWZZLSCQNBYDSOHDFSEDZRRODHNHYYSQHTCFZPBFEDSOUKWLXULMQFFQLNKDLRJINJTUOBNUIWAJVBGUXRQSXBOVAWWGMQBKUDKVTINEYVISXSYIXPBLSBNKLOCHCVYBCLNWCXCJPJAKJUFMHEJTLBAKVKYMPIGXHJXXIRHTZNI");

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
    msg.setTimeStamp(0.672313059036451);
    msg.setSource(64561U);
    msg.setSourceEntity(75U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(92U);
    msg.type = 2U;
    msg.request_id = 18664U;
    msg.command = 98U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 4456U;
    tmp_msg_0.lat = 0.5947055625460853;
    tmp_msg_0.lon = 0.05464753739378003;
    tmp_msg_0.z = 0.024012682749511405;
    tmp_msg_0.z_units = 229U;
    tmp_msg_0.speed = 0.5915181456747672;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.duration = 15354U;
    tmp_msg_0.radius = 0.5084872299602747;
    tmp_msg_0.flags = 21U;
    tmp_msg_0.custom.assign("KIRKZASRYXANQKQJYZSWCGDFPHVJNTLUYGQKLDWLIBRWACUIVVEAXBGEPBGOHOROPSMBEFDKYJRGFOIJMFJHMBIHNQUORRWDFSPAHGDJALOETMCPTYZZTENHUCEFMGTSOCUWCOYE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36958U;
    msg.info.assign("JZJTYQHAXNPSYCHWBJYXPIGDKXTDIVEAZNAPOXKZUNDPSEWTCGWESJNFAVWPOYREJAWGFIFDEMVQWRZSOZCOKOVAKQLMDWSLPTLWQAXSRZVGBTQLEKUQVNOVMIZWNRAOYQBMMTZUYQUDCCTYJHNDGBFSDFNMZIFAGUKBFHNULUTUVAPHGMUGSRXJKHRXWZEKDXIEHUJPRRYLKQYFBHIFIXVPXFHB");

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
    msg.setTimeStamp(0.29458430114956735);
    msg.setSource(58797U);
    msg.setSourceEntity(42U);
    msg.setDestination(27986U);
    msg.setDestinationEntity(251U);
    msg.type = 128U;
    msg.request_id = 13843U;
    msg.command = 210U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 64483U;
    tmp_msg_0.rpm = 0.012771544627132925;
    tmp_msg_0.direction = 245U;
    tmp_msg_0.custom.assign("AKHTVYVKQHDZMNCFCVHOJTUUUZELQLCEGXURCRKULNUADVRWIOTJAHHODYJGGHYRNCMJTLNUQBCBSVQSXWFYAWQRFSONBFYBEMPUCDFWMZENZITXRONBBXNWIPMFICWPQLZAKSJDJWFEEUIIXXQZTVPLRRKEJPOVLGDGWQSJEMXSLAYR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18948U;
    msg.info.assign("QYHDPJDEHDFJWICRFRHKTLYUIMEXCITCRTICBCPSXZEWYTVMLAXDFRTUJEIEAMDCVHMDIAADTVBSNBFJAEEPOWRSNKBFOLKJAHMUUQJZDIDAOQZIYGJJZNEYFSSOZZHPSMLUPDUAZ");

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
    msg.setTimeStamp(0.8163505291331946);
    msg.setSource(22150U);
    msg.setSourceEntity(85U);
    msg.setDestination(22719U);
    msg.setDestinationEntity(218U);
    msg.command = 65U;
    msg.entities.assign("PIFVQAWWEBCBKMGHHSTZGUAUPGXFDNJDVLBXXZQBVOVX");

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
    msg.setTimeStamp(0.9099952316541344);
    msg.setSource(24549U);
    msg.setSourceEntity(166U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(39U);
    msg.command = 65U;
    msg.entities.assign("RIMMKCJEZZBGJDNWIOYIWTBQPUKLNLRFJGMTOYJFCVYVWCLLBECXUCDMSAGBXMBBXIWRQGXIYQBJOBCAPSJSJVQNTNTFQSWZSQFHZEPTEDDROGUVNLKOMBZDQDUAGHRMD");

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
    msg.setTimeStamp(0.9249570081765701);
    msg.setSource(57100U);
    msg.setSourceEntity(121U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(71U);
    msg.command = 97U;
    msg.entities.assign("FGXJZNZSYZYYKUUBPLIBQCCCWHVUSRVLVRMJTMPRDXKTPELELRQOLBFHZOMPLVTOKSADSHHKFKOQQASGWWDFTMYDIWQTOFGRMACNJAEZKGNHXJBJYUCIZIBLNGRZTOHBINWJMDEXRDVOEKNEHLAANPUHQUSBYXQNTWUAJZPCQLBMYMCWEFYQIVTRIXVRDXFIADVUVEJLWOHZXGROFWOWKJTGPGNQBDACUCSFKXYGHMPSZGADBSMVSJPNYEPXC");

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
    msg.setTimeStamp(0.7992514630780988);
    msg.setSource(22329U);
    msg.setSourceEntity(177U);
    msg.setDestination(13485U);
    msg.setDestinationEntity(5U);
    msg.mcount = 232U;
    msg.mnames.assign("TBKAGPXXWJTRQLFTMSVPAUFAWHULDIXKUSYHSFNGPBTFMIRCPHWEQVTWAKZTERBJMGXZGZNIRWNBWQFEDDZOZOHDPLZWBVVMMCTBCSJCAOEAYSDUNDQNEVFIZKMSQHVHAMJCLWOZBVPOILZREPJTYUWCYXRUXCKQXNHFOTUGKZYBPIOJCEWAEKXRCHSMUYTASNILEKODFILYYOQJSQ");
    msg.ecount = 250U;
    msg.enames.assign("NIHVEURVHWLJVKJBYYFVPMCFB");
    msg.ccount = 109U;
    msg.cnames.assign("NXOKHGHIUXNVWHFXQNOCVLXTQDZACPPCYRTZHC");
    msg.last_error.assign("PWNNJIVULWAJRMAYFSLJBFZNTILMCLKOAYSIHUBBNZZCSDFTHOEQFTUANUJPYVYVLODYDGXPOQEGGZBDPUGVMPXSUXLNQLZPMHBDAKFERNECPCTUIGVWFAGJIESOHKXSZJSHCKWBRADGAKYFITEBITRBGQXWJLLITSMTUGOBYQDRTPG");
    msg.last_error_time = 0.026504458387308305;

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
    msg.setTimeStamp(0.47899241900932743);
    msg.setSource(2663U);
    msg.setSourceEntity(45U);
    msg.setDestination(43689U);
    msg.setDestinationEntity(85U);
    msg.mcount = 112U;
    msg.mnames.assign("LHCBIWLMGGDRAJDFIGMWFYQUKBYCVFUIEDDWWTPAQNKANKRSLVTRYHRCOQFTZHYSYMIOWXNSNRUZDWWVIFEWKTCVHQNIAUOZZWBOPYSRKAXWYSBGCEA");
    msg.ecount = 101U;
    msg.enames.assign("WWBRKZVRFUQLLNEWMGNURZGRCQCXMKTSUDPJDJYAZLHBOSZAZJBIJQRYPAIDNMHCZILJDUOUGETVTPIGUJEFNBOZTLEYWKPHNCSVEYBNPTATFAYNHUCKIGPEDTWBXFOFLVIGAHSMNXAFPBGQAQYFHYKLYFAUJTLMPCNUKEPIROBDMSWBKDLZQHEEQSPOCGZMXWXCOKXOHIVKSJQOBEDQVWSHFDWRMGIAQVHURXIXSCMZTVYLRN");
    msg.ccount = 83U;
    msg.cnames.assign("IXLPOBGFNWSVJZTRLAKVOEGFEYNJRANOXSYEKYTSPKQDGINSQQZQAJOJUHOYHVDSMGTWCZWEAHOAUHMTJHMUKCUWLGVMCQYAMMRQIGWEEULZNURPVJHVSGDOVCWCAIJRLHJPLRHKUQSCPBIPFYTMSNXRBBELYLRFQIZGJVWNMLTSETLXFWRGJOIPOGXCATZRKCBUWYDBBFXMVYQNZTODDNSIWKDFDDMBQCBCIBDVYEKPXNPF");
    msg.last_error.assign("DWSECXYXJPKYMHMFTYTTHJWYHRKJXQEJLEXXQAEVVIEQUAYYLZOPNZDGWPRKOHAGUQBULPORGANPOATGYETEPWWIZVSWMNHAAHYJDTDRWPNFSTDKZWDPYOC");
    msg.last_error_time = 0.3687684090888028;

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
    msg.setTimeStamp(0.41227285232817623);
    msg.setSource(53332U);
    msg.setSourceEntity(50U);
    msg.setDestination(26008U);
    msg.setDestinationEntity(120U);
    msg.mcount = 201U;
    msg.mnames.assign("IFWMEZCUNGIVMQOQRXVWJBQQIOIYUYASEFLVHETJJFZSUFMKJLQOPKTMCWLEAABOFJBUFLDRDBLMECNUPMMMKATJDGKPUWXSZCYFIYZBHXGNEUGWQBOPRGTXIZIARAJ");
    msg.ecount = 17U;
    msg.enames.assign("VZWQASHLBUFZJGTXCFQQCREKERWUGOEOEDHUNZDPKLJMKUAZYQMKMQAYQGYZTPFPXUDOJZIJSVFIQFSBIUCZBFSAPTLRHZKIYNSWCWKXAYMOMJIKYDTVPUBSEVRCHONVCKBZDJIDAXRMCRPEJHLMLQGTWNPCXBHPJPHXGONQFIWBLGGLWAOFMWINVOHDOPTZVEOCYJANFUDRGXRQGAWIRLTYTBBMGTKNIUTWXJEXSHSEMELC");
    msg.ccount = 13U;
    msg.cnames.assign("BXEFMDDQVQRBGVVHGOJJFBILKDLMXPYHFYRNACFEDJCZKLPQQGMUTCDYHITKUAMTDFOTMKVVQPIXUWRALHPXCJWGHUIOCAAXWQDEMFRNKDIWWBKXRLIIYBSUBNGNWJZDFYJYVEPETSOAGRLSVQMWZBXGBVTQENCJANZZCLQVXRTPWHQKFTFUYSZZBGAUYNEJWJUTVPPTSAKNSZAXHJPISEOOICOCHYMRGFHKIDNB");
    msg.last_error.assign("HWJQUIXJGUBXGOCZSIYEPZEVHBTINTGSMZXLAUVRLEADYNRBEFOHWCQJZLPMPDRWGKKTSFBAWIEHJBDMRODRVKWRWCPYQOQNNVOXDJNKSGTXYPIAHNOSXRFYGATWRBQQQIPJHYXMACDMCUQZRMAANGLKMEA");
    msg.last_error_time = 0.15684215419556247;

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
    msg.setTimeStamp(0.8701641097344661);
    msg.setSource(35654U);
    msg.setSourceEntity(216U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(96U);
    msg.mask = 70U;
    msg.max_depth = 0.9515369789536373;
    msg.min_altitude = 0.19612733266290372;
    msg.max_altitude = 0.017793916138167942;
    msg.min_speed = 0.6108174320333176;
    msg.max_speed = 0.446270019031933;
    msg.max_vrate = 0.008373209135668636;
    msg.lat = 0.14882295592466865;
    msg.lon = 0.44922009713266764;
    msg.orientation = 0.31302410681673487;
    msg.width = 0.8752691223332427;
    msg.length = 0.3852840505780416;

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
    msg.setTimeStamp(0.35014617602243325);
    msg.setSource(7644U);
    msg.setSourceEntity(36U);
    msg.setDestination(52590U);
    msg.setDestinationEntity(115U);
    msg.mask = 220U;
    msg.max_depth = 0.3176203139524628;
    msg.min_altitude = 0.9325532160733809;
    msg.max_altitude = 0.514096740649708;
    msg.min_speed = 0.3403893074291272;
    msg.max_speed = 0.39108935511647636;
    msg.max_vrate = 0.6747696305052886;
    msg.lat = 0.15263756210703205;
    msg.lon = 0.38365217322103207;
    msg.orientation = 0.6282261798430565;
    msg.width = 0.6659226992025771;
    msg.length = 0.5072092619004134;

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
    msg.setTimeStamp(0.7132915523682751);
    msg.setSource(30201U);
    msg.setSourceEntity(23U);
    msg.setDestination(48346U);
    msg.setDestinationEntity(82U);
    msg.mask = 114U;
    msg.max_depth = 0.8433019083146589;
    msg.min_altitude = 0.019176241544889172;
    msg.max_altitude = 0.7900514684449582;
    msg.min_speed = 0.5516889051508104;
    msg.max_speed = 0.43694939057578086;
    msg.max_vrate = 0.5366508814078832;
    msg.lat = 0.46201656958368564;
    msg.lon = 0.04281049614263721;
    msg.orientation = 0.2414878487588411;
    msg.width = 0.2904496297858634;
    msg.length = 0.9807936151758543;

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
    msg.setTimeStamp(0.6833308198219346);
    msg.setSource(25109U);
    msg.setSourceEntity(198U);
    msg.setDestination(17343U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.8761526730659963);
    msg.setSource(12631U);
    msg.setSourceEntity(172U);
    msg.setDestination(8664U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.33061831198829783);
    msg.setSource(54595U);
    msg.setSourceEntity(51U);
    msg.setDestination(11252U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.07805589756572762);
    msg.setSource(41719U);
    msg.setSourceEntity(40U);
    msg.setDestination(33848U);
    msg.setDestinationEntity(153U);
    msg.duration = 3789U;

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
    msg.setTimeStamp(0.5722945485124462);
    msg.setSource(61573U);
    msg.setSourceEntity(60U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(23U);
    msg.duration = 12338U;

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
    msg.setTimeStamp(0.0027338416441035074);
    msg.setSource(38169U);
    msg.setSourceEntity(194U);
    msg.setDestination(13369U);
    msg.setDestinationEntity(227U);
    msg.duration = 59908U;

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
    msg.setTimeStamp(0.6418363503265793);
    msg.setSource(57476U);
    msg.setSourceEntity(26U);
    msg.setDestination(63054U);
    msg.setDestinationEntity(151U);
    msg.enable = 245U;
    msg.mask = 1210661339U;
    msg.scope_ref = 1612072302U;

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
    msg.setTimeStamp(0.5926026176518591);
    msg.setSource(17537U);
    msg.setSourceEntity(175U);
    msg.setDestination(7576U);
    msg.setDestinationEntity(144U);
    msg.enable = 98U;
    msg.mask = 351432457U;
    msg.scope_ref = 1004393041U;

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
    msg.setTimeStamp(0.7776637937627489);
    msg.setSource(22651U);
    msg.setSourceEntity(83U);
    msg.setDestination(26398U);
    msg.setDestinationEntity(202U);
    msg.enable = 53U;
    msg.mask = 311976865U;
    msg.scope_ref = 1267776995U;

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
    msg.setTimeStamp(0.1208367632141294);
    msg.setSource(20847U);
    msg.setSourceEntity(153U);
    msg.setDestination(24191U);
    msg.setDestinationEntity(207U);
    msg.medium = 114U;

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
    msg.setTimeStamp(0.19823353445194636);
    msg.setSource(25886U);
    msg.setSourceEntity(74U);
    msg.setDestination(38319U);
    msg.setDestinationEntity(222U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.5039815975191195);
    msg.setSource(25421U);
    msg.setSourceEntity(42U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(33U);
    msg.medium = 92U;

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
    msg.setTimeStamp(0.4144165206692305);
    msg.setSource(54699U);
    msg.setSourceEntity(87U);
    msg.setDestination(14730U);
    msg.setDestinationEntity(96U);
    msg.value = 0.9152390131642962;
    msg.type = 140U;

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
    msg.setTimeStamp(0.5527768001462506);
    msg.setSource(1546U);
    msg.setSourceEntity(186U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(145U);
    msg.value = 0.2408115592910547;
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
    msg.setTimeStamp(0.002591124743251405);
    msg.setSource(41673U);
    msg.setSourceEntity(71U);
    msg.setDestination(10737U);
    msg.setDestinationEntity(54U);
    msg.value = 0.7622030421431016;
    msg.type = 83U;

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
    msg.setTimeStamp(0.7126129138640519);
    msg.setSource(60396U);
    msg.setSourceEntity(111U);
    msg.setDestination(38226U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.9989775917367242;
    msg.converg = 0.5830021238130549;
    msg.turbulence = 0.9463462612890031;
    msg.possimmon = 217U;
    msg.commmon = 20U;
    msg.convergmon = 234U;

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
    msg.setTimeStamp(0.18704475242417185);
    msg.setSource(60921U);
    msg.setSourceEntity(153U);
    msg.setDestination(14595U);
    msg.setDestinationEntity(25U);
    msg.possimerr = 0.12238850872865215;
    msg.converg = 0.25189261203447066;
    msg.turbulence = 0.9526054935688575;
    msg.possimmon = 58U;
    msg.commmon = 139U;
    msg.convergmon = 62U;

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
    msg.setTimeStamp(0.5162531876964223);
    msg.setSource(27936U);
    msg.setSourceEntity(67U);
    msg.setDestination(23991U);
    msg.setDestinationEntity(10U);
    msg.possimerr = 0.9965243166380666;
    msg.converg = 0.1748810687626816;
    msg.turbulence = 0.015575783971595647;
    msg.possimmon = 131U;
    msg.commmon = 240U;
    msg.convergmon = 80U;

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
    msg.setTimeStamp(0.4717008471673637);
    msg.setSource(45614U);
    msg.setSourceEntity(254U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(107U);
    msg.autonomy = 177U;
    msg.mode.assign("EXJUEXMURTVFFTMYELPYVPRMEYMNWFQVDUFIWFVERHWJVKYEZGLYSCSPVSRLFJLFNOKBLAWSIZVTVUXCQAOTDQPZFDPOSXOSCYKTHRCGDNKGZSHIQDZOABWGLOINNHQIGXXIZXOSPHNFQEQZJFRHHUIBIYCDBEXWRVJTVIRCWDPKWPKHMAOUBLJHOUMADEGZPCMTNPTBDKASHUNGQSNWAMECJAIUQDTUXBBBRJTLGLOQCKZJNKAMLM");

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
    msg.setTimeStamp(0.6058389343822262);
    msg.setSource(60338U);
    msg.setSourceEntity(218U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(17U);
    msg.autonomy = 172U;
    msg.mode.assign("KTBRORULDFLVVEJQWYZNRLQGYNROEPHBUONGPRMKQPBIMSZNZDBNOYQZCAHWNJOEFQFKYXPGNCUEJDAPZUEMXPLKBMJACVEJKHNHZGFOGQNJDJGCDABETDVWXFTBTICBVADADVUEGKMTGHSWUUVTXTNCJRSMGCYQLMWXOTVUZEMWOO");

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
    msg.setTimeStamp(0.037337272170050784);
    msg.setSource(50563U);
    msg.setSourceEntity(248U);
    msg.setDestination(24256U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 178U;
    msg.mode.assign("JUUDPREGXUAJJTHUZNE");

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
    msg.setTimeStamp(0.17374274136000278);
    msg.setSource(60037U);
    msg.setSourceEntity(121U);
    msg.setDestination(14954U);
    msg.setDestinationEntity(213U);
    msg.type = 57U;
    msg.op = 0U;
    msg.possimerr = 0.34685860367357746;
    msg.converg = 0.6707235596072177;
    msg.turbulence = 0.09425320385547908;
    msg.possimmon = 106U;
    msg.commmon = 171U;
    msg.convergmon = 68U;

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
    msg.setTimeStamp(0.7536011067437145);
    msg.setSource(52252U);
    msg.setSourceEntity(136U);
    msg.setDestination(9057U);
    msg.setDestinationEntity(110U);
    msg.type = 38U;
    msg.op = 205U;
    msg.possimerr = 0.5006079462013753;
    msg.converg = 0.9383616986766691;
    msg.turbulence = 0.9525820795850313;
    msg.possimmon = 77U;
    msg.commmon = 21U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.8948462928525619);
    msg.setSource(49694U);
    msg.setSourceEntity(29U);
    msg.setDestination(48869U);
    msg.setDestinationEntity(40U);
    msg.type = 97U;
    msg.op = 27U;
    msg.possimerr = 0.2661215087938611;
    msg.converg = 0.7672489454413173;
    msg.turbulence = 0.3212706883805895;
    msg.possimmon = 96U;
    msg.commmon = 104U;
    msg.convergmon = 128U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.2952683544313254);
    msg.setSource(16000U);
    msg.setSourceEntity(51U);
    msg.setDestination(63535U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.6595931664580263);
    msg.setSource(49064U);
    msg.setSourceEntity(60U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6692270046683659);
    msg.setSource(60100U);
    msg.setSourceEntity(159U);
    msg.setDestination(50433U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.9373571714294936);
    msg.setSource(24793U);
    msg.setSourceEntity(197U);
    msg.setDestination(35143U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("ISSFTDDBYIBDIPRBOFJDSRSNRBQNTHJAUTXSQVAVGBOQBZIYJUDVTUKNLFDWJODWNINVZZNUPUXMOMGXERMHRGOYEZHLKKKYACGHXJFFRMRLXRTPEVYBLMUSSZWJOBGJCDVOJCJAQVGACKAAYWJEEEAWFFMAQKXIYFSLYQKCXKLOUBCIIRMWKMHLAPXTEWQVIWWUHDTSQNPCNGPCZPLCZTPQBIYRFXNWLTLVTHHNEEFUMX");
    msg.description.assign("VZSQSUXKSNXROHPVLJWQHQSNATSVZAEYFIWZZBMERAPDEWXPTBFISCEJWQKSORXKVDHCLDQTDYDRGVUNUPMWMUZDJJHOGCJNGUXAKPIHLLVHGCIIYKGQDMJPGOKRPKACVDKGKESWBYFYZLGETEIEICQUPNTAMBBYTUFRTTYIZJWCURYJNHNAFNHLCCHLTATMUBBMVXSCQLBZZYEVRRIBAUFXFOQJMRPWGJFMNLDVXKFLOPXWGOIEAZSONBM");
    msg.vnamespace.assign("GJKLWDINBOGQEDDTZKHZUUAJ");
    msg.start_man_id.assign("RQMXIDUBRKKFCRYYKZZFSMUEFWCVOUNYLQCVPOBVGCEFLTSILOGXNDFZQNOJLRLQTQAMWUVNQKHTOOABSDMHRONSXHGTUBFAERYRJEH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DIJOWTWLHVSVCEDWQSSRAXRIPXVTEZAIACDQKFOXFCRZYMFPPCXTBLLLXXLIGMROGYGRKMBMUSUMZWTDUNOUABPHTBPNUFEWJVOPSSIGRNDIKWAROTWTNVPDNZYQHEFZZGAWATYNDTXZPBFDCIMGGCSGWKUXHPCZZJBLGCGBYIDEARKXJMHHBEJRN");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 44659U;
    tmp_tmp_msg_0_0.lat = 0.9603221983897643;
    tmp_tmp_msg_0_0.lon = 0.9199524792773691;
    tmp_tmp_msg_0_0.z = 0.9115915823256887;
    tmp_tmp_msg_0_0.z_units = 217U;
    tmp_tmp_msg_0_0.speed = 0.3360011861037385;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_tmp_msg_0_0.duration = 17751U;
    tmp_tmp_msg_0_0.radius = 0.17748367947839228;
    tmp_tmp_msg_0_0.flags = 108U;
    tmp_tmp_msg_0_0.custom.assign("EFAKAPUUHLFFYJHZTCIPVOVFLXYHNMCZQNPAVMJKUWYCGAOKJDVIRDNQSANHTEYWSEBASLBUMIMLCZKIXSIMDUVGPGESRPQHTZKLFHBYTDOPJHYLURFSESLVWZWBNRQCVZQKTXFDXTMIGNNWMDADBFJEOQURQXPXMUVSRYSTGOHBJKPUOKHXZNPDAWZWCTARQYBLDGERDJFOGZVNJOKYSTUXEVCXZOXMKFIWTWJBBCLYGPGG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DevDataText tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value.assign("ATSDWNVCJLRPOWJPWXVTIHQKHNQBUHGBBRQEDQADEZQAZPVVCKEYBNIYXDUWYTBCGALITIUUMYTUJGLODWCWHOMRGDNVEFJTXDKEKVZQOLYSBBMEURSFRTAGWAIEIUGXJCNQPHFNXVKZJRNWEPLMKVKQZTODJLLTEUYIFAWPYCOYUBNORCHSMVIFMZAXMOPLOZNKPJBFXDWPSMVGXYKGMXCZRPAHAJJFRFXGYEHZCNSIGHSMSOUQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("MQJQMEHZMZSJDJSQAQPVREPVUCZTYLHNTKUKKZIQRFBPLZIWDKWMWGONCEMZKMBVGPFBZRQARDDGYFZMPOVDCPVCYJASXBUWYHINIRDIJLKSXPEXWVFEOBJTUJEWHOSUVUUAGUAOBXTYMHFKNUGBNGLRYAOCJAHHVC");
    tmp_msg_1.dest_man.assign("HQNYIBJSSEWDKDBAHILONILLUTGTIKELHYWVQHWHXKRQPTLXMOQYZWAGUXDXMEDBYROVJHBJECYQIKSTSIIVATPTJWYGNMBULQLQMPSVCUBPXJUTRPGBUCJWDFDGAOXYJTZKGSRFNEEZPKZEOKOMCFNFIDNPCQRXWNCROZSFHWUBVDRFKAMLHVSAHJPFLAIYDUAHWTRGLUNSVFNKYW");
    tmp_msg_1.conditions.assign("XITFBFJQYKRD");
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
    msg.setTimeStamp(0.6161187727987519);
    msg.setSource(33097U);
    msg.setSourceEntity(105U);
    msg.setDestination(54394U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("SBDCNETVOQWNAIXRICZFOAYFGRJNWEEBCOQHJUTWNZBPCJDGHWFNZEKEZUQRIQULZNXJHYFHIKDKARKSITXRBXPQHJJSAIGPKTWMAVINEAIOYMFFSZKZCSQSPVHKGDGADUBOUQWEU");
    msg.description.assign("ZZETGHJMBFEPCRHKNVBDLBJVAVMBWVTTVYKQECSIIWHOCAMSRQXJSTGQWUDMGGGGBIVWMPUJDCZPMSFRUBZAFZGUQFUNCTEGLNLQROAMGKDMYOXPHZTQSXHUKQRRLDHXRENCVYYKJJ");
    msg.vnamespace.assign("DKCDMMEIGBWXSTIXKNJVKUXFZUTXRRDVGCOXUUGPWFAYMUTY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SQNWSEDZQRBCYZTBMSGUIZTIUJAPTKKOVDMKIEFWVHFLQOETEORMPKBZUAYCZGSXJNVOPWGAJNIJNSXUHIPKRSLXIYVOQBNZVJDPZJJEETTJGNRAXCLYQFWQZEGHDUYRKGUNFOGG");
    tmp_msg_0.value.assign("HIGIKUIVOKQIWJEJTXWSZUSUQTCBJDYPDHDWOUJKVXRDKAMKGJUQEBUMXRTRLRZSIGFBNWIRCXCVFLQCMNRPTWBOBYTZXGAUTYZOMCJUUSTPLYYSLALH");
    tmp_msg_0.type = 210U;
    tmp_msg_0.access = 85U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WKXPTNVEWNTCYLOZXUTOGEMTMKFMQNPKMYNIWFTCVQZJGKCCZASZEEDUV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PTOLUKIGNQEUAYWNWLDPVGBFPSYIWENZRHDDQXUXISUJAEDECCJBYFWCOVEVGRTMLJPZXRCUVOSXJNONCZMMCTBWUCZRRYQSHWXVUGVEJLQFOFGFKTLRADKLHBVHYBPVMUJNWMAWQTOKJIOIITSRWNBHQRZTABLPBSPEURKDIYMIGCQLXTPJXT");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 52596U;
    tmp_tmp_msg_1_0.lat = 0.5549127363323743;
    tmp_tmp_msg_1_0.lon = 0.9285402890200507;
    tmp_tmp_msg_1_0.z = 0.8052316686477233;
    tmp_tmp_msg_1_0.z_units = 68U;
    tmp_tmp_msg_1_0.amplitude = 0.0817997406690737;
    tmp_tmp_msg_1_0.pitch = 0.5154985171475218;
    tmp_tmp_msg_1_0.speed = 0.37701766638250656;
    tmp_tmp_msg_1_0.speed_units = 134U;
    tmp_tmp_msg_1_0.custom.assign("YAZOSYHQIOLVVSJKSRDHWHTHAVJFGQTJYLTRCEKVCWOTBZFGVTSCCAEOPZAPXUNBEWUSIAROBZKWUGRGHYBDWSELKBDGAEHMFZWXQOHWJSDPLNMDQMTLGNXXIUUBKIHEIDMCCIKMYVLRCORFZVNUXNJQFHSEDAXDMFLPGYHVROWTXJJQNNZXAEPTNZPMGEPWCQKBBWJXPFQCMISITSRRU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TPXNNQNDZBXSNIASVMIUXQZHBYAMOAYFWADRNIZYAGBVKRKVBVCRRUDFNXEEOHJLQDFZGEGSDGPYOMNFVMRVUFLOHEMTCZSSGH");
    tmp_msg_2.dest_man.assign("BDNJRVNUTSOWTDUYMINCSELW");
    tmp_msg_2.conditions.assign("LYFMNHNVHOGZQVTVEGCZFJLCHFVMGKIXZYBDBJPJVINOQNQDWPWATGZYRLCRIDDKWHSPBYNUVFJLQSYCWJUVOJSVRIZQOEUMRAEMTYSFLCWENIBH");
    IMC::PopUp tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 14282U;
    tmp_tmp_msg_2_0.lat = 0.5748250087745477;
    tmp_tmp_msg_2_0.lon = 0.9863532313669449;
    tmp_tmp_msg_2_0.z = 0.6032175106328691;
    tmp_tmp_msg_2_0.z_units = 228U;
    tmp_tmp_msg_2_0.speed = 0.4668384229033036;
    tmp_tmp_msg_2_0.speed_units = 224U;
    tmp_tmp_msg_2_0.duration = 22631U;
    tmp_tmp_msg_2_0.radius = 0.9678087206953686;
    tmp_tmp_msg_2_0.flags = 202U;
    tmp_tmp_msg_2_0.custom.assign("GEFSUSOCTKOPADTCOCRLSDYRJRHTVJQNIEZKXHIPFONAILZCPDKVMRPRFEWGMHZLQWXUSGNBJE");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PlanGeneration tmp_msg_3;
    tmp_msg_3.cmd = 18U;
    tmp_msg_3.op = 47U;
    tmp_msg_3.plan_id.assign("VTLPKETPQJXXGTBGDNAESKYRZFYVHMZPGSZKCDHUYHZUWFISNCXBHMNRQMDTIXUEDXQFJMKCFZLIIIQBLYKCBHECHAHQSMYDIVHWURUTKBESRSXOAUIXGJWVMIPBKBPAJQKC");
    tmp_msg_3.params.assign("TODBIZFEQHFBIOTQLGKKSUKUOVTXRNPNNMVSTXIWZKAEAJBDLGIZHYWKPRHMAQFOHLXNDVKTSUXVXSQUYPXCUDERPWKCZEHAZLXYOQDLLOVDIYNLQSYUCVAPVMUWMVLFCSRGJMISJKGWAMWNNNYLWESDCEXWFOCWBYIRRDXGNKBZBPOHZCJGOVHQS");
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.23009717335573265);
    msg.setSource(34912U);
    msg.setSourceEntity(197U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("TRJVXHTAYXBCNPEPEIWEHOMTDQJNKCJYPFLCMSMKCXDVLJKMDRFKWDUYKVQPEFHYRSLDOZGQIRATVFIOXBOAVLLDSSBTGFXJLJTNTJWYHPGICYPHFKRGZXXHCGPLPARAUEBHCEQUNZLZIS");
    msg.description.assign("CHZFDFGBNPTXCSQDHHOHCTFYEIITWSGKGGZOPEFKDXASMIWLJYTNVSFJMRIUEMVDIGAJHGJCCZRWBMZYRLJRMUDQEGEYVFBIAAPJMUFEAYNHCLPPEXQVGFAPPWKYYTNRMAUUIBOAKNIKRLQSEOYTRKXMSQZFABMCNHGSTDDOESWHJLSQYVUDKDEBFXZXVOJTLQWZPRXJJV");
    msg.vnamespace.assign("KIHYQVWPRPUCHLHIKN");
    msg.start_man_id.assign("AEMJRYBRLVZPXMAOAISXTJOJRKQUYMZDYFGAPJBUMCSTOAWVMPASUHUVHXZVVJYBHEJFDUGWCYDQXPBUIDCNYTSGLLRGIGESQRXWHMIRITOWGBBNFIKLCEOCHDHEUAAUOWWJPWUMWUFFPKGRYEFNGFZQVZQLYIWIGTO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HJOUGVUHSGARSMPQQTDGSPQQXKLEPNXYVDSXYABLBINIVAOLVZZDMLULZFNMWQCBTBGDABVHUTLMJHJPZEGIHLWBORRKLJTZXYIDVKIFX");
    tmp_msg_0.feature_type = 128U;
    tmp_msg_0.rgb_red = 57U;
    tmp_msg_0.rgb_green = 132U;
    tmp_msg_0.rgb_blue = 136U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.25179901668251914;
    tmp_tmp_msg_0_0.lon = 0.5233034558896529;
    tmp_tmp_msg_0_0.alt = 0.8739870662930099;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9788667842479902);
    msg.setSource(8652U);
    msg.setSourceEntity(157U);
    msg.setDestination(54995U);
    msg.setDestinationEntity(82U);
    msg.maneuver_id.assign("BSLZBBSJURHULLQAGEPHDAMTUMSQGFOWKCIRAWCPZTFMUELWVZVOSVNNKUKWDPPBMWKHFXHERGRFPNRIMXHUPZIGZDOYGQFWCAWDTWEXSYZGKWXQVIHRQZGAGJZZCNUVNNLYSJJVKSTIXITQJKKDFWLCLARDTACQNBULOINYLJTNEFVUPYJOYBZHJGXXQAFGKTHSPDLIFCYBIYES");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 31398U;
    tmp_msg_0.rpm = 0.04663345578171085;
    tmp_msg_0.direction = 217U;
    tmp_msg_0.custom.assign("VAGHTRNKQOKSYFJECLFEWOPGFJHMIGNARUIOOWSSPGXKDHCHZMIGHQAHYAHHYMZ");
    msg.data.set(tmp_msg_0);
    IMC::TrajectoryPoint tmp_msg_1;
    tmp_msg_1.x = 0.3026839578726216;
    tmp_msg_1.y = 0.34041124936895195;
    tmp_msg_1.z = 0.2318720307270129;
    tmp_msg_1.t = 0.20051599757688943;
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
    msg.setTimeStamp(0.6018575126492065);
    msg.setSource(24022U);
    msg.setSourceEntity(61U);
    msg.setDestination(5396U);
    msg.setDestinationEntity(103U);
    msg.maneuver_id.assign("OHXESGTZNXCHZQQVVPJUKJDDEMDGHJUPNH");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.26607198950289157;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 53669U;
    tmp_msg_0.custom.assign("RCXCVCQCMFINKABCZQIFJVTHQIKJMPFXOBMZUMTZHQTLUUHGMIPKKERINBNBSATPOJKCAGJWLAROXUIOVNLPBDVEGFHIWANBOLJKNZPQCDGMNGJGUBXMVQZYZFWHALLHAOUUXTGWSNETSO");
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
    msg.setTimeStamp(0.3392861940341865);
    msg.setSource(2463U);
    msg.setSourceEntity(43U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(40U);
    msg.maneuver_id.assign("NXEOHEFQISNOAHWYCGNBWVVLUJVBJJJZUAJOKFVADVRCCBWUCXMQPLPPGFEFAWLVZGMCSMTGUFBXKYQTBIKSRDVYHHZRYEUNXERJGTPBCATQFACSRNHBWPTDHTGWOSDXMHOISSNZGQRSQPUUX");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 64303U;
    tmp_msg_0.rpm = 0.0131048617578845;
    tmp_msg_0.direction = 248U;
    tmp_msg_0.custom.assign("OVXQJBUKPETNSICUOPGVFFXEZLTDMDRWLYOQOGIALBKHULHKWPPPVTDZYQXUXWQBBOGANMHMGPZFSTCPNKROKYCXUDU");
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.14815943151532096;
    tmp_msg_1.x = 0.046427995476354456;
    tmp_msg_1.y = 0.7788984663644134;
    tmp_msg_1.z = 0.06558289835568709;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DvlRejection tmp_msg_2;
    tmp_msg_2.type = 249U;
    tmp_msg_2.reason = 60U;
    tmp_msg_2.value = 0.37314302768550045;
    tmp_msg_2.timestep = 0.7332996486052729;
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
    msg.setTimeStamp(0.43486747684712634);
    msg.setSource(53051U);
    msg.setSourceEntity(181U);
    msg.setDestination(30625U);
    msg.setDestinationEntity(183U);
    msg.source_man.assign("XLEDQLUWGCUQWFWINYZEFRLUUKSNDMOADKSMFAFQBUKOHEJBTOVLIKEUJPCACTYRMYCBTVFEPAOOPGNLZANHYSWYVPNXZXWCWWGBTRGDPJIBPZUYTVNMUYKGGZOAKPXXEJDAQHMQEZASMIQSVLITCDVMGHGH");
    msg.dest_man.assign("PCCTIQXSVIUXZLENHPNWBRMTJNWULNDIJRHKEMELYSEJBXBIQGDWMGGKGAWIZZSXRPATEDITNQAAOZHSQLVLQCKGZAEXARHLKIROKYJDWJADOUKGZKGHBWKOTYKRNZBSOQCJECXYTFWRUWCFFQCIVXPVNMIDYEWMLQMMFOQSABWPCPLXZENUSHUGBPHJLGKDBFJEV");
    msg.conditions.assign("VXZCVCBABGQETTUJSQJRLEJXIQNXLCFFZGPVZNWHPGOCKRNDWKFMYTLIZVQUKBFZFINWFGTCMALBWSUCHPDJMNNWHUVMDTBQDJMPKJAQMMJSQXDEXRRNWNMXFOEWISUEKEGST");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 4987U;
    tmp_msg_0.name.assign("UXEHXUGEFYVVOSHWLMPKJMJLUCBTXSSMTQBRNKNIQPJFDFHKIXCMUGEJJQYHTLYZVVWPUCPQSVJASIPDFXCSYPOSGQDWIYUHRRCFOVJEKDVAHCLPWYNUBERJMMOLSXZKTJGGIKEFAQOGUDNKWKDUNEXYGBALPNIVHZZCIKOURQRKBXHZRWZYNW");
    tmp_msg_0.custom.assign("EMRTHRCALJPTEGDHBEUCNVJYNWSBHLTFVJMHTNKOCOSNSUVOZPFIQSRDAYIOETQIYOIHEKHIQHQMTSIXLPYFVDUWXPCGMAFVKRWEOFRCGJWSSDDPRDFXHCILWIBJUFVNIXZRQOPGKSGMMUXGXVUOEL");
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
    msg.setTimeStamp(0.6500475655115201);
    msg.setSource(60448U);
    msg.setSourceEntity(70U);
    msg.setDestination(52077U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("MPAYCYSAGTPEOYBCNBMNEOOZRUQDAQDKYFUBTKWRWKGTXYXXZLVWIAUJZAFOGNAKDNGZOHREKYFPDZHOJYQVDIQVCHVYGEPMCQZKNK");
    msg.dest_man.assign("NTSCZMRZFDLKGLMAMQRZUQCKRMZFTTAUOROLUTFTFWWIJHQTSCWDUYYJYBERHTKUCLTIGPEZBEQMDSABVXVULHOXNBXKGNKIJEHDIGHAUPBFJHLCSASNCLARLGYICBDIFEWVD");
    msg.conditions.assign("LTQGDNOJIXDWBEPIEARAIHGYPIILKWELUEFPXIFWSNTHRZRWDGZQOYTZGZZYVEBAXDNNCFJCNLWNRVFYGZJRPYKBTOABEOSVVVOKUNTXWDXVIUBSHWXJQKHMOLDOMSHGQHTAPGYOKPMPMZLIQCRKXVVDCEEMWGHQUBUAYCPQLULFCJAZSTXMTYAFCJGHUQCABDHRJLBK");

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
    msg.setTimeStamp(0.1824769182231749);
    msg.setSource(34927U);
    msg.setSourceEntity(212U);
    msg.setDestination(42065U);
    msg.setDestinationEntity(130U);
    msg.source_man.assign("KNMBYVRLYHNUEFNKEVLMCCQXSSWNCTSKMOQWBAJCGYGWLUAYBKQSIZREQTRVLKBVTDIFHKYXZLHFMOXIZJYAPITAXPUGSEEOMHKAWSJVQGSTPRNXZJKFNVDNSNPPGFCDBQHYOWAGTUBTLIZRRIQMTMDIRUDWUHWVEJQAVCPNUGELBHZFILLXVJIPDYZ");
    msg.dest_man.assign("WBDVZHXPJIXGWJIAGXVMMSZSVLSBVACKSXYTDNLRLFZCBFCYKVINFOQQO");
    msg.conditions.assign("PSAMPWPZRKMEDXYOBFONEGJNGNRUUXIWZSEIHSHZTPYUYCOVINSQMKCNHGUOHRFBVUE");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DOHSBPWCWDPDKCHTJJUQADRPIYBIRMXHKYVWZVEFUWJFUTTNFQTZWKSSMBAYUWYFGOLIKAZKAHHLBCWJSD");
    tmp_msg_0.visibility.assign("KPINOXGUKCVRQINWZKPETHJDJUJUSMWQOBAIAPYJLBFMDFUQJLGHNMUHBXSLLCKRKFSQWKVCPAIYOUWVEWGWXEEKAP");
    tmp_msg_0.scope.assign("FBNVYEAKDWCUPRXHNNXSQPDKTSLVMIZMKGKSJAZDLIRGTGOXXWGHSCVHSJJVIHHOYVRXZYSPDIZLDYKAWBLQTPUDDSMTYERFQANRNALQKQFPDIIBAPMNTNSQFLMGCTGMTPYLKOIYQELCOCSC");
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
    msg.setTimeStamp(0.3625854947857635);
    msg.setSource(2000U);
    msg.setSourceEntity(78U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(45U);
    msg.command = 143U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TGUHCLEVVCHRKJOIOZSFERGNMVNDMURVZB");
    tmp_msg_0.description.assign("JMBGNSIIZUQGEGSEELBZCMQTZPEQHUAVKIRHRXKOZLSWVIIHHWDPHMBQYMPXVQXDSPMJOTVKOTHCYBIDPVVUGOEUYJOXTCXCYXBFFFIPWZASJDUNUFNHJOFJRTPLSEWWGMKUHIGXBSJZJQDAQIWEGLXASTUZTVWOYTMA");
    tmp_msg_0.vnamespace.assign("LBCLBSFNQFXJKQLIGBWBVVJMUYEXOJLOXXAKHUFMOERKOEIIPBUREEUUDCEJSQHGCBRNUNNAZOUXZWJEEBFVIDWLTGSVKNYWSYCHCZYWQOTKTNLFWTRMMXWSPGPDKARIM");
    tmp_msg_0.start_man_id.assign("VBHKSZYVDMWUHXWUYVKKXFAFJTBCOWFZXPMVVCIAUMMABEJYXPTMHSPNFQC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WOJWKSFYMJDDBHDTYDIESIQEQJELBKCARPKUCARTPVWRFUVGAPRLOYEVNFIUCVJVLFFZHPPWKUPUBBLEGXDPPAZOGWTLHAFYAHYBKWCTICCDNBQLW");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 54201U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6921708956409014;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.909697821557212;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7846372596520691;
    tmp_tmp_tmp_msg_0_0_0.z_units = 152U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.28730540171164964;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 150U;
    tmp_tmp_tmp_msg_0_0_0.duration = 48196U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.8816509644457459;
    tmp_tmp_tmp_msg_0_0_0.flags = 156U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("RFBDYHALBFGBRKTEHJJVYD");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::ClockControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 249U;
    tmp_tmp_msg_0_1.clock = 0.3595449771030783;
    tmp_tmp_msg_0_1.tz = 99;
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
    msg.setTimeStamp(0.05385666078456908);
    msg.setSource(44727U);
    msg.setSourceEntity(114U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(211U);
    msg.command = 159U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BDCBLWJCWBDVYQKEOEYGXUSABXDYOXHDNLEJAVJPASEWGEPBTMCEZTILNFPPRSRBKIHSZUVKBHSMHQZ");
    tmp_msg_0.description.assign("PGEHPKNVCZIMRQXNPNBMHTBDXRQMDBGLDFZUCHAWJWCTAMMXDGKNQEBLKOJWUVJILE");
    tmp_msg_0.vnamespace.assign("QYCWPOHAHZVBAIKCDLDOICNBMQEUJMMCURFFCRJNRQLWMYOGZNKPXAFEVHIJWAAHPWMVRTNGFFKLRZBPAJPGFSFUWDWJOBUGNTHLXEMYPVOWXMQXSZIHXKVDVTKSQTZLIQIYSIHKPWSDXJOJCCOJBATNHABD");
    tmp_msg_0.start_man_id.assign("ZCPVDMMAJWLKYWENHLHSAQFTGRDUMGQFIXZQABUZEMCVLNKFWKFQSTYWGXZLUWKCNIVFXLSOPBAKATGNQYKCJDQPUEJREJGUDJIPSDJMXGJHYIZCGMVMTSLPPRXWPBHBRISSUNOBRLRBXDFYMYRDKAIDGBXLVXJCYWRFQO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TTQLGEYPGWSAIWGJOZTFSVMIDCLGNURJDFSABZKKZEHIWPKWZPDWMXXJFSBEIRDTPRHHVZTVMCVRNGLNRDEDXXRZVYQIQEUQKMH");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 45410U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.2353141349999307;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9040083183840171;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7486008462038338;
    tmp_tmp_tmp_msg_0_0_0.z_units = 26U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.036826792342033454;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 84U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.32246969326020614;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.7178806109853098;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.04660587788311199;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GPVCJICVJQJXMHODTBKUYLQEAEWFHZYVYVJQVEVMTPASRXMSGPLQEICTPKXGONFQAEIORSTZSWUHTISGNVSRTYDMUKQNAZUPKFCBJKXOJBCMBDCJWNDRONWAMBZRNORXMTUCNYAHLSHUEDGEXGSENUKOSFIYCLZHMTWXGQFJPDF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredVelocity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.u = 0.6014612337924553;
    tmp_tmp_tmp_msg_0_0_1.v = 0.12863431051223395;
    tmp_tmp_tmp_msg_0_0_1.w = 0.6463613393517552;
    tmp_tmp_tmp_msg_0_0_1.p = 0.0879903377976331;
    tmp_tmp_tmp_msg_0_0_1.q = 0.749438053230856;
    tmp_tmp_tmp_msg_0_0_1.r = 0.0903942713476118;
    tmp_tmp_tmp_msg_0_0_1.flags = 238U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KFVXQFLNWFWJUJXSJRQIOWHGQGQPROHYBPMIRKZUYUENITCAILVFSZBSEMYGJAZYMAKILLFZRAMMTBFIU");
    tmp_tmp_msg_0_1.dest_man.assign("DTBYRMRKFJIP");
    tmp_tmp_msg_0_1.conditions.assign("BKOYBOLWKAPVOGMUAWNDVBLDDTVOLOMKSVHFFTTMWWJKPVIXTGOKYLHGPVCZDDIFLUCUMMDGWRKHZCHUEALQWIRPDQCNWVRPGYYHSQEFRJPISSPV");
    IMC::SetLedBrightness tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("BIVLQGHSVCBIARCENQYCPRPIDDHUHHOBSPBSKGULEF");
    tmp_tmp_tmp_msg_0_1_0.value = 81U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.06608668795137806);
    msg.setSource(34122U);
    msg.setSourceEntity(176U);
    msg.setDestination(36488U);
    msg.setDestinationEntity(246U);
    msg.command = 23U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("APVNBYAOHOXCEEDZVIBLRABTSWPTYQGPGMDDOGBWQOITHMCEUFVDHTHLENGXEPZZPBUQKYEXSZYQE");
    tmp_msg_0.description.assign("VPTCGDMOEEFCXGVDXPXKLXKRVRRKYMUUWJQNTWVHMCUCQOOBALOQSYZSYTRENSZSLJPMYLMYJFVOCYKPIFDZPLUAJUOSFMQLUHZSIASBMKDOCCNTONAQHWUWESIYNDCZMQHANVWEJAFNRABABGHIGVHUZONWBHGPXGLYRJUPWBMREQCFXRNDKTJGLTSWHPQZ");
    tmp_msg_0.vnamespace.assign("EVGYFXBRQTLQSCSVTWTFXKYNEZHFLHHUKDROSVSGOHAONXEBVEMGFGAZNZYAWDGDOJKPRNQTKOIJFCZIHNBRUSABXWNQEPZCHYGNQW");
    tmp_msg_0.start_man_id.assign("ZVTJILOPUNSWNWLKCDWPDPNVCLDHEBOZKMJXKQSWETICPCWXUNYSMTEZNAQAFLOBLIBCAUYCLVFHGYHVIGQQVXBIUMRGBEMYTXMGEHIAWHRZPAFYIJNJSUUERGCDJMEKQMYKPUVPUNXFOZKSDGEZGYRGDHQGLTVEFDRJDJQXRS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KJVCCAJVZLYNMSKBDTCWFYZWEZDZMOCSHTOFRBRTIXFZIAVHGSGIECOINQLJUPXBWDEJQODBBZMCDLTXGNWKKSKDTEWTSKAAJLBBEJLBRMPPCTGASBFXYRANRJAWGLVFAPTHHVZFHQZUUODWUKPEMLWNWVMRJNXXGYEYPMUXOMYYLOQQPMTGGQUFJLUVN");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.7744195938093007;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 72U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 9737U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FNKXBGEGYBCGWJRQYGCZDNHELYIDAKQHJIOFWVIVYRUAQXONCMOYWTLDWXUVNSNJMHSKPMXWFHSHSLWIVJBJZXMIFKDGLYEDOHEXJPVGXUJBLLYVIPFNRZGAMTGDOQGFQFSTWCKZTRBIPCHJVQTKJWDZVWMYMBERBUHFTPOGZCCLQCKUE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityList tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 20U;
    tmp_tmp_tmp_msg_0_0_1.list.assign("HDIJQHEBKARWTXXKPMWILZQQIZYTWWZGGNZAIIYKCCLQGLOHWSRFFMXECLEFZYEGDAMTTSURFNQBKMGOGFTABTUSAVAKPSRJRLBKKNYREJLZRBVJCCDUHQDOVDPRDAXOBDDAGDSSMVHBYYQXBZTRYYMVMUPWNQCGXNVOSEJWNEFHUHUK");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::VehicleMedium tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.medium = 113U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.08704878509623915);
    msg.setSource(27911U);
    msg.setSourceEntity(75U);
    msg.setDestination(4994U);
    msg.setDestinationEntity(150U);
    msg.state = 210U;
    msg.plan_id.assign("NJKZHGNKIRDTQXQGTAXKXUIAURKWSAHEYTQWLUYDLVKUSIQCOLVXBSKIXBHJPSBYTOPUKNEAEXFBVPOSVJJNOMWRUHWNFYYDMKWLFXLEBGBQSTDYFPNLJJKTHPAXVOBZHTHOMDVWMQMVCGFIXIOPGQVIBNIRJZZEEZARWRINUBMLIHTZPEJYRZECGQRPOOCSGTWGMVEMKDUGNYLRQCCGAUNSZCPAFDHCRQT");
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
    msg.setTimeStamp(0.155219571927683);
    msg.setSource(46145U);
    msg.setSourceEntity(46U);
    msg.setDestination(2791U);
    msg.setDestinationEntity(120U);
    msg.state = 197U;
    msg.plan_id.assign("BNHTIJOXPTYNTGZVMBHGJQEDZMSIOYLGJAYEZDCRGHCUAJZFPMBTSFKOTLYXASMEAEHOCVKCKWQIADGZSGQNVJSZLTFPAWBNSDGALUZYXTDOOKPAEBTCXFPIBQJJWYYSSLICMGLPPUODNUDLKVS");
    msg.comm_level = 21U;

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
    msg.setTimeStamp(0.002187809708056876);
    msg.setSource(40616U);
    msg.setSourceEntity(225U);
    msg.setDestination(9868U);
    msg.setDestinationEntity(203U);
    msg.state = 134U;
    msg.plan_id.assign("VMZBCNYMILRGXDBNRADWGPDCNBVYSAJIWLOUUXLEKVUVZ");
    msg.comm_level = 193U;

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
    msg.setTimeStamp(0.895352498994444);
    msg.setSource(2928U);
    msg.setSourceEntity(32U);
    msg.setDestination(11283U);
    msg.setDestinationEntity(167U);
    msg.type = 155U;
    msg.op = 22U;
    msg.request_id = 11805U;
    msg.plan_id.assign("RDBZRSHNBFIVVOBJHWQMVHMNHETBSQFSDSACNPJRNTMIMJGMRGHACXGOJBSRBCNAWRIVOSYLUUNJKXOHWNQWJVWDMIBEPOFRXTFHGCLICLHMHVEYZAUQQPPQADLFTMYQGBTLFEDFKAXPWOLWFFKJIRTYZAIYVQDJYLGYEDXPRJKSIBDVKVMZWZGNUKXEDNKXCCCUTIITZDOUELWSSKZROKPLYGKOUZSXGXWCLPEEBEJAPMZYVFHNOUCZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("HCUNNIEJOSXWF");
    tmp_msg_0.dest_man.assign("ZSKBKMWDQQYICVUMJUDTTALUGXGNKWMGMSAGNBAZTWZOOBBGJQBXTFOTLLBVOQWEUPHCOVLPHFHUCVDYJEXCVWHCARDSHXCXINXPTJVCVXBGHNEDREIDVXETPPIISIYDXGZKERMNGMQEMZFFZWHDYTQAZROAMWALZKRIZNHBDPUCQJSKRFFINIRKPSPNSSPGVAJCDQRXFUJJF");
    tmp_msg_0.conditions.assign("ULVUNPROJPGKVMWDLXEYSKVWMXJDGROXACAOLDZYSVTNRUQHCXWKFOAYFWSDZKG");
    IMC::UsblFix tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target = 54824U;
    tmp_tmp_msg_0_0.lat = 0.12663840199245613;
    tmp_tmp_msg_0_0.lon = 0.3147171469765446;
    tmp_tmp_msg_0_0.z_units = 239U;
    tmp_tmp_msg_0_0.z = 0.18977247134487218;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KFGWXDTVBBGWJTLAXMZEBFXEVDIMTWC");

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
    msg.setTimeStamp(0.8202037538610544);
    msg.setSource(56900U);
    msg.setSourceEntity(175U);
    msg.setDestination(32669U);
    msg.setDestinationEntity(59U);
    msg.type = 88U;
    msg.op = 80U;
    msg.request_id = 1012U;
    msg.plan_id.assign("MLLZQJNPFYMPWOSRPNHILVIVVPWFGPSSFHPKOJXEQVTUMCTUEJQRDHVZI");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 158U;
    tmp_msg_0.id.assign("QDQJMTUAQNYRZXZNELTAGDEIOJL");
    IMC::Voltage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7958365968180614;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YPQGXINNRDICICNNZKAJPGFHVFMRANJQXXSCDFMUQBUHEYVYMBXUWWHSTJXGTDSYESRIMLZVRLDCFHNWVEAIFMDGUYGNFTVOQGMMODPQHYZKDALWKGJTURE");

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
    msg.setTimeStamp(0.15747109977982787);
    msg.setSource(43582U);
    msg.setSourceEntity(76U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(46U);
    msg.type = 247U;
    msg.op = 56U;
    msg.request_id = 55922U;
    msg.plan_id.assign("PEQJCVVPHGTOFDZFEXMGNCXJARYKNKOJGTTXCNKKIWBXZEOTKVIAMSPYRPLJYMIRTPCETQXDLUWXJHTWYQGUBJXFKZVSQWMEKZQYYYUITKNHZATEOGELPDCTXAHUPAMUHRACLGLMSJSDQNUFLFBBYZWJRFSNLJIUPLJCNUKVXLOSSDMPWV");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.21315068602367704;
    tmp_msg_0.phi = 0.8109570313233634;
    tmp_msg_0.theta = 0.41402616600102893;
    tmp_msg_0.psi = 0.6623602270432398;
    tmp_msg_0.psi_magnetic = 0.7963028453596278;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AHIUSZIOGAJIVGRWPTYRBNZBZANPLPKOLMGAAJEWTEPHORSUBLTZTEBOKQKRIKLGNEVPFDVTXWVEXJBRPQTQLRSLSUINDYUBRZEHJWHXYMCZGKDCKUWQKSDDWQEOIMUANVLUGMAGXOFPZVBSCYYLXNEPCPJQSNQIHJJQWTZAEFMKXCIIJCFTLJB");

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
    msg.setTimeStamp(0.39531691264870294);
    msg.setSource(22499U);
    msg.setSourceEntity(84U);
    msg.setDestination(26640U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 3765U;
    msg.plan_size = 1841037656U;
    msg.change_time = 0.8047788125131692;
    msg.change_sid = 24120U;
    msg.change_sname.assign("QXYYQMYWNOLPNDWAKFNCIFHLPRJNXHYWPDWGFPTHPEKWBFCDMQBRINNYSNJST");
    const char tmp_msg_0[] = {-107, 40, 90, -47, 102, -20, -105, 23, -72, 38, -97, -49, 86, -18, 116, 33};
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
    msg.setTimeStamp(0.30278056694573796);
    msg.setSource(20162U);
    msg.setSourceEntity(41U);
    msg.setDestination(550U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 16087U;
    msg.plan_size = 3062265211U;
    msg.change_time = 0.8960662071676122;
    msg.change_sid = 64705U;
    msg.change_sname.assign("JNXWNQOFDUBATPGJPBMQQFBCKHISWBFQVYNNVDHOQMUPZGFTTSZSCSRDRAWAQBANGB");
    const char tmp_msg_0[] = {52, 74, -85, -98, -35, 66, -65, -37, -116, 2, 75, -74, -50, -114, 60, 37, -79, -17, 17, 19, 70, -21, -84, -104, 6, -36, -14, 53, -84, 55, 15, -4, 70, -15, -61, -52, 7, -6, -29, 35, -67, 107, -22, 50, 37, 124, -102, -105, -109, -99, 44, 26, -111, -121, -94, 20, 85, -95, -31, 54, 15, 56, -98, -28, -115, -84, -123, -64, 54, 87, 12, 99, 98, 8, -128, -61, 121, 114, -45, 10, -116, 52, 121, -122, -4, 124, -45, 5, 4, 31, -34, 45, -66, -84, -121, 0, -85, -32, 5, -6, 59, -8, 56, 4, 78, -69, 79, 9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LRBUZUROXDKLAFDVUWZROQCEWDUPZEKZBMMMTASXBATCCYXLHNEUHWTAPAHKGYTEKLPRJEWTDYXVWJKMNUYXZXHT");
    tmp_msg_1.plan_size = 35858U;
    tmp_msg_1.change_time = 0.4514630003103911;
    tmp_msg_1.change_sid = 45846U;
    tmp_msg_1.change_sname.assign("WTACLVFSEIEOBSZLCDTVWSUKHYGOQONQTTBOYDSSYKAPKLQQCMBHDWATBRGUUVXNSFRWXTNHDVPUWWPCXOWMXJFWBNXSAJLFTPDGMGVXMALIRXSBAALCNUGJFRTEPTOIMZBBEHNFDAJ");
    const char tmp_tmp_msg_1_0[] = {3, 21, -31, 102, -16, 109, -117, 119, 7, -90, -112, 0, 5, 110, -32, 107, 63, 17, 101, -110, -107, 51, -76, 78, -111, 23, -62, -92, -64, -98, 106, -1, -44, 90, 117, 36, -4, -5, 16, -123, -9, -43, 2, -12, -82, -21, 35, 42, -48, 92, -49, -77, 6, 107, 24, 114, -68, -6, 18, -84, -6, -73, -98, -121, -111, -89, -39, -71, 82, 96, 120, 56, 78, -66, 71, 123, 35, 112, -74, -38, -44, -83, 120, 100, -2, -42, 8, 65, -48, -59, -24, 36, 7, -128, 80, 88, 124, 36, 3, -119, -10, -46, 29, 39, 42, 91, -69, -67, -2, 107, -53, -33, 24, -118, 42, 3, 118, 18, 41, -67, 103, -60, -100, -33, 52, -99, 77, 50, -67, 57, -93, 76, 85, 101, -109, -62, 68, 103, -54, 99, 21, 91, -33, -128, 55, -1, 88, -102, -68, -25, -43, -97};
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
    msg.setTimeStamp(0.208999135540461);
    msg.setSource(37334U);
    msg.setSourceEntity(181U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(7U);
    msg.plan_count = 65139U;
    msg.plan_size = 2765629884U;
    msg.change_time = 0.46853984786541325;
    msg.change_sid = 32276U;
    msg.change_sname.assign("WMVBHQFTSWVXKLDYNYOSLOWJSICLUWMGQILSPATPQYHNJTPFRCTWLZDBNV");
    const char tmp_msg_0[] = {16, 90, -105, -57, -62, -35, 15, -7, 16, -57, -24, -43, -88, 59, 51, 122, -103, 125, 12, 8, -55, -83, 92, 65, 76, 73, -128, 80, -44, -105, 95, 103, -60, -71, 11, -128, 8, -59, 104, 51, -125, 14, -96, 38, 75, 71, 87, -93, -9, 109, -73, -91, 49, 51, -85, -63, -110, -19, -16, -18, 110, -74, -62, -22, -71, 48, 50, -115, 82, 87, 0, -51, -82, 29, -33, -10, 36, 102, 119, 58, -85, -34, -11, 13, 33, -49, 43, 91, 101, -34, -83, -96, -105, -107, -106, 96, -106, 117, -59, 10, 100, 6, 84, 80, -35, 121, 14, 6, -86};
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
    msg.setTimeStamp(0.1534297571282871);
    msg.setSource(47179U);
    msg.setSourceEntity(54U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("ZYMLGEGASOLCODFDGOYPEHJSEBQLSEAWGMQGDPLYUKSLPQBPVRHHZUSPFMTLNAZCIRCRIBW");
    msg.plan_size = 60425U;
    msg.change_time = 0.10346297157022588;
    msg.change_sid = 245U;
    msg.change_sname.assign("ETLQWLWJLFPRWJPARBBSILLSFQISSEQTQDUNCMOVSJBYMRQCDMHAXVJBXWCUEMVALRFXPVQGXVQAXZXCGAIEKCANFENGJKELFHKHMPTUZNBFRQPNASIWSOROZXHHBYHUJCSTXMKBTYCPUOTPMELCXFOYUPEZILINFKJBYGRSWJTVUBENIDOIWV");
    const char tmp_msg_0[] = {72, 122, -59, -65, 50, 17, -28, -32, -14, 66, -97, -36, 69, -82, 110, -47, -89, 105, 126, 15, -63, 121, 48, -42, 8, 46, 35, -38, 69, 124, 1, 102, 40, 41, -93, 6, -116, -96, -5, 48, -119, -54, 77, -20, -74, -39, 69, 102, -102, -95, 75, 50, -121, -20, 120, -28, 114, -32, 43, 116, 5, 122, 44, -93, 60, 57, 111, -44, 114, -57, -76, 66, 85, -42, -108, -97, 114, 106, -74, 73, -53, -92, -51, -82, 66, -128, 43, 117, 111, -105, 111, -90, 15, 55, -96, -47, 115, 124, -91, 76, 68, -39, -50, 80, -113, 113, 35, -33, 74, 92, 16, 125, 42, -7, 54, -119, 86, 5, -56, 17, -93, 23, 69, -19, -103, 68, 112, -17, -83, 54, 102, -81, 22, 68, -80, -62, -57, -9, 117, 2, 76, 88};
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
    msg.setTimeStamp(0.13688276172777236);
    msg.setSource(17191U);
    msg.setSourceEntity(207U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("KLIZNWHGIRZYJGBUJVLGVUXNMCZJYHCGWKTYHXJSWNRLDEOWYNWXGBUCFKPATEVEMDPXFUYOSMSAQFXNURWOXTIBRZFVQDKJPQAPULAYGLUXHPTOIQGGICJEBQFTHJBCMOYGDSMAEPT");
    msg.plan_size = 15599U;
    msg.change_time = 0.2777519533994781;
    msg.change_sid = 56142U;
    msg.change_sname.assign("HMOHRBPUOCVBBUSOEIJVKHQMFHRQAJZXMFAIBTIDQRTAWNIWRUKPDAQZYRBULESIQZUBOZLUHJGFJQQKMELVYJCDPGGCCEHITFDPPROXUXKWLMWDVGXSKZABDALUNYNQOVHOWFTDGRXMXZFASEVNDNMGTLLKUGWYAJZPDSLEYNVTCPKYQALEZSLCOSHSMTWEBFVBVJXNJTBFNKYSAJEYNFSCCPMZHIOXIDICXQMTXG");
    const char tmp_msg_0[] = {70, 47, 3, -108, -22, -57, -17, 76, -42, -21, 117, -7, 90, 126, -5, -75, -84, -77, -93, 72, 112, 30, -9, -37, -1, 21, -125, -86, -3, -10, 8, 116, -99, -25, 54, 104, 21, -72, -72, 96, -66, 51, -70, 112, 81, -31, -107, -62, 21, 51, 122, -92, 50, 27, 112, 3, 116, 32, 83, -4, -101, -23, 73, 16, -9, 122, 94, 101, 60, -46, -58, 126, -42, -58, 68, -57, 30, -114, -91, 61, -60, -30, -66, 24, 102, -77, -90, -31, 10, -62, -116, -6, 109, -10, 2, 34, -106, -96, 16, -3, 7, -6, -96, -79, 3, 54, 66, 88, -102, 112, 74, 102, 34, 68, 25, -47, -79, 78, 60, -23, 114, -108, -114, -40, -67, -124, 61, -1, 101, 55, 16, -104, -86, 67, 3, -64, -122, 17, -5, -17, 101, -76, 107, -103, 36, -10, 34, 36};
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
    msg.setTimeStamp(0.4487654431826643);
    msg.setSource(46101U);
    msg.setSourceEntity(212U);
    msg.setDestination(45892U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("XCQOWMMFMTA");
    msg.plan_size = 37801U;
    msg.change_time = 0.9957446118787804;
    msg.change_sid = 53006U;
    msg.change_sname.assign("QQKXSSYGCDAKSYXQADSLXUBOOLAYRPITRRMOFCMPFZHOMVZEERDNPGTNANCAWDKIXVIUSXMFUEKIUEWJHQRLNKSHHBIPDFBOKFFQTTYQBOJFASZZHNBJXEJZDPZEVUVBHAVDLWCTGUBVPULXTUVOJQLSWTSGFZQAVPHRCDMYCTGQTWRGHVJYIYGEWYEHWAXLQBJYOHUVUJNDCKMXGIZSXZLNFCMWKRECAPTBNNRKGERONPKOMDFIWMBMCIJLG");
    const char tmp_msg_0[] = {85, -101, 1, -75, -119, -67, 20, 10, -99, 29, 19, -75, -90, -45, 30, 79, 40, -20, 101, -33, 64, -44, -65, 108, -15, 21, 29, 1, 39, 35, 49, 124, -88, 40, -67, -91, 117, 120, 44, -2, 74, 67, -116, 99, 24, -98, 25, 65, -46, 88, 105, 103, 117, 20, 97, 111, 15, 30, -12, 94, 62, -6, -103, -65, 68, 94, 95, -2, -65, -69, 95, -10, 123, 115, -5, 117, 64, -76, 74, 121, -116, 121, -29, -27, 76, -71, -65, -122, 83, 115, 23, 4, 8, -39};
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
    msg.setTimeStamp(0.09488484689350374);
    msg.setSource(56490U);
    msg.setSourceEntity(127U);
    msg.setDestination(46358U);
    msg.setDestinationEntity(209U);
    msg.type = 246U;
    msg.op = 86U;
    msg.request_id = 28819U;
    msg.plan_id.assign("ZQARHKCQLRXOEYPDITCFBPDGZRZHBDSIYMMAIFQNTTQKZFDMJNJQDYVGDWEKJNULCALRRWWNPTEE");
    msg.flags = 42241U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 20813U;
    tmp_msg_0.control_ent = 129U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 146U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.8376886011171076;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 88U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.6037509088291564;
    tmp_tmp_tmp_msg_0_0_1.z_units = 195U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.04975386499724643;
    tmp_tmp_msg_0_0.lon = 0.6067666076813064;
    tmp_tmp_msg_0_0.radius = 0.883537624358085;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 184U;
    tmp_msg_0.proximity = 196U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PAMHPTNQMUEYRPCWGNEILZXJJGHRBIDHXBATJBWHPEXUBYDPAMBQFVISGQKAUBDILRHQXNPJYYLUCX");

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
    msg.setTimeStamp(0.7235152005122868);
    msg.setSource(29357U);
    msg.setSourceEntity(148U);
    msg.setDestination(57183U);
    msg.setDestinationEntity(126U);
    msg.type = 185U;
    msg.op = 42U;
    msg.request_id = 50751U;
    msg.plan_id.assign("QFRBUYERVDRHQFNKYDPLHHGBJPHQDOWMMGMHMUBPBSIYIKH");
    msg.flags = 48679U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 32U;
    tmp_msg_0.longain = 0.7793177088907624;
    tmp_msg_0.latgain = 0.6195516008198885;
    tmp_msg_0.bondthick = 2756110023U;
    tmp_msg_0.leadgain = 0.516594244686802;
    tmp_msg_0.deconflgain = 0.2453863277302043;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KFSZYOPXUSGEHIYPHQLXGULECZKJZRIUQRWQKIUVAXBBWUTGVAPYGDECHSWIFBMHAKJHITZWGVDXKTVEYYFCYFIMVODTCNPCZRJLFNDQUKDLLTENPTRUQXYCVONKXNLABBBJIEBUMHWNJRFEQZNHWAJTKNPOMAOZXNKXVDCPOFIORBYGCQGDORBHXPJMHDUUHWREGKSERSSAFWXDFGWNJSLFJOIMJTVRTTCEQSCMPIMVGQOZMWPY");

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
    msg.setTimeStamp(0.4178775936696296);
    msg.setSource(57348U);
    msg.setSourceEntity(118U);
    msg.setDestination(29588U);
    msg.setDestinationEntity(1U);
    msg.type = 129U;
    msg.op = 108U;
    msg.request_id = 33338U;
    msg.plan_id.assign("CFDBJWDOLIQTHHNVLSBKDSNJGTAPGTXPCCXMUFCJERBHBAMSFZFRQBWZX");
    msg.flags = 57537U;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RXVFMWNQCMJKBIUUNFVAECXSMUSASUYCRHIQEJAHSGFBHWNTBKCDRGCEYGCWETRAXZFLHWYFWLDLQGHLIOJYVUSSMXQELBJDXBIMZFNYJWODYCISVKDNUDHCCOVQUGFJEABZGLMKEHOILLTTDTKDNZPPWHWBXPSTXHVEZDABVP");
    tmp_msg_0.feature_type = 26U;
    tmp_msg_0.rgb_red = 37U;
    tmp_msg_0.rgb_green = 107U;
    tmp_msg_0.rgb_blue = 90U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6420880008805464;
    tmp_tmp_msg_0_0.lon = 0.20086148750748656;
    tmp_tmp_msg_0_0.alt = 0.33055210097348897;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCUBOEKFZSVSNYNPRPYEZUQX");

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
    msg.setTimeStamp(0.9377694886224119);
    msg.setSource(54965U);
    msg.setSourceEntity(84U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(53U);
    msg.state = 120U;
    msg.plan_id.assign("ZQGRSIALOFQABQTDPJJJBJZXTGZFJXSIWEUGJXPMUBPETLOUMECPSWFQNHYBYPYCRCLAZVUVVXNGMRKTCYUHORZVEHEFFYEPMWGNDRWXCVKVZUQBFXFNDIZCGCKIWSDNPPDBJZCDGNDEOTKKMNCUYQRSDLKHKOKBKLRUNPNOGXFHHLXXGLVSLJMEWSTIYOTEQMUNWYUEDSXOWIOAGSTHAYTMYVDRASKMIJVWBBRCLZBVQFAAAHIJLTIA");
    msg.plan_eta = 1761241393;
    msg.plan_progress = 0.747244135643926;
    msg.man_id.assign("SKRVNTLVNGBEEWOCZOZGXTWSEXCUXNMRDQDZOQMRKRPEFSCWWKXSBSCCQZAKRUHUOIDJIKFMHFZOECDJFPVFRGTLNIVEHPTLDZEPFBTHYUASBNVEJGKUDRAOLFGQTCNQXLAOMLYFPUVIABMWNUVDSTPJRKJX");
    msg.man_type = 31390U;
    msg.man_eta = -1819249538;
    msg.last_outcome = 134U;

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
    msg.setTimeStamp(0.3993008190207482);
    msg.setSource(28855U);
    msg.setSourceEntity(35U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(183U);
    msg.state = 20U;
    msg.plan_id.assign("NYGDHWYJHXMHWLPXFDTSFEGSBYQCQFSIQDRHZXRAUJAEWGLGVUFIWEKHPWWMIZYVLZRNJPUCHMDJOLIDCVTKRWNWENYFTLXPOGQ");
    msg.plan_eta = -1442266455;
    msg.plan_progress = 0.3293321733415565;
    msg.man_id.assign("KJBCEVKOTOZBHYMDEDZCJFQTXPOKAIAFDX");
    msg.man_type = 48875U;
    msg.man_eta = -1577351696;
    msg.last_outcome = 28U;

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
    msg.setTimeStamp(0.9820498869863346);
    msg.setSource(54876U);
    msg.setSourceEntity(0U);
    msg.setDestination(27043U);
    msg.setDestinationEntity(236U);
    msg.state = 13U;
    msg.plan_id.assign("OEWJIBRAQNDDZDOCSCZFDFDICTATEGPXOICNDETFQUJLJDLPPMVBQRXNALWHFBRWFLHGIAXOSPWRYVIGGEKEUVWKBGFQHZMTLHWUMFEYBAHGTUYBKPZSQGVPVTKKSIPWOMTAEHRUURWYCZAANJNOYSJOZH");
    msg.plan_eta = -1890781276;
    msg.plan_progress = 0.6672937351891699;
    msg.man_id.assign("VWTBEBTJSPSEWMDBFNAZLJMDTKPQMKCQLBKIHMFOZVGKUWTRGVNCVNGEXEVJSFHXJCBFOKMSKSHFVUELRXRPAZEYKYRSRFEAOOMLRSSJAHTATHTXYTELKUVYJNIDXMDNIPECRGNBOPXPYIZZOUEZLDYDWAKYJXA");
    msg.man_type = 284U;
    msg.man_eta = -1787730677;
    msg.last_outcome = 227U;

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
    msg.setTimeStamp(0.19182557703612269);
    msg.setSource(31006U);
    msg.setSourceEntity(92U);
    msg.setDestination(30718U);
    msg.setDestinationEntity(8U);
    msg.name.assign("HRFQGAJVBFTXRIYWRFLPUAAIHVHFSYXFHBHSDBHKODBPKMAZJRCCZJGQGTPOSTIASPFXAOLMWHENSCVINOCUHGNNQDUIGKKEPJKILIYWUUQLDQUNHNKEQWPPVGTDOHRRNKZCVQSJDMZJREMOZIZBWWWFXBTFGQPSVMKDZYBBUTARVOJXFCCUDMNWCBKVEYMKQOMECMSXZQYDTATCIJSJZJSXVPVOEWOLGNREILLGMFDEBZTTLXXEYYLAUYPUNX");
    msg.value.assign("LXOIPGTSXORTUSHGPCBQRT");
    msg.type = 64U;
    msg.access = 71U;

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
    msg.setTimeStamp(0.5752292150896651);
    msg.setSource(51835U);
    msg.setSourceEntity(11U);
    msg.setDestination(21373U);
    msg.setDestinationEntity(153U);
    msg.name.assign("THNDGWUINMVLLQ");
    msg.value.assign("LDSFWVKMYUYFETXQRMGTQKNPIPNIKXPRDQPXMWWKOMNLIQOTPMOAGSOBSDIUHTGSXACFLTFBRMRFPJEJCRSVFUFFUIXRVCTYPUWOHVKDBVGQCGPRCUAPJDEKZASVKBHDBHHDMLIEURYLBZJNCJEBZGVHQCSGYSQISNDXAXZKPZVJFWKXWNEIFYWTASOXJCZMEDY");
    msg.type = 160U;
    msg.access = 143U;

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
    msg.setTimeStamp(0.30778983138437743);
    msg.setSource(8883U);
    msg.setSourceEntity(54U);
    msg.setDestination(54737U);
    msg.setDestinationEntity(174U);
    msg.name.assign("TVSGAEUPWYGTDIFEZNFQZPWRJDVLLFHISUAISIJPCKWJJVNEDELNHMJZPOPBWMREHXAMAQLYGFELVGTLJDLSKCYUKHCQCK");
    msg.value.assign("KTPCLHUZDGBPJRUCQNMZAEQQBWIEZMWRFVKXRDALUYINRBKBFHJKKQFVDGFHWNLUXPQSMFHJIQZJGKLMSJPHOVVREIBBWMZYJMMXCGIWDCRCSTNECTWRGLXYSPZWEHOFVSOKAQPHFDWEOXBPJSUJQTSVOCEILTJBHLZGUDNLAOBVKEGCPUFGDDALQXQNOFMSSGACKWXTGDYPATVMNWNAJAKAYEYUVR");
    msg.type = 217U;
    msg.access = 134U;

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
    msg.setTimeStamp(0.15609051093084403);
    msg.setSource(1640U);
    msg.setSourceEntity(184U);
    msg.setDestination(39483U);
    msg.setDestinationEntity(0U);
    msg.cmd = 193U;
    msg.op = 227U;
    msg.plan_id.assign("BNCPABDSJUSVHCGDHPTRKEWZOMDZTUJCLZQTGBLMQIAVHTYKFBAKLSIOLWRDEJLJFJRGYUPDEHLGWOOLCZXXSNJTEPNRWFZMIBKFEYRZNOCYQYDHESPIRWTOQQUFFAPFHUSGJXFVZVIVTEXHBKCNQMNVPEOUWSTCVRWABDMQYCVLYKUKFRHAWVRQDGKPDAGTZTXYORAXYBSMOU");
    msg.params.assign("YFOMJRVKEDRIODINGPNFQPIWXXJMQBOURHXUINQEGCGSPOUQAQVPWBMHARSEKDQDVZDQCJZLFUDIHKUE");

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
    msg.setTimeStamp(0.36937330015325864);
    msg.setSource(18975U);
    msg.setSourceEntity(86U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(147U);
    msg.cmd = 129U;
    msg.op = 147U;
    msg.plan_id.assign("ICLATMCYNZYUIMQJWVJXPCPCJWTAFVAMTSGDQAZEVZKRQRIHPXSFWSBVZFSJCGRKLKGXXFNJXQDSOLXYSJEMBHNYOSONULDIUBAOCQXCLDIGDUSRKVFKZEEHCJWKUVXFQUIBEYPODRRUVGLBUAFMUIEZKKHYCLWDOOHNHXTFMZUFKNLRSB");
    msg.params.assign("SQFSWIQFXDHTUECDAMTVJQLSJERJDWKGHUABPBONEUCKQERZYUOQZFMNXYWCLBZTXFXTKODYIBVMMWZROUOQLTOBENIXWFYROLWMPSRVMKJXJUQPASVLUVLZZIOYMWFLYTTGCAHNCXZWITJKYYAHHIDKGCJGFEVNLJDXHSWUSOTPASNZIYKRGSDEBZRVPEGHVTYPEPUDJXWNFORMQVHARBICBANDGNL");

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
    msg.setTimeStamp(0.01675622151731837);
    msg.setSource(24630U);
    msg.setSourceEntity(92U);
    msg.setDestination(60643U);
    msg.setDestinationEntity(146U);
    msg.cmd = 221U;
    msg.op = 190U;
    msg.plan_id.assign("KNQQUEGHYANFPNLXFLJXGDMASBYZCQHXGONZTTRWIHYHLWPACCVXIIISEVPWSNNZDBOUJLFFDRUXPOEGOHYIGAKPSRKQVUTNXWUUELGKBRTCRQJPPMMVCRNZBTIRIOKHMSHGJZDTFLWIZAUBDZBLMDZEHWFFEDQFYPJAMAUKES");
    msg.params.assign("CBWNFCIIDRKYWZCUGHIEDNDALFAZJOIXPEYSITMPHDIKDTGTLFWJNTIRSVQYERZUTVDVQCOJLRLWCHKOGDPKHRWMFVMNVWQCBSJYUVMNTEBKQKGTPNHAOLLWMQUKXSEEUIUGMBVDDQIMSTYQBLXHUVKNWZZFZFGYQXFSYTPOCOPJXKBHXPHGDWRJSIEBLRHXJNLHBAJVUAGUGOGCRQLO");

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
    msg.setTimeStamp(0.10372069920525129);
    msg.setSource(52498U);
    msg.setSourceEntity(135U);
    msg.setDestination(42780U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("NSDLVHFUSMNZCUBBMJRGNEOWBQUEMYUOOPTISQZHJYFOXXLIWGCSBKGTGHYMZPVRFWBPTBITWTYAPMQGTNWKREYFXIERIQMQAEBKPJKTSFSZHYALXXEXYMJSNXHNTYAEBJHLKMDOHOCDCZCGDJIKFBASLUAEIUJRGNWCCVPJESLUKDNUGFQTDZZXQEFNWAKYOASGJLVANPWKXVUIZVLIDCW");
    msg.op = 225U;
    msg.lat = 0.2926259249904971;
    msg.lon = 0.3254465648008793;
    msg.height = 0.8324473874957398;
    msg.x = 0.3753243801392786;
    msg.y = 0.6086622634675091;
    msg.z = 0.742206365096839;
    msg.phi = 0.09287110562784018;
    msg.theta = 0.708329988387905;
    msg.psi = 0.41064773513865493;
    msg.vx = 0.8704827534859334;
    msg.vy = 0.639891552569394;
    msg.vz = 0.6688690349746198;
    msg.p = 0.2637383926036573;
    msg.q = 0.22562653670938704;
    msg.r = 0.9341897539475346;
    msg.svx = 0.8913604462707763;
    msg.svy = 0.7964114940278374;
    msg.svz = 0.2782916449046624;

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
    msg.setTimeStamp(0.7631786809959291);
    msg.setSource(26422U);
    msg.setSourceEntity(22U);
    msg.setDestination(610U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("ZTLWNTVTAFZBQAXUUAEBPVRPYLGJSRNEYWOYGZJMPTCWDJSAFUYAVHEIDESZPLSQLXGHXGYHJKEFXXXQARXBKHIYWNNVQITOOVKLUQEGSVBCAMRWBMRZBHXZJLCDRADGPTKZACKUIOMMKHNNPWKFHWQQIBOOJNMETPMUMJWDVLQUNFLUFBRREFJIWXKTCQIXOPSYICZKSBCBZIYGZLDJVJUVSHFCSNSYUEHWIMDFGYRVDHPGTGTAOM");
    msg.op = 200U;
    msg.lat = 0.9576394435066402;
    msg.lon = 0.6429810635450067;
    msg.height = 0.1727152225094536;
    msg.x = 0.14724205494184528;
    msg.y = 0.8707050852742869;
    msg.z = 0.3183363098368548;
    msg.phi = 0.3856237627452036;
    msg.theta = 0.5581478670274751;
    msg.psi = 0.5812654093658529;
    msg.vx = 0.3321282781394068;
    msg.vy = 0.7450930430313802;
    msg.vz = 0.4402169501599529;
    msg.p = 0.9837427082019057;
    msg.q = 0.8453899666338665;
    msg.r = 0.03989974864690915;
    msg.svx = 0.004255155614516504;
    msg.svy = 0.34948658629102947;
    msg.svz = 0.6896658692190619;

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
    msg.setTimeStamp(0.2570456914947259);
    msg.setSource(5215U);
    msg.setSourceEntity(76U);
    msg.setDestination(15282U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("GIQHMTHASDLIUVWGEYRXDUZFJNYBQJLZARFRFIFERHJXAIBBJBOJNVZZOMRNNNCFXOYEXOASFKWMCHENYXUXBRPOYYHCWYAYKQEVCDCVPJNAGJCZTFAUDWIVNDRATLPROLWQPF");
    msg.op = 168U;
    msg.lat = 0.5894032237818798;
    msg.lon = 0.6723011102603453;
    msg.height = 0.6050084138926503;
    msg.x = 0.0309102368237838;
    msg.y = 0.3761274560118667;
    msg.z = 0.13852138360031152;
    msg.phi = 0.1688749501506226;
    msg.theta = 0.12867315633422327;
    msg.psi = 0.5192770067815157;
    msg.vx = 0.39107082137755766;
    msg.vy = 0.35079919367030465;
    msg.vz = 0.7689396809741931;
    msg.p = 0.5554161289220212;
    msg.q = 0.7632388078559428;
    msg.r = 0.4162266279082484;
    msg.svx = 0.9918873416343115;
    msg.svy = 0.2478077187354728;
    msg.svz = 0.5669741519521723;

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
    msg.setTimeStamp(0.2887456395177369);
    msg.setSource(48526U);
    msg.setSourceEntity(5U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("IFFAUINYFTOYHAORCBOBXJDDSZAACAICSKNWBFYHYIGVXNNXCCPFYWMRXGGDZPQTQHXJJSLBERNHWWPKQKBXWGCGUZTUKNFTJGLBXQUWVUUVRMFAZCJYVLDMOORECMSLQWPVDMYSXEWDDRKPSAORVIKLOIHZBGZMLVHILBWGUKNGIETHENDLRMFLHYQXTAZWKPUSBMZTIPAQOTFKEEPYDVUHJPLEPMGNAMEJKFOCEJRBSRSVQU");
    msg.type = 95U;
    msg.properties = 30U;
    msg.durations.assign("DNQUUGLRUJVIVTYEFZATQWGNVRIHZYKXZSPHVCSNPKFVGTDPOGJVEMUBFLSFAQIYXEWMSSTFXBRKKUVALEQMLOXLGZIXRJHZMUWJOKMBFJOONGCUMPIZISOESYDPAXQPLVPVHHYMABYCAQODZTEGTHKURPCLJBKHANOUI");
    msg.distances.assign("ADELKGYGTVJZBKZAIDXBGPCULGFKVMFDBLYQOTVOMWGKJNCZVCXYANQRVIPUMYNAUQTNRRFHKMBYJQLCBJOHUPDJVOSLMAIFBOGCVXYPODBFUEPEIVWDHZWHYRDCIBIEEAAXYAOXJKHKPSNKFCOWWQUUZRHIHSJLSHJXWPLKRHFZSFISNNQTEXORFTRMTOYDR");
    msg.actions.assign("POKJLYVHSVMMGXCYQWJEUFSNENJHHYRKWPGAGCFTLQHNHLQODALCSESYAUCXFPTXRYOFKOMIAYCRONRPUSXRDNIQZMMIUSQTJHBOAQVBKMHIMEBDZCHFOLQTBFIT");
    msg.fuel.assign("YLCKFHRMCXWQGZYKNALIFEAWISOQCPWEBBWNGDLEEDEFSQFWJACDMCOAZTUFWGBMGVFCHTPASPDXHZYCNXAIQLJ");

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
    msg.setTimeStamp(0.31052853766853294);
    msg.setSource(40500U);
    msg.setSourceEntity(15U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("YOPYEIEXNLJWBSJETLSMMURGXTOCPQMNQRAUQKGDWVNWPKSMHUZDJTLDGLUBCAVJZNFCNCPYJRXIYTDFNPDXIGXHZAIEQBHOSDFOSNGJKLOHOFAMBVEZVVUMTKAIAWHBITHBSECTRCXXKPKDIWH");
    msg.type = 159U;
    msg.properties = 9U;
    msg.durations.assign("NFAXPVFASQEZCGJPDKRLPFHLPTWAVFRLROKVVBUUZAHCHKQ");
    msg.distances.assign("PALTWRBPOZEXLBGNXUFSOTYTNNTJCAORSFNLORJRUGLPMJZHUUTXNOEIJDWIFQHNUYIVPXIZNKYBFAHHCYLFDYIEEGUDKODBMOSSJQQRASJGYXWZPMTPUZMYPXCMYHEPYEWJGVQKCMZVAZKEXRWBZDAMJVVSTWPOTWNRMFCDCKUXAQOZIFVNOEYAFCGKHKQHVLGLFWHEABKHQWVHMUWCNA");
    msg.actions.assign("TBGJVDOZFDUSO");
    msg.fuel.assign("QXIGTOPNIAVIVQFHULWYZFDCCKSUPCRPVPYELPALGWTEUPFHSVXLDQUDFIEJAONBRTXMOKMITZMPAJYMBWDYUFZVJMTVGBLCTCFRIEOHTBGSLICVVSFCQLDRIGNCFKJRZQKHCUXWQOERQYSKJYTKWHKRETBZXMLRNMOMYZAVVHOWNUXXBAGGEHGDJAKEUZNGWWKQSRLPWZSSBOQUYNABDXFEYX");

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
    msg.setTimeStamp(0.6887240905799732);
    msg.setSource(22352U);
    msg.setSourceEntity(142U);
    msg.setDestination(14893U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("YNGXWSGQTXWLYJVMLEMOTCKGWDFDTUPOVQHPZDITHCRYMQNPXOLDZCPOTAJWNBAXURZCYQIBBWKSZKSZKVHRZUKBHCSBRMBTAEUHRXYVGWAUISUZVHNNLWYAPWGBMLFWVMCYPWJOVODAPORQATAENLXBVDIEDEQXEXHMXIGKBYYRGTQSSJFUOMCFCVFNHPFTCOJIELGDBZNJOIQRQXQTZSFRRKLEEJJKDHFSJKIULKN");
    msg.type = 128U;
    msg.properties = 201U;
    msg.durations.assign("RCCYNOCMQDTGGZTUIKYTFWPIXNKHAEHSQMAOZJJZOPRSJXGPAQPLSDFYSQLNKFFSLPGUKTMGMAVBQDAEWWUBENSPFKNXJVLJRAXSHJAGPLERBQPYRXGFZEKBWCFVENBEDYIQAHSUZBNECHJZLXVEFKIUNJQSBUDHZOJAIIYMGGZDZWYHLPWOIHHAVOMBZPCCVWTQDXVGUNRLITTTOMLRCCBYOVXXRNFSJM");
    msg.distances.assign("MHLWLBANLVVYCJIXAILHSEPTBKKJJSGXPSVCDWTOTJTUNIOJOBKFGDFOSYGNTHEUHZBDTIFSTZHCMFJDRVAWEZAHIQQQXFRWGCTUFLMZMQSGSYCXPQBLNTCXOWCUMBZCDXFUQDUAHZNKGIQKAMRNURAEOBQDAPKOYWV");
    msg.actions.assign("CEUUSJKDCXSQUBOZRDPTWSUGGOQFPBWOUSMIPPUBDMQNKBLZGHVVEZKSJFZYDLZDMAYRIYRZKXNVRLRKWUVHGESBYZSCNQJEJFHD");
    msg.fuel.assign("QVEMIVJVAGFSRKFTLYJTZAIEMMBXQKRWKYCVDNBCEBBTOOKUPLISCM");

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
    msg.setTimeStamp(0.21579279874332913);
    msg.setSource(30648U);
    msg.setSourceEntity(19U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.9566162804929349;
    msg.lon = 0.008874431949057682;
    msg.depth = 0.8618933768801519;
    msg.roll = 0.7317337500523954;
    msg.pitch = 0.2891737314908982;
    msg.yaw = 0.8754723431008571;
    msg.rcp_time = 0.2065940709581371;
    msg.sid.assign("PUARCSNOWSYLLBSZX");
    msg.s_type = 127U;

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
    msg.setTimeStamp(0.8639142327919453);
    msg.setSource(60578U);
    msg.setSourceEntity(62U);
    msg.setDestination(25610U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.08137930901327328;
    msg.lon = 0.6787309254298052;
    msg.depth = 0.3478864606684311;
    msg.roll = 0.796864056855025;
    msg.pitch = 0.7627057216698924;
    msg.yaw = 0.1555932848008309;
    msg.rcp_time = 0.006492846872793168;
    msg.sid.assign("GKBPCTNJPQMWFXGEJCLNODHTBAHQMRMBRRVOUHWLBMFDFMRIISXDZZGFJVIKQEBDJXJZEYLUHURHJGEUZIIWWFDXTSP");
    msg.s_type = 142U;

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
    msg.setTimeStamp(0.9682445476297781);
    msg.setSource(31462U);
    msg.setSourceEntity(168U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6912610479674703;
    msg.lon = 0.31813176489702844;
    msg.depth = 0.5543961122408281;
    msg.roll = 0.5021234471310201;
    msg.pitch = 0.459929394905236;
    msg.yaw = 0.8579734339846307;
    msg.rcp_time = 0.6135804997041625;
    msg.sid.assign("TOSSKWBNXOULGPUXYXOGTYELYQPEUWCCLBKFGIIJSAJNKEBFUDMXSWRSXOLHYZOSIVUZTBMNLOEADJLFOBZKUANASSVDJACCNHUQHNFWHPJFRBQAHBPENIVVZDAEKCJMMRAIMNVCBPXXFEMDVWJWKXCFZJAVHGYVIWQHFFUQZEHLGG");
    msg.s_type = 63U;

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
    msg.setTimeStamp(0.8123658766103056);
    msg.setSource(13166U);
    msg.setSourceEntity(150U);
    msg.setDestination(1320U);
    msg.setDestinationEntity(71U);
    msg.id.assign("URIZZQUDLPMXLMURMCDKVGLTRYXRDXASECQZYNOXNBDWXZLNWRTNGMQHSDXJTFYCOKN");
    msg.sensor_class.assign("FDDEQILTZYBAOMEBKKZZPOUNNNSQSFJPAIGFRWGAGPFOACUORWECELBQAMJHJCLAMYSECMPKEXEPNPHIYTVMAQDKJSLDSHTBZFBYPCHUUSUFSOJUSTIUPMFGVDRVQZJZURLXHV");
    msg.lat = 0.4994463043762274;
    msg.lon = 0.37676820574985137;
    msg.alt = 0.7318417553900566;
    msg.heading = 0.8896024603402858;
    msg.data.assign("FCHBZEWZSQWVEQJXRTPEDWJDLPKYXJSJGYOTAZQOMOJNUD");

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
    msg.setTimeStamp(0.997274791445927);
    msg.setSource(3029U);
    msg.setSourceEntity(109U);
    msg.setDestination(673U);
    msg.setDestinationEntity(80U);
    msg.id.assign("FIPWNXLQPFXMGZEIGTSYDLDPEKKSFHLTIYEMHQOTJBUYZRBQAKWQHTEJILGCVEVURIAVKPNXGBWSKJCXBQLYMOLUFZUEWQHNROOFLBTULDPNRRYQSZYGLCGFDWHWOOXZYMHNSAKJOLTCHAEVAXCCOCSWETDBRXFZYJJDVJAXZVOSPSVTQWVICRKCIRDUJRKQYIJOTSTAIZBUXWZNPEHPRGSFCMNBNGEQYMNFDAMWGZMGUVNIFDMVHAKJAMD");
    msg.sensor_class.assign("VHEJXONYORAFKFSYN");
    msg.lat = 0.7122676629976559;
    msg.lon = 0.4590625854336915;
    msg.alt = 0.5969551343154935;
    msg.heading = 0.9658661629088076;
    msg.data.assign("ZKWBTEPAMNQURKKSDMNDCZYDYVMOWXPXDYQKCASMGIMLCOOIVKOFRQGUPUWPNSAFSWQTSBVRGUPUDRKGMWRHJODVQLHZPQJYMDCHVEBEIGZANVOIHCLPRFUEJMGSYADTXWDXWULACENWFICEZTJZSJEFHFGKXTAEBXFRTDLIXTYFLKFTGYXVVREZPAUCNWWFRPSLSOTHOANQBINYKMZUJJYGCISQR");

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
    msg.setTimeStamp(0.5468616077018283);
    msg.setSource(63118U);
    msg.setSourceEntity(25U);
    msg.setDestination(36328U);
    msg.setDestinationEntity(112U);
    msg.id.assign("ZXRLAYDGLKSFXFGTTCJQCYRPVSJQAHUDFMPONLCAGGJWBWKJVNRAXGSSIZDTBFSTOROHCFTECQURHWEOKBMDNVDUQFGVNEZJOPRUPHBSPCYQCADLRMIVBNLXWTOZGTLVKQEQLISTIAMEPXBWMSXZUERFDKIVXUBLPTMBBQXKWU");
    msg.sensor_class.assign("BTXRHEBMNQDUXRCAWSVODICRJUXIQOPATMXVZFFACWSILNYWDVCGPWIHBHGONFCIYJJSAFQEEOSBMANAGEMXZYPEUUYFDTNAROBTVMYVXUORFDMWZDHSQSCQNKKVZPKGRXOZKLHQMYNCYKBNBCWPKTMFHHCQQFJUFWVGSURPLWJRIRSATGKGRPLBBLMWZEJQEDZIKOZXJIIXJOYDFLUNYSLVTECVETTGIAPGQLKOXSVUYPZBJGHAZ");
    msg.lat = 0.14051385058350085;
    msg.lon = 0.44196238098343543;
    msg.alt = 0.13923949778172584;
    msg.heading = 0.40423111229743847;
    msg.data.assign("DMKIJIGHMGEWYFHEVGPWQHZFVWZKOZETJNUEPFIABRWLMBRUADNPTWOKTJXHCZPMWZVJNMHFNUQCMYKXOXNCGYPUBCZNMRRQSDVHHZUSSJXQJFNUPCOZXYFYPEALDASZOYLCSVWDPQGROLKUVIHUXBNFTGYVERPCXPKBKWORQBOEZVDLVEALCGAOGLJSOMJVKD");

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
    msg.setTimeStamp(0.7016062377428758);
    msg.setSource(28786U);
    msg.setSourceEntity(174U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(235U);
    msg.id.assign("GKUKHMGVBSFXYXTZPYSUVDXWABYCUKEQQZKNZOZUSHEEWKPVNHSGMLHKBFXSXQYYWIMYAEIPGQEZEUWTTCQQAITCSCIYL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QJNUAASCQYNFLUUPUZUZPJKDDINMWOSDXRRVFYEJGPHTCFRTVQRSSHMMIJWPVFHCHZJ");
    tmp_msg_0.feature_type = 109U;
    tmp_msg_0.rgb_red = 181U;
    tmp_msg_0.rgb_green = 117U;
    tmp_msg_0.rgb_blue = 139U;
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
    msg.setTimeStamp(0.5547769283000775);
    msg.setSource(63947U);
    msg.setSourceEntity(112U);
    msg.setDestination(12751U);
    msg.setDestinationEntity(142U);
    msg.id.assign("LSDPCYTQDMAFFHCEKVNJLSVAORMIAMGPAZTMEBZEPSQNLVOKDRKHKERJUEPGVQMUWNDSMTBPUWOXXHQCLQOBIRCHOUMOBRATUI");

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
    msg.setTimeStamp(0.3387295742756603);
    msg.setSource(1411U);
    msg.setSourceEntity(190U);
    msg.setDestination(15076U);
    msg.setDestinationEntity(249U);
    msg.id.assign("HXHEFYBJGQWITDHIZUXLOFYCKAUAUASOJIXUYETFPRMWQOBOCWMYRTFXGQYVQYETPERHFSRYCHSDGQQKHUFGLNZJLOHHDNVMISKLNIRAVKGDXBSBYKCIOGYTKRALCTEPWCMIRUJGPISDXZLUDWHQEOSBEJEFQBZXZCXOLUDKIBJNDMHIZPMJAPAUEBGWWPPLTZAJWBFEYVBSRVAMVLKZNLRTNMVAMWXK");

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
    msg.setTimeStamp(0.7664406847560246);
    msg.setSource(35359U);
    msg.setSourceEntity(234U);
    msg.setDestination(40092U);
    msg.setDestinationEntity(162U);
    msg.id.assign("HQVNRIKHBJWMYGJRQZWYKQTQUPNDGNFDGXISWL");
    msg.feature_type = 150U;
    msg.rgb_red = 31U;
    msg.rgb_green = 247U;
    msg.rgb_blue = 189U;

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
    msg.setTimeStamp(0.8487295452259156);
    msg.setSource(40399U);
    msg.setSourceEntity(134U);
    msg.setDestination(46467U);
    msg.setDestinationEntity(93U);
    msg.id.assign("HXHLTSIJFAGAUHKLYWEDHXSFCFVNHTNTULLYEFDEMSWNMWAVCGJGJAIYQNDUKZUVEVAOAZJKCBQKNJFWPGZCJWIVOPBXFPZGSTXZLJMIPMQOLPTGJYCHTPFBIKUZGUYBKUVXRLSMPEXBVMMTYZODDFYZJRHGPPKXFOBBSIGZMHIBMXRAAITSBZNQOUCLRDJNQOVDOEWELSCDYOYU");
    msg.feature_type = 176U;
    msg.rgb_red = 28U;
    msg.rgb_green = 42U;
    msg.rgb_blue = 33U;

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
    msg.setTimeStamp(0.6370354947894165);
    msg.setSource(43186U);
    msg.setSourceEntity(164U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(205U);
    msg.id.assign("GITSYDKKIASUCUHWAZWZWEQMZOITZCWUIYHDP");
    msg.feature_type = 238U;
    msg.rgb_red = 244U;
    msg.rgb_green = 242U;
    msg.rgb_blue = 56U;

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
    msg.setTimeStamp(0.44963138990727014);
    msg.setSource(41136U);
    msg.setSourceEntity(133U);
    msg.setDestination(32093U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.3116777882195261;
    msg.lon = 0.7168425038098104;
    msg.alt = 0.8871440870597586;

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
    msg.setTimeStamp(0.7608156435128273);
    msg.setSource(23013U);
    msg.setSourceEntity(29U);
    msg.setDestination(39404U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.86275738298777;
    msg.lon = 0.14739103085217886;
    msg.alt = 0.11339581602678084;

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
    msg.setTimeStamp(0.4980059636679015);
    msg.setSource(16779U);
    msg.setSourceEntity(82U);
    msg.setDestination(2295U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.6270129620025225;
    msg.lon = 0.38766769296233416;
    msg.alt = 0.6411531907078636;

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
    msg.setTimeStamp(0.1954301453488425);
    msg.setSource(64814U);
    msg.setSourceEntity(146U);
    msg.setDestination(18334U);
    msg.setDestinationEntity(200U);
    msg.type = 180U;
    msg.id.assign("HRWTXZKTLOJAHYUZIMNQKUBPNQJLXMLDKLEPZOBPBJSLXIWAVEWBZEEIZJIHIHYVNKXBDZRAMODYCRRXLWUCSLSYRNDFTYQQNAQDFEZFVYGCTNTKSQBQIVOCYMCVGOOMUPIRKKXRUNJTEGABXGWZBMVGJDDGGWCORDUAPPLMEPGTFPATWWFBSSXLEHKEBUHJCYTL");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("EQHJLCHCRKGEJBRTQHWZWGULKPJYPCTFLRJVMYSOXBMANGWALFGSJUN");
    tmp_msg_0.lat = 0.9202127374364844;
    tmp_msg_0.lon = 0.83290145124455;
    tmp_msg_0.z = 0.6758936006820384;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.cog = 0.6369983232518353;
    tmp_msg_0.sog = 0.5147544235209125;
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
    msg.setTimeStamp(0.6276344811010592);
    msg.setSource(7328U);
    msg.setSourceEntity(193U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(67U);
    msg.type = 75U;
    msg.id.assign("TZISPFUZLUWPADQMIHMIGOTMQADEDQKDRBILPBGOVAKWYXRUFGCJTGHSPFAMLNVYJAFPE");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 95U;
    tmp_msg_0.tas2acc_pgain = 0.00873908067547935;
    tmp_msg_0.bank2p_pgain = 0.653186100169314;
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
    msg.setTimeStamp(0.7863881475813724);
    msg.setSource(59930U);
    msg.setSourceEntity(178U);
    msg.setDestination(9622U);
    msg.setDestinationEntity(106U);
    msg.type = 134U;
    msg.id.assign("OFGXDCPVUTAIKFFLMOYKOWAPFHLGLNMOAELRYPQHKZUZIWTNZHWAKLNOSMVGWASQLMWAFPXNCUTXPUEDQMMNFERVHACBJEFWPHIVWRRFKLJGUNFBGDBQBUKJNSC");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.0023355650962584296);
    msg.setSource(39027U);
    msg.setSourceEntity(181U);
    msg.setDestination(42213U);
    msg.setDestinationEntity(223U);
    msg.localname.assign("KINCBFDNTHYDLDGBGRPFMJILPNBCUSCWZSAATNFSWKVIDYVLUJHJLMCYXMMZAARPLNUNKFZCOTZHRFNGPHBCEWZIVGKKPTQQZHHJBFKUIUHTYHOYOZNEXFQ");

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
    msg.setTimeStamp(0.00044749422818846085);
    msg.setSource(34295U);
    msg.setSourceEntity(38U);
    msg.setDestination(43327U);
    msg.setDestinationEntity(199U);
    msg.localname.assign("WIEZTQOSUAISRJJLCEKAWNLXXWKMTMIIURDF");

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
    msg.setTimeStamp(0.9774883112584514);
    msg.setSource(63594U);
    msg.setSourceEntity(192U);
    msg.setDestination(50955U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("GKRMTWVDAHMTVOIWTNSSYXZELZQQPXZQQOTHLVFFRJULVLRMDAFSMAWNGCYIPRBQRJCGNALDVCUIAECSNLYXJWJOENEDHTEXYDJJBZUJPDGWBBHLUKWKMMQGKPTULVCAZWMXJJCPSYHBXZGTWYIESNRBEOCKLRZEFPDNEUVHR");

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
    msg.setTimeStamp(0.7550021877616008);
    msg.setSource(32861U);
    msg.setSourceEntity(192U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("QFSEOJQUYCUBYJCJETYNISFORVMDBTRXCINZWFGGCPLQGCPBHLDSGYBDVSCPTVRCWNYMZUSFWKVDVTTWNRADOBSRKPBPUDHPGAMGAICOTZHFIILXDRTETUSODQVGKXVMUMHBILNZLQIESJOOJBULOXMQKZGSXVIDEYYUTVKKJMGABEQEYZHLIPEMJFLMOEZWQIFLVKCPHQNWYJSHZWHFRNPAXNLXWRZNQMDNRF");
    msg.predicate.assign("GNFRMQHMNGRLLKH");
    msg.attributes.assign("NMQSWPWUKCIFPHQWBFEXSQRRDTMGWCGVAXFVZPEXUEWFPLPANSFVTHVQLNOEWYMOUVBNZCAOCLGGGIFIMKBOLXSVDOADKKEDNDNACGXHCFBFZBILRGTJGRHKVOTKPXTWRJTQYCJAAKVRMCYJOMXUTDQZAJKUQWSNTXTSBMANPDMIZKYEHYESNHLYJCLINJLWYEUURSJDELFHDUMZXZRIABB");

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
    msg.setTimeStamp(0.24051296222272545);
    msg.setSource(3519U);
    msg.setSourceEntity(84U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("HKQWJUWYNETUHHYVQRAZHTCJBDXIJJSHDOXWBQYIXEXBWRISMKBKELMZZERNOODFMIGRYFOPNGYPTH");
    msg.predicate.assign("SAMCJKWAXAMDFPIXVPNFRUMDMQGPOBTMWTMITPVFLOQXGBSCBHSQXCWOGETNVKXFWWUZUCQWIIGKOQHJOSRVYPTYTYISOVNEASDJGMCNEFRRHRVJCDYZMDWBIKWLLNXPKQJJUACCBSEKYMULETYBVFDJQGGBJNZNBLLRDVAHPLQASSSQKHHFYXHXOBKBOCARIVITJZRDEHEXZYAD");
    msg.attributes.assign("JPDXYAAYZMBAUQKFKVPTYSSBTIFNXMTIFSSYOCAHNHAZBEWGPJKDGOKNUDIREQCFPOVFLUGAJXCKQWVRTFEZITKEJQVZHMVSZORAJTXZIMXCFFGJWDRVQSIKMBNXZLEXLOLWUJKZRGFUOVONBHRVXGCOJKRCPWEMPBULUEASNIYM");

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
    msg.setTimeStamp(0.7763519599147443);
    msg.setSource(22728U);
    msg.setSourceEntity(160U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("RFQYFRMWVVGGBILZLTDCWYMDTVLIOOIKUIAHPGTZDRRUVUSHAKHAJHMSNLPLIYJENKYDXMVJHKUKLPPECDWHNAJEMIDFFNPJXVTUSYBQTEYXGEZCGLCPTNWRAWROZQFCKYCXMWBOWQJNSTKMQJALSPPXJQAGZHGRRIWKJOYKSP");
    msg.predicate.assign("SBWDWEJUQXWGZTREFLCPPEYBBJ");
    msg.attributes.assign("JWOSKBLWVWRMZELJHGRYTWFLVVUHZXRISTTMOJVOOFRUMKDDLZRXSAGBADOPSXRCTWVXKFGQUQPIPEMPHRAHPWIEGSJYA");

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
    msg.setTimeStamp(0.02117991861700974);
    msg.setSource(40695U);
    msg.setSourceEntity(140U);
    msg.setDestination(35246U);
    msg.setDestinationEntity(17U);
    msg.command = 23U;
    msg.goal_id.assign("KBNPPCNEWGMODKFDFSZOXSXQUFORYAVNXZXBCYFVNAGZPEKTEERVDEEOYOVNBCKHUWRKSILCDHDLVTCIQLPQGJBMJABDJTKKXAHBVDHNUELRZGXJUBFZFYLCMHWIOPQCSSFERBXIQJIPWCMYELZQYVAUGTVNPUDJKRXSKGWJWOZLTPMBNBYUHHCFIYLZMLGAFSHQSIEWQUJHIU");
    msg.goal_xml.assign("CXBUVULQFTTBZYTNYWGMNPFIMVMCZMPDZBRPQSHIFNKEOSOPHJKYMZRFPKBEKKCFG");

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
    msg.setTimeStamp(0.06271976909359);
    msg.setSource(64909U);
    msg.setSourceEntity(222U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(223U);
    msg.command = 220U;
    msg.goal_id.assign("TWCQOVPKCROOPXIXEWUDAZANVSHRREQZDJGYZLDEKQZJHCXSMQAZLQNTWPTIMVNYGWRNMIDJXNIHYRPCCCONASMTZPCWSXIAVNQKOFLFFADTBEOPEITXKU");
    msg.goal_xml.assign("NCMWFRNYFXLRHHXWSTHMGRGBAVUNRJUJSGTBNRTEQEWCXGISVOJMLAHLXTOFHUVHFAJVVSKVIPADJYOPSCKAXQCLICSZFMMMHHTDALGILNWUTJUCDDQUXFMNDMBSBRIZIOYKKVOREKVFTEOZTPZBJPLSOGJYCQLSQGFHJNIWNEYPQKHKUDZSYGAFKZXMWBIBIMQCDTYRDEJPDOYE");

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
    msg.setTimeStamp(0.46835797585311834);
    msg.setSource(5582U);
    msg.setSourceEntity(45U);
    msg.setDestination(56187U);
    msg.setDestinationEntity(122U);
    msg.command = 136U;
    msg.goal_id.assign("BNFAIIVOQBRTAKQBEEKPTMNONYXYMVFWNYSUVWJTRSWOLPCONKWPDDINKHRJPQBVJHVCQYIOHPUZCEZTULCNUGAZGMRPNLHMIUBTZXMALZCMFRQIDXZLXBWTBAFOGZVMVGLHPL");
    msg.goal_xml.assign("OPOICZRZDEUBISNDIDARSSJZAHMDNKFVSAMVDETCRQMYTYXEFIGYWHDMGPORBMNZIRKMTYXBRTOBTLZIZPHTRWMECYXNQDWYFFUMFRXGUOUOOCDZSVQHHLPGVGBLJLKJQLPUBWCGAYHEKVVKJKHCJNJFXNRSOPPJJBNKMFCSQXLFZPHUQVAILBQYAFPWGWASQEKMLJAETJICZOEWEUFAGHXOLVGNHNTSCYBVWS");

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
    msg.setTimeStamp(0.3324269895575941);
    msg.setSource(13170U);
    msg.setSourceEntity(142U);
    msg.setDestination(18093U);
    msg.setDestinationEntity(16U);
    msg.op = 145U;
    msg.goal_id.assign("FWKNTFKGXPKMMUTLXBBEXZJTBZUGPYLRZNSZAVRHAUHEXBICTCGNWQLWONJKBGNXXJLJGIXJCYMKSKZFNCFDHCUVLCNVPLAMAQZQDSOAEFIRBQJLIETVPSTRDEODPCYADURVHIRYQKGUVCWSKELPOGRSJDWGRRQHOBZBVXYFMPAVYIYATDLFWBUWNTKIFEUXVGDHFZXWMMIJHUESRSCOOQSGHOTZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UVYSZFIWXEEHVKBYSPFZAVYKNZSOTAGIWTDERYIPLMFUPNGOKOTSMBEAICPHBDHHFWALKERPVMCMIVIZRSJRUDFOMAFHAFKCRFXSLFMGPAXVGTKUROANQDBHOLJNOXEBEWBOQIIUWGJZRZQDCILNBUYEQHBUENCGSMNENNZHGXFKMQDKTWVXTCG");
    tmp_msg_0.predicate.assign("UNCOWFHKPPTQVPEEYMKCYAWTZLAAERIWGOFWOOVYSIRQSQRZWSXPEL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XRSOPKRAGMEFBCIVECNGDDZHCIAFAKQKUFR");
    tmp_tmp_msg_0_0.attr_type = 93U;
    tmp_tmp_msg_0_0.min.assign("UGYOJFXQIEBHGTOWOTAOQSSEWFGKNKGJZUTQVBAXLMJWDLSRZFKUQFRRXYMYYQBCUXKAKNHOWADIWZHPOKHJCCGVMFDK");
    tmp_tmp_msg_0_0.max.assign("LVEMHYNRZFPUBKZWZXYPEPHHWRSMXXKYQXREBRIGBDACMJSEOYGSNZEUATAKFSKFPHBLMHGSCECCPFNOJUIL");
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
    msg.setTimeStamp(0.8749836690813888);
    msg.setSource(26243U);
    msg.setSourceEntity(253U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(67U);
    msg.op = 107U;
    msg.goal_id.assign("WBHAUWLELHCYZUATAOLBYBUZVGSNOCZMECVQQGNBQJLXYKYAAQWNUTSFSCDEDKHPUMVNCPFIQARXEFKKIEGLHTTTQVWFXDZJGTYRXSEZPMTVSLAYLCVFGKNKWORTBRIGOMSKJPHQZYJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YTVDCYEBPODDVRWCQGUZTQNSJQRAKTKZGWNUHJNERYFQLDBGCMVNSPIYURUHBXFNEGAFFOHHBKVGWTKPWIERZZRFFJLTPTIJSHZFCKOKZJJBDIDOJLXZRZGPGEPYHFCUYUBJTFYAXGHMXSIASWMOIXYVRVMKBIOWESXMBQPBTXIAQDOLROUXLMXGESWIAHLWKCLXAPYQDAMCHEQAPACNNLEVTQDOF");
    tmp_msg_0.predicate.assign("KIRYNDHSLBFGBFCNUYDGCUEYRASAULHDZTKHVZBQJMWZWRRXAERGLHWUWOZNVTDJKKPCVDJJQMPSGCTPKATQMCYWODSXEWNBXOAAAKMWEUNTQKSOUUNFHIILLYGIIVYTCZEZKFGFPGNTYBHDWALTFVPENTCWNFSOXQVBUZHZIVEHMMPXYLAMKDSSNOHQHOBPIZVAJOXFROWUXUICCLXYXC");
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
    msg.setTimeStamp(0.2775398575424559);
    msg.setSource(40278U);
    msg.setSourceEntity(211U);
    msg.setDestination(33803U);
    msg.setDestinationEntity(111U);
    msg.op = 89U;
    msg.goal_id.assign("RXEKXIJAJGNHBQSXUAZRENIBVOLHUXOQCYPNKKOGSJOEHMPKBPOMHLDUEGWEMURHFJZZDMNDKZGPVMPQVPWCXKSQOOGDKHRRYBXHPWADEHBPFQJGLSLNLZQGISSYNSZOQNIFYTIEACCWITYZXL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QHADFGVIRMJXTEZGCBXLXKPJPWRKJZTWMSVKYGSBEUNPVZEFMIIWKLDY");
    tmp_msg_0.predicate.assign("TPRIRTGUGFDUZDSZELBPETFVGJYJECQFBHTEONKEYSHMGQQRUW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YFARYFRPRTAKEQPDUFHWAQCDTVIIDLCRSCTXKWCMFCNW");
    tmp_tmp_msg_0_0.attr_type = 217U;
    tmp_tmp_msg_0_0.min.assign("VKZOONEOXOSFOGEXMRQSLTUTFQESVUHGMCFXKMPWZIMLCZCEDGPKOIIYPJNXYVKPXWRRYDUGZMFFAZKMPFELHJ");
    tmp_tmp_msg_0_0.max.assign("EHBKMOZBHNAJXVDZWOCNWJEOVQGFPRZHIHLAUDSWNRKJFOXAVWELWBPWRAHJBYQOSXDSPBNGPHS");
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
    msg.setTimeStamp(0.24613675025058257);
    msg.setSource(56756U);
    msg.setSourceEntity(245U);
    msg.setDestination(49142U);
    msg.setDestinationEntity(192U);
    msg.name.assign("QGJTGEYACRKKGUNRAHXZBQEUMMKSUWIUJYLXPVYWSZSHCCYOAEQIXJOBCZIXULOHRDIPPVNBHWBNETZFAKWFQGEZTBGMCMSRVEYEMDXQUASPFJIULNOTFSCALRMVLROVIPIEVFTDLXADPMTSDWNHLXQNFHIVLZUUGOO");
    msg.attr_type = 0U;
    msg.min.assign("MQBNGXHEGGBDLXRNOOVMCOEQCTLZGDYKDULHQTSSGKB");
    msg.max.assign("GLPUXJJHICWLQTYXLHT");

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
    msg.setTimeStamp(0.8690594553916833);
    msg.setSource(23653U);
    msg.setSourceEntity(51U);
    msg.setDestination(31414U);
    msg.setDestinationEntity(125U);
    msg.name.assign("QQGHKUEVBLVSYXTNVFCUHTZWRHPIGINEJUMFIOLTGNXRRVFZQNHBPRQLYFIDLTYAUCXXQJJEZNGZQTCDSPKAJSTPFVMUOMKEZLMGTJLCWIUVMGPCTALHSJFGIIGAXWDQRKRPUZOOOFOQSYUNAKBEWLSBARZQCDSBPKVXYZACKSWTXWMWTNJDNHDMKMQLHDIAEBHOUZDWBYENKAEXJFVDMPRWWSDOXYYIBMYIJZVJONCPVBGGEOC");
    msg.attr_type = 130U;
    msg.min.assign("VNKBWKNECDBKP");
    msg.max.assign("MGUKFPDSSVSKPWJDXUFPSSOGBJHYUYLCCJIFKFSJIQEDZQIHYBXVYGVPYBWATDLMXQRWHZSOTDKOHTQOEBCEXXNFNOJFCRCKXERPHETCYHAFLUYOIBWPUIVSINBWUAZGOMIVAOZAYRATKWJNUCLMPNADGKYNREMJNFTGCTGKHMHRDSWZNWTTWEUZRVYGZIJTAMHVARGLRLNXXZGDUBQVEBCFOMPVPJUWRBNQXZXLQKDOMAQQPCJF");

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
    msg.setTimeStamp(0.5085832846002668);
    msg.setSource(41562U);
    msg.setSourceEntity(251U);
    msg.setDestination(60664U);
    msg.setDestinationEntity(91U);
    msg.name.assign("LWMOOYZFIGHSHWCQTZHLIRLJSIQBFXYZZDRDLOPRJATGWMNJQYCQBEWXOVPQTBUFDLPKMCQLPYQVRUHDWAIXSFMVLKSBEUJMAO");
    msg.attr_type = 200U;
    msg.min.assign("NAKLZLJHLSKUZMFOABISBOQYRJFCFRSKCOCHVXYHJLRTGWDIIHMQMNNBDWBHVSGCUPAZISQVHMJSNUEFIESPGPDEZIZLTYQCWJUWXGUPKVIWWHZVLMZBFGSBROEHDPT");
    msg.max.assign("CUFMWVBTDUKKCIPNYLIUPTCIBWBOZSAEPYONIKWMNTZRKJZERHHVSVWGIGXFCAETAFYREUQLKSXRBVBC");

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
    msg.setTimeStamp(0.44512322689588146);
    msg.setSource(26368U);
    msg.setSourceEntity(218U);
    msg.setDestination(37410U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("ZQWWTHXTIBEMTULVCNBNRRRDJKBFVHZZDGNBJVQBWCTXSCDOIYDACJYHN");
    msg.predicate.assign("LQGOXERIXFJJIEGPJECSRGKXWHUANAUCDNYFCCUMTXFKDTOFJXBRMNLPAFSBMNSJXXVOWXTZABXDCYOISQGWGUTQRWZZZBPODUZLYMINSYUWLSBMJGVKZKQLWAPEHBFRGEFEJTEDSAOVIVBPPDDFGIKKQBGDXHQMQDOHLHKNHOWTNHJQKZRIVKPMSLPAEGRLYZTBJTHFIQLLUWHCVNPAVMFECHUTNNAVKZAQIWOYVMORJMYYP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OPYTFCHDBVRIHXCSPICWVEPKBTUKXCEXZWHELGFVVQTHYJNQWGBWRLKUZJCMLAWLRINFAXYNSNMXUHDTPJQYOYVZJWEZBMWZICQHRPRAQKYNTTVWLOROFFZMMYGZDRILKSDGJJNSOIRGRPVOMDHQXSLDIZPMYOYHUXBPKWBDXQHTNNEKGCIXFWUAGCAMF");
    tmp_msg_0.attr_type = 252U;
    tmp_msg_0.min.assign("JZRPCOOOKJTMDVDGZMVKGTKFUAIABIHSCBXCSDRRHNMVYFSXYORSYKWKACCXKRYMOGXEFINVXTVVPPLADTZJZMJNHRSQDBUYFIDBDPNWQWINZYLYEAJYUTHZGIHXBFFUOELNZRWHJAYPPWUBGEAUQQTTWUXGINHOIVQUNCTRQAMQRLNSDOXFCGLOGCABMENVDJCFFVESJTATUIPEIEEWKLHCKZSSGHOWKGBQWPXB");
    tmp_msg_0.max.assign("CUTUHYBRFYOBGOSSIBSGJLJGLKWNPVBWEJLLQIRACXGMKBQOCWHXQZEOYEVTOKTLASWJYUNQWMZFPICUMPHHWYZXSNXUURNMOODTCGTWMINJPVBEAFSPIEPKKVM");
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
    msg.setTimeStamp(0.057367959570759575);
    msg.setSource(11307U);
    msg.setSourceEntity(91U);
    msg.setDestination(19227U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("GMPACXXKGPCFIIYEQASCSDATRSOEOZLYYYUXVEQOKFYLENXNKTWMRQSZRJLRPZYMBDAEIZBKHTGHQHIGWSHDTBNQWVHPVTKLUVBZWANHKKUTOFFXEOAMOFGTWSXLJMICQHXUOWCCQZDCACGAQEDDDIJGGNCSALBOULBFXMZUNMULNLJREJJWDEMIHVQ");
    msg.predicate.assign("VZHCTSUWVOAQJYMSNVADLMQIBTDBETARHZOCECQMKWOUECWAYOCVTLPNBUIMMYFVOFWRJEWWTDCFHBVUQLLDIPMIGWMJHOSPZUAGNANBPVBHKAZYQEUJYRRTMGJIUFTHKJYUHIWSQNLBQESRVCYXQIKISAJOYYSFPZJPDIMXGZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RYXEULUNRFGCLPEFVAAFYNQUGPSSZYMNZYTMDXAUBJHERAWQJWFMGKKGWFNOUEVZDXZSEZUISIYBWBJVPEPGALUIOBDDFJSVRBLMITYKCBNRJQTBCKJSHMPYQCJDBADJCHTLFZTBVTNHWONEODXZIWGDLXQGKQFXAUMOWOAD");
    tmp_msg_0.attr_type = 50U;
    tmp_msg_0.min.assign("UOSOXLLPSAIRNEKHJGFVIPWOYZBAFBUNMMLGXQIOOSNZELFEURYKTPICSBQIQWVUGIYONUZDJPZPJQZFATLWUGJNMBXUVOKZCRKTXGCHBGRQPDJFUGTHVBSWPTEDWKSVGHSKZLCNDDQZK");
    tmp_msg_0.max.assign("OJNOYNJSJGMDVHLVDLAGEITYEKUGJWCYXQRQPICFVXSFBOZQOIWZROOWXNZASAHTXFEDDXFUQWNFIUGBDCLUUBZKTIYQTTNIBHPDNQJVPTLXSAWFHS");
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
    msg.setTimeStamp(0.09538924267618853);
    msg.setSource(63121U);
    msg.setSourceEntity(24U);
    msg.setDestination(38774U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("ASCQIRKREWHGKIUTTDBMMFGPJIWW");
    msg.predicate.assign("NJPYNREOCUMAKARMSQGEKYBGOXDIICUUKJKUHTZHQCLODYNCIMMPUMJJVPGAXBAXDGRSTXQEZOYURRCWGHBZNYXOWPAYPHRFCCDXBKLJDAGIIVFDHTUQ");

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
    msg.setTimeStamp(0.9960345610080572);
    msg.setSource(59695U);
    msg.setSourceEntity(139U);
    msg.setDestination(25814U);
    msg.setDestinationEntity(95U);
    msg.reactor.assign("TPVENFSLDKWDECQHEUXCHORLPSJOODBYTIUDGPWYXEMPGMVLRSFJRJSWPNCNGXZUZRMTWETHUJGIRBKOSXAGPVWUKETRXYFR");

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
    msg.setTimeStamp(0.8794802443322792);
    msg.setSource(7036U);
    msg.setSourceEntity(223U);
    msg.setDestination(26110U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("GTNBDQXYHELCAOUXFWTISKSNDXRTGNAURLWOJZREFXYYGHZRRFPZLFNMMPUSBTEDHYKQDRJPPZKZIQLXVRRWIKOSDEBVKUPWLFHHHWTAVTIKIJTGFCEQUOSGPAYBMXINA");

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
    msg.setTimeStamp(0.01977042444605126);
    msg.setSource(40345U);
    msg.setSourceEntity(148U);
    msg.setDestination(52460U);
    msg.setDestinationEntity(222U);
    msg.reactor.assign("FBRNMRSGPTVOYXJOLBCTWKWMLBVNANDKQVXFMQWGUHZELTHQBICAZBEWATETTMLKFXEWIHULQSRAYAWQKSA");

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
    msg.setTimeStamp(0.22383669809113094);
    msg.setSource(32952U);
    msg.setSourceEntity(199U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(45U);
    msg.topic.assign("ALEVJDWXXETMXCZENLCEFBCOYHSDIMJUGKMOJGGQBOQOBSGCJKERVRGAKYNCNWISNLATMDDIPIWZKLTYFVTWYQVVXSLABEBSMLPOKYRHAIBQMHUFDIEJJWEZJTPW");
    msg.data.assign("GCCWNERHTLWLZYVMYWGTZEKLIXABXJZRUPOOLIFSUNBVPZRALFTWDBFKGGNFMVMHHEMYNZBJRRTQUNIPDHEPULMSLTJDQDSMWXIPXIZBKGNWONKFDXHEMOABOTMAFSOQVBMPWTRVSLQIQHPRKTAJKJVTEKKCPYAEONRASJVFOOZGIVDXULBJ");

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
    msg.setTimeStamp(0.48532098686374014);
    msg.setSource(25697U);
    msg.setSourceEntity(134U);
    msg.setDestination(39944U);
    msg.setDestinationEntity(156U);
    msg.topic.assign("TKLVIQXTINAOCSQHVSOKRDKKWZJDENUZJJEIGNAEQECAXTORBDNVDWLTWVDLVPGOQHQMXFKIWRGHMMBXLMZOJVJVXDYKAOYZDOWQONTEHLRHPEETUWFGSBZUUQBXBPQRFYVNQLABWHGSYYKFFYUBSPKCICAHTOJWRPIMUZCXENHHTPJFBGLFLWRMRASPDYYUVITPIGMJPGFRYGCIDGYXIKEFCNZNSXUTSHNQRVZZJCM");
    msg.data.assign("DVPTVKEWKQTYAOSQIBLMEJTNBLKVSEAOTYHDRFJHZWHPECXACXTXPUOLZYFGSVTGWAYFPMJSETUPBIXZOXESYGMDMQOJQTH");

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
    msg.setTimeStamp(0.4731083684046462);
    msg.setSource(7456U);
    msg.setSourceEntity(105U);
    msg.setDestination(7242U);
    msg.setDestinationEntity(88U);
    msg.topic.assign("QRMQKBNVJLVIPEDPTOZUKZJQOMBGUZDXBOATMKIRQFGDVOZQXJMSYRUCCBHFRZYXFRENHCFAHNVQSVAYXPJSCLYTWEVQRFLGPXRKNOAHKEVGSPZTHCASEYJAHYWWUVJBIGUFQKW");
    msg.data.assign("AQOQIUAISFNYHMHGCEWOMINSBCQZCPXMXRWILURVZHQXZLVTKBAYKTKPCJPPEDZMCNDNZJJVSBOHEHDHRFMEDVIGSWYDPRK");

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
    msg.setTimeStamp(0.3347932869847775);
    msg.setSource(28407U);
    msg.setSourceEntity(254U);
    msg.setDestination(22394U);
    msg.setDestinationEntity(204U);
    msg.frameid = 64U;
    const char tmp_msg_0[] = {47, -74, 6, 59, -59, -37, -117, -96, 62, -80, -108, 23, 108, -101, 115, 1, 40, 110, 3, 50, -24, -67, 110, -115, -66, 8, -102, -81, 29, 105, 34, -57, 44, 82, 12, 44, 59, -121, 93, -25, 104, 93, -10, -22, -68, 85, -22, 17, 37, -39, 113, 84, -61, -52, -6, -37, 97, -1, 34, -10, 85, -92, -46, -77, 8, 51, -18, 38, -47, -61, -56, -64, -44, -128, 57, -89, 40, 22, 44, -31, 25, -19, 121, -96, -30, -127, -11, -102, -95, 3, 9, -113, 56, -12, -73, 30, -3, 9, -22, 20, 9, 60, 54, -108, 0, 115, 76, -97, -72, -49, 41, 2, -25, 9, -125, 5, 6, 28, 56, 48, 25, 30, 0, -78, -63, -20, -8, 111, -128, 29, -125, -30, 77, -113, -47, 115, -22, 59, -94, -16, -65, -10, 102, -93, 85, 110, -86, -116, -71, -14, 42, -98, 5, -81, -43, 17, 103, -101, -55, -123, -40, -26, 61, -58, 126, 47, 84, -2, -78, -116, 71, 59, -11, -4, -47, -109, 87, 96, 4, 6, -106, 111, 93, 98, 12, 41, -85, -50, -79, -66, -53, -30, -54, 84, -56, -126, -80, 48, -107, 73, 53, 19, -116, 56, 94, -79, 31, 28, 99, -86, 97, -73, -81, 113, 78, 15, -24, -103, 28, -11, -20, -128, -121, -29, 27, -18, -69, 114, 73, 47, -33, 18, -4, -15, -44, -29, -23, 104, -95, -83, 32, -11, 48, 68, -112, -98, 90, 49, 21, 35, 61, -71};
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
    msg.setTimeStamp(0.46515161823587536);
    msg.setSource(4177U);
    msg.setSourceEntity(169U);
    msg.setDestination(63054U);
    msg.setDestinationEntity(145U);
    msg.frameid = 160U;
    const char tmp_msg_0[] = {-91, -108, -93, -1, -25, -23, -81, 2, 95, -80};
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
    msg.setTimeStamp(0.488723945709872);
    msg.setSource(31628U);
    msg.setSourceEntity(6U);
    msg.setDestination(62355U);
    msg.setDestinationEntity(167U);
    msg.frameid = 125U;
    const char tmp_msg_0[] = {118, -65, -116, 65, -128, 39, -49, 104, 107, -45, 54, 96, 10, 107, -30, -76, 123, 64, 14, 48, 4, -106, 4, -118, -116, -66, 26, -45, 54, -123, 125, -36, 0, -49, 17, 11, 56, 26, -77, 116, 6, 5, 16, 69, -29, -111, 17, 84, -117, 80, -81, -3, 63, 9, -32, -76, -12, -54, 104, 113, -74, -50, 7, -45, 113, 48, 90};
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
    msg.setTimeStamp(0.7930505965029813);
    msg.setSource(32178U);
    msg.setSourceEntity(117U);
    msg.setDestination(40035U);
    msg.setDestinationEntity(151U);
    msg.fps = 196U;
    msg.quality = 223U;
    msg.reps = 52U;
    msg.tsize = 30U;

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
    msg.setTimeStamp(0.05777026256129991);
    msg.setSource(64083U);
    msg.setSourceEntity(16U);
    msg.setDestination(40718U);
    msg.setDestinationEntity(165U);
    msg.fps = 181U;
    msg.quality = 197U;
    msg.reps = 29U;
    msg.tsize = 128U;

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
    msg.setTimeStamp(0.34415574926301595);
    msg.setSource(55458U);
    msg.setSourceEntity(241U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(6U);
    msg.fps = 224U;
    msg.quality = 244U;
    msg.reps = 240U;
    msg.tsize = 177U;

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
    msg.setTimeStamp(0.6104697737841814);
    msg.setSource(50953U);
    msg.setSourceEntity(196U);
    msg.setDestination(9757U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.050474206517410525;
    msg.lon = 0.19682775576361833;
    msg.depth = 97U;
    msg.speed = 0.9649595167294802;
    msg.psi = 0.11017926164574277;

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
    msg.setTimeStamp(0.1319242725308788);
    msg.setSource(41576U);
    msg.setSourceEntity(126U);
    msg.setDestination(37548U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.4381958043508448;
    msg.lon = 0.20829135200859628;
    msg.depth = 130U;
    msg.speed = 0.6029803660185347;
    msg.psi = 0.8846943423511361;

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
    msg.setTimeStamp(0.39561395125686316);
    msg.setSource(15121U);
    msg.setSourceEntity(199U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.06203043389925744;
    msg.lon = 0.7754993025283529;
    msg.depth = 162U;
    msg.speed = 0.8096720803594292;
    msg.psi = 0.11324946633270028;

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
    msg.setTimeStamp(0.7654543466462229);
    msg.setSource(25306U);
    msg.setSourceEntity(130U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(245U);
    msg.label.assign("EPAUBHRKMKRDEKMUYWBFALDBJXADEFRNEIPZSHCLUOYZKVCVVTOURUFXGDSOYLXAHLBBAAAUQWNRKTWOEVXHAFLNDCFTBYNPWIXDMRIZDVISBDEOPTOEHYYZPZLAVYVEOWHMWSLGFMJOTSKCXXGISKUQQQIINOGWJWPHKXSTNIRNYICLEFJTQVGSSRQGHUURJKTMTMBBOJCUQFJGEVGFHXZK");
    msg.lat = 0.012263097875426898;
    msg.lon = 0.42034983949080973;
    msg.z = 0.35297881124908714;
    msg.z_units = 177U;
    msg.cog = 0.34435967649117827;
    msg.sog = 0.28195297620933124;

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
    msg.setTimeStamp(0.3062282943874225);
    msg.setSource(9875U);
    msg.setSourceEntity(0U);
    msg.setDestination(5280U);
    msg.setDestinationEntity(134U);
    msg.label.assign("WKSAKYQOOTXLSIVVNJVLHGBRFJBQKMAIUQKZPJEDEIENRZSDMFWLMSNVAOUGDSZCYDCVOYJNUAHETKEPJGQGYIFRXWLPSAODFZBXCMOFUTMBZEFANMOQXHQKFMYYVXZQDLFHTTKUUJHKSZXIHXIGURNGERUHBWJPGJFZEKCCUMIQHCJYARUBOBXJGSHHZVBFXBTPOCMIYRMRWLDIWCDGTNP");
    msg.lat = 0.19724568515863428;
    msg.lon = 0.4541439162862646;
    msg.z = 0.5748482610200252;
    msg.z_units = 119U;
    msg.cog = 0.5839549907504378;
    msg.sog = 0.3834852670027502;

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
    msg.setTimeStamp(0.4521139297253248);
    msg.setSource(51913U);
    msg.setSourceEntity(37U);
    msg.setDestination(461U);
    msg.setDestinationEntity(232U);
    msg.label.assign("SIHMYHQNWUFXOCAHDKCGCDKHWBYWFOUFCOJGAKEGXUEFJZMTHBILBMLITRDFBXZDOQQZJISYAECENSJGWVDMETSJMKYKGRRTPRPVRVHSKFCSOQJEWAAMLEBTSALYUTVNYEWFNITQMSVHMSARWQYJAXDHIVTOAGZKNXKROPLYZQNGCVIBOWGUJKYZNQDVBUPQPLBPJLCMSZUBFGXGXRPPRWUXMIRFTLUDLLKCUZVIPXNEWXNPHOAFHDDZVINBTJ");
    msg.lat = 0.2642778135553048;
    msg.lon = 0.2705921991565122;
    msg.z = 0.6159169144306588;
    msg.z_units = 146U;
    msg.cog = 0.9366797564193995;
    msg.sog = 0.7830040391132189;

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
    msg.setTimeStamp(0.765974867678308);
    msg.setSource(64097U);
    msg.setSourceEntity(9U);
    msg.setDestination(5377U);
    msg.setDestinationEntity(144U);
    msg.name.assign("IVAMGLLIBOXYINZZETFOADA");
    msg.value.assign("GZQFDJIJHRAFIFGNTBSECBDVULRIFDAFRXFKEYVXKQBBCOXICDPMEPCALFLJXNWYCNUBGTYEHOJPWOUGSTNXNKHUHYNTMMVQVXOSTJNLWDYWGFJOQU");

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
    msg.setTimeStamp(0.18770719341492614);
    msg.setSource(2915U);
    msg.setSourceEntity(42U);
    msg.setDestination(273U);
    msg.setDestinationEntity(109U);
    msg.name.assign("XCCJXIWQMQAKOUAYQOBZVIICSUIGKUXAXLCPHRAPFYXRTQURNKKEVUBZSOJEFQLQYIKAPSBP");
    msg.value.assign("IOEMJNEEDHQXHIZJJUQUOOMMTWDGUQFOHBFLGZNZREAMCPVRSVOFQCBNDUCZXPNGSWTLGWIHUXTRNFLYCVGPIPYACRNHKKNBIEOLZJJANSFVXGVDTIELXTZGBSCPOIHLMSMCZKWUURXHYXDOBHYDPWSKMZMVAEYWRRTZDHEMAABNDSIFJZAYBHJTLUKKVKFIGVEDTXPSLWJDVLCPLVFENCUYYTMOWYFWBURJRIROXQKQQSB");

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
    msg.setTimeStamp(0.6540350869858546);
    msg.setSource(12075U);
    msg.setSourceEntity(17U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(192U);
    msg.name.assign("TYQOVPABKNIBMQGUKLSSORKJDQMCPNFVUTMZQLXFAMZKQXMXBDGPECDDFBOFAHPBFPPGXYZUFPMZUJYCYVQIOEIAXWVVSWPOVFZZWFIU");
    msg.value.assign("BSBHOAYVTEZGGWMLIBYGLXCTNFFQFUWDWLTXHMRDSVAMFHWAQZKXGPCLEQHLWIHMDUOCITEMJKXFCBVZYUCSNYVYTQHFOREBVZYBJJSNULQQSPMFYMGDTPOYEIUANIAPEYMKXJPRHKDBILIGLRMXZTBCNUSARDWVEOGEGBIHSVXZGOEHPQKOMPKZJXTEBPAWRRKDKGSWTVRJCJNNNQHNSLAXOVZYPRXCWUPUAJSWJKCUODQFVLURIDOFZDQ");

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
    msg.setTimeStamp(0.9053066252175326);
    msg.setSource(5837U);
    msg.setSourceEntity(70U);
    msg.setDestination(45885U);
    msg.setDestinationEntity(3U);
    msg.name.assign("TOYGXTXSFFLIEZBFOPDTQVYEKNHBZTSNHLHZCWUGLSGDELKZMNCTLWBHWMEYLXGKDMJJIUFOPEYEGSAUOXAKGPUMQVUMKZQPAEDQHZWDZCXTE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DSMGNAXENXEBFZEQNBOQXGOQOSFGWASKBRRAVHSWWCRCKBXHNQRCMZZSFXUPKFIOMPABKZFSKWSMDTPICYPWQORNWKHHDBYPHCGYQXEMGOWZDJPLDZGUTDJALDXENIGSVHQURXQMZCITJBLGUNTW");
    tmp_msg_0.value.assign("TWBPMKYTCRSTHYVLVITIOQHHNHMUKGXBIFZBQQKCWDSAGAJXFSYUERLHULHFO");
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
    msg.setTimeStamp(0.4324244419565164);
    msg.setSource(7439U);
    msg.setSourceEntity(5U);
    msg.setDestination(62348U);
    msg.setDestinationEntity(241U);
    msg.name.assign("VJEWJEAFQKUZXVEGUZJZWTTNOYMCDMAIRREOFMKIWZHVUAKECQDMAFJYCBDMYSQBGZOLIEYTPDZBJXFZTBYBVXEOAWMMXRBTSNOBJNGUWJVXAWTLPDGSVIKBJOPDCXIVGRNCPGKCIQHGKJILMLAHPDCMTZOQCSRSRYSBSSHIUGLYCHUGDVUPBTGLVUKFHAXNLFIVKNXSRQQPLUPLOWRNAYAHNJPHTKIXPEYTUC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VEYMOPPHQBAAISMDZBGJROUBYTCPDNRCLKEQKUXKVCXPVGPVMRUYAEJSWRJTJRDFGSUFFKPOBEGINIGOMJBKPIGXRBATABHSGFWPAPKZSTTVVLQELTMXZQNEZYIUHZKPWFHJYRKMTYBBLCXMHIWACNOF");
    tmp_msg_0.value.assign("ASNVJOUQMIJANGHEZXFAKQSAAPZRPMKQSPMLIHIUEUUHWZOLJW");
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
    msg.setTimeStamp(0.6340132520823918);
    msg.setSource(60975U);
    msg.setSourceEntity(137U);
    msg.setDestination(22532U);
    msg.setDestinationEntity(238U);
    msg.name.assign("OGVHLFYODMBPPAUYXAUYFGNNRCQEQMDRIVOSUZLTPIVIMKEXMZZCBNDLQDRALRXBBGNTDFAGTUAYTUFUKSGCKDVDVIBVNKEKOREJSNXWFGPVKLATLSWGFRDZFNGIALHLJZYZYBYLUNPDEPWWVZBHNSIIXOJQGWJQIRXCHJABUWNDCZTGSXQPPSER");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WWNCMWHFZCYBYYIQKHJUIGOPWHGUIXVWOFQFLPMFSDUAWTMRJZSUITXJQAPWNQMERQZJEIEDUBGLBBSSRIYSDUNKPUDPYUSXXCKKZVXDGDAWKVYLUMRVCYFOXGZTZLKFKHAXRQLAWBL");
    tmp_msg_0.value.assign("AMHGRWTUEGWRAPBOTSFNXWLNKJNBOKRIYUKUYXQMLLNPVRUPJXZAHOYWBMQGTNHFHMIQJNCNZIWKYMWQGIWHAQIZVICRLVWMVQQOXIFJZEJXOEMCODGTLAIFNVQHZDEBDBOJVYJFSAVRPSCOZDSVKAFXDETODARICLPAGREHBIJCGLXZMKZSETXGWBPFUUPKDFUCGBVHRKSKYYCYQCZGAWCBXP");
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
    msg.setTimeStamp(0.6499040061728669);
    msg.setSource(40061U);
    msg.setSourceEntity(132U);
    msg.setDestination(34513U);
    msg.setDestinationEntity(66U);
    msg.name.assign("JBMHKDASHAVIGUSLNYRQBKWDQRLGSYQFGXRIAFHVOMHXYWNTRIEPKXEQEKICLPHGXPCVBRZRUCZVLPMMWWADBNEZSXKJYFTMVOLQDPFDXJVUTRWDMUOTYFHJMPWUTIFTEFUNWBAZYHLNVNGWTKCUJZSNEATZAJDCCIYNDXSDQUUZBAFJKCHQGIOSUOSBXKOVMJOZENDHYPBKZONCSA");
    msg.visibility.assign("QEFWGLSNTZHDWHUTMPGHLESCBPPDOKOSGTOYVANCNLJEOYIGNMQTECXIAHMKJVNDPGUHJRRAKGRUGTWPLBFKYIRAFZWRYTCHEXMZCMIGULXWCRUXJHJWQIRVBEYDSVQHINYZKWZYNOMUIVIUNRMZK");
    msg.scope.assign("IXSFAZMMMWXTGOLYGLIXFZBEHSHASYOTAEFCREMVSYYTQJMUJZFLZABXDNAQYWXTUOBDUGXRITZEKWXIPAPBRWXBGZUMQIVHSJUTITJQRFDNGBRDVDEBDFKRKNJKSCBNUFCPDWLZTPVYNIRFAL");

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
    msg.setTimeStamp(0.995205741945162);
    msg.setSource(27817U);
    msg.setSourceEntity(54U);
    msg.setDestination(40154U);
    msg.setDestinationEntity(240U);
    msg.name.assign("MXDHXEPSVFFFSCDERJSMKOIZAKUSLBLSVCLNDXZCLSOMWTIXERJVED");
    msg.visibility.assign("ZJXLUHDBFFLRHMDLSROHHVSTWBNIAIVGAWGBHEZUDHWJRXVXKUVQUYAEYUSVBXBNFQZDSEKPQERUCXOJTYWEGXLWITFEUPETGZDWJGEDJLTHLGOPMKSSOI");
    msg.scope.assign("RCSZQAGCDNVENSBWAFZRXKAUQKELVOYJJLBOUKUWNBLVAPHNCEHIPYOTKWZPFDCBWTRFNXYCBCNJPYXJYXFMUYRCVFGPLKDQUDUGHWTRGR");

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
    msg.setTimeStamp(0.4619763377104088);
    msg.setSource(7495U);
    msg.setSourceEntity(215U);
    msg.setDestination(65066U);
    msg.setDestinationEntity(159U);
    msg.name.assign("OJPEGKXQWDYXIAXTYJXIFKGAI");
    msg.visibility.assign("GCVXSIVMFNRNBNUDWVWGVZYSGKUPTRFKVLEPRDXJLMAQUGQCJGRQNMCOKGEKVJOJEJAVLIFNVPUFLFBTCHIFGUPWBHARDHDFCAUSEOCZTMDWQESTDKEARVB");
    msg.scope.assign("MUQFKRUGWWUUBNXRAQURVAOSNTMDCTZIOPXAGSBXRKLYCINYLEFCFKVDYSDMVTTBSJXMWGZBCFLRGKPHIFGZF");

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
    msg.setTimeStamp(0.10429834259053272);
    msg.setSource(64364U);
    msg.setSourceEntity(53U);
    msg.setDestination(1432U);
    msg.setDestinationEntity(198U);
    msg.name.assign("LYIOWEFXKIMFIIMYHYWCHRPSFLZFJGJWBJEDDBJYUADGMRTMDZCYDWGFCSCUUXQKYFASPGTMAOGBLVNELHNRTBPZKRXNLB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YIFBJEPHGOFRYNMKIHYHERZNLVVBPSDGHZJZVBROXCOLHBLKZPDSEIUPGBMONNUUIO");
    tmp_msg_0.value.assign("ELTYQXBGPBOGZMEQSTK");
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
    msg.setTimeStamp(0.39698424316016145);
    msg.setSource(811U);
    msg.setSourceEntity(48U);
    msg.setDestination(33170U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PMXTCZOCKEGWWEAUNCRCHOXPMFYOCJIFGHFBFLBCQKKJRAMDAURNLAYDCGEIUDWYRGIVNFYBEHRQXNWLFKBUALGAQBDQUMKIUPZIRQEVJTVQGHTWHBMAETXNESQSJVNYAWMOBTDTSRUXHYPHYBOPBPZJOXCNXTJHSEKS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WLOQVRYJVRKBOKRDXMSUQCXPZSKZCUUFPTENZTYDOLSFCFWEGAXJICDFSBKOCLLHRQNRSRJXKWBGSMXQUBNWXFPARQTQQMGGETZXMVPETKNMAENJVXJHZYCMGGAAIHPJLMOILVRTJZIXRPJAWWHSHHTBDTJIWVDPKHDOKPBPQGQDPBFYICJWODRUYNVAZVFFUANKUENMIDLMMGBTYOEHCABYXHHICGSWLYKIEGZUAC");
    tmp_msg_0.value.assign("PVDFBIQHLDHREHJQWBDGOHTPOYRZKRGHSPTKJXAWYDQNOGEZSGECLTMXVCCBFBMSKOBORBCINWEVUGXSJCUGHAXWHIAOEGNQKDUUFLKIXOMREYYTIPVZNUUKQAPL");
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
    msg.setTimeStamp(0.32880552161749577);
    msg.setSource(16524U);
    msg.setSourceEntity(64U);
    msg.setDestination(37252U);
    msg.setDestinationEntity(65U);
    msg.name.assign("PGLUMNKOITTCHDTUCTJXBQLDIJPRDHOAMKFFYJLZIXUWCZWRNAZHWLVUZIYJMMNIIOPDSDRODSTSEFKLKQFCIQMVWHNOASTNELZGKGORWVWLBADGJYNVULDZHQHXXZBXJCNVVYKJVTMPKGMAAEGHKONZEPYECZAVSWEFXHBMCLFWESQ");

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
    msg.setTimeStamp(0.44793139893173417);
    msg.setSource(56666U);
    msg.setSourceEntity(225U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(181U);
    msg.name.assign("TEQZLYWVBSSPDRJNUKTNQRBLSPZPZHVXINFWIUCXSTTIQHZNZCAZSXHQWCAMOSJFIHCDAKEPHAZGLRPGBQTEYMVXDZBJOYWGWFAGIINUUOXTKPJQRFEKBSDLTPYYECHKTOTQQAQWJSRDELBHFIUDZLEYUAODVXLXOMYSRFFWPWIWGJECMHBBYEVBMDGMFLMZNMUKFUCNNOAJNVJIICMKVTHOHJJAVDOKCQVYBPPNLRCGR");

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
    msg.setTimeStamp(0.36076089203765105);
    msg.setSource(15951U);
    msg.setSourceEntity(55U);
    msg.setDestination(19882U);
    msg.setDestinationEntity(7U);
    msg.name.assign("QEMZYOGVKPJCNMNSEMAKZAOSTATCORZOFFYZKLHHJKXWGRUXDLLCMLCQXHARAFKCDOILIZGKQWPDIQTRSNCXHEBUAFPFBMJEIVVWKFRFLWGPUMZQHQPRZNGSYDKDVDJCGGSRNONBIABMYTPUJYCTYIEEYUTUSPTSYSUWOBMJGJFLTYHPWXVKHJFTYAXVLUEBEDVKVVLIQNQUVDXHGMZMCQPIBJDHAWWDS");

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
    msg.setTimeStamp(0.5724138403123534);
    msg.setSource(24767U);
    msg.setSourceEntity(143U);
    msg.setDestination(8634U);
    msg.setDestinationEntity(47U);
    msg.name.assign("MFIKIVRZFOQKSLJXBGWIXGGBHNRHICGUGKAJQELNKAOWWZMGVYJCUDTWUUC");

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
    msg.setTimeStamp(0.7176014734321092);
    msg.setSource(32741U);
    msg.setSourceEntity(188U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(192U);
    msg.timeout = 4191290315U;

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
    msg.setTimeStamp(0.5536122929146301);
    msg.setSource(14131U);
    msg.setSourceEntity(182U);
    msg.setDestination(7524U);
    msg.setDestinationEntity(216U);
    msg.timeout = 3676128495U;

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
    msg.setTimeStamp(0.4752775304554001);
    msg.setSource(3499U);
    msg.setSourceEntity(87U);
    msg.setDestination(23161U);
    msg.setDestinationEntity(11U);
    msg.timeout = 1188295723U;

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
    msg.setTimeStamp(0.8548328920918843);
    msg.setSource(11139U);
    msg.setSourceEntity(68U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(80U);
    msg.sessid = 4248530077U;

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
    msg.setTimeStamp(0.6700991515859988);
    msg.setSource(20153U);
    msg.setSourceEntity(209U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(174U);
    msg.sessid = 1149903981U;

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
    msg.setTimeStamp(0.8390408786805216);
    msg.setSource(47045U);
    msg.setSourceEntity(160U);
    msg.setDestination(16775U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3045879042U;

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
    msg.setTimeStamp(0.4770368013904259);
    msg.setSource(23490U);
    msg.setSourceEntity(60U);
    msg.setDestination(30963U);
    msg.setDestinationEntity(76U);
    msg.sessid = 2275739803U;
    msg.messages.assign("NWQQUCDYGQDCICJUCHRPRPAYHTVTZPXHCINOJIUMUXJMEMFHVMIYSCYIBMPKABAJXPWUDNLDJXDEBIDKLFTQBUEVNGGXTSIAPOGODSJKRIXFHWKBUNSXLGTETTXLZHM");

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
    msg.setTimeStamp(0.28462408365612546);
    msg.setSource(38947U);
    msg.setSourceEntity(201U);
    msg.setDestination(54524U);
    msg.setDestinationEntity(133U);
    msg.sessid = 530452935U;
    msg.messages.assign("LYESWKJAKAXXGHCCFMQUHBRXUJFLVGPJMHVHMZKDEDRGBOOLMEWFBLLJLPMBJEGSOKWRUFTGBQWEEAFSMYPXWTESNNNQADZXIEQITKHFQSVXDCGHEPYRJBWBKSZLNVWODCIGMQFPBGIKYTEPVQZCYAOIOKI");

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
    msg.setTimeStamp(0.6131342095607413);
    msg.setSource(62267U);
    msg.setSourceEntity(236U);
    msg.setDestination(3685U);
    msg.setDestinationEntity(99U);
    msg.sessid = 3719694513U;
    msg.messages.assign("WMOHPPXWVJAEIOVYCLHDWRCHEHIKERMBRCLNFZUCHNQZELNJKZLGQVZMPAYPYSKVIJWPEXEYFHTTOEOAWPRRVTMSIFGADSNKNLASGKOCNUDDWGDJXJTUCYTFHJRXWFUUPCILOQTQKNDIXXQMXNZURLOYZQDKTBQTSCAUKFZYGCYUZPVWBDFXFNPYGSWBZGSSAJX");

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
    msg.setTimeStamp(0.429669512270932);
    msg.setSource(37618U);
    msg.setSourceEntity(41U);
    msg.setDestination(44321U);
    msg.setDestinationEntity(187U);
    msg.sessid = 1694094673U;

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
    msg.setTimeStamp(0.4261075896046951);
    msg.setSource(31509U);
    msg.setSourceEntity(47U);
    msg.setDestination(11380U);
    msg.setDestinationEntity(142U);
    msg.sessid = 1616077864U;

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
    msg.setTimeStamp(0.9748403220757045);
    msg.setSource(11925U);
    msg.setSourceEntity(178U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(49U);
    msg.sessid = 1860312331U;

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
    msg.setTimeStamp(0.16673824824649408);
    msg.setSource(53460U);
    msg.setSourceEntity(129U);
    msg.setDestination(12784U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3553147465U;
    msg.status = 11U;

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
    msg.setTimeStamp(0.4758909405919809);
    msg.setSource(28094U);
    msg.setSourceEntity(146U);
    msg.setDestination(48818U);
    msg.setDestinationEntity(159U);
    msg.sessid = 3755323711U;
    msg.status = 46U;

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
    msg.setTimeStamp(0.45900533134215005);
    msg.setSource(1811U);
    msg.setSourceEntity(135U);
    msg.setDestination(44390U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1115641356U;
    msg.status = 197U;

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
    msg.setTimeStamp(0.5064516141819243);
    msg.setSource(14867U);
    msg.setSourceEntity(210U);
    msg.setDestination(59408U);
    msg.setDestinationEntity(58U);
    msg.name.assign("VYZBEEOURPOMTLLBKS");

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
    msg.setTimeStamp(0.7215928955479046);
    msg.setSource(13925U);
    msg.setSourceEntity(37U);
    msg.setDestination(26529U);
    msg.setDestinationEntity(105U);
    msg.name.assign("VNIJRYQMYEQIUFVYWEWYJQVZPBZCUASTXCAYMCDXKZOAWKZVHGOQIMTJJLIASYQUGIBQGRVUPWPDRXLASCSXBUAGDIIKSOLTRBEOLTZTUAPTGRUXSBONFCZNJRGKHWBPVQHTCMNFGNDDLPLLXEU");

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
    msg.setTimeStamp(0.7104823888264992);
    msg.setSource(58102U);
    msg.setSourceEntity(16U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(167U);
    msg.name.assign("JYQSDQLXJOWRRXEIJVVHEPEXAFCPNFCZYNJINVTYSGWZVOWGFXXKLACHIQMAWAPCUEHULAQOKWMEAITGSILIJBMDMMKROUDFTJVTBFCLDZYOKEOCKJFNKYRJTQYUMZUYWZHRWFCPWSHMRHNTWTCRFZPTVFBQGETSIIDUBOBKTDEOBBYYUVDASNLJGNHXUXIPFDAGXLUQEBOBGHANGLBPUIE");

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
    msg.setTimeStamp(0.9880340248043554);
    msg.setSource(42898U);
    msg.setSourceEntity(64U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(187U);
    msg.name.assign("IETTZKEUJVKRSOORAGKWJQNPRVSJMLFKPTABDUPCXACOFLBFNKMHAXZCFWFOLMPSMWDROENXXYGLQOEKZNVDPYUTCACMZACLETBDGCEHQMFJONKEBACQOGRFLNWJINJZVIJUYLEWGDLNDHUPUICPHIWMAWOHHIVISZFBJQZZICDQMUMTYPVWQBTNAGBBHTTXOUXGKNXEDXGJUPBXAWJIYRHSDSGKRKSWYZ");

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
    msg.setTimeStamp(0.964243201087643);
    msg.setSource(27804U);
    msg.setSourceEntity(13U);
    msg.setDestination(28598U);
    msg.setDestinationEntity(78U);
    msg.name.assign("HNVPASVEIVSSIFYOESR");

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
    msg.setTimeStamp(0.399799622500444);
    msg.setSource(39844U);
    msg.setSourceEntity(17U);
    msg.setDestination(22884U);
    msg.setDestinationEntity(142U);
    msg.name.assign("YVTXZUSXLYPOCHWIRRWNFCBDMUOBOTVOJNSYQWADULXVKLIOSYSFWHCNPFPTQNXJTERJOXGFCKBFSMROMIHLNENHNUGPIWCGSIMBPAIJVTYLSUWGGKHEBUVEIPBVUEKAGUAZZREKHGTPBTLMKCYHPNQEXZUIZVWDKDYMDAYFRIJBRGGERAQHCJMVQOV");

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
    msg.setTimeStamp(0.17617157496139468);
    msg.setSource(19150U);
    msg.setSourceEntity(238U);
    msg.setDestination(6414U);
    msg.setDestinationEntity(187U);
    msg.type = 107U;
    msg.error.assign("JMHOAFBEQZTFBLTDVIFBMIPUISZDGYRMBIVFVLFWKAXRJVKQYZSPGPSXBPJLGPYVNSRWERVGJQLGIYRUBKIUIHMODAWNKCKXWGEVKHCOPFKLCZYDTIZDDEBSNTZMZCEKCEHGMXEGDQWOSLUNNSRXKNPNCOTUQVWFTFAUYOEYLHCJVMHQZHPTXOFXRXESIAHRVRCYSULQAUCNXJPHBMYUJISTGZYQDALOBZFWT");

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
    msg.setTimeStamp(0.34703003386916575);
    msg.setSource(43513U);
    msg.setSourceEntity(224U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(168U);
    msg.type = 125U;
    msg.error.assign("QRSZVIJRWFDHIETADENJJOTEXRGYIQMKATIUUFODDVNPUCVDBJJQNVWENCIYWNBDKYNROWEWBDUIDSMEQKNOSHMPSCRXLFAIGRPZVAUPJPCKSTFBGBLBMMDBYMKJOGQEOLEIRRKCFHUPTGY");

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
    msg.setTimeStamp(0.1486645565718946);
    msg.setSource(28096U);
    msg.setSourceEntity(127U);
    msg.setDestination(30232U);
    msg.setDestinationEntity(109U);
    msg.type = 147U;
    msg.error.assign("JDIJFUGBDHLLGIIRUKYBUECQZZRYSJXNUFQTOLTDAUTHKSWQSFVIZBPOFVMYBNYHQEPDOFCFZALVNBTEUUKNJPOQHJXUXYBPMXKJRRRHXFNDIVACLLVXYUOWEKWMLKDSWTAHYQKEGNXICSTGQEVAGSXEGWADIZZJCNSRPSYHVZRMPHMGTWSMXWHPCKBBOBRTOEFCOBODARPWOLAJMEMXSNDLADQ");

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
    msg.setTimeStamp(0.09387584307976649);
    msg.setSource(46528U);
    msg.setSourceEntity(149U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(189U);
    msg.seq = 56025U;
    msg.sys_dst.assign("AXKTBEIEGWPTJJLKPEPMNDTNLIBQMBBOFPEFPHKDHZKWWETVOWGFGITFOP");
    msg.flags = 220U;
    const char tmp_msg_0[] = {105, 1, -56, -112, -102, -94, -96, -36, 52, 0, -119, 115, -56, 16, 114, 111, 46, 18, -86, 39, -91, 15, -109, -126, -38, -45, -102, -84, -13, -25, 67, -52, -23, -46, -2, -105, 27, -37, -7, 1, -104, 41, 92, 9, -4, 63, -56, -17, 32, -75, -93, 7, -24, 94, 90, 64, 59, -23, 74, -99, 24, -101, -21, 110, -121, -3, 23, -66, 121, -52, 100, -15, 125, -18, 30, 31, 82, -28, -97, 118};
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
    msg.setTimeStamp(0.36726167253792985);
    msg.setSource(51162U);
    msg.setSourceEntity(18U);
    msg.setDestination(32398U);
    msg.setDestinationEntity(46U);
    msg.seq = 26654U;
    msg.sys_dst.assign("HHWUFOXQKKBSZOQVUJVWJMJTAQZEJARJGBUELKWGNDTVPGKKPYMZCVSBCZQXHARMKNYYIUVNSXHFYMLTODSEYQTQFACCOVKXGLZPMIUUVCWEDNTZQPICAJNISDBZQWROJP");
    msg.flags = 204U;
    const char tmp_msg_0[] = {12, 105, 30, 111, 28, -84, 71, -82, 100, -91, -29, 78, -37, 79, 68, 27, -114, -94, -103, -56, -77, 30, -92, -10, 74, -62, -73, 56, -118, -42, -45, -117, 45, 109, -96, 57, 45, 61, 0, 63, -77, 68, 4, 50, -114, 44, -59, -107, 83, 92, -111, -15, -66, 67, 66, -115, 12, 91, -86, -15, -111, -97, -36, -92, 56, -71, -111, -28, 56, 33, 50, -79, -11, -112, 48, 1, 100, 62, 53, -126, -65, -115, 22, -121, 48, -78, 113, 82, -57, -15, -114, -9, -122, -28, 85, -126, -67, 12, -50, -69, 97, -21, -109, -81, 21, 68, 113, -19, 3, -122, 103, -72, 66, 77, 125, 19, 105, -41, -82, -53, -90, -82, -4, 4, -27, -34, 51, -89, 118, 82, 12, 86, -60, -7, -106, 3, -57, 97, 21, -119, -56, 114, -106, -79, -57, 31, 86, -98, -55, -12, -44, 89, -81, -81, -96, 76, 107, 3, -35, 124, -82, -101, -35, -47, -109, -100, 43, -50, -66, -20, -46, 17, -106, 62, 63, -89, 15, -68, 89, -46, -76, 37, 69, -96, -127, 40, 87, -15, 125, 11, -8, 30, 41, 82, -36, -83, 96, -96, 57, -95, -39, 0, 121, -74, 48, 26, 57};
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
    msg.setTimeStamp(0.6915669654306795);
    msg.setSource(28656U);
    msg.setSourceEntity(51U);
    msg.setDestination(15291U);
    msg.setDestinationEntity(39U);
    msg.seq = 44427U;
    msg.sys_dst.assign("NOHFOLHEGLARUOHISMQDQLJVNZHEYPEFXBOADKAGHJREKQHKVAZGYWIDFEYHQMXGJNYBZPLEGJPADQBUONXJDKNUTFAIFMTZXHASRVINPCVIXQLKNDSHOZIULPFPWBBJXVZTVJWNVMBZCJNLESYIMWZKQFCQSCGFKFEWCIRGBPYOTAIGQCGTPZRAKWTRBUI");
    msg.flags = 11U;
    const char tmp_msg_0[] = {84, -43, -72, -102, 10, -23, -96, -48, -51, -2, -120, 25, 80, 57, -105, 16, 56, -50, 44, 116, -6, 21, -68, -112, -102, 49, -65, 53, 116, 95, 32, 62, 14, 84, -101, 106, -89, 27, -84, 36, -92, -10, 53, 59, -55, -85, -100, -72, -76, 45, -120, 105, 79, -58, 28, 115, -111, 61, -94, -2, 40, 98, 40, -84, 29, -56, 118, 9, 126, -94, 34, 126, -45, 49, 75, -72, 122, -119, -121, 41, -123, -12, -5, -76, 84, -2, 50, 46, -98, 120, 9, 79, 61, -82, -59, 78, -83, -79, 8, 89, -47, -13, 15, 32, 89, -35, 122, -58, -43, -4, 76, -44, 62, -128, 53, -85, -32, 56, 64, -16, -10, -26, 94, 15, 99, 81, 44, 118, -17, -54, -80, 40, -48, 0, -52, 92, -89, -28, -62, -85, -96, 62, 116, -67, -84, -10, 1, 19, -17, 117, 46, 17, -117, -30, -38, 75, 79, 89, -74, -64, 108, 0, -40, -4, -57, -16, 4, -93, -126, -65, 26, -127, -85, 60, 119, 101, -75, -102, 34, 88, -128, -123, -50, -58, 70, -50, -16, -24, 61, 112, -99, -77, 100, 53, -90, -126, 95, -93, -64, 63, 118, -24, 109, -97, 109, -116, -74, 106, 10, 12, -125, 79, -26, -123, 35, 10, -29, -48, -57, 18, 36, 27, 109, 113, -50, -97, 126, -93, 106, 100, 46, -3, 74, 15};
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
    msg.setTimeStamp(0.4025287308262261);
    msg.setSource(64740U);
    msg.setSourceEntity(124U);
    msg.setDestination(35945U);
    msg.setDestinationEntity(150U);
    msg.sys_src.assign("JBFFIXXSBNHDWKKPZYIOPCWYVQSCGYZFCAACGPGLACTMNOJLFJZKETYDUNWXKVUEXYQGHXRJJRHEAQBQDORMTNOYIUVTXIVEVUFDZLLCTYMJYSJLIMDEABTNNFOKUDNFMAUPPFHJWIUKQSUGTBSRRKQBZLMSPPBB");
    msg.sys_dst.assign("RIAPUVSVCBAMUSGLVQIYLLFWZFGBJPKWVMDOMRBIBFCEUHAJJRPUUSZRGCQJCKUKZHM");
    msg.flags = 84U;
    const char tmp_msg_0[] = {33, -24, -80, -69, 48, 92, 13, -9, 97, -32, -56, -116, -30, -80, -93, -60, -110, -86, -3, -49, 59, 85, 123, -41, 107, 29, 43, 110, -89, -17, 95, -44, 34, -47, -2, 44, 113, 82, -7, 92, -30, -107, -24, -49, -26, -7, -41, -27, 8, -16, 3, -111, -35, 121, 61, 77, 29, -100, 107, 13, 15, -115, 115, 49, 9, 4, -102, 48, 114, -2, -90, 87, -93, 37, -23, 33, 79, -20, 102, 57, 53, -89, -82, 36, 93, -75, -14, 17, -70, -1, -76, -27, 76, -85, -50, -52, -127, -115, -72, 39, 23, 39, 58, -124, -12, 73, -125, -79, 4, -118, -58, -96, 9, -76, -51, -19, 116, -1, 28, 16, -110, -66, 92, -3, 97, 8, 58, 6, -51, -1, 18, 47, -10, 45, -80, -126, -101, -71, 88, 2, -95, 6, 84, -75, -52, -83, 93, 0, 42, -83, 36, 67, -82, 47, -27, 112};
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
    msg.setTimeStamp(0.003679191874295551);
    msg.setSource(48752U);
    msg.setSourceEntity(154U);
    msg.setDestination(65074U);
    msg.setDestinationEntity(10U);
    msg.sys_src.assign("BGEPOALSRUZYJWUFHAXHPLURBMWPPKQNWQUDULSAXFOYSYPRLDLPOOZLZYAKSBMHIXXNQFFGEGWPFL");
    msg.sys_dst.assign("ETGYREXJTJELAVVKHKANGUCEOCIFKGHVASKEHPYJOTEFJXGAPQHVETOPXOUNIZWDNLOSAXIQUDZUKYECJAMPTYMTSPXMWXEASMWWDKHFULNRURZXHFZLYHWPBGAWTBSIRQDNSTULRHCGDBCZDFFYGAQPIMLQCXUFKLYBBSBVIZ");
    msg.flags = 182U;
    const char tmp_msg_0[] = {-46, -62, 57, 69, 47, -80, -64, 19, -38, -94, 96, 26, -47, 103, 85, 65, -23, 76, 74, -118, 95, 100, 5, 100, -108, 79, 72, 63, -30, 99, 114, 47, 95, 29, 116, 118, 83, 79, -119, -63, -67, 80, 54, -65, 66, -32, 72, 120, -48, -9, 16, 8, -49, -77, -107, 122, 1, -26, -108, 104, -70, 69, -47, -50, 15, 2, -63, -122, 26, 83, -60, -92, -98, -123, -24, -68, 98, 76, -102, -107, 52, 118, -83, 70, -88, 36, -121, 114, 48, 96, 66, -73, 119, -99, -101, -92, 70, 48, 4, -69, 122, -76, 112, 13, -14, -20, 77, 109, -17, -127, 54, 63, 106, 90, 81, 50, -30, 53, 77, -119, -115, -81, -100, 59, 29, 114, -4, -78, -117, -33, 54, 109, -91, -9, -116, 29, 20, -80, -119, 85, 124, -95, 37, -90, -86, -84, -45, 99, 74, -65, -114, -126, -15, 64, 14, -11, 71, -88, 2, 46, 94, 126, -101, -97, 45, 89, -2, -123, 60, 122, -118, 90, 121, -39, 118, -28, 117, 112, 30, 118};
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
    msg.setTimeStamp(0.723218121488233);
    msg.setSource(3268U);
    msg.setSourceEntity(22U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(23U);
    msg.sys_src.assign("FTTBYJDESGZMVMXVXOERVMNQPSBPFWAFWGUWSPBLCPAIHYTMVZDSJGGYXMHCOPANXMHGNSRDWPLNUCFITBGPQRQGCXWIQQJEUNFECLQTYZZZSFJJEXAIACOJFKHIDUBMDVLTTUUCPEECKBIUDYKKIMPIDYCPEHNMUBQRSWORKAHFFNRALQDDHLY");
    msg.sys_dst.assign("GSSCSIHTBPORWKYBEXMGDWMMEZCHVEACAIUFEVJMMDRMQLOUOVZFENRWGFNIRWIRSJDIRKPAIPMHCLQYXZYWLWQKCSFVNIPJBHJXXKIEVCWJAHGZZ");
    msg.flags = 67U;
    const char tmp_msg_0[] = {-79, -52, -107, -74, 44, 77, 40, 63, 36, -14, -118, 62, 49, -54, 123, -35, 4, -111, 93, 112, -59, -110, 58, 104, -64, 3, 94, 106, -39, -25, -26, -72, 115, -98, -77, -67, 99, 105, 52, 91, -116, 95, 125, -86, 8, -22, -110, -19, 25, -95, 100, -52, 58, -89, 94, 28, -11, -52, -40, -107, -118, 101, 31, 5, 13, -16, -41, -96, -124, 38, -90, 126, -33, 18, 112, 97, -93, -33, 65, 43, -31, 52, 59, 70, -9, 119, -57, 18, -117, -27, -21, 89, 61, -89, 102, 123, -7, 74, 77, -4, -14, 38, 112, 49, 18, 55, 71, -14, -126, 98, 90, -69, -30, 83, 79, -71, 67, 39, 79, -103, 95, 33, -58, 68, -44, -29, -26, -75, -25, -21, -106, -18, -102, 108, 98, -98, -105, -124, 56, -117, -73, -36, 86, 73, -7, -90, 47, -36, -125, -64, -32, 3, -42, -79, -53, -20, -85, 80, 94, 52, -84, -115, 96, -14, 3, 76, 41, -32, -60, -64, 117, -51, 3, -10, -37, -26, 38, 108};
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
    msg.setTimeStamp(0.5595711693932945);
    msg.setSource(50812U);
    msg.setSourceEntity(117U);
    msg.setDestination(28633U);
    msg.setDestinationEntity(22U);
    msg.seq = 26938U;
    msg.value = 36U;
    msg.error.assign("FKSTRYAGCLCEIWATIVUFGVULKSCULAEZCBUFYRZWERZKDDJMMONIPMFBGHLTWNXJWGBAHMEVQLEDTHKPWTIBNVIPSDVQSJDIYYUZBFNTMSIPVGHMQHVNWQBOAXRWTZOUJDAUTCFFMRX");

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
    msg.setTimeStamp(0.8896701614967187);
    msg.setSource(62485U);
    msg.setSourceEntity(28U);
    msg.setDestination(8411U);
    msg.setDestinationEntity(78U);
    msg.seq = 24170U;
    msg.value = 166U;
    msg.error.assign("CEFEMBWJCDKFXIXZVWAKETJKBONSFGHNIAWTJUOGYHWNLNCDYHLPLRTAPIARDURQCSMMITRUCWNYEXKBOUDCOTVMZXGJJVRJCHAAPFLNDEZZQYLIVGNGUCYJANWJVTUMSWYSFQHPSFCORHPTQYAIQWVOFBIVJKPHUFSEKZQPXYTLKEMRTYDRPMUPVHZCQEWBEQXIKGWGZXOVLLOBTKDAEBBYMXIFFZOBGUSSDXGQRMXAONGSKD");

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
    msg.setTimeStamp(0.13515764323341106);
    msg.setSource(138U);
    msg.setSourceEntity(239U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(139U);
    msg.seq = 57602U;
    msg.value = 65U;
    msg.error.assign("RBPOBTYECKSQQLIERCLADRBLMPXGDNQRVLOTNAHUNTIMKWBBKQMTRZQFHLJUTVZETKWKFUBLJRGVNDZFCCOYXKDUJDILZFVTVJYCYHHQBPADVLAGMWPARGCOCTPTEWVMBGUXEYXYEGOUJFSHNIPSMINXQIEDWGNOIXGVTSUXHLWCJEYIPJRXZIHAZCEUXJMYRSGOQHULDPFAWRQSBGZVNKXFMFUSKDAZFFMONJYJP");

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
    msg.setTimeStamp(0.8030034655361423);
    msg.setSource(1231U);
    msg.setSourceEntity(48U);
    msg.setDestination(39688U);
    msg.setDestinationEntity(252U);
    msg.seq = 51438U;
    msg.sys.assign("RCGWPQLVGPDFBOCDPJFHWIKQBFOXXQKZOQMINDRYJIQKCDZAJXMECIRXCUNGVNDMMMAAPJARXBRDFYHSVWNYEIYCNCQFYFYSGOSVLHPQWNRSTZESLOKPFNAMIJAOWIDPMWHU");
    msg.value = 0.6394122134664185;

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
    msg.setTimeStamp(0.23819428556138955);
    msg.setSource(2365U);
    msg.setSourceEntity(34U);
    msg.setDestination(18427U);
    msg.setDestinationEntity(233U);
    msg.seq = 38315U;
    msg.sys.assign("SKBBGPUEYVMBPKSFKBKOZQYPEOHDLGWDFJQUFFMGDKPDRUYKMVLQIJNOFRKPTSWZKNJLQRJRTJZDZLHEXCSX");
    msg.value = 0.45085973805608326;

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
    msg.setTimeStamp(0.6107906735169244);
    msg.setSource(52925U);
    msg.setSourceEntity(24U);
    msg.setDestination(65027U);
    msg.setDestinationEntity(83U);
    msg.seq = 15964U;
    msg.sys.assign("MNILGUOBVTXODZLBBAQNEHTHJMFBFXHGFONZHLMSROWHSVIXLVANBZUOOKVPVROAWEPFZEGJCWYTCGBSMUSTMZCVDWTKAJGUWQS");
    msg.value = 0.9774831516956978;

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
    msg.setTimeStamp(0.037638309908125334);
    msg.setSource(49446U);
    msg.setSourceEntity(238U);
    msg.setDestination(53135U);
    msg.setDestinationEntity(208U);
    msg.action = 111U;
    msg.longain = 0.6521887119508137;
    msg.latgain = 0.2214328129071238;
    msg.bondthick = 343576832U;
    msg.leadgain = 0.22450644086858906;
    msg.deconflgain = 0.07456108331505762;

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
    msg.setTimeStamp(0.1782320191421667);
    msg.setSource(39171U);
    msg.setSourceEntity(171U);
    msg.setDestination(41297U);
    msg.setDestinationEntity(78U);
    msg.action = 10U;
    msg.longain = 0.9385205049006524;
    msg.latgain = 0.8592310680992666;
    msg.bondthick = 3908282614U;
    msg.leadgain = 0.834153437551215;
    msg.deconflgain = 0.18741196052739062;

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
    msg.setTimeStamp(0.9333825803060722);
    msg.setSource(20478U);
    msg.setSourceEntity(235U);
    msg.setDestination(21600U);
    msg.setDestinationEntity(80U);
    msg.action = 43U;
    msg.longain = 0.18945520510095648;
    msg.latgain = 0.582969580391128;
    msg.bondthick = 4182089994U;
    msg.leadgain = 0.7989444843596966;
    msg.deconflgain = 0.3028581337790981;

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
    msg.setTimeStamp(0.4792444225758302);
    msg.setSource(19461U);
    msg.setSourceEntity(84U);
    msg.setDestination(20088U);
    msg.setDestinationEntity(137U);
    msg.err_mean = 0.08482787304187167;
    msg.dist_min_abs = 0.51853082310642;
    msg.dist_min_mean = 0.831978865364065;

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
    msg.setTimeStamp(0.7652054993748505);
    msg.setSource(19504U);
    msg.setSourceEntity(130U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.7272487129550865;
    msg.dist_min_abs = 0.593694542191096;
    msg.dist_min_mean = 0.5286536173310584;

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
    msg.setTimeStamp(0.3580144693457854);
    msg.setSource(42842U);
    msg.setSourceEntity(87U);
    msg.setDestination(45040U);
    msg.setDestinationEntity(80U);
    msg.err_mean = 0.9758931264436665;
    msg.dist_min_abs = 0.5077058046274081;
    msg.dist_min_mean = 0.6739210628918133;

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
    msg.setTimeStamp(0.5187995240848043);
    msg.setSource(37156U);
    msg.setSourceEntity(208U);
    msg.setDestination(2946U);
    msg.setDestinationEntity(127U);
    msg.action = 10U;
    msg.lon_gain = 0.6803925408419625;
    msg.lat_gain = 0.14179251170913454;
    msg.bond_thick = 0.7220531398008586;
    msg.lead_gain = 0.06352504548468274;
    msg.deconfl_gain = 0.14479068192929878;
    msg.accel_switch_gain = 0.9567642410776407;
    msg.safe_dist = 0.589963919425599;
    msg.deconflict_offset = 0.015516550763804537;
    msg.accel_safe_margin = 0.2659603324662292;
    msg.accel_lim_x = 0.8088200011736519;

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
    msg.setTimeStamp(0.3085170707152157);
    msg.setSource(12685U);
    msg.setSourceEntity(41U);
    msg.setDestination(21492U);
    msg.setDestinationEntity(249U);
    msg.action = 172U;
    msg.lon_gain = 0.11526138377455453;
    msg.lat_gain = 0.5212106426516167;
    msg.bond_thick = 0.31675637856771977;
    msg.lead_gain = 0.205650440183185;
    msg.deconfl_gain = 0.09864929145363777;
    msg.accel_switch_gain = 0.3266172654334798;
    msg.safe_dist = 0.19970039285393637;
    msg.deconflict_offset = 0.12342456227296306;
    msg.accel_safe_margin = 0.9094650289964968;
    msg.accel_lim_x = 0.7206390189350895;

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
    msg.setTimeStamp(0.6382150675923833);
    msg.setSource(14349U);
    msg.setSourceEntity(146U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(45U);
    msg.action = 198U;
    msg.lon_gain = 0.4929986579678576;
    msg.lat_gain = 0.6264810153031652;
    msg.bond_thick = 0.716449661471672;
    msg.lead_gain = 0.6655370285958115;
    msg.deconfl_gain = 0.5066607136029445;
    msg.accel_switch_gain = 0.16374478662602088;
    msg.safe_dist = 0.8863142680313778;
    msg.deconflict_offset = 0.09460460429250994;
    msg.accel_safe_margin = 0.12052087806627931;
    msg.accel_lim_x = 0.9303358752104313;

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
    msg.setTimeStamp(0.15364299567910877);
    msg.setSource(4373U);
    msg.setSourceEntity(43U);
    msg.setDestination(33198U);
    msg.setDestinationEntity(175U);
    msg.type = 161U;
    msg.op = 253U;
    msg.err_mean = 0.541747923468892;
    msg.dist_min_abs = 0.7996576170906784;
    msg.dist_min_mean = 0.9146095766066767;
    msg.roll_rate_mean = 0.4068767293448816;
    msg.time = 0.09155628731641119;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 113U;
    tmp_msg_0.lon_gain = 0.5856518446949701;
    tmp_msg_0.lat_gain = 0.9273141630706572;
    tmp_msg_0.bond_thick = 0.41521825784850164;
    tmp_msg_0.lead_gain = 0.7518895245569507;
    tmp_msg_0.deconfl_gain = 0.11269855316407629;
    tmp_msg_0.accel_switch_gain = 0.06883331476722754;
    tmp_msg_0.safe_dist = 0.8427101219607676;
    tmp_msg_0.deconflict_offset = 0.6316793039684517;
    tmp_msg_0.accel_safe_margin = 0.20976616385840308;
    tmp_msg_0.accel_lim_x = 0.18397860214701656;
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
    msg.setTimeStamp(0.04702958571271776);
    msg.setSource(41495U);
    msg.setSourceEntity(60U);
    msg.setDestination(41515U);
    msg.setDestinationEntity(250U);
    msg.type = 112U;
    msg.op = 217U;
    msg.err_mean = 0.008224950618027749;
    msg.dist_min_abs = 0.4355165215804322;
    msg.dist_min_mean = 0.9844385909746117;
    msg.roll_rate_mean = 0.8066243578269178;
    msg.time = 0.6831476829977731;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 136U;
    tmp_msg_0.lon_gain = 0.14627482686438886;
    tmp_msg_0.lat_gain = 0.8444776385906694;
    tmp_msg_0.bond_thick = 0.05352171846164422;
    tmp_msg_0.lead_gain = 0.9750801384302671;
    tmp_msg_0.deconfl_gain = 0.6801460388443172;
    tmp_msg_0.accel_switch_gain = 0.23603208617354487;
    tmp_msg_0.safe_dist = 0.4217258093444599;
    tmp_msg_0.deconflict_offset = 0.04363209699572035;
    tmp_msg_0.accel_safe_margin = 0.4236757937600786;
    tmp_msg_0.accel_lim_x = 0.9891661845972812;
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
    msg.setTimeStamp(0.8688695017365768);
    msg.setSource(51905U);
    msg.setSourceEntity(84U);
    msg.setDestination(33559U);
    msg.setDestinationEntity(148U);
    msg.type = 37U;
    msg.op = 162U;
    msg.err_mean = 0.6838726904915172;
    msg.dist_min_abs = 0.7215883645667573;
    msg.dist_min_mean = 0.8340421165900854;
    msg.roll_rate_mean = 0.38932778538703294;
    msg.time = 0.9794453643528169;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 32U;
    tmp_msg_0.lon_gain = 0.027751731743940744;
    tmp_msg_0.lat_gain = 0.4132261909293391;
    tmp_msg_0.bond_thick = 0.9907850013843915;
    tmp_msg_0.lead_gain = 0.5313582969625671;
    tmp_msg_0.deconfl_gain = 0.46137632824873187;
    tmp_msg_0.accel_switch_gain = 0.7281204163304383;
    tmp_msg_0.safe_dist = 0.9964742250917388;
    tmp_msg_0.deconflict_offset = 0.33105019991413154;
    tmp_msg_0.accel_safe_margin = 0.8434416951848432;
    tmp_msg_0.accel_lim_x = 0.5042044065868427;
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
    msg.setTimeStamp(0.3246331167557369);
    msg.setSource(12551U);
    msg.setSourceEntity(229U);
    msg.setDestination(5598U);
    msg.setDestinationEntity(132U);
    msg.uid = 224U;
    msg.frag_number = 233U;
    msg.num_frags = 128U;
    const char tmp_msg_0[] = {74, -117, 63, 21, 93, 123, 26, -69, -10, 98, 65, 39, -118, 98, -58, -15, 78, 72, 84, -12, 101, 110, 112, -19, -45, 26, 86, 102, -15, -37, -48, 9, -14, 6, 37, 38, -28, 103, -127, 94, 85, 52, -78, -127, 49, 76, 44, -72, 28, -100, 43, -1, -51, -34, 97, -61, 95, 22, 124, -17, 82, -103, -16, -72, 96, -12, -112, 46, -83, -40, 112, 2, 91, -24, 126, -23, 62, -76, -44, 62, 81, -57, 86, 84, -11, 15, 41, -116, 78, 44, -113, 28, -55};
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
    msg.setTimeStamp(0.8844746484671739);
    msg.setSource(64473U);
    msg.setSourceEntity(251U);
    msg.setDestination(56732U);
    msg.setDestinationEntity(119U);
    msg.uid = 101U;
    msg.frag_number = 120U;
    msg.num_frags = 78U;
    const char tmp_msg_0[] = {-19, -88, -94, -15, 114, 15, -7, -88, 39, -19, -100, 6, -32, -34, 47, 31, -54, 60, -46, 78, -77, 112, 61, 63, 122, 10, -114, 36, -103, 93, -88, 96, -127, -23, -55, -66, -41, -57, 25, -110, 20, -101, 44, -9, -109, -38, -89, 113, -91, -80, 62, 105, 62, -97, 54, 93, 33, -8, -6, 107, 119, 38, -113, 83, -61, -24, 90, -128, 99, -10, -98, -49, -55, -8, 104, 109, -88, 50, 89, -109, -128, -100, 92, -37, -126, -91, 118, 2, -29, 41, -101, 39, -92, -9, 103, 117, 12, 112, -62, -126, -102, -60, -112, -39, -88, -39, -35, -18, -28, 75, -40, -5, 64, -45, 39, 38, 54, 117, -59, -35, -27, 56, 122, -42, 122, -93, -96, -108, -7, -77, -49, 125, -52, -74, -29, 14, 67, 118, 44, -10, 99, -50, -67, 64, -84, 104, -12, -125, 32, 18, -114, -120, 79, -20, 97, -68, -96, 40, -86, -66, -6, -45, 111, 87, 85, 58, -89, -13, -110};
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
    msg.setTimeStamp(0.4636673437642377);
    msg.setSource(4927U);
    msg.setSourceEntity(111U);
    msg.setDestination(63042U);
    msg.setDestinationEntity(231U);
    msg.uid = 22U;
    msg.frag_number = 201U;
    msg.num_frags = 96U;
    const char tmp_msg_0[] = {106, -97, 35, 17, -18, -26, 98, 17, 92, -10, 113, -127, -54, 54, -85, 95, 64, 104, -110, -56, -78, -87, 12, -3, 28, -8, -63, 99, -1, 86, 46, 34, 71, 9, 82, -114, 113, -122, -76, 57, -91, -112, 106, -109, -53, -83, -117, -9, -98, -115, -59, -123, 106, -17, -14, -119, -40, 103, 69, 101, -14, 4, 49, -116, -61, -102, 105, -11, -7, 36, 112, -16, -36, -120, -80, 102, -58, 16, 27, -123, -103, 54, -74, -2, -113, 61, 6, 112, 38, 72, 110, -21, -49, -104, 117, 113, 76, -67, 63, 72, 42, 24, -128, 89, 74, -117, 82, 99, 125, -108, 9, -116, -125, 97, -36, -35, 28, -19, 84, 36, 72, 92, -89, -29, -57, 68, -89, -58, 108, 94, 104, -60, -47, -17, -122, -65, 103, 97, 15};
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
    msg.setTimeStamp(0.7314308858240183);
    msg.setSource(46919U);
    msg.setSourceEntity(250U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(55U);
    msg.content_type.assign("GDSQUKEYFMBWKIRPWRCVBBUJQCQIEUMIQHWZIZOADHPJKTCIBLTVMLVWNWBWRQXDHXOONEUANHKMDSASFNSCJLDUHNVRNJLTBFAHXPCIEVZAGMHMGFRDGWPLZETYESGJOONNYJSPHCQEZRGXTIXIPPIGVWQXZWVKYFCDNVMKGRBOPGCUFPXAZUYEUQTLKRYMMZJDFYOODGO");
    const char tmp_msg_0[] = {-82, 94, -101, -87, -74, -10, -62, -74, 79, 10, 123, 90, -32, 56, -121, 95, -98, 116, 76, -84, 84, -106, 124, -69, 58, -20, -29, 16, 104, -37, 53, -125, 14, 74, -123, 49, -22, -24, -112, 53, 38, -40, -83, -4, 74, 23, -113, 49, -35, -18, 68, 125, -12, -18, -78, -26, -78, 28, -45, 87, -10, 90, -54, -25, -14, -49, 27, -106, 6, 4, 36, -58, -106, -25, -117, 76, -108, 43, 125, -14, 25, -105, 15, -107, 92, -43, 55, 1, -84, -128, 36, 112, -69, 93, 60, -64, 37, 10, -27, 67, -32, -89, 57, 22, 114, 81, -50, -63, -28, 12, -116, -71, 21, -5, -18, -90, -110, -1, 1, 22, -10, 47, -34, 103, -61, -74, -98, -58, 88, 34, 112, -104, 14, -69, 28, 1, 71, 119, 49, 75, -99, 104, 63, 50, -49, -55, -117, -87, 13, -42, -94, 73, 52, -109, -47, 16, 80, -122, -61, -100, 82, 18, 64, -59, 10, -91, 126, 105, 107, -78, 71, 118, -50, 122, 30, 52, 31, -50, 43, -94, -118, -43, 60, -98, -70, -34, 69, -35, -60, 71, -89, 114, -81, -33, 125, 58, 49, -103, -26, -84, -120, 86, 47, 79, 51, -102, 65, 97, -73};
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
    msg.setTimeStamp(0.5986493335447861);
    msg.setSource(24768U);
    msg.setSourceEntity(4U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(129U);
    msg.content_type.assign("IAHIRTPGBZOPMWHYRAFUWJEHMTXCJFZXCCSBGLPEDBLUDRLLPKDFBKNOHQTTKXICWKXXSGSZBYVNPRKSVOOLDHWNWTACQFZJQEBO");
    const char tmp_msg_0[] = {-124, -15, -22, 30, 11, -103, -92, -41, -124, 115, 19, -91, 12, -72, 37, 94, -45, -35, 68, 45, -6, -93, -76, 73, -10, 27, -118, 14, 12, 101, -35, -116, 84, 70, -4, -51, 95, -18, 27, 76, -89, -117, -48, -11, 119, -89, 114, -55, 113, 22, 119, -127, 39, 25, 120, 26, 88, 0, -73, 53, -46, 106, 71, -45, 51, 125, -29, -86, -47, 54, 120, 2, -89, 87, 105, -51, -90, 120, 126, -8, -36, -39, 119, 25, 59, 12, -27, 8, 94, -58, 98, -56, -6, -19, 26, -104, 65, -72, -82, 126, 19, -109, -7, -122, 99, 104, 13, 99, -20, 56, -93, -48, 94, -55, 123, 36, 17, 18, -53, -5, -13, 16, 59, -1, 25, -101, 21, -54, -36, 124, -62, -9, 23, -107, -42, -58, 65, -84, 49, 33, -119, 77, -106, 64, 121, 117, -57, -67, -128, 102, 108, -81, -100, -7, 71, -86, -51, -39, -8, 64, -8, -39, 16, -15, 29, -50, -30, -64, -104};
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
    msg.setTimeStamp(0.35592153824595485);
    msg.setSource(12528U);
    msg.setSourceEntity(249U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(246U);
    msg.content_type.assign("TFOJBRGRJPIFQAPSEMPSSMOJUOKARTVRRSDIGYJUHLWFFHWLYIVQXFWKWLCVKEQEZBBCXOCKMSPGZCKEAXMIOIDUJULRMLIWEHDZSVGPQAHWMSUAGDNMYITCVUXZYBBENVFUQUXVIYGLQDQETAZOBTKKRPJDOUFHLAQEETOWNHQIIRSVMZEYWGZBBDY");
    const char tmp_msg_0[] = {-35, 12, -9, -23, -1, -86, -59, 76, 54, -111, 77, -128, -36, -40, 86, 38, 31, -125, 87, -94, 89, 49, 91, 85, 95, 33, 121, 66, -30, 110, -119, 60, 107, -110, -45, 37, 93, 22, 73, 37, 92, -125, 39, 117, -71, 72, -54, -91, -88, 85, -93, -127, -122, 13, -61, -61, 56, 21, 26, 30, 119, -70, -57, 54, 86, 11, 74, -11, 86, 11, 62, 109, 81, -24, 123, 101, -71, -64, -23, 44, -121, -3, -96, 60, -116, 126, 106, -98, -55, 30, -98, -39, -64, -66, 19, -59, -58, 56, 109, -60, -52, -11, -89, 109, -119, 76, 101, 17, -57, -120, 21, 120, -95, -62, -97, 64, -121, -120, 81, 76, -48, -37, 12, 34, -54, 98, 77, -88, 108, 39, 83, -36, -6, 82, -51, -111, -23, 43, -74, -36, 89, -5, -17, 19, 52, 125, 10, -68, -57, -40, 90, 4, -10, -20, -80, -99, 64, -99, 28, 69, 21, 108, 39, 63, -70, 64, -52, 49, -60, -58, 30, 64, -61, 96, 72, -14, -67, -27, -107, 4, 115, -11, -79, -123, -92, -55, 91, -98, 39, 51, 46, 69, 122, 112, -83, -110, -13, -122, -42, 78, 5, 2, -65, -14, -23, -13, 40, 84, 102, 106, -76, -41, 47, 89, 121, -101, -95, 64, 23, -69, 18, -24, 16, 94, -51, -24, -95, 19, -63, 83, -115, -44, 81, 56, 1, -111, 41, 17, 56, 91, 62, -33, 76, 19};
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
    msg.setTimeStamp(0.5145352093439607);
    msg.setSource(29310U);
    msg.setSourceEntity(82U);
    msg.setDestination(11014U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.8862480120853125);
    msg.setSource(25434U);
    msg.setSourceEntity(220U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.8207898592788554);
    msg.setSource(21201U);
    msg.setSourceEntity(42U);
    msg.setDestination(17014U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.08737614145348815);
    msg.setSource(41254U);
    msg.setSourceEntity(243U);
    msg.setDestination(50706U);
    msg.setDestinationEntity(232U);
    msg.target = 55601U;
    msg.bearing = 0.6663474359634644;
    msg.elevation = 0.634654068179481;

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
    msg.setTimeStamp(0.39127337350959546);
    msg.setSource(597U);
    msg.setSourceEntity(135U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(68U);
    msg.target = 31740U;
    msg.bearing = 0.5203693239933016;
    msg.elevation = 0.16028967010920647;

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
    msg.setTimeStamp(0.5177214473558607);
    msg.setSource(32272U);
    msg.setSourceEntity(210U);
    msg.setDestination(31946U);
    msg.setDestinationEntity(15U);
    msg.target = 3944U;
    msg.bearing = 0.33737277864895265;
    msg.elevation = 0.4248489738790936;

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
    msg.setTimeStamp(0.9262270322195225);
    msg.setSource(34627U);
    msg.setSourceEntity(127U);
    msg.setDestination(28957U);
    msg.setDestinationEntity(180U);
    msg.target = 38490U;
    msg.x = 0.5200868973494479;
    msg.y = 0.2655132575465661;
    msg.z = 0.2753876914032819;

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
    msg.setTimeStamp(0.4566134068371228);
    msg.setSource(49571U);
    msg.setSourceEntity(198U);
    msg.setDestination(3294U);
    msg.setDestinationEntity(189U);
    msg.target = 24252U;
    msg.x = 0.43897022300752286;
    msg.y = 0.0015349158534195828;
    msg.z = 0.03714759997968686;

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
    msg.setTimeStamp(0.001746304141996502);
    msg.setSource(40503U);
    msg.setSourceEntity(181U);
    msg.setDestination(44629U);
    msg.setDestinationEntity(236U);
    msg.target = 36676U;
    msg.x = 0.4043746285015184;
    msg.y = 0.7343002819482105;
    msg.z = 0.25103082131486165;

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
    msg.setTimeStamp(0.8745809325311149);
    msg.setSource(45418U);
    msg.setSourceEntity(225U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(89U);
    msg.target = 64328U;
    msg.lat = 0.9134302798166811;
    msg.lon = 0.4651589094102422;
    msg.z_units = 23U;
    msg.z = 0.7123780697799884;

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
    msg.setTimeStamp(0.8222592719967677);
    msg.setSource(163U);
    msg.setSourceEntity(22U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(77U);
    msg.target = 31379U;
    msg.lat = 0.5463583836836047;
    msg.lon = 0.22762049609953217;
    msg.z_units = 29U;
    msg.z = 0.3103403116908089;

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
    msg.setTimeStamp(0.4910248501996737);
    msg.setSource(51537U);
    msg.setSourceEntity(168U);
    msg.setDestination(32932U);
    msg.setDestinationEntity(135U);
    msg.target = 51452U;
    msg.lat = 0.602283368468616;
    msg.lon = 0.8400230682582809;
    msg.z_units = 221U;
    msg.z = 0.7833608365922159;

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
    msg.setTimeStamp(0.24877489492372118);
    msg.setSource(15948U);
    msg.setSourceEntity(243U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("FRKTWUYYVDOIFHVXRDSHXYKPDAUMPCWJXGHLYRPYXDZZ");
    const char tmp_msg_0[] = {65, -45, -68, 45, 46, -5, -113, 19, 98, 99, 21, -15, -57, -126, -63, 34, 74, 38, 78, 91, -37, 82, 17, -120, 120, 25, 33, -44, 110, 27, 34, -2, -20, -55, 30, -119, 9, 50, 74, -117, 100, 60, 52, 29, -33, -101, -84, -99, 31, -5, -124, 39, 118, -6, 40, 13, 30, -109, -30, 73, -102, -16, 53, 72, 59, 41, 43, -20, -88, 2, 55, -66, -16, -114, -111, -87, 77, 82, -65, -63, 106, 107, 40, 23, 116, -72, -73, 101, -5, -50, 82, -68};
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
    msg.setTimeStamp(0.39597885287588475);
    msg.setSource(2221U);
    msg.setSourceEntity(15U);
    msg.setDestination(27653U);
    msg.setDestinationEntity(85U);
    msg.locale.assign("BORGOZIJJUAPUZABGEEESFLMU");
    const char tmp_msg_0[] = {3, -124, 101, 85, 74, -30, 114, -107, -120, -88, -56, 43, -86, 89, -68, 113, 34, -72, 112, -108, 68, 67, -33, 120, -12, -70, -52, -95, 75, -108, 108, -105, 96, -75, 43, -104, 60, 98, 122, -70, -40, 104, 118, -114, -23, 15, -18, -96, -91, 28, 77, 37, 74, 104, 81, -50, 49, 110, 117, 54, 42, -66, 21, -122, 22, -75, -55, -80, 124, 37, 16, 48, 81, 6, -67, -1, -2, 24, 100, -25, -84, 53, -41, -16, 76, 59, 55, -44, 65, -118, 12, -56, -47, -53, 53, 55, -52, 105, 53, -100, -18, 23, -51, 126, -73, -5, 80, -54, 117, 93, 36, 76, 70, 88, -128, 115, -94, -32, -91, 16};
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
    msg.setTimeStamp(0.9004772767243625);
    msg.setSource(1759U);
    msg.setSourceEntity(54U);
    msg.setDestination(21617U);
    msg.setDestinationEntity(90U);
    msg.locale.assign("HCUFWEXEIUBNGXFJSIEOQGPTEXIRZJJKKKMGZAVLHJWBLJXUBDVOLFUCACPSWDZSNOPMZRQNWBYNMRXDDDGTAPOGSEZHIZRVRONTMESFORWZVBFGSICVXANUIYLGDHNXJCCUUMCFYQRTQEEKLWLKKHSLINTKYALMWBJGQZPLRAVWUQXVZYBFLQBDJPPCEY");
    const char tmp_msg_0[] = {97, -6, -59, 93, 33, 60, 83, -112, 65, -20, 47, 14, 8, -10, -82, 0, 47, 48, -44, -8, 64, 122, 102, 52, 66, 39, 37, -44, -102, -116, 126, -3, 90, -52, 74, -1, 6, -98, -88, 2, 124, 55, -98, 100, -46, 16, -126, -57, -83, -23, 122, -67, 57, -79, 98, 76, -16, -71, 110, 7, -116, 97, -72, -76, -84, -128, -128, -14, 101, 92, -9, -69, 11, -37, 44, -103, 51, 89, 25, -98, -121, -42, 64, -32, -55, -22, -80, 72, 25, -63, -76, -121, 51, 63, -18, -36, -22, 104, -28, -12, 82, 106, -32, 36, 67, -22, 28, 71, 71, 30, -70, -65, -94, 10, -84, 25, -92, -101, 104, 122, 60, -111, 14, 88, 118, 7, 70, 83, 45, 110, -34, 96, 7, -114, 120, -12, 0, -75, -128, 117, -77, 9, 74, -41, -71, -128, 96, -123, -85, 4, 72, -5, 24, 39, -67, 87, -18, 70, -103, 67, -51, 62, 33, 28, -88, -48, 34, 28, -15, -58, -101, 19, -20, -126, -85, -31, 17, 80, -32, -8, 18, 6, 12, 28, 85, 102, 101, 13, 63, 59, -28, -30, -33, -2, 97, -16, 21, 25, 72, -90, -62, 125, -71, -101, 113, 50, -53, -14, 69, 119, 28, 15, 43, -106, -58, 59, 9, -4, 33, -126, -60, 102, -112, -66, -1, 21, 54, 5, -81, -118, -42, 58, 90, -119, 101, -30, -111, -116, -25, -11, -43, 105, 78, 38, 61, -39, -16, -64, 114, 108, -15};
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
    msg.setTimeStamp(0.3294454614982564);
    msg.setSource(63711U);
    msg.setSourceEntity(19U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.8022236632778786);
    msg.setSource(21347U);
    msg.setSourceEntity(248U);
    msg.setDestination(57998U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.37860170260778814);
    msg.setSource(16536U);
    msg.setSourceEntity(9U);
    msg.setDestination(33003U);
    msg.setDestinationEntity(159U);

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

  return test.getReturnValue();
}
