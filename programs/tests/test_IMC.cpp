//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 5b8a4390bc5e18a3cda0e31fc948ef33                            *
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
    msg.setTimeStamp(0.40892292764653015);
    msg.setSource(22555U);
    msg.setSourceEntity(19U);
    msg.setDestination(17320U);
    msg.setDestinationEntity(57U);
    msg.state = 119U;
    msg.flags = 56U;
    msg.description.assign("WNCHOXWYOIDPWIXPKDAGRDWYMWUTYSQJFMNKMTNRHSZVMWAQLZSTTBAVGWGDPEPDYXSMMRCSMQUQUCYFJGCHEFPZOFVGZIGDSQHKBONYJKNWWFZUFKLJLRUJLSGYBINJBEGCERKXPVAHGBUTNZIJQTFNAAFBXBIPJTSROELXDDCAHCOONUXLPBEACNURQBDZDLHPIKTROBYHRSMEQE");

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
    msg.setTimeStamp(0.6798799516692362);
    msg.setSource(43380U);
    msg.setSourceEntity(43U);
    msg.setDestination(6285U);
    msg.setDestinationEntity(73U);
    msg.state = 88U;
    msg.flags = 130U;
    msg.description.assign("SJSQLZCIGYKBWRKDSCLPOAZWGJIKHEGGBZWBXPOOOOWYWOHCPQGINNXJHUJBTCRATVPCDBYNWDZRJXAXKSYPJXSHNEQQKZZENWQGDJDQMCNBEUEZIKVZUNMAPKIVRSMLEFMMFUKDMOFXUHYNIAEXEBRFHJFAHTVT");

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
    msg.setTimeStamp(0.7233491751295857);
    msg.setSource(35007U);
    msg.setSourceEntity(237U);
    msg.setDestination(5776U);
    msg.setDestinationEntity(70U);
    msg.state = 228U;
    msg.flags = 213U;
    msg.description.assign("SHSMBRYVOLYQQVFCYCVPSZPFBJVWWDTKIGHAFFEGMDVDZZIKYRBCQSUJENQOTOYKKOBWGDVOKNCHIDIMXPEMAXTAROBRKHTAGOEEWZPHYUMGVXWKKELIGOMWNTFWSYRQALDPMMFYBTDMPLDJJERZAESNRPHGI");

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
    msg.setTimeStamp(0.6479231672300395);
    msg.setSource(20847U);
    msg.setSourceEntity(119U);
    msg.setDestination(37356U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.9511759791425677);
    msg.setSource(51066U);
    msg.setSourceEntity(172U);
    msg.setDestination(14177U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.27681775976419565);
    msg.setSource(17560U);
    msg.setSourceEntity(157U);
    msg.setDestination(9853U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.03508934344285641);
    msg.setSource(40257U);
    msg.setSourceEntity(230U);
    msg.setDestination(14011U);
    msg.setDestinationEntity(57U);
    msg.id = 85U;
    msg.label.assign("MWONXMTKMIZPPGXSSAKHIQBEZUKNSQYIOHSLTVWMOBHVOHRWACKCZURVNZRDPNHBIFSAGDILPLOJACLRUNFKVTFUYQYTMZHYKXQFJLMEDYQWVETMHIIBEBFNQQEPXDEUPJWGJCEVYZOLQGYQGJCEAOBRENLOKRBQZKTDZCFPTRMLLAAPWNWUXLKGSTVDDOMTJZ");
    msg.component.assign("OLXPTBHDNEHDYZDBOGPLQMQDNCHMCBPTWHKLUDZOGDBFWVIVYIRIKZMAVRRMXTUWGNSZJYURYPCRSVTNXAUAATMMWSXBQZHOCI");
    msg.act_time = 12648U;
    msg.deact_time = 22329U;

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
    msg.setTimeStamp(0.9309749702960113);
    msg.setSource(3554U);
    msg.setSourceEntity(30U);
    msg.setDestination(26788U);
    msg.setDestinationEntity(108U);
    msg.id = 68U;
    msg.label.assign("GUCAAYRMFPYVLOWTQALXOVMXDRMRMJSAZBUDFPUCJGEQBVHCHXPZFMSRBVSORPELOSUBFKCHNEJZQELUPAWBQNHTTBFDDCGCADNNGPEEFDLYOXPXTVBWAEMQGRYAWYQJMSZQWFOYDLVLBDMNKKICDMZBHSC");
    msg.component.assign("UOSRWUCNWVFJOOSUFPZAHSPPDOANDVKWKGATAGIQSYPJYJOEHQSNNMBXMPFZRLRQVKIEBVDTZJOVBVQEHUXXNTCKHGDNGRZQZXDVMXPSMEYYCEXXRUZNIWAJMLYLSGNATAFMYPCBFTBCIQDHRCVRLNFUTPPILQOCGMUQNXTEEYPKBIGHKGTDLRXSAJEWMDSBLBFJTZLJOXDDU");
    msg.act_time = 9454U;
    msg.deact_time = 11880U;

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
    msg.setTimeStamp(0.6902733147345745);
    msg.setSource(11443U);
    msg.setSourceEntity(104U);
    msg.setDestination(40255U);
    msg.setDestinationEntity(22U);
    msg.id = 71U;
    msg.label.assign("IDHIINKXFEGNBOMMKCDDJXQYGBUHQYAEXVGLOVPQOSEISDHYWENOJMTTAWFCTHDDENTTFNJWATOEVXVLMRYZZLBOGGQPRHRIQZWJXXGCJKMVUFWAIFZFNKOPFFQCMELZHJYYXUNRCELAHNDIVDRTRXGSELV");
    msg.component.assign("LGDLPWBHNUASIWUXZRYCEJ");
    msg.act_time = 58952U;
    msg.deact_time = 32077U;

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
    msg.setTimeStamp(0.3353699809662518);
    msg.setSource(61567U);
    msg.setSourceEntity(84U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(61U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.4532564849681213);
    msg.setSource(46821U);
    msg.setSourceEntity(12U);
    msg.setDestination(50496U);
    msg.setDestinationEntity(121U);
    msg.id = 65U;

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
    msg.setTimeStamp(0.44256342234113843);
    msg.setSource(45189U);
    msg.setSourceEntity(117U);
    msg.setDestination(54593U);
    msg.setDestinationEntity(161U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.816372036053182);
    msg.setSource(47627U);
    msg.setSourceEntity(170U);
    msg.setDestination(10905U);
    msg.setDestinationEntity(36U);
    msg.op = 254U;
    msg.list.assign("DHKVJUVTNFYMTCUQQRYVVBPHQTXZROIZLHYKEIULUIDANYNXXMXCQDUJMNKXCACAEYPCLYMMSFGPCNDGFKJGVXDCGODFPAWQWONRTWTGSWILYJGZRQNDEHVQJFHKEWVRLPZHOPACFSRHLZWLRBLBBMECYOEUXTWBCSNOOXHLEPKHDEEYIYUZAJZZWSPJKTMIGJPIOSLNAW");

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
    msg.setTimeStamp(0.6442633764198415);
    msg.setSource(37796U);
    msg.setSourceEntity(157U);
    msg.setDestination(53096U);
    msg.setDestinationEntity(2U);
    msg.op = 140U;
    msg.list.assign("RUMBSZOAXXRHQJAEHMPKUTKTLBPRZOYVBKALTRLYXYVXXNDNDEYZFNHIUXPJTANTQCMCZHNODWYDLDIEBUYZMTGCRDSKUGIXPEODBCCRMHFBXWOGQUPEQFXSQITKACAGYIMZZAGFQNE");

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
    msg.setTimeStamp(0.3861744145944179);
    msg.setSource(44129U);
    msg.setSourceEntity(173U);
    msg.setDestination(1981U);
    msg.setDestinationEntity(66U);
    msg.op = 88U;
    msg.list.assign("AOEPQTYJLZCEZOGZBUPQINKWULRRJZHZEKTWBLXBXBWVFATGTFGFDRSBNLFNVNNDKGOCCQJIKCVOHNVSFFKMXOALLHWURINGNITW");

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
    msg.setTimeStamp(0.1947190498499377);
    msg.setSource(32595U);
    msg.setSourceEntity(84U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(217U);
    msg.value = 147U;

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
    msg.setTimeStamp(0.3469044411346368);
    msg.setSource(3478U);
    msg.setSourceEntity(148U);
    msg.setDestination(2554U);
    msg.setDestinationEntity(49U);
    msg.value = 195U;

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
    msg.setTimeStamp(0.030818003146055428);
    msg.setSource(24428U);
    msg.setSourceEntity(209U);
    msg.setDestination(34002U);
    msg.setDestinationEntity(220U);
    msg.value = 32U;

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
    msg.setTimeStamp(0.9627707372956807);
    msg.setSource(21638U);
    msg.setSourceEntity(227U);
    msg.setDestination(44234U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("FVGFQLHJMMHSHBCRIFRJ");
    msg.message_id = 11059U;

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
    msg.setTimeStamp(0.9305629653538339);
    msg.setSource(43929U);
    msg.setSourceEntity(6U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(231U);
    msg.consumer.assign("WMREIHYFDUOFWQTBZFHFVCIOEENLLLAOZLJKWJKDXBNDYYCKGJNGSLYJEETVGZXZPYHQRJVIQZPMXSAHANRBUBKMZUDTZPCJNIHIUAUGVXJSEAECGFRNKDDBIRHLXJDHMZBKYVWURUQYRKATAWTZBOVICLAFPMRJKFSCHBOKGRGFHUCQTECPPMVWLDTOEYDSMAS");
    msg.message_id = 52217U;

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
    msg.setTimeStamp(0.9338174620941623);
    msg.setSource(51598U);
    msg.setSourceEntity(151U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("JVHYXVGOLKKIIDGUBEVMKDZHPKGNADBFCZRVXFXWOWEQRCFOFJSQLSBJJNWXULXYMUMJBHNLXUASAHOIHYYCNPGDCTZDAQQNVFTAADQLIZCDVGQEKRAXHXVIPZOHBPEPIYSOOEXSRCAJGHNQCSTKUYFKPMRWWEWYZSFTWBYOPFVTWGJQRZUEJYTLUBLQCUMWMHADKSNGDMKMPMJEVLAZKBEBSCNQIOPNGUTIVTCILPZWRLRIRJNXFTDRE");
    msg.message_id = 26607U;

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
    msg.setTimeStamp(0.08113004905601662);
    msg.setSource(38030U);
    msg.setSourceEntity(20U);
    msg.setDestination(17100U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.7903050552138084);
    msg.setSource(24892U);
    msg.setSourceEntity(131U);
    msg.setDestination(16225U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.708629349920316);
    msg.setSource(58205U);
    msg.setSourceEntity(148U);
    msg.setDestination(10350U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.15713703134166346);
    msg.setSource(61978U);
    msg.setSourceEntity(81U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(218U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.32513191251147155);
    msg.setSource(12351U);
    msg.setSourceEntity(205U);
    msg.setDestination(11873U);
    msg.setDestinationEntity(151U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.8466645736385204);
    msg.setSource(11627U);
    msg.setSourceEntity(185U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(235U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.7977177127817425);
    msg.setSource(63412U);
    msg.setSourceEntity(204U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(15U);
    msg.total_steps = 176U;
    msg.step_number = 95U;
    msg.step.assign("PGHCUWPXKCVKIXTYXJOOQGUDMIJGXSXYJCLGNEZIZFDEMHVQNWDVTNCGWHCQVFKQXLQFZVOOSERLRLGTZWHWDBEZUIBWOAVEPIEYONHHDEDKPSWQYFMMCRBBJJDYTYEUNIPDYKVFQ");
    msg.flags = 69U;

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
    msg.setTimeStamp(0.4896965378937216);
    msg.setSource(17724U);
    msg.setSourceEntity(130U);
    msg.setDestination(65314U);
    msg.setDestinationEntity(197U);
    msg.total_steps = 24U;
    msg.step_number = 20U;
    msg.step.assign("WVAVYVPIUARPKNUBMXYVMBVEDTLEDFKRHDAZFNOSITHKQFBCQMUD");
    msg.flags = 98U;

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
    msg.setTimeStamp(0.4322455854735875);
    msg.setSource(35446U);
    msg.setSourceEntity(16U);
    msg.setDestination(4914U);
    msg.setDestinationEntity(58U);
    msg.total_steps = 113U;
    msg.step_number = 154U;
    msg.step.assign("AORAVDYHLBVJJACPLNIIMTBYBERWZIGSOWKUEOUXNNKGDHZAPZTFGSV");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.42024562454505543);
    msg.setSource(4350U);
    msg.setSourceEntity(199U);
    msg.setDestination(12688U);
    msg.setDestinationEntity(41U);
    msg.state = 86U;
    msg.error.assign("EXGCWDCFOUXILGERCWSHMAUYZOZXFXQEIFCFJEGIPARSIHNNDKTKIUQXTTBGTDIQNSKOUSNEZFSFZPVYBWAWMRITECOMPLNTZVKTBLSTFAJQERCJPXHEBMYGQBHWYACHHVZNKMBVSFRKWVVPVJJGHXDZBMTRYXIZWVFCAQRLGJPZMFDZWQMJWUPUNXYLLHQUKGR");

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
    msg.setTimeStamp(0.622168799869043);
    msg.setSource(27451U);
    msg.setSourceEntity(206U);
    msg.setDestination(29267U);
    msg.setDestinationEntity(165U);
    msg.state = 188U;
    msg.error.assign("DFUMKBGJUEJTGMNHNHXFRGLYLAIWBIXJDUTOHREPMAKIE");

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
    msg.setTimeStamp(0.5167458032133653);
    msg.setSource(1777U);
    msg.setSourceEntity(131U);
    msg.setDestination(27022U);
    msg.setDestinationEntity(251U);
    msg.state = 133U;
    msg.error.assign("ABYEYRLYONSIOJBQUJPYBQDGHTZASSSBHQMEHKIGHRQTJBIYLQZRFCGOOWFMRTIXIDZVJXEUMXMDZMAIDYVPTAYASEFUKHAGVPCDTNXQMLZXZMEEWNCGACVEKWWIW");

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
    msg.setTimeStamp(0.2482927392812816);
    msg.setSource(38166U);
    msg.setSourceEntity(90U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.7390134711309368);
    msg.setSource(61543U);
    msg.setSourceEntity(188U);
    msg.setDestination(62479U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.6011133965776951);
    msg.setSource(3010U);
    msg.setSourceEntity(36U);
    msg.setDestination(15158U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.6653642364188763);
    msg.setSource(60251U);
    msg.setSourceEntity(249U);
    msg.setDestination(40584U);
    msg.setDestinationEntity(169U);
    msg.op = 77U;
    msg.speed_min = 0.10247823063080708;
    msg.speed_max = 0.7400071424905719;
    msg.long_accel = 0.5256203387806792;
    msg.alt_max_msl = 0.8225523887403404;
    msg.dive_fraction_max = 0.004737332319308507;
    msg.climb_fraction_max = 0.925512058499628;
    msg.bank_max = 0.9791842251651137;
    msg.p_max = 0.9362150472177809;
    msg.pitch_min = 0.6972524591898644;
    msg.pitch_max = 0.10427862665076948;
    msg.q_max = 0.6330224450371484;
    msg.g_min = 0.1711929708099139;
    msg.g_max = 0.7512486138165195;
    msg.g_lat_max = 0.9725444497378296;
    msg.rpm_min = 0.36578499925475116;
    msg.rpm_max = 0.542119681139237;
    msg.rpm_rate_max = 0.18243316601867765;

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
    msg.setTimeStamp(0.12086888326192313);
    msg.setSource(41571U);
    msg.setSourceEntity(128U);
    msg.setDestination(44401U);
    msg.setDestinationEntity(198U);
    msg.op = 26U;
    msg.speed_min = 0.6044362506086242;
    msg.speed_max = 0.15613287543713417;
    msg.long_accel = 0.710437389545421;
    msg.alt_max_msl = 0.7980632485938222;
    msg.dive_fraction_max = 0.74182312115614;
    msg.climb_fraction_max = 0.6465736349612413;
    msg.bank_max = 0.9559300850980058;
    msg.p_max = 0.8894734065663278;
    msg.pitch_min = 0.5709318659104295;
    msg.pitch_max = 0.03773731730548391;
    msg.q_max = 0.9757885544532474;
    msg.g_min = 0.76146475804277;
    msg.g_max = 0.06700996049435204;
    msg.g_lat_max = 0.3238931952137889;
    msg.rpm_min = 0.7074102221052844;
    msg.rpm_max = 0.04914770268932267;
    msg.rpm_rate_max = 0.9543935309794851;

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
    msg.setTimeStamp(0.7660475197528595);
    msg.setSource(38310U);
    msg.setSourceEntity(221U);
    msg.setDestination(16292U);
    msg.setDestinationEntity(56U);
    msg.op = 214U;
    msg.speed_min = 0.3895296151996154;
    msg.speed_max = 0.4395646901927871;
    msg.long_accel = 0.558564317183779;
    msg.alt_max_msl = 0.6068897634610825;
    msg.dive_fraction_max = 0.7267125636271738;
    msg.climb_fraction_max = 0.3223494621608328;
    msg.bank_max = 0.6942823372188378;
    msg.p_max = 0.2631895198008677;
    msg.pitch_min = 0.8040084628280887;
    msg.pitch_max = 0.027353051599559475;
    msg.q_max = 0.42670232818174814;
    msg.g_min = 0.7512824264621795;
    msg.g_max = 0.638074695584558;
    msg.g_lat_max = 0.9052259146648236;
    msg.rpm_min = 0.42373705503901027;
    msg.rpm_max = 0.526741047318271;
    msg.rpm_rate_max = 0.29988150901487165;

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
    msg.setTimeStamp(0.6397447498592497);
    msg.setSource(26585U);
    msg.setSourceEntity(150U);
    msg.setDestination(19685U);
    msg.setDestinationEntity(185U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 24681U;
    tmp_msg_0.control_ent = 67U;
    tmp_msg_0.timeout = 0.40649400435258964;
    tmp_msg_0.loiter_radius = 0.29312129630850614;
    tmp_msg_0.altitude_interval = 0.13208280316018617;
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
    msg.setTimeStamp(0.4940585216957941);
    msg.setSource(28263U);
    msg.setSourceEntity(103U);
    msg.setDestination(34297U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.329904165406231);
    msg.setSource(62546U);
    msg.setSourceEntity(241U);
    msg.setDestination(49011U);
    msg.setDestinationEntity(87U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.2533283607876109;
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
    msg.setTimeStamp(0.4813250960961133);
    msg.setSource(30887U);
    msg.setSourceEntity(16U);
    msg.setDestination(3138U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.5618934444953358;
    msg.lon = 0.2829790443851018;
    msg.height = 0.607980066811245;
    msg.x = 0.02559998703577504;
    msg.y = 0.5045275578020606;
    msg.z = 0.8085516820004711;
    msg.phi = 0.09250090933794997;
    msg.theta = 0.9892707068744445;
    msg.psi = 0.6438146205294081;
    msg.u = 0.5439675944160719;
    msg.v = 0.4137974604344139;
    msg.w = 0.5669628130775254;
    msg.p = 0.7466131082517976;
    msg.q = 0.008432208044576894;
    msg.r = 0.43471047781175043;
    msg.svx = 0.9727940942170931;
    msg.svy = 0.47916986675342677;
    msg.svz = 0.7530602017367016;

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
    msg.setTimeStamp(0.40336521634373124);
    msg.setSource(19574U);
    msg.setSourceEntity(222U);
    msg.setDestination(16106U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.7229068747735692;
    msg.lon = 0.6778005621439664;
    msg.height = 0.6883515552225771;
    msg.x = 0.29765930030097876;
    msg.y = 0.014706427555044699;
    msg.z = 0.9107429931860085;
    msg.phi = 0.6925427125391378;
    msg.theta = 0.6119569050391979;
    msg.psi = 0.7691068165714856;
    msg.u = 0.09750060806838567;
    msg.v = 0.3871677118230856;
    msg.w = 0.716363236307928;
    msg.p = 0.5072042998352378;
    msg.q = 0.3398314612836789;
    msg.r = 0.6012377486418855;
    msg.svx = 0.8644110548713466;
    msg.svy = 0.3832838054995442;
    msg.svz = 0.872705403870723;

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
    msg.setTimeStamp(0.6559281707104803);
    msg.setSource(15819U);
    msg.setSourceEntity(45U);
    msg.setDestination(36724U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.018433054222357304;
    msg.lon = 0.8014705633566254;
    msg.height = 0.0016458283755499403;
    msg.x = 0.3877685439409534;
    msg.y = 0.8099803339367132;
    msg.z = 0.6510829241456074;
    msg.phi = 0.1293987712762269;
    msg.theta = 0.13130398631273377;
    msg.psi = 0.9640313927342338;
    msg.u = 0.6598146806193226;
    msg.v = 0.22964101834278394;
    msg.w = 0.7457782032395222;
    msg.p = 0.9171130067693728;
    msg.q = 0.18134334331735724;
    msg.r = 0.10225184745639693;
    msg.svx = 0.07522429101685024;
    msg.svy = 0.3230602052589212;
    msg.svz = 0.3890662843646606;

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
    msg.setTimeStamp(0.934103486829582);
    msg.setSource(52359U);
    msg.setSourceEntity(139U);
    msg.setDestination(12802U);
    msg.setDestinationEntity(22U);
    msg.op = 238U;
    msg.entities.assign("CXKWHDIQJKXYEPICFZSTNWSKVCUEJIKICVMBBSVDAHDKJFLNTSCWFHZZFCSJXGXSJMHDLURBNOAALVQWYUIPQAGPMVVHQOVDWUFRBPEJYMKHTGEVBUWQZW");

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
    msg.setTimeStamp(0.2879911459476546);
    msg.setSource(24445U);
    msg.setSourceEntity(202U);
    msg.setDestination(10332U);
    msg.setDestinationEntity(171U);
    msg.op = 117U;
    msg.entities.assign("BKMHNAQGPIFXYHKBALTZPRKUXZSBFDCVSOJZLBLHSFWDBLRHGYDSPZYAZBWCWTSYITOTIETVGGVZILMZKKIWRWUIDLINLXWDBDUOXKYENUJTMFKNFLQHFMNWIHLDEVHPWUASGERPXWKEMUOQFN");

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
    msg.setTimeStamp(0.4976557113037471);
    msg.setSource(44714U);
    msg.setSourceEntity(161U);
    msg.setDestination(24995U);
    msg.setDestinationEntity(10U);
    msg.op = 186U;
    msg.entities.assign("PFHTSWFOTQ");

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
    msg.setTimeStamp(0.9592630980392781);
    msg.setSource(29285U);
    msg.setSourceEntity(134U);
    msg.setDestination(10435U);
    msg.setDestinationEntity(242U);
    msg.type = 125U;
    msg.speed = 18751U;
    const char tmp_msg_0[] = {-22, -109, 105, 20, 99, 12, 31, 52, -31, 38, 121, -76, -87, 11, 0, -45, -94, -50, 81, 99, -72, -13, 72, -18, -2, -37, -16, 38, -44, 55, -83, -31, 102, 29, 77, 109, -63, 61, 105, -47, 123, -110, 92, 56, -82, 89, -64, 4, 80, 112, 109, 4, 33, 43, 56, -19, 33, 69, 74, -104, 74, -88, 81, -47, 67, -74, 2, 12, 120, -65, -59, 50, -10, 57, -49, -39, 114, -14, 54, -27, -87, -15, 2, -85, -79, 104, 104, -128, -43, 74, 115, 104, 74, 96, -111, 63, 101, -109, -93, 71, -87, 100, -69, -48, -76, -53, 42, 4, -76, 73, -69, 64, 58, -63, -48, -102, 122, 101, -7, -22, 17, 119, 62, 110, 78, 103, 60, -108, 49, 112, 71, 20, 45, 57, 93, 126, 50, -73, -29, 97, -1, -73, -10, -108, -126, -1, 69, -31, -62, 35, -91, -97, 96, 18, 31, -75, -28, -77, 106, -29, 44, -128, -78, -98, -51, -99, -55, 32, 16, -78, -101, 102, 53, -46, -83, 119, 5, 19, 21, 47, 110, -5, 46, -119, 118, -6, 72, -49, -23, 124, -15, 89, 84, -35, -85, -10, -60, -2, -41, 84, 79, 62, -57, -121, -41, 78, -98, 111, 47, 88, 102, -26, 102, -50, -123, 114, 22, 34, 73, 112, 26, 33, -14};
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
    msg.setTimeStamp(0.5545787080543196);
    msg.setSource(31788U);
    msg.setSourceEntity(104U);
    msg.setDestination(9561U);
    msg.setDestinationEntity(131U);
    msg.type = 179U;
    msg.speed = 42041U;
    const char tmp_msg_0[] = {72, -14, 18, -29, -9, -121, 103, 1, -107, -91, -85, 115, -20, 78, -106, 74, -59, -64, -79, 90, -121, -69, -91, 5, -17, -128, -118, 77, 32, 104, -60, -127, -61, -77, -38, -51, 26, -63, 82, 65, 17, 56, 9, 77, -112, -38, -77, 115, -88, -82, 84, -65, -108, -57, -68, -37, 82, -2, 48, 115, -20, -17, -45, 92, -103, -128, -66, -85, 40, -84, -23, -58, 124, -15, 118, -47, 31, -79, -1, 114, 101, -62, 105, -80, -86, 14, -29, -36, -74, 26, -115, -21, 122, -128, 115, 101, 97, -6, -21, -74, -20, 126, 35, -4, -45, 69, 73, 73, -91, -85, -76, 103, -77, 114, 18, -86, 23, 75, 5, -102, 119, -29, 104, -104, 28, -18, 21, 22, 79, -33, 101, -15, 86, -80, -86, 66, -76, 103, 16, -117, 53, 120, 95, -20, -96};
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
    msg.setTimeStamp(0.02724332218434511);
    msg.setSource(25078U);
    msg.setSourceEntity(115U);
    msg.setDestination(21941U);
    msg.setDestinationEntity(39U);
    msg.type = 191U;
    msg.speed = 63344U;
    const char tmp_msg_0[] = {-94, -110, 26, 64, 113, 90, 85, -76, 121, -111, 96, 93, -109, -31, 8, -18};
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
    msg.setTimeStamp(0.9949053704855761);
    msg.setSource(51528U);
    msg.setSourceEntity(198U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(159U);
    msg.op = 50U;
    msg.tas2acc_pgain = 0.7929357866733626;
    msg.bank2p_pgain = 0.3801934398228968;

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
    msg.setTimeStamp(0.6943150078879551);
    msg.setSource(11710U);
    msg.setSourceEntity(92U);
    msg.setDestination(32473U);
    msg.setDestinationEntity(138U);
    msg.op = 35U;
    msg.tas2acc_pgain = 0.9495040645199894;
    msg.bank2p_pgain = 0.46283922330644767;

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
    msg.setTimeStamp(0.8919856561863746);
    msg.setSource(14429U);
    msg.setSourceEntity(103U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(233U);
    msg.op = 234U;
    msg.tas2acc_pgain = 0.6431124135803068;
    msg.bank2p_pgain = 0.23189137237668656;

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
    msg.setTimeStamp(0.1451933275588111);
    msg.setSource(36584U);
    msg.setSourceEntity(133U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(78U);
    msg.available = 1648764462U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.98671228590519);
    msg.setSource(9566U);
    msg.setSourceEntity(96U);
    msg.setDestination(47784U);
    msg.setDestinationEntity(69U);
    msg.available = 1878102547U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.494640687579719);
    msg.setSource(13313U);
    msg.setSourceEntity(25U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(214U);
    msg.available = 163392710U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.3365522672247293);
    msg.setSource(52755U);
    msg.setSourceEntity(28U);
    msg.setDestination(54699U);
    msg.setDestinationEntity(241U);
    msg.op = 150U;
    msg.snapshot.assign("EPJASOKLERZTSJNRSHPJ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 12120U;
    tmp_msg_0.lat = 0.48578089201765084;
    tmp_msg_0.lon = 0.9392731771692766;
    tmp_msg_0.z = 0.2807742355209748;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.speed = 0.8548434506533079;
    tmp_msg_0.speed_units = 37U;
    tmp_msg_0.custom.assign("ATYEJNGZABLQPTEYMXFWWTIADJGDKOOACLUGOZGQQKDIFZVZLYEXSAFJRBJBJCUOFKVMQBXVSJRAUKDSONTIHQDBMGFKPKBLDHZRRCZVESQSAVXLKGHWHXKQSBNFUWJNYRFPEHXFISBISJHVPWMMRCGUM");
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
    msg.setTimeStamp(0.6327996155169795);
    msg.setSource(4566U);
    msg.setSourceEntity(159U);
    msg.setDestination(10930U);
    msg.setDestinationEntity(126U);
    msg.op = 235U;
    msg.snapshot.assign("HMTFBHVLCNRMOQWGMKMESRICEUFCSBRXBXEJXZATSLONTQNJVUYUZTJXVATFEWNDBKFQVQLAYXSJOLJIEILZMFYCAVNXLFQNZIPGMZCCGOYPKODYQDIOGPTCSRYBNCWGEWGPTZIYHRHGZXFLBRHEUTPAVPZDVSDEIXSMOFUJROLJGBRHHMFLYJQ");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5621316970001131;
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
    msg.setTimeStamp(0.4553814556211242);
    msg.setSource(15439U);
    msg.setSourceEntity(174U);
    msg.setDestination(38868U);
    msg.setDestinationEntity(171U);
    msg.op = 28U;
    msg.snapshot.assign("AATCPXSCHDUFPDAKCQCJHYXOPKCGAQCMJTBLFZHGKKKVUPJXRJBHQDGQAYORYQHSEXGEFBHIMQBKDZJZRWPGXSYMLBNNPDPCWGKEOHONRK");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 57205U;
    tmp_msg_0.sys_dst.assign("BOAKTBNVANPQGRYZIWQOAMVIWEWJRGKXTCTL");
    tmp_msg_0.flags = 233U;
    const char tmp_tmp_msg_0_0[] = {53, 122, -90, 101, -118, -45, -114, 74, -100, 97, -53, 17, 90, -12, -12, 108, -79, 78, 96, 20, -30, -39, 109, -52, 26, 30, -120, -80, -45, -106, -11, 115, 32, -127, 76, -31, 117, 9, 0, 51, 48, -119, -66, 58, -9, -90, 112, -44, -24, 33, -58, 29, -33, -40, -31, 39, -87, -103, 37, -8, -32, 35, 78, 38, 123, -7, -86, 73, 81, -80, 11, -26, -12, -115, -92, -113, -42, -128, 95, 122, 54, 1, -101, -28, 121, -110, -47, 8, 21, 47, 115, -74, -107, 45, -56, -114, -32, 87, -11, 101, -25, -72, -36, -91, 85, 38, 120, -21, 82, 9, 74, 38, 71, 58, -121, -124, 14, -94, 10, 122, 41, -113, -39, -99, 40, -90, 111, 60, -72, -69, 58, -108, -46, -107, 111, 78, -50, 66, 106, -112, 126, 114, 93, -116, 91, 67, -120, -73, 20, 44, 6, 72, 97, 102, 9, 90, -118, -105, 5, -51, -75, -22, -36, -68, -41, 47, -65, 9, -7, -29, 32, 36, -70, -104, -90, -106, 105, -110, 56, -2, -61, -33};
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
    msg.setTimeStamp(0.30586002648383603);
    msg.setSource(12869U);
    msg.setSourceEntity(162U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(67U);
    msg.op = 250U;
    msg.name.assign("MEABXORKTIMELOHQEMBCNGIUDCVKDYZPZBIOZHAW");

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
    msg.setTimeStamp(0.5722438221660722);
    msg.setSource(12623U);
    msg.setSourceEntity(87U);
    msg.setDestination(37378U);
    msg.setDestinationEntity(103U);
    msg.op = 170U;
    msg.name.assign("LYXCYXIKLOWEVVJRCFDUZJRFNTGSLMOUILCDMWSOMZJUTKIQORQCPYTEQVPRWASTAQUJECUPEINNXYSGZBWAPBHVQSPPAHUVLIGCAQVHRDFKTTMRKSKIF");

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
    msg.setTimeStamp(0.8771653657358809);
    msg.setSource(36636U);
    msg.setSourceEntity(146U);
    msg.setDestination(43159U);
    msg.setDestinationEntity(94U);
    msg.op = 250U;
    msg.name.assign("ODSWLXXTQUYHCAJXLSBXPVEEWRMDMYSYVLKZEJIMINMTGJHRIOXGBOOCUZPIRYH");

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
    msg.setTimeStamp(0.4923402878232688);
    msg.setSource(31039U);
    msg.setSourceEntity(146U);
    msg.setDestination(60046U);
    msg.setDestinationEntity(233U);
    msg.type = 122U;
    msg.htime = 0.18030551258452077;
    msg.context.assign("UILDZLVHNGTFMUFPTUUFUHKPJKYCHGXBYCGGUALMZWILCIZQMFVKXMTKEVIVWTIQQGZNRPRWDTUKEOMMGSNPIZRCGMIAZXNWURGOEDCVQJHEJXBCWYPWKISRBAXPHXBMDBTBBAGIEJCJPDCYTXWQSANSPORNABNVIZVJKOOHJHXBZKSVQOCOFS");
    msg.text.assign("NSWJLFGGJASRKQSMCOOVRPGBIXOOTIADWCNWTQQBCZBXMLSUHIDYXYEK");

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
    msg.setTimeStamp(0.6497589069350362);
    msg.setSource(7293U);
    msg.setSourceEntity(112U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(141U);
    msg.type = 22U;
    msg.htime = 0.3586419903088294;
    msg.context.assign("MAOSIOYVMGPSLLYVAPMCLRWKYNOFPXQCAVALAZIAKKRLSXKRRZCIWXBVNJDWPBNNUMABGFBUGTKVKEMOTQXDJJXRQZDXQTLISOUWOPHUFHKYGSMCXLFTYZRICDHBSMREOKEITYESFQDKAJFFYBBHLNHXJJGACPTNEFMNNWJEHVJKTUAPHSGVRJEVQWURBCIHGNEDTUZYDNZYFOCETXPDWUPBYWVQUSZMWIUQ");
    msg.text.assign("FSWTZLTIAXNMXNJEPFDUHCHUPGAXPPOKRLSSFWWSODQUUZQRAXBQRJAOFLALQKIJBBMRUCLEDNHIMARJPZGNXMGLHQVDTDZWMESGSWBHQQCDFEEYHHSSUDBDTKJNPCRNKWOFNKHAIUNXBLMRCIKEZVKHJFXUKWPDOUQKSYPFVTIYXCGQZEBRVVCWVGWXYVITZCTRCNZYXVIDYJGTJQBLOEJFPVTTOLS");

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
    msg.setTimeStamp(0.5451515921579851);
    msg.setSource(34977U);
    msg.setSourceEntity(207U);
    msg.setDestination(24403U);
    msg.setDestinationEntity(154U);
    msg.type = 88U;
    msg.htime = 0.9395269228752194;
    msg.context.assign("ETPUMYROIBZEWAWXXKBXWCRKHGMMGCZXJATCJOWGASUKSARSEVGBWETJKLNGNRXLAJZIPZNJAQYCRZNFFSWOEHMVVLWNUXFNRDFLAOSAPCNGETVEYNLUI");
    msg.text.assign("WWEVHNTRUZVRMWHZUZORIUHKPVQMFBOYPNXWUHFYAMNTGYXPGFWNJERJRKDTBELPKCCMEJJWGETVYNGICZQRLQOBIMAKDUBIESUNJISHIJSWLQKGXFVYFHOECDTOVSCLVOWNGQDUPRDYRKBZZUFXYBPIECZRNABSTLDHXBOSAVOIJDTLSPAWUALLCFGZCXQLSJVHRIVMQCBGGKFBDPJZOXYCTJPMOYQGXAYXFUENFHTPNSKAWQEMZT");

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
    msg.setTimeStamp(0.16456043661065478);
    msg.setSource(11192U);
    msg.setSourceEntity(240U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(0U);
    msg.command = 240U;
    msg.htime = 0.07938509645233105;

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
    msg.setTimeStamp(0.018586461199642246);
    msg.setSource(26417U);
    msg.setSourceEntity(68U);
    msg.setDestination(11656U);
    msg.setDestinationEntity(39U);
    msg.command = 181U;
    msg.htime = 0.9020193843581827;

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
    msg.setTimeStamp(0.5779951043194651);
    msg.setSource(31180U);
    msg.setSourceEntity(85U);
    msg.setDestination(2417U);
    msg.setDestinationEntity(231U);
    msg.command = 87U;
    msg.htime = 0.4239988922775515;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.htime = 0.6933738157047421;
    tmp_msg_0.context.assign("VSXIRYHBSYFUWMVCMGOOXWXCAQKVVXLNIWKYXFJDHCAEBOZPFTDGZGZWBLBTGHLZDQIBIEHQODWLRCKARSETZLFWULXHNFQLSMYNSZPNGZNGCJOROPUUHLYZPPPHAVPEOFAJJSTYSBTYFAKZNJTTPM");
    tmp_msg_0.text.assign("FQAGLUSXOAISTITDLHAVEKEHMWDPJLTOBYONVLDPYSCGLUXGRBRMOLUKYOHWYUWDPYFDVETBTNUJXDDKQJHZKMRPPQUICIHWRXMGPEFIEZXYQFKPKLJCDAJBGGZMIHCFMSQFJLCZHXYZWXMGGBGBSPCNSQZKSRAARTYPRKVJCOTOFBGCWDHERAIWSIYURTLEMNVQWAVZCJUKVJMANAUEHVUQDO");
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
    msg.setTimeStamp(0.635058677131739);
    msg.setSource(33940U);
    msg.setSourceEntity(47U);
    msg.setDestination(16243U);
    msg.setDestinationEntity(109U);
    msg.op = 55U;
    msg.file.assign("QQJUNCGEAIJZORUMIXCIVSSYSTKZHBYYIMYVPDCWCQXALIIJXZOMILKKMLWIGXBAJPVERBBREDAXCYLTVCWTTSUMAZZJVOPUHPWCYPEGMEWBAUNZLDBVDZDMNTDVAKYOPPXYUFTWVHZMABGKRNTJPWKFQUFJNYFQSFRSETOLDMBBGNXRHVNKTGCEUQOFGOUOSXIAQHWJCLZELNBKEQNSFKFNRAPGWHGRXZKJROSDUYDPRLLHXJEC");

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
    msg.setTimeStamp(0.11400436549875037);
    msg.setSource(47031U);
    msg.setSourceEntity(238U);
    msg.setDestination(6460U);
    msg.setDestinationEntity(243U);
    msg.op = 194U;
    msg.file.assign("JJYPHDFRYJCQMNNUQLHOFUJKKVXZMHBFQESGTGIAXYNUMCLOICEJFPHUENFQYTBZXAIPRUHVXSERFCBQEVZCPBGWDGSNQUTDCNVIVHOKTFXDZSLJYHXSPOJVDEBAHBPUUPYRTWGAVBNRKUULLYEDPGLRMYKKPZSHKCLWAKXCJIXOKDAWLVWWIPTOONGMSRZABNMDDTOWAGQABTMYMRFJYOIMEOFNWITDFIGBSXSRJQXWQLZZTKZZHQEMEVV");

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
    msg.setTimeStamp(0.06429849978801794);
    msg.setSource(55862U);
    msg.setSourceEntity(28U);
    msg.setDestination(37365U);
    msg.setDestinationEntity(148U);
    msg.op = 146U;
    msg.file.assign("DXPJIVUIRNPMJNVWLJOEDYLYKBRQCQENDHRJHEESRUOKWIUUIAMGDTDEAKZSMFLCSTLVCJVPFLAUHJUMEYEYSOVSFYOQDMAODQYQLXCURNZXAMHBUQDMGQZBNGWGWIROWRKVLJPZDGHUWKYSFXTXMPVZOXBTMFFJNEFHITBCSZBZBIJOZBGIROWGVKFAPXFPWYTVGYZEACXKNPQL");

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
    msg.setTimeStamp(0.33929362443002065);
    msg.setSource(12953U);
    msg.setSourceEntity(145U);
    msg.setDestination(21627U);
    msg.setDestinationEntity(200U);
    msg.op = 172U;
    msg.clock = 0.3852793709129546;
    msg.tz = -116;

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
    msg.setTimeStamp(0.8294010511446357);
    msg.setSource(44468U);
    msg.setSourceEntity(220U);
    msg.setDestination(18308U);
    msg.setDestinationEntity(113U);
    msg.op = 145U;
    msg.clock = 0.8878627499846627;
    msg.tz = 101;

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
    msg.setTimeStamp(0.09298475986210608);
    msg.setSource(39922U);
    msg.setSourceEntity(121U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(121U);
    msg.op = 172U;
    msg.clock = 0.3135178966184615;
    msg.tz = -55;

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
    msg.setTimeStamp(0.09748584712989683);
    msg.setSource(28305U);
    msg.setSourceEntity(44U);
    msg.setDestination(2023U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.0026692457922307122);
    msg.setSource(50291U);
    msg.setSourceEntity(196U);
    msg.setDestination(45177U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.4498883820597359);
    msg.setSource(59084U);
    msg.setSourceEntity(50U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.996856813653396);
    msg.setSource(34497U);
    msg.setSourceEntity(4U);
    msg.setDestination(22U);
    msg.setDestinationEntity(92U);
    msg.sys_name.assign("JUOUCVLDWPPIWPIVSCJOCMPYGIBLBSNWGFDAULTRMYJPOIDCQWWO");
    msg.sys_type = 199U;
    msg.owner = 57411U;
    msg.lat = 0.646345881473949;
    msg.lon = 0.044507393828841946;
    msg.height = 0.9200587052926614;
    msg.services.assign("VLRFSYNFMJNXPTRBSWSDAISRGTFPBFUTOUPS");

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
    msg.setTimeStamp(0.444192099725888);
    msg.setSource(18831U);
    msg.setSourceEntity(122U);
    msg.setDestination(49038U);
    msg.setDestinationEntity(223U);
    msg.sys_name.assign("IBYXRZTNOIGCNFDJBMKSYZZPIJASWFYBJHGBHVTAPFIDPHKCLRFECIDIALOSGMJOCAYPPWZWOBCHAHREFKGQFLESONBKUTVRECUNQKNMMOZLUNQJDUIIVSXELASBYBAFTBLZRJLXSUN");
    msg.sys_type = 100U;
    msg.owner = 20337U;
    msg.lat = 0.05396698870891625;
    msg.lon = 0.532635664751144;
    msg.height = 0.33322305381200334;
    msg.services.assign("VYPDUCMHFHSYJSQOYSNIEWZPXJUZKEOTLWINVOTJUERSYYPFBYSUNWCEPBMXJVICDZVKBVCLGJGGUNGVAFJAXRWQHAKHDGGLBBEGOMEBJZLTRQLXQRBMPZNGFPOQDTWZJAJTLOYBFXSKNQTYRELIQOZRZMVKAUMRTBUWSZKIVGCPDFJURTHUEKNAKSCASDFNZIRHGDONHMXLKVDWUPSOACHCQQDPR");

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
    msg.setTimeStamp(0.575863007944838);
    msg.setSource(31094U);
    msg.setSourceEntity(137U);
    msg.setDestination(25015U);
    msg.setDestinationEntity(86U);
    msg.sys_name.assign("KNXRYRPWUPHQUZXMGPOLYCPDPGFDMTYVGCRRAQMKSGIJVZEQALYIZJBKMCCJEUQLWSNKCRGXKYGFY");
    msg.sys_type = 25U;
    msg.owner = 30046U;
    msg.lat = 0.29045486930123343;
    msg.lon = 0.2509888829558763;
    msg.height = 0.7814432513046267;
    msg.services.assign("TMJHHACKQNNPSJMVZEGMRCVEKEXWCGOFXMIGRKZWHNEAGOAWM");

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
    msg.setTimeStamp(0.4443413602627563);
    msg.setSource(39748U);
    msg.setSourceEntity(44U);
    msg.setDestination(21881U);
    msg.setDestinationEntity(249U);
    msg.service.assign("PLCVSUQPWVMNMILENSEYQVQTUHYWBO");
    msg.service_type = 133U;

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
    msg.setTimeStamp(0.8358221732472843);
    msg.setSource(608U);
    msg.setSourceEntity(121U);
    msg.setDestination(59749U);
    msg.setDestinationEntity(225U);
    msg.service.assign("YBWODLOZLPSHJMOBNAVTUEDRXADMBCFIZMIATMQNETOGABVWAQZMGBTYNTWHJHORZJLVSSAJPPIAPFUURJDLYNLYZKEFPFTDKQKYEGMVHDQI");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.17523466601647741);
    msg.setSource(50443U);
    msg.setSourceEntity(124U);
    msg.setDestination(55371U);
    msg.setDestinationEntity(235U);
    msg.service.assign("RULCXQETOCBFDQCUAYQQNCYPTHVLEQXRKOTRXVACZZIWOSHWDVSBKW");
    msg.service_type = 218U;

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
    msg.setTimeStamp(0.9524675026530981);
    msg.setSource(51542U);
    msg.setSourceEntity(195U);
    msg.setDestination(33553U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9199671490316942;

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
    msg.setTimeStamp(0.047387427983233366);
    msg.setSource(45639U);
    msg.setSourceEntity(6U);
    msg.setDestination(36044U);
    msg.setDestinationEntity(142U);
    msg.value = 0.19753849528713396;

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
    msg.setTimeStamp(0.5902408183701086);
    msg.setSource(49441U);
    msg.setSourceEntity(78U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(156U);
    msg.value = 0.43866133533902874;

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
    msg.setTimeStamp(0.5609506018630033);
    msg.setSource(53000U);
    msg.setSourceEntity(65U);
    msg.setDestination(63578U);
    msg.setDestinationEntity(49U);
    msg.value = 0.1139135679668909;

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
    msg.setTimeStamp(0.61157519764936);
    msg.setSource(43451U);
    msg.setSourceEntity(73U);
    msg.setDestination(51683U);
    msg.setDestinationEntity(173U);
    msg.value = 0.4310784412191443;

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
    msg.setTimeStamp(0.5041785815893435);
    msg.setSource(26857U);
    msg.setSourceEntity(179U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(196U);
    msg.value = 0.13547712051971195;

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
    msg.setTimeStamp(0.5807092758117276);
    msg.setSource(45033U);
    msg.setSourceEntity(149U);
    msg.setDestination(50057U);
    msg.setDestinationEntity(58U);
    msg.value = 0.09856926491217399;

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
    msg.setTimeStamp(0.435043376626736);
    msg.setSource(4714U);
    msg.setSourceEntity(164U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7869776650987444;

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
    msg.setTimeStamp(0.90548723215906);
    msg.setSource(40160U);
    msg.setSourceEntity(98U);
    msg.setDestination(15719U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9622863769019624;

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
    msg.setTimeStamp(0.27579796229709974);
    msg.setSource(46583U);
    msg.setSourceEntity(129U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(219U);
    msg.number.assign("DTAMJXMWUYGOLZVEMSFKZGUIDJRRUKTIHPNP");
    msg.timeout = 56558U;
    msg.contents.assign("GNXWHOYVKOMFSIVQQMIKMAEZCJLAKNPUZCULVXZNKISFXBPEVYTIPHPHLFRLOVFQKDQVTZQLTORRDLZTYZNXRFHKAJRYKZHGEROJGLDZJUYPUXUNTDXJXEMEOAQ");

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
    msg.setTimeStamp(0.5399066719089077);
    msg.setSource(33153U);
    msg.setSourceEntity(74U);
    msg.setDestination(47387U);
    msg.setDestinationEntity(17U);
    msg.number.assign("ZUYHAVWLNTHQZSIHYX");
    msg.timeout = 54992U;
    msg.contents.assign("KCVFJGEYMRJLXJZNDJIKXVXGMZHVUWRD");

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
    msg.setTimeStamp(0.2903497354305704);
    msg.setSource(39736U);
    msg.setSourceEntity(66U);
    msg.setDestination(53869U);
    msg.setDestinationEntity(66U);
    msg.number.assign("JVPQSBHLEAZTKWQMVAQQTSNHCZBEXCBIAGUKYSNYJURXYBXQYTBDKJIRRWFWPZFAILRKMZSKRNNUFBLHFOMUASQWFTRNJUEIVLYTDTCSYWKVCEVJVMQHPXHLZALRGOVYWYFXCKEAFXJPMMCHWZFSURJ");
    msg.timeout = 4642U;
    msg.contents.assign("UOXHFUIHIUIRNNDZPIXCKUGPIEFBXCZEFJGPZBBMJWVAUFWEOXSMDMNYHUPJEWSTOSGRGDGKIDQYPVPTJIALWXVOQYYVQSCLAKJOXWTASJBTBFNADMDYTAWXTCHMXHLKKKYOLZZBLLRBGSAYCFIYNQKLDPOQWGELXJCYAVCSTCRVQZWACDEFPDNKRGPMOUSZGJNTXGOEBRRHLZJR");

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
    msg.setTimeStamp(0.043924007234375395);
    msg.setSource(8448U);
    msg.setSourceEntity(161U);
    msg.setDestination(51046U);
    msg.setDestinationEntity(223U);
    msg.seq = 1634294854U;
    msg.destination.assign("BFTLMANDUMXTVQWZSABIYQJKEDPRRWMJNPIATKCDLRJBZGHPQROFXXRNCZDZSCVIBZHLNTEFYBJMYLLDXCERDHGOJFKFRWYVLSZQHXNPOMPQGFPUBRSITGBMJBFTVSIWGZLGYKHNSKLHNWJXUGCZXVOUIWOTMUYKATVQEEEGHTAKENMVOAGPNYZVIRQCJTCSLXUVPMUYWWCQDAOOKDQFUPSYDCVEESKQJHSHLRBIFCXWAOMJ");
    msg.timeout = 65164U;
    const char tmp_msg_0[] = {73, -23, -18, -34, -81, -94, 29, 2, -34, 86, -1, 126, -4, 91, 41, 105, -120, 12, -92, -76, 35, 87, -80, -23, 126, 46, -20, 74, 3, 116, -128, 36, -60, -13, 54, 4, 68, -57, -48, 6, 86, 39, 122, -72, -95, 36, 102, 84, 78, 52, -48, 72, 77, -7, -20, 124, -23, -13, -97, 63, -89, 7, -14, 90, 62, 49, -52, -100, 101, 12, -21, 101, 1, 22, 44, -116, -60, -128, 56, 70, -21, -8, -80, -114, -114};
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
    msg.setTimeStamp(0.09785305549480516);
    msg.setSource(44861U);
    msg.setSourceEntity(217U);
    msg.setDestination(30211U);
    msg.setDestinationEntity(5U);
    msg.seq = 4197370300U;
    msg.destination.assign("QKMTWHVWCKCCCRTASGZNNHDRGBYNINLLOUEZZILZFGYIQFNTJKXSNVRGSRPOBOIAEZEFYQEHDKAVIVZKEJWWWZNTXORUPHPGDUQAYFNYPTJUABCSSHIMRFOJQPBHDRYZPPAU");
    msg.timeout = 65182U;
    const char tmp_msg_0[] = {-86, -17, -13, -91, -21, 66, 49, 100, 9, 110, -111, 80, 36, -53, -31, 12, 42, 79, 30, 118, 107, 31, 71, 108, -97, -101, -98, 1, -53, 6, 95, 121, 64, 74, -63, -36, -123, -63, 84, 80, 97, 83, -1, -53, 109, 60, 119, 95, 50, -128, 48, 73, 36, 1, 78, 86, -106, -41, -85, -85, 63, 48, -34, -23, 18, 123, 58, -26, -111, 65, -35, -88, 66, -9, 13, 80, -123, -44, -22, 114, -60, -37, -6, 94, 3, 74, 120, -1, 119, 39, 23, -8, -64, 107, -73, 43, -88, -48, -57, 117, -64, 17, 24, -110, 94, 70, 52, -124, -99, 100, -7, -97, 19, -8, -19, -93, 28, 125, 69};
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
    msg.setTimeStamp(0.6187416679602976);
    msg.setSource(37099U);
    msg.setSourceEntity(14U);
    msg.setDestination(40305U);
    msg.setDestinationEntity(161U);
    msg.seq = 1927341065U;
    msg.destination.assign("FJFKSDWXBWPZKFCWDWKUBYMYMBGHYQASRSMVEMZIUASJZSUHPOYVDGSKGUBWKJHLZEYONZVDIQASMNEGHEDRHMHCFDIFYZJLJNOPEMYZYNRGFEILUKASWKMWPCJOOKXJHBJRTJXQDGGLUPANOQFSIOXHTEXACDENHIPXDHIVUNPFA");
    msg.timeout = 31737U;
    const char tmp_msg_0[] = {93, -107, 100, -95, -1, -102, 12, 7, -33, -79, -91, 119, -16, -48, 126, 98, 33, 46, -98, -106, -83, -111, 90, -62, -44, -49, -91, 21, -95, -1, 30, 30, 94, 14, -84, -32, -111, -109, 0, 49, 53, -33, 86, -96, 91, 33, -123, -4, 93, 51, 12, 74, 119, -92, -1, -22, 101, 45, -70, -62, 30, 110, 93, -41, -60, -24, 116, 121, 111, 18, -50, -111, -71, -34, 43, -89, -126, -117, 56, -35, -27, -62, 13, 97, 7, 35, -57, 105, 107, 119, -88, 76, -83, -109, 72, -124, 48, -80, 96, 108, -107, -16, 29, 42, -45, 124, -54, -85, -42, -4, 69, -94, -36, 103, 5, 98, -16, 5, 79, -33, 10, -92, 88, 0, 12, -12, 51, -48, -28, -90, 100, 33, -18, 82, -35, -45, -40, 35, 0, 56, 13, -65, -58, 28, -118, 63, 57, 122, -28, -91, 33, 16, 80, -75, 68, -3, 50, 1, -60, 92, -77, -113, 46, 73, -115, 74, -47, -77, 78, -116, -58, 113, 46, 109, -98, -107, -1, -21, -118, -31, -78, 91, -4, -57, -47, -30, -110, 88, 99, 80, 65, 114, 34, 51, 86, 83, 47, 2, 7, 11, -60, 88, -73, -96, -3, -19, 90, -107, -100, 46};
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
    msg.setTimeStamp(0.9521637004468841);
    msg.setSource(23836U);
    msg.setSourceEntity(30U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(90U);
    msg.source.assign("CNQPKWYHETPUSDIWMWNETKYVHPPSQYLMIRURRRQEBEZJKBXOJVNFMAQGSMVDGQCEGAWVURLBKTCXZYUDUGVVMRPZQBZAXTBZDAGSPUBBYFIVAIHNPEPMQLTRDCFLNMOCCYXESLIOMZBZKJJLOGOFWLYUSWUQCWFUYTCGIBFJVHDZFHTRHNHYDMJHBSSISYNELNTEAKPX");
    const char tmp_msg_0[] = {-52, -81, 22, -8, 90, 84, 37, 82, -99, -47, -22, -106, -108, 70, -77, 29, -72, -11, -37, 68, 121, -2, 65, 87, -88, -78, -15, 5, 82, -47, 116, 122};
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
    msg.setTimeStamp(0.15584807793009525);
    msg.setSource(52818U);
    msg.setSourceEntity(137U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(34U);
    msg.source.assign("PNHPRCXYIYMARBXMKIRXTEEMGZIKFWLROJBAFYIGWJVREQVUEDI");
    const char tmp_msg_0[] = {-19, -3, -120, -22, -10, 97, -68, -121, -84, 58, 19, -45, -28, -33, -55, 65, 31, 81, 126, -34, -59, -71, -52, 16, -4, -54, 57, 1, -118, -58, -86, 83, -17, -74, -8, -91, 81, -18, -116, -123, 6, 49, -38, -105, 48, 32, 110, -108, 19, 96, 87, 54, 92, -4, -61, 66, 50, -119, 96, 5, 55, -113, 37, 107, 82, -41, 125, 72, 9, 21};
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
    msg.setTimeStamp(0.9103307380951745);
    msg.setSource(36830U);
    msg.setSourceEntity(110U);
    msg.setDestination(54826U);
    msg.setDestinationEntity(248U);
    msg.source.assign("UODQANNNDWSGBEQUJTMLBMJXPJIGJGJRBLTOGSNOLEGMDQVITLNHOISVRBRFEXCFDPCZPFKMHTWSXFWYWSIDAOSVLBFCXGAASEVIANYCUXUKPYHORPYVFXEZCZDSHCLBZSEKHJVQZTVRHKTWQFDWXVRPJKHGXIJMKRFJLUWHTYFNWZBUEGAIODTBKJVYYISCHQWMAMZCGBOZQMWUHQQLZKRTORZYPIFNVKT");
    const char tmp_msg_0[] = {114, 104, -96, 34, -96, 27, -84, -68, 92, -33, -48, 115, -8, -124, -123, 1, 8, 72, -90, 46, -61, 28, 7, -123, 49, 44, -68, -10, -64, 18, 25, 2, -106, 106, 6, 97, -20, 40, -48, 57, 51, -1, 38, -45, 61, -12, -98, -38, -57, -82, 81, 38, -98, 53, 53, 50, 22, -71, -111, 86, -97, 56, 4, -96, -28, 42, -118, 22, 62, 69, 24, 113, 49, -72, 68, 113, 118, 13, -3, -86, 104, -2, 55, -61, 66, -113, 34, -65, 3, -108, 123, 126, 123, -121, -104, -71, 94, 50, 28, -23, 3, 2, 1, 25, -119, 86, -85, -94, -127, -117, -84, -17, -19, 38, 86, 98, -24, -107, 113, 78, 69, -83, 23, -48, -109, -46, -63, 75, 87, 111, -54, 117, 5, -123, -42, -95, 126, -107, -105, 58, -71, -82, -1, 42, 48, 65, -6, -84, -71, 102, -67, -90, -77, -103, 12, -117, -41, -102, 101, -54, 28, 71, -13, 98, 37, 23, 65, -125, -14, -100, -34, -36, -6, -54, -12, 31, -53, -44, 25, -94, 70, -41, 123, -12, 99, 32, 42, -85};
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
    msg.setTimeStamp(0.9633866149436551);
    msg.setSource(20524U);
    msg.setSourceEntity(25U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(151U);
    msg.seq = 491416439U;
    msg.state = 149U;
    msg.error.assign("QQWPTIDUSOYZSRKFBFVMWTCRRBRCTHBSIMLQQVRBSLVQJGBPWXITLMSJVEQIEXDPHSHHWLLAMFKVKEYQEDCDFRZLHEUHPIEMGJWROAPCDU");

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
    msg.setTimeStamp(0.550182600726975);
    msg.setSource(14218U);
    msg.setSourceEntity(34U);
    msg.setDestination(58031U);
    msg.setDestinationEntity(80U);
    msg.seq = 2321452441U;
    msg.state = 217U;
    msg.error.assign("RJRTRMKFGUXAALZQSLEBZZVXWQCINXWYHWUQWVLOQFJODTCNDZKOREYFULSZYHNJNEVGKPOLDKAACXVKUBXOMFNSJIBMZIOHTZJMCUIGJXYMRIRJPPUHAYINUWCKWDEEJTMESCFASHWC");

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
    msg.setTimeStamp(0.07815115925490534);
    msg.setSource(42614U);
    msg.setSourceEntity(13U);
    msg.setDestination(22245U);
    msg.setDestinationEntity(12U);
    msg.seq = 890583328U;
    msg.state = 209U;
    msg.error.assign("JODWQVDJGSYGMWFJEWYIANDWAIYINCBFRUKTMJQOCPQSFCTEOZLYCECQRVYXGUTMRNBGZULGTXHACPBDYRKNALC");

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
    msg.setTimeStamp(0.5058955602123495);
    msg.setSource(49177U);
    msg.setSourceEntity(56U);
    msg.setDestination(9258U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("WQSDLJDFQRXDJKLJOIYGFNYVBJYRXQYWQFCOOGPKLTZHFLEUGMWPLLNMUVFPCBEFAMTJMHBZDNKJQEOZPPODQRWXLXZCWKKYFZFVHFHMXSCEYZATRKBIYVSJSDNGUXHESIWAASUKRTXJSFRSDSIXABVKYALZTQJTAICGEWRQEDOCIRVULAVKDWNZHMHGGMDTPUNNYBHVIMTZNBKIYWPGNXQ");
    msg.text.assign("BAFXEJDRBSYMKRGUTGGU");

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
    msg.setTimeStamp(0.5427664376185054);
    msg.setSource(40476U);
    msg.setSourceEntity(27U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(183U);
    msg.origin.assign("CDGAQEIQDMTYTFLRWLDDTUKJBRVDQVAVVLYSPXWALOBLBGNAHPTZQZNIYDRDMYAFMGPWLXJKSQAMCUMYMUERUGQCCFRBUXBXXMOIZZTHHHDLPNCNEFAJLNKQEBWJUXFFVEOZPEXNNJHKZXWFOISZPOSOPANQRDELETVGI");
    msg.text.assign("PTPHYORGVUZYMIJQBNQYGRDQPCFNDFNFRGMUKSWJRMCIWWPLXTTHCALDYBNZKVDOUUYOFDHDXAXQCLATGLGBLHEFHXRZGUSNQHRX");

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
    msg.setTimeStamp(0.6326293287940353);
    msg.setSource(5014U);
    msg.setSourceEntity(114U);
    msg.setDestination(12968U);
    msg.setDestinationEntity(80U);
    msg.origin.assign("UQCXEZHXSVFKZOVOMUFXXXBRFVEWPBMQFEAJOEQHIXUQGNSCTNAPWIIGPJTNDMGVRLIHSCTOJKBZRUKABKYEWTMCKHRANFKVJYIEUQUZSHMPSCJDOFMBVYLNYGWCLHKDNEDHNBWKRMQISQKTMAFGDFXGUGADLWOBUIJRGNSBHQVTIYWCRXPERZMBIZPWZOLTOEAZNPZUHVYNVO");
    msg.text.assign("GDVWGWSGBESARHQTLNVDZZTEMYWQHXAXZFKYJJQMUDRCIGDOOJZVPCDRBGQEIQVXNHSTMHDOPXTKRJXWHMUIISRXOUWDCIPYGKWVRANNFCHFRBZSSK");

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
    msg.setTimeStamp(0.7300391036749639);
    msg.setSource(33259U);
    msg.setSourceEntity(72U);
    msg.setDestination(7010U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("TRWZBUDHZXURSSFRHYBHFMQSHFACLWSJJXDAILVVZBKTAFLXMAPLWFEGGVROPMTKXHJCMCWPOEJPGOQGZVHUMPBOXQITCZFZSWWCKIQLAORYYTQQBXBEN");
    msg.htime = 0.15827697646781436;
    msg.lat = 0.2132787898175259;
    msg.lon = 0.5241273731912938;
    const char tmp_msg_0[] = {-63, 95, -96, -72, -33, 49, 73, -101, -7, -100, 83, 108, 87, 53, -110, -75, -99, -108, -116, -33, 49, -34, 76, 71, 91, 57, 21, -36, 105, -38, 95, 28, 29, 58, 126, 23, -37, 69, 70, -59, -38, 44, -57, -39, -107, 32, 111, 33, -121, 102, -57, 50, 57, 104, -90, 42, 67, 54, -124, -114, 22, 115, 35, 26, 86, 70, -63, -13, 47, 72, 33, 62, -76, 38, -45, 25, -38, -11, 47, 67, 63, -65, 104, -101, 32, -106, -70, 56, 29, 99, -3, -47, 18, 38, -5, 36, -15, 45, 39, -100, -100, -75, -60, -38, -112, 103, 20, 45, -47, 34, -59, 81, 63, -45, 114, 42, 70, 106, -59, -117, -4, -118, 75, -100, 56};
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
    msg.setTimeStamp(0.5255586839055929);
    msg.setSource(44581U);
    msg.setSourceEntity(194U);
    msg.setDestination(64506U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("EGYXPLJKPOLIMFZIAMRRBOGPVFWWIWCIYNKXEFNTRCAOXZKLTZSSNZHHOLGNXJGUJQEYLTQSRKBBS");
    msg.htime = 0.20848333934138774;
    msg.lat = 0.7281365406291875;
    msg.lon = 0.8284984978888603;
    const char tmp_msg_0[] = {-67, 101, -107, 60, -91, -21, -50, -33, -2, -7, 18, -81, 31, 24, -123, -73, -89, 73, -20, -94, -125, -126, 122, 115, 99, -81, 98, -115, -10, -37, -84, 36, 94, -30, 125, 115, -17, 52, -82, 53, -78, -23, 79, -17, -5, -30, 35, -25, -11, -61, 11, 10, 40, 4, -80, 7, 43, -122, -9, -17, 31, 53, 5, 38, -120, -125, -13, -40, -5, -49, 53, 36, -56, 84, -60, -81, 83, -67, -8, 80, -123, -71, 68, 88, 120, 91, -40, -21, -112, -91, -66, 55, 27, -67, -13, -19, -76, -53, 108, -127, -29, -93, 24, 39, -4, 76, 6, -90, 111, 118, -63, -33, 100, 2, -111, 101, 12, -75, 15, -55, 107, 1, -29, -18, -34, -46, -10, 87, 109, -18, -70, -7, 81, -45, -30, 59, -87, -12, -116, -98, 52, -12, 53, 36, -102, 44, 95, 112, -2, -110, -74, 5, 37, 20, 124, -63, -110, 40, -116, 113, 74, -55, -82, -128, 41, 46, -112, 95, 39, -50, -115, -109, -47, -119, 52, -42, 34, -92, 70, -34, -94, -7, 66, 62, -28, 0, -39, -30, -75, -42, 36, -61, -44, -88, 120, 30, 9, -74, 87, -43, -74, 109, -120, -31, -11, -80, -17, -68, -83, -65, -116, 113, -83, -31, -70, 50, 72, -14, 29, 66, 82, 16, -25, 99, 18, -5, 91, -103, -25, 117, 32, -96, -84, 116, 23, -59, 96, -6, -80, 97};
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
    msg.setTimeStamp(0.08423608467386112);
    msg.setSource(46553U);
    msg.setSourceEntity(38U);
    msg.setDestination(43663U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("JHEIYAKZQPGDUMDHVESOTQICCMVBEBTBLWZJVGNRDBWKIFPMSEEGLUGMITBTSNUQYGAJRBAXOWWNPQLURPXKBOJCCAHPNXZHTDAAOJEALEFYPEKXFURVLMYABSRSRLKILSIJJIHICSUOKXRNFDPQZHRWONEMPYEVJFFMPHGIMZIKYFNHZOVKHXTDCQOQNYTFSGZCPMXTWVWGXHRMZXLDVCDQ");
    msg.htime = 0.19256937327861723;
    msg.lat = 0.5491185498335669;
    msg.lon = 0.24677367971446862;
    const char tmp_msg_0[] = {117, -39, 56, -24, -112, -105, -56, -55, 19, -24, 108, 24, 33, 77, -102, -16, 67, 54, 61, 19, -119, 106, 30, 10, -87, 55, 107, -94, -15, -100};
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
    msg.setTimeStamp(0.9623579733335575);
    msg.setSource(64304U);
    msg.setSourceEntity(83U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(18U);
    msg.req_id = 24481U;
    msg.ttl = 54641U;
    msg.destination.assign("XEBBEUVGBXRHSZVEDWCSWWTOFKIMLYFBYLCPCSATWEGTUZGIBDMOHGZFGMISREKXCVJFBSAVKQRUQMBNOWQVQHPNUUCYNOORDPPLTBWJDHCZUZAJJGOONISROGLEZMPUAFWHDZCUMWVMYQLMBXWARLKJTZXAXPJKBFQTOQNYRYDLNDVTVYLRUEOIIUINZJJNXPLSFVSEAKAZHVFXTKSAHDRYTIPSHFGKXFGT");
    const char tmp_msg_0[] = {-17, 94, -18, -17, 114, 17, -117, 120, 112, 31, 67, 75, -70, -119, 53, -76, -31, 39, -125, -49, 48, -57, -66, 93, 60, 86, -12, 124, -62, 12, 5, -15, -83, -96, -128, 4, -47, 6, -47, -119, 77, 3, 31, -34, -15, 37, -24, -63, -82, 3, 25, -65, 82, 108, 16, -2, 32, 110, 6, -52, 52, -66, -101, 86, 11, 108, -62, 57, -90, 71, -23, 78, 75, -95, 61, 49, 33, -113, 16, -125, -55, 54, -119, -69, 36, -75, -1, -15, 49, 28, -42, -89, -99, 7, 55, 52, -102, -23, 41, 123, 125, 49, -105, 96, -71, 72, -14, -5, -122, -69, 9, 41, -47, 4, -71, 81, -55, -48, 15, -64, -17, -122, -122, 16, 50, 43, -62, -15, 124, 46, -80, 64, -63, 46, 100, -113, 104, 105, -22, 86, 73, -56, -67, 20, 55, 73, -44, -107, 61, 72, 47, 7, -115, -104, -13, 75, 91, -123, -96, 14, 18, 51, -27, 80, 75, 92, 6, 10, 16};
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
    msg.setTimeStamp(0.3252654953878559);
    msg.setSource(12914U);
    msg.setSourceEntity(101U);
    msg.setDestination(38110U);
    msg.setDestinationEntity(54U);
    msg.req_id = 47932U;
    msg.ttl = 53955U;
    msg.destination.assign("DAGKXOALGACQNQQVLLZYAFSOHGVVKHMAYKBDXITZRRGBWRQUPKIIPLJJDUKGQHOPWINKZDANDOOOXCTPNMHRJBWTCYTDNBOEQJUMJXESPFBLBP");
    const char tmp_msg_0[] = {34, 100, 102, -6, 41, 104, -66, -100, 83, -46, 97, -58, -14, 53, -13, 106, 123, -43, -3, -125, 30, 77, 89, 83, 67, -29, 2, -84, 38, -122, 67, -128, -119};
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
    msg.setTimeStamp(0.7601983198567687);
    msg.setSource(30963U);
    msg.setSourceEntity(224U);
    msg.setDestination(34949U);
    msg.setDestinationEntity(57U);
    msg.req_id = 54740U;
    msg.ttl = 18018U;
    msg.destination.assign("LIXDTDHSBGKZOZVCXHTJSYFSJLOGNSTENUHBMQSJKRLVZBQAPKMHIAOXMIUOMBSMXQIEKCZOTIQJXZHDGVKYPYELDLKMXYCHCGKDAFBNEUGLIRRRRGYWGTZVZQESWNYWDIWOTJPHFALFZVJMFOWXDUPUSTNAFZVHADDCSCFEIPZBRCREYPENQAGYUINTLGWRFCITDQNPWSRUFOC");
    const char tmp_msg_0[] = {22, -17, 33, -96, 43, -51, -38, 37, 29, -47, -99, -128, -97, 112, 4, 55, -49, 2, 20, 126, 120, 68, -107, 93, -107, 117, 37, 92, 49, -45, -19, -14, 121, 29, 36, 113, 81, 47, -45, 24, -113, -65, 96, -41, 30, -59, 115, -45, 3, 28, 109, -93, -53, -17, -95, 88, -62, -94, -2, -5, -76, 12, 90, 90, 62, 41, 82, -49, -53, 102, -105, -1, 34, 55, -83, -5, 107, 5, 33, -4, 40, -47, -48, -62, 104, 109, 31, -2, 113, 30, -58, -115, -82, 62, -128, -119, 46, 65, -103, -111, -73, -21, -14, 8, 20, -23, 111, 72, 98, -80, -56, -122, 101, 25, 10, 66, 120, -121, -55, -83, 18, -19, -57, 42, -117, -97, -127, -68, 54, -85, 124, 123, -101, -93, 42, 86, -62, -2, -36, -100, -55, 16, 72, -120, 15, -85, -126, -77, 84, -117, 50, -113, 20, 33, 98, 72, 93, -113, 45, 112, 33, 67, -25, -72, 77, 6, 57, -108, 44, 58, 122, 26, 3, 15, -108, 91, -5, -2, -35, -2, 70, 106, 63, -114, -49, -13, -104, 95, 77, -125, -99, -38, -36, 120, -91, -40, -68, -67, -102, 50, 14, -13, 27, 57, -116, 2, -97, 94, -7, 78, -25, -24, -86, -89, -51, -29, -39, -20, -11, 7, -67, 46, 88, 100, 117, 32, 30, -31, -13, -65};
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
    msg.setTimeStamp(0.3279399994118234);
    msg.setSource(26803U);
    msg.setSourceEntity(29U);
    msg.setDestination(36795U);
    msg.setDestinationEntity(220U);
    msg.req_id = 43857U;
    msg.status = 176U;
    msg.text.assign("AWPDOPILBLYQSWUAGWRICZBRAJGOOQMFYCBCRSVNTXDZCZXGWCVXBFXGEDBQNKTQOYNFLAENSNJPMTJPXNGYQMKDPTYC");

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
    msg.setTimeStamp(0.42622464652925696);
    msg.setSource(23183U);
    msg.setSourceEntity(83U);
    msg.setDestination(15242U);
    msg.setDestinationEntity(100U);
    msg.req_id = 36346U;
    msg.status = 27U;
    msg.text.assign("GVYXLVWBWOOTCHXRCWUBZIWKWSUZNVTINJOJHIIFKDXNPHDCYCNXAPJDALKBCPLBGEEELMPNGZUNETXPCSEXGZQUPFIKMEKZRLGWQBPQRQJMAMNLSLBJTYOQWGYISGVAEFHSUTOIBFEJRFHMPUGZZFXODCRDVRSYTKQCXYAOOMMAQTEUC");

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
    msg.setTimeStamp(0.6884456672974377);
    msg.setSource(50477U);
    msg.setSourceEntity(58U);
    msg.setDestination(22919U);
    msg.setDestinationEntity(60U);
    msg.req_id = 56287U;
    msg.status = 113U;
    msg.text.assign("DTJBOPVEOOIIHIDTYQIACSFUMTVZYLPTQUMIDJWZFWCZLBBQNGEQFTZJHBVHLKFFJJKTPBPJJDFJHGIAOPHRNSRDRMGAQQXVDPLTVROWGNXUIANMHWVTRSZCQNYUJEXNNLAUBKXXPMIBECGSVUMHGKLMGSECAXKERMDOCLOXSZIKYWWCGLHAMOKXGIBKZWSEAVRYJMCOZDFAQNXESUVGFPTCZLUDYEAWHYYKNYYBBQRSNUP");

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
    msg.setTimeStamp(0.8325142849205525);
    msg.setSource(60665U);
    msg.setSourceEntity(149U);
    msg.setDestination(28312U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("YEWKMHVDZPHDJOAVGADLAWJNOMUIOXQIBEMTNQTLIHGPURFJOOXLLJTCAN");
    msg.links = 1333561112U;

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
    msg.setTimeStamp(0.02154047895719835);
    msg.setSource(275U);
    msg.setSourceEntity(58U);
    msg.setDestination(36136U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("GTOPDQXZNZXKZKFKISLRHCPDXIMXULWNMHDMPSCACVNJBGGJNUHIZVS");
    msg.links = 1569445374U;

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
    msg.setTimeStamp(0.9966989198280379);
    msg.setSource(57466U);
    msg.setSourceEntity(31U);
    msg.setDestination(38693U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("GBZWIINLNMNYSWMRYRBGTUNJYLUBPCJPKPEDGQYVFWLEUTMYKHENLAZABSSCDKVDMZTYOKXPHRTKPMKESFJHDZJHUNCGIPCPQOBZTQGWSVTTRIZHLNGDIKXTQIMNCXZJUGFNXUULHRDVYBSIPHBFXOLMYHQQHBIEUHSRXXGWCFOFIYWENSAAKKVJBMVXQOFQPFZMOGWALUZLUOJZCVOPGDWJV");
    msg.links = 1686298240U;

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
    msg.setTimeStamp(0.5548821063113692);
    msg.setSource(42034U);
    msg.setSourceEntity(163U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(4U);
    msg.groupname.assign("PLSJDDLHZWOPRAMOXQQAKSXBBIWEXBNOFMTMNJAWREWZTDXTQKCOFELMYSPCEXNHPNLLZFTVQIYLWEEATTOJJKDPVNFEBNWHJXUZYUKAWDBGBUFHRCRVPOHYZUUJNBSGPQCQKZAIRDCFRFIJRNBEVZYQGSVGUVIIKZISTUZRXDQGVAUMOFSKKBJSMGAXUAEYUYHWIVZVYQDCWGN");
    msg.action = 213U;
    msg.grouplist.assign("TBYADGZAFXSQOGWNEICHYPGNCARBEVGRHLWRYCFLGUHJSFGFVBCKEOWEHSIVJCJUMBW");

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
    msg.setTimeStamp(0.6744003196849181);
    msg.setSource(5082U);
    msg.setSourceEntity(181U);
    msg.setDestination(61814U);
    msg.setDestinationEntity(101U);
    msg.groupname.assign("AWVCHSBMEDITKBRQPTYKNLWPSBJGOUFXGVQOPADNGBKSTQXIMCIXHCWKHAKXWZNGWUZORPTCQEFBDEITMNXJQUGOIUYMHDBQIQMHUHDABHRMGZDJWKLTUFHZRPHVHIFJYCLTFERFGJWZQJCEADDNXGAYYKMYRDOZIVLRERKKFSSPQDEWVOXNZARVXOJBFPGVSKVUFGPCOXVSXCNCQTYUTZLYMREMJPNLNJTOBIYESLZZMASVPWFYLCJU");
    msg.action = 233U;
    msg.grouplist.assign("EPSLKQIOCLASOAIRAPQERCCV");

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
    msg.setTimeStamp(0.9921079994350819);
    msg.setSource(1341U);
    msg.setSourceEntity(177U);
    msg.setDestination(44784U);
    msg.setDestinationEntity(232U);
    msg.groupname.assign("PUGRVNMCBXJFCDTVFYEEILUONLWMWWOWOEVXRVNNFPIOCROKAKBGPADGTZJZMBDNLLFVZHSOYGD");
    msg.action = 85U;
    msg.grouplist.assign("AWGWVARRQKCKBSGKXUNSZRZBKYEXIJRFLSOYVZEIHNULJPFQSISPAHUSIEXDOPTDYLEYIMOHVWCGFQBXWXRPTKAEODVPZHJTFJTKYUBHAVYZZQMEDAURNIQTTNGEQQBYJNLNOGUJTNCSGLNIIDGVVOQFSARKVCPSDPFNJDMTPBJAUFFIERWLDXXXVOYQLPZPUMFMMGMECAJBWKZKMWWOIOHULUZCTTAGBYRGKCBDLJSEHL");

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
    msg.setTimeStamp(0.06968164442891345);
    msg.setSource(5132U);
    msg.setSourceEntity(77U);
    msg.setDestination(55723U);
    msg.setDestinationEntity(241U);
    msg.id = 83U;
    msg.range = 0.8404966531121885;

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
    msg.setTimeStamp(0.7081486608309638);
    msg.setSource(39419U);
    msg.setSourceEntity(48U);
    msg.setDestination(49500U);
    msg.setDestinationEntity(105U);
    msg.id = 160U;
    msg.range = 0.6849088248819667;

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
    msg.setTimeStamp(0.36994941824017635);
    msg.setSource(26258U);
    msg.setSourceEntity(26U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(68U);
    msg.id = 193U;
    msg.range = 0.7935903021666145;

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
    msg.setTimeStamp(0.2790857059358809);
    msg.setSource(17482U);
    msg.setSourceEntity(121U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("RUSOFHTAMABQHLJDEMKRQWZKPAXASPNGMVDIVFLYARXDTYYBJDAQFOJTULJWHCGUPCEIBXECDJPEKDPAYKWCUZUMIZTUZZGIEXTCWODPQQOZALBMTMIM");
    msg.lat = 0.3797728321183589;
    msg.lon = 0.2788785295603661;
    msg.depth = 0.6474826877617753;
    msg.query_channel = 129U;
    msg.reply_channel = 75U;
    msg.transponder_delay = 207U;

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
    msg.setTimeStamp(0.8339515905733832);
    msg.setSource(12173U);
    msg.setSourceEntity(65U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("AZDLRBCEIRVOWBVQFYCTOMPGPJNQVMSKWDUUGVUHKNQIENDGCWEAWPTRFOSOBSGUZJRGKGIPPSKGHVWHHBJQINCYXSHWNZXKMLZQFICHHZPEUTJDTIOBLMCQEXZUFCJJAVHLSOQGGMNKWMCBXIDKBOEMRASFRK");
    msg.lat = 0.40611740483370384;
    msg.lon = 0.2093662087173489;
    msg.depth = 0.29778697570935486;
    msg.query_channel = 150U;
    msg.reply_channel = 37U;
    msg.transponder_delay = 128U;

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
    msg.setTimeStamp(0.5853591864039356);
    msg.setSource(33683U);
    msg.setSourceEntity(219U);
    msg.setDestination(48496U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("XHPKFKSEADYFTCZODYXCFVNQUCAFIWTIXJTBGBMZTZURWYGJMNZCMRMIDJVJQOHHHCIBRSBWPNUJYSLAYXPNTTHZQPNXYJFUREALUMWVUARMOQQGUXFQDIOPLZVBQBVEEZBVLXAKHPOEPDIFOGLYKENJCROWBSSDKNIXHKTBTWPQANWDUJWFGVQPYYCXGLHCEIAZUVIUGTSZASKWYAGE");
    msg.lat = 0.8126612556816306;
    msg.lon = 0.3889594567922574;
    msg.depth = 0.6857015880653003;
    msg.query_channel = 151U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 41U;

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
    msg.setTimeStamp(0.8331722366757605);
    msg.setSource(60353U);
    msg.setSourceEntity(107U);
    msg.setDestination(7679U);
    msg.setDestinationEntity(233U);
    msg.op = 157U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BSDGEAUNNFYXECIQISJWISMLMSZAWATNMSUQUOVZAAHRUNTZBXLYULHAPHOGXBVVPLJWTEVGLXXGKLNPGQFSNXCOZKDYBFTCMDXRGGNDUCFPZFWOSCVCFZUYHJJOXNYVEMIAWHFEYFOFKMOBQTJZKKYCSIJKKVO");
    tmp_msg_0.lat = 0.33362790120968333;
    tmp_msg_0.lon = 0.9958776437307146;
    tmp_msg_0.depth = 0.9749413015581223;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 64U;
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
    msg.setTimeStamp(0.7888314366607801);
    msg.setSource(6949U);
    msg.setSourceEntity(135U);
    msg.setDestination(37418U);
    msg.setDestinationEntity(63U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.412764603630267);
    msg.setSource(10283U);
    msg.setSourceEntity(162U);
    msg.setDestination(20230U);
    msg.setDestinationEntity(101U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.8567174708459661);
    msg.setSource(10656U);
    msg.setSourceEntity(227U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(48U);
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 63U;
    tmp_msg_0.entities.assign("YUGBCCSMNNHJBLECUQFWIMFXEMVWYPHUPBDFACLGCVWUDZDYNHFTYHYRYCU");
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
    msg.setTimeStamp(0.5744231997275618);
    msg.setSource(13684U);
    msg.setSourceEntity(194U);
    msg.setDestination(79U);
    msg.setDestinationEntity(36U);
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54049U;
    tmp_msg_0.off_x = 0.776633438199869;
    tmp_msg_0.off_y = 0.641979596443546;
    tmp_msg_0.off_z = 0.21338669057011828;
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
    msg.setTimeStamp(0.4949890760562764);
    msg.setSource(40392U);
    msg.setSourceEntity(232U);
    msg.setDestination(5100U);
    msg.setDestinationEntity(84U);
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2316919070U;
    tmp_msg_0.start_lat = 0.16035083973878628;
    tmp_msg_0.start_lon = 0.9200104550062105;
    tmp_msg_0.start_z = 0.4124320002732569;
    tmp_msg_0.start_z_units = 13U;
    tmp_msg_0.end_lat = 0.6593881020459116;
    tmp_msg_0.end_lon = 0.8324219164364774;
    tmp_msg_0.end_z = 0.24279835424881102;
    tmp_msg_0.end_z_units = 89U;
    tmp_msg_0.lradius = 0.8321529063137096;
    tmp_msg_0.flags = 165U;
    tmp_msg_0.x = 0.6685749973097127;
    tmp_msg_0.y = 0.6955515781378689;
    tmp_msg_0.z = 0.6350949728918401;
    tmp_msg_0.vx = 0.12684000309966637;
    tmp_msg_0.vy = 0.25855478305493595;
    tmp_msg_0.vz = 0.6755979224555315;
    tmp_msg_0.course_error = 0.41629523454978246;
    tmp_msg_0.eta = 61236U;
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
    msg.setTimeStamp(0.7998394200507729);
    msg.setSource(52682U);
    msg.setSourceEntity(184U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(163U);
    msg.op = 232U;
    msg.system.assign("UXVLAYEVMLZSZBWFIFKYAUMTVSEEOARBRPXCTBEAGMZUAQNCGXIWMZMJIAIOIODVHBSRJKHCLGLQRHDYSGOHLAERMDOUWBNGPUIQPRLVHYFELCGVYPQXHQPJXTIFZNDXYTQJPQTNSXOFYTSUFJKFETRJCQKLSNNIZBMMBTGJYHZCSNPQMELYR");
    msg.range = 0.11706023013450406;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 43U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9441021157020089;
    tmp_tmp_msg_0_0.speed_units = 38U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.033713066632194644;
    tmp_tmp_msg_0_1.z_units = 94U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8028054772405411;
    tmp_msg_0.lon = 0.9596438215024653;
    tmp_msg_0.radius = 0.29464612728127193;
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
    msg.setTimeStamp(0.948574698380033);
    msg.setSource(19173U);
    msg.setSourceEntity(202U);
    msg.setDestination(43623U);
    msg.setDestinationEntity(40U);
    msg.op = 25U;
    msg.system.assign("UBOGIRWJXSGZDCUPWUHVGXTELQMAGSVBT");
    msg.range = 0.6907947644518706;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 2333982246U;
    tmp_msg_0.lat = 0.9007928706197452;
    tmp_msg_0.lon = 0.42639224114516894;
    tmp_msg_0.height_ell = 0.5541738268269149;
    tmp_msg_0.height_sea = 0.4302616539157629;
    tmp_msg_0.hacc = 0.8001385169663966;
    tmp_msg_0.vacc = 0.10159766871244946;
    tmp_msg_0.vel_n = 0.009667631331370496;
    tmp_msg_0.vel_e = 0.9484137231428416;
    tmp_msg_0.vel_d = 0.3154633709857333;
    tmp_msg_0.speed = 0.12284092307477545;
    tmp_msg_0.gspeed = 0.058625037668212254;
    tmp_msg_0.heading = 0.37154827228361487;
    tmp_msg_0.sacc = 0.757074413528746;
    tmp_msg_0.cacc = 0.961061263302714;
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
    msg.setTimeStamp(0.7803523194736908);
    msg.setSource(24425U);
    msg.setSourceEntity(57U);
    msg.setDestination(25546U);
    msg.setDestinationEntity(147U);
    msg.op = 9U;
    msg.system.assign("EYOPADMREAOIGVNGWWUXZBGHBXDFOOEIVVCBNBATUJBMCDOWLYIHRTKRCAVMFVNLQTBADZAJELWZQSMXVFXCJEFUFGMWCJWXHOKHLQVSYBWQLJYGKPLRZVXWSOJOGAYKUTMLZFMYAITPTDPUCULJSCCZJSKISPUX");
    msg.range = 0.6062077364745042;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4052826639578988;
    tmp_msg_0.lon = 0.2841807846833606;
    tmp_msg_0.height = 0.3916905005199355;
    tmp_msg_0.x = 0.3224484933390167;
    tmp_msg_0.y = 0.12137565773463987;
    tmp_msg_0.z = 0.7400696547593208;
    tmp_msg_0.phi = 0.7434941763960689;
    tmp_msg_0.theta = 0.784380862936408;
    tmp_msg_0.psi = 0.32531698334507575;
    tmp_msg_0.u = 0.5755060783475839;
    tmp_msg_0.v = 0.5072705052241185;
    tmp_msg_0.w = 0.5337656226832758;
    tmp_msg_0.p = 0.08789821182828961;
    tmp_msg_0.q = 0.15848122835758793;
    tmp_msg_0.r = 0.6460541549850967;
    tmp_msg_0.svx = 0.3829864443058949;
    tmp_msg_0.svy = 0.5094664320261845;
    tmp_msg_0.svz = 0.215027482764093;
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
    msg.setTimeStamp(0.10242236995629916);
    msg.setSource(5162U);
    msg.setSourceEntity(69U);
    msg.setDestination(47430U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.40883161824502534);
    msg.setSource(10050U);
    msg.setSourceEntity(176U);
    msg.setDestination(36108U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.8371425977710966);
    msg.setSource(5576U);
    msg.setSourceEntity(96U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.28288704652927155);
    msg.setSource(53834U);
    msg.setSourceEntity(155U);
    msg.setDestination(4920U);
    msg.setDestinationEntity(89U);
    msg.list.assign("PACIBYYLWZNQPFDMKLRKENLKMAJLQXBDHFBSQINZHGOEYFELZVPGTISTJKPCABIXIZKIM");

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
    msg.setTimeStamp(0.27440955757517294);
    msg.setSource(48055U);
    msg.setSourceEntity(163U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(230U);
    msg.list.assign("YORRSPCIRJQACIOYUVJTAXYWLMLQMVBKIRVZFLROFTTLXQTBEAQYLYVGDMTUQTCVJIKUVCLWLYEBVUMNUKESRDIOPWNXHWCSSWUUADZYHGDEZODFVHWTMHIZZDPAJPFHJPFFMNUEIPTSCWUSODHKGNQHEDYPAKPMNNOCGIBVBBHGZCT");

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
    msg.setTimeStamp(0.9894053320158214);
    msg.setSource(37046U);
    msg.setSourceEntity(65U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(5U);
    msg.list.assign("PACSQVLYUUXJLMGZFKMZHUAJUJZLPADHWHPAZSRSCHEDUUFDYPEWIFKVUWNMJAMJWNZGJAULNTTIGLVBBYQZQFFQTEKPJLXMWJXELFRZDXNVCSVARQSS");

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
    msg.setTimeStamp(0.11552297342838558);
    msg.setSource(29460U);
    msg.setSourceEntity(252U);
    msg.setDestination(61116U);
    msg.setDestinationEntity(23U);
    msg.value = 1805;

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
    msg.setTimeStamp(0.5902376295069259);
    msg.setSource(63341U);
    msg.setSourceEntity(104U);
    msg.setDestination(52133U);
    msg.setDestinationEntity(243U);
    msg.value = -9498;

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
    msg.setTimeStamp(0.7341780979814457);
    msg.setSource(39041U);
    msg.setSourceEntity(17U);
    msg.setDestination(50829U);
    msg.setDestinationEntity(9U);
    msg.value = -23045;

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
    msg.setTimeStamp(0.7199302940685584);
    msg.setSource(22029U);
    msg.setSourceEntity(125U);
    msg.setDestination(20676U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9999655577608;

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
    msg.setTimeStamp(0.7354464918129333);
    msg.setSource(44225U);
    msg.setSourceEntity(169U);
    msg.setDestination(48222U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9840009180751875;

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
    msg.setTimeStamp(0.3366243174651521);
    msg.setSource(46905U);
    msg.setSourceEntity(169U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(181U);
    msg.value = 0.22669211764336028;

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
    msg.setTimeStamp(0.8544776260468413);
    msg.setSource(51399U);
    msg.setSourceEntity(214U);
    msg.setDestination(30787U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8968411127203548;

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
    msg.setTimeStamp(0.614211528114731);
    msg.setSource(60518U);
    msg.setSourceEntity(54U);
    msg.setDestination(13937U);
    msg.setDestinationEntity(228U);
    msg.value = 0.42455955486463115;

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
    msg.setTimeStamp(0.6679362359149557);
    msg.setSource(44057U);
    msg.setSourceEntity(87U);
    msg.setDestination(1181U);
    msg.setDestinationEntity(56U);
    msg.value = 0.4763532962548358;

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
    msg.setTimeStamp(0.21931317029911068);
    msg.setSource(63498U);
    msg.setSourceEntity(21U);
    msg.setDestination(58890U);
    msg.setDestinationEntity(154U);
    msg.validity = 65288U;
    msg.type = 215U;
    msg.utc_year = 58823U;
    msg.utc_month = 18U;
    msg.utc_day = 93U;
    msg.utc_time = 0.3417311540057273;
    msg.lat = 0.9853995167513306;
    msg.lon = 0.06775618443058484;
    msg.height = 0.4277225233186125;
    msg.satellites = 49U;
    msg.cog = 0.029736369101118876;
    msg.sog = 0.17729811395695316;
    msg.hdop = 0.9298624236663791;
    msg.vdop = 0.4219738175840537;
    msg.hacc = 0.8401104151365385;
    msg.vacc = 0.34552264783678255;

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
    msg.setTimeStamp(0.8240690069006548);
    msg.setSource(56823U);
    msg.setSourceEntity(240U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(248U);
    msg.validity = 64431U;
    msg.type = 221U;
    msg.utc_year = 2364U;
    msg.utc_month = 15U;
    msg.utc_day = 94U;
    msg.utc_time = 0.26672420828331345;
    msg.lat = 0.007952244067967573;
    msg.lon = 0.40313433142237354;
    msg.height = 0.790386167153337;
    msg.satellites = 122U;
    msg.cog = 0.42330469725138853;
    msg.sog = 0.4319863009056235;
    msg.hdop = 0.4129040992277797;
    msg.vdop = 0.6931146713007561;
    msg.hacc = 0.836159706964487;
    msg.vacc = 0.7016153788881727;

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
    msg.setTimeStamp(0.4978262619423234);
    msg.setSource(63667U);
    msg.setSourceEntity(77U);
    msg.setDestination(11504U);
    msg.setDestinationEntity(15U);
    msg.validity = 45154U;
    msg.type = 10U;
    msg.utc_year = 29351U;
    msg.utc_month = 104U;
    msg.utc_day = 217U;
    msg.utc_time = 0.42951997810955334;
    msg.lat = 0.717306540245016;
    msg.lon = 0.2609199420908187;
    msg.height = 0.3543972488942271;
    msg.satellites = 36U;
    msg.cog = 0.4948443921164325;
    msg.sog = 0.09035336231533786;
    msg.hdop = 0.18396696795144363;
    msg.vdop = 0.32880086501106476;
    msg.hacc = 0.09129595697369497;
    msg.vacc = 0.4033880719725057;

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
    msg.setTimeStamp(0.00015858513809796637);
    msg.setSource(50175U);
    msg.setSourceEntity(158U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(230U);
    msg.time = 0.42524238819222837;
    msg.phi = 0.7160313493741868;
    msg.theta = 0.7529425645413415;
    msg.psi = 0.9517682718750191;
    msg.psi_magnetic = 0.08272396560332806;

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
    msg.setTimeStamp(0.27904078803611343);
    msg.setSource(57532U);
    msg.setSourceEntity(195U);
    msg.setDestination(40803U);
    msg.setDestinationEntity(21U);
    msg.time = 0.4343925305572146;
    msg.phi = 0.9602984526839472;
    msg.theta = 0.6873556160807136;
    msg.psi = 0.24799519814827975;
    msg.psi_magnetic = 0.2062269117544303;

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
    msg.setTimeStamp(0.2869050238068974);
    msg.setSource(16188U);
    msg.setSourceEntity(103U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(156U);
    msg.time = 0.32287152400274843;
    msg.phi = 0.041079055882747295;
    msg.theta = 0.45412286632054266;
    msg.psi = 0.6954184996653422;
    msg.psi_magnetic = 0.2853795689549452;

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
    msg.setTimeStamp(0.29034256091858535);
    msg.setSource(22518U);
    msg.setSourceEntity(179U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(146U);
    msg.time = 0.35587092397468767;
    msg.x = 0.6584728356024406;
    msg.y = 0.9619155376216777;
    msg.z = 0.0615921772689515;
    msg.timestep = 0.3486797279201106;

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
    msg.setTimeStamp(0.20958393713948675);
    msg.setSource(53817U);
    msg.setSourceEntity(246U);
    msg.setDestination(24635U);
    msg.setDestinationEntity(144U);
    msg.time = 0.7162728981394081;
    msg.x = 0.3188092917080093;
    msg.y = 0.7263650464840845;
    msg.z = 0.7299428762038555;
    msg.timestep = 0.49383921424100863;

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
    msg.setTimeStamp(0.000877404293957329);
    msg.setSource(15563U);
    msg.setSourceEntity(37U);
    msg.setDestination(53166U);
    msg.setDestinationEntity(245U);
    msg.time = 0.3630682504340258;
    msg.x = 0.13528757427566218;
    msg.y = 0.679143385175863;
    msg.z = 0.263814126727851;
    msg.timestep = 0.3810633824756029;

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
    msg.setTimeStamp(0.23034768276564344);
    msg.setSource(2850U);
    msg.setSourceEntity(138U);
    msg.setDestination(7472U);
    msg.setDestinationEntity(154U);
    msg.time = 0.7850598839779563;
    msg.x = 0.6824544152522468;
    msg.y = 0.44044102626611104;
    msg.z = 0.8619325614007641;

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
    msg.setTimeStamp(0.2866367299319057);
    msg.setSource(39522U);
    msg.setSourceEntity(45U);
    msg.setDestination(21148U);
    msg.setDestinationEntity(124U);
    msg.time = 0.965748174849505;
    msg.x = 0.27172191530530143;
    msg.y = 0.4513732807592087;
    msg.z = 0.7399030852955858;

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
    msg.setTimeStamp(0.7931543098538333);
    msg.setSource(24430U);
    msg.setSourceEntity(226U);
    msg.setDestination(2402U);
    msg.setDestinationEntity(123U);
    msg.time = 0.8519765425953096;
    msg.x = 0.4757794568691176;
    msg.y = 0.2052556460738021;
    msg.z = 0.62128717693161;

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
    msg.setTimeStamp(0.46975030695487874);
    msg.setSource(29266U);
    msg.setSourceEntity(13U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(42U);
    msg.time = 0.5663723676347051;
    msg.x = 0.4461865550214388;
    msg.y = 0.23568471669793023;
    msg.z = 0.14582659576483725;

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
    msg.setTimeStamp(0.2947837794824878);
    msg.setSource(44469U);
    msg.setSourceEntity(176U);
    msg.setDestination(17304U);
    msg.setDestinationEntity(160U);
    msg.time = 0.6169969734478558;
    msg.x = 0.5252558908583014;
    msg.y = 0.8959862070104787;
    msg.z = 0.9619884390222329;

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
    msg.setTimeStamp(0.971261669315174);
    msg.setSource(14738U);
    msg.setSourceEntity(42U);
    msg.setDestination(17230U);
    msg.setDestinationEntity(172U);
    msg.time = 0.749013570108821;
    msg.x = 0.5003562148662025;
    msg.y = 0.17602122899752215;
    msg.z = 0.2066736833759234;

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
    msg.setTimeStamp(0.5312982240075208);
    msg.setSource(32840U);
    msg.setSourceEntity(119U);
    msg.setDestination(51596U);
    msg.setDestinationEntity(23U);
    msg.time = 0.9960537922176066;
    msg.x = 0.826415483761133;
    msg.y = 0.5185437782494866;
    msg.z = 0.504966944324616;

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
    msg.setTimeStamp(0.6347610764280455);
    msg.setSource(52411U);
    msg.setSourceEntity(123U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(186U);
    msg.time = 0.6218337346909081;
    msg.x = 0.5848887284069156;
    msg.y = 0.8531667670283952;
    msg.z = 0.3666584102952005;

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
    msg.setTimeStamp(0.07283770042813476);
    msg.setSource(40335U);
    msg.setSourceEntity(42U);
    msg.setDestination(52264U);
    msg.setDestinationEntity(132U);
    msg.time = 0.20312836343825125;
    msg.x = 0.414523058061828;
    msg.y = 0.9682719889442188;
    msg.z = 0.5577818898205374;

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
    msg.setTimeStamp(0.7488605687978972);
    msg.setSource(34185U);
    msg.setSourceEntity(209U);
    msg.setDestination(33854U);
    msg.setDestinationEntity(210U);
    msg.validity = 52U;
    msg.x = 0.007012919735106649;
    msg.y = 0.4258474967751743;
    msg.z = 0.7529676458523239;

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
    msg.setTimeStamp(0.8930720783566434);
    msg.setSource(41483U);
    msg.setSourceEntity(64U);
    msg.setDestination(706U);
    msg.setDestinationEntity(15U);
    msg.validity = 194U;
    msg.x = 0.7196031972751178;
    msg.y = 0.39877733348991795;
    msg.z = 0.9821913350788275;

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
    msg.setTimeStamp(0.6057848582371587);
    msg.setSource(45025U);
    msg.setSourceEntity(199U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(17U);
    msg.validity = 113U;
    msg.x = 0.37267933956980825;
    msg.y = 0.665872311980875;
    msg.z = 0.7935660476699045;

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
    msg.setTimeStamp(0.4687902776318359);
    msg.setSource(22139U);
    msg.setSourceEntity(7U);
    msg.setDestination(15307U);
    msg.setDestinationEntity(209U);
    msg.validity = 151U;
    msg.x = 0.3367144650157571;
    msg.y = 0.46757155474938406;
    msg.z = 0.895204011836503;

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
    msg.setTimeStamp(0.6399784081427257);
    msg.setSource(29451U);
    msg.setSourceEntity(237U);
    msg.setDestination(16548U);
    msg.setDestinationEntity(29U);
    msg.validity = 107U;
    msg.x = 0.8987363159673651;
    msg.y = 0.49305828021023257;
    msg.z = 0.8757925059976669;

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
    msg.setTimeStamp(0.5637920810042786);
    msg.setSource(7967U);
    msg.setSourceEntity(209U);
    msg.setDestination(41053U);
    msg.setDestinationEntity(55U);
    msg.validity = 135U;
    msg.x = 0.23968218165098454;
    msg.y = 0.17413329640535335;
    msg.z = 0.6341972401370308;

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
    msg.setTimeStamp(0.9065776520407632);
    msg.setSource(14980U);
    msg.setSourceEntity(99U);
    msg.setDestination(22569U);
    msg.setDestinationEntity(36U);
    msg.time = 0.045944200827510384;
    msg.x = 0.4705725206086929;
    msg.y = 0.943704596293852;
    msg.z = 0.0009488419212282384;

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
    msg.setTimeStamp(0.2084147163110136);
    msg.setSource(49098U);
    msg.setSourceEntity(71U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(175U);
    msg.time = 0.5921112592236252;
    msg.x = 0.2658508713488942;
    msg.y = 0.11355636318164963;
    msg.z = 0.8202935341179063;

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
    msg.setTimeStamp(0.48979459295515304);
    msg.setSource(45333U);
    msg.setSourceEntity(178U);
    msg.setDestination(33733U);
    msg.setDestinationEntity(164U);
    msg.time = 0.9539089583434606;
    msg.x = 0.5480292296284943;
    msg.y = 0.41653611291128545;
    msg.z = 0.9237672388778513;

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
    msg.setTimeStamp(0.01461488739978456);
    msg.setSource(65265U);
    msg.setSourceEntity(33U);
    msg.setDestination(8246U);
    msg.setDestinationEntity(56U);
    msg.validity = 48U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7045077958891559;
    tmp_msg_0.y = 0.057397756305132774;
    tmp_msg_0.z = 0.5905971772042135;
    tmp_msg_0.phi = 0.25749488211812444;
    tmp_msg_0.theta = 0.2860392124222485;
    tmp_msg_0.psi = 0.7870725677363822;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.026339684296978638;

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
    msg.setTimeStamp(0.18798157687529582);
    msg.setSource(22348U);
    msg.setSourceEntity(28U);
    msg.setDestination(5360U);
    msg.setDestinationEntity(187U);
    msg.validity = 212U;
    msg.value = 0.19271687031960905;

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
    msg.setTimeStamp(0.3596045540904037);
    msg.setSource(22804U);
    msg.setSourceEntity(28U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(133U);
    msg.validity = 88U;
    msg.value = 0.7507353735659814;

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
    msg.setTimeStamp(0.8666367818356193);
    msg.setSource(11766U);
    msg.setSourceEntity(183U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(197U);
    msg.value = 0.00150411126705563;

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
    msg.setTimeStamp(0.28975592138266915);
    msg.setSource(51309U);
    msg.setSourceEntity(103U);
    msg.setDestination(15881U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7579430918885048;

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
    msg.setTimeStamp(0.5470301983416607);
    msg.setSource(41201U);
    msg.setSourceEntity(220U);
    msg.setDestination(6644U);
    msg.setDestinationEntity(69U);
    msg.value = 0.23345975767249394;

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
    msg.setTimeStamp(0.9348619067527587);
    msg.setSource(4231U);
    msg.setSourceEntity(46U);
    msg.setDestination(60029U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9549517716989548;

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
    msg.setTimeStamp(0.5874133116065626);
    msg.setSource(42164U);
    msg.setSourceEntity(18U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3618789629744895;

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
    msg.setTimeStamp(0.7168575769640829);
    msg.setSource(43487U);
    msg.setSourceEntity(24U);
    msg.setDestination(50328U);
    msg.setDestinationEntity(161U);
    msg.value = 0.2372912039088283;

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
    msg.setTimeStamp(0.22659513358172645);
    msg.setSource(61548U);
    msg.setSourceEntity(155U);
    msg.setDestination(62376U);
    msg.setDestinationEntity(82U);
    msg.value = 0.7586595600521343;

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
    msg.setTimeStamp(0.8018290890068751);
    msg.setSource(49473U);
    msg.setSourceEntity(24U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6090178776451644;

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
    msg.setTimeStamp(0.23260889407830887);
    msg.setSource(45557U);
    msg.setSourceEntity(92U);
    msg.setDestination(39665U);
    msg.setDestinationEntity(8U);
    msg.value = 0.9639306331761339;

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
    msg.setTimeStamp(0.9004803759916359);
    msg.setSource(20133U);
    msg.setSourceEntity(226U);
    msg.setDestination(8955U);
    msg.setDestinationEntity(215U);
    msg.value = 0.659485783261456;

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
    msg.setTimeStamp(0.43847785200611467);
    msg.setSource(22396U);
    msg.setSourceEntity(50U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(13U);
    msg.value = 0.3410100660016274;

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
    msg.setTimeStamp(0.8064806608747798);
    msg.setSource(60835U);
    msg.setSourceEntity(251U);
    msg.setDestination(18402U);
    msg.setDestinationEntity(211U);
    msg.value = 0.1594068225801839;

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
    msg.setTimeStamp(0.09789263165329731);
    msg.setSource(2637U);
    msg.setSourceEntity(20U);
    msg.setDestination(43914U);
    msg.setDestinationEntity(39U);
    msg.value = 0.5586953251129471;

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
    msg.setTimeStamp(0.4676982210022155);
    msg.setSource(95U);
    msg.setSourceEntity(86U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6554673231358636;

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
    msg.setTimeStamp(0.7853658444780138);
    msg.setSource(28291U);
    msg.setSourceEntity(122U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(56U);
    msg.value = 0.41912720590618613;

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
    msg.setTimeStamp(0.32963409975828506);
    msg.setSource(9087U);
    msg.setSourceEntity(203U);
    msg.setDestination(64478U);
    msg.setDestinationEntity(46U);
    msg.value = 0.824871811336497;

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
    msg.setTimeStamp(0.0008368018120206155);
    msg.setSource(57863U);
    msg.setSourceEntity(102U);
    msg.setDestination(24898U);
    msg.setDestinationEntity(118U);
    msg.value = 0.10598617831082702;

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
    msg.setTimeStamp(0.8182426822096497);
    msg.setSource(11874U);
    msg.setSourceEntity(101U);
    msg.setDestination(60603U);
    msg.setDestinationEntity(8U);
    msg.value = 0.42906329829958945;

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
    msg.setTimeStamp(0.5803506686408887);
    msg.setSource(58651U);
    msg.setSourceEntity(216U);
    msg.setDestination(9293U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2525889878950449;

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
    msg.setTimeStamp(0.9791242692416652);
    msg.setSource(23605U);
    msg.setSourceEntity(179U);
    msg.setDestination(47818U);
    msg.setDestinationEntity(112U);
    msg.value = 0.07055380296256442;

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
    msg.setTimeStamp(0.32777340229073737);
    msg.setSource(62308U);
    msg.setSourceEntity(234U);
    msg.setDestination(51345U);
    msg.setDestinationEntity(32U);
    msg.value = 0.21253319967238948;

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
    msg.setTimeStamp(0.8345141921726299);
    msg.setSource(8162U);
    msg.setSourceEntity(48U);
    msg.setDestination(39072U);
    msg.setDestinationEntity(197U);
    msg.value = 0.9351641270262441;

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
    msg.setTimeStamp(0.3716267119626361);
    msg.setSource(7618U);
    msg.setSourceEntity(15U);
    msg.setDestination(13887U);
    msg.setDestinationEntity(104U);
    msg.value = 0.35991705051607614;

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
    msg.setTimeStamp(0.6525367205752051);
    msg.setSource(20928U);
    msg.setSourceEntity(13U);
    msg.setDestination(32754U);
    msg.setDestinationEntity(30U);
    msg.value = 0.06681254790127011;

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
    msg.setTimeStamp(0.5799840686680269);
    msg.setSource(9140U);
    msg.setSourceEntity(155U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.5420767524973719;
    msg.speed = 0.10450495999471754;
    msg.turbulence = 0.9882787077665781;

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
    msg.setTimeStamp(0.4155570014414103);
    msg.setSource(55019U);
    msg.setSourceEntity(172U);
    msg.setDestination(62025U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.6292328417295777;
    msg.speed = 0.48421239071565847;
    msg.turbulence = 0.21068422136341092;

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
    msg.setTimeStamp(0.556550880515442);
    msg.setSource(3126U);
    msg.setSourceEntity(134U);
    msg.setDestination(62127U);
    msg.setDestinationEntity(207U);
    msg.direction = 0.9464039227995774;
    msg.speed = 0.13742659694690074;
    msg.turbulence = 0.11934689139909405;

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
    msg.setTimeStamp(0.4859931617426626);
    msg.setSource(2384U);
    msg.setSourceEntity(253U);
    msg.setDestination(31758U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7598877544146944;

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
    msg.setTimeStamp(0.9435601307444484);
    msg.setSource(8063U);
    msg.setSourceEntity(69U);
    msg.setDestination(18720U);
    msg.setDestinationEntity(231U);
    msg.value = 0.40850135877720894;

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
    msg.setTimeStamp(0.11904878658911289);
    msg.setSource(30148U);
    msg.setSourceEntity(77U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7066152256831324;

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
    msg.setTimeStamp(0.3646474504941948);
    msg.setSource(61868U);
    msg.setSourceEntity(26U);
    msg.setDestination(36839U);
    msg.setDestinationEntity(54U);
    msg.value.assign("FFTNKBUVEOLUZNHCKSTHMYALCDMNPMNBARLKEDXRIPGKJTDCHSOSHYXCMXPZHXDQUWBFBEVJJZGARLVXRDOTTXNKICKWSKPYHCLDXNJWWIZTBOWOBFYVJZAPVXFWIVSVDFYYFZNQIQUIPBXMUWKWACAUHABPZQYOWHZODLYIAVJGDOHFMPLLEMCTGIPXRZJESVQFJN");

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
    msg.setTimeStamp(0.6702068768308529);
    msg.setSource(61478U);
    msg.setSourceEntity(19U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(243U);
    msg.value.assign("ICWCIRAMYORXDZINKWEKNSMYTEDOWXPQGRQGFDELCSTGVSZSZNZNLSTIGXVZKCFBOMFAKHCJIAWLVSTKVCYGLDDWSTPNVRMVI");

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
    msg.setTimeStamp(0.7494604745582448);
    msg.setSource(27080U);
    msg.setSourceEntity(151U);
    msg.setDestination(11922U);
    msg.setDestinationEntity(200U);
    msg.value.assign("KEZVGVMHNXFSGOLCFCSBHQOPZNWAHOCAHPYYONSITPRSFSRRTGUVVBHZWYACVGKQFSOENJWDEBMPRJYMIZBDXQAWWKYAOHQHVMJMFFNLQXJYHUKETBEJCXRIJMWNAGQUZEOBJQZFKSORBZCUGGENUDKR");

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
    msg.setTimeStamp(0.869626730964126);
    msg.setSource(10971U);
    msg.setSourceEntity(91U);
    msg.setDestination(18867U);
    msg.setDestinationEntity(8U);
    const char tmp_msg_0[] = {-66, -39, -87, -14, -48, -62, 79, 70, -45, 17, 107, -124, 40, 3, 13, 123, -42, 30, -116, 59, 81, -1, 42, 109, -42, 37, -38, 115, -49, -97, -100, 105, -27, 23, 70, 87, 27, 13, -48, 68, -96, -25, 61, 18, -119, -49, -114, -85, 56, -70, 89, 20, 101, 44, 35, -20, 78, 70, 9, 95, 57, -113, -104, 52, 70, 30, -19, 31, -65, 53, 89, -70, -57, -42, -18, -15, 39, -16, -88, -10, 33, -24, 14, 68, 60, -105, -41, 91, 57, 95, 67, 35, 23, 13, 107, -45, 104, -82, 91};
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
    msg.setTimeStamp(0.30547106828576);
    msg.setSource(40259U);
    msg.setSourceEntity(213U);
    msg.setDestination(17300U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {58, -116, -55, 124, -106, -22, -6, 92, -128, 61, 53, -61, -128, 123, 104, 93, 21, 47, -55, -75, 120, 7, -54, 66, 117, 65, 39, 122, 41, 67, -113, 99, 26, 51, 91, 7, 100, -113, 59, 36, -71, -61, -36, -12, 87, -7, -97, 101, 49, 106, -5, -53, 123, -121, 62, 88, 93, -15, 47, -19, 63, 107, -86, 82, 60, -123, -56, -77, 100, -1, 114, 46, -78, -16, -54, -105, 3, -44, 99, -56, -99, 26, 1, 126, 29, 111, 22, 12, 8, -9, 89, 78, 48, 73, -33, 23, 105, 3, 80, -103, -2, 63, -84, 27, -31, -45, -21, -94, -57, 32, -99, -91, -108, -78, -38, 115, 81, 46, 28, -38, 18, -69, -30, 40, 13, 59, -84, 40, -2, -75, -24, -108, -32, -102, 25, 13, 117, 48, 64, -38, -109, 70, -82, 37, -64, -120, 72, -114, 76, 30, 35, 70, -9, -58, -122, 57, -31, 91, -52, -108, 10, -58, -75, -97, -50, 70, 84, 62, 2, -121, -107, -55, 14, -16};
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
    msg.setTimeStamp(0.917286369112041);
    msg.setSource(6453U);
    msg.setSourceEntity(191U);
    msg.setDestination(40754U);
    msg.setDestinationEntity(28U);
    const char tmp_msg_0[] = {76, 75, -38, 115, 36, -97, 27, -15, 6, -77, 124, 5, 71, -57, 66, -44, 40, -27, 58, -54, -73, -81, -103, -98, -127, -62, 90, 96, 20, -17, 103, 100, 13, 17, -116, 115, 111, -8, 68, -30, 21, -33, -93, -113, -82, 105, -8, -126, -117, -127, -117, 38, -3, 64, 10, -28, 62, -3, 5, 37, -114, -85};
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
    msg.setTimeStamp(0.7876688770308883);
    msg.setSource(36640U);
    msg.setSourceEntity(2U);
    msg.setDestination(938U);
    msg.setDestinationEntity(178U);
    msg.type = 141U;
    msg.frequency = 373768537U;
    msg.min_range = 29695U;
    msg.max_range = 64697U;
    msg.bits_per_point = 47U;
    msg.scale_factor = 0.35056303245638176;
    const char tmp_msg_0[] = {-26, -119, -25, 84, -29, 50, 83, 100, 13, -106, -20, -92, -110, -10, -39, -102, 96, 23, 123, -88, -15, -57, -72, -97, -76, 71, 41, 125, 77, -101, -42, 24, -25, 89, 6, -101, -106, 45, 93, 24, 63, -74, -86, -83, -127, 11, -61, -114, -86, -50, 102, -97, 46, 64, 101, -15, 52, -17, -99, -3, -54, -29, 110, -99, -114, -5, -7, 70, -20, -53, 101, 63, -11, -87, 87, -100, -36, -105, -89, 126, -66, -12, 33, -86, -17, -90, 88, 61, -50, 112, -26, -99, 126, -33, 71, -103, -90, -83, 96, -84, 74, 16, 6, -57, -98, 79, -9, 53, 46, 37, 126, 18, 13, 36, 90, 112, 16, 5, 123, 78, -118, 80, -35, -68, 10, 116, -55, -52, -58, -77, 79, 17, 110, -108, -88, 123, 21, -2, 120, -96, 103, 12, -29, -123, 88, 109, -39, -55, 11, 96, 64, 48, -41, -68, 30, 105, -7, -127, 5, -117, -80, -7, 38, 7, -55, -106, 109, 52, -109, 88, -54, -118, 97, 91, -127, -30, -38, -24, -49, 2, 51, 49, 11, 48, -30, -62, -73, 124, -11, 44, 116, 32, -74, -41, 114, 13, 15, -82, -110, -64, -82, -41, -55, 38, -90, 49, -82, -56, 60, 105, -22, -51, 81, -119, 36, 94, -124, 20, -125, -11, -80, 125, -93, 37, 113, 76, 84, -38, 56, 123};
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
    msg.setTimeStamp(0.49191458570085034);
    msg.setSource(55135U);
    msg.setSourceEntity(207U);
    msg.setDestination(8942U);
    msg.setDestinationEntity(58U);
    msg.type = 90U;
    msg.frequency = 2108995883U;
    msg.min_range = 17238U;
    msg.max_range = 8453U;
    msg.bits_per_point = 222U;
    msg.scale_factor = 0.6267794704307942;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.43149913519061434;
    tmp_msg_0.beam_height = 0.4078020921018981;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-110, 73, -65, -2, 57, 68, 113, 103, -79, 120, -107, 23, 3, 67, -74, -96, -93, 67, -87, -84, -65, -90, -117, -94, 104, 99, 83, 86, -11, -108, 2, 45, 48, -43, 29, 52, -62, -50, 4, -81, -79, -21, 77, -74, 23, 1, -67, -1, -29, 68, 7, -18, 111, -111, 80, 97, 72, -77, 75, 4, -46, -15, -74, -82, -22, -99, -108, 49, 91, 95, -74, 28, -82, 4, 37, 12, 124, 1, 3, 35, 7, -47, -68, 75, -105, 17, 102, -104, 92, -9, -45, 28, 125, -39, 51, -60, -70, 113, -72, -31, 20, -114, 95, -12, -107, 117, 18, 122, 67, 106, 56, -113, 120, 32, 61, 71, -33, 96, -43, 18, -57, 48, 65, 26, 90, -4, 94, 41, 37, -85, -87, 9, -10, 0, -109, -15, -101, 50, -89, 31, -15, -11, 35, -73, 58, 126, -111};
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
    msg.setTimeStamp(0.9290525729860855);
    msg.setSource(54729U);
    msg.setSourceEntity(59U);
    msg.setDestination(59053U);
    msg.setDestinationEntity(240U);
    msg.type = 7U;
    msg.frequency = 3412474931U;
    msg.min_range = 6035U;
    msg.max_range = 20322U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.6698283085246202;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4903614670592804;
    tmp_msg_0.beam_height = 0.697809841002632;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-26, -20, -38, -25, 125, -125, -83, -86, -71, 50, 56, 59, -110, 92, 105, -48, -36, -95, 108, 23, -54, 82, -112, -42, -31, -82, 18, -93, 6, -7, 37, 79, 36, 56, 99, -21, 41, 34, 61, -119, 82, -116, -37, 17, -71, 79, -98, -50, -28, -90, 91, 46, -16, -30, -1, 47, 12, -30, 34, -123, 41, -107, 97, 18, 108, 123, 44, -122, 38, -47, -117, 74, 25, 22, -48, 71, -125, -88, -93, -14, 125, -63, 110, 95, -95, -118, -127, -29, 91, -87, -40, 36, -93, -106, -8, 49, 122, -42, 29, -98, 35, -6, 77, 53, 58, 96, -68, 113, 57, 108, -16, 21, 125, -30, -111, -12, -81, 104, -59, 13, -118, -18, 50, 46, 39, -7, 20, 95, -100, -98, 52, -80, 113, 75, -119, -32, 47, -7, 7, 111, -62, -22, -24, -126, 55, -51, -30, 107, -90, -67, -91, -115, -107, 45, 19, 80, -20, -110, 10, -66, -83, -55, 72, -96, 72, 107, -103, -55};
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
    msg.setTimeStamp(0.9321680317175078);
    msg.setSource(19894U);
    msg.setSourceEntity(171U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.7824069290242154);
    msg.setSource(53071U);
    msg.setSourceEntity(217U);
    msg.setDestination(9965U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.17057196517321171);
    msg.setSource(52744U);
    msg.setSourceEntity(179U);
    msg.setDestination(2285U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.09666210379543838);
    msg.setSource(17929U);
    msg.setSourceEntity(130U);
    msg.setDestination(29044U);
    msg.setDestinationEntity(175U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.5167172571414412);
    msg.setSource(6899U);
    msg.setSourceEntity(2U);
    msg.setDestination(27292U);
    msg.setDestinationEntity(220U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.11960314418024731);
    msg.setSource(15038U);
    msg.setSourceEntity(93U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(231U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.43566154430341675);
    msg.setSource(7547U);
    msg.setSourceEntity(233U);
    msg.setDestination(26452U);
    msg.setDestinationEntity(48U);
    msg.value = 0.43663809223130556;
    msg.confidence = 0.9149144153009805;
    msg.opmodes.assign("EBCZOSTOHWXAPMVZJMPVWDPMTIAQJZLKDESLBTPHWEGNHALEFPCBJEVNKTUZWMFSIIJKOVZRXLCRALIYJYYUCQTGLRXWFUDFIRMKIXGYBTSJJGFCYNBVMNHADXMKDEKKMNCCNGKTJFRPUROZQQPQIYHANISQQEDKAJZFXTXSLNXYOVRGMBDTCQWDKCRMBUGSNXGCVHOUNPZPHSUGZHQFOSPFDVXDJYZAUWRGOWHT");

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
    msg.setTimeStamp(0.2676625164317499);
    msg.setSource(37283U);
    msg.setSourceEntity(170U);
    msg.setDestination(60713U);
    msg.setDestinationEntity(161U);
    msg.value = 0.37699320336838305;
    msg.confidence = 0.917721231625553;
    msg.opmodes.assign("UWZGCQKHQICCSAYYPBOTKYHRMMQSBMFXPDNXXY");

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
    msg.setTimeStamp(0.7079920770737734);
    msg.setSource(17890U);
    msg.setSourceEntity(120U);
    msg.setDestination(13177U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4856130741411582;
    msg.confidence = 0.4492017677672555;
    msg.opmodes.assign("KVITSIXQNVBXHQFRWDZUKSDHZHMLZYCQHXRPJRONMKEZRDUV");

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
    msg.setTimeStamp(0.7174852196820865);
    msg.setSource(8442U);
    msg.setSourceEntity(2U);
    msg.setDestination(11705U);
    msg.setDestinationEntity(10U);
    msg.itow = 1156247504U;
    msg.lat = 0.5398141196210275;
    msg.lon = 0.6448459282377021;
    msg.height_ell = 0.5046233156230174;
    msg.height_sea = 0.7288159443399018;
    msg.hacc = 0.8363729273124683;
    msg.vacc = 0.17857642497209647;
    msg.vel_n = 0.5491299358880662;
    msg.vel_e = 0.21220143131230962;
    msg.vel_d = 0.5186018076510573;
    msg.speed = 0.9947624903138158;
    msg.gspeed = 0.14679850933589522;
    msg.heading = 0.8497889659152631;
    msg.sacc = 0.4370613438198697;
    msg.cacc = 0.5081855543622634;

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
    msg.setTimeStamp(0.09813511425349108);
    msg.setSource(48819U);
    msg.setSourceEntity(0U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(180U);
    msg.itow = 2084886651U;
    msg.lat = 0.46121489351572087;
    msg.lon = 0.22905781145630733;
    msg.height_ell = 0.8996362658876353;
    msg.height_sea = 0.5280407315025666;
    msg.hacc = 0.48025363053180903;
    msg.vacc = 0.8311819534711298;
    msg.vel_n = 0.8692656161237333;
    msg.vel_e = 0.9798097224538953;
    msg.vel_d = 0.18607773609101486;
    msg.speed = 0.20960751157456858;
    msg.gspeed = 0.13417431383380285;
    msg.heading = 0.019543321200311103;
    msg.sacc = 0.7290701336424183;
    msg.cacc = 0.7190582875674557;

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
    msg.setTimeStamp(0.5701926976609534);
    msg.setSource(51469U);
    msg.setSourceEntity(204U);
    msg.setDestination(25851U);
    msg.setDestinationEntity(156U);
    msg.itow = 2888681718U;
    msg.lat = 0.4890915297425019;
    msg.lon = 0.515909448086058;
    msg.height_ell = 0.26291465136576564;
    msg.height_sea = 0.17948909653630918;
    msg.hacc = 0.05220433857864337;
    msg.vacc = 0.5656727176584757;
    msg.vel_n = 0.05838649844941013;
    msg.vel_e = 0.8962287979590678;
    msg.vel_d = 0.3909305789346652;
    msg.speed = 0.06524911667417377;
    msg.gspeed = 0.431541549934525;
    msg.heading = 0.2931378766430143;
    msg.sacc = 0.5863723536900888;
    msg.cacc = 0.7605922251320609;

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
    msg.setTimeStamp(0.9441389755559445);
    msg.setSource(8540U);
    msg.setSourceEntity(197U);
    msg.setDestination(49224U);
    msg.setDestinationEntity(49U);
    msg.id = 246U;
    msg.value = 0.7010433709031298;

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
    msg.setTimeStamp(0.35644195956129054);
    msg.setSource(20679U);
    msg.setSourceEntity(221U);
    msg.setDestination(948U);
    msg.setDestinationEntity(199U);
    msg.id = 215U;
    msg.value = 0.43453136564482564;

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
    msg.setTimeStamp(0.13331269172996763);
    msg.setSource(19508U);
    msg.setSourceEntity(76U);
    msg.setDestination(35057U);
    msg.setDestinationEntity(193U);
    msg.id = 9U;
    msg.value = 0.24541255968106646;

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
    msg.setTimeStamp(0.23426595642496395);
    msg.setSource(20894U);
    msg.setSourceEntity(230U);
    msg.setDestination(35981U);
    msg.setDestinationEntity(231U);
    msg.x = 0.8170686179224415;
    msg.y = 0.2549693203481602;
    msg.z = 0.7423320276492614;
    msg.phi = 0.6409199337583583;
    msg.theta = 0.7614930292067101;
    msg.psi = 0.8930641892169904;

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
    msg.setTimeStamp(0.4982407109278363);
    msg.setSource(64649U);
    msg.setSourceEntity(119U);
    msg.setDestination(17299U);
    msg.setDestinationEntity(153U);
    msg.x = 0.5692913050394842;
    msg.y = 0.6074582666355895;
    msg.z = 0.4993682912241417;
    msg.phi = 0.018643440950852574;
    msg.theta = 0.16240583346123105;
    msg.psi = 0.5963897031523474;

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
    msg.setTimeStamp(0.06344820906151827);
    msg.setSource(13082U);
    msg.setSourceEntity(98U);
    msg.setDestination(61995U);
    msg.setDestinationEntity(48U);
    msg.x = 0.7295491484077863;
    msg.y = 0.154608911045237;
    msg.z = 0.30080146230624905;
    msg.phi = 0.35242517533236994;
    msg.theta = 0.8041543762719316;
    msg.psi = 0.783998394110318;

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
    msg.setTimeStamp(0.20924260123960514);
    msg.setSource(31542U);
    msg.setSourceEntity(208U);
    msg.setDestination(5992U);
    msg.setDestinationEntity(69U);
    msg.beam_width = 0.9250615358634764;
    msg.beam_height = 0.1804210779189881;

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
    msg.setTimeStamp(0.37422549039461905);
    msg.setSource(14915U);
    msg.setSourceEntity(131U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(245U);
    msg.beam_width = 0.9832283820130256;
    msg.beam_height = 0.09395166171118763;

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
    msg.setTimeStamp(0.9142380030250858);
    msg.setSource(32997U);
    msg.setSourceEntity(71U);
    msg.setDestination(57385U);
    msg.setDestinationEntity(243U);
    msg.beam_width = 0.9717161583808895;
    msg.beam_height = 0.3262792865304177;

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
    msg.setTimeStamp(0.8876586331354466);
    msg.setSource(64618U);
    msg.setSourceEntity(170U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(164U);
    msg.sane = 238U;

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
    msg.setTimeStamp(0.06260307936783649);
    msg.setSource(1177U);
    msg.setSourceEntity(168U);
    msg.setDestination(27282U);
    msg.setDestinationEntity(223U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.7498634693977998);
    msg.setSource(55676U);
    msg.setSourceEntity(107U);
    msg.setDestination(60595U);
    msg.setDestinationEntity(233U);
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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.9970783293305178);
    msg.setSource(63280U);
    msg.setSourceEntity(156U);
    msg.setDestination(55598U);
    msg.setDestinationEntity(63U);
    msg.id = 135U;
    msg.zoom = 123U;
    msg.action = 39U;

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
    msg.setTimeStamp(0.721546627648046);
    msg.setSource(37018U);
    msg.setSourceEntity(41U);
    msg.setDestination(27419U);
    msg.setDestinationEntity(136U);
    msg.id = 40U;
    msg.zoom = 167U;
    msg.action = 58U;

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
    msg.setTimeStamp(0.9867609428786751);
    msg.setSource(12366U);
    msg.setSourceEntity(184U);
    msg.setDestination(36741U);
    msg.setDestinationEntity(236U);
    msg.id = 225U;
    msg.zoom = 81U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.13371337071996048);
    msg.setSource(60687U);
    msg.setSourceEntity(32U);
    msg.setDestination(14911U);
    msg.setDestinationEntity(18U);
    msg.id = 77U;
    msg.value = 0.16965402961254616;

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
    msg.setTimeStamp(0.9350718138155449);
    msg.setSource(53399U);
    msg.setSourceEntity(188U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(101U);
    msg.id = 246U;
    msg.value = 0.3496839468133659;

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
    msg.setTimeStamp(0.46237928475046775);
    msg.setSource(8067U);
    msg.setSourceEntity(123U);
    msg.setDestination(35581U);
    msg.setDestinationEntity(43U);
    msg.id = 189U;
    msg.value = 0.4427698503398345;

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
    msg.setTimeStamp(0.9911526670251237);
    msg.setSource(20300U);
    msg.setSourceEntity(98U);
    msg.setDestination(782U);
    msg.setDestinationEntity(10U);
    msg.id = 144U;
    msg.value = 0.9662920214250915;

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
    msg.setTimeStamp(0.3800600622527526);
    msg.setSource(12972U);
    msg.setSourceEntity(3U);
    msg.setDestination(57237U);
    msg.setDestinationEntity(162U);
    msg.id = 59U;
    msg.value = 0.18562330805272753;

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
    msg.setTimeStamp(0.28109374170858303);
    msg.setSource(10171U);
    msg.setSourceEntity(219U);
    msg.setDestination(60814U);
    msg.setDestinationEntity(44U);
    msg.id = 52U;
    msg.value = 0.5996096844953864;

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
    msg.setTimeStamp(0.4103632367399671);
    msg.setSource(46470U);
    msg.setSourceEntity(194U);
    msg.setDestination(197U);
    msg.setDestinationEntity(189U);
    msg.id = 116U;
    msg.angle = 0.20730433807469972;

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
    msg.setTimeStamp(0.7650195811334807);
    msg.setSource(1048U);
    msg.setSourceEntity(235U);
    msg.setDestination(52571U);
    msg.setDestinationEntity(116U);
    msg.id = 224U;
    msg.angle = 0.10839897279414012;

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
    msg.setTimeStamp(0.3432425756779386);
    msg.setSource(17732U);
    msg.setSourceEntity(250U);
    msg.setDestination(53709U);
    msg.setDestinationEntity(39U);
    msg.id = 196U;
    msg.angle = 0.46465786819360655;

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
    msg.setTimeStamp(0.6120940260978972);
    msg.setSource(28414U);
    msg.setSourceEntity(5U);
    msg.setDestination(10083U);
    msg.setDestinationEntity(8U);
    msg.op = 85U;
    msg.actions.assign("ODBHPVNRGYXFVPPTBDQSKKFVHFERRCORKCIYYZGSWLLKHSOKSZBFINQQOXGDNXDOGYXHALIKGTXDEIHFUSGHMBVMFBCWMXSFEWWJQJIUCVKNXXTLUUFAPAETJXRTBIZCMWWDSTVVQQROVUAQHLLVRFMEJAPESIAHTNXPSTZMQCRWY");

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
    msg.setTimeStamp(0.4356407822843842);
    msg.setSource(57632U);
    msg.setSourceEntity(160U);
    msg.setDestination(34340U);
    msg.setDestinationEntity(248U);
    msg.op = 227U;
    msg.actions.assign("SRDBXRVIYZUNQPDFNCUACFZMQXQKLSVRJNYZHVKOLJMVENMUNAQBKGUXFQMANBMTWRKOHAWCDPODPFAECVVKYJSSZFGNTTUGWYLGXITRSEPCOCKQBFOWUTIFJHYHQOYMRHOKOEGZPCRWVEPXBTDFHRGDINKGVJILTSZXIHYP");

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
    msg.setTimeStamp(0.006533089033093242);
    msg.setSource(22126U);
    msg.setSourceEntity(129U);
    msg.setDestination(4112U);
    msg.setDestinationEntity(155U);
    msg.op = 206U;
    msg.actions.assign("JSTMQXWECQVZIZBZPIWDKMZGFSODPOPPBYNBNNROAHYMMRCUBMXLNXNQFI");

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
    msg.setTimeStamp(0.24806431346446878);
    msg.setSource(48892U);
    msg.setSourceEntity(119U);
    msg.setDestination(37247U);
    msg.setDestinationEntity(141U);
    msg.actions.assign("CMSXNIYGIHXAKGFSRLXKVQLZENSRYNPQ");

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
    msg.setTimeStamp(0.6022185977851475);
    msg.setSource(33571U);
    msg.setSourceEntity(161U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(217U);
    msg.actions.assign("QKLHWIRZDPBPUMZSSQBBLVECWQSLZEQVCOHCGNPIUQJOJGKWVZMILTJFVCIGCRSTOUSJJFPXYMTAXIWREXYTYXTCXVNAIINJZQUMEQNFWINIBSGOBGFRAQZUWGNLEROWRWJFCKKZBEVMLUYZSEAGASKDYPPQLNCFRDOAMAOUXNDBTVYAXOKDXXKQDRHHXBYYYIUYZTDJHPKMCUHTUMTKDHB");

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
    msg.setTimeStamp(0.2102425019182903);
    msg.setSource(62932U);
    msg.setSourceEntity(252U);
    msg.setDestination(41352U);
    msg.setDestinationEntity(164U);
    msg.actions.assign("YTHAMUKVMEMRROZECSSEDHQWGMIZ");

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
    msg.setTimeStamp(0.1680210811196834);
    msg.setSource(44638U);
    msg.setSourceEntity(243U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(9U);
    msg.button = 176U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.17629936215622333);
    msg.setSource(49558U);
    msg.setSourceEntity(103U);
    msg.setDestination(13809U);
    msg.setDestinationEntity(173U);
    msg.button = 97U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.8371866716809439);
    msg.setSource(27764U);
    msg.setSourceEntity(32U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(232U);
    msg.button = 85U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.3938922595588872);
    msg.setSource(60968U);
    msg.setSourceEntity(103U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(51U);
    msg.op = 208U;
    msg.text.assign("ZISIEKUJWNHBGJXBFKINEYWBLAAXNKIHMJMHQUOGOMQFUPVDVWKBFBGRPNEABQJLUXQLRDHOFYUJQMKVRTPPFKZPAMPQXBPVZGCEERBNFYHSBSDLOUQRXVTGBYRQXVSHGKWUWZYOSEIZDWLTYDRAM");

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
    msg.setTimeStamp(0.4542851773838219);
    msg.setSource(55821U);
    msg.setSourceEntity(97U);
    msg.setDestination(35111U);
    msg.setDestinationEntity(123U);
    msg.op = 123U;
    msg.text.assign("RJZRAZBQEJTPUJBRYGGUHQSJRJNLWYVHCUCCXFOTPSEITNVOZDPSSEMVLVLVMALD");

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
    msg.setTimeStamp(0.36332871262901567);
    msg.setSource(65433U);
    msg.setSourceEntity(156U);
    msg.setDestination(62133U);
    msg.setDestinationEntity(53U);
    msg.op = 233U;
    msg.text.assign("OMSNALDEVMXZZMUIFVOJFZBXAIINLBCZEZQDSJQKPPTTBNXATIRHEAYDKPGKUBGPRRHAWDBKSCEDOVVZUKQFJIXHMKWEGUQOHOFQGTNYXVVIDDBNNARAGLNAJYZRMOUQSYBWCGNYRYGHYFCYTOYVSULXELPWNWCLVQWHLJIXDSMPWRCAMQBFFKHFPPUEBPMVIRIFKLRDYATTHZIJHE");

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
    msg.setTimeStamp(0.858755017530355);
    msg.setSource(43857U);
    msg.setSourceEntity(39U);
    msg.setDestination(55622U);
    msg.setDestinationEntity(219U);
    msg.op = 107U;
    msg.time_remain = 0.17907953892315154;
    msg.sched_time = 0.6201147203656779;

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
    msg.setTimeStamp(0.3499330139577045);
    msg.setSource(3194U);
    msg.setSourceEntity(136U);
    msg.setDestination(17110U);
    msg.setDestinationEntity(9U);
    msg.op = 181U;
    msg.time_remain = 0.9897412748192859;
    msg.sched_time = 0.8572501611616928;

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
    msg.setTimeStamp(0.1585182552176424);
    msg.setSource(47753U);
    msg.setSourceEntity(167U);
    msg.setDestination(24981U);
    msg.setDestinationEntity(172U);
    msg.op = 193U;
    msg.time_remain = 0.805334370458969;
    msg.sched_time = 0.14280854220150407;

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
    msg.setTimeStamp(0.5544164424529168);
    msg.setSource(31720U);
    msg.setSourceEntity(228U);
    msg.setDestination(32272U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MFLADJNEXAYRJQZFFERAGOJHWCKVQYBCOMQKDYGXJPCEMRGTWSQQPRSHEQTFWMLLOPPWDBDKNMUDKDBAATQOKAUFQGRQZCZVQCHYLJPIRUBZLIZRIEANJDBNSVVOIFWHVWKJYEWPGKTCWVUDYBSEKVMFHXHMAZGTMYFCXJCHIURBZL");
    msg.op = 68U;
    msg.sched_time = 0.08948593469541222;

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
    msg.setTimeStamp(0.2034053483201047);
    msg.setSource(9825U);
    msg.setSourceEntity(216U);
    msg.setDestination(17697U);
    msg.setDestinationEntity(106U);
    msg.name.assign("IFEOYPCOYFBZIMGBEXGVNGKUSOYUOSBNJABJXKQVAPAJNPGGHSTSKYCQYVOPHUUVMBBWIKDDNEGTDLWSWUXQCRLFRCRFWXFGHZYHKZPGUHJIXOBXCEMIXLVLOENCUECTOMZHJVPSYIWLALKLXRVZDTQWFPLGBERASFIZAAYKNWKMLIJJTXAFQQEJCNEJUEDSHVH");
    msg.op = 40U;
    msg.sched_time = 0.9479783559218555;

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
    msg.setTimeStamp(0.5421793235891559);
    msg.setSource(36054U);
    msg.setSourceEntity(187U);
    msg.setDestination(10673U);
    msg.setDestinationEntity(33U);
    msg.name.assign("RIOADKJVSISVCZDVMWNSWLZGWCYYCDHXZQRNWEIJBYUQKOYTHEPKLTVDBMZLDLIKFNUHKEQABINIOPTPPDKTACNQBLMYTEVVJPRBZJBFYAXVAWUWMF");
    msg.op = 236U;
    msg.sched_time = 0.4931718726452531;

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
    msg.setTimeStamp(0.08867534866077109);
    msg.setSource(2614U);
    msg.setSourceEntity(250U);
    msg.setDestination(58804U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.7446711853248981);
    msg.setSource(25767U);
    msg.setSourceEntity(190U);
    msg.setDestination(11158U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.6420355376774065);
    msg.setSource(61843U);
    msg.setSourceEntity(192U);
    msg.setDestination(42968U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.29101823489919953);
    msg.setSource(36988U);
    msg.setSourceEntity(92U);
    msg.setDestination(54615U);
    msg.setDestinationEntity(148U);
    msg.name.assign("RHKVQEGVVXXOFIRRDLAMNDSZHARHPUABUYRPWXFUCYDLJOOLJIRTUICTMKNDLNYIBYIQADMWCLVCFULYSUYWZSBSEOSJPPMISJUMNDMNGPFTKNSDZGVTFIHVXRYEGQISENZAJQXVBILXARJCWMAFWRJYATPPBUBMFWQK");
    msg.state = 249U;

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
    msg.setTimeStamp(0.656272338247767);
    msg.setSource(52164U);
    msg.setSourceEntity(44U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(103U);
    msg.name.assign("FRXDPIJEGN");
    msg.state = 229U;

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
    msg.setTimeStamp(0.919922838268472);
    msg.setSource(48095U);
    msg.setSourceEntity(102U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(46U);
    msg.name.assign("OYLNTTCCDQZOXCECXINUQFOMLLQSRNWGFDRIIYBUGZPPEBKGALTXSIWBFMMAARQMTPFWFTSAGEXJQUIUNRIMIHMORDKYJSVEEHZHVBAPBKCSPMDHXUWTPOSQPRXHWWQNYWSYKHXZFGHHVDQFJKVJENDVGYUEAKJJHCLPIDZHQFVWXB");
    msg.state = 51U;

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
    msg.setTimeStamp(0.9051385401471113);
    msg.setSource(42281U);
    msg.setSourceEntity(155U);
    msg.setDestination(36515U);
    msg.setDestinationEntity(39U);
    msg.name.assign("FSGHACIMMNXEJPZTHTUKCMPMEIWHVDVYANWEMJBPGORDHLWCCIAGBCNXVPDLQDEOAAVJPLHMBXPLKKZOSSYVRGVIDUNYKZLSHXOMKCWSTLRJHQWQIDDQJYSFRBTITBVWTQOYYWOMKSFBIEGJVCJHFFBZRVIZOANEETEPUKDUUSASCDLWPOHFIARJAEMXQEUBYLKCRAVUFUWGXNRJZNXQUXRPQZQWKUJHPQZTXFYNXNSFG");
    msg.value = 113U;

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
    msg.setTimeStamp(0.22949499626858927);
    msg.setSource(20285U);
    msg.setSourceEntity(235U);
    msg.setDestination(40232U);
    msg.setDestinationEntity(220U);
    msg.name.assign("DOUFSMJKHGUHMISEWRPWTEQOKLEYAWCNKNRNNLBOSDTGYBUZVUYFDHBJHWHAITPMSPQZFXZAKOREIXJKKBVGZNUIQQNYVVKVMFSWFUIYARYVZOTAGLBLIRGCHUNTDEHLGOPDYDHHECPWRKNLZCXBQBOPYOIJ");
    msg.value = 61U;

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
    msg.setTimeStamp(0.06367213250122306);
    msg.setSource(41147U);
    msg.setSourceEntity(143U);
    msg.setDestination(9166U);
    msg.setDestinationEntity(95U);
    msg.name.assign("VJNLUMMWNRACBZWRBJGATONXOHIHNZYXHCDKKQIXVSDKBPYARMSSFOJWTANYIPWFOSPYNZJLTUMORLWQBHZZDSAICHGSOXUYDC");
    msg.value = 189U;

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
    msg.setTimeStamp(0.8505582548538538);
    msg.setSource(54800U);
    msg.setSourceEntity(240U);
    msg.setDestination(54561U);
    msg.setDestinationEntity(203U);
    msg.name.assign("UKBBOEBSRRNLTHGAJQNRAFAGMVVZCTCFCYVOUVYLGEJLDDVAMOQZECFSCMWTPMUMIQARUYCOBMILMWAITNXFTPIBDMBGFOYFLTSYZCFWKPQMRXYKAPRHUUCDIJDYTEXZVHPXXWNUUDFOAWLASZUHISCHDTTZSHLZHPPLQEVYOJKWPJNGEKQXKJSZFQNXZEPJTYOJJGKIAZBJBBHWWQKNDLDYRIRKXERMLFXHIIWVCGGVWOBNKPXSQEQGR");

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
    msg.setTimeStamp(0.2500262065407455);
    msg.setSource(54004U);
    msg.setSourceEntity(108U);
    msg.setDestination(32163U);
    msg.setDestinationEntity(143U);
    msg.name.assign("LFJTQUETOBPXXTRORCQPSOWPGKNYTWXMMQWLEQHQLUVSQGYIAMYRCPKGMCUFGFPLLXABKWXMOCIHGXZBVCVNHSGEZDYAWOTJSLHOKUJEYVBLYMEVDAPDDQBUOLWPFJISPTRNNZFXFEDHHYSSRKPINMLBUMADNZMDG");

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
    msg.setTimeStamp(0.4710932785860542);
    msg.setSource(38454U);
    msg.setSourceEntity(148U);
    msg.setDestination(2187U);
    msg.setDestinationEntity(90U);
    msg.name.assign("XCUXBCFOAYIGTRVCJORUSMAPZEDSMJDXCIPZDFHIWYJPXGRUJYLVKHRVOOCAGFJMVNWOTODDZNLFNGXZBVQZAEOWCOGDQQOIYXKCPAFPBLHXALZEABZHV");

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
    msg.setTimeStamp(0.5686854270891136);
    msg.setSource(61671U);
    msg.setSourceEntity(154U);
    msg.setDestination(837U);
    msg.setDestinationEntity(249U);
    msg.name.assign("MDJUSPFJXXPKFPRXFGQCZIVADPCXXBYZOIRTYBYSOQPNHFMGOBXKWAVXYIEBUPVSKJOQORSJIDEHQWITMCNROZBEHRHEGVACTYMCLJMENWNDZEPHLPKBQQRCQKBEVMAYTUIGNUSSZALDOBUMZDYOZALHJUCTKXDWLUTMFHVUKOMNFIPSQWWPDRJTEFGKDYESSMIYBW");
    msg.value = 55U;

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
    msg.setTimeStamp(0.15112653988853053);
    msg.setSource(4681U);
    msg.setSourceEntity(86U);
    msg.setDestination(2635U);
    msg.setDestinationEntity(163U);
    msg.name.assign("EPTEWTZRTVXSMVKYTXJZPHOBGERKKPUIWRGQHYVHMFJSJNLJEWMIDDOKZFYMTAYZQSWDYVOJYITCHWUOBKXGUNWWCVIEKQLYXNXLRWFUFNXLJPTFVVZUAJXKTLGEIISJMJQHCRODERSFKVXFYUSPUXSTPBGPKBAABRCMROIHAMBAHDWZCCFNNDQOTVDEIAIYNNLUOOSSV");
    msg.value = 183U;

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
    msg.setTimeStamp(0.33121685173956517);
    msg.setSource(13074U);
    msg.setSourceEntity(110U);
    msg.setDestination(36040U);
    msg.setDestinationEntity(57U);
    msg.name.assign("PWIGXEOTTYMRDBBVIQAGYYCCHVOBCDLESDOTWLPBLQCYANHDHAHAKCAVOMDEHNWRNZJHUXKQZESARQNNOVSPGBKFSWZPWJZJNYJVZWIFQAQJEP");
    msg.value = 84U;

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
    msg.setTimeStamp(0.6656730906096048);
    msg.setSource(52322U);
    msg.setSourceEntity(57U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(53U);
    msg.id = 8U;
    msg.period = 272837186U;
    msg.duty_cycle = 3698823694U;

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
    msg.setTimeStamp(0.3161425349920406);
    msg.setSource(39137U);
    msg.setSourceEntity(229U);
    msg.setDestination(25017U);
    msg.setDestinationEntity(135U);
    msg.id = 126U;
    msg.period = 4199446189U;
    msg.duty_cycle = 1509263695U;

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
    msg.setTimeStamp(0.11358856970206255);
    msg.setSource(26016U);
    msg.setSourceEntity(161U);
    msg.setDestination(55828U);
    msg.setDestinationEntity(247U);
    msg.id = 221U;
    msg.period = 4115575199U;
    msg.duty_cycle = 692174628U;

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
    msg.setTimeStamp(0.903472022704523);
    msg.setSource(51646U);
    msg.setSourceEntity(44U);
    msg.setDestination(59805U);
    msg.setDestinationEntity(146U);
    msg.id = 35U;
    msg.period = 3060004453U;
    msg.duty_cycle = 2417630896U;

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
    msg.setTimeStamp(0.15258831696526198);
    msg.setSource(16086U);
    msg.setSourceEntity(72U);
    msg.setDestination(18751U);
    msg.setDestinationEntity(236U);
    msg.id = 1U;
    msg.period = 3547570358U;
    msg.duty_cycle = 1699047294U;

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
    msg.setTimeStamp(0.5661438425984696);
    msg.setSource(49560U);
    msg.setSourceEntity(132U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(143U);
    msg.id = 166U;
    msg.period = 3076517490U;
    msg.duty_cycle = 2202549629U;

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
    msg.setTimeStamp(0.5175089887186405);
    msg.setSource(62391U);
    msg.setSourceEntity(95U);
    msg.setDestination(40964U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.34386273029643233;
    msg.lon = 0.6987748423188522;
    msg.height = 0.6427201123923032;
    msg.x = 0.03192592220518009;
    msg.y = 0.3981674908006281;
    msg.z = 0.17040088512396023;
    msg.phi = 0.9976440671819027;
    msg.theta = 0.6499372899713118;
    msg.psi = 0.6593288666480651;
    msg.u = 0.985746883238493;
    msg.v = 0.47781031746592106;
    msg.w = 0.26564542588080453;
    msg.vx = 0.25283332191183516;
    msg.vy = 0.3434468744000896;
    msg.vz = 0.08568691010189211;
    msg.p = 0.9315147233472962;
    msg.q = 0.5501043473012465;
    msg.r = 0.8998321614466256;
    msg.depth = 0.8870654861816502;
    msg.alt = 0.8361594269505114;

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
    msg.setTimeStamp(0.8921137342737011);
    msg.setSource(31697U);
    msg.setSourceEntity(163U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.3361001982947859;
    msg.lon = 0.8748169282379629;
    msg.height = 0.6520256167944452;
    msg.x = 0.8291136282371574;
    msg.y = 0.9732146424428006;
    msg.z = 0.3402070141584237;
    msg.phi = 0.49436200001136166;
    msg.theta = 0.9694156845358204;
    msg.psi = 0.11033460805469875;
    msg.u = 0.8608617464126233;
    msg.v = 0.13745094731331475;
    msg.w = 0.14389664435555172;
    msg.vx = 0.8227388309500717;
    msg.vy = 0.010481324692146798;
    msg.vz = 0.6506532818873207;
    msg.p = 0.40418063412463145;
    msg.q = 0.014841369929632031;
    msg.r = 0.44549296023665763;
    msg.depth = 0.2675139630833293;
    msg.alt = 0.06201093605435415;

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
    msg.setTimeStamp(0.14004834424282653);
    msg.setSource(39114U);
    msg.setSourceEntity(1U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.009779125627982;
    msg.lon = 0.18790519549274676;
    msg.height = 0.5835691073715856;
    msg.x = 0.6838556617317144;
    msg.y = 0.8633191778444333;
    msg.z = 0.25805868084320494;
    msg.phi = 0.9284317440560055;
    msg.theta = 0.8907670911418326;
    msg.psi = 0.40796677639783996;
    msg.u = 0.45862614103868593;
    msg.v = 0.24212731996567616;
    msg.w = 0.23430740648888237;
    msg.vx = 0.5445964325610702;
    msg.vy = 0.842492838696612;
    msg.vz = 0.10291078118156327;
    msg.p = 0.33120322571046956;
    msg.q = 0.29385098155303524;
    msg.r = 0.4368133240077321;
    msg.depth = 0.9344586138602676;
    msg.alt = 0.8718912413935236;

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
    msg.setTimeStamp(0.7738726883323499);
    msg.setSource(55726U);
    msg.setSourceEntity(126U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(198U);
    msg.x = 0.3135865961680928;
    msg.y = 0.9229320424253004;
    msg.z = 0.75551374448608;

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
    msg.setTimeStamp(0.8078579659901695);
    msg.setSource(39910U);
    msg.setSourceEntity(27U);
    msg.setDestination(17742U);
    msg.setDestinationEntity(63U);
    msg.x = 0.8446201778211639;
    msg.y = 0.5684958637808597;
    msg.z = 0.024744033245658326;

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
    msg.setTimeStamp(0.9572754913290814);
    msg.setSource(63571U);
    msg.setSourceEntity(163U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(201U);
    msg.x = 0.7350388960966278;
    msg.y = 0.49965233030105494;
    msg.z = 0.37920349003958953;

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
    msg.setTimeStamp(0.7626437179651581);
    msg.setSource(18354U);
    msg.setSourceEntity(220U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(114U);
    msg.value = 0.12791482485380223;

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
    msg.setTimeStamp(0.9110030913533013);
    msg.setSource(14826U);
    msg.setSourceEntity(133U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6792254042245788;

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
    msg.setTimeStamp(0.5020748220997264);
    msg.setSource(60406U);
    msg.setSourceEntity(181U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(238U);
    msg.value = 0.9964802626511398;

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
    msg.setTimeStamp(0.39426224112927366);
    msg.setSource(6658U);
    msg.setSourceEntity(120U);
    msg.setDestination(35698U);
    msg.setDestinationEntity(171U);
    msg.value = 0.945409347029883;

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
    msg.setTimeStamp(0.9265048492418928);
    msg.setSource(37914U);
    msg.setSourceEntity(100U);
    msg.setDestination(63084U);
    msg.setDestinationEntity(47U);
    msg.value = 0.03356117050229612;

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
    msg.setTimeStamp(0.42529690290798206);
    msg.setSource(27136U);
    msg.setSourceEntity(234U);
    msg.setDestination(45579U);
    msg.setDestinationEntity(100U);
    msg.value = 0.19233679543794713;

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
    msg.setTimeStamp(0.10248459744629457);
    msg.setSource(13828U);
    msg.setSourceEntity(28U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(169U);
    msg.x = 0.0296973574641205;
    msg.y = 0.7529769770361338;
    msg.z = 0.5446769918543289;
    msg.phi = 0.8516010660082434;
    msg.theta = 0.3543060297346924;
    msg.psi = 0.7103025385596038;
    msg.p = 0.07924517339457615;
    msg.q = 0.5022427874050321;
    msg.r = 0.6564149803466367;
    msg.u = 0.545935963605253;
    msg.v = 0.7031352454302714;
    msg.w = 0.4254459077655528;
    msg.bias_psi = 0.43348941729275414;
    msg.bias_r = 0.8071597545203733;

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
    msg.setTimeStamp(0.39922140497316183);
    msg.setSource(62971U);
    msg.setSourceEntity(15U);
    msg.setDestination(43226U);
    msg.setDestinationEntity(53U);
    msg.x = 0.5441040579632981;
    msg.y = 0.7344449351608364;
    msg.z = 0.3460567672374858;
    msg.phi = 0.35599341868667567;
    msg.theta = 0.7245014911837074;
    msg.psi = 0.29275364410585036;
    msg.p = 0.4535439665285218;
    msg.q = 0.5087890639165227;
    msg.r = 0.4967528098249736;
    msg.u = 0.19698454978379676;
    msg.v = 0.05752921613959383;
    msg.w = 0.783234175641386;
    msg.bias_psi = 0.7760330152810735;
    msg.bias_r = 0.6387532975362122;

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
    msg.setTimeStamp(0.2738975209690224);
    msg.setSource(51459U);
    msg.setSourceEntity(224U);
    msg.setDestination(39752U);
    msg.setDestinationEntity(132U);
    msg.x = 0.6084405356723004;
    msg.y = 0.634802066752755;
    msg.z = 0.6150476725627979;
    msg.phi = 0.3801077374760031;
    msg.theta = 0.18321794701125582;
    msg.psi = 0.2759055150998243;
    msg.p = 0.24129882781702883;
    msg.q = 0.6643380756676512;
    msg.r = 0.12627149442374785;
    msg.u = 0.7095070934796976;
    msg.v = 0.357946560736901;
    msg.w = 0.7774324753630119;
    msg.bias_psi = 0.6474818662670949;
    msg.bias_r = 0.2493488092096776;

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
    msg.setTimeStamp(0.08584472971651136);
    msg.setSource(53799U);
    msg.setSourceEntity(143U);
    msg.setDestination(64186U);
    msg.setDestinationEntity(118U);
    msg.bias_psi = 0.8478828039625075;
    msg.bias_r = 0.6342754121571547;
    msg.cog = 0.9690686742551563;
    msg.cyaw = 0.7225137460052591;
    msg.lbl_rej_level = 0.44004434791289515;
    msg.gps_rej_level = 0.9867508099345915;
    msg.custom_x = 0.6920397978462671;
    msg.custom_y = 0.004424707350440427;
    msg.custom_z = 0.35817549146351624;

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
    msg.setTimeStamp(0.7578128539332487);
    msg.setSource(34356U);
    msg.setSourceEntity(223U);
    msg.setDestination(24615U);
    msg.setDestinationEntity(78U);
    msg.bias_psi = 0.34929202412241245;
    msg.bias_r = 0.3465247960816341;
    msg.cog = 0.24554089242787758;
    msg.cyaw = 0.9962198367594179;
    msg.lbl_rej_level = 0.7552287160017895;
    msg.gps_rej_level = 0.15816869276020062;
    msg.custom_x = 0.9746402358765983;
    msg.custom_y = 0.00953557927067028;
    msg.custom_z = 0.24923577639048122;

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
    msg.setTimeStamp(0.6960135183022913);
    msg.setSource(33039U);
    msg.setSourceEntity(127U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(217U);
    msg.bias_psi = 0.6317375470266777;
    msg.bias_r = 0.5567675070138766;
    msg.cog = 0.10285139080161043;
    msg.cyaw = 0.43951746136091674;
    msg.lbl_rej_level = 0.7387031150849667;
    msg.gps_rej_level = 0.9675082799165702;
    msg.custom_x = 0.29050782552056753;
    msg.custom_y = 0.2899530137902053;
    msg.custom_z = 0.9465922555364565;

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
    msg.setTimeStamp(0.5345703207085735);
    msg.setSource(63380U);
    msg.setSourceEntity(214U);
    msg.setDestination(52041U);
    msg.setDestinationEntity(11U);
    msg.utc_time = 0.3268008548743606;
    msg.reason = 114U;

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
    msg.setTimeStamp(0.8561212408690231);
    msg.setSource(5113U);
    msg.setSourceEntity(33U);
    msg.setDestination(38666U);
    msg.setDestinationEntity(247U);
    msg.utc_time = 0.7506266818083808;
    msg.reason = 220U;

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
    msg.setTimeStamp(0.919676234301289);
    msg.setSource(62358U);
    msg.setSourceEntity(68U);
    msg.setDestination(64241U);
    msg.setDestinationEntity(199U);
    msg.utc_time = 0.2294621668627912;
    msg.reason = 36U;

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
    msg.setTimeStamp(0.17485471306678346);
    msg.setSource(51558U);
    msg.setSourceEntity(8U);
    msg.setDestination(20032U);
    msg.setDestinationEntity(198U);
    msg.id = 47U;
    msg.range = 0.7931550846355749;
    msg.acceptance = 45U;

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
    msg.setTimeStamp(0.028581773299981794);
    msg.setSource(12022U);
    msg.setSourceEntity(215U);
    msg.setDestination(30220U);
    msg.setDestinationEntity(228U);
    msg.id = 0U;
    msg.range = 0.6876037517813662;
    msg.acceptance = 90U;

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
    msg.setTimeStamp(0.7142360822657279);
    msg.setSource(42604U);
    msg.setSourceEntity(105U);
    msg.setDestination(48606U);
    msg.setDestinationEntity(21U);
    msg.id = 6U;
    msg.range = 0.8789716023530082;
    msg.acceptance = 7U;

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
    msg.setTimeStamp(0.062397741613829716);
    msg.setSource(2821U);
    msg.setSourceEntity(147U);
    msg.setDestination(48430U);
    msg.setDestinationEntity(3U);
    msg.type = 190U;
    msg.reason = 32U;
    msg.value = 0.8658422018680864;
    msg.timestep = 0.7328169981808489;

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
    msg.setTimeStamp(0.6942299773083754);
    msg.setSource(19836U);
    msg.setSourceEntity(237U);
    msg.setDestination(6750U);
    msg.setDestinationEntity(92U);
    msg.type = 248U;
    msg.reason = 207U;
    msg.value = 0.4094037587757543;
    msg.timestep = 0.3072615335871901;

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
    msg.setTimeStamp(0.38847719218182675);
    msg.setSource(25381U);
    msg.setSourceEntity(203U);
    msg.setDestination(26422U);
    msg.setDestinationEntity(88U);
    msg.type = 3U;
    msg.reason = 72U;
    msg.value = 0.2909984388409663;
    msg.timestep = 0.646460028376442;

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
    msg.setTimeStamp(0.6003345824407939);
    msg.setSource(43598U);
    msg.setSourceEntity(248U);
    msg.setDestination(62786U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.023108507380996457);
    msg.setSource(65426U);
    msg.setSourceEntity(89U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.3098782345075598);
    msg.setSource(48855U);
    msg.setSourceEntity(198U);
    msg.setDestination(36205U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.8478324088215917);
    msg.setSource(8618U);
    msg.setSourceEntity(135U);
    msg.setDestination(12573U);
    msg.setDestinationEntity(141U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ULWJOUKSDYAGYXNCRKVIYXUYFCEZRUBTQSXAVBCPWWEEOLRXNYSYRFIWPEPNOBHEZCLNVPTJVMHXGRLQUSMIZKKKOAQJKXOINLAHRDTBNEDUPJXKGGHYBDHZCLBFDQGDDCUFJAOSRQJROGDMOUNGHPPZOHQQFHWLT");
    tmp_msg_0.lat = 0.3653868864477584;
    tmp_msg_0.lon = 0.9241592718930655;
    tmp_msg_0.depth = 0.5145062068605434;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 201U;
    tmp_msg_0.transponder_delay = 144U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.27196090229273573;
    msg.y = 0.0503325448264863;
    msg.var_x = 0.10717778344025641;
    msg.var_y = 0.730072382682018;
    msg.distance = 0.16814164619007965;

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
    msg.setTimeStamp(0.7682072044121395);
    msg.setSource(34733U);
    msg.setSourceEntity(239U);
    msg.setDestination(56778U);
    msg.setDestinationEntity(168U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GPXOEBZIRTSCUAOXMKSFFUXYFJIORUHXBKNRRTUHNKDRXOLZGECYQAGPEXMSDEHVFIUXWJVNLXBNGLYCYTHMAPHNLOSTTFPLMZJTQICBVGEBWCQGJBPRAYFQXYNNNPSVKWYLMCAPWKOHWPKFMAJASJADJZDHZPCKOWKYCEMFDDJKGILZGZ");
    tmp_msg_0.lat = 0.6204680496005768;
    tmp_msg_0.lon = 0.8088104004857256;
    tmp_msg_0.depth = 0.34041202962012895;
    tmp_msg_0.query_channel = 130U;
    tmp_msg_0.reply_channel = 87U;
    tmp_msg_0.transponder_delay = 160U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12086714706551815;
    msg.y = 0.9293887796926589;
    msg.var_x = 0.048776813212290215;
    msg.var_y = 0.8862101561667421;
    msg.distance = 0.6614164776072362;

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
    msg.setTimeStamp(0.045855284792461815);
    msg.setSource(12563U);
    msg.setSourceEntity(248U);
    msg.setDestination(2831U);
    msg.setDestinationEntity(6U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UNGVHNJLKDCZGVYSYEKERXLSFZYYJHIGGZDPIWUOJWZEGIHMRPIATVPDNQVYCBLUMBGPLXKOORDOAQYAEEAGBRBHWXMTRXTHVIOUBBWCXRUZDLHBJBCJJDCPSSWSSFCFJPWVPEIGLHRRNNFCGRJROKAYWMSYKMWNPFOZQQYKTEXZIJBTEIMASAQVOUKLSMKTLNUADUUDHOANVLIFVIFTVXHQDABNEMQWZXHX");
    tmp_msg_0.lat = 0.4385816100790232;
    tmp_msg_0.lon = 0.48950496527322573;
    tmp_msg_0.depth = 0.8489446741133526;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 251U;
    tmp_msg_0.transponder_delay = 81U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.959325985145076;
    msg.y = 0.6272818205082878;
    msg.var_x = 0.26499096111403186;
    msg.var_y = 0.8285751118004663;
    msg.distance = 0.09216852604772585;

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
    msg.setTimeStamp(0.1937157613871172);
    msg.setSource(16030U);
    msg.setSourceEntity(103U);
    msg.setDestination(58995U);
    msg.setDestinationEntity(150U);
    msg.state = 138U;

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
    msg.setTimeStamp(0.5612555872917666);
    msg.setSource(2686U);
    msg.setSourceEntity(133U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(25U);
    msg.state = 250U;

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
    msg.setTimeStamp(0.3860390664703387);
    msg.setSource(9379U);
    msg.setSourceEntity(153U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(13U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.4868896319026226);
    msg.setSource(44263U);
    msg.setSourceEntity(137U);
    msg.setDestination(12107U);
    msg.setDestinationEntity(77U);
    msg.x = 0.6487936336621459;
    msg.y = 0.5644026201890886;
    msg.z = 0.1359509351934277;

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
    msg.setTimeStamp(0.5168446857015677);
    msg.setSource(59440U);
    msg.setSourceEntity(99U);
    msg.setDestination(2683U);
    msg.setDestinationEntity(112U);
    msg.x = 0.7844083469949071;
    msg.y = 0.458630130414842;
    msg.z = 0.8316573331414755;

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
    msg.setTimeStamp(0.7886724180644784);
    msg.setSource(21527U);
    msg.setSourceEntity(105U);
    msg.setDestination(44247U);
    msg.setDestinationEntity(81U);
    msg.x = 0.650121673950835;
    msg.y = 0.7622207649801837;
    msg.z = 0.8381981046852507;

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
    msg.setTimeStamp(0.4064909730642404);
    msg.setSource(43367U);
    msg.setSourceEntity(243U);
    msg.setDestination(4689U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6174632127106272;

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
    msg.setTimeStamp(0.6439377215332783);
    msg.setSource(49656U);
    msg.setSourceEntity(55U);
    msg.setDestination(50509U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6705322215540687;

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
    msg.setTimeStamp(0.10016859245623366);
    msg.setSource(708U);
    msg.setSourceEntity(174U);
    msg.setDestination(64730U);
    msg.setDestinationEntity(22U);
    msg.value = 0.03975923077032606;

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
    msg.setTimeStamp(0.23024777916209394);
    msg.setSource(37316U);
    msg.setSourceEntity(9U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7867451297697685;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.8550931426841917);
    msg.setSource(44570U);
    msg.setSourceEntity(235U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(23U);
    msg.value = 0.2949971678778822;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.33650667519905564);
    msg.setSource(15047U);
    msg.setSourceEntity(192U);
    msg.setDestination(63916U);
    msg.setDestinationEntity(191U);
    msg.value = 0.27120445659339065;
    msg.z_units = 78U;

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
    msg.setTimeStamp(0.9682356429501374);
    msg.setSource(63978U);
    msg.setSourceEntity(92U);
    msg.setDestination(51790U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8560713462895329;
    msg.speed_units = 220U;

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
    msg.setTimeStamp(0.64678802708985);
    msg.setSource(20479U);
    msg.setSourceEntity(196U);
    msg.setDestination(13783U);
    msg.setDestinationEntity(20U);
    msg.value = 0.6160862029448413;
    msg.speed_units = 43U;

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
    msg.setTimeStamp(0.5484384110667733);
    msg.setSource(63022U);
    msg.setSourceEntity(243U);
    msg.setDestination(44517U);
    msg.setDestinationEntity(128U);
    msg.value = 0.009939342014353314;
    msg.speed_units = 11U;

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
    msg.setTimeStamp(0.5346392835364638);
    msg.setSource(44703U);
    msg.setSourceEntity(88U);
    msg.setDestination(9642U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6827564686800903;

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
    msg.setTimeStamp(0.03651902080516667);
    msg.setSource(29669U);
    msg.setSourceEntity(163U);
    msg.setDestination(15687U);
    msg.setDestinationEntity(1U);
    msg.value = 0.6870670027800916;

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
    msg.setTimeStamp(0.15819844543089356);
    msg.setSource(7352U);
    msg.setSourceEntity(165U);
    msg.setDestination(51969U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6077780196269336;

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
    msg.setTimeStamp(0.7066789105317909);
    msg.setSource(22673U);
    msg.setSourceEntity(4U);
    msg.setDestination(40426U);
    msg.setDestinationEntity(220U);
    msg.value = 0.5120597324540879;

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
    msg.setTimeStamp(0.7056708747029949);
    msg.setSource(31720U);
    msg.setSourceEntity(34U);
    msg.setDestination(20703U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1886673431180652;

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
    msg.setTimeStamp(0.2584481598946077);
    msg.setSource(17395U);
    msg.setSourceEntity(161U);
    msg.setDestination(44146U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4967049386356097;

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
    msg.setTimeStamp(0.7923841933457143);
    msg.setSource(57327U);
    msg.setSourceEntity(51U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(135U);
    msg.value = 0.2430034422605457;

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
    msg.setTimeStamp(0.12073493534176472);
    msg.setSource(25272U);
    msg.setSourceEntity(25U);
    msg.setDestination(50276U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3634749307647711;

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
    msg.setTimeStamp(0.3049644701440448);
    msg.setSource(25472U);
    msg.setSourceEntity(180U);
    msg.setDestination(31321U);
    msg.setDestinationEntity(64U);
    msg.value = 0.24091149194864803;

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
    msg.setTimeStamp(0.35008448980247764);
    msg.setSource(3728U);
    msg.setSourceEntity(121U);
    msg.setDestination(12426U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 1557674169U;
    msg.start_lat = 0.48254998891604417;
    msg.start_lon = 0.4190345356973225;
    msg.start_z = 0.2876408185593732;
    msg.start_z_units = 0U;
    msg.end_lat = 0.653876826270843;
    msg.end_lon = 0.8419428590166557;
    msg.end_z = 0.572611470449248;
    msg.end_z_units = 99U;
    msg.speed = 0.12025448102510794;
    msg.speed_units = 20U;
    msg.lradius = 0.42763660068988907;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.8229195931235823);
    msg.setSource(44766U);
    msg.setSourceEntity(184U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 80972039U;
    msg.start_lat = 0.7271138001597354;
    msg.start_lon = 0.009068685921731934;
    msg.start_z = 0.6364472774172286;
    msg.start_z_units = 109U;
    msg.end_lat = 0.032760963198269266;
    msg.end_lon = 0.6499984304063704;
    msg.end_z = 0.039905940935149764;
    msg.end_z_units = 82U;
    msg.speed = 0.2609674510841813;
    msg.speed_units = 196U;
    msg.lradius = 0.8099277329882963;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.2069721832487581);
    msg.setSource(41556U);
    msg.setSourceEntity(74U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 4216740456U;
    msg.start_lat = 0.3523847495881285;
    msg.start_lon = 0.8485427035255495;
    msg.start_z = 0.664405220713297;
    msg.start_z_units = 211U;
    msg.end_lat = 0.4418725140462244;
    msg.end_lon = 0.5150224153039307;
    msg.end_z = 0.8126105300136962;
    msg.end_z_units = 3U;
    msg.speed = 0.5548352240372202;
    msg.speed_units = 33U;
    msg.lradius = 0.47435703889769076;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.379794284224082);
    msg.setSource(26654U);
    msg.setSourceEntity(225U);
    msg.setDestination(56364U);
    msg.setDestinationEntity(99U);
    msg.x = 0.8421158143016549;
    msg.y = 0.2277657494854194;
    msg.z = 0.3044459680917114;
    msg.k = 0.12499364449130601;
    msg.m = 0.8789619955505873;
    msg.n = 0.12490376644885182;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.9449605954925722);
    msg.setSource(64854U);
    msg.setSourceEntity(37U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(244U);
    msg.x = 0.687689954867972;
    msg.y = 0.037226571551928656;
    msg.z = 0.2663090440464658;
    msg.k = 0.6571613139510181;
    msg.m = 0.6147705501773748;
    msg.n = 0.08358264394988424;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.0175549401078966);
    msg.setSource(15200U);
    msg.setSourceEntity(125U);
    msg.setDestination(27847U);
    msg.setDestinationEntity(81U);
    msg.x = 0.5173670126668725;
    msg.y = 0.326250201530075;
    msg.z = 0.8574264644796763;
    msg.k = 0.7864428379482165;
    msg.m = 0.16937654034473915;
    msg.n = 0.03110550771731746;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.48775912881938055);
    msg.setSource(61453U);
    msg.setSourceEntity(138U);
    msg.setDestination(23713U);
    msg.setDestinationEntity(75U);
    msg.value = 0.5926653027442594;

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
    msg.setTimeStamp(0.16888931409366736);
    msg.setSource(36230U);
    msg.setSourceEntity(19U);
    msg.setDestination(63568U);
    msg.setDestinationEntity(247U);
    msg.value = 0.1953386720145781;

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
    msg.setTimeStamp(0.7249726654153716);
    msg.setSource(34218U);
    msg.setSourceEntity(70U);
    msg.setDestination(30456U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9422102345783361;

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
    msg.setTimeStamp(0.4095670679289076);
    msg.setSource(21673U);
    msg.setSourceEntity(19U);
    msg.setDestination(26646U);
    msg.setDestinationEntity(111U);
    msg.u = 0.6312584203341679;
    msg.v = 0.3193922816877165;
    msg.w = 0.15854490164182866;
    msg.p = 0.6006122536294539;
    msg.q = 0.7821962341447163;
    msg.r = 0.23661098417235849;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.2797057397285386);
    msg.setSource(28128U);
    msg.setSourceEntity(88U);
    msg.setDestination(62481U);
    msg.setDestinationEntity(178U);
    msg.u = 0.21667848253587563;
    msg.v = 0.8249208670448115;
    msg.w = 0.560179688692974;
    msg.p = 0.39835054524584257;
    msg.q = 0.7420868487802691;
    msg.r = 0.4731214521328425;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.45979446354181586);
    msg.setSource(51199U);
    msg.setSourceEntity(164U);
    msg.setDestination(48882U);
    msg.setDestinationEntity(167U);
    msg.u = 0.26066482984677364;
    msg.v = 0.16763335057951811;
    msg.w = 0.6919782476577275;
    msg.p = 0.44374262610524684;
    msg.q = 0.16526036173260705;
    msg.r = 0.9555661449151603;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.06923339257049377);
    msg.setSource(59548U);
    msg.setSourceEntity(188U);
    msg.setDestination(50421U);
    msg.setDestinationEntity(225U);
    msg.path_ref = 3460576306U;
    msg.start_lat = 0.20508886705084317;
    msg.start_lon = 0.7934698524900031;
    msg.start_z = 0.15916054819164704;
    msg.start_z_units = 153U;
    msg.end_lat = 0.9982559273607666;
    msg.end_lon = 0.6643462925790751;
    msg.end_z = 0.14302717487672112;
    msg.end_z_units = 161U;
    msg.lradius = 0.23708579699925458;
    msg.flags = 101U;
    msg.x = 0.6612248571278029;
    msg.y = 0.3012018901066015;
    msg.z = 0.05524267964155227;
    msg.vx = 0.9126141658721255;
    msg.vy = 0.5964522896957762;
    msg.vz = 0.19975004220829073;
    msg.course_error = 0.15653252996484368;
    msg.eta = 20600U;

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
    msg.setTimeStamp(0.5086998265746642);
    msg.setSource(1286U);
    msg.setSourceEntity(251U);
    msg.setDestination(48636U);
    msg.setDestinationEntity(101U);
    msg.path_ref = 836583286U;
    msg.start_lat = 0.6444348408665049;
    msg.start_lon = 0.27398980929622674;
    msg.start_z = 0.4307362656456062;
    msg.start_z_units = 124U;
    msg.end_lat = 0.701599490314069;
    msg.end_lon = 0.2193537942848549;
    msg.end_z = 0.39009560144188726;
    msg.end_z_units = 176U;
    msg.lradius = 0.5932622526921254;
    msg.flags = 248U;
    msg.x = 0.4093103110817128;
    msg.y = 0.7803177567452237;
    msg.z = 0.1791977816251622;
    msg.vx = 0.6131499228120997;
    msg.vy = 0.3871395041899117;
    msg.vz = 0.5382018279127246;
    msg.course_error = 0.7969340066621087;
    msg.eta = 23642U;

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
    msg.setTimeStamp(0.7576908543351839);
    msg.setSource(18695U);
    msg.setSourceEntity(238U);
    msg.setDestination(10691U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 3845133807U;
    msg.start_lat = 0.93333140402438;
    msg.start_lon = 0.515090308623544;
    msg.start_z = 0.8081270741559861;
    msg.start_z_units = 100U;
    msg.end_lat = 0.8226688041295036;
    msg.end_lon = 0.9772978306964988;
    msg.end_z = 0.1383173299521091;
    msg.end_z_units = 38U;
    msg.lradius = 0.05975900193453987;
    msg.flags = 180U;
    msg.x = 0.28008118835110263;
    msg.y = 0.8656175291197451;
    msg.z = 0.7986337852350835;
    msg.vx = 0.40011192082901637;
    msg.vy = 0.46389045500827075;
    msg.vz = 0.32453638563689213;
    msg.course_error = 0.015356452212644478;
    msg.eta = 29867U;

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
    msg.setTimeStamp(0.8303116357180197);
    msg.setSource(7129U);
    msg.setSourceEntity(143U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(109U);
    msg.k = 0.6164280244849165;
    msg.m = 0.3842766969575965;
    msg.n = 0.8898241359386669;

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
    msg.setTimeStamp(0.8120674265619474);
    msg.setSource(2856U);
    msg.setSourceEntity(12U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(53U);
    msg.k = 0.5097011513482921;
    msg.m = 0.07728717087219517;
    msg.n = 0.8396779529858656;

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
    msg.setTimeStamp(0.6146895134459437);
    msg.setSource(14018U);
    msg.setSourceEntity(155U);
    msg.setDestination(29122U);
    msg.setDestinationEntity(137U);
    msg.k = 0.05990596661265224;
    msg.m = 0.10620174453168263;
    msg.n = 0.23061446981671985;

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
    msg.setTimeStamp(0.22854310552913815);
    msg.setSource(2436U);
    msg.setSourceEntity(100U);
    msg.setDestination(62481U);
    msg.setDestinationEntity(58U);
    msg.p = 0.592860288550398;
    msg.i = 0.5845661762767876;
    msg.d = 0.6831153490275975;
    msg.a = 0.9677011728791016;

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
    msg.setTimeStamp(0.37804912815990255);
    msg.setSource(12972U);
    msg.setSourceEntity(100U);
    msg.setDestination(30871U);
    msg.setDestinationEntity(62U);
    msg.p = 0.011490732015721927;
    msg.i = 0.079813825369358;
    msg.d = 0.6525355933264272;
    msg.a = 0.38036964387944694;

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
    msg.setTimeStamp(0.3928319156849033);
    msg.setSource(16254U);
    msg.setSourceEntity(59U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(137U);
    msg.p = 0.8356134494006423;
    msg.i = 0.4872648273736835;
    msg.d = 0.9659213182921879;
    msg.a = 0.2539810028795709;

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
    msg.setTimeStamp(0.5195251352722791);
    msg.setSource(20570U);
    msg.setSourceEntity(19U);
    msg.setDestination(36157U);
    msg.setDestinationEntity(85U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.069750870844973);
    msg.setSource(5602U);
    msg.setSourceEntity(203U);
    msg.setDestination(32987U);
    msg.setDestinationEntity(246U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.9616604834502661);
    msg.setSource(48301U);
    msg.setSourceEntity(53U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(209U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.04453811296134358);
    msg.setSource(11756U);
    msg.setSourceEntity(7U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(105U);
    msg.timeout = 35523U;
    msg.lat = 0.8527050037081666;
    msg.lon = 0.2850991034269239;
    msg.z = 0.5923715375022616;
    msg.z_units = 19U;
    msg.speed = 0.022036782498564444;
    msg.speed_units = 94U;
    msg.roll = 0.6237442053786425;
    msg.pitch = 0.921078171416641;
    msg.yaw = 0.24899727814766126;
    msg.custom.assign("ONMNOSPVAVGDSXWNEJZCLJASHKYCIWMNTQAFPBAYKUAEMSPPLKGNXHMNUTKOBZBXVQYWFHYWOCHTDGTWMWOAGFXECFGEKAPEJXZSICXKQODYHIZUFMCDFRZEVXDTMUTNHELTVRRTQJLOCOSAWFHRQUIRZVZNIWNCWMWQR");

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
    msg.setTimeStamp(0.1449364504865811);
    msg.setSource(29307U);
    msg.setSourceEntity(57U);
    msg.setDestination(52349U);
    msg.setDestinationEntity(61U);
    msg.timeout = 49705U;
    msg.lat = 0.8862081154920023;
    msg.lon = 0.8821378724599115;
    msg.z = 0.8133707657887501;
    msg.z_units = 182U;
    msg.speed = 0.4701527217769276;
    msg.speed_units = 154U;
    msg.roll = 0.06083114018112179;
    msg.pitch = 0.3429991288798042;
    msg.yaw = 0.02800787423988005;
    msg.custom.assign("TVTMOZJHENIDZPOKZNERBMQTDEWSWEAABCQICOWSFCXFYCUKEJOSPSTCUJHNMPGQSDVUGWNIFDOZQYSLVFLNPEQDMDRWG");

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
    msg.setTimeStamp(0.06213926355360955);
    msg.setSource(59664U);
    msg.setSourceEntity(192U);
    msg.setDestination(46339U);
    msg.setDestinationEntity(166U);
    msg.timeout = 33092U;
    msg.lat = 0.7590265705196355;
    msg.lon = 0.5930438735267494;
    msg.z = 0.8052731307311688;
    msg.z_units = 30U;
    msg.speed = 0.23800832340102607;
    msg.speed_units = 120U;
    msg.roll = 0.5671457549302047;
    msg.pitch = 0.4225884514485202;
    msg.yaw = 0.10231490793684728;
    msg.custom.assign("MZXADFKWYQAJSZLFQJTRJIQHLQEABOOOQAPELYMTMCJCOIHXGUECPKVDRTCWHTNSBSDDMGJQXNNJQCUHNRLCBKEFGVYRZOLQVTLISWHYPWRFIAGVBWYNLXRUXGAUSJRVCIUDENHCQLXHTNZBBBHOABGYSZVDAFVWEDMRPYGFEWKWZKVFTVSBMLTXPTKGFPEQIKAMMNESDX");

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
    msg.setTimeStamp(0.8830815698935888);
    msg.setSource(1975U);
    msg.setSourceEntity(100U);
    msg.setDestination(48863U);
    msg.setDestinationEntity(9U);
    msg.timeout = 51961U;
    msg.lat = 0.22349333659210346;
    msg.lon = 0.17282100768001218;
    msg.z = 0.9684445676436018;
    msg.z_units = 86U;
    msg.speed = 0.1279995926751275;
    msg.speed_units = 140U;
    msg.duration = 23134U;
    msg.radius = 0.9648372163258742;
    msg.flags = 195U;
    msg.custom.assign("ILJRNRAJVQZWBMVUNBSDEYVBPAUFOWUMFYXPAZLJUOBQURAFIGLCHCDWGAATQCEGLOXUOKTKSPOQSAAOZMDZGGUENPBFINGCIYDKXCLCQIITZOJWCHUYHNHHDDFIRZXJHJYRGEOPFKUNPKDSMWKMKSEREJTQGQUMVVDJLXRJSPNQFPCTXVMWSAFYZTXZOVYRTZKMYITGVNYDBLVWHNBNJTEYPBWHWEIRRSOWISFXCZDXLXELBQKASMHGQ");

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
    msg.setTimeStamp(0.17089456592259256);
    msg.setSource(22529U);
    msg.setSourceEntity(104U);
    msg.setDestination(26544U);
    msg.setDestinationEntity(8U);
    msg.timeout = 30895U;
    msg.lat = 0.6520311763067976;
    msg.lon = 0.6353041641249733;
    msg.z = 0.30102930258810656;
    msg.z_units = 87U;
    msg.speed = 0.3752268452366051;
    msg.speed_units = 250U;
    msg.duration = 12234U;
    msg.radius = 0.9523125133563977;
    msg.flags = 194U;
    msg.custom.assign("GQHJIBVXETSQJLPUWKWFMXFZXYWYDYRHVWBEMNOCYTYOFWZJXAEOGAIZGPQDGQLSZFWFKUXCBFQPEJUSCMCCLKGHZZJRIMYKSYORXHBPDIXNXUFWALWYOIRVRYZQPBTBGFVFGDNNTASDILRTBOREWLNVSNHXSKVUKQTJPAXPUUTSTYVUV");

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
    msg.setTimeStamp(0.9484243400493614);
    msg.setSource(41397U);
    msg.setSourceEntity(144U);
    msg.setDestination(15671U);
    msg.setDestinationEntity(0U);
    msg.timeout = 9255U;
    msg.lat = 0.17072932933049956;
    msg.lon = 0.28069217576108374;
    msg.z = 0.3703678415327156;
    msg.z_units = 206U;
    msg.speed = 0.5800710923542953;
    msg.speed_units = 40U;
    msg.duration = 4383U;
    msg.radius = 0.39736789459863;
    msg.flags = 175U;
    msg.custom.assign("VSHFMIZEOLTOKILURMOBIGSERSIQCHULFMAUJYMHTSEMJUKJBLYEXRRVGZGDQHCSQXCAPCVQXPXFXWWMYAJWKGYDWPUSTNJHQUCY");

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
    msg.setTimeStamp(0.2445966758452609);
    msg.setSource(25661U);
    msg.setSourceEntity(181U);
    msg.setDestination(41149U);
    msg.setDestinationEntity(224U);
    msg.custom.assign("BXAOKZMSSQRQVFQDADLTNTQUDIJNMYVYQZLFETAYJSPDSUVUDCSIEHHYAIAUNMBZGTCYBLXKLAKVCCGECXSVFPBPCFKQJBUHGCJFSUTEKXVWJUPAIYIOXARFZYFWXXLSWWIZOHPRUIMXROBJQCKHEQHRTYNEBTKNVIEUDVUJCNKFVLGYEJR");

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
    msg.setTimeStamp(0.4825730582630948);
    msg.setSource(46363U);
    msg.setSourceEntity(89U);
    msg.setDestination(21107U);
    msg.setDestinationEntity(59U);
    msg.custom.assign("MTXLJEKOTHDJIFEMRVGQQQOJKTHBWBECCHRSAURKIDUPVKWFLLHDZZMGYNEZCOXYDQMLUUEAMVSZXAWWSUWEUCHXVBTTGYQZRCYUJYIMNFIOVSOSCONZDNAJPQRVAZSJWWBHNYXEXDVLSKHAIGFYJPMZBTFEFGSBDHFKPJXZZRLBNDCNHB");

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
    msg.setTimeStamp(0.3276071377098889);
    msg.setSource(2667U);
    msg.setSourceEntity(47U);
    msg.setDestination(11279U);
    msg.setDestinationEntity(171U);
    msg.custom.assign("RODEZTXEMJXNYQSRFEJKNDULCMBRTWZNFPWIXOQXFOZOWODWPETDNVAIBAEMSUTLGEMCOQVNFJRFENYJPEYHYOSSTHTLVLZUQMVFANCRAJMHGVPSRDJDO");

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
    msg.setTimeStamp(0.043442518914601935);
    msg.setSource(63803U);
    msg.setSourceEntity(248U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(85U);
    msg.timeout = 60383U;
    msg.lat = 0.5378238321842647;
    msg.lon = 0.1712355361794916;
    msg.z = 0.523976031259127;
    msg.z_units = 0U;
    msg.duration = 45140U;
    msg.speed = 0.18919971612349062;
    msg.speed_units = 63U;
    msg.type = 187U;
    msg.radius = 0.9843333650685893;
    msg.length = 0.24718393556022467;
    msg.bearing = 0.9785356102223205;
    msg.direction = 88U;
    msg.custom.assign("GZZHYKBAEQMSEIAUXXRTLDDXUFTWVLWSJ");

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
    msg.setTimeStamp(0.7479236543486779);
    msg.setSource(30159U);
    msg.setSourceEntity(86U);
    msg.setDestination(40152U);
    msg.setDestinationEntity(95U);
    msg.timeout = 63172U;
    msg.lat = 0.5159284354379506;
    msg.lon = 0.368555802496364;
    msg.z = 0.09832886941352093;
    msg.z_units = 214U;
    msg.duration = 16789U;
    msg.speed = 0.3185179489902592;
    msg.speed_units = 97U;
    msg.type = 249U;
    msg.radius = 0.6850973494680278;
    msg.length = 0.44125860912112813;
    msg.bearing = 0.4256502011801311;
    msg.direction = 192U;
    msg.custom.assign("CSMUVPHCOZNEHPEAGGKWHVKYRFEWYHMJRSSVWQVWMLWESBUASDGNMWLKQTKFZTYOEERQQPVYDWLJDJQOLTOQZCVHZDSIYEBJGPONLIFKTNBXDPTXHCIXOHMTEXZRRBZNCCSDQWFYAMZPCNJDGCAGLQXJVPMULRBGZZNFBAJHTACFBXTHEABOGPKRSXWYIEKJIXVCIFULGUVTDJWSOVPRYLSYDGJOMLKXXIHMYMNRKAFRBIQKPAUFNZAUO");

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
    msg.setTimeStamp(0.23100516301799967);
    msg.setSource(14812U);
    msg.setSourceEntity(8U);
    msg.setDestination(56683U);
    msg.setDestinationEntity(116U);
    msg.timeout = 32356U;
    msg.lat = 0.29408612435178294;
    msg.lon = 0.1675541305662095;
    msg.z = 0.4452551634026284;
    msg.z_units = 245U;
    msg.duration = 56316U;
    msg.speed = 0.35434356017539914;
    msg.speed_units = 2U;
    msg.type = 159U;
    msg.radius = 0.9445701401163242;
    msg.length = 0.8450830472034726;
    msg.bearing = 0.6303485357964548;
    msg.direction = 53U;
    msg.custom.assign("CHPOGPWMQFBBSDXZANACKQATGCZKAJSZKHYBNEZPWWQOKSVTJLUQYPDYZIMPVPUJRDJJIKQCGREUYXBTRKRFNDGHRHGOWIVNWFFMCLLDYNXXMTFQQJNHSCGGPQSUUBEEJVYXLHPMHOPVJSOIRZDWVZCTEHDRUH");

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
    msg.setTimeStamp(0.57100737197629);
    msg.setSource(9260U);
    msg.setSourceEntity(39U);
    msg.setDestination(41058U);
    msg.setDestinationEntity(45U);
    msg.duration = 51645U;
    msg.custom.assign("BMSLDQKCAQLIHMYRRNXVMGTUVEQWCLDUTSOXYDWRLEIJJOYLGECQOVLHJIZPKGMPGKRJOUSRWMJYCMAHTVAVXIGRANPXTEBLYSECCIBRCZFYKQTNARVAVLOOGFBFSDFYROMSFTAIZPIDKZPJJZXV");

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
    msg.setTimeStamp(0.7147060796741445);
    msg.setSource(11814U);
    msg.setSourceEntity(222U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(177U);
    msg.duration = 27571U;
    msg.custom.assign("QHSUYOVWNPQSUWWVAJAZVNIMREQELTEGTCKXOQXNBDDFOCJKFEPJHCWLTACSKRYDLFDYMGNBBCOYKNMKNXBQJAIUQZVAGS");

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
    msg.setTimeStamp(0.793951040133454);
    msg.setSource(33211U);
    msg.setSourceEntity(194U);
    msg.setDestination(45922U);
    msg.setDestinationEntity(187U);
    msg.duration = 54122U;
    msg.custom.assign("QKEHDQBLAJIEDJCNAXABOONWXJFYDALFPWECBMGQDZVBGKVKTKKSOFCDVKUBTPVGPLZWDMQIDQBVRIZBHOYPEPQPEALEWJRDZNSGQOWIYRSNXDCHXPVFRGFMOGKMTXRFLAWOXGTSUMQTIZZRATCSHUUXJOEZFGUKWJULIGBJXBZUWJPVULYCRIHMCLASHNOM");

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
    msg.setTimeStamp(0.6546430205228608);
    msg.setSource(48729U);
    msg.setSourceEntity(138U);
    msg.setDestination(9116U);
    msg.setDestinationEntity(10U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2264156157639987;
    tmp_msg_0.speed_units = 64U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51033U;
    msg.custom.assign("CBRIZYTQFKSSOASJYIBCWASBYKPDLAIQOEIYVQDPFABSNUHYQUFMHAYKGQXOVNQMTAXMCJTENNEFGWPJQRFKGWBJIEHUCAEZYHDSDPXNZCSMBJFJWVLXMUKWORYQBJLDSRFEGVZDZWCGOGBHODBUYSVVRGPZUAIUTLTNKCATJRVVTHXMFKYWLPBRPLXHTZMLMIEPGCQLNZOXDWOJKDTVUGCCFZR");

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
    msg.setTimeStamp(0.44903422438256724);
    msg.setSource(9106U);
    msg.setSourceEntity(228U);
    msg.setDestination(33439U);
    msg.setDestinationEntity(185U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6280883743688427;
    msg.control.set(tmp_msg_0);
    msg.duration = 36149U;
    msg.custom.assign("GNGXUFSWHAVALTZHGBOSJAUFCFMLJBRAVZIXYPNIKNVWNHYPOXOZNPJRKIWDUEGJTMGLDKTTMHAUKRKBXCVCJEGDVRPGQALVFPINWLJIJNMIIUBKSUT");

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
    msg.setTimeStamp(0.5472062170201141);
    msg.setSource(36657U);
    msg.setSourceEntity(7U);
    msg.setDestination(11258U);
    msg.setDestinationEntity(174U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3827084387U;
    tmp_msg_0.start_lat = 0.8612729033154649;
    tmp_msg_0.start_lon = 0.13711715470737385;
    tmp_msg_0.start_z = 0.28329396491832315;
    tmp_msg_0.start_z_units = 53U;
    tmp_msg_0.end_lat = 0.4054486064012427;
    tmp_msg_0.end_lon = 0.35399938199243786;
    tmp_msg_0.end_z = 0.0833152617293198;
    tmp_msg_0.end_z_units = 222U;
    tmp_msg_0.speed = 0.4565596567396195;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.lradius = 0.6959778020426637;
    tmp_msg_0.flags = 178U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46718U;
    msg.custom.assign("XLOLNRGMAKNDQOGKBPHZNZVGHTGLWWKAIRERONMIXCVCYHYITWDQNGBBETDSNFZHCRBFQTRUQHUOMQDEEJPKMZGRUPRAYZWQDBFNNZNUMCYCKQCOBSXRWIUKLJADSZEJJTUSXLJLCIXITGTYAVZJAMRJRWPZHQMVDVY");

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
    msg.setTimeStamp(0.6318369565374421);
    msg.setSource(51841U);
    msg.setSourceEntity(126U);
    msg.setDestination(36954U);
    msg.setDestinationEntity(17U);
    msg.timeout = 33277U;
    msg.lat = 0.01272162765896001;
    msg.lon = 0.4277617029668461;
    msg.z = 0.181794305888212;
    msg.z_units = 243U;
    msg.speed = 0.13209095777403024;
    msg.speed_units = 201U;
    msg.bearing = 0.07472998032478617;
    msg.cross_angle = 0.199914247774719;
    msg.width = 0.9017728266645457;
    msg.length = 0.3932368935402112;
    msg.hstep = 0.19434880674165833;
    msg.coff = 231U;
    msg.alternation = 149U;
    msg.flags = 208U;
    msg.custom.assign("QZEWXFPKERDDKCUHRLVRSWSECAVSUDPTBDQXNTDYDGWBNNBJARDTFRFLAOVCJFIGZYIKCLPWSRIFKSBGSQJVOOXTILHXIJFGBQEHFIZXVKGQPFHNOENVLQFMHCCRMYHSWKAOJWRCLGYSYNR");

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
    msg.setTimeStamp(0.7400506760267322);
    msg.setSource(50794U);
    msg.setSourceEntity(10U);
    msg.setDestination(50866U);
    msg.setDestinationEntity(85U);
    msg.timeout = 50524U;
    msg.lat = 0.5410411253057905;
    msg.lon = 0.1617427280124326;
    msg.z = 0.4051834807805469;
    msg.z_units = 104U;
    msg.speed = 0.3382976582785854;
    msg.speed_units = 213U;
    msg.bearing = 0.7523302620093589;
    msg.cross_angle = 0.5936065759266441;
    msg.width = 0.7794085428858342;
    msg.length = 0.5669617492390472;
    msg.hstep = 0.14536195285349762;
    msg.coff = 11U;
    msg.alternation = 55U;
    msg.flags = 59U;
    msg.custom.assign("CULNJARKSDRBMHTNUNVIOYHQJMKFIHIGBUREFCGHWOPCTYDOYALNLDIKZEEJVBNVUATGOTBTFGJUMKFSBOEXMGGKXESVSEYUOWMHLWCVLGANVYHCCTQZZDIIVEWMHPLFL");

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
    msg.setTimeStamp(0.25107463707354205);
    msg.setSource(49181U);
    msg.setSourceEntity(14U);
    msg.setDestination(36509U);
    msg.setDestinationEntity(184U);
    msg.timeout = 43426U;
    msg.lat = 0.9790980375779069;
    msg.lon = 0.586196871252766;
    msg.z = 0.7418869445591838;
    msg.z_units = 187U;
    msg.speed = 0.272769579683099;
    msg.speed_units = 186U;
    msg.bearing = 0.37835297401734813;
    msg.cross_angle = 0.6087286600525571;
    msg.width = 0.23849632659611897;
    msg.length = 0.6857566650972814;
    msg.hstep = 0.9600229715285071;
    msg.coff = 66U;
    msg.alternation = 209U;
    msg.flags = 140U;
    msg.custom.assign("EHPNCLNPPUAHKHFGTAWNYAKCQOSLPESHCMGNLZLLAKCUVMHJQWIYZIGASAABOXVUWEJQMGUNRXTLJXPTCQLYOUSGZWVVBMJBCERIMQMXQAHRIZDBVOOEIJZDWOBYSUPKXNTVSIYSNDTESEKFDJADGPCKNK");

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
    msg.setTimeStamp(0.19424562517107813);
    msg.setSource(25700U);
    msg.setSourceEntity(17U);
    msg.setDestination(61472U);
    msg.setDestinationEntity(86U);
    msg.timeout = 8717U;
    msg.lat = 0.3558760527418927;
    msg.lon = 0.7338687009782634;
    msg.z = 0.9676735870546893;
    msg.z_units = 195U;
    msg.speed = 0.707183641356895;
    msg.speed_units = 1U;
    msg.custom.assign("FKIVVCMLLSCWWPPAAATUXZUZSWMIKBYNVPXDRBJTWMEQYODKGTGCWUAUFBHTDELTFXCCJQBJOTJNIFMYCBQLOVBHBKOMSI");

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
    msg.setTimeStamp(0.9056677509692193);
    msg.setSource(46975U);
    msg.setSourceEntity(75U);
    msg.setDestination(7999U);
    msg.setDestinationEntity(64U);
    msg.timeout = 772U;
    msg.lat = 0.4456522174320321;
    msg.lon = 0.38372557368865134;
    msg.z = 0.34479035771062105;
    msg.z_units = 232U;
    msg.speed = 0.16009745296903355;
    msg.speed_units = 200U;
    msg.custom.assign("RDYBUTNQLZHORGYQOQOGZAJKEPRNRZFALUEZDMFJMUNZLYHXGSKKVQYRUWLROQWWQTWMAOWSLLIHYHRDIYEMDBCAEVW");

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
    msg.setTimeStamp(0.9039948869508087);
    msg.setSource(54362U);
    msg.setSourceEntity(198U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(151U);
    msg.timeout = 25521U;
    msg.lat = 0.5022667142557965;
    msg.lon = 0.8294584304841287;
    msg.z = 0.5769267232870202;
    msg.z_units = 190U;
    msg.speed = 0.8206681097180056;
    msg.speed_units = 19U;
    msg.custom.assign("YZHBKFQEOWRIOFIRPNAXBSJOEKTZOMKHBALQEKCSZSSXNSKOMIFHYWYXLNGWXAYNHGCUCAYJNEWMGBJGXFXLKSQZOPCCDRKSIELMLVRTGDGCRZSLMORPGBUHUEVXIVRDTPQAMMOZNYUISDHCTFGHTBCVRNHQGUJAQAEJZQDAJSMWLCJYJZGQEYXZAXDEOUUBPBIKLWNQTPTFHWVFHDRYFPOJMBCPTU");

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
    msg.setTimeStamp(0.3475177353511718);
    msg.setSource(17929U);
    msg.setSourceEntity(214U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(33U);
    msg.x = 0.989716368816866;
    msg.y = 0.7124225398677437;
    msg.z = 0.101028150889104;

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
    msg.setTimeStamp(0.23943431768093715);
    msg.setSource(44258U);
    msg.setSourceEntity(217U);
    msg.setDestination(1291U);
    msg.setDestinationEntity(2U);
    msg.x = 0.01867475051599765;
    msg.y = 0.4572187208940487;
    msg.z = 0.8021361881287312;

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
    msg.setTimeStamp(0.480172153149666);
    msg.setSource(24412U);
    msg.setSourceEntity(140U);
    msg.setDestination(32704U);
    msg.setDestinationEntity(46U);
    msg.x = 0.11019591847671373;
    msg.y = 0.9576957603397522;
    msg.z = 0.6115694403648798;

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
    msg.setTimeStamp(0.13435286031492366);
    msg.setSource(12195U);
    msg.setSourceEntity(202U);
    msg.setDestination(39613U);
    msg.setDestinationEntity(254U);
    msg.timeout = 27325U;
    msg.lat = 0.011764163368899072;
    msg.lon = 0.27558488034204887;
    msg.z = 0.2734507553848965;
    msg.z_units = 233U;
    msg.amplitude = 0.553126092721594;
    msg.pitch = 0.7708022564152331;
    msg.speed = 0.23729650896092735;
    msg.speed_units = 252U;
    msg.custom.assign("AXACGRJNPJPXPPESNATYBAVLPGTMCSLMHTNOHHJOCKPIZTHTVSNGNBZYFDENMMTLDNOUCLPPQDIUFEYWGFEQWOOUJEFWDUOZZKGVXHKADYXITZKXEWQRTBXYKJRGUAMCFZULICRTNHLMZYPVFRLKKULDRBYBGLZCDRMAPSVYHOOCOKZWJFJERGEVJJXSUSVAYHCWDUVGIJEIQNMXH");

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
    msg.setTimeStamp(0.2415582945892797);
    msg.setSource(50525U);
    msg.setSourceEntity(20U);
    msg.setDestination(64354U);
    msg.setDestinationEntity(2U);
    msg.timeout = 13679U;
    msg.lat = 0.21151295487061894;
    msg.lon = 0.18589183648318797;
    msg.z = 0.07946309030807408;
    msg.z_units = 218U;
    msg.amplitude = 0.20456886266457996;
    msg.pitch = 0.23542597843970492;
    msg.speed = 0.9149732064947143;
    msg.speed_units = 223U;
    msg.custom.assign("SKGXMCKQQKLPVJPDZAKGTFUIKBFMGZSWBPBIAZWCMUTYLILFHYFLIXWDLYPQNGHANCBYBNTHCYXRBHIVFFBNQYUUOBETTODWNIARYMWSKMTWEVVTGJVORYBUPLXSHWLKCIRGYCHZCUZXUZAEIXZKLKJZWGOXESOVQUPPAPFDFNQMESAKJRAQFJVJOZHJQCNPEHJPNYURASM");

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
    msg.setTimeStamp(0.5560202121371376);
    msg.setSource(23464U);
    msg.setSourceEntity(110U);
    msg.setDestination(26258U);
    msg.setDestinationEntity(55U);
    msg.timeout = 20732U;
    msg.lat = 0.5503218736798923;
    msg.lon = 0.5624174542349286;
    msg.z = 0.8241946552489335;
    msg.z_units = 106U;
    msg.amplitude = 0.750206539248458;
    msg.pitch = 0.5461129144573529;
    msg.speed = 0.9898710696905977;
    msg.speed_units = 71U;
    msg.custom.assign("QBFUJZOEZDIBALKOOWBZXWHMQDFCSXOGFFYSFDNENPXBJKZNYTP");

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
    msg.setTimeStamp(0.45331729252084274);
    msg.setSource(18875U);
    msg.setSourceEntity(159U);
    msg.setDestination(49934U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.49101818752879844);
    msg.setSource(13582U);
    msg.setSourceEntity(49U);
    msg.setDestination(35504U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.035426930245592625);
    msg.setSource(39558U);
    msg.setSourceEntity(84U);
    msg.setDestination(53086U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.012508478501755516);
    msg.setSource(12862U);
    msg.setSourceEntity(232U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.6476120293659525;
    msg.lon = 0.5123880898844774;
    msg.z = 0.2427233672428576;
    msg.z_units = 47U;
    msg.radius = 0.22499589451071478;
    msg.duration = 62193U;
    msg.speed = 0.43540622353211944;
    msg.speed_units = 11U;
    msg.custom.assign("YAMVPCDNTYJQTGZWNBCAQZXYDGTWAILROXWTNWVWHPZGSPIMWQWYVHFFRPBOOKHDEIMCAOTMEALGMSQLQAARCIJYCHCQULBZFRCXOIUKWBITDRNJUKCREQBJVKROUJNEBSEKDXZMOHYIXPUTLECSGFHBPPAGLZUHIUKWRDNUYSLOFCIOOAZLPXVLAGSDJBDBNRKTEXVKB");

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
    msg.setTimeStamp(0.3522507807458519);
    msg.setSource(14200U);
    msg.setSourceEntity(10U);
    msg.setDestination(40000U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.6589053592578059;
    msg.lon = 0.10409365812496929;
    msg.z = 0.6319840568928897;
    msg.z_units = 146U;
    msg.radius = 0.40182079391220993;
    msg.duration = 17224U;
    msg.speed = 0.9916635402978152;
    msg.speed_units = 180U;
    msg.custom.assign("UQWISNZBMCJOHYRTOVLYGRCLPAYJNOZNTYZHNFHMPLKFXBIOKTHIPFMZGJLAKEPKDRLCYAFQFUZBYXWIWTMSESXZNIRFCMAYNEUILVFGXIQDEGMDDTVNABBHMEQQENXOTQUXIZBLRMKLJXHJDJJSJQPWNCCUSYEPSOUBFSETIQRDXPCBOZZHAUTRHHDANX");

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
    msg.setTimeStamp(0.4442141159766039);
    msg.setSource(44353U);
    msg.setSourceEntity(241U);
    msg.setDestination(57915U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.5305473600123003;
    msg.lon = 0.5659188199736995;
    msg.z = 0.5009795809722897;
    msg.z_units = 247U;
    msg.radius = 0.5644253348306977;
    msg.duration = 20799U;
    msg.speed = 0.13395852130862773;
    msg.speed_units = 94U;
    msg.custom.assign("WRODXJLVXTNBODMQJMRESJEAUOQEYGTPEBZSBYLUUYTN");

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
    msg.setTimeStamp(0.16670223188205247);
    msg.setSource(39667U);
    msg.setSourceEntity(190U);
    msg.setDestination(16120U);
    msg.setDestinationEntity(198U);
    msg.timeout = 44661U;
    msg.flags = 47U;
    msg.lat = 0.03715015682140943;
    msg.lon = 0.09952514838059034;
    msg.start_z = 0.716791544386728;
    msg.start_z_units = 149U;
    msg.end_z = 0.1805178011965961;
    msg.end_z_units = 243U;
    msg.radius = 0.8985534877276184;
    msg.speed = 0.03897947459569073;
    msg.speed_units = 38U;
    msg.custom.assign("TCMQDGBYHKIKXNKDDRKTAIWVZQCYA");

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
    msg.setTimeStamp(0.4420030135031935);
    msg.setSource(44858U);
    msg.setSourceEntity(41U);
    msg.setDestination(7091U);
    msg.setDestinationEntity(51U);
    msg.timeout = 10309U;
    msg.flags = 138U;
    msg.lat = 0.10642289520242487;
    msg.lon = 0.026958818479960844;
    msg.start_z = 0.8226053612908681;
    msg.start_z_units = 100U;
    msg.end_z = 0.1543457149345442;
    msg.end_z_units = 47U;
    msg.radius = 0.19453714148031154;
    msg.speed = 0.7745094396242492;
    msg.speed_units = 52U;
    msg.custom.assign("FPSRGYQKZUW");

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
    msg.setTimeStamp(0.1609766809254174);
    msg.setSource(59043U);
    msg.setSourceEntity(234U);
    msg.setDestination(18815U);
    msg.setDestinationEntity(5U);
    msg.timeout = 41892U;
    msg.flags = 123U;
    msg.lat = 0.9726633966244469;
    msg.lon = 0.6051067537285082;
    msg.start_z = 0.3740771606360551;
    msg.start_z_units = 6U;
    msg.end_z = 0.32234803428041203;
    msg.end_z_units = 153U;
    msg.radius = 0.35220464245404204;
    msg.speed = 0.07899751638454267;
    msg.speed_units = 210U;
    msg.custom.assign("DRDRLWEKJBITWHEBCGTJLOQOHOBKVDYFZUACQDNBPKQTSIWFULFKWPLKMVYDKIWMUWUPDJXLBZHDQGPKXAINFRSIEAJGSYJAHHVWIJTRVQGEHMYDNCOQFNAEUSQTAWRRYKZCCSUVAXXRUDNYBSXNZGWOVLXJYHOIGIUOLMNCBXMLZUJIGZPBCGLQMYERDJGRXECPZMOUMVFBQOMTTINGAHHQFCHVZXREEOCN");

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
    msg.setTimeStamp(0.017540040065116558);
    msg.setSource(37122U);
    msg.setSourceEntity(174U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(210U);
    msg.timeout = 14866U;
    msg.lat = 0.7597289722217954;
    msg.lon = 0.6708063856065527;
    msg.z = 0.20090088328304612;
    msg.z_units = 229U;
    msg.speed = 0.8860816743374171;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.41913568035556636;
    tmp_msg_0.y = 0.023456179051980053;
    tmp_msg_0.z = 0.08425535590697053;
    tmp_msg_0.t = 0.37807401529836604;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CALJZNTGEXBJFETGENZMQLWMDQMZHOQYSRXNUHWHCWRMKBORSUXAABFGYICFLCHGOVKSIQUMIDYAZYLWIKTPCDXGMYPPE");

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
    msg.setTimeStamp(0.5486615406943038);
    msg.setSource(13335U);
    msg.setSourceEntity(200U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(148U);
    msg.timeout = 36259U;
    msg.lat = 0.025535577584730795;
    msg.lon = 0.5792406375019923;
    msg.z = 0.7000912852045718;
    msg.z_units = 91U;
    msg.speed = 0.9640188179068769;
    msg.speed_units = 99U;
    msg.custom.assign("NHGWLTGAQXWXIBQKWVFPGOURBJPJMGHESRMXHKNYRZMHXWFAMDKWRZQJHDCSILNXILVFVMFRZOPVKJYOTAGZZYLPETXQXQBLBDFHUDESCTIDDVIWHSEWARJTMMCSENTKLINSOYGTSVUNZFYIEHFGYMLALQDQRKXNTLZKNBPFWIMCAVZCOOPVVSJSB");

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
    msg.setTimeStamp(0.9286356186317004);
    msg.setSource(47344U);
    msg.setSourceEntity(222U);
    msg.setDestination(7198U);
    msg.setDestinationEntity(86U);
    msg.timeout = 57566U;
    msg.lat = 0.3760858802646102;
    msg.lon = 0.4151323539571531;
    msg.z = 0.043946000683646846;
    msg.z_units = 158U;
    msg.speed = 0.6651822829045716;
    msg.speed_units = 66U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6927319228816097;
    tmp_msg_0.y = 0.5094797368876224;
    tmp_msg_0.z = 0.6239833326307757;
    tmp_msg_0.t = 0.3640972030667292;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SNUBNEOLISROTYFPAFJIVPPQCDXMYEFAMZMWGNJKYUKHDEKRLGSWCLOWQVTLOIGDXKCCPBZEDJTJZGEFYYQWQXLIMNYIMNQBEWFWHVUHNOZGJLFOJPXBELXYKPZKXIYLBOHSVEBPUJVMEXAKHADAQCIGBTZOHDZECYZCWTGUFURSJWTPQFRRNYMPTTQRANAKSGFAUVCHMTXKUKCCGDZMADDNSXOVUSZJVRIOFPIJBHNWVSMRWLVGAQQDB");

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
    msg.setTimeStamp(0.1520693511701421);
    msg.setSource(8949U);
    msg.setSourceEntity(34U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(98U);
    msg.x = 0.5741256740958784;
    msg.y = 0.865699352160442;
    msg.z = 0.7094659867305806;
    msg.t = 0.22072186745849443;

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
    msg.setTimeStamp(0.20677066170117553);
    msg.setSource(25738U);
    msg.setSourceEntity(21U);
    msg.setDestination(32876U);
    msg.setDestinationEntity(152U);
    msg.x = 0.05491323053117736;
    msg.y = 0.9476785848833501;
    msg.z = 0.4141215258259128;
    msg.t = 0.11604070969498026;

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
    msg.setTimeStamp(0.31090565558267347);
    msg.setSource(43877U);
    msg.setSourceEntity(130U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(5U);
    msg.x = 0.040146599843860376;
    msg.y = 0.10076148869891921;
    msg.z = 0.04752846674146227;
    msg.t = 0.007556286175937288;

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
    msg.setTimeStamp(0.32870571196001186);
    msg.setSource(20558U);
    msg.setSourceEntity(14U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(117U);
    msg.timeout = 8115U;
    msg.name.assign("QNRFQRLDBCAXTCWVOCWKUEHDXYPZVSJADKEXIPQZSBGIVOEWEQQYGEXPFUMRKPPDHKOAUZGEPAJNRPTHDWOSCMHKLZZKQFJNAWQYRWLHVTDFHROFPHMSMJIYKCKOSNSRXZUVXCZRTQJOHJHOLTVXYZNEAFIBIAJNVFYBRMCIVWTJFMLOTVXSYGNMADBTUQ");
    msg.custom.assign("APUJMYGAAJFJRTZHDIGFFXDXFOWYGCPMBWXVQQKTHAJIAOKWDXZAQIEVRECMFBNGHRTEBLDZNFLXQPGSICUAMBLVLWUXPHNJYWLOEFRXJUBYTYQDTKVDSSWBBZOKLLVAOXSRHIGSSTHZIGOPCE");

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
    msg.setTimeStamp(0.05361328808208887);
    msg.setSource(8032U);
    msg.setSourceEntity(126U);
    msg.setDestination(49432U);
    msg.setDestinationEntity(215U);
    msg.timeout = 20600U;
    msg.name.assign("YCWPJFWSDMJAVPZYYTRFABCHPZMGREWEVMPFEWOGXTJDNYLHUAIKSZGMBNAXSUHODKKHGRLHUCTHSWLRUVIMBTNWJXVIJGBTNBLKEAIAWLCTZYOPBOIOFSPBOOOJFYXDQQVPVCHELXIGXKDB");
    msg.custom.assign("ABVNCUZCQYMASIXJXVCOYILPXBFAIYLUZBJREEVFGYLWHNMYOJWSIUUHBMYTQKSJBOSZRJDYEOGEVQDRFIYZVNPITKVENQHFJOUQFIZMLTRQVKTTTPHUNZBDZXQBERKMAFEJDVGQFMDVQXHTSCAPJMCDAUZRIGPZCHEHRDSJAKNYXLCKXDGUNPFBINSMHSKFWKWAEXLQWKCZNRHDDCTLRLHYPGOSOTNIRWWATFOOGSCWGW");

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
    msg.setTimeStamp(0.06737310852793787);
    msg.setSource(61841U);
    msg.setSourceEntity(154U);
    msg.setDestination(15155U);
    msg.setDestinationEntity(228U);
    msg.timeout = 34119U;
    msg.name.assign("JKDSKAFTYGYYFZHYIWQOIYMYZDSNSPERAKRJNVZTPACAACVRSVTJCQKDEDQOBGGDMWLPAZUWMRFHVQXPZZVQJLUNAQDILBGLJIREGDHJBJVOVMNFRQRUFCNZBKTBEIHIUMKMKBSDTXTDBGTLNFICZROJSWWPPYLUEFRNVXCPHOOEKLLHVEUENXBHMSOFFMRGPS");
    msg.custom.assign("VGESTLVCZTIVHVZXADMQHWLYZNCVROKTUHOIVRAVJFUXXZHQUZRPJQEHRDLNBGSRBSNMKIAFGXOISZLKQMIWRDATPQLFOFRRGWTUYYDTCATVDKHZRKHKMDDIDJHWUFXQSOGYDCCQFULTOSAFPGPWKRZEMGESXHFJMSLOEBKKBYUWTNXQEKUYNGDAIBI");

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
    msg.setTimeStamp(0.9394181309846159);
    msg.setSource(60641U);
    msg.setSourceEntity(178U);
    msg.setDestination(49129U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.4119192183897161;
    msg.lon = 0.4554795815160687;
    msg.z = 0.09850155789339521;
    msg.z_units = 196U;
    msg.speed = 0.28625081059947344;
    msg.speed_units = 198U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7668855566262852;
    tmp_msg_0.y = 0.017548685310280976;
    tmp_msg_0.z = 0.9582165596311414;
    tmp_msg_0.t = 0.06864982735781455;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5327U;
    tmp_msg_1.off_x = 0.5995234009267107;
    tmp_msg_1.off_y = 0.7735477226892961;
    tmp_msg_1.off_z = 0.7418263767606583;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7560047702918348;
    msg.custom.assign("JXPDANKGADGBHQEYFHOSGPVQHETFVNDDNFILVRPDNLHEMRQVADEFZUHCCXECJZCOUYWYJYMKJDZQVSKJUOIBAKZPUACOXSISPYBNAMYMKUOHLYEUPCKPAGWRBWLWKNDIKQOHFCO");

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
    msg.setTimeStamp(0.26887565171280314);
    msg.setSource(35825U);
    msg.setSourceEntity(163U);
    msg.setDestination(24004U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.8532586253730561;
    msg.lon = 0.40022946117885705;
    msg.z = 0.4063078060110207;
    msg.z_units = 112U;
    msg.speed = 0.42177316279984933;
    msg.speed_units = 208U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5766309001768122;
    tmp_msg_0.y = 0.012352372097629849;
    tmp_msg_0.z = 0.5142739051748229;
    tmp_msg_0.t = 0.018399056461356977;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 18467U;
    tmp_msg_1.off_x = 0.8582091745588885;
    tmp_msg_1.off_y = 0.6778276300187065;
    tmp_msg_1.off_z = 0.9132777821619182;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8129257355206821;
    msg.custom.assign("NKEVDWEBMPHCLJGIFJIUVSFKBLNDSPZGCLDQMCCANQSLTDFSNOSBAHBRTDSAYOLNYYXMIMHLVROVUZRLAJPER");

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
    msg.setTimeStamp(0.9562173277513599);
    msg.setSource(7271U);
    msg.setSourceEntity(221U);
    msg.setDestination(39797U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.486534137570942;
    msg.lon = 0.22729520111412338;
    msg.z = 0.4107291579453163;
    msg.z_units = 160U;
    msg.speed = 0.38994089929448894;
    msg.speed_units = 80U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7737087331086838;
    tmp_msg_0.y = 0.004138396789609811;
    tmp_msg_0.z = 0.6623591889168622;
    tmp_msg_0.t = 0.16939451834702657;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8746479049670859;
    msg.custom.assign("IAECKHNARAXHOLZTJHESNYCQKEOJJLPAGHUDXBEGNDIDTKUJPOLFQXZVARVVWPFHDNAFKZNOXFOKDLYTNXMLGWRJZOBCWOYTKQDTOKNKGFLLVPPUFSAMYGIVJQICCDYLMIRXBQRLUWWASUCDUAUSGUCQYQBSNGIBKXJETIYPNGWBQMMYHIZPEFRYPTIQJDMXVLVRXYMCESVITGTZHPBRFMFJVJRCBSZEXVGNUCOAHZEZOKMFWSTRBWWSPQZEW");

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
    msg.setTimeStamp(0.6492423678099662);
    msg.setSource(64132U);
    msg.setSourceEntity(0U);
    msg.setDestination(51640U);
    msg.setDestinationEntity(232U);
    msg.vid = 60157U;
    msg.off_x = 0.5977981517977727;
    msg.off_y = 0.12182424406363712;
    msg.off_z = 0.9357181751283448;

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
    msg.setTimeStamp(0.6157516357972902);
    msg.setSource(672U);
    msg.setSourceEntity(203U);
    msg.setDestination(12182U);
    msg.setDestinationEntity(138U);
    msg.vid = 25929U;
    msg.off_x = 0.3085077316125977;
    msg.off_y = 0.9842197803218177;
    msg.off_z = 0.3667087780569023;

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
    msg.setTimeStamp(0.8376934603242818);
    msg.setSource(17008U);
    msg.setSourceEntity(120U);
    msg.setDestination(45670U);
    msg.setDestinationEntity(150U);
    msg.vid = 19197U;
    msg.off_x = 0.12601333618575628;
    msg.off_y = 0.901858540805947;
    msg.off_z = 0.19214838382706845;

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
    msg.setTimeStamp(0.04092266481651752);
    msg.setSource(60659U);
    msg.setSourceEntity(188U);
    msg.setDestination(48213U);
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
    msg.setTimeStamp(0.4745367584255248);
    msg.setSource(58224U);
    msg.setSourceEntity(221U);
    msg.setDestination(24413U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.82984378635557);
    msg.setSource(53737U);
    msg.setSourceEntity(246U);
    msg.setDestination(57979U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.7617266359651468);
    msg.setSource(63107U);
    msg.setSourceEntity(57U);
    msg.setDestination(51114U);
    msg.setDestinationEntity(70U);
    msg.mid = 32517U;

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
    msg.setTimeStamp(0.5834886803777724);
    msg.setSource(13921U);
    msg.setSourceEntity(156U);
    msg.setDestination(9176U);
    msg.setDestinationEntity(142U);
    msg.mid = 53475U;

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
    msg.setTimeStamp(0.6014676793612443);
    msg.setSource(38703U);
    msg.setSourceEntity(76U);
    msg.setDestination(61262U);
    msg.setDestinationEntity(17U);
    msg.mid = 22689U;

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
    msg.setTimeStamp(0.7174867641986515);
    msg.setSource(37595U);
    msg.setSourceEntity(169U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(98U);
    msg.state = 34U;
    msg.eta = 65292U;
    msg.info.assign("NMNQYITEWVMZVZFBZKNIFNAYBHEUOKCDIAUHIESVBDISDGKGLZTVUCRUAZUQPLSMTYGNHDVYMWPWWOSTIZSYBWHEKTMFYDJXZKCYDARRQUJBAXQRIXYTTUXGPSVGEWOOQRVHKMPFDJCPAEWZFWVXCLWHXHGOEACLVJBMLTPSBCLRKJNXCHNHJNFSGQIRODJAFPZGEUHKNCYVBIFUMJLEUWXQMKNBABOPASDQTCOIXQTFKSMGLPJG");

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
    msg.setTimeStamp(0.29114092609531583);
    msg.setSource(33903U);
    msg.setSourceEntity(250U);
    msg.setDestination(29579U);
    msg.setDestinationEntity(148U);
    msg.state = 8U;
    msg.eta = 5844U;
    msg.info.assign("PXTCGTUMOEYSZNRGJJDOMELAYCGZAEFGBUFMFCUVDOEHBBPLNTRALRKWLEYKZEIDXSGOQSNESCUXPNSTABCBDRHIJBEVABA");

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
    msg.setTimeStamp(0.010090294409028644);
    msg.setSource(43138U);
    msg.setSourceEntity(21U);
    msg.setDestination(29539U);
    msg.setDestinationEntity(91U);
    msg.state = 139U;
    msg.eta = 63545U;
    msg.info.assign("GAUPNIKCCNADYPRLQWNPARAVPHVAONMNYEUQRZYMTFHGORTBUCEARUVIZELDLSYMBRJBQOFDWIXVHKSDMCRZUKJCLNHZEZLLNLXWRWKDQXJEESDEWYMUCTQNYZIQTLIKCYIQBPTT");

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
    msg.setTimeStamp(0.8508738261448907);
    msg.setSource(57934U);
    msg.setSourceEntity(54U);
    msg.setDestination(65202U);
    msg.setDestinationEntity(98U);
    msg.system = 42023U;
    msg.duration = 21818U;
    msg.speed = 0.5467593725700488;
    msg.speed_units = 182U;
    msg.x = 0.04054724034264556;
    msg.y = 0.7661685211770978;
    msg.z = 0.661185369809262;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.8786069768471328);
    msg.setSource(13777U);
    msg.setSourceEntity(46U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(235U);
    msg.system = 59757U;
    msg.duration = 3485U;
    msg.speed = 0.08207895283681854;
    msg.speed_units = 193U;
    msg.x = 0.7431974312103706;
    msg.y = 0.07561716524812367;
    msg.z = 0.8335914269201743;
    msg.z_units = 238U;

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
    msg.setTimeStamp(0.8603796277518121);
    msg.setSource(52017U);
    msg.setSourceEntity(75U);
    msg.setDestination(34444U);
    msg.setDestinationEntity(60U);
    msg.system = 47543U;
    msg.duration = 36490U;
    msg.speed = 0.886296040686652;
    msg.speed_units = 87U;
    msg.x = 0.22334673943143868;
    msg.y = 0.8500277394238518;
    msg.z = 0.9504235417124468;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.016173545711941628);
    msg.setSource(64046U);
    msg.setSourceEntity(198U);
    msg.setDestination(58802U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.6937377346119961;
    msg.lon = 0.7388315730764715;
    msg.speed = 0.8142410154536375;
    msg.speed_units = 68U;
    msg.duration = 56251U;
    msg.sys_a = 16484U;
    msg.sys_b = 59186U;
    msg.move_threshold = 0.2786424311750275;

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
    msg.setTimeStamp(0.20073298411634855);
    msg.setSource(42099U);
    msg.setSourceEntity(12U);
    msg.setDestination(8817U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.44083289241181467;
    msg.lon = 0.3649329222200487;
    msg.speed = 0.37939057330244796;
    msg.speed_units = 50U;
    msg.duration = 27169U;
    msg.sys_a = 46865U;
    msg.sys_b = 6955U;
    msg.move_threshold = 0.18653923333299127;

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
    msg.setTimeStamp(0.20477003544612182);
    msg.setSource(25018U);
    msg.setSourceEntity(15U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.11866531224507426;
    msg.lon = 0.6178844013849453;
    msg.speed = 0.7594715473365014;
    msg.speed_units = 234U;
    msg.duration = 20832U;
    msg.sys_a = 7654U;
    msg.sys_b = 36385U;
    msg.move_threshold = 0.568348385770234;

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
    msg.setTimeStamp(0.46641660151749165);
    msg.setSource(15530U);
    msg.setSourceEntity(137U);
    msg.setDestination(6945U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.39108125591655385;
    msg.lon = 0.9636211438520531;
    msg.z = 0.3337300592493987;
    msg.z_units = 188U;
    msg.speed = 0.9817362222037522;
    msg.speed_units = 162U;
    msg.custom.assign("SMWENMSFWHZOCEGRTSQMMIUQRGLHOWHYPLZRTJZFUZUVETNJFGIKDYBNLFPOPTHGWIYTJAYHOZRICHMGNMHLBUYUKVIOHSUBVTCQDJWBYHLVOEWCFKSUVFOBBIZXYMXMTSAKLRNHXXEXBABQROWZAWPEAJPYNFPKLPQYISFNUZIEWOGAL");

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
    msg.setTimeStamp(0.22740633682671596);
    msg.setSource(1550U);
    msg.setSourceEntity(35U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.596758760161786;
    msg.lon = 0.9718348904860913;
    msg.z = 0.6248546788904095;
    msg.z_units = 110U;
    msg.speed = 0.2643427941117521;
    msg.speed_units = 179U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.14795685773136336;
    tmp_msg_0.lon = 0.6592885266900868;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UWZSXRINXUVBCKKBBVVVTBXYFAOJUKLAVZOYPYYDUQRRTECSVDNAIFATYZBNHWGQQIZNLRPGFJSHVPWFHWQSHRIMANJDLDPLGZZNCCGWZGGJXEABDNDXXETQNIBZQKWVKEMISTKBMEKSCYYLIPFRXJNACDTHDLFJLTYTMUIEHTKSQOERERVULJQHBTAELVQGOYMOUCJWWEUPWCOZRKRXSUOJM");

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
    msg.setTimeStamp(0.9033178290158536);
    msg.setSource(53104U);
    msg.setSourceEntity(150U);
    msg.setDestination(52406U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.3395205829607528;
    msg.lon = 0.6319562792002005;
    msg.z = 0.7772998717896068;
    msg.z_units = 210U;
    msg.speed = 0.8765873834228449;
    msg.speed_units = 49U;
    msg.custom.assign("DXMEVHOGHMUARSMLRWBLHIWYSAXXJEFIADGTBFMFMNRPSBOYCTTBVTRHSVAIDEQLYOOEHTKNIBNUNRWJRUGCCXMJIOLPWHSYPKHUXUGEBVSENJTZSKBKCBRAGINFXRTSHGVQMVUOXLZKYJRRDVWQAFZKDAQJFQVLVILQPBSIUYUWDWITJLZVXEHAFBPZQZDCPJOZGMIGWCLJCDWATZKCNMEFEOYCHO");

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
    msg.setTimeStamp(0.7480061688026858);
    msg.setSource(43472U);
    msg.setSourceEntity(44U);
    msg.setDestination(23264U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.7170393310582113;
    msg.lon = 0.3252218612974791;

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
    msg.setTimeStamp(0.7623005759476116);
    msg.setSource(43071U);
    msg.setSourceEntity(52U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.753439997333174;
    msg.lon = 0.8091501993238265;

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
    msg.setTimeStamp(0.9447991261946811);
    msg.setSource(48074U);
    msg.setSourceEntity(229U);
    msg.setDestination(51160U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.767589902764968;
    msg.lon = 0.20825444081809885;

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
    msg.setTimeStamp(0.4927984735649409);
    msg.setSource(29997U);
    msg.setSourceEntity(14U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(246U);
    msg.timeout = 38450U;
    msg.lat = 0.8225583523030298;
    msg.lon = 0.7828834723883109;
    msg.z = 0.06815638137365831;
    msg.z_units = 247U;
    msg.pitch = 0.5054501655073056;
    msg.amplitude = 0.7383327075409675;
    msg.duration = 40435U;
    msg.speed = 0.350646168260382;
    msg.speed_units = 158U;
    msg.radius = 0.3816221088461501;
    msg.direction = 142U;
    msg.custom.assign("WRGFNRLDNHCJAYSPLXTPKGRYAQVLZVJSFMQAEONCZUHUYWOFXQFCEQHVIJVTXYIHQGVUPSRBIXAOQDAPRENZXWSVNLNVCTWPS");

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
    msg.setTimeStamp(0.17881483280995203);
    msg.setSource(20412U);
    msg.setSourceEntity(91U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(22U);
    msg.timeout = 38693U;
    msg.lat = 0.7122653694542475;
    msg.lon = 0.06885337748249598;
    msg.z = 0.28562830798727656;
    msg.z_units = 125U;
    msg.pitch = 0.5587414850912861;
    msg.amplitude = 0.5197080093576509;
    msg.duration = 27510U;
    msg.speed = 0.17109059624094858;
    msg.speed_units = 250U;
    msg.radius = 0.8293146093732809;
    msg.direction = 76U;
    msg.custom.assign("GJQISALLVFUHQKYSKGPPHHXRBGUUVRWEICPNMKKJVRJZVBPIZNAMTJXDOXBOYUTJWDZYOQUCFHVGFGASHHEQTNMRXVKUTUGZJTLMLDOBTZDLRZGWIKBYSNBECDPYFMBSIYEDIFOOCECWAPCVTDWNEIFNCAJUXXYRP");

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
    msg.setTimeStamp(0.7628124793649179);
    msg.setSource(4755U);
    msg.setSourceEntity(18U);
    msg.setDestination(56875U);
    msg.setDestinationEntity(140U);
    msg.timeout = 9808U;
    msg.lat = 0.6572496135724853;
    msg.lon = 0.4976922216682631;
    msg.z = 0.4425854133060898;
    msg.z_units = 104U;
    msg.pitch = 0.07951800341480597;
    msg.amplitude = 0.29758875554730524;
    msg.duration = 54188U;
    msg.speed = 0.35186504301848365;
    msg.speed_units = 57U;
    msg.radius = 0.3973851308226396;
    msg.direction = 247U;
    msg.custom.assign("HBEEUAVRHAGCGLVSVJNEHTEMRVQKWFACPIYOJPWZQPHDCRDDLCPSBSXGSYFA");

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
    msg.setTimeStamp(0.3786729225159279);
    msg.setSource(59571U);
    msg.setSourceEntity(146U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(239U);
    msg.formation_name.assign("QLMMVOWUXWEEFAZHBCUDPTGXMPJGYJDIOAUMUBGHZWTNZDOJEOTQZQWIVCR");
    msg.reference_frame = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58754U;
    tmp_msg_0.off_x = 0.17021525709918695;
    tmp_msg_0.off_y = 0.6362424184337611;
    tmp_msg_0.off_z = 0.16686983536872357;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QKCRVAHFKURIKISIDVAGZQEVCJYUEWIPOTSOTXNKPEBIWDZJXLLAWOQVEGJFLPCZQTRHWVTOBCLSDWYXUTMMDGHIBJNTMRFNINSSRHNMETGHQDCNFGXPMASBEUSKQYKLKXJVEXGBNMJUN");

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
    msg.setTimeStamp(0.45499619200218155);
    msg.setSource(51487U);
    msg.setSourceEntity(114U);
    msg.setDestination(46175U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("EKPRIUHTFWSTTWFTLALPZJBUXPSCGCPQOYBRHBWKQFXAUYYJTLFJDVYCWCINAMXXCLYNFZEDTUTIJWUDPWOQFYNCQJMKEWBEPGGODKKRRLDZIPWXJJ");
    msg.reference_frame = 87U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11631U;
    tmp_msg_0.off_x = 0.9219570947878568;
    tmp_msg_0.off_y = 0.4646446286946281;
    tmp_msg_0.off_z = 0.3760250579750696;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BRFWRXVHEVUNEXGHKILNIZCCEHPNNZLYMTZJIZTSGCJFUFDSPLSUVRBGUQQYPBANGWEUOKQGMWIMYGJMXYBQUEIQGAPQCHZNMSSERRTNTSTPHFJMLZMAHCAYCATWSKOGOGHEROSLWIBNIBTPKWOAFVDCOKDLWNYZNCKVZFUSQXWZDCBVBUQKVVTLHQIICVUEPJFAEHKXPMYDZAOOSYMLR");

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
    msg.setTimeStamp(0.23188050610601418);
    msg.setSource(11645U);
    msg.setSourceEntity(181U);
    msg.setDestination(34427U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("SPOUBHURQVBEMUWABPFWIGAFFKJXRYVCJESJVGCUOCAYCKJLNXQXHKYUIPLSTDTYSMLDPBVPDJTIFEZCUZEHWPQATWYGELBDRRNDFZQMODMXKRSATPYDBDJYBCIDWVNJOGUNUOZHYKIHIZEANGBLVXTTKBKRCHIVXGHQEGOZESNWHOIUXVROSAJQMQXGRARPKSZYFRFFKZMVNMONYFCQQHAFVLODESCXPKLGLJJIHNIQNCTWZTLMMALTMXESP");
    msg.reference_frame = 9U;
    msg.custom.assign("ONKDAQGGKLNQLNXEZIRJFXTORGJDCKKJEDRIJOBGWJEDGLZWICQBQWDEPSAZXOHSAIALILUKYPBJWJDMBYVLZEGFPLFIUEHPLGCMAKTRBRZEHAZCRSSVJBTGZOHQVEVAHMVBMSBWPCXMKAUYZVSDEYIQTXOQWGIXHOOBACDYARDUBYUCXKPTTVJSKOKWYZFXTHRMMOTUQMCCPWHTLNPRFTWVENWCYNQYHPFINPXUILVSQGFSRNUNZMFVUMNF");

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
    msg.setTimeStamp(0.8957577007797622);
    msg.setSource(46506U);
    msg.setSourceEntity(149U);
    msg.setDestination(10710U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("DHFZVEGKWYWJCSOXTHJOPFZEUZVASKPSEQMTKVVMAITWSBGANZCJVMXQLXOOUIBZMBMFPZOEFQGBRPXBRFDJNAZRAYFIZHSIEUUSXEGFJJOKWAQNQDCDCEYRPHOLBMIWASWEIKRI");
    msg.formation_name.assign("SDFWVZTYLHRAEPKXKDKNLBMIEATHNUMTOSTAMCHXBYKCCSEIGJVJVCMZJMQQIUJRPHGLYYCJRGSVDSEWRIPRKDIDLDZZBYIFBADGPHRUVEBYOUCXAWJKPHQFLJYOEZWZLOQNNGQHRMWXOVPPARYUGUKBILAQBNJEEHTPICMWQFNHAKJPMWSYQYFCTEUVRFUISTMFGONUNZBMLSGZXKBWALAHFOTXNQDPESZWFFOBOCDNZS");
    msg.plan_id.assign("YPCWONBUVPBPTWFAANKUPYTIQNIAYYMXGCRBEMCEZWCCLWBDNKXRHJENHIDMWZKHGWKFVFNUIYOFDITBWOZGDVFXIOQPMIMRPDTXGVXTKRCGYRSZMALGZYSDUOSZHAOGSJDNXEHPDSVAWSZGMJEXNWRKUCLAAFFRLETWLVJEKRSEBIQVGXRHQEQHBHZXKPHXMGEAPUVJLUJTICZQCMKOYFLOTKDUQJJSSBDTFYLPSVJCLFVJOYRMQQQHT");
    msg.description.assign("ZBNQILPJAYHDJDYZNJLTYJJNSCDEVRGHUZAVPXFQTWBYBCEFXOGASIZQCUEECCWKPHRQHPJOLWQQRZEOAYUZSSMYVSIDTWJQBKSUXNCCRRELADZMBKDMVJMQKTRWYBA");
    msg.leader_speed = 0.8244796950804454;
    msg.leader_bank_lim = 0.26503284798551674;
    msg.pos_sim_err_lim = 0.72356332920049;
    msg.pos_sim_err_wrn = 0.5276035900467929;
    msg.pos_sim_err_timeout = 29692U;
    msg.converg_max = 0.9942022128246882;
    msg.converg_timeout = 57681U;
    msg.comms_timeout = 54565U;
    msg.turb_lim = 0.7084991358685673;
    msg.custom.assign("QEPZOEJKZBPGXLQUAWDHFDWXOGEFKIMFIEWYCQLQLPMEHATPCITFS");

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
    msg.setTimeStamp(0.2909766216031954);
    msg.setSource(50942U);
    msg.setSourceEntity(90U);
    msg.setDestination(23743U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("TCEJQPCXKKGWCIMFVNNJQGEXSEOFEHHMYKASNODESUQZGTACNNSPMWEMDPIFMANRQRGOWGELIFSLHBWVNXOVCXKZIMTLIOVQUZFASNYPOUUVJJYMHJZHPLZPZBTADPXDYJPFJTETCWRRHPBVBPLXLBDCXQUIBFEHYDKUWENLQTORKSMOJG");
    msg.formation_name.assign("YJGLFCPDQSQZVJXYODAMNDCNEBIQKUXMQJFMGFECJTYGTUPATTAVVDCOKXREICACAUPWDYBRENXYFSTHGTSJWGHQIIAOUNNGWGQUCJBDRAPGIHNFLPKKMQFVGDXBIHIXWXLMCOPBJVABHHUJPFRMSHZYOFHDFPUSLWKPMBATYEZSZHBZECROWDXVOOYJXEZWRQSYZWARULZGVQVTLJTDOHSLNUIKMWLILNQUNWXSR");
    msg.plan_id.assign("OWXJRILKUDZXJWLOWIGXDVMXQWPMFRLTWMAJHRKCNQJXAITOPDUGQKYCQEKTFZUIRBJTSBLNHFGPMJHNSJQCCAZJBXSNLNUMJGBHMKPIDVOCEIWVUEUNVGPYDFFHDTCAGAOHWAMTYSODRVYVZRVQDUIXCYQWDEYEAGFCEUGFNOHLKYFQYORGZCUOBIHVHHPIGLSEPBNVPLABXMNXZOSPBTDEBEWRBKIY");
    msg.description.assign("ZMZTOHMKMZEEWRYAEGEVPNQWCIOVANURNUKALBPIZZJHDRLYFOUTVTLLXIPQOCAIHHDYGQQUULKRFLCDIOUWKHILBAASXPFRYAGAASHJSBKKMHMBGVNNYQOJZULVFVGNXVCWPPYQKZSWSTAYXFOJESTIHFXXDXORFDDDBNBJJEBSNPTQZTGJMRTEPCBKQEQXUYPYIHFLIVUJPWELWUV");
    msg.leader_speed = 0.22729711634838734;
    msg.leader_bank_lim = 0.02184618438713415;
    msg.pos_sim_err_lim = 0.610776696457213;
    msg.pos_sim_err_wrn = 0.5136151434920795;
    msg.pos_sim_err_timeout = 32376U;
    msg.converg_max = 0.6088081651617003;
    msg.converg_timeout = 35481U;
    msg.comms_timeout = 22697U;
    msg.turb_lim = 0.6676366747475231;
    msg.custom.assign("FNVTVEDPMRCEMYH");

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
    msg.setTimeStamp(0.5016616314699401);
    msg.setSource(17491U);
    msg.setSourceEntity(30U);
    msg.setDestination(1755U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("RGKOLEROPESBWRQGXQVCTIDNSZRCLXGTHMPYWVDTZMKVGZPDXFZUJKNJNJYBAPDLXNKZXBAHCHSHVSEMTISPYJLWDIFQGXCPUCBIYISLEFATAHKKASQUUFHCCZWBPQPDTXHDXFOUEDYNLNWOFJOWGLCHMWKRUOCVALOYR");
    msg.formation_name.assign("DJEOFUCKVHGYBIDXFZZGHDVXIHANWWLEUFSNKAWBJADHUHPKHUMNTRARBJQJLZQNNMPBHZVCCBNXDRFYZRGQTGCZEDWYUHTYOMFYFNLCIFKBSPJZVKVMFRALMPMJYGAENHCSRNXUULQQCBOHLCXAFAQIXGDIEEROCJBQIIZREVEQITSOLVGLTKXBUFSOWMEIMYTLDVS");
    msg.plan_id.assign("GVRWNFDFDDEBFDWMPYRNVYAUCZTUIALCZQFHCXYHHMWYNWXGPVESEUCOMBLKUOXTXQFXOXSSLAONPKDENAHGMVHPXQCBPXGVWIOZLAELHAKRIQQMXTTYSGVRFBZNTAIJGUPEWDHDPSFREWUCFGMSLOEIVNQZTHIBSPPJWORZKNGDIQUCORKZQJMBNIIJQUAMGLJKAHJKYJZSVPUF");
    msg.description.assign("SNMPGFQIJIPYEIORJACOBBHNYIPJPNFEUDSCYUFHEPKTUBFQTRHCBSXTAMFJUPPYBCRBKXZZRGAIHVAQXNLGRAQQTSQMWDTOYZSJLU");
    msg.leader_speed = 0.43795499771596;
    msg.leader_bank_lim = 0.8349362629197324;
    msg.pos_sim_err_lim = 0.35988030355592937;
    msg.pos_sim_err_wrn = 0.9863287931639521;
    msg.pos_sim_err_timeout = 50377U;
    msg.converg_max = 0.9455256709029055;
    msg.converg_timeout = 17803U;
    msg.comms_timeout = 38094U;
    msg.turb_lim = 0.863573860304291;
    msg.custom.assign("FVCIDNRQBGYCMSYAQAWZZSRKRJSIBCJLHNDBWOHSUJXYZDFGURXYKXXPXTQXUVUZG");

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
    msg.setTimeStamp(0.649409299368681);
    msg.setSource(9795U);
    msg.setSourceEntity(196U);
    msg.setDestination(22800U);
    msg.setDestinationEntity(28U);
    msg.control_src = 7073U;
    msg.control_ent = 37U;
    msg.timeout = 0.17088590941259052;
    msg.loiter_radius = 0.5594826599296978;
    msg.altitude_interval = 0.20136426435780064;

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
    msg.setTimeStamp(0.7992679375402351);
    msg.setSource(13320U);
    msg.setSourceEntity(75U);
    msg.setDestination(280U);
    msg.setDestinationEntity(5U);
    msg.control_src = 335U;
    msg.control_ent = 122U;
    msg.timeout = 0.3247214525785792;
    msg.loiter_radius = 0.2410953455701933;
    msg.altitude_interval = 0.9306040169308872;

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
    msg.setTimeStamp(0.3539505465762737);
    msg.setSource(42722U);
    msg.setSourceEntity(71U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(252U);
    msg.control_src = 25517U;
    msg.control_ent = 4U;
    msg.timeout = 0.38157928504209404;
    msg.loiter_radius = 0.9554702692637099;
    msg.altitude_interval = 0.5384039375657729;

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
    msg.setTimeStamp(0.8031733870723856);
    msg.setSource(42322U);
    msg.setSourceEntity(135U);
    msg.setDestination(2352U);
    msg.setDestinationEntity(39U);
    msg.flags = 231U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9883964702750384;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7012584914274373;
    tmp_msg_1.z_units = 96U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.809839542828922;
    msg.lon = 0.6469777451891119;
    msg.radius = 0.4541708065991007;

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
    msg.setTimeStamp(0.4540492118190457);
    msg.setSource(39867U);
    msg.setSourceEntity(241U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(76U);
    msg.flags = 70U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2570773143171282;
    tmp_msg_0.speed_units = 108U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4110538733649166;
    tmp_msg_1.z_units = 103U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9820499620504518;
    msg.lon = 0.707863876084349;
    msg.radius = 0.5579241025270315;

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
    msg.setTimeStamp(0.2544170035728709);
    msg.setSource(12006U);
    msg.setSourceEntity(248U);
    msg.setDestination(18067U);
    msg.setDestinationEntity(106U);
    msg.flags = 106U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.35729444800645116;
    tmp_msg_0.speed_units = 158U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.05627825875861536;
    tmp_msg_1.z_units = 221U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8082074044912537;
    msg.lon = 0.45175892099734094;
    msg.radius = 0.9366401560519353;

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
    msg.setTimeStamp(0.3004541874744219);
    msg.setSource(42036U);
    msg.setSourceEntity(99U);
    msg.setDestination(34948U);
    msg.setDestinationEntity(197U);
    msg.control_src = 39438U;
    msg.control_ent = 198U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 155U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.25653450733806515;
    tmp_tmp_msg_0_0.speed_units = 203U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9323936136498236;
    tmp_tmp_msg_0_1.z_units = 245U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.673908817848223;
    tmp_msg_0.lon = 0.31184418435950934;
    tmp_msg_0.radius = 0.4252132226391283;
    msg.reference.set(tmp_msg_0);
    msg.state = 182U;
    msg.proximity = 209U;

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
    msg.setTimeStamp(0.7768934072760618);
    msg.setSource(22595U);
    msg.setSourceEntity(213U);
    msg.setDestination(61084U);
    msg.setDestinationEntity(95U);
    msg.control_src = 63588U;
    msg.control_ent = 74U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 189U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9585930637141006;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9339109641893374;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.370352581875975;
    tmp_msg_0.lon = 0.8202659507608958;
    tmp_msg_0.radius = 0.15705868188070138;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 253U;

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
    msg.setTimeStamp(0.6408994196914072);
    msg.setSource(26378U);
    msg.setSourceEntity(168U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(89U);
    msg.control_src = 19914U;
    msg.control_ent = 16U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3380760596633209;
    tmp_tmp_msg_0_0.speed_units = 58U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09276918182480876;
    tmp_tmp_msg_0_1.z_units = 82U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9543130916011611;
    tmp_msg_0.lon = 0.702117945168098;
    tmp_msg_0.radius = 0.49670231934201814;
    msg.reference.set(tmp_msg_0);
    msg.state = 4U;
    msg.proximity = 27U;

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
    msg.setTimeStamp(0.5177835839839542);
    msg.setSource(27150U);
    msg.setSourceEntity(142U);
    msg.setDestination(35068U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.24673459529084207;
    msg.ay_cmd = 0.3108965937427133;
    msg.az_cmd = 0.09688651104646462;
    msg.ax_des = 0.829350393588252;
    msg.ay_des = 0.7102918482441358;
    msg.az_des = 0.014949505177893396;
    msg.virt_err_x = 0.43230235914022097;
    msg.virt_err_y = 0.49779792694293135;
    msg.virt_err_z = 0.7262530460326371;
    msg.surf_fdbk_x = 0.4504436537182359;
    msg.surf_fdbk_y = 0.8227982669489214;
    msg.surf_fdbk_z = 0.46456314719188285;
    msg.surf_unkn_x = 0.8713163915384711;
    msg.surf_unkn_y = 0.9396344070197826;
    msg.surf_unkn_z = 0.9283487961257488;
    msg.ss_x = 0.6638611794182064;
    msg.ss_y = 0.3475940464951912;
    msg.ss_z = 0.770915785102717;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EVPZDHJUWGDAIDABK");
    tmp_msg_0.dist = 0.8083493104773875;
    tmp_msg_0.err = 0.1640947294465055;
    tmp_msg_0.ctrl_imp = 0.3944547021548823;
    tmp_msg_0.rel_dir_x = 0.954225755018339;
    tmp_msg_0.rel_dir_y = 0.6866631251586172;
    tmp_msg_0.rel_dir_z = 0.47470542655219783;
    tmp_msg_0.err_x = 0.1954877181081146;
    tmp_msg_0.err_y = 0.6939320007087582;
    tmp_msg_0.err_z = 0.04057317438386032;
    tmp_msg_0.rf_err_x = 0.9948637165005142;
    tmp_msg_0.rf_err_y = 0.9085286984750365;
    tmp_msg_0.rf_err_z = 0.31473519015866114;
    tmp_msg_0.rf_err_vx = 0.36758859116939;
    tmp_msg_0.rf_err_vy = 0.6825346358038151;
    tmp_msg_0.rf_err_vz = 0.7197766640635479;
    tmp_msg_0.ss_x = 0.8138815614740752;
    tmp_msg_0.ss_y = 0.5224173962135665;
    tmp_msg_0.ss_z = 0.9181736779802812;
    tmp_msg_0.virt_err_x = 0.9189152437208175;
    tmp_msg_0.virt_err_y = 0.4090187907848719;
    tmp_msg_0.virt_err_z = 0.7316729929169618;
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
    msg.setTimeStamp(0.5570124849381677);
    msg.setSource(57600U);
    msg.setSourceEntity(109U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(104U);
    msg.ax_cmd = 0.8510231360353854;
    msg.ay_cmd = 0.08257575029648012;
    msg.az_cmd = 0.44117784292418094;
    msg.ax_des = 0.04205096770484851;
    msg.ay_des = 0.5815599590824028;
    msg.az_des = 0.16058392343039052;
    msg.virt_err_x = 0.08601614786392808;
    msg.virt_err_y = 0.9554007901796067;
    msg.virt_err_z = 0.7439337389769057;
    msg.surf_fdbk_x = 0.9638394405530755;
    msg.surf_fdbk_y = 0.795844204192524;
    msg.surf_fdbk_z = 0.7803775647663473;
    msg.surf_unkn_x = 0.9235458952161423;
    msg.surf_unkn_y = 0.3732858789387682;
    msg.surf_unkn_z = 0.25659723370995724;
    msg.ss_x = 0.0032736409264807476;
    msg.ss_y = 0.9440652088526255;
    msg.ss_z = 0.8971484333033325;

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
    msg.setTimeStamp(0.5196088241205539);
    msg.setSource(35205U);
    msg.setSourceEntity(5U);
    msg.setDestination(31380U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.7362961916357049;
    msg.ay_cmd = 0.22981167112066236;
    msg.az_cmd = 0.48751633583272214;
    msg.ax_des = 0.5611954276467699;
    msg.ay_des = 0.5459993688387413;
    msg.az_des = 0.6936578344237976;
    msg.virt_err_x = 0.816190533098104;
    msg.virt_err_y = 0.8575755536731344;
    msg.virt_err_z = 0.1521553507183938;
    msg.surf_fdbk_x = 0.1007792012280293;
    msg.surf_fdbk_y = 0.9969566779148316;
    msg.surf_fdbk_z = 0.3536320123071125;
    msg.surf_unkn_x = 0.27971424595014627;
    msg.surf_unkn_y = 0.3733958275677385;
    msg.surf_unkn_z = 0.07231653252098857;
    msg.ss_x = 0.4685830274911805;
    msg.ss_y = 0.517886932403352;
    msg.ss_z = 0.08268112463861965;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FSXRWWYWTRVXEHGMMUOTXJZLAKQLZJUNCZYHZBGXSEMNONWBSCTVZNSBKCQEPSCCDTUWZOVIAYARBCXWTKMTBWHU");
    tmp_msg_0.dist = 0.9441370760554002;
    tmp_msg_0.err = 0.10174403116468611;
    tmp_msg_0.ctrl_imp = 0.5042965315304425;
    tmp_msg_0.rel_dir_x = 0.08538534809760534;
    tmp_msg_0.rel_dir_y = 0.4557404004305058;
    tmp_msg_0.rel_dir_z = 0.7950312736509051;
    tmp_msg_0.err_x = 0.32737384660572855;
    tmp_msg_0.err_y = 0.753757492417567;
    tmp_msg_0.err_z = 0.5366616539493769;
    tmp_msg_0.rf_err_x = 0.21382533438503204;
    tmp_msg_0.rf_err_y = 0.612142429602684;
    tmp_msg_0.rf_err_z = 0.4776349548410602;
    tmp_msg_0.rf_err_vx = 0.3915352249781261;
    tmp_msg_0.rf_err_vy = 0.04576301614118905;
    tmp_msg_0.rf_err_vz = 0.9268533168409803;
    tmp_msg_0.ss_x = 0.8933945039762365;
    tmp_msg_0.ss_y = 0.2327143951250955;
    tmp_msg_0.ss_z = 0.08117910394498751;
    tmp_msg_0.virt_err_x = 0.18502011785293382;
    tmp_msg_0.virt_err_y = 0.46618957817800377;
    tmp_msg_0.virt_err_z = 0.7467003048705609;
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
    msg.setTimeStamp(0.8975410331270592);
    msg.setSource(22814U);
    msg.setSourceEntity(57U);
    msg.setDestination(64590U);
    msg.setDestinationEntity(164U);
    msg.s_id.assign("YCAPCALSFYVEPGHQDYTBVXEUBZCIPKLLWHPVGOMJOGIQEOGFCKMJFRGTPMMZVKSRJUWLSRBXKEMTTAFWJFPATQAMWXIKUCCAUUXOSZUMSXNTFQJBVSVDOMWAKNLDEHFEQJHSOQUREADGOPDYRXTVGJZFZHIDIFZCXZOVTGDUQCRSHWWNNIHRSPYEYIEDUYBKNYOTOBWBCNVLTKJWLQQCXADINREYRFPJAIH");
    msg.dist = 0.8746514059736401;
    msg.err = 0.4038918085667803;
    msg.ctrl_imp = 0.9805111830535503;
    msg.rel_dir_x = 0.10710331726913713;
    msg.rel_dir_y = 0.8846959117026949;
    msg.rel_dir_z = 0.8439414263145788;
    msg.err_x = 0.040992305202145474;
    msg.err_y = 0.8658421774794653;
    msg.err_z = 0.7558996842372352;
    msg.rf_err_x = 0.6556753233209605;
    msg.rf_err_y = 0.2537556913356288;
    msg.rf_err_z = 0.876089109180338;
    msg.rf_err_vx = 0.07117507860304484;
    msg.rf_err_vy = 0.883150378138366;
    msg.rf_err_vz = 0.620322747802272;
    msg.ss_x = 0.01605559203718765;
    msg.ss_y = 0.2029940014723538;
    msg.ss_z = 0.496064573359723;
    msg.virt_err_x = 0.8716699191729248;
    msg.virt_err_y = 0.3822454790923956;
    msg.virt_err_z = 0.7144159871478809;

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
    msg.setTimeStamp(0.4963718566336457);
    msg.setSource(28500U);
    msg.setSourceEntity(43U);
    msg.setDestination(46334U);
    msg.setDestinationEntity(211U);
    msg.s_id.assign("XXKAVIRWJNFNCKMNLZJDUQBLVALWWFGFEOJVSBHPVYNMCKZHCTSYCYVAKIIDRBXQWERFTGWJDAZOQQVYHGLHGEZEBCZTPIQCTJPTJAPXTEYEBVCNTJKNUULKGHYMCBHCSDUQMBRSAXIGCAMIAWZ");
    msg.dist = 0.2561058126703062;
    msg.err = 0.15324923532053047;
    msg.ctrl_imp = 0.4874001877265006;
    msg.rel_dir_x = 0.09372936290140399;
    msg.rel_dir_y = 0.2135143034613548;
    msg.rel_dir_z = 0.3343445067724592;
    msg.err_x = 0.6098048721969311;
    msg.err_y = 0.20139379637808652;
    msg.err_z = 0.5936779056083078;
    msg.rf_err_x = 0.5782277354350376;
    msg.rf_err_y = 0.7504524809830232;
    msg.rf_err_z = 0.7049897806269403;
    msg.rf_err_vx = 0.002104891232843409;
    msg.rf_err_vy = 0.6139652792624594;
    msg.rf_err_vz = 0.34907658625039995;
    msg.ss_x = 0.38477461012593017;
    msg.ss_y = 0.5162033690583697;
    msg.ss_z = 0.1455044840219133;
    msg.virt_err_x = 0.45474195956364305;
    msg.virt_err_y = 0.9063435984016985;
    msg.virt_err_z = 0.14111114679464365;

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
    msg.setTimeStamp(0.46113856351498983);
    msg.setSource(44435U);
    msg.setSourceEntity(66U);
    msg.setDestination(34685U);
    msg.setDestinationEntity(209U);
    msg.s_id.assign("NBXXWOLHCTFQTHNEBRJRQUIDAGXWITTXNVKUKNDJWRIMMFHMHESZKEPQIRQAURFEFLVNUEMNQQPWOQUBUGYCPFPLLWPZJIIPWLQKPWOWLVKQULYTGMFOGSBJJ");
    msg.dist = 0.3665566877082027;
    msg.err = 0.8883199913461483;
    msg.ctrl_imp = 0.24960028073541873;
    msg.rel_dir_x = 0.5393557752192975;
    msg.rel_dir_y = 0.5229849219071004;
    msg.rel_dir_z = 0.7833727531162594;
    msg.err_x = 0.5864535907461548;
    msg.err_y = 0.36334099718362045;
    msg.err_z = 0.6593013937161188;
    msg.rf_err_x = 0.009215167231919952;
    msg.rf_err_y = 0.012185369604800877;
    msg.rf_err_z = 0.03561057071105522;
    msg.rf_err_vx = 0.5746549740932875;
    msg.rf_err_vy = 0.3502094130633119;
    msg.rf_err_vz = 0.6153352808391124;
    msg.ss_x = 0.17440995757675115;
    msg.ss_y = 0.36489466779741353;
    msg.ss_z = 0.6534675748867497;
    msg.virt_err_x = 0.02416887656678801;
    msg.virt_err_y = 0.6178315436524815;
    msg.virt_err_z = 0.21607010374800306;

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
    msg.setTimeStamp(0.9283602937146745);
    msg.setSource(63574U);
    msg.setSourceEntity(32U);
    msg.setDestination(9099U);
    msg.setDestinationEntity(31U);
    msg.timeout = 38046U;
    msg.rpm = 0.3046911973422237;
    msg.direction = 181U;
    msg.custom.assign("PJLDCZAIASKGLFFDXYEXJCLPJMOOAOWAKWUTSWUAFPKIJYXBEYWKCCGGENGNTZUAGSYBHMMADTUZZJHWXVZUQVFRJZPDGKNIACNWQGVTHWPQRNNNCIZYELBLDKRBKEYOKJVYTUTYZROPUNFTVHVOQSTSDQSNSOQBCVRWPHIFSDRBMHXIRQGEDAABZQFCLDPIRHZXEISTKUFJCXWYVIEFMMBOTQLSNUX");

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
    msg.setTimeStamp(0.007534540659426825);
    msg.setSource(27921U);
    msg.setSourceEntity(94U);
    msg.setDestination(49700U);
    msg.setDestinationEntity(245U);
    msg.timeout = 11416U;
    msg.rpm = 0.41078305868413323;
    msg.direction = 118U;
    msg.custom.assign("ONJWABBHTQCSQUNCRCJFTAYMWJPZZVWHLKUBXZURIJRMYDXPJDCBTGUPFHASPEQLKG");

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
    msg.setTimeStamp(0.13334119752469775);
    msg.setSource(22773U);
    msg.setSourceEntity(245U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(38U);
    msg.timeout = 11972U;
    msg.rpm = 0.3297335038177328;
    msg.direction = 166U;
    msg.custom.assign("VCMNJJCFOGGONIRPZELQGQPOAQHUXFVXRQLKWLGOYMTEOOTMKPWCNRDIQWDYQQPSTNMSYVSDGBAYNFEVSRZITJQMIFZDDEKNFFAQEEUXMAWS");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.3498375539768983);
    msg.setSource(200U);
    msg.setSourceEntity(107U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(73U);
    msg.op_mode = 91U;
    msg.error_count = 41U;
    msg.error_ents.assign("ERKWMVCFZANQFTDYUYUTBJPIMGOSQKSPJECHFTRDLKRESGDJMCAFFOGZTCWONTNLWGZMHARDPKGJTPVVYCQNXEVJIITBMYFYWFBACUPZUWZVDRWZBFRQHCBCKUOGHWXLQKZOQMLESLRASNXAZEPRLSHNSBOKDLYXLKUMUYXVAXJQNIPIUXCGT");
    msg.maneuver_type = 1421U;
    msg.maneuver_stime = 0.08237339288351997;
    msg.maneuver_eta = 43233U;
    msg.control_loops = 1904415124U;
    msg.flags = 191U;
    msg.last_error.assign("IYASPLAJENGDTOFIJLHUUUBYXWZKRPFOBQMCNDONAICDIGLBVXSTJYHMFOEGNTNYKBGBZEQJRJBUVKXBZSJXWOKKJWSMCVUYRYZXSDMRESGLTRIIAQRZYMOMQ");
    msg.last_error_time = 0.9238959533136569;

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
    msg.setTimeStamp(0.04212079363505139);
    msg.setSource(26870U);
    msg.setSourceEntity(196U);
    msg.setDestination(61037U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 224U;
    msg.error_count = 116U;
    msg.error_ents.assign("EBGAXZQKBWBEBPTUWMMIGGOOQFCSYINCQPDLTFXDETAZJSQMHYKFNPEKWNJIHUTKFWDECLQGXGRSKSSJAAIKCRMOMJYNTHRVASKROUJPKPUTZWHREXKFIRHVNVEFJYYQMMTWZSBBVHNEJYXOTOMSMHDCFZUQDWLVXKUDIZGFUYBGPIDGGXQJLSXAV");
    msg.maneuver_type = 50562U;
    msg.maneuver_stime = 0.9408524386749194;
    msg.maneuver_eta = 556U;
    msg.control_loops = 3398338605U;
    msg.flags = 150U;
    msg.last_error.assign("HKDNNCIZYTTKVRSAOQDZBHUWIBVLEMAVPSICSFLWTIEYLFZLEBYFWXUTGJPRJJHPOIJJKELWOWOAGGSAHBXKHJC");
    msg.last_error_time = 0.9480881011511714;

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
    msg.setTimeStamp(0.740200448431919);
    msg.setSource(42151U);
    msg.setSourceEntity(194U);
    msg.setDestination(1925U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 98U;
    msg.error_count = 145U;
    msg.error_ents.assign("BZWRUTFMRVKVRXMSYMTOWJUYLEHODYZVKGPQJAEDGWTYWZQOHGHLPSLDGTBJNICMFFTXDFCOWUTLZAYAEXXYFBTEOVIML");
    msg.maneuver_type = 40250U;
    msg.maneuver_stime = 0.7967268613645214;
    msg.maneuver_eta = 17398U;
    msg.control_loops = 2859899718U;
    msg.flags = 135U;
    msg.last_error.assign("FMQCEIMAMKECDRJHQFPKNFQDZHWWMKLWHORNJLDDVPPCPZUQZHENXGEXFMZAJDHJWQNNQCOSYBLYGXICURSUHONDBUDMSRVGRTGPNNLVHUAEVCRKWETYDKTX");
    msg.last_error_time = 0.9704121366188833;

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
    msg.setTimeStamp(0.377838712959789);
    msg.setSource(17791U);
    msg.setSourceEntity(63U);
    msg.setDestination(15444U);
    msg.setDestinationEntity(245U);
    msg.type = 197U;
    msg.request_id = 4440U;
    msg.command = 187U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7872012881961815;
    tmp_msg_0.lon = 0.06245652018956738;
    tmp_msg_0.z = 0.049328020682394835;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.speed = 0.20692288851330287;
    tmp_msg_0.speed_units = 170U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8437683711731332;
    tmp_tmp_msg_0_0.lon = 0.5062109742558187;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("HKVSSBBUEYRXUTSYRCAGQZXPMJNGMWZOZXAPYIVZOWPWTDCKLEXWOWWTAADTIMLPPPHORZVODRTZMVDFCLQCOOEYNLNNYFFXAGPQJPZFYECTKIGLBKHTQASGUFPTERJBUGYLJAGSMNHANIFQAWMXWRWERCHBXLHDHDPSABTBGUMHRIKCR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16364U;
    msg.info.assign("DPPAWBGYJKINMNTPSMRMUNSYYWZBRQTWAEATBVRZLUODHHPXICOJIQISYHLPEVSYZXRWQYOBXULBQEVAGUAGFNEJRGSCZHKFTOKTHSGWTRBALDAXUCVLRESCJYOQDRTTUZWOEEPWKFBMXNWKGMWKDPJJFDIILNJNNKXHVQCTCIHZMOQIAMZREQOKFFPBHYVFMGPUAMZJSXGDFTHMZCRJWLYIEXYOZVKGQLILVUHENCCAXVSBD");

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
    msg.setTimeStamp(0.659085697859996);
    msg.setSource(11122U);
    msg.setSourceEntity(224U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(174U);
    msg.type = 65U;
    msg.request_id = 57241U;
    msg.command = 199U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7650776905962746;
    tmp_msg_0.lon = 0.527019803009291;
    tmp_msg_0.z = 0.7946869757161874;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.9604289457226287;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.custom.assign("INLYSKZVIFXXMROHMUFQYVREZZXVAJWGCUHLZCHOOVEHEUPJNXLLDXFKRGCHRMYOJZYYGPGCNKVDGQLIMIARDDUICGXPINANYKCRQWIHNSTTJDGLVEBDAP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8648U;
    msg.info.assign("EWLGKORQUURCQAVKJPXVVBFSXWGJZCLCESZTTQOTLPZKFSEPXZKILEUTDGCDPWJYNACRARPZULDCSDYNYQSGXBWBPMOTWJWIMQWJNVGAVKGAWIEALKDHSELBHFYMYCFXPJMCMPDYIJWJCLBITSFNXVUIVYDUMKTNFAIZLOORHBZTAI");

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
    msg.setTimeStamp(0.019900890002855665);
    msg.setSource(48277U);
    msg.setSourceEntity(57U);
    msg.setDestination(42851U);
    msg.setDestinationEntity(229U);
    msg.type = 2U;
    msg.request_id = 36119U;
    msg.command = 76U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 44416U;
    tmp_msg_0.control_ent = 32U;
    tmp_msg_0.timeout = 0.7201892279954011;
    tmp_msg_0.loiter_radius = 0.8302640218911855;
    tmp_msg_0.altitude_interval = 0.2966319276413618;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19389U;
    msg.info.assign("IKHJLZTXIDOVBTWUJITHBRQITDHAKAXVKXITKJYKECEPLPMEGQSNQDEPYIFLUGSCVSHRASKAOBANJHFVOAUKVLPOQMFBMUPMURVOKQDUBOXYUGDJRZUTQZZNBWDEHGHONQWCXJVAJNCBKYWSPIGHDRZLEOJZSLFEZLCQYQWNBEMRXHXOFMGCSLJNSNWVRYYNBMTXCIXELPCAFYLMRSWEGPPGPTTWWJIGBDVMQY");

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
    msg.setTimeStamp(0.5045679254542992);
    msg.setSource(39866U);
    msg.setSourceEntity(253U);
    msg.setDestination(7502U);
    msg.setDestinationEntity(218U);
    msg.command = 117U;
    msg.entities.assign("EINWJADXRDUQSKUXHXQNPMULJGIPBCDHHTWCSCNAXAROQKGBZGZKHPVAUDVBYZZDSWIHMELEYFWVJKLJAVOBFBHZCYMAPGTNKQAGMJIWODFNENAESPBWJOLFZSCRFRTHQRWJWOPMYMUOQIIWEEQVFXSDVIKRIGMIVSRIUFWBROTRTCGVLZCXNUQFYCPZGZRABHXQY");

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
    msg.setTimeStamp(0.21506497370936395);
    msg.setSource(6175U);
    msg.setSourceEntity(174U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(103U);
    msg.command = 68U;
    msg.entities.assign("PRPUIRSITBXMRFKDXCEAZDTUFWCWEUVNEPJCCO");

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
    msg.setTimeStamp(0.8832547944343966);
    msg.setSource(20210U);
    msg.setSourceEntity(21U);
    msg.setDestination(28517U);
    msg.setDestinationEntity(244U);
    msg.command = 215U;
    msg.entities.assign("QEXALAGWFHZMPRVNGKWKPOLGHJAENOYOEOHEBXSKHTSUJWRLDKBKRPTXQVFAJUACFBFFHXGHNSPINIAWGAQWMBTKYYYCKNCWCDIUKUFMUTSVZLRCDMWWRPOYBZNZISYYYNSDMJPFZCVLBHPRMTQUJZUTXTBOCWXZMVCIEGQEQZLNRODAVXULZSBVIJQUWRXRFCSDTHFIEGM");

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
    msg.setTimeStamp(0.6082499734108011);
    msg.setSource(50876U);
    msg.setSourceEntity(123U);
    msg.setDestination(62284U);
    msg.setDestinationEntity(246U);
    msg.mcount = 40U;
    msg.mnames.assign("VRFGHDGXDUYVPYMRWZKBLCLKRIUQTWEKWSPIFIOPESMFN");
    msg.ecount = 40U;
    msg.enames.assign("VZLISDNHVOPOGGFPPIIDPAZXOYRUMKKXWQYGHRECMEOQWSWXHKTPVJTLYCHIVIEUUHRCQPEMNIYNDPDWVYPJBQQWGADICEHDGVBBMHZAGBDKXJSWNEWRQJSUMSOJJFCNFJALTFBENNGUBWZXWTRRZZHTVUKRBLUZEVHACBPSRADRMALTQJFPKRQALZGMVQYSOJOLFASTFWUUMMXTKXTVIDBGOZBFGLZEOYLNNYNOAIQXCUMCTKLJ");
    msg.ccount = 67U;
    msg.cnames.assign("QTASONEZMISTFNSNXQBACWZOCOBJFRUCBBXGBHZTPIJUZANWVVQYWJZ");
    msg.last_error.assign("UJQDBDGHVIYWRCIRSDAJVUKCVJVWJMEAPNDTZROOKWGANHHIBUXZEFJTNIXRRUAIZMESUXNZMFSOBWRPUAGSFCLLHCGSDPACGIVYYISNGWJ");
    msg.last_error_time = 0.0889413441829422;

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
    msg.setTimeStamp(0.9113613331280984);
    msg.setSource(42375U);
    msg.setSourceEntity(62U);
    msg.setDestination(11471U);
    msg.setDestinationEntity(151U);
    msg.mcount = 128U;
    msg.mnames.assign("ONTOKNKGDNYWZNGRKAEVDPTRCITMEZQFRPO");
    msg.ecount = 229U;
    msg.enames.assign("IITAJOKHUZBFELDFXSAWPVMLBFJBYPUKYJLKKSPGCZOEUMABRPGFHGEJTGHQZSRMKTZOVAIDPVFWICNL");
    msg.ccount = 187U;
    msg.cnames.assign("LHLIYPMKZBHMVBXATVXHWTPMGRCTSYSCEXDRFDGGAMUJCGYYIJYNFZEQAYFMRZTFRINOBDYWNNSXNDQAHWTZTECVTZVQZTYJZADZOXKIMPPZSROVIBQAGUBJUQELGHSIXESDHLWO");
    msg.last_error.assign("OZFXBXFLSNZSKZSCVQLGTUHIECVIQAPMWWAXETMNFIXARIVCOODWUGKMLVBGBFBKKDWXNAOQJJWBZNFTBGERRBJPANSEDOJVXBSSVMHEDMPHGODPZLIAVHPHRSNUTFPTPPMTUNIDHBJIMTIIKFNQMXQC");
    msg.last_error_time = 0.16027731871875894;

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
    msg.setTimeStamp(0.7078619129288084);
    msg.setSource(62257U);
    msg.setSourceEntity(133U);
    msg.setDestination(15199U);
    msg.setDestinationEntity(249U);
    msg.mcount = 236U;
    msg.mnames.assign("RKWVESGPNUAPKNTOJRWVBDJMYCXVNXEPIMLCAPXSEAZKOOGHTHACTYMSTCVFIRWTCQYLULCGJWJLXFMLR");
    msg.ecount = 61U;
    msg.enames.assign("BDOAYUYTTMIEUCMLGRNTBZGQHVCDSJWXYZVBFGBWXXRU");
    msg.ccount = 15U;
    msg.cnames.assign("SZUHGWHMDIPQYKUODIWTSJAKAHNDUSORVGJTGSVVZZRWQCFWRFYPJEVTJILZTXZXZQSFCRVUWEWGCHFRBSLFRTGCCLQOMELNEABMBIXALXKHKYUQJYGPCWVNY");
    msg.last_error.assign("YHIFLBYKGNIBOBPMWUDXGLDTQNQKXCIQWRCPNTYPVEXBJWBTALLSCHDIOMGOQAHTKWKBRRJOFULFRMLIQGDEIBKDGCCPFEJEFISUFKOAZVMGYUCDPBUJUJHGPMZSXTOZMLFRNYUVMKWZDWWXORMXVXBZQNBSEONMZZNVXGAJRQLQVEKPHAV");
    msg.last_error_time = 0.5368618183625882;

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
    msg.setTimeStamp(0.8288854915979776);
    msg.setSource(38035U);
    msg.setSourceEntity(193U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(179U);
    msg.mask = 99U;
    msg.max_depth = 0.6031811432227694;
    msg.min_altitude = 0.21799303411186488;
    msg.max_altitude = 0.13798459688936826;
    msg.min_speed = 0.2656613671039787;
    msg.max_speed = 0.7511075794318725;
    msg.max_vrate = 0.0755370845197888;
    msg.lat = 0.7293239892843889;
    msg.lon = 0.15934417357012076;
    msg.orientation = 0.28968851405980056;
    msg.width = 0.5191986315837627;
    msg.length = 0.841571591297597;

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
    msg.setTimeStamp(0.03584937466284033);
    msg.setSource(13683U);
    msg.setSourceEntity(165U);
    msg.setDestination(5279U);
    msg.setDestinationEntity(8U);
    msg.mask = 146U;
    msg.max_depth = 0.06222263497415359;
    msg.min_altitude = 0.44877054734355604;
    msg.max_altitude = 0.6768423531209701;
    msg.min_speed = 0.11779128330642397;
    msg.max_speed = 0.34308641149592645;
    msg.max_vrate = 0.8799727628278035;
    msg.lat = 0.9686380464099058;
    msg.lon = 0.8810203997618383;
    msg.orientation = 0.3087579631316174;
    msg.width = 0.908288442101851;
    msg.length = 0.5253225633240209;

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
    msg.setTimeStamp(0.33080161831876653);
    msg.setSource(16077U);
    msg.setSourceEntity(85U);
    msg.setDestination(55258U);
    msg.setDestinationEntity(60U);
    msg.mask = 150U;
    msg.max_depth = 0.15302358529858573;
    msg.min_altitude = 0.7447283778918883;
    msg.max_altitude = 0.473450660168074;
    msg.min_speed = 0.41443800559761956;
    msg.max_speed = 0.04844237596921497;
    msg.max_vrate = 0.7898776384092265;
    msg.lat = 0.886376600672916;
    msg.lon = 0.9629615970934863;
    msg.orientation = 0.02710879637295127;
    msg.width = 0.7250209925565304;
    msg.length = 0.6868285511574754;

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
    msg.setTimeStamp(0.8375599281810258);
    msg.setSource(397U);
    msg.setSourceEntity(183U);
    msg.setDestination(13314U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.5949896205386711);
    msg.setSource(33804U);
    msg.setSourceEntity(56U);
    msg.setDestination(21719U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.6245859638765763);
    msg.setSource(49940U);
    msg.setSourceEntity(157U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.3484806373463212);
    msg.setSource(44891U);
    msg.setSourceEntity(9U);
    msg.setDestination(56112U);
    msg.setDestinationEntity(149U);
    msg.duration = 41038U;

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
    msg.setTimeStamp(0.545587939806983);
    msg.setSource(38461U);
    msg.setSourceEntity(215U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(137U);
    msg.duration = 63337U;

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
    msg.setTimeStamp(0.8827499541123167);
    msg.setSource(5798U);
    msg.setSourceEntity(164U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(185U);
    msg.duration = 44461U;

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
    msg.setTimeStamp(0.4458393523231725);
    msg.setSource(31208U);
    msg.setSourceEntity(175U);
    msg.setDestination(10449U);
    msg.setDestinationEntity(93U);
    msg.enable = 117U;
    msg.mask = 3674573990U;
    msg.scope_ref = 1608945668U;

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
    msg.setTimeStamp(0.033239085176662075);
    msg.setSource(3639U);
    msg.setSourceEntity(98U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(101U);
    msg.enable = 162U;
    msg.mask = 3018129172U;
    msg.scope_ref = 1846023122U;

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
    msg.setTimeStamp(0.9249855274204545);
    msg.setSource(32595U);
    msg.setSourceEntity(209U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(131U);
    msg.enable = 236U;
    msg.mask = 175578635U;
    msg.scope_ref = 2195594998U;

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
    msg.setTimeStamp(0.026564362549042486);
    msg.setSource(42581U);
    msg.setSourceEntity(82U);
    msg.setDestination(18127U);
    msg.setDestinationEntity(24U);
    msg.medium = 211U;

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
    msg.setTimeStamp(0.33096105689822986);
    msg.setSource(4908U);
    msg.setSourceEntity(33U);
    msg.setDestination(29284U);
    msg.setDestinationEntity(228U);
    msg.medium = 226U;

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
    msg.setTimeStamp(0.6468106848382285);
    msg.setSource(5198U);
    msg.setSourceEntity(27U);
    msg.setDestination(32166U);
    msg.setDestinationEntity(94U);
    msg.medium = 48U;

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
    msg.setTimeStamp(0.3532686192972967);
    msg.setSource(62283U);
    msg.setSourceEntity(147U);
    msg.setDestination(61534U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9685372837859725;
    msg.type = 175U;

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
    msg.setTimeStamp(0.945238603222667);
    msg.setSource(41991U);
    msg.setSourceEntity(83U);
    msg.setDestination(24422U);
    msg.setDestinationEntity(139U);
    msg.value = 0.19004907123839;
    msg.type = 131U;

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
    msg.setTimeStamp(0.1706915779868472);
    msg.setSource(55753U);
    msg.setSourceEntity(52U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(233U);
    msg.value = 0.43692019163997065;
    msg.type = 208U;

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
    msg.setTimeStamp(0.4584814895059355);
    msg.setSource(57487U);
    msg.setSourceEntity(1U);
    msg.setDestination(59977U);
    msg.setDestinationEntity(108U);
    msg.possimerr = 0.686666185941524;
    msg.converg = 0.41273341877726244;
    msg.turbulence = 0.6927149310703806;
    msg.possimmon = 9U;
    msg.commmon = 117U;
    msg.convergmon = 29U;

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
    msg.setTimeStamp(0.8983670577470364);
    msg.setSource(6396U);
    msg.setSourceEntity(189U);
    msg.setDestination(9912U);
    msg.setDestinationEntity(179U);
    msg.possimerr = 0.16254815188199656;
    msg.converg = 0.6331307069706171;
    msg.turbulence = 0.5399067065709057;
    msg.possimmon = 110U;
    msg.commmon = 93U;
    msg.convergmon = 10U;

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
    msg.setTimeStamp(0.4832579802424063);
    msg.setSource(50446U);
    msg.setSourceEntity(193U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(240U);
    msg.possimerr = 0.9059203596165422;
    msg.converg = 0.5646401932658023;
    msg.turbulence = 0.9638176600074597;
    msg.possimmon = 127U;
    msg.commmon = 230U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.7639666616544013);
    msg.setSource(24696U);
    msg.setSourceEntity(178U);
    msg.setDestination(36372U);
    msg.setDestinationEntity(223U);
    msg.autonomy = 18U;
    msg.mode.assign("NCHWZGCPHMOABNGXSPKCDVBMHLMMNXTIOIBZQLPDQOSEYFLQSXBGPZABGIDOFSPLYIPSHRHFVQMIVTYJAIKCYFVLNUUWIBYTZOHZTEYZRDSLRFQVGCUSCNVMXEULFBBOKWIYRJRCBXXAILNDTWYZFHOXAECONONUTCZVQGHQERJMHSRWETW");

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
    msg.setTimeStamp(0.8024326351828368);
    msg.setSource(17913U);
    msg.setSourceEntity(231U);
    msg.setDestination(5823U);
    msg.setDestinationEntity(18U);
    msg.autonomy = 58U;
    msg.mode.assign("SACECSBHLKQHSZBRQLTOXOZLHAWCFIJDEJSKXYFZTGTUBRAILQQEETFWVBANRJMOGQXUCOZNKXITTZOKXAVQVTIBFLKFSPHNCTUEHICYPAUQXLHENRRPTMMXGDRSVSJVGGYFYQAJNUMNUBWMOESDNWXITAXFXOJMNGAWBWMZZDPDKYRYYDVZCJFUNAEWDLPKKIJIMBGOFVULVGMECIQJUOBRYDSPCBUKHILQGFRDHKEVZWPY");

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
    msg.setTimeStamp(0.7894030320227646);
    msg.setSource(44511U);
    msg.setSourceEntity(240U);
    msg.setDestination(52924U);
    msg.setDestinationEntity(240U);
    msg.autonomy = 187U;
    msg.mode.assign("XJSDVGFSQOCAKFXWDGBZRERWXMYSTHIWXBM");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.3985468617433193);
    msg.setSource(11648U);
    msg.setSourceEntity(70U);
    msg.setDestination(18606U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7590130373236254);
    msg.setSource(15113U);
    msg.setSourceEntity(238U);
    msg.setDestination(62004U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.00795841565909794);
    msg.setSource(63349U);
    msg.setSourceEntity(8U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.25905477966857837);
    msg.setSource(56255U);
    msg.setSourceEntity(64U);
    msg.setDestination(47809U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("HIZHPUACUSBVBRRACSPVPBEWWTUQRFLXVMNOTMAZ");
    msg.description.assign("TWSKVHHDFEYCWLBSJSVLTOMHXGCPRWGRHLCMXRPTCJPMUEVKKAF");
    msg.vnamespace.assign("GOBUXQVZNNLJLW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DZAREYTJIHLWECQUHNNUWZYAASSGJYYDBUUHXCXJCKDRGMZOJPFTZDLWPNIZFHAQBUUJGXLEQBWHMZVRRTMSJAQOIOFBKACVQRXNEDRHYQBOOUZRYOOTICIMOTPSKWNHLQNBVCVPFWCKKBBPHJPIPVAXFTNSZSXTLWCFXQMITLPFKKFDNMEXOSQCKWZLLBVYJEZRMUJIXNGDWRMFNKMDVAY");
    tmp_msg_0.value.assign("RGUAUYGJHZZWWTLKEVSDPIYLOYDAUXSPHHKRABXQCRIYOFCRQZUVSGYTOVPSNNPIBFIIWDJBZQJGTWOPFSCVJNGSMWWCMTERNHDLWUSCVXLKMDIYQKHZMFYGUAPTTASGMPQZLQEVNFTORABLNEHMKDHKZOPPEEKUCDJAEENAWJXLOXTGQTJFHFBLKDWRNDBGMYIMKFXEOJZXVJVUMIHFVBIOAZTRXSCYMSHNCBBC");
    tmp_msg_0.type = 20U;
    tmp_msg_0.access = 94U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NFZVBHTVWDZOIPSERPNEVNLQNLDMTIEGFZBXGEDTALZSAOAGAVITZBYUHYNRCIYMMMAITAWNSYBZQHJKJDFDZASWPLWOWKQUYYTQKGIDFOEMKHRMNBFYKQBWXOBVRCXBQLIYPESUCNDKWXKKFXFNJHVOSLNHWDSLQOJPQJQVRBGPQCDMKPOFRHUXZOPDGCUTMBEJARIYAYLJGRKSGCCHZPHJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MSQNDIPMOQXYKDJCKZJNVGFTZFVLZLDKWRQWWUHWKVFOJRJVYNXUVKJNFEKZPSOFRMDBESIHNOIMILKMAJAPEPYFJPGEEU");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.4081495594652854;
    tmp_tmp_msg_1_0.lon = 0.2003727036295656;
    tmp_tmp_msg_1_0.z = 0.65533983147906;
    tmp_tmp_msg_1_0.z_units = 198U;
    tmp_tmp_msg_1_0.speed = 0.37526119313439354;
    tmp_tmp_msg_1_0.speed_units = 41U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.8621036900617344;
    tmp_tmp_tmp_msg_1_0_0.y = 0.10771502332359639;
    tmp_tmp_tmp_msg_1_0_0.z = 0.7786291867905362;
    tmp_tmp_tmp_msg_1_0_0.t = 0.13007462333225173;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.vid = 38581U;
    tmp_tmp_tmp_msg_1_0_1.off_x = 0.35118763148066656;
    tmp_tmp_tmp_msg_1_0_1.off_y = 0.918661676688718;
    tmp_tmp_tmp_msg_1_0_1.off_z = 0.9843446531952595;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_tmp_msg_1_0.start_time = 0.5848180416815486;
    tmp_tmp_msg_1_0.custom.assign("NVYDZTODMQARYUVWXUHDORMSFETQWJY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::UamTxStatus tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.seq = 40139U;
    tmp_tmp_msg_1_1.value = 124U;
    tmp_tmp_msg_1_1.error.assign("ZLALWMHTDTMUHPKQIUWNRBQHNUPOCKKETLEPTJULDCMSQWZBQKAKZGIMQZTOHFHIOVZMNEDSKBVGYUGVAGSDUYDRSRSVJDFYAVEMGLTOPVWEIXSPUQZJGEHTELBLJYBFMFONYXSVNGMXZFAFCBMNPBAOASYCSRHRBCDPAXOJCXRJYYAGDQLMIWZDIYCIFAFTCCRNXWCT");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::ImageTxSettings tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.fps = 54U;
    tmp_tmp_msg_1_2.quality = 9U;
    tmp_tmp_msg_1_2.reps = 4U;
    tmp_tmp_msg_1_2.tsize = 15U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("YWCOXCMCHOAOUYKXTPQBQHJLDBMFVXUNPJJYKIKXNKUVBUWAAKRVFSMNNNIXTODNWFTUMPTLDIIFMSLLOLJWAOGPBKQSRMCMEJUHCKIKHQZLVFGDCQWFSOTLOFAZEQVLVSRZPCYQDZIRWNCVRMPUEAZDFEJAHEXXSBBNGRTYSSGPPVZTDVVRAKABQERWHZDOGTBUBRDTHSHXAILQXYURFOL");
    tmp_msg_2.dest_man.assign("TLJIAMROBPCWGFFAZNPTSCQGYZODPLCEJNRWFTNFDECLDFRXQESHYJDEQSCEKCHOTZSSQWVUGSPEWXJSOZPPILTYDWTMNMCXICJVHXIBMDODVHAIXGTNWGIRGCKESVVNXNQOBMEKRAFTFKBPYUJQAWNPPFHWRWIQKMQZGKJVBUNGSKKJUTFMIHVUYRRUYORDIMLLULAYMLPUHCZBDJ");
    tmp_msg_2.conditions.assign("TKGYFTZHLSCGHBWZCWEMZEDBJMQFOMUANIPIWODTSRTPBSMSDIJEUXLCVBVNVZYEUOQKDDVEJPGHACVNQZAWJIGWYWO");
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.38767163386433434);
    msg.setSource(59409U);
    msg.setSourceEntity(132U);
    msg.setDestination(14007U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("JYDADTUVOCKASZJPCYLJQJWGQLARQXOAXMRCLNVWMMUZFOSVKGZCBOFDDALXHATGSSXDYWMZCZFAOZNJXEQEEPYHNJXCKBKSCKCSEWNDNVNLZTAPPVFGYRMFBFEYHMYIRQRBRNVTUVPXWPR");
    msg.description.assign("AHELZINAQWUMIRZIYBXROTOSYFOKFRPHHDZMIGSYFIZZWZZPDLANTBHUKNQITUZQSOQBNGUJADNKWFEDSYQVXEWEIKIJUSRFQLRVQVZJDVGMPYEDFXEWLVXBCY");
    msg.vnamespace.assign("PQIDWGVLDADBITHRUCQTHAIFBNMPSVVNCIRJKGBFEUDHTSPJIRQPSZLVSBARLYJFNETORCXLWLFLMSLJFPFVRDYBOPNNCVAWUDTOJRLWZYYFWAOPIKKEUEZBJJOOGYGTKXXPCXOAQFMIHQAJFUOMSDMHIYHQTLWYWEIMKNAGVMTAWLCQVKBPZJXKTDRSSHGRGEGUZXEUMHYNGDXSBZNO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DDHUYSSEMAFHKBQRPEXYAVOBIPNRQJLVSLARONCRUFBUXDEMOWXCHSRKQDVCLGAYOJCEMETIJPA");
    tmp_msg_0.value.assign("MZBDALNIPQQWFNKVMREFRPCSGNWGQWHEHHQYETFUNRADWUMJKROEKHSRYQXDRNKAVEAISZXOKCFCMAYDLFRTHXLFKGPMUBZTJYUDZRTHZOWBXIAFLJBZKOUQTUZVWCHVDSONXMAYYSXJSFDSKQTPVHTQOGSLIVCEILWGNWELINVEJJNLXPRWSOCPTBBJKPZFLYXQMGJCVOUZIFTJQXGTBGHPASXYMB");
    tmp_msg_0.type = 65U;
    tmp_msg_0.access = 106U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VNKABRGPPEZZEYYZOTEZIIGICNIPKWPTQEHFFNQKCLKWLWNFOBMZOLQQFQHYJKNGMFGTRKTLBBJZCWXVAMBHTMXJQIANPIDVGYIPUXRUBGNROUVKLPWAMTYCIMFSLRVYFHAHHGZINBPWLOOKBCUAUDRJWESEQDJXT");

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
    msg.setTimeStamp(0.5551858475431511);
    msg.setSource(45477U);
    msg.setSourceEntity(232U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("RANGFDQUYDHAAESHJCZRAQOXRMUTBCINJLFYCCDBTAFMFTBGTRQUZLKKXXFFMZZIPUUINEXGIAEEOBGFMWARQOTKQRPDARXHWHYMKYVQWRLVDYVBTVXUOLCYLZPMJLPGFOQCWKPGSTUHRHTZWKGZUSNVJIWSLDLCNOWEETEXRXMCOZONFIKXWPBPDLABJVNZJNDGHESKKVVPJYSWJYBMQYGHVICZOFV");
    msg.description.assign("JYEBEXAWKTHIVCJNENOZGSCROQZLPTCGSUXTRPODWKWVULKXERNDBLXOWJHIBJOHQZIIGVWFYQLCUYJBFATODOKZUVHPJFTFVSAWAPRAWGUXUAQVPHSHOZMHYXCRHUXZWTEGDLZUFPTIYVDOLEXBYFVUJQKZDRCSIYLGYKVQMAPNFNSRPSLABHFQQHCXBIMXMLFNBMSEZEUGKJAMDDKNQSDBVWCMRNFKTLMJNDIWIMGZGRTJOK");
    msg.vnamespace.assign("QAEMFSPSRETRIYNTQXIDGABQLXCDYCZSCLPAXFHBARMOTIZQPDWMUC");
    msg.start_man_id.assign("WRBNJCNJGTYEEUAUBTMBMDZBEJMJGACQTWFAUPFROVRQJMVMQBWBHLOHWYFIZIXCEAVOTTQRUEHJCXRFQWKGHECVVHRXFDVWKMXEVDGNOOSQFXNLMIAHLUBTNCXFLGCSCUPTRCKFGNMOVOKZBCSSYEGHKZNIADHPJHOZYZZKYUWSLJLIYZXAYARLEOVPSRPOKBNTSRPZDIKAYGSFNDDDMQU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SGMZYUQEPHABHNDCXKEIAOLQGSJDWQZRPLEXHUFJRUMMGSBOOXWZNWDUINKKFBMHI");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 49297U;
    tmp_tmp_msg_0_0.lat = 0.5685599267255239;
    tmp_tmp_msg_0_0.lon = 0.5122357509478864;
    tmp_tmp_msg_0_0.z = 0.5694459408449719;
    tmp_tmp_msg_0_0.z_units = 43U;
    tmp_tmp_msg_0_0.amplitude = 0.5709161701002551;
    tmp_tmp_msg_0_0.pitch = 0.2462278500688201;
    tmp_tmp_msg_0_0.speed = 0.058815844496608594;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_tmp_msg_0_0.custom.assign("HQPFENIGVWWJCGCACGVKMAPXHQICYIKLSDRHMNEXAEVQSTWILVOXUYBMTHDU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::NavigationUncertainty tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.19781196301765613;
    tmp_tmp_msg_0_1.y = 0.03481569664262596;
    tmp_tmp_msg_0_1.z = 0.17376367303742535;
    tmp_tmp_msg_0_1.phi = 0.7817323162782512;
    tmp_tmp_msg_0_1.theta = 0.3036953810224374;
    tmp_tmp_msg_0_1.psi = 0.21829083497328883;
    tmp_tmp_msg_0_1.p = 0.1398765902609681;
    tmp_tmp_msg_0_1.q = 0.7570094875898625;
    tmp_tmp_msg_0_1.r = 0.678895774683513;
    tmp_tmp_msg_0_1.u = 0.5181568900798946;
    tmp_tmp_msg_0_1.v = 0.43401503236210826;
    tmp_tmp_msg_0_1.w = 0.2662697721754821;
    tmp_tmp_msg_0_1.bias_psi = 0.43957344409804533;
    tmp_tmp_msg_0_1.bias_r = 0.42212428219741494;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::RestartSystem tmp_tmp_msg_0_2;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Aborted tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredSpeed tmp_msg_2;
    tmp_msg_2.value = 0.20740742681689173;
    tmp_msg_2.speed_units = 128U;
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
    msg.setTimeStamp(0.47182411568825644);
    msg.setSource(20676U);
    msg.setSourceEntity(166U);
    msg.setDestination(26U);
    msg.setDestinationEntity(224U);
    msg.maneuver_id.assign("QSFSNWAUDNYKTEJUWAB");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 33278U;
    tmp_msg_0.lat = 0.5597131534812677;
    tmp_msg_0.lon = 0.30292584419357627;
    tmp_msg_0.z = 0.25944572283689193;
    tmp_msg_0.z_units = 145U;
    tmp_msg_0.speed = 0.5001395808355685;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.bearing = 0.8238028464597358;
    tmp_msg_0.cross_angle = 0.23909634481953113;
    tmp_msg_0.width = 0.7442454965371783;
    tmp_msg_0.length = 0.38083556972279;
    tmp_msg_0.hstep = 0.337111379331658;
    tmp_msg_0.coff = 136U;
    tmp_msg_0.alternation = 64U;
    tmp_msg_0.flags = 96U;
    tmp_msg_0.custom.assign("XDLZEFDGQLVGTDFASCENYOCHZQCFENAPWPQRKNHXUGUIMGJZGXCPSRJAMPQSIDOVUVCORPVNADFSFQIZJWLJNTFOYEHUCWEKTWBMDTXVFSMTYPOQMTKHEIWRYRS");
    msg.data.set(tmp_msg_0);
    IMC::EulerAngles tmp_msg_1;
    tmp_msg_1.time = 0.563255011576939;
    tmp_msg_1.phi = 0.9224385131834447;
    tmp_msg_1.theta = 0.5826984173744559;
    tmp_msg_1.psi = 0.8611854013238585;
    tmp_msg_1.psi_magnetic = 0.7907243504062226;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::NeptusBlob tmp_msg_2;
    tmp_msg_2.content_type.assign("ZCRUCUEQVIEUQEYRVDUZVYOKXNLKDAKAFCSFQWVOTDDIACNSRQTOPRQIB");
    const char tmp_tmp_msg_2_0[] = {124, 111, 59, 53, -128, 25, 102, -98, -65, 58, -8, -50, -8, 49, -5, -96, -113, 98, -60, -1, 67, -48, -97, -3, 111, 28, -101};
    tmp_msg_2.content.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.604121613122693);
    msg.setSource(5075U);
    msg.setSourceEntity(96U);
    msg.setDestination(381U);
    msg.setDestinationEntity(86U);
    msg.maneuver_id.assign("DHZFEBQTDDXFAOTRCYSWWUJSKFBLIEGJXZMUCKAFDJLOUWBBFZZNWPCDRCQOPWBRTCEYYVPKSWGCWDNYONMYXSTIMHTSGKSWNKMQLFLKOLLNBUIZIYCLJKFQJYIOIEKAHREPUEIEQAXSENOUDANJRLAVCMPOLQMCMGMBIJXDBQPYDCZSJRPGMKLTTNBRVFUHWYSAIJHGAZBPXZQVSIQGHVHURM");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.4024032646444735;
    tmp_msg_0.lon = 0.2676268604204066;
    tmp_msg_0.z = 0.19576258895430143;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.speed = 0.1545335682275536;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.custom.assign("XSFGDQTFAPACNOOPEZXRORJUTHRCUCLNFKJHVQEIUPMDBQTBUEIKOWPCHBELTCZVLRYMSRKMIMYYUTFJQAPGKAEHRQBCMATYJLLNFMWCQSTYNPEGCIHHBABKBJIUSJRZDPSGIQNPXCKDMSJDFRAZVBLAZKIGCSUWNVFESVHYOEONAOPVVFXDINZBLHGWXMJXAKUWNLXOLVWGB");
    msg.data.set(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 238U;
    tmp_msg_1.x = 0.8303096476642213;
    tmp_msg_1.y = 0.9453523419860101;
    tmp_msg_1.z = 0.7746980898272862;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TeleoperationDone tmp_msg_2;
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
    msg.setTimeStamp(0.9245549550589365);
    msg.setSource(36919U);
    msg.setSourceEntity(237U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(31U);
    msg.maneuver_id.assign("BFCTSKSOCGWMTULRBSBVVCGWZYOWRDXEZHCDWRKLGZYUVINNDXWBAZVZHYSKEELVTPDQANVK");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("RIYIRLTNUOBLHOFUMTHYQELSKGNFBEJPSXVSXQFWLPEKAKSBJFVLRWZXIKIRPQYUPNAJSJEMDMOQDNZFCZIFCGHXBLVAVTKDSBACBIMEGHVTMGDKUHIMYALDEWGZTOCYTJLPGOYBTEWXJHXUPMKBDMKIXNCKQCXCDJFRPVPCPZWLNSRZZATQASGGUUFYZHOCLDNDZVGPJHWMGROSTUYZQXVRVOMQYWOCNREINXKSUDBQWRJ");
    tmp_msg_0.formation_name.assign("KXCGUPLZXEEOJVAZDAJYROHVTSDZNCWJWJXTCMZQBKLXWLJUWJHBZRCVAVUBKNYDTQZLAEORXNKLEENSAVGTGNXQDWTHPLSXKKATMAKYILJPOITHUOINBWFQHFHGFMRODRZHYDMRZY");
    tmp_msg_0.plan_id.assign("MVWFDLLMKOCXQUCKZISXGVLJGTDYHUDFYNRZDURALRYIARWVSXHOXUCKPZLRDFOTKUIOMELXKJWGRMKJEECBOLWWQPBVMHZRFZXADGLNHULTGDULVIYMJQNNFAGSWQGRPHCGPMBQHTJSNOJJYIVTZFSHOTHKFIQNEJMCEBXSVPNYHEUWSXBVTADOQCGDTOJRTBPCCKIESIRNWUSUNVBAZPTCVGZEFIEAWAP");
    tmp_msg_0.description.assign("RJBQIGVJOGYHYKIUDERPSQFJXDVDSATLNBUQMULMXKSEENIDJTGUHFITNCUCJINFVTYEYCWJYGCUYNPHATZCWWZHNIYLXYLJPHOVLUVQQNCLPDZHPLROTFUVJQDSGWKRBKQAE");
    tmp_msg_0.leader_speed = 0.8848743714143902;
    tmp_msg_0.leader_bank_lim = 0.8682620341151973;
    tmp_msg_0.pos_sim_err_lim = 0.43287663194351744;
    tmp_msg_0.pos_sim_err_wrn = 0.7408604961718223;
    tmp_msg_0.pos_sim_err_timeout = 51649U;
    tmp_msg_0.converg_max = 0.668582378880462;
    tmp_msg_0.converg_timeout = 12294U;
    tmp_msg_0.comms_timeout = 31358U;
    tmp_msg_0.turb_lim = 0.854309758814507;
    tmp_msg_0.custom.assign("ADEGCNOGOZJCFLCKDNAXMUGAQOESTGVMBYHOLTLQIXUERSMBSMJYTHJVCJJRGVTMWOPFYIQODVIZNERXLUCQEVYRPESVYDBOIJSH");
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
    msg.setTimeStamp(0.4230849801929131);
    msg.setSource(3392U);
    msg.setSourceEntity(72U);
    msg.setDestination(2714U);
    msg.setDestinationEntity(238U);
    msg.source_man.assign("RNDXGSKSJAPAMJWOJUJSQKCVVWGTEHEQMFINLRUKOTKMOREWEZGHRRBCPLTCYAUAYHUWNZNVYPAXWAYMHTPAHOAFUEVPVUUZCIPGVPVYXTPTTYGWMBFXOIZQDLRFVOXQGILZRZMZJOLWUTCADJFHGNCKSAVQXWQTSD");
    msg.dest_man.assign("BCSHWANBOROASYPMEPCTSGRGEPGYVFYAZRZLBYMAIIQPDKALGNVCXMHUPURUHJREZKACXUICDFNLNNATIWQAELBKDKVGOUPUXHMOJITJRJHFOVTHPMQDMOQJIMXPUASHBZVCFQZFGEFSDKKXNZCXZWLPHGLJYEIFKRZLTIDTMWYDXZESGKEWTFYKUUNWVCCTXJDROOLJMYB");
    msg.conditions.assign("HUUJQXENNBHLISIVKRRWITJMDBAKPMRUBFKTEGTOAGGDDCWZEAKJQUDVTYWIFEFFDBWNYHXKNWENJKCIYLUQPPTECYIZBRZMOUAXPEASUABRORQVQJWNQKZCDJYSKPSFQCFIJLSXMFNKXLUYHSROBCNYYGGCGDHZYFXBFOAHPLBLBMLAISVCETSJDVWLPWAMZXZLORUHHGYCKSMJNMVQTVWTMGRUXOT");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.81034658660021;
    tmp_msg_0.dist_min_abs = 0.9496010299801306;
    tmp_msg_0.dist_min_mean = 0.9347078397349402;
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
    msg.setTimeStamp(0.44877200674422246);
    msg.setSource(33374U);
    msg.setSourceEntity(122U);
    msg.setDestination(22241U);
    msg.setDestinationEntity(222U);
    msg.source_man.assign("FMXPLISGXONREUXUUCCXLSZBZBLGVAAJQEENKRANJGKVYDPRWGTGHVKOUAFYYKLVCQWMYYLAINSIXLJJVAZIFOYOWSGUQTOPVCRLATSADDHCINYBQDDPOOFINJDEHERQFUWTKLXGZWWCCGNHPXRTWEBSNXZRYHPXABFIDEUTZSZFVSFIHTZQPTMIPBDHNQBKHYOSJ");
    msg.dest_man.assign("CNYRYKEXUDJWLHAYJTSGITDJJVOLXJRIKBMHCZOOECKHTRNNQESUGHBXFMUGFDLUHKDPUMKXQQKQCVPXVAAMUEWOZTWWWGAGMDPEIXBOGGSHLBVOLJQDRQXYBMBEZHNHTMTKNXEOEIUPOIITYWRMZFPAKRADLTLNPPJLGWDSTMIVFCJFVVBRFKCUZXYBQTNMASBJGZHOPXICDUAIFHWFVZZRUCAYZSCLQAEESRFPYSPFYRIYKQZCSVVGWLQ");
    msg.conditions.assign("JSDJHUBQIWVUTPXRYRUZSFBSWXKUSYLSVPSQQMCYWVVNNUOIIHGSFFKTYGKMPWPC");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 56U;
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
    msg.setTimeStamp(0.5791726855032105);
    msg.setSource(17922U);
    msg.setSourceEntity(128U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(102U);
    msg.source_man.assign("LIIHFSWOEIJOLGXPFCBCSYCOXCUDVKPVQUBACOAYKHKFXHLXKURPAMNOZAPFJIPKNUENLZZZYXNNEMLCODKPLFHEWDWAAJIZMPSRXLTFTZUEQNQNQOVSETUHQMIARSRDYBHXGUBMCBFDKQTWHKJJJRTDDVRRVMEFMUJSSEGZTQWWICVTCPVBNELIXWGTGHUBTPJYXYGBINXBSZIQYVWCYJBGOAFKNSDMKJUOWDLPQGQFGV");
    msg.dest_man.assign("QKPDHWUEIKUISZGQCAELUYOIELPSNUWXINCCWGEGKBNCKCBSWGZSUFXREGQAATRFHSVOWYXQSUGPFLMGMIBIEBVKBGMNYZZWZEAONDWKUUTWOXVGXYLKOBZHKFLJAPVNYVCRPFYISLBAEIORZFJTFQYRLSJYTRFPRDPMDZNOCEVTCJOUDXJBPRHBADAJLJDVBHXMQSQUHQHLWJSKTTCRIXPDMYZNHFJVMVINMGAHFYZNTJTKROMOPVM");
    msg.conditions.assign("UHJYEEXMNGOLRRFIVHUOLCKVQVBAYROMILKSIMNHLXOYAQCCTWYVTIM");

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
    msg.setTimeStamp(0.5901183558955813);
    msg.setSource(8234U);
    msg.setSourceEntity(10U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(48U);
    msg.command = 106U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KFGGYQKWJSBNVYCXVCJWVIDSBRQZENMRZFYVMAOYYLDMHMJPXDAAQBCCKONDKYUFLABCUJCQWHHANHXCACAPYOWEFGTGROKMWUKVWMBZQETIPAUVVDJPRNEBNYKTRGFQVJVPXSJZMOHSASTFSQLOGEKXHUOEIOWZQCULHSARBETDYZZJFLVNWNBLGJREZOXHILXFIHPSPMUPLDYGPFSNIDKXKEQXILTRTMIW");
    tmp_msg_0.description.assign("AAZSOWJVXKONLRARXUVXFCYB");
    tmp_msg_0.vnamespace.assign("UFHCKGBVWACFQJMFULMFTIHAFKRIVXVHJEPPKJZEEAZHTWULATDBDCPYNZBYSCYTIKIABMHNERMPOLSKQLZPMFNBOHLIJLYNWDDBQSISNUYPGRGUGEJQZSFOAQTHNXRCROYGVXOMRNUIXCHJZNKBPUOGQAPRYJWDLOSBCVEFFNQYTMMQVUIDTSOLCZLWIGVECCZHXKYSVTHRVJOSEKWWADDBVGDUODTPLXFMXWATZPAKYSZBXUJWMKXWQX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KEYLWEXUKGXXDHPFZEQMIKVLJMNQRPSCQP");
    tmp_tmp_msg_0_0.value.assign("GKPICQXWZULWTXIJTPGXPZKRLWPBSFBHDHFQIEWWYQKHQCNZUYXYKCCPMOEOGTJRVRUTQPVZDOHREKKVMXACTNYVAUMLYBFNGOFAAGJQVNXJTCNTNSZBWSFHRODXAAPKESEQMVMJUUAZAQERBHGOYIMSOFCLCIWRESDZXJGLBRFVMHZYTBLDTMQBRLGKBMUJVVGEISFLZDJDSUHAK");
    tmp_tmp_msg_0_0.type = 182U;
    tmp_tmp_msg_0_0.access = 249U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UZSSRLFMJZNTAXJUZBDIVTOC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OUCUPPHSDGEGCIERAMLXOKQJNYVYLXWLWYKZEQWSGTVESVRVBHCHIWYMIKBDRJBRHKKEHAWAGZBCIPZAZFDKUHONSST");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8270188096561572;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4055019394081031;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8441252794554651;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 230U;
    tmp_tmp_tmp_msg_0_1_0.duration = 7818U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 10173U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 13639U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.49781389046253866;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("SVOUHKZFMK");
    tmp_tmp_msg_0_2.dest_man.assign("QFZLCUGSKLDNKINGNHDFXBQMFMOFWEUFOXXEVTOBNFKWWIVMCRWNHRSQRWTKWYEAEAKFTQXYSYACIVZZUEZVAAAPHGBGHRDMICCHPRBWNGQXOHBJEJJRMGOTVLYPMIJBJUJMQXLBLZJDKURKSDCTQFYRUABUQVNOXIMYUALKTWPYPCLATBPTSCGRUDJLYNQMOXZCFZKZJVBVSDWERH");
    tmp_tmp_msg_0_2.conditions.assign("NUANJNUSGYMWTDIKXRFMDNJPYDOZWVVASRPEVGPLNYUQALNIBRPBIKFRTOMVJJVJTFJEOGBLZTCSWOMOFLBU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.07317124041129974);
    msg.setSource(22104U);
    msg.setSourceEntity(51U);
    msg.setDestination(5653U);
    msg.setDestinationEntity(234U);
    msg.command = 159U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OEKRPUTXNHDDTUHMOIBRTKAEJSQXCIBWRSUAQLNQAMOULNQZWDYKKXGLTJEDVYZKAZTYPJHSFQHBHJCXLXWUYASIEFCKIETDCQUQYGCCLAZOEOVIENCRZKGJLBZWNSYNYAATWFK");
    tmp_msg_0.description.assign("XOHQYPTEXTLUZBVEYDKAGSVKXCDQGBBCSNYOJSUKMZDVAJJBCROLWMFIDLIHSZGCEZIGSMSMTTHWBTTNYLMQAULHPPGLJMCIFDQNHJWREULPAVXUEFTOBXNNGXXHZXEFVURFJQLCAKIACCJPABOUKYOSRJAZFIOWBYFXYPNQPZLWFVDIUMOVHSDYSWEMNDQOKUYPFDHRKICNQHKAVRVTGWGFNEREWKEZOJJGPZBIDLYHTIQPCUSRRTBRQXMWAZ");
    tmp_msg_0.vnamespace.assign("AIFSAGDHEKYDVVOMGDICXRPPPLLOXBUKJPYAFCVZLYUQZOVXUEDDWBJCBJABTIFGCZWRHEJPSWDYJUUVRJUHKQNNATXZCJZRJMGTYHJLKOVRLYNPTGNWNYAYMRCUUMFIGOPLZTVLSTFEKOSOIZQQAQDSPMKPXQWASOMTIDIQSHVIFKNQDKLPVYHBGRCSXFXEDXNCBQHLO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CBEXVQMOAPWIGXMVPFBRYINDARXHQLMMDTXOZHOOIZRDNRRVQPJFPPVTJRYCFHKAEEHJCVQPWOLBENPXCJSGCIVGEOLGGGWBLABSTJLCTEZSTFKZYQSJWZKPOXKCJMEFCRIDUTRNHKJAIHDOUMMAQUYJQMSQDSTHDEXTVSFJZUSTWSIBSMKW");
    tmp_tmp_msg_0_0.value.assign("ZBMZKQLQIHNRRTSTJFUTSETSQJQXOGIOW");
    tmp_tmp_msg_0_0.type = 158U;
    tmp_tmp_msg_0_0.access = 170U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZUQYEARMWHBYDOZTMVFSKWXDGKTAHHXMZQJKVOVJMFNDGQSDXVSXNGFLJEGTXAQEZZKNHYWYINXPICSAEOMBAOIEOTKNHFZWALDTFRVMEPGVBXTHIDUGVJPDUQRBSHBFYKGSVJMORGCHEYWVWOCLQKIPWSWUQPHAFBEBIJLNHZIQSMFKLBERXNZLZLZYGRADCOIJRFPUN");
    IMC::FollowSystem tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.system = 39690U;
    tmp_tmp_msg_0_1.duration = 59364U;
    tmp_tmp_msg_0_1.speed = 0.49211020442880227;
    tmp_tmp_msg_0_1.speed_units = 215U;
    tmp_tmp_msg_0_1.x = 0.837651502414854;
    tmp_tmp_msg_0_1.y = 0.4974436700058702;
    tmp_tmp_msg_0_1.z = 0.04600816269862573;
    tmp_tmp_msg_0_1.z_units = 129U;
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
    msg.setTimeStamp(0.8294410050022367);
    msg.setSource(57778U);
    msg.setSourceEntity(22U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(200U);
    msg.command = 183U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SQGGIIEULJTLQXFDCQQQVQLGTVTEKIOFSTLMNHFDLMFLEZXOYUVXIQANWMARWYTHTPHTEUMANZGODRSZCJKBZHRYSALXWYBJEPUJRJKFDCFRZUKRDOBFSGCNOMBSWUBWIWJGUSXAHDOOFBHTZSYGAIDPVAMGAKKOQVVJWGPBQJYPUTVNZZKNHABYYSWIBEKOPXJMRCVVFBMEEPYTSOMPDQXWFDVZEKILRLWCPNHMCIPRCEXXKYDILJRZ");
    tmp_msg_0.description.assign("IVHSZCTXSMDSFLJEBZMCOUKEHTDELPECIRPSGKBSYWZFYHDTWJPYQNVWVXXWNKZXOFHAGCXKBKXGBBURPDEXTAPZTAGSTGURAGXAWELDBWKRWHEIYMEPCGIQZMTAZFKBVNQYOQSDQRUYMEJSRLCFIAHWYGPWENRCVJJQXQNJJUJCHMKJYPKDHRIUMPCOIDRVQOZNOLHFVLWJVLLLLMUBFFATBOFSHOCTFNIQAYVOIIYKARZNTDVNXG");
    tmp_msg_0.vnamespace.assign("NPTWOZBXTFIVBULSUHHSGPWUIRJAVGSQGKFENCYANJWCYHZOZLMOSUTBNIRWPNMTRMJXNDPYDFWHKKIGSXREYUQKWYSMLYYBJSRKGCUZEXIADYNGLRUBAGCUGEXJAPMZJDVILVQLFAPJH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OFSEBJOFXQKXMUYPUHIIIGPSUZHXUWO");
    tmp_tmp_msg_0_0.value.assign("OCHOKLDRVHILBAEVIUFZRNKDVLCXCWGTTNSUBORMLMATFMFQYIUEGBIJWZQRS");
    tmp_tmp_msg_0_0.type = 223U;
    tmp_tmp_msg_0_0.access = 162U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TJRUMDRSKXGSRFEOKRQYAIKBHDNMUCIMNCWKBVLSHUPVQPWEFSLYGGJFPNEYHCBNDFEWOLXUTFKWZJAIGDAZBVEZTIAPKLQGVSSNYHTAWLBBJFHZXVEQZINSOBZJIHRUDQAHJKDPUXMBAEBHKCWCWZSCLNUIMINXFCPAMWCOTLDAOVTURZMXTIGSNTOYOTDYEGOQQSPHXDVUJPAYRCWEDBLYLXGFHFKINMVJJWMQPGXOVPOQYURV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MKGYMCDZYVNFHEHLFXMAGKZVRIEBQNEFABVSZAHACVHDTCXZRSTPMOWEPSQQDGKKFCQDDQKUBBJCQQYKYNELDKEZMKBFUPFWDIRTROLCSALGVSBMBRTPBWRJMCXJIMNIOGLHU");
    tmp_tmp_msg_0_1.dest_man.assign("BHYTTEDMPVSULOUPMQSGQXTOIHAMVKCQVBURZLMJGAOCGYIKKQHRIGAIPUIWDELCNZJCDKWCWNTXMSAFJHBSXXDZFZCPDVQOJVMOKBBAJBGFZSLPPWFFIOTSTCQBYXNYUTJOLNEDVYHVGNJIAUXS");
    tmp_tmp_msg_0_1.conditions.assign("WLERLIVRUWWEPPXCFKTHZYPGODBSJOPKHYWZIMDZLVBNTCFQXFK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.5431609689699874;
    tmp_tmp_msg_0_2.speed_units = 149U;
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
    msg.setTimeStamp(0.40956992692674843);
    msg.setSource(36313U);
    msg.setSourceEntity(96U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(127U);
    msg.state = 135U;
    msg.plan_id.assign("KBLULLQAIEBYDLDOFSOALPNRQTGVMDXCYFSAWGUIJIYCSFVNFQWMEJJCOUABIVRMPCONTGHXEINREYTUPHAVPHVDFHWZECMHUJIBVNDMWOSIWMJYLGHPOPXXYOTVZPXZLMDWBXZKRVRPXKMGGFQJJZDDKTHRBAQ");
    msg.comm_level = 206U;

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
    msg.setTimeStamp(0.80250591919998);
    msg.setSource(29613U);
    msg.setSourceEntity(104U);
    msg.setDestination(10335U);
    msg.setDestinationEntity(243U);
    msg.state = 45U;
    msg.plan_id.assign("CZXOPJQIVPVRFTJDNXCUBWQEWHLIQQLOGYORIMSRICVLBYQLFHUGEBFNDSELWSMKBYJKJLRAWKSZIYYAMQXQQYLNESFJDMYHETGTVOEEQAGGAJPDXUUIHJJMMTTGYUVO");
    msg.comm_level = 77U;

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
    msg.setTimeStamp(0.5383173967534067);
    msg.setSource(13040U);
    msg.setSourceEntity(58U);
    msg.setDestination(21827U);
    msg.setDestinationEntity(135U);
    msg.state = 251U;
    msg.plan_id.assign("KCXSCGWSRAVZHXKHTGU");
    msg.comm_level = 61U;

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
    msg.setTimeStamp(0.6738459941162183);
    msg.setSource(56598U);
    msg.setSourceEntity(28U);
    msg.setDestination(42781U);
    msg.setDestinationEntity(103U);
    msg.type = 184U;
    msg.op = 220U;
    msg.request_id = 5083U;
    msg.plan_id.assign("XAQOJPPUMUMSVNAXVHDGRJKTJYUHOZJPDSZNCIJYQCHBSBQBFBGINECTEVFZQDFUKZNMWAMUKPAKLOEUUSCGOHMRRTRSHALWNXWZT");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 209U;
    tmp_msg_0.op = 160U;
    tmp_msg_0.request_id = 30625U;
    tmp_msg_0.plan_id.assign("BEWYZZAISDEDRSTLVSQGUGBKFPKRWJMYGNFGWLPMEJLKEDOXPXYXEMYKBCH");
    tmp_msg_0.flags = 49023U;
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 164U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("GLJLQJJLFWZUEUURXZPHNVMDBZGZNIQQQAPXADAMJIELUZFWTMIEFKDNHTBNMWAPWYKOWMRKISOTUIEOWQQPLSKYCSRXVLWHKGJQGXIHCAMYACXYBSYDGZTITRZBWVEYDXUUPCHOBPUOXSTBAYGFVLDEKISDEMAEBPGGPASXZFNHHTHPRLSMYSTQPLNBWDGZRRCTXMFRCMFULUINQWEJVDOCBXHR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RUSUMUMUPNVXFIIIWHCLBHBNITJJZZCEXERPJRJOCQNZDMWLINOSCZIIXODSSNTPWFIFHJRPAZRZVPKVESHLVXGXTVQAZXSZXBJGLUAGXBWRFCDTJYEKKGNOHUYELHCFQ");

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
    msg.setTimeStamp(0.22924002346644456);
    msg.setSource(5953U);
    msg.setSourceEntity(228U);
    msg.setDestination(8208U);
    msg.setDestinationEntity(156U);
    msg.type = 53U;
    msg.op = 167U;
    msg.request_id = 62930U;
    msg.plan_id.assign("IFZQDHEDXDZHCWAUMGIHJJMWXUQBTACUFGMZYPDFLGDQOLTQFIFURLKXNMDANTXPOBTSIGMMIJSRUQHQNOHZHRNMPNMJVNQWIZWLFBTHVFH");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.7373725352325536;
    tmp_msg_0.confidence = 0.24968943127450915;
    tmp_msg_0.opmodes.assign("GEVFTLJAMNIEIBQZJUVEDZUZFPWVFOOPBRSWKNLEUJEAZPINWTOGZCOKRPFMVQOPAXNZFZSTYGXAOVMEFEYCUQIMWGLBMOVYKSZILKCHRXBSMRANJTMJXKPRTSODXBGDYEUIROOLPQDNLFURYWQELNVHLPTWATEBGNUHTTWHYZHRDP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JEKHHTEAFHGRHHCNIEHNMSGZXUDJAKLTCHIPUPWZWXVNLYDNQEPFELKZOTXWFCGIGEAVGBGJEUUWHPWIMSJYYYR");

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
    msg.setTimeStamp(0.9314621446764026);
    msg.setSource(29295U);
    msg.setSourceEntity(3U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(27U);
    msg.type = 140U;
    msg.op = 111U;
    msg.request_id = 28919U;
    msg.plan_id.assign("SFCNIJQMNTADZMHHJNOTVVDYYDTPUOLHBLMCZJJWWMQPSAPJFRYDLGHFZWUKIHJBWURLEWPJOYJKHRJRTSTPMDOQUADRBY");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.47933128209934683;
    tmp_msg_0.lon = 0.8056273725096762;
    tmp_msg_0.z = 0.19928525844820177;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.speed = 0.12482374989956468;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.custom.assign("HRNYNMJCBTRZYNOJEIUNQDABWSGWIJHEUAQMKSXQKOIIGTMVZHWGCBSWBEFUDUCEPOVYGCPPLPFXMIHXOKRLTCFAFTHAXEADIHGTTSQSNWODOLEQFYBHGJBEKLHVMUL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QZMKDBXEESZYMKJACKNHXNDTDLUWXGVBBYHUJKJSRXSRWGOCWMAVIGMYFRLWAIYESUZIZFQOHFSPRCHLUJOATXYGZTDOHJREUVGKFSIOAZUNFZQNCWPWVVODGIYGNLWSLBXKJUWTSRQDLHBOSLNNFEBPQXMPHENIPBSQRZLYEVDMAJOJTAKMLOPPBKBOJFTIZFPNE");

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
    msg.setTimeStamp(0.5727086981815034);
    msg.setSource(3599U);
    msg.setSourceEntity(124U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(242U);
    msg.plan_count = 29142U;
    msg.plan_size = 1489568659U;
    msg.change_time = 0.10190990441213976;
    msg.change_sid = 1537U;
    msg.change_sname.assign("OQBRPABHRYWMGASQNLELGEVSKUPGAJAZJZHGKCMNITBHQKJZDRKVHOKNCCMVQFEIHIYMBIZJTAAPCPTMPTQXNVTDZAINBFZLEBGOSTHIQMPJNALLCLWORXFDDNSURZODWEXIDITADGBRUOVNVGGHXWRFXHMBJCTEXVOEQTQUMVRYPOXJZHUYKJEROZMUYBLLLSOPHFFWQPZXSFSJDVMWXIALWUTYYYUKKSKUCQVGJSWCGBPEIEYUFFFD");
    const char tmp_msg_0[] = {-51, -11, -9, -59, -3, -109, -42, 81, -21, 62, -42, -115, 61, -25, 50, 51, -89, 95, 3, 8, 31, 90, -127, 48, 32, -11, 42, 43, 115, 74, -125, -112, 105, -44, -84, -28, 12, -111, 81, 88, 28, 51, 104, -8, 41, 61, -63, 82, 84, 12, 37, 14, -67, -21, -19, -20, 86, -29, -107, 106, 38, -46, -76, -10, 35, -104, 13, -22, -63, 105, 10, 52, 41, -92, 39, -104, -88, -97, 113, -67, 82, -34, 121, 57, 78, -109, 16, -30, 28, -127, -58, -13, 44, -80, 19, -21, -5, 13, 110, 30, -95, -120, -27, -123, -3, -5, 11, -63, -10, -37, -27, 69, -103, -51, 50, -86, 81, 106, 38, -118, 66, -14, 91, -124, 122, -14, 107, 16, -10, -113, 33, 26, -55, 91, 99, -123, -127, 110, -117, -49, -2, -27, -4, -9, 12, 25, 29, 26, 126, 93, -24, -27, -45, -128, -49, 78, 52, 45, -123, -24, -7, 87, 117, -105, -61, 108, 71, 3, -125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TMOAALOKKUFAQZZITWPHVKUWEWPHPMDNAODRRTSVVZCRLGBERPZCBBXECFVZPFXUYJEHWEQCD");
    tmp_msg_1.plan_size = 65524U;
    tmp_msg_1.change_time = 0.6673453934623634;
    tmp_msg_1.change_sid = 12720U;
    tmp_msg_1.change_sname.assign("YAPWWMLTOXPCPHQLZEVZAMXVNYEWCRGUPLGFXCJONZNQHHXPUJRTTSDBAYWRUUZAFWGAIWVKVVJG");
    const char tmp_tmp_msg_1_0[] = {-99, -81, -80, -46, -41, 51, -9, -62, -38, -14, -57, 41, 46, -114, 69, 16, 1, -36, 61, 113, 32, 97, 29, 13, 21, 64, 63, 27, 12, -14, -21, -34, -99, 26, 13, 26, -77, -35, 79, -58, -101, -71, 32, 54, -110, -24, -82, -62, 52, -122, 7, -11, -65, -50, -116, 100, -50, -74, 86, 85, -33, 113, 29, -4, 15, 20, 32, -34, 40, -42, -125, -34, -83, -65, 43, 28, 59, 20, -84, -58, -127, 30, 64, 8, -11, 63, -51, 13, -52, -82, -82, 102, -101, 77, 104, 101, 89, -104, 5, -98, -85, -49, -115, 22, -100, -119, 53, -117, -24, 66, -52, -88, 92, -110, -87, 90, 69, 115, -23, -60, 37, -63, 108, -47, 60, -36, -58};
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
    msg.setTimeStamp(0.21357473644072822);
    msg.setSource(60345U);
    msg.setSourceEntity(122U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(62U);
    msg.plan_count = 16854U;
    msg.plan_size = 3833040267U;
    msg.change_time = 0.739845995751735;
    msg.change_sid = 18785U;
    msg.change_sname.assign("NJBPQEIJONNDYPPXSBWMYGNKNGHSJVFHUZGWQCTFODMLKTSBYLHCFVBJKAMINIZDVLWJMQACLJXDSJEHGXCVKFBPZRACFZPRUPOKGKGTRXOBIKBKNZKOUDPMMZAGRTAAFSFQPJTMTQFEHXDEMPTNWKYLIGOLBWLEB");
    const char tmp_msg_0[] = {-1, 84, 3, 29, -27, 103, 103, -121, 126, -72, 72, -112, 5, -80, 99, -77, -55, 39, -5, 56, -107, -79, 117, 81, -92, 37, 2, -19, 44, 41, 24, -128, -100, -74, 8, -102, -71};
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
    msg.setTimeStamp(0.658639850165695);
    msg.setSource(60567U);
    msg.setSourceEntity(215U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(25U);
    msg.plan_count = 45552U;
    msg.plan_size = 3409324028U;
    msg.change_time = 0.0017501339833041474;
    msg.change_sid = 45059U;
    msg.change_sname.assign("XOJXRORSLUKQOIFTIGGTGNQBQJABRCFMREFABCRQCXWDTRYLNCHXMJODBSZLKIOJARTEYZXMFJEQWDOJLBCUAICCVGVNKPZSFQAHSZEUYPZVOLHWIEUVPXDVSUHKGRGSZWLZNTEBWNYRDVWFKRPYDNUXDEGMYPOCJHVJNJPIMXASDWBFCUPQFODQIPBOMGYCAAKNVLTXMYWAZLHXFBHUJMQQGMZBTNSPLWDYH");
    const char tmp_msg_0[] = {43, 0, -86, -122, 105, 101, -11, 110, -11, 51, -100, 31, 67, -44, 97, 61, 55, 66, -16, 12, 73, 1, -22, 109, 116, 119, -84, 33, -26, -63, -91, 35, 94, 30, 44, 10, 89, 80, -60, 63, -5, 30, -2, -61, 3, -46, -86, -112, 46, 92, 39, -19, -119, 92, 12, 4, 59, -59, -90, 19, 74, -101, -13, 93, 58, 31, -5, 0, -65, -13, -29, -99, 41, -45, 70, -48, 66, -110, -105, -54, 105, 97, 90, -12, -56, -71, 68, 2, 10, 9, 100, -73, -126, 35, -126, 113, -25, -54, 92, -110, 73, 66, -125, -59, -7, 55, -52, 11, -77, -110, 23, -52, 88, 99, 59, -58, -28, 5, -40, 25, -7, -48, -40, -22, -125, -88, 85, 80, -76, -74, 88, -1, 102, -126, 85, -30, -116, -62, 111, -4, -21, 124, -92, 40};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ATFXVBSBPKVTSRWLIDBDEURTEPUVWAILNXXFHQHMKCGTBGZSNOUEESZSEJAYYFQGNPAZTYHPIWZEWJRMDFCNFFOMNPMQBMYMLLTCFKCDRUNYHSGXOMGJAPZQCUWGKNGILGALXDQXZOPHVXIZUSUDIXJRAAASOVILYHTPFPV");
    tmp_msg_1.plan_size = 12916U;
    tmp_msg_1.change_time = 0.3541161797658028;
    tmp_msg_1.change_sid = 20293U;
    tmp_msg_1.change_sname.assign("BWSFLISDFVDYOOAUBVIXMCALNFCERROKOPILECMCWXCFSXYVUNHHFLJTAJPICYJUNZKAMZUDTGTHIYPUVEGHCRWOZMITLJMKKBZHEGKCNDYHFGANRBXNQDBRYLGEXENEYGKOSQDPBDAQTZHASYFPVGGWZQSOQSPAXILEMXSTRGZJO");
    const char tmp_tmp_msg_1_0[] = {-64, 60, -113, 55, -35, 35, 20, -32, -111, -65, 57, 65, -7, -1, 85, 69, 9, -9, -101, -85, -12, 8, -38, 47, -12, -21, -122, 51, 110, 19, -97, -26, -110, 69, -54, 64, 39, 29, -77, 67, -50, 101, -27, -124, -9, -3, 43, 15, 85, -20, -52, 26, 102, 123, -77, 30, -32, 72, -80, -11, -63, 13};
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
    msg.setTimeStamp(0.09884063629100392);
    msg.setSource(44957U);
    msg.setSourceEntity(207U);
    msg.setDestination(30547U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("NVIICUKHNSGTGKLEAIEPPYBXHOQ");
    msg.plan_size = 24293U;
    msg.change_time = 0.46204557938333257;
    msg.change_sid = 45883U;
    msg.change_sname.assign("ARPGWSBTQRFARHJKCLLBOHNSUQEDTODINFXDUEDTMBZFCZNECMTYUDHBVJOKPPWRSIUX");
    const char tmp_msg_0[] = {-75, 5, -51, -123, 13, -26, 101, -11, 102, -70, -56, 43, 119, -24, -69, -66, -2, -81, -76, -119, -37, -111, -37, 32, -67, -61, -51, 39, -97, -84, -62, 92, -32, 72, 44, -19, -43, 105, -97, -101, 124, -69, 48, -57, 14, 51, 13, 106, -109, 99, 33, -45, 17, -21, -111, -57, -73, 66, 94, -117, 104};
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
    msg.setTimeStamp(0.28654257516168125);
    msg.setSource(46130U);
    msg.setSourceEntity(11U);
    msg.setDestination(60335U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("GSUACLECHOLCOYXOIJYWTZIXJIICHMWUCRMFNGNBUJQNAABEVUPEPBLLOPCKQSOQSXGHQZCBFMEEHTOQQAKTCIRKDNOFSRFGYUKJGEKWIBGZHZKDLCAMLSVZTKBUDXHBSNVDKWMZHHMDJTVCYPINPRGYEARLQALMJFAWPEPGTOZSVYEYZKDNBVQTADXGNSSULZKRYLDNYVARJWUTHHFQGPVWXZPWFMFISWPJIUIOBORF");
    msg.plan_size = 57988U;
    msg.change_time = 0.9495764145362032;
    msg.change_sid = 64805U;
    msg.change_sname.assign("ZGIPWRFVUXMDKREIGYHQOQGEIABZCUWHAPWPZDJYHSJDFRMKJKKISFIQGHLNBHXZSBXTOAYBJSLDCTTVQYKNNSJUROGPLHKFJXPYPXMQBTLEWBHDWAVPLZTLEXTWUNMIARDCIIFXCDFKWNTIOSWRSBVBCVKLCQAWBJEAPXCWMKZHVHVNLMNTYNRMZFFXYUQOMRVUUGQIPMZJSXLENGABDGSDJFCRKOJYOOQCE");
    const char tmp_msg_0[] = {-60, -2, -34, 38, -102, -86, -68, 46, -106, 1, -125, -42, 97, 31, -19, 80, -58, -113, -23, -19, 101, 11, 45, 18, 32, 16, -26, 34, -13, 89, -122, -68, -127, 91, -30, -10, -65, -7, -31, 80, 42, 59, -74, -99, 23, -93, 61, -34, -72, -41, -92, 60, 107, -96, 50, -83, -67, 37, 126, 76, 9, 65, -47, 102, -16, 33, 70, -45, -37, -128, -72, 72, -93, -30, 64, -112, 69, -61, -27, 40, -90, -13, 9, -104, -117, 76, -58, -91, -60, 20, -48, 71, 91, -83, -49, 37, -42, -75, -1, -62, -55, -6, 57, -10, 57, 87, -84, -54, -70, -81, 15, -30, 90, 47, -42, 10, 94, 67, -104, -81, 115, 126, 23, -54, 114, -19, 117, -61, -80, 67, 8, 123, -21, 93, -114, 79, -106, 47, -16, -19, -13, 80, 83, 91, 90, 122, -80, -101, -102, 118, -1, 75, 31, -39, -99, -82, -32, 106, 30, -94, 53, 78, -107, -25, 125, -47, 111, 82, -75, -112, -74, 120, 6, -3, -76, -118, 67, 28, -15, -85, -123, 86, 121, -122, -55, -65, -84, -25, 118, 121, 20, 122, 39, 26, -80, -56, 66, 47, -21, 75, 62, 56, -91, -106, -51, 54, -85, -64, -123, 104, 55, -13};
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
    msg.setTimeStamp(0.13620636555023358);
    msg.setSource(31777U);
    msg.setSourceEntity(181U);
    msg.setDestination(59760U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("EMYAAOJQRAWNWZTSKTQHMBGXXHWDQJIZQGDYMBPIEBTKTEYFHCWGLGUJXEVXYRHZREYPOOJJFGQWOVAKMLBHYCJFFGKPBKXSDCWDASHUOPSHNMRCURCLFPONJGPRZQXNNZQISIQIDZODWRJEYTBUZKXEULXDNETJLVKVFKXITALUMRVYQRUOFLISELVVNPCSSXEBAFVDBNGY");
    msg.plan_size = 33674U;
    msg.change_time = 0.4486361681778229;
    msg.change_sid = 32762U;
    msg.change_sname.assign("ELHIORNWZQHJQKCPQKIHXTJWYNBJOTFOKIAPMSUVGKURTPEUVLBEFPGUCQXLVEXISDYWMQDIBWRAEHCNPCSVKWSEFWLEXLJIWXDHDIJVCJUUNZFIUZPBNBVWZMAWDOKHMNBBGLLFSYCGIJKRTY");
    const char tmp_msg_0[] = {110, 26, -128, 120, 125, -82, -92, -93, 116, 46, -107, -50, 53, 0, 90, 57, 17, 12, -15, 100, -114, 107, -72, 92, 39, -66, -84, -123, 106, -1, -126, 74, 39, 75, 33, 27, 106, 95, 35, -31, 20, 82, -111, 94, -50, 106, -127, -69, -40, -58, -91, -52, -18, -13, 112, -43, -108, -21, -52, 10, 84, -81, 55, -65, -126, 58, 122, -14, 114, 72, -72, 118, 33, 89, -83, 94, 74, 57, -120, 98, -71, 56, -49, 115, 126, 86, -64, -47, 65, 82, -107, 121, -91, -100, 106, 83, -44, 83, 124, 47, 107, -20, 82, 110, 6, -102, 20, 67, -33, 79, -8, 79, 5, -73, 37, 63, -42, 52, 52, -99, -89, 123, -95, -40, 104, 104, -43, -47, -32, -33, 79, 67, -15, 45, 62, -45, 19, -125, 109, 99, 65, -45, -28, -108, 60, -94, 68, 88, 38, 118, -11, 47, 39, 37, 17, -98, 63, 71, -74, -104, -39, -99, -92, -106, -26, 14, -45, -121, -27, 12, 21, -25, 88, 86, 12, -80, 96, -6, 55, 20, 71, 21, 13, 106, 29, -77, 70, 62, -17, -99, 64, -88, 80, 100, 78, 103, -102, -46, 22, 102, 80, -36, -119, -50, 79, 23, 81, -81, 106, -112, -61, -71, 79, -28, 93, -70, 83, 108, 44, 111, -41, 88, 122, -55, 82, 35, -64, 103, 110, -45, 104, -125, 106, 49, 89, 125, -86, 99, 119, 45, -123, 58};
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
    msg.setTimeStamp(0.6941014715336971);
    msg.setSource(62382U);
    msg.setSourceEntity(47U);
    msg.setDestination(59262U);
    msg.setDestinationEntity(147U);
    msg.type = 204U;
    msg.op = 182U;
    msg.request_id = 54583U;
    msg.plan_id.assign("RFBTZXBSRGIJJQMYATJYCKYCWEFLXFBSONBVBLFBOGYPOGIEVIBKGPEZIIDLEHEMDPPKDCYSMOZXNPYKRKXHQIVFONEBKRJVTTKCIMGDU");
    msg.flags = 34876U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.request_id = 60836U;
    tmp_msg_0.command = 40U;
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 27490U;
    tmp_tmp_msg_0_0.lat = 0.80150295401005;
    tmp_tmp_msg_0_0.lon = 0.21078070870471555;
    tmp_tmp_msg_0_0.z = 0.17371574750263596;
    tmp_tmp_msg_0_0.z_units = 126U;
    tmp_tmp_msg_0_0.speed = 0.7623632690484589;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_tmp_msg_0_0.roll = 0.1498876826040515;
    tmp_tmp_msg_0_0.pitch = 0.8100407835786868;
    tmp_tmp_msg_0_0.yaw = 0.6305785624220248;
    tmp_tmp_msg_0_0.custom.assign("LYQILKQXEHIJWEJMABLCDSIOOUKMIYDWGHQNVZOQXOFSUBBGRYSQMIARIUJWAENCWAWGPJHYZFDONEPEFCSUEWVZRFZXDXUXLPIARTSRNMZTTUKZZTPGRVAZQLOQDWMTFFWBVYBGLFGXWHTFSEEUIITOCGYCPNSXYHLVSKG");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 37306U;
    tmp_msg_0.info.assign("GVSXXAYBNTJQBHWKR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BLPYGZLUPLPVYWHAILOEJAFYBXNSJNAFUSSLZVYCNZLMNIYTZMYFGBDRXXPRSGJCCGDAMGTIEPQKWBNXYZPGVEEVVUGVDKKBURWJQDSVPOFSCNBDXZZJKBERWLTUWGFDYLFXSRUHHQRDNTOMXNLHMUEWYIHBIIMACFKFXNDRJCXKOEQEZSOIJDALTKAXAWJMZPEOTYGEJQDCKTMTQTWQCPVCATGBUHWQIUARQOMPS");

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
    msg.setTimeStamp(0.2583219022739367);
    msg.setSource(51803U);
    msg.setSourceEntity(216U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(200U);
    msg.type = 234U;
    msg.op = 56U;
    msg.request_id = 24128U;
    msg.plan_id.assign("VCILXMIFUPHRPSYKYAEGOAOIVWESRICAYNYHGWYLEHPTVBGZSMMILHREFJDBOBCIDXOWKUKECGKKNULIAJDOCKUAHTEVJUSBFMVALMJDAWHNRTTFRYBKXRENQHUNSOUPTJGZPISELHQFMQDOTXKZWQLVTPZDNLYOCWUVGGZBTESEAYWQVLZACFDPBXJPHLRZQOZRYXIXMCJKGJQGW");
    msg.flags = 50505U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 142U;
    tmp_msg_0.op = 225U;
    tmp_msg_0.request_id = 42066U;
    tmp_msg_0.plan_id.assign("OLATWISEAJRRGBUEBCPCDDTPEYWHOKVHAIREALVTNPWFIKFSHRSDGDPRWJMXNHOMUIEQKJYCLFBZLULQWENYARUZMSICSHQNZUYMBDKXBTBNRAYPVAQXOZHVFVZFXKCYOJRGJNFLHIQWETUDWGJCHEMTVKRCHSBYIMDGUGFQXFITWMPAWFJQEWNKXYYAOJJZKZSTQNGZPGKTXQMMXKPCBINLDMYUZTXLPUIROVLEQCONLVGOUODD");
    IMC::IridiumMsgRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("EFVZZEBLVPXLYNQQJJNDHQVBPLWUBPLCBTTOORISYOWZYIGYAK");
    tmp_tmp_msg_0_0.htime = 0.9385198061489451;
    tmp_tmp_msg_0_0.lat = 0.02456398443736718;
    tmp_tmp_msg_0_0.lon = 0.47263038308053307;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-44, -62, 60, -26, -33, 87, -25, -2, -122, -28, -110, -96, 43, 90, -8, 39, -4, 42, 99, -13, -92, 126, -5, 101, 121, -1, -64, 90, -97, -33, -58, 44, 119, 61, 8, 84, 8, 96, 28, 103, -12, 119, 84, 34, -112, -32, -92, -78, -66, 119, -32, 45, 80, 70, 32, -57, 16, 9, 60, -34, -106, -23, -109, 68, 11, -38, 83, -111, -128, -29, -91, 70, -12, -13, 19, 86, 21, -81, 7, -110, 55, 118, -70, 75, 94, 18, -10, -12, 90, -54, -29, -24, 22, -72, 19, 40, 44, -78, -20, 8, -97, 90, 78, 56, 74, -45, -96, 90, 114, 91, 18, 91, 86, 105, -114, -107, -77, 32, -54, -4, -122, 88, 81, -101, 73, 44, -17, -53, -12, 83, -94, -55, 121, -59, 1, -3, 73, -41, 101, -54, -30, 44, -102, -95, 94, -104, 80, 115, -10, -5, 104, 9, -120, 96, -28, -6, -86, -83, 75, 23, -12, 37, -38, -99, -119, 10, -121, -109, 123, 98, 126, -32, -117, -95, 68, 61, 75, -78, -104, -97, 86, 76, -118, -36, 69, -9, 107, 31, -84, 24, -15, 5, -120, -10, 6, 33, 105, -67, -47, -103, 19, -105, 60, -103, -46, 62, -64, 20, -63};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("EARRUWBPRWVJGWRDICXOVSQIXIOMGHPOYATEMZZPMTJBSSSPCLPJIXWGJFCENRHYLISASPNPWSWONNOCUKBADUVDHVHHNMAEZDHZZBJNTXVLNDGMGHDIJUALAXYGSKAUJPURRCKJQGKYBBDTKXNGHFXPDZLQKLQQCIZLAUWJBSUIDGCJWXFOHVETTWYIENYFCQRKBBQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOOIFLCBSPKKPFVZIRASXQUSCQLLJMBDJBUJMOUKOFAFKMFJVGTJOMEKAVQIBGZDNPWGICIWZNHGEJRIGHXYNVPCYKBSUZPWBZDDTDHACWAVPPCVIEVJZQPYEXQJQNTEXGYMBMRMMYENDCTNAAAYWTTRQXTTNAXHUEYKSIAZGFOCEIB");

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
    msg.setTimeStamp(0.11687572584391714);
    msg.setSource(28570U);
    msg.setSourceEntity(101U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(142U);
    msg.type = 163U;
    msg.op = 34U;
    msg.request_id = 15313U;
    msg.plan_id.assign("UGMEBQAXSUKIFURGMAIUJMOLRCNTVEPGTLYQQPFJTTGKDAEFPRXRVGKFIFJUJEMZCQNOVVYMASGOHMEYJLONOAQYIOV");
    msg.flags = 27585U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 81U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BBYPUDVAGZMEOGTAKZ");

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
    msg.setTimeStamp(0.6984463102574613);
    msg.setSource(12914U);
    msg.setSourceEntity(74U);
    msg.setDestination(50093U);
    msg.setDestinationEntity(7U);
    msg.state = 73U;
    msg.plan_id.assign("YHKGROSLITCOKKOBXDUJLVOWTFKPPXNGULMFJVQQAONZEWDHSOCOYAUULQZYOP");
    msg.plan_eta = -976718822;
    msg.plan_progress = 0.9074496041240386;
    msg.man_id.assign("SXKCYENZJDUQKEDCEIGQSWKLPDNGAOYMFJZXTQECGFJANTIFRDDVBYKRDLNTZOCPICWHVPQNQJRFRIFFUJVT");
    msg.man_type = 7556U;
    msg.man_eta = 1757228423;
    msg.last_outcome = 50U;

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
    msg.setTimeStamp(0.27207662769264696);
    msg.setSource(60904U);
    msg.setSourceEntity(140U);
    msg.setDestination(41393U);
    msg.setDestinationEntity(55U);
    msg.state = 136U;
    msg.plan_id.assign("WNUZSVIPJGTLVXEDPIEIUFHGSDIKOQPETEYFNURVZUSWCGNENHHWYYYYYYKDGPRFFCKWBMVSPGLUDELRFZGXTMQFJBMQNBBTOSWPKNNGTBKPVAUZUAOVUTJMSOLKFYLEQJSCICJZIWXXQIQAAZNDSASKIDZLXNYTZTQRXGPLMOATFRCWHCEAJUHRRGCCMYLGNCOBMFHXZPIKLVOBDWKJJDXSBKWJWBXQORTOHLQEVVOPQHRIC");
    msg.plan_eta = -915072753;
    msg.plan_progress = 0.5907285780184123;
    msg.man_id.assign("WKEQIELIZKIGHYQUGLYJFQTTNLTYNMFUTJINWQNLSJRNLCMPMKDVRQDRKACZLFVSZMUFHWYWBCVQBKGHUXDQCPKYSUAVWDWHAKFPFQAJOROFRAAAOKFPOEVRMCBLEJGFROONNETXSUPJZZXPOBZYGHIVVVSYCVHUZFOSBEMIPRIWMUZMCHHBNWZJJXDYSDITAHMTBJG");
    msg.man_type = 56509U;
    msg.man_eta = 912566315;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.9286449005585609);
    msg.setSource(11370U);
    msg.setSourceEntity(232U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(161U);
    msg.state = 230U;
    msg.plan_id.assign("FFCCYFYJXRTSZVMFQDBSP");
    msg.plan_eta = -1509661340;
    msg.plan_progress = 0.687180171710504;
    msg.man_id.assign("BLDCUXRRYAGXYYTUAGGHMVDTPFQYDZZJQZUOFCLKWN");
    msg.man_type = 51500U;
    msg.man_eta = 76794783;
    msg.last_outcome = 202U;

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
    msg.setTimeStamp(0.06788120460871294);
    msg.setSource(54166U);
    msg.setSourceEntity(15U);
    msg.setDestination(50990U);
    msg.setDestinationEntity(248U);
    msg.name.assign("XYHABGMTOMZSBFUNNDIXABEEAICNDJYKSYAXDLBVC");
    msg.value.assign("LMLSZQVWDOIJSGFNZMZZXCBMEHLJMRFRRINFNJYDWWNDCASTOIKKRZLLKPQXDMKJCTWWQVQOOXPIRQPYMPJTAGQLRHZIHTZADQGUDXPCTWPMAYKHOJBYJWEUDXAJHOIFPSRNLEAEXLTVJSERHVMKAYGTSPAOEVUICBCBBNWICRJEBKLSUCAQVNGKXPOUVQGDNIZCSEMDUPTWSFOGIFXRKFX");
    msg.type = 19U;
    msg.access = 230U;

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
    msg.setTimeStamp(0.5237441300626395);
    msg.setSource(965U);
    msg.setSourceEntity(21U);
    msg.setDestination(18386U);
    msg.setDestinationEntity(224U);
    msg.name.assign("WWBWUXTFWHEUVIREVRLZVKSCMWXEZWKSFRDVQUGZTPSTRKILNJSOWNAADGFBKNLRJMIJRKFGSLELUKYCVTQZBGYQEEYPQN");
    msg.value.assign("FOKYDLUBZOUWWWXTJFZYHTRZZXGQGONXNTPOUFKZVGPINDJMSQQWQVSDLCLPYYEVHSXMCLPFIVJYQTLKZXCWRMPAEBJZCHPAVCKJBWLIFSXNMTOAYAFAFISQT");
    msg.type = 61U;
    msg.access = 184U;

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
    msg.setTimeStamp(0.893149264888628);
    msg.setSource(51511U);
    msg.setSourceEntity(62U);
    msg.setDestination(63339U);
    msg.setDestinationEntity(82U);
    msg.name.assign("EMMCNPPQLJSAXCEBYAWGPFFVHFLDRMNOOPHRJLASSGYXMCPLGWKESDIYSCCTSROXEJQKVPRINVIDTQIYOCWIZIBZWNHCBRFEXUEBLHMUBLXALQBZZHQSZWOIQK");
    msg.value.assign("NZVYKQTCLXNATSLKGJBXEKPOARGROBJMGVFYDRPHIGSTLUKBBEYHUOFXDTTLHTUCVGLCSPFVZMVRCZBFVEZJFPKWPDJIWHCNUFKASQQJDIQCRUQKMEQVRZZZAFAFDHVSXPDSBWAMDAZELCPUWKXHACIYKYBICDDHRYOWEPNKWBGWNLJNVTUNOTJMQQRPSEORYWSUXYTESZMYIIHMBOBNRFIMDGGEOWNJATYPLWUJAGNMOXXQOFHX");
    msg.type = 235U;
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
    msg.setTimeStamp(0.804186707352278);
    msg.setSource(42834U);
    msg.setSourceEntity(178U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(42U);
    msg.cmd = 215U;
    msg.op = 197U;
    msg.plan_id.assign("ARDKKQABWBVMTWCLIMLMKOOTRVPHWTVSYXVNOMZZEKSXJEPTHCHZLZWLOVGEIFXEJVVCGZCUAWPZVLLURPSDBSRPMFNFSNZBIHNDQDQJSCLHEFLRQYGIMMYTRHPYAXFIGXHIPJXKAXJCRVEYOEUBBCCQCJOIIYENUKDBPBJDHDFELBJRFGQAVU");
    msg.params.assign("WHVKOMVDGRWIMBQKKUSCZLFAJEDXPXUHLHQRGYVCAYAGEPWYZPYTTTYSMMRQQKRNGSHOHDVXQIPMSBANAXGNYKSQJDPAALXZWDOIQEVZLRFDPJZGOTWACMUTYKLGUNZNJBSSBOTNJCFUEMHFFOABCRNQRKHBXLXEUUVBLJFVBGNWSKOCMINJECSLNVTVIIQZTUGXEZJLDRGXPULMCVBWFIPMKDHZYFIKXPDOJIHCRFZEAD");

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
    msg.setTimeStamp(0.6788633287028165);
    msg.setSource(31910U);
    msg.setSourceEntity(55U);
    msg.setDestination(39804U);
    msg.setDestinationEntity(208U);
    msg.cmd = 210U;
    msg.op = 168U;
    msg.plan_id.assign("RRLYUAYKVXSIWPKGEBLEDZTWITIDMIHHTLFFYVKPRXXXTGJDYFGFULHNRDFGPPTCAEZNUOWGNKJVQPAGBSRVEAHUZQVUJGGBDFMHNKWRCCAWZASZEBFQRBOOYLKODMQYOQYDNQYVQKREWJMAOSBNDAQKTXQSIROXNQEZKHIUVANUNYUZTCIPLWUEICJDJSTPISMWLMKTCOCCXNFP");
    msg.params.assign("IKOZTVTEEIMFCYZGJVJCJQGJGGPLDOROJMCFXDDQLQCKLNXMUWSBIRAGMYVIXHHEZFSPZWFKYSKNZPGGBYNKIPBGYLOHIXAWSBUJVSHGSFQJCVTRDVND");

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
    msg.setTimeStamp(0.2183755158149131);
    msg.setSource(39792U);
    msg.setSourceEntity(211U);
    msg.setDestination(37329U);
    msg.setDestinationEntity(87U);
    msg.cmd = 20U;
    msg.op = 20U;
    msg.plan_id.assign("OBWVTXEZBTRSPSEICLIXHQCCPPXQGGUEMXYGXXJIMYWPYKQZDQOFFADZVLARUQFONUQKHCMUILRVDVSBGEKDWDMEGUWAGHATAATTRKRMLJBJEVMCHLCZRBHN");
    msg.params.assign("JYVKVWYYCIMFIXTBUGQCZPCHXIXGLXWSRASOLOOWNBXQOGYSHRBSRILVEDADGMQKXBCQLVWZLBUORHFRDTBFJSBVZYZWCRZQXNTMFKUXQMEPGFUNKMKMETDIHZBCAAQJXTDDINEWWUJUJDJMJTGAFVAADHUBUGAGFPNQIOLYYKIUAGFHGVCSPENKLPHSPFNSRJKPBVEO");

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
    msg.setTimeStamp(0.49034877049008174);
    msg.setSource(62532U);
    msg.setSourceEntity(92U);
    msg.setDestination(56449U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("KOKXQELCUQBYWLGEBCYIGSDGMAYHUSUFPSJLZ");
    msg.op = 246U;
    msg.lat = 0.7023785559058877;
    msg.lon = 0.1870307641072837;
    msg.height = 0.08849683517353357;
    msg.x = 0.15568664854076586;
    msg.y = 0.19760461897216408;
    msg.z = 0.9652065870081596;
    msg.phi = 0.8753442378512467;
    msg.theta = 0.4241423095263419;
    msg.psi = 0.8689206202951549;
    msg.vx = 0.23315979546582166;
    msg.vy = 0.7040366801919227;
    msg.vz = 0.864990703907433;
    msg.p = 0.10017217090899233;
    msg.q = 0.7426057603184107;
    msg.r = 0.7191948721447252;
    msg.svx = 0.1723809103501519;
    msg.svy = 0.6481240947772012;
    msg.svz = 0.8380127618564281;

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
    msg.setTimeStamp(0.88054971464042);
    msg.setSource(41129U);
    msg.setSourceEntity(152U);
    msg.setDestination(53599U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("NNQSKVEDFIKYKORWIOXXIZYYGOPWWFHKAFKMTCRNBFHXDBGVIEEUWMATAOJYUXGGUWZMYTJQMITPROPAJEQVEHYLEHYRPLSFNBLZBBPVDUNBIIMTVFRXDFLURLYIQQVUBZAGUNOFCNJDJPWRJIXQQCZEOIHZXGHKBVQLOCUHSQRAYRSPXAGMDUGTSHJMPNAHODKDFCTTDGNSSTDJLHECMCMQVLANCXRCL");
    msg.op = 145U;
    msg.lat = 0.30667455067070537;
    msg.lon = 0.7674771003176281;
    msg.height = 0.1964513760279446;
    msg.x = 0.43778452549013014;
    msg.y = 0.9117482505667853;
    msg.z = 0.7393137900240835;
    msg.phi = 0.8825026586946534;
    msg.theta = 0.5214956598727066;
    msg.psi = 0.27375309322775143;
    msg.vx = 0.2871667714259315;
    msg.vy = 0.9947904459757638;
    msg.vz = 0.8677094179420799;
    msg.p = 0.4479755408742112;
    msg.q = 0.905267275196461;
    msg.r = 0.40077115112327133;
    msg.svx = 0.4858579285378193;
    msg.svy = 0.08356272196546422;
    msg.svz = 0.1700434640704459;

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
    msg.setTimeStamp(0.4661155740558217);
    msg.setSource(61442U);
    msg.setSourceEntity(90U);
    msg.setDestination(5849U);
    msg.setDestinationEntity(141U);
    msg.group_name.assign("RRQKOFPCRNCYIZTEMYZYRVVHDLFMCAANLJADVFUEJBDEFDXONMYCZPGZJKXZTUJRAFKOEGWJGQWOWLKESVVIADBRHFKJLQEEIIUHSFASPTPCXYSWOYQGTZQRIGOQMETJJCSWWHNKPGNBMQHP");
    msg.op = 92U;
    msg.lat = 0.8104241424245754;
    msg.lon = 0.16298933376423963;
    msg.height = 0.8612104593521674;
    msg.x = 0.4258801423054168;
    msg.y = 0.8816078153442499;
    msg.z = 0.2864000814112134;
    msg.phi = 0.7610833244993357;
    msg.theta = 0.49617206428853944;
    msg.psi = 0.00022333297745824598;
    msg.vx = 0.8788127115818469;
    msg.vy = 0.9777836344631544;
    msg.vz = 0.47304474639279304;
    msg.p = 0.10262915336128564;
    msg.q = 0.6796147976424455;
    msg.r = 0.969698869938169;
    msg.svx = 0.215216849254107;
    msg.svy = 0.09245428820789936;
    msg.svz = 0.6555221760278394;

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
    msg.setTimeStamp(0.7662799291295561);
    msg.setSource(32111U);
    msg.setSourceEntity(207U);
    msg.setDestination(2180U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("NVHDXCZCPFDOTDISGDINEADPOWMQYLMHCHRMIQWJMICPD");
    msg.type = 100U;
    msg.properties = 224U;
    msg.durations.assign("KGRKFCMPVZTSLHHYSRUCXKDZNHZHGVXBXMWCBKCWSJUWNTPSROWQONOITQAPOMKJQMDAXLYGBBYCOILISOZCNEQUJDJFENDSHVSMFGVLLHWOAVRYHQXETWVVXDPJFVEHRINMXWPAADLRYIELOWEXAKJZWBRDFABROTGMEBRNSEYHPTSJMVYZPJULZWGQGEYKFQFFG");
    msg.distances.assign("GDOBSRDCNBTZSPNPCWXUMEVMDQMLFZHUCPLKHAKJIWZWFTAGXALXYHOMZQCGIUGVZJSIVINRKERKOEKYWJSEZDBYAPOYPCXMLVPYTVUPYNISRJQCJXFHQEWFTIEXJOEISLTFHGEHAFMERDQLRAFLJOGZBDRTRKDUOMZCYDBDIAWXBQLUEPHUCQWBUKGV");
    msg.actions.assign("QSVNOEDMFJRLFILTCPQGDUKMMAJUWGWTPBVYKTYHTYXYLZILLSXGDNMHXJFMUZQIVNCTIDJNHSMOHLNYSPTAGOUEIWKUSZXIAGPWXNGZULCNHISBHBWORVJSZEOACB");
    msg.fuel.assign("TDRLNOUZZLGWNLEBPCIR");

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
    msg.setTimeStamp(0.39670360950797035);
    msg.setSource(43861U);
    msg.setSourceEntity(230U);
    msg.setDestination(21501U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("RLDKTGGIDFTVCQGKCHFONRUABWIXTEOWQFTLVOWHBMVIGYEEJQMVLIYXUDYGRQDIAARCSPGLOONEQPXKKMGUDNUVWYBWSUTNMMBPHAJUQRHJHYNBXEDSEAFBGUVIJVLSUZSQPAOEEFJLCXBAZYTXBCENBSYDGRJLNFGNJQFSRONZPHLDCTWPFTCXSUPPSBZXKTMAXQIJRFVHODRWMYMZVKINHSUDZMLIWHZZKXIEYYFOAZR");
    msg.type = 150U;
    msg.properties = 160U;
    msg.durations.assign("VCTWGLOZFMEATERBRGYRNNSFNT");
    msg.distances.assign("UZGSDJWFBJEZTLEWCILCKGZHMNFIXVEZHVAJHYIWWRYTFCVGSTVDXU");
    msg.actions.assign("ORIPNMKIBXXLHXZANUHAHEQOHKKEIUKROGCYJDTIOICFJBXSGXAUDNIUVESMHMERUCRVIJYPJVZ");
    msg.fuel.assign("JBCSHDIXWVETXRRTDBRDXPAITWYHFOMVYPQZABFGDCLWZXOEWKXHPGGZDZPGFZQIJDHFMIKHOONYMSFMVGHTLNIESYWMHOINIPSNKHRUTNQAQDBOBCLTCAAPLSFLCAJYCVNIJBFMPUDOUCJWEUPRMZTVUA");

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
    msg.setTimeStamp(0.7032888488957516);
    msg.setSource(44997U);
    msg.setSourceEntity(206U);
    msg.setDestination(39832U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("JHLJITDGQUIYDQPEYVBEPFYQENMTLNOLJQHWXAONAWMHNUCKZSTRMFOMIAPMCGOKOFVBEUNFGRKBRCWOXLUAEJETBDDOVSWUSVJPIQNZQKLWHGRDFHZFBKJRPWTJQLBGCAZRXLBAEGHCLVYMIWXCWRQIK");
    msg.type = 34U;
    msg.properties = 174U;
    msg.durations.assign("PPENVSOYAROBUTCGFUGOMJIUVLXHLMURHTQBKJFTKPNJBGHZMDIVYWLHNBFFQHCNYVRSKWYSPSEAPOWTUUZUXBVCKMZZDYGKEEBYFPKIJHFDXMLNAEOMDCCWCTWZRJLGQLIXMGXLGWHXANTJJCFICJGIVERZRANSZKTATOMQQIUDIWVVKKDHXRQDYYFQEJ");
    msg.distances.assign("SEOKSOZHIUJEAAKXLTPARCHYOUQBCHEXJRFNPNPQZGLYXOJDRJMSVQGZLASZMOCDOXQWMGRQUDIBDWUZQXGETRGSBKKBZIHWBKQTWGLPXLBTBSFRVYIPNJOKOPLIVXZYPRIXBKPACVTBLWSVUCIQYWUCDNUAGGLLXCVDPHKCFFRZMKSNUFYTKHAW");
    msg.actions.assign("EUWFCMVXORZRFIXEOHHGWCJQVLAUNETZTKYSEXXOGLWZUOKKADDMLFQNCYFXPTGHXMEFMBQQBSKMEGBUFSLVDMMNQNSZBCKIEDWSYIXIOQIYDGGNRQLFKRJPCVPJEJIOSAPNWFAWCRCDBYJAXHHBZPLIZAPYHBRDUHPRNZTAYSCUGSQRKROZSDJEJKD");
    msg.fuel.assign("ODULNTCPEXRIWRPZMHXDWCEZJUKCUGZQKNXZLNMRJHO");

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
    msg.setTimeStamp(0.47258049352149034);
    msg.setSource(2709U);
    msg.setSourceEntity(171U);
    msg.setDestination(60180U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.47736558437837373;
    msg.lon = 0.3934289799221714;
    msg.depth = 0.4777336876392656;
    msg.roll = 0.3752028812629139;
    msg.pitch = 0.2905358399569199;
    msg.yaw = 0.7230109766944566;
    msg.rcp_time = 0.9666996952884415;
    msg.sid.assign("GPEXQIKUOQQMEVDJHPMDTVHCLZPMWYLKBTYPMAGDJQCUJVIRVPOX");
    msg.s_type = 200U;

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
    msg.setTimeStamp(0.22714117284965907);
    msg.setSource(28129U);
    msg.setSourceEntity(118U);
    msg.setDestination(36350U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.19414636581246747;
    msg.lon = 0.6951020105102921;
    msg.depth = 0.5284650838786246;
    msg.roll = 0.7464430370623827;
    msg.pitch = 0.4859172046101121;
    msg.yaw = 0.48831854881971315;
    msg.rcp_time = 0.9861033837242649;
    msg.sid.assign("GQRQIZWXBDOGWUBLLAKDQIDPLTIRDYQFUCTNRYAC");
    msg.s_type = 163U;

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
    msg.setTimeStamp(0.474518926568714);
    msg.setSource(18867U);
    msg.setSourceEntity(174U);
    msg.setDestination(20071U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.47383984334545903;
    msg.lon = 0.0177774276351087;
    msg.depth = 0.32077052293158836;
    msg.roll = 0.840438878694556;
    msg.pitch = 0.12463290476922961;
    msg.yaw = 0.5296473519670684;
    msg.rcp_time = 0.05851408313827011;
    msg.sid.assign("VVHITUSMZVYLHHOFIGUHTYYCFDTCGZWSBVEEAPUDAZUINOHCOQGZHLQQGIDJYLXNTKRWTBXNPXIWABCRWCWBKDKSDKLLQUZXFPFMBLRIYEFADYZIPUOFJDSQAIFYAHMPKJAIOMBBNWGMXVLWAJCRUNPORYTQQJSCVGQMJHXWOEWGKSLAWGDEQXJEBGNIMFMCOURHNYPSXGLDKVPZNLDPTRUBJAFONYEBTZVHRZVUREJSNMCVX");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.9348344382124703);
    msg.setSource(19094U);
    msg.setSourceEntity(135U);
    msg.setDestination(57708U);
    msg.setDestinationEntity(44U);
    msg.id.assign("PFQCNXDLSJODBKJHRKSYHQOIWWJNFQVCNVANNHKCIXSLRYGWGXDWXZZIXEGNJZKIIDGMXKQDGLSGZTPUAUYYRBTRWKQEOLZMHFPGQZFMBEAOAUIMTBBDENKWPMJBERUAYYCNSWFTFKDQHWVUT");
    msg.sensor_class.assign("WLWJODPNVWXGLYDOBHIOMYFWBIJRFRTXNMNCKZXXEFQPLUPDCQNEBSVXTSZHGNIWRUTUQCOYMLSLGTAEOMNRIVJXDSIWAEMOBVAHBHBGEYRLDCPUSSZYBGLUPYCQPJFJHIVDXGQARDZOXTUTZBQURYUMJLEFKEPMFQJKPGNJKQVHLWJRKPN");
    msg.lat = 0.3585624953644062;
    msg.lon = 0.6697356125411458;
    msg.alt = 0.9524031281104043;
    msg.heading = 0.9441741009811441;
    msg.data.assign("YIDNSSFEGQGWWTYJUHRWIICMLULKEDMFACAIFOYVRMBVIMDFTJBXKLPECFRZCKCWOMMRHTYRSFDORLSZXSHPHKVFAXTMJANXNWSWADQWVZPJYROLHYZUGCXGFUXAGJOYQT");

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
    msg.setTimeStamp(0.7783488264324088);
    msg.setSource(37744U);
    msg.setSourceEntity(44U);
    msg.setDestination(6537U);
    msg.setDestinationEntity(216U);
    msg.id.assign("WFWDFGUPOANIRZLGITUMXPNYOIQEIYGWMJPQIRSZVEBCERUIJNTAJUDUVEXUZHXGDYKRZOZLVRCCUPDTRHSZXMEP");
    msg.sensor_class.assign("SKYMZZINPYADRHZXIJQQYUVHIWLTWYOUNIOFGKUYTKSANJLSYPQVHSXMZSJDJFABXTLOUVOFWWBCMB");
    msg.lat = 0.7373666546643304;
    msg.lon = 0.22327763045000149;
    msg.alt = 0.5247985676678206;
    msg.heading = 0.22718823182558667;
    msg.data.assign("WTADVNSOLXNGJUMIHQTEZLQUVITWEJCGOEAARYMFHRJSZATQACASDOIBYUELCZRBYFDVOAHPUJKYEKFFWAZOIKSVNATKSRUZMGSIVGMNUQBQNNCNHPNBHRGFPJCZQVDFRYQXMFROIMKJVHXFSLPVXXBZXWOQKTLWLYRUWCKWJIDWTUOPLGESBDXIFHMNSKMGGTHMLWDCKEXEBICQQSHLPUVARFPMGJRCZGPTLTW");

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
    msg.setTimeStamp(0.09064503340237406);
    msg.setSource(30621U);
    msg.setSourceEntity(120U);
    msg.setDestination(53840U);
    msg.setDestinationEntity(162U);
    msg.id.assign("MIQNUEUZHMNWSXEJIZVEFWGMLRXVWFECQUHSPAJSZPMQWKBQOLEIWPNTVCYQKJTJATJIAFLYFHGIYNRVNOMAWHZRZRVVCWRAIJTOCYSMRMSXEHSPKJNYRSYSBBGNRAJQEOSDBFVTDDBKVGZ");
    msg.sensor_class.assign("PRRADFREKVJQPETKEHSDSJVCIRCRTTALUWEJEWSBXLVDBKDXMDELIQQGNXXXGOTYMIDNPMZJABVYWQCOZBOASJSROWOBFJHFUVLYHEDGORUBDOKDPFYQXNRFIUWDJTNGHYUNWLRNYFTSYCHPLVANYFHJSXKRLNAFIGEKUEBTZNGIPAITZTMPWPWISHOBMCXVPHAFAGMMQEWZCHPQZBWVGQL");
    msg.lat = 0.4738689216574501;
    msg.lon = 0.21692147606336176;
    msg.alt = 0.8003583675066308;
    msg.heading = 0.17124064126713;
    msg.data.assign("GUDYNEQDOXHNVWMYZCRFPFMTOLVCKKHMZBPDPUTBOVWHYRWGKWHTLCSMZAGKPAFDQFRZFVREDSCAPUBMPIPJ");

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
    msg.setTimeStamp(0.2715024483350754);
    msg.setSource(1892U);
    msg.setSourceEntity(83U);
    msg.setDestination(49162U);
    msg.setDestinationEntity(251U);
    msg.id.assign("FEJESIWPOHMOFNSBPZOYTH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DWZUCVSRTHUTOFXPQZUPLPSVJSXUDPYTQCLMKMCXFLUTBQOZIHEQOXIAWDTLBTFAWWDNGPWYDKHBAWOAERXNMKITGLCLRBLVVQOPSLHPKSCJGOYZVTCWWUDMNNNIFOBQZMBCAEIFPICEXI");
    tmp_msg_0.feature_type = 138U;
    tmp_msg_0.rgb_red = 80U;
    tmp_msg_0.rgb_green = 28U;
    tmp_msg_0.rgb_blue = 57U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7314373151593971;
    tmp_tmp_msg_0_0.lon = 0.855625676817613;
    tmp_tmp_msg_0_0.alt = 0.6499292154434168;
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
    msg.setTimeStamp(0.15720978991384593);
    msg.setSource(40278U);
    msg.setSourceEntity(98U);
    msg.setDestination(48215U);
    msg.setDestinationEntity(144U);
    msg.id.assign("STFNCXNMAXJBDXDIFVBL");

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
    msg.setTimeStamp(0.9978049728381377);
    msg.setSource(10684U);
    msg.setSourceEntity(129U);
    msg.setDestination(62491U);
    msg.setDestinationEntity(184U);
    msg.id.assign("DURGZHQBFTSCHUTYDHYQZVPGKYIPBHUVIYYIAFPYFEGJCOMQPSVPJJMLPPAONWFGTKISD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SBXYRIPQMOSWCQKKIDYATGDGZTKEWDSVYGIZHTNNTDJTNOCGDPRMNPFLSMRHCYQMPWRCZGFUDJYQMYWFUFESIKI");
    tmp_msg_0.feature_type = 5U;
    tmp_msg_0.rgb_red = 245U;
    tmp_msg_0.rgb_green = 181U;
    tmp_msg_0.rgb_blue = 34U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5060533287990907;
    tmp_tmp_msg_0_0.lon = 0.46879341978088773;
    tmp_tmp_msg_0_0.alt = 0.5239128485738893;
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
    msg.setTimeStamp(0.8729769217720155);
    msg.setSource(3296U);
    msg.setSourceEntity(123U);
    msg.setDestination(6988U);
    msg.setDestinationEntity(141U);
    msg.id.assign("DDBGYWMSLJXRZIBGXGETAHQFHSEAJOHOXJETPFOCDNS");
    msg.feature_type = 23U;
    msg.rgb_red = 139U;
    msg.rgb_green = 222U;
    msg.rgb_blue = 244U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9769894898904142;
    tmp_msg_0.lon = 0.962133074120243;
    tmp_msg_0.alt = 0.5214917279604185;
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
    msg.setTimeStamp(0.5590459057101597);
    msg.setSource(43249U);
    msg.setSourceEntity(164U);
    msg.setDestination(58758U);
    msg.setDestinationEntity(185U);
    msg.id.assign("HQVDSEBMAJXCGKWYDVDGKRDWFVYIQFMAFSERNALQTYJSGFDFEEWOQVICKXPGWMSGVIMECIDTFBSJWVUNHREZOYGBNTYSZGOWJQVCNASLPRVZELZJQRHIJRMBBBIOUCMXNVQWUTZEZSUIDKMZLZQOPHFLKHGECCKPMLYJJDRRBOAMAONYNQONLXDWSFHXUQUBPHTH");
    msg.feature_type = 100U;
    msg.rgb_red = 189U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 72U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.06795587304529382;
    tmp_msg_0.lon = 0.3121058095193847;
    tmp_msg_0.alt = 0.5014886583357593;
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
    msg.setTimeStamp(0.38040402016468033);
    msg.setSource(17779U);
    msg.setSourceEntity(124U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(239U);
    msg.id.assign("BJBYQPFLDKSZTWSSVJPBPZHGFJYJMHMNVVHZPVPBRLTUWLDKRATGYAQMQFWJGXXCIVYRBXEMUOUOHHUIEXGGTQAWQITJOOXALKIPQGHSOKIUVYTRLYEAAPSETYEWNJTJCLNJDDLAMNKWIUCKSAWBENFBUODNCVFPIRXHBCODRCIISCZZOWLXASFPFTKRZEDQNFPDGLCNMZGZYQQRXCUCLZKSEKWDDXEUXUAYOWBJFRSGNV");
    msg.feature_type = 0U;
    msg.rgb_red = 118U;
    msg.rgb_green = 251U;
    msg.rgb_blue = 105U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9584532402770566;
    tmp_msg_0.lon = 0.8299819626933014;
    tmp_msg_0.alt = 0.3597770849355536;
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
    msg.setTimeStamp(0.6614356526567747);
    msg.setSource(59016U);
    msg.setSourceEntity(164U);
    msg.setDestination(10258U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.31631600495670664;
    msg.lon = 0.9644260046381399;
    msg.alt = 0.9712080035142948;

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
    msg.setTimeStamp(0.18687484050557335);
    msg.setSource(17913U);
    msg.setSourceEntity(14U);
    msg.setDestination(60049U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.22987257986075238;
    msg.lon = 0.207075276546544;
    msg.alt = 0.22014789633170395;

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
    msg.setTimeStamp(0.8450395970222853);
    msg.setSource(56375U);
    msg.setSourceEntity(117U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.37955496081035867;
    msg.lon = 0.2618244566307609;
    msg.alt = 0.7019443178298918;

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
    msg.setTimeStamp(0.15160156956285886);
    msg.setSource(8482U);
    msg.setSourceEntity(182U);
    msg.setDestination(22468U);
    msg.setDestinationEntity(252U);
    msg.type = 175U;
    msg.id.assign("CRKDYECUUONMHMIKQSOABVPFKTHEVJWZQKHPMLZIQFHOQNVMOYHDVNIARZECBISNWMKMZSQGZNLXNEXCNZVRTUJUGWRVMUGPYXPBYDQADJCYJIPMZYAKVXAWDGIGWQTRUETUPBOFGQLYEWNODTISKPXWBBRSOUDFPXIJUOKLPFDQHFGAAWBXIJFWLQKALCODJLWS");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 145U;
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
    msg.setTimeStamp(0.9159374173363227);
    msg.setSource(54710U);
    msg.setSourceEntity(129U);
    msg.setDestination(41998U);
    msg.setDestinationEntity(143U);
    msg.type = 139U;
    msg.id.assign("MFHGRZVIAZFTMBWJQOVKRKMOIJPEYGSKUOGVYICQMGCDCQBLESRMCRKNQYEATWJIPFKUEPEXRWUIOCITSGSQWJZPZCOXAEVKFDBRHGBAPGDJHRFFJNIDJTTDHCMNIZGKLTWGAVLULHCKMWTZYVRANPUUFXROPYUTWHDYZFLUOXHMSTPBSNNXXMAQTBYJZXNWOELZACDSNWLOJNFSAIAEQXBLXBWOGVRLNPIYXYQDV");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.9027620646947835);
    msg.setSource(57024U);
    msg.setSourceEntity(80U);
    msg.setDestination(4185U);
    msg.setDestinationEntity(161U);
    msg.type = 115U;
    msg.id.assign("JDLUALGMTUJBQJANNOSVKAIQABYRJGOEADIYWZJGOJLWZXYUNEPWMUWKQRBPJXUCCDGHSKBOOGFRKYTECFIVMZIQYCRFROFRDBGEMEDLXNUTXITZWFZPKIKVRMFZIWLRITPJTDUZUHSQTLZTPEQPKTVNVQBXMVVDOSPHZVCJK");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 29650U;
    tmp_msg_0.control_ent = 9U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 22U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.8047763618865331;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 50U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.8865730349626497;
    tmp_tmp_tmp_msg_0_0_1.z_units = 192U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.06500148082260437;
    tmp_tmp_msg_0_0.lon = 0.564716666178055;
    tmp_tmp_msg_0_0.radius = 0.23274083957746905;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 147U;
    tmp_msg_0.proximity = 156U;
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
    msg.setTimeStamp(0.2941540744845178);
    msg.setSource(52087U);
    msg.setSourceEntity(12U);
    msg.setDestination(29468U);
    msg.setDestinationEntity(2U);
    msg.localname.assign("KMDWUIDLOJNRPEZJQLMQPEMDSUALJGUBTQQPSTDEVPWKHHVGBZVIHGNOWQYZBHTZKNTRPAKVJFASMISNDODARWMZKWSEULCCNAHXOMLJEFRXSCLKOHILXJVCVHRDUYMOAXBCKIYAXSDCYSBRUXDSGCPNZUYNEOQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TVWCPLDFNBXZUYJRPYLCJGNIRFIZHGEZEEFVRGWJAVCJAIPWOESBVYASAMV");
    tmp_msg_0.sys_type = 72U;
    tmp_msg_0.owner = 9864U;
    tmp_msg_0.lat = 0.7659486022852335;
    tmp_msg_0.lon = 0.949256619131593;
    tmp_msg_0.height = 0.6118595227284034;
    tmp_msg_0.services.assign("AOIAYKHPGSGKPBJSCFDKOESBAMEVIMRCHFNDDFRBMLZDOZLFGKWVXAHVQNERFXQBTXGYZTWYZTT");
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
    msg.setTimeStamp(0.2442287834720127);
    msg.setSource(21231U);
    msg.setSourceEntity(83U);
    msg.setDestination(42592U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("LTKOXRJYTSVHFWHUKUZQQYQADXJXCBEWMWHVPJLZNBMLIRQQTAJBVBHFHISXUGZFIYCKYXTERNXHZELOTKQZGIOAWQJKMNBUGTSKMCIRDFSZHOMUMSLDVYGPBQARYKEHONWVNODSQMPXPZOIADNJRYXLSSELEPZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YTBZMRZGATB");
    tmp_msg_0.sys_type = 141U;
    tmp_msg_0.owner = 47058U;
    tmp_msg_0.lat = 0.3970098439619586;
    tmp_msg_0.lon = 0.2988885556157094;
    tmp_msg_0.height = 0.426919687822372;
    tmp_msg_0.services.assign("YBFPKMQERLZOMJKBIUCIUORVHJBBFUOIPOWUVZWHTBVAJEDKSPTXZVFYKSYGMGUJIQLLILVPEVJYFLWGUGAZYZPDDN");
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
    msg.setTimeStamp(0.08708144282208385);
    msg.setSource(62650U);
    msg.setSourceEntity(67U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(21U);
    msg.localname.assign("HDEAXLFJLPSXAEMVICQJQWPBJURPHPTHDHVVOMZCKNMEMCLVMCNWFHMYRDAGOZYBVGJGUBTVEMSUKZCOXQA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NONBEVQZFUKMOQWRPMJASKXYNFSJFSXYHYAWSMZHIGWHVFGPUJAJRINSQBJBUCSHCPUYESZVBLIKORABA");
    tmp_msg_0.sys_type = 105U;
    tmp_msg_0.owner = 23831U;
    tmp_msg_0.lat = 0.926952194109953;
    tmp_msg_0.lon = 0.8832148509015899;
    tmp_msg_0.height = 0.9446714847071433;
    tmp_msg_0.services.assign("XTVBKAHGEQPLRBDQDTHQGQNDCLKSZNRIRCTFCOCPLGJIJOVMSXYGWEWBEVQJWSJCBGIZOMAVJAVMWXGAHIDAGZJUDRHKEVHOXBMZNUEOLZAFILYWIVLMBQQNLNOHPFZREEKXPBHARMTH");
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
    msg.setTimeStamp(0.2570763432140736);
    msg.setSource(246U);
    msg.setSourceEntity(101U);
    msg.setDestination(6210U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("CZERWSNASTCETHYVGQAEYUYSTLQXGQSMFPRIVHWCYDFDJSQDHELTRDEJIXBNJURHZKCV");
    msg.predicate.assign("TNWKOBVRJISLUECWSESYVZSNIBZTJDRTGHLWLHMEIVYQZJNGKXEYAKIMQNMNPTRNKDGVEBQCVLYFCTOINCRBHPQK");
    msg.attributes.assign("OGRLOAKCLKSWGNXCTONHUMBBBBOKPPRTAMPXJSHXTIQUYALHDLNZTWUEJENFPKHMWCJQKYKBMDXASWOYGVMPBEUUOZHGMXTFVYXAVIYUSXINENWFHYHIMLZNDYPJXKZPEQVDSVDYEAORTIJVQDRNCQXMHZGEJTWDUVGRLTQVHUFWLFRQOLZXPYRKDCPEALQJRIURVEQKGQV");

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
    msg.setTimeStamp(0.9945695982727238);
    msg.setSource(725U);
    msg.setSourceEntity(163U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("IUDLIZBMSNGTCVPNQCARAVHPXJTGOCKGAJVOVUHLHSHXVNPVEQPXQKYPSJLONRYPWDERJNJSZUGSRGQAEJMWFELKRTQISCBWDROUFNLZFDQNYQZEXAXUSSCWBLAWOFTVNITXD");
    msg.predicate.assign("HXPYMIMDZRQPRYKGCGAQXFQQTVFWNMGBCNZKRWCPBKLHWXCTYBIFIODMUOVAVTFDCZOYMPCHKOBBSEPKIIWIIPKNXQORUKAOYAZYXWVDCYWBJUGVFNILJAGAXILWRYFEFJRDNJPMKHAEBMZLEZMDSOEWDZXBAVNFTJELTQLHWMGTURNACUZUSQEHBGVKPTUREGCBTSYLCPODSDLHSXZTHXMJWGLJZJ");
    msg.attributes.assign("GHJJZPAIUVNCKYMAGFLEWXSPXHFKEEDGUUB");

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
    msg.setTimeStamp(0.7054029307671328);
    msg.setSource(31449U);
    msg.setSourceEntity(147U);
    msg.setDestination(44561U);
    msg.setDestinationEntity(44U);
    msg.timeline.assign("PPGIFEIXBGETVQRJGOVNURMQJXHLYNQTNYZLJHLYTUALPYJCGRZFBUJWJYHSQDPKAXMAYPXZFUMZOOVBDQLIVFCKGVOMRIOJVLMNSRDEUS");
    msg.predicate.assign("OMYUPUDHMCVRJDAJCMAVLLRTOLZZXIHSOOIWTQWQYUQUMPAJIVFIYRTEPBOPIJFJKLMRHZNOKSLYKDIWCIXATDMWVYKZKLSVFKSDDPWPOHDQJEDNSJRJVYPGVHQQI");
    msg.attributes.assign("YQMXHRTWMYJ");

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
    msg.setTimeStamp(0.8321463874081819);
    msg.setSource(12892U);
    msg.setSourceEntity(129U);
    msg.setDestination(13525U);
    msg.setDestinationEntity(89U);
    msg.command = 63U;
    msg.goal_id.assign("ATZHTAHFNLMDURIDPVGRJQZKKLIMNWMUPUJDRGFIEELXYBRYVFSTGTECYKNVTGQTCPQFNHFOBWEXJPJHWW");
    msg.goal_xml.assign("FWWASZDMOJDLXLPZCKEAORVUWQTDGIGIJETXXCACBDYYGIQXKSJPNFNFNRLVBHLVXFXVJUNCPUQOAFNZZRPFOIRMKJTABSJVLVQAMNKVOHPWJJNSZHM");

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
    msg.setTimeStamp(0.1547601398992231);
    msg.setSource(48888U);
    msg.setSourceEntity(95U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(97U);
    msg.command = 56U;
    msg.goal_id.assign("IWQCKFTDRKUQZSSVPJKULTEJMMIFLUWFWLKGORSLFCIEUEXAQHGDCQMHEJRKLQUVYGGKSXIDGDZMKHYYADPVOQNIALPJYGGJORTXJEDHWHNMJJGAVXRBICQNPNLKYUH");
    msg.goal_xml.assign("CUFOLQCKVBPIDVLVTLRVPQYETBXSAUNKKUBNZAMPOWTFDYCMZVMSFUDHTXIENDILFQEEHXUJAJLRJE");

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
    msg.setTimeStamp(0.8637248014077157);
    msg.setSource(12190U);
    msg.setSourceEntity(149U);
    msg.setDestination(39549U);
    msg.setDestinationEntity(177U);
    msg.command = 1U;
    msg.goal_id.assign("KRTBNLIUPKKZUAUTOZYKKNSKIVAIEIKNFFWRPVGJHLAQVYTARUZLMBOGROJVOWNWMLYJTJKMNPBJTVZQPNXDOOXCISPLGRIBGHZJMTJTDJAMHFBEJCGQXHAAWQOZOLVYBSYZPQYXGORWH");
    msg.goal_xml.assign("PSYCDAEFDUYPBQLLLXYNCOJMIEOHXWTMEODELNHXKMKPAMNYBKFVUAJJHZJUQTTHIHNNWCRRKVNIFJMNAWWRMCCQGSVLXKHLRIBDRUYVWJGVOXDTYQZTQIPCWDSBYTURBAFYASRWBEPXNERFVULKDQFEKN");

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
    msg.setTimeStamp(0.09649446175980558);
    msg.setSource(40696U);
    msg.setSourceEntity(110U);
    msg.setDestination(36448U);
    msg.setDestinationEntity(57U);
    msg.op = 131U;
    msg.goal_id.assign("AXSIJGCKJXLJZDABDQMSVTVVKZYACTK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LYZKBEFGAFOGBVHGSIGLQYEDBFSNXOZGMWIKTOSRZXOOSYNNIGKNBBTPAFEBMMNFDKMXZWHGWIGZWKTIJBVZQRALRFULTMAYLPVYSVTOHDSXZPQEEKZHNXJMDRVWRYDZPRECXQUYAJT");
    tmp_msg_0.predicate.assign("IAARJKOSYWZEWCKOCUGMHCRMMYYQDJNXURRBUZHVGKDVNXFPFMPIDGKHZHTKRRTIXTNRNXNKCZVWBXBPRQEKTUMLHDLEWQFUIRDZVFZTVGSSXKWOSBIDJSBXSFVLLZTMPQPTNQCJPTUDOJJENOQLIWZMWMCGGQHOAVTISVOYPWEYVYLJGJADPNNUNGLPUZXAJLHDSWHTSUGAQFWYKIUHEOBFKAYLBCFMBMBCAEZIOICFEAYQHGQJRFXPOEXEVC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CTWQHTYRKRCKPGOFUTVQFAAGOYGXFUIDLERQOJUSAXRMJBUNIZLSACKVITHYPYQSMSAVFCIPHBVYDRBEUNOAJHJPEFRLLFIDBWMOHLULJZRHQDHAKPMJLDHYQPLXXZENJWKIBKJUVCZXTRGXROHGGTEGNGWGVAZZWFTWOIEPOFBDUNMSPQTZJEYSKKZNUWNUXPXVIRFMNZXQBKDXVBLCGVDMWE");
    tmp_tmp_msg_0_0.attr_type = 186U;
    tmp_tmp_msg_0_0.min.assign("UCNGXVTOYPQZIMDNPUXLYVLHEBYOAOEMJSLLRYRHXMDSUHFEZRSEOXWFLAZGMTVAOJRKOLYQIXBRIOEGPNKZIGWQJHMRXWNTVNZXMWJGSTPOTGDCPVIMQADQFAPNKHDWDEEABHOSDYPROUQECCGDLCNMDUJIBTYSLZIPUHQXFHCFPBLCFBRWADYVFYXRPQUQBKTKVNZEWBQCFJIRKUWLMCWHTZJBKGJNSVTAGXKMVKWKUIGYSCB");
    tmp_tmp_msg_0_0.max.assign("JYIQCBCBFLFDJKLGOGZVNEFLLKVCUJUXPXIMSGAWJHQFMQSRYGWTMVMCMUSYQZHBVTLTVKVSCKTRADGTANZRCANPXDRGYXUDIMILZBYCIBFTZDYRLTUJFVFDZOBWXNONIQBPJCGTWKAJAKHBWKESXRGBNIDCYEUYZVTOPMQWEXPOEAPMUHPRSHIVEZUEATSPYIQXHSRDDKXQLQBKZHOPOKGFAHWFDUJMWILEWOSSQYWGCZJFEXMVRHOHN");
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
    msg.setTimeStamp(0.2434006416857768);
    msg.setSource(35410U);
    msg.setSourceEntity(146U);
    msg.setDestination(35616U);
    msg.setDestinationEntity(53U);
    msg.op = 106U;
    msg.goal_id.assign("LDCHUBWOEKFKGUXOQLWDPHZMTCETURQXQVWUXOBASOGCUYZMMNSXEGSBTLHWSRBJNXLFHBEWZVPIUEITRDNFPVMCGASVQQYPKZAICNTJYRURNXPBKKPXBOGXIWPIQNQLKRJMWUFHFOVLIVMDYKIPJLLEYAMYQVMMGTTQKZOBJJSYONRFQPMWDBHNDGKSALCGUPDAEYNRYXFVZISSHWWZVEZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PUQTMBADIVWDBSPVWTWQEPSOOKLCEGHIXLZWTGYRUDXGQQNLXWWVHTMULNUGDFKRBTXQLCKJBZNBIRCMGEFJSBOQSXVICEVUGKPEWXZLGYMSFJDTFVAQTRGNHKPKDZEYKAMNWHJICZJADCLONWUHVUAOJNZYDQAFSRJ");
    tmp_msg_0.predicate.assign("TXDKNQFVHIUPNFANTCOXVAFUERLKVZNHFIRIMHRTNVPPIHMZDZRLYFPOYOUBTKHQELAVOTGCSCXIADDRYDJSMPAWXKAGPTOSCBLHKIJJYBVANSXFGGRHQ");
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
    msg.setTimeStamp(0.46044770151942616);
    msg.setSource(53171U);
    msg.setSourceEntity(185U);
    msg.setDestination(55664U);
    msg.setDestinationEntity(134U);
    msg.op = 59U;
    msg.goal_id.assign("HDBFPQCNQTDJURMNYTXAFAAVUEMDVPDWFXYYQCETHZYHDCOOUAAVNFXCJLZBVKPQMFVLBSSAWNHXENPZQNTMVLTPKEQXYNRJTGYLBVYNO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YGSNEMSPKHATYMLDQZIRQHEWIOMQYWBTMTLCQGLGTXBSWWYLNZAKABDNYKMPMRDOUIUZRRXVYCZFYKFDXWJSAOUVOEMKDPUMAFEZBRXTTBKQDPGNSOTPVXNXLPPIVGOAEHWQJJVJWLUEVRLCSAHCHWKBXGTYAVKPDJCBUDNIPFHZIATOSGQPELFRIGSHVNVBCWFLHJSZAGZCTKEXJCEIKCFQRRMFFYSIODUJU");
    tmp_msg_0.predicate.assign("TKAIFSHMGZETDUFBITWDCKNIZYQJLERLTAXCGJVOUAMIETPSQSPACXXYWJHWIHUXG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LXHBUFEKHSCEUSL");
    tmp_tmp_msg_0_0.attr_type = 175U;
    tmp_tmp_msg_0_0.min.assign("RFMLIPZDPVDEMFVFEPWIQZOLSNUCPOEGYLAQYRPBEGUDQANCGAIZMJUKOHQLIQXZSJKNAUSRHXCYCDCANVZGAHAYMSKGKATYDHVCEBLYNLTBSWJWLMZJTBMITHMEJWKRHPXNGSVUSRABAVRXIFKKYNJTCYTQDRJFNOMFVTBPKBINWBLPCTBGGZMXWIDMECFLGVQCWOUUSZGFKJFNXHOHQVEWLOOJSPZITOTRXIDQJEDWPRVSDYK");
    tmp_tmp_msg_0_0.max.assign("WCQFZKBQKAWQYNBHYCHRETGBRSPLOLHKLJAPMJVJYHDUQISHYDTNCCJEYDAPAQHKQWHEZMGDVXXXIPSKOLLIGFII");
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
    msg.setTimeStamp(0.6933990373176033);
    msg.setSource(18449U);
    msg.setSourceEntity(151U);
    msg.setDestination(8780U);
    msg.setDestinationEntity(244U);
    msg.name.assign("AQKAIKSXQLUWTMOVPOIYHZTJITUAHFCRPPCZYXIKQZYRDDGJMRDNBHIJULBVRDBMLEYSBVVNYKNOBZQPHXLOYAGFTEWPBOMFXVJBFHNPYACISTFUQUTEXTKXEZHLCOOAUQUQIDVNJWRKNLMQCRYJJFYIDAYHXASKHWUGDEODXIL");
    msg.attr_type = 64U;
    msg.min.assign("NTTUIMGSUCYQLPDYKRDGNXAIUYEYNDMDREUJOFYQRJEUTPKQAXYOGZFQKJXZCVQYHYKUXPTBUBTPIQQMBJOBFCJACWPDPOINDSWQHGHVSUHIUVREFRZFMWZRKZPNLHZZEVLMBHASOATBECFAOLWECUIEKXQPXSAIBBGEEWMGFMISQCXRMAGHSMSFNBNRCJKPNGJDMWCFCTXKJLHOWYLOBVZPXOVZRXOJLDKVIGKTWTSWD");
    msg.max.assign("TACXPVXEXWPWNILVCIKGMRUUHX");

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
    msg.setTimeStamp(0.30573848026091066);
    msg.setSource(62266U);
    msg.setSourceEntity(187U);
    msg.setDestination(40338U);
    msg.setDestinationEntity(168U);
    msg.name.assign("RNCNEGZOGOXTGLHJRFLRHDCBIWWKSCXYMMAIWKVUQFEGQCAGLDLUJYPDUILUUFVQPIRCAWJKCJNOVPLWTXOYGBYLTKXMOPTJLFRAOVQITWASQVYKSUPURKYBHKONFHZLIGPAVTJMWBHDHVTKTAPVQSMFNZNHZEQDXQGYCPTUVZDBEUFNMXQQWLGIDZXKCEDDOECBBREXSNHAMISSNABXJZDEAJZPJTMSBHVOIFZESP");
    msg.attr_type = 60U;
    msg.min.assign("LYFGELAVWLNHCCSICGTPMDQSQUHHKJIKJMWRPXOMZEXXSROBJGPFKZDFCBGYZRTNICXPVZHWSOJDVRKYSRTPCRNMEFGXYFNMJCCXAUQGBYBLPSCTUARFHFGYQDKGJHNUFPJGENTVGVEHBTVPYRTZZWHFKAVMWKQLXINUVIEUQNTQDZMLKUAWOZEETZJFPCVEHWUIQEJTALYOBMBSRAIDSQOBDAOYWVDRQUHMJWI");
    msg.max.assign("DOOTRLOVOVZMOXFIZKMMJXKWADGQMMRINFUESAXCZWHMHPWEKUTGSYLVUIPDCUTCFUPQZSXWKKMXFL");

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
    msg.setTimeStamp(0.47380804326128356);
    msg.setSource(25819U);
    msg.setSourceEntity(146U);
    msg.setDestination(2304U);
    msg.setDestinationEntity(203U);
    msg.name.assign("ETLXYJOXBQZTKMRJSBZCOACLNVZKODLEFRUAONMPXLWBZGPWXGYTEENBRRCIUIDEETJXFFNKBHDERTKDAAKTZSETSBVNMWWDCVOWLDXSNJAQZLPNISXDQOJUEKVFGFVYAMURRPGAPZCHOGBTAPDOHFQHIVYSUZGKOTMPCFRYMCQWUJUAHIHQJNIUWWOIBKAKFFNPXLXDUYDHYZIKZGMII");
    msg.attr_type = 200U;
    msg.min.assign("ZMXLNHKBSGBTFEMWNCCLRMGPDLVENOZMCHCVXDVSRRASHZHAYMWFZYXKBSQXDWEDCMNEPHUTZQUVQYTVCOIXUFSRODGXJOOVIXABMKVFGIETPZMUATPFJJRFYPAMAGLLABRURUYKHNRIWLYKQTOJUQWJDXJYIFOCPDHDSNWQQOTK");
    msg.max.assign("AQAGHSGFFQSEMGJVQZQKNWBIYEKJMNLEEZDXVBOXQAUUMDCXXUYRPTVULFVJZWVLRLCFSHLEASTSONXDMYHRBJKGTACOFZIH");

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
    msg.setTimeStamp(0.13161069473990394);
    msg.setSource(11440U);
    msg.setSourceEntity(199U);
    msg.setDestination(16358U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("CUSZACFBMNVKHMLMJSQGOKGORMWLY");
    msg.predicate.assign("DORRNQUZCCEBEFLVLWLOMPGYBKOYLVFFSLCDHHAUWQJXHKJFXSHAOSWEVEFWMAYMKIRGQBXSPWIISMUVCIXMWIYYDFJKVCRTOCZTZIDRUPIANUMNJJGNXXASTNLWEVOSOQRKBHGOF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WVMKFFLOBTCELYHYFEAQVKPYNPLCYJNGCEJBSSGTSTDOQEMDBYUMZEOXVTBUUTEFZNUSCLGNFQRINVYVOMJEFXPXSRNJUUWSQQGTBSXAXV");
    tmp_msg_0.attr_type = 89U;
    tmp_msg_0.min.assign("MEZSCIYBLKPBTPTSQYXJZYADIOYYKJCHWFTNCUVCWZLODBOQMHHEVCTNFGFXLSMOBFLHCAOAVODAZAEJMQPQKRGGUEQRCU");
    tmp_msg_0.max.assign("TAGRMZOGKLKOXAPCALVDSHGHXHYPOQQHMHIETUJZXHOZTSYKCAZEMRDETFFFWVECMBJJJIPHQXPBPMRYYEUOQWIVBCLDFBGOONIXKLEHNDQSGWHSVEIWFUMZKLYHCECSLNIWKYSJUTNMJZZRBZYARF");
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
    msg.setTimeStamp(0.9552274230559626);
    msg.setSource(6433U);
    msg.setSourceEntity(204U);
    msg.setDestination(2589U);
    msg.setDestinationEntity(193U);
    msg.timeline.assign("IQBWLRJMAWSQGLAYQHKAPPSSZUKDJSXRFPOBNERTDOBTQVOKEHQRDTWEBUDFCTJUVDLNOHPTBCVXSBMZOKPJHVAKLWQVCCHUVWTRKFYZMRJVDJZVFLFGUMTIETPWDNNGAGYUFYPJVQSHZZTUTBIYJGOXMMYLBAYZNRQLAGLVRYGCOZHNO");
    msg.predicate.assign("TIVQOMRTSBYQOXTDEJFZUZQAIHSIWBEKAHRKAZBEOSKHAEZIBMFLZXMTDDJELYGJVGBHSBTVQQRKWOCZNNPVMHEAKFWPDYOPQROWFZPFSUMCUNIXZQEWEXFMDXDCCQPCEDRTFIGWUYANCFBWXULILJBGKDVSBLVJAMVDTNSWUBWIQDSCH");

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
    msg.setTimeStamp(0.2711372693603583);
    msg.setSource(52945U);
    msg.setSourceEntity(228U);
    msg.setDestination(47612U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("XJPZBGRLIJKZFUACLTVJKLEURZUAKYPZHEGWOWBNTFQRUSDGBYFWLRDMCEPQOCQKKOTSSBSVYMCXEJYNWDNQIPJ");
    msg.predicate.assign("LCJQWPIHJWZFKBAPLJNRIUGNJTGYWXURRJMQGXWJAERWRCGSHXCQUHTFXSTUAYTOQGCOHYNCVQVBLOGZWMOCDKOOTXTAYUWKBQBVCLDVDHXLDNXKUYYMLBWMKFFBVZSNIOPZPATFJQESXBUSVIZWAPF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SDYPYGJIGQUHLSHPSJSGOWMCOCILQYGCODQPDHFLVRMORUKDOOZDGMQDRRQCEIXJWHTEKUQMHYWWGBDTTKJBHUFAHJUDKIROLTMEKHXJZLVTVNVWNJIFBVWPFFWTIUXN");
    tmp_msg_0.attr_type = 99U;
    tmp_msg_0.min.assign("BUFNEURMADZILVDGUNBZLGCRWJIIDOVDFTPJYSAZQMZDQWIDSWQTMNLZPUVJGHKBUHUGSWQZVHBVMSWAASQORHNTPCOWMYFGOLPPXOCJIYAWMVRFWWGSRKFJGJUIYFJZVTYDCELCAGECCHQWYPPVTEXSMERHKXSRBABRRKIXOZFAYOQFBNLDK");
    tmp_msg_0.max.assign("PKECDTUHJQOTMEPHSYKUKAYQDSRPKRCTNOIKOWLZIVZRCLWQUGMDRRODBJDODLIZMLUQFPZWGBZXCDBDGWGSHNBTTJZAAMBVUXDDPBLESKSXEIGGWFYHFUUWZOEXSXARQHLNAPHTOTJQKT");
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
    msg.setTimeStamp(0.522537424618542);
    msg.setSource(33375U);
    msg.setSourceEntity(168U);
    msg.setDestination(19708U);
    msg.setDestinationEntity(51U);
    msg.reactor.assign("DGHYBXDTYUNOHXUKCPJUBHTVBUARLIIUCJDWSIHLDQWAFZGZPQXSHZGETODQQOGBVPDRKKXJYMNOIXCTAUFMMTK");

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
    msg.setTimeStamp(0.38122258218967986);
    msg.setSource(20469U);
    msg.setSourceEntity(164U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(50U);
    msg.reactor.assign("HOHURHINULNZYYKQXBFTAJOCGAPCGVEGJOBCFQRPDLSSKXQVZFMZITNDESDZCGWBFOEQYVWRNHUYTLKCAAWPVKJEKVOYHLNZUDSOQASWXFAXYVUHJSOLIXMRBSDFEKMGQJWEVLHTKNGIBMIUKR");

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
    msg.setTimeStamp(0.33743962770819946);
    msg.setSource(45750U);
    msg.setSourceEntity(241U);
    msg.setDestination(28411U);
    msg.setDestinationEntity(20U);
    msg.reactor.assign("MWXFXIEEUFZQRQIDOVPVGEVVATIINHEIAFPCPFGSDWTYAIZMSVURYWTXBJBUPQTTON");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LRTWJAJTMVKPDACEFTKENNVPCDYJIXMCUPGWVCFHKEIGYSLKHTQDYHRAOVQWBHQTDITEYJFPGOHVOHLRNPAWVNIGMSAVNTHGWLQFBFIFKGPQUNMTQILOQXBRIOEFKBWCAISHYSDSOMKCFJUACZOUDVMJGOLRDMFPGRSXXEBMZARQBLXYULSCNGQMJVCYURZZNMHGT");
    tmp_msg_0.predicate.assign("IVZATLTHURGIJMYKAMDJKOXOUKNMKNQRHLOWODZFCBPZLFIVPPUUDZYAIJFFIMLLBGRSTUHHEVHIZAEZEXRXOFSVSRZOWLPNCHRPWEGXGYFYUAJDTFD");
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
    msg.setTimeStamp(0.2041565302372419);
    msg.setSource(57985U);
    msg.setSourceEntity(31U);
    msg.setDestination(49292U);
    msg.setDestinationEntity(23U);
    msg.topic.assign("BEHBWJAZQNRPGNDSVSQCLUVHHIOCIELUMJHVMGVKQLFHAXAPFLUPADGWWAKAKDKOJRZOBYFVU");
    msg.data.assign("CYTTNZFSYHMNVKQRGLZQOABTLFJJBYBEIKMIKUQMDSKCERDEHGDMCODXTYKIXEURZWDMQELUZCPSTQPCIBGSWWLUFPUANIYZKIHCPMUXVLCCVDDOOMIJONNJVALYBDLWTA");

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
    msg.setTimeStamp(0.23051608155375314);
    msg.setSource(2454U);
    msg.setSourceEntity(87U);
    msg.setDestination(62496U);
    msg.setDestinationEntity(100U);
    msg.topic.assign("UEMTFZHDXCUOAJVRYEDMYDIGVSGQOYXYDUATUQZJJNPAOIYVYEIDOMRLHRQKACLGELHKXHTZGOCXAUMLKBKBXHSVISQAKVFEYRFNDXKZTPJQVKLRWAXIMILCNYKBUGPFPZIWUZRSPVHSBXNOSFWUJWTHBVDZQOYEWCVFFNKHNBHJIVOIRKTNUCNDGORGTQZPSHSABWICWJRPQFQPLWCMMGJJBLMDEEWXNBJZNTBFYAFMZOETCXQUGAGP");
    msg.data.assign("JWEPKFNCFDQREITIGKDYACUHOONZGICNGZRCJBNYWFQRYETHZMKHICAOGZMCJVIXHQPAQFHDMSVRYKJRTWMWWYLBAWHJFPBWWKPFOTPEVOTVODRTUBXZLCJKEHTTQBIVXVANGFISDWRSXGBXUAQDGZMWANAJTPIMXNDKV");

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
    msg.setTimeStamp(0.17714819519624725);
    msg.setSource(50704U);
    msg.setSourceEntity(92U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(92U);
    msg.topic.assign("IPCBRRVFKNUEPMNNAQWTJZUHPOPVWRVOOOBIWDCBTSGBSPHXCLLYBSDFFKUQNRMAZEBZOQVCAHBRVJWLZMLATJCJLYFDYTTOZWOUSHNQJWRGNKMECJKKSUOYIEDHJGKCLNUJDBGPMDLQLXXEFYFLGSPJMUMSZDHQEKQXVUGUHGFITHPZACXNEHNWZCGVWEXBWDFMAIIBXAC");
    msg.data.assign("NOBDGMQLUBLCDLJZWGVQZHXVGWBKCFYPZOXCOUWNAYQXRSNEAKXFGMJEBIXTEAVRDRZJZUAIOLXEDIARCYLMNJYBSQEWZRCTHYGDTKTKIXLFSBNCQYXTPFOHNDWIFMRAPCCWIVIBOVFWLBPGERFZSSKONUIGFTPKMLXHVMOGEIWUSURYTEDPVYQMZMAGTMUZJCPEHKNRRTBUQKAJ");

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
    msg.setTimeStamp(0.43823588711753236);
    msg.setSource(48047U);
    msg.setSourceEntity(178U);
    msg.setDestination(37731U);
    msg.setDestinationEntity(242U);
    msg.frameid = 195U;
    const char tmp_msg_0[] = {50, 109, -91, 90, -115, 1, -53, 64, -34, 125, -36, 69, 20, -35, -25, 44, 124, 35, 56, -92, -50, 125, 105, 74, 82, -50, -26, -115, 113, 2, -117, -62, 76, 100, -58, 71, 31, -118, 6, -10, -123, 79, 47, -66, -105, 105, 70, 104, 55, -98, -127, -67, -96, -100, 86, -18, 98, -102, -101, -38, 35, -122, 97, 108, 99, -54, 33, -108, 118, -53, 104, 60, -17, -109, 7, 77, 17, -112, -28, -5, 93, -65, 87, -52, 89, -71, -101, 2, 4, -24, 120, -78, -92, -46, 21, 68, 114, -20, 95, 15, 18, -8, 123, -65, -57, 80, -18, 120, 108, -127, 34, 67, -11, 102, 15, 58, -59, -121, 118, -63, 74, -109, 3, -86, -4, 46, 9, -85, 114, 97, 2, 11, 48, 64, 35, -96, -13, 45, -39, 114, 96, -45, 26, -109, 54, -66, 100, -14, -100, 21, -79, -114, 102, 43, -61, -51, -112, 13, 92, 107, 125, 86, -104, 83, -36, 87, -51, -90, -105, -123, 115, -60, -77, 24, -17, -111, 3, 98, 115, -103, -105, -14, 57, -109, 125, -1, 24, 88, 55, 36, -45, -100, 95, 70, -10, 111, -13, -54, -118, -23, 61, 71, -4, 42, -128, 123, 109, 18, -11, -20, -98, 108, 76};
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
    msg.setTimeStamp(0.11606333544532266);
    msg.setSource(30284U);
    msg.setSourceEntity(118U);
    msg.setDestination(19821U);
    msg.setDestinationEntity(176U);
    msg.frameid = 78U;
    const char tmp_msg_0[] = {73, -48, -29, -63, 104, -90, 80, 88, -44, 61, -67, -41, 56, 59, -98, -91, -1, 67, 60, -62, 42, 11, 13, 91, 100, 11, 77, 107, 108, 63, -73, -25, -124, 28, 68, -4, 107, -122, 23, -44, 28, 120, 105, 105, -26, -95, 114, -37, -100, 18, 16, -52, 89, -26, -57, -76, 62, -20, -20, 45, 123, -31, 14, -65, 109, -114, 19, -22, -62, 90, 108, -76, 68, -54, -106, 79, -6, -52, -69, -21, 82, 24, -8, -60, 51, 116, -5, 122, -52};
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
    msg.setTimeStamp(0.639926332886824);
    msg.setSource(2248U);
    msg.setSourceEntity(68U);
    msg.setDestination(664U);
    msg.setDestinationEntity(144U);
    msg.frameid = 0U;
    const char tmp_msg_0[] = {-36, -32, 110, -23, 103, 78, -90, 48, 33, -48, -44, -89, 87, 72, 90, -103, -111, -58, -12, 116, -12, 74, 85, 6, 35, 55, 24, -37, -86, -78, 87, 51, -36, -18, -55, -2, 33, -95, 35, -22, -1, -25, 107, 9, 93, -22, 25, 89, 5, 9, 91, 9, -47, 15, -40, -93, 26, -112, -12, 2, -25, 32, -83, 70, -60, 79, -36, 30, 18, 18, -88, 2, 4, -41, -46, 80, 19, -15, 55, -114, -7, -27, -99, 27, 87, -40, 40, -106, 115, -67, 120, 14, -82, 57, -10, -110, -17, 0, 69, -123, 55, -56, -120, 91, 44, -18, -71, -54, -66, 86, 118, -26, -76, -104, 10, -91, 122, 3, -76, -23, -128, 72, 96, 105, 60, -80, 113, 82, 113, -93, 0, 11, 55, -20, -119, -15, -91, -70, -57, -85, 14, 101, 39, 55, -61, -77, -91, -114, 3, 8, -38, -10, -78, -109, 120, -91, -34, 85, -16, -33, 114, 13, -85, 55, 125, -102, -103, -94, 122, 35, 42, 20, -117, 87, 26, 115, -91, -85, 78, 110, 50, 70, 93, -93, 22, -42, -6, -111, -43, -85, -115, -48, 43, -27, 88, -110, -73, 73, 12, -111, 107, 106, 73, 108, 44, 25, 93, -38, -121, -81, 55, 23, 80, 46, 113, -106, 89, -48, -100, 65, -46, 20, -90, 59, -32, -88, 43, 59, -107, 86, 18, -111, -91, -101, -56, -80, -115, 40, 46, 60, 50, -12, 61, 63, -56};
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
    msg.setTimeStamp(0.9342888578797484);
    msg.setSource(31574U);
    msg.setSourceEntity(53U);
    msg.setDestination(39141U);
    msg.setDestinationEntity(196U);
    msg.fps = 251U;
    msg.quality = 216U;
    msg.reps = 18U;
    msg.tsize = 225U;

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
    msg.setTimeStamp(0.08850831624648936);
    msg.setSource(62731U);
    msg.setSourceEntity(100U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(196U);
    msg.fps = 69U;
    msg.quality = 187U;
    msg.reps = 199U;
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
    msg.setTimeStamp(0.33982153007387794);
    msg.setSource(21333U);
    msg.setSourceEntity(254U);
    msg.setDestination(51066U);
    msg.setDestinationEntity(244U);
    msg.fps = 60U;
    msg.quality = 2U;
    msg.reps = 196U;
    msg.tsize = 120U;

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
    msg.setTimeStamp(0.9861387679223841);
    msg.setSource(58903U);
    msg.setSourceEntity(39U);
    msg.setDestination(22336U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.7765883381113556;
    msg.lon = 0.9249458484335127;
    msg.depth = 108U;
    msg.speed = 0.8544231750155545;
    msg.psi = 0.3249711034241365;

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
    msg.setTimeStamp(0.3569194911005139);
    msg.setSource(42182U);
    msg.setSourceEntity(189U);
    msg.setDestination(18437U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.868849077568264;
    msg.lon = 0.5071976972147357;
    msg.depth = 59U;
    msg.speed = 0.8420348942534567;
    msg.psi = 0.8580838580663355;

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
    msg.setTimeStamp(0.24929421359119341);
    msg.setSource(14929U);
    msg.setSourceEntity(194U);
    msg.setDestination(22080U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.3864504717167667;
    msg.lon = 0.5214114106089087;
    msg.depth = 174U;
    msg.speed = 0.49925606980207715;
    msg.psi = 0.9223377547027086;

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
    msg.setTimeStamp(0.5574289711569653);
    msg.setSource(14553U);
    msg.setSourceEntity(32U);
    msg.setDestination(51807U);
    msg.setDestinationEntity(206U);
    msg.label.assign("SOYPGXBAJQSGEKTNJVEPTUYJGYINCXSFSNVHDUBGMEZORKLXAURFLDHKXXVFXCZZICUMBRHLGCOECULKIGOACZMQWNUWDZHXRPOTLMRMBIVAKQHPXSFRDPALYFWYSYGRTMTLNBDPJOHEWSVTEUCAEDBAKBXUVRFNWSPYQXDIFHASTJKQMZOZUTPLGVIGJRQZFIGOCYMWPWYDIDJVMNQZSNQIKBFTK");
    msg.lat = 0.4625176811341607;
    msg.lon = 0.8084347158994912;
    msg.z = 0.5686642489382736;
    msg.z_units = 124U;
    msg.cog = 0.784055735437929;
    msg.sog = 0.6451355711094171;

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
    msg.setTimeStamp(0.9554291399700836);
    msg.setSource(12428U);
    msg.setSourceEntity(14U);
    msg.setDestination(63710U);
    msg.setDestinationEntity(27U);
    msg.label.assign("EWSJINIROZBVPRNTVRXVYRAPOAYSJDSUSQKUKUCMYDEZKRALOPYLZXGZYOGSOBQCXMHYIMRFHJBCOMHFZMLQUNZLELIWGMDSVSTTIHZUTMFRNGJIIJFZCASCXIOWDOXSDGGLWAWVREWBTCPZJKTOYGCFIEVKFQDNQLYCBBPXQOQKAQJFBMDYJPZHAWFBYDPLDFQWEHUXVNGFNRHHNMTXUNSBXGDUWKMNAKAQJTPA");
    msg.lat = 0.33943442092695564;
    msg.lon = 0.42566424403738723;
    msg.z = 0.9623253037117928;
    msg.z_units = 157U;
    msg.cog = 0.2642779014576683;
    msg.sog = 0.27008898317449825;

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
    msg.setTimeStamp(0.26461639361488654);
    msg.setSource(19122U);
    msg.setSourceEntity(97U);
    msg.setDestination(28930U);
    msg.setDestinationEntity(113U);
    msg.label.assign("SOPPDWFKFJMSCWCBGQXKLIVWTSWRSTUFLBPAUGAEGBINDYJIGQQQXTMWHVVRNPZJVBJPYMAKKSCXTWTIRMVKLCAPFURRTJDJCARYZIMEUOHQHIUKYLHDUOGZPZCENHUVIYYQRDBSMORRFJXHNBVXZXYFLQEHH");
    msg.lat = 0.2832691218728759;
    msg.lon = 0.24007315994490463;
    msg.z = 0.96810037839639;
    msg.z_units = 84U;
    msg.cog = 0.10229748656006188;
    msg.sog = 0.5054128506483324;

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
    msg.setTimeStamp(0.9238079164346913);
    msg.setSource(13001U);
    msg.setSourceEntity(211U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(250U);
    msg.name.assign("VDYEUNUWYAYBLHLLTXXSNPFDGUGOBLSIIPVBILFWCQRFHPGVGXIRTOSHRZJJYSXEQBIRZJXHAAUFWBPPJQFIVHVFHXEOTZENIDZDAUJUPZKJVYANWYDTCLZVVCOHHRMRKEHJ");
    msg.value.assign("WVUKLTMZDOIAIQAEOINYPCNRYUBFCRDKUUZRVFVGHONKKTJSQZHTHQIYLDWXNNAGBPOCJWZKEKYVRHEEHXWGJSMWWTYUYPCNEMMVXOXHJF");

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
    msg.setTimeStamp(0.056074799428372235);
    msg.setSource(41123U);
    msg.setSourceEntity(127U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(126U);
    msg.name.assign("CWWYWIYUUSJNPGYRHDJEDJOVKEJBKHUHZDTORGWVYGAOUEZNOLMCWAACFCHZLQVMXGFMIZTFSQRAFRBBVRMXZBPBPATHDSXSXIKVQQHONUIAZ");
    msg.value.assign("THEWWLTEOMASNDINYSFRSWNECXSIMNXMOVTBHRGCSKNTKKIJZZYTCMXJXLKADXXTVEACGPOVEPLQFVGDPWWEQQJGYBULQUMWCROJHHZBWIVSLTUOAKGHYEQVVNEVBKOMFQWGZOHQBRBMIHCRNYHGRYVZZFOIBGQEGLAFDJJJACSDGP");

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
    msg.setTimeStamp(0.5935591833673247);
    msg.setSource(4217U);
    msg.setSourceEntity(93U);
    msg.setDestination(22302U);
    msg.setDestinationEntity(211U);
    msg.name.assign("OSBHMXTJLOGPHCEULTDRKHYGVCUYFVZEDZWIYEVVWTWFRLCQWSAXM");
    msg.value.assign("YQISQVGIYDERWHLVUXVCOYFCUISWWMAPWMPAVGFLEZBCNKBTTKCXYQHNIGHMOYPSEXS");

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
    msg.setTimeStamp(0.45954794540389754);
    msg.setSource(25666U);
    msg.setSourceEntity(33U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(63U);
    msg.name.assign("JLMFGEOHQQDSOSGAHYDPSQOIHWETMTMGHJTOWGYVEPZIXXSLGQXVNVXQIEGSJXPEUSPHCBIKBLKROSTQAWIBEWVKXOIDPQUBMDYLHHEVFADIHBOTUZRCUHRA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQZTEWOEIVBSJZJRUPVZNKESBRUIPWXYFUNGIKASIQVHCNLNICKXZZSOYQAKHCYYKFTYUUWSOGRMFOHKDCIQYOTOYRTPBJFJCJNVQAWXNGXRXHGAJNKJAUJZEVCDLAMRBMGSMHGRHNDVAVFYZPFWLHUIBRDFWTOIQOYJTXGEHPKUEPTCELVZLPDBDCEMQSTAA");
    tmp_msg_0.value.assign("OLQQJSGGEDSMXAGKPVTKZNQTDWTCYJTFBVWWMGTU");
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
    msg.setTimeStamp(0.31575763606395313);
    msg.setSource(38241U);
    msg.setSourceEntity(205U);
    msg.setDestination(41912U);
    msg.setDestinationEntity(67U);
    msg.name.assign("SWTNUAXGRHEPZLNCYYSKGBQGBXLPCXDOJHTZUPKZQRYIIAENPMMJVKEJKZHFDBWYAQQTJFHRLWRKEHYQIJRGNKHBEZQSCWYIPARYSQ");

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
    msg.setTimeStamp(0.9097635938423492);
    msg.setSource(11118U);
    msg.setSourceEntity(104U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(109U);
    msg.name.assign("XNLAHATWTQBIMLTHHGFZUUFFSTUUYPLNCCSF");

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
    msg.setTimeStamp(0.467497337738461);
    msg.setSource(13187U);
    msg.setSourceEntity(120U);
    msg.setDestination(3660U);
    msg.setDestinationEntity(157U);
    msg.name.assign("CFJKELKZTBSFEXROMIAOFDFHBLANNSZDQQQJYXNDKEVYDLZBCBWYLYAIOJVIGSQTROHIAYXPZHCQHWVXMFPMXEGQUWRRPMQLQOCCRLYWIZPEAXZHKGWKAMXXXWEHFTLMRHTRRGGDDJZGONYZPBVTPOVUCEC");
    msg.visibility.assign("PLOTGFBNIXPMXUEKUPVJCPUGJKSAEKORWNCSQVMFYDOCBCQOCBWNDAKYAPULVVZVOHSOYFFKTMGUVNAMCGYRSJUSXSMHCDSJIILNWWBNEXHT");
    msg.scope.assign("TNXIUNPRZOSBSLTYYNNXQAWJSPQAOGWBMXSTJQDRZNFUFPLHHWVSEBRQWMHYXYEEQXGDNXYWXBZMMPJCDTZMJYIPYOQCCACUHK");

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
    msg.setTimeStamp(0.5581468398078928);
    msg.setSource(56933U);
    msg.setSourceEntity(189U);
    msg.setDestination(21348U);
    msg.setDestinationEntity(47U);
    msg.name.assign("VJTUVLMWBXAUFPFCNSDNQCYJRZJMMNLMAHHKHGSDHSVRKXEWUASIJZOPYQGURARAPCAGDXODSFMKPSTFPGBOEQTNWUFFYFQHQYTJCVACYDOQEUIWMYTECHKGHIXPYWQTEQXJNIOJSNGVBMHLTYEGRZUFNDCKZPAUTISHEIUKVLPOLDIREJKZIYQFDCULONWDBAWXXTZBOWLV");
    msg.visibility.assign("JTBLEOWQSBYNWGAJZEROJVAPQPYZHVXNMERNFDGWBAWMOFLEAZRWVWZMEXNZUCDWHTYIHSBKPKOWUCFQJAQALEMFICDRXCGIHJTZKTHPYFGIXMZWGISMGKQUPLJDCOTKLVUNWRXUVLFHNUONDGHRSXLSZECZVYDADOEBBELBFUYKVUDTJKJYBKHSRXMKOQCAA");
    msg.scope.assign("IHYEZPDVTKXZWNOBVQRIVYVHDOFQHFPZYTKJQXYHIDXUXRKCXOSNHRTGANULYZNYWOIIUAFPLBHJPQPUHODBCUJBTDRSRKAYGCZGMCPWMAJZDWICSEXSSKGQFWELZSUTKEMFBKVX");

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
    msg.setTimeStamp(0.9526470299984341);
    msg.setSource(24221U);
    msg.setSourceEntity(11U);
    msg.setDestination(43588U);
    msg.setDestinationEntity(3U);
    msg.name.assign("OQUQMDZHOLUINJZVWLZETRMTYNEANKNSOXIWTMPHHLMRVMTJDNYFFGRSXXBLNVVSETEBQLJZAIERVIKDOATLFTUSKQAXPJIFZWKPUFAJGQXYSXKJVSUBVGPUVCKPCRYQWQIOCRDWJRWUTQNWFGGMJLISKBHPFZPFYMMJHNDGMSGMOXBHBGCYVXLILUDKSERWFOEOUESCZOKWYZVTHNPKXHBGHRPPADCC");
    msg.visibility.assign("SPYZYCCFGCRDWAIVCOTVGEPOHVPIPLYXQXLLVGRNAZXUNSHAVGXDURBGXI");
    msg.scope.assign("CWNVPXFFFZTKSSLTIQNWLZHXSUWDTPJMDBFVIXEAGWPYUOMCTHUAZWIJYOIYZVBMCFQDEHQEWAVPUSQPRLZ");

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
    msg.setTimeStamp(0.1984592168423005);
    msg.setSource(50125U);
    msg.setSourceEntity(132U);
    msg.setDestination(48953U);
    msg.setDestinationEntity(191U);
    msg.name.assign("PHVVPGRYIEDBTGSYMJZLGFORRHYQYHRWPPAUUGDNWFFIUKMAQWQUOI");

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
    msg.setTimeStamp(0.16936555659859276);
    msg.setSource(5714U);
    msg.setSourceEntity(177U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(244U);
    msg.name.assign("JWRQSCVCNGLBLBOXLRBSJZDPX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XLVQBTYISTPTLZDIHMKODZPIVINWSUSJYFBAERVHGMHOWMORVYPNWFGPLKZADKXNELFNXEXYARVHESVRHGXMDSNQPFCIMOJAEMKLUSKCAPOOZKXDPGMZSWEZWFQQRC");
    tmp_msg_0.value.assign("HRVXFTYHBPXXMBMVWKVNAZLXTBRUMYMPIEXSKFXFSLHSZIBWSKFYCRRUGBHKECLKBKFWVHOVLNXDFCLGATQMQWEPDUMNLZINBVAHRFDMNRGPUOARKNPTDSIUIRZGGPZGESQYEINUXJWUJRCCNVBSVFYTJMDTWRF");
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
    msg.setTimeStamp(0.5937622295836578);
    msg.setSource(55049U);
    msg.setSourceEntity(16U);
    msg.setDestination(23514U);
    msg.setDestinationEntity(117U);
    msg.name.assign("NZOKGRIITQNAQCROKBCJHMUMFMGPFUKTJHDFCIYASLKIDQOBSIBCFVDSGYUEYWDBYTJARYXIQGUMLWYCNCPORNFMGBQKEEAOHAZJISKTEMUEQTKLBVERTKZZNQPGEZJULDFVOSLJZJXDWPXQNDGLMIPMWJZVRNRPLHVOMNTRABOJXYCWZNABABWDKYL");

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
    msg.setTimeStamp(0.21867071039138142);
    msg.setSource(19589U);
    msg.setSourceEntity(120U);
    msg.setDestination(25722U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ZKBYHJJNVCGBTRGURVHZCKTPUILXYQCEZCKKYRCSHAUQJDNPOOMNUFYFIBODFWWSHANPXHJBTBQEAFNZVVRBYMWECMQKALURAUNMKHWCBMVGDREFLZIJDMCVKDHXFPIJTNLRPQVPPWRYYPADAVQVNZYOGPOUNEXXAQJIXISTTLCEOZRMEBFIMYHGILPDJCEMXQOSTWFKWIMDVEDOHJ");

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
    msg.setTimeStamp(0.17272704979036135);
    msg.setSource(36786U);
    msg.setSourceEntity(116U);
    msg.setDestination(36496U);
    msg.setDestinationEntity(217U);
    msg.name.assign("UOAHWDQSWJCGIHWC");

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
    msg.setTimeStamp(0.5870925011494746);
    msg.setSource(64326U);
    msg.setSourceEntity(167U);
    msg.setDestination(23578U);
    msg.setDestinationEntity(196U);
    msg.name.assign("FVMTUPPYWKRXTQHDUFBQRDJZMYVAFWUWSJEHJAFLFAAEKHWEOFKQAZNDQCDFXICHUNDLYXINTBCLXVJWMUQTRVCZQFAMOEXPZUOIRNIBGZILOCKCOYVZNTKXDYECLZQSMRI");

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
    msg.setTimeStamp(0.993667257573123);
    msg.setSource(8249U);
    msg.setSourceEntity(209U);
    msg.setDestination(3707U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1028815035U;

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
    msg.setTimeStamp(0.7105844192073897);
    msg.setSource(57765U);
    msg.setSourceEntity(35U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(136U);
    msg.timeout = 2380763719U;

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
    msg.setTimeStamp(0.3230981101180198);
    msg.setSource(27136U);
    msg.setSourceEntity(31U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(145U);
    msg.timeout = 1803831960U;

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
    msg.setTimeStamp(0.5807753706982532);
    msg.setSource(15090U);
    msg.setSourceEntity(224U);
    msg.setDestination(722U);
    msg.setDestinationEntity(10U);
    msg.sessid = 886863064U;

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
    msg.setTimeStamp(0.9149142660892923);
    msg.setSource(54324U);
    msg.setSourceEntity(234U);
    msg.setDestination(1289U);
    msg.setDestinationEntity(213U);
    msg.sessid = 245749983U;

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
    msg.setTimeStamp(0.6843619094963624);
    msg.setSource(62461U);
    msg.setSourceEntity(86U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(113U);
    msg.sessid = 2603349579U;

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
    msg.setTimeStamp(0.49678280865042046);
    msg.setSource(29239U);
    msg.setSourceEntity(198U);
    msg.setDestination(49118U);
    msg.setDestinationEntity(8U);
    msg.sessid = 2760035486U;
    msg.messages.assign("ULINWRBOCVGKWZGQBAIONNSMALXWEOEJMNAJOXDXVQUMTVZJCUBGQQQRLYLBDHPYNGOSXUQAGLN");

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
    msg.setTimeStamp(0.8559904306871813);
    msg.setSource(64783U);
    msg.setSourceEntity(90U);
    msg.setDestination(65432U);
    msg.setDestinationEntity(220U);
    msg.sessid = 2689182393U;
    msg.messages.assign("ROMXTKMETXOKKNNRMMFEZRGODLDSRLZHVIDWVCMETYDUTWKFAWBHAVCZQLNFIQKPMWTAQQQOVWHGNWRXXZRDZOGAQUHOQRYMEZULOLBJNCSCWSIEFGKYGBKPIZPUSTMVFDODDCHFCCHSINPNTNHTAIWLJWUOYGAKMCQBPAIHZJZGIPSYUIXELVYYGIOSPXXVAXWJQJVCLVUBRJPBFMRCGTKXNJANBEAFPUSSFTQPDHYZYY");

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
    msg.setTimeStamp(0.37406417159483607);
    msg.setSource(13902U);
    msg.setSourceEntity(194U);
    msg.setDestination(42935U);
    msg.setDestinationEntity(31U);
    msg.sessid = 1713855440U;
    msg.messages.assign("YNZUCXRXHIYZAFKEYKRPSUVZVUSUQDCAGQBMOWKUYOGVTPXUOJWEYYTZWFYFMUZZWVDXEMRYVLOMEBYLGB");

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
    msg.setTimeStamp(0.5708148717237276);
    msg.setSource(24119U);
    msg.setSourceEntity(234U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(147U);
    msg.sessid = 1562677644U;

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
    msg.setTimeStamp(0.25558738829343086);
    msg.setSource(44742U);
    msg.setSourceEntity(155U);
    msg.setDestination(11333U);
    msg.setDestinationEntity(157U);
    msg.sessid = 2804572644U;

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
    msg.setTimeStamp(0.9004549976246852);
    msg.setSource(49286U);
    msg.setSourceEntity(70U);
    msg.setDestination(19837U);
    msg.setDestinationEntity(243U);
    msg.sessid = 1105427532U;

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
    msg.setTimeStamp(0.03193788809009235);
    msg.setSource(30131U);
    msg.setSourceEntity(19U);
    msg.setDestination(53411U);
    msg.setDestinationEntity(200U);
    msg.sessid = 936725053U;
    msg.status = 254U;

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
    msg.setTimeStamp(0.3740298582865732);
    msg.setSource(65282U);
    msg.setSourceEntity(186U);
    msg.setDestination(20907U);
    msg.setDestinationEntity(240U);
    msg.sessid = 864878738U;
    msg.status = 37U;

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
    msg.setTimeStamp(0.8515462408185998);
    msg.setSource(8546U);
    msg.setSourceEntity(219U);
    msg.setDestination(25883U);
    msg.setDestinationEntity(155U);
    msg.sessid = 2509873759U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.6921429623060651);
    msg.setSource(63904U);
    msg.setSourceEntity(192U);
    msg.setDestination(24116U);
    msg.setDestinationEntity(60U);
    msg.name.assign("IUJDMNJGRSZICQVDSABCHWWRGKZOKNWFKLYVWXEQLZQPYJRGQLRLZCYMGKSQZIHJEPBFFBAANUANOXLKYHTJTVDVHMBTSRQDYNBSLTZFAQXZVXTFEIGVHLHGFGEKUYGZSRNWEQPFTHUSRIPTMJUVEJGZISDYHCWCEMYDXOBBINCMGTUOOZBDXHWSBLRPRLPTOKJQUOIEWFKREXFXJCCUYKDPMWXVOPOXABIPWNUAIDCPVVMTMADJELYSNANQKM");

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
    msg.setTimeStamp(0.10837186420607159);
    msg.setSource(30631U);
    msg.setSourceEntity(149U);
    msg.setDestination(38079U);
    msg.setDestinationEntity(23U);
    msg.name.assign("RJUXGXVTGFOASVNSPWSSNMAHZYSPWEWHBVSBEKPADPSKLXKJGOPOCEVBGQITFBDANEIHMFJFSUDJZLMLKINLTQJMCUXZZDHSLWCTOHQYTQAQIRZMGMXYFUEAMUEPOVMAWPDLGBNWRJQFGLVJFKZXJHOOERUTLHZKIUOZCUOXUYCFDTCWAXAKDYWRXVWINEGLBYZCCOPVNUBNAFNKHRIFQEMTPQYGRVLKCB");

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
    msg.setTimeStamp(0.5415091188311881);
    msg.setSource(27194U);
    msg.setSourceEntity(41U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(239U);
    msg.name.assign("GJDMOORDCOASHPJIHIVOEGWJWQJUTMSZWWZSIMZAITPVTFRQXJFWGIKYEHZIGTZNYBTWETOQFLJ");

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
    msg.setTimeStamp(0.9308621238691861);
    msg.setSource(1241U);
    msg.setSourceEntity(100U);
    msg.setDestination(45414U);
    msg.setDestinationEntity(84U);
    msg.name.assign("MMCINLBDNEJMSYGZKLVYEEAKALVDTDJZTGODQJOSXKMJWWYCNBUPPITHKBKCCSEXHSUEONITXTNRRMSFOWQCWWUDPSUATLLATZCQVRKDKFJAOZIGLHSQGGJOGZNNBLFPXJSEEGRZAUCFBFONPXYZEKIVFQRIDCFGWUYPRAHYORNLPUBBNLYDWUZSKIJIIMGYWWYHVPMBXXWXBBDEFQTQTJVCUHRMQOVHVAGXXQFTCOHH");

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
    msg.setTimeStamp(0.31259731407409863);
    msg.setSource(12867U);
    msg.setSourceEntity(13U);
    msg.setDestination(21264U);
    msg.setDestinationEntity(123U);
    msg.name.assign("ZTNIPVRGJKMTUASVPTBCWDTIGUKRDKHZJOFBZJNYCHQEJVPSPRBMNPNNYPXDWZSBLEFJZVBDJZFWIFKCDYJQWTXRQHSRROASYSTSQCAFRFTJTHNWBZKOHRYHKLARLQGMDHCMKQWUDKVPYOTHACZMVCQOMXFXSFMLIWHMEEYOENUPLUIQCXMLGUQXBCOIWVCRAPAMAEHG");

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
    msg.setTimeStamp(0.5329910722692542);
    msg.setSource(40763U);
    msg.setSourceEntity(7U);
    msg.setDestination(50517U);
    msg.setDestinationEntity(43U);
    msg.name.assign("XHOCWEBACWHDAIUWJORLIQPMUXABRGFLRTDBSIFWQTEBGQIMVYHMVFCSMKTSZXPHRDLNAEVO");

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
    msg.setTimeStamp(0.4245589728013255);
    msg.setSource(51085U);
    msg.setSourceEntity(168U);
    msg.setDestination(29714U);
    msg.setDestinationEntity(175U);
    msg.type = 101U;
    msg.error.assign("BITJGVVPLY");

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
    msg.setTimeStamp(0.28028755508679504);
    msg.setSource(50034U);
    msg.setSourceEntity(37U);
    msg.setDestination(24410U);
    msg.setDestinationEntity(232U);
    msg.type = 126U;
    msg.error.assign("PPNOCFRSZERCVVUPVDGPWQNDWMCTDMFGHIACPWHHWHAUUCWRRIUNFEQWSAZFHTLNIAEXFNEIZJKJZZOTETAQIOFUOVVMMJDYXBWBGXRMHEQRSLYIPDUXBXUQYHBKNMUB");

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
    msg.setTimeStamp(0.1888712483906284);
    msg.setSource(28095U);
    msg.setSourceEntity(39U);
    msg.setDestination(19481U);
    msg.setDestinationEntity(248U);
    msg.type = 122U;
    msg.error.assign("MTLQBBRVNEUNTJSHOFINENGTGSEUGKRHZHQENJUJNHFZUVFMFWYAFXLPMPKJWGGTDXSSUJLPEZVSVZWTKYPYUQWNHFVAMTLJ");

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
    msg.setTimeStamp(0.7614504202050701);
    msg.setSource(42553U);
    msg.setSourceEntity(212U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(2U);
    msg.seq = 56233U;
    msg.sys_dst.assign("JXWBYFOHELIWOIQOEUDZZQMXHEWFTP");
    msg.flags = 228U;
    const char tmp_msg_0[] = {-70, 82, 107, 95, 42, 45, -89, 123, 122, 23, -17, -62, 46, 83, -30, -128, 50, -31, 71, -56, -81, -44, 88, -100, -43, -42, -125, 78, 66, 56, 4, 85, -36, 47, -35, -50, -7, 19, -43, 100, -110, -82, -120, 0, -77, 79, 119, -104, 122, 94, -52, 91, 40, 28, 5, -28, -38, 75, -108, 113, -59, 80, -75, 46, 5, 123, -67, -115, -48, -23, 107, -119, 28, -14, 118, -46, -15, -76, -23, -36, -40, 125, 22, 82, -27, -123, 1, -124, -17, -76, -126, 26, -18, 55, 26, 12, -32, -119, 97, 87, -36, 93, 50, 72, 103, -42, 18, -117, -32, -18, -48, -8, 51, 9, -55, -26, 21, -24, 12, -83, 103, 18, -49, -81, 11};
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
    msg.setTimeStamp(0.6767946249097625);
    msg.setSource(65244U);
    msg.setSourceEntity(27U);
    msg.setDestination(32835U);
    msg.setDestinationEntity(199U);
    msg.seq = 32119U;
    msg.sys_dst.assign("IPGAAKLNBZLKOMAHPWBJHMAISEPJBIXREERXGISIXHDNAORN");
    msg.flags = 115U;
    const char tmp_msg_0[] = {63, -87, 21, -110, -107, 67, 25, -7, -22, 40, -7, 17, 38, 97, -105, -19, -42, -73, 93, -104, -13, 15, -124, 89, -73, 25, 103, 12, -113, -86, -128, 13, -86, -85, -105, -92, 76, 11, 64, -108, -57, -30, 60, -116, -21, 9, -124, 18, 88, 74, 80, 19, -59, -122, -8, 110, -45, -6, 60, -97, 43, -37, -24, -66, -45, -56, 121, 123, 101, 43, -34, -114, 82, 72, -120, 91, -67, 52, 108, 99, -36, 122, -49, -85, 15, -38, 34};
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
    msg.setTimeStamp(0.7688995575173869);
    msg.setSource(51438U);
    msg.setSourceEntity(166U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(220U);
    msg.seq = 45354U;
    msg.sys_dst.assign("GVQBRQHVPOTWUUMNQOIKGGPBGWKLULFADAIDRYCWHCBL");
    msg.flags = 230U;
    const char tmp_msg_0[] = {71, -20, -60, -88, -57, 0, 66, 80, -101, -85, -20, 14, -95, -39, -62, 117, -33, -51, -57, 18, -79, -3, 112, -81, 114, 111, -5, 60, 3, 124, -28, -22, 7, -13, -117, 15, 69, 32, -109, 39, 114, 94, -12, -45, 32, -33, 66, 6, 54, 4, -128, -26, 26, 20, 123, -31, 92, -104, 92, -122, -52, -102, 28, -128, 123, -58, 49, -81, -59, -96, 34, 7, 53, 13, -41, 55, -76, -8, 57, -20, -14, 12, -93, 88, -72, -12, 37, -2, 89, 3, -78, 52, -21, -56, 68, -88, 126, -86, -104, -94, 110, 14, 70, -105, -76, 126, 16, 75, 52, 103, 13, 54, -94, 52, 62, 125, 51, 76, 30, 73, -12, -88, 71, -89, -15, -82, 116, -21, -40, 106, -88, 51, 91, 9, -2, 74, -53, -6, 40, 27, -22, 36, -22, 16, 66, 68, 118, -85, 63, 9, -85, 47, -54, 24, 12, 50, -77, -27, -71, 11, 25, -25};
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
    msg.setTimeStamp(0.3032698310305566);
    msg.setSource(33807U);
    msg.setSourceEntity(121U);
    msg.setDestination(26219U);
    msg.setDestinationEntity(164U);
    msg.sys_src.assign("KBZRRPVOSGWNLYJWAKMDVXKOVOWUQZZFKNIGSZJRHCREVXBFWBMXZBXZEUHQOTWDKNFXJCMEXHDMYOSLWLCXSFRPKRJBCBTAQMAIXLODSPARPJMSDVTURAEMCQHQIIONSFTVIAFGJOQHUGOQUASGYLPZLFTG");
    msg.sys_dst.assign("ZMJHPBSLTBWAJQCEOJIEEOXTLENIMCSBVOLSDSAJYNCRWHZOCRVTDVKCPNPEMSAODGYTWQRGIBXZZCNFKRJEYIAAFJGETLHOHSMKYJSQZCKZRSPQOLG");
    msg.flags = 18U;
    const char tmp_msg_0[] = {-112, 31, -106, 114, -125, -118, 6, 61, -26, -10, -98, -55, -30, -26, -120, -64, 87, 66, 92, -71, 100, 104, -106, 61, 32, 58, -31, -65, 52, 107, -103, 70, -96, 86, -12, -16, 105, -97, 57, -106, -107, -53, 35, 65, -22, -61, -23, 50, 89, -54, -9, 103, -74, 57, -76, -24, -108, -93, 76, -99, -6, 6, 126, -121, -5, 15, -13, 25, -94, -107, 34, -23, 87, -34, 114, -33, 38, 82, 74, 123, 15, 37, 36, 76, 89, -122, -15, 113, 42, -90, 89, 121, -11, 8, -20, -35, -95, -60, -37, -23, -69};
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
    msg.setTimeStamp(0.3772371451194044);
    msg.setSource(47516U);
    msg.setSourceEntity(135U);
    msg.setDestination(36301U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("BXSZDFQIDXWPGAOZGMILVWJQCNXNIUOMDXSRVGJNTRWVIXBOAESIZTVXNTAYORJDNHHFWZSRIMHZPBWUTNDMQANBHXIVOFOBBHDSAKKFAGTQTLIJGVTVJCMZKEKQQKAPJA");
    msg.sys_dst.assign("HICRXPVKPVBNBVRUMROMRIQYHTMCRNUIHNJRFBZBHUPPPPOSCORQESYNLSFUQPRYDNHWCRXOTMFYFFLJABLOVCCGUEQDMDSUBFXWOGGNOEUIGKKLELDZAMYKUQYTWTDQTZJJFXMCOUEELTWJVGXSEPHWYPWBLZOIAINKYD");
    msg.flags = 215U;
    const char tmp_msg_0[] = {89, 122, 92, -32, 55, -4, 86, -121, 54, 112, 108, 1, 47, 114, 87, 61, 105, -20, 0, 49, -44, -67, 78, -34, -120, -19, -62, 103, 78, 124, 91, -29, 18, -97, -121, 30, -1, -19, 18, 48, 96, 58, -91, 6, 2, -72, 83, 80, 62, -125, -11, 124, 42, 107, 11, -96};
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
    msg.setTimeStamp(0.27744778080357346);
    msg.setSource(2081U);
    msg.setSourceEntity(90U);
    msg.setDestination(9838U);
    msg.setDestinationEntity(200U);
    msg.sys_src.assign("FWBOCIAFVPKPFDVVQHD");
    msg.sys_dst.assign("XNTZGNTZQIWBNQDTLZGKIEXQOPJYSCXAVCBJPHWHMDJPIVFCIHSAHJFHHUGVWSXSMOWRIP");
    msg.flags = 118U;
    const char tmp_msg_0[] = {39, -7, 16, 28, 84, 41, 122, -99, -104, 87, 57, -20, 11, 89, -76, 122, -121, 23, 10, -23, 114, 42, 40, 90, 126, 34, 88, 126, 9, -56, -126, 126, 26, -61, -2, -98, 21, 38, -88, 113, 84, -122, 18, -96, -106, 104, -55, -73, 60, -26, -1, -128, -43, 43, -56, -74, -91, 125, -80, -26, 68, 120, -41, -65, -76, 66, 112, 52, -122, 104, -74, -25, 15, 110, 85, 16, -51, 50, 32, -83, 13, 125, 67, -123, 69, -109, -80, 16, -125, -52, 48, 12, 68, 19, 73, -63, 38, -6, -125, 80, -42, -91, -21, -108, -100, 5, 120, -39, -64, -80, 79, -44, 45, 73, -85, -26, 30, -117, 116, -122, -96, -66, 9, -127, -13, -62, -101, -85, -14, -94, -31, 120, -54, -90, -122, -110, 53, 8, 124, 85, 82, 96, 70, -49, 85, 26, -58, 72, 79, 72, -29, -65, 12, 53, -104, 93, -7, 105, -13, 78, -3, 118, -55, 31, -58, -18, -97, -90, -80, 102, 78, 50, 71, 9, 4, -21, -39, 107, 59, 1, 70, -86, -117, 94, -100, -50, -23, -91, 37, -86, 22, 91, -77, 9, -95};
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
    msg.setTimeStamp(0.5485636541443423);
    msg.setSource(29122U);
    msg.setSourceEntity(100U);
    msg.setDestination(63887U);
    msg.setDestinationEntity(179U);
    msg.seq = 35488U;
    msg.value = 21U;
    msg.error.assign("SHWSCXVSIRTSFUAOFOMVNOMCJUMMJDQVQCIGQZXTCSEIVPADFOYNUFMZGEIUPHBGAEYDJHTIINOYJAKSHNVPKUZKPDFSRYWPEDGGMNMQUCUUGXIXZBIVXOEZLFVJWHUHNCLYBEYNRBVAGMZLLVFLDBJRKKOJLIAWKHQPDXMEQHQRCOTRAGFGTYKPJEVXSNXWZRPTKLECKGIJNKATCFBHWJERXBXWATBRZZPPSZWTYYCQW");

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
    msg.setTimeStamp(0.17617484808445238);
    msg.setSource(56218U);
    msg.setSourceEntity(209U);
    msg.setDestination(31175U);
    msg.setDestinationEntity(234U);
    msg.seq = 19581U;
    msg.value = 170U;
    msg.error.assign("VCYRGBNSJSAWWGZDCHVWICUPYMWYGBKZAZIKXBILGIXHVDFEHVCWAZMTQLWPOOUQGXFTQRUJAOSSDRMZEICHNC");

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
    msg.setTimeStamp(0.6715349026173446);
    msg.setSource(11886U);
    msg.setSourceEntity(133U);
    msg.setDestination(55008U);
    msg.setDestinationEntity(16U);
    msg.seq = 23277U;
    msg.value = 208U;
    msg.error.assign("BHYBFDFITSSUAGAGVWLXLNTEYCKLYAUQDVAPFASXZXRRUMPNJAFWNTRXKQXTEODSYSHEMCDZGLIUHZEQKNNYEMJTZKPJMJXKCBYZBPWVSOHHYBCRIODINYIAITOWFDIPPMFNQDJRENVDQLJKHEOPFZTZRMALGMEQQWKGSEEQBGKGORNPXCMUJUBUGPJLF");

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
    msg.setTimeStamp(0.15498860155009775);
    msg.setSource(33859U);
    msg.setSourceEntity(19U);
    msg.setDestination(30637U);
    msg.setDestinationEntity(202U);
    msg.seq = 59706U;
    msg.sys.assign("FZSWAZTGZQEPBCYOUOSHEAIVXCFNOGT");
    msg.value = 0.1915922854278348;

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
    msg.setTimeStamp(0.38356407952653115);
    msg.setSource(11504U);
    msg.setSourceEntity(112U);
    msg.setDestination(51913U);
    msg.setDestinationEntity(10U);
    msg.seq = 39649U;
    msg.sys.assign("GYTEWWYRALWIGTERNNZXFWWHJQYUGYSTXIOPUMPWYEMMUUNXPJTV");
    msg.value = 0.2438840318309219;

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
    msg.setTimeStamp(0.5449678669254205);
    msg.setSource(13101U);
    msg.setSourceEntity(64U);
    msg.setDestination(43772U);
    msg.setDestinationEntity(222U);
    msg.seq = 952U;
    msg.sys.assign("APHIQVCVENNHLPDAODPUCJESKIDMIBTNUOCLAIDZITSERNBLYXWPMYGSTJHUOLHIARVGOJYSMZOFBODHQYFBUWMRKXCUWMIZFEZNYASXTQONKOCOBPCRXYKWGEJQDRFHRVRBQVWJFXXKUEWKKNJWXAFCMGECGDMQIQ");
    msg.value = 0.8506153664531071;

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
    msg.setTimeStamp(0.8906287112935318);
    msg.setSource(20964U);
    msg.setSourceEntity(137U);
    msg.setDestination(20986U);
    msg.setDestinationEntity(251U);
    msg.action = 139U;
    msg.longain = 0.5902827298130838;
    msg.latgain = 0.2205463951468991;
    msg.bondthick = 3099169478U;
    msg.leadgain = 0.8203669945481283;
    msg.deconflgain = 0.8810176013387129;

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
    msg.setTimeStamp(0.6271571509378687);
    msg.setSource(6988U);
    msg.setSourceEntity(117U);
    msg.setDestination(24165U);
    msg.setDestinationEntity(149U);
    msg.action = 60U;
    msg.longain = 0.7467864429249383;
    msg.latgain = 0.9506045646145049;
    msg.bondthick = 742007044U;
    msg.leadgain = 0.5098578347047589;
    msg.deconflgain = 0.3752425064331163;

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
    msg.setTimeStamp(0.5797447882881596);
    msg.setSource(19291U);
    msg.setSourceEntity(57U);
    msg.setDestination(28250U);
    msg.setDestinationEntity(5U);
    msg.action = 252U;
    msg.longain = 0.2447893214939605;
    msg.latgain = 0.2616477713936832;
    msg.bondthick = 890317205U;
    msg.leadgain = 0.20681385067363833;
    msg.deconflgain = 0.42836225006734563;

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
    msg.setTimeStamp(0.8748162476613796);
    msg.setSource(46431U);
    msg.setSourceEntity(59U);
    msg.setDestination(63084U);
    msg.setDestinationEntity(173U);
    msg.err_mean = 0.7911928892157156;
    msg.dist_min_abs = 0.7668027027660561;
    msg.dist_min_mean = 0.06056257658010045;

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
    msg.setTimeStamp(0.45930850025851067);
    msg.setSource(61456U);
    msg.setSourceEntity(103U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(186U);
    msg.err_mean = 0.17249597304242636;
    msg.dist_min_abs = 0.7253022980392096;
    msg.dist_min_mean = 0.6922211996459776;

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
    msg.setTimeStamp(0.7712060137679326);
    msg.setSource(10664U);
    msg.setSourceEntity(157U);
    msg.setDestination(37439U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.7768056114899415;
    msg.dist_min_abs = 0.9610453098408247;
    msg.dist_min_mean = 0.37545969160281034;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.9435778913953351);
    msg.setSource(27737U);
    msg.setSourceEntity(178U);
    msg.setDestination(1636U);
    msg.setDestinationEntity(92U);
    msg.uid = 50U;
    msg.frag_number = 33U;
    msg.num_frags = 55U;
    const char tmp_msg_0[] = {-40, 14, 73, 25, 37, -103, 41, -66, -58, -90, 42, 73, -21, 8, 112, 23, -53, 58, -96, -17, -10, -120, -36, 69, -1, -38, 64, 4, 56, 0, -42, 94, 107, 25, -6, 50, -40, -110, -89, 56, 21, -31, 35, -77, 19, 40, 102, 99, 63, 74, 13, 41, 38, -17, -55, 111, -125, -80, -67, -104, 33, -11, -1, 86, -95, -86, 71, 26, 84, 31, -31, -18, -49, -25, 58, -85, 47, 53, 29, -125, 120, -100, -28, -40, 29, -46, -119, -60, -15, 31, -126, 88, 119, -63, 24, 62, -48, -18, -88, -29, 11, -116, -111, -25, -11, 41, -123, -68, -106, 113, -68, 16, -16, -91, -123, 103, -34, 18, -3, -15, 1, 35, -110, -71, 76, 116, 113, 19, -76, 29, -9, 46, -46, 51, -84, -37, -69, 8, -95, -84, 51, -1, -39, -108, -97, -120, -21, 124, 39, -109, -63, 97, -124, -110, -71, -48, 42, 62, -68, 72, 6, -102, 100, 0};
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
    msg.setTimeStamp(0.4292774497654652);
    msg.setSource(9552U);
    msg.setSourceEntity(173U);
    msg.setDestination(47603U);
    msg.setDestinationEntity(5U);
    msg.uid = 183U;
    msg.frag_number = 179U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {57, 77, 70, -51, 84, 108, 55, -55, -4, -88, -74, -125, 125, 91, -6, 53, 119, 126, -88, 42, 50, -58, -22, -28, 84, -18, 101, 0, -19, -93, 88, -9, 17, -21, -116, 23, 75, -116, 54, 112, 15, 27, -116, 20, 112, -119, 44, -10, -94, -58, 53, -65, 24, 103, 46, -34, 41, 80, 64, 100, 125, -5, 0, 14, 125, -84, -93, 97, -74, 63, -103, -14, -92, -115, -35, 5, -4, 29, -127, -71, -17, -3, -29, -52, 59, 53, -83, -24, 110, -76, -97, -25, -75, -55, 10, -21, -57, -60, 8, 55, 114, 59, -52, -74, -78, -6, -3, -57, 83, 73, -22, -67, 75, 50, 102, 106, 78, -32, -107, 31, -32, 34, 26, -53, -33, -56, 22, 47, 125, 124, 44, 23, 38, 126, 58, 34, 23, -94, 82, 104, -63, -10, -33, 78, -122, -40, 46, 50, 48, 58, -84, -24, -85, 43, -79, 111, -72, -13, 113, -23, -43, -49, -11, 99, -109, -74, 87, 99, -21, 84, 11, -20, -108, -50, 14, 72, -107, 110, 13, -69, 20, -102, -46, -47, -66, -82, -33, -68, 61, 0, 115, 72, 7, -101, -51, -116, 27, -107, -117, 13, -27, 1, -91, 64, 110, -11, -57, 72, -85, -50, -120, -27, 85, 41, -74, 35, -109, -27, -46, 68};
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
    msg.setTimeStamp(0.09325532072661635);
    msg.setSource(40185U);
    msg.setSourceEntity(28U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(146U);
    msg.uid = 235U;
    msg.frag_number = 184U;
    msg.num_frags = 172U;
    const char tmp_msg_0[] = {104, 56, -119, -102, 27, 99, -32, 12, -17, -43, 12, 68, 74, -101, 82, -109, 3, -53, -22, -58, 19, -121, -111, 109, -34, -17, -8, 88, 58, -11, 21, -109, -31, 96, 109, -57, -27, 70, -79, 79, -61, -107, 113, -48, -100, -84, 79, 74, 48, 91, -64, -80, -65, 88, 3, -108, 26, -108, 33, -89, 95, 5, -83, 25, 126, -122, 0, 121, 30, 70, -4, -54, -29, 84, -45, -88, 84, 60, -108, 22, -23, -78, -75, 50, 15, -68, 5, -27, -12, 77, 86, -29, 86, 108, 114, 90, -75, -109, 25, 124, 9, 22, -21, -101, 67, 45, 118, 92, 33, -44, -81, 90, -24, 89, 42, -91, -122, 110, -58, 42, 26, 73, -43, 26, 59, -20, 104, 121, -43, -48, -53, -111, 35, -35, -91, -80, 92, 55, -32, 3, -5, 30, -95, -60, -69, 111, 23, 126, 106, -115, 104, -32, 111, -1, 7, -96, -122, 56, -63, 85, 125, -81, -3, 64, -60, 103, 68, 1, 65, 60, 6, -32, -111, -17, -107, 56, -3, 122, -39, -67, 61, 17, 14, 122, -93, 99, -34, 26, 77, 31, -77, 48, -34, 65, 82, -103, -88, -99, 48, 41, 77, 37, 37, 28, -121};
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
    msg.setTimeStamp(0.5799697124156198);
    msg.setSource(17640U);
    msg.setSourceEntity(53U);
    msg.setDestination(24765U);
    msg.setDestinationEntity(64U);
    msg.content_type.assign("YOEBEXRNSOXBRHUTJUZRHKA");
    const char tmp_msg_0[] = {58, -29, 72, 75, 57, -45, 27, -69, 74, -4, -34, -23, 71, -126, 80, -105, 27, 77, 41, 12, 89, 15, -52, 44, -10, -96, -64, 102, -27, 53, -115, 109, -48, -13, -126, 24, 61, -114, 23, 16, 20, -123, 95, -109, -11, 55, -72, 19, -97, 28, 102, 74, -42, 104, -75, 35, 103, -89, -4, -25, -95, 54, 124, 75, -111, 72, 104, -57, -84, -47, 58, 21, -33, 4, -87, -8, 93, 64, 64, 36, -12, 12, -81, -111, 4, 45, -55, -65, 122, -12, -124, -94, 48, 112, -35, -82, -6, -25, -119, -80, -42, -19, -74, -90, 83, 93};
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
    msg.setTimeStamp(0.4252930075539457);
    msg.setSource(14513U);
    msg.setSourceEntity(1U);
    msg.setDestination(16492U);
    msg.setDestinationEntity(246U);
    msg.content_type.assign("PHIZZHRAKFAEYXTONLWAWQEZXPUKLSUFDNRNQYLGVUUICKXWQ");
    const char tmp_msg_0[] = {69, -66, 67, 99, 41, -5, 39, 12, -124, 87, -13, -13, 75, -114, 74, -89, 116, -46, -125, 27, 90, 75, -58, 2, 121, -17, -25, -24, -112, 118, 56, 54, -22, -94, -53, 81, -1, -105, -77, -73, -34, 45, 53, -48, -21, 121, 84, -39, 108, -44, 0, 3, 41, -121, 52, -10, 40, -126, 7, -23, -109, 30, -56, 78, 119, 39, -120, -121, -20, -9, 93, -77, -69, 55, -49, -60, -68, -7, -118, -19, 87, -82, 124, -59, 76, 57, -25, -3, 4, -61, 106, -28, -90, 0, -77, 94, -101, -68, 114, 86, 121, 24, 94, 34, -128, 77, -88, 79, 124, -67, -35, -108, -32, -39, 27, -1, 38, 80, -59, 23, 117, 51, 28, -9, -93, 104, -57, -30, -58, -120, 50, 35, -72, 57, 103, 45, -92, -76, -59, 12, 1, -73, -92, 43, 10, 52, -42, 15, 68, -74, -126, 104, -89, -85, 73, 40, 91, -61, -85, 60, 30, -107, 16, -20, 66, -108, 67, 94, -61, -17, 46, -67, 121, 76, -89, -7, -50, 68, -54, -66, -46, -121, -25, 57, 40, 39, -80, 3, -37, 113, 126, -67, -20, -47, -38, 88, -69, -88, -58, 4, -119, -65, -44, -58, 108, 23, -124, 37, 65, 54, 2, -36, -119, 120, -56, 14};
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
    msg.setTimeStamp(0.29082860866806326);
    msg.setSource(15454U);
    msg.setSourceEntity(18U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("MAXVHAUBUQEWXCEJFPINATGLMQXSNAJXPKYGVUMEGZNTIWCRBXDQTMPXWBKODWTOLEKYBISQRBCERPSNZSKEDUVJWGPZNBVQMYGIIYIAOHBWILVZYLSSCTUS");
    const char tmp_msg_0[] = {-124, 124, -104, -34, -64, 6, -98, 114, -74, 40, -84, 122, 55, -127, 40, -19, -11, 100, -98, 64, -30, 50, -11, -9, -23, -87, -95, -46, 121, 36, -13, -99, 30, -69, -52, 124, 66, -74, -123, -19, -63, 80, -63, -58, -59, 56, -33, 68, 48, 126, -13, -109, -26, -79, 14, -27, -86, -121, -3, -2, -57, 80, 126, -12, -116, 36, -97, 74, 103, 96, -119, -9, -7, -87, -86, -104, -80, -51, -38, 105, -17, 76, 124, -51, -18, -113, 114, 58, -96, 70, 76, -66, -34, 114, 122, -36, -101, -12, 29, 50, 24, 108, -56, -16, -31, -116, -115, -58, 111, -40, 84, -32, 62, 1, 122, -108, -26, 17, 78, 82, -100, 36, -68, 41, -28, -128, 40, 1, 111, -58, 69, 113, 37, -126, 102, -105, 25, -43, -105, -49, -123, 88, 78, -39, 0, -24, 10, 106, 85, 55, 1, 56, 14, -30, -26, -61, 3, 16, -53, -123, 113, -120, 123, 62, -25, -93, 64, 97, 6, -114, -113, 102, -42, -53, -45, 52, 72, -79, -45, 88, -105, 89, 67, -99, -61, 26, -82, -40, 110, 121, 54, -40, -60, -32, 104, -92, -59, -34, -46};
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
    msg.setTimeStamp(0.930040865150456);
    msg.setSource(13928U);
    msg.setSourceEntity(156U);
    msg.setDestination(52463U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.9968731410467779);
    msg.setSource(22858U);
    msg.setSourceEntity(180U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.2999563541566017);
    msg.setSource(9442U);
    msg.setSourceEntity(220U);
    msg.setDestination(48878U);
    msg.setDestinationEntity(163U);

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

  return test.getReturnValue();
}
