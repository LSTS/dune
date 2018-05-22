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
// IMC XML MD5: 4f17d060f6f9d32d249c24b9b10a9311                            *
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
    msg.setTimeStamp(0.989195593161);
    msg.setSource(16846U);
    msg.setSourceEntity(139U);
    msg.setDestination(54180U);
    msg.setDestinationEntity(224U);
    msg.state = 35U;
    msg.flags = 196U;
    msg.description.assign("EWHPBMPYGNVHRDDLYLCGBRTEPNPGOXCFGQSKLGFQJQMLANXQOZJDESUDHCULHKUYJMBFKEUIHXTCYJHJCAQGQZNAJXOMSVANIKEBSDEXTPHZTTAIG");

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
    msg.setTimeStamp(0.926628040739);
    msg.setSource(38414U);
    msg.setSourceEntity(31U);
    msg.setDestination(50208U);
    msg.setDestinationEntity(223U);
    msg.state = 179U;
    msg.flags = 151U;
    msg.description.assign("BOSUDZZUEJSOUNDCZRESIWTBMWIDRKMQBWTHALLUGWPFQOGZTVIOKTKOLSLJCVXVYHEOVQAHGQSIYXUSCXLCDJYATCHPCYVNSAWNRIGWNNMUXWCLENHSMNFEXDNAFGZFZAKVTZKUSPFDYIBENJUDPXR");

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
    msg.setTimeStamp(0.119406848563);
    msg.setSource(32017U);
    msg.setSourceEntity(49U);
    msg.setDestination(49841U);
    msg.setDestinationEntity(3U);
    msg.state = 93U;
    msg.flags = 205U;
    msg.description.assign("CRIBPOHXNZAGALZPMEEGLSDDPWZGMHFDWIRDIWEQVGVQWBOJPFAVFNFFNTAJYJRELPAVVUYVFRDOHXXUOXQCBTZUBSFLXQIEHPMKDKMZNTWSZKOTAYVQWKNLGPHKXAWHWSZVMMIYTRUSFNTBXAIBOETPENCIAJSKHHCCGYMJLIUQTKYJZSREJTKXGIAESFBYFDWLDMEQMSORUUZJOUWRNDHG");

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
    msg.setTimeStamp(0.166438293282);
    msg.setSource(5856U);
    msg.setSourceEntity(41U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.91226046212);
    msg.setSource(8335U);
    msg.setSourceEntity(81U);
    msg.setDestination(63309U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.589732710116);
    msg.setSource(35851U);
    msg.setSourceEntity(242U);
    msg.setDestination(57105U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.959639884715);
    msg.setSource(24347U);
    msg.setSourceEntity(239U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(11U);
    msg.id = 39U;
    msg.label.assign("NUKPJILIPCKEEVIUGWMKSNFFHJZQMRNZTAYHKCXCIOTWLXXEFNOGUCRHDMDSDM");
    msg.component.assign("IMWUFGYTTPZQDCUVFCJISECZKTUNUJHDFPLRIPIDGGDXQQORPWKYZLJBGDRVEH");
    msg.act_time = 31357U;
    msg.deact_time = 34388U;

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
    msg.setTimeStamp(0.834650549571);
    msg.setSource(48777U);
    msg.setSourceEntity(246U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(65U);
    msg.id = 134U;
    msg.label.assign("MJZBEWRWPKUWVMFIUKHMGPVYLTAZNLNLPCVQXERHNPNEAPAPGICTRAXRBERVXNFFBGCZJEHUEJWKVWMZIUZYOILSRPNBTBQQHTVFKFFMHKGEVDBHQODTCUTTYODSDDVNRSJGKCRPOXIQILECGJOCSQXKMQZ");
    msg.component.assign("COXBHOFDRXNWZMSMAVJMYLYGSGXKCMEXUNPUUDYLNZHWFFQXTWCKPJAFNPOEYKIJIHMDWGCSRVWOJZGADLPFAXQYIOWDOAQQCHISBGNBVVLAJEGTKGKSQWYMRTJBRUUILKLEXHBJLOMNDOTCNAZBKZHETSLZHTLTAUVPWSIETDRGAFFZIXQPHZJVOFVLCFSWWQUBQMCEB");
    msg.act_time = 23987U;
    msg.deact_time = 14686U;

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
    msg.setTimeStamp(0.741482007925);
    msg.setSource(27106U);
    msg.setSourceEntity(199U);
    msg.setDestination(42958U);
    msg.setDestinationEntity(247U);
    msg.id = 155U;
    msg.label.assign("ZKHVOKBUDBFOJGCBISELDWQPJDEALTHPXXFLPPMRVJNICFKAMSVKGSQCOPPZUCOWIPPKBVSIBTYRXIMIVPMKBTINXQWPFOTCTKMYVYGAVNHMTLHLINRYGRKRRXZCUN");
    msg.component.assign("DCXMVGUJIVOFIFEJVWEPQDXKRRZPHWJMDBDBFQYTALXUUUZWLJIKHJHJKOATGKTYNSXXZSFYBTOIZVSAIEVEFRGMGANZVPNZUFXQJQZEFTBODPUCPYMRDGXUECNHYMLAWJGPRORZOVBCRLESIHKHQWWAMVVWNISCJAHGQXETISIINMKCBWDLT");
    msg.act_time = 54665U;
    msg.deact_time = 25762U;

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
    msg.setTimeStamp(0.794062597133);
    msg.setSource(19050U);
    msg.setSourceEntity(133U);
    msg.setDestination(25688U);
    msg.setDestinationEntity(220U);
    msg.id = 73U;

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
    msg.setTimeStamp(0.27193674634);
    msg.setSource(25703U);
    msg.setSourceEntity(104U);
    msg.setDestination(57396U);
    msg.setDestinationEntity(246U);
    msg.id = 177U;

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
    msg.setTimeStamp(0.913548154382);
    msg.setSource(49245U);
    msg.setSourceEntity(121U);
    msg.setDestination(10587U);
    msg.setDestinationEntity(227U);
    msg.id = 142U;

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
    msg.setTimeStamp(0.549125128682);
    msg.setSource(30384U);
    msg.setSourceEntity(66U);
    msg.setDestination(42470U);
    msg.setDestinationEntity(40U);
    msg.op = 5U;
    msg.list.assign("OEUUASVCUJMQZPZGISHCWLOPERXJMMDIRDFJZVVNXKHWRTOGKPHIAHUESYLFKRZWOYBFKQCBTGIRIVPAFJWJDFCQMEDAUNUSSVLRWFQKIPTZSBJEQYTONWLQKHHTIXVSCUAADLSYJBNPHFATGENJQRVTZNYILYMCMFDZVBUEYTLBWJUNAVTLKRORMXU");

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
    msg.setTimeStamp(0.504851941294);
    msg.setSource(41211U);
    msg.setSourceEntity(1U);
    msg.setDestination(24867U);
    msg.setDestinationEntity(67U);
    msg.op = 97U;
    msg.list.assign("ERCHSOBULCPPLTPLYFFEDNXMDNJSVHZECKDLNNSTOYRQOIPDACUTBWFLPPZQBCGHULXAKMWQZVYNOFMKWVBXCRRXZVGQXQG");

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
    msg.setTimeStamp(0.600089291717);
    msg.setSource(38547U);
    msg.setSourceEntity(254U);
    msg.setDestination(11535U);
    msg.setDestinationEntity(32U);
    msg.op = 114U;
    msg.list.assign("IWCMQKUUPHQRUKARZMXNFHFJSRDWPZYNHOTMTEQTUQHJELSUYWPXZJDGVXUZSGWHJRDHORIUTPSVGNSBDTVLNSCECRKKZMCIAIDTOGYMMZBGX");

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
    msg.setTimeStamp(0.198037804175);
    msg.setSource(42823U);
    msg.setSourceEntity(205U);
    msg.setDestination(61285U);
    msg.setDestinationEntity(190U);
    msg.value = 157U;

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
    msg.setTimeStamp(0.612206909451);
    msg.setSource(42292U);
    msg.setSourceEntity(147U);
    msg.setDestination(16210U);
    msg.setDestinationEntity(222U);
    msg.value = 62U;

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
    msg.setTimeStamp(0.344248113698);
    msg.setSource(60032U);
    msg.setSourceEntity(181U);
    msg.setDestination(43024U);
    msg.setDestinationEntity(212U);
    msg.value = 94U;

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
    msg.setTimeStamp(0.754218473816);
    msg.setSource(14643U);
    msg.setSourceEntity(152U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(152U);
    msg.consumer.assign("TYLNFUFYBNJKVLGMZOUHRMUPAIBZXWTHXTKFJS");
    msg.message_id = 4281U;

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
    msg.setTimeStamp(0.203227209264);
    msg.setSource(60128U);
    msg.setSourceEntity(244U);
    msg.setDestination(53765U);
    msg.setDestinationEntity(81U);
    msg.consumer.assign("RVGTIFWVSR");
    msg.message_id = 54222U;

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
    msg.setTimeStamp(0.982181490444);
    msg.setSource(43910U);
    msg.setSourceEntity(95U);
    msg.setDestination(54477U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("GYSORNWOYKEXNLHJKWADVTYOXMMTWOZSIFESAPBZGCDCJYQYHGWGBKTUIEHGIGPDCLLTBURSRQMDMHUDILVZURDJNGQMVLLCMGOBPAGZVAQEYSWBTLXXQOPAQWINZEV");
    msg.message_id = 61906U;

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
    msg.setTimeStamp(0.764727789291);
    msg.setSource(18475U);
    msg.setSourceEntity(33U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(181U);
    msg.type = 198U;

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
    msg.setTimeStamp(0.593820139778);
    msg.setSource(20705U);
    msg.setSourceEntity(108U);
    msg.setDestination(7763U);
    msg.setDestinationEntity(227U);
    msg.type = 36U;

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
    msg.setTimeStamp(0.597012420487);
    msg.setSource(25047U);
    msg.setSourceEntity(140U);
    msg.setDestination(14993U);
    msg.setDestinationEntity(57U);
    msg.type = 200U;

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
    msg.setTimeStamp(0.802589687044);
    msg.setSource(26292U);
    msg.setSourceEntity(183U);
    msg.setDestination(31212U);
    msg.setDestinationEntity(210U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.811062154199);
    msg.setSource(52973U);
    msg.setSourceEntity(245U);
    msg.setDestination(53710U);
    msg.setDestinationEntity(150U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.616070465494);
    msg.setSource(43550U);
    msg.setSourceEntity(180U);
    msg.setDestination(29511U);
    msg.setDestinationEntity(222U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.760355655808);
    msg.setSource(25787U);
    msg.setSourceEntity(193U);
    msg.setDestination(2542U);
    msg.setDestinationEntity(153U);
    msg.total_steps = 97U;
    msg.step_number = 24U;
    msg.step.assign("KHFSOOEBSMNXRCUHGPEOTGEDDQGHXDKXCUNQZLVQNHNIVYMFVRYYFZJXJOYMUEDVTFPIGCGWGAAGNPMPTSHPWZZJOWKJUCEZKLBABXWAHWSKNUCLUTQRVSCVYOMYIXWITZSWJDAMTKNCIPXJZBFMMRAJUYEIGACNMUY");
    msg.flags = 46U;

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
    msg.setTimeStamp(0.721947712918);
    msg.setSource(32771U);
    msg.setSourceEntity(6U);
    msg.setDestination(52020U);
    msg.setDestinationEntity(238U);
    msg.total_steps = 204U;
    msg.step_number = 136U;
    msg.step.assign("SFBWFZUXUWFTJSBLUZPSHMGYIBCFGGFPYVZQFZVBHLXAIFWEYISBTCLWDLWXQRLKRNJRMRCYJQXQCQRYPKVOAJVQMKLWTIYCCPGMXCBDJZTYSKDHOWUBBOZEKENJMOGRDYIIOTIHVKVZASCYUSDPIVHXLNRSAWWSGQORGADTN");
    msg.flags = 42U;

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
    msg.setTimeStamp(0.125429179367);
    msg.setSource(48162U);
    msg.setSourceEntity(106U);
    msg.setDestination(1733U);
    msg.setDestinationEntity(144U);
    msg.total_steps = 226U;
    msg.step_number = 26U;
    msg.step.assign("NXXKDPHYZLTOTGXASDSCMIWPYBOWLUFJKUDELUABDXZA");
    msg.flags = 247U;

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
    msg.setTimeStamp(0.302043126608);
    msg.setSource(6772U);
    msg.setSourceEntity(46U);
    msg.setDestination(38279U);
    msg.setDestinationEntity(148U);
    msg.state = 138U;
    msg.error.assign("JIEQYIWUYEPTKZHHANLTZODDJTNGPPQXJZCRKANEEEYOJZWHTQVUCUMEAAHWFFDKKBTVGYHAMTDODRBKMXYSNDXPOVMZPTOYZASSNFALFWUPVXLGJHDNQRORPLWVHFVLUNWAZXKYINCQCUHQKOMRBUWRRCGVBLRYAZPOZBQJQSPKTSKJXNELFVEHBGIVCBHGUGXFXWMIIRAWCUBOTZPSCCFSKBQEESUITRJXVFMQMLGLSJCDNIJYLDSBFXO");

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
    msg.setTimeStamp(0.922933780959);
    msg.setSource(1816U);
    msg.setSourceEntity(179U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(141U);
    msg.state = 161U;
    msg.error.assign("GJZKJBCWMGKSZPUPOWBAXYFNHQVHAXQFKIKFQWXKYOTOITZHHTYSZLVOFRVXIEQAYPZZZENQVCRRDCTHHQWPCGKHDDZDLJULBZSSEYYXLABGEAJUUFXUNODJWRTICKTUJGBFDMANVCOMD");

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
    msg.setTimeStamp(0.901124133002);
    msg.setSource(45308U);
    msg.setSourceEntity(199U);
    msg.setDestination(14785U);
    msg.setDestinationEntity(133U);
    msg.state = 66U;
    msg.error.assign("NPVCRWBYBZTLNAHSTUHVOMSKABKBLCLDXWDGIETJTQZEQRDDPYKVNMPYRZIMZPUDSOYEPGWPJMFOJITKARXFUFOFMTRVQJUMHFAIFUZLGINTYSWUQXQNBKQWNVXIGRTHBEHDXZFGZEOIAEXVSSVDAQJJXACKCLLHJYWTEWEBZYUFPGZQDHOSTROLKRBAEU");

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
    msg.setTimeStamp(0.573808693685);
    msg.setSource(23084U);
    msg.setSourceEntity(101U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.419915327882);
    msg.setSource(19074U);
    msg.setSourceEntity(228U);
    msg.setDestination(26151U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.28675832411);
    msg.setSource(42468U);
    msg.setSourceEntity(212U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.212424423912);
    msg.setSource(42526U);
    msg.setSourceEntity(68U);
    msg.setDestination(48788U);
    msg.setDestinationEntity(75U);
    msg.op = 84U;
    msg.speed_min = 0.647434050565;
    msg.speed_max = 0.76772712821;
    msg.long_accel = 0.571270038553;
    msg.alt_max_msl = 0.192377173761;
    msg.dive_fraction_max = 0.418174764687;
    msg.climb_fraction_max = 0.485731298912;
    msg.bank_max = 0.678725578776;
    msg.p_max = 0.939973969735;
    msg.pitch_min = 0.291164692686;
    msg.pitch_max = 0.926770238853;
    msg.q_max = 0.444252004525;
    msg.g_min = 0.573688162361;
    msg.g_max = 0.685041016266;
    msg.g_lat_max = 0.701778064493;
    msg.rpm_min = 0.930191502242;
    msg.rpm_max = 0.958632554416;
    msg.rpm_rate_max = 0.179055246855;

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
    msg.setTimeStamp(0.485215014494);
    msg.setSource(57394U);
    msg.setSourceEntity(104U);
    msg.setDestination(15094U);
    msg.setDestinationEntity(204U);
    msg.op = 58U;
    msg.speed_min = 0.0133374799586;
    msg.speed_max = 0.529944475274;
    msg.long_accel = 0.043482645665;
    msg.alt_max_msl = 0.0487498558647;
    msg.dive_fraction_max = 0.767340924824;
    msg.climb_fraction_max = 0.504977807657;
    msg.bank_max = 0.315270532568;
    msg.p_max = 0.81937351844;
    msg.pitch_min = 0.692076664922;
    msg.pitch_max = 0.820897016839;
    msg.q_max = 0.318270791749;
    msg.g_min = 0.524966113351;
    msg.g_max = 0.876070070133;
    msg.g_lat_max = 0.3462872497;
    msg.rpm_min = 0.643377007274;
    msg.rpm_max = 0.551964661509;
    msg.rpm_rate_max = 0.020594734804;

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
    msg.setTimeStamp(0.0602885257827);
    msg.setSource(37625U);
    msg.setSourceEntity(57U);
    msg.setDestination(3407U);
    msg.setDestinationEntity(204U);
    msg.op = 225U;
    msg.speed_min = 0.879812022949;
    msg.speed_max = 0.981376805378;
    msg.long_accel = 0.189070736524;
    msg.alt_max_msl = 0.965013538957;
    msg.dive_fraction_max = 0.0158085665074;
    msg.climb_fraction_max = 0.396714557002;
    msg.bank_max = 0.608312933513;
    msg.p_max = 0.58959260385;
    msg.pitch_min = 0.830762769837;
    msg.pitch_max = 0.217238690407;
    msg.q_max = 0.0344543229124;
    msg.g_min = 0.185441314541;
    msg.g_max = 0.692009006724;
    msg.g_lat_max = 0.939725613086;
    msg.rpm_min = 0.463230722163;
    msg.rpm_max = 0.111586868355;
    msg.rpm_rate_max = 0.0861912814938;

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
    msg.setTimeStamp(0.413197811894);
    msg.setSource(63564U);
    msg.setSourceEntity(36U);
    msg.setDestination(38693U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.21779850583);
    msg.setSource(1599U);
    msg.setSourceEntity(25U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.637601998535);
    msg.setSource(1205U);
    msg.setSourceEntity(98U);
    msg.setDestination(52065U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.65538951391);
    msg.setSource(1549U);
    msg.setSourceEntity(161U);
    msg.setDestination(38320U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.167983955719;
    msg.lon = 0.442163703015;
    msg.height = 0.938825473884;
    msg.x = 0.917651783101;
    msg.y = 0.980663733469;
    msg.z = 0.706930314825;
    msg.phi = 0.00700249791035;
    msg.theta = 0.971523575952;
    msg.psi = 0.0492652642019;
    msg.u = 0.108159782551;
    msg.v = 0.669093976461;
    msg.w = 0.2556420941;
    msg.p = 0.333560184818;
    msg.q = 0.183110304651;
    msg.r = 0.878909448168;
    msg.svx = 0.290392230951;
    msg.svy = 0.241022949668;
    msg.svz = 0.739791099687;

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
    msg.setTimeStamp(0.481601640582);
    msg.setSource(61527U);
    msg.setSourceEntity(141U);
    msg.setDestination(64412U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.73192567112;
    msg.lon = 0.115712998056;
    msg.height = 0.861638001072;
    msg.x = 0.290214480263;
    msg.y = 0.920255962548;
    msg.z = 0.945419886601;
    msg.phi = 0.206678801615;
    msg.theta = 0.988987854407;
    msg.psi = 0.344072431677;
    msg.u = 0.617417112111;
    msg.v = 0.0180816731383;
    msg.w = 0.983491873823;
    msg.p = 0.213029725765;
    msg.q = 0.432008067339;
    msg.r = 0.979199768053;
    msg.svx = 0.284435191017;
    msg.svy = 0.166118860717;
    msg.svz = 0.522235581589;

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
    msg.setTimeStamp(0.100446599681);
    msg.setSource(10306U);
    msg.setSourceEntity(8U);
    msg.setDestination(7913U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.887569502788;
    msg.lon = 0.774630370818;
    msg.height = 0.155853307029;
    msg.x = 0.431764078111;
    msg.y = 0.361927657786;
    msg.z = 0.0572199806936;
    msg.phi = 0.737222355553;
    msg.theta = 0.120390829665;
    msg.psi = 0.736888304917;
    msg.u = 0.175309498282;
    msg.v = 0.218552915468;
    msg.w = 0.213093775299;
    msg.p = 0.646276572003;
    msg.q = 0.0840595016682;
    msg.r = 0.0610664499226;
    msg.svx = 0.903715800243;
    msg.svy = 0.980028689036;
    msg.svz = 0.478037423336;

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
    msg.setTimeStamp(0.955042969081);
    msg.setSource(42172U);
    msg.setSourceEntity(202U);
    msg.setDestination(31949U);
    msg.setDestinationEntity(217U);
    msg.op = 160U;
    msg.entities.assign("CVOETNBNMVBYNBMDDGXISMQADOLIUCGQARDYHOLUHMJKFKHZHMIIAPQWTQPOVVZAKPRBWGXJYVTUGPPET");

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
    msg.setTimeStamp(0.54233445452);
    msg.setSource(34793U);
    msg.setSourceEntity(51U);
    msg.setDestination(27244U);
    msg.setDestinationEntity(154U);
    msg.op = 227U;
    msg.entities.assign("JYOJOQTPXVCTQWHOGXNQBZTWPMYWKYVVRGTJPMQNJDGRFBQNEAJCLFHIEITJMEIQVBRQDLMPIUNMHRUDREOBFLKMKVTKFEXXSAPLIJJBKMGDYNXYAUCDXZSZBSSIBDWFEDKCYWUOYVEPLDWVFCXZASPSAUXCDZLCANATGXMIIUWUTGZQNYKZKOKVSHRQTHXBUAIHLBEWKPNHOZCGDYQO");

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
    msg.setTimeStamp(0.448250393068);
    msg.setSource(64086U);
    msg.setSourceEntity(211U);
    msg.setDestination(51344U);
    msg.setDestinationEntity(45U);
    msg.op = 58U;
    msg.entities.assign("LFLFICHHGCOQFXVWGOVZSAHZAYFVBXMLJROUXGAAQTOJCCYOCETLDJTTXJSAYSGLVMPUEONRBUKNJUMHVYRZBZFNAALLYDKTXNPDPXQRMUGREKWYVFFDGHWBJZJAIQIVVTXEMHOFCEVPEDSGGLPZMHKBBCRWRWNXSKOGLXFJYJZKYSBBZKZWKVUZOJEQNITNDTDDMWQXDWFPUUKNMNTRNHQWIHSQDQCPMKSIPIPAIIBUYLREQ");

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
    msg.setTimeStamp(0.952215665911);
    msg.setSource(4605U);
    msg.setSourceEntity(217U);
    msg.setDestination(17129U);
    msg.setDestinationEntity(138U);
    msg.type = 14U;
    msg.speed = 33659U;
    const char tmp_msg_0[] = {-49, -59, -71, -80, 15, -122, 78, 34, -5, 5, -105, 108, 0, -99, -1, -64, 26, -64, 6, 15, -99, -93, 67, 125, -115, -86, -68, 18, 53, -45, -109, -53, 22, -116, -77, -85, -115, -72, 56, -39, -54, 115, -88, 35, 103, -102, 100, 52, -86, 101, -107, 2, -29, -51, -75, -5, -20, 92, -32, 61, -75, -64, -47, 95, -36, -101, 89, -75, 55, 71, 20, -69, -78, -1, -3, -111, -76, 80, -96, 14, 62, -2, 13, 10, -86, -29, -105, -42, 31, 67, 28, -48, 24, -31, -63, 98, 24, 44, 87, 25, -95, 104, -25, 24, -33, -61, 91, -15, -55, -31, -7, -51, 44, -32, -80, 36, 52, -90, -30, 13, 38, 70, -34, 26, -38, -52, -8, 19, -100, -78, 79, 116, 35, -104, 12, -1, 30, -117, -48, 29, 35, -82};
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
    msg.setTimeStamp(0.554821961457);
    msg.setSource(50986U);
    msg.setSourceEntity(37U);
    msg.setDestination(21581U);
    msg.setDestinationEntity(106U);
    msg.type = 26U;
    msg.speed = 25571U;
    const char tmp_msg_0[] = {-40, 9, -82, -115, 27, 106, 52, 28, -101, -63, 19, -19, -38, -60, -28, -64, -69, -113, 113, 12, 71, 101, 43, 4, -15, 28, 93, -56, 60, 45, 106, 18, -91, 123, -45, 23, -119, -36, -14, -81, -102, -8, 124, 59, -88, 76, 61, -88, -55, -43, 29, -94, -13, -9, 106, 31, -5, -13, -83, 7, -114, -113, -105, 10, 37, -107, -93, 39, 108, -47, -37, -68, -72, 106, 49, 60, 91, 101, 48, 62, 50, -20, -89, 20, -21, 11, -10, -115, 44, -115, 34, 89, 22, 47, 9, 98, -3, 61, -66, 81, 71, 34, -43, -30, 110, 57, 41, -109, 13, -5, 69, -3, 110, -3, 22, -18, 14, -10, -127, -10, -46, -62, -99, -20, -9, -104, -81, 45};
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
    msg.setTimeStamp(0.927363017853);
    msg.setSource(33191U);
    msg.setSourceEntity(134U);
    msg.setDestination(29936U);
    msg.setDestinationEntity(128U);
    msg.type = 178U;
    msg.speed = 50781U;
    const char tmp_msg_0[] = {-86, -59, 113, -105, -37, 8, 39, -41, 58, -5, -40, 102, 45, 30, 3, 2, 24, 76, -16, -77, -51, -19, 43, -50, 39, 79, -117, -2, 101};
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
    msg.setTimeStamp(0.66269130603);
    msg.setSource(7745U);
    msg.setSourceEntity(140U);
    msg.setDestination(62536U);
    msg.setDestinationEntity(169U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.625954308165;
    msg.bank2p_pgain = 0.358423156118;

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
    msg.setTimeStamp(0.0575610728112);
    msg.setSource(25340U);
    msg.setSourceEntity(253U);
    msg.setDestination(3714U);
    msg.setDestinationEntity(2U);
    msg.op = 69U;
    msg.tas2acc_pgain = 0.300739846074;
    msg.bank2p_pgain = 0.766772405943;

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
    msg.setTimeStamp(0.228939285608);
    msg.setSource(37974U);
    msg.setSourceEntity(96U);
    msg.setDestination(45138U);
    msg.setDestinationEntity(159U);
    msg.op = 106U;
    msg.tas2acc_pgain = 0.866018545999;
    msg.bank2p_pgain = 0.502127067974;

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
    msg.setTimeStamp(0.698832810536);
    msg.setSource(28942U);
    msg.setSourceEntity(184U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(98U);
    msg.available = 2477790032U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.244593998018);
    msg.setSource(42079U);
    msg.setSourceEntity(98U);
    msg.setDestination(56145U);
    msg.setDestinationEntity(75U);
    msg.available = 3934810563U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.904759833159);
    msg.setSource(8007U);
    msg.setSourceEntity(243U);
    msg.setDestination(8100U);
    msg.setDestinationEntity(181U);
    msg.available = 1146120387U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.387000980493);
    msg.setSource(39616U);
    msg.setSourceEntity(239U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(100U);
    msg.op = 104U;
    msg.snapshot.assign("OEWWVSVNMEODFQULUQPBEZHCEZUISGHYPXVHLBPJFEDYIITELCMPAGD");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("EBFKAFCDJGIETMYDZCPKEPXCDWVUGZZBRJKNSEEUAJULSRANXNRVIDIBVDMWKLVNMFQNIROTWXHLNOSAKKMJCOJIRELYGAXNADVFJXGQUNXNLUCRZJGIZTHBPOMYKHDBHPVCUWPURSMOEWYZQXRCBQTTHLXRMDYLIOHJGTILHJVZFGCHBTJFYXAPQUGLAWOUIMYBKHZTKBYHYCPWWMSQNLVWAQFSOEDUMPCVSW");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("NSZLKWRKBUSPZQQNSTLTXYXXUDBKHAHDQERQMHWMYPFJMJQNLOFKOVOWJWTLZCHOCUCXIGKVFNUBPVMDXROZKCVPJLXYMABBDTEPRCBPBPWLAHESBGGKVUKERAZDXUELJZZHKOHTDOQOTFWRHAOIOWEDRTGDJINQKINGNJVGBYTUYIMSDURSZJYGMYWMZGQSFLAPQFUREEYYLAYAVIHXFCVZMSIASEEPTCVRXJINIVCXCB");
    tmp_tmp_msg_0_0.predicate.assign("OTZIECJGOUILIEEEKBOIJSNJZXKRJLSHQTNXHHWOYQABUVLITZRASGNXDVIOPXUKTG");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.893039147601);
    msg.setSource(10817U);
    msg.setSourceEntity(219U);
    msg.setDestination(24746U);
    msg.setDestinationEntity(5U);
    msg.op = 174U;
    msg.snapshot.assign("MQGKFMKWBLMMPPCQRSCKSNMNAKRHYVXGWAYDIRWKGODIMDBQUOOJODLJNSXEQSJSVVWQSOHZCZWGUHGOPFQKTBLZAZHTGWHAJJCBJHJDZMOOWYVDNVGYDGDTRPUIWMLRNXSPFZSH");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 16549U;
    tmp_msg_0.lat = 0.132943843045;
    tmp_msg_0.lon = 0.831679958319;
    tmp_msg_0.z = 0.257747763506;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.duration = 64513U;
    tmp_msg_0.speed = 0.113804162699;
    tmp_msg_0.speed_units = 100U;
    tmp_msg_0.type = 95U;
    tmp_msg_0.radius = 0.661626769627;
    tmp_msg_0.length = 0.373199798329;
    tmp_msg_0.bearing = 0.634787601126;
    tmp_msg_0.direction = 114U;
    tmp_msg_0.custom.assign("RGGCARRXPROQSCUWJWHLWEYTLEEKUBNWTOZNMNYAIMQVPJGFBROBMEIYKSTIODUQBDQEXRPLUQRCWXPNS");
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
    msg.setTimeStamp(0.100313995079);
    msg.setSource(8785U);
    msg.setSourceEntity(38U);
    msg.setDestination(23713U);
    msg.setDestinationEntity(191U);
    msg.op = 82U;
    msg.snapshot.assign("VIOVJFKZIJHOHXEVZAYIOPJTYLKLOFDGUYWGIUBVHBBYTARRZBMZPFLWREBPHQJMVMHLFBBVYIUFRWGZMYGSAFQQSJJOKXQEHYGNJTMRLEXUTUHVREYSSMGFPCCTNQUFADZCU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NKBSUTKZQRNDMXYEWUTUYQIWRGZRKCUTNRXNLOZDGLSDLPXQBFOPOUVCLBINVMKVYCNXBZRMMDBZPANTGOJILYLMHTPJUEAXXICKWIOVFCLBFSKJPFGWUMKYHBQXEOBQWYMVGPXVMIUWAADAMKDAOGZIQAYRHUHRSWBICLXRGP");
    tmp_msg_0.sys_type = 232U;
    tmp_msg_0.owner = 58535U;
    tmp_msg_0.lat = 0.376254069175;
    tmp_msg_0.lon = 0.478358902808;
    tmp_msg_0.height = 0.485131366779;
    tmp_msg_0.services.assign("XUKUDPGPXCSHZREDILWHGBUQNECAOUQAFEQSZCJAPLQLTNCVVKSHSWNYIAUHZOXLIHHNXPNFQUXWIZKTZSWQJWTINFQRNKWMRFOMRLEPDTVKULZAJBIFOIRNBZWUVSGLYOVWLDEDADPWBLRMYGTMLZZXOZDAOSCAJMSCCQTFTJXNMOKMVYXMYGYRXIDK");
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
    msg.setTimeStamp(0.698835169562);
    msg.setSource(42599U);
    msg.setSourceEntity(209U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(61U);
    msg.op = 177U;
    msg.name.assign("JCHKHGTZHBVSPAMQBWCNGJPBGKXERIHILSOYKISFBSDOAUAFDVOJND");

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
    msg.setTimeStamp(0.64215714259);
    msg.setSource(29809U);
    msg.setSourceEntity(19U);
    msg.setDestination(21965U);
    msg.setDestinationEntity(169U);
    msg.op = 58U;
    msg.name.assign("JVSKWMUTPCAOISQNTSTWMVHEVOOHPQEZAEQUFRIBDXXOUHRYKWQJEZGITXDUNBXVAFHWCLCBTNKMMHBWUGLDXFXXFXJVBTXWLYYSGNVBIPEKWMCGCMORGLIAAXAYKZAQIBTWZ");

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
    msg.setTimeStamp(0.0948598532097);
    msg.setSource(27473U);
    msg.setSourceEntity(227U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(16U);
    msg.op = 18U;
    msg.name.assign("NXOLTPSOKIRKZLNTMWTTSYVXBWILYPVRHMOJWFNYZWQQUMGZCGMTFMEQCQCQXHIKWFWVUAVRMOJGVOBLUSDALOIBJ");

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
    msg.setTimeStamp(0.328689889798);
    msg.setSource(58110U);
    msg.setSourceEntity(236U);
    msg.setDestination(20336U);
    msg.setDestinationEntity(110U);
    msg.type = 143U;
    msg.htime = 0.816749855755;
    msg.context.assign("DSAZNXIJYPNTPVPQVHOWPTXBXIUYJGYRHYZFALEWM");
    msg.text.assign("PIFFCEYMVFSDRVNLZNYWHYFWEYUSLNJXKACTOUJVXLWUPBBEELGBZAJWGWYMGCZAMIPOFQRIHXNXHFOSPEDOMGDXDSOPRNRLPTFWECJYKAMRJRTJVKOX");

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
    msg.setTimeStamp(0.270302818554);
    msg.setSource(56902U);
    msg.setSourceEntity(113U);
    msg.setDestination(5357U);
    msg.setDestinationEntity(147U);
    msg.type = 32U;
    msg.htime = 0.649527277115;
    msg.context.assign("UWUFWXAEMECCRIBMSKNLZGCQMFZKHWEDKNJAKDQ");
    msg.text.assign("RTQJTWYWRBLGVTKJEANEYVWFVLKXKPSRIRYNXZWSWHAJIODWDUDUANJMISDCYNHRACVBZLANTSJCZXJISEYOZTFPFOGUCCNLHUXELMPMDPOEQQFFHZVVLXWRPIXLGGWQMGZGGKJIFOYPUZLEEJTGZBEPKWQDOOHMVMMBTSMWQZHXDBQJMGXYAUHOUOFEKSVNLCP");

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
    msg.setTimeStamp(0.245420088144);
    msg.setSource(41500U);
    msg.setSourceEntity(205U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(114U);
    msg.type = 161U;
    msg.htime = 0.84597727009;
    msg.context.assign("AHXUIDZGYYMHZJJZNFBCATCSJTSYCHTDW");
    msg.text.assign("YUIZUQQKWLTCFUKOAJYHLOLQFPFHDYFOLKICQMVOCHGSPGTACMNWMYEUPROGVNJZNRYAIRSADUDTIGIIEBOGCWWOBKBRGBOEGJEUSMXEVCPKVQPJPXRSEBXAOQNQNG");

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
    msg.setTimeStamp(0.0802776220868);
    msg.setSource(47252U);
    msg.setSourceEntity(251U);
    msg.setDestination(51002U);
    msg.setDestinationEntity(164U);
    msg.command = 96U;
    msg.htime = 0.182261317525;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.htime = 0.282805908905;
    tmp_msg_0.context.assign("WQAXJWYEEDFVYAGFXYXSAUYAYKACHLIUJCZQCDNIQGTVU");
    tmp_msg_0.text.assign("BWJRTGGRXSNIBSHKKGMFFWSQFCBEURHXUENVCALYJVZDHLXVYESUMZLEMHOJPCNYLNWDTFGTWADPOIXHNSPTITRLAEFDADLJRHIHYDYXTSGEBHIRPGKRKBTVDUACNJSDGVPZZWESZZMUOLQLPMQVWPXJCEWXMBZLCNAIFITIQJEIDFORBBCOQOOCMQXQNBNJHPOQRMM");
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
    msg.setTimeStamp(0.363313394486);
    msg.setSource(56319U);
    msg.setSourceEntity(164U);
    msg.setDestination(23074U);
    msg.setDestinationEntity(56U);
    msg.command = 187U;
    msg.htime = 0.887771060082;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 124U;
    tmp_msg_0.htime = 0.81793880825;
    tmp_msg_0.context.assign("YPNGWYQRDLBFJPFSQNULKBUMCJITKFMPTCHMVWBVRLADIGROHYIASXCJIGAFRKWFZKUXSXGVQLOWTJOTFIGOTOBZRCLZLHEPEHACMNSZADKUJSCKZSGQICUZWHXNTVILFJSJYREYZRTBDMNGUMIYJDOQVOAYBPEBEHVCSAZMNDDBMQTBDOVQSDGIVJEWXUKAPXBTFUKY");
    tmp_msg_0.text.assign("CRRBJUYJKVQAUMHIRHNRTLPVJJUAKYMAQGJJGVYQZAWTLWSRWZPDXTKVZSFHDPLTWQNZYGANBNCMFTTSQUWFZDGUKDLZDBOYVXCOFJIIKHXRGOLNPVUPRXYYCAEHKBIIXFUZRGSHXBZIGHFSMNPLWBEVEQOEBUQQ");
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
    msg.setTimeStamp(0.96256579479);
    msg.setSource(42787U);
    msg.setSourceEntity(205U);
    msg.setDestination(26729U);
    msg.setDestinationEntity(201U);
    msg.command = 247U;
    msg.htime = 0.75328734249;

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
    msg.setTimeStamp(0.420276376166);
    msg.setSource(22285U);
    msg.setSourceEntity(253U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(152U);
    msg.op = 39U;
    msg.file.assign("NFIHUQQDPGQWNCKKKHD");

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
    msg.setTimeStamp(0.870144823694);
    msg.setSource(723U);
    msg.setSourceEntity(59U);
    msg.setDestination(62825U);
    msg.setDestinationEntity(179U);
    msg.op = 10U;
    msg.file.assign("XRVDGJVVPQXKJCQQHRBCTVTLJWUQZDTZKSBDOHYOEIMOTXUKHUNAVSKMEVFNXQDGBUCDCAFGEGPAPREXBJIYDGZQXVTWEICASESMWBWENDOCIZPMPJATUNYJXIZGBRMHADTFKZRGDLXPGIJLYNAMLODLJWYZWQFULJAHHAFQVCNVBYRBUMXROOPXSBRZNKKILLONWQHIEFSUMSBUFTWYJGKGCFP");

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
    msg.setTimeStamp(0.555035045224);
    msg.setSource(28538U);
    msg.setSourceEntity(11U);
    msg.setDestination(16229U);
    msg.setDestinationEntity(186U);
    msg.op = 192U;
    msg.file.assign("ZUGGMWJTSCIZCCGLMAIOAOPGTOGYXXNLSGLDSSFUEKDBJZWQMANYHCXYVYEBZIFUJUSWWKCRSELUFDSKMOZCBFNFECQJKQSITRUCQDRIBEQNIELQERUFZQBSNOQEHJXTDJMXCPVZMTEFZHHFTSVPLBHTGFOYAV");

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
    msg.setTimeStamp(0.769799211684);
    msg.setSource(43690U);
    msg.setSourceEntity(93U);
    msg.setDestination(38603U);
    msg.setDestinationEntity(42U);
    msg.op = 19U;
    msg.clock = 0.49025315528;
    msg.tz = 85;

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
    msg.setTimeStamp(0.239791834902);
    msg.setSource(22544U);
    msg.setSourceEntity(40U);
    msg.setDestination(51802U);
    msg.setDestinationEntity(188U);
    msg.op = 133U;
    msg.clock = 0.192481322136;
    msg.tz = 29;

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
    msg.setTimeStamp(0.495988582881);
    msg.setSource(40849U);
    msg.setSourceEntity(3U);
    msg.setDestination(33998U);
    msg.setDestinationEntity(26U);
    msg.op = 4U;
    msg.clock = 0.0899958645532;
    msg.tz = 106;

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
    msg.setTimeStamp(0.987188004883);
    msg.setSource(38435U);
    msg.setSourceEntity(73U);
    msg.setDestination(54151U);
    msg.setDestinationEntity(56U);
    msg.conductivity = 0.666164743018;
    msg.temperature = 0.96082765127;
    msg.depth = 0.766059085016;

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
    msg.setTimeStamp(0.0882627021044);
    msg.setSource(31964U);
    msg.setSourceEntity(21U);
    msg.setDestination(39676U);
    msg.setDestinationEntity(74U);
    msg.conductivity = 0.869207657631;
    msg.temperature = 0.342272813226;
    msg.depth = 0.0506943114712;

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
    msg.setTimeStamp(0.352999627813);
    msg.setSource(20938U);
    msg.setSourceEntity(195U);
    msg.setDestination(39279U);
    msg.setDestinationEntity(47U);
    msg.conductivity = 0.625146635558;
    msg.temperature = 0.573021840353;
    msg.depth = 0.851682325532;

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
    msg.setTimeStamp(0.299716396797);
    msg.setSource(57734U);
    msg.setSourceEntity(137U);
    msg.setDestination(17056U);
    msg.setDestinationEntity(127U);
    msg.altitude = 0.010952001723;
    msg.roll = 47798U;
    msg.pitch = 57210U;
    msg.yaw = 29466U;
    msg.speed = -390;

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
    msg.setTimeStamp(0.323589622394);
    msg.setSource(14978U);
    msg.setSourceEntity(163U);
    msg.setDestination(16127U);
    msg.setDestinationEntity(45U);
    msg.altitude = 0.0268165041619;
    msg.roll = 35602U;
    msg.pitch = 37308U;
    msg.yaw = 55372U;
    msg.speed = -3205;

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
    msg.setTimeStamp(0.96046225502);
    msg.setSource(60300U);
    msg.setSourceEntity(169U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(121U);
    msg.altitude = 0.522614552823;
    msg.roll = 28651U;
    msg.pitch = 15036U;
    msg.yaw = 11456U;
    msg.speed = 19595;

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
    msg.setTimeStamp(0.23772353859);
    msg.setSource(27685U);
    msg.setSourceEntity(109U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(35U);
    msg.altitude = 0.162691604801;
    msg.width = 0.30525787958;
    msg.length = 0.840971701481;
    msg.bearing = 0.591616018437;
    msg.pxl = 23218;
    msg.encoding = 115U;
    const char tmp_msg_0[] = {-3, -28, -111, 31, -56, -104, -38, -23, -20, 25, -52, -47, 27, 38, 125, 97, -30, -104, 87, 121, 110, 6, 61, 14, -89, -37, -25, 123, -51, 16, 69, 47, 39, 126, 114, 105, 98, -41, 33, 60, 3, -9, 63, 36, -68, -19, -104, -109, 35, -92, -81, 78, 12, -126, 35, 73, 81, 91, -23, -60, -92, -52, 41, -84, -30, 113, 91, -77, -37, 43, -79, 123, -55, 13, -109, 121, -83, -66, -108, -113, 28, -20, 16, 112, -24, 103, -17, 74, -112, -91, -113, 47, -37, 27, 44, 100, 0, 53, 82, 102, 54, 37, -2, -102, -1, -16, -125, 80, -84, 90, 20, 55, 26, 56, 41, 76, 48, 26, 39, 13, 33, 121, 55, 126, 126, 113, -87, 13, -116, -66, -20, 121, 43, 115, 2, 122, -2, -9, -77, -127, -5, 54, -84, 120, 48, 74, 24, 118, -95, -20, -121, 19, -84, 107, -11, 41, 51, 58, -72, -53, 88, -9, 88, 58, 30, 120, 77, -17, 1, 31, 126, -17, 124, -22, 33, 107, 82, 87, -64, -54, -7, -82, 43, 121, 77, 106, -4, 12, 55, -89, -49, 21, -50, 23, 29, 22, 48, 19, -59, 23, -86, -110, -107, -66, -68, 25, -79, -120, 32, 17, 92, -1};
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
    msg.setTimeStamp(0.886038552932);
    msg.setSource(7425U);
    msg.setSourceEntity(64U);
    msg.setDestination(56768U);
    msg.setDestinationEntity(78U);
    msg.altitude = 0.0037207661974;
    msg.width = 0.573036789849;
    msg.length = 0.563279084832;
    msg.bearing = 0.451967404553;
    msg.pxl = -30310;
    msg.encoding = 144U;
    const char tmp_msg_0[] = {-40, 102, -62, 88, -64, -11, -114, 14, 98, -98, 65, -99, 25, -45, 6, -94, -78, -29, 111, -127, 1, 117, 12, -60, -85, -56, 17, 56, 39, -126, 27, -38, 25, -75, 53, 106, -113, -95, 42, -22, -111, -122, -56, -117, -14, 81, -34, -80, -37, 9, 17, -32, 23, -118, 44, -16, -5, -12, 58, -107, 20, 111, 14, 76, -80, -74, 27, 70, 113, -100, -62, -5, 62, -113, 100, 120, -44, 85, -72, 45, -68, 64, -92, 107, 125, -128, -81, 45, -101, -31, -89, -82, -28, -79, 116, -121, 97, -8, -45, 20, 15, -74, 78, 111, -55, 30, -113, -115, -20, -109, 16, -76, 96, 8, -29, -126, -103, -51, -54, 106, -53, 116, -28, 87, -96, -54, 40, -78, -20, -8, -75, 58, 121, 5, -73, -14, 102, 37, -102, 65, -78, -62, 123, -117, 114, -15, -42, -84, 81, 6, -125, 119, -36, 57, -24, 64, -93, -116, 32, -19, -127, -15, -63, -77, 46, -95, -10, 71, 71, 12, -30, -123};
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
    msg.setTimeStamp(0.800538505253);
    msg.setSource(57180U);
    msg.setSourceEntity(85U);
    msg.setDestination(26854U);
    msg.setDestinationEntity(52U);
    msg.altitude = 0.127066246578;
    msg.width = 0.995312873562;
    msg.length = 0.306019285771;
    msg.bearing = 0.00310141615011;
    msg.pxl = 21685;
    msg.encoding = 104U;
    const char tmp_msg_0[] = {-19, 9, 104, -40, -93, -103, 62, -57, 100, 53, -9, -90, -24, 52, -7, 39, -17, -33, -101, -62, -58, 116, 72, 124, 112, -28, 63, -28, -86, 58, -31, 98, -87, -43, 61, 57, 118, -51, -52, -36, -20, -122, 90, 79, -106, 53, 4};
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
    msg.setTimeStamp(0.816799667396);
    msg.setSource(25612U);
    msg.setSourceEntity(119U);
    msg.setDestination(57077U);
    msg.setDestinationEntity(181U);
    msg.text.assign("AKZRUDECVTCUNSDFQSRLVJYWLOVSEUZDWTBNZGTBQGOYXIRJEPPCKFAKETFZDPOJNEXSPOEAOLVXDNKGANZJHMXVBMQNMHSRQPIHHSWYFOJPFCIYIFKCBBGWIVFRWOASLBFXUCTEKBDAQMRGIVWXRLZQADEHYHHWNFTPJTNXATKXSSMKQDGSQLAGZABPNMTXVMLWNFRRLJBZMIILOPPIHCMYODB");
    msg.type = 213U;

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
    msg.setTimeStamp(0.180472958826);
    msg.setSource(31622U);
    msg.setSourceEntity(38U);
    msg.setDestination(58415U);
    msg.setDestinationEntity(124U);
    msg.text.assign("HBQZZGEJHUKPIEEUCVJXTEBRWFAXWVSGMVNAEFIWNRMXQTNCPQOLDIRSHDXYTGDBYSSZLBBJAOUUSLYPYDWCKOHWNQHAGPPZAELEOFNXAKOTWEKRHPOQKNQWXFOKOOWSMEIUALZHPETVAWSRADJUMFNNBGISGOJKJVHTXMCCPDIYYMLHSVRVLTKDNCYRYTZLYLCRFHZRBXJAZBYBQZKMCIUFXURIDJF");
    msg.type = 183U;

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
    msg.setTimeStamp(0.201251260652);
    msg.setSource(32016U);
    msg.setSourceEntity(196U);
    msg.setDestination(14601U);
    msg.setDestinationEntity(238U);
    msg.text.assign("OZOJKWETANETQVMIFKHXUMLOQUPOSNHLDWHTAVFCGCRUAEUTGGLZJSHQMYLTZKXAIWQCJVQZPINXBUWFCNGFJIORWJMXVNEPZBLCMLSCTNMVCPNSAXAYBIP");
    msg.type = 64U;

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
    msg.setTimeStamp(0.515181525838);
    msg.setSource(36205U);
    msg.setSourceEntity(7U);
    msg.setDestination(28836U);
    msg.setDestinationEntity(205U);
    msg.parameter = 79U;
    msg.numsamples = 31U;
    msg.lat = 0.16042970457;
    msg.lon = 0.350346106437;

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
    msg.setTimeStamp(0.815206617356);
    msg.setSource(33868U);
    msg.setSourceEntity(246U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(101U);
    msg.parameter = 36U;
    msg.numsamples = 179U;
    msg.lat = 0.0407309048571;
    msg.lon = 0.480077651347;

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
    msg.setTimeStamp(0.339619311631);
    msg.setSource(15050U);
    msg.setSourceEntity(140U);
    msg.setDestination(20070U);
    msg.setDestinationEntity(235U);
    msg.parameter = 94U;
    msg.numsamples = 165U;
    msg.lat = 0.0943061670915;
    msg.lon = 0.25664108656;

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
    msg.setTimeStamp(0.732976638038);
    msg.setSource(47434U);
    msg.setSourceEntity(96U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(131U);
    msg.depth = 43467U;
    msg.avg = 0.186433287314;

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
    msg.setTimeStamp(0.4159186425);
    msg.setSource(48383U);
    msg.setSourceEntity(229U);
    msg.setDestination(27499U);
    msg.setDestinationEntity(93U);
    msg.depth = 35348U;
    msg.avg = 0.376822389316;

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
    msg.setTimeStamp(0.979115089119);
    msg.setSource(2480U);
    msg.setSourceEntity(2U);
    msg.setDestination(22224U);
    msg.setDestinationEntity(232U);
    msg.depth = 63040U;
    msg.avg = 0.287568686774;

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
    msg.setTimeStamp(0.0417431776884);
    msg.setSource(59274U);
    msg.setSourceEntity(110U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.561115824861);
    msg.setSource(34010U);
    msg.setSourceEntity(218U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.112187353845);
    msg.setSource(40784U);
    msg.setSourceEntity(7U);
    msg.setDestination(13145U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.968208584282);
    msg.setSource(32078U);
    msg.setSourceEntity(86U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("QLJHKANAMASHVFC");
    msg.sys_type = 70U;
    msg.owner = 42728U;
    msg.lat = 0.245115168524;
    msg.lon = 0.206249477203;
    msg.height = 0.865506707654;
    msg.services.assign("GXMJUALSZTMCURVKFHFAPCICNVZBQWFQCHADRLNQOBDCTSXMWRMCJQEEVJGRQYHKTPOOQFWXYOBHQJJIDERIVUDUSXADHSBZTBWUPUOHKPNZUFWRIRYVAGIRE");

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
    msg.setTimeStamp(0.618461413985);
    msg.setSource(5460U);
    msg.setSourceEntity(61U);
    msg.setDestination(1701U);
    msg.setDestinationEntity(151U);
    msg.sys_name.assign("NBZZPIEDEPPWQDJUTUUZOAPSCZEMNFGMQJGEAXSPVUAOARAZWYCUGMLRHJNAJFZQLWXYKUCGKIUCZBWDMCFXOFCPRIFZHQVREMEJWRGXOEQADYIUKGDNZQFBXWGKRYNVMJGISOBJMFPQQRJTTDLHLRTEBRICYIOIBBOSHNJKWAFNCGMJSXPYYNDTYYOHQMVHLVBVFO");
    msg.sys_type = 11U;
    msg.owner = 38984U;
    msg.lat = 0.089573996672;
    msg.lon = 0.982687196647;
    msg.height = 0.0701478165121;
    msg.services.assign("XRQWXLSDVTJSSCALVKOJXHNIVCLAGXEYIQSLPLPCCIGVHFWRFVBINOWMYCGEBDKQCKFNEXFZYVSMBHLDQZYPUIZOJYOWTNHDRSQZYZGGJXCETPSOZWJJAMDPJOQSBBGJDBYZFKUWEOSRTWPQHAAEMTHVUGGMSNHHPHVDDFNMQOUCZWMIR");

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
    msg.setTimeStamp(0.334063202093);
    msg.setSource(37443U);
    msg.setSourceEntity(192U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(155U);
    msg.sys_name.assign("XKFYFAVVPITFFZDIQTYJGUZWPKZWUGTEEPOLAMRUKZCEFOZXAIPMNRREDBDBSJOZCPVBPHXQWPCQCLKVRZNQGJVL");
    msg.sys_type = 34U;
    msg.owner = 33705U;
    msg.lat = 0.429868950936;
    msg.lon = 0.146470029697;
    msg.height = 0.231408228398;
    msg.services.assign("XPPXUTBGZHIRYAKBAEYHFHQEEHSBUMWFXJEVZGCRJZINTNATIHLCICMAOHLUQVURWJRDAQBDZTEKLPFFRLQYIESGRVNTGRKJPCIMUXSVPKKJWNHJYZSVIBKUMZMDDBCUAOUNXGUOWEENPLVCOSWRTLVFGSDRKXBHLXGVTFJKYDCQVQNQKLPWCOQFMOGMXGLYSMABSWHZJUOEXTDZMRBYANEQOVD");

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
    msg.setTimeStamp(0.954117154381);
    msg.setSource(10225U);
    msg.setSourceEntity(213U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(59U);
    msg.service.assign("EMQLZERSIRINVGUUKKVSYMDZDBQIMLMGKBCLVZPPHSYFUQPVSBHJQVDMLUZH");
    msg.service_type = 208U;

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
    msg.setTimeStamp(0.423412421167);
    msg.setSource(41308U);
    msg.setSourceEntity(172U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(66U);
    msg.service.assign("OQPFUSFQSXGLQGDFMYJJNJCCKCGIKVXTHRZMGVRSCNASFPFBRFYAHGBQIWPFFETTAMJETPJZEWIIHJXYWNBEOVDHWZRTHUJDNGOPHCBTNQHJSYEXPCIYEIKDPZZSYNYVCCTAXBOVMHZMXBLENLWVOCXNI");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.052109268203);
    msg.setSource(41417U);
    msg.setSourceEntity(106U);
    msg.setDestination(41764U);
    msg.setDestinationEntity(252U);
    msg.service.assign("WLWBCQPZLUIBKJJSJTPLIHOTKLKLYHSDORQNKDFTVBWWAOSYBFYKITNKUOTJZXPUVFCVZEWMXJUBQNBVIYDGACZGUYUWQJBHOIIJYFRLNPHSSPETPXVNHNHIXMGNEVIGFXZUPTFTGGKXRAMSEVRUGINSRWRMCAZLHJTIWYQVJLGQBRXUDNREECOAAMJSCPDKDFKHDHXVYVBPCPQXOTYBCMADZFMGUAHSGZZNXCOLCYMRRSDWOLEKWQMZQ");
    msg.service_type = 32U;

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
    msg.setTimeStamp(0.329469312114);
    msg.setSource(2903U);
    msg.setSourceEntity(117U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(62U);
    msg.value = 0.18238590931;

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
    msg.setTimeStamp(0.381093149295);
    msg.setSource(30930U);
    msg.setSourceEntity(174U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(200U);
    msg.value = 0.168264420078;

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
    msg.setTimeStamp(0.607329906553);
    msg.setSource(50429U);
    msg.setSourceEntity(48U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(92U);
    msg.value = 0.269713591975;

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
    msg.setTimeStamp(0.541826075951);
    msg.setSource(8833U);
    msg.setSourceEntity(85U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(13U);
    msg.value = 0.227654024792;

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
    msg.setTimeStamp(0.663855082056);
    msg.setSource(58804U);
    msg.setSourceEntity(110U);
    msg.setDestination(49464U);
    msg.setDestinationEntity(143U);
    msg.value = 0.26826434136;

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
    msg.setTimeStamp(0.933830248645);
    msg.setSource(38429U);
    msg.setSourceEntity(39U);
    msg.setDestination(12596U);
    msg.setDestinationEntity(242U);
    msg.value = 0.458935623737;

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
    msg.setTimeStamp(0.846971132374);
    msg.setSource(19600U);
    msg.setSourceEntity(59U);
    msg.setDestination(4047U);
    msg.setDestinationEntity(222U);
    msg.value = 0.544411184229;

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
    msg.setTimeStamp(0.827387305061);
    msg.setSource(46714U);
    msg.setSourceEntity(158U);
    msg.setDestination(20470U);
    msg.setDestinationEntity(99U);
    msg.value = 0.162050089246;

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
    msg.setTimeStamp(0.42464236516);
    msg.setSource(38724U);
    msg.setSourceEntity(90U);
    msg.setDestination(30261U);
    msg.setDestinationEntity(137U);
    msg.value = 0.448452723854;

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
    msg.setTimeStamp(0.371617897271);
    msg.setSource(57277U);
    msg.setSourceEntity(147U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(19U);
    msg.number.assign("XCEJSZYTKFFPXTMARASTTWPKIEVGUVMYYRAENLYBBFKGCIDGNZRYYTQEVKIGQIHHEEAOASFHOZWCCBBVLQUYONRRMXAIRNOXSZQSBDKCIGFJWDKOHYAXDDBGNUXXCCEJDJGGLSKECMSOUMJXLRBTWQLRGNOJLPUSZIBUWOUNKYPJWZMPFFTVFHTXRHELVZQBCOWXFPMKDOLIMPZDVPKVHWFHPZMEUTZHCPLUJRQUAWIST");
    msg.timeout = 7011U;
    msg.contents.assign("WDWBKJBFNBPPMWXWUGIORCAKVIPIFDOEANTEMGSJELZIRSLXHJQETMCDYYPBUQFAQGLBVZTWTVYHTYELCNCAQCJLRJUZLPUCFOZOA");

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
    msg.setTimeStamp(0.308650339404);
    msg.setSource(58373U);
    msg.setSourceEntity(76U);
    msg.setDestination(52955U);
    msg.setDestinationEntity(68U);
    msg.number.assign("ZMGBWSNSHIDBLKRALLPPLGZERVFBSVLJ");
    msg.timeout = 9144U;
    msg.contents.assign("AGGJZHPSMIKKSPWVGJUASTGWKVXEFZOFRYNBGUESMIPSPZYCDTKABGHVYSXIPEUCFXFADEYJXIAJBAXYLHSCTGHURMNEYQTKJFZUHHNVJUPC");

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
    msg.setTimeStamp(0.811566810172);
    msg.setSource(16786U);
    msg.setSourceEntity(122U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(252U);
    msg.number.assign("KTDMORJSDZZHUUITQVMALMNCAYRZKFBPDJUEPEONVQEALQOPJMFTYWCPTTPXDOQXMAOHISTEKSZYZVXZMLTGKNITOCUWWYBGUWBBBASESPFENHXBIUBVVYBJJQZFVXEJPHUXFDUGRNZFKTMMNFIKXAPCWRKYCAHAFYGCYSIOGIWSBTEJXLLRBRUOHIRXLDWGVNWJZODQMZGRHDKNYRJECOPIUKHACSYWSCMNQQFVLC");
    msg.timeout = 55527U;
    msg.contents.assign("HJLCDMNETJHELBMJKAXNOXFFTCQAOIOGIQVEDLAHSYMIVAOCSLVMUNFKJQBZIVFRRCVBEANYXMNLRFKDZTHYGGXRMUVFPYHQRBDGKMVLFWJCUCMDOFJZPQDGXTQJRLXKITPEHWHSZBHDOBUWUQTWSLJOYKAXTFDNNJKELXTNRWDPMGUDMRQIKZCGWSLOUIAFPBEHUPXBPBKVQITYSZPWJUPZNGYPBOYZWKWNTUERRSXYAIGYQEZHECIV");

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
    msg.setTimeStamp(0.0190561091073);
    msg.setSource(51928U);
    msg.setSourceEntity(42U);
    msg.setDestination(57838U);
    msg.setDestinationEntity(35U);
    msg.seq = 213024871U;
    msg.destination.assign("CDACXNBAAOXHTDRKXZCHYGEFEWDIVSZTLFSFPMWVZJYRHHNFEQKWYINPXCJDEQTTMMETXPHQGWQMYPOKFETUCODYVMJWTNPYQLRNWTVUZIEPSOZDKIUMQJLVAQGWHXNIXZALGJIOBPFZJQGXBNYRRRBIUDHKSZONQIZRUTLJAEWVCALSYY");
    msg.timeout = 39109U;
    const char tmp_msg_0[] = {-97, 31, -76, 86, 19, 67, -37, -37, -53, -86, -45, 34, 119, -104, -59, -113, 97, -118, -71, -120, 44, -37, -117, 95, 53, 54, -27, -1, 37, 74, 29, 5, 73, -45};
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
    msg.setTimeStamp(0.672045392943);
    msg.setSource(10639U);
    msg.setSourceEntity(242U);
    msg.setDestination(16602U);
    msg.setDestinationEntity(198U);
    msg.seq = 3672951464U;
    msg.destination.assign("CXPJQMDSGHJFOAAEUOCLPRQLOOOUSVBEBZPLGZDUZDRYDNSYEHKVOAXVQKPKZLXWYNTEHOSWEZTTITZDBTCFAPSURBUYYLFGINJIJMFCYFKECMAUFBCVJXTBZPYTWQQASLPPQWURRGWVQMWNQXQIJJFAMKUGLFJSBHWBHNSR");
    msg.timeout = 5462U;
    const char tmp_msg_0[] = {0, -120, -73, 46, -40, -81, 22, -40, 117, 9, -108, 22, 22, 37, -34, 5, 83, 111, -52, 62, -60, 97, 22, -15, -87, 45, -78, -94, 107, -89, 59, -122, -21, 23, -29, 71, 76, 66, 99, -33, 118, -59, -53, -43, -118, -27, 60, 45, -56, -79, -16, 79, -76, -7, 123, 10, 79, -54, 65, 61, -76, 102, -26, 33, 110, -121, -22, 54, -35, 5, -98, 38, -66, -78, -30, -4, -108, 22};
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
    msg.setTimeStamp(0.193622634648);
    msg.setSource(12884U);
    msg.setSourceEntity(70U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(123U);
    msg.seq = 2576037737U;
    msg.destination.assign("DRSUJLFESCNLNYDPESFFBHMKGYTMBWKKHZMKMBNWQJTHEXSGJEFMUFOCSOQXPWLTLALJOWUMZRYALZYGPUCGATEBJXPXNOYVMTGKNJKYAJ");
    msg.timeout = 35954U;
    const char tmp_msg_0[] = {-116, -16, 43, -108, 116, 123, 8, -103, -68, -13, 83, -93, -48, -18, -34, 58, 16, -118, -88, -42, 36, 101, -45, 39, -4, 109, -26, 112, -31, -65, 64, 77, 75, 126, 65, -75, 48, 99, -18, -116, 28, -105, -44, -88, -77, -94, -28, -112, 57, -32, 99, 4, 113, 27, 78, 108, 15, 29, 104, 82, 72, 9, 67, -101, -40, -70, 1, 83, -99, 20, -18, 45, 62, 57, -10};
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
    msg.setTimeStamp(0.952612068481);
    msg.setSource(42771U);
    msg.setSourceEntity(155U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(101U);
    msg.source.assign("QVBXOZKRKZAVCUQSEFYWGNTMEFOFVPKROHJUNPKLWQNYHMGRJE");
    const char tmp_msg_0[] = {-58, -48, 109, -71, -55, 94, -38, -22, 64, -70, -26};
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
    msg.setTimeStamp(0.199865199952);
    msg.setSource(33168U);
    msg.setSourceEntity(182U);
    msg.setDestination(23592U);
    msg.setDestinationEntity(116U);
    msg.source.assign("YOPRQWLKEUMTGXQKEUTHSUMKXXCDQBCRYPPBDOFYDZNZGFXGBCZGRSLAIJ");
    const char tmp_msg_0[] = {115, -37, -45, -29, -25, -71, 33, 20, 81, -23, -69, -60, -37, 68, -75, -25, -120, 62, 23, -34, -2, -10, 85, -83, -27, 55, -73, 82, -40, -103, -101, 60, 89, 44, 23, 101, 89, 35, -49, -4, 29, -27, 37, -26, -13, -18, -70, -37, 26, -126, 115, -38, 9, 6, -96, 72, -100, 25, -109, -115, -32, 7, -89, 26, 86, -36, -20, 0, 108, -22, 4, -39, 64, 12, 98, -58, -70, 14, 22, 125, -3, -31, -79, -12, 49, -81, 56, 18, -13, -120, 21, 36, -47, 44, -105, 15, -73, -71, -104, 57, -69, 16, -80, 4, -17, 125, 14, -98, 118, 25, -4, 56, 117, 55, -18, -41, 49, -52, -38, -48, 125, 91, -95, -23, -29, -1, -26, -113, -5, 23, 54, 26, -95, 60, -32, 63, -1, -24, -46, 88, 29, 46, 114, 92, 34, 90, 124, -85, 21, 77, 60, -71, 92, 81, 101, -20, 22, 20, -6, 77, -25, 74, 121, -45, 85, -86, 23, -6, 68, -70, -101, -113, 121, 43, -61, 27, -38, -111, -29, -105, -97, -56, -22, -31, -105, 99, -53, 2, 42, 35, -108, 7, -15, 93, 106, 62, 92, 34, -38, -73, -12, -127, 107, 112, 103, -64, -125, -19, -94, -110, -31, -107, 89, 106, 102, 30, -8, -19, -76, -95, 6, 17, 42, -115, 107, -81, -71, 24, 80, 85, 113, 18, 124, -12, -50, -8, -105, 120, -66, 31, 108, 123, -110, -83, -81, 19, 126, -118, 9, -26, 1, -91};
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
    msg.setTimeStamp(0.672754878396);
    msg.setSource(15338U);
    msg.setSourceEntity(85U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(153U);
    msg.source.assign("UCFHIOSRMEUUXDMSDBFJWGVEXTCMHALPXBVNJJCHRPFJAJWQIDWWWVVRYPDHLGMIOZNLFXTNKPHGNMSZNBDOLOGAOBTERMKSHXRQOEPXIBXHUJVQLZGLPYZQSFYEIGVYZUVUKCEMBBISECABZFKKRHXLFTLNWAOQSWIJZYXNTABFRKYYQRTQKECEBYLDPFFAWNKWCAIIEMGTAAKHCRTPGQDJNS");
    const char tmp_msg_0[] = {5, 4, 14, -90, 6, 17, -123, -3, 74, -69, 108, 90, 122, 47, 101, 49, -91, 73, -120, 71, -111, -10, -97, 44, -25, -113, -77, -90, 46, -88, 54, -41, 62, 98, 8, -120, -95, 1, 21};
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
    msg.setTimeStamp(0.980277894091);
    msg.setSource(17841U);
    msg.setSourceEntity(2U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(175U);
    msg.seq = 3252701393U;
    msg.state = 231U;
    msg.error.assign("ZLWOBUEYFXPRNRHGPCIAGCPCFKRIUGTPQZNWAIVUMOXQGEWJNMIJBEPDFOSSLFCSSEENKYTWKQOXZPFHWERLUGZZISXXKLDRZBRSBFHNYEIYNBYHATJAJJLYBTDXHQMMQJTGW");

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
    msg.setTimeStamp(0.114439322793);
    msg.setSource(53327U);
    msg.setSourceEntity(27U);
    msg.setDestination(54033U);
    msg.setDestinationEntity(42U);
    msg.seq = 3453454101U;
    msg.state = 146U;
    msg.error.assign("TJBWXSFZHDEIDYIODJRZCMWHWWOROYGQKWTVKJBMFXUKPQGATGFRYUMELNFABWPAOEPVYGQSEJHVYWZSZBTBRRJOWBUHZYCQHIFDLVTXEONFEGLIAXDUSPXSZMVMSNPQPDSKNCGFHILVHQMHBWJUISCPKJEZQXKULTNJWYCLEFVYCSDAKIYMDYIZXSBNXXGQHTLLLZNBFVRROCNTIUGDGRJLKERMPFIDMNMCJNKZQVGAPUTCEAAXAKCOOOQV");

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
    msg.setTimeStamp(0.143211799905);
    msg.setSource(62679U);
    msg.setSourceEntity(244U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(62U);
    msg.seq = 3254994785U;
    msg.state = 156U;
    msg.error.assign("VIDBMRAWJBMFATUZTYQCSVILHFGDDZTOBCUDYDMNMRXXBAKGHPTQEXZAVJAJMTVLURUXRJFDLXEKOKEXYQHQWIMWTOYCZJPLXQUHWGYOZECTETUKEFJOJIPPAPHJPTHMNXNRJCSVGFNJATVNZUMICBLQVQYKOYIQXOGCHEBBEKORWBSNORNASYIEVNWFAKWALSYFDUHFDIQLHFRZNSGVS");

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
    msg.setTimeStamp(0.608169385077);
    msg.setSource(25216U);
    msg.setSourceEntity(246U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("VCKUSIKXMYUCXOYQXGEXFJKGCXHCJIDZBXPXQEQBNZOPYVLYQWHULWPSBNEJDKGMTKHJWPVOSOUHMNRCDOPCKBGOVHTWUIEODSBJYIURFTNFIAHWGHEPDYLHENRJN");
    msg.text.assign("YQGVFGJUNRPCMHMRBWZXYSHDAUBNTCPVZRQJIHLSCVVERAIOKNXSXLSROOMTEQCKUZBLXDBQJLTPNNXPEADFPHDMZBRJYHUOWGPEMUDJTVMFTUVAQTAHIYTJKKOLDWXTFWEFRNDCANZUQGJSBZVCYLXQANUDLZJRKAQVCVXRTELPILSCUFEPDGHYZEFIGKYTOCMJZFFKMBBWLHKHFZKYSVIWWMISHSOIQPGGWBUGPXYNRJCWAW");

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
    msg.setTimeStamp(0.75003252096);
    msg.setSource(52328U);
    msg.setSourceEntity(160U);
    msg.setDestination(969U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("AMKDZOJATZLGXOAPGJEFGKFCINADCXTYABMDJHOTLQOBVMOVYYPTKFQKNNVSHRCSGWYLHVRNHMZPPIJKNLLVJFQCWSDWZDCLKRR");
    msg.text.assign("LSUZVEQJQZUOOLJPVMUBCVKRIVYNACDBOTQXJTTPVKXNEWVJEUIOAYGHBIZXCFXRNNEJUJPOWCMIYTKIWTFSBTMCZMTWQHWKHAO");

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
    msg.setTimeStamp(0.607448599246);
    msg.setSource(58120U);
    msg.setSourceEntity(82U);
    msg.setDestination(42470U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("LMAGXVZDMSLFJSTZPPREFBLUVRIJDSZZDAXRWJEPEQBHKHANPAYVYNVYMUHGIHTKEDOXQBELMXBZFQNJYORVXVQLUFRTHDJFYTKNVBUPPJTRCWMGLSSFLGCPJNYKCYYKXTGCYKSXSWHSAWXTHCIOBVQAZCQRWLZTLFINCQWUCCKOQMONDGOAFAIIQZOSEGRKFHUNMDHMZJWXTBRIBGAJLBOPIDOVJIWPCUVUAIHRQB");
    msg.text.assign("PWNWCZYEOYHZIUTNOMMHUENVSBHFPWHQALPTGEJLRSFIPARNHFVTKYSFITBDSJXHQKRUFJKWLQSCAOXZHPELJRPXIXQUUGJBPDENUVCFBXJFZDRMJQLTRBGDVBEMKGDUIMBPCVYLYCQKXOGCHIMOCXLBQNSITBYKOAFGCRVOZZNHWGADAJERJBETYUGSPOEUDWTHAIWVA");

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
    msg.setTimeStamp(0.675503479687);
    msg.setSource(22199U);
    msg.setSourceEntity(180U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("IQULUBQNXDGILAFLGWIAITRIEZAASUZAPPSSSEFSCSJJOWZKDXDUOZNZMJEFCXQTEGGWGHIPHXOBTC");
    msg.htime = 0.772764903796;
    msg.lat = 0.825622521974;
    msg.lon = 0.898408673859;
    const char tmp_msg_0[] = {-60, -112, 73, -105, -117, -128, -99, -19, 77, 49, -106, -5, 119, 120};
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
    msg.setTimeStamp(0.352841461753);
    msg.setSource(49808U);
    msg.setSourceEntity(81U);
    msg.setDestination(39034U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("YQIJLGWCCYXYWJZCWRLQXSVAOHVPXMTLHQCQXTWMBGBLKBIPECQMHEDKKEUZBQSUGAZNROYDSMJDZORBZHNARTVVSZBDIYJTXLMZNGFSFJHETGIGIVDGJTQXSMSLYQKLPIQHTAEJUYLKRQROAUSHYNCBIGFARPYDBCFBWXSJWFAKVUFNIGLTNMBWCWRDZR");
    msg.htime = 0.339645493554;
    msg.lat = 0.0334303648522;
    msg.lon = 0.499430754211;
    const char tmp_msg_0[] = {48, -58, 96, 45, 1, 16, 60, -54, -117, -57, 53, 82, 102, -86, 1, 70, -84, 29, 22, 101, 88, -90, 28, -23, 66, -94, -69, -12, -28, -14, -34, -11, 31, -67, 0};
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
    msg.setTimeStamp(0.502877383235);
    msg.setSource(14707U);
    msg.setSourceEntity(144U);
    msg.setDestination(57226U);
    msg.setDestinationEntity(170U);
    msg.origin.assign("SMBBBDQIQYCONXRDJXHTVFHYCZHOPOWFNJJHMLTDKZLRYUSNTUCLFPPNDYCJYDZUYOVFVDOYIGWAWZXSXYDGCITLXMCAXTZGKRQWXWEPEFFBAJCPKRBQHKIIPMBEFIYEJSRZAAQASMHIXNBPOSVOOKNXKGMUXMZTVRFBGWGHPELZLANUFWNLUARAKVQVUFZPNDQWSWWZURLVLQNDKGGVSUKVYSEHTMCDGQTMEHOEQBCRLIGTJR");
    msg.htime = 0.961063860162;
    msg.lat = 0.303888582057;
    msg.lon = 0.974901486841;
    const char tmp_msg_0[] = {110, -120, -83, -62, 52, -19, 27, -24, 101, -29, 13, -83, 25, 42, 69, 75, -118, -91, -23, -58, -16, -30, 48, -7, 105, -36, 23, -70, 12, -17, 17, -63, -98, -16, -79, 76, 43, -34, -128, 40, -116, 79, 13, -108, 49, 104, -56, 57, 69, -105, 53, -51, -26, -103, 102, -47, 81, -80, 23, -94, -115, 78, 18, 122, 102, -38, -71, 112, 112, -82, -43, -113, -106, 26, -17, 25, 37, 61, -33, -57, 115, 46, -106, 108, -63};
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
    msg.setTimeStamp(0.636893758723);
    msg.setSource(16934U);
    msg.setSourceEntity(193U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(155U);
    msg.req_id = 39092U;
    msg.ttl = 55071U;
    msg.destination.assign("GXGUBKJNRXLZXTJKETVUBDVFYPUDJNKRHAXCOZDDFILDEDAQ");
    const char tmp_msg_0[] = {20, 51, 114, -36, -1, 54, -53, 70, 57, 64, 41, 53, 8, 23, 53, 82, -71, 8, -115, -21, -99, -117, -65, -117, -105, 0, -70, -4, -91, 113, -98, -125, -70, 62, -52, -27, 57, 37, -96, -74, 9, -117, -41, 69, 19, -84, 8, 104, 35, -51, -19, 98, -107, -16, -14, -84, -50, -100, -16, -47, 77, 110, -26, 15, 18, 73, -11, -118, 83, 60, 24, -23, 126, 49, -46, 93, 72, 73, 60, 70, -45, 64, 82, -3, -34, 19, -88, -81, -80, 103, 18, -108, 85, 69, -58, 37, 126, -38, 80, 26, -6, -4, -122, 117, 105, -20, 54, 62, 80, -106, 118, -63, -82, -71, 38, 66, -54, -70, 68, 8, 81, -59, 108, 77, 55, -121, -58, 117, 91, -106, -107, 59, -9, -2, -98, 68, 84, 51, 37, -7, -1, -87, 21, -29, 65, 124, -38, -79, -6, -2, -29, -125, 11, 73, 4, -6, -88, 101, -90, 89, 73, -45, 61, 90, 125, -102, -39, 12, -70, 46, 106, 45, 0, -1, 82, -46, 83, -65};
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
    msg.setTimeStamp(0.755673323651);
    msg.setSource(24331U);
    msg.setSourceEntity(117U);
    msg.setDestination(18496U);
    msg.setDestinationEntity(25U);
    msg.req_id = 40140U;
    msg.ttl = 32909U;
    msg.destination.assign("TZBFTZOGQBVGRHWOXPCNTYIUDLQEGTZJNQIXQAZAUEFRALUUKHEEFZOKHWYLUSJP");
    const char tmp_msg_0[] = {-12, -31, -78, 11, -101, 97, 56, -80, -26, -53, 18, -66, -83, -21, 104, 41, -118, -120, 47, -64, -76, -101, 58, 15, -100, 30, -43, 24, -31, -35, 45, 75, 70, 68, 76, 11, -102, -34, -109, -58, 35, -36, -89, 6, 115, -60, -53, 85, -28, 97, -35, 70, 28, -13, 14, -1, -84};
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
    msg.setTimeStamp(0.0847502741462);
    msg.setSource(38486U);
    msg.setSourceEntity(51U);
    msg.setDestination(44670U);
    msg.setDestinationEntity(240U);
    msg.req_id = 26188U;
    msg.ttl = 53843U;
    msg.destination.assign("RRCLTFPJAYLGKAHNFQNKOXANMKPIXFMDHCEOIUJWHRPAUDVITPZGYSTEIDQIKTGWAJLABSSCIVXIOOSSSYEUVUCTXDXOLHOCGPUELLTRNVYFXMMDGGKEHZCDCJHXNFFQQSFVIJBYERBQDXAQYRGKIACCRSVFYBSZBLWRQMZDUYAKLYNZXTHHWWB");
    const char tmp_msg_0[] = {-56, -63, -11, 5, -10, -87, -110, -115, -88, 108, 68, -11, 73, 3, 18, -78, 88, 116, -82, 29, 9, 93, 38, -102, 24, 73, 94, 96, 13, 112, 72, -122, -111, -104, -21, 49, 93, 19, 60, -60, 71, 27, 74, -121, 48, 43, 26, 119, -55, 104, 50, 43, 119, 113, -68, -94, -19, 46, -53, 115, -119, 50, 98, 3, 53, -17, 2, -85, -96, -108, -14, 118, 53, 76, 69, -90, -45};
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
    msg.setTimeStamp(0.194621991399);
    msg.setSource(29773U);
    msg.setSourceEntity(126U);
    msg.setDestination(18632U);
    msg.setDestinationEntity(3U);
    msg.req_id = 60229U;
    msg.status = 173U;
    msg.text.assign("GKSIFFBAVBMYSEOKVXWFKFXBRADCHIMVDMLJHULTXWRJCLJVLXJFTLOJQKYMCFAEHOTWKPHENWGPZIDCNVUYCHAZGJBQWZWBBPOIPGGOOOCHQOBYXETQIGJDELWSZIJSPIUUMVQYEDDZTEDXFAAGDNTTQNECLSDRYGQPZKJWGJMKNALTUSURIHCNGUSPCMBYKPOTKNQFSHZFZRQVUUXHTWWVBRVMOFBY");

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
    msg.setTimeStamp(0.34233998251);
    msg.setSource(32542U);
    msg.setSourceEntity(185U);
    msg.setDestination(39812U);
    msg.setDestinationEntity(149U);
    msg.req_id = 59584U;
    msg.status = 97U;
    msg.text.assign("BFAZBZWPHLFOJNAIHLFMFBAXNYBDHTIUDGVFUPTGAXGRHK");

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
    msg.setTimeStamp(0.254821600515);
    msg.setSource(57158U);
    msg.setSourceEntity(224U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(162U);
    msg.req_id = 61031U;
    msg.status = 91U;
    msg.text.assign("WYJSVVFWNLGLYUJTYKALSYGZTPXSQBRIOAYFCHPCHWZBDEIGFXWFHFCCJLSCUVDOTSUXJVVBPKWAVNZTKGNOSKPRPLPIQXTAWRTUEQNMRMSAYGTBQWMONOXCHKKVGLBJSCEGYHUQILWOEKUEFKDUJHGTLNONDOVYLPWADHTEXBIYKCNDFGBBJDXZYABIZQHUEMMMCMEZGMN");

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
    msg.setTimeStamp(0.0217440346994);
    msg.setSource(52352U);
    msg.setSourceEntity(110U);
    msg.setDestination(55723U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("IQYOVAEWUTCBSBJRZPMHGSNZJDENMIIYPTVTBPKGHEDGCLWAAMYTSVXIKPDWXYAGNRHQVKSZPTWNVYBOZKJNHEVRHUJLTFFCFQFFNXJWDKDFDOMKAUPMPSGKFEBZZNYVEWLZOHRXSEYLWJBQHLZCLXUYSWXURGJBKNTIURX");
    msg.links = 4073527505U;

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
    msg.setTimeStamp(0.55981959012);
    msg.setSource(3757U);
    msg.setSourceEntity(129U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("XOSWFWBRKCXGPIKGEQVVEVLI");
    msg.links = 3354217735U;

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
    msg.setTimeStamp(0.066907159443);
    msg.setSource(52873U);
    msg.setSourceEntity(235U);
    msg.setDestination(40987U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("BLDXFSSJDPSLEHRWNTBKZRWKSLCNXOJJRXRQLQHSKVIWOOAJZWDBAMRVPPGWDYFAEDLYMMGIYRVNXKEJBYCOWIUHZTTKJGZWFOLVGZVMCTYYIOOIJSHMAIHAFNYEXPTDJUHFNNCSPPQRGCSQXKMUQBIKIHGZYRBWD");
    msg.links = 2026120079U;

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
    msg.setTimeStamp(0.874875030062);
    msg.setSource(24998U);
    msg.setSourceEntity(47U);
    msg.setDestination(57904U);
    msg.setDestinationEntity(142U);
    msg.groupname.assign("YPFDEWACQEBATNEIYHATDWLBOGWOJHLBKJTOZCTMZRVHMXUDACVKKMJGILFQUEWBVVSTQFUDFWJEBFLLNWVDEXCISGRYPDAOZUYZZFZXURDLNCUYBCMULSJVHSXZPNAPHIWBFSEYNAUOCPPSMKUMJMPWGNXIMCGJQDQABAYIE");
    msg.action = 184U;
    msg.grouplist.assign("FJETTOJQYNWLENYTSRPAWEPPNEWNZIAOMOVXVCGAWZPBAIDSRMKAYOWPNTUQXGRHBVXBMOXOCUJLRCUTNVYIZBWUMMGVRBHNLFHRQABISVJVKXJSFHHLSFCMDKO");

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
    msg.setTimeStamp(0.688618651915);
    msg.setSource(63916U);
    msg.setSourceEntity(56U);
    msg.setDestination(16454U);
    msg.setDestinationEntity(29U);
    msg.groupname.assign("WWMPYOQILNRHMPZKYLEKOEEJIIDILAURQRXMFQEQXVBVHSQTLASXHOVUTSIJYIEPMGLAGACYTSJPXEDALBYRYCJSVUNPNCEXAYBSDUUFEXENAXBTRVLCJHYTQQJUGYZJNOFZJTZOVQSJOLQEMDZOPZVGFNBZLHHGIRFPCOBTCMDCMBILPBAMDKKHSRXNZNGCWIBBKKWOUAFUWCDGDWGXTCNKHWKDWFRZWPKMQAWNFKUFGSDGIVMRSYFRHVZOJT");
    msg.action = 221U;
    msg.grouplist.assign("VNLDYOLPWGRLBBMXUYMHIDSRVDMSCRBWADYVXLDTAIIMGCQZTTWHRJFBCSWNTBBQQRQTMPKYPSVWQAINYMJFHKKKADYODOACJZTLIGIFBGNQLGGHPPZZUSGCSUWEWTZJRUURRAMHYJPICDONFPXOONBMZIFXVATOKHNWVTJXJCYUQNIULEPAKUEVJDSXXAWKPDHHKUCCJKLXRXFF");

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
    msg.setTimeStamp(0.419789246201);
    msg.setSource(919U);
    msg.setSourceEntity(139U);
    msg.setDestination(53286U);
    msg.setDestinationEntity(10U);
    msg.groupname.assign("MWINDTMRDMWBIRXHJJIAH");
    msg.action = 134U;
    msg.grouplist.assign("UKCYMVRCGIVKLAVZXKWTAGTHLEOFRVQVYWAPQBUSSR");

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
    msg.setTimeStamp(0.717649745558);
    msg.setSource(55642U);
    msg.setSourceEntity(108U);
    msg.setDestination(65525U);
    msg.setDestinationEntity(68U);
    msg.value = 0.245226831045;
    msg.sys_src = 54619U;

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
    msg.setTimeStamp(0.53110018641);
    msg.setSource(43798U);
    msg.setSourceEntity(250U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(249U);
    msg.value = 0.79897166975;
    msg.sys_src = 24300U;

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
    msg.setTimeStamp(0.113070894242);
    msg.setSource(13893U);
    msg.setSourceEntity(77U);
    msg.setDestination(25108U);
    msg.setDestinationEntity(106U);
    msg.value = 0.254142175203;
    msg.sys_src = 623U;

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
    msg.setTimeStamp(0.314229658023);
    msg.setSource(12232U);
    msg.setSourceEntity(65U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(127U);
    msg.value = 0.306786663383;
    msg.units = 133U;

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
    msg.setTimeStamp(0.640799266988);
    msg.setSource(47699U);
    msg.setSourceEntity(16U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(124U);
    msg.value = 0.581435410219;
    msg.units = 106U;

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
    msg.setTimeStamp(0.422582510269);
    msg.setSource(36952U);
    msg.setSourceEntity(225U);
    msg.setDestination(53415U);
    msg.setDestinationEntity(5U);
    msg.value = 0.383724991818;
    msg.units = 110U;

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
    msg.setTimeStamp(0.537330527309);
    msg.setSource(23999U);
    msg.setSourceEntity(27U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.340484017907;
    msg.base_lon = 0.694399038546;
    msg.base_time = 0.686197186144;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 3611U;
    tmp_msg_0.destination = 49758U;
    tmp_msg_0.timeout = 0.455491095261;
    IMC::VehicleCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 149U;
    tmp_tmp_msg_0_0.request_id = 27982U;
    tmp_tmp_msg_0_0.command = 121U;
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 30343U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.25914455384;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0822603784623;
    tmp_tmp_tmp_msg_0_0_0.z = 0.584114848757;
    tmp_tmp_tmp_msg_0_0_0.z_units = 168U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0740423021508;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 251U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.926442439712;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.18754327889;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.923227221425;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KUHQYFBLVWTIGUCMWECYVQDFGYOLKSIWCYMYWEPPLOTLFBZXNCFMTPOVXJGURMHFAXVIVWMEJZYLELRPGIWGCIBNFYTSFWWAKTOSJSVOTLHTYEDHODHDSARLNBUHDFRDQUDOPEXVZEJKHDGQEGKKEQJPZBUPRAJYXDZBUMGLNABKXCQLRDKZTAXHOJCPVAOZNUVWABAMAZNZVMKJFSTNMNYQRWCQHGUKGXQNISIXR");
    tmp_tmp_msg_0_0.maneuver.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.calib_time = 48606U;
    tmp_tmp_msg_0_0.info.assign("MHCNDCDATEUSASOFITLZRZLALLDTZXGLFTRUMHLFIAEHDFXPBWUWDMWIKPXZGSZJTNVCYCNPSYXVNTOJRHPCLWDMHDHGEEAXVTQPGIPEOAFKKCPNYKTMDSEIRBMWEOKKCJURPXCBWOMNQQRSBMTJYQQVINOCAAWZUOBLVAVMAJEWQDXQ");
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
    msg.setTimeStamp(0.597451428797);
    msg.setSource(2824U);
    msg.setSourceEntity(144U);
    msg.setDestination(2617U);
    msg.setDestinationEntity(146U);
    msg.base_lat = 0.307306849918;
    msg.base_lon = 0.800015116319;
    msg.base_time = 0.211774112105;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 64227U;
    tmp_msg_0.priority = -23;
    tmp_msg_0.x = -21486;
    tmp_msg_0.y = -19604;
    tmp_msg_0.z = 5476;
    tmp_msg_0.t = 30989;
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("RTOBILZDROIGZMDEZVUSYNNYXCJGTLSPDGRDVCNOKJGLYADSWXBBBYECXOAXNGEUVJVJMGTFBCDZTQDALSQWEAKFVPJPMFIHUTV");
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
    msg.setTimeStamp(0.121009711801);
    msg.setSource(61800U);
    msg.setSourceEntity(43U);
    msg.setDestination(45602U);
    msg.setDestinationEntity(44U);
    msg.base_lat = 0.00148492319724;
    msg.base_lon = 0.0795677399769;
    msg.base_time = 0.767379816492;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 17825U;
    tmp_msg_0.destination = 44929U;
    tmp_msg_0.timeout = 0.303049785404;
    IMC::EulerAngles tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.785591161124;
    tmp_tmp_msg_0_0.phi = 0.823105379748;
    tmp_tmp_msg_0_0.theta = 0.388483529707;
    tmp_tmp_msg_0_0.psi = 0.445940198667;
    tmp_tmp_msg_0_0.psi_magnetic = 0.0797702575672;
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
    msg.setTimeStamp(0.337225464033);
    msg.setSource(24298U);
    msg.setSourceEntity(122U);
    msg.setDestination(45451U);
    msg.setDestinationEntity(35U);
    msg.base_lat = 0.633152086987;
    msg.base_lon = 0.727571642929;
    msg.base_time = 0.881651663647;
    const char tmp_msg_0[] = {-101, -62, 110, 112, 59, 33, -86, -77, -100, -70, -77, 5, -98, -108, 120, -68, -115, -38, 67, -8, -80, 121, 123, 72, -74, 86, -14, -72, -64, -31, 79, -90, 115, 75, 104, 47, -36, -7, 86, -60, 19, 125, 71, -34, -21, 120, 37, 33, -110, 70, 35, -120, -121, -71, 100, -80, 34, 13, -52, -1, 33, -14, 33, 10, -118, -4, -61, 38, -110, -128, -2, -86, -25, 70, -52, 21, 66, -66, -16, -97, -59, -27};
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
    msg.setTimeStamp(0.0150021255923);
    msg.setSource(42827U);
    msg.setSourceEntity(65U);
    msg.setDestination(28183U);
    msg.setDestinationEntity(152U);
    msg.base_lat = 0.133519342648;
    msg.base_lon = 0.988960234322;
    msg.base_time = 0.232909117715;
    const char tmp_msg_0[] = {-90, -13, 74, -23, 6, -49, 123, -84, 115, -76, 66, 34, 96, 52, -84, -74, -53, 102, -18, -52, 77, -2, -35, 16, 55, 51, 126, -116, -49, 65, 9, 0, 19, 44, 66, 87, 115, -118, 101, 56, -98, 63, -13, 31, -78, -128, 62, -120, 95, -87, -28, -62, -72, 64, -91, -11, -82, -60, 101, -73, 51, 107, 121, -31, -37, -33, 15, 62, -111, 49, 114, 106, -91, 58, -11, 56, 17, 74, -73, -93, -100, 122, -50, -31, -98, -124, -63, -1, 6, -3, 45, -50, -60, -122, -94, 82, 59, -39, -95, 25, 123, -92};
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
    msg.setTimeStamp(0.464917015603);
    msg.setSource(37932U);
    msg.setSourceEntity(94U);
    msg.setDestination(10243U);
    msg.setDestinationEntity(102U);
    msg.base_lat = 0.784333834047;
    msg.base_lon = 0.772489885352;
    msg.base_time = 0.382907953621;
    const char tmp_msg_0[] = {-86, -51, -53, -43, -44, 3, -104, -108, 73, 72, 94, -4, -83, 124, -75, -66, 101, -26, 0, -7, -114, -61, -40, 108, 100, -38, 32, -20, 49, -9, -66, 57, 64, 66, 93, 14, 56, 31, -2, 3, -119, -31, -2, -9, 19, -81, 38, -100, -17, 47, -95, 108, -78, -61, 94, 88, -19, 10, 77, 92, 120, -80, 85, 61, 46, 44, 116, 104, 20, 32, -85, -64, 108, 105, -62, 27, -23, -121, 41, -20, -84, 78, 68, 115, -126, -45, 21, -64, 99, 110, 87, 69, 39, 74, 120, -67, -98, -111, -38, 18, 117, -1, -20, 120, 71, -112, -51, 93, -63, 91, -95, 104, -12, -46, 29, 69, -119, -126, 81, -67, 53, -76, 34, -5};
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
    msg.setTimeStamp(0.930741045121);
    msg.setSource(27692U);
    msg.setSourceEntity(177U);
    msg.setDestination(14656U);
    msg.setDestinationEntity(172U);
    msg.sys_id = 1686U;
    msg.priority = -47;
    msg.x = 4436;
    msg.y = 1970;
    msg.z = -19797;
    msg.t = -32264;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 22U;
    tmp_msg_0.list.assign("KFOFIRDXJCMPBPFCOTXDWMZGQPRACGQKWALXVZMNILESVYRYLMKGUGRURPHADMFTFNDGVZIWUUZXDFBTBLJTAYTZCOQUGHUKEEWQFXMRUXGNQXEKPSIESIOCMQPUOXTDSEJFQPVPRNHRIDWVDKEJUX");
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
    msg.setTimeStamp(0.932101284262);
    msg.setSource(1975U);
    msg.setSourceEntity(1U);
    msg.setDestination(17652U);
    msg.setDestinationEntity(183U);
    msg.sys_id = 58290U;
    msg.priority = 16;
    msg.x = 18234;
    msg.y = 5330;
    msg.z = -19834;
    msg.t = -8298;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.0140767058984);
    msg.setSource(59241U);
    msg.setSourceEntity(126U);
    msg.setDestination(57387U);
    msg.setDestinationEntity(151U);
    msg.sys_id = 17643U;
    msg.priority = -24;
    msg.x = 17892;
    msg.y = 3342;
    msg.z = -9239;
    msg.t = 8580;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.85011971025;
    tmp_msg_0.base_lon = 0.735053810292;
    tmp_msg_0.base_time = 0.784479212874;
    const char tmp_tmp_msg_0_0[] = {31, 100, 13, -117, 43, 106, -114, -14, -13, -87, -86, 75, 57, -65, -52, 19, -14, -89, 118, -11, -38, -59, -123, -59, 31, 83, -13, 61, -43, 64, -3, 101, -44, 108, 34, -124, 18, -77, 45, 68, -1, -20, -48, 6, 70, -1, -103, 93, 27, 55, 117, 19, -30, -87, 114, -51, 16, 18, -80, 15, 43, -53, 122, -25, -22, -56, -20, -35, -40, 84, -103, 122, 16, -76, 90, -115, -79, 14, 116, 73, 2, -46, 113, 56, -74, -65, -107, 7, 73, -88, 66, 116, 7, -68, 96, -25, -97, -73, 42, 66, -124, -44, 119, -34, 34, -70, 66, 109, 100, -18, 73, -42, 111, 1, 25, -44, 97, -110, -22, -103, -61, -46, -83, -107, 23, 8, 88, -61, -119, 89, -50, 116, -125, -32, -15, 107, 52, -46, -48, 87, -44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.864812234338);
    msg.setSource(46778U);
    msg.setSourceEntity(243U);
    msg.setDestination(23242U);
    msg.setDestinationEntity(81U);
    msg.req_id = 16870U;
    msg.type = 134U;
    msg.max_size = 10363U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.871001595631;
    tmp_msg_0.base_lon = 0.96356001243;
    tmp_msg_0.base_time = 0.149751217801;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46156U;
    tmp_tmp_msg_0_0.priority = 46;
    tmp_tmp_msg_0_0.x = -27307;
    tmp_tmp_msg_0_0.y = -26532;
    tmp_tmp_msg_0_0.z = -30834;
    tmp_tmp_msg_0_0.t = 4556;
    IMC::RemoteSensorInfo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id.assign("PQMVHNBSBEDXTOWJVQKRSOYPHGEKYEOKYRDKKNRCUWETVASBQTBZERZXIVHRDOETITMN");
    tmp_tmp_tmp_msg_0_0_0.sensor_class.assign("WHCUXREHQVESBLKGRSVEBOWEOOFWKJUFNTIIPYDDIKRBPNCIDDXQQEZQAAFUNDBGIPWXLKNTASRSNILYVJZGXOVTDFZIAEMPHVUHXGSBJJPWXLMILSQZCFTWPLHWWGODRTLJPTYKUSCHSTYAKAUNQVAM");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.59205601278;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.927354210108;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.0523385475522;
    tmp_tmp_tmp_msg_0_0_0.heading = 0.791241771559;
    tmp_tmp_tmp_msg_0_0_0.data.assign("OFHOSJVLEUTYVGIDRNKFRMRUXBMNLOZXJLBYYAHJYUAFUIFEKJVQRDKIWQMPDIJHYCTIEDPLAUGHFZLXB");
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
    msg.setTimeStamp(0.919926416722);
    msg.setSource(34899U);
    msg.setSourceEntity(171U);
    msg.setDestination(59831U);
    msg.setDestinationEntity(245U);
    msg.req_id = 31093U;
    msg.type = 61U;
    msg.max_size = 16947U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.338255716099;
    tmp_msg_0.base_lon = 0.502371906062;
    tmp_msg_0.base_time = 0.508971841104;
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
    msg.setTimeStamp(0.280021901645);
    msg.setSource(18386U);
    msg.setSourceEntity(240U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(80U);
    msg.req_id = 3089U;
    msg.type = 54U;
    msg.max_size = 4710U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.449282912899;
    tmp_msg_0.base_lon = 0.0771531626785;
    tmp_msg_0.base_time = 0.508856905661;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 42232U;
    tmp_tmp_msg_0_0.priority = 44;
    tmp_tmp_msg_0_0.x = 25132;
    tmp_tmp_msg_0_0.y = 8399;
    tmp_tmp_msg_0_0.z = -561;
    tmp_tmp_msg_0_0.t = -20592;
    IMC::Tachograph tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timestamp_last_service = 0.482214069338;
    tmp_tmp_tmp_msg_0_0_0.time_next_service = 0.645522875862;
    tmp_tmp_tmp_msg_0_0_0.time_motor_next_service = 0.573716041789;
    tmp_tmp_tmp_msg_0_0_0.time_idle_ground = 0.701203289023;
    tmp_tmp_tmp_msg_0_0_0.time_idle_air = 0.559843098936;
    tmp_tmp_tmp_msg_0_0_0.time_idle_water = 0.655206004887;
    tmp_tmp_tmp_msg_0_0_0.time_idle_underwater = 0.140445094257;
    tmp_tmp_tmp_msg_0_0_0.time_idle_unknown = 0.415174051;
    tmp_tmp_tmp_msg_0_0_0.time_motor_ground = 0.723207920213;
    tmp_tmp_tmp_msg_0_0_0.time_motor_air = 0.273865772996;
    tmp_tmp_tmp_msg_0_0_0.time_motor_water = 0.938210871468;
    tmp_tmp_tmp_msg_0_0_0.time_motor_underwater = 0.648141069294;
    tmp_tmp_tmp_msg_0_0_0.time_motor_unknown = 0.337689238662;
    tmp_tmp_tmp_msg_0_0_0.rpm_min = -1967;
    tmp_tmp_tmp_msg_0_0_0.rpm_max = -27839;
    tmp_tmp_tmp_msg_0_0_0.depth_max = 0.88483513853;
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
    msg.setTimeStamp(0.473223577238);
    msg.setSource(30469U);
    msg.setSourceEntity(238U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(70U);
    msg.original_source = 45074U;
    msg.destination = 1319U;
    msg.timeout = 0.557467173844;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.480071091367;
    tmp_msg_0.lon = 0.0338151665258;
    tmp_msg_0.z = 0.085006235105;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.speed = 0.480475271917;
    tmp_msg_0.speed_units = 110U;
    tmp_msg_0.takeoff_pitch = 0.245358148567;
    tmp_msg_0.custom.assign("PZNRYWJTRYWBKUJPUWQIYCDHREYQLYDFUGXSFBWPPKRHRLJHECOZNOCJLGYWIWEGZWBBMQUIIQLFEMYGXGFMWJXMTVJVNXSFXQJFUDMOMNOHIFHZZKOZCNATCGCWKTRYSAQOLPBXEVUSBPOPBCBGKVMTCSWZTVQLIAEZYLVHKLGDTDIMNLMCEVRUYGZDJXOJSTFNASBVUUFAXRINSKSCIXETBKVRADKAOADFXRSKZEADPPAPEHLIOMHN");
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
    msg.setTimeStamp(0.541541050328);
    msg.setSource(8690U);
    msg.setSourceEntity(236U);
    msg.setDestination(6213U);
    msg.setDestinationEntity(204U);
    msg.original_source = 11292U;
    msg.destination = 63212U;
    msg.timeout = 0.946176994708;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 16202U;
    tmp_msg_0.destination = 48683U;
    tmp_msg_0.timeout = 0.458011411271;
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.826565568961;
    tmp_tmp_msg_0_0.lon = 0.292160283512;
    tmp_tmp_msg_0_0.speed = 0.346531952178;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_tmp_msg_0_0.limits = 153U;
    tmp_tmp_msg_0_0.max_depth = 0.340351169524;
    tmp_tmp_msg_0_0.min_alt = 0.850351145865;
    tmp_tmp_msg_0_0.time_limit = 0.468033048634;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.979766616216;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.75100720963;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("OYJRUEVXVYNQVKJGXQDLRYBDEHAPMBC");
    tmp_tmp_msg_0_0.custom.assign("VSMLMGLSNCWNZLSQBEUPWVWRDCZKKDFKLGOMOJMUOXVCYENKNRSOJXRTIBARB");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.936145312677);
    msg.setSource(13413U);
    msg.setSourceEntity(238U);
    msg.setDestination(8333U);
    msg.setDestinationEntity(135U);
    msg.original_source = 23516U;
    msg.destination = 63717U;
    msg.timeout = 0.333347691176;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 13550U;
    tmp_msg_0.control_ent = 138U;
    tmp_msg_0.timeout = 0.707782116117;
    tmp_msg_0.loiter_radius = 0.360482363321;
    tmp_msg_0.altitude_interval = 0.735908843449;
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
    msg.setTimeStamp(0.457801401595);
    msg.setSource(56210U);
    msg.setSourceEntity(70U);
    msg.setDestination(9176U);
    msg.setDestinationEntity(77U);
    msg.type = 208U;
    msg.comm_interface = 60781U;
    msg.model = 5176U;
    msg.list.assign("LRWBGVJGQESXYKWPBLABXJDVCTLNYSMQMEFKKOXJEGRYUJFBIWASKNTOMUJGZHUORWIFFCVULJROQIXERPNCKZQOTCHOKSLXQKRJPXHAMDWGCERIBSZDLJSZJYMFVCNLIFOXGQVOZBANMXDKECQ");

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
    msg.setTimeStamp(0.751338309147);
    msg.setSource(45644U);
    msg.setSourceEntity(146U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(83U);
    msg.type = 142U;
    msg.comm_interface = 34613U;
    msg.model = 22987U;
    msg.list.assign("KOUBFTUGJVTLWQRXNNFUOXWQLMZAYBYAXJTTPIPBMCMSFTTZHOLDXYHHWBGSSGBTHUVGEAKFGSFJRPVHWRGYYEIKVZRDQGVDJPLNOZIKNTHJDSYV");

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
    msg.setTimeStamp(0.667435142686);
    msg.setSource(54287U);
    msg.setSourceEntity(135U);
    msg.setDestination(3551U);
    msg.setDestinationEntity(239U);
    msg.type = 107U;
    msg.comm_interface = 23801U;
    msg.model = 46813U;
    msg.list.assign("LRBMXAELDYEHQTOSGMTKUOSXCIUFIJGXYBQIDHKMJNTWCHKIDTCWCTKBYRVTSEKSYYGNVVEDAWXJOUJWIAVABHYZAXKIXJIZDDOLMGZPNNJZSFCGBWLFIFZZRGRSFABMWMRUVIHRDNAOPULQXEMT");

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
    msg.setTimeStamp(0.345169591744);
    msg.setSource(31866U);
    msg.setSourceEntity(252U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(187U);
    msg.type = 102U;
    msg.req_id = 2754688425U;
    msg.ttl = 25808U;
    msg.code = 157U;
    msg.destination.assign("FDEKKZUSFCFTQSGXESQNUWPUUDHHDKKHOMVGAHXJVJJUGAAZBOYJKGLCPFTURRLKIABALOJZPNETYRWWFAIGNSXFNQLGBPHKXLVNPTYSDGKVIVCQBQOIARMPLNAWDYBZOTLRDTHYQYVPZAAXCOJLEUNBPMHMOQSIVVMOQINZQZLXMWXGMPCIZWHRBCPOFFBRWFCCYWJJEURKEO");
    msg.source.assign("EGGXUGMFPEGXPMINYKRQEXJIWXXEZOPVJGXJHYQOJMAZWTYOIVFAHVCCFIAQGDTXOMQDDVUVDRBTFHX");
    msg.acknowledge = 234U;
    msg.status = 158U;
    const char tmp_msg_0[] = {102, -120, 56, -49, -127, -44, -5, -90, 72, -87, 112, -126, 109, -98, -123, -33, -19, 57, 78, 60, -125, 21, -24, -11, -58, -65, -33, -45, 8, -58, -102, -98, 68, 106, 3, -26, -95, -27, 34, 23, -112, 98, 106, -89, 107, -26, -48, 53, -16, 89, -5, -30, 45, -106, -64, -18, 100, 56, -55, -83, -43, -5, -92, 36, -65, -65, 88, 96, 118, 68, -56, -69, 73, -89, 47, 35, 123, 11, 98, -105, -115, -26, -36, 5, -50, -15, -2, 82, 56, 92, -5, -45, -39, -101, -61, -114, -45, 4, 68, -115, 105, -123, -70, -96, -88, -106, 121, 34, 108, -88, 99, -101, 50, 104, -35, -97, 3, -118, -66, 14, 104, -60, 9, -35, 29, -122, -65, -18, 81, 42, 51, 22, -56, 37, -60, -90, 67, -26, -56, 85, -32, 80, 86, 69, -18, 97, -82, 50, 56, 104, 26, 66, -125, -13, -37, 36, -55, -124, 35, -22, -24, 18, 11, -108, 50, -122, -107, 114, -12, 5, 120, 80, 43, -39, 115, 9, -71, -78, 93, -84, 86, -117, -42, -120, -102, 36, -8, -5, 75, -37, 11, 53, 59, -119, -17, -55, 95, -80, 62, -73, -51, 115, -74, -101, -28, 64, -72, 114, -36, 90, -58, -71, 87, 94, 30, 113, 85, -87, -91, 105, 68, -52, -24, 62, -88, -34, 115, -112, -12, 46, 64, 28, -125, -27, -95, 85};
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
    msg.setTimeStamp(0.401448066485);
    msg.setSource(1516U);
    msg.setSourceEntity(249U);
    msg.setDestination(57990U);
    msg.setDestinationEntity(18U);
    msg.type = 85U;
    msg.req_id = 2643218102U;
    msg.ttl = 39489U;
    msg.code = 5U;
    msg.destination.assign("SSWGEUCOVLBFVXDHLCEBKMXTWEFWLJAGI");
    msg.source.assign("BDXKSLXXHWLAWXKBULKNQJLNVFKTWZZMTWWCVXWBQWGPUMDZBUZEUATIEBKRLGFYKYGNDRSHXHLVLVSEH");
    msg.acknowledge = 191U;
    msg.status = 11U;
    const char tmp_msg_0[] = {59, -118, -121, 6, -82, 37, -84, -43, -17, -92, -98, -68, 62, 60, 3, -126, -17, -32, -12, 39, -11, 99, -128, 14, -3, -59, 16, 44, -102, 102, 62, -8, -100, -65, 88, 23, -30, -99, -4, 14, 77, 50, -62, -124, 11, 16, 58, -73, 59, 102};
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
    msg.setTimeStamp(0.925691885636);
    msg.setSource(29014U);
    msg.setSourceEntity(228U);
    msg.setDestination(9072U);
    msg.setDestinationEntity(151U);
    msg.type = 40U;
    msg.req_id = 331945556U;
    msg.ttl = 29658U;
    msg.code = 114U;
    msg.destination.assign("XDNNBVDUEWEVSFBOFXHWLRE");
    msg.source.assign("VKNXHXTDOLQTJSRCMMGWSRNMYCMVOUPKMFJLIGDCVXBHPPONRPGYSNARFYIZZUHGONIDBJGVVBWMIKLMFSVAMGAWJSQLVHVEKESYXUOVIGYTDCFHMICFRYCDQFATQETKNLTRPMVYRHYZEPUFDHCEWJXJOAOOTQJZWEBAFGNBTBGFO");
    msg.acknowledge = 121U;
    msg.status = 48U;
    const char tmp_msg_0[] = {-96, 101, -1, -79, 54, -84, 65, 119, -38, -92, 47, 70, -82, -86, -128, -39, 45, 8, -125, -94, -3, 21, -103, 76, -43, -34, 8, 65, 126, 95, -113, -99, -127, -3, 53, -60, -62, -16, -26, -38, 47, 103, -6, -53, 76, -93, -125, -58, -51, -39, -4, -115, -92, 33, 104, 4, 43, 101, -76, 108, -57, -67, -31, 93, -73, -66, -5, -76, 18, -105, 103, -29, -98};
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
    msg.setTimeStamp(0.934113037697);
    msg.setSource(41384U);
    msg.setSourceEntity(225U);
    msg.setDestination(41361U);
    msg.setDestinationEntity(65U);
    msg.id = 151U;
    msg.range = 0.496368250985;

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
    msg.setTimeStamp(0.810021730343);
    msg.setSource(16086U);
    msg.setSourceEntity(162U);
    msg.setDestination(48181U);
    msg.setDestinationEntity(91U);
    msg.id = 208U;
    msg.range = 0.0651196562298;

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
    msg.setTimeStamp(0.272716889878);
    msg.setSource(22683U);
    msg.setSourceEntity(241U);
    msg.setDestination(33228U);
    msg.setDestinationEntity(97U);
    msg.id = 17U;
    msg.range = 0.586561899272;

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
    msg.setTimeStamp(0.832409625003);
    msg.setSource(19803U);
    msg.setSourceEntity(89U);
    msg.setDestination(746U);
    msg.setDestinationEntity(244U);
    msg.beacon.assign("VFQVTZKFAVQKWJICEDTYNHIGLWLGFSZLXXEYKOHZCRESKZIAPTKPIONYBOXXJSHAFJMLYEWFBZCMLQAHBYH");
    msg.lat = 0.0339748931976;
    msg.lon = 0.306048032967;
    msg.depth = 0.903846611936;
    msg.query_channel = 137U;
    msg.reply_channel = 179U;
    msg.transponder_delay = 193U;

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
    msg.setTimeStamp(0.67252373456);
    msg.setSource(59231U);
    msg.setSourceEntity(101U);
    msg.setDestination(60607U);
    msg.setDestinationEntity(152U);
    msg.beacon.assign("DYGOPHHOESRWYCORRBUXPBGYYKDIFRBFLHFDZGWTOLVJIRLCLUTKTZSOEKIRACNZVCKVBXFFQULLDTZAJKXPGDMNPPVWGAJPZMZWKACPUGMFGIJQZASLGVFN");
    msg.lat = 0.810393014093;
    msg.lon = 0.108333210867;
    msg.depth = 0.859601527736;
    msg.query_channel = 116U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 60U;

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
    msg.setTimeStamp(0.507904042299);
    msg.setSource(23450U);
    msg.setSourceEntity(166U);
    msg.setDestination(55928U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("DNWFMPPTLKKIZUMYSFDGEWEOBXGXBHNTROUMR");
    msg.lat = 0.813566205379;
    msg.lon = 0.0509881013316;
    msg.depth = 0.792643045558;
    msg.query_channel = 82U;
    msg.reply_channel = 30U;
    msg.transponder_delay = 202U;

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
    msg.setTimeStamp(0.492520733374);
    msg.setSource(13881U);
    msg.setSourceEntity(193U);
    msg.setDestination(52365U);
    msg.setDestinationEntity(76U);
    msg.op = 169U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BMTFEICNZRKHHGGVSACOEAUPLMNUDTBIMFQTEDPKYWAUAWXRENXUZDBVJFCZRGGCISPJQZWMDHOMZXNIDVNOELJJRXUGQIXEMYRWSHGEVLPJFYUYXVRBAQZRIEZBOLY");
    tmp_msg_0.lat = 0.314749677902;
    tmp_msg_0.lon = 0.399717220931;
    tmp_msg_0.depth = 0.587633765745;
    tmp_msg_0.query_channel = 157U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 150U;
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
    msg.setTimeStamp(0.431447006183);
    msg.setSource(4443U);
    msg.setSourceEntity(167U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(55U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.756001818465);
    msg.setSource(1283U);
    msg.setSourceEntity(4U);
    msg.setDestination(14094U);
    msg.setDestinationEntity(194U);
    msg.op = 44U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NNFBMLITBRTLDSMZGLSRUGRDAXMRIRYFSYHWBDALDJ");
    tmp_msg_0.lat = 0.92313581963;
    tmp_msg_0.lon = 0.365529980568;
    tmp_msg_0.depth = 0.576330721187;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 25U;
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
    msg.setTimeStamp(0.102618183951);
    msg.setSource(29506U);
    msg.setSourceEntity(10U);
    msg.setDestination(16134U);
    msg.setDestinationEntity(138U);
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 62U;
    tmp_msg_0.op = 234U;
    tmp_msg_0.plan_id.assign("SFGOYLCRELRSPHPIOCEZUEDXARDLWDZVTPMRVHHXMJVQTLPBCUHKOVBKJQOMCZFCLG");
    tmp_msg_0.params.assign("TYJHOOYJFPLLDWROXBHGEGDOFGNGMNHIIHMVQRISPFJKEDZQSPXVWGTNDYCWBGGYLOLPLWNIEETAELTRHUCNQVCMCQPHNKMDRIURFZCARTJAJBFCFVMHUESAXIGC");
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
    msg.setTimeStamp(0.434455390093);
    msg.setSource(59367U);
    msg.setSourceEntity(205U);
    msg.setDestination(41611U);
    msg.setDestinationEntity(72U);
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.367722310918;
    tmp_msg_0.phi = 0.608537397458;
    tmp_msg_0.theta = 0.947762073493;
    tmp_msg_0.psi = 0.681528033453;
    tmp_msg_0.psi_magnetic = 0.636641758602;
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
    msg.setTimeStamp(0.0468078736543);
    msg.setSource(32859U);
    msg.setSourceEntity(137U);
    msg.setDestination(8581U);
    msg.setDestinationEntity(254U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.196814488234;
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
    msg.setTimeStamp(0.813248755472);
    msg.setSource(44096U);
    msg.setSourceEntity(59U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(108U);
    msg.op = 119U;
    msg.system.assign("HVGPFTGKQBGZZEMHILEVDAMRJHGRECTMTZYLVFPUMBHWOBDOHANFQXJNDZEMJVVCGGVUZBZZEXXECNBWJFMKYRHBPJPIQOYQHFSNXIIJOWDLSYQCDSTGCNXUISRKOUWOSJKRPNISKANTKPRWZXGOEYPFXMOLCQXAKJUPYMQLJCBLWLMNMWSDGQRCKAAIDZTOUUFRNEPDLSULYA");
    msg.range = 0.126203890911;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 170U;
    tmp_msg_0.frequency = 893547483U;
    tmp_msg_0.min_range = 22981U;
    tmp_msg_0.max_range = 19076U;
    tmp_msg_0.bits_per_point = 87U;
    tmp_msg_0.scale_factor = 0.710404502728;
    const char tmp_tmp_msg_0_0[] = {93, -110, -71, -84, 24, -108, 71, -73, 47, 107, 57, 45, -104, 20, -82, -24, 116, 120, -71};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.36623118472);
    msg.setSource(11601U);
    msg.setSourceEntity(231U);
    msg.setDestination(3514U);
    msg.setDestinationEntity(71U);
    msg.op = 119U;
    msg.system.assign("OOCFPRBPPKCPXASMHDFCCNICBJNCZRFXDIOFAURNGJKOGLISYWNBZQMNPYIGFKRHZLIBOLUGVRTREXZWAXGBEUAKJDUEZSJLCRWQTULQVSJZJFSOFWZMGYZZTWTHKKBYNUYQNDWEMAHWUBDBDRKQPHQNSDTVAHFZIVVYXJKAQPFMBTQPTVFUXETJYOGHYK");
    msg.range = 0.55590837402;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EBIDILZFCBCLQVAFGYZUHZJAMNPSDHZFYCYNGSUAWLGTVFOTRWACUVZZWNUWRREYXMNOTDZXWBGOVHATHRJKLKOUVQSMMMQXWUAEJTFDNMQAHNYGMBTBVOIPTOONMXYJULCFXKQCIVSEJYQXDEIWBVNKXESZHIPRDSNDKQDZCRSMM");
    tmp_msg_0.feature_type = 108U;
    tmp_msg_0.rgb_red = 66U;
    tmp_msg_0.rgb_green = 120U;
    tmp_msg_0.rgb_blue = 136U;
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
    msg.setTimeStamp(0.960003920034);
    msg.setSource(1006U);
    msg.setSourceEntity(98U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(106U);
    msg.op = 156U;
    msg.system.assign("XVPHJKBLBTERNYNZWLQAMBNPGDEQXSSBDHSLZMUWXHDGOGFCJZTVFURHYCWJYJOQNHMMROAGONRKBOQRRSIIKCGOEDCEZOYWPYXSWPRSXTMPGWKEXEYWFIPUVEFMNBAPLATYSTLUNIAHUAODTFLQQTWVGDSUVOFAZUSZJCDUIGSNIHMYGTARELF");
    msg.range = 0.437437066566;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 54471U;
    tmp_msg_0.lat = 0.893239353175;
    tmp_msg_0.lon = 0.697393047531;
    tmp_msg_0.z = 0.384039517353;
    tmp_msg_0.z_units = 93U;
    tmp_msg_0.speed = 0.328190625708;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.custom.assign("KLVODKRDYNTMBOWKPKYORNRHVNSYOUROKWTDVMVKVGSNZRURBGLCCKUQAXZJFWIICMXBLWTIIMNTTMEZFIAESOWHMAPUYPSOKIAQMSDWQKLWDFZHGE");
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
    msg.setTimeStamp(0.614482118718);
    msg.setSource(34443U);
    msg.setSourceEntity(213U);
    msg.setDestination(54497U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.883549292081);
    msg.setSource(7411U);
    msg.setSourceEntity(7U);
    msg.setDestination(21634U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.239748027914);
    msg.setSource(52308U);
    msg.setSourceEntity(43U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.613213536495);
    msg.setSource(58651U);
    msg.setSourceEntity(135U);
    msg.setDestination(13224U);
    msg.setDestinationEntity(80U);
    msg.list.assign("VNIHBZCPPWPUFZDVKIEFHQCQFCCMRSMDLTFRNZISKVEXZLVWKTUJWSJVHTFSPTKLIPDGLPOEXOCXRFAIHMTRHAYQMKFAXOBEYUSBKDKQIJWLAWJKTSJFXKZQDOHNWHLMRTZYRNSGQPYDUWBOXJLCLVUGEP");

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
    msg.setTimeStamp(0.889188876856);
    msg.setSource(6897U);
    msg.setSourceEntity(195U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(65U);
    msg.list.assign("KUGZZGKZSOJBGMRKVHZPOEJBSQDUMTICIXMDORUDFWWBJEVVSZGYRQXCLURUMNSTJGAID");

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
    msg.setTimeStamp(0.189253151488);
    msg.setSource(9299U);
    msg.setSourceEntity(9U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(80U);
    msg.list.assign("SRBGSVMNFPJNRZZKHQZKOQEP");

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
    msg.setTimeStamp(0.394523159829);
    msg.setSource(18678U);
    msg.setSourceEntity(38U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(173U);
    msg.peer.assign("WXPWCUSHFGMWNMARZOTVFZDDLYRGNLYMVZBUTDILVLVPCHEIBMGGCJQOLICVCBQHKGAUKIRNPWSITKZZ");
    msg.rssi = 0.0670153685116;
    msg.integrity = 37474U;

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
    msg.setTimeStamp(0.273039631242);
    msg.setSource(56207U);
    msg.setSourceEntity(169U);
    msg.setDestination(28840U);
    msg.setDestinationEntity(253U);
    msg.peer.assign("ZPJLOSTOMRXMDEPCXMCALWIUGJGSZZXQQOKFSSISYWERTZGDEIDSXVUVATMTMUJMLUOFDEHUAOPINHOGZNMTDQLBPMZSUZRBPFSFHUIQXJZSBTNNOKBACQAAWRZHBCXRJGWBYHBGSIAVVCWYBEQXMCBLFDIQWEHRUPNHNKRYWMP");
    msg.rssi = 0.0247075016958;
    msg.integrity = 58690U;

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
    msg.setTimeStamp(0.777838500809);
    msg.setSource(6896U);
    msg.setSourceEntity(25U);
    msg.setDestination(9775U);
    msg.setDestinationEntity(17U);
    msg.peer.assign("DLPZSEQOANBZQVJPKYEZLDREGJYPNZCJXKBCIWGOURTJKYFUMYFLGPTBIABASDDMSGSDFBEPTMILMFVATQQOARYCIOSKBHHOHSPUSNIFJIALNEDEMDFNXYYXPAIGERCCZCYUXVGRBQGNFCBXIWFWCSAVLRMTUOZFGVORXQLYZERTGKHSXWDXPUHDLQAQQWOJPAJRXVBWLXWKCWWOOGKZJMHZBETTNKKVNDJVIHTUQVJRKUPNMYHTMSICWEM");
    msg.rssi = 0.644721352785;
    msg.integrity = 1235U;

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
    msg.setTimeStamp(0.77672149808);
    msg.setSource(51608U);
    msg.setSourceEntity(139U);
    msg.setDestination(11063U);
    msg.setDestinationEntity(80U);
    msg.value = 18724;

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
    msg.setTimeStamp(0.32672042325);
    msg.setSource(9582U);
    msg.setSourceEntity(243U);
    msg.setDestination(31618U);
    msg.setDestinationEntity(132U);
    msg.value = 10067;

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
    msg.setTimeStamp(0.430144120935);
    msg.setSource(11195U);
    msg.setSourceEntity(167U);
    msg.setDestination(13873U);
    msg.setDestinationEntity(94U);
    msg.value = -26275;

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
    msg.setTimeStamp(0.307651701395);
    msg.setSource(46078U);
    msg.setSourceEntity(147U);
    msg.setDestination(17415U);
    msg.setDestinationEntity(198U);
    msg.value = 0.146179337415;

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
    msg.setTimeStamp(0.616652657987);
    msg.setSource(55045U);
    msg.setSourceEntity(232U);
    msg.setDestination(52867U);
    msg.setDestinationEntity(33U);
    msg.value = 0.385334790795;

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
    msg.setTimeStamp(0.0286944133898);
    msg.setSource(2597U);
    msg.setSourceEntity(253U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(149U);
    msg.value = 0.260472386715;

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
    msg.setTimeStamp(0.163678436698);
    msg.setSource(47970U);
    msg.setSourceEntity(80U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(229U);
    msg.value = 0.714637707313;

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
    msg.setTimeStamp(0.667394360453);
    msg.setSource(5828U);
    msg.setSourceEntity(75U);
    msg.setDestination(44268U);
    msg.setDestinationEntity(233U);
    msg.value = 0.636812223503;

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
    msg.setTimeStamp(0.558942517386);
    msg.setSource(27111U);
    msg.setSourceEntity(0U);
    msg.setDestination(8747U);
    msg.setDestinationEntity(23U);
    msg.value = 0.421005481052;

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
    msg.setTimeStamp(0.0377519447626);
    msg.setSource(32858U);
    msg.setSourceEntity(31U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(113U);
    msg.validity = 36884U;
    msg.type = 195U;
    msg.utc_year = 62599U;
    msg.utc_month = 72U;
    msg.utc_day = 162U;
    msg.utc_time = 0.424067168288;
    msg.lat = 0.723885545976;
    msg.lon = 0.736286017236;
    msg.height = 0.0104765514315;
    msg.satellites = 238U;
    msg.cog = 0.433039776036;
    msg.sog = 0.853849179907;
    msg.hdop = 0.511343122039;
    msg.vdop = 0.245525134052;
    msg.hacc = 0.595485296395;
    msg.vacc = 0.90938498838;

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
    msg.setTimeStamp(0.778753643252);
    msg.setSource(51991U);
    msg.setSourceEntity(202U);
    msg.setDestination(34521U);
    msg.setDestinationEntity(74U);
    msg.validity = 4396U;
    msg.type = 101U;
    msg.utc_year = 58227U;
    msg.utc_month = 216U;
    msg.utc_day = 244U;
    msg.utc_time = 0.889728438752;
    msg.lat = 0.939238141354;
    msg.lon = 0.297588617496;
    msg.height = 0.657836098968;
    msg.satellites = 51U;
    msg.cog = 0.983736705314;
    msg.sog = 0.661553349078;
    msg.hdop = 0.806067927404;
    msg.vdop = 0.109918405536;
    msg.hacc = 0.443380037689;
    msg.vacc = 0.338342738972;

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
    msg.setTimeStamp(0.692242353884);
    msg.setSource(26734U);
    msg.setSourceEntity(31U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(148U);
    msg.validity = 52723U;
    msg.type = 133U;
    msg.utc_year = 10286U;
    msg.utc_month = 44U;
    msg.utc_day = 9U;
    msg.utc_time = 0.386402489022;
    msg.lat = 0.113163708906;
    msg.lon = 0.158042249173;
    msg.height = 0.380297967065;
    msg.satellites = 58U;
    msg.cog = 0.562987519224;
    msg.sog = 0.829622818244;
    msg.hdop = 0.410356523879;
    msg.vdop = 0.990633425116;
    msg.hacc = 0.513422945764;
    msg.vacc = 0.206861338953;

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
    msg.setTimeStamp(0.0387845272781);
    msg.setSource(10722U);
    msg.setSourceEntity(81U);
    msg.setDestination(36427U);
    msg.setDestinationEntity(47U);
    msg.time = 0.194331724104;
    msg.phi = 0.201058910586;
    msg.theta = 0.916314346435;
    msg.psi = 0.948427899508;
    msg.psi_magnetic = 0.650673287818;

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
    msg.setTimeStamp(0.435107168083);
    msg.setSource(48923U);
    msg.setSourceEntity(200U);
    msg.setDestination(40550U);
    msg.setDestinationEntity(34U);
    msg.time = 0.65631975504;
    msg.phi = 0.155474103684;
    msg.theta = 0.777633796724;
    msg.psi = 0.2200266466;
    msg.psi_magnetic = 0.203083241027;

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
    msg.setTimeStamp(0.854759566972);
    msg.setSource(9111U);
    msg.setSourceEntity(12U);
    msg.setDestination(38645U);
    msg.setDestinationEntity(47U);
    msg.time = 0.867310021253;
    msg.phi = 0.561541937374;
    msg.theta = 0.651369849653;
    msg.psi = 0.59358429648;
    msg.psi_magnetic = 0.8616056758;

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
    msg.setTimeStamp(0.0154991977702);
    msg.setSource(42768U);
    msg.setSourceEntity(230U);
    msg.setDestination(39583U);
    msg.setDestinationEntity(223U);
    msg.time = 0.121550225073;
    msg.x = 0.95579514868;
    msg.y = 0.483915642156;
    msg.z = 0.846346559691;
    msg.timestep = 0.553028712715;

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
    msg.setTimeStamp(0.904397828614);
    msg.setSource(6442U);
    msg.setSourceEntity(158U);
    msg.setDestination(19817U);
    msg.setDestinationEntity(51U);
    msg.time = 0.442728381253;
    msg.x = 0.529782653725;
    msg.y = 0.610942695633;
    msg.z = 0.722006567235;
    msg.timestep = 0.863187092671;

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
    msg.setTimeStamp(0.396438737389);
    msg.setSource(16715U);
    msg.setSourceEntity(49U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(64U);
    msg.time = 0.778115103324;
    msg.x = 0.887647681434;
    msg.y = 0.772225825707;
    msg.z = 0.795222415786;
    msg.timestep = 0.779247503641;

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
    msg.setTimeStamp(0.483208004958);
    msg.setSource(58038U);
    msg.setSourceEntity(12U);
    msg.setDestination(50161U);
    msg.setDestinationEntity(199U);
    msg.time = 0.253580901779;
    msg.x = 0.930116355477;
    msg.y = 0.173498804651;
    msg.z = 0.720148373198;

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
    msg.setTimeStamp(0.662933342843);
    msg.setSource(57716U);
    msg.setSourceEntity(9U);
    msg.setDestination(63919U);
    msg.setDestinationEntity(210U);
    msg.time = 0.69649582132;
    msg.x = 0.160673902827;
    msg.y = 0.425551472761;
    msg.z = 0.925917012986;

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
    msg.setTimeStamp(0.431727459223);
    msg.setSource(13904U);
    msg.setSourceEntity(98U);
    msg.setDestination(25289U);
    msg.setDestinationEntity(91U);
    msg.time = 0.0837895886918;
    msg.x = 0.547998358246;
    msg.y = 0.213245216558;
    msg.z = 0.744727352608;

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
    msg.setTimeStamp(0.901062969206);
    msg.setSource(33628U);
    msg.setSourceEntity(242U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(115U);
    msg.time = 0.554893670796;
    msg.x = 0.118113022656;
    msg.y = 0.439436500712;
    msg.z = 0.985463821362;

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
    msg.setTimeStamp(0.0760681403913);
    msg.setSource(10829U);
    msg.setSourceEntity(35U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(99U);
    msg.time = 0.405739629579;
    msg.x = 0.667743733786;
    msg.y = 0.906257300735;
    msg.z = 0.920472804352;

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
    msg.setTimeStamp(0.93175397168);
    msg.setSource(49882U);
    msg.setSourceEntity(80U);
    msg.setDestination(1083U);
    msg.setDestinationEntity(238U);
    msg.time = 0.606467838479;
    msg.x = 0.147187779804;
    msg.y = 0.198742650019;
    msg.z = 0.985645829344;

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
    msg.setTimeStamp(0.111890792826);
    msg.setSource(48490U);
    msg.setSourceEntity(251U);
    msg.setDestination(51904U);
    msg.setDestinationEntity(193U);
    msg.time = 0.729395738181;
    msg.x = 0.198668987225;
    msg.y = 0.364696231274;
    msg.z = 0.194420181926;

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
    msg.setTimeStamp(0.465963637079);
    msg.setSource(56276U);
    msg.setSourceEntity(159U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(100U);
    msg.time = 0.384569328671;
    msg.x = 0.658275617467;
    msg.y = 0.462905194814;
    msg.z = 0.371170732712;

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
    msg.setTimeStamp(0.966078842591);
    msg.setSource(6369U);
    msg.setSourceEntity(116U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(221U);
    msg.time = 0.835003389768;
    msg.x = 0.131552357101;
    msg.y = 0.220342771374;
    msg.z = 0.826856452602;

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
    msg.setTimeStamp(0.939227711968);
    msg.setSource(17947U);
    msg.setSourceEntity(158U);
    msg.setDestination(19595U);
    msg.setDestinationEntity(24U);
    msg.validity = 193U;
    msg.x = 0.865332162826;
    msg.y = 0.057616832276;
    msg.z = 0.675072890353;

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
    msg.setTimeStamp(0.614070780497);
    msg.setSource(52577U);
    msg.setSourceEntity(230U);
    msg.setDestination(39201U);
    msg.setDestinationEntity(141U);
    msg.validity = 113U;
    msg.x = 0.251045517405;
    msg.y = 0.666944269012;
    msg.z = 0.413817216057;

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
    msg.setTimeStamp(0.140171110724);
    msg.setSource(44514U);
    msg.setSourceEntity(229U);
    msg.setDestination(24983U);
    msg.setDestinationEntity(66U);
    msg.validity = 169U;
    msg.x = 0.957452813647;
    msg.y = 0.594200936007;
    msg.z = 0.253005917172;

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
    msg.setTimeStamp(0.10772811332);
    msg.setSource(58776U);
    msg.setSourceEntity(196U);
    msg.setDestination(19029U);
    msg.setDestinationEntity(67U);
    msg.validity = 33U;
    msg.x = 0.956722354877;
    msg.y = 0.640337775172;
    msg.z = 0.988859188659;

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
    msg.setTimeStamp(0.548905854312);
    msg.setSource(24177U);
    msg.setSourceEntity(166U);
    msg.setDestination(55451U);
    msg.setDestinationEntity(208U);
    msg.validity = 229U;
    msg.x = 0.634688769486;
    msg.y = 0.351939477453;
    msg.z = 0.302141511431;

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
    msg.setTimeStamp(0.725557018211);
    msg.setSource(54041U);
    msg.setSourceEntity(148U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(129U);
    msg.validity = 11U;
    msg.x = 0.58903364991;
    msg.y = 0.52844392365;
    msg.z = 0.964082886844;

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
    msg.setTimeStamp(0.778133032506);
    msg.setSource(10363U);
    msg.setSourceEntity(158U);
    msg.setDestination(61860U);
    msg.setDestinationEntity(217U);
    msg.time = 0.353282765235;
    msg.x = 0.637648258688;
    msg.y = 0.0583226253157;
    msg.z = 0.986444592145;

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
    msg.setTimeStamp(0.575484589881);
    msg.setSource(57204U);
    msg.setSourceEntity(103U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(232U);
    msg.time = 0.523546889824;
    msg.x = 0.677347682037;
    msg.y = 0.665401869325;
    msg.z = 0.614479923424;

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
    msg.setTimeStamp(0.258072590299);
    msg.setSource(64052U);
    msg.setSourceEntity(2U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(117U);
    msg.time = 0.0387867515358;
    msg.x = 0.933989812087;
    msg.y = 0.0284542042379;
    msg.z = 0.306886572621;

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
    msg.setTimeStamp(0.488837002301);
    msg.setSource(13544U);
    msg.setSourceEntity(191U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(155U);
    msg.validity = 154U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.689971846587;
    tmp_msg_0.y = 0.782904709541;
    tmp_msg_0.z = 0.242814022323;
    tmp_msg_0.phi = 0.570420505793;
    tmp_msg_0.theta = 0.91455659615;
    tmp_msg_0.psi = 0.0919186731367;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.366669998831;

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
    msg.setTimeStamp(0.792259653582);
    msg.setSource(50018U);
    msg.setSourceEntity(199U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(233U);
    msg.validity = 191U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.872838253614;
    tmp_msg_0.beam_height = 0.250896839597;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.971139830009;

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
    msg.setTimeStamp(0.356901369345);
    msg.setSource(9279U);
    msg.setSourceEntity(35U);
    msg.setDestination(63618U);
    msg.setDestinationEntity(0U);
    msg.validity = 0U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.243837596457;
    tmp_msg_0.y = 0.867183992311;
    tmp_msg_0.z = 0.28963930344;
    tmp_msg_0.phi = 0.578602909755;
    tmp_msg_0.theta = 0.257316030733;
    tmp_msg_0.psi = 0.188405129999;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.797979778024;

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
    msg.setTimeStamp(0.325384100422);
    msg.setSource(48203U);
    msg.setSourceEntity(155U);
    msg.setDestination(40396U);
    msg.setDestinationEntity(235U);
    msg.value = 0.605508756006;

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
    msg.setTimeStamp(0.448325112488);
    msg.setSource(42915U);
    msg.setSourceEntity(249U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(186U);
    msg.value = 0.711797758826;

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
    msg.setTimeStamp(0.794377500116);
    msg.setSource(41162U);
    msg.setSourceEntity(22U);
    msg.setDestination(15633U);
    msg.setDestinationEntity(16U);
    msg.value = 0.16383591736;

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
    msg.setTimeStamp(0.558936321373);
    msg.setSource(52192U);
    msg.setSourceEntity(233U);
    msg.setDestination(62618U);
    msg.setDestinationEntity(247U);
    msg.value = 0.917264931352;

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
    msg.setTimeStamp(0.314837350886);
    msg.setSource(37579U);
    msg.setSourceEntity(205U);
    msg.setDestination(12852U);
    msg.setDestinationEntity(24U);
    msg.value = 0.376855401477;

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
    msg.setTimeStamp(0.761750519521);
    msg.setSource(57535U);
    msg.setSourceEntity(254U);
    msg.setDestination(36370U);
    msg.setDestinationEntity(168U);
    msg.value = 0.216576623019;

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
    msg.setTimeStamp(0.0486926176704);
    msg.setSource(42710U);
    msg.setSourceEntity(42U);
    msg.setDestination(31993U);
    msg.setDestinationEntity(56U);
    msg.value = 0.64185167105;

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
    msg.setTimeStamp(0.93151068534);
    msg.setSource(18249U);
    msg.setSourceEntity(229U);
    msg.setDestination(45497U);
    msg.setDestinationEntity(212U);
    msg.value = 0.562187748009;

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
    msg.setTimeStamp(0.862937687787);
    msg.setSource(1660U);
    msg.setSourceEntity(191U);
    msg.setDestination(34575U);
    msg.setDestinationEntity(252U);
    msg.value = 0.377481290018;

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
    msg.setTimeStamp(0.525366228913);
    msg.setSource(55555U);
    msg.setSourceEntity(3U);
    msg.setDestination(36497U);
    msg.setDestinationEntity(36U);
    msg.value = 0.323196193143;

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
    msg.setTimeStamp(0.877731769008);
    msg.setSource(56958U);
    msg.setSourceEntity(106U);
    msg.setDestination(42209U);
    msg.setDestinationEntity(122U);
    msg.value = 0.909231941462;

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
    msg.setTimeStamp(0.0025965914955);
    msg.setSource(31593U);
    msg.setSourceEntity(168U);
    msg.setDestination(58215U);
    msg.setDestinationEntity(55U);
    msg.value = 0.456227407577;

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
    msg.setTimeStamp(0.435773801599);
    msg.setSource(36306U);
    msg.setSourceEntity(139U);
    msg.setDestination(1893U);
    msg.setDestinationEntity(83U);
    msg.value = 0.682530872112;

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
    msg.setTimeStamp(0.943313268131);
    msg.setSource(17294U);
    msg.setSourceEntity(222U);
    msg.setDestination(2379U);
    msg.setDestinationEntity(134U);
    msg.value = 0.228186498976;

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
    msg.setTimeStamp(0.633051132131);
    msg.setSource(11044U);
    msg.setSourceEntity(108U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(66U);
    msg.value = 0.181201353427;

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
    msg.setTimeStamp(0.319174342905);
    msg.setSource(61696U);
    msg.setSourceEntity(253U);
    msg.setDestination(59197U);
    msg.setDestinationEntity(115U);
    msg.value = 0.980395250242;

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
    msg.setTimeStamp(0.728445118904);
    msg.setSource(15581U);
    msg.setSourceEntity(111U);
    msg.setDestination(11293U);
    msg.setDestinationEntity(29U);
    msg.value = 0.804225911197;

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
    msg.setTimeStamp(0.0265519363586);
    msg.setSource(43956U);
    msg.setSourceEntity(172U);
    msg.setDestination(6082U);
    msg.setDestinationEntity(253U);
    msg.value = 0.570123760641;

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
    msg.setTimeStamp(0.9911496808);
    msg.setSource(5451U);
    msg.setSourceEntity(40U);
    msg.setDestination(18149U);
    msg.setDestinationEntity(41U);
    msg.value = 0.129718108217;

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
    msg.setTimeStamp(0.61657979752);
    msg.setSource(44153U);
    msg.setSourceEntity(154U);
    msg.setDestination(38343U);
    msg.setDestinationEntity(17U);
    msg.value = 0.184800897008;

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
    msg.setTimeStamp(0.134158717495);
    msg.setSource(19338U);
    msg.setSourceEntity(60U);
    msg.setDestination(7396U);
    msg.setDestinationEntity(27U);
    msg.value = 0.541755978308;

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
    msg.setTimeStamp(0.784897059938);
    msg.setSource(14461U);
    msg.setSourceEntity(174U);
    msg.setDestination(56286U);
    msg.setDestinationEntity(168U);
    msg.value = 0.97498242373;

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
    msg.setTimeStamp(0.41415344165);
    msg.setSource(50486U);
    msg.setSourceEntity(47U);
    msg.setDestination(28748U);
    msg.setDestinationEntity(226U);
    msg.value = 0.455863913819;

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
    msg.setTimeStamp(0.623068016632);
    msg.setSource(15609U);
    msg.setSourceEntity(63U);
    msg.setDestination(6512U);
    msg.setDestinationEntity(153U);
    msg.value = 0.245428164566;

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
    msg.setTimeStamp(0.843826500588);
    msg.setSource(35923U);
    msg.setSourceEntity(144U);
    msg.setDestination(63946U);
    msg.setDestinationEntity(109U);
    msg.direction = 0.519025367147;
    msg.speed = 0.613913251022;
    msg.turbulence = 0.28380582318;

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
    msg.setTimeStamp(0.01929676886);
    msg.setSource(54839U);
    msg.setSourceEntity(225U);
    msg.setDestination(26373U);
    msg.setDestinationEntity(135U);
    msg.direction = 0.283099289009;
    msg.speed = 0.641752686379;
    msg.turbulence = 0.523305301277;

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
    msg.setTimeStamp(0.218407546973);
    msg.setSource(16014U);
    msg.setSourceEntity(124U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.892369301402;
    msg.speed = 0.150965153558;
    msg.turbulence = 0.478936765996;

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
    msg.setTimeStamp(0.360301371808);
    msg.setSource(23908U);
    msg.setSourceEntity(173U);
    msg.setDestination(43884U);
    msg.setDestinationEntity(42U);
    msg.value = 0.0341849918917;

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
    msg.setTimeStamp(0.0831120938993);
    msg.setSource(44093U);
    msg.setSourceEntity(56U);
    msg.setDestination(7587U);
    msg.setDestinationEntity(98U);
    msg.value = 0.705535800161;

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
    msg.setTimeStamp(0.951923651375);
    msg.setSource(60686U);
    msg.setSourceEntity(34U);
    msg.setDestination(29409U);
    msg.setDestinationEntity(70U);
    msg.value = 0.715623854895;

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
    msg.setTimeStamp(0.479997514638);
    msg.setSource(206U);
    msg.setSourceEntity(42U);
    msg.setDestination(34988U);
    msg.setDestinationEntity(212U);
    msg.value.assign("LQZEFSLXZPHQSGUFLWDQPGKOMJOOAJWYIYNYCIVFLVNLLJVQIENXFZEEUOJWUHMCUEKTWNBEXSSUCNZZJDQPOHBUMBIGSOAWWDQBRNKXYCYWFTRAADOTSDAXTPVWRIYRMQDKGKSACIRJGVBLOMIDZYMUAQBDBLHOCZRHJFBIXPUZTSLNDGVMRA");

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
    msg.setTimeStamp(0.928268190462);
    msg.setSource(12458U);
    msg.setSourceEntity(81U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(47U);
    msg.value.assign("DRNHSXAGTTJLSQOQPQZWMJWSYXNVVNRTKWXTERACUEQYBVVGUSCKBYTWJQICEYDDWLPFWDAMMBOKZVUBSADEFUIDZRNATUQMHFUHVXLZFLYZOKOIKHNYKREMEHPBVUCSAYKOMJYOFWJJGWPLCGTJALCLTXIUCANYGSCRGZNGOOHFWUH");

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
    msg.setTimeStamp(0.629657684308);
    msg.setSource(39342U);
    msg.setSourceEntity(123U);
    msg.setDestination(12855U);
    msg.setDestinationEntity(187U);
    msg.value.assign("SMZIJJMJEQGHPVOVZJBSTXJREXFNKARBHGGPDFXLZITUVBNAPCMNUFYSADLVDFATDFFNNCNAOUQLDSOIRHRHGPJVFHNNEWBALOQQSHKQBQZ");

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
    msg.setTimeStamp(0.43409734114);
    msg.setSource(7526U);
    msg.setSourceEntity(161U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(125U);
    const char tmp_msg_0[] = {-1, 75, 21, 124, -86, 126, -94, -123, -76, -13, 105, 9, 34, 59, 17, 28, 103, 48, 29, 84, 30, 77, -73, -59, -17, 16, -54, -88, -117, 81, 92, 55, 46, -27, 78, -83, 89, -114, 74, 97, -3, 21, 10, -3, 117, -26, 87, 74, -13, 20, -60, -58, 40, -85, -103, -11, -24, -41, 29, 4, 61, 99, 2, 71, -48, -15, -82, -125, -81, -119, -47, 95, -109, 19, -122, 79, -50, 126, 30, 94, -12, 109, 119, -1, -2, -66, -37, -122, 30, 10, -38, -99, -104, -12, 123, -55, -71, 29, -94, 32, -6, -7, 34, 7, -116, 44, 71, -119, -111, 114, -54, -109, -117, -33, -72, -121, -116, 88, -32, 24, 6, -53, 33, 73, -50, 33, -64, -80, 101, 86, -13, -21, 57, 58, -64, 68, 90, 34, 62, -41, -36, 91, 118, -53};
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
    msg.setTimeStamp(0.465683769306);
    msg.setSource(29653U);
    msg.setSourceEntity(157U);
    msg.setDestination(8714U);
    msg.setDestinationEntity(150U);
    const char tmp_msg_0[] = {-25, -93, 73, 57, 114, 89, -7, 59, -122, 102, -20, -121, 74, 29, -61, 54, -16, 109, -95, 94, -95, -29, 38, -40, -113, -65, -49, 47, 77, -49, 93, 30, -54, 121, -15, 56, 16, -98, -38, -10, 54, 38, 111, 73, -40, 113, -64, -88, -42, -111, -52, 82, 92, -41, -105, -110, 96, -81, -101, 81, 7, 77, -106, -66, -8, 46, 79, 92, -92, -7, -103, -1, 30, -78, 86, -104, 49, 58, -95, 18, -2, -64, 32, -68, -51, -20, -29, -128, 17, -117, 121, -26, 73, 7, -117, 93, -56, -6, -9, -126, -98, -19, 98, 63, 82, 110};
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
    msg.setTimeStamp(0.791083835308);
    msg.setSource(18615U);
    msg.setSourceEntity(27U);
    msg.setDestination(3774U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {-45, -31, -60, -25, 124, 9, -107, -99, 116, 107, 76, 12, 56, -38, -42, 52, 64, 89, 116, 39, 52, -34, 7, 101, 118, 65, 106, -102, -7, -86, 72, -53, 34, -112, -74, 88, 55, 42, -90, -75, 85, 8, 66, -59, -42, -83, -128, -100, -46, -117, 106, 50, 25, -96, -70, 81, 18, 19, -77, 20, -1, -111, 59, 77, 17, -34, -36, -42, 29, -23, -108, 105, -13, -122, 96, -60, 50, -83, -74, -28, 38, 92, 6, 2, -15, -94, 110, 69, -8, -54, -1, 102, -45, 0, 10, -126, 6, 37, 93, 30, 9, -61, -23, -41, -50, -71, -128, 19, 33, 52, 47, -57, -109, -127, -37, -113, 63, 122, 87, -74, 9, -86, 74, -47, 109, 75, 0, -75, -106, -46, -7, -11, 62, 58, -88, 122, 22, -116, -112, 52, -127, -80, 65, -78, -87, -61, -42, 27, -71, -37, -35, -112, 107, 67, 108, 74, -128, -101, -9, -13, 69, -120, -89, 73, 77, 96, 32, -5, 62, -41, -61, -39, 16, -15, 85, -32, 67, 46, -73, 64, -94, -109, 104, -33, 4, 106, 2, 62, -73, 104, 49};
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
    msg.setTimeStamp(0.422576072854);
    msg.setSource(27515U);
    msg.setSourceEntity(1U);
    msg.setDestination(52300U);
    msg.setDestinationEntity(106U);
    msg.value = 0.453398210469;

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
    msg.setTimeStamp(0.822846674971);
    msg.setSource(12636U);
    msg.setSourceEntity(95U);
    msg.setDestination(2906U);
    msg.setDestinationEntity(27U);
    msg.value = 0.00211340337619;

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
    msg.setTimeStamp(0.169954569735);
    msg.setSource(6981U);
    msg.setSourceEntity(54U);
    msg.setDestination(57800U);
    msg.setDestinationEntity(171U);
    msg.value = 0.748026764567;

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
    msg.setTimeStamp(0.419635566918);
    msg.setSource(4177U);
    msg.setSourceEntity(160U);
    msg.setDestination(27966U);
    msg.setDestinationEntity(224U);
    msg.type = 186U;
    msg.frequency = 2093249444U;
    msg.min_range = 44328U;
    msg.max_range = 59731U;
    msg.bits_per_point = 63U;
    msg.scale_factor = 0.596237811982;
    const char tmp_msg_0[] = {-105, 94, 97, 8, 118, 21, -119, 50, 47, 113, 87, 65, 68, -50, -32, 57, -38, -4, 108, 123, -78, 116, 16, 118, -97, -67, -108, 111, 50, -17, -117, 11, -24, 45, 39, 116, -64, -120, 101, 37, 102, -50, -10};
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
    msg.setTimeStamp(0.266823155274);
    msg.setSource(50861U);
    msg.setSourceEntity(1U);
    msg.setDestination(42615U);
    msg.setDestinationEntity(37U);
    msg.type = 176U;
    msg.frequency = 192113791U;
    msg.min_range = 31511U;
    msg.max_range = 64491U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.945955280457;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.545783988317;
    tmp_msg_0.beam_height = 0.0562674519423;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, -22, -22, 63, -48, -118, -54, 89, 84, -19, -29, 115, 11, -62, 19, 9, 74, -127, 60, 29, -6, 32, -39, -33, 96, 0, -56, -13, -122, -59, 61, 2, 64, 41, -20, 69, 123, -14, -79, -92, -113, 55, 118, -86, -89, -116, 37, -74, 72, 38, 60, -56, 54, 91, -77, -23, -11, 20, 50, 124, -83, -18, 59, 90, 18, -77, 65, 28, 123, 34, -67, 81, -120, 80, -29, -98, 35, 118, -49, -28, -106, -23, -104, 63, -38, 63, -7, 115, 19, 84, 35, -72, -62, -19, 24, 56, -3, 41, 85, -83, 109, -84, 16, 30, -41, -13, -1, -74, -3, 30, 14, -46, 104, 11, -85, 0, 109, 94, 67, -42, 15, -98, 45, 79, -3, -110, -64, 116, 108, -25, -40, 24, -94, 92, -5, -97, 34, 50, -1, -123, -48, -122, 19, -108, 110, -117, -73, 13, -31};
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
    msg.setTimeStamp(0.382082043052);
    msg.setSource(7073U);
    msg.setSourceEntity(152U);
    msg.setDestination(24542U);
    msg.setDestinationEntity(26U);
    msg.type = 38U;
    msg.frequency = 3566289804U;
    msg.min_range = 44865U;
    msg.max_range = 31670U;
    msg.bits_per_point = 112U;
    msg.scale_factor = 0.499925646497;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0226024963393;
    tmp_msg_0.beam_height = 0.145530778665;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {58, -42, 92, 35, 99, 8, 11, -28, -14, -49, -34, 103, 104, 112, 50, -80, -95, 42, 45, -16, -58, -66, 30, -34, -30, 81, 12, 112, -11, -87, -118, -91, 88, 111, -78, -31, -38, 62, 68, 24, 104, -3, 53, -69, 38, -100, -86, -1, 93};
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
    msg.setTimeStamp(0.928291134121);
    msg.setSource(58932U);
    msg.setSourceEntity(47U);
    msg.setDestination(48928U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.556840579195);
    msg.setSource(34199U);
    msg.setSourceEntity(41U);
    msg.setDestination(47038U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.151832924889);
    msg.setSource(59804U);
    msg.setSourceEntity(116U);
    msg.setDestination(24518U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.517072557883);
    msg.setSource(3348U);
    msg.setSourceEntity(24U);
    msg.setDestination(53568U);
    msg.setDestinationEntity(76U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.560271924798);
    msg.setSource(12952U);
    msg.setSourceEntity(168U);
    msg.setDestination(42901U);
    msg.setDestinationEntity(6U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.522703945844);
    msg.setSource(15671U);
    msg.setSourceEntity(91U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(143U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.929601564482);
    msg.setSource(7453U);
    msg.setSourceEntity(12U);
    msg.setDestination(24169U);
    msg.setDestinationEntity(39U);
    msg.value = 0.821381076786;
    msg.confidence = 0.693080944617;
    msg.opmodes.assign("RWNVNCAYVIIHKPUXMKOUSCPYEXVEARIPNGPEBUKLJLSIDHDUWQAEHANDJNPTDABQOBCGSTMZRIQYJZJ");

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
    msg.setTimeStamp(0.925249134465);
    msg.setSource(24589U);
    msg.setSourceEntity(143U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(236U);
    msg.value = 0.726139604453;
    msg.confidence = 0.392212709028;
    msg.opmodes.assign("GQNRBZARDOGGQSUMGDVHKSEJGLQMQGEROKYTVENBVYVVHYOMQMCFIAXLPWGXABFXZUBQTECHPUVKJAWMBOGIZTSMUYAMNFADTPJMZFUHVWINJWCVAPADSRWPKSSSQXUF");

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
    msg.setTimeStamp(0.0482449138733);
    msg.setSource(9621U);
    msg.setSourceEntity(136U);
    msg.setDestination(20928U);
    msg.setDestinationEntity(123U);
    msg.value = 0.250366510901;
    msg.confidence = 0.867508440509;
    msg.opmodes.assign("MNRGHPDLINYKFDBKYNWCILZTYMYXQEOMLADVRSKAARNAPSBDBXGZTBVUJTKOQWAQGVGCRQXKQIBECVJSTMZCGFOMHFTMQGPZJNWROHCKBUFUUJRTNPHCZJLFOIARMVVHSELCFYZXHBXDVSLNZAZBZROHMBMGULUIIDUOWIWTUMOQSQHPVFNEFEGIPWETWFGNPBYETRQKSKFKJYLECHDXWEPCLOUOVIHAQADWJJARZPKSYDSXSVXYDIX");

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
    msg.setTimeStamp(0.563050546295);
    msg.setSource(44756U);
    msg.setSourceEntity(161U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(209U);
    msg.itow = 2253911360U;
    msg.lat = 0.554148997263;
    msg.lon = 0.549589460472;
    msg.height_ell = 0.327243000171;
    msg.height_sea = 0.13439666807;
    msg.hacc = 0.0838093583389;
    msg.vacc = 0.386533910035;
    msg.vel_n = 0.43018677888;
    msg.vel_e = 0.0418415283322;
    msg.vel_d = 0.822914517433;
    msg.speed = 0.880300138775;
    msg.gspeed = 0.52349609079;
    msg.heading = 0.68938061394;
    msg.sacc = 0.643938575251;
    msg.cacc = 0.684440848408;

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
    msg.setTimeStamp(0.191312665381);
    msg.setSource(21550U);
    msg.setSourceEntity(112U);
    msg.setDestination(26002U);
    msg.setDestinationEntity(102U);
    msg.itow = 280124262U;
    msg.lat = 0.116785160126;
    msg.lon = 0.823679894304;
    msg.height_ell = 0.785650525562;
    msg.height_sea = 0.546759743813;
    msg.hacc = 0.524563362163;
    msg.vacc = 0.571165718787;
    msg.vel_n = 0.0060758108773;
    msg.vel_e = 0.846789378007;
    msg.vel_d = 0.16573340309;
    msg.speed = 0.284946814615;
    msg.gspeed = 0.68783592995;
    msg.heading = 0.792538024425;
    msg.sacc = 0.0334144554147;
    msg.cacc = 0.352924641655;

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
    msg.setTimeStamp(0.24695424864);
    msg.setSource(65492U);
    msg.setSourceEntity(113U);
    msg.setDestination(56756U);
    msg.setDestinationEntity(71U);
    msg.itow = 4035572090U;
    msg.lat = 0.818502378925;
    msg.lon = 0.241788418386;
    msg.height_ell = 0.0976008227738;
    msg.height_sea = 0.071341633533;
    msg.hacc = 0.69370181835;
    msg.vacc = 0.274210919486;
    msg.vel_n = 0.150560069746;
    msg.vel_e = 0.629852535753;
    msg.vel_d = 0.985633611743;
    msg.speed = 0.481043234165;
    msg.gspeed = 0.331346000104;
    msg.heading = 0.576730160018;
    msg.sacc = 0.262891575078;
    msg.cacc = 0.000954189105145;

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
    msg.setTimeStamp(0.902937863855);
    msg.setSource(13661U);
    msg.setSourceEntity(226U);
    msg.setDestination(59250U);
    msg.setDestinationEntity(107U);
    msg.id = 95U;
    msg.value = 0.272479399722;

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
    msg.setTimeStamp(0.112025895669);
    msg.setSource(21413U);
    msg.setSourceEntity(207U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(95U);
    msg.id = 149U;
    msg.value = 0.724306782514;

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
    msg.setTimeStamp(0.700133620968);
    msg.setSource(24869U);
    msg.setSourceEntity(174U);
    msg.setDestination(4393U);
    msg.setDestinationEntity(141U);
    msg.id = 86U;
    msg.value = 0.637553801836;

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
    msg.setTimeStamp(0.78990390747);
    msg.setSource(19793U);
    msg.setSourceEntity(253U);
    msg.setDestination(62648U);
    msg.setDestinationEntity(27U);
    msg.x = 0.480014746937;
    msg.y = 0.354753233167;
    msg.z = 0.31712062261;
    msg.phi = 0.203825709192;
    msg.theta = 0.649083455523;
    msg.psi = 0.932053766688;

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
    msg.setTimeStamp(0.232039431858);
    msg.setSource(31831U);
    msg.setSourceEntity(24U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(250U);
    msg.x = 0.613918486732;
    msg.y = 0.180896915763;
    msg.z = 0.357376692286;
    msg.phi = 0.945380519844;
    msg.theta = 0.939333761275;
    msg.psi = 0.881151375806;

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
    msg.setTimeStamp(0.2415861995);
    msg.setSource(42805U);
    msg.setSourceEntity(201U);
    msg.setDestination(9137U);
    msg.setDestinationEntity(33U);
    msg.x = 0.987236368912;
    msg.y = 0.422726408444;
    msg.z = 0.122052576056;
    msg.phi = 0.111881656329;
    msg.theta = 0.951963492437;
    msg.psi = 0.380107692678;

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
    msg.setTimeStamp(0.35190597793);
    msg.setSource(60773U);
    msg.setSourceEntity(204U);
    msg.setDestination(51264U);
    msg.setDestinationEntity(182U);
    msg.beam_width = 0.585025143096;
    msg.beam_height = 0.635746457792;

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
    msg.setTimeStamp(0.714096136212);
    msg.setSource(31574U);
    msg.setSourceEntity(106U);
    msg.setDestination(64340U);
    msg.setDestinationEntity(21U);
    msg.beam_width = 0.0304237009387;
    msg.beam_height = 0.0931211989827;

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
    msg.setTimeStamp(0.695396111872);
    msg.setSource(10145U);
    msg.setSourceEntity(254U);
    msg.setDestination(25662U);
    msg.setDestinationEntity(14U);
    msg.beam_width = 0.418728977345;
    msg.beam_height = 0.539523517475;

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
    msg.setTimeStamp(0.513412693083);
    msg.setSource(39385U);
    msg.setSourceEntity(26U);
    msg.setDestination(664U);
    msg.setDestinationEntity(32U);
    msg.sane = 118U;

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
    msg.setTimeStamp(0.420642687576);
    msg.setSource(42507U);
    msg.setSourceEntity(224U);
    msg.setDestination(45774U);
    msg.setDestinationEntity(144U);
    msg.sane = 53U;

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
    msg.setTimeStamp(0.458330293004);
    msg.setSource(26140U);
    msg.setSourceEntity(49U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(43U);
    msg.sane = 235U;

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
    msg.setTimeStamp(0.155837668271);
    msg.setSource(22667U);
    msg.setSourceEntity(213U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0197096650239;

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
    msg.setTimeStamp(0.400263770823);
    msg.setSource(36262U);
    msg.setSourceEntity(197U);
    msg.setDestination(16421U);
    msg.setDestinationEntity(93U);
    msg.value = 0.00978266921126;

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
    msg.setTimeStamp(0.412937399664);
    msg.setSource(589U);
    msg.setSourceEntity(88U);
    msg.setDestination(38654U);
    msg.setDestinationEntity(19U);
    msg.value = 0.716871826988;

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
    msg.setTimeStamp(0.749657942938);
    msg.setSource(34038U);
    msg.setSourceEntity(242U);
    msg.setDestination(37173U);
    msg.setDestinationEntity(243U);
    msg.value = 0.372271969206;

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
    msg.setTimeStamp(0.345836986443);
    msg.setSource(32222U);
    msg.setSourceEntity(73U);
    msg.setDestination(37479U);
    msg.setDestinationEntity(91U);
    msg.value = 0.315509620439;

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
    msg.setTimeStamp(0.870912270556);
    msg.setSource(5848U);
    msg.setSourceEntity(57U);
    msg.setDestination(10182U);
    msg.setDestinationEntity(150U);
    msg.value = 0.444373509905;

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
    msg.setTimeStamp(0.768352574438);
    msg.setSource(25395U);
    msg.setSourceEntity(117U);
    msg.setDestination(4520U);
    msg.setDestinationEntity(222U);
    msg.value = 0.332754893582;

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
    msg.setTimeStamp(0.294318472176);
    msg.setSource(53101U);
    msg.setSourceEntity(192U);
    msg.setDestination(52004U);
    msg.setDestinationEntity(65U);
    msg.value = 0.39980019112;

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
    msg.setTimeStamp(0.753027059196);
    msg.setSource(62193U);
    msg.setSourceEntity(129U);
    msg.setDestination(51383U);
    msg.setDestinationEntity(89U);
    msg.value = 0.697888591833;

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
    msg.setTimeStamp(0.0818706178866);
    msg.setSource(34733U);
    msg.setSourceEntity(6U);
    msg.setDestination(14533U);
    msg.setDestinationEntity(36U);
    msg.value = 0.616755737546;

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
    msg.setTimeStamp(0.62636509153);
    msg.setSource(26160U);
    msg.setSourceEntity(29U);
    msg.setDestination(33000U);
    msg.setDestinationEntity(141U);
    msg.value = 0.647698223772;

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
    msg.setTimeStamp(0.0715383871946);
    msg.setSource(23423U);
    msg.setSourceEntity(116U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(184U);
    msg.value = 0.26245830044;

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
    msg.setTimeStamp(0.976246861928);
    msg.setSource(27280U);
    msg.setSourceEntity(12U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(172U);
    msg.value = 0.38333726955;

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
    msg.setTimeStamp(0.00626741884287);
    msg.setSource(6968U);
    msg.setSourceEntity(126U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(158U);
    msg.value = 0.572585919907;

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
    msg.setTimeStamp(0.315067405986);
    msg.setSource(54222U);
    msg.setSourceEntity(142U);
    msg.setDestination(28444U);
    msg.setDestinationEntity(187U);
    msg.value = 0.216977829388;

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
    msg.setTimeStamp(0.325300692375);
    msg.setSource(63883U);
    msg.setSourceEntity(61U);
    msg.setDestination(13901U);
    msg.setDestinationEntity(74U);
    msg.value = 0.284459592117;

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
    msg.setTimeStamp(0.700509090485);
    msg.setSource(37201U);
    msg.setSourceEntity(216U);
    msg.setDestination(31957U);
    msg.setDestinationEntity(44U);
    msg.value = 0.84306682027;

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
    msg.setTimeStamp(0.963709591917);
    msg.setSource(2269U);
    msg.setSourceEntity(82U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(52U);
    msg.value = 0.187746193409;

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
    msg.setTimeStamp(0.950134240987);
    msg.setSource(61095U);
    msg.setSourceEntity(201U);
    msg.setDestination(45607U);
    msg.setDestinationEntity(118U);
    msg.value = 0.618917457062;

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
    msg.setTimeStamp(0.130018032725);
    msg.setSource(5497U);
    msg.setSourceEntity(21U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(238U);
    msg.value = 0.171791535906;

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
    msg.setTimeStamp(0.286594479372);
    msg.setSource(43057U);
    msg.setSourceEntity(103U);
    msg.setDestination(8686U);
    msg.setDestinationEntity(170U);
    msg.value = 0.513554951322;

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
    msg.setTimeStamp(0.365680701461);
    msg.setSource(35907U);
    msg.setSourceEntity(164U);
    msg.setDestination(3280U);
    msg.setDestinationEntity(179U);
    msg.value = 0.0579735460994;

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
    msg.setTimeStamp(0.677380070311);
    msg.setSource(61989U);
    msg.setSourceEntity(116U);
    msg.setDestination(503U);
    msg.setDestinationEntity(194U);
    msg.value = 0.622390107791;

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
    msg.setTimeStamp(0.131169705446);
    msg.setSource(59174U);
    msg.setSourceEntity(1U);
    msg.setDestination(38173U);
    msg.setDestinationEntity(93U);
    msg.value = 0.444062576818;

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
    msg.setTimeStamp(0.15168247206);
    msg.setSource(35953U);
    msg.setSourceEntity(154U);
    msg.setDestination(48295U);
    msg.setDestinationEntity(94U);
    msg.validity = 64543U;
    msg.type = 92U;
    msg.tow = 77491979U;
    msg.base_lat = 0.812268856896;
    msg.base_lon = 0.219423658477;
    msg.base_height = 0.616772521299;
    msg.n = 0.0371333355414;
    msg.e = 0.628193982068;
    msg.d = 0.59970794536;
    msg.v_n = 0.435125160143;
    msg.v_e = 0.201114353651;
    msg.v_d = 0.664008583605;
    msg.satellites = 197U;
    msg.iar_hyp = 20249U;
    msg.iar_ratio = 0.990102893546;

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
    msg.setTimeStamp(0.161389757739);
    msg.setSource(4397U);
    msg.setSourceEntity(134U);
    msg.setDestination(40002U);
    msg.setDestinationEntity(96U);
    msg.validity = 44089U;
    msg.type = 93U;
    msg.tow = 4053173400U;
    msg.base_lat = 0.933278808177;
    msg.base_lon = 0.543859361521;
    msg.base_height = 0.948595286108;
    msg.n = 0.148999217936;
    msg.e = 0.0114980430504;
    msg.d = 0.376051484931;
    msg.v_n = 0.522028017569;
    msg.v_e = 0.334027236191;
    msg.v_d = 0.889429782738;
    msg.satellites = 233U;
    msg.iar_hyp = 38112U;
    msg.iar_ratio = 0.0135483458822;

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
    msg.setTimeStamp(0.938841845704);
    msg.setSource(43512U);
    msg.setSourceEntity(132U);
    msg.setDestination(14328U);
    msg.setDestinationEntity(137U);
    msg.validity = 47400U;
    msg.type = 197U;
    msg.tow = 2151906893U;
    msg.base_lat = 0.0175777251937;
    msg.base_lon = 0.485608027643;
    msg.base_height = 0.304903631081;
    msg.n = 0.252407958112;
    msg.e = 0.697738622973;
    msg.d = 0.766915677357;
    msg.v_n = 0.98621899597;
    msg.v_e = 0.969193067521;
    msg.v_d = 0.293508323911;
    msg.satellites = 48U;
    msg.iar_hyp = 50290U;
    msg.iar_ratio = 0.428173993252;

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
    msg.setTimeStamp(0.124217921062);
    msg.setSource(46725U);
    msg.setSourceEntity(149U);
    msg.setDestination(39319U);
    msg.setDestinationEntity(237U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.273319414558;
    tmp_msg_0.lon = 0.605607768268;
    tmp_msg_0.height = 0.367477850179;
    tmp_msg_0.x = 0.732679531177;
    tmp_msg_0.y = 0.672273256849;
    tmp_msg_0.z = 0.159714774045;
    tmp_msg_0.phi = 0.150247220752;
    tmp_msg_0.theta = 0.0600512997452;
    tmp_msg_0.psi = 0.82877518821;
    tmp_msg_0.u = 0.487722481214;
    tmp_msg_0.v = 0.916618870911;
    tmp_msg_0.w = 0.989842740914;
    tmp_msg_0.vx = 0.0807152512872;
    tmp_msg_0.vy = 0.125501318941;
    tmp_msg_0.vz = 0.786727198675;
    tmp_msg_0.p = 0.972342576653;
    tmp_msg_0.q = 0.951618770918;
    tmp_msg_0.r = 0.163150470614;
    tmp_msg_0.depth = 0.813993632007;
    tmp_msg_0.alt = 0.765930900607;
    msg.state.set(tmp_msg_0);
    msg.type = 10U;

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
    msg.setTimeStamp(0.815714143029);
    msg.setSource(45575U);
    msg.setSourceEntity(34U);
    msg.setDestination(56531U);
    msg.setDestinationEntity(117U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.358108321172;
    tmp_msg_0.lon = 0.171473133961;
    tmp_msg_0.height = 0.215053930047;
    tmp_msg_0.x = 0.365108859777;
    tmp_msg_0.y = 0.167643044264;
    tmp_msg_0.z = 0.874646219474;
    tmp_msg_0.phi = 0.307247732996;
    tmp_msg_0.theta = 0.842726512589;
    tmp_msg_0.psi = 0.926700483724;
    tmp_msg_0.u = 0.612079276493;
    tmp_msg_0.v = 0.432882631823;
    tmp_msg_0.w = 0.504645479364;
    tmp_msg_0.vx = 0.963117156951;
    tmp_msg_0.vy = 0.780041956241;
    tmp_msg_0.vz = 0.0796390104552;
    tmp_msg_0.p = 0.644736392404;
    tmp_msg_0.q = 0.454329926618;
    tmp_msg_0.r = 0.0672935069746;
    tmp_msg_0.depth = 0.351349329649;
    tmp_msg_0.alt = 0.340804234135;
    msg.state.set(tmp_msg_0);
    msg.type = 24U;

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
    msg.setTimeStamp(0.928244652702);
    msg.setSource(60229U);
    msg.setSourceEntity(100U);
    msg.setDestination(33775U);
    msg.setDestinationEntity(192U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.902822031094;
    tmp_msg_0.lon = 0.268602152505;
    tmp_msg_0.height = 0.680703698211;
    tmp_msg_0.x = 0.834696303574;
    tmp_msg_0.y = 0.604522113463;
    tmp_msg_0.z = 0.690073340818;
    tmp_msg_0.phi = 0.332187201569;
    tmp_msg_0.theta = 0.500839096803;
    tmp_msg_0.psi = 0.770867294721;
    tmp_msg_0.u = 0.353819268974;
    tmp_msg_0.v = 0.814178595774;
    tmp_msg_0.w = 0.153767031766;
    tmp_msg_0.vx = 0.579078948157;
    tmp_msg_0.vy = 0.444506870624;
    tmp_msg_0.vz = 0.206975972937;
    tmp_msg_0.p = 0.967381142624;
    tmp_msg_0.q = 0.597370929556;
    tmp_msg_0.r = 0.910321824839;
    tmp_msg_0.depth = 0.477432203703;
    tmp_msg_0.alt = 0.0681208295049;
    msg.state.set(tmp_msg_0);
    msg.type = 215U;

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
    msg.setTimeStamp(0.308682700128);
    msg.setSource(37879U);
    msg.setSourceEntity(200U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(119U);
    msg.value = 0.427689132462;

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
    msg.setTimeStamp(0.189951071835);
    msg.setSource(35407U);
    msg.setSourceEntity(45U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(25U);
    msg.value = 0.884886308296;

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
    msg.setTimeStamp(0.865419760468);
    msg.setSource(40961U);
    msg.setSourceEntity(131U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(99U);
    msg.value = 0.317054969023;

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
    msg.setTimeStamp(0.62062053635);
    msg.setSource(62375U);
    msg.setSourceEntity(52U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(252U);
    msg.value = 0.109111428314;

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
    msg.setTimeStamp(0.160618034413);
    msg.setSource(32298U);
    msg.setSourceEntity(41U);
    msg.setDestination(56816U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0893471974489;

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
    msg.setTimeStamp(0.517231730966);
    msg.setSource(50612U);
    msg.setSourceEntity(180U);
    msg.setDestination(14699U);
    msg.setDestinationEntity(205U);
    msg.value = 0.593170723366;

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
    msg.setTimeStamp(0.943087260988);
    msg.setSource(48065U);
    msg.setSourceEntity(205U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(76U);
    msg.value = 0.293971655641;

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
    msg.setTimeStamp(0.902325269387);
    msg.setSource(14350U);
    msg.setSourceEntity(72U);
    msg.setDestination(11833U);
    msg.setDestinationEntity(229U);
    msg.value = 0.153975930712;

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
    msg.setTimeStamp(0.885462025073);
    msg.setSource(24456U);
    msg.setSourceEntity(76U);
    msg.setDestination(65441U);
    msg.setDestinationEntity(57U);
    msg.value = 0.296188199559;

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
    msg.setTimeStamp(0.925869560419);
    msg.setSource(31587U);
    msg.setSourceEntity(205U);
    msg.setDestination(42964U);
    msg.setDestinationEntity(116U);
    msg.value = 0.558425172729;

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
    msg.setTimeStamp(0.308829640492);
    msg.setSource(19610U);
    msg.setSourceEntity(132U);
    msg.setDestination(62416U);
    msg.setDestinationEntity(42U);
    msg.value = 0.719773212722;

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
    msg.setTimeStamp(0.867656219553);
    msg.setSource(8531U);
    msg.setSourceEntity(217U);
    msg.setDestination(56870U);
    msg.setDestinationEntity(250U);
    msg.value = 0.0642925049342;

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
    msg.setTimeStamp(0.92272787984);
    msg.setSource(1827U);
    msg.setSourceEntity(188U);
    msg.setDestination(4926U);
    msg.setDestinationEntity(159U);
    msg.value = 0.0379707850598;

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
    msg.setTimeStamp(0.654393692227);
    msg.setSource(28323U);
    msg.setSourceEntity(91U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(131U);
    msg.value = 0.677473657715;

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
    msg.setTimeStamp(0.188037755846);
    msg.setSource(52649U);
    msg.setSourceEntity(53U);
    msg.setDestination(53126U);
    msg.setDestinationEntity(88U);
    msg.value = 0.797721225134;

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
    msg.setTimeStamp(0.988751465631);
    msg.setSource(53121U);
    msg.setSourceEntity(101U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(157U);
    msg.id = 223U;
    msg.zoom = 35U;
    msg.action = 46U;

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
    msg.setTimeStamp(0.720883823128);
    msg.setSource(5562U);
    msg.setSourceEntity(39U);
    msg.setDestination(10610U);
    msg.setDestinationEntity(180U);
    msg.id = 43U;
    msg.zoom = 228U;
    msg.action = 90U;

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
    msg.setTimeStamp(0.786563418349);
    msg.setSource(21042U);
    msg.setSourceEntity(17U);
    msg.setDestination(24085U);
    msg.setDestinationEntity(248U);
    msg.id = 32U;
    msg.zoom = 117U;
    msg.action = 89U;

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
    msg.setTimeStamp(0.374429049353);
    msg.setSource(48558U);
    msg.setSourceEntity(22U);
    msg.setDestination(17363U);
    msg.setDestinationEntity(31U);
    msg.id = 71U;
    msg.value = 0.933008456257;

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
    msg.setTimeStamp(0.729113499146);
    msg.setSource(33592U);
    msg.setSourceEntity(29U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(102U);
    msg.id = 251U;
    msg.value = 0.761714477225;

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
    msg.setTimeStamp(0.269252997181);
    msg.setSource(33993U);
    msg.setSourceEntity(243U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(171U);
    msg.id = 121U;
    msg.value = 0.181505094927;

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
    msg.setTimeStamp(0.304770781474);
    msg.setSource(55875U);
    msg.setSourceEntity(32U);
    msg.setDestination(36770U);
    msg.setDestinationEntity(196U);
    msg.id = 45U;
    msg.value = 0.717861213365;

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
    msg.setTimeStamp(0.636093754151);
    msg.setSource(32127U);
    msg.setSourceEntity(75U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(120U);
    msg.id = 147U;
    msg.value = 0.239154884605;

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
    msg.setTimeStamp(0.129432027489);
    msg.setSource(12541U);
    msg.setSourceEntity(100U);
    msg.setDestination(30930U);
    msg.setDestinationEntity(73U);
    msg.id = 177U;
    msg.value = 0.318072589328;

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
    msg.setTimeStamp(0.0512361364397);
    msg.setSource(49826U);
    msg.setSourceEntity(125U);
    msg.setDestination(54284U);
    msg.setDestinationEntity(216U);
    msg.id = 52U;
    msg.angle = 0.819376913346;

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
    msg.setTimeStamp(0.236491944098);
    msg.setSource(63116U);
    msg.setSourceEntity(75U);
    msg.setDestination(34667U);
    msg.setDestinationEntity(48U);
    msg.id = 238U;
    msg.angle = 0.99592800066;

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
    msg.setTimeStamp(0.971808337891);
    msg.setSource(23131U);
    msg.setSourceEntity(149U);
    msg.setDestination(42302U);
    msg.setDestinationEntity(243U);
    msg.id = 115U;
    msg.angle = 0.691974417543;

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
    msg.setTimeStamp(0.620909181982);
    msg.setSource(62280U);
    msg.setSourceEntity(147U);
    msg.setDestination(20225U);
    msg.setDestinationEntity(121U);
    msg.op = 94U;
    msg.actions.assign("SVCGGYDKTYEIALTHILQPBXQGDCBYIJBEHGHKMPMNJKVTCAWOKLLGULGTQNYITHAXMOVTOYSDWPESJLQSZAGHGYBPYIILZECVRBOBYNNKMKSMZSPEEFTKAKOZBRDJSOVQVFCSWFCXKAFJCETPCLPMHRVJWJYUZFWOIWXBUDXPRJXUXFHDUOLMZOU");

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
    msg.setTimeStamp(0.591918404125);
    msg.setSource(35226U);
    msg.setSourceEntity(147U);
    msg.setDestination(521U);
    msg.setDestinationEntity(78U);
    msg.op = 164U;
    msg.actions.assign("FGIRZZAEVDGKQLJDPVSCILYDXVFUODLPMJBPTJUKCBYJEQYTJRRVELSRYQMHJOMHBSNREAPXEDBQHVHTZIJUBESQSOUZMCFOPCCRDGJZVKHNNMXKYUTHPFXSQNDQBVRCQIKYCPSXNGMTPVZXHXBYZHYLPIWNSOWD");

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
    msg.setTimeStamp(0.333607657582);
    msg.setSource(46739U);
    msg.setSourceEntity(205U);
    msg.setDestination(15636U);
    msg.setDestinationEntity(2U);
    msg.op = 2U;
    msg.actions.assign("FYAKXPVRWLGBNFSYBNKTPWRWLVMCVAJACGDWNYHYUZUECOWIQYQHJVMKLIDOSWDXXAHSWPVJBIUQIVSNFJXOPQTIGZMGSNJUSBRQVIMTIEXUIXZZXBZPDOTKZPAFLSUPUDFYFKGJTCFQORLNMGTLHFTCAZMMODUREBCNULZGJNELE");

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
    msg.setTimeStamp(0.662146055805);
    msg.setSource(62001U);
    msg.setSourceEntity(142U);
    msg.setDestination(47890U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("NMDQGQTNKOBVYHDTPNWINEDJVAJURBYICLBSFMJOORNOJZVFGZARNGIRTICEZZBDFMXZBCDHGPUWGDSULTBMVYCFCYJKNUHIIUERWPAZLJAFQOHWCAWTWTQGSBHYILSEIPRLXXLKYFJGVQUMEEHDJMOYUPESWUSPZDNCKEPXXYKAKRWFJAPFHGPEXCQMJVDFVVXZTMUSCBBSYTGHQKLZHXLIAS");

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
    msg.setTimeStamp(0.136902919092);
    msg.setSource(29721U);
    msg.setSourceEntity(58U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(152U);
    msg.actions.assign("CAMYFQAXYOTDODOGDKPQIMHNUIEDJDUJYQBLKXLGZBGXFTZCRXJSQUGJCQBIFZONVACYZRIHEPWBJBDGWGESHMNANS");

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
    msg.setTimeStamp(0.149054283681);
    msg.setSource(42146U);
    msg.setSourceEntity(164U);
    msg.setDestination(47480U);
    msg.setDestinationEntity(214U);
    msg.actions.assign("POJSHVAFGYRYVEVIEXIISABLQJVRNWQHPAWXUFBTEPMJTFCWCIIZOOHAZKLBUBL");

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
    msg.setTimeStamp(0.328977465088);
    msg.setSource(9511U);
    msg.setSourceEntity(62U);
    msg.setDestination(41176U);
    msg.setDestinationEntity(76U);
    msg.button = 181U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.165840462652);
    msg.setSource(31774U);
    msg.setSourceEntity(197U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(243U);
    msg.button = 19U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.72416574369);
    msg.setSource(31417U);
    msg.setSourceEntity(123U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(83U);
    msg.button = 231U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.771171870668);
    msg.setSource(58769U);
    msg.setSourceEntity(25U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(27U);
    msg.op = 168U;
    msg.text.assign("ZISZDCWCGYJWEVYVWYCPCNZFSSBWGJNCQXBKMVUHZHGUHCIDXAVHDZNLEUXEDXSTLTVXYXQZJDWDIVIWIJAXPLUCSSBWJMYTAIKFEIBGUXHM");

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
    msg.setTimeStamp(0.397767748256);
    msg.setSource(35915U);
    msg.setSourceEntity(163U);
    msg.setDestination(39448U);
    msg.setDestinationEntity(37U);
    msg.op = 53U;
    msg.text.assign("URPFVNVRYUQMLWCTDVGHVWLAUBKQHWTAGRIRNDCRVCXDCMQKLMNHMIRNSYJUOXOKJGRSAQISCUMEFWZDEORAWOGCMTZVKMHQUBGEJLQZASGVMCYZAKHYIATBPBHMYUZSEVFPXENLKXFNGWSQFPIKYJNEWDSXXXXPESZKGQWDNEFJPNOYJPBQOZHQKIALTDYUEZYPTULTTOLRFTZEIWBIIBFCSWHJZOBRHDOCMLY");

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
    msg.setTimeStamp(0.766758622292);
    msg.setSource(18445U);
    msg.setSourceEntity(214U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(106U);
    msg.op = 42U;
    msg.text.assign("SBNTSDXGDZDUDFTWKVJVMKRWFIQKLJQHVSEWFQZMQNYNXSPRFPQBNYCLNCNJGAPUXOBATZOMKPJBMPPIUHOQXILCGANKVPEJYVKTOQZVHPYSYHGCLHLMRZYRGJJKHEIDJRGEDGUTLUGSDLAICCLFMNIWYTVBMKYWBIBBPHITSUBUGFEUOQNSAMVKWCWMEDZHUORFEXTOXCFWMNXIRDFAEZSRQZDLVYAAQHCWJKRFZCTXRHLAZTEGS");

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
    msg.setTimeStamp(0.245456031644);
    msg.setSource(56556U);
    msg.setSourceEntity(131U);
    msg.setDestination(62158U);
    msg.setDestinationEntity(160U);
    msg.op = 137U;
    msg.time_remain = 0.141999565381;
    msg.sched_time = 0.906513253906;

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
    msg.setTimeStamp(0.222281307605);
    msg.setSource(48704U);
    msg.setSourceEntity(19U);
    msg.setDestination(30764U);
    msg.setDestinationEntity(87U);
    msg.op = 78U;
    msg.time_remain = 0.943779464594;
    msg.sched_time = 0.752960261629;

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
    msg.setTimeStamp(0.938536292438);
    msg.setSource(61953U);
    msg.setSourceEntity(118U);
    msg.setDestination(64887U);
    msg.setDestinationEntity(39U);
    msg.op = 22U;
    msg.time_remain = 0.287541563059;
    msg.sched_time = 0.918498685412;

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
    msg.setTimeStamp(0.59101190642);
    msg.setSource(32747U);
    msg.setSourceEntity(151U);
    msg.setDestination(53000U);
    msg.setDestinationEntity(24U);
    msg.name.assign("FFODENCCRUPMDQGBVL");
    msg.op = 111U;
    msg.sched_time = 0.698067166424;

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
    msg.setTimeStamp(0.857716905095);
    msg.setSource(3151U);
    msg.setSourceEntity(23U);
    msg.setDestination(20483U);
    msg.setDestinationEntity(221U);
    msg.name.assign("MKSZTQUXSGYBMAJQZLEGLAOPLDCBJNDDTQZWIMNJTFGVYCLTSAQXMLFRWIBRPQPVHZYVYVVSKXDNCDEEWFOUXPPBOOLQZGSUYTHCLOSXKNHXHOMAKEAOHFYLMUHIOYPHVZMJKBMUHQVRGHRSFFJGJMEOXWOZPPLISGIHJXFEUCTJNDEG");
    msg.op = 92U;
    msg.sched_time = 0.933540196637;

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
    msg.setTimeStamp(0.0243748462272);
    msg.setSource(5755U);
    msg.setSourceEntity(171U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(188U);
    msg.name.assign("IHJOADYALKZERNJHMSCXJMPFREUULRNNXEQLSBTGEGNZDTPRVTDMHARLBHLEJTUGCSOIBVBUKGYJIMJTBPDQYYVCCZNRMZAIEUWCHBMFEXJXNXUCRCRWOBJZGUYAUKVHZRVAPSTLRNXAZWISSIHSMIYELGSOCQXPFXGJDEKQVVZ");
    msg.op = 118U;
    msg.sched_time = 0.610516420372;

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
    msg.setTimeStamp(0.568698649311);
    msg.setSource(47878U);
    msg.setSourceEntity(0U);
    msg.setDestination(33246U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.315860375228);
    msg.setSource(20414U);
    msg.setSourceEntity(217U);
    msg.setDestination(53857U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.291433754312);
    msg.setSource(44368U);
    msg.setSourceEntity(90U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.405266184618);
    msg.setSource(21784U);
    msg.setSourceEntity(83U);
    msg.setDestination(21849U);
    msg.setDestinationEntity(250U);
    msg.name.assign("WTTHQOPXRSJKNSRWEPQLUYIGJYNGJAAAUNBJQNLSNPBIQKVVNVAIHMABUBFNZOOCKXOHFJDBWYYRINURMWDFFQZGYPRLKIAMEQNZJXDDPXOGIAWZHLBUXVESSOEEKLXPQNYSARBGRCHCUGBCWFUOZTHGZRCACCMDXMFYVVTYSBKXUKZUVGOFWEMEZLPQJTLYSIMIETUIJGMTSZDOKTFPTDVLHXCMLACJMEHKJXRTPHDGZYFEQIWWQLRK");
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
    msg.setTimeStamp(0.938188902264);
    msg.setSource(24005U);
    msg.setSourceEntity(3U);
    msg.setDestination(11665U);
    msg.setDestinationEntity(114U);
    msg.name.assign("BUVYRTIXZNIRLIXRZPHKWABECDQCKBKVAGYKOUOZWRNNKXXHIFJVULAORSPBTMSFASZRZHGDHYTDQPVYLMMLREHAUQDNOPNJBQEFFQYLCHECAVFECZXXTOJJLTQWHMNNCIBDYEUDIOARILBRUWLMGVXDTZQI");
    msg.state = 87U;

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
    msg.setTimeStamp(0.483205581204);
    msg.setSource(22476U);
    msg.setSourceEntity(217U);
    msg.setDestination(65339U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RVKUGBDRATIJWPLAIYXEOJUZYOMRFHDVXMEXTPGVNULEBIYUZBEZMQBQJYBKIOHU");
    msg.state = 70U;

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
    msg.setTimeStamp(0.619013689003);
    msg.setSource(33425U);
    msg.setSourceEntity(210U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(106U);
    msg.name.assign("TZRLPOMMMTJEZJHVANWVFSIKKDHGWEDYTBURWIBOWSBGQYONFRFVOJBWQZSFFPCKCUXEQBKWSHTVESVJKZKXVEGHIRLMDYDLXYYEAGXKYHABHTXIYMEAINRWCULVOJYAUXXOVNYQKSFVPGMMQLMPSNLFKDZTYDBXIFIWJCPBVHNHNS");
    msg.value = 157U;

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
    msg.setTimeStamp(0.41837913188);
    msg.setSource(1968U);
    msg.setSourceEntity(219U);
    msg.setDestination(57780U);
    msg.setDestinationEntity(12U);
    msg.name.assign("TSIFIQRUTUICFJZNURXEXFJUXJXLKVPGBRGBBIHNYXEQGBKAJHTDMWCZTTBOSEQSAGJSAERWKQMYCSDODCAFFMEMULKXIPKJRVWTCWALPHONGICTZUTTGLSCOAHEKVRESUSBOJWOEYIXPPJHLNBAXCAKJOYLPOWVUDIGLHIBVNFBKEURSWZDMRLLYWDUXKQNYRRVZWGXVQMPY");
    msg.value = 162U;

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
    msg.setTimeStamp(0.632511376496);
    msg.setSource(4180U);
    msg.setSourceEntity(161U);
    msg.setDestination(33928U);
    msg.setDestinationEntity(80U);
    msg.name.assign("GZBTHJOQSVFVZSARGNYCEPONKRQFABZWFCQFSLYATLCSDHNEMCKDMIVUQTCKBNXLRAYWIIVGUAJVSBMQBNFICBZVUWHXRSPIGRYJKJEAHOMEZKRMNWHPTUFUEXDEMEDRYJSBPSEW");
    msg.value = 74U;

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
    msg.setTimeStamp(0.0441581315989);
    msg.setSource(62871U);
    msg.setSourceEntity(123U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(152U);
    msg.name.assign("XOATVJSPRMVRCUCJAIQWQRWELSVIFJPJUWFAZDVIXHFOKHHLCEUWGHUEBQGNHMRPQSMSPOYJLKDDTZRQFAHXXHIMMIEMYWYQMEKBBQNYLQWUUZODYGTKCEPKCLKVNKCIWUDHFJZBIAFZZRXGQAHVTTNLBNU");

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
    msg.setTimeStamp(0.304940363425);
    msg.setSource(8308U);
    msg.setSourceEntity(1U);
    msg.setDestination(12664U);
    msg.setDestinationEntity(145U);
    msg.name.assign("LGKPLNBYXSLX");

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
    msg.setTimeStamp(0.784106649876);
    msg.setSource(33296U);
    msg.setSourceEntity(212U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(184U);
    msg.name.assign("CXIUIVHOCRVRWBCQGSERMUYYGXDPC");

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
    msg.setTimeStamp(0.419835443777);
    msg.setSource(35969U);
    msg.setSourceEntity(69U);
    msg.setDestination(41994U);
    msg.setDestinationEntity(210U);
    msg.name.assign("FFYVGHFDJHEEMWKHIJJMISLHAERISKXNTNKSPCURQSPPGBNBZZMLQVYJUENJILPYJOUEKKIOHYOWTWRXMUZFHDILFZACWPGEVFJRMBIUYXDCZBDNAJVKLGWYZYHNBTADRKCXXNGBWJOSLTRQCEOQQVKVBQVTUGGLFQXMHTDXMTAZKNBXAIVTSCDCQAZRBGHSBZEGIQDIOYAODWPOPVUNVPHLTZQEOYFYURMGECROSTWSAASJKX");
    msg.value = 213U;

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
    msg.setTimeStamp(0.442573011799);
    msg.setSource(62465U);
    msg.setSourceEntity(248U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(17U);
    msg.name.assign("DENDMCIOXUYYUBNNQTVZEZAHJCRXZOSLYSPVUTGROAFNUPGSXNJFQFPZEBMNAZVXCYJKKQKMPVLCQZNYXBBAQHPCREWHUFQLSBPZZYVEXQORHYCHYJSGEUQIAFNUBFEWOKZLFOKMULKJCSTLBSVTXHI");
    msg.value = 140U;

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
    msg.setTimeStamp(0.157596047354);
    msg.setSource(59947U);
    msg.setSourceEntity(147U);
    msg.setDestination(33047U);
    msg.setDestinationEntity(107U);
    msg.name.assign("PBAWQMQJJCERRTAXUDIOBEKWXBUDXMZYFYFROETIPEKQQAPZSCDSPQDVVDGUCACVLSIGHJIQPTUVLFNPXVQYTNRRSRWFXJJTOIYATIOHWNKLAOPKUIXXBNBYKOGDHZRNBZZSHCPZOMSELFHMYGWBEOJQEHIFXF");
    msg.value = 192U;

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
    msg.setTimeStamp(0.571174267844);
    msg.setSource(1720U);
    msg.setSourceEntity(12U);
    msg.setDestination(5085U);
    msg.setDestinationEntity(141U);
    msg.id = 92U;
    msg.period = 2653457597U;
    msg.duty_cycle = 2155968012U;

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
    msg.setTimeStamp(0.51636787589);
    msg.setSource(1396U);
    msg.setSourceEntity(41U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(82U);
    msg.id = 0U;
    msg.period = 1468857681U;
    msg.duty_cycle = 2256368891U;

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
    msg.setTimeStamp(0.291535601062);
    msg.setSource(55657U);
    msg.setSourceEntity(36U);
    msg.setDestination(29795U);
    msg.setDestinationEntity(77U);
    msg.id = 141U;
    msg.period = 3673623102U;
    msg.duty_cycle = 777370640U;

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
    msg.setTimeStamp(0.590916386198);
    msg.setSource(4607U);
    msg.setSourceEntity(150U);
    msg.setDestination(9642U);
    msg.setDestinationEntity(250U);
    msg.id = 115U;
    msg.period = 2841094294U;
    msg.duty_cycle = 260118334U;

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
    msg.setTimeStamp(0.426441422448);
    msg.setSource(24901U);
    msg.setSourceEntity(163U);
    msg.setDestination(13952U);
    msg.setDestinationEntity(39U);
    msg.id = 215U;
    msg.period = 2314659331U;
    msg.duty_cycle = 3177375595U;

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
    msg.setTimeStamp(0.131368806454);
    msg.setSource(57289U);
    msg.setSourceEntity(24U);
    msg.setDestination(27376U);
    msg.setDestinationEntity(126U);
    msg.id = 226U;
    msg.period = 3338602045U;
    msg.duty_cycle = 3193771261U;

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
    msg.setTimeStamp(0.89295180078);
    msg.setSource(47972U);
    msg.setSourceEntity(182U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.376140782817;
    msg.lon = 0.484660440507;
    msg.height = 0.696203750999;
    msg.x = 0.312264185412;
    msg.y = 0.947562473205;
    msg.z = 0.244222932466;
    msg.phi = 0.851113650445;
    msg.theta = 0.732601090931;
    msg.psi = 0.865411497805;
    msg.u = 0.300596319908;
    msg.v = 0.703874251406;
    msg.w = 0.339260722152;
    msg.vx = 0.743100990127;
    msg.vy = 0.790288573441;
    msg.vz = 0.511840503683;
    msg.p = 0.377049847389;
    msg.q = 0.491367463865;
    msg.r = 0.375637141648;
    msg.depth = 0.126386361659;
    msg.alt = 0.170960362642;

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
    msg.setTimeStamp(0.959222909621);
    msg.setSource(58797U);
    msg.setSourceEntity(127U);
    msg.setDestination(4427U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.420689278074;
    msg.lon = 0.578371979131;
    msg.height = 0.32372298281;
    msg.x = 0.274772578476;
    msg.y = 0.696329872395;
    msg.z = 0.852137465383;
    msg.phi = 0.38306502147;
    msg.theta = 0.496414143453;
    msg.psi = 0.0578802212791;
    msg.u = 0.696440709861;
    msg.v = 0.182210178655;
    msg.w = 0.276718273784;
    msg.vx = 0.672034338311;
    msg.vy = 0.370728010374;
    msg.vz = 0.620665902106;
    msg.p = 0.270743684898;
    msg.q = 0.494971985053;
    msg.r = 0.188326888185;
    msg.depth = 0.993092777325;
    msg.alt = 0.930454340136;

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
    msg.setTimeStamp(0.0288664598173);
    msg.setSource(61620U);
    msg.setSourceEntity(189U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.748682110171;
    msg.lon = 0.17028039654;
    msg.height = 0.687845278521;
    msg.x = 0.996720528417;
    msg.y = 0.235987158698;
    msg.z = 0.0906303412855;
    msg.phi = 0.802653517817;
    msg.theta = 0.0977431468245;
    msg.psi = 0.119874861021;
    msg.u = 0.253145348744;
    msg.v = 0.743035324442;
    msg.w = 0.181024079543;
    msg.vx = 0.534750452332;
    msg.vy = 0.624962730611;
    msg.vz = 0.773738364109;
    msg.p = 0.25263099011;
    msg.q = 0.207994172861;
    msg.r = 0.565297491465;
    msg.depth = 0.356159205559;
    msg.alt = 0.665894047483;

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
    msg.setTimeStamp(0.5277665949);
    msg.setSource(20465U);
    msg.setSourceEntity(169U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(4U);
    msg.x = 0.133985328941;
    msg.y = 0.923977227055;
    msg.z = 0.543082306262;

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
    msg.setTimeStamp(0.111417614279);
    msg.setSource(48146U);
    msg.setSourceEntity(194U);
    msg.setDestination(30076U);
    msg.setDestinationEntity(6U);
    msg.x = 0.675780174321;
    msg.y = 0.501020469113;
    msg.z = 0.207137259627;

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
    msg.setTimeStamp(0.797451056226);
    msg.setSource(50189U);
    msg.setSourceEntity(203U);
    msg.setDestination(30099U);
    msg.setDestinationEntity(233U);
    msg.x = 0.157121166477;
    msg.y = 0.0985825508862;
    msg.z = 0.95205849068;

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
    msg.setTimeStamp(0.407432784887);
    msg.setSource(56978U);
    msg.setSourceEntity(78U);
    msg.setDestination(8146U);
    msg.setDestinationEntity(124U);
    msg.value = 0.133492317481;

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
    msg.setTimeStamp(0.877280259402);
    msg.setSource(8630U);
    msg.setSourceEntity(202U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(10U);
    msg.value = 0.085604377891;

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
    msg.setTimeStamp(0.394586816463);
    msg.setSource(26519U);
    msg.setSourceEntity(211U);
    msg.setDestination(12494U);
    msg.setDestinationEntity(61U);
    msg.value = 0.123807681625;

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
    msg.setTimeStamp(0.859971044299);
    msg.setSource(11246U);
    msg.setSourceEntity(166U);
    msg.setDestination(58326U);
    msg.setDestinationEntity(170U);
    msg.value = 0.2034248109;

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
    msg.setTimeStamp(0.0858897726356);
    msg.setSource(26557U);
    msg.setSourceEntity(3U);
    msg.setDestination(6703U);
    msg.setDestinationEntity(120U);
    msg.value = 0.434654998819;

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
    msg.setTimeStamp(0.357832744996);
    msg.setSource(6214U);
    msg.setSourceEntity(242U);
    msg.setDestination(59393U);
    msg.setDestinationEntity(10U);
    msg.value = 0.426669742152;

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
    msg.setTimeStamp(0.798799112746);
    msg.setSource(24075U);
    msg.setSourceEntity(205U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(232U);
    msg.x = 0.118465778952;
    msg.y = 0.646763754154;
    msg.z = 0.915949888509;
    msg.phi = 0.228000175116;
    msg.theta = 0.394331334854;
    msg.psi = 0.778375507786;
    msg.p = 0.179421676528;
    msg.q = 0.913468328289;
    msg.r = 0.866214161609;
    msg.u = 0.0778723793369;
    msg.v = 0.277244316165;
    msg.w = 0.192683354316;
    msg.bias_psi = 0.851585473836;
    msg.bias_r = 0.416633765681;

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
    msg.setTimeStamp(0.114074104566);
    msg.setSource(30287U);
    msg.setSourceEntity(233U);
    msg.setDestination(55432U);
    msg.setDestinationEntity(203U);
    msg.x = 0.549567597261;
    msg.y = 0.79918512969;
    msg.z = 0.47258925584;
    msg.phi = 0.140462034321;
    msg.theta = 0.690049858193;
    msg.psi = 0.195811740496;
    msg.p = 0.623536475237;
    msg.q = 0.732462370726;
    msg.r = 0.745560894;
    msg.u = 0.573993667732;
    msg.v = 0.160835370063;
    msg.w = 0.0633522650256;
    msg.bias_psi = 0.670723770229;
    msg.bias_r = 0.455825522954;

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
    msg.setTimeStamp(0.0555327368466);
    msg.setSource(64620U);
    msg.setSourceEntity(239U);
    msg.setDestination(46662U);
    msg.setDestinationEntity(44U);
    msg.x = 0.802279278447;
    msg.y = 0.206081791683;
    msg.z = 0.00370867811308;
    msg.phi = 0.50975011922;
    msg.theta = 0.117510779916;
    msg.psi = 0.538720081057;
    msg.p = 0.757870520194;
    msg.q = 0.694224807427;
    msg.r = 0.377091620339;
    msg.u = 0.483841515705;
    msg.v = 0.255566524647;
    msg.w = 0.997863664781;
    msg.bias_psi = 0.096374289652;
    msg.bias_r = 0.242269129691;

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
    msg.setTimeStamp(0.141882091925);
    msg.setSource(9617U);
    msg.setSourceEntity(164U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.871726729332;
    msg.bias_r = 0.474140360284;
    msg.cog = 0.0635636215867;
    msg.cyaw = 0.910524489483;
    msg.lbl_rej_level = 0.490938386966;
    msg.gps_rej_level = 0.0398598062695;
    msg.custom_x = 0.368713834777;
    msg.custom_y = 0.313787314056;
    msg.custom_z = 0.199685243622;

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
    msg.setTimeStamp(0.518896264471);
    msg.setSource(2057U);
    msg.setSourceEntity(70U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(120U);
    msg.bias_psi = 0.355693886913;
    msg.bias_r = 0.369568550872;
    msg.cog = 0.871223364733;
    msg.cyaw = 0.0493429179858;
    msg.lbl_rej_level = 0.348462215939;
    msg.gps_rej_level = 0.785501074352;
    msg.custom_x = 0.382697249632;
    msg.custom_y = 0.370699921127;
    msg.custom_z = 0.839787168555;

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
    msg.setTimeStamp(0.623762225955);
    msg.setSource(38988U);
    msg.setSourceEntity(4U);
    msg.setDestination(36777U);
    msg.setDestinationEntity(59U);
    msg.bias_psi = 0.607698871727;
    msg.bias_r = 0.836856319093;
    msg.cog = 0.347635881674;
    msg.cyaw = 0.987137076325;
    msg.lbl_rej_level = 0.931282792338;
    msg.gps_rej_level = 0.834088046112;
    msg.custom_x = 0.234531275971;
    msg.custom_y = 0.794930244308;
    msg.custom_z = 0.0665043834718;

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
    msg.setTimeStamp(0.491015882963);
    msg.setSource(51920U);
    msg.setSourceEntity(192U);
    msg.setDestination(36252U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.325845286816;
    msg.reason = 174U;

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
    msg.setTimeStamp(0.290202513471);
    msg.setSource(61766U);
    msg.setSourceEntity(53U);
    msg.setDestination(19911U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.918038361139;
    msg.reason = 130U;

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
    msg.setTimeStamp(0.502335864525);
    msg.setSource(26991U);
    msg.setSourceEntity(7U);
    msg.setDestination(34002U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.512615241034;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.337843024664);
    msg.setSource(4460U);
    msg.setSourceEntity(254U);
    msg.setDestination(36605U);
    msg.setDestinationEntity(53U);
    msg.id = 160U;
    msg.range = 0.708605551866;
    msg.acceptance = 60U;

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
    msg.setTimeStamp(0.934231005858);
    msg.setSource(50675U);
    msg.setSourceEntity(102U);
    msg.setDestination(3252U);
    msg.setDestinationEntity(232U);
    msg.id = 96U;
    msg.range = 0.560280995707;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.905003488261);
    msg.setSource(28513U);
    msg.setSourceEntity(117U);
    msg.setDestination(26890U);
    msg.setDestinationEntity(221U);
    msg.id = 79U;
    msg.range = 0.352168452573;
    msg.acceptance = 149U;

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
    msg.setTimeStamp(0.0480519343722);
    msg.setSource(14988U);
    msg.setSourceEntity(47U);
    msg.setDestination(55786U);
    msg.setDestinationEntity(12U);
    msg.type = 44U;
    msg.reason = 141U;
    msg.value = 0.0542298458173;
    msg.timestep = 0.986857770174;

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
    msg.setTimeStamp(0.717647494897);
    msg.setSource(13340U);
    msg.setSourceEntity(17U);
    msg.setDestination(40494U);
    msg.setDestinationEntity(201U);
    msg.type = 163U;
    msg.reason = 57U;
    msg.value = 0.373059217582;
    msg.timestep = 0.860719409834;

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
    msg.setTimeStamp(0.528827206338);
    msg.setSource(43603U);
    msg.setSourceEntity(201U);
    msg.setDestination(58005U);
    msg.setDestinationEntity(96U);
    msg.type = 136U;
    msg.reason = 107U;
    msg.value = 0.210465941154;
    msg.timestep = 0.0450063120539;

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
    msg.setTimeStamp(0.382420326233);
    msg.setSource(59194U);
    msg.setSourceEntity(135U);
    msg.setDestination(41791U);
    msg.setDestinationEntity(109U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GIFVKNWJUBIZGOAYGJLTGUYBLKWVWLKXZBPZERVRWQAMAPKENUPQOUDJWIBHQXXQVLQOQMLHPUTZRNPSWAOTWKAKAZNKFJLTHRIYURSOANEZGYBMTFMDQSJXTHYMXEGEEUCADYSMNQFSIREMGQFLDIRDDEFCTBUCKCCBHFWRPVLPPSXIEZHURTDJCXPQOMLRSTWUAODIVYCCCSJHZGINFHVJGYDJLOZNHPBVKOYXTFOZSAV");
    tmp_msg_0.lat = 0.982846862562;
    tmp_msg_0.lon = 0.16661249628;
    tmp_msg_0.depth = 0.578234792414;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 123U;
    tmp_msg_0.transponder_delay = 241U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.513815761965;
    msg.y = 0.147713697771;
    msg.var_x = 0.780193594067;
    msg.var_y = 0.766736853319;
    msg.distance = 0.780322005496;

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
    msg.setTimeStamp(0.239798346009);
    msg.setSource(6707U);
    msg.setSourceEntity(69U);
    msg.setDestination(6178U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUNEKVNVUGIEAOOYNRNEAQWWNSDHQZLJACTQFVCJHNTEERRACXTHMOQFWKKCGSJWYHAQPNFCZXMH");
    tmp_msg_0.lat = 0.503855629703;
    tmp_msg_0.lon = 0.0152217163301;
    tmp_msg_0.depth = 0.990757539925;
    tmp_msg_0.query_channel = 232U;
    tmp_msg_0.reply_channel = 92U;
    tmp_msg_0.transponder_delay = 213U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0903768577283;
    msg.y = 0.820149968813;
    msg.var_x = 0.334888628409;
    msg.var_y = 0.457703030758;
    msg.distance = 0.846169176502;

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
    msg.setTimeStamp(0.569408768682);
    msg.setSource(12557U);
    msg.setSourceEntity(115U);
    msg.setDestination(5642U);
    msg.setDestinationEntity(85U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZWWFEGUQTOZOSSXAGDTJDKPYP");
    tmp_msg_0.lat = 0.220534621058;
    tmp_msg_0.lon = 0.443125011869;
    tmp_msg_0.depth = 0.560619248402;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 157U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.967670896403;
    msg.y = 0.533201841685;
    msg.var_x = 0.922640767879;
    msg.var_y = 0.989034325522;
    msg.distance = 0.467143364711;

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
    msg.setTimeStamp(0.758819035249);
    msg.setSource(57040U);
    msg.setSourceEntity(123U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(118U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.288736463448);
    msg.setSource(57332U);
    msg.setSourceEntity(174U);
    msg.setDestination(62517U);
    msg.setDestinationEntity(98U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.0309710547481);
    msg.setSource(46173U);
    msg.setSourceEntity(18U);
    msg.setDestination(54897U);
    msg.setDestinationEntity(99U);
    msg.state = 87U;

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
    msg.setTimeStamp(0.472035168948);
    msg.setSource(3440U);
    msg.setSourceEntity(133U);
    msg.setDestination(20379U);
    msg.setDestinationEntity(233U);
    msg.x = 0.0534888789768;
    msg.y = 0.116992279597;
    msg.z = 0.0416198123276;

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
    msg.setTimeStamp(0.0584895950143);
    msg.setSource(30262U);
    msg.setSourceEntity(75U);
    msg.setDestination(55357U);
    msg.setDestinationEntity(6U);
    msg.x = 0.0271877199039;
    msg.y = 0.568257199519;
    msg.z = 0.528869757801;

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
    msg.setTimeStamp(0.0187264766841);
    msg.setSource(5664U);
    msg.setSourceEntity(158U);
    msg.setDestination(9467U);
    msg.setDestinationEntity(178U);
    msg.x = 0.901690590016;
    msg.y = 0.6476602684;
    msg.z = 0.235680248136;

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
    msg.setTimeStamp(0.761152521158);
    msg.setSource(56013U);
    msg.setSourceEntity(87U);
    msg.setDestination(63788U);
    msg.setDestinationEntity(131U);
    msg.va = 0.163512042585;
    msg.aoa = 0.607356081864;
    msg.ssa = 0.881882834278;

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
    msg.setTimeStamp(0.605212410749);
    msg.setSource(6227U);
    msg.setSourceEntity(173U);
    msg.setDestination(1347U);
    msg.setDestinationEntity(56U);
    msg.va = 0.816232377688;
    msg.aoa = 0.257916413922;
    msg.ssa = 0.108412873537;

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
    msg.setTimeStamp(0.0416658963189);
    msg.setSource(11820U);
    msg.setSourceEntity(124U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(60U);
    msg.va = 0.639399172301;
    msg.aoa = 0.312051566072;
    msg.ssa = 0.201913020625;

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
    msg.setTimeStamp(0.320748934055);
    msg.setSource(30920U);
    msg.setSourceEntity(17U);
    msg.setDestination(33624U);
    msg.setDestinationEntity(95U);
    msg.value = 0.613718959124;

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
    msg.setTimeStamp(0.158261360099);
    msg.setSource(41030U);
    msg.setSourceEntity(148U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(210U);
    msg.value = 0.586155637113;

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
    msg.setTimeStamp(0.858862335228);
    msg.setSource(60844U);
    msg.setSourceEntity(132U);
    msg.setDestination(4518U);
    msg.setDestinationEntity(229U);
    msg.value = 0.91768703711;

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
    msg.setTimeStamp(0.515104774131);
    msg.setSource(24544U);
    msg.setSourceEntity(165U);
    msg.setDestination(53734U);
    msg.setDestinationEntity(203U);
    msg.value = 0.805760892514;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.667943424021);
    msg.setSource(39380U);
    msg.setSourceEntity(39U);
    msg.setDestination(20911U);
    msg.setDestinationEntity(141U);
    msg.value = 0.681020321423;
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
    msg.setTimeStamp(0.085329336817);
    msg.setSource(6926U);
    msg.setSourceEntity(138U);
    msg.setDestination(42663U);
    msg.setDestinationEntity(93U);
    msg.value = 0.978643437582;
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
    msg.setTimeStamp(0.454891295051);
    msg.setSource(57530U);
    msg.setSourceEntity(74U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(34U);
    msg.value = 0.418225544706;
    msg.speed_units = 73U;

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
    msg.setTimeStamp(0.188571744625);
    msg.setSource(56738U);
    msg.setSourceEntity(161U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(49U);
    msg.value = 0.785554497658;
    msg.speed_units = 238U;

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
    msg.setTimeStamp(0.742728433746);
    msg.setSource(41838U);
    msg.setSourceEntity(138U);
    msg.setDestination(23719U);
    msg.setDestinationEntity(235U);
    msg.value = 0.345317772328;
    msg.speed_units = 144U;

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
    msg.setTimeStamp(0.235741380246);
    msg.setSource(63495U);
    msg.setSourceEntity(233U);
    msg.setDestination(46574U);
    msg.setDestinationEntity(240U);
    msg.value = 0.133632945858;

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
    msg.setTimeStamp(0.358393038821);
    msg.setSource(30384U);
    msg.setSourceEntity(127U);
    msg.setDestination(40108U);
    msg.setDestinationEntity(121U);
    msg.value = 0.775463561252;

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
    msg.setTimeStamp(0.583377392806);
    msg.setSource(32477U);
    msg.setSourceEntity(85U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(235U);
    msg.value = 0.327651764091;

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
    msg.setTimeStamp(0.138101755522);
    msg.setSource(7314U);
    msg.setSourceEntity(144U);
    msg.setDestination(34211U);
    msg.setDestinationEntity(228U);
    msg.value = 0.183968312314;

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
    msg.setTimeStamp(0.944279541345);
    msg.setSource(13308U);
    msg.setSourceEntity(133U);
    msg.setDestination(24377U);
    msg.setDestinationEntity(8U);
    msg.value = 0.337329401794;

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
    msg.setTimeStamp(0.994789477943);
    msg.setSource(748U);
    msg.setSourceEntity(242U);
    msg.setDestination(15179U);
    msg.setDestinationEntity(43U);
    msg.value = 0.463741741297;

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
    msg.setTimeStamp(0.296190430496);
    msg.setSource(49556U);
    msg.setSourceEntity(218U);
    msg.setDestination(21233U);
    msg.setDestinationEntity(23U);
    msg.value = 0.82202683347;

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
    msg.setTimeStamp(0.12755020138);
    msg.setSource(22135U);
    msg.setSourceEntity(3U);
    msg.setDestination(61554U);
    msg.setDestinationEntity(94U);
    msg.value = 0.270308304007;

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
    msg.setTimeStamp(0.287089548897);
    msg.setSource(12979U);
    msg.setSourceEntity(190U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(86U);
    msg.value = 0.177587112537;

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
    msg.setTimeStamp(0.826334500324);
    msg.setSource(64874U);
    msg.setSourceEntity(240U);
    msg.setDestination(58748U);
    msg.setDestinationEntity(37U);
    msg.path_ref = 1165893137U;
    msg.start_lat = 0.694431184036;
    msg.start_lon = 0.378598635213;
    msg.start_z = 0.111268981512;
    msg.start_z_units = 155U;
    msg.end_lat = 0.633437035209;
    msg.end_lon = 0.106899856223;
    msg.end_z = 0.350013206173;
    msg.end_z_units = 221U;
    msg.speed = 0.753048154966;
    msg.speed_units = 3U;
    msg.lradius = 0.207026451332;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.608515908051);
    msg.setSource(65530U);
    msg.setSourceEntity(231U);
    msg.setDestination(56814U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 3893677637U;
    msg.start_lat = 0.974745919457;
    msg.start_lon = 0.893813277995;
    msg.start_z = 0.856937117882;
    msg.start_z_units = 187U;
    msg.end_lat = 0.290194261993;
    msg.end_lon = 0.179478636632;
    msg.end_z = 0.283708365851;
    msg.end_z_units = 91U;
    msg.speed = 0.428279028562;
    msg.speed_units = 182U;
    msg.lradius = 0.553375960328;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.911788374105);
    msg.setSource(18450U);
    msg.setSourceEntity(52U);
    msg.setDestination(58458U);
    msg.setDestinationEntity(14U);
    msg.path_ref = 2126879378U;
    msg.start_lat = 0.906128832573;
    msg.start_lon = 0.390392443208;
    msg.start_z = 0.269344463743;
    msg.start_z_units = 34U;
    msg.end_lat = 0.49747915289;
    msg.end_lon = 0.815810772337;
    msg.end_z = 0.763242751998;
    msg.end_z_units = 223U;
    msg.speed = 0.10575349983;
    msg.speed_units = 204U;
    msg.lradius = 0.515068583053;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.340073833684);
    msg.setSource(48828U);
    msg.setSourceEntity(70U);
    msg.setDestination(44657U);
    msg.setDestinationEntity(115U);
    msg.x = 0.824828125104;
    msg.y = 0.0594483847838;
    msg.z = 0.38706394005;
    msg.k = 0.989389453237;
    msg.m = 0.44626018214;
    msg.n = 0.0227901769423;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.116430197367);
    msg.setSource(36742U);
    msg.setSourceEntity(7U);
    msg.setDestination(9023U);
    msg.setDestinationEntity(0U);
    msg.x = 0.0735566780806;
    msg.y = 0.0109774330774;
    msg.z = 0.675665559894;
    msg.k = 0.305743543614;
    msg.m = 0.549316132448;
    msg.n = 0.0209029826192;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.659937891555);
    msg.setSource(41230U);
    msg.setSourceEntity(84U);
    msg.setDestination(5740U);
    msg.setDestinationEntity(199U);
    msg.x = 0.895940105226;
    msg.y = 0.291281409454;
    msg.z = 0.717021912597;
    msg.k = 0.141687517094;
    msg.m = 0.543258833217;
    msg.n = 0.273190830971;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.137023257962);
    msg.setSource(28069U);
    msg.setSourceEntity(157U);
    msg.setDestination(61926U);
    msg.setDestinationEntity(191U);
    msg.value = 0.439716405475;

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
    msg.setTimeStamp(0.572945812942);
    msg.setSource(19290U);
    msg.setSourceEntity(52U);
    msg.setDestination(14225U);
    msg.setDestinationEntity(146U);
    msg.value = 0.881757039132;

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
    msg.setTimeStamp(0.396547183979);
    msg.setSource(49346U);
    msg.setSourceEntity(142U);
    msg.setDestination(42275U);
    msg.setDestinationEntity(72U);
    msg.value = 0.357686924379;

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
    msg.setTimeStamp(0.915502902117);
    msg.setSource(58420U);
    msg.setSourceEntity(0U);
    msg.setDestination(2338U);
    msg.setDestinationEntity(196U);
    msg.u = 0.765462473061;
    msg.v = 0.681926396225;
    msg.w = 0.728643782574;
    msg.p = 0.223890379381;
    msg.q = 0.0211458614735;
    msg.r = 0.207622731202;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.901692977765);
    msg.setSource(50615U);
    msg.setSourceEntity(94U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(181U);
    msg.u = 0.0340165198713;
    msg.v = 0.0259545636129;
    msg.w = 0.0731059000254;
    msg.p = 0.890285497496;
    msg.q = 0.643707921099;
    msg.r = 0.337577073861;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.594522747436);
    msg.setSource(45146U);
    msg.setSourceEntity(40U);
    msg.setDestination(64325U);
    msg.setDestinationEntity(77U);
    msg.u = 0.656461624859;
    msg.v = 0.851978823632;
    msg.w = 0.310877350782;
    msg.p = 0.123849208992;
    msg.q = 0.0178439590898;
    msg.r = 0.375572549304;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.430420047578);
    msg.setSource(38787U);
    msg.setSourceEntity(234U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 163114314U;
    msg.start_lat = 0.195530151057;
    msg.start_lon = 0.953862557389;
    msg.start_z = 0.153680246337;
    msg.start_z_units = 228U;
    msg.end_lat = 0.189118526935;
    msg.end_lon = 0.922946090256;
    msg.end_z = 0.145279166254;
    msg.end_z_units = 204U;
    msg.lradius = 0.255327847098;
    msg.flags = 114U;
    msg.x = 0.633243963125;
    msg.y = 0.349316305716;
    msg.z = 0.273824409238;
    msg.vx = 0.546215005804;
    msg.vy = 0.640498408382;
    msg.vz = 0.897572550143;
    msg.course_error = 0.497425286613;
    msg.eta = 64307U;

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
    msg.setTimeStamp(0.66448248547);
    msg.setSource(18458U);
    msg.setSourceEntity(200U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(234U);
    msg.path_ref = 1248688073U;
    msg.start_lat = 0.632073844028;
    msg.start_lon = 0.132702927173;
    msg.start_z = 0.341994943448;
    msg.start_z_units = 206U;
    msg.end_lat = 0.112281803658;
    msg.end_lon = 0.466720242887;
    msg.end_z = 0.972032251099;
    msg.end_z_units = 69U;
    msg.lradius = 0.471925914454;
    msg.flags = 50U;
    msg.x = 0.705666392866;
    msg.y = 0.356737769085;
    msg.z = 0.136385107189;
    msg.vx = 0.320649243863;
    msg.vy = 0.360209745078;
    msg.vz = 0.568185397262;
    msg.course_error = 0.0990199243525;
    msg.eta = 60390U;

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
    msg.setTimeStamp(0.794358838505);
    msg.setSource(65222U);
    msg.setSourceEntity(71U);
    msg.setDestination(14676U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 3286940613U;
    msg.start_lat = 0.454690008874;
    msg.start_lon = 0.825562758703;
    msg.start_z = 0.397108097183;
    msg.start_z_units = 77U;
    msg.end_lat = 0.0292164683915;
    msg.end_lon = 0.781881686328;
    msg.end_z = 0.880700457797;
    msg.end_z_units = 235U;
    msg.lradius = 0.0635780291979;
    msg.flags = 194U;
    msg.x = 0.218917696746;
    msg.y = 0.000732218883682;
    msg.z = 0.716233548315;
    msg.vx = 0.511283473047;
    msg.vy = 0.897501048273;
    msg.vz = 0.628095501142;
    msg.course_error = 0.914512806237;
    msg.eta = 48892U;

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
    msg.setTimeStamp(0.985942294345);
    msg.setSource(53531U);
    msg.setSourceEntity(246U);
    msg.setDestination(64166U);
    msg.setDestinationEntity(144U);
    msg.k = 0.791188546366;
    msg.m = 0.595626798959;
    msg.n = 0.559039261105;

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
    msg.setTimeStamp(0.466689356534);
    msg.setSource(47296U);
    msg.setSourceEntity(14U);
    msg.setDestination(58463U);
    msg.setDestinationEntity(199U);
    msg.k = 0.672186874488;
    msg.m = 0.44214934932;
    msg.n = 0.9434881754;

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
    msg.setTimeStamp(0.841025538551);
    msg.setSource(20896U);
    msg.setSourceEntity(131U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(230U);
    msg.k = 0.387661531233;
    msg.m = 0.977570283804;
    msg.n = 0.47070881554;

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
    msg.setTimeStamp(0.157819331188);
    msg.setSource(54636U);
    msg.setSourceEntity(226U);
    msg.setDestination(21470U);
    msg.setDestinationEntity(26U);
    msg.p = 0.890594413235;
    msg.i = 0.825282077692;
    msg.d = 0.000205926593486;
    msg.a = 0.827189823156;

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
    msg.setTimeStamp(0.133275628665);
    msg.setSource(17414U);
    msg.setSourceEntity(64U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(155U);
    msg.p = 0.744338175812;
    msg.i = 0.549779388591;
    msg.d = 0.0763201936931;
    msg.a = 0.987989569015;

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
    msg.setTimeStamp(0.515133811993);
    msg.setSource(25817U);
    msg.setSourceEntity(103U);
    msg.setDestination(37107U);
    msg.setDestinationEntity(54U);
    msg.p = 0.595004959966;
    msg.i = 0.935272938342;
    msg.d = 0.629916778956;
    msg.a = 0.899801828125;

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
    msg.setTimeStamp(0.992911047336);
    msg.setSource(42589U);
    msg.setSourceEntity(193U);
    msg.setDestination(13350U);
    msg.setDestinationEntity(215U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.0365424199547);
    msg.setSource(45109U);
    msg.setSourceEntity(78U);
    msg.setDestination(11638U);
    msg.setDestinationEntity(181U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.99277508965);
    msg.setSource(16957U);
    msg.setSourceEntity(141U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(200U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.893512968336);
    msg.setSource(19326U);
    msg.setSourceEntity(117U);
    msg.setDestination(20637U);
    msg.setDestinationEntity(214U);
    msg.x = 0.0633117622559;
    msg.y = 0.336818520995;
    msg.z = 0.101818240958;
    msg.vx = 0.585940457986;
    msg.vy = 0.338250538666;
    msg.vz = 0.302843898163;
    msg.ax = 0.285352002727;
    msg.ay = 0.0555881189451;
    msg.az = 0.490406827047;
    msg.flags = 51592U;

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
    msg.setTimeStamp(0.888653053519);
    msg.setSource(2464U);
    msg.setSourceEntity(9U);
    msg.setDestination(19301U);
    msg.setDestinationEntity(103U);
    msg.x = 0.0394903259095;
    msg.y = 0.272721500829;
    msg.z = 0.0298319264706;
    msg.vx = 0.341873499829;
    msg.vy = 0.905824457064;
    msg.vz = 0.847982960392;
    msg.ax = 0.763519937615;
    msg.ay = 0.51581727778;
    msg.az = 0.86469882231;
    msg.flags = 47432U;

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
    msg.setTimeStamp(0.413847482949);
    msg.setSource(44419U);
    msg.setSourceEntity(101U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(241U);
    msg.x = 0.314015466621;
    msg.y = 0.99926502314;
    msg.z = 0.368605729723;
    msg.vx = 0.994441231161;
    msg.vy = 0.0959160272598;
    msg.vz = 0.315200524489;
    msg.ax = 0.261979009966;
    msg.ay = 0.0566433343005;
    msg.az = 0.0410093248648;
    msg.flags = 61031U;

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
    msg.setTimeStamp(0.46411734542);
    msg.setSource(55237U);
    msg.setSourceEntity(167U);
    msg.setDestination(46673U);
    msg.setDestinationEntity(23U);
    msg.value = 0.39266147767;

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
    msg.setTimeStamp(0.644921669228);
    msg.setSource(23048U);
    msg.setSourceEntity(175U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(166U);
    msg.value = 0.704940767794;

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
    msg.setTimeStamp(0.616474985804);
    msg.setSource(32641U);
    msg.setSourceEntity(120U);
    msg.setDestination(56399U);
    msg.setDestinationEntity(47U);
    msg.value = 0.439748356541;

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
    msg.setTimeStamp(0.28880808618);
    msg.setSource(3380U);
    msg.setSourceEntity(93U);
    msg.setDestination(26865U);
    msg.setDestinationEntity(111U);
    msg.timeout = 23112U;
    msg.lat = 0.317271229259;
    msg.lon = 0.0465134280484;
    msg.z = 0.635388734666;
    msg.z_units = 124U;
    msg.speed = 0.629530165193;
    msg.speed_units = 185U;
    msg.roll = 0.13029853408;
    msg.pitch = 0.490738608651;
    msg.yaw = 0.602804916633;
    msg.custom.assign("NYNAHVSHEEQJRZSAFPWIBJVFFBEDIIAWDCVKFRHFNEUCUAWXZYDMSBOXKKBOWKRICTXJQZPLOTXSCUQQOTUQKGWPMVGFOFTHJWDDJNRJVMQEURMIMHYRGVGCNLFKUAVPPJWOLBENBTZBSHBVQTWYXCRZZGVHKAJODZEUXQABSTZDAYIPISNYMZTYYPAZSLILAYWFBRKFCVMOJCRDCEQXGDJ");

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
    msg.setTimeStamp(0.35422323902);
    msg.setSource(5392U);
    msg.setSourceEntity(134U);
    msg.setDestination(32285U);
    msg.setDestinationEntity(184U);
    msg.timeout = 49892U;
    msg.lat = 0.716067382859;
    msg.lon = 0.561026453703;
    msg.z = 0.198799789624;
    msg.z_units = 228U;
    msg.speed = 0.946962657743;
    msg.speed_units = 140U;
    msg.roll = 0.356409665422;
    msg.pitch = 0.596945329922;
    msg.yaw = 0.545080178597;
    msg.custom.assign("XXINUXREETOGRGJYMCVHAXLDPEDZRGFZSICYPUSPVTSJJYQGQPUSUJCFKGHTCIRYKRHXDKWLTTLUCIOWD");

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
    msg.setTimeStamp(0.499905232944);
    msg.setSource(51040U);
    msg.setSourceEntity(251U);
    msg.setDestination(5410U);
    msg.setDestinationEntity(64U);
    msg.timeout = 48283U;
    msg.lat = 0.913382566509;
    msg.lon = 0.771433628969;
    msg.z = 0.72534992267;
    msg.z_units = 98U;
    msg.speed = 0.929038279139;
    msg.speed_units = 68U;
    msg.roll = 0.0757819379578;
    msg.pitch = 0.790624050117;
    msg.yaw = 0.55061551041;
    msg.custom.assign("JBDCLMSEXKNEFUWLOUZLBSIWUBLWIJUJYCYVXJZXVBAQDCIONNNAYMERTQXPBTHDGIWAKWVOHXOZCUFVQGQFKHMZDWSIIERMDAYSRMDMDQCXWHUPUTIWRNQHRFCGQJYXYACOHBLTOOTWAAJCZPSNLYHVNNTODQHPKCPKSPRRLFGBQPQEHAVBEJOVSJBKMKLJFFSZP");

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
    msg.setTimeStamp(0.188980758142);
    msg.setSource(48933U);
    msg.setSourceEntity(56U);
    msg.setDestination(50182U);
    msg.setDestinationEntity(225U);
    msg.timeout = 62163U;
    msg.lat = 0.211227356182;
    msg.lon = 0.901009836163;
    msg.z = 0.681521630581;
    msg.z_units = 194U;
    msg.speed = 0.727883252514;
    msg.speed_units = 117U;
    msg.duration = 23984U;
    msg.radius = 0.457019314067;
    msg.flags = 9U;
    msg.custom.assign("HBRBADTVUFILHPWFSETYKRCMUZUWIPECSXSZAYTSRNUROIDHYOIGTIDAHGRBJZODZMEZGQEFRJWQGRMQHQLGMPVFVTXHYCBNYXYYVLFCBVOXPUPFDGFPMCOMBKLASNNFOLHKJWCHIAWKTLODX");

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
    msg.setTimeStamp(0.929588989301);
    msg.setSource(8395U);
    msg.setSourceEntity(131U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(126U);
    msg.timeout = 15025U;
    msg.lat = 0.718489577077;
    msg.lon = 0.741464406005;
    msg.z = 0.0052291478864;
    msg.z_units = 235U;
    msg.speed = 0.24146275289;
    msg.speed_units = 56U;
    msg.duration = 59909U;
    msg.radius = 0.383683616066;
    msg.flags = 167U;
    msg.custom.assign("WAKXEXHHQDVEKLCAFSIUGGUOTYHKBRTLPJTIQWNZPBHEQBOSQBFZNDASVFJIELX");

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
    msg.setTimeStamp(0.113848197737);
    msg.setSource(61134U);
    msg.setSourceEntity(130U);
    msg.setDestination(58877U);
    msg.setDestinationEntity(196U);
    msg.timeout = 11470U;
    msg.lat = 0.520002658415;
    msg.lon = 0.953027138621;
    msg.z = 0.0126578165062;
    msg.z_units = 162U;
    msg.speed = 0.901086481238;
    msg.speed_units = 14U;
    msg.duration = 25693U;
    msg.radius = 0.267649027284;
    msg.flags = 3U;
    msg.custom.assign("ALVZIVNSNMFHCHDNUFDRYRUCFTMDFRFCWOWPLBQKLDYOARIJBAIVVWZDGSGJYULGQDCTCZYTNCKPTBKTFUYGHGOPRHQAXTOLWXIWAQGNDPGOLSLFAEJXAPDSYKHGUXMRUHYQZBJZMEVOATHZNFXEVOKQCPAVJIJMULWEJZJEZWNMSBBKULIBARBOWNSXGWNG");

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
    msg.setTimeStamp(0.254108516494);
    msg.setSource(46472U);
    msg.setSourceEntity(136U);
    msg.setDestination(41974U);
    msg.setDestinationEntity(35U);
    msg.custom.assign("KFCJLTLJFTMALFYNXVWQHQHTZFBPTGKAIIXYEHBPBNAOVJPZCIYKYYBCHSFEZMCPFBBYRFRAVGJENMNROTUBKAECFYOVVRNZJQSQQZDCZLIMWTPXGOSDJPJKBQIOHXQPAGDECDSVXVWRCCWSBXUULIGWJQFPZESOKF");

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
    msg.setTimeStamp(0.886328148277);
    msg.setSource(10491U);
    msg.setSourceEntity(14U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(241U);
    msg.custom.assign("ZBZAZFSHVXRDAUKCZDYAVXKGMDNJCTBDWJLUXIJONWNSNGNKAIZJNXKYIHLQZURFVFMYMNSILUCUPAETYMEXQATVTHYTJPGVHFJGBRPOIZCJSQNLASWZPHWEQGFDUWRCLEUZESGFJLTREQVEYGSPLISKFOFTYSIHIHHUYBMQMJP");

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
    msg.setTimeStamp(0.0559643942837);
    msg.setSource(43683U);
    msg.setSourceEntity(200U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(11U);
    msg.custom.assign("HVKJQFTGXPUCBILXTK");

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
    msg.setTimeStamp(0.219114947613);
    msg.setSource(41062U);
    msg.setSourceEntity(232U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(217U);
    msg.timeout = 64292U;
    msg.lat = 0.438602575434;
    msg.lon = 0.969228510639;
    msg.z = 0.766207800092;
    msg.z_units = 200U;
    msg.duration = 25505U;
    msg.speed = 0.548907410381;
    msg.speed_units = 233U;
    msg.type = 58U;
    msg.radius = 0.238623376519;
    msg.length = 0.519607827547;
    msg.bearing = 0.65476948134;
    msg.direction = 205U;
    msg.custom.assign("MJLWJASIXNVIMAEXWDHQGURJODOZILQUQLXFBKCEQWKNBNIRWUVLBSGCPCDTQMIHCPZYYZHSLJZOULWRPUWXVTYGUXIALKYYABVFFTSYQPTCHHCKDXTNGDSCSBQSEYGAMTPZJAENHXMKCLYKFBGSAIDMH");

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
    msg.setTimeStamp(0.429454543305);
    msg.setSource(53372U);
    msg.setSourceEntity(70U);
    msg.setDestination(58962U);
    msg.setDestinationEntity(215U);
    msg.timeout = 19886U;
    msg.lat = 0.721551732931;
    msg.lon = 0.978316603851;
    msg.z = 0.815850131157;
    msg.z_units = 32U;
    msg.duration = 8534U;
    msg.speed = 0.771552032135;
    msg.speed_units = 182U;
    msg.type = 135U;
    msg.radius = 0.542369575917;
    msg.length = 0.406141420799;
    msg.bearing = 0.725883984022;
    msg.direction = 64U;
    msg.custom.assign("GHNOAKDQRSMMIDOSYXHFDKBAKTEJOYZOHCAYQWKTYZIPNEBRQCDPETXHHXNWJBONUXMZPYTIZGPZFEGUZJUFUD");

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
    msg.setTimeStamp(0.791915326937);
    msg.setSource(37901U);
    msg.setSourceEntity(205U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(186U);
    msg.timeout = 52482U;
    msg.lat = 0.111414432138;
    msg.lon = 0.837617400546;
    msg.z = 0.253280254412;
    msg.z_units = 87U;
    msg.duration = 59436U;
    msg.speed = 0.293243250744;
    msg.speed_units = 188U;
    msg.type = 28U;
    msg.radius = 0.635789689015;
    msg.length = 0.612555900529;
    msg.bearing = 0.291358741021;
    msg.direction = 186U;
    msg.custom.assign("WCPKUITSJQFTCNGSFVFQRSAEMMAOZAXBVMVRMRDHDSZEWXTPHVICAWLXDNIEOHNKMXMIODWJOWVEUDJIFNFIXXPCBWJMGUKOHEKMBPIGTFYLTTUHQSCECULYYWRAQBVLBGUEULGJKKHTMOEDKTZIYFPHOSLAACVCDSCRIJBQYBTYPDOODLHXKQWNVUXQERKZAQSGCUFLJRVFXSWLHLKYRPNVPRZHZZJJXGNZRNPYAGAMID");

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
    msg.setTimeStamp(0.224698973348);
    msg.setSource(30253U);
    msg.setSourceEntity(157U);
    msg.setDestination(42875U);
    msg.setDestinationEntity(145U);
    msg.duration = 52553U;
    msg.custom.assign("RJLPQVJKSDAJYVXOKKMGPWQRHIYOOXLFDAAHSSVCKEOVCGOTFTCMDFXHUSFBVJKKIZUPAPBXBUHVSBLDCNGRIDYJKZVCYNGWAYIGJZWFWYZSGYUIRJDRGCWQMUZZILTILXOCJMGYTXWHB");

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
    msg.setTimeStamp(0.350751104237);
    msg.setSource(21827U);
    msg.setSourceEntity(200U);
    msg.setDestination(62294U);
    msg.setDestinationEntity(15U);
    msg.duration = 12567U;
    msg.custom.assign("KDVCUMALAXBZESBYCHGRZLFDSOVUQJUPONWS");

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
    msg.setTimeStamp(0.253948290609);
    msg.setSource(22039U);
    msg.setSourceEntity(229U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(42U);
    msg.duration = 23573U;
    msg.custom.assign("ZDDDPPOIRHUOIUJTSHATTRQCWMSENTIBCOHVAVPOTZKRDEASNHMDLCNXOXSGNNYLXEZHCBBYBQPHNYARZFAVDLTMVJEXOWEKI");

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
    msg.setTimeStamp(0.247931169587);
    msg.setSource(53756U);
    msg.setSourceEntity(193U);
    msg.setDestination(27649U);
    msg.setDestinationEntity(50U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.55098204049;
    msg.control.set(tmp_msg_0);
    msg.duration = 24731U;
    msg.custom.assign("LRCRLYDLMSSSPWBDDKKVSDAINPJBGZONHGOQXXKQLMBYNKTJFUKQEKIXKVRSAODJULCGNCTGZUQFBYUCIVTJJUSSWTZLWADJJGLEPZ");

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
    msg.setTimeStamp(0.595977868658);
    msg.setSource(64036U);
    msg.setSourceEntity(98U);
    msg.setDestination(64638U);
    msg.setDestinationEntity(170U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.867933434008;
    msg.control.set(tmp_msg_0);
    msg.duration = 1168U;
    msg.custom.assign("CMSFZWSFUCJECGGROOIAYISSOYPQZHKJNXHVEEC");

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
    msg.setTimeStamp(0.438225358252);
    msg.setSource(38256U);
    msg.setSourceEntity(150U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(226U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.703536411818;
    tmp_msg_0.z_units = 211U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12636U;
    msg.custom.assign("VSVCOHMHZQKWERYLYRYJMRMDPQDNEKAUXDSLITEFEPUUGZCTPXNCOQRBKXJQKHIIQBVYQMZTAJSYCWMQHVNLFFDSGEXGYLWXZKQGPUSHRPUPVJODNNODZSVDAKLBPABNBJEAWKWTFNYZFIIVJZOWGCPWDGPVEOQIXJJIKHTBBLROFYUEUOXHLTISLCAFGZOFNDZCFDRYQATEHMARGZRTSUIMSFN");

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
    msg.setTimeStamp(0.566823451047);
    msg.setSource(64413U);
    msg.setSourceEntity(54U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(210U);
    msg.timeout = 4891U;
    msg.lat = 0.0494599028681;
    msg.lon = 0.751321052068;
    msg.z = 0.913559836446;
    msg.z_units = 39U;
    msg.speed = 0.228163973751;
    msg.speed_units = 201U;
    msg.bearing = 0.241023413958;
    msg.cross_angle = 0.279175365678;
    msg.width = 0.689234382408;
    msg.length = 0.852800758943;
    msg.hstep = 0.559596106385;
    msg.coff = 248U;
    msg.alternation = 169U;
    msg.flags = 249U;
    msg.custom.assign("CHPEZDTUNMVBEPBSZNJIAVAFQYJEXLDHGXPYTGDJLTGEWRAYMZYFSXCUVTYRBNQNKOVWMCHLZJBNBFOALSVMHDKTIEIEEAZFJYRJKWHMIGDDRYROEFUNLNSFJOXRTQMPZGUWVSVAHFKAQYCLOCUCWTECKMUMOXBBPVOKIHQQNAJCEGJNUCBCTGSADBKZDMGHIHXW");

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
    msg.setTimeStamp(0.595831662366);
    msg.setSource(23024U);
    msg.setSourceEntity(59U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(239U);
    msg.timeout = 7723U;
    msg.lat = 0.0839246359822;
    msg.lon = 0.674102481861;
    msg.z = 0.0111123150422;
    msg.z_units = 141U;
    msg.speed = 0.795346921117;
    msg.speed_units = 99U;
    msg.bearing = 0.167776010059;
    msg.cross_angle = 0.901394273514;
    msg.width = 0.983575743436;
    msg.length = 0.744724887721;
    msg.hstep = 0.399691709083;
    msg.coff = 63U;
    msg.alternation = 67U;
    msg.flags = 165U;
    msg.custom.assign("CPDWUBOCRERXLZQYSAGYGXGZLZHRSZUDTXMGZFIBOJKNYPFWLPKBLIDBWAKPPNLMAFWAQUBTHGFQSXJVMVODVNZTZTVAQWDDPDKTTRGQMIIULYLTVNFAKCCOWPPHVVEMSOCIQTLWYVUOXKKONDQOBRBXQHTEMAWNDSZPBICNZXQUNJRYJVEGTGCURQGPODUNHRHSFBFCJMAWUFIJVSEXJHMNEMYYCALSZYEBFRIUGMXHKEHS");

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
    msg.setTimeStamp(0.229970190866);
    msg.setSource(29981U);
    msg.setSourceEntity(73U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(162U);
    msg.timeout = 40295U;
    msg.lat = 0.600191570996;
    msg.lon = 0.686388411771;
    msg.z = 0.428826978572;
    msg.z_units = 133U;
    msg.speed = 0.892592618427;
    msg.speed_units = 163U;
    msg.bearing = 0.797863701187;
    msg.cross_angle = 0.763668221786;
    msg.width = 0.902889390702;
    msg.length = 0.151930314627;
    msg.hstep = 0.385759831327;
    msg.coff = 153U;
    msg.alternation = 108U;
    msg.flags = 234U;
    msg.custom.assign("UPSRQSBMWEDUBHXBABLKBPERHYVVANBCDXXNCRMZWRVWOIBZSIGOUAYWXVFMKQTQLQJTHTCAPLZPKTDWTARTJOXAVDDRVLSCBJZZBNYYKUIEIXAQMCPJMMWYZFNOH");

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
    msg.setTimeStamp(0.288282841409);
    msg.setSource(41575U);
    msg.setSourceEntity(69U);
    msg.setDestination(17250U);
    msg.setDestinationEntity(115U);
    msg.timeout = 31497U;
    msg.lat = 0.352409111008;
    msg.lon = 0.051424129345;
    msg.z = 0.0952897367622;
    msg.z_units = 236U;
    msg.speed = 0.69354724378;
    msg.speed_units = 170U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.353997487099;
    tmp_msg_0.y = 0.447561221465;
    tmp_msg_0.z = 0.071351456365;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VZPEQWLSJLBGCFHPXVONYIHSBFAXMMJYKXQPOWWKUYDSXRYCJGAMRFCLVUCTOVXKUVTMGRUJLUASVOUZQQILSXNDCMVGXKVNYOAAWZWNDZKDDMNFTWZBTIHKMGJWTPKERXNYLERISBYTEODJQLZPQMTZRHZVUBGEB");

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
    msg.setTimeStamp(0.769963306763);
    msg.setSource(50082U);
    msg.setSourceEntity(135U);
    msg.setDestination(53098U);
    msg.setDestinationEntity(29U);
    msg.timeout = 3730U;
    msg.lat = 0.733179948657;
    msg.lon = 0.153905964349;
    msg.z = 0.534319193353;
    msg.z_units = 196U;
    msg.speed = 0.510147257813;
    msg.speed_units = 124U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.567951368223;
    tmp_msg_0.y = 0.0341944830205;
    tmp_msg_0.z = 0.528519996652;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JVAIBEDLDNFHYXLOUNWBRNGTQWEWYZSIQEDLYXKGANWGMEHYCLQNLLEZHAETUHUQMKPHFKCBDBLIRRPNGDOEGRZKTHAKSLPFBRQQPGTOCBFAJGGUDZRMSSIPCDOOUVAYJEWAXWEPUZZWJLMXNIXSJCVQSDZDNR");

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
    msg.setTimeStamp(0.105025855697);
    msg.setSource(456U);
    msg.setSourceEntity(15U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(214U);
    msg.timeout = 42241U;
    msg.lat = 0.679564835794;
    msg.lon = 0.368355552842;
    msg.z = 0.348128513875;
    msg.z_units = 68U;
    msg.speed = 0.490903431739;
    msg.speed_units = 252U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0307840811214;
    tmp_msg_0.y = 0.074037416965;
    tmp_msg_0.z = 0.369233218343;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WWVPFIKKMXPM");

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
    msg.setTimeStamp(0.161102101834);
    msg.setSource(59995U);
    msg.setSourceEntity(34U);
    msg.setDestination(3500U);
    msg.setDestinationEntity(198U);
    msg.x = 0.490828913459;
    msg.y = 0.330768583046;
    msg.z = 0.150706205081;

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
    msg.setTimeStamp(0.164640611825);
    msg.setSource(57072U);
    msg.setSourceEntity(208U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(222U);
    msg.x = 0.978115451194;
    msg.y = 0.0664487804186;
    msg.z = 0.401188116071;

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
    msg.setTimeStamp(0.920066623327);
    msg.setSource(33087U);
    msg.setSourceEntity(154U);
    msg.setDestination(64966U);
    msg.setDestinationEntity(198U);
    msg.x = 0.237362055843;
    msg.y = 0.0585381620425;
    msg.z = 0.576606728877;

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
    msg.setTimeStamp(0.946270341163);
    msg.setSource(18616U);
    msg.setSourceEntity(207U);
    msg.setDestination(17415U);
    msg.setDestinationEntity(125U);
    msg.timeout = 16050U;
    msg.lat = 0.189982734091;
    msg.lon = 0.402975252911;
    msg.z = 0.911166012913;
    msg.z_units = 53U;
    msg.amplitude = 0.0680732004676;
    msg.pitch = 0.770412524384;
    msg.speed = 0.991536833128;
    msg.speed_units = 0U;
    msg.custom.assign("TAJBBWAUCCQYPNDOOVSACJIXIMLOHTUHKDNLMBQBJUKCBWKCMLKHOERYMGFFOLMYCNQDUXGIDQIOZPLYHCEXTUQBZXVHLSSRJGSIFVPDYZRFPGROTFUNBHAJTXPXTYNIARNGAHNWKWQPINZXMCPXPUMBGTQESYZFREDD");

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
    msg.setTimeStamp(0.873211108388);
    msg.setSource(33867U);
    msg.setSourceEntity(236U);
    msg.setDestination(39800U);
    msg.setDestinationEntity(63U);
    msg.timeout = 65070U;
    msg.lat = 0.971484098169;
    msg.lon = 0.181899093314;
    msg.z = 0.777406542848;
    msg.z_units = 48U;
    msg.amplitude = 0.36538281441;
    msg.pitch = 0.373623223796;
    msg.speed = 0.727329573343;
    msg.speed_units = 157U;
    msg.custom.assign("YKBZSFXWVQZWCMAYFRG");

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
    msg.setTimeStamp(0.560170657614);
    msg.setSource(26253U);
    msg.setSourceEntity(243U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(87U);
    msg.timeout = 60037U;
    msg.lat = 0.306038737073;
    msg.lon = 0.128182833832;
    msg.z = 0.3330500193;
    msg.z_units = 91U;
    msg.amplitude = 0.94111021701;
    msg.pitch = 0.0999503885265;
    msg.speed = 0.479989968021;
    msg.speed_units = 148U;
    msg.custom.assign("MWVEHYLBVDVWPSCCYTLRYUCAAURWOENMZVRLZMVKUTDQKXEUXRQDGTWDBSGHTDLXFJWNETUQMOIFHGPNDSSOLXMUABKCIEICXHDHTOFMAAIZOUOFYQPLFOYKEUPLERJWUADIXKTHGGRSKAWHPZFGOCFDNGRGQPANRQYWAWYIMLSHOYURPJVYSEZFTMTMCJVFBNCXTV");

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
    msg.setTimeStamp(0.808624561466);
    msg.setSource(11839U);
    msg.setSourceEntity(228U);
    msg.setDestination(29912U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.705839228487);
    msg.setSource(10010U);
    msg.setSourceEntity(194U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.669120404184);
    msg.setSource(17547U);
    msg.setSourceEntity(157U);
    msg.setDestination(60626U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.419783746052);
    msg.setSource(10164U);
    msg.setSourceEntity(0U);
    msg.setDestination(24479U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.430551451188;
    msg.lon = 0.284063766426;
    msg.z = 0.776899423932;
    msg.z_units = 98U;
    msg.radius = 0.851587938094;
    msg.duration = 61437U;
    msg.speed = 0.942138369403;
    msg.speed_units = 52U;
    msg.custom.assign("TNGWDGMVVXRLYPPCDQCYGMKJOHSBNVEUTNXPWLSMOFTOUICMAYWJDJUVZFGBHWXQKEQSUXGAZSEIBZSZAIVGPFPKJTLWBWCNPYCAFXFOJQIHFRZKQWAMARINMVMSCEHPRBLCUSRHSWATNDUZVJNSLTYNBUNBXOOKQFMYJBRFFHCWLIVGATVDYZXHMSYKLEXNUKDBDUXZRJDKQOFPIHZDOHUGALKOZIYQWI");

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
    msg.setTimeStamp(0.310064893466);
    msg.setSource(24703U);
    msg.setSourceEntity(197U);
    msg.setDestination(61519U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.340430841459;
    msg.lon = 0.309920090315;
    msg.z = 0.421907984939;
    msg.z_units = 236U;
    msg.radius = 0.802606803777;
    msg.duration = 37743U;
    msg.speed = 0.932700005542;
    msg.speed_units = 220U;
    msg.custom.assign("QWGBDXCGXWSRRPLCKYUNWOORIEERBNXMHMYIPZIDVFFVHUREGTANFQVCTYELULJXQW");

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
    msg.setTimeStamp(0.936092541463);
    msg.setSource(2748U);
    msg.setSourceEntity(167U);
    msg.setDestination(18625U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.319577021002;
    msg.lon = 0.621054826907;
    msg.z = 0.584590477553;
    msg.z_units = 58U;
    msg.radius = 0.153179788296;
    msg.duration = 1619U;
    msg.speed = 0.967730925299;
    msg.speed_units = 143U;
    msg.custom.assign("DATWYFSJLAZMRRLQQQJLTYYYUIJAHZOGUOFZJFVWXIRARLKLRSGGINFMIEWOAXAWYCSNCRDMGP");

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
    msg.setTimeStamp(0.229882900506);
    msg.setSource(41040U);
    msg.setSourceEntity(242U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(240U);
    msg.timeout = 64354U;
    msg.flags = 78U;
    msg.lat = 0.576474214557;
    msg.lon = 0.402162176182;
    msg.start_z = 0.894732743225;
    msg.start_z_units = 4U;
    msg.end_z = 0.299731317719;
    msg.end_z_units = 133U;
    msg.radius = 0.0604043634395;
    msg.speed = 0.268685813218;
    msg.speed_units = 177U;
    msg.custom.assign("SNOFEHTBWMLZDAORJUXXPBIQEDGZUIJAPDDYMKRQFDREXICIFKPAHAEIJSVSCUQASJWXGKAAFCNCWDZ");

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
    msg.setTimeStamp(0.921716105616);
    msg.setSource(25634U);
    msg.setSourceEntity(209U);
    msg.setDestination(20115U);
    msg.setDestinationEntity(141U);
    msg.timeout = 15117U;
    msg.flags = 214U;
    msg.lat = 0.611897753141;
    msg.lon = 0.836343623631;
    msg.start_z = 0.137091629839;
    msg.start_z_units = 28U;
    msg.end_z = 0.889314184206;
    msg.end_z_units = 150U;
    msg.radius = 0.227382365311;
    msg.speed = 0.349011087874;
    msg.speed_units = 211U;
    msg.custom.assign("VAFQWPMJLOSLCEWUEHKZNXTFUYCSYOFINCIADUQMEEHINGMZVRVKUDLQKHSSUOXWSAMTEPWSNWQQYHXQPCAIYRRANMKBRHEMCJZBBJFEMEIXUZXFCRRH");

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
    msg.setTimeStamp(0.199245181569);
    msg.setSource(4928U);
    msg.setSourceEntity(197U);
    msg.setDestination(16937U);
    msg.setDestinationEntity(53U);
    msg.timeout = 51870U;
    msg.flags = 118U;
    msg.lat = 0.420974644081;
    msg.lon = 0.514024144869;
    msg.start_z = 0.306724670393;
    msg.start_z_units = 162U;
    msg.end_z = 0.234177819028;
    msg.end_z_units = 152U;
    msg.radius = 0.136635672014;
    msg.speed = 0.2133179427;
    msg.speed_units = 165U;
    msg.custom.assign("PSCYLIEYOXEDWKPSCHETRUFOBWGGQICXJOZNYVLQZGTUNYQWMUUNIMFLLPVKTMZIWDYYKBJZMANYDEVRWNEIONSOMBXXBZGARUQBGTWLZFKAEAXAKOTMWWCVFSRGSJEWRNIVOHHTBKSJQNXUXHCHICUPXJHUEFZMZDDJVNCVFDXBDSLBPQCP");

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
    msg.setTimeStamp(0.173382673856);
    msg.setSource(13037U);
    msg.setSourceEntity(93U);
    msg.setDestination(15290U);
    msg.setDestinationEntity(39U);
    msg.timeout = 19248U;
    msg.lat = 0.730142694244;
    msg.lon = 0.474464897145;
    msg.z = 0.814487451292;
    msg.z_units = 203U;
    msg.speed = 0.256025151987;
    msg.speed_units = 46U;
    msg.custom.assign("YTRUIWPCEVKRNWUISIBNRBHDFBCYBQPWJUALWTZCWHWHPGVLFEKJVXJUWJNLPQNBOAGZJLQAGBLDRBRKXVXITLYSURAMTERDUAJIPLVOFXBAAWZTPZJSMCGRKPDCEQHOQTVNEBRDDFZKXFQCHPOSYUBOGVMMSMYLCWNJIZOTODEZSKJEMNKXCQHMKFEUPWMEIEZOQXGTATRTXQGKYIGJMSPUYQHZFVD");

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
    msg.setTimeStamp(0.726989210771);
    msg.setSource(31086U);
    msg.setSourceEntity(217U);
    msg.setDestination(23824U);
    msg.setDestinationEntity(204U);
    msg.timeout = 64903U;
    msg.lat = 0.0219349341907;
    msg.lon = 0.0415846887482;
    msg.z = 0.200825203856;
    msg.z_units = 110U;
    msg.speed = 0.718287141666;
    msg.speed_units = 17U;
    msg.custom.assign("BXJXVRLLOFRTQWFXZRARTLAUTPLUZCXCIQLVEGHHCMTSLSCRDJMDUBAHMKJNEFNTPRSMINACKVYEYYGHSUMUTCYSCEZVZNLELEPXVKCPEBUIBDMDIBHZF");

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
    msg.setTimeStamp(0.818921538137);
    msg.setSource(24488U);
    msg.setSourceEntity(171U);
    msg.setDestination(15113U);
    msg.setDestinationEntity(155U);
    msg.timeout = 27473U;
    msg.lat = 0.939484158417;
    msg.lon = 0.789616897926;
    msg.z = 0.297012472913;
    msg.z_units = 185U;
    msg.speed = 0.551247889518;
    msg.speed_units = 174U;
    msg.custom.assign("KFBWPZBTODWZRDGKMSTXYBUUAOLUIWDMLLRSDSLSWSLDRVLMYCZXOMUHVBRQFAPRIQHEYDZ");

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
    msg.setTimeStamp(0.124981770577);
    msg.setSource(5460U);
    msg.setSourceEntity(128U);
    msg.setDestination(57465U);
    msg.setDestinationEntity(213U);
    msg.x = 0.394736708271;
    msg.y = 0.0132733233098;
    msg.z = 0.315425181113;
    msg.t = 0.117938467714;

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
    msg.setTimeStamp(0.403556324205);
    msg.setSource(22535U);
    msg.setSourceEntity(132U);
    msg.setDestination(52187U);
    msg.setDestinationEntity(36U);
    msg.x = 0.681002049972;
    msg.y = 0.255219808006;
    msg.z = 0.77105838276;
    msg.t = 0.185927213672;

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
    msg.setTimeStamp(0.493109863028);
    msg.setSource(50737U);
    msg.setSourceEntity(50U);
    msg.setDestination(28508U);
    msg.setDestinationEntity(199U);
    msg.x = 0.867425839522;
    msg.y = 0.881442759534;
    msg.z = 0.657990886643;
    msg.t = 0.275051357489;

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
    msg.setTimeStamp(0.965015694492);
    msg.setSource(4863U);
    msg.setSourceEntity(188U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(130U);
    msg.timeout = 16205U;
    msg.name.assign("ACFELHANQBBDXTQCNIPZNCLHYMPDHRFECQJBYDSTLYPFGWZJWMIESWOMTCDGGRRMLPFKUWWLZKVSJFIIMQPHAIYQCNAHKMWGCRARLVHDYYQEMAJVUBRFOVEJBOPLVLZOMIXOQKQCXBWXWOUTKKDMUZXMBAASVKRLJVZSFRTPGTSQCKJILJROPONYWUSISHXE");
    msg.custom.assign("NLFYWANKEQQRCVWJCBERFTOYYHDSNOUHGJDYBGDXWXEGRQVZILSQSIYHAGXJVFJOKOMSDGRZILDEWTPFOZRASLBTCGLRUTLHFDQNBHZYJCEDECOTBBAIWAKXVRYJFWOUKPXKMEQGPUNTNZKQUINPOMZMQRDHEVTUZHCMIXKWICLBMRJHIQEEPZFUQJMUPGGCPYPVBLMXUSFATJVMZIVCNVDLBRSXPSGHSAXAMYBJOSNWDTPK");

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
    msg.setTimeStamp(0.909435340336);
    msg.setSource(45031U);
    msg.setSourceEntity(132U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(48U);
    msg.timeout = 51527U;
    msg.name.assign("BTQZLHZNCUHMQPHNCWKAOOPWWNRDUOLPISEQVFPKXCDHKXFBWKFOAYFVEND");
    msg.custom.assign("MASDMHJLKREEHQTYWOEYJZZVZHIWOVWIVBPVMNQNFTIZLRUBZXTDFVQZEBXGBLQSCDNCHEXZVCTHVJQAMLOXAEFRFKBCIJDDGOUPNUKXLPRBGCTLAGJPCYGWKBPTHHJHMULNZDPCFOGKMNXRKYYRJSMHDXWVJUN");

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
    msg.setTimeStamp(0.233127079084);
    msg.setSource(21926U);
    msg.setSourceEntity(141U);
    msg.setDestination(36261U);
    msg.setDestinationEntity(85U);
    msg.timeout = 29740U;
    msg.name.assign("VOSXMONYSNWBCRJVRFTTOWPBTHEOJFFJAHGVXNLQAUZOLZXONSACTCZGGXOIYOMMGNFDNDJQVLQUUSTZAFPPSBVRQGUIZGAFQHHZYIMDKXTSKHNKXPIQHTPEBWUXAECUEIJETRLRGYGABBP");
    msg.custom.assign("CDFQHVZOIIKOPKCWXJIDNEYEAGVCQCBIOSVCZEWMYVDQJNQXUAJGSSFJTLEIFMERBLTPCMOBTMBTYXLWRGPFTHLMYHFQUVKFHAHOROUVLMFGQXETNGSXBIHDXMYKJOVELTJRPCUNIVWZUGJREGATQZM");

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
    msg.setTimeStamp(0.00513825302694);
    msg.setSource(3010U);
    msg.setSourceEntity(178U);
    msg.setDestination(36799U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.0566278668813;
    msg.lon = 0.517822894552;
    msg.z = 0.147393918202;
    msg.z_units = 18U;
    msg.speed = 0.73178265339;
    msg.speed_units = 164U;
    msg.start_time = 0.446451421691;
    msg.custom.assign("XNKHBCUSHXWVIVCTSLWOAHWXCOIKYRDLFGQABPINPOKWMLFDZZVHZPTOAQRLVZBEEFFPBYGZUATOCVTLZSOPMAXCIUSYOKAXDKDZBD");

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
    msg.setTimeStamp(0.0514527308321);
    msg.setSource(7107U);
    msg.setSourceEntity(32U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.956434765663;
    msg.lon = 0.977530417529;
    msg.z = 0.624058963617;
    msg.z_units = 112U;
    msg.speed = 0.378864492567;
    msg.speed_units = 4U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.451592741068;
    tmp_msg_0.y = 0.254446355441;
    tmp_msg_0.z = 0.0205748540546;
    tmp_msg_0.t = 0.288324879984;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 62026U;
    tmp_msg_1.off_x = 0.717661542217;
    tmp_msg_1.off_y = 0.584885147781;
    tmp_msg_1.off_z = 0.813984343537;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.790308896298;
    msg.custom.assign("ZVODIMEOQGUCZRFJHVRCXHNVBMYNYBWGBNCDXCQPBNKLYMUYEIZFJKFBFIPPBRSSMXHLWWYZJTUHDTEKVKHVOJOXJAEFQUOTNQNESKZPTDLTKKHLMBSYABNEVZAPEWGZ");

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
    msg.setTimeStamp(0.416865808085);
    msg.setSource(55469U);
    msg.setSourceEntity(40U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.298336372924;
    msg.lon = 0.738466947715;
    msg.z = 0.548343276798;
    msg.z_units = 157U;
    msg.speed = 0.826639654283;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.568131976137;
    tmp_msg_0.y = 0.30121258334;
    tmp_msg_0.z = 0.392597057707;
    tmp_msg_0.t = 0.041075987852;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.972069802974;
    msg.custom.assign("BAAETDREWYCHWXREFDGWPJGULLQALOBCZQYWLJDXEFUNXVBCOZCXPQNDUZUBVGNSPBYFVJPRGOYOPIHIWRISOZFPNCJPTGDUBQLNSSVKIPAYVHJWETLHQWYVONUCYTZSRRRTTIFJOMKWBSXXGZHKCULRWSEQTRHTQYNFAKVBBMZEHQMCMWJNNMDGCDXAIYDKOGFDKVA");

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
    msg.setTimeStamp(0.85350053255);
    msg.setSource(605U);
    msg.setSourceEntity(109U);
    msg.setDestination(4450U);
    msg.setDestinationEntity(195U);
    msg.vid = 1417U;
    msg.off_x = 0.328370344628;
    msg.off_y = 0.169836914323;
    msg.off_z = 0.416773404907;

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
    msg.setTimeStamp(0.74296938175);
    msg.setSource(48589U);
    msg.setSourceEntity(74U);
    msg.setDestination(3974U);
    msg.setDestinationEntity(183U);
    msg.vid = 25917U;
    msg.off_x = 0.134565830981;
    msg.off_y = 0.467173447204;
    msg.off_z = 0.187232084431;

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
    msg.setTimeStamp(0.0431674765372);
    msg.setSource(65318U);
    msg.setSourceEntity(99U);
    msg.setDestination(61418U);
    msg.setDestinationEntity(223U);
    msg.vid = 31566U;
    msg.off_x = 0.215409422856;
    msg.off_y = 0.357908797175;
    msg.off_z = 0.942971839642;

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
    msg.setTimeStamp(0.211767881097);
    msg.setSource(25667U);
    msg.setSourceEntity(34U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.680753298795);
    msg.setSource(38481U);
    msg.setSourceEntity(97U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.21383573538);
    msg.setSource(27624U);
    msg.setSourceEntity(184U);
    msg.setDestination(57747U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.660346706188);
    msg.setSource(9117U);
    msg.setSourceEntity(215U);
    msg.setDestination(19141U);
    msg.setDestinationEntity(9U);
    msg.mid = 36825U;

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
    msg.setTimeStamp(0.856129910399);
    msg.setSource(5769U);
    msg.setSourceEntity(233U);
    msg.setDestination(4300U);
    msg.setDestinationEntity(129U);
    msg.mid = 64534U;

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
    msg.setTimeStamp(0.323480442351);
    msg.setSource(139U);
    msg.setSourceEntity(152U);
    msg.setDestination(36411U);
    msg.setDestinationEntity(172U);
    msg.mid = 54735U;

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
    msg.setTimeStamp(0.683315158651);
    msg.setSource(44446U);
    msg.setSourceEntity(162U);
    msg.setDestination(31669U);
    msg.setDestinationEntity(207U);
    msg.state = 130U;
    msg.eta = 61993U;
    msg.info.assign("AURYQQRFNRLZVEYCDWPFEPPBDUVIILXAZSILXCMHBQFGCJVJKUCDYRRTNFUUEUMSPBCHDXCJOYKZVOHWDWPMIDOFLBVCFYHLBXINAQQGTDAJESTZWPSYTAXTYBQVEKQMUHBYRYROTARPXIIIDGANKBOKHGKBNPGPWZQWNMRUONTUOJEOKWHSMZFWKXMEVFZCAOGLKMSTXHCSWGGVCQJMTNQRZDLLJSGZEABHSILYVFEKVXO");

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
    msg.setTimeStamp(0.631244135728);
    msg.setSource(22646U);
    msg.setSourceEntity(2U);
    msg.setDestination(5356U);
    msg.setDestinationEntity(170U);
    msg.state = 124U;
    msg.eta = 15678U;
    msg.info.assign("RKYVCDGDCOYINQQQVUAHRGHTAVCMSKBUBYFHGPXULITOQSEONQVCMDBOT");

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
    msg.setTimeStamp(0.691742059488);
    msg.setSource(55640U);
    msg.setSourceEntity(11U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(162U);
    msg.state = 118U;
    msg.eta = 29163U;
    msg.info.assign("XTIIHVRHERIOXJWKMCWXOKRDDJSRZYJZODKGFPABDUATMWWNPHQGETVZJWMDTBFDLXXQEFBHMOQFEFYEMVSJLROMKTAPEFFPCPYQBLWISUWLLZLPDWVEAKUSSVZUCMYVAJHOYJN");

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
    msg.setTimeStamp(0.96447060742);
    msg.setSource(23690U);
    msg.setSourceEntity(78U);
    msg.setDestination(47882U);
    msg.setDestinationEntity(14U);
    msg.system = 17892U;
    msg.duration = 58921U;
    msg.speed = 0.720113925998;
    msg.speed_units = 163U;
    msg.x = 0.176583300053;
    msg.y = 0.798582055786;
    msg.z = 0.675518659584;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.186838966521);
    msg.setSource(50128U);
    msg.setSourceEntity(104U);
    msg.setDestination(7324U);
    msg.setDestinationEntity(11U);
    msg.system = 13581U;
    msg.duration = 3083U;
    msg.speed = 0.168403073356;
    msg.speed_units = 32U;
    msg.x = 0.394988594668;
    msg.y = 0.957923393987;
    msg.z = 0.262914694617;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.918413488552);
    msg.setSource(61938U);
    msg.setSourceEntity(8U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(234U);
    msg.system = 48715U;
    msg.duration = 41677U;
    msg.speed = 0.757918024805;
    msg.speed_units = 86U;
    msg.x = 0.927033275896;
    msg.y = 0.78382949684;
    msg.z = 0.965841133045;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.14360303084);
    msg.setSource(50667U);
    msg.setSourceEntity(102U);
    msg.setDestination(4690U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.4722200945;
    msg.lon = 0.144029552953;
    msg.speed = 0.354856215994;
    msg.speed_units = 168U;
    msg.duration = 19808U;
    msg.sys_a = 64239U;
    msg.sys_b = 58665U;
    msg.move_threshold = 0.941842758374;

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
    msg.setTimeStamp(0.91526792161);
    msg.setSource(52234U);
    msg.setSourceEntity(196U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.715528333532;
    msg.lon = 0.840595578099;
    msg.speed = 0.525691991867;
    msg.speed_units = 42U;
    msg.duration = 6978U;
    msg.sys_a = 8947U;
    msg.sys_b = 21950U;
    msg.move_threshold = 0.16765038681;

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
    msg.setTimeStamp(0.439060874734);
    msg.setSource(39556U);
    msg.setSourceEntity(32U);
    msg.setDestination(2355U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.0676770083028;
    msg.lon = 0.0566674173948;
    msg.speed = 0.0989633123943;
    msg.speed_units = 175U;
    msg.duration = 50204U;
    msg.sys_a = 25667U;
    msg.sys_b = 35200U;
    msg.move_threshold = 0.51208405405;

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
    msg.setTimeStamp(0.406080375629);
    msg.setSource(61447U);
    msg.setSourceEntity(83U);
    msg.setDestination(48511U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.837246530446;
    msg.lon = 0.312569892944;
    msg.z = 0.906607777681;
    msg.z_units = 52U;
    msg.speed = 0.718145093236;
    msg.speed_units = 9U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.171872984696;
    tmp_msg_0.lon = 0.225620312542;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BYBNEEEWAVHJTOTRQLFAMLPH");

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
    msg.setTimeStamp(0.79407989947);
    msg.setSource(22726U);
    msg.setSourceEntity(175U);
    msg.setDestination(26952U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.219420489946;
    msg.lon = 0.213734504666;
    msg.z = 0.563467638203;
    msg.z_units = 246U;
    msg.speed = 0.557066016243;
    msg.speed_units = 154U;
    msg.custom.assign("QDXFPDKZSXIQESPKVJBYSFYGBVUBFLJYVLPXQNRVCKUTDIGFGWWHWNXPPGRAXONULRYAFCWSMTQDELCPMOWEVYOZEHSKFTEPHBJAXHCXNZZIRIXUPAIPLKSTHDBRELLHWBQEJAADMOUUZGUQOFAAVBUKTDDHTBWNDRTMKAFKZNATFCFWMTMJRCXKDPYEOHHYMOSVVLCNOQMILLEZJYXYG");

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
    msg.setTimeStamp(0.695801118574);
    msg.setSource(30440U);
    msg.setSourceEntity(214U);
    msg.setDestination(1934U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.382982146928;
    msg.lon = 0.13277917274;
    msg.z = 0.0184087370368;
    msg.z_units = 223U;
    msg.speed = 0.915216323349;
    msg.speed_units = 56U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.218331694278;
    tmp_msg_0.lon = 0.83742133569;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BWTOIJKGIUJTBQBVPVCZDAUFFLLSQUZPMOWFCHREAPRONTPIEZYPTKGZIUFBBJKCXBQYXMINSESVTOBEYLQIHQZMQFXGEEVUVPXGIFTNVQBMJEKODAHHYVASJFFXGYQXVJCRGDSKYEMWYWAHSZNWBONHZMTXZNKOHUQJBPATEMSOKUNMYHPSNERAUXJNFCDRYLLCLJGOPGSXWAAGDVGWXIDURUKTTCLMPSWCKLI");

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
    msg.setTimeStamp(0.151609069762);
    msg.setSource(21072U);
    msg.setSourceEntity(23U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.388746188823;
    msg.lon = 0.268273541484;

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
    msg.setTimeStamp(0.621070504523);
    msg.setSource(14117U);
    msg.setSourceEntity(204U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.649788772168;
    msg.lon = 0.497481462029;

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
    msg.setTimeStamp(0.265724642069);
    msg.setSource(13520U);
    msg.setSourceEntity(30U);
    msg.setDestination(18135U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.297765294414;
    msg.lon = 0.721233685159;

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
    msg.setTimeStamp(0.18579083064);
    msg.setSource(61028U);
    msg.setSourceEntity(227U);
    msg.setDestination(47976U);
    msg.setDestinationEntity(211U);
    msg.timeout = 65458U;
    msg.lat = 0.968560187955;
    msg.lon = 0.497526689957;
    msg.z = 0.184643388075;
    msg.z_units = 212U;
    msg.pitch = 0.588288068684;
    msg.amplitude = 0.0558942698316;
    msg.duration = 65206U;
    msg.speed = 0.0188140593412;
    msg.speed_units = 101U;
    msg.radius = 0.371084417822;
    msg.direction = 88U;
    msg.custom.assign("QJUJDWXWBBBCQOAPYCHIBIJUUHSZXRNPSDLEVMYTLPPOIDTICQXXKPNUTZKSLKEDC");

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
    msg.setTimeStamp(0.812410319343);
    msg.setSource(49027U);
    msg.setSourceEntity(205U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(172U);
    msg.timeout = 5976U;
    msg.lat = 0.0100720717149;
    msg.lon = 0.197502325661;
    msg.z = 0.0298924352519;
    msg.z_units = 25U;
    msg.pitch = 0.68873851569;
    msg.amplitude = 0.982784496237;
    msg.duration = 18551U;
    msg.speed = 0.641841320568;
    msg.speed_units = 60U;
    msg.radius = 0.577882356783;
    msg.direction = 96U;
    msg.custom.assign("JNVMPZMXHNDJKELZVQUHHUTLGFXGCFYRPZWSPFOWKSWBUEQZRADMDEVDAIULNUKNSMIRVYSLEJPPPVABMDHXNAGNXGRTW");

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
    msg.setTimeStamp(0.912034061215);
    msg.setSource(22325U);
    msg.setSourceEntity(26U);
    msg.setDestination(35914U);
    msg.setDestinationEntity(39U);
    msg.timeout = 41509U;
    msg.lat = 0.858000826128;
    msg.lon = 0.437227317757;
    msg.z = 0.941760158191;
    msg.z_units = 85U;
    msg.pitch = 0.504518456819;
    msg.amplitude = 0.970915531251;
    msg.duration = 42737U;
    msg.speed = 0.658875981925;
    msg.speed_units = 226U;
    msg.radius = 0.282790649155;
    msg.direction = 47U;
    msg.custom.assign("KLGUOBMKMFVYEFQDXZSTRGCAUTPSCNWOPQUGPEGZLCSBGKBWLTOMHBOSRAGYOSQWUJYVANVBXDPYZDVHHCIELASEKMDUHJOR");

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
    msg.setTimeStamp(0.73366780415);
    msg.setSource(61741U);
    msg.setSourceEntity(134U);
    msg.setDestination(6048U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("ZRODCACHGUINPGTKEDXYHKOKOSOGEVQGRUAEADCXYEQMAMJQFQKLQBOBZYXXHNJBRDMTSKEKADHGIELOJYXUIZKDLMARTIBSGJHUCXPQFKFYJATIKUHCUPDBMBUZYZTYDZXNKPVSWYIWXGLNFCBFGSWZXJVSNDTBGEDRLSPOCHVPMVNAWFEVMICLYFPPUSUOMYTBPIJRVUFWSRQERJGOILBQNOJRAQTFCMZWWSLVHLTEZCIMFWHQVNR");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14169U;
    tmp_msg_0.off_x = 0.955214034277;
    tmp_msg_0.off_y = 0.443015002536;
    tmp_msg_0.off_z = 0.220121477885;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AVWHSSYRPFUYEQVINPYRPZTLCRGZRLXCXSBCOIAXYKCHWGRVZMPQQKAZTPRIYAUMVZNFJXDUMGEOL");

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
    msg.setTimeStamp(0.217049061294);
    msg.setSource(61686U);
    msg.setSourceEntity(198U);
    msg.setDestination(20093U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("HFALIOWEIPXXKRRWLWBTLUDGIGQECIGCLDBGOZSXJKTPCXFZSSLMNGQWVPNJBXWFKRBCPOERCSLZJKBVCALPISTSIMYRDUVTXQVEBOGSBKPJHOHEXTKZGOEVBMYZMVORUATZHAPYAQDTNYAAMCZIGZULUREFBEOHVMOYDQFNULLWYKQWNYAHFQWIZJVGKCQETIPUWJABADSQDVFFKUCXPYNSMWYXMRSRDH");
    msg.reference_frame = 181U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36521U;
    tmp_msg_0.off_x = 0.234050288173;
    tmp_msg_0.off_y = 0.861011062196;
    tmp_msg_0.off_z = 0.394475596996;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TMDSOUVDBGYMVVTVGBOTTRYQGSAQHBILBCPVHZPVWTPEGLKYHOEXWUHHNLHIZKDSKRJZKXLDYDYUOIZQZRUAPSAZFKZWZSACGHKCKDMRQIRWPYGQXEYLNBMLEOFBJCGNDMUEPSKOOPCVEVZIQUTCVEEEFPSXAIFROQJQVWPUZUHYIUJFXOFLTXWHFBGWIXRDSTNMFYRMANBRWINBQJPSXLLGDFXASMTWGFMMAKNBYJAKJWJJNAEDJNCT");

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
    msg.setTimeStamp(0.429377937937);
    msg.setSource(6120U);
    msg.setSourceEntity(155U);
    msg.setDestination(64716U);
    msg.setDestinationEntity(94U);
    msg.formation_name.assign("WWHQKUCMSBIPEBADRESGHJIJVVKCNZLGJRNOIRMSFZHOMCVGNPCIZSRLLYRFUGUUZEQQHFNTPJETSECBDCNPFTWZC");
    msg.reference_frame = 89U;
    msg.custom.assign("TRFPNOVFDAMQRNLIESVHRVDEXZEBJNCQDDHJSUEEZDNIXIOUWYUIODCTZEKEOWJYVSAPZYMHFCMOXOTQTKURDQZTIHDNSLNWRWZYXABHGUUAPAPGWRTFUTKMTBNCBOYOGQRSHFSLUACMKBZZBAAIQFLXIYBVJXXPJKMZBQRNIDWPUYHNIHMHKYTEKFJTLRMKEFFMNQLZHLARLIQLWXYSPSG");

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
    msg.setTimeStamp(0.622289683679);
    msg.setSource(22659U);
    msg.setSourceEntity(45U);
    msg.setDestination(31406U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("SLLYNFEPWRIPMVWTGQCABDXHTNPFOUPKSKKLWZWVRHNYXARKZMBUAVSSFLEBWYSXTVDDOCAAHMFTBQUCPQAZXEIDWHRVTZBXIDZOLGWFNLINOSDOYKBCLSTHLCRGPYQBHKJMUYJKMMBUMITFOLWJDPTXUOVVCYPRIS");
    msg.formation_name.assign("NEQWXTRUGNJQETHILCGULDFKUMGJSVWVWIVJDPWFIUXMFIAJAQVXNWKLWGFMNNRHHFCODKROQGYPQUQBXGDQRHSAOFSMKBZYSNNACCIDGNMITZPPOSYQWNXUTJYBBWPHCKLAJWAXGEPPQLBJGRVVWOZGCUZEBYAYAXHEOVJKZRNVCUC");
    msg.plan_id.assign("VYGBOQQDGYBKOFCCJPCJAADXRMXGDEGHJTLDTMGRMSVNJOQNQNAXSJTGVJFXOLSSRIYOQSWZWQKRTTWKCENUFVMPUPEYMYINMUGJYHYODCPMWPBNNPCSQWFAUPCYRZNHBZYIRMZUCWLHBQCLIPURVLSZHXEYKZXWZIKKEOLNUXEBAOKVODUDBFIIBLPJVDOEIKGHFBZAIBTQXAUUWVPHE");
    msg.description.assign("XTUNZYCXVG");
    msg.leader_speed = 0.907773768822;
    msg.leader_bank_lim = 0.44185796685;
    msg.pos_sim_err_lim = 0.739753014692;
    msg.pos_sim_err_wrn = 0.15018920704;
    msg.pos_sim_err_timeout = 61505U;
    msg.converg_max = 0.329409443703;
    msg.converg_timeout = 495U;
    msg.comms_timeout = 65035U;
    msg.turb_lim = 0.296552309126;
    msg.custom.assign("PQXIHLRAUCLQJYLTUJABXSDWOJMABAUDLDIYWOGOTSQNUG");

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
    msg.setTimeStamp(0.238147355976);
    msg.setSource(17083U);
    msg.setSourceEntity(211U);
    msg.setDestination(16391U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("KTJTQPOJGITPWYBPXDVZ");
    msg.formation_name.assign("RDLEBKGDMWUIVPOCRGICSUFUCGLFXYACVNVCJNIJSYJPIBAMHKYXNFFDEJWB");
    msg.plan_id.assign("QUEHVFORQHSIFGAWCFHQIARATSYORETJEQGVHMSZYRJIEHXLXBCRIKNGENATOCICGONUDYCRTSZBOJEOBNDWJMPBWXQNJXCSXWXZZAPRTLDMPXCAJQGQKZJLVMGKEYCDKNDZLKKAMZMUJOTJGSWMINCLLHSRHBPCXZJFWSDVPUBKVUEPRPDTNGLTRQFGYQWVKVLUFAYSUZPULFBBWQVEGNIMIXYTBPZHHFIVADMFAUMOLVWHXDEKTOSN");
    msg.description.assign("EXVYMDVXREIGYGWMBFFUDHTGUFCQLYDZHZPTLCHMKHSAKQKCLCSODPRDORXNRBSYOPIEHNDQBRIUPBRZINKJZTQZGWTEGPUPGENWXNKJSRJVZWOEFP");
    msg.leader_speed = 0.505778211502;
    msg.leader_bank_lim = 0.0993124681803;
    msg.pos_sim_err_lim = 0.348534192882;
    msg.pos_sim_err_wrn = 0.521074312575;
    msg.pos_sim_err_timeout = 54310U;
    msg.converg_max = 0.500593223972;
    msg.converg_timeout = 44167U;
    msg.comms_timeout = 46675U;
    msg.turb_lim = 0.466810155716;
    msg.custom.assign("QXCVQLKEHBNIGXBGSPWBJBYFNKUAMTZZSSGTLWWYYFDASMIKNQBCPMACJRFTBRMKVKQHDPKHIEYWTUXMHNDWRZCTECJRPQAEHYRCOJEEGHHMJDKWRPJBFJCFMNZUXNILALNARZJTADLVKNEUIQZPGPVQBOUMXYYUSAQPVHRJZCNHUVSLVFECOVCEODQTXJRXFFSYGSOBOOLIWVLVDTWDFUTGIQGGZL");

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
    msg.setTimeStamp(0.459521186416);
    msg.setSource(51714U);
    msg.setSourceEntity(96U);
    msg.setDestination(60145U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("FRLCBLGFRIKDIZMOKFTSKSUUKJAMYGPNKZSTCXWSWVDKLULJWUNLCDANOUGQIXQHWWXHBFYPPNFOWMVIMWQZJBZLMBUABGLDTOEJGHEGPQYXUT");
    msg.formation_name.assign("GTHRNHZGCHFJMNLAKZJZREDFECRYYNWEBCNFFSQCMQAAQJLIZTHRVQXLVAAPALGSNCQLTOVMTCFBIVRGUSGHNFYQXPNMOIYUJXPXKHGVPVDOFDQYPFWPCDUWXQPVRKYMCSZMTUBZZTLWNKQIBKLSXBKHOOHFKMSSEHVIRJYBDDUTBIDOHCEQBOTGLPUEFZJXZXDVAXKPKUIIUGWJRA");
    msg.plan_id.assign("UHOLJTSSVXYOBGTDJHKSAWNODJMLRECUASEBHNZXBYZXGSHIFBYNT");
    msg.description.assign("FTHVKSLXYKOPUDFIWPKYRYOYEGLDWIKCLAMUJCNPGFRTOVTTPRMZCSOTYBUUXGBIGHHEZAHONOQBSQZKJJZDCKGUCFTMREDLIKOULBZAEYNTRYNDCZJVMAEQDEAHHXRWJZEVWVJYRXCBMUBUNWUQLFJWQRHQVZKZBVSYFVXOSQWPMYTKCNXNJFMLGMEHXINCBDPGLGTSWNRIDQCLPPJIOSUDRXFMZJQINBEVILPSSKADBWHVAOEAGSFFX");
    msg.leader_speed = 0.529495142702;
    msg.leader_bank_lim = 0.173141449561;
    msg.pos_sim_err_lim = 0.953379963295;
    msg.pos_sim_err_wrn = 0.81315215863;
    msg.pos_sim_err_timeout = 13541U;
    msg.converg_max = 0.841703537942;
    msg.converg_timeout = 39058U;
    msg.comms_timeout = 57048U;
    msg.turb_lim = 0.135242117873;
    msg.custom.assign("QBUZNZHJGLFLOSSSTFVIVQWE");

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
    msg.setTimeStamp(0.881262227583);
    msg.setSource(48391U);
    msg.setSourceEntity(52U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(161U);
    msg.control_src = 60586U;
    msg.control_ent = 3U;
    msg.timeout = 0.368483729836;
    msg.loiter_radius = 0.0247612166501;
    msg.altitude_interval = 0.806198328671;

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
    msg.setTimeStamp(0.646701912926);
    msg.setSource(4271U);
    msg.setSourceEntity(60U);
    msg.setDestination(3816U);
    msg.setDestinationEntity(178U);
    msg.control_src = 64390U;
    msg.control_ent = 30U;
    msg.timeout = 0.0858511690814;
    msg.loiter_radius = 0.523303454403;
    msg.altitude_interval = 0.408022741917;

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
    msg.setTimeStamp(0.122562478942);
    msg.setSource(34858U);
    msg.setSourceEntity(212U);
    msg.setDestination(63596U);
    msg.setDestinationEntity(148U);
    msg.control_src = 14855U;
    msg.control_ent = 121U;
    msg.timeout = 0.899552017188;
    msg.loiter_radius = 0.573334180994;
    msg.altitude_interval = 0.415629869185;

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
    msg.setTimeStamp(0.465729162098);
    msg.setSource(23864U);
    msg.setSourceEntity(78U);
    msg.setDestination(17030U);
    msg.setDestinationEntity(245U);
    msg.flags = 144U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.823765749462;
    tmp_msg_0.speed_units = 232U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.475715383311;
    tmp_msg_1.z_units = 0U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.920871187932;
    msg.lon = 0.172939407849;
    msg.radius = 0.849319793024;

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
    msg.setTimeStamp(0.887823357942);
    msg.setSource(30019U);
    msg.setSourceEntity(52U);
    msg.setDestination(7664U);
    msg.setDestinationEntity(37U);
    msg.flags = 138U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.480314038901;
    tmp_msg_0.speed_units = 145U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0794765839042;
    tmp_msg_1.z_units = 0U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.00529553866282;
    msg.lon = 0.0847218484924;
    msg.radius = 0.510864594005;

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
    msg.setTimeStamp(0.443105035577);
    msg.setSource(11932U);
    msg.setSourceEntity(102U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(54U);
    msg.flags = 227U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.667336340465;
    tmp_msg_0.speed_units = 226U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.299041111279;
    tmp_msg_1.z_units = 135U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.937820720978;
    msg.lon = 0.546783794647;
    msg.radius = 0.101455986851;

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
    msg.setTimeStamp(0.221609836359);
    msg.setSource(61167U);
    msg.setSourceEntity(151U);
    msg.setDestination(56654U);
    msg.setDestinationEntity(72U);
    msg.control_src = 51232U;
    msg.control_ent = 252U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 159U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.380235357162;
    tmp_tmp_msg_0_0.speed_units = 110U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.933524524001;
    tmp_tmp_msg_0_1.z_units = 15U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.875147296662;
    tmp_msg_0.lon = 0.0504513689908;
    tmp_msg_0.radius = 0.0773501146078;
    msg.reference.set(tmp_msg_0);
    msg.state = 186U;
    msg.proximity = 86U;

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
    msg.setTimeStamp(0.348613405108);
    msg.setSource(26181U);
    msg.setSourceEntity(147U);
    msg.setDestination(15446U);
    msg.setDestinationEntity(189U);
    msg.control_src = 2835U;
    msg.control_ent = 116U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 20U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.344025319913;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.329345945877;
    tmp_tmp_msg_0_1.z_units = 103U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.434397821315;
    tmp_msg_0.lon = 0.526781175811;
    tmp_msg_0.radius = 0.345338402758;
    msg.reference.set(tmp_msg_0);
    msg.state = 52U;
    msg.proximity = 121U;

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
    msg.setTimeStamp(0.0103000373342);
    msg.setSource(37585U);
    msg.setSourceEntity(35U);
    msg.setDestination(8224U);
    msg.setDestinationEntity(75U);
    msg.control_src = 9564U;
    msg.control_ent = 162U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 29U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.738511263048;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.898332659144;
    tmp_tmp_msg_0_1.z_units = 199U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.468679020966;
    tmp_msg_0.lon = 0.157225335217;
    tmp_msg_0.radius = 0.308304431694;
    msg.reference.set(tmp_msg_0);
    msg.state = 207U;
    msg.proximity = 168U;

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
    msg.setTimeStamp(0.58854055519);
    msg.setSource(61414U);
    msg.setSourceEntity(91U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(234U);
    msg.ax_cmd = 0.405131434446;
    msg.ay_cmd = 0.0322620732521;
    msg.az_cmd = 0.424000114469;
    msg.ax_des = 0.776070215061;
    msg.ay_des = 0.0930470529726;
    msg.az_des = 0.699630240037;
    msg.virt_err_x = 0.898448461422;
    msg.virt_err_y = 0.709533061452;
    msg.virt_err_z = 0.062569006629;
    msg.surf_fdbk_x = 0.893735143818;
    msg.surf_fdbk_y = 0.661017089554;
    msg.surf_fdbk_z = 0.662688094001;
    msg.surf_unkn_x = 0.795498367378;
    msg.surf_unkn_y = 0.193612848172;
    msg.surf_unkn_z = 0.537934122904;
    msg.ss_x = 0.438936754859;
    msg.ss_y = 0.658241468011;
    msg.ss_z = 0.978335967855;

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
    msg.setTimeStamp(0.421392520441);
    msg.setSource(45976U);
    msg.setSourceEntity(93U);
    msg.setDestination(46060U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.772123492236;
    msg.ay_cmd = 0.816769860463;
    msg.az_cmd = 0.297608766607;
    msg.ax_des = 0.79653280921;
    msg.ay_des = 0.799315306604;
    msg.az_des = 0.567737516414;
    msg.virt_err_x = 0.177739234578;
    msg.virt_err_y = 0.610320779249;
    msg.virt_err_z = 0.269020147322;
    msg.surf_fdbk_x = 0.143575875886;
    msg.surf_fdbk_y = 0.157423028827;
    msg.surf_fdbk_z = 0.515529243884;
    msg.surf_unkn_x = 0.709363588784;
    msg.surf_unkn_y = 0.828211777727;
    msg.surf_unkn_z = 0.853277722205;
    msg.ss_x = 0.20098465842;
    msg.ss_y = 0.150689146641;
    msg.ss_z = 0.493091721832;

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
    msg.setTimeStamp(0.724771262529);
    msg.setSource(35324U);
    msg.setSourceEntity(102U);
    msg.setDestination(49658U);
    msg.setDestinationEntity(209U);
    msg.ax_cmd = 0.837677604442;
    msg.ay_cmd = 0.980864914032;
    msg.az_cmd = 0.373724684525;
    msg.ax_des = 0.706352194594;
    msg.ay_des = 0.313695009953;
    msg.az_des = 0.961356583984;
    msg.virt_err_x = 0.882602757968;
    msg.virt_err_y = 0.536132469964;
    msg.virt_err_z = 0.673236611665;
    msg.surf_fdbk_x = 0.934902922806;
    msg.surf_fdbk_y = 0.483034819621;
    msg.surf_fdbk_z = 0.22503434448;
    msg.surf_unkn_x = 0.663933567619;
    msg.surf_unkn_y = 0.551382449669;
    msg.surf_unkn_z = 0.666974689373;
    msg.ss_x = 0.301981526136;
    msg.ss_y = 0.935655379568;
    msg.ss_z = 0.617272749558;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FDEQKXLNGUXEWSANISKQXTVZSZPIMAMTNMNOCHKAODFESJOOJGURIPIKGPXXPDAHSLOHUJHDOTUYWSZVE");
    tmp_msg_0.dist = 0.0840117411151;
    tmp_msg_0.err = 0.596220811762;
    tmp_msg_0.ctrl_imp = 0.033990769934;
    tmp_msg_0.rel_dir_x = 0.117166766883;
    tmp_msg_0.rel_dir_y = 0.601769685064;
    tmp_msg_0.rel_dir_z = 0.803043765264;
    tmp_msg_0.err_x = 0.809413442715;
    tmp_msg_0.err_y = 0.146012006098;
    tmp_msg_0.err_z = 0.585436031781;
    tmp_msg_0.rf_err_x = 0.162336529814;
    tmp_msg_0.rf_err_y = 0.427469837594;
    tmp_msg_0.rf_err_z = 0.476541084397;
    tmp_msg_0.rf_err_vx = 0.377432894837;
    tmp_msg_0.rf_err_vy = 0.364612694872;
    tmp_msg_0.rf_err_vz = 0.837829005467;
    tmp_msg_0.ss_x = 0.594834391635;
    tmp_msg_0.ss_y = 0.110384195471;
    tmp_msg_0.ss_z = 0.108227201594;
    tmp_msg_0.virt_err_x = 0.0166978399512;
    tmp_msg_0.virt_err_y = 0.334464578227;
    tmp_msg_0.virt_err_z = 0.471851893614;
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
    msg.setTimeStamp(0.41629972856);
    msg.setSource(41777U);
    msg.setSourceEntity(116U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(134U);
    msg.s_id.assign("WBVSDUGIWESUJPNIMGGRBDQKMFUJWETPIZCWRRKJJKSPLHPVXLATMTSWIPBLKUIZWAHWURFKKSLTHBXQQIZSSCJNAMNGPOVFOOFYHFZIDYRLNQVYYVCFVJXJABDMNCDXFOBAYUUUVRFUDCKGTETPTAHYZDZGQEHXNRGBZLUOKIVMWWRDZGRTQJASDGQCELKNMLHEICPXBIEYMSTPQQLBOGYDVTJVYEOCJXHXANEEHWYBO");
    msg.dist = 0.984498894544;
    msg.err = 0.47056275393;
    msg.ctrl_imp = 0.785429365093;
    msg.rel_dir_x = 0.880239649075;
    msg.rel_dir_y = 0.573959593465;
    msg.rel_dir_z = 0.227088955399;
    msg.err_x = 0.38098903453;
    msg.err_y = 0.505231400762;
    msg.err_z = 0.0514485051401;
    msg.rf_err_x = 0.0379594373907;
    msg.rf_err_y = 0.785245030983;
    msg.rf_err_z = 0.173148723785;
    msg.rf_err_vx = 0.872727939793;
    msg.rf_err_vy = 0.544258577386;
    msg.rf_err_vz = 0.587508930486;
    msg.ss_x = 0.272315185563;
    msg.ss_y = 0.683834855933;
    msg.ss_z = 0.197990104281;
    msg.virt_err_x = 0.739783201928;
    msg.virt_err_y = 0.882236638401;
    msg.virt_err_z = 0.280036651332;

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
    msg.setTimeStamp(0.421750098839);
    msg.setSource(7942U);
    msg.setSourceEntity(46U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(26U);
    msg.s_id.assign("KGNNGQEDLXCUQASTJSQSLHZCGFIEZBDRXTLVRWPKLZUKZHKFMDVHCFMOHQYNBJVAOZJZA");
    msg.dist = 0.313264885569;
    msg.err = 0.499697550054;
    msg.ctrl_imp = 0.361124615326;
    msg.rel_dir_x = 0.656990207677;
    msg.rel_dir_y = 0.934603375823;
    msg.rel_dir_z = 0.731598516724;
    msg.err_x = 0.516096262367;
    msg.err_y = 0.450102293025;
    msg.err_z = 0.357079054655;
    msg.rf_err_x = 0.719299856705;
    msg.rf_err_y = 0.339574597902;
    msg.rf_err_z = 0.659318067102;
    msg.rf_err_vx = 0.0914089224499;
    msg.rf_err_vy = 0.0917756830227;
    msg.rf_err_vz = 0.0578844668462;
    msg.ss_x = 0.958255286836;
    msg.ss_y = 0.738778629107;
    msg.ss_z = 0.0157786837821;
    msg.virt_err_x = 0.479524090365;
    msg.virt_err_y = 0.512316883048;
    msg.virt_err_z = 0.561537404212;

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
    msg.setTimeStamp(0.724350263674);
    msg.setSource(27273U);
    msg.setSourceEntity(173U);
    msg.setDestination(32762U);
    msg.setDestinationEntity(0U);
    msg.s_id.assign("IDMWBHMMTAXHICEQJGAKIIGXVBESNIOCEXZQUKTAAAWYNDWHUGLSEGLLJBYOXMSNOGSBMKTCZFTVGYSUUTHNONXZSULNHFCJQXELBEZTQPCYGOQHZNZXVHFAFVRLRGTUWWQDCNDRSEVKVRCJDZJYQZFVAAWYPLPJCDSTUTTCRWOFBIICVLKQKDEQJLERHDJUIBOWGOYDUPEGJFOXFMRYDNFJMANPMLPYQFPPRPKUIXHVVIBXOSMHMBW");
    msg.dist = 0.924703788807;
    msg.err = 0.366386529765;
    msg.ctrl_imp = 0.7557980248;
    msg.rel_dir_x = 0.755240637073;
    msg.rel_dir_y = 0.163186765547;
    msg.rel_dir_z = 0.294177283647;
    msg.err_x = 0.0154351629908;
    msg.err_y = 0.995690387102;
    msg.err_z = 0.572865868609;
    msg.rf_err_x = 0.308281363379;
    msg.rf_err_y = 0.678034271906;
    msg.rf_err_z = 0.407809447098;
    msg.rf_err_vx = 0.483628766075;
    msg.rf_err_vy = 0.159946213236;
    msg.rf_err_vz = 0.518657587656;
    msg.ss_x = 0.0965195312159;
    msg.ss_y = 0.286688184337;
    msg.ss_z = 0.890533313252;
    msg.virt_err_x = 0.133192993838;
    msg.virt_err_y = 0.246451384138;
    msg.virt_err_z = 0.276450724426;

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
    msg.setTimeStamp(0.477918256891);
    msg.setSource(38030U);
    msg.setSourceEntity(86U);
    msg.setDestination(36925U);
    msg.setDestinationEntity(94U);
    msg.timeout = 1308U;
    msg.rpm = 0.722114106164;
    msg.direction = 81U;
    msg.custom.assign("ZKPBRBLSMWXJGNUPKFECNMXIIUYQEAICDNWGSNUOLVYRWCJTYDRMTHMFALCGYNWKCXOSY");

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
    msg.setTimeStamp(0.299378388604);
    msg.setSource(50114U);
    msg.setSourceEntity(155U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(196U);
    msg.timeout = 37397U;
    msg.rpm = 0.740021061691;
    msg.direction = 24U;
    msg.custom.assign("BYNPHVIOZGIRZWMFAFHVNAQVKJKUSJKNICBXFFYZQHXCOLPUBUNUVQXXELQBJNCMEATSBPCAALHUXHDLHRTGZQWVERBDKSDKHDKZDYFHULMZYPRDCRJZFPWEFITLSENBVYGMCBIOTK");

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
    msg.setTimeStamp(0.54453578868);
    msg.setSource(7887U);
    msg.setSourceEntity(207U);
    msg.setDestination(53897U);
    msg.setDestinationEntity(239U);
    msg.timeout = 52377U;
    msg.rpm = 0.211745672293;
    msg.direction = 59U;
    msg.custom.assign("LEUSLAHNBYHDVMIOQKXWDMXZDUGIXHYYUVAOBSUUFHGCXQRWYVTOXZJQZWEIPQKITTKNZTTFTRZLUMRQMIPGDIDNFVLLNMHBDJJVGDPSSPDEMEEQXYPNRONRRICBYKXWYAPAHGLSXMJBCJB");

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
    msg.setTimeStamp(0.775253901811);
    msg.setSource(49009U);
    msg.setSourceEntity(218U);
    msg.setDestination(19145U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("IWLVEXBXMHMUVEYJIMGJQBKYAHVPCENYJDKLJTEHACTQRJZEALVFIYSXBRPPLAAZRGXKZMGBTXFACOBTNAMDCDUFVFKICDHBIFWRTZVTBNQUZZAOGHFIGUBVDQCXSXGICHCRKMOPGTRYBAZEUZAXSOSMLTKISSEWJKRUNUPPCHIOZWDOFDYSKNFJYXEMDWCSPJHLOFUNWVOSLMQNUNU");
    msg.type = 153U;
    msg.op = 43U;
    msg.group_name.assign("GFSUWBYXCWJTUQGTYJNCMDJGROJQMCSYYLPZMOMFPWGANVAACFO");
    msg.plan_id.assign("RUTAEXYPMIHXWBRZINOOGGVLRTLFAGEXCORCQQZDDIQKUXRCTHOWQAMCCUNEJDHMFGJEKUSCKOIUVGLNCZVNZLIMXLSARGLFSJVKHXGVWNOYISZYMFJGSGLPBNFIBBEJMZNJJCVCWUHEYRTSEYKWWKSXWVIKNRFHPAJXPPOPTJKCAHVBDMGXHFVTEUYDQUPQMTYKSRZHYFRLTNUHQBAQABZQTKEMDPPBAWUO");
    msg.description.assign("CNLJFTRZAORMGPSNXEN");
    msg.reference_frame = 155U;
    msg.leader_bank_lim = 0.861095733188;
    msg.leader_speed_min = 0.628794472434;
    msg.leader_speed_max = 0.847868789704;
    msg.leader_alt_min = 0.304107332048;
    msg.leader_alt_max = 0.282288432931;
    msg.pos_sim_err_lim = 0.385211908547;
    msg.pos_sim_err_wrn = 0.146418258453;
    msg.pos_sim_err_timeout = 63922U;
    msg.converg_max = 0.314709998185;
    msg.converg_timeout = 54035U;
    msg.comms_timeout = 20404U;
    msg.turb_lim = 0.804342185456;
    msg.custom.assign("HRPHADKGIFFBOSWZQQFOKTJCVQXLZXVRPRZBVUSTLNJDPKCYGABBIPEFIOJILNYMAFWAMESRFFKAQMRKXBKNGGERAEWGSNNIHBWLPZMCYUJFSM");

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
    msg.setTimeStamp(0.20799120393);
    msg.setSource(1900U);
    msg.setSourceEntity(150U);
    msg.setDestination(44929U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("COLNGOKDMTGAHTPGZZMUQMEOLZOLVTFBKEWXSXNIURLCSZVNYHJGSFBVIDWVJGCBTYQTZDDFUGAXZNFPMXKAFULVSUBCYDPFWIOPHXQQYMKUILSRCTQQAJEBFWPZASIEBPMHKSEJFHRZNHGKFOKWLCMQEEXFYBTEALVHZWIPYRTNDORUKDNSXTLCGYJBBJYKSQJGDSIVJOUMRVHWCWHBEQAWCXUIUKOHRQVXNTAYDAIN");
    msg.type = 215U;
    msg.op = 168U;
    msg.group_name.assign("CNDGPEGSTLWSGQQNAJWHVWCFBCRAJRUXHTNZAZCZGCHEWSTIDCDBHMXRIIEXBYGKUVXFQDEVJIANMZOUSIMRQMOVCSSLQIEZBAGWZIJTPOVYSDXGJVWCXWSALDNWLVDJNHKPIJOOEZJUDBHNKQFODZAAMYXMVZFYHUUQYLTQMBZOKKPERFLBTPUKRTIBMEOPTFLHIYGNGSCOBOYULPMNU");
    msg.plan_id.assign("FKUAJVUVIZKDDAXYVLSLZZRIMHLSLQJTKLZXASMOFXJNUHYXGMJJVSERCEOMCPIHBVSQISDDRNABYPCFUZKOBVLQBMXAITKJSWRKOOTHSWWUYWXKQEKFYGXFFL");
    msg.description.assign("UTOTEGLIOTHMJEQSQJSUJDDLFNYUZLSTQLRALFDBEIDHPVMMYKDOLSCXIQZJANISKNYNIOEGGPVRYWULIAPWPZRJGGOIQVAUMYTQOOXXKCAJTBHCWPLDFXHPZHCBCYKJUARIAMOIVZEJXWVXBRGUXKVCDSHKQTBMDBVRGLMPYYFBGAEPQHCSUWJTRZKHTLNEXN");
    msg.reference_frame = 250U;
    msg.leader_bank_lim = 0.728085303277;
    msg.leader_speed_min = 0.618639537363;
    msg.leader_speed_max = 0.386408484196;
    msg.leader_alt_min = 0.909681105131;
    msg.leader_alt_max = 0.888551294086;
    msg.pos_sim_err_lim = 0.324938765126;
    msg.pos_sim_err_wrn = 0.906561016983;
    msg.pos_sim_err_timeout = 56963U;
    msg.converg_max = 0.806217455273;
    msg.converg_timeout = 22293U;
    msg.comms_timeout = 46926U;
    msg.turb_lim = 0.0769094721306;
    msg.custom.assign("MWTEBGTZRBQCHXAQLPDGPHBNLDBYVCULOPSGMWHJZNBJCBNDWAONRAWUOYDXJBIOSFKFJEGKXXISJCASRFIMUGD");

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
    msg.setTimeStamp(0.422173687645);
    msg.setSource(49796U);
    msg.setSourceEntity(49U);
    msg.setDestination(36236U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("DULCIZSCFQDSDPYRIWLEQLFTCNHVYEWRVBLIWGXCXBZEZPQHAIIUPALUIDNXKOQTHOBTDUYUOFPGHAYSMULJMGXZANDMZENDJNIFCBTZGAGVZQQESIAJKRWTY");
    msg.type = 8U;
    msg.op = 120U;
    msg.group_name.assign("TNMYQWWOKDSLFBRIVBJWUCLSLGGCKXCOWVFYRJZYNYPOBMXXQPHDUFPYHOEGBRNJCEAZIIHQOSEVKVYIMSFDUJYJIHQND");
    msg.plan_id.assign("VSEYTUCMWMLARUFVBTMAMWGGVCYJWXVSEPAQGHPXIYZLRBCCDWIYORONUPDLKZBHUMFKOZXQUISXSCGCEXEYT");
    msg.description.assign("DVXEVLTDKQZHQOUIZVMKLAVSIVIJUDWEDQICQAQZCFBHCXRFLMBZWYTVOETLEIPHNXILPRDAACLMRSMAKIUUOCWGDNUYHYTNHMRDVQHFBMGLJWANTWNZNUXSOKXFBTRNQPRVGKGYVCBSMYJBSCEBXZ");
    msg.reference_frame = 127U;
    msg.leader_bank_lim = 0.218352033575;
    msg.leader_speed_min = 0.311314365273;
    msg.leader_speed_max = 0.194595254703;
    msg.leader_alt_min = 0.832131373727;
    msg.leader_alt_max = 0.293269806713;
    msg.pos_sim_err_lim = 0.534517877412;
    msg.pos_sim_err_wrn = 0.841901933366;
    msg.pos_sim_err_timeout = 55705U;
    msg.converg_max = 0.951468029139;
    msg.converg_timeout = 6822U;
    msg.comms_timeout = 23701U;
    msg.turb_lim = 0.922239902905;
    msg.custom.assign("RJIXFTTHLXSEKXZQAKWNQETZBKMSICTWUDBKXILGKEGZADCHASHNFVPWFHCUQTFNLXPODYHCDZKVTMCSQVRWQUQOOFFUPPDLYYIDRJSNWLYABPBJRF");

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
    msg.setTimeStamp(0.784238189416);
    msg.setSource(558U);
    msg.setSourceEntity(233U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(117U);
    msg.timeout = 27841U;
    msg.lat = 0.760797017789;
    msg.lon = 0.0667874145743;
    msg.z = 0.878626971556;
    msg.z_units = 162U;
    msg.speed = 0.836851741708;
    msg.speed_units = 24U;
    msg.custom.assign("JECGFLHAVAYEVI");

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
    msg.setTimeStamp(0.859750895428);
    msg.setSource(41579U);
    msg.setSourceEntity(58U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(213U);
    msg.timeout = 22777U;
    msg.lat = 0.375932941723;
    msg.lon = 0.695802960857;
    msg.z = 0.132061295398;
    msg.z_units = 15U;
    msg.speed = 0.40994023712;
    msg.speed_units = 74U;
    msg.custom.assign("HVDFPLTAQQRRCOONZPNBUFJUNMLJYGNVUWGISHFVNFTABCVEWETGSCEPYCFJPWHTHFIJVOZJSTUZEPJCCIGBN");

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
    msg.setTimeStamp(0.559114816747);
    msg.setSource(17488U);
    msg.setSourceEntity(39U);
    msg.setDestination(38094U);
    msg.setDestinationEntity(206U);
    msg.timeout = 58562U;
    msg.lat = 0.0202597809605;
    msg.lon = 0.784026865194;
    msg.z = 0.476653069084;
    msg.z_units = 139U;
    msg.speed = 0.284512531448;
    msg.speed_units = 227U;
    msg.custom.assign("RRCTSLNMRJMFEGSHRMTPWDLLBIDAUJTOVYQD");

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
    msg.setTimeStamp(0.713337269485);
    msg.setSource(37967U);
    msg.setSourceEntity(36U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(164U);
    msg.timeout = 4619U;
    msg.lat = 0.928510682397;
    msg.lon = 0.123641985831;
    msg.z = 0.785017529929;
    msg.z_units = 241U;
    msg.speed = 0.00306573989305;
    msg.speed_units = 102U;
    msg.custom.assign("UXGHICEZRNTHNLESBNOIGEFORLSGAIDYDMNVCXXWMETRXEQLMRVKCQFDIHYWKHVQEZZOMXTJPHJCAVCFXSEUKARKSTVTOKXDGFZYZPPRNXWBYUTTKVMSIKEOGOGQSJNTNVZFCQRJAPEUQBSCHILVJHMRVYJHLPLMJKDBFYLAI");

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
    msg.setTimeStamp(0.711104350551);
    msg.setSource(28571U);
    msg.setSourceEntity(8U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(97U);
    msg.timeout = 39411U;
    msg.lat = 0.175879684805;
    msg.lon = 0.145307814099;
    msg.z = 0.966697436174;
    msg.z_units = 120U;
    msg.speed = 0.462595000538;
    msg.speed_units = 59U;
    msg.custom.assign("SFEPNIDXRZEXBHHYSJSLDYCHLDUCIQAVALMXYISUGDKHYCTXHSLUGMXJBHQGMKNRQDVUAVUUZROJDFMGKPQUSKPGBMWXUWDWTNKWKOREBBLOQXSFPZTTWZAMRCZPZUMYFNYWNJPFEVVOSVJBNPOYKIAO");

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
    msg.setTimeStamp(0.108657020806);
    msg.setSource(55480U);
    msg.setSourceEntity(20U);
    msg.setDestination(19003U);
    msg.setDestinationEntity(192U);
    msg.timeout = 25569U;
    msg.lat = 0.898014862714;
    msg.lon = 0.0299345480798;
    msg.z = 0.0782152236383;
    msg.z_units = 99U;
    msg.speed = 0.569764894812;
    msg.speed_units = 126U;
    msg.custom.assign("OVFEBTTWWLQMZJJEGHPFITYCCBXQSCZIGVPYZRCHYHQNPMIELVAISVMGSEXQRSCFOIVHQNWCDUCZCBORZGQUHDOXKOZKHUZRZYLEKXHFZGTRD");

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
    msg.setTimeStamp(0.173609867479);
    msg.setSource(56174U);
    msg.setSourceEntity(249U);
    msg.setDestination(35733U);
    msg.setDestinationEntity(54U);
    msg.arrival_time = 0.912580574492;
    msg.lat = 0.905823895568;
    msg.lon = 0.95384080468;
    msg.z = 0.0278814465531;
    msg.z_units = 4U;
    msg.travel_z = 0.933707814256;
    msg.travel_z_units = 162U;
    msg.delayed = 162U;

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
    msg.setTimeStamp(0.801678303964);
    msg.setSource(37733U);
    msg.setSourceEntity(116U);
    msg.setDestination(17143U);
    msg.setDestinationEntity(44U);
    msg.arrival_time = 0.971988679721;
    msg.lat = 0.949868074817;
    msg.lon = 0.204459713796;
    msg.z = 0.313648434403;
    msg.z_units = 124U;
    msg.travel_z = 0.218815609223;
    msg.travel_z_units = 100U;
    msg.delayed = 26U;

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
    msg.setTimeStamp(0.404823790393);
    msg.setSource(45377U);
    msg.setSourceEntity(103U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(152U);
    msg.arrival_time = 0.30134669849;
    msg.lat = 0.430080579787;
    msg.lon = 0.596000538964;
    msg.z = 0.6459522088;
    msg.z_units = 210U;
    msg.travel_z = 0.794727463937;
    msg.travel_z_units = 173U;
    msg.delayed = 194U;

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
    msg.setTimeStamp(0.808671954853);
    msg.setSource(44879U);
    msg.setSourceEntity(66U);
    msg.setDestination(55757U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0368460332762;
    msg.lon = 0.464680888008;
    msg.z = 0.96592797237;
    msg.z_units = 141U;
    msg.speed = 0.594059903467;
    msg.speed_units = 171U;
    msg.bearing = 0.0565517233065;
    msg.cross_angle = 0.826473593506;
    msg.width = 0.202846469156;
    msg.length = 0.0805703024178;
    msg.coff = 13U;
    msg.angaperture = 0.921429136295;
    msg.range = 47404U;
    msg.overlap = 148U;
    msg.flags = 185U;
    msg.custom.assign("YIRRQDTIRLYXYQMUTTUTGZREILJDBCAAXULRIEQLYJWBVBPHRETTSFEQNBHQXPKDPGBUUUHSZXDOFMSONUPPWLUKZNBFDGIVRQBJRXNGHZNCKDOAYIXSEKTDAYOHDKCWXBZAZWSMLKVPFPVVRPHSBKNXKAWNQICDINLRNFHPESNZLWHIOWVQV");

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
    msg.setTimeStamp(0.959700800018);
    msg.setSource(35850U);
    msg.setSourceEntity(126U);
    msg.setDestination(46402U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.244751542022;
    msg.lon = 0.423199833905;
    msg.z = 0.0904524024519;
    msg.z_units = 81U;
    msg.speed = 0.487074361206;
    msg.speed_units = 240U;
    msg.bearing = 0.0322678082699;
    msg.cross_angle = 0.881535039046;
    msg.width = 0.343714895302;
    msg.length = 0.560826803901;
    msg.coff = 80U;
    msg.angaperture = 0.673172027793;
    msg.range = 28704U;
    msg.overlap = 197U;
    msg.flags = 82U;
    msg.custom.assign("NCWUPIZJWOPHLGOESIOBZHAYSHMVGXBMRDCNVVCPWZJKDOOVHKXPXAKAGIIEWLKYURUAZQBTIKSAXK");

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
    msg.setTimeStamp(0.636808967111);
    msg.setSource(33589U);
    msg.setSourceEntity(92U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.839477695503;
    msg.lon = 0.907647279554;
    msg.z = 0.185341993158;
    msg.z_units = 251U;
    msg.speed = 0.590713297516;
    msg.speed_units = 29U;
    msg.bearing = 0.456938644701;
    msg.cross_angle = 0.576649601102;
    msg.width = 0.713567553801;
    msg.length = 0.704611405967;
    msg.coff = 6U;
    msg.angaperture = 0.631033135576;
    msg.range = 30687U;
    msg.overlap = 27U;
    msg.flags = 119U;
    msg.custom.assign("UTCLUAPFNQVOVVSHGGZNGHCPIJXQJZSNMIEBLQEHCTYKAFIGAPDVTVKCLGUYSKNAFAQRLOSHSOPLAMNUQRBQSMROSNJDTIWYELXPKDUKZPHKGXCRZPWGULTFDFWBBAUFTIIZR");

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
    msg.setTimeStamp(0.293073623875);
    msg.setSource(39186U);
    msg.setSourceEntity(72U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(36U);
    msg.timeout = 57226U;
    msg.lat = 0.932681417769;
    msg.lon = 0.199676383199;
    msg.z = 0.711695955386;
    msg.z_units = 147U;
    msg.speed = 0.790675588247;
    msg.speed_units = 161U;
    msg.syringe0 = 79U;
    msg.syringe1 = 113U;
    msg.syringe2 = 70U;
    msg.custom.assign("DRQZVRNQNKIGXCWPJOUPUULXCFPIYKEISIGMLHUAOHVYEDFVAXPVZOACCDKWTZTBCQIIYFVQYQGFVHXBZKNKFTBF");

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
    msg.setTimeStamp(0.907476811158);
    msg.setSource(3470U);
    msg.setSourceEntity(138U);
    msg.setDestination(38726U);
    msg.setDestinationEntity(86U);
    msg.timeout = 56606U;
    msg.lat = 0.701057649245;
    msg.lon = 0.0390759566768;
    msg.z = 0.89611491453;
    msg.z_units = 146U;
    msg.speed = 0.1397234156;
    msg.speed_units = 89U;
    msg.syringe0 = 225U;
    msg.syringe1 = 226U;
    msg.syringe2 = 70U;
    msg.custom.assign("JBIIIQGBUJAKLRMIWAKAGXHZHCEUQDOJFQLPDXJORNIRTOUFNGNXGTGMQLBYFWYHWFVDLZHOYJUOWUVDCKCUTCWEPDGXEGHAISVLYSFDMBWFYNDMABNDJCXTMZFRYGMUGRRUHPATKETOCTPXAVDFNXQKAVIRVPMGVFBZQZCDUONZZLUNFQXKSWIMLAHBRAS");

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
    msg.setTimeStamp(0.210822225007);
    msg.setSource(26360U);
    msg.setSourceEntity(223U);
    msg.setDestination(45001U);
    msg.setDestinationEntity(63U);
    msg.timeout = 8600U;
    msg.lat = 0.749224318174;
    msg.lon = 0.327283791641;
    msg.z = 0.513365187757;
    msg.z_units = 1U;
    msg.speed = 0.341923412682;
    msg.speed_units = 246U;
    msg.syringe0 = 175U;
    msg.syringe1 = 65U;
    msg.syringe2 = 234U;
    msg.custom.assign("VYIYHEWJFNJZIQIALRMJQCOMVRVHOEMYDYMJUTJBXEUHVRFGDWIRGDBCRKPVPSTTNTSPPSQOHUJUDQIYDPKZEMHSXHHTVZAGELMYWLFCZXATOLPSFGGXHFBLIFLXEWQKMPMGBMN");

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
    msg.setTimeStamp(0.975315674812);
    msg.setSource(12953U);
    msg.setSourceEntity(94U);
    msg.setDestination(44778U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.351540624019);
    msg.setSource(64681U);
    msg.setSourceEntity(123U);
    msg.setDestination(17478U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.577580293317);
    msg.setSource(57746U);
    msg.setSourceEntity(213U);
    msg.setDestination(36499U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.409360390581);
    msg.setSource(54580U);
    msg.setSourceEntity(34U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.67105815042;
    msg.lon = 0.509493947873;
    msg.z = 0.517185712794;
    msg.z_units = 217U;
    msg.speed = 0.1658034636;
    msg.speed_units = 113U;
    msg.takeoff_pitch = 0.918775551283;
    msg.custom.assign("ZEOHCLXAYZSHNDCPVZCEHCEANJXTXRNRDJFAZWBUNKKTKOYCSULUXOWRMISWSRPGUOXIYQGEWYFNTQETLJMSTCXOEAQTFDCXEEHQEVAIPNJDNPHZRKWMQKOJFUKKILMBULZVQBHLBTBZOPZKDTDIZURJREXGVJRSDDYIZNCSBOJMIRHALTYUWWQDFMPGAQBWGKBACFGDHTWMGVYNFLQGVVYNXGLSIHLYBARHFOUQMPBJIGPMOUAVFPXISJ");

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
    msg.setTimeStamp(0.0337499460713);
    msg.setSource(58683U);
    msg.setSourceEntity(184U);
    msg.setDestination(44938U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.0119947845639;
    msg.lon = 0.376434396096;
    msg.z = 0.668242031837;
    msg.z_units = 72U;
    msg.speed = 0.644533467982;
    msg.speed_units = 193U;
    msg.takeoff_pitch = 0.161399911963;
    msg.custom.assign("UWLTNSEHZLQYYILURJCUDOGVKNNIOGQERSAWKIRHZIEOPMGYWIVDVZRTGBCPBYBJHRIVSQXWTFSYQEJVNHWCVQWFZUENAXAYEKZBMMFXIKGXAFLRHUXIKPRRCVOZRLOUJZAHECMYFCSYBWPQCPGCDCMSIGFFMLXIRMLJTDOAZGTKQWGBBNMXHQFOLSMTJZLJTDDHQNTAAUPXHBOSUJXYVBDCPE");

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
    msg.setTimeStamp(0.91396173658);
    msg.setSource(63354U);
    msg.setSourceEntity(227U);
    msg.setDestination(49118U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.160527969974;
    msg.lon = 0.379744411925;
    msg.z = 0.157491807339;
    msg.z_units = 71U;
    msg.speed = 0.535829390607;
    msg.speed_units = 185U;
    msg.takeoff_pitch = 0.542279344209;
    msg.custom.assign("HRLLGXPUTEZQX");

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
    msg.setTimeStamp(0.550568622114);
    msg.setSource(33067U);
    msg.setSourceEntity(79U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.531669555832;
    msg.lon = 0.896696766375;
    msg.z = 0.716365138601;
    msg.z_units = 51U;
    msg.speed = 0.675711364607;
    msg.speed_units = 225U;
    msg.abort_z = 0.0599555037697;
    msg.bearing = 0.104198577724;
    msg.glide_slope = 250U;
    msg.glide_slope_alt = 0.802899799825;
    msg.custom.assign("DNCQNMHGLJQMSSNRYJLIWDKNIQMUWFHEWGKEGCKW");

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
    msg.setTimeStamp(0.0156055366672);
    msg.setSource(32447U);
    msg.setSourceEntity(162U);
    msg.setDestination(20771U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.999379554634;
    msg.lon = 0.915578199778;
    msg.z = 0.258957928413;
    msg.z_units = 157U;
    msg.speed = 0.60411175277;
    msg.speed_units = 203U;
    msg.abort_z = 0.948194012002;
    msg.bearing = 0.44947662178;
    msg.glide_slope = 248U;
    msg.glide_slope_alt = 0.963882644982;
    msg.custom.assign("GQDMZXTGNOHSHOKGXNSRUUKXPPOMPTHZZCCYADFGHJVAWNEKCNTEFLQBADLGFROVSGALUPHOYSFXBCZQHLWWXCURIAUTJSDJWTRGPWJRPOFQKBJEMJMIFETZZLKHYJCZKJEBAUXSZYHERIGOJAAMGCVLVEPNVYXBNMVWU");

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
    msg.setTimeStamp(0.771882547292);
    msg.setSource(18147U);
    msg.setSourceEntity(211U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.916538591249;
    msg.lon = 0.742949406784;
    msg.z = 0.216949459687;
    msg.z_units = 23U;
    msg.speed = 0.541798791265;
    msg.speed_units = 72U;
    msg.abort_z = 0.0307124728026;
    msg.bearing = 0.537309440818;
    msg.glide_slope = 182U;
    msg.glide_slope_alt = 0.68145152415;
    msg.custom.assign("LPJKCRZBXXTTSSMFSGKDPQUIVSSOLQMTVWKZAWDYCFUEFETDMUPTDFMAFOVVWDLDKVVPTAWHA");

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
    msg.setTimeStamp(0.450717588841);
    msg.setSource(58175U);
    msg.setSourceEntity(224U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.629958559955;
    msg.lon = 0.275845793403;
    msg.speed = 0.917489950983;
    msg.speed_units = 171U;
    msg.limits = 147U;
    msg.max_depth = 0.579366427059;
    msg.min_alt = 0.123964161236;
    msg.time_limit = 0.562419855445;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.919563753336;
    tmp_msg_0.lon = 0.966665775866;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NWDBMBJMJMWDQRUJFXGTVCRZUUAJNSMOKSLUFKVDOWNQRDKPVLUQDBFYFKLXLPXQZJZMSYEQHTYBMRSRHUHQALNELGICHOUSSJZKPLSTWPHGPGMWXVKICQZVXJANWYOXSJATYWBEZPXETEANEUEBILGTNQCOCDCJOPLZCVRHDBUJUIFIXDQDIPPRVHABHFFIWPOTMCFKMMXSGEAVAKFIGGYCYTZ");
    msg.custom.assign("EIWYDKJLRZBTTDCLRKENLMMMCGINTJKHOLZXFQWUDLIRSHSAAVWTSXDGIEMPEBKGSLOOIEQUZQUNYYFIOAMURSBBMXRESLKBEFVPFOVAWUABADGPDJZGCHV");

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
    msg.setTimeStamp(0.395439069574);
    msg.setSource(21576U);
    msg.setSourceEntity(142U);
    msg.setDestination(54811U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.526961058694;
    msg.lon = 0.0248966578056;
    msg.speed = 0.827567334406;
    msg.speed_units = 170U;
    msg.limits = 129U;
    msg.max_depth = 0.074772590684;
    msg.min_alt = 0.43905875569;
    msg.time_limit = 0.297664480247;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.44248702154;
    tmp_msg_0.lon = 0.819235139644;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TAXMCTVVKTVPSMVRRQVBFEHJJUSXCECXLQDFWOWGKIZYREOSUIJUBPKAHHISMPCGEJNXWAFTWZHWKINWCKOQRDLUNWTPOJGKDBMNOAQBLYFEELYAOHUTXBPLFNZDJCPHZRDLDCZQRXTKOLUDBA");
    msg.custom.assign("PWQRAWFHOCBUJKLMHEBOVDTLRUFWZIJWGJLCVKAZCQPEDRZUWUNFTVAKPHSNMYAQWMEVQTIHERUOPIXFAJGJJLOZTAADDRCDNZAXOHSVTFLCXKTGPUSA");

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
    msg.setTimeStamp(0.371751336971);
    msg.setSource(62932U);
    msg.setSourceEntity(197U);
    msg.setDestination(17579U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.925800893979;
    msg.lon = 0.316207301469;
    msg.speed = 0.730037706007;
    msg.speed_units = 198U;
    msg.limits = 184U;
    msg.max_depth = 0.321352189098;
    msg.min_alt = 0.184913282127;
    msg.time_limit = 0.685515477038;
    msg.controller.assign("BYBWCUCFVIQGGFTUICDXNJTBABRFLEDESLLTIJCFNKGSZJLEVDRYJWBHQJOZYNYPHUQJEHGFQKYNSGAMXKQLHUDEWZOACRUCMXBYIWWGJDOFBIGDVJUIULVMRGHWDNXJMHQMAPVMDEAPIPRTSOZSQKROQBERSOVXCXPNCTOVFINTYYKGLZAVTVKNSSRHYUFTWHKCLWOSPWEAZQXWBNTXMKMTXEDZJUSIRGQLDPEOKMPM");
    msg.custom.assign("XVRINJBPESFYVJLHTPFELLRHTZRTPFZFUTTZOAOWMYDXSBUUTKAXUBIGDQUPYDPKQUWGYJKXOBGZKZGHBMNMRDEGCHJFZLQSHIABFEEXAXEEUFYCVKINMSWLTLWYYVLWHRSWCMUOBKXBHVSKYVSQLOMUQQNAYKQRRIHVRZDEACACKDWI");

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
    msg.setTimeStamp(0.258540397452);
    msg.setSource(6418U);
    msg.setSourceEntity(12U);
    msg.setDestination(52288U);
    msg.setDestinationEntity(120U);
    msg.target.assign("GIXWKYJWILGVQXSJBJTFDVZKBBOPGYPUYLJXLGMZVLGANQHJPPCCEPIKSUOFPDIUNKDWVTKLRHTEHYXUZZPIGMDUPXYVERBJLISEAQENZNOCZVFOHXABUQRSOHTDEMIHNVHNACLCASDGRMANPDOBXZCXNBXSUZMDJSVXJHQOWOEZUMMRASACYCEDKMVGOAUKFQBWZJWYW");
    msg.max_speed = 0.862669524084;
    msg.speed_units = 202U;
    msg.lat = 0.653939695454;
    msg.lon = 0.991170444577;
    msg.z = 0.272712202072;
    msg.z_units = 200U;
    msg.custom.assign("MPRSAIRXCBVDJWCUYHZIBPWBOVHUWKSLSQYPNENMDPQWYJODXIGAHZWLXOWQUCNUUTLGEKLEOABMLKZVEOGCKFTGVPVIBDPJEDIHPOBFRALTYXTIPXDSUBEKZSZYGRGDTFCTKZOGVNAYYIGEFMNSTVFMBLCLNMRJUHMEUAMRMQNQIFJRYNA");

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
    msg.setTimeStamp(0.807555096869);
    msg.setSource(11500U);
    msg.setSourceEntity(226U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(140U);
    msg.target.assign("JZACQQVMPRHEAUNBZADFWZTZZJLILMSFEIYBDFGIUGNOKFUWGGTRQVCKGYDOJGIQRHRNOKDRUDSKHWECJSZDIDTXFRKKUKPLFZTAADILBJJOHJRLEIXPBEFKHAUCMOTFVMLCYHYXBQGLQWGRCFKYNSPLXQICSOVSQMVMXEBIWOPJEVNOVTYCEYWUZWBUOTXAXVANQHBUHKCSXLPXZMNPTGJVDWLNXWPHG");
    msg.max_speed = 0.44420857798;
    msg.speed_units = 151U;
    msg.lat = 0.187218640194;
    msg.lon = 0.378118696577;
    msg.z = 0.0644191820541;
    msg.z_units = 156U;
    msg.custom.assign("HAADXTMXDICXBXBEGFHWEVVEFSXMINCUNEKRQYVZRXOUXKQAHOTWBTYPHSQDPNILNWMPRSCJKBHUCZAQRQGTMIKWYJGGLSMGSYLZZTSPWPQZENYKZHNKQLEZHMI");

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
    msg.setTimeStamp(0.523525220083);
    msg.setSource(29357U);
    msg.setSourceEntity(230U);
    msg.setDestination(64820U);
    msg.setDestinationEntity(38U);
    msg.target.assign("HQLSOFTVQXAQRLHMYLQNWQZYTEDYOVADCZJBUJLIYGAIEGAQCKUHMZDMXSPVEMDRITGVSNAWHKZYBRTFKKEJMWULSMVPGBORPWBCGOUQUNXVHXOJATJZMEZDDGRVJISGDCQBNKPUJTM");
    msg.max_speed = 0.461722252929;
    msg.speed_units = 116U;
    msg.lat = 0.363512232091;
    msg.lon = 0.249642426711;
    msg.z = 0.428446330696;
    msg.z_units = 230U;
    msg.custom.assign("CUPIIZSECDLHSRKOPLUDRTAOUGACKRNFXVPJCYAZHGEAZFONYLXBPABNAQLDXZYTREJJLDOXWBMPMFCIXGBMODWQSQJSEMGZJQHPEIWSRZPWAXPJIVEMNAMXTEEWSQNZJHK");

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
    msg.setTimeStamp(0.917495505521);
    msg.setSource(61810U);
    msg.setSourceEntity(228U);
    msg.setDestination(7244U);
    msg.setDestinationEntity(59U);
    msg.timeout = 56560U;
    msg.lat = 0.722462079335;
    msg.lon = 0.445982479365;
    msg.speed = 0.394578166868;
    msg.speed_units = 183U;
    msg.custom.assign("ORMJEJFQKWCZLMZAROVDQTMYJQXCWAGPMPKBHLIHYUAPTYATHPJKDVLZZCZVIQYOGQQUIVCNVTWBEAUZTSFZYDONHKHWIONBXRYLDIEGSKKVOJLCPFXDNMUMNXSEPRQFQLECSUSJNYCPDTOWUXWVVYNUFALGYEFCBXMJFBKXLNWI");

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
    msg.setTimeStamp(0.403247888573);
    msg.setSource(16841U);
    msg.setSourceEntity(48U);
    msg.setDestination(23500U);
    msg.setDestinationEntity(68U);
    msg.timeout = 8949U;
    msg.lat = 0.11255227835;
    msg.lon = 0.332619772867;
    msg.speed = 0.0719980566623;
    msg.speed_units = 85U;
    msg.custom.assign("MOBGCKIIHLBRVREVWRMSIGVHAAOOGOWMNZDAQKTSCUTSVBAUXJMXVPTQAOFNHKEMMEXHNPDZBAZP");

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
    msg.setTimeStamp(0.210859937646);
    msg.setSource(17862U);
    msg.setSourceEntity(159U);
    msg.setDestination(551U);
    msg.setDestinationEntity(63U);
    msg.timeout = 46441U;
    msg.lat = 0.2207118632;
    msg.lon = 0.361005134526;
    msg.speed = 0.164080359769;
    msg.speed_units = 123U;
    msg.custom.assign("VQQKULMCAFFFOZVDFSNIFENPCXOYFTJNBXOXEIDEYNFZYLHWWSUUPLGDMJHHEJBKAVSVTOLCYADHBJHRRY");

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
    msg.setTimeStamp(0.113644305201);
    msg.setSource(41579U);
    msg.setSourceEntity(81U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.711246704636;
    msg.lon = 0.277468223459;
    msg.z = 0.610408314782;
    msg.z_units = 91U;
    msg.radius = 0.183384072594;
    msg.duration = 61765U;
    msg.speed = 0.295057824671;
    msg.speed_units = 167U;
    msg.popup_period = 54579U;
    msg.popup_duration = 48506U;
    msg.flags = 18U;
    msg.custom.assign("AHXBFABVYSOTXQJYBJWBPXKMRZSNELHRNUXDIM");

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
    msg.setTimeStamp(0.0754600315838);
    msg.setSource(48655U);
    msg.setSourceEntity(142U);
    msg.setDestination(934U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.934627432968;
    msg.lon = 0.3577972672;
    msg.z = 0.0491420199878;
    msg.z_units = 236U;
    msg.radius = 0.840190750571;
    msg.duration = 19191U;
    msg.speed = 0.729034386978;
    msg.speed_units = 84U;
    msg.popup_period = 27745U;
    msg.popup_duration = 24382U;
    msg.flags = 156U;
    msg.custom.assign("WHAWLGJHXYYNRTIPQSIAQCHLEXMREIRTFLJFWGOYOYDLXTFKPLILKSQQFBURHIIVSWKXDXGAOBXJNBNZDATMMJQN");

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
    msg.setTimeStamp(0.489899033628);
    msg.setSource(21450U);
    msg.setSourceEntity(10U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.191621665295;
    msg.lon = 0.8023379656;
    msg.z = 0.41296415235;
    msg.z_units = 78U;
    msg.radius = 0.102643431776;
    msg.duration = 49520U;
    msg.speed = 0.46086237452;
    msg.speed_units = 239U;
    msg.popup_period = 3172U;
    msg.popup_duration = 10461U;
    msg.flags = 123U;
    msg.custom.assign("QXZOUVPPMPDYVVDHRNRXGAPQOSHBFKDBCJLZCDBURABHWAXHJKRBYBXTCTWSRWIXVEHGMNJIWTKBAIXVATHOWSEOMNZVIJSMYZLZMOTBUGM");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.516983274873);
    msg.setSource(2641U);
    msg.setSourceEntity(30U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(90U);
    msg.op_mode = 53U;
    msg.error_count = 79U;
    msg.error_ents.assign("MAENVTRDLUFHAKREBPCSHWKNRC");
    msg.maneuver_type = 11541U;
    msg.maneuver_stime = 0.0945812991001;
    msg.maneuver_eta = 55841U;
    msg.control_loops = 2028595947U;
    msg.flags = 38U;
    msg.last_error.assign("IXCSFNXUVYZIXTLXXQZHOZDGKCSGNAKBSBFMTVYPGUPZUFRARLQFBNGWKZJGFVFLNDLELHPDZPADWBRZKQEFLBELHDMREJHRODIKFPWUEJYLESLGJJNQPQTCHAJMKWOUCUIIXWKDIQTF");
    msg.last_error_time = 0.916838007035;

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
    msg.setTimeStamp(0.649914221648);
    msg.setSource(11082U);
    msg.setSourceEntity(53U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(214U);
    msg.op_mode = 179U;
    msg.error_count = 129U;
    msg.error_ents.assign("KZYTLODAYNLZPLOLIPAAPVLKHJTSODAIUQVUJRGMNHBZCJMMOJQONUKZCBGWKXUAC");
    msg.maneuver_type = 15479U;
    msg.maneuver_stime = 0.363798284642;
    msg.maneuver_eta = 33960U;
    msg.control_loops = 4016985215U;
    msg.flags = 101U;
    msg.last_error.assign("FOOIUNQTGUMMMKEKDKFMUUXSBSNGBLUHBETOJZPAEUCRMNQQUGLOWHFHWVWIDPXRUCPHSTXACZIFQOQBWEPNRFRKVVZJBWZ");
    msg.last_error_time = 0.866731267231;

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
    msg.setTimeStamp(0.272668977025);
    msg.setSource(62918U);
    msg.setSourceEntity(50U);
    msg.setDestination(7722U);
    msg.setDestinationEntity(21U);
    msg.op_mode = 153U;
    msg.error_count = 67U;
    msg.error_ents.assign("FMKNXWALOROPVZLGZFQDRZCAVRUXFUIERNKMGOYPCBCVBYEYKGEISYEPXTKBAGHCTWVWQSFVPVUTMAJRKNPVRXWAZWDUMEJOIODTXUTYDBQZEZFCMWZLVGJUNXDHJAUGEIUJMWQBGQTTIULFROKIEYVSNGZJWYMKJIHSJQKMUJCNBPWCCLKHQRNPHDHTBJDTYBM");
    msg.maneuver_type = 40004U;
    msg.maneuver_stime = 0.669236727468;
    msg.maneuver_eta = 21212U;
    msg.control_loops = 3210872547U;
    msg.flags = 120U;
    msg.last_error.assign("MAUWVQGARTMOAYKFVMNOXZHCYHUUDTYBPCPBYOUGMZFNGDEPAJJKVMNXJECRXLFQYWWVQEWSIDPJJIUZTQAUGLOMPXKUKBWNGSBKMZWEELKPPBRKVQFGRCHTICDXFNSHVLNJDYMVRSOSAJBDPIBQELA");
    msg.last_error_time = 0.678048580699;

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
    msg.setTimeStamp(0.620852163498);
    msg.setSource(5747U);
    msg.setSourceEntity(220U);
    msg.setDestination(47347U);
    msg.setDestinationEntity(151U);
    msg.type = 234U;
    msg.request_id = 55319U;
    msg.command = 235U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.585006186782;
    tmp_msg_0.lat = 0.92063431976;
    tmp_msg_0.lon = 0.782679303775;
    tmp_msg_0.z = 0.931573843677;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.travel_z = 0.821015455591;
    tmp_msg_0.travel_z_units = 184U;
    tmp_msg_0.delayed = 196U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62923U;
    msg.info.assign("USEHJQCHPMBNFRJHERBWSKCYKNOABXRANLNHKNTQZJDTOQIWUKJZTEVRIOWRDIFSMBFQGSYVVJRRAZNDIIGMOLAPMWGJQAMUJCGZMAWELVGWTPYFISGSKZYNTXUNDYQGPCICLGEIXZZQSVJXPXNYQUBKWAPXCSODEHFJMLEEKUTXGEDXVZ");

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
    msg.setTimeStamp(0.473825154529);
    msg.setSource(4678U);
    msg.setSourceEntity(62U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(83U);
    msg.type = 22U;
    msg.request_id = 44343U;
    msg.command = 182U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 16550U;
    tmp_msg_0.lat = 0.0565400858866;
    tmp_msg_0.lon = 0.807377307702;
    tmp_msg_0.z = 0.322078299209;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.912432784757;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.custom.assign("COWHHRGKANMKPTGOIPVRMENHVUQTXUSSCOWDGXJBBYYVBDVALZJJJIPIMITSUODRLZQVGBMXPSUZVOQKFNBWBPSEHOYVVDJUAHLAGCUMZMCRFIIFFRGCEEWHPUNPLQSDWACWXHBQTZNXAPXLENEAIYWOQYGACKKNHRMUKRLDNLYLTWFZLCEVHBCJQEGSHCGFAUADZFFPUXXTSPTBYWWGJXJMZTQNZSTREOJMBQIQKFNZYSDLYKTOORJXVK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27327U;
    msg.info.assign("JDFYJEYPDELIVBXTIRECDZPCFRUTAGTXETUVUZGRKLXJADLSMSFZADUFYFSKOCIDXRSRRNVDQPSPPCDOWRLMVMRJQZQFMQMKWKMZYKTMHUIKCGNYNIPQZVWBXKDZIZXWEYBHTUGNYJOEGHGHBGKMBTCTLFOSWANCNIMSXYDXHVQQUHSC");

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
    msg.setTimeStamp(0.665804929861);
    msg.setSource(19809U);
    msg.setSourceEntity(94U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(155U);
    msg.type = 252U;
    msg.request_id = 16534U;
    msg.command = 62U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 38753U;
    tmp_msg_0.lat = 0.249289303512;
    tmp_msg_0.lon = 0.485156441447;
    tmp_msg_0.z = 0.280731881234;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.amplitude = 0.966198323839;
    tmp_msg_0.pitch = 0.474029616086;
    tmp_msg_0.speed = 0.950406608118;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.custom.assign("BFZTESYDKBNJARNCMMMAYZENFDURNJOECDDVFZVJXQJRLQLSEARHXXGHQAWMHPAKIVTXUVIFSIRZLHCPMYC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47953U;
    msg.info.assign("WPESKKVRMRKLSGJLZCOUTYURYIEBPNTKIHFFZSOXMYSYIHPAYNWSTKAVVDPQYLHGHCOEOQFURMUWWETFAYBYGWXDHBDPHBRBQQJMATGCBMUJWOZKFJGXENXXSAVXUIZBLEXDMCVSTSACKRFNGEYTQZAFFIVSGIRWDLTAHOLKXLXJIDIJCGNCGZZGDQWQTDNZAHEVMKSNCM");

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
    msg.setTimeStamp(0.128568770291);
    msg.setSource(558U);
    msg.setSourceEntity(69U);
    msg.setDestination(30524U);
    msg.setDestinationEntity(55U);
    msg.command = 115U;
    msg.entities.assign("WXWSLOOZBEPLDRCWRKMIQGGOHGNAA");

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
    msg.setTimeStamp(0.584544938792);
    msg.setSource(28419U);
    msg.setSourceEntity(89U);
    msg.setDestination(14215U);
    msg.setDestinationEntity(22U);
    msg.command = 153U;
    msg.entities.assign("VHSULEILKNKAOZRZWDKZXXDYSFDMUJVMYQSNNJ");

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
    msg.setTimeStamp(0.975120370017);
    msg.setSource(38708U);
    msg.setSourceEntity(105U);
    msg.setDestination(4504U);
    msg.setDestinationEntity(115U);
    msg.command = 32U;
    msg.entities.assign("ISMJCOZPQGIZYVJYWEBVOPKJTO");

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
    msg.setTimeStamp(0.134899934363);
    msg.setSource(680U);
    msg.setSourceEntity(203U);
    msg.setDestination(35233U);
    msg.setDestinationEntity(30U);
    msg.mcount = 173U;
    msg.mnames.assign("EIFSREKGFGOGHRURYJEJPCACIGJXMISRCVDMPXILQBDSOCFQXRPJUT");
    msg.ecount = 168U;
    msg.enames.assign("RXCVNNIMJFSIXTUKKBZFCSGXAJHKGGMAZJTJVMVUIXUVBFTVLLSNCFYOBASJXBWFJJEWVZQRJAPGDOBE");
    msg.ccount = 147U;
    msg.cnames.assign("OLEKMTASQRXKMAPZVFVELXAOUUIXHCBUORCEKRAGCYEQZIIDMTSXKYBSJWNFOYBFTMKWAV");
    msg.last_error.assign("HEYJGQSBTCBMRLBWNCZACXMNTGXVOZYDMNXIKTTCQGZDXTKRHLVGSODQAWFJSDJPBUSIPURBLCNRFUPQE");
    msg.last_error_time = 0.0698387824805;

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
    msg.setTimeStamp(0.475395004414);
    msg.setSource(56133U);
    msg.setSourceEntity(63U);
    msg.setDestination(57314U);
    msg.setDestinationEntity(58U);
    msg.mcount = 27U;
    msg.mnames.assign("XMBNAADRRFDKFDDSGTKTYGIXRVWPKTZOQOGILOTEZLUUHKZQMRJTWLCUAPHUZQGRJDLXJNLNHVGIIRHTAFNLSBZYPZSDNXBVFYAZTGQKPDJYCSCFRCSMRBGHHAHTMSLBQHFMCBYYFAGXVOICPSEULCRIENQTEWPOMDSTJIWUMMSHWUESPKKVINVZBFPAQKAOMEVWXJOBBZVCYPYXXKJOEQDJWWLNRUOAWNQQDIJGKUFVCFO");
    msg.ecount = 40U;
    msg.enames.assign("GZJBQYUUYKCMPWUFFXAPGQGNNEQCCZRUQSKIBEEKCQAYMJXLFUTATPNGITLMLBQCZGRJIEUTOLBROROHRDCWCFBEFLOIETVTWKXRYIVFZCGUOEQDBZLNBMEPFWNGSKMWPWAVHXDXQSOXXZNRQDSXCPEHKAMZJYRVEBHWXDLNGHYIPYTJPUJHTMIZLNWKVMSVUJCSOVRFSVIURAOKAHKTISBMBNZHIODG");
    msg.ccount = 222U;
    msg.cnames.assign("XFTYQNJPOTTDGJRPVJMCDZLNBBGJQHHCGUCOYYFQBPVUEBWUXALRWZVXUKRFZQPGGMHOFEHBMEPSVJQCICIPIZJWWZOSJOXTIX");
    msg.last_error.assign("JNRIETUCGXPDZWOZDIXVGEVUPOAOLHBPQCFBBFNYCYVNQIPLHASKNJLSKRZNGEGUCABYZBWESXGZHVRWYPQWHQONHFWLUIFCEYNVFKKRKUMCFBZBDCRZWUQMDPNFOSQZCUMNSEDLVCATG");
    msg.last_error_time = 0.0627288268435;

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
    msg.setTimeStamp(0.683322044903);
    msg.setSource(33063U);
    msg.setSourceEntity(233U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(30U);
    msg.mcount = 32U;
    msg.mnames.assign("VZXNSODWQGSSSOWMNVJLDDFDILRBZHYNIXXMFCM");
    msg.ecount = 162U;
    msg.enames.assign("XQBIOOAUKITFUSEDHZIEXXMTJRRQMUZPWDGZTXDLXCNMRZQBXGHHBZEAQNBBKZKMNWTCAFJGCARECBVWIVSVAMJDTEIFSCPOUPUKHVYMWLSNPPXUNKFDGFJKPLDZOFGXPYTZFPANRUQZYREQYAMMHWYNHWVLYTJYKLLVVPYTOSIGHOEKWNROXBQLDCQATCIJGPBZWJJGQXIABCUOMCYLLDHLVTAHSCKFIEWRKMUSJRRDGSOSYSNJWFIDOFVB");
    msg.ccount = 84U;
    msg.cnames.assign("RQBSTCRKMITIBLLPOJJIUYEKNCNNPXMXVAZCAMXCJIUYAQRWNSAJTLSOBLSHYRVXYLGQHIAERCFTJHRUVGMQVWTNHWWZFPIQGOXUXBZIZDKPKRWCNVEFBQAZAOLZSPHLTMSMHBEKSJIDEO");
    msg.last_error.assign("JSXIFWSWMYTTDGOHKYUZKKCFAHUADUDYKUWSJNESWMPZOIQXTEJEQKQOAQHDURXZZVSCNGQGSBEPCUOZPHIRFEMCANGEROLFYXBNMRJIANPBLPAGQVJULYNSQCVNQTWIBJBXAFVAVRZHJGDLL");
    msg.last_error_time = 0.934030357263;

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
    msg.setTimeStamp(0.0442017533675);
    msg.setSource(38544U);
    msg.setSourceEntity(85U);
    msg.setDestination(45118U);
    msg.setDestinationEntity(167U);
    msg.mask = 129U;
    msg.max_depth = 0.704773500735;
    msg.min_altitude = 0.896705189484;
    msg.max_altitude = 0.664573686539;
    msg.min_speed = 0.418507415477;
    msg.max_speed = 0.21990084641;
    msg.max_vrate = 0.8797509462;
    msg.lat = 0.465760389717;
    msg.lon = 0.707570964554;
    msg.orientation = 0.569873547235;
    msg.width = 0.327265080101;
    msg.length = 0.431493042266;

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
    msg.setTimeStamp(0.424344193829);
    msg.setSource(22422U);
    msg.setSourceEntity(236U);
    msg.setDestination(37165U);
    msg.setDestinationEntity(100U);
    msg.mask = 31U;
    msg.max_depth = 0.144187743268;
    msg.min_altitude = 0.136567478892;
    msg.max_altitude = 0.408576206567;
    msg.min_speed = 0.989697470017;
    msg.max_speed = 0.240129297029;
    msg.max_vrate = 0.967511032608;
    msg.lat = 0.698199967413;
    msg.lon = 0.874602720243;
    msg.orientation = 0.682837982026;
    msg.width = 0.704328112589;
    msg.length = 0.287709054846;

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
    msg.setTimeStamp(0.504315433604);
    msg.setSource(61498U);
    msg.setSourceEntity(187U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(249U);
    msg.mask = 86U;
    msg.max_depth = 0.879148226554;
    msg.min_altitude = 0.175505644375;
    msg.max_altitude = 0.0643074375023;
    msg.min_speed = 0.421689180301;
    msg.max_speed = 0.0716697635583;
    msg.max_vrate = 0.872215009501;
    msg.lat = 0.0370028589768;
    msg.lon = 0.986694386089;
    msg.orientation = 0.240454585951;
    msg.width = 0.116502617962;
    msg.length = 0.266176719038;

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
    msg.setTimeStamp(0.406411518686);
    msg.setSource(16813U);
    msg.setSourceEntity(24U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.674295897203);
    msg.setSource(60271U);
    msg.setSourceEntity(65U);
    msg.setDestination(56922U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.389690202652);
    msg.setSource(44781U);
    msg.setSourceEntity(4U);
    msg.setDestination(15436U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.738072770721);
    msg.setSource(57571U);
    msg.setSourceEntity(192U);
    msg.setDestination(53074U);
    msg.setDestinationEntity(126U);
    msg.duration = 58580U;

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
    msg.setTimeStamp(0.967174481866);
    msg.setSource(63994U);
    msg.setSourceEntity(97U);
    msg.setDestination(42451U);
    msg.setDestinationEntity(223U);
    msg.duration = 38665U;

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
    msg.setTimeStamp(0.317346761504);
    msg.setSource(11847U);
    msg.setSourceEntity(224U);
    msg.setDestination(37483U);
    msg.setDestinationEntity(93U);
    msg.duration = 45739U;

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
    msg.setTimeStamp(0.334637276474);
    msg.setSource(48729U);
    msg.setSourceEntity(29U);
    msg.setDestination(52622U);
    msg.setDestinationEntity(248U);
    msg.enable = 11U;
    msg.mask = 3584092716U;
    msg.scope_ref = 3797316328U;

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
    msg.setTimeStamp(0.763607617263);
    msg.setSource(64046U);
    msg.setSourceEntity(67U);
    msg.setDestination(40611U);
    msg.setDestinationEntity(65U);
    msg.enable = 5U;
    msg.mask = 3782024416U;
    msg.scope_ref = 3038024322U;

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
    msg.setTimeStamp(0.0564778647687);
    msg.setSource(33311U);
    msg.setSourceEntity(144U);
    msg.setDestination(48622U);
    msg.setDestinationEntity(105U);
    msg.enable = 111U;
    msg.mask = 659892534U;
    msg.scope_ref = 2447972208U;

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
    msg.setTimeStamp(0.847048348932);
    msg.setSource(14771U);
    msg.setSourceEntity(10U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(182U);
    msg.medium = 232U;

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
    msg.setTimeStamp(0.501000640604);
    msg.setSource(41881U);
    msg.setSourceEntity(247U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(198U);
    msg.medium = 227U;

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
    msg.setTimeStamp(0.981382765023);
    msg.setSource(46686U);
    msg.setSourceEntity(59U);
    msg.setDestination(31860U);
    msg.setDestinationEntity(141U);
    msg.medium = 169U;

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
    msg.setTimeStamp(0.143386154508);
    msg.setSource(53262U);
    msg.setSourceEntity(22U);
    msg.setDestination(10960U);
    msg.setDestinationEntity(8U);
    msg.value = 0.305031848657;
    msg.type = 161U;

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
    msg.setTimeStamp(0.416269393524);
    msg.setSource(18989U);
    msg.setSourceEntity(176U);
    msg.setDestination(47494U);
    msg.setDestinationEntity(250U);
    msg.value = 0.319041204218;
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
    msg.setTimeStamp(0.605800425262);
    msg.setSource(50508U);
    msg.setSourceEntity(6U);
    msg.setDestination(138U);
    msg.setDestinationEntity(48U);
    msg.value = 0.564618197821;
    msg.type = 109U;

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
    msg.setTimeStamp(0.0960786565186);
    msg.setSource(35459U);
    msg.setSourceEntity(132U);
    msg.setDestination(9330U);
    msg.setDestinationEntity(20U);
    msg.possimerr = 0.802435593726;
    msg.converg = 0.862781419384;
    msg.turbulence = 0.469823651601;
    msg.possimmon = 178U;
    msg.commmon = 176U;
    msg.convergmon = 57U;

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
    msg.setTimeStamp(0.345882340046);
    msg.setSource(26016U);
    msg.setSourceEntity(193U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(99U);
    msg.possimerr = 0.780918096801;
    msg.converg = 0.313264751445;
    msg.turbulence = 0.992748701039;
    msg.possimmon = 251U;
    msg.commmon = 198U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.813468568514);
    msg.setSource(51498U);
    msg.setSourceEntity(38U);
    msg.setDestination(29003U);
    msg.setDestinationEntity(149U);
    msg.possimerr = 0.660321062144;
    msg.converg = 0.0998883032215;
    msg.turbulence = 0.614998482884;
    msg.possimmon = 196U;
    msg.commmon = 48U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.0313516570498);
    msg.setSource(44271U);
    msg.setSourceEntity(251U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(91U);
    msg.autonomy = 163U;
    msg.mode.assign("OTAZEGGRNYCASCEENEEYVKUNMUJWWZTCIKRIIWRJKHYTGRXDVZPUMBQZULSYPHGGXLTCBPTDVZDQDWPDLPHBCTVAAOULJSLLZKRNYAHDEJPSDNQNFWJNMAYWPKKIYGEONTSFLOMDOHXBUUOLVAESEWUCLDXKMPQXYCZAJRIWR");

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
    msg.setTimeStamp(0.727397659628);
    msg.setSource(5514U);
    msg.setSourceEntity(142U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(210U);
    msg.autonomy = 213U;
    msg.mode.assign("AVHRBWQQNQFANDS");

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
    msg.setTimeStamp(0.691184437979);
    msg.setSource(35363U);
    msg.setSourceEntity(200U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(82U);
    msg.autonomy = 46U;
    msg.mode.assign("RYJLLCLHWTIEWEXHVSSKBDAVYYOGMRRPINRJVNSFLQPIWSCGCTQDUBYALVRMAZGAMYIOEMUHPXEJTONAUTCFSZNDFSKIQYJHHBDEHDQJAIBTWCOVAKBAGXQIEHNZOGOVBEYHLDOMDZQXYCKJIZAGRGTYCNTWXBMTKWZBUPBDPUTUUQQSR");

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
    msg.setTimeStamp(0.526334921644);
    msg.setSource(19339U);
    msg.setSourceEntity(194U);
    msg.setDestination(31986U);
    msg.setDestinationEntity(146U);
    msg.type = 119U;
    msg.op = 7U;
    msg.possimerr = 0.621292083154;
    msg.converg = 0.65281757139;
    msg.turbulence = 0.41241996247;
    msg.possimmon = 215U;
    msg.commmon = 76U;
    msg.convergmon = 242U;

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
    msg.setTimeStamp(0.553551255025);
    msg.setSource(60656U);
    msg.setSourceEntity(13U);
    msg.setDestination(6146U);
    msg.setDestinationEntity(240U);
    msg.type = 135U;
    msg.op = 186U;
    msg.possimerr = 0.228833114767;
    msg.converg = 0.205250032222;
    msg.turbulence = 0.791297790962;
    msg.possimmon = 12U;
    msg.commmon = 189U;
    msg.convergmon = 12U;

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
    msg.setTimeStamp(0.847768311691);
    msg.setSource(6949U);
    msg.setSourceEntity(246U);
    msg.setDestination(28686U);
    msg.setDestinationEntity(138U);
    msg.type = 172U;
    msg.op = 207U;
    msg.possimerr = 0.379615671931;
    msg.converg = 0.963337845509;
    msg.turbulence = 0.977778552183;
    msg.possimmon = 185U;
    msg.commmon = 89U;
    msg.convergmon = 112U;

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
    msg.setTimeStamp(0.600535232314);
    msg.setSource(22223U);
    msg.setSourceEntity(214U);
    msg.setDestination(48176U);
    msg.setDestinationEntity(250U);
    msg.op = 121U;
    msg.comm_interface = 104U;
    msg.period = 52144U;
    msg.sys_dst.assign("KBBWGBNIOPNVKJYAUOXRUACYXSENBFISLDISKVRJQZQAVMDQCOABFPQNWTOVLZZDNSAXJKZORMDNNBCBMNTXA");

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
    msg.setTimeStamp(0.641260186319);
    msg.setSource(6606U);
    msg.setSourceEntity(228U);
    msg.setDestination(26507U);
    msg.setDestinationEntity(130U);
    msg.op = 156U;
    msg.comm_interface = 47U;
    msg.period = 25194U;
    msg.sys_dst.assign("MOWFOGYXWYROHALPKBENBMEZSRUPLSVNSSDDOWVGGNZQFSNWXAQRHSUMJFQROTPXWSFLMMWTWKCGPLQVPUTFUHBNEEHEEJJCEAJQKNBXLALEKCIDZCLBUCQDZIBYVGPBAYVIUYHVOYMJZQDXEJFHTVATFGIJMZ");

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
    msg.setTimeStamp(0.762623341713);
    msg.setSource(7974U);
    msg.setSourceEntity(139U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(25U);
    msg.op = 0U;
    msg.comm_interface = 218U;
    msg.period = 27362U;
    msg.sys_dst.assign("SBWUTZZWTTONQDQBZATHBAZYMHVFQKKIMXHAYQWQEIHDWMOSVELSILRFZESTKBKP");

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
    msg.setTimeStamp(0.187504876268);
    msg.setSource(4831U);
    msg.setSourceEntity(131U);
    msg.setDestination(30346U);
    msg.setDestinationEntity(89U);
    msg.stime = 1310417942U;
    msg.latitude = 0.457703615583;
    msg.longitude = 0.758349738828;
    msg.altitude = 31363U;
    msg.depth = 55282U;
    msg.heading = 48769U;
    msg.speed = -24286;
    msg.fuel = 19;
    msg.exec_state = 72;
    msg.plan_checksum = 10700U;

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
    msg.setTimeStamp(0.0891129776986);
    msg.setSource(5639U);
    msg.setSourceEntity(32U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(44U);
    msg.stime = 3054025855U;
    msg.latitude = 0.248625574206;
    msg.longitude = 0.980413865621;
    msg.altitude = 64353U;
    msg.depth = 19206U;
    msg.heading = 54642U;
    msg.speed = -6606;
    msg.fuel = 75;
    msg.exec_state = -59;
    msg.plan_checksum = 44862U;

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
    msg.setTimeStamp(0.141743526117);
    msg.setSource(6808U);
    msg.setSourceEntity(195U);
    msg.setDestination(62270U);
    msg.setDestinationEntity(176U);
    msg.stime = 2726032800U;
    msg.latitude = 0.427926567104;
    msg.longitude = 0.855706186217;
    msg.altitude = 27146U;
    msg.depth = 28872U;
    msg.heading = 5063U;
    msg.speed = 6791;
    msg.fuel = -102;
    msg.exec_state = -81;
    msg.plan_checksum = 19977U;

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
    msg.setTimeStamp(0.0785944292145);
    msg.setSource(7641U);
    msg.setSourceEntity(42U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(154U);
    msg.req_id = 8433U;
    msg.comm_mean = 47U;
    msg.destination.assign("VWMXKHLSWNHHDZVVTFIIMEQINTCQPLQSTHWVJMQYDZFJEDDWLYNGBMXXMDCHJ");
    msg.deadline = 0.0772345599423;
    msg.data_mode = 224U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 59155U;
    tmp_msg_0.lat = 0.223549580166;
    tmp_msg_0.lon = 0.563408014244;
    tmp_msg_0.z = 0.491616389109;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.speed = 0.994161666934;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.syringe0 = 87U;
    tmp_msg_0.syringe1 = 57U;
    tmp_msg_0.syringe2 = 64U;
    tmp_msg_0.custom.assign("FDQQLJYIWLEWWIVHRPVPCEQHJIZMOCWQHQMSBAMDNDFCCAMZHTAKXNPVSTERILJBROFJAFLWXUYOVOPTNRMCSRIDISGNGBGPJRLKWQHFZBL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GKEZHCZVXZESERBIDWZUPWRJIKVYHQQZKIFNHGXFBIQYOOMUQMBLRHQFFCCWHLDFHQXRTJJLJVDFVYOUNITNYDPLXZFNYNXNSUCUAHUOWVRNOGFSOATXADJYKBBVJTKWBMRWLQPBLUNURJTZDMZRQWUWFYJHAPGOKWACQEDSIKDVBSMMHDGALXSGCJGAIASEILSOKLOVPSXQNXSPRKTJVWEYPMBMCEOT");
    const char tmp_msg_1[] = {54, -7, 24, 113, -16, 76, -63, -59, -35, 99, -69, -74, -35, -16, 86, 10, 5, 103, -54, -56, -52, 47, 87, -115, 53, 38, -53, -12, 101, 68, -81, -54, -82, 8, -85, -84, 79, -85, 64, 49, 29, 0, -126, 3, 108, -99, 17, -24, 11, 51, -62, 114, 25, 109, -23, 59, -103, -72, -43, 76, 5, 106, -55, 96, -65, 90, -101, 4, -123, -73, -23, -9, -81, -38, -27, 31, -2, 35, -29, -92, 23, 38, 112, -19, -70, 50, 14, 47, -27, 69, 9, -76, -127, -122, 8, -23, 37, 11, -127, -64, -68, -8, -1, -14, -126, -65, -42, 20, 46, 100, 123, 32, -49, 60, 66, -53, -32, -113, 13, 14, -34, 83, 84, -109, 50, 33, 47, 62, 112, -6, 98, -80, -120, -127, 55, 61, 113, 59, 44, -25, -118, -106, -96, 80, 5, 75, 63, -16, 39, -94, 68, 88, 55, 61, 97, -15, -61, -23, 93, 43, -92, 15, 115, 20, 104, 43, -30, -57, -60, 96, -115, -57, -10, 19, -101, 53, -2, -29, -51, -22, -122, 109, -43, 67, 56, 98, 67, -44, 104, 104, -41, -77, -36, 119, -73, -96, -63, 24, 93, 42, -114, -37, 29, 40, -29, -80};
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
    msg.setTimeStamp(0.175829836083);
    msg.setSource(274U);
    msg.setSourceEntity(25U);
    msg.setDestination(23358U);
    msg.setDestinationEntity(69U);
    msg.req_id = 32119U;
    msg.comm_mean = 14U;
    msg.destination.assign("NJWJIBDJSRSQUGBXWWZLRTMIHCVXTOBXKEWSVZGAKRBHAXGERCAYUKKLIDFROWWPWXCXQNNEHPUWMOOMSEDZHJTBQHMYFCPUYFNYVJRMEPTDO");
    msg.deadline = 0.635374951255;
    msg.data_mode = 159U;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.096075532272;
    tmp_msg_0.y = 0.0496731351362;
    tmp_msg_0.z = 0.947665458549;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SLIQKBFRPCPEESRGKLWDSQPPTANYVCTRQFKTWAPVMBZOXSEBZCOOUVDYMVPZYNTAZTIXCLXPBOJGIQZZHUJLTAHIFCQEDAJSIYEBSYNRYRDRMNUITDGRHJMMBULVWEFWIULTKJZDNMGNNCASGPELGZWWYHTAF");
    const char tmp_msg_1[] = {-79, 30, -128, 104, 61, 26, -12, 63, 51, 92, -25, -14, -50, -9, -38, -31, 70, 10, -108, -34, -112, 77, 12, -117, 96, -19, -123, -66, -36, -80, -31, -43, -92, -92, 124, 4, 101, -78, -107, -9, 113, -112, 38, 75, -38, 113, -89, -13, -94, -80};
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
    msg.setTimeStamp(0.831104581461);
    msg.setSource(42882U);
    msg.setSourceEntity(81U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(150U);
    msg.req_id = 41034U;
    msg.comm_mean = 17U;
    msg.destination.assign("QCRQQVTBRGGFVBACQXYBHJBACWPZRZNJRWEVNIXAJPWIJKCFJCFHSPLLZZIMAOXOKPSTXKYXVG");
    msg.deadline = 0.646563451772;
    msg.data_mode = 7U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.350101156165;
    tmp_msg_0.lon = 0.0630824979385;
    tmp_msg_0.z = 0.997331787384;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.605401537226;
    tmp_msg_0.speed_units = 38U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 19257U;
    tmp_tmp_msg_0_0.off_x = 0.675860339548;
    tmp_tmp_msg_0_0.off_y = 0.015306520671;
    tmp_tmp_msg_0_0.off_z = 0.453986336046;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.942530018797;
    tmp_msg_0.custom.assign("VOTFKEITTRVQAGNNBELQBLKUDWAPXPNBYIGVWBEBMHICDSJDMWEATJKBHYRHCIIBPPTTLXPJODWOTQGQZPGUQQOKRKCAIHZZOUCSYEAEHI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PDNFUTDHNPSTVIVWFSHVXCERLAXAAAASRMXYXKRHQBIBSWGLKPIUSMKCEBQJXCQRFPFCOJNXQZHCWRUDVGYYAOKQIXDFWQTNVOAUMFBTSUQPXHWCFVKNSBLZJZLZHWFWGTGQXOMPLJZOEBKUPIGTEFEPKXYZTHMYWZNDQVHAYCUPTGHBOLEGKRBUO");
    const char tmp_msg_1[] = {-24, -111, -61, 103, 43, -24, 12, 42, 109, 19, 90, 32, -51, -115, 107, 22, 111, 43, 9, 86, -55, -93, -112, -101, -93, 77, 10, -56, 19, -123, 125, 118, -18, 99, 60, -23, -71, -83, 112, 113, 6, 20, 84, 89, -98, -95, -80, 29, -41, -43, 7, 37, -115, 97, 48, -38, 110, -30, -88, -55, -67, -40, -103, 67, -15, 56, 18, -26, 118, 123, -19, 26, -114, 7, 47, 59, -121, 45, -60, 117, -49, 79, 2, 26, -9, -13, 8, 49, -28, 119, 113, -74, 88, 71, 40, -68, 32, 44, 52, -43, 83, 102, -96, -85, 46, 22, -36, -86, 121, -16, -19, -36, -4, 98, -17, -119, -62, -21, -87, 86, 28, -75, -78, -72, -19, -4, 74, 17, 87, 102, -43, 52, 101, 18, -71, 36, -25, -93, 36, -49, -24, 118, -17};
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
    msg.setTimeStamp(0.947070311856);
    msg.setSource(64371U);
    msg.setSourceEntity(29U);
    msg.setDestination(1150U);
    msg.setDestinationEntity(72U);
    msg.req_id = 61479U;
    msg.status = 18U;
    msg.info.assign("TUEICEDWVWTYHRBDCMCKEMOAGQFWBGYKBCOHTYOYFHXXPLFDMFBGCSFVTUQNVKESNYOASRCJTSHIUZQGRNZKTMWZSNDNRDHTXJJBEVBWMWLAQPXLKIKAWGPVVDZYWSLHENKFIALJLDWCJGPXKNAXLPAAOUDHTGPQPSUUFABKDUTIFJIBOEZFNPOLYGS");

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
    msg.setTimeStamp(0.90507319481);
    msg.setSource(32609U);
    msg.setSourceEntity(60U);
    msg.setDestination(50103U);
    msg.setDestinationEntity(168U);
    msg.req_id = 23792U;
    msg.status = 224U;
    msg.info.assign("BCAKDPKLTXJCNKYBNXGEHMRYMZSDPLNSHDDKTYLOKQFRFVIPYHGZDLBCLTRWDEYWBSUAQAWWEBJMKQMEGHZRWPORVOTOHSQGZYNLZCHUUEMAKOZKBIWATRYJDQOIWVRUKJDVYZBVWJPERVLFQIPUXIGSCHFQUIFMOFSJDRBPMCJQFFPUXGGPVZUCWHWAXGSQMANEUAVEHXFJBTTCALICINXTYROJOXIFYMTHNNIXKQNSGNVUSPSJA");

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
    msg.setTimeStamp(0.211911438091);
    msg.setSource(36652U);
    msg.setSourceEntity(81U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(210U);
    msg.req_id = 21664U;
    msg.status = 26U;
    msg.info.assign("YYRXOKTHXMHMTAVKACBURAVWYHTUCUPVRHJWVYNJSRHESBJIOSCVKFXEQGNXWIBMDZPAOTDGGLMKBRZCQUDJEUTQIZIDNCIHKDQEBJYVTABIMLQSPHRDCHPZQNFZWFNZNOJKVALMBLECBSGECSWMMPULXGYKQESAOZDGPHWYFABKNGXRGMRODDEU");

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
    msg.setTimeStamp(0.538528493658);
    msg.setSource(26026U);
    msg.setSourceEntity(41U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(181U);
    msg.req_id = 18392U;
    msg.destination.assign("LRCCZOZGZWQJUBKDQYQNKGYRNBNMNLLBVCGYFPASJAQZBQITWURVUZJOPBEFUVXRLSBOMJDKJKFZPAIGRLWTSSIIPFYGIDWHHOCVCLZVKOUQXOUTBGYSPDTDEMCCXZWASWVYADJCNFSQROLMPFIPGBUXLHAXX");
    msg.timeout = 0.70467941341;
    msg.sms_text.assign("UVFGVDRKWQAGUTTEFYHOCNUYIQSRYSEEOOAEORGRXTBICOXCJMXZILPZFNFCPMDLHNRCYIITMFGIGFEALMSVHQVALXQFACSHDZHLRXMHIBZOFBBBYOCWNMRTT");

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
    msg.setTimeStamp(0.0252516767112);
    msg.setSource(33103U);
    msg.setSourceEntity(229U);
    msg.setDestination(50075U);
    msg.setDestinationEntity(62U);
    msg.req_id = 16702U;
    msg.destination.assign("UPSQRENSJOOKKJNCVGAEXFLJRNTWTQHVHEZFOMJPYBAFNKUXIDJHLWQXSDCWPHHZEZYJDIZGBVSU");
    msg.timeout = 0.343491153433;
    msg.sms_text.assign("SHJMKFUXOLXICBNAURDOCOSLQTHKVMRCILZDWTRVNKNMZDBIFMCGDWAOUDNXTMPCJUUAEVIJJZBAVGEXGJSK");

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
    msg.setTimeStamp(0.121470219378);
    msg.setSource(18583U);
    msg.setSourceEntity(129U);
    msg.setDestination(27750U);
    msg.setDestinationEntity(61U);
    msg.req_id = 48081U;
    msg.destination.assign("HNZTIVMUTLIQALIJPRZPAZGJXKNFISQNHGNZBIXKHUAQCYUITENARJIGVLMXUQ");
    msg.timeout = 0.658926871863;
    msg.sms_text.assign("HEQZUCHJYHAKHGVNLDBPHLKXMQLGPVXDWRONPXUWMCBXQLBNQPSOWIDOCGYFYCMREMRYNBRVCTSLCGBDHIWQHXANIJINVZSHPZKMJZWV");

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
    msg.setTimeStamp(0.462091863632);
    msg.setSource(35831U);
    msg.setSourceEntity(144U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(60U);
    msg.req_id = 6258U;
    msg.status = 125U;
    msg.info.assign("MHYQRWEQTEKXPMUBKJATFHCBEPAXGKRVAOXLNJQVHJBNRXKAAYBCW");

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
    msg.setTimeStamp(0.431511699818);
    msg.setSource(25819U);
    msg.setSourceEntity(122U);
    msg.setDestination(37801U);
    msg.setDestinationEntity(67U);
    msg.req_id = 17971U;
    msg.status = 132U;
    msg.info.assign("HGLRREWYLWZVLDJHEMTPCRPJYOTEUNVAPTVTROFXXJPPBARZEJYVURATMOIGBVGLWLVSZVXZQSZILIWCCGNASYUGREACSDQFBOXJKTUTQXFAZUZNTEGFVNWJBNSMHUPWOWMDGXEHDRKUSSVKXNLGDDYWSCFBHDJMLKBIMJRXTBQZPQLOHUYNPUOBCKYQXCNBMEHKHSENONGAMKFCDGOPQTWXFIJDRALVAYHEJKD");

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
    msg.setTimeStamp(0.923904229658);
    msg.setSource(24572U);
    msg.setSourceEntity(101U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(109U);
    msg.req_id = 22209U;
    msg.status = 112U;
    msg.info.assign("GDNVJQYKXET");

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
    msg.setTimeStamp(0.3708003197);
    msg.setSource(62118U);
    msg.setSourceEntity(145U);
    msg.setDestination(59756U);
    msg.setDestinationEntity(124U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.0132367441655);
    msg.setSource(4431U);
    msg.setSourceEntity(26U);
    msg.setDestination(31963U);
    msg.setDestinationEntity(197U);
    msg.state = 58U;

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
    msg.setTimeStamp(0.0820856449378);
    msg.setSource(32323U);
    msg.setSourceEntity(94U);
    msg.setDestination(65177U);
    msg.setDestinationEntity(167U);
    msg.state = 248U;

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
    msg.setTimeStamp(0.432991770343);
    msg.setSource(58197U);
    msg.setSourceEntity(19U);
    msg.setDestination(33485U);
    msg.setDestinationEntity(160U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.151847156822);
    msg.setSource(40869U);
    msg.setSourceEntity(142U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(32U);
    msg.state = 41U;

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
    msg.setTimeStamp(0.570448891674);
    msg.setSource(49822U);
    msg.setSourceEntity(63U);
    msg.setDestination(4329U);
    msg.setDestinationEntity(155U);
    msg.state = 100U;

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
    msg.setTimeStamp(0.195820050504);
    msg.setSource(31455U);
    msg.setSourceEntity(80U);
    msg.setDestination(36006U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.414627375644);
    msg.setSource(268U);
    msg.setSourceEntity(214U);
    msg.setDestination(54157U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.360855366767);
    msg.setSource(11267U);
    msg.setSourceEntity(49U);
    msg.setDestination(49928U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.461019113148);
    msg.setSource(65119U);
    msg.setSourceEntity(100U);
    msg.setDestination(5866U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("RFINZBVKEHDWKGSHYOLUYVOEPMMHRSVTJYRJWCXXOQTHCPXJUZDQIKJZJREDSPVVWAXTQHZEAMTYDADWBCSFSQ");
    msg.description.assign("VOSJRPCWZACTOCLPZIMTSBBKSKTXZZJIYUJZJACVNWEQYANAPFMQMWHYCMBDPMSIQWHGUBKFXTTMBIKOSUIUJLDUYHTCKBNCRVIDZGARHAXSDWHNTZGJGJTTRODLXFLRJIELPROZKXUYVCZWLSDECBYNEVBHQNMMVEJEWVMUUXRDFVAFQAOHLRGAQQVRHNMDGSLUVEHEFXKQFRGSXONOBNIPOXOWJYPYGWFXUSEFLZHBGPCIFWYYPEKIKK");
    msg.vnamespace.assign("SWIDEPFHOQAFNFMYPPGLUSKQNBQZXVRBHNFTTRXOEASROSSDAGEUENZLEETIYWEOZTMTBJOMDJUAZNHTLXNLXUKDTWVNRCWHXVAJVMSILVCCYOIORMSXWOYTMFESBXYV");
    msg.start_man_id.assign("KMUCICXXGGRRWLSACOUYSEIOUVZNNPFOEDOWJFVBXRWJAPTDHVFKLUSYYYIJGDYETZREFWNSZHDPKAWHIDLFLKMTVHZKYWCJDCOOFIMXCFIKSXNZQMZUHQMASXNTEVYNJWCMROFHHELBBIGGPP");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("NGIAODTJOUQBNKSMFKTSHEJDXERJPLAXNKJSHKRUVOIDGEXGZJIRGAAWGVLPJPQPAAFGXDMJSPPYRMKMUCXVNEVHUOTRDUCDCHAHYTPYFGKKZEWUBNSFVRFYQTPSSAWTEBRGTVFLQGBXUWJAKCIXZEZUEZMNNRQXWDKVBOMVLJFERKVPCAHCIFMBDQWYZHOCFFZISXIIUWYQSUODCPSOOBM");
    tmp_msg_0.dest_man.assign("HJMTPTQXJDRUVAEVZCVJGQMGFSAAAJ");
    tmp_msg_0.conditions.assign("GKGPWOTFMCPNDTDQHZDACBQXEYJOGYXMNJPLLXWRZPVMNUIDHVCHKKYTPQYMZPVZOLYKFXUBNGSNSVAOJJKIKCCRSHDBJEHKJEMWPLRVEKSYZQXUDQGWTXQNJERHZAMAZKMQNWYBNJVMNDSFBIRDCWTAWIXELDRAIV");
    msg.transitions.push_back(tmp_msg_0);
    IMC::ReportedState tmp_msg_1;
    tmp_msg_1.lat = 0.548476758847;
    tmp_msg_1.lon = 0.262497703229;
    tmp_msg_1.depth = 0.782581798326;
    tmp_msg_1.roll = 0.571872235337;
    tmp_msg_1.pitch = 0.0756882330914;
    tmp_msg_1.yaw = 0.076721759757;
    tmp_msg_1.rcp_time = 0.433726116218;
    tmp_msg_1.sid.assign("ISVVRHYYADIWGTSKGDGBZOERPKTFUQRYXGPKPQAXYHOOLMUWO");
    tmp_msg_1.s_type = 47U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EstimatedStreamVelocity tmp_msg_2;
    tmp_msg_2.x = 0.552916894471;
    tmp_msg_2.y = 0.741723336164;
    tmp_msg_2.z = 0.492373134148;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.0268874025423);
    msg.setSource(47141U);
    msg.setSourceEntity(166U);
    msg.setDestination(38638U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("VUDXXLZASITPFNUXLBPWKQMKRGPEJZXVMMQFIJXIHWBEJOCCYPFZCCWDTAJGODTBNMVNZAHALUGVBFFBGZAZFQEVPAJBUMCHLXMVSOBSLVDIANDZVJROSYDRCJWWNMGRKHBPULYMRLSOHVQQXTYYEAQIYDHTPULZTGEFTVXBDESRSYYSSFPIKEEMXTG");
    msg.description.assign("FAMZAHEGRKJJUYRSYQTUEUBHOLXVHKMSKSXEOWQXIWOJALPAFEGJGQCPCNLBZLSMVTQCFDBJYZFTCIKHHAIILVHBZXPAOHSXWATOYSJVZNAVLMNSLMPYLBDLMGHWOGABDIWAQZIQQIOFNTCRDKWFREJUMUSUFVCZERXWIHEVOGBGZINFTMBKKCUOTPNCCKK");
    msg.vnamespace.assign("GKCBVDRYCMRAZLAENJVNDHFWVIQARFKYZJFNPOCGHMX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RXZJXEFFUULAZJMZLFONRYBTPARNESEBQDYGXZJGRTDURXJYRFPNSDTFNFAMNFMXTITXUOKIXHCBGDSJWBPWUOOYSDVGQXMFGBVAZPZECPQGAYHHQAJXLIDLHHYZCCKNDHNEGMPKCHDBTPPRGHQRWMNUWVZAISZORISYKNWVWZTUQVOIVMIKCCGQJFYULBLLTPKSEHYQWJBVURIEEV");
    tmp_msg_0.value.assign("VTLFGZOJHABMWBUISDFTTWZWIERVSQOYLBAUEHAEV");
    tmp_msg_0.type = 197U;
    tmp_msg_0.access = 137U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PCAEZMMTSTBNTNIQPFQHYPJRXQOIHXYCKKLXIXCNNGQOREHMREPRSXSBQHFQVONULZSDCKWPVYKDLNQPOOVFSLOZFYFQXGLWLWDCFHBRRLVUIRBBDSKJKXCZFSUWYTAUUEYCGVIYJYGJNACDXKDVPTHAZCDGLGEMLVUMBEOMMOKQWSDHZ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QULEROZOTSLVXZGWDWVLYPCHPNLRSABUDOMFVGKSNNGDMNGEVKQFIHKQOBPKRRGQHJVSBCWYFLWYFAXXPVVMUNPCESVDRGWKQOOAQJBGFGRJHENBATERMUPHYDWJDPLPMJNQYFBYJCXIF");
    tmp_msg_1.dest_man.assign("PRKVNXOYYVIEFGHBPTIZMUVAFDCOTASEXUHWDDUBGDQJEPIZYNDRHSMMWCLBFRBLAWVEYAROSFIOUNGVBE");
    tmp_msg_1.conditions.assign("PAPDYRUENYLEFJXLDNDJBKXZARSZQKAMLFSODTKUQLJYLOKDPWIVHCUCPRZPJOWQLUTTBFISJXGNYLWGMQHQHXMRYJFANIGJDMKMHSVGSBVZTAYSZOFFVQBZKJQYLBEQWTXPBJKHMIROIVZTVV");
    IMC::DevCalibrationState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.total_steps = 136U;
    tmp_tmp_msg_1_0.step_number = 214U;
    tmp_tmp_msg_1_0.step.assign("ETJTVOIJMCMKJBEOOKKNLXZZFNUCUWHMKGRNDFZNJTNDKVITVBPDKZERYCSHPIDOBJNGBAMZWQXRGVYQPTAEFAAIJMVXQYHVLAHQCPHDNUSGLBKEQWRNWTOBCBCUWMIOOBSXICAABZSXMAVRALCGWIWFG");
    tmp_tmp_msg_1_0.flags = 246U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ImageTracking tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PopUp tmp_msg_3;
    tmp_msg_3.timeout = 38471U;
    tmp_msg_3.lat = 0.888667741312;
    tmp_msg_3.lon = 0.533586394963;
    tmp_msg_3.z = 0.341498802691;
    tmp_msg_3.z_units = 62U;
    tmp_msg_3.speed = 0.443637739578;
    tmp_msg_3.speed_units = 14U;
    tmp_msg_3.duration = 30284U;
    tmp_msg_3.radius = 0.262692957284;
    tmp_msg_3.flags = 172U;
    tmp_msg_3.custom.assign("NZJRUKNMLGFFEVXWAEIXKECQJKBMDVNAVGLMQWOOLNQBA");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.835657048808);
    msg.setSource(19614U);
    msg.setSourceEntity(51U);
    msg.setDestination(6470U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("VBVPWFJPJHPYDNSDCAIMMQLZZMDQEKFMJ");
    msg.description.assign("TFZMFHVNPTJYZBMGLTJNHCMOIULJYLFDMXUYEKYYZWGWRHSESNVSMHLVUPHCJHSOXITS");
    msg.vnamespace.assign("RIULLSOGMUMRZPGLTXDKTUHIYSZFXNCLJWYIVIPQUHCCVZRAPIGEXQVXUMXCGIWADBEYXBJTNVDQLOTPPYZIUBCCFHGDWCYWESHQGKXZYDBWEQRDKEKPBENEWH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ETMIHKFQMKDTLTYXBLKTANWHYDFQKJLAMXVZMLPMBHPSOQDGJYIVNCFNRAINPZXNVUDUWXACZUFQPBGCRMSJHPOAXCWBOKWEECKVELIIGPUEWBJFUBBUYYNVDYEKOCXASIBUJLDATBEMDACTHKKOGTRPLVZUOINHLESOZZGNFT");
    tmp_msg_0.value.assign("TQKLERJXOKCQGNFBMXXHPACRMEASKRBOPPOPIKGALSPKWCAFOFJSITVUVFLELLOBXXYICNBEPSAMCZMFYHVJGWWTXDTGDFMPGRO");
    tmp_msg_0.type = 112U;
    tmp_msg_0.access = 97U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NXXAYHIHEQMGQSAECRZWPJUQZIKTEABHPVIKOCMZNVXLSKMPPWCLSHXNMFFSEMUEDKBQADSJQFKSLHGYGFHPTQDWGPORYTNEAKPUXYASRMBFFSJCOMLQYINJRWXIROJJKEUEIUDQNUCZXJTZDZWZCFHBSQZLYTLXUVGTGUTJEXDZKGCY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ARBCXXFBDHHJCMYTKBLOJYEQIEJUFPXACVMKOLDRIYNJKBFCTLWAKJQFIFXZZFSUPXGHZBZVJWPKPCQ");
    tmp_msg_1.dest_man.assign("SDFTJPDPSNYKGRVBMYFHZNPEGATGMMUMRPPVAMUUFFUII");
    tmp_msg_1.conditions.assign("IUXSXPCNGWFZXFPHGPPKJDBZEALOYGFAWMQTOIZYABTYTVOOXUREFKLHCLEHSSVQJVIQWAUUFOFJTZVCDHMUJGDYVIDEVGPDMQQTUOSLIFKXKNBOBWWPKUSGXTAIRXXRDQGCDSBQPTSVMLOTDMRIZPYAJNUFZMREYHPJDQHFWBNBTZHZN");
    IMC::CpuUsage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 219U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::StateReport tmp_msg_2;
    tmp_msg_2.stime = 3335135386U;
    tmp_msg_2.latitude = 0.170520849456;
    tmp_msg_2.longitude = 0.881804499369;
    tmp_msg_2.altitude = 55304U;
    tmp_msg_2.depth = 37312U;
    tmp_msg_2.heading = 27140U;
    tmp_msg_2.speed = 1467;
    tmp_msg_2.fuel = 49;
    tmp_msg_2.exec_state = 6;
    tmp_msg_2.plan_checksum = 16039U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.745015166349);
    msg.setSource(56239U);
    msg.setSourceEntity(32U);
    msg.setDestination(20591U);
    msg.setDestinationEntity(22U);
    msg.maneuver_id.assign("BVSSZRFVUEVAMISJYRMATCYEHKHVUMAIKILMMKYTDJYDISZWCNXTSGAJACLTVTRBXCRCCZGOPJPRVEONFHZAXRZXZMQGNORLXQIEWKTIVQFXSPJTXUMAUJKDWBTYGCONMBFOYFPEUSUOHPJDYDAQZXDNBYENQZZHWXTINEALMQWFNKGDPKDHWJLPGFBLKOWRQIDJNYSGOVUIOJZXI");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.368468422335;
    tmp_msg_0.lon = 0.642248481958;
    tmp_msg_0.speed = 0.473987938391;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.limits = 14U;
    tmp_msg_0.max_depth = 0.669500916681;
    tmp_msg_0.min_alt = 0.681377254027;
    tmp_msg_0.time_limit = 0.188526956966;
    tmp_msg_0.controller.assign("WEBDIJPNRUHYANEKVZUQZRSPJZMTHGLSBARLJYWPSIHMOCUDGKWVGSOZFHMLUBBKNBXFMHVJPJITSGIVLSVCTYOZKJBFLSRRCGYXACPJGCDAELQDNNCVWWZVQHFVPNVDPORFYOLLUEAXDZZAOTQHANUSRGXAKGMSZAWXDMHRKTKMIUNWUQYQGKCSTWXPTQWXEIQJX");
    tmp_msg_0.custom.assign("LPECGOTZNUWXEYQJQFJHGSSPSMWEKXTCAAHKGILLYTLMBSLXWGUHNQBYGIPNHRDYZQKCDKBZHJIKFYRFFRVITXJHLLMHJWOPJRWBJMDBJKEXCMZMIJYTSQOTDNTRGZUIOWODKZGQIGNUCPVZKNQENTPAJLYYDUYMHVVACDEZQCUAMBDTVFRZLUAW");
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
    msg.setTimeStamp(0.0676647548675);
    msg.setSource(2809U);
    msg.setSourceEntity(144U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(171U);
    msg.maneuver_id.assign("RJEMHPKGHIIIXSMFMVAENFLQOCLHUQJQBYMXFDTSCYZJKQIHLNACJNKVOZIVHMMZZWRNAEJEGLVXBCPWTYCOQFRQCVPEYOCIBARGPLJWXTHC");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 14614U;
    tmp_msg_0.lat = 0.52890795518;
    tmp_msg_0.lon = 0.0346614066945;
    tmp_msg_0.z = 0.489718579211;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.speed = 0.951421259493;
    tmp_msg_0.speed_units = 191U;
    tmp_msg_0.roll = 0.0636564038658;
    tmp_msg_0.pitch = 0.944257275706;
    tmp_msg_0.yaw = 0.523363018242;
    tmp_msg_0.custom.assign("ZLAALXYJGWZTNVKGNQYEOXWMNKSKECSTLDPDPWIUXGUYDZUYPVHRGXVKAYVMMQDTEN");
    msg.data.set(tmp_msg_0);
    IMC::SetPWM tmp_msg_1;
    tmp_msg_1.id = 207U;
    tmp_msg_1.period = 3634433376U;
    tmp_msg_1.duty_cycle = 1479981777U;
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
    msg.setTimeStamp(0.902888454111);
    msg.setSource(53190U);
    msg.setSourceEntity(50U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("UQVUSPNFXQKOGDAYGGLMVPUDDLRYZTKVULBWRGSKDOORPJITHISXOQXJBPHBAXIOSBQQXIMZFSRPUMUMDHOHMWJWYCCAGHJLDENPVPXMZJUGTYFFLKFONOLTNEJBJPIYY");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 7658U;
    tmp_msg_0.rpm = 0.423612757788;
    tmp_msg_0.direction = 115U;
    tmp_msg_0.custom.assign("DMYXJNCQZKKTKAPCEXVOVEVQKZBWDMGBTEBHQQHSIRJOGGQTFLXBSCDRYAYZSAUGNEAEGKQFDAOLURKSBHNXJVYONTTOKHJDPLNCIWISTRQTIZFWYKPZHHBDIOFLSPTFCUPFTLWVJC");
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
    msg.setTimeStamp(0.904219346183);
    msg.setSource(19630U);
    msg.setSourceEntity(45U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(196U);
    msg.source_man.assign("UCHQKOKIKSBVONUDKRCEDUJWGJOBMVJSSQU");
    msg.dest_man.assign("DQFLZSCUQRONEGPKKCJNZQHZADUVOBUSBXBMZDQQLCYKATIWH");
    msg.conditions.assign("ZFWDMPTMXNDZSPWBDEZMBTXOCNUFYAJXKLYFFVGIPBJEERWPELORYJHMMHCBHSQVBDVYCLJRYIOXFLNNKZEWAXODWAHQHTWCNOJTBOIJSGFQLDECUNQPTAMHZUBLUJELOEZFKKVBTIVQZXOCUFWJQPZQHHMWRGABIZGZPCKQIUNDRQNARDVGCDASPXGSYKLKJUXYQKRCUVYTONMCVSARYRPITU");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 84U;
    tmp_msg_0.clock = 0.436551389901;
    tmp_msg_0.tz = -112;
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
    msg.setTimeStamp(0.0396085228222);
    msg.setSource(3849U);
    msg.setSourceEntity(39U);
    msg.setDestination(869U);
    msg.setDestinationEntity(234U);
    msg.source_man.assign("MVLVXMNHAFUAKIVMXUSYPFOLYSRWEXHNJPHGEQIUGXTTHSQFYIDPCEQWRLOQLMIFKFDGZSGHNJPCCKCKDHZJCLXDZJCGOAEGKMDJTJVAJNSRYWLOIMNDTSSXADHLYKDRTREPAWNLCRPHBQNFWDFNWYZVZGOIIXMWFBZOHUQXYXCJ");
    msg.dest_man.assign("BKYQJYREPVIJYWIZWXCTDKHNFIXSSKRFUJMDRHCQVIHQADYBGMFBOOUUTKZXCGPVZPWPLZRQHPZOLZMALGWXMZGDWFNWLQEQSJKJJLQAIGOTZWJEUAVHDXSWGRAZMOYXGFLPNHORJFYPROEXTPELYXRRCYFQVDGNSBTMFHAMAQRDINNVLJVMSETOQAXJNHKDCFWKBCBWXHBPSKLUCIMHSLNIUCCIZFSDEBVOTNTSNEEBTYPIYABUUUGVVEDKAG");
    msg.conditions.assign("BDHHTBIMSDFIIWKFZQLQAPSSBUQRAKFGJXVKFWORZNODGKPUGOROLTYJ");

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
    msg.setTimeStamp(0.204596738277);
    msg.setSource(54602U);
    msg.setSourceEntity(38U);
    msg.setDestination(57130U);
    msg.setDestinationEntity(98U);
    msg.source_man.assign("ILGJRAZAIZOHXRFSGQPQDVNAQUBUHONWAXVYGXUKPDTOWTCGUTBBJOKFQZWXMTAKUHDXYVAQQENZRLHNPZNMWEXOFTDEWBYHMCJDNGBCRCPSOYKNZMDYLGLFWRCOZSSEUINALMPPUWUXRYGVYCDSXPJXJBMOHEEKJLILMALFZAGCVVSEXUAFJMVMKVLKVGVZF");
    msg.dest_man.assign("OHXYALEKNVCPKQYIVKAKZZSQSQB");
    msg.conditions.assign("PHRPBPMLSIJCQWJJSDJPXCSBNLCEZTRFMOUUMKOSJBIGCZQKEDMGTYQZFIDVGLEGZGRTOEEBTKYMAPXHACAUMWWYDNSIIRUSZZHSHVJZGJASLPHRZQVIBFHUWZNTPEAIDEAMXLYQYAVJFGQBHRWDNUYQTTYGUSHNINLDBVCTGQDWECKFTXUHOKOXQHRXBKCKKXPXFALEYWFULNILNOV");

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
    msg.setTimeStamp(0.985684163852);
    msg.setSource(64708U);
    msg.setSourceEntity(247U);
    msg.setDestination(4082U);
    msg.setDestinationEntity(153U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PCOCUCEDMXZQZVONYVUUAII");
    tmp_msg_0.description.assign("QIAHGDWNOQBDMIPCTORZLWSZITWXWHDJVAYIYJEFLPSXFPSHQDUGZOSKBBTJRQKLDBCECTMKLTRLGRLVXOICHPCBXIPMYHGNSQRJZTKFJYKJYUHBCRZEDXEYDUHMUFEQWKQAXQGOVFNYBKSMUQJZOIVHSEXONBIJLEZRDVWOGCXVKPXKNRMRVJQUWAHMSRZCGYEPZKEBPPTUDCXVSNGWZLYMUCUHFSANPMFTFFUIAIJOGOTFMEGBLAWYADA");
    tmp_msg_0.vnamespace.assign("CZHHUBUXSEBEGGITNSVECMLURGEWDCGDXBUMSOULOVNLARXDZVXALAETLHQYQRNUYIYZVQPODPYASSKZCXDKHWXSRDFZSDMKQPVVIGFUFKYPPWPLUGCRACLWIWWSZQWZIZAMFYFNBYFVJUOXJILXEAZAFCTQRJKQYNBZNVVFMTEHPBHRMLYLDPBTNEOYSKPTMRIIHABXQODJGNNKWQGSQGWHTTA");
    tmp_msg_0.start_man_id.assign("SILMJUVYHSJKXCATDGPYYBJEAZZFUOIVWQJYUSNXRBPUDNWEGKXPSAMZABJYLFNTRBOPVPORMFZYNQVDHKTKTFCVRVNUBERATBOHHEOKSICTCHUNLWLSIGIEVTCWJJVVLCYEXTLPMNLQOPGKFRWKBK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NQBHIFZCUYTLYHWCWOJEHVOYTOKBFGOWKGLNEEJBUVNDKLVWUQYOHKVUDATRFZGQLWZAWARDFYAQZYSRAVSCBSIPUEVMLDAKHNGWWIUEUNZGSQTFWFEUVGRSZCNBOXMYJLLSFONVUQPXRJ");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0743385904462;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.246380841478;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.318663141445;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 2U;
    tmp_tmp_tmp_msg_0_0_0.limits = 127U;
    tmp_tmp_tmp_msg_0_0_0.max_depth = 0.062620645246;
    tmp_tmp_tmp_msg_0_0_0.min_alt = 0.997455460869;
    tmp_tmp_tmp_msg_0_0_0.time_limit = 0.796362597049;
    tmp_tmp_tmp_msg_0_0_0.controller.assign("UHAOYTLMWQFRVPSHJYFKSSOLUP");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SDAKXXUYMCGYFSZXMPDPKIKGJFBUJIGJKLRKPIZOVHBUKQOWLCPLLVNNZDMJN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::NeptusBlob tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.content_type.assign("MDULZDEUBTUVDNIUXPUKLJVOOZPTEHQWVNTHFGVIGMYBOFFZSPCOAAJJBTNZHIAGTGFVIUWTQFPGTNYUPBYNFZVWCRQQREMCMXAEBAHHVSBGFSLSBLAIHKEOKYMSXIRFMNCZJBEHQREDUSXXVDPTIKDYKRHNLCJMWGFRCZJJTDNAPVRHALOQBVWSXLKRZSQPGRNJSOWWZYBIQXCGRMFPTLWEI");
    const char tmp_tmp_tmp_msg_0_1_0[] = {-103, 113, -102, 63, 75, -120, 13, 9, -17, -78, -69, -12, 87, 18, -19, 93, 108, 91, -5, 78, 72, -61};
    tmp_tmp_msg_0_1.content.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CcuEvent tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 234U;
    tmp_tmp_msg_0_2.id.assign("CMMQGOBKNACTWXNCMQRZQWIYOXPEEIBIHACPBFBLZZVGKZBYCGYRJATUHZVNQKUJREPFOAMYEVVCMPZVEGTDFBROMUSZAAOHSZOGYR");
    IMC::PlanStatistics tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.plan_id.assign("LPHPHGBFDDWNXGRRPZXEMSGLRMLEVTJRQFBICJAODAKZHUHAVPPFDCHPUXIGRXYCECUBMTBPSUOYJVYGBKUJVVNFWSCJDONVRAPLAFGJMQXGMYLICURIIHTTJIYUWIXKGSZUQGAFNASPTZQBXYBWWZHSAEEUYBCLMZRONZFRNKOTNOILTGODFBLEKCHWWIBNVSCLQJHYFMTFJAVOZEVUEMEKNDSTPSICLOMVXAQQYKSKQYXKQMRDQEWWJD");
    tmp_tmp_tmp_msg_0_2_0.type = 74U;
    tmp_tmp_tmp_msg_0_2_0.properties = 34U;
    tmp_tmp_tmp_msg_0_2_0.durations.assign("UZHAWULHXTFQULIIHMQJTHTAOJMCZWEWZKCQNSTNSIVSFSJWPNNTFMBC");
    tmp_tmp_tmp_msg_0_2_0.distances.assign("YXBFTSBWUXKQYIORDPKKMAGEYCKESRDMNJUNASVG");
    tmp_tmp_tmp_msg_0_2_0.actions.assign("TENJUMCCRMJLQMPQLAHPXQNRENQOVBFFDESZHQFCZEGWNYUBMWLKVSOWGJDKGHNCDUGOSPTA");
    tmp_tmp_tmp_msg_0_2_0.fuel.assign("ZFPRTKPJKKFYZMQCGGOATATXJINLHGBPZLVNLIXKNLVBEYECYLBFBKQSBIVXIVPDPGAVVPIEWZCSJXRPWSQFKUUMRXUCVDVZOAAESWEDYGPXDDUOGZTUYLHMFRFJLCWOGDEJZNLQAANWLUBVKEJRIJUROFHSTQJILMGHACDXVHCZYWWYZRDPUEGDJWISRKDYXYNIOMWZOAFNRM");
    tmp_tmp_msg_0_2.arg.set(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.957581370842);
    msg.setSource(32885U);
    msg.setSourceEntity(66U);
    msg.setDestination(44407U);
    msg.setDestinationEntity(221U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PJZYNIBCITHUHRMKFHTILTTSIFDNXUQYRHDBAEXXPJTLKCDSMVFCOOADXGEUGRCPINAJVWZORDSPAEWMRLPRFSF");
    tmp_msg_0.description.assign("EXIBEYDRZXXCNNYABXKMWKUZZVHFQXLGOMFHGTUKFHEMCMDIDWWDARPRIWKWDQQORNVVMVKEASCESBOSPLQPCWZWDOJFXCANPSDZULGKVIRNPSBAAJPYHEWKPUJREJ");
    tmp_msg_0.vnamespace.assign("ILJVOQHTXVJYGYEVFCPZUUIZRNBFMRGQXOZEBNSUWRNSENYMDMT");
    tmp_msg_0.start_man_id.assign("EFYMYDNMQLYMGPWPKTJUZEAB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LXRBPTGQXUDFMCVITLFUCZXAEVGGQRLHABNNSWTDCQJPSHJRKOBWRIKMZSXCDJASVTNYLV");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 22916U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.882199951325;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.933837974657;
    tmp_tmp_tmp_msg_0_0_0.z = 0.240551762944;
    tmp_tmp_tmp_msg_0_0_0.z_units = 165U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.383997916995;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 18U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.0269174491663;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.884864479818;
    tmp_tmp_tmp_msg_0_0_0.width = 0.829491281518;
    tmp_tmp_tmp_msg_0_0_0.length = 0.683172558731;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.873420156721;
    tmp_tmp_tmp_msg_0_0_0.coff = 100U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 60U;
    tmp_tmp_tmp_msg_0_0_0.flags = 172U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HGAGYWRGICDYYLTXFRFRLLADXXYNNNDHGKXQPJPOKBRAKFFMNILLJGG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 47U;
    tmp_tmp_msg_0_1.op = 113U;
    tmp_tmp_msg_0_1.request_id = 23963U;
    tmp_tmp_msg_0_1.plan_id.assign("TKFGCXOONXBUATDBVPTOXNLHHALNKSZPBGDBZWIZYKRLWVRXBCOVXGYJQSKMDNXKEBGRKFJDSHDZWCONLMJNUCRENAOARQBUKEJDMWMGQQTMDUYTGWIZPXDSPAZAMTYUYYHZDWFDMYIYJEJSCOEGJPEGIILMYCRTYESPSPCHLHQGKQQFRIUXUIOJKFHLGLXZCWFRVJMPARCQIJVVURSMQLVHHOWWUSAVIFFFTTWBQAHUCNAVXLPFEEKNO");
    tmp_tmp_msg_0_1.flags = 41439U;
    IMC::SetControlSurfaceDeflection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 53U;
    tmp_tmp_tmp_msg_0_1_0.angle = 0.551537601605;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.info.assign("SEBRPDBLIQATVOYLZLCRPSAUEWFNDVBZYAUIFHMLCSONUWWUZQLEUVSJKSQFMXMWQABDPMRRDBVCYNZQJMQKYNLBOIOWVDMOMINDXHYHYWPPINTXCQJXOTJRQGTSHJQLULTWZFKEEFFJEKXBKAADRVPXXZLGRAVIGGJSIKGXH");
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
    msg.setTimeStamp(0.186890321653);
    msg.setSource(710U);
    msg.setSourceEntity(158U);
    msg.setDestination(10319U);
    msg.setDestinationEntity(37U);
    msg.command = 153U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FLESIDMFYIMMZNVXFHNNBKVQJTMRJWNOOXESOCGXFGPSHYIDFETPKZONDJWKSEIYWLHSZQPCUCXUTQJJPZTNYDGHVZKOVIZEMTAPQMCJGLTILIAGVUGYFAJTBPQPVDRDUXBZMAMQAYRMLQSXONLELATTDUOGYFURFB");
    tmp_msg_0.description.assign("OCHLXIJNNAXTQQNAQHHVMRQPHFDYQTURAJIJDNFPTBVUTMYZVSSUBGIEXERBQDFPECQQRLCVHGEWGUKEOYOJYWMUYDFTPOKDHRBDUKMLLATBKLLAZVUZITOAHXZOGDNCIIPBEWPZMEPCSEHNCLLQVZYRGRVGNAWJJVBTXIYWMIIBYAWJVKFGMGUGFPSDMTEZSHMCMPFYZJGLHAKOSWYOBNURWOCDNKXXCKNSXAZKLJSZEOWFSUWDX");
    tmp_msg_0.vnamespace.assign("BSRYLTCGADMMBKPTSGVORIHGIFGHBSUCVLKWDKZXAIJAHXQKBNROVJAEFULOCULEDESHYRQVORJHVZCBXSFMNXFACDJPKHPEZAWVTAWYTFMTDUVNVJSDMAMJHZWADOFQUZQPJUMSPEWYDULPHTBMTRYICBONSVCWQUNWIYWMZWXXXNEQFWUEYZRRBTDLOKNQCKFPXYYXEFGKYIXHRARNBFGCJIGPGIOPGPZQTJJ");
    tmp_msg_0.start_man_id.assign("ZVCKXFFBDJQVQZQXDHJKGMJDNIWSHJRSAHOMIVSAYJRCMQLQPRSUGYUKFNVYAUKPDILPARKVNIZJNYSJZXEQOZBXGFCCUWWVKXYRQ");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.330487059034;
    tmp_tmp_msg_0_0.lon = 0.705850300807;
    tmp_tmp_msg_0_0.speed = 0.333846680759;
    tmp_tmp_msg_0_0.speed_units = 222U;
    tmp_tmp_msg_0_0.limits = 66U;
    tmp_tmp_msg_0_0.max_depth = 0.654926212933;
    tmp_tmp_msg_0_0.min_alt = 0.39871151607;
    tmp_tmp_msg_0_0.time_limit = 0.296810197054;
    tmp_tmp_msg_0_0.controller.assign("NBALREQCAXCSWCYWNAQKTWNMOZBAZSLHAXAFPKDSPGYVUXHGNYKMIMFWXDWTRTPCITAXVABQTCZPIDUAKMCKLNOEEOHVSPNYCCYBRLKFPKJSJZTYZSOYIHGVGNPUHEVZZIZQZVEFNBIUDYGMEKSVUKFXLYLIMPBYVJPDWDRSFHTIBHGHLLUMGAEQJDTLGDFREHBT");
    tmp_tmp_msg_0_0.custom.assign("FAXCBYBNFTKEYSHXOIRNIMBJDENOMJPWZLLUSGKUHOJLKVUQKYEDOVEQKKVDHGEOZCCDORTTTORUWZRITCPDZHQMAVSWQXQHUVYUWYCSNLQPLXWINTRHXWMJEOPMJTUGNQBPGMRAEHDG");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.225967133717);
    msg.setSource(38869U);
    msg.setSourceEntity(214U);
    msg.setDestination(44040U);
    msg.setDestinationEntity(118U);
    msg.state = 207U;
    msg.plan_id.assign("TZQLJUJAULRSGMNNUOQYSQRNXQRWCIJEOKHHCAZVSEETBLHNMIRFTRHJGCJXUYCCOGTWMVFUOKYDY");
    msg.comm_level = 17U;

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
    msg.setTimeStamp(0.0557779288945);
    msg.setSource(14675U);
    msg.setSourceEntity(121U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(181U);
    msg.state = 221U;
    msg.plan_id.assign("XLESDJAWUUNEJGFNBXYGDZBCEXBLQGJQAIVUINQOPHMTWRWIDCXFXJGVUFWQAQLPRBUEESYHUWROWCOSCKLOPKHHMLEHPJZSDTBDTKZHOLZKGNVTVNCUREAAZCBIAJGIZMJPWABOIFAESXKMMPBKFISBHQOLQYYDPQATRJICSUHVYKNVRXFKIPF");
    msg.comm_level = 41U;

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
    msg.setTimeStamp(0.800191486229);
    msg.setSource(57067U);
    msg.setSourceEntity(98U);
    msg.setDestination(65197U);
    msg.setDestinationEntity(222U);
    msg.state = 28U;
    msg.plan_id.assign("IOJHFFGKVRYFLOABMHMZSNXDGYPRREDYLEXQTUINQTETKUSRBDKTEMGDCDKZCMGCPTCOFFMWNQKIZXJHPHOVXRZSXATINYBFWJRVAHKAWDVJDWBPJEPYFSV");
    msg.comm_level = 216U;

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
    msg.setTimeStamp(0.276779545137);
    msg.setSource(6729U);
    msg.setSourceEntity(85U);
    msg.setDestination(4816U);
    msg.setDestinationEntity(178U);
    msg.type = 24U;
    msg.op = 224U;
    msg.request_id = 41746U;
    msg.plan_id.assign("XLDTJIWPAWQPXQKLFYMZRAGEYPTESNKBKAIQFBCWVAHVHXPDYOLZIGLTIDJCVNCMRNPXDXPCBRCNAECBZFUCUEKSCRPNHQQUVXUWAFKBHYTGOSPKQVAVVHOGDJXTUOZIZYUVDEJQRIPDFHRHXMFZIBGEMNMRXDIUEDUFYOKMQRHASUBJWOSNMTAILNTTHFJWWXGJZMKDFVYRQLPRSMGCIGW");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 38133U;
    tmp_msg_0.name.assign("AAFVOACZOOSLQWQTYNJPIIIUHMPVJNQSBRFVTCKTKQOGZBSZBTAXEMYKKEWLFCYUHVNLZGWGJEWSBCGVALWRTDKKPANCHFFHMBKFPFDOVXEUDILYROZUPFWHEXDMDUDHRRALMJJDFVHRUCG");
    tmp_msg_0.custom.assign("JTTILUMCWHLMNEYUEVAVRQXFBNMQBBCSQFWESOINNEJFXLUVHPLFGXBZEMMQOZTPTCHKWQJVICXLQDUIYERWHEOFZFBQGHRNGDCCNXEIOJQVMFWGUISRNPSDOBZDKKXRQBYDLTKIPXYRLOBPXYZAKOTSGIEVPWZIVFUYFAKKTAJOSLCENJKKPRMVZWDSWUYAHJMTDWDO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UCZZDWSVZALXTRUUCKXRNVAMWDTLIUOEKSBFFNVXNOATSYGCFRDXLHMLVRJIZYZISERKWNHGWCZHRBXEDFWMDISICMLHEDNYZQFDOWKYUQSKLGQYJTQAPPHTMFBECOVPJWZPSZDPBIVTPQEPHGNFOVLFBVDJYOBIIBPLXGOAAMJSQALTCJEWYMW");

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
    msg.setTimeStamp(0.217815822078);
    msg.setSource(37454U);
    msg.setSourceEntity(45U);
    msg.setDestination(25194U);
    msg.setDestinationEntity(99U);
    msg.type = 194U;
    msg.op = 187U;
    msg.request_id = 27389U;
    msg.plan_id.assign("ODCHRWOIRWVIXQKJDPIXCAIZIVTERQJKBEHXDXVPJETLPXNQNLNHZBOOPTCSBXJUDINUEUUZLMCAYGJKGVUTMMYYUSVOQFKTQMALXDSUZYZRFWAYZECQIRZBKGFBZLOQHAACDFVMAENVKSHRWQWZWYYJAPJJGYSB");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.150485265234;
    tmp_msg_0.lon = 0.656488236059;
    tmp_msg_0.eta = 1475575748U;
    tmp_msg_0.duration = 11739U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KKPVTTGTNAXWHPHUKVTAHLGYODVKRQYJKOJJTJXMYRORKIFWIGVFVNMSCVHDCLNDQNFKHKBEXLEZPNPANZFJQOHBAXSBYUBJLIHUSDXWGCACEDGUJFACEFAMEMGWDVLOLWWJRYFIVRXSMGBCTEMDEJUTCQIBNFPZFRXRUNMMQWHWUOOSQ");

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
    msg.setTimeStamp(0.471353925685);
    msg.setSource(38292U);
    msg.setSourceEntity(11U);
    msg.setDestination(9821U);
    msg.setDestinationEntity(72U);
    msg.type = 186U;
    msg.op = 155U;
    msg.request_id = 30232U;
    msg.plan_id.assign("JSCINKUANGLEKIJGHSULSVXEVZWRWDGZBTSMYGJTELYZFDOJVBATBWEKCO");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 201U;
    tmp_msg_0.label.assign("IFNYUBHVFXWEYSNQDIGGPGTLDEPTVUFNRTWIOTFDSOHAEMJATCCDJLEOHNTZUPQJZDHBHASWSELRMRRIECLZRXCOBRJQWKKMOWZKFGZOXSCYLASKAXGRXHHWAMMQETWSGSNXBNLBZFNPECTUMGODVJOCFXAJVSZQQAJODZYKQNPJDPYKBFMLRDLBEJNMIBCMVVIBLOYXPZUHEIUAGFTZIDCKKUHQULBHIWGUYVPVCTW");
    tmp_msg_0.component.assign("MIBEFYMWHZVVKWPPRUUCXZMPVPNPRUGMUUNBVGFASUZSVDIKSOJRJKYUAEMFWECEFBNNFHZICFQTKXICLGVTYAGFEZJNONMQNIKRQXRDDXOKFZOYOFOJTBEALJQUBADTLCSHSBWBLMQJIQLAEWVBDXCWCYTYYNAZNXLTDEQVHRSQAJSOGHIPMSKSDPRDQDZJSIODXZIKOZMWNRHOP");
    tmp_msg_0.act_time = 35621U;
    tmp_msg_0.deact_time = 18626U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UIIILUCDSSMDVJXPMFJDVAKPQNEEZWFOHUXXZSYVRCEEXZZUHRKYNTXKDEHNTBZYQFCWSWPGBGVEZUEPIHSFQBMQTBOLFCFCXJYPIZQAVJDROORZRGAZWEWIGNTPDVYUVWKKQGSDCPIPMXBAAGLJQFUSJYRNYDXKSOHUMDTLGOIGCHJHFANLKWSKOOHYERV");

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
    msg.setTimeStamp(0.22167152799);
    msg.setSource(28559U);
    msg.setSourceEntity(126U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(77U);
    msg.plan_count = 60235U;
    msg.plan_size = 4209126613U;
    msg.change_time = 0.37507971464;
    msg.change_sid = 4020U;
    msg.change_sname.assign("FVOOSKEYNYXIDHWLTQHGQPLLEBCXUTYBTEDNKQMVNAKXKDJZQCSKOAWNZSDCQDORQEZYMDBYJEWKWSXSVCSIUNYHHCLIRAISVHCPRKPORMZZLUCMXAQJSUGGARHSMNERNELOGL");
    const char tmp_msg_0[] = {-71, 109, -107, -105, -39, -57, -41, 16, 22, -65, -14, -62, -77, 84, -36, -81, -49, 36, 123, -74, -76, 0, 41, -126, 51, 115, -64, 40, 118, 43, -113, 62, -104};
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
    msg.setTimeStamp(0.513329006001);
    msg.setSource(9378U);
    msg.setSourceEntity(63U);
    msg.setDestination(10246U);
    msg.setDestinationEntity(125U);
    msg.plan_count = 33679U;
    msg.plan_size = 2695459801U;
    msg.change_time = 0.0390552783529;
    msg.change_sid = 54192U;
    msg.change_sname.assign("PUPMLYOMYPOMWSCKHHZRWITCWAZGIIHFBEBTINMCPHJDOKLBWUYOXRFMCECGFGLBZETITZDQERGRZNAZXZKDSXBESUALWLAKOPNJBMSOLDLQHVESPKXSBRMWKTTYFVUVVUSCYDGNMIRGVAVBXIUFYBEFKNGMUOQSFOJCYJQPNDVVTAHQYTTAGKULPCVJFFXLJD");
    const char tmp_msg_0[] = {-41, 8, 67, 42, 55, 28, -104, 100, -36, -30, -14, 17, -67, -106, -101, -87, 59, -22, 8, -75, 119, 68, 118, 82, 62, -104, 61, 57, -113, 34, 83, -21, -74, 80, -101, -40, -45, -41, -4, 78, -14, 48, 116, -118, -35, -47, -68, 125, -10, 47, 35, 85, -94, 4, -69, 95, -104, 102, -106, -71, -45, -59, 84, -33, 34, -89, 79, 97, -70, -27, -37, -10, 23, 36, 62, 74, -66, 25, -49, 110, -12, -64, 90, 115, -66, -120, 31, -42, -47, 84, -3, -125, -52, -55};
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
    msg.setTimeStamp(0.202465839548);
    msg.setSource(5259U);
    msg.setSourceEntity(7U);
    msg.setDestination(4859U);
    msg.setDestinationEntity(189U);
    msg.plan_count = 55383U;
    msg.plan_size = 1988401351U;
    msg.change_time = 0.13155733182;
    msg.change_sid = 38540U;
    msg.change_sname.assign("WCAUZJAJROUBPMQDFGPKCHGUQQKEHWXFMKRUKWTDRRNYVWQYZPB");
    const char tmp_msg_0[] = {-72, 125, -54, 3, -104, 94, -16, 49, -38, -120, 3, 35, 69, 116, 2, -83, 72, 42, 63, -78};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CGQIPETOMXOU");
    tmp_msg_1.plan_size = 12170U;
    tmp_msg_1.change_time = 0.971986877026;
    tmp_msg_1.change_sid = 31559U;
    tmp_msg_1.change_sname.assign("QXDCTLGJQPKRGGQNIPXGUCNCDFYIOKWZZPGJZD");
    const char tmp_tmp_msg_1_0[] = {-89, 102, -86, 56, 46, -122, 69, -33, 122, -112, 14, -58, -66, -17, -122, 25, 17, -36, -95, -59, -82, 14, -67, 89, 47, -4, 92, -65, 88, -111, 3, -102, -97, 29, 83, 27, -27, -103, 119, 28, 58, -93, -76, 91, 121, -16, 32, 65, 38, -89, -67, 38, 102, 89, -109, 103, -15, 80, -98, -103, 85, -23, 49, 84, 78, 89, 61, -17, -115, 41, -19, 87, -29, -52, -37, -81, -87, 121, -40, -70, 16, 69, -121, -119, 16, -114, -117, -60, -29, -20, 41, 109, -111, 80, 76, 106, 10, -100, -28, 100, -48, 59, 72, 114, 110, 53, 96, -80, -15, -88, -82, -4, 67, 82, -85, 25, 97, 1, 38, -83, 36, -87, 18, 88, 97, -86, -121, 22, 30, 115, 84, 43, 87, 22, 50, 55, -20, -3, 89, -41, 32, 42, 86, -85, 75, -8, -6, 36, 77, -5, 33, -3, 60, -13, 52, -9, 39, 53, -53, 22, 19, -16, 85, -107, -45, -54, -48, 79, 36, 60, -79, -90, 49, -7, 118, -111, 4, -123, 72, 30, 118, -82, -44, -15, -128, 24, -85, 9, 41, -9, 97, -111, 23, -22, -65, 114, -68, 87, -110, -60, 79, -41, 27, 60, -127, 84, -117, -22, -45, -6, 85, -81, 44, 20, 118, 6, -120, 74, 98, 29, 119, -100, -38, 54, -30, 4, -78, -65, -79, -69, -1, -21, 78, 93, -102, 95, -2, -3, 67, -123, -125, 37, 68, -94, 4, -46, -127};
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
    msg.setTimeStamp(0.889817593921);
    msg.setSource(49170U);
    msg.setSourceEntity(119U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("TJRFPMAXHOJSJDZHFJGTGPKBEEBRZFDEZXSCKHJRMOWXLQVCNUVJUINTQECNWLZNADGRFLY");
    msg.plan_size = 30963U;
    msg.change_time = 0.263214312402;
    msg.change_sid = 12460U;
    msg.change_sname.assign("IOALLEQKYKTJFHYUIKBGQYVNQPVSDGBQRSVWWUZAFBRGS");
    const char tmp_msg_0[] = {-26, -9, 87, 59, 73, -79, 124, -18, -60, -41, -20, -74, 70, 15, 28, 120, 46, 89, -16, -2, -96, -58, 53, -85, 18, -28, 3, -6, -100, -92, -19, 35, -99, -105, 68, -52, -56, -24, 124, 4, 65, 103, 86, 89, -70, -83, 14, 114, 118, -110, 41, 13, 67, 29, -109, -6, -24, 56, -41, 101, -127, 96, -23, -30, 5, 42, 70, 64, -83, -7, 17, -123, -103, -86, 60, -64, -46, 40, -84, -26, -62, 113, 81, 49, 82, -32, 40, -91, -31, 100, -84, 58, -26, 100, 45, 104, 84, -12, 32, 2, -27, -59, 3, -93, -80, 123, 55, -83, 126, 57, 0, 98, 14, 80, -52, 43, 99, -32, -80, -72, -97, -42, -112, 93, 91, -4, 94, 65, -117, 90, 14, -46, -48, 52, -88, 73};
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
    msg.setTimeStamp(0.122448285869);
    msg.setSource(40898U);
    msg.setSourceEntity(189U);
    msg.setDestination(11089U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("URTOUHGDNIYQQS");
    msg.plan_size = 61041U;
    msg.change_time = 0.181014952604;
    msg.change_sid = 32009U;
    msg.change_sname.assign("AAPCMVDZCKGOSNKOISMYCIRNKLQLNTIKHJUJXQHVOFDFLNDYZKLJYEHUIDFIQQIESWFWZCBXNHCBBWULCFSDGAXAKJSBXCLOFMPUEPMFEWUEVOQZGYBQKLHRJXNTRERTPHXMKAWSKSYOKABEMYXXWIMPAO");
    const char tmp_msg_0[] = {-99, 123, -67, 56, -68, -39, -60, -7, -51, -78, -111, -104, -16, -80, -120, 126, 96, 71, -124, -65, 19, 93, -111, -9, -126, 121, 2, 72, -9, 83, 27, 96};
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
    msg.setTimeStamp(0.257581912326);
    msg.setSource(28730U);
    msg.setSourceEntity(188U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("NMNFEEQHICZSHPZUSCSGVYMCVLXHGBLADUVGLIYHQYJKXBIHZDIZCLRFUKIEXOZTMYWXFKXPRJTRWNIMNKGSRLZRWVDWOPTVHGLFBPMTZFITSCBNJBLTMTXROORN");
    msg.plan_size = 57447U;
    msg.change_time = 0.757180753747;
    msg.change_sid = 24823U;
    msg.change_sname.assign("BCLCJNILGSKJTONQXIHDUUNKDCCXEQDYARIJNZHLTIMBDHHTPZGKVNOYKUJBPAYGXPOZLCYRIDNJFSASRHZOYFQGIMEUVMGLDZALOPTLSVFKUMNKZDY");
    const char tmp_msg_0[] = {12, 17, 80, 56, 112, 82, 51, 62, -42, -11, 57, -61, 10, -32, 3, -7, 9, 23, -124, -83, -107, 107, -41, 6, -125, 4, -47, -42, 54, 94, -7, -105, 27, -69, -101, -61, -5, -98, -91, -120, 57, 104, 110, -48, -11, 81, 54, -62, 115, 59, -121, -72, 63, -1, 117, 59, 25, 27, -10, -63, -37, -19, -62};
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
    msg.setTimeStamp(0.295011055699);
    msg.setSource(56881U);
    msg.setSourceEntity(139U);
    msg.setDestination(25549U);
    msg.setDestinationEntity(99U);
    msg.type = 97U;
    msg.op = 142U;
    msg.request_id = 27276U;
    msg.plan_id.assign("SWFONQNFWADMXVWZDWFQPNCTMCAEDVYXKTSAJDPVTZNUJUPBVBGXSUJLLGIGKRZIHPWKTTIWTXHNSXHXQCLIHABJYMDYSPENSDPJN");
    msg.flags = 29651U;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DRNJCUVUGWDIPYCKWUPMCLKZBDUQQFDAZICXVKSNOVSYYBOEICIADAVTCOHSQHIAKFKWBSVBPVOO");
    tmp_msg_0.feature_type = 135U;
    tmp_msg_0.rgb_red = 50U;
    tmp_msg_0.rgb_green = 10U;
    tmp_msg_0.rgb_blue = 199U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.903878084436;
    tmp_tmp_msg_0_0.lon = 0.560500956218;
    tmp_tmp_msg_0_0.alt = 0.0197637753038;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CJIEBVSWQLBXHTSCZRLOQBFNQBJMDDSONVPBTCDCWJIVOZEVFAGBRJYKOCFXPGSGOUMKZNWRFVLNRUMGQJHMUEAEAAZMENPUPQHWUETRCANWAPYJRELXXAXGWSOVQSZNANQKPSHYOCKOYOLQY");

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
    msg.setTimeStamp(0.788844969753);
    msg.setSource(55726U);
    msg.setSourceEntity(151U);
    msg.setDestination(22200U);
    msg.setDestinationEntity(87U);
    msg.type = 208U;
    msg.op = 88U;
    msg.request_id = 65019U;
    msg.plan_id.assign("GRZMJJXWKZEICYUBPKLYLWSTPDWRIQALVHFUOGVFXISEEVKFRXKOPGATQUMAEHJHQCBUKIBDTSNWGYSOLUKGQGCHBDJLBHSPATRJQKVZXPKFYAQTMUBEPBO");
    msg.flags = 63817U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("EJSYFQTLQCHIWNEJLDHXDTCDOTGOGKGTZBLPSJAMCZPSRLYWVDLUBBASNXLEHSDMCYZJIMFHPFXGQMFQKPOZVFIVKQVLYQHLQTIMAPMKVRUWVUAKXOHWFDSUBWJVIXWJPCCIAEGYRWUDKORRDYCURSEWPIJOGEXNTQBB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WKLPCSNJLDNPQFHNHULZKSZUFMYJRYXLBCRZJLQWCAGTJPHULRZKPWCLGOKUFAAWEKSZTEGKIFMZYIVAKQZGWVGLXBOVOIBUAVISHGBOTTTCI");

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
    msg.setTimeStamp(0.902307489905);
    msg.setSource(27359U);
    msg.setSourceEntity(7U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(4U);
    msg.type = 105U;
    msg.op = 82U;
    msg.request_id = 54420U;
    msg.plan_id.assign("IKAQJEGENBJUUULQDEIYQMHLYBJAKBVUOEVHHAHSLBTSTFGNNNTAICWHONBXDZHMWLFJXHYVUPYBKZRLZCSFEEZXCLDBVTCPWUXVFQJFZWSMWMRSGPOPGRUIZIXSAXRMLSYDZIIXUCRLXMLDFVRTYMTBSSXYAPWWJWGDPTDAHYCYQLOPAQNDCMBGKKAJMNJDEOHVKZPFWOQVSIJFQGNRGGTRAKQOZNGOCMOEIBXTCFEPHUITZORCE");
    msg.flags = 36193U;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -95;
    tmp_msg_0.value = -584509652;
    tmp_msg_0.gain = 85U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QAUSFFTQRXQGACTHBJGQHIRJKECEAEOHYZBGITCVOUTKUOPDCDPBFGPZLNOWNBEKSMNPVHLBFRDEZWEGPIUPWXNFYWDUMALHJDJXIXJXJILASZFPNHJMQAIRRUZODVMXESBMRZCCRAMBYTMXSBMQKKWFFTTEXTHLUOQYAQNRCUHXTTROPNUIWLDCYNOMCQIVLZVSBWWHZGJLEVWVZZVHKKSSYPLKNUJFDYGONDKPYQMY");

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
    msg.setTimeStamp(0.0511685511558);
    msg.setSource(18814U);
    msg.setSourceEntity(114U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(182U);
    msg.state = 180U;
    msg.plan_id.assign("RKTOUONGLIFCAPXWNDHVXKCBGEFCXQTZJQQUDJLTEOMXVQVIWQLMTASVBEAABLLDZMACQKTBPPPUZAMOVKMBRXJFEPHTZJXNXIDRHBIRQLBNEWEGLNRYKUVUZXYASAFWHGIESYSVFKPGQ");
    msg.plan_eta = 2029019487;
    msg.plan_progress = 0.531731151657;
    msg.man_id.assign("KPIZFHLFDFVYHLRVJXATNPMMPYBDTMYDCWTVFBBZRXKLMUOEYUMBTMIAENUYUQTWGUDBZKBGGGTVENDJYMQALXNRLSYWROWTSOHGXLKEAIB");
    msg.man_type = 5434U;
    msg.man_eta = 725459659;
    msg.last_outcome = 234U;

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
    msg.setTimeStamp(0.496020712268);
    msg.setSource(10921U);
    msg.setSourceEntity(12U);
    msg.setDestination(53102U);
    msg.setDestinationEntity(143U);
    msg.state = 127U;
    msg.plan_id.assign("VCUGOHQTUTOYAUQVPRWZHXEPQNVDEYZTQNMYIMKESAKUPPNETDTARNSYNAZNSNOBAOWDWVLACHTQAVIMCGFOTEZXRBBBAFQIKYXOKUBRJMEHKGFGNXVQXJUDFRKRHOCJMELNI");
    msg.plan_eta = 954017880;
    msg.plan_progress = 0.988693653634;
    msg.man_id.assign("SSVFEQFSVQTHKOGCHXEBTBRMHAMGULPYHDCPYSUWISEKJQ");
    msg.man_type = 44054U;
    msg.man_eta = 1370454508;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.298705547173);
    msg.setSource(9069U);
    msg.setSourceEntity(55U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(117U);
    msg.state = 226U;
    msg.plan_id.assign("ANXUPFHBNEXUUUDELYPQDEZJOMYBRVERZTPOCSPZSVMKJBOXWWXXAWKTCTBRYDBRVGLLJQIJLOYKDOHTEKEGKSPDOCIURPALUSXMYLNUWFJPAKNUHOLFTIRFZRAFLZDCIZYMQZFHWFMKEHWJAHOMEQYVBCYGBKQMNIHRYRAMDKCEZYZWNALQFBMCT");
    msg.plan_eta = 1746801444;
    msg.plan_progress = 0.121935804033;
    msg.man_id.assign("TWHSOVPXWNZIPUUHOWPBKCCBGKQDBRNNONEUDHYWEOPLJNUGRJHLHGYGNJJMDKGLNXQDROOHVPSWXWSMFRFRAOMQFYEPAXTZFHQGCVEADFRJYDTVFYETMROCSRSIJZQZBZQMRPLADHULJI");
    msg.man_type = 54571U;
    msg.man_eta = -1958217571;
    msg.last_outcome = 161U;

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
    msg.setTimeStamp(0.738863661123);
    msg.setSource(47698U);
    msg.setSourceEntity(100U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(243U);
    msg.name.assign("ONNWBYJDSEAAXOAYEBSPRZXCLWYZOZADMFKUGPMVXMBTJWK");
    msg.value.assign("VRSGEVKSGTZLWKCCFOKEJBWPHTJKMZLZJGXDFSTRRTZAUOAHYEJWVYXCBBPDBFDOLGMUYCZSQUJEQKMLVPHHIIXHYXQKTVHEIOTGWFOWOIFYWAA");
    msg.type = 162U;
    msg.access = 83U;

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
    msg.setTimeStamp(0.881204616421);
    msg.setSource(31630U);
    msg.setSourceEntity(222U);
    msg.setDestination(49884U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NMXYJJHBOULSOVZYSRTQTGKDDSDCLZAFZIXOMPXTMGBLNTGBCMZPOLGNGSXQRMCVJWDVMSTRWCXCSGKZVZXIQEBLXKNJTNEFCIVHFEQWACAFHMOPAHJI");
    msg.value.assign("EZBBIBVDODCFQCGVHEMHMSGHTFIAODGJMMAVDJGULEPXHKNJBZUUSVQNNHPSPUUQANXAOBFDZKTHYWTAGXQLKOWWVBWGUXXSAKGIYQRXEMLNJISKZS");
    msg.type = 201U;
    msg.access = 155U;

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
    msg.setTimeStamp(0.193846822809);
    msg.setSource(46601U);
    msg.setSourceEntity(234U);
    msg.setDestination(23637U);
    msg.setDestinationEntity(161U);
    msg.name.assign("MFSIBEYOVGALEJXUDXPBNATELUIMBDZXNJNXTDFRUAIIUHPYDQTHTNRFCGCFYQOERFZDANKPCOJYPFRPKOLYRSBVOKQGWNSSWMIPLCKRIGMGHALILOXZTWRBZXFBRFKKCEYQPHJNDADZZWDOGVPVHZSWQIGSHGVQBTITYQJRICHEAVLWNQZUWCM");
    msg.value.assign("ARGZUEENAEQAWAZXJVJIZCYWMXBCBDSMDL");
    msg.type = 125U;
    msg.access = 228U;

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
    msg.setTimeStamp(0.907444140941);
    msg.setSource(38722U);
    msg.setSourceEntity(137U);
    msg.setDestination(26238U);
    msg.setDestinationEntity(228U);
    msg.cmd = 23U;
    msg.op = 6U;
    msg.plan_id.assign("HHGYJQEBHVJAWDBBZVXLUZAFPPIFXQNWSFXTLYXZSSKAHYDIVPUPSKQRINWDG");
    msg.params.assign("RTYSJZIDKIVEHDTZLJQKNINSDWLOHMMNYETZDCWJ");

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
    msg.setTimeStamp(0.163300650201);
    msg.setSource(40313U);
    msg.setSourceEntity(47U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(60U);
    msg.cmd = 175U;
    msg.op = 150U;
    msg.plan_id.assign("JTKHTDGIZYNLXGUJSMCVLBVFWPEMGZXLUIPSUBAAJINNJQZJHHWJKLPUMBSHYFSSRWNSYNIOBUVUFEPKXGJPEDSHCHYYPICUACRSIJHZMYODTMLVQUVCMNVIBPVZNRFYKQZGAKZKIOLMTFDUAOBVAVQATUQQBQHGWZOMOXLCCEIWDRFRLNRTYMDETIOKCQAJPETGXWAODQRSHYRFJYZTLXE");
    msg.params.assign("LGVFWZQQSZXLDHSRIZIEUAUJVKBRURXQRNWZRQPZSBKSUMFWIINMCOGPFTUUTWTFMPSDONNXDEYNUAXBVEVYXDWYCDAVTRHKBOUJGNVEKOXUHADYONTZYHMPQDFKHLWZBPADF");

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
    msg.setTimeStamp(0.493698916152);
    msg.setSource(62090U);
    msg.setSourceEntity(225U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(224U);
    msg.cmd = 246U;
    msg.op = 183U;
    msg.plan_id.assign("AWMZNRMBFWJAERLPROUOGKVUETAXDFBXXLZPBPSFTYDNAISYYNJTCSHQQGJPVGJFDUSSLQLCVXYUBLBEZZKAHTGRHIRQPSBHQVDCYXWURWJGNJLDAHTDNTIKQCKXWOQYJPIOPJNMZXIYUXOMTMIHKSPFBDLKVTSEOEGUOPGXAQCEGOFHAZVNBSEV");
    msg.params.assign("GGAPQMJQISDGPOXSXIPHIOQEMWNDBTRGQWGSGRRAJKHSHIQDYBDBJYZTTCKYWEVTGDOELSWJAPXBQULSUBNYZPRWOJPFEUYQYZKKNMHFPEABDMMQHWKOVHEUFNBWWHJVZNULNWJEFZFJMBNVFKYASTDHFRKCXGMJMMVXBXTQZLWVIUYZERVALDTGXBIIALTQTXUAOLMRGCPFVOKXCSFIDNHJHNRAOC");

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
    msg.setTimeStamp(0.921727353114);
    msg.setSource(8143U);
    msg.setSourceEntity(244U);
    msg.setDestination(1782U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("GGEBQMBJGKBFCLHMCQTURKSATIZTZOBNDYXKYHODMNTXWPWZJNHETDFLMJKCKSWQGEYAXJXVISNFDPECGMVFPKWYLGPPLELISOOKTHUYVLMSEZQPROFFOWYZKTJJYTVUWWUZDSJHJVYPRGRCUVTOWBX");
    msg.op = 164U;
    msg.lat = 0.981631855454;
    msg.lon = 0.507642508429;
    msg.height = 0.790967228884;
    msg.x = 0.62591523562;
    msg.y = 0.279259000405;
    msg.z = 0.768494427524;
    msg.phi = 0.0538770370782;
    msg.theta = 0.461337666807;
    msg.psi = 0.760359333876;
    msg.vx = 0.238775098805;
    msg.vy = 0.0366305208212;
    msg.vz = 0.570846799675;
    msg.p = 0.039567450491;
    msg.q = 0.831046515598;
    msg.r = 0.0545090630961;
    msg.svx = 0.73630662462;
    msg.svy = 0.986947769496;
    msg.svz = 0.0704277628355;

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
    msg.setTimeStamp(0.513068377014);
    msg.setSource(47099U);
    msg.setSourceEntity(212U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("IIDHSEFCUGDNWIUHQOOCSNCZRSBHQNYUGYZFWRLNBHTUCOJFPNPLWVJTCSATKVIAOMZPSLWKKQVCPXUM");
    msg.op = 48U;
    msg.lat = 0.615682912038;
    msg.lon = 0.490243759904;
    msg.height = 0.0476138963348;
    msg.x = 0.930715398451;
    msg.y = 0.660421406839;
    msg.z = 0.625611247963;
    msg.phi = 0.230879675863;
    msg.theta = 0.220308374718;
    msg.psi = 0.183272344726;
    msg.vx = 0.441959724009;
    msg.vy = 0.852540038175;
    msg.vz = 0.46442099312;
    msg.p = 0.0459376453962;
    msg.q = 0.909686547842;
    msg.r = 0.772829593842;
    msg.svx = 0.718561912987;
    msg.svy = 0.529528493223;
    msg.svz = 0.473697572491;

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
    msg.setTimeStamp(0.987928197337);
    msg.setSource(57827U);
    msg.setSourceEntity(230U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("ANCPSASIQPPVEKJTDOLFXTCIYGLLILBLXFLMXMHZDLCZJUGOOVWCJKCKSHUOELSABHTFHGWACXZYFIKFRUCRVMFAQFRPWKIDDNZSYMSEWRSQEROYUXEHNRPMXFYVCBOYNBOIPXEDCJWAQEVUGGMDWDSNRRQAKFDJWQZQSPKMTZBBUIRVWAJJUEDPHQTAWIBVPOYJKUKPVQMO");
    msg.op = 201U;
    msg.lat = 0.836335381689;
    msg.lon = 0.879358833837;
    msg.height = 0.749324560478;
    msg.x = 0.337792300564;
    msg.y = 0.655128769022;
    msg.z = 0.969445388781;
    msg.phi = 0.454694772947;
    msg.theta = 0.665284981264;
    msg.psi = 0.6125058955;
    msg.vx = 0.878614628241;
    msg.vy = 0.109855512065;
    msg.vz = 0.399922248748;
    msg.p = 0.397449353065;
    msg.q = 0.843934565482;
    msg.r = 0.00249194058542;
    msg.svx = 0.207274995168;
    msg.svy = 0.581200943202;
    msg.svz = 0.412123897268;

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
    msg.setTimeStamp(0.6327346423);
    msg.setSource(19186U);
    msg.setSourceEntity(162U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("QCBPOVTJTFKUROOEJYUDBOIIRAXBTTRFNFAMGCTYNCMGKBLVWZAXKWXCSTWZWIWMMQLZOYZCGQUEUXQVFEQXVKKSYCFWIADEEXBKAUVMOUEABTYAFGVMJNYLRICS");
    msg.type = 119U;
    msg.properties = 104U;
    msg.durations.assign("LERBAKAPMXBDCDKENOPQUGQXIYVITRNWSBROKROTGUFBVGMOHCLL");
    msg.distances.assign("HRFCJPTXPSBNIATOSGTCFLWOKWQLDMDDOHHHVBEVWHRWLHOIUVUFPQYRSDVZSBVVPRSGQERXPFGOYNAVWDTLLDSARQUKBAXZOMYEIUBXLXAGACRFUOXVSGBRZPCAMAGFAUYQYDKIKHUXPAQGKNZEINJFMDEGTPMOQETMTCUNEWJUHCWIJSBZLKPTV");
    msg.actions.assign("AGTZDUTHCLXMBWS");
    msg.fuel.assign("CAYINEZPZKKTXGWCDYGESLHYFFGXGLWWUMXWMSHNMEGMVEUITRLPZENPRBQXKQUQNJJRGJAIWBXKWTDVNTMFIFOFVFRSTZRDYVUYSOSCDSCMOVXLKZDIVVMAGXTJCQSQUPUTAGAWUTXDBDRSLIJORJUAFIVORHCIKWDCILYKZUO");

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
    msg.setTimeStamp(0.757555815148);
    msg.setSource(44967U);
    msg.setSourceEntity(68U);
    msg.setDestination(10398U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("XWWUJFWLFFBUVJBADPDCQKTOFKFEMVEXJULMGKXSLBXNVGSBPGGBBYPQLTARTPWGVDXRSOYGRIEKUIPXTFNCTKNHVRDOZRHURNIIVJPCHXQEWKSAHYMNFJWSMLUZBPAFHODQILCVCETZWYDOQSHZTSBLRAHLSKPXDECJOOLUDJINZDPYJTECQCDPHJXKY");
    msg.type = 7U;
    msg.properties = 124U;
    msg.durations.assign("BVHUTVVWWSGSUSXRSJOAACHXPBIKOTXECDZ");
    msg.distances.assign("HDHHPXASRPHZYVMPFRHAVBTMUWWRHHUXFZJDINDNADMYU");
    msg.actions.assign("ZWLYELFWZYGUVPPDBKTMRFFQCVBJWRSZMEBHXOJSZMRAH");
    msg.fuel.assign("PWJVQXSPUZPLPOJWFXXXATDKGCOZQDWESFVXRBPTDHXZTRFMPLBUMJDFCHHAXRHNBTAVGEHNLEAXMVQZCRQNIRIBSMJETYYDFVNJHNBAOWRINOKUYXITKOVAKQDGWQGTMZOKSCRSCENBPSWUMQSBAOOHEIWGZMNOQCCTHLGXLIDDUUVJKDEFZCRSOQIJJIFBYPZMDFJVGNRWEUPYZUWSGCHLBATGMYYURFTMLUYIKGALQJFEVLNKVKPYS");

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
    msg.setTimeStamp(0.260535492139);
    msg.setSource(48900U);
    msg.setSourceEntity(167U);
    msg.setDestination(27155U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("KGDIJENNDVSZLRAFKSICQOINUNRSLMADKSLIVKQQVXDZJIZXTBZBKVMWOKOKRQUEMAPHWTFX");
    msg.type = 151U;
    msg.properties = 161U;
    msg.durations.assign("YNQHXIIGXRCSYJJPCNAHREZDUWLYUCKVELPTSERIHKRLDFBRWAWGVUFOKJUDKLZWZPSHQBALDMBBCEQERSWUZMDGFJVOASXTAQMDYNMAMFFNXHTWOTIHVCJNSHVMMFJNRWJKKGKNGJESODZQYCBZBKTFSGQNHITPVUPHMECJYCBRQUMRLBA");
    msg.distances.assign("NNBHMHYQFZXUKJWCDBAETJFXOXDTGHSRQYAAYKVCRHKOSSWAXDXLTAILWMSFUHRYJUPITFGZXKDPJONRMROCRONVEY");
    msg.actions.assign("BJRYLDICUUSKCTFTKRLUUVVUFNOWPWMTKUDXSRRLKDSIRAHZYHIWXLVYSTVYZBKYEHFCDQPOJEIIOVYEKYBDOQBDKZBNLSIYXPQBPWQOILORNLHMAZGSJDMPENMNWVZ");
    msg.fuel.assign("CXQSCOHNLDFEJOUYBWTVAZHIPAHFJGBVLOBPQQITJMHBSSDKPLDLVKWZMMTPZECRNGWUNHUIARVHQPGKXBVOUFQQCYATTIKCVE");

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
    msg.setTimeStamp(0.305040542641);
    msg.setSource(54790U);
    msg.setSourceEntity(228U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.0779873208578;
    msg.lon = 0.799353883321;
    msg.depth = 0.138038209024;
    msg.roll = 0.789091834446;
    msg.pitch = 0.243912264505;
    msg.yaw = 0.734066969274;
    msg.rcp_time = 0.675452879298;
    msg.sid.assign("WGQZNRNXPWGRATMVOJIBYKYWRYSOIFDQVBDYTPEWKMLJKWZUZUKRCVSOKAOHZAEDZRBDOBXAAFNESHUTNCLVMFNGKEARZHLSDQFKRLVHYNJKLFJMDLFAWQSBBJYNPGGZWGLBQIGTIJQJOEBUQHIYSOLETTXNDEHSMIJFRXYPJMCTTEIVCVIVVNBFJTCMUSDGQOPZGXLUKTXGXUAPPMCEWDIPUMAHZWHFQKZVX");
    msg.s_type = 64U;

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
    msg.setTimeStamp(0.384268350514);
    msg.setSource(38982U);
    msg.setSourceEntity(150U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.048602906791;
    msg.lon = 0.88014854126;
    msg.depth = 0.57848404097;
    msg.roll = 0.596779746797;
    msg.pitch = 0.6238133585;
    msg.yaw = 0.928637535372;
    msg.rcp_time = 0.237341591506;
    msg.sid.assign("RFXKKFSRHPSFFIIZQWBDZZOYBLIMHICBVTLZRAVTEWUZAWWLRQJJRUERNEXGJLOMHOIXISESDXWWCMGUOBKPYETDGCUNTMJIAQ");
    msg.s_type = 189U;

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
    msg.setTimeStamp(0.729097336437);
    msg.setSource(5489U);
    msg.setSourceEntity(149U);
    msg.setDestination(41778U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.167513667391;
    msg.lon = 0.0646417305363;
    msg.depth = 0.181520611149;
    msg.roll = 0.983207307034;
    msg.pitch = 0.987277977887;
    msg.yaw = 0.358236676701;
    msg.rcp_time = 0.465227313764;
    msg.sid.assign("DAJFHDLVRFQJIHORUZMWRYGYBPTWCMPOXFBKCVROFBWBIJLYZTEVNWPLCNVRMNLEZBIEKDYAUVXKTPZEMIYJLFXIIODHWUTUNWCSPFBPXPUHUTEMCMVSXTAZRQUKCUTHYDQOBRDEPFLNAQAQMTIMJJLCXGFTHJDLWSPFBDOVRNLOQBYHVZKZX");
    msg.s_type = 84U;

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
    msg.setTimeStamp(0.691498215553);
    msg.setSource(55893U);
    msg.setSourceEntity(168U);
    msg.setDestination(32210U);
    msg.setDestinationEntity(253U);
    msg.id.assign("KPDUJMXAYTWBZZCMWOMUBDMVQBCFXSJLICNTCVWJLSMCAVEISCGRAZRWMNQFGWATWHRCKTDGLXWAIGKEPFZDKIPBHZJOUJKNOUUSRNZWLTOTUABERDWFLV");
    msg.sensor_class.assign("HMUEMDNXUXCFGRQVBLKKVOQHBSDAUWZBGGJTNO");
    msg.lat = 0.512004579149;
    msg.lon = 0.164338412404;
    msg.alt = 0.709262467928;
    msg.heading = 0.490818899521;
    msg.data.assign("CBDVVCKBPDGCCDZZUEORTNGBSAFKJRYQWWZCXATZIXRVSRSJQARTWTECHFGJMHZUEQAOSPYKRRVEWGYPHIUOXLCIDZVDHWBFYCQJUOWLQXEQXCJIRYKFCBNWWNBSDMXQMKVFHONYAJRSOPSGVEKPHKIMSNMXQJLKXNJOAIPGMLODTJEHBULXLYNMHVYEJZYZEBDLMYVHOZ");

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
    msg.setTimeStamp(0.391636367276);
    msg.setSource(54652U);
    msg.setSourceEntity(51U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(226U);
    msg.id.assign("HEOXRAMKUSZVBMGQIRAWLIUGQDNCEXQTLNPAZIZRZISFHJXCRUYWZOCYWNJBGGWXLDTPKCIRTQXJFYJRVBNCUCMJJVVAWDPBDLTXFAPOMWNHVNDTOZHPEGFQTSBNZUBKRBVQDZVLWHQUTUWVXGKLYTCKGYQERATEKMGQDJOPEPCXIYSLUVRLBULOALZSEYKFODPEDEGFPOQISKBYKJHNWCBAMHTAIXPISMAWNSJMNOVE");
    msg.sensor_class.assign("JWOMSHQBPNVJGQDWICYKZUFDMCTCTNPGAKNIXTKLDFHSZUMPBGKUSGIHDWYLISZBHUPQAQYFUJPBYALBXQSCUNHNCLZVENTGAZTQNWGOPRGEDQVKMXUJEKKYJWYMAHZUVBWAUXETEEIANPONVOJQQROFRRHOAIAFOUMXLTXJPOMHQHLXIMGRSGWLGVYBEFYMRVMBWKFCCRJTVPSDELKXZJDIBZLXJRA");
    msg.lat = 0.300558218639;
    msg.lon = 0.767680786095;
    msg.alt = 0.0632166967698;
    msg.heading = 0.954863942793;
    msg.data.assign("VGITUKYMINPSFZTJIZPMLMDAGHFBRCFKXTGGREPOUZTPTQQBWMINKEAKELWWMOSQJOGNUBUVRPZRFAMHZZNUWYZYVLYIDJEJLFBNJEEMQRUGAWCWTHHIANHOBXHKIRNQLEANYSKXW");

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
    msg.setTimeStamp(0.764747029353);
    msg.setSource(31919U);
    msg.setSourceEntity(242U);
    msg.setDestination(3729U);
    msg.setDestinationEntity(62U);
    msg.id.assign("DVUSBVWSNYZEXVQKRHFCGDRTJLQGMXKVGRRGAFMXPIKCVNJTLBASOLRXBZJUCVSUSIJXIHLDRUKEEGKPYKNCWPYZJTMSJMQUJXHKHNPZOUPYPWBXVMZJGETCEREDVYHAARMHUQIBZOGWQRQXOTYTYFDMNLDAOEXRKBYEQIIPPFHFFQJQOFNOGVDAAFOXSMQKIWILTNSWYBMLEBTAWCEUOPFAOLZZTCHWGGNH");
    msg.sensor_class.assign("WKDYLCXFWXDHTDVVIMVDPULKKIPSNGBJRINZFUIUCCKFPOOQZQPNTJANQSCGESPBZVTHURTJYQWSAHONJTQXQBNXQFWFMMLCUZMIGPWC");
    msg.lat = 0.160890539377;
    msg.lon = 0.165368861264;
    msg.alt = 0.596028368475;
    msg.heading = 0.0390749995673;
    msg.data.assign("LDHGOVNQNFLASZXWDKIGQCCAVWCNUZUSQUWWCZGPGXFOMIT");

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
    msg.setTimeStamp(0.1611789456);
    msg.setSource(60619U);
    msg.setSourceEntity(179U);
    msg.setDestination(2790U);
    msg.setDestinationEntity(3U);
    msg.id.assign("AIRPOSQDCEAMFIXFNHVAZWSKKCDFBVDLIWDAIIWSJTXXTGTKZTWZALCPXOAUBVQBGGYXQEVMYQOMSNNOPHUOMGZAWVHLHEQHXQPYJYSZVXZDUPCFLYQNEPULBPIBLTRIQKQGJHAGK");

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
    msg.setTimeStamp(0.803623744464);
    msg.setSource(50372U);
    msg.setSourceEntity(157U);
    msg.setDestination(37166U);
    msg.setDestinationEntity(174U);
    msg.id.assign("GTRKFHDJQFJGQPOHEGELFYQQSESQMLVAOFMKVUMZBCWAPFCINNVLFCWAGBNRVIAZNXNYLKTCP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZASKEVFFROINAHIOSZSPNPWBFSMELJQMVGAVMMXTUZYKRKLWXMRMDZUDXNYAYKAIJ");
    tmp_msg_0.feature_type = 153U;
    tmp_msg_0.rgb_red = 77U;
    tmp_msg_0.rgb_green = 8U;
    tmp_msg_0.rgb_blue = 3U;
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
    msg.setTimeStamp(0.404516407353);
    msg.setSource(41528U);
    msg.setSourceEntity(225U);
    msg.setDestination(23440U);
    msg.setDestinationEntity(65U);
    msg.id.assign("YEEUJYUJUGDBRV");

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
    msg.setTimeStamp(0.917787122549);
    msg.setSource(17518U);
    msg.setSourceEntity(146U);
    msg.setDestination(16618U);
    msg.setDestinationEntity(170U);
    msg.id.assign("HMSEFAAFPCVXWJIPDNZWYNDXZDKSMTGPOCVWLBLLUSGKLTZYWWBIEVNKAXYZHQITXOUQEQDKVSQVDWAVAJECOPURFKIZDBPECTBNPPJVTGOEST");
    msg.feature_type = 25U;
    msg.rgb_red = 172U;
    msg.rgb_green = 71U;
    msg.rgb_blue = 65U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.841088535052;
    tmp_msg_0.lon = 0.834314241922;
    tmp_msg_0.alt = 0.088670341572;
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
    msg.setTimeStamp(0.40194764685);
    msg.setSource(10103U);
    msg.setSourceEntity(69U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(222U);
    msg.id.assign("JPINDFTAFLHAIEGZXYLAHJQNLURRPMXIWVNJZRQFLKVFYJMDVCQKHSZIGAPFHXQBEVDYPUVENQCEDHHAOZVBVBSMAEEIUGNPZPHOGYNYSORCGORLZBPKUTWKBNKQFG");
    msg.feature_type = 156U;
    msg.rgb_red = 156U;
    msg.rgb_green = 18U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.890781448994);
    msg.setSource(33305U);
    msg.setSourceEntity(241U);
    msg.setDestination(10262U);
    msg.setDestinationEntity(160U);
    msg.id.assign("MCOAGGDXREDLXIJBRKBJXHPHHRNQYSOPFIKTULFOMQZVLPFEUALXJXWKBLNMKTJTOVTAQGBTHYIEZFPWRKAOVGRVUYHVKVMFEZTZPYWGFCTMUJDRELCLRQYNQWOMGCYSPFMOZISVZWMANNGWIUNEYUUJRZXAOYNBKZHIFMBEKALYHSWYVCSSKHHDDAKNELDCVACQZQSGDUJTFIID");
    msg.feature_type = 169U;
    msg.rgb_red = 181U;
    msg.rgb_green = 87U;
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
    msg.setTimeStamp(0.109429257042);
    msg.setSource(23573U);
    msg.setSourceEntity(102U);
    msg.setDestination(34685U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.944595522553;
    msg.lon = 0.865553359048;
    msg.alt = 0.323728354735;

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
    msg.setTimeStamp(0.75793892572);
    msg.setSource(33000U);
    msg.setSourceEntity(69U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.756979958879;
    msg.lon = 0.125257455608;
    msg.alt = 0.120733732068;

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
    msg.setTimeStamp(0.604351153072);
    msg.setSource(28677U);
    msg.setSourceEntity(188U);
    msg.setDestination(33916U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.111406429795;
    msg.lon = 0.0722566690786;
    msg.alt = 0.64766530932;

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
    msg.setTimeStamp(0.508440230952);
    msg.setSource(772U);
    msg.setSourceEntity(175U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(96U);
    msg.type = 254U;
    msg.id.assign("IADPDUONUOYINZTWXJGHSWKAYGJLIWZVMFPNZBYTMNSKBFIDFTLHAGAUUQTWRLESVQFEMKXYCXFNZOKDIDWPAZPAXJQQHF");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.0154995508954;
    tmp_msg_0.lon = 0.896225184736;
    tmp_msg_0.depth = 0.531516162634;
    tmp_msg_0.roll = 0.755447359695;
    tmp_msg_0.pitch = 0.345597809181;
    tmp_msg_0.yaw = 0.301300301922;
    tmp_msg_0.rcp_time = 0.509257548871;
    tmp_msg_0.sid.assign("GSNXZLVFBXLOTUAWSEFDOPJUMJYHRMGSNHKREAAPBOAUWMWJVHYFELNGZULJGDADVPSXFXIQFBNTEOVAXGCXVHMCYIWDQMKOANQQAFTAKPNTPBUDQMRWCSKZOWEKJQYIPISHHRGXLRYNJCNWYCRGCIZTAHNCBMLKUTHGCLBPBILFVMBMTXDOYCKXYW");
    tmp_msg_0.s_type = 176U;
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
    msg.setTimeStamp(0.954989072273);
    msg.setSource(33498U);
    msg.setSourceEntity(208U);
    msg.setDestination(7615U);
    msg.setDestinationEntity(171U);
    msg.type = 221U;
    msg.id.assign("XSJBLUYUSQPJTQOOWWELVNUPQIYZOPBDFLZBTQQWFTZUORKXIDPWAIKRVJDHTYSARFSGLDMGJMRCWUZOAUAJPRWVBEXLZERZFNCDVKCZWYTDKMVRNGRUTEIKWXABVMGPZJETSSBTXZEUKOPKAFMJWRYXMMNXAMTCFQJOMIDFCXEYHAEIHVMHSJLKIKXEHGYXFGWBQNNDFPJLCKL");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("ZTKWDPYIBTICIKRMJYHDYSHQRZHUPNRXLNFXAMFSNUJXLVYXQDLGGLBQCNOWRIYBOAWZZRKLNNVYPKWGJERXGOJVJJBMTSVAMVWTTCINPEAFXHWSGMPOSVGSFQPHHUMIQUPF");
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
    msg.setTimeStamp(0.537835475516);
    msg.setSource(10093U);
    msg.setSourceEntity(23U);
    msg.setDestination(41628U);
    msg.setDestinationEntity(114U);
    msg.type = 119U;
    msg.id.assign("GBSCNEZBRLBHYVJQFQOUEOKBZCNYPXDYPGDRKTUQSZQCQFJWNINLZQERKDOMHBEDEVROOPFKOGORADBUDWWOOWSZYDCOHTSNQMHSGVAPYTNTCSXGKITJSSVLKHPAYILI");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("MFUQHFZFSPDPPWCOGTVKJPPFDWQPYHSEXQYRNOTJBYVZNXVVAOKLUHRZTOQHWTANNJMIEUEQTJQIIYRCXELWGIHVGGOEMIYE");
    tmp_msg_0.htime = 0.646842941504;
    tmp_msg_0.lat = 0.260323317812;
    tmp_msg_0.lon = 0.524146543701;
    const char tmp_tmp_msg_0_0[] = {103, 102, 88, -41, 41, 117, -112, 2, -100, 103, -1, 22, 14, -61, 85, 39, 50, -128, -10, -60, -73, -54, 117, 111, 123, -15, -85, 33, 30, -1, 66, 117, -63, -51, -127, -101, 113, -128, -88, -28, -73, -45, -121, 87, -48, 77, 65, -113, 2, 76, 125, -72, -94, 96, 24, 25, 113, -9, 62, -49, 111, 116};
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
    msg.setTimeStamp(0.138586632254);
    msg.setSource(703U);
    msg.setSourceEntity(222U);
    msg.setDestination(6548U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("KGXVABPHCJXGXWKTIAOJBZODDHFDCESMHRFYPKITURIAJSULPWQLNGJWUUZGOGBMDWDLXZUQEIVLEMAYEVXXQKLHNMGJJYIGJAZKIRHEPMJCICGSWQWNFYRCRARLKUEMRVPWDZESAQWXCTCTUKBOZLNENZN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UGBOSPLDXUMTMBQWMPASIPRWUZHRIJDNSBHEJLJFPYWCRZEYOEZKNIHPMYXCUXZKECRJIIBJIDZPKTDHLLCCVIBWNWXNYNYVJH");
    tmp_msg_0.sys_type = 171U;
    tmp_msg_0.owner = 43739U;
    tmp_msg_0.lat = 0.81864657006;
    tmp_msg_0.lon = 0.359968583335;
    tmp_msg_0.height = 0.0123039349624;
    tmp_msg_0.services.assign("BANXZBWQRRAZQKWEEXPUWSGZLJJNZRXLIPDXXEKOKSEPMJCGMTURQOXKBHUNTLWWRCCSNPAUFIVDMEOEHEMOUGKRDJYNGULGEDUOJZQERGHZTFJQBBSMOFAAVFICTBSVSPFBNLRWHAQUKTFAHYAHYJKXVVWPIZSNLHLDOVPHSMCWVTEXJZLIGHGMQDYFABDLMYMNBYJFUFKALDQSMQNVIPPPVCYGHYBOJC");
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
    msg.setTimeStamp(0.440190232351);
    msg.setSource(26961U);
    msg.setSourceEntity(138U);
    msg.setDestination(47638U);
    msg.setDestinationEntity(26U);
    msg.localname.assign("KGBXMQEBDMYNUUULVTLKGVROBDQWIKANCNHOSSTTROYXPXBQJYYAGZVKROATNZZIJWGAFQLVDCPCKSFIQDBVCUIHMHGLOLSJAYSCZQUUVGZZLTTDSMNYYIQWNRHKDCPDDEAVUWVNHPRCRPCEAQHOIOWLLDQJWERRWFRHWGEAVXMIPEUAIZSNFFJHGPFHKUFFYOR");

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
    msg.setTimeStamp(0.429088035388);
    msg.setSource(3047U);
    msg.setSourceEntity(211U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("FXRTNCMHCVWGFKQSRGLBCNZAYJGJOZCSDUWEMUXXNZYENVQKVFRTCZQYGIWBYBMKTOOMIWYAVISAOLOZCRAPDNPDMTVIQPPQANEYBUPZTWGVJNOIGJFWXCULVIJMDXJBQLBZHFXLBXMZBRFM");

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
    msg.setTimeStamp(0.559114699727);
    msg.setSource(300U);
    msg.setSourceEntity(78U);
    msg.setDestination(38928U);
    msg.setDestinationEntity(4U);
    msg.timeline.assign("LNXRULEQNOBEJGRLPUYNDOPNMBEEJOVFVSESUCXUHHBFKFJYHPFXVFOKKDGTWKTHRFTSNWRQGVPGCUDFXEGBCXWJAVWBQJNRYLSASPLCIPQSJAYUDHJIMTVCBSKTOGAJYLTWCQZUZCMRPEABICJGNELDZTOMXZLDQIRCOVXYLYYKVMKPLAZPKTFHQQHIRINWIEDUWTAMEVAOINKH");
    msg.predicate.assign("LCDZVOZPXOHIFBVAYAJITQUIRQWVOTEIZTDCIOGCRDSSMBUFIJHCQQEXZOLGTNSFMTZWWFUKPDAHFEFOEUYRFTLKCKHXWLRJJGSNNBMJGTKESOVNRQBKHEMKPEERHPNUWRLZLTXHBZSFQHEZAYVGPJFRGUIUQHMCTVPUJWKAOLHVMMEUVGXWBYCAOGXYSZAMAQPPPSXMODRQYRNYJYBNCDDVINKNWKDZBDGFALBNSJSCPWV");
    msg.attributes.assign("SZDYDFQZIGABTHEWTAEXP");

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
    msg.setTimeStamp(0.732525391015);
    msg.setSource(17495U);
    msg.setSourceEntity(138U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("EOOETRGNIEWGUANLSMBVTKVQLLGH");
    msg.predicate.assign("RLHZMWUSFDRPOLOEVFLBBCRVWGSXPCBAVIEHOIYLVJ");
    msg.attributes.assign("DXREZZHSIRJEZAGFJPNYWTXCKRBPIVFYQKDCTIGCUHWQPSZMJJMMJXMSVOXBAOPNUNGJVASFNGDYKULPHCUKWOQBFNTEWOLSMCORHKTFVDZQZXTHQUDZXHUHJUFPCGZAYBMVPYBINNIBUGLNTRATOGWGGKIRAVERJ");

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
    msg.setTimeStamp(0.476072807669);
    msg.setSource(58886U);
    msg.setSourceEntity(50U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("IPPOXDLEDKGOBZWJMPMPDCQJQRHGMZGJNOMFSHNCZXHWWDPUBOOXAFFAEEEFTFITSKOJUWWXNRNBYDXALVUZARGBCYHTRGSXBVANCURAIYQKXOMVCWYQ");
    msg.predicate.assign("NOWJMGGLQCAYVRVLKQZSAFPLWRZAIXIUEPFQPKNGSLECQMVOYPCKFXBQGKOOJWHWNRGZHVIUSSNRTIGHUTETDSJWIBDFSGTVKMZXOTUCKFTUEBBVPJUARIJBPVXKDETMPCLOMYAHQSDLKXXPGYOVJHJYDEFHGBDYYUMLFACDRDMPWRXRWOBUCHHDECSNBXNMQLQVBJJKUXMLZZHWFGZYRSQYAVCOZIYPCQTZLKFHXJENFIAAISWORND");
    msg.attributes.assign("HWPHVGCBDJZXQHLVCXUDPOKKXKEGTIKVQPAIYPNUMYIGVWFBTFOECLLRJDENSGDJCNXRJTSDAFBWQRHZCARXLBRUZPUVTWDXUYZIKFVZJPOJHFQAUFMZULVOTXYEJEIJJVBTNGMNNQSGGNKISFHPQARSOIVWPGBECMFZYKIEAYBLGSLOTNYEUAYDEHLORSFSRRNSWJ");

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
    msg.setTimeStamp(0.363260680692);
    msg.setSource(38790U);
    msg.setSourceEntity(223U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(70U);
    msg.command = 254U;
    msg.goal_id.assign("KCJRIZQALEKVUDVKDEFPPUAGTWUTZOGIXPIKODDQQWPPZSNEFSNUOCRNSCMBWMJINXEHRVPFSYXVNQUPICUKSEG");
    msg.goal_xml.assign("GDDUGIPBWSMOIWLYPMXTUGMUTQVWKVRKEWSOELMFHBLBOFHLRLDRJAFJNZXVQOZULUAPBHPTLIXVGXTBPXOPYOIKPEDZGHCKIJDBBJHRTXTQYKNBSHECJFCVGOOJWERUXHRTCYNPLHGIIENIANZKGLKIQJBCYAJRMAHESFQZYAUUPNKSNAYJWVQMPTCQCAYAUBMVMCOVQNZRWXDZFGAQFGEMESLNSFYHZCWVDWJRZMQTRUSNFOVIS");

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
    msg.setTimeStamp(0.837880454753);
    msg.setSource(8216U);
    msg.setSourceEntity(80U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(32U);
    msg.command = 54U;
    msg.goal_id.assign("IMSNJGSDTKPNMTIXBNBPVRHJEXPINNKFYYKCRPQKSBSFJRIQDWNHYWALUZMRLPEGWYHYWXVSRWABDBFDAQRTMAQDFVEMSCBNAYFUCJZXMEARDZKZZUZVREFJIGDUDDPNHKTV");
    msg.goal_xml.assign("QSEQZURGFARHMYSLIAUHDVELNOGOOUYJSTFTJQZYVQERTMUBACUSEBBDXWGDIHWTNNXRXJXMLJZUSCUMJEVGSLDTNYELHVPA");

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
    msg.setTimeStamp(0.658331391027);
    msg.setSource(31969U);
    msg.setSourceEntity(224U);
    msg.setDestination(12500U);
    msg.setDestinationEntity(233U);
    msg.command = 59U;
    msg.goal_id.assign("IZGLBSYVDDUJXZYWKRRMTVGBAZSKNEDPUXUYPYCQGANYBJSUTPVHGJQXHHELRXSLSCTLNPQYWBEGTQHJEDOXIIGULEW");
    msg.goal_xml.assign("KGHDUKLNOWUIDRPJFISUYPEWTSXEBTTGUAAKPADVAQMSQGMMBDTWIZOTCNDWBXMRCBXORMSYATRYWHJKZTQXPKRDWJ");

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
    msg.setTimeStamp(0.654303457954);
    msg.setSource(31990U);
    msg.setSourceEntity(10U);
    msg.setDestination(1747U);
    msg.setDestinationEntity(227U);
    msg.op = 196U;
    msg.goal_id.assign("CKYZTWVFWSKQBNVTFJISZKPVTPCFWWDIFMETKJWBZXZOQPGDGJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LGJUGLWKEXRFMYVDFEZYJHHALILYNONWSUEPNBMKWLLJQUVEHICNAYXEQMFSUTXUPVSAMPIHOUVKOVKKSCKTGWBDZGQARRYEJCZAKOWXCABFRCQRVIZKGBZITVMSONXGUTFPCHBSDQQALXYJPSKMXEMEQRQWWALJJDHBSJFYHTRFEUGYTDFGPXUVSJLTXPZWTGNBHXAWBJMN");
    tmp_msg_0.predicate.assign("EYGHZJCSZLRBAOOJSZAJEFRVHEOTJNULEXYFKFPWKJREUTMATVQBIBVUQZWHNCYWYFSSSQPMRBOGNBYMGVMYJXQKDLQDENISDZNWDGMIRVKQTLMDNMEKFAMYIMSW");
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
    msg.setTimeStamp(0.157066748825);
    msg.setSource(27233U);
    msg.setSourceEntity(252U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(82U);
    msg.op = 115U;
    msg.goal_id.assign("ALJEYYDJSQCJVDBJVTCLXYAGBYIAGPFVHRXZWXTQSMXWXGMKMBSSDBAAAIBIMYFQTQCZIVNUNHTATOGPTIIONFALRQIQPKUDZLNZTIUHEPNLTKDDUIXWXDNGSOSLKLMVTWZMXOHOOUZQDZXPOJEHWRNUDECVRKSNAGEWKWZCYRHMJZZM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YRUFKDIEIETFZNSSYNQOKGMCQHZYHCGWPUZGKXT");
    tmp_msg_0.predicate.assign("VPDDFKGMLHIXJIYJBZHHSKFIIMOKCXRD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZFRUGOQCHJITQNCHTHCBZUKPRVA");
    tmp_tmp_msg_0_0.attr_type = 131U;
    tmp_tmp_msg_0_0.min.assign("DWZATSBEEZWKBQOMTHFYTSFLFFBDSZCEEGOLEAKA");
    tmp_tmp_msg_0_0.max.assign("SKWTSSQRAPPJXOMUDJSWQNJRVMHSMIFVTERBNISXXJKCGPMMFIHDHGESVJLSDAZOJQATCBDWXGGIYXLRTFFWIEBTMONLBAHHLCDWWIRKVKLEURANGNJRCANPKGHXDVGFEJGBZNLCVDIELUOBKNPPBACYIGYBQEEZKVVDAXAGNTUIVKJWKUROMRTLUCY");
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
    msg.setTimeStamp(0.716058352954);
    msg.setSource(6631U);
    msg.setSourceEntity(174U);
    msg.setDestination(42931U);
    msg.setDestinationEntity(181U);
    msg.op = 253U;
    msg.goal_id.assign("AEGFCSUGXVEJIEBAMYUWVFWLOVGD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ROXYPRNTVQDOZARNVUQYKYFISJHUBPKFDOMBETHKQXPSYAYACYNMFTMDZRNQWE");
    tmp_msg_0.predicate.assign("ONJOTXXYNMRWPSTLAOYQVGUYJRJQMFUEFJSNYLEWALHSWZKEHXHXKHIBGRPCGIYEDJCRWEMBTVEWKIKFOZBXMSJQVZIEFGGFPDDKRPMQHGYX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JRGABRQZXIIISPGGPGLYWDWNMVHKFLWDIHHMBEEBDIJARWCYDVZUJQK");
    tmp_tmp_msg_0_0.attr_type = 71U;
    tmp_tmp_msg_0_0.min.assign("OVHOLODETNSEDRJMCGTAXAFCPDFXRVISBQLVNWYLIJXMXDVHTJZOAPKSSOHC");
    tmp_tmp_msg_0_0.max.assign("YZYHRVAFEXOXBSPZUNDDLDHXXFMGIQNZCUPYOTXFHSHAFOHLYAEGFQUYYGMPWNEOXWUNHPLABKALGIIGVWAJJPNASNJVBLHCJOWGRSZGKDIKMAZTBWHCRQVVTOSBHZBJREMNW");
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
    msg.setTimeStamp(0.560806351531);
    msg.setSource(15379U);
    msg.setSourceEntity(124U);
    msg.setDestination(14236U);
    msg.setDestinationEntity(101U);
    msg.name.assign("PJLFXGESVWSXGWJZDTVIJOFNETSIOSEAXEVLABOPMONPHNGXQAPTEUSYYBXJEXCDFXKYMQDUYZIRUFUWOIZSORQYUWWLJRZGXLADHQCSSCSCOTZZTWHVPBYARRDDMTKLKIZRTFOQNHPBLWKAVKUPPBMVKNCRHOYHL");
    msg.attr_type = 3U;
    msg.min.assign("VQJQVNSTLZACIORNIAVAAFKUVABOBCZYTXRXFLPXHI");
    msg.max.assign("DVLLAERPNXWTBGIYVKSPWJFZZPGBIXMDQTWOOWEHIJSBZYPYU");

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
    msg.setTimeStamp(0.18638777598);
    msg.setSource(57128U);
    msg.setSourceEntity(231U);
    msg.setDestination(60509U);
    msg.setDestinationEntity(136U);
    msg.name.assign("TIFZPXMTBOMNZTYBVQKOSHCVTCWCRVEUBNXVNTQVHMAOGARKXDHEQQEZFHDJJLRPSMFKCUXYOPESGQKZDLLGUZGXVKWCBDXWEBNVOVUNFPKWLAYWTAGAQHRKMIGQJXHLWFAQMHPRIGSWLMCTOYDNEJZUPTHBWEXYRHOSGYTFDWQFVUJHBBKOJUPMNUYCVLXSPJNPJZCIQDYFZIAMLDRATWGDNZMYCSIIBISERXSOOCUARKDARUIYIGZKPEE");
    msg.attr_type = 11U;
    msg.min.assign("EPRVWRIQIFDZSBYMVPJVGAFNNCEEDZHZOGFRATEGJCSLWXFYQNZAXEUYSKQVOKLSTXIWZBQDHMULGJIZWFACFLJPHHPKUXUBWIUQJURTQCPLXGQDFBLRXHOIPNNEHMOVHYNZVGMCDDCRERAIKZBBQSBYWAHUYDJJTXMSNUZQGMCOAATISCGLTBVYYCNYLTEGODPUIGDPMSAEOFRNJUAPJTTMBQWVWYNHHOKKMKLZ");
    msg.max.assign("JBTCNMEQGQAJDYFJPOLQKWUTYZFWNOUPPHGNXSFOJBXARULDDB");

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
    msg.setTimeStamp(0.99904894226);
    msg.setSource(35870U);
    msg.setSourceEntity(226U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(148U);
    msg.name.assign("QJGUTNBYAQSTHHHTKQVQTCZPRRDOIFOJBZIJDWBCTEISPXUUIONEWHDPMFLAKAIGVCWOYKLVCFXUYJRBLSSGKEAKPRTLQJNVGOLKAESWHCMRJFMZYLESKMIWTDKEPPWUFJPTEXEUBZKONUMLCSVNOSYBJOVAHYZNEPWHIJVMCQJNXVRGMEXPXWMTVHFZDYLGMQWA");
    msg.attr_type = 226U;
    msg.min.assign("RCZEXJVRUVQRSKBGLQJKBMLOZZIEXDEPQLUATQATNRWNLMFJBUECVHNSIGVLKXQHPSMMRZHSWEWCJYHZBXOFJXDUDYDESGQTCAMSVKNGHNIURFADCFSMFAYJPFITYSPRMZEXVHMXYOHVEFSEUCPBWILWY");
    msg.max.assign("KYLPGXQOPZQDNRAWFCSGVODJWCJDWDIIKSHEDOGJTPGJOAPXFPQRNXRMTZFZXBXWKEGKYMNJUFPYLUIAOHMABWMVEGZCFYGTANSFNDTLVLQSHMTBAIBFRQQOQNZZNLIXCHICSLIAPEUDOUJEVHRCXMQMTHOKKGFVSLTBAKYCTYGRWYKNBCDZSUXUKXBNRQHIJIHHVPDKRTEMXCVWYASMMTWRLGJVEREYYUZUSLASJFWIUPBCVLV");

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
    msg.setTimeStamp(0.164342490866);
    msg.setSource(1838U);
    msg.setSourceEntity(145U);
    msg.setDestination(20932U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("QSKNIPJGLSIOUNCDUSXAPTJAYVJBQNRAFMWJDOVHGULZAGMCEMTHGAHFO");
    msg.predicate.assign("PBRNDGWIJHVVYEIMWGQXOVZMDBEVGIBFUNQLFVOTVNAECXTDBMNHCSCXPAFJVTQJRPOZJJDAJQRBKLDISGCUJKEWZTKKJQLXWHWTCRXVDFXFXNBKUPMODEYYQTZBWSMEJBCMAERACSIFGFKTRFMCUNNEHMUZSHHPGPGBFLUHESYSAUTWH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FHNNZKODDITXRWIGAKIJJWHBTBQLJVYQHLRTWZGCNILTFCEWSEQTFSSNMLDSFBUGSKOIVMFURN");
    tmp_msg_0.attr_type = 13U;
    tmp_msg_0.min.assign("RLIVLBYXXZEUOFDHIFAGQSVEVMOJKWHBEMSRDMXFPHPNFHCEQDXNINJIPPZXPFUCVLNHTLGZRQKQYUYVFRBBOPQRRNPNIOADKSUXAEORVMEWLCXYIBPDSUNUQTLIQAKOVCM");
    tmp_msg_0.max.assign("QWQEWAFQPYHORVXVCLLPQHNJGBTGVEANLTTONYPQCAXSSKLGIUKNJIHEXRVZTAXPBBEMSGUDMIOWMAODAOYOWLUF");
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
    msg.setTimeStamp(0.993550858701);
    msg.setSource(36694U);
    msg.setSourceEntity(72U);
    msg.setDestination(53583U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("UIULXQINYMIMSHHBTNVUHCMNKWOWSZBQRFLOC");
    msg.predicate.assign("WLXDPOGJGDCOEZMJFDYVMILTGEWSUVPS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PQLCYNJBBIEUICSWEXBJDLFTYGYZOQPPZFTPVGEPJDYVODVRXMUGLSTKAVUCQWLMHNBTNRQTKILQVFNXIKSNSSDCOPHSDLNKBGTKPRGMSMORNOOOCFHBGADHCUXGZBAFAURSMUXZJXTEZVMHMKROTLZYGCFFUDONOWQIZDYGJLAHVYQRPYJPAIJULHXARWHEBIEGVWVSBWSNAHMRWWWBCZQCUN");
    tmp_msg_0.attr_type = 20U;
    tmp_msg_0.min.assign("IVIYNQEROOIMUXTCFRUNVWJGIBJLQMAIEAGMJPNWUDBSINMULKEHANDAZBAZZTDQXXFRXRLXJHMNFQGUKRDWSYJTJYYGDBSPPWUNQQCOBARHWUAMOJDHSPGZCCCGFKVEPPTCVCNTQXLLEIKFWVODFSNBSRBSOVEEQHDCYXWATZFFYXYQIWVZRLNLFESOKKDGLWEUYZSMVFYBKPDPPLGWHZALO");
    tmp_msg_0.max.assign("HZMFXHQYQNLSXGSMMMWUIBPMNWIVCVFIQZTUDFWPRPLTSECEDZQEOXOSLABEIDUJIOZAIHEMTMWUBXXOSKQICKTPRYNSKGYBGNDYNKYVBOCQZNUYXCYFLRKGBJYBOICKZEAMZCWAVGMFUOCQKREZYCBPSW");
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
    msg.setTimeStamp(0.699526487456);
    msg.setSource(29638U);
    msg.setSourceEntity(44U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("RUYUGEXJNISWZJVINWJLMTLFTIOVXPA");
    msg.predicate.assign("ZEBWPZKZNFOFEKBESNUMZVOODOANUJCQFUCDSVURTUKMTXDFMMBYHWGKIHEOOVMARBKGJJDPWFPTBTQTPIAYBKSBVVCXLZSLCRKJAHQXCPYFIAQPQPVODIGYLOERCJMXZIXKQPEFHHZMNAXJVWNSOQXDHBNKNWLLENJXZQGYLCZGUJBPUTJHXWRLY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZBINNNRQECRPNGHWTLSPKFSWUKFDNIDVPYMPIJVGNJWIROQBOCDEFMYEUGRS");
    tmp_msg_0.attr_type = 139U;
    tmp_msg_0.min.assign("RKTFDBDLMXRAJOOKAHOGZWBWRACSAVKYPAKGEIBSBLAVQAOJUJQXHNJQDLRDVXHBZKSMMGLWLVZZUCGNZEUOFBCYLFGHXOJSFQE");
    tmp_msg_0.max.assign("LBFKVWZEUARELYABNQEAMQIPBOGEVJWQLMJMTWCVJXZOCAODEFRQHDWRC");
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
    msg.setTimeStamp(0.155541177655);
    msg.setSource(48104U);
    msg.setSourceEntity(99U);
    msg.setDestination(3562U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("JDUVOIVBMMOSRKIBRPUYHIWSODMVLODHPXLYMBUWJVTOEZZKVFURHGGTUAXKCQWZLVXIABCALWNHE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DMYUNGUHSTSHIYIGVJHPNUISUHWKUBVPCLLCZWYIEXWTNQOUAOPTEZGLXTMLFGGCSJEYCWUBJYSSVONSRHXZKQJZNPGCYDEHDLKWEBCLXPBFOEPJCJTHFAKNIXKYC");
    tmp_msg_0.predicate.assign("KYUCSMLEWDCZFWGJVBGWCZEDFSHXGVRWNIGODZJTPPLLNTRNQLICTOYZDTSWFAOJTEVVQDOMEQTWEANNVNIXBYUXYQVMBUOYPZZLFAJJGXRXXGMAACMAMKYDJWWLSQGLAQEKXVRJFCOOXAPCOBHCXHDPYUUKZIUISLQDSWLPCIPXZDLKKPAMRNSWDFBTHHQYHJ");
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
    msg.setTimeStamp(0.380665420386);
    msg.setSource(12375U);
    msg.setSourceEntity(189U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(25U);
    msg.reactor.assign("ZJEWDMKFYCSQTNSWVFEEBXLNH");

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
    msg.setTimeStamp(0.129950564888);
    msg.setSource(18026U);
    msg.setSourceEntity(132U);
    msg.setDestination(2728U);
    msg.setDestinationEntity(2U);
    msg.reactor.assign("MHAIWWQBJPKISXDZJH");

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
    msg.setTimeStamp(0.86456226902);
    msg.setSource(28333U);
    msg.setSourceEntity(85U);
    msg.setDestination(47946U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("DQHBSGIAOEOEMMQNVMOMBVKXPJMPTYDNXNTCSFCTZSMFRKJOYBZWTMHNROVUOKXWEGWDLZVJNTAZHUUISRWCERQKPYMTXYRLRBAJACCOLIGOWFGFHLRGMDPBVSQRFPSNFDZSYZIAXSGXTXELUDMUWAIEEBEUNYFGQAQICRAGTBKPYJYYOIAWBHXAPGZXKVTQUNIJCQDUSQIJVHPECJCDBZRGXTWKLHCFFYPPELBVI");
    msg.data.assign("WEHQVKFAZIUNJMTYINKVJES");

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
    msg.setTimeStamp(0.56307612592);
    msg.setSource(33385U);
    msg.setSourceEntity(17U);
    msg.setDestination(17252U);
    msg.setDestinationEntity(46U);
    msg.topic.assign("CBQFRXCHWPDTRHSAMZZZVLJRUPVSNNFSVBQDQGZITSUHBAMWOOCTLRGYEDJNNAABKVKMJOSKGDYMSYWOVJ");
    msg.data.assign("MZYVMCABVFIAEBVTIVCOHZWKEKBWBLQPWPUTSEODMXTCIOYSNGABGCRCCOJRUQLJSRIUFKGNWHIXHNHXOFZFCNTLQHZPOCPZPBI");

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
    msg.setTimeStamp(0.0560653198328);
    msg.setSource(29330U);
    msg.setSourceEntity(134U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(107U);
    msg.topic.assign("FFHAOSKDXUUOGGIMNHNUYDEMCXPXXYGBVRAJESBPHYNGLZGRTQUKUOFHFDJQIAZOZELJOVHQAWRRPPRBAMVEYSNTIBPSQXGTYTJLOXCYONJYKTGKDKCQEOTKUJJVZSZXMLVBKORJAUNSQBKVCYMYWJHQCM");
    msg.data.assign("YAKMPWDIOHPDNZYHGGBGPKWGRZPXVGMTQTUHKTVIRCCCJKQDLEIBFDLVLQOVEAXDZRYHWLFCXPDJWCZCASLMLEANRYTFZWQTGNYPDIZQJRIVJKIJSCROODR");

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
    msg.setTimeStamp(0.0184660714183);
    msg.setSource(26182U);
    msg.setSourceEntity(215U);
    msg.setDestination(22103U);
    msg.setDestinationEntity(84U);
    msg.frameid = 139U;
    const char tmp_msg_0[] = {91, -82, -7, 50, -123, -93, -49, -73, -34, -104, 20, -109, -4, -68, 120, -73, -34, 106, 11, -43, -34, 9, -76, 3, 46, 87, -79, -30, 24, 112, 7, -105, 58, -116, 22, 91, -96, 28, -19, -126, 12, 8, 104, -85, -90, 22, 58, 57, 46, 77, -83, -98, 75, -126, 57, 71, 99, 77, 81, 17, -13, -14, -26, 62, -79, 45, 113, -12, -28, 48, -123, 84, 40, 72, 124, 38, 90, -80, 85, 74, -119, -4, 97, 49, 92, 86, -91, -121, 12, -50, -120, -4, 74, -57, 65, 42, 39, -52, 21, -121, 61, -67, 42, 78, 125, 28, 9, 2, -52, 109, -31, 45, -126, -25, 108, -17, 111, -115, 63, -74, 99, 88, 37, 123, 114, 61, -120, -24, -88, -76, -40, -32, 78, 84, 95, -99, 103, -61, -40, 84, -21, -77, 20, -101, 53, 69, 75, 82, -118, -68, 123, 40, -54, 84, -74, 73, -37, 5, 85, 118, -99, 67, 114, -68, 27};
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
    msg.setTimeStamp(0.751640407262);
    msg.setSource(24739U);
    msg.setSourceEntity(71U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(62U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {-18, -16, 75, -70, -107, -92, 67, 67, 79, 47, 36, 83, -58, 3, -42, 41, -109, 27, 6, 71, -109, -29, 16, 113, 78, -112, -106, -44, 78, -56, -116, -66, -11, -118, 109, 75, -103, -38, -79, -19, 112, 43, 47, -45, -41, 92, 28, -66, -32, -19, -93, -23, 104, 82, 98, -127, 52, 73, 69, -85, 117, 0, -23, -65, 12, 55, -121, -78, -96, -8, 2, -111, -92, -56, -119, -5, 66, -86, -90, -50, -93, 34, -67, -59, 121, -58, 96, 65, -81, -96, -80, -76, 34, -26, -30, 54, -95, -72, -44, 64, -30, 74, 15, -50, 118, 68, 56, -10, -50, -65, -108, 46, 45, 52, -42, -26, -60, -104, -73, -27, -89, 11, 66, 93, -13, -70, -96, 12, -114, -10, -32, 6, -18, 54, -79, -72, -10, 48, 15, 6, 16, 63, 106, -66, 13, -59, -51, 45, 59, 65, 113, -78, 44, -107, 55, 16, 84, 57, -43, 8, -62, 22, 40, 36, -72, -42, -56, 47, 100, -100, 30, -16, -113, -116, 99, 123, -90, -113, -3, 65, 122, -109, -41, -22, 83, 86, -50, 58, -57, 49, 111, -86, -9, 69, -28, -106, -94, 126, -63, 72, 63, -3, 42, 49, 24, -85};
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
    msg.setTimeStamp(0.600955040519);
    msg.setSource(4713U);
    msg.setSourceEntity(57U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(10U);
    msg.frameid = 140U;
    const char tmp_msg_0[] = {22, -118, -34, 97, 126, 112, -71, -58, 33, -96, -91, 126, 89, 82, 78, 78, 33, 82, 63, 67, -11, 72, -127, -108, 74, 79, -100, 21, 113, 86, 67, 123, -6, -119, 99, 76, 117, 36, -60, -84, -76, -48, -32, -63, 40, -58, 33, 83, -84, -123, -81, -17, 66, 109, 95, 68, 6, 95, -17, -109, 33};
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
    msg.setTimeStamp(0.164311508903);
    msg.setSource(11820U);
    msg.setSourceEntity(54U);
    msg.setDestination(56241U);
    msg.setDestinationEntity(24U);
    msg.fps = 125U;
    msg.quality = 140U;
    msg.reps = 103U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.60970972211);
    msg.setSource(55806U);
    msg.setSourceEntity(196U);
    msg.setDestination(37240U);
    msg.setDestinationEntity(24U);
    msg.fps = 172U;
    msg.quality = 245U;
    msg.reps = 215U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.532260699053);
    msg.setSource(21589U);
    msg.setSourceEntity(48U);
    msg.setDestination(27457U);
    msg.setDestinationEntity(231U);
    msg.fps = 136U;
    msg.quality = 47U;
    msg.reps = 137U;
    msg.tsize = 145U;

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
    msg.setTimeStamp(0.218144188299);
    msg.setSource(46899U);
    msg.setSourceEntity(46U);
    msg.setDestination(21912U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.588789486908;
    msg.lon = 0.438852248117;
    msg.depth = 228U;
    msg.speed = 0.193347319333;
    msg.psi = 0.617192531099;

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
    msg.setTimeStamp(0.527699982769);
    msg.setSource(25392U);
    msg.setSourceEntity(185U);
    msg.setDestination(65524U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.332813746296;
    msg.lon = 0.886665672248;
    msg.depth = 45U;
    msg.speed = 0.0859987624858;
    msg.psi = 0.26903104911;

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
    msg.setTimeStamp(0.556865421454);
    msg.setSource(8694U);
    msg.setSourceEntity(40U);
    msg.setDestination(28246U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.42853434745;
    msg.lon = 0.215933278951;
    msg.depth = 80U;
    msg.speed = 0.67689672531;
    msg.psi = 0.910112894261;

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
    msg.setTimeStamp(0.727446001285);
    msg.setSource(19980U);
    msg.setSourceEntity(28U);
    msg.setDestination(40134U);
    msg.setDestinationEntity(16U);
    msg.label.assign("JSAYPMLOSKLDFBSXWAUNYVABMRMOUWSWSTIEVIPUIGZXZHOQRFXKQANXHFASOEMXWXRJNAZTRRCICDGAIEDFGVQEYXLDLFCFMEZRNUQNEJNXNKBPBSLLVMPWWRUVCHLJOFSXUCSJLHMGUEBICFJHBEFYQMTYOONPJVGQWPTYCTOMTCZIGZZLYNWIEHOPJKQHDHDQJKAYYPRDVCVZZDHGSLTAQBJRZWKBRTGKPGFQIBDVCEKUU");
    msg.lat = 0.891019670234;
    msg.lon = 0.666351798462;
    msg.z = 0.0513943141926;
    msg.z_units = 13U;
    msg.cog = 0.0344747904497;
    msg.sog = 0.691250837455;

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
    msg.setTimeStamp(0.723483100781);
    msg.setSource(7535U);
    msg.setSourceEntity(109U);
    msg.setDestination(4845U);
    msg.setDestinationEntity(193U);
    msg.label.assign("FNATARPMYOMJTYYVXOSZDMUVPBHIWFHQASLOLABJBTENBJXNVQZSKDCTVIWHJKRMMRAPQJLLTJHSXTVZUGB");
    msg.lat = 0.413305399463;
    msg.lon = 0.270061248362;
    msg.z = 0.479498321221;
    msg.z_units = 126U;
    msg.cog = 0.715391898772;
    msg.sog = 0.11619239702;

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
    msg.setTimeStamp(0.680843547321);
    msg.setSource(13271U);
    msg.setSourceEntity(31U);
    msg.setDestination(6810U);
    msg.setDestinationEntity(204U);
    msg.label.assign("RSBWIUARKMBWSEVLQGFAVOALCLCSYWYIQHYNZMDQGXOCKJSECWXNKBDHEEFGFFODTBYJARVIMFDDTKTCXLUJRLMAPHTRHEYBPQSCANTWZELYHIBVHWZMCMITNXOVKOTACRSEIQNKEDHQYAMGKPVOOUGZGPJSISKRMUOZUHDVJGARBUYLTXF");
    msg.lat = 0.812356395498;
    msg.lon = 0.557616353883;
    msg.z = 0.016387092027;
    msg.z_units = 157U;
    msg.cog = 0.0849206294512;
    msg.sog = 0.545889869359;

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
    msg.setTimeStamp(0.134238410172);
    msg.setSource(60145U);
    msg.setSourceEntity(99U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(64U);
    msg.name.assign("ZEUDZTIRKLMQRWZQYGXWJBWNVJPBXNYJBRZKSYROVAYEPVDJSBVHRTGGHCCVPKYHGDNKJRCOSDQGGNAWFUQPJFZUZTYTSSSOTHDHFHOSEJKATBFOYEUVDWZNURAVTIOCLNOXWLNQILSLBVPFLHYPPEQNCLAMXZDGXGGJGCWQKEMSUUFHHWLBZPINXBPKMFAEIQQAYMFDXILEMVODHFNAVMAQKJEWIXOMCCFTURYCJCLZAKXIODBPTBRU");
    msg.value.assign("HYJMYPGIGJVVNSXDDZFREKFWNGOZBXSOCHJHELGQJVYBITTQJOAKXQZEQXYKRUAAXNWM");

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
    msg.setTimeStamp(0.377243744062);
    msg.setSource(48798U);
    msg.setSourceEntity(144U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(120U);
    msg.name.assign("QUGRESMZNLGWRNEYHTJKFOOJTMCGRGPRGPSPFILPHWEUXGEXLCXVSDTKLRCCKKPSYMLHTJPEADYYCCOYBJNLWOCWKKJILTZSVXYLNATIWAIHGXZCJZKXBUUKSNZUEPUTAAEJSMFHHTFSTNJYWFBDQCFHWFURVDYDEEIOVLVVOQMXVXZZQOKHIGPXBINQKDDAQFBZRIFJBBYERNHCSJWIVTPQIMXRZMDPAAHDUBNY");
    msg.value.assign("QOHLWTAOPZMCFXTVCKXUGJOTQYCIMZYXOSJGBVYMGAMWBGNCNYWJXZOAOVRLTEOHILRZSRSQRDXLCPOJEURBDWPBBUSKAKQTEYDHVFFKJJJFYMSAHEKCFUXXIUANPKSIPPXTRUSCSEQBIYDBRSXHWHWILIETPWDDWEXLUKMGRYMGQAFBHBKVVPNRZQGVF");

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
    msg.setTimeStamp(0.928970570915);
    msg.setSource(15349U);
    msg.setSourceEntity(199U);
    msg.setDestination(31551U);
    msg.setDestinationEntity(153U);
    msg.name.assign("OZPWMFHCKAUWHXQYCECXOPGGCRCQEIAJPBZKONUIMSVHQIIIBAWFBDOBK");
    msg.value.assign("EKLXFOYUVHYWUOPPMHRXXCZMMKGAOZRVQTGKZDULRABHLFCQHPTVFLGLMAANGQJEKCVDMVSWOCBDCQQIFRSQMCGVGCIIIHEDDGGFMDSOMGSFYDESJWWHFZLDCWKBSWFJEXRXYTAOBHRFOLYVSDVUSZHQTXIIKZYUNTEQUZIJZCDQPEBJPBOERIXNSKYXAPBRZNWFVYJRRJJNYHNUXPMITTNHBPBQ");

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
    msg.setTimeStamp(0.0571407555161);
    msg.setSource(28699U);
    msg.setSourceEntity(24U);
    msg.setDestination(50172U);
    msg.setDestinationEntity(236U);
    msg.name.assign("OSDWAYTRRYZUQONMAPGFYQPHCVYOJUCJRLEKNUZIWCQSZCEIJMDICYBVCLCXMXTDMWVNHLBPLPARHJJDFKWXONYDHSAAUIKSKBQRYFELREBNQKSZVXZJUZVOXVJTJEHFPPUFFIZBBYWSTHRAKNMNUXVLKEQNBASGPUMYKLTTARFHXEGGOTVDOQTNKWBFMWVUIOWEZQHGVPDWMFLICDAHROSN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YIOCKDZZBIJZCCHNXFWUBGENJEQVCZWLX");
    tmp_msg_0.value.assign("EWTXXZUHDLEDOXUWHOYPMCJMOKRHSWSSIFFLYNSHPAEKGUUKNBKIZFZRTKXBAIQWJLQVJWDXNWYKLEEAWQVZDSSGBRPFTTWMCQDVGP");
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
    msg.setTimeStamp(0.402124366195);
    msg.setSource(53915U);
    msg.setSourceEntity(203U);
    msg.setDestination(47913U);
    msg.setDestinationEntity(17U);
    msg.name.assign("TEYMFBNZJOUGZTHXMZTCIGUBZTRGRDPWXQLCNKDIXPXEOBYWMPNYOKWCTNVVAJEXAIJLJUQNFTOTZFRASIVEXNJGWVHPWDCLMNHMIYHQMEOJIYCKNEWBCYDESQDFYXEZIWMUIDAWLPDLPFARKFYGMWURSSTADAMEQUPBBUGUJPQLHKDXSNQFOOF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MXLXSYLBAZAAGTZCHBOIJSQTNIXAFYJHPZNSIIPWDHBXVQPFDPHMWALPUJUUZDUJYNYUIVCKAYQPDFYBEQMZYRVQFHRRSKAFTIHDZHMDCKSEWHUQNORHSDEIOUUGXPNCRWNVSVAPKLETXLIOCSGAZDONTKELVEVXJRTBMHMCFBAUKNRRLNZPTMLWVFTOGGWBBSBGFDJRTSFORJGVKMJXYWQXNOMUCBQQP");
    tmp_msg_0.value.assign("VYZYIWQYPBTEKJILCWPVGKSSQYXQSUCTDSSMXFZWHEIOOZUDQ");
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
    msg.setTimeStamp(0.590625546512);
    msg.setSource(14419U);
    msg.setSourceEntity(203U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(121U);
    msg.name.assign("OOQAVRUQWEFDTOUBKODWOXJKTCLNYZAPCHQYBZBECZVUTTIVTRJGPEMGFOLPMLKNIUANQXIRZDBWCDPZC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NYWWUVSWQBNOARVIHIJMSRZCQSWWCJUJQXANFPKPETDUPKAUEZQTMNHWPOXITEFOVRHOINJOHIEVGKYJFZZKFATMKSZPFNCLYJGSHXNUJDLHKWVUGLECEWARAMFUEFHTDGDKYBRPIWVAZQFBGTAODYXGEODKXTYEM");
    tmp_msg_0.value.assign("MCTATOXKUEJERPSCIJWEPREOJNLPEOFHFVLEWQKUYVYOZHJYFCVGUOJRKISWYBPCMAPMAXDLMFLRFDKWUTVQBYTBUYAOCCZNIZRWLTNSQIVRDGNPKBYCGAHCRFEDWBTXXONHZGYTSIZZVOTCIBRXSIJXMMWSMBYUZICSDQMWOAAODGDGIHTLKNQIZGKPJFVXBQGHRYJHAFXZXJRLDUKQMGBWULSQMNNU");
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
    msg.setTimeStamp(0.677440395485);
    msg.setSource(48918U);
    msg.setSourceEntity(155U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(215U);
    msg.name.assign("ASIYAWGROQHKJKVKFRDHJVITBNKRQMTKOGAGQEGPCQPZRTORCQDDFEXWIAADXLIWOXSABZAUEAGFHBTGQYPBUYCNFSROVKEXVOWTESZKWYXUUTPLZJYDZWHBZZWMGPXKBSYFAGYEENSNXLVRCSVVBRHUAGUL");
    msg.visibility.assign("MPGRWGUOAXFGZKKOKUSXLNHQUMVTM");
    msg.scope.assign("LQWBAGWNATREOTKWTBCIIDQDVYQYCVXNNJOWZKWKDBKUCBLDKMDZHAAMSYXRNPIKDNWMVVRHBRXLJBNRRWWSFGGFGVCTUMJWXQYCZJHRMIUPZSSRNYPGDOGXOOHKOVLUQEBFOSFYAUCJRBGQSFRTIJJXOTCFPEXLYUMGJQFAQIIZUHMLQIEAFHXPMAEQDFWTLMZTADYJTNKEEHCPBHJHIXVVOPMZYPEZCBKUPLESSUFOLH");

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
    msg.setTimeStamp(0.753895305274);
    msg.setSource(53949U);
    msg.setSourceEntity(8U);
    msg.setDestination(22503U);
    msg.setDestinationEntity(45U);
    msg.name.assign("UFVJFJPOWJICYXTLQHCBULTPORHAWLNWZURQCNFXDRWRNKTUYSIGSYJXCAWADEUXBTZGRZZHLZTYOPFBNQQDZJVOVWNQMPHHWCRENIFWDSYGFVUQRSHMDBFUCCUHTICMDDZXQBTOTPJYEOKESEHVGMNMNIVJGXJPPNXSTKYVMHOZEIDABSALGGWMNVBEAOEQLIKSLRKMLASPXDZOPJSIWBGMVKEIUVJKOKBE");
    msg.visibility.assign("DPHNCUOBHEKGZBTTYYJSGK");
    msg.scope.assign("WKCTZIAXXPOPXLCOOVIYGWN");

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
    msg.setTimeStamp(0.488683103777);
    msg.setSource(61346U);
    msg.setSourceEntity(5U);
    msg.setDestination(38248U);
    msg.setDestinationEntity(136U);
    msg.name.assign("USGANKQAGXZAEWOYTCDLOSWZVYWMDZNJTGHNIAGPBWANDIPRQHXXZFQXNMFVHLWDOJFRJIOCFXNSZEHAWQAAJVNCUOEJLGIBKJHXVTULMHJUKFLURPYIICCQJUHWTYLWBTMVQOBSVBCZANTDRHSFPXYISXCPAMESYBJKE");
    msg.visibility.assign("ZOVOIAHHPQWNATCAHQTGRCJPPEENMAYZXQSPLHDVHFCLVAKVZGWLUVJUXCWCRXMDTICXUQSQTZGHKJJBYQDYISDSDBNOLLZFMRFMDSTOULNAENKEEBEGTSWWKVYJTVZXYCMYWHTMTCOGFMXEYEGQPFYSPDGKIJJKDBDFRSWPTHRUINRKQAMVOHGU");
    msg.scope.assign("HFTEQLYLYGWBYHNVGJSFMLYXGAESFHAXMDXEHKWHCGSOKDBWILRNRPUBSOBRKPIOOUDVGMECVJJGSZQOZATDNONFWFPLIYVSDXOWSYPMRZIBJGKAFPOMNYKTBMNIQZWCIAYBDUTKEALCXEXSRMUQLVTWVKQKOTCIRBEYICGQZEWXCVSIXNNEYJTVPZQHMDNTPPFXW");

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
    msg.setTimeStamp(0.8953509326);
    msg.setSource(52510U);
    msg.setSourceEntity(231U);
    msg.setDestination(25599U);
    msg.setDestinationEntity(110U);
    msg.name.assign("HYNNUAHIJQOVAZTNPRDEGNCQASBTBJFEMNIDEMGLLEVUCZVUXZDCWYHLKIWPVBMZIFRFUCKBRRUHYSHXZYKTYRHYLDEIITWLFMHVASDLBQFJKXPLTXWMXBMOMZTSWPWHEWGRMUPLDCSCPPRKONSTMRKCCOAGGSYEORMWXYJFQHDVAEJVXSCYFSZDTQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XHLELKBHGXZUPMWZTCOHJQJERXOILCAVWBIKZURQBSYMSTVBXYWNOIQLWHCLQVFLUKFPAWWFJCMMAAVIBBGSFRPKTOCKLAOMRDNVZCMOUZEOSHJPNXSMEJCGUADRZQJQFAICJPKJTMYEOGYYGXSQNQP");
    tmp_msg_0.value.assign("GHBHOWAIPWDOLTRPELUFPQKHKUBCJAGXITAEWIQQWKBXUKVRCHNVWOJRFSMEFYFYRHZPKXLPFVFJPIDWBECJTTSBWDRDQEYRPGXBNMSKXVQPYILIMYQUKCYEVUGUOTNYSTMOPNGADEDNPOJZASHTWYGK");
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
    msg.setTimeStamp(0.683167558325);
    msg.setSource(34601U);
    msg.setSourceEntity(123U);
    msg.setDestination(24931U);
    msg.setDestinationEntity(96U);
    msg.name.assign("JKBABJRTRVPKJEATZMWHBIVSZLMYJMMRIMATFIORJVGETLGGFZFWUHNCLZUJSFAPTZBXZMVKPNOGWOVLYUZXOVDCAJOBNRRDUWESTSGIGXDLESNIYYZAQP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YSVITMKHXZKTJIGPYHOQNDALWEKGAFRZMOTUCTMEKZWZVONBQNXJWSWBRXFTGLQJOBDEP");
    tmp_msg_0.value.assign("EDVGAGSRIAEMUIFMJINGWBKBOUBCKJDKXLAWSDLFHQQFQRUWHEMZNPSOHJYKESCFMPTOFROCHDXOYAZVMSJWQUWLWRJKTLAAUKUIRVKQYAZHSTFBVILBXCODOVWZISJCRKMACXYPGTRJQFQENRQEZPQOIFZGTMKZENIVPUHTYHXCZDOWTMDVPEEJNRAHGWHOPVXUXBXZVLDNNSABGRXQKPVILGFSBLGTINUZYCMPYTSLJEDBNFJXPLTYYBHU");
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
    msg.setTimeStamp(0.035783424574);
    msg.setSource(22405U);
    msg.setSourceEntity(23U);
    msg.setDestination(23195U);
    msg.setDestinationEntity(135U);
    msg.name.assign("VOTJFYRWESFKIDSZDBMFVSNBDNQHNFTRKIZKGAJIVYJSZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BOTSXTLJWFJRFEPWFIAXZUPWFRMOVIOABSCSPBTRWBJXPBDZMUOXEAEVOPGNYQYNSUTZQNIVYAURGURWMKQO");
    tmp_msg_0.value.assign("OFKKORPVOWRRNTUDMSQQYCYISVJWOPPYBMMDACALFLDRVSQJTCQFXYJIGPETFNHFDPSMRGAJEAWEBTZJIDZHCOKJOKUSNTXYI");
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
    msg.setTimeStamp(0.571584094849);
    msg.setSource(23948U);
    msg.setSourceEntity(157U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(47U);
    msg.name.assign("XCUITQQHLAOLJGYTNVCNHBRNJOOYXUJIPEGGJKDCSZOFPROCFTPMWXLKKERNAORMCLEXLHBWYIFADROBIRXURUENACDJRBTXMZOQDGRZPNTYBPTXKVRMPDJATPFFFZVMYMLAVNBKKSEZHHZWVZBKNULWWIPSVUUASWISJMOQGSEHFLYGYSJSUGOGBDEWFCMVDMQVAUDWQZXDFQCYNHT");

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
    msg.setTimeStamp(0.538926226512);
    msg.setSource(51536U);
    msg.setSourceEntity(36U);
    msg.setDestination(55217U);
    msg.setDestinationEntity(82U);
    msg.name.assign("SHVOTVNNJXWQHKQSUIITFPBATGVSRMQFTAIDKEKKRFHAZCVADXMGOSNGWNZWOQAEMNZZGQYHYSJDXNOQJUNOWNAMZXPGYRYLJIRLJLVEVZWQUUSZAGIBUCHTPWMCZKYZMEPLKXMVOFJPHUTPRGAVRFPHLBDPTOG");

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
    msg.setTimeStamp(0.54294923999);
    msg.setSource(56949U);
    msg.setSourceEntity(180U);
    msg.setDestination(46820U);
    msg.setDestinationEntity(204U);
    msg.name.assign("RIYGMUWRNZNVYLGBPFQWSXSOCJRNDBZPSQSEXRVJZVKPKPOI");

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
    msg.setTimeStamp(0.606500895516);
    msg.setSource(62849U);
    msg.setSourceEntity(28U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(114U);
    msg.timeout = 3498195456U;

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
    msg.setTimeStamp(0.634695862651);
    msg.setSource(23938U);
    msg.setSourceEntity(192U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(142U);
    msg.timeout = 154415731U;

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
    msg.setTimeStamp(0.248699566683);
    msg.setSource(12191U);
    msg.setSourceEntity(126U);
    msg.setDestination(33196U);
    msg.setDestinationEntity(242U);
    msg.timeout = 1192757369U;

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
    msg.setTimeStamp(0.7305419135);
    msg.setSource(51690U);
    msg.setSourceEntity(197U);
    msg.setDestination(50639U);
    msg.setDestinationEntity(1U);
    msg.sessid = 1728923735U;

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
    msg.setTimeStamp(0.968401227301);
    msg.setSource(37437U);
    msg.setSourceEntity(147U);
    msg.setDestination(53616U);
    msg.setDestinationEntity(103U);
    msg.sessid = 1327717962U;

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
    msg.setTimeStamp(0.774098409231);
    msg.setSource(34929U);
    msg.setSourceEntity(235U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(165U);
    msg.sessid = 1750811595U;

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
    msg.setTimeStamp(0.595049378372);
    msg.setSource(7001U);
    msg.setSourceEntity(55U);
    msg.setDestination(5913U);
    msg.setDestinationEntity(96U);
    msg.sessid = 411653839U;
    msg.messages.assign("VFZTRAWKJFIRSLJYNIRWGGKQCQHTUZWPVEBOBEGMBTFPDRCOGARNEBHEUCBYXCMBZFFJEFGIKNKCJDBKD");

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
    msg.setTimeStamp(0.973769452196);
    msg.setSource(21116U);
    msg.setSourceEntity(89U);
    msg.setDestination(41065U);
    msg.setDestinationEntity(59U);
    msg.sessid = 3257913520U;
    msg.messages.assign("MECGKNNSWBRKNUFQZEHAXOOLYVNEMDQZJBWGBBNZLVTUTCAJMJJGASNRDHLDMARBOYACTFYPJGHOEVPCYHPTOHICSQLGXBLJAKBCWUKJXRPYKYXYSVZEGDLDMZWWQRQXWUNBHTOKYQYCOZA");

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
    msg.setTimeStamp(0.372788180631);
    msg.setSource(29881U);
    msg.setSourceEntity(22U);
    msg.setDestination(1170U);
    msg.setDestinationEntity(18U);
    msg.sessid = 28107136U;
    msg.messages.assign("NWJZPVTZYGVJECSSYZIXJJBNLQHMUEENYAH");

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
    msg.setTimeStamp(0.580639827642);
    msg.setSource(36557U);
    msg.setSourceEntity(3U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(90U);
    msg.sessid = 1901787667U;

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
    msg.setTimeStamp(0.244287003948);
    msg.setSource(57701U);
    msg.setSourceEntity(129U);
    msg.setDestination(49191U);
    msg.setDestinationEntity(175U);
    msg.sessid = 597240261U;

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
    msg.setTimeStamp(0.397615053388);
    msg.setSource(64619U);
    msg.setSourceEntity(244U);
    msg.setDestination(2853U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3711208394U;

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
    msg.setTimeStamp(0.421539555057);
    msg.setSource(36488U);
    msg.setSourceEntity(170U);
    msg.setDestination(45068U);
    msg.setDestinationEntity(210U);
    msg.sessid = 960190837U;
    msg.status = 107U;

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
    msg.setTimeStamp(0.738729806062);
    msg.setSource(44508U);
    msg.setSourceEntity(98U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(140U);
    msg.sessid = 2402494917U;
    msg.status = 59U;

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
    msg.setTimeStamp(0.664875401574);
    msg.setSource(20780U);
    msg.setSourceEntity(46U);
    msg.setDestination(45390U);
    msg.setDestinationEntity(237U);
    msg.sessid = 671859242U;
    msg.status = 215U;

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
    msg.setTimeStamp(0.755225240479);
    msg.setSource(2981U);
    msg.setSourceEntity(45U);
    msg.setDestination(45571U);
    msg.setDestinationEntity(248U);
    msg.name.assign("QDNOBQRJSDMZLJYZMDEBKANIOLWCAXRPGKYKZIXXKMSYMWYZHWUIVMQNGILBCIGNQCDOVONPFCUZ");

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
    msg.setTimeStamp(0.0671406077588);
    msg.setSource(58523U);
    msg.setSourceEntity(6U);
    msg.setDestination(58931U);
    msg.setDestinationEntity(133U);
    msg.name.assign("AOBCJPBEFFVYWOPBXWSSSOCSGMTALGQUFTBCDQLLVVBFKIRRFEEZZUKSMCIGYRTIYDDQDAAZKPMJTONUTGGEPBLLHIVIAPQJDRTNRNBKHQMHNYFKMITVLCDVZWVZWUXXMPJKWHNXGQWGZVTHWYJKWWESUIQORDJIUFJSBRRKKXHHAXWZELJGPMISQTHOXULOEDHQEOAOMCERFYLCQEXNPFPODYIVNNDXVMCG");

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
    msg.setTimeStamp(0.201072338181);
    msg.setSource(37864U);
    msg.setSourceEntity(71U);
    msg.setDestination(44021U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CONJTYYACWGVRUHQLZMJLPXNZOXDXXVTEAWZOWFRUPKKOMGGWZVDBICZBTGYPPCRHPHHPQFFLV");

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
    msg.setTimeStamp(0.753949524232);
    msg.setSource(2763U);
    msg.setSourceEntity(15U);
    msg.setDestination(52775U);
    msg.setDestinationEntity(116U);
    msg.name.assign("ORRSWVVRHJSLMCDXBNRKGMEGEHQVUYKWIDAQSTBMAARCIWLPHEEXGQFHYQORLAWTORVUXVNGOCOJKWPMVCODXOJCZGIWCLVISJGGXITRPFNALUYDGAYMPEYYOELFXNDNZSNIQDTMHFKBCLQUWKQHBTJLZCNDFUSQFPTVMMRPUCKXFYOVGITKJGEDJIKLBHOABDBDMTLMFZZPPQQKUHFZNBASWEJBSZUPXTNRBICFXAS");

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
    msg.setTimeStamp(0.695490474584);
    msg.setSource(49986U);
    msg.setSourceEntity(167U);
    msg.setDestination(3195U);
    msg.setDestinationEntity(166U);
    msg.name.assign("LUGWIMFSEYFJCZRXURMGXQFNPOQRUIFQKNVBATMCLIIUIEXBEEKDEKCYCGKHBTPPFVVKVWWDDRIOQULJHTSAQRNHSOVDDTFOJWGWXYAQZKEGAZBDUUELYBFMSNWPYWKZMSPMANBGLTLGOHXWAUYGNUMIJHHMYNHIBMTPJTXCRVYVOCORSOALJLRQKDQKNSPELIEZRITZMTXJAXALBBUFDVCDJNRVQJPQYZCOJZAZGSSFXVXTHCP");

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
    msg.setTimeStamp(0.242538030022);
    msg.setSource(40765U);
    msg.setSourceEntity(4U);
    msg.setDestination(59250U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NJQKBHKEOTGSMWLECGQVJRPTTABXVDEHLURITKJPZGBSRAGUHNOOYGGIALGLIHAMRANPGBZLEVHTUNEWMMXYBFQCXWUBNCPIQJHKXZMPUOKXCTMTMOVHXZDRKFZQCNWQDREDMYRPJWNKFYAPYIZIBSBASSVAVCNMNQZECWVBWIDWYMOXGZSVLFDNJGEIPYOFATYZRFHQXUVKSDICELWVPDWUQUYXO");

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
    msg.setTimeStamp(0.0456663397323);
    msg.setSource(44100U);
    msg.setSourceEntity(45U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(200U);
    msg.type = 188U;
    msg.error.assign("VWKFGNOLDGUXSOBPNUWUWJHGXRXQACVMGZHNYSBVTUPNKDBJOLIOAPBKZRTTVKSEVMJVDVPOXAXEASD");

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
    msg.setTimeStamp(0.618050258423);
    msg.setSource(10914U);
    msg.setSourceEntity(243U);
    msg.setDestination(3505U);
    msg.setDestinationEntity(47U);
    msg.type = 252U;
    msg.error.assign("JBXAECNIPBLHQDQCDYQUAKIALPYWAEYMTGBTXYVEFKFXMAUDDOOEJSDBYYIBAMRNPZHDVGVBNWREUUJFJSHQRXBVPGSNMICJSCMHOCYSMZVZHTZMMKUBJADSFRWOEPR");

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
    msg.setTimeStamp(0.501769542799);
    msg.setSource(49895U);
    msg.setSourceEntity(151U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(63U);
    msg.type = 207U;
    msg.error.assign("JXWOTFHRDDIQBLLSJBHUNWVEMNMJLPCVMGYMRVSPWKWAZVHKKXFFULDARNLZVNOEJRCIDSECQTBFWUMAUIHODFYTQZQDYKBNDTQC");

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
    msg.setTimeStamp(0.937737463401);
    msg.setSource(63666U);
    msg.setSourceEntity(82U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(170U);
    msg.seq = 59153U;
    msg.sys_dst.assign("FHFEHLGNGBCERDIADLWBSYCVRUKGBKNBJLLHMSVQDJEJAGLMGNDWZZBOZJWEMOFDTCTHQNQYOCYDUSMRZRNUQQAOXSKJWCRHKEMLNZSQXUPIRIBEWPFZPTPRIPDYRPJDKNPXQFXAFTNUIAAASYUXVLBEHQIVGWHVYYGNCWRTJKCMXRHWXIUIXXSJLKQTAHMSIEOFFVVOVWZBYDENKLZOOAGZCSPOBJFT");
    msg.flags = 1U;
    const char tmp_msg_0[] = {-60, -63, -103, -93, -55, -10, -41, 89, -100, -13, -43, -76, -51, -41, 58, 22, -123, -121, 29, 103, 93, 82, -96, 87, -107, -73, 92, -122, 48, -64, -43, 88, -103, -4, 59, 5, 74, 56, 105, -101, -62, -55, 120, 93, -10, -78, 61, -34, -96, 72, 42, -38, -95, 59, 50, 70, 91, 64, 12, 92, 97, 76, 112, -102, -25, -115, 39, 15, -47, 126, 15, 14, -74, 31, 81, -77, -128, -68, 126, 126, 25, 35, 105, 112, 81, -46, -53, -96, -122, -91, 111, 43, -66, -113, 70, -18, 32, -17, 66, 105, 67, 117, -113, -55, 45, -1, 107, 74, -128, 11, -59, 99, 107, -79, 10, -22, -73, 67, -23, 19, -92, -4, 76, -106, 37, -52, -44, 9, -35, 82, -95, 71, -48, 25, -124, -82, -101, -117, 56, -62, 89, 78, 111, -50, 84, -83, 44, -34, 34, -84, -8, 117, 122, 71, 25, 67, -8, 95, -97, -99, 25, 21, 71, -108, 31, -75, -59, 1, 55, -72, -83, 118, 104, 38, 117, -112, 52, 34, -1, -43, 121, 8, 68, -83, 52, 42, 52, -21, -103, -57, 86, -34, 109, 0, 19, 45, -46, -119, 60, 77, 47, -26, 3, -125, 89, 89, -66, 7, 4, -116, 10, 90, 6, 27, 114, -85, 91, 108, 108, 28, -91, 99, -73, 88, 22, 44, 77, 126, 64, 9, 52, -90, -114, -47, 44, -39, 19, 20, 6, -59, 87, -13, -105, 112, 46, 33, -123, -50, 2};
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
    msg.setTimeStamp(0.889856964102);
    msg.setSource(57670U);
    msg.setSourceEntity(68U);
    msg.setDestination(20377U);
    msg.setDestinationEntity(216U);
    msg.seq = 51481U;
    msg.sys_dst.assign("IVXZOWNKEGARHDKUFMYWRBDWMZBLKDWQCQCMNTPYZAFSXJJEOBBCVJFPXULALTVBIFIYXORIMQJDKLHWNPATAVFPNSQZ");
    msg.flags = 114U;
    const char tmp_msg_0[] = {-56, -10, -103, 68, -90, -90, -59, 6, 55, 117, -20, -39, 50, 62, 97, -30, -42, 103, 108, 59, 19, 19, -39, 45, -113, -61, 28, -78, -36, 72, -79, -33, -1, -77, 67, 108, -114, -6, 51, 88, 126, 122, -76, -5, 79, -101, -18, 123, -30, 108, 100, 51, -71, 114, -98, 67, 103, 61, -18, -20, 58, -123, -14, 82, 26, 114, -107, -89, 86, -123, -38, -119, -105, -29, -56, -60, 30, -31, 68, 83, 28, 9, -86, -45, 74, -116, -57, -9, 93, -102, 123, -48, 10, 9, -9, 74, -48, 106, -36, -30, -7, 119, 68, -55, -15, -118, 93, -121, -102, 107, -4, -119, -46, 17, -62, -27, 69, 38, 32, 97, 5, -64, 109, -82, -64, -61, -25, 91, -126, -110, -99, 65, 54, -128, 72, -53, -81, -123, -110, -127, 55, 82, -12, 2, -76, 104, -112, -17, -41, 2, 49, -35, 26, 123, 80, -71, -81, 0, 124, -39, -55, 86, 85, -56, -16, 116, 25, -77, 108, -123, -55, 81, 121, -39, -48, 63, 109, -82, -106, 101, -70, 118, 71, 115, 81, 8, -103, 29, 77, 123, 113, -91, -21, 97, 108, 24, -106, -80, 45, -9, 80, 66, 75, -74, -106, 95, -47, 42, -74, -42, 61, 89, 50, -65, -115, -92, 89, -112, 17, -121, 26, 110, -92, -102};
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
    msg.setTimeStamp(0.96263119972);
    msg.setSource(22618U);
    msg.setSourceEntity(153U);
    msg.setDestination(38030U);
    msg.setDestinationEntity(178U);
    msg.seq = 16072U;
    msg.sys_dst.assign("CTTQEHVBWBOJAIMQPMNKJNUZOVXGOLBGSKZNVKVKMHLWUXERDGGPFJZWLIYWPJBYQLACAETGRFEIPEXZRJUISNMYEAMRPRCFUBKFZHNBGQOCVWMYTUXTXQMQZCYDNTVSDXREWZGVRGZKNAWMSLUTZIIFMCTYBRSHOQDTVHRHFHLDGCKHWWAFVWHPEBFSLCLPOPIIPOQLAZADYUFAYIQJYBPENOENJOBNGC");
    msg.flags = 40U;
    const char tmp_msg_0[] = {-16, 48, -32, 52, 80, -36, 79, 51, -9, 5, 59, 26, 56, -55, -44, 52, 81, -3, -128, 48, 54, -125, 75, 10, -91, 54, -57, 79, 50, -42, -99, -101, 86, 77, 91, 63, 121, -52, 82, 114, 92, -15, -94, 80, -42, -30, 76, 121, -103, -46, -121, 120, -55, -26, 2, 116, 38, -6, 81, 55, -9, 84, -25, -20, -71, 26, -44, -114, 122, -52, -50, 91, 9, -99, 8, -21, -105, 50, -62, -36, 74, 53, -91, 14};
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
    msg.setTimeStamp(0.332414339592);
    msg.setSource(33254U);
    msg.setSourceEntity(116U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("RRELUWWIHLXENJCJNBFDNXOIRGAIEEQXGZYSNJDOYSKVZAJAVTPJEGWGDUPFFYSYUWECPPDUDLCWYBBZVPNRXQRCOGJAVZKFBKOIXTATO");
    msg.sys_dst.assign("CRXBLAVNZNZCWUQCIHVUGGEBMFUASOGPPIR");
    msg.flags = 234U;
    const char tmp_msg_0[] = {23, 72, -38, 21, 33, -126, -49, 45, 8, -75, -10, 72, -51, -86, -64, -99, -117, 38, 83, 2, 3, -43, 21, -75, 70, 110, 7, 106, -121, -88, 46, 70, 42, -85, -94, -19, -89, -110, 82, 116, 45, -63, -26, 89, -81, -77, 48, 49, 42, 55, 82, -4, -54, -88, -38, -68, -26, -80, -46, 52, 44, 25, 98, 100, 65, -84, 41, -82, -109, 63, -23, 91, -90, 90, 48, -66, 111, -70, -4, -8, 82, -119, 61, 111, -4, 0, 38, -12, 94, -47, 111, -45, 103, 73, 36, -65, 6, 106, 35, -43, 53, -22, 76, -28, 5, -116, 78, -56, -35, -109, 121, 31, -12, 43, -102, 78, -51, -71, -6, -4, -128, 120, -79, -19, -122, 27, 101, 80, -68, -32, -64, -112, -59, 71, -26, -50, 40, 62, -6, 95, -100, -101, 101, 49, 72, 16, 56, -26, -20, -44, -85, -66, -114, 111, -63, -97, 41, -9, 17, -2, -57, -37, -33, 94, -30, -71, -101, 93, -128, 96, -90, 73, -13, 114, -55, -118, 16, -102, -106, 67, 124};
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
    msg.setTimeStamp(0.475711197641);
    msg.setSource(2822U);
    msg.setSourceEntity(72U);
    msg.setDestination(37319U);
    msg.setDestinationEntity(19U);
    msg.sys_src.assign("MYIONZDDSVTKXJVIDEZOTHHIHTCWBNCHBUUECFWQMYTUJAGQCGDXFKOTFGYIWFOAOYIRUDVPPPZUNIEJCUJDCNSCYKNXGFRGEGLOKSYMFZZJUPKNSPLSYYHBNXRMHIBBENIJUVKTFRWWVOGVZDDZXXAVIJKQWKRVMQQDLTPYSHMZZFPJXQTQXBEJQA");
    msg.sys_dst.assign("YHXBFCUOWFQWUJLAHOMCKEPRMHFAETGRGSCCOSVYVCZZRZSKXINAGJSGJETKSVDOVEQXHEUQRTTYDPWYIPTVBBEDURVPROBKBUWLBQXOCNGACXDWTINFCDGVMPLUMYFJKVQPCAWSAT");
    msg.flags = 246U;
    const char tmp_msg_0[] = {-20, -99, 59, -50, 25, -112, 20, -53, 15, -3, -48, 122, -110, 84, -6, -75, -43, 45, 45, 17, 54, 99, -11, -110, -117, -114, -82, 87, 43, -60, 30, 9, -52, 15, -83, 69, -85, 53, 55, 90, 77, 66, -22, -78, -4, -93, 118, 10, -31, 122, 43, 39, 49, -72, 113, -16, 27, -39, -9, 55, -10, -107, 86, 64, 100, -60, -96, 103, 36, 81, 0, -81, -66, -125, -88, -84, 119, 5, 89, 36, -50, -20, 84, 19, -98, 52, 51, -110, -73, -71, -54, 121, 22, 4, 88, 56, -87, 61, -29, -55, -21, 95, 115, -126, -100, 91, 66, 49, 5, 12, 86, -41, -10, -109, -66, 37, -60, -68, -29, 41, 116, 18, -83, 37, -100, 3, 112, -68, 48, 27, -12, -56, -40, -24, -87, -21, 126, 99, 59, 110, -102, 92, 118, 83, 109, -13, -93, 62, -106, -43, -9, 17, 65, -113, -102, -17, 55, -106, -106, 65, -80, -94, -111, -125, -101, -82, -64, -64, 66, 104, -38, 95, -26, -41, -77, -114, -26, 28, -96, 40, -83, -105, -108, -41, -104, -110, -54, -34, -50, -106, -88, 47, -79, -114, 126, 20, 99, 109, -107, 66, 72, 92, -50, -112, 48, 106, -7, 86, 121, 30, -73, -37, -39, 37, -70, 78, 102, 5, 68, 97, 38, -28, 2, -46, 85, -72, -33, -18, -100, -2};
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
    msg.setTimeStamp(0.381382458608);
    msg.setSource(38344U);
    msg.setSourceEntity(245U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(65U);
    msg.sys_src.assign("TMBUKIYZGEOFLCCAMJWQHQMPSCGLMWIVCYGVADUULZOHOSUOQNFGMIXSJLQTGIAVMQFDPTZETPRFJVHZNOZDCAYTFESKAEXBWUNJJIUBPWTDSVBRPIHEFVVTHKCMHENJXGYEYHQRQEGLCQNHDKUBFESXXIXSGWRNNYAWMACFRRKLXKTRSMRYCKXWVPEULIYZDXTPIDQVPIOULJOHFZPAUBCNOSTNLJWBBOOJH");
    msg.sys_dst.assign("ETYYPEPQTNPHADCZGTNZCLGEI");
    msg.flags = 42U;
    const char tmp_msg_0[] = {-74, 83, -57, -85, 125, -97, -125, -126, 47, 61, 99, 103, 71, 77, 82, -1, 6, 106, 29, -122, 99, 43, 111, -29, -64, 3, 116, 29, -55, 73, -123, 90, 25, 100, 121, 48, 88, 22, -21, -76, 27, -75, 92, -120, 33, 53, -37, 8, 42};
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
    msg.setTimeStamp(0.788157389587);
    msg.setSource(10051U);
    msg.setSourceEntity(159U);
    msg.setDestination(32584U);
    msg.setDestinationEntity(224U);
    msg.seq = 65514U;
    msg.value = 111U;
    msg.error.assign("YCEFGRFQIPGXKWYCSLTZKTNYJHKXHJVFAOALXNDDOAVBKITZTWWRTVAVKQPINGJEWSQIFLGRMIMPYDDPKEMZBOHMMXZOCWYCFISBSVWOAFHLRSVHGQFLPHAUDEIKHYIBUGSBMXGJSOAUL");

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
    msg.setTimeStamp(0.101224757284);
    msg.setSource(26972U);
    msg.setSourceEntity(64U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(42U);
    msg.seq = 21140U;
    msg.value = 60U;
    msg.error.assign("RJDUGYIZXOOFJRTAVNKWLTKAGBXUPVZARKWDBWVETTSYRWLDUSZHJPZBZQLMLPZAKVSMMHXUFVQMMSHTDXNXXPYUROJKUDDRLCWESPQFZFHHGIPWMXCMIGKHVILOROVQUSQYMNJFIOSCLUNBQGNBGSFTSFTKPTGVHQCCBAEKAAFXCMCNYACZJIVONEUUFXRCTWPOGNXKPDYFDYSIKANBWHEQEQMTERDZQCJBIJERHLWEYYIOBYLNVHAG");

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
    msg.setTimeStamp(0.631927933138);
    msg.setSource(25867U);
    msg.setSourceEntity(142U);
    msg.setDestination(56859U);
    msg.setDestinationEntity(66U);
    msg.seq = 16760U;
    msg.value = 106U;
    msg.error.assign("TYQARZVNJFOOFMFNSSDPDLEEUPTTSNHSUBBPOXZZFCCMPARUBKWLYXV");

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
    msg.setTimeStamp(0.758700512848);
    msg.setSource(1636U);
    msg.setSourceEntity(168U);
    msg.setDestination(49338U);
    msg.setDestinationEntity(94U);
    msg.seq = 34604U;
    msg.sys.assign("LOHWSASXTURSGZZENOOIFAYQGIDKBSWZWIWUFHFYAZMYPZWPMIEQTEUHKOJGCXR");
    msg.value = 0.00280432233763;

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
    msg.setTimeStamp(0.692102542446);
    msg.setSource(42430U);
    msg.setSourceEntity(95U);
    msg.setDestination(38311U);
    msg.setDestinationEntity(92U);
    msg.seq = 32716U;
    msg.sys.assign("JTPFVYTNZYZAKHGBSPYOWVBRJCENTAOLIKJCXQQWXVDFPHUCCHHQYMJENUBYBOGGXQIEMHIUDZQOGTXDZWQTKHMUTVFRDAONTKRPFEIFXMCDNGLSRMOQWLLEAXPKEZPLQPCKLE");
    msg.value = 0.0604220499401;

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
    msg.setTimeStamp(0.811590841175);
    msg.setSource(2942U);
    msg.setSourceEntity(229U);
    msg.setDestination(53183U);
    msg.setDestinationEntity(237U);
    msg.seq = 47402U;
    msg.sys.assign("MODSOQUSNTGMXXGPDNGJXAMWEVQIZVFHIOZQWBMRKCJBHLWJEDAWJLQHEGTTGYTBWPHZYXMGHNRNPFKQCEEZVPHHKRVOFPOGVZDYCZADZDUMLPXXIBUOIMAFCFLAJ");
    msg.value = 0.580171160933;

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
    msg.setTimeStamp(0.803638937958);
    msg.setSource(33315U);
    msg.setSourceEntity(9U);
    msg.setDestination(59815U);
    msg.setDestinationEntity(250U);
    msg.action = 135U;
    msg.longain = 0.645805937617;
    msg.latgain = 0.957499600402;
    msg.bondthick = 1002632347U;
    msg.leadgain = 0.304363595345;
    msg.deconflgain = 0.716098298876;

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
    msg.setTimeStamp(0.673039446735);
    msg.setSource(24055U);
    msg.setSourceEntity(219U);
    msg.setDestination(15834U);
    msg.setDestinationEntity(243U);
    msg.action = 16U;
    msg.longain = 0.61985225932;
    msg.latgain = 0.799281367251;
    msg.bondthick = 1680543285U;
    msg.leadgain = 0.392194804886;
    msg.deconflgain = 0.806481959748;

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
    msg.setTimeStamp(0.23532217398);
    msg.setSource(36822U);
    msg.setSourceEntity(78U);
    msg.setDestination(18054U);
    msg.setDestinationEntity(206U);
    msg.action = 162U;
    msg.longain = 0.240039386657;
    msg.latgain = 0.301015071302;
    msg.bondthick = 3991047765U;
    msg.leadgain = 0.736233285417;
    msg.deconflgain = 0.202690786387;

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
    msg.setTimeStamp(0.461539182884);
    msg.setSource(63959U);
    msg.setSourceEntity(226U);
    msg.setDestination(4750U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.0441949096958;
    msg.dist_min_abs = 0.971654767898;
    msg.dist_min_mean = 0.0602897266725;

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
    msg.setTimeStamp(0.625921510157);
    msg.setSource(11349U);
    msg.setSourceEntity(162U);
    msg.setDestination(12768U);
    msg.setDestinationEntity(226U);
    msg.err_mean = 0.342852107017;
    msg.dist_min_abs = 0.937699489945;
    msg.dist_min_mean = 0.380773587042;

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
    msg.setTimeStamp(0.814143703253);
    msg.setSource(19639U);
    msg.setSourceEntity(189U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(148U);
    msg.err_mean = 0.941381208397;
    msg.dist_min_abs = 0.113354362958;
    msg.dist_min_mean = 0.603446109277;

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
    msg.setTimeStamp(0.689485039622);
    msg.setSource(20900U);
    msg.setSourceEntity(64U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(53U);
    msg.action = 207U;
    msg.lon_gain = 0.331529553261;
    msg.lat_gain = 0.125152813882;
    msg.bond_thick = 0.865564983415;
    msg.lead_gain = 0.956348999704;
    msg.deconfl_gain = 0.177677696484;
    msg.accel_switch_gain = 0.0033741719627;
    msg.safe_dist = 0.924100850647;
    msg.deconflict_offset = 0.32227867758;
    msg.accel_safe_margin = 0.905706499595;
    msg.accel_lim_x = 0.370802059192;

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
    msg.setTimeStamp(0.533304954006);
    msg.setSource(17601U);
    msg.setSourceEntity(142U);
    msg.setDestination(22400U);
    msg.setDestinationEntity(241U);
    msg.action = 155U;
    msg.lon_gain = 0.576413892756;
    msg.lat_gain = 0.442097267321;
    msg.bond_thick = 0.150936727513;
    msg.lead_gain = 0.577672927125;
    msg.deconfl_gain = 0.0769526191327;
    msg.accel_switch_gain = 0.0758559215251;
    msg.safe_dist = 0.0219227035408;
    msg.deconflict_offset = 0.571196472005;
    msg.accel_safe_margin = 0.0101017241583;
    msg.accel_lim_x = 0.568836441733;

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
    msg.setTimeStamp(0.216328501898);
    msg.setSource(37219U);
    msg.setSourceEntity(6U);
    msg.setDestination(631U);
    msg.setDestinationEntity(117U);
    msg.action = 197U;
    msg.lon_gain = 0.816034906539;
    msg.lat_gain = 0.637650734911;
    msg.bond_thick = 0.986412498123;
    msg.lead_gain = 0.552250737779;
    msg.deconfl_gain = 0.25133253824;
    msg.accel_switch_gain = 0.584154196544;
    msg.safe_dist = 0.0481735540348;
    msg.deconflict_offset = 0.238357771923;
    msg.accel_safe_margin = 0.746884945125;
    msg.accel_lim_x = 0.405034212071;

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
    msg.setTimeStamp(0.483622852949);
    msg.setSource(10326U);
    msg.setSourceEntity(178U);
    msg.setDestination(50809U);
    msg.setDestinationEntity(172U);
    msg.type = 166U;
    msg.op = 58U;
    msg.err_mean = 0.69335823119;
    msg.dist_min_abs = 0.937809716296;
    msg.dist_min_mean = 0.482716131865;
    msg.roll_rate_mean = 0.284536964475;
    msg.time = 0.457854122832;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 130U;
    tmp_msg_0.lon_gain = 0.783566797159;
    tmp_msg_0.lat_gain = 0.966847622525;
    tmp_msg_0.bond_thick = 0.80701519547;
    tmp_msg_0.lead_gain = 0.938382616161;
    tmp_msg_0.deconfl_gain = 0.247839578704;
    tmp_msg_0.accel_switch_gain = 0.856848145123;
    tmp_msg_0.safe_dist = 0.593065317434;
    tmp_msg_0.deconflict_offset = 0.102724886253;
    tmp_msg_0.accel_safe_margin = 0.957205015836;
    tmp_msg_0.accel_lim_x = 0.630871377575;
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
    msg.setTimeStamp(0.848678881516);
    msg.setSource(14896U);
    msg.setSourceEntity(254U);
    msg.setDestination(13370U);
    msg.setDestinationEntity(101U);
    msg.type = 205U;
    msg.op = 101U;
    msg.err_mean = 0.128943836944;
    msg.dist_min_abs = 0.405948403125;
    msg.dist_min_mean = 0.757358900302;
    msg.roll_rate_mean = 0.511253122424;
    msg.time = 0.487648624014;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 223U;
    tmp_msg_0.lon_gain = 0.188043133685;
    tmp_msg_0.lat_gain = 0.136723329528;
    tmp_msg_0.bond_thick = 0.584473739691;
    tmp_msg_0.lead_gain = 0.766702800137;
    tmp_msg_0.deconfl_gain = 0.100577322488;
    tmp_msg_0.accel_switch_gain = 0.125339439644;
    tmp_msg_0.safe_dist = 0.611200062589;
    tmp_msg_0.deconflict_offset = 0.555265404859;
    tmp_msg_0.accel_safe_margin = 0.670489169961;
    tmp_msg_0.accel_lim_x = 0.757251785659;
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
    msg.setTimeStamp(0.900787130864);
    msg.setSource(16010U);
    msg.setSourceEntity(95U);
    msg.setDestination(13901U);
    msg.setDestinationEntity(222U);
    msg.type = 92U;
    msg.op = 233U;
    msg.err_mean = 0.266402960768;
    msg.dist_min_abs = 0.457053314246;
    msg.dist_min_mean = 0.843640201056;
    msg.roll_rate_mean = 0.259321461172;
    msg.time = 0.504313398606;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 231U;
    tmp_msg_0.lon_gain = 0.497706354087;
    tmp_msg_0.lat_gain = 0.0741467400401;
    tmp_msg_0.bond_thick = 0.704409212507;
    tmp_msg_0.lead_gain = 0.562468134788;
    tmp_msg_0.deconfl_gain = 0.738373954758;
    tmp_msg_0.accel_switch_gain = 0.056589815363;
    tmp_msg_0.safe_dist = 0.921772013183;
    tmp_msg_0.deconflict_offset = 0.890627863208;
    tmp_msg_0.accel_safe_margin = 0.0267183501976;
    tmp_msg_0.accel_lim_x = 0.0729311615933;
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
    msg.setTimeStamp(0.733936629166);
    msg.setSource(5823U);
    msg.setSourceEntity(82U);
    msg.setDestination(55634U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.723538104796;
    msg.lon = 0.494589396095;
    msg.eta = 2124373033U;
    msg.duration = 1743U;

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
    msg.setTimeStamp(0.503037706541);
    msg.setSource(4211U);
    msg.setSourceEntity(4U);
    msg.setDestination(49352U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.724283500801;
    msg.lon = 0.224356971865;
    msg.eta = 3427282747U;
    msg.duration = 5224U;

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
    msg.setTimeStamp(0.00665066920064);
    msg.setSource(64138U);
    msg.setSourceEntity(196U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.919252340097;
    msg.lon = 0.697494922182;
    msg.eta = 3876040570U;
    msg.duration = 26204U;

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
    msg.setTimeStamp(0.3903966792);
    msg.setSource(9989U);
    msg.setSourceEntity(150U);
    msg.setDestination(43085U);
    msg.setDestinationEntity(42U);
    msg.plan_id = 33985U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.546923179887;
    tmp_msg_0.lon = 0.768080876753;
    tmp_msg_0.eta = 1729363483U;
    tmp_msg_0.duration = 27906U;
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
    msg.setTimeStamp(0.948273041343);
    msg.setSource(5628U);
    msg.setSourceEntity(69U);
    msg.setDestination(34269U);
    msg.setDestinationEntity(150U);
    msg.plan_id = 54499U;

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
    msg.setTimeStamp(0.921617565766);
    msg.setSource(40358U);
    msg.setSourceEntity(155U);
    msg.setDestination(34415U);
    msg.setDestinationEntity(135U);
    msg.plan_id = 40228U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.897700569174;
    tmp_msg_0.lon = 0.182058290273;
    tmp_msg_0.eta = 857607931U;
    tmp_msg_0.duration = 64709U;
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
    msg.setTimeStamp(0.963603966098);
    msg.setSource(10359U);
    msg.setSourceEntity(39U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(136U);
    msg.type = 199U;
    msg.command = 150U;
    msg.settings.assign("RZJHUSFQEHDWPLBWIEFESMNNFAKCMJRUCJACZHHHXITMJNHNDGTMEGTOLPCMSTGKXYJRLLRYDROBGFHSJYLSAYLLOAANCKMVXZRIWPBACPZFPTUOQIKIMTVNBUYOXQCWUPOJPQQOGFVIZYVOKUMPBNYSEJKCXBZXWGMYNKPCWQJPGSGRFISNQUHUDK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8078U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.402161889137;
    tmp_tmp_msg_0_0.lon = 0.21221232571;
    tmp_tmp_msg_0_0.eta = 3209757347U;
    tmp_tmp_msg_0_0.duration = 5306U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WQTSGDIOZWRAHJPNPYKEGXIYOGIEMWBQVKHEBAMJXXTMTTHWNJZDPPTGEWMKABSNRGZNFWJUD");

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
    msg.setTimeStamp(0.946104660935);
    msg.setSource(32334U);
    msg.setSourceEntity(95U);
    msg.setDestination(54976U);
    msg.setDestinationEntity(55U);
    msg.type = 168U;
    msg.command = 84U;
    msg.settings.assign("XALVKFKYGHMOYITUOBYUBBVTEUXDRZPNJCFAXXEQLJFMIEGTACOAPKPNVGKVFFUPHQXWRJJUPGCQGXKVROYCKVPEORMMNSXZAKGCYZCJSYUSGQCZZJB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45425U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.155737338758;
    tmp_tmp_msg_0_0.lon = 0.565537868976;
    tmp_tmp_msg_0_0.eta = 702384933U;
    tmp_tmp_msg_0_0.duration = 2042U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QRZMPSVXEFBECKVKVVOFGJXWJEOUPHHDSWHDXATHATZETXDYQGBNRIOPRVJRPOQSGDAMDIUUTAIVOKILRWUBUHFNFKBRCYNRLTMCWWBUNFIBCNZXJCJKMBTWVYQPSFGKOYYMNRXEJZRFDCVGKQHALXIKSLSQAYIJBVAFWZDWVJXJW");

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
    msg.setTimeStamp(0.387643825337);
    msg.setSource(5244U);
    msg.setSourceEntity(27U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(98U);
    msg.type = 100U;
    msg.command = 33U;
    msg.settings.assign("TURSIXQZNHBRELHPUBYYRAQYNYSKKPXBUIXQZISDCFTDGJLAZOATGYJQJGKZQAVJSRFKRXSJMAIHNYGZAOODGDEYMUFWEMRXLCPVMWPHCBCLVKZUPHXWOXHFAEIWVNNHOSPGTHAUGJFNSLPRWPQREJXAVUMWVHFTCAITRBHWYOCN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26914U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QGRDCNJGCEVFSOHFHJENPEDUPYZIDWSCHDBOCX");

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
    msg.setTimeStamp(0.945386245108);
    msg.setSource(61464U);
    msg.setSourceEntity(2U);
    msg.setDestination(3293U);
    msg.setDestinationEntity(16U);
    msg.state = 227U;
    msg.plan_id = 56901U;
    msg.wpt_id = 137U;
    msg.settings_chk = 59014U;

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
    msg.setTimeStamp(0.659459047109);
    msg.setSource(6811U);
    msg.setSourceEntity(175U);
    msg.setDestination(3945U);
    msg.setDestinationEntity(224U);
    msg.state = 169U;
    msg.plan_id = 34642U;
    msg.wpt_id = 158U;
    msg.settings_chk = 65420U;

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
    msg.setTimeStamp(0.0915909613177);
    msg.setSource(59745U);
    msg.setSourceEntity(236U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(123U);
    msg.state = 110U;
    msg.plan_id = 3156U;
    msg.wpt_id = 29U;
    msg.settings_chk = 47221U;

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
    msg.setTimeStamp(0.0779424094229);
    msg.setSource(30001U);
    msg.setSourceEntity(180U);
    msg.setDestination(8214U);
    msg.setDestinationEntity(138U);
    msg.uid = 96U;
    msg.frag_number = 38U;
    msg.num_frags = 12U;
    const char tmp_msg_0[] = {82, 4, -61, -62, -108, 68, -117, -66, -79, 9, -85, -69, 56, -90, 110, 110, 122, 86, 51, -28, 3, -101, -115, -126, 63, 95, -33, -113, -38, 85, -22, -46, -120, 115, -31, -102, -62, -71, 40, 18, 18, 103, 122, 15, -66, -36, 8, -31, 67, -18, -56, 30, -115, 46, -32, -56, -125, 99, 84, 13, -38, 74, 2, 56, -12, -15, 117, 21, 79, 101, -95, -62, 78, 62, 16, 55, -29, 31, -83, -106, -118, -116, 40, -65, 122, -125, -108, 121, -59, -124, 43, 58, -42, -5, -121, 70, 112, -31, 24, 34, 119, -23, 4, -34, 120, 54, 97, 101, 58, 64, -47, -6, -11, 22, -54, 18, 116, 114, -113, 123, -88, -29, -12, -43, -113, 76, 117, 98, 116, -19, 83, 35, -121, -98, 63, -113, -31, -125, 90, -93, 35, 125, -62, -85, 24, -110, -125, -53, 76, -86, 3, -107, -13, -30, 115, 64, 50, -63, -2, -15, 32, -32, 112, -47, 35, -117, -25, 95, -42, -73, 111, -15, 69, -80, -8, 23, 95, 1, 71, -124, -20, -108, -71, -3, 96, -58, 24, -107, -63, -9, -22, 47, -38, -97, -35, -31, -107, 73, -50, 113, -127, 114, -105, -110, 85, 3, -60, 47, 63, -64, 21, -107, 87, 25, -62};
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
    msg.setTimeStamp(0.245743209767);
    msg.setSource(13712U);
    msg.setSourceEntity(114U);
    msg.setDestination(20439U);
    msg.setDestinationEntity(149U);
    msg.uid = 55U;
    msg.frag_number = 115U;
    msg.num_frags = 202U;
    const char tmp_msg_0[] = {-56, 108, 36, 45, -121, -33, 84, 112, -103, 4, 7, -2, 1, -124, 118, 68};
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
    msg.setTimeStamp(0.708852745067);
    msg.setSource(65276U);
    msg.setSourceEntity(22U);
    msg.setDestination(37407U);
    msg.setDestinationEntity(118U);
    msg.uid = 171U;
    msg.frag_number = 66U;
    msg.num_frags = 82U;
    const char tmp_msg_0[] = {107, -95, -128, 112, 118, -50, -128, -68, 53, 50, -95, -8, -58, 92, -37, 88, 123, 92, -128, 10, 98, 79, 33, 35, -27, -121, -106, 108, 7, 65, 117, -40, -112, -86, 48, 60, 90, 105, -118, 80, 13, -85, 22, -115, -57, 13, -109, -96, 92, 52, -71, 125, -57, 118, -103, -18, 71, 10, -10, -78, -112, 68, -103, -15, -66, 61, 75, -82, 89, 0, 34, -114, -119, 95, 62, 78, -52, 124, -116, -88, 84, 103, -42, 88, 50, -101, 71, 116, -96, 34, -122, 53, 38, -10, 18, -23, 92, 70, 118, 100, -40, -28, 22, 113, 99, 1, 80, 6, 28, -93, -32, 20, 57, 107, 31, -18, 101, -1, -74, -82, -81, -25, 7, 97, 88, 84, -104, 17, 66, -40, -86, -80, -50, 70, -108, -89, 105, -6, -55, 126, 51, -100, -113, 24, -61, 105, 96, 34, -115, -105, 56, -15, -33, 117, -82, 25, 50, 80, 78, 47, 76, -72, -48, -100, 42, 51, 119, 76, 110, -96, 96, -90, 58, -20, 103, -2, 109, -83, 60, -74, -99, -15, 86, 92, 98, 61, 116, 0, 83, -108, -14, 50, -14, 1, 107, -81, -79, 114, -79, 41, -109, -64};
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
    msg.setTimeStamp(0.394547949518);
    msg.setSource(47500U);
    msg.setSourceEntity(91U);
    msg.setDestination(29621U);
    msg.setDestinationEntity(25U);
    msg.content_type.assign("IQPPUGKAMQTECTZWMJYCBWAEVBMJNQCRVPERATUFFLDSXDJUKYKNBCOCUOHIGKYZLBENMOMMILWFJRFKDWKUISAEIZZLLTAEVYBJXPAHGXZWXXGTGAPBNYDJDCYWPOOOXHXKNUVEZQJDNHXWPVUZYRTRSJBFEDWURTVNXQGRASSLOTUOFIXFKLIKWGGEMVHRBCMFMTMODHDSEKIT");
    const char tmp_msg_0[] = {13, -89, 87, -127, -70, 32, -43, 112, -78, 83, -112, 116, 92, 51, -76, 77, 30, 26, -35, 13, 98, -109, 91, -64, 33, 107, -35, -30, 42, -39, -1, -54, -111, -56, 107, -55, -7, 44, 17, 69, 105, 84, 91, 114, -68, -27, -103, -27, -83, 54, 95, -61, -2, 81, -120, -55, 37, 105, -97, 53, -118, 105, 77, 80, 10, 106, -97, -104, 104, 85, -106, -89, 87, -91, 3, -43, -124, 113, -5, -128, -73, 101, -14, -117, -7, 124, -72, 61, -82, -3, -110, -56, -78, 20, -28, 66, 9, 116, -7, 114, -87, -35, 47, -92, 10, 33, 95, -70, 91, -47, 23, -13, -99, 48, 88, 125, 118, 36, 43, -44, -76, -117, 26, -71, 84, 33, 94, -114, -51, -50, -67, -117, -47, 20, -40, -128, -101, -76, -111, -12, -43, 2, 97, 63, -11, -105, 50, 111, -100, -84, 44, -90, -15, -98, 103, 57, 39, 58, -91, 66, 92, 1, -4, -45, 62, -43, -9, 50, -85, -74, 32, 101, -26, -43, -38, -116, -52, 112, -87, 73, -113, 75, 74, 3, -127, 40, 114};
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
    msg.setTimeStamp(0.758692066086);
    msg.setSource(50160U);
    msg.setSourceEntity(213U);
    msg.setDestination(45657U);
    msg.setDestinationEntity(96U);
    msg.content_type.assign("PNKKWKXBANUAEIZDPEZMNIZJCEGCXBRXYEROITHWXTVWOFFZCVGDKIAC");
    const char tmp_msg_0[] = {-71, -73, 70, 34, -43, -41, -97, 36, 93, 48, -7, -61, -56, -51, -120, -29, 14, -113, 12, -104, 84, 33, -7, -101, 86, -125, 126, -79, 89, -114, 98, -119, -67, 39, -6, 57, -83, -32, -108, 78, 57, 65, 44, 33, -71, -118, 87, 94, -70, 83, 89, -31, 94, 9, -22, -126, 41, 20, -83, -82, 55, 45, 41, 109, -50, -48, 78, -21, -87, -84, 19, 82, -60, -89, 62, -83, 6, -126, 60, 104, 99, -49, -97, 23, -31, 107, -42, -62, -43, -50, -38, -114, -5, 71, 10, 63, -114, -110, -66, 68, 125, 34, 125, 31, -15, -20, -21, -74, -68, -101, -43, 1, -62, 30, 65, -109, 12, -39, 43, -60, 20, -79, -125, 122, 83, 77, 83, 99, 12, 121, -8, -16, 28, 54, 67, -8, -82, -73, 77, -81, -51, -58, -67, 115, 66, 54, -34, -15, -96, -34, -90, -6, 102, 125, 73, -10, -65, 61, 0, -86, 93, 36, -34, -39, -40, 8, 5, 2, -41, -29, 96, 14, 26, -118, -72, -32, -43, 51, -87, -61, -93, -74, -53, 43, -88, -94, 112, 95, -122, -109, 107, -45, 14, 77, -46, -68, -68, -124, 108, -117, 12, 40, -36, -109, -26, -77, 28, 84, -36, 7, 58, 0};
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
    msg.setTimeStamp(0.657518430572);
    msg.setSource(51174U);
    msg.setSourceEntity(177U);
    msg.setDestination(7281U);
    msg.setDestinationEntity(154U);
    msg.content_type.assign("SBZVXTCDGWSREDOKNGMWIBIVRHJXUPQHHVTWUKWQRDFNKXNYYYZAUICAJTEBJMRWXVNBMTQSEJEQNOAPIPBRHMKDVKVCWZTHSI");
    const char tmp_msg_0[] = {5, 104, 45, 67, 118, 55, 114, -63, 59, 126, 106, 71, 53, -25, -27, -98, -33, 125, -76, 63, -86, -50, 99, 48, 57, -123, -75, 90, 32, 33, -58, 19, 106, 75, 63, 111, 101, -11, -73, 80, 76, 111, 1, 28, 79, 22, 20, 63, 79, -6, -88, 112, 28, 55, 77, 88, -93, 10, 118, 11, 90, 82, -8, 100, -18, 126, -99, 6, 41, 5, 91, -4, 114, -126, -7, -29, -122, 101, -108, -70, 29, 126, 52, 6, -101, -94, 99, 50, -50, -44, -21, -106, 37, 45, -97, 93, 84, -46, -113, -60, 49, -100, -72, -98, 65, -23, 55, -119, -41, 111, -17, 53, 122, 98, 91, 102, -3, -37, 118, -125, -54, -27, 120, -118, -34, -35, 65, 33, 95, 92, 71, 96, 69, -127, -123, 69, -126, -20, -86, -13, 82, 102, 80, 28, 28, -76, -45, 118, -68, 77, -109, -100, 7, 86, -91, -121, 31, -34, 51, -122, 112, -97, -43, 110, 57, -58, 15, 5, 75, 119, 41, -3, -8, -118, 62, 116, -93, -68, 24, 53, 3, 112, 90, 114, 97, -59, 87, -41, 48, -52, 69, 25, 38, 52, -23, -43, 97, -59, -25, 113, -79, -89, -102, 79, -94, 85, 119, 15, -5, 18, -53, 54, 120, -30, -57, -93, 21, -93, -22, 58, 36, -50, -109, -48, -127, -58, -128, -116, 27, -5, -65, 59, -122, -39, 11, -122, 61, -98, 68, -119, 94, -125, 42, -35, 102, 31};
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
    msg.setTimeStamp(0.979575358781);
    msg.setSource(18161U);
    msg.setSourceEntity(8U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.188482133012);
    msg.setSource(16627U);
    msg.setSourceEntity(139U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.629347292749);
    msg.setSource(51171U);
    msg.setSourceEntity(156U);
    msg.setDestination(54135U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.192906286966);
    msg.setSource(60935U);
    msg.setSourceEntity(236U);
    msg.setDestination(49006U);
    msg.setDestinationEntity(8U);
    msg.target = 7477U;
    msg.bearing = 0.698151391569;
    msg.elevation = 0.0156827444049;

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
    msg.setTimeStamp(0.583101984676);
    msg.setSource(21151U);
    msg.setSourceEntity(40U);
    msg.setDestination(26267U);
    msg.setDestinationEntity(23U);
    msg.target = 22812U;
    msg.bearing = 0.661071695761;
    msg.elevation = 0.595827645893;

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
    msg.setTimeStamp(0.152567877313);
    msg.setSource(16164U);
    msg.setSourceEntity(134U);
    msg.setDestination(46555U);
    msg.setDestinationEntity(146U);
    msg.target = 19078U;
    msg.bearing = 0.588013763535;
    msg.elevation = 0.2484173581;

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
    msg.setTimeStamp(0.892195122572);
    msg.setSource(30761U);
    msg.setSourceEntity(213U);
    msg.setDestination(16786U);
    msg.setDestinationEntity(89U);
    msg.target = 40194U;
    msg.x = 0.61134296401;
    msg.y = 0.337232245025;
    msg.z = 0.202091700167;

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
    msg.setTimeStamp(0.386683305106);
    msg.setSource(34718U);
    msg.setSourceEntity(137U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(121U);
    msg.target = 31894U;
    msg.x = 0.72768926067;
    msg.y = 0.249784512033;
    msg.z = 0.805486593704;

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
    msg.setTimeStamp(0.28280341622);
    msg.setSource(48977U);
    msg.setSourceEntity(136U);
    msg.setDestination(33476U);
    msg.setDestinationEntity(235U);
    msg.target = 27607U;
    msg.x = 0.633953208839;
    msg.y = 0.570116664823;
    msg.z = 0.332963287976;

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
    msg.setTimeStamp(0.18873817516);
    msg.setSource(53813U);
    msg.setSourceEntity(247U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(117U);
    msg.target = 54053U;
    msg.lat = 0.799205616895;
    msg.lon = 0.382710606508;
    msg.z_units = 205U;
    msg.z = 0.622245518498;

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
    msg.setTimeStamp(0.00988449657535);
    msg.setSource(46845U);
    msg.setSourceEntity(11U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(29U);
    msg.target = 12230U;
    msg.lat = 0.695630540845;
    msg.lon = 0.870938059083;
    msg.z_units = 30U;
    msg.z = 0.814199338074;

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
    msg.setTimeStamp(0.450063296108);
    msg.setSource(58944U);
    msg.setSourceEntity(134U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(186U);
    msg.target = 45631U;
    msg.lat = 0.560717067928;
    msg.lon = 0.788892704067;
    msg.z_units = 19U;
    msg.z = 0.130516366034;

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
    msg.setTimeStamp(0.991459471919);
    msg.setSource(6466U);
    msg.setSourceEntity(154U);
    msg.setDestination(27268U);
    msg.setDestinationEntity(3U);
    msg.locale.assign("XOFKKUQDNMIVMPQZZPPYQSIWWRBLOJNJJMDKVLOVSRTDBFJKUHEZADCQGLUGQRDVBXUWSEYQKFTZIDHXBRVGMCILMLTEUYEFCVRHTEGBBAZWJRYCWLRDXRMTIWXFAEGBBKPEYCEXANSBCJRGDLTNPUVZFZMWOINAZ");
    const char tmp_msg_0[] = {-64, -2, 80, 104, 74, -61, -64, 95, -48, 123, -22, -3, -80, -20, 86, -98, 37, -97, 37, -38, -18, 17, -79, 40, -91, 55, 44, 39, 101, 101, 59, 77, 46, -63, 14, 70, -5, -20, 51, 124, 34, -100, 50, -105, -79, 97, -64, 77, 35, 71, -127, 119, -71, 37, 24, -73, -109, -121, 23, -46, -46, 40, -77, -65, -43, 76, -89, -116, -82, 23, -3};
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
    msg.setTimeStamp(0.841447903213);
    msg.setSource(51620U);
    msg.setSourceEntity(88U);
    msg.setDestination(28291U);
    msg.setDestinationEntity(65U);
    msg.locale.assign("GTNFLQMGCJHDDEKZZTXISVNQTFBLCRKCKAPVGCYLKUXLLIXOTBVYGXHRSILPWIFZKPYFUWJVQPMRQRIN");
    const char tmp_msg_0[] = {12, 87, -53, -57, 124, 92, 2, 24, -91, -113, 90, -41, 13, -113, 117, -38, -51, 40, 27, 28, -126, 91, 113, 39, -84, 115, -35, 49, 30, -26, 86, -92, 32, 121, -119, -21, -64, -96, 120, 113, 48, -122, 20, 24, -28, -20, -31, -51, 24, 0, 21, -72, -48, 65, 11, -65, 117, 100, 42, 71, 39, 105, 99, -52, -93, 21, -119, 74, 103, -99, -104, -44, -95, -79, -80, 68, 35, -87, 120, -33, -110, 28, 72, -66, 100, 55, 57, 91, -77, -50, 60, 59, -67, -73, -113, -107, 66, -109, 60, -13, -15, -10, -5, 37, -43, 56, 125, -53, 54, 115, -10, -78, -22, -64, 70, -3, 22, -56, 109, 46, -94, 55, -80, -37, 0, 78, 115, -18, -49, 75, 23, -38, 48, 124, -6, -6, -90, -30, -29, -37, -87, 61, -70, 79, -124, 119, 66, 107, -127, -127, -62, -2, -18, -61, -5, -7, 32, -46, -30, 84, -79, -75, 65, -14, -48, 73, 14, 112, -113, -49, 85, -25, 19, -3, -9, -103, 54, -82, 74};
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
    msg.setTimeStamp(0.15542148986);
    msg.setSource(32332U);
    msg.setSourceEntity(125U);
    msg.setDestination(30956U);
    msg.setDestinationEntity(72U);
    msg.locale.assign("QFTZAXUOBSNMUDOCVDQNEWUYBXP");
    const char tmp_msg_0[] = {-103, -86, 110, 19, 117, -18, 30, 2, 15, 27, -115, -62, 81, -22, -105, 70, 59, -88, 90, -9, 111, -78, -48, -1, 98, -45, 53, -31, -33, -77, 120, -24, -53, -31, 42, 16, 38, 27, 108, 70, -93, 22, 69, 117, -84, 118, 119, -89, 28, -63, -16, -96, 92, -60, -62, 63, -19, -97, 4, 21, 72, -95, 78, -61, 57, -80, 0, 46, 73, 116, 3, -89, -14, 41, -37, 58, -19, -37, -127, 69, -9, -126, -128, 28, -75, -104, -5, -17, 31, 95, 59, 53, -10, 14, 87, 89, -8, 6, 25, -123, 108, 42, -74, 119, 4, 62, 34, 84, 99, 47, 70, -90, 0, -23, -31, -111, -22, 52, 25, -67, -107, -75, 3, 121, -124, 11, -117, -26, 8, -94, -126, -30, -80, -2, 79, -61, 126, 21, 42, -88, -81, 35, 34, -101, -94, -8, -128, 87, -35, 92, 120, -48, 10, 17, -79, 68, 94, 99, 46, 29, -42, 55, -2, 69, -102, 124, 42, -72, 18, -81, 35, -36, -23, 80, -3, 71, 90, -125, 103, 114, 35, 36, -90, 2, -82, -73, 60, -112, -101, -89, -42, 60, 68, 108, -1, 71, 73, 99, -45, 20, -55, 76, -91, 95, 62, -25, -77, -45, -128, 64, -116, -103, 114, 104, 7, -86, 42, -104, 88, -3, 89, 46, -112, 59, 56, -12, 124, -125, 48, -22, 91, -120, 2, 106, 121, 16, 102, -126, 67, 13, 57, 19, 62, -1, -55, -2};
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
    msg.setTimeStamp(0.072497175869);
    msg.setSource(1649U);
    msg.setSourceEntity(198U);
    msg.setDestination(30427U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.582036948466);
    msg.setSource(8802U);
    msg.setSourceEntity(41U);
    msg.setDestination(21616U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.00372142606424);
    msg.setSource(41740U);
    msg.setSourceEntity(235U);
    msg.setDestination(6165U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.286942589942);
    msg.setSource(31167U);
    msg.setSourceEntity(250U);
    msg.setDestination(36933U);
    msg.setDestinationEntity(42U);
    msg.camid = 145U;
    msg.x = 49523U;
    msg.y = 22095U;

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
    msg.setTimeStamp(0.0880274939599);
    msg.setSource(53741U);
    msg.setSourceEntity(164U);
    msg.setDestination(59177U);
    msg.setDestinationEntity(223U);
    msg.camid = 176U;
    msg.x = 38839U;
    msg.y = 53267U;

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
    msg.setTimeStamp(0.492038667822);
    msg.setSource(6378U);
    msg.setSourceEntity(50U);
    msg.setDestination(62805U);
    msg.setDestinationEntity(168U);
    msg.camid = 135U;
    msg.x = 2200U;
    msg.y = 10876U;

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
    msg.setTimeStamp(0.735819231526);
    msg.setSource(9656U);
    msg.setSourceEntity(133U);
    msg.setDestination(38873U);
    msg.setDestinationEntity(8U);
    msg.camid = 120U;
    msg.x = 7874U;
    msg.y = 387U;

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
    msg.setTimeStamp(0.90552562449);
    msg.setSource(24017U);
    msg.setSourceEntity(251U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(149U);
    msg.camid = 195U;
    msg.x = 28236U;
    msg.y = 8474U;

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
    msg.setTimeStamp(0.177475881241);
    msg.setSource(50229U);
    msg.setSourceEntity(150U);
    msg.setDestination(46919U);
    msg.setDestinationEntity(215U);
    msg.camid = 166U;
    msg.x = 36542U;
    msg.y = 60359U;

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
    msg.setTimeStamp(0.580140219124);
    msg.setSource(6195U);
    msg.setSourceEntity(203U);
    msg.setDestination(2511U);
    msg.setDestinationEntity(112U);
    msg.tracking = 98U;
    msg.lat = 0.430089271813;
    msg.lon = 0.698156773891;
    msg.x = 0.388680907421;
    msg.y = 0.588630382758;
    msg.z = 0.825455527274;

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
    msg.setTimeStamp(0.876080182459);
    msg.setSource(32321U);
    msg.setSourceEntity(119U);
    msg.setDestination(60652U);
    msg.setDestinationEntity(140U);
    msg.tracking = 25U;
    msg.lat = 0.121713749546;
    msg.lon = 0.834389933771;
    msg.x = 0.306068901374;
    msg.y = 0.544658750297;
    msg.z = 0.404481908142;

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
    msg.setTimeStamp(0.802196628167);
    msg.setSource(8661U);
    msg.setSourceEntity(181U);
    msg.setDestination(59796U);
    msg.setDestinationEntity(71U);
    msg.tracking = 149U;
    msg.lat = 0.593836225878;
    msg.lon = 0.373630360121;
    msg.x = 0.671945484336;
    msg.y = 0.576726500309;
    msg.z = 0.782739497148;

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
    msg.setTimeStamp(0.0560921048787);
    msg.setSource(64989U);
    msg.setSourceEntity(168U);
    msg.setDestination(30614U);
    msg.setDestinationEntity(144U);
    msg.target.assign("PQEUXQIAWTZUHVOPSYBUWWRYECBIIFODOFZFBVGTGMSURWXDOOAXSMSPXJZBDAPERGSSYCDMCBHHRJJBGETMXJRGLRNUNZELYIQDNPNEHHPFLNKBKXKVUYDYVINFQWNKNPGVQVTZAMLAMFRFHZXQJK");
    msg.lbearing = 0.795932845831;
    msg.lelevation = 0.301664470435;
    msg.bearing = 0.930990809976;
    msg.elevation = 0.461253844042;
    msg.phi = 0.898049704583;
    msg.theta = 0.0040023029501;
    msg.psi = 0.82474625293;
    msg.accuracy = 0.405751013062;

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
    msg.setTimeStamp(0.913891189711);
    msg.setSource(10337U);
    msg.setSourceEntity(242U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(88U);
    msg.target.assign("PMBOBFCMBBZFYEGCTYGJUYUYHJVQKJYYZPEHOUHANYBSVUXDJNXALCKRDZWPGTXZYDQJDOQFSWNPVRYJBGQNIFMXPLSGDMZWFQJOWZEKEPPHTLWNQVGACGHOTFVILJRRASGVOTMLHFPKXOCVADZHIWHCPCSTMLASLKMZDLWEITAYEBBWRSDNHURFIINNUJHFK");
    msg.lbearing = 0.018022509814;
    msg.lelevation = 0.616553711922;
    msg.bearing = 0.308341140389;
    msg.elevation = 0.871662573667;
    msg.phi = 0.0410805217231;
    msg.theta = 0.254262394063;
    msg.psi = 0.982689475019;
    msg.accuracy = 0.141032185241;

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
    msg.setTimeStamp(0.537459275833);
    msg.setSource(41050U);
    msg.setSourceEntity(195U);
    msg.setDestination(28685U);
    msg.setDestinationEntity(75U);
    msg.target.assign("ITFUKGRJADJTYPMBMMQTOVBNLDUIGTUDEHLYVJNHGAGYRDZCZNTKFHSURJOLYEATCNOJPGJYEAJKXWGBROKOTLXRSXKHBFHMTUPYSMVAAZQFVYVPQSWSFDHSTEBAAZHIIPUEIWLZWOQISNJSKEDPRRELGWORJQWVKQ");
    msg.lbearing = 0.141058652428;
    msg.lelevation = 0.407454892678;
    msg.bearing = 0.0352299429111;
    msg.elevation = 0.69142147044;
    msg.phi = 0.228709424117;
    msg.theta = 0.946790844978;
    msg.psi = 0.0692000655199;
    msg.accuracy = 0.614093728591;

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
    msg.setTimeStamp(0.120582954549);
    msg.setSource(50810U);
    msg.setSourceEntity(23U);
    msg.setDestination(47072U);
    msg.setDestinationEntity(29U);
    msg.target.assign("CIJSSPMYVVAOYBHDMWDIHRUEYGHPAFFMRYKYKCOZGYCIXCCQLOWTNHCABUSIDHJJZZGVPSCVOYWVXLQZDOOYBKLKYTCCHMRFZNGRHLSVATLLTTQSPEIGAQPIAUKQFFBMEWSJVBXLN");
    msg.x = 0.259517207488;
    msg.y = 0.266232513425;
    msg.z = 0.578154414555;
    msg.n = 0.72660994515;
    msg.e = 0.039505936442;
    msg.d = 0.864647558154;
    msg.phi = 0.505014023295;
    msg.theta = 0.464022144427;
    msg.psi = 0.00327853211544;
    msg.accuracy = 0.670528559549;

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
    msg.setTimeStamp(0.864585748653);
    msg.setSource(27137U);
    msg.setSourceEntity(205U);
    msg.setDestination(27384U);
    msg.setDestinationEntity(197U);
    msg.target.assign("FPJMSAYKNNJFAKWLWXIZGMHEZBXIIOQWMCRBUEHMZDBEYGVTPUKKYGSAISBUJVPRPVQSGGLHZHJSSZIHMESSPMYXXFWLLKFCSEFRWONYTPMXLIVKKNQHEOXDWBWDRFDJQXGJZNMYUMTWCDUPEVFTFXCDOCEDRAHOZNLVWFAQYNCZ");
    msg.x = 0.792679760565;
    msg.y = 0.0256082144354;
    msg.z = 0.194479553417;
    msg.n = 0.568626937383;
    msg.e = 0.495016473368;
    msg.d = 0.617008731209;
    msg.phi = 0.255501413614;
    msg.theta = 0.76289276612;
    msg.psi = 0.295756946774;
    msg.accuracy = 0.513704971096;

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
    msg.setTimeStamp(0.244376748216);
    msg.setSource(2594U);
    msg.setSourceEntity(170U);
    msg.setDestination(46568U);
    msg.setDestinationEntity(211U);
    msg.target.assign("ENUPPUEWXSSSWIA");
    msg.x = 0.649153213862;
    msg.y = 0.0733714063844;
    msg.z = 0.624008231703;
    msg.n = 0.893475931238;
    msg.e = 0.793529103475;
    msg.d = 0.356139729387;
    msg.phi = 0.883771502892;
    msg.theta = 0.461092222161;
    msg.psi = 0.566918070953;
    msg.accuracy = 0.82053382272;

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
    msg.setTimeStamp(0.761075064388);
    msg.setSource(35303U);
    msg.setSourceEntity(8U);
    msg.setDestination(46673U);
    msg.setDestinationEntity(94U);
    msg.target.assign("QHRIOGCKQHFPYMKYFUBOKKEAWUMQPOPWSTBASEMOIMNWZDSNWDRHTFRKUFZJANQZGMIRFFNQGMOPPOOJGBBEDDJINURPCPQBMUVQZOXRUYAHIQISDHFYKLVXNLPLXRXMYIAZFXUTKVYHWVBGLTVMANJLELHAWZWPRTXSDCETGUJLFMSQFNEEJKBZKZJU");
    msg.lat = 0.455711946438;
    msg.lon = 0.0173337293735;
    msg.z_units = 160U;
    msg.z = 0.266216996902;
    msg.accuracy = 0.693533128159;

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
    msg.setTimeStamp(0.190396553414);
    msg.setSource(15847U);
    msg.setSourceEntity(62U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(115U);
    msg.target.assign("PCYHDAFIPXYOSUMKTIGUAYYDMUVRGBFJNJFWDACFQABMVKTCRODJEIOHWINJGJKCZSFAXQ");
    msg.lat = 0.23552872694;
    msg.lon = 0.584918386884;
    msg.z_units = 254U;
    msg.z = 0.0115906211901;
    msg.accuracy = 0.0864574960181;

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
    msg.setTimeStamp(0.0575780707148);
    msg.setSource(25896U);
    msg.setSourceEntity(41U);
    msg.setDestination(25579U);
    msg.setDestinationEntity(165U);
    msg.target.assign("SXYHTSIQVHBIPVQGLXNFTDMTZHCVBQWFHPNOYPPZWDPKGNU");
    msg.lat = 0.295032040137;
    msg.lon = 0.924976847894;
    msg.z_units = 142U;
    msg.z = 0.600843705012;
    msg.accuracy = 0.412469155508;

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
    msg.setTimeStamp(0.418309795058);
    msg.setSource(44043U);
    msg.setSourceEntity(210U);
    msg.setDestination(49988U);
    msg.setDestinationEntity(61U);
    msg.name.assign("FCZMDGIJZLLFAPYSZFQLLKBSXJJOEKYMCIVEGZREZDSHGEQPFOMCXFUGSXHNNZWHDJGIQETVOJUOSURRBAIVNLWVSROGFYFXHSVSEE");
    msg.lat = 0.290110470637;
    msg.lon = 0.56938324471;
    msg.z = 0.614671452939;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.5940114812);
    msg.setSource(57085U);
    msg.setSourceEntity(37U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(44U);
    msg.name.assign("DNYTCWOUURZDBSECZ");
    msg.lat = 0.206410044243;
    msg.lon = 0.90138269178;
    msg.z = 0.224992206424;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.731306204377);
    msg.setSource(42524U);
    msg.setSourceEntity(32U);
    msg.setDestination(10305U);
    msg.setDestinationEntity(144U);
    msg.name.assign("IMTPORJXMMUOUZWZYGLTXDBRCIQLASBPARAYICQCLSOEGVNXIGIABORWQEOJCECDRLPSUPDHPSVPXNVVNXWJWACUNFWPURKFBGHKUMEHHYXCFGWKBVFDWMJBLUPSGIUTQMKBWNYZZYNOCIYPTZKTPZZRFTFJBNUEAFJNFSQHHXAJDGSXWEYHOYEVYVAKACSLNDSMJLCVISQQQGLIEDMXVHJLBKOYJDQMODNLQRBDOIKAZFZGMH");
    msg.lat = 0.55316078844;
    msg.lon = 0.6241482428;
    msg.z = 0.789149301744;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.508459832701);
    msg.setSource(36212U);
    msg.setSourceEntity(59U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(49U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.614374970779);
    msg.setSource(61756U);
    msg.setSourceEntity(80U);
    msg.setDestination(13335U);
    msg.setDestinationEntity(209U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.895150257013);
    msg.setSource(3464U);
    msg.setSourceEntity(186U);
    msg.setDestination(47535U);
    msg.setDestinationEntity(21U);
    msg.op = 59U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IOYZBYGFUEWXMLYUNHZBEQLAQWKDPNTZIPZGUYMAJRIATSJEHTYVEWECKKUGDPKVFYOEVEDNPLRIXAVVTACDSGANTCOQLQBBHBXIUZWLRXONOXOWNSWVSGOA");
    tmp_msg_0.lat = 0.887683691962;
    tmp_msg_0.lon = 0.0907951078541;
    tmp_msg_0.z = 0.0715521797365;
    tmp_msg_0.z_units = 61U;
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
    msg.setTimeStamp(0.0383293715903);
    msg.setSource(57521U);
    msg.setSourceEntity(229U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(211U);
    msg.value = 0.876736856712;
    msg.type = 130U;

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
    msg.setTimeStamp(0.262748147073);
    msg.setSource(63409U);
    msg.setSourceEntity(234U);
    msg.setDestination(64320U);
    msg.setDestinationEntity(53U);
    msg.value = 0.195296082434;
    msg.type = 10U;

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
    msg.setTimeStamp(0.798220220408);
    msg.setSource(58340U);
    msg.setSourceEntity(73U);
    msg.setDestination(26728U);
    msg.setDestinationEntity(207U);
    msg.value = 0.337841364919;
    msg.type = 130U;

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
    msg.setTimeStamp(0.610057142482);
    msg.setSource(64247U);
    msg.setSourceEntity(5U);
    msg.setDestination(1338U);
    msg.setDestinationEntity(167U);
    msg.value = 0.302872576157;

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
    msg.setTimeStamp(0.111962020355);
    msg.setSource(44055U);
    msg.setSourceEntity(75U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(149U);
    msg.value = 0.425916681016;

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
    msg.setTimeStamp(0.0298718865592);
    msg.setSource(9443U);
    msg.setSourceEntity(10U);
    msg.setDestination(56224U);
    msg.setDestinationEntity(244U);
    msg.value = 0.244323268807;

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
    msg.setTimeStamp(0.342010239799);
    msg.setSource(37365U);
    msg.setSourceEntity(111U);
    msg.setDestination(10146U);
    msg.setDestinationEntity(114U);
    msg.timestamp_last_service = 0.0513403631602;
    msg.time_next_service = 0.551043548132;
    msg.time_motor_next_service = 0.572325873663;
    msg.time_idle_ground = 0.74284763047;
    msg.time_idle_air = 0.661213898571;
    msg.time_idle_water = 0.35379266312;
    msg.time_idle_underwater = 0.208496842577;
    msg.time_idle_unknown = 0.955574681654;
    msg.time_motor_ground = 0.725744737215;
    msg.time_motor_air = 0.483198130531;
    msg.time_motor_water = 0.361075069569;
    msg.time_motor_underwater = 0.642502580899;
    msg.time_motor_unknown = 0.973022131491;
    msg.rpm_min = 20063;
    msg.rpm_max = -26100;
    msg.depth_max = 0.602326939653;

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
    msg.setTimeStamp(0.713807359651);
    msg.setSource(19069U);
    msg.setSourceEntity(38U);
    msg.setDestination(5426U);
    msg.setDestinationEntity(40U);
    msg.timestamp_last_service = 0.0337402150636;
    msg.time_next_service = 0.589030864677;
    msg.time_motor_next_service = 0.444778518903;
    msg.time_idle_ground = 0.832681353973;
    msg.time_idle_air = 0.314286099773;
    msg.time_idle_water = 0.258769475211;
    msg.time_idle_underwater = 0.300063643951;
    msg.time_idle_unknown = 0.765215795272;
    msg.time_motor_ground = 0.123964484084;
    msg.time_motor_air = 0.833749506202;
    msg.time_motor_water = 0.757546325878;
    msg.time_motor_underwater = 0.791261592777;
    msg.time_motor_unknown = 0.483053194901;
    msg.rpm_min = 27659;
    msg.rpm_max = 22930;
    msg.depth_max = 0.57678538515;

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
    msg.setTimeStamp(0.357983018872);
    msg.setSource(55394U);
    msg.setSourceEntity(126U);
    msg.setDestination(2186U);
    msg.setDestinationEntity(0U);
    msg.timestamp_last_service = 0.673127862877;
    msg.time_next_service = 0.891411954055;
    msg.time_motor_next_service = 0.707910962949;
    msg.time_idle_ground = 0.546580077185;
    msg.time_idle_air = 0.749418176764;
    msg.time_idle_water = 0.332287476209;
    msg.time_idle_underwater = 0.714229555997;
    msg.time_idle_unknown = 0.509695557645;
    msg.time_motor_ground = 0.841685883652;
    msg.time_motor_air = 0.184011279088;
    msg.time_motor_water = 0.809689809885;
    msg.time_motor_underwater = 0.51070370084;
    msg.time_motor_unknown = 0.460145510837;
    msg.rpm_min = 21154;
    msg.rpm_max = 13002;
    msg.depth_max = 0.331604906844;

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
    msg.setTimeStamp(0.0859733016709);
    msg.setSource(10107U);
    msg.setSourceEntity(94U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(9U);
    msg.severity = 150U;
    msg.text.assign("YCPISUGRSTEVFUEEPLTXHEEYOJWNFEMZQOCBNXXCZQEDFJHRWS");

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
    msg.setTimeStamp(0.0684301648545);
    msg.setSource(15878U);
    msg.setSourceEntity(44U);
    msg.setDestination(35690U);
    msg.setDestinationEntity(33U);
    msg.severity = 124U;
    msg.text.assign("MGEUIGBOWEMFFFRTULMKPUGRCCEVRWQMYRKQNNXIJVLLMBSRTRIGDKPETXTJSRYXCNHWPNXAAYZSDZKEZDPUYTSFXASKFYPQYOUEPZCOMKQSTNHWLPDSJXPAWYVANIFNIBEMJQCAUIHEPMYDWUZDPKVVGATFFHGROZEBJJDIACUZXVIZOWZHHJDNXJHVGQRNXGUCMAVYDZLVLBBFHQLJRQTLHQNAVFWCLQTUDWLJSBCCXKOOKWOIYBO");

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
    msg.setTimeStamp(0.419282090479);
    msg.setSource(3882U);
    msg.setSourceEntity(242U);
    msg.setDestination(29657U);
    msg.setDestinationEntity(49U);
    msg.severity = 246U;
    msg.text.assign("TRMPLRAYUCMOBEFPSLEEWZ");

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
    msg.setTimeStamp(0.455395258396);
    msg.setSource(48979U);
    msg.setSourceEntity(178U);
    msg.setDestination(41726U);
    msg.setDestinationEntity(201U);
    msg.channel = -118;
    msg.value = -104060580;
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
    msg.setTimeStamp(0.118523714928);
    msg.setSource(53516U);
    msg.setSourceEntity(39U);
    msg.setDestination(54665U);
    msg.setDestinationEntity(124U);
    msg.channel = -35;
    msg.value = 518826559;
    msg.gain = 181U;

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
    msg.setTimeStamp(0.141736638565);
    msg.setSource(35532U);
    msg.setSourceEntity(29U);
    msg.setDestination(62379U);
    msg.setDestinationEntity(253U);
    msg.channel = -39;
    msg.value = 1930546147;
    msg.gain = 168U;

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
    msg.setTimeStamp(0.0311261983305);
    msg.setSource(14523U);
    msg.setSourceEntity(248U);
    msg.setDestination(59217U);
    msg.setDestinationEntity(59U);
    msg.ch01 = 0.286075716539;
    msg.ch02 = 0.766982889632;
    msg.ch03 = 0.0342446487825;
    msg.ch04 = 0.565959115518;
    msg.ch05 = 0.69330246658;
    msg.ch06 = 0.182218351767;
    msg.ch07 = 0.0789586037042;
    msg.ch08 = 0.578514747359;
    msg.ch09 = 0.198352573726;
    msg.ch10 = 0.107444808556;
    msg.ch11 = 0.31891733827;
    msg.ch12 = 0.899953803599;
    msg.ch13 = 0.559337575476;
    msg.ch14 = 0.905091447282;
    msg.ch15 = 0.0878674303354;
    msg.ch16 = 0.0645972116884;

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
    msg.setTimeStamp(0.515727023313);
    msg.setSource(65078U);
    msg.setSourceEntity(34U);
    msg.setDestination(17618U);
    msg.setDestinationEntity(243U);
    msg.ch01 = 0.303425981921;
    msg.ch02 = 0.605289133934;
    msg.ch03 = 0.109159807663;
    msg.ch04 = 0.980752453285;
    msg.ch05 = 0.386522901015;
    msg.ch06 = 0.954911344731;
    msg.ch07 = 0.0273294977776;
    msg.ch08 = 0.607825386104;
    msg.ch09 = 0.681640753838;
    msg.ch10 = 0.490815920715;
    msg.ch11 = 0.374240968785;
    msg.ch12 = 0.635549470728;
    msg.ch13 = 0.995265539607;
    msg.ch14 = 0.840487378032;
    msg.ch15 = 0.300630147802;
    msg.ch16 = 0.588100140272;

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
    msg.setTimeStamp(0.547105821958);
    msg.setSource(4534U);
    msg.setSourceEntity(153U);
    msg.setDestination(52556U);
    msg.setDestinationEntity(221U);
    msg.ch01 = 0.785739495279;
    msg.ch02 = 0.580662264322;
    msg.ch03 = 0.0250730884743;
    msg.ch04 = 0.806811433094;
    msg.ch05 = 0.826926122207;
    msg.ch06 = 0.599462958659;
    msg.ch07 = 0.55445563998;
    msg.ch08 = 0.494920097996;
    msg.ch09 = 0.546108950069;
    msg.ch10 = 0.209244583439;
    msg.ch11 = 0.0553368270494;
    msg.ch12 = 0.615015985489;
    msg.ch13 = 0.495825489409;
    msg.ch14 = 0.94935809772;
    msg.ch15 = 0.509952333191;
    msg.ch16 = 0.810402741559;

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

  return test.getReturnValue();
}
