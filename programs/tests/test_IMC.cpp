//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 009a5046be102f40bfccc623630722a7                            *
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
    msg.setTimeStamp(0.515033537365);
    msg.setSource(24086U);
    msg.setSourceEntity(237U);
    msg.setDestination(45080U);
    msg.setDestinationEntity(73U);
    msg.state = 136U;
    msg.flags = 59U;
    msg.description.assign("FDYWCBRPLRTDBGJUJYPGMCXXJXLHZHODJNFDKPEP");

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
    msg.setTimeStamp(0.892668637654);
    msg.setSource(23954U);
    msg.setSourceEntity(88U);
    msg.setDestination(51810U);
    msg.setDestinationEntity(156U);
    msg.state = 87U;
    msg.flags = 51U;
    msg.description.assign("OMJAITWVUXLWTSGIOVITFQIZYBVJVONKFXPJKZUYKSAOXACUYCNXEPVASSDSOSHTXYZWQJ");

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
    msg.setTimeStamp(0.126479618514);
    msg.setSource(17841U);
    msg.setSourceEntity(45U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(109U);
    msg.state = 157U;
    msg.flags = 80U;
    msg.description.assign("LXXNFKMKNQMBZCZKURKZQIJHUQUTYFRRULBAEZNLEMCTWPFCZLODGXEOTDMMFOWSIVRFXCQJWJVOXEIAWBGJGNFPOHYAHIRPDQPDOXKWYGYHHOYJNMTSRRHPPZTSMNEVELGGWTSVLACDQIIJGFBSK");

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
    msg.setTimeStamp(0.471020387451);
    msg.setSource(47070U);
    msg.setSourceEntity(213U);
    msg.setDestination(5771U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.134828572726);
    msg.setSource(38434U);
    msg.setSourceEntity(152U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.701983261135);
    msg.setSource(45683U);
    msg.setSourceEntity(160U);
    msg.setDestination(20061U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.266391528427);
    msg.setSource(60U);
    msg.setSourceEntity(210U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(226U);
    msg.id = 57U;
    msg.label.assign("ZWHYNVUWWU");
    msg.component.assign("FLTNZMJBYREBHOPYMQCFHSEGJBUWLGZQDRMNECHMEVUWFLCLHBRYXCPOENIDOCTDJHMNBAVXVALOSKAEGSEQPHSWVESFAQXKDZJZIHHGYLGFPGUEVYIXUBBCQKWKGAZXCARYMDSBKKQAWTUWOPHYTLMJNYIAOXTQCTLFAZMDZWDGTALWVNUGNKWIHRVDPOREJDLPMIONQIQDPRQZJYSRUUOVOKVBKWRFYRK");
    msg.act_time = 28340U;
    msg.deact_time = 20108U;

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
    msg.setTimeStamp(0.186480849456);
    msg.setSource(22796U);
    msg.setSourceEntity(228U);
    msg.setDestination(48661U);
    msg.setDestinationEntity(31U);
    msg.id = 70U;
    msg.label.assign("XKWOLZRNBFGNPSVKOHUEFXFXGBOVHRCLGUZIDZGPCLMVAGHANXJFPGRRCPWLYBEBQASUKIMRHLTTTAWLQNDXCCHJBDEVSBDGWYXWHJFORFTIEHBVBLQ");
    msg.component.assign("QDTFUSQWWWNFVBIKCUBEQREJPCDHUDNMBTNITAYGZOQTWOLAQVBZBHIKSDPROXHRABXJTVYHQPJMWVKJCZRPQIVVCEQLKXEGLAJNRRIGSZDXBSUHLFGGZZKNPILEWEZJUYFTSZKCYYAXWLSJXNCGOIBMHMORZCXNSDJBGFWA");
    msg.act_time = 48384U;
    msg.deact_time = 23253U;

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
    msg.setTimeStamp(0.0775665678284);
    msg.setSource(29719U);
    msg.setSourceEntity(226U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(93U);
    msg.id = 239U;
    msg.label.assign("EKXSLKVJXZFBRXGKAYXRYMKGOXRHZTMCGWYTPQLUQHNXZNSZDOFIIWJOGDBJUHYMMNGMTINNGTMAAUVJIQOIMLVLUGJAFKQDJGQZAFEUIOLVBKPFEUYZDVTUYWYPHRAWRKHBYCIFSLZQWDCLCAJNJPVGAPVWUMZTNMCEPYCMPBD");
    msg.component.assign("OXVVIOOJGBUOTYOKVVYODWBLJLPGWTCMBWPEWCXTISDQKBDZOGJPRCBLVLJWSYOSDRXWRHDWDIBKOKCRQHSEZJTEYERFZIGKVAYSGYZTNKVUPZNEIAMURKHQMSRFYLIHEEUJDMVXURESUFDVMCHRMGKCWGHSCFTXAFLPNLQQSPZGJNIJJIPAFAACYXUIQLPXLCTCEPQRB");
    msg.act_time = 5535U;
    msg.deact_time = 35154U;

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
    msg.setTimeStamp(0.210196178027);
    msg.setSource(60266U);
    msg.setSourceEntity(40U);
    msg.setDestination(45164U);
    msg.setDestinationEntity(196U);
    msg.id = 102U;

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
    msg.setTimeStamp(0.358493128869);
    msg.setSource(36380U);
    msg.setSourceEntity(2U);
    msg.setDestination(29373U);
    msg.setDestinationEntity(162U);
    msg.id = 104U;

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
    msg.setTimeStamp(0.336702141503);
    msg.setSource(31126U);
    msg.setSourceEntity(181U);
    msg.setDestination(43547U);
    msg.setDestinationEntity(123U);
    msg.id = 50U;

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
    msg.setTimeStamp(0.0226922627498);
    msg.setSource(58873U);
    msg.setSourceEntity(43U);
    msg.setDestination(40160U);
    msg.setDestinationEntity(2U);
    msg.op = 106U;
    msg.list.assign("SOFXKCNHCSVIAMXJCGU");

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
    msg.setTimeStamp(0.67941557445);
    msg.setSource(58988U);
    msg.setSourceEntity(0U);
    msg.setDestination(18323U);
    msg.setDestinationEntity(195U);
    msg.op = 141U;
    msg.list.assign("RDKZGYAUBJVFCJBSSLLQQDKWIPDLOSBWJAPQHWWOFUMTNLLPSCNKXKKTIWCHDEJKORTZJEXNSVPZMVUCKEUSDREWOPYDNWHEAAYHNBJITEGTIGGCETDYLARUOAQZWZYXRFGBJPIFXSHVOVMIEFGFIHMDANALHNVZMDBXCMUQRJDHXSFXPTVZRXQLUKUOLYCIEJKOEHBLTFUFPMYQZNBFQGGWCVPYGNIPRXVQJOXRCNYRQHATZKIABVWBOST");

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
    msg.setTimeStamp(0.2452880756);
    msg.setSource(13690U);
    msg.setSourceEntity(134U);
    msg.setDestination(56032U);
    msg.setDestinationEntity(228U);
    msg.op = 33U;
    msg.list.assign("VIIBSMMLVBAOEGYYAYXFXQCJGJSZFZUFJPNWXAIKTQWPTELQAZBXZKEISMEDCVMSWZOMJYWFKACSAHLGKPZTLEMTRRUHPQTCMRIOFUWASLBRWHJXCTFBXQROHGLPBSRLPAHHJYIVINNTXSYPYDIHULCKQFZMAWUKTDUOXDZEGLDYECIGWQVWVECGOJOMQORRPYEETDBVSRHHMRDYVXVKUICFFXQNUFNONBKQSPDGN");

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
    msg.setTimeStamp(0.527875459246);
    msg.setSource(24524U);
    msg.setSourceEntity(202U);
    msg.setDestination(1229U);
    msg.setDestinationEntity(207U);
    msg.value = 35U;

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
    msg.setTimeStamp(0.0563578095505);
    msg.setSource(14958U);
    msg.setSourceEntity(34U);
    msg.setDestination(9818U);
    msg.setDestinationEntity(76U);
    msg.value = 47U;

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
    msg.setTimeStamp(0.794590175527);
    msg.setSource(35818U);
    msg.setSourceEntity(203U);
    msg.setDestination(56860U);
    msg.setDestinationEntity(172U);
    msg.value = 59U;

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
    msg.setTimeStamp(0.745096751306);
    msg.setSource(64550U);
    msg.setSourceEntity(96U);
    msg.setDestination(43493U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("DGFHHARRSSTWXELOEWUOFKBMVVCGFNZSCMLBROUAGLRSOBJIKNSCQXAHKHJAIUPXQZFCUPXMKVEBZDFJSJZVYHTHHYZBKOVAINCVTTVRBQYUAIPQCKZWEARXCLGLWHLDMINSVLYGBAWJVOAQTYXXLGKRUQTOFZRNONKTYFDNBSTIWJUIUPPZJHDJECFOETEWDTMAFGPLXSCINLIEYMFRBDSDXQGOKEBRJWPGMKCVDMEGQQINZMQUPYYJPW");
    msg.message_id = 7734U;

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
    msg.setTimeStamp(0.508563866619);
    msg.setSource(30805U);
    msg.setSourceEntity(186U);
    msg.setDestination(55166U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("BXJVSOPBAIDENPWNNCESYJMFOQXBTMNOAQULNOSZOIMBCDGYEZGXWGTGQYICKFLQRMOIMPJQPNAVYYVGDLZDKAJSYKRRKTZQFMKIIJTFSEOUGWKUHMCUORXHTLTHSTAKCAUVHEALDGLTIURIEVYLZUZSBKJONXYSLFYTGGXRQCDUHKTBHJDVBSCLKUZCNVEHQPWYFXFFVMI");
    msg.message_id = 21139U;

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
    msg.setTimeStamp(0.226581765912);
    msg.setSource(24335U);
    msg.setSourceEntity(213U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(197U);
    msg.consumer.assign("DKYBTHJEXUBZHKEXJGYYYDBFWDUGRLDADNQDIRWNGPWXUVSWVCMGUNQABFHTZAGZSKFRTIKKZQFMKHWMBJRBUJPLVIOYOMMFCEVYPWQRGYQPGXROASJZXSLJDPSPYFZVLNUSLHCOJTOSERBDNCLRKTFCALMH");
    msg.message_id = 35156U;

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
    msg.setTimeStamp(0.452075131703);
    msg.setSource(16077U);
    msg.setSourceEntity(137U);
    msg.setDestination(16162U);
    msg.setDestinationEntity(88U);
    msg.type = 178U;

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
    msg.setTimeStamp(0.796149989516);
    msg.setSource(60794U);
    msg.setSourceEntity(30U);
    msg.setDestination(49152U);
    msg.setDestinationEntity(4U);
    msg.type = 241U;

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
    msg.setTimeStamp(0.898931503226);
    msg.setSource(38437U);
    msg.setSourceEntity(228U);
    msg.setDestination(47947U);
    msg.setDestinationEntity(251U);
    msg.type = 91U;

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
    msg.setTimeStamp(0.627805578389);
    msg.setSource(39213U);
    msg.setSourceEntity(120U);
    msg.setDestination(33805U);
    msg.setDestinationEntity(51U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.441391834004);
    msg.setSource(7968U);
    msg.setSourceEntity(188U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(253U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.916066975437);
    msg.setSource(970U);
    msg.setSourceEntity(128U);
    msg.setDestination(49730U);
    msg.setDestinationEntity(106U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.167698674298);
    msg.setSource(45079U);
    msg.setSourceEntity(175U);
    msg.setDestination(49756U);
    msg.setDestinationEntity(250U);
    msg.total_steps = 89U;
    msg.step_number = 94U;
    msg.step.assign("AEKTEOLCMDPJXIETYINDREGBBQXNLXRMKBIHVNRVJRCCGZLDBNNUJZJPTVHZHFWIRZCYAUXQIICIDZPOCYTPXAMWKMYQVK");
    msg.flags = 27U;

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
    msg.setTimeStamp(0.839533736716);
    msg.setSource(22356U);
    msg.setSourceEntity(73U);
    msg.setDestination(61722U);
    msg.setDestinationEntity(196U);
    msg.total_steps = 246U;
    msg.step_number = 83U;
    msg.step.assign("WWPGVJMSDRJWFMANAUOEACZEZDVTLGCRJMRIUWYYYXLUCUBDMOQRSSGVHGNQ");
    msg.flags = 63U;

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
    msg.setTimeStamp(0.0227246901787);
    msg.setSource(51019U);
    msg.setSourceEntity(124U);
    msg.setDestination(38144U);
    msg.setDestinationEntity(192U);
    msg.total_steps = 111U;
    msg.step_number = 193U;
    msg.step.assign("WLHYQNXJGSSRLVBZENVLAUQZDZXJENPMIROTIPBIUNAOBTXARYKBELQHMLSPPZKAQTVVWDRKMFFEXSMGIGRPGJHUNAKDBDUMXVKCHWUOWORKNSUEBYJTTXLKYRBIHZGNCDEKECIHYCISHJOWYTAXXDXHSAGJTFPPMOQQUNDMIJRGPVFQCFZNAQLYIWGFSTSQOMITJGYVRPWWELZVCTVLKUJMQZFGJBHROCUAKWYOCMNAEBH");
    msg.flags = 156U;

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
    msg.setTimeStamp(0.382825858072);
    msg.setSource(23950U);
    msg.setSourceEntity(204U);
    msg.setDestination(43403U);
    msg.setDestinationEntity(56U);
    msg.state = 224U;
    msg.error.assign("NPVXIPXRMGVKFOUQFAPBSEOVRZJZJGKFZOROWDCHHNLOGGMHXTPTCLQDQA");

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
    msg.setTimeStamp(0.856145021045);
    msg.setSource(1311U);
    msg.setSourceEntity(228U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(201U);
    msg.state = 195U;
    msg.error.assign("UCJQYJLGJWPZEJBESFSNPTKGXCEISOAIJAWCIWJEJESQURHLXYINOXTEKKBXMTAZGKSVKNCHXNQYRZTZTEEHHUDVRBAVYBFYDXXWTDROOQSNFOHSJTIDQYUTGDQMVBUMNFLCVCOHBPSXYHMBKGAEXUOMMVLVDTRGGCWPZLMMONRFBBHRSMDPYULZXWIARFZATDQKJLQCAAPWIOUCIRLFAPMCGVQDFRFEVBHZUIWUFYHGODLQYISKGJWPKKP");

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
    msg.setTimeStamp(0.993688477911);
    msg.setSource(19129U);
    msg.setSourceEntity(107U);
    msg.setDestination(36622U);
    msg.setDestinationEntity(159U);
    msg.state = 27U;
    msg.error.assign("TKBLHDVPCARBKYNNFYTLBJZPTFLIRIELCKGMVIMVWNYPUSRIFZETWQAWONOIKLGSYWBTLUEJARCFRVTWMQCMEGCIURAHKYZQHNNYBSXGWOGHPZ");

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
    msg.setTimeStamp(0.154101581791);
    msg.setSource(33167U);
    msg.setSourceEntity(26U);
    msg.setDestination(51114U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.840896711705);
    msg.setSource(17382U);
    msg.setSourceEntity(210U);
    msg.setDestination(22230U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.159891602751);
    msg.setSource(6603U);
    msg.setSourceEntity(220U);
    msg.setDestination(65316U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.0536954128795);
    msg.setSource(59439U);
    msg.setSourceEntity(102U);
    msg.setDestination(56364U);
    msg.setDestinationEntity(124U);
    msg.op = 232U;
    msg.speed_min = 0.131797867067;
    msg.speed_max = 0.0149807104457;
    msg.long_accel = 0.721071774138;
    msg.alt_max_msl = 0.297330546659;
    msg.dive_fraction_max = 0.56685880404;
    msg.climb_fraction_max = 0.730193563149;
    msg.bank_max = 0.996292714955;
    msg.p_max = 0.39309741629;
    msg.pitch_min = 0.637854715828;
    msg.pitch_max = 0.430697401821;
    msg.q_max = 0.486086851026;
    msg.g_min = 0.494616594806;
    msg.g_max = 0.299254673016;
    msg.g_lat_max = 0.802271178796;
    msg.rpm_min = 0.900343536631;
    msg.rpm_max = 0.197810179124;
    msg.rpm_rate_max = 0.976812212351;

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
    msg.setTimeStamp(0.612116965999);
    msg.setSource(63591U);
    msg.setSourceEntity(71U);
    msg.setDestination(38596U);
    msg.setDestinationEntity(252U);
    msg.op = 214U;
    msg.speed_min = 0.420793635611;
    msg.speed_max = 0.842659128814;
    msg.long_accel = 0.361878366556;
    msg.alt_max_msl = 0.724157438436;
    msg.dive_fraction_max = 0.370745651931;
    msg.climb_fraction_max = 0.214012830425;
    msg.bank_max = 0.391872781147;
    msg.p_max = 0.724738442826;
    msg.pitch_min = 0.497161697462;
    msg.pitch_max = 0.469546417306;
    msg.q_max = 0.83503162863;
    msg.g_min = 0.572064578643;
    msg.g_max = 0.958106021266;
    msg.g_lat_max = 0.0746886270679;
    msg.rpm_min = 0.0217579769216;
    msg.rpm_max = 0.289842143062;
    msg.rpm_rate_max = 0.646653861539;

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
    msg.setTimeStamp(0.846904796288);
    msg.setSource(7608U);
    msg.setSourceEntity(170U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(70U);
    msg.op = 237U;
    msg.speed_min = 0.962506502651;
    msg.speed_max = 0.753914007855;
    msg.long_accel = 0.24819793039;
    msg.alt_max_msl = 0.996907017503;
    msg.dive_fraction_max = 0.951510292413;
    msg.climb_fraction_max = 0.553112656782;
    msg.bank_max = 0.690860231052;
    msg.p_max = 0.980392304095;
    msg.pitch_min = 0.41284286131;
    msg.pitch_max = 0.392203771766;
    msg.q_max = 0.153005717632;
    msg.g_min = 0.39068022372;
    msg.g_max = 0.74559854751;
    msg.g_lat_max = 0.110603051165;
    msg.rpm_min = 0.786647223253;
    msg.rpm_max = 0.289304241102;
    msg.rpm_rate_max = 0.748346986971;

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
    msg.setTimeStamp(0.920205285682);
    msg.setSource(59293U);
    msg.setSourceEntity(32U);
    msg.setDestination(376U);
    msg.setDestinationEntity(17U);
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 57U;
    const char tmp_tmp_msg_0_0[] = {60, 123, -68, 104, -62, -124, -81, -7, -17, 21, -122, -15, -98, -22, -125, 9, -67, -112, 70, -66, 52, -39, 66, -75, 107, -14, -77, -85, -103, -66, -85, -54, -32, -38, 10, 4, 65, -98, 30, -124, -127, 88, -51, -52, 1, -125, 116, -11, -61, -90, -60, -82, 20, 76, -4, -49, -19, -30, -97, 55, -93, -61, -79, -83, -34, 111, -58, 16, -18, -77, 32, 119, 39, -53};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.211132198687);
    msg.setSource(44126U);
    msg.setSourceEntity(47U);
    msg.setDestination(31360U);
    msg.setDestinationEntity(223U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.353746263455;
    tmp_msg_0.y = 0.961788226029;
    tmp_msg_0.z = 0.28839614596;
    tmp_msg_0.phi = 0.458529854864;
    tmp_msg_0.theta = 0.749694361395;
    tmp_msg_0.psi = 0.0358487539524;
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
    msg.setTimeStamp(0.638837186979);
    msg.setSource(39099U);
    msg.setSourceEntity(172U);
    msg.setDestination(691U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.783857444786);
    msg.setSource(17414U);
    msg.setSourceEntity(53U);
    msg.setDestination(23984U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.384852574179;
    msg.lon = 0.118395868998;
    msg.height = 0.819030283048;
    msg.x = 0.103387100257;
    msg.y = 0.926937988537;
    msg.z = 0.253027076722;
    msg.phi = 0.307978727899;
    msg.theta = 0.211695691644;
    msg.psi = 0.414849017277;
    msg.u = 0.805142524852;
    msg.v = 0.331057434056;
    msg.w = 0.355705782553;
    msg.p = 0.587766463716;
    msg.q = 0.796892164532;
    msg.r = 0.749998367022;
    msg.svx = 0.918626098441;
    msg.svy = 0.0582296294947;
    msg.svz = 0.798601998658;

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
    msg.setTimeStamp(0.871908639603);
    msg.setSource(45762U);
    msg.setSourceEntity(167U);
    msg.setDestination(30885U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.814437468333;
    msg.lon = 0.674305093542;
    msg.height = 0.0647145486462;
    msg.x = 0.38129468064;
    msg.y = 0.634984648413;
    msg.z = 0.934949778594;
    msg.phi = 0.36920570393;
    msg.theta = 0.735533467364;
    msg.psi = 0.619793517721;
    msg.u = 0.161569227102;
    msg.v = 0.82058848786;
    msg.w = 0.272815374115;
    msg.p = 0.565406419149;
    msg.q = 0.320507511774;
    msg.r = 0.303636226527;
    msg.svx = 0.712246569821;
    msg.svy = 0.179234990467;
    msg.svz = 0.995847733664;

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
    msg.setTimeStamp(0.110139489547);
    msg.setSource(39291U);
    msg.setSourceEntity(247U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.257172168982;
    msg.lon = 0.494581675108;
    msg.height = 0.152067562394;
    msg.x = 0.212286029163;
    msg.y = 0.427559631968;
    msg.z = 0.815378063479;
    msg.phi = 0.79123835047;
    msg.theta = 0.65716981791;
    msg.psi = 0.869331981879;
    msg.u = 0.33862423566;
    msg.v = 0.127465246687;
    msg.w = 0.389485411199;
    msg.p = 0.906394999549;
    msg.q = 0.325979176976;
    msg.r = 0.642322754446;
    msg.svx = 0.802933498824;
    msg.svy = 0.394478988005;
    msg.svz = 0.489566965194;

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
    msg.setTimeStamp(0.76438923704);
    msg.setSource(38130U);
    msg.setSourceEntity(77U);
    msg.setDestination(41633U);
    msg.setDestinationEntity(203U);
    msg.op = 184U;
    msg.entities.assign("CGOWLRKGUPNNYEIOCDXCAXFKXBHQAPIFCTRPGRLZIVKFHMGOUWWJTKSOBYMPNVVLUMYTSYZLWBLDBZYFXSPSZQSKEDTEMBWCQHCMNTTHWUDPHMIUQGGAJRMJYOOEOKMMEUZZONKKZLHABCKD");

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
    msg.setTimeStamp(0.192823975666);
    msg.setSource(63885U);
    msg.setSourceEntity(254U);
    msg.setDestination(1947U);
    msg.setDestinationEntity(15U);
    msg.op = 21U;
    msg.entities.assign("OTGPPERZYATQZOWBZBQHJNJZKOHLLABWDSYAUTOHYSUZKJAKDPEZJNARCVSPJWHOJXKCVGMEVNLFCWVCTRHZOQSIMUGRTVISFGCIMQYDLGNGIJMCIUSDDAFUUFCEOLPVYWQIPSKEKTQUEFZKWW");

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
    msg.setTimeStamp(0.932617655575);
    msg.setSource(33575U);
    msg.setSourceEntity(48U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(39U);
    msg.op = 246U;
    msg.entities.assign("AOUOLFMNLSGMGFZCAFHLKZANITHYZIFMOMRT");

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
    msg.setTimeStamp(0.512619923347);
    msg.setSource(54887U);
    msg.setSourceEntity(250U);
    msg.setDestination(14133U);
    msg.setDestinationEntity(159U);
    msg.type = 105U;
    msg.speed = 30585U;
    const char tmp_msg_0[] = {-22, -117, 117, -81, -117, -104, -88, 91, -112, 52, 34, -81, -103, 86, -80, 15, 121, 14, -53, -5, 85, -111, -59, 21, 29, 68, -27, 50, 92, 49, -122, -121, 18, 45, 57, 104, -42, -3, -37, -15, -101, -90, -78, 58, 113, -71, -86, 30, 115, 106, -38, 24, 4, 76, -117, -57, -23, -39};
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
    msg.setTimeStamp(0.969480981733);
    msg.setSource(21190U);
    msg.setSourceEntity(107U);
    msg.setDestination(58475U);
    msg.setDestinationEntity(11U);
    msg.type = 215U;
    msg.speed = 41357U;
    const char tmp_msg_0[] = {-16, -2, -111, -30, -97, 23, -28, 54, 76, 47, 15, -73, 60, -78, 106, 58, -66, -75, -60, -15, 95, 73, 119, 55, -9, 73, 120, -108, -26, -64, -24, -84, 93, 79, -90, 24, -55, -120, 91, 26, -98, -23, 96, 22, -41, -85, 3, -102, -67, 9, -98, 96, 106, -89, -7, -73, -39, -32, 60, -110, -103, -57, -121, 39};
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
    msg.setTimeStamp(0.51739709015);
    msg.setSource(5560U);
    msg.setSourceEntity(167U);
    msg.setDestination(21145U);
    msg.setDestinationEntity(143U);
    msg.type = 6U;
    msg.speed = 60391U;
    const char tmp_msg_0[] = {-5, -100, 119, 39, 105, 15, -41, 79, -67, 38, -101, -23, -111, 124, 17, 69, -42, 119, -106, 113, 82, 8, -74, 72, -24, 52, 14, 31, -36, -42, 90, -117, -27, 71, -113, -103, 1, 119, -128, 57, 95, -27, -108, -79, 75, -6, 47, 120, -113, -62, -109, -108};
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
    msg.setTimeStamp(0.197806787173);
    msg.setSource(1424U);
    msg.setSourceEntity(144U);
    msg.setDestination(40878U);
    msg.setDestinationEntity(173U);
    msg.op = 9U;
    msg.tas2acc_pgain = 0.19677814369;
    msg.bank2p_pgain = 0.344803018671;

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
    msg.setTimeStamp(0.532001870945);
    msg.setSource(5506U);
    msg.setSourceEntity(60U);
    msg.setDestination(27053U);
    msg.setDestinationEntity(20U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.609934642883;
    msg.bank2p_pgain = 0.895397107795;

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
    msg.setTimeStamp(0.614585052496);
    msg.setSource(55869U);
    msg.setSourceEntity(163U);
    msg.setDestination(63627U);
    msg.setDestinationEntity(17U);
    msg.op = 199U;
    msg.tas2acc_pgain = 0.520238970313;
    msg.bank2p_pgain = 0.0566404074417;

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
    msg.setTimeStamp(0.227611060773);
    msg.setSource(39982U);
    msg.setSourceEntity(40U);
    msg.setDestination(47022U);
    msg.setDestinationEntity(66U);
    msg.available = 2863792504U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.175485464008);
    msg.setSource(47298U);
    msg.setSourceEntity(59U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(173U);
    msg.available = 2313591468U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.739394634066);
    msg.setSource(42616U);
    msg.setSourceEntity(218U);
    msg.setDestination(44439U);
    msg.setDestinationEntity(153U);
    msg.available = 2439800714U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.467438794411);
    msg.setSource(14480U);
    msg.setSourceEntity(134U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(209U);
    msg.op = 166U;
    msg.snapshot.assign("TCHJVNAGHCHSMNKBBXVOZ");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -39;
    tmp_msg_0.value = 869810683;
    tmp_msg_0.gain = 249U;
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
    msg.setTimeStamp(0.762654623409);
    msg.setSource(30870U);
    msg.setSourceEntity(241U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(134U);
    msg.op = 170U;
    msg.snapshot.assign("GHARDQGQWWRWIYGYBXZFTTPRHRMHLBKASEDFWFXHILOKRGBCLANMFUNUYSTHDNUBVPKUTFHYVZUBAMUZMXONZNZJGTVKLYYFERAGZHBQJHKDSATVMAPAOJZNCFMOPDGIBNARDQYTAFEPQPRECVYXIOXBOLWCSMOWXKUXZPVKVSDPFIKQSCEIWJGSSJDEGRCJIMLTHEPCIECIKBLMLLJQUEVDNLJFNDESTQU");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 11088U;
    tmp_msg_0.lat = 0.509901866632;
    tmp_msg_0.lon = 0.648557658332;
    tmp_msg_0.z = 0.258100171734;
    tmp_msg_0.z_units = 94U;
    tmp_msg_0.speed = 0.659867984161;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.custom.assign("NXKWDOUXOCPTDQAZVHZPDHEMWVCTCRLFZXIYGMVTOUKFWPIRRDVVWVWPMKRAZTDSUMMFJBRSLSXGONEARSFNEAMOKNUFYMQDNPNRTZBGRMZHDMNRZTPBGOQKIVJLPIUFALBZGCKJPEXSGSCJCBNSYTQLTLKQGXUDVHMICOQRJJEEOYEPHDZKYAITBUIWSLKABQQWWAHPYIBCOLQWYKLIVOUFNYSUHSJHHUBGADLHIJEECGXJVT");
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
    msg.setTimeStamp(0.794298418845);
    msg.setSource(33265U);
    msg.setSourceEntity(67U);
    msg.setDestination(18235U);
    msg.setDestinationEntity(234U);
    msg.op = 66U;
    msg.snapshot.assign("BEVCIOKZBBUYTXQDVUBRVWZJFKOQWPIKFMRQDSCDUUNGAXJJVWGMENFOZJV");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.429203923971;
    tmp_msg_0.dist_min_abs = 0.658657790726;
    tmp_msg_0.dist_min_mean = 0.937341801933;
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
    msg.setTimeStamp(0.32424951301);
    msg.setSource(43674U);
    msg.setSourceEntity(13U);
    msg.setDestination(38948U);
    msg.setDestinationEntity(245U);
    msg.op = 186U;
    msg.name.assign("KRPSTVRZPIRQIOTRGYWMGVHLPVSZSFIYCMVFBQLCLPEKJNIEGNYZXIPNVHEJSMBJVHAGOUHRKVIMZRXNDJUYOHHZKUFKTRCNKPOJTGAWDLAZNQCCBYXTOPPBEXATEEWXBLKOLBUWJDEXVUQFOTZAQLKEYASGVWQGPGXCMSZUAMJGOSFQQSHRJKQCDWDSWBIKLDQIUMEZHLYUOAGNABXBNUDJIFCHYSIDRWYDJANYZDMNFOTW");

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
    msg.setTimeStamp(0.609489173747);
    msg.setSource(9339U);
    msg.setSourceEntity(36U);
    msg.setDestination(54153U);
    msg.setDestinationEntity(103U);
    msg.op = 172U;
    msg.name.assign("FRQDTCCTGGQPNIDBVVPKKITMTGACKZULPNVLDEQYVDJCZDSQKEM");

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
    msg.setTimeStamp(0.486452933331);
    msg.setSource(17786U);
    msg.setSourceEntity(144U);
    msg.setDestination(31324U);
    msg.setDestinationEntity(243U);
    msg.op = 20U;
    msg.name.assign("LGDNICAEPQKRMAOZERFXXWXLDNROUCQDDKWHKNTESYXXWTFNQLHXWYGSMRDJULXJLGIPJYOVPOMCMZOICHPOAFUEDDPBCTNAEQUKEGBSHRVMFEUHXSZ");

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
    msg.setTimeStamp(0.328802344458);
    msg.setSource(39426U);
    msg.setSourceEntity(71U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(158U);
    msg.type = 181U;
    msg.htime = 0.826030480345;
    msg.context.assign("BHKVZDQPMKKDKSVVAAHOBOITHLBYYEBVOTMEHFLIZTIZPWMPCBKNX");
    msg.text.assign("LLBLEIKXAGAUNYMJQZNENJKRPRRNLPRQVFDPHMPMRVCHUSTAYYSYICKFTYLUDVBDWLJYIGINOQDBNQVKMBQMFRXVYEWXOMIHTUAOZQKZCUDVLGFPSCLTGMABFXWCJTCZXCBOKJVYUJAFZWRGSCNZMPRELIPAEIAEEKQTUJPFSVRIWWSGZSXONVHVQCFXHODSSJDQUWHDSRXNILAFTBJOEGKOKUBITCXDFKBBWETHZONOZEYHPHPMYZGA");

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
    msg.setTimeStamp(0.59365599669);
    msg.setSource(28798U);
    msg.setSourceEntity(35U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(15U);
    msg.type = 247U;
    msg.htime = 0.479040595966;
    msg.context.assign("XUCMQGXGHEWFANJKCRKVNAMAFCVJSMGJBIDYDPYCWPRKBJBNRHYFWKZORIFZEMZIOMVAWHXIVOQOABAPFYZLSQXPXQDBMDSDRKL");
    msg.text.assign("CQWSVGWBQAQHZQMOA");

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
    msg.setTimeStamp(0.526666353545);
    msg.setSource(54430U);
    msg.setSourceEntity(28U);
    msg.setDestination(49783U);
    msg.setDestinationEntity(244U);
    msg.type = 222U;
    msg.htime = 0.952247227566;
    msg.context.assign("CGBUYIDUWQUFNSCXVZBCUHNAKAVIYMSRRLGPHTCGVZYFAQRYATFINYBHIKSNQJXJEHWYZRWGPZHUKOJLHVPFDDKNMFCSEZQORXBSFDIBWASTPXOOLODYJOVKMHUKPTFBMWLXPIEUMEGIBARPTLGDZWMNKMVBTTLCZQEZLDDAEEDHXTOWONYBFIMXQXMBOPWLOI");
    msg.text.assign("CRZRPNGOZYPDARPELKFQUNIU");

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
    msg.setTimeStamp(0.280672195741);
    msg.setSource(63333U);
    msg.setSourceEntity(46U);
    msg.setDestination(25174U);
    msg.setDestinationEntity(163U);
    msg.command = 120U;
    msg.htime = 0.745136778957;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 79U;
    tmp_msg_0.htime = 0.951356828991;
    tmp_msg_0.context.assign("TGSFCKNHHSTOTMNKZSPCYRFCBSXNUABYFAIWXUQIYCLSFJPYXGEWRZGDBQJGGWPZDQCDNMHVDJVICNRJHCKXTR");
    tmp_msg_0.text.assign("OADAXZJTLMTJVVVMRMLJMPCIWYCXNWCZHRMHSPXXEOMQZIKOQLQPDHOECEJGEXPST");
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
    msg.setTimeStamp(0.262466246563);
    msg.setSource(28171U);
    msg.setSourceEntity(155U);
    msg.setDestination(27944U);
    msg.setDestinationEntity(215U);
    msg.command = 198U;
    msg.htime = 0.257138793628;

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
    msg.setTimeStamp(0.788889797185);
    msg.setSource(13245U);
    msg.setSourceEntity(244U);
    msg.setDestination(55719U);
    msg.setDestinationEntity(128U);
    msg.command = 249U;
    msg.htime = 0.422943058252;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 167U;
    tmp_msg_0.htime = 0.437776729723;
    tmp_msg_0.context.assign("UAUYFDCZTGTLHUJBCKIRNWMYOIOKBGIUMYGZKMLVSHSPFXTHFFYTAVGGNEJDOPCSQZTHQAHASEAVNWPTPUJYKKCNQTHPVRGCWGOEJJIULCZPCOLHUABTOSJYDGKHKBPZWRCFXZXFPRVJBYUDELFBDMGAAUEIKNUJWMXLLVSQFKI");
    tmp_msg_0.text.assign("SDUALBUCGLNQQZRVAVQIWPHTITETOCOFJIYXZZGYJIPCNPCGSLMATCALJNWUFJEEHHASEKVAYBQQJZIZDDZWGTNMIRQWVJLLODBLRGKUUKWOCRTCEQQBDAOCZGIFBVLXIKBQOPBCVMUJNBZSWVDFXZPHWFFKIMJHRGNKYSSNXVUFRYOMNKXNDQAHOAVYABWBTKEPFRSZYMXCUHNXLPSKPTUYSMYMXIPRFHYVRLEGRUTEODGPOXHJXT");
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
    msg.setTimeStamp(0.335943718058);
    msg.setSource(32184U);
    msg.setSourceEntity(20U);
    msg.setDestination(6899U);
    msg.setDestinationEntity(192U);
    msg.op = 146U;
    msg.file.assign("FDHJGXXJZBLYCBLPN");

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
    msg.setTimeStamp(0.37373960387);
    msg.setSource(38644U);
    msg.setSourceEntity(38U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(212U);
    msg.op = 240U;
    msg.file.assign("WCXVXFHOQWDFDVQCAMMLKCZYXJOHMJLOAMCDRHSXUEKJRCAJMTHGDZBRHKQEIYTEGQWI");

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
    msg.setTimeStamp(0.481525654238);
    msg.setSource(15967U);
    msg.setSourceEntity(167U);
    msg.setDestination(33133U);
    msg.setDestinationEntity(98U);
    msg.op = 114U;
    msg.file.assign("VDVLXCHCXSHSZCFKWMCYOVILSNYGTEFTUXMEMUSXABNOGPOKRQRHGDQHKAPLMHHBVSGKYYGBSYSCYQQVJRQKBQTHJIMSZPTNRLAAQTWUAOPUWAKNBIUIJXZZWIEBDYNFYFOLPNWWTJFEPXJQVIEU");

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
    msg.setTimeStamp(0.969926180945);
    msg.setSource(58536U);
    msg.setSourceEntity(236U);
    msg.setDestination(64743U);
    msg.setDestinationEntity(179U);
    msg.op = 18U;
    msg.clock = 0.412189772632;
    msg.tz = -73;

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
    msg.setTimeStamp(0.988770452722);
    msg.setSource(12556U);
    msg.setSourceEntity(178U);
    msg.setDestination(43273U);
    msg.setDestinationEntity(227U);
    msg.op = 200U;
    msg.clock = 0.353512123159;
    msg.tz = 59;

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
    msg.setTimeStamp(0.992637622444);
    msg.setSource(48801U);
    msg.setSourceEntity(73U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(83U);
    msg.op = 15U;
    msg.clock = 0.389898369147;
    msg.tz = -70;

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
    msg.setTimeStamp(0.144010549626);
    msg.setSource(44452U);
    msg.setSourceEntity(74U);
    msg.setDestination(12222U);
    msg.setDestinationEntity(227U);
    msg.conductivity = 0.129675109749;
    msg.temperature = 0.0747849936452;
    msg.depth = 0.608181998934;

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
    msg.setTimeStamp(0.454776262183);
    msg.setSource(48047U);
    msg.setSourceEntity(218U);
    msg.setDestination(19014U);
    msg.setDestinationEntity(97U);
    msg.conductivity = 0.428682666494;
    msg.temperature = 0.985541982523;
    msg.depth = 0.981870824978;

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
    msg.setTimeStamp(0.416486988846);
    msg.setSource(58233U);
    msg.setSourceEntity(152U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(221U);
    msg.conductivity = 0.980114163961;
    msg.temperature = 0.655503686186;
    msg.depth = 0.658527283915;

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
    msg.setTimeStamp(0.588847884656);
    msg.setSource(22363U);
    msg.setSourceEntity(85U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.0779329678378;
    msg.roll = 20776U;
    msg.pitch = 11581U;
    msg.yaw = 24006U;
    msg.speed = 23172;

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
    msg.setTimeStamp(0.393490222186);
    msg.setSource(40802U);
    msg.setSourceEntity(8U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(35U);
    msg.altitude = 0.591521717329;
    msg.roll = 27100U;
    msg.pitch = 12965U;
    msg.yaw = 42743U;
    msg.speed = -18450;

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
    msg.setTimeStamp(0.660767614628);
    msg.setSource(49392U);
    msg.setSourceEntity(140U);
    msg.setDestination(52492U);
    msg.setDestinationEntity(14U);
    msg.altitude = 0.260758303961;
    msg.roll = 52312U;
    msg.pitch = 17413U;
    msg.yaw = 6388U;
    msg.speed = 12254;

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
    msg.setTimeStamp(0.657858060711);
    msg.setSource(41539U);
    msg.setSourceEntity(235U);
    msg.setDestination(13050U);
    msg.setDestinationEntity(60U);
    msg.altitude = 0.741765146613;
    msg.width = 0.243321957829;
    msg.length = 0.766001429272;
    msg.bearing = 0.00553814907752;
    msg.pxl = -31965;
    msg.encoding = 244U;
    const char tmp_msg_0[] = {76, 29, 56, 34, 100, -28, 0, -95, 108, 65, 103, -84, 121, 99, 77, -49, -87, -95, -38, -15, -122, 63, -67, -71, 111, -27, -78, -34, 27, 75, -48, 35, 12, 101, -2, -72, -44, 19, 68, 33, -54, 59, -50, -106, 11, 119, -111, 1, -104, -124, 81, 100, -33, 93, 8, 115, 72, 27, -35, 120, 71, 23, -6, -6, -96, -32, 86, 41, 97, -113, 51, -111, -73, -85, 66, -49, -102, 120, 62, -50, 42, -87, -46, 37, 99, 113, -79, 59, -21, -110, 2, -126, 121, 32, 50, -100, -85, -62, -40, -92, 43, 2, 117, -91, -8, -3, 119, 56, -3, 98, -61, 42, -12, -109, -113, -64, -110, 115, -52, -62, -26, 84, 28, -15, -41, 53, 124, 85, -113, 12, 105, -70, -8, 99, 91, -27, 116, 72, 98};
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
    msg.setTimeStamp(0.612271146442);
    msg.setSource(35525U);
    msg.setSourceEntity(64U);
    msg.setDestination(18000U);
    msg.setDestinationEntity(166U);
    msg.altitude = 0.894164286045;
    msg.width = 0.266718862295;
    msg.length = 0.101284239504;
    msg.bearing = 0.0805186623733;
    msg.pxl = 20907;
    msg.encoding = 58U;
    const char tmp_msg_0[] = {-69, 62, -97, 71, -7, -102, -108, 39, 37, 78, 23, -53, 39, -105, -97, -81, -94, -123, 50, 75, 1, -24, 77, 105, 45, 119, 104, 102, -46, -81, 44, -87, 90, -125, 110, 44, -46, 46, -35, 118, -105, -45, 13, -112, -14, -48, -21, 85, 87, 91, 45, -15, 55, 89, 16, 90, -102, 74, -79, 35, -42, -121, 34, 30, 106, 126, -111, -80, 96, -34, 118, -60, -17, -70, 85, 63, 56, -20, -121, 113, 57, 44, 101, -63, 86, -56, -26, -59, -59, 46, -13, 56, -125, -116, 39, 10, -96, 8, 68, -105, -102, -6, 54, -65, -111, 22, -92, -55, 64, -55, -125, 7, 71, 68, 125, 39, 81, -113, -40, 114, 40, -101, -118, 51, 77, 73, 20, 71, -50, 89, 54, -62, -89, -6, -51, -114, -94, -110, 113, 22, 23, 42, -28, 78, -46, -39, -15, 78, 87, -47, -98, 67, 93, -67, 80, 59, 93, -127, 84, 31, -74, 101, 97, -8, 41, -127, 36, -33, -7, 53, 81, 71, 64, 22, 62, -124, 18, -37, -126, -115, 39, 91, 4, -54, 4, 105, 52, -96, 117, 33, 73, -25, -60, -73, -2, 78, 119, 69, -87, 90, 0, 87, -126, 123, 67, -50, -17, 62, -4, 120, 71, -120, -24, 15, 77, -39, 24, 41, -33, -28, -32, 126, 99, 71, 12, -53};
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
    msg.setTimeStamp(0.258079255822);
    msg.setSource(41966U);
    msg.setSourceEntity(45U);
    msg.setDestination(29381U);
    msg.setDestinationEntity(75U);
    msg.altitude = 0.824693319122;
    msg.width = 0.46767522649;
    msg.length = 0.310703187792;
    msg.bearing = 0.428484583817;
    msg.pxl = 12900;
    msg.encoding = 60U;
    const char tmp_msg_0[] = {66, 106, 123, 76, -81, -111, -58, 56, -9, 118, 84, -116, 47, -44, -32, -32, -47, 72, -128, 28, 87, -40, 50, 119, 49, -58, -95, 84, -47, -128, -118, -61, 22, 76, -77, -65, -9, 88, -98, 80, -84};
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
    msg.setTimeStamp(0.35444485978);
    msg.setSource(15627U);
    msg.setSourceEntity(52U);
    msg.setDestination(47363U);
    msg.setDestinationEntity(128U);
    msg.text.assign("IAXHXAZVLMCTKDABZVSVWFBBJQMWIROVRFTWFPONYQYCBNBOMNVEQXYFGUFMACSBYNZTDWLAZGNPIRGUOKOWNOUFKKWYYHNIKXHEJICKUKWSIXTLHQLDCLMXMDPJQIFEEK");
    msg.type = 34U;

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
    msg.setTimeStamp(0.218729723523);
    msg.setSource(56995U);
    msg.setSourceEntity(6U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(219U);
    msg.text.assign("ZFJJAXMRLCUNYNAQCTUXKBFCMGHTKVYLCIUCJAMDRWIFKHGZABLQIOIXZNSREGQVDNOPUYVASAGHJEPKSNQAQOWMTOHEUBSWMSPEBPCSJTCLFWBEKYXOSUCZTFDDYHRRIYGWEXTKF");
    msg.type = 176U;

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
    msg.setTimeStamp(0.0957333086605);
    msg.setSource(56577U);
    msg.setSourceEntity(154U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(166U);
    msg.text.assign("BENCGUHBNGHHDIPMYWQKWTUVDGYXBZFFZVYNEFNKWUOFNDPBNRTFPJZNJGULAABOXMOPHXLWEWBJZHCXRLIJAQCUWEFYSVNEXCAGEOPMMVVRZLSMRDXXSQNZDUIUQNKFHSRTZGRYXYFMC");
    msg.type = 210U;

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
    msg.setTimeStamp(0.161842176718);
    msg.setSource(17266U);
    msg.setSourceEntity(133U);
    msg.setDestination(25140U);
    msg.setDestinationEntity(222U);
    msg.parameter = 72U;
    msg.numsamples = 36U;
    msg.lat = 0.425871842822;
    msg.lon = 0.187004777416;

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
    msg.setTimeStamp(0.289344477764);
    msg.setSource(38298U);
    msg.setSourceEntity(64U);
    msg.setDestination(20934U);
    msg.setDestinationEntity(80U);
    msg.parameter = 64U;
    msg.numsamples = 94U;
    msg.lat = 0.781738634917;
    msg.lon = 0.00170059866568;

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
    msg.setTimeStamp(0.503347263708);
    msg.setSource(488U);
    msg.setSourceEntity(88U);
    msg.setDestination(64285U);
    msg.setDestinationEntity(107U);
    msg.parameter = 228U;
    msg.numsamples = 129U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24949U;
    tmp_msg_0.avg = 0.973269346636;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.550899218818;
    msg.lon = 0.262479952536;

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
    msg.setTimeStamp(0.845264128471);
    msg.setSource(9530U);
    msg.setSourceEntity(133U);
    msg.setDestination(38288U);
    msg.setDestinationEntity(4U);
    msg.depth = 38437U;
    msg.avg = 0.496692346268;

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
    msg.setTimeStamp(0.119301715879);
    msg.setSource(24677U);
    msg.setSourceEntity(177U);
    msg.setDestination(32651U);
    msg.setDestinationEntity(121U);
    msg.depth = 27127U;
    msg.avg = 0.566845312875;

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
    msg.setTimeStamp(0.658470477552);
    msg.setSource(24982U);
    msg.setSourceEntity(174U);
    msg.setDestination(47709U);
    msg.setDestinationEntity(127U);
    msg.depth = 28168U;
    msg.avg = 0.127120698203;

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
    msg.setTimeStamp(0.0561081842596);
    msg.setSource(7907U);
    msg.setSourceEntity(113U);
    msg.setDestination(45013U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.800430751572);
    msg.setSource(61112U);
    msg.setSourceEntity(0U);
    msg.setDestination(52480U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.687284083334);
    msg.setSource(55765U);
    msg.setSourceEntity(251U);
    msg.setDestination(48235U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.94217285764);
    msg.setSource(1679U);
    msg.setSourceEntity(178U);
    msg.setDestination(49123U);
    msg.setDestinationEntity(86U);
    msg.sys_name.assign("QVBDLVZQVYTUUFOCPPRVKXEDYLOMGIJWNDPGLTXUBXGCE");
    msg.sys_type = 45U;
    msg.owner = 26502U;
    msg.lat = 0.818598645863;
    msg.lon = 0.823509581417;
    msg.height = 0.86453183342;
    msg.services.assign("AXSGRWPGSBPFYMTIHZNBSWVLZTDXAVNGTWWQKNRKVFTWEPQCGJLWTOJAQDBABLCZYOSOMRHSRHGTAHERXKJUPN");

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
    msg.setTimeStamp(0.880204253259);
    msg.setSource(3106U);
    msg.setSourceEntity(135U);
    msg.setDestination(533U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("XERKVQJHEKOFWXABMWYJNCEOFVMFSPDBFLJJJHUAHMOTTLPGQNUGBCHIYTBLHCCYXFTMTTJRLQPGKMPDBACAHFUASPPZSONHZIYJWWYQDGOOXVV");
    msg.sys_type = 120U;
    msg.owner = 49691U;
    msg.lat = 0.684646902013;
    msg.lon = 0.254532874817;
    msg.height = 0.298944517229;
    msg.services.assign("WETDRGSYBVNCQKGUAJVLTMVVFHKFAEYTUXVQOBFDCLNBIRGCPNHWJKPFMASTTGQBUSJFCUHRRDNFIYSQOCZGYJAQKNYCUKQSFJOXQDSGEPEXXQYUPIEXPOCBJFZWNZRJGRDPLZAIOMSIDKTLIVBEDAXTZEDBZGZBKDVGWOCRMONPSFTINLUBXIWLZJGTXORMWHBXLEHHPTZVLVAMM");

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
    msg.setTimeStamp(0.213821169314);
    msg.setSource(17953U);
    msg.setSourceEntity(48U);
    msg.setDestination(11933U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("LPNXDAUMPGFQQMVRLRVLQJQTDWGBUFBALOGKVAAZHBMCNWPYSEPMNNZYBQYXMGTFVDKJPWDEOQVDWISJOYFIIOFUHUPBOWPIGKEHMLZESECMHOTNXNJRFQUVXABJSYBQVTRZOYLKIDZFZWDYJFZSIBDUYPTPELZGUJWZI");
    msg.sys_type = 221U;
    msg.owner = 65251U;
    msg.lat = 0.871554154551;
    msg.lon = 0.663519980451;
    msg.height = 0.470833049102;
    msg.services.assign("UVNKGPTBJVQJCHDWYKQYSOTCPYEKCONGBDRZXXYRPBCIIJTIUKAWEXWFHZYLVSMRNCAO");

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
    msg.setTimeStamp(0.755571862004);
    msg.setSource(13517U);
    msg.setSourceEntity(81U);
    msg.setDestination(57368U);
    msg.setDestinationEntity(28U);
    msg.service.assign("CQBSNGMTVHMCFRTEDSTUNJHSHGIVLKTUGFWLWXAYCPQVREHYNOYLUCMJLLKXVUPOENO");
    msg.service_type = 43U;

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
    msg.setTimeStamp(0.762089178474);
    msg.setSource(22745U);
    msg.setSourceEntity(209U);
    msg.setDestination(13132U);
    msg.setDestinationEntity(99U);
    msg.service.assign("XUQWZFSSLKBIKCGPDLVPBPQRZDFCJJIPUNIGEVBFNEMYRFQGXWGTZSXONMKUBCYOACPHSQKYBBNDLCYOHPXAHJYEFKAIEBTRZIYXNJUDMGKWOMTYZAAAOIVKSCOTXMLSYXLHVPMCHTYGSCDZOBVCWFFTLVBDQUPMEVWLRJTFWQVZQSJZAXGUFUEFONSHRGAIONTIMJKEVTXJVHNSANULQKHMOQXBPRKQWILWHGUTWERPRDWERIJGDDMCNYDAZ");
    msg.service_type = 59U;

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
    msg.setTimeStamp(0.0852921590129);
    msg.setSource(45778U);
    msg.setSourceEntity(12U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(249U);
    msg.service.assign("JXRHKYJQFBASDEGIMPHDCCNCMAIMWOWXTJZESVYWZRAXNUTUYXTXLBZHHIKEQKUQMZLFECTLCURYATUSUYKHVPSSMHFKBQWEYRAVGCMDUHLEIGQCYDNOQDFBZCROWSDWXXNFURHTQDGROMVEAVLIKFOPJLL");
    msg.service_type = 188U;

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
    msg.setTimeStamp(0.206583148074);
    msg.setSource(34687U);
    msg.setSourceEntity(81U);
    msg.setDestination(14462U);
    msg.setDestinationEntity(0U);
    msg.value = 0.187142202987;

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
    msg.setTimeStamp(0.395408501203);
    msg.setSource(28413U);
    msg.setSourceEntity(40U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(15U);
    msg.value = 0.243064069871;

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
    msg.setTimeStamp(0.884653569284);
    msg.setSource(17545U);
    msg.setSourceEntity(137U);
    msg.setDestination(44832U);
    msg.setDestinationEntity(37U);
    msg.value = 0.0753324638631;

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
    msg.setTimeStamp(0.773713075415);
    msg.setSource(62858U);
    msg.setSourceEntity(118U);
    msg.setDestination(50428U);
    msg.setDestinationEntity(237U);
    msg.value = 0.543297612573;

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
    msg.setTimeStamp(0.0977544680288);
    msg.setSource(31211U);
    msg.setSourceEntity(151U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(208U);
    msg.value = 0.786130948913;

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
    msg.setTimeStamp(0.987920466309);
    msg.setSource(27459U);
    msg.setSourceEntity(239U);
    msg.setDestination(4201U);
    msg.setDestinationEntity(110U);
    msg.value = 0.630901372207;

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
    msg.setTimeStamp(0.100229273252);
    msg.setSource(29101U);
    msg.setSourceEntity(65U);
    msg.setDestination(58370U);
    msg.setDestinationEntity(123U);
    msg.value = 0.228679858337;

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
    msg.setTimeStamp(0.0553313331452);
    msg.setSource(1687U);
    msg.setSourceEntity(35U);
    msg.setDestination(30751U);
    msg.setDestinationEntity(181U);
    msg.value = 0.272780502965;

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
    msg.setTimeStamp(0.0774890122254);
    msg.setSource(32U);
    msg.setSourceEntity(170U);
    msg.setDestination(9032U);
    msg.setDestinationEntity(187U);
    msg.value = 0.353087040023;

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
    msg.setTimeStamp(0.0119682310485);
    msg.setSource(65328U);
    msg.setSourceEntity(33U);
    msg.setDestination(46398U);
    msg.setDestinationEntity(97U);
    msg.number.assign("PNLGQYYJAXJEWBWTOUHEDPDJJZXCKRBOTXPIQVQWMGUHXPEUQZGSGELONIFXCAQRGFXDRXCVTTEINBPJFXFELMW");
    msg.timeout = 26496U;
    msg.contents.assign("WUZLQEVVDZISADTFAXTLLTWJGKPRFKVAXJMDJTMRJSMXQCXUYISOWSHHNIYOBRKMVKSNLBMNULSOBUBGGMBYCZJBFAQKRIYZCRAXYAKDAOLDEWLTEEISGCPGHFTCEN");

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
    msg.setTimeStamp(0.532057504657);
    msg.setSource(17459U);
    msg.setSourceEntity(167U);
    msg.setDestination(50805U);
    msg.setDestinationEntity(221U);
    msg.number.assign("HCXRLOEPCVSSUDRTAZOUNEGGDVQAVEKUZGSRDMOCFHGBVCIALBHLPZQHREZGCBTZQDAGJLJTMIHWWUQWHTPOKNJHBOCFXXPCH");
    msg.timeout = 58410U;
    msg.contents.assign("OFPJDRGNACLSRXTRSJEJUIWUWILLMEVSOCJXFRFDQKUSBZAZUDIHQYXKOZEVTGSYGUHPFKEKMRCRWZVWOVIPGWUHUNUATMDPQBRNYBNBPISMYTEMMVJIABULLVOSHWUHKWCETIGDORAJQMPCWVCKIDTHQFXENYPCXWVYB");

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
    msg.setTimeStamp(0.0904445356307);
    msg.setSource(41156U);
    msg.setSourceEntity(234U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(140U);
    msg.number.assign("OZHDYPSEIVVVENNLZBTKLBBZUTJYKCRERRFOSKDVRXDYMASPRRJWLDAWQIHJPKFIBMGRUDCTAKEFITJEEFNLLWAOTCLFHHKPHSHVZADNHC");
    msg.timeout = 60187U;
    msg.contents.assign("YKMTPDKKUQWQGECPZ");

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
    msg.setTimeStamp(0.738829393145);
    msg.setSource(6079U);
    msg.setSourceEntity(209U);
    msg.setDestination(3576U);
    msg.setDestinationEntity(173U);
    msg.seq = 2474009261U;
    msg.destination.assign("AEQLNEIBSQQUWVCPUYASGHDLVDQOEEJMMFNEAMNFYTGDFBHBHEOXRSMNRJKQUONTFJJVDMHBWMEYFGBTXJYZCDIHKPJZAXVUXNRVHIOJTGIIEWXRCSYYHPISKOUZGQBCDLDSFUAIPZSYLFBDTFZCMKDQPNRKJLVVQBTOAGBXZWTAZVGIGYYCSOGUECYLRVXVACWLTAWFPOKKODWUWRPWNHEPIHLPXUQHRUAMLOKCSQJ");
    msg.timeout = 43066U;
    const char tmp_msg_0[] = {52, -94, -33, -58, 34, -32, 44, 35, -52, -61, 48, 78, 36, -11, -4, 18, -96, 82, -90, 14, 66, -71, -7, 119, 12, -37, -55, -100, 36, -14, 110, -43, 104, -4, 78, 122, -110, 35, 84, 28, -114, -78, 105, 68, 92, -106, 54, 105, 87, -33, -92, -120, 57, -128, 102, 43};
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
    msg.setTimeStamp(0.186304580403);
    msg.setSource(24414U);
    msg.setSourceEntity(138U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(116U);
    msg.seq = 1786017901U;
    msg.destination.assign("KYKUKGBJFBZSIRYYGDXYZIITZIG");
    msg.timeout = 50735U;
    const char tmp_msg_0[] = {48, -72, 42, -41, 18, 7, -127, 7, -52, 53, 6, -125, 87, 111, 47, -30, -106, -3, 115, -80, 23, 122, -15, -47, -3, 98, 114, 6, -95, -46, 62, 119, -3};
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
    msg.setTimeStamp(0.350060680044);
    msg.setSource(2363U);
    msg.setSourceEntity(34U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(10U);
    msg.seq = 2322262372U;
    msg.destination.assign("PSJAZAFIBGNXMDHGKFJVNYHBIUSRFZZIQWCEZMWHQYGQWDTAMLBZFZTQZXHNOLEDQDRIOWDGPUYMWQBHJ");
    msg.timeout = 2019U;
    const char tmp_msg_0[] = {-84, 72, 68, -112, 10, 64, 113, -111, -18, -51, 115, -4, 64, -76, 47, 104, 101, -121, 0, -122, -19, -8, -16, 3, -5, 43, 65, 113, -25, 43, -75, 55, 92, 118, -112, 91, 110, -112, -97, -40, -123, 52, -73, 115, -4, -109, 56, 71, -73, 45, -10, -124};
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
    msg.setTimeStamp(0.951608881691);
    msg.setSource(59002U);
    msg.setSourceEntity(73U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(59U);
    msg.source.assign("TDRZXCZMSDGFQJZNYGDMAQJCLTWQVHGUQQZKHEFZPEXBSAHVOFCVESALRPWWXSMAHPSMVYXNONVDOIAIPLOTTAQBYCJ");
    const char tmp_msg_0[] = {-36, -81, -123, -108, -52, 98, -70, 44, 38, 55, 107, 86, -13, 4, -23, -40, -69, 69, -97, 34, -83, 12, -125, -76, 17, -119, -24, 34, -89, 8, -10, 89, 26, 46, 110, 35, 110, 78, 16, -75, -31, -1, -64, -62, 32, -44, -99, -109, -89, -20, 122, 90, 80, 76, -123, -47, -98, -17, 57, 75, 116, 120, 0, -24, -55, -97, -19, -17, -57, 60, 101, -10, 18, 117, 93, -109, 89, -107, -5, -54, -96, -103, 52, 88, 95, -13, 32, -72, 39, 13, -101, -62, -32, -116, -113, -100, 35, -118, 8, -48, -26, 64, -48, 41, -120, 63, -17, -36, 50, -12, -48, -36, -13, -49, -7, -117, 29, 126, 109, -5, -7, -106, 8, 97, -69, 122, 37, -12, 30, 79, -98, 100, -77, -44, 40, 33, -56, 26, -94, -85, 96, -13, 49, 96, 99, -5, 49, 22, 53, 9, -25, 111, 49, 13, 94, 8, -123, 105, 69, -51, 123, 94, -53, -16, 82, -30, -87, 36, -95, 54, 19, 68, 107, -72, 45, 122, 98};
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
    msg.setTimeStamp(0.273038081759);
    msg.setSource(33495U);
    msg.setSourceEntity(218U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(240U);
    msg.source.assign("JHHUXCSFGJCAMWBRREJTELYN");
    const char tmp_msg_0[] = {-8, 6, -3, 66, -71, -45, 37, -55, -33, 84, -65, -128, 48, 13, -44, 80, 70, -73, 121, 38, -18, 67, 66, 125, 110, -96, 5, 42, -106, -52, 51, -80, -74, -17, 74, -75, 23, -40, -27, 60, -90, -49, -50, -19, -97, -58, -71};
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
    msg.setTimeStamp(0.844083181172);
    msg.setSource(38256U);
    msg.setSourceEntity(49U);
    msg.setDestination(39632U);
    msg.setDestinationEntity(111U);
    msg.source.assign("IGKAKQVYUDDNPDSPXFKPNOORSIAHCTOBTGPKJDUVYQQETHSAWLXCBEZWCGMLUSPURKKOZOHWCTQNTCKEIHBMBOYMEHA");
    const char tmp_msg_0[] = {10, -99, -88, 78, -98, -66, 54, -24, 47, -50, -94, -120, 35, 113, 100, 102, 112, -41, 77, -16, 108, -100, 29, -23, 28, -66, 42, -51, 97, 71, 22, -56, 106, 34, 18, 71, -9, 78, 27, 20, -121, -26, 6, -86, 108, -1, 33, 40, -45, 81, -99};
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
    msg.setTimeStamp(0.505472204307);
    msg.setSource(10489U);
    msg.setSourceEntity(197U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(183U);
    msg.seq = 759170459U;
    msg.state = 223U;
    msg.error.assign("TQEZBKSZCYPCEQNQTQMLZWYFWFUSVQRXGIIWLQTJHUSDIONAJVPWBHAULSQZYRLTSPLWDXHFXZZTHJANCREKEBVUWDRZZRUYTRXY");

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
    msg.setTimeStamp(0.221047450908);
    msg.setSource(59873U);
    msg.setSourceEntity(82U);
    msg.setDestination(28895U);
    msg.setDestinationEntity(52U);
    msg.seq = 1069866049U;
    msg.state = 58U;
    msg.error.assign("XGVXMDSDLTSKQOVDSAZFBNURMWDOVYXAPVSMMDVSXUILPGIZNJPHQMUZTIZROKGGQLNAJHIIQAVEFXXBZMKYBIHPWHBIYCFKEFLRUNCQRDJWOEAYJCKYHTPGLCCTVGUBTXZHBCDMWGEKHONEPPCTCWTRNUAPJZNSIXCYDVFREAINBRKUZASWLLLEOHSWK");

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
    msg.setTimeStamp(0.960876249214);
    msg.setSource(1042U);
    msg.setSourceEntity(59U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(225U);
    msg.seq = 530389108U;
    msg.state = 141U;
    msg.error.assign("ODZENCSETFXIRKBQXZGCSPPRIEYIVMHNWXOAPQDBAHWIDTFUCWNRLGGTXDSOGCOVRYVJEQDJRGNZONBSXIPSMQULRZWIFLEXFUWOOUTQLICKCIHGVENPQJLMVKPJKYHVJSILPMAFZATWZGRFYBSBSWASHHKBATEMYHMTKPAUCWYCOTHUUMJLKZEKGDTZLTY");

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
    msg.setTimeStamp(0.523461161261);
    msg.setSource(42448U);
    msg.setSourceEntity(151U);
    msg.setDestination(58434U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("UTQOLTWSAFHOBHXYBLL");
    msg.text.assign("KLIKKMFBWWVFXKAUDJRLSLYNUHTPEISXEQZGVRPKCTJPGVFQDUCNERUB");

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
    msg.setTimeStamp(0.114379451221);
    msg.setSource(48691U);
    msg.setSourceEntity(213U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("GAABVFPVEPRMZIGCQPMCKSOJEESUYWMRYHCITQCBPCNZAYUHIMLPPFRLZJHBOKMVSBDDNJKKHJCWQTYZFQRPBWFXVWCSDOFIHLFEFBEKRRQNFEDHVZTEUMZKGXBVJVOLGNESXLVMTCRLOQIAINOPBLLTQGUFJDYJPWEUAXDTTIAXHNWDSRGCUIOSUQOFSAZY");
    msg.text.assign("JDGJWLQVWHBSLRMWGNQCFKBODTTFEWBHNXQXAGZBMGVGCYFJXMAETYYNTSFKXTKAQFMADNJBKMNM");

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
    msg.setTimeStamp(0.771820486882);
    msg.setSource(56903U);
    msg.setSourceEntity(218U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(225U);
    msg.origin.assign("EKZLIJGOHXZSHWAVMCUVDVYNEDVUERZINHEEPZWJM");
    msg.text.assign("SZVLKYNHBDBXILWMYEELWMKFWSMXTAXBEFRCXILVSOJCFEZKBDXFDIRPQQXNYTFZDYTPNCYJRKPQPJHJFAAMWWEJAOZOFICBHRTRDEPKVGVZRZKQZLYYIDUGLSSOTTRSQJCHQHZULUSAWCFZMWHMUORWBABMDPKBIXEGZAVNPEEDQVVOCGJSJGCNLYUQOGATUUUGHXNAXCFOMOURTTHKNMCTGKLIIWQGIYHVPJP");

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
    msg.setTimeStamp(0.885404613337);
    msg.setSource(13829U);
    msg.setSourceEntity(220U);
    msg.setDestination(9047U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("HFCFXMFUEBLMMCRNYYCNCCDWIDEVTBHEHWRSJVSAERFRUGDYXQXZLEPFEDUSGOOZXTQDKDRINXBKVDPKULYMNBMHVARACISZVUHQBKOJKWFZNLQYU");
    msg.htime = 0.323484093885;
    msg.lat = 0.708003505668;
    msg.lon = 0.107142953639;
    const char tmp_msg_0[] = {-1, -63, -117, -23, 65, 5, 114, -71, -111, 25, -16, -7, 105, -102, -102, 19, -88, -52, 103, -11, 56, -123, -115, -10, -64, -115, -61, -16, -63, -74, 67, -75, -95, -84, 22, 94, -95, -26, -23, -76, -31, 110, 37, -76, 78, -34, -100, -75, -22, -55, -51, 8, -75, -48, 39, -80, -22, 75, -27, -123, -56, -77, 124, 115, 17, -58, 68, 7, 92, 70, -37, 43, 23, -18, -62, -19, -115, 59, 119, -99, -15, 61, -34, -48, -15, -3, 60, 67, -108, -69, -37, 79, -9, 21, 17, 0, 96, 41, -63, 81, 46, -45, 44, 116, 67, 1, -120, 104, 99, 99, 8, -29, 47, 111, -84, -107, 55, 73, -108, 99, 68, 56, -79, 54, 102, -78, 87, 36, -44, 106, 116, 72, 65, -5, 36, -49, -122, 117, 58, -37, 111, 109, -50, -60, -104, -40, -57, 38, 39, -124, -116, 5, -15, -60, -58, 50, -64, -125, 18, -36, -3, -10, 85, 111, -74, 51, 89, 52, 68, -83, 42, -59, 41, 113, -9, 43, 13, 92, 126, -22, -98, -45, -59, -120, 74, -22, 42, 25, -17, -78, -30, 3, -125, 2, 112, 107, -125, 28, 13, 75, -64, 17, 81, 102, 48, -61, 44, -19, 78, 13, 22, 82, 110, 47, 56, -59};
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
    msg.setTimeStamp(0.608517941114);
    msg.setSource(24414U);
    msg.setSourceEntity(6U);
    msg.setDestination(8056U);
    msg.setDestinationEntity(161U);
    msg.origin.assign("SKYQQGZINENKOHSJRQBVXDZMVBJLGNURFZGOCEUBHESKTFSJOUKOAIDDQLQZOAPCWKYYCQAVBOPFXKLUMYKPDOFRXXYJZOSIECEMTMOXHBLGIJLRKWCIWMOEABHZPIHJMRTXAEITNCRIEPN");
    msg.htime = 0.555254585592;
    msg.lat = 0.532920313415;
    msg.lon = 0.488419247581;
    const char tmp_msg_0[] = {38, 90, 114, -13, -95, -89, 7, -67, 28, -125, -93, 92, -36, 31, 74, 77, 114, -68, 37, -20, 88, -105, -95, 25, 77, -77, 96, 19, -82, -73, 74, 15, -98, -35, 36, 65, 63, 120, 27, -3, -13, 45, -52, 96, -100, -14, 77, -102, 34, 21, -125, 3, -37, -42, -62, 29, -30, 122, -60, 107, 111, -64, 45, -75, -59, -8, -83, -59, 24, 30, 51, -44, 119, -127, 82, 73, 17, 43, 71, -84, -12, 110, -32, -14, 76, 111, 95, 97, -102, 7, -122, 47, 126, -115, 81, -55, -3, 53, -127, -80, 59, -103, 76, 15, 62, 52, -54, 30, -54, 103, 116, 22, -9, -66, 51, 86, -117, -56, 50, -2, 11, 39, -35, 45, 121, -47, 51, 22, -75, -122, -89, -33, -45, 91, 0, -11, -76, 88, 124, -68, -84, -101, -33, -9, -58, -80, 108, 93, 69, 115, -116, -124, 97, -25, 23, 8, -125, 50, 24, -68, 89, -44, 23, -122, -107, 33, -97, -101, 77, -11, -101, -67, 112, -53, 43, 25, -35, 87, 34, 101, 105, -60};
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
    msg.setTimeStamp(0.964172654732);
    msg.setSource(36475U);
    msg.setSourceEntity(249U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("CXAGOBSJMBVMKBCPAAWUHAFEFQDTFHUYIGVHSKMICZPONONOYYPWNOJNQAO");
    msg.htime = 0.0783058117929;
    msg.lat = 0.103799273395;
    msg.lon = 0.299040309151;
    const char tmp_msg_0[] = {-61, 96, 7, 110, 49, 30, -75, 93, -118, 109, -126, -75, -84, -46, 36, 89, -103, -35, 79, -128, 45, 79, 112, -83, -45, 85, 40, -91, 55, 41, -128, 84, 98, 101, -120, -38, 87, 56, -46, -70, -120, 83, -29, 59, 78, 15, 86, 71, -25, -30, -92, -83, 16, 67, -127, -91, 81, 39, -74, 38, 105, -41, -52, -80, 104, -49, -98, -90, -101, -109, 59, -50, 8, 77, 116, 12, -49, 89, -69, -98, -64, 3, -40, -45, -98, -45, 124, -32, 55, -43, 107, -81, 52, 45, -27, -125, -112, -87, -20, 22, 26, -65, 1, 45, -33, 60, -41, -83, 122, 77, -17, 53, 53, -86, -31, 44, -87, -94, -44, 30, 6, 43, 125, 92, -27};
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
    msg.setTimeStamp(0.94267697086);
    msg.setSource(23646U);
    msg.setSourceEntity(10U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(180U);
    msg.req_id = 5560U;
    msg.ttl = 15653U;
    msg.destination.assign("PVOVHKZKZIYTLPCISFOECVKRKJTJVMCIFZDSPUQQMXTRDODAJTUAZJQBYCWDWFIFCWQBYJAALOQHROXHQKJWKUXHEWSRGNNKPOTPFQXIPSZHYDIEKEGTTHUBEMVVYN");
    const char tmp_msg_0[] = {61, -94, 110, 77, 57, -6, 15, -106, -44, -12, -56, -80, 21, -79, 103, -78, 34, 65, 89, 117, -9, 117, -117, 13, -61, 28, 64, -50, -98, -56, 1, 104, 77, -78, -60, 56, 61, 74, -87, 46, 25, -28, 113, 101, 34, 69, 89, -62, -37, -100, 120, -32, 38, 74, -62, -4, -109, -21, -114, -97, -23, 20, -11, 97, -94, -84, -97, 75, 113, -115, -104, -42, -68, -72, 29, 43, 104, -86, 100, -3, 25, -67, -117, 20, 65, -97, -106, 51, 95, 80, 120, 10, -17, -85, 56, -89, -112, -76, -94, 28, -86, -109, -17, -91, 121, 92, 81, -108, -47, -72, 8, -123, 9, -40, 23, -6, 98, -13, 60, 110, -62, -56, -52, -13, -92, 114, -21, -95, 47, -57, 5, 122, -64, -105, -86, 46, -44, -72, -93, -16, -4, 53, -110, -28, -46, 27, -68, 87, -52, 66, 41, -36, -97, 54, -80, -53, -110, 28, -88, -107, 3, 115, -93, 98, -43, -27, -113, 44, -17, 99, 65, -108, 45, 88, 116, 42, -104, 47, 108, 102, -10, -39, 109, 119, 32, 112, 48, -69, 18, 68, 91, 42, -99, -18, -27, 5, 122, 71, -116, -32, -45, 3, -34, 73, -84, 51, -64, -36, -99, -73, -7, 7, 39, 47, -23, -1, 89, 58, 41, -30, 67, 103, -41, 65, -81, -54, -124, 0, -21, 74, -21, -20, 115, -39, -8, 100, -37, 124, -26, 75, 97, -110, -25, 31, -12, 96, 6, -82, 53};
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
    msg.setTimeStamp(0.111804184853);
    msg.setSource(43742U);
    msg.setSourceEntity(132U);
    msg.setDestination(24852U);
    msg.setDestinationEntity(83U);
    msg.req_id = 61170U;
    msg.ttl = 31363U;
    msg.destination.assign("KAXOCWFNHHLMCPMTZNPRYBWYDRKGWBDYUXHQCFSYIVZGTRIUREZKNRANMJVAOPJAODEVGGWNTQPFFYDEWKYLCECHSTWWQKRMAHFDMKNGILUFGVEFFSYYLELMEMIOQTKQONSASSRMQDLNCPYMXDXQFHBKRBNBWJHZTZDSXLSIUEDOATXGLOMHHC");
    const char tmp_msg_0[] = {-61, -114, -52, 101, 66, 34, -5, -116, -2, -119, 60, 17, -78, -40, -8, 36, 6, 56, -32, -59, -55, -48, 93, 23, 28, 125, 28, 117, -34, -109, -63, 104, -67, 97, 8, 101, 92, -76, -49, 3, 43, -52, 92, 85, -57, 107, 42, -98, -109, -33, 17, -128, -67, 41, -27, -30, -11, -82, -48, 69, 103, -90, 124, -19, 104, -113, -48, -123, -123, 125, 45, -22, -73, -122, 95, -41, 6, -98, -55, 95, -9, 116, 87, 19, -69, -6, 59, -58, -49, 13, 43, -113, 73, -104, 71, -87, 68, -100, -31, -55, 13, -126, -115, -47, 1, -63, -14, 61, 104, -10, 0, -108, -128, -23, 126, 42, -23, 76, -36, -17, 113, -124, 118, -98, -39, -22, 90, -101, -67, -77, -2, 85, -116, -111, -100, 4, 41, 26, -84, 27, -106, -62, -99, 13, 70, 18, 29, 6, -115, -76, -5, -77, 18, -10, -59, 73, -74, -72, -119, -72, -96, 13, -47, -36, 59};
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
    msg.setTimeStamp(0.0309350677159);
    msg.setSource(38146U);
    msg.setSourceEntity(60U);
    msg.setDestination(41550U);
    msg.setDestinationEntity(27U);
    msg.req_id = 51631U;
    msg.ttl = 13122U;
    msg.destination.assign("NFJOMXPWLZSDNGIPRMDCNILIKFIZHPGEODUFDNBJAUEAJNYVE");
    const char tmp_msg_0[] = {-34, 18, 47, -92, -128, -74, -43, 63, 13, -120, 75, -92, -120, -54, -57, -98, 17, 48, 111, 59, 0, -93, -5, 86, 98, -54, -98, -69, -21, -54, -57, -113, -55, -46, -82, -51, 101, 16, 124, -34, 80, 123, 61, 4, 91, 42, 35, 73, -43, 5, 14, -81, 32, 2, -1, -104, -41, -89, -56, -11, 10, -62, -10, -18, 66, 77, 37, -74, -91, -18, -100, -56, -119, -25, 62, -117, -127, 50, 116, -26, -105, -35, -104, -12, -42, -46, 45, -15, 74, 18, -39, 77, 55, -111, -1, 108, 37, -107, 74, 118, 72, 54, -18, -9, -36, 123, 12, -72, -22, -67, -104, 79, -31, -50, -25, -38, 23, 89, -14, -26, 103, 110, -90, -80, -9, 93};
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
    msg.setTimeStamp(0.393491657894);
    msg.setSource(45437U);
    msg.setSourceEntity(3U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(181U);
    msg.req_id = 5452U;
    msg.status = 10U;
    msg.text.assign("EZNMBTSWZTINTKHJPSEOGQCBCGXYRJVQANNJIXGNDKFJSVBYIFWMGWIRUIUDDHCBTWUSFPTGMUTLBHSLBSATUNLDWPNSROYFEDZRYMPAPCZXHHJDHMGA");

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
    msg.setTimeStamp(0.0088578262512);
    msg.setSource(7366U);
    msg.setSourceEntity(93U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(65U);
    msg.req_id = 38157U;
    msg.status = 188U;
    msg.text.assign("SNCDTHYRFXDKZUMUKKPVSMIPUODMEEPMUUEJWTSTQVNINNXVYKRKTQOLNNWVFPJYZYQKEMJEXXMOYGDKSDPALCBFUSCEACAWANWVIFKBHGBRCYHPMZNCVIFQRKEGYDAVZEAQIOLAXHIBQOBLPDCVC");

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
    msg.setTimeStamp(0.504782188067);
    msg.setSource(13192U);
    msg.setSourceEntity(182U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(73U);
    msg.req_id = 42584U;
    msg.status = 241U;
    msg.text.assign("UECEBQAXVSBNDIFODGPWYKUVEFSTDOJIXKSSIFHZHGPWAPLIATOQHFTXBLIFKQKJQVKZZCEGCPZQUROVMDKUOAHKUUUAGACDHZFMZJSKDVRRWMXDRJLBTGORYYLUCLDCTKLPGKXNEWBVNDANLCJRQZJEFLVHPTEJYAQISMYMSTZBWSIWMVPQIGCWZFYDJYINWTHIROOVVOCBESZPWH");

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
    msg.setTimeStamp(0.0254673776231);
    msg.setSource(2220U);
    msg.setSourceEntity(249U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("PVYMQKUZNFMFOKZPLIJOCWCPMAWDHMJLESYNXTHDTZOTJMEOEHUVRXNJCOLBSHPTWTOTBAMGSGLJEUIKMEDXSDRRAQYGDHSJFICZXBFPENITQQPZKXTDZHLZYJBHEQVUKFAXKGGODFQVPVMUEQFXQGWBXDDDKRQXBKBPYRVNYWYGTVIRQZGYVZGBNIRNCULNSIKINSFUXUWSBI");
    msg.links = 2127884622U;

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
    msg.setTimeStamp(0.977514944299);
    msg.setSource(3829U);
    msg.setSourceEntity(60U);
    msg.setDestination(22005U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("NSCETZERTI");
    msg.links = 1736632612U;

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
    msg.setTimeStamp(0.109373408294);
    msg.setSource(29667U);
    msg.setSourceEntity(164U);
    msg.setDestination(17500U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("QRBLKWPVOUGNMITNTPPHRDAIMXTCOBSJAMJQTIYKASGYQYYFWAFWOPEBVUBNRDYHNJGTXFIAIRLHSKMRALRYEDCLPIIJYWXJCUHUBVZMXGMIZDIQWPLDJCZWLJXSMCKFRFYVTOTBCVZNTOFDFLXEHGBZKSOJBKOKMAUCZEVWOEDXDXFNQOAKTVSUYJQERYVLHPK");
    msg.links = 1918602615U;

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
    msg.setTimeStamp(0.639814233437);
    msg.setSource(49358U);
    msg.setSourceEntity(55U);
    msg.setDestination(40708U);
    msg.setDestinationEntity(126U);
    msg.groupname.assign("OURGCYAUEAWPWLQAVEIYRYKNTOGYSCRPTXBQQZQTGDHNBRHHTSPKNCYKYROEZVJICLEEMOYUVZFRTAIKWPUWBFCFDXSA");
    msg.action = 124U;
    msg.grouplist.assign("RMLXEGLNPUXKJCQCIQQHV");

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
    msg.setTimeStamp(0.226752040216);
    msg.setSource(30366U);
    msg.setSourceEntity(79U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("TCVLNRIUBOELWNDDQQBBOJBIMEUAYKHJPJXGHNZSUTDQEYOVOPTVXEFRPHHCYLKKRXKEWZQQWPAGSWEZFCCMTXXKVLNSRTCATZGGQBEQLVOVCAGMYEHROHWFSFYSSNWDGLTPJDWMRUAHVYPGHKVFTIAIBWZBIYCUNULQOZZMKXSXQWFXOTGAHAPULJDIUQFVFDBPIJGC");
    msg.action = 3U;
    msg.grouplist.assign("GJLZBLMCMYQSJRJPFEHIEBSFWRARTTIEQPIWRRVBZCYBBDXPKNMLUIPVCDYNXAOOFUYFAQLUBSNYXMWJMIUVTOIAVEXNGMDHYXTFZLDAJNKRHCQDJFOKQGNDXHUQACTCLFOJGIDWLPCTFKXEEIGSOYSMUVHIVTZPZGUBHUNZZDQELWVFWQIQYKTHKJTFNUZGAZAQBPHCVKSLMRCPCWVYYOSAOXEMKEZRGNKPSWJPVJKOX");

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
    msg.setTimeStamp(0.433875512955);
    msg.setSource(57093U);
    msg.setSourceEntity(226U);
    msg.setDestination(59511U);
    msg.setDestinationEntity(134U);
    msg.groupname.assign("TGHFCLXEWBWIDKKNAOWTZOEXTNDYOZMCUZLLGULECTITOGHENXCYPDPLGMMEJVYGDXPARWWAIZBVYDUKTFJHVJYZYSZJWBHCUFHHJMXSVFC");
    msg.action = 138U;
    msg.grouplist.assign("EXSHNAZSWKQUUUEZRSNXALDOOHXLDYBSBUDFZCFDVNTREQNMOVYRFQWXKVXPFNWGIPHUBHKLZEMSWK");

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
    msg.setTimeStamp(0.703916580093);
    msg.setSource(10847U);
    msg.setSourceEntity(109U);
    msg.setDestination(47967U);
    msg.setDestinationEntity(178U);
    msg.value = 0.832656801873;
    msg.sys_src = 4083U;

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
    msg.setTimeStamp(0.754994101134);
    msg.setSource(54062U);
    msg.setSourceEntity(126U);
    msg.setDestination(43U);
    msg.setDestinationEntity(156U);
    msg.value = 0.962710286003;
    msg.sys_src = 3656U;

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
    msg.setTimeStamp(0.18057828555);
    msg.setSource(58782U);
    msg.setSourceEntity(231U);
    msg.setDestination(60227U);
    msg.setDestinationEntity(55U);
    msg.value = 0.357503320292;
    msg.sys_src = 2676U;

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
    msg.setTimeStamp(0.65912693677);
    msg.setSource(43603U);
    msg.setSourceEntity(143U);
    msg.setDestination(61250U);
    msg.setDestinationEntity(175U);
    msg.value = 0.456799355739;
    msg.units = 227U;

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
    msg.setTimeStamp(0.390096143041);
    msg.setSource(9754U);
    msg.setSourceEntity(83U);
    msg.setDestination(42214U);
    msg.setDestinationEntity(146U);
    msg.value = 0.395647507279;
    msg.units = 252U;

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
    msg.setTimeStamp(0.828920333782);
    msg.setSource(40694U);
    msg.setSourceEntity(147U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(21U);
    msg.value = 0.156411899345;
    msg.units = 72U;

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
    msg.setTimeStamp(0.29936078176);
    msg.setSource(50601U);
    msg.setSourceEntity(127U);
    msg.setDestination(39516U);
    msg.setDestinationEntity(159U);
    msg.base_lat = 0.956192150112;
    msg.base_lon = 0.682621439424;
    msg.base_time = 0.0762773016957;

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
    msg.setTimeStamp(0.291064158031);
    msg.setSource(22728U);
    msg.setSourceEntity(122U);
    msg.setDestination(26847U);
    msg.setDestinationEntity(74U);
    msg.base_lat = 0.379627349828;
    msg.base_lon = 0.692101789601;
    msg.base_time = 0.761762760685;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 56746U;
    tmp_msg_0.priority = -73;
    tmp_msg_0.x = 6034;
    tmp_msg_0.y = -30620;
    tmp_msg_0.z = -15108;
    tmp_msg_0.t = -12333;
    IMC::RelativeHumidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.438667502897;
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
    msg.setTimeStamp(0.6843517133);
    msg.setSource(27021U);
    msg.setSourceEntity(66U);
    msg.setDestination(15943U);
    msg.setDestinationEntity(52U);
    msg.base_lat = 0.201843306878;
    msg.base_lon = 0.989703826639;
    msg.base_time = 0.543685255866;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 55128U;
    tmp_msg_0.priority = -16;
    tmp_msg_0.x = 8728;
    tmp_msg_0.y = -15438;
    tmp_msg_0.z = -11298;
    tmp_msg_0.t = -23612;
    IMC::EulerAnglesDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.895846926983;
    tmp_tmp_msg_0_0.x = 0.412859683686;
    tmp_tmp_msg_0_0.y = 0.336465644377;
    tmp_tmp_msg_0_0.z = 0.174955871471;
    tmp_tmp_msg_0_0.timestep = 0.631346579566;
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
    msg.setTimeStamp(0.358526010632);
    msg.setSource(21134U);
    msg.setSourceEntity(96U);
    msg.setDestination(5422U);
    msg.setDestinationEntity(76U);
    msg.base_lat = 0.101371692908;
    msg.base_lon = 0.752075023054;
    msg.base_time = 0.728428684884;
    const char tmp_msg_0[] = {119, -88, -66, -111, -120, -65, 75, 42, 29, -53, -1, 10, -110, -76, -37, -28, 122, 28, -91, 10, 103, 124, -24, 119, -17, 114, 44, -70, -70, 121, 43, 95, -64, -5, 93, 121, 96, 98, 2, -104, -70, -6, 115, -75, -65, 38, 51, -81, -92, 56, -24, 117, 121, -114, 46, -15, 108, -36, 31, 81, -124, 82, 39, 126, 83, -11, 69, 58, -116, 28, 1, -104, 4, -122, 44, 88, 64, 68, 52, -116, 36, -23, 67, -31, 11, 63, -99, 69, -21, 49, 85, 20, -118, 93, 10, 29, -10, -113, -1, 123, -64, -63, 31, 64, 95, -59, -46, 120, -55, 42, 116, -36, 41, 80, -103, 65, 28, -56, -25, -119, 21, -120, -30, 38, -123, 59, 4, -49, -88, 46, 119, -116, 75, -67, 12, -124, 69, 23, -121, -46, -116, 102, -41, -101, -6, 41, -23, 16, -8, 42, 29, 40, -3, -123, 41, -50, 70, -44, 46, 20, 117, -51, -49, 55, 101, 41, -31, -11, -27, -94, 69, 35, 91, -68, -10, -7, 2, 56, 4, -64, 83, -16, 41, 38, -128, -29, -28, -111, -54, 118, 97, 111, 63, -125, -26, 87, -44, -61, -29, 121, -64, 67, -50, 47, 8, -20, 6, -71, -59, -1, -25, 108, -76, -56, 124};
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
    msg.setTimeStamp(0.497800509904);
    msg.setSource(26787U);
    msg.setSourceEntity(178U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(84U);
    msg.base_lat = 0.681701417596;
    msg.base_lon = 0.234184459989;
    msg.base_time = 0.112346555362;
    const char tmp_msg_0[] = {-112, -67, -122, -4, -110, -1, -112, -22, -71, 24, 57, 17, 34, -83, 73, 66, -35, -66, -33, -79};
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
    msg.setTimeStamp(0.674904907081);
    msg.setSource(8066U);
    msg.setSourceEntity(67U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(84U);
    msg.base_lat = 0.66203527681;
    msg.base_lon = 0.839210430029;
    msg.base_time = 0.752317178504;
    const char tmp_msg_0[] = {-14, 120, 67, -61, -6, -36, 56, 34, -93, 49, -17, -73, 59, 81, 15, -60, -113, 102, 23, -54, -116, -117, 17, 104, 4, -82, -126, 46, 5, 50, -43, -89, 111, -28, 51, 112, -28, -59, -113, 113, 13, 56, 15, 2, -53, 58, 74, 10};
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
    msg.setTimeStamp(0.896965569074);
    msg.setSource(28776U);
    msg.setSourceEntity(244U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(221U);
    msg.sys_id = 56076U;
    msg.priority = 31;
    msg.x = -2666;
    msg.y = 8953;
    msg.z = 8392;
    msg.t = 7035;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.941756678361;
    tmp_msg_0.converg = 0.482631621284;
    tmp_msg_0.turbulence = 0.549668301034;
    tmp_msg_0.possimmon = 51U;
    tmp_msg_0.commmon = 52U;
    tmp_msg_0.convergmon = 50U;
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
    msg.setTimeStamp(0.500509185422);
    msg.setSource(33728U);
    msg.setSourceEntity(124U);
    msg.setDestination(20796U);
    msg.setDestinationEntity(116U);
    msg.sys_id = 1837U;
    msg.priority = -15;
    msg.x = -11462;
    msg.y = 11289;
    msg.z = 16078;
    msg.t = -11952;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GFUAUZBHPSBCPPKSYTKFAIZPONTZXYOCEMUJKJDONCMWQEEKHNBUQBLPESKGALVMHCXTWOGRIHKTPFRDVEXBWBRYGXBWHFDHKUIAKYTDUTIVIAXNOWJZNGFSQXNRZETRAKEVJLVLTZQHVRFQJYIOCHWEYWJXVNOUYRLL");
    tmp_msg_0.lat = 0.287221215037;
    tmp_msg_0.lon = 0.39612512545;
    tmp_msg_0.depth = 0.15111984572;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 199U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.98428329833);
    msg.setSource(44362U);
    msg.setSourceEntity(168U);
    msg.setDestination(25711U);
    msg.setDestinationEntity(207U);
    msg.sys_id = 9517U;
    msg.priority = -26;
    msg.x = -31785;
    msg.y = 9823;
    msg.z = 13942;
    msg.t = -3483;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 203U;
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
    msg.setTimeStamp(0.515819315513);
    msg.setSource(3542U);
    msg.setSourceEntity(230U);
    msg.setDestination(15537U);
    msg.setDestinationEntity(14U);
    msg.req_id = 3520U;
    msg.type = 19U;
    msg.max_size = 22044U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.385964197623;
    tmp_msg_0.base_lon = 0.521645233958;
    tmp_msg_0.base_time = 0.715348687902;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 33666U;
    tmp_tmp_msg_0_0.priority = -104;
    tmp_tmp_msg_0_0.x = 21087;
    tmp_tmp_msg_0_0.y = -27412;
    tmp_tmp_msg_0_0.z = 5077;
    tmp_tmp_msg_0_0.t = -14931;
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.845912014113;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.348844255307;
    tmp_tmp_tmp_msg_0_0_0.z = 0.475814748788;
    tmp_tmp_tmp_msg_0_0_0.z_units = 163U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.430164217742;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 252U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.741077713324;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HWXDLJQNADCSBKCNBWNFBQOFIGOYZUWSHCHKQMZIZVOJKFPYHRZALIZCBZGVOQJRXPVTCYYUKEAKWIVUWDXTHBXIGEMXOALGHCKLAAFTJNDGBJKJMDVSYCXWSGLSWMTSMUVSZLPRMDPOEKYUEAAFNCPERMIDLMSPLOHGEFHWZHJAJZGDPUBBTORFSELQXIVVXRPVBXYQJQETRKNITBROQGMTIKHUNUUQNOXCDERMZGYYULPTSEWIYVRFPDF");
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
    msg.setTimeStamp(0.156082289288);
    msg.setSource(40334U);
    msg.setSourceEntity(253U);
    msg.setDestination(27762U);
    msg.setDestinationEntity(179U);
    msg.req_id = 28212U;
    msg.type = 10U;
    msg.max_size = 57338U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0654908083987;
    tmp_msg_0.base_lon = 0.346373458183;
    tmp_msg_0.base_time = 0.692440515839;
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
    msg.setTimeStamp(0.335710166101);
    msg.setSource(22946U);
    msg.setSourceEntity(67U);
    msg.setDestination(15982U);
    msg.setDestinationEntity(35U);
    msg.req_id = 51799U;
    msg.type = 27U;
    msg.max_size = 13836U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0391142251694;
    tmp_msg_0.base_lon = 0.200935733045;
    tmp_msg_0.base_time = 0.0673359892093;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 18842U;
    tmp_tmp_msg_0_0.priority = -9;
    tmp_tmp_msg_0_0.x = 32326;
    tmp_tmp_msg_0_0.y = -19884;
    tmp_tmp_msg_0_0.z = -17261;
    tmp_tmp_msg_0_0.t = -19662;
    IMC::UsblPosition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target = 56690U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.994501673714;
    tmp_tmp_tmp_msg_0_0_0.y = 0.797771400839;
    tmp_tmp_tmp_msg_0_0_0.z = 0.378014257445;
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
    msg.setTimeStamp(0.170082547466);
    msg.setSource(41874U);
    msg.setSourceEntity(62U);
    msg.setDestination(23498U);
    msg.setDestinationEntity(91U);
    msg.original_source = 51371U;
    msg.destination = 22546U;
    msg.timeout = 0.029535375677;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.934867755287;
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
    msg.setTimeStamp(0.0388623475244);
    msg.setSource(36101U);
    msg.setSourceEntity(168U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(105U);
    msg.original_source = 35522U;
    msg.destination = 61533U;
    msg.timeout = 0.606888046064;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 153U;
    tmp_msg_0.quality = 84U;
    tmp_msg_0.reps = 240U;
    tmp_msg_0.tsize = 173U;
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
    msg.setTimeStamp(0.305468139543);
    msg.setSource(13108U);
    msg.setSourceEntity(88U);
    msg.setDestination(2759U);
    msg.setDestinationEntity(196U);
    msg.original_source = 18634U;
    msg.destination = 26002U;
    msg.timeout = 0.809674746214;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 49369U;
    tmp_msg_0.destination.assign("XYLKVQDOFPRZEUNHRJMPTCBHBUUHZRWGAIBYFZPNRETOISEOTRHRHQFFZSSJCBUWVOEWNCHFTQQFEAVISDWMCXOXTCWPHOYHJEVJNONYVRFMIXJAGLW");
    tmp_msg_0.timeout = 0.165525586427;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 23752U;
    tmp_tmp_msg_0_0.lat = 0.0435943822441;
    tmp_tmp_msg_0_0.lon = 0.918903992118;
    tmp_tmp_msg_0_0.z = 0.0378029990276;
    tmp_tmp_msg_0_0.z_units = 85U;
    tmp_tmp_msg_0_0.speed = 0.461789896517;
    tmp_tmp_msg_0_0.speed_units = 25U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.642370560499;
    tmp_tmp_tmp_msg_0_0_0.y = 0.0407044501783;
    tmp_tmp_tmp_msg_0_0_0.z = 0.796150672273;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("HQHCTZWAWADMOFJZTITQENDXXKHNNWFIILDYADEWXZMOMERHDRGSKFSSRCPLIKQEIKZLNYSBYMJUCFPCSNCIZJRICVHJJQULVVWVOVBHTVHXPSSEYQTMUBEDWEJWGYLURABBJJANWCJMUNUGOCRFKBNLIRYIQRGMCAPABSZNQMWGMARQAZVAOLFVYOZXFTFNMDGPXLHFSGVJXHEXGKYGUCUOPZEYIULTBOUXGPBEDPWQPSQYZHVBOTK");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.789369869524);
    msg.setSource(29280U);
    msg.setSourceEntity(213U);
    msg.setDestination(65406U);
    msg.setDestinationEntity(251U);
    msg.type = 216U;
    msg.comm_interface = 62257U;
    msg.model = 20105U;
    msg.list.assign("IJQIOZFRDRPXVFJKJUYNALNRNGDHSJSVUSFQMSYBNXVCFSEPTYKQUWUQLPZHHIQBFKOYWKUEQGKZINMWZITOPHVRFKCJALWCLYTTDDEUMXXOSVNLAYLSSUBWEJAGOBHKMAUWVWTCMKOVEBHGPQXYPWTNGXUXMBZPOJUQFRFZMOSVBEJZDVRQMHVDIK");

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
    msg.setTimeStamp(0.628782590895);
    msg.setSource(29968U);
    msg.setSourceEntity(92U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(196U);
    msg.type = 204U;
    msg.comm_interface = 7020U;
    msg.model = 26834U;
    msg.list.assign("WFTQPCFONQTWQZGJHRNAYANDCODJIOKHFUXMMPQSOTDOOYBS");

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
    msg.setTimeStamp(0.78077693939);
    msg.setSource(5886U);
    msg.setSourceEntity(64U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(168U);
    msg.type = 242U;
    msg.comm_interface = 4848U;
    msg.model = 25462U;
    msg.list.assign("ZOILPWXXSRILCKKQJPRPRTMFWNDECUBVWFUTROQNQAYRBXDVZGEZCQIHNGKSGSVPQLOSCOHGMQTMEUGASLWMRGMQHWBABVYJKYRYHLUGYEAQTLOOAOUSYXDPWDXCNIVMPBJFQSLHVBZHUYPCXJBOFIFIDPAKWIODCAFMFATGLZNZZEG");

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
    msg.setTimeStamp(0.120436352765);
    msg.setSource(59192U);
    msg.setSourceEntity(222U);
    msg.setDestination(8282U);
    msg.setDestinationEntity(11U);
    msg.type = 152U;
    msg.req_id = 3835229092U;
    msg.ttl = 50153U;
    msg.code = 85U;
    msg.destination.assign("ROXUPZLCJEMPRJDBDSIFZAHKXXSMIQRLEVLCQQAREEMRGZAGZXKHERYTTDNMVQAUPGGFWWWORIPVCSQTTJFDGXYCMRPYSHZNYVLNGZCSICOAWSNRVJIIDFBEXAMQTBWKKSLGJYPSNALFKUURQJLHBTBVYCPYYFJLUMNLIEJUNNBFOAIOJVXOHSPGHHBBDWAIEOOKDDZIMUFQHBNWTQJTKEUTXOPYYXVVQUASK");
    msg.source.assign("XRNNCJXFDTINSYHOGBMJHUABAIXFZEXBOHZYLLEGEZTWVJPEYSXJKVVJPSSSWRACJQDQZFPMPHFOTSXUPVMMLCNGDTNARBXGRLOCXDULNDJQFOZUUIGHVYFWDCKUDEZBQMVKZKTESSFGYBPYMJEBUKAIPZKNXOKOLIOAYQBWEINGKALCRIIBSKJFKAAEGYRFQDWQCVZXQPVCHAHDLNMPGJPDTWQLRWTMTHTUUNERWWYHRCTCVOBQIVZG");
    msg.acknowledge = 69U;
    msg.status = 66U;
    const char tmp_msg_0[] = {-55, -117, 31, -105, 105, 78, 68, -106, 102, 36, -26, 54, 96, 62, 48, -31, -80, 110, -6, 111, -90, 101, 60, -65, -2, -125, -123, -126, -54, -6, -5, -128, 19, -87, 122, 106, 99, -39, 25, 12, 72, 13, 105, -8, -68, 125, -74, -41, 123, 34, -43, 31, -28, -41, 50, -32, -119, 48, -94, 29, 24, 12, -124, -119, 64, -123, -77, -37, 74, -84, -38, -9, 111, 31, 70, -78, -127, -50, 100, 111, -1, -68, 60, -25, 23, 49, -18, 80, 121, -101, 1, -77, -61, -73, 26, -109, 50, 13, 10, 85, -124, 64, 118, 7, 102, 124, -85, -23, -63, 27, 35, -128, -70, 98, 4, -15, 49, -82, -49, -42, -22, -108, 38, 107, -80, -72, 107, -80, 6, 18, -114, -26, -30, 37, 31, -57, -44, -88, 94, -127, -94, -123, -47, 44, -65, 36, 71, -96, -105, -71, -43, -34, -21, 118, 123, -35, -92, 98, 41, 122, 76};
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
    msg.setTimeStamp(0.925190423106);
    msg.setSource(13283U);
    msg.setSourceEntity(25U);
    msg.setDestination(55554U);
    msg.setDestinationEntity(4U);
    msg.type = 29U;
    msg.req_id = 973167921U;
    msg.ttl = 32052U;
    msg.code = 119U;
    msg.destination.assign("QCQRTCPVKNADPCUXZXLKXLLKVGEKLZPLPROARMKVXTZHOFQFPAENUHCZUKXFWYTLCBZJDTULVEXIRAMEIRHPYKVNOHGWTFAVWXGMRZIMNBNMKHCUVWWGISYIWQGMMORYJAWPRDSLKXTUHCFUYQPSSQNBHSFTBZDBDHTCGOKPFUN");
    msg.source.assign("IQBTFKDUENGSTXFTVDOKCBEDZNROVEYJBEIWGRXPGEAYPFWYTDOJUPFEPYTMQVLUHBIMINVJHZFGQSDRHWBIYFWNOFWMCWCVCLRQTQXSXKODOWCHIAWJJEPHVZGBMMZOPCGQXUAPAVBQUWSSHXFEGXLVRWLQRZ");
    msg.acknowledge = 224U;
    msg.status = 61U;
    const char tmp_msg_0[] = {-36, 121, 0, 25, -18, 91, -52, 14, 17, 88, -19, 41, 67, -7, -100, -65, -42, -87, 9, 56, -110, -12, 91, 85, 39, 24, 92, -94, -64, 84, -89, -80, -74, 37, 124, -22, -110, -57, -7, -107, 34, -102, 73, -108, -74, -33, -128, 70, 91, -2, 86, 103, -20, 2, 115, -68, 109, 9, -34, -11, 61, -128, 40, -63, -68, -56, 83, 117, 46, -33, -30, -127, 97, 94, -46, -33, -71, 34, -7, -113, 103, -100};
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
    msg.setTimeStamp(0.534121317272);
    msg.setSource(42346U);
    msg.setSourceEntity(175U);
    msg.setDestination(4918U);
    msg.setDestinationEntity(52U);
    msg.type = 111U;
    msg.req_id = 3012376108U;
    msg.ttl = 14142U;
    msg.code = 90U;
    msg.destination.assign("OUKSOISXPVCZIAWXZEFAIHOHDMEVWTIZYBTUPSNXKGRWBPFKKUGJRSNBVOBWQHTXZGDFBZWTBBLTMFXLGYFTQQKWCEDYCYVYSDRCVEHSIPEXRENPLNRPKHKGXONKTEZPFIGAOHCMMAJUQQQNDFMQRSMHJTQIJJY");
    msg.source.assign("AREPETSZNWDAIKHQXRUWNCFQRSWTBGGYCQTCTEIYSYFFVKZOPJDHGCPWZBDAARHUEDXLJBRZRBDYOHPVIKPGRXDYKUTCGMGORDNBWULLVIDYIEMYCOYXWIBKAULTBQMNUXJOWVEHZLZEEUXJQKSUSHSPOQIVEXNLBAFHFNSCRNMSIGHZMCTNDYZYUSOGLFQAASPBVVFTIFJNBCKZCKLLEI");
    msg.acknowledge = 252U;
    msg.status = 205U;
    const char tmp_msg_0[] = {28, 98, 5, 109, 95, 80, 4, -84, 122, 39, 9, 122, 48, 45, -40, 12, -128, 38, -65, 106, -90, -86, 117, 71, 116, -32, -29, -8, -6, -32, -10, 14, 47, 125, -24, 79, 70, -85, -45, 63, -32, 28, -12, -71, -46, -104, -45, 101, -85, -127, 59, -43, 61, 86, -31, 23, 19, -71, 66, -107, 114, 52, -13, -56, -60, 48, -103, 125, 116, 32, -55, 23, -62, -7, -105, -108, -18, -102, -25, 70, 61, 76, -12, 41, -4, 0, 3, -25, -51, -84, -81, -1, -82, -32, -15, 8, -95, 37, -81, 101, 23, 43, -94, -57, -117, -77, -56, 51, -83, 49, -119, 83, -97, -31, 33, 49, 46, -45, 5, 114, -44, 96, 115, 34, -54, -43, 71, 52, -44, -73, -86, 7, -18, -121, -127, 125, 118, -20, 84, -44, 56, 81, -5, -61, 110, 91, -41, -103, -82, -11, -19, 126, 46, -8, 93, 10, -5, -128, -83, -70, -119, -36, 9, 83, -8, -12, 19, 24, -108, -19, 61, -45, -19, 98, -84, 4, 125, 54, 24, 68, -110, 49, -8, 15, -49, -51, 66, -6, -109, 21, 20, -110, 10, -36, -107, -59, 71, -78, 120, 21, 44, -111, 103, 16, 54, -52, -79, -60, -115, 34, -5, 40, -12};
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
    msg.setTimeStamp(0.403927734228);
    msg.setSource(3317U);
    msg.setSourceEntity(218U);
    msg.setDestination(30442U);
    msg.setDestinationEntity(56U);
    msg.id = 219U;
    msg.range = 0.0284049668712;

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
    msg.setTimeStamp(0.00555141061853);
    msg.setSource(15624U);
    msg.setSourceEntity(66U);
    msg.setDestination(64144U);
    msg.setDestinationEntity(132U);
    msg.id = 235U;
    msg.range = 0.0121985420696;

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
    msg.setTimeStamp(0.78227818415);
    msg.setSource(19275U);
    msg.setSourceEntity(153U);
    msg.setDestination(61234U);
    msg.setDestinationEntity(240U);
    msg.id = 48U;
    msg.range = 0.71902842012;

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
    msg.setTimeStamp(0.568115740165);
    msg.setSource(52335U);
    msg.setSourceEntity(20U);
    msg.setDestination(60311U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("VCERYJWSWRGARLAIHJMNSRTLUUTMQJRPMJQRIQXMKPDOXVKDINAHFWZIKDSIEDYZDBHSIVOCDQNWOTEGHUKRFZUOYZBXKCSGVRBDKFTWCQHJOQCFZPXKNVSFJPGZNRGZSFHMNWVWZAGWCOYXXEMFLXZPSDBKXHJCYMGFYFNEQZSBIYVUHOHTVTUVAOBELGYBOCPTNEUJPIUMNMYEJLGLOJTCMQL");
    msg.lat = 0.724104908075;
    msg.lon = 0.727225490547;
    msg.depth = 0.634065028607;
    msg.query_channel = 218U;
    msg.reply_channel = 118U;
    msg.transponder_delay = 180U;

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
    msg.setTimeStamp(0.488524409133);
    msg.setSource(58021U);
    msg.setSourceEntity(191U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(220U);
    msg.beacon.assign("FPMHJHEVFCLSQGRZH");
    msg.lat = 0.84311094137;
    msg.lon = 0.158158580626;
    msg.depth = 0.920012473438;
    msg.query_channel = 163U;
    msg.reply_channel = 199U;
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
    msg.setTimeStamp(0.930589820725);
    msg.setSource(38044U);
    msg.setSourceEntity(188U);
    msg.setDestination(56364U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("QVZVQFRGENOJHJCL");
    msg.lat = 0.0134277845406;
    msg.lon = 0.689602663146;
    msg.depth = 0.630293928491;
    msg.query_channel = 235U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 75U;

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
    msg.setTimeStamp(0.339569780651);
    msg.setSource(38663U);
    msg.setSourceEntity(49U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(8U);
    msg.op = 134U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NNYQTRJNEMAWMUIWSJFGLTRRTDKATVZWICBAMWJQBQMDVJUXOIAAFUTKVACIDXSZHIGQBHWLUHKYGJNFAZQSXXUPWFYELNEEPHVDYNMOUOEXRMXVHEPDLFNRRJLTWZBZDUOOPCRKQYWIMVZSXVBALWGSTHBBGCZGPOFDTYZFNGY");
    tmp_msg_0.lat = 0.557114107005;
    tmp_msg_0.lon = 0.85401643076;
    tmp_msg_0.depth = 0.681360099991;
    tmp_msg_0.query_channel = 205U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 115U;
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
    msg.setTimeStamp(0.412137781819);
    msg.setSource(682U);
    msg.setSourceEntity(123U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(203U);
    msg.op = 92U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OYJKEKYQTIMPLJYEOBGRGSCOSFZKBFBWTSJIAQKEINUEBPXANFCPLETZWGCQTGLVTRRQLFIWOOBGYMALLOVXMKXVVHDHFWYMFNQRVCZMGPLSTBJJKDJHCHVKBSNUHZPPYIHATUXUDSF");
    tmp_msg_0.lat = 0.69943239248;
    tmp_msg_0.lon = 0.0466557597142;
    tmp_msg_0.depth = 0.701569705424;
    tmp_msg_0.query_channel = 85U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 210U;
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
    msg.setTimeStamp(0.502512204419);
    msg.setSource(34991U);
    msg.setSourceEntity(73U);
    msg.setDestination(22293U);
    msg.setDestinationEntity(3U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.572714890252);
    msg.setSource(15342U);
    msg.setSourceEntity(118U);
    msg.setDestination(22977U);
    msg.setDestinationEntity(138U);
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.619429572297);
    msg.setSource(16635U);
    msg.setSourceEntity(123U);
    msg.setDestination(27845U);
    msg.setDestinationEntity(252U);
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 98U;
    tmp_msg_0.op = 14U;
    tmp_msg_0.possimerr = 0.506422931499;
    tmp_msg_0.converg = 0.154794126257;
    tmp_msg_0.turbulence = 0.154841772092;
    tmp_msg_0.possimmon = 117U;
    tmp_msg_0.commmon = 115U;
    tmp_msg_0.convergmon = 196U;
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
    msg.setTimeStamp(0.143137560888);
    msg.setSource(28510U);
    msg.setSourceEntity(228U);
    msg.setDestination(8769U);
    msg.setDestinationEntity(67U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 156U;
    tmp_msg_0.quality = 68U;
    tmp_msg_0.reps = 36U;
    tmp_msg_0.tsize = 197U;
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
    msg.setTimeStamp(0.0960145118859);
    msg.setSource(3580U);
    msg.setSourceEntity(138U);
    msg.setDestination(60998U);
    msg.setDestinationEntity(252U);
    msg.op = 216U;
    msg.system.assign("XKOZPPVVYMIWXGMINKZVZCMQYDRDHFUVJTAVEOPUDJAQVWVDSNLUWZYVPDXMLEMUIUQPQPHLKMJAELCQYZBFRUMBDWTAMAUJVNXKCRTJUQRKKCIHWCNSIIHOFDSISYBMOBTN");
    msg.range = 0.181484544486;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("HPSEEVVIAOHKIWWIYTTMFBYGWRVRAENXCTAWEPJEXMDSBDUCCCNFNGQUPGMDPNXSDGRUKXJPDJWBQDUSAVGLIVKTOCGAYVMLAOXBNLBFLCJJNZRCOJNFHGWRDMFRMJH");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KAQYMZGKHRAYNZIKLDROLPIBKELHYWXFRWKTBIWDGGRNGTSUDTLPBPDHRWUIKVFAVQJXNDONBLPSMPTADEKNFFWNPICLMKFSQXOBPLTGAAMJPVVZJXWYCXXNBKVHIXNJOZKUYNFAWBQTDCBJTEHEYSFVYGOJISYLVGCYJAVZIJQZBMEHOLCAQMPHPDVGHFTOUQCYWXROZVEBMCQGUSSM");
    tmp_tmp_msg_0_0.value.assign("NQGNAQTFCJZMRCABEZFVOCOXNFAXGDQXKCGLFOFAXKWXDGGDSTWUSYVXFJPXHWYZSGDOHDETSVLYICATYLDEZLVVBEMRKKQRUPOHVELXBQFCKCVLFPIBARIFSIUQAKNZHPYVPK");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.277004844985);
    msg.setSource(37188U);
    msg.setSourceEntity(138U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(83U);
    msg.op = 33U;
    msg.system.assign("BRFRRZMMSYTUVJGGDAPFKCEXCUBUOADSVXBMSSYQHIAHGBVIWJKDAKUKLYFOAJBUTENQFEYBGNOCHBPEWUIEDHOLLROPWKVADWTWMLVZUPJJVUACDXHOFUJPGEQMUCNWXTQAQECEDADYLTPVSQVZKYJSLIJCNKVDRTBRPNIFJHLPOBZGIKAEGZMRSHZCOXCZIWXNDBL");
    msg.range = 0.229377999794;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 124U;
    tmp_msg_0.tas2acc_pgain = 0.924075682379;
    tmp_msg_0.bank2p_pgain = 0.561152756017;
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
    msg.setTimeStamp(0.195472967416);
    msg.setSource(40434U);
    msg.setSourceEntity(175U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(121U);
    msg.op = 146U;
    msg.system.assign("AKFNSSPRPJRLICBIETKVYPTZWIHFQDFUI");
    msg.range = 0.355062174721;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 236U;
    const char tmp_tmp_msg_0_0[] = {-15, -40, 9, -114, -89, -35, -27, -4, -12, -122, -67, -101, -39, -102, -56, -53, -118, -24, 54, 68, 121, -115, 33, -62, -40, -37, -94, -79, 105, 54, 54, -5, 77, 78, -118, 74, -100, 32, 72, -11, 123, -81, 44, 120, 113, 90, 64, -35, 31, 106, -9, 11, -65, 100, -5, -80, 98, 38, -57, -24, -110, 109, 14, -22, -61, -6, -110, -86, -18, 45, 99, -58, -14, -124, 35, 22, 33, -28, 114, 64, 59, -91, -8, 123, 100, -93, 50, -43, 118, 54, -27, -26, 43, 72, 97, -7, 69, 8, 33, 50, -28, -125, 63, -122, -84, -34, -93, 83, -87, -70, 116, -48, 54, -112, 118, 38, -57, 36, -52, 101, 96, -36, -18, 59, 79, -106, 123, 109, -121, -109, -27, 115, -115, -26, -56, -119, -87, -111, -63, -119, -108, 13, 109, 38, -95, -66, 6, 121, -87, -12, -82, -128, 98, -75, -124, 114, 121, 50, -18, -43, -40, 32, -66, 115, -80, 27, 7, -78, 107, -82, -84, -34, -80, 41, -35, -9, 0, 78, -39, 109, -71, -4, 50, 61, 53, 37, -39, 47, 112, -114, -118, -125, 46, -122, -83, -125, -28, 27, 74, 48, -69, 111, -32, 54};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0464820108131);
    msg.setSource(58330U);
    msg.setSourceEntity(121U);
    msg.setDestination(40496U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.833445401354);
    msg.setSource(16325U);
    msg.setSourceEntity(187U);
    msg.setDestination(22483U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.442836474829);
    msg.setSource(7017U);
    msg.setSourceEntity(41U);
    msg.setDestination(27621U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.455700087569);
    msg.setSource(44112U);
    msg.setSourceEntity(83U);
    msg.setDestination(24628U);
    msg.setDestinationEntity(68U);
    msg.list.assign("HSAOMCAMZETUQTWLNEWRRRUFAUNXJEVSPFBDDAMRPUYFIXFBLBGUSQRJHLBIDCWFICWHNFMWHHBGXVIHXOLKMKKLQGOFIIPSIRXLJGEVQXPGYZZQEZJNUTL");

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
    msg.setTimeStamp(0.26962248648);
    msg.setSource(5185U);
    msg.setSourceEntity(250U);
    msg.setDestination(45113U);
    msg.setDestinationEntity(241U);
    msg.list.assign("KMVCOYVKAJZPPDYIYTYIRQEHQVGQLAPAEDZVIKRUSWKJLWORVEUSTSBONNBNWSWDJJEDPFHNUNDMBVWJKXLWSLZDRWKKTBGRWNMPBELFOXMDVCXAZWQIFEUKAHQKTPPGUYSFQYXSMMEQAHUPZNCJRLORFTNVJFXEHHIFLISYHTPGROIMPCOCHVXVILXBLTQZBZRMCZCDFGSXSAAJIFBOGCNGTGNQ");

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
    msg.setTimeStamp(0.746256082087);
    msg.setSource(49633U);
    msg.setSourceEntity(241U);
    msg.setDestination(57226U);
    msg.setDestinationEntity(20U);
    msg.list.assign("YMQYSFOJHJSWLPJRNSVFHILTOGHZRWMGLYIGXFSRFOMJVPVCSKNYDEELULJAILIIKBJEKQKFIAUAVSXXGMCNCBFMWGYQXAZRAPTIPUJHCTLWSTEYCZROSHFOKYQUOZUVCTWXZJEKDBVEBRLAPWZTEWYHSHUINBGJBQNTQEWEROPVYPGVHCMAXKDQDZGOXDTR");

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
    msg.setTimeStamp(0.836831334453);
    msg.setSource(48870U);
    msg.setSourceEntity(201U);
    msg.setDestination(14513U);
    msg.setDestinationEntity(173U);
    msg.peer.assign("HFLOBWYLEQQWHIYPICOVM");
    msg.rssi = 0.481476457128;
    msg.integrity = 49035U;

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
    msg.setTimeStamp(0.679918145078);
    msg.setSource(18543U);
    msg.setSourceEntity(48U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(245U);
    msg.peer.assign("TEYOGLCMXHREXIWDYBVBXSEMLPWAONPBYHQKZMUNUJGAKYVNILZNSJDJHVSNRVSIYXMOHPTHQPZGWWALQFQVLPICDQZHFEZPARDGVWYEFTNYJIMSBXBFKNBLEWZASXUHFGAXWHCRQCMAVWUCRDYLQJJCOKIRCOUMXKTODKTFOLNVAFIFB");
    msg.rssi = 0.838146990218;
    msg.integrity = 9088U;

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
    msg.setTimeStamp(0.520234311687);
    msg.setSource(46972U);
    msg.setSourceEntity(143U);
    msg.setDestination(985U);
    msg.setDestinationEntity(130U);
    msg.peer.assign("SWBZCIBITJGTWFRZGOIRUJXEZBJTTIPYADYENGCMGIURVXCVXPLHGVAFDJMRXJKIACGAQMKGKZLLETTDFNKDDXGHIODQXOKMNLSAWYQLPIFHQQSDUWLPKCZRACSHSLSKUUVMNTZRNVKNLYPICHDNBMUJWOOPYXPGVVBOLHUWOPSQSMZOKM");
    msg.rssi = 0.986121190007;
    msg.integrity = 53231U;

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
    msg.setTimeStamp(0.403904917254);
    msg.setSource(38761U);
    msg.setSourceEntity(149U);
    msg.setDestination(33499U);
    msg.setDestinationEntity(44U);
    msg.req_id = 59896U;
    msg.destination.assign("GRTMTROTYCVJBSKBPLUNRHAYXERNDOCGJDJVWXBKYNUHWDZOWJUWRJZUYQVEXRKTFPRVWEASUIHZPTHKGQDGGHTCOEBSHEYBNLFXEEROHCOFCPOLIIKZIKSGISAZSWMRPDCHNVLLMMDXTFQUKEGZMWKORAJNDEHQFXAQMUYOPAXCDQSGWIP");
    msg.timeout = 0.922637553935;
    msg.range = 0.872175667455;
    msg.type = 176U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 225U;
    tmp_msg_0.value = 92U;
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
    msg.setTimeStamp(0.613329700267);
    msg.setSource(19255U);
    msg.setSourceEntity(54U);
    msg.setDestination(47217U);
    msg.setDestinationEntity(36U);
    msg.req_id = 37548U;
    msg.destination.assign("IDNEABRZAYEGOEZFKQUIUPWPBRROQXRBVBHYFHTKYINANLQVYPDFWDADASZDKTUSWWLTWQG");
    msg.timeout = 0.908969200052;
    msg.range = 0.0893970660686;
    msg.type = 152U;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {109, 23, 106, 47, -117, 29, 72, 97, 1, -67, -48, -6, -28, -80, -101, 74, -101, -79, 104, 83, 40, -31, 57, -44, -98, 10, -113, 1, -55, -18, 15, -90, -74, 37, -63, 66, -20, -30, -13, -57, 44, -61, -105, 40, -103, -69, -114, -81, 65, -66, -91, 81, 32, 20, -52, -4, -73, -66, -69, 80, -56, 78, -12, 74, -47, -58, 50, -19, -33, 97, 81, -7, 54, -111, -121, -71, 56, -76, 117, -42, 121, 65, 39, -95, 98, 52, -51, 34, -34, 72, -60, 95, 106, -55, 58, 72, 3, 5, 90, -126, 50, -72, -123, -30, 92, 50, -36, -98, -82, 49, -23, 73, 91, 20, 121, 87, -85, -41, -63, 11, 81, -120, -24, 33, -5, 59, 84, -94, 62, -111, -32, 102, -14, 36, -47, -26, -34, 79, -26, -56, 86, 82, 125, -43, 102, 107, -95, 86, 46, -126, -123, 98, 118, -114, -126, 76, 23, -111, -95, 89, 76, -108, -85, -14, -44, 93, -9, 83, 54, 124, 95, 94, -62, -67, -20, 15, 0};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.759779642002);
    msg.setSource(42115U);
    msg.setSourceEntity(85U);
    msg.setDestination(37152U);
    msg.setDestinationEntity(53U);
    msg.req_id = 51516U;
    msg.destination.assign("GYMRRXBMWEOUTRUIYBQNAYMHQNNDZCYOEGEYXEVSJFJJKFTUJZBCGDZVLDHXHDMPAVBKYOWKHGNLDNVRSAJJBZWRILSSUQPCXIDUGDWWUCREXQQUQOTUGLWBFHVQACTVJPAEDZLNOOSKGEFHROZIQXTIESDWHPFXRYLNCADJWNTIVMZXZWABAZFKCTMCPMGVTBVFCFHJKKZPOMRTMSFSWKALOPBRHYMOGLXSQIPPEBNVI");
    msg.timeout = 0.416220374399;
    msg.range = 0.315421317222;
    msg.type = 171U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.992563510725;
    tmp_msg_0.x = 0.255525634672;
    tmp_msg_0.y = 0.649915813394;
    tmp_msg_0.z = 0.1410628358;
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
    msg.setTimeStamp(0.328450069056);
    msg.setSource(47461U);
    msg.setSourceEntity(52U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(66U);
    msg.req_id = 20009U;
    msg.type = 207U;
    msg.status = 234U;
    msg.info.assign("YXHXJPEKNNTNIOCYEKUANUITOALDOMWKEKNQQMLRVDORBLWHSFMNSWJBNEVGGZQJGFZZVJVKHATSPGGFRUHZPCSVCBUXYUHRGAHGWNEXDAICZBERYBIZRIDOQKPZGXPWGOLABNATTJQPQZMW");
    msg.range = 0.599696497846;

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
    msg.setTimeStamp(0.281620530277);
    msg.setSource(10258U);
    msg.setSourceEntity(16U);
    msg.setDestination(58415U);
    msg.setDestinationEntity(167U);
    msg.req_id = 27161U;
    msg.type = 128U;
    msg.status = 127U;
    msg.info.assign("IZJINHVKLRITATPFSUGYLOBZWKIMITBXQUJRPAGYPSOZNCXTPXUTPQECIMJBQHCFCKAZUYMIDQJLDKUSUSELOCHDOZWEVXLVDOCDGOVXKAGCRBMXLJHNDQHZQPDLKNIGGMZFFI");
    msg.range = 0.913131282193;

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
    msg.setTimeStamp(0.519077151742);
    msg.setSource(17247U);
    msg.setSourceEntity(236U);
    msg.setDestination(55308U);
    msg.setDestinationEntity(52U);
    msg.req_id = 63367U;
    msg.type = 9U;
    msg.status = 35U;
    msg.info.assign("SLIFETTVFLZBQUZWJCFOMVGWKMYOXPPLULBNXHSVVQORVEJDSWWIGRWUZUAIUADFCTMDQZNKYJJGOUEKMCHXGDIDHMTXDNQYCEFTFNACCTDHTSCNQLNGYITKHRBOMKIZFKOLJCSAVXPJSYIPZKLVUENJWJCXXKEUTZQKQXRFAUQGSWPVAPRBDICDGNMBPMOQZXQARFRABNGHOGWBJPEAYHBSREYLJLSGVUMPXKRWTYWYYHAENEIHBRFZ");
    msg.range = 0.594629506396;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.599051773918);
    msg.setSource(32043U);
    msg.setSourceEntity(122U);
    msg.setDestination(53670U);
    msg.setDestinationEntity(44U);
    msg.value = 18411;

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
    msg.setTimeStamp(0.900599615712);
    msg.setSource(12467U);
    msg.setSourceEntity(130U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(224U);
    msg.value = 2491;

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
    msg.setTimeStamp(0.436243525809);
    msg.setSource(59556U);
    msg.setSourceEntity(163U);
    msg.setDestination(280U);
    msg.setDestinationEntity(125U);
    msg.value = -20697;

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
    msg.setTimeStamp(0.508555688163);
    msg.setSource(56675U);
    msg.setSourceEntity(53U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(216U);
    msg.value = 0.0503829550615;

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
    msg.setTimeStamp(0.711368685961);
    msg.setSource(44373U);
    msg.setSourceEntity(185U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(64U);
    msg.value = 0.062978102687;

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
    msg.setTimeStamp(0.116341838906);
    msg.setSource(59225U);
    msg.setSourceEntity(39U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(66U);
    msg.value = 0.711763460753;

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
    msg.setTimeStamp(0.901238085519);
    msg.setSource(40602U);
    msg.setSourceEntity(247U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(73U);
    msg.value = 0.981109934876;

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
    msg.setTimeStamp(0.299937991716);
    msg.setSource(43040U);
    msg.setSourceEntity(211U);
    msg.setDestination(38655U);
    msg.setDestinationEntity(18U);
    msg.value = 0.893997299004;

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
    msg.setTimeStamp(0.305410443098);
    msg.setSource(655U);
    msg.setSourceEntity(248U);
    msg.setDestination(32412U);
    msg.setDestinationEntity(117U);
    msg.value = 0.73931243395;

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
    msg.setTimeStamp(0.471567451238);
    msg.setSource(25282U);
    msg.setSourceEntity(136U);
    msg.setDestination(29348U);
    msg.setDestinationEntity(119U);
    msg.validity = 21911U;
    msg.type = 47U;
    msg.utc_year = 38316U;
    msg.utc_month = 71U;
    msg.utc_day = 92U;
    msg.utc_time = 0.595677139623;
    msg.lat = 0.963196488998;
    msg.lon = 0.227634086081;
    msg.height = 0.656692187154;
    msg.satellites = 141U;
    msg.cog = 0.406002844941;
    msg.sog = 0.848234283702;
    msg.hdop = 0.355981119284;
    msg.vdop = 0.268284742821;
    msg.hacc = 0.421885021576;
    msg.vacc = 0.56786163844;

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
    msg.setTimeStamp(0.844397834865);
    msg.setSource(26037U);
    msg.setSourceEntity(96U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(20U);
    msg.validity = 831U;
    msg.type = 2U;
    msg.utc_year = 34157U;
    msg.utc_month = 30U;
    msg.utc_day = 162U;
    msg.utc_time = 0.393574955647;
    msg.lat = 0.787107271109;
    msg.lon = 0.16237374843;
    msg.height = 0.992290424702;
    msg.satellites = 231U;
    msg.cog = 0.375864536734;
    msg.sog = 0.889063325902;
    msg.hdop = 0.502377615593;
    msg.vdop = 0.690430176349;
    msg.hacc = 0.111787170896;
    msg.vacc = 0.998292855367;

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
    msg.setTimeStamp(0.61500691804);
    msg.setSource(34919U);
    msg.setSourceEntity(18U);
    msg.setDestination(43755U);
    msg.setDestinationEntity(49U);
    msg.validity = 1491U;
    msg.type = 122U;
    msg.utc_year = 9011U;
    msg.utc_month = 247U;
    msg.utc_day = 207U;
    msg.utc_time = 0.435150580821;
    msg.lat = 0.490061892982;
    msg.lon = 0.479190759439;
    msg.height = 0.175130802077;
    msg.satellites = 59U;
    msg.cog = 0.856348543743;
    msg.sog = 0.495934323425;
    msg.hdop = 0.044304177576;
    msg.vdop = 0.730629103703;
    msg.hacc = 0.301358549177;
    msg.vacc = 0.00254985006866;

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
    msg.setTimeStamp(0.265834844146);
    msg.setSource(29575U);
    msg.setSourceEntity(20U);
    msg.setDestination(38961U);
    msg.setDestinationEntity(82U);
    msg.time = 0.992876687416;
    msg.phi = 0.588956338059;
    msg.theta = 0.148182624588;
    msg.psi = 0.303612386833;
    msg.psi_magnetic = 0.768242996759;

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
    msg.setTimeStamp(0.402751344589);
    msg.setSource(6805U);
    msg.setSourceEntity(86U);
    msg.setDestination(20692U);
    msg.setDestinationEntity(74U);
    msg.time = 0.368411866154;
    msg.phi = 0.656353600595;
    msg.theta = 0.996860236515;
    msg.psi = 0.147420078526;
    msg.psi_magnetic = 0.352602606383;

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
    msg.setTimeStamp(0.0878847422426);
    msg.setSource(40081U);
    msg.setSourceEntity(13U);
    msg.setDestination(45386U);
    msg.setDestinationEntity(43U);
    msg.time = 0.164710508338;
    msg.phi = 0.0518800321217;
    msg.theta = 0.226412971616;
    msg.psi = 0.832960853394;
    msg.psi_magnetic = 0.931570979856;

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
    msg.setTimeStamp(0.0615005106426);
    msg.setSource(60568U);
    msg.setSourceEntity(230U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(153U);
    msg.time = 0.482183898046;
    msg.x = 0.0984541021688;
    msg.y = 0.935848598843;
    msg.z = 0.700664832851;
    msg.timestep = 0.241850043245;

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
    msg.setTimeStamp(0.856332086831);
    msg.setSource(16489U);
    msg.setSourceEntity(97U);
    msg.setDestination(11347U);
    msg.setDestinationEntity(60U);
    msg.time = 0.180940787755;
    msg.x = 0.132603416533;
    msg.y = 0.642730778907;
    msg.z = 0.494550085443;
    msg.timestep = 0.978676584382;

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
    msg.setTimeStamp(0.68490311439);
    msg.setSource(35202U);
    msg.setSourceEntity(98U);
    msg.setDestination(59680U);
    msg.setDestinationEntity(197U);
    msg.time = 0.57938221879;
    msg.x = 0.753471013379;
    msg.y = 0.902261650495;
    msg.z = 0.054841543083;
    msg.timestep = 0.798615416763;

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
    msg.setTimeStamp(0.815872819462);
    msg.setSource(62498U);
    msg.setSourceEntity(191U);
    msg.setDestination(32214U);
    msg.setDestinationEntity(181U);
    msg.time = 0.374489207382;
    msg.x = 0.0119366789102;
    msg.y = 0.857715903693;
    msg.z = 0.651529668305;

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
    msg.setTimeStamp(0.187186990992);
    msg.setSource(45133U);
    msg.setSourceEntity(116U);
    msg.setDestination(56303U);
    msg.setDestinationEntity(39U);
    msg.time = 0.538156140936;
    msg.x = 0.856560243993;
    msg.y = 0.781560297236;
    msg.z = 0.528797553217;

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
    msg.setTimeStamp(0.70265347119);
    msg.setSource(61568U);
    msg.setSourceEntity(4U);
    msg.setDestination(62565U);
    msg.setDestinationEntity(9U);
    msg.time = 0.189789765203;
    msg.x = 0.6672305814;
    msg.y = 0.8954208505;
    msg.z = 0.681848110804;

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
    msg.setTimeStamp(0.426321372768);
    msg.setSource(25836U);
    msg.setSourceEntity(237U);
    msg.setDestination(28716U);
    msg.setDestinationEntity(54U);
    msg.time = 0.325708056525;
    msg.x = 0.225855813766;
    msg.y = 0.819666479571;
    msg.z = 0.809925797252;

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
    msg.setTimeStamp(0.762399443587);
    msg.setSource(47576U);
    msg.setSourceEntity(71U);
    msg.setDestination(28963U);
    msg.setDestinationEntity(166U);
    msg.time = 0.146429611856;
    msg.x = 0.754447011426;
    msg.y = 0.64193139723;
    msg.z = 0.231782239205;

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
    msg.setTimeStamp(0.0956302173385);
    msg.setSource(86U);
    msg.setSourceEntity(125U);
    msg.setDestination(28055U);
    msg.setDestinationEntity(221U);
    msg.time = 0.0316324640738;
    msg.x = 0.374511571352;
    msg.y = 0.205183954409;
    msg.z = 0.500447865593;

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
    msg.setTimeStamp(0.241222741992);
    msg.setSource(25915U);
    msg.setSourceEntity(24U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(123U);
    msg.time = 0.67496495767;
    msg.x = 0.992491963807;
    msg.y = 0.901944121666;
    msg.z = 0.6616350467;

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
    msg.setTimeStamp(0.204349137415);
    msg.setSource(46295U);
    msg.setSourceEntity(4U);
    msg.setDestination(53011U);
    msg.setDestinationEntity(164U);
    msg.time = 0.494535045487;
    msg.x = 0.553290855142;
    msg.y = 0.00933183092169;
    msg.z = 0.931205460265;

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
    msg.setTimeStamp(0.51901982835);
    msg.setSource(4132U);
    msg.setSourceEntity(119U);
    msg.setDestination(14737U);
    msg.setDestinationEntity(179U);
    msg.time = 0.218194864865;
    msg.x = 0.832272108427;
    msg.y = 0.358905509047;
    msg.z = 0.654610785495;

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
    msg.setTimeStamp(0.0424883870927);
    msg.setSource(10531U);
    msg.setSourceEntity(188U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(92U);
    msg.validity = 199U;
    msg.x = 0.238100119283;
    msg.y = 0.948716628019;
    msg.z = 0.441582363873;

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
    msg.setTimeStamp(0.436186907575);
    msg.setSource(62844U);
    msg.setSourceEntity(200U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(11U);
    msg.validity = 105U;
    msg.x = 0.364825640669;
    msg.y = 0.215174930593;
    msg.z = 0.668099466714;

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
    msg.setTimeStamp(0.436761253558);
    msg.setSource(23528U);
    msg.setSourceEntity(200U);
    msg.setDestination(277U);
    msg.setDestinationEntity(121U);
    msg.validity = 101U;
    msg.x = 0.0116021073975;
    msg.y = 0.564008948881;
    msg.z = 0.505780136691;

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
    msg.setTimeStamp(0.663393317671);
    msg.setSource(45524U);
    msg.setSourceEntity(18U);
    msg.setDestination(62746U);
    msg.setDestinationEntity(204U);
    msg.validity = 30U;
    msg.x = 0.0272922289966;
    msg.y = 0.595022461917;
    msg.z = 0.325383993333;

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
    msg.setTimeStamp(0.621848656305);
    msg.setSource(64251U);
    msg.setSourceEntity(83U);
    msg.setDestination(30370U);
    msg.setDestinationEntity(18U);
    msg.validity = 208U;
    msg.x = 0.641853430999;
    msg.y = 0.264253527446;
    msg.z = 0.59265231448;

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
    msg.setTimeStamp(0.801402024449);
    msg.setSource(9844U);
    msg.setSourceEntity(28U);
    msg.setDestination(56913U);
    msg.setDestinationEntity(86U);
    msg.validity = 147U;
    msg.x = 0.152733341937;
    msg.y = 0.0750776475205;
    msg.z = 0.282220582872;

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
    msg.setTimeStamp(0.113531664569);
    msg.setSource(54202U);
    msg.setSourceEntity(253U);
    msg.setDestination(59229U);
    msg.setDestinationEntity(198U);
    msg.time = 0.0948878481644;
    msg.x = 0.885330887325;
    msg.y = 0.178945376279;
    msg.z = 0.776975051125;

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
    msg.setTimeStamp(0.937903764974);
    msg.setSource(64744U);
    msg.setSourceEntity(23U);
    msg.setDestination(16348U);
    msg.setDestinationEntity(164U);
    msg.time = 0.91175241316;
    msg.x = 0.118242978226;
    msg.y = 0.897731993149;
    msg.z = 0.607573655997;

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
    msg.setTimeStamp(0.883306125316);
    msg.setSource(40766U);
    msg.setSourceEntity(230U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(31U);
    msg.time = 0.960767036969;
    msg.x = 0.382929253445;
    msg.y = 0.863043679436;
    msg.z = 0.863792750475;

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
    msg.setTimeStamp(0.0222051471882);
    msg.setSource(8295U);
    msg.setSourceEntity(44U);
    msg.setDestination(28703U);
    msg.setDestinationEntity(135U);
    msg.validity = 213U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.218247723682;
    tmp_msg_0.y = 0.223870726045;
    tmp_msg_0.z = 0.692902325698;
    tmp_msg_0.phi = 0.256027674395;
    tmp_msg_0.theta = 0.543415866124;
    tmp_msg_0.psi = 0.122678610941;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.47698235188;
    tmp_msg_1.beam_height = 0.916709707701;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.238047193903;

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
    msg.setTimeStamp(0.400177242695);
    msg.setSource(18376U);
    msg.setSourceEntity(169U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(111U);
    msg.validity = 180U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.941582027481;
    tmp_msg_0.y = 0.11678555072;
    tmp_msg_0.z = 0.612373535869;
    tmp_msg_0.phi = 0.432441705749;
    tmp_msg_0.theta = 0.128462427811;
    tmp_msg_0.psi = 0.102019880267;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.41622632399;

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
    msg.setTimeStamp(0.182004283521);
    msg.setSource(9849U);
    msg.setSourceEntity(217U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(103U);
    msg.validity = 187U;
    msg.value = 0.0626109540094;

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
    msg.setTimeStamp(0.604162972513);
    msg.setSource(48003U);
    msg.setSourceEntity(190U);
    msg.setDestination(65180U);
    msg.setDestinationEntity(247U);
    msg.value = 0.44209789595;

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
    msg.setTimeStamp(0.432771749498);
    msg.setSource(13119U);
    msg.setSourceEntity(191U);
    msg.setDestination(27438U);
    msg.setDestinationEntity(155U);
    msg.value = 0.401299588135;

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
    msg.setTimeStamp(0.980918384065);
    msg.setSource(1697U);
    msg.setSourceEntity(60U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(178U);
    msg.value = 0.91002794924;

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
    msg.setTimeStamp(0.150515804824);
    msg.setSource(31023U);
    msg.setSourceEntity(152U);
    msg.setDestination(50031U);
    msg.setDestinationEntity(215U);
    msg.value = 0.334592338848;

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
    msg.setTimeStamp(0.981732915096);
    msg.setSource(7605U);
    msg.setSourceEntity(38U);
    msg.setDestination(4703U);
    msg.setDestinationEntity(79U);
    msg.value = 0.694935355188;

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
    msg.setTimeStamp(0.0724894712352);
    msg.setSource(7946U);
    msg.setSourceEntity(111U);
    msg.setDestination(8958U);
    msg.setDestinationEntity(182U);
    msg.value = 0.887250698426;

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
    msg.setTimeStamp(0.045792327074);
    msg.setSource(2459U);
    msg.setSourceEntity(235U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(100U);
    msg.value = 0.11061984758;

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
    msg.setTimeStamp(0.0835325334132);
    msg.setSource(628U);
    msg.setSourceEntity(201U);
    msg.setDestination(9111U);
    msg.setDestinationEntity(168U);
    msg.value = 0.107909207549;

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
    msg.setTimeStamp(0.235410484222);
    msg.setSource(57754U);
    msg.setSourceEntity(81U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(93U);
    msg.value = 0.740149212886;

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
    msg.setTimeStamp(0.316809217374);
    msg.setSource(51024U);
    msg.setSourceEntity(19U);
    msg.setDestination(20315U);
    msg.setDestinationEntity(144U);
    msg.value = 0.690882781344;

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
    msg.setTimeStamp(0.96604635345);
    msg.setSource(44646U);
    msg.setSourceEntity(95U);
    msg.setDestination(52771U);
    msg.setDestinationEntity(37U);
    msg.value = 0.553034718797;

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
    msg.setTimeStamp(0.264990724873);
    msg.setSource(37295U);
    msg.setSourceEntity(142U);
    msg.setDestination(63066U);
    msg.setDestinationEntity(181U);
    msg.value = 0.142732884656;

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
    msg.setTimeStamp(0.518871854493);
    msg.setSource(62139U);
    msg.setSourceEntity(28U);
    msg.setDestination(44929U);
    msg.setDestinationEntity(23U);
    msg.value = 0.32303427372;

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
    msg.setTimeStamp(0.368602498644);
    msg.setSource(46477U);
    msg.setSourceEntity(39U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(52U);
    msg.value = 0.11436168296;

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
    msg.setTimeStamp(0.396108061468);
    msg.setSource(1063U);
    msg.setSourceEntity(1U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(229U);
    msg.value = 0.631434288498;

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
    msg.setTimeStamp(0.125331908351);
    msg.setSource(34276U);
    msg.setSourceEntity(161U);
    msg.setDestination(31383U);
    msg.setDestinationEntity(221U);
    msg.value = 0.284494680613;

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
    msg.setTimeStamp(0.657269493158);
    msg.setSource(42433U);
    msg.setSourceEntity(47U);
    msg.setDestination(53091U);
    msg.setDestinationEntity(216U);
    msg.value = 0.485050868166;

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
    msg.setTimeStamp(0.445176000576);
    msg.setSource(29583U);
    msg.setSourceEntity(180U);
    msg.setDestination(50171U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0905440533201;

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
    msg.setTimeStamp(0.0266362429064);
    msg.setSource(12357U);
    msg.setSourceEntity(164U);
    msg.setDestination(47700U);
    msg.setDestinationEntity(227U);
    msg.value = 0.711184109282;

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
    msg.setTimeStamp(0.0147400661507);
    msg.setSource(40804U);
    msg.setSourceEntity(237U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(11U);
    msg.value = 0.68960140841;

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
    msg.setTimeStamp(0.930519980577);
    msg.setSource(27761U);
    msg.setSourceEntity(215U);
    msg.setDestination(11535U);
    msg.setDestinationEntity(124U);
    msg.value = 0.515835460163;

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
    msg.setTimeStamp(0.60217925251);
    msg.setSource(24419U);
    msg.setSourceEntity(35U);
    msg.setDestination(25090U);
    msg.setDestinationEntity(172U);
    msg.value = 0.695440641263;

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
    msg.setTimeStamp(0.200564509377);
    msg.setSource(5000U);
    msg.setSourceEntity(59U);
    msg.setDestination(63040U);
    msg.setDestinationEntity(138U);
    msg.value = 0.112040430966;

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
    msg.setTimeStamp(0.764081906033);
    msg.setSource(63780U);
    msg.setSourceEntity(48U);
    msg.setDestination(13599U);
    msg.setDestinationEntity(25U);
    msg.value = 0.484816268416;

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
    msg.setTimeStamp(0.636496280116);
    msg.setSource(35219U);
    msg.setSourceEntity(232U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(156U);
    msg.direction = 0.126498177251;
    msg.speed = 0.835293713965;
    msg.turbulence = 0.303801139326;

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
    msg.setTimeStamp(0.861049520093);
    msg.setSource(45691U);
    msg.setSourceEntity(253U);
    msg.setDestination(20261U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.171835904038;
    msg.speed = 0.180478142719;
    msg.turbulence = 0.763829796406;

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
    msg.setTimeStamp(0.350183394998);
    msg.setSource(52475U);
    msg.setSourceEntity(6U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(117U);
    msg.direction = 0.083475953058;
    msg.speed = 0.17495823389;
    msg.turbulence = 0.289072792512;

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
    msg.setTimeStamp(0.00400739106575);
    msg.setSource(38784U);
    msg.setSourceEntity(14U);
    msg.setDestination(16720U);
    msg.setDestinationEntity(116U);
    msg.value = 0.206110551891;

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
    msg.setTimeStamp(0.61959938216);
    msg.setSource(62695U);
    msg.setSourceEntity(247U);
    msg.setDestination(46176U);
    msg.setDestinationEntity(171U);
    msg.value = 0.234262130581;

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
    msg.setTimeStamp(0.547673347032);
    msg.setSource(9813U);
    msg.setSourceEntity(169U);
    msg.setDestination(984U);
    msg.setDestinationEntity(98U);
    msg.value = 0.998062876523;

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
    msg.setTimeStamp(0.736205443243);
    msg.setSource(18171U);
    msg.setSourceEntity(217U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(42U);
    msg.value.assign("NYKQGXETMBMJZHMNIFNEDUPDBIFXNJASJPUWCBIVUUINUKOKZVCDLKVVBWLJTMRGJCMXWRZACWMQYBHKFQATOVEZSYACPIAWOKOKNFYBHQODFIYDLDHVSOGDJPFUYLLPRWXQASFGQRUNDTPEIIPSGDMJTVGEBLXWHAOLJOIUYUCTCGTVRXOUHPHQMARGSQWOZVFZXYWLQTPBNEYHZMAXWKEFJTCCRXLGRSJPVDKR");

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
    msg.setTimeStamp(0.304768816937);
    msg.setSource(15692U);
    msg.setSourceEntity(114U);
    msg.setDestination(15537U);
    msg.setDestinationEntity(251U);
    msg.value.assign("HWNGWLRMPYZBQYLDTTKWGJVQYMUCAPDHPLNUTNGUGPAMVEADNSHREFOAKKHGFALVPNCQIWKMYJWEMTVZORRLRLPZQCNFSXBTBCBZTYMSUQYQBEJOSEJKBWADOCZUBCYAFEIUDVTEDBAZAQ");

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
    msg.setTimeStamp(0.563977655126);
    msg.setSource(47496U);
    msg.setSourceEntity(202U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(4U);
    msg.value.assign("BANVACHTRQTIAONKCSJFQFHAIXTDQUQGGMGKKXMDHYEFCKWQURWJYCOGOZBASWFSHHJAOFDEXNKPWWOZOVNDWESPTDUYXFBLCYKQGWXZHXOCGZRQCGJBJDTGRRTFLEBYSTNMIMIXROOWMJBAYSUMMZKFPDYSVUGVZJIEURVUVBFPKBQFVDMETYERNXWLTHQNQISEIYAIZJLYIVLCBKABTHKHLLCJAXULGSLUIPLXEZHERPWVDPPJUO");

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
    msg.setTimeStamp(0.955156967175);
    msg.setSource(9713U);
    msg.setSourceEntity(12U);
    msg.setDestination(4220U);
    msg.setDestinationEntity(20U);
    const char tmp_msg_0[] = {-80, 94, 117, 100, 101, 99, 15, -39, 86, 92, -30, 119, -11, -105, 8, -112, 53, -96, -2, -66, -96, 12, 38, 100, 9, 64, -51, 83, -39, -1, 52, -101, 122, -60, 115, 94, 33, 93, -95, -63, 116, -115, 65, -92, -37, 45, 122, 57, 44, 95, -89, 86, -103, 52, 24, 68, -52, 88, 67, 89, -47, -53, 116, -126, 120, 104, -96, 102, 70, -29, -122, -70, -89, -124, -105, 67, -39, 19, -51, 72, 25, 46, 81, -88, 105, -6, -15, -8, 121, -87, 48, 99, 75, -2, 62, 19, 44, -114, 118, 94, -36, -86, -31, -60, 83, -103, -104, 23, -78, 19, -57, -27, -59, 71, -19, -99, -46, 78, 39, -34, 52, -81, -80, -105, 106, -13, -15, -49, 54, 121, -40, 61, -70, -117, 79, 81, -101, -83, -14, 81, -57, -127, 103, -115, 34, 3, -19, -71, -2, -55, 98, 112, 121, -87, 72, -20, -4, 70, -32};
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
    msg.setTimeStamp(0.25486213002);
    msg.setSource(54411U);
    msg.setSourceEntity(225U);
    msg.setDestination(5844U);
    msg.setDestinationEntity(146U);
    const char tmp_msg_0[] = {54, -75, 105, 12, 75, 70, 5, -90, 35, -4, 11, 47, -74, 101, -10, -35, -70, 31, 87, -73, -116, 51, -89, -16, 27, 124, 19, -5, -77, 30, 92, 90, -1, 32, 121, 32, 24, -67, -64, -33, 24, 125, -68, 44, 116, 91, -88, -60, -34, 83, -37, 45, 59, -70, 99, -41, 89, -45, 37, -1, -93, 60, 122, -74, 65, 58, 123, 85, -40, -88, 68, 73, 76, 43, 106, -77, -91, -64, -29, 9, 96, 32, 123, 27, -104, 57, 113, 92, 16, -94, -55, 50, -111, 49, -3, -91, -56, -72, -77, 29, -54, -116, -30, 40, 77, 36, -1, -3, 30, -39, 100, -8, -80, -88, -4, -121, 63, 1, 121, 37, 121, -31, 84, -100, 121, -114, 22, -50, -113, 3, -69, -49, 106, -29, 52, -20, 5, -93, -44, -33, 62, -25, 66, -124, -71, 20, 21, 21, 38, -54, 28, 4, 115, 61};
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
    msg.setTimeStamp(0.228784325723);
    msg.setSource(35108U);
    msg.setSourceEntity(58U);
    msg.setDestination(58212U);
    msg.setDestinationEntity(47U);
    const char tmp_msg_0[] = {-89, 111, 27, -111, 79, 33, -109, 57, 101, -115, 61, 45, -126, -78, -73, 120, 1, -6, -4, -59, 43, 65, -25, -67, 118, -40, 29, -27, -44, -26, 114, 98, -82, -94, 113, -114, -80, 35, -45, 53, 119, -28, -111, -35, -6, 123, 98, 86, 98, -77, -14, -19, -19, -58, -38, 88, -95, -67, -62, -13, -94, -104, 95, 74, -70, -103, -96, -85, -106, 61};
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
    msg.setTimeStamp(0.969253608074);
    msg.setSource(1371U);
    msg.setSourceEntity(202U);
    msg.setDestination(8182U);
    msg.setDestinationEntity(120U);
    msg.value = 0.632073475173;

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
    msg.setTimeStamp(0.363187864428);
    msg.setSource(61133U);
    msg.setSourceEntity(8U);
    msg.setDestination(15818U);
    msg.setDestinationEntity(154U);
    msg.value = 0.847656260154;

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
    msg.setTimeStamp(0.624170359248);
    msg.setSource(31570U);
    msg.setSourceEntity(152U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(223U);
    msg.value = 0.666600472046;

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
    msg.setTimeStamp(0.569438691209);
    msg.setSource(49593U);
    msg.setSourceEntity(185U);
    msg.setDestination(25653U);
    msg.setDestinationEntity(147U);
    msg.type = 245U;
    msg.frequency = 4010552916U;
    msg.min_range = 46439U;
    msg.max_range = 56798U;
    msg.bits_per_point = 206U;
    msg.scale_factor = 0.837607125095;
    const char tmp_msg_0[] = {-127, -29, -95, 10, 79, 92, 89, 101, -18, -43, -70, -110, -9, -46, -24, 84, 89, 91, 47, 99, -44, -95, 29, -25, -60, -6, -114, 27, 16, -62, 45, 104, -4, -7, -16, -97, 44, -78, 65, 54, 11, 56, -14, -116, -112, -87, -56, 31, -36, -52, 56, -48, -85, -85, -127, 0, -110, 107, -20, 118, 106, 32, 51, 43, 23, 59, -29, 66, -23, -31, 19, 23, -121, -96, -82, -123, -18, 96};
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
    msg.setTimeStamp(0.0889456554519);
    msg.setSource(56739U);
    msg.setSourceEntity(221U);
    msg.setDestination(32724U);
    msg.setDestinationEntity(172U);
    msg.type = 3U;
    msg.frequency = 3194080024U;
    msg.min_range = 39695U;
    msg.max_range = 35623U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.68637859074;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.543698614764;
    tmp_msg_0.beam_height = 0.02794103558;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {122, -24, 106, 14, 82, -37, 6, -58, -42, -87, 13, -48, 78, -71, -41, -118, 99, 88, 31, -107, -67, 0, -22, 96, 26, -83, -2, 39, -17, 38, 116, 40, -102, -76, 32, -122, 9, 39, 16, 17, 88, 55, -26, 1, 109, 41, 12, 30, -93, -97, -56, 93, 1, -97, -23, 72, 123, 83, 69, -101, 114, 19, -66, 69, -111, 38, -88, 2, -70, -36, 88, 105, -62, -70, 38, 49, -54, 82, 20, -65, 59, 41, -85, -104, -21, -77, -83, 111, -83, 13, -51, 29, -66, 47, 104, -118, -51, -87, 89, -92, 72, -85, -76, 78, -7, 69, -14, -31, 109, -27, 21, 31, -60, -72, 56, 18, 10, 59, -33, -23, -26, 97, 68, -16, 21, 14, -109, 119, 24, -128, 82, 82, 54, 65, -122, 4, 0, 108, -86, 30, -82, 41, 75, -122, 68, 97, 107, -70, -19, -9, -13, 69, 79, 89, -66, 70, 76, -77, 91, -4, 122, 35, -69, 19, -79, 53, -55, 99, -21, 105, -68, 70, -99, 45, 61, -110, -94, -58, 26, -123, 42, 111, -26, 81, 0, 59, -97, -107, -120, 121};
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
    msg.setTimeStamp(0.38146039374);
    msg.setSource(6539U);
    msg.setSourceEntity(4U);
    msg.setDestination(23763U);
    msg.setDestinationEntity(130U);
    msg.type = 140U;
    msg.frequency = 1228040105U;
    msg.min_range = 62978U;
    msg.max_range = 39035U;
    msg.bits_per_point = 165U;
    msg.scale_factor = 0.860141906978;
    const char tmp_msg_0[] = {-93, 115, 64, -52, -25, -38, -9, 107, 64, -113, 45, -71, -115, -68, 81, -108};
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
    msg.setTimeStamp(0.674543884422);
    msg.setSource(58003U);
    msg.setSourceEntity(123U);
    msg.setDestination(43579U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.223551796731);
    msg.setSource(33840U);
    msg.setSourceEntity(150U);
    msg.setDestination(59435U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.988698824298);
    msg.setSource(34493U);
    msg.setSourceEntity(66U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.585239822956);
    msg.setSource(31060U);
    msg.setSourceEntity(208U);
    msg.setDestination(17948U);
    msg.setDestinationEntity(115U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.807150990377);
    msg.setSource(60396U);
    msg.setSourceEntity(118U);
    msg.setDestination(29506U);
    msg.setDestinationEntity(172U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.934790216081);
    msg.setSource(41787U);
    msg.setSourceEntity(49U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(15U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.166972798638);
    msg.setSource(37166U);
    msg.setSourceEntity(214U);
    msg.setDestination(50714U);
    msg.setDestinationEntity(47U);
    msg.value = 0.749934788085;
    msg.confidence = 0.0744184547642;
    msg.opmodes.assign("ZDIKROPGCQVNOBYZYTLZTBLIXWPCXHCXAJNMQHRUAMBXWNYQZIKCZPTNTADKUQFEONSERIQYWHRKFNDCPSLPODWMGMAZECLTYIUGJAIZCDXSFNZWHIRXABEPYGMGSVGEWXHLOTDSISHKVRJPQTOPHNMUGTCSQEVSFMLKRKKJJVRKBYWXCDADTFKINVFQVUNSAMGBSVOOYMGFFPOZVLYJQWRLJMU");

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
    msg.setTimeStamp(0.983941694192);
    msg.setSource(38577U);
    msg.setSourceEntity(208U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(111U);
    msg.value = 0.509722052636;
    msg.confidence = 0.564377113677;
    msg.opmodes.assign("NIATSDLSMSGVRRKTZSLBGOJNXAKZUREDUIHANIFNVHSBROFCLQIQEORZJWFNPGQFZCUDAQEQEDPCEJIJTKBHSTVNQCOFMNFO");

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
    msg.setTimeStamp(0.625951341479);
    msg.setSource(33566U);
    msg.setSourceEntity(99U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(98U);
    msg.value = 0.694092570258;
    msg.confidence = 0.854538891122;
    msg.opmodes.assign("UYBJEPEFVURMAGAGWSIRDZTYDTNALNNYWSAUQDKRZEUTXHCRRNLYECVEQJDFOYKMWAHJXDKTTXQLHIMHMZIDIJCQNUSEKLHOBBZVKXAOHOYZPGJGWLXNKPGQDBQADMSXNBFIFYVCOLBLVSSIUQKJRWIBMMOVAJPUHFIR");

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
    msg.setTimeStamp(0.533838949578);
    msg.setSource(49248U);
    msg.setSourceEntity(14U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(155U);
    msg.itow = 2453653466U;
    msg.lat = 0.0548823631141;
    msg.lon = 0.198930686787;
    msg.height_ell = 0.222092162252;
    msg.height_sea = 0.683357373565;
    msg.hacc = 0.906569426318;
    msg.vacc = 0.880179963397;
    msg.vel_n = 0.011703867149;
    msg.vel_e = 0.0902939286241;
    msg.vel_d = 0.0641029656665;
    msg.speed = 0.79355082236;
    msg.gspeed = 0.0472034778211;
    msg.heading = 0.678519256084;
    msg.sacc = 0.0334805576035;
    msg.cacc = 0.378325084397;

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
    msg.setTimeStamp(0.814674969265);
    msg.setSource(6734U);
    msg.setSourceEntity(184U);
    msg.setDestination(4230U);
    msg.setDestinationEntity(17U);
    msg.itow = 395961242U;
    msg.lat = 0.431418817535;
    msg.lon = 0.520515696103;
    msg.height_ell = 0.774881234959;
    msg.height_sea = 0.879587471801;
    msg.hacc = 0.332826414243;
    msg.vacc = 0.255390754024;
    msg.vel_n = 0.424784502963;
    msg.vel_e = 0.69749447026;
    msg.vel_d = 0.203754066706;
    msg.speed = 0.138165561897;
    msg.gspeed = 0.535724831701;
    msg.heading = 0.580378572798;
    msg.sacc = 0.3170006083;
    msg.cacc = 0.194051910999;

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
    msg.setTimeStamp(0.682564971367);
    msg.setSource(24596U);
    msg.setSourceEntity(182U);
    msg.setDestination(3866U);
    msg.setDestinationEntity(181U);
    msg.itow = 2431799445U;
    msg.lat = 0.0999445727559;
    msg.lon = 0.212672562679;
    msg.height_ell = 0.585683805135;
    msg.height_sea = 0.571986965025;
    msg.hacc = 0.23005497383;
    msg.vacc = 0.955164863435;
    msg.vel_n = 0.172567647981;
    msg.vel_e = 0.90626271835;
    msg.vel_d = 0.867811617519;
    msg.speed = 0.642384784771;
    msg.gspeed = 0.608439994144;
    msg.heading = 0.498590876611;
    msg.sacc = 0.965204447137;
    msg.cacc = 0.627562587467;

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
    msg.setTimeStamp(0.398309002108);
    msg.setSource(11274U);
    msg.setSourceEntity(111U);
    msg.setDestination(11680U);
    msg.setDestinationEntity(13U);
    msg.id = 111U;
    msg.value = 0.587999558495;

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
    msg.setTimeStamp(0.613514287042);
    msg.setSource(39152U);
    msg.setSourceEntity(19U);
    msg.setDestination(42946U);
    msg.setDestinationEntity(32U);
    msg.id = 76U;
    msg.value = 0.547515574672;

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
    msg.setTimeStamp(0.54573314124);
    msg.setSource(39622U);
    msg.setSourceEntity(66U);
    msg.setDestination(23949U);
    msg.setDestinationEntity(187U);
    msg.id = 128U;
    msg.value = 0.5862929045;

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
    msg.setTimeStamp(0.720981411051);
    msg.setSource(51734U);
    msg.setSourceEntity(183U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(239U);
    msg.x = 0.351677824584;
    msg.y = 0.765633515874;
    msg.z = 0.129265704545;
    msg.phi = 0.527723896243;
    msg.theta = 0.667432741925;
    msg.psi = 0.998162418685;

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
    msg.setTimeStamp(0.606798533996);
    msg.setSource(49515U);
    msg.setSourceEntity(23U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(31U);
    msg.x = 0.506455761832;
    msg.y = 0.0353304901551;
    msg.z = 0.455637244654;
    msg.phi = 0.530497512343;
    msg.theta = 0.0937560506441;
    msg.psi = 0.342499272863;

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
    msg.setTimeStamp(0.150521060953);
    msg.setSource(54098U);
    msg.setSourceEntity(65U);
    msg.setDestination(22148U);
    msg.setDestinationEntity(7U);
    msg.x = 0.108668294548;
    msg.y = 0.387441724697;
    msg.z = 0.622547595351;
    msg.phi = 0.0261702520223;
    msg.theta = 0.223551719713;
    msg.psi = 0.628788207298;

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
    msg.setTimeStamp(0.905215146346);
    msg.setSource(9917U);
    msg.setSourceEntity(123U);
    msg.setDestination(49129U);
    msg.setDestinationEntity(44U);
    msg.beam_width = 0.664789046141;
    msg.beam_height = 0.357547911562;

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
    msg.setTimeStamp(0.539347911848);
    msg.setSource(55621U);
    msg.setSourceEntity(50U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(15U);
    msg.beam_width = 0.377175168633;
    msg.beam_height = 0.838635914339;

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
    msg.setTimeStamp(0.201451348682);
    msg.setSource(16836U);
    msg.setSourceEntity(197U);
    msg.setDestination(13255U);
    msg.setDestinationEntity(68U);
    msg.beam_width = 0.607585033034;
    msg.beam_height = 0.806302886488;

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
    msg.setTimeStamp(0.302583445146);
    msg.setSource(4804U);
    msg.setSourceEntity(200U);
    msg.setDestination(60469U);
    msg.setDestinationEntity(227U);
    msg.sane = 147U;

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
    msg.setTimeStamp(0.125977293922);
    msg.setSource(20931U);
    msg.setSourceEntity(192U);
    msg.setDestination(23716U);
    msg.setDestinationEntity(111U);
    msg.sane = 232U;

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
    msg.setTimeStamp(0.518873801218);
    msg.setSource(27939U);
    msg.setSourceEntity(181U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(25U);
    msg.sane = 170U;

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
    msg.setTimeStamp(0.185764064833);
    msg.setSource(13214U);
    msg.setSourceEntity(37U);
    msg.setDestination(9484U);
    msg.setDestinationEntity(55U);
    msg.value = 0.146214866085;

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
    msg.setTimeStamp(0.706549683337);
    msg.setSource(30899U);
    msg.setSourceEntity(229U);
    msg.setDestination(8757U);
    msg.setDestinationEntity(89U);
    msg.value = 0.549032720881;

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
    msg.setTimeStamp(0.071731324598);
    msg.setSource(49486U);
    msg.setSourceEntity(142U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(251U);
    msg.value = 0.200882206247;

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
    msg.setTimeStamp(0.786212420835);
    msg.setSource(24326U);
    msg.setSourceEntity(188U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(94U);
    msg.value = 0.334503300589;

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
    msg.setTimeStamp(0.768632445504);
    msg.setSource(22532U);
    msg.setSourceEntity(83U);
    msg.setDestination(39622U);
    msg.setDestinationEntity(45U);
    msg.value = 0.293191327644;

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
    msg.setTimeStamp(0.0670522499276);
    msg.setSource(25590U);
    msg.setSourceEntity(87U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(146U);
    msg.value = 0.085627654357;

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
    msg.setTimeStamp(0.579046479241);
    msg.setSource(62967U);
    msg.setSourceEntity(33U);
    msg.setDestination(34047U);
    msg.setDestinationEntity(235U);
    msg.value = 0.545782445415;

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
    msg.setTimeStamp(0.982899915396);
    msg.setSource(50646U);
    msg.setSourceEntity(179U);
    msg.setDestination(9881U);
    msg.setDestinationEntity(216U);
    msg.value = 0.097060176521;

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
    msg.setTimeStamp(0.449390077145);
    msg.setSource(20904U);
    msg.setSourceEntity(148U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(100U);
    msg.value = 0.789468290087;

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
    msg.setTimeStamp(0.507916203771);
    msg.setSource(51571U);
    msg.setSourceEntity(110U);
    msg.setDestination(61415U);
    msg.setDestinationEntity(122U);
    msg.value = 0.928756569101;

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
    msg.setTimeStamp(0.0911221777551);
    msg.setSource(45713U);
    msg.setSourceEntity(55U);
    msg.setDestination(15281U);
    msg.setDestinationEntity(242U);
    msg.value = 0.683186555596;

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
    msg.setTimeStamp(0.361607019961);
    msg.setSource(44177U);
    msg.setSourceEntity(8U);
    msg.setDestination(14110U);
    msg.setDestinationEntity(98U);
    msg.value = 0.764115684481;

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
    msg.setTimeStamp(0.790367299486);
    msg.setSource(36987U);
    msg.setSourceEntity(236U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(95U);
    msg.value = 0.255682851742;

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
    msg.setTimeStamp(0.978176167163);
    msg.setSource(3016U);
    msg.setSourceEntity(212U);
    msg.setDestination(60403U);
    msg.setDestinationEntity(128U);
    msg.value = 0.768068970646;

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
    msg.setTimeStamp(0.286111601307);
    msg.setSource(17139U);
    msg.setSourceEntity(199U);
    msg.setDestination(33720U);
    msg.setDestinationEntity(34U);
    msg.value = 0.724556173505;

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
    msg.setTimeStamp(0.46512107048);
    msg.setSource(49829U);
    msg.setSourceEntity(247U);
    msg.setDestination(63495U);
    msg.setDestinationEntity(19U);
    msg.value = 0.352598818603;

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
    msg.setTimeStamp(0.143261391681);
    msg.setSource(24019U);
    msg.setSourceEntity(31U);
    msg.setDestination(32980U);
    msg.setDestinationEntity(131U);
    msg.value = 0.556686628908;

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
    msg.setTimeStamp(0.595361429067);
    msg.setSource(10820U);
    msg.setSourceEntity(89U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(169U);
    msg.value = 0.25374667847;

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
    msg.setTimeStamp(0.403079937577);
    msg.setSource(64849U);
    msg.setSourceEntity(156U);
    msg.setDestination(4325U);
    msg.setDestinationEntity(16U);
    msg.value = 0.363520062248;

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
    msg.setTimeStamp(0.349579634851);
    msg.setSource(64052U);
    msg.setSourceEntity(197U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(168U);
    msg.value = 0.322226884184;

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
    msg.setTimeStamp(0.590120598473);
    msg.setSource(28005U);
    msg.setSourceEntity(97U);
    msg.setDestination(28999U);
    msg.setDestinationEntity(140U);
    msg.value = 0.775975814622;

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
    msg.setTimeStamp(0.704064419075);
    msg.setSource(795U);
    msg.setSourceEntity(236U);
    msg.setDestination(11497U);
    msg.setDestinationEntity(46U);
    msg.value = 0.167212200481;

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
    msg.setTimeStamp(0.773292690661);
    msg.setSource(59684U);
    msg.setSourceEntity(175U);
    msg.setDestination(58112U);
    msg.setDestinationEntity(253U);
    msg.value = 0.278032083479;

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
    msg.setTimeStamp(0.481428350938);
    msg.setSource(15811U);
    msg.setSourceEntity(135U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(155U);
    msg.value = 0.731291074779;

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
    msg.setTimeStamp(0.447145702076);
    msg.setSource(58961U);
    msg.setSourceEntity(189U);
    msg.setDestination(12543U);
    msg.setDestinationEntity(61U);
    msg.validity = 9135U;
    msg.type = 169U;
    msg.tow = 3957936931U;
    msg.base_lat = 0.66084256898;
    msg.base_lon = 0.332722499377;
    msg.base_height = 0.693589576574;
    msg.n = 0.504047763915;
    msg.e = 0.942106011479;
    msg.d = 0.718494287298;
    msg.v_n = 0.293831738119;
    msg.v_e = 0.323089551711;
    msg.v_d = 0.621886077428;
    msg.satellites = 21U;
    msg.iar_hyp = 4291U;
    msg.iar_ratio = 0.661293784822;

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
    msg.setTimeStamp(0.112373195952);
    msg.setSource(4921U);
    msg.setSourceEntity(116U);
    msg.setDestination(4960U);
    msg.setDestinationEntity(139U);
    msg.validity = 30700U;
    msg.type = 56U;
    msg.tow = 1808743252U;
    msg.base_lat = 0.460412186454;
    msg.base_lon = 0.0924597466596;
    msg.base_height = 0.236081501749;
    msg.n = 0.145130989079;
    msg.e = 0.168018103419;
    msg.d = 0.688213145267;
    msg.v_n = 0.506643964377;
    msg.v_e = 0.828650126314;
    msg.v_d = 0.281683953196;
    msg.satellites = 40U;
    msg.iar_hyp = 39529U;
    msg.iar_ratio = 0.526707684779;

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
    msg.setTimeStamp(0.958841456827);
    msg.setSource(10313U);
    msg.setSourceEntity(67U);
    msg.setDestination(22961U);
    msg.setDestinationEntity(77U);
    msg.validity = 4117U;
    msg.type = 78U;
    msg.tow = 1547665469U;
    msg.base_lat = 0.556141015279;
    msg.base_lon = 0.234940195106;
    msg.base_height = 0.120970989634;
    msg.n = 0.685827523556;
    msg.e = 0.321668290028;
    msg.d = 0.00407670348077;
    msg.v_n = 0.0516747043967;
    msg.v_e = 0.856238498909;
    msg.v_d = 0.260353916091;
    msg.satellites = 84U;
    msg.iar_hyp = 62466U;
    msg.iar_ratio = 0.446570680704;

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
    msg.setTimeStamp(0.865259189732);
    msg.setSource(5865U);
    msg.setSourceEntity(225U);
    msg.setDestination(24906U);
    msg.setDestinationEntity(150U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.883011085205;
    tmp_msg_0.lon = 0.203222512078;
    tmp_msg_0.height = 0.466779162538;
    tmp_msg_0.x = 0.307574391053;
    tmp_msg_0.y = 0.773538914048;
    tmp_msg_0.z = 0.546400595159;
    tmp_msg_0.phi = 0.374380191885;
    tmp_msg_0.theta = 0.37645369022;
    tmp_msg_0.psi = 0.0947273850549;
    tmp_msg_0.u = 0.766406828059;
    tmp_msg_0.v = 0.260070555885;
    tmp_msg_0.w = 0.644304213663;
    tmp_msg_0.vx = 0.926475528556;
    tmp_msg_0.vy = 0.518659904046;
    tmp_msg_0.vz = 0.773664333753;
    tmp_msg_0.p = 0.559548158959;
    tmp_msg_0.q = 0.787239348697;
    tmp_msg_0.r = 0.129015004043;
    tmp_msg_0.depth = 0.60708332537;
    tmp_msg_0.alt = 0.952865996134;
    msg.state.set(tmp_msg_0);
    msg.type = 111U;

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
    msg.setTimeStamp(0.972901545563);
    msg.setSource(3862U);
    msg.setSourceEntity(89U);
    msg.setDestination(57519U);
    msg.setDestinationEntity(47U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.903372389774;
    tmp_msg_0.lon = 0.266532578008;
    tmp_msg_0.height = 0.0966630126529;
    tmp_msg_0.x = 0.152050580119;
    tmp_msg_0.y = 0.646602656314;
    tmp_msg_0.z = 0.185752925008;
    tmp_msg_0.phi = 0.562026673595;
    tmp_msg_0.theta = 0.590522577571;
    tmp_msg_0.psi = 0.62517835698;
    tmp_msg_0.u = 0.433358698156;
    tmp_msg_0.v = 0.925539969421;
    tmp_msg_0.w = 0.392396820838;
    tmp_msg_0.vx = 0.85607198356;
    tmp_msg_0.vy = 0.648175291657;
    tmp_msg_0.vz = 0.642158541312;
    tmp_msg_0.p = 0.37380700948;
    tmp_msg_0.q = 0.470222592033;
    tmp_msg_0.r = 0.0125809354745;
    tmp_msg_0.depth = 0.325752802752;
    tmp_msg_0.alt = 0.395397404004;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.870100109721);
    msg.setSource(30108U);
    msg.setSourceEntity(221U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(141U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0328964762438;
    tmp_msg_0.lon = 0.201342980456;
    tmp_msg_0.height = 0.0932108980351;
    tmp_msg_0.x = 0.45531495997;
    tmp_msg_0.y = 0.424473609179;
    tmp_msg_0.z = 0.0878672113382;
    tmp_msg_0.phi = 0.171827994065;
    tmp_msg_0.theta = 0.738627995495;
    tmp_msg_0.psi = 0.207767353474;
    tmp_msg_0.u = 0.204208564544;
    tmp_msg_0.v = 0.317749109579;
    tmp_msg_0.w = 0.532851779473;
    tmp_msg_0.vx = 0.497293000392;
    tmp_msg_0.vy = 0.812067665272;
    tmp_msg_0.vz = 0.662466115155;
    tmp_msg_0.p = 0.517181605696;
    tmp_msg_0.q = 0.761099614394;
    tmp_msg_0.r = 0.205614329837;
    tmp_msg_0.depth = 0.648573897433;
    tmp_msg_0.alt = 0.35877075381;
    msg.state.set(tmp_msg_0);
    msg.type = 181U;

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
    msg.setTimeStamp(0.171928577583);
    msg.setSource(34006U);
    msg.setSourceEntity(61U);
    msg.setDestination(22239U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0257577511553;

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
    msg.setTimeStamp(0.491725565967);
    msg.setSource(41869U);
    msg.setSourceEntity(21U);
    msg.setDestination(41346U);
    msg.setDestinationEntity(146U);
    msg.value = 0.470505210131;

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
    msg.setTimeStamp(0.913992816078);
    msg.setSource(32782U);
    msg.setSourceEntity(26U);
    msg.setDestination(8487U);
    msg.setDestinationEntity(42U);
    msg.value = 0.562981412298;

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
    msg.setTimeStamp(0.948579871016);
    msg.setSource(15265U);
    msg.setSourceEntity(4U);
    msg.setDestination(47130U);
    msg.setDestinationEntity(212U);
    msg.value = 0.416445767614;

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
    msg.setTimeStamp(0.606886503148);
    msg.setSource(16893U);
    msg.setSourceEntity(163U);
    msg.setDestination(52987U);
    msg.setDestinationEntity(235U);
    msg.value = 0.636291558567;

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
    msg.setTimeStamp(0.718148464384);
    msg.setSource(33433U);
    msg.setSourceEntity(43U);
    msg.setDestination(38048U);
    msg.setDestinationEntity(70U);
    msg.value = 0.728155666645;

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
    msg.setTimeStamp(0.182115588598);
    msg.setSource(17985U);
    msg.setSourceEntity(206U);
    msg.setDestination(42087U);
    msg.setDestinationEntity(207U);
    msg.value = 0.432511897451;

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
    msg.setTimeStamp(0.318361915084);
    msg.setSource(47891U);
    msg.setSourceEntity(223U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(8U);
    msg.value = 0.530739061514;

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
    msg.setTimeStamp(0.282905760809);
    msg.setSource(5282U);
    msg.setSourceEntity(6U);
    msg.setDestination(59583U);
    msg.setDestinationEntity(138U);
    msg.value = 0.718924268069;

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
    msg.setTimeStamp(0.740113641374);
    msg.setSource(46736U);
    msg.setSourceEntity(237U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(97U);
    msg.value = 0.745068618951;

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
    msg.setTimeStamp(0.0609486171397);
    msg.setSource(15159U);
    msg.setSourceEntity(61U);
    msg.setDestination(54165U);
    msg.setDestinationEntity(68U);
    msg.value = 0.632396626194;

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
    msg.setTimeStamp(0.524765070195);
    msg.setSource(65481U);
    msg.setSourceEntity(131U);
    msg.setDestination(32165U);
    msg.setDestinationEntity(142U);
    msg.value = 0.135639657277;

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
    msg.setTimeStamp(0.538583074919);
    msg.setSource(49183U);
    msg.setSourceEntity(72U);
    msg.setDestination(39311U);
    msg.setDestinationEntity(60U);
    msg.value = 0.216349754266;

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
    msg.setTimeStamp(0.612294827359);
    msg.setSource(13700U);
    msg.setSourceEntity(41U);
    msg.setDestination(6331U);
    msg.setDestinationEntity(137U);
    msg.value = 0.891186208465;

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
    msg.setTimeStamp(0.347535739459);
    msg.setSource(17333U);
    msg.setSourceEntity(146U);
    msg.setDestination(25423U);
    msg.setDestinationEntity(116U);
    msg.value = 0.116942938905;

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
    msg.setTimeStamp(0.487370705713);
    msg.setSource(8783U);
    msg.setSourceEntity(64U);
    msg.setDestination(46483U);
    msg.setDestinationEntity(26U);
    msg.id = 76U;
    msg.zoom = 128U;
    msg.action = 190U;

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
    msg.setTimeStamp(0.370231085585);
    msg.setSource(59352U);
    msg.setSourceEntity(42U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(166U);
    msg.id = 229U;
    msg.zoom = 58U;
    msg.action = 37U;

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
    msg.setTimeStamp(0.478403030389);
    msg.setSource(42095U);
    msg.setSourceEntity(208U);
    msg.setDestination(19071U);
    msg.setDestinationEntity(29U);
    msg.id = 187U;
    msg.zoom = 175U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.817102018326);
    msg.setSource(52507U);
    msg.setSourceEntity(81U);
    msg.setDestination(14956U);
    msg.setDestinationEntity(210U);
    msg.id = 40U;
    msg.value = 0.047854400887;

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
    msg.setTimeStamp(0.581807952058);
    msg.setSource(61734U);
    msg.setSourceEntity(28U);
    msg.setDestination(4238U);
    msg.setDestinationEntity(38U);
    msg.id = 54U;
    msg.value = 0.175811705233;

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
    msg.setTimeStamp(0.413387297543);
    msg.setSource(43675U);
    msg.setSourceEntity(57U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(156U);
    msg.id = 31U;
    msg.value = 0.168879046313;

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
    msg.setTimeStamp(0.327818182892);
    msg.setSource(7876U);
    msg.setSourceEntity(206U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(50U);
    msg.id = 197U;
    msg.value = 0.974067520011;

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
    msg.setTimeStamp(0.827051035026);
    msg.setSource(36247U);
    msg.setSourceEntity(233U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(9U);
    msg.id = 124U;
    msg.value = 0.79436422862;

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
    msg.setTimeStamp(0.797122225152);
    msg.setSource(14302U);
    msg.setSourceEntity(61U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(103U);
    msg.id = 29U;
    msg.value = 0.203979445889;

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
    msg.setTimeStamp(0.938073819156);
    msg.setSource(41310U);
    msg.setSourceEntity(254U);
    msg.setDestination(52576U);
    msg.setDestinationEntity(105U);
    msg.id = 236U;
    msg.angle = 0.929102519686;

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
    msg.setTimeStamp(0.882147138259);
    msg.setSource(33252U);
    msg.setSourceEntity(17U);
    msg.setDestination(17112U);
    msg.setDestinationEntity(234U);
    msg.id = 235U;
    msg.angle = 0.340520111507;

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
    msg.setTimeStamp(0.0122340416772);
    msg.setSource(55732U);
    msg.setSourceEntity(138U);
    msg.setDestination(33201U);
    msg.setDestinationEntity(254U);
    msg.id = 84U;
    msg.angle = 0.762887392112;

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
    msg.setTimeStamp(0.386255655614);
    msg.setSource(53098U);
    msg.setSourceEntity(149U);
    msg.setDestination(26682U);
    msg.setDestinationEntity(238U);
    msg.op = 176U;
    msg.actions.assign("PPDRGUOQULXSTKQHHDRWFSZBSRGLSBNAOWIAELQRZBWSUDCJJQAVFVCWOKHIFGFQHFKFMUYNEDTMDVLKLTWJP");

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
    msg.setTimeStamp(0.0928983657112);
    msg.setSource(40165U);
    msg.setSourceEntity(134U);
    msg.setDestination(18158U);
    msg.setDestinationEntity(192U);
    msg.op = 170U;
    msg.actions.assign("OAHGCTUCLNLQEZDDMUQENIOOVXBQTOXWVYKWQQSTIOSVDSDOHUHAHSVUBAPLSYZDBTNHVJKIIXJSFKUXFMSPPVCFRUNIWLDSRAPFEQSBISZJTLMMXGHBLWRBEDRYTNUEAPBHAIXJYMRQHOXKOGFEMZQALLGFYRCBVKIERMUPNFJRGLRVMLXGKJNICCFMBRWWHZXGYTENMCTAJOFZWUYNG");

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
    msg.setTimeStamp(0.526046695473);
    msg.setSource(18874U);
    msg.setSourceEntity(78U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(201U);
    msg.op = 231U;
    msg.actions.assign("LHPIGOQJXUKRGHBHF");

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
    msg.setTimeStamp(0.0847221908569);
    msg.setSource(40733U);
    msg.setSourceEntity(204U);
    msg.setDestination(31715U);
    msg.setDestinationEntity(100U);
    msg.actions.assign("WVYZJIITWDHJNTKLXONMOZVGRNVFXLZYKPAYZWMYLKQOGFGLQQAQTOMPFKOJYZHIDGPJTHRLJRVDONZELAEBLEBSMRNQIMEIJKHTCAISDWVMEFXKSKHGBQRXBHTSDUBAQRYNCVUMDCNSCYNHFOXEXGPJFPYZQUCMEASKBCIXBLJSDUUHSHLRACWJZGZNJXKVGWRLFBYXHBFDDPZGVUPSUDOROWTTMGCWXAQEKCCWVFEPUPIAIURUNAIWY");

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
    msg.setTimeStamp(0.225217958186);
    msg.setSource(54705U);
    msg.setSourceEntity(142U);
    msg.setDestination(65082U);
    msg.setDestinationEntity(65U);
    msg.actions.assign("VCIHMBFDZZNECMNEBKQGADTOYAVHTOTUBPBOVPSOKMHZUOTHZNMWXQAPOJZEZQDEAYSGU");

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
    msg.setTimeStamp(0.855954567411);
    msg.setSource(59962U);
    msg.setSourceEntity(246U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("LNZCHOEYTWFGBDWDZFHIUFNZLWVGKQULEQKVZUTNCVUTWFFXFVENAGQEBAQHKKQOMDSWTTCZUJJOERFYEHIGGGGHSJVODYPTSKRQSTXSEMIZLSKJOPIKEJFHHYJCUMRRRXIMUQNSXPGJFAJZBNIGAVAHMOTMWCBNNHIDVAVJZSUFZXYCQMRWUGDMBCBRLNPCBORVIDVMDOJL");

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
    msg.setTimeStamp(0.487562387836);
    msg.setSource(55255U);
    msg.setSourceEntity(65U);
    msg.setDestination(35692U);
    msg.setDestinationEntity(92U);
    msg.button = 81U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.37962815399);
    msg.setSource(7140U);
    msg.setSourceEntity(230U);
    msg.setDestination(18336U);
    msg.setDestinationEntity(114U);
    msg.button = 72U;
    msg.value = 23U;

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
    msg.setTimeStamp(0.37732923707);
    msg.setSource(44363U);
    msg.setSourceEntity(0U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(129U);
    msg.button = 188U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.568202282466);
    msg.setSource(30253U);
    msg.setSourceEntity(97U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(5U);
    msg.op = 159U;
    msg.text.assign("LUQZCJCAEWSRUNOSALHPWRYIBOGUXFBCHWZANVJFRHKDBKSKAMVIYAJJZQEIRSBEESVBRXKNLMMJGTDDIWVDRLTYCIXQWUREGNFONHGOACABVBKEPTXKOKHIYBXVTRVTHDFRBLWNG");

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
    msg.setTimeStamp(0.530548513312);
    msg.setSource(64104U);
    msg.setSourceEntity(168U);
    msg.setDestination(9685U);
    msg.setDestinationEntity(22U);
    msg.op = 139U;
    msg.text.assign("BMEFVYUCTNISYI");

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
    msg.setTimeStamp(0.753022328621);
    msg.setSource(41096U);
    msg.setSourceEntity(194U);
    msg.setDestination(12187U);
    msg.setDestinationEntity(243U);
    msg.op = 65U;
    msg.text.assign("LESIIQJFJGFTTPECYGEVO");

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
    msg.setTimeStamp(0.488270229342);
    msg.setSource(1552U);
    msg.setSourceEntity(210U);
    msg.setDestination(41878U);
    msg.setDestinationEntity(0U);
    msg.op = 72U;
    msg.time_remain = 0.994884583456;
    msg.sched_time = 0.272319011816;

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
    msg.setTimeStamp(0.187599800864);
    msg.setSource(41999U);
    msg.setSourceEntity(110U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(194U);
    msg.op = 244U;
    msg.time_remain = 0.911643878438;
    msg.sched_time = 0.171259878068;

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
    msg.setTimeStamp(0.661290635552);
    msg.setSource(48459U);
    msg.setSourceEntity(181U);
    msg.setDestination(29677U);
    msg.setDestinationEntity(67U);
    msg.op = 165U;
    msg.time_remain = 0.87875843988;
    msg.sched_time = 0.310781367449;

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
    msg.setTimeStamp(0.68520819337);
    msg.setSource(25631U);
    msg.setSourceEntity(170U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(172U);
    msg.name.assign("JIPMUYCFDTVFHSVMIRNAUJXYSCLXQUQKMIEXZXDVFSHPODCIXPIFHSUPPTXQJWKKNJYLHQWPGSYXYGFKDMKRYRLHDO");
    msg.op = 134U;
    msg.sched_time = 0.842340305091;

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
    msg.setTimeStamp(0.993977016239);
    msg.setSource(32226U);
    msg.setSourceEntity(3U);
    msg.setDestination(43925U);
    msg.setDestinationEntity(121U);
    msg.name.assign("LOAMSNNGGRNSMLUJJYCNKFFVWILGROCXCQIQPCTPWZNNITFVABPSZTLXGVFWHPBKOCERTKTHYYXOGXVZLBQIXPRGCGKDUYFPPFLJMZJAASHWZKNJEUUYQXTJRDOMJEIDIQWOTLBHFRAYLR");
    msg.op = 29U;
    msg.sched_time = 0.182976848222;

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
    msg.setTimeStamp(0.858419408934);
    msg.setSource(48012U);
    msg.setSourceEntity(174U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HFJUYSTHTAIFQVERVRHNWNRVGTMRZTXMBIILIHDLNOBOKYPOPCBHFEYHVAFUBFNQWRKEUENDMOIATPBJUYKTBMLLWZBLMGPENAOXPLPCGPJXSVVQQFNWPXJUZSYWYRFZBVMZHZVDYIJUEPYNMSSOIULHXCLZQ");
    msg.op = 112U;
    msg.sched_time = 0.911204228364;

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
    msg.setTimeStamp(0.627804863396);
    msg.setSource(38457U);
    msg.setSourceEntity(10U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.434408304875);
    msg.setSource(27892U);
    msg.setSourceEntity(115U);
    msg.setDestination(36699U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.792470578681);
    msg.setSource(23503U);
    msg.setSourceEntity(145U);
    msg.setDestination(37428U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.470523576211);
    msg.setSource(44517U);
    msg.setSourceEntity(74U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(237U);
    msg.name.assign("VKDQWJIZNHBCLFISMRIFXNCGQJLZWHWJXTRHJVUKXTOTGKUWODYHEBQNTXVUGIJSYTOWKLZWWCZMPCTQZPQAKMFTKQLOMDUVSXIMCHXURTEASAEGYBEGJELGIFYBVFOZLAAPESHMBLVPHWRZFQHCNSMGPAITGEDHNN");
    msg.state = 206U;

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
    msg.setTimeStamp(0.0672144912129);
    msg.setSource(25779U);
    msg.setSourceEntity(118U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(90U);
    msg.name.assign("YMIZAKTSYDTLCPCJLDLPTBHAKIJRAGVUDXHLTJQVJCMHRRKZFUKZUDBQRPIJGUFIZJDCTSAWIZQEDXHHEYOTXEIXNLPOLMMFSVQKAMYICNGWDQIBBXHEAWYCZZJFFWNTMVRLPSDSDOVGXWHFPLGOPUVJESTRCBFKAVNZKYNMVWGRAQSUWXLWHSBXZUQGJ");
    msg.state = 93U;

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
    msg.setTimeStamp(0.61314915246);
    msg.setSource(44793U);
    msg.setSourceEntity(94U);
    msg.setDestination(63353U);
    msg.setDestinationEntity(208U);
    msg.name.assign("NFKWRSZDCGHPLXMYQELKIAHMTHUELQFOWZOD");
    msg.state = 131U;

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
    msg.setTimeStamp(0.050606359001);
    msg.setSource(34962U);
    msg.setSourceEntity(233U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(98U);
    msg.name.assign("XIQRHJVOYOQMILCNKPQQYPMBVXKFYDPMFLYGSHTDOBOUDON");
    msg.value = 132U;

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
    msg.setTimeStamp(0.783879790287);
    msg.setSource(28877U);
    msg.setSourceEntity(105U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(55U);
    msg.name.assign("FYFXBXCNBHGYSXYSCCBHHFUIXRJRUEHJJLIKLILKTPBIPOMIANBFVWQVIOOZEXXSFOOCKEQTORUIJGIDKJXQKZOEQLYBSNPWYBHTMLJUQSTETMQZOSVWJWDNKCZTTSMGHHZUPFDVQCUQLMKZEPNCQHOVNFGRFAXIYDLAAPRRDDNXTZMCGRSELRJDKSGHWWGQCWSRVDDGMYEZJAUPAMNUP");
    msg.value = 55U;

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
    msg.setTimeStamp(0.495275970421);
    msg.setSource(28460U);
    msg.setSourceEntity(97U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(27U);
    msg.name.assign("YLEBQWAEEPYIBLMMBEYDPRGZRVMIKWQUPACWDDWZRHUT");
    msg.value = 73U;

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
    msg.setTimeStamp(0.603644566341);
    msg.setSource(38312U);
    msg.setSourceEntity(84U);
    msg.setDestination(37874U);
    msg.setDestinationEntity(196U);
    msg.name.assign("LUFBWRCZHDNCMNAQLLFBIYDIAVHGWEHAVESZTXFLVADKTXGTWPNIPJILLFSFSBCOXVWQGAHQNPVMDJHUGJIMFWYEZCKOOGJCVPMBSYLVUTOKJESDVSDNUGGRIXACFATDPRRTCHWQKSFNXEJLIXUHMQQTIUO");

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
    msg.setTimeStamp(0.996165916762);
    msg.setSource(49086U);
    msg.setSourceEntity(208U);
    msg.setDestination(64364U);
    msg.setDestinationEntity(69U);
    msg.name.assign("XMVZRTPDPIWGQEEHSOFEQJBWRODVJHLQVIJKFXIGXEJRBRLYNBC");

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
    msg.setTimeStamp(0.653112829356);
    msg.setSource(29986U);
    msg.setSourceEntity(145U);
    msg.setDestination(8702U);
    msg.setDestinationEntity(83U);
    msg.name.assign("EFMHCRNDYTTXPLYMKDFLMRGPXBVXCKXBBGHJITUPZEAYCBEWQFSBEYNOJKDWXIIW");

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
    msg.setTimeStamp(0.725546175216);
    msg.setSource(13186U);
    msg.setSourceEntity(25U);
    msg.setDestination(45661U);
    msg.setDestinationEntity(105U);
    msg.name.assign("TXFKHDKOJXAMRMEGVFRIFVGRVUAZZAVBXCYDAJTADPMXUHBKVRPWKYOUMFYPHLGBYMLWVCZOLQXURJIKWCBOWUEULBHOSNLGCFYBQICPXGGFQZAJHYSSVEVWAUYCZDNSENZTJIOLAENJDTUSDMCUHLQOWRIIDSJJFQLNOXJZVNBWTHTCYPBOXGSLBXKTEAAFPJZNSPDQKPGWX");
    msg.value = 223U;

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
    msg.setTimeStamp(0.796009896123);
    msg.setSource(54038U);
    msg.setSourceEntity(180U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(150U);
    msg.name.assign("DHBCUXOWDISFTNSXWCRPAYFFRTLGZTZXNITGKIGUDJUWXYNVTKAUFXCAKOWDPNNFJISDFYUKEAUGVUKZZMGZPFPROVCQLHGNOICERISSMYTIHDMKETJCKAJZVVOGAKFMPSJBSUHYIAEMYVMQCJBVNWBLMESBFYXEOHNIEPHENGJLQPGFRQRJQHSQSCD");
    msg.value = 153U;

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
    msg.setTimeStamp(0.158363448415);
    msg.setSource(63382U);
    msg.setSourceEntity(201U);
    msg.setDestination(539U);
    msg.setDestinationEntity(237U);
    msg.name.assign("MMNSNDNELIISADXEVNYHRJJMQEUQHOWXTWYZJPXSDRUOIVQXDWRQLCAKFKJXPSHCCUFZYTCACKAQLCXUS");
    msg.value = 217U;

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
    msg.setTimeStamp(0.582385860002);
    msg.setSource(16100U);
    msg.setSourceEntity(91U);
    msg.setDestination(60867U);
    msg.setDestinationEntity(115U);
    msg.id = 125U;
    msg.period = 1875972764U;
    msg.duty_cycle = 3860759049U;

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
    msg.setTimeStamp(0.000168780837307);
    msg.setSource(62986U);
    msg.setSourceEntity(181U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(155U);
    msg.id = 243U;
    msg.period = 1850784557U;
    msg.duty_cycle = 2473055993U;

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
    msg.setTimeStamp(0.376619909693);
    msg.setSource(60781U);
    msg.setSourceEntity(95U);
    msg.setDestination(41760U);
    msg.setDestinationEntity(252U);
    msg.id = 158U;
    msg.period = 2815645212U;
    msg.duty_cycle = 4180833046U;

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
    msg.setTimeStamp(0.123402445911);
    msg.setSource(30856U);
    msg.setSourceEntity(96U);
    msg.setDestination(62006U);
    msg.setDestinationEntity(103U);
    msg.id = 188U;
    msg.period = 1821517467U;
    msg.duty_cycle = 1791556191U;

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
    msg.setTimeStamp(0.684427358138);
    msg.setSource(46605U);
    msg.setSourceEntity(179U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(238U);
    msg.id = 131U;
    msg.period = 2216015731U;
    msg.duty_cycle = 1353116987U;

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
    msg.setTimeStamp(0.157802757021);
    msg.setSource(51087U);
    msg.setSourceEntity(148U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(199U);
    msg.id = 73U;
    msg.period = 3386703662U;
    msg.duty_cycle = 986332775U;

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
    msg.setTimeStamp(0.922620717564);
    msg.setSource(55760U);
    msg.setSourceEntity(51U);
    msg.setDestination(61449U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.978348824465;
    msg.lon = 0.066411300552;
    msg.height = 0.211710016042;
    msg.x = 0.0348008600826;
    msg.y = 0.727764106726;
    msg.z = 0.799073873053;
    msg.phi = 0.106738431662;
    msg.theta = 0.093260522821;
    msg.psi = 0.772030530352;
    msg.u = 0.762410311524;
    msg.v = 0.120229871403;
    msg.w = 0.388184101965;
    msg.vx = 0.861896556947;
    msg.vy = 0.828283060921;
    msg.vz = 0.92759374475;
    msg.p = 0.0122823372814;
    msg.q = 0.489817825771;
    msg.r = 0.842049833577;
    msg.depth = 0.0865739536436;
    msg.alt = 0.296290131959;

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
    msg.setTimeStamp(0.811784456697);
    msg.setSource(26885U);
    msg.setSourceEntity(83U);
    msg.setDestination(52542U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.639708421238;
    msg.lon = 0.414740644847;
    msg.height = 0.987553328264;
    msg.x = 0.526083748492;
    msg.y = 0.226665877379;
    msg.z = 0.739112753546;
    msg.phi = 0.468562890658;
    msg.theta = 0.907701200167;
    msg.psi = 0.454597333458;
    msg.u = 0.307373470408;
    msg.v = 0.229995153533;
    msg.w = 0.604583581822;
    msg.vx = 0.530083069524;
    msg.vy = 0.414086852926;
    msg.vz = 0.866521020784;
    msg.p = 0.755999759493;
    msg.q = 0.621242916467;
    msg.r = 0.233642730082;
    msg.depth = 0.295851466257;
    msg.alt = 0.217115383721;

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
    msg.setTimeStamp(0.76361769091);
    msg.setSource(51304U);
    msg.setSourceEntity(236U);
    msg.setDestination(18874U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.503983230829;
    msg.lon = 0.0467116436328;
    msg.height = 0.667875071292;
    msg.x = 0.249694141324;
    msg.y = 0.604444612207;
    msg.z = 0.755184028356;
    msg.phi = 0.257018024246;
    msg.theta = 0.0138697053626;
    msg.psi = 0.613444570563;
    msg.u = 0.95497274398;
    msg.v = 0.440135617453;
    msg.w = 0.349790505528;
    msg.vx = 0.208700330592;
    msg.vy = 0.770516577825;
    msg.vz = 0.4552995458;
    msg.p = 0.0109136001269;
    msg.q = 0.298014833608;
    msg.r = 0.0429618361125;
    msg.depth = 0.887256984623;
    msg.alt = 0.478264228299;

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
    msg.setTimeStamp(0.205923045475);
    msg.setSource(3963U);
    msg.setSourceEntity(211U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(112U);
    msg.x = 0.386970294438;
    msg.y = 0.131384229968;
    msg.z = 0.499363152647;

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
    msg.setTimeStamp(0.0636226756915);
    msg.setSource(19021U);
    msg.setSourceEntity(0U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(100U);
    msg.x = 0.890634208031;
    msg.y = 0.0722854455937;
    msg.z = 0.0875824944357;

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
    msg.setTimeStamp(0.712598559247);
    msg.setSource(50402U);
    msg.setSourceEntity(55U);
    msg.setDestination(56783U);
    msg.setDestinationEntity(175U);
    msg.x = 0.633499156737;
    msg.y = 0.737061799464;
    msg.z = 0.690046215372;

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
    msg.setTimeStamp(0.145876495747);
    msg.setSource(8307U);
    msg.setSourceEntity(5U);
    msg.setDestination(65066U);
    msg.setDestinationEntity(206U);
    msg.value = 0.175976987951;

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
    msg.setTimeStamp(0.249826348026);
    msg.setSource(10688U);
    msg.setSourceEntity(29U);
    msg.setDestination(27826U);
    msg.setDestinationEntity(221U);
    msg.value = 0.590237435214;

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
    msg.setTimeStamp(0.519392750403);
    msg.setSource(24854U);
    msg.setSourceEntity(13U);
    msg.setDestination(60895U);
    msg.setDestinationEntity(212U);
    msg.value = 0.713252789033;

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
    msg.setTimeStamp(0.663339481054);
    msg.setSource(60201U);
    msg.setSourceEntity(75U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0119220788859;

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
    msg.setTimeStamp(0.673054060282);
    msg.setSource(1409U);
    msg.setSourceEntity(21U);
    msg.setDestination(44415U);
    msg.setDestinationEntity(235U);
    msg.value = 0.369824808661;

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
    msg.setTimeStamp(0.74275403955);
    msg.setSource(783U);
    msg.setSourceEntity(59U);
    msg.setDestination(62874U);
    msg.setDestinationEntity(40U);
    msg.value = 0.718059350017;

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
    msg.setTimeStamp(0.543832009251);
    msg.setSource(15238U);
    msg.setSourceEntity(98U);
    msg.setDestination(64614U);
    msg.setDestinationEntity(189U);
    msg.x = 0.746654524534;
    msg.y = 0.906675394468;
    msg.z = 0.904850817083;
    msg.phi = 0.582734864612;
    msg.theta = 0.665329564062;
    msg.psi = 0.124434988179;
    msg.p = 0.513034269606;
    msg.q = 0.484836186913;
    msg.r = 0.105240391258;
    msg.u = 0.739322678705;
    msg.v = 0.0719832905807;
    msg.w = 0.774790531662;
    msg.bias_psi = 0.332999030959;
    msg.bias_r = 0.184057650152;

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
    msg.setTimeStamp(0.779105000086);
    msg.setSource(20677U);
    msg.setSourceEntity(97U);
    msg.setDestination(49685U);
    msg.setDestinationEntity(86U);
    msg.x = 0.844195853902;
    msg.y = 0.67890729635;
    msg.z = 0.00851674479184;
    msg.phi = 0.148039807056;
    msg.theta = 0.120154003998;
    msg.psi = 0.505213762793;
    msg.p = 0.143899711991;
    msg.q = 0.688534877157;
    msg.r = 0.614914259893;
    msg.u = 0.725598253101;
    msg.v = 0.537886002109;
    msg.w = 0.998061904104;
    msg.bias_psi = 0.00106453032596;
    msg.bias_r = 0.206709160606;

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
    msg.setTimeStamp(0.181110799225);
    msg.setSource(20891U);
    msg.setSourceEntity(167U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(40U);
    msg.x = 0.975206147106;
    msg.y = 0.459556777187;
    msg.z = 0.341020307799;
    msg.phi = 0.763455053148;
    msg.theta = 0.247737351479;
    msg.psi = 0.414498377943;
    msg.p = 0.826067692782;
    msg.q = 0.873981636726;
    msg.r = 0.596751076202;
    msg.u = 0.227173661814;
    msg.v = 0.112577734849;
    msg.w = 0.694218884549;
    msg.bias_psi = 0.363813436127;
    msg.bias_r = 0.415833704198;

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
    msg.setTimeStamp(0.242685730811);
    msg.setSource(21537U);
    msg.setSourceEntity(107U);
    msg.setDestination(28975U);
    msg.setDestinationEntity(113U);
    msg.bias_psi = 0.743978505599;
    msg.bias_r = 0.691238369379;
    msg.cog = 0.216321203853;
    msg.cyaw = 0.883470366407;
    msg.lbl_rej_level = 0.310167469508;
    msg.gps_rej_level = 0.601612882715;
    msg.custom_x = 0.625239972407;
    msg.custom_y = 0.775623380533;
    msg.custom_z = 0.317715078825;

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
    msg.setTimeStamp(0.281717761134);
    msg.setSource(33325U);
    msg.setSourceEntity(163U);
    msg.setDestination(49992U);
    msg.setDestinationEntity(75U);
    msg.bias_psi = 0.438687278977;
    msg.bias_r = 0.414918769076;
    msg.cog = 0.617850988483;
    msg.cyaw = 0.0500701242815;
    msg.lbl_rej_level = 0.0509278510163;
    msg.gps_rej_level = 0.421565796054;
    msg.custom_x = 0.505741224881;
    msg.custom_y = 0.154927188814;
    msg.custom_z = 0.686354375399;

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
    msg.setTimeStamp(0.789163006056);
    msg.setSource(19310U);
    msg.setSourceEntity(192U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(227U);
    msg.bias_psi = 0.0853718358056;
    msg.bias_r = 0.452030620821;
    msg.cog = 0.133996469022;
    msg.cyaw = 0.609389596848;
    msg.lbl_rej_level = 0.925553658788;
    msg.gps_rej_level = 0.303423556793;
    msg.custom_x = 0.980261751535;
    msg.custom_y = 0.183552782576;
    msg.custom_z = 0.706333648872;

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
    msg.setTimeStamp(0.105227053042);
    msg.setSource(37927U);
    msg.setSourceEntity(15U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(73U);
    msg.utc_time = 0.936515849158;
    msg.reason = 129U;

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
    msg.setTimeStamp(0.505113822316);
    msg.setSource(771U);
    msg.setSourceEntity(79U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(254U);
    msg.utc_time = 0.62569095727;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.635833236669);
    msg.setSource(44105U);
    msg.setSourceEntity(180U);
    msg.setDestination(40002U);
    msg.setDestinationEntity(167U);
    msg.utc_time = 0.80180127723;
    msg.reason = 49U;

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
    msg.setTimeStamp(0.187761108769);
    msg.setSource(56250U);
    msg.setSourceEntity(191U);
    msg.setDestination(52219U);
    msg.setDestinationEntity(175U);
    msg.id = 55U;
    msg.range = 0.0887544617858;
    msg.acceptance = 158U;

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
    msg.setTimeStamp(0.763995484615);
    msg.setSource(45416U);
    msg.setSourceEntity(238U);
    msg.setDestination(13008U);
    msg.setDestinationEntity(151U);
    msg.id = 20U;
    msg.range = 0.545053289706;
    msg.acceptance = 51U;

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
    msg.setTimeStamp(0.151924253561);
    msg.setSource(1873U);
    msg.setSourceEntity(237U);
    msg.setDestination(10832U);
    msg.setDestinationEntity(76U);
    msg.id = 48U;
    msg.range = 0.3697715567;
    msg.acceptance = 45U;

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
    msg.setTimeStamp(0.514482225598);
    msg.setSource(2617U);
    msg.setSourceEntity(217U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(97U);
    msg.type = 110U;
    msg.reason = 175U;
    msg.value = 0.925077401641;
    msg.timestep = 0.521102375357;

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
    msg.setTimeStamp(0.458457582522);
    msg.setSource(50287U);
    msg.setSourceEntity(87U);
    msg.setDestination(971U);
    msg.setDestinationEntity(36U);
    msg.type = 130U;
    msg.reason = 149U;
    msg.value = 0.672101524507;
    msg.timestep = 0.467468551465;

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
    msg.setTimeStamp(0.253159454051);
    msg.setSource(38498U);
    msg.setSourceEntity(6U);
    msg.setDestination(36320U);
    msg.setDestinationEntity(220U);
    msg.type = 178U;
    msg.reason = 86U;
    msg.value = 0.183398081881;
    msg.timestep = 0.40991300937;

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
    msg.setTimeStamp(0.817323141035);
    msg.setSource(20004U);
    msg.setSourceEntity(254U);
    msg.setDestination(63901U);
    msg.setDestinationEntity(19U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZGEZIABAKMENIGRGJSLNWJULOTSTNEIQPBTKYBYTEGPFUACUMCWHFGQJKRFPSFHVDRZXJZKIOQSVGTICVVLLGAPTFYVQYECHOXFZOHLHGKARVNXSWYRMBJAELKCWEAUWTHUOYLEZJRBNIPPHYQO");
    tmp_msg_0.lat = 0.66250597393;
    tmp_msg_0.lon = 0.0299987742974;
    tmp_msg_0.depth = 0.284417423234;
    tmp_msg_0.query_channel = 123U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 167U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.258511753083;
    msg.y = 0.0280817259152;
    msg.var_x = 0.634153394213;
    msg.var_y = 0.481084229422;
    msg.distance = 0.504683777267;

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
    msg.setTimeStamp(0.291491092385);
    msg.setSource(37033U);
    msg.setSourceEntity(198U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(236U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZYCNCZXSQQWDVUQMIVZOBJZCPTEBFGOBTRBKTPZMHYJWVBJCFOHPHPXRXRDFNJVUZQKECYDOWWODIAYHZJFGCISEVEXSTMNDKKULRRANFCT");
    tmp_msg_0.lat = 0.176269813576;
    tmp_msg_0.lon = 0.357201765373;
    tmp_msg_0.depth = 0.949847956953;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 158U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.857210499738;
    msg.y = 0.783425042229;
    msg.var_x = 0.35366967723;
    msg.var_y = 0.134875346966;
    msg.distance = 0.220056854816;

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
    msg.setTimeStamp(0.621122951112);
    msg.setSource(42555U);
    msg.setSourceEntity(127U);
    msg.setDestination(40941U);
    msg.setDestinationEntity(76U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FEVLPWSZINTMKYTWGHIKCHKKIXOEQXWYAJWISJXDOQMQYFMNAGUEBYSVRVJQUKKRXCZLIKBNAXNJCDVSYOGKFUZSPGYHWCEXHMESLCFATITZOHVGZYIKLJSEINRALUPRABECD");
    tmp_msg_0.lat = 0.79025504085;
    tmp_msg_0.lon = 0.834323873514;
    tmp_msg_0.depth = 0.881111804352;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 230U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.488851746765;
    msg.y = 0.543278707958;
    msg.var_x = 0.940350978291;
    msg.var_y = 0.616723759269;
    msg.distance = 0.495356070526;

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
    msg.setTimeStamp(0.435120849752);
    msg.setSource(53759U);
    msg.setSourceEntity(144U);
    msg.setDestination(52608U);
    msg.setDestinationEntity(0U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.772271650676);
    msg.setSource(33206U);
    msg.setSourceEntity(134U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(4U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.843097914499);
    msg.setSource(58037U);
    msg.setSourceEntity(4U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(235U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.377792008172);
    msg.setSource(46026U);
    msg.setSourceEntity(212U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(140U);
    msg.x = 0.0103101860993;
    msg.y = 0.800374497197;
    msg.z = 0.604295279948;

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
    msg.setTimeStamp(0.116474145906);
    msg.setSource(61489U);
    msg.setSourceEntity(158U);
    msg.setDestination(1969U);
    msg.setDestinationEntity(44U);
    msg.x = 0.251168072319;
    msg.y = 0.975313362097;
    msg.z = 0.667782244858;

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
    msg.setTimeStamp(0.318191694739);
    msg.setSource(36589U);
    msg.setSourceEntity(52U);
    msg.setDestination(7712U);
    msg.setDestinationEntity(47U);
    msg.x = 0.150847272592;
    msg.y = 0.659045718106;
    msg.z = 0.185321592565;

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
    msg.setTimeStamp(0.83475787776);
    msg.setSource(38669U);
    msg.setSourceEntity(37U);
    msg.setDestination(21599U);
    msg.setDestinationEntity(80U);
    msg.va = 0.352307565574;
    msg.aoa = 0.297349120316;
    msg.ssa = 0.180538482936;

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
    msg.setTimeStamp(0.426627789638);
    msg.setSource(22018U);
    msg.setSourceEntity(220U);
    msg.setDestination(909U);
    msg.setDestinationEntity(26U);
    msg.va = 0.355204118536;
    msg.aoa = 0.553201708592;
    msg.ssa = 0.999028987428;

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
    msg.setTimeStamp(0.191190742846);
    msg.setSource(2116U);
    msg.setSourceEntity(254U);
    msg.setDestination(65289U);
    msg.setDestinationEntity(3U);
    msg.va = 0.898277955318;
    msg.aoa = 0.953179981287;
    msg.ssa = 0.554546249741;

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
    msg.setTimeStamp(0.375177396227);
    msg.setSource(35022U);
    msg.setSourceEntity(79U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(232U);
    msg.value = 0.526188678679;

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
    msg.setTimeStamp(0.415463116656);
    msg.setSource(22863U);
    msg.setSourceEntity(144U);
    msg.setDestination(6035U);
    msg.setDestinationEntity(191U);
    msg.value = 0.843074777773;

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
    msg.setTimeStamp(0.768389982788);
    msg.setSource(932U);
    msg.setSourceEntity(219U);
    msg.setDestination(44042U);
    msg.setDestinationEntity(248U);
    msg.value = 0.395264033709;

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
    msg.setTimeStamp(0.190518097689);
    msg.setSource(14807U);
    msg.setSourceEntity(242U);
    msg.setDestination(48811U);
    msg.setDestinationEntity(131U);
    msg.value = 0.126598874244;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.320583636308);
    msg.setSource(28540U);
    msg.setSourceEntity(7U);
    msg.setDestination(46134U);
    msg.setDestinationEntity(181U);
    msg.value = 0.819407969122;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.435168841361);
    msg.setSource(47702U);
    msg.setSourceEntity(115U);
    msg.setDestination(23720U);
    msg.setDestinationEntity(240U);
    msg.value = 0.369923679583;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.654637803791);
    msg.setSource(36530U);
    msg.setSourceEntity(159U);
    msg.setDestination(40609U);
    msg.setDestinationEntity(204U);
    msg.value = 0.327330482165;
    msg.speed_units = 91U;

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
    msg.setTimeStamp(0.366020478158);
    msg.setSource(29830U);
    msg.setSourceEntity(79U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(83U);
    msg.value = 0.772789732943;
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
    msg.setTimeStamp(0.773929431275);
    msg.setSource(35612U);
    msg.setSourceEntity(178U);
    msg.setDestination(14586U);
    msg.setDestinationEntity(188U);
    msg.value = 0.862208440767;
    msg.speed_units = 46U;

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
    msg.setTimeStamp(0.752697111892);
    msg.setSource(60562U);
    msg.setSourceEntity(155U);
    msg.setDestination(60668U);
    msg.setDestinationEntity(23U);
    msg.value = 0.900166559779;

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
    msg.setTimeStamp(0.82122633828);
    msg.setSource(63253U);
    msg.setSourceEntity(92U);
    msg.setDestination(10142U);
    msg.setDestinationEntity(51U);
    msg.value = 0.819807176429;

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
    msg.setTimeStamp(0.210365126873);
    msg.setSource(56436U);
    msg.setSourceEntity(40U);
    msg.setDestination(45961U);
    msg.setDestinationEntity(71U);
    msg.value = 0.334776615063;

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
    msg.setTimeStamp(0.974647982446);
    msg.setSource(43915U);
    msg.setSourceEntity(253U);
    msg.setDestination(58965U);
    msg.setDestinationEntity(247U);
    msg.value = 0.759699990064;

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
    msg.setTimeStamp(0.460474862587);
    msg.setSource(47067U);
    msg.setSourceEntity(219U);
    msg.setDestination(18197U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0676719845973;

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
    msg.setTimeStamp(0.00771694171199);
    msg.setSource(63642U);
    msg.setSourceEntity(32U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(188U);
    msg.value = 0.808973122912;

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
    msg.setTimeStamp(0.489315415851);
    msg.setSource(47562U);
    msg.setSourceEntity(132U);
    msg.setDestination(32944U);
    msg.setDestinationEntity(179U);
    msg.value = 0.515959452427;

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
    msg.setTimeStamp(0.841350845782);
    msg.setSource(17850U);
    msg.setSourceEntity(117U);
    msg.setDestination(29168U);
    msg.setDestinationEntity(141U);
    msg.value = 0.181106615762;

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
    msg.setTimeStamp(0.480678496059);
    msg.setSource(40941U);
    msg.setSourceEntity(184U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(172U);
    msg.value = 0.270677440058;

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
    msg.setTimeStamp(0.13307547137);
    msg.setSource(38625U);
    msg.setSourceEntity(48U);
    msg.setDestination(11925U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 2870167540U;
    msg.start_lat = 0.12233977744;
    msg.start_lon = 0.46603154107;
    msg.start_z = 0.878745151444;
    msg.start_z_units = 145U;
    msg.end_lat = 0.464274038849;
    msg.end_lon = 0.770291975692;
    msg.end_z = 0.371103868194;
    msg.end_z_units = 13U;
    msg.speed = 0.771782493824;
    msg.speed_units = 118U;
    msg.lradius = 0.253067834112;
    msg.flags = 33U;

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
    msg.setTimeStamp(0.989551481073);
    msg.setSource(60907U);
    msg.setSourceEntity(150U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(157U);
    msg.path_ref = 3950434712U;
    msg.start_lat = 0.200499543741;
    msg.start_lon = 0.179595309142;
    msg.start_z = 0.573698684929;
    msg.start_z_units = 235U;
    msg.end_lat = 0.426205754939;
    msg.end_lon = 0.614386498939;
    msg.end_z = 0.936407239301;
    msg.end_z_units = 18U;
    msg.speed = 0.00702289333345;
    msg.speed_units = 207U;
    msg.lradius = 0.299062948825;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.958952466306);
    msg.setSource(40775U);
    msg.setSourceEntity(144U);
    msg.setDestination(45522U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 750311124U;
    msg.start_lat = 0.1631332009;
    msg.start_lon = 0.851159577342;
    msg.start_z = 0.0558161812676;
    msg.start_z_units = 83U;
    msg.end_lat = 0.844984305189;
    msg.end_lon = 0.156110172104;
    msg.end_z = 0.0804743846384;
    msg.end_z_units = 150U;
    msg.speed = 0.814810178848;
    msg.speed_units = 69U;
    msg.lradius = 0.0555801453491;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.833478262903);
    msg.setSource(44107U);
    msg.setSourceEntity(32U);
    msg.setDestination(25025U);
    msg.setDestinationEntity(147U);
    msg.x = 0.798694879429;
    msg.y = 0.879185662956;
    msg.z = 0.599244251143;
    msg.k = 0.25220870751;
    msg.m = 0.40229720049;
    msg.n = 0.389474419205;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.418299160331);
    msg.setSource(23290U);
    msg.setSourceEntity(237U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(250U);
    msg.x = 0.115592876912;
    msg.y = 0.794616422028;
    msg.z = 0.0211404735003;
    msg.k = 0.99006423559;
    msg.m = 0.782855532769;
    msg.n = 0.0152061839658;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.0832185691175);
    msg.setSource(20362U);
    msg.setSourceEntity(72U);
    msg.setDestination(8516U);
    msg.setDestinationEntity(221U);
    msg.x = 0.839995842428;
    msg.y = 0.37578339067;
    msg.z = 0.911833011099;
    msg.k = 0.434974972905;
    msg.m = 0.00721859180732;
    msg.n = 0.39813203454;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.574548374253);
    msg.setSource(12742U);
    msg.setSourceEntity(54U);
    msg.setDestination(27130U);
    msg.setDestinationEntity(82U);
    msg.value = 0.207254784367;

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
    msg.setTimeStamp(0.679682383675);
    msg.setSource(17216U);
    msg.setSourceEntity(112U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(84U);
    msg.value = 0.949040724862;

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
    msg.setTimeStamp(0.130404969835);
    msg.setSource(56510U);
    msg.setSourceEntity(93U);
    msg.setDestination(63085U);
    msg.setDestinationEntity(168U);
    msg.value = 0.308252419266;

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
    msg.setTimeStamp(0.774485148203);
    msg.setSource(33385U);
    msg.setSourceEntity(8U);
    msg.setDestination(7135U);
    msg.setDestinationEntity(70U);
    msg.u = 0.299329585419;
    msg.v = 0.0930655390369;
    msg.w = 0.895828713612;
    msg.p = 0.101381044497;
    msg.q = 0.262306780092;
    msg.r = 0.686328507913;
    msg.flags = 240U;

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
    msg.setTimeStamp(0.584513279412);
    msg.setSource(24567U);
    msg.setSourceEntity(92U);
    msg.setDestination(60280U);
    msg.setDestinationEntity(71U);
    msg.u = 0.0634431611042;
    msg.v = 0.235982864435;
    msg.w = 0.487875342489;
    msg.p = 0.534406864803;
    msg.q = 0.827591333814;
    msg.r = 0.255411391839;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.658839262482);
    msg.setSource(18674U);
    msg.setSourceEntity(254U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(50U);
    msg.u = 0.927239257711;
    msg.v = 0.8290870089;
    msg.w = 0.598895094758;
    msg.p = 0.199928736026;
    msg.q = 0.202206176087;
    msg.r = 0.855568709868;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.178912187001);
    msg.setSource(26295U);
    msg.setSourceEntity(234U);
    msg.setDestination(50026U);
    msg.setDestinationEntity(207U);
    msg.path_ref = 2683506292U;
    msg.start_lat = 0.824538846687;
    msg.start_lon = 0.448995851958;
    msg.start_z = 0.151618350471;
    msg.start_z_units = 59U;
    msg.end_lat = 0.881622901592;
    msg.end_lon = 0.0745763566554;
    msg.end_z = 0.109821567181;
    msg.end_z_units = 86U;
    msg.lradius = 0.800215793066;
    msg.flags = 183U;
    msg.x = 0.613390178972;
    msg.y = 0.610853325358;
    msg.z = 0.971853286229;
    msg.vx = 0.264886617478;
    msg.vy = 0.393708740069;
    msg.vz = 0.82114153615;
    msg.course_error = 0.738690207445;
    msg.eta = 22350U;

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
    msg.setTimeStamp(0.422075624293);
    msg.setSource(60312U);
    msg.setSourceEntity(16U);
    msg.setDestination(52359U);
    msg.setDestinationEntity(53U);
    msg.path_ref = 833203344U;
    msg.start_lat = 0.637076550949;
    msg.start_lon = 0.0313682190285;
    msg.start_z = 0.515385117892;
    msg.start_z_units = 83U;
    msg.end_lat = 0.369744908835;
    msg.end_lon = 0.60417807731;
    msg.end_z = 0.508640570927;
    msg.end_z_units = 71U;
    msg.lradius = 0.780897368413;
    msg.flags = 127U;
    msg.x = 0.766732381364;
    msg.y = 0.101667911313;
    msg.z = 0.506097664178;
    msg.vx = 0.939961578515;
    msg.vy = 0.381508750082;
    msg.vz = 0.378503157689;
    msg.course_error = 0.881718581911;
    msg.eta = 30352U;

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
    msg.setTimeStamp(0.155528463657);
    msg.setSource(50482U);
    msg.setSourceEntity(184U);
    msg.setDestination(2310U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 4079644810U;
    msg.start_lat = 0.86349855612;
    msg.start_lon = 0.604242729604;
    msg.start_z = 0.800176196762;
    msg.start_z_units = 164U;
    msg.end_lat = 0.422886579114;
    msg.end_lon = 0.00354547963723;
    msg.end_z = 0.914013799048;
    msg.end_z_units = 250U;
    msg.lradius = 0.186681236723;
    msg.flags = 178U;
    msg.x = 0.381038835418;
    msg.y = 0.737429525667;
    msg.z = 0.735405990816;
    msg.vx = 0.526201768301;
    msg.vy = 0.766185551091;
    msg.vz = 0.252527437994;
    msg.course_error = 0.469852793299;
    msg.eta = 28387U;

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
    msg.setTimeStamp(0.359222531989);
    msg.setSource(54653U);
    msg.setSourceEntity(232U);
    msg.setDestination(40304U);
    msg.setDestinationEntity(83U);
    msg.k = 0.946508386282;
    msg.m = 0.562477277332;
    msg.n = 0.664471241481;

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
    msg.setTimeStamp(0.692425313972);
    msg.setSource(34857U);
    msg.setSourceEntity(228U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(248U);
    msg.k = 0.295347859905;
    msg.m = 0.428304255484;
    msg.n = 0.839233160218;

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
    msg.setTimeStamp(0.213238465123);
    msg.setSource(28400U);
    msg.setSourceEntity(111U);
    msg.setDestination(13699U);
    msg.setDestinationEntity(122U);
    msg.k = 0.558823674636;
    msg.m = 0.755152729633;
    msg.n = 0.0879967052229;

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
    msg.setTimeStamp(0.0104078082297);
    msg.setSource(10644U);
    msg.setSourceEntity(7U);
    msg.setDestination(11186U);
    msg.setDestinationEntity(94U);
    msg.p = 0.214705466254;
    msg.i = 0.659849067639;
    msg.d = 0.489977644775;
    msg.a = 0.829549040186;

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
    msg.setTimeStamp(0.858266122776);
    msg.setSource(426U);
    msg.setSourceEntity(240U);
    msg.setDestination(26543U);
    msg.setDestinationEntity(69U);
    msg.p = 0.571850008068;
    msg.i = 0.548691142692;
    msg.d = 0.0434912406304;
    msg.a = 0.273492415673;

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
    msg.setTimeStamp(0.862754479389);
    msg.setSource(2916U);
    msg.setSourceEntity(42U);
    msg.setDestination(65244U);
    msg.setDestinationEntity(228U);
    msg.p = 0.856518291344;
    msg.i = 0.807249011447;
    msg.d = 0.0155884143456;
    msg.a = 0.806138332387;

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
    msg.setTimeStamp(0.373285138915);
    msg.setSource(5734U);
    msg.setSourceEntity(71U);
    msg.setDestination(53656U);
    msg.setDestinationEntity(43U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.809675227703);
    msg.setSource(43221U);
    msg.setSourceEntity(50U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(46U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.18288052763);
    msg.setSource(16832U);
    msg.setSourceEntity(229U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(84U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.417682417384);
    msg.setSource(17535U);
    msg.setSourceEntity(179U);
    msg.setDestination(50582U);
    msg.setDestinationEntity(195U);
    msg.x = 0.249323942743;
    msg.y = 0.388716428392;
    msg.z = 0.992136010937;
    msg.vx = 0.972818129889;
    msg.vy = 0.53134283505;
    msg.vz = 0.700778960051;
    msg.ax = 0.823535207868;
    msg.ay = 0.518080330074;
    msg.az = 0.740508065069;
    msg.flags = 33146U;

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
    msg.setTimeStamp(0.193669767637);
    msg.setSource(57015U);
    msg.setSourceEntity(164U);
    msg.setDestination(13U);
    msg.setDestinationEntity(81U);
    msg.x = 0.815650890158;
    msg.y = 0.518100111963;
    msg.z = 0.459474625532;
    msg.vx = 0.899420379645;
    msg.vy = 0.277635578814;
    msg.vz = 0.576605937136;
    msg.ax = 0.244059621685;
    msg.ay = 0.975378670926;
    msg.az = 0.565076465834;
    msg.flags = 24565U;

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
    msg.setTimeStamp(0.520319665701);
    msg.setSource(50042U);
    msg.setSourceEntity(248U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(219U);
    msg.x = 0.590979945383;
    msg.y = 0.377892021479;
    msg.z = 0.0102873690436;
    msg.vx = 0.163068405387;
    msg.vy = 0.686163325581;
    msg.vz = 0.346685599797;
    msg.ax = 0.791640062862;
    msg.ay = 0.0170141776181;
    msg.az = 0.263878218021;
    msg.flags = 6165U;

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
    msg.setTimeStamp(0.776492585363);
    msg.setSource(8163U);
    msg.setSourceEntity(125U);
    msg.setDestination(3624U);
    msg.setDestinationEntity(106U);
    msg.value = 0.746552814024;

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
    msg.setTimeStamp(0.760942222793);
    msg.setSource(42078U);
    msg.setSourceEntity(159U);
    msg.setDestination(32583U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0249243319363;

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
    msg.setTimeStamp(0.386612366613);
    msg.setSource(15202U);
    msg.setSourceEntity(248U);
    msg.setDestination(30680U);
    msg.setDestinationEntity(110U);
    msg.value = 0.881129629677;

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
    msg.setTimeStamp(0.819718193376);
    msg.setSource(20017U);
    msg.setSourceEntity(204U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(7U);
    msg.timeout = 28375U;
    msg.lat = 0.813393081277;
    msg.lon = 0.482128409686;
    msg.z = 0.534198178207;
    msg.z_units = 5U;
    msg.speed = 0.80087211259;
    msg.speed_units = 114U;
    msg.roll = 0.735060242241;
    msg.pitch = 0.229994392874;
    msg.yaw = 0.215644081054;
    msg.custom.assign("SIDFLEQIMRMWNVKMFLS");

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
    msg.setTimeStamp(0.668243533149);
    msg.setSource(40262U);
    msg.setSourceEntity(152U);
    msg.setDestination(63107U);
    msg.setDestinationEntity(237U);
    msg.timeout = 10527U;
    msg.lat = 0.0146833147708;
    msg.lon = 0.508559102819;
    msg.z = 0.144420935249;
    msg.z_units = 124U;
    msg.speed = 0.813940751133;
    msg.speed_units = 140U;
    msg.roll = 0.742793383201;
    msg.pitch = 0.420129570712;
    msg.yaw = 0.778744161397;
    msg.custom.assign("QCMEPVFMXFXOFHGPRJLVOTAOACULANGSCNMNTDSRRHFREJKPF");

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
    msg.setTimeStamp(0.0315633022811);
    msg.setSource(56222U);
    msg.setSourceEntity(227U);
    msg.setDestination(31067U);
    msg.setDestinationEntity(136U);
    msg.timeout = 53754U;
    msg.lat = 0.71577722736;
    msg.lon = 0.539169492212;
    msg.z = 0.00383292664739;
    msg.z_units = 80U;
    msg.speed = 0.680448786291;
    msg.speed_units = 225U;
    msg.roll = 0.694807227863;
    msg.pitch = 0.572210359321;
    msg.yaw = 0.8274277495;
    msg.custom.assign("RXAWGJNDJCBYRUKOUODJGRKMPHNKYZSFVSOXHYFXMLEJTLFUOSLCXWZDHWJQMRSWRZBE");

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
    msg.setTimeStamp(0.456013214655);
    msg.setSource(36247U);
    msg.setSourceEntity(116U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(221U);
    msg.timeout = 57427U;
    msg.lat = 0.994076182733;
    msg.lon = 0.185923916501;
    msg.z = 0.447550982547;
    msg.z_units = 50U;
    msg.speed = 0.490593484605;
    msg.speed_units = 141U;
    msg.duration = 27980U;
    msg.radius = 0.315336135927;
    msg.flags = 175U;
    msg.custom.assign("LFFCWHXLPPDKKICMFWPHXWJUTBBREGSKEDQDUSJHPPVTZIYUBUNSQNSIDKNOAPEXIOWRPVNNMHBFGFFFFKOYKIEJYHFVRWOKKIVOQCVCYJGSAOZGODMRDECHBZEXQSCRBGRUDZAGGLDXHLCZTQMHILAKUNHIABDRMACGNGYJDHYWQLCELAEBTNWQMWXBPUUOFIWMJPVBZTEJRSOXUTLVUCZLYXPAXNOTVRQZVZNXLJVTAKSSTTQAJYMYW");

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
    msg.setTimeStamp(0.00260375159591);
    msg.setSource(52147U);
    msg.setSourceEntity(213U);
    msg.setDestination(5764U);
    msg.setDestinationEntity(103U);
    msg.timeout = 53432U;
    msg.lat = 0.390090792357;
    msg.lon = 0.390472431927;
    msg.z = 0.329545526154;
    msg.z_units = 65U;
    msg.speed = 0.29469744653;
    msg.speed_units = 76U;
    msg.duration = 40987U;
    msg.radius = 0.103682360021;
    msg.flags = 187U;
    msg.custom.assign("FQYTBVMOQISZQJWVFEXDLJXNWDBYCCMCUDRZOBEXYNJEJFYAUVUOFEFPOFDTMBJSNHDKJVENWAMXSWSPRUGCLEMJOJMKWFERHZOPIUKCIQXLDCVYXATAQYOMLTZUDAQBHXSBNPOFGZFNGUZMURERUBEFXZJNHDVLNVGLPASTYKGBBPGWQHBWIHQM");

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
    msg.setTimeStamp(0.832050025309);
    msg.setSource(65382U);
    msg.setSourceEntity(82U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(229U);
    msg.timeout = 6173U;
    msg.lat = 0.515855893717;
    msg.lon = 0.156186489999;
    msg.z = 0.772199597949;
    msg.z_units = 137U;
    msg.speed = 0.130172415822;
    msg.speed_units = 155U;
    msg.duration = 27156U;
    msg.radius = 0.943271252481;
    msg.flags = 68U;
    msg.custom.assign("MFAXZLJUOPMGAYAKCAXLPHUBINCDBXHSYHOLTNWVRHGJJNTUWFDRKQNIBTPSEMFAZJRGYHPMVQVDQTVWXDSCBPNUTMFKBKQMWVDSCP");

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
    msg.setTimeStamp(0.790937426821);
    msg.setSource(21727U);
    msg.setSourceEntity(202U);
    msg.setDestination(54734U);
    msg.setDestinationEntity(219U);
    msg.custom.assign("GNYCNLOEUZYUHPBIZKBKXJMVZMCL");

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
    msg.setTimeStamp(0.247575424458);
    msg.setSource(24989U);
    msg.setSourceEntity(233U);
    msg.setDestination(5923U);
    msg.setDestinationEntity(211U);
    msg.custom.assign("VXDLOZPCUWDLWAXJCOQCEGNCWSTKIUMOJZTNCEVVQHIAHWKFBJTOCDNJWBVBOXUSGVPHGQJHXPWLUVDUKYFDNLNOZOLQCLFHQTAJFPTPZBYQKQCSUYKUYGFFLAYNIXGTIPRDGGAWFRFCSSOFYHPEBETUVTNZHJMRBERMMGTRRDSZMGBMUSAZIOLSYIHPBWZPNPKJEYZJDALQOWACMKYGXRIR");

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
    msg.setTimeStamp(0.0214759159664);
    msg.setSource(19122U);
    msg.setSourceEntity(57U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(12U);
    msg.custom.assign("MTJGSDTZCKFVVISMTPCJHKQYPUSXPHRRJFQMHNIZ");

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
    msg.setTimeStamp(0.993508663943);
    msg.setSource(33392U);
    msg.setSourceEntity(108U);
    msg.setDestination(45782U);
    msg.setDestinationEntity(137U);
    msg.timeout = 614U;
    msg.lat = 0.378893132816;
    msg.lon = 0.12818372614;
    msg.z = 0.0729543269645;
    msg.z_units = 171U;
    msg.duration = 46320U;
    msg.speed = 0.410502895512;
    msg.speed_units = 182U;
    msg.type = 98U;
    msg.radius = 0.295141985683;
    msg.length = 0.780794706341;
    msg.bearing = 0.794057173531;
    msg.direction = 21U;
    msg.custom.assign("CYNTMRYANBLUZPXRBCVXQMGTYFMCMKTDOYQTKLPDGAXHXCVKGVYZEKB");

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
    msg.setTimeStamp(0.00370873936056);
    msg.setSource(30001U);
    msg.setSourceEntity(60U);
    msg.setDestination(49339U);
    msg.setDestinationEntity(190U);
    msg.timeout = 45192U;
    msg.lat = 0.504898222697;
    msg.lon = 0.694498319767;
    msg.z = 0.121557962063;
    msg.z_units = 37U;
    msg.duration = 58963U;
    msg.speed = 0.124943318124;
    msg.speed_units = 172U;
    msg.type = 164U;
    msg.radius = 0.906137399067;
    msg.length = 0.281915500436;
    msg.bearing = 0.573546487725;
    msg.direction = 125U;
    msg.custom.assign("EXHPVNLJHSFOGIDUJTSBWTLDIEAQKPDKTBEYLWNFSZQYJUWPUZAUHSEDBOKNYQMZMEIFDOGBWKYEWBLRPYLQEGUGMOQFWCZHVSXZVIFIOXGLRMAJTDMKNBFJHRNJOARLQPONEMMQBUSTHXVGNQSDLZNBPUJUCJCITIDCWLTTVWPHCKLXIFKZBAAEXSSZFT");

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
    msg.setTimeStamp(0.772397799814);
    msg.setSource(45785U);
    msg.setSourceEntity(246U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(139U);
    msg.timeout = 6124U;
    msg.lat = 0.859382091106;
    msg.lon = 0.499252265659;
    msg.z = 0.748247547084;
    msg.z_units = 162U;
    msg.duration = 11802U;
    msg.speed = 0.685936304231;
    msg.speed_units = 247U;
    msg.type = 123U;
    msg.radius = 0.279195148148;
    msg.length = 0.0363511817871;
    msg.bearing = 0.627230352818;
    msg.direction = 215U;
    msg.custom.assign("DUHBQROKALFGGMTYDOFKPXSHOFXOBZHVJOROYUECBIVJWJJQYPPEKHUZWFYQVXSLIKGIHEBEOSWKAHFCHARZYWFITFJEWNDGBYYVPRVBVLTVVJBUGNNTQLBUAAKJSDTARKTIMJUSIMCVCLXRZILRGDEXPNSIXNEAYLOAOOXSZQFGKEXJGDEZQMWRLDPSDPWPBWJCZ");

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
    msg.setTimeStamp(0.403806517055);
    msg.setSource(37829U);
    msg.setSourceEntity(171U);
    msg.setDestination(8698U);
    msg.setDestinationEntity(85U);
    msg.duration = 41U;
    msg.custom.assign("EKLFNXUHCRGGJWRKGBMGCEIABXKFQJVCZMPAULIGXFODVHFMSTSTAOJIZRDPJVRYLEPYISZAEKILDBIGBXLOOJXPHZCNAKPDRFVWYWPBMIWDSERHCTIMOQWYLXZETVMOUGBZZLOFGHUUFCUDWNPJPVMKEMTKTATNFYEZQNSKWYPQCKAUZHLAIRQMVCLLUJCNMBYJDH");

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
    msg.setTimeStamp(0.839615295236);
    msg.setSource(49954U);
    msg.setSourceEntity(150U);
    msg.setDestination(54204U);
    msg.setDestinationEntity(224U);
    msg.duration = 50993U;
    msg.custom.assign("IGUIYYJSMTEDLDEEOSYKFFHMRIRZNHNWEPVJLURRMDLQAQZXVPGFBXXCUKQSWORVISPGBHOCHXFNBHPUTYJQJYOUHTMZPNOKGVYGGZEXNLRGETSHVFYTWWAMKZSEDLDBQUIISAPBWPGAUNRTMUOBBDAQVAAALSQXFKAVWEMCKRQYCOFUCSRJJZCWMHFLZKHEKDVFNIUQCFTJNPGOXOXDXHYTWTCBPJILMJLCWKJYESIZPNDCWLTAQOXKMBGVVD");

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
    msg.setTimeStamp(0.910718528078);
    msg.setSource(6166U);
    msg.setSourceEntity(240U);
    msg.setDestination(10530U);
    msg.setDestinationEntity(140U);
    msg.duration = 14414U;
    msg.custom.assign("SLVKHZFWEHATEXBOVCLSWTPQQDINAEIJQRPGCMJAXYKZYCTAIHEMSISKDTRLBEVUAYXQVOGDYKPDCAFSUMXUXEKZWHDOJUDQVHUFVHBGRPNTTZUZUCRJSGBGAFNRQYMOOPMCQWNYLDDXHEHYPINNFRWHIOOGFXVBSZXJKMNJZCRGWQKWDKNBLPUQZ");

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
    msg.setTimeStamp(0.115349433507);
    msg.setSource(15944U);
    msg.setSourceEntity(9U);
    msg.setDestination(57761U);
    msg.setDestinationEntity(53U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.921118165054;
    msg.control.set(tmp_msg_0);
    msg.duration = 19380U;
    msg.custom.assign("GPBQKZOXGILGMRRZSNEXHDIYAFKALGHUSJPJU");

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
    msg.setTimeStamp(0.144264882761);
    msg.setSource(50409U);
    msg.setSourceEntity(9U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(212U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.898915534035;
    tmp_msg_0.z_units = 219U;
    msg.control.set(tmp_msg_0);
    msg.duration = 27096U;
    msg.custom.assign("FMHJDQMIOAHMLOXAFIDALRJJJHWYOSTMTPFZJRWVYTISXZJBLCVERYQUPWCEEPKLUPQCNHMKXUIUKYDDBWWSKSACPBRZSCYDDMGQRAROPKRBAMGBTH");

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
    msg.setTimeStamp(0.896310702854);
    msg.setSource(46272U);
    msg.setSourceEntity(172U);
    msg.setDestination(61951U);
    msg.setDestinationEntity(111U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0986610485102;
    tmp_msg_0.z_units = 26U;
    msg.control.set(tmp_msg_0);
    msg.duration = 59856U;
    msg.custom.assign("MZIFSOVWSHGFZUQUBDAATTNODLMIBMOFKOBAHOJFKPMHQNMILODVXYNKHQFEEZIPJEPNSCWSABCZOXJJUJUVYPGBSGBSSGGESBGLQLZFVIRITZYHQNHGOGNWVKBJKSWFHQAPZPDYKAFHQPDOPLVBNWWCYACUCDQQXRKTVYJXTNAZTKYM");

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
    msg.setTimeStamp(0.702626777721);
    msg.setSource(33077U);
    msg.setSourceEntity(35U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(113U);
    msg.timeout = 36484U;
    msg.lat = 0.699395209377;
    msg.lon = 0.456488556618;
    msg.z = 0.0902765652666;
    msg.z_units = 120U;
    msg.speed = 0.0679485716643;
    msg.speed_units = 238U;
    msg.bearing = 0.979466273637;
    msg.cross_angle = 0.403945356645;
    msg.width = 0.381214952171;
    msg.length = 0.694918352052;
    msg.hstep = 0.752416135381;
    msg.coff = 252U;
    msg.alternation = 78U;
    msg.flags = 161U;
    msg.custom.assign("TBEAHFTCYNAGVVRCLLJRIUQECHQGTEFSFNNPBKSKUJMJHXNPKXKVGIFCDSDWLHKLHQIURERQSZYAQNPVYFTSPZJSPXLDGZFDXVVTWCJWFWHMRGEDQOXVXTYZCGOSLIHXFLGLPOSEYWJHA");

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
    msg.setTimeStamp(0.557672267709);
    msg.setSource(46694U);
    msg.setSourceEntity(226U);
    msg.setDestination(53068U);
    msg.setDestinationEntity(238U);
    msg.timeout = 31477U;
    msg.lat = 0.104908525571;
    msg.lon = 0.676400407937;
    msg.z = 0.430269187951;
    msg.z_units = 7U;
    msg.speed = 0.960645587354;
    msg.speed_units = 187U;
    msg.bearing = 0.890944046868;
    msg.cross_angle = 0.793919176968;
    msg.width = 0.348535219131;
    msg.length = 0.174861200189;
    msg.hstep = 0.247273966232;
    msg.coff = 75U;
    msg.alternation = 92U;
    msg.flags = 69U;
    msg.custom.assign("QOOUPVMWJVNSXYXZLHBFYWWSBCMLWAKS");

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
    msg.setTimeStamp(0.245447629221);
    msg.setSource(18198U);
    msg.setSourceEntity(151U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(238U);
    msg.timeout = 10710U;
    msg.lat = 0.736271679875;
    msg.lon = 0.860455766083;
    msg.z = 0.690669800752;
    msg.z_units = 234U;
    msg.speed = 0.254515057676;
    msg.speed_units = 241U;
    msg.bearing = 0.811850454102;
    msg.cross_angle = 0.864772775213;
    msg.width = 0.918089565826;
    msg.length = 0.952540441345;
    msg.hstep = 0.974923332518;
    msg.coff = 49U;
    msg.alternation = 78U;
    msg.flags = 132U;
    msg.custom.assign("ZVZXSRTHNSJMJZAQANILAFITOGFYLKVAMNXLCOUVVJHJYCYGTBDJRGTOAUKQBWGAJECCBNOWUNDQSGXQSSKRLIYCEIXDFATSZINWZEQKBWRFBBGHZCUUNVOUSCMWBPHUFBPRFMQPETEXXTIAASJYMFUZVXDJDWHIMOERYNZRVMIFYMKTOKYNMPCKLPSODGYDGJDZKTPEVQHXRLYLWFBHX");

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
    msg.setTimeStamp(0.209074748325);
    msg.setSource(12373U);
    msg.setSourceEntity(9U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(34U);
    msg.timeout = 65045U;
    msg.lat = 0.675910429392;
    msg.lon = 0.356499300175;
    msg.z = 0.648445145069;
    msg.z_units = 48U;
    msg.speed = 0.891143576495;
    msg.speed_units = 116U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.115370756336;
    tmp_msg_0.y = 0.861882462675;
    tmp_msg_0.z = 0.749588970044;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KVCSQPUQZEHQYAHAUYBHLBOICGRYIFRJCNMABKMSWRQSHUVYEPRCUGCHJIZBGVOTVHAPLIBUSTPPTTYWDTPYJNOVCOBZDOMELBMBKZ");

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
    msg.setTimeStamp(0.145439143989);
    msg.setSource(19634U);
    msg.setSourceEntity(65U);
    msg.setDestination(971U);
    msg.setDestinationEntity(223U);
    msg.timeout = 54507U;
    msg.lat = 0.732773511839;
    msg.lon = 0.574504684725;
    msg.z = 0.0456047305312;
    msg.z_units = 154U;
    msg.speed = 0.427789024548;
    msg.speed_units = 169U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0869168301626;
    tmp_msg_0.y = 0.888794518088;
    tmp_msg_0.z = 0.777951434569;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LKIXAHGTGZKDCVOV");

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
    msg.setTimeStamp(0.47172137582);
    msg.setSource(3068U);
    msg.setSourceEntity(112U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(39U);
    msg.timeout = 16208U;
    msg.lat = 0.563238162139;
    msg.lon = 0.40975885229;
    msg.z = 0.38207294397;
    msg.z_units = 109U;
    msg.speed = 0.707327779709;
    msg.speed_units = 5U;
    msg.custom.assign("FLJKYAQDUPDDWMHDFRGQLTAJSXAUCCPONPOSSWWPEYZMJUPVMJXHGZIRLFWJYEPEBOSAEAQKIONHXRUWBHNZDLXXNBZVFKRXIJOIKGHUBTNJBJUMMLCTVVDCADXUAIZZMMOGYCDTFS");

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
    msg.setTimeStamp(0.405295217189);
    msg.setSource(25241U);
    msg.setSourceEntity(166U);
    msg.setDestination(22306U);
    msg.setDestinationEntity(65U);
    msg.x = 0.494771448052;
    msg.y = 0.898213342242;
    msg.z = 0.021678788611;

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
    msg.setTimeStamp(0.850094255961);
    msg.setSource(36746U);
    msg.setSourceEntity(165U);
    msg.setDestination(13181U);
    msg.setDestinationEntity(153U);
    msg.x = 0.492014128697;
    msg.y = 0.550951092357;
    msg.z = 0.65002968889;

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
    msg.setTimeStamp(0.730405781627);
    msg.setSource(30983U);
    msg.setSourceEntity(245U);
    msg.setDestination(21237U);
    msg.setDestinationEntity(102U);
    msg.x = 0.665508037438;
    msg.y = 0.607973949855;
    msg.z = 0.644449377221;

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
    msg.setTimeStamp(0.512779215537);
    msg.setSource(55097U);
    msg.setSourceEntity(41U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(59U);
    msg.timeout = 5285U;
    msg.lat = 0.884412748668;
    msg.lon = 0.033905432891;
    msg.z = 0.935940504818;
    msg.z_units = 126U;
    msg.amplitude = 0.937761118953;
    msg.pitch = 0.221967021382;
    msg.speed = 0.299581923476;
    msg.speed_units = 194U;
    msg.custom.assign("GTDCZURJFVTKBFIAEYTLECMRMJKSLSACQINHVWYFWVFKXDOTIEZWFYIYFQBCYYGQUSTTSWFTUAIFEMR");

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
    msg.setTimeStamp(0.836173791017);
    msg.setSource(63949U);
    msg.setSourceEntity(123U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(141U);
    msg.timeout = 49000U;
    msg.lat = 0.321306525484;
    msg.lon = 0.30437411223;
    msg.z = 0.865251888207;
    msg.z_units = 8U;
    msg.amplitude = 0.883022022587;
    msg.pitch = 0.11306981338;
    msg.speed = 0.27049916353;
    msg.speed_units = 161U;
    msg.custom.assign("KCFHCBYPTJUSADXSSWWDXFIZCEBAYVJUVAJCZOBGNZMUNSRPVGJQCXQXRDGRGUEJHMYFATWTIZUCCDSEHBONQYBWVQNCPKOPAMUWWIGPNPELYOSDYXFAXYGBZKLUEITMHRKOBMULMOGSMJIBKOQDARDXSHRC");

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
    msg.setTimeStamp(0.143657182446);
    msg.setSource(27450U);
    msg.setSourceEntity(62U);
    msg.setDestination(53977U);
    msg.setDestinationEntity(50U);
    msg.timeout = 24673U;
    msg.lat = 0.226831141406;
    msg.lon = 0.74627556292;
    msg.z = 0.209059351521;
    msg.z_units = 139U;
    msg.amplitude = 0.191152110077;
    msg.pitch = 0.681286443297;
    msg.speed = 0.296520569148;
    msg.speed_units = 104U;
    msg.custom.assign("MMCTALHJQNNJLCSXUOBDARFPBDWLNPIEGJZXPXEVKUMHMSVCPUWTEAHYSLJPTTYENUSNPADMHUOIDXIPRCPWHOFQAJGYZGLZPJVIBTWTOHADHYMQXYXLRVYKRWQFTPKKCMQKDIBVIGMRFMYHSBVOVXGNESCSSIZFUGEERCSJGXQ");

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
    msg.setTimeStamp(0.243205065006);
    msg.setSource(18972U);
    msg.setSourceEntity(78U);
    msg.setDestination(37546U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.556831555682);
    msg.setSource(11129U);
    msg.setSourceEntity(210U);
    msg.setDestination(16740U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.0510994787557);
    msg.setSource(61750U);
    msg.setSourceEntity(172U);
    msg.setDestination(30685U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.880548817162);
    msg.setSource(33273U);
    msg.setSourceEntity(50U);
    msg.setDestination(48163U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.543768241146;
    msg.lon = 0.599148381138;
    msg.z = 0.327353044041;
    msg.z_units = 194U;
    msg.radius = 0.60784604326;
    msg.duration = 22126U;
    msg.speed = 0.555208831834;
    msg.speed_units = 138U;
    msg.custom.assign("ZURCODKTYJXJTGQHTFPWXQPYFMIEGERLAMGEOVWEYGYJTCYBYNITIJKDPAZTFYBEANMMWQTJNCDPKROLUUKRDDDNNSGDVVJNICCWCGSTFOCXKBXZNIVMSHLMGESGEQAAWPEBOEDFIIDQXXUSHFJLRBQHUBNPBGNVVYDZHPQYXPSCRFOHRXFZAPSIKKORUKZVAMIALSLWWXSPLGUHBQWAZ");

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
    msg.setTimeStamp(0.493539917813);
    msg.setSource(43932U);
    msg.setSourceEntity(230U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.0705652330093;
    msg.lon = 0.5426822679;
    msg.z = 0.657303107809;
    msg.z_units = 28U;
    msg.radius = 0.289594023579;
    msg.duration = 10136U;
    msg.speed = 0.43368636893;
    msg.speed_units = 102U;
    msg.custom.assign("FEAPXFEVXQLZLBVBLCJMAWTXUBTICNHNYNFDTFJOZVYCTMFJGUQIBRSGLRCCRUTPOQNUJQUZOVAYIVLWKRXLAJEDEMOIJDJGKKEUHRBMRDCORUEAGIYAHCNQSFKNXUKPAYZGVQDHTBMKGXILHQZYCYVPPWSUKOVJIEFFPSO");

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
    msg.setTimeStamp(0.599727683528);
    msg.setSource(51912U);
    msg.setSourceEntity(77U);
    msg.setDestination(6096U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.0136374111873;
    msg.lon = 0.0841977428585;
    msg.z = 0.661651598528;
    msg.z_units = 139U;
    msg.radius = 0.575822046728;
    msg.duration = 38900U;
    msg.speed = 0.88693254259;
    msg.speed_units = 79U;
    msg.custom.assign("JYOJSGTZHNHFHEBYKZCNWGQUBGFLYVVOYYPKULDIXWJJKEMZPXRAKRMWCENKQLQADBTJOOLJYKVDTFPENDAZVMKXHGOXUBSJEJZWGUIKXBNHCPFTRARUXOGVHIFWTPQET");

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
    msg.setTimeStamp(0.263235668889);
    msg.setSource(51653U);
    msg.setSourceEntity(223U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(236U);
    msg.timeout = 39070U;
    msg.flags = 194U;
    msg.lat = 0.115456791301;
    msg.lon = 0.545482499226;
    msg.start_z = 0.174409374242;
    msg.start_z_units = 211U;
    msg.end_z = 0.752488141937;
    msg.end_z_units = 170U;
    msg.radius = 0.388992705625;
    msg.speed = 0.979090604816;
    msg.speed_units = 90U;
    msg.custom.assign("OXRFMQPBPRWAXKWLATDNIGWOEAAFHQLLPDEHJBCLBKSYDKKGHIYKDISTKIZTIGCRSDBBKPWRKHTXXNLUVROAXNLEITTGOZEZYQUPGULOYUQOTWYBZWGCLKOXLMASFAJNQSUBJJYMFSWTNZYGDUCVVJHOBZGSRVWHHNUEFQEFRFIYIVIQZSCPFXNREQURVEMUPOPDCVXXYJPPMENMFVDVUHKHMJCLVG");

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
    msg.setTimeStamp(0.825169844095);
    msg.setSource(38038U);
    msg.setSourceEntity(187U);
    msg.setDestination(47736U);
    msg.setDestinationEntity(110U);
    msg.timeout = 5652U;
    msg.flags = 166U;
    msg.lat = 0.607788120581;
    msg.lon = 0.51915481622;
    msg.start_z = 0.752011370593;
    msg.start_z_units = 196U;
    msg.end_z = 0.479840025864;
    msg.end_z_units = 5U;
    msg.radius = 0.519095597658;
    msg.speed = 0.776652552114;
    msg.speed_units = 141U;
    msg.custom.assign("YKQEBINSXJYPYWADHQNKTWIAGFXBHYDXEFPGHKOGSJCKICHSCZQIBP");

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
    msg.setTimeStamp(0.818429895723);
    msg.setSource(57116U);
    msg.setSourceEntity(222U);
    msg.setDestination(21841U);
    msg.setDestinationEntity(155U);
    msg.timeout = 26393U;
    msg.flags = 128U;
    msg.lat = 0.37337057749;
    msg.lon = 0.781373963591;
    msg.start_z = 0.767232750868;
    msg.start_z_units = 168U;
    msg.end_z = 0.944445041953;
    msg.end_z_units = 106U;
    msg.radius = 0.375879827498;
    msg.speed = 0.949473956682;
    msg.speed_units = 175U;
    msg.custom.assign("RZRKTISMWIIHTKMBE");

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
    msg.setTimeStamp(0.884905985168);
    msg.setSource(57448U);
    msg.setSourceEntity(65U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(158U);
    msg.timeout = 4941U;
    msg.lat = 0.71906554019;
    msg.lon = 0.528319794254;
    msg.z = 0.20116401845;
    msg.z_units = 65U;
    msg.speed = 0.836012899184;
    msg.speed_units = 215U;
    msg.custom.assign("OHZODVZSBIGGXQKCEUMRWNPYAOHPRVDJEGKGPHPALOFURTUCWTHRZDACLGLEQHYOOYJZPKTOIDZFLMLZVJJPYJCOMNBTWVNVCNBDOZKNQISCXEBMBMIUTSASNPKFTQIXZHGZBSXATXRDUWGWABLLI");

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
    msg.setTimeStamp(0.0919404879913);
    msg.setSource(58306U);
    msg.setSourceEntity(158U);
    msg.setDestination(11301U);
    msg.setDestinationEntity(59U);
    msg.timeout = 11572U;
    msg.lat = 0.692451510698;
    msg.lon = 0.971791393164;
    msg.z = 0.780622267451;
    msg.z_units = 4U;
    msg.speed = 0.0402762540579;
    msg.speed_units = 33U;
    msg.custom.assign("FKSGYAEGDZVVRROTIMQLWLYOKXUJDTDNGEDANDVRHXRZNVJWCCQVRFGXUTBSGKGWVQXIIWUMLUPKHFLESLBUFCNUBQFKFPMDYQNM");

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
    msg.setTimeStamp(0.126376448837);
    msg.setSource(43394U);
    msg.setSourceEntity(188U);
    msg.setDestination(22268U);
    msg.setDestinationEntity(39U);
    msg.timeout = 27590U;
    msg.lat = 0.740059800607;
    msg.lon = 0.533113595728;
    msg.z = 0.902138680231;
    msg.z_units = 87U;
    msg.speed = 0.890994878056;
    msg.speed_units = 208U;
    msg.custom.assign("OTBMJYKYBWYWVTCIWZVRQPDLNMONXRXNTBXVNDUTBQJGWVZQPBPDPVLSBYURALUCGHZVDALWPHDDJSPAXIWIQZFDYAQKTSSMABKESQSJUIGOKCDEWPTLPTYRRSQAKWGESJHCMUQRLCSIOGXOYHX");

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
    msg.setTimeStamp(0.59578430631);
    msg.setSource(36229U);
    msg.setSourceEntity(247U);
    msg.setDestination(19340U);
    msg.setDestinationEntity(120U);
    msg.x = 0.785303690778;
    msg.y = 0.764065417275;
    msg.z = 0.163472632502;
    msg.t = 0.333756758461;

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
    msg.setTimeStamp(0.103455702316);
    msg.setSource(2558U);
    msg.setSourceEntity(247U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(39U);
    msg.x = 0.0678254561102;
    msg.y = 0.129308544269;
    msg.z = 0.0900076386078;
    msg.t = 0.62864676978;

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
    msg.setTimeStamp(0.279162807117);
    msg.setSource(40018U);
    msg.setSourceEntity(178U);
    msg.setDestination(52479U);
    msg.setDestinationEntity(252U);
    msg.x = 0.0968949147597;
    msg.y = 0.373651356611;
    msg.z = 0.710590906567;
    msg.t = 0.356143926127;

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
    msg.setTimeStamp(0.820551996007);
    msg.setSource(40094U);
    msg.setSourceEntity(98U);
    msg.setDestination(38648U);
    msg.setDestinationEntity(205U);
    msg.timeout = 11764U;
    msg.name.assign("TTXLHCWIMHLRYOBBQDOXTLEKBTDZSLCMAGWQNWRIOKYQPEJVXFVHPAJOSSNERRTHJOGMMZRYLBHEJXEMTVRZFQZBQYMEWEUSVJWHMKUSIJZOSBINFIQPFXXQYDGSGGZPGHTHJRUASJAUEIUQCVBOBKOSEKKZMXHWSNCMIUYPWNNGPAMZOKORFPQ");
    msg.custom.assign("CEQJJONVWREILMMVZOGIHUOBCVKRYCWSFJPVYWXKOKCORLAHFZQAXMM");

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
    msg.setTimeStamp(0.558161783009);
    msg.setSource(51086U);
    msg.setSourceEntity(39U);
    msg.setDestination(13510U);
    msg.setDestinationEntity(24U);
    msg.timeout = 711U;
    msg.name.assign("PMRSXCBUDTNOCYUNBXDRHJFVTSEMHOFHBBNSVICXSGZERIGABOJJLPELMWJJEFYUNABRFFPOHUEWLSYYZJUOBUHCQHMEGGQNVCJXZFDQZSLAKVSSXNPDAVDTUZWFFDFLITAEMCPDAYAWYDCZQYQEEILGANCGGHQWADBUMCDPXQKVNWTMVINPPHVNKJTKWJGFQVGPTRKXVLOYIKUZSRSAOQWTROKJLMBKZLBZMOXXQ");
    msg.custom.assign("WQHSQQRNZQUWEEXVCHFOACYGCPMFPGBEBWJUTEHDEUDLDZEARPOBLAGSZXFXWNMLOGSTOUOVUCILQNXAQRAIZZFCMAKLHYTKWGNKYVFYKGTTYZCFZILQBSJHMKZGJYBSJKIUMOBSOPDRNVPKCDHPAMFFDITXBNJNXVICQXWHRXSTVTCRLLXUVUAJHBIBKCQYWWPROIIYJQWJDDTAYEMEMHFKXUVWYEPLREISHNUVGSZ");

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
    msg.setTimeStamp(0.275729946426);
    msg.setSource(52959U);
    msg.setSourceEntity(117U);
    msg.setDestination(2293U);
    msg.setDestinationEntity(156U);
    msg.timeout = 43246U;
    msg.name.assign("JIOMJKQMVWKYTUMXZAWATVPERICNUETQHLRYQNZOPEXOEDHUQMILJDSGCIFGBBJGJG");
    msg.custom.assign("TWYSVELDIMRVJGAKBEPPGPZOQZDDDLPYWIRYHJSHNXHUBCGIDGTEYFFYXKQWWFKQXYDOSVRBTQPWXRXENZUKWBHCFKWSOVGUBQPDEAVZESBKOXCULFNJIR");

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
    msg.setTimeStamp(0.390220386809);
    msg.setSource(11828U);
    msg.setSourceEntity(195U);
    msg.setDestination(19445U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.374293920664;
    msg.lon = 0.460682573326;
    msg.z = 0.113474242181;
    msg.z_units = 36U;
    msg.speed = 0.194781833671;
    msg.speed_units = 73U;
    msg.start_time = 0.957611683313;
    msg.custom.assign("JVVJICFJCJUYUUSUMXEHSUTFDOAPVYGNXNGXJUYOIRMYOHYSKZWHKJICXJLPXERSQXMWRIG");

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
    msg.setTimeStamp(0.625916763018);
    msg.setSource(13416U);
    msg.setSourceEntity(86U);
    msg.setDestination(55970U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.394265040991;
    msg.lon = 0.912977405049;
    msg.z = 0.0992357418855;
    msg.z_units = 142U;
    msg.speed = 0.616793642989;
    msg.speed_units = 23U;
    msg.start_time = 0.393308390957;
    msg.custom.assign("EULIYHCARCDQCWTOYLULRNVSGTSJDVJBJKMKPRDLDGVBHFZXIVIFPPCZOTRAODTAHGKEBMTGNGWXYLZHCRLHWCSQRMXQNXTYAVY");

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
    msg.setTimeStamp(0.190131002584);
    msg.setSource(42650U);
    msg.setSourceEntity(196U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.38865614986;
    msg.lon = 0.449897591654;
    msg.z = 0.731696601795;
    msg.z_units = 130U;
    msg.speed = 0.190315983962;
    msg.speed_units = 130U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.191475082307;
    tmp_msg_0.y = 0.709161823604;
    tmp_msg_0.z = 0.613209401029;
    tmp_msg_0.t = 0.0598245713173;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2057U;
    tmp_msg_1.off_x = 0.00904507940716;
    tmp_msg_1.off_y = 0.892457076638;
    tmp_msg_1.off_z = 0.561845304818;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.562250755352;
    msg.custom.assign("NWLMOZYRZAMPHGTPIMIECUAIYQMDBRSQYTMAXGKQXJKVLERZNOKPAMHKKRIJYWVPRHMPWKYUUXCTVWACVODIXTRWQVWJCQBEFHRMCOUAXDEDBPQXWOOGXWTQXZCBTNLOBSTJPFEIHALUDNGGVQSIBNWFQBJYTXZRIVLJNFLTIEGUOELYUASFEK");

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
    msg.setTimeStamp(0.139250027967);
    msg.setSource(62476U);
    msg.setSourceEntity(128U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(187U);
    msg.vid = 18129U;
    msg.off_x = 0.177844700693;
    msg.off_y = 0.36869363309;
    msg.off_z = 0.14927132235;

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
    msg.setTimeStamp(0.946973933694);
    msg.setSource(13013U);
    msg.setSourceEntity(234U);
    msg.setDestination(51523U);
    msg.setDestinationEntity(63U);
    msg.vid = 16430U;
    msg.off_x = 0.900854912078;
    msg.off_y = 0.717368279355;
    msg.off_z = 0.80506264874;

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
    msg.setTimeStamp(0.982241047426);
    msg.setSource(6384U);
    msg.setSourceEntity(236U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(43U);
    msg.vid = 5261U;
    msg.off_x = 0.980796479221;
    msg.off_y = 0.267453048795;
    msg.off_z = 0.635201843294;

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
    msg.setTimeStamp(0.110665493757);
    msg.setSource(24451U);
    msg.setSourceEntity(105U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.902689688324);
    msg.setSource(48200U);
    msg.setSourceEntity(197U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.0822481245936);
    msg.setSource(39456U);
    msg.setSourceEntity(249U);
    msg.setDestination(548U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.428851614865);
    msg.setSource(54575U);
    msg.setSourceEntity(60U);
    msg.setDestination(11538U);
    msg.setDestinationEntity(225U);
    msg.mid = 63216U;

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
    msg.setTimeStamp(0.0973956186451);
    msg.setSource(63286U);
    msg.setSourceEntity(180U);
    msg.setDestination(30350U);
    msg.setDestinationEntity(234U);
    msg.mid = 39635U;

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
    msg.setTimeStamp(0.0720818185082);
    msg.setSource(64608U);
    msg.setSourceEntity(59U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(10U);
    msg.mid = 6737U;

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
    msg.setTimeStamp(0.71903887631);
    msg.setSource(36661U);
    msg.setSourceEntity(127U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(140U);
    msg.state = 98U;
    msg.eta = 46607U;
    msg.info.assign("FRTNKDZFUQH");

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
    msg.setTimeStamp(0.923221675682);
    msg.setSource(41044U);
    msg.setSourceEntity(35U);
    msg.setDestination(47490U);
    msg.setDestinationEntity(184U);
    msg.state = 40U;
    msg.eta = 41583U;
    msg.info.assign("KKIKAMLUDORARMTPHGFGQCYEJUDNVDKGLHSRJQJLSQFMVMQBVZYFIZWVNQCYHSVARDEGUCCSXBTUHUAPEFMWPLEHPNKVBHEWBIJOIKYROMXMBYIOTZIPZXAWZK");

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
    msg.setTimeStamp(0.564297266387);
    msg.setSource(22972U);
    msg.setSourceEntity(184U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(3U);
    msg.state = 35U;
    msg.eta = 50508U;
    msg.info.assign("SSHCRZNFNPLZKOAYJJGSHLWUIFZHKPXISGVMGCJDDQTCRJHVQWIOFZTSQUMFJANRLPYETJGRDOY");

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
    msg.setTimeStamp(0.315600553841);
    msg.setSource(50424U);
    msg.setSourceEntity(97U);
    msg.setDestination(3658U);
    msg.setDestinationEntity(172U);
    msg.system = 26473U;
    msg.duration = 5786U;
    msg.speed = 0.681325895811;
    msg.speed_units = 96U;
    msg.x = 0.92241551327;
    msg.y = 0.646660753263;
    msg.z = 0.225572680513;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.0811393487386);
    msg.setSource(4479U);
    msg.setSourceEntity(145U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(16U);
    msg.system = 18483U;
    msg.duration = 27866U;
    msg.speed = 0.352474558991;
    msg.speed_units = 131U;
    msg.x = 0.387645666441;
    msg.y = 0.705356686171;
    msg.z = 0.369388358921;
    msg.z_units = 99U;

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
    msg.setTimeStamp(0.0885781980662);
    msg.setSource(54704U);
    msg.setSourceEntity(220U);
    msg.setDestination(38027U);
    msg.setDestinationEntity(69U);
    msg.system = 35444U;
    msg.duration = 43568U;
    msg.speed = 0.772933487303;
    msg.speed_units = 165U;
    msg.x = 0.0974127092166;
    msg.y = 0.429105275859;
    msg.z = 0.735483401307;
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
    msg.setTimeStamp(0.138504981068);
    msg.setSource(8153U);
    msg.setSourceEntity(51U);
    msg.setDestination(45313U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.332589530209;
    msg.lon = 0.16969390301;
    msg.speed = 0.947317066929;
    msg.speed_units = 74U;
    msg.duration = 28226U;
    msg.sys_a = 56238U;
    msg.sys_b = 27885U;
    msg.move_threshold = 0.174471365486;

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
    msg.setTimeStamp(0.393261069762);
    msg.setSource(39179U);
    msg.setSourceEntity(59U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.283173878293;
    msg.lon = 0.792265354268;
    msg.speed = 0.851835631578;
    msg.speed_units = 185U;
    msg.duration = 56051U;
    msg.sys_a = 19962U;
    msg.sys_b = 58455U;
    msg.move_threshold = 0.79156484514;

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
    msg.setTimeStamp(0.569659647943);
    msg.setSource(41330U);
    msg.setSourceEntity(130U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.580421618122;
    msg.lon = 0.724936679841;
    msg.speed = 0.687378173767;
    msg.speed_units = 23U;
    msg.duration = 32221U;
    msg.sys_a = 3444U;
    msg.sys_b = 9722U;
    msg.move_threshold = 0.821270929484;

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
    msg.setTimeStamp(0.618568250331);
    msg.setSource(54967U);
    msg.setSourceEntity(123U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.408347831824;
    msg.lon = 0.151300208479;
    msg.z = 0.360462771942;
    msg.z_units = 97U;
    msg.speed = 0.921398652203;
    msg.speed_units = 162U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.436908209525;
    tmp_msg_0.lon = 0.702221047912;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZMBIUSDLHEXBSQDAKAUPZRNVBOTODUHZKJZIWYMQILQRCLJOEOGGQKEXKNCFTFJVNHYRIHPSWIOKKRJEPJDWM");

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
    msg.setTimeStamp(0.373722668015);
    msg.setSource(15139U);
    msg.setSourceEntity(55U);
    msg.setDestination(63426U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.446424322411;
    msg.lon = 0.69618791337;
    msg.z = 0.507496940817;
    msg.z_units = 131U;
    msg.speed = 0.591114253155;
    msg.speed_units = 39U;
    msg.custom.assign("CLQENRDOMDUDVSWVHNTZNDXJSKHRYUTEBWQVMRMMEIXTPUUSKJBLKBATUKQBNYSPIKVPMRSCYZWMWJERBYNGIYDXZJCOLUTRCUSEXZLZOHODEFROXSIAZWQXABWAQGWGJSFHYKOZHLGFCTVFCHAA");

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
    msg.setTimeStamp(0.104204181107);
    msg.setSource(36731U);
    msg.setSourceEntity(208U);
    msg.setDestination(42257U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.528252734421;
    msg.lon = 0.654652934742;
    msg.z = 0.900225336891;
    msg.z_units = 215U;
    msg.speed = 0.471862033402;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.167514846616;
    tmp_msg_0.lon = 0.717091364941;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HZIRJQFJCEESSPAYAUQLJWSJDZOAVRZJQWJUYTILDSMPUYPLCNUQMN");

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
    msg.setTimeStamp(0.898515686475);
    msg.setSource(4697U);
    msg.setSourceEntity(21U);
    msg.setDestination(5215U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.0478384979908;
    msg.lon = 0.676592714873;

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
    msg.setTimeStamp(0.828145202349);
    msg.setSource(1494U);
    msg.setSourceEntity(121U);
    msg.setDestination(28721U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.367116839521;
    msg.lon = 0.166241181529;

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
    msg.setTimeStamp(0.121842362761);
    msg.setSource(3605U);
    msg.setSourceEntity(110U);
    msg.setDestination(10039U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.734019493772;
    msg.lon = 0.360842164777;

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
    msg.setTimeStamp(0.957775774918);
    msg.setSource(38744U);
    msg.setSourceEntity(25U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(70U);
    msg.timeout = 22510U;
    msg.lat = 0.0265035474003;
    msg.lon = 0.940509786959;
    msg.z = 0.0306315390043;
    msg.z_units = 3U;
    msg.pitch = 0.981888681071;
    msg.amplitude = 0.60380264743;
    msg.duration = 25680U;
    msg.speed = 0.0481555054509;
    msg.speed_units = 16U;
    msg.radius = 0.161197312917;
    msg.direction = 196U;
    msg.custom.assign("NCAGJTVIJHMPHARITRIPSVMRLONOSOBTZOIQXULBDQSXVHOTJWSPKPBUNRYUJXIFRFACDTECTRHSVDMPYHZREB");

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
    msg.setTimeStamp(0.121601013744);
    msg.setSource(62126U);
    msg.setSourceEntity(247U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(202U);
    msg.timeout = 7073U;
    msg.lat = 0.396743195521;
    msg.lon = 0.0121858635902;
    msg.z = 0.228357459745;
    msg.z_units = 72U;
    msg.pitch = 0.720662647375;
    msg.amplitude = 0.90990282223;
    msg.duration = 41958U;
    msg.speed = 0.110533085992;
    msg.speed_units = 9U;
    msg.radius = 0.863000103368;
    msg.direction = 126U;
    msg.custom.assign("RKLLDEEXYPEEHEWYWWUHZCLJQLOAJOMSXWWFQDDIOYJYBHXFLSLGSBFACROPNLJATCVQBDSDDMPTRZUWTJXUMAAYUPSZVXMGEIBVJCDRCHFMU");

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
    msg.setTimeStamp(0.289800625786);
    msg.setSource(33160U);
    msg.setSourceEntity(96U);
    msg.setDestination(36740U);
    msg.setDestinationEntity(5U);
    msg.timeout = 22223U;
    msg.lat = 0.760545415304;
    msg.lon = 0.419531452491;
    msg.z = 0.319224772743;
    msg.z_units = 243U;
    msg.pitch = 0.360064369266;
    msg.amplitude = 0.773679278734;
    msg.duration = 52266U;
    msg.speed = 0.126067176054;
    msg.speed_units = 74U;
    msg.radius = 0.277673370019;
    msg.direction = 76U;
    msg.custom.assign("CIPQORDFQWBGIUAZIWRXCGVFLPYZSXBBCIKUDUNSSFJRQXOZTIAVTEUJKPQTJVRLXHSCPEPETYPWLHDRGBHYYHMLZRIOCOENIDTZWYUMVFMRCDDNMFWYUZGFEIABMXWFXYHTKGJKODEHTNJPNQHYMOZUGLGKJYODNHAOINGNRKFVSNKEAEWDKXJEGQALXZSUQDQAVBJPWWBAQOSBVAZARRFPBCLULSHVMGPSXQVUVWMYTJLKOHT");

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
    msg.setTimeStamp(0.636860558115);
    msg.setSource(24327U);
    msg.setSourceEntity(40U);
    msg.setDestination(42493U);
    msg.setDestinationEntity(148U);
    msg.formation_name.assign("RPAOIKNKYEBUKBCAIMZNDAHMUHDTUDIEBAOJDNWYRUILJXTCCSVFGQYSOFVAMMSOVBEZOPXAUTVUSVIRVPPTQHWRSJNELTJRLSQXZRXDOQCRWXJBEKJGNWPXLWRNHHCCINEXMUSLUKNTILFGKCILPGWMGPXJYTNWKJFCKVYBGPMDLYOFAFZQMQHFEYLQXCGSQUTOCMFGTSDQDTVEZDAAYSHOEQPDW");
    msg.reference_frame = 77U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59947U;
    tmp_msg_0.off_x = 0.799560658333;
    tmp_msg_0.off_y = 0.602876097299;
    tmp_msg_0.off_z = 0.36269379982;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VEAZMPAWQZNQAAUSRLOEVACMSMVCJQTIRFYMGUSWBZZBRYFDLVITMSIDEEVYEJFQGKFMUZHETWBXJKFIODERZSXCNJACOILXDHSTYKWHXCTXFPPRVQIKCJXOANHLMLWUMOYK");

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
    msg.setTimeStamp(0.621940939749);
    msg.setSource(21812U);
    msg.setSourceEntity(219U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("RJHGIIQYGGMHEWTKLUBMPJHKOKXWULHUEYARYXMEMQQLOQPICMAKWAIYCKONYUYOFLNAFXPVVTCRGQBLDNXRDVJPHOKUWNYXBHDKENWTJBIIZAZSSLSERUZZWMOTMQXELSBSHVQOYCIFQNUVNTJHIQTZUVBSEOJKSNEFPDDTFCPMBSFFTVGEFJTCAEJLSRNDIWCVXWBRRWLXHYASRF");
    msg.reference_frame = 156U;
    msg.custom.assign("GVAGCQUZORGPSYLJINJVHZVZUAIYMBJRWHCMLFYEMRSBANJEFPQDYEDLCGUDDMSMFMKFOYBBACKNKPILGQLZYUHNEVZKFJGFECDOVHSQPBCRWDEZKWLGZGOITYJWFKTTEOPWYPZSKAWRTQAVPXUXBRLQMKNJUXYRZGFCZXRNNJCVBTIMTFXRYCHSEOVTBQSANWHHUQSWHPPRHOQSTNXAIKDXNBHXFDODXUIOOAWLMISVPKVUI");

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
    msg.setTimeStamp(0.761320196079);
    msg.setSource(18183U);
    msg.setSourceEntity(15U);
    msg.setDestination(25226U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("PSKCZVTLFDJEFUGQQEPNKGSUXFXROVGMQDJWHIWCDEMCCEGVPFEFUKZYAGAQTFHRNQWGWOBOAASUSXYMEAIPOQXYJGZVRXVPROKAJUHXMBYAYERSWNYCYNUZXFGTHCL");
    msg.reference_frame = 193U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28883U;
    tmp_msg_0.off_x = 0.773010556155;
    tmp_msg_0.off_y = 0.0561172726693;
    tmp_msg_0.off_z = 0.0440521039751;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TEWCGZAKRXOQTHHXFGYJEDCVRCHZJMVYMGZSAPLDAWUSJZLGKDNBSENGLDBOVUPCQWOVCGUXETAAUZBHPHIYEKXRNLIZCTKMXDOBKFFYJNJKPIDQMVSCTFCKVYYBNLQVPKDDZRJXWHLGAUYBNEQWMVNJUUWRANMSQUQACBRGAZRODIGSHIEUWLBR");

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
    msg.setTimeStamp(0.528119616942);
    msg.setSource(25003U);
    msg.setSourceEntity(53U);
    msg.setDestination(1081U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("DHAVVLAENRDXUMEYOACVQEBGQEDPZAXAVXOTNXSHSTUFQI");
    msg.formation_name.assign("UFCDJFKKGZMWWATLHYNIWHGVUYPXPSOXSJKUSDYTUSXDQBMIGYQLI");
    msg.plan_id.assign("XNUEGSKYGZVPYQMMXAZBGMVMXRIJCVJSWNRUFRRYWCBSRIOMVHTTLXZOJGBXKYDCXQFGJDILSKQNHDZSCTSAIRQFSQQFANEPDOBLEUKZBLKQAPWMCAKSTYHFEZSLVHKHJIUNWFLPTMRGOHHNVLJZJUAXHSEUGXLPLYPGQKTETDBPWDJJVCEGFQYF");
    msg.description.assign("IVJIOQVVPYLDWQAIQJNGBFLSZFYQKQVPFEWXPWPBPDSWPXHSRQZCEKZYOUSRBOUCWQITRYEHSBNFXUNVHGXPKDZIJTVPIOSUMNYSOMZCYDJCSFPIOGRJQDGAHHKCDFEVFBTFAETQLRURLEKEGUZTHTEMLXGKJURWMUCMYHGGKWFHLXAWNYVMWEIOGNDNTRPXANZTDRUBECNMBJKHBGXVCASAOQJZZACTLLVKI");
    msg.leader_speed = 0.00926454008799;
    msg.leader_bank_lim = 0.208669627547;
    msg.pos_sim_err_lim = 0.153477837508;
    msg.pos_sim_err_wrn = 0.461887025642;
    msg.pos_sim_err_timeout = 56639U;
    msg.converg_max = 0.452839188878;
    msg.converg_timeout = 31544U;
    msg.comms_timeout = 31603U;
    msg.turb_lim = 0.722078338307;
    msg.custom.assign("TSJPPQAEGDXJMTHGSXQTWRZOVPWGHVFTJUNBKWBNNCZPGOCQOGVOVNIXUJWAYNYQMGLHMGDNRDRHBWYKJKDCV");

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
    msg.setTimeStamp(0.995954379128);
    msg.setSource(5213U);
    msg.setSourceEntity(153U);
    msg.setDestination(43565U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("CKAVGACZVRKVLTPAGJCPOPRUQZIJXTWDHVZBJMESGYUPFEQRYJBLBDZXYFKFQWMQAMUJSGEAGUTISHUXMXLPQOIYCNPEENQCXBBQIREEHFYLGKTJIWPZOUNUXSAFJOVNUPRXLSSWEOOJQTNBNKNBPFTMGDWUYDYLNRDMQZCKFBOSPWMVHDUKIGZVBOHRICWNLXCAH");
    msg.formation_name.assign("IQHPHOHPQMEXKQTHZUXPTRADVIQJJRZAXVNWCBHBDOYYQLYECEOPALQELLGSBTNVTCMZUOKUWGYVHSFCAICRETDLTMKYHOKLCFWRJPXRSRPKYIJKSTOMTPWBSYOWQLJVJWNLGZZFBDLLEMIHWWSHODPMFCZJQKEFARKMXGIXWNQBXNXKCDOYCTGFJGEZNEBUIMJVBGUJXMZV");
    msg.plan_id.assign("TFSWVZONDQENWTYGFLHVJZYJIMRFUBXQVLYHPDDCEIXQTJPMEJGCTJHUSFLSOWUHYMAAIRGKMLRKOCICAZOGWSXBWZVTUXLLQYBOAJXKHDVYPRPEDVVKYOBQCJHMOCPIBRFVNWQHFVRYJNKIBFNZTTDJN");
    msg.description.assign("CHGYGNQDJIKEIIZCKMPCOYULCUSRVGPOOIRAJHEYHBDPBAAFUUZLIZKKNGRHHPT");
    msg.leader_speed = 0.864914747437;
    msg.leader_bank_lim = 0.750344234672;
    msg.pos_sim_err_lim = 0.143231487822;
    msg.pos_sim_err_wrn = 0.527106581273;
    msg.pos_sim_err_timeout = 33744U;
    msg.converg_max = 0.813479312332;
    msg.converg_timeout = 36894U;
    msg.comms_timeout = 11877U;
    msg.turb_lim = 0.0325723569431;
    msg.custom.assign("ZGJUMBZZWMOJDDMLBQSEGKIWVKYAGIFTEBORNASGAXFQBIUIASRVDFOSDZATPGLLWRKAYUMORDIMNYKFTQILGZJKDOQQXAJBZNFXNXEXYWTTUCRWKSQDGYHVJVELUHCVBEVCAWSUNGKNJZHWUEUQNQPCAVZQRNMSQDPDUOIYTECOSHPPEJVJLVMTCPROMWRBKHCFJXJHEYCRLBNFBYTMPYSAXKHLCPRIBFZOSGHDXXXWTHVPOLWF");

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
    msg.setTimeStamp(0.213988859207);
    msg.setSource(9601U);
    msg.setSourceEntity(149U);
    msg.setDestination(55429U);
    msg.setDestinationEntity(209U);
    msg.group_name.assign("RRZVOZWGTIJNYNWZJSOAFNJITRZUIZRVCKFIFBTLLTBFMGRZWVZWRCXOAKEFMEJXSQMKGPHOCHRGPAULQYTYOLXQANPMQIACGSWVQEQOVAZCKRRYIPVDXDVHJUCKKESWBQXYCTBOXIHBLHLSDQNEFVJDYDJFLHRSGNKQKLKDDZNNLTCTAVGEGWDYMYWSHHPTUJOMKJWEBLNQSXXBFUPOCXEHAGBMPF");
    msg.formation_name.assign("SUMPVRJZFILQZXAXXXXGVWWYDXVZJEPWQISBYMGGWZQBRXKSPEAVILQUFETPUCJOQMNVHEULNGBUUFC");
    msg.plan_id.assign("RTPOBUQFJJPXWNRZLPKVPBGYVXOXVFMLPXCKRRLVUBVYQYHZHFYGTVHMPELDDEZJIKOKNAXTANONTPSQEWISUWCNJAGLNFXYIBKOGTIXSVXGLMOZTSNTPIHNGKANWCDBSQWIUCVVOBEHUMPSZGFBMGZIDDCQRIAPQCFEBKEDLSRFNQAJEWJUAWXFECJMSBZ");
    msg.description.assign("HVZYHSRFZMRKYOPWPNCVMCPWAUCHTEDYLBYTPLXZIEFZABEWBBFBVGCICIFXJCQOXSLLZANXAZOTXWOHBNRKUHNTVHFSQEOJRKBPSLWTGDKGRMRRVAMUXXQJDVXUEMOGCVPJLTPJFDNDLZLYIYFTKSSGRXJQFFWOYJIAQGFTCHMWPPGGRMSGQEZKSDILJQBVKCBQUTINYJOIDLKAMHACDH");
    msg.leader_speed = 0.461605277062;
    msg.leader_bank_lim = 0.181046088533;
    msg.pos_sim_err_lim = 0.0888100869289;
    msg.pos_sim_err_wrn = 0.697238762761;
    msg.pos_sim_err_timeout = 47010U;
    msg.converg_max = 0.497009162886;
    msg.converg_timeout = 18850U;
    msg.comms_timeout = 57734U;
    msg.turb_lim = 0.805572504807;
    msg.custom.assign("SCDAMVVJLGTSIHZ");

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
    msg.setTimeStamp(0.160996113893);
    msg.setSource(18727U);
    msg.setSourceEntity(25U);
    msg.setDestination(44340U);
    msg.setDestinationEntity(138U);
    msg.control_src = 40090U;
    msg.control_ent = 143U;
    msg.timeout = 0.999773840649;
    msg.loiter_radius = 0.526465860124;
    msg.altitude_interval = 0.11222920729;

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
    msg.setTimeStamp(0.633653656095);
    msg.setSource(4727U);
    msg.setSourceEntity(32U);
    msg.setDestination(59295U);
    msg.setDestinationEntity(188U);
    msg.control_src = 8365U;
    msg.control_ent = 226U;
    msg.timeout = 0.66039365354;
    msg.loiter_radius = 0.77002130013;
    msg.altitude_interval = 0.586675498219;

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
    msg.setTimeStamp(0.157137755886);
    msg.setSource(15201U);
    msg.setSourceEntity(158U);
    msg.setDestination(7784U);
    msg.setDestinationEntity(124U);
    msg.control_src = 25110U;
    msg.control_ent = 187U;
    msg.timeout = 0.761775523026;
    msg.loiter_radius = 0.60877162394;
    msg.altitude_interval = 0.976931777886;

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
    msg.setTimeStamp(0.78468637379);
    msg.setSource(28616U);
    msg.setSourceEntity(160U);
    msg.setDestination(56462U);
    msg.setDestinationEntity(146U);
    msg.flags = 183U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.442057737324;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.444875258468;
    tmp_msg_1.z_units = 63U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.994364556887;
    msg.lon = 0.799232879041;
    msg.radius = 0.699805115196;

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
    msg.setTimeStamp(0.443279560284);
    msg.setSource(24021U);
    msg.setSourceEntity(42U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(85U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.951185727576;
    tmp_msg_0.speed_units = 3U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18952137258;
    tmp_msg_1.z_units = 191U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.189723428758;
    msg.lon = 0.177778464102;
    msg.radius = 0.614684637783;

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
    msg.setTimeStamp(0.488445802608);
    msg.setSource(41987U);
    msg.setSourceEntity(170U);
    msg.setDestination(29266U);
    msg.setDestinationEntity(242U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0834506462584;
    tmp_msg_0.speed_units = 176U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.387826229824;
    tmp_msg_1.z_units = 213U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.229683219615;
    msg.lon = 0.963385172828;
    msg.radius = 0.312312914252;

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
    msg.setTimeStamp(0.453126175215);
    msg.setSource(4648U);
    msg.setSourceEntity(74U);
    msg.setDestination(51936U);
    msg.setDestinationEntity(227U);
    msg.control_src = 46149U;
    msg.control_ent = 247U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 22U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.750923085169;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.715165665453;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.218184415851;
    tmp_msg_0.lon = 0.877619212652;
    tmp_msg_0.radius = 0.683689378116;
    msg.reference.set(tmp_msg_0);
    msg.state = 16U;
    msg.proximity = 55U;

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
    msg.setTimeStamp(0.974934266489);
    msg.setSource(1148U);
    msg.setSourceEntity(42U);
    msg.setDestination(31835U);
    msg.setDestinationEntity(251U);
    msg.control_src = 64207U;
    msg.control_ent = 134U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 43U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0155990533197;
    tmp_tmp_msg_0_0.speed_units = 54U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.396026384342;
    tmp_tmp_msg_0_1.z_units = 66U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.381336286315;
    tmp_msg_0.lon = 0.961884089444;
    tmp_msg_0.radius = 0.52218251745;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 122U;

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
    msg.setTimeStamp(0.946641389398);
    msg.setSource(52857U);
    msg.setSourceEntity(189U);
    msg.setDestination(15056U);
    msg.setDestinationEntity(203U);
    msg.control_src = 38063U;
    msg.control_ent = 162U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 231U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.472883422705;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.442666715834;
    tmp_tmp_msg_0_1.z_units = 151U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.529672272188;
    tmp_msg_0.lon = 0.735939176241;
    tmp_msg_0.radius = 0.383663552346;
    msg.reference.set(tmp_msg_0);
    msg.state = 152U;
    msg.proximity = 141U;

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
    msg.setTimeStamp(0.317854252897);
    msg.setSource(39692U);
    msg.setSourceEntity(55U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(54U);
    msg.ax_cmd = 0.934954461211;
    msg.ay_cmd = 0.742643341259;
    msg.az_cmd = 0.582971167638;
    msg.ax_des = 0.265743020074;
    msg.ay_des = 0.310420935813;
    msg.az_des = 0.60908734873;
    msg.virt_err_x = 0.0520971141431;
    msg.virt_err_y = 0.889641399475;
    msg.virt_err_z = 0.772015982217;
    msg.surf_fdbk_x = 0.537854898083;
    msg.surf_fdbk_y = 0.134815969353;
    msg.surf_fdbk_z = 0.925752044363;
    msg.surf_unkn_x = 0.301825028009;
    msg.surf_unkn_y = 0.187099566929;
    msg.surf_unkn_z = 0.296074067085;
    msg.ss_x = 0.0953420289415;
    msg.ss_y = 0.133841270021;
    msg.ss_z = 0.815024408753;

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
    msg.setTimeStamp(0.139710905644);
    msg.setSource(30123U);
    msg.setSourceEntity(105U);
    msg.setDestination(60036U);
    msg.setDestinationEntity(175U);
    msg.ax_cmd = 0.190376256654;
    msg.ay_cmd = 0.873350274446;
    msg.az_cmd = 0.236435022856;
    msg.ax_des = 0.878138584797;
    msg.ay_des = 0.992830715016;
    msg.az_des = 0.746017006632;
    msg.virt_err_x = 0.387072990467;
    msg.virt_err_y = 0.050400229647;
    msg.virt_err_z = 0.123938951303;
    msg.surf_fdbk_x = 0.639186862698;
    msg.surf_fdbk_y = 0.92455067057;
    msg.surf_fdbk_z = 0.989309488039;
    msg.surf_unkn_x = 0.836117505542;
    msg.surf_unkn_y = 0.863325333491;
    msg.surf_unkn_z = 0.363512544171;
    msg.ss_x = 0.864723284362;
    msg.ss_y = 0.198509783197;
    msg.ss_z = 0.842069179252;

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
    msg.setTimeStamp(0.610306874284);
    msg.setSource(50102U);
    msg.setSourceEntity(203U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.894969849167;
    msg.ay_cmd = 0.728153388314;
    msg.az_cmd = 0.571636358706;
    msg.ax_des = 0.155290650457;
    msg.ay_des = 0.697299194255;
    msg.az_des = 0.0883522709762;
    msg.virt_err_x = 0.278427432093;
    msg.virt_err_y = 0.534479469669;
    msg.virt_err_z = 0.919015437723;
    msg.surf_fdbk_x = 0.104079536491;
    msg.surf_fdbk_y = 0.0529725780333;
    msg.surf_fdbk_z = 0.332716095002;
    msg.surf_unkn_x = 0.958694930534;
    msg.surf_unkn_y = 0.54416586921;
    msg.surf_unkn_z = 0.914285437546;
    msg.ss_x = 0.728585601807;
    msg.ss_y = 0.493396979947;
    msg.ss_z = 0.554968705828;

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
    msg.setTimeStamp(0.260229519226);
    msg.setSource(7505U);
    msg.setSourceEntity(2U);
    msg.setDestination(11204U);
    msg.setDestinationEntity(67U);
    msg.s_id.assign("GHCWIRFXLSQGNFICZCNKCEFPBNIHULNGAOKNIKKWTYVBDHNMSDYLWRLPYYFTJEZJDPZJGPXCETCRVIHBNKBOYCDFHMRZDASOGTCTZDQQQHUNHBZSFKSVVLQJOSHKYIVWLPGJBQUCXUXNGM");
    msg.dist = 0.199395985465;
    msg.err = 0.54986791716;
    msg.ctrl_imp = 0.891649179328;
    msg.rel_dir_x = 0.791240241168;
    msg.rel_dir_y = 0.240408409103;
    msg.rel_dir_z = 0.0717661768838;
    msg.err_x = 0.501376854941;
    msg.err_y = 0.156368418997;
    msg.err_z = 0.0518817658382;
    msg.rf_err_x = 0.656655401576;
    msg.rf_err_y = 0.341082634723;
    msg.rf_err_z = 0.355156657677;
    msg.rf_err_vx = 0.876689417212;
    msg.rf_err_vy = 0.989136230727;
    msg.rf_err_vz = 0.573708769452;
    msg.ss_x = 0.495019791419;
    msg.ss_y = 0.206130076906;
    msg.ss_z = 0.00664439246871;
    msg.virt_err_x = 0.253063787501;
    msg.virt_err_y = 0.610441243275;
    msg.virt_err_z = 0.80621813401;

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
    msg.setTimeStamp(0.652016575774);
    msg.setSource(25231U);
    msg.setSourceEntity(240U);
    msg.setDestination(46706U);
    msg.setDestinationEntity(136U);
    msg.s_id.assign("JJARCSFCVV");
    msg.dist = 0.207262627427;
    msg.err = 0.710390567186;
    msg.ctrl_imp = 0.707227515206;
    msg.rel_dir_x = 0.095200917664;
    msg.rel_dir_y = 0.107060957298;
    msg.rel_dir_z = 0.164529059477;
    msg.err_x = 0.533254271769;
    msg.err_y = 0.687166978415;
    msg.err_z = 0.597265292989;
    msg.rf_err_x = 0.883160661085;
    msg.rf_err_y = 0.793179232075;
    msg.rf_err_z = 0.03537367136;
    msg.rf_err_vx = 0.521328501497;
    msg.rf_err_vy = 0.176137245651;
    msg.rf_err_vz = 0.0409916758831;
    msg.ss_x = 0.21540401992;
    msg.ss_y = 0.786807195523;
    msg.ss_z = 0.827251879102;
    msg.virt_err_x = 0.45487769014;
    msg.virt_err_y = 0.45536678704;
    msg.virt_err_z = 0.34763890137;

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
    msg.setTimeStamp(0.0324262022618);
    msg.setSource(61116U);
    msg.setSourceEntity(116U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(143U);
    msg.s_id.assign("BRTKUKRDALXUSDXVWBTMUJDMAXPVDSJDIJLGNXKOMWQHZINNQFHXRDDFGYYGVVBPCCYKIFDDHAUGLTZJWELNUCJXJSGOPPFXAVHESKIMAVHCBBVREQHVRPJZRELAQYTRJOBOSOEWMZAQOMBCCUTFZGCPYIXEVOWWPNOQRKLYGQXUAINTEKZLMPFRBNEWKHCF");
    msg.dist = 0.0718621409061;
    msg.err = 0.946010831846;
    msg.ctrl_imp = 0.410614572077;
    msg.rel_dir_x = 0.414903133011;
    msg.rel_dir_y = 0.273665815159;
    msg.rel_dir_z = 0.707520062207;
    msg.err_x = 0.887544211682;
    msg.err_y = 0.231291458794;
    msg.err_z = 0.04041039844;
    msg.rf_err_x = 0.897862995584;
    msg.rf_err_y = 0.856798690332;
    msg.rf_err_z = 0.351101227348;
    msg.rf_err_vx = 0.0376335576007;
    msg.rf_err_vy = 0.799648936012;
    msg.rf_err_vz = 0.539918593208;
    msg.ss_x = 0.480012409835;
    msg.ss_y = 0.336324481589;
    msg.ss_z = 0.110568625018;
    msg.virt_err_x = 0.667478058677;
    msg.virt_err_y = 0.0978768390001;
    msg.virt_err_z = 0.734897857783;

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
    msg.setTimeStamp(0.569781545045);
    msg.setSource(24583U);
    msg.setSourceEntity(156U);
    msg.setDestination(8389U);
    msg.setDestinationEntity(151U);
    msg.timeout = 15121U;
    msg.rpm = 0.572762347184;
    msg.direction = 149U;
    msg.custom.assign("NHDBICDUKDPDHFNFKMQMXNIXDOXAWVHXEUGSXYSLRHPUBSXGAJHOPQELKERSALSYTWVUFZACBOIAZSIZCJKNVMUSTBPARMJZTMBTKDBOXJWNFEKYPHOXDUFDCQNQRGJCYMZNNECVVZJTVTPDYAVQISNGKLYUEPORCYJQBEAJLWQMHWVRUYRSAZIPIQEPGFWJRIXZFJRBMIGGVLFDMFFWEKOLOTKUNGVGYCLHHHOWKATSQB");

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
    msg.setTimeStamp(0.0280718615691);
    msg.setSource(64972U);
    msg.setSourceEntity(76U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(23U);
    msg.timeout = 21774U;
    msg.rpm = 0.224176026675;
    msg.direction = 208U;
    msg.custom.assign("MGJMFVYGIGHSURUDRPVLTADJZUBQWYMLPTZTJKBYDFKTBATBHOIIWOQUJSULBVNGESCBMZCKAHFSHUEQHTQAEPGBCDAOGCBXDJPRTFWMSQUWSHWPVJNONVQLGIBSEAALZHDTYAPYGXZAORIVMVBCYRLOOXEJGZWDMUYJSIUJWQXOXEKCPKDXWNKOREDQEYXIJKTIVNPXNXZNZENCMEMVHQPOCRKLNZDSWLX");

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
    msg.setTimeStamp(0.124726217297);
    msg.setSource(25227U);
    msg.setSourceEntity(10U);
    msg.setDestination(58101U);
    msg.setDestinationEntity(39U);
    msg.timeout = 35324U;
    msg.rpm = 0.612510993702;
    msg.direction = 61U;
    msg.custom.assign("RNIRTVOVAYJMZKPKDIBJOLNZALQWUDFPSJQVMWEMTJHZVPZVAJNNKYZAFOLUPPOYOAHXYRGCURQAEFTHBGZCCOTI");

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
    msg.setTimeStamp(0.331985415022);
    msg.setSource(55887U);
    msg.setSourceEntity(42U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(16U);
    msg.formation_name.assign("QZOUCWWXVZWKAFPFYFQYWWAMTPOLIENJSLXZNODTIGNUUGMPJIOTYKEIQUGRXTUZFGE");
    msg.type = 103U;
    msg.op = 219U;
    msg.group_name.assign("TGMPGVFRYXKOUKJVPVIDBLCSQVNCBLPDFVJIESSURUYOFEAXWCVPMFDSJJTYRLMWFKF");
    msg.plan_id.assign("QYPWRIPHYJKOVFUPJJZYDLNNFIEFHTONGYEVSLXDJBFERQVSWUWXVLNZPZJETHPQABFCWKKSMZKGGPJSNCCYOBXIITKXEXBMGMBZNTKYFDLOHYSYEHTBGREDSHSDAAZDTFGORXOLBQS");
    msg.description.assign("CPYUUVZEQIBQXEDBKNFDHJVMWUSKWDTIATXDH");
    msg.reference_frame = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37640U;
    tmp_msg_0.off_x = 0.363854962243;
    tmp_msg_0.off_y = 0.116069602425;
    tmp_msg_0.off_z = 0.780220016537;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.288020501401;
    msg.leader_speed_min = 0.148524111308;
    msg.leader_speed_max = 0.544957863473;
    msg.leader_alt_min = 0.0650579112462;
    msg.leader_alt_max = 0.389856078746;
    msg.pos_sim_err_lim = 0.342340783916;
    msg.pos_sim_err_wrn = 0.340015226507;
    msg.pos_sim_err_timeout = 6268U;
    msg.converg_max = 0.122570323928;
    msg.converg_timeout = 10522U;
    msg.comms_timeout = 59462U;
    msg.turb_lim = 0.26181696912;
    msg.custom.assign("IMPZDZNHTLWELIUBQPQQYADKYGCKNJOKJPXXLNNQVANVOIYMXRFCUMKBEADMFBJFZTVQ");

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
    msg.setTimeStamp(0.639394029107);
    msg.setSource(58844U);
    msg.setSourceEntity(201U);
    msg.setDestination(19025U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("TMBULZDSJEVXSELFVTZUXPQKHXRNRPWOOOUAKGLZWPTMIPSXGZJGWQMIJHANIJYNB");
    msg.type = 120U;
    msg.op = 84U;
    msg.group_name.assign("ZFOFSIUHWBTJFYUSRTCYRFNHXQOEFKCHGUSIUDRRHAXEEQIAWETMMYWFULCOJRDEMBUKODADGVJXGNWBQJWLPTNFLGRTVHAZZCXXSPVADGQZUECRBVCYQVLCXWHYPBPSEKRHPLLBKTQYOXNY");
    msg.plan_id.assign("ZHOYATSWCJVIHCHHVPRFOWISQQOMQMCNILISPSRKZXYYACEETCNLYLGNLGKZDXGIQUADNVLAKJHMKJUQRRYXZTPOSLDZTQXQZRJFVTYAEQJKEOEKIHULIRKGGFMQFXQJPVN");
    msg.description.assign("BUDMODSIIFBBVRQRKFQJXCPDYLLNBACPKVARWHSCOLPIXTUNZJJMHLFFXNUNTEBURTPHEZOPKYDVUJJCFSEJHGTRIWAMQCTFAWHWTCOGYQRJCYDLHMFDGKRITUAXIKELAFLVBAJZGDGXBDEOGGVZEKOYIZHRTXEIMZWVXXNEVMHKPQSNKXSMUTYKNWRAYTSSWFWHMFOXVGCRA");
    msg.reference_frame = 166U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37901U;
    tmp_msg_0.off_x = 0.259526342961;
    tmp_msg_0.off_y = 0.534375853661;
    tmp_msg_0.off_z = 0.999795808932;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.434650845497;
    msg.leader_speed_min = 0.983536102504;
    msg.leader_speed_max = 0.485175912711;
    msg.leader_alt_min = 0.0259250552592;
    msg.leader_alt_max = 0.700303411485;
    msg.pos_sim_err_lim = 0.800254081013;
    msg.pos_sim_err_wrn = 0.149037341259;
    msg.pos_sim_err_timeout = 56802U;
    msg.converg_max = 0.740657017898;
    msg.converg_timeout = 17135U;
    msg.comms_timeout = 46528U;
    msg.turb_lim = 0.217067932064;
    msg.custom.assign("YSDFLUZRVMSXZXXOZTPZWFHORMSTDZMKDZWKALRFGQQXYMBJLGHFJWFGBVEFJDSBTRPLWRDVVESXIJVOUVWBNBUVPSPLIILFUCPYAGLJTTKDAIPDAZVOVKBSIQAEBJWNUTMYRJIUYHCBQIENGOJODGXSQYAACCZNN");

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
    msg.setTimeStamp(0.515238009769);
    msg.setSource(30693U);
    msg.setSourceEntity(157U);
    msg.setDestination(18217U);
    msg.setDestinationEntity(2U);
    msg.formation_name.assign("HIWERQWNOZQKDFZHUNLILVSFVWEFEOZYLRCJASNXIFZCVTONDKNQNOHIJLWCGVGLRCBPMFJWXIFDBVMAYTXHVPXZRYKUWCBHZOXZXMDYNDYOSMYMLUKSRZGRXJD");
    msg.type = 111U;
    msg.op = 203U;
    msg.group_name.assign("BHPKBIXXNMLM");
    msg.plan_id.assign("KDGQVLVIGVYUNMRDSXWHUVQRWLDYPTBZIAPLXNLAUTQBJNWBLTYJBDJZNHJZYCYHODYDJXXWXJSAPXCCHKSSUREZBMWLVIPTBEMGRYEQAHMTBQACGSBSFKAQBTPGWJOEEFSRNIDTGMJUZQOHPUXQOPFGWIKMVQMEKVOGLFWUMRAKRSTORLZBHEASOAFCUNKPIYQXAIUXEGKNHDOTFRHCUIPLORICZWHXP");
    msg.description.assign("BGUMIBTGGKHNEJYESOICAJUTBFWBWPVSN");
    msg.reference_frame = 109U;
    msg.leader_bank_lim = 0.993638718083;
    msg.leader_speed_min = 0.11922156303;
    msg.leader_speed_max = 0.23811146308;
    msg.leader_alt_min = 0.738771226619;
    msg.leader_alt_max = 0.226592298498;
    msg.pos_sim_err_lim = 0.680401774001;
    msg.pos_sim_err_wrn = 0.312475537174;
    msg.pos_sim_err_timeout = 39203U;
    msg.converg_max = 0.579823084123;
    msg.converg_timeout = 55817U;
    msg.comms_timeout = 41503U;
    msg.turb_lim = 0.338310634196;
    msg.custom.assign("FMTTTSJGGBGVEVFQPKBOJIARXQDPEDOIGWVCLNOCHUNQKDMECBSSLYGUDHBJHAHDLVNNYSRFTXNRJLHMNLVLQFGAABBSJGPDWXOOUSKERLPDUEAMPYYVILPIYZZZQUSZNIGYJXOCPYWXRATTXHSCUDUBZTWJBESWFFVKTAIIJEVJXHCSQJEBGYNIUXBHQPFZVPOZEMWDGMHQNOKWLMANUFRIQUXKWAEFOTHOYCWCZPVDRZAMZLKCFIKRRXC");

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
    msg.setTimeStamp(0.969547377845);
    msg.setSource(52076U);
    msg.setSourceEntity(17U);
    msg.setDestination(42682U);
    msg.setDestinationEntity(52U);
    msg.timeout = 24936U;
    msg.lat = 0.598079557388;
    msg.lon = 0.352459421763;
    msg.z = 0.451145439841;
    msg.z_units = 169U;
    msg.speed = 0.0302979107685;
    msg.speed_units = 48U;
    msg.custom.assign("LPNHNZSPJKKQRNRWOKXPJZYARUBCJBAJVQM");

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
    msg.setTimeStamp(0.0679157871326);
    msg.setSource(37225U);
    msg.setSourceEntity(85U);
    msg.setDestination(6839U);
    msg.setDestinationEntity(186U);
    msg.timeout = 50575U;
    msg.lat = 0.993274628359;
    msg.lon = 0.478873360981;
    msg.z = 0.941274347219;
    msg.z_units = 216U;
    msg.speed = 0.729921902633;
    msg.speed_units = 95U;
    msg.custom.assign("RFODZVAUHVDZARHICTKKVAERDLWOPOVXHVXNFVDCSGRTYOQLBGBXYYOIVJDNTYXVXKHEMIEMDSR");

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
    msg.setTimeStamp(0.171970441329);
    msg.setSource(487U);
    msg.setSourceEntity(236U);
    msg.setDestination(25764U);
    msg.setDestinationEntity(44U);
    msg.timeout = 61197U;
    msg.lat = 0.893077728099;
    msg.lon = 0.743854937475;
    msg.z = 0.0699288556785;
    msg.z_units = 249U;
    msg.speed = 0.887462245768;
    msg.speed_units = 86U;
    msg.custom.assign("WUFYJRVQXWPDQAJGTDFPJZILUDZVIAMYPFCUCNTYYCDERGKLORQDBVITLWUMHCGOZGAMRSBEZVXPIWHMTQRRVXZNBLINCCJNUWVZGRAOPMHJOYDJKWXQCXYQSAURGKOBACKREXXVLFPTIOLALBCBOUSTJGNOQIYBSEIYIDHHMYFFRFUXMSPXZSPFGWJYVGWWJKVKZDESSZQTBDFNKOMHCEHAKTWDBK");

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
    msg.setTimeStamp(0.150350266822);
    msg.setSource(23201U);
    msg.setSourceEntity(228U);
    msg.setDestination(64701U);
    msg.setDestinationEntity(44U);
    msg.timeout = 3549U;
    msg.lat = 0.220421534095;
    msg.lon = 0.802192579028;
    msg.z = 0.0417632586699;
    msg.z_units = 193U;
    msg.speed = 0.234141082336;
    msg.speed_units = 209U;
    msg.custom.assign("PBXMQGZIGLSKLBTJIVBGQBELQRSKCPSXIYHOZUFGFWECBGWYKF");

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
    msg.setTimeStamp(0.56634238767);
    msg.setSource(49050U);
    msg.setSourceEntity(209U);
    msg.setDestination(65484U);
    msg.setDestinationEntity(147U);
    msg.timeout = 44681U;
    msg.lat = 0.917297320165;
    msg.lon = 0.58535817166;
    msg.z = 0.239277641482;
    msg.z_units = 110U;
    msg.speed = 0.707122668479;
    msg.speed_units = 60U;
    msg.custom.assign("RAFEWEEUDXFNRGSGZIAVDDJUFAGVJTSMZDCYUTJYTAJIPCBIDZLRLZISOBWPYGYLBYOHPMXHRRWHUKRWUFQTXNESTJQHQAUPGNYWGPJNYMVVPMQE");

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
    msg.setTimeStamp(0.500990429187);
    msg.setSource(35834U);
    msg.setSourceEntity(234U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(57U);
    msg.timeout = 65216U;
    msg.lat = 0.936404811842;
    msg.lon = 0.313605956395;
    msg.z = 0.173415698663;
    msg.z_units = 160U;
    msg.speed = 0.183288099762;
    msg.speed_units = 171U;
    msg.custom.assign("DZYZMXCBYMQSHTZVDTXPZRWICOAYXFDDKESUEEZNIJXDOIQCANXJZWKNNJKSHMGYKNNKHEEVOWYBYCAWAQOOJPHLPSIBKPURCXDHHKRIOBLRGNPHJBXWCJZEDBMFTGOFTRSQLHSWEOZBVVMGJYCTNPQRCYYU");

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
    msg.setTimeStamp(0.906125710082);
    msg.setSource(53004U);
    msg.setSourceEntity(213U);
    msg.setDestination(17012U);
    msg.setDestinationEntity(134U);
    msg.arrival_time = 0.973923041983;
    msg.lat = 0.410620321291;
    msg.lon = 0.673580550601;
    msg.z = 0.84788041276;
    msg.z_units = 132U;
    msg.travel_z = 0.359297481429;
    msg.travel_z_units = 41U;
    msg.delayed = 103U;

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
    msg.setTimeStamp(0.312916499777);
    msg.setSource(62739U);
    msg.setSourceEntity(181U);
    msg.setDestination(18571U);
    msg.setDestinationEntity(176U);
    msg.arrival_time = 0.447254800896;
    msg.lat = 0.779372478409;
    msg.lon = 0.324249067748;
    msg.z = 0.276939159572;
    msg.z_units = 244U;
    msg.travel_z = 0.24090412551;
    msg.travel_z_units = 6U;
    msg.delayed = 25U;

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
    msg.setTimeStamp(0.484165206783);
    msg.setSource(8274U);
    msg.setSourceEntity(89U);
    msg.setDestination(59014U);
    msg.setDestinationEntity(51U);
    msg.arrival_time = 0.761755049717;
    msg.lat = 0.86938826655;
    msg.lon = 0.757161750381;
    msg.z = 0.362263920487;
    msg.z_units = 169U;
    msg.travel_z = 0.322593300832;
    msg.travel_z_units = 201U;
    msg.delayed = 219U;

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
    msg.setTimeStamp(0.303360354676);
    msg.setSource(18368U);
    msg.setSourceEntity(204U);
    msg.setDestination(23768U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.466347037959;
    msg.lon = 0.118220829701;
    msg.z = 0.702001670751;
    msg.z_units = 96U;
    msg.speed = 0.634967432172;
    msg.speed_units = 146U;
    msg.bearing = 0.795436566195;
    msg.cross_angle = 0.427245282366;
    msg.width = 0.242182653557;
    msg.length = 0.74799190202;
    msg.coff = 95U;
    msg.angaperture = 0.00962716653111;
    msg.range = 13591U;
    msg.overlap = 43U;
    msg.flags = 60U;
    msg.custom.assign("NVCXCISXLUMQERPYZICHEMDONVRDKFOMQEFJYPNEIZHBAUOMJOFTKVNGHAFFDHQXTUETWFDQXPGWNQZLWIGYZVWWVWLAUQATHXBGHMJGWFWBCQBLDASCZRRZXMOWJGLJSGVTRYCGLSYTKLNUHCABZONEZSKJREPKPEBSNDSSREHAYTMBSIJLGQAYXIBBZ");

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
    msg.setTimeStamp(0.481741730514);
    msg.setSource(28119U);
    msg.setSourceEntity(194U);
    msg.setDestination(33134U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.303487203923;
    msg.lon = 0.426452861935;
    msg.z = 0.235663550642;
    msg.z_units = 146U;
    msg.speed = 0.893738838137;
    msg.speed_units = 162U;
    msg.bearing = 0.318267634583;
    msg.cross_angle = 0.861734261314;
    msg.width = 0.706250579564;
    msg.length = 0.842195375089;
    msg.coff = 141U;
    msg.angaperture = 0.0587089203391;
    msg.range = 50183U;
    msg.overlap = 62U;
    msg.flags = 187U;
    msg.custom.assign("RGZZHLQDINAHIJIUZFTKXOCPCNFEGEPWWODWHCSSGWBDQYTKWZUICYHQEEXSUKJUJPNSQUBPVKTQZGKRSOFAMBCEAVLSVXZPOARFMQQCBHILKRLWOPHVFGKUIMNAJRFFZVWPTLTYVGMTYXCJAHVWHDDYPOKJTSMMQXMYIMBQBJSJ");

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
    msg.setTimeStamp(0.602036413955);
    msg.setSource(40846U);
    msg.setSourceEntity(226U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.241381846603;
    msg.lon = 0.829767052736;
    msg.z = 0.860850985878;
    msg.z_units = 38U;
    msg.speed = 0.876378592925;
    msg.speed_units = 242U;
    msg.bearing = 0.308600083259;
    msg.cross_angle = 0.36423012123;
    msg.width = 0.186342461325;
    msg.length = 0.487744663563;
    msg.coff = 86U;
    msg.angaperture = 0.0232917633807;
    msg.range = 29859U;
    msg.overlap = 182U;
    msg.flags = 78U;
    msg.custom.assign("XPRSQFWUTCEXAETQHYKNAQFPYTELCPEBOEZHFPVZMVTYTNFWNHSSLJNNBCKKLXNIDOACRTAJMBMLWJGMHKMGWXQUUDKXVRKYYWZGFYJLQMOSQTSLPPGIDPEAPHTLOB");

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
    msg.setTimeStamp(0.574360390845);
    msg.setSource(46687U);
    msg.setSourceEntity(14U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(2U);
    msg.timeout = 15622U;
    msg.lat = 0.396706817368;
    msg.lon = 0.252520661515;
    msg.z = 0.42730365158;
    msg.z_units = 202U;
    msg.speed = 0.789210126454;
    msg.speed_units = 192U;
    msg.syringe0 = 105U;
    msg.syringe1 = 110U;
    msg.syringe2 = 241U;
    msg.custom.assign("KBTLUGCKYFJQILETRVFWWXKTPZIQJMHVMDJZUPUAKNXQOBEHFYCKBJMRMLZDBPSDVOFMSOBQUXEBBPULAGHFLPWZNOMCWJCTEASWAUECKPILQARGNZVLDTWNTHVYIHWTDNOMZBSKHRLIROCYELBUAIIXUOPLDWUGVAZGQSZPPJOHTXYDHYARYGCKERRCQXDNHYGDZQGZPAMXEXNJN");

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
    msg.setTimeStamp(0.658584735842);
    msg.setSource(5186U);
    msg.setSourceEntity(254U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(207U);
    msg.timeout = 37451U;
    msg.lat = 0.550482158236;
    msg.lon = 0.358261778499;
    msg.z = 0.569268141185;
    msg.z_units = 15U;
    msg.speed = 0.738124909892;
    msg.speed_units = 26U;
    msg.syringe0 = 226U;
    msg.syringe1 = 245U;
    msg.syringe2 = 150U;
    msg.custom.assign("QAXAVNKWSASEFLEXLNHGWIQVRXAGRGTORCWVKFDUDYZUVOEKPJROFOWTNVWCFIIJXURPWRPXGDNBKTMMLXECKSYXKNGAJGHCMJTUBJGHBYTUYDONBCDJECCQLMHRMZWIPATZ");

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
    msg.setTimeStamp(0.108714118494);
    msg.setSource(43286U);
    msg.setSourceEntity(193U);
    msg.setDestination(47902U);
    msg.setDestinationEntity(36U);
    msg.timeout = 16478U;
    msg.lat = 0.0512887259129;
    msg.lon = 0.00898541053226;
    msg.z = 0.0442914018389;
    msg.z_units = 65U;
    msg.speed = 0.837757629719;
    msg.speed_units = 58U;
    msg.syringe0 = 147U;
    msg.syringe1 = 11U;
    msg.syringe2 = 11U;
    msg.custom.assign("OMYQBOFEUPOPMVARXHFRODQIZFCMZTTQBVHRJKNKJHNVJWPYKIFCAFTSTZOSQWIYTOLVBZXRSUXRLTXULCPOPMLPJMWNBWDYMFVFGWHMVKALXYCE");

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
    msg.setTimeStamp(0.082233569105);
    msg.setSource(25475U);
    msg.setSourceEntity(226U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.292881696347);
    msg.setSource(7942U);
    msg.setSourceEntity(244U);
    msg.setDestination(62236U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.405919471703);
    msg.setSource(41513U);
    msg.setSourceEntity(242U);
    msg.setDestination(60841U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.354379353661);
    msg.setSource(18975U);
    msg.setSourceEntity(157U);
    msg.setDestination(53971U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.351981308105;
    msg.lon = 0.750389367904;
    msg.z = 0.882038094736;
    msg.z_units = 249U;
    msg.speed = 0.671934286837;
    msg.speed_units = 48U;
    msg.takeoff_pitch = 0.0684773762667;
    msg.custom.assign("CIPYZVEFCIHSDSNSKCECHRGBMVGOOAPXAJPUQQWDIUWBKFJUBGGNKXBWPAIZTWYGPINJTTVSHJHRUFINCHTDZHELRYQYJGCRTZBLYMRZSJWTNJXGTRSHFLEEYMOWAYLKNMEYIBFLDQYOFR");

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
    msg.setTimeStamp(0.47783767173);
    msg.setSource(14623U);
    msg.setSourceEntity(76U);
    msg.setDestination(13811U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.372594948943;
    msg.lon = 0.669412935012;
    msg.z = 0.671880714151;
    msg.z_units = 175U;
    msg.speed = 0.594991750479;
    msg.speed_units = 72U;
    msg.takeoff_pitch = 0.0241188257693;
    msg.custom.assign("OZTJSKXQLXCP");

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
    msg.setTimeStamp(0.209319709224);
    msg.setSource(41337U);
    msg.setSourceEntity(27U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.793122902208;
    msg.lon = 0.648299351878;
    msg.z = 0.815360784701;
    msg.z_units = 52U;
    msg.speed = 0.947152431967;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.0994391746125;
    msg.custom.assign("YAMRDKYNYBENGHTLSMEHBAJPWBGKHFRCPPFJHITCSNQVTOZKFOGJNLFULMRKEDNILBQXYWCZVLSYUUUQINGEQIOEZIRSKXIZWBBXDWYCRVAPCDNYGRHDUMKAGPDNRVGNBZLFXTRVLJUDNJSXUGPBOFPOZXOIQJQIDQMWWAYECPTEVVLEXQOJXMJOHMRLMATGSUOTPAAXZWWGSEMQZJFXSOLZCYHEVTUSQKFCRDCBIDMAKC");

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
    msg.setTimeStamp(0.535956734367);
    msg.setSource(39908U);
    msg.setSourceEntity(202U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.00670708759436;
    msg.lon = 0.691057896557;
    msg.z = 0.562726755931;
    msg.z_units = 48U;
    msg.speed = 0.642853002256;
    msg.speed_units = 199U;
    msg.abort_z = 0.553072800101;
    msg.bearing = 0.816353860162;
    msg.glide_slope = 57U;
    msg.glide_slope_alt = 0.577312353432;
    msg.custom.assign("HEHTXPFHLXPWUZCJOBHRWZDAOFGJNKMRLUNZGKBTGJJDYCOWZKIGNAYVRSLVLMG");

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
    msg.setTimeStamp(0.559499441521);
    msg.setSource(56945U);
    msg.setSourceEntity(96U);
    msg.setDestination(45918U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0169854542266;
    msg.lon = 0.955757618741;
    msg.z = 0.40505217811;
    msg.z_units = 227U;
    msg.speed = 0.551203749838;
    msg.speed_units = 190U;
    msg.abort_z = 0.475157919233;
    msg.bearing = 0.142818162974;
    msg.glide_slope = 104U;
    msg.glide_slope_alt = 0.770067617441;
    msg.custom.assign("NHBEBQSVBKAGIINOPCXCFZYCTKMZCROEFFISNLYLSUFTMJQIHHSCRQWTBEWUXRLUHHGWEONARXOXHOZYAWKWZBCLUIOPTAWKHXQLARVIZVJPDJVBLJVDGECTPALMXUYBSYQGEQMWENXZHDZKBNXTFKSRPOMZLQJANILUMJSPRQACRKIJVGAPFCJMGBYOJKWAIDDSVZLNFSJHHISKRVRWEOQ");

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
    msg.setTimeStamp(0.641526633632);
    msg.setSource(3221U);
    msg.setSourceEntity(250U);
    msg.setDestination(39424U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.101719588066;
    msg.lon = 0.420763498088;
    msg.z = 0.099591566049;
    msg.z_units = 87U;
    msg.speed = 0.950381382725;
    msg.speed_units = 237U;
    msg.abort_z = 0.226610705626;
    msg.bearing = 0.719207410314;
    msg.glide_slope = 17U;
    msg.glide_slope_alt = 0.681362532592;
    msg.custom.assign("BNDFVZGADUKLXPWSNABIDAOIEFZXRBZJOUMLYIFSHBFJWCOVPCULRDIACLKHQXVQGOUOVMBCPMTGWZWNYKTBOARETNNGPGNRYERSOMVMZCWBKGUTQOYJYLSCNRSQPXDFINDQRRCZE");

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
    msg.setTimeStamp(0.268906117677);
    msg.setSource(13164U);
    msg.setSourceEntity(10U);
    msg.setDestination(48200U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.434255188974;
    msg.lon = 0.378456744052;
    msg.speed = 0.724816790429;
    msg.speed_units = 87U;
    msg.limits = 111U;
    msg.max_depth = 0.663871214013;
    msg.min_alt = 0.29890467822;
    msg.time_limit = 0.991300121682;
    msg.controller.assign("HIWXWKOQGTDXVKRXLFUYLSYNUOVUWRMNSYRFSZIRSNYXTD");
    msg.custom.assign("GBHERUDNKVLDOMDOAUJOMIEQWHZYSWUWOKFVLNYBZNFBEQPPFABICHPJTXWDHTCMMXTCMOFUPCIUIYCXXVNWTBMEJOAWGJXWQEUCFHVEEJLNUCEOKSKYTOJZONUQNSJUBWVRXVZGRGKUYRFHKJXVLHBEAGQAKFLWZITFYSHKSHDXWPRVXYPGKBZSQAYTLSSBHLZG");

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
    msg.setTimeStamp(0.0125072752258);
    msg.setSource(16105U);
    msg.setSourceEntity(197U);
    msg.setDestination(23627U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.665817271862;
    msg.lon = 0.391641049488;
    msg.speed = 0.598737963612;
    msg.speed_units = 25U;
    msg.limits = 103U;
    msg.max_depth = 0.0335649698615;
    msg.min_alt = 0.202264545822;
    msg.time_limit = 0.0981033782479;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.648203617918;
    tmp_msg_0.lon = 0.0916034846503;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EMXVPGIHFCIXTPVQAVANCPNZGBWNTEZZSFKCRYVQMZOWNXT");
    msg.custom.assign("UIGWUXVCBULYNZYMDRQTKPJGCJOILPVQFZWNVEITYYRHAQDBUKWLZZZEIDTOQOMYAXHKXDVPDSMRPOVLEZERBJPIOESFLSCJLKABSVMUCXBXONCAJACLMLPNFXRPUUDMXTAPIBFFTESWCWFHTDOKAZWICUAHXZFUHSK");

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
    msg.setTimeStamp(0.0294887283714);
    msg.setSource(11308U);
    msg.setSourceEntity(2U);
    msg.setDestination(48928U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.165302821393;
    msg.lon = 0.741513437269;
    msg.speed = 0.39071131772;
    msg.speed_units = 77U;
    msg.limits = 58U;
    msg.max_depth = 0.19171006818;
    msg.min_alt = 0.630551686414;
    msg.time_limit = 0.46206167379;
    msg.controller.assign("WHJJTKYWJMHIPLSORYVRBSOMFYLFZODZHMKXEDMAIHTVIOXZSVPLEOUGTIFKWOJGVRQXPBGJAYQKZYZPCCPIWJVASLNXDNXBZWQLIPJYRTAARSBVGMTDMCAHHUBIEEGWYYZQPMGCRFNCWRWLGMHEBMDVQHIERVDTJJUSSOUENDOESBSCFOPLYKCKABVEDCZLXPKFSUFABQJ");
    msg.custom.assign("QNOVBJILOKZUVBTFIYWGIFHWKUAPFIJHGHKMYVVVNREGPAVDNYASAXRIRTBLZGXLDRSZCYJDKNFUWDOZDUYZRRMWXGYKTDJCVABVSSFQWBBOSLXMLNIQOILPCVURXWTLDUORCFEJBATHCKSDZRGSJMEGPEFCQQAEHAUVDDQ");

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
    msg.setTimeStamp(0.0251315768748);
    msg.setSource(8714U);
    msg.setSourceEntity(184U);
    msg.setDestination(26668U);
    msg.setDestinationEntity(20U);
    msg.target.assign("XOUAIBNJUKHYUERWTPTHLRNLKMHTNJJCVKXELNOXIGHHEJDPJLOFCPKXAODJKWRYAXVNGIUENSZFPSQEGMGCOVRMSDGSFBAOMVUYXVWUESQZVAHAIBQTMWYNTYKFFQGDSEFOGWARCORZXZDOHWMQIJCDEAXXVSZABHTMZLGIJRTSBPAOZGIPHLRBQUZWCVQICYBRSYHNFXLCBNBBIJYPMNCTFZVDUESDMTGC");
    msg.max_speed = 0.557388887007;
    msg.speed_units = 27U;
    msg.lat = 0.396212434622;
    msg.lon = 0.195549077256;
    msg.z = 0.688540280504;
    msg.z_units = 224U;
    msg.custom.assign("QQRSDYKUPLGQJFNLUMXNIDOSBUDIWZAXLMYZEMEWROJRLCUOFYCGBWOJXZTGHZOSUDQLHRHLRJQFNADJQKUJKGNCOAVSFNXPTYGYMJEWNYKPVWTHSPUCGANTLAGCHJFFVSDCREXZNOCAACVTQKXZSJYKMLIPIUIAOFBPTUAVVOHBWEZHTISHJBDQWSQDHNXSPPBIMPUNTTF");

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
    msg.setTimeStamp(0.262922264505);
    msg.setSource(35948U);
    msg.setSourceEntity(25U);
    msg.setDestination(64724U);
    msg.setDestinationEntity(20U);
    msg.target.assign("CAXTXNIZSXGTFFECOLWMXIGQVYOWKIWLGMPZKZNQDKKRYNROXHAYCYMMZZOJZW");
    msg.max_speed = 0.553075923476;
    msg.speed_units = 101U;
    msg.lat = 0.568871363617;
    msg.lon = 0.647780237823;
    msg.z = 0.727487349368;
    msg.z_units = 252U;
    msg.custom.assign("JQPJYWSADRXTIWMXCINACKOKRIIHADTBFYQHLDJIEZFASONLDOZXGNZQXUOOPSIKBVDPZEDREZIUUQCHLAVNRCVGKPVYLOTQMONLWFMTMGGCURLTULFEIGEQBJRGANSVOZMMJUVAZXKNCJBXACJDSEKJFXWENHYUWGTFEJTSLLVHNBCFRWHFBBDRVGFMP");

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
    msg.setTimeStamp(0.0458239586474);
    msg.setSource(10728U);
    msg.setSourceEntity(165U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(104U);
    msg.target.assign("SYOULDUACZEEHWZFNMUKISILTQJYHAHAGPDOEYY");
    msg.max_speed = 0.245431390008;
    msg.speed_units = 124U;
    msg.lat = 0.164598086924;
    msg.lon = 0.562672671487;
    msg.z = 0.852742753052;
    msg.z_units = 54U;
    msg.custom.assign("JIDNGFVZQQOMENATFALRRZENBDKQFZDTEVMRJBHSPJCBVNGAQCXBRUSTXTGSIFAYGPEVVOUVMDYSORCMAWHCUHTABNLHGTPJQBZSOVCMQLQJJURBWAYXMDKNSKGLOZVHMKYPFIGLXGWXHNPQYFYDITPEYVKHJDZWWOKPJWRAQNUMXDEOZFILEUPFYZSWWWUGIBTURMBCHFXQAODECNESUCAKBLEZICTJYRDXPZKRMLOHKIISYXLWJKUCF");

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
    msg.setTimeStamp(0.17091703218);
    msg.setSource(61595U);
    msg.setSourceEntity(235U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(155U);
    msg.timeout = 5616U;
    msg.lat = 0.691834811215;
    msg.lon = 0.263361253062;
    msg.speed = 0.629108072329;
    msg.speed_units = 197U;
    msg.custom.assign("ZTDGGBYBYUZEIXAJ");

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
    msg.setTimeStamp(0.765976110128);
    msg.setSource(5726U);
    msg.setSourceEntity(57U);
    msg.setDestination(23664U);
    msg.setDestinationEntity(193U);
    msg.timeout = 8021U;
    msg.lat = 0.772866234002;
    msg.lon = 0.960500827049;
    msg.speed = 0.195185194107;
    msg.speed_units = 147U;
    msg.custom.assign("BFQLFSBYKMMKITFBMVWBUQRPEVZBJYEAJPUGRCYEJRNMXVZDKKSTLXJCAUAZPLBVPTNDCOSPLLILTHSUFKDNWRIYWUAPMVBOGSQNHKPZQSKXANXAHYLIMFQIVNNXUOIGXBRXDJOWXZNISCEOPMQLOGHPESTOLRAVWDEXKQIWVMZZJCUXQCSCIOJYTFBDHPWGYMFOKCWHNBSLTKDYGHRDEQGEFHRGDOMJU");

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
    msg.setTimeStamp(0.873283765264);
    msg.setSource(33123U);
    msg.setSourceEntity(169U);
    msg.setDestination(18948U);
    msg.setDestinationEntity(76U);
    msg.timeout = 8904U;
    msg.lat = 0.512499739156;
    msg.lon = 0.120084389917;
    msg.speed = 0.0612861365899;
    msg.speed_units = 64U;
    msg.custom.assign("MMDTLOWTKXPKLEFFDTWQOYPYEDCIGRZKSBIYUTWRAZNXZEIBBIPTNRVFKQWZZVDFNNNHHEYLGAAMICKDFAAOXMNFGRHGEVQTCZPPOGDEVBSLUPTKKYUSXCBUABZYILCTVQAESYCXQWDCXUFLCBHVTQIPMEADSJQW");

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
    msg.setTimeStamp(0.394037600205);
    msg.setSource(9299U);
    msg.setSourceEntity(227U);
    msg.setDestination(22765U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.213878552719;
    msg.lon = 0.503286722462;
    msg.z = 0.559452241845;
    msg.z_units = 233U;
    msg.radius = 0.770991780486;
    msg.duration = 49972U;
    msg.speed = 0.439700389204;
    msg.speed_units = 200U;
    msg.popup_period = 62555U;
    msg.popup_duration = 1582U;
    msg.flags = 233U;
    msg.custom.assign("AJUKGYORTXQMYWYTPHCOSXAKREFQCETXUUIOIPHRVNCTGKGOLJAAWDPBILCMPVVMSUCLRLKMWBBZJNRYPGZNEZDNTEKAUSDKOBFIWGJEWAPCDJSG");

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
    msg.setTimeStamp(0.187234511604);
    msg.setSource(42379U);
    msg.setSourceEntity(5U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.162888695329;
    msg.lon = 0.846243933883;
    msg.z = 0.597106908986;
    msg.z_units = 160U;
    msg.radius = 0.829188504223;
    msg.duration = 7950U;
    msg.speed = 0.625028623717;
    msg.speed_units = 141U;
    msg.popup_period = 24211U;
    msg.popup_duration = 17743U;
    msg.flags = 86U;
    msg.custom.assign("OESCUWNFFNUUBMWJIMIOPULIXZIAAKCHEQHAOBTVBXZZCXLFHPFTQFOLEBZMTXJVFAZFNRBJSDIOJFHJCPMSTSGKHVHCLHJALZBYSQVDEUJKKGNNYAYFXTBUCYGBDCODMCMOMT");

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
    msg.setTimeStamp(0.57094276365);
    msg.setSource(23085U);
    msg.setSourceEntity(88U);
    msg.setDestination(25046U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.881430621494;
    msg.lon = 0.942971592142;
    msg.z = 0.903947082978;
    msg.z_units = 134U;
    msg.radius = 0.862487595988;
    msg.duration = 2500U;
    msg.speed = 0.264875312925;
    msg.speed_units = 201U;
    msg.popup_period = 22479U;
    msg.popup_duration = 47848U;
    msg.flags = 14U;
    msg.custom.assign("GXAIXKNBTQCXKKUTEVZQHPTNBRVFACUREHTFFWFAEDOKAPYRKIBIMGXNGDPYLWHTYH");

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
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.736488292835);
    msg.setSource(37340U);
    msg.setSourceEntity(66U);
    msg.setDestination(55351U);
    msg.setDestinationEntity(73U);
    msg.timeout = 59988U;
    msg.lat = 0.260022456896;
    msg.lon = 0.165754721304;
    msg.z = 0.957943786063;
    msg.z_units = 120U;
    msg.speed = 0.849343883285;
    msg.speed_units = 192U;
    msg.bearing = 0.869683081881;
    msg.width = 0.593742809821;
    msg.direction = 244U;
    msg.custom.assign("IEVEVLLDBAYNVNPYXQFIKHDGFDFXAPGPJXAASACBTDMQNDXOCUNSMCHYHPOYZHHZIYSVDGXDUPEFRDDXTFFJNYHEMEUCQOCZSWQJOYFVGIJBSAHWNULNOJGKKXZJLQYUOARERPYCJSJQIFWIMJHHAQCTCDAXEFTGRETFPTRTLLLOJXIGSZVZQKOKUQPRLYBMTKELWIZKHZAWGRROGWZKPWRLBVUN");

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
    msg.setTimeStamp(0.411306333746);
    msg.setSource(17362U);
    msg.setSourceEntity(176U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(57U);
    msg.timeout = 63686U;
    msg.lat = 0.0529818453074;
    msg.lon = 0.328720805638;
    msg.z = 0.872174092078;
    msg.z_units = 108U;
    msg.speed = 0.625902449999;
    msg.speed_units = 213U;
    msg.bearing = 0.514342301848;
    msg.width = 0.655920679172;
    msg.direction = 162U;
    msg.custom.assign("KEGRJZRWPEJXHQQFRODONZYUKXABCVEQNWCKVOBEAXJBZWIIRPLHDXLIJQZE");

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
    msg.setTimeStamp(0.256249001398);
    msg.setSource(54403U);
    msg.setSourceEntity(155U);
    msg.setDestination(19572U);
    msg.setDestinationEntity(13U);
    msg.timeout = 35578U;
    msg.lat = 0.295963273844;
    msg.lon = 0.353781552961;
    msg.z = 0.897600882039;
    msg.z_units = 193U;
    msg.speed = 0.337394149883;
    msg.speed_units = 78U;
    msg.bearing = 0.357924647273;
    msg.width = 0.0537032118794;
    msg.direction = 198U;
    msg.custom.assign("DJTEYAVCOBMGGOQIDWAKNZIIOEVKFNWGBSXYNRNGQJQZDVGGYEAQIFUYTTVDHDAFRIRMWSDZFPMHUJUETIOQVFYJUDWZJPEUOMKSHWFUXLWKHPCMFSYCTNXKFXDEPLKKZXSOJREZXGVICSVOKXYZAJWMBJURQRYUKQATLWLJVYLHREJSBCBP");

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
    msg.setTimeStamp(0.0984407772451);
    msg.setSource(50518U);
    msg.setSourceEntity(104U);
    msg.setDestination(32558U);
    msg.setDestinationEntity(125U);
    msg.op_mode = 47U;
    msg.error_count = 217U;
    msg.error_ents.assign("NPAJGMJZRCHGYASTCCSCTOMTYGKHWGPIXBFLSTFLYRWKATSMUZJIVNUUYGCFDCCWEULTFZMVYZDIQCSXEYIDU");
    msg.maneuver_type = 28326U;
    msg.maneuver_stime = 0.0693231452065;
    msg.maneuver_eta = 65263U;
    msg.control_loops = 607767032U;
    msg.flags = 136U;
    msg.last_error.assign("JYXOGLTDLLCVFDXOPQOBDDQZKLWUYVHGTIGSRTUQ");
    msg.last_error_time = 0.253524416351;

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
    msg.setTimeStamp(0.693605946652);
    msg.setSource(44129U);
    msg.setSourceEntity(88U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(123U);
    msg.op_mode = 23U;
    msg.error_count = 241U;
    msg.error_ents.assign("DKFBNKQIIGOZAOTJZMVNMVLWLQMXEOVHYRDBPDXTLNJHLRTDWKJYERXEXVRQDFTHZX");
    msg.maneuver_type = 5680U;
    msg.maneuver_stime = 0.772062374184;
    msg.maneuver_eta = 20591U;
    msg.control_loops = 822309851U;
    msg.flags = 5U;
    msg.last_error.assign("ODCEQYRDRNNKPUMYJMOYGITAOEPCPVCVHHIQLCHZJDI");
    msg.last_error_time = 0.457383526051;

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
    msg.setTimeStamp(0.481130155031);
    msg.setSource(22388U);
    msg.setSourceEntity(159U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(207U);
    msg.op_mode = 156U;
    msg.error_count = 155U;
    msg.error_ents.assign("CRNZRHFCAMDTBTWQPAAZORTBTSBTVNSMBKNKBRLXVLQVDVXOSQFBSPHQIWGEOXVBBMKUKPVQASTUWRZAMXOUDOYLWLGHCLJDCUXONIOLRUAYKHMETUYQFJDWBMHAEBUNLGH");
    msg.maneuver_type = 4384U;
    msg.maneuver_stime = 0.613230097515;
    msg.maneuver_eta = 56U;
    msg.control_loops = 3806769469U;
    msg.flags = 29U;
    msg.last_error.assign("QVCMOGYQRPSRIFVHEFTRZZRVDMHTEGJLNCQLZIPJGOEQFIOFAUSYCRBXGONYXCXMOCVFRQZCOPUZMWTLENHJPHOIYOGRXEBHHXWMYCPVTBGDKCWLIAAVRCSWUBJXOFFJTZAMELGBLUSDUEIPWKHTYKBJSDEADKHXGKJDDDDXQBVXQNQNHUSBINKTWYPFZNMAIUUKLXKWTZWPJUIWPOIBRANPMNMLJZKSLD");
    msg.last_error_time = 0.0112039932933;

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
    msg.setTimeStamp(0.59953392762);
    msg.setSource(52373U);
    msg.setSourceEntity(215U);
    msg.setDestination(47355U);
    msg.setDestinationEntity(181U);
    msg.type = 236U;
    msg.request_id = 17135U;
    msg.command = 126U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 63980U;
    tmp_msg_0.rpm = 0.963876231242;
    tmp_msg_0.direction = 134U;
    tmp_msg_0.custom.assign("QTIXYQHHRFTZIQQDIONRWJPCYWWOQQZFIMAGBVKFDALFSPKCADGKNJDUMUSDYJORNZWERWTIGWJRDBSUESAMJENOZESYYMGELZEWXLBXPUBKQRDGEVZVNRJVKRBAYYFKKUOUPOTDXXVTKFZTBOCCXMNMDSVLEWHVZHPR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 933U;
    msg.info.assign("EJUAKPIZWTFTOMKQBAKJLHXDUBORKHJZOFIDPVUHSZLWFDKEYWRMTKGBGKSYMHYNXTZFVKXJSAGDPUECEOCVMQOTHCCHZDIXPGSBLATYLGAEFIUIJPLILVZGUSQHVVYBND");

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
    msg.setTimeStamp(0.280728741839);
    msg.setSource(44192U);
    msg.setSourceEntity(156U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(116U);
    msg.type = 5U;
    msg.request_id = 7235U;
    msg.command = 142U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.28415580246;
    tmp_msg_0.lon = 0.513566518288;
    tmp_msg_0.z = 0.0764621650613;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.speed = 0.979098855641;
    tmp_msg_0.speed_units = 228U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.71465753588;
    tmp_tmp_msg_0_0.y = 0.533779705959;
    tmp_tmp_msg_0_0.z = 0.694398791984;
    tmp_tmp_msg_0_0.t = 0.735091736897;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 55924U;
    tmp_tmp_msg_0_1.off_x = 0.218114285806;
    tmp_tmp_msg_0_1.off_y = 0.944870040013;
    tmp_tmp_msg_0_1.off_z = 0.414518457515;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.967889971295;
    tmp_msg_0.custom.assign("TBITBMGURRLMDBFBGVWCEESHHTSDDYGLQHKDMRUIMHHNUROXQWOM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8612U;
    msg.info.assign("UVERLMEKMCFISADXTVPDEDGAYYACLEVHPOYXMDTAJARTSZOIAUCCQFQJRSKYGLVFAZLUEKQHZBGVSQZDJZJNKUXHGPPHUIKPJBRMENTKFYVWSNBOJWAXJPRNWEBRICQGFDLFWIAHXHDXTYZRCJWEMRWOMWMRXFIQFXCMKFHPGBUIOLHGNRUWWETCSUNNVOQIXZUDXBYDMDLBHPCKHVIYLOZYSUFENPBMOQINKNLJVSPSQCTOVBLGAZWQKGYGB");

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
    msg.setTimeStamp(0.456008990195);
    msg.setSource(56036U);
    msg.setSourceEntity(74U);
    msg.setDestination(50435U);
    msg.setDestinationEntity(34U);
    msg.type = 203U;
    msg.request_id = 49678U;
    msg.command = 148U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.0737776755967;
    tmp_msg_0.lon = 0.534741304973;
    tmp_msg_0.z = 0.816796722986;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.48930345942;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.abort_z = 0.211564309207;
    tmp_msg_0.bearing = 0.381762879503;
    tmp_msg_0.glide_slope = 78U;
    tmp_msg_0.glide_slope_alt = 0.397066713895;
    tmp_msg_0.custom.assign("CPVOYKZPRDOHYUUDRSJQOLUFAOKIMPMMJIJHDHIVSHTGDHAYPLONGROMQJXLLVBERBBCTXNGYJOZJBPYVRRCTKAYMOWKJSQAHUNDIERFONIBFHEYNFIBFWLYALTENDVIICGVAMAEQWVXDGAVTZRNAUCSPRSGZXCSTMELSUTUNJHLZDKXMTEVFWCFUGQDEHEKCKQZLZWJBFXY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13054U;
    msg.info.assign("BMAOKXRFXVWWHXFULJRCUIJCQTDRAYVBUNNSMPJEWVGTJDHIQTFQLKSAWGAHQRDQBPJCVRPJIECGRD");

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
    msg.setTimeStamp(0.70346995479);
    msg.setSource(11205U);
    msg.setSourceEntity(182U);
    msg.setDestination(6080U);
    msg.setDestinationEntity(85U);
    msg.command = 119U;
    msg.entities.assign("RPEVCBUUSHWQLIZRRTGPDMWNERVXQDJHFJYJIOJMCOIWXKTLOOGUXZKREOFEVFUJHJXTTYWLAPAWNCMDWAPQBQGDSBLWURKLNXZNDFYANGVOVOAIEICPQDBYCAOSSWCVHYBMFQNNYICTLHKBPDSYBMVZWSEGDVEUIQWMXORFKVMFRZMEZOHJLZAKNZKCJVYKZBEGKFHUQJPGLCGHDITXBIGXENYUPTXTMMXRDUQABTZPGAHR");

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
    msg.setTimeStamp(0.204001024299);
    msg.setSource(61622U);
    msg.setSourceEntity(183U);
    msg.setDestination(16477U);
    msg.setDestinationEntity(165U);
    msg.command = 161U;
    msg.entities.assign("AZVCNIYGFDKSFGSFWYOMNJREEOWCMZUEYFDYBTZNZBUSRXRXTZAVXKQOQWJYTCLVHZPZRRPQBCDYVYGNNBKPUDQOQPCQDEJTLSMFTJLQPLCMMKBHIXJWMVZDGAO");

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
    msg.setTimeStamp(0.335317871742);
    msg.setSource(27900U);
    msg.setSourceEntity(139U);
    msg.setDestination(13215U);
    msg.setDestinationEntity(86U);
    msg.command = 205U;
    msg.entities.assign("HBOVVYWWCVRFDWEWECPCMIVXMOIBJOHLLTGGNAEKJIUFVVQMSQPAXUM");

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
    msg.setTimeStamp(0.93618579341);
    msg.setSource(35593U);
    msg.setSourceEntity(54U);
    msg.setDestination(23246U);
    msg.setDestinationEntity(210U);
    msg.mcount = 157U;
    msg.mnames.assign("NANMHVQFCUPDOROMGCNJESRAEDQHLBWTKAZHXODKZEJXBUMYYXZWDNKS");
    msg.ecount = 110U;
    msg.enames.assign("TMQZHYVOYCRHVIAYZIXYHGMADOIKJYJNMBQCVOECSNZZJUPXMRBYWBEZPJTGBIOPLYSJRQFSNTICQHIWKXCAEUPAAGWKNRVETXOANUFXEBSMEUOBQTGXWRDWLMGUVOMTK");
    msg.ccount = 236U;
    msg.cnames.assign("TOPDMHAFBNTNLIGVCPOEDNPNBJOOYUCVSYUYPHQGFVBNKZAIEPQWOHPDLYDCMGJAAFAIAYQJDXYIRUK");
    msg.last_error.assign("QHBQXDOWFZWGNYADBAWHRALPKVZRESPMKGSF");
    msg.last_error_time = 0.878771486397;

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
    msg.setTimeStamp(0.356968681282);
    msg.setSource(25556U);
    msg.setSourceEntity(216U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(150U);
    msg.mcount = 4U;
    msg.mnames.assign("VHJBWHWNTXIPQSWUYFUPQAYUNHYUIGELALPSBGCOKBUIDCYRZLUVVDGTPKYMPGZRLJCHLQEPOFHOINIGIVZMIRXNKOYFBAMRHMJWTHDEERFCGQMBGCPPVXXCJATTLKO");
    msg.ecount = 154U;
    msg.enames.assign("HZBTEAPZFVFMYNCMIZKJRDDXEILYAJDFUUYHOBPJMXY");
    msg.ccount = 72U;
    msg.cnames.assign("XNJROYRGYUYUSUNQTDRLQBMGBUUTVFPTOENIVRYLKKGIDZVCQYINAWGWZNBTFXVVUSHMPVCXBYUWHNJFCODXASSXFIMKMJQUTLBMLXRQPCIZPAOEEEDGWKHADLAWNKRIZKHTXLXCOCHFUJAIFBZHHQAAHFDKNTOEYOWFKDIJGFJNTVPJXEQGEZSTQWXQOOCDMWPCYECBLDSEQBMGJMOSWVNVZKRYEYJARSHZZLPMLUPIPIBDGWSCPFMTBRL");
    msg.last_error.assign("LXSJEQEWKCJQHBJDOVKHLPZDMKPDSHVAEHFFCXOCFOHXXFEIWSNMJPVYJBOPEZHOJRQUFAQAHIVRXXTCNDNYQGKAEJRZVIRBPIKUTTGLGZGTAICBYOSYTGCEXAVWRKRBGLUBWFQYZSGM");
    msg.last_error_time = 0.580771987775;

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
    msg.setTimeStamp(0.855607704112);
    msg.setSource(48912U);
    msg.setSourceEntity(74U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(196U);
    msg.mcount = 110U;
    msg.mnames.assign("UBIORMHJPLLMLSCFOGFMRAYUZTAFYDPSJXZOVOLDYNEQUBJIRAWYBSKYHYDLCIIPMXJFBCGAPLUVNDTKMHEWMSGON");
    msg.ecount = 12U;
    msg.enames.assign("TPWQVWWTLORZTMODJKAAKMRNINEXYTGPEJFAUSRQILCYBEBJRMHQSXIAXOQOUIRJEITVAZPFQYPRRPJJXWAVAGPDTPCASZOSKNIGUBZWKULEMDCHWRECOOZGYEGKBGHMFTVWHPRPUOXFTKLFBVLKDUZZFEHQQAHYBTNIHDJNWWKPVDNUBYUKQQXKX");
    msg.ccount = 19U;
    msg.cnames.assign("AGKJSOLTGGWKEJLJIVOJHNCXPYDOFEFURZXCOEGLHNZLISTQSMEAMXZOCLXPEWPZROJVPJDRUCVPTFHYUAIFIIAQZVQMVKSYSMYAFNHJUGVNWYSFICPCWLYXOHGYZQNBGBFXANKQQTXRMNTRIXLWKMERHDKYNEBAMWDJKZHC");
    msg.last_error.assign("SDTKCQFNVPHUMDGIFCTPMJOAJSYDXXTQNCXYNO");
    msg.last_error_time = 0.3485780582;

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
    msg.setTimeStamp(0.317523449672);
    msg.setSource(39878U);
    msg.setSourceEntity(253U);
    msg.setDestination(64544U);
    msg.setDestinationEntity(132U);
    msg.mask = 75U;
    msg.max_depth = 0.921739835846;
    msg.min_altitude = 0.343356609998;
    msg.max_altitude = 0.823997352502;
    msg.min_speed = 0.440885536774;
    msg.max_speed = 0.793316006631;
    msg.max_vrate = 0.784899970081;
    msg.lat = 0.340186806202;
    msg.lon = 0.165363734532;
    msg.orientation = 0.672493006588;
    msg.width = 0.812048660414;
    msg.length = 0.145743551313;

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
    msg.setTimeStamp(0.275888880322);
    msg.setSource(20932U);
    msg.setSourceEntity(119U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(211U);
    msg.mask = 156U;
    msg.max_depth = 0.925764237046;
    msg.min_altitude = 0.342273610441;
    msg.max_altitude = 0.832625503299;
    msg.min_speed = 0.00432112850046;
    msg.max_speed = 0.392855743319;
    msg.max_vrate = 0.797456944249;
    msg.lat = 0.0507416007396;
    msg.lon = 0.107147254368;
    msg.orientation = 0.693514678288;
    msg.width = 0.523687537438;
    msg.length = 0.0904266641847;

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
    msg.setTimeStamp(0.978032849211);
    msg.setSource(40307U);
    msg.setSourceEntity(10U);
    msg.setDestination(13928U);
    msg.setDestinationEntity(42U);
    msg.mask = 147U;
    msg.max_depth = 0.905888676795;
    msg.min_altitude = 0.250557790585;
    msg.max_altitude = 0.782335571711;
    msg.min_speed = 0.855273138406;
    msg.max_speed = 0.04286655828;
    msg.max_vrate = 0.819993796303;
    msg.lat = 0.95972817315;
    msg.lon = 0.123681106518;
    msg.orientation = 0.628244147505;
    msg.width = 0.191894205622;
    msg.length = 0.0104320084133;

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
    msg.setTimeStamp(0.439900296034);
    msg.setSource(26435U);
    msg.setSourceEntity(30U);
    msg.setDestination(61144U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.786568328977);
    msg.setSource(14475U);
    msg.setSourceEntity(32U);
    msg.setDestination(2484U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.800361088891);
    msg.setSource(16419U);
    msg.setSourceEntity(71U);
    msg.setDestination(26944U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.201763235675);
    msg.setSource(10099U);
    msg.setSourceEntity(245U);
    msg.setDestination(51387U);
    msg.setDestinationEntity(101U);
    msg.duration = 17468U;

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
    msg.setTimeStamp(0.323601578408);
    msg.setSource(25383U);
    msg.setSourceEntity(145U);
    msg.setDestination(13837U);
    msg.setDestinationEntity(109U);
    msg.duration = 29382U;

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
    msg.setTimeStamp(0.704602348006);
    msg.setSource(60575U);
    msg.setSourceEntity(41U);
    msg.setDestination(37790U);
    msg.setDestinationEntity(247U);
    msg.duration = 60407U;

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
    msg.setTimeStamp(0.723789751778);
    msg.setSource(49839U);
    msg.setSourceEntity(24U);
    msg.setDestination(41564U);
    msg.setDestinationEntity(235U);
    msg.enable = 241U;
    msg.mask = 3462635019U;
    msg.scope_ref = 130826432U;

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
    msg.setTimeStamp(0.365072335332);
    msg.setSource(49530U);
    msg.setSourceEntity(212U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(20U);
    msg.enable = 221U;
    msg.mask = 1850630272U;
    msg.scope_ref = 4166642001U;

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
    msg.setTimeStamp(0.967470753407);
    msg.setSource(4104U);
    msg.setSourceEntity(98U);
    msg.setDestination(20396U);
    msg.setDestinationEntity(34U);
    msg.enable = 95U;
    msg.mask = 1481410471U;
    msg.scope_ref = 4232331300U;

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
    msg.setTimeStamp(0.140974989791);
    msg.setSource(4629U);
    msg.setSourceEntity(34U);
    msg.setDestination(42942U);
    msg.setDestinationEntity(245U);
    msg.medium = 199U;

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
    msg.setTimeStamp(0.605196798821);
    msg.setSource(11037U);
    msg.setSourceEntity(8U);
    msg.setDestination(34358U);
    msg.setDestinationEntity(12U);
    msg.medium = 163U;

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
    msg.setTimeStamp(0.508745268573);
    msg.setSource(36952U);
    msg.setSourceEntity(37U);
    msg.setDestination(39695U);
    msg.setDestinationEntity(3U);
    msg.medium = 139U;

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
    msg.setTimeStamp(0.965805715652);
    msg.setSource(59285U);
    msg.setSourceEntity(1U);
    msg.setDestination(62448U);
    msg.setDestinationEntity(181U);
    msg.value = 0.611504846186;
    msg.type = 58U;

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
    msg.setTimeStamp(0.337630907269);
    msg.setSource(3567U);
    msg.setSourceEntity(200U);
    msg.setDestination(53677U);
    msg.setDestinationEntity(174U);
    msg.value = 0.651710271628;
    msg.type = 105U;

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
    msg.setTimeStamp(0.553896999148);
    msg.setSource(17692U);
    msg.setSourceEntity(123U);
    msg.setDestination(31157U);
    msg.setDestinationEntity(57U);
    msg.value = 0.210586093731;
    msg.type = 46U;

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
    msg.setTimeStamp(0.827054831174);
    msg.setSource(11656U);
    msg.setSourceEntity(174U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(180U);
    msg.possimerr = 0.823187928576;
    msg.converg = 0.782544799686;
    msg.turbulence = 0.567531064491;
    msg.possimmon = 145U;
    msg.commmon = 162U;
    msg.convergmon = 18U;

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
    msg.setTimeStamp(0.530167284573);
    msg.setSource(24038U);
    msg.setSourceEntity(244U);
    msg.setDestination(5991U);
    msg.setDestinationEntity(197U);
    msg.possimerr = 0.0399785794069;
    msg.converg = 0.870863945767;
    msg.turbulence = 0.442190977156;
    msg.possimmon = 19U;
    msg.commmon = 142U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.00640899659883);
    msg.setSource(40339U);
    msg.setSourceEntity(251U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(207U);
    msg.possimerr = 0.177608219163;
    msg.converg = 0.0207960286143;
    msg.turbulence = 0.335892072272;
    msg.possimmon = 122U;
    msg.commmon = 49U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.758769979945);
    msg.setSource(58594U);
    msg.setSourceEntity(171U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(160U);
    msg.autonomy = 159U;
    msg.mode.assign("VHSRAALUNJGBFANHVEPSBJKYJCFDQRMBTPMHARZJBKPRZJC");

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
    msg.setTimeStamp(0.561020226149);
    msg.setSource(21006U);
    msg.setSourceEntity(216U);
    msg.setDestination(17918U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 36U;
    msg.mode.assign("MSBDABEXPOHOIETTYPCNMMUADZKQEHGRVCAIJTKCTVGYNXONEVYRKEHVRBHOYLHIEXCVLSDGMONJWQGIBKELTWJTWUUHULURYBFXVSMAJBHUXQLJNYPKSGRZACPVAMZWIIOMZWQYPSACFDJHZSJPRJVBMPNACQKXFMBDEROHECTQNGSEPDDXHKQVFFIONUAIZVWSLMBRYXLWFUNYRZTLPFKGJSXDJSQWBWPGXFKTCQTZLGF");

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
    msg.setTimeStamp(0.51556794906);
    msg.setSource(53958U);
    msg.setSourceEntity(153U);
    msg.setDestination(63302U);
    msg.setDestinationEntity(65U);
    msg.autonomy = 132U;
    msg.mode.assign("ROUAOXKWQCBTOTBNBMBXIAKATIGFJNYTJWNDJUS");

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
    msg.setTimeStamp(0.43270698182);
    msg.setSource(14457U);
    msg.setSourceEntity(229U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(88U);
    msg.type = 23U;
    msg.op = 211U;
    msg.possimerr = 0.351108158023;
    msg.converg = 0.880499137362;
    msg.turbulence = 0.195778493808;
    msg.possimmon = 104U;
    msg.commmon = 227U;
    msg.convergmon = 132U;

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
    msg.setTimeStamp(0.895756508166);
    msg.setSource(15327U);
    msg.setSourceEntity(171U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(15U);
    msg.type = 11U;
    msg.op = 79U;
    msg.possimerr = 0.245026322758;
    msg.converg = 0.832233676107;
    msg.turbulence = 0.706827988045;
    msg.possimmon = 107U;
    msg.commmon = 164U;
    msg.convergmon = 84U;

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
    msg.setTimeStamp(0.519754836581);
    msg.setSource(62532U);
    msg.setSourceEntity(217U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(153U);
    msg.type = 39U;
    msg.op = 192U;
    msg.possimerr = 0.229853559787;
    msg.converg = 0.403665129887;
    msg.turbulence = 0.800684750677;
    msg.possimmon = 142U;
    msg.commmon = 66U;
    msg.convergmon = 10U;

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
    msg.setTimeStamp(0.761991903592);
    msg.setSource(40826U);
    msg.setSourceEntity(151U);
    msg.setDestination(32970U);
    msg.setDestinationEntity(247U);
    msg.op = 12U;
    msg.comm_interface = 112U;
    msg.period = 11933U;
    msg.sys_dst.assign("XLXURUJNQAVIERAOPHLUHAHJV");

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
    msg.setTimeStamp(0.694279107608);
    msg.setSource(40646U);
    msg.setSourceEntity(180U);
    msg.setDestination(25689U);
    msg.setDestinationEntity(64U);
    msg.op = 150U;
    msg.comm_interface = 74U;
    msg.period = 19200U;
    msg.sys_dst.assign("PLQZQFXDDROZSUBSEPUMYWMKTTJWPALBUZYKGQBEKAWYSTUAWBZOYJFGKABAIJESPPROOYOLBPYSMEXRFMCNQHHCQNHHTDXNNBSGUXMQOZDXWMPTQEDDGFXQHHVWCGPHWYTLEMWDRWRFLJFKK");

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
    msg.setTimeStamp(0.149646649055);
    msg.setSource(58125U);
    msg.setSourceEntity(73U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(33U);
    msg.op = 45U;
    msg.comm_interface = 83U;
    msg.period = 37418U;
    msg.sys_dst.assign("QTQIVXFBUDBTNZKRAIORSPBIONFKACWJSBPORAOXZNQWSAKDYGXSKWOPYKHNPGZYWEVCJWVDPHOAYCMRUJSURFYEVQAJJHOEUSMFTENZZQUAFXNJTKUULVMBBVSWVGKGIEZFMROYDMIQPTZIEENACRDCJETHGPUJMXXEFHSOHCGGJVW");

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
    msg.setTimeStamp(0.0109683815829);
    msg.setSource(18990U);
    msg.setSourceEntity(81U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(197U);
    msg.stime = 1913447356U;
    msg.latitude = 0.920285663082;
    msg.longitude = 0.633352629976;
    msg.altitude = 11678U;
    msg.depth = 38503U;
    msg.heading = 57998U;
    msg.speed = 14072;
    msg.fuel = -23;
    msg.exec_state = 112;
    msg.plan_checksum = 18054U;

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
    msg.setTimeStamp(0.492214631573);
    msg.setSource(8210U);
    msg.setSourceEntity(85U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(145U);
    msg.stime = 1855017748U;
    msg.latitude = 0.231132528625;
    msg.longitude = 0.0784642380489;
    msg.altitude = 245U;
    msg.depth = 30633U;
    msg.heading = 30147U;
    msg.speed = -13751;
    msg.fuel = 41;
    msg.exec_state = 18;
    msg.plan_checksum = 45269U;

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
    msg.setTimeStamp(0.145500444173);
    msg.setSource(29694U);
    msg.setSourceEntity(183U);
    msg.setDestination(24298U);
    msg.setDestinationEntity(98U);
    msg.stime = 857600095U;
    msg.latitude = 0.495330793069;
    msg.longitude = 0.202083357416;
    msg.altitude = 1968U;
    msg.depth = 7985U;
    msg.heading = 15808U;
    msg.speed = 22201;
    msg.fuel = -1;
    msg.exec_state = 48;
    msg.plan_checksum = 31936U;

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
    msg.setTimeStamp(0.800723717542);
    msg.setSource(45858U);
    msg.setSourceEntity(67U);
    msg.setDestination(11812U);
    msg.setDestinationEntity(39U);
    msg.req_id = 37961U;
    msg.comm_mean = 209U;
    msg.destination.assign("TFVMUCBDGTULVBKMYJIRAAAZADYZXSEJURWYLIJIEMEEFRNPIXXIJVNUOHJTGWHOVMTOVSSKCRNVTJQYFZFUIQCFZFTRZYYRNIOGGPPBCXXJPYHOORWADMVAQPLSTOMSQSLQPMLXLYAPDYTWQQHTKCZLNIVVQGSULOBFGSYNGF");
    msg.deadline = 0.60473603355;
    msg.range = 0.210050475455;
    msg.data_mode = 116U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YNCASJECYOUBWOLRKSOKKGHRBLRCAPEMHWMWFJKQNHOVYCPLFSUQCTWRABQVULXOMIUWQRPLPVLOXZEINQDHVZDGZIWGKDZKEGBNMNPDMLSKIDZLPKPDAEZTHSRJGASCIXYURGLYSOFTPUW");
    const char tmp_msg_1[] = {-43, -34, -111, -34, -115, -60, 32, 2, -4, 117, 69, -91, -20, -5, 83, 18, 63, -80, -41, 80, 113, -64, 41, 22, -45, -119, -122, 42, 107, -8, -79, -114, -20, -16, 16, 11, -89, -54, 81, 85, -95, -118, -78, 40, 64, 108, 40, 121, -70, 79, 102, -37, 43, 15, 13, -97, 50, 66, 51, 62, 88, -117, 58, -74, 40, -105, -86, -113, 75, 78, -128, -8, 33, 72, 111, -80, 96, 25, 86, -103, 70, 119, -22, -106, 40};
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
    msg.setTimeStamp(0.0488977657394);
    msg.setSource(50419U);
    msg.setSourceEntity(109U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(40U);
    msg.req_id = 43366U;
    msg.comm_mean = 205U;
    msg.destination.assign("BQXLCDWLPYZXDNWBOPYXHNRKOSQHSLVMXZPAZDENDBKSNUTPROOUYOCMQPZAZYTXHTFCGGLGCGLAQUPARVIZQKMTSMIEZSGQMCJCJ");
    msg.deadline = 0.53756557068;
    msg.range = 0.861404719556;
    msg.data_mode = 113U;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.993548216862;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LYENMKJEYKXQLDZDWZUDWNGMFYFAUKFTHPOQEHMGHHOQFKNAAKTENCTJSPV");
    const char tmp_msg_1[] = {10, -38, 90, 53, -110, 42, 46, 110, -99, 34, -4, -35, -98, -117, -42, 20, -48, 68, -49, 10, -59, -98, -33, 123, 100, -61, 86, -75, 76, -44, -14, 119, -48, 10, -9, -86, 93, 110, 6, 64, 23, -47, 75, -32, 84, 38, -55, 79, -92, -128, -50, -18, 15, -77, 79, 120, -31, 89, -76, -80, 25, -92, -3, -120, 54, -125, 119, -32, 123, -105, -42, 29, -121, -75, 93, -122, 43, 13, 6, -32, 111, -11, 28, -120, -14, 50, 80, 61, -116, -34, -81, 20, 63, 71, 59, -101, 48, -87, -11, -27, -112, -36, -71, 18, 108, -57, -2, -53, -91, -36, -118, -112, -97, -90, -105, -26, -71, -48, -66, 69, 89, 63, 113, -56, 106, -56, 89, 22, -28, -40, -87, -108, 55, -15, 88, -68, 69, -100, 110, -57, -112, 76, -50, -95, -11, -31, 62, -88, -36, 112, -73, 21, 74, 3, 77, -2, 104, 93, 113, 96, 32, 46, 44, -19, -27, 116, 30, 112};
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
    msg.setTimeStamp(0.99455647148);
    msg.setSource(63640U);
    msg.setSourceEntity(78U);
    msg.setDestination(11770U);
    msg.setDestinationEntity(214U);
    msg.req_id = 63828U;
    msg.comm_mean = 234U;
    msg.destination.assign("VHGUKTPQWDJRUQYAEGETHFULDYKIOHCCVSNTQLYXKUPOPBKSQHILBV");
    msg.deadline = 0.998548485968;
    msg.range = 0.969459376421;
    msg.data_mode = 7U;
    IMC::TeleoperationDone tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ISUIWDVEGVXPUNQJRPNZGVTDCVKDFFHXEDUOTZBTQYWJHOMLZGHISLSIOPFMRBYWKOWNEVXKRRNDVUXZQZPYECNUMSEPMQPHAOSPLGJYXLUQMKWFBGFWCLJJCKYKOIRBLERSYYWFQAMNHEWRJDMAFNDIKBLCAQQHZHVOIEAGSMUEOETXONBSBKMUIIGCSPCOWYVLXWDRGBFTDPH");
    const char tmp_msg_1[] = {-120, 25, 115, -97, 32, 72, 94, -79, -36, -34, -111, -94, 1, 37, 18, -75, 72, 3, 118, -47, 29, 78, 93, 60, 14, -40, 90, -101, -75, -100, 74, -87, -17, -121, 111, 33, 124, -56, 28, -38, 98, 37, -92, 53, -33, -27, 15, 120, -25, -56, -94, -44, -92, -88, -125, -70, 92, -111, 110, -116, -19, 58, 79, -114, 11, 21, -84, -81, 63, 92, -44, -5, 108, 120, 76, -105, 25, -71, -67, -86, 120, 23, -59, -104, 120, 35, -76, 65, 30, -31, -120, -72, 22, 7, 43, 69, 45, 65, 53, -41, 23, 70, -13, -93, 97, 74, -112, 119, 20, -26, 72, -37, -4, 8, 1, 89, -9, -35, 121, 15, -60, -53, -93, -26, -42, -88, -106, -60, 93, 59, -21, 7, 4, 48, 13, -90, 125, 90, -107, -28, 44, 98, -73, 25, -34, -37, 11, 2, 85, -112, -99, 51, -22, 92, 34, 14, -109, -90, -101, -13, 19, 112, -39, -59, -116, -75, 25, -105, -67, 124};
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
    msg.setTimeStamp(0.393271605446);
    msg.setSource(3270U);
    msg.setSourceEntity(68U);
    msg.setDestination(22247U);
    msg.setDestinationEntity(16U);
    msg.req_id = 19212U;
    msg.status = 63U;
    msg.range = 0.212240686182;
    msg.info.assign("UINYYMOEONHKKVJGWIFGVSGDDFYNUDGOBFVWXOVTMVUWOMJIWGSEK");

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
    msg.setTimeStamp(0.488776116981);
    msg.setSource(27324U);
    msg.setSourceEntity(70U);
    msg.setDestination(12120U);
    msg.setDestinationEntity(221U);
    msg.req_id = 51647U;
    msg.status = 27U;
    msg.range = 0.432696475867;
    msg.info.assign("SYHJDZZIIFJDKWICHWOCTPIVPCLASCWPEINSOSFETMKKBSNENHTWZLNGVJEHQYDVTXBLOMFZJHRTLYSDJKVMAOWAVLSPYVRMWVNUMETSIQIZHBTPCFAXRNFUDZMRJAOQQQEMOGNWKDAOKADHXXYENJGUPFMBGTMV");

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
    msg.setTimeStamp(0.841407045506);
    msg.setSource(27087U);
    msg.setSourceEntity(184U);
    msg.setDestination(60333U);
    msg.setDestinationEntity(103U);
    msg.req_id = 58056U;
    msg.status = 1U;
    msg.range = 0.456692038847;
    msg.info.assign("FIGQLHFAKCFUUZOOQZCBDHIOBDPVWSDHGPSJMQFAFIFZWDETVEVIDGJXVJXXMIGQHTIMBEWUYLFMVMTRKATLBXWTOMDPHZVHNBNZBKJIDYBFLYJYLNJEOXNNZNSZQZC");

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
    msg.setTimeStamp(0.829142483312);
    msg.setSource(64210U);
    msg.setSourceEntity(165U);
    msg.setDestination(29283U);
    msg.setDestinationEntity(108U);
    msg.req_id = 52749U;
    msg.destination.assign("UZRCOZRNMXVQSQEAGPFIALWSYGGFCZTRJBKUSGGUZHMTOKRUTOXSEDGGVRCXGIIZBHPAAJQDVFMOTKRWADCIOMNYQZVTCQCPBXYEFFOAYQZPSYCQEHJNHFVNRILHVWSUEDJWIIVGPOEFCBHBKJJMOKNSXS");
    msg.timeout = 0.660021898003;
    msg.sms_text.assign("BMJTFCTQFQDMNZRKMWHNGHHCKOY");

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
    msg.setTimeStamp(0.0503773177613);
    msg.setSource(6086U);
    msg.setSourceEntity(51U);
    msg.setDestination(12195U);
    msg.setDestinationEntity(159U);
    msg.req_id = 28239U;
    msg.destination.assign("MIILNVOYTMXZMCSQSFVTOXUGTDUTSVJRGLKZTAORQCBMZWKTCRKNDOXAGOAGNALEDNONUYFGMDJBBCGQRFVCDNXKBPSPZKPFWZMWSZOXUTFYIOHRDIJXIDQJAVEGUHIMABZQRTRJEJSZCQEGKNCBFXKJKLHYABWPXOVHBCWZYHYFPTSLOCKHUSYIPRNEEEHJVTEMEYJWBGDNQJIYPDWLZLEHSI");
    msg.timeout = 0.809539688419;
    msg.sms_text.assign("PPJKFBBVUBATYJZLQWYIKSUPOBAZNLDSOJKSNFELWRLRDHKSEGARFGOPHJWGIICTJHJPVQTKABDUTXQOHSBOCTBLWDSRQQRDPEUTVEIENBLDFYUOJKSYKGPMMIYLXXIQWVOXXAQMAAMAQAVZPJHZFCNTYXRTZEPENWMURHVHRZEZHDJVGRGFSICWXSLZINIKCGYYMEDGDTXYOVQHRKVKGFMSWNMNXBFCNCFWGVLCMAUNQXZOBH");

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
    msg.setTimeStamp(0.549841913908);
    msg.setSource(59979U);
    msg.setSourceEntity(80U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(69U);
    msg.req_id = 38328U;
    msg.destination.assign("NQNZDYWAPKKEUSTMXSQFSKUIOTRZJSZNWHDQPNSZPFOXKNNULJWWWKWFUSTYGPNYBZCKEXFEVEOJQOVNCTLFCPRL");
    msg.timeout = 0.368312674143;
    msg.sms_text.assign("YYFCYUBLMOMTKPHPFRPXUPZQOZGFKRTDVLYKNQALUZFDQFSKTPFMSQVWXOOTXSKEYNMHGWMGIEFBGRWAIJABIMSASXGSWJLHLNOUJVMUDZIFKVHMYOTGDWSWGLHHEFXVCTEXOIDJLNRFEQOPPDDARKBTUHBAYIDGJQVNCWBPTXSWINYKJPUEEIRZ");

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
    msg.setTimeStamp(0.485363590506);
    msg.setSource(15416U);
    msg.setSourceEntity(5U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(80U);
    msg.req_id = 30087U;
    msg.status = 244U;
    msg.info.assign("RKJAYBWHWVLNDNUESOIDBKKATJBCVCCZJSXCJOVLGHSXMTZUTQWKOJVRDH");

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
    msg.setTimeStamp(0.498399099413);
    msg.setSource(14287U);
    msg.setSourceEntity(58U);
    msg.setDestination(36734U);
    msg.setDestinationEntity(213U);
    msg.req_id = 24624U;
    msg.status = 228U;
    msg.info.assign("QOZEYNPFHKOZSCJEUENERJRLOKNPQKBPWSRNDVKXTEOSBQNVYSQHVCWXGRXSIAHTMCOZGURVGCYJGZPGXMVJJJUBFLZXFIMQXMUYNEAMRLNKPICSAGWGDVDGEPHJOHJFMPMXKIWIXBRDWYXDXEPYTYDMNLQUAJZKLIIYAATHYWCITNZMQALAUFLDAFFWAPSSHRKWUBCUUOTTSCKFCJECLHZTLYKBVDWVIMTUBNT");

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
    msg.setTimeStamp(0.929633270318);
    msg.setSource(57408U);
    msg.setSourceEntity(227U);
    msg.setDestination(46258U);
    msg.setDestinationEntity(237U);
    msg.req_id = 29114U;
    msg.status = 102U;
    msg.info.assign("WFSPBHYZFCFTEPYMUD");

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
    msg.setTimeStamp(0.700247367266);
    msg.setSource(3989U);
    msg.setSourceEntity(87U);
    msg.setDestination(28681U);
    msg.setDestinationEntity(239U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.157240858376);
    msg.setSource(49115U);
    msg.setSourceEntity(127U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(121U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.26912178508);
    msg.setSource(9214U);
    msg.setSourceEntity(178U);
    msg.setDestination(35135U);
    msg.setDestinationEntity(174U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.694524268067);
    msg.setSource(29245U);
    msg.setSourceEntity(40U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(243U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.316108917805);
    msg.setSource(50353U);
    msg.setSourceEntity(40U);
    msg.setDestination(13468U);
    msg.setDestinationEntity(89U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.491834457989);
    msg.setSource(9200U);
    msg.setSourceEntity(247U);
    msg.setDestination(28095U);
    msg.setDestinationEntity(209U);
    msg.state = 0U;

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
    msg.setTimeStamp(0.370483844973);
    msg.setSource(55529U);
    msg.setSourceEntity(12U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(157U);
    msg.req_id = 52422U;
    msg.destination.assign("KSXNLEOMRDLFOWQJGFRXGTUXVXRDV");
    msg.timeout = 0.460696963524;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 18131U;
    tmp_msg_0.type = 145U;
    tmp_msg_0.tow = 2037449482U;
    tmp_msg_0.base_lat = 0.372750977307;
    tmp_msg_0.base_lon = 0.704393106531;
    tmp_msg_0.base_height = 0.312347453626;
    tmp_msg_0.n = 0.30548913534;
    tmp_msg_0.e = 0.104407841432;
    tmp_msg_0.d = 0.857183290164;
    tmp_msg_0.v_n = 0.342162564361;
    tmp_msg_0.v_e = 0.170089195777;
    tmp_msg_0.v_d = 0.0922056906802;
    tmp_msg_0.satellites = 112U;
    tmp_msg_0.iar_hyp = 19400U;
    tmp_msg_0.iar_ratio = 0.820491655047;
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
    msg.setTimeStamp(0.771383223226);
    msg.setSource(22736U);
    msg.setSourceEntity(24U);
    msg.setDestination(54868U);
    msg.setDestinationEntity(108U);
    msg.req_id = 62263U;
    msg.destination.assign("FSASLZIZJHPUBJTOQXPEXRLGMXSHNBN");
    msg.timeout = 0.644214129971;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 190U;
    tmp_msg_0.snapshot.assign("IPSMCPEVFYDJEHBDUQFQVVGDBRMHUMWTOHMHBOADLXIZJXRSFAFCTPOJARVTVWEPUDKQTQZCCKDXOOARCZBFJJDMWOHHAZBMEKINZBEGYYJGIVSSTLXWQQAXJNTPGHBWAQXHKGGFUMWJHLNUYLIKAFZYYSMSNDDJKLQBVEUACRZCZCWC");
    IMC::QueryEntityActivationState tmp_tmp_msg_0_0;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.634475607023);
    msg.setSource(48833U);
    msg.setSourceEntity(254U);
    msg.setDestination(63334U);
    msg.setDestinationEntity(107U);
    msg.req_id = 64127U;
    msg.destination.assign("RVDNMALALLKXLFF");
    msg.timeout = 0.320030923735;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.658888011356;
    tmp_msg_0.lon = 0.384477457005;
    tmp_msg_0.eta = 36728562U;
    tmp_msg_0.duration = 55400U;
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
    msg.setTimeStamp(0.464643500319);
    msg.setSource(57880U);
    msg.setSourceEntity(11U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(199U);
    msg.req_id = 51752U;
    msg.status = 105U;
    msg.info.assign("YRPFPNHYNRFAFIGJSUKIHDIWMPKQDAFWASMORJQMJNOTRBZWDRTZEEFGGFYVZLBRSXBBUAWRVWPTFGXNLDWCAPTLZLVQZFXSHBEOCDVJNKRINMUZCKURMZTLNGQWCJJYHSUAVIWGSKSLDOUWGEHEOCIPGHYCEOSAETGJVFLMXVOCBAALCXUIVKCQXTVMDJBBAFSNXYKGSQQYPBKLZMIIQUZXLDMNTXIEOJHYMHRKTEQBHODDN");

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
    msg.setTimeStamp(0.115426504731);
    msg.setSource(30750U);
    msg.setSourceEntity(27U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(141U);
    msg.req_id = 6450U;
    msg.status = 16U;
    msg.info.assign("VOWGCZMXVRKKJOCHGFSIDSNCTQWHZAGNJFYQSUVFZZJEOXMWCDKGPZKYNYRTFPCWJFETX");

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
    msg.setTimeStamp(0.354562784189);
    msg.setSource(48347U);
    msg.setSourceEntity(71U);
    msg.setDestination(25748U);
    msg.setDestinationEntity(19U);
    msg.req_id = 59330U;
    msg.status = 174U;
    msg.info.assign("WUINLGKMDQNOHUUHLFPQOIAOWJPJOSAPKOGIXAAASZQJCQRZTEKEVWNJOYKHRBFJKITNRYLGRHFUYGYEIWCIPYIQACDCEQBIYIMKVZTZBTCHBCXFJFXUDXLSBGVBEULRTKAGWVPFZZWTPRSZSTKXINSYXPDJQLWDHFDOER");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.702622228572);
    msg.setSource(58827U);
    msg.setSourceEntity(236U);
    msg.setDestination(10846U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.092208146481);
    msg.setSource(30365U);
    msg.setSourceEntity(12U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.287905572787);
    msg.setSource(51756U);
    msg.setSourceEntity(204U);
    msg.setDestination(54498U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.582245971537);
    msg.setSource(33351U);
    msg.setSourceEntity(48U);
    msg.setDestination(18285U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("KZORDZLJZIOCDRBZMIYGDWWHNXLQTNMCEENWMAMRMHVNUKAHYCVRTBNSDFGJGHVBPMCOQEEWEWZIXJHFETDVVQQVOKCRQABTDHKUOYBZPLIHSEOCAMFIZUVGBK");
    msg.description.assign("ZFLHUHMXXUVLEJXCCFSIEDHPDZKUCGTBAGNWNFBJDMREYBKOTRHUGBYTMNKVFPIBWEAZQSMJRNJCACSRVJPGQDSTQLYBUOBDUIQ");
    msg.vnamespace.assign("DLFBEBUCYKFKTEKBVIUSQYIWPNJJXKHMPTSSJWQWRSZVOJLMUWFLCLFSWVEXKHIPJLRACUOVTRAHZXFQRYIULUGNFYTOOZEURJLKGNLURGSAMGAVDHZDRWEP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TEMFMLNHARBXCQEMCRNYUYCWZSPPWLULFYYLHNUEAZVDCKUAJTTPRQMLADJZACXJGYZRDKIATJGJZBTBDHAXBTWQLHEEJQXSGRLLWQGXGHAWYGFUZFOZFQIMOKYOZDNSMEASVIFBFBBUVFDROHUOWRGVXVPNCKJUDFNBHICMYHRVVOOKTKQUXJSNEGWDVJSPSLMNGIBITHSQZUVKDMPDHKCARZPQEYWSKPBTNG");
    tmp_msg_0.value.assign("OFHEPUROCTF");
    tmp_msg_0.type = 109U;
    tmp_msg_0.access = 240U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KFTWVDTWJESPYSXSDQMVRMTGFJRRTPYVGZNTKKZOOSQEZGDDIZZUXDIGYWHVSVOEBNAQQTUKBLOYCHOPDBWZHFNFHHLWGKSLTIMWIMFJJE");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PKCEWGEITDLGMNFXRSFAEYMERRVQVFZPRIXGGTYJVXTZVUTTBESSZL");
    IMC::Land tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0663526109839;
    tmp_tmp_msg_1_0.lon = 0.955434492111;
    tmp_tmp_msg_1_0.z = 0.124628840465;
    tmp_tmp_msg_1_0.z_units = 84U;
    tmp_tmp_msg_1_0.speed = 0.997970518165;
    tmp_tmp_msg_1_0.speed_units = 188U;
    tmp_tmp_msg_1_0.abort_z = 0.280502311071;
    tmp_tmp_msg_1_0.bearing = 0.85327630015;
    tmp_tmp_msg_1_0.glide_slope = 114U;
    tmp_tmp_msg_1_0.glide_slope_alt = 0.468507891897;
    tmp_tmp_msg_1_0.custom.assign("XMAJSEGARFMBHLARZQUNJGJHGCTDOQQYHKNAXMMGJMFFPBLEFYWIOOIJEKTJSGFCQRDSMMSGZPBGHQCVCKGVASKRJVDLEENILWYPQFBVTHYQUSLXXKXW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SessionKeepAlive tmp_msg_2;
    tmp_msg_2.sessid = 3835844447U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Announce tmp_msg_3;
    tmp_msg_3.sys_name.assign("GHPABLESWXIGZRHGICMN");
    tmp_msg_3.sys_type = 25U;
    tmp_msg_3.owner = 10709U;
    tmp_msg_3.lat = 0.856032038357;
    tmp_msg_3.lon = 0.275806318317;
    tmp_msg_3.height = 0.339529636206;
    tmp_msg_3.services.assign("PRYQJZLTDVFFGZJSOYSDFPKVOWAIUQGTQQLFTPHQXAGCIIVX");
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
    msg.setTimeStamp(0.42800289346);
    msg.setSource(10744U);
    msg.setSourceEntity(233U);
    msg.setDestination(14319U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("GLUBTNJEFPIQHOAAIYFCNDBWDGEUOROYGAXDICOBNASLQIWTQVLXHTQUAIKSCEGPVJPNZBCOUHYVRKGOMXEDFLSRUEXRIIYWAMQ");
    msg.description.assign("EKPXAZSWPCYWAPXCGOLBDYARKTPLEGMMTMZUYWJDCGGLUXFUFOJJKLVNMVHXMHWPGBAHJCUJFBENUYWEZNIGABKOCCSBHJFVWIDHTKETHQJWKQODTPKZYHFVADRQMCLBYISSPTLSEVVNSRGDTPMGVASLOZGAOFXQNXTUUIGMRHSJPAITLZQNBEJVZQYXMQZBTBXAUNQWEQUFWZCIBCRXYKOYPNIIVDWMZCSELYIRNOXQFKKSHDHVRRU");
    msg.vnamespace.assign("BMESTUKJCYKTAMTTIGOFWJLLVPMHXMMCAPWUIXLPHWTBDCFDCVTVGFRHFOVBNFBJMAZKLZSFORGBEHJYVUAYOYASVRUSUZMOGJRRXKNOGFZPHDIAWCMUD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZAUEOSZQZZSMFCHEVWQVRAGFMNFQOIVGMKDSMKIGKTZNXHUNPBPJBKGKMDEACWR");
    tmp_msg_0.value.assign("UQWCBAANBUVHIGSDSXNYFFB");
    tmp_msg_0.type = 224U;
    tmp_msg_0.access = 19U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NWUVZBOLLQZEDXDBGYFPTNSRAKQAHWJRSILQFLIOTQXFXJIYODMCOHWSYBNWXLMMQABBASCMKRQNITSFXLWZXVYMPCMCJKZBPNUMUJTCDLLNGVPSZQVFXIVCTOGHSVJLTAZHNAUHBQQFBOEC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QNLFUPCQEXBMGSMAIVWAJKRFWNZADUVYBGBEQCTOCQBDIANMHOLCPXEXKSRKDXMYOEUUTVDYZBPWFPLDRUSNTEAOPYKJXTXECLMHPUZJISSHGCGTPZDOWTUGRGTMBJFFQHQVTHOPVPJCSRAQLOZLBDFZEZJCHESYDAYXCIORKWHZGEAR");
    IMC::Alignment tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 55692U;
    tmp_tmp_msg_1_0.lat = 0.246596963858;
    tmp_tmp_msg_1_0.lon = 0.835923196434;
    tmp_tmp_msg_1_0.speed = 0.680824131292;
    tmp_tmp_msg_1_0.speed_units = 204U;
    tmp_tmp_msg_1_0.custom.assign("QWEZULSAGXSBCBSZQOEU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CacheControl tmp_msg_2;
    tmp_msg_2.op = 92U;
    tmp_msg_2.snapshot.assign("OKOILHJWOQHCPNGBVCXMREZJDSNLVCDZEEXFDKVUCAADAIABDJSLJXFBIGQAETNVNBAMMSYEURWGMMZTLY");
    IMC::DesiredControl tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.809685319956;
    tmp_tmp_msg_2_0.y = 0.887421259004;
    tmp_tmp_msg_2_0.z = 0.000218845837583;
    tmp_tmp_msg_2_0.k = 0.191890518192;
    tmp_tmp_msg_2_0.m = 0.23029136625;
    tmp_tmp_msg_2_0.n = 0.816368537988;
    tmp_tmp_msg_2_0.flags = 171U;
    tmp_msg_2.message.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.38742580311);
    msg.setSource(44221U);
    msg.setSourceEntity(3U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("IIVRTDFKSZAUEISOLK");
    msg.description.assign("DUZQPAIUJVAVTWUSQDMYTVLBGDMMPIXCOGXTSLWZDQRZGVDJSQBOWQAWLDTKIOVIATX");
    msg.vnamespace.assign("VSGPQBFEAXDMBHOLMSGIYDIAORZJXWTHETSIIYPMWFPBKANXUEJFLBZZVZVDSPNIWQHJDEGEGUOXYMKDLOHKNUHENBAQDGRWCURQVJRTXATFYCETDLHAJAIXCIYCKLPOYGQ");
    msg.start_man_id.assign("AMUUDCALKVNRXXSWMEUNGHGTZRDQZCHAPQYEQRESJWLQOKZYPMFJMKTSRGVXTLMZOFXAENHCONKUBIZHDSKZYBYGVQATYREFKQYTSHIGZCDCUEBQUAWKXLVRCNSOJPDOF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BVLVYNLDCRFHTNBMWMZKETUOEKHHZCWOCGPJKGMQKUOQLDNJBNCHMYAZKRSAMXERKQIVDPFCZEKRLRYUJHVNFOIIWSQHGHAMIWJTQYWLXCTZXVXSJVUTSEXHDAEZSGIANBJBEAJYRADZAIUEBXYNWFDKDPJSMZVJLHXVTG");
    tmp_msg_0.dest_man.assign("HMKKSFYGLMCHZGIYUTFWHARVEVGOQJSBENTCOBNKSMZPLPADUTIZQLHVNLBZRSUPPBACVSXEHYMUQOONUKCYYJNRVV");
    tmp_msg_0.conditions.assign("RYPWSREADCWTCXTYGKQUBUAVDDLMDANJBSJGKENTFIZIHARL");
    IMC::Voltage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.491027600822;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.571709125738);
    msg.setSource(59341U);
    msg.setSourceEntity(218U);
    msg.setDestination(62222U);
    msg.setDestinationEntity(192U);
    msg.maneuver_id.assign("GNKKEDJKNLJJLMMFBIVLJIMWBORTQUCPGDWCISJJTD");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 30611U;
    tmp_msg_0.lat = 0.970508799248;
    tmp_msg_0.lon = 0.223433964934;
    tmp_msg_0.z = 0.844114634937;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.speed = 0.264857059669;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.custom.assign("BYBZNUTARFELALGJBFVYLZWOPJRTCFPSGGBYSLONYOGKJHOZUTRQHXEIIEWCKPAZHYAWDJVXHWSXSRQBFWFTQUFLMTQFVXOUTUEDULHZCZIOXAZGBMJEXUUBCPOALVLGOTHSCKLKSAWXKCXOMPHNPOJRIDDI");
    msg.data.set(tmp_msg_0);
    IMC::SoiState tmp_msg_1;
    tmp_msg_1.state = 103U;
    tmp_msg_1.plan_id = 24583U;
    tmp_msg_1.wpt_id = 216U;
    tmp_msg_1.settings_chk = 13344U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0626705881217);
    msg.setSource(37850U);
    msg.setSourceEntity(147U);
    msg.setDestination(41042U);
    msg.setDestinationEntity(111U);
    msg.maneuver_id.assign("MXGLLYOEYSFSKSTTJRKMDIIUDZDCA");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.232231011335;
    tmp_msg_0.lon = 0.591913786357;
    tmp_msg_0.z = 0.395300511186;
    tmp_msg_0.z_units = 217U;
    tmp_msg_0.speed = 0.779221590063;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.start_time = 0.743304961591;
    tmp_msg_0.custom.assign("SFPYCVCJUXSTCOSFTMENCLSBWTLCVYJRTVOVWPXXSHJSDIUGKRMZAUGAMQPBZJIOBEGQGEBBTMYEQTUNLPRWFVDFHBRTYBXXUSXUIQK");
    msg.data.set(tmp_msg_0);
    IMC::Temperature tmp_msg_1;
    tmp_msg_1.value = 0.765914264816;
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
    msg.setTimeStamp(0.72900185791);
    msg.setSource(19901U);
    msg.setSourceEntity(250U);
    msg.setDestination(6376U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("DCRPMTSYZBYRUAUITOHAYJKMYDKZBECQOMZYTWAWVREEXNYBLPSROHQNSVHHGDXJGJFHGIRBTCLQPIRFRUFVEHBLXXCKNSPQTNCKDFAIRZAQTVDHTQMGPJSSCWPWFPGKVSZIOZRSLDBXWGBTNZUBEWRUZDMVOGGYLYDQPXLSVWNOJFFEKVTMAHN");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 59134U;
    tmp_msg_0.lat = 0.738322300849;
    tmp_msg_0.lon = 0.859700295165;
    tmp_msg_0.z = 0.978168689947;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.speed = 0.140783246253;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.syringe0 = 23U;
    tmp_msg_0.syringe1 = 16U;
    tmp_msg_0.syringe2 = 96U;
    tmp_msg_0.custom.assign("WIUCLYDXHZZHYPAQQYTMICWQVUXVHYAQEASDDBPYIOKZRWHOFJWGQYURXBHKOQABTPAKJEPCTCOURJNHPFOBAFCNUGJWMOJEHKAUOKGZQMBGIJDPETSWQZAKHECT");
    msg.data.set(tmp_msg_0);
    IMC::Elevator tmp_msg_1;
    tmp_msg_1.timeout = 4104U;
    tmp_msg_1.flags = 16U;
    tmp_msg_1.lat = 0.978501407875;
    tmp_msg_1.lon = 0.341543842962;
    tmp_msg_1.start_z = 0.847971639498;
    tmp_msg_1.start_z_units = 42U;
    tmp_msg_1.end_z = 0.0248834138864;
    tmp_msg_1.end_z_units = 120U;
    tmp_msg_1.radius = 0.290602442477;
    tmp_msg_1.speed = 0.87016166141;
    tmp_msg_1.speed_units = 70U;
    tmp_msg_1.custom.assign("QRLQRCZXUGLSCHKPTKMXRLULHMVJWDJKRIMMWWTI");
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
    msg.setTimeStamp(0.172974041035);
    msg.setSource(15686U);
    msg.setSourceEntity(159U);
    msg.setDestination(52764U);
    msg.setDestinationEntity(155U);
    msg.source_man.assign("OBKHOFDBVCXPWDDOCJQQXEQNEWJLLWFFHBFQLQVCOSLMFXRIHZCVMSDLLYTZVMJYSRNKKJWXJTIIBSXXZTKRHXEZUBGCZVAUEHKFJBWOOZIDTKQIASHVPYNYQOTGGICNAUVHPWPBFPYLJGYAMPWFYESMEEAPZDNYRMATQBMFUTUWXUVRSJDGLKTVFEMKGUPEYPBAYAQHAUGXDCCRZGPCLDWQN");
    msg.dest_man.assign("PUEMWYPPKVRURCJBENKIOZLSCKUKTWQTDJBVUNXMRQYDPSZRURJWGEXUJJYWVWTDIOBMXQEYSKVLBPYLYIOVEBUYPAZHGIBHTMTETRJFVGDLLWEQLOMWCVMKDDZLZKRIADHACQZWXZRWTJNDOANLCPQITNHCQGIHKRHUZXTXFECIYSEFNOBLBSMAONJWKGHFGXIXHIDBESA");
    msg.conditions.assign("SKVDBDEJHOLRHJHDUSIKZVAPAWBWEHOATLMVPYBXFVWTWNDLWAHGQITOVLCEIZULDMKGRHKYEGPDGNLTLILDJRMSGPUUVLBSQEKCIKNGCSWXINEGEFCPAVCFZPPWYGNDHQFQJLOWOFZBAAFQFPOQMCONPEUBRYJKVAUXICVRVTYZYSXJSUMOFXHNXYFMBXEIKSWEGOBMYFKABSYTBTTHMRCOXZQPJSGQDRZZIJUQZMI");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("VFPFMSWUMEOIHHNBUASJTNBREUDNAVPIYPGVPWDRFZTLCGAWOBJHYBQLICDVQHDNGRLDITAGUTTZFDFUQERSOSXPZCINZSWMYYYUOAPJEVQXUSDRKKSHQAMGTWJPBGKDLXBFNBPHRJOLJKHCMA");
    tmp_msg_0.type = 164U;
    tmp_msg_0.properties = 14U;
    tmp_msg_0.durations.assign("QVAAFUQONENUVABSSGUXGTJKIKLEEMIHVUNUSPCFKGODJPZEDSMXROUADWCNPABBPRSPJRWMKQNMWGFYDJAEMEFHTYGHFWRZMEYNZVJFRZSIYOGIWANCMLVCDOHCLRFDEODDSUAGWBZZXFFZLZHIXPQXBGYLIPRTIOSTKMUXBKMHKKNZYQILAHCTEGCNHKBSRBHTYLOHEJWAQDNQQOOJZCPVQMVDJQVLIRLPYTBVJ");
    tmp_msg_0.distances.assign("BQOQSZHOUUEEJYSVRLKCXIVDGOQQTSAPKYAQNTJDHEMVNXIYWAUFBNBLDEYVEFOYKQBFQJZRYAXHRPRULNCCSHANZKKOGXPDFUARTCPZJGTGNWSCBVYVTVEVEMFZBCYWXYNSWLITEJOWSRRRVZKGCLZNJHIXHMSGJOAJLSXAUHFBDMHUKZIJGWUAETOQMICPEWLQFIWFDGHTHTZJAMDXULLDKOIRPPSGFMPIXOZMKYQFLIMVRPDBPWC");
    tmp_msg_0.actions.assign("ZYCQBPYWSSXFKYVJNWNQDCZ");
    tmp_msg_0.fuel.assign("UDXDOFXHUUADKYHZZCCVGTHXAQQWPSECJRMSRKFGTEKZYYTBQBXDPPMFCSRSUMQXEADRWZBOWTMCXOTBQJIWPAGJUZEMTNQSZIGGLFVLRRLNPLMJXRIFJZVTKCERISXOPNTVKYOQESWHSXFNLAUJDCXZZKLHOUAJGBJBOIECLTWLORAQFUNPPWDUNVEEGBKYVNGAIP");
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
    msg.setTimeStamp(0.254933017555);
    msg.setSource(43097U);
    msg.setSourceEntity(142U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(170U);
    msg.source_man.assign("CHXMZJBHNFRADPEIMRNFOAQREKLQBCKXPBONLCYUWUSLZOVTFB");
    msg.dest_man.assign("CPQHLPOHVZOUNGCXXJQSJIPWASXZQRVBLCKXFFYQNAXMEWNCNYTRXOOBTCBAVDXEDUWGGSQZSRCYLWNMHLKEFMRTNYUQLOEINTNMUDVYZBEDOIDRWRWBMAFCDVGQKZUETPETZUDVWYA");
    msg.conditions.assign("KCLJFKNNJBWDVBJNCFAUOVKILEAGAWEFWBNRZVHHAZHWWOUGMKRQWUGPVLELEPAJDRLEXVHYTDEXQRDQTIQBCSFYAA");

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
    msg.setTimeStamp(0.200312499954);
    msg.setSource(30363U);
    msg.setSourceEntity(97U);
    msg.setDestination(39498U);
    msg.setDestinationEntity(2U);
    msg.source_man.assign("FTKRWCXTJTDZFMPYKKVYOVFKEUSXEPQZTGETDPGEXUFVNCNJVWIWQKMGCCOIZSNQNUJUFFVQLYFRRDNTANDRJJTHDNCXIRVYWGAFBGYPZRLJZJULBLJLKSEBSAASOPVVOOBRHMPHCIWSHBKLUOIMQWZTHUMSXGMWMOMXGIIYURIXXNFUBLWMQHSJALYFHIPXRKAZCUANKAAZEZIDBCOQCSGTQTDBHOEEAGPWYLEHNQLBGDRV");
    msg.dest_man.assign("TKQAHLQMSUHRGADYTNFUVDMIRZVKKFQHVWBXCCYPWYPLLSDMIZWEAOGKOSNMPKSDRSUBECJZWYGHJKJKHLXQAYIWHNBNCAEHRFCTXYBYTBQJOEFAHSLQMEAAWCTFMRHAWFOMEOMRVINRCGLALZOTZUJRLJZORYPNPFXGQZLPGGIZOGYVJUPSXXTJRUIJZQXFBDUDEPIONBICXISHFVBVDXDEPULMDYCKVMVGB");
    msg.conditions.assign("IEFCPKRIWOVTUJTWOTUSQZMYALZYKSRSOJMXPGNVHFINSGUBAKSGZJIDLSCVFJNSCJMA");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 19058U;
    tmp_msg_0.lat = 0.517054481163;
    tmp_msg_0.lon = 0.537193580618;
    tmp_msg_0.z = 0.54044556683;
    tmp_msg_0.z_units = 61U;
    tmp_msg_0.speed = 0.664466173225;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.bearing = 0.24590106317;
    tmp_msg_0.width = 0.115786106019;
    tmp_msg_0.direction = 13U;
    tmp_msg_0.custom.assign("ROTWUEITAQVYQTAODLTKQKGLNQSOYZQTMAJUVHWCAYYZMYFPAYKHXELXXQSLBLVTWNNJAEHXRNLSYVJCBSAIKFSNCRPEZNFJMWDSCRCSWGIGVKCZEMLCXKROORRNSYHIHMJBWTQMUVVLDXIIPFT");
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
    msg.setTimeStamp(0.893738737761);
    msg.setSource(33800U);
    msg.setSourceEntity(28U);
    msg.setDestination(27449U);
    msg.setDestinationEntity(102U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KRWMGJTIGPRWXFLFQUVIFKCWTIODGOEMVWALGQXCCVGZTMBLRNIZSPZUEDKOBBSYB");
    tmp_msg_0.description.assign("FDLVXTHMUWJCYESMBOJVTVN");
    tmp_msg_0.vnamespace.assign("VRMJARDXHKYEMXVYE");
    tmp_msg_0.start_man_id.assign("UQXJRMDXCCQPZWAUHSWVLEZFTZIGXPUKHBWRSJOUAPMGESAJVNREOZZJBWSQJIEJTOAGXZBLGUWEQVJLYJZRLCORKSCARTNCARYMPMDKXRXZDEGMCQETPIJOYBKLSKVZMHGKKKVPIHHGTYXFADFBN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JDZMTMRAOYZUSGBTALEVEEERFKSZJNVDYPKKGNBMUYUYKLQOAUSQXQHIPHFMPXIPDVUOKZGENNRAXBGAZJNTQKBDNMDWLVMQOQVCJBHBZFYKEFUSHXOLHKARPXVEDLLKYLRCOTRGZNESUJWMFPM");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 29646U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OOCIMEXLIBTKJXIMVZJMHSBFYZUSMBRDLBLBTF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ArmingState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 91U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::VehicleOperationalLimits tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 172U;
    tmp_tmp_tmp_msg_0_0_2.speed_min = 0.0303307707187;
    tmp_tmp_tmp_msg_0_0_2.speed_max = 0.910051348523;
    tmp_tmp_tmp_msg_0_0_2.long_accel = 0.806583531741;
    tmp_tmp_tmp_msg_0_0_2.alt_max_msl = 0.47416128853;
    tmp_tmp_tmp_msg_0_0_2.dive_fraction_max = 0.596933475675;
    tmp_tmp_tmp_msg_0_0_2.climb_fraction_max = 0.410347169045;
    tmp_tmp_tmp_msg_0_0_2.bank_max = 0.0837395132592;
    tmp_tmp_tmp_msg_0_0_2.p_max = 0.522264094899;
    tmp_tmp_tmp_msg_0_0_2.pitch_min = 0.243700359177;
    tmp_tmp_tmp_msg_0_0_2.pitch_max = 0.618244544377;
    tmp_tmp_tmp_msg_0_0_2.q_max = 0.195661388347;
    tmp_tmp_tmp_msg_0_0_2.g_min = 0.930596028944;
    tmp_tmp_tmp_msg_0_0_2.g_max = 0.201805550365;
    tmp_tmp_tmp_msg_0_0_2.g_lat_max = 0.930859748467;
    tmp_tmp_tmp_msg_0_0_2.rpm_min = 0.818852117407;
    tmp_tmp_tmp_msg_0_0_2.rpm_max = 0.236992490362;
    tmp_tmp_tmp_msg_0_0_2.rpm_rate_max = 0.968845309521;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DeviceState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.244830228987;
    tmp_tmp_msg_0_1.y = 0.72873118815;
    tmp_tmp_msg_0_1.z = 0.698882587856;
    tmp_tmp_msg_0_1.phi = 0.453035771486;
    tmp_tmp_msg_0_1.theta = 0.365065124745;
    tmp_tmp_msg_0_1.psi = 0.383117040898;
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
    msg.setTimeStamp(0.696413734548);
    msg.setSource(37083U);
    msg.setSourceEntity(209U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(230U);
    msg.command = 75U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FAZGQEWGIIYWUSMMKOSYHAUAXGMZSCBQNSCPIGJRDJUMQZSAFMGLNGNIHPOFWEVEKDKPBLUNEOTHZSRAWAHNWNOHVORXQZAIXUXDRWPXRMDUVFVBBMMDHLQMYBQCRWWPWOTVXYVDUYRXEYCSIYIBU");
    tmp_msg_0.description.assign("HPNWWSIYJYGQEJKABSDJLFRIXCRUCQTXVFRUBOGIQWMLUYOEZBTFZKTWNSMR");
    tmp_msg_0.vnamespace.assign("QIBRTVUICZGOIYWAFDKNMXXJRRMPPWMRHDBONJEFLZILISZLTZOVDGFDKFDSRKJRXWFSJXDODASSTDNENOCVUZ");
    tmp_msg_0.start_man_id.assign("FATBLKTXUNWOJFBNYHDARDMHHKZPDLGE");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("UTFKPYNMGEYXLOWMKDJNXTEWBROMAIVVMWCERHAKRNHAURBOQPQDUJSFQGOBINTIJMRGFDNRNMTQFYTSTHHQHTRKXWAZHAJIYAVWLJGCVCUSPZUWRWWIFDHDREEBXJUPKGBXZMTKDNHTSGRXDSLJDBPFZTAUUPLPCSQKVIXYABZAHAEVKYOQPFZEIYOYSLIPLUGKZFQNBOSLMLGNGHXVBCOVEEYOYFIF");
    tmp_tmp_msg_0_0.dest_man.assign("XPZBMCMOQDPSJVBBAVOPNCWKCMWABFXCRZKRSESQHTUIWJHRIMPBYLLSFF");
    tmp_tmp_msg_0_0.conditions.assign("JUWUSLQGDILQTNREEDQDMHIFZHQPYQVVEXJWMNGWVZDGOLUCSJJZJSSAAKKGGMVRXEUPHPFXBIRCJPGNXJTMQVCVNEHNOOMDTBOPLAUJCIXXZRGFWQEATIABCUSDKRHXPZKITAVUKWSGLCNIKLLRDZWMQCCZELJWQFHBMMYKYINYUWRBSNFFFTLTKDENZCZOIVSFHMXGXBFBIRPOBHOVHKUESEFZYMUJ");
    IMC::DevCalibrationControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 43U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::PopUp tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 61076U;
    tmp_tmp_msg_0_1.lat = 0.610769064937;
    tmp_tmp_msg_0_1.lon = 0.301781275198;
    tmp_tmp_msg_0_1.z = 0.927355018603;
    tmp_tmp_msg_0_1.z_units = 86U;
    tmp_tmp_msg_0_1.speed = 0.519701335908;
    tmp_tmp_msg_0_1.speed_units = 57U;
    tmp_tmp_msg_0_1.duration = 51405U;
    tmp_tmp_msg_0_1.radius = 0.719915411645;
    tmp_tmp_msg_0_1.flags = 170U;
    tmp_tmp_msg_0_1.custom.assign("QGJLICGBIVHHDHTSGDLBWAIVTUAWWTULJBRMNASAVYXTORQJMSMHNKBXC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.863450567716);
    msg.setSource(50083U);
    msg.setSourceEntity(110U);
    msg.setDestination(46980U);
    msg.setDestinationEntity(243U);
    msg.command = 7U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EGIMDMPZNJKVPWFXKRP");
    tmp_msg_0.description.assign("GTOKERULLCDPOCRJWKUIUJADDKCPDCVBMMJRRBNQYFEQJGFGJQNLEYXJCPSHQEGDINSBPEMXFYCRTBWIQBENBZKSIMTKNDZZUMZWRWIDARCUHCTAKSEWPYFIHJMAJVJXHQTXHALPILONDHYXAXLQWSSHELIR");
    tmp_msg_0.vnamespace.assign("LXEXBFZBUNZXRATTKVRVRKIBJHNLSGWZCYNFNLYLSGDKRXUOYSTAOZGSGPEAMJYBWKYJEANSOVYBMPPPQQUIJIZYBAGZALAQUEDFILPMRZHFDAUEUJMZZCMVWZVCLHEXHRB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EMRJPWCSAGEMJZLYRLCMXRGJQYQIOJMAZHZBRXUKDJMGUNTWWRFHLNKVHNSCIVQDTNFPVIVAOIHDHGAUPWAWPAFAKERZOIAONTG");
    tmp_tmp_msg_0_0.value.assign("GZNUDRFBCGMIGMHSPNMGJJEOFERAMBPQYQILREUZXPAFBVIHZPKHXPAUNJNDGTKYHHCVESOFKZTQJTCWPIZUGOLYOCWDUYZEALTCVMTZKVDUXFBDWUWTEHNROYOQXERKZISWGEVFLLBQFGLSBMDICLKKYJPSERWBAXAYINXHIJCXUKYNDUORSNSPTSQFXDZBDBMLJSKQOSJWVTIHGJCEQADMWTTOKNALVYGRCPXAVH");
    tmp_tmp_msg_0_0.type = 223U;
    tmp_tmp_msg_0_0.access = 225U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SJDFMACBZHDIRHLIUSTGKBJHFMAPROHSZCMKTAVDXFWKFZIPELFLVQUGPYQDSJJYIUXCLOYAMHGXRNCAZHOOETNJDGNLONIEWVVQMRKEYNOVQCITD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VJQANXOPGDUZVSIRVRVIYYCKMOXERQQUUMNHOIKTZIBLWWULTGLABTEJQZWYTTBHHFYKYWXBKLEBAKMENQBRPDORHQABFDNPCHSOFLGJNDYVUTVVKHVOPFGIXEDWSUFDAMCZPWICYMLQSGNHFJEYAXQGFHICFEZLCSIONROTPUFUKHDBPXNBJAVNXZJM");
    tmp_tmp_msg_0_1.dest_man.assign("AYXOTWQUIVDYBIANLUMGSJGORANZP");
    tmp_tmp_msg_0_1.conditions.assign("CZOCHMCKGTGSJWVTATCIRZYKDVSEFAUAYNFNAJQGALVWFSDGIZMNDIXOZD");
    IMC::Map tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id.assign("QTCCJZORWVNIJJVYVHDWABSAMTKZQNNYMHWIAXYHURKBJBCFJEETRTUPDNCMGGFQXVKDGWVRXESZXNDJOYCMWO");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Depth tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.0473644210139;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::VehicleFormation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.85776002834;
    tmp_tmp_msg_0_3.lon = 0.716299465538;
    tmp_tmp_msg_0_3.z = 0.266863742884;
    tmp_tmp_msg_0_3.z_units = 189U;
    tmp_tmp_msg_0_3.speed = 0.00169529678476;
    tmp_tmp_msg_0_3.speed_units = 110U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.x = 0.0171946871507;
    tmp_tmp_tmp_msg_0_3_0.y = 0.509961829318;
    tmp_tmp_tmp_msg_0_3_0.z = 0.26929659018;
    tmp_tmp_tmp_msg_0_3_0.t = 0.607714254216;
    tmp_tmp_msg_0_3.points.push_back(tmp_tmp_tmp_msg_0_3_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_3_1;
    tmp_tmp_tmp_msg_0_3_1.vid = 20099U;
    tmp_tmp_tmp_msg_0_3_1.off_x = 0.00125961595404;
    tmp_tmp_tmp_msg_0_3_1.off_y = 0.576837457474;
    tmp_tmp_tmp_msg_0_3_1.off_z = 0.9484484947;
    tmp_tmp_msg_0_3.participants.push_back(tmp_tmp_tmp_msg_0_3_1);
    tmp_tmp_msg_0_3.start_time = 0.0990945158156;
    tmp_tmp_msg_0_3.custom.assign("HCADGCAXRHIWKKDROPNRMJMBLBYMIUREORVONZCYAFCPTKIXUCFGASVELJMIWJVYSDVNBXQEGXBONNDBBSLYISVFVZKQPBEOAJJFJWGCGKFWFLWTQCRGYNMSNMPUYQPPVVOCZOWOUKRYWHDHTDMPFEGDZYQTEAHSHUXWCJMEOHUXRQLIBQBTJI");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.626664686951);
    msg.setSource(29092U);
    msg.setSourceEntity(48U);
    msg.setDestination(59087U);
    msg.setDestinationEntity(77U);
    msg.state = 205U;
    msg.plan_id.assign("SBSLWTKDLSPDLIUGOJMWCDZRKWURKTVWZRWFZKHPHCYYKG");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.9665523202);
    msg.setSource(64363U);
    msg.setSourceEntity(119U);
    msg.setDestination(54363U);
    msg.setDestinationEntity(126U);
    msg.state = 173U;
    msg.plan_id.assign("RWPTSJUVBBAELJTQRPXSRYOTECIGWONIDQJYHFMAHZIIHIFAHYCSTUJXJXZETQMRWSCMKDDLOOPILWZNOZBWEEJUOPDLTIRYSBNGWHILCWDSGCGFVYKSFYHZJWCURXVKVGGZQAMFJOBGFQQZBZKNYDLGWRQMMPRLUCLKOAVFPOLQIXYASRBFPIRDEFUKHUFOU");
    msg.comm_level = 59U;

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
    msg.setTimeStamp(0.797865178009);
    msg.setSource(36982U);
    msg.setSourceEntity(68U);
    msg.setDestination(10358U);
    msg.setDestinationEntity(160U);
    msg.state = 239U;
    msg.plan_id.assign("AUVTUXAZSICRIEBIUHWLFGAIJJQXDJIZRCQHRMFYWZWUZBVKXBFEPUVDRTNPANVHGZLERMSLOBERJPACJYHEXKUWNOTGYEKWLMZACTORTLDDVONQS");
    msg.comm_level = 188U;

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
    msg.setTimeStamp(0.446525710058);
    msg.setSource(12873U);
    msg.setSourceEntity(155U);
    msg.setDestination(23921U);
    msg.setDestinationEntity(37U);
    msg.type = 196U;
    msg.op = 135U;
    msg.request_id = 51706U;
    msg.plan_id.assign("DXXZAVTGRVCHUESTLVGHETWRBCQFDDSBFVGGLOUJGKBRMSBLIQPMQBCLUPNMWZZYAMHSICSGGXMZFDFIPPTEAJJCZIFHCYWGPXKUCKSWACEKODJQGKHUADTWTFJPNHILPANUFQFRYVQYZMSODYIAWDORYOKXHJ");
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.930899052736;
    tmp_tmp_msg_0_0.lon = 0.286807835346;
    tmp_tmp_msg_0_0.height = 0.768112423841;
    tmp_tmp_msg_0_0.x = 0.30533964911;
    tmp_tmp_msg_0_0.y = 0.881815929502;
    tmp_tmp_msg_0_0.z = 0.377806574708;
    tmp_tmp_msg_0_0.phi = 0.000234252565752;
    tmp_tmp_msg_0_0.theta = 0.836268928398;
    tmp_tmp_msg_0_0.psi = 0.330109210172;
    tmp_tmp_msg_0_0.u = 0.941221535575;
    tmp_tmp_msg_0_0.v = 0.731972564984;
    tmp_tmp_msg_0_0.w = 0.0991909474744;
    tmp_tmp_msg_0_0.vx = 0.343579984399;
    tmp_tmp_msg_0_0.vy = 0.859256103826;
    tmp_tmp_msg_0_0.vz = 0.0697797172254;
    tmp_tmp_msg_0_0.p = 0.960480629877;
    tmp_tmp_msg_0_0.q = 0.476394343005;
    tmp_tmp_msg_0_0.r = 0.832685726421;
    tmp_tmp_msg_0_0.depth = 0.843557442053;
    tmp_tmp_msg_0_0.alt = 0.658216794125;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 156U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TLPYSAFAGYFZJLXLVTO");

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
    msg.setTimeStamp(0.140363984704);
    msg.setSource(15737U);
    msg.setSourceEntity(177U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(53U);
    msg.type = 136U;
    msg.op = 98U;
    msg.request_id = 13495U;
    msg.plan_id.assign("FAETHOEPBWSYNQKZRHODQWMAHVSUZFXGTCDTUHEZTUXVMKFUQIAMNKUAZYXGSJBVQJU");
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.328289416228;
    tmp_msg_0.width = 0.364357826839;
    tmp_msg_0.length = 0.945368092219;
    tmp_msg_0.bearing = 0.0613832325826;
    tmp_msg_0.pxl = -2355;
    tmp_msg_0.encoding = 161U;
    const char tmp_tmp_msg_0_0[] = {-92, -122, 102, -126, 49, 67, -44, -8, -62, 26, 93, 31, -66, 96, 84, -69, -77, -36, -88, -116, 33, -100, 45, -82, 28, -96, -4, 50, -97, 106, 101, -101, 47, -80, -99, 104, 53, -40, 104, 116, 45, -91, 35, -28, -46, -17, 124, 18, 29, 43, -85, 78, -22, -84, 60, 25, 91, 18, -51, -98, -103, -2, 95, 100, -79, 70, -98, -61, -38, 119, -49, 50, 9, -30, 90, -57, 75, 89, 66, 119, 108, -79, -121, -45, 41, -124, 112, 5, -65, -7, -34, -119, -6, 63, 116, 4, 85, -48, -89, -5, 71, -32, -64, 57, 24, -18, 96, -26, -12, -122, 45, -51, -35, 108, 119, -48, -18, 126, 113, 63, 28, 116, 89, -57, -4, -14, 52, 48, 116, -35, -106, 108, 2, -94, -12, -34};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VNEHZUUAHSTRSCJWBFLRLNOLJXZTSBILIVGGJKYMSFSZFDKNPNCBUUAPRQCCEIAFXLRZXKOYQKWEORSGJJQHLHFWZXCGMFIPRJVNKBPEQTLYGLUCMPKUQANTDYJDIYBHBAWVMIQTGTLCMUBSJMDKVYGOOHHVRXOKTWQDFCEZZNO");

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
    msg.setTimeStamp(0.908926008591);
    msg.setSource(62787U);
    msg.setSourceEntity(225U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(188U);
    msg.type = 95U;
    msg.op = 172U;
    msg.request_id = 12564U;
    msg.plan_id.assign("IOZPNKTLMACMDEFLIDTTUGWFPZQSIKPETSVRWNBYJZPHRNGOUHWVYTYWVYNKHGKLCOZLWYSFCJLXFMGWYZVIHPRRFEKGBKUMYBAINMKBUJDRECQONJEXKOOLWNAXWHEUAAHTFDSRHGBJUXWIAXYIZNXFMGUDUSSNBJHKUOMVLNCMJSPZYPRLQUIDAOHQXQILJVCHSZPMPTCGFQIDLEVRR");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.792413766049;
    tmp_msg_0.phi = 0.16899261542;
    tmp_msg_0.theta = 0.416383284114;
    tmp_msg_0.psi = 0.251805289106;
    tmp_msg_0.psi_magnetic = 0.150951079236;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XCBOIIQQAQRVWMDBJZEEUFSZDJBEJQBUHMSLSZMCEGSYXFKPVNLXGBJPHKCRKWXOYYVBCSFIGLUZKVCUZTXWTNNQHAFUCRAXPUTQGRZPPLPZGKNROHLQUWTYJDNEHTJBQIFISNIHRNMJJXIPLHAMBNMMJSOZCVEBDPWUSIKYEXKQDEVGYTOOMTUKIYXYJNNODTVECBWZFE");

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
    msg.setTimeStamp(0.362221048993);
    msg.setSource(28732U);
    msg.setSourceEntity(230U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(249U);
    msg.plan_count = 63745U;
    msg.plan_size = 1689806593U;
    msg.change_time = 0.941311376903;
    msg.change_sid = 60660U;
    msg.change_sname.assign("MXXYQNDLNPFOFSZJNECWNWGQNOLSGXXLXMKENZAQWJBZNLSHTURTIKDYOTTCAKVGDKRIUCEAEWMUVJYUKRCZIPOCIKBRZMKCBEMQEQWBURTYAYRPWYGPVCVNXLVYJFAZWJBOVHHOQVCYSVDGCZYEXIGFJFRTUFQPEMWMLZHARBIIMOFPWDMOSHSVRMOAZXJZKFITADPJGTQEDHKFGHSHTUYDPOBUPXLJAWFSULSHGSNPAEQBLCBUXVIL");
    const char tmp_msg_0[] = {117, 3, 15, 40, 94, -106, -53, 91, 108, 48, -64, 45, 104, 66, -28, 109, -92, -34, 73, 105, -23, -2, 20, -83, 80, 117, 112, -97, 72, -19, 92, 109, 27, 94, -123, -110, -123, 21, 42, -110, -69, -101, -125, -49, 76, -29, 96, -96, 102, -114, -5, -19, -31, 87, -65, 29, 25, 43, -121, 73, 106, -9, -15, -122, -55, 122, 100, 41, 83, -43, -40, 85, 84, -25, -124, 34, 26, 5, -101, 79, 29, -59, 19, 64, 44, 105, -75, -98, -125, 107, 101, 93, -24, -40, 4, 17, -125, -127, -94, -121, -66, -55, 94, 59, -104, -6, 126, 17, -114, -108, 34, 66, -58, 68, 23, 32, -25, 84, 5, 62, 125, -89, -1, -39, -11, 52, 56, -28, 13, -116, -97, -34, 21, 94, 101, 77, -33, 29, 32, 16, 29, -56, 6, 124, -94, 15, 113, 24, -58, -124, -42, -10};
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
    msg.setTimeStamp(0.469189551782);
    msg.setSource(50072U);
    msg.setSourceEntity(56U);
    msg.setDestination(41069U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 36579U;
    msg.plan_size = 3799756059U;
    msg.change_time = 0.372155883386;
    msg.change_sid = 551U;
    msg.change_sname.assign("BXIGMKUNVWYWIPXJDZJQEJLGNRHMKMLYVKKMMMNZSBYOFZKJQOTBEFILXHPSCSZIBKUDPBBLTGWOXEQUADVSOYHEWOCRNGTYCRUKPFEXDHCFCXMNAXGLWFEYRAGKLANCGFTACTRMETHPZGDYUPHPJNRLQ");
    const char tmp_msg_0[] = {75, 63, 21, 10, -105, 14, 12, 81, 104, -1, -34, 80, 38, 48, -94, -29, -72, -17, -46, -102, 62, 29, 100, 11, 99, 25, 15, 8, -54, 115, 80, 35, -69, -101, 120, -99, -13, 111, 17, -50, -120, -27, -21, -13, 61, 108, -106, -74, 42, -20, -22, 52, 107, -115, -112, 52, -22, -45, 75, -53, -55};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CYVZTUDUJRMFIBODDDAYKINKNKTRWNXSTVA");
    tmp_msg_1.plan_size = 1818U;
    tmp_msg_1.change_time = 0.0956805671701;
    tmp_msg_1.change_sid = 46437U;
    tmp_msg_1.change_sname.assign("HYTEOMDHAOQUTZWUBTAXCCQIQUDCLMEWJIRYWDCQAFXWZDNXXUVMBSLODWUUWNWJBRENHPEIMIBCTTOVEZKXYBXHJLBYLVOGXMMSPQBRFTARZDFVOJLCABVXKJSLQMGWYVPFCZDQYHSVIYZDLKYJHJWZRKDAGGVHUPKOEPIDIFRJALPSNRZKSBLI");
    const char tmp_tmp_msg_1_0[] = {0, -94, 8, -122, 20, 58, -103, -128, 94, 22, 102, 116, 82, -123, 64, -43, 35, -116, 21, 65, 1, 72, -70, 11, 63, -118, 15, 5, -108, -8, 17, 37, -69, 32, -120, -101, -79, 26, -34, 8, -37, -113, -108, 97, 73, -57, -60, -96, -5, 112, 51, 97, 72, 34, -5, 46, -22, -52, 1, 107, 16, -126, 126, -108, 4, 117, -110, -48, -115, -2, -71, 109, 100, 23, 116, -112, -67, -126, -52, 31, -125, 78, -118, -61, 84, -57, -24, 11, -118, 117, -1, -120, 52, -79, -98, 82, 77, 38, 116, 4, 40, 27, 25, 61, 42, 120, -62, 8, -11, 43, -92, -60, 30, 90, 120, 48, -100, -85, -109, -18, 35, 7, -69, 120, -39, -51, 36, -62, -124, -98, 52, 43, 6, 13, 60, -115, 94, 25, -29, 116, 100, -5, 112, 39, -19, -98, 105, -105, -64, -6, -26, -100, -43, -20, 96, -43, -128, -71, -102, 8, 13, 35, -35, 89, -39, 125, -18, -90, 83, -26, -112, 124, -40, -104, -122, -74, -112, 122, 34, -14, 0, 91, -107, -121, 108, 42, -25, -113, 113, 118, 80, -11, 109, 126, 44, -80, -124, 100, 19, 104, 41, -120, -92, -21, 10, -32, 59, 81, -6, -13, 56, -4, 111, -78, 19, -24, 5, 122, 30, 90, 98, 94, -115, 120, -77, 18, -43, -44, -17, -114, -78, 52, 122, -79, 67, -82, 107, 13, 4, 68, -82};
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
    msg.setTimeStamp(0.616955007567);
    msg.setSource(561U);
    msg.setSourceEntity(87U);
    msg.setDestination(51850U);
    msg.setDestinationEntity(137U);
    msg.plan_count = 30830U;
    msg.plan_size = 2340035068U;
    msg.change_time = 0.893275876487;
    msg.change_sid = 19746U;
    msg.change_sname.assign("BHFUXWKTYRCQGALFSY");
    const char tmp_msg_0[] = {23, 21, 57, 70, 97, -32, -105, -74, 101, -19, -1, 70, -2, 2, 59, -123, -94, -66, -35, -46, 33, 73, 116, -94, -28, -113, 61, -80, -118, -108, -59, -29, -53, -91, 49, 51, -114, 88, 60, 95, 43, 18, 6, -33, 41, 79, 111, 116, -81, -83, -18, -74, 30, 6, -124, -49, 96, 64, 37, -89, 68, -102, 48, -7, 89, 106, -101, -57, -110, -30, 113, -117, -114, -24, -26, -70, 117, 16, -103, -73, -13, 7, -73, 21, 19, 62, -127, 121, -22, 98, 3, 110, -57, 28, -95, 65, -123, -120, -106, -7, 35, -93, 119, 34, 99, 93, -73, -48, -99, -73, 22, -108, -72, -57, 78, 56, -108, -8, -25, -55, -84, 124, 46, 63, 64, -105, 61, 103, 73, 4, -114, 37, 6, 64, -56, -104, -51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OPHTOXBIEZRBTJGRZLFWCSPRAUYQE");
    tmp_msg_1.plan_size = 22380U;
    tmp_msg_1.change_time = 0.596916293431;
    tmp_msg_1.change_sid = 850U;
    tmp_msg_1.change_sname.assign("QEMFLVCBFEBJLSYSAFHJUIDWSLATJJYODYJFQWVSCWRXTFGQECQVMHLPUOQGSJRXOVLNKHYOABJCMHIDQFMXHSSFTBYFOXZZMKZXEGSIETUIPBEORVZNHMCIRNEAGVWLMBGTNSAXRPYXKCDWNTPZKUEVPXQLGOCNDYKMKZIDULAYBNOHBPDDAQRKJFVTIIUIDKAWSAPXZKIRRYWRLHTOYHZPUTVNHPZTNRDQXGNJCBMAUKBQWJUWFGPZECWCU");
    const char tmp_tmp_msg_1_0[] = {-6, 4, 120, -51, -17, -107, 95, 3, -120, 101, 13, -104, -41, 75, -5, 5, -89, 97, -111, 29, 111, -101, 96, 18, -2, 33, -14, -74, -110, -119, 7, -54, 31, -84, 11, -120, -34, 32, -72, -105, -15, -84, -107, -57, 80, -45, -82, 113, -37, 118, 85, 120, 123, -127, 5, -29, 95, 62, -10, 86, -102, 64, 91, 73, 56, 122, -35, 76, 79, -53, -75, 45, -72, -107, 40, -80, -81, 5, 94, -67, -23, -34, 22, 106, 3, 67, -65, 107, 79, 118, -22, 124, 23, 112, 22, -45, 38, -74, -91, -22, -94, 67, 87, -92, -127, 33, -50, 84, 37, -38, -126, 62, 97, 48, 26, -50, -104, -13, -11, -52, 83, -108, -15, 57, 121, -36, 67, -3, -49, -4, 87, -78, -12, -28};
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
    msg.setTimeStamp(0.318630601549);
    msg.setSource(14498U);
    msg.setSourceEntity(126U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("PDNWAVTXWWLKJFSYSTMYPJGBIQWQFQKREGMOUGTOYDBYYEEYKCSOXKHZANDPDLOABDAGJMFJVCNIPBJLWZCMHGJTGGULKXLHZHIMHXERKCUIMIQYQXBESSETAVFMEFVWZUOYNONZOYWZSQCQAEVNPHUDORPAURMEPJGQSIVHXQAFIRYDDCLLVHBPFCPJOIXGTVZRUUJMCK");
    msg.plan_size = 63316U;
    msg.change_time = 0.97021292903;
    msg.change_sid = 19072U;
    msg.change_sname.assign("MNMGRRCCWIRJNWKXAXWGJOHPSNKVMPTUDLDPVGJAALOYWZMWEIFTKYNHSXIRRHECXDNMLSJKQBMOACHDFVXLHPQNZOCFYULDUBOKXZESLVOA");
    const char tmp_msg_0[] = {-75, -119, -97, 45, -87, -108, -55, -16, -5, 41, -22, -24, -60, 119, 36, -12, 95, 107, 73, -19, -64, 81, -84, -11, -120, 31, 95, 82, -60, -117, -17, 26, 112, -29, -122, -30, -72, -42, -87, -73, -65, 28, 53, 90, -33, -21, -62, -82, 21, -93, -11, -118, 115, -21, 121, -11, -72, 44, 46, 109, -78, -67, 34, 62, -25};
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
    msg.setTimeStamp(0.740830510907);
    msg.setSource(51642U);
    msg.setSourceEntity(199U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("TBQRYOPRJDPBXKWIRSHLIBHTUFYPYNJDUFFWAPCWUTUHFIBCKJJAS");
    msg.plan_size = 17167U;
    msg.change_time = 0.0760138331439;
    msg.change_sid = 24988U;
    msg.change_sname.assign("ZTHPTVECEYQZBWBOSUQLCGORSIQTONUWSRCFJNELRKNXXBYEGDSYICUTBKFN");
    const char tmp_msg_0[] = {-25, 86, -87, 28, -125, -115, 84, -86, 121, -56, -91, 51, -94, 45, 18, 98, 16, 122, 56, -113, -77, 71, -46, 43, -17, 75, 49, -36, -49, 96, -74, -122, 82, -21, 58, 109, -29, -10, -76, -56, -41, -26, -36, -57, 93, -65, -66, 72, 89, -3, 6, -115, -24, 11, -124, 59, 71, -36, -111, -55, 61, -111, -50, -42, -1, 98, -86, -89, -61, 77, -41, 113, -94, -47, -103, -94, 34, -73, 112, 110, 92, 73, 99, -7, -65, 41, 103, 17, -62, -13, 11, 7, 9, 23, 23, -45, -4, 25, 38, 98, -96, -121, -13, 15, -40, -125, -71, -35, 52, -128, -93, 82, 91, 29, -56, 60, -14, 58, 80, -110, -80, 123, 26, 40, 120, -71, 5, -120, 92, 116, -113, -107, -92, -121, 2, -54, -91, 72, 66};
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
    msg.setTimeStamp(0.410609975638);
    msg.setSource(40449U);
    msg.setSourceEntity(132U);
    msg.setDestination(5493U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("XWRCOYUUESULADDUKIJUNZNGEBUICKOMRWXPPBIZJVNHNXRJFCXMIZKCMHLDGWLEXKDGDMFMPQULTRQLFYBVOLNDJQEESHCPCTCRIF");
    msg.plan_size = 57952U;
    msg.change_time = 0.847413560468;
    msg.change_sid = 53604U;
    msg.change_sname.assign("YIPUNEZPBAJHKMZQINZRRKQVGXFWTNGXDKQGJBWCEUIWRADFVBHSTGVYCYWFABIVHDRZLYJGMKMFECSINXEFPLQHCTOAXXCUEZCBNSEHQEDNUOAOQROSFAEHQFOSKWCUXEAZHDDVUPTJPHLYSYLJYYKTQIXOOY");
    const char tmp_msg_0[] = {119, -14, 31, 67, -7, 22, -43, 56, 120, -107, 24, -15, -42, -41, 23, 4, -29, 87, -8, -107, -4, 83, 33, -13, -94, 16, 104, 36, 118, 58, -29, 73, 29, -64, 66, -45, 70, -58, 82, -96, -42, 51, 64, -24, 43, 89, 68, 38, -88, -111, 114, 122, 63, 31, 61, 10, -94, 54, -15, -17, -84, -60, 126, 117, -117, -14, 11, 116, 35, 109, -97, -20};
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
    msg.setTimeStamp(0.395384921997);
    msg.setSource(4108U);
    msg.setSourceEntity(124U);
    msg.setDestination(58246U);
    msg.setDestinationEntity(87U);
    msg.type = 169U;
    msg.op = 33U;
    msg.request_id = 39993U;
    msg.plan_id.assign("WXPDKEMKLIJQPEISPJNXLEPXOTVFOZQKBZAPNPBEQZDUKMBOVUARAZOXJSIQVGOQCBJMTLHYNZWMRBNUCYEJCISHCAYUSERXRZREMHMUNIKGADBXMFWSDGXPPDVATLKVMOIZYASGMTCBJXTWUFZIWCVNHOUGCTRFDXGQHIUJDTQGEJFGRFFZPFNJLCHHXSVWL");
    msg.flags = 22571U;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("YMZBTNRKOQCJYEXKFNEGLRZTVRISPUNBHZESOGDRIIHYOTAGAHZACSLXCCPMSTSNORNEBLEFJGFUPKGRZHQTESGIMUBUGVAIFUBQPXXOMQCNLEDJVE");
    tmp_msg_0.timeout = 47436U;
    tmp_msg_0.contents.assign("TVHLLIWIPPQSIQSGFSLYPLMXOVIQOPBLKWZUNDFBXRYFHLDRUXTFVYNPNMLTAFZYJCGVCMKJJXFXSRELBHUILQNWGKYNWUOEECGEGNOV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WRPGBKAUXCABZNBUSUZFLGSVKHQQLMWJQGDYYXCBBRFNPQWNCVUWWBHEAHLGOZCXKJWMYXOGIVROSMNPGIEYTKGSJSJHXSXFJNXTVAPPLKACBXGQIQLOBHFNTFLUHIZYMKIVWTZXIWZZMDURZWJVOBADJEROCQSRTOELDTTQZDGRDHKQLTVPDBUCSEQPZVNHNGMVHPFEUN");

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
    msg.setTimeStamp(0.973090882644);
    msg.setSource(42566U);
    msg.setSourceEntity(119U);
    msg.setDestination(34735U);
    msg.setDestinationEntity(165U);
    msg.type = 36U;
    msg.op = 136U;
    msg.request_id = 63779U;
    msg.plan_id.assign("GDWTBMORLKRWMTGYREGUSWATLGOMIEABDVPLJEZGTLYISFHAUATNRHEFHFWBTQSBKPOIUOBNIDGXJXC");
    msg.flags = 46757U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 4864U;
    tmp_msg_0.lat = 0.558796995612;
    tmp_msg_0.lon = 0.547737202938;
    tmp_msg_0.z = 0.371176401408;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.amplitude = 0.639038553279;
    tmp_msg_0.pitch = 0.0698710992947;
    tmp_msg_0.speed = 0.0409220761652;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.custom.assign("SQPNCVKDIYRXJGUUMVCDFZMIVDXPICRYDJWKIVCBACSFMOFFUKHBGFHONOCWJZOEVOEWKTZSEQMPHPSQDLHSBLULBSBSJUXXXOTQNTZPPLJHXJEXZXNLGEPRWMATLDI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RDEYUNQMTCWOGJHGKDVVSHOKQPEIAVWCHKTCDIBAMHIEMAFNELKUFZMJCUBNSMPRAYZIDWLIWQZNFKQSVUETAXAVTVRXGYZNGJVJJRAURPSYCUFSJDUSPZZUTKOKFYIVNJRDGGZMIMFTQZIMPLSWHYTYCITQFYFSFBOPLOLKAXMXSPLXWCQQKOGNQCUPBBEEWADOH");

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
    msg.setTimeStamp(0.908468251649);
    msg.setSource(17053U);
    msg.setSourceEntity(48U);
    msg.setDestination(42072U);
    msg.setDestinationEntity(56U);
    msg.type = 242U;
    msg.op = 231U;
    msg.request_id = 48360U;
    msg.plan_id.assign("BTUCSMVJNDZUCKYUBMNCVCQNIYLMJDYYFWFGVVIDECORZADHIUREPLJSESTZPMFKXBPGDTKMYXYZAWWPBKRWNWLPRTVUAOOHAOKJIZHMFWNLNIFXHBOLQAKMGQUUJOIFSLLGZAZGHUCDEXSNAFIHVXACRZJBEFHZOPJBKYPRXLEIREFSMQHM");
    msg.flags = 31400U;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PDCJDYVINJLGIUWLXJACBLTSIMYLUSNGFUAYOHUOCFMBKPLHQSOGNOENDTCPLYKHJPKWVAZRACOQTREKIXKUWBZVLGWRTGNIQJAIMROWXYBJFHENOSLMGEGTINRWYTMHMQRQSZIUFVODWGFLBSGEACBPKAZPOKEBEJKPJJQCZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WAYFGMDBONSBDSCNNTGGMUFPGWNJIDRIZMVQX");

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
    msg.setTimeStamp(0.431433573208);
    msg.setSource(47799U);
    msg.setSourceEntity(230U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(156U);
    msg.state = 101U;
    msg.plan_id.assign("XDMLYCBCZAGXGDHGEEYXIZPWMRFCREDWNOOVNIDKPJIZRLSWTUAJKFEUZIPWPUDNGZUQMITHHFRGEQJLEADRXLBFHFUHKFAUNLZDNHAO");
    msg.plan_eta = -993053601;
    msg.plan_progress = 0.594609355021;
    msg.man_id.assign("ELUTKWAJVKEVASFYVNFLXIMXDAQPJYNFPEOHMKGHGISYTXDBQRUQPEFZYSZXNURGBTRYMUCPJEKHKNCCGSCWRCOHJWPHOFGQLSCWQPYARQFKOMBONOORJMWJCRVTLPTVFGBQWDEHUHWBNXTVZKPDZYDQLSBADIFHJZZELXSEFRZLCKAHCZDMUFIAUOTTLGZIPWUKCIWBXEUDIIMQDLGOPRIGG");
    msg.man_type = 31357U;
    msg.man_eta = -778222309;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.677683747059);
    msg.setSource(1955U);
    msg.setSourceEntity(198U);
    msg.setDestination(50267U);
    msg.setDestinationEntity(163U);
    msg.state = 164U;
    msg.plan_id.assign("UNCBMHVAGUXHMTLWQVPJEEFYFRJLXVDALNKHJZNGLGTWUTCPDTWJITZKHFJCHPIZCIOJBDWBRCQISGYJAAOZOYBQAPVXXGPISMZWBRRVZVXMNQGZRQSAMRSQTYGAOOEXSMXY");
    msg.plan_eta = 696489016;
    msg.plan_progress = 0.421269246989;
    msg.man_id.assign("WNSCQZTOZELFKSTVUHJGFLPRTABWOSZZECXUJDVWRMGSTJNGYNTGEEDFESFYNQKPNCUVLIOAKULFSQFXGKCUPIVKTJMXDKGUXWEORIHXDHIVJLMBRAEKOQVADYSJIZJMNLUBMLNUXCNTYHAJYFTEPIWHFWLLVSHGZCRUGZQHPIPBDLPRWYTYMWKDOVSMBHBZQQCRYOMBDBOCZXUAWDEAPHJEQYHMIKOQIRZSV");
    msg.man_type = 6493U;
    msg.man_eta = -86466914;
    msg.last_outcome = 251U;

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
    msg.setTimeStamp(0.598179119714);
    msg.setSource(5397U);
    msg.setSourceEntity(172U);
    msg.setDestination(57567U);
    msg.setDestinationEntity(40U);
    msg.state = 131U;
    msg.plan_id.assign("NVFJZGHQWAPGYJUKTAZNBMBCSGDXNEWTFRKBHZIMRDHCSFLEBEXAADJBTUYFTWAWFKMFVMLUWAECKGD");
    msg.plan_eta = 517948028;
    msg.plan_progress = 0.576413384177;
    msg.man_id.assign("VSFRMNTPUJTBEBMZBXGUCWKBGKRAYSCNSCJTPLFQUKFBUOLIPLLXHILOYWBCYSJVEDHLIPIDJDUXHQFGEVKTBRJG");
    msg.man_type = 28564U;
    msg.man_eta = 1086724797;
    msg.last_outcome = 35U;

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
    msg.setTimeStamp(0.571101239817);
    msg.setSource(3342U);
    msg.setSourceEntity(32U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(247U);
    msg.name.assign("RBUDSRKFSNSBORIXDJYOYALYZQICOQTJGWDLRIBWWRTRGGNNEUPHXIAUGCGVCOGEEPQKNEVPQVSRLBHIYQZESSFGLYIAQSBOLRYMNTOUAXFNAHTDMPTXJZXMLELCVOZLKMCERAKCXQCUPGUVIJFVOMSGIJTYKZAMJLHVYJZAIPPCFVXNJRZNVFFPQFHUFEWDZKMNKMXGJBKHCHTPDIXUWPTDMELDKXQS");
    msg.value.assign("QCUMFFEWABRXOSZCUGDYBPFNSJQCGJFPSJZNEIOPITLNCRPZKREFZOLWHLITNBFXFWTRQBLRKQVEDPHFTAFEHODHWQSZKLAMBXBKMIVPTTLCWGFSNAMGEBUJJCIKJKEYDCQZIWPUIKKPZIZBWMUUUYSJXJEDDKXAUNGDLOCADMXAIVPZQGWSVNYRMDRUHNHOLHIBTXOHCRVMBANTQHVOXYAEG");
    msg.type = 50U;
    msg.access = 227U;

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
    msg.setTimeStamp(0.735797177581);
    msg.setSource(28659U);
    msg.setSourceEntity(0U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(120U);
    msg.name.assign("BWRICABKRTSSUUJJEHZXRRLNGRCOWPFSNTXUWGDVPWTXALGUKQLISRXFIJPKXCWBHNEMYJGYIYSMEYAAGBHGLUVYICVOTOLVXPFIKKLADMEMTKGNNKAIBWIYDQJCQYSSZZSVXMQCHMMHSUWZFCRUGVZPDBDOXUCHZFHOBMUYKN");
    msg.value.assign("QESXOFMDCVWWFYDPBHNRTPTXPCXHLEIUKNANYLTIIBVEFFAKZO");
    msg.type = 156U;
    msg.access = 197U;

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
    msg.setTimeStamp(0.842073940032);
    msg.setSource(15579U);
    msg.setSourceEntity(224U);
    msg.setDestination(18279U);
    msg.setDestinationEntity(65U);
    msg.name.assign("SMLGJZZNMGFNZHYOCSAJDIFLTWWKFLEYIOBHCCSKGZMAGETKPINPHJZBJOMMEFVLYTMWUJDOMFCNYJFPAKRDDBLENZXTWPVRCBPAJPZEXVMCARYDOQUHBRKAFIAH");
    msg.value.assign("SSLVKCZIBUBMITFGYWMNDVLDZVJCWODFBTKKUPHNYMZJVLEUWFNRJNKOPEOENQTIRGEYKDQFZQQASGRHANKADPXPRXECLSVAQHSBJZQORPPWSFCVKQFBXLBTIMQCALOBZRIHDWMHKEJRWVYJLCTPGFGXWBEISXAFZBEUUUZAVHXCRNETAISCQLHHBOTMXMMOIPJVOTHPNYYDJMLOSJYSUYRFDINZERCDJFGWLNGYKPMTOXXAHUAQZXGV");
    msg.type = 59U;
    msg.access = 140U;

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
    msg.setTimeStamp(0.405559787759);
    msg.setSource(61445U);
    msg.setSourceEntity(184U);
    msg.setDestination(29012U);
    msg.setDestinationEntity(44U);
    msg.cmd = 125U;
    msg.op = 113U;
    msg.plan_id.assign("QJAOMKMPEPQPDFUIEUCTZVCZMKIRSQVQHYFCGWWIHZGUTLCFGANLVAFZYMKYNXSQUWVCREBTIVDONPWGMDXLOUHYDGHARFHVBKQMYABXZWANSMEWFYRBPIENVKJUKHRZSWOXDRSWZBOXJDNUNYXCJTDTLJIMGHTDAMBSHQOGLEIPHJSIENCFAZYLONUPBLYUXIBUJXGKPDFO");
    msg.params.assign("UCCNCKZMTKHZIUYVGCXBILHBOYKLSMIRBIKBJYGMSRTSWCWKYIXFAFOSINFUCTDHMCPGPBWQDAYWEPJFYJBGNOHLGVGJWWEATAEEUFMCGORDUSHSTGMOIENRR");

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
    msg.setTimeStamp(0.739155313846);
    msg.setSource(35899U);
    msg.setSourceEntity(145U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(179U);
    msg.cmd = 39U;
    msg.op = 6U;
    msg.plan_id.assign("SVCZDLUNTUCTJWUCOMRIIXVCQAFIDEMNEQCIEADLBSKLYFROXKTDPHQWCKDWMCFF");
    msg.params.assign("BFHJJNSFPHSHATUUMBCJVHOWOZEDQNVLJTCIDXHVYNFZFVFI");

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
    msg.setTimeStamp(0.899004331056);
    msg.setSource(35976U);
    msg.setSourceEntity(98U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(204U);
    msg.cmd = 71U;
    msg.op = 80U;
    msg.plan_id.assign("KQAAMFPABJDHCCTDFXVWAHUAMFEXZAQGVMZTXOZNMOXKLHUIWYLIBEGFWCJTHMBOSLZBJMATFZAPDJGBLPBJPRNWIXPCLUPXBYMHOYVUNBHOOFOQRYQSFPTYECFZWNWUDHESZYHIQSEXEERTOAQPLCGKEHTKCUITIJIKKQSUWVVVYAKVQGNITMXQEDYGDDNJGBDSHDRDRXGWPKELJRGBZZNSMYJNPFLCFRSNTLMCKC");
    msg.params.assign("HUZLTSFIUWPKNYDVSADMMOKJKLGFFUPYCDCMTCBIDWXTQLPONEZGNHUAPFMIOJFNSCVLTVHGXYYSCTXJBEAFNJBGRTKJGXCLZIN");

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
    msg.setTimeStamp(0.665456961893);
    msg.setSource(45454U);
    msg.setSourceEntity(115U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("VMUCROZSRRKJKGFBSAFSUEQUTKTENCXQLYIJPLZWJJEVINGCCWBXEBAVWGEDRFPYIVURVKCSSOXHLEIDGRZVJGOVDBJXLKCQGAAUQWEZWIYAYYELSTOCDLKUUHOTXAHZSPYVNF");
    msg.op = 210U;
    msg.lat = 0.988870772623;
    msg.lon = 0.0468448986372;
    msg.height = 0.632689602087;
    msg.x = 0.514194569993;
    msg.y = 0.751677667645;
    msg.z = 0.270002004977;
    msg.phi = 0.614561642356;
    msg.theta = 0.470359475472;
    msg.psi = 0.39676640334;
    msg.vx = 0.801236398567;
    msg.vy = 0.023771873799;
    msg.vz = 0.686943220245;
    msg.p = 0.517497107912;
    msg.q = 0.994490980453;
    msg.r = 0.420430351031;
    msg.svx = 0.454251619164;
    msg.svy = 0.733078921909;
    msg.svz = 0.300639493494;

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
    msg.setTimeStamp(0.627892356317);
    msg.setSource(8549U);
    msg.setSourceEntity(17U);
    msg.setDestination(9598U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("WYFVWRMUVPKAYQXDFWTAKOTMSIPEQDDIHNWZXXYCZYBDMGQNFFEYPANHCIPVYJKESUORLIYLATNMJYUBZNUCSDOFPEDICKIRGBZZCXHYQEPXLBRRPDLMSTSOJXBFKMNHRHIVFSJGJCKVBVXCKJQQSAWRABTZDVOGQOBQGJLHT");
    msg.op = 243U;
    msg.lat = 0.428858970175;
    msg.lon = 0.560790762981;
    msg.height = 0.0660700834331;
    msg.x = 0.462231790047;
    msg.y = 0.939174681514;
    msg.z = 0.652685455134;
    msg.phi = 0.965443098256;
    msg.theta = 0.257927897915;
    msg.psi = 0.974380219264;
    msg.vx = 0.44649089739;
    msg.vy = 0.487612376691;
    msg.vz = 0.389727385767;
    msg.p = 0.887848081305;
    msg.q = 0.55605423468;
    msg.r = 0.998113629314;
    msg.svx = 0.709459145773;
    msg.svy = 0.552029642375;
    msg.svz = 0.197954234829;

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
    msg.setTimeStamp(0.570102425617);
    msg.setSource(30670U);
    msg.setSourceEntity(180U);
    msg.setDestination(9756U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("JNCTSBTEAGMOQGBEANBLZILEYLTTBGIIUSUWLFCYKVMETKDUMQWVPKPVWOFXJMRYEMONTCPYCXNFHXZHOQMLUAWQCKVTPLWBVSXDOPIVMGYCFOZRKZAHIOKIZZPBSGXDJERHDEDKRFLHPEUPZGBOCLRDQQPOXARVQXDNAWJXNTAZFIHTSNWYKGYJR");
    msg.op = 135U;
    msg.lat = 0.740114183581;
    msg.lon = 0.937458995949;
    msg.height = 0.46858241088;
    msg.x = 0.735865028698;
    msg.y = 0.346586714828;
    msg.z = 0.108807045496;
    msg.phi = 0.768272876266;
    msg.theta = 0.891771830306;
    msg.psi = 0.564186171416;
    msg.vx = 0.280826276376;
    msg.vy = 0.614690683229;
    msg.vz = 0.726305337223;
    msg.p = 0.29763664219;
    msg.q = 0.861880750179;
    msg.r = 0.448599213544;
    msg.svx = 0.760692412098;
    msg.svy = 0.0232676009191;
    msg.svz = 0.350089722266;

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
    msg.setTimeStamp(0.588626725457);
    msg.setSource(48712U);
    msg.setSourceEntity(90U);
    msg.setDestination(10052U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("SJMALIIYVZ");
    msg.type = 38U;
    msg.properties = 160U;
    msg.durations.assign("ILZELXWAZNLJJWABTOIARUHWXJARYSLKVNMCZYFYIHFLBLKDVMTVGUBYHKJUVNSMCERPTVPWJXEGSAHJAJCORXZGDGQMDEEDGTAKSNIYFNLRIDFQVSFOOKQJNOFGRZJPVARMIHACZPNDEZGBIUXEXUUZVBWWWQECT");
    msg.distances.assign("GUNJWOFZEBDIGTLRAFDHJKQHUQVEIYUUJOUBQKRYTZPTBVASBDLTCUFQJFWGRIGCEZKAIWZRXYXNUPEMMW");
    msg.actions.assign("DJKIASQHPCJEAPBJTGCCQFPTIQZRAFAALIYVHHUZNINWDBPUEHJXYQKLOUBBCTELKXXAPSXQBSOVTPOORNGVSWVOWPNEHYOVVTLXTPOKFBES");
    msg.fuel.assign("ZIOJSCRJYFFEGSIBUNKVYLQHVQQZCBNAAVBWOHJQUWPVAZFNRNIKUSNWTOXMREWDWRJFMFEWRKFICIDMKBZDRNYDPOOCTOFJXLXJGTBEYNECYVBFHKVPUTZKECPQXPIKAOAQHHTIITTDUQUDLAZONQN");

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
    msg.setTimeStamp(0.764299947503);
    msg.setSource(2822U);
    msg.setSourceEntity(76U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("NGVXJXNOKVRGNHITPCOVZZGMBRAWWOEXYCKTDFOSMNANYSJKZOTIIUITRXFABLXMJSYBWQLECQQGDR");
    msg.type = 20U;
    msg.properties = 9U;
    msg.durations.assign("ZSYYMBQABPHIHFODQFXGEQQHPVLZQZHXWEWZKJDLALWBVFJTZGNESMUPZJIIFPPEWPNCSSIGMNNMFJVMHK");
    msg.distances.assign("QXAMBRDDXINOLUSPJSJYZVFHOEJULKYGTXNRTOCKKLRHCTTVMRFSLKVBIJASAIWEVXOBWSBEHIIVEECCVXOBSXPQUNSRG");
    msg.actions.assign("QIUWDPLUVYQSWLAWLLYJUCCHOLIZXDBYQVWPHNBKWFZEATKIKXVEKTWWWVGZNIPRGAJAOUQVAITXTVXSUTMHCBUYXDRQAQEPNQDESRNCTHXNYQHLJUWJPUZOKZTYRYPMOHSHSCAIWQMEJPGRLLFNHSOMDNBZELGDCOXSMJQD");
    msg.fuel.assign("NJFCTACYXFNSTTGHCBLMUWRNAYYRQZBHVCBLFPKLFVKXWQMRBPDKFMGKEYNJEWITOONOAXLGSFRRRDSKXZNOQTDONJQKYLUHVZFSHDUFPTUZEBVPZEKJA");

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
    msg.setTimeStamp(0.86544223404);
    msg.setSource(18645U);
    msg.setSourceEntity(169U);
    msg.setDestination(34449U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("ZMTJPXJTHRVMKAOMNKIFEVWFSGTSXTDDHXCWSCDURHQZNXEANALGQWEETUOFXOPJYKABLFRCMGHLBVQDJOKBIROCSYFFUWCZCIPRLFOHKMUVUWRYMNHUGBIGVDCVTMPEAZRBKIBNQIZKQJAOSLABMYKGESCCVVZWUEDEPJXNJWIKDSMPUEIQSGQXNQAOVBCQZHNZXSXLYVHFPBYJZLZBJLEQTNGMFUPDXAPDTNKWRORTTDAHURPWYIFLIHJYYY");
    msg.type = 29U;
    msg.properties = 161U;
    msg.durations.assign("CUGJZZDKTQOVKZONHIXADQGYDQCXBAYLQMIZYJNFEVHHNUWBMEXITCQSNKQTHJPNQCAERMLFFSZLUYPYPPORXVRWNAOVRMQBVJCZCJIKDRPIOSILVFFDEADSRTCFEJIMVWMEXMHLBIXUTSBOGPVBGBAYLEQOERHGGIHUEMXBJFYKFTPVN");
    msg.distances.assign("WKQILISBULMPXXJGXZZDCSQHSJHMCWMUTKTQXPZVAEDAVEZJTBZFWFTWQXCPPWYAVIBGZSDTMVILLVGBVYRISBHGHCPINACLHDHDNFXYFEVGNIOHCJRMUWLFKDHIYFTZGMCORDVWNPAWHOCSFIZNQRFYDJUQYANXCDQXFKYJGDEJBMOJQRXNSBUWESNQPMNBOKJSKLBKRALRKZMGUEROXPOQGKUTEYUOOETPUEVZ");
    msg.actions.assign("OMMOBYDYZCQ");
    msg.fuel.assign("KGDNWFWKMJMFBQNQLHIIROGHIVNVPGOATUZQUTUGYWKKYDUEZGKESVTHLKOVMYPCVTKIFYNP");

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
    msg.setTimeStamp(0.634376147244);
    msg.setSource(17297U);
    msg.setSourceEntity(36U);
    msg.setDestination(27171U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.336270249874;
    msg.lon = 0.0948452391794;
    msg.depth = 0.916304269972;
    msg.roll = 0.567333616133;
    msg.pitch = 0.121744179531;
    msg.yaw = 0.23979438173;
    msg.rcp_time = 0.186991491683;
    msg.sid.assign("WGQBBCFDPKFKYAZKQCYJDGCHEDBAIGPSIADJUVNGZXZREQUPDNZKOWSIWCLEECLSAMAWYW");
    msg.s_type = 46U;

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
    msg.setTimeStamp(0.220620101435);
    msg.setSource(9545U);
    msg.setSourceEntity(111U);
    msg.setDestination(18773U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.317775391266;
    msg.lon = 0.363952213212;
    msg.depth = 0.432882096902;
    msg.roll = 0.713890965918;
    msg.pitch = 0.765726996112;
    msg.yaw = 0.607565113104;
    msg.rcp_time = 0.583080000328;
    msg.sid.assign("QJHGVOICJBZHIUZFFKMFSGDMY");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.666304032421);
    msg.setSource(54371U);
    msg.setSourceEntity(238U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.399850598295;
    msg.lon = 0.37211303804;
    msg.depth = 0.502579772834;
    msg.roll = 0.571789956495;
    msg.pitch = 0.782271416321;
    msg.yaw = 0.166151386277;
    msg.rcp_time = 0.195223762271;
    msg.sid.assign("JMWNNOVFGMUMTCPQFJDCXNPKPQSSLPROICXTIWDJRCIVGEEAKFHOUYMSCKXULXEIPVNPWPLWTEBRWEBJBANZAMDZQQDXV");
    msg.s_type = 239U;

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
    msg.setTimeStamp(0.630935867285);
    msg.setSource(36547U);
    msg.setSourceEntity(239U);
    msg.setDestination(52438U);
    msg.setDestinationEntity(71U);
    msg.id.assign("JHLXYBQRCRFHZRWEECADOADICNZHIGRLOAJWVPLWMOTTBQUIFGPMGGVSAXFNCZVTRAIIISGYVNDIUEGXMJMKFBROEZFBRLBQYKFETNTLQOGYJTMPXYQPYBUKASPVADVXHQNVWULNPIJSXSHBPOACXAWJPMWRQVCUMUPYNKNTXZCZTHDFRMHJQFNZXSZLSKSWEHEWBYUCKSXQVNRTKBGWJLHCFZSKVLOEEOZFBODYDUQDUGDKDKHMOTYEWIMCL");
    msg.sensor_class.assign("OXTLRYOFXWZJEGMLEEVDJSBWRIWEMXTFLPWKSTXPNLCROGRPVAFDKQOSVAPBHIGKTLNNMGMQVZRTCWVEFBVBJPXCRIIPMJQFIYTGYALEODTDCBHUSTCMGDUHNSSUZMZKXZUQCDNBBWBAYOHHCNHOUARMYKYWQUUCQNKRVXPIAKQOSNAGLSNUJHXJZFYTJVPMZAEQLYUZPKJYALCEKX");
    msg.lat = 0.744085961383;
    msg.lon = 0.6841843527;
    msg.alt = 0.845118523895;
    msg.heading = 0.815028423826;
    msg.data.assign("LASSOTUPAURUYNYCQEHKDYBQPBQRDKZLPLEULHFEDMHODPFTSEUGWEAPRCSBVZKYYHTFJXGVQVTJSZUFSLXRQIHCMJONXKTBXYNCZWDJLCFOVFQBHTIKEBQMVHMWB");

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
    msg.setTimeStamp(0.220059166299);
    msg.setSource(61061U);
    msg.setSourceEntity(222U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(148U);
    msg.id.assign("EVJHCCLYITMGHBIBBJUDPENXWYBTIGSKYWTLILQJTEKBOBEKRCTMVYWSRZSLETKKIADZYNUCGRIRPITJCKGOODUSMLPQAPXWRFNBXEQAXQPQXZGVMQXYYUMJDNLFHSNOIFCOQRZCDMAOXGFADNADUXCKEDWMUVA");
    msg.sensor_class.assign("ALTVATNRWEDEWWKCVHDZERVMEXFUYJMUCNFPZIIKNVJAPUDIIQ");
    msg.lat = 0.725351982028;
    msg.lon = 0.331416157636;
    msg.alt = 0.720784265737;
    msg.heading = 0.577735472314;
    msg.data.assign("QVHKCQUWKOREFRJPKVICCDFIAHSTHCEBRHLRUKASJBSRBFIYQWJZGQXYLQUDFGYWZPLTKRAGJRDNNKTX");

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
    msg.setTimeStamp(0.460663741069);
    msg.setSource(18079U);
    msg.setSourceEntity(199U);
    msg.setDestination(4506U);
    msg.setDestinationEntity(169U);
    msg.id.assign("MWVQSLKAZWVCKLBLBYHDGUXEDJESZPEVCQWRNVQGYTZEGIQTSAALYNSVISRKJYBRQJXRPCFFBYGBJUSLAYHPTUMKZGDNPLHWXKDGRIYQXGJUCNKFXFIWMTJADIAJNESATHBP");
    msg.sensor_class.assign("SSPDULFTOIZGUXUTAJKFRSBDAIQGAANFDYKHISQFCRJXLDXWPZHLBNJCUIBLLVPJCYYKNTZETBREANEWGVFRHOHDEBNQOZAYVVKROGGQLDXNWEJWVCIMSCVWMAXQBPGPVZMIOXORMPGCXMYTJINAHXDOZCGZISSVEHBRFDGKPQEFKRULFCUPITHZNJXHWFWSZULQD");
    msg.lat = 0.368898227076;
    msg.lon = 0.567416345834;
    msg.alt = 0.437292950875;
    msg.heading = 0.0615238754469;
    msg.data.assign("MHWWTSEXARNPMAWVFHQRTNHNUZCHTSMPCXMCYNYPZHOSVOQNGFAZAAHDAVDFSXEDPYOYXORQYDLKZGKKFPPAVJJGGPZKDEGQLQBYYRMEBFPLBWLCUTISUEIOBHMHZKCOMNELTWZIGGDTQBLRVABYSMTKIPDYBSXVTTQWZBUURQVAVKRFLIFSWUJOI");

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
    msg.setTimeStamp(0.761564854907);
    msg.setSource(21854U);
    msg.setSourceEntity(133U);
    msg.setDestination(40090U);
    msg.setDestinationEntity(161U);
    msg.id.assign("XHJJERSPLMUDKSRDSWWRLWPKUCLGVPCXFYGMZHYPFRZDNTUWUZEBFJNNMPZWSBVSLSPQYBPERYOQBKMYNGE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TLCRNWKBUGRAOSLJNCOBWMGLIFGPCHDSPLMOZFPGEOQRVIOELJKIKXEHNUQLIKECBMIJQDFSJSYFWFAZUVNTAHEPIJAATOFUXQVKYXCKWLQSP");
    tmp_msg_0.feature_type = 231U;
    tmp_msg_0.rgb_red = 90U;
    tmp_msg_0.rgb_green = 111U;
    tmp_msg_0.rgb_blue = 129U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.783544216035;
    tmp_tmp_msg_0_0.lon = 0.0400760995938;
    tmp_tmp_msg_0_0.alt = 0.349793871377;
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
    msg.setTimeStamp(0.77346331245);
    msg.setSource(56594U);
    msg.setSourceEntity(57U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(138U);
    msg.id.assign("TLMPKILIGBKWYRMDWUFWGAFOHLGOBVOBLBFPQFC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OLASBUCDOGVKPHPVORAQHTBXYTWJMGXZBZIKCXQAPQCDIYIZEQGPNMERTUWEQGXFATSANQDTFXFOFRZJXBENVEWPNCJISGHSQBFHHUXCOHJMMRUDLHZAIGXZLIUNPQMLOIYACEHZDXKTVATIKCRBLJYSUIUUOSGGBLYYFCBWVFKZVWZTSGNVNBTADJRSKJURKVNSDCDPOJEELWMUTYHVQNRRPCDOBSH");
    tmp_msg_0.feature_type = 223U;
    tmp_msg_0.rgb_red = 9U;
    tmp_msg_0.rgb_green = 54U;
    tmp_msg_0.rgb_blue = 237U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.636992475775;
    tmp_tmp_msg_0_0.lon = 0.65023839404;
    tmp_tmp_msg_0_0.alt = 0.045999851944;
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
    msg.setTimeStamp(0.130776213954);
    msg.setSource(36705U);
    msg.setSourceEntity(171U);
    msg.setDestination(20591U);
    msg.setDestinationEntity(237U);
    msg.id.assign("RPLLBLMVRWPFLKAMKNXITLKXCJQTMJGOJHXOORMUZBWJGDNVDIELAAZNDQQWUBFGTWSQYPDFRBZAWOFRFZJMBVDFBQETSTFIVNDRQZNUGJSENREKSYCEKJQCOXPGKZMVCNUPEISLQMBWVAOVTYPYXWVRCEUPYSQHIRCAVXYDMCOJLYFHTFSOISRCUCCKDNWWUEUKUWGPXYHBOXZKTXHAEBSHZLDBXGIJJGDLFGHIKNHISMAY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GEAQQEZUPHVBRODY");
    tmp_msg_0.feature_type = 82U;
    tmp_msg_0.rgb_red = 201U;
    tmp_msg_0.rgb_green = 176U;
    tmp_msg_0.rgb_blue = 5U;
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
    msg.setTimeStamp(0.976825853578);
    msg.setSource(42452U);
    msg.setSourceEntity(81U);
    msg.setDestination(64562U);
    msg.setDestinationEntity(240U);
    msg.id.assign("QSWZIKULRUCHCODAUCMJEWRMORQVFPFVZFBISBHLPQXQHPIBOTVSVBSJHQMGFUMLGZKENHLOOAVALUIJBRDXYNNUADYWXOTOBTNYKKFSUEEORJILIGFPMQTHTCJYGENGAKLMJRBQDWUBESPCWPGKVECEPAZIFGEMYIMRZVCODBTSCBDZFXUQDHJRGZYDSTNI");
    msg.feature_type = 204U;
    msg.rgb_red = 60U;
    msg.rgb_green = 237U;
    msg.rgb_blue = 233U;

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
    msg.setTimeStamp(0.814319882436);
    msg.setSource(8211U);
    msg.setSourceEntity(0U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(16U);
    msg.id.assign("UGAOABUXLBRUMLMLHPQPYXUCJFFAZZRFOWFIEEFEMARNMCYP");
    msg.feature_type = 80U;
    msg.rgb_red = 153U;
    msg.rgb_green = 86U;
    msg.rgb_blue = 111U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.318429303484;
    tmp_msg_0.lon = 0.23659603089;
    tmp_msg_0.alt = 0.960429220316;
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
    msg.setTimeStamp(0.980782901844);
    msg.setSource(11803U);
    msg.setSourceEntity(200U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(9U);
    msg.id.assign("ZKLOCYXGUIUGJHQLFMVZZIUW");
    msg.feature_type = 212U;
    msg.rgb_red = 129U;
    msg.rgb_green = 49U;
    msg.rgb_blue = 171U;

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
    msg.setTimeStamp(0.520309831658);
    msg.setSource(11094U);
    msg.setSourceEntity(220U);
    msg.setDestination(45173U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.639214715804;
    msg.lon = 0.900251685163;
    msg.alt = 0.846882908951;

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
    msg.setTimeStamp(0.861096078294);
    msg.setSource(7296U);
    msg.setSourceEntity(177U);
    msg.setDestination(58538U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.639958530907;
    msg.lon = 0.393829549609;
    msg.alt = 0.461375215463;

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
    msg.setTimeStamp(0.125153376951);
    msg.setSource(44624U);
    msg.setSourceEntity(97U);
    msg.setDestination(53874U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.0120912127672;
    msg.lon = 0.827252308217;
    msg.alt = 0.265955928834;

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
    msg.setTimeStamp(0.816636611123);
    msg.setSource(54188U);
    msg.setSourceEntity(44U);
    msg.setDestination(24927U);
    msg.setDestinationEntity(194U);
    msg.type = 188U;
    msg.id.assign("HHPHPQFQLASUCLQSOHYSGASFEFEXDSOUWVNJYZDQIKHSCEPGUYBNBUBVYJAKRXKCLXKPOBAXGUXDBNNRDQYNTF");
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("YLVBSNIIGAJXLIGMFDPNWOMGNSBWHRTZSFNXJIJEFBXGPKMMVTVGQKZVXNPMGPYOEQRBDOOGRDKPWCWTXITLSNMUDJQNPBROXPPXWJYUGLOZLTHZJAVCCUEXQLYFZIBTWHHEUJUWAFAVSAZMENMSKFVMSSULWKZYKBWITHOHQLBDYNKQ");
    tmp_msg_0.type = 65U;
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
    msg.setTimeStamp(0.182107990261);
    msg.setSource(8983U);
    msg.setSourceEntity(135U);
    msg.setDestination(11953U);
    msg.setDestinationEntity(136U);
    msg.type = 225U;
    msg.id.assign("OXECAJDKQLZWRMRPBBNOGPFWTJDBJWHKVZRYKJPFOQVCWQQSEFRJLWXLDOTAVRNQIHTKYCNIBLLHRNSXPRKCUZFIYEVUMQEFDHISRHGULUIHPSRMYQBMTPPFPFGVEBZYKKCZSF");
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("BAXSPSQSBDQBESDDAQIKPPCVOJQBDESNNEMERUVPYFCLLOGOMKIDQLQYKBANIANYHHUEXPFMZMHVNMMGGRXWEFWTIWJRDUZFVETRNSGYVUCMRKVZTVTSPCEPKNKHZGJCVOXATTZLUGGHIHNVSFABCWJDBKDXORJOEAXMALHRWUGQCURRKYIITEFJYFYMKBQNCWOSAOIXPTLBPJUTIPAYJUNWWTVGZGCDKFXRQZOHZQZHOF");
    tmp_msg_0.type = 55U;
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
    msg.setTimeStamp(0.926418080179);
    msg.setSource(42344U);
    msg.setSourceEntity(171U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(5U);
    msg.type = 153U;
    msg.id.assign("MWVONIFOLOBRNPFWBUNMZKYYSHCUVZOADKWNZHJGGICUCQUFKPLENLRXDGUZKNYJZDYXZDLBGASNEWMITWRCUZJPXXTOFDBHTQBCKQQQLFFVICNPBMHXQMTESGIDAPAFHPQKVVVYZTURZOTIMRRKMEEQLQXUDDVGQHEYGRPFHAOXABSRWSDYHKSJWSULJJZLBMSEKVTNIMVDTBCLPCTWOLYRAIOJAEXGVKXPJWHAPXMGECYUIYCWTFIJ");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 232U;
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
    msg.setTimeStamp(0.978593522196);
    msg.setSource(30129U);
    msg.setSourceEntity(246U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(184U);
    msg.localname.assign("NCIBXDJXNNNBQSURMZHDSPTBJMTWKOZVMIDDZOZQXCRZGZOIBOUURPJGKJIKFEFETUGHQDAEQHSAWANETSORMGWCFOSYKUTQYUDFBKNDPSUZPHLDFWBRUOBAYXGRMETNJXMVRKWCWGLYBOGZVVNVOLTQLHIXQABGAAUJVLQMFYHTHLPNUCLXVLVKPEKRFIMWZIHEWKPCIPFVZEGPRNHYJKDSXEJFCSWEJYSWXGLACTVLJRMCDIYQ");

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
    msg.setTimeStamp(0.946520656601);
    msg.setSource(26734U);
    msg.setSourceEntity(199U);
    msg.setDestination(26157U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("UVVSZQBJJWKYCVDRLBV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VXIGOPGNKRVLQZTSFLKFSBWPKTJVGTLTQJAWFYVJDGYEDKPIDSASNOCDVHOWIHNZUZIMJDBRDWZOAKCNIRUMJHZNTKYWULYMIMBSSRPCTHUUTESQWNENLEODBAUIHQPXEUQCFFWGUNA");
    tmp_msg_0.sys_type = 206U;
    tmp_msg_0.owner = 43398U;
    tmp_msg_0.lat = 0.483909266391;
    tmp_msg_0.lon = 0.944009892521;
    tmp_msg_0.height = 0.454912341605;
    tmp_msg_0.services.assign("USOSCCMRIMYPPTFYPYYWMCCWIEYDIMDNWUBOPDRAVOBYGNEPTSLTLIANUNRQYARHZFZSPMMTCDKCLUPPLAZGDLAAHYORUVIZHFIEZVNGTGHWTJDABATONSLRRBJIJOSSWVDQHWJGCKFSIYCXCEWQWJFXXGGQTNVBHYMBIKZPMCBKEGILRXHKZREUHJOAGVJZFPXUKQFJVHQKNLZJGVUVDWOREJDNSXLBNVQFDKQZOUUFTLEABWKXOKHXEQEXM");
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
    msg.setTimeStamp(0.436640899101);
    msg.setSource(31861U);
    msg.setSourceEntity(22U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(246U);
    msg.localname.assign("ZYRMITZJKBWCIPJZBCJIVICVCRIUFIONEDBFGLJXVRTPPKGYDTWYEHXVRKQJOPRYFNBMLUAAHWXXNEDONWWSQGEKDZBWAWVKVUNRPSPSHXBMWBIKSYMCVYONOVXMQRSTYCURNPMDOWEEZPDJNEAASKHQVWPTVFGFQDUQFBLAU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MYNCDEKHBFQVQTHTNHNGSCKMCCSFLAESLWDDJUKEULLVHOYJGMEIXPXWYGKIZUARHGTXFUUACPDXFOQDCIMRLPOHSEJNVUDYLIHQTQYAWFDIPZZGJUJOVXJNGSYZXCXTBGFEPMWOKEMLTORYPWRCHPZOEV");
    tmp_msg_0.sys_type = 149U;
    tmp_msg_0.owner = 46352U;
    tmp_msg_0.lat = 0.145061840595;
    tmp_msg_0.lon = 0.748692607558;
    tmp_msg_0.height = 0.602165516731;
    tmp_msg_0.services.assign("UAQVSFGDBKXFFRLPIUNMJHVKTDPXBOTMGRRMFGHPPKYQGCIRCZWSOLNEMPNHFBIBJWZALTGQHBUDCXANCJSEPCYDYVQXJXVYOQIDBDSNTVVZCUOZRHNHTLCGDKPEGSQCNOKWMSXEAXVTZAUMWWINTUJAFQJIOQRNXLWXESLAGDSVTHLOGORUAHZGKVYRABFOKDIKMZQMWERLIZHXBUYOKIDUFYFWBJLEYQEVSJHJNPTWPMZKEYBRFJUPCL");
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
    msg.setTimeStamp(0.589080727114);
    msg.setSource(25001U);
    msg.setSourceEntity(101U);
    msg.setDestination(60789U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("ZYNHRROVXY");
    msg.predicate.assign("WTXENXZUCJVXLXZQPLRBRJBNNLFVOOCAWLWMTWIRYEEQKMIDFGKJSMUALSTDEKPBFINGXYEFGFAHQJKTVTOHWRXQGPYUHRZZNZSNKVHELXCNMZYJCFSPPXMORJYGSNYRHOCUKHVGBJDKSMCJATQHUXDNYADMUJKIFDLIBPUMVYGULEIICBRTQGVQALCQEBDAQIKOFOAZSPSTROSMIBOYEXPWDDPL");
    msg.attributes.assign("HTQQGAVLDVNIOMMLBUIFDJQWGNKARDBILQRCATRQVPPTWJWRXMJHYKARQCFLEETJEPZIIOXOOVPYJUONBXMXLUGYXIKWFBYKHSZICHRLPRTMJZZOCENPOMADISHLDGXDBCVATDSFZXLHWCHHNDQBKFCEAOFYYYBVUMUPOKEELKSIERSWFZJZUQPNXBTLQGMNTKVNNUREWMNXGWWKOSZCPGF");

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
    msg.setTimeStamp(0.785154694746);
    msg.setSource(868U);
    msg.setSourceEntity(212U);
    msg.setDestination(16544U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("WSDTVPYONAEGHQYGYDFCDSEVAERIZMIVKTKIFUHEYZZKSYJAEMWLUOZLQVJQLTOTQXXLQKJMFIDNLNWAFQMAXOHBRHLPQTUIUSXDCCQMDJHXUCPBCMGRNERANYYRBWAGWONFLZPDBOVTGDDRFYKHSLIOWSLJVORMJHKUZNMBWPBVZCZBWAZQOGVCEUKTEJTJIKXMPHGKTVXELBFASYNYPJTSREOKAWRMUPXBDUVQZCXWHSIPF");
    msg.predicate.assign("REDGIOIPQMZKJOYYDLYTZWETKJXFSRPIHRHSWSPLXVANXHSXEQNELJAYWAQRTAXWXVBUUFGIVJPYPBDSQDFOOLWWPFEACFWXBZTDKKBDGVTNHGCOMTSXMQ");
    msg.attributes.assign("EIEFGEXQXTEXLROHWPVJGWAYLMMQLXTHBCLWZBHLUQIPDTDXJAODZOPSKJLMCPIZIUYQDHFARNOGCUIJBWFPMYFRXVTKTKVOJWNWXTNVPLNMNAEZFCUXFMOGEPIIRQVCNABMKHQCYAWARIBBYG");

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
    msg.setTimeStamp(0.189767511801);
    msg.setSource(11358U);
    msg.setSourceEntity(38U);
    msg.setDestination(22294U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("QFQQCKDKSXAHGGZYZXDITBTICKAEBLGKRIEOXSNYP");
    msg.predicate.assign("KNILAEKYIQRKXGUPTTHZENIOYENHTUWTCUNQVXDXAAOOHLHUKIPKC");
    msg.attributes.assign("YOPJHLYQMSXZUKEMIVVXPLSFGVLPXDDTBVIPQJHMUCQHPXKUVUGDONMWSCYXZITNDYKIYYEWEJKWDTMKSHIVWXQLOEDGRTAFSUXOTYEBZERUHRRJCVCJLQPFLNRHSLBBAFPNZERKCWWFYZGNFRNRCGXPTBDQZLQCAIAMBSKCJ");

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
    msg.setTimeStamp(0.321763793708);
    msg.setSource(55562U);
    msg.setSourceEntity(31U);
    msg.setDestination(16804U);
    msg.setDestinationEntity(1U);
    msg.command = 192U;
    msg.goal_id.assign("NVTCALGGZCMVNMLWIAVOXOQPXWLACNOYUHTGFWWCJICQRVVZRCFCJDBOBXKDBSETCIOTRPVQGCMUJJOMBIHUYMSPYSZFRWQSBODZENNGKSQPJYFHZAYLDAHZGRSCFJ");
    msg.goal_xml.assign("IFWBEEUARRCIKWZCGLLQDZWT");

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
    msg.setTimeStamp(0.721067485713);
    msg.setSource(11726U);
    msg.setSourceEntity(196U);
    msg.setDestination(51952U);
    msg.setDestinationEntity(166U);
    msg.command = 172U;
    msg.goal_id.assign("YWSATCGHUCLXFUZGONPRTFKISRHIHLNFNYTR");
    msg.goal_xml.assign("NNXZLHEMCOBVJZCGUONBYQETMOGTYHJQYGOAAOBDPZIGPLUMJJITQCITOCANDTAOSVLDNYEFGXBEGWRDKSSZQUDJJPLPGRVDRTZQUVHHKUBADXLWZPJLLWKJGASVXUCJEYSRJFHPVPIYVYESWPWAOQTNXFBRGOMCHQKFMTHKCFLINFQYBRTCHZPSKNTBDUMQWSSDUIVWXZPR");

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
    msg.setTimeStamp(0.160896272677);
    msg.setSource(20060U);
    msg.setSourceEntity(233U);
    msg.setDestination(59026U);
    msg.setDestinationEntity(126U);
    msg.command = 40U;
    msg.goal_id.assign("DZZZGMYTPLKQXNDWSLJVAGUKBSNFKSSLNSQZXUDHOWRUETRTBCMRMLUTPPLHYDAUDWHYHSLEQXKGTWINXAHF");
    msg.goal_xml.assign("MUCZYYJWPTAGMTPWXHKUBGFBNQRMBOGTWSFEVBJXTPAGAWYRPPMMQNRFXBDLLYSKKNBEDHYEOCHLVFQNKIAKDPQVSDUVEIDIDZHIMPZTUCTCRKUSHOWYJELXQAAZHBCRVMWCCHQIOLGJZWXVDSENOYRLMWJRZZYBFDM");

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
    msg.setTimeStamp(0.399532386704);
    msg.setSource(59270U);
    msg.setSourceEntity(69U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(102U);
    msg.op = 214U;
    msg.goal_id.assign("EIEFSCDXDJHUSOKVOJQUQGWQGGJBZBBCTQAQLQEAGPFLJNJDJAYKRCNJTOPKOFDVXYGRRFVEDXKXXQKTUYBFKHSLOEDFACCVTGPGNRQKLMCALLMWTVGWQUZMWTTFWRBWHDHASUVZBGVEEFXMICSHGLBPPEIUUYQONXYFSOUWHCCJNBTBSMHELIAZJWZWPMHYDLZRIHNZPUXAVBSXNOEWFYIIRRONPILMZDTNDZMYXKRRHISYA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NIUKUWSKVFCLENAQHVLJAWYVKKIQUYSYDMEEXJVBJGTPIVMUZXLWLPROKJHHRRVARNUAEDFQRXQLYCBOGSKTJVCAWOVPARUMSHRHPEFBZXWCZXUSDMGYEDIJSTEFBZNSIYJURMTGTMMLOJODQNQZNWDXABFCNKLDTHPNXHPQNHBADPIEWGSIEGMRAL");
    tmp_msg_0.predicate.assign("OAXPAGCDZBVHLOGRSKKWDTQFHCIIIIOOLASDBJEAZALMGVIZWZLUQJYPDIRDKAGEPCXPBCHATZCAEXWNVXRVTNLFWUNJGEVTMBRXSWJRHYQPWGLYOQNPJHMNBCKPTZPZMEMQFVQMZKIEDYXRXYVBDLSIGNUWKJSOJTJAWFOCSSFHLXKXUBSYQU");
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
    msg.setTimeStamp(0.118227994844);
    msg.setSource(43974U);
    msg.setSourceEntity(205U);
    msg.setDestination(59816U);
    msg.setDestinationEntity(117U);
    msg.op = 130U;
    msg.goal_id.assign("FLTRASSWIRWVTUNUDOPWJWGKRAEJHQPABRHTMVEJMLVDDPKOKISFSRZLXCGGTXIKVTOLEHGFSIWSINTCJXTQPZVGLHZPKHYEGYFZTZKLIBXHMMZAUDYDJLWONOCGZMJDKBNQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WTILDQWLZXXBTCIBGMDGYACZCLPHFOJSGPQNUAOGRHOFPQGIUOFYCFEKHAWQADPGBOVJUZHJFBDYNYZXTKYHULOTZIBFNVVCW");
    tmp_msg_0.predicate.assign("ZIQRJZNVCIWDJQNNFIAOIWOWHYEKJZFGBYVXJDNMYGVBKYPMDORLGEUXZJMXTGZTOAWQBTAAYUEVZAWVUMLAKYDQAKAEYJHHORBSRPZSEZXEYRPQHCUXGPKIFKRJOBMQUOJZTSVCZEHFNNLRLILUMWYMX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JLVABFEBEDZUHPPKXSLMGKCVNQVDNY");
    tmp_tmp_msg_0_0.attr_type = 196U;
    tmp_tmp_msg_0_0.min.assign("ZJJCUSLTHFVWYSVIHGCDSQMFUEKRVNQQFYRWFYZHUOHNANLVQDTGZ");
    tmp_tmp_msg_0_0.max.assign("DGCEREUUDQGUUOQTGTMNYGKNWCZAZALJCE");
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
    msg.setTimeStamp(0.88743737275);
    msg.setSource(13722U);
    msg.setSourceEntity(89U);
    msg.setDestination(1458U);
    msg.setDestinationEntity(42U);
    msg.op = 134U;
    msg.goal_id.assign("HWATREUDYWLMHGPXQGJJPGZKQZORUFSGAPWIEHBCIMMNDVXJDGBWSNYNDCVJAALJJCY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DXVXIKLNVRKRBDUMLCXVURPRVYYCVXZHGAYNPYSQSUZWMLBFKLMWSXZGNBQSYYBFDHULIMFZTDJQQYTTUWJIBJBNNBHAAHSTNZQAGWIHJTWKSOAURPTQIMYIEPWWCGXHEPBFGWMKFCRQOEVZPDMXLGJNFZHEICNQE");
    tmp_msg_0.predicate.assign("TMGPGTABHNDVHNOLZKGQDONGFTCCRQHLMJKFWBELYKVIWBAJMLVBJUS");
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
    msg.setTimeStamp(0.821412179218);
    msg.setSource(30856U);
    msg.setSourceEntity(253U);
    msg.setDestination(40152U);
    msg.setDestinationEntity(59U);
    msg.name.assign("HUEXROJAHGFDKNSYYBUXUTVHGPRVMZNAZLMZKSBOBTYAIHWSVMPJMMEODWIVTSQNDDGQLCYEWGOFMCJDZZNJIOLUPNBNQUWCNQWMPFGRHDNJCMYWQALDOCJJTMOI");
    msg.attr_type = 131U;
    msg.min.assign("AYSIYSTDFCGWVDGHZFDRWLXVINGJDYUMOQZLWPBTJJMXYQXPCESPEWCDBPRUVQVCNBK");
    msg.max.assign("UJZTXCWOZAOJXGJXSMIUHAYQGCKQAXDQKXAQMKIIYPPRBLUCIUTUJINCEZDZVWDBGJLWTZNVQSYTFXLPEZJRFSOZYUDXQXVSXKJXETTYEPWQJNSVGGNHCLRGOTOKPHWKMTMMVDKNFAHHKRQSWEBDSQLAWHVSYTIRSSWBEQOMAYGGFEF");

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
    msg.setTimeStamp(0.00332055906948);
    msg.setSource(16309U);
    msg.setSourceEntity(138U);
    msg.setDestination(26771U);
    msg.setDestinationEntity(0U);
    msg.name.assign("IMOPNEIHTAMBCMMYUJXBUCSNMRANYRNDTENUPKFIMKHYMWIRPSYZEOSRALECOGGCXUKTLGLWPZZAHIEWCRPVVWWFKEFPTXDIZFOTYWLXJVJOLLQFIAJMGBX");
    msg.attr_type = 34U;
    msg.min.assign("OBJDNVUMDRZJHTJWGUAQZBJNFKHOIYSENKXXYWDQXXYYZCFHBHMPKSLGLADBMUFUYPDJKQCTWGWBKLVRHAXFUNUNORMAXVJRRVGQCIIJKGENWCCPOSFVJRLOQSTTFPAKNSCQZMIXUIXWAYQVFWPIVJQCREIZSTBOOTTPVCVPECMDUQMDIHEUXESGDZAQBSUWBDXFPHPTMKW");
    msg.max.assign("ABUCXNMFGJCGLM");

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
    msg.setTimeStamp(0.442083743454);
    msg.setSource(18076U);
    msg.setSourceEntity(252U);
    msg.setDestination(60343U);
    msg.setDestinationEntity(85U);
    msg.name.assign("GLKBULKYVYYSZMVLNAAGAVDDGX");
    msg.attr_type = 135U;
    msg.min.assign("TSZPFWQGZFSSFNMSJSCXEHGDOFTMHEWCD");
    msg.max.assign("WSCEMWQKSNOOPHVYURXXTMEVBSRLZXFILOFAEYUTIZHPQYWFKYGTVNNKQSBWFSPNVMWDAWESXCODAJGDRBEVGDRKEQBCYCVPJIJNAQXUZACEWOGCKBRWSVOIFJSTKNLDAJMVBQHUKAGZOQIZYNIPWAZJYDASALCOGNBFPRPCHUVDFDXJLPUMEEHXSGTBBZLZHGFVNMYIUPXKIJLMCBMDIMXFZTRQEODUYHFLUW");

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
    msg.setTimeStamp(0.593143445901);
    msg.setSource(5536U);
    msg.setSourceEntity(21U);
    msg.setDestination(12039U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("HELCUFJLNGSQIAFAPMVGWDTWSYZXNBKUNTDZENHRKUCZAEMDVPYTQXDJLWIKZPEGOSKPNOUKMDLVTCYQYTUVKQDBZJFRBTONATBIUOXTYBFLLQWCZXFAXBXBOMWDIUZMDESNVRCVHELZHELWTBIIWHQMJNAAOZGCWCOG");
    msg.predicate.assign("LHBQAVZLFWLTVTRADBYVKCVEBZICMELOZOUGHDERNIDXYBOLYMFSYDNORSADAINQAAZARQKUZOSDWICKQGGXXFHRJWPRHNVGCXUTTZXCYETTXPTCFQFVJRNTAZUKXOPITJHWIWUKBWSGPDHWQMPWGFUYMJJPJNXMOGCHJBLCJLPLRIOOBWFXVEKQUKCEUSXYUUFIGHQAIYRKPSNVNLDPNLSYRFJEJQPTYSASHZFEEOCGVK");

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
    msg.setTimeStamp(0.855661557962);
    msg.setSource(60472U);
    msg.setSourceEntity(166U);
    msg.setDestination(16749U);
    msg.setDestinationEntity(61U);
    msg.timeline.assign("GURRFJZEEWVPHJEKHENTXHKMXMOJYWWDXJNBIROYMWTJTCZLAPCOMTAEKBYDIFTGRUJCFXZRPTDUIMASYJZLEIPCYNKCYDRIGDQCMFHUPYGLNUFNTBDVNDPLIYSXCFJAJUSRQOVAS");
    msg.predicate.assign("YECBKWZLVAKAXTLEPUPWNPXKCBKY");

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
    msg.setTimeStamp(0.78094346247);
    msg.setSource(44174U);
    msg.setSourceEntity(204U);
    msg.setDestination(58067U);
    msg.setDestinationEntity(228U);
    msg.timeline.assign("IDMXKVHNYUGSSSJJFEIFIKIFC");
    msg.predicate.assign("BRPMIOEXHRNWOHESWDRAHRYZRSJKINCBOQGOPAFIECZXHNUSULBVHVOQORMWABMBWDEPGBZNJUHISSLUPKJNIDECAIJAEYQUGKBPAHKLNQGTPGZVLHUKVZKHFTMXUCZJNPY");

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
    msg.setTimeStamp(0.565744450502);
    msg.setSource(18645U);
    msg.setSourceEntity(93U);
    msg.setDestination(6696U);
    msg.setDestinationEntity(93U);
    msg.reactor.assign("BMXSGHWUIBTGVLUMUVAMSSKLDQZOHZVGUUSDKCTHJFWZZMIDTUOMSTVZJAXCYYRHJDPBSAVYMCEBWBQCDRSOKADRFLYPPIBDJZQFCJLEUUXQXINCTOKWZWFPTLDKGQEXSKORMJNTWEYDEIRIPNPWHGJBWJFKNOLIKVGQSNFRULFDMPTAGYULYABGE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MAKPQQIUWCOITYESBVTKMTFPFYZPRNAIAMXNGJNSYMYZGGYGSORIXSWMLRXVGREHVRPUVQFVHAGZIOJUYNQHJCUHFBEQYHXKLFXLTUSOXDCFLSQEIDFEDEXTJJBAHLKQMBHPKCUZUHDRGBONUZAUCGKLPQTNVCEPEAJSQGKLZMIKDNTZV");
    tmp_msg_0.predicate.assign("LFAWSISHTGJPAEBEIXOASLZXKHPQMMKFISTKUCUHLEDVPTYOJFWGENOCGADPJUWJAXPMBANHSYCHIMKQGFVBLJLRVQMRXNYUKMRFQFNROITLFEDBTWPPTUFZWGXNBKQTVMENO");
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
    msg.setTimeStamp(0.607497766352);
    msg.setSource(25815U);
    msg.setSourceEntity(12U);
    msg.setDestination(40972U);
    msg.setDestinationEntity(127U);
    msg.reactor.assign("IWDQRANHPLALNODSKDHGJJNETFSVOVAQRKIGRCYDBMJCUCADEBWUEJXBPRZLGBQOSGEPNULQJKTWEKNZEHDWMZIQFXGHJOVVCBTHLOAOLYXBUOFVVTXTSVGJCSRWFKNKJIUTLQAPFNQYMWGMDKZKMPFBCOXZBWHQTWGDRWORRSDGUBXTLFCCUYETMQHMMIXGHJIUSYMERVPEPAUPNJAXSHVOKZYNYWLFZPHCAIFRPY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RJBWHZZBAEIWGHQARJJOOTVUDPKZQCEFVNGKHVFOSQUUNFXFDPTZNSJUPZQIWHHSEZEPYURHJGQGM");
    tmp_msg_0.predicate.assign("PCMFVXKAMOAYMQSLXKTZRMBSIEIFSOADBGXWTQICWTLNALZMEGSRICKFCKSMHAWKEQLQYDNHGMGGVUNJPSLCFTAVV");
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
    msg.setTimeStamp(0.949867456831);
    msg.setSource(22296U);
    msg.setSourceEntity(78U);
    msg.setDestination(61825U);
    msg.setDestinationEntity(131U);
    msg.reactor.assign("VIFCOEPOSMLXVVFZJNGBKVTQZXMKGXOONDTHGIIKBMCPATBSEEPYYSUHBDSUVCPNHMYXWWPDZEAKQEWHXSRTRBQYRHBA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FQHSKJHYWTDSIOVPVRWEQDRKKQBHTPOQHMXEUCEYJPTGNJOKIRAZJZXUCMNGIPJBYALFYKOZMPVBTSXUGWUFXJTYPOEUMCIIKEABXTHBWGANAUKYMTVXQHEAQUEJOGNQSCMFIVIXLBTSVDOWDGLSOWNRCNRNUFMFEQYDCNWZLLNIZAHTDMTFRVCRALMAWJZKFOLVYHQUESXVHVRBOGBMXCRJDBJLEUKDGCZZCBAIPPDKZX");
    tmp_msg_0.predicate.assign("PHFJSNBJHIURPKGQVQPNDNEICXMTGPSKSDZMHUXKIFKIGOACYAMXDOEZCTJXTWOWDOGDQLCJJVJGLUVHXERVCBFKVEGDNRCCFLPSDPIWMBWNSYDXUHXRYVOTREPWYSKLUZBQLJFAZ");
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
    msg.setTimeStamp(0.564617567504);
    msg.setSource(38511U);
    msg.setSourceEntity(37U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(154U);
    msg.topic.assign("ICYYPOUFVVTKCVDNYQTHNXKTSENVGHSPRAXYSZPGCJFHANMURUXWZYBIYSUAOYIFHXEPXHQMBSFBD");
    msg.data.assign("WCGMPHCZCQSKKMZVFSRQJKVKEWUPADDZUVVDDRUQUYLJOFOTTIUIAYNFWMXBAAFSGEQUZJKXMYQ");

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
    msg.setTimeStamp(0.151200465043);
    msg.setSource(12983U);
    msg.setSourceEntity(182U);
    msg.setDestination(23907U);
    msg.setDestinationEntity(70U);
    msg.topic.assign("URUQIHDJLXFWERZMCGYAIYZDLJJAGLDPEYOFZPCMQKKIULWUWBVXCTRSQIYSHMFKGZZWQTIHUAQLNLQJQJRRATNPSNXJUEAVRESYSZFBPDJIJACHBIGOWQVANBPNGHJYMNHSYCGPFAAHDTVRWBDFCKMNPM");
    msg.data.assign("GKKXTZZOLRSLFFDQWEFAYBHXERYQZWMRZWCOIPYBMQFUVGCGMRJJHTPNJFDECUGDXJNLRVJNTZUKNPLFSOOCIEKSUOTSWTBJGZTQHXIPRXTGKXBYESDZOMXNHMAHUCKDDPUHUEXBWPZMUVMUBKYIDCPCWYFWKQSYRBVWWVIQOEAENVLAKVAAOPQNFMDISWTIHMIGQHIBALCGFRFNYQJMXZLVJSJKNVYCQO");

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
    msg.setTimeStamp(0.659905482367);
    msg.setSource(58330U);
    msg.setSourceEntity(62U);
    msg.setDestination(50540U);
    msg.setDestinationEntity(53U);
    msg.topic.assign("VTAHXKQCNLGRBHKJYZUVYHSDKFULHSELZEINCHAQTFSIHKDCUTWGPVMVOSDIVCTGAFVUVXPKJFPQATSBEHDTUGFANOGBOAT");
    msg.data.assign("JUPJZQMTDLHEWEKBRRPMVWZKRLMNLHKXJVEKWUNASYYLOIJBNDCJDDBTWXYIJZUBXFRWGCQXGVHXAOPFHZEGZHXTBJVQUZYXALCHYPJPZWCDJMDKMSFLJEOGQCASRATDIMPBVHSYWHSNTNZIIOSRAWTFETFGNMOGVIWBUSYEQUDOHSNUTAYQVHMFOGLZBXAYXIQULZGCARERIUQKKYVMTCQF");

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
    msg.setTimeStamp(0.926218026559);
    msg.setSource(55181U);
    msg.setSourceEntity(38U);
    msg.setDestination(13321U);
    msg.setDestinationEntity(29U);
    msg.frameid = 249U;
    const char tmp_msg_0[] = {48, 59, -93, -112, 106, -4, 91, 98, -59, -22, -127, 58, -59, 46, 29, -124, -30, -90, -41, 34, -69, -57, 61, -97, 48, 29, 98, 53, 54, 124, -121, 25, 29, -84, 119, 124, -16, -42, 112, -121, -107, 42, -10, -47, -117, 117, 66, 31, -55, 100, -51, -92, 58, 113, -112, 76, -14, -47, -40, -113, -58, 125, -110, -99, 56, -41, -66, 98, -37, -2, -11, 111, -73, -49, 38, 96, 102, 78, 42, 37, 44, -12, -105, -67, 82, 94, -99, -44, -65, 125, 15, -39, 75, -92, 9, -38, -58, -61, -96, 94, -54, -24, 55, 46, 64, 103, -25, -41, 111, 117, -12, 43, 91, 1, 42, -24, 49, 42, -60, 23, -61, -43, -121, 6, -31, -100, 91, -92, 88, -87, -24, -86, -109, 27, 50, -34, 71, -30, -71, 123, -28, 100, 12, 25, -92, 14, -62, -89, -44};
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
    msg.setTimeStamp(0.270480227075);
    msg.setSource(47922U);
    msg.setSourceEntity(188U);
    msg.setDestination(55219U);
    msg.setDestinationEntity(99U);
    msg.frameid = 233U;
    const char tmp_msg_0[] = {122, 75, -86, -103, -50, -48, 113, 48, -56, -96, 70, 36, 73, -108, -36, -49, 39, -63, 108, -1, -19, -125, -82, -89, -82, 40, -58, -47, 24, -77, 86, -35, 48, 88, 66, -25, -127, 76, -104, 13, 108, -46, 37, 121, 40, 86, -5, 32, 19, 102, -39, -124, 101, 125, 16, -63, -13, -70, -44, -54, 122, 125, 107, 100, -65, 109, 118, -45, -114, -43, -67, -51, 47, -104, -36, 7, 47, 32, -17, -112, 2, -67, -51, -79, -117, -83, 90, 59, -23, 63, -41, 56, -3, 63, -30, 118, -87, 101, -3, 58, -24, 55, 63, -53, 101, -4, 81, -40, 3, 55, -101, -39, 20, -85, 44, 52, -82, -112, -20, 2, 75, 54, -91, -88, -103, -8, 101, 38, -124, -112, -128, -4, 96, -92, 54, -64, 97, 100, -29, -101, -31, -7, -2, -70, -98, 86, -81, 101, 25, 122, 32, 74, -38, 122, 61, 61, 94, -76, -64, 87, 124, 32, 36, 22, 106, -43, -103, 15, -20, -62, -118, 25, 1, 13, 34, -95, -91, -39, -65, -73, 63, -31, 82, -61, -50, -65, -90, 99, -70, 28, 4, -63, -110, 8, 37, -126, -128, 63, -22, 78, -68, 119, 126, -118, -128, -96, 50, 16, 64, 93, 27, 51, -14, 69, -47, 8};
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
    msg.setTimeStamp(0.598968264648);
    msg.setSource(45836U);
    msg.setSourceEntity(254U);
    msg.setDestination(42428U);
    msg.setDestinationEntity(228U);
    msg.frameid = 237U;
    const char tmp_msg_0[] = {54, 56, 76, 73, 89, 108, -18, -64, 54, 7, -27, -55, -86, -96, -96, 112, 83, 113, 107, -76, -84, 86, -44, -96, 28, 116, -80, 79, -41, 40, 26, 55, -97, 4, 68, 115, 98, 103, 45, 65, -5, -38, 41, -16, -46, -25, -87, 0, -84, -19, 75, 78, -59, 98, 122, -119, 13, -24, -85, -80, 3, 122, 86, -94, 74, -12};
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
    msg.setTimeStamp(0.817852934099);
    msg.setSource(23079U);
    msg.setSourceEntity(79U);
    msg.setDestination(29919U);
    msg.setDestinationEntity(174U);
    msg.fps = 249U;
    msg.quality = 238U;
    msg.reps = 3U;
    msg.tsize = 207U;

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
    msg.setTimeStamp(0.466361701324);
    msg.setSource(48794U);
    msg.setSourceEntity(169U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(25U);
    msg.fps = 158U;
    msg.quality = 226U;
    msg.reps = 238U;
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
    msg.setTimeStamp(0.565857775915);
    msg.setSource(26856U);
    msg.setSourceEntity(110U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(210U);
    msg.fps = 102U;
    msg.quality = 102U;
    msg.reps = 164U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.633705393924);
    msg.setSource(25012U);
    msg.setSourceEntity(147U);
    msg.setDestination(45282U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.229240054976;
    msg.lon = 0.958069952278;
    msg.depth = 126U;
    msg.speed = 0.751884202487;
    msg.psi = 0.762696270648;

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
    msg.setTimeStamp(0.114050046208);
    msg.setSource(6462U);
    msg.setSourceEntity(8U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.260337424853;
    msg.lon = 0.554732671129;
    msg.depth = 78U;
    msg.speed = 0.0775194023286;
    msg.psi = 0.16208114669;

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
    msg.setTimeStamp(0.382078910219);
    msg.setSource(53463U);
    msg.setSourceEntity(52U);
    msg.setDestination(22597U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.766618422495;
    msg.lon = 0.793298940841;
    msg.depth = 63U;
    msg.speed = 0.969625603433;
    msg.psi = 0.555433984001;

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
    msg.setTimeStamp(0.353816358167);
    msg.setSource(56699U);
    msg.setSourceEntity(102U);
    msg.setDestination(32301U);
    msg.setDestinationEntity(187U);
    msg.label.assign("YPDEFAVGPGDQHSTPNQDNEIXWSWERKJCBLRKMFRVQSIJYDBGSTKSXELTKZWUXZUIONCDQVICWSUIOTIBCMEGMKHZAOJEKTAOEUZCVTYC");
    msg.lat = 0.727506279673;
    msg.lon = 0.368745316448;
    msg.z = 0.860816838293;
    msg.z_units = 200U;
    msg.cog = 0.859314787283;
    msg.sog = 0.645014168878;

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
    msg.setTimeStamp(0.813595645593);
    msg.setSource(62412U);
    msg.setSourceEntity(41U);
    msg.setDestination(10394U);
    msg.setDestinationEntity(247U);
    msg.label.assign("LHAHFPMJOFQCSAHZCWTHYOIYFSVVHRXAXBXIAMNGGBMZYRVSLCVHVFUMRCEYKMDZUKDJAUJJJXJMTWGDEWPFJXHUFKBTWWQSIFRLZXQLIGDPUNCEANWNDRLX");
    msg.lat = 0.25617696752;
    msg.lon = 0.704760694487;
    msg.z = 0.8907099903;
    msg.z_units = 1U;
    msg.cog = 0.38463253601;
    msg.sog = 0.0848515298179;

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
    msg.setTimeStamp(0.433809743532);
    msg.setSource(37512U);
    msg.setSourceEntity(51U);
    msg.setDestination(43783U);
    msg.setDestinationEntity(191U);
    msg.label.assign("OIYRZJGAEDDNPXBDVGZSHHAIKTUQYFWKMDJFEATXQGXRHSQLWRNOTFUTGFQZHTYYEPKEWSMULWFGUPPTXEBMYNIRNKWAHOHLTGXZKDJBCZPJVKENSYCNAWOKWPXSCVBOCLRCRYNXDYICRGWERJMSKQPQPOACX");
    msg.lat = 0.740219175522;
    msg.lon = 0.0216918448507;
    msg.z = 0.743187547904;
    msg.z_units = 224U;
    msg.cog = 0.174978590663;
    msg.sog = 0.620643860059;

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
    msg.setTimeStamp(0.173363886065);
    msg.setSource(19328U);
    msg.setSourceEntity(7U);
    msg.setDestination(42309U);
    msg.setDestinationEntity(176U);
    msg.name.assign("EJLETVBCVODZECSCYJUGAATO");
    msg.value.assign("YCHUFZOUVXYXFCVZJRXSAQOYNPPNNFMLUMLTZCSXDNQMQGOBJTHYOWNPBBJKJNHJXNEDIUTAZWUTEBYOZYXWVHDWXRFWOTGKGJXEVFALQVSIUGAKMIRIIMDCGNWYCCBGBSKSKOCKCWVDUEPMPPUKIZVYMNPFKW");

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
    msg.setTimeStamp(0.38436309604);
    msg.setSource(53428U);
    msg.setSourceEntity(156U);
    msg.setDestination(43393U);
    msg.setDestinationEntity(2U);
    msg.name.assign("DHHJUKFZMOPZHKDNFITKWXGQUYZPYFYSJAMMBWQYFDVXRDORWUDVOWXMZGYQLLBHGATOJXYRKIXANJEHUBISTUUWGMWTEQEVXXPSOYKBUADKBLNMBWHPTLAOFESWLXIFEXADVCJAXICDJ");
    msg.value.assign("YVBXQGJOXOWKWUJBMGDLKAQNTFHWJLLLZPZQIOTZJFEDYDZSNYRNDJLGTPBVFVKUHSYPJTJOHNNMECAMXVPOORIJHXHBFKMCMFYFTSHZFUIFYEDKLLHMUUT");

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
    msg.setTimeStamp(0.652025828046);
    msg.setSource(31575U);
    msg.setSourceEntity(52U);
    msg.setDestination(57416U);
    msg.setDestinationEntity(239U);
    msg.name.assign("HJLYGZDZOLLAGOVBIJZRUMYDKOBXNVRRAUCXICHSSEAKZXISBURWOFKLYVFPBHHSMHNSDQDUEIQSTZEHHMPJIPSHEFXJDQFMIMYICQKLYXCTJPYJWYXTWKRVEGMPEZKJFIWEUUQBCJU");
    msg.value.assign("KUYCWNQVFOVCEKWHIYZPQQEXMVKZWRGBGRJEVVVLTUQNARFAXDCWFTZFJITYZOSKLUXJ");

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
    msg.setTimeStamp(0.345579500577);
    msg.setSource(64895U);
    msg.setSourceEntity(109U);
    msg.setDestination(23320U);
    msg.setDestinationEntity(25U);
    msg.name.assign("PPUAADGIGBWLLHMGSKQZYFEDTXXKITSOJNDCXNYXONVYMQCSJIULAAUMGGARLKQTYVZCCBHLPJFRHQMGOOTHYWYKGMUAJQECRFRWLFWNUMNNBQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RJFMWYFEYMCPAPKRYJTIE");
    tmp_msg_0.value.assign("ERFLBGVPVWBQPHLLNQYGTHCDHLRSJUBHDXTZCKMKAJZFEAFOWHXSCYMIUOVWQHVOCIKMDADEUYJZVQWKJESZARMBZPRTEASXKWRJGLPMFOSEAGLLXSSCDUPW");
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
    msg.setTimeStamp(0.545170165128);
    msg.setSource(40992U);
    msg.setSourceEntity(125U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(49U);
    msg.name.assign("KANXRVFMGFETMBKFOATEXACOGXSEHHBJZCNPRRDDDLEMRVNYSBWPHKXBQYREFXTSNAWUVGNURWEGEDIOGDVKUIUCUQCIZKYWWTIZQHQJEDONXLKGLFZZAHYTOVGSVBSEDIGBRKMKUZZBIPAXTMCFSRDMLPGFHVSDPCBHKLUFRVYOIMJDPTNQUZPCXQQWWJLYNONW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YNIECUXLDVLVFTXGWILZCVIRBFSJKXIYFXPCWMZMDVGAKFSBFZSGOYVYTFCXXNMRMKQWBQBUDXDQPVVHUWPCECOCRWLKPHZEUSTDVHOBFRQBPMIUQANKUPJIAHGWOELUYQCDHQLCRDZGRBRQQEOSALPTKZAWKTNCYMYJHADTBVGBJSLTIWNFJRGNIQUENMOSSGNTXMGZJYAHOEPYJWGWSFKAVPIJSHEXUTHJTR");
    tmp_msg_0.value.assign("WHUUEGDYRZACQVXCVDBASWGEOOHUNAGTWNQXKHKTJTYSOZVVUNSRRPELIZJBJJFSIWFMIRHWCRLJLPNZOLYDLSMQIGVXMAQMMXCI");
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
    msg.setTimeStamp(0.172447705705);
    msg.setSource(17898U);
    msg.setSourceEntity(146U);
    msg.setDestination(38935U);
    msg.setDestinationEntity(214U);
    msg.name.assign("LYRMACPNKJQTELFDOIBNQJLDSSWAIYHIFIWNODHXXKQKSVLBCHSSARVKEUHFGHPPBCINKCYYDJHCWTTUDXAOIQEEPERGZBPNYBW");

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
    msg.setTimeStamp(0.116651375288);
    msg.setSource(38030U);
    msg.setSourceEntity(153U);
    msg.setDestination(22685U);
    msg.setDestinationEntity(139U);
    msg.name.assign("SUZWKDALIGYWRSDEMSRHTATHSPHGGIQZHGNYCWDNJTTEDCPQHXVSQMFIWJXKKNAES");
    msg.visibility.assign("QOKKSXIWQYXDVORRXHEKNQJETCZGPOSUHIQJUIKHIMXXIBOJSXTNQVIEBORGEOGYCIGRVESMBV");
    msg.scope.assign("FSJRXNPABULUWUKDZKJDUNHQHYYGPSLHGTQAKPXGPZNOELIHBYVQXXLXZBGPKVMOETERERJLSYRCSDPIUQJNGOKESQJUTVHVICMFZVSNTJWCFAMCYOIDGGJOEXDMM");

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
    msg.setTimeStamp(0.00791987397475);
    msg.setSource(22866U);
    msg.setSourceEntity(212U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(176U);
    msg.name.assign("LVGQAFJYKZEGKOWADWYWNFFSYRHHYJCVXBKCTSBCHSJSPELLUCLURZTLNXUBAHSEJUFMKGPQWSXTHHOOL");
    msg.visibility.assign("XOJEINLDWVGDWDKSHUKCYFLMLXKAANYFIOVAFGVLWNZUCPVJBOYLAAHQBIYYVRATKPXPWXZGWRCICSGJUBZHKDAHNFBNTZ");
    msg.scope.assign("SKPDXALYUXZFYYZQLLVDLETIGIDVPPPOVKVHDZNLEZSEUGZZBOOVRSMLSYVHQPUJFFQBQMXHWJSKOKWIQABUENJPQMEGXIOHBLPTENJWTALEIYTBMIGQXQOFIXJVPVMOURWFNQOLTSRVWVAOJ");

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
    msg.setTimeStamp(0.298771600976);
    msg.setSource(16933U);
    msg.setSourceEntity(152U);
    msg.setDestination(7410U);
    msg.setDestinationEntity(158U);
    msg.name.assign("OLPTMHUENOATVZWVXIEUAKYVANDDMQTIKDUDMHSQCRCRHJQENCAJASWI");
    msg.visibility.assign("BRHUMZGVGODKCTXMLGPPOMQU");
    msg.scope.assign("PABBIVNUNWLAOYCMWYSJPFRBLDLWIRXYEMBIQCKFNVMNHVMGPHCUITIZRSXNBZIFCWHGRNMYDOUVBVKPXRUTXJKQEITLJIJSCLTZCXOWDWJMENRJWGSOHKWOSJVAACLNTKVQAOCQAXDQLQPVTMGXQZEEFHJEHGCBZLEYLYMUJQIBEDSUEVTBDQOYNMHDDKTPSZBAYXUGDYQKGOFHFOXRAVFRUAXGPOLNAUPSKPZWEPGWZRGZFZKSYFH");

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
    msg.setTimeStamp(0.77345693605);
    msg.setSource(14164U);
    msg.setSourceEntity(158U);
    msg.setDestination(16042U);
    msg.setDestinationEntity(220U);
    msg.name.assign("MWNGAYXBWLUXBAGGBWRCNTMYDUJJLHXNXRWCZCYZYZZPFVEITIOXZVWKAFTKNOSFMYYFQBMXQSLVRZFTWEPKKESBKODRQFNHHPQPJVTDGJQIUGTLIKPWMZUIRSDTPXFNZDWLHZVSICXLBKSWCJJHOOMVCBZAGIEKLLEIBXDOEQRQAVNVQMHGYNBURUCOADFATHAJG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XWGEZXOFRIACXNVLQWYDAKOKNBRPEOSIWIQCCTCRLETYQHWQTCDLGTJMYHMRZECPSBSIQBNYPGYJPOQZCMBKSZNLBROGKXLAHPWGRSQUZAKQYRFTRGDNDDESVOPKEXQSUMOVYZJFSJOLUZLDHFBOJHJBNHUHIUXFUEAMFAVXIRGMKMZGDDTFWFIICAZPWLPXMLJNHGVTGBDJKNEHVXXFVKQ");
    tmp_msg_0.value.assign("XGMRDCRUORCEQGRQWKJBBXHRMPFYIGOPTUSSPSKUEYIEGJBZGXJPNDSCFOXPGBIFXQRHFOOQILYULVAQPISFADTAMIQONZVISGLTZZUNAWLPUNJSWHCEXRZBNSIVEIVEMFOHJEHAJTOQZNZIDUULGFQCDRMWCMKLKVVOPHBNOJSQYYXL");
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
    msg.setTimeStamp(0.451241864587);
    msg.setSource(36822U);
    msg.setSourceEntity(177U);
    msg.setDestination(58632U);
    msg.setDestinationEntity(16U);
    msg.name.assign("RMUZRRRCXMHAQOHDTLTJMUOJPYKYXEFPBNHYCFSAQYHDWBLWAHQNIALUJRANDDORQIOFRVRCYDYKUGJWNDOSDPZLXEMBVNFUSQYGJABGEXUHTLKZYPETWKRIQS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LPTMIBVWVDYPVHOUSWLBKPQFBNZHRFBDQXDGTDWHAGSFQXXBINFKKGBPPZCDFUHIQMNRHTKVOECANBPGFGFGXREJIPYXQEFKJPQOSRDQTZLWKDYHQ");
    tmp_msg_0.value.assign("IRFCILPADFBVMNPCYRWYFNTHVBKOZJYGOIVDEISSWUICTPDUNDUDAQPUVXFASOSCGGLHRKJCPBDZEUSKMYRFLEHPQNMDPHQLJWEIZLZWXUDXXRUGXNIMYYZZCWANQFHVFCQTOTYVGRWQOBWBIKICZQZDZJMTTCYJLVEJ");
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
    msg.setTimeStamp(0.760714632216);
    msg.setSource(36304U);
    msg.setSourceEntity(114U);
    msg.setDestination(6227U);
    msg.setDestinationEntity(253U);
    msg.name.assign("RZPQUKSDCKGKAPUVTSJNYBDVOXECHJCCKYUZXODIDVLCNKTYJTDRWQQIRERGFRYBUBUPCAMGAOLWUCNNMQZPELLPOWTPBAZZSXMDPMHQMLETGBFFZKOWAKHIBEUFOBHGGFVUKVQFXDITJPAWCAFQVSHMMYWWLZASYI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VECJUGKGDNYRDKWPHPPJTWZHQRNYJTYYNZXFLHYACWTCLQKCFSBIOZFGONPILXACGGIMEBFMACJWKZZHQBSFGHWBBZXSMGQSTRYGHMVTUMZWKPVLVMULXWEEIAVDXFASDOTRYCOUXLCUENXHKPWTNZRMVUOQOTFHHJTOVDGIK");
    tmp_msg_0.value.assign("USYQPRWFFZNTHFTNUVPUGGMG");
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
    msg.setTimeStamp(0.199856065655);
    msg.setSource(28496U);
    msg.setSourceEntity(30U);
    msg.setDestination(45283U);
    msg.setDestinationEntity(81U);
    msg.name.assign("IOZBIWJVPJIVGUJGBYNCDWGUJMCWTJTJRGMPLXLYPSYLLWTZWRFPZTAMDKDRNCYDEKZWPQQICBFEBEFOYFFSKQBMJVNHXRAVSKAPJZKOGILDZXRQMNHUAKIINXEGZAZHYQZKHNMXSVOCLQMFNVUERPMCBYOOSLEDCHBFRCUTOCWFBXEJYZWAXGNPOLXCTTILSAMNHWDQQYTRFDNHRGLBPUDJGGHHTOUPEKKTDUMSS");

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
    msg.setTimeStamp(0.269457499473);
    msg.setSource(7811U);
    msg.setSourceEntity(49U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(130U);
    msg.name.assign("MIGQAVOLKSUWJQHCRYSQTOMURWRTRAYIGDGIJKNNFLNRCYHOSSXZBAXMAGG");

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
    msg.setTimeStamp(0.823672440059);
    msg.setSource(53451U);
    msg.setSourceEntity(244U);
    msg.setDestination(5738U);
    msg.setDestinationEntity(160U);
    msg.name.assign("BDCKEHQFGLSPMAOJALBDBBETWFEYYTHNQWHSUCUVCCVQTVWYYGTJLNCZPJSEPPZVYABCRGCKKICLEDPGVUPHXMWUXIAVKOKOOQZNYHIBRWPZMQZVHRUYAFZDLNDAFRIJNXMSQQXDQSHGJXGABEWDFIIUEOB");

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
    msg.setTimeStamp(0.681654106677);
    msg.setSource(53828U);
    msg.setSourceEntity(176U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(26U);
    msg.timeout = 2377674194U;

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
    msg.setTimeStamp(0.32443047047);
    msg.setSource(37217U);
    msg.setSourceEntity(153U);
    msg.setDestination(51095U);
    msg.setDestinationEntity(211U);
    msg.timeout = 3625178602U;

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
    msg.setTimeStamp(0.952938988808);
    msg.setSource(1539U);
    msg.setSourceEntity(16U);
    msg.setDestination(16913U);
    msg.setDestinationEntity(201U);
    msg.timeout = 4234089139U;

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
    msg.setTimeStamp(0.516979134625);
    msg.setSource(430U);
    msg.setSourceEntity(58U);
    msg.setDestination(21715U);
    msg.setDestinationEntity(147U);
    msg.sessid = 2253271798U;

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
    msg.setTimeStamp(0.950876213902);
    msg.setSource(1030U);
    msg.setSourceEntity(165U);
    msg.setDestination(57137U);
    msg.setDestinationEntity(109U);
    msg.sessid = 352344741U;

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
    msg.setTimeStamp(0.344197998403);
    msg.setSource(29146U);
    msg.setSourceEntity(153U);
    msg.setDestination(22814U);
    msg.setDestinationEntity(222U);
    msg.sessid = 3104696076U;

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
    msg.setTimeStamp(0.597765280998);
    msg.setSource(18987U);
    msg.setSourceEntity(148U);
    msg.setDestination(62419U);
    msg.setDestinationEntity(113U);
    msg.sessid = 90819669U;
    msg.messages.assign("FGICOSTJYNFTUNJAQSYBDXMUXBJDDJGILBDHQRJUEAYMFSXKGOHPOSYLLPAHVETBCKJZXBHWFGESWCIEPBUAVYNWWAHMUIAMPCRJVFILSPUHAHMOCAKSTGDBQLVJFYORHMWTXCFYFUKVPGRZY");

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
    msg.setTimeStamp(0.831008390257);
    msg.setSource(59580U);
    msg.setSourceEntity(232U);
    msg.setDestination(5654U);
    msg.setDestinationEntity(140U);
    msg.sessid = 3527477571U;
    msg.messages.assign("MWIPMMFRRKFQOAMVCTQELHWEBPKFXGKTZVODKWJYSXKKTZTQOAHCDTZVCEOVGODGIQMJMDJTLBYGKOELCGCVWWEBUUBANYYLWSRAISRSSPCAOPDXAXPLUIJDCDMXIPYXWGUZLMNVLBPUNFUNF");

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
    msg.setTimeStamp(0.114466901435);
    msg.setSource(4093U);
    msg.setSourceEntity(37U);
    msg.setDestination(64764U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3858396142U;
    msg.messages.assign("PNLRHCAYGAASQVNLRQVCKUKIWFBQHMRBDZQBZTJDMODUXXMPMGISPATTZAGXGEMBUNYFOAI");

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
    msg.setTimeStamp(0.0282070284446);
    msg.setSource(16714U);
    msg.setSourceEntity(119U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(157U);
    msg.sessid = 3552099796U;

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
    msg.setTimeStamp(0.320689023357);
    msg.setSource(51944U);
    msg.setSourceEntity(156U);
    msg.setDestination(39205U);
    msg.setDestinationEntity(8U);
    msg.sessid = 962169224U;

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
    msg.setTimeStamp(0.319914190471);
    msg.setSource(43894U);
    msg.setSourceEntity(114U);
    msg.setDestination(18558U);
    msg.setDestinationEntity(105U);
    msg.sessid = 3876262612U;

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
    msg.setTimeStamp(0.547653374941);
    msg.setSource(41577U);
    msg.setSourceEntity(172U);
    msg.setDestination(48568U);
    msg.setDestinationEntity(252U);
    msg.sessid = 2956465780U;
    msg.status = 23U;

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
    msg.setTimeStamp(0.785747658372);
    msg.setSource(40962U);
    msg.setSourceEntity(137U);
    msg.setDestination(44659U);
    msg.setDestinationEntity(119U);
    msg.sessid = 4199377975U;
    msg.status = 54U;

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
    msg.setTimeStamp(0.0995479252238);
    msg.setSource(34409U);
    msg.setSourceEntity(64U);
    msg.setDestination(33173U);
    msg.setDestinationEntity(14U);
    msg.sessid = 1655385145U;
    msg.status = 227U;

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
    msg.setTimeStamp(0.745310919446);
    msg.setSource(15318U);
    msg.setSourceEntity(220U);
    msg.setDestination(2507U);
    msg.setDestinationEntity(26U);
    msg.name.assign("NGZJSMFUJISDNJJRKPTWNHCY");

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
    msg.setTimeStamp(0.644545737786);
    msg.setSource(11435U);
    msg.setSourceEntity(159U);
    msg.setDestination(52909U);
    msg.setDestinationEntity(56U);
    msg.name.assign("FOZXMKWIUHSNOLVYLZJRKFJWDKIJBGYDZQBXAFDPMBVK");

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
    msg.setTimeStamp(0.801687379357);
    msg.setSource(26501U);
    msg.setSourceEntity(137U);
    msg.setDestination(45225U);
    msg.setDestinationEntity(188U);
    msg.name.assign("GLOCIPUEMGGUVPNEJTATWYYDMHDTPPTAOQPRATXYNJYULJZNZJSSBYWROWBITIXRACMWSLFOVCZXIDLHBUEHPEIZSWFCPUFGKPAMJKCRCMUVYIJHPHXEMHLVFTNBGERIOBKKWDMRJVDKPFHMXEIAOUHDZCLDOJFYZFNSBVNNOKAOKQVIQRHEGO");

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
    msg.setTimeStamp(0.574818971772);
    msg.setSource(35217U);
    msg.setSourceEntity(166U);
    msg.setDestination(21302U);
    msg.setDestinationEntity(193U);
    msg.name.assign("EYTSVUNSDSCORLRQCKHRPBRONKFHDMWEHYWPEMHVJETTBKMRUTOWOAPQTFWRCSDVBKMUBCHQJX");

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
    msg.setTimeStamp(0.689533492274);
    msg.setSource(19696U);
    msg.setSourceEntity(198U);
    msg.setDestination(32244U);
    msg.setDestinationEntity(159U);
    msg.name.assign("LFQUREXFPUQRHCGAVZNKNXNEHAEYNTKRUBZDYLSTKTKBQEHFDDSMNVOVEOQCJSPIIBL");

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
    msg.setTimeStamp(0.219014362778);
    msg.setSource(52454U);
    msg.setSourceEntity(144U);
    msg.setDestination(568U);
    msg.setDestinationEntity(168U);
    msg.name.assign("KBPQJZBLHCIYTSEQRUSZJVKGUEKFRNBVODYAMDQANZDLGNUTDCZEUWKUVPZEIHBGLBWASAINDCD");

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
    msg.setTimeStamp(0.0168593386635);
    msg.setSource(55705U);
    msg.setSourceEntity(227U);
    msg.setDestination(55965U);
    msg.setDestinationEntity(100U);
    msg.type = 19U;
    msg.error.assign("LBCELNFXCXQ");

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
    msg.setTimeStamp(0.797466424091);
    msg.setSource(28284U);
    msg.setSourceEntity(166U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(196U);
    msg.type = 217U;
    msg.error.assign("MZIFXQCNAEJKNWMOAQVTGGIBMHMHWTNVRBBPZJAUWXYECGHMXNIWQWJUDQSFZLPZBSPPWHOJTQKSKSLAFZGZGLXTVGDXDSPCGYYEOXLFVZFXKKYUZXSDUPNMCQCSHOUVLUYHBYFJCVQSNENDUSJBUCVIESLRHLOVPYQKLGMYHDZBBTICFAJEHLFUPCRJEYDTIYDNIQZWKPXKOHGRWVDNRTRMADIWEOUOAANJEIAMTFGEIRJRTCR");

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
    msg.setTimeStamp(0.694945270678);
    msg.setSource(23057U);
    msg.setSourceEntity(31U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(70U);
    msg.type = 220U;
    msg.error.assign("OCMZHATPKXK");

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
    msg.setTimeStamp(0.580338200263);
    msg.setSource(42450U);
    msg.setSourceEntity(94U);
    msg.setDestination(31829U);
    msg.setDestinationEntity(104U);
    msg.seq = 29039U;
    msg.sys_dst.assign("CMSWTEBCTUVEJHTQZTKGLZSKPLDMKBAQSHQYEEFRHOUGVDNKIZTBHFHZJNDYDUCFFFZAEMIDYAEBJTKVC");
    msg.flags = 26U;
    const char tmp_msg_0[] = {-1, 27, -83, -118, 87, 101, 78, 34, -62, 60, 51, 52, -61, 2, -104, -45, -56, -95, -119, 118, -76, -112, -69, -52, 46, -77, -86, -64, -107, -49, -68, -49, -53, 14, -7, 64, 109, -98, 58, 112, -80, 83, -32, 77, 27, -42, -100, -12, 19, -11, -33, -126, 31, -126, 96, -115, 1, -108, -19, -5, -37, 113, -50, -72, -76, 101, -94, -41, -78, -36, 108, 119, -1, -122, 45, 94, 51, 81, 73, -37, 105, -96, 27, 14, 12};
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
    msg.setTimeStamp(0.353191084426);
    msg.setSource(48054U);
    msg.setSourceEntity(28U);
    msg.setDestination(26079U);
    msg.setDestinationEntity(192U);
    msg.seq = 10517U;
    msg.sys_dst.assign("GTRBLNGKBNYCEWCSEDVGUAENQOUKZVYUFMNJDTYSBHXHGQKRJAGOUXNRLAZFPZIKMCBPMGQBJXFTYTYVBWCHZMTOEQEAQDVYXGEZCCJKRHSPPGRDJDUNOFPZMDOHCNIHPLIWUJSOSXMLWDXBQGPUHJIBHOGNHMV");
    msg.flags = 253U;
    const char tmp_msg_0[] = {-95, 49, 112, 1, -12, 49, -101, 82, -97, -91, -13, -116, 39, -90, 8, 37, 24, 88, 81, -58, -128, 36, 115, 101, 113, 70, -100, -26, -32, 11, -128, 91, 26, -75, -98, 61, -75, -5, 123, -45, 114, -82, 18, 58, -127, -14, 69, -112, 55, -98, 74, 43, -100, 14, -2, 100, 63, -7, -53, -33, 33, -93, -72, 123, 90, 65, -88, -14, -95, 76, -97, -1, 111, -60, -94, -77, -77, 89, 44, 12, 89, 94, -79, -99, -113, 79, -53, -68, 109, -89, -98, -40, 80, 15, 0, 28, 92, 95, -48, -17, -122, -51, 59, 74, -108, -76, 114, 83, 1, 10, 57, 20, 118, -107, -29, -43, 15, -85, 104, -86, -17, -54, -25, -31, -90, 77, -1, 112, 92, -13, -38, -18, 123, -96, -106, 72, 16, 97, -37, -74, 76, 33, -60, -126, 46, -73, 125, -13, -43, -107, 37, -39, -82, -32, -23, -98, 40, -59, 87, 71, 83, -32, -46, 116, -32, 64, -115, -97, 15, 7, -40, 4, -115, 121, -86, 1, -85, 109, -73, 107, 4, -33, -41, 94, -83, 36, -73, 114, 106, -21, -110, 60, 103, 126, 111, -22, 107, -42, 15, -18, 100, 18, 125, -20, -55, -22, 37, 78, -52, 64, 99, -47, -65, -21, -117, -120, 106, 42, 56, -15, 103, -126, -74, -109, -75, 77, -100, 33, -127, 64, 26, 36, -22, 22, 3, -50, 108, -27, 33, -121, -115, -1, -53, 78, 126, -50, 51, 77, 28, 17, 91, 108, 31, 36};
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
    msg.setTimeStamp(0.469547222374);
    msg.setSource(39251U);
    msg.setSourceEntity(42U);
    msg.setDestination(39109U);
    msg.setDestinationEntity(54U);
    msg.seq = 8081U;
    msg.sys_dst.assign("ZQGBDPFMVTBJD");
    msg.flags = 201U;
    const char tmp_msg_0[] = {-5, 96, 57, -24, 123, 107, -74, 10, 1, -8, -47, -49, 18, 4, -90, -102, 108, -56, 59, 92, -99, -28, 9, 82, 69, 68, -94, -21, 96, -4, -51, 55, 106, -11, 72, 118, -77, -69, -12};
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
    msg.setTimeStamp(0.580023220849);
    msg.setSource(62615U);
    msg.setSourceEntity(154U);
    msg.setDestination(29931U);
    msg.setDestinationEntity(158U);
    msg.sys_src.assign("KCBNOUQNUVNJIIEDEAVIIWTDSSIJHUHMNFPNVPEZGPPKBUNSGYXAODERKTUWAPVBSVSPSLJFUORYMZNKUJPLYFAMAJEXMWVRPNMKXGBZBGTIEDDBTLJHEMQXGZJGIFBTQKZUAWGCVXXXFMBNLCOXOFEYKSKSYTPHWMTYACERVGIMLHKQLRQWZQKYCJRNZCGVWEFGY");
    msg.sys_dst.assign("PSCLRKZXXDOCQJNBSNWFFHAVMFJXNPLUEVMQPSIGJGVMOHGMFWIILKFCJYJCBZIWBSCQNXXUAOTCYJMUUGCQPLRWHNAVBUZYZWFDZ");
    msg.flags = 46U;
    const char tmp_msg_0[] = {-27, -5, 66, 29, -54, 1, -128, 21, -92, 7, 42, 112, 40, 96, 80, 55, -95, 120, -25, -97, 92, 40, -18, 51, 28, 119, 53, -21, -107, -33, 84, 106, -114, 21, -120, 73, -112, 81, 44, -38, -19, -110, 106, -15, 109, 21, -85, 25, -11, -54, -95, -60, 83, 95, 115, 51, 66, 33, -110, 91, 54, 25, 96, 117, 95, -21, 15, 16, 36, 39, -18, -95, -29, -73, -97, 105, -91, 55, -18, -75, -43, -32, 52, -97, -70, -66, -30, 92, 43, -53, 27, -11, 111, 117, -64, 113, -68, 105, 55, 25, 73, -1, -63, -11, 16, -58, -40, 118, 59, -24, 86, 97, 30, -122, -58, 106, -28, 115, -58, -78, 60, -102, 67, 97, -67, 109, -45, -122, 38, 65, 11, 89, 22, 14, 90, -72, -117, -77, 100, 60, -34, -35, -33, 54, 105, -18, 38, -27, 24, 46, -96, 117, 113, 32, -69};
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
    msg.setTimeStamp(0.999094983664);
    msg.setSource(48447U);
    msg.setSourceEntity(115U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("AEPPYWLPBTZUUDUTSTOVNZAFMFYAILPNDSZOTSVMSBKARXWMCHZJCXLKXJFU");
    msg.sys_dst.assign("DTTXPOFCVLGRYCWUWQZPNFWSCSBAPWCAUWAZGOBIJUPXETIOSHLTUBGTFGXNSDRMDLNFCMUIETIVDIBVZZWWGXZLAQYGXVIOPNXTSHQUAKRSMEFEZMMPLYUODZEDOQDDXKRHGK");
    msg.flags = 1U;
    const char tmp_msg_0[] = {-5, 73, 7, 1, 38, 69, -61, 57, -61, -69, -73, 57, -5, 55, -55, 18, 102, -90, 22, 8, -65, -96, -37, -78, 101, -39, 36, 48, 16, 11, 65, -89, 10, 91, -108, -66, -86, 77, 119, -19, 92, 62, 117, -53, -115, -84, 86, 51, 105, -53, -79, -65, 117, -111, 27, 120, -1, -107, -9, 26, -63, 15, -30, -66, -94, 122, -59, 50, -35, 39, -19, -23, -117, 24, -13, -73, 111, -24, 6, -43, 124, 68, -47, -49, -107, -125, -58, -95, -28, -67, 43, -90, -30, -50, -29, -61, 104, -68, -64, -75, -68, -126, -28, -20, 53, 17, -92, 85, 5, 13, -116, -122, -5, -108, -19, 48, 18, -110, -125, -108, 26, 43, 100, -103, -14, -29, -95, -87, -29, 76, 102, 58, 75, 48, 3, -9, 101, 50, -123, 71, 117, -50, -102, 27, -119, -60, -76, -52, -91, -73, -110, -14, 29, 111, -111, 69, 14, -97, 41, 38, -85, 36, 33, 25};
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
    msg.setTimeStamp(0.897524554199);
    msg.setSource(27237U);
    msg.setSourceEntity(52U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("AGRDDMIIGBILJHFHBSWSHAXQUAYBUFUEUKWMOZRNLHLDCJGPHDZLEODVIKGTAZXPWKEVVGKLECFFUQTMYRTBOAFSIQRWBT");
    msg.sys_dst.assign("TWQARLCADRGYBLZFMVLODRRRXEDKUNYFNBLMKBKUNLVRRFSESHTYAHQWETBHZXXSBIPTMEPJAFXDBLXZNHOQOHVHZGERNWLMUHGWMNPEVCGOBSLPGTGPVSQJIKJYRNONMYZIWASQCSXHCAMPLBIMWWTTBPWKYCIFZXYWIQINUUKOJKAVIHXCCLOSIGKYRJONFZFPQ");
    msg.flags = 132U;
    const char tmp_msg_0[] = {-43, 53, 33, -114, 17, -110, 31, -121, -122, 29, 120, -36, -116, 77, 97, -105, -105, 16, 120, -90, -18, -10, 75, 32, 28, 67, 88, 61, -34, 39, -83, 21, -127, 103, 108, 11, -8, -76, -43, 40, 39, 102, -33, 83, 14, 58, 40, -14, 111, 99, 99, 14, -104, -77, 46, 66, 100, -68, 38, 86, 55, -67, 70, 85, 53, 66, 54, -42, -81, -10, 107, 28, 99, -85, -97, -58, -93, 32, -42, 106, -92, 12, -13, 32, -31, -118, 24, -70, 92, 116, -28, 13, 122, 42, -105, 28, -91, 89, 121, -52, 17, -78, -27, 98, -106, -126, 76, -33, -94, -78, -29, -125, -13, -52, -71, -113, 119, -47, 10, 125, -36, 55, 10, 104, -105, 36, 8, 86, -111, -101, 109, 15, -128, -79, 77, 80, -97, 79, -7, 119, 43, -82, -84, 40, -121, -107, 9, 48, -33, -31, 63, 115, 11, -20, 96, -42, -89, 11, 30, 120, 120, 113, -31, 48, -119, 124, 12, 16, -59, -16, 44, -46, -55, -113, -97, 109, 48, 77, 12, 10, 17, -89, -105, 59, 11, -67, -116, 16, -63, -14, -96, -30, -15, 84, -75, 109, 124, 118, 100, 77};
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
    msg.setTimeStamp(0.56844532663);
    msg.setSource(44419U);
    msg.setSourceEntity(135U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(140U);
    msg.seq = 8925U;
    msg.value = 67U;
    msg.error.assign("LWXBSFJSVTQSUBDNCYNQRBBTUJCDAEMFR");

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
    msg.setTimeStamp(0.991293446304);
    msg.setSource(5564U);
    msg.setSourceEntity(81U);
    msg.setDestination(24180U);
    msg.setDestinationEntity(122U);
    msg.seq = 51420U;
    msg.value = 240U;
    msg.error.assign("MCDGFVGRPCZXBADZKPWQPLNUTKNKNSSTMTPDFZMPKIXAFJMWTJPYCGQGDRIUAEHXFOINFWYJHZZYMXOLUVDUJAFBCVUPSWYLRDBASRKHCZBPJSZNFILUHUSKICIGNWXTOAHXFOVHQKRALVNEWCATRLEBPQRGOHHWOWYYOGTLQMEERJHOBCYLVJNTDSHERKUKI");

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
    msg.setTimeStamp(0.0950071814037);
    msg.setSource(36183U);
    msg.setSourceEntity(180U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(25U);
    msg.seq = 64220U;
    msg.value = 217U;
    msg.error.assign("SUOXEAWIWWBNYXPJYNPBBNLQTNJOVBVCQSBAIUWYPEYCYRQCYJRFHDWENXNQJGLIFAEGZDWZRKXZEPUJUNVJLLTGIBSKKOOIMPJVRAEMTFCCWWNFXHSQPLKMZVDXWBIUZUBOVCMYKHSUMSPERIMOTVGWYZLKFFEHRZHOQBDDSDPGSVYRHIITUAMGDQQSNGVXJUFOZMIXGKCDALYBCZTHMRFHQATOORRPFCMEKJDVTZL");

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
    msg.setTimeStamp(0.305791020333);
    msg.setSource(12924U);
    msg.setSourceEntity(71U);
    msg.setDestination(42168U);
    msg.setDestinationEntity(99U);
    msg.seq = 43389U;
    msg.sys.assign("UAXYDAYJVQWPGNCGMUSTJOLYMWBD");
    msg.value = 0.383545746867;

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
    msg.setTimeStamp(0.965118936688);
    msg.setSource(38432U);
    msg.setSourceEntity(112U);
    msg.setDestination(285U);
    msg.setDestinationEntity(7U);
    msg.seq = 41587U;
    msg.sys.assign("HHSIQRLCTTPVIBVLZIZCPJONSHFZGKKGIFMHDMQNJCEKNKYMYQVEKORUDXXXTQSVGXZOFTQITGPJNGZREPUJMHZFFOAETISGNOXUVJYRZPTOOCUOGSJJSVDDDIAMWKSQDANVPYUYIRNXBWIAUWBIJSKCYWNMYWDBZMELSFBMVOABRELKTMBDYBWYWCOASAPLCXUKHJPHTNHLEFGEHFEWWDBDXQAPGQBAVLMNFFR");
    msg.value = 0.590819769954;

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
    msg.setTimeStamp(0.475051468563);
    msg.setSource(16241U);
    msg.setSourceEntity(193U);
    msg.setDestination(45181U);
    msg.setDestinationEntity(0U);
    msg.seq = 65174U;
    msg.sys.assign("BVBJDREZNQECWWFMGMKZNISGRJWLMULDVUTBRVLTHEPAUIPVNHEAAHXVKNTXQYNRGTOYDIYJMXRETCAMLKCDFDICEKWHJCPXLIMIFLAAZZORGAQWBWLUHCQBVKWJOGLUGSTQYENVFOJNQYMS");
    msg.value = 0.42844108152;

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
    msg.setTimeStamp(0.442663568582);
    msg.setSource(13518U);
    msg.setSourceEntity(29U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(87U);
    msg.action = 168U;
    msg.longain = 0.712258745079;
    msg.latgain = 0.979850500958;
    msg.bondthick = 488873812U;
    msg.leadgain = 0.628703629026;
    msg.deconflgain = 0.710691506728;

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
    msg.setTimeStamp(0.799936300858);
    msg.setSource(13832U);
    msg.setSourceEntity(177U);
    msg.setDestination(34951U);
    msg.setDestinationEntity(98U);
    msg.action = 113U;
    msg.longain = 0.583376258035;
    msg.latgain = 0.53476152167;
    msg.bondthick = 2069429788U;
    msg.leadgain = 0.462031168879;
    msg.deconflgain = 0.539441632771;

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
    msg.setTimeStamp(0.0763623283905);
    msg.setSource(48546U);
    msg.setSourceEntity(5U);
    msg.setDestination(43099U);
    msg.setDestinationEntity(104U);
    msg.action = 68U;
    msg.longain = 0.648679663346;
    msg.latgain = 0.481527158098;
    msg.bondthick = 2408472692U;
    msg.leadgain = 0.398229907881;
    msg.deconflgain = 0.805228953271;

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
    msg.setTimeStamp(0.0228889073931);
    msg.setSource(31260U);
    msg.setSourceEntity(153U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.72674618527;
    msg.dist_min_abs = 0.431409893799;
    msg.dist_min_mean = 0.240166026007;

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
    msg.setTimeStamp(0.452642393055);
    msg.setSource(59019U);
    msg.setSourceEntity(184U);
    msg.setDestination(49904U);
    msg.setDestinationEntity(16U);
    msg.err_mean = 0.128490565109;
    msg.dist_min_abs = 0.555095140681;
    msg.dist_min_mean = 0.162819219958;

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
    msg.setTimeStamp(0.483835861149);
    msg.setSource(54638U);
    msg.setSourceEntity(228U);
    msg.setDestination(24094U);
    msg.setDestinationEntity(137U);
    msg.err_mean = 0.386638338382;
    msg.dist_min_abs = 0.27625403542;
    msg.dist_min_mean = 0.605521613481;

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
    msg.setTimeStamp(0.500273021277);
    msg.setSource(64103U);
    msg.setSourceEntity(84U);
    msg.setDestination(31583U);
    msg.setDestinationEntity(66U);
    msg.action = 19U;
    msg.lon_gain = 0.438138388735;
    msg.lat_gain = 0.462982954246;
    msg.bond_thick = 0.911067375288;
    msg.lead_gain = 0.784750686806;
    msg.deconfl_gain = 0.804399476153;
    msg.accel_switch_gain = 0.595285364063;
    msg.safe_dist = 0.429624349815;
    msg.deconflict_offset = 0.480536193364;
    msg.accel_safe_margin = 0.552073545623;
    msg.accel_lim_x = 0.362604337978;

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
    msg.setTimeStamp(0.792056124884);
    msg.setSource(7001U);
    msg.setSourceEntity(86U);
    msg.setDestination(24643U);
    msg.setDestinationEntity(88U);
    msg.action = 55U;
    msg.lon_gain = 0.453881986499;
    msg.lat_gain = 0.84774934861;
    msg.bond_thick = 0.0783792841002;
    msg.lead_gain = 0.319088657742;
    msg.deconfl_gain = 0.849285672449;
    msg.accel_switch_gain = 0.785426247953;
    msg.safe_dist = 0.960121364586;
    msg.deconflict_offset = 0.179403035272;
    msg.accel_safe_margin = 0.51705415847;
    msg.accel_lim_x = 0.837863046667;

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
    msg.setTimeStamp(0.443933121081);
    msg.setSource(65525U);
    msg.setSourceEntity(235U);
    msg.setDestination(33100U);
    msg.setDestinationEntity(186U);
    msg.action = 145U;
    msg.lon_gain = 0.485117448149;
    msg.lat_gain = 0.714301197747;
    msg.bond_thick = 0.379969204054;
    msg.lead_gain = 0.424990269981;
    msg.deconfl_gain = 0.620781656786;
    msg.accel_switch_gain = 0.387304766606;
    msg.safe_dist = 0.413871882159;
    msg.deconflict_offset = 0.580281656589;
    msg.accel_safe_margin = 0.758564095807;
    msg.accel_lim_x = 0.413179243575;

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
    msg.setTimeStamp(0.0304902027857);
    msg.setSource(59024U);
    msg.setSourceEntity(207U);
    msg.setDestination(27922U);
    msg.setDestinationEntity(227U);
    msg.type = 150U;
    msg.op = 69U;
    msg.err_mean = 0.342169177603;
    msg.dist_min_abs = 0.917793029908;
    msg.dist_min_mean = 0.670709225431;
    msg.roll_rate_mean = 0.160616885277;
    msg.time = 0.882967121736;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 106U;
    tmp_msg_0.lon_gain = 0.73665762239;
    tmp_msg_0.lat_gain = 0.58237925025;
    tmp_msg_0.bond_thick = 0.224973975049;
    tmp_msg_0.lead_gain = 0.156344796671;
    tmp_msg_0.deconfl_gain = 0.000770222667982;
    tmp_msg_0.accel_switch_gain = 0.145457564788;
    tmp_msg_0.safe_dist = 0.449408306095;
    tmp_msg_0.deconflict_offset = 0.58508935066;
    tmp_msg_0.accel_safe_margin = 0.695031331626;
    tmp_msg_0.accel_lim_x = 0.432402279187;
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
    msg.setTimeStamp(0.12310315012);
    msg.setSource(26444U);
    msg.setSourceEntity(126U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(76U);
    msg.type = 132U;
    msg.op = 156U;
    msg.err_mean = 0.15004273265;
    msg.dist_min_abs = 0.701251349687;
    msg.dist_min_mean = 0.714621415074;
    msg.roll_rate_mean = 0.477370738054;
    msg.time = 0.178139718885;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 169U;
    tmp_msg_0.lon_gain = 0.791445651917;
    tmp_msg_0.lat_gain = 0.480228234538;
    tmp_msg_0.bond_thick = 0.705336448347;
    tmp_msg_0.lead_gain = 0.459801768947;
    tmp_msg_0.deconfl_gain = 0.971761081857;
    tmp_msg_0.accel_switch_gain = 0.512332534449;
    tmp_msg_0.safe_dist = 0.260415770901;
    tmp_msg_0.deconflict_offset = 0.202708122036;
    tmp_msg_0.accel_safe_margin = 0.496038529571;
    tmp_msg_0.accel_lim_x = 0.400373381753;
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
    msg.setTimeStamp(0.398392144063);
    msg.setSource(27774U);
    msg.setSourceEntity(76U);
    msg.setDestination(56354U);
    msg.setDestinationEntity(252U);
    msg.type = 207U;
    msg.op = 190U;
    msg.err_mean = 0.521326468878;
    msg.dist_min_abs = 0.0168932916036;
    msg.dist_min_mean = 0.600568384084;
    msg.roll_rate_mean = 0.673662844385;
    msg.time = 0.374051805164;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.787325665285;
    tmp_msg_0.lat_gain = 0.0589319270307;
    tmp_msg_0.bond_thick = 0.74999437495;
    tmp_msg_0.lead_gain = 0.745732226638;
    tmp_msg_0.deconfl_gain = 0.178976177614;
    tmp_msg_0.accel_switch_gain = 0.789975467827;
    tmp_msg_0.safe_dist = 0.128341158479;
    tmp_msg_0.deconflict_offset = 0.17983815713;
    tmp_msg_0.accel_safe_margin = 0.426815002334;
    tmp_msg_0.accel_lim_x = 0.670918213075;
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
    msg.setTimeStamp(0.735681982543);
    msg.setSource(10859U);
    msg.setSourceEntity(58U);
    msg.setDestination(10606U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.858824889941;
    msg.lon = 0.881737323704;
    msg.eta = 609447364U;
    msg.duration = 38328U;

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
    msg.setTimeStamp(0.8354733141);
    msg.setSource(5966U);
    msg.setSourceEntity(148U);
    msg.setDestination(53327U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.804459656029;
    msg.lon = 0.485218451752;
    msg.eta = 1863151442U;
    msg.duration = 63547U;

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
    msg.setTimeStamp(0.969457629673);
    msg.setSource(17197U);
    msg.setSourceEntity(233U);
    msg.setDestination(49472U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.443904925462;
    msg.lon = 0.776187626777;
    msg.eta = 4094123171U;
    msg.duration = 20340U;

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
    msg.setTimeStamp(0.407621676746);
    msg.setSource(34015U);
    msg.setSourceEntity(172U);
    msg.setDestination(38930U);
    msg.setDestinationEntity(211U);
    msg.plan_id = 29571U;

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
    msg.setTimeStamp(0.0485687234798);
    msg.setSource(10419U);
    msg.setSourceEntity(191U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(119U);
    msg.plan_id = 27375U;

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
    msg.setTimeStamp(0.539901010106);
    msg.setSource(52310U);
    msg.setSourceEntity(239U);
    msg.setDestination(44821U);
    msg.setDestinationEntity(31U);
    msg.plan_id = 165U;

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
    msg.setTimeStamp(0.151132585036);
    msg.setSource(19553U);
    msg.setSourceEntity(96U);
    msg.setDestination(45437U);
    msg.setDestinationEntity(55U);
    msg.type = 6U;
    msg.command = 70U;
    msg.settings.assign("TQQEXJIGWBTATFALQGYPXXMJYTDHPJUYIMAGXREJFSVWPGOGHKUNVLFYRSYJUNPNWEOKHZKDPZJIJQAMPLWPFQEOILBKGIVYAXNOKRPFREXUBRZHSBDBUJRWTTKAKSLMODCSCUDZUQZKXZBWACVNCFEHEYQHENMRHAWCRBVGZJFMFOFYPKLTISUIZB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56669U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.902382378992;
    tmp_tmp_msg_0_0.lon = 0.379432645969;
    tmp_tmp_msg_0_0.eta = 117441518U;
    tmp_tmp_msg_0_0.duration = 32200U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XMWLLJJVOLIKPZMYQDGKEAMTHFEWVEHJTBSHINWIUCXBAGRAXVXIZVCUUCUHMLSDQLFZYKFJIDDKSZXUHYCVPSVDHXBEURCRFLOAILLVPZFRAYOKJCEYEOQGYYZOADBOKZFCQNBHMSRFEMPKGDBOKGSYCSWTJTXWSMDIGFBWITINPBCJCQGDGJXETJNUZRPNONVVHQYKWNUEFZ");

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
    msg.setTimeStamp(0.805027273884);
    msg.setSource(36520U);
    msg.setSourceEntity(129U);
    msg.setDestination(21011U);
    msg.setDestinationEntity(211U);
    msg.type = 244U;
    msg.command = 202U;
    msg.settings.assign("KLXZPYQFTWCQAXUGUXIQGVZNJMPVYRUQBKBNAJTRRCKUVYPRWSHWYGFTYOKGZLHYKQHGGDRC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56939U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.068384501075;
    tmp_tmp_msg_0_0.lon = 0.950953706606;
    tmp_tmp_msg_0_0.eta = 1313005672U;
    tmp_tmp_msg_0_0.duration = 33819U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BKCVVDEGCJRKYNQUDKESKODLUXYBUXFWUMVXXINLTONWLMKGIHNAXXQTRBZPEEJQRYACIHWGJVDRFANHWGSHDJKMWEVRTPVUESGRXBDOZOZSSVHCFROAXCYWJYUYOKIMDFGBPNLLWNZHFTJABMOJHVRSZFPUSJJZELCPECZBTFBTDSTLCZFKVIDWQPIRFQOGAPHPPWRS");

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
    msg.setTimeStamp(0.855484443214);
    msg.setSource(24264U);
    msg.setSourceEntity(105U);
    msg.setDestination(34188U);
    msg.setDestinationEntity(240U);
    msg.type = 212U;
    msg.command = 199U;
    msg.settings.assign("PJEQABDCGHWKBKEOUGSGZBLGYWNPFVHFPQETWIWYSNVHJITVTXSIZPYJWXWNSXNTBNYIZORMDXPOLRDHPETUXPHEFATVSUMOEUATNVOERJICVZPKUFGJYEVGKQBUF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50574U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.667262988759;
    tmp_tmp_msg_0_0.lon = 0.709787995963;
    tmp_tmp_msg_0_0.eta = 945548064U;
    tmp_tmp_msg_0_0.duration = 45653U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CWUDVNGHCJHXWLJFHORCRNCEJPCQVMMWIZHMKVOWEDARWCHBBARNDPELJKHTZLXRATYMNROTUDTFDVLZTFBPLTTFHWJODILQOKYGEEGDPEKXSAFUAMUZRSLOWASYUBYVAKKPQYGZIGSDPIUCOXVJXSBMWIZWJFSTQOZKEUIBHUULVFHOQPGJINBRBQDSVEULIZTYAXOCHIMRGBWNPJ");

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
    msg.setTimeStamp(0.555710538053);
    msg.setSource(9188U);
    msg.setSourceEntity(38U);
    msg.setDestination(49341U);
    msg.setDestinationEntity(105U);
    msg.state = 208U;
    msg.plan_id = 38537U;
    msg.wpt_id = 191U;
    msg.settings_chk = 21697U;

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
    msg.setTimeStamp(0.322972115101);
    msg.setSource(37657U);
    msg.setSourceEntity(154U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(32U);
    msg.state = 29U;
    msg.plan_id = 13960U;
    msg.wpt_id = 128U;
    msg.settings_chk = 48089U;

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
    msg.setTimeStamp(0.932973439644);
    msg.setSource(55218U);
    msg.setSourceEntity(128U);
    msg.setDestination(38978U);
    msg.setDestinationEntity(92U);
    msg.state = 137U;
    msg.plan_id = 26991U;
    msg.wpt_id = 85U;
    msg.settings_chk = 50510U;

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
    msg.setTimeStamp(0.202887565718);
    msg.setSource(39625U);
    msg.setSourceEntity(65U);
    msg.setDestination(41972U);
    msg.setDestinationEntity(49U);
    msg.uid = 82U;
    msg.frag_number = 50U;
    msg.num_frags = 153U;
    const char tmp_msg_0[] = {110, -60, 122, 120, -18, 34, 53, -72, -59, -3, 125, -88, 8, 9, -84, 117, 89, -45, -79, -99, -15, 112, 35, 30, 11, -90, 40, -75, 93, 87, -96, 91, 120, 41, -83, -99, -61, -9, -27, 111, -108, 63, 19, 19, 36, -76, 79, 17, -43, 102, -110, 68, -19, -76, 50, -23, -61, 4, -14, 112, 5, 14, 118, 43, -120, -108, -102, 17, 65, 15, -12, 93, -3, 18, -52, 50, 124, 71, -119, 41, -30, -74, 81, 31, 34, 92, 119, 40, 65, -72, -78, 85, -89, 10, -107, -5, 20, 48, 105, 90, 105, 57, 116, 87, -75, 70, -82, 126, -92, -29, 46, -66, -12, -101, -20, 1, 48, -90, -120, -47, -100, 55, -80, -43, -67, -112, 23, -112, -71, -49, -9, -103, 102, 111, -14, -42, -68, -99, -121, -41, -126, 92, 124, 101, -4, 122, 32, 4, 40, -66, -107, -29, -1, 52, 17, -123, 35, -76, 38, -70, -54, 107, 23, -62, 74, -48, -71, -14, -27, 114, 17, -25, -50, -104, -116, 117, -15, 100, -52, 5, 67, 20, -42, -108, -5, -42, 63, -7, -2, -9, 11, 90, 16, 6, -4, -58, 59, -108};
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
    msg.setTimeStamp(0.178977338177);
    msg.setSource(31261U);
    msg.setSourceEntity(228U);
    msg.setDestination(7783U);
    msg.setDestinationEntity(70U);
    msg.uid = 112U;
    msg.frag_number = 241U;
    msg.num_frags = 36U;
    const char tmp_msg_0[] = {118, 65, -88, -15, 45, -100, 87, -49, 26, 29, 3, -48, -48, -8, -97, -81, 34, -72, 8, -84, -44, -36, -102, 43, -3, 48, 115, 79, 74, 105, -91, -1, 109, -64, 14, 17, 99, 33, -85, -74, 123, -127, -3, 88, 91, -104, -6, -12, -77, 67, -103, -45, 9, 16, -58, -50, 2};
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
    msg.setTimeStamp(0.873509940615);
    msg.setSource(50401U);
    msg.setSourceEntity(142U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(225U);
    msg.uid = 224U;
    msg.frag_number = 58U;
    msg.num_frags = 73U;
    const char tmp_msg_0[] = {94, 76, 78, 63, -43, -50, 21, 62, -27, -128, -103, -27, 85, 108, 111, -36, 63, 23, 33, 73, 61, 6, -59, -120, 23, 86, -25, 18, -61, 80, -89, 103, 76, -111, -94, 31, -4, -17, 91, -66, -48, -23, -111, 98, -119, -4, 24, 98, -115, 52, -18, -102, -61, -72, -77, -122, 126, -2, 120, 10, -86, 19};
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
    msg.setTimeStamp(0.47529818545);
    msg.setSource(16933U);
    msg.setSourceEntity(63U);
    msg.setDestination(9144U);
    msg.setDestinationEntity(4U);
    msg.content_type.assign("IXDYPYXNZCSEFNVDPMVVJKXOQVACJWOONNAOAHJULFHGTUHFRWQBNNZFIKYJSPRDOGYQQSLZRXGEXUMRHJCLFXBNIOWSAOTEVZIAUIFPAFKVPYMCQRKGIYKZSMNPXLWCZFZHLKDBWDRTABDGGTEKUU");
    const char tmp_msg_0[] = {-16, 93, -9, -74, 92, 80, 111, -111, -18, -77, -9, 83, 48, 61, -3, -107, -113, 76, 27, -23, 119, -90, 99, -88, 27, -26, -121, -114, -10, -29, 0, 4, 99, 77, -32, -15, 40, -66, 43, 39, -8, 61, 64, -24, 46, 27, -14, 46, -122, 33, 54, -19, -123, -25, 74, 78, 63, 81, -94, 51, -114, 51, -73, 22, -59, 99, -90, -94, 19, 75, -32, -32, 21, -64, 111, -2, -92, -29, 75, -76, -62, -104, 36, 35, 103, -124, -53, 7, 9, -21, -121, 125, -28, 99, -3, -120, 41, 19, 2, 56, 56, -109, 31, -83, -57, 102, 94, 9, 106, 14, -9, 7, 0, -5, 88, 56, 69, 6, 25, 51, -112, 107, -70, 101, 60, -52, 9, 57, 77, -24, 84, -28, -93, -37, 84, 71, -35, -55, -40, 33, 1, 110, 20, -62, -14, 63, -107, -26, 88, -88, -24, -72, 8, -79, -52, 126, 79, -27, 35, 20, 29, -26, -32, 4, -16, 105, 94, 125, 98, -47, 53, 75, -113, 85, -84, 24, 7, 34, -89, -16, 85, -19, 115, 94, -42};
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
    msg.setTimeStamp(0.999608373738);
    msg.setSource(44288U);
    msg.setSourceEntity(237U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(25U);
    msg.content_type.assign("TGNLLDTLQGHVXCHYODRQBPLKAASSMTEWYGSGIJTMEABRISBKUFJDWYUHBUZZZYZHMSGJVNQZYMRVJLSHJOEOEMBPCGKGUCXCDIZBZIYLIQWRSIQNEPBCKOZMDVBAXYRDHWUUYNQWFQFFENRABIDIVOJSXNFJQVNMUZFFKLVAWLTVPUXPBMH");
    const char tmp_msg_0[] = {101, -115, -50, -96, 28, -2, -43, -44, -123, -9, -17, -117, 41, -89, 1, 39, -1, 42, 2, 117, 23, -9, -39, 74, 103, 27, 103, -47, 126, -6, 121, -23, 73, 44, 12, -93, 50, -74, 16, 22, -100, -127, -42, -92, -38, 87, 65, -36, -50, 38, -75, -43, -104, 5, 49, -56, -3, 91, -84, -103, -44, -48, 32, -44, 87, -33, -14, 47, -117, 0, 63, 40, -18, 47, 47, 51, 95, 78, 62, 48, -114, 83, 62, 1, 40, -98, 61, -127, -41, -24, 81, 87, 71, -107, -116, 13, 80, 91, -31, 0, 1, -4, -116, -76, 112, -39, -66, -114, 112, -35, 16, -95, -38, -67, -35, -21, 52, -87, 12, 74, -116, -122, 10, 29, 68, 56, -66, 92, -4, 66, -95, 112, 23, 12, -66, 10, 109, -25, -59, -104, -20, -102, 29, -58, -4, -125, 49, 46, -4, 104, 100, 101, 82, -93, 32, 84, 124, -55, 98, -109, -39, 28, -70, 75, -39};
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
    msg.setTimeStamp(0.713520224846);
    msg.setSource(16396U);
    msg.setSourceEntity(147U);
    msg.setDestination(6869U);
    msg.setDestinationEntity(93U);
    msg.content_type.assign("NSHBOFHKOEFKLRZCWDUIJQJXGLCPCIYFTEEEFGDJFTMSUCOABDSYGEXKISVNQFWHVBITTIXODATIAKQSXMRTYRESVZTMHJGCSVUGWDDOPRBFSNGBGNLBFYJKYCTGPIPYLALNMKOGBMHQMBLLAVKLJXQTQZULAEPNVAYDCUREBHMWPHMVLKIJNQZOVDMECARDJYRRAWPHZUXODCIYYOJPZVRZZW");
    const char tmp_msg_0[] = {20, -19, -89, 57, -118, -35, -63, 84, 113, 59, 93, -118, 54, -34, -40, 56, 69, -47, -24, -72, -90, -66, -113, 24, 57, -60, -12, 104, 79, -77, -64, 21, 21, 48, -17, -91, 26, 67, 27, 113, -11, 13, 46, -107, -101, -50, 60, -105, 39, 21, -39, -103, -39, 120, -113, 100, -127, -124, -95, -15, -94, -45, -68, 18, 89, -111, -44, 69, -119, -70, -96, -70, 124, 68, -49, 74, -1, -96, 23, -11, -99, 86, -3, -91, -14, -86, 86, -29, 56, -36, -4, -108, 104, -56, 16, 120, 47, -102, -104, -9, -4, -73, -99, 54, -72, -118};
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
    msg.setTimeStamp(0.925005429612);
    msg.setSource(6186U);
    msg.setSourceEntity(203U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.400951527151);
    msg.setSource(34747U);
    msg.setSourceEntity(196U);
    msg.setDestination(37627U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.335156870813);
    msg.setSource(22972U);
    msg.setSourceEntity(57U);
    msg.setDestination(8658U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.294485131697);
    msg.setSource(51809U);
    msg.setSourceEntity(71U);
    msg.setDestination(2488U);
    msg.setDestinationEntity(154U);
    msg.target = 17125U;
    msg.bearing = 0.467599426171;
    msg.elevation = 0.784731381128;

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
    msg.setTimeStamp(0.130752158349);
    msg.setSource(3088U);
    msg.setSourceEntity(86U);
    msg.setDestination(10189U);
    msg.setDestinationEntity(193U);
    msg.target = 30755U;
    msg.bearing = 0.908698628932;
    msg.elevation = 0.494215857684;

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
    msg.setTimeStamp(0.505242150963);
    msg.setSource(26548U);
    msg.setSourceEntity(14U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(228U);
    msg.target = 21096U;
    msg.bearing = 0.626524049845;
    msg.elevation = 0.958308700478;

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
    msg.setTimeStamp(0.349210737758);
    msg.setSource(16844U);
    msg.setSourceEntity(81U);
    msg.setDestination(22326U);
    msg.setDestinationEntity(167U);
    msg.target = 2412U;
    msg.x = 0.604141100673;
    msg.y = 0.575446780241;
    msg.z = 0.505458920527;

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
    msg.setTimeStamp(0.834373800741);
    msg.setSource(26074U);
    msg.setSourceEntity(176U);
    msg.setDestination(4214U);
    msg.setDestinationEntity(52U);
    msg.target = 37782U;
    msg.x = 0.0888015829055;
    msg.y = 0.530197902443;
    msg.z = 0.62472541902;

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
    msg.setTimeStamp(0.149436766979);
    msg.setSource(50350U);
    msg.setSourceEntity(29U);
    msg.setDestination(54191U);
    msg.setDestinationEntity(85U);
    msg.target = 2497U;
    msg.x = 0.636465254007;
    msg.y = 0.290861701411;
    msg.z = 0.597245655541;

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
    msg.setTimeStamp(0.62230809582);
    msg.setSource(54709U);
    msg.setSourceEntity(172U);
    msg.setDestination(63893U);
    msg.setDestinationEntity(59U);
    msg.target = 29824U;
    msg.lat = 0.094425745943;
    msg.lon = 0.0579127376074;
    msg.z_units = 40U;
    msg.z = 0.587848924968;

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
    msg.setTimeStamp(0.841605582088);
    msg.setSource(22482U);
    msg.setSourceEntity(129U);
    msg.setDestination(28947U);
    msg.setDestinationEntity(139U);
    msg.target = 47064U;
    msg.lat = 0.399037275198;
    msg.lon = 0.242968998608;
    msg.z_units = 77U;
    msg.z = 0.489753437607;

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
    msg.setTimeStamp(0.021367634278);
    msg.setSource(9587U);
    msg.setSourceEntity(188U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(4U);
    msg.target = 43200U;
    msg.lat = 0.46512117339;
    msg.lon = 0.36303394012;
    msg.z_units = 44U;
    msg.z = 0.803209725986;

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
    msg.setTimeStamp(0.733021238693);
    msg.setSource(52157U);
    msg.setSourceEntity(120U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(68U);
    msg.locale.assign("FNQKIYXITIDYLGZPRCJIPIMCMNODSGWCQONOLIYKIVKXXMHKAMUNFMEMUAWINJAWCAKQWDLDRJJYZLGQBWSETJZUBEB");
    const char tmp_msg_0[] = {22, 98, 42, -34, 37, 47, 31, -42, 88, 65, -74, 6, 0, -102, 53, 76, -31, -35, 28, 10, -28, 107, 78, -63, 125, 59, -128, 90, 117, -40, -24, 32, 41, 50, -22, 89, 25, 16, 54, -103, 48, 86, -79, 28, 47, 79, 13, -56, 57, -97, -102, -39, -10, 30, 30, -63, -22, -7, 106, -88, 28, -40, 23, -115, -19, 113, -110, 30, -55, -7, 125, 38, 21, -122, 24, -116, -58, 60, -73, 32, -73, 106, -24, 75, -97, 42, 40, 98, -120, 78, 104, 100, -66, -35, -89, -126, -34, -77, -11, -108, -107, 97, 28, 42, -7, 1, 101, 102, -75, -114, 89, 10, -53, -22, -72, -59, 61, 55, 21, 65, -42, -109, -33, 66, -44, -110, 83, 104, 62, -28, 86, 38, -97, 123, -7, -125, 53, 77, 66, -113, 52, 60, 35, 100, 23, 97, 55, -84, 73, -79, -115, 48, -106, -97, -50, -74, -61, 48, -102, 27, -75, -90, -79, -91, 70, -9, 60, -31, -50, 60, 62, -68, -20, 98, -119, -27, -128, 66, -1, 17, -38, -83, 63};
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
    msg.setTimeStamp(0.303910091687);
    msg.setSource(40976U);
    msg.setSourceEntity(249U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(32U);
    msg.locale.assign("XRDJXTCGLSMSNNRAMVKHPSVZVIPFRMZDDUQLZBOFUOYQYRVHCQTOSEPAPYSHPIDISOKDRQKTYJMQRVBILDAWBXXYFNMYAAJZPBMGUJXNHKZWGJZXHTGZCWWCRROOEHNDMNJKBXZTSVBFGHVZUKGFICXEKELMEGGVAVTQFEIJUJJRUWWIHAUYHMLEE");
    const char tmp_msg_0[] = {82, 0, -84, 125, -1, -49, -36, -43, 88, -58, 1, 13, -30, -81, 56, -80, 103, -45, 27, -102, 91, 57, 25, 40, 27, 105, -69, 51, -124, 61, -5, -35, -81, -78, 97, 54, 4, -18, -28, 51, -21, 85, -125, 41, -22, -5, -28, -81, -78, 96, 51, -91, -102, 87, -60, -43, -16, -92, 28, -50, 113, -74, -89, -96, -61, 93, -33, 84, 64, -42, -40, -3, 116, 16, -41, -27, -114, -115, 30, -14, 71, 37, -2, 69, -18, 121, -49, -83, 12, 113, 79, 26, -9, -107, 123, -106, 90, 83, 42, -70, -98, 63, -91, -64, -24, -61, 3, -126, -68, 99, 109, 18, -50, -3, 52, 112, -120, -5, -3, -13, -55, 73, -24, -51, 2, 107, -16, -76, 19, -57, 114, -17, -63, -65, 99, -34, -74, 93, -71, -75, 12, -97, -61, 41, -57, 19, 93, 83, -47, 29, 56, -2, -88, 17, -57, 78, -89, -52, -45, -34, -75, 21, 21, 15, -118, -33, -110, 12, 74, 19, 95, -41, 71, 63, -51};
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
    msg.setTimeStamp(0.270612603519);
    msg.setSource(25584U);
    msg.setSourceEntity(196U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(89U);
    msg.locale.assign("MSPOBKFOHBGNHTODOSPLFAZEXYMXYJVCQZFJSKDACRYEVQGGEVFCAWLQAGYPMSEFUH");
    const char tmp_msg_0[] = {112, 56, -46, 36, -115, 50, -114, -113, 35, -117, 73, -86, 97, 85, 109, -15, -111, 98, -20, 48, 78, -93, 13, -118, 111, -13, -19, -100, 8, 73, -66, -80, 111, 31, 111, -73, 44, -123, 25, -85, 98, -114, -65, -43, -31, -91, 18, -15, -104, 122, -92, 5, 50, 99, 12, 125, 103, 4, 123, 95, 23, -123, 120, -108, 25, -58, -58, 34, -32, -18, -63, -109, -45, -21, 94, -107, -47, 86, -8};
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
    msg.setTimeStamp(0.938537682905);
    msg.setSource(42544U);
    msg.setSourceEntity(17U);
    msg.setDestination(14838U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.56221223613);
    msg.setSource(37543U);
    msg.setSourceEntity(222U);
    msg.setDestination(56447U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.17069130872);
    msg.setSource(36894U);
    msg.setSourceEntity(70U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.638672601309);
    msg.setSource(49201U);
    msg.setSourceEntity(28U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(214U);
    msg.camid = 11U;
    msg.x = 60257U;
    msg.y = 3013U;

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
    msg.setTimeStamp(0.482768549321);
    msg.setSource(36223U);
    msg.setSourceEntity(151U);
    msg.setDestination(47146U);
    msg.setDestinationEntity(115U);
    msg.camid = 179U;
    msg.x = 9774U;
    msg.y = 36607U;

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
    msg.setTimeStamp(0.315936495214);
    msg.setSource(6189U);
    msg.setSourceEntity(51U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(5U);
    msg.camid = 204U;
    msg.x = 26744U;
    msg.y = 8393U;

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
    msg.setTimeStamp(0.895699648936);
    msg.setSource(7384U);
    msg.setSourceEntity(254U);
    msg.setDestination(9485U);
    msg.setDestinationEntity(35U);
    msg.camid = 156U;
    msg.x = 32213U;
    msg.y = 63788U;

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
    msg.setTimeStamp(0.367047937978);
    msg.setSource(50368U);
    msg.setSourceEntity(239U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(228U);
    msg.camid = 80U;
    msg.x = 62490U;
    msg.y = 11989U;

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
    msg.setTimeStamp(0.809860773577);
    msg.setSource(14012U);
    msg.setSourceEntity(252U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(129U);
    msg.camid = 57U;
    msg.x = 30814U;
    msg.y = 12679U;

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
    msg.setTimeStamp(0.621350110484);
    msg.setSource(55622U);
    msg.setSourceEntity(42U);
    msg.setDestination(62910U);
    msg.setDestinationEntity(162U);
    msg.tracking = 196U;
    msg.lat = 0.941544271913;
    msg.lon = 0.79125228856;
    msg.x = 0.785338548089;
    msg.y = 0.305559066895;
    msg.z = 0.110775253092;

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
    msg.setTimeStamp(0.219086462544);
    msg.setSource(21513U);
    msg.setSourceEntity(100U);
    msg.setDestination(21659U);
    msg.setDestinationEntity(48U);
    msg.tracking = 12U;
    msg.lat = 0.659784704009;
    msg.lon = 0.908981427558;
    msg.x = 0.284451698239;
    msg.y = 0.430846797235;
    msg.z = 0.0621447392048;

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
    msg.setTimeStamp(0.158790115246);
    msg.setSource(35520U);
    msg.setSourceEntity(0U);
    msg.setDestination(20016U);
    msg.setDestinationEntity(84U);
    msg.tracking = 25U;
    msg.lat = 0.488085448824;
    msg.lon = 0.00835550524771;
    msg.x = 0.0120246759708;
    msg.y = 0.204750486283;
    msg.z = 0.176688215109;

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
    msg.setTimeStamp(0.0724175612014);
    msg.setSource(44823U);
    msg.setSourceEntity(42U);
    msg.setDestination(11952U);
    msg.setDestinationEntity(161U);
    msg.target.assign("ORGZOFHAFOZVUMRLPDBOBGBEWDQRMEGFJPIWLPLCXFMGDVBBCZNJTKOIGFQPLDTNLYTEZKBHKKCYFSWXEDXVAJGVYQAJOERYIQWCPHMUKYDEJBFWCFJEACAGFTCZADIXQRQRSEUFYMILIYSVWWDBWPGTIHSWWAHUZRXPGUN");
    msg.lbearing = 0.699721651502;
    msg.lelevation = 0.896961145931;
    msg.bearing = 0.954921701685;
    msg.elevation = 0.841966104273;
    msg.phi = 0.786097816435;
    msg.theta = 0.190813772366;
    msg.psi = 0.0609632796765;
    msg.accuracy = 0.56212378106;

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
    msg.setTimeStamp(0.725345371837);
    msg.setSource(47197U);
    msg.setSourceEntity(31U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(101U);
    msg.target.assign("CQYFNIVMBJLSLAUOQDCKPOWUMPTXTKSDZBHMILDYEYYFGSVAY");
    msg.lbearing = 0.446448749713;
    msg.lelevation = 0.435879657235;
    msg.bearing = 0.54170568235;
    msg.elevation = 0.622141124278;
    msg.phi = 0.651076619876;
    msg.theta = 0.662520028891;
    msg.psi = 0.0533536523281;
    msg.accuracy = 0.400956431698;

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
    msg.setTimeStamp(0.91407321486);
    msg.setSource(30887U);
    msg.setSourceEntity(11U);
    msg.setDestination(40535U);
    msg.setDestinationEntity(156U);
    msg.target.assign("EUBOQYKWCDDNNZAFCCOJGPQSPBEUIGXHRFUELFFUVHSLDAWXEUFVKXWKXBHLZJZIJMSSDZGUPJCPVNZGDJVARYEGHYBA");
    msg.lbearing = 0.615602884272;
    msg.lelevation = 0.0436065372256;
    msg.bearing = 0.539680598344;
    msg.elevation = 0.786897518855;
    msg.phi = 0.824095208933;
    msg.theta = 0.291130940376;
    msg.psi = 0.108148390268;
    msg.accuracy = 0.255897958205;

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
    msg.setTimeStamp(0.465070279383);
    msg.setSource(62204U);
    msg.setSourceEntity(81U);
    msg.setDestination(42503U);
    msg.setDestinationEntity(169U);
    msg.target.assign("OEAWOWHRHCYRBJZWQVPKFGULIYXJPQFYCSHMHCZNZVKRHHOOGTETUIOIMURTINYQWJIMFPHSCNIQYLZILXXMKDXGWCVETUHSGZN");
    msg.x = 0.515290143594;
    msg.y = 0.373249283743;
    msg.z = 0.63258246953;
    msg.n = 0.136389880088;
    msg.e = 0.881338166419;
    msg.d = 0.627661737947;
    msg.phi = 0.920213628174;
    msg.theta = 0.120228516132;
    msg.psi = 0.865412421501;
    msg.accuracy = 0.0970773986832;

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
    msg.setTimeStamp(0.466405648248);
    msg.setSource(5959U);
    msg.setSourceEntity(36U);
    msg.setDestination(61796U);
    msg.setDestinationEntity(32U);
    msg.target.assign("WVKJKESPJDOXEKNROVHSOWZAAHKIQWICOZFANELJCEPUYGDGMTBSFBWXUFODZBVIPGAETJXXDOGVNRBCPMMHAMLMAXYNTBJBLCEJPQCVUSWFKNXKWLILLOTPCKRGR");
    msg.x = 0.810573386299;
    msg.y = 0.690687238704;
    msg.z = 0.834525454737;
    msg.n = 0.471735947956;
    msg.e = 0.477202075306;
    msg.d = 0.567986773194;
    msg.phi = 0.436952640054;
    msg.theta = 0.75979295874;
    msg.psi = 0.439654357681;
    msg.accuracy = 0.217827608251;

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
    msg.setTimeStamp(0.776479796357);
    msg.setSource(37340U);
    msg.setSourceEntity(154U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(192U);
    msg.target.assign("DWGBHQJMVSAKVCJYUICLTRUYDKZFERUOLVGCFTLNXKHZHUVUMYYTWQPAVYGDVXLFWTBOALVAFZODBNGIOAJSHDYNOSRDWMMBRTXYGHOWDPVSCJLSILFFNJQFQMPUWBZZGGINYEGJJOJPQHBKIOEMOKKUHTKEHIACSNCRKWYMHNBDSXRZZD");
    msg.x = 0.169892692549;
    msg.y = 0.382322080422;
    msg.z = 0.504630881729;
    msg.n = 0.640328622938;
    msg.e = 0.424362910452;
    msg.d = 0.576848583793;
    msg.phi = 0.85929917722;
    msg.theta = 0.46877590958;
    msg.psi = 0.686820243847;
    msg.accuracy = 0.924857774383;

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
    msg.setTimeStamp(0.966903159726);
    msg.setSource(32597U);
    msg.setSourceEntity(85U);
    msg.setDestination(26671U);
    msg.setDestinationEntity(223U);
    msg.target.assign("JCOULSAOOBPNRGKYQUTVEMZQYNAKEMESFOTVSPNGHGTNAWYAEBMUPXHXZRHLQZJLTGKUBNZQQOXFIOTCNIIDRGQGQHRWVTQCZHHIUDWLUEENWZFPPZDCWENPQ");
    msg.lat = 0.157688068087;
    msg.lon = 0.574981599092;
    msg.z_units = 51U;
    msg.z = 0.459532002887;
    msg.accuracy = 0.173083603933;

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
    msg.setTimeStamp(0.902720611726);
    msg.setSource(59815U);
    msg.setSourceEntity(67U);
    msg.setDestination(53422U);
    msg.setDestinationEntity(37U);
    msg.target.assign("ZZFAJDTSYERERTROMJBOHABSEOIFBISYNVLOVCDDQLJGPNFGGCMIWQQZWDLXFXRPPWSARXNEQJCIBMPGZKDUMKHTCHXXAWUWDNOTZSLKSRODXCOVEAKEBHHZALRGRTAWEQRVKAHAPUGMYYNEECPIWUMYFXKZNEDYIMLRUBJCLZSWBCWXZMUJIQKFVTLHQYOZVUJNXMCJFTYITGNSQPOXNBAPBWSJULGVIKHGKKYFMTTIFPLDGOQJ");
    msg.lat = 0.0447469024732;
    msg.lon = 0.479587468171;
    msg.z_units = 82U;
    msg.z = 0.609468464111;
    msg.accuracy = 0.0397263163598;

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
    msg.setTimeStamp(0.579368538561);
    msg.setSource(52457U);
    msg.setSourceEntity(253U);
    msg.setDestination(58081U);
    msg.setDestinationEntity(190U);
    msg.target.assign("OWJNANFSEIPSMDEOGLSPBFGZHQVGYUZZLTXKFDMMAMISDKLKETWXIRHJHZAVBXCWCIJCCDHMKGVUVTJPOWBVAUTFWJPCTIGEHLOTQRYZLIXAXRZYVFOBNUKKJPUMPLGQWPQAYZCMIDENEGSIWQTVQROIHKJYUOZHJMMCYQNVZQELVJDTROFXLRHZNYNBSFDDACFIXLKKDMQBGRWAWHEYVAUNWAGNFJNGUXPE");
    msg.lat = 0.226538604543;
    msg.lon = 0.0128727565298;
    msg.z_units = 169U;
    msg.z = 0.271115082216;
    msg.accuracy = 0.00586969181785;

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
    msg.setTimeStamp(0.729164326107);
    msg.setSource(38914U);
    msg.setSourceEntity(203U);
    msg.setDestination(34466U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RNEZXSFQMMTLSQKHFQEORHCWAWSHBHGXBZPJXOISGDAWOXSOTOBEUGVAQJCZIUPTVPLGVLTOKREPAADYEQYIIIYBXEJMUXDHHTFIQWWXFLRBZMPBMKS");
    msg.lat = 0.0149293509018;
    msg.lon = 0.609152052234;
    msg.z = 0.612181427124;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.627998788819);
    msg.setSource(63173U);
    msg.setSourceEntity(12U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(70U);
    msg.name.assign("ZDAYFYKDALNUOHUNUEGXQLMVCXEPWYUHPZIUXUPJSXPKBLHBKHHRVNIYKMCOZLMGLDFWGFVVQGHBJHNWSKZUTOUTEQFMDVRBPSJWBQZRYJPSIQQTJDHXMFVYGRGFRLMFGXORCHXBALGBZORNZQSQJKMZKILQVSCTXARMAVDBTZYQIWFPIKVAPO");
    msg.lat = 0.452254431372;
    msg.lon = 0.932845237839;
    msg.z = 0.0372522144878;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.354622472227);
    msg.setSource(47350U);
    msg.setSourceEntity(60U);
    msg.setDestination(59158U);
    msg.setDestinationEntity(81U);
    msg.name.assign("SZEKBPNEVTJRFXKOTXUVWWHWINAYOCINSCCFXSGAZARFKEIDZBROPXOFRBVHSPACN");
    msg.lat = 0.903522268033;
    msg.lon = 0.584580657027;
    msg.z = 0.949858134657;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.239995660911);
    msg.setSource(3477U);
    msg.setSourceEntity(42U);
    msg.setDestination(13438U);
    msg.setDestinationEntity(150U);
    msg.op = 11U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TSRUNVHQSMYJQGFLRUUUORQHWCXSJPHYAMCUIDUOFIZQWUFAIIAMYFLODKEERVMCZZSL");
    tmp_msg_0.lat = 0.526403016625;
    tmp_msg_0.lon = 0.00889569478416;
    tmp_msg_0.z = 0.519042793525;
    tmp_msg_0.z_units = 17U;
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
    msg.setTimeStamp(0.812444324275);
    msg.setSource(11420U);
    msg.setSourceEntity(202U);
    msg.setDestination(64805U);
    msg.setDestinationEntity(54U);
    msg.op = 163U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VQCWRDFZUQFIRVGLLYIVFOYYAARODTWYKKMWSKUOHCSYXAKJYNRBJYBOHDEFBFT");
    tmp_msg_0.lat = 0.550307972107;
    tmp_msg_0.lon = 0.984723998194;
    tmp_msg_0.z = 0.426299737305;
    tmp_msg_0.z_units = 78U;
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
    msg.setTimeStamp(0.325738134951);
    msg.setSource(34288U);
    msg.setSourceEntity(193U);
    msg.setDestination(14497U);
    msg.setDestinationEntity(154U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.121132884603);
    msg.setSource(28195U);
    msg.setSourceEntity(226U);
    msg.setDestination(25237U);
    msg.setDestinationEntity(86U);
    msg.value = 0.397692783402;
    msg.type = 68U;

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
    msg.setTimeStamp(0.0621584593122);
    msg.setSource(26428U);
    msg.setSourceEntity(231U);
    msg.setDestination(55304U);
    msg.setDestinationEntity(223U);
    msg.value = 0.333493188593;
    msg.type = 58U;

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
    msg.setTimeStamp(0.412694648558);
    msg.setSource(12952U);
    msg.setSourceEntity(55U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(122U);
    msg.value = 0.560562314562;
    msg.type = 71U;

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
    msg.setTimeStamp(0.243689538568);
    msg.setSource(60922U);
    msg.setSourceEntity(207U);
    msg.setDestination(40722U);
    msg.setDestinationEntity(204U);
    msg.value = 0.305797440779;

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
    msg.setTimeStamp(0.349376662457);
    msg.setSource(2637U);
    msg.setSourceEntity(122U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(2U);
    msg.value = 0.377001539443;

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
    msg.setTimeStamp(0.909293661182);
    msg.setSource(2199U);
    msg.setSourceEntity(13U);
    msg.setDestination(58010U);
    msg.setDestinationEntity(13U);
    msg.value = 0.700398462945;

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
    msg.setTimeStamp(0.555965789037);
    msg.setSource(19636U);
    msg.setSourceEntity(27U);
    msg.setDestination(22270U);
    msg.setDestinationEntity(94U);
    msg.timestamp_last_service = 0.555015603295;
    msg.time_next_service = 0.966503130644;
    msg.time_motor_next_service = 0.94564825483;
    msg.time_idle_ground = 0.375704021279;
    msg.time_idle_air = 0.361889827292;
    msg.time_idle_water = 0.762298048604;
    msg.time_idle_underwater = 0.617915024757;
    msg.time_idle_unknown = 0.500279101583;
    msg.time_motor_ground = 0.0671780406673;
    msg.time_motor_air = 0.731546200975;
    msg.time_motor_water = 0.0952571369184;
    msg.time_motor_underwater = 0.996105172306;
    msg.time_motor_unknown = 0.0201583101884;
    msg.rpm_min = -29044;
    msg.rpm_max = -20633;
    msg.depth_max = 0.901702462279;

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
    msg.setTimeStamp(0.540802822812);
    msg.setSource(30946U);
    msg.setSourceEntity(74U);
    msg.setDestination(33418U);
    msg.setDestinationEntity(197U);
    msg.timestamp_last_service = 0.0336782451035;
    msg.time_next_service = 0.00238453976862;
    msg.time_motor_next_service = 0.768971516455;
    msg.time_idle_ground = 0.0507320832341;
    msg.time_idle_air = 0.117097080947;
    msg.time_idle_water = 0.746072262514;
    msg.time_idle_underwater = 0.346176299818;
    msg.time_idle_unknown = 0.841124387671;
    msg.time_motor_ground = 0.440839638886;
    msg.time_motor_air = 0.269100107231;
    msg.time_motor_water = 0.452769234565;
    msg.time_motor_underwater = 0.848736065722;
    msg.time_motor_unknown = 0.62602676658;
    msg.rpm_min = 20844;
    msg.rpm_max = 3053;
    msg.depth_max = 0.911066186489;

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
    msg.setTimeStamp(0.00768503065743);
    msg.setSource(13898U);
    msg.setSourceEntity(120U);
    msg.setDestination(21119U);
    msg.setDestinationEntity(182U);
    msg.timestamp_last_service = 0.33229109807;
    msg.time_next_service = 0.822908014712;
    msg.time_motor_next_service = 0.660728438839;
    msg.time_idle_ground = 0.331803500237;
    msg.time_idle_air = 0.463608726223;
    msg.time_idle_water = 0.939824206096;
    msg.time_idle_underwater = 0.731678823072;
    msg.time_idle_unknown = 0.601895155143;
    msg.time_motor_ground = 0.362696270137;
    msg.time_motor_air = 0.898020236706;
    msg.time_motor_water = 0.60360390417;
    msg.time_motor_underwater = 0.489048379396;
    msg.time_motor_unknown = 0.889102777309;
    msg.rpm_min = 19141;
    msg.rpm_max = -27503;
    msg.depth_max = 0.9324793473;

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
    msg.setTimeStamp(0.458324887037);
    msg.setSource(1934U);
    msg.setSourceEntity(237U);
    msg.setDestination(56550U);
    msg.setDestinationEntity(184U);
    msg.severity = 212U;
    msg.text.assign("HYUTWYSODFDYPVPJZWFPPKIRLQZSQUPUNBFPDNONCGJQLMJRCTZCWAGSALQAXZFENNXVZXVKIGSA");

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
    msg.setTimeStamp(0.425000595232);
    msg.setSource(33321U);
    msg.setSourceEntity(180U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(200U);
    msg.severity = 19U;
    msg.text.assign("VGYHCMJPYUWVRRNSQJZDGKHBWFXSDJLUXOFKZJDDPRVNCIRLZXRIWMPJFCVKDPSOTLEYNLGQTHSZQZXCYGUEADRASJNAUCKYLGFONCSMPAIOLBPVDNIBHTCIGZYAQLBWIUZVGAKNGMHEKOEAUEQUSQNWQXFFLBWHVXCPAGIMRKWDQDHHBJMLSK");

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
    msg.setTimeStamp(0.405142550257);
    msg.setSource(54222U);
    msg.setSourceEntity(218U);
    msg.setDestination(63677U);
    msg.setDestinationEntity(183U);
    msg.severity = 125U;
    msg.text.assign("LTYVDDYSJARUSHIECCKWYAHGROEUKQORITRDQKAHXZTGBBAKQTFSEDNRVXVIBCGYXSYVVEXLPDCMEFOPFJZMBRKIFFJOLIGOYCMYXNDNQPIAMXWEUAUZVLVETCGUFVWZRCNVDNJGADZUMTRPUNLHMWGGJOWIBRH");

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
    msg.setTimeStamp(0.485725739264);
    msg.setSource(13076U);
    msg.setSourceEntity(26U);
    msg.setDestination(46808U);
    msg.setDestinationEntity(131U);
    msg.channel = 13;
    msg.value = 1670301;
    msg.gain = 111U;

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
    msg.setTimeStamp(0.843023746882);
    msg.setSource(26919U);
    msg.setSourceEntity(212U);
    msg.setDestination(12090U);
    msg.setDestinationEntity(34U);
    msg.channel = 59;
    msg.value = 802506049;
    msg.gain = 9U;

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
    msg.setTimeStamp(0.821249794856);
    msg.setSource(55462U);
    msg.setSourceEntity(181U);
    msg.setDestination(37829U);
    msg.setDestinationEntity(33U);
    msg.channel = 23;
    msg.value = 1440652740;
    msg.gain = 94U;

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
    msg.setTimeStamp(0.11220095226);
    msg.setSource(1349U);
    msg.setSourceEntity(193U);
    msg.setDestination(53423U);
    msg.setDestinationEntity(116U);
    msg.ch01 = 0.446675448635;
    msg.ch02 = 0.48243978348;
    msg.ch03 = 0.541871383231;
    msg.ch04 = 0.567390155209;
    msg.ch05 = 0.548936252648;
    msg.ch06 = 0.659355289963;
    msg.ch07 = 0.756821624541;
    msg.ch08 = 0.694966434406;
    msg.ch09 = 0.879589395166;
    msg.ch10 = 0.456552513702;
    msg.ch11 = 0.71391933253;
    msg.ch12 = 0.315347209559;
    msg.ch13 = 0.296302168541;
    msg.ch14 = 0.464010782497;
    msg.ch15 = 0.433629845083;
    msg.ch16 = 0.372472006572;

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
    msg.setTimeStamp(0.547498690662);
    msg.setSource(3175U);
    msg.setSourceEntity(174U);
    msg.setDestination(36603U);
    msg.setDestinationEntity(217U);
    msg.ch01 = 0.458498122616;
    msg.ch02 = 0.0227308877082;
    msg.ch03 = 0.801181214446;
    msg.ch04 = 0.0519050153094;
    msg.ch05 = 0.798532769947;
    msg.ch06 = 0.148718141916;
    msg.ch07 = 0.929188861866;
    msg.ch08 = 0.284081338797;
    msg.ch09 = 0.779330528727;
    msg.ch10 = 0.148358272652;
    msg.ch11 = 0.535533882858;
    msg.ch12 = 0.886419056518;
    msg.ch13 = 0.235345681222;
    msg.ch14 = 0.888773339487;
    msg.ch15 = 0.0122273731875;
    msg.ch16 = 0.804117835152;

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
    msg.setTimeStamp(0.739232761006);
    msg.setSource(46292U);
    msg.setSourceEntity(93U);
    msg.setDestination(64745U);
    msg.setDestinationEntity(154U);
    msg.ch01 = 0.35383657329;
    msg.ch02 = 0.135494570388;
    msg.ch03 = 0.933329441899;
    msg.ch04 = 0.520394132704;
    msg.ch05 = 0.243316434762;
    msg.ch06 = 0.843732334248;
    msg.ch07 = 0.92966842634;
    msg.ch08 = 0.782068446039;
    msg.ch09 = 0.730813238797;
    msg.ch10 = 0.671973368394;
    msg.ch11 = 0.611926754287;
    msg.ch12 = 0.699729297624;
    msg.ch13 = 0.875486251793;
    msg.ch14 = 0.150956771465;
    msg.ch15 = 0.23038245036;
    msg.ch16 = 0.272783973759;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.809167137099);
    msg.setSource(22847U);
    msg.setSourceEntity(76U);
    msg.setDestination(60410U);
    msg.setDestinationEntity(126U);
    msg.value = 0.290192567042;

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
    msg.setTimeStamp(0.0461106817949);
    msg.setSource(65217U);
    msg.setSourceEntity(127U);
    msg.setDestination(53987U);
    msg.setDestinationEntity(216U);
    msg.value = 0.00410036421113;

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
    msg.setTimeStamp(0.487134070139);
    msg.setSource(48217U);
    msg.setSourceEntity(30U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(101U);
    msg.value = 0.582475384802;

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
