//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 7241246f65440cf326778a33996444d8                            *
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
    msg.setTimeStamp(0.3152462741886408);
    msg.setSource(25745U);
    msg.setSourceEntity(113U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(163U);
    msg.state = 196U;
    msg.flags = 45U;
    msg.description.assign("MWBVHORCNPVLVIVEBKNLFHGYBDKQWKVCFTNTHODGMLKSADJVEBJSQYCZBWWZIXKJFRYPTJQPYXAASQQIGIIDHGPDZNCLILSPOIGHUFDNUEJKKDGJTPRVEJCRSPWPFGMDLARJOYQKNODMOUZIZYL");

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
    msg.setTimeStamp(0.8914934136690639);
    msg.setSource(32271U);
    msg.setSourceEntity(42U);
    msg.setDestination(49142U);
    msg.setDestinationEntity(90U);
    msg.state = 158U;
    msg.flags = 232U;
    msg.description.assign("WPDNGASXHELLQKVEFIWKPMHVFOPDOKBCKMVVOYYQOGUJLSPDGKJHWOXBAHG");

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
    msg.setTimeStamp(0.9893111224690375);
    msg.setSource(5184U);
    msg.setSourceEntity(221U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(44U);
    msg.state = 167U;
    msg.flags = 111U;
    msg.description.assign("OICECBSNOQVYMEUCUOGDSRKKYWLPMKJMDYOIFVYZOGVNVZHTUMWANBQMGXBTDORZPADPMKNSFDXWQVPBLMJPUREUZHSNWUPKNXZCFSTREUEXHPQCFWLOLJGXJVSPSBOIQCWWJOBXHVJBNZNADIIYJEQTCRFTLBHGUIYHIFDFVHHZYDRGRGMAQMJUMYDCEKVXOGZKCQA");

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
    msg.setTimeStamp(0.10148615400926075);
    msg.setSource(52918U);
    msg.setSourceEntity(162U);
    msg.setDestination(35265U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.37505164342915465);
    msg.setSource(2542U);
    msg.setSourceEntity(124U);
    msg.setDestination(46086U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.7990923452215866);
    msg.setSource(51330U);
    msg.setSourceEntity(213U);
    msg.setDestination(43673U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.7774559004412089);
    msg.setSource(65322U);
    msg.setSourceEntity(164U);
    msg.setDestination(9175U);
    msg.setDestinationEntity(161U);
    msg.id = 215U;
    msg.label.assign("QSBMSMRDXLDORWBHTUMNSJJSCAXQSAIJTLJWJJZFWLEZQHGVAIZEFMLQYSRUGMOAHDTOYHVWFDSIPURPEVRCLRNUKFSAUCWORFZDBZCAVRPVTPHXKVEBINBCWTQYPYYNPFJGKRPKZEKDZSIEYYBKHCXGLDNOPFGIMUVXUEQJMMANMOPUNPDCGITGCNQOELFYHVYMSEVIZHKCZKJGOXIERNXANTGXBHLBQKI");
    msg.component.assign("QMRZMMXZSRPJUIBEUBSXINPOMMPFMNQJQBFVWVNMBPPGTQSKSU");
    msg.act_time = 38209U;
    msg.deact_time = 12090U;

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
    msg.setTimeStamp(0.0033183687134457074);
    msg.setSource(22661U);
    msg.setSourceEntity(245U);
    msg.setDestination(39181U);
    msg.setDestinationEntity(54U);
    msg.id = 74U;
    msg.label.assign("GEGOYNWVWMJKUKEMCUTOMJTBYILQHEJADCYBSIFXMQCJVHHZESPUTHUUSKPTA");
    msg.component.assign("XMRJHKGYKDFGELJWGNGEPTPYCOYNGQWDCIKTDBVJGYIHQWLGHYVKCDPASMRAXNVSEDUUICQWHFHTZOATRANBOVMHXVDUITGTCRVOBJWUOB");
    msg.act_time = 47885U;
    msg.deact_time = 48884U;

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
    msg.setTimeStamp(0.2850868682119789);
    msg.setSource(47562U);
    msg.setSourceEntity(3U);
    msg.setDestination(38050U);
    msg.setDestinationEntity(218U);
    msg.id = 238U;
    msg.label.assign("XLGHCNTGUORDUAFXNAMFLKYDFUOIEOKEMKGDJLEKBTZYEOUZZZAGJTXXNWYDMBFWOJOSUQHHZJCRZTLCNT");
    msg.component.assign("AVOOUQCLSLDVOECOGFRERMFJZDWBPNSSYBKNMCQOOBDCGCKFMQTOCCHSYJTYJGGTKDAHMBLBQFTMIHYQRENSTYUAHXMPEYUEHZXVCTGPJKHFPEXWAFSDWXRVIZMXWMPXULDSIOLUMAEGOXKAHPZKBLPIXZZIPFGUZQLYCYPLUCWGGHWWIJWVIBJSSADLDZODERTNUTVRLVMAJYBFFIBREASV");
    msg.act_time = 48150U;
    msg.deact_time = 45900U;

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
    msg.setTimeStamp(0.9114785275541213);
    msg.setSource(28260U);
    msg.setSourceEntity(209U);
    msg.setDestination(18138U);
    msg.setDestinationEntity(232U);
    msg.id = 199U;

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
    msg.setTimeStamp(0.9412052300814884);
    msg.setSource(1358U);
    msg.setSourceEntity(231U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(96U);
    msg.id = 150U;

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
    msg.setTimeStamp(0.6855417373348359);
    msg.setSource(3253U);
    msg.setSourceEntity(170U);
    msg.setDestination(48762U);
    msg.setDestinationEntity(65U);
    msg.id = 97U;

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
    msg.setTimeStamp(0.8579461763164075);
    msg.setSource(46215U);
    msg.setSourceEntity(111U);
    msg.setDestination(45923U);
    msg.setDestinationEntity(145U);
    msg.op = 167U;
    msg.list.assign("XOHICQWNALOFYGPMQUEMJJUKGKBQYZZKCDJIIVADVVRNOCAAWYVFQTPUAPWBSE");

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
    msg.setTimeStamp(0.8028342364664796);
    msg.setSource(22323U);
    msg.setSourceEntity(164U);
    msg.setDestination(12865U);
    msg.setDestinationEntity(233U);
    msg.op = 140U;
    msg.list.assign("JFMZDUMAGDEDHPYFSAROPLLSRXOGOMZMKHYCVEBDWVIZOXNGCEUPUFQARYNICIPHWXKVIBNHNHZCDXAQCMWZYHGLQYYMSJZVWKKCFVJVKNGAZPGIWRGQNZCJLOTFAXXSUUVWGFPZLADLBTLHKT");

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
    msg.setTimeStamp(0.8689180797607768);
    msg.setSource(36036U);
    msg.setSourceEntity(160U);
    msg.setDestination(20723U);
    msg.setDestinationEntity(146U);
    msg.op = 50U;
    msg.list.assign("OCPDDHEUBXXSBZOCADQVLQEWEFAMTKAXOSJWZGRJETKIGVANZVROOTHYXRZFHWSFAALQVNRCBJZJRXSWIWNBFACURARLRZTSKHPHJF");

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
    msg.setTimeStamp(0.23996544842213596);
    msg.setSource(58971U);
    msg.setSourceEntity(167U);
    msg.setDestination(31442U);
    msg.setDestinationEntity(171U);
    msg.value = 22U;

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
    msg.setTimeStamp(0.9258791705980562);
    msg.setSource(56491U);
    msg.setSourceEntity(73U);
    msg.setDestination(58339U);
    msg.setDestinationEntity(73U);
    msg.value = 99U;

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
    msg.setTimeStamp(0.8514744975762737);
    msg.setSource(44866U);
    msg.setSourceEntity(129U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(39U);
    msg.value = 49U;

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
    msg.setTimeStamp(0.6489681200656424);
    msg.setSource(31508U);
    msg.setSourceEntity(135U);
    msg.setDestination(64368U);
    msg.setDestinationEntity(252U);
    msg.consumer.assign("VUNYENDIPEWDLXNRXZYARVCKHHEZGJZRSRETYEPFA");
    msg.message_id = 21794U;

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
    msg.setTimeStamp(0.5863646759304288);
    msg.setSource(32987U);
    msg.setSourceEntity(141U);
    msg.setDestination(4946U);
    msg.setDestinationEntity(146U);
    msg.consumer.assign("QILGRAAPOQCFYVRLTCAAIXISYLCUTXCVYLJLIEGPDOXDQYWMDCKZZDMXEBTVMKIEPUQCWAEJUFGZISQWTMKEJRRZRGALISWKFNABLFNUXJKGABKHBUXQHHPUSGRWNNPHXWZAGRJRBTDKYQQJGYVBIXMECLBLAVOOOJZNFFTW");
    msg.message_id = 9059U;

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
    msg.setTimeStamp(0.6997805683193765);
    msg.setSource(17416U);
    msg.setSourceEntity(3U);
    msg.setDestination(48857U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("YUNMZWISKNMIFHYNYXJWWUFCISVFAYFZODTGXLZEKEVIRNRNBOPQHMBSAAOTMJGBPCFGZJJAPCDDLCAVQNVJIUDHUOGALKHSLHXHSRWROSTBTWVKNPKIDXGVHYUKCQCJKQGNKTXFYBMGOYVCUXEZEINCMIERYUKEETXVDRHLQKEFEDYXZATIJYBZWOPQAJTPI");
    msg.message_id = 4034U;

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
    msg.setTimeStamp(0.08938838738386834);
    msg.setSource(51195U);
    msg.setSourceEntity(166U);
    msg.setDestination(142U);
    msg.setDestinationEntity(242U);
    msg.type = 137U;

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
    msg.setTimeStamp(0.3642222247032333);
    msg.setSource(12925U);
    msg.setSourceEntity(10U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(198U);
    msg.type = 124U;

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
    msg.setTimeStamp(0.40103907506034553);
    msg.setSource(56244U);
    msg.setSourceEntity(122U);
    msg.setDestination(57985U);
    msg.setDestinationEntity(210U);
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
    msg.setTimeStamp(0.0049956738234445686);
    msg.setSource(9558U);
    msg.setSourceEntity(198U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(182U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.04134458424002829);
    msg.setSource(11881U);
    msg.setSourceEntity(143U);
    msg.setDestination(1969U);
    msg.setDestinationEntity(50U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.014017126886585407);
    msg.setSource(54749U);
    msg.setSourceEntity(76U);
    msg.setDestination(56230U);
    msg.setDestinationEntity(202U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.7636374021638267);
    msg.setSource(45661U);
    msg.setSourceEntity(12U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(193U);
    msg.total_steps = 65U;
    msg.step_number = 4U;
    msg.step.assign("VJSLHYLVNDJQQDCHJLEMVEUINCOZJWFTZBLYWPBYHENCROWYWHGIEUKKNGFUICJHGRCKAARTXHLDSFEZHIGPMGAHLALXOBTNWHVOITSSCQBQEAHVKDXJTXIFNUYDVGPOAPFURRXTBELAKZKJZJPWZVXKZMYWSAYBSLTKJMRTMBPEPVUODFVQAKVPQMRCGIIBOMOBOSUPRZZNQBWMDADR");
    msg.flags = 75U;

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
    msg.setTimeStamp(0.7340491113780395);
    msg.setSource(19278U);
    msg.setSourceEntity(119U);
    msg.setDestination(8960U);
    msg.setDestinationEntity(92U);
    msg.total_steps = 132U;
    msg.step_number = 235U;
    msg.step.assign("VYVIFBLMNMSROQAWVLSHRIHYNMOTEEOJRWASPIZFQMXXNSUQQYGGBDLFYTHQQKHUMILVZQRPFIGRNVJKXBBDDRUXSKKOWFJZSJ");
    msg.flags = 193U;

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
    msg.setTimeStamp(0.7716836824516206);
    msg.setSource(22879U);
    msg.setSourceEntity(210U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(66U);
    msg.total_steps = 202U;
    msg.step_number = 159U;
    msg.step.assign("VAQQICEZNEOXGTRPHQKTNCRBQZSHZDOZFTYLSMMJMYLUPAUWPZRNVMXKMLTKADKKJCWUNJPJZZFVRDXYIRYBVUJHEBVAHADHYNGEIJDOMWIGBRTGBNINQENQWVQSSOWKKCSFXKWDUQRJFXOFWPLMDUETDMAKNIXYBTFHRWJHIHLICPHMWLYAUZWCCGFCTBOYGLEVTUXITOCBLEFAFZ");
    msg.flags = 139U;

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
    msg.setTimeStamp(0.10489148830623196);
    msg.setSource(29267U);
    msg.setSourceEntity(210U);
    msg.setDestination(1378U);
    msg.setDestinationEntity(157U);
    msg.state = 57U;
    msg.error.assign("PWDZKOFRNNPSIUXCWGJRGAECZEVPOTUHMQNDWAVLYCQENTFHFLMYKPQIZWLMMUEUXYJRJYXDMVIRGOCUEZBCGKOBFBJDXQXZOJEBEXSRGHUVKRALOZBVOPGRCIFNFOPKAAVQIASHVXSRIWEVLW");

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
    msg.setTimeStamp(0.6692334413652288);
    msg.setSource(21142U);
    msg.setSourceEntity(67U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(210U);
    msg.state = 105U;
    msg.error.assign("IZJXYDXSFTQIKZLAQPVXRWMBAKYKRYVYTYMOKMEUBWDJFLFIDZLMBGCXJNQDCNPYVGCUPXHWMVHPQTQYKVOLKUPHGCPGJYFVESXORPEKOMFAPNMCMHLPEIDBNRNOKSSNOIRZJGYRAQQLSNAVEFXORKUIDGQYFHWMGVNGBIIDTXZUSBLLRFGBUEFCHETMTGJCAZWUULNTBWEENQESDHZHVW");

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
    msg.setTimeStamp(0.40071955675781934);
    msg.setSource(17787U);
    msg.setSourceEntity(117U);
    msg.setDestination(55692U);
    msg.setDestinationEntity(216U);
    msg.state = 19U;
    msg.error.assign("PBAZUFFLOMCUTAMUNEXTBZJSFKMGRNRMYHPNXTBCVBESQPRWJWURNKVOQV");

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
    msg.setTimeStamp(0.6212385205871499);
    msg.setSource(53548U);
    msg.setSourceEntity(5U);
    msg.setDestination(20555U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.2514009934289978);
    msg.setSource(64822U);
    msg.setSourceEntity(84U);
    msg.setDestination(43139U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.4466040215213314);
    msg.setSource(51733U);
    msg.setSourceEntity(178U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.06917160452666349);
    msg.setSource(31634U);
    msg.setSourceEntity(168U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(233U);
    msg.op = 99U;
    msg.speed_min = 0.2862564715659841;
    msg.speed_max = 0.18721410643338032;
    msg.long_accel = 0.7419200982038898;
    msg.alt_max_msl = 0.7490808521959316;
    msg.dive_fraction_max = 0.335858273591246;
    msg.climb_fraction_max = 0.5168748682870348;
    msg.bank_max = 0.054705322857181105;
    msg.p_max = 0.9762296407779052;
    msg.pitch_min = 0.5003102172655605;
    msg.pitch_max = 0.8265483424934994;
    msg.q_max = 0.11342235824352953;
    msg.g_min = 0.8040860751202725;
    msg.g_max = 0.8438736031458566;
    msg.g_lat_max = 0.47539788394089244;
    msg.rpm_min = 0.8155647474216341;
    msg.rpm_max = 0.002981113746683195;
    msg.rpm_rate_max = 0.472575913787474;

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
    msg.setTimeStamp(0.1036939523819218);
    msg.setSource(44984U);
    msg.setSourceEntity(254U);
    msg.setDestination(38322U);
    msg.setDestinationEntity(245U);
    msg.op = 106U;
    msg.speed_min = 0.4333369048191298;
    msg.speed_max = 0.6070858315893191;
    msg.long_accel = 0.6968444861036623;
    msg.alt_max_msl = 0.5325400886361479;
    msg.dive_fraction_max = 0.2156390813163599;
    msg.climb_fraction_max = 0.8048792627812387;
    msg.bank_max = 0.4243874933387658;
    msg.p_max = 0.6553232169761531;
    msg.pitch_min = 0.8228524087453171;
    msg.pitch_max = 0.14893123905167738;
    msg.q_max = 0.6191194493729124;
    msg.g_min = 0.3508598791602119;
    msg.g_max = 0.8627076733882872;
    msg.g_lat_max = 0.5418594698203242;
    msg.rpm_min = 0.4190258246237679;
    msg.rpm_max = 0.8212478211106119;
    msg.rpm_rate_max = 0.11987827477250379;

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
    msg.setTimeStamp(0.895184148982491);
    msg.setSource(3479U);
    msg.setSourceEntity(241U);
    msg.setDestination(18332U);
    msg.setDestinationEntity(130U);
    msg.op = 161U;
    msg.speed_min = 0.7114473615628311;
    msg.speed_max = 0.11310261029335811;
    msg.long_accel = 0.21151529233712374;
    msg.alt_max_msl = 0.08779960397577224;
    msg.dive_fraction_max = 0.443432887575377;
    msg.climb_fraction_max = 0.5698713106117288;
    msg.bank_max = 0.2649955064637952;
    msg.p_max = 0.5284493866906174;
    msg.pitch_min = 0.4039273783663191;
    msg.pitch_max = 0.7810212509946095;
    msg.q_max = 0.8421154555052267;
    msg.g_min = 0.21489071612462052;
    msg.g_max = 0.39584562245433363;
    msg.g_lat_max = 0.8242685072575077;
    msg.rpm_min = 0.5378050526202687;
    msg.rpm_max = 0.8602061080306307;
    msg.rpm_rate_max = 0.9072077439237272;

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
    msg.setTimeStamp(0.8069403358937758);
    msg.setSource(33569U);
    msg.setSourceEntity(121U);
    msg.setDestination(49721U);
    msg.setDestinationEntity(166U);
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FDBFVHONIISTPTDTXGIJRKPPAMDSDWRBNOBCLEPVAZSXYGKBZMUVAXAUMRNMEKSCDIDCJCEQAAAHELBKPJVYTZUFTBHKZMEUWOBFLVNLEELENKIZQWOOHRKXYJPLXQYTOJWBMTUXWAAHOQZSFOMOLHGFFCZRIJVSKGKWEYNVXVQYUIQMSPDECYHJRSULFAUWCQXZG");
    tmp_msg_0.feature_type = 6U;
    tmp_msg_0.rgb_red = 139U;
    tmp_msg_0.rgb_green = 157U;
    tmp_msg_0.rgb_blue = 214U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.13397279185716737;
    tmp_tmp_msg_0_0.lon = 0.5529527720208601;
    tmp_tmp_msg_0_0.alt = 0.5291087365903397;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3508934096459244);
    msg.setSource(20235U);
    msg.setSourceEntity(111U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.9744940379402691);
    msg.setSource(4390U);
    msg.setSourceEntity(203U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.32209308226563393);
    msg.setSource(18474U);
    msg.setSourceEntity(252U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.382322006259453;
    msg.lon = 0.7933719745921395;
    msg.height = 0.6591423540335739;
    msg.x = 0.9220000846258052;
    msg.y = 0.4306420399792402;
    msg.z = 0.10794314697179963;
    msg.phi = 0.3370752145083995;
    msg.theta = 0.16697519226549662;
    msg.psi = 0.5510156800193642;
    msg.u = 0.379481650343663;
    msg.v = 0.2533916530739555;
    msg.w = 0.16479544085451014;
    msg.p = 0.9753160578979129;
    msg.q = 0.7995221239485285;
    msg.r = 0.7538379488537809;
    msg.svx = 0.042881842956315586;
    msg.svy = 0.9293476030512342;
    msg.svz = 0.9241127434471408;

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
    msg.setTimeStamp(0.33863837968211397);
    msg.setSource(44158U);
    msg.setSourceEntity(245U);
    msg.setDestination(21587U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.9622901789779555;
    msg.lon = 0.6474900616735901;
    msg.height = 0.7210786785921645;
    msg.x = 0.20588854059916561;
    msg.y = 0.3972638953484581;
    msg.z = 0.8683167376511733;
    msg.phi = 0.1641665568853169;
    msg.theta = 0.38444155647470335;
    msg.psi = 0.1191753248423385;
    msg.u = 0.7305396168856308;
    msg.v = 0.777419859940584;
    msg.w = 0.026628672028419564;
    msg.p = 0.9778850224974592;
    msg.q = 0.355248748687895;
    msg.r = 0.6770485917460944;
    msg.svx = 0.532174901121375;
    msg.svy = 0.9222441589755351;
    msg.svz = 0.880323622718188;

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
    msg.setTimeStamp(0.6163598890418011);
    msg.setSource(44323U);
    msg.setSourceEntity(231U);
    msg.setDestination(27792U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.8382373294952841;
    msg.lon = 0.9979093507786632;
    msg.height = 0.3891396138548784;
    msg.x = 0.831241575086237;
    msg.y = 0.21866157155461718;
    msg.z = 0.29125110282911937;
    msg.phi = 0.2795262056610258;
    msg.theta = 0.36582445422184584;
    msg.psi = 0.08030362225926335;
    msg.u = 0.7362206454010469;
    msg.v = 0.9147199640053061;
    msg.w = 0.42832449754524116;
    msg.p = 0.8105858776402549;
    msg.q = 0.7483594903708697;
    msg.r = 0.9643234330018358;
    msg.svx = 0.0176531229960164;
    msg.svy = 0.9021305957720506;
    msg.svz = 0.8003018046070102;

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
    msg.setTimeStamp(0.5107892628013347);
    msg.setSource(2052U);
    msg.setSourceEntity(198U);
    msg.setDestination(49465U);
    msg.setDestinationEntity(125U);
    msg.op = 140U;
    msg.entities.assign("GXHCERAZSZYVWMLANBKODXDYUGUITYOZOBYNQJGAFATISDJOCCINCNQPWGZFCPHGLUXBILQQOENSLZAWG");

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
    msg.setTimeStamp(0.007524914677002892);
    msg.setSource(17691U);
    msg.setSourceEntity(217U);
    msg.setDestination(15764U);
    msg.setDestinationEntity(221U);
    msg.op = 31U;
    msg.entities.assign("DONQLWBPYFURZEUAIHWSOTWFIUTPSKHUYVSKJFLLWSMDWNPCHEJMDETZWAYZXYOXBEHTYJCFONYCKTUQMXAZGBFTO");

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
    msg.setTimeStamp(0.04060912911865955);
    msg.setSource(9416U);
    msg.setSourceEntity(180U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(157U);
    msg.op = 117U;
    msg.entities.assign("ESWEPXVGQMYPBBETYJSACAZLHYLZRBJXANWZDTEQRKSIIFBAHRIYUPXKFJSRWQDITVRDDGGHHGONZFMTONOWJICENPOKZIMCZRVDDEVOHUGLNQTSFMSLXNYHXZLCWLXCBPQBRXIUVBTUFNYIM");

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
    msg.setTimeStamp(0.20742750771333218);
    msg.setSource(54687U);
    msg.setSourceEntity(195U);
    msg.setDestination(32413U);
    msg.setDestinationEntity(186U);
    msg.type = 104U;
    msg.speed = 63418U;
    const char tmp_msg_0[] = {-53, -91, -62, -15, 109, -64, -34, 17, 120, 1, 47, 78, -128, -106, -77, -11, 56, -71, -33, 68, -88, -117, -64, -42, 65, -126, 21, -107, -124, -26, -22, 41, -109, 55, 15, -110, 8, -75, -65, 36, 53, -2, 101, -33, -72, 41, -54, 121, -107, -22, -61, -80, -90, 76, 94, -61, -95, 61, 101, -74, 89, -106, 119, 44, -21, 92, -72, 29, 49, -22, 123, 68, 104, 17, -80, -31, 8, -117, -93, 81, -52, -69, 40, -73, -107, 121, -74, -89, 64, 83, -16, 48, -25, 42, -8, -24, 112, -37, -76, 46, 45, -61, 24, 1, 123, -64, -105, 73, 30, -72, 92};
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
    msg.setTimeStamp(0.8842218785243808);
    msg.setSource(22440U);
    msg.setSourceEntity(184U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(162U);
    msg.type = 244U;
    msg.speed = 44491U;
    const char tmp_msg_0[] = {23, -1, 121, 111, -19, 9, 16, -70, 94, -59, -37, -9, -30, 21, 97, 52, -54, 99, 15, -7, 76, 37, 7, -64, -32, 37, -25, -75, 55, 64, -13, -2, 83, -105, 49, 28, 110, -90, -60, 117, 71, 62, 92, -32, -117, 55, 120, -51, 101, 22, -45, -60, -66, -58, -8, 20, 84, -66, 116, 115, -66, -86, 107, -4, -110, -70, -77, -106, -4, 26, -123, -47, -118, -11, 62, -66, 90, -13, 83, -39, 30, -122, 66, 88, 13, 10, -43, -18, -45, -5, -101, -41, -47, 21, 2, -24, -18, 67, -7, -91, -105, 30, 37, -108, -47, 35, 77, 91, -2, -121, 9, 93, 56, -4, 115, -49, 50, -4, 121, 61, 8, -48, -25, 21, 125, 11, 24, 9, 105, -105, 68, -9, 119, -84, 93, 91, -116, -85, 110, -98, -83, -33, 14, 71, 29, -27, 5, -118, 9, -116, -77, -79, 34, 39, 22, 69, 29, -108, -75, -99, -94, -103, 86, -9, -22, 80, 43};
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
    msg.setTimeStamp(0.999551299003661);
    msg.setSource(58993U);
    msg.setSourceEntity(206U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(76U);
    msg.type = 76U;
    msg.speed = 22886U;
    const char tmp_msg_0[] = {-76, 60, 92, 14, -73, -43, 14, -16, -45, -27, -126, 62, 3, -32, 113, -94, 0, 59, 93, 27, 28, 51, -25, -91, -120, 124, 3, -31, -41, -22, -7, -23, -15, -117, 119, 9, -80, -112};
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
    msg.setTimeStamp(0.06965317810779537);
    msg.setSource(29628U);
    msg.setSourceEntity(106U);
    msg.setDestination(29430U);
    msg.setDestinationEntity(131U);
    msg.op = 232U;
    msg.tas2acc_pgain = 0.7811803814929174;
    msg.bank2p_pgain = 0.9229940564453554;

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
    msg.setTimeStamp(0.09748468122725151);
    msg.setSource(40100U);
    msg.setSourceEntity(207U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(85U);
    msg.op = 167U;
    msg.tas2acc_pgain = 0.9910467629669141;
    msg.bank2p_pgain = 0.2403082018561713;

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
    msg.setTimeStamp(0.48192123555254385);
    msg.setSource(25948U);
    msg.setSourceEntity(162U);
    msg.setDestination(25569U);
    msg.setDestinationEntity(216U);
    msg.op = 198U;
    msg.tas2acc_pgain = 0.9919862821049422;
    msg.bank2p_pgain = 0.5672260705579866;

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
    msg.setTimeStamp(0.8179483788680422);
    msg.setSource(38617U);
    msg.setSourceEntity(20U);
    msg.setDestination(35523U);
    msg.setDestinationEntity(115U);
    msg.available = 344202840U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.889007715823585);
    msg.setSource(8253U);
    msg.setSourceEntity(213U);
    msg.setDestination(44697U);
    msg.setDestinationEntity(232U);
    msg.available = 329486292U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.5447518599642519);
    msg.setSource(24940U);
    msg.setSourceEntity(183U);
    msg.setDestination(62777U);
    msg.setDestinationEntity(66U);
    msg.available = 896155262U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.42823999033339877);
    msg.setSource(59834U);
    msg.setSourceEntity(113U);
    msg.setDestination(51351U);
    msg.setDestinationEntity(85U);
    msg.op = 213U;
    msg.snapshot.assign("OVYXTCCXHZRXBYRUKVPLJHWJADMSLGBHFKIWSVQWJOVNTZJQDVCUKAIWSUZMOEBENUHUXNNOKTHMDEIIEPTRFMATNNPFAJKZGNGNTSIMYOHEWULLIYERCDTTWWDH");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 34U;
    tmp_msg_0.snapshot.assign("ZCENSHYAKWFSHJFFALNMQPIPDKMDQDTEZWGMRXUYQANYPAXMTNCKRWRHZCYLJSMIFLGQVIIJGGLDVQTSRESNO");
    IMC::AcousticSystems tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.list.assign("QMHAPGKKIWWKUWIBQFUQROVXJTPLWRSONYJDSFSXBQSHJMXEEXZCMYMYYJTHAFMOBZAUEGUWAYCLZBKWGYOPFZBLDQTVWCKDGSUIQREMEXDSAHGYKMVVGRUIYOTVPNOCKAQGAEV");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8014670507440476);
    msg.setSource(398U);
    msg.setSourceEntity(129U);
    msg.setDestination(20607U);
    msg.setDestinationEntity(140U);
    msg.op = 237U;
    msg.snapshot.assign("XJRYRSJXBQCOQUIETAZRJFAUMBRTLTGXGPQADJQPSDSOWQDHCIEQYHM");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2337847339285286;
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
    msg.setTimeStamp(0.2450032819161927);
    msg.setSource(25817U);
    msg.setSourceEntity(182U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(113U);
    msg.op = 137U;
    msg.snapshot.assign("ZFXFGHFQLAYUJKQFSLEBJJROPAYRBPXEYOR");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 39U;
    tmp_msg_0.htime = 0.7930737609476066;
    tmp_msg_0.context.assign("VFAOUFRFTZDFYAXJQYCZZVLCIPGIUTFWEJAPGZDYLCEAMBWPYZJOXTBZVYDBMRJCXOKGJQMPWBIOVEZHAJBRUQIPSLTHIWKKMVUHDBAFSDMZBZPERDUVEFBTUSSHRQHEIUHTCRXGVTXLNWICKNXBOHGUNWCQWCQLTHFPQYXHDWKSXYGNBOVFTSUMDYXXSRADOPLRZPJALMAWCETHGMMGQVKCOQVIJLLNRKDJOJGNSSEUWNI");
    tmp_msg_0.text.assign("DHPMNBYKMUAGAOMJCQQHQIAPZGGEWFRAFUFYEDGEUVOBLMUCDSGSRECUVKLSRSDEIOFBTPSQBDGMCLVJVEXFDNMJEDKF");
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
    msg.setTimeStamp(0.5675636097956799);
    msg.setSource(50309U);
    msg.setSourceEntity(60U);
    msg.setDestination(19218U);
    msg.setDestinationEntity(169U);
    msg.op = 248U;
    msg.name.assign("RKRINGZNGHHJFAVQRMQSYVZJALYDJIBKPENXMSWPAYHVAOIZMRTJAEYMZJQNIOPKWYTMGFCPUFXCYADLBLWCPSQQXYJQLVEMUBUIWGHHSSSHOOZMDNRMDLLJVZXILUDGIDTBBTCRKAGFVCYQXFTZAPDBBYURCLEFKOQTNGNPOXUSZHBEKEHFPLRVCUMZUORVCFOEBUVDKRWEFSBDTZTOJXJPTWXFQNUWCYAHKINXXMW");

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
    msg.setTimeStamp(0.6882226985180985);
    msg.setSource(20389U);
    msg.setSourceEntity(247U);
    msg.setDestination(33852U);
    msg.setDestinationEntity(20U);
    msg.op = 34U;
    msg.name.assign("FEVVAFWMBXDAQGPLKWNHIHJKOQNYGJLMZOCOAUEVSCCFHJVSJXGWPMJDPFLZKIGEMWXECPDQVCAPMBPUSRARXVAXUQUOCZYXUSXQPNCMXQLRUSKCFDDQLYLZUNHIKGITAESDEELROUYVZLIMNDTNIXXYFYIWJBQTK");

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
    msg.setTimeStamp(0.6475147027238566);
    msg.setSource(56463U);
    msg.setSourceEntity(127U);
    msg.setDestination(29485U);
    msg.setDestinationEntity(211U);
    msg.op = 115U;
    msg.name.assign("COEORYPKXEVEZQZCABOWSTYYCAYFDLXVTXWKBTNDVMUVXRQFLXUWNW");

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
    msg.setTimeStamp(0.6937309913916039);
    msg.setSource(33225U);
    msg.setSourceEntity(205U);
    msg.setDestination(61042U);
    msg.setDestinationEntity(126U);
    msg.type = 95U;
    msg.htime = 0.6053398845992185;
    msg.context.assign("HQWGATVMHJUPRDQYIZIGKKOWYCSOYIRSDVOBNPDQZYJLUELGAHJGDMXKZOYQXRSZNZSWSUXFYHNUUMOIDDMDPXWEJMXQKAEYRTGYTMEABRMGRZKBRQEMOPUTFERJLOOMQRXTNFSHMBZCGYVHHAJKXTZSBNLIETFKCUXPEKRFWSZJWBQPBTILJLKNWPXPUWEAVZNPVICWFHAJWVYTJSXCIVFCAQNUFVGPBGBVNLCVLHECAFBUC");
    msg.text.assign("PQUNLKGXYPIEJYUZYRWKXGZCMLNAZTJUFUGFUPNAFLHEBEVBCGDZWQOXZWJBFGJT");

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
    msg.setTimeStamp(0.8054967532355557);
    msg.setSource(27190U);
    msg.setSourceEntity(193U);
    msg.setDestination(8382U);
    msg.setDestinationEntity(64U);
    msg.type = 42U;
    msg.htime = 0.9048262896259271;
    msg.context.assign("IUNTPWDISHXAFWGUHNWWJGLCEVELQPCFISPUEAAMXXOBBHATGN");
    msg.text.assign("FVZKTJHBQPLJZZKXQYKJDKSEDTWUHHCCNYKHBUYJYIMXRAISIYGSRPGULRVFRGZWJEEPEBMKCSHVNJWYSRAFAGWARTBVOKHMIJOSJFWBEOSGURXDMMDDLZYQULPEZOGFTGDOEENF");

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
    msg.setTimeStamp(0.04084660346780622);
    msg.setSource(37676U);
    msg.setSourceEntity(217U);
    msg.setDestination(7974U);
    msg.setDestinationEntity(57U);
    msg.type = 55U;
    msg.htime = 0.6139046026693308;
    msg.context.assign("GNIYRITHVZDTVXKDMWUTMHKQWULCBFWOBIJFRUNS");
    msg.text.assign("MWQHJMJVYSXEFNSIGLKXFMRWUBNQAMJZSRKYNTKMQZCAWUNBYPBWFSOWOKOHSOLZQYANTYOPRECIFVOFKCBQAXLLHUVLLTPDAJVINHOGXVDHUPXEMZRFYNIQEJHTJKBXBKPCNGPZZSVDTUUPBADJAYETGVMCEVMZIVSUOKRBEUQTNQZRKDSHXPFEIYYMWRJGPGPTZLKUCHFIMCTLGODDFORCGGUYLIFWRISARACQJADWB");

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
    msg.setTimeStamp(0.35589189344055994);
    msg.setSource(13358U);
    msg.setSourceEntity(155U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(253U);
    msg.command = 23U;
    msg.htime = 0.18915049650242022;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 110U;
    tmp_msg_0.htime = 0.12398700784185668;
    tmp_msg_0.context.assign("LFGFSNKEHXYBMLYMJRJVXETLDTCCUNTSPGPJXBARGFVHWYYBUMVWQHJJBERZRVJCQOOTZLHLGECILQIZWPVIEICGDRKBDQZRUAEDKPJXAKNQZSNGMDJTYWZOBJFQQOGAONASPCPNFNWHIYVSOWPUMNXOEIERTQIXHMAZXWTCNCGPDHICCKPGFGBLTVSAOXRAUHIKDTLNJWMK");
    tmp_msg_0.text.assign("FDWSQXXFREPEQYWGNALRMQPPZUSOJWKVXRDGDVUQFLCWBNOFCNBVVBQBOYANIVUTRFPICEPKIUMBCLLXFHVNHQIWMMYTRCHDCLSYGRPAZIDWUCSSVPFJTHADDNJCZHSJOKIJGUNLOAZXUVMGHZTBMGNZGKLYZVOTJJXQEROHKWCUENHPLYFXAT");
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
    msg.setTimeStamp(0.33635834785907304);
    msg.setSource(15589U);
    msg.setSourceEntity(245U);
    msg.setDestination(4506U);
    msg.setDestinationEntity(136U);
    msg.command = 79U;
    msg.htime = 0.05146537833536058;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 216U;
    tmp_msg_0.htime = 0.0966462115441814;
    tmp_msg_0.context.assign("WSXRHERQKZPSKALVMPAOIEDCNPCFPWVPQTBCTCIJWNAYBAZNKRXRMSCOFRMDMHU");
    tmp_msg_0.text.assign("WLMYVJIDTRKHXFTQPTUFLCVOBALTBLSFXTJWKCKRPPRLXGDUVORCGCWXCSMKXSUMBGDXZJOLTQHMYYCLYUZGAFWFEUGHJPZENYWVZQNNUOKGCMJXNCDYSEBZALYFINKRBFRNLBA");
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
    msg.setTimeStamp(0.19341748796896696);
    msg.setSource(53545U);
    msg.setSourceEntity(135U);
    msg.setDestination(8739U);
    msg.setDestinationEntity(186U);
    msg.command = 217U;
    msg.htime = 0.26922553266066773;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 205U;
    tmp_msg_0.htime = 0.8163156226578618;
    tmp_msg_0.context.assign("HOKPRZWUFZNTRKBYNYHWOXZJHIXHHVPPPMQMZHTLEJTPCNUURSMMJXIUWTKORIRIJYIEIPAJPDQOLXTOZDMNYQARNLYEPQDYRZAGQCZDUBACKJGKAXNWTCVCAATVVHOKXWGXHBYFC");
    tmp_msg_0.text.assign("BZGNWKQWCNSWMINDRTOMUIDPXXELTGTLLQQZDCBYFEXIVVTDDWMLFVHPBZDRKMCCRELYAJXVQKZKBNJQLMTUAJCN");
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
    msg.setTimeStamp(0.11028249117622124);
    msg.setSource(54457U);
    msg.setSourceEntity(251U);
    msg.setDestination(51706U);
    msg.setDestinationEntity(60U);
    msg.op = 166U;
    msg.file.assign("YYIZGCXJXAHDWHJYZQEQCIFNOVBPCHWARPVCURSCDKNIMKTLTHMWBFPVZUDRGXVKGFESINATRKTTVFUQOLOGQJDDWXLSLZJYAARBMWPIEOAITHZJWZSNHTBRDAMXOGWSCGQSNFHRUPTMFKRQUBWHOVYSLGEBALLMKT");

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
    msg.setTimeStamp(0.5582507800952967);
    msg.setSource(9271U);
    msg.setSourceEntity(32U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(143U);
    msg.op = 235U;
    msg.file.assign("TEBRDJGRRAWBJAGLPFGBFPEKVCYCIAJVTHSNSTMGUVWOKIURSJMWBZQFVYCAFIHBQQZAPWYRJQEWOFOINNPL");

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
    msg.setTimeStamp(0.5246400248935178);
    msg.setSource(25295U);
    msg.setSourceEntity(31U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(83U);
    msg.op = 6U;
    msg.file.assign("RHOXJZPEWXHRBMZLEGQVBLJHFIFOBOMOKOKBHVJJNGPS");

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
    msg.setTimeStamp(0.28099408445359586);
    msg.setSource(17010U);
    msg.setSourceEntity(132U);
    msg.setDestination(30712U);
    msg.setDestinationEntity(28U);
    msg.op = 30U;
    msg.clock = 0.16771499031709958;
    msg.tz = -89;

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
    msg.setTimeStamp(0.6299659363607201);
    msg.setSource(12211U);
    msg.setSourceEntity(230U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(78U);
    msg.op = 213U;
    msg.clock = 0.07241464232903294;
    msg.tz = 112;

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
    msg.setTimeStamp(0.2445538344935646);
    msg.setSource(49090U);
    msg.setSourceEntity(68U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(80U);
    msg.op = 239U;
    msg.clock = 0.6501716919922031;
    msg.tz = -119;

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
    msg.setTimeStamp(0.9690514202199612);
    msg.setSource(52150U);
    msg.setSourceEntity(38U);
    msg.setDestination(53477U);
    msg.setDestinationEntity(75U);
    msg.conductivity = 0.06463689120879501;
    msg.temperature = 0.792345054133092;
    msg.depth = 0.5602633662082437;

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
    msg.setTimeStamp(0.8485155824362335);
    msg.setSource(49523U);
    msg.setSourceEntity(15U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(250U);
    msg.conductivity = 0.9551725830678567;
    msg.temperature = 0.23451339621090495;
    msg.depth = 0.20573190310613887;

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
    msg.setTimeStamp(0.9017992848034103);
    msg.setSource(14556U);
    msg.setSourceEntity(216U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(197U);
    msg.conductivity = 0.20139762811343043;
    msg.temperature = 0.558749381796457;
    msg.depth = 0.9333782385176069;

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
    msg.setTimeStamp(0.36465453787729796);
    msg.setSource(50991U);
    msg.setSourceEntity(233U);
    msg.setDestination(57854U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.42752557269528035;
    msg.roll = 43607U;
    msg.pitch = 43567U;
    msg.yaw = 23386U;
    msg.speed = 3940;

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
    msg.setTimeStamp(0.9083441913471706);
    msg.setSource(23015U);
    msg.setSourceEntity(222U);
    msg.setDestination(44860U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.16075916428999615;
    msg.roll = 6046U;
    msg.pitch = 50395U;
    msg.yaw = 15289U;
    msg.speed = 7525;

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
    msg.setTimeStamp(0.573118035633797);
    msg.setSource(41157U);
    msg.setSourceEntity(108U);
    msg.setDestination(57195U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.9412871226884547;
    msg.roll = 3962U;
    msg.pitch = 24172U;
    msg.yaw = 56116U;
    msg.speed = 27897;

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
    msg.setTimeStamp(0.9091207621737374);
    msg.setSource(7146U);
    msg.setSourceEntity(20U);
    msg.setDestination(31453U);
    msg.setDestinationEntity(143U);
    msg.altitude = 0.02332984301062102;
    msg.width = 0.40884991112918023;
    msg.length = 0.9482716653931477;
    msg.bearing = 0.4809918251005416;
    msg.pxl = 2398;
    msg.encoding = 194U;
    const char tmp_msg_0[] = {120, 27, -42, -47, 2, -87, -98, 121, -36, 72, 23, -68, 32, 12, 43, 27, -96, -125, -34, -51, 36, 92, -71, -69, -119, 19, 33, 121, -84, 116, 91, -26};
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
    msg.setTimeStamp(0.5736790300348892);
    msg.setSource(63241U);
    msg.setSourceEntity(95U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(8U);
    msg.altitude = 0.5064113574313099;
    msg.width = 0.9292956378028727;
    msg.length = 0.8027945652740656;
    msg.bearing = 0.2892215328465636;
    msg.pxl = -713;
    msg.encoding = 88U;
    const char tmp_msg_0[] = {14, 126, -69, -115, 109, -69, 121, 110, 60, 97, 9, 125, -110, -18, 107, 32, -7, 10, 119, -77, 4, 68, 121, -92, -75, -83, -128, -6, 42, 102, 74, -41, -53, 42, -97, -53, -38, -5, -51, -7, -52, -55, -66, 64, 115, 19, 17, 64, -109, -16, -29, 79, 1, 120, -24, -120, -47, 56, 72, -5, -65, -108, -63, -101, -25, -92, 30, 35, -104, -80, -48, 104, -71, 112, 12, 30, -40, -75, -56, 69, -85, -86, -125, -8, -90, 8, 113, -12, -8, -4, 45, 75, 66, -11, 28, 33, 3, -61, 86, -126, -123, 36, -104, 53, -56, 56, 125, 36, -39, 4, -92, -12, 110, -25, 87, -90, -126, 112, -47, 26, 64, -93, 51, -72, 17, 37, 116, 41, -79, 44, 30, -39, -45, -126, -78, 85, 20, -69, -23, -23, -112, 112, 77, 78, 122, -54, -47, -60, -94, -87, 51, -70, -30, -17, -106, 88, 85, -31, -19, -10, -51, 29, 107, -106, 61, -7, 99, 22, -29, -55, 111, -85, -50, 59, 114, 53, -29, -25, -42, -85, 101, -115, -50, 102, 54, 44, 49, 116, -103, -74, 116, -113, -46, -6, -26, -7, 84, -24, -102, -103, 7, 3, -19, -93, 33, 56, -21, 43, 23, -69, 115, 85, -32, 122, -116, -96, -110, -56, 66, 44, -86};
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
    msg.setTimeStamp(0.4353771486471879);
    msg.setSource(17539U);
    msg.setSourceEntity(126U);
    msg.setDestination(13087U);
    msg.setDestinationEntity(48U);
    msg.altitude = 0.8333543776011024;
    msg.width = 0.3659927640497903;
    msg.length = 0.6484704852902327;
    msg.bearing = 0.19305503124777434;
    msg.pxl = 4064;
    msg.encoding = 150U;
    const char tmp_msg_0[] = {52, 68, 94, -43, 78, 81, 4, 109, 27, -68, -90, -90, 16, 104, 15, -17, 42, -109, -27, -128, -29, -124, 83, 49, 18, -76, -53, 103, -7, -20, -36, -94, 26, 25, 36, 74, 48, -106, 80, 33, -48, -29, 87, -90, 114, -127, -88, 9, 97, -16, -42, -81, -120, 69, -9, -22, 41, -21, -94, 4, -82, 120, -54, 8, -103, 51, 94, 53, 31, -127, 32, 31, -42, 113, -120, -59, 112, -72, -109, 112, 39, -38, -23, -33, -82, 33, 114, -61, 125, 75, 106, -84, 68, -17, 10, 114, 81, -82, 38, -61, 38, -47, -30, 103, 81, 88, 34, 11, -2, 50, -87, 88, 111, 43, -96, -94, -52, 103, 41, 60, 103, 40, -115, -85, -77, -21, -4, -19, -71, -110, 88, -92, -105, 113, -87, -46, -73, -39, 2, -83, -87, -54, 106, -117, -68, 6, 18, 32, 39, -49, -18, -94, 67, 81, -89, 10, 66, 16, 44, 114, -40, 101, 17, -102, -123, -29, -3, -81, 88, -88, 113, 46, -108, -76, 75, 10, -25, -32, 12, -75, -38, 28, -61, 77, 105, -111, -119, 35, 1, -13, -57, 10, -94, 22, 83, -16, 71, 57, 72, -3, -3, 78, -79, 22, -35, -67, -83, -97, -60, 45, -93, -66, 118, 45, -57, 29};
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
    msg.setTimeStamp(0.7473079760090244);
    msg.setSource(37873U);
    msg.setSourceEntity(169U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(164U);
    msg.text.assign("KDMFIAJZWCHEQZKNDGCFGDCNVEQKLEZBGIJMJPTGRJBOMWRFTJOKPCBZPPMFBBFSTVZXYOLGMSUI");
    msg.type = 171U;

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
    msg.setTimeStamp(0.8784667537159798);
    msg.setSource(28383U);
    msg.setSourceEntity(180U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(211U);
    msg.text.assign("EJFQTKRGDLEQFNTLHFYRXPQUNRUVTSDGWDQYEKTHJOZIKKEVVHJAODBDWHRUYFZVNSPVLWTQCOPXMTJDCZIQBOSYEYXTYNGCAGJLRMCPYMKLFPPKNHHBVGG");
    msg.type = 99U;

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
    msg.setTimeStamp(0.9696784422229775);
    msg.setSource(35438U);
    msg.setSourceEntity(253U);
    msg.setDestination(12105U);
    msg.setDestinationEntity(189U);
    msg.text.assign("UHNIFDKSGVLBYXTGNUKXHNJPKGCAFSCOJQWRJRLPVYLZJDPDXXVVQBANBGTSFZOPARJHTDKSWQSYOREWLPGMCHDIHAYEHPIHBQVLEFZBTGUDHSRTWOTLYBOTILKMMJCZMXECYLHETCNDQ");
    msg.type = 181U;

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
    msg.setTimeStamp(0.7999570896314332);
    msg.setSource(64686U);
    msg.setSourceEntity(80U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(138U);
    msg.parameter = 111U;
    msg.numsamples = 234U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55087U;
    tmp_msg_0.avg = 0.6882550933028833;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.213811483116779;
    msg.lon = 0.29837987343943706;

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
    msg.setTimeStamp(0.9084490758669053);
    msg.setSource(60666U);
    msg.setSourceEntity(239U);
    msg.setDestination(39000U);
    msg.setDestinationEntity(184U);
    msg.parameter = 104U;
    msg.numsamples = 235U;
    msg.lat = 0.2627188522789309;
    msg.lon = 0.25889956756612287;

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
    msg.setTimeStamp(0.7410498406243409);
    msg.setSource(19449U);
    msg.setSourceEntity(101U);
    msg.setDestination(20855U);
    msg.setDestinationEntity(44U);
    msg.parameter = 119U;
    msg.numsamples = 212U;
    msg.lat = 0.032496313532280885;
    msg.lon = 0.2379281668732004;

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
    msg.setTimeStamp(0.28335574844621514);
    msg.setSource(12081U);
    msg.setSourceEntity(28U);
    msg.setDestination(63815U);
    msg.setDestinationEntity(117U);
    msg.depth = 56476U;
    msg.avg = 0.21363280956339203;

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
    msg.setTimeStamp(0.06668456908167031);
    msg.setSource(15292U);
    msg.setSourceEntity(21U);
    msg.setDestination(11208U);
    msg.setDestinationEntity(53U);
    msg.depth = 24418U;
    msg.avg = 0.5173504292942486;

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
    msg.setTimeStamp(0.31441361828022285);
    msg.setSource(49200U);
    msg.setSourceEntity(13U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(101U);
    msg.depth = 24250U;
    msg.avg = 0.8628561323719289;

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
    msg.setTimeStamp(0.8755742576687205);
    msg.setSource(38216U);
    msg.setSourceEntity(138U);
    msg.setDestination(63119U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.3223457102778926);
    msg.setSource(38977U);
    msg.setSourceEntity(50U);
    msg.setDestination(10009U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.7904914344458486);
    msg.setSource(45805U);
    msg.setSourceEntity(52U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9634806597268429);
    msg.setSource(58890U);
    msg.setSourceEntity(86U);
    msg.setDestination(60278U);
    msg.setDestinationEntity(171U);
    msg.sys_name.assign("SFAIIRBGIQLHJJFIUQONFAQPLJHQNXLXABJGWMTVZTIYOPSODVYOAQLCPYTREMSGDBSYWZJPTTBOZCMHJNFDRZBSLIDPPUJOGRUENMEOICQRVTVDIDBDRKRPVYLEXJDHGTUXPFIRZYDYSECWZNHQFJPCWKVNUWKWAMDGWEAMXIXVVEYMOGOYOQ");
    msg.sys_type = 66U;
    msg.owner = 2635U;
    msg.lat = 0.0874295114746253;
    msg.lon = 0.03310627400447286;
    msg.height = 0.26432893251730405;
    msg.services.assign("COVVIZHYZOHZCBQPWJEYXUIOMWLZTOFGTXWXVIMUYVVJHKENNKWJCKFVGQMTIQEYLYFNPHRFHQIAEJKZBVLKVURKRSLPSOMZEOWATCUDSYUFJDDPASPTBBZMVVNFCQWSMGRKLQAMOKEZOYPFSFSINOAGI");

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
    msg.setTimeStamp(0.6505534154516693);
    msg.setSource(1423U);
    msg.setSourceEntity(175U);
    msg.setDestination(11184U);
    msg.setDestinationEntity(138U);
    msg.sys_name.assign("ZTMSYYUNKSVGKWLBSQMULXDOMCGKSQLUTAXGOLBHQQIJPAFGLHEECEUVVAFZIUNBTHPMVHDNMOXQURPPQPFZDJX");
    msg.sys_type = 61U;
    msg.owner = 37392U;
    msg.lat = 0.18899247657413099;
    msg.lon = 0.012150033577872588;
    msg.height = 0.49769037251638304;
    msg.services.assign("GFNABLXOYNOFNWKHCQRSWLFXUCFVKSNVSHCQHSUILLEMUBNPZICGKODHSWDMMYYCRXGTZHHMMHRJSTXLTYRVBMEGOPRFWMKSEELUIDDECGBEOREPNJJBQATAGBMXKGQGIAINPXZPJBKWNDXQQLHDJETJDXUMCRBLKRFYCYFWAQUPKUOSIIVYUAVSYARXVYTVFKUQDZJZLDFPIPTJIRXGTQNUMHKCZDLWVE");

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
    msg.setTimeStamp(0.33780350827752603);
    msg.setSource(26038U);
    msg.setSourceEntity(45U);
    msg.setDestination(51267U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("FGSBASVKDAEZGZLNCETVUXDVXTNWJHGMFUVTKQJIAZGYBQJGHEMQIMLNEIKNIOGJPLIWOXQHCZPIKFTJJHFXIGWJCMDDKFGHBKSCARCZBUACUXIDBSXITHNFOEOSXYWNPOWUTYFEVHMBYMCLQPJQOCPAXUPLOFRBYUXLQQKMRREHDTSLZRWHLEJMNELUNDPVWYDWFRGSZQKORFQUTMADRUNVTSYZZNSEVYBWLAYKBTWRKM");
    msg.sys_type = 114U;
    msg.owner = 11267U;
    msg.lat = 0.2909541398409563;
    msg.lon = 0.7385866250415117;
    msg.height = 0.6140471310679592;
    msg.services.assign("EYAVNVSKMAFTLPEAVDWQDWZVUAZQFSNEGTVBVPRISUZZNUUWNAUETGAYGOJBOIMSCCWXQGHIVVZZDERRBYMCTTXEPUKQUAJMCWKZNYMILSPSXDHKFHRFPBFCIQQBQXLJGYZOZBRTALXGNMUTUMNNCYXTKFFSXVATKICFOBCPHRLDIJNKOOHLPPYVQWHERKQBTDJXFSXKFBWDCGHMMDZHPS");

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
    msg.setTimeStamp(0.12086538840863781);
    msg.setSource(43337U);
    msg.setSourceEntity(106U);
    msg.setDestination(35998U);
    msg.setDestinationEntity(12U);
    msg.service.assign("SVMYSXWCOHSRHUMMTXQEJCMVNLENLSCGHLCBCQITKHKPWKGQVPKRFALXIDUJPRMJEPGNPLFHBITRDYPGRZAANFOLAFTOVZIBXZOIULGAZQUWVYEOYCRJDJINZKMDBTYRNZKJYKVBBQGSFOEQPEMGZLYFUEEBSKTTDHVFWNNAXDNVQGTROAMZIAIXQB");
    msg.service_type = 48U;

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
    msg.setTimeStamp(0.27108980258240645);
    msg.setSource(57458U);
    msg.setSourceEntity(231U);
    msg.setDestination(26081U);
    msg.setDestinationEntity(170U);
    msg.service.assign("RVTUSCUEOAVHGPCZRAPYOXVXZBTVHWVLOXGYTVECQBOADFWYGRBNIGITTXLWQIQFJY");
    msg.service_type = 78U;

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
    msg.setTimeStamp(0.9474998472652923);
    msg.setSource(28985U);
    msg.setSourceEntity(243U);
    msg.setDestination(25770U);
    msg.setDestinationEntity(159U);
    msg.service.assign("FKLBEJZDAUKDCWUBLQCHWKYULBPJNZNYBCJSRVPUWHOOEOOUJLXQWMQEUHGYAEQHNHFOHICZYCTXVKQGHVXMRKWKEHTOGPPCVXIRTGEAZGIMPJYCXWMBYIQRFGKXVRFYTRSJWJTKBABFZSVLPYLQJXVYURBSDVCTLUDDZEWLNWJYIZMARNMPGVPJEDXNGSBOHVOZRMUFTSFNMPISDLIIFFNMAGQSNPEHRMFIDTAXCGBZAIKS");
    msg.service_type = 161U;

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
    msg.setTimeStamp(0.015670544445676393);
    msg.setSource(61924U);
    msg.setSourceEntity(208U);
    msg.setDestination(36395U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5384212829870515;

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
    msg.setTimeStamp(0.24437211462241404);
    msg.setSource(46068U);
    msg.setSourceEntity(107U);
    msg.setDestination(61338U);
    msg.setDestinationEntity(13U);
    msg.value = 0.31243465296230977;

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
    msg.setTimeStamp(0.7878910470607717);
    msg.setSource(40572U);
    msg.setSourceEntity(204U);
    msg.setDestination(42768U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7473015604229913;

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
    msg.setTimeStamp(0.5577371708540249);
    msg.setSource(39611U);
    msg.setSourceEntity(61U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(104U);
    msg.value = 0.25273753966851575;

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
    msg.setTimeStamp(0.4791067768026046);
    msg.setSource(30181U);
    msg.setSourceEntity(247U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(180U);
    msg.value = 0.140956286962017;

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
    msg.setTimeStamp(0.2563561184705908);
    msg.setSource(34539U);
    msg.setSourceEntity(116U);
    msg.setDestination(21865U);
    msg.setDestinationEntity(198U);
    msg.value = 0.262758150016405;

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
    msg.setTimeStamp(0.5350727526253196);
    msg.setSource(58962U);
    msg.setSourceEntity(251U);
    msg.setDestination(1011U);
    msg.setDestinationEntity(188U);
    msg.value = 0.10952726322957218;

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
    msg.setTimeStamp(0.5348900277998917);
    msg.setSource(40994U);
    msg.setSourceEntity(175U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(248U);
    msg.value = 0.23992313509320495;

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
    msg.setTimeStamp(0.6410741653366593);
    msg.setSource(18118U);
    msg.setSourceEntity(163U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(37U);
    msg.value = 0.38199768170496484;

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
    msg.setTimeStamp(0.12599991960298973);
    msg.setSource(41631U);
    msg.setSourceEntity(30U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(55U);
    msg.number.assign("FFAKZBTTPZXKUMZCZIP");
    msg.timeout = 28605U;
    msg.contents.assign("WWZEVCQGDYEANXICYLKCJFZSLSXYVDMRSIOAIGIMYVBBLDUZIRLUZEOJWQMMSUOOFCDGNJOKNJWQDJTKCFTNFEODNCWXPCWQJUKYTNFXZABSMLFSPGTNUPFUOYNCJZQFGXUUCDSLEJBQPGAILOAWUPQHGATLYYKDHTIXLJWLFZBXAHIVEIBAXPFXHMERZPHHHRKCKTDPMKHAEABXZGVUVOI");

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
    msg.setTimeStamp(0.12615480693757763);
    msg.setSource(18103U);
    msg.setSourceEntity(138U);
    msg.setDestination(32298U);
    msg.setDestinationEntity(13U);
    msg.number.assign("APHKYFGBVVGMDELZPUATRUDXWXYSCYKUBFXFIJDDCJXYJHYVAPVSGWANJLIOSWFEKFZIDPOLSBILRVQPDXXIQAKYMXWUXJYJPMIFFAIBYKHHMUGTHJUZNOLJERSNTB");
    msg.timeout = 15831U;
    msg.contents.assign("ATEQTGCDCLHCVYREIEPJZMCOKFIXFKPULPRCMEHZKJNCQSJPDMMSRTSUY");

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
    msg.setTimeStamp(0.6139847659882043);
    msg.setSource(27030U);
    msg.setSourceEntity(33U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(38U);
    msg.number.assign("DOYXTBJMBXKUIYVWENFIAQBMMXCOHQWVUPWGOKYBRDRJSLQNCGXZEHIOIGUFRTYCNNWWBAKFRHEGCQZSGVJZSBFUAYPSEHSHULPCTOKKXZNECDFJLZUFIBPZSTRLPKFPAXTYJHQFNJMYQDYNKCJKAWJFGWAGMLOSMOXAQORTVDTCDLKXHIHTEAUEOCVNPNDMVEKWVZGUZWYELHCQWVMPEMIFHLXUGGRIZJSBVQDPLRMJBUAZBDSTNQIAX");
    msg.timeout = 49440U;
    msg.contents.assign("FCPTQXJZPXAWUIQKBULSMGFIBMAHYKZHDNUHRQYAYILVFUZGETXE");

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
    msg.setTimeStamp(0.08449775764883061);
    msg.setSource(40680U);
    msg.setSourceEntity(228U);
    msg.setDestination(33929U);
    msg.setDestinationEntity(111U);
    msg.seq = 3490423404U;
    msg.destination.assign("JJVYFKEYUMVLOWZIOTNGHCWEAMRHKAUUNIJQWICVHTCSNNQGXNRDGZHPHMAEYPAOTEEYOBGJWFWAKVPWGOAER");
    msg.timeout = 47668U;
    const char tmp_msg_0[] = {-41, -23, 85, 19, 68, 123, 108, -69, -63, 16, 12, 88, 94, -51, 5, -118, -8, 18, -20, -5, 29, -11, -68, 43, 72, 31, -71, 118, 78, 111, -116, -44, -74, 45, 60, -39, 1, 80, -57, 48, -17, -114, -43, -11, 30, -108, 68, 97, 47, 101, 48, -123, -47, -99, -127, -118, -77, -105, 88, 42, 85, -54, -47, 56, 78, -8, 49, 53, -74, 33, 83, -83, -60, -85, -21, 71, -74, 78, 96, 109, 54, -87, -115, 30, -105, -79, -65, -36, 22, -77, -36, -6, 47, -108, -117, 70, 70, -73, -34, -42, -127, -88, -78, 61, -43, 20, -111, -94, 5, 3, 63, -88, 66, -52, -11, 20, 77, -103, 72, 110, -16, -31, -29, 37, 11, -80, -51, 20, 109, -54, 101, -78, -21, -94, 94, -63, 59, -9, 36, 6, -67, -60, 120, -17, -69, -19, -46, -34, 84, 28, -115, -79, 36, 96, 98, 65, -74, -52, 102, -69, 72, 112, -12, 8, 81, 109, -46, -61, -115, 121, -71, -76, -86, 8, -1, 80, -2, -88, -24, -29, 78, 64, -107, -110, -118, -118, 2, -6, -107, 2, -74, 87, -112, -119, 3, -29, -19, 58, -96, -1, 96, 93, 3, 101, -115, -67, 91, -87, 68, 27, 9, -105, 111, 89, -84, 85, 1, -16, 21, 7, 31, -41, 37, -121, -120, -96};
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
    msg.setTimeStamp(0.8901882488376974);
    msg.setSource(15729U);
    msg.setSourceEntity(11U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(78U);
    msg.seq = 167725657U;
    msg.destination.assign("MJMXGZHKPEDEFEFBHVNSEJOQNRURQJIXRGGYLUYKAAIDMNSUZYYPKLWIETMXTHIQAOBEIHOBOSBOCRMFBNZHBHWFIYIQEGAVDJYDSXKERUQKEHPSAVDTURVDJJYZQGZHUKALZGCONAOBYXGNYCMWRJGLNLQSWTVJWVDOGTBLTDMWMU");
    msg.timeout = 51890U;
    const char tmp_msg_0[] = {92, -44, 10, 125, 112, 38, -125, -53, 110, 117, -11, 5, -65, -22, -73, -105, 3, 31, 24, -33, 57, 72, -93, 63, 113, -16, 106, -116, 48, 16, 52, -126, -70, -21, -39, 36, 101, -87, -63, -83, -121, 103, -42, 107, 117, 100, -61, -9, -94, -120, 82, 68, 84, -106, 118, -104};
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
    msg.setTimeStamp(0.5207093851061315);
    msg.setSource(33151U);
    msg.setSourceEntity(36U);
    msg.setDestination(53960U);
    msg.setDestinationEntity(218U);
    msg.seq = 3881627737U;
    msg.destination.assign("WMMWTIMYFFIGAXEMKHBIJMDCQCPSNYYLPOZBVGATYDTPNFGKADUZCGJYCABXRRGAGAEIFEWUDJTUXDCBXVPNQZHQJFPNYATWJHBLSPKRHOVZKEZLDWIEBRNKUEOSNSZUFCUNYCXQHMLDHLCQTYLOAYRNISVTKOWGSCVBBZLFLZPSHODLXDOQSIJLHUKFURIVZCSOKIUU");
    msg.timeout = 46538U;
    const char tmp_msg_0[] = {-44, 91, -4, 71, -101, 125, -59, 80, -51, -128, 75, 103, 2, -97, -21, -10, -74, -53, -126, -81, -28, 58, -78, -89, 113, 26, -49, 116, 53, 117, 124, -34, 122, -127, 101, 105, -38, 86, -70, 73, 11, -25, -42, -37, -61, -127, 111, 57, -112, 107, -117, 34, -76, 112, -74, -93, -65, 51, 40, -85, -10, -30, -47, 63, 8, 42, -92, 51, 101};
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
    msg.setTimeStamp(0.589998656225078);
    msg.setSource(19873U);
    msg.setSourceEntity(33U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(36U);
    msg.source.assign("HYZUGZQLDOIPANVAHOQISZJUDDBMOJYREEXCJITKUSGSMEGIVXWDPZTRLFDXMSAT");
    const char tmp_msg_0[] = {-6, 30, 49, -68, 126, -106, 24, 47, 108, 13, 118, -88, 120, -51, -62, -88, -62, -12, 43, -81, -14, 68, -48, 21, 94, -111, 25, -79, -43, 71, 103, -49, 34, 58, -31, 52, -106, 85, -73, -13, -86, -76, -45, 84, -92, 75, 97, 91, 22, 68, 14, 108, -97, 69, 78, 2, -54, 8, 106, -50, -45, 66, 2, 98, -99, -109, -74, -120, 73, -66};
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
    msg.setTimeStamp(0.8918920013885216);
    msg.setSource(9483U);
    msg.setSourceEntity(243U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(237U);
    msg.source.assign("THEGSSDYAMCVJSSNYVHEIEERRNJLVQJKLIBDUGJ");
    const char tmp_msg_0[] = {-111, -51, 59, -124, 80, -70, -10, -51, 95, 115, 100, 81, -22};
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
    msg.setTimeStamp(0.18797327596863422);
    msg.setSource(8384U);
    msg.setSourceEntity(134U);
    msg.setDestination(25170U);
    msg.setDestinationEntity(99U);
    msg.source.assign("PNRRDXTBKMZYOEJCOGTVPCGWIIDVZFWBKNHIGRTTLNJYSVQLQKYIGCVFXMDCKXVDAZPTIAWQNNFSUEQGTBDMCZJQISRLRUZQDEVHPDJESLWJAXHLAHKXHYEVJBXOOQMXGOBCHOQBSCYUZEEBNPDIUMXWP");
    const char tmp_msg_0[] = {37, -91, 69, -18, -5, 17, 100, 53, 82, -91, 100, 31, 12, -104, 11, 59, -115, 5, -1, 92, 46, -20, -121, -49, -11, 126, -33};
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
    msg.setTimeStamp(0.8937158041080067);
    msg.setSource(18793U);
    msg.setSourceEntity(86U);
    msg.setDestination(51458U);
    msg.setDestinationEntity(14U);
    msg.seq = 1593008185U;
    msg.state = 78U;
    msg.error.assign("PJGTQQUHRGHYJGKWVHWVHANYUDOOMDUCKFWKNYZRZEDNZSBPTHMKEFFIPRBXLUHZSWMRHXOISNAYIFSMGDTZSXFLODUGEOZQTIPAKFPIDGVICCJUYTTDXIBYTWOTYATCSXEXHSPNLVEXALPCJOWGJRALKEJQCRMLCAKDRNUEQNMZOQQXVBWBVJWIMWUFMIRCFKHZECJYRJPGEWLSCMZ");

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
    msg.setTimeStamp(0.48227789258450604);
    msg.setSource(11792U);
    msg.setSourceEntity(215U);
    msg.setDestination(19128U);
    msg.setDestinationEntity(196U);
    msg.seq = 2412609098U;
    msg.state = 251U;
    msg.error.assign("ISBGSVZXRFADMVNPIBTUKKRBOAXLPFLGNQXHHHUZYSDDGKQLMALURZMMRJXOROUMBFAREPTCTPVVFFKQJUIGIYMOEYODBHKYWXSBWTSPCTIASMXELIDZEGHHQCTUPVWLZZPDOUDINGLBDFSWOXMAYWHTCHQT");

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
    msg.setTimeStamp(0.27893029055754737);
    msg.setSource(4365U);
    msg.setSourceEntity(210U);
    msg.setDestination(14429U);
    msg.setDestinationEntity(30U);
    msg.seq = 356754120U;
    msg.state = 98U;
    msg.error.assign("YCXACPGVZLUCBEHSPOWKHTXGZNGVADOHIQABXJMGJQOKKYNPPIODZOQQVYSSZTMVRZVFDUCRRWVIUEKFJKEGRHAZJTPUZXXXVISCPEFTHEEHTKRFFDUJQXNDZUPOPINDIELBQYUYWATCHPMAWYITRFLYFFRAZVJBSYFDXBXUWFSGAROTLNZNXMBOKPQUYBQTUNDGSMYNOTCNMECCWW");

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
    msg.setTimeStamp(0.5346194116742632);
    msg.setSource(10068U);
    msg.setSourceEntity(91U);
    msg.setDestination(20772U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("CRCHCUGVOXKFINIMLTFJAOKZJ");
    msg.text.assign("WXXTJUHWZPXBZ");

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
    msg.setTimeStamp(0.43848362402025376);
    msg.setSource(10020U);
    msg.setSourceEntity(37U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("YHMKOUSOIMFIXBA");
    msg.text.assign("EZPZDVKAMXOEMDYCPHACFAMSWWFEYQGQKVEN");

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
    msg.setTimeStamp(0.026675244895619787);
    msg.setSource(36931U);
    msg.setSourceEntity(190U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(35U);
    msg.origin.assign("IXKLOCUFWWSRITQGSHWUBDLTBEOGNVMRJWKPOMQOYJPMDSLGMPEMWINQLZYWTOUOZUEZNRBNFHXZOETUSJAQVKVRYAKRFYZBHCEPBEMGXUEZSFFADPISEYUAEBQVZZKCBCXJDHRXVLDQAIPHNVJTHRDVDGVXGSWHNMVYQTRSHEP");
    msg.text.assign("UUMWGOCWWPLESNIZPRLYGVMNPZIYFDZCKKGDXCSEVYSRGQDITBTTJEYAYVDCRBPAYFOADPAOTZGUREWXWXINLRQKUOEMBCFZRHKRHAJKHRVFUTIOTSXBMCHEYJMTDDQTHXLIANBYDBLQXFPWMWPZVOZEHXZAKGNFGSFDJSRVAPUSQEZLVHQWQBWMNVBAILUXAJLKFNIKOPQNFDSRHTJTWLUYGFESHMBLKNGPOXOCIZC");

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
    msg.setTimeStamp(0.7593179984163594);
    msg.setSource(36881U);
    msg.setSourceEntity(66U);
    msg.setDestination(53525U);
    msg.setDestinationEntity(58U);
    msg.origin.assign("XHXIBTFUDJTOTZIAAYDBFVXVEEYCGOEAWZCGHOJIRSTZMWKNUUUCUMNSDWPDSRLSRQQMXPIBHWVXXENMUJVXISQYRNCLQGLKKLUWRGHTOSWQSDBBJIUMZOKLEMUCVEOKZOONIPGFWTHWOMDQVTCAKYQAKEGPLRYYXRSGQFUQZADJBIVSKQLHDNNYGZDGBYADVHLAKHHXFFNCZTBPAAMJFN");
    msg.htime = 0.5688802506264793;
    msg.lat = 0.8053350794446363;
    msg.lon = 0.923684362652833;
    const char tmp_msg_0[] = {126, 17, 4, -112, -89, -69, 39, -114, -28, -117, -124, -50, 111, -101, -26, -13, -111, 90, 104, 34, -40, -97, 68, 79, 95, 119, 57, 44, -12, -78, -8, -31, 121, -124, 116, 71, -108, 82, 45, -51, 54, 97, 126, -73};
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
    msg.setTimeStamp(0.7276298859961736);
    msg.setSource(16940U);
    msg.setSourceEntity(83U);
    msg.setDestination(44504U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("ETISOUZVEBTUEVGFNINVVFAKOZMCDPXGAORERUFGQSUMCZRYOTXLVYNCTSUDWRXJWBLQINCQKEVSPTIMCUGXLLEGOAHJYHWLAGXEHNGCNDVXWHCUOSYKGWOKYKJDRGXOJKUZJBKJDBRUHKIF");
    msg.htime = 0.35234808845880616;
    msg.lat = 0.7073404661871636;
    msg.lon = 0.9400447453220048;
    const char tmp_msg_0[] = {-116, 123, -105, -32, 72, -31, 70, -56, -19, -14, -45, 25, -85, -109, 69, 57, 27, -37, 49, -11, -106, -92, -99, -73, 95, 25, -52, 77, 70, -120, -125, -95, 35, 90, 23, -126, -33, -33, 27, -48, -70, 77, 1, 115, -101, -28, -34, -33, 110, 69, -14, 13, -73, -61, -22, -93, -112, 102, -26, 107, -7, -13, -74, 16, -81, -88, -23, 33, 36, 61, -40, 42, -74, -2, -121, 0, -74, -34, -95, 115, -81, -43};
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
    msg.setTimeStamp(0.8727628349139047);
    msg.setSource(27827U);
    msg.setSourceEntity(50U);
    msg.setDestination(34699U);
    msg.setDestinationEntity(102U);
    msg.origin.assign("VIDONVLNGBUTRNPKLANQQNRJEGFVYOUITPEKGISXANDDZHJEKWNDRBGPRZQCDUCQRXKTUIEBZAMUAOSWASULMUQPDACLPEIZRSTROFHZXWVLYMJWNOLYVHFWDLOMTFWITNZHEVBBIQYDFXPSKUDYFCHXFCHERBKMGCPYCOFXYLEBJMXFCAW");
    msg.htime = 0.8222963253372904;
    msg.lat = 0.44174959682232384;
    msg.lon = 0.09401592977368411;
    const char tmp_msg_0[] = {91, -6, 28, -123, 52, 31, -82, 21, -94, -3, -68, -67, 41, -35, 98, -96, -48, 85, 12, -123, -116, -57, -126, -102, -82, 113, 0, -102, 71, -109, 89, -23, 89, 59, -48, -93, 71, -38, 73, 15, -86, -123, -12, -32, 60, 110, -24, 67, -5, 34, 67, -54, -50, -72, -128, 13, 25, -125, 26, -9, -38, -63, 61, 56, -108, 63, -64, 111, 117, -125, -117, -17, -99, -21, 55, 48, 85, 54, -21, -63, 6, -6, 72, 51, 117, 94, 33, 1, -38, -82, -104, 86, 90, -51, -125, -45, 8, 90, -26, -11, 82, 36, -126, 42, 22, 54, -90, 105, -118, 88, -59, 32, 36, -30, -41, -49, -81, -96, 37, 0, 80, 36, 5};
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
    msg.setTimeStamp(0.8765510549169363);
    msg.setSource(5949U);
    msg.setSourceEntity(35U);
    msg.setDestination(26382U);
    msg.setDestinationEntity(211U);
    msg.req_id = 7227U;
    msg.ttl = 13000U;
    msg.destination.assign("KAGLSZMEFGMVBGBJSXYMRXPPTCHSCPULDWTRPWCGJSXAAINOQNTXTYMTYVUUHGSJQNDDAFIVGFTRMZJWODURDPJBZGMIEQXYXAKVPVVEXUIQODZBQQHMFWADDFWMZKLXQVIHLXRJLKSEFJCGBFJPKRZCOHQNBCIOVBFTLNBOCPVWUBMKZKNHMLCETYLOCZHFATAIYQSLWFIIEVXOSH");
    const char tmp_msg_0[] = {-85, -117, -35, 17, -8, -38, -81, 40, 39, 124, -12, -66, 97, -47, 16, -27, 89, -48, 77, 117, 0, 10, 73, 87, 61, -55, -41, -11, 107, -32, 22, -85, 120, -103, -71, 68, 115, 80, -24, -15, -84, -24, -1, 113, 43, 121, -8, -53, 95, 72, -57, -9, -114, 12, -70, 53, -52, -14, -76, 56, 66, -58, 42, 9, -101, -123, 45, -110, 52, 98, -66, -14, 39, 126, 45, -73, -43, -105, 25, -51, -121, -104, -22, 59, 8, -65, 64, -43, 4, 123, 104, 63, -17, 44, -75, -40, 49, 47, -115, 67, -104, -48, -45, -100, -37, -8, 51, -19, 123, -79, 56, -59, -38, 51, 77, -26, 28, -35, -115, 79, -103, -22, 31, -22, -124, -8, 40, -66, -104, -45, -97, -89, 81, 81, -103, -15, -112, 56, -89, -68, 49, 95, -108, -122, 88, 47, -104, -33, -93, -102, -5, 58, -5, -65, 35, -77, -33, 29, 126, 44, 1, 23, -111, -31, 30, -115, -127, 102, 121, 56, -127, 1, 1, 41, 20, 69, -86, -93, 23, -58, 75, -12, 6, 56, -81, -61, -54, -119, -107, -32, -101, -3, 1, -49, -35, 121, -96, 39, 32, -44, -21, 12, -72, -23, 124, 5, -23, -102, 49, -68, -90, 15, 75, 111, -65, 45, 15, 83, -119, 4, 53, -69, -85, 121, 83, -91, 55, -121, 85, 47, -4, 126, 66, -106, 53, -49, -37, 52, 63, 60, -128, -15, -97, -16, 85, -5, -109, 19, -5};
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
    msg.setTimeStamp(0.23719140038466702);
    msg.setSource(3147U);
    msg.setSourceEntity(218U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(151U);
    msg.req_id = 28746U;
    msg.ttl = 48112U;
    msg.destination.assign("QYOXNIBSVOYAFNUEMWJJGHM");
    const char tmp_msg_0[] = {-58, -109, -75, 69, 47, 109, -40, -78, -116, 52, 76, 37, 60, -120, -87, 89, -51, -116, -127, -67, 12, -82, 113, 55, 124, 110, 45, -76, 15, -33, -108, 88, 113, -126, 110, -50, -97, 36, -106, -118, -115, 28, 28, -68, 81, -125, 86, 13, 99, -53, -90, -52, -96, 46, -55, -112, 54, 113, 77, -40, -117, 120, 102, -26, -32, -17, 58, 120, -125, 9, 105, -18, 21, 25, 2, 48, 8, 50, 80, -103, -77, -21, -6, 122, -93, 16, -84, -65, -121, -117, 82, 119, -32, -111, 101, 103, 61, -79, 126, -30, -115, 54, -11, 16, 53, -44, 11, -128, -16, 120, 22, 43, 87, -94, 6, 105, 97, 92, 44, -28, -105, -46, 52, 9, 80, 62, -105, 85, 91, 46, -65, 26, -49, -13, 73, -72, 115, -115, -124, -127, -54, 4, 15, -5, 81, 21, 89, -87, 97, 1, 88, -26, 108, -49, -89, 100, 94, -100, -53, 25, -27, -22, -27, 117, 58, 13, -125, 99, 11, 103, 64, -80, 29, 5};
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
    msg.setTimeStamp(0.8487351945188243);
    msg.setSource(14708U);
    msg.setSourceEntity(1U);
    msg.setDestination(24086U);
    msg.setDestinationEntity(238U);
    msg.req_id = 33638U;
    msg.ttl = 27387U;
    msg.destination.assign("ETFPOWAYIPXIGTOHJLXPKTQIXRVOEFLEBCVGUODSSBVHYCLJTFQMCUGNEZFMZOUUSDDXACBDBNVOTZNHONECYMDOHUFQMKJYMYJRMXEUQRUGBUHKBWZEPNVLWQKJLDCISBIKSRADVTYCTRVQHGAILYCSWZXLDZPKUEKDXHNNAJWKXPTJEPTPBWVSRRHMBWNWXGRJQASEWQOFJAGCPZOFGFALBKNHGQMGCQNDIIMIUR");
    const char tmp_msg_0[] = {57, 8, -83, -103, -23, -48, -43, -27, 8, 38, -12, 83, 103, -7, -54, 109, 40, -23, -53, -25, -79, 1, -40, 119, -99, -101, 93, 19, -67, -30, -92, 60, 93, 58, -40, -38, 113, 86, -88, 11, 23, -90, 99, 7, -58, -6, -56, -82, -43, 69, -56, 14, 67, -40, -30, 80, -14, -91, 123, -27, 123, -127, -43, 6, 90, 18, 30, 64, -13, 120, 10, 98, 99, -32, -77, 80, -125, 70, 33, 110, -51, 94, 101, 62, -24, 61, 123, 19, -13, -91, 2, 81, 34, -73, -72, -73, 4, -3, -1, -1, -105, -4, 79, -5, -13, -29, -117, -112, -82, -54, -6, 7, -30, -14, -69, -31, 92, 115, 112, -15, -46, 105, -68, -10, 44, -78, 4, -119, 6, -65, -57, 3, -64, 83, -63, -76, -113, 119, 75, 0, -5, -96, -95};
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
    msg.setTimeStamp(0.37515403376508993);
    msg.setSource(55068U);
    msg.setSourceEntity(153U);
    msg.setDestination(60869U);
    msg.setDestinationEntity(175U);
    msg.req_id = 57524U;
    msg.status = 195U;
    msg.text.assign("IRANCTQIYESOHLXTVGVWJKDMBXYUREWBOSBVTTDBKERXQFJRPVZMKJEFJOHYBGAKFXLZOKMEIWPDB");

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
    msg.setTimeStamp(0.08052639668428041);
    msg.setSource(14335U);
    msg.setSourceEntity(88U);
    msg.setDestination(8962U);
    msg.setDestinationEntity(9U);
    msg.req_id = 13339U;
    msg.status = 230U;
    msg.text.assign("PXFECNJALQLBDIRODHDZTHXIPOYYLNYVWNSECVGPZBJFIUYBVRPQDLMCTKWFNYAJVGYLIARQRTKCFXSZXKXPOUMBWIGCQPJSOJSKHWWBZLHUKPVXSAUIQACBXYJHFGWRGJSWEMONXNQUEZDMSGI");

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
    msg.setTimeStamp(0.8811319998300314);
    msg.setSource(44699U);
    msg.setSourceEntity(43U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(193U);
    msg.req_id = 33672U;
    msg.status = 244U;
    msg.text.assign("GTGCDECNBSYEGRVLASGYRUBHRIEUIFXOJGZENUPYKOBHPRHTOZEHHAIKNCQTZVMTOSTTMDBYSVCXEWVWJMGDLHPHNQWSJPGICACSXFAWXUE");

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
    msg.setTimeStamp(0.6578080092807398);
    msg.setSource(17501U);
    msg.setSourceEntity(162U);
    msg.setDestination(39432U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("UQZDSZJKLGHCFMNHPATRXPMKMIDWSRINYBUJYACHMMDKLFFIPTFUUXUJQDWXWDDGSWOVIEERLKTZAXJRUYKFFEAOMBHTWVLGPKCSTSIUWWKNRQPWGZQSOHPYXYTEL");
    msg.links = 3990398787U;

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
    msg.setTimeStamp(0.3779445944982668);
    msg.setSource(9055U);
    msg.setSourceEntity(250U);
    msg.setDestination(7029U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("SMOAWXMOEGTVSDVJEZOYHLCOGUUTTCNYGBBQKATNZKBVRSJKNVYVCDQEOZZODCMJMXRJFMFHVUSWNSPCABGQTOQYVQEHLFHRFXZFNRMIRPTAQHXIUNCZYKLEJELJPHESPNSNRCDJRFDJOLNHDXKYKDLZJYLWSKQ");
    msg.links = 4134746061U;

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
    msg.setTimeStamp(0.39392003686999255);
    msg.setSource(58454U);
    msg.setSourceEntity(214U);
    msg.setDestination(37079U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("NOGVTTALQIQZPHJBFTIGFICEZZHTDJQOZKBWEMGWUHVIEFNBDUCFSXFHAGWUBRB");
    msg.links = 2102168289U;

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
    msg.setTimeStamp(0.01371699842278351);
    msg.setSource(21081U);
    msg.setSourceEntity(0U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(197U);
    msg.groupname.assign("RNZZMVYHMCHSWAPWZCOEWFEBLZLFTTXMTSPWVVXTTILQDKGDLZCEUQPNZESEOPPOKPAYIUDGEGROJRBJUDZKYKWVQJFSRKPLGCSUFDNNNKQLZRKIKXIEJSKNHSXTAGVGAXRWMSVOUNHUULBAABBBPXIEQVSWQCAQRNKBTTAAOXWRJFSDVHMUTYDZDGTJJUMOGBMMNFDOFHAMBGH");
    msg.action = 69U;
    msg.grouplist.assign("EXSAXKIKJNSYMNRFGDTETAGCZWVWWAPDUIPMEUTCWWADLZVTLZCBZHNYVIOLRIDKCQEBUXQNJPTYYQAHMUMEMBBAZIROGHBXJLKUZOTNMNFIBHMFJNWHODGGTSAOLRVNTHLIANQGFKPPNSXXOQVFDEPUXRHBYEJDPFVJCBCUOJVSFOOQMEGSGZUIFEZTCVQSIWLBFRJIOHUXGPRAVCKZTFWPXLELJYVWLYKRACRHK");

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
    msg.setTimeStamp(0.3272532499319859);
    msg.setSource(23239U);
    msg.setSourceEntity(8U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("LZUVSXFDGKFZHLHYXVNGDKKJHTMXJFJFIMYGUWGSRPBMTSVOZJOPOWWBPNZPLSDVDIHTQDBSUIHUFEUIJCWYLPQFLLBYNLARJQVOIQFJNWCQORDCWREUBTGWLRPXXMTIJFXIUAODJQMSFEVPRZ");
    msg.action = 223U;
    msg.grouplist.assign("THVKEINLDYFWDVBFGOVQKHDZWMABSGXUXPMUWNNFHHXOKPTZXEFQLNDVUXKKWPKCTAFJOSMDOAZHDPTIQJMUEPBLKBJNSZUMDOTA");

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
    msg.setTimeStamp(0.40671738758439424);
    msg.setSource(1010U);
    msg.setSourceEntity(230U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(194U);
    msg.groupname.assign("TGAOWVFUIUOVJOWQGGQCPJOJKQPNAOPNJDKIBMCDXSOLWZBHUGXJSTMITUTQTYVWUEIGSMNCAELVKSVBFSJEGZLQYCEDFBPKIRWLBRHXSGSHIZQNAFCWXDVZKMCABFKLUXRVJIDWAZFZZMPMRCSVDPCNRAJDNGEYPVHYPOLFJYAEHEQHVTPQYYYSZHBEUHEJUMUMLXDTDBLKNFSWCXKNKIYZMWFTZAUCRAPGOO");
    msg.action = 62U;
    msg.grouplist.assign("IBPJBUTZZXRHCGQWCKYYRRSTVBCBGKNPMVLOCIRABILZRJEAJRCDFQZVNZDGFUSFWGMDUVHIXGOBTCAAUDYPMFNJSJRAEGZBLGODIFECNMWUYLGTEWLQHUYAXSNXQEQTDEZOJQNKJLYFDIHDPQTSCSLNJSNTRXFOMXVUFEVZFQMTHKPMSOBAPUZELHWJKACVHIMFPXOHXKWMSBQYLSWKI");

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
    msg.setTimeStamp(0.9784789710780619);
    msg.setSource(2528U);
    msg.setSourceEntity(71U);
    msg.setDestination(52211U);
    msg.setDestinationEntity(218U);
    msg.value = 0.7234888813872179;
    msg.sys_src = 60542U;

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
    msg.setTimeStamp(0.8311621935840761);
    msg.setSource(4426U);
    msg.setSourceEntity(176U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3193513888338241;
    msg.sys_src = 54132U;

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
    msg.setTimeStamp(0.08466765431425705);
    msg.setSource(12629U);
    msg.setSourceEntity(84U);
    msg.setDestination(41793U);
    msg.setDestinationEntity(165U);
    msg.value = 0.3954826045767641;
    msg.sys_src = 43740U;

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
    msg.setTimeStamp(0.3720736437954887);
    msg.setSource(49097U);
    msg.setSourceEntity(43U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(215U);
    msg.value = 0.16982981489350457;
    msg.units = 143U;

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
    msg.setTimeStamp(0.8716404657537176);
    msg.setSource(49167U);
    msg.setSourceEntity(191U);
    msg.setDestination(26036U);
    msg.setDestinationEntity(36U);
    msg.value = 0.07002727946148934;
    msg.units = 27U;

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
    msg.setTimeStamp(0.4045954800689633);
    msg.setSource(13510U);
    msg.setSourceEntity(216U);
    msg.setDestination(17041U);
    msg.setDestinationEntity(211U);
    msg.value = 0.43456300221803434;
    msg.units = 107U;

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
    msg.setTimeStamp(0.7765950910192597);
    msg.setSource(9692U);
    msg.setSourceEntity(182U);
    msg.setDestination(36484U);
    msg.setDestinationEntity(183U);
    msg.base_lat = 0.8209050301083208;
    msg.base_lon = 0.49975534098947727;
    msg.base_time = 0.1272275368600747;

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
    msg.setTimeStamp(0.20610040414996567);
    msg.setSource(62944U);
    msg.setSourceEntity(136U);
    msg.setDestination(17363U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.843233912985194;
    msg.base_lon = 0.17496383806185956;
    msg.base_time = 0.5846522830748146;

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
    msg.setTimeStamp(0.43228856875171484);
    msg.setSource(46464U);
    msg.setSourceEntity(154U);
    msg.setDestination(16544U);
    msg.setDestinationEntity(52U);
    msg.base_lat = 0.3514790712947101;
    msg.base_lon = 0.8462587778598459;
    msg.base_time = 0.5903613185125303;

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
    msg.setTimeStamp(0.2834534547166727);
    msg.setSource(7430U);
    msg.setSourceEntity(39U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(21U);
    msg.base_lat = 0.408714289938637;
    msg.base_lon = 0.19639527807075763;
    msg.base_time = 0.1717341398314015;
    const char tmp_msg_0[] = {-33, 80, 76, 110, 88, -84, 2, 120, -1, 19, 10, -87, -65, -2, -114, -40, 94, 38, -14, -14, -25, -50, 87, -96, 74, 82, 24, -99, 41, 69, 63, -29, -83, 114, 97, -35, -100, -107, -55, 106, -29, -34, 102, -46, 99, 36, 38, -89, 102, -76, -57, -84, -59, -116, -38, 36, -57, -81, -120, -36, 126, -100, 65, -60, -97, -81, -48, -87, 73, -107, -33, 5, -75, 116, 74, 91, -51, -13, 10, -59, 50, 16, 66, 124, 103, -78, 75, -73, -57, -13, 60, 81, -81, -54, -7, 12, -72, 8, 125, -38, -81, -86, -23, 90, -116, -92, 54, 92, 91, -125, 42, -84, -30, 106, -11, 29, 15, 75, 59, 16, -49, -55, -6, 123, 6, -42, -101, -74, 3, 85, -93, 122, -62, 94, -71, -90, 68, 74, 114, -45, 71, 92, 25, -71, -80, -8, 105, -47, 103, -39, 118, 116, 113, 22, 109, -121, 118, 52, -98, -86, 18, 82, 67, -113, 109, 0, -104, -120, 74, 118, 45, 119, -87, 16, -118, -126, 93, 60, 74, -5, 109, 117, -63, -118, -34, -106, -111, -111, -63, -29, -26, -14, -17, -55, 11, 96, -73, -41, -61, -28, -32, -45, 113, -121, -108, 104, -76, 71, -69, -77, 79, -99, -82, -8, 2, 117, 68, 7, -86, 125, -62, 38, 60, 111, -96, -112, -63, -92, -107, -38, -3, 107, 64, -54, -44, -109, -31, 62, 8, 67, 107, 33, -86, -10, -9, -33, -109, -65, 48, -89};
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
    msg.setTimeStamp(0.1969170256496221);
    msg.setSource(42481U);
    msg.setSourceEntity(205U);
    msg.setDestination(465U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.004390515130043515;
    msg.base_lon = 0.7995965050216269;
    msg.base_time = 0.5259099535501798;
    const char tmp_msg_0[] = {-11, -81, 25, -4, 22, -11, 43, -35, -71, 101, -9, -55, -103, 102, 49, -112, -61, -103, -97, -45, -61, 113, 46, 28, 122, 110, 86, 73, -23, -21, -65, -39, 102, 100, -73, -19, 105, -16, -3, -35, 87, 65, -7, 78, -120, 83, 93, 76, 82, -43, 18, -98, -81, 26, 118, -8, -103, -58, 32, 17, -21, -107, 94, 97, -92, -99, 98, 13, 75, -29, -48, -80, 97, 72, -69, 49, -114};
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
    msg.setTimeStamp(0.5884537882693537);
    msg.setSource(44939U);
    msg.setSourceEntity(104U);
    msg.setDestination(27852U);
    msg.setDestinationEntity(41U);
    msg.base_lat = 0.560370248662965;
    msg.base_lon = 0.09219146639916509;
    msg.base_time = 0.9898399004852636;
    const char tmp_msg_0[] = {-2, -51, -44, -114, 91, -63, -35, -67, -74, -69, 64, 23, -102, 55, 93, 26, -10, 27, 84, -46, -105, 113, -79, -39, 14, 40, 79, -93, 96, -30, -47, -21, 43, 32, -2, 53, -19, 47, 26, 103, -89, 4, -121, 53, 11, 123, 46, -53, -32, 62, -64, -106, 17, -30, -5, 58, -103, -43, -90, 86, -83, -40, -79, 6, 81, 67, -38, 17, -108, 120, -21, -28, 97, -85, -4, 23, -57, -77, 49, -116, 38, -124, 74, -34, 15, 20, 28, 117, 9, -17, -18, -38, 98, 25, -115, -50, -70, -79, 49, 47, -95, 20, 106, 51, -66, 110, -29, 52, -76, 117, 5, -102, 42, 91, 19, -25, 105, 23, -86, 66, -42, 95, -110, 103, 118, -56, -101, 28, 126, 33, 114, -73, 18, 105, 32, 45, 83, 10, -77, -56, -27, 117, 93, 22, -6, -7, -46, 62, 21, -37, 84, 98, -122, -29, 7, -86, -92, -104, 75, 120, -41, -50, -90, 91, -59, -26, 1, -15, 63, -60, -54, 86, -71, 62, -12, -11, -89, 41, -62, -40, 52, -125, -29, 58, 58, -59, -128, -109, -26, 43, -92, -27, -36, 22, -77, -35, -20, 1, -13, 21, 21, 70, 59, -65, -12, -44, -5, 104, 3, 110, -44, 21, 37, -12, -97, -46, 81, -120, 80, 122, -36, -42, -15, 101, -80, 9, 29, 30};
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
    msg.setTimeStamp(0.9545691003760938);
    msg.setSource(36222U);
    msg.setSourceEntity(121U);
    msg.setDestination(10575U);
    msg.setDestinationEntity(211U);
    msg.sys_id = 37632U;
    msg.priority = -72;
    msg.x = -23920;
    msg.y = -8631;
    msg.z = -32027;
    msg.t = -18250;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 195U;
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
    msg.setTimeStamp(0.5255981553352334);
    msg.setSource(7991U);
    msg.setSourceEntity(213U);
    msg.setDestination(53788U);
    msg.setDestinationEntity(165U);
    msg.sys_id = 18487U;
    msg.priority = -7;
    msg.x = -15558;
    msg.y = -1509;
    msg.z = -14948;
    msg.t = 4230;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("VMGEGRRXDWCDHPUFIQLKJGINECUHIQTRGUYCJLTLWFBVSZXNAZHKAFDGBNQOCHLBSGFAEBZEIHSXTEVZFYRLCYVZSGFQQPCYHXGSNMDJYQBAW");
    tmp_msg_0.max_speed = 0.2721638354027285;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.lat = 0.9209494973495249;
    tmp_msg_0.lon = 0.369418965221084;
    tmp_msg_0.z = 0.12843363831446275;
    tmp_msg_0.z_units = 102U;
    tmp_msg_0.custom.assign("RMWNOMSDOFKLFIWHZEJDZJSQCWQRKMOTDUIMTNIBTTGFB");
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
    msg.setTimeStamp(0.9966440703410142);
    msg.setSource(825U);
    msg.setSourceEntity(170U);
    msg.setDestination(12532U);
    msg.setDestinationEntity(201U);
    msg.sys_id = 22523U;
    msg.priority = -60;
    msg.x = 32263;
    msg.y = -28090;
    msg.z = 13779;
    msg.t = 27447;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {38, -57, -35, -3, -120, -50, -120, 14, 15, -105, 71, 40, -6, -91, 70, 93, -11, 4, -124};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7011591666190758);
    msg.setSource(16862U);
    msg.setSourceEntity(15U);
    msg.setDestination(56262U);
    msg.setDestinationEntity(128U);
    msg.req_id = 55025U;
    msg.type = 80U;
    msg.max_size = 53252U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.1634559589172344;
    tmp_msg_0.base_lon = 0.23313593032858637;
    tmp_msg_0.base_time = 0.48723166051654;
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
    msg.setTimeStamp(0.47117789740822735);
    msg.setSource(5185U);
    msg.setSourceEntity(56U);
    msg.setDestination(7294U);
    msg.setDestinationEntity(171U);
    msg.req_id = 36439U;
    msg.type = 58U;
    msg.max_size = 23886U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7881444274346827;
    tmp_msg_0.base_lon = 0.1625747034035554;
    tmp_msg_0.base_time = 0.8351686506727108;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 57418U;
    tmp_tmp_msg_0_0.priority = 24;
    tmp_tmp_msg_0_0.x = 16050;
    tmp_tmp_msg_0_0.y = -32539;
    tmp_tmp_msg_0_0.z = -15319;
    tmp_tmp_msg_0_0.t = 4221;
    IMC::Throttle tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5589749666871661;
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
    msg.setTimeStamp(0.5905071999207502);
    msg.setSource(10078U);
    msg.setSourceEntity(118U);
    msg.setDestination(22965U);
    msg.setDestinationEntity(79U);
    msg.req_id = 11563U;
    msg.type = 156U;
    msg.max_size = 53624U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5391443209141805;
    tmp_msg_0.base_lon = 0.4517894040734135;
    tmp_msg_0.base_time = 0.27950523843666764;
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
    msg.setTimeStamp(0.6311284204926721);
    msg.setSource(60567U);
    msg.setSourceEntity(53U);
    msg.setDestination(63747U);
    msg.setDestinationEntity(217U);
    msg.original_source = 47303U;
    msg.destination = 4564U;
    msg.timeout = 0.6357139566349433;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 5U;
    tmp_msg_0.numsamples = 254U;
    tmp_msg_0.lat = 0.16921549185217588;
    tmp_msg_0.lon = 0.393530523520355;
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
    msg.setTimeStamp(0.0413845549053663);
    msg.setSource(47039U);
    msg.setSourceEntity(221U);
    msg.setDestination(49406U);
    msg.setDestinationEntity(115U);
    msg.original_source = 47097U;
    msg.destination = 5737U;
    msg.timeout = 0.1603587857317157;
    IMC::LogFilesQuery tmp_msg_0;
    tmp_msg_0.req_id = 11636U;
    tmp_msg_0.type = 195U;
    tmp_msg_0.init = 631271315U;
    tmp_msg_0.end = 1975385317U;
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
    msg.setTimeStamp(0.695005822589298);
    msg.setSource(14703U);
    msg.setSourceEntity(214U);
    msg.setDestination(59710U);
    msg.setDestinationEntity(152U);
    msg.original_source = 43630U;
    msg.destination = 43445U;
    msg.timeout = 0.6785057928929793;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.3122214153805435;
    tmp_msg_0.y = 0.5959459312943147;
    tmp_msg_0.z = 0.38414400368296986;
    tmp_msg_0.vx = 0.5825924814348511;
    tmp_msg_0.vy = 0.8171222559187032;
    tmp_msg_0.vz = 0.7745425201731019;
    tmp_msg_0.ax = 0.16048164681019472;
    tmp_msg_0.ay = 0.43733603590546977;
    tmp_msg_0.az = 0.3804672742121197;
    tmp_msg_0.flags = 51045U;
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
    msg.setTimeStamp(0.6080187807157652);
    msg.setSource(58050U);
    msg.setSourceEntity(101U);
    msg.setDestination(13812U);
    msg.setDestinationEntity(210U);
    msg.type = 29U;
    msg.comm_interface = 61308U;
    msg.model = 57103U;
    msg.list.assign("SSQJRBUWYMYAPSXXNVLDHDFKYULCNBTOWIAXUKTTCYWQUTIFUHHKISQEAEN");

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
    msg.setTimeStamp(0.5672203244647386);
    msg.setSource(52051U);
    msg.setSourceEntity(119U);
    msg.setDestination(14498U);
    msg.setDestinationEntity(31U);
    msg.type = 206U;
    msg.comm_interface = 22961U;
    msg.model = 60451U;
    msg.list.assign("TTXGQZUATLBNRJX");

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
    msg.setTimeStamp(0.42991122174101315);
    msg.setSource(24968U);
    msg.setSourceEntity(124U);
    msg.setDestination(44502U);
    msg.setDestinationEntity(109U);
    msg.type = 54U;
    msg.comm_interface = 17424U;
    msg.model = 55025U;
    msg.list.assign("CBOSXUNDMPKACVVDAYHYQ");

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
    msg.setTimeStamp(0.11855685702539853);
    msg.setSource(57802U);
    msg.setSourceEntity(54U);
    msg.setDestination(18336U);
    msg.setDestinationEntity(161U);
    msg.type = 249U;
    msg.req_id = 724800435U;
    msg.ttl = 31763U;
    msg.code = 126U;
    msg.destination.assign("FFPWAOWDYZGJVXCBGFCVVTTXDHKZZZMXHUWXBJFASMRKUIQBBZUKFSCRMEKJNKLAQRDYUXALAGHATDPVPOEHMIVNEHLJWCIIMKLFTBQGWPBNMZGEDEDTIEHWUGQJEVMPWRHIYGWEHBOOXPLRMSUARDOXSOSWSCNUKFCLWJKJFTSRQYDAIVPZYDQYXTYJXQDFF");
    msg.source.assign("XZFRLAUGOCQRIRSIYVEUORDMUUAYWMXHYJHDSAYXSNQDKBBSGDLJFRZWOVCTVQIKDQBQBFPSUGMMIYEJDNAZCZJLXBFKEVP");
    msg.acknowledge = 13U;
    msg.status = 115U;
    const char tmp_msg_0[] = {-59, 9, 62, -108, -20, -7, 122, 54, -26, -98, 6, 15, 45, 25, 44, 6, -90, 38, -34, -105, 4, -23, 121, -50, -42, 120, -128, -55, -52, 41, -48, -105, -97, -117, -113, 27, -54, -90, 40, -81, -109, -113, 88, 17, 96, -58, -104, -82, 84, 122, 59, 117, -15, -66, 22, -81, 65, 52};
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
    msg.setTimeStamp(0.7025774247765705);
    msg.setSource(7332U);
    msg.setSourceEntity(217U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(129U);
    msg.type = 26U;
    msg.req_id = 3967728913U;
    msg.ttl = 47963U;
    msg.code = 118U;
    msg.destination.assign("AMKRPJGHHRWYOTWASDYBDSXIVXIUHRV");
    msg.source.assign("VPNLZMDJVDDWMXGPQVTOGRXSTOAHBLKUFVZMBRZBRLAHJSYCPNVBDPAHLXNWEKBPZWXTXNTBZS");
    msg.acknowledge = 217U;
    msg.status = 23U;
    const char tmp_msg_0[] = {81, -70, -40, 110, 99, 31, 78, 118, 21, -127, -19, 112, 37, -91, 119, 89, 118, 49, 113};
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
    msg.setTimeStamp(0.45740398147467154);
    msg.setSource(32470U);
    msg.setSourceEntity(24U);
    msg.setDestination(57139U);
    msg.setDestinationEntity(234U);
    msg.type = 87U;
    msg.req_id = 3846083643U;
    msg.ttl = 8915U;
    msg.code = 46U;
    msg.destination.assign("RQPPHKGRLUYFOGFROAPAODWCNMWTXSSCMZPRTJFAYCBSSUVEQUZBPFBNHFZCUAMMKJGNBOVPHUKE");
    msg.source.assign("UVMJJJUVDPAILNOONDCELFPDGTHMYDKBCWMRQYRPULMDXSVRSUDAGWNALGCLDT");
    msg.acknowledge = 96U;
    msg.status = 85U;
    const char tmp_msg_0[] = {122, 26, -64, -22, -68, 95, -115, -118, -13, 56, 13, -63, -57, -87, 33, 32, -22, 111, -80, 14, -102, -42, 25, 40, 13, 54, 8, -101, -35, 64, 21, -118, -113, 117, -49, -105, -17, 105, -24, -32, 117, 111, 105, 82, -19, 46, 24, -66, 58, -50, -121, -81, -123, 65, 119, -82, 84, 39, -125, 69, -17, 37, 1, 124, 86, 98, 61, -120, 48, 1, -78, -46, 124, -127, 95, 10, 71, -33, -108, -31, -16, 3, 66, 27, -69, 55, -93, 45, -59, 81, -57, -33, -27, 68, 35, 14, 69, 29, -32, -81, 51, -12, -100, -120, 54, -120, -91, 101, -93, 88, 65, 40, 3, 17, -74, -4, -84, 55, -35, 88, 97, -64, -107, -110, 36, 6, 110, -68, -120, -60, 100, -11, 43, -76, -25, -81, -4, -25, -81, -93, 96, 95, -11, 110, 4, 63, -92, -90, -79, -43, 12, 113, -56, -97, 42, -79, 8, -97, -116, -52};
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
    msg.setTimeStamp(0.8606883967968006);
    msg.setSource(33611U);
    msg.setSourceEntity(149U);
    msg.setDestination(60004U);
    msg.setDestinationEntity(191U);
    msg.id = 172U;
    msg.range = 0.8145467787416423;

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
    msg.setTimeStamp(0.5334995854646118);
    msg.setSource(31674U);
    msg.setSourceEntity(237U);
    msg.setDestination(45854U);
    msg.setDestinationEntity(174U);
    msg.id = 246U;
    msg.range = 0.5823464436549801;

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
    msg.setTimeStamp(0.5275246914834564);
    msg.setSource(38427U);
    msg.setSourceEntity(237U);
    msg.setDestination(64946U);
    msg.setDestinationEntity(226U);
    msg.id = 14U;
    msg.range = 0.35849482644672004;

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
    msg.setTimeStamp(0.06390165400512204);
    msg.setSource(4120U);
    msg.setSourceEntity(75U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(243U);
    msg.beacon.assign("HKYMIKCULXDCKICCJGTRAVJXNLQOHWBNIFQJRZGVROXCLEPHLTVFSKERJQPFE");
    msg.lat = 0.403606069466799;
    msg.lon = 0.2663475031928215;
    msg.depth = 0.32896336023363815;
    msg.query_channel = 11U;
    msg.reply_channel = 202U;
    msg.transponder_delay = 237U;

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
    msg.setTimeStamp(0.5508390306126825);
    msg.setSource(55976U);
    msg.setSourceEntity(203U);
    msg.setDestination(52921U);
    msg.setDestinationEntity(26U);
    msg.beacon.assign("LSAJBQLIEPZAAQKHMLSQJPCYMROOJMTESMOJA");
    msg.lat = 0.5130861465512428;
    msg.lon = 0.38954630878097385;
    msg.depth = 0.511921208078181;
    msg.query_channel = 116U;
    msg.reply_channel = 6U;
    msg.transponder_delay = 54U;

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
    msg.setTimeStamp(0.03856439586016913);
    msg.setSource(64940U);
    msg.setSourceEntity(216U);
    msg.setDestination(638U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("CXTMOVMVHFZJQSHUKROUIICNSPNKBTBDOKTPCOUHVLWJWCBESDJUKMYDXFAPSEBPXJAFZGGFMYWHWKZEYQKDQCSZXYSDRRNNEFBAJJRIZQOUAJGJVJNQVFNFWPSPHVXATPGNMPKNAVWGWXCPHRQHBFZFGQHUDENFTBYELANMMYTRULDWOHUKRDQQBKLZOHZYZMAAEIOIIWDEBIMEILVCMLCSTLU");
    msg.lat = 0.5048635389034175;
    msg.lon = 0.7707161115313944;
    msg.depth = 0.3340182040922449;
    msg.query_channel = 243U;
    msg.reply_channel = 238U;
    msg.transponder_delay = 160U;

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
    msg.setTimeStamp(0.04298296030820803);
    msg.setSource(32962U);
    msg.setSourceEntity(33U);
    msg.setDestination(61066U);
    msg.setDestinationEntity(172U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.5910160687114168);
    msg.setSource(62275U);
    msg.setSourceEntity(151U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(99U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.7769976412099379);
    msg.setSource(36669U);
    msg.setSourceEntity(41U);
    msg.setDestination(7636U);
    msg.setDestinationEntity(91U);
    msg.op = 104U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IVNJVPCHHCWBIWLNWKEOQIBLUAPPOILFHHERMTWQSZZWQYKVSDRDZPYXIAWZRZJWKLJSAMCCGRDFZVPLQRQLAFMPBJGIMLYDSSUHYQXIBLNQXMNFDYOSITKUGYOXCRKTHPCRKGT");
    tmp_msg_0.lat = 0.16770346541898984;
    tmp_msg_0.lon = 0.9285700707512683;
    tmp_msg_0.depth = 0.18889780421440683;
    tmp_msg_0.query_channel = 43U;
    tmp_msg_0.reply_channel = 29U;
    tmp_msg_0.transponder_delay = 178U;
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
    msg.setTimeStamp(0.7282292093641881);
    msg.setSource(17919U);
    msg.setSourceEntity(178U);
    msg.setDestination(63234U);
    msg.setDestinationEntity(142U);
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.3914705403968395;
    tmp_msg_0.base_lon = 0.28841793099832647;
    tmp_msg_0.base_time = 0.9085202031943329;
    const char tmp_tmp_msg_0_0[] = {85, 94, 10, -66, 0, -71, -88, 108, -70, -115, 119, -76, -74, -100, -22, 73, 61, -49, -81, -109, -6, -75, 10, -82, -112, 120, 2, 68, -11, 126, 108, -37, -104, 36, 21, -128, -101, -41, 82, 117, -90, 51, 82, 109, -11, -9, -78, -113, 7, -71, -80, 35, 106, -82, 107, 95, -3, 20, -20, 65, -3, 117, -8, 38, -48, -82, -42, -59, 85, -89, -50, -7, 14, 48, -109, 73, 0, -94, -86, -15, -123, 17, -35, -64, 94, 115, -54, -4, 6, 82, -24, 45, 27, -10, 8, 77, 2, 113, -85, 121, -72, 62, -9, -40, 122, 103};
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
    msg.setTimeStamp(0.9466967162429853);
    msg.setSource(57055U);
    msg.setSourceEntity(251U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(15U);
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 29903U;
    tmp_msg_0.comm_mean = 78U;
    tmp_msg_0.destination.assign("UVGNOZHLAPRYCKFSOEJCEIGISXDPUTLSUAFMZOITOULXCVYZGHNQTYRKFQFPBEHUIQXTULZAYWASHDWQIMBRVNDLAJOAQUXCWKTANMARCXTSWKPFZMPTGW");
    tmp_msg_0.deadline = 0.7389587762159165;
    tmp_msg_0.range = 0.32451481961888573;
    tmp_msg_0.data_mode = 203U;
    IMC::DevDataText tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value.assign("ATSMHJHPEYJNUQJWFOXBVKDZXUADPBXIVQRATBHTXIDYYJWLYSAFCHLKDXKZTKMWQACQ");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("IAVAAFMUUYUQNTWSFRLYTPZQRCQVASOIENFHOQPNGV");
    const char tmp_tmp_msg_0_1[] = {81, 87, 26, 122, 23, -26, -104, -13, 16, -68, -45, -40, -23, -54, -5, -53, 0, 58, 14, -91, 58, 50, -108, -64, 16, -91, 76, -105, -121, -98, -33, -51, 76, 104, -75, -47, 114, 71, 68, 82, 122, -7, -89, -91, 119, -124, -108, 15, -51, -25};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.4441645132693005);
    msg.setSource(44291U);
    msg.setSourceEntity(190U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(230U);
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.7452469946934095;
    tmp_msg_0.type = 188U;
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
    msg.setTimeStamp(0.5854730745520105);
    msg.setSource(51524U);
    msg.setSourceEntity(55U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.5586537554507671;
    msg.lon = 0.7292683701313908;
    msg.depth = 0.6475534952414964;
    msg.sentence.assign("DOIVKKHUICLVMVPRNYCUPWIAKNHBTWOQWALBDQJHGKURXMNJMZXACPAAHRIZULQESTMXMEKTCPFQAPKILYXGZLYGGULZFDYIGXQFTZFIPRLMJYPFGMDVCBYZTALMUDQVFDKWPETOWSOPTJOKCEQOBXAJWVEDWSWCNJLAHCJYF");
    msg.txtime = 0.9394056803235397;
    msg.modem_type.assign("OZYBYYYEOBTAVAOZXBYLUBMEVJHSQRTKA");
    msg.sys_src.assign("FZWWWHFCQYNTJVBUESMQYXGLPINZGDGNHCETVOSGBQQXIKIPWFLLNBKGDGPOMIRTPABFLCPUIOAFDWZEVZPNRAWKQRRZDPMDYOQUVKUKLAXCZYJXUBCLAOTJDFTSZLENNYIJXQQSYUHRULHHVHBWRGUROSKHBMVEFKSCFJRMJEAEEAHPCNNRSIWFOPEMGVMQEAJTSBLJQC");
    msg.seq = 30200U;
    msg.sys_dst.assign("WWLHHXXOBKKNWNDCTTVLTKXTLCZJTSHFZSBYWNCHNZOTXVLNGQIOACVGJQFBBZRVEVEWAYUUOIIRGJVPFRFJURIMGPIPIQHMECNAIMLTNXVLWXOECRAOMZYDKMMLPYFCCYEAEQQRQGPQUDDIKOUEMCDXRSQAZVKRVVDIWFHKSGDAZFRTEPSJLSDFFGHWTJPAMBQJDXSEPONYPYUTAILWYKAHZSBOUEMSJKUKGNBRDYHXSYGNUZW");
    msg.flags = 104U;
    const char tmp_msg_0[] = {66, 66, 58, 25, -6, -57, -104, 84, 73, -74, 49, -93, 50, -44, 120, -44, -123, -11, 89, -36, 33, 90, -12, 50, 33, -104, -59, 46, -70, -99, -128, -43, -65, 24, 69, -90, -128, -53, 92, 49, -36, -56, -89, 119, 20, 59, 24, -33, 21, -8, 39, -33, -54, -9, 70, -72, -19, 1, 122, 97, 7, -125, 55, 116, 62, -27, 24, 15, -12, 26, -39, 88, 89, -80, -71, -19, 101, 38, -2, 110, -122, -77, 62, 37, -8, 112, 44, -68, -90, -128, -33, -81, -39, 83, 63, -16, -100, 123, 31, -102, 35, 8, 92, -63, -91, 78, 49};
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
    msg.setTimeStamp(0.44310430277962276);
    msg.setSource(294U);
    msg.setSourceEntity(123U);
    msg.setDestination(51235U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.7776665108953262;
    msg.lon = 0.802526381422662;
    msg.depth = 0.4921491596123987;
    msg.sentence.assign("BFJPQHMKGSBHXAGIGDCMYNTARYUWJILVUHDVMVYOTDGXARELRZNENHARZSFEZVDSCEWXMNJSOGCMTPFLPBFUOUQEDKBXIMZR");
    msg.txtime = 0.7521765594041738;
    msg.modem_type.assign("TEEPXLPNLUIEBLBWOMFQYPOWGKSUNUJYVNDPCJQOZEMRYZJPIZQIWGKTVYEPCAOHWCOWKFHLJTIYRHPMXHYOYAMRDTDPXLMTTGDBCVXSPRDJQICXERKIEILTWDMYGGABRSMCZOMWWSMAJRXVHNZRVNQAGBTXKZPQBJUJSLETIHOVVGINLKBBJWNUQVLAFTZIWAFQFKAUDFGCR");
    msg.sys_src.assign("MXDLUIQIWYCGFQSCNHFRCRERYVUIOLTEUGMFZSXVDDVHBTYWZULXPTZUGSYNWWHUZBZFJJNFZDWPMPITESBDBRSXWEELDQRUUAMDAGSLRKRASVNNSTNIFAJQAKMRYOWOTUBGXIQKLENZFBRWMHWGVLKRPGQSLAIHAKMACHPPVXCNHGVZXYTUYGYHBQNFXJIVJMEOYCIXVOTEKTDFJPQVOOCEJ");
    msg.seq = 15537U;
    msg.sys_dst.assign("IONGKMHKULJGZYLCBSIHHKMXOEXZKUWIREIQYFZPTXMQVGQSMRDWUVNVPDNGSOLIZCMHVBLFJXFBDKSJCNBUQUCLVGTLETHWAOKVTSBZWVWATJ");
    msg.flags = 52U;
    const char tmp_msg_0[] = {-28, -119, -2, 95, -45, -63, 123, 104, 50, -58, -78, 68, -122, 33, -53, -98, 80, -51, 13, -43, 115, 92, 50, 66, -102, -14, 118, 2, -122, -92, 2, 32, 30, 74, 114, 39, -47, 111, -62, -123, -117, -102, -90, 24, 104, 63, 116, -15, -22, -17, 78, -126, -122, 126, 56, -57, 89, -103, -94, -109, 20, -99, -75, 54, -36, -43, -5, 93, -120, 35, -114, -116, 14, 37, -86, 112, 25, -75, 48, -53, 71, -103, 41, -114, -40, 41, 96, 104, -82, -93, 124, 103, 69, -119, 5, -55, -62, 78, 60, 77, 65, 115, -51, 125, -9, 12, -93, 3, -11, -13, 54, -114, 5, 105, 125, -81, 125, -35, 111, 50, -42, 83, 108, -82, -87, -100, -10, 18, -90, 98, 109, 112, -72, 65, 92, 50, -47, -40, 48, 9, 92, 126, 56, -100, 57, -11, -84, 80, -67, 118, -33, -16, -109, 124, -27, -73, -101, 93, 17};
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
    msg.setTimeStamp(0.4615745652361113);
    msg.setSource(26475U);
    msg.setSourceEntity(183U);
    msg.setDestination(59855U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.5054390122780619;
    msg.lon = 0.8771615300127635;
    msg.depth = 0.603148277954551;
    msg.sentence.assign("KRBLWIGGTKYATBQNYRVGEVJFJLFLPMDABOKBOWHAMREUTNVARDQOFSVYEMTIDSITJNIACXLQGBNDPIEBROXZAWTHXBWUCWLPGUASYVVWCOQMMCJYKNPZHGOYOZTKCBXRQRLHSIYVAQPNLHHG");
    msg.txtime = 0.8581627186779239;
    msg.modem_type.assign("DXLIHEGDMNLN");
    msg.sys_src.assign("GVXEZYFRZDVYWNJJLDRGQBNITCESKPQHGIPZAXDROCICVRMGGTXUEPCHHSNACEOSBOXYUUBUKWHNYUUJSEJLDTKFZRGQKFINYMHMDGZFNWTQLNTKJMLLBFIYHDMOSRHCSVHVCYPDCYRCAHLUQNYZFQXWSAMNRIXGKLSUOWJICAETKXQDIRXB");
    msg.seq = 11268U;
    msg.sys_dst.assign("PNEADSXTXWDIGSBVNZPZHQENIJVWDLDTCBDGVKELBPZOTGBKMOEIEELORITPXPMFHSNXFIERQWRLWDTFZJKOGZAYEYVAGNZUXNFWZSUAFNWQPJEAOHKEOGXAYAL");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-112, -61, -55, -74, -91, 65, 6, 3, 3, 60, -86, -61, 16, 110, 37, 78, 93, -66, 29, -46, 110, 50, 120, 18, 98, -14, -30, -8, -43, -81, -44, 45, 42, 35, -87, 122, -56, 46, -128, 45};
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
    msg.setTimeStamp(0.17444272821123563);
    msg.setSource(7828U);
    msg.setSourceEntity(8U);
    msg.setDestination(2193U);
    msg.setDestinationEntity(213U);
    msg.op = 241U;
    msg.system.assign("RFSBQGYGKYLTDWIUM");
    msg.range = 0.9759963352950207;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 5U;
    tmp_msg_0.time_remain = 0.790785011435817;
    tmp_msg_0.sched_time = 0.6121677559463415;
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
    msg.setTimeStamp(0.9483869156169958);
    msg.setSource(34361U);
    msg.setSourceEntity(90U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(82U);
    msg.op = 5U;
    msg.system.assign("BDVKTXYVRPIUHHBUBOMXSKCYAKBBFSSPEMWVDQVRFAGTLNQCEVNKVMPVHGYCWUEKZBMTWJUQRPUGUNTMMMTKZYSGBHZAXLAPOODZLHZWOAMCWDXBRDGXQOBXGJFFZWCNQYYPFFLDDURHAEZYRIUSXYYNQEJJDWQOFGTFKAQJHHIPLUJTGLRIBWLSHITXSAPQNESMUAKEIRVEOWCRZI");
    msg.range = 0.8586936684369356;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 232U;
    tmp_msg_0.mode.assign("AZGRXQBYEAJMHFVEQANOVVYRIKTIFERWUHKNTCWNDDVLCMYLYHOGJCPUHIEEMQJJNTYDOALJYZUTHOSRXWXGUUHQNHWJKCJZIUCKLCSWNRQBEKCFITJYJVSBCZBSSXRGQVEFUKRPZACXMIQAPSZRFOSYOFUIDIULQKBFMGWAMXBDQTPTWHCIMTVDFKEOWPUAOMIGBHPFNJZXLDALEZZPXPKVDFENNXKNVZXBRVYSTMLSBWSPPYLOGBDQLGD");
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
    msg.setTimeStamp(0.6561360056515944);
    msg.setSource(31901U);
    msg.setSourceEntity(215U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(181U);
    msg.op = 58U;
    msg.system.assign("QZDQWVQYJBQZMOSPDRPKAFLYJFIWYLAJSMBUISHUPSJRSTPVCKCGGPZXIHMGMHRYLWRMOTTZRTXUCJJLUTHFFKJHEEDBYXEBFWLOAUCDZMPMKGPICOJWKWWQEUPNCLIJGMO");
    msg.range = 0.7828473051549687;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2355239216496462;
    tmp_tmp_msg_0_0.speed_units = 86U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6708124987956067;
    tmp_tmp_msg_0_1.z_units = 43U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.23381355545076987;
    tmp_msg_0.lon = 0.2320008467295427;
    tmp_msg_0.radius = 0.45075415381019557;
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
    msg.setTimeStamp(0.8910854707740641);
    msg.setSource(43806U);
    msg.setSourceEntity(210U);
    msg.setDestination(59728U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.49357627073669574);
    msg.setSource(51150U);
    msg.setSourceEntity(218U);
    msg.setDestination(18899U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.33163792612144116);
    msg.setSource(18908U);
    msg.setSourceEntity(105U);
    msg.setDestination(35073U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.162117920129496);
    msg.setSource(59715U);
    msg.setSourceEntity(2U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(211U);
    msg.list.assign("UMBSLYFFKCXRLMNTZKDWLYFRTLTAIOTVAACMKMKCQTIMAPKIMEGXXIMQLUOWWLWGEQOGUUIJINCRKDEJHBRVSIZDOXLVXZUQCEVFENNPFBWPQQPHDXRTANEBSSIQCDBFOSTBJQSVGZFNPRHVGLYZPWJKBPHBITJHYZSMNEDHPGVURYKXZHGCSGJRUAUXANBYZTHGUJIJFZQ");

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
    msg.setTimeStamp(0.36819392924941563);
    msg.setSource(1845U);
    msg.setSourceEntity(122U);
    msg.setDestination(24717U);
    msg.setDestinationEntity(162U);
    msg.list.assign("YIWVRWDRHJELLMGZVEGWBTAKJTKBLQMSRZJSBQJMSJQBPRQAOASCUFJJXQMUHYDGFNXBCOLICSTXUTZLLOVPROKJVDQNKCTTYFYHUDUPFPCKOPCYGCREYGWKMZZPKSHSNHUEAEVVGMKUUYIYGHSGNCHIXGVDQWECNILIROIGPVUJUNFRWEHXLMRNHTPDWYWMZZEATAXBIWBYKFQPQHCWZXJKFVSEONNMZBOIZBER");

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
    msg.setTimeStamp(0.2903333133172119);
    msg.setSource(56165U);
    msg.setSourceEntity(230U);
    msg.setDestination(61550U);
    msg.setDestinationEntity(167U);
    msg.list.assign("LFFBDSAENLLOLJCMWAUWKKNFHDPZDFGTLWAUYKVBIRSZRUZWEIXZNSOGBYFYMIIXEYROHGHXOBZXOPNMUADVMZSYVOXQCQGWQGDSANJQSTKYAWTTMAAMONXTWRMDMFPCEZUCVLFKTISKBJHADNLJPZDEPNQRQZLXZPGVRBSWJHQPFRCHXEFGRWPEJCYBURANMHMIGYHOXVCOOSJLWCKPCYPTBFDIKIKE");

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
    msg.setTimeStamp(0.35121426869598016);
    msg.setSource(18126U);
    msg.setSourceEntity(41U);
    msg.setDestination(28348U);
    msg.setDestinationEntity(48U);
    msg.peer.assign("PXLFKNZBJZQDOMUSNZFSHSMIGRTJOJTGHCNFVUOSOVPLMQVAIZYAWDIGZPEUJKKOHCOPQUIHVUWLTKBELBWJTGNJRHTKRUZSXYYOEUISXGQWLNOANAHVCANTPWYTHMZFEWCKGSXOASXFIWAZNMHIVEBHKRYGXSXRDYBVIMLUMVAUVDZDCLSYFYKACJQ");
    msg.rssi = 0.10314814567494701;
    msg.integrity = 20411U;

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
    msg.setTimeStamp(0.48784579015923435);
    msg.setSource(129U);
    msg.setSourceEntity(156U);
    msg.setDestination(33769U);
    msg.setDestinationEntity(117U);
    msg.peer.assign("NZPZPQHKHEACZFFGRLEUJQFABYHTHOTWDQYUTKMTUKJZXDUYWYHFWPYBVMCSWKWYIPHZVDZZEKKDMARGCAJGVRWWUIGYVLFDHFGTOUHJIXCPPQWRSKIITNLLAFVRMLJTJHKXQJCSSMJNQSMJWSGTNROTEDXEJOOANGBNMEKSNIXKSFAUFRWCRQZNDUVIPI");
    msg.rssi = 0.35797209210324044;
    msg.integrity = 851U;

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
    msg.setTimeStamp(0.5987392982527057);
    msg.setSource(39025U);
    msg.setSourceEntity(32U);
    msg.setDestination(23661U);
    msg.setDestinationEntity(6U);
    msg.peer.assign("LPDZKUXNWIJGJFIUBKYACRLNGLKQWXASSYOAHVXHCDIYTFPJIVWOIDGSEOEYNFZTYXVPCTKTLZEHRGEKXVLIQYKN");
    msg.rssi = 0.24068157299935988;
    msg.integrity = 522U;

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
    msg.setTimeStamp(0.3283209485741223);
    msg.setSource(47937U);
    msg.setSourceEntity(132U);
    msg.setDestination(15319U);
    msg.setDestinationEntity(6U);
    msg.req_id = 34207U;
    msg.destination.assign("GVAPHQYDOKCZDIBMWEUCQKIVEXQMBVJJHLSSGPLDMXCMVLXQ");
    msg.timeout = 0.10334060496483011;
    msg.range = 0.026010326221459712;
    msg.type = 68U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("YHNPLMFIBVPBNVHFLGVMDVOAWIYDWZZRCZQOYLRCCJNAJANHCXEIKEQSJUTFDHLWZUYGKAOGTJIJKRDCVERVWQAKSNAQXEBMJNYUEMDXVBRDGCYODMUVFYZKMNXOLVNTPKERKPWIFGQGFFSOHIOFPALTWNWQQLRYTCMLSPYTRFEURYBUPWKBGOLSXUGWABJFS");
    tmp_tmp_msg_0_0.lat = 0.8532703978428078;
    tmp_tmp_msg_0_0.lon = 0.319394455955775;
    tmp_tmp_msg_0_0.depth = 0.12280906095131339;
    tmp_tmp_msg_0_0.query_channel = 6U;
    tmp_tmp_msg_0_0.reply_channel = 1U;
    tmp_tmp_msg_0_0.transponder_delay = 25U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.46814378467859086;
    tmp_msg_0.y = 0.8917288530324543;
    tmp_msg_0.var_x = 0.6881487734383711;
    tmp_msg_0.var_y = 0.2699834905566538;
    tmp_msg_0.distance = 0.18718961537083867;
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
    msg.setTimeStamp(0.777280886995484);
    msg.setSource(64890U);
    msg.setSourceEntity(177U);
    msg.setDestination(6586U);
    msg.setDestinationEntity(247U);
    msg.req_id = 29680U;
    msg.destination.assign("EWMAYTDWGUQSLWMUJTQPOLCXYCXAEYOZDHJOVWINWEUBVWOQIFPCFGQRZSLPMHTRDJZMRSDGAPMWRXRAAQJVLNCZBCWMYRENPNXVKMZLQREHBFXEXDRG");
    msg.timeout = 0.1664594511213242;
    msg.range = 0.22684069419972153;
    msg.type = 25U;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.35084321435801724;
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
    msg.setTimeStamp(0.4689571714303922);
    msg.setSource(65428U);
    msg.setSourceEntity(124U);
    msg.setDestination(28863U);
    msg.setDestinationEntity(145U);
    msg.req_id = 28606U;
    msg.destination.assign("QFXRQORUBUAHXIWZLMXQETQXBJSKNBUWJURMSDWGTZCODPZJHIWJRGFVHNGGSXGMMPOYPPHIEBQFCLFLNDGXGAYFVWIIQTSXFPPOTLYLUFUNGCYRTNLLETWNKUDHVYBWCKFNE");
    msg.timeout = 0.6080173822877256;
    msg.range = 0.6617655390010516;
    msg.type = 79U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 52018U;
    tmp_msg_0.avg = 0.2182207557830873;
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
    msg.setTimeStamp(0.656114658393828);
    msg.setSource(26395U);
    msg.setSourceEntity(188U);
    msg.setDestination(8108U);
    msg.setDestinationEntity(66U);
    msg.req_id = 7084U;
    msg.type = 161U;
    msg.status = 225U;
    msg.info.assign("ARFZYUBDGOJQYMOLZFIDUXZVEKSWMPYZIECBWIYVIBBCNUXVRZBEOXZXMWDIONEALGSSHYHKHPDCIXPFWKFWTJZFJWWIPKHHTJVMVFWJQLNUKSDHFEDNDHUCWKESTGTLN");
    msg.range = 0.7672256914974157;

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
    msg.setTimeStamp(0.1091095464790024);
    msg.setSource(4019U);
    msg.setSourceEntity(158U);
    msg.setDestination(57592U);
    msg.setDestinationEntity(1U);
    msg.req_id = 14938U;
    msg.type = 0U;
    msg.status = 33U;
    msg.info.assign("UFUGDNIEGHAJGPNBHCKDYYGZZPBSJBIDKSNXJIMVHWATSDBTLTVTBAFOSHMOXSVRXXQERVHUZZBQLJNNRNZMTIGEFLUGIEUKPAWYYXRCQREKTDASKQFJCOVRZYDNUEWDZCZLTOMFJMQXWWPZOGTLGOFXWUKYTYGLYEWLIPXRVSQBXYVFWHIHW");
    msg.range = 0.34661978088951506;

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
    msg.setTimeStamp(0.07392336172573921);
    msg.setSource(62514U);
    msg.setSourceEntity(213U);
    msg.setDestination(15814U);
    msg.setDestinationEntity(154U);
    msg.req_id = 60146U;
    msg.type = 69U;
    msg.status = 47U;
    msg.info.assign("MBHFLMUEZYFMANQYQQ");
    msg.range = 0.850061107750344;

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
    msg.setTimeStamp(0.37207122770688705);
    msg.setSource(8425U);
    msg.setSourceEntity(201U);
    msg.setDestination(43787U);
    msg.setDestinationEntity(137U);
    msg.system.assign("YZYUSQNQBMZSOEXWTNZVLRIWVDXOCHHJVUNNSKLQHDGAYEQLLVQTMGIBNKHLWGLOIOMLPGETPWAVTAJQTZCUBVYWFPPHCWMJCJNLVLYYEBSOTCTDHXXUJFZSQVEJWMWJEHLDQBYRWRRDBDZMRERPANIZRXMBAOGBCFXIPIOFCPKBZZOUSGHEPOAMUXSFKUD");
    msg.op = 71U;

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
    msg.setTimeStamp(0.8225503300927199);
    msg.setSource(9965U);
    msg.setSourceEntity(77U);
    msg.setDestination(18738U);
    msg.setDestinationEntity(18U);
    msg.system.assign("JAKMOSPIWUCYGWDCNEKPCKVDXPJXAOXLZKGGUUSCSOUPTMRAWEBWEAKHKBKVDZQEAYOFOBLYLTEKNQQJMPTQXGEVZSVUSYVIWTWLYXAOVGMDGFYQCHZOGDZGFWCENTPRHSHLNQXIUCFDEFRNLINIGVHJTAPJYUKPFY");
    msg.op = 0U;

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
    msg.setTimeStamp(0.43299875292096157);
    msg.setSource(65294U);
    msg.setSourceEntity(146U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(101U);
    msg.system.assign("TUCXMCNPLIAAUPLQOCQIQDPGHRA");
    msg.op = 180U;

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
    msg.setTimeStamp(0.854634100622108);
    msg.setSource(3985U);
    msg.setSourceEntity(93U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(74U);
    msg.value = -4213;

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
    msg.setTimeStamp(0.8137504622514833);
    msg.setSource(56263U);
    msg.setSourceEntity(108U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(217U);
    msg.value = -31135;

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
    msg.setTimeStamp(0.4541569804814968);
    msg.setSource(43671U);
    msg.setSourceEntity(220U);
    msg.setDestination(34344U);
    msg.setDestinationEntity(193U);
    msg.value = -26902;

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
    msg.setTimeStamp(0.4063680225412205);
    msg.setSource(1133U);
    msg.setSourceEntity(69U);
    msg.setDestination(56858U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6008533461654617;

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
    msg.setTimeStamp(0.5939436572161868);
    msg.setSource(25195U);
    msg.setSourceEntity(140U);
    msg.setDestination(27875U);
    msg.setDestinationEntity(169U);
    msg.value = 0.6892326075223753;

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
    msg.setTimeStamp(0.44940928426871607);
    msg.setSource(22082U);
    msg.setSourceEntity(174U);
    msg.setDestination(15644U);
    msg.setDestinationEntity(45U);
    msg.value = 0.8525244865594894;

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
    msg.setTimeStamp(0.5437202503281751);
    msg.setSource(16830U);
    msg.setSourceEntity(12U);
    msg.setDestination(60916U);
    msg.setDestinationEntity(73U);
    msg.value = 0.21374241196228982;

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
    msg.setTimeStamp(0.16752554592777757);
    msg.setSource(14421U);
    msg.setSourceEntity(140U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(51U);
    msg.value = 0.8891310054665541;

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
    msg.setTimeStamp(0.9099405372062772);
    msg.setSource(14031U);
    msg.setSourceEntity(215U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(127U);
    msg.value = 0.38304857619231536;

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
    msg.setTimeStamp(0.043804686042919205);
    msg.setSource(17008U);
    msg.setSourceEntity(38U);
    msg.setDestination(33451U);
    msg.setDestinationEntity(69U);
    msg.validity = 18487U;
    msg.type = 75U;
    msg.utc_year = 51246U;
    msg.utc_month = 18U;
    msg.utc_day = 240U;
    msg.utc_time = 0.6519053749970787;
    msg.lat = 0.05177105778100799;
    msg.lon = 0.8544075359740834;
    msg.height = 0.9781654125586798;
    msg.satellites = 82U;
    msg.cog = 0.4039284478600089;
    msg.sog = 0.3072413812097252;
    msg.hdop = 0.10456124340459905;
    msg.vdop = 0.943925607325966;
    msg.hacc = 0.3730926332160772;
    msg.vacc = 0.7988841351080058;

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
    msg.setTimeStamp(0.060908464311061006);
    msg.setSource(335U);
    msg.setSourceEntity(138U);
    msg.setDestination(30246U);
    msg.setDestinationEntity(207U);
    msg.validity = 28554U;
    msg.type = 228U;
    msg.utc_year = 10768U;
    msg.utc_month = 243U;
    msg.utc_day = 200U;
    msg.utc_time = 0.348563672886101;
    msg.lat = 0.688710698941605;
    msg.lon = 0.8728444232270439;
    msg.height = 0.7860246548348369;
    msg.satellites = 238U;
    msg.cog = 0.18202479143627082;
    msg.sog = 0.17636694389724739;
    msg.hdop = 0.5187589319376108;
    msg.vdop = 0.07808994485546272;
    msg.hacc = 0.9281684368393823;
    msg.vacc = 0.052679577553676804;

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
    msg.setTimeStamp(0.5504387629294946);
    msg.setSource(35941U);
    msg.setSourceEntity(121U);
    msg.setDestination(22023U);
    msg.setDestinationEntity(132U);
    msg.validity = 36943U;
    msg.type = 165U;
    msg.utc_year = 23679U;
    msg.utc_month = 89U;
    msg.utc_day = 189U;
    msg.utc_time = 0.9625845239539949;
    msg.lat = 0.7279791060521277;
    msg.lon = 0.8829829258252051;
    msg.height = 0.688978360794515;
    msg.satellites = 49U;
    msg.cog = 0.78043769774963;
    msg.sog = 0.44137955338602997;
    msg.hdop = 0.1892941321067778;
    msg.vdop = 0.6030448293413729;
    msg.hacc = 0.5646272395283312;
    msg.vacc = 0.1356319662676787;

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
    msg.setTimeStamp(0.9955890014214464);
    msg.setSource(17802U);
    msg.setSourceEntity(27U);
    msg.setDestination(58586U);
    msg.setDestinationEntity(66U);
    msg.time = 0.354778991642693;
    msg.phi = 0.14262230434343448;
    msg.theta = 0.6904337672301895;
    msg.psi = 0.3765058613098048;
    msg.psi_magnetic = 0.4412172003362659;

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
    msg.setTimeStamp(0.5317748228183142);
    msg.setSource(50650U);
    msg.setSourceEntity(76U);
    msg.setDestination(19385U);
    msg.setDestinationEntity(27U);
    msg.time = 0.38060050368891407;
    msg.phi = 0.9481046774480046;
    msg.theta = 0.8951202332644133;
    msg.psi = 0.8337872559372362;
    msg.psi_magnetic = 0.4564730612613529;

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
    msg.setTimeStamp(0.6711884247313096);
    msg.setSource(35397U);
    msg.setSourceEntity(27U);
    msg.setDestination(13604U);
    msg.setDestinationEntity(29U);
    msg.time = 0.7538333158392697;
    msg.phi = 0.7599360202439126;
    msg.theta = 0.1339970570581498;
    msg.psi = 0.37434590234541354;
    msg.psi_magnetic = 0.7418611413783537;

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
    msg.setTimeStamp(0.9568047095110401);
    msg.setSource(54338U);
    msg.setSourceEntity(41U);
    msg.setDestination(59498U);
    msg.setDestinationEntity(34U);
    msg.time = 0.9508110770040645;
    msg.x = 0.9698731797047644;
    msg.y = 0.10806547040640724;
    msg.z = 0.21572122118998815;
    msg.timestep = 0.20265761527819437;

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
    msg.setTimeStamp(0.052207197043796616);
    msg.setSource(41348U);
    msg.setSourceEntity(63U);
    msg.setDestination(55066U);
    msg.setDestinationEntity(171U);
    msg.time = 0.08217971097319476;
    msg.x = 0.2341326896392999;
    msg.y = 0.539084468000839;
    msg.z = 0.6898513308209588;
    msg.timestep = 0.22271459211098021;

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
    msg.setTimeStamp(0.8459253981166948);
    msg.setSource(26503U);
    msg.setSourceEntity(178U);
    msg.setDestination(53156U);
    msg.setDestinationEntity(122U);
    msg.time = 0.555543177049731;
    msg.x = 0.5055487546767942;
    msg.y = 0.20492104130075728;
    msg.z = 0.008367364983145609;
    msg.timestep = 0.770411876283404;

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
    msg.setTimeStamp(0.36592977377653213);
    msg.setSource(20496U);
    msg.setSourceEntity(216U);
    msg.setDestination(25370U);
    msg.setDestinationEntity(19U);
    msg.time = 0.09492657542049787;
    msg.x = 0.07617157991661938;
    msg.y = 0.5194089619786212;
    msg.z = 0.27699694381639894;

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
    msg.setTimeStamp(0.6707652937669799);
    msg.setSource(63784U);
    msg.setSourceEntity(125U);
    msg.setDestination(58220U);
    msg.setDestinationEntity(5U);
    msg.time = 0.36120157982171397;
    msg.x = 0.649229138023858;
    msg.y = 0.26003427676512725;
    msg.z = 0.7577782441171512;

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
    msg.setTimeStamp(0.7996467527808749);
    msg.setSource(33360U);
    msg.setSourceEntity(171U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(189U);
    msg.time = 0.07344633943625689;
    msg.x = 0.9899575063097316;
    msg.y = 0.1318826932836613;
    msg.z = 0.7883150553146326;

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
    msg.setTimeStamp(0.8374742262753904);
    msg.setSource(47497U);
    msg.setSourceEntity(164U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(184U);
    msg.time = 0.3962145334918582;
    msg.x = 0.7330634212135804;
    msg.y = 0.10595429940461065;
    msg.z = 0.9525337726258997;

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
    msg.setTimeStamp(0.46676063066555395);
    msg.setSource(25187U);
    msg.setSourceEntity(31U);
    msg.setDestination(53941U);
    msg.setDestinationEntity(108U);
    msg.time = 0.9080394558101821;
    msg.x = 0.48263348305015386;
    msg.y = 0.3155631037900961;
    msg.z = 0.10532259618719175;

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
    msg.setTimeStamp(0.960573312633808);
    msg.setSource(32191U);
    msg.setSourceEntity(32U);
    msg.setDestination(10909U);
    msg.setDestinationEntity(16U);
    msg.time = 0.8398840355350115;
    msg.x = 0.4331996742840215;
    msg.y = 0.26942164484834885;
    msg.z = 0.25834077663927346;

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
    msg.setTimeStamp(0.6426175749004066);
    msg.setSource(32662U);
    msg.setSourceEntity(210U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(249U);
    msg.time = 0.33422014692953517;
    msg.x = 0.6224942320766921;
    msg.y = 0.3057552339586258;
    msg.z = 0.7350218761110665;

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
    msg.setTimeStamp(0.10933209588256354);
    msg.setSource(39494U);
    msg.setSourceEntity(220U);
    msg.setDestination(63384U);
    msg.setDestinationEntity(167U);
    msg.time = 0.19024382427833686;
    msg.x = 0.7919626462936081;
    msg.y = 0.2246453719660889;
    msg.z = 0.09200807913116338;

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
    msg.setTimeStamp(0.9189846005225639);
    msg.setSource(9815U);
    msg.setSourceEntity(152U);
    msg.setDestination(60117U);
    msg.setDestinationEntity(50U);
    msg.time = 0.29008678160883794;
    msg.x = 0.962885123590908;
    msg.y = 0.8297610927338197;
    msg.z = 0.14393943823956268;

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
    msg.setTimeStamp(0.7758091947970103);
    msg.setSource(65173U);
    msg.setSourceEntity(13U);
    msg.setDestination(28208U);
    msg.setDestinationEntity(166U);
    msg.validity = 90U;
    msg.x = 0.3471975122822424;
    msg.y = 0.5558131576788151;
    msg.z = 0.18549957712400145;

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
    msg.setTimeStamp(0.9035959836237223);
    msg.setSource(35880U);
    msg.setSourceEntity(155U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(12U);
    msg.validity = 136U;
    msg.x = 0.5785937536101394;
    msg.y = 0.12364897495210547;
    msg.z = 0.6599919878821423;

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
    msg.setTimeStamp(0.8452555051953214);
    msg.setSource(51615U);
    msg.setSourceEntity(199U);
    msg.setDestination(35963U);
    msg.setDestinationEntity(79U);
    msg.validity = 141U;
    msg.x = 0.49663184256594795;
    msg.y = 0.8518980256013676;
    msg.z = 0.8987734865679698;

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
    msg.setTimeStamp(0.21584516884574256);
    msg.setSource(13785U);
    msg.setSourceEntity(107U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(206U);
    msg.validity = 102U;
    msg.x = 0.5935132251757697;
    msg.y = 0.18238063201522248;
    msg.z = 0.373128131443907;

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
    msg.setTimeStamp(0.27177217194942316);
    msg.setSource(13273U);
    msg.setSourceEntity(41U);
    msg.setDestination(51776U);
    msg.setDestinationEntity(195U);
    msg.validity = 216U;
    msg.x = 0.9781236111996328;
    msg.y = 0.730711071758296;
    msg.z = 0.5318620914430259;

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
    msg.setTimeStamp(0.2471976660193147);
    msg.setSource(3200U);
    msg.setSourceEntity(11U);
    msg.setDestination(41638U);
    msg.setDestinationEntity(57U);
    msg.validity = 36U;
    msg.x = 0.33546632836165335;
    msg.y = 0.20627495993300637;
    msg.z = 0.8204917866042818;

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
    msg.setTimeStamp(0.40764173852414765);
    msg.setSource(1293U);
    msg.setSourceEntity(249U);
    msg.setDestination(41519U);
    msg.setDestinationEntity(62U);
    msg.time = 0.08476043083367557;
    msg.x = 0.0761513785008966;
    msg.y = 0.4229885616831601;
    msg.z = 0.09793968160890265;

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
    msg.setTimeStamp(0.7057333255213614);
    msg.setSource(20464U);
    msg.setSourceEntity(102U);
    msg.setDestination(12926U);
    msg.setDestinationEntity(233U);
    msg.time = 0.44811468517715136;
    msg.x = 0.6995556259404785;
    msg.y = 0.11376564401112299;
    msg.z = 0.6643590138463475;

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
    msg.setTimeStamp(0.5905852567193633);
    msg.setSource(58018U);
    msg.setSourceEntity(47U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(54U);
    msg.time = 0.19875837756726378;
    msg.x = 0.10480787443131778;
    msg.y = 0.4784118888289075;
    msg.z = 0.2292144555603708;

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
    msg.setTimeStamp(0.3310285459429926);
    msg.setSource(56095U);
    msg.setSourceEntity(105U);
    msg.setDestination(27410U);
    msg.setDestinationEntity(51U);
    msg.validity = 191U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8814294791670645;
    tmp_msg_0.y = 0.07932079135086234;
    tmp_msg_0.z = 0.15625138279924722;
    tmp_msg_0.phi = 0.8707385531010974;
    tmp_msg_0.theta = 0.6684501529838817;
    tmp_msg_0.psi = 0.4944756847345577;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.34200000096167016;
    tmp_msg_1.beam_height = 0.1265151119639829;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.09451075441434209;

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
    msg.setTimeStamp(0.11198561997869849);
    msg.setSource(5839U);
    msg.setSourceEntity(139U);
    msg.setDestination(31375U);
    msg.setDestinationEntity(123U);
    msg.validity = 134U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.19662549291162978;
    tmp_msg_0.y = 0.9113395818549869;
    tmp_msg_0.z = 0.8815687715588697;
    tmp_msg_0.phi = 0.6039100692311579;
    tmp_msg_0.theta = 0.04806565336908064;
    tmp_msg_0.psi = 0.647516477073847;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4423234716689679;

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
    msg.setTimeStamp(0.1143925402023247);
    msg.setSource(16822U);
    msg.setSourceEntity(250U);
    msg.setDestination(50349U);
    msg.setDestinationEntity(3U);
    msg.validity = 53U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7622179934413459;
    tmp_msg_0.y = 0.9788139708698849;
    tmp_msg_0.z = 0.44143836441257445;
    tmp_msg_0.phi = 0.9767423270982963;
    tmp_msg_0.theta = 0.22941384512244534;
    tmp_msg_0.psi = 0.26437255479301736;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.07057761768119841;
    tmp_msg_1.beam_height = 0.11199062416698635;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8586972973775794;

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
    msg.setTimeStamp(0.323045390602546);
    msg.setSource(27950U);
    msg.setSourceEntity(41U);
    msg.setDestination(56227U);
    msg.setDestinationEntity(30U);
    msg.value = 0.692450906233725;

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
    msg.setTimeStamp(0.3777354617067622);
    msg.setSource(4123U);
    msg.setSourceEntity(69U);
    msg.setDestination(43118U);
    msg.setDestinationEntity(227U);
    msg.value = 0.9379890832317591;

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
    msg.setTimeStamp(0.4003803014000432);
    msg.setSource(41284U);
    msg.setSourceEntity(85U);
    msg.setDestination(43983U);
    msg.setDestinationEntity(127U);
    msg.value = 0.2873104281424833;

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
    msg.setTimeStamp(0.9215141509861089);
    msg.setSource(15017U);
    msg.setSourceEntity(143U);
    msg.setDestination(60056U);
    msg.setDestinationEntity(75U);
    msg.value = 0.4880731764182282;

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
    msg.setTimeStamp(0.1261400272680756);
    msg.setSource(56306U);
    msg.setSourceEntity(71U);
    msg.setDestination(2617U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9281671100786194;

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
    msg.setTimeStamp(0.5280522061190567);
    msg.setSource(15841U);
    msg.setSourceEntity(150U);
    msg.setDestination(39354U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9327178889835929;

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
    msg.setTimeStamp(0.4697400494879236);
    msg.setSource(41005U);
    msg.setSourceEntity(69U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(70U);
    msg.value = 0.4863481287789827;

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
    msg.setTimeStamp(0.25899634322863063);
    msg.setSource(54373U);
    msg.setSourceEntity(34U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6617331361979759;

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
    msg.setTimeStamp(0.10376918876638763);
    msg.setSource(29421U);
    msg.setSourceEntity(156U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8869663740285265;

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
    msg.setTimeStamp(0.15972126764382555);
    msg.setSource(39558U);
    msg.setSourceEntity(246U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(218U);
    msg.value = 0.007821427779025392;

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
    msg.setTimeStamp(0.1839551695722208);
    msg.setSource(17543U);
    msg.setSourceEntity(197U);
    msg.setDestination(26150U);
    msg.setDestinationEntity(117U);
    msg.value = 0.3065239717646232;

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
    msg.setTimeStamp(0.23782598130793353);
    msg.setSource(47321U);
    msg.setSourceEntity(169U);
    msg.setDestination(51429U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7483393417803075;

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
    msg.setTimeStamp(0.5286159465211697);
    msg.setSource(9779U);
    msg.setSourceEntity(101U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(208U);
    msg.value = 0.13741579310775953;

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
    msg.setTimeStamp(0.7815183243334333);
    msg.setSource(5707U);
    msg.setSourceEntity(173U);
    msg.setDestination(37924U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5734071203224449;

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
    msg.setTimeStamp(0.21636525043415034);
    msg.setSource(43159U);
    msg.setSourceEntity(86U);
    msg.setDestination(51949U);
    msg.setDestinationEntity(29U);
    msg.value = 0.08669952430194161;

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
    msg.setTimeStamp(0.040452783318151275);
    msg.setSource(62257U);
    msg.setSourceEntity(135U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7297811616241093;

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
    msg.setTimeStamp(0.9214246442863626);
    msg.setSource(51052U);
    msg.setSourceEntity(89U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(242U);
    msg.value = 0.4223285798609492;

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
    msg.setTimeStamp(0.938032607911842);
    msg.setSource(19667U);
    msg.setSourceEntity(185U);
    msg.setDestination(26307U);
    msg.setDestinationEntity(25U);
    msg.value = 0.2857040378340785;

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
    msg.setTimeStamp(0.702617759476204);
    msg.setSource(17439U);
    msg.setSourceEntity(11U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5476374483048351;

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
    msg.setTimeStamp(0.4113165282521647);
    msg.setSource(26465U);
    msg.setSourceEntity(200U);
    msg.setDestination(32766U);
    msg.setDestinationEntity(119U);
    msg.value = 0.5792843918263711;

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
    msg.setTimeStamp(0.3556781229287814);
    msg.setSource(50587U);
    msg.setSourceEntity(147U);
    msg.setDestination(30498U);
    msg.setDestinationEntity(53U);
    msg.value = 0.49920308265158275;

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
    msg.setTimeStamp(0.3379990358462769);
    msg.setSource(14977U);
    msg.setSourceEntity(92U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(214U);
    msg.value = 0.21326127878379786;

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
    msg.setTimeStamp(0.855099585857644);
    msg.setSource(1924U);
    msg.setSourceEntity(145U);
    msg.setDestination(20199U);
    msg.setDestinationEntity(52U);
    msg.value = 0.06227088932807889;

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
    msg.setTimeStamp(0.5275990295151786);
    msg.setSource(47519U);
    msg.setSourceEntity(18U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(42U);
    msg.value = 0.235833277033898;

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
    msg.setTimeStamp(0.0003387766073201792);
    msg.setSource(24510U);
    msg.setSourceEntity(6U);
    msg.setDestination(15115U);
    msg.setDestinationEntity(176U);
    msg.direction = 0.8357809516185466;
    msg.speed = 0.9699301727903319;
    msg.turbulence = 0.1749220622115515;

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
    msg.setTimeStamp(0.9432520049785292);
    msg.setSource(35579U);
    msg.setSourceEntity(178U);
    msg.setDestination(32936U);
    msg.setDestinationEntity(149U);
    msg.direction = 0.17557266136736638;
    msg.speed = 0.3394848584185508;
    msg.turbulence = 0.35234796423475023;

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
    msg.setTimeStamp(0.45113232758009125);
    msg.setSource(36313U);
    msg.setSourceEntity(247U);
    msg.setDestination(27748U);
    msg.setDestinationEntity(7U);
    msg.direction = 0.3828940312646133;
    msg.speed = 0.30021628234002573;
    msg.turbulence = 0.0418836107812548;

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
    msg.setTimeStamp(0.1870587354013239);
    msg.setSource(8410U);
    msg.setSourceEntity(225U);
    msg.setDestination(25208U);
    msg.setDestinationEntity(25U);
    msg.value = 0.8791113538903153;

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
    msg.setTimeStamp(0.1526440248094988);
    msg.setSource(12243U);
    msg.setSourceEntity(59U);
    msg.setDestination(46041U);
    msg.setDestinationEntity(93U);
    msg.value = 0.6631323840060629;

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
    msg.setTimeStamp(0.8054776781835179);
    msg.setSource(33344U);
    msg.setSourceEntity(67U);
    msg.setDestination(60017U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3562663207117275;

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
    msg.setTimeStamp(0.0348284560609633);
    msg.setSource(46235U);
    msg.setSourceEntity(250U);
    msg.setDestination(15466U);
    msg.setDestinationEntity(202U);
    msg.value.assign("BOBTURFMBUUKYQNWBYEHDXDNVGOQHQJKTEMGUSRFZPGHFFWEELFPTEXZMCBNSMZRYFGTQXSVKKISWUWGMHZTECYDGIXALCEVNHCUSNCQJAAOXHBIVYAQGHRKICZTGCVWPWHLZDYDJUVOREIOOUGOPLJSKPMNOVUDBMCSPAXILKSJCX");

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
    msg.setTimeStamp(0.6222327319212183);
    msg.setSource(47782U);
    msg.setSourceEntity(38U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(31U);
    msg.value.assign("MYGGCIIASVQLMKPBQJKNRIPEAQVXETHLSWTYKKTIANVXEWJHOBNZMAJJOSQBALTJLZGMIMCCKERWJISXNPLFFNUMOYLVCVSRBPFDGUBYU");

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
    msg.setTimeStamp(0.4139937291247793);
    msg.setSource(55105U);
    msg.setSourceEntity(253U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(91U);
    msg.value.assign("EKRRVMUBEJPQXKNIDJUFCLMSJVCUMNXOLOGPVJCZXCRWPHZWIUBHIEPAVYIOWQDTDVDWNDKRGBFN");

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
    msg.setTimeStamp(0.47862607083535713);
    msg.setSource(28025U);
    msg.setSourceEntity(10U);
    msg.setDestination(10392U);
    msg.setDestinationEntity(22U);
    const char tmp_msg_0[] = {-120, 21, -101, 73, -37, -119, -97, -21, 75, 106, -64, 8, 106, 81, -119, -70, 96, 16, 84, 124, 121, -116, -57, 8, 108, -38, -122, 13, -4, 77, 27, -24, -98, -3};
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
    msg.setTimeStamp(0.5571010272114739);
    msg.setSource(64639U);
    msg.setSourceEntity(9U);
    msg.setDestination(30199U);
    msg.setDestinationEntity(119U);
    const char tmp_msg_0[] = {-23, 0, 79, -116, 90, -91, 122, 98, -70, 113, -92, -80, -32, 2, 110, 101, -116, 40, -122, -99, -75, -24, -99, 74, 116, -85, -91, -6, 65, -11, -121, -17, -57, 121, 126, 43, -68, 98, -17, 123, 84, -59, -50, -106, 58, 16, -96, 72, -58, -5, -51, 51, 92, 71, -58, -29, 53, 25, 112, 49, 17, 55, 108, -3, -73, 81, -42, 16, 125, 1, 61, 108, 95, 104, -87, -77, -91, -56, 27, -55, -53, 71, -40, 11, -110, -55, 23, -49, -82, 65, 31, 65, 89, -48, -6, -97, -98, 68, -19, 48, -97, -128, 122, 96, -7, 74, 73, -87, -81, -36, -11, -6, -70, -99, 71, 22, -120, -21, -20, 117, -72, -10, 111, -116, -17, 5, 68, -61, 100, 24, 13, -104, -22, 49, 63, 35, -111, -19, 24, 39, -40, -75, -66, 62};
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
    msg.setTimeStamp(0.15189133879772);
    msg.setSource(23937U);
    msg.setSourceEntity(22U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {-75, 50, 26, -35, -18, 82, -102, -127, 83, 65, 91, -111, 42, -31, -56, -108, -121, -72, 126, -39};
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
    msg.setTimeStamp(0.115150487714204);
    msg.setSource(17391U);
    msg.setSourceEntity(66U);
    msg.setDestination(49220U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5872787349705304;

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
    msg.setTimeStamp(0.4578806015201705);
    msg.setSource(19958U);
    msg.setSourceEntity(163U);
    msg.setDestination(43744U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7034869857673051;

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
    msg.setTimeStamp(0.3630050043943055);
    msg.setSource(13729U);
    msg.setSourceEntity(202U);
    msg.setDestination(8067U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7062621535503365;

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
    msg.setTimeStamp(0.3844726425895465);
    msg.setSource(45674U);
    msg.setSourceEntity(238U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(26U);
    msg.type = 12U;
    msg.frequency = 557291516U;
    msg.min_range = 37680U;
    msg.max_range = 25339U;
    msg.bits_per_point = 52U;
    msg.scale_factor = 0.7282081343626089;
    const char tmp_msg_0[] = {40, -77, -39, -90, -64, -94, 39, 42, 36, -86, 54, -12, -95, -58, 53, -20, 0, 119, 1, -77, 12, -22, -70, 1, 114, 24, 84, -17, 120, -58, -86, -60, -32, -58, -106, 113, -13, -68, 2, -93, -15, 53, -18, -59, -109, -93, 115, 64, -10, -7, 26, -120, -42, -52, 116, -50, 53, -13, 35, -65, -107, -34, 86, -31, -27, 123, -28, 109, 114, 99, -12, -62, 26, 121, 29};
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
    msg.setTimeStamp(0.45388355128618973);
    msg.setSource(49843U);
    msg.setSourceEntity(68U);
    msg.setDestination(3165U);
    msg.setDestinationEntity(46U);
    msg.type = 34U;
    msg.frequency = 3831613498U;
    msg.min_range = 35196U;
    msg.max_range = 6939U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.50039739471117;
    const char tmp_msg_0[] = {118, 88, 77, 68, -6, 72, 55, -25, -43, 97, 27, 43, -51, -11, -91, -62, 68, -25, 0, 51, -45, -10, 36, 70, -98, -31, -59};
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
    msg.setTimeStamp(0.9727183295659028);
    msg.setSource(35058U);
    msg.setSourceEntity(90U);
    msg.setDestination(21736U);
    msg.setDestinationEntity(114U);
    msg.type = 45U;
    msg.frequency = 37357605U;
    msg.min_range = 13289U;
    msg.max_range = 46502U;
    msg.bits_per_point = 38U;
    msg.scale_factor = 0.8765865025038632;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.29883942326224366;
    tmp_msg_0.beam_height = 0.6773661296943293;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-104, -19, -92, 32, -90, 81, -27, 72, -38, 32, 6, 124, 77, -34, -122, 32, 121, 32, 18, 86, -85, -88, -44, -49, -12, -102, -44, 43, 122, -64, 6, 7, -50, 66, -29, 126, 80, -61, -24, 35, 26, -123, -118, 89, -78, 121, 51, -70, 123, -64, 88, -102, -37, 45, 16, 25, -99, 68, 117, -92, -124, 31, -35, 37, -47, -12, 71, -8, -32, 37, -38, -91, 0, -17, -16, 28, 90, -48, 120, -78, -111, 113, -58, 19, 6, 105, 88, -23, -96, 5, 49, 43, 89, -28, 118, 5, -109, 121, -85, 100, 54, 65, -105, 48, 73, 24, 74, -27, 52, 8, -44, -61, -109, -116, -64, -48, 108, 21, -25, 97, -58, 13, 90, 67, -8, -86, 89, 30, 119, 17, -70, 121, -113, -62, -74, 118, 28, -100, -32, -121, -53, -107, -102, 106, -72, 76, 93, -107, -123, 38, -87, 58, 3, -126, 3, 47, 56, -77, 109, -8, -117, -104, 95, 52, 106, 10, -11, 101, -8, 58, -33, -1, 37, 37, 93, 28, 85, -62, 77, -90, 36, 107, 63, 20, 73, -16, -45, -113, 112, -58, 84, -75, 38, -5, -76, 77, 88, 8, 62, 87, -86, 120, 64, -44, -85, 124, -71, -47, -37, -61, -64, -108, -81, 26, 40, 92, -116, 103, 20};
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
    msg.setTimeStamp(0.19584371487096586);
    msg.setSource(46383U);
    msg.setSourceEntity(207U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.5577974773458394);
    msg.setSource(7195U);
    msg.setSourceEntity(233U);
    msg.setDestination(26249U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.6240475957424394);
    msg.setSource(65496U);
    msg.setSourceEntity(183U);
    msg.setDestination(7273U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.28846663035793063);
    msg.setSource(46929U);
    msg.setSourceEntity(70U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(202U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.5024703585397096);
    msg.setSource(45888U);
    msg.setSourceEntity(139U);
    msg.setDestination(55275U);
    msg.setDestinationEntity(122U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.2955838200667834);
    msg.setSource(60403U);
    msg.setSourceEntity(243U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(224U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.4600057954075901);
    msg.setSource(60575U);
    msg.setSourceEntity(248U);
    msg.setDestination(39172U);
    msg.setDestinationEntity(199U);
    msg.value = 0.2011954340621298;
    msg.confidence = 0.017625416467108246;
    msg.opmodes.assign("NPCXONHCPMXDHBSLWTOMKVKIISULROAAZDGSDQZNMQJNDKAHTCTFDQXFOLVXVZBLFEFMQPZSNGTZKVJUPIWVIMBEMPRQHARVMQRJTLCDZHSZNBGBHISNEUBYHWGWBKUCJRYJTTXSO");

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
    msg.setTimeStamp(0.059650099679598);
    msg.setSource(51101U);
    msg.setSourceEntity(33U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8729497661382771;
    msg.confidence = 0.4819113606738459;
    msg.opmodes.assign("HZVOYJJHTNKVJYNDTMIDDCBRKKEGLIMFPLZGPRSIWNQIUTXRRPMXLEHVLLSVKPJXSRHBWBHGVNFMBNGRPBTNTTAYPGXKDABFYCD");

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
    msg.setTimeStamp(0.07688903700143102);
    msg.setSource(61912U);
    msg.setSourceEntity(64U);
    msg.setDestination(58818U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5184859089779861;
    msg.confidence = 0.05305365512796112;
    msg.opmodes.assign("EFYBCRSRTNO");

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
    msg.setTimeStamp(0.07742204175759859);
    msg.setSource(48775U);
    msg.setSourceEntity(150U);
    msg.setDestination(53604U);
    msg.setDestinationEntity(36U);
    msg.itow = 262873829U;
    msg.lat = 0.5937782816058585;
    msg.lon = 0.08798218418138537;
    msg.height_ell = 0.28076850573958967;
    msg.height_sea = 0.02931996711457885;
    msg.hacc = 0.7217715263250173;
    msg.vacc = 0.5052049747724934;
    msg.vel_n = 0.6858925675631755;
    msg.vel_e = 0.2538883415371963;
    msg.vel_d = 0.8719040520084861;
    msg.speed = 0.758014935051766;
    msg.gspeed = 0.3611704663767197;
    msg.heading = 0.3857216341036146;
    msg.sacc = 0.9398434509630865;
    msg.cacc = 0.28377351767588044;

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
    msg.setTimeStamp(0.4681118015007758);
    msg.setSource(25600U);
    msg.setSourceEntity(63U);
    msg.setDestination(52013U);
    msg.setDestinationEntity(81U);
    msg.itow = 4264294765U;
    msg.lat = 0.5749388429074355;
    msg.lon = 0.8047499242596855;
    msg.height_ell = 0.3605396750044638;
    msg.height_sea = 0.3172949021845972;
    msg.hacc = 0.9737654470594802;
    msg.vacc = 0.334563591473547;
    msg.vel_n = 0.701029376199916;
    msg.vel_e = 0.03318205668891727;
    msg.vel_d = 0.4201673108298034;
    msg.speed = 0.6883750549926326;
    msg.gspeed = 0.5568233811606677;
    msg.heading = 0.6922585720241694;
    msg.sacc = 0.8698855216949954;
    msg.cacc = 0.25019978868104753;

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
    msg.setTimeStamp(0.009054405804092003);
    msg.setSource(42085U);
    msg.setSourceEntity(53U);
    msg.setDestination(60902U);
    msg.setDestinationEntity(29U);
    msg.itow = 197585043U;
    msg.lat = 0.7891009714015249;
    msg.lon = 0.8841300444968883;
    msg.height_ell = 0.34015619730200053;
    msg.height_sea = 0.09248308175222064;
    msg.hacc = 0.5995069320539329;
    msg.vacc = 0.08678913103538655;
    msg.vel_n = 0.3981242057104559;
    msg.vel_e = 0.8897225592503393;
    msg.vel_d = 0.977032265661085;
    msg.speed = 0.04622268618797676;
    msg.gspeed = 0.5518727296777814;
    msg.heading = 0.03911240594771448;
    msg.sacc = 0.6462543607720225;
    msg.cacc = 0.38729991107722206;

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
    msg.setTimeStamp(0.543179733376337);
    msg.setSource(2490U);
    msg.setSourceEntity(199U);
    msg.setDestination(48252U);
    msg.setDestinationEntity(66U);
    msg.id = 2U;
    msg.value = 0.07593893939166618;

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
    msg.setTimeStamp(0.6107640383460882);
    msg.setSource(48901U);
    msg.setSourceEntity(240U);
    msg.setDestination(36112U);
    msg.setDestinationEntity(10U);
    msg.id = 169U;
    msg.value = 0.948946009474356;

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
    msg.setTimeStamp(0.043232618539130074);
    msg.setSource(12168U);
    msg.setSourceEntity(136U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(18U);
    msg.id = 81U;
    msg.value = 0.10303891188058067;

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
    msg.setTimeStamp(0.6878764925409271);
    msg.setSource(4931U);
    msg.setSourceEntity(124U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(66U);
    msg.x = 0.890709559492495;
    msg.y = 0.9344788492361604;
    msg.z = 0.5495330838428567;
    msg.phi = 0.3916620954395992;
    msg.theta = 0.3659671000243203;
    msg.psi = 0.014007810885272032;

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
    msg.setTimeStamp(0.28024938742290517);
    msg.setSource(42110U);
    msg.setSourceEntity(134U);
    msg.setDestination(54250U);
    msg.setDestinationEntity(132U);
    msg.x = 0.5656719723038716;
    msg.y = 0.900226254062729;
    msg.z = 0.4585562618847887;
    msg.phi = 0.19403463349653405;
    msg.theta = 0.9652775550699657;
    msg.psi = 0.9733555781591132;

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
    msg.setTimeStamp(0.8216848348886104);
    msg.setSource(35941U);
    msg.setSourceEntity(66U);
    msg.setDestination(15689U);
    msg.setDestinationEntity(176U);
    msg.x = 0.8590316358329505;
    msg.y = 0.4857772780196472;
    msg.z = 0.7492901911190001;
    msg.phi = 0.6898678653083146;
    msg.theta = 0.4839768421034918;
    msg.psi = 0.320606829116442;

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
    msg.setTimeStamp(0.35200693026972496);
    msg.setSource(12756U);
    msg.setSourceEntity(89U);
    msg.setDestination(51586U);
    msg.setDestinationEntity(26U);
    msg.beam_width = 0.4792294382547132;
    msg.beam_height = 0.6046841942312239;

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
    msg.setTimeStamp(0.41113972219056627);
    msg.setSource(20310U);
    msg.setSourceEntity(43U);
    msg.setDestination(44594U);
    msg.setDestinationEntity(101U);
    msg.beam_width = 0.422501504590411;
    msg.beam_height = 0.20288731701164076;

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
    msg.setTimeStamp(0.3032239345499944);
    msg.setSource(105U);
    msg.setSourceEntity(144U);
    msg.setDestination(30959U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.42658661831092515;
    msg.beam_height = 0.15297227305139838;

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
    msg.setTimeStamp(0.42959951430640086);
    msg.setSource(5864U);
    msg.setSourceEntity(214U);
    msg.setDestination(40410U);
    msg.setDestinationEntity(88U);
    msg.sane = 72U;

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
    msg.setTimeStamp(0.4634594191020893);
    msg.setSource(33755U);
    msg.setSourceEntity(63U);
    msg.setDestination(45311U);
    msg.setDestinationEntity(20U);
    msg.sane = 15U;

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
    msg.setTimeStamp(0.9695364270642775);
    msg.setSource(61579U);
    msg.setSourceEntity(231U);
    msg.setDestination(11561U);
    msg.setDestinationEntity(21U);
    msg.sane = 193U;

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
    msg.setTimeStamp(0.8125501540749429);
    msg.setSource(21784U);
    msg.setSourceEntity(175U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7244625154613699;

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
    msg.setTimeStamp(0.8187379313806005);
    msg.setSource(28141U);
    msg.setSourceEntity(41U);
    msg.setDestination(54660U);
    msg.setDestinationEntity(60U);
    msg.value = 0.44546353841263164;

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
    msg.setTimeStamp(0.3310080521930546);
    msg.setSource(60832U);
    msg.setSourceEntity(125U);
    msg.setDestination(20703U);
    msg.setDestinationEntity(137U);
    msg.value = 0.006699849568704841;

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
    msg.setTimeStamp(0.1963429811704065);
    msg.setSource(62508U);
    msg.setSourceEntity(190U);
    msg.setDestination(6504U);
    msg.setDestinationEntity(192U);
    msg.value = 0.4814268729295287;

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
    msg.setTimeStamp(0.8568829772608044);
    msg.setSource(6247U);
    msg.setSourceEntity(239U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(91U);
    msg.value = 0.6001919113336424;

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
    msg.setTimeStamp(0.09808364322274599);
    msg.setSource(13302U);
    msg.setSourceEntity(34U);
    msg.setDestination(55648U);
    msg.setDestinationEntity(11U);
    msg.value = 0.27958601300733543;

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
    msg.setTimeStamp(0.9940684452149572);
    msg.setSource(5983U);
    msg.setSourceEntity(196U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6988477751824518;

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
    msg.setTimeStamp(0.9438611465117183);
    msg.setSource(9424U);
    msg.setSourceEntity(10U);
    msg.setDestination(14901U);
    msg.setDestinationEntity(83U);
    msg.value = 0.5229925295407114;

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
    msg.setTimeStamp(0.12704442071900146);
    msg.setSource(13647U);
    msg.setSourceEntity(135U);
    msg.setDestination(5210U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6176248286045855;

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
    msg.setTimeStamp(0.15490664622883676);
    msg.setSource(47857U);
    msg.setSourceEntity(241U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(147U);
    msg.value = 0.030204938317833552;

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
    msg.setTimeStamp(0.9662128246267735);
    msg.setSource(24485U);
    msg.setSourceEntity(223U);
    msg.setDestination(56852U);
    msg.setDestinationEntity(82U);
    msg.value = 0.2723210713042443;

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
    msg.setTimeStamp(0.4546981336164714);
    msg.setSource(19454U);
    msg.setSourceEntity(121U);
    msg.setDestination(45915U);
    msg.setDestinationEntity(179U);
    msg.value = 0.2806632712638527;

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
    msg.setTimeStamp(0.5014030886880319);
    msg.setSource(21941U);
    msg.setSourceEntity(202U);
    msg.setDestination(24770U);
    msg.setDestinationEntity(56U);
    msg.value = 0.6930725670689443;

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
    msg.setTimeStamp(0.7874951646035269);
    msg.setSource(39808U);
    msg.setSourceEntity(128U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(243U);
    msg.value = 0.18410046753069664;

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
    msg.setTimeStamp(0.9212910340457787);
    msg.setSource(54647U);
    msg.setSourceEntity(4U);
    msg.setDestination(61912U);
    msg.setDestinationEntity(64U);
    msg.value = 0.3695522892373989;

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
    msg.setTimeStamp(0.9848505903826701);
    msg.setSource(36647U);
    msg.setSourceEntity(117U);
    msg.setDestination(27778U);
    msg.setDestinationEntity(14U);
    msg.value = 0.7645533650980889;

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
    msg.setTimeStamp(0.3483942774183594);
    msg.setSource(16298U);
    msg.setSourceEntity(37U);
    msg.setDestination(18391U);
    msg.setDestinationEntity(191U);
    msg.value = 0.7550927762143125;

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
    msg.setTimeStamp(0.6039940512285288);
    msg.setSource(62059U);
    msg.setSourceEntity(161U);
    msg.setDestination(53036U);
    msg.setDestinationEntity(246U);
    msg.value = 0.09491703420705933;

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
    msg.setTimeStamp(0.4800581341857577);
    msg.setSource(36854U);
    msg.setSourceEntity(34U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(29U);
    msg.value = 0.20788834097341669;

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
    msg.setTimeStamp(0.3725718145086667);
    msg.setSource(24916U);
    msg.setSourceEntity(124U);
    msg.setDestination(18408U);
    msg.setDestinationEntity(126U);
    msg.value = 0.46913099444303685;

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
    msg.setTimeStamp(0.4628836254286929);
    msg.setSource(5452U);
    msg.setSourceEntity(148U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(204U);
    msg.value = 0.37898076644440215;

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
    msg.setTimeStamp(0.9029657396242592);
    msg.setSource(64825U);
    msg.setSourceEntity(48U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8975766686139494;

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
    msg.setTimeStamp(0.6202402192876125);
    msg.setSource(45654U);
    msg.setSourceEntity(98U);
    msg.setDestination(61175U);
    msg.setDestinationEntity(180U);
    msg.value = 0.9197548112897936;

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
    msg.setTimeStamp(0.34948924252882896);
    msg.setSource(34701U);
    msg.setSourceEntity(121U);
    msg.setDestination(65461U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5053818966310247;

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
    msg.setTimeStamp(0.11582974777010746);
    msg.setSource(29163U);
    msg.setSourceEntity(39U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(109U);
    msg.validity = 11925U;
    msg.type = 50U;
    msg.tow = 2214237477U;
    msg.base_lat = 0.4029361807880163;
    msg.base_lon = 0.48580980078221137;
    msg.base_height = 0.04034492486000163;
    msg.n = 0.14764959661661226;
    msg.e = 0.5614263740714309;
    msg.d = 0.7993221376679946;
    msg.v_n = 0.029592927879703912;
    msg.v_e = 0.7169140521618984;
    msg.v_d = 0.7310099375698386;
    msg.satellites = 182U;
    msg.iar_hyp = 46225U;
    msg.iar_ratio = 0.974959422565022;

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
    msg.setTimeStamp(0.7667346769861808);
    msg.setSource(25586U);
    msg.setSourceEntity(67U);
    msg.setDestination(64491U);
    msg.setDestinationEntity(185U);
    msg.validity = 35892U;
    msg.type = 65U;
    msg.tow = 2407256455U;
    msg.base_lat = 0.7461166774887629;
    msg.base_lon = 0.23625110597662713;
    msg.base_height = 0.51685177378387;
    msg.n = 0.5451987480956834;
    msg.e = 0.3811056443664721;
    msg.d = 0.3767857793203776;
    msg.v_n = 0.38105940957410833;
    msg.v_e = 0.41167946442558334;
    msg.v_d = 0.09029488239165129;
    msg.satellites = 200U;
    msg.iar_hyp = 6270U;
    msg.iar_ratio = 0.07689829775605539;

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
    msg.setTimeStamp(0.4862606376998512);
    msg.setSource(48597U);
    msg.setSourceEntity(239U);
    msg.setDestination(27731U);
    msg.setDestinationEntity(104U);
    msg.validity = 48561U;
    msg.type = 158U;
    msg.tow = 833979015U;
    msg.base_lat = 0.83164325819184;
    msg.base_lon = 0.43055657707531814;
    msg.base_height = 0.8926246995914225;
    msg.n = 0.19919115511535324;
    msg.e = 0.8688436341877761;
    msg.d = 0.3939597058539902;
    msg.v_n = 0.8999383811063844;
    msg.v_e = 0.7006965232662986;
    msg.v_d = 0.2561314649746862;
    msg.satellites = 179U;
    msg.iar_hyp = 32974U;
    msg.iar_ratio = 0.3060645314559428;

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
    msg.setTimeStamp(0.2946348374454253);
    msg.setSource(62596U);
    msg.setSourceEntity(55U);
    msg.setDestination(26435U);
    msg.setDestinationEntity(45U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.995028119962791;
    tmp_msg_0.lon = 0.0024926202353875437;
    tmp_msg_0.height = 0.016764218364687666;
    tmp_msg_0.x = 0.5951303275224833;
    tmp_msg_0.y = 0.5346017520862922;
    tmp_msg_0.z = 0.8353254356047964;
    tmp_msg_0.phi = 0.8306663240627851;
    tmp_msg_0.theta = 0.9662030120861251;
    tmp_msg_0.psi = 0.3143129485277353;
    tmp_msg_0.u = 0.14126174339713138;
    tmp_msg_0.v = 0.23006653591360704;
    tmp_msg_0.w = 0.392064784633119;
    tmp_msg_0.vx = 0.03468147687354073;
    tmp_msg_0.vy = 0.5995116660571385;
    tmp_msg_0.vz = 0.08237054627033025;
    tmp_msg_0.p = 0.07932049722556411;
    tmp_msg_0.q = 0.8951878638343689;
    tmp_msg_0.r = 0.8590566180143328;
    tmp_msg_0.depth = 0.8964561150440525;
    tmp_msg_0.alt = 0.024893992135654908;
    msg.state.set(tmp_msg_0);
    msg.type = 242U;

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
    msg.setTimeStamp(0.30093326946769916);
    msg.setSource(59066U);
    msg.setSourceEntity(184U);
    msg.setDestination(21487U);
    msg.setDestinationEntity(212U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.47310615396124056;
    tmp_msg_0.lon = 0.4556047051796127;
    tmp_msg_0.height = 0.08804960419594421;
    tmp_msg_0.x = 0.029794029807666877;
    tmp_msg_0.y = 0.08208230883059575;
    tmp_msg_0.z = 0.17089616854891387;
    tmp_msg_0.phi = 0.7674722154967505;
    tmp_msg_0.theta = 0.34270451475228303;
    tmp_msg_0.psi = 0.4609200458977999;
    tmp_msg_0.u = 0.5667075240310533;
    tmp_msg_0.v = 0.5066502740245103;
    tmp_msg_0.w = 0.9799651604054925;
    tmp_msg_0.vx = 0.5921406326169476;
    tmp_msg_0.vy = 0.8370075423124717;
    tmp_msg_0.vz = 0.3867659358057257;
    tmp_msg_0.p = 0.4957827805225816;
    tmp_msg_0.q = 0.427281877879495;
    tmp_msg_0.r = 0.9421270184966272;
    tmp_msg_0.depth = 0.07539318929415773;
    tmp_msg_0.alt = 0.744738803110482;
    msg.state.set(tmp_msg_0);
    msg.type = 165U;

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
    msg.setTimeStamp(0.5527211420979579);
    msg.setSource(12796U);
    msg.setSourceEntity(158U);
    msg.setDestination(11287U);
    msg.setDestinationEntity(239U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5615787428016582;
    tmp_msg_0.lon = 0.8672691154682994;
    tmp_msg_0.height = 0.8054087321812976;
    tmp_msg_0.x = 0.5947862932888125;
    tmp_msg_0.y = 0.4318278269134399;
    tmp_msg_0.z = 0.645076062305035;
    tmp_msg_0.phi = 0.6046616031746361;
    tmp_msg_0.theta = 0.36626352642373905;
    tmp_msg_0.psi = 0.28229188568494445;
    tmp_msg_0.u = 0.3679875107698052;
    tmp_msg_0.v = 0.031781513354108615;
    tmp_msg_0.w = 0.4930423662075589;
    tmp_msg_0.vx = 0.331648432147016;
    tmp_msg_0.vy = 0.5900358660218714;
    tmp_msg_0.vz = 0.7597128158524749;
    tmp_msg_0.p = 0.3239469581055481;
    tmp_msg_0.q = 0.3520061447433669;
    tmp_msg_0.r = 0.09194409792858671;
    tmp_msg_0.depth = 0.5517348569181247;
    tmp_msg_0.alt = 0.6790125270560129;
    msg.state.set(tmp_msg_0);
    msg.type = 143U;

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
    msg.setTimeStamp(0.43414850524249127);
    msg.setSource(39440U);
    msg.setSourceEntity(234U);
    msg.setDestination(31907U);
    msg.setDestinationEntity(245U);
    msg.value = 0.25956083928482965;

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
    msg.setTimeStamp(0.4227157142157131);
    msg.setSource(64514U);
    msg.setSourceEntity(181U);
    msg.setDestination(10380U);
    msg.setDestinationEntity(165U);
    msg.value = 0.048432829501176444;

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
    msg.setTimeStamp(0.05315632635305667);
    msg.setSource(45774U);
    msg.setSourceEntity(60U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(73U);
    msg.value = 0.3528430473176505;

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
    msg.setTimeStamp(0.03354457487343532);
    msg.setSource(671U);
    msg.setSourceEntity(142U);
    msg.setDestination(55858U);
    msg.setDestinationEntity(76U);
    msg.value = 0.14971083151073228;

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
    msg.setTimeStamp(0.8274606817794452);
    msg.setSource(19190U);
    msg.setSourceEntity(32U);
    msg.setDestination(36889U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6191439758000667;

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
    msg.setTimeStamp(0.2495125288935146);
    msg.setSource(32734U);
    msg.setSourceEntity(35U);
    msg.setDestination(668U);
    msg.setDestinationEntity(92U);
    msg.value = 0.5947133622780634;

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
    msg.setTimeStamp(0.7175661296465896);
    msg.setSource(30997U);
    msg.setSourceEntity(79U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(56U);
    msg.value = 0.003474682918024108;

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
    msg.setTimeStamp(0.3619281356967792);
    msg.setSource(38808U);
    msg.setSourceEntity(100U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(197U);
    msg.value = 0.20655259735679365;

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
    msg.setTimeStamp(0.33604605042028246);
    msg.setSource(37962U);
    msg.setSourceEntity(20U);
    msg.setDestination(30775U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5835237746022727;

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
    msg.setTimeStamp(0.07233943868105719);
    msg.setSource(50032U);
    msg.setSourceEntity(68U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0831440009831581;

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
    msg.setTimeStamp(0.8212429194798414);
    msg.setSource(61728U);
    msg.setSourceEntity(98U);
    msg.setDestination(57485U);
    msg.setDestinationEntity(133U);
    msg.value = 0.457649044105398;

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
    msg.setTimeStamp(0.19002475797421903);
    msg.setSource(42482U);
    msg.setSourceEntity(11U);
    msg.setDestination(57198U);
    msg.setDestinationEntity(226U);
    msg.value = 0.697996260778578;

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
    msg.setTimeStamp(0.8520856225095566);
    msg.setSource(19511U);
    msg.setSourceEntity(154U);
    msg.setDestination(4515U);
    msg.setDestinationEntity(189U);
    msg.value = 0.10299443899602945;

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
    msg.setTimeStamp(0.9831394124336894);
    msg.setSource(38776U);
    msg.setSourceEntity(244U);
    msg.setDestination(2485U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8393307222682005;

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
    msg.setTimeStamp(0.2944209687058085);
    msg.setSource(53014U);
    msg.setSourceEntity(139U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(96U);
    msg.value = 0.5385878421124485;

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
    msg.setTimeStamp(0.06387760199857806);
    msg.setSource(8846U);
    msg.setSourceEntity(52U);
    msg.setDestination(61339U);
    msg.setDestinationEntity(230U);
    msg.id = 81U;
    msg.zoom = 223U;
    msg.action = 160U;

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
    msg.setTimeStamp(0.9521401631682049);
    msg.setSource(5523U);
    msg.setSourceEntity(173U);
    msg.setDestination(44158U);
    msg.setDestinationEntity(137U);
    msg.id = 74U;
    msg.zoom = 71U;
    msg.action = 134U;

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
    msg.setTimeStamp(0.5844724046115336);
    msg.setSource(59447U);
    msg.setSourceEntity(156U);
    msg.setDestination(59568U);
    msg.setDestinationEntity(0U);
    msg.id = 62U;
    msg.zoom = 59U;
    msg.action = 90U;

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
    msg.setTimeStamp(0.49304946921059745);
    msg.setSource(26590U);
    msg.setSourceEntity(129U);
    msg.setDestination(57278U);
    msg.setDestinationEntity(134U);
    msg.id = 21U;
    msg.value = 0.4751958285362855;

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
    msg.setTimeStamp(0.28627150967032633);
    msg.setSource(21686U);
    msg.setSourceEntity(144U);
    msg.setDestination(44512U);
    msg.setDestinationEntity(135U);
    msg.id = 220U;
    msg.value = 0.011807044786815157;

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
    msg.setTimeStamp(0.05456871722155521);
    msg.setSource(7977U);
    msg.setSourceEntity(118U);
    msg.setDestination(39059U);
    msg.setDestinationEntity(36U);
    msg.id = 154U;
    msg.value = 0.2681137237121495;

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
    msg.setTimeStamp(0.8964131039270017);
    msg.setSource(20753U);
    msg.setSourceEntity(137U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(51U);
    msg.id = 32U;
    msg.value = 0.4804734958415132;

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
    msg.setTimeStamp(0.021589411567929706);
    msg.setSource(28737U);
    msg.setSourceEntity(72U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(225U);
    msg.id = 84U;
    msg.value = 0.5258269844392703;

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
    msg.setTimeStamp(0.7277651126870294);
    msg.setSource(27777U);
    msg.setSourceEntity(123U);
    msg.setDestination(56952U);
    msg.setDestinationEntity(101U);
    msg.id = 178U;
    msg.value = 0.16581992258323452;

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
    msg.setTimeStamp(0.3349840949537408);
    msg.setSource(27875U);
    msg.setSourceEntity(72U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(188U);
    msg.id = 29U;
    msg.angle = 0.15517614083798514;

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
    msg.setTimeStamp(0.9642513964053119);
    msg.setSource(14590U);
    msg.setSourceEntity(169U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(218U);
    msg.id = 152U;
    msg.angle = 0.9437595175516057;

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
    msg.setTimeStamp(0.953335791181668);
    msg.setSource(46451U);
    msg.setSourceEntity(105U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(236U);
    msg.id = 204U;
    msg.angle = 0.9101575793050042;

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
    msg.setTimeStamp(0.6518839902686198);
    msg.setSource(16514U);
    msg.setSourceEntity(106U);
    msg.setDestination(952U);
    msg.setDestinationEntity(44U);
    msg.op = 101U;
    msg.actions.assign("JGNOKAXNAZZBEREHTTMYBLONYXDMPCDIZORPDQTSXSCJJL");

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
    msg.setTimeStamp(0.25707070335387006);
    msg.setSource(11453U);
    msg.setSourceEntity(133U);
    msg.setDestination(13256U);
    msg.setDestinationEntity(68U);
    msg.op = 22U;
    msg.actions.assign("ESLOYELOAXQZGFKHZORSPFDDRJEVDPHBFIYPPVOXXKGBRARIHTPQWUSHZAWUFCQWPGUBEBJTLSCZSLYKLXOMWDDQTNQZKHVBDTZFLNLDDOWNTJRWNFUM");

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
    msg.setTimeStamp(0.8869754219516212);
    msg.setSource(7373U);
    msg.setSourceEntity(52U);
    msg.setDestination(45887U);
    msg.setDestinationEntity(248U);
    msg.op = 240U;
    msg.actions.assign("HVWMYGFUEOXSKFOTEARWUGZIVYNDSEIHGFIVOSLMHPZTBMWUHZBCHZJCNPQQKGEXALHZKHCOYSOMVNPPZVXXGQDGRHMVOVNCPNKOWQNSUBXRPWLDSHBMFXIXCYKSCQUDMHGLTZGVZAWWR");

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
    msg.setTimeStamp(0.3143356296640597);
    msg.setSource(2519U);
    msg.setSourceEntity(50U);
    msg.setDestination(58515U);
    msg.setDestinationEntity(82U);
    msg.actions.assign("NYZAGHVRTFFYBOJRGKYQVMSLNPCXKBWSVFUHRGDHYWHL");

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
    msg.setTimeStamp(0.6858922183962294);
    msg.setSource(45922U);
    msg.setSourceEntity(9U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(156U);
    msg.actions.assign("AURAJPSETKOFHUAVSBZHUNGBQPAPEPIZIWMFFCFIEWHYBMLXLYQFPSRKLBRERINHRBVUGBSKVQIYCTOYRSMQUMCKQTXXQVCABMKTYUMCKXNJKVFGWGNOLIODKJXCPBFGITXVWUPQWYQYANCDLOWHANDZQFEUDYNJPTYPTVHTZMCNCHFB");

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
    msg.setTimeStamp(0.5874108299575652);
    msg.setSource(55142U);
    msg.setSourceEntity(108U);
    msg.setDestination(1508U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("PVLAHHZERPEROSBODEKNHHGBFQDMKCWYBKZQODNRKXZLOVMIRYUUSMIRMJTBJOYFJZTJJAAQKFHFGQNVYRPPLSXHLKJEUIVQYGPZEFLISJDWOALMIFFXRQIUOXZOGTGUVCZGMYDJTA");

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
    msg.setTimeStamp(0.27838257707416647);
    msg.setSource(16293U);
    msg.setSourceEntity(124U);
    msg.setDestination(42287U);
    msg.setDestinationEntity(148U);
    msg.button = 153U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.5401649489773785);
    msg.setSource(13529U);
    msg.setSourceEntity(176U);
    msg.setDestination(22951U);
    msg.setDestinationEntity(79U);
    msg.button = 127U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.569551762949524);
    msg.setSource(37736U);
    msg.setSourceEntity(188U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(204U);
    msg.button = 73U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.8357694178368176);
    msg.setSource(17149U);
    msg.setSourceEntity(208U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(200U);
    msg.op = 133U;
    msg.text.assign("UESUYETISHHBUHUOVGNMLCWHAOKJFWPNVTTRHZG");

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
    msg.setTimeStamp(0.09341236234409855);
    msg.setSource(103U);
    msg.setSourceEntity(127U);
    msg.setDestination(47864U);
    msg.setDestinationEntity(233U);
    msg.op = 110U;
    msg.text.assign("SVUIANTWDRVNWVKWALCRNIPJSQEFTLREEUZFGTGXIOJOLRNDPIDGZSIPDVKBCPWHQCQYUXLRTUYBROKDTTQTRCJ");

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
    msg.setTimeStamp(0.9171485661871692);
    msg.setSource(60288U);
    msg.setSourceEntity(223U);
    msg.setDestination(55057U);
    msg.setDestinationEntity(149U);
    msg.op = 223U;
    msg.text.assign("QXKEKVTRZZZBYCSXAGYFFFNVVIOOZNHCHZAHXHERKDBASHVZPLGNTCCCAXHEIBQKGTFTHRYOSVMYQJNDNXIEWDXGP");

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
    msg.setTimeStamp(0.17973820041138433);
    msg.setSource(12706U);
    msg.setSourceEntity(43U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(86U);
    msg.op = 113U;
    msg.time_remain = 0.32436235471495545;
    msg.sched_time = 0.686282924124292;

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
    msg.setTimeStamp(0.713139162590771);
    msg.setSource(43784U);
    msg.setSourceEntity(149U);
    msg.setDestination(26657U);
    msg.setDestinationEntity(132U);
    msg.op = 240U;
    msg.time_remain = 0.7321400319301855;
    msg.sched_time = 0.9339682679979786;

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
    msg.setTimeStamp(0.25376821465822297);
    msg.setSource(26886U);
    msg.setSourceEntity(207U);
    msg.setDestination(29392U);
    msg.setDestinationEntity(133U);
    msg.op = 180U;
    msg.time_remain = 0.16190362641776268;
    msg.sched_time = 0.7311797354488581;

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
    msg.setTimeStamp(0.9995813179354249);
    msg.setSource(17421U);
    msg.setSourceEntity(129U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(154U);
    msg.name.assign("VGMZSBQGEVNDWXXHJUIDAWQRKAKNTONFJCSILYUWPZRBQVDDKIPKZMFFYIXBQHFLOSEXIGYFHPPFZXAEUDYQBLQAUJPOVMCERONRFNROJETVPGSKJACHYQCTBHLMKDIKLKTIQUJDDIHNUUQGJOSMWITBVXVZZGGMZVUKYEXLW");
    msg.op = 46U;
    msg.sched_time = 0.6620830437437777;

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
    msg.setTimeStamp(0.8226879460195441);
    msg.setSource(55180U);
    msg.setSourceEntity(103U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(127U);
    msg.name.assign("SBQRLQNJGNQFAZRUOWCDHSDZRMAUZGAUVWYVDRNKWXMPCOPEKYYUGOYPDEJ");
    msg.op = 164U;
    msg.sched_time = 0.5365636735358857;

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
    msg.setTimeStamp(0.692206784283703);
    msg.setSource(32712U);
    msg.setSourceEntity(124U);
    msg.setDestination(2848U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JNBSRSEWFOPTZXDFJUVVKTYQMHLMTISZBPOAHDRDWBHLUJSAJIAUZJMXZZALWPINYJBYOZANZWIXYIJRPGVDRMUHJNHOYULKMUMSKEQVWXGMWICNKXVNGDYDEDSLQVVYLLRXTFCREKJDKSIUZCBATEVHFKYCBDOGBTUWPSCEQCXLXQMGZNQBWQPJKKQEAOPQRRYAIFGTXNGMZXGTOMSPFLHPWOCWL");
    msg.op = 141U;
    msg.sched_time = 0.011468718505022957;

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
    msg.setTimeStamp(0.04995071579521382);
    msg.setSource(2646U);
    msg.setSourceEntity(143U);
    msg.setDestination(22923U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.24661554643411265);
    msg.setSource(544U);
    msg.setSourceEntity(64U);
    msg.setDestination(4533U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.9312674813659878);
    msg.setSource(53524U);
    msg.setSourceEntity(244U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.750027309026244);
    msg.setSource(21957U);
    msg.setSourceEntity(235U);
    msg.setDestination(21863U);
    msg.setDestinationEntity(138U);
    msg.name.assign("WTJOPFZLGHXVGAAOAZOCJMMDQTJKVBHXHIULSOMOWBSVMUGCPFYEELHAQGXPYLCOJAKTBNFRZMJMGYYKKYQYVFINWSVSGPGIXISFWBLFFHQEARHAEOPHHRUWCUVQKOIZNCEWJFJJBNHNNINPKCRDKLRPAXVUDVSICVDEIDWCRMQBTOMRFZRXCAQEWIG");
    msg.state = 56U;

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
    msg.setTimeStamp(0.6159634247944127);
    msg.setSource(58294U);
    msg.setSourceEntity(159U);
    msg.setDestination(20446U);
    msg.setDestinationEntity(158U);
    msg.name.assign("ZOGXEHKCHQACARDVYFXGFVVUPIDFTWBRQWOLRPMUAKJYHNPSIVABQYCHZNZBZSVPJEHLLCZTJZXKNHYRSWUWBR");
    msg.state = 5U;

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
    msg.setTimeStamp(0.6113759585979531);
    msg.setSource(64356U);
    msg.setSourceEntity(156U);
    msg.setDestination(13304U);
    msg.setDestinationEntity(241U);
    msg.name.assign("MPKFFKJMDIBLGYNEOKXQCDGQYIQOJKPQWKATFRKMVDFCLGFERTGTDHTDWQCJEVLDADNUFVXWRWTFCMAHIWYBHZZWCLWKOGVNZOHPNYCHNXHFPRQLQBJICSUAFMJYTLBPVSANIWCXMEPJZUABXARBEIFNQLMXVLOJXOTSSKQBIZPDAOZYSEIGXWQVYOHVOUUWBTBPT");
    msg.state = 4U;

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
    msg.setTimeStamp(0.3139162864245255);
    msg.setSource(3336U);
    msg.setSourceEntity(54U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(172U);
    msg.name.assign("DNDXLREYMIOEOMAVDRNIJSHLIZEPVPFFTRKOGNAPKYHBZMEFFDWDSXCYMLINZPFZGTRIVKCCPGVKZSUWINYMRJVNHGWPBVDVBVCEOFFMSLUDOZGUWVXRKABCSXGTTBFEPARAJPHQTOXHCWUUJIXYCWMHOKBYEKMQLFLQJQENACZBLSAYLTQ");
    msg.value = 129U;

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
    msg.setTimeStamp(0.9985258302204928);
    msg.setSource(50858U);
    msg.setSourceEntity(52U);
    msg.setDestination(27021U);
    msg.setDestinationEntity(251U);
    msg.name.assign("WKMHPRKLQYHESMWXCVQSRJLJYITIUWBMZPPFTYTZMTRLCXWBCMBOEZSRLFPFVXFNRWYUJUHASFSZIMWCCENBALUUBOMKYUDWFOZQGSJVZHTLBZJQKNPQKGINPLUCOEVBVPUOVJZZSAI");
    msg.value = 166U;

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
    msg.setTimeStamp(0.9541770722477042);
    msg.setSource(28291U);
    msg.setSourceEntity(124U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(148U);
    msg.name.assign("PHEYHEAZGJSUXSIUMOBJQCPBTBQSJLKYNGHPZIWLLVJFKHEBSGACVREPTZRIXLUIEMNSFEEVXCAATLXWCUPQFSBSBRYMZKSQJBISVOWXQWIURDBDEVGENTDCCXNWUJGJQAHURQZLMVYPKFKAWWNURKHLZGOGYNZFLOLKAFWPCXODWTPWXJTYOAVNJMROFSNELDCCFPRCJADXGMBIUTTKYDOKMTHZODGFDQX");
    msg.value = 164U;

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
    msg.setTimeStamp(0.7646536009799278);
    msg.setSource(24708U);
    msg.setSourceEntity(25U);
    msg.setDestination(32713U);
    msg.setDestinationEntity(136U);
    msg.name.assign("WTJPCHRQFLWWPVQLZBUJPXQKZYRUTKCUMNODWGFTGGNFQVEIUZVHUWTNWMCUZRESJWBKLBLFOKVGXZVAUOQFIHFHGUCQTFXQVHRPAPNTSIBWEBHQKDLNMTIPNHVJEYMPZILOSJAYTCTANXYSJEFF");

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
    msg.setTimeStamp(0.9666070850386977);
    msg.setSource(27048U);
    msg.setSourceEntity(222U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(63U);
    msg.name.assign("FRAEYPEVUCDWQDDJOEPIJBZPEUVEUUXLNMLLRHIILVMJJTCQNRKLAZYIMNXSBFCVDAHGZXBNPRUHEFUYCIYATGSCWLGXMOWKZQTPGFIGNYQVMKJGDOBXOZCAJHTXPJBTDYKHPOAXWIZWUOYLSNROKZIHMLVKSWPWCKMTPOFDQCGQUURLAHLTASAVGVBIRQRMZDFISYYQHXCGVBFQNVBXKNZKUSFROBGRBJYMQSEFCXPF");

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
    msg.setTimeStamp(0.6793606652170862);
    msg.setSource(26725U);
    msg.setSourceEntity(198U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(209U);
    msg.name.assign("PFJJDXHIHVPGMRJBBAIRBPOOJABEOKHTRCRLYAWWXYCSDMVCYAQQSDLWBMKTWHGUAEDZWFZUYEDJYNZSWQOHYPGKJXCUEAMXLVOUUWFWQMNZBEVQOFSLNMNMKVAKRRPTTCNIBEGIQZJLWDFAVNPNJZYFGDSCJMHXXPIHSNRQVKPUIQKDFHCVPTLTWILZKPUUGVRDGOIBHEJOAHYBYLZDOKU");

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
    msg.setTimeStamp(0.04418444016901257);
    msg.setSource(25928U);
    msg.setSourceEntity(95U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(188U);
    msg.name.assign("LOEINCLEBNMAEQYSYJAGHBDLFIWMPKNHPKMHBHHQLRPIYXTPKBEBASFICUAVYZUPFIHMSRYCCRWCWVDTFROGAZUFSVQJTZEDOZYQKNKRQBRIKEDHOTEVOFUVQJNRXOGPZTVLIVWKCXQDGEHGWIBOCDJTNAXOUZDLUNMBIHNDVICZYYMUVQSMYFAGNMHPSEDPXSNWRFKJCXMTSFYAQUTDKLWQSZRA");
    msg.value = 130U;

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
    msg.setTimeStamp(0.5502642180161911);
    msg.setSource(24805U);
    msg.setSourceEntity(237U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(87U);
    msg.name.assign("FQJICGVNMXXPSGEVCBVWNVFVLUFPDLYYWBSOAHMDBLZEUVEZSAASKPMYGHNKRFNPTHRSBJTVFQOVIJYQHYWLYEOUUGZEDLKONKFQQHHXRWUVMMRCARNILJBKHESZITHEZTXGQGLDWBJJKJCUCAADOQJITZTOJCKZGOYAWVRACXBUMMRFDPQMTDEKZ");
    msg.value = 136U;

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
    msg.setTimeStamp(0.38032788372382087);
    msg.setSource(9014U);
    msg.setSourceEntity(57U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(192U);
    msg.name.assign("MORGRQGVLCIMLKMQXHJFRTSAMUWAUULDULWEEYQCBXTYXSKGJWXTTDLHINCIIEDKHDHZAPEGQWQGPFVQDRIOZCIDPGWOYKQMYCNBECSYPMWANLEJBVHPANYDJTGSVWNPBKPZSAOYNJUXGTGRIPOCBVGJPCFSKRUXTJQJAZUSFIHLFSPSCRHBOAVMZRK");
    msg.value = 13U;

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
    msg.setTimeStamp(0.5534180192469088);
    msg.setSource(47264U);
    msg.setSourceEntity(241U);
    msg.setDestination(37769U);
    msg.setDestinationEntity(73U);
    msg.id = 203U;
    msg.period = 3224847294U;
    msg.duty_cycle = 2299995311U;

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
    msg.setTimeStamp(0.7446908679713253);
    msg.setSource(6521U);
    msg.setSourceEntity(213U);
    msg.setDestination(10602U);
    msg.setDestinationEntity(131U);
    msg.id = 49U;
    msg.period = 1897093620U;
    msg.duty_cycle = 1942976495U;

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
    msg.setTimeStamp(0.8533178476646714);
    msg.setSource(56889U);
    msg.setSourceEntity(75U);
    msg.setDestination(46196U);
    msg.setDestinationEntity(186U);
    msg.id = 136U;
    msg.period = 237317542U;
    msg.duty_cycle = 3793957529U;

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
    msg.setTimeStamp(0.5237235860946156);
    msg.setSource(11429U);
    msg.setSourceEntity(203U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(162U);
    msg.id = 250U;
    msg.period = 569397875U;
    msg.duty_cycle = 1156682299U;

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
    msg.setTimeStamp(0.386171925318621);
    msg.setSource(40122U);
    msg.setSourceEntity(189U);
    msg.setDestination(30489U);
    msg.setDestinationEntity(178U);
    msg.id = 237U;
    msg.period = 587653866U;
    msg.duty_cycle = 3923238403U;

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
    msg.setTimeStamp(0.7469711256956997);
    msg.setSource(59330U);
    msg.setSourceEntity(16U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(158U);
    msg.id = 5U;
    msg.period = 3302211525U;
    msg.duty_cycle = 2743053941U;

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
    msg.setTimeStamp(0.8647719074901108);
    msg.setSource(33535U);
    msg.setSourceEntity(191U);
    msg.setDestination(49369U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.5108332038105919;
    msg.lon = 0.28349459864244786;
    msg.height = 0.3802545727336545;
    msg.x = 0.1704978472011851;
    msg.y = 0.7424453022607812;
    msg.z = 0.33959174960027283;
    msg.phi = 0.7650914657089328;
    msg.theta = 0.21024932765872972;
    msg.psi = 0.4722946107618209;
    msg.u = 0.5970666250486739;
    msg.v = 0.6040968587179046;
    msg.w = 0.6869664477457561;
    msg.vx = 0.05845526180476712;
    msg.vy = 0.0028405874459859204;
    msg.vz = 0.9531060897637346;
    msg.p = 0.6754007254417742;
    msg.q = 0.8830840788663392;
    msg.r = 0.6569832030119453;
    msg.depth = 0.9206498091189501;
    msg.alt = 0.47458830359235593;

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
    msg.setTimeStamp(0.7785994320568165);
    msg.setSource(39258U);
    msg.setSourceEntity(220U);
    msg.setDestination(648U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.09480050501202752;
    msg.lon = 0.29619867677255973;
    msg.height = 0.15864008241745298;
    msg.x = 0.9253577101593138;
    msg.y = 0.8723009394174571;
    msg.z = 0.834203793900832;
    msg.phi = 0.1526820634892918;
    msg.theta = 0.5837923505228381;
    msg.psi = 0.9956633221113319;
    msg.u = 0.3079982602787238;
    msg.v = 0.1254129553983474;
    msg.w = 0.04541606762105488;
    msg.vx = 0.6404832895859667;
    msg.vy = 0.0521628698315465;
    msg.vz = 0.9097484889022168;
    msg.p = 0.2162689454101523;
    msg.q = 0.5037175111171038;
    msg.r = 0.12839390144880125;
    msg.depth = 0.8016100277778946;
    msg.alt = 0.9195745455465232;

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
    msg.setTimeStamp(0.555901194815021);
    msg.setSource(63832U);
    msg.setSourceEntity(134U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.22772331651775546;
    msg.lon = 0.7455050822232785;
    msg.height = 0.8991373073231447;
    msg.x = 0.9720746164478816;
    msg.y = 0.09677237742930311;
    msg.z = 0.7441693432932647;
    msg.phi = 0.4502781350463796;
    msg.theta = 0.839421376727163;
    msg.psi = 0.599928152589758;
    msg.u = 0.4661834387426911;
    msg.v = 0.5914757807446808;
    msg.w = 0.06602317275984448;
    msg.vx = 0.45220938974587344;
    msg.vy = 0.7789364673532164;
    msg.vz = 0.7603460516787909;
    msg.p = 0.37922330232358625;
    msg.q = 0.8162610289724808;
    msg.r = 0.9009961004260122;
    msg.depth = 0.13358178891696826;
    msg.alt = 0.6620044697310575;

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
    msg.setTimeStamp(0.7823109701224245);
    msg.setSource(49193U);
    msg.setSourceEntity(79U);
    msg.setDestination(3959U);
    msg.setDestinationEntity(181U);
    msg.x = 0.49900200691346985;
    msg.y = 0.7240340076234459;
    msg.z = 0.5060680211999603;

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
    msg.setTimeStamp(0.7551653723408177);
    msg.setSource(16659U);
    msg.setSourceEntity(157U);
    msg.setDestination(49936U);
    msg.setDestinationEntity(160U);
    msg.x = 0.7368704995862823;
    msg.y = 0.004844329704608574;
    msg.z = 0.8774022460352205;

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
    msg.setTimeStamp(0.19154609098300202);
    msg.setSource(3792U);
    msg.setSourceEntity(58U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(63U);
    msg.x = 0.0641666369177446;
    msg.y = 0.620060944556602;
    msg.z = 0.6673880718671164;

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
    msg.setTimeStamp(0.5357067563963719);
    msg.setSource(17877U);
    msg.setSourceEntity(127U);
    msg.setDestination(39177U);
    msg.setDestinationEntity(69U);
    msg.value = 0.3672769203188304;

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
    msg.setTimeStamp(0.4374796983218803);
    msg.setSource(39887U);
    msg.setSourceEntity(106U);
    msg.setDestination(49404U);
    msg.setDestinationEntity(40U);
    msg.value = 0.3562461523834477;

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
    msg.setTimeStamp(0.6373273043914702);
    msg.setSource(61485U);
    msg.setSourceEntity(59U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(235U);
    msg.value = 0.565242037843958;

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
    msg.setTimeStamp(0.1902283033324751);
    msg.setSource(42485U);
    msg.setSourceEntity(159U);
    msg.setDestination(182U);
    msg.setDestinationEntity(48U);
    msg.value = 0.09270441131332963;

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
    msg.setTimeStamp(0.12853518670509656);
    msg.setSource(56870U);
    msg.setSourceEntity(12U);
    msg.setDestination(35777U);
    msg.setDestinationEntity(228U);
    msg.value = 0.054909903958178075;

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
    msg.setTimeStamp(0.17744617924695272);
    msg.setSource(5503U);
    msg.setSourceEntity(223U);
    msg.setDestination(26764U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5631902527787827;

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
    msg.setTimeStamp(0.9870940789719692);
    msg.setSource(46289U);
    msg.setSourceEntity(51U);
    msg.setDestination(743U);
    msg.setDestinationEntity(148U);
    msg.x = 0.8522608960731985;
    msg.y = 0.5193426941551157;
    msg.z = 0.6349798786292506;
    msg.phi = 0.9262618890767824;
    msg.theta = 0.5795301919338329;
    msg.psi = 0.9587792106115053;
    msg.p = 0.5927387935604049;
    msg.q = 0.1232673258235103;
    msg.r = 0.507622500048911;
    msg.u = 0.41108981697909097;
    msg.v = 0.6490774464839271;
    msg.w = 0.9234894229089755;
    msg.bias_psi = 0.933292658684981;
    msg.bias_r = 0.9642358816542783;

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
    msg.setTimeStamp(0.2873839030388461);
    msg.setSource(12848U);
    msg.setSourceEntity(230U);
    msg.setDestination(51291U);
    msg.setDestinationEntity(226U);
    msg.x = 0.21170109433871498;
    msg.y = 0.5937994511755014;
    msg.z = 0.9736000069554573;
    msg.phi = 0.8399749426427053;
    msg.theta = 0.25977601680469997;
    msg.psi = 0.5537720590954405;
    msg.p = 0.40318871880989526;
    msg.q = 0.2631554477021595;
    msg.r = 0.5729275736869864;
    msg.u = 0.4652705014041074;
    msg.v = 0.01718887794812074;
    msg.w = 0.487338266600729;
    msg.bias_psi = 0.44171714583901966;
    msg.bias_r = 0.7758530161262948;

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
    msg.setTimeStamp(0.533347117811757);
    msg.setSource(5905U);
    msg.setSourceEntity(159U);
    msg.setDestination(46084U);
    msg.setDestinationEntity(201U);
    msg.x = 0.24179799255634793;
    msg.y = 0.36931273878890525;
    msg.z = 0.22312461548383822;
    msg.phi = 0.15507872826426983;
    msg.theta = 0.8730713191027435;
    msg.psi = 0.3527140870387989;
    msg.p = 0.8470325367717052;
    msg.q = 0.8887329377564229;
    msg.r = 0.16431221874130153;
    msg.u = 0.5332542844855551;
    msg.v = 0.7642073849030474;
    msg.w = 0.4290132656110598;
    msg.bias_psi = 0.9611528391925621;
    msg.bias_r = 0.21658120351701682;

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
    msg.setTimeStamp(0.4220180686430298);
    msg.setSource(607U);
    msg.setSourceEntity(17U);
    msg.setDestination(13421U);
    msg.setDestinationEntity(113U);
    msg.bias_psi = 0.4170298401867034;
    msg.bias_r = 0.8424086423152461;
    msg.cog = 0.755547027884555;
    msg.cyaw = 0.8076153871445478;
    msg.lbl_rej_level = 0.7852867682362307;
    msg.gps_rej_level = 0.8570875558392057;
    msg.custom_x = 0.8933165229959532;
    msg.custom_y = 0.9214315055895496;
    msg.custom_z = 0.34736602452892973;

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
    msg.setTimeStamp(0.33169357238442365);
    msg.setSource(3697U);
    msg.setSourceEntity(182U);
    msg.setDestination(13722U);
    msg.setDestinationEntity(162U);
    msg.bias_psi = 0.6981472853398362;
    msg.bias_r = 0.25721354434103094;
    msg.cog = 0.0016326135290356536;
    msg.cyaw = 0.9711141371299385;
    msg.lbl_rej_level = 0.27074325098172114;
    msg.gps_rej_level = 0.3543163315382196;
    msg.custom_x = 0.693184375994801;
    msg.custom_y = 0.20780700642086647;
    msg.custom_z = 0.7394326040793411;

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
    msg.setTimeStamp(0.46917435665557994);
    msg.setSource(56411U);
    msg.setSourceEntity(237U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(149U);
    msg.bias_psi = 0.3351705102602103;
    msg.bias_r = 0.936340126519097;
    msg.cog = 0.1916575268877152;
    msg.cyaw = 0.37366444464779724;
    msg.lbl_rej_level = 0.9098646051592573;
    msg.gps_rej_level = 0.6257362695446966;
    msg.custom_x = 0.3883043392389418;
    msg.custom_y = 0.5002329579068381;
    msg.custom_z = 0.09101787971192377;

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
    msg.setTimeStamp(0.9737389788459438);
    msg.setSource(23527U);
    msg.setSourceEntity(204U);
    msg.setDestination(8630U);
    msg.setDestinationEntity(88U);
    msg.utc_time = 0.8766515846009891;
    msg.reason = 86U;

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
    msg.setTimeStamp(0.6558247565100161);
    msg.setSource(56765U);
    msg.setSourceEntity(198U);
    msg.setDestination(27291U);
    msg.setDestinationEntity(214U);
    msg.utc_time = 0.10228329470725195;
    msg.reason = 217U;

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
    msg.setTimeStamp(0.2730985141994722);
    msg.setSource(63030U);
    msg.setSourceEntity(124U);
    msg.setDestination(28307U);
    msg.setDestinationEntity(250U);
    msg.utc_time = 0.6481872368892816;
    msg.reason = 44U;

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
    msg.setTimeStamp(0.390264519304066);
    msg.setSource(34589U);
    msg.setSourceEntity(235U);
    msg.setDestination(9913U);
    msg.setDestinationEntity(243U);
    msg.id = 85U;
    msg.range = 0.14487266534781507;
    msg.acceptance = 50U;

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
    msg.setTimeStamp(0.27845342668533046);
    msg.setSource(50589U);
    msg.setSourceEntity(228U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(82U);
    msg.id = 9U;
    msg.range = 0.5095400127451357;
    msg.acceptance = 35U;

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
    msg.setTimeStamp(0.8377129782644887);
    msg.setSource(16284U);
    msg.setSourceEntity(242U);
    msg.setDestination(62419U);
    msg.setDestinationEntity(150U);
    msg.id = 52U;
    msg.range = 0.514027718686726;
    msg.acceptance = 168U;

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
    msg.setTimeStamp(0.9788596202122476);
    msg.setSource(39486U);
    msg.setSourceEntity(84U);
    msg.setDestination(12833U);
    msg.setDestinationEntity(30U);
    msg.type = 12U;
    msg.reason = 228U;
    msg.value = 0.33196532176293514;
    msg.timestep = 0.6857090039373714;

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
    msg.setTimeStamp(0.41822421670066134);
    msg.setSource(51913U);
    msg.setSourceEntity(191U);
    msg.setDestination(18623U);
    msg.setDestinationEntity(77U);
    msg.type = 85U;
    msg.reason = 119U;
    msg.value = 0.025538366956153413;
    msg.timestep = 0.7849997477805167;

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
    msg.setTimeStamp(0.08753812939840044);
    msg.setSource(5503U);
    msg.setSourceEntity(67U);
    msg.setDestination(27618U);
    msg.setDestinationEntity(207U);
    msg.type = 44U;
    msg.reason = 69U;
    msg.value = 0.5015491386998293;
    msg.timestep = 0.21150921136679268;

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
    msg.setTimeStamp(0.0236104657333549);
    msg.setSource(6007U);
    msg.setSourceEntity(209U);
    msg.setDestination(7593U);
    msg.setDestinationEntity(77U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YWFROFPRIHMYKUMGQSZXWXEKWSNKXYTMUMIFFJIWWUTGVQKDNLLDBCQAPRVXMPOGORUSWUKDZAAOSCZQBEQIDZMHHDPTNDAHJMHQHITIGGBRCCRBRUETCVZMCIQBKPELAGPBPECGDEDIKZTBTMCVZFVSLFDRMAFNWKODO");
    tmp_msg_0.lat = 0.6905160756158244;
    tmp_msg_0.lon = 0.952292537355631;
    tmp_msg_0.depth = 0.4556190186864052;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 84U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7976973279551633;
    msg.y = 0.6745206353361841;
    msg.var_x = 0.47181592058118416;
    msg.var_y = 0.038969609361079294;
    msg.distance = 0.5698657535908865;

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
    msg.setTimeStamp(0.05752247021700163);
    msg.setSource(63083U);
    msg.setSourceEntity(55U);
    msg.setDestination(48198U);
    msg.setDestinationEntity(139U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QJTZRUTFVIEIJYVSWFXNYSUFRRHGSCIETZQPFOBPUOKRZPMILQJZAMLTJT");
    tmp_msg_0.lat = 0.9329637921454197;
    tmp_msg_0.lon = 0.6536971205373673;
    tmp_msg_0.depth = 0.768214318236668;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 245U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6451150747010154;
    msg.y = 0.6119084778853187;
    msg.var_x = 0.36803991610385767;
    msg.var_y = 0.4911373051375637;
    msg.distance = 0.12154206023432657;

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
    msg.setTimeStamp(0.15496370695210882);
    msg.setSource(28678U);
    msg.setSourceEntity(168U);
    msg.setDestination(513U);
    msg.setDestinationEntity(203U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JRLLQCAGHFCNLFVDLSYKZODSIWTJPBEJRXBOQXCURFTEUDHLAJPZCKSVFVQWIRGXAFUILSOYFNHZYAOEEYVZSBKCHDHSCMAPWOTTNNURXENMHEGYDHINIFXJAD");
    tmp_msg_0.lat = 0.7305053853876179;
    tmp_msg_0.lon = 0.09470392240461767;
    tmp_msg_0.depth = 0.28796405648930046;
    tmp_msg_0.query_channel = 179U;
    tmp_msg_0.reply_channel = 188U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8006279812009562;
    msg.y = 0.10334143782776384;
    msg.var_x = 0.054619299996344184;
    msg.var_y = 0.024964610660389686;
    msg.distance = 0.3299995241979582;

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
    msg.setTimeStamp(0.977861299115246);
    msg.setSource(21591U);
    msg.setSourceEntity(116U);
    msg.setDestination(7329U);
    msg.setDestinationEntity(174U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.7248748924485707);
    msg.setSource(35736U);
    msg.setSourceEntity(216U);
    msg.setDestination(51097U);
    msg.setDestinationEntity(91U);
    msg.state = 96U;

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
    msg.setTimeStamp(0.45867908715754013);
    msg.setSource(57246U);
    msg.setSourceEntity(48U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(109U);
    msg.state = 137U;

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
    msg.setTimeStamp(0.6362922705918268);
    msg.setSource(55344U);
    msg.setSourceEntity(74U);
    msg.setDestination(32624U);
    msg.setDestinationEntity(23U);
    msg.x = 0.31429779964469495;
    msg.y = 0.36635785433004076;
    msg.z = 0.8732478918211318;

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
    msg.setTimeStamp(0.8704615772252557);
    msg.setSource(22779U);
    msg.setSourceEntity(171U);
    msg.setDestination(24248U);
    msg.setDestinationEntity(73U);
    msg.x = 0.8060433201410598;
    msg.y = 0.2153630128418177;
    msg.z = 0.7055020816042488;

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
    msg.setTimeStamp(0.4640307325282724);
    msg.setSource(22586U);
    msg.setSourceEntity(252U);
    msg.setDestination(32075U);
    msg.setDestinationEntity(146U);
    msg.x = 0.7494007678925589;
    msg.y = 0.5587331273261067;
    msg.z = 0.41305425206535984;

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
    msg.setTimeStamp(0.6902461970266808);
    msg.setSource(12175U);
    msg.setSourceEntity(57U);
    msg.setDestination(49614U);
    msg.setDestinationEntity(105U);
    msg.va = 0.9974624773126287;
    msg.aoa = 0.5318212566734654;
    msg.ssa = 0.10116688683004682;

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
    msg.setTimeStamp(0.25659793642565065);
    msg.setSource(38355U);
    msg.setSourceEntity(254U);
    msg.setDestination(7105U);
    msg.setDestinationEntity(29U);
    msg.va = 0.4132051716272417;
    msg.aoa = 0.7227469072837045;
    msg.ssa = 0.7935081713846023;

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
    msg.setTimeStamp(0.9832502551869853);
    msg.setSource(24829U);
    msg.setSourceEntity(189U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(222U);
    msg.va = 0.37912580704767995;
    msg.aoa = 0.5701916231022841;
    msg.ssa = 0.21468038193438732;

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
    msg.setTimeStamp(0.18028116113739345);
    msg.setSource(29970U);
    msg.setSourceEntity(115U);
    msg.setDestination(59963U);
    msg.setDestinationEntity(59U);
    msg.value = 0.5448281377520956;

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
    msg.setTimeStamp(0.7205713441446153);
    msg.setSource(1772U);
    msg.setSourceEntity(236U);
    msg.setDestination(30383U);
    msg.setDestinationEntity(58U);
    msg.value = 0.029941579040800304;

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
    msg.setTimeStamp(0.13617221546214542);
    msg.setSource(53021U);
    msg.setSourceEntity(196U);
    msg.setDestination(36343U);
    msg.setDestinationEntity(89U);
    msg.value = 0.09100143118312953;

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
    msg.setTimeStamp(0.386811606916861);
    msg.setSource(53254U);
    msg.setSourceEntity(34U);
    msg.setDestination(21015U);
    msg.setDestinationEntity(227U);
    msg.value = 0.2189099918815921;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.48269990327558876);
    msg.setSource(64283U);
    msg.setSourceEntity(201U);
    msg.setDestination(7943U);
    msg.setDestinationEntity(58U);
    msg.value = 0.07438975639804124;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.33505944561710055);
    msg.setSource(44479U);
    msg.setSourceEntity(117U);
    msg.setDestination(12424U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6451686223862398;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.8029170795526136);
    msg.setSource(3589U);
    msg.setSourceEntity(65U);
    msg.setDestination(64091U);
    msg.setDestinationEntity(134U);
    msg.value = 0.27336256777627677;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.8277497479593043);
    msg.setSource(58433U);
    msg.setSourceEntity(98U);
    msg.setDestination(15711U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7634724884277772;
    msg.speed_units = 66U;

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
    msg.setTimeStamp(0.12666019092150405);
    msg.setSource(65389U);
    msg.setSourceEntity(3U);
    msg.setDestination(40222U);
    msg.setDestinationEntity(111U);
    msg.value = 0.28981772770578174;
    msg.speed_units = 248U;

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
    msg.setTimeStamp(0.4500121940427534);
    msg.setSource(47546U);
    msg.setSourceEntity(195U);
    msg.setDestination(54401U);
    msg.setDestinationEntity(70U);
    msg.value = 0.20180396364989606;

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
    msg.setTimeStamp(0.8645406003587511);
    msg.setSource(22878U);
    msg.setSourceEntity(140U);
    msg.setDestination(44392U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8915982829277798;

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
    msg.setTimeStamp(0.7453543478199288);
    msg.setSource(37915U);
    msg.setSourceEntity(227U);
    msg.setDestination(44978U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7059489030724329;

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
    msg.setTimeStamp(0.9905422242836811);
    msg.setSource(44687U);
    msg.setSourceEntity(114U);
    msg.setDestination(38987U);
    msg.setDestinationEntity(212U);
    msg.value = 0.9855145822374864;

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
    msg.setTimeStamp(0.4771654420651601);
    msg.setSource(12430U);
    msg.setSourceEntity(132U);
    msg.setDestination(21684U);
    msg.setDestinationEntity(47U);
    msg.value = 0.11548460912379244;

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
    msg.setTimeStamp(0.3323064357766301);
    msg.setSource(21214U);
    msg.setSourceEntity(120U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(254U);
    msg.value = 0.20803111058352208;

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
    msg.setTimeStamp(0.8057812029313557);
    msg.setSource(51020U);
    msg.setSourceEntity(253U);
    msg.setDestination(41178U);
    msg.setDestinationEntity(144U);
    msg.value = 0.27380572654859114;

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
    msg.setTimeStamp(0.829665787058726);
    msg.setSource(58437U);
    msg.setSourceEntity(88U);
    msg.setDestination(30987U);
    msg.setDestinationEntity(235U);
    msg.value = 0.025117106368066744;

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
    msg.setTimeStamp(0.058912951483391596);
    msg.setSource(27421U);
    msg.setSourceEntity(210U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(177U);
    msg.value = 0.32438495582417104;

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
    msg.setTimeStamp(0.6705427170523531);
    msg.setSource(9754U);
    msg.setSourceEntity(112U);
    msg.setDestination(39745U);
    msg.setDestinationEntity(8U);
    msg.path_ref = 3465559256U;
    msg.start_lat = 0.4648650853016403;
    msg.start_lon = 0.8694402785991021;
    msg.start_z = 0.19940439003915933;
    msg.start_z_units = 119U;
    msg.end_lat = 0.3151693492868499;
    msg.end_lon = 0.6933656579891353;
    msg.end_z = 0.6493906215707422;
    msg.end_z_units = 142U;
    msg.speed = 0.16670781413715208;
    msg.speed_units = 204U;
    msg.lradius = 0.22207702756354675;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.7874904799076605);
    msg.setSource(49374U);
    msg.setSourceEntity(94U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(242U);
    msg.path_ref = 12772603U;
    msg.start_lat = 0.9299470436924495;
    msg.start_lon = 0.6869446971634106;
    msg.start_z = 0.21846968292405355;
    msg.start_z_units = 84U;
    msg.end_lat = 0.3317025103597875;
    msg.end_lon = 0.9194785371734974;
    msg.end_z = 0.3027848327998647;
    msg.end_z_units = 234U;
    msg.speed = 0.2672281816098584;
    msg.speed_units = 4U;
    msg.lradius = 0.3155206211945326;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.22821878388706351);
    msg.setSource(22948U);
    msg.setSourceEntity(228U);
    msg.setDestination(3185U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 3562196108U;
    msg.start_lat = 0.8038140930330399;
    msg.start_lon = 0.5131190223477398;
    msg.start_z = 0.8918474045332832;
    msg.start_z_units = 17U;
    msg.end_lat = 0.48807063122327765;
    msg.end_lon = 0.7259842906381986;
    msg.end_z = 0.5284869436703761;
    msg.end_z_units = 162U;
    msg.speed = 0.8206319586200377;
    msg.speed_units = 34U;
    msg.lradius = 0.16625048655732821;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.8170231392069616);
    msg.setSource(45633U);
    msg.setSourceEntity(207U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(145U);
    msg.x = 0.6358881873987773;
    msg.y = 0.013890644117185658;
    msg.z = 0.21964931440046753;
    msg.k = 0.9124782307721351;
    msg.m = 0.8181297654853714;
    msg.n = 0.5168041100014905;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.29042567217679216);
    msg.setSource(22063U);
    msg.setSourceEntity(134U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(94U);
    msg.x = 0.9414784410894692;
    msg.y = 0.032117810296836136;
    msg.z = 0.17431348093586563;
    msg.k = 0.7996692362015031;
    msg.m = 0.11828286828408885;
    msg.n = 0.22200120098775422;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.20712416072324458);
    msg.setSource(1750U);
    msg.setSourceEntity(164U);
    msg.setDestination(64198U);
    msg.setDestinationEntity(115U);
    msg.x = 0.5286525826287599;
    msg.y = 0.27486811928702126;
    msg.z = 0.19486602158243782;
    msg.k = 0.6006068027104736;
    msg.m = 0.047441621439500814;
    msg.n = 0.4374616571456692;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.8760185184970679);
    msg.setSource(3226U);
    msg.setSourceEntity(150U);
    msg.setDestination(15581U);
    msg.setDestinationEntity(32U);
    msg.value = 0.21654920495831886;

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
    msg.setTimeStamp(0.8641000106066211);
    msg.setSource(6171U);
    msg.setSourceEntity(150U);
    msg.setDestination(23216U);
    msg.setDestinationEntity(23U);
    msg.value = 0.29913759814365226;

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
    msg.setTimeStamp(0.7277720651866146);
    msg.setSource(48163U);
    msg.setSourceEntity(205U);
    msg.setDestination(45073U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8336932662074378;

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
    msg.setTimeStamp(0.6797067533727581);
    msg.setSource(34318U);
    msg.setSourceEntity(234U);
    msg.setDestination(20597U);
    msg.setDestinationEntity(104U);
    msg.u = 0.9560814672779742;
    msg.v = 0.8880979758153843;
    msg.w = 0.06908357521451114;
    msg.p = 0.8930543604908229;
    msg.q = 0.39266621138665436;
    msg.r = 0.19192713698739405;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.09775502004136227);
    msg.setSource(13587U);
    msg.setSourceEntity(197U);
    msg.setDestination(61946U);
    msg.setDestinationEntity(200U);
    msg.u = 0.9654861546018791;
    msg.v = 0.771820839048123;
    msg.w = 0.8414543758783551;
    msg.p = 0.8820615065369984;
    msg.q = 0.6669281337244939;
    msg.r = 0.28818101980563415;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.05025812675968222);
    msg.setSource(33930U);
    msg.setSourceEntity(190U);
    msg.setDestination(19892U);
    msg.setDestinationEntity(143U);
    msg.u = 0.219327517572819;
    msg.v = 0.1242083645418991;
    msg.w = 0.6560712812301854;
    msg.p = 0.6022605697334396;
    msg.q = 0.3655295773330961;
    msg.r = 0.6639530955182706;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.8758035386292556);
    msg.setSource(4760U);
    msg.setSourceEntity(16U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(89U);
    msg.path_ref = 2630262147U;
    msg.start_lat = 0.5484556041061597;
    msg.start_lon = 0.9813161671537886;
    msg.start_z = 0.4874293047136703;
    msg.start_z_units = 174U;
    msg.end_lat = 0.3357808296514502;
    msg.end_lon = 0.45927922535012433;
    msg.end_z = 0.34851996604473934;
    msg.end_z_units = 229U;
    msg.lradius = 0.2320605923799791;
    msg.flags = 49U;
    msg.x = 0.6223050300323797;
    msg.y = 0.3413988725144338;
    msg.z = 0.7296744259255481;
    msg.vx = 0.4550850231804242;
    msg.vy = 0.9051634768211383;
    msg.vz = 0.5121303976151282;
    msg.course_error = 0.5453566289952452;
    msg.eta = 41922U;

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
    msg.setTimeStamp(0.7394263641682249);
    msg.setSource(24800U);
    msg.setSourceEntity(20U);
    msg.setDestination(34869U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 2527035256U;
    msg.start_lat = 0.9889066481862556;
    msg.start_lon = 0.443631118893682;
    msg.start_z = 0.07782035891670003;
    msg.start_z_units = 2U;
    msg.end_lat = 0.7735405543527795;
    msg.end_lon = 0.29864953064805366;
    msg.end_z = 0.11553293550299193;
    msg.end_z_units = 146U;
    msg.lradius = 0.6819547970373003;
    msg.flags = 252U;
    msg.x = 0.5173853329605196;
    msg.y = 0.760927773772617;
    msg.z = 0.1574541343972946;
    msg.vx = 0.9754906315448656;
    msg.vy = 0.3979094229663449;
    msg.vz = 0.4351880648081563;
    msg.course_error = 0.5978757192351764;
    msg.eta = 17343U;

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
    msg.setTimeStamp(0.6153002162245006);
    msg.setSource(23584U);
    msg.setSourceEntity(180U);
    msg.setDestination(1245U);
    msg.setDestinationEntity(208U);
    msg.path_ref = 3559908397U;
    msg.start_lat = 0.2667205639038579;
    msg.start_lon = 0.8469852552809786;
    msg.start_z = 0.26521325377103633;
    msg.start_z_units = 99U;
    msg.end_lat = 0.11469850468266951;
    msg.end_lon = 0.018938628520019374;
    msg.end_z = 0.6327776119839184;
    msg.end_z_units = 227U;
    msg.lradius = 0.19291586175315534;
    msg.flags = 111U;
    msg.x = 0.38235741494793607;
    msg.y = 0.08908968642382797;
    msg.z = 0.31266580621535467;
    msg.vx = 0.3628934457801899;
    msg.vy = 0.2291887246943849;
    msg.vz = 0.39383729473379747;
    msg.course_error = 0.13454235724877772;
    msg.eta = 50192U;

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
    msg.setTimeStamp(0.7558457254971637);
    msg.setSource(9311U);
    msg.setSourceEntity(205U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(175U);
    msg.k = 0.16594491412418721;
    msg.m = 0.20079452481331483;
    msg.n = 0.5740379606058373;

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
    msg.setTimeStamp(0.06951661220053018);
    msg.setSource(37271U);
    msg.setSourceEntity(18U);
    msg.setDestination(3428U);
    msg.setDestinationEntity(129U);
    msg.k = 0.6554191192460628;
    msg.m = 0.3811080372191453;
    msg.n = 0.2993648599466636;

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
    msg.setTimeStamp(0.44386036968135023);
    msg.setSource(58438U);
    msg.setSourceEntity(218U);
    msg.setDestination(59840U);
    msg.setDestinationEntity(213U);
    msg.k = 0.6754817083778416;
    msg.m = 0.5772717601044411;
    msg.n = 0.9811409167577081;

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
    msg.setTimeStamp(0.8890209562335644);
    msg.setSource(46256U);
    msg.setSourceEntity(106U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(57U);
    msg.p = 0.310591504161161;
    msg.i = 0.9572309882500208;
    msg.d = 0.8859119659343263;
    msg.a = 0.5153317356258657;

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
    msg.setTimeStamp(0.020690435553167852);
    msg.setSource(7975U);
    msg.setSourceEntity(175U);
    msg.setDestination(35949U);
    msg.setDestinationEntity(143U);
    msg.p = 0.6296296358240474;
    msg.i = 0.3360017412813483;
    msg.d = 0.48889437808379543;
    msg.a = 0.08341154641725379;

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
    msg.setTimeStamp(0.7353722159258484);
    msg.setSource(16823U);
    msg.setSourceEntity(167U);
    msg.setDestination(64052U);
    msg.setDestinationEntity(229U);
    msg.p = 0.8361701318831205;
    msg.i = 0.35052272402296525;
    msg.d = 0.5587424225698658;
    msg.a = 0.7105482773919505;

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
    msg.setTimeStamp(0.2646282985799233);
    msg.setSource(10274U);
    msg.setSourceEntity(227U);
    msg.setDestination(5503U);
    msg.setDestinationEntity(250U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.7138681770923642);
    msg.setSource(1849U);
    msg.setSourceEntity(221U);
    msg.setDestination(13274U);
    msg.setDestinationEntity(145U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.957107195525268);
    msg.setSource(24500U);
    msg.setSourceEntity(172U);
    msg.setDestination(51094U);
    msg.setDestinationEntity(178U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.8176016694794225);
    msg.setSource(18088U);
    msg.setSourceEntity(111U);
    msg.setDestination(63025U);
    msg.setDestinationEntity(41U);
    msg.x = 0.40844683091646217;
    msg.y = 0.30741231752130915;
    msg.z = 0.3036970726953251;
    msg.vx = 0.13012341616849254;
    msg.vy = 0.41678487026131983;
    msg.vz = 0.7296574053747096;
    msg.ax = 0.11107118910341152;
    msg.ay = 0.1516302155212641;
    msg.az = 0.9959143068277084;
    msg.flags = 50992U;

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
    msg.setTimeStamp(0.4080998270169468);
    msg.setSource(36287U);
    msg.setSourceEntity(179U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(88U);
    msg.x = 0.9620028253420314;
    msg.y = 0.5930337930999668;
    msg.z = 0.6782091890940074;
    msg.vx = 0.18394918792036186;
    msg.vy = 0.4320939809892651;
    msg.vz = 0.45455906300523397;
    msg.ax = 0.12143382807800218;
    msg.ay = 0.2819195608062317;
    msg.az = 0.15363762266541292;
    msg.flags = 19769U;

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
    msg.setTimeStamp(0.05614795738420442);
    msg.setSource(16437U);
    msg.setSourceEntity(157U);
    msg.setDestination(28779U);
    msg.setDestinationEntity(248U);
    msg.x = 0.9427075371485866;
    msg.y = 0.9243038636867894;
    msg.z = 0.5862444008227246;
    msg.vx = 0.9506019866842579;
    msg.vy = 0.08350302334091597;
    msg.vz = 0.1792239753655045;
    msg.ax = 0.1805943537367296;
    msg.ay = 0.4139966380022402;
    msg.az = 0.5427269187905323;
    msg.flags = 29767U;

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
    msg.setTimeStamp(0.5036892517202812);
    msg.setSource(63431U);
    msg.setSourceEntity(75U);
    msg.setDestination(35152U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9068097198440903;

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
    msg.setTimeStamp(0.35515647725696275);
    msg.setSource(33369U);
    msg.setSourceEntity(153U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(154U);
    msg.value = 0.6628201857635913;

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
    msg.setTimeStamp(0.7044319114309974);
    msg.setSource(8752U);
    msg.setSourceEntity(235U);
    msg.setDestination(59628U);
    msg.setDestinationEntity(238U);
    msg.value = 0.3304845272102236;

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
    msg.setTimeStamp(0.3938267019133559);
    msg.setSource(27489U);
    msg.setSourceEntity(230U);
    msg.setDestination(7247U);
    msg.setDestinationEntity(22U);
    msg.timeout = 22931U;
    msg.lat = 0.9071622091687868;
    msg.lon = 0.3322199610110609;
    msg.z = 0.10032433661679507;
    msg.z_units = 101U;
    msg.speed = 0.1463982824557004;
    msg.speed_units = 185U;
    msg.roll = 0.058272362667858846;
    msg.pitch = 0.869279531275813;
    msg.yaw = 0.34356935552640466;
    msg.custom.assign("DLKSQSEDXFTRERYOMASLLNSDUQEHMJBENLILYXGETOZMYQWCHZFLUKFEGKJCWMVCDFSKCYAXFHTYYTOTEQUUSZNBLOJKGURAEXBPYWTWUNIKQIROVPIBSFKCIBWLVJFPONJLHWHJUWEIDCGMZCXTMSWQIXEKVODVUAZ");

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
    msg.setTimeStamp(0.34982537011413706);
    msg.setSource(45153U);
    msg.setSourceEntity(199U);
    msg.setDestination(52219U);
    msg.setDestinationEntity(11U);
    msg.timeout = 24929U;
    msg.lat = 0.875061943071448;
    msg.lon = 0.05363234910710535;
    msg.z = 0.40473423939036013;
    msg.z_units = 126U;
    msg.speed = 0.8056484719892673;
    msg.speed_units = 118U;
    msg.roll = 0.28451852030489;
    msg.pitch = 0.6973128731360938;
    msg.yaw = 0.5516654454571629;
    msg.custom.assign("XYQWULDYARJEIYVSCQQBPTDZSNWIFXKQMSINGUTZHYGHSAAXUQDDCJPJSUGJJAULMYNXIZKABFJGZWIWODINHXMONHNEPJWVHTOJHMEBPVIRDQSNBPCCFKBEOTKQWYRFSFEYIUABRXCUVFKUPOLOKGLLSCZQMNINPTMSVCTLEWGGLVAWMAOHFMIRKCQBEUEFTXCKLAZDSROTRAPVHPMFXVKRTXDOZYFZBTLRUZGELMYPXYHW");

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
    msg.setTimeStamp(0.7648040734313993);
    msg.setSource(12836U);
    msg.setSourceEntity(194U);
    msg.setDestination(20089U);
    msg.setDestinationEntity(199U);
    msg.timeout = 30821U;
    msg.lat = 0.2939222659932068;
    msg.lon = 0.29574965211320203;
    msg.z = 0.1819491019342968;
    msg.z_units = 43U;
    msg.speed = 0.5102920061971095;
    msg.speed_units = 237U;
    msg.roll = 0.8416108799517346;
    msg.pitch = 0.6699892550618729;
    msg.yaw = 0.5491857611575417;
    msg.custom.assign("VQMRQCJYZDTTXEBDBKVOKDLLRFDDKIYMNSPQKTQCPDCFIGZXHQPWALFTGLUMSIPDRJPFWBZQHIXXVNFEEGHHNJHOCPUEGWDMAKVEAFOIMJZOZUXURUCLACCPTTGHSOERJVIXREOAYNSETCGBZDFQZNHRUUYBYNWMIDQWVQJVSEZPPKBFMFLBGMOUZRRYBXWBMCHWNOVSINWSWLSJYGUIYXHYJLIWRBKNTSAVOYV");

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
    msg.setTimeStamp(0.49426650629143654);
    msg.setSource(44347U);
    msg.setSourceEntity(252U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(239U);
    msg.timeout = 62880U;
    msg.lat = 0.152941213035665;
    msg.lon = 0.6407969065167871;
    msg.z = 0.7724278987781522;
    msg.z_units = 1U;
    msg.speed = 0.5912259249168818;
    msg.speed_units = 211U;
    msg.duration = 31678U;
    msg.radius = 0.28501344486799773;
    msg.flags = 42U;
    msg.custom.assign("CEYDPNTCFVSEXLWWVIRBMPVOOYCZHXVKZAQKGZDGCISUGAS");

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
    msg.setTimeStamp(0.029780003533849575);
    msg.setSource(17192U);
    msg.setSourceEntity(95U);
    msg.setDestination(31436U);
    msg.setDestinationEntity(167U);
    msg.timeout = 37425U;
    msg.lat = 0.5582021915394031;
    msg.lon = 0.8171719694068621;
    msg.z = 0.11932934443958088;
    msg.z_units = 43U;
    msg.speed = 0.8598354794230914;
    msg.speed_units = 214U;
    msg.duration = 2191U;
    msg.radius = 0.4334182806520853;
    msg.flags = 107U;
    msg.custom.assign("JPHAVPZWDVIYHADLATEFAVJNLMQJANLGSBOSECBXHWECZPWGHWZKNKEYBBQQGCDKLOUISFYVKSKT");

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
    msg.setTimeStamp(0.8891990804191499);
    msg.setSource(23713U);
    msg.setSourceEntity(245U);
    msg.setDestination(38972U);
    msg.setDestinationEntity(180U);
    msg.timeout = 36076U;
    msg.lat = 0.8801716700812995;
    msg.lon = 0.17723423656506676;
    msg.z = 0.8971750810916057;
    msg.z_units = 120U;
    msg.speed = 0.12293321568792592;
    msg.speed_units = 105U;
    msg.duration = 60944U;
    msg.radius = 0.8494412721929264;
    msg.flags = 9U;
    msg.custom.assign("HCAMDFSEHRIOJYHJHGAEWSEZARTZIEFGZGBYMVUAVWNHFLQXPQMKDNHCEBWSEZLNGYZUYXJBNXGALPPJYSGTOPKCSXTRSTLOFUSYXITRPZSFDYALWOMWRXJTLYCAUDDKTQRDJHFICIQYKGMFNMKYLVVNPQEROXRUDIBEVCVQHZGURQJMPWWUNLCNCPATIXIZWNQUBTCSLDTBJAIZ");

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
    msg.setTimeStamp(0.9459566877647771);
    msg.setSource(46151U);
    msg.setSourceEntity(45U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(236U);
    msg.custom.assign("BBCSMPOFDPJNABIEXGYWRTUBAILFNLVYOGDJGEWNBNTKCFHAZIPZCKIYAEACTHBXCUVRFOXQITXRJVVWDUAFHETNZDVHHSFQU");

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
    msg.setTimeStamp(0.9250154650984819);
    msg.setSource(59104U);
    msg.setSourceEntity(199U);
    msg.setDestination(194U);
    msg.setDestinationEntity(41U);
    msg.custom.assign("QOVEWHNPLPTTCWMNUDOSORHVFDDETTZNPMIOMWXBWODSFTIEQDHPQLEXYXRYHMRWFCUKUGZJTJXISRVCIRAAWFIMPXHEPBFUKINEWXWUCAJ");

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
    msg.setTimeStamp(0.9665287581401746);
    msg.setSource(28126U);
    msg.setSourceEntity(53U);
    msg.setDestination(18870U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("OHJRLDMCHIQOWTHTSWUNZIIFK");

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
    msg.setTimeStamp(0.15674947902832004);
    msg.setSource(64528U);
    msg.setSourceEntity(38U);
    msg.setDestination(32583U);
    msg.setDestinationEntity(216U);
    msg.timeout = 59690U;
    msg.lat = 0.11685046015700673;
    msg.lon = 0.3622962184441678;
    msg.z = 0.2796244087755302;
    msg.z_units = 33U;
    msg.duration = 21956U;
    msg.speed = 0.4377071468630672;
    msg.speed_units = 232U;
    msg.type = 183U;
    msg.radius = 0.8575442085420713;
    msg.length = 0.48140470154578086;
    msg.bearing = 0.8059677321513519;
    msg.direction = 248U;
    msg.custom.assign("MHTQWQCPWSVQJVFOLPBFVYETSVAJCIRTULKRXLAKOMSSZIBGHQAHWMLKAYVUZBFPHGEUVDHCUAMRYJDNZISYCKTRBJAMGLFQREJAPGIBTKEIWVBNFC");

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
    msg.setTimeStamp(0.4111406494721609);
    msg.setSource(39966U);
    msg.setSourceEntity(232U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(225U);
    msg.timeout = 51963U;
    msg.lat = 0.11713889170087088;
    msg.lon = 0.6298155248344997;
    msg.z = 0.15413746418607244;
    msg.z_units = 183U;
    msg.duration = 61241U;
    msg.speed = 0.5012904335611584;
    msg.speed_units = 118U;
    msg.type = 247U;
    msg.radius = 0.5163565654209423;
    msg.length = 0.6963430921112007;
    msg.bearing = 0.2646904753027013;
    msg.direction = 116U;
    msg.custom.assign("UALYTAUIFTXNFLBHEPSWBYEJPAAUNYYIALWJSPICN");

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
    msg.setTimeStamp(0.4107921175997483);
    msg.setSource(44498U);
    msg.setSourceEntity(81U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(120U);
    msg.timeout = 20456U;
    msg.lat = 0.7622525053697523;
    msg.lon = 0.5730356105953377;
    msg.z = 0.2885809392808628;
    msg.z_units = 96U;
    msg.duration = 5211U;
    msg.speed = 0.09465175682512794;
    msg.speed_units = 198U;
    msg.type = 53U;
    msg.radius = 0.3473672344899731;
    msg.length = 0.47816836741168156;
    msg.bearing = 0.7870241320505004;
    msg.direction = 16U;
    msg.custom.assign("XUGDMRKIBEXYXWBRXETWGVDQBOSUZQEGUMLEWBEUKVSVHKKLCGFMRCGZLJUUQQHMYNOOFJAFPOTGWFFNBCEYVZTTPOMANFPDFNQXPESJKEMMPYIXQLNTJPLCTJ");

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
    msg.setTimeStamp(0.715736689796619);
    msg.setSource(40470U);
    msg.setSourceEntity(55U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(109U);
    msg.duration = 52059U;
    msg.custom.assign("TUHTSDSKBADDYZTHVIPYYXHTVKAKUPAVWLDWQNSTLRJRKMEFADOFOQXHUUHAHKEXECLBXAGWJKINGOWMCPBWCQICFJKKSVLQQSSEORBPBGZVMICFVUFFTJZDWUOUPYECBTYXMKQRSWQPUVYJMRNNLTHDBRAJWPZRJDCCRXE");

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
    msg.setTimeStamp(0.7671797493010495);
    msg.setSource(34135U);
    msg.setSourceEntity(78U);
    msg.setDestination(9952U);
    msg.setDestinationEntity(7U);
    msg.duration = 47447U;
    msg.custom.assign("JSVANGAUVKHYBBPBFUACLGVXWLQHBRNVSIDJTPKTSSAFCSKRJWHUWYLUCBEVPGKISOBIWEJLWSFIDAPQJQAEGDOIXBRAROZUMRRMFZAOLTHDDWUSTGKJFLOIJUMKNKZLRVHCDXPYOLFLNQCYYHAKFTEUNALPPEFHDECCXSZPORROFUNGBONCYQHQIMYIXZMSYV");

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
    msg.setTimeStamp(0.4863087508388608);
    msg.setSource(40826U);
    msg.setSourceEntity(212U);
    msg.setDestination(39395U);
    msg.setDestinationEntity(95U);
    msg.duration = 60966U;
    msg.custom.assign("SHELMOWMGPLOETGZKEJPHUIUGJIBGYLKD");

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
    msg.setTimeStamp(0.05211499594010616);
    msg.setSource(58027U);
    msg.setSourceEntity(62U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(124U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.004101528401614485;
    msg.control.set(tmp_msg_0);
    msg.duration = 15940U;
    msg.custom.assign("ESSZNOZKGQWRFQNCERBXYUKQXQCJCIYGVGKUKLMIRWVCPDLBOEEGSBY");

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
    msg.setTimeStamp(0.6472737636932412);
    msg.setSource(40835U);
    msg.setSourceEntity(233U);
    msg.setDestination(28750U);
    msg.setDestinationEntity(55U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1050692749U;
    tmp_msg_0.start_lat = 0.6422824107910096;
    tmp_msg_0.start_lon = 0.312912125079459;
    tmp_msg_0.start_z = 0.22469319518150843;
    tmp_msg_0.start_z_units = 60U;
    tmp_msg_0.end_lat = 0.9760630347797206;
    tmp_msg_0.end_lon = 0.7065804483388654;
    tmp_msg_0.end_z = 0.564753646571593;
    tmp_msg_0.end_z_units = 130U;
    tmp_msg_0.speed = 0.2856573999547062;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.lradius = 0.7447706750476372;
    tmp_msg_0.flags = 247U;
    msg.control.set(tmp_msg_0);
    msg.duration = 24948U;
    msg.custom.assign("VFWNLNMCJPXAZEEVIMCWGHABGBZNAKJTUOMYAYHWUEDHAVSSIMTRSSVLGXOWSZHLAMRWMAACFUQXKLKDBQHLRNRPYSPCCIGOZIXREVPUZBRCTGKWBIJGOXNPMMYZSXCTDXIUOLHVQGWWTIHDPJONKY");

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
    msg.setTimeStamp(0.6006111222861727);
    msg.setSource(32291U);
    msg.setSourceEntity(142U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(36U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5631007922960396;
    msg.control.set(tmp_msg_0);
    msg.duration = 23216U;
    msg.custom.assign("BGPRREOBNSGNCLADMQILVRSMTELRCAHLACYMVIJKMXBDTCNPTBMCVCFDATWPATTFFHOJFYCWFJKRKGJLYRSUMTWDJTECESKSYYPHQMXHMLSPIVGGDEPZAWNUHKNWLOBOKQOXNPFAGUQSWJXNSVDWXXCQPQDGYSZGHRWRKXXASBVKPBDARXUHOXUOIEAIMKYZWZFJHEFDNMIBDEZQLQIYUYIWBFJUBUNIOGZRQEJLJZZVOHTPHONZYECTQ");

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
    msg.setTimeStamp(0.47809220175052847);
    msg.setSource(35565U);
    msg.setSourceEntity(6U);
    msg.setDestination(59918U);
    msg.setDestinationEntity(36U);
    msg.timeout = 169U;
    msg.lat = 0.7032100367067821;
    msg.lon = 0.18433536950779106;
    msg.z = 0.25021271489266905;
    msg.z_units = 9U;
    msg.speed = 0.5744207618360135;
    msg.speed_units = 57U;
    msg.bearing = 0.8394827564895988;
    msg.cross_angle = 0.5624394225212032;
    msg.width = 0.9731905143171801;
    msg.length = 0.13332504072932239;
    msg.hstep = 0.8884980434032307;
    msg.coff = 176U;
    msg.alternation = 33U;
    msg.flags = 174U;
    msg.custom.assign("XITMTFFGSWKLNFCUFRKPTKNVWJPQHQUDAJVRHMRLGMKZXYVWKLAEDOKPVBPHCYCLEHNZYJPEIBGQDYFXGUJBQHOKVTTQVCLISMTXVGVDEXTDJNQNCBAIWNOKRBCRTXPURYHPIXBNAPHVDNRZWWQMETAMICQDZL");

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
    msg.setTimeStamp(0.8373779643368799);
    msg.setSource(34292U);
    msg.setSourceEntity(67U);
    msg.setDestination(48164U);
    msg.setDestinationEntity(10U);
    msg.timeout = 61466U;
    msg.lat = 0.7019023067221796;
    msg.lon = 0.0049426299523633865;
    msg.z = 0.758999335445612;
    msg.z_units = 232U;
    msg.speed = 0.8703355482633051;
    msg.speed_units = 65U;
    msg.bearing = 0.6828708744154206;
    msg.cross_angle = 0.22175359342432888;
    msg.width = 0.09864343174105228;
    msg.length = 0.39332162965482675;
    msg.hstep = 0.6756505151273637;
    msg.coff = 230U;
    msg.alternation = 37U;
    msg.flags = 52U;
    msg.custom.assign("TCPOOCZCHEMFLFJFFUAUSKAOPTEENURPZRILNOMXPOFQNBOLFLCSWSFSRELCDVSALYNBQJXEVUCZNRNDPBXEICQJHYYLYTWLCDGDMYWROHVIKFAZUWMHBBTVJYXESIVNCGTKDHBRIWXUAMVXDRHHWSYLCMFONRMMGSZIWXPKNPHPQUPEXIEQV");

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
    msg.setTimeStamp(0.9257136769585318);
    msg.setSource(26828U);
    msg.setSourceEntity(248U);
    msg.setDestination(32883U);
    msg.setDestinationEntity(160U);
    msg.timeout = 59839U;
    msg.lat = 0.2293545676881149;
    msg.lon = 0.6665486994034358;
    msg.z = 0.5140724098829211;
    msg.z_units = 126U;
    msg.speed = 0.7684330880438167;
    msg.speed_units = 213U;
    msg.bearing = 0.3038928786399282;
    msg.cross_angle = 0.436045247333091;
    msg.width = 0.8876070014149714;
    msg.length = 0.6309950229006334;
    msg.hstep = 0.8998759845768061;
    msg.coff = 145U;
    msg.alternation = 248U;
    msg.flags = 160U;
    msg.custom.assign("ZZXTXEBFIQJIQURIHSELECOXHNODZJWFTGQWWLZIKNSOCBWAQAZJWYOKEJPVRXPUGTDYJVSIHDZLDDJRMUPBTYFPGDOXEKVTZDZYFYCCJUTUALMAWAEVHOMCPBVKJMBWEPPHIXJKSFNTRRYWNGQRFPTPPGKYRZDXOZUELSIVCVGHFYFXVCQMVNRMYCAENBUQXIHAAWBUFQSNDSFBXOB");

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
    msg.setTimeStamp(0.3486251754219106);
    msg.setSource(45667U);
    msg.setSourceEntity(132U);
    msg.setDestination(36997U);
    msg.setDestinationEntity(103U);
    msg.timeout = 12324U;
    msg.lat = 0.46147479791047175;
    msg.lon = 0.8905574632164829;
    msg.z = 0.7817805551269508;
    msg.z_units = 129U;
    msg.speed = 0.2349128878694201;
    msg.speed_units = 68U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5789167978709399;
    tmp_msg_0.y = 0.8407756499937685;
    tmp_msg_0.z = 0.4517947010146577;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LNLRMPLNEDSQMBSEIGHNEQQXLVNHFECBL");

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
    msg.setTimeStamp(0.4988068664616665);
    msg.setSource(18807U);
    msg.setSourceEntity(184U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(131U);
    msg.timeout = 33444U;
    msg.lat = 0.8131608039630275;
    msg.lon = 0.14371444022242597;
    msg.z = 0.8015245736418021;
    msg.z_units = 102U;
    msg.speed = 0.7378778651199;
    msg.speed_units = 250U;
    msg.custom.assign("RTNSSCFYBCXMLJDFLKGFIHUZZKORWQVQAMENAJBRLYDZVTJZQHIPFKBHQGWYOKPDWMVDJIMWIQDZTJPBPYDEANQMMFGADNVQPGMPLDZRZEJSSYRRPXGJLLBVEOWHGCCANXMACXVHTHFGWKXMRWVQIBUKCKBGKVFTELXWHNEINQYEYZOQOUUENSDFACGSUXHMRTYONLXJIBASEZAIPTBKVETLRLSFRUCYTUXJYVWUWUOHSPOUXTOCCD");

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
    msg.setTimeStamp(0.14423989415866534);
    msg.setSource(29476U);
    msg.setSourceEntity(211U);
    msg.setDestination(59700U);
    msg.setDestinationEntity(58U);
    msg.timeout = 60459U;
    msg.lat = 0.43293886283345195;
    msg.lon = 0.21631837175707347;
    msg.z = 0.9891131712522792;
    msg.z_units = 49U;
    msg.speed = 0.6802489994685244;
    msg.speed_units = 142U;
    msg.custom.assign("UHFOVZNFQXDWWAVPMKTOTXGFCPLJEGKVXDDMPUYOSMAG");

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
    msg.setTimeStamp(0.09998896021416515);
    msg.setSource(21051U);
    msg.setSourceEntity(18U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(138U);
    msg.x = 0.8947200353526267;
    msg.y = 0.8374552744300123;
    msg.z = 0.9919978286652755;

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
    msg.setTimeStamp(0.8571689266820428);
    msg.setSource(53163U);
    msg.setSourceEntity(126U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(168U);
    msg.x = 0.9502597202305209;
    msg.y = 0.8177691616746178;
    msg.z = 0.6142413909669889;

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
    msg.setTimeStamp(0.26299279812480103);
    msg.setSource(44380U);
    msg.setSourceEntity(210U);
    msg.setDestination(44589U);
    msg.setDestinationEntity(158U);
    msg.x = 0.6335697943405003;
    msg.y = 0.6938546839338766;
    msg.z = 0.6924768149926265;

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
    msg.setTimeStamp(0.12426741138993991);
    msg.setSource(29028U);
    msg.setSourceEntity(116U);
    msg.setDestination(14969U);
    msg.setDestinationEntity(134U);
    msg.timeout = 62663U;
    msg.lat = 0.14426589419207048;
    msg.lon = 0.20826093569824156;
    msg.z = 0.2007446711024795;
    msg.z_units = 140U;
    msg.amplitude = 0.6061362023248654;
    msg.pitch = 0.020354303044894717;
    msg.speed = 0.2194770453269108;
    msg.speed_units = 110U;
    msg.custom.assign("KPETWSQKBAQEKRGGMJZBFWMBUVSJVWRTPXMCRGMDMTNNFVCSETLKQAPIJUQCIKGLAQTHNCLHWBCOULAKKCZBPSHV");

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
    msg.setTimeStamp(0.7098824168746244);
    msg.setSource(23887U);
    msg.setSourceEntity(79U);
    msg.setDestination(57327U);
    msg.setDestinationEntity(25U);
    msg.timeout = 14273U;
    msg.lat = 0.5987800261655415;
    msg.lon = 0.028699880457120797;
    msg.z = 0.08247591723779857;
    msg.z_units = 139U;
    msg.amplitude = 0.43977288101240986;
    msg.pitch = 0.6846312359948241;
    msg.speed = 0.44872559691089453;
    msg.speed_units = 84U;
    msg.custom.assign("ZUKPPIKNULZYAXCLDNWNTCVFJHRZIUEQCWUVKPFGVWPSZGVJKDLMCLUSYBNMJXJLRHVGQEOIJHSFXEORSTDTRYWOHAXZUNVIHBWMYBVNFVNJODGPNGLFFPNQSCEBJXHAMIIOFQY");

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
    msg.setTimeStamp(0.4688982497069625);
    msg.setSource(55505U);
    msg.setSourceEntity(30U);
    msg.setDestination(17074U);
    msg.setDestinationEntity(123U);
    msg.timeout = 61098U;
    msg.lat = 0.5738258489744498;
    msg.lon = 0.4062652057620545;
    msg.z = 0.9887520461963198;
    msg.z_units = 222U;
    msg.amplitude = 0.07313500332967227;
    msg.pitch = 0.7487690440519443;
    msg.speed = 0.8384965812386143;
    msg.speed_units = 84U;
    msg.custom.assign("ETKVUEKOGBVBNEBNACMASHDYFEVMRWOUQD");

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
    msg.setTimeStamp(0.8623625236513143);
    msg.setSource(39255U);
    msg.setSourceEntity(22U);
    msg.setDestination(27698U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.8678576203430105);
    msg.setSource(44615U);
    msg.setSourceEntity(236U);
    msg.setDestination(4101U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.14619623784221647);
    msg.setSource(61457U);
    msg.setSourceEntity(173U);
    msg.setDestination(9530U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.9806707051510566);
    msg.setSource(59054U);
    msg.setSourceEntity(194U);
    msg.setDestination(64073U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.17280540216957063;
    msg.lon = 0.49421140221618465;
    msg.z = 0.18664394236816728;
    msg.z_units = 198U;
    msg.radius = 0.5315045931267474;
    msg.duration = 59820U;
    msg.speed = 0.24353967326590675;
    msg.speed_units = 174U;
    msg.custom.assign("GMLJSETBJDEHBUHOEDOAFLISPSMLDYTQPXBZHYGEYNNTJAHFGUKBZAKCFDOMHTGUGTHBCZXFRVXVXCDYYWNNRGWLAKFVYIPPJCSRIYFDFQKXQCENQEPKIMGDQIYRWUNRWAJZXESKGGFPAVVSXIJOLUJOBQLHOJWCCBEXLZSRVTOAPSPAOWWTUBNBHKZVUBZCYDPXLRILCUVAWMVZORQSCTPKNRENJ");

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
    msg.setTimeStamp(0.9166744181717629);
    msg.setSource(27208U);
    msg.setSourceEntity(40U);
    msg.setDestination(9610U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.3136020365065977;
    msg.lon = 0.5455717377812175;
    msg.z = 0.6343945654803499;
    msg.z_units = 107U;
    msg.radius = 0.2828841621013991;
    msg.duration = 44883U;
    msg.speed = 0.2721657319780608;
    msg.speed_units = 3U;
    msg.custom.assign("DTOEUKNWFDGIZMARKMOEPAGBFHBIWNLCZJBBUKARZDCOCHOEDRVZPPTKCSYBHGFDVOSNEWMGIFCLAWGYMRJRULJUWQMOIWDBVTKITRINRTERNEVRZMEDJAYXMSNQHHTGLINOJSNNXLOFCTAHLXPHYJMCQASZQTQYSLXC");

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
    msg.setTimeStamp(0.607364493737988);
    msg.setSource(43571U);
    msg.setSourceEntity(223U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.2464736666646219;
    msg.lon = 0.621983824509096;
    msg.z = 0.2695330561993631;
    msg.z_units = 100U;
    msg.radius = 0.5160223236314971;
    msg.duration = 58256U;
    msg.speed = 0.8027277112650756;
    msg.speed_units = 119U;
    msg.custom.assign("MOLVMHSYLBIZAPGTEGNEOGAWWQKRMDWSWJRCNYTFYDFOWCLTSZXAAHBQYIURIVNZYVIHULGTEAONSEUYSXGPDKOHQARTJCCZYGADVUOKUYVTAZIHEJXTJNZQKJDXQTJHKSFDQEPMNRVWNSKMJOLQPBEREFCLCKNFIRBZBVMHUBSKGQBJZQCXFXJYEPWZFCXXBRDKDELOPGHXPMABFIFVRHNSLIURLDCGMMXBDFZKIGUPUTAVSNWUWLTCWQY");

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
    msg.setTimeStamp(0.024859900192389595);
    msg.setSource(20921U);
    msg.setSourceEntity(142U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(143U);
    msg.timeout = 57696U;
    msg.flags = 207U;
    msg.lat = 0.5347099433673748;
    msg.lon = 0.28494491302842206;
    msg.start_z = 0.2660943552100331;
    msg.start_z_units = 56U;
    msg.end_z = 0.256463002538577;
    msg.end_z_units = 177U;
    msg.radius = 0.7222495886855276;
    msg.speed = 0.551553251523992;
    msg.speed_units = 53U;
    msg.custom.assign("FZSOFFVUUJRPKDDNAMBHAQHENAYHIPCDLYMFVSVJIIEZLYYTJCGHBGQHDCYGANOKZMW");

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
    msg.setTimeStamp(0.2546127239411481);
    msg.setSource(53786U);
    msg.setSourceEntity(230U);
    msg.setDestination(1234U);
    msg.setDestinationEntity(45U);
    msg.timeout = 21390U;
    msg.flags = 75U;
    msg.lat = 0.38761097564457125;
    msg.lon = 0.6247422865453018;
    msg.start_z = 0.17807775635610013;
    msg.start_z_units = 74U;
    msg.end_z = 0.6913572454217648;
    msg.end_z_units = 207U;
    msg.radius = 0.6951729034886162;
    msg.speed = 0.7788398980819781;
    msg.speed_units = 199U;
    msg.custom.assign("SVQFVAWGPEMDHKWDMBMKBXLGEGOUWYTPPCKRCCYZOJRKUXHGNQJAWGJCZZAZORHNRRGANBFDSLMHGCQSOHLAWCSKDXDUFRLISCCSISLLOZMUJXYJESUHBYUYZJYTLPFODBXRZFQMTHVBTPLFMFPRWAIVDHX");

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
    msg.setTimeStamp(0.19383359002497746);
    msg.setSource(51476U);
    msg.setSourceEntity(95U);
    msg.setDestination(30598U);
    msg.setDestinationEntity(3U);
    msg.timeout = 13120U;
    msg.flags = 199U;
    msg.lat = 0.30612965773034073;
    msg.lon = 0.9656729128454016;
    msg.start_z = 0.4837193223542512;
    msg.start_z_units = 86U;
    msg.end_z = 0.37289925744453656;
    msg.end_z_units = 94U;
    msg.radius = 0.29670478312138937;
    msg.speed = 0.8141543405923425;
    msg.speed_units = 215U;
    msg.custom.assign("JQMTPNOSULNOMWJMOUZDYRYHXKHVIQDKTMPFRIUMJHXJTLMNLZWOGXCEKWXLWLAHTGOSJDGVPVKFINLXJDWQBKFHIBYTANEUAQXLADCSNOPCMHVFMFQEUNHBQFASULSBEWEZSVCRQWHAFPTFYOATIBXINCKGLZSBRRTAEGBHKCXKKIVSYCMNGYFQZTIQDZRJDRUJF");

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
    msg.setTimeStamp(0.9144162828427332);
    msg.setSource(27967U);
    msg.setSourceEntity(204U);
    msg.setDestination(45005U);
    msg.setDestinationEntity(216U);
    msg.timeout = 59608U;
    msg.lat = 0.06109178868518428;
    msg.lon = 0.2791978226510641;
    msg.z = 0.9033433574556827;
    msg.z_units = 64U;
    msg.speed = 0.007260548820487545;
    msg.speed_units = 247U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7079789496898664;
    tmp_msg_0.y = 0.40577392760335174;
    tmp_msg_0.z = 0.3587529702129081;
    tmp_msg_0.t = 0.9325121390912071;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OXIQGXWVUEIGDYPKIECYJERGVQTNJXUZZSSFICYFRJCADSQUVOXKYZFPWEBAJTMJQKWDPVECZUMZZLJDTROCQL");

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
    msg.setTimeStamp(0.8289008247811196);
    msg.setSource(401U);
    msg.setSourceEntity(138U);
    msg.setDestination(13192U);
    msg.setDestinationEntity(9U);
    msg.timeout = 58635U;
    msg.lat = 0.48571110797879136;
    msg.lon = 0.0955076927670434;
    msg.z = 0.3607574012037853;
    msg.z_units = 136U;
    msg.speed = 0.9049233633420641;
    msg.speed_units = 97U;
    msg.custom.assign("QPOULYSBPPNRHMOOHPYLVXZJCDIIVDCXMTKZGDZUNBRGJWPUKGZXQPNMZWIRRBLHGSSNAUDOCJQRFIHAZCUCWRAHOGVFDPTBOLKSTSOVWMRSEZDXCCVVFRNMWOHDDDAYKCCKJUTZFIJBEEHSAKKYKETLSIEJDYGNOIPZGTQYMRWMAFQQXAPLXQUJTLGIAPSNENLIKVBBHWSBKLGBWQFLOURJEVJYNEFXXYQTGWYCXQFWMBZMEHINFA");

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
    msg.setTimeStamp(0.7628103691536959);
    msg.setSource(60471U);
    msg.setSourceEntity(155U);
    msg.setDestination(24275U);
    msg.setDestinationEntity(180U);
    msg.timeout = 42513U;
    msg.lat = 0.3993041868495312;
    msg.lon = 0.8864488482843249;
    msg.z = 0.654841814968532;
    msg.z_units = 190U;
    msg.speed = 0.32770605904775285;
    msg.speed_units = 123U;
    msg.custom.assign("HNLNHBKBGMLEWQUQXDFPBWJGSOQFTLBYAYRIDDCIXSZJKSNLOCVNAWFPCSPPFGVZZENLUIXAFGXGLEPCPPJUNMTUQJTYAAGBYOJMCUEYDOKCZKVNRZTIZHVFJSXMMZEXRYSEHSIKWEGDYXQFQ");

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
    msg.setTimeStamp(0.4218006817487716);
    msg.setSource(5511U);
    msg.setSourceEntity(42U);
    msg.setDestination(65131U);
    msg.setDestinationEntity(184U);
    msg.x = 0.8132105129836478;
    msg.y = 0.9993324946305309;
    msg.z = 0.41310591673366404;
    msg.t = 0.5990161352275929;

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
    msg.setTimeStamp(0.8849261190400376);
    msg.setSource(65318U);
    msg.setSourceEntity(4U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(136U);
    msg.x = 0.8946209403602698;
    msg.y = 0.1659891834033268;
    msg.z = 0.9937720844201166;
    msg.t = 0.36748676326578544;

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
    msg.setTimeStamp(0.9037332530827813);
    msg.setSource(26689U);
    msg.setSourceEntity(55U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(54U);
    msg.x = 0.04444286617757942;
    msg.y = 0.4631841647776801;
    msg.z = 0.03557891341641328;
    msg.t = 0.5345180232602389;

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
    msg.setTimeStamp(0.0574340052575949);
    msg.setSource(56341U);
    msg.setSourceEntity(182U);
    msg.setDestination(16519U);
    msg.setDestinationEntity(34U);
    msg.timeout = 63308U;
    msg.name.assign("LDILUCBIGSRNJEQRMEWDGAAVSAANVYXKFGEXTRBVRGIUHBIETGRVPKPFJLWPAXTOUFFSYZDVLFJGNZEZRYWDJWQYBYQSUWCHDSZBECLOJBNYXHCYKPWCDVILQZOMPUVQBXKXKLWYQEIFEKUVOKPNAJJYSZAKSJCAPDPFPMRFOIEAHIM");
    msg.custom.assign("AJZWMXUZTHRBLVGWKQAHHAMDQBYSGOALVCKJHNEZDUMICTXOHNONQKCQVAQQIVIRLEFVYYHBWJWRGUXBKMSGBWQLDPCBJAHNEERGHEWJNJVFOYXHBLCTPUXKXKONTXLFOYNLRCCEYHDYFVNQBGEDSRPSSMFQLVEFZMQZCOIAYMUPSYTTWKVV");

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
    msg.setTimeStamp(0.6759879342142256);
    msg.setSource(4638U);
    msg.setSourceEntity(95U);
    msg.setDestination(22771U);
    msg.setDestinationEntity(229U);
    msg.timeout = 37993U;
    msg.name.assign("MPREFVQYQMJCIAQKSPIMHKMEFMSQDXOLDOREQRNQWNTGYRNPBMTGCCKJFBCUWHFYZHXYXFFJAZEVNNNKQEIWGZMAJCNPUGJRSETLIDAGYOTQKBUYUUYCSMWOJPAOGEIKSTKRHRSZVNOGALJSBVBIHYDXXZDVPZDAAKBCMLZOXICWNPBWTXDPBJTRKEPJCVDELUWQHLBIDOYTRWDPAKRGZHLFXXLYFGAZXNVHBLMFOTWSZF");
    msg.custom.assign("IYAIFEHDVXISSAYCLDEBYBFDWXXDMPMAAHJGTSFVUUOKSCHXSRFEZRCRKIDJQLPTRZQGWSCQTBESHWWDCWHWEPTXJYXQFZZQZZRUHAAGNHFIWYGRTTXMDNNBBEUVCIOUDMFLZMZNLYOKIPHNMFTEMJUZQNZFOJGTNNBKSLIPQPKGUOKWJCBOLQLRVONPPQJCKLRVSTYEMJKIXQY");

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
    msg.setTimeStamp(0.32816068500032924);
    msg.setSource(62093U);
    msg.setSourceEntity(20U);
    msg.setDestination(47285U);
    msg.setDestinationEntity(171U);
    msg.timeout = 38107U;
    msg.name.assign("GCOKPQNHMHSAGONWSKOGRLBPTIAVELXWLTOZZMDBEXIDMRXEHPKBVDENUKXZUGNCKRUTJJPCODLJNQSAUAXKMKBNZWDFTDCMQDXYBHRUUIRNJGHPSAZSPMWQWGLTLSHQXUKIFAFNIQTYQCJYCCEIKHWXFAMQURPCWFOUDEBUPJSZJOVFDNRODGWFLMZHJWCQNKYHFVXASVGZBSGRJVEIYYBYVIRLMYZ");
    msg.custom.assign("SAREKCHRULAHQKOLXABILNXGSMHOAWJOTZNEXFQJXDERHRLQDLLZPHSYPSGRMNIGKVICYFXJPSJVZRSBQYSVUPFR");

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
    msg.setTimeStamp(0.11067696627604173);
    msg.setSource(6875U);
    msg.setSourceEntity(108U);
    msg.setDestination(48782U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.32186651035627634;
    msg.lon = 0.20043180772951197;
    msg.z = 0.5836586205854861;
    msg.z_units = 156U;
    msg.speed = 0.5676835526769414;
    msg.speed_units = 248U;
    msg.start_time = 0.8176961049793753;
    msg.custom.assign("UMRMBWQIVCVAVCVEOBDTSYZUAXMPEMAEDBLFEOAODCJOZHGGDWYUDAQPGFLOKPDJQPWMFZIWZBQYLKYBXBXZNNVMSDWLYHDGQYLWWHPSMVPHCRNNDCGVGTPEGUXAPTNWKCAJSXOUNTZQKFCEG");

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
    msg.setTimeStamp(0.18185291886037414);
    msg.setSource(23451U);
    msg.setSourceEntity(179U);
    msg.setDestination(34568U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.8195470100853135;
    msg.lon = 0.8336772757616745;
    msg.z = 0.6122990708479543;
    msg.z_units = 116U;
    msg.speed = 0.18506989452001976;
    msg.speed_units = 86U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9358U;
    tmp_msg_0.off_x = 0.7919665232686636;
    tmp_msg_0.off_y = 0.8138375808391972;
    tmp_msg_0.off_z = 0.1464849932819351;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7374278377128229;
    msg.custom.assign("SFTGULQMWNDKKNURNZIRYSCVIYKFAAEGISJSRUMXDDOQTKPPCPSZFZLEOJRUQIJPMLQPGMUNTYVWVCWOABTTFZCOAZJFNBHFBEYPMGYKQHVOAGBMEXRKDHENWWLIVZHZJODKDSINXJGSABSGLNWXYWVHEOBUKIVEIVTJCLYQXJILSSKXBIOFWCHFQXRFGURROBQTGUUDLCTWVATLEXVEBYNWLHHOERHDYCCKFCYBARJPGAQ");

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
    msg.setTimeStamp(0.9362710937683011);
    msg.setSource(6648U);
    msg.setSourceEntity(143U);
    msg.setDestination(27795U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.29179005762772015;
    msg.lon = 0.05037228435155927;
    msg.z = 0.7471122315667217;
    msg.z_units = 187U;
    msg.speed = 0.7324241342373631;
    msg.speed_units = 229U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5360U;
    tmp_msg_0.off_x = 0.09122453800332109;
    tmp_msg_0.off_y = 0.7165973851380613;
    tmp_msg_0.off_z = 0.035830357505721167;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9838778101440536;
    msg.custom.assign("DEQQFHFYUUMXNEOFVIMTBABPWFGHZIOYJLKPAUWJVKEZUNYXGFJXIPXZVZ");

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
    msg.setTimeStamp(0.29787308568631643);
    msg.setSource(52657U);
    msg.setSourceEntity(165U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(230U);
    msg.vid = 41225U;
    msg.off_x = 0.028173030375359787;
    msg.off_y = 0.24588315645867242;
    msg.off_z = 0.5875793426457652;

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
    msg.setTimeStamp(0.503698505532221);
    msg.setSource(2204U);
    msg.setSourceEntity(47U);
    msg.setDestination(17545U);
    msg.setDestinationEntity(248U);
    msg.vid = 28282U;
    msg.off_x = 0.524483831953935;
    msg.off_y = 0.20467694124367453;
    msg.off_z = 0.7380082662822692;

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
    msg.setTimeStamp(0.016209152202162236);
    msg.setSource(11016U);
    msg.setSourceEntity(205U);
    msg.setDestination(45331U);
    msg.setDestinationEntity(47U);
    msg.vid = 17460U;
    msg.off_x = 0.8034574355188966;
    msg.off_y = 0.33505811986661116;
    msg.off_z = 0.05055178823469464;

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
    msg.setTimeStamp(0.010920354370248853);
    msg.setSource(27690U);
    msg.setSourceEntity(57U);
    msg.setDestination(55211U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.5482740426202004);
    msg.setSource(27179U);
    msg.setSourceEntity(46U);
    msg.setDestination(28672U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.9423655764499224);
    msg.setSource(46433U);
    msg.setSourceEntity(29U);
    msg.setDestination(47467U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.9592065685390944);
    msg.setSource(23135U);
    msg.setSourceEntity(232U);
    msg.setDestination(41514U);
    msg.setDestinationEntity(149U);
    msg.mid = 56197U;

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
    msg.setTimeStamp(0.3551723905279469);
    msg.setSource(31951U);
    msg.setSourceEntity(24U);
    msg.setDestination(3878U);
    msg.setDestinationEntity(202U);
    msg.mid = 11657U;

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
    msg.setTimeStamp(0.2601867755913764);
    msg.setSource(36821U);
    msg.setSourceEntity(15U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(137U);
    msg.mid = 15087U;

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
    msg.setTimeStamp(0.23559473836043032);
    msg.setSource(3319U);
    msg.setSourceEntity(120U);
    msg.setDestination(22010U);
    msg.setDestinationEntity(48U);
    msg.state = 0U;
    msg.eta = 51847U;
    msg.info.assign("QYRVZSKBJYBHVYABUHLRTKXWPKMFGRUTCQFOQTXQMQXTRLYGCSTUZWODVBIFGESWDANWCYMBJLCUOBIIICNYEPMDDVIHD");

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
    msg.setTimeStamp(0.9498324387503557);
    msg.setSource(62197U);
    msg.setSourceEntity(242U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(79U);
    msg.state = 38U;
    msg.eta = 59205U;
    msg.info.assign("QJYKFAKIFVCAOAQOQMYVEBGHDHASKAY");

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
    msg.setTimeStamp(0.19076953886965442);
    msg.setSource(48930U);
    msg.setSourceEntity(31U);
    msg.setDestination(35197U);
    msg.setDestinationEntity(195U);
    msg.state = 141U;
    msg.eta = 61418U;
    msg.info.assign("DSHZNRSKAWLVWIUYOTKURKXXLPJQAOOZCTHMWXAYRUGNFJEPKGXBHRVNHDEPMNHJNDQVCCSXXLJEC");

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
    msg.setTimeStamp(0.10441802966537261);
    msg.setSource(24807U);
    msg.setSourceEntity(78U);
    msg.setDestination(16930U);
    msg.setDestinationEntity(56U);
    msg.system = 59254U;
    msg.duration = 42635U;
    msg.speed = 0.5116205300433793;
    msg.speed_units = 106U;
    msg.x = 0.7636086550893898;
    msg.y = 0.29855239565503344;
    msg.z = 0.7478972594507167;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.5158222177800985);
    msg.setSource(47668U);
    msg.setSourceEntity(199U);
    msg.setDestination(9443U);
    msg.setDestinationEntity(232U);
    msg.system = 64923U;
    msg.duration = 45998U;
    msg.speed = 0.2745325790278842;
    msg.speed_units = 61U;
    msg.x = 0.515632520313905;
    msg.y = 0.46619933872544106;
    msg.z = 0.11733683382758475;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.5079969766932957);
    msg.setSource(7273U);
    msg.setSourceEntity(122U);
    msg.setDestination(45935U);
    msg.setDestinationEntity(97U);
    msg.system = 35258U;
    msg.duration = 41026U;
    msg.speed = 0.7719480153084084;
    msg.speed_units = 209U;
    msg.x = 0.6366049994635854;
    msg.y = 0.9608635284713316;
    msg.z = 0.7217168628741658;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.22283812169871875);
    msg.setSource(8921U);
    msg.setSourceEntity(73U);
    msg.setDestination(5373U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.3881824814541228;
    msg.lon = 0.5461855492134806;
    msg.speed = 0.025515272565968528;
    msg.speed_units = 128U;
    msg.duration = 1892U;
    msg.sys_a = 26181U;
    msg.sys_b = 43456U;
    msg.move_threshold = 0.6261353592260486;

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
    msg.setTimeStamp(0.5615738643685795);
    msg.setSource(44344U);
    msg.setSourceEntity(96U);
    msg.setDestination(8508U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.17084354725385476;
    msg.lon = 0.7237039853492709;
    msg.speed = 0.33217004578729414;
    msg.speed_units = 174U;
    msg.duration = 55978U;
    msg.sys_a = 41694U;
    msg.sys_b = 56782U;
    msg.move_threshold = 0.042163587698806015;

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
    msg.setTimeStamp(0.4328651048174389);
    msg.setSource(64981U);
    msg.setSourceEntity(217U);
    msg.setDestination(38900U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6088320911279904;
    msg.lon = 0.6407926253581018;
    msg.speed = 0.6906042179498137;
    msg.speed_units = 75U;
    msg.duration = 36802U;
    msg.sys_a = 52508U;
    msg.sys_b = 49239U;
    msg.move_threshold = 0.9520394632654764;

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
    msg.setTimeStamp(0.7646859212682621);
    msg.setSource(12557U);
    msg.setSourceEntity(153U);
    msg.setDestination(53126U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.6886483638942437;
    msg.lon = 0.7677186209700836;
    msg.z = 0.4509985070729876;
    msg.z_units = 211U;
    msg.speed = 0.6145498126121949;
    msg.speed_units = 84U;
    msg.custom.assign("YZWSOAMIGOHIRGJJFMWOQEGOSHQAWVMUMRKMTATFTIQBPZTXXBTDHEVWRBFEVQ");

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
    msg.setTimeStamp(0.23430729201651257);
    msg.setSource(23060U);
    msg.setSourceEntity(104U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.5599014538484279;
    msg.lon = 0.1423416647550947;
    msg.z = 0.3029996558002265;
    msg.z_units = 236U;
    msg.speed = 0.3928611494899378;
    msg.speed_units = 199U;
    msg.custom.assign("XJYOHDXLWGOIBEDNCFZOGLVRXRFCJNEAGLINMQMWZGXANNADTHCZETFHWTDAXLKOTFIJFESTQJAYLC");

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
    msg.setTimeStamp(0.013291831837922152);
    msg.setSource(11388U);
    msg.setSourceEntity(125U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.599680164241802;
    msg.lon = 0.6317073681149384;
    msg.z = 0.49418879005461847;
    msg.z_units = 138U;
    msg.speed = 0.44418496841151156;
    msg.speed_units = 187U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2578643965099945;
    tmp_msg_0.lon = 0.18657063364913817;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UABBNYPRSAGRHQCRZEZXHNJXMVIBLKZRZOGPWRUZMLBIXVOQMYAGXGNNYFUKCCUTPKSNSUFCXOFWFOCSFXZYHKPJREIVZEWQZKMLFDEXBYGRWWMXKLPNIWDOSTJSSVYOHWLEADKOFMQJBIBPGLGPMUENJHFIPTNAGTDLCOVARQHXWCUADVRKEUHTJZPDLAYEDOGPIVMVHBXQHKCYEFUALDYMKFZBQQLSHIQIT");

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
    msg.setTimeStamp(0.6807325177360279);
    msg.setSource(13546U);
    msg.setSourceEntity(122U);
    msg.setDestination(59972U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.11464372379319965;
    msg.lon = 0.8389121408817559;

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
    msg.setTimeStamp(0.951528498604791);
    msg.setSource(38312U);
    msg.setSourceEntity(39U);
    msg.setDestination(46164U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.3039423226754293;
    msg.lon = 0.4365941018010543;

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
    msg.setTimeStamp(0.6710385561310928);
    msg.setSource(27051U);
    msg.setSourceEntity(28U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.6576505739366506;
    msg.lon = 0.11319132794918862;

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
    msg.setTimeStamp(0.4238892164889837);
    msg.setSource(3153U);
    msg.setSourceEntity(225U);
    msg.setDestination(30510U);
    msg.setDestinationEntity(113U);
    msg.timeout = 55555U;
    msg.lat = 0.10611229042666825;
    msg.lon = 0.7181969752231628;
    msg.z = 0.5876236934171337;
    msg.z_units = 139U;
    msg.pitch = 0.27584825540877445;
    msg.amplitude = 0.274401675993475;
    msg.duration = 22402U;
    msg.speed = 0.9973279491764969;
    msg.speed_units = 199U;
    msg.radius = 0.4322403086882124;
    msg.direction = 148U;
    msg.custom.assign("YKWGAXVOBRXFEPYNCDTCGTMXMHZYFDWNPDBJJOV");

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
    msg.setTimeStamp(0.6075248129528679);
    msg.setSource(4569U);
    msg.setSourceEntity(253U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(128U);
    msg.timeout = 12871U;
    msg.lat = 0.39034705693012717;
    msg.lon = 0.9240814223778988;
    msg.z = 0.5772389367038565;
    msg.z_units = 174U;
    msg.pitch = 0.9204701535933274;
    msg.amplitude = 0.28337348968444975;
    msg.duration = 39065U;
    msg.speed = 0.6649130946266956;
    msg.speed_units = 229U;
    msg.radius = 0.733869811905704;
    msg.direction = 184U;
    msg.custom.assign("CFJIEQIOQNQBVXFTZRHIHFQGGPJVDCMRPTTLX");

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
    msg.setTimeStamp(0.07194460685471948);
    msg.setSource(6275U);
    msg.setSourceEntity(17U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(236U);
    msg.timeout = 23433U;
    msg.lat = 0.85422697620066;
    msg.lon = 0.38204917756554513;
    msg.z = 0.3433667488732792;
    msg.z_units = 59U;
    msg.pitch = 0.32264684652404985;
    msg.amplitude = 0.8041008529151825;
    msg.duration = 41278U;
    msg.speed = 0.157294263310492;
    msg.speed_units = 161U;
    msg.radius = 0.038579074768356425;
    msg.direction = 168U;
    msg.custom.assign("JEUXAAJDPNQCGBRGMSQMYT");

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
    msg.setTimeStamp(0.3392853248254064);
    msg.setSource(10530U);
    msg.setSourceEntity(9U);
    msg.setDestination(37256U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("HDGYVDHKQSZISRCYFAPHAGQWCRLFOFXRSFWMKSC");
    msg.reference_frame = 41U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13834U;
    tmp_msg_0.off_x = 0.7721065261642025;
    tmp_msg_0.off_y = 0.4702078137183312;
    tmp_msg_0.off_z = 0.8730998445765978;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RGHCHUKNZUSDCMGZMPEAUICBSRWPDPTUAASTTRYHTAIYJSORWROIQWKYHMNESJFZL");

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
    msg.setTimeStamp(0.29955632211462035);
    msg.setSource(26552U);
    msg.setSourceEntity(23U);
    msg.setDestination(60623U);
    msg.setDestinationEntity(188U);
    msg.formation_name.assign("KHAQPITCHLKITIRTNZAOWCTAJFRJOXMDIQYAVEYGEDRHWYDULGYUHCCYXOBEMPGKVBZZENEXISEXNLJFDHMQTZDWGJNCPKHJRUOZSDYLZXBSXTMWTCFOQRJSPAFQDFQCTWOQVUICNPNMUNEXUKLDUPFRVVBGFWKVLSHHPJQMGFOLQTFSCVMMYGOWYNWABOOBUUCDXZNHRGIGAVK");
    msg.reference_frame = 18U;
    msg.custom.assign("MZGPLGOEKICYOUBHXZIMHWEJMJHUITQFEITEQGLJKNBSGKFQIBNSEBADDFWAAFQJMPDNPCFGUZEWZEXTACCRRABRUOWJFXPKUEZPKZRWBUQNQIGDXTPYHEMHHBLHCVMKOHNXJKJPHFULJXBRCZVCUSWCQSTPIAAGKVIDSMMRNQ");

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
    msg.setTimeStamp(0.6840896529469673);
    msg.setSource(3457U);
    msg.setSourceEntity(114U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("BNPVIGGYWCVEHEEDYQSQMOIKOETAKWALJEGXFUQMQTFTYCRMGSCFILCGZRXSUCQDYSDKVYWVXJZSGMLXIASIVAQFRSSHMPGJLNSPOXODORPVTBYHQXTGBFZP");
    msg.reference_frame = 107U;
    msg.custom.assign("PWTLNOYXZLPUXIMHNKOISZGIBUTQYUT");

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
    msg.setTimeStamp(0.22836105443169996);
    msg.setSource(59915U);
    msg.setSourceEntity(4U);
    msg.setDestination(23633U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("OLLHBGKGKMPTGSVSNKTPGXUWHXINWCKCDAOMESZLPGHZEHVZRBTUKCWXPIBKUGFVACEBAIGLBZOIYHJCJUFPFQEBORQTDENBMLJRIYMHXLYAWVTKWYAPJTCSDALNYSOVEQYDBJTYQXFBDGFTAXYRURUOWELWVMDVJHOYZWSNNQUXVESRETJIQZBGYACMMKUSZNLHHPVTXCDIESODJJUQKQORZMLQFPVFRCSXFNFDIAOZDAWRMRQX");
    msg.formation_name.assign("YHNHCXNJXNFHBFGPDCKMCVXJGQEGHSNUJFDZJFLJHIQKQNNWDKVACUDTBUPWTGORKWV");
    msg.plan_id.assign("RRKJKQVCNGPFMODTSAQJOBDRTSMZFDNXSYWUQWOK");
    msg.description.assign("TRSTIZDCGRQUGCTC");
    msg.leader_speed = 0.9435230554232257;
    msg.leader_bank_lim = 0.5415946942540247;
    msg.pos_sim_err_lim = 0.5677188225820589;
    msg.pos_sim_err_wrn = 0.6309672129838378;
    msg.pos_sim_err_timeout = 45556U;
    msg.converg_max = 0.39186484141158406;
    msg.converg_timeout = 43753U;
    msg.comms_timeout = 47165U;
    msg.turb_lim = 0.846349955433771;
    msg.custom.assign("RJQILLTKFVOAJEDFYOAEYQXMBFVNAWNKAJHNOQKSNFPJEMJURF");

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
    msg.setTimeStamp(0.6576967507792052);
    msg.setSource(29555U);
    msg.setSourceEntity(100U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(111U);
    msg.group_name.assign("HCNDVPJJPYUAEPYDBDDCEACUYQHWMCEQMNQCJWUBHWXAYEMVPHSZHSLOSNSITXYBJXBQVRWLOPCEWLMQGEQEZKKNFIDOKRONFCGXKBRDUDKYHXBBLOTLWVVFAZROBKTGAEPILSBYJKOJJIFUPRUCQFTOPGGIIZYMZLTFEUMFDIWJUTMTATQZPANGVMBXVRKHJSSZCCHIGVSGGZNVSARWMMIHALLFAZNOZX");
    msg.formation_name.assign("NYAWFEPRPQXFPSCIMFUHIJXDXKHRNCKIDVQSBWOIWVBUTGHWAJGRKWPVXYJGGMGZKWYOMXAHUWLRPJIDXEDNBYOAZMFRGOSUMRZBVYYYEQNLKESXSDNTVGJVIPLOCFXQSEWTBALEQFAGOASCQBILEZBCYLIHAOKTEPHSZZPIZMTQJDKEQPDTKBTTUWGHWQFOAMCUFKLHUNPHCUGFNKVCCZJIXFYNM");
    msg.plan_id.assign("LEUSHPJAYGKNXRSBKXJTWJORMHRDPFRZEIFAJIDGNOACGEEKLSNCAY");
    msg.description.assign("OTSUGSPJQCDZNSDMCAJYAGEZTJFILRFMQZOCUALAADVTFURRUGZOGYWSPLJZZNLBKCFQRFYKKPBKCGCRBCNRVSFMPYTDQORJFDLNEENJAQQYZMYBWMWY");
    msg.leader_speed = 0.5335311162227796;
    msg.leader_bank_lim = 0.3492445294564104;
    msg.pos_sim_err_lim = 0.19240521312364356;
    msg.pos_sim_err_wrn = 0.3159971445068741;
    msg.pos_sim_err_timeout = 27470U;
    msg.converg_max = 0.17246986977739398;
    msg.converg_timeout = 19063U;
    msg.comms_timeout = 22502U;
    msg.turb_lim = 0.02511696759005655;
    msg.custom.assign("SHDIVSFNHEKQCNHHTIVMALYZKITTWJYSQNNHVMNVVAPWFVIFDFKXZIRQJFROSCEJNWSYRXNYAEGZWODGGQEPMCYLZJZRJDM");

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
    msg.setTimeStamp(0.866604485432433);
    msg.setSource(52884U);
    msg.setSourceEntity(196U);
    msg.setDestination(48599U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("QNIBARTGYZBOBDEEAFZHZCNHKUWWLNXFGRQQWTFKHDXGLJYYEVCYUXLTGZKLNETQJEOFNATRSBZOQOSEKYACVPABIIFETMCUTOEXWDIPBCKICJYKKRXTHYJMLETMMPVIDJWUVQSISMLLBCMNHVMSHVWZALHRXJ");
    msg.formation_name.assign("TCHUADSBMPRYFQMZMEPVYUIRPKERHZXNSSBXCTCRBDWKJVSGLMUQOYNNROBKWEZRTCZJIXIRSJFDKKNUHZDGDJBCQIPHTHSSFVYNMHTWILKTHQPZRFHWPKXLCWUXKYEN");
    msg.plan_id.assign("OJECFRFDDOQULIGBIEWNPEKXCMPTUPMEFONBYMHTOCAJYGTBIPAPHRKBEOGFNTIDDNSSXQTMGZEOOVUHFSUFQXABSBKTPOGYYZTZXRSXNWFQOJLAPLTTHWDDKQEQYCAYVIVKKGZGWKI");
    msg.description.assign("DAXTLFALVSADJMIUQHDLUIZETTLYNGOBPNCZIJNGUMIKIRHQFWTHEKJYVLQWSCXZFBNDZIFZLXZMAUQSISPWUJGVJODUEOJTMOALQMZYXCJCPCRXSFSFKIARTYWXCAUHZNADXGQBFXTHRWFXKYOVHCVBRNNPLOHEZBKTDVEOURBRCTLKGTHPJOSSFEJPNF");
    msg.leader_speed = 0.7056141387426395;
    msg.leader_bank_lim = 0.7246856037764189;
    msg.pos_sim_err_lim = 0.22403962281031942;
    msg.pos_sim_err_wrn = 0.3287793854515697;
    msg.pos_sim_err_timeout = 28807U;
    msg.converg_max = 0.7083757024740795;
    msg.converg_timeout = 7974U;
    msg.comms_timeout = 14336U;
    msg.turb_lim = 0.8544208520736052;
    msg.custom.assign("IMXKRBUTYFYBGCDNRINNVKEWIAHCDIHLTXJFZNQWXKGECXEHJUYTVOXCEEIFAOPAUCWEZIEWBCAXZRJQERNQVIWOHMYMKAWUSUOJJUOJSXEMDSFCBQYRHHLCKJXPFPMJRNQRWBKUQMSVNTYGQBKAIRLUDVHFAWONPNSNIVZTPLMTGWCTZHLRDFZLWQFJPBAQOMESFZVDPJBPVTOOHOYAXPBTQMVY");

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
    msg.setTimeStamp(0.6667558025532678);
    msg.setSource(22612U);
    msg.setSourceEntity(76U);
    msg.setDestination(36720U);
    msg.setDestinationEntity(173U);
    msg.control_src = 35513U;
    msg.control_ent = 146U;
    msg.timeout = 0.3128865107241624;
    msg.loiter_radius = 0.6189095659145868;
    msg.altitude_interval = 0.005231647970786679;

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
    msg.setTimeStamp(0.00961305547967295);
    msg.setSource(40833U);
    msg.setSourceEntity(15U);
    msg.setDestination(23117U);
    msg.setDestinationEntity(106U);
    msg.control_src = 23944U;
    msg.control_ent = 238U;
    msg.timeout = 0.5954370845095203;
    msg.loiter_radius = 0.13629662728862546;
    msg.altitude_interval = 0.3659754955985194;

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
    msg.setTimeStamp(0.15716918457990736);
    msg.setSource(47856U);
    msg.setSourceEntity(15U);
    msg.setDestination(33238U);
    msg.setDestinationEntity(75U);
    msg.control_src = 28206U;
    msg.control_ent = 72U;
    msg.timeout = 0.21035128742750864;
    msg.loiter_radius = 0.6524320824468455;
    msg.altitude_interval = 0.5998302524137265;

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
    msg.setTimeStamp(0.4749078835222278);
    msg.setSource(20054U);
    msg.setSourceEntity(95U);
    msg.setDestination(20079U);
    msg.setDestinationEntity(9U);
    msg.flags = 214U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5834957344996614;
    tmp_msg_0.speed_units = 117U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.34448091214346177;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6293292219571531;
    msg.lon = 0.1564415796354678;
    msg.radius = 0.6739605205545773;

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
    msg.setTimeStamp(0.6996936025535478);
    msg.setSource(30287U);
    msg.setSourceEntity(160U);
    msg.setDestination(24177U);
    msg.setDestinationEntity(95U);
    msg.flags = 3U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.014746530218386678;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07220594105192968;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3656683084578396;
    msg.lon = 0.7333206278283743;
    msg.radius = 0.14723168610844717;

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
    msg.setTimeStamp(0.6898572721792442);
    msg.setSource(44412U);
    msg.setSourceEntity(253U);
    msg.setDestination(59368U);
    msg.setDestinationEntity(21U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9645677947604748;
    tmp_msg_0.speed_units = 72U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9602187175672517;
    tmp_msg_1.z_units = 51U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5564802960149499;
    msg.lon = 0.6281352393691113;
    msg.radius = 0.5784203099664025;

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
    msg.setTimeStamp(0.6671850937738937);
    msg.setSource(12726U);
    msg.setSourceEntity(41U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(129U);
    msg.control_src = 42776U;
    msg.control_ent = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 68U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5178099747643685;
    tmp_tmp_msg_0_0.speed_units = 125U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3895795265705775;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7444856022872329;
    tmp_msg_0.lon = 0.6705042081266306;
    tmp_msg_0.radius = 0.9801317334289378;
    msg.reference.set(tmp_msg_0);
    msg.state = 234U;
    msg.proximity = 175U;

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
    msg.setTimeStamp(0.4726467305137201);
    msg.setSource(31170U);
    msg.setSourceEntity(252U);
    msg.setDestination(35660U);
    msg.setDestinationEntity(238U);
    msg.control_src = 51807U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 154U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8040883318878504;
    tmp_tmp_msg_0_0.speed_units = 134U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9986062140560299;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8316105338856684;
    tmp_msg_0.lon = 0.09553949306029585;
    tmp_msg_0.radius = 0.30372712354505393;
    msg.reference.set(tmp_msg_0);
    msg.state = 191U;
    msg.proximity = 67U;

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
    msg.setTimeStamp(0.7482994350126557);
    msg.setSource(36989U);
    msg.setSourceEntity(169U);
    msg.setDestination(13700U);
    msg.setDestinationEntity(234U);
    msg.control_src = 51483U;
    msg.control_ent = 130U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 24U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1094765630749277;
    tmp_tmp_msg_0_0.speed_units = 72U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.622226477147284;
    tmp_tmp_msg_0_1.z_units = 94U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7719194481798728;
    tmp_msg_0.lon = 0.8776773428888544;
    tmp_msg_0.radius = 0.7721114570008114;
    msg.reference.set(tmp_msg_0);
    msg.state = 75U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.20358810627487767);
    msg.setSource(17737U);
    msg.setSourceEntity(135U);
    msg.setDestination(31487U);
    msg.setDestinationEntity(85U);
    msg.ax_cmd = 0.9634462191614374;
    msg.ay_cmd = 0.24197254072326435;
    msg.az_cmd = 0.15095766032261382;
    msg.ax_des = 0.9148514289410882;
    msg.ay_des = 0.27172407305083723;
    msg.az_des = 0.8138856956635534;
    msg.virt_err_x = 0.21922000288676202;
    msg.virt_err_y = 0.060517342024817844;
    msg.virt_err_z = 0.22810332865628136;
    msg.surf_fdbk_x = 0.6773832961903216;
    msg.surf_fdbk_y = 0.7454887515697484;
    msg.surf_fdbk_z = 0.5335755568225098;
    msg.surf_unkn_x = 0.9135033389862671;
    msg.surf_unkn_y = 0.27402094505932906;
    msg.surf_unkn_z = 0.5893935306884439;
    msg.ss_x = 0.8960359449032635;
    msg.ss_y = 0.9749842911449764;
    msg.ss_z = 0.128019176881626;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LFUBQOVLHGOEKZWHDCUIAZ");
    tmp_msg_0.dist = 0.5675463100646164;
    tmp_msg_0.err = 0.5531849023836909;
    tmp_msg_0.ctrl_imp = 0.3003540577527175;
    tmp_msg_0.rel_dir_x = 0.6907865780690052;
    tmp_msg_0.rel_dir_y = 0.7908508910501495;
    tmp_msg_0.rel_dir_z = 0.847994672790103;
    tmp_msg_0.err_x = 0.2734664269345285;
    tmp_msg_0.err_y = 0.12101540976977543;
    tmp_msg_0.err_z = 0.015244948316645579;
    tmp_msg_0.rf_err_x = 0.09524526237652364;
    tmp_msg_0.rf_err_y = 0.1725705279698958;
    tmp_msg_0.rf_err_z = 0.6007240496579347;
    tmp_msg_0.rf_err_vx = 0.6207717403360941;
    tmp_msg_0.rf_err_vy = 0.5832858882200123;
    tmp_msg_0.rf_err_vz = 0.4163110627111011;
    tmp_msg_0.ss_x = 0.9341760287038492;
    tmp_msg_0.ss_y = 0.6409991646073235;
    tmp_msg_0.ss_z = 0.5302945451694585;
    tmp_msg_0.virt_err_x = 0.13396694751933746;
    tmp_msg_0.virt_err_y = 0.3476079504937425;
    tmp_msg_0.virt_err_z = 0.5053986675224985;
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
    msg.setTimeStamp(0.5057615746613047);
    msg.setSource(51646U);
    msg.setSourceEntity(204U);
    msg.setDestination(8585U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.9015094558804361;
    msg.ay_cmd = 0.42902446846920805;
    msg.az_cmd = 0.36530511484785644;
    msg.ax_des = 0.34660703493695966;
    msg.ay_des = 0.354385793484869;
    msg.az_des = 0.855980805115901;
    msg.virt_err_x = 0.7123558444290797;
    msg.virt_err_y = 0.11181689422159946;
    msg.virt_err_z = 0.8264510029205577;
    msg.surf_fdbk_x = 0.8414384970626135;
    msg.surf_fdbk_y = 0.7337990281927039;
    msg.surf_fdbk_z = 0.5610859496170376;
    msg.surf_unkn_x = 0.48408640940021175;
    msg.surf_unkn_y = 0.7732376685262227;
    msg.surf_unkn_z = 0.03190275102472839;
    msg.ss_x = 0.38806965924071835;
    msg.ss_y = 0.4373801766060059;
    msg.ss_z = 0.8816903007083664;

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
    msg.setTimeStamp(0.5883062145373603);
    msg.setSource(41153U);
    msg.setSourceEntity(152U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(28U);
    msg.ax_cmd = 0.9154736876989762;
    msg.ay_cmd = 0.729111491700879;
    msg.az_cmd = 0.5884989465581916;
    msg.ax_des = 0.01603241683346268;
    msg.ay_des = 0.7973949527970973;
    msg.az_des = 0.9204858988804939;
    msg.virt_err_x = 0.8689179766387933;
    msg.virt_err_y = 0.404956903857735;
    msg.virt_err_z = 0.41242319212055056;
    msg.surf_fdbk_x = 0.31855395994494673;
    msg.surf_fdbk_y = 0.598233636733977;
    msg.surf_fdbk_z = 0.19252105885051307;
    msg.surf_unkn_x = 0.9866416120399487;
    msg.surf_unkn_y = 0.21009042078799522;
    msg.surf_unkn_z = 0.18533658730105806;
    msg.ss_x = 0.4088774732145837;
    msg.ss_y = 0.5131796553030824;
    msg.ss_z = 0.4659595511516301;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GMJJISNOUVGOGOWYYNBDUACWRTMIXMUYCRNSBMGAJOFLCOWNHEJQYXFTPBQBWLFCDUIMKCNOPTSMZHEGOXPCHXADKHOPAYCSEDTUXHQWQQYVRQNZA");
    tmp_msg_0.dist = 0.5670488678681814;
    tmp_msg_0.err = 0.3531524855174837;
    tmp_msg_0.ctrl_imp = 0.4830758489447502;
    tmp_msg_0.rel_dir_x = 0.3440734453981529;
    tmp_msg_0.rel_dir_y = 0.7753944608393747;
    tmp_msg_0.rel_dir_z = 0.8100849522710342;
    tmp_msg_0.err_x = 0.0355016501405474;
    tmp_msg_0.err_y = 0.3467069021443975;
    tmp_msg_0.err_z = 0.3933177081266154;
    tmp_msg_0.rf_err_x = 0.9718255648275185;
    tmp_msg_0.rf_err_y = 0.6797361166421734;
    tmp_msg_0.rf_err_z = 0.9349834491235087;
    tmp_msg_0.rf_err_vx = 0.9180489732403924;
    tmp_msg_0.rf_err_vy = 0.21022103731034492;
    tmp_msg_0.rf_err_vz = 0.7693008858180701;
    tmp_msg_0.ss_x = 0.314263440636219;
    tmp_msg_0.ss_y = 0.2521227768674741;
    tmp_msg_0.ss_z = 0.27082436339743965;
    tmp_msg_0.virt_err_x = 0.7433377983501114;
    tmp_msg_0.virt_err_y = 0.6337766034872803;
    tmp_msg_0.virt_err_z = 0.592023078996996;
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
    msg.setTimeStamp(0.31905033184663767);
    msg.setSource(339U);
    msg.setSourceEntity(104U);
    msg.setDestination(39644U);
    msg.setDestinationEntity(0U);
    msg.s_id.assign("AWXZUZJMUPADITYTLAGRRDLJYDORUEZIYNVDBKYXLCLADQMTTAPBCPUHAHLSKHCDZBFKSUJOWEWQQKJXITRXFHBPGMYHMQYLTCEJMJUTBWAPBFIXWKEP");
    msg.dist = 0.45049653999222794;
    msg.err = 0.2558233635272652;
    msg.ctrl_imp = 0.38413515321965863;
    msg.rel_dir_x = 0.6029200657945119;
    msg.rel_dir_y = 0.5113540731236017;
    msg.rel_dir_z = 0.2000795461540832;
    msg.err_x = 0.9552331489246405;
    msg.err_y = 0.005169146411794778;
    msg.err_z = 0.9724572566792896;
    msg.rf_err_x = 0.3444796398261194;
    msg.rf_err_y = 0.10833153003931995;
    msg.rf_err_z = 0.9177566486975681;
    msg.rf_err_vx = 0.9967357414305746;
    msg.rf_err_vy = 0.23926435111667288;
    msg.rf_err_vz = 0.5855224410511412;
    msg.ss_x = 0.9843353424067874;
    msg.ss_y = 0.15972377226333678;
    msg.ss_z = 0.7987560943208344;
    msg.virt_err_x = 0.7452997124437125;
    msg.virt_err_y = 0.6375603912366259;
    msg.virt_err_z = 0.06574521882443829;

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
    msg.setTimeStamp(0.7608710868139218);
    msg.setSource(10336U);
    msg.setSourceEntity(240U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(226U);
    msg.s_id.assign("KCHAVHYTBSPZRHTMZZVGLOJQKCRBPFDANJEYNTSWOXXRZBLFMUCQRRZIDYFUYFPGDQSTYVTXHSYIGMOYRLDKVJZJEVNULPH");
    msg.dist = 0.019675683110400244;
    msg.err = 0.04998072113051377;
    msg.ctrl_imp = 0.5419572313838322;
    msg.rel_dir_x = 0.38683777857941926;
    msg.rel_dir_y = 0.5044153323281262;
    msg.rel_dir_z = 0.3901961318267544;
    msg.err_x = 0.40726702971972617;
    msg.err_y = 0.6386986054791927;
    msg.err_z = 0.8953947289746531;
    msg.rf_err_x = 0.6665168529350081;
    msg.rf_err_y = 0.8518497157843538;
    msg.rf_err_z = 0.8397648128100954;
    msg.rf_err_vx = 0.5465667688235587;
    msg.rf_err_vy = 0.018560058191456674;
    msg.rf_err_vz = 0.025447499204591217;
    msg.ss_x = 0.3667904110509891;
    msg.ss_y = 0.4193548829745666;
    msg.ss_z = 0.7294961669208907;
    msg.virt_err_x = 0.2753109734481356;
    msg.virt_err_y = 0.03352554721505818;
    msg.virt_err_z = 0.3796355396464498;

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
    msg.setTimeStamp(0.9357646541473712);
    msg.setSource(41191U);
    msg.setSourceEntity(246U);
    msg.setDestination(21370U);
    msg.setDestinationEntity(184U);
    msg.s_id.assign("PCFTJCQXNAZORVZVLVJAEQZMAHDGUTJFGUNSTSROIYUJEJYTDNRNONIKOPHEZLXPBZPXHDAAKHSLIQIBABUUDCAZKXVQTJVOTOLBSKFAJYUTSFWODMMWKLVPCLVTWCRSTMFXFGBRHXOWPZ");
    msg.dist = 0.3497698830357495;
    msg.err = 0.8544344225257414;
    msg.ctrl_imp = 0.5291611611497414;
    msg.rel_dir_x = 0.4350211188631846;
    msg.rel_dir_y = 0.5043080982077727;
    msg.rel_dir_z = 0.006900084704247855;
    msg.err_x = 0.21660773233827746;
    msg.err_y = 0.9097914651318205;
    msg.err_z = 0.8355006416148367;
    msg.rf_err_x = 0.7470732061718905;
    msg.rf_err_y = 0.9881280865311189;
    msg.rf_err_z = 0.23558028578128554;
    msg.rf_err_vx = 0.2317788894058903;
    msg.rf_err_vy = 0.13794761701261304;
    msg.rf_err_vz = 0.07153999898987395;
    msg.ss_x = 0.7835553765236617;
    msg.ss_y = 0.14667010195856744;
    msg.ss_z = 0.16662989980777843;
    msg.virt_err_x = 0.2046752952588473;
    msg.virt_err_y = 0.8730055623197998;
    msg.virt_err_z = 0.40761168258977964;

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
    msg.setTimeStamp(0.9984352162397888);
    msg.setSource(23768U);
    msg.setSourceEntity(67U);
    msg.setDestination(14854U);
    msg.setDestinationEntity(32U);
    msg.timeout = 63182U;
    msg.rpm = 0.9272547365898827;
    msg.direction = 115U;
    msg.custom.assign("DKGNHHXNBPCPWRZHFRBONJVNUIQEEOZUWIGJHMNTSGBFBUDLRTQLKPEOIMSOAXBRFVJFHRKMXSVZSEXQEUALQFUGAQIYMNYBPOTCABOAEHTXDYFDVAZFLSYVWDW");

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
    msg.setTimeStamp(0.35881155887759153);
    msg.setSource(62473U);
    msg.setSourceEntity(253U);
    msg.setDestination(53219U);
    msg.setDestinationEntity(194U);
    msg.timeout = 47712U;
    msg.rpm = 0.3220480892174278;
    msg.direction = 110U;
    msg.custom.assign("GNTPTRMNPWHKIFCCVZJJCCAMOZPAIYBYFQHTBWPWEEVORRPNCAGWOTCHVUMFMFLQLPIVPCXXEXOFQKBVVUJJWVZDTYWQVNDLKDLTEHHKJZCYQLXDBAHMVOGSYGLAJKXSQMUOFBAOMYHIWSCGBNGRZRBQGKWFBFFDIUXZDIDDZEZIOARUGSTA");

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
    msg.setTimeStamp(0.9852133689374786);
    msg.setSource(43632U);
    msg.setSourceEntity(130U);
    msg.setDestination(8184U);
    msg.setDestinationEntity(122U);
    msg.timeout = 55166U;
    msg.rpm = 0.5281121746435554;
    msg.direction = 245U;
    msg.custom.assign("YAIWBIFQDJBAEIRBBTVZMISPHFCODSNLBSUYRXARDYCMTUOPCZPUPG");

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
    msg.setTimeStamp(0.5307965064618967);
    msg.setSource(56111U);
    msg.setSourceEntity(85U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("VPQDNVENYPAYMBXLMXTFOAPOGSRM");
    msg.type = 222U;
    msg.op = 73U;
    msg.group_name.assign("XVFLNETQDSJQMROVHCJRNFOCZYX");
    msg.plan_id.assign("ZDQSHLBRIFRKGVWPQHENXJYGVTZHOOHCRNFLSPJDOMLFEUDMFUORERLZHQDPZHAARIUIBUBZYVPWSOQVEHBMKCBCWALANAWWQYYTN");
    msg.description.assign("CLPGAGJRVADPSVRRDCXGSMJVHCBWBEWSQFUXMUSOYHSYATGBQSECRBONFQXKQEWZMWLICODMMVZZKQKKSFDMTHQHPCJGKJIDMENHBNPWXUOTGZLUXWKFOVBWIORKAOTEQULTPAGONJPFVRUXCJLSHAYMVELFBQWKOWSLUINNPJQUFTOEQXZFYIEYDLKHZFWVHCYUAZEFNNDRHRYTIZVYAEPTVRZCDJPKGMXCIGNIGMZHSBRPJLYAYTTXB");
    msg.reference_frame = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53719U;
    tmp_msg_0.off_x = 0.7105089447459788;
    tmp_msg_0.off_y = 0.10286640182565865;
    tmp_msg_0.off_z = 0.8658747008736951;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6237883730089883;
    msg.leader_speed_min = 0.48296526186048416;
    msg.leader_speed_max = 0.858917982936494;
    msg.leader_alt_min = 0.20867266173049548;
    msg.leader_alt_max = 0.9418361387054937;
    msg.pos_sim_err_lim = 0.06825971364958316;
    msg.pos_sim_err_wrn = 0.8703548935719656;
    msg.pos_sim_err_timeout = 52707U;
    msg.converg_max = 0.6674577025774672;
    msg.converg_timeout = 53831U;
    msg.comms_timeout = 37334U;
    msg.turb_lim = 0.0840132924659599;
    msg.custom.assign("NXNKUAIBVAHNKU");

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
    msg.setTimeStamp(0.961829838486481);
    msg.setSource(31237U);
    msg.setSourceEntity(103U);
    msg.setDestination(6836U);
    msg.setDestinationEntity(181U);
    msg.formation_name.assign("DHXTASRHKRCMQSSOESYECGJCMZPWFAUBJRTVMKNVNKTUQJGRXGHVWXKURWBVNUIXZYEPPRICTIPSYVCYMHPXBVKOIOIHWENKAXZQJDTKLGKGTPOZBWCYXNBSPUL");
    msg.type = 104U;
    msg.op = 83U;
    msg.group_name.assign("HBPLUDQSSYAHODYHABXUK");
    msg.plan_id.assign("QKTUFWLOOIEMYJBAVKRATGVAIGVTMJZMUHHWJBLUWHMRAFDWIWNQEQBPDXMRPYNOGKVFCZWEUGRQPJSJFGMENLHZYWOXHCFMTAPIWUYZQTOPVCVSDUVBLBNLXYYEOFKQXFCCEKGTTXYOVURYHIUNZCSBUYRDSKXLVJKLOSFIEYECFRNPRSUQJAXJXWDXHAPCIQLNDKDGHNBTMLSXMPPGIGEHSSZKZ");
    msg.description.assign("VJFKBXANZPNDQMYPEAMHDJYKLEJXIEPYBJPLVMKEVPOPEQHJHDZAJTJMQGDYFHWCXDGYNVEGRAJMETAHIXVRFLSSGRTFWACCFUBOABUXFZHPRKAKRPKIJZFHRQEUIUYELSBGSSSVICZPNOZSNG");
    msg.reference_frame = 226U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6295U;
    tmp_msg_0.off_x = 0.4757101266783562;
    tmp_msg_0.off_y = 0.8709487669447017;
    tmp_msg_0.off_z = 0.7292403791206058;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6916860448562954;
    msg.leader_speed_min = 0.07408703788964721;
    msg.leader_speed_max = 0.6355475557209213;
    msg.leader_alt_min = 0.011824169921330618;
    msg.leader_alt_max = 0.17907510408932348;
    msg.pos_sim_err_lim = 0.34436388292211484;
    msg.pos_sim_err_wrn = 0.6782023685158038;
    msg.pos_sim_err_timeout = 30816U;
    msg.converg_max = 0.8185271007681413;
    msg.converg_timeout = 28481U;
    msg.comms_timeout = 52152U;
    msg.turb_lim = 0.21692467007803373;
    msg.custom.assign("KGORLTKSLRCCWOIVHSWLFNBXWIJLGTJYVFVFGPJQFMNUWPXHNRIWIFUBCVDZSQFXHKPUONESESIHBDAMBXPZVKQHFQJPPZMOVTLIYJNUYZRVKGDIDFAHEJYAHKWXZUAVZNSZADANYLTEMIGIDBPRQGLBPCHTQTJUCUAMYWAEOEOMCNZNCTKGYOLJEABZGTYS");

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
    msg.setTimeStamp(0.008092525557307995);
    msg.setSource(43912U);
    msg.setSourceEntity(76U);
    msg.setDestination(46013U);
    msg.setDestinationEntity(125U);
    msg.formation_name.assign("YCKRHDUZHXSZFGXCREAXAGVIXKKBVIKDLBUBTJQVFQNLFYPNDMYESUGMIVDWTFHSLJFAOITEGBEJEZFDBLKSVYNCTECBVGCJNPKKGLSRPXODPSJLWWZCGKSQOZMPQMRQYMTYHHEKNWRGKTHHIUYGQVRMLXOWXYPIMBUMOWGYQ");
    msg.type = 80U;
    msg.op = 18U;
    msg.group_name.assign("PAZXFLALCHKIYCTQJETKDRCFYRVZMRAWMVYQQDOQUTGVVJJERROXQKZSMLGFRVLCXHPPTQEFUTFUECIRSNZNLUGQNNDSZOCSVXJHEHSZGJWEHLZZXXBLVMGYKOEIMJQAIYVWMVCBORDJWUNCAWFC");
    msg.plan_id.assign("HVUKNYMWMVDSWTUJRHJKOTZQWGNYLLIRFYQQMHWBQPRNTEHCLYGPTYBZZPIYHIMINKIDYCOAMWUXCVGEXGUEZSVXEOEAXNRMDSIVHZUFGSXQCGBHVJMFTFLCVDOBBUSKLZWLFLPIUIOKKPPKCHUZSXCJWCVBDOWQJXEQAEJCRXBOJIKERHTQFHBFJOGAYDKATOOJBBGFXSAZXDGJYDAFRSQSRDVZRUFNLTACYTZKTQWNV");
    msg.description.assign("HTXXCUSVNIOOXIBURMKFPWQDVASUPIGMLTO");
    msg.reference_frame = 30U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28231U;
    tmp_msg_0.off_x = 0.3952778451936003;
    tmp_msg_0.off_y = 0.2905677559270572;
    tmp_msg_0.off_z = 0.8312654332537556;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4864621151852361;
    msg.leader_speed_min = 0.10704123305344793;
    msg.leader_speed_max = 0.9341877350945127;
    msg.leader_alt_min = 0.6952150238403576;
    msg.leader_alt_max = 0.45716333727780845;
    msg.pos_sim_err_lim = 0.04801078658773239;
    msg.pos_sim_err_wrn = 0.775972139647246;
    msg.pos_sim_err_timeout = 24256U;
    msg.converg_max = 0.9365888029646945;
    msg.converg_timeout = 24305U;
    msg.comms_timeout = 64627U;
    msg.turb_lim = 0.8757935082447307;
    msg.custom.assign("PLRGRDEHIIPRKDJUYNQUFJNQBGHCZPCMGDMRAUAITDERUSWLYOOWDBVEWFRCWLFYVCXMHZAXODQTKUOJQHNTLYSVSNGTNRISKHPVWKJLKEMLMPVVGGHEMOPUMNTYSUNCQQJMRJQSDQDCFAHSSBKAOEWWAPGIODUYYQIBZPZRJLAZXEDUFFZOB");

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
    msg.setTimeStamp(0.529150560786393);
    msg.setSource(19886U);
    msg.setSourceEntity(96U);
    msg.setDestination(20993U);
    msg.setDestinationEntity(181U);
    msg.timeout = 64147U;
    msg.lat = 0.4053905240216731;
    msg.lon = 0.008467390842665234;
    msg.z = 0.009278659995021088;
    msg.z_units = 166U;
    msg.speed = 0.2424405340148722;
    msg.speed_units = 107U;
    msg.custom.assign("TWARLQMFCKMMJMBBBBHYQZZCCVDWRGLYVSRZYDBEFWEXHTKFUOCNTAKEZZWUMLKJQVLDALDJYOPRQOMUHWPDHSSEXUZGGIDVYXEVDBSAZAEXJFRPCXJLRZZSLLCYTPGKIHUVMTKKQVBEONFSABTPRKSNBNSNXANPGYIFQYYHVPJDOCTGOKPEIQVOIWHDLWXICCPIECRGOXTXMRJXEHNUKTAATWUFGHUNDAMGVISOGJUW");

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
    msg.setTimeStamp(0.8005340208288196);
    msg.setSource(37823U);
    msg.setSourceEntity(196U);
    msg.setDestination(55676U);
    msg.setDestinationEntity(25U);
    msg.timeout = 28714U;
    msg.lat = 0.12892504087832912;
    msg.lon = 0.8444137534916994;
    msg.z = 0.953145869939741;
    msg.z_units = 159U;
    msg.speed = 0.9283382483560727;
    msg.speed_units = 67U;
    msg.custom.assign("SBXTVKWWJGKPIFEQNCPWZCYHUHLFOTCXTUDDPILEWEYKMMDLBHGGUONRNISJCRIZZSZZAPIETSDNIGBTOQSHXLGMPOFYVMRTUASRWHKNWUUJYNXFJPAJSAWNHFPIFFRAVCKVGEOCKNJMRPLBJYIRHUKVFEAOYMZSRCQDBOGBAXXVTDLALFEOYSIYVBQPUZXNWJDQLBIMWXAUGQGKOECWZGRQRDDEMLHCA");

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
    msg.setTimeStamp(0.4414177267847883);
    msg.setSource(25964U);
    msg.setSourceEntity(133U);
    msg.setDestination(39208U);
    msg.setDestinationEntity(83U);
    msg.timeout = 50912U;
    msg.lat = 0.15890552132165103;
    msg.lon = 0.6655163529676833;
    msg.z = 0.0810362811358113;
    msg.z_units = 59U;
    msg.speed = 0.5892656200527495;
    msg.speed_units = 233U;
    msg.custom.assign("IDCSZDKCBYEOJEUDMKFPOLJEWVFHWCUNHPXONHXDKKWGESGPFBWANHVZDRBENQHSYMDIRPNXX");

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
    msg.setTimeStamp(0.4763125929144326);
    msg.setSource(9434U);
    msg.setSourceEntity(13U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(180U);
    msg.timeout = 7351U;
    msg.lat = 0.1505833059881243;
    msg.lon = 0.35301202508879226;
    msg.z = 0.7928517861408652;
    msg.z_units = 1U;
    msg.speed = 0.748630881954542;
    msg.speed_units = 155U;
    msg.custom.assign("FBQRCUICYUMQQJOFDNXWSOAPUHCROOTXKKTRHVJIUNAMQYFOKUTBJUREZQZTYR");

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
    msg.setTimeStamp(0.8006243892265396);
    msg.setSource(47849U);
    msg.setSourceEntity(95U);
    msg.setDestination(2050U);
    msg.setDestinationEntity(226U);
    msg.timeout = 44298U;
    msg.lat = 0.5018184610602263;
    msg.lon = 0.1268680089733174;
    msg.z = 0.16228314433307223;
    msg.z_units = 14U;
    msg.speed = 0.9524957981861116;
    msg.speed_units = 42U;
    msg.custom.assign("MUULRTVNRBXOQKAFXRYUOSEXKPQFYCYXTRVJIBLBCVPRAOBYYENIVAXDXJUOAHWVJPHNGNFKHERMSBEAORDURISFYVSRCZKFVJLTGZTBNYOFMDOQZQJIQTEGSEQQTWCNLNNXVPGLBHZLWLLZDFCACUMWKZHDVZEHAKHWWRZHMAPFFEZDKHPGMAECBDGUEDCMIINTCYITOGJIVWPTJWSPZUSPMXSJLTLSIBXDIPSGMKFUHYGQNWOJBXUQKK");

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
    msg.setTimeStamp(0.20288226118396002);
    msg.setSource(32386U);
    msg.setSourceEntity(18U);
    msg.setDestination(25580U);
    msg.setDestinationEntity(184U);
    msg.timeout = 55458U;
    msg.lat = 0.11710190510291751;
    msg.lon = 0.9017611664963657;
    msg.z = 0.19748751971480594;
    msg.z_units = 125U;
    msg.speed = 0.7496840750960337;
    msg.speed_units = 247U;
    msg.custom.assign("RKXCEBECXLDYMFCELCSYIUSMNFWHSGHBSCFAIRWFNCTJAUFQOXYSJUXUXKGJGNVVEQGEVULBZDEZNTXWMSZCYWSATKHWHPJRWFHTVFFADWPXPTRDJDNLUDMYQTGYEPZHORLYAWVRQPKRMESNJMGFZMWPOZLDSPMZAIZLBBCUOBUQKCUIBRDPSACLDIKQNYQVBAXJTKNHKVOGOLMINIJOEIBGRWAUNGXJ");

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
    msg.setTimeStamp(0.37640309925975624);
    msg.setSource(32057U);
    msg.setSourceEntity(125U);
    msg.setDestination(52720U);
    msg.setDestinationEntity(252U);
    msg.arrival_time = 0.3886568166143244;
    msg.lat = 0.26047804169841315;
    msg.lon = 0.8863950907054887;
    msg.z = 0.2664717682484611;
    msg.z_units = 246U;
    msg.travel_z = 0.8090904577483734;
    msg.travel_z_units = 197U;
    msg.delayed = 48U;

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
    msg.setTimeStamp(0.9791354731801203);
    msg.setSource(24313U);
    msg.setSourceEntity(182U);
    msg.setDestination(35875U);
    msg.setDestinationEntity(134U);
    msg.arrival_time = 0.5803323928290823;
    msg.lat = 0.9127875022735742;
    msg.lon = 0.5172068546113794;
    msg.z = 0.8632806921088332;
    msg.z_units = 112U;
    msg.travel_z = 0.651938349015611;
    msg.travel_z_units = 231U;
    msg.delayed = 20U;

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
    msg.setTimeStamp(0.9644585218519102);
    msg.setSource(32543U);
    msg.setSourceEntity(162U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(93U);
    msg.arrival_time = 0.5904843861930964;
    msg.lat = 0.9120328475641125;
    msg.lon = 0.6143907796041118;
    msg.z = 0.20528077783513676;
    msg.z_units = 236U;
    msg.travel_z = 0.33448322075449943;
    msg.travel_z_units = 48U;
    msg.delayed = 184U;

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
    msg.setTimeStamp(0.7316917506654608);
    msg.setSource(38181U);
    msg.setSourceEntity(240U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.8759415008636394;
    msg.lon = 0.15682017819799932;
    msg.z = 0.8664826338000026;
    msg.z_units = 151U;
    msg.speed = 0.1074459552678908;
    msg.speed_units = 178U;
    msg.bearing = 0.4199367954216071;
    msg.cross_angle = 0.4216023054299315;
    msg.width = 0.9681051722149963;
    msg.length = 0.4480529790241248;
    msg.coff = 110U;
    msg.angaperture = 0.5395999708662337;
    msg.range = 7825U;
    msg.overlap = 161U;
    msg.flags = 217U;
    msg.custom.assign("LIHGRDZWRXHKYIARCWNTJXMNEQJMMNGMOMTEODLQRYUMWKLMCZOHGOIEFNGWIVJBXDSCVYFPQDLREQSUVKKLNVPSBKYEPYKCDUHOAOSMNCOAFAWQWQLVBIXKICQFFSXFIUTGLCC");

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
    msg.setTimeStamp(0.4275873009203486);
    msg.setSource(46993U);
    msg.setSourceEntity(28U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.6153091731715934;
    msg.lon = 0.6181694501930838;
    msg.z = 0.7723136917910207;
    msg.z_units = 26U;
    msg.speed = 0.5744133449806424;
    msg.speed_units = 1U;
    msg.bearing = 0.9624794836256829;
    msg.cross_angle = 0.6857491930347557;
    msg.width = 0.0870242997652283;
    msg.length = 0.029215020402580727;
    msg.coff = 26U;
    msg.angaperture = 0.02926555126051844;
    msg.range = 43746U;
    msg.overlap = 4U;
    msg.flags = 50U;
    msg.custom.assign("RUPBTPFVJARZMJBDWWTIDPYHOBFRXGYXTXXSZTTAAAEFILNRGBLTCWPMLUEHHMCAAKWVMOKXURSDCJNYJUFKJZGIEGNTPLKVVJMAMUYUVPIHFXGZEIIQXQFCZDNVKROBBFXWEXETILJUOSGKRAWPKANWMVUGWDIRFELVJLEJCFSLEZYRXSDLNCPNOQGZHQTHSCNHDBMUSSGAOPKMGBCKBQ");

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
    msg.setTimeStamp(0.7221196796368988);
    msg.setSource(43611U);
    msg.setSourceEntity(125U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.9351592295747958;
    msg.lon = 0.09787379166792187;
    msg.z = 0.048412064497324825;
    msg.z_units = 101U;
    msg.speed = 0.5170840777166825;
    msg.speed_units = 185U;
    msg.bearing = 0.3556281873059659;
    msg.cross_angle = 0.019643451357340025;
    msg.width = 0.5561145199829662;
    msg.length = 0.9223429244279681;
    msg.coff = 185U;
    msg.angaperture = 0.20423047272957462;
    msg.range = 65219U;
    msg.overlap = 75U;
    msg.flags = 101U;
    msg.custom.assign("ULJMYNXMCHZELIPZVYRKJQYXZDTFIJPFVZSRLVNCSKKZWGGMHTSPOYHMNSQCHQQFJNEYTRBMBEXVARXZDLGHAOUECXRYBVVWVHLAERCPTHALKBDIHULEVCDJYDQFWGDKNUMSRABOOGBADYMEXBKNGDQIXRQUZCOIEDOWZSEBSSJHBTTTGPYVZOILINKBMWFTUKHFUNAPIESPNCKSJOQZUIYTWAJLFVCGJDGLFXFUQTRQOXXGNMAACJWOPUKWIW");

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
    msg.setTimeStamp(0.33115524178401234);
    msg.setSource(61987U);
    msg.setSourceEntity(213U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(87U);
    msg.timeout = 50203U;
    msg.lat = 0.5896114687205761;
    msg.lon = 0.11496287195626176;
    msg.z = 0.42182006976968656;
    msg.z_units = 218U;
    msg.speed = 0.8960029832436908;
    msg.speed_units = 5U;
    msg.syringe0 = 81U;
    msg.syringe1 = 227U;
    msg.syringe2 = 145U;
    msg.custom.assign("HIIGBOMPCPZWBCTLWZUYRFWXERPGBJMCLUVKHQRMXWNHZFSQLDXCGADEVBYLAMNENNBWHIQSKUKMZSRDRMEXIUWZNZAYSKAGDLPTUVQBLIDELHSDPJDCIRCEOZWRBUFANFJSYJIREBGJYWQKEBTXPJOTOVAYMXKHHVGCSSPJCLYASGACMHUXXNFHEGFMCADTVOFTMTSBDYVETQKUDJWYIXTGRPXWZOFUN");

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
    msg.setTimeStamp(0.1140001325205574);
    msg.setSource(29416U);
    msg.setSourceEntity(175U);
    msg.setDestination(1105U);
    msg.setDestinationEntity(6U);
    msg.timeout = 62830U;
    msg.lat = 0.1597093779095834;
    msg.lon = 0.8905076118464677;
    msg.z = 0.496734062681928;
    msg.z_units = 0U;
    msg.speed = 0.3572443232114101;
    msg.speed_units = 61U;
    msg.syringe0 = 201U;
    msg.syringe1 = 114U;
    msg.syringe2 = 25U;
    msg.custom.assign("ERGITDWLYLKRQIKXBTSZARXNTCXBACKHBSJZGSBUSORPXSFHZGJGKOATUWFGAFKJECTSXXFYCPKITFWGIEOHOFOWWJPIDUYVEDYXVUMPLLNUCWKDDJMGMWHXIYGDJMAOUSEHUAHRVIVRMAQQDWFZVZQLQDESMMJJFMYCNHCYBOFWZKRALXUWTVNBLVR");

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
    msg.setTimeStamp(0.39149364406074016);
    msg.setSource(43705U);
    msg.setSourceEntity(91U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(21U);
    msg.timeout = 56234U;
    msg.lat = 0.5808618557673367;
    msg.lon = 0.20115724194882545;
    msg.z = 0.09532425107579467;
    msg.z_units = 39U;
    msg.speed = 0.1576111945774541;
    msg.speed_units = 67U;
    msg.syringe0 = 65U;
    msg.syringe1 = 160U;
    msg.syringe2 = 188U;
    msg.custom.assign("HTPNBPXJYIMMYXZLUHVSRKPMACGII");

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
    msg.setTimeStamp(0.12823713532461722);
    msg.setSource(30833U);
    msg.setSourceEntity(147U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.04596376091695109);
    msg.setSource(47386U);
    msg.setSourceEntity(225U);
    msg.setDestination(37759U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.9737931886751164);
    msg.setSource(45192U);
    msg.setSourceEntity(240U);
    msg.setDestination(14449U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.06902026834786179);
    msg.setSource(355U);
    msg.setSourceEntity(123U);
    msg.setDestination(17758U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.38655569260538836;
    msg.lon = 0.3160968359857449;
    msg.z = 0.361512964450209;
    msg.z_units = 95U;
    msg.speed = 0.7064906677024514;
    msg.speed_units = 115U;
    msg.takeoff_pitch = 0.6829923786671156;
    msg.custom.assign("LXAJACCFEUOSEKYOAGOBQEPTAMIYEHBCXISJXNRMTPKLAPITCGKSHWORVZBCPVCRAECHWUEMNKLIOYDPVWJDMLEBFGEUWTSPUULKQGONXRWZAYYTLMQQYOCTWJMHSEZIWQPVLNNRFRLSXDSTDDRZHKJSFIJXBTDMWJKQFMUFUNZZJIKBQDZGVBPOJXFSBIEINXWYNFGZNYBUJVYCQVHAMO");

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
    msg.setTimeStamp(0.683799909786811);
    msg.setSource(55638U);
    msg.setSourceEntity(149U);
    msg.setDestination(13986U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.859727151915857;
    msg.lon = 0.41671542880021395;
    msg.z = 0.12145344074782283;
    msg.z_units = 183U;
    msg.speed = 0.6193788672041599;
    msg.speed_units = 201U;
    msg.takeoff_pitch = 0.6165110476008765;
    msg.custom.assign("XWSGDURBUAOJMMMNYWQMIEJ");

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
    msg.setTimeStamp(0.8274455822164906);
    msg.setSource(16516U);
    msg.setSourceEntity(210U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.6575442819431342;
    msg.lon = 0.45439229742740594;
    msg.z = 0.09745239728394817;
    msg.z_units = 118U;
    msg.speed = 0.8431812060044381;
    msg.speed_units = 207U;
    msg.takeoff_pitch = 0.18257790250763206;
    msg.custom.assign("EGBGNRPDPEXZIJCFASCCLGKOIEZAONGPAXCBDMDAPULUVWOWYJXSSGVVJSCESLHRFIFQRUBEPFHJTBWWVBRMGYTSEOKEJXDGFZMHPZWAKNCCNZQULKINUPOTWMQMLVNGZYOCWYTTITKNCQSQKLQBSZLSFXVRYMJVEIVMTXIEQXAUHOWJLFDVRUJPJLDBRXHNBYFTEDMFRGJIALDQWBNOAOZAUKKHGM");

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
    msg.setTimeStamp(0.7681613338889022);
    msg.setSource(48255U);
    msg.setSourceEntity(168U);
    msg.setDestination(47759U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.6525764769504961;
    msg.lon = 0.657738337090403;
    msg.z = 0.9037545819541781;
    msg.z_units = 196U;
    msg.speed = 0.778115465230229;
    msg.speed_units = 142U;
    msg.abort_z = 0.45231391547432154;
    msg.bearing = 0.08195860860753201;
    msg.glide_slope = 8U;
    msg.glide_slope_alt = 0.7850697441212107;
    msg.custom.assign("XEBEOSWEDIMSFBYGBX");

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
    msg.setTimeStamp(0.09777910112196997);
    msg.setSource(12283U);
    msg.setSourceEntity(158U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.28961877732765173;
    msg.lon = 0.09489905324160086;
    msg.z = 0.11234218536339124;
    msg.z_units = 43U;
    msg.speed = 0.9440868060190797;
    msg.speed_units = 205U;
    msg.abort_z = 0.8031051180234648;
    msg.bearing = 0.33842533408215936;
    msg.glide_slope = 127U;
    msg.glide_slope_alt = 0.10107555725814432;
    msg.custom.assign("JKANQBBDRWPMGQFRTHMREKTKXJSMYMFPTWBVJYYGIPEZNVPVHMHOBAEZLXDLRCEMWCRYICJROAYVFAJDLJBGCEXNNXXZQYCIBZFPISWDCUWLLDYKQMLHUXQNYGNANSWYAAKWZMJKJPPQOAZPBTUUGNIXISRGDEOXSWCPOHBNMSZGTQWFUHUFHEZPTFEBVSTVGRZFVFJUCIKXGWYLJNOZQLKEGXQOSSUOHTDILKVVCFARTB");

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
    msg.setTimeStamp(0.22429614790027907);
    msg.setSource(40949U);
    msg.setSourceEntity(42U);
    msg.setDestination(49594U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.5099826394059284;
    msg.lon = 0.45093029854799627;
    msg.z = 0.5993507498309093;
    msg.z_units = 160U;
    msg.speed = 0.7117395648201044;
    msg.speed_units = 202U;
    msg.abort_z = 0.9620599689403478;
    msg.bearing = 0.49929445169698317;
    msg.glide_slope = 97U;
    msg.glide_slope_alt = 0.5367913424035522;
    msg.custom.assign("CILKEIXBCGWZVNSDLDKFCDJPHAKATSRAYHUISWUOANJLIMZQDUTIXHONPCBEXXQAIBMQZRWTFXGGUZHNWYYVGERLBJUMMZNBUBFRUFZRDAEDVUXMTCWJXIAOSQPKPCPCCNEHMVOJAWRSFBTYZXQENQVSGPZZBEMKYQDOMDPHYQKZTHOJHIGVAEHVBNDSEVPTLFFYDRWQWOVYFN");

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
    msg.setTimeStamp(0.5439353369813823);
    msg.setSource(36767U);
    msg.setSourceEntity(21U);
    msg.setDestination(52897U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.11298957423066336;
    msg.lon = 0.008631466673111987;
    msg.speed = 0.3210080650008844;
    msg.speed_units = 86U;
    msg.limits = 163U;
    msg.max_depth = 0.9168369813808834;
    msg.min_alt = 0.18072798978621185;
    msg.time_limit = 0.41676471921317004;
    msg.controller.assign("GVHXMKUQKUNMIQJUYEZNEXDPACECKGLHMPBUWPIVNLUTYVCLNEOUHDSTWNENSBJRMVRVOHBFWFJGUYRIRDZLFERITSADNHFOLDFAYXBBCLYTTWIIXTWHCZDLRWQJZEGBIOUGCQBSZVVZGPOEJJWYMFYKANCZMLMMOPJRLQRPFXHJXKNAVWZFUTDOQNYQQXAOPXKIADOTAHVPYGAWXCHBWTSSOSCVHDTUPMKRSAFQZXG");
    msg.custom.assign("NMOXUITZHVLYSEXYVTRALQPKKPKPPENYBKJ");

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
    msg.setTimeStamp(0.40930820411458724);
    msg.setSource(24870U);
    msg.setSourceEntity(210U);
    msg.setDestination(45748U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.6640600984294088;
    msg.lon = 0.35555158453849867;
    msg.speed = 0.08742979132145223;
    msg.speed_units = 122U;
    msg.limits = 61U;
    msg.max_depth = 0.5658344835911487;
    msg.min_alt = 0.2940180296380728;
    msg.time_limit = 0.15898451739561248;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.03671503353123873;
    tmp_msg_0.lon = 0.9721160744158157;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GXEFZQELEBHBQYCUBIKDNNWTJEMKEGQIOXXXNSHZCVFBSYXAIDJZYYLLEWDEMEPKTQIAMIGSCHOUQXSNVZBAGRMVAPLRVFDZZGKSXCUROJSVUYNVYAYQLMRJNNROBNZOXNPUWBGSCTWQHGWTLYJFJHPHOVQUBKBMCSHIPWVHPLXVWFCOUKLOBRWADFJTDASFWJCUCTKHAULMJZDDRUTXHJRKLF");
    msg.custom.assign("OGZYJIGLOSXQTDHGENMINJRZLKHOGFHTEZPBRYKNRKVDFDVPCPCDQBCSBAPEILUZNTTSK");

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
    msg.setTimeStamp(0.5969332021433454);
    msg.setSource(59073U);
    msg.setSourceEntity(46U);
    msg.setDestination(55617U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.797801885755973;
    msg.lon = 0.48244351025878096;
    msg.speed = 0.40650544297635394;
    msg.speed_units = 74U;
    msg.limits = 25U;
    msg.max_depth = 0.18437717177168222;
    msg.min_alt = 0.10903929841619198;
    msg.time_limit = 0.4887792140077838;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6934298738428496;
    tmp_msg_0.lon = 0.4382300508611433;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IHZKRATEFPLVQSQMWCSWZGRKWQOONTQUYMXQHHBICCNLUBXABNUTENGZBMUFNAWNNDEOTORCIAPTPARJLLJOQQBRZJUPWPYAUPQTEVOIKEMBFXM");
    msg.custom.assign("QELZWMLKCSZTVIGRTDTKZSGTRQKGJSKDCBPIQOAXXMAFPZCSPZQLMUYPFFSFQSUSUJAWFTMNTLWWMCKXIUSBMCHAZOWRKMXAGDOGTOFLNERJHZDFVPBNUVXNBVVNFRBKEUJYVPNHIMSDXEBFIHLOKYOVUGVFOHZJAOYBDNPYDNCQJHHYQIUPUAMZRWPERTKRKGTJCERNOLIOGLEICWUD");

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
    msg.setTimeStamp(0.6704793333750173);
    msg.setSource(13486U);
    msg.setSourceEntity(131U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(20U);
    msg.target.assign("QECJNJZOYOMCVGRMDSDSHGPFWSIYHQVQKYVYANDJHTKGCOOIXPRUXJVANNNJTLTKXTHCBFRKIH");
    msg.max_speed = 0.42563089118904174;
    msg.speed_units = 51U;
    msg.lat = 0.833626684979409;
    msg.lon = 0.027726904767772953;
    msg.z = 0.4921613074028953;
    msg.z_units = 76U;
    msg.custom.assign("CGUXQPUTBTOMCTZKIDVAOVTLLMLGQLRAOFKXSOYPYAMKFJUOIWFKVRXVSIYXKG");

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
    msg.setTimeStamp(0.41558845956080204);
    msg.setSource(37480U);
    msg.setSourceEntity(133U);
    msg.setDestination(13145U);
    msg.setDestinationEntity(114U);
    msg.target.assign("ZZZJYGEASRIMVNZDHEZFGPRWCJCDFKUSSKAZXMRAIVMKEFHTNYZRNQXAFGRSQNNYJTFBVDMJFHLMIGCBSBWBWCLHJFPURPRXSXZDRPBEVKCSQBTKATTRKSLDYWIYBYMIQGOOCZEUWNGJLPNOXMALAQOTOJZEJBW");
    msg.max_speed = 0.29926093336064563;
    msg.speed_units = 26U;
    msg.lat = 0.3019239321948507;
    msg.lon = 0.4824010807614375;
    msg.z = 0.4913593592639549;
    msg.z_units = 62U;
    msg.custom.assign("WJDPWJZEPFUWBEQKPUBGPWANTZHCRHIHHZWJDITJLBFXKSWCCYANETXNANKZIX");

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
    msg.setTimeStamp(0.19077899474892868);
    msg.setSource(55574U);
    msg.setSourceEntity(67U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(180U);
    msg.target.assign("GECIRIZCMTCIKKJBCOHGEJHVZOKTGCXDUSSSLUXCYHMMEBEQZPPYPOMRTLUAFOJQMOOBYSYWPLPDXNNJJNILVQGDGBNXYWYYFUEFZWAFNXKORMHSNZRGIUZGSITUGVBBTLJPWKRRDOQEI");
    msg.max_speed = 0.6683490462723812;
    msg.speed_units = 136U;
    msg.lat = 0.09391651252265687;
    msg.lon = 0.5235647614550161;
    msg.z = 0.14173833183128737;
    msg.z_units = 30U;
    msg.custom.assign("ANPGOZNJHWBHKKGCUCNMMDZYMQLVBXVOCROJZKSDIQCFJBREETXYUVDDQKTVLZBSNDVPVPBFMGVUHFLHJFXHDIGQFQCBRIZEIGETAEZNTVYIXGWRJOCLUUIHBGRHCKEPXGJAQRTPELWPJNUQSWOTLSZNJIXDMUXMAWKGOPUMWSMKLDVNWFYPVDLQSUOTYXOAXQSWOYXMKAKYNFJ");

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
    msg.setTimeStamp(0.11691318149126928);
    msg.setSource(52638U);
    msg.setSourceEntity(231U);
    msg.setDestination(34561U);
    msg.setDestinationEntity(0U);
    msg.timeout = 50607U;
    msg.lat = 0.5560360385157135;
    msg.lon = 0.8752087570522924;
    msg.speed = 0.4082781956894247;
    msg.speed_units = 53U;
    msg.custom.assign("YCAQYOWUSZBSBVIAMOOUHNWUGSNBZBVRDRAUTWNMPMVBGFCCNLVARQNIXCOGNEIRBLDIDRAXTOECQPXLVHSKWMKDNILHUVALSHBITZHKCFXATLFXYUOBFYZXSDKUGGYETJDKMWPJW");

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
    msg.setTimeStamp(0.25067577217663994);
    msg.setSource(48740U);
    msg.setSourceEntity(111U);
    msg.setDestination(17633U);
    msg.setDestinationEntity(154U);
    msg.timeout = 2498U;
    msg.lat = 0.7560463626814822;
    msg.lon = 0.4254789035814678;
    msg.speed = 0.18250056956126104;
    msg.speed_units = 225U;
    msg.custom.assign("TXBGIXOGMSEMEDGOJVXLVCVHXEWSDHPMGZJYZPNAYHPAIBRAQVMKJIXWANUHWNARWRQRSEHFSRYTGWKZICJIQDUKDXIJORVRAAEBYYBZFXSSQPKMECRJNEUFLCPTQKTQIZQFRXZGVAWHJDOHELAZCYM");

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
    msg.setTimeStamp(0.07065236920179319);
    msg.setSource(7517U);
    msg.setSourceEntity(124U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(136U);
    msg.timeout = 53863U;
    msg.lat = 0.6512823523327834;
    msg.lon = 0.8634260435550546;
    msg.speed = 0.17679627665999442;
    msg.speed_units = 139U;
    msg.custom.assign("VSPUSHSNBOIREPTYVSKFZTMXMPBCVVPLXHXUZONIKVZBRFIEGKGOZTONCIKULDTCUGRKNCESXGDLSKERBFJHDIJJSLBWQCDWAOEHYQMYVJUACIDBHIFOLXPXHMGCFVYBFJMEROZMUXKTHUWGMADBQZJNYAPLCWWLULHEYQMFGEFQDBAGPFQLSZWRXSRAOWOMHZIRQWKFAMRNDUTRJJTZDWBOJKGQJQQADNTSVYWXXCANVTZIYNPPKN");

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
    msg.setTimeStamp(0.41010185302645574);
    msg.setSource(60639U);
    msg.setSourceEntity(150U);
    msg.setDestination(6533U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.7654568539436464;
    msg.lon = 0.11987780407486259;
    msg.z = 0.7411949935973967;
    msg.z_units = 147U;
    msg.radius = 0.6501280734672722;
    msg.duration = 34707U;
    msg.speed = 0.8694210346213067;
    msg.speed_units = 46U;
    msg.popup_period = 55518U;
    msg.popup_duration = 47280U;
    msg.flags = 174U;
    msg.custom.assign("XDCZAHYBQKZUNHGIXMMMHTUFGVPKFXUKRBZQVPTWZYZNPLIKXEUQZWXWJZNLJVVDCABRVGDTQXFEMSGOXGZYPBUJZJACFHGDMKDDDLVYPGOFADJ");

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
    msg.setTimeStamp(0.05972613715980568);
    msg.setSource(20969U);
    msg.setSourceEntity(144U);
    msg.setDestination(28484U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.3471923105075071;
    msg.lon = 0.670350615657297;
    msg.z = 0.2959105023169374;
    msg.z_units = 183U;
    msg.radius = 0.4293281784468007;
    msg.duration = 19972U;
    msg.speed = 0.3650808177661611;
    msg.speed_units = 200U;
    msg.popup_period = 14105U;
    msg.popup_duration = 32366U;
    msg.flags = 33U;
    msg.custom.assign("CLAFMDLQOVHTAQABLFGAZWNPJWDMBEQSSMQFLKABYFZNXMPUWLRFWGIVWZSYEUGFZGOWIKNPBSDQUKYQMP");

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
    msg.setTimeStamp(0.25268160197187783);
    msg.setSource(35234U);
    msg.setSourceEntity(84U);
    msg.setDestination(5735U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.9456011907163754;
    msg.lon = 0.6184151563036524;
    msg.z = 0.7734862147248218;
    msg.z_units = 38U;
    msg.radius = 0.14441708367710548;
    msg.duration = 22637U;
    msg.speed = 0.06461885104275755;
    msg.speed_units = 232U;
    msg.popup_period = 52363U;
    msg.popup_duration = 10846U;
    msg.flags = 67U;
    msg.custom.assign("ZOYZSXTKHLLNQOLOWJWYGFLFJDNIRMNQJWACIRMBVCORTZUCZNSDYJDNEDFBOYPQVRVGMGXPIMWHRFRXTYKTZMADUKWPLFVHOESIHFMLSFPSOWIQKGGMXXBMEVOIQPRVEAKHAWOPDVRUFBNVDPBXXXZPKGNSDJCBHFQJ");

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
    msg.setTimeStamp(0.3663623760251413);
    msg.setSource(11051U);
    msg.setSourceEntity(50U);
    msg.setDestination(29263U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.5666385257930581);
    msg.setSource(24501U);
    msg.setSourceEntity(82U);
    msg.setDestination(841U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.39466156511300055);
    msg.setSource(25389U);
    msg.setSourceEntity(63U);
    msg.setDestination(64968U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.2230118918158135);
    msg.setSource(43010U);
    msg.setSourceEntity(226U);
    msg.setDestination(2523U);
    msg.setDestinationEntity(229U);
    msg.timeout = 47605U;
    msg.lat = 0.1988441317515397;
    msg.lon = 0.3617533640103079;
    msg.z = 0.9035867858448575;
    msg.z_units = 1U;
    msg.speed = 0.6258741737757156;
    msg.speed_units = 28U;
    msg.bearing = 0.950618457608557;
    msg.width = 0.2982918672571917;
    msg.direction = 195U;
    msg.custom.assign("XZHIITQDPQBKVDZRHCHTONUAIWTPCSIUHAVVNOKJFLEQERHBFOHQFMRWXCRXCA");

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
    msg.setTimeStamp(0.8594690329531277);
    msg.setSource(61831U);
    msg.setSourceEntity(169U);
    msg.setDestination(16161U);
    msg.setDestinationEntity(20U);
    msg.timeout = 26919U;
    msg.lat = 0.41460749700689803;
    msg.lon = 0.2971989693307243;
    msg.z = 0.9043960415387104;
    msg.z_units = 81U;
    msg.speed = 0.7184055814161533;
    msg.speed_units = 159U;
    msg.bearing = 0.6103729286852905;
    msg.width = 0.25844034292238804;
    msg.direction = 100U;
    msg.custom.assign("HTLEQGWQSOVBSHZKUG");

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
    msg.setTimeStamp(0.2663630745447184);
    msg.setSource(9051U);
    msg.setSourceEntity(91U);
    msg.setDestination(44406U);
    msg.setDestinationEntity(36U);
    msg.timeout = 36662U;
    msg.lat = 0.5442652502459224;
    msg.lon = 0.535639039322584;
    msg.z = 0.9537593583159816;
    msg.z_units = 26U;
    msg.speed = 0.23611954499567822;
    msg.speed_units = 158U;
    msg.bearing = 0.4681884155797841;
    msg.width = 0.6819589070434189;
    msg.direction = 107U;
    msg.custom.assign("FUBXHXNCQKIJDWCQBOSCHIYMUPBKZKXOLNQRCNVPKEFYZMLGBYFMHSWYIAOKLQOMTXRQTJGJOWCJRGYKAMCFCYGWVGZBAZFWYDPGHGPETTBIRLNPWEIHMSQKIRLOEMVVJGVQFSYEBCEWRZUBFTLTDNH");

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
    msg.setTimeStamp(0.38300096020762286);
    msg.setSource(50252U);
    msg.setSourceEntity(53U);
    msg.setDestination(30139U);
    msg.setDestinationEntity(174U);
    msg.op_mode = 125U;
    msg.error_count = 138U;
    msg.error_ents.assign("FRXFTRVNZQYMOBTDWAPDQGDXZIPRXBBPHLZGATADMQQFPIBSZVKSHFAQHVYOUAYUCKOXKTJYQFWLDWQEFRCPHXGBCNVNPLLBZHRYGXMXXUTLUWHJZAJTSFTESABZONAVICSLSDZRBFMKKMKSU");
    msg.maneuver_type = 49021U;
    msg.maneuver_stime = 0.6289074041153759;
    msg.maneuver_eta = 29031U;
    msg.control_loops = 1578541798U;
    msg.flags = 52U;
    msg.last_error.assign("AYLTQLKPFBXBOZENWCUUZGMDXHGRBRNCHYFZEFGUFRTWVBCAIBPKWNYTVNVWEYNSGOYVLJDMMQQOKINKCLMVBQMEZSUEKODRLHFYSZICRGZRSYXXJTOSGKOFAIXPTQBAFGAOYMCURXDXIKQMXAGJJEEPXXYSD");
    msg.last_error_time = 0.7973105606634103;

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
    msg.setTimeStamp(0.6755813320704521);
    msg.setSource(41601U);
    msg.setSourceEntity(47U);
    msg.setDestination(59999U);
    msg.setDestinationEntity(114U);
    msg.op_mode = 197U;
    msg.error_count = 157U;
    msg.error_ents.assign("JGIKFXJWSJEXMNWDSHEQQOLMYZXAZZMDKGBSFQRGKUIVMNCOLWDMHPTHOEVWBWKTRAZLXEUYPVFOPWLOCCDENIARSFEPHWRQISOVMKNMJJTFJHIBZJGDAHUNFKYZZPNKIEBSAPCUIYHEBZTVALLSDHLQANVLXGSOUGYFQHWGSMVPYCWQKTEGNBCLZWZAKKNYBUAVOMTXQOQCJRBRYXIC");
    msg.maneuver_type = 44039U;
    msg.maneuver_stime = 0.40546013921439483;
    msg.maneuver_eta = 61811U;
    msg.control_loops = 1158716627U;
    msg.flags = 29U;
    msg.last_error.assign("HBZFTXVLFIHWANXJUGMLCAZCPSPDWMTUXKDMWEYLUOHRVBLMDMATMIMNQPCTHGMHNGSYCFDQD");
    msg.last_error_time = 0.3432453550802703;

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
    msg.setTimeStamp(0.026107471450804165);
    msg.setSource(45900U);
    msg.setSourceEntity(0U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 245U;
    msg.error_count = 249U;
    msg.error_ents.assign("IBTLJUXEMUQFJEPXMGTYYUMUIHDXQYWKXCRWENLSNKPYFROIFKZJOEMIVNRTAWYBPR");
    msg.maneuver_type = 5331U;
    msg.maneuver_stime = 0.46782113988378216;
    msg.maneuver_eta = 47552U;
    msg.control_loops = 3726034575U;
    msg.flags = 243U;
    msg.last_error.assign("XWMGJMAPAIUJWVENKRMAUJTFILYRYXKOKHENUGUYKVOCLHHMTDTGOQJRRZQVJMCMVCNKBYSFGV");
    msg.last_error_time = 0.4670227664936454;

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
    msg.setTimeStamp(0.9667129587953059);
    msg.setSource(3458U);
    msg.setSourceEntity(106U);
    msg.setDestination(34616U);
    msg.setDestinationEntity(198U);
    msg.type = 143U;
    msg.request_id = 40897U;
    msg.command = 70U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("NOGECHFDMYILRUKGAKEEZYZSJHRCHUPWJODKBVIVEVFCOXJPTYHMVKGAHIGOZWGVSPTWCXPLLTYBUJWQLEIMAUAINBRPTGPOOWATZOKRXJVUGUYTREVYXRCHSKKBHOSKSPMMNZOLYXMCTRNVWABUXLQGFQJHVLSRYNCFQBLDDENCSBTLKIOILJDTFQQFYZNDXGIRMFDNMBZJUQXCNWZADPSFIUWJZHXSFYDJEANECKQBRE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22474U;
    msg.info.assign("BZTDJVVUEGMNIKUSMZZFJIBICHGSORBATBCJHRVEZEMSQICLWYGMXXQTEFQORHYDGMTAOONMBFDDUMHQOHUGBTDXFIESJRGAPYTKZUGHLVJR");

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
    msg.setTimeStamp(0.6659337195343069);
    msg.setSource(54285U);
    msg.setSourceEntity(220U);
    msg.setDestination(42340U);
    msg.setDestinationEntity(193U);
    msg.type = 187U;
    msg.request_id = 23151U;
    msg.command = 52U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 62798U;
    tmp_msg_0.lat = 0.5588435084185723;
    tmp_msg_0.lon = 0.17383632490152678;
    tmp_msg_0.z = 0.09814044895033902;
    tmp_msg_0.z_units = 162U;
    tmp_msg_0.speed = 0.17905168526776372;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.bearing = 0.6341359280036083;
    tmp_msg_0.cross_angle = 0.7153638106694827;
    tmp_msg_0.width = 0.1642825375273519;
    tmp_msg_0.length = 0.35990592791945775;
    tmp_msg_0.hstep = 0.20198899578965324;
    tmp_msg_0.coff = 128U;
    tmp_msg_0.alternation = 144U;
    tmp_msg_0.flags = 35U;
    tmp_msg_0.custom.assign("CEWYCSGUTWXPIYEXFEAZZYIICWANCEHFEBZHOYKSHTNUQYRKRSQGQAMNLXQXGUWMXLKQZTATLMMOHPSUOLYODIHNUSFFDECTRACJXIWOPJKKQVKDWC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45983U;
    msg.info.assign("MHIHPFJRKCDOATOZXAHUHSFGQFBIRERALMMAJOVVMLRQSZDYEGAYYZQFDURCW");

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
    msg.setTimeStamp(0.6460864307774694);
    msg.setSource(56862U);
    msg.setSourceEntity(173U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(200U);
    msg.type = 25U;
    msg.request_id = 25394U;
    msg.command = 206U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 5066U;
    tmp_msg_0.lat = 0.6813756386918813;
    tmp_msg_0.lon = 0.1644726530672478;
    tmp_msg_0.z = 0.26422906963069903;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.03253495014660723;
    tmp_msg_0.speed_units = 16U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.28465725578415857;
    tmp_tmp_msg_0_0.y = 0.7562392980780465;
    tmp_tmp_msg_0_0.z = 0.47928147199820037;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("WRJFHCVXWWQOAAXWDCDFUYNBWKOZNLTECMMZHPYIYCTUAWUUFOGLKFRETYEVPHPNRHCKJXEDDGPLOQACUZJUUSFEBWDNMVLKJLJEQGUXVBESXKNBGMVSRSJLQAPHJVTRHCWTKXDVTXAMZHQRIINZOKVRHFOHZAEMQIFKFRIMPLSMOJGNMSQAKIIXSJSKGYIN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21651U;
    msg.info.assign("LKTOMSJRYIAPEGMXJPTWMXVFIHUTLRNTYZCQANGYJMEDT");

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
    msg.setTimeStamp(0.15662856908808942);
    msg.setSource(43571U);
    msg.setSourceEntity(158U);
    msg.setDestination(40258U);
    msg.setDestinationEntity(237U);
    msg.command = 59U;
    msg.entities.assign("FUXJETPMZAZJUCPCUYRGAOJHGLHVOCXCPAZCUEXHWGOXQMKJREKAIPVEVOSCVPYLIUIBZYFWCNCB");

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
    msg.setTimeStamp(0.8701234699531297);
    msg.setSource(10153U);
    msg.setSourceEntity(51U);
    msg.setDestination(63812U);
    msg.setDestinationEntity(122U);
    msg.command = 143U;
    msg.entities.assign("OEEXLMZIBRHMYJVGXHGNVKRGOMKZTEPMHNPNIEPUWKKWMTEYXAQBSUWJQIVHDIAYZVYMEOHINOFYVSWUQAGNXVOCWOPRLXODYGCUOJAZYDTUPXUCJZISAPBWVGNJUFFKLRMPKHSFUSASPIJJFDCMNNCBMWWDQKEKQKLOCTLTHITZCJTCSFDXEAYUGTLSV");

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
    msg.setTimeStamp(0.09712762042700529);
    msg.setSource(47615U);
    msg.setSourceEntity(197U);
    msg.setDestination(19127U);
    msg.setDestinationEntity(216U);
    msg.command = 135U;
    msg.entities.assign("HEMGAEGOYPLQUKSTQOVBZNBYGVPWLTHCPIESGFCBJPBRISVWTZRHFCDAEXPRBYIAMVCVFIHFGTFYZZLGTNAGPANSHZDJMOLYKSKIWAQBDJSDAJLUSBHOCCKMYWWMTVKOUHXZQUVJCNFKMXNJWRRDDHKYOMNEWJMEUFTRESXYALZOQRPPFOIOCBYLMQZXXXLQDIPENRKIWOQJLVXBHXTNDTJI");

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
    msg.setTimeStamp(0.31600110376843593);
    msg.setSource(6712U);
    msg.setSourceEntity(29U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(49U);
    msg.mcount = 123U;
    msg.mnames.assign("RVHGSCSRRDTFZQUAJRGGN");
    msg.ecount = 223U;
    msg.enames.assign("XIWWNAADKNVKIANSQRIBZVDWEWNX");
    msg.ccount = 122U;
    msg.cnames.assign("ULLVWYDUMCKPOBPDBCIPQOYUBXZAMVJRMRNTRYGKSGIXHLCEYSARLSHCYYGYNZGZUWPNVUWHSJL");
    msg.last_error.assign("QOGPTSFWKFUAMVKUOVSFZXNRXLWTDGQO");
    msg.last_error_time = 0.7575395070486383;

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
    msg.setTimeStamp(0.8899239558949703);
    msg.setSource(18903U);
    msg.setSourceEntity(51U);
    msg.setDestination(10291U);
    msg.setDestinationEntity(185U);
    msg.mcount = 128U;
    msg.mnames.assign("HXHQGFMDVKFXFLJEHEGPGLEZIQDBKHDBTRKDWCZOHAHDYURYUPNNQWJAZETOLAKNEBAAJPPCNTPBLCDADTYKYVZZBZVUALNRUJQYOKB");
    msg.ecount = 231U;
    msg.enames.assign("PTYCWUUZGQAFAYLRNMOSADOSSQQYTAFHHXIJCQUEBLUWKKWTDYINNWMCSSTDXREXHPKRDZLHTLLVPWYZIMRPVVAJDG");
    msg.ccount = 241U;
    msg.cnames.assign("BTQEUKDDDKMCJNFARQURMMVLWSADGOGMXMMHFBASVTZOCHXQHMBIMJAYRQYKZHRLVFWCKHCDURERJZRQLYEAWUYIKWEYTTE");
    msg.last_error.assign("NGWIGXVXBLCEQTLALVBXSDMUUFYDGEDJRRFFMZLZEFYUMKZHALAOCNBJMXJMOFWLZX");
    msg.last_error_time = 0.5327997627558392;

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
    msg.setTimeStamp(0.2346742193316873);
    msg.setSource(13755U);
    msg.setSourceEntity(26U);
    msg.setDestination(38743U);
    msg.setDestinationEntity(224U);
    msg.mcount = 19U;
    msg.mnames.assign("SAPCXHCHUOIROGLGEFYORNJAHWMYHZMZOWNMQBNDZKBQVVKDUTMERPNUGWHDYARDPEJUSCBVYYJTDSSXMJZYZNQVARTLVSBHWEBBLXJLNIDJZVVPOXG");
    msg.ecount = 151U;
    msg.enames.assign("QYUYFOABOMTOODZIGNTUKKJSPBGVTTBHYJBIIZKUPKKJZAFZYIHANFSYXSLEPQPEHQBMAQIJQKPXRYIUFONUOCMEKSVSBGOQZNVMAACYNEBRIXWJFBWXPGJMNTHLOWHXOLUTGOTPWWILETHFZSJMBEYENSXWRCFYGVPQCDVAVALQZYLHRDEPQLZRTKXRMFBVNVUQSDRFZGRICDXEGWMCCDLANPSWDGJLCNMRLHWDDXHUKRXTWCJEAUIVMDUH");
    msg.ccount = 212U;
    msg.cnames.assign("QJMNOTDRTQIKVAGMFUAHFYRJVJXBUHERFTBSKWWRUYXRHWCLBIXKZZOGYJYHBEQCCOLPDSAJIUXZYADNOFZKWXYDSQIHAMAFZGNTTCBPLILULRNVTHBSZSYWJXELFFAFCPVGYGEBXTKWJTEJNOMISNETKRZVMCPLEK");
    msg.last_error.assign("GBQLIUBEZCBYRSRKLYWSEDFBRIXOPQFFXZKGXMVSEOZKCWCZPPUOIZHAKUJVNDCHNYLOGISAKYRHSTGAPCJLILCMDHIOMLNGZVNDPPMAHZLSTBOAUYYYAKMJQYGIHFHXDTKBRQJXGJCWOTTDYRJWLGKWAJEMEWANUFVWJNNMSFPDOSNLDIZXDEFKCFWTJPXIEUHVFQXXCWQ");
    msg.last_error_time = 0.9064615558629019;

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
    msg.setTimeStamp(0.35808203014136597);
    msg.setSource(40745U);
    msg.setSourceEntity(66U);
    msg.setDestination(22901U);
    msg.setDestinationEntity(45U);
    msg.mask = 186U;
    msg.max_depth = 0.044949330598979986;
    msg.min_altitude = 0.7467677628815069;
    msg.max_altitude = 0.7312665293773205;
    msg.min_speed = 0.02440433299523126;
    msg.max_speed = 0.1198582400610424;
    msg.max_vrate = 0.2832835131179159;
    msg.lat = 0.0018143829834680325;
    msg.lon = 0.49312641806886437;
    msg.orientation = 0.874741700804854;
    msg.width = 0.8280265689818508;
    msg.length = 0.06714884965012213;

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
    msg.setTimeStamp(0.8328613824611686);
    msg.setSource(28236U);
    msg.setSourceEntity(195U);
    msg.setDestination(39862U);
    msg.setDestinationEntity(208U);
    msg.mask = 170U;
    msg.max_depth = 0.18490100046918245;
    msg.min_altitude = 0.7225579593066653;
    msg.max_altitude = 0.6324152490310044;
    msg.min_speed = 0.5791778152192603;
    msg.max_speed = 0.5852168327872996;
    msg.max_vrate = 0.30335173935046966;
    msg.lat = 0.6978847225887449;
    msg.lon = 0.33085135893795903;
    msg.orientation = 0.03224648627395732;
    msg.width = 0.9773053364050833;
    msg.length = 0.8747207527312673;

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
    msg.setTimeStamp(0.47708606734962133);
    msg.setSource(11226U);
    msg.setSourceEntity(48U);
    msg.setDestination(4352U);
    msg.setDestinationEntity(147U);
    msg.mask = 109U;
    msg.max_depth = 0.4017657925734014;
    msg.min_altitude = 0.12430256811029472;
    msg.max_altitude = 0.6405725778573675;
    msg.min_speed = 0.643104484331525;
    msg.max_speed = 0.05536383208779372;
    msg.max_vrate = 0.30313531742076816;
    msg.lat = 0.7440793006055189;
    msg.lon = 0.9013544044124613;
    msg.orientation = 0.8670301784421227;
    msg.width = 0.3884437371084698;
    msg.length = 0.24403539113097117;

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
    msg.setTimeStamp(0.3686005111285987);
    msg.setSource(26877U);
    msg.setSourceEntity(238U);
    msg.setDestination(16100U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.33014131417724557);
    msg.setSource(61168U);
    msg.setSourceEntity(94U);
    msg.setDestination(37948U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.5038466793279928);
    msg.setSource(48069U);
    msg.setSourceEntity(81U);
    msg.setDestination(64155U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.6312380583724855);
    msg.setSource(21680U);
    msg.setSourceEntity(187U);
    msg.setDestination(48131U);
    msg.setDestinationEntity(22U);
    msg.duration = 35967U;

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
    msg.setTimeStamp(0.17735958804890029);
    msg.setSource(13754U);
    msg.setSourceEntity(1U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(204U);
    msg.duration = 5517U;

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
    msg.setTimeStamp(0.4272302566465258);
    msg.setSource(2407U);
    msg.setSourceEntity(8U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(227U);
    msg.duration = 8947U;

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
    msg.setTimeStamp(0.08007622596171693);
    msg.setSource(14979U);
    msg.setSourceEntity(175U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(103U);
    msg.enable = 13U;
    msg.mask = 3276679755U;
    msg.scope_ref = 2145183629U;

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
    msg.setTimeStamp(0.9439073292815217);
    msg.setSource(28567U);
    msg.setSourceEntity(167U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(174U);
    msg.enable = 194U;
    msg.mask = 2048577329U;
    msg.scope_ref = 813372879U;

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
    msg.setTimeStamp(0.3002146620674876);
    msg.setSource(27109U);
    msg.setSourceEntity(183U);
    msg.setDestination(58661U);
    msg.setDestinationEntity(58U);
    msg.enable = 105U;
    msg.mask = 2994268797U;
    msg.scope_ref = 3056069402U;

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
    msg.setTimeStamp(0.10759658824737284);
    msg.setSource(19847U);
    msg.setSourceEntity(123U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(223U);
    msg.medium = 140U;

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
    msg.setTimeStamp(0.2806912825178274);
    msg.setSource(36982U);
    msg.setSourceEntity(190U);
    msg.setDestination(8960U);
    msg.setDestinationEntity(226U);
    msg.medium = 184U;

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
    msg.setTimeStamp(0.18120872955996836);
    msg.setSource(13991U);
    msg.setSourceEntity(232U);
    msg.setDestination(9876U);
    msg.setDestinationEntity(82U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.5012103720722703);
    msg.setSource(58017U);
    msg.setSourceEntity(163U);
    msg.setDestination(23542U);
    msg.setDestinationEntity(193U);
    msg.value = 0.3786239170828952;
    msg.type = 81U;

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
    msg.setTimeStamp(0.9307171102247672);
    msg.setSource(40045U);
    msg.setSourceEntity(49U);
    msg.setDestination(26839U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4979452995978366;
    msg.type = 242U;

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
    msg.setTimeStamp(0.4913606968659797);
    msg.setSource(41633U);
    msg.setSourceEntity(147U);
    msg.setDestination(46408U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9228080788266526;
    msg.type = 206U;

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
    msg.setTimeStamp(0.1520964153074449);
    msg.setSource(28014U);
    msg.setSourceEntity(113U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(189U);
    msg.possimerr = 0.28201734781628274;
    msg.converg = 0.23021238869232918;
    msg.turbulence = 0.6020261118278917;
    msg.possimmon = 28U;
    msg.commmon = 188U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.4694196079088101);
    msg.setSource(53584U);
    msg.setSourceEntity(161U);
    msg.setDestination(25225U);
    msg.setDestinationEntity(134U);
    msg.possimerr = 0.21813201067495225;
    msg.converg = 0.4365804876881424;
    msg.turbulence = 0.7097933686605444;
    msg.possimmon = 163U;
    msg.commmon = 224U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.6652898208533493);
    msg.setSource(29619U);
    msg.setSourceEntity(220U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(174U);
    msg.possimerr = 0.5491896523761991;
    msg.converg = 0.917878213507363;
    msg.turbulence = 0.8264733475255812;
    msg.possimmon = 220U;
    msg.commmon = 233U;
    msg.convergmon = 84U;

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
    msg.setTimeStamp(0.9210341903828895);
    msg.setSource(33933U);
    msg.setSourceEntity(35U);
    msg.setDestination(46295U);
    msg.setDestinationEntity(105U);
    msg.autonomy = 136U;
    msg.mode.assign("JJHGRMBGOYDDPNGMTUYHZNKQWRRNGOQFHZKTLZCUVBSJHNZTTTQFPJXBAUWYPTAMOUNJYPGMDQTUYBMHYMEWRZAXDCEIFWKREQAAXBOBKHDXERBBLCDXSCKIVPWJCCHFLNMSLOQVDVESILGZRNXXAQMLZNHIKLDYSPMWBFVHJAFGIJCEKQK");

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
    msg.setTimeStamp(0.004030900665304982);
    msg.setSource(17196U);
    msg.setSourceEntity(142U);
    msg.setDestination(47142U);
    msg.setDestinationEntity(185U);
    msg.autonomy = 69U;
    msg.mode.assign("UPSPYWYDXEFOPIYKTBRWUHFKQEXOEKGTZWQFPYMWNWOXNJXUVMAVEYNQDTHZHBXDJXEOVTJQGWFTUJHKTQZAXBRHXJDSIQBUNMOHOZGRRRISSHPFPTLUFRKBAVUTNSLDXMXZKPRIWLEHHDZWOGCQAZWTGDEACPLEKJLFQCKLLICSBSCFNQVMJNZDAYBFGYACYIMVYDAJIKUQIMYHDNACRBOUJCSNEKTCPCMPMOOBU");

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
    msg.setTimeStamp(0.23623911438840617);
    msg.setSource(22601U);
    msg.setSourceEntity(165U);
    msg.setDestination(36208U);
    msg.setDestinationEntity(183U);
    msg.autonomy = 146U;
    msg.mode.assign("CTSCQAURKPPXALSESYBAGWRAEBRNYKBZCHKLGUKPANYSWCCFHCAG");

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
    msg.setTimeStamp(0.21109942473798105);
    msg.setSource(10659U);
    msg.setSourceEntity(18U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(89U);
    msg.type = 197U;
    msg.op = 198U;
    msg.possimerr = 0.23793531037424998;
    msg.converg = 0.9334493403868493;
    msg.turbulence = 0.3009480901478664;
    msg.possimmon = 16U;
    msg.commmon = 6U;
    msg.convergmon = 191U;

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
    msg.setTimeStamp(0.4612134028564321);
    msg.setSource(35291U);
    msg.setSourceEntity(61U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(67U);
    msg.type = 48U;
    msg.op = 105U;
    msg.possimerr = 0.16325261494284682;
    msg.converg = 0.23001661279823493;
    msg.turbulence = 0.2021594718460521;
    msg.possimmon = 172U;
    msg.commmon = 23U;
    msg.convergmon = 145U;

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
    msg.setTimeStamp(0.7464908123890557);
    msg.setSource(12919U);
    msg.setSourceEntity(151U);
    msg.setDestination(49874U);
    msg.setDestinationEntity(68U);
    msg.type = 105U;
    msg.op = 71U;
    msg.possimerr = 0.2542863891486493;
    msg.converg = 0.6985837076514033;
    msg.turbulence = 0.05930986900956414;
    msg.possimmon = 170U;
    msg.commmon = 226U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.20910682471856146);
    msg.setSource(37278U);
    msg.setSourceEntity(224U);
    msg.setDestination(55584U);
    msg.setDestinationEntity(226U);
    msg.op = 20U;
    msg.comm_interface = 70U;
    msg.period = 47815U;
    msg.sys_dst.assign("DREIDGNVLVVLROANSEWTYYZOYSQASTZDPDUIPGPOJHBNIATCWVFUSBFFBGSU");

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
    msg.setTimeStamp(0.5214472774744563);
    msg.setSource(27527U);
    msg.setSourceEntity(207U);
    msg.setDestination(28197U);
    msg.setDestinationEntity(218U);
    msg.op = 27U;
    msg.comm_interface = 110U;
    msg.period = 1759U;
    msg.sys_dst.assign("KAZLYDXMUYYSYAXJDOOUNRBIARGAVADZIRLCXANZUMDNZZFRLVJKCQAJGNVPGBYDMTKSL");

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
    msg.setTimeStamp(0.235141095015456);
    msg.setSource(21814U);
    msg.setSourceEntity(162U);
    msg.setDestination(39112U);
    msg.setDestinationEntity(241U);
    msg.op = 173U;
    msg.comm_interface = 156U;
    msg.period = 2695U;
    msg.sys_dst.assign("JUAJRDCXBIVNOBDBKLYZCGTXMRFVQQIEARUFQEFYZVJCUAXKCPVSLGWUTDIZGLDNALUDCCWPUCKXOBHDBANGVLIHZYOYTMIFJSGJBEGOQIMSMLOVHFFEXMNXAUHTITROPWPO");

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
    msg.setTimeStamp(0.1732338666705362);
    msg.setSource(44360U);
    msg.setSourceEntity(40U);
    msg.setDestination(21366U);
    msg.setDestinationEntity(117U);
    msg.stime = 3367700501U;
    msg.latitude = 0.3996224044148551;
    msg.longitude = 0.5135782931641005;
    msg.altitude = 45011U;
    msg.depth = 50770U;
    msg.heading = 45308U;
    msg.speed = 4291;
    msg.fuel = -3;
    msg.exec_state = 20;
    msg.plan_checksum = 26544U;

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
    msg.setTimeStamp(0.4349116725593025);
    msg.setSource(12692U);
    msg.setSourceEntity(224U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(187U);
    msg.stime = 124439386U;
    msg.latitude = 0.28724430002323376;
    msg.longitude = 0.3003544460014862;
    msg.altitude = 38964U;
    msg.depth = 14996U;
    msg.heading = 62591U;
    msg.speed = 19101;
    msg.fuel = -23;
    msg.exec_state = 78;
    msg.plan_checksum = 6073U;

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
    msg.setTimeStamp(0.13064031407851362);
    msg.setSource(30050U);
    msg.setSourceEntity(125U);
    msg.setDestination(356U);
    msg.setDestinationEntity(115U);
    msg.stime = 4117437279U;
    msg.latitude = 0.6981892428873983;
    msg.longitude = 0.21508591794684162;
    msg.altitude = 23366U;
    msg.depth = 54326U;
    msg.heading = 23147U;
    msg.speed = -26;
    msg.fuel = 35;
    msg.exec_state = -73;
    msg.plan_checksum = 50386U;

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
    msg.setTimeStamp(0.7366507700960698);
    msg.setSource(43043U);
    msg.setSourceEntity(211U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(242U);
    msg.req_id = 24598U;
    msg.comm_mean = 110U;
    msg.destination.assign("HQBAKNTIJPWNHDRZCKVFEWZRGDQWIFZZCLPWOHMHYSOXFDQONLVOHFRUOKRKDIPWJDZVENLMGVOCSTLQLQEZJEXRXMTBUHDUNQPUPJDUYKLHKAEYJJVXNRAAHPBERWENNTIEPYFDMWBKBKYJASJSSMOMUGDLDAXMBIGWUXQVTCVCMCXZTOSGXAUCMLYQIKYXMUSAOBBQVPLRCRFRASHXSBNGQGJGGZTIPEPNKIGFBW");
    msg.deadline = 0.5568304494260067;
    msg.range = 0.07413747075317279;
    msg.data_mode = 134U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.3036543877833211;
    tmp_msg_0.type = 73U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NCPZAWATKQCQSMXILFBTLHPENHDALEWXNODDEBKHQRNZTKQMFSNVPOZIKGVZLWHQTGPQTUOZ");
    const char tmp_msg_1[] = {20, -22, -45, 68, -37, 11, 0, 59, 51, 93, 27, -41, -88, -80, -98, -32, 0, -65, -79, -30, -103, 6, 36, 39, 119, 87, 13, -14, -9, -5, 59, 109, 66, 115, 126, -25, 18, -40, -122, -37, 33, -116, 73, 16, -71, 106, 38, 49, -112, 124, 90, 86, -112, 16, 106, -105, 113, 62, -27, 105, 75, 58, -78, 28, 82, -5, -54, -26, -71, -77, -88, -121, -49, -68, 107, -122, -103, 121, 96, 57, 2, 9, -86, -93, -126, -113, 94, 49, 72, 61, -2, -75, 126, -68, 68, -110, 24, 102, 106, -58, -76, 31, 96, 121, -46, 102, -121, -92, -76, -79, 8, 26, 26, 120, -53, 33, 80, 97, 82, 56, -109, -11, 5, -27, -100, -7, 105, -71, 88, 94, -4, 56, -89, 84, -33, 0, -122, 27, 94, -11, -24, -64, 41, -34, 107, 122, 118, -94, -13, -111, -50, -72, -8, 46, -20, 11, -79, 93, 41, -101, -27, 126, 16, 78, 37, 53, 54, -88, -47, -71, 31, 40, -125, 37, -25, 43, 14, 3, -38, 10, -75, 13, 32, -92, -50, -33, 126, -93, -55, 124, 4, 73, 120, 11, -26, -57, 46, -61, 9, -39, -6, 88, -24, -80, 71, 3, 11, -98, 0, -11, 57, -103, 126};
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
    msg.setTimeStamp(0.38191350525770473);
    msg.setSource(44539U);
    msg.setSourceEntity(171U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(91U);
    msg.req_id = 61443U;
    msg.comm_mean = 251U;
    msg.destination.assign("WRDZBCJPMNJENFUWWDJIHFVYLKSMXCVUWURCCLOURHSPOAZMVORQRESDTTLBVLCKLATRVSNIQQPF");
    msg.deadline = 0.4245349248507476;
    msg.range = 0.03465792310217286;
    msg.data_mode = 11U;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 672U;
    tmp_msg_0.sys.assign("FXEBBSAJKVMIXSOTHMRQKSIGXKLEDQVLVIMFZJZYHFKOGESKZNYGBBOPPXCIHOLWDRUVGSQMCARBRDPIYNFDEFLNWNMPKPRMIYLMVLUTIBUXFAADXUEKLOWABEPJFJDYFGASSVYZTLCEJHNRHBTPRGOOATHUVWZCCLQPDNZTICQNIYKZDNQEXNWECRLXZMSWWXCJAJGT");
    tmp_msg_0.value = 0.7718846887682064;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DHLYLEOZKVIMOUMFMTXJFRFDQZKPZWTXRLKSKYCALVXERNDIIANNEYSVTFWJCOXBBZRPGQPAAVYOUJPNFHZWFGCTCVGHHSXLTYQUNODRJHRCUHWAISWEWVBUSMLCWVMMCUEZZCEEBTJZGNFIWIGPXOLSLHNMGEEOQGQRJXQPVJMOFSXKVFBUSTFQKYETKPDRZLHXYAHXIRBCY");
    const char tmp_msg_1[] = {-96, -49, 121, 46, -99, -41, 11, -68, -61, -54, -108, -72, 3, 9, 121, -83, 50, -108, 103, -102, 79, 89, -12, -110, -108, -4, -13, 81, 56, 56, -18, -107, -49, 60, -22, -13, -2, 110, 5, 124, -128, 6, -101, 28, -13, 46, 86, 78, 16, 63, 104, -71, -48, 29, 110, -79, 41, -80, 58, 50, -65, -12, -76, -45, 29, -12, -39, -1, -114, 7, 38, -112, -76, 82, -50, 103, -75, -9, 49, -77, -70, 54, -13, -94, 90, 31, 70, 112, -77, -69, 116, -18, 63, -84, 13, -124, 108, -4, 19, -73, -80, 84, 41, -71, -96, 105, -91, -18, -124, -26, -19, -56, -98, 119, 19, -125, -46, -98, -101, -25, -83, -101, 50, 113, -34, -46, -27, -100, 63, 65, -101, -48, -56, 70, 46, 5, -66, -2, 113, 93, 4, 71, 91, -128, 97, 116, 62, -44, 70, 76, -99, -91, -92, -26, -11, -126, 117, -52, -101, 0, -105, -30, -106, 98, 102, -30, -48, -87, 0, 43, -11, -22, 114, 36, -15, 9, 94, 8, 86, 102, -51, 125, -120, 125, 83, 47, -90, -102, -91, -38, -100, 91, 44, 71, -1, 99, 97, 0, -116, 78, -12, -37, -32, 11, 60, 88, -50, -123, -81, -89, -120, -109, -128, -87, 40, 14, -122, 6, -74, -7, 10, 24, -123, 60, 120, -65, 16, -62, 97, 42, -128, -64, 27, 36, -111, 122, 111};
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
    msg.setTimeStamp(0.03776961178085836);
    msg.setSource(17906U);
    msg.setSourceEntity(195U);
    msg.setDestination(53881U);
    msg.setDestinationEntity(176U);
    msg.req_id = 7507U;
    msg.comm_mean = 197U;
    msg.destination.assign("XYUUPSUTKMDEJEWWDLWEZYEVGBFSOTVPZRHOIRAYOBFFBYJGGWUVMAQNVIWTKWCPVBNVHTRGIPWWCFKTFNJD");
    msg.deadline = 0.5457624235468396;
    msg.range = 0.029404592671677388;
    msg.data_mode = 99U;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6654209912294986;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DLJOFTFRDTHYOTRLCKLFOAHTXVAUIRCYOYWZLDPVVGRNNBANSBAPWCQNOXZVJBOZV");
    const char tmp_msg_1[] = {2, 70, 126, 13, 26, -58, -63, -41, 109, 76, -32, 96, 64, 32, 114, 82, 76, -9, 88, -30, -92, -62};
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
    msg.setTimeStamp(0.4443389740179927);
    msg.setSource(30777U);
    msg.setSourceEntity(152U);
    msg.setDestination(34594U);
    msg.setDestinationEntity(141U);
    msg.req_id = 38717U;
    msg.status = 165U;
    msg.range = 0.2850654981538071;
    msg.info.assign("EIOQTGXZWFNJBWGBYAPBSNARWNLRSDSUYXQNVZCUCLGOCMEOVMEEUCSOZKTVJQQYPAAITURZTMEYGEJMKHKLTUAGVBPGIMBXLELNHUPU");

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
    msg.setTimeStamp(0.9913220963828644);
    msg.setSource(56656U);
    msg.setSourceEntity(139U);
    msg.setDestination(13557U);
    msg.setDestinationEntity(125U);
    msg.req_id = 63269U;
    msg.status = 162U;
    msg.range = 0.6185597265861323;
    msg.info.assign("BPWHGZKRVHNJIKZWNSXPIXHQJCSNWSZXPHCFMCUAAQYTBMMNBNJPOUNQ");

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
    msg.setTimeStamp(0.8078036157454834);
    msg.setSource(88U);
    msg.setSourceEntity(15U);
    msg.setDestination(3817U);
    msg.setDestinationEntity(231U);
    msg.req_id = 29186U;
    msg.status = 2U;
    msg.range = 0.8075999644053571;
    msg.info.assign("VJQXSICHIZRZXO");

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
    msg.setTimeStamp(0.7173129276200998);
    msg.setSource(44235U);
    msg.setSourceEntity(131U);
    msg.setDestination(4774U);
    msg.setDestinationEntity(94U);
    msg.req_id = 12163U;
    msg.destination.assign("DGMMPXXCQASDHKXWRJGLCQVFDSGKGUQIFRGPMBKUMPZVONWAZKOXESTWKQLRHAMHAGZPYJULTQATHEVWBQDYZROFOXBSYTEACZCUNFZCIURITSDLTMHGH");
    msg.timeout = 0.3585508233682926;
    msg.sms_text.assign("PLAWBDLVHGKPJSGZDYZIUSTDARTVRJPPMLMYYFNDVKQMXRUPVICWHMJSLA");

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
    msg.setTimeStamp(0.8352333215558538);
    msg.setSource(49131U);
    msg.setSourceEntity(81U);
    msg.setDestination(28993U);
    msg.setDestinationEntity(173U);
    msg.req_id = 43519U;
    msg.destination.assign("HFTQZHEQXUBWRPSZSIAAZVQCVTGBWUCIXORFWUPBRUTMBPNILVMGESOAQJDGPLKZZLNNNSTDUAKBEDXHZKFMNIDGSISWIAFRPFZKTBMKCPFHWQDSRONXJOYWDMVEOPIVGCSVEMHECKNWIQGIGSMEBOVZMKFKYQGXNVLALKXEFDBYHDYEDXWHBOHNBCKLJFALIYTXTVMZYPYCVCACPPOFJDAYJSRJAJGHQJRTURJRLWOLWZXHUTCUNGOUYEULR");
    msg.timeout = 0.39942261780689026;
    msg.sms_text.assign("QWNABWEQRCZJHLSPVIVMKIVSBPZICBSJBMKXOMPKFUZMYXDRSJAFTUJCRPHUXAVZNJSYYUEACXOXLEXIEWRQZCIEEYHKNGVSLMFKVBIGFNGFUJUGXOTNDBUKDBLOADRLLXLVDFQJMTVWUCBFAZPWHQGGUHYTJPHPASEHHSUDAOKJGGTTRNQFJSEETVZWALROCOHZYCDIWNQRPOELNNGMQYCMYKYXNIYZMRBRAIFDGVSIDQ");

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
    msg.setTimeStamp(0.09300637314711846);
    msg.setSource(42141U);
    msg.setSourceEntity(118U);
    msg.setDestination(19345U);
    msg.setDestinationEntity(47U);
    msg.req_id = 48822U;
    msg.destination.assign("CXMAVXDSAIIMJVQMVCPFQKSKJIFLHYUVXSSNGRZTNOIWGSBPXIRLTQRTBDYNTYNWYQAEPFODGLDGPJSIIVCEORHXBPUMXDYZYGCILEDMHAEYAOIAWZKVXYJAVCCJTHTBAGLIMYNWBDVMQCQKZCZGFKKZLPUZNHEBNSOHMTCYHRMUUQGVDDTFMRDFQPPHJUJVRQNFKNJUOJTWNUAWSZTSERWJOFWGEBKCUULEXBOSOE");
    msg.timeout = 0.5690712202028047;
    msg.sms_text.assign("EZKXGMNKTOVKIQGJPIATNIKTMAIDOTYHJKVLJVSAKEQPPCYYJUSVNUWEKMXEZHPYQRIFUMUCDBKPZHYOICILTAFLMGBPUUXYVPLDZ");

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
    msg.setTimeStamp(0.8091163529233225);
    msg.setSource(18180U);
    msg.setSourceEntity(120U);
    msg.setDestination(24105U);
    msg.setDestinationEntity(169U);
    msg.req_id = 3287U;
    msg.status = 126U;
    msg.info.assign("LSJPAKRFJOCRSQLEKYXTJAECLTFMZGEDBGQLHONIYGOXPVADAIALRGZRMKQRKIXUBXVJCUKWZHIZDGDHUYEBEGVIVEJOBDFLLMXVRYMSHUNBBCWUYWSYPPOWSHHIQVFFB");

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
    msg.setTimeStamp(0.02551608476533651);
    msg.setSource(47432U);
    msg.setSourceEntity(239U);
    msg.setDestination(19245U);
    msg.setDestinationEntity(218U);
    msg.req_id = 37406U;
    msg.status = 190U;
    msg.info.assign("LGVKOSKXECWOSQOYRBOFDYPTZGLXPRZGRCUYTTFBZFCBYULETNEJDZNIKGEAAVEAAVCFCTFJTUQPWDQKLNQWKZNSHHBIPRVRQXMLIOAXXXILJDCMFFNPSAEJYWIDGXKFMYUIZ");

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
    msg.setTimeStamp(0.8969529791598448);
    msg.setSource(52294U);
    msg.setSourceEntity(48U);
    msg.setDestination(26296U);
    msg.setDestinationEntity(107U);
    msg.req_id = 27941U;
    msg.status = 160U;
    msg.info.assign("JMDDAPOHEQDMNMASNFJBKSANPKWDOCSXFZICMIZIZCSGPZEFOAZXRQPCYSCWZVEYCKJKUOIJOBTNLZG");

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
    msg.setTimeStamp(0.7438586817085715);
    msg.setSource(8360U);
    msg.setSourceEntity(69U);
    msg.setDestination(44361U);
    msg.setDestinationEntity(56U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.20256992152378805);
    msg.setSource(63539U);
    msg.setSourceEntity(106U);
    msg.setDestination(36156U);
    msg.setDestinationEntity(2U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.14394596775379243);
    msg.setSource(51400U);
    msg.setSourceEntity(43U);
    msg.setDestination(61986U);
    msg.setDestinationEntity(161U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.8957704776188439);
    msg.setSource(33899U);
    msg.setSourceEntity(132U);
    msg.setDestination(48239U);
    msg.setDestinationEntity(27U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.33837730193612325);
    msg.setSource(48727U);
    msg.setSourceEntity(61U);
    msg.setDestination(7209U);
    msg.setDestinationEntity(228U);
    msg.state = 92U;

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
    msg.setTimeStamp(0.05528965177098222);
    msg.setSource(26881U);
    msg.setSourceEntity(68U);
    msg.setDestination(27642U);
    msg.setDestinationEntity(132U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.6050407339065808);
    msg.setSource(50695U);
    msg.setSourceEntity(31U);
    msg.setDestination(33713U);
    msg.setDestinationEntity(27U);
    msg.req_id = 63843U;
    msg.destination.assign("IYWDPWIDSMAONDXKNBFTZBCUNRGQNRYEMMDUHZANQUDUGGUXVYTSEWCAIIXBIBZTHFSBXHWHSKHCBXZEGVPAPAOUJPJKBCIBBVOWLPVFORKGRKZEMGLJNHAWCLQWLRGYSTATRCYARRNYCSJYTWQJGQLLMCWOMDDKSPXFEVEJUDHDQNSYELLKTMKETRZHOIFVUJOHTCOAMOMZQZCYIFUFESPDXGXQJGZWQMPKRBLFNAJPLHVP");
    msg.timeout = 0.8789133940192878;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.9548626204592603;
    tmp_msg_0.y = 0.26933966975891;
    tmp_msg_0.z = 0.9615786464251719;
    tmp_msg_0.vx = 0.7573536939726965;
    tmp_msg_0.vy = 0.9053894356421146;
    tmp_msg_0.vz = 0.5636486504652642;
    tmp_msg_0.ax = 0.9048367922773202;
    tmp_msg_0.ay = 0.6108425330099817;
    tmp_msg_0.az = 0.9535003347814057;
    tmp_msg_0.flags = 60624U;
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
    msg.setTimeStamp(0.05535839002357612);
    msg.setSource(48665U);
    msg.setSourceEntity(194U);
    msg.setDestination(10091U);
    msg.setDestinationEntity(122U);
    msg.req_id = 5303U;
    msg.destination.assign("GAXYRKTIHO");
    msg.timeout = 0.46576701370534335;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.8668019672925033;
    tmp_msg_0.lon = 0.34057262693796164;
    tmp_msg_0.z = 0.601689356483866;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.speed = 0.647415062353979;
    tmp_msg_0.speed_units = 107U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9569689049027229;
    tmp_tmp_msg_0_0.lon = 0.6060431921097288;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MRSVQWRENORFKAIQINLDKFHQGHILGYWPRJBRIFVOHVVIWSZTGDEJEEGXLSQAFQTTDG");
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
    msg.setTimeStamp(0.07846885975993878);
    msg.setSource(31186U);
    msg.setSourceEntity(89U);
    msg.setDestination(33745U);
    msg.setDestinationEntity(24U);
    msg.req_id = 39920U;
    msg.destination.assign("AUAOFXQIUTLRZTGJECZBRMYPTXGOOWRORCAAOMRVUOJNPOTQYMHMPDKMYCLIZYKQBJNIXGYUNAKSSFWZDCFTEXUSGIBMRKHGBATNPIGWSHBQHAMUVLRSNZJLHWCFCROABVBWVPSNPCPLQH");
    msg.timeout = 0.7587194570856516;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CRVKSSUCOEWQGEUFLUIJTACWTCRWYIANJQRZSCUIHKHBFWHTDNZGQFWAXTDBYIUGYHVCYBBNFEJYJYTETAKVQXGWMVBHFPDOBRQBMXSIFABXSOQKELITQZDAPXRAZLNULPGAZCPPVXHVISEJIZYMJQVKZDWJHSMHBFNPMPPJMO");
    tmp_msg_0.description.assign("SZYINWTQPWWOTCAWJCJFSWXDWTCXLPMLXMPZVRVZZJYKAQMDGJBEABOIADYYEYHEKYXGFEUUHBLXFJFMFRHMRVVBEHSIBFYMELOWCBUCYXKVEKTGWOYQXGLZFTXSZSFONNBVNTUUIPKQSODGKDOTSALG");
    tmp_msg_0.vnamespace.assign("ZCQZSPCSIAVFEOQACYFMGHDFVJXNQHGKWRANZKKCWADJEMZWRBYLONGLUQDOJPWVHFPZTOESSTWGWEBFTZDISJAOXIYLIQPJBUNSGMTHUTBLXLAJA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ANYPFLULXDYYJGAQKJJVKESUPSUVVACXTQJQNRLEOMMGPSMVMHOICTYQCZENVAIBTSWDRGVGQRZHWYAOCTWYAFKPLIFKFPFDKRNURUHEWRVRXNDSFASAFJHDNBSQHQMYXMRIZYFNIWKHBBXPDUIQDCILCYHXXMXBLXFGKKOEKDVPGDMHZICAGNEGRSVOEOWBPUUMBBHJPZ");
    tmp_tmp_msg_0_0.value.assign("EXNJDZMGGGFDRKVTHREEZ");
    tmp_tmp_msg_0_0.type = 198U;
    tmp_tmp_msg_0_0.access = 139U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JNUZHOYQRDFZUTOAOOHJEKCASPONFDTFPAEIDBRVQRNVGYGLVXVTSAIQOFYGLMRYXKYFCQEKBJHQSCJOTIMRBYUGXLZNOITBVKEZEMPSEHDQSXAFPLWVWWYAJQMMQHDPIVWQWBZUBAMPXXSWRCJNBHDIEXWLDMCXLPKKWLJCGCNKVRFRZYEVZYFDLUUH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MXEWNPMEYFHCKHTYLDNT");
    IMC::Loiter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 57277U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.00596453615950665;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7086154311110382;
    tmp_tmp_tmp_msg_0_1_0.z = 0.954977633266803;
    tmp_tmp_tmp_msg_0_1_0.z_units = 131U;
    tmp_tmp_tmp_msg_0_1_0.duration = 40209U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9741317847560366;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 136U;
    tmp_tmp_tmp_msg_0_1_0.type = 134U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.6700275922500891;
    tmp_tmp_tmp_msg_0_1_0.length = 0.7473837058408803;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.9159780184261226;
    tmp_tmp_tmp_msg_0_1_0.direction = 27U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BALJKHUWZGMVTBKBWDODECVDVFQDARVIZMFRSFQWNVOVZCMUVLQTUPTNJUGCHGIZGBKTGBRTSPJYCWELPZMGYXSQFH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ButtonEvent tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.button = 65U;
    tmp_tmp_tmp_msg_0_1_1.value = 102U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.33173728399153046);
    msg.setSource(31926U);
    msg.setSourceEntity(14U);
    msg.setDestination(39567U);
    msg.setDestinationEntity(75U);
    msg.req_id = 42830U;
    msg.status = 62U;
    msg.info.assign("PAHNLHDRJZNJTCFLBJLFQDZNICJKJWXTHOVUQMTOLZKSKXNBUAOQFBHKGEFQMBOYTFSANUCIYBVIOAYPGEETCGQUHGYZZYBRLNCPNYUXDFXDMRTUKSJZSNDEOOYQGIVJSIKDOILQUDTFXWGGUWCZBGYEEEVRJWTPIEMBMBV");

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
    msg.setTimeStamp(0.1659113114252092);
    msg.setSource(30731U);
    msg.setSourceEntity(158U);
    msg.setDestination(62803U);
    msg.setDestinationEntity(180U);
    msg.req_id = 41857U;
    msg.status = 97U;
    msg.info.assign("VJLCPLTSXXSZCSRBILIYJDMDUQAHFUMABGMRFNLEOWVKGKRXXVIHDTCJYXXWQUGQKGOJSRJYAZTSAMEYEMJYCPNZJIIDZOLZWHNLJUUADFBQOEKXSAEBPGNWCDMHYUYQKKFWBHLZOBPTFHFQBYDXAWDVAUONEPJNLTAEKQPICDYRRBCLNKVNJSGRHEGVDWFIUVRPZISPRTXPHGYWKEOZQRCVUFOMFOABESTIVMMWMHNSUBFPKTWZCOI");

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
    msg.setTimeStamp(0.44004015805058116);
    msg.setSource(53061U);
    msg.setSourceEntity(158U);
    msg.setDestination(11159U);
    msg.setDestinationEntity(123U);
    msg.req_id = 1417U;
    msg.status = 52U;
    msg.info.assign("DIKLMRUREXPUXQVADWMSTK");

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
    msg.setTimeStamp(0.2737371780668948);
    msg.setSource(42319U);
    msg.setSourceEntity(73U);
    msg.setDestination(36603U);
    msg.setDestinationEntity(27U);
    msg.name.assign("XQKFUONMBACDRXBUSBTNPJUFBCPGZMVHHZQJGOSHCIIFMBYVTNIFGVLYOTBNNJXDGQIWGDXQQUMTGSQNMCKPJBKYHGMVYASCYHPIJKMYDP");
    msg.report_time = 0.90787513073485;
    msg.medium = 145U;
    msg.lat = 0.849849279113514;
    msg.lon = 0.1043744021382701;
    msg.depth = 0.31970331101724214;
    msg.alt = 0.2326390627134779;
    msg.sog = 0.9526209365020485;
    msg.cog = 0.14263035351441888;

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
    msg.setTimeStamp(0.43475876465816665);
    msg.setSource(33539U);
    msg.setSourceEntity(2U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(26U);
    msg.name.assign("BPSTJQAOUQZTGDZGMRQFTXGCLKPQXYLNHOHNRUJZFSMLIBCCSTIWYWIYERCGPOOTRADFVDKMJHNQWTMOXOVZBWQFBFULPEDITMTNAHRUMXKZZJNSZCXRKCWJFMUBXGHQUSLGKPNTUODFSADEJVBIKXUGHVJSUAAIKCXZSVBDVPYRWPYALDEVWUYZGWIHLYFYMEQPKXRAFBOJEBVRISMQXGWPVPESNEAYLBICONQFKK");
    msg.report_time = 0.22461805622010556;
    msg.medium = 82U;
    msg.lat = 0.6180182302808812;
    msg.lon = 0.08192831165833747;
    msg.depth = 0.2244309630539335;
    msg.alt = 0.5022962487533776;
    msg.sog = 0.744331072781497;
    msg.cog = 0.7677043555432678;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.7447287893049708;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7906763618346349);
    msg.setSource(14803U);
    msg.setSourceEntity(65U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(237U);
    msg.name.assign("WAEQEVPHAKGDBDNAUUTNBKUQCIHHFYMKPXKMDFKYTOAWVOQSDDGZGPORQFAJYSDZVKOCVAHONFYIXGEIGQVWZTGRLJOLHWEYCHDZGWIIZMMHBOAAGSGKBKRUENYXFNPEJNMBNXJHRBDOSMRPYSQEVNWUXZVQXCCYUFPJNIPRJBFVCIXHTMSTMLPDECJTFVXUWAUZUUHRWZTVMSOXRQFN");
    msg.report_time = 0.49905171824017236;
    msg.medium = 235U;
    msg.lat = 0.619697556733644;
    msg.lon = 0.4519543386146694;
    msg.depth = 0.23404316319321927;
    msg.alt = 0.04291132348858051;
    msg.sog = 0.19910223552117645;
    msg.cog = 0.11271092097439894;

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
    msg.setTimeStamp(0.4028863246647415);
    msg.setSource(49299U);
    msg.setSourceEntity(229U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.011951594832729784);
    msg.setSource(52833U);
    msg.setSourceEntity(128U);
    msg.setDestination(18817U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.22782766046120606);
    msg.setSource(53612U);
    msg.setSourceEntity(138U);
    msg.setDestination(44388U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.21204316287674696);
    msg.setSource(10497U);
    msg.setSourceEntity(231U);
    msg.setDestination(43847U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("QGWUKCZPUKQWBIGNMJAEOOZUQLBLZEEEXFVHODUKRKMRNJYDNTQEETMYXCFYPQVIHZDIPXVJFVOBMZXLCVUJLXGKHI");
    msg.description.assign("UUZQEIUTUTAYTKYQTCKDCXWNDQLJXLCWFOKIQHWVGEVHXBVYIYFMECXLVQUHGZHBSCNDNYIAECMKPKKQNNZJIRAXBRJWZLFRDXFBTYVYBEGLKEWSAEHXLPIHQJMPRKADGYZTIVL");
    msg.vnamespace.assign("YUXNSLJOMDIUGCFOOHDYSOCRHYXHYDDCLBUTBAFTZRSNGRFJUKAUGZDBTPEQFGAQNVQETPEYWDSRGJNBPCBOYBTZQGEBBWVSHZP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NINMFGRCTPDZVWZOFBMNAUEMPFUSWARJQVYXVJWDH");
    tmp_msg_0.value.assign("QZOPHEEOVFVCXNSKYUAONWKRCGYLAYKNXKCQDUUNOILXTKDNZLIPHSJKCOQSEXUNQAZPZSBSF");
    tmp_msg_0.type = 203U;
    tmp_msg_0.access = 114U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TTKMZRCGYIFBRSAXGBWRDZDKLPQJPTIGUWCZCDTUOUOZLUSEJIOMJNLASVWXWPEIMHTDUDKBIMGDPIFUKHQXFBXIVSVJRUQXKMGIACDKXJQPQTGFKGZCLXAJHNLYBHAOECGYTLLSSQJJFLBAOMPNRQYPTZSWCIREIYMDZZEYRQBBVNNHAMEOZYL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OPBRKDDVQGPBYHOEQHZXRLNCPIGFLTFVWKRGMYNYKPMZIUONACDDXFAMPZRCIZYHSFHTFYDLVRFBKEMUVIRSCOZMHSTOPEHNDBQAKUCUNXLWDXMRIGQZJLLFJJHTAOAJAFNSUAIGXVTYEBQW");
    IMC::Alignment tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 46514U;
    tmp_tmp_msg_1_0.lat = 0.31477888065749127;
    tmp_tmp_msg_1_0.lon = 0.18802006403139893;
    tmp_tmp_msg_1_0.speed = 0.19345634820983504;
    tmp_tmp_msg_1_0.speed_units = 188U;
    tmp_tmp_msg_1_0.custom.assign("HVMZTYHRYAD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PH tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.019870253352817113;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_2;
    tmp_msg_2.value = 0.4812996963530942;
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
    msg.setTimeStamp(0.4950345171977367);
    msg.setSource(18227U);
    msg.setSourceEntity(160U);
    msg.setDestination(65038U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("JLMFHGQDBBZHQRYKKWBWDHYEVRVKWHULDDZPSQXMCVUTGFTYEKEGAIJBYIQDXSKZZXIYZLWEXYCJUXUKYOJVUWVNTQDCMHLMMMFYAMFFSACACZRJDUPBNMNSNPTICOJDACMLLAQIPNGGA");
    msg.description.assign("NTKIOASRJWBTVYEOBJRONYAYBNPIDZNADIPUEYOLMFJUZNQSXZXWSYLXRMFWIWDJZQEADLFJDLBLFUHACTEJKTRFSGNQLCJXSOGGHYZHWUEJGJBANBSRIRMGHHRDBBTXJPKQUVVFZKWQTIUPLMEGDVIPLQVSKWGNXYVVKYUSSIXZGFCEICOVNUWCBLGRXKKQPPTOYLDVRHCCZAYOQISTEAMXBMHNOMCRQAZGVPFKHCKMXPADEQHEO");
    msg.vnamespace.assign("BVSTKQBUPIVGFHFJGFKDRNXHCVJTBJASYXXZDTDASTPXDWFCXMRTGNSHBEYQNGPRZPOHKZWYBCBEEYLQBLQEOINMHSHUIMKJJCGHYQQWHA");
    msg.start_man_id.assign("BLXBKAVTHXAMUJHXOOPPZYECJCIHCOJIZNGJUMMRGFXLYQTJRLPNSAYWRIYUBIS");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ITRRUNBPCWMLJKPIGTVXGGNZXSUEFRVNEJRHDKHJARRDROOVKLGHFJKQMZYQBGCBXIECEFUFVMOJYJBIDTFBDVDWGFNFWMXUNLEMACOLMA");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.15995918050133773;
    tmp_tmp_msg_0_0.lon = 0.9227161394941199;
    tmp_tmp_msg_0_0.z = 0.16340432686800876;
    tmp_tmp_msg_0_0.z_units = 57U;
    tmp_tmp_msg_0_0.speed = 0.3242182393453671;
    tmp_tmp_msg_0_0.speed_units = 167U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.234665365642985;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.18292484607096016;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("RGKTOXCNNKXHKHBITVJODDGZTMXS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5611070272841154);
    msg.setSource(24914U);
    msg.setSourceEntity(141U);
    msg.setDestination(2288U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("NPFAGBOQYYAKJZBNCCTLOBLNKHFIEWUICKGUYJLNNIAKKBVHYDMJLSBQPLSGLUEMUGSTYCSXKMNODMDLRGKNRWNQTTXQBRVWRIVIZQEKSLUUFAEXAWDZWXLCSPHVWJBSOVYDTJBRRTOZVJAWFYNAEFJOWHOEXZGEYJIHVCTCSZCMFMFIXWHUAPRQCZQDENDUBXMU");
    msg.description.assign("QPHDGTRYRCPUIIYRZVWYNCEFQOUKPDIFTKETCHOCWZGZQNIFVDXDHNGWMXDHLCLWJTUPUUZJBNEFSNVYWVPDXACZKYWCFZFGSUWQKDLREZVYAVTLXBEFKLURJMODAMIBJSSHKAERXLZIUIHYGBTJKOOKASXRMUQFLEYRADPWNHGSAPSMPKVSPSMIEVDACJHBTQBOOFGLNQMMNMJQYAPXAVTEWJUKXBEMIBOHGHIZNOGR");
    msg.vnamespace.assign("LQEUKCDACSVICFVJBVPGAPGIAXOJKVNDZUXHZOEFNZCHQYDEHYNKOULRRTHBJXEUXFAKMJUJRSFPRSLLCXVBHHNEGXOHUWYRPMBGSOLLVLBQRBDTWAKYMZNB");
    msg.start_man_id.assign("FDBNNDRDCTUCJBVWXOWCLPZQTPJXQPNEZJSXXZIOKRQRKZLMKSLGDQARQGLVYCAZBUYKFPEKFRJXDAHLUOYDXOHHKZQKBESGKNOQCUVYGPJZRILVTWGPCDNSEAWNAPGT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("IQNSVLMTEUIOAEJVIHLWIDTLXXIYDBCATEUKKTYJBGLSNKFBJQJATFMZPZOORHYMWMHZGZOJACMEBNFSPRWVIYVKOGRCBRDXEVOQYKJHCEPMUHAUZMVNJKFQYNTWWLGLDFRDLACVHFQXCFBYWAXEUGCNTDSKWZBVNORDHOUUINRSQMRPETSIHMLGKMXDWPFLXJBFQAHAXREPTJUZNODZIRUSXOVP");
    tmp_msg_0.dest_man.assign("SDZIZOQAOQTJEALDZJOHGMBJKCNXIRUUKYJBYETVDEPUTQVRSFQWCBUKQIOVSLCTNGMRXLQFTSZJCPAIIRFRVMBEUSYXMWNTQSPFOIBRSBHEDTGFICAIHJFPWGLHUPWWOD");
    tmp_msg_0.conditions.assign("UMWVBJSQRJXHJUYVMH");
    msg.transitions.push_back(tmp_msg_0);
    IMC::ExternalNavData tmp_msg_1;
    IMC::EstimatedState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.9749071631509081;
    tmp_tmp_msg_1_0.lon = 0.8427581672310644;
    tmp_tmp_msg_1_0.height = 0.6731995397612286;
    tmp_tmp_msg_1_0.x = 0.2272660850819077;
    tmp_tmp_msg_1_0.y = 0.26443270059728974;
    tmp_tmp_msg_1_0.z = 0.5058732981378269;
    tmp_tmp_msg_1_0.phi = 0.38119655618360404;
    tmp_tmp_msg_1_0.theta = 0.3642486680095959;
    tmp_tmp_msg_1_0.psi = 0.8999303005356747;
    tmp_tmp_msg_1_0.u = 0.21001982752937076;
    tmp_tmp_msg_1_0.v = 0.8828593415005296;
    tmp_tmp_msg_1_0.w = 0.7167538466879834;
    tmp_tmp_msg_1_0.vx = 0.9688528473588606;
    tmp_tmp_msg_1_0.vy = 0.5623374432560053;
    tmp_tmp_msg_1_0.vz = 0.7713405375228117;
    tmp_tmp_msg_1_0.p = 0.556081003473202;
    tmp_tmp_msg_1_0.q = 0.8925257661482648;
    tmp_tmp_msg_1_0.r = 0.9751459840987774;
    tmp_tmp_msg_1_0.depth = 0.9451573633213584;
    tmp_tmp_msg_1_0.alt = 0.3393026670508805;
    tmp_msg_1.state.set(tmp_tmp_msg_1_0);
    tmp_msg_1.type = 248U;
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
    msg.setTimeStamp(0.6482366664778102);
    msg.setSource(45119U);
    msg.setSourceEntity(120U);
    msg.setDestination(18411U);
    msg.setDestinationEntity(89U);
    msg.maneuver_id.assign("BNJHICZSVOUKWFZCZGVHWPNEXMMCAKYRCYEMFSYEXTMAHOSKRZZVMSHDTQOGHPWMLGTOHIFOMTPXFBSD");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 43713U;
    tmp_msg_0.lat = 0.7334317943977858;
    tmp_msg_0.lon = 0.22064319303679514;
    tmp_msg_0.z = 0.6104727737618745;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.speed = 0.4269467770231756;
    tmp_msg_0.speed_units = 97U;
    tmp_msg_0.custom.assign("VRNHEVTBQOCDAYIASXFJZTCZZCYURPSMYZXYPJGNNMNIAVKZRJIWBMKJLEIJEEMKVCAMPWLHBNIZGTEFEOIXQDWLXTDCTSWOMQBGASOFXQVXSDORIQYPLGCBQHFLYXLHLCJBGA");
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
    msg.setTimeStamp(0.7256299972654823);
    msg.setSource(64196U);
    msg.setSourceEntity(156U);
    msg.setDestination(8540U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("WHZNCFVITPGZURVTDIOZXTFMEFPYROYECCQIKIRBXUBQXGSKSBNTQGVHFBERJOTKUKYWIKIXEMAAQLJFUYHWBOGSJDFUNVFCXZHLSEEBDUBHMJIOXASWDBLADKPPASANENNIZQL");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("CSZNBVBCBQNBQXYCMIOCDFLTNDCMXWPMUIUYLJYRLQZZXOIASSGMPHXNHPTEMUDKHIMTSGNRTSJBWAFGPNSVJKRWKTXLZBZISIQJQXEQF");
    msg.data.set(tmp_msg_0);
    IMC::TotalMagIntensity tmp_msg_1;
    tmp_msg_1.value = 0.12231033115634726;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionSubscription tmp_msg_2;
    tmp_msg_2.sessid = 622135490U;
    tmp_msg_2.messages.assign("WMFTMIMPVRJUMQXWGWENLCRPOSJOQMELGIBIWSVHFAEZSEFCDWVQZYXKCXTIJGNPSKSUNHOTRWILZUURMWYDBUJNJYDZYTOAAEJCTVAYPFIEIQRJKFVUAPYQRGHPGBKZGPQZLLEMAETYOVKODDVFBUNBZZHAAETYNCKSDOUIMXVRPXQXKJTWZIDNBHHSSAVNHDUQBFSYHRJWBOHCLNKQ");
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
    msg.setTimeStamp(0.846238057539488);
    msg.setSource(64008U);
    msg.setSourceEntity(185U);
    msg.setDestination(19582U);
    msg.setDestinationEntity(132U);
    msg.maneuver_id.assign("CDIWNBGODJACBIKPMGPZBVXSZLJGUXQBABXAQDMSRUVINVLLYKTYNYRZMORHGOPHKQSTGTJOHQZRLFPGVFWIKLUDQGIXNVBE");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.853376321496895;
    tmp_msg_0.lon = 0.20995104468119552;
    tmp_msg_0.z = 0.12362826984465547;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.speed = 0.2429656493405239;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.bearing = 0.14654019094729798;
    tmp_msg_0.cross_angle = 0.40441955176829025;
    tmp_msg_0.width = 0.5108375522496843;
    tmp_msg_0.length = 0.10581645252391536;
    tmp_msg_0.coff = 246U;
    tmp_msg_0.angaperture = 0.19174177383657143;
    tmp_msg_0.range = 35206U;
    tmp_msg_0.overlap = 164U;
    tmp_msg_0.flags = 95U;
    tmp_msg_0.custom.assign("BBWJJVDHVLHLECNFLFMPQYTXNEHFIGZAJDXBWRLUFWPAFAHAPBTAUJFWJCYIGRWFTHSKEGBTQGYLHIPWUJOSXKINEHIDEKMMTOOGCBHIFMPRRONYPKZJUUZXQVWOVECWMCHEDRDYZUZNQNAZEEGWEMDSQQSJASVYSSGLHJPUKXFVOLZDS");
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
    msg.setTimeStamp(0.2147422127933113);
    msg.setSource(9756U);
    msg.setSourceEntity(249U);
    msg.setDestination(59691U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("JQZDNVRIKIKVRRYOLZNRAXPYADLYCSGUSITKAHEJ");
    msg.dest_man.assign("XPFFRTQCIJTSEUYDRXYIBUDGKSVWNZQNARGPWBOHFAQEJOBGPZMVPCEJYCVRTDAAZPAKRWXLJWYSHNSTKDAUQEIYMXNSVHVEHFTMTKUYRVJBJLWGDORHGZYNLPCSXOLLDHUUVOSWBGFJXMOYYQVZDEBTOGWDNCFXHIGNCFCIIDZIFVKCXPWBQMWZJVEELNMMAMEYSBUBDA");
    msg.conditions.assign("HNKABAJDMMMOUCSEDJWQXNFFUYSNPCAZWUDACLUJKTEVOXGPWFEMINYBUKZKSRORXTFYAILTFSNUHOKMBOJTUODCLMZKARQQZBMKMNOLLYDEZZIVR");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 39350U;
    tmp_msg_0.lat = 0.10554774392675181;
    tmp_msg_0.lon = 0.11743555191620636;
    tmp_msg_0.z = 0.6167278048964594;
    tmp_msg_0.z_units = 240U;
    tmp_msg_0.duration = 36289U;
    tmp_msg_0.speed = 0.9448848286646281;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.type = 67U;
    tmp_msg_0.radius = 0.0693656592828088;
    tmp_msg_0.length = 0.7571808455914599;
    tmp_msg_0.bearing = 0.5282229690614018;
    tmp_msg_0.direction = 229U;
    tmp_msg_0.custom.assign("RMIFDVGXPMRAHZSZUQDVPORLBZSVYNMVNPLWUBDHDGVLTDLDGIANUVCXVCADKOYKRWIXUVKOCEFNGKHLAXTRSZTOJPQEEGSMPIJNCNCCZBIMFPSEK");
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
    msg.setTimeStamp(0.035339109276150915);
    msg.setSource(16761U);
    msg.setSourceEntity(246U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(199U);
    msg.source_man.assign("AQGHLFEQNILGLDCKRYKTTTOBQGIPAXOKINBWPQQUQGNBRZUYNAJCIFDMZANCBGKHAXNBHZEZPRKCSQITAPXLWTMMBVIZHHTOLUNENVROEDLVQDTOHOXTEYLIDRSOFWGNJUYCMQEXIGFSXZ");
    msg.dest_man.assign("LRODZGQUHYADWQZLCZWBYCXZONMGOJIJGFHPAEKMEANPXANDWKFFFKFJLUNMFXCTCZLXCKVABUVZXVXSTLPMATWNINCJEJEOSFHZSRTQSVUREVYIWCKDOWSTD");
    msg.conditions.assign("NIHQBWXDUTOZVZUCNHPLPDYVOBDPGDVIUOUAKSXKZHYJYBSPCRUZIWIMAGRKAARXKMBCSYTTMUCGREOPUCDOJMUWGGTZEALQPABVVMTMBXAMRWLJ");

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
    msg.setTimeStamp(0.46237340202282107);
    msg.setSource(22898U);
    msg.setSourceEntity(89U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(251U);
    msg.source_man.assign("BJGODZRVPLISEEQRALNTPDZLAUPNFWZCFHIRUIDFMDYRQIABXCWGPEOPANGALUONGOVOCWBKVJHTBICJEXSIKTCDQXYQDVZQLDDZWNTKUOJRYXWFKGGYYIVFTSQJPTKHKKXFWALMUMXHKWPDKWMHJRJLCFT");
    msg.dest_man.assign("FRGFVPBMXHAHVYCJMICBJEKBINDCPTGPXDKUUQAWLJONQJZZPSIWGSMKMZEFJGIMNWBXNLOMIDICORTGHDHNOKAPTOVIRCBJGRQWYHJFFUEPVWTSLESQDYFBYAGEWEZRKCRMWHTRZAGKUTYFBBEVTKLAOVQACJDUDXLUPDXZJEKOISLKD");
    msg.conditions.assign("VIMZAKHMINVDAJTNUJZCKKNMQZQXBCUYARDHLKIUHFOXJPGOYFODHTLMFKIZRXHCXLKPQBLCUTRCTGASEDLCGUYNJBJEGHVVMRXXSJDZRUYWUISKRSBAQSGKIFXVQALQPTIKSECYMNQZSBMDUDQGRTHPVTEPAGVVMJJPNQXOJXDE");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.6903396471336065;
    tmp_msg_0.lon = 0.18007568127978346;
    tmp_msg_0.speed = 0.387078313589966;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.limits = 254U;
    tmp_msg_0.max_depth = 0.22179889717121504;
    tmp_msg_0.min_alt = 0.9251708142635954;
    tmp_msg_0.time_limit = 0.8714553149606838;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.03738780152925647;
    tmp_tmp_msg_0_0.lon = 0.8705263181571339;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("GPWGSUJQRRVXRGVHFZZNHTWBRXYGLKIOFYUCEBFMYDXQZWQRVACMNOQVPMOOJGYZLXUSRLTHSJFJDWPICNSUSESEGWRFTKWIUAMKDMVS");
    tmp_msg_0.custom.assign("JKUYJUSXCLGTQDXFNYWAYLADMBJHHOFTYANUUTGSYIVBJRUJVKETNOPXKGGRUKYRKNWXLVMSHITCBNZFZAENPBYXFQHWCRAECTEPHDPFUGREMJOAHMAFNKVJICWQVPIPOLJXIGW");
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
    msg.setTimeStamp(0.27949672195563446);
    msg.setSource(12587U);
    msg.setSourceEntity(140U);
    msg.setDestination(61111U);
    msg.setDestinationEntity(105U);
    msg.command = 102U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GJNYCKDIQVBXHAMXXFXWXJZNWKLCZWREFUOTDBWNFEZQSRPHCBMXVVXKXLTLEUNCKOYYUGFDFSCUJBWGNLPVSOPNGQTAHHHVUGWZYISKQEHCQULLWIJPZBITQVEHHMTYRAIFIPDJOISOUDEGRJUAVLWLBJPYFY");
    tmp_msg_0.description.assign("ZRHBQWSHPLPVIFHVTXCZBUZGYPZFFWKVYFNMJTGZSXKYDMMZLBACRCRXDUCWUNADECWSWLZPKJLLXDAGCSRCDNAZVRQTLKOTQKEKIJYZNMNABKAFEUQVUJWPYPMBFYWEQJYIOOFRVIQGPECDRJWUXLTNQBHNHHSAXSWMULOHREBBZADNTMLUGUJVISKIXSBOSTQOGPXYJFVKTEPSMVGGFINOCDEYOMMJQYJRABOTRGVL");
    tmp_msg_0.vnamespace.assign("BNIKNXIKDJHYLVVOKNDUHHSRPYYVXGMUARPVYPTOREPPULBPFTEGMUGOWQFECIJMSYTLVJMCGVGQKTPUHFTWJVSRAIBTAWZLWKUQTCFKCNCERMAGFARLVUSTRZQPJ");
    tmp_msg_0.start_man_id.assign("JDYIXKFNTSGMZEECXJTTZNVDKALEJLNSQCVVPMQYUWYZWXGZKDGDLWXWZZXDRRGIHLCHVUIAQYIPPEDLVGKKOOFFCASATCJEVSODWKUBKJHXROQNWMXSUZTYYPZWMNPIHBBRCBHOZF");
    IMC::Distance tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 40U;
    IMC::DeviceState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.06279790542830999;
    tmp_tmp_tmp_msg_0_0_0.y = 0.7101177973940423;
    tmp_tmp_tmp_msg_0_0_0.z = 0.12034157380992239;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.5501325621495853;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.15000042195432495;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.5955093989781899;
    tmp_tmp_msg_0_0.location.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.value = 0.8110252670682883;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::AssetReport tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("HBOHCHCQPBYZAJVZFCZPOLEIXKBVLETUPLZOECLSFPQJBQCUWMNRRDKYKSKYIDCSXKULBYNRECRBOKVJXQUEGZUNYYBFIGMFPDDAMJWGSIMRMAZHKOMUDJWTVPAXWJOGAUXOHIIDLFZTLCVMRWWHKQIYXTSILGTDAACSNBMSEAXFDHTSGWARGOFXFGBETMTGDLSUMRPNFTJINEXQJCHXJTAOUVLKOZGY");
    tmp_tmp_msg_0_1.report_time = 0.0005608178884891624;
    tmp_tmp_msg_0_1.medium = 75U;
    tmp_tmp_msg_0_1.lat = 0.6070968093070057;
    tmp_tmp_msg_0_1.lon = 0.8804693021840008;
    tmp_tmp_msg_0_1.depth = 0.7887480852935485;
    tmp_tmp_msg_0_1.alt = 0.7983763750501525;
    tmp_tmp_msg_0_1.sog = 0.679411025216211;
    tmp_tmp_msg_0_1.cog = 0.11904418242907866;
    IMC::AcousticRequest tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.req_id = 20545U;
    tmp_tmp_tmp_msg_0_1_0.destination.assign("CFLQDLQDPOOOCAKD");
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.31489621674243595;
    tmp_tmp_tmp_msg_0_1_0.range = 0.6096737866274308;
    tmp_tmp_tmp_msg_0_1_0.type = 56U;
    IMC::UsblPositionExtended tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.target.assign("SRLEPIMVSTMODNQBSFHGSPKTCHDGZWYDIWQRHFGFQTSYISNZTGDETREGWIUUYHZFXMCRYRFJADHJW");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.028726024151477958;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.5173684623816991;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.8768772290565922;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.n = 0.9133322409009843;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.e = 0.7874992006149896;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.d = 0.05492081272364324;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.phi = 0.570868432812642;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.theta = 0.07392644379452606;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.psi = 0.5244832945704535;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.accuracy = 0.29060803608286556;
    tmp_tmp_tmp_msg_0_1_0.msg.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.msgs.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.455082959485661);
    msg.setSource(15626U);
    msg.setSourceEntity(252U);
    msg.setDestination(37931U);
    msg.setDestinationEntity(201U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KSWZJQHQKDXPBEOOASNDTZKJBHKXUJRNYJMQROKADGAERAEFTFTWGXWUMKSJFKTDRYGIXKPQZXIVSGVZWUBY");
    tmp_msg_0.description.assign("GIVHRVPXJNGLGKPXSSPHTDLIEKJPRCHMXQSBFASDVXBRETIZKBAYZFNDMZZJCNNVJXDAIYWCRHMVMDUYCFOOFUIHLLFQLHJUILVFVNNNHUZJBMHGRATMWBEQQQHWIXKDGVRSTVEGUWKPJEPDDWZUSAUBJOPTZLDCXSZAXLMGFFPWWBWEUKQASQQFBOLJXYYXFOGNYWMGIAZCSICCEQOTKCGTDMBYAJQWTIOKROOMYYNRHCBRE");
    tmp_msg_0.vnamespace.assign("MIEJNEGNAYXSTTYUUJMAAQXAODDCJBGPNIAQZTREWDACTIDXRHPCVOZHURIUDNHEPGUXWGGHXCHPKZFHFFFEWOSHFJUBEVFTKTCRMKBTANBYZARKZDGCJDJQCBQYIPVYNQLINBTKCVWXWZWHULGZDTBSPRWBDOC");
    tmp_msg_0.start_man_id.assign("XUVXYWSAPMDXHRMLVTHAAUWJOQPGEFFAIOMIEIHNNFBYORXBNQXWXMYLGLTFUXZZLCINJYKUWKDHZKSSAMPYDKZCMQZIKUFVJFPKOEQYZLISERRHUSNOKKUQOSHASFHKHQOOLLJTQUNWYEEPMJZSCNPBVIPVDFTRRGJFJOMBCIGHGBCDVHWULBDZWLYILDGJGGEXMNWVTCBCZTBVRAD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KBACSKBMEAFQQYWDKGJQWLBXEQQMTIKMPNYEEITBSUYTZBNVJZDKCSRDQSETNQZFCBVACMOWHOTXGXLHBFHZWBADGOGYOROYEPVEOPORMZEYNVLDUBFYAGYNUSGPLICUUTNUDHYLIWUFVNKTWIUB");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 57411U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.16518541995285907;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6219309938096773;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4968439700374102;
    tmp_tmp_tmp_msg_0_0_0.z_units = 99U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.583439450845383;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 168U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.08478568391792896;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.7884523192727804;
    tmp_tmp_tmp_msg_0_0_0.width = 0.8714979784389545;
    tmp_tmp_tmp_msg_0_0_0.length = 0.8165569831352406;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.7065041156921122;
    tmp_tmp_tmp_msg_0_0_0.coff = 222U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 32U;
    tmp_tmp_tmp_msg_0_0_0.flags = 192U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NBSHTXBTNAVQCCPAGAOVZFFXDLCGWMOVMKQTWEVXKWOCDDVZPYHPCUMDWYSRUBOCHYOQQARCSRDHBXELJTBMEEILVTLGIUUJYNUZNSPUBQBNZZLXNZIYCPDXTMHOQLFOODW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 66U;
    tmp_tmp_tmp_msg_0_0_1.error.assign("UQBNDNISMNAFLQIBOFPIOLYSNWWRVADJXEEAZMHEOIEOULUPKFMTHEJRMNWABQRGLTQWTVGJGVYLEZKZZQLDSIUPZKWUWJBCSADAWBFAGNYXZTXVOXGVKCQARPCFTNPFZIXXLWSVMDTEKKHQLOFPYMBVLITCEDHBDPJRBXCCNOUOHRRVVQTMDARQGHWULGPOMSYIFEKJFKXZOWKCJNJCPYFHRSCUHEBGAZGCVQSSYYIX");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KIVVIMAKEPOUQROWRYVZVOKCPFGCN");
    tmp_tmp_msg_0_1.dest_man.assign("HLJQTIBLBZCOPRONWGVSURDULQSOQMPDYJOZBYIZAFNKGDXUAIMSYKGQOFIMIAULXZBKAHJHWTCHQRFNDMXJBRVUASNKDGKJOFHCCXEMYBINBEYTRCKEEFDUXIOIPKPQHZSWSNHHJMGMVLVPCDWGQPPWVDBMJYNYTWLPLUXREKVRCVNJETEGTSZPLWKSQQQBECROWAZFJDLZHXVINZZFV");
    tmp_tmp_msg_0_1.conditions.assign("FEHKVPFRUGEKFNMZYHIQRMGRXZDEOFEIRSRKCUVWWNDGWSLQTESNVMGPLPAYKXPYFHMGBAQTYDSAPDCILRQVJPTBTPXHAZCAXDUXWIIIOBJHJLSMNPEYFWNQTTUJFVBOOAALGJQNVQCMDZONBSLSGTNPCZCUOLSFJKWJXJHUQVXSDTDZVXJIGRBYCELKMIRFEBDMWKNZYOZQSUEABGKLHUXJLVBUYAW");
    IMC::TrexToken tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeline.assign("QZBAYRYMPSNQOXWZRFWKBVCPFTJPGCUZLMPENRGWAUIVUNSSICCQREJTWFFAGMLSELDFFDHZRSLHTBVQXULSBXVKDSTMJVG");
    tmp_tmp_tmp_msg_0_1_0.predicate.assign("TAQJFSKFOLLNHNOLRAWBZXXXPFBQXEXPUQPUMVEGAMPJINFLPKYNUTURTRXTSOEPDMWPYGJ");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleFormation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.9298567094287632;
    tmp_tmp_msg_0_2.lon = 0.4100615447600946;
    tmp_tmp_msg_0_2.z = 0.8626947489362992;
    tmp_tmp_msg_0_2.z_units = 89U;
    tmp_tmp_msg_0_2.speed = 0.998989771517714;
    tmp_tmp_msg_0_2.speed_units = 240U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.vid = 30460U;
    tmp_tmp_tmp_msg_0_2_0.off_x = 0.793003943282524;
    tmp_tmp_tmp_msg_0_2_0.off_y = 0.5075103135668658;
    tmp_tmp_tmp_msg_0_2_0.off_z = 0.5812016811852948;
    tmp_tmp_msg_0_2.participants.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.start_time = 0.17538587448714427;
    tmp_tmp_msg_0_2.custom.assign("SQVUBOOXRGKSVZZKCWBTBFXCJPOMNNRNLAUBDIWQDZRMXPYVQTILTOETJBLYYOYMFJXFXJGWWMKKJTBHELGHRSH");
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
    msg.setTimeStamp(0.3764971669770343);
    msg.setSource(22708U);
    msg.setSourceEntity(232U);
    msg.setDestination(591U);
    msg.setDestinationEntity(112U);
    msg.command = 74U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RXNGLVLAEKUHWMWRFNHBMWQKEPZXZAFVTSGABULRUDXGAPUBJMUXOMZZYBBNFIYVGOTLKICCUFBXG");
    tmp_msg_0.description.assign("DEKSIJRIWUTGIDKZDWYZQLMFLBZBOFNKQBSF");
    tmp_msg_0.vnamespace.assign("ZCMIIIJLEIRNVCDNBPCKYHEDQV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VNENLZWGGPUTZIQDBPHPRPXDUJYHOJSHHCFMGZGKUDUQGRIBLMIUWQNYXWXZXYABRNISIGRSKVHBQFKSFEAFXSJ");
    tmp_tmp_msg_0_0.value.assign("AWBVHMHAVXBFVTNWISBIRYPJCNWUEPRBCMZICRMVMPKJZIAKOXWROHDKCJJVOKEDFHWDGXLLKILXGPEHSTZZKXJSZXOIRUBNYPOCARLQ");
    tmp_tmp_msg_0_0.type = 183U;
    tmp_tmp_msg_0_0.access = 28U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QCKXCPDKEKDFMNEILXYJHGNACBYWWVHIVUTUMXULBSDNRPCILJPEFBSZGIFRQKOQSZIPJOFZRRRELTAMJPQFAHSJSDECJCVJRFXGXGMZIDIAOSUTNODWVDAUKEHTUUIIIABOBHYKOPMSJWSGYYGZEZFLFFRWAEHTSNZJ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FJMCAMDWZDAPLNUCKQSNDVSGTMPLFUIYSAETTKHJHFCDOLGTITJCZABLRBGOFRLDVUEAKGRDYKDHBHYHTXEWBUVZGCBWPWGGJHFQMLRFAZVHHUXGNXKFEWVVWWUROMVJEIQJQCZSKUXSNPKIEQGQQEZYLLIVTYYJBIACF");
    tmp_tmp_msg_0_1.dest_man.assign("JHFXAGOYCVJGIZGLGLVWBKFFHICSBOLXQIHQOAHCJQYZFKYMWHKEDZUXUGBEPUTLAWLNVAYXHBQLYINAGOVTZGBIEZHUIIRUEPREJKCURSXNZTROGOZMOSBFXVTWPTZUMJJBXQUVLHLPNCISDDDHARQTPTCBKOT");
    tmp_tmp_msg_0_1.conditions.assign("EIPVGMRZHHBPPWZXFCALEYYVUBFZGPXRIMQDKMXNWJIFBTBGXHTUZASQKFAMUFIQDDBEUMVQMJAYPUASLXRIVFHWDINLQSNZLOTNVJYXZHNVQMAKRGJQSHOYOCBBJJAJTQPYYJJCJXBCYMBLEPYNORYGEVDQPWDSDVCLLUGENVCN");
    IMC::GetOperationalLimits tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.07066544781947837);
    msg.setSource(20309U);
    msg.setSourceEntity(227U);
    msg.setDestination(38217U);
    msg.setDestinationEntity(83U);
    msg.state = 226U;
    msg.plan_id.assign("REWPZXUDCIJXNNVVLJMZGHXRJDEYCNTXYCICUFTZPMAUDFVBHRPJLMNPSRWZOEOOFFCFEVH");
    msg.comm_level = 128U;

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
    msg.setTimeStamp(0.2742070513263717);
    msg.setSource(24863U);
    msg.setSourceEntity(236U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(142U);
    msg.state = 150U;
    msg.plan_id.assign("WXKBICOTXQEWBNKHDPUHFMDJXPAMEGCMHYAIJWVUKXADTGLFXNMZLYNEEYVJAMMRLCBACEQJQKYIFBEHOXHAOFZXNGPVYDJKLEQGRXKHVTJRTPBINXYSDDSPIZRPGWWHRRZBQ");
    msg.comm_level = 159U;

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
    msg.setTimeStamp(0.6790075396668998);
    msg.setSource(26852U);
    msg.setSourceEntity(30U);
    msg.setDestination(33665U);
    msg.setDestinationEntity(127U);
    msg.state = 194U;
    msg.plan_id.assign("JAHKRJZEVXVSUFZFTDDAMWGSTHVFMMRRDTKDVTFJQIXCXSJVMVOWKXXKQYCNIBNJRIRHNYUILHYCXBEGIRPGLCDBCYZOUUUZSJDOPNRAFFU");
    msg.comm_level = 151U;

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
    msg.setTimeStamp(0.8108036951082656);
    msg.setSource(13286U);
    msg.setSourceEntity(143U);
    msg.setDestination(42522U);
    msg.setDestinationEntity(12U);
    msg.type = 165U;
    msg.op = 184U;
    msg.request_id = 34681U;
    msg.plan_id.assign("KFRXERJIAQWLLTPKGXCZUQDRGLDXWNKKVDPRWSJORXKMTNNCKGYXMEEMAVQHLPTINUIYOQABY");
    IMC::Abort tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DONQCMOAPMIUFIDNWLVLHCWEJKVOSZSFQGYXJKAFMLBLYMVOHWYUWSDGRHOGJZSHFWKUQJDGXBJWHBXNVEAAPAECPHUZYWAQXNLFBHELBKIIGZCOSUSCXNMZQCYNMVYIRLUUIBYTNXDTJFFUEHDEPEDXBBQWPJJDUPOTARTGIGRMELTTRRFTKCLBBONNKCZZM");

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
    msg.setTimeStamp(0.09856254792025687);
    msg.setSource(40179U);
    msg.setSourceEntity(27U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(74U);
    msg.type = 135U;
    msg.op = 198U;
    msg.request_id = 41968U;
    msg.plan_id.assign("PIOXUYXJPAPARXSKIGFSQNGKQNWQYUGILZEEDDVCZCGFBSUCJYCOWHZSHDUVPVHKMCHSZHLAPE");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 194U;
    tmp_msg_0.value = 0.3151140988413693;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QILYQGBVAXQMHZKWXYQUCOZGCIYVFHKHRAKTXLDOJCSRHFIKEELDIGNRAWWCCTHAPYEZKXJUGAEEUUUMJYXTEUFCJVTTQFDVMRKSFSZBY");

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
    msg.setTimeStamp(0.2442498101195183);
    msg.setSource(30492U);
    msg.setSourceEntity(207U);
    msg.setDestination(23807U);
    msg.setDestinationEntity(30U);
    msg.type = 190U;
    msg.op = 229U;
    msg.request_id = 46458U;
    msg.plan_id.assign("CPYKROTFISXAYQJWNSTDSYUCJFDJLUUDOPQHIGTGTPQKYAFNWRAUENGXPMIZAKDBNPFGWLAUANIQIKIOHIGBEWTJNVOERCTZCJLFTYUVPESZEXFHVXKMBWBGSDLGMOBSKCPKJWBUXLHPDLYQQDMVJAIORHIFCCZLVWTMYSMZHNDMRBJXTVEPUEEQXNCOOVTMFZXLACYBHDDGXSGCWGNBRZZVWKQBJHJKQASPHELVYXRVN");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.2598977332607493;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XDLAFRQQHSFHPIDONAYJIJCWWQXTKKSOHWGMYIEASPVUMUYUFCURMPHPTMRLGBRPEGFJJJWQKLFQQOGAZMUSTDJVXJMTQHNSKZKCRAILFGBTPAOCBCITVNMQLGEDHTCVZNTAELKISGRRBDJKOZQPWNFZBZKXFIEZRGKZXVNBIIDOWRSJIUWGPNVEY");

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
    msg.setTimeStamp(0.1778198293684662);
    msg.setSource(18538U);
    msg.setSourceEntity(32U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(17U);
    msg.plan_count = 13137U;
    msg.plan_size = 3448969060U;
    msg.change_time = 0.7911375425273484;
    msg.change_sid = 38483U;
    msg.change_sname.assign("DGTHCKJFQSHEMOORKTINIFCQZBBLGLJNRODOLOSZETJUJQTFQVHGQDNCLURXHGCWETBCHRUDJJX");
    const char tmp_msg_0[] = {17, 67, 50, 25, -110, -83, 33, 106, 108, 47, 114, 123, 19, -65, 120, -49, 95, -121, -23, -80, 77, 71, -120, 100, 41, -69, 122, 87, 13, -103, 89, 29, -19, -109, 126, -51, 122, 82, 104, -43, -67, 85, -124, -63, -90, 24, -44, 76, -124, -56, 98, -31, 78, -100, 40, -76, -117, -125, 64, 107, 28, -121, 60, 77, -66, 26, -23, 61, -57, -2};
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
    msg.setTimeStamp(0.9677832499216041);
    msg.setSource(6571U);
    msg.setSourceEntity(56U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(178U);
    msg.plan_count = 60458U;
    msg.plan_size = 3907348385U;
    msg.change_time = 0.7015648843261799;
    msg.change_sid = 36176U;
    msg.change_sname.assign("ZBOGTDEXNJLQGXIHGKZDEQAJWAIPYEXDZDUHIWNXRRYUQZZSSYRLHSYUEMBIBLVKVAUSKVUYMUXDTTFPAMTPZFRIVFEWLJIZYLYDYJDCTCAOJFCHACZFZBDJRSMPORFTWLAGQCDSNQTLKENLPGRXVWMOWIRMKFMBUMHSITTOGWLWPGMUHEBQNPOXRFIJPUJHOWAVNEJFCUNPHCQ");
    const char tmp_msg_0[] = {121, 1, -46, -45, -1, -93, -16, -21, -44, -45, 55, -96, -11, -20, -82, 57, -2, 49, 68, -118, 18, -63, 73, -114, 64, -96, -57, -7, 117, -60, 78, -61, 71, -53, -56};
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
    msg.setTimeStamp(0.7925505025267976);
    msg.setSource(41669U);
    msg.setSourceEntity(194U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(48U);
    msg.plan_count = 55901U;
    msg.plan_size = 1631773656U;
    msg.change_time = 0.19462193643491943;
    msg.change_sid = 37514U;
    msg.change_sname.assign("CBZPYZOTGLEDUQHIQVHYAWAUMURFBAGRQLJUDVRQQBFAFRDTSVKTWSKZUVEKMJLZOMGDCXCHOFCOGSLIMWVJONQJSSJNIYDALOXDJKUPNEEMIMYMKCSHQXFCGRBFXPIXEPTAZJIOHOIXBN");
    const char tmp_msg_0[] = {-7, -1, -52, 84, 2, 48, -98, -118, 29, 125, -114, -31, 89, 73, 103, -72, 101, -9, -106, -82, 15, 58, -109, 20, 125, -57, -107, 36, -93, 50, -2, 79, -66, -109, 75, -123, 79, -86, -120, -75, -41, -88, -119, -106, -69, -9, -21, 19, 53, 19, 43, -120, 1, 82, -49, 50, -64, -92, 20, 33, 32, 44, -85, -18, 13, -110, 74, -70, -109, -23, 36, 15, -104, -34, 85, -108};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NBXZTTHQZOGJZEVCHGIWVIRULPRIALRVYHMSZOZEVWAPDSFUNMIKFMSKTQHWBNBJFJGNDDBCWBSZSLTOZAQAEZPTXSGVUQRWBOWTXRDGNRYGMRBUWUKEWYCXNUENEPADIL");
    tmp_msg_1.plan_size = 14199U;
    tmp_msg_1.change_time = 0.8379502367276996;
    tmp_msg_1.change_sid = 58517U;
    tmp_msg_1.change_sname.assign("CTNDWUGKMADKBCJYUOZKFTQRZADFSIAYSLSYWXCZZQPJLRVLHSXTIGCEFBILEHENZWWAFEJDNEMSKQQFYPNCEGVMDHVWHDTQOYDXHLTXWRJIVANOKTEMVOLU");
    const char tmp_tmp_msg_1_0[] = {10, -80, -58, 20, 3, 41, -62, 76, -47, 87, -115, -94, -127, -58, 103, 1, -6, -121, 123, 92, 93, 31, -75, 34, -86, -33, -119, 32, 106, -24, 88, 15, 98, 35, 5, -116, 64, -114, 17, -20, 27, 85, -29, 46, -10, 11, 39, 40, -111, -22, 59, -79, 104};
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
    msg.setTimeStamp(0.5024764490796295);
    msg.setSource(58380U);
    msg.setSourceEntity(113U);
    msg.setDestination(8143U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("KKRQAKQNQWYMIQBVXZLFAQTSONUCYPTRUHPLRPMXVDBJNNIWIPDYPHNFBHZKBQSGPZYDMHPXWMDCYCOPKOCZIEMNHOMRVABGFFLSJCQHIYTALDBZZAGXYZSOZGSTJRXEJEBIRDBEIABPUUJFR");
    msg.plan_size = 27480U;
    msg.change_time = 0.7870274734053042;
    msg.change_sid = 50061U;
    msg.change_sname.assign("QPSRWYSJDGEHLCXEHMQKIUJYEXSSZCPVCASKRVGCAVBKHTMFMVCOWQGBXRJEFDHNUNYHVJRHBIBPQUSZOTTBAHNINUPQUJIEPARKFELNIZLBFDGNLROCVUYSXOWWD");
    const char tmp_msg_0[] = {41, 82, 21, -70, 71, -25, -117, 121, 94, 64, 107, -64, -105, -121, 93, -120, 126, 61, 65, 2, 61, 110, -48, 69, 114, -100, -27, -21, -27, -29, -102, -37, 91, -102, 55, -124, 84, -91, 43, -82, 33, -127, -2, 99, -37, 6, -78, -107, 79, 38, -6, 9, -117, 17, -38, 18, -27, -103, 92, 91, -74, 93, -93, 16, -94, -81, -19, -99, -122, -90, -61, -67, -16, 112, 108, 35, -100, 66, 70, -16, 100, 62, -99, 126, -42, -33, -107, 74, 74, 93, -6, -115, 33, -25, -85, -112, -55, -94, 126, -71, -36, -66, -48, -37, 62, -39, -119, 30, 47, 43, 44, 0, 104, 71, 54, -117, -78, -28, 0, -3, 80, -47, 103, 107, 104, -8, 119, 82, 122, 9, -78, -31, -62, -28, -26, 48, 112, 48, -76, 81, 41, -45, -78, 42, 109, 103, 17, -4, 102, -80, -112, -72, 85, 19, -22, 126, -110, 23, 118, 100, 41, -118, 15, -72, -23, 20, -102, -39, 71, 10, -96, -87, 52, 90, -115, 45, 73, -128, 113, -6, 75, -3, 65, -53, 115, 60, 9, -45, -53, -106, -7, -23, 89, 39, -3, 51, -123, -100, -83, 97, -125, 97, 28, 94, -107, 40, -20, -9, -77, -83, 93, -61, -70, 26, -125, 126, -91, -88, -70, 43, -9, 52, -17, 72, -14, -112, -103, 114, -97};
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
    msg.setTimeStamp(0.37862438228801976);
    msg.setSource(48247U);
    msg.setSourceEntity(132U);
    msg.setDestination(28074U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("BAHKOTOVREJPHNHNDYRVJVILHFBPCTZBDKGQSTZYHJALCJURNTSMZOVHGPEFULKLHLHGKIPPOAKJEXSQIPAFWYUEORNDGCITIKDHQMYQBMLQAUZEJAISBWGBEWRCFOPDXNWPWCMOLGBNDIYVAHVMWQCQXSBUTTLQXNUZJRQXLFYVXYAMPUDDZRWUWUVNSKZWKMGGCARXYYUEPFODYOCEMGFB");
    msg.plan_size = 16709U;
    msg.change_time = 0.1769348284668869;
    msg.change_sid = 58048U;
    msg.change_sname.assign("NORWELJOJFQZOHKYDILLVRVXAWFGDWZLDZTPQBPGTKBQZSDDXUXJFUNCJKGESBPYHAZCBMORTMHGTANSMKTVAXCJGHILWKUFCUHEOVUWXCLGPIDVQOEQYZQEAYCGQSFMHUHEIWCEXALRMUNTSBIIXCVUSUYGOBDBMPOMRVVDXWKPRNHZJFVRBEIPKASYTRCTFWNFNJE");
    const char tmp_msg_0[] = {47, 119, -35, 86, -124, 77, 27, -111, 26, 61, 1, -28, 48, -14, -2, -26, 43, 9, 18, 65, -7, 38, 34, -122, 51, -18, 33, 84, -126, 87, 22, -45, 41, -57, 14, 52, 43, -8, 59, -32, -70, -66, -73, 28, -91, 13, 47, -127, -87, 22, 45, 94, 49, -79, -32, 111, 114, -33, 48, -53, 70, -89, 72, 106, -4, -103, 5, -62, -58, 119, -90, 5, -7, -87, -97, -17, 87, 95, 49, 86, -85, 105, 89, 17, -46, -70, 24, -80, 82, 99, -107};
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
    msg.setTimeStamp(0.9341361820094979);
    msg.setSource(45572U);
    msg.setSourceEntity(145U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("XMOXFFGFUWZBBWZQZCDFCIVNVBDXULKIILHLTHPAUUWZPSFCCDUQUQYDMIDKQQSAFHNCORARGNWIBGEPCBOPGULNHHFWOROJNNTZADJREMIPGOHGYSPMXYLRHDEBWXHAGOYVITGTHKZQSISWSVCRTPTEEEHYCYK");
    msg.plan_size = 3557U;
    msg.change_time = 0.773785489780623;
    msg.change_sid = 36972U;
    msg.change_sname.assign("EITNUKLAHXXNEBYOBLMIDBGSPZDMNCFPXNVCYQAZKJUPKRXDPHCUCMFDSLXADWFHMWCTLGUSWOYCQAHZJHPCVAZBMVACWESYXRXSJUQHPQQLLNYBIOTZANOKRUFORGFDWGFDVWGFXVSSZSGOKIY");
    const char tmp_msg_0[] = {-67, 32, -85, 80, -106, -126, 68, -128, 54, 71, -120, -103, -12, 94, 114, -70, 52, -91, 79, -72, -88, 59, 91, -60, 68, 57, 61, 125, -31, -15, -105, 14, -71, -19, -121, -3, 63, 33, 69, -76, -83, -50, -93, -42, 9, -93, 97, 109, 24, -22, -109, 58, 16, -127, -108, 99, 86, 105, 36, -80, -93, 118, 126, -23, -4, 45, 22, 33, -58, -17, -27, 11, -123, 113, -78, 57, -19, 3, -91, 98, 3, 46, 103, -101, 79, -34, 27, -65, 122, -101, -40, -24, -68, 47, -68, 88, -85, -82, -11, 89, -30, 13, -114, 9, -111, 16, -6, 55, -116, -7, -120, -13, 112, -6, 18, -111, -21, 74, 1, 93, -96, -97, 94, 22, 72, -71, 41, 10, -49, -93, 6, 2, -35, 75, 29, -30, -117, 4, -25, -76, 122, 14, -24, -27, 84, 63, -85, -95, -90, -68, -114, 103, -128, -23, -112, -47, 104, 91, 32, 0, 27, -95, 37, 63, 70, 13, -90, 11, 115, -13, -117, -45, -86, 48, 13, -103, 21, -26, 40, -89, 75, -117, -87, -59, 77, 91, 79, -127, -121, 113, 7, 101, -33, 99, 64, -56, 36, 80, -65, 76, -95, -75, -31, -8, -122, -76, 87, -37, -38, 33, -84, -39, -53, -24, -52, -8, -18, 70, 78, 123, -82, -101, -54, 4, -97, 97, 103, 112, 104, 73, 35, 120, -39, -104, 21, -60, 36, -8, 73, -126, -47, 10, 24, 50, 43, 73, -6, 38, 71};
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
    msg.setTimeStamp(0.5420244571980949);
    msg.setSource(35997U);
    msg.setSourceEntity(214U);
    msg.setDestination(56027U);
    msg.setDestinationEntity(151U);
    msg.type = 41U;
    msg.op = 211U;
    msg.request_id = 13445U;
    msg.plan_id.assign("GNLCSVFNYNFCQRFCADFBSMKFOLOWGDKLWPTMVVJUSNYLZCCDJIEFYCOTVEKAPIPBSVGHAGCTRNGKFGEXJDKNYDNYGWOSEWIMOBNCXPOHXXPKRYIKHPWXXMZLITUWMSXYJIRBHZEDOXTAAQLSBHQWPKLSPHBOAFRCRAMUQQQOQVALEJEDZBGUUXEIVUZKTRIAR");
    msg.flags = 28588U;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 122U;
    tmp_msg_0.lat = 0.3403142101947877;
    tmp_msg_0.lon = 0.6971176647176264;
    tmp_msg_0.x = 0.21203112247771405;
    tmp_msg_0.y = 0.31932892437038607;
    tmp_msg_0.z = 0.8039935596737526;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TOFIEOZWWPIFGWXIZSDDDLWFKTRGQCRJHLDMRWNBXCGMJSUWUPYCQOLAVTSYANHKEYKQRCZFKNSZZSRQGHOLBQBYMTJUJNLBETNMPMUUCQLVOHTPTADMAUYMAHPIYLIMBGWHWZSCXNGPLUCFSQPEXRDVFFQIDFIYVEXZZDRIVJMOOPEVVACBAJZEKXOWGKKBXIZNEETYTFHYAVCTVOLCJMUARRJRE");

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
    msg.setTimeStamp(0.8752615792290234);
    msg.setSource(7283U);
    msg.setSourceEntity(120U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(14U);
    msg.type = 64U;
    msg.op = 250U;
    msg.request_id = 38851U;
    msg.plan_id.assign("ENKBUVRWSZLAIXVUXGVTHSSQYZLQITJUNXJGCOVQFNGFULCKXPHWNECPXCYNOXWLGXTFHDSRLNJVRJAOKSF");
    msg.flags = 6291U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 150U;
    tmp_msg_0.entities.assign("AQBQCVRKEESUFRLGKOAYRPBUWTFWEVZJNSPAWOCCNNPBPIJZQDDRTUELTSTZDICM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UBAOKLTMJFNDFNFQULXBJPGFLJHPAQMRYQKG");

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
    msg.setTimeStamp(0.9407618162682847);
    msg.setSource(379U);
    msg.setSourceEntity(83U);
    msg.setDestination(58282U);
    msg.setDestinationEntity(99U);
    msg.type = 252U;
    msg.op = 61U;
    msg.request_id = 43397U;
    msg.plan_id.assign("MOINYVXKROO");
    msg.flags = 26333U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 40U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UYNKTUBFMHSAJBZTKMKAHCUCBNVZLTRJLFXCIDHOUXLVZDVXSMMELGBHKCJWYCPOTZIYVNMJUIVGJQYMFSWYLGVOWQPBICEUPJJUQGDJZTFIPGZTLJGFBUNCMRYSRLLWKYZXTYGHNZNPWOVKQFEZRAXMYAOSERSMXDVBPFLHBWOQ");

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
    msg.setTimeStamp(0.929768925124978);
    msg.setSource(10001U);
    msg.setSourceEntity(42U);
    msg.setDestination(60536U);
    msg.setDestinationEntity(11U);
    msg.state = 200U;
    msg.plan_id.assign("QCJAHYHRCBEGOUJKORLXJEUNXWQXXCFHRZWPVJKDSVPOLRALHDQHFIPIEMMMYZFFYWLFZCOWBIBFUDFQDHJMDXXKAPXCNGYRLYJXDGUTUAQVYIBZBPELPHBZNUUVWVSROWNOVKDNBNOPWNNTLCLKHQWNKAMLUCGOSUESBJSMSMZGTSYTGAIZKAYXNFEXTEIAMYGKCDFCTDAAIOPEJVISHZJPTJCOTRGEQBRIZTIWKY");
    msg.plan_eta = -1519573279;
    msg.plan_progress = 0.301586275225904;
    msg.man_id.assign("ZXTNEKETGQYGBUHDMCZXJSINZJVUULPYGONLAXMDYTLFKWYHTMCPFSEZPCMWIBTPQGIVJYAMJEPK");
    msg.man_type = 26636U;
    msg.man_eta = 1895785560;
    msg.last_outcome = 132U;

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
    msg.setTimeStamp(0.530952246372105);
    msg.setSource(7034U);
    msg.setSourceEntity(211U);
    msg.setDestination(53254U);
    msg.setDestinationEntity(152U);
    msg.state = 49U;
    msg.plan_id.assign("CDKKKFOLTBLNLQIFVUJEZDBCVTLQDRALPTCBAFOMFSWZCQXNKMLNRVROWFMLYSJGKPSYXRVABZYRVYCHNOKQVUQUWQMXFTXIATSGKFVXRIUBHFCEPZSLCGDPYOHFBWIMHJZNMGEWRJDWOSPERIPXHRYUQVUKTNJCNPSECFQHZYIKPGTYZXWTDSHEAKIADDGYOHJERWOMDUXJJ");
    msg.plan_eta = 1543623254;
    msg.plan_progress = 0.7969814988197904;
    msg.man_id.assign("BYMKJRSVHXZNQSHCLXIBSZHKFNFZEMFEVHDLBZCUDQJCHXJPJLKZAAFWJMCMUKOOPPVVJEDBBPIUPHAUBJHAYLGEYKLSKLOFQONVWRDPWSCGCGSWJKALIWLKGEWRTPNXYYMDLQVEYGUXYAQINXGWOCHFTYFNTISDNFQDSVAKWQZBZGVEIIDQSBTAKMTBHQMTICHPBCEXXPXNNVYUJGETFXYOJTRWOSRNDZL");
    msg.man_type = 17338U;
    msg.man_eta = -233809367;
    msg.last_outcome = 54U;

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
    msg.setTimeStamp(0.9889355952125389);
    msg.setSource(53500U);
    msg.setSourceEntity(115U);
    msg.setDestination(26066U);
    msg.setDestinationEntity(20U);
    msg.state = 225U;
    msg.plan_id.assign("ZWHOYWLYGZCOFTEGGEUFSVAWXCJURDQJMEQZJHHVEBDHURRHOCIUGPCDNNPCJATNYVIVCTQMTQLWILTMMFONXIFIMLDJFGBBXBEUFZWPJTVZVDOJVBSNGZMKGRQMANNMEXSZLSIAAVYEKXOFNKJJFKKAHEROXUTMESHLDPYBRQKBNPYILBVUDXYZTCVOCUOGSSHBTPSRGNAZIKIYAWFLGDCXFAKJKMLDZQRDQWKA");
    msg.plan_eta = 1848716478;
    msg.plan_progress = 0.33630165881873675;
    msg.man_id.assign("UYSEGAZVGLPIMBBHIMUQGRVAUHVLCNOHSWQOUFZIQFOYPJSKPIWGTDJOQYMLFKPATRVJCBXNEBRXAEVUTVDSMVPFSKXLMWNPDDQULJXHLRPQCNRSYHGRWOUNRASDHXVRKZOYQLXJFXHEFTPUMPJTFZZWJJOWGIAZGTEFJCDREGHOMGMLACSFCMWZIIA");
    msg.man_type = 5988U;
    msg.man_eta = 1304965019;
    msg.last_outcome = 243U;

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
    msg.setTimeStamp(0.7566461604709445);
    msg.setSource(22412U);
    msg.setSourceEntity(242U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NCVTBOTNKALQNAMFFTKEXZIISVTOSYARSLAXXYOWIWTRVWVSLMOEDNCWYYMBGMKPGVSJTDQPQHFEVRTMIWLTHVGVJPZIZHJWIYFZZYEHUVCKBXJFYLOAHMXJDOQQHKPWUBWNCEEDLRJSUURXSKGZNKXIUDGONURWQYFGPLEAHGNOPQOJHZTIEBBUSTQQLKJFVCAMRARUDXMXRDFLCJUPKGIGUZMELCEKCPBZSMWPSQF");
    msg.value.assign("YZOQADXBAJUEVZAISIKDIFBGNRPKFUCUNZUMDQVOFTEZQOMWGBRAFYVNHUQVGCSLWMITUJOQEKVLQMBREJQTCNHTRKCXCLNQSRKZWPJTUBX");
    msg.type = 29U;
    msg.access = 123U;

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
    msg.setTimeStamp(0.05795354605055547);
    msg.setSource(51896U);
    msg.setSourceEntity(23U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(218U);
    msg.name.assign("HYTMCUSQMGWCZMMZHGOFOYNKKOTAYTVHZINPQODULKYGJXKHY");
    msg.value.assign("SWDEYNKWEUGRGSVALBTLCMUOGHOCRLYMWPQXOSCIGHVAIKTY");
    msg.type = 89U;
    msg.access = 219U;

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
    msg.setTimeStamp(0.3187164208632295);
    msg.setSource(27250U);
    msg.setSourceEntity(181U);
    msg.setDestination(15591U);
    msg.setDestinationEntity(14U);
    msg.name.assign("DMYWVDHCOKVGCFNERKTJZIFXMKBBNTWMVGUJWKIWFQFGIDZUECYOKSUWJHDHRGLJXICJIMVUNTSCILPOQQSYRFSTKZRJXCQHNBGWZJZLTERYODZHUNKQCSQDBXYMRAPVSHIPBVPOTNJWNUXAETQMZBKYBADSDUGPAMZFEAXOOBAKSIBTCPYGDHVZHKTGNEGBASOXNOQDFSIJLLCJXLELTCP");
    msg.value.assign("MPGVOTNGIQPDSZCUTAOOGGFWVSKLBAA");
    msg.type = 133U;
    msg.access = 40U;

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
    msg.setTimeStamp(0.9466627266374692);
    msg.setSource(28324U);
    msg.setSourceEntity(12U);
    msg.setDestination(58055U);
    msg.setDestinationEntity(87U);
    msg.cmd = 246U;
    msg.op = 9U;
    msg.plan_id.assign("MDWUCPTKVCBJYHRIORZEXDEBSB");
    msg.params.assign("OSYUNIXBHYKEIMMFINHJEXEZCXPEDBYLEGOUVTGJTLRRSXFPKPTFNATLMUPDKEQPKGUTNOAAUB");

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
    msg.setTimeStamp(0.38830484054485337);
    msg.setSource(5175U);
    msg.setSourceEntity(193U);
    msg.setDestination(49270U);
    msg.setDestinationEntity(119U);
    msg.cmd = 102U;
    msg.op = 102U;
    msg.plan_id.assign("ETHRJCTVNRYJIVSLPQTMHWEIKJZNCVMEFDWSBJZOXIEOXGQN");
    msg.params.assign("AQQCNBZVWX");

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
    msg.setTimeStamp(0.11186783926601918);
    msg.setSource(47295U);
    msg.setSourceEntity(155U);
    msg.setDestination(63209U);
    msg.setDestinationEntity(213U);
    msg.cmd = 144U;
    msg.op = 40U;
    msg.plan_id.assign("SJJYVXCIARZACMZBGIFAHGNZPHKXTAVODSRDJTPSOUKKRSHJRLKGHHBNREOJSQBATIUQUMBCEYNTBWVTUXFXBIGCPFKQMZNLFVMYFOXYKGGPESWOCSWNBRZGIAMBQNMEAEASDCFWDYUINLFDQXXQJGHCROYLEUQCFKWJHWLZFVYIVQZEMKJPBEFPZMORNPDHOVI");
    msg.params.assign("GQJKCQNIJOARKKEXNYVUSFUZZZYHQWCLZWWBFDHKXFNKDTCMTMSVGJBTRDHNWEWUUNDIRVSKIWYRRUOOPVTVRBUXDMEZGZLECNDMQWCWOKCBYXDYPCBUHQFPSGPXOMTQSDHCYVESYNLIJSIGMQEJAJYKOAPUJURAVBALSELZYFPXQEPNFNIXDAHOXOPFAWRCMPRET");

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
    msg.setTimeStamp(0.1401073130459637);
    msg.setSource(25252U);
    msg.setSourceEntity(4U);
    msg.setDestination(28304U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("TTMTUMHYRL");
    msg.op = 6U;
    msg.lat = 0.00024910035274794406;
    msg.lon = 0.9373390286339962;
    msg.height = 0.9212291969042797;
    msg.x = 0.7295362308030395;
    msg.y = 0.7632221821446586;
    msg.z = 0.8464071008493592;
    msg.phi = 0.47802004549483457;
    msg.theta = 0.045385355884345335;
    msg.psi = 0.9040943256216223;
    msg.vx = 0.048684548088256396;
    msg.vy = 0.997274085689731;
    msg.vz = 0.6626675401785669;
    msg.p = 0.8480126684034008;
    msg.q = 0.27645025844033966;
    msg.r = 0.6217997352015833;
    msg.svx = 0.8192536889922968;
    msg.svy = 0.4726956093759359;
    msg.svz = 0.9117602436259558;

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
    msg.setTimeStamp(0.7273319558991743);
    msg.setSource(56595U);
    msg.setSourceEntity(138U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("KIGPTZVUTMVXSWQJLEEQEAJKXQNOLLZCNKNAMERPMABBGVPVZUPHMBQQSMRAOCUNPEBVLNTPFXCHRLOCRVQPYBDOITBXEEAJDARCGYVDXHBYSWYAANJQWQXGRIRRIFZFLGPHXQTRDIHHUTNWSFZLCVZFHKKBX");
    msg.op = 192U;
    msg.lat = 0.9756871905546084;
    msg.lon = 0.6404606869055705;
    msg.height = 0.4341479977021828;
    msg.x = 0.8428742226255952;
    msg.y = 0.11186401958542203;
    msg.z = 0.5512606438803306;
    msg.phi = 0.4521837686985545;
    msg.theta = 0.16898642629276672;
    msg.psi = 0.7170149253596048;
    msg.vx = 0.9664158589408065;
    msg.vy = 0.9211370616644833;
    msg.vz = 0.825217221156286;
    msg.p = 0.41680622104791876;
    msg.q = 0.18226999557337364;
    msg.r = 0.35553450498308725;
    msg.svx = 0.6768616414900673;
    msg.svy = 0.35813255958745605;
    msg.svz = 0.49095912487746607;

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
    msg.setTimeStamp(0.24709920926476625);
    msg.setSource(53093U);
    msg.setSourceEntity(192U);
    msg.setDestination(52201U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("OTXQUDODSEAIYRZKJCFTWPHSRMGVTVPFCYPASXETNQIFGCHFDNLEWVRZCJEUQRGJHPMOEGRWWBDIDATMLZCQRFKPTQNVGIULJAGPFEZVQNOJRWZCEDDATYIXSWNSXFVXBMMWVHHKAUQSYBPKCNDILYYYXYLYMZMHMLEWGREHPOANHGSBIWCAAPWSBVRSGUFKHCXVDPFFBYOZIUVHLJLZUIZJENKGNUSAOJMNLTBMBKULXRKQQKTDXJXIBQZOJ");
    msg.op = 42U;
    msg.lat = 0.521375728156121;
    msg.lon = 0.7665808160335641;
    msg.height = 0.18380041226411292;
    msg.x = 0.5757000814314737;
    msg.y = 0.2756251539889556;
    msg.z = 0.20215562663371078;
    msg.phi = 0.7244879951568869;
    msg.theta = 0.22864318516737647;
    msg.psi = 0.07003359009331578;
    msg.vx = 0.7125722875675892;
    msg.vy = 0.32369854342894;
    msg.vz = 0.8390565476517402;
    msg.p = 0.8783561319350801;
    msg.q = 0.07049460399901553;
    msg.r = 0.943544931596358;
    msg.svx = 0.013248457528661661;
    msg.svy = 0.4470037775869814;
    msg.svz = 0.7900139037844793;

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
    msg.setTimeStamp(0.06488653436763536);
    msg.setSource(4535U);
    msg.setSourceEntity(122U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("XGORHQUNWPDZUCFBWYKGQMBWIXOKMAUWOFBFDTXIVSTOQRGLRJIICPEFPTHSHQSFXCKMMTKHNIJUJPELUSRUNTDIZYRKACAYYVBQVHLEGEDWUN");
    msg.type = 9U;
    msg.properties = 210U;
    msg.durations.assign("EVGBQSMJXBMXKFXHMNUUOOBOIYBVCBCHBMOZLIFVADCAXYECVYZGRTPVPWJOISXJHKNJQYYEHZMCAKJJUDHBUEPLTHKTFFMLMIZGNAYWUFNSLHFIDPEUYDQETKAGCAOPPZZRKQPBZKZRBRKHESRSMWXVWSGOELGXQRTLKIIAVFRBYSYWWVJRVYNJFIDCJECOWZPPCL");
    msg.distances.assign("ZZJDNCYXKHVQAKGGDOQCOYCPKQLEYIEQKBUYVSUKTGJMGCHKJLLDXAVQPZTMMPRNHBGELTASYUYHCJQMJNKPBHWKSDCELSEHBDAUGWEBICOXYHFPPMDXFMVURTGHVCIJOPDXCQBDFQRPRAWWEYFVXSGXFUBZLLOINRTVUUEOSNEZRZFJFVDNMAAOTIBML");
    msg.actions.assign("OQMVCHXTMDGZZMMRQZDWWNDYUFUKMTGBBRDPBBIVOGVLQCDUNQNGJRBPKTTPYFGFXJNCUAUZSMKBURZOCEESODIIRPHKYFMCKSXBHFXWYGXXPGZJIEKNZVUGMUNZEWREOHYFLPNUHCAWFKYSUBTTIHATEOWPMOEORAQCKRSHEGISWVDSQXWNIHJJHVNDWKXVFTVLKLXJYEVGRFAQQM");
    msg.fuel.assign("NZFVHMQSCMOCYWGOEJYCEGSSERJHJUIWBMLNWYTOIQAGGHWFKPFUQPLKXUOACUDJKVFQRUDXQDBHTWZJDKVWDVNENAZYWKNSQLFGHBEGARLAGPTINGYUJRIUXXTFPLEADQMYTXHCPMRZISXKNARTXWYZXVPBVIAOFLGDXMCELPNYCECVDKZNUATEHJPSOMBESWWRJORBXJSTZNQCUOVMPTZKKDUHQIBILFSRIBKVGIFYYZJSZ");

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
    msg.setTimeStamp(0.8466946216050932);
    msg.setSource(64068U);
    msg.setSourceEntity(236U);
    msg.setDestination(58131U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("WNHYKWALYZHPANDBJBXPNOEIRIGFCYREBMKCXLNUEFFYGUGBHPSMKRTVJTYZJUZMKCAGOWMZGSTEQGTFWXQWLDSAXAEKM");
    msg.type = 7U;
    msg.properties = 211U;
    msg.durations.assign("ZBEUDJXNUQOFWUXAVFSMMTOKYCMFPLEIEZKRUZL");
    msg.distances.assign("LBXFPEZCDIPXYZGRQHPWCAHHMSKJJXBNWWCYKMXDGEFBFFENUSDFOWZYAPZRNYQWEINJCNBEGLGODGRLSARHIVJPAHWBQPSPSTQYDHCMROVVHOMUZLNDSOTRZICTJPCRLOWQYSYUDKEVYWETCUZFIUOMMADUHSAYNWGBULYGLNZMFNTRVLTTCVQKAKIIDEDUAUZJJIQJFMLEWERGRHBQTXKNVQOHOJCSTJTMLGFABAVKX");
    msg.actions.assign("GHLFMYFYFETKMUWHJUSKQJVHRLDOSERARYYCKPSYACSWVOJTIQTIQMQXTWWBLVHJZSKILNGNYIROEXPJQEKDGOJRORTLSZUYIZDBUWXEUIXPBZZFAVN");
    msg.fuel.assign("BPCMHJRMFJKOWTRYSRMGGUOPGZXELYIZFHAPQEIBSUGBXDCIENLZNEXUQBYDMRKNCBVNDJWLQWSVMJNGQAJAKWETXIOSCZIQGMWVDPQUDXVSAONXYQHXDGVCTTUYOCBVQBTEEPSIFTFIPKVSUXHWJRYDDFMIANKQH");

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
    msg.setTimeStamp(0.15943508182979316);
    msg.setSource(36152U);
    msg.setSourceEntity(209U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("RDPXXFOASMRCLBHPJXLGLFXEOKKEMOALXYZFJZXBEHWEXGIQPFGFDIUOWYPVVJBNIZQWMJNNORGSWJFMQKQKAMTELRAHAKQIUDP");
    msg.type = 109U;
    msg.properties = 108U;
    msg.durations.assign("IKWXJGRTYDWFZFHLTNGGUDPQAYESFLEVSVJTASUTPMGDMJEWKYKGIAZFQDMLZUKMKQROMCJLYVBCWSFYEPZGCBHUIPMCQAASZKNFQNNOMTVBSYBRTPUJDWCZXGYXNVNRWPVZKOGALZJPVDLWXFIABOHWCRAXUEYJESHPEHVSH");
    msg.distances.assign("JZSWJPMTSDCBWZHMBATHSWZWUXOETLJIDTRLZDKXIGHPSUMBAPOPBFZJFRUVJOLDRXKYQUTKR");
    msg.actions.assign("PPRYMBIDPUJJUGTLXIWYZDFYBHUXXSAJUVSQVKGGZYPQHNNRDCKWAGZMWSSGXFXLTELCRLMFWOVEBHHYFGKSYEDWUDDNQIJYKNPTOOGKEEOWCHHZKBMIPOCFIQMEVAEQJTRPBBHUURDWCJAFRQESZLVTNQWY");
    msg.fuel.assign("BSBMPGWLLKEKCHYINGDBPRNQRHYYFJNKSTWTMSGGNWQHXOQTDPRMPGUTBBXZMLHCIIOHVTZISAKVXWWESAHGDOWCJVXGLFOMOAAUBPQUDHDYRSJLKHPFNORKTXOECHDCZQFWYMFARCPSVULVZNBYNTSKOFCVPKMUZJSFXPNJKTTOIERQAZLWATNFRUYYICBXJDZUVQALEVIJUAQZGQECYNLILWZIZSRDYUDUERBJGXXEFJCBPJK");

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
    msg.setTimeStamp(0.35852975706825996);
    msg.setSource(4591U);
    msg.setSourceEntity(54U);
    msg.setDestination(58543U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.9278652062999733;
    msg.lon = 0.17731489870952966;
    msg.depth = 0.9791643761193242;
    msg.roll = 0.6092558500407979;
    msg.pitch = 0.5649668818813405;
    msg.yaw = 0.6310830028626969;
    msg.rcp_time = 0.1029137508043968;
    msg.sid.assign("PKCAZDEIKHFQFXBUKBXVQQNOYWYIYICWEBZLYBNNXJPMJBSLPGRAITIVMCVPBGWVU");
    msg.s_type = 199U;

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
    msg.setTimeStamp(0.4438677498835909);
    msg.setSource(28523U);
    msg.setSourceEntity(108U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.7159471688818468;
    msg.lon = 0.015306492322412213;
    msg.depth = 0.07389933032286278;
    msg.roll = 0.3248069560328929;
    msg.pitch = 0.4573763576737375;
    msg.yaw = 0.0499799694881502;
    msg.rcp_time = 0.47922680535479456;
    msg.sid.assign("NCIAZRDLQFXMAZSTOL");
    msg.s_type = 212U;

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
    msg.setTimeStamp(0.8332083485974825);
    msg.setSource(33173U);
    msg.setSourceEntity(214U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.23158404302559343;
    msg.lon = 0.8884321951143686;
    msg.depth = 0.9524748743029297;
    msg.roll = 0.19343507422719508;
    msg.pitch = 0.6901155556531421;
    msg.yaw = 0.26058014159343;
    msg.rcp_time = 0.44141477815194075;
    msg.sid.assign("TGXEBVVCROPGWCYAJTYSMSQPNLSJHTDKYCITMHJWFXOQTXQZGKACKBYHXVAPFRRMHERYFAOYUVEFWERNZUNUSJOZWDORIKLNTUGKSDHQBNELVAHXIAYSZLTRHUMXGKZAEHSOHQDRBDVRUXQITXJSECPFOJCQEGELCOCVADVMNBUPOPLNQFQDGLTSIKWIZGBJAYXPOQDGZGWZIUYMDMAY");
    msg.s_type = 108U;

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
    msg.setTimeStamp(0.5012487217545992);
    msg.setSource(33301U);
    msg.setSourceEntity(87U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(162U);
    msg.id.assign("WKDFPZRRIIUXXVLEMNXXBXBUEHAAISHWVUDJPWYJLCIPCOSLZKLJFTKXOIGPTHDSGTAXWWQEMTRTOGIBJBLLUOUOOGVDHJLWHSCCZYCCBFJYEUGGWNFVQMAMDLLBTFOFYUQWPOEFIHRJQDQVD");
    msg.sensor_class.assign("PXTEGOBWUWVNXDCRUUMIVKAZKTESQPJXDOTTGVNDWAGH");
    msg.lat = 0.12714483604349425;
    msg.lon = 0.7052260328071895;
    msg.alt = 0.7934855300645404;
    msg.heading = 0.5796862337080417;
    msg.data.assign("KKGMAZDNFRMTXZUBSBKLDRYCIIYBPXEWKBCDCTCZEFYJNAMVVSTIIUWYKMTOJGWVYWFLIZXFJJWEVGNGXTXLIWBSEATZMOKDAFVSMHHNJWROAKVEEYGBUQGNRRTDFJZDFDOLUBNSCASGRPMXQFRFELNQEMHJVCQHWXSLYOJWMPDAZHPGPOAUEBQNYFKDORRYLUDUIIZPNGPQXPVHWLLQZOPOAKXHUNCPQHSSZATYTO");

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
    msg.setTimeStamp(0.23574732592829928);
    msg.setSource(33728U);
    msg.setSourceEntity(193U);
    msg.setDestination(49664U);
    msg.setDestinationEntity(188U);
    msg.id.assign("EAVGXBDVMBLBQTPNSDDKLIZKAHQJWERWOMGSGKXIWJJVOUYLTWJOBJUGFFMZEKHRQRRAEPGAQYFHPHYUQWVPWBJGQNKUSOCXTSGOCRBTRVHKDYSBJDWLNIZAVFIHFTGMBMENXLJEISXCHDXRBFSCHFLCRDQCPOAZWXNNECUZTPYONAAKKHSIHJKZUNMEDZUZSLAYGIDQROCPTSALCFMYZWULYVIDKLCWQIBF");
    msg.sensor_class.assign("BBRZVKZLANP");
    msg.lat = 0.9887890588902387;
    msg.lon = 0.5367668165845544;
    msg.alt = 0.012944506286411972;
    msg.heading = 0.004755236794123263;
    msg.data.assign("ULDSPNZVDCGYNAGNFW");

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
    msg.setTimeStamp(0.17851814999089588);
    msg.setSource(58693U);
    msg.setSourceEntity(28U);
    msg.setDestination(44307U);
    msg.setDestinationEntity(76U);
    msg.id.assign("MPLMDCZZOBUYIELZCPXVVBIAWEGDYNAHHRYUVBVYGSUKYZYKHWEAJELEBNLVQHDUTQFEYAFMRKNMZFEQWAPGKDXQASFFVMZZH");
    msg.sensor_class.assign("ZFUXNENNXSUMSKMAZECMISZPQENVYFJHYERGRHJZQEDKMNJBNIALRFWBBZPLZVLWHHJYKMUJOJVBCPDYGKITDPXLNEQFFGKCMRIEXVAJTSAEWUT");
    msg.lat = 0.09444793560257037;
    msg.lon = 0.9538330660195746;
    msg.alt = 0.6396102446061992;
    msg.heading = 0.7443318911264247;
    msg.data.assign("JQILFYRSPHHUHIPIVNGYZCIVIXBNPJPEFSVTAPWOMBAEEXXLGUSNPZFYCBMGKOLMEVHKGJXLDLGUZJHDWTZPS");

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
    msg.setTimeStamp(0.12092166663344861);
    msg.setSource(2896U);
    msg.setSourceEntity(77U);
    msg.setDestination(16448U);
    msg.setDestinationEntity(58U);
    msg.id.assign("CULAPUQXFOPCWKIHLSLGUZKZPODRUMEXSRERFUVUYKSNOKEMNWBQMYBNZXSWZINDZGHOPLHMPAJACMNGMBQHXES");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JREVYPIKHJJWYFMGZFDUHBKBUAJTNKXUXYOGFVNLEGVLQGWEESSOBHPPAMRYRBMMPCXVFXTBFHXVRYAMCQSDWLXWWFQWEVVTSAZVKEYPMZGWIZZTOGCNNBMQCALUZJDINDLDGSMROCKMDCAOJEYLIRYDVHKUYETCNFBICFCKHOQZWNBFHBTQSAUZLGILIDWSHDHRSVROIXKDRUGKXERNNIPOEILUBTTQYWSUZASHAFQQQPTLTKGAPXXCPJOP");
    tmp_msg_0.feature_type = 120U;
    tmp_msg_0.rgb_red = 21U;
    tmp_msg_0.rgb_green = 218U;
    tmp_msg_0.rgb_blue = 131U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3813567849956724;
    tmp_tmp_msg_0_0.lon = 0.5250828050647669;
    tmp_tmp_msg_0_0.alt = 0.07242861926951405;
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
    msg.setTimeStamp(0.298374090033211);
    msg.setSource(28426U);
    msg.setSourceEntity(34U);
    msg.setDestination(47749U);
    msg.setDestinationEntity(225U);
    msg.id.assign("LKSKNJVVDRWDSPFUVSCIXHZVNPLNPFIFPDXZKPLMGNLQZJMQUHIQENXMRIXTZOSQMHQWQFEMUPEAGYQDCJFIJBHZEAXLAOVBDADXLAYGDIEJAWQYOIFEVNILWAOCYEDFBRSTKWTGRWRRCMJYMKGWBNCOZHYRLKTZSQBRFRXGUVTKOTNWFYCBCOAKZUNEUZCDJMHMELJKZUGHUTDBHWBQCBKVXFHTPAPTPRNVGOGAGYWEPHSUSOBLMYXSSYJVOI");

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
    msg.setTimeStamp(0.9618889496820113);
    msg.setSource(24311U);
    msg.setSourceEntity(133U);
    msg.setDestination(63704U);
    msg.setDestinationEntity(116U);
    msg.id.assign("ISOIHWAHDTDCWUCOIDZMQSROAIPAOBHCCGNWSSQNXVPF");

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
    msg.setTimeStamp(0.23744898714963658);
    msg.setSource(40269U);
    msg.setSourceEntity(98U);
    msg.setDestination(61583U);
    msg.setDestinationEntity(115U);
    msg.id.assign("JTBAHQQBIASOJFOPODQFBJAHIFWWLKNHMFAEXWOFDQOBJJYUIKHTXIRBFVXGKUCMHSWGQXDWLZZVPNIXXMLVASSUIRYKURCYWIXQCCDVSDGWQETTBEWUGMUHNVPXGZYSMGXIVKVMEYYYERBCEBRZBKZPPACKNOAFSPKTTDULPQRFNULEIOJEQPKHULSFTHRWADYYAZ");
    msg.feature_type = 178U;
    msg.rgb_red = 224U;
    msg.rgb_green = 93U;
    msg.rgb_blue = 62U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.19094409179675298;
    tmp_msg_0.lon = 0.03590860939995988;
    tmp_msg_0.alt = 0.08128867627631864;
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
    msg.setTimeStamp(0.27986366512196936);
    msg.setSource(26505U);
    msg.setSourceEntity(139U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(51U);
    msg.id.assign("SWPGTNCRHUWYNFQXZLJVTMZADWKYRIMPVWLCFFVSEXCNSEADPESHBIYLZIIXALPVABERDTOYERUYGGQHIKTHGXIROJVKFWLBWKEIAUTVUUIZMXXZAQNMNORQOZZAPPDPFFFGJJSUGD");
    msg.feature_type = 236U;
    msg.rgb_red = 44U;
    msg.rgb_green = 151U;
    msg.rgb_blue = 177U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.34554664557773274;
    tmp_msg_0.lon = 0.8518895847708257;
    tmp_msg_0.alt = 0.010016130675460366;
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
    msg.setTimeStamp(0.8202026411376129);
    msg.setSource(39631U);
    msg.setSourceEntity(142U);
    msg.setDestination(51469U);
    msg.setDestinationEntity(56U);
    msg.id.assign("YZRDEOEWSLGOPXWTPXPZCFKUOFJAKLBJDGOMWZQRNQUHDSSYXYJPVFDMPEVLBIBNMGEARFQTZHJNUVFEUHKDXGEHLGWYJBEVU");
    msg.feature_type = 97U;
    msg.rgb_red = 116U;
    msg.rgb_green = 4U;
    msg.rgb_blue = 38U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9366050948921769;
    tmp_msg_0.lon = 0.5953501269424818;
    tmp_msg_0.alt = 0.8599661892228574;
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
    msg.setTimeStamp(0.8462535616441863);
    msg.setSource(37712U);
    msg.setSourceEntity(232U);
    msg.setDestination(17714U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.03007673620156026;
    msg.lon = 0.9607726174259604;
    msg.alt = 0.4689640038021431;

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
    msg.setTimeStamp(0.39404196257778457);
    msg.setSource(42063U);
    msg.setSourceEntity(186U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.6094587794937893;
    msg.lon = 0.8101893599820653;
    msg.alt = 0.6280235658784622;

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
    msg.setTimeStamp(0.782406358683204);
    msg.setSource(48042U);
    msg.setSourceEntity(153U);
    msg.setDestination(6211U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.6876730566913177;
    msg.lon = 0.30567952401611675;
    msg.alt = 0.07700030834362026;

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
    msg.setTimeStamp(0.6962950339509043);
    msg.setSource(26774U);
    msg.setSourceEntity(227U);
    msg.setDestination(337U);
    msg.setDestinationEntity(19U);
    msg.type = 196U;
    msg.id.assign("GKQJYQGNSULKCWVJXIUEMODWWHZZJSAGTSORHBDXQLKMOPEGVZRZRUDFHYJCEVSDRMONTVXIKCQSEROWLBJACAXTAJITARUIDZOGZJOMWAOUIHUCYPYYLQFDBASPSRXLIXENWPFKPEFYLGGHFRPBZVYHQFNWYAMNWKLDECBQQAYJIGDKKDCVTTNPFZLHCPITSHQFVVVTPKBGUMNENXHLJFEXWYC");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.05156848269995107;
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
    msg.setTimeStamp(0.1230611398267819);
    msg.setSource(52796U);
    msg.setSourceEntity(247U);
    msg.setDestination(2304U);
    msg.setDestinationEntity(48U);
    msg.type = 208U;
    msg.id.assign("RVHATXMWXKTIPIXDULUUWVPJQFU");
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 118U;
    tmp_msg_0.x = 5001U;
    tmp_msg_0.y = 23073U;
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
    msg.setTimeStamp(0.07600282411282688);
    msg.setSource(59620U);
    msg.setSourceEntity(0U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(179U);
    msg.type = 104U;
    msg.id.assign("ZPDQKFXHDCBSEKTCZZUWLFDKPIPOAQEIFZMPLSQYLLYGXSJWXKXMGKVQNOXHYXIIOWUMTESWITLPDHYNQHLAUGFFWMTWPTRJJEE");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.07715611070836537;
    tmp_msg_0.x = 0.3428294830860825;
    tmp_msg_0.y = 0.12366150233427409;
    tmp_msg_0.z = 0.4058722091673357;
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
    msg.setTimeStamp(0.5101270516863783);
    msg.setSource(39518U);
    msg.setSourceEntity(74U);
    msg.setDestination(16475U);
    msg.setDestinationEntity(58U);
    msg.localname.assign("KXOWBBJHSRZXFKEVJLD");

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
    msg.setTimeStamp(0.1861904644612904);
    msg.setSource(5719U);
    msg.setSourceEntity(89U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(176U);
    msg.localname.assign("ULSQRKEYYVYFFSWWBUYZXEBPMUWPWJEXNIPYDCMHCJRQVCTFDOVYTQCEUZSNFIHIYBSOAHXKKZXUQWJIPIRKNVRGTBMLRMMMKVJWGIXTZABZWXFQUHGLZJLVWSMDASTKICCOEGMSEBLLFTZPFTBBCKKVJOAKNAAHYQDORGDPMDZOXPXQGTLGYNQHEOVZDUN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LTBNKRZHCGRGBWBUFCIPYSEVXFYNCFPULHJPUPEMSZAY");
    tmp_msg_0.sys_type = 117U;
    tmp_msg_0.owner = 2077U;
    tmp_msg_0.lat = 0.5624186102016122;
    tmp_msg_0.lon = 0.9361839807281178;
    tmp_msg_0.height = 0.8956775393003525;
    tmp_msg_0.services.assign("TPRPXDRWKWBXGVFZVGGTHJPFAYEICCBYUFKTVXDTDMHPZXDCPBPWIYIHBSWTRNTMBTGCNFLGUSEMUFISXRFSYNBCSBBYACZMSHURXHNTJVRMQJWBCEMMKEECPJJYAGVDJWKOENPCKMMVQQLNHHFODWAGPKAAQXUKXKSBLULXTXOKVIUSQVIZAIERNEIZWQMAOVUOLFGJKQNTQQODJHGFZQSHJDDJNLHEROAGOVROZRYZEOYLLDWIUCWIYYN");
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
    msg.setTimeStamp(0.6936294332828139);
    msg.setSource(5264U);
    msg.setSourceEntity(4U);
    msg.setDestination(49084U);
    msg.setDestinationEntity(177U);
    msg.localname.assign("RFQKESUOHKUKUSLWVDQJPBMOABGDNFGDMCRLZTPDTYWLHHQDREZBXAYDOWMBXNYXZCMEZ");

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
    msg.setTimeStamp(0.7250042415923421);
    msg.setSource(38463U);
    msg.setSourceEntity(35U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("FDNIFLHGMOGUUHXTYKHZBESDFRRI");
    msg.predicate.assign("MUHZSWRFKLNNGIHBBVZIQCWFXIOJQSRWSEQGLRHLNKLRVDRMEHYSMRTPAZCAFZMFETWYJMZKKDSQPLPNBEUJHQUUTTECGGEYCZGVMHWXNIDKXURQGLGGEZXTNAKDMUHYYJOIGJQKYK");
    msg.attributes.assign("VUZVXQOLPKPILLJKESOGDURWPXTTAKCDJZRAWEHULPQOMFSSVNTOJHHLDIBMBKDXIUPCNANLEJNIKGVPUIFIJEGQWVNHDAGEQZACWKWEXOTGAYEEAXMIJHBKUPLOAZCCGWBHHKRZYNGVGYRJXM");

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
    msg.setTimeStamp(0.37966578016030605);
    msg.setSource(32930U);
    msg.setSourceEntity(215U);
    msg.setDestination(35424U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("MGSQFYQDAJPKXBPCNDNLKKOLVURMYUMCTHRAFIZXPKYNVMFYJFGYVSQCJJEVVKBHOOEETGVEUZPRAZWCJTYGQOTKOCGZBGEPJUUSHCLRFIOAAKNUUHDBYHD");
    msg.predicate.assign("APCUZZCCANQUEDYKQLJXTGYXYLSJEAKPTSXIXZNCXKAFZERSRB");
    msg.attributes.assign("QYKRVXMGZUGKCWFBNMEMHGQRFIRNPMXDEKOJXNEVPNNBOLKOQDSJQHGIDJMVKBHXOJITNTIZFLOUVVPDUFFSYATXRUTLOCJTSNZPLWGPZCUVNRFYAADAWSXLQQBDDWULNTZIBFGMZPBBUECOGFZMPJWDGOWHBRIKASRFLCTVUAQXYIGQEZTPIMVPLAUSXWHBDTXYHYSERISRNGSRYCJJKMWXVCKYKFAQUHZYCMESVHALEEIHJOCE");

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
    msg.setTimeStamp(0.6460190940885343);
    msg.setSource(2658U);
    msg.setSourceEntity(87U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("GJEANPYTYWVPPFUNMWDFZBYZNNLVETAZPEFRXKNFUAVECNWMLQLZDCQHJNGOREXUFYGRULWDJKROBNEYIKXQESGFCVGIZ");
    msg.predicate.assign("HTTJROHIOFS");
    msg.attributes.assign("JPOSVHWZKESPMIMSMXPRWOJBGLFXKJATBZXYLMAKQNCDSWCTVYGALNIULTDHOELIEKXTWBTWCTLGIEKZRFPPNNBADUAPDTOXMYRJZHURYRWVUBEDXQBAFLENQYUFSWSPAICAPIOXCVZTGGCHWZAQGIVXN");

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
    msg.setTimeStamp(0.33221915119878576);
    msg.setSource(16412U);
    msg.setSourceEntity(88U);
    msg.setDestination(16339U);
    msg.setDestinationEntity(230U);
    msg.command = 84U;
    msg.goal_id.assign("QODVVNKYNGPUCMFWDTYRXKJYKWJTFWABYHRTTOANFULFQAZOBLQZAVQRWEYGXOYICDXBMLNDOSGPPSQZEGEAKJHDYQTUYNXWVZMBPKJRPMLIJBIUNRMSIBWJXCHFBYHRWUSSOAJRCLZIGGTOSMRKVFFEAZXIABUXDSTCILYPVTPGWZVNTJHZGULFTONKFGBLCKRWROZMEJELGMQ");
    msg.goal_xml.assign("XWCRNZBMFIDZMOYUJQVJTVQMETTRIPIVYYFAGDXIHSKLKZROFHMSICGGYKWSWSEXUANHTWAEMPPWKZOFWPTQVNGOGWGEEPPSNJPREDIFVHKRFGTFRUAKXGCOQRGELTHLKCLLXREJZIRDVUNJVPIDAIDUKZVLCXSYKAULBQKONJBQMJSYZYDBDGDOCFSLJHONVTMIJBCUCBYEABPLNXACZMZHZSWQNJS");

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
    msg.setTimeStamp(0.4519884947296716);
    msg.setSource(57880U);
    msg.setSourceEntity(144U);
    msg.setDestination(44915U);
    msg.setDestinationEntity(66U);
    msg.command = 247U;
    msg.goal_id.assign("IKWJOZWBYYNILVGBUZSRKFJZXXFSXJCVZLJSYAAFTIKDGCRMPPUMPFSRDYSLQENLBIAHIHHDKABTNVXRBMJEZGPPIYAVMMFRFYS");
    msg.goal_xml.assign("OPDYUXGUDRLBJKWZGZZSRXNNNLOCLOKDWMRYKMKYHBUWGSCIETGGOSFNHQZDLKMYNOUADVWFEUVRKLQMDXBHPIVMLSNIXIYTIMAVFWOWSWOEHAFBUFZYGYTVAHFADTABVCLIEGGBFFIJHPAEP");

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
    msg.setTimeStamp(0.14255458228429674);
    msg.setSource(35785U);
    msg.setSourceEntity(141U);
    msg.setDestination(7551U);
    msg.setDestinationEntity(6U);
    msg.command = 44U;
    msg.goal_id.assign("IHNBDHKVWXESPPTXBASUUGFMLCSHRQDMDUJBTVHMPXOOYFXKZJKJDNQCTDWCPIFJUNKIDKKGTTVOQOXTNILZWRVOPBNRHLGEFCJNWMTZACPZ");
    msg.goal_xml.assign("SYGOYSHXFNMOADQAQERUWSVELAJGCYCVNTDQFOMKECHUMAOVWJAADMWPYMLDEZQLMHDBOQXHRROOOZC");

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
    msg.setTimeStamp(0.5159183639097737);
    msg.setSource(22755U);
    msg.setSourceEntity(234U);
    msg.setDestination(22138U);
    msg.setDestinationEntity(140U);
    msg.op = 11U;
    msg.goal_id.assign("UEOFJGHNLVPVCJNPWSIABCPHSNZDXVFCMVZWXWPXMGDDTEZXQINQSJXWDKUOCKXTCTQYRNOKQMOYOIITOYGQHFSNYVXGZSEPEARPKKAWHLBUERJLRBTXQUFJJRAVBLSWLYKGUASOKILNAWEMIJBZGULMJZDKHZFSECFNXAJDDGFZUCIBTWARREZKJMUXSMHEFPEQRIPMSHTWNYYBIVHOBVDTHKHDCLTGMLTVRCRMUDVYZBFAYPQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LPMPGQJALVRESWTRDKXEHJQBGZOIVKCZTGAANKNNSDZSHYNFGXUDHIUWPBOPNAEBCEGCPKMLWJKOPPRCFOVESFKQQFWDTNZUPYWIPGTIIJHXLTXZKOGAQJXQTFRMJPHAHGIGVENTFDHVE");
    tmp_msg_0.predicate.assign("SYNOVCRIJKKRBWZOMRLTOFCOBVZZXSLEZCHKSXNUALVHWBVETHNTCKPSMJDLOSPRCTWRXMFIZCFWWMHXQVNJUOCAUREYJAVTJKIFCABJIQPBPLYYQFODPIUHOMLBIKXPSQLUDTGRWIAHQY");
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
    msg.setTimeStamp(0.5876495645045365);
    msg.setSource(30033U);
    msg.setSourceEntity(109U);
    msg.setDestination(2104U);
    msg.setDestinationEntity(218U);
    msg.op = 244U;
    msg.goal_id.assign("TXLXSZJOVXBOUUVWRMCSGTUAMFZQKRMNPDIKSIZRFENTBNFCDKOJVLYMFAZWCQFULWACACWXVDGBACODLEPGFOHEJVHGFGPBUNZZYRVJIPECYVPNEUOGDZYXBYBSIGWBKM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RRTYFYMXOBAHPRKGELGDGMRWADVTUORBFGBHTOXHJDSJAGJDPNBRWAXPFLTUPHQMKCINIXITBEDNQDJOGYCZHVPTJKINLHZNZNBQQSVUDDWHVWCLEDYFQPRIAXZJQXVXUJMITYSWIWMPWPZYISWRKPNHAGWLLSLKREIHOUSUDFNXSVVQZOEXCUEVOACBAEFCKGYMEOMFY");
    tmp_msg_0.predicate.assign("VDPUZBOTXNRDHXIXOLNFBQJHBVCQZRLYCHMYQAZIIEFITPYQWNXQAZGAOHRPYHNJHKJGAOKDOOTTSJBZVULLSIZDHLMKCEVXCSBCEQAELAOMEIUHSPRPJZUFTPCRJJSSQIISMQVA");
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
    msg.setTimeStamp(0.15256146419795613);
    msg.setSource(3759U);
    msg.setSourceEntity(228U);
    msg.setDestination(54729U);
    msg.setDestinationEntity(170U);
    msg.op = 29U;
    msg.goal_id.assign("AWXQVNOVMGNHEXOBKYRCSBMZXQESTBJGIBGHPOXHCCRUDMQPSDHALZHUYLSMCLQYQLWBFNJSTSVQREZNQUWLFNFRHEXGAAKDFOIAFGZBKEJCVTDFKCUTLEXIMSUQYDPHGKRRPOTMEGZIPEAGXJMTIWSCAPPNLUPWKBTJMLBLCDWOVKWROXAFDJDRMWQKKYKEZSUBNVZSAJRRXJTIDYPFIH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YAYOVTQZAPUQRCAGZXOKWZTJQDEOLSCYFZPMVGBQUMPDMVUHQWJJYEPRZLNNIEKURLJLXCFBGHGDDFLOPSXQOWIPCWIJNNXJETBKGXPIWPHXRNAHCENERYYSGTOHVSZJASTCQJ");
    tmp_msg_0.predicate.assign("BLSIKBCSRZTPZVMCPPYAOCDBRLGISFYXFQJUWUMXJXRNGVWMQIYXTXJQACESOFAQOMWDKJPDPZHGUACFHEABQP");
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
    msg.setTimeStamp(0.6307055091820435);
    msg.setSource(30747U);
    msg.setSourceEntity(50U);
    msg.setDestination(3497U);
    msg.setDestinationEntity(90U);
    msg.name.assign("BHODUDOSMBVAEYVVZTSZNDFQWOBWLXSCKRRLFDPKEKKILQBIJTXZQJRWONRPYDHRTMIWXCXROAAJHLIBHFBMSSTKWXJMSPNCMNLXHUPVRAFXQKFQCUVEKAQYPJVZLEAQTUDJMYWMZJUPXTGUEZSBCDCFNFOAOEWVVHTADLZQNJWOENKLRGCYIIOEVXGWYBRSHXPDLGATJUFSFGULHPNYNZ");
    msg.attr_type = 239U;
    msg.min.assign("GOVOGHPELAXGCJKTXMDXYZZBQVQBGRLCQWPCIRFAJWHYXFOTTXUTROHQEUCLDEMIVIANVHLIAWEYNBQRZDFYSYGUP");
    msg.max.assign("NMQSVXGJLIEETNTNAOWDNYFDGSMGYHSNBYROBXHLWKBABUKFDJCRPWVMQTHRICCNPZAUHOM");

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
    msg.setTimeStamp(0.6776852470019891);
    msg.setSource(49812U);
    msg.setSourceEntity(66U);
    msg.setDestination(19434U);
    msg.setDestinationEntity(190U);
    msg.name.assign("BRADKQRXOROGCMXPDUOKLSSVVXTHWHPRRKOYPP");
    msg.attr_type = 143U;
    msg.min.assign("WOXTYWNKVAZLDZQTMCMFHVMJXKTJTGBMIHQAGPDIWMSLBCNRSPNZOKNAD");
    msg.max.assign("MGJPKYKEFFXLNXOSFOBASZJHSHZTOOVJZDFNVYYLRPVRNHEWKRXZBJLZZUUCHJWBHRPLCKSDUNILVPEUAEFXLSRWVNFMYQCXYEQKG");

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
    msg.setTimeStamp(0.8501612448016961);
    msg.setSource(36520U);
    msg.setSourceEntity(169U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(170U);
    msg.name.assign("KFAESKBYKHNWSRIRUTKDRWPZUFXZLRZNXMORCHGGBIMVWHCXDCLIPDXLFQKOSLIKXJZYBVPAJVTNUNTOYGCOPQDJXEQZNZHBFGIYPWGXMYSAWFTDLQATAMVFSCMUZBTIWKSSYQRRHJHPRHVVJNGUBEMBYDAOBIMSOJZDAGCVUUEYEWUNL");
    msg.attr_type = 234U;
    msg.min.assign("BGTBLWLBDHTXMARZDPEIWMKLGGEGZVVUBEPLOZPBOENQSFRN");
    msg.max.assign("YUZDUPXGKXQBWAFXDEBALBEFMSZQW");

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
    msg.setTimeStamp(0.00614622460996983);
    msg.setSource(58585U);
    msg.setSourceEntity(235U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(189U);
    msg.timeline.assign("CWUVUADZHFMYDTEMPELBPVSOMLJFZDWXYCMWEMMGXCITXBMARORFHALZBKOQNWXVCGKOONEUIKDTZTVUYSHFPZSOUQNYDYRJGXZRVUFPWGFCEVAZWNPRBRDRIVOISHTCKYBJBILGXPXVPGZKCEYTDEJLUEFEWOKSSFHIXJYVPCRINRUOUQFCQOIYLJQNPLMBAZBSJSSWKGXJHDJMGWTUNEBHSAYQHF");
    msg.predicate.assign("EUSKEERPFRSDEOEHDBVWYLHOQKEOAIAYZFJIRZAXCZPXWJIJCUNXAGOCHWPPQXURSJNJVBSUXEYSXKXXQBSMWTLYICQWCEFFTORMIBPCNINQZAZIFHFOHWBXWDVLVENOHBAUVHLZRQML");

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
    msg.setTimeStamp(0.05843692720430649);
    msg.setSource(31378U);
    msg.setSourceEntity(42U);
    msg.setDestination(5050U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("TNITYYPQKUFVFCQFDKRNMATVFSCEVMXRIWEUTLXLYODCQARFBJNZU");
    msg.predicate.assign("IBBSMWYJNIQAZCTCYQLZUVITOJEWALINGOQPJMBVAKQJHEFPSAFAEETUHNNBPXSDMRJHELEIYTKWGRXCXCOMWDGSYGUZIDUOBITMHBEDSAVAKFKIYTBTQFCYVHURTSPGBGWWDEPPTLGOKQUWRRHRZLHKCQQDUVTAKFSRJDMNMZZAODWIBOLHSXQNVXENKRNLXYCLZJXYPFPFUNVLXMYVCGKEAI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DLFNMJWRTAQXWPEIVFFGUJEAUVNCSACOHYLSXRDIDSORXPHAIHDCUPZANZSMPWASDHXDNGHSLTCEOPMVQDLUUJFMFCXDOKSEODRGSRBFRJCAEZAQBIEZXOVKKWZTMLMXKQGEREKIOEZMQVLWKS");
    tmp_msg_0.attr_type = 12U;
    tmp_msg_0.min.assign("ONJRDULXFBIHBVCZWSLASVHFMNBUGPEEO");
    tmp_msg_0.max.assign("ISYBTDPAUMEFJPGOOFKWBMUDRDPXFTRCJQFRVKRALFKLWDGELATWWKBUUZBPGPHXVOCUTDZZCXHGMQLEHLWFOXWPYIKMGIEWHVRYNDMRXABFHSHIUIPCAPDMUXIYOESXRVENJTGMGIJYISUWK");
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
    msg.setTimeStamp(0.9730240189516455);
    msg.setSource(49321U);
    msg.setSourceEntity(19U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("DBDXPGWTWQOUFCUKDSQGUELHMKBLVHVYROWNIIRWLXQSVEBRZLOQFKBNCRHQRZMTMZREJXZKUASTPDMOSZRKAUNJBVFOGQNAJPTVLUPECGPLDAYTJKMNTTPISYJEIY");
    msg.predicate.assign("BKZZVUIPSBSECHZUCAXNDTCOVBRZODEOIDKFLITKDFXFYWHIISOHRRAQANMIUNVYQBBPELFJMBEPTNMZCRHHSMEYWBOXUBGLGDIFCYEQLYOSONYTKXVPBAGMDJTRYXYQEUFXVUDVHUCRKYZPPRHFAOUVTNNTMTG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZUQUPCWOKDQJSXFROMKWQTZWEHCXOYBMCXZDZZBNVXVKIZJBIFLNNBTJQBERVZY");
    tmp_msg_0.attr_type = 35U;
    tmp_msg_0.min.assign("QNFHLCMBBADWQBLTQLOZWFRZYEAHFKXNEHLJQVKRIRRBZWVMUSTORVTILHEQBLPZPGPDSFZEHONLIUEACZXPNLVNMZJWIJBXVRVMMCGJBJDHYWYTHANZJPSDHWMOPXKAISMMUXQHGXWGPXJKNKBSCFAWTCIWCOLCAZNGDRRMUKFKOKQJAXGESTYUUCQPTFYFOG");
    tmp_msg_0.max.assign("XJWROWLJWDSGLQGVDETGSFYZYJBVTPZRUCSXLMUFVOBZFNFXWDJNZRYJRVQFKIUWBTHHSAOKLFEPRMZNSAJBKHXQUMHCTGNBDMXNLMBNWKMKZAVPCHEPQAASXBJIOHPVIAUSEULATNPBPJEDNUOTODIOSYMKIHDCQWYILCNKCJGLGUVTYFXCVTZECLQZQOHOVMQKAMGYBYVBUCKRQWRUIXFPLIOKHSQ");
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
    msg.setTimeStamp(0.34347970390205473);
    msg.setSource(61904U);
    msg.setSourceEntity(223U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(20U);
    msg.reactor.assign("SAGEJIOJBPVFDYGIJKZXXSHLWMGBVVEYBTROTVIRWSJQBEVUOCREIYDLQZZGPFHEZANWWCAGHKRDNHWZCUWTVGITWYKHXNAISZTVUQYMOPQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BFHYRNGYPV");
    tmp_msg_0.predicate.assign("MOFVBXQXVPPQDCRSONZIBOVPGZXGMEOSYKKABNVIAHNPFJUJHNSFJFGVGIPNWTZPICHUBZCLAUAQYPMSRQDHZJUZFYXEWPAYFTAXGXTFTLCJCG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IAZSBWKBZAVCTEILKDSIPXDILIZXYWNVLCYDFDJHKPVZSBDURWNCWXKFCPJYQT");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("XXLJAONEDJXVWGZPPJUGGUADDNFESDJCPOPFWUCVAVQECZSLBMIKIGYSRZFFCPXQMIAMZNZPJQGDRARNLREWLFOKCDMWBHWTDSTTFTLCWYKKHJIOOVSCQBCCYYZJNMGQMYLSPXTWZGNGUOZIMOFUHQZWLRXLFTPXANANFUFEBKYISXDSRUUEXTHBJRGBBEBMDAKVBKHPIIYWVQVEMKXARRYKBUDLSTHLOTSEIHQQVJYCKEPNRVWU");
    tmp_tmp_msg_0_0.max.assign("KVAUNPOBLDBUOVHSSOWTSFMVIWIIEWDWXJDOYBEJFEUXRHNLKYWLQKANACQTTGKRZCBSQHVDDRZKXXGENELESFQIRGHCQJLKLPJHFKDJFPWOHFVCXFYUUGEXMNOGMZGITONWBIXVVEWAJCYZSSUJJYECANSBRRPAXOM");
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
    msg.setTimeStamp(0.9121408368415707);
    msg.setSource(6861U);
    msg.setSourceEntity(185U);
    msg.setDestination(31378U);
    msg.setDestinationEntity(174U);
    msg.reactor.assign("MRUKORSLBHVOPIFCTIZEBEXFSJJKQAXPOLTRUGSNGOMAMTIBGPFMJKS");

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
    msg.setTimeStamp(0.742549020245418);
    msg.setSource(41151U);
    msg.setSourceEntity(128U);
    msg.setDestination(40185U);
    msg.setDestinationEntity(42U);
    msg.reactor.assign("YNFOWVBBYUIGRJRILIRIGKRCSKYRTVOCKIHNZLEGBNODRYAZSEPNALW");

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
    msg.setTimeStamp(0.3501976450998747);
    msg.setSource(39604U);
    msg.setSourceEntity(186U);
    msg.setDestination(64656U);
    msg.setDestinationEntity(157U);
    msg.topic.assign("SVYCXTOZHZXDRGEWHGMPMFFCJTJDUSYNYSWLMSZXWQWLJHPMGPUSIDFNICQKAQOJCQURCEKBOOFLIPVBCTWJFZKUJYEJRBGOVNRVJJSSETOENSEGVVPQILBBAIMHRYZSKOIHTCYXATWGQFXKDZRXBVIVTMGB");
    msg.data.assign("IDVHJIUMIFYFVUCXSEMNDORKNNTAEXSVWABZIQCHOZTMQCMBTHVIHQEWCKKW");

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
    msg.setTimeStamp(0.8251191509194192);
    msg.setSource(15839U);
    msg.setSourceEntity(104U);
    msg.setDestination(34827U);
    msg.setDestinationEntity(151U);
    msg.topic.assign("WFDRLNIXKROJOTJKIZGVLJCOGBDFFLELLQYTTCAPBQLGTMMNZKLHVAQCWEBWQXPSEAYPAPSHTDERMHIUVAMGXUWKXDKGSNWKQHTTLICOZWHFIGFYSYDZAZAKGZBRJSVRKSBYUFHTUOEUCXOFZJWRGCSQYLVQGNMHEUMBXNTBENZWEVRMIDMQCNNJKHIHPXRVTDWMIBFJPAUSYCYZFQLPUXCNOUSRPGQKMZOHDJAJUYYCEWREIF");
    msg.data.assign("PVHVLMZFTDBNEQKCBL");

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
    msg.setTimeStamp(0.21961746730819176);
    msg.setSource(23558U);
    msg.setSourceEntity(85U);
    msg.setDestination(526U);
    msg.setDestinationEntity(62U);
    msg.topic.assign("AKCWULICIFZGIWLLURLBIKELFWQJPXMVVYIPBOPHGHTJRMNWCYUSBUAMATRSRCUIDCMSFILCZAHCWADME");
    msg.data.assign("FXRTPWRLIESLWZOPSXZUWNWZLTCKJVNBMMYEDJIVBVFQAVKXAZODKVOTGACCUTZSOQHLDNFHICPYFTUHKOSJWDQNJLEAJQHGNHADBKZKIPBIKWQQZECNGDJEAVBBYTPCBMKDCEN");

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
    msg.setTimeStamp(0.3163022382007824);
    msg.setSource(33792U);
    msg.setSourceEntity(62U);
    msg.setDestination(32605U);
    msg.setDestinationEntity(111U);
    msg.frameid = 130U;
    const char tmp_msg_0[] = {108, 8, 117, -121, 8, -14, 96, 46, -118, 113, 36, 65, -32, 95, -51, 122, 49, -94, 7, -21, 88, 47, 0, -84, -77, 121, -87, 51, -115, -77, -24, 88, 33, 34, 1, -52, 23, -29, 37, -58, -85, 41, 111, -15, 4, -8, -69, 101, 56, -117, -114, -114, -85, -127, 95, 5, 77, 9, -110, -100, 117, 84, -116, 3, 20, 45, 58, 47, -118, 81, -121, -115, 64, -41, 84, 75, 85, 78, -121, 21, 67, 52, -45, 29, 115, 30, -113, 66, -27, 21, -12, 124, -63, -119, -17, -7, -128, 59, -116, -9};
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
    msg.setTimeStamp(0.6166391583840115);
    msg.setSource(32907U);
    msg.setSourceEntity(252U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(112U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {76, -21, 85, -27, 109, -126, -65, -16, 69, -52, 112, 114, 53, -27, 105, 54, 40, 71, -8, 108, -109, -48, 50, 108, -64, 79, 53, 76, -70, -102, 88, 43, -125, 19, 16, 121, 71, -54, -74, -56, 117, -46, 42, 94, 121, -27, -13, 61, -21, -86, -31, 17, -126, 23, -32, -102, 72, -37, -9, -67, -128, 109, 126, 93, 63, -64, 88, -29, 99, 109, -105, -76, -95, -58, 107, 85, 3, 78, -51, -39, 74, -70, 24, 47, -36, -73, 45, -40, 88, 47, -10, -18, 74, -4, 22, -113, -49, 94, 51, 98, -105, -45, -127, -97, 61, -90, -28, -119, -58, 15, 116, 40, 59, 52, -97, 8, 58, 18, 100, -91, 120, -108, 51, -54, 94, 5, 82, -45, 14, -29, -128, 36, 69, -128, -80, 121, -65, 67, 24, -69, -84, 49, 62, -2, 47, -100, 54, 84, -44, 61, 4, 14, 22, 7, -2, 52, 83, 107, 69, -75, -93, -57, 107, -51, 53, 117, 34, 24, -3, 90, 79, 48, 5, -58, -69, 112, -41, 21, 90, -30, 101, -97, 81, 82, 32, 63, 116, 122, -76, -54, 57, -93, -23, -64, 126, 18};
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
    msg.setTimeStamp(0.5867903215817932);
    msg.setSource(45264U);
    msg.setSourceEntity(80U);
    msg.setDestination(14109U);
    msg.setDestinationEntity(205U);
    msg.frameid = 23U;
    const char tmp_msg_0[] = {-90, -73, 123, 108, 21, 101, 66, -62, -38, -16, 57, -26, 48, -64, 70, -88, -106, -60, -66, 62, 32, -111, -98, 71, -66, -78, -46, -42, -112, -70, -1, 24, 35, 70, 14, 101, -102, 30, -28, 123, 4, 82, -47, -81, -84, -84, 20, 48, 123, 45, 28, 26, -126, -58, -41, -126, 19, 111, -32, -63, -101, 86, -40, 93, -9, 71, 113, -22, -35, -23, -72, -14, 54, -66, 30, -68, -67, -66, -37, 22, -53, -51, -92, 72, -34, -35, -22, 13, -71, -8, -35, -41, 74, -26, 65, -113, 45, -50, -29, 88, -101, 66, -35, -36, -115, -102, -69, 120, 48, -54, 47, -97, 120, -42, -122, -87, -120, 77, -119, 47, 101, 120, -48, -103, 27, -113, -28, 97, -83, -55, 55, -15, -18, -32, 72, 56, 84, 18, 9, -97, 90, 61, 103, -3, 52, -39, -97, 21, 44, 76, 99, 95, 14, 6, 91, -59, 27, -11, -23, -3, 84, -120, 114, -56, -124, -99, -64, 102, -76, -81, -108, -83, -30, -106, -65, -4, 118, -97, -26, 30, -37, -72, 88, 55, 77, 33, -49, -60, -119, -24, 9, 59, 85, 63, -43, -128, -38, -65, -53, 112, 53, -8, 54, -47, 17, 126, -39, 116, 22, 47, -96, -31, 19, 117, -26, -124, 34, -16, -79, -6, -117, -115, -19, -92, 13, 13, -116, -90, -86};
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
    msg.setTimeStamp(0.35945663709875086);
    msg.setSource(54050U);
    msg.setSourceEntity(163U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(136U);
    msg.fps = 63U;
    msg.quality = 162U;
    msg.reps = 8U;
    msg.tsize = 159U;

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
    msg.setTimeStamp(0.23038267031645043);
    msg.setSource(26012U);
    msg.setSourceEntity(3U);
    msg.setDestination(61461U);
    msg.setDestinationEntity(187U);
    msg.fps = 34U;
    msg.quality = 27U;
    msg.reps = 126U;
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
    msg.setTimeStamp(0.2797628773941295);
    msg.setSource(14305U);
    msg.setSourceEntity(66U);
    msg.setDestination(38034U);
    msg.setDestinationEntity(179U);
    msg.fps = 99U;
    msg.quality = 11U;
    msg.reps = 80U;
    msg.tsize = 119U;

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
    msg.setTimeStamp(0.7282828848565612);
    msg.setSource(43869U);
    msg.setSourceEntity(84U);
    msg.setDestination(29004U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.4230642891108115;
    msg.lon = 0.6731293254481531;
    msg.depth = 144U;
    msg.speed = 0.7351645116235077;
    msg.psi = 0.3049702129068289;

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
    msg.setTimeStamp(0.04905827458464562);
    msg.setSource(60637U);
    msg.setSourceEntity(50U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.13903423796353953;
    msg.lon = 0.99330221485052;
    msg.depth = 29U;
    msg.speed = 0.8841900356593291;
    msg.psi = 0.5887284411524792;

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
    msg.setTimeStamp(0.6329380892213569);
    msg.setSource(57168U);
    msg.setSourceEntity(207U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.9322081732810065;
    msg.lon = 0.7480916223068759;
    msg.depth = 90U;
    msg.speed = 0.5793959053187191;
    msg.psi = 0.11475758328213048;

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
    msg.setTimeStamp(0.16885448594032282);
    msg.setSource(43051U);
    msg.setSourceEntity(220U);
    msg.setDestination(34002U);
    msg.setDestinationEntity(208U);
    msg.label.assign("SQRMVKZCREFJJNPSRNKIXXZWNGNNOMWACEKEIFLUGFPKQLTCRJVSZYUZZSOOVHALCMPPGNATHUOIFDEHUVELDOHRXUPFGZXEDYFOYYTMIVKMAGXIBTPOWGIBGLQVSWHQELIPXOQRNJ");
    msg.lat = 0.24787945424828506;
    msg.lon = 0.21696226463103319;
    msg.z = 0.39623905259897185;
    msg.z_units = 165U;
    msg.cog = 0.44483316267377593;
    msg.sog = 0.21722563579394494;

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
    msg.setTimeStamp(0.3866602162125258);
    msg.setSource(18200U);
    msg.setSourceEntity(107U);
    msg.setDestination(50534U);
    msg.setDestinationEntity(253U);
    msg.label.assign("LEAJBWCLJTXGXEAHTPIIGRYQQOFAHYWPNAMZXOEIGSSQBKYUNBXNQDGKTUVYYYMXQJVLRCMPZTDXMNTRURJSEIHMHNUSJPLJEAOZYXDSTRTZSWIUHZUANYUKGXQQQNVFKQNFEIKGWFLKODCXOLMHBWZPYKAFKHFCVRHCSPTPBNCRDUDHQRMVYMDZR");
    msg.lat = 0.8384148686252454;
    msg.lon = 0.29100762614707376;
    msg.z = 0.4246730862426116;
    msg.z_units = 53U;
    msg.cog = 0.10292756705906081;
    msg.sog = 0.8750256592605202;

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
    msg.setTimeStamp(0.5070573987499387);
    msg.setSource(9287U);
    msg.setSourceEntity(32U);
    msg.setDestination(42447U);
    msg.setDestinationEntity(124U);
    msg.label.assign("EFPCVKQGOFVFOADPNW");
    msg.lat = 0.9171030569996632;
    msg.lon = 0.2588735733397419;
    msg.z = 0.9675800328453517;
    msg.z_units = 170U;
    msg.cog = 0.7645066257107701;
    msg.sog = 0.1758233884879875;

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
    msg.setTimeStamp(0.6493595081823041);
    msg.setSource(56080U);
    msg.setSourceEntity(237U);
    msg.setDestination(30991U);
    msg.setDestinationEntity(12U);
    msg.name.assign("JEAWRPODZORRECCZAVSVDUXVMXYAIYTPGUFFVHWNVNZQFLYCVHRXIYAXWZLEYESDOK");
    msg.value.assign("ZNRPCDYNEHWJKEZXURGCJTUIAPNSCETZAOHPWQTCYCBWLHBOUZBHDYKLGNOBZTVIDZNXBDQ");

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
    msg.setTimeStamp(0.2830021120126882);
    msg.setSource(10305U);
    msg.setSourceEntity(64U);
    msg.setDestination(59599U);
    msg.setDestinationEntity(221U);
    msg.name.assign("GVOOMQJYXNXFMMDQQNZRVNVCPUHQIWUXYIPILJVEIIHFZPSDDJBEQEYOFVWYSULWCANKUJQBWLJTDWHSSJRUIXPVFYSTDCOHCWEYFGNRNFTXTCXZBZQDQZYMLYJASMYMAJDXSBWUMXLALOEZNFETTVBLFKKKQSBKMKNWQH");
    msg.value.assign("OABIBBZZVXEXMQFGYVMVUPCPFRDHXRBYMLWDSOQGASFNZUWDGFYHRYNLQTZWHTMCMJVZXPMPHMCFJEWCEWBEZWDJSIPOKYUVBBG");

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
    msg.setTimeStamp(0.8721315941306067);
    msg.setSource(12439U);
    msg.setSourceEntity(147U);
    msg.setDestination(4911U);
    msg.setDestinationEntity(151U);
    msg.name.assign("JZEKSGBSOOYTXXHOAZQVMXSCUCATZUNQFCHHSIVJJINJUTKMWQKPOXNPOFTPYTHKOOQYGUHBLEGWDTEBQUFBRYFHKSCGITLFAMXC");
    msg.value.assign("LGSTKDWGNMDWHRWDTVXPSCICIUONGVAIYPECMAGNBJKIHENVOEJVJKCAMHVEQBBMSUZCRUCQQLMXKTRDPBIMMGTWBBVQGFDLDIRJSFRIOFHXAGOEAAUBAQSYQHBYZSVUUHWFLSYNUTPWDXSKYDVXZGOXOIOPVWPHFCNTVCERRFLZPCTXZHXJFNZZJANOYZONLPLKSN");

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
    msg.setTimeStamp(0.979737903309998);
    msg.setSource(39404U);
    msg.setSourceEntity(164U);
    msg.setDestination(43222U);
    msg.setDestinationEntity(102U);
    msg.name.assign("TGZVLLYEZSOICVSFFVZAVBKVWNTSCFGMTOKGSZIQDXMGMLOKRSQFXCBYEGQUIUBJHDYXEQNFCKSRZPOUPJELUYDBTADWXPHHWMTDOENAGOQMVKQNCCQOFRNBFYMPCYRMYRJNAWQUOCCNIP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QJEUMOLQOXQGRCB");
    tmp_msg_0.value.assign("VYLJKCTUCEOSEQRDQIWNFWGOWPYLBYAPBAHJMKFMDKSNKBIJT");
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
    msg.setTimeStamp(0.6281345320613191);
    msg.setSource(25443U);
    msg.setSourceEntity(115U);
    msg.setDestination(52401U);
    msg.setDestinationEntity(52U);
    msg.name.assign("VFVHYCJFIJXUJNDIRHPULDLXTVYLCYZIIBKEFSEGQVRGYNOSMZPVDAONYBELHQBWCSWXPQIXJULFKTSWRVORBWDAOCXQXJLWOBODSCYEVMIMZNVCJJRXDPCLBFJGEPE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TYUJMWVFNWMEWIWODVPPNGOHMKCEVXFFOQXWOBZKLKSOPTRELJERMPZXACWNRFMQRSZTPADDNKTGKUIOJELLJCKILGMSCDYXOZCIQZUJRHBMFUKQPHKATWIYJSPCHTMIGYANVOLXJISTLEIVTEWQVQZHZNGVNUYGQOYVMBFZEFYAKUXHACUHTENBIZQRWWBSALXBAFADLBHPBSRCUFPFYUGKGSRXPGQULJRDBYRVNQGSVXHOBDJTMD");
    tmp_msg_0.value.assign("OHKSNJFYBXTEZACKVWFXNLDKMTNIAUGVSUDLSALIIBSPVGPQYPSGXLUPXAJRBEEDXMPYZHYSQQQFVKASRCUKOTZZMGFDYDUXWLATKUYXWDWIOJKNDSUBCVFGNOITLZHEQUFMFJDRCPQBHGZMQEEAWEIROHGJTIXRQWNOWJVQATJVZWMLCHKWJEVOBREUIECG");
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
    msg.setTimeStamp(0.6254361358872917);
    msg.setSource(21755U);
    msg.setSourceEntity(57U);
    msg.setDestination(61449U);
    msg.setDestinationEntity(53U);
    msg.name.assign("XBODJDMINLVPPYWVRFFMWYWZSUKDFRWQZHNSPNGUQXDNHUAPQALNXOUEGBEIXMWPKFDRXY");

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
    msg.setTimeStamp(0.19904942271728343);
    msg.setSource(19551U);
    msg.setSourceEntity(227U);
    msg.setDestination(44978U);
    msg.setDestinationEntity(124U);
    msg.name.assign("PYHRFTHNIEQDLJJCYGOMNOVNBMEDVTVOLSDSEKWOTXRZNWCKIDUPQHBXQIXOLYLRNFCABMXVVXEQDRPCINHOHGWEKPJVRFFFWYKUAGSTTTYZZNLKTFRJMGWQXMAEEJOJCUZMXTJJGWSYMHFF");
    msg.visibility.assign("SBQFHACXWILHIACPFZSELISOQMSXWSCJPSUEMZOWLJAGXYTFMCYOVZKZTAZXONBYMIERHLEFDQPEVJDUMRJNDOHMSFQNRZVOCQATSUTGNYLXOFUWIBYNKTJQWZBIJBCYTGDOFGXVFXLUQEZGKCJHCAPYOUASWBNRJTXDNYQUJPATGGYRYBWJGNPKIDLEKCLPMDMSUBIPKLNGAQDGCHEPOWMRHPKVFDZBRR");
    msg.scope.assign("GRBIVCGUFBKQAQNIINYOMTBZWGIDDYPXORY");

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
    msg.setTimeStamp(0.20327579658568817);
    msg.setSource(45052U);
    msg.setSourceEntity(49U);
    msg.setDestination(25693U);
    msg.setDestinationEntity(68U);
    msg.name.assign("FYUKPPCHDCJLMBYJIINYZMOTYHGXQZAUGIECZFYVUNZXJDFIJVTHSPPGTYHWXQROFEAFVBLNPGZZQRDZWCRSQKXSXNTGEKAKWQAUTHGNSDQJWSFCOBEBWQV");
    msg.visibility.assign("MGUVJRGDYUKPSCQVKXILCEEIYIRTTGJNJADBUHLYXDONTAJWPRAUCGDZAWBLXMQSKPHZWDSBRAXBHRXWWJWHHRMTHZMGEWSHPGEQKWNWHVCOJTTEREVKQCDXTCXSZCZJUCHSBUZNDYEZUUYKRVAMHNZLYELIOYSGBMSFSLWBIIFAAKOGEQGYGVTOZXIAOMFUOFLLBVAYQMFKXLIDQOZFJPKPMVCTRBDYJUSIPPVQVNFT");
    msg.scope.assign("KNKHLGAYRLFYNAQOUEZPTKVDVXMDTUWDQCRYEBFBFYNJRCJATBOVIHZFAAYWVMG");

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
    msg.setTimeStamp(0.5080414190298382);
    msg.setSource(40516U);
    msg.setSourceEntity(202U);
    msg.setDestination(43718U);
    msg.setDestinationEntity(217U);
    msg.name.assign("JVAHOZYHETWFHZLDGRNZDNLBPIQRWVMBDOISKMIGTATCUAPBFUTWKNQDRIPXJRWNPVFGIKFMXGKZDKLSLTLVUQHUECWNUYXRAHFPSMSXEWOPGMOFSQZZCFEKOUPNCZCJRORDIEYGDSEUEKCVYHNMEXMSMYQDZSVKFADTRUXNAVRLPFIJZHOJJMAHPIYSMLJHEJRUBIGVXBJSBKCACGXXQVJCCTGDWLATNQN");
    msg.visibility.assign("VMAGJMQQSALASNYEGCKUQIHBGSHKADHANPZFBNBJHWQEMMEZSOXHULLCUOOGYUXQVWQJKRWVAZTFVDYNZEPPCONDY");
    msg.scope.assign("WMBDCZKCDOMGFIXXDLGMZYFZXTPNFMILPVDGQLBWAXRJRAXRNUEWTPK");

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
    msg.setTimeStamp(0.3110066610007297);
    msg.setSource(3491U);
    msg.setSourceEntity(8U);
    msg.setDestination(3378U);
    msg.setDestinationEntity(156U);
    msg.name.assign("EFSEWMOXLLRJNLMTVCDJRTASDEVJCERFZHPLTQIZKBMJJYKMEMQEOABMPUXKIQYLNBFZHMMWAG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XCVMDECPICHRZZLYAFOJGSXLKHUXOAHPUROHOJJAQMMRYFASRFPBFCCYSSBOICWMTZRMKNEIHPIHXZQGD");
    tmp_msg_0.value.assign("ZXFBXKWPHDLRTPUGFTCAVVWNNISNSXNZQQDMGUPZYOHKFGDPUNRMCRKKXLGWZVZJHAHYFHFL");
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
    msg.setTimeStamp(0.15284822062253733);
    msg.setSource(12618U);
    msg.setSourceEntity(178U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(68U);
    msg.name.assign("EZRVSKFEAQPQOCWLIZPGIWTIJKPHEXNSAKXVXDRWKSBPZRYKAAKQREOYEODNXQSXBMTUUJUEHVSDVXNOVLHLTWNJFDILHNGARVXFRRLPYTWBCPBWUZQIUECBNMOKGJDSIALIEHTIVJTUNUZVSFYQHQOLBXPTQATMDYVWABCJZNQXKCWZTPBICGNGBHQUAROZFSWPCLRAYJOJ");

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
    msg.setTimeStamp(0.14962625364929671);
    msg.setSource(43861U);
    msg.setSourceEntity(32U);
    msg.setDestination(14469U);
    msg.setDestinationEntity(246U);
    msg.name.assign("DRCZWYTHEEOJWLITAZMMYIABAIOZZVWQIPEGHRSQBEIYPWEGGPESYRMWOUJGPZJCKARBUZBMDSSJKAWDARZDYTLYJ");

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
    msg.setTimeStamp(0.008627260637573242);
    msg.setSource(4959U);
    msg.setSourceEntity(176U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(17U);
    msg.name.assign("NNLMVSVRKTUGTOCJWHJUWAIXUPUFRKLHDOEYEIJAZMFFHZNPTUQNTUXDQREAYTZQZNKOTBMOSIKBJCPFGAGGMXIJSSMWMAOHRIWXCULGIPDCLAMVFBSALHVFLEVPCRAYYNCQXXQKQAGEXPDPQOYJYSIWBLHZKQTBZENBYUIFXBKZSAJWFDXDWJNDGBPKHMYHVXWOETBLEHEJPVNRGZESM");

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
    msg.setTimeStamp(0.8023159014342924);
    msg.setSource(38401U);
    msg.setSourceEntity(70U);
    msg.setDestination(63038U);
    msg.setDestinationEntity(131U);
    msg.name.assign("GGOINGHFSIEBPEKSXKTDFGTQVYSYBFHHTYKCCUPWZJTWOVZIEQHJNSUZWXEASQRWGAIATHMCYSURJZKDBQPOWZTBAJRDMBEFTHUVANPPIIDRHMRMYDNANZLAUHAOFRLLKCYOFLXXGWZTJSICXVHGYWXDSKVXMGBNVXGYEBCNUYTRXJIQLEBVWWPOTDKOPXPQSAODJKPJOFWQDZLLVMEREKGJNDFLUFRIJYU");

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
    msg.setTimeStamp(0.4161555719821727);
    msg.setSource(26344U);
    msg.setSourceEntity(60U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(132U);
    msg.name.assign("VFZZNQKPWWBYCOARBDQCHYCDOANLVVOGZSXXYKGUUTCVKCWLYXFHLMZOUMYVOSDBHRFGIKTDSXMZAYXIHQEPNIXPTZOPUKJXKLPIIDIAMJTFVBGIYXOEMYCQLFEFMTMHGEFACCJWXRCSAHSKVTSXWNWMUTJEWAGTQLLEUGNISAFTVPDTSOVJYWZKEJBWFRGBJNDSQJKNHPQVHBDJDNWLZPUYMKPEGGZAEBH");

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
    msg.setTimeStamp(0.8867282286518016);
    msg.setSource(35308U);
    msg.setSourceEntity(244U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(28U);
    msg.timeout = 2852220504U;

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
    msg.setTimeStamp(0.8287483191126609);
    msg.setSource(9308U);
    msg.setSourceEntity(38U);
    msg.setDestination(2211U);
    msg.setDestinationEntity(96U);
    msg.timeout = 335007156U;

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
    msg.setTimeStamp(0.9159303149902697);
    msg.setSource(37587U);
    msg.setSourceEntity(184U);
    msg.setDestination(17556U);
    msg.setDestinationEntity(134U);
    msg.timeout = 3521546390U;

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
    msg.setTimeStamp(0.2564584390908896);
    msg.setSource(29179U);
    msg.setSourceEntity(81U);
    msg.setDestination(30482U);
    msg.setDestinationEntity(108U);
    msg.sessid = 3759154159U;

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
    msg.setTimeStamp(0.8318061098902287);
    msg.setSource(37481U);
    msg.setSourceEntity(109U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(254U);
    msg.sessid = 4030515667U;

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
    msg.setTimeStamp(0.46511950926877077);
    msg.setSource(11129U);
    msg.setSourceEntity(9U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(26U);
    msg.sessid = 264280187U;

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
    msg.setTimeStamp(0.046510393306749664);
    msg.setSource(34041U);
    msg.setSourceEntity(181U);
    msg.setDestination(2437U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1641995008U;
    msg.messages.assign("CKOYZJBPLRVMWKBGLAGWTWAEJEARHPNJFSZDLYKFGLTAOHYQVXNJXGOEBLOMKFQCQLNCJYAKVUURVMHTTKMXYUGMNNIKEVULFISCWBVXZZBRDBFSYKUDCZSIRCZDXHQCOPSCQAXREWBNRITFRFMMIGRYDJUAPVXIZJUHSNGRH");

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
    msg.setTimeStamp(0.06982546768667575);
    msg.setSource(55642U);
    msg.setSourceEntity(32U);
    msg.setDestination(37127U);
    msg.setDestinationEntity(62U);
    msg.sessid = 2110272352U;
    msg.messages.assign("ZXENQCFPZCGGOAJOOBBWJOVDTQPTMMRJHVBVXJHXVGTPAQIEFTQLMXRKEVCPZYDDUXNWSVARETIAFQWKOOEYLWSIZXDWMNFMSMWZZTIKRBNJOHGLLMVACUOPLJFGNEHYAKGWCCNGUCPPSHWSEQYHASPZSRQJO");

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
    msg.setTimeStamp(0.7363418469942545);
    msg.setSource(56163U);
    msg.setSourceEntity(177U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(102U);
    msg.sessid = 1831063260U;
    msg.messages.assign("RRVPEDGQDLFBDWCOXPCRHVTLMAZDORXGCMJOBUIIITGXRAOZXNSAFXUAZQJNNSSRVWFGB");

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
    msg.setTimeStamp(0.9263880653495421);
    msg.setSource(7157U);
    msg.setSourceEntity(148U);
    msg.setDestination(19035U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2561398771U;

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
    msg.setTimeStamp(0.7048523006562272);
    msg.setSource(30176U);
    msg.setSourceEntity(158U);
    msg.setDestination(33899U);
    msg.setDestinationEntity(75U);
    msg.sessid = 3692567003U;

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
    msg.setTimeStamp(0.6122278743490313);
    msg.setSource(44226U);
    msg.setSourceEntity(30U);
    msg.setDestination(26372U);
    msg.setDestinationEntity(56U);
    msg.sessid = 4146171126U;

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
    msg.setTimeStamp(0.94147490820185);
    msg.setSource(41784U);
    msg.setSourceEntity(152U);
    msg.setDestination(5461U);
    msg.setDestinationEntity(242U);
    msg.sessid = 1358450250U;
    msg.status = 130U;

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
    msg.setTimeStamp(0.9724939244998244);
    msg.setSource(23350U);
    msg.setSourceEntity(219U);
    msg.setDestination(13797U);
    msg.setDestinationEntity(224U);
    msg.sessid = 1867274660U;
    msg.status = 246U;

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
    msg.setTimeStamp(0.4222027167446829);
    msg.setSource(13573U);
    msg.setSourceEntity(93U);
    msg.setDestination(46627U);
    msg.setDestinationEntity(139U);
    msg.sessid = 2303520490U;
    msg.status = 70U;

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
    msg.setTimeStamp(0.984183733206176);
    msg.setSource(30237U);
    msg.setSourceEntity(31U);
    msg.setDestination(39953U);
    msg.setDestinationEntity(49U);
    msg.name.assign("VOYBGWWTWMI");

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
    msg.setTimeStamp(0.12091858787039189);
    msg.setSource(60495U);
    msg.setSourceEntity(73U);
    msg.setDestination(62877U);
    msg.setDestinationEntity(175U);
    msg.name.assign("PFXRUKZBOBXEACXLMYYKAQFVUVLRTRZSSGFXQYJPBZGRFUXQWCXQASJYCNZHIDRTCVJEISYWPDYKSBGBLMATNNTHRVXFIGAZJFIRYEKOOUOCWDKUEUVTJB");

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
    msg.setTimeStamp(0.27019743848622635);
    msg.setSource(40419U);
    msg.setSourceEntity(199U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(251U);
    msg.name.assign("GVVQYLZTVKPTWTWDBCSRITUCXCOWRMIFTBUTAFEZUBXYGQCMCSBFNQKGOUOWGRFAGIUZAXIGKVMRP");

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
    msg.setTimeStamp(0.6128018156188785);
    msg.setSource(30488U);
    msg.setSourceEntity(66U);
    msg.setDestination(53378U);
    msg.setDestinationEntity(229U);
    msg.name.assign("AJLNQAFKWHRLAKTM");

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
    msg.setTimeStamp(0.26854150442072533);
    msg.setSource(50098U);
    msg.setSourceEntity(128U);
    msg.setDestination(31047U);
    msg.setDestinationEntity(99U);
    msg.name.assign("WNVPZSAKTHYAXDOBNZCSQFQMEREJGOHPGBRZLDBICFJURKPGBGUZKARWTLRFPGXZOMOQJIDHPREZCLHAHUQVIUFHTCUQMYMTUAXACZHTDVWKQDEDENHXXYICMFJKVRYMZPYSJDEBFGFKUYPGLIOQOSDILXNWECVVQLVYOEGXWRBDYOUKNDRNNNPJFIAWEXGKYJUVZAHVWYJTJXBWIINA");

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
    msg.setTimeStamp(0.41528891767133436);
    msg.setSource(20772U);
    msg.setSourceEntity(110U);
    msg.setDestination(16488U);
    msg.setDestinationEntity(245U);
    msg.name.assign("KXWPFQUMDRLNCFRMMASVTEIODOUJANGBIDZPYWHORQTWFVMYDQXXBXDBHWCUJTHELYLILGTEMHBUEGTOIXKWRIGYEZKQASCSUBWKXGTQVAMBNVOBNTQBGIZYEQJZAPXPGUKFAPSOPJZEVOTMKPJSIJJNDAYUVMARFEDUHKXWUMA");

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
    msg.setTimeStamp(0.9167743690524004);
    msg.setSource(46944U);
    msg.setSourceEntity(230U);
    msg.setDestination(54712U);
    msg.setDestinationEntity(94U);
    msg.type = 152U;
    msg.error.assign("OKEASOPEPNGIUDBVZGIIEOCYNMPQSATIXUZISAXVULSTMNCOETOBRZIWUHVYSHKXUPCVDNDORCJRBGQYWALTZXMBWZNJJUCZTGUBHHPPJYFIRYJRTXDLWTBUDFKZGQNDQVIXMQHFXVKLETMHBVLGUPFKEWJCDJYCSDHKBOGRSF");

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
    msg.setTimeStamp(0.23009409717724216);
    msg.setSource(20949U);
    msg.setSourceEntity(82U);
    msg.setDestination(24086U);
    msg.setDestinationEntity(247U);
    msg.type = 86U;
    msg.error.assign("RNTFRDIKHBPXICYQYRMHZLONPKWYIDVYPKVLTJTZMVCPRGADEQNMQTOSATNIKBEIBLSYAARQVJIEVXZBZDGHNXALKGNZDALGWTH");

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
    msg.setTimeStamp(0.5090432317335968);
    msg.setSource(64050U);
    msg.setSourceEntity(61U);
    msg.setDestination(144U);
    msg.setDestinationEntity(131U);
    msg.type = 159U;
    msg.error.assign("AMVKJBFREIYVWHOAXUKYAHGQPACWLBYZXUDDQVDQZBBFEUCEDJABQHILIQZBWLTIRXOCZHMFKOWCVMYHZVSGUGPDYDXMSLBHRTVSNTKXJGPOUJTIUZLZMIKLZPGMRZNAFJQCNMOPLVGXRDFSQTPVSJULOEEKZFWUURSKXXHVTPRRKAEXNNCGFAIEGTPECSGAMSUHPJPQKYBCOOIYTFWNXWJYJQD");

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
    msg.setTimeStamp(0.11070815441905013);
    msg.setSource(14169U);
    msg.setSourceEntity(87U);
    msg.setDestination(20765U);
    msg.setDestinationEntity(160U);
    msg.seq = 27206U;
    msg.sys_dst.assign("DHSKDSLKXBLQFXLINUTVCRBNOZRZOOQYHIRNGGMTZHJJREKIQZTDJLZVXQWFWAUAXNZUTSILBWOPBHVMSPFFYTLNEEGWFCWSMVIMFTGCPUAODWUOVXONRGMDBLMTKDYUKYQHXIAKNJUWPNOFBMKQZJNBFJIXEAEPDQASYCPJJXVHURYQWXPDFXLIGKQBIGTHYEYSPLBCCESUFGVERMYCTHNRWPKCOGC");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-65, 116, 31, -12, 54, 89, -46, 121, 30, 115, -116, 97, 67, -123, -59, 74, -113, -12, -68, -80, -80, 33, 15, -100, 126, -61, -8, -61, 62, 106, 53, -101, 1, 95, 37, -125, 117, -96, 7, -63, 60, -61, 1, 10, -116, -99, 6, 100, -65, -84, -68, -45, 38, -21, -113, 104, -65, -19, -111, -114, -81, -24, 12, -44, -3, 40, 35, -114, -77, 20, 68, 79, -91, -60, 49, -14, 121, -124, -109, 12, -47, -13, -32, 18, 66, 0, 43, 35, 108, 88, -64, 85, 105, -71, -90, -113, -62, -92, 7, 102, -17, -4, -128, 15, -58, 112, -71, -28, -61, 110, -120, 18, -4, 59, -81, 2, 10, -69, -104, -66, -2, -68, -40, -50, 48, -125, -31, 1, 93, 5, 96, -60, -67, -24, -67, -87, 27, -37, -38, -32, 46, 49, -37, -63, -21, -35, 124, 79, -62, -18, -71, -47, -12, -85};
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
    msg.setTimeStamp(0.6172094192019499);
    msg.setSource(12826U);
    msg.setSourceEntity(72U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(92U);
    msg.seq = 15486U;
    msg.sys_dst.assign("AZEYOFNLAEIVPSZCTKHHJPSIFOMKXQMTNQWYGCKDZLTMLANTRRVDWRVBOMHWHEALLCE");
    msg.flags = 222U;
    const char tmp_msg_0[] = {-52, -111, 66, -66, 89, 59, -10, -84, -119, -51, -84, -83, -126, 57, 94, 49, -52, 85, -97, 120, 123, 36, 40, -109, 44, -124, 36, 73, 109, 85, 85, 49, 41, 105, -80, 22, -56, -78, -97, 93, 107, 123, 116, 38, 11, -80, -111, 68, -117, -37, -49, 80, 25, -104, 18, 122, -93, 35, -51, 23, -95, -28, -97, -99, -103, -116, 109, 47, 61, 41, -55, -32, 69, 42, -38, 33, -28, 76, -30, 37, 85, -27, -116, -34, -87, 4, 105, -34, -26, -26, -61, 73, -68, 106, -115, -68, 117, 72, 58, -127, -18, 57, -73, -17, 25, -60, -54, -95, 3, 113, -8, 10, -36, -103, -49, 55, -55, 62, 106, -75, 8, -77, 66, -9, -5, 117, -114, 88, 121, -8, -69, -4, -21, -79, -97, -126, -25, 29, -101, -2, 91, -23, 91, 67, -70, 4, 73, -87, 125, 125, 37, -17, -91, 113, 119, -25, -19, -98, 67, -66, -107, -56, 31, 79, -50, -67, 105, -127, -17, 77, 33, 30, 4, -8, -3, -35, 51, -56, -49, -58, 65, 100, -51, -13, 98, -23, 84, 59, 77, 31, -7, -46, 121, 96, 4, 31, 125, 117, -25, -74, 78, 77, 50};
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
    msg.setTimeStamp(0.02632763859775622);
    msg.setSource(43558U);
    msg.setSourceEntity(29U);
    msg.setDestination(8385U);
    msg.setDestinationEntity(161U);
    msg.seq = 53641U;
    msg.sys_dst.assign("LNUKTUFNEESKDAACJINYKSUXKPWMOGPZLXXJTOYEHQBQGQWMBSWMSXLTACVEPRJWFVSGAZETGRIWMVYMGPRXDILPVHZQDRQHNFORCWFQHBRTHJDQWEUVNZQBXFYXXGHZKJMIZFMIGXOSADRDKZLPACLEDOHLQUYDVVVZXVEJMBUIEOYSMTOSPIUWWUTF");
    msg.flags = 87U;
    const char tmp_msg_0[] = {3, -91, 111, 41, 125, -92, -22, 117, 110, 112, -98, -89, 126, 41, 38, -53, 60, 74, -78, 102, 121, 110, -68, 38, -19, -31, -73, 70, -8, -2, 125, -127, -24, -101, -73, -66, -109, -32, 110, -65, 80, 27, -8, -112, -2, -106, 73, 119, 78, 32, 115, 7, 15, -107, 100, 120, -2, 16, -8, 68, -13, -117, 83, 46, 86, -52, -111, -22, -81, -14, 13, -68, -93, -15, 22, -101, -51, -76, -42, -41, -53, -37, 5, 27, -48, -77, 26, -39, -41, 110, -78, 93, 95, 31, -51, 36, 105, 99, -53, 3, 80, 31, 2, 60, -89, -61, 111, 62, 26, 119, -105, 13, -109, 78, 104, 55, 52, 57, -52, -2, 73, -41, -93, 95, 36, -69, -2, -67, 77, 111, -43, 74, 81, 56, 100, -45, 78, -57, 89, 38, 117, -94, -91, 2, 96, -67, -43, 98, 113, 40, -85, 51, 86, -9, 41, 109, 47, 109, -126, 34, -97, -27, 93, -98, -113, -81, -76, 6, -46, -17, 40, -47, -88, -5, -15, -103, -5, 96, 25, -1, 82, -61, 20, -12, 23, 84, 96, -114, -104, 30, 8, -127, 16, 122, 105, -6, -93, -75, -14, -6, 68, -98, -52, 19, -2, 48, 67, -40, -13, -118, -46, 92, -100, 114, 70, -84, 112, 110, -16, 99, 58, -111, -127, -84, -109, 31, -92, 126, 40, -59, 98, 28, -49, -12, 33, 82, 0, 100, -47, -84, -85, 5, -12, -15, -98, -3, 74, 111, 50};
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
    msg.setTimeStamp(0.49294723105257154);
    msg.setSource(62021U);
    msg.setSourceEntity(121U);
    msg.setDestination(47698U);
    msg.setDestinationEntity(161U);
    msg.sys_src.assign("YFGPLCITJSUKCZKJAJKUA");
    msg.sys_dst.assign("JERXNOVRVQQGWQWMGCJWBZLDXFQBBNJ");
    msg.flags = 24U;
    const char tmp_msg_0[] = {-102, -74, -21, 85, -38, -25, 41, -8, -65, -29, 54, 82, 47, -88, 15, 105, 81, 114, -107, -42, 21, -113, -88, -42, -21, -55, 112, 16, 104, 57, 10, -13, -45, -120, 5, -9, -28, 15, 12, -19, 53, 15, -55, -41, 4, -87, -85, -123, -128, -20, 98, 97, -35, 7, 6, -27, -128, 108, 46, 97, 114, -121, 1, -27, -39, -99, 70, 16, -106, -30, 52, -17, -86, -17, -28, 96, -12, -31, -26, -38, -46, -25, -100, 1, -41, -10, 39, 32, -124, -110, -120, -104, -36, 92, -36, 17, -68, 120, -74, -83, -57, -60, -101, -26, 22, 83, 62, -58, -94, -43, -67, -110, -16, -36, -52, 26, 60, 119, -71, 71, -35, 75, 119, -16, -88, -9, 78, 62, 126, 117, 125, 16, 111, -65, 49, 18, 103, 106, -40, -20, 115, 9, -86, -46, 72, 74, 46, 99, -108, -123, -19, 123, 32, -17, 118, 100, -70, 7};
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
    msg.setTimeStamp(0.4832392582861039);
    msg.setSource(18477U);
    msg.setSourceEntity(97U);
    msg.setDestination(29168U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("OWGWPXJYLTSSWOLRQKOGDNVDUKWKJGZGWCRKITAERZJVJUVPWQCGTFHARAHZIMJJRDEYFICLNBKPXJTUBDBSBUFTLKRZBYCCMKQKEYZSVFYNMMHRUETTTQEJVAIUJIZFDTHJMNSRIARASOFCPQAXYMSVTPMQCLEOLILOGBPNRKBYHHXVBOAHYWSPIFCGUANWIQNNQYWQSZCQIXPMGNWLBLODFDOVZFEXXVZFMXYXCXVEHZUUD");
    msg.sys_dst.assign("JGPVDXVEHNDUYDCSRISRVYXXESPLYSMSUEUGGPCXCWGGRGAVMIFJEAGMLLMYDHWDNRZAPNCFROPCQHHJWUBCGYDAYVHKTJWAWMUCNPKTYZMNBWOLTFKZZTWVSSDXQOR");
    msg.flags = 113U;
    const char tmp_msg_0[] = {95, 79, -104, -2, -75, -84, 75, -67, -115, 68, -116, -115, -120, -107, 23, -109, -65, -90, 1, 39, 48, -94, 8, 76, -64, 85, -91, -79, -35, 103, -30, -39, -29, 27, 57, 54, 119, -77, 67, 18, 9, 30, -27, 47, 27, -28, 57, -125, 30, -1, -103, 58, -110, -5, 126, -84, -42, 33, -39, -96, -93, 110, 111, 101, 23, 104, 91, -47, -51, 6, -96, 13, -51, -76, 72, 26, 100, 4, -116, 120, 104, -42, -71, -64, -108, -56, -51, 124, 123, -35, -43, -17, -79, -92, -70, -75, -84, 61, 108, -32, -58, -92, 26, -9, 116, 48, 75, -122, -7, -71, -111, -35, 35, -40, 61, -65, 12, -23, 32, -95, -68, -97, -107, -58, -128, -114, -57, 2, -128, 77, 81, -45, 59, 97, -62, 124, 17, 109, 38, 112, -103, 116, 93, 113, 93, -30, 88, 80, -78, 89, 92, 77, -115, 109, 91, -85, 122, 20, 26, 74, -52, -33, 30, 106, -85, 95, -105, 108, -73, -4, -127, 10, -47, -86, -16, 68, 121, -75, 82, 47, -15, -42, 126, -5, 40, 4, -89, 94, 122, -68, -24, 16, -103, 16, -1, -59, 89, 38, 75, -68, 11, 81, 121, 93, -33, -66, -121, 74, 11, -6, 21, 6, 101, -39, 80, 66, -8, -55, 21, -41, 63, -29, 82, 22, -56, 89, 120, -32, 79, 37, -119, -68, -126, 3, 86, 7, -67, 92, 72, -30};
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
    msg.setTimeStamp(0.15729457500133937);
    msg.setSource(11656U);
    msg.setSourceEntity(171U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(157U);
    msg.sys_src.assign("GQBOHBTKWYEYZJVFKPUFOQXDWMJLSMGWLNTKDULZRXLCNKZBMPXQVEMMZREKVKFUDILXAXFIUWJSIPSECGYVAGPYZEFTRNDBBGEFWRCNCZAWYLJJCZHIJDHNAMQSWSVDAGDPYHSURZIGLXPWQJLONOHAGVDVUNTYJHXTLKBFWSMDRBHIECNQPMQOQIGTOTPOQUQPFTDLF");
    msg.sys_dst.assign("CTLKFJJIGOLXEPDNYEFHJVABIWIWEDYWXNOAOZNOXMSYWGTVGEQYNKXCYPOIICMXUBLEEDHIIPKBPQFLGTSEDCICFUGRSRMMTPAKROLHDBQDOQJBVRRYSTNNPSTVABSGSLZEXPRXJRXTEKTOZVWHICMBOKUPVZNTMFGXAYVLDSNKCZJUUQAQRDJBDIJHMFLRADV");
    msg.flags = 108U;
    const char tmp_msg_0[] = {37, -73, -73, 106, 118, 17, 104, -112, -42, 29, -65, 50, -15, -22, -95, 8, -5, -109, -65, -126, -80, -112, -50, -43, 51, 121, -81, -106, 20, 50, -77, 117, 18, -14, -99, -52, -4, 78, 56, -33, -22, -84, -61, -69, 43, 71, -5, -116, -49, 31, -20, -50, 19, 66, -108, -54, 75, 26, 85, 108, 124, 109, 38, -63, -25, -109, 46, 53, -91, -98, 105, -104, 86, -24, 41, -76, 102, 116, -19, 95, -54, -9, 78, -65, 121, -46, 52, -56, 5, 14, -31, -9, 119, 75, -17, -52, 87, -107, -10, 30, -90, 102, -79, -79, 7, -103, 51, 113, 91, -40, 86, 12, 89, -73, 65, -111, 126, -127, 76, -74, -59, 124, -34, -125, -107, 47, 24, 92, -95, 31, -5, 73, 90, -5, -2, 2, -28, -86, -10, 75, -48, -35, 23, 119, 22, 124, 63, 6, -49, 12, 27, -91, 65, 93, -81, -32, -46, 36, 38, -121, -73, 106};
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
    msg.setTimeStamp(0.07098378873436717);
    msg.setSource(47287U);
    msg.setSourceEntity(145U);
    msg.setDestination(62475U);
    msg.setDestinationEntity(177U);
    msg.seq = 60780U;
    msg.value = 250U;
    msg.error.assign("JMGCQRCAAUUMPTTPOJXDOVQJPKRDOHMYVNXYUSDFXRZLAFSGETGXGLGTCHNTMYZRXOYASKEEFGZDMYPPIOYVVMQBBVWNELRBMIUNGJWMFTEDIPFIXRVAZYCRQDOUAZWHTXCHYZEBNWPKUKTJJETVLOGHWHXUUNOBDWSJRASBLZSIIENQFMWSCHDENGYQWUDSKSIIUCQVHPQYQPCNLHELNLFKIZBLZDABKWOAFSRMAKBJKOZXKRIFJCLVXJ");

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
    msg.setTimeStamp(0.23050931712127953);
    msg.setSource(20112U);
    msg.setSourceEntity(129U);
    msg.setDestination(46510U);
    msg.setDestinationEntity(24U);
    msg.seq = 5113U;
    msg.value = 118U;
    msg.error.assign("CIIEUNNHNYRZWXJWPQRDT");

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
    msg.setTimeStamp(0.5085559692084365);
    msg.setSource(1928U);
    msg.setSourceEntity(59U);
    msg.setDestination(9916U);
    msg.setDestinationEntity(97U);
    msg.seq = 17307U;
    msg.value = 146U;
    msg.error.assign("CAYMLRHFVEOFGCFONWLEIQUNWLWQGGJQXMATIPJNOROAIWGJMIYTGEXYREFXKNNXIYVKGMPWUQISDNVXPZCKBHPWJEXLWVQSRPASMTZYIZRBDITBIAXCVXYZDSMPHNFEKPDDLFUKDRZCZSEKDKUMLTJAQKGNSZRFHXZOCBBFLWPBYE");

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
    msg.setTimeStamp(0.8479292047984832);
    msg.setSource(29883U);
    msg.setSourceEntity(245U);
    msg.setDestination(51029U);
    msg.setDestinationEntity(62U);
    msg.seq = 32641U;
    msg.sys.assign("MURPEPKXSICTBIMFMRKUQOIJ");
    msg.value = 0.46476486881866497;

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
    msg.setTimeStamp(0.13587650185357447);
    msg.setSource(40117U);
    msg.setSourceEntity(107U);
    msg.setDestination(30684U);
    msg.setDestinationEntity(16U);
    msg.seq = 28393U;
    msg.sys.assign("IAZYVQDCESETRIKIBXFTXKCGMCAMUNDWFKUQINDURCPOSCMJLWKBCOAZRGKYSVKXNTQULSZFGQPVBRXEBSNQPFHHFUHDXWOTJRNROMFQACUCJJCWQILYDB");
    msg.value = 0.012465207204975348;

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
    msg.setTimeStamp(0.890940589227009);
    msg.setSource(54446U);
    msg.setSourceEntity(145U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(170U);
    msg.seq = 29925U;
    msg.sys.assign("CEMOPCDSWVJYOZXGYZLHMAUUCOTGIZLBGGZLXPWJEFFNFMWWBHHJXXJNCPVTMDUEQGJUUAPDKFUONCGKILKAQDTVBIBXOEESGQQZXKETGNFTVHXZIALIAADPSHCCNBTMJCCJSQWLXRWVRKXKLVF");
    msg.value = 0.0254970322640512;

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
    msg.setTimeStamp(0.3047251203143996);
    msg.setSource(61009U);
    msg.setSourceEntity(52U);
    msg.setDestination(33599U);
    msg.setDestinationEntity(168U);
    msg.seq = 55456U;
    msg.sys_dst.assign("QTLKEBAYYRYNDDIVUBREMBKDWHUMJFSETIRZLAYISWBMNXGKTUWADOENUTHOHKKSNRJIWFSERTKXXCSQEZEPEVERQGLWGKGQBVGFPGQRGPSCUQIINWBOFLRSWTCSCZDJNXCZFYFQVMVYDHGYASSWFBGPQVHZXPNEUJLVZPQFQDVTUTLPNIMDCXXLIPHTAVMDAWWJKJDHUUKJZZMXOVAOYNLOZOHAOJZYOYBBAFCPRIHFMGOMHXJXRLCKBJ");
    msg.timeout = 0.01952531522951284;

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
    msg.setTimeStamp(0.13380009936967718);
    msg.setSource(48671U);
    msg.setSourceEntity(251U);
    msg.setDestination(61918U);
    msg.setDestinationEntity(18U);
    msg.seq = 26417U;
    msg.sys_dst.assign("VXQZLKCEUWXXMFONCLEKQEZTLOZTACBZARTDSNKAMWVCIDYBXYLSLWBCRFCNPDXHJYYHQUOIKXXYAWKJESFSGHVABPIFSPMZHUFQAWETVOSJKAVJLYDNJJSKDDZLTMUPPBLRROWPEIPXYMHZJGDOQUHHYGCINRAAIMHJFTEZKFUGJTFVOVETQZUWGJRBZSISGBBUCGUQQNHMGMWGQOPQFE");
    msg.timeout = 0.8857555553621512;

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
    msg.setTimeStamp(0.6100495046731631);
    msg.setSource(24779U);
    msg.setSourceEntity(147U);
    msg.setDestination(45363U);
    msg.setDestinationEntity(225U);
    msg.seq = 38737U;
    msg.sys_dst.assign("CHKBMYXLBYSCGZSWALYWTPRSHZQQMXLGTVGPVZJQMETCFTJB");
    msg.timeout = 0.32483714998174607;

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
    msg.setTimeStamp(0.13524920123542927);
    msg.setSource(40382U);
    msg.setSourceEntity(130U);
    msg.setDestination(59188U);
    msg.setDestinationEntity(234U);
    msg.action = 220U;
    msg.longain = 0.12264265762769899;
    msg.latgain = 0.45898362043008156;
    msg.bondthick = 891171100U;
    msg.leadgain = 0.3085272607553511;
    msg.deconflgain = 0.35207486227239704;

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
    msg.setTimeStamp(0.21328006618747586);
    msg.setSource(28628U);
    msg.setSourceEntity(18U);
    msg.setDestination(32393U);
    msg.setDestinationEntity(253U);
    msg.action = 187U;
    msg.longain = 0.3060516389156227;
    msg.latgain = 0.6684018702287647;
    msg.bondthick = 3549167315U;
    msg.leadgain = 0.5697362556459857;
    msg.deconflgain = 0.5382978721867033;

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
    msg.setTimeStamp(0.6990447616179436);
    msg.setSource(24261U);
    msg.setSourceEntity(199U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(177U);
    msg.action = 129U;
    msg.longain = 0.8927300356376803;
    msg.latgain = 0.3451744887622118;
    msg.bondthick = 518612725U;
    msg.leadgain = 0.32442364214610275;
    msg.deconflgain = 0.4252753385808865;

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
    msg.setTimeStamp(0.9267691327495718);
    msg.setSource(50542U);
    msg.setSourceEntity(93U);
    msg.setDestination(34275U);
    msg.setDestinationEntity(121U);
    msg.err_mean = 0.5863559179623508;
    msg.dist_min_abs = 0.9161618428361028;
    msg.dist_min_mean = 0.05971272971739294;

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
    msg.setTimeStamp(0.3748903006709243);
    msg.setSource(15250U);
    msg.setSourceEntity(190U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(164U);
    msg.err_mean = 0.3822687957217158;
    msg.dist_min_abs = 0.12124582353141944;
    msg.dist_min_mean = 0.6782021353630765;

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
    msg.setTimeStamp(0.5172151329722267);
    msg.setSource(63093U);
    msg.setSourceEntity(206U);
    msg.setDestination(50086U);
    msg.setDestinationEntity(166U);
    msg.err_mean = 0.32175939121615105;
    msg.dist_min_abs = 0.23291780061603917;
    msg.dist_min_mean = 0.1882171606626566;

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
    msg.setTimeStamp(0.7053570709673914);
    msg.setSource(27000U);
    msg.setSourceEntity(138U);
    msg.setDestination(1766U);
    msg.setDestinationEntity(177U);
    msg.action = 174U;
    msg.lon_gain = 0.38488958670537554;
    msg.lat_gain = 0.8306106446092419;
    msg.bond_thick = 0.9306966372822438;
    msg.lead_gain = 0.7321328792893863;
    msg.deconfl_gain = 0.9503450921403884;
    msg.accel_switch_gain = 0.9755980102828355;
    msg.safe_dist = 0.4623224231232458;
    msg.deconflict_offset = 0.39185401609778914;
    msg.accel_safe_margin = 0.813473772474576;
    msg.accel_lim_x = 0.9118151002491038;

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
    msg.setTimeStamp(0.7074962837509008);
    msg.setSource(54131U);
    msg.setSourceEntity(135U);
    msg.setDestination(30845U);
    msg.setDestinationEntity(213U);
    msg.action = 160U;
    msg.lon_gain = 0.9021412066232144;
    msg.lat_gain = 0.87555295036479;
    msg.bond_thick = 0.9907560023431022;
    msg.lead_gain = 0.6164696863255144;
    msg.deconfl_gain = 0.37752711172574815;
    msg.accel_switch_gain = 0.019497919235737293;
    msg.safe_dist = 0.7923941025055331;
    msg.deconflict_offset = 0.5043623322568727;
    msg.accel_safe_margin = 0.21947166026654774;
    msg.accel_lim_x = 0.6971534258167238;

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
    msg.setTimeStamp(0.4315624640592657);
    msg.setSource(29461U);
    msg.setSourceEntity(231U);
    msg.setDestination(11790U);
    msg.setDestinationEntity(108U);
    msg.action = 56U;
    msg.lon_gain = 0.15310711335851412;
    msg.lat_gain = 0.6567699924226857;
    msg.bond_thick = 0.34203917851298093;
    msg.lead_gain = 0.33219652554583656;
    msg.deconfl_gain = 0.27031495976944575;
    msg.accel_switch_gain = 0.5221441164057151;
    msg.safe_dist = 0.9175929521462627;
    msg.deconflict_offset = 0.8065782134132824;
    msg.accel_safe_margin = 0.5689038806577458;
    msg.accel_lim_x = 0.21740864224635248;

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
    msg.setTimeStamp(0.34928933037608234);
    msg.setSource(42316U);
    msg.setSourceEntity(82U);
    msg.setDestination(21007U);
    msg.setDestinationEntity(219U);
    msg.type = 18U;
    msg.op = 170U;
    msg.err_mean = 0.6659710015503214;
    msg.dist_min_abs = 0.12399902740179536;
    msg.dist_min_mean = 0.4646640273040564;
    msg.roll_rate_mean = 0.642755854239514;
    msg.time = 0.3310141170538734;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.9248182929732923;
    tmp_msg_0.lat_gain = 0.5216015147479026;
    tmp_msg_0.bond_thick = 0.23603352531519417;
    tmp_msg_0.lead_gain = 0.5292032568410547;
    tmp_msg_0.deconfl_gain = 0.7785551484847699;
    tmp_msg_0.accel_switch_gain = 0.15868189941410737;
    tmp_msg_0.safe_dist = 0.5298430056367702;
    tmp_msg_0.deconflict_offset = 0.6223449939040785;
    tmp_msg_0.accel_safe_margin = 0.9782292592701076;
    tmp_msg_0.accel_lim_x = 0.5612693357904772;
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
    msg.setTimeStamp(0.14419905631304852);
    msg.setSource(34891U);
    msg.setSourceEntity(40U);
    msg.setDestination(52079U);
    msg.setDestinationEntity(147U);
    msg.type = 215U;
    msg.op = 153U;
    msg.err_mean = 0.3405100895591785;
    msg.dist_min_abs = 0.9300260722469627;
    msg.dist_min_mean = 0.4124516802988878;
    msg.roll_rate_mean = 0.16814280479891508;
    msg.time = 0.027143819162783966;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 157U;
    tmp_msg_0.lon_gain = 0.8457249200301875;
    tmp_msg_0.lat_gain = 0.10461928691371858;
    tmp_msg_0.bond_thick = 0.6691338619738896;
    tmp_msg_0.lead_gain = 0.7412986162191029;
    tmp_msg_0.deconfl_gain = 0.4588284813325243;
    tmp_msg_0.accel_switch_gain = 0.09725582826586088;
    tmp_msg_0.safe_dist = 0.9709107127593024;
    tmp_msg_0.deconflict_offset = 0.28619361432785306;
    tmp_msg_0.accel_safe_margin = 0.2135089529884503;
    tmp_msg_0.accel_lim_x = 0.9414222451404466;
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
    msg.setTimeStamp(0.5779824747364176);
    msg.setSource(48065U);
    msg.setSourceEntity(110U);
    msg.setDestination(58726U);
    msg.setDestinationEntity(62U);
    msg.type = 20U;
    msg.op = 226U;
    msg.err_mean = 0.940400533788471;
    msg.dist_min_abs = 0.2916952822041995;
    msg.dist_min_mean = 0.05442468407204959;
    msg.roll_rate_mean = 0.8231988800585123;
    msg.time = 0.08538806104641972;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 61U;
    tmp_msg_0.lon_gain = 0.5932566837114192;
    tmp_msg_0.lat_gain = 0.29464679692624596;
    tmp_msg_0.bond_thick = 0.943256327205812;
    tmp_msg_0.lead_gain = 0.3983133409064096;
    tmp_msg_0.deconfl_gain = 0.9550891915586467;
    tmp_msg_0.accel_switch_gain = 0.959440144339123;
    tmp_msg_0.safe_dist = 0.31868223415719843;
    tmp_msg_0.deconflict_offset = 0.003473227797655354;
    tmp_msg_0.accel_safe_margin = 0.40347950392479504;
    tmp_msg_0.accel_lim_x = 0.2740390625887643;
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
    msg.setTimeStamp(0.988726330863576);
    msg.setSource(56791U);
    msg.setSourceEntity(207U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.31652203126370293;
    msg.lon = 0.07792667025607525;
    msg.eta = 1980996759U;
    msg.duration = 26495U;

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
    msg.setTimeStamp(0.16337814265350437);
    msg.setSource(23800U);
    msg.setSourceEntity(31U);
    msg.setDestination(48423U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.5011715402032657;
    msg.lon = 0.7188825691589389;
    msg.eta = 3619395725U;
    msg.duration = 62149U;

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
    msg.setTimeStamp(0.1990235995482783);
    msg.setSource(26767U);
    msg.setSourceEntity(253U);
    msg.setDestination(43065U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.025508849910532816;
    msg.lon = 0.05160423449362761;
    msg.eta = 2025975202U;
    msg.duration = 32447U;

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
    msg.setTimeStamp(0.3561831396704691);
    msg.setSource(19865U);
    msg.setSourceEntity(26U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(30U);
    msg.plan_id = 45010U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.06841120160732472;
    tmp_msg_0.lon = 0.7150270867466115;
    tmp_msg_0.eta = 364256019U;
    tmp_msg_0.duration = 62088U;
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
    msg.setTimeStamp(0.08838323884967103);
    msg.setSource(6336U);
    msg.setSourceEntity(165U);
    msg.setDestination(35711U);
    msg.setDestinationEntity(218U);
    msg.plan_id = 1104U;

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
    msg.setTimeStamp(0.12776064207272797);
    msg.setSource(17467U);
    msg.setSourceEntity(28U);
    msg.setDestination(54728U);
    msg.setDestinationEntity(38U);
    msg.plan_id = 43326U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.08201840391978543;
    tmp_msg_0.lon = 0.38099332541938935;
    tmp_msg_0.eta = 3027794961U;
    tmp_msg_0.duration = 52784U;
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
    msg.setTimeStamp(0.477657779207706);
    msg.setSource(49280U);
    msg.setSourceEntity(186U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(183U);
    msg.type = 125U;
    msg.command = 65U;
    msg.settings.assign("HLCXQTRMKSOTMVHIORYUAENSQTTHICCXOMNRJLBOZBBGVMODYFIPWJZSEXURMPQAYLSULBZOZDSIJMTZLNXNCUMYWBWOVXUAXYLQHMD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53903U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6323897049827925;
    tmp_tmp_msg_0_0.lon = 0.013896233083004805;
    tmp_tmp_msg_0_0.eta = 204428311U;
    tmp_tmp_msg_0_0.duration = 23211U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("THVNJNHPOCECBXXSXDFOZUWSYKKYBIGXANTYOKULHYQWSFQPWCHQNZMREXOBCGBISEPJOGZKFXLPDJFAEOMZZMIEVDAKAUEEDZBNKYWBJHWDAMLUQIQPRJNUQTMDIWTHTTLUEKVZCXBNLHAJUYTTHOBHFRMAGVERTMPDDRCLFFONKPSWF");

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
    msg.setTimeStamp(0.34216191396994045);
    msg.setSource(52389U);
    msg.setSourceEntity(122U);
    msg.setDestination(10559U);
    msg.setDestinationEntity(105U);
    msg.type = 245U;
    msg.command = 252U;
    msg.settings.assign("AWSMBEYOCWTZCMUGJWERIOHINJRTPWSUXUWDUDCINGTQARHWGOBK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1241U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GKPLITRTVQKHDBTFJDHPMNHEYTRJCZVFPDOUXKKZNHYEMEYZGCDWLGEGSEHA");

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
    msg.setTimeStamp(0.10989178302808522);
    msg.setSource(6297U);
    msg.setSourceEntity(203U);
    msg.setDestination(9144U);
    msg.setDestinationEntity(11U);
    msg.type = 114U;
    msg.command = 172U;
    msg.settings.assign("MJFWFZIZRXCZTUGFZQEQJFTSRJYALTFLLMOOVDHRILDAZCCSRGIOKYVEGGLHTKNXOUBEAXWFWKKUOXLYT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5847U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NCQPFWFERVWTAYDOPURGSPHZLWFLXINVKVPBACEIDGAUTTMZCBEPRGOZMLVTSNDNMSJEXXVTASOMQNMZFYDHIEKORBOMIOCJJDOYWLWKDHYJUZZHSJVIAUBLXBQVTPZVPRICBEIAXDFSTAQCHWZWTMOAQNKRQXEOKHCVHUQMIJTNQINFRC");

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
    msg.setTimeStamp(0.3962866664803465);
    msg.setSource(61520U);
    msg.setSourceEntity(168U);
    msg.setDestination(40318U);
    msg.setDestinationEntity(176U);
    msg.state = 98U;
    msg.plan_id = 3719U;
    msg.wpt_id = 107U;
    msg.settings_chk = 40309U;

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
    msg.setTimeStamp(0.07743033517345743);
    msg.setSource(18670U);
    msg.setSourceEntity(145U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(172U);
    msg.state = 145U;
    msg.plan_id = 6682U;
    msg.wpt_id = 148U;
    msg.settings_chk = 17954U;

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
    msg.setTimeStamp(0.7709246447020038);
    msg.setSource(19186U);
    msg.setSourceEntity(182U);
    msg.setDestination(3854U);
    msg.setDestinationEntity(206U);
    msg.state = 115U;
    msg.plan_id = 20633U;
    msg.wpt_id = 250U;
    msg.settings_chk = 51382U;

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
    msg.setTimeStamp(0.2829123103568153);
    msg.setSource(42197U);
    msg.setSourceEntity(125U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(160U);
    msg.uid = 250U;
    msg.frag_number = 40U;
    msg.num_frags = 83U;
    const char tmp_msg_0[] = {14, -74, -111, -106, 14, -80, 88, -32, -101, -102, 54, 101, -55, 19, 42, 41, -87, 111, 34, -98};
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
    msg.setTimeStamp(0.0809420876778707);
    msg.setSource(10436U);
    msg.setSourceEntity(98U);
    msg.setDestination(34405U);
    msg.setDestinationEntity(209U);
    msg.uid = 162U;
    msg.frag_number = 61U;
    msg.num_frags = 210U;
    const char tmp_msg_0[] = {-11, 120, 77, 68, 84, 75, 8, -44, -117, 8, -67, 23, 18, 120, -56, -108, -11, -56, -94, -68, -74, 37, -13, 72, 10, 32, -42, -59, -77, 13, -2, 112, -104, 70, 120, -52, 19, 49, 59, -112, 32, 29, 40, -96, -69, -95, -8, 50, -89, 109, -11, -27, 83, -103, 25, 118, -114, 66, -97, -29, 43, 71, -90, -101, -116, -61, -110, 43, 119, -47, 26, 107, -88, 32, 74, -113, -79, 81, 55, 112, 61, 79, 74, 66, -37, -89, -118, -107, 118, -41, -83, -103, -86, 125, -10, -72, 22, -53, -108, -103, 104, 0, -126, -128, -70, 93, 67, -45, -122, -47, -86, -55, -22, -123, 82, -128, -16, -53, -83, 77, 33, 4, 102, 34, -120, -68, 57, -17, -68, 0, 104, -93, 10, 123, 77, 11, 52, -31, -50, -15, 40, 105, -94, -87, 62, 25, 66, -40, 96, 18, 18, -57, -106, 42, 30, 107, -36, 48, -128, -58, 65, -99, -102, -113, -122, 48, -92, -32, -88, 20};
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
    msg.setTimeStamp(0.6380847389250163);
    msg.setSource(32132U);
    msg.setSourceEntity(186U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(57U);
    msg.uid = 119U;
    msg.frag_number = 90U;
    msg.num_frags = 66U;
    const char tmp_msg_0[] = {-35, -126, 7, -61, 112, -14, -125, 28, 110, -74, -48, -25, -58, 72, -99, 50, 105, 29, 82, 8, -64, -16, -42, 122, -73, -17, 30, -106, 36, 107, 52, 25, 11, -91, 56, -119, -22, -72, 126, 19, 104, 70, 55, 97, 6, 13, -36, 0, 123, 117, 12, -3, 43, 40, 98, 108, 30, 98, 23, 50, -9, -116, -78, -89, -110, 87, -74, -122, -34, -105, 14, -83, 77, 93, -41, -56, -90, -108, 8, 43, -73, -9, -16, -95, -96, 39, 3, 64, -90, 11, -82, 91, 123, 69, 53, 40, -4, 33, -40, -101, -117};
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
    msg.setTimeStamp(0.12232631657718307);
    msg.setSource(42107U);
    msg.setSourceEntity(186U);
    msg.setDestination(63942U);
    msg.setDestinationEntity(172U);
    msg.content_type.assign("DBYEJWADSPVNXPPUBKIORIWYOEVTYGTADNESLJVLMOCMOLLAXQKDWPEQFJXWBPXFQIMFHHOFNH");
    const char tmp_msg_0[] = {-16, -18, 15, -43, -26, 74, -58, 96, 65, -42, 50, 42, 24, 83, 77, 119, -45, 101, -117, -122, 18, -115, -117, 89, -17, -60, -14, 4, -44, 41, -109, 70, 19, -106, 102, 12, 107, -37, -47, 36, -79, -125, 42, -7, -125, -66, 52, 106, -51, 123, -49, 113, 109, -45, 33, 37, -69, 65, -51, 70, -84, 87, 23, -42, -74, 72, 53, -42, 2, -111, 106, -105, 96, -4, -100, 87, 107, -79, 98, -111, -115, 21, 39, 48, 2, 25, 43, 50, -8, 70, 29, 103, 39, -112, 52, -76, -58, 66, 104, -110, 98, 10, 19, 74, 47, 68, -4, -88, 110, 115, 59, -7, -6, -37, 30, -122, 9, -74, -26, 45, 59, -81, -93, -85, 40, -33};
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
    msg.setTimeStamp(0.03201227219621894);
    msg.setSource(45906U);
    msg.setSourceEntity(52U);
    msg.setDestination(31700U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("XKYNCGBHMPZTEPQPRDFTSZKGUNIVCJMEOHP");
    const char tmp_msg_0[] = {-52, -127, 111, -89, 103, -54, -55, -23, 56, -84, 6, -107, 6, -9, 60, 72, 82, -29, 106, 70, 51, -42, 85, 102, -110, -59, -43, 59, 21, -104, -92, -42, 35, 104, 124, -86, 102, 74, 100, 123, 104, -26};
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
    msg.setTimeStamp(0.5882762364797393);
    msg.setSource(17078U);
    msg.setSourceEntity(116U);
    msg.setDestination(59753U);
    msg.setDestinationEntity(203U);
    msg.content_type.assign("UOPDZDXKYIWYSQPSGSFGZQAAHVUZKEZFBOWLVFQHYOHUUMFOPPQRGHZMJQGQYMABTZJWSEJUVINKLVDRTL");
    const char tmp_msg_0[] = {-111, 72, -38, -99, -123, -100, -21, -4, -89, 35, 13, -15, 68, -80, 63, 27, -50, 2, 55, -56, -30, 88, -65, 24, -73, 33, 26, 98, 26, -117, -114, -127, -51, -10, -128, 108, 48, 1, 28, -107, -124, 48, -2, 85, -64, -33, 85, -76, 67, 15, 69, -105, 79, 42, -75, 104, -127, 78, 88, -10, -38, -95, 96, 83, -32, -95, -30, -66, -62, 106, 14, 11, -103, -103, -76, 93, 37, -92, -106, -32, -7, 33, -17, -7, -77, 23, -57, 60, -74, 41, 124, -42, -90, -10, 82, 18, 121, 35, 20, -2, -85, 116, 72, -4, -79, 116, 18, 70, -106, -94, 75, 34, 31, -26, -25, 20, 88, 31, 117, -92, -88, -50, -102, -121, 30, 65, 122, -120, 2, -83, -63, -7, -21, -23, 72, -123, 125, -45, 53, 1, 11, -49, -82, -66, -74, -104, -18, 24, -35, -20, -80, 70, -16, -110, -76, 13};
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
    msg.setTimeStamp(0.7154006746969098);
    msg.setSource(50960U);
    msg.setSourceEntity(179U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.1322393198402445);
    msg.setSource(59924U);
    msg.setSourceEntity(102U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.6743500855790666);
    msg.setSource(38036U);
    msg.setSourceEntity(71U);
    msg.setDestination(52730U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.6762424154818572);
    msg.setSource(49902U);
    msg.setSourceEntity(117U);
    msg.setDestination(55146U);
    msg.setDestinationEntity(239U);
    msg.target = 38975U;
    msg.bearing = 0.3825575560612484;
    msg.elevation = 0.4463235918497459;

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
    msg.setTimeStamp(0.10526351257386701);
    msg.setSource(61917U);
    msg.setSourceEntity(21U);
    msg.setDestination(23320U);
    msg.setDestinationEntity(140U);
    msg.target = 23885U;
    msg.bearing = 0.3216138191522151;
    msg.elevation = 0.19043383499783417;

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
    msg.setTimeStamp(0.7261624735535906);
    msg.setSource(62382U);
    msg.setSourceEntity(222U);
    msg.setDestination(58990U);
    msg.setDestinationEntity(185U);
    msg.target = 58494U;
    msg.bearing = 0.22274529312705915;
    msg.elevation = 0.3734609109958035;

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
    msg.setTimeStamp(0.09308042310451281);
    msg.setSource(38121U);
    msg.setSourceEntity(105U);
    msg.setDestination(50095U);
    msg.setDestinationEntity(0U);
    msg.target = 63248U;
    msg.x = 0.1938755366009871;
    msg.y = 0.9906637831752595;
    msg.z = 0.3213449552850479;

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
    msg.setTimeStamp(0.009186065752372463);
    msg.setSource(33581U);
    msg.setSourceEntity(164U);
    msg.setDestination(14904U);
    msg.setDestinationEntity(78U);
    msg.target = 7429U;
    msg.x = 0.4103427754015406;
    msg.y = 0.3425710002185288;
    msg.z = 0.2710238662961457;

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
    msg.setTimeStamp(0.4584079225003299);
    msg.setSource(50304U);
    msg.setSourceEntity(180U);
    msg.setDestination(9513U);
    msg.setDestinationEntity(180U);
    msg.target = 4264U;
    msg.x = 0.4421337635582776;
    msg.y = 0.8561316805246959;
    msg.z = 0.16282257213716866;

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
    msg.setTimeStamp(0.9646311600826637);
    msg.setSource(45696U);
    msg.setSourceEntity(39U);
    msg.setDestination(30296U);
    msg.setDestinationEntity(135U);
    msg.target = 38828U;
    msg.lat = 0.032573858643097475;
    msg.lon = 0.9322899129795853;
    msg.z_units = 254U;
    msg.z = 0.7982625630896897;

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
    msg.setTimeStamp(0.5074367147220505);
    msg.setSource(31208U);
    msg.setSourceEntity(9U);
    msg.setDestination(53035U);
    msg.setDestinationEntity(107U);
    msg.target = 34473U;
    msg.lat = 0.995813407390351;
    msg.lon = 0.299933028004445;
    msg.z_units = 195U;
    msg.z = 0.6989259358187048;

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
    msg.setTimeStamp(0.11161165851041055);
    msg.setSource(24582U);
    msg.setSourceEntity(35U);
    msg.setDestination(4960U);
    msg.setDestinationEntity(84U);
    msg.target = 34775U;
    msg.lat = 0.3402830165872105;
    msg.lon = 0.3991115005013032;
    msg.z_units = 222U;
    msg.z = 0.7909057365085375;

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
    msg.setTimeStamp(0.8336048465714445);
    msg.setSource(31636U);
    msg.setSourceEntity(7U);
    msg.setDestination(63523U);
    msg.setDestinationEntity(49U);
    msg.locale.assign("ADUNDEMZHGIPZXYHPPMJCCHNRAZIQAMEUHOIBKFLOXBSQUTGFBWMKJUXUPQYQCSRBAVVWIERZDOQDKGJGNGKFSDNNYYOSZAPDFRLHRIRVDMKLLYMFUJMSIWPIPONOYZEECASYCJCWJIWLICRPEZTVSYKAHEGFUSSDMFQGBBZUKRWCXTLLTZIRBMXXOQLPHTYOWKJNAHZVQAWGVKQANTOXEBRJXDSLJVBGNDHKFNTQTEYXCWVGUUOVJMTE");
    const char tmp_msg_0[] = {124, -95, 40, -57, -81, 19, -10, 100, -65, -119, 121, 102, -92, -31, -5, -71, -31, -97, -97, 81, -74, 67, 63, 38, -23, -4, 95, -119, -8, -104, -52, 32, 110, 54, 84, -116, -68, 56, -115, -19, -5, -46, -27, 23, -63, 27, 95, 31, 84, -89, -96, -118, 7, -102, 63, 124, -66, -33, 61, -118, -2, 28, -103, 56, -97, 3, 58, 98, -117, 79, -100, -13, 27, -36, 117, -86, -8, -99, -10, -90, 75, 101, -54, 111, -83, 9, -69, 31, -7, -2, 67, -8, -71, -123, -120, -28, 60, 57, 25, -56, 70, 43, -8, 49, -53, -119, 100, 84, -121, 91, -124, -37, -13, -84, -79, 38, -121, -71, 37, 12, -27, 11, -118, 123, 105, -88, 26, -121, 11, 80, 104, -9, 1, 66, -38, -127, 76, 47, 102, 108, 63, 20, -21, -33, 38, 92, -79, 53, 125, -84, 46, -25, 74, -42, 51, -82, 7, 92, -61, 64, -24, -110, 84, -71, -63, -45, -112, 101, 119, 34, 123, -100, -104, 94, -44, -102, 0, 81, -74, 91, 69, 31, 99, -87, 123, 81, -120, -77, -74, -31, 75, -97, 43, 100, 89, -82, 96, 78, -89, 109, -125, -69, -99, -1, -100, 7, -63, -26, 78, -22, 65, 46, 125, -64, 67, 46, -122, -58, -79, -47, 2, 78, -102, -10, 106, -33, 112, 44, -68, 38, -10, 75, -84, -18, 108, -64, -28, -30, -45, 21, 62, -107, -37, 21, 4, -12, -64};
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
    msg.setTimeStamp(0.8751115365976506);
    msg.setSource(7843U);
    msg.setSourceEntity(152U);
    msg.setDestination(13911U);
    msg.setDestinationEntity(189U);
    msg.locale.assign("NBXZAVUSYWIXEXQPWPMRJRFPBONHWUYVCEGFGZCMZMIMCIHQYCBOCLQJMTYPQDQXNRMJWSUFGFVGUFUGTQINDKEWROONATPBEAGFHYYPTKUJIVZJLTCAAFHSTRSZVRDKPTNWXIMZNKBXJERIBTAGSDYCEPGD");
    const char tmp_msg_0[] = {-61, 48, -112, -81, -87, 89, -51, -118, -56, -35, 49, 107, 2, 68, 27, 86, 50, -1, 2, -2, 93, -47, 121, 28, -58, 121, -78, -119, 119, 37, 52, -57, 49, -20, 27, -69, -93, 104, -56, -108, -118, 84, 8, -93, 105, -80, -102, 66, -54, 66, -121, -18, 49, -20, -108, 100, 64, -15, -4, 78, 111, -126, 12, -31, 19, -45, 102, -67, 6, -2, 69, 66, 83, 90, -125, 99, 6, -3, -10, 80, 70, -23, 81, 50, -68, 67, -90, -116, 121, -36, 21, -113, -100, 83, -84, 37, 105, 89, 18, 83, 73, 103, 15, -53, -92, -98, -83, 58, -96, -36, -100, -103, -48, 73, -49, 51, -62, -54, 73, -110, -42, -122, 23, -106, 71, 25, -80, -120, -100, -35, -125, -69, 86, 47, 76, -92, -67, -103, 74, -19, -109, 10, -52, 86, -69, -81, -87, -13, -121, -6, -48, 95, 34, 72, 98, -8, -16, -3, -25, 76, 121, -85, 73, -74, -83, 18, -120, -3, 74, -22, -74, -111, -78, -58, -30, 108, -121, 114, 96, 7, 26, -82, 33, 106, 89, -127, 6, -37, 21, -81, -51, -104, -121, 48, 104, -80, -110, 28, 115, 27, -80, 41, -63};
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
    msg.setTimeStamp(0.8076331936129728);
    msg.setSource(60370U);
    msg.setSourceEntity(239U);
    msg.setDestination(1573U);
    msg.setDestinationEntity(22U);
    msg.locale.assign("IHATAYTXZIGNGNHWCBHJGMTZDYQVPVFLUQFMICLVMRVQSRK");
    const char tmp_msg_0[] = {125, -56, -86, -45, 125, -60, 42, -90, 33, 35, 24, -120, -73, 46, -19, 75, -120, 52, -3, 92, 33, 102, 108, -56, -12, -54, -28, -51, -92, 111, -84, -78, -5, 23, 113, 38, -118, 4, -74, -113, -42, -123, -37, 73, -83, 124, 109, 10, -118, -95, 92, 64, -70, -45, -32};
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
    msg.setTimeStamp(0.23496034004517297);
    msg.setSource(941U);
    msg.setSourceEntity(19U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.1789381990411386);
    msg.setSource(55391U);
    msg.setSourceEntity(143U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.23636476257057204);
    msg.setSource(21720U);
    msg.setSourceEntity(188U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.22985399802561168);
    msg.setSource(44585U);
    msg.setSourceEntity(71U);
    msg.setDestination(50239U);
    msg.setDestinationEntity(160U);
    msg.camid = 208U;
    msg.x = 30662U;
    msg.y = 32446U;

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
    msg.setTimeStamp(0.08146182465352725);
    msg.setSource(17858U);
    msg.setSourceEntity(184U);
    msg.setDestination(538U);
    msg.setDestinationEntity(169U);
    msg.camid = 40U;
    msg.x = 57985U;
    msg.y = 50513U;

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
    msg.setTimeStamp(0.008857210168367935);
    msg.setSource(15861U);
    msg.setSourceEntity(215U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(208U);
    msg.camid = 152U;
    msg.x = 54957U;
    msg.y = 48303U;

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
    msg.setTimeStamp(0.17766947628988383);
    msg.setSource(24863U);
    msg.setSourceEntity(172U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(10U);
    msg.camid = 211U;
    msg.x = 64053U;
    msg.y = 54286U;

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
    msg.setTimeStamp(0.8930514900576277);
    msg.setSource(12519U);
    msg.setSourceEntity(55U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(102U);
    msg.camid = 4U;
    msg.x = 834U;
    msg.y = 46320U;

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
    msg.setTimeStamp(0.44961945343410903);
    msg.setSource(61668U);
    msg.setSourceEntity(25U);
    msg.setDestination(46148U);
    msg.setDestinationEntity(50U);
    msg.camid = 173U;
    msg.x = 29673U;
    msg.y = 51329U;

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
    msg.setTimeStamp(0.8721172423343044);
    msg.setSource(1621U);
    msg.setSourceEntity(54U);
    msg.setDestination(297U);
    msg.setDestinationEntity(114U);
    msg.tracking = 240U;
    msg.lat = 0.5988182153035256;
    msg.lon = 0.18262659390838198;
    msg.x = 0.6503348409676868;
    msg.y = 0.14821092281417836;
    msg.z = 0.2657840899196833;

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
    msg.setTimeStamp(0.6165189578598179);
    msg.setSource(60960U);
    msg.setSourceEntity(35U);
    msg.setDestination(23955U);
    msg.setDestinationEntity(186U);
    msg.tracking = 33U;
    msg.lat = 0.44147361161539855;
    msg.lon = 0.43643210398060117;
    msg.x = 0.9597711142012897;
    msg.y = 0.3708287093699073;
    msg.z = 0.23519609552567622;

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
    msg.setTimeStamp(0.8848609041825664);
    msg.setSource(19264U);
    msg.setSourceEntity(83U);
    msg.setDestination(34684U);
    msg.setDestinationEntity(214U);
    msg.tracking = 107U;
    msg.lat = 0.9682083163352724;
    msg.lon = 0.606375717671802;
    msg.x = 0.6734266592870153;
    msg.y = 0.9082717815065895;
    msg.z = 0.8964081992221544;

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
    msg.setTimeStamp(0.7471002670850997);
    msg.setSource(22250U);
    msg.setSourceEntity(9U);
    msg.setDestination(43732U);
    msg.setDestinationEntity(200U);
    msg.target.assign("YNLQGGJFZPZSMHIFRSYBWEJRJNDMYMENAWTAEUEDBVFAPHNGDXXQWAYXQKOVDJRGFTMCUBWVUZATSHPIAVFBYOPNYLORCVBPJHDLODRHTVDQXULNMBDBIEDNJKUIPSONJERUPWHTKUICGMZJZOYEGZARMHQWHKVPBUFTLPOTQTKENWIJAFSUNVFQQCJGWLXMYEGVKCFCYA");
    msg.lbearing = 0.9020848138213459;
    msg.lelevation = 0.5539135498271344;
    msg.bearing = 0.7545553415210127;
    msg.elevation = 0.201847773937893;
    msg.phi = 0.4294144200409129;
    msg.theta = 0.4084890214760052;
    msg.psi = 0.8861135921364878;
    msg.accuracy = 0.29787835190664946;

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
    msg.setTimeStamp(0.27997550079418265);
    msg.setSource(29180U);
    msg.setSourceEntity(213U);
    msg.setDestination(43815U);
    msg.setDestinationEntity(149U);
    msg.target.assign("VFUXTDZHNSPIHLCDZCELUXXSPEKQUHPQFFJKRZOERPRUBBRVRVWOGEANEHEXGHCMJYUODWUKIJURTMCHDOSCGRQIFYFCQCYSJEIQZVTASVKEWLWWUWZOYKFVZPYLLUPABMLKHZONNPKJZQ");
    msg.lbearing = 0.2876152514123834;
    msg.lelevation = 0.8926248100335601;
    msg.bearing = 0.5027446912997124;
    msg.elevation = 0.4543791653483119;
    msg.phi = 0.7538447214763279;
    msg.theta = 0.9912049946489926;
    msg.psi = 0.4315413545126119;
    msg.accuracy = 0.10522850836506403;

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
    msg.setTimeStamp(0.13289017651502455);
    msg.setSource(37148U);
    msg.setSourceEntity(88U);
    msg.setDestination(8453U);
    msg.setDestinationEntity(27U);
    msg.target.assign("RVAVLVLCCOXJRECDJWUMKTWZEPHQXBPPPGUIPNHYQIURHQHMYSONLBXNYMWOOADCODPJNLAJJSFMCFSENNCMGGKUUDRXINTGIECEQXGMGOSEZUFAKOQLIABMGHAFDJKLNMJ");
    msg.lbearing = 0.14710041040162136;
    msg.lelevation = 0.25481796950404;
    msg.bearing = 0.23093255235404686;
    msg.elevation = 0.39244491890282496;
    msg.phi = 0.5360102336834885;
    msg.theta = 0.7237852243168278;
    msg.psi = 0.6599271682292615;
    msg.accuracy = 0.5028657685878901;

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
    msg.setTimeStamp(0.678945316536293);
    msg.setSource(13640U);
    msg.setSourceEntity(191U);
    msg.setDestination(3734U);
    msg.setDestinationEntity(102U);
    msg.target.assign("KYKOYULYXIJYYPYQJEECIQGVTGJFBPNEZPQOJKFHOAVADFSXNEUEUYFALXBPKWMLCULPWZJQNIKKXXNDSBNRFQDWOGMRRMKAICJHKNMICVJTRKONLDSRMWIDZEVICEMCVQBWGONRVOFWLUSUZMPTGJVYDQORZTVVEXWZFACHSYMATRVLGZXJHFWLCNSEBIIPBMAWPOKGTAZRFSQCHLXDBUZ");
    msg.x = 0.22369485017623103;
    msg.y = 0.5021707390295779;
    msg.z = 0.7703260053920268;
    msg.n = 0.01779963382239802;
    msg.e = 0.1126911330467133;
    msg.d = 0.6716948573237569;
    msg.phi = 0.7512335687501358;
    msg.theta = 0.6099174615982771;
    msg.psi = 0.6842651600109857;
    msg.accuracy = 0.006699072073626522;

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
    msg.setTimeStamp(0.17017664604189742);
    msg.setSource(32008U);
    msg.setSourceEntity(165U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(189U);
    msg.target.assign("LOUPSDNWYEMYMJGUHKXIQUTPSRGFAWELXZOEZQRODHRCQIBJQXKHJLOJCSVBBVIZYXAJILCTRCSDZOKTFQWLYVBETZONXUZNAK");
    msg.x = 0.8962829428297914;
    msg.y = 0.8529716079067123;
    msg.z = 0.7752064485278292;
    msg.n = 0.7524865237718485;
    msg.e = 0.03393240323428137;
    msg.d = 0.42320853908843237;
    msg.phi = 0.5247315312787578;
    msg.theta = 0.8151647005274991;
    msg.psi = 0.24457249899630895;
    msg.accuracy = 0.05011540403378201;

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
    msg.setTimeStamp(0.6176335285639849);
    msg.setSource(35015U);
    msg.setSourceEntity(219U);
    msg.setDestination(47502U);
    msg.setDestinationEntity(203U);
    msg.target.assign("TYDVPZFFXTAYXYM");
    msg.x = 0.6721084957116351;
    msg.y = 0.7190355037241624;
    msg.z = 0.0033478531221460273;
    msg.n = 0.5987794969901539;
    msg.e = 0.9590096856611715;
    msg.d = 0.7376482366244749;
    msg.phi = 0.4990189634212263;
    msg.theta = 0.38378542286284933;
    msg.psi = 0.0755270598978719;
    msg.accuracy = 0.25680984345658975;

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
    msg.setTimeStamp(0.49933719612684635);
    msg.setSource(59643U);
    msg.setSourceEntity(149U);
    msg.setDestination(6610U);
    msg.setDestinationEntity(200U);
    msg.target.assign("HHQYMWKYUXNMPPNBDZOSOXWVWKMPABJT");
    msg.lat = 0.7055465766065397;
    msg.lon = 0.3524392418217297;
    msg.z_units = 95U;
    msg.z = 0.5554384893865452;
    msg.accuracy = 0.8210091099364184;

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
    msg.setTimeStamp(0.9321538290664984);
    msg.setSource(35512U);
    msg.setSourceEntity(19U);
    msg.setDestination(63354U);
    msg.setDestinationEntity(249U);
    msg.target.assign("FZITDCOSQZXFUQUQKPHEXNVBUSIDJDVNDLWXGUJIZQCIBMUMBSWOQNGXECTTIHQNPEKAWYFMAJAJLAFMBHHVYHCPLMIZQEYDGCLOSFGSXSRVPIGDFRSCHJYBNWWZBDNVALIZTJLTOXGARNRBTMZPTLBTNJOLLVPKSKWYYMFKGTFROSYOXEDVLXKNUHKUJBY");
    msg.lat = 0.6029321006003291;
    msg.lon = 0.07050599127044799;
    msg.z_units = 6U;
    msg.z = 0.607949316684439;
    msg.accuracy = 0.3263445616700784;

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
    msg.setTimeStamp(0.7113502110543363);
    msg.setSource(55976U);
    msg.setSourceEntity(34U);
    msg.setDestination(12433U);
    msg.setDestinationEntity(170U);
    msg.target.assign("UYQJCBQZSVWJZXQJAEYEINMLKJCIYXBLWFGDGNLEHFTUKLBAQWNFRYXINOEBOOLQZCJWXBREPAMRBNSKPXZICFNLXPGMDNSLOXUKGSRSTCVSYFHDAAHSIAXIJPJOGFJIPQHBBBEOPADVMKWCDRFYYFSVWGVNZUDHMQWKTSEQOKEMVTCWRVNUPIYMLMOAAKXFLTWJTQRUPDJTHZZZWMFTGVOCHHGXUAD");
    msg.lat = 0.7124942058152669;
    msg.lon = 0.02828012645766309;
    msg.z_units = 82U;
    msg.z = 0.25935726366238154;
    msg.accuracy = 0.02674533386929656;

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
    msg.setTimeStamp(0.5448678090695619);
    msg.setSource(9944U);
    msg.setSourceEntity(199U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(241U);
    msg.name.assign("BUMPNIJWZABMJMKQSLKYFBGXIKZHVTQ");
    msg.lat = 0.37348208172721076;
    msg.lon = 0.29603179457229545;
    msg.z = 0.23614262906378114;
    msg.z_units = 98U;

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
    msg.setTimeStamp(0.8694077633371086);
    msg.setSource(59037U);
    msg.setSourceEntity(193U);
    msg.setDestination(31689U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FSJNVALSKBKVOALBROPSOUEGEJZVUOVIRDHFISQGDOTCPCNFTXXCUMLPREMHWMKLRUULVDXKZXGQWHLIIGKZTCMRWKQEWHBDNOSWWPMTZDZCVAEHPEKTFGQEUMBDRJANHKCWMCHBBNBTYIVYOOJ");
    msg.lat = 0.4029134383826012;
    msg.lon = 0.2974889011144609;
    msg.z = 0.23502128304151004;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.06623614621111185);
    msg.setSource(53018U);
    msg.setSourceEntity(51U);
    msg.setDestination(51209U);
    msg.setDestinationEntity(59U);
    msg.name.assign("UVLPOGDXRDJRDZQQHXEBDFTUCCCNMTFTWZKOBBGLSLKMCMOTZOCBTXKQFUVPEJNICFVJNWMVUA");
    msg.lat = 0.3746132830616966;
    msg.lon = 0.21526858632344825;
    msg.z = 0.8499692198035258;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.14128975446584713);
    msg.setSource(45977U);
    msg.setSourceEntity(215U);
    msg.setDestination(13309U);
    msg.setDestinationEntity(166U);
    msg.op = 187U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XPUMPZDBMJZBUGAHXDCPUZVLEWPSASUWRSTGMVINTQVHY");
    tmp_msg_0.lat = 0.547803013709274;
    tmp_msg_0.lon = 0.7665194937636861;
    tmp_msg_0.z = 0.010501235537880738;
    tmp_msg_0.z_units = 214U;
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
    msg.setTimeStamp(0.3369454615464744);
    msg.setSource(18736U);
    msg.setSourceEntity(185U);
    msg.setDestination(24420U);
    msg.setDestinationEntity(171U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.21971039690262295);
    msg.setSource(41065U);
    msg.setSourceEntity(159U);
    msg.setDestination(54961U);
    msg.setDestinationEntity(111U);
    msg.op = 83U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HOZZNJQSUAWOHPKGZVQEHDJEXXYPDMLKJG");
    tmp_msg_0.lat = 0.3105329628800749;
    tmp_msg_0.lon = 0.5000384827478751;
    tmp_msg_0.z = 0.965470548740707;
    tmp_msg_0.z_units = 218U;
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
    msg.setTimeStamp(0.42878112610680774);
    msg.setSource(61072U);
    msg.setSourceEntity(72U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8899582838053951;
    msg.type = 52U;

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
    msg.setTimeStamp(0.31441400348854387);
    msg.setSource(44096U);
    msg.setSourceEntity(214U);
    msg.setDestination(59543U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0017675167042057183;
    msg.type = 28U;

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
    msg.setTimeStamp(0.1959295751429334);
    msg.setSource(38966U);
    msg.setSourceEntity(65U);
    msg.setDestination(24010U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8824922832363579;
    msg.type = 196U;

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
    msg.setTimeStamp(0.5540280555033763);
    msg.setSource(33862U);
    msg.setSourceEntity(3U);
    msg.setDestination(26536U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4232543982249801;

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
    msg.setTimeStamp(0.37651391203420015);
    msg.setSource(46715U);
    msg.setSourceEntity(229U);
    msg.setDestination(34039U);
    msg.setDestinationEntity(21U);
    msg.value = 0.014684766520662973;

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
    msg.setTimeStamp(0.8357442235215217);
    msg.setSource(34164U);
    msg.setSourceEntity(93U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(28U);
    msg.value = 0.6387251420375358;

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
    msg.setTimeStamp(0.7810443631946229);
    msg.setSource(20754U);
    msg.setSourceEntity(200U);
    msg.setDestination(51660U);
    msg.setDestinationEntity(244U);
    msg.timestamp_last_service = 0.40290205633281617;
    msg.time_next_service = 0.06439209114663091;
    msg.time_motor_next_service = 0.12822433192341642;
    msg.time_idle_ground = 0.6028011499724368;
    msg.time_idle_air = 0.6043812014821757;
    msg.time_idle_water = 0.4250593173432803;
    msg.time_idle_underwater = 0.6723511701790992;
    msg.time_idle_unknown = 0.9829432247511997;
    msg.time_motor_ground = 0.5326357285147095;
    msg.time_motor_air = 0.29768492239025235;
    msg.time_motor_water = 0.09105902255727538;
    msg.time_motor_underwater = 0.14471608962616078;
    msg.time_motor_unknown = 0.2981162420154405;
    msg.rpm_min = 2505;
    msg.rpm_max = -1820;
    msg.depth_max = 0.7622195998165765;

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
    msg.setTimeStamp(0.8600633453645543);
    msg.setSource(40468U);
    msg.setSourceEntity(239U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(46U);
    msg.timestamp_last_service = 0.5629531601434146;
    msg.time_next_service = 0.28925789997393014;
    msg.time_motor_next_service = 0.9901863156138545;
    msg.time_idle_ground = 0.7063922878715425;
    msg.time_idle_air = 0.3196139994162115;
    msg.time_idle_water = 0.44715833326504195;
    msg.time_idle_underwater = 0.9093564883093381;
    msg.time_idle_unknown = 0.8804270119249941;
    msg.time_motor_ground = 0.633617300038909;
    msg.time_motor_air = 0.4665440477841527;
    msg.time_motor_water = 0.6927137003665729;
    msg.time_motor_underwater = 0.7149166206836608;
    msg.time_motor_unknown = 0.941290629542876;
    msg.rpm_min = -8787;
    msg.rpm_max = 11165;
    msg.depth_max = 0.1105832722889114;

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
    msg.setTimeStamp(0.2538125811993003);
    msg.setSource(56861U);
    msg.setSourceEntity(58U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(87U);
    msg.timestamp_last_service = 0.6253568034069735;
    msg.time_next_service = 0.5658147589715833;
    msg.time_motor_next_service = 0.8271124022953251;
    msg.time_idle_ground = 0.08443357885207181;
    msg.time_idle_air = 0.8888069451014218;
    msg.time_idle_water = 0.9641489027300516;
    msg.time_idle_underwater = 0.9210974063391203;
    msg.time_idle_unknown = 0.05111807493142417;
    msg.time_motor_ground = 0.2713811053181835;
    msg.time_motor_air = 0.09777312886671674;
    msg.time_motor_water = 0.09311653408052356;
    msg.time_motor_underwater = 0.09982918047602929;
    msg.time_motor_unknown = 0.6690198076636954;
    msg.rpm_min = -4875;
    msg.rpm_max = 10406;
    msg.depth_max = 0.23106525023784685;

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
    msg.setTimeStamp(0.3642784226078719);
    msg.setSource(18278U);
    msg.setSourceEntity(152U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(137U);
    msg.severity = 168U;
    msg.text.assign("OFWKVUHGMHPFFZPGQKYNLZORMXUGCNWMBDCWDCSENKXOJZXHFIAQLHHITKQQBSVYQUZIJZEITGQEOQTBFQLTZAZDTGZACCYPOZRMIUCBPDXQSRWEVXPNEIPSPBXMUGJWMRVGORAKBTMSJNUDRELEFLRZCFDIPYEGAR");

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
    msg.setTimeStamp(0.24299575269084128);
    msg.setSource(30036U);
    msg.setSourceEntity(213U);
    msg.setDestination(54250U);
    msg.setDestinationEntity(37U);
    msg.severity = 236U;
    msg.text.assign("NFKEHOAXCFRXUAQBYFQFZYTAWLFEXVRBQEYKOTNYZAOJNGSZIPXDJUUNSZJPMLNMJCZKIQZMNHGFVECQXIJZRITFMLOICPMJZPUQCDCHVDSABSSGJEATPVJRTHGCGZQGHDHKP");

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
    msg.setTimeStamp(0.48554494917983215);
    msg.setSource(29484U);
    msg.setSourceEntity(206U);
    msg.setDestination(31506U);
    msg.setDestinationEntity(112U);
    msg.severity = 11U;
    msg.text.assign("AUGDKDDQCINOITRFALLTJWCGXSCTLXXRKRVCHIQZTINBCDMGVBDWYSMFZFLBAIQOPLXGAYZOGRPZFDNBBUWWHKUHQNVCXGKAXBLEVOXZTMSLHPNVHJJSEHPEWVNMLDATKDACRITNGQFVREWRTEPSGRESJOQUFYYAJLCSVQKRKBYCDAKZYVSPCKTJOPIMNUMDWJJZGZZXKHFZBYUWOSYYJIIEIHRUMMXNOEASJUEHGQLFUPWUQFTMQYMVFXO");

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
    msg.setTimeStamp(0.2848213099437632);
    msg.setSource(23131U);
    msg.setSourceEntity(110U);
    msg.setDestination(51830U);
    msg.setDestinationEntity(12U);
    msg.channel = -127;
    msg.value = -2027362639;
    msg.gain = 164U;

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
    msg.setTimeStamp(0.09706668337039515);
    msg.setSource(34709U);
    msg.setSourceEntity(225U);
    msg.setDestination(4494U);
    msg.setDestinationEntity(79U);
    msg.channel = -79;
    msg.value = 540023996;
    msg.gain = 29U;

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
    msg.setTimeStamp(0.20990376657661192);
    msg.setSource(22900U);
    msg.setSourceEntity(14U);
    msg.setDestination(14647U);
    msg.setDestinationEntity(135U);
    msg.channel = 53;
    msg.value = -2022646953;
    msg.gain = 232U;

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
    msg.setTimeStamp(0.2197491744694432);
    msg.setSource(58326U);
    msg.setSourceEntity(47U);
    msg.setDestination(1470U);
    msg.setDestinationEntity(236U);
    msg.ch01 = 0.2949160701147212;
    msg.ch02 = 0.2855433278380677;
    msg.ch03 = 0.5458949587719538;
    msg.ch04 = 0.6448585714407379;
    msg.ch05 = 0.34227061668132;
    msg.ch06 = 0.21222772587501526;
    msg.ch07 = 0.9407035558534672;
    msg.ch08 = 0.25374949373409617;
    msg.ch09 = 0.9988041020387302;
    msg.ch10 = 0.11963352199233901;
    msg.ch11 = 0.218237657658522;
    msg.ch12 = 0.9690296974905728;
    msg.ch13 = 0.362789011602518;
    msg.ch14 = 0.9804723661220563;
    msg.ch15 = 0.18463205456462717;
    msg.ch16 = 0.9604968344091339;

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
    msg.setTimeStamp(0.45544978918349344);
    msg.setSource(62839U);
    msg.setSourceEntity(19U);
    msg.setDestination(39168U);
    msg.setDestinationEntity(156U);
    msg.ch01 = 0.9283498671765141;
    msg.ch02 = 0.4290503098526688;
    msg.ch03 = 0.8141417697647149;
    msg.ch04 = 0.671903133283655;
    msg.ch05 = 0.38980984649871586;
    msg.ch06 = 0.027575783266025278;
    msg.ch07 = 0.3011344427419662;
    msg.ch08 = 0.572995776251923;
    msg.ch09 = 0.9257135495966264;
    msg.ch10 = 0.7124165828843656;
    msg.ch11 = 0.7583576150250707;
    msg.ch12 = 0.39142729118821806;
    msg.ch13 = 0.8643462438961601;
    msg.ch14 = 0.14517711533834776;
    msg.ch15 = 0.8046679180743055;
    msg.ch16 = 0.1815490314061199;

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
    msg.setTimeStamp(0.26375402835965134);
    msg.setSource(31406U);
    msg.setSourceEntity(86U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(34U);
    msg.ch01 = 0.1858591223502981;
    msg.ch02 = 0.31603119315707073;
    msg.ch03 = 0.47121859319444037;
    msg.ch04 = 0.7307061302725986;
    msg.ch05 = 0.6117438824007569;
    msg.ch06 = 0.9809505416389351;
    msg.ch07 = 0.829741770193598;
    msg.ch08 = 0.9487161637346807;
    msg.ch09 = 0.45697096114290436;
    msg.ch10 = 0.7273863142947903;
    msg.ch11 = 0.16724056858109004;
    msg.ch12 = 0.697561063440108;
    msg.ch13 = 0.7161587867247603;
    msg.ch14 = 0.5147784297625608;
    msg.ch15 = 0.21888384619180157;
    msg.ch16 = 0.07262849762408241;

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
    msg.setTimeStamp(0.8373431258878923);
    msg.setSource(36958U);
    msg.setSourceEntity(106U);
    msg.setDestination(9985U);
    msg.setDestinationEntity(98U);
    msg.op = 48U;
    msg.lat = 0.8877577088699968;
    msg.lon = 0.2537523032688993;
    msg.height = 0.2516049089013185;
    msg.depth = 0.7090267743340055;
    msg.alt = 0.9324342859283644;

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
    msg.setTimeStamp(0.16117118037514033);
    msg.setSource(46568U);
    msg.setSourceEntity(162U);
    msg.setDestination(31372U);
    msg.setDestinationEntity(224U);
    msg.op = 1U;
    msg.lat = 0.16739484382763314;
    msg.lon = 0.8016275798285473;
    msg.height = 0.35633135585418274;
    msg.depth = 0.8163555101882016;
    msg.alt = 0.616266951451079;

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
    msg.setTimeStamp(0.11487970296744343);
    msg.setSource(30886U);
    msg.setSourceEntity(233U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(155U);
    msg.op = 168U;
    msg.lat = 0.09301680822703917;
    msg.lon = 0.6341710359267471;
    msg.height = 0.3294589060868296;
    msg.depth = 0.31532025655528495;
    msg.alt = 0.2219197021095599;

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
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.22535622517257037);
    msg.setSource(15795U);
    msg.setSourceEntity(101U);
    msg.setDestination(55896U);
    msg.setDestinationEntity(240U);
    msg.req_id = 33187U;
    msg.type = 254U;
    msg.init = 1050152940U;
    msg.end = 1308558425U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.5216545954238319);
    msg.setSource(23795U);
    msg.setSourceEntity(253U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(11U);
    msg.req_id = 11267U;
    msg.type = 155U;
    msg.init = 3707353563U;
    msg.end = 522237987U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.4822099955605126);
    msg.setSource(8779U);
    msg.setSourceEntity(237U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(53U);
    msg.req_id = 14091U;
    msg.type = 46U;
    msg.init = 3840664696U;
    msg.end = 3583868944U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.09191478572249479);
    msg.setSource(37099U);
    msg.setSourceEntity(144U);
    msg.setDestination(10444U);
    msg.setDestinationEntity(137U);
    msg.req_id = 55579U;
    msg.type = 67U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("DQCPZBSYPFCMNSXAXGEKVLUMZCHGTAIZBJMFFTTHSKLVUOWPPFLQVPWZIWRGTLGXFNBNLXDICFYNQBTDKASAOHHSBMTMNJJMCVEKUUVQABBSFBWJDOJYINWKVJYMZMOKBNNKJXLHPFDUYAH");
    tmp_msg_0.frag_number = 8985U;
    tmp_msg_0.num_frags = 43606U;
    const char tmp_tmp_msg_0_0[] = {81, -31, -106, 12, -63, -122, -64, -26, -50, 45, -73, 8, 21, 48, 2, -19, 0, 10, 56, -2, 57, 30, -36, -51, 114, -77, 95, -100, -99, -76, -32, -25, -113, -115, -49, -101, 90, -22, 40, 68, -67, -92, -115, 50, 72, 120, -12, -27, -8, -37, 96, -119, 67, 87, -107, 104, -47, 0, -29, -58, 74, 33, 50, -72, 62, -26, -126, 112, 36, 0, 37, 94, 101, 69, 113, 113, -71, -80, -87, 69, -42, -124, -40, -109, 86, -1, 123, -6, 112, -38, 32, -15, 104, -47, 91, -79, 110, 6, 71, 70, 6, -56, -113, 19, 32, -41, 73, 95, -49};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.5831241759047397);
    msg.setSource(18800U);
    msg.setSourceEntity(145U);
    msg.setDestination(49619U);
    msg.setDestinationEntity(120U);
    msg.req_id = 27194U;
    msg.type = 62U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("TFHZMPCVDRXJEQOQDDBSMWZYIFAXETJBZQGGJFPBAIKSBWHSVOFYLEISNQONUZEHNMXJUHFUGVTSRWCTEJLENDHPZASHQLGFQUYOXRRBCYQDMOCKFYHFVCCNRWBPITAAUKTZHNDRACIVVPHGOXKWDJZJSLGQBXLINLLBYUTRRCZNQJEPXXEUIGHWDWPAYFQPPVDSXKBOKYITKZSXY");
    tmp_msg_0.frag_number = 26299U;
    tmp_msg_0.num_frags = 25968U;
    const char tmp_tmp_msg_0_0[] = {16, -68, 59, -9, -94, 73, 96, 116, -96, -124, 43, 122, -56, 112, -90, -77, -10, -40, -53, -49, -63, 31, 81, 25, -30, -51, 108, 75, 18, -56, 18, 14, -5, 14, 31, 0, -122, -44, 72, -4, -82, 25, 7, 20, -23, -113, 55, -40, 48, -86, 26, -111, 2, -4, 50, 19, -19, -4, 42, 98, -100, 111, -111, 31, 12, 95, 108, 54, -60, -86, -58, -63, 79, -21, -16, -67, -14, 105, 47, 39, 103, -124, -72, -40, -105, -37, 95, -87, 88, 14, 12, 61, -107, -57, -33, -77, -14, 45, 111, -55, -87, -48, -61, -88, -6, -25, -23, -127, 94, 88, -6, 124, 9, -49, -29, -36, -49, 75, 50, -61, -103, 21, 61, 119, 57, 77, 29, 70, 0, 101, -105, -80, 71, -14, -86, 39, -69, 98, -95, 55, 101, -113, -87, -59, -77, 18, 49, 69, 32, 22, -120, -51, 75, -78, -59, -8, 55, 28, 51, -32, 71, -107, 78, -110, -8, 32, 0, 14, -79, 39, 70, -46, 13, -75, 67, -107, -53, -4, -56, -20, -108, -17, -26, -118, 93, -118, 113, -51, -120, 46, 116, -106, -59, -94, -16, -115, 106, 36, 122, -80, -66, -20, -111, 121, -123, 85, -54, 62, -11, -69, -92, -53, 63, 74, -79};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.2313359909591851);
    msg.setSource(43350U);
    msg.setSourceEntity(12U);
    msg.setDestination(2593U);
    msg.setDestinationEntity(174U);
    msg.req_id = 30510U;
    msg.type = 136U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("MLFBNNIDLVSGOCNPNFIZQBHHSWPLYYWRBOMVSUFKCAIDXB");
    tmp_msg_0.frag_number = 24299U;
    tmp_msg_0.num_frags = 54522U;
    const char tmp_tmp_msg_0_0[] = {114, 39, -48, 73, 95, 83, 19, 58, 49, 10, -104, 66, -4, -113, -110, -9, -25, -54, 101, -121, 99, 118, -43, 99, -25, -127, 112, -121, -110, 32, -31, 29, -89, 120, -35, -15, 105, 104, -45, -51, 13, -2, -69, -3, -119, 86, -5, -92, 84, -107, 112, 121, 1, -95, -95, 116, -77, 93, 92, 61, -35, 101, 58, 11, 111, -76, -23, -54, -85, -83, -115, -71, 65, -20, 59, 95, -55, 117, -13, 23, -49, -35, 104, 84, 72, 70, 7, -104, 20, 14, 24, -73, 70, -127, 76, 117, -37, -27, -22, -92, 76, 84, 101, -90, -127, 53, 125, -62, 32, 96, 117, 26, -15, 116, -88, 44, 8, 105, -7, -84, -18, -64, -117, 58, 106, 80, -51, 18, -37, 41, 77, 87, -36, 122, -123, -20, -115, -108, 11, -29, -5, -88, -37, 98, 5, 109, 13, -85, -22, 111, -78, 110, -41, 21, 90};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.7940964120344948);
    msg.setSource(19405U);
    msg.setSourceEntity(29U);
    msg.setDestination(62453U);
    msg.setDestinationEntity(226U);
    msg.id.assign("ROQNVVVVBPQLHOFFAPPNRDVSXIGADHAKYTRSULOCXJWZHSUKZEZYIXGIMPPXQAVIHMYBDWTHEGCKAIUM");
    msg.frag_number = 15762U;
    msg.num_frags = 48099U;
    const char tmp_msg_0[] = {-108, -24, -97, -60, -22, -103, -118, -59, -21, 48, 106, 12, 86, 54, -108, -1, 41, -15, 16, -49, -110, -39, -65, -84, 52, 102, -14, 104, -124, -8, 69, 39, -83, 97, -109, 47, 66, 19, 20, -86, 29, -83, 86, 101, 56, 108, -2, -46, -49, -29, -100, -38, 31, -56, 8, 73, 14, -31, 99, 1, 100, -106, -80, -1, 55, -57, 83, 99, -54, -91, -84, 53, 5, 42, -50, -71, -41, -49, -48, 123, -41, 22, 1, -79, -71, -107, -111, 121, -7, -41, -91, 107, 54, -117, 39, 110, -67, -119, -29, 41, -65, 10, 70, -41, 86, 52, -91, -109, 48, 4, -72, -27, -64, 28, 71, 96, 12, -64, -36, -13, 109, 30, 2, 57, 65, 119, 49, 122, 24, -82, -9, -62, 56, 25, -49, 84, -1, -27, 69, -114, -26, -15, 18, 53, -6, -26, 5, 26, -39, -102, -89, 120, 122, 72, -98};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.9559547964134646);
    msg.setSource(24806U);
    msg.setSourceEntity(55U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(33U);
    msg.id.assign("MAPHIRPDWRTSEAADFLVIULWIUYUKHQOPEMRHWTKKXJNALUGLBCHVTIOPICGIULJFHWYPYDRSGCTWRUOLSWPYDYIFZOATGJEXYCDEVVNPUSTSAAPNLZDXXDMZQJKDEFNMGFYVHBLCCMVHUAKEBAHYOMKQNAOLBUGRTFMJXTIVWVVXQFRGGPJQWBTCNMEDRHECJZLBYJWEZEVWSBSKXYQFRGNZFZRXOQNSSZBTOKIHCDZBMZIXPJUNK");
    msg.frag_number = 24946U;
    msg.num_frags = 55245U;
    const char tmp_msg_0[] = {17, -16, -15, 97, -14, 58, 5, 5, 22, -101, 125, -87, -19, -85, -14, -31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.21462542899360781);
    msg.setSource(16564U);
    msg.setSourceEntity(240U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(224U);
    msg.id.assign("ZNFKPYJUSPRMFVHZCGSAMOWNIQVJPJJSBUPZMYQWMZXPWPRADKNBYNICTKQOLRDVZUBFFKGVZBFJSYWOMGYAYSXLTTDSEXWWLZOPKGAXATOQTXVMOYZXSMCHBYRESWZTSUTAYEDEKRHAVXOIXQENWNQVQITVPUHJIIDJGBOU");
    msg.frag_number = 49894U;
    msg.num_frags = 37002U;
    const char tmp_msg_0[] = {-23, -100, -122, 51, 102, -21, -43, -33, -109, 85, 80, 114, -11, -9, 8, -97, 101, 105, 33, -97, -13, -61, 2, 105, 25, 22, -43, -123, -128, -123, 82, 106, -88, -106, 22, -76, -101, -84, 126, 18, 10, -82, -73, 11, 96, -93, -18, 23, -8, 70, 9, 7, -93, -109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #2", msg == *msg_d);
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
    msg.setTimeStamp(0.38374611815797954);
    msg.setSource(30691U);
    msg.setSourceEntity(113U);
    msg.setDestination(309U);
    msg.setDestinationEntity(182U);
    msg.nbeams = 122U;
    msg.ncells = 229U;
    msg.coord_sys = 68U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.680371354372265;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8130721399229445);
    msg.setSource(50867U);
    msg.setSourceEntity(77U);
    msg.setDestination(56965U);
    msg.setDestinationEntity(173U);
    msg.nbeams = 169U;
    msg.ncells = 73U;
    msg.coord_sys = 12U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7653866455897722;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.00026394588797618024;
    tmp_tmp_msg_0_0.amp = 0.17404675441926154;
    tmp_tmp_msg_0_0.cor = 69U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.15473610922177738);
    msg.setSource(3344U);
    msg.setSourceEntity(181U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(54U);
    msg.nbeams = 33U;
    msg.ncells = 240U;
    msg.coord_sys = 24U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8027349082259508;
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
    msg.setTimeStamp(0.6029243600190102);
    msg.setSource(29922U);
    msg.setSourceEntity(214U);
    msg.setDestination(10161U);
    msg.setDestinationEntity(56U);
    msg.cell_position = 0.5695169673694065;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.49328990247366533;
    tmp_msg_0.amp = 0.8617578882361324;
    tmp_msg_0.cor = 201U;
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
    msg.setTimeStamp(0.3319680871527009);
    msg.setSource(14355U);
    msg.setSourceEntity(81U);
    msg.setDestination(17590U);
    msg.setDestinationEntity(46U);
    msg.cell_position = 0.46494555461920617;

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
    msg.setTimeStamp(0.9116127325351606);
    msg.setSource(44213U);
    msg.setSourceEntity(202U);
    msg.setDestination(26935U);
    msg.setDestinationEntity(194U);
    msg.cell_position = 0.044652556897334716;

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
    msg.setTimeStamp(0.8490416384218377);
    msg.setSource(21460U);
    msg.setSourceEntity(247U);
    msg.setDestination(9156U);
    msg.setDestinationEntity(60U);
    msg.vel = 0.5980318285608713;
    msg.amp = 0.45311320241145103;
    msg.cor = 169U;

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
    msg.setTimeStamp(0.17431208367484574);
    msg.setSource(4577U);
    msg.setSourceEntity(228U);
    msg.setDestination(38025U);
    msg.setDestinationEntity(115U);
    msg.vel = 0.7694846660504795;
    msg.amp = 0.2907250520872783;
    msg.cor = 19U;

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
    msg.setTimeStamp(0.9346442483887013);
    msg.setSource(8443U);
    msg.setSourceEntity(221U);
    msg.setDestination(49712U);
    msg.setDestinationEntity(36U);
    msg.vel = 0.27923496750779253;
    msg.amp = 0.1614048441010001;
    msg.cor = 180U;

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
    msg.setTimeStamp(0.3965126186485971);
    msg.setSource(8274U);
    msg.setSourceEntity(230U);
    msg.setDestination(44210U);
    msg.setDestinationEntity(77U);
    msg.name.assign("DUAUJGJCNBZIKZCIRJHYYVTXUPIVWDKFBLQMIGMWEOYQRTDFGJSRNFUOPNLTWRSQUVFSHEYMSXAAGEMJSYVHLLDMMFTGZDDAOWABSRTJQQUZAISHFQOSYRWEFEMRJIQWKHXZMONXGHHZ");
    msg.value = 190U;

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
    msg.setTimeStamp(0.30683290550448106);
    msg.setSource(34945U);
    msg.setSourceEntity(46U);
    msg.setDestination(1411U);
    msg.setDestinationEntity(2U);
    msg.name.assign("DARJKTDQCZEYVOHTXSIVSTWNWDVTZRAYNMKKSSHRRNNUZOJGWBOLEKQDOPMZJVVTSFDJPXNEQQJDVFHTKVVWKULHO");
    msg.value = 91U;

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
    msg.setTimeStamp(0.877851893079573);
    msg.setSource(45598U);
    msg.setSourceEntity(7U);
    msg.setDestination(7654U);
    msg.setDestinationEntity(254U);
    msg.name.assign("JFLXRBLYVAHSPH");
    msg.value = 185U;

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
    msg.setTimeStamp(0.7544842071619862);
    msg.setSource(44487U);
    msg.setSourceEntity(130U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(137U);
    msg.name.assign("XOHLWMCCQEDEZQJRWQHARVAGTFDTISOXPLWMYFCIXGELDRCSNRNQOSEQESHBFNZQCMKLARYXUDBPVFIRUOHAIGGOBMWCXYMAMFHKIPZULUBOWIAZKUDNCJICUALYBVBBYFSZHRLIKEUEDGDJVJGRKXQUVSNCVJSHBKVGRHIZPDDHCMJQWOZFATZNOETYKOTQBYBUNITYXLTWAPLNN");

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
    msg.setTimeStamp(0.020280685610172267);
    msg.setSource(4789U);
    msg.setSourceEntity(203U);
    msg.setDestination(42438U);
    msg.setDestinationEntity(203U);
    msg.name.assign("NVTTIYAVZBQXPTNF");

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
    msg.setTimeStamp(0.6803914318633096);
    msg.setSource(21060U);
    msg.setSourceEntity(47U);
    msg.setDestination(27816U);
    msg.setDestinationEntity(158U);
    msg.name.assign("YJMIVRGKDCZFBQAHUFJBBLWGTWOZVMHDBZGUIGQYSMYXJQHPIEJBNSRJMACFXKOXYUFVKRLUWIXDSJICWTZTQPPGHYUMCFSXLRMMFGNUNEPNCNZDWU");

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
    msg.setTimeStamp(0.21025764593909146);
    msg.setSource(45465U);
    msg.setSourceEntity(198U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(198U);
    msg.name.assign("HXORSLVGULKMLPLTQKBRHVYCWHJXIJWSSTWXNOZRFDSQASTUMTGXCXHMDVDHFPTYRSTOGYMTPMYGFQZZQLDDNHKUAEBNYJOXDELFKSGAMJNIGSS");
    msg.value = 198U;

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
    msg.setTimeStamp(0.7619925197805529);
    msg.setSource(26303U);
    msg.setSourceEntity(238U);
    msg.setDestination(29333U);
    msg.setDestinationEntity(224U);
    msg.name.assign("XZLFQTJDBGAVZNXXKOSHXQOUNTFKGTGRFZPVYTXJHNQYVAYCHSQJOJLDVQZATYJYMLOBUGXPEQAFPBIUSIVSDXIWHWMTNRMKJOPCAEDZFROEGRIHQGKCYCDIMVMJQUMWSLTZONPZMNCLTSVICINUAXKYUSCPPPLOTIHCWWJNBQRHCBLEWJTPDZIY");
    msg.value = 248U;

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
    msg.setTimeStamp(0.360999343160611);
    msg.setSource(42688U);
    msg.setSourceEntity(183U);
    msg.setDestination(61559U);
    msg.setDestinationEntity(198U);
    msg.name.assign("OVHKQHIEZLINUFCWQWPJBDKPRUFLJPTAUOSVDEHNSRBJUAXQZZNEVMESBQFJPMCIQPPYJNQTVSWTDWGSCHGLKYGMLTVUCFRMIFUTUMLHVEHWVKRKWUICBCO");
    msg.value = 61U;

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
    msg.setTimeStamp(0.2423740283249145);
    msg.setSource(49577U);
    msg.setSourceEntity(38U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(188U);
    msg.value = 0.10940997106459849;

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
    msg.setTimeStamp(0.7927352040676736);
    msg.setSource(39067U);
    msg.setSourceEntity(248U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(55U);
    msg.value = 0.9647360154548273;

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
    msg.setTimeStamp(0.33252428702329384);
    msg.setSource(6351U);
    msg.setSourceEntity(158U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(247U);
    msg.value = 0.03403578675844321;

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
    msg.setTimeStamp(0.49714762616429653);
    msg.setSource(5032U);
    msg.setSourceEntity(150U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6304229742164646;

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
    msg.setTimeStamp(0.41632729570034444);
    msg.setSource(14652U);
    msg.setSourceEntity(49U);
    msg.setDestination(56727U);
    msg.setDestinationEntity(206U);
    msg.value = 0.618952741661315;

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
    msg.setTimeStamp(0.37937816887163534);
    msg.setSource(53155U);
    msg.setSourceEntity(140U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(180U);
    msg.value = 0.9059501119110912;

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
    msg.setTimeStamp(0.8958182750295534);
    msg.setSource(45317U);
    msg.setSourceEntity(21U);
    msg.setDestination(29888U);
    msg.setDestinationEntity(105U);
    msg.value = 7.786344502047626e-06;

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
    msg.setTimeStamp(0.6879377434010233);
    msg.setSource(33434U);
    msg.setSourceEntity(11U);
    msg.setDestination(17777U);
    msg.setDestinationEntity(197U);
    msg.value = 0.21283309456024424;

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
    msg.setTimeStamp(0.039875731051328356);
    msg.setSource(36928U);
    msg.setSourceEntity(157U);
    msg.setDestination(18013U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9949985507753212;

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
