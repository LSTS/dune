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
// IMC XML MD5: e7a1328820ae78fe4fd25273a66f1a93                            *
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
    msg.setTimeStamp(0.7298592072854411);
    msg.setSource(16716U);
    msg.setSourceEntity(239U);
    msg.setDestination(54852U);
    msg.setDestinationEntity(87U);
    msg.state = 224U;
    msg.flags = 64U;
    msg.description.assign("URNJBPQVJXYPCMOVTEFTIUDULBZQIQQRFPLCQJKXQMDMAYWOQVFRGOHRJKXKZVLISFXXFGELWTCPLCBNGKWSHJUEZHZHHUCEBYWVPAMWSXIPSDZAFSKYHWEEXOINHLUDERVSFAKYALQFJGBAVRNSBGMIKYHMJWUYXTQMZNVHDQGMSIWSBAZFTTOEGAPIZCCDLBPIZRJDAGJGCOSBALBWNRUYYOYKRDZURPOOXNETNITKOCDEGMXCNNU");

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
    msg.setTimeStamp(0.3185556989450983);
    msg.setSource(15138U);
    msg.setSourceEntity(217U);
    msg.setDestination(4682U);
    msg.setDestinationEntity(90U);
    msg.state = 77U;
    msg.flags = 45U;
    msg.description.assign("TSDAWBSCEDUADIVIHWAJKJJGSXAEYFWVHDPBVGBQJQUMCSJLFJOGXIYMWLELAXBQNMDVFGZOAKPSECTZWVAFUWJRHYZFHQIPPKBUYMOFIJEBDVHHWJTUILRIEKFTOWMGQXZQKNDCFZEMUTAHUIMTTSRLVZQDPLZBPNGTYWNLGQ");

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
    msg.setTimeStamp(0.8140483038200678);
    msg.setSource(22419U);
    msg.setSourceEntity(31U);
    msg.setDestination(9303U);
    msg.setDestinationEntity(190U);
    msg.state = 136U;
    msg.flags = 148U;
    msg.description.assign("YJUBTTXNUDGHCZCVEJAMISOIKSDAXMQQHGYBIBCNJYMLTKXRJSTZZRWJQLSKKOCZIDTFSHJBCNNAKQPRNGNJLVZVKNYWPJLDWWPTROQHLHUFEPOHFLHAOAEQQTVMAMPSWQVHSYUVDSUGPARFEVOXDRYDBJMHFZGFVDLPEEHGYEFIIKTBBXZBGUBFDNPMUJLOEVBLCXWACDUGYZSNCISRXNXCKZURFOKUWRXLOTMRZEOQIYGWPTAFWEYPICGAI");

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
    msg.setTimeStamp(0.4760733444221916);
    msg.setSource(52379U);
    msg.setSourceEntity(143U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.7479845603983319);
    msg.setSource(56044U);
    msg.setSourceEntity(58U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.9046756622560418);
    msg.setSource(22642U);
    msg.setSourceEntity(15U);
    msg.setDestination(17172U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.9480270589043479);
    msg.setSource(20577U);
    msg.setSourceEntity(230U);
    msg.setDestination(3194U);
    msg.setDestinationEntity(137U);
    msg.id = 126U;
    msg.label.assign("AIUPQRAEUJYFMPRVNOCOPQQFGTQBXIKHYAWFULVGWGQZVGXKAAKJWRPMTTEQCIBDJRWETZZBBLPZBHFFKMLZOAHDTUSBNPPTBNXMVSEGEAOXRSDNYFYHUVHJAUMCLDYKACZD");
    msg.component.assign("QFEJXTLQQEVUKKVLNVOLKSRTZNHLSJAGSBWTZOAICCXBRYAGGVASDCEIWBMXKJ");
    msg.act_time = 64239U;
    msg.deact_time = 9778U;

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
    msg.setTimeStamp(0.7020979190715938);
    msg.setSource(56289U);
    msg.setSourceEntity(150U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(126U);
    msg.id = 77U;
    msg.label.assign("RIJAVAAPVFVLIRNDXGXGCFBTRRTCCHFINGOMCLFZRJBWJPXIRBBJUQJITWBKYXSUPGNWMDBDSAHFHKYYJGROHPAYZRBWNDGAUIQQAFMUIKXQWBLUVEUSXXPHSZDZTYKHPHVEEFLQMUSOQCSKUXGLSHMVREDBKZJHQNOYKWMJEJCADVXWLCMOTOEQDDODYSSYEWIZCC");
    msg.component.assign("UZNQRCECJBRMALAHCDRYPSVTWASQTQMGOKLWDZTJEUJRIXUYEYQDMKALOWKFYPXBNEISFDZYFUWZONYRIWZNNAMUMPPGYYFROEXEHMFTXTRRUHNVHUDGKPVHXNDLAXIBDYGZJBISYGMBPEOVWVHNDBLXFOEGICIKVDDSSWJBPGPJMWQZJWGCLKSQTFJTACFVXQNUFPHTARNIUICZO");
    msg.act_time = 62672U;
    msg.deact_time = 57796U;

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
    msg.setTimeStamp(0.291240068129222);
    msg.setSource(19318U);
    msg.setSourceEntity(145U);
    msg.setDestination(28247U);
    msg.setDestinationEntity(63U);
    msg.id = 142U;
    msg.label.assign("LXUIXSOXBIPMSGDLDYVUBKUCPERXOCUTORZLWYLLQJKYEFJZPVLNHREYBZAGRFMICZZPQBPCATATDPZHWOGRMMQFMLVKFAEFZLDLRJIGAERKMONNBRGWHIOJXNQCCSUFSHISQNWGYTJAPFWSDDDAVSBTKNCURDEWWSQNCVNTUTZQXDKIBQVBVDHPKGJ");
    msg.component.assign("MWJHCXLNZVLCKZORSUPALSKNEPFAUHUHOAUJSYTURGTWDKPVPSBFGCXFWTGZZQDEZSMXUMIWESMAISRUIEVHLFVMJGEDPHUPDZZNKZJJWOTNBDKXUYYHDRTAXTXYXYGPWJENFGTFOYPBXH");
    msg.act_time = 51990U;
    msg.deact_time = 34475U;

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
    msg.setTimeStamp(0.5624458774799492);
    msg.setSource(15292U);
    msg.setSourceEntity(63U);
    msg.setDestination(54550U);
    msg.setDestinationEntity(71U);
    msg.id = 214U;

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
    msg.setTimeStamp(0.33446794104239563);
    msg.setSource(18025U);
    msg.setSourceEntity(25U);
    msg.setDestination(26404U);
    msg.setDestinationEntity(215U);
    msg.id = 200U;

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
    msg.setTimeStamp(0.2613246749714958);
    msg.setSource(40253U);
    msg.setSourceEntity(224U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(176U);
    msg.id = 154U;

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
    msg.setTimeStamp(0.2931277481893543);
    msg.setSource(40165U);
    msg.setSourceEntity(246U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(248U);
    msg.op = 12U;
    msg.list.assign("BEQHKDGITJLSVCTNZFDWFGKPYMWJGRQILAZWUONFGRRXQBMNWYTKWISMKEAXELMQROEBJCWAJUWBLMILUJDSBVPAKRUWMZQSNQNJLZSRJTVNCGCUVZRVOQCTAZTGJKUHDXNGHTPDQOPANFJMUSVRVYTHQLZHLBMVZZDHCDKWYNAKBAEITGXNZGPCASCYXFHOPIOOTIOFBVUWYBPRXXESYHFOKHVPFEACLEXPYUFDQLMGUXDYPFIY");

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
    msg.setTimeStamp(0.5312602316311209);
    msg.setSource(22234U);
    msg.setSourceEntity(16U);
    msg.setDestination(17628U);
    msg.setDestinationEntity(234U);
    msg.op = 62U;
    msg.list.assign("CUOIMFTCNFGDAAEBSNYHUNYAECMGCGBXPVMDVOQLHKIPUYWMSNXPNWGXEBMKZWJLGTJDBAPWLUHSLUHJLEEQFNYQJVUXQVQRXKCKYSQGXAITEMFDXDZFYWDRQUAZRDRHVASEDFROBTPBRLRAPQIIGSILILCBQVQYPECOTMOKLVWKOBATPFRIJONWURWJRJXJOBZFIHVBJWO");

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
    msg.setTimeStamp(0.6907650407188107);
    msg.setSource(24485U);
    msg.setSourceEntity(164U);
    msg.setDestination(9945U);
    msg.setDestinationEntity(228U);
    msg.op = 99U;
    msg.list.assign("OWCOUWTSCRXOEVQJMCNYKSMNZDNXBSGXNAETDGVRGIJZZSYJMMHPZCDTLXMBVDLSAOOEFFBVRJKOEACHKDEUISQOBIXEFOIXRAFTKIPEYEXCBDMPGQGFBPAYBRUQSNPLZPJUUIUJAHZZSLRKTHNJQCXRDYLQVKHXVFLFGRPJIOADQVNWOLYPUGUQMFZNSMPGNNTWYWYIAXWYTBEKCTTKZPRHD");

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
    msg.setTimeStamp(0.8261820500330852);
    msg.setSource(44465U);
    msg.setSourceEntity(41U);
    msg.setDestination(29117U);
    msg.setDestinationEntity(34U);
    msg.value = 14U;

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
    msg.setTimeStamp(0.16755968129476162);
    msg.setSource(49788U);
    msg.setSourceEntity(206U);
    msg.setDestination(12853U);
    msg.setDestinationEntity(113U);
    msg.value = 217U;

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
    msg.setTimeStamp(0.4567211218150603);
    msg.setSource(59808U);
    msg.setSourceEntity(66U);
    msg.setDestination(15607U);
    msg.setDestinationEntity(112U);
    msg.value = 194U;

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
    msg.setTimeStamp(0.15599647575086395);
    msg.setSource(58747U);
    msg.setSourceEntity(5U);
    msg.setDestination(30969U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("DLFPIOEMISDCZFOKUDWVEPNGHCILTYBQGPPWUCKGJAGRQGRWDCSMGVSPTVZXLEKBYCZZMJWBECDSVKJMODBTYRFEHJURNWVSQPHDVUIQLEJKKVLLUQUMNSUCYAQXPHOVWYMNXXISAAPDMXNHATAURHBCNFZAZSRHIOXSKQHJOOJETOYPPNUCTBYILOTTKBTWGKEBLSYRYFQFTZVXJMLXXENJKGCRQBME");
    msg.message_id = 28279U;

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
    msg.setTimeStamp(0.15914224897489504);
    msg.setSource(40183U);
    msg.setSourceEntity(114U);
    msg.setDestination(48997U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("CNXRNDGVZXOJMOXSFTCQFCVYGQTPNHVRAUDOLIDFGSQUYTXXMLYMB");
    msg.message_id = 21768U;

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
    msg.setTimeStamp(0.26472081981401285);
    msg.setSource(3533U);
    msg.setSourceEntity(73U);
    msg.setDestination(3252U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("ELHISZYGPTUPJMXZVQBPYQDSJGTPAZVHUGOOAJFGUGGEYNAWRHCILGPGYOPKRHFXASIEWBRFNUAREYEUIFTHBTOBQFIXDHOJDZTJSSOLTNLDDCRRJKRLXIXOZVOTVVL");
    msg.message_id = 1166U;

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
    msg.setTimeStamp(0.716324762132721);
    msg.setSource(42092U);
    msg.setSourceEntity(132U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(160U);
    msg.type = 90U;

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
    msg.setTimeStamp(0.016438342345157064);
    msg.setSource(2095U);
    msg.setSourceEntity(203U);
    msg.setDestination(17635U);
    msg.setDestinationEntity(254U);
    msg.type = 191U;

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
    msg.setTimeStamp(0.7497725048671221);
    msg.setSource(20946U);
    msg.setSourceEntity(204U);
    msg.setDestination(10131U);
    msg.setDestinationEntity(0U);
    msg.type = 186U;

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
    msg.setTimeStamp(0.3470272885157868);
    msg.setSource(33863U);
    msg.setSourceEntity(49U);
    msg.setDestination(30326U);
    msg.setDestinationEntity(232U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.6156661987980224);
    msg.setSource(64958U);
    msg.setSourceEntity(67U);
    msg.setDestination(41007U);
    msg.setDestinationEntity(74U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.5449974577979669);
    msg.setSource(30756U);
    msg.setSourceEntity(180U);
    msg.setDestination(3578U);
    msg.setDestinationEntity(50U);
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
    msg.setTimeStamp(0.45622068115944825);
    msg.setSource(44945U);
    msg.setSourceEntity(17U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(54U);
    msg.total_steps = 249U;
    msg.step_number = 239U;
    msg.step.assign("NDWPJFWSTASSWSEYLDGCHXKUBYOAMIKOARJOVUTVDSTMTZUUXQWLHTGKENASDIJENPBJQPQIIIZGXGXRUCYVYHKKDOOEJDEWPWFNQQGB");
    msg.flags = 164U;

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
    msg.setTimeStamp(0.7590206988619436);
    msg.setSource(44071U);
    msg.setSourceEntity(198U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(87U);
    msg.total_steps = 20U;
    msg.step_number = 14U;
    msg.step.assign("FHIDTVCVZKITPKJSIMKGGIUXSPFXJEDGHEZCIFTEIPRDVLJQBUYMBYLZWSWFEGXWOWUDNGWSBZSJGBWBCCAZBXYRETTUKXWVNJPHFVEPFACLZLQCHPBUUDOKYUNKLYLO");
    msg.flags = 169U;

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
    msg.setTimeStamp(0.8539397193904364);
    msg.setSource(25206U);
    msg.setSourceEntity(212U);
    msg.setDestination(50420U);
    msg.setDestinationEntity(130U);
    msg.total_steps = 247U;
    msg.step_number = 53U;
    msg.step.assign("PAMKMYVYGJBFUTHLOUDMTJXZGJIWIGQPUCSPVGLOOHVPJSKGEXOYXIVZYRAEFGHBWZNSPMNLSTHQYUSQJWCGXFRCUNVACOBHIJRIBLIDEXNDBMZNBGFYFNWNFYDMEWTCECSVAJKTWPWRHVQKDZQGYPZQKMCHQNBSFEOTHJPDTOAPXCDMRQAFLSTFHEKZZLRUPOABKSXHUTUZKMDLZQVXBCWTIOYIKEGJJRQBXCKAIOWULVMXNRLL");
    msg.flags = 251U;

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
    msg.setTimeStamp(0.20407020292701672);
    msg.setSource(45312U);
    msg.setSourceEntity(171U);
    msg.setDestination(7060U);
    msg.setDestinationEntity(116U);
    msg.state = 183U;
    msg.error.assign("YEENFQCXATCYHIZMSQANMVCMHMYZRUIOWOTUCJOFSOGEIFKLVXHMUAOPDJRGSEWLLIDWGDFBQIHXJBECDMRTDUPXZBVGNY");

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
    msg.setTimeStamp(0.5754606943959982);
    msg.setSource(5025U);
    msg.setSourceEntity(166U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(121U);
    msg.state = 222U;
    msg.error.assign("IKWFMRXAHAJIGPZOUUDQSLTHPVBINPDUYQWRBC");

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
    msg.setTimeStamp(0.4462714171739408);
    msg.setSource(23648U);
    msg.setSourceEntity(140U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(235U);
    msg.state = 42U;
    msg.error.assign("BKGAGZURPOJCQN");

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
    msg.setTimeStamp(0.9951748454594643);
    msg.setSource(3072U);
    msg.setSourceEntity(96U);
    msg.setDestination(54939U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.7201042523346128);
    msg.setSource(59349U);
    msg.setSourceEntity(86U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.8352752568340998);
    msg.setSource(21823U);
    msg.setSourceEntity(34U);
    msg.setDestination(55561U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.3549239088545958);
    msg.setSource(45722U);
    msg.setSourceEntity(234U);
    msg.setDestination(31270U);
    msg.setDestinationEntity(0U);
    msg.op = 167U;
    msg.speed_min = 0.27053725464774414;
    msg.speed_max = 0.20896644064826564;
    msg.long_accel = 0.9724649801121559;
    msg.alt_max_msl = 0.26297915717806075;
    msg.dive_fraction_max = 0.043403145819149724;
    msg.climb_fraction_max = 0.35397946387233203;
    msg.bank_max = 0.8509422062146287;
    msg.p_max = 0.30784391382926446;
    msg.pitch_min = 0.03675498546675504;
    msg.pitch_max = 0.8147026360830032;
    msg.q_max = 0.1278238280871108;
    msg.g_min = 0.7637955381145328;
    msg.g_max = 0.894163271532447;
    msg.g_lat_max = 0.40049629777398;
    msg.rpm_min = 0.4754183546211802;
    msg.rpm_max = 0.8458657570632605;
    msg.rpm_rate_max = 0.38746201556499127;

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
    msg.setTimeStamp(0.5499874781054508);
    msg.setSource(2987U);
    msg.setSourceEntity(140U);
    msg.setDestination(42655U);
    msg.setDestinationEntity(228U);
    msg.op = 21U;
    msg.speed_min = 0.4200849953837925;
    msg.speed_max = 0.4356540559096286;
    msg.long_accel = 0.21189163878737405;
    msg.alt_max_msl = 0.06933877882194206;
    msg.dive_fraction_max = 0.2068638846515356;
    msg.climb_fraction_max = 0.8738420857084952;
    msg.bank_max = 0.22580943042400559;
    msg.p_max = 0.6919415067271412;
    msg.pitch_min = 0.006972664721740962;
    msg.pitch_max = 0.5873940876357935;
    msg.q_max = 0.8963428190023242;
    msg.g_min = 0.9240142418863754;
    msg.g_max = 0.11900328935463123;
    msg.g_lat_max = 0.1446443533920425;
    msg.rpm_min = 0.34134148091896666;
    msg.rpm_max = 0.11151820893870834;
    msg.rpm_rate_max = 0.7812980566616796;

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
    msg.setTimeStamp(0.10964869795922805);
    msg.setSource(63744U);
    msg.setSourceEntity(11U);
    msg.setDestination(29054U);
    msg.setDestinationEntity(17U);
    msg.op = 101U;
    msg.speed_min = 0.2329210594915191;
    msg.speed_max = 0.7244818669369635;
    msg.long_accel = 0.45366115622648684;
    msg.alt_max_msl = 0.43946987135192817;
    msg.dive_fraction_max = 0.742983787910622;
    msg.climb_fraction_max = 0.429954097276947;
    msg.bank_max = 0.4195438765734443;
    msg.p_max = 0.04816083929998338;
    msg.pitch_min = 0.16140358095797935;
    msg.pitch_max = 0.4623246303719578;
    msg.q_max = 0.2126231367758865;
    msg.g_min = 0.8314939879983372;
    msg.g_max = 0.023166903865052935;
    msg.g_lat_max = 0.6475086521895682;
    msg.rpm_min = 0.5289932463836008;
    msg.rpm_max = 0.443574016931058;
    msg.rpm_rate_max = 0.8230482764527245;

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
    msg.setTimeStamp(0.5330923010815928);
    msg.setSource(34659U);
    msg.setSourceEntity(247U);
    msg.setDestination(16053U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.19155552327371528);
    msg.setSource(4063U);
    msg.setSourceEntity(115U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.6201759267455378);
    msg.setSource(33433U);
    msg.setSourceEntity(1U);
    msg.setDestination(58836U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.4791134565147994);
    msg.setSource(326U);
    msg.setSourceEntity(119U);
    msg.setDestination(30554U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.40411420017135635;
    msg.lon = 0.8969406520344211;
    msg.height = 0.38925202558521665;
    msg.x = 0.5144240497496927;
    msg.y = 0.07260034648282598;
    msg.z = 0.9750501336649775;
    msg.phi = 0.9474866729013647;
    msg.theta = 0.246844474398498;
    msg.psi = 0.3751346839893366;
    msg.u = 0.5111863740080015;
    msg.v = 0.8709984745702851;
    msg.w = 0.2777703950170203;
    msg.p = 0.181669484895001;
    msg.q = 0.30646663723127976;
    msg.r = 0.8635604892426549;
    msg.svx = 0.1953524361719159;
    msg.svy = 0.29099990782860674;
    msg.svz = 0.1854077970740592;

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
    msg.setTimeStamp(0.8329473075706844);
    msg.setSource(17132U);
    msg.setSourceEntity(64U);
    msg.setDestination(766U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.49370645125275436;
    msg.lon = 0.8398484735491701;
    msg.height = 0.4429381144963296;
    msg.x = 0.9376604538382332;
    msg.y = 0.6354337081980781;
    msg.z = 0.800036428061956;
    msg.phi = 0.2477326050348584;
    msg.theta = 0.17642992600597607;
    msg.psi = 0.950349321261783;
    msg.u = 0.8843678513983129;
    msg.v = 0.6465949522649583;
    msg.w = 0.7841497551364931;
    msg.p = 0.9529876396150223;
    msg.q = 0.03537563212119876;
    msg.r = 0.0012433619181414501;
    msg.svx = 0.12576816320495887;
    msg.svy = 0.32162863171300216;
    msg.svz = 0.5181301240371388;

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
    msg.setTimeStamp(0.16541524880594816);
    msg.setSource(53360U);
    msg.setSourceEntity(120U);
    msg.setDestination(934U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.40563360151154626;
    msg.lon = 0.4252262539740419;
    msg.height = 0.7963004739458907;
    msg.x = 0.4189556616202228;
    msg.y = 0.2784967922917675;
    msg.z = 0.9733984575184038;
    msg.phi = 0.08120425953830701;
    msg.theta = 0.24522112658749007;
    msg.psi = 0.13160571564205215;
    msg.u = 0.5908821114429263;
    msg.v = 0.025019075453898698;
    msg.w = 0.3664351340267191;
    msg.p = 0.38462754090434415;
    msg.q = 0.06990926433983857;
    msg.r = 0.5980375770453996;
    msg.svx = 0.2625561795573246;
    msg.svy = 0.7853471696611589;
    msg.svz = 0.9613986662288256;

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
    msg.setTimeStamp(0.2095391804771769);
    msg.setSource(56177U);
    msg.setSourceEntity(106U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(5U);
    msg.op = 205U;
    msg.entities.assign("HVDKJZPMXAAGTTJBDQEUUENPHAWSIVKFRKKQULRDTQHBRIYNYPXTAQLWZKUMEHCXPVDROWBYIKDJNLJZOTFFXOHFFBMUQDCXPMYAXMQEZWPWANGIDBXRNXAYDEMKNDSMAJYTDQFIKJOBXPCVTNNPZMUCSFEVRQESMYVBEYGWGSZGVCBLFICOGZRHMOTILLLOAXGNIOBWW");

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
    msg.setTimeStamp(0.23440948062785594);
    msg.setSource(33085U);
    msg.setSourceEntity(215U);
    msg.setDestination(27633U);
    msg.setDestinationEntity(62U);
    msg.op = 29U;
    msg.entities.assign("UOFGGPWTIYMPMPNZQTDUTBSRGGXYNARXQHADUMERSGJJVWRHPETQFYZYEELRZFXTAOINKFCHTAWMGQZUWYCFEKFJVLRJNEZPOQYLCHNYVXPYLHGELRZSXIWLSHTEVWGBJLJUYPUZICK");

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
    msg.setTimeStamp(0.01154283694712166);
    msg.setSource(51328U);
    msg.setSourceEntity(161U);
    msg.setDestination(10283U);
    msg.setDestinationEntity(161U);
    msg.op = 202U;
    msg.entities.assign("QAACQPUBFWJWKQXISLRSVOFMIFZORWOUHLTCNWIPCWLWVLNTYEGMKNWBYZYXLIDCGNXIORSQRXD");

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
    msg.setTimeStamp(0.8430747486564258);
    msg.setSource(12117U);
    msg.setSourceEntity(126U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(154U);
    msg.type = 136U;
    msg.speed = 15408U;
    const signed char tmp_msg_0[] = {79, 76, 80, 12, -31, -96, 91, 99, 48, 102, -37, 59, 25, 51, 3, -48, -85, 47, -44, 19, -124, -60, 113, -26, -77, 33, 96, -118, 52, 110, -77, 45, -64, -111, -28, -109, -56, -65, -52, -18, -82, 31, 6, -23, -97, 69, 107, -38, 42, -127, 86, 84, 1, -70, -81, 48, -60, -91, -14, 102, 49, -120, 30, -124, 51, 86, -1, 93, 8, -40, -7, -121, -104, 13, 116, 27, 126, -127, -75, 44, 86, 86, 89, 45, 86, -124, -74, 101, 59, -21, -8, -61, -106, 27, -19, 75, 123, 99, -14, -71, -74, -66, 79, -110, 103, -52, -124, -28, 55, 82, -68, 59, 79, 67, -104, 49, -78, -85, -109, -100, 49, -8, 109, 60, -71, -106, -88, 122, 109, 12, -106, 83, 91, -53, 17, -73, -13, 33, -87, 24, -59, 66, -109, -82, -123, -114, 124, -70, 47, -6, 76, 97, -23, 54, -37, 120, -113, -125, -62, -15, -7, -72, 107, -64, -104, 85, -127, -5, -41, 96, -101, -75, 114, -91, -121, -54, -50, 24, -82, 20, 30, 13, -56, 71, -101, -69, -40, -92, 23, 110, -25, -97, 110, 76, -52, 78, 3, -56, 108, 42, 66, 124, 121, 76, -81, -89, -20, 11, 86, -5, 34, -59, 96, -48};
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
    msg.setTimeStamp(0.30746466091909763);
    msg.setSource(19191U);
    msg.setSourceEntity(133U);
    msg.setDestination(21120U);
    msg.setDestinationEntity(243U);
    msg.type = 46U;
    msg.speed = 41200U;
    const signed char tmp_msg_0[] = {-123, 18, 31, -78, 26, 36, 21, 59, -13, 14, -24, -31, 119, 79, 114, -107, -1, 8, 88, -105, -56, -42, -104, -24, 23, 121, -39, 1, -57, 126, -7, -7, -12, 81, 38, 52, 9, 123, 57, 99, -29, 85, 82, 49, 126, -39, 69, -71, -115, 62, -29, 56, 55, -98, -127, 36, 107, 91, 85, -46, 80, -56, 77, 13, 40, -34, -38, -52, -96, 114, 113, 3, 87, 70, 110, -102, 107, 30, 35, 18, 61, -97, -4, 97, -32, 123, -31, -45, 46, -78, 43, -62, -7, -35, 99, 106, -49, -31, 45, -71, 3, 84, -30, 41, -98, 70, -13, -60, -72, -55, 58, 32, -126, -52, -14, -91, -7, 43, -11, 73, -75, -76, -90, 103, -86, -70, 79, -66, 34, -80, 20, -111, -114, -89, 5, 47, 57, -18, -49, -102, 58, -80, 85, 83, -86, 31, 112};
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
    msg.setTimeStamp(0.6075705534572525);
    msg.setSource(8990U);
    msg.setSourceEntity(41U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(173U);
    msg.type = 38U;
    msg.speed = 14137U;
    const signed char tmp_msg_0[] = {-44, -113, -41, -98, 73, -5, -15, -108, -8, -35, -17, -20, 89, 15, 8, 111, 46, -123, 122, -95, 3, 96, -43, 14, -76, 4, 92, 22, 77, -91, -127, 55, -26, 13, -93, -84, 65, 79, -35, -22, 46, -43, -93, -63, 116, -7, -22, 24, -114, -42, 96, 47, -66, 66, 30, 105, 12, 50, -29, 77, -91, -17, 93, 43, -18, -127, 65, -120, -28, 97, 112, 119, -30, -84, 25, -20, 63, 68, -127, 27, -21, 7, -93, -69, -122, 83, -67, -91, 28, -112, 71, 22, 44, -47, -45, -39, 5, -95, -32, -110, -67, -10, -11, 52, 20, -49, 50, 17, 122, -19, -87, -43, -24, 112, -99, 19, 81, 29, -47, 88, -81, 80, -58, -109, -35, -102, -70, -105, -116, -94, -16, -127, -88, -59, -50, 82, 74, -120, 89, 95, 87, -11, -30, 21, -54, -106, -103, -78, -37, -5, 13, 30, -23, -11, 11, 48, -49, 21, 117, 57, 122, 5, -85, 7, -40, -103, -9, 123, 92, -99, -79, 93, -45, -37, -80, 104, -51, 25, 115, 21, 110, -51, 63, 6, -127, -104, 94};
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
    msg.setTimeStamp(0.3970844790949428);
    msg.setSource(235U);
    msg.setSourceEntity(146U);
    msg.setDestination(37577U);
    msg.setDestinationEntity(158U);
    msg.op = 243U;
    msg.tas2acc_pgain = 0.037490725106057665;
    msg.bank2p_pgain = 0.06846563478684975;

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
    msg.setTimeStamp(0.9085430609979583);
    msg.setSource(25381U);
    msg.setSourceEntity(156U);
    msg.setDestination(40155U);
    msg.setDestinationEntity(186U);
    msg.op = 159U;
    msg.tas2acc_pgain = 0.755531853282089;
    msg.bank2p_pgain = 0.8791479010252998;

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
    msg.setTimeStamp(0.2910171245652726);
    msg.setSource(12520U);
    msg.setSourceEntity(142U);
    msg.setDestination(7134U);
    msg.setDestinationEntity(161U);
    msg.op = 33U;
    msg.tas2acc_pgain = 0.8175419266042396;
    msg.bank2p_pgain = 0.8036260851063868;

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
    msg.setTimeStamp(0.5333918351837401);
    msg.setSource(42591U);
    msg.setSourceEntity(34U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(251U);
    msg.available = 1166888935U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.5535474453742596);
    msg.setSource(18885U);
    msg.setSourceEntity(239U);
    msg.setDestination(5204U);
    msg.setDestinationEntity(246U);
    msg.available = 2673759467U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.5804743731628467);
    msg.setSource(49905U);
    msg.setSourceEntity(138U);
    msg.setDestination(31652U);
    msg.setDestinationEntity(174U);
    msg.available = 2916477206U;
    msg.value = 164U;

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
    msg.setTimeStamp(0.2145910898998289);
    msg.setSource(40535U);
    msg.setSourceEntity(169U);
    msg.setDestination(20160U);
    msg.setDestinationEntity(119U);
    msg.op = 157U;
    msg.snapshot.assign("HRBJCXPQPNBMQBZKYKQUVAQTVABVFRJIXERMOVFJDSZFNOEAEQCYUPQOHNZIW");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.49611376023566844;
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
    msg.setTimeStamp(0.5344521071834448);
    msg.setSource(49561U);
    msg.setSourceEntity(149U);
    msg.setDestination(48257U);
    msg.setDestinationEntity(169U);
    msg.op = 242U;
    msg.snapshot.assign("WFOGKVRCHINCUGVQPMJHZOBRIWFODRQPXWHJONIXMNASTJYNTXWBUYRLGJPKJHSNWBBHMZAXGNHVSDUDWEHVRSDFIKQWSFOPDGOEJVFTBDCYMGINLUIUJLLIRFGFMCGAMRQEAZBCQTDKCABFQDEPXLZYEVQ");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 175U;
    tmp_msg_0.tas2acc_pgain = 0.9351650727615309;
    tmp_msg_0.bank2p_pgain = 0.1850863085652481;
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
    msg.setTimeStamp(0.7665889314147049);
    msg.setSource(5180U);
    msg.setSourceEntity(109U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(187U);
    msg.op = 46U;
    msg.snapshot.assign("HKJUHCHBGNZVYALQURRHFECAWOWEITYGPQOUQOL");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 105U;
    const signed char tmp_tmp_msg_0_0[] = {-94, 38, 118, -70, -3, -77, -38, 105, 65, -70, -65, -78, 38, -47, -44, 84, -116, 48, -45, 122, -71, 8, -61, 50, -128, -121, 98, -85, -27, 98, 87, -50, 10, -40, 119, 79, 116, 119, 106, -17, 39, -70, 4, -62, 32, 97, -22, 123, 33, 0, -78, -120, -127, 59, 75, -12, 42, 61, -120, 60, 91, -28, 65, 14, -64};
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
    msg.setTimeStamp(0.19839732236690555);
    msg.setSource(44910U);
    msg.setSourceEntity(236U);
    msg.setDestination(51333U);
    msg.setDestinationEntity(130U);
    msg.op = 241U;
    msg.name.assign("FYVSZGTXXSSDVCNLWOMHUIZIQGRZGBDLPDPXMVVEOYPCKLSLLAUIVFOWRYQBRAEURPOMRCVXKXFFAGDSWBTMGGIZJJEJACRF");

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
    msg.setTimeStamp(0.44414567754994383);
    msg.setSource(10456U);
    msg.setSourceEntity(230U);
    msg.setDestination(57949U);
    msg.setDestinationEntity(35U);
    msg.op = 147U;
    msg.name.assign("FLTHKHJYKVABIDTZOPSFOEFHZDKLZPAFEVLVYZWUXVCUTNZGMMECWXRCNWMZKBIOUHRZQXIJPQSMOJSQKPUUASUJDBFNYEAAOKTIBWSJPQQNFRRXSLNYECYGVTKVBXSOESJLIGWMRBHGNXQKIHDJFTGGZYAFEQCCOFNVLXRBDGMOLWRPAAYXPCMEUQSLXTZKCFBN");

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
    msg.setTimeStamp(0.2848377243027618);
    msg.setSource(21793U);
    msg.setSourceEntity(108U);
    msg.setDestination(21353U);
    msg.setDestinationEntity(205U);
    msg.op = 212U;
    msg.name.assign("TKMPRQCPRWDEMYXSOEZHPYAQCJXRVVGXQESGFQBONQOVRRBBRRSOAOLYCQUGJGRCQZUYBLYMMSWMJNWEAKJHCKTPFAFEHSBFXQYXIAMCGLWXKHYUDGVHYTIAENXNBLDVKTCPIJSNLGNVBECGKSW");

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
    msg.setTimeStamp(0.1630481026430155);
    msg.setSource(63464U);
    msg.setSourceEntity(251U);
    msg.setDestination(31530U);
    msg.setDestinationEntity(157U);
    msg.type = 135U;
    msg.htime = 0.3570635649646784;
    msg.context.assign("DPBUKYDNJRMQDXAXPPQPHTFLDWEJGXZOQXKYWZDRRYAWICEKOHTHTUFLLFBEFZHZMISCRBFMQYLKWSNFPOLBDZNCPPJGHHTJKQNZZAOMPQOGKARLFMVUBEAHDW");
    msg.text.assign("RVZKFGXOKQCPEXYGEJJCVNDUXIRJICMJHDNJQMBCJKHSZLVSVZDMRPWELSLMKXFYYGHSDOQYWAHONXWIWQFREVUUWEANSHTHYOUSBBOZEJPLDIOAJXSZOU");

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
    msg.setTimeStamp(0.3673181779508622);
    msg.setSource(6052U);
    msg.setSourceEntity(118U);
    msg.setDestination(35402U);
    msg.setDestinationEntity(234U);
    msg.type = 203U;
    msg.htime = 0.6403228870117429;
    msg.context.assign("NLGHXOTMZJDHFLKASQPJXWNJFXSUCXQZTGEORLDRABB");
    msg.text.assign("JSFQTQIKDSCLTEKLBWDJFPEADIIGUZYOEQYVU");

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
    msg.setTimeStamp(0.2311364288756913);
    msg.setSource(64131U);
    msg.setSourceEntity(105U);
    msg.setDestination(55671U);
    msg.setDestinationEntity(180U);
    msg.type = 166U;
    msg.htime = 0.331928920026189;
    msg.context.assign("GPHLDZJZRGTKDJCCULNNIGXOGQKEIXOQSXWRBXAPDVFNQSRTDKSFXNJYOYPBITFDQWAELBPUCJWEQWVMHGDJHKQHOOSLRKULYIVIUSYZNZMKWXCQKPYALMZGTKLCMBIMIQOUWMVTHFRBLFMFZVQURNSXABVEADHJTWVJBEPOEFUTHUPRLTNHYDVHAXGBNYZFOYLZSNQCMBRCAVTEDIFANDYYZVGB");
    msg.text.assign("MNFPEWTKDFJGLSKTJFUMQBITFQOPMGEHTJGGJARAPBJEMFCCZBVLCCDNQCXKXBDIKWMWXYGNHRORLUZJEWKOAZBVGYCRHIBFDLRNYUIYEXBXWLEIAYHLVJAHDNT");

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
    msg.setTimeStamp(0.35086051647398775);
    msg.setSource(39618U);
    msg.setSourceEntity(46U);
    msg.setDestination(36490U);
    msg.setDestinationEntity(253U);
    msg.command = 213U;
    msg.htime = 0.035617156424978424;

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
    msg.setTimeStamp(0.8507917440349697);
    msg.setSource(22329U);
    msg.setSourceEntity(229U);
    msg.setDestination(51126U);
    msg.setDestinationEntity(199U);
    msg.command = 202U;
    msg.htime = 0.5211502643171512;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 11U;
    tmp_msg_0.htime = 0.2680699892854129;
    tmp_msg_0.context.assign("BBJHWQJZEHTANNZGGPCRRNIKMYERNJULGBUQIKPNHOZVMOKETVOKXUXAMEHQBSTFTRGIIKVTMYBTSLDZTVDWYPJYHCXFBSGLHUCPYPALBBBZGIDIQNDOTAWEAPNFPJWFYDVXKASARVS");
    tmp_msg_0.text.assign("XZLGHXMCSYXWHVASDECGTLEFEEVTEVROJMOVAKWNKPHNMCVQDPIAQCFRNZLJXQLAIYUCKILLUUZFCFTCBBJJBXWONJUTPGIDRXEBMHZRQLGQGJBQJIYDVZUAMNVVHZSSOYKREROTORGDOQJJFWWFJT");
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
    msg.setTimeStamp(0.896178112312397);
    msg.setSource(65123U);
    msg.setSourceEntity(19U);
    msg.setDestination(34115U);
    msg.setDestinationEntity(162U);
    msg.command = 6U;
    msg.htime = 0.3953715813505261;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 133U;
    tmp_msg_0.htime = 0.9649406246739384;
    tmp_msg_0.context.assign("UZFRFBMQPMBDKCOJQJKWFBPIXKHMGEKDQHGXCANNY");
    tmp_msg_0.text.assign("PQJWSRGOQLLQWUQWUEALQCBXDISAYXLXPJLKJPXZJHBCEVBMRIGAVABAIRDNYTLVMUUZOXNWUWMRDIZEZCQYGYNORICRCEWFSEVXKJJYRGFBKRPYBRJNZEBDYNMIGUKSSSJDPKYTZKGZAQVLMTYIVSNMXLHJSOEUFAHGRLBDOXPDOHTHXTQWPKSFJTNQPFVZUHOEHFWCNMQBGDKVAZPCH");
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
    msg.setTimeStamp(0.14366919283755664);
    msg.setSource(37750U);
    msg.setSourceEntity(140U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(73U);
    msg.op = 237U;
    msg.file.assign("QMIFONFNQLQTRRXFXMDWJBCBNZYHKHDIZHCPICQYEKGIGWCSFYGIGTWZWAFNOSUAKRIIJDISKXBVWRSEVVSZWTOHFZMEJEDBOPRRKVYWQPYCTFMHFHLZVTZUAUTSQLOOPOYXMABHGXEYGPXZNHJELXGZPNDKEWXCXDUVRBJAD");

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
    msg.setTimeStamp(0.5430648780936765);
    msg.setSource(13816U);
    msg.setSourceEntity(1U);
    msg.setDestination(47986U);
    msg.setDestinationEntity(251U);
    msg.op = 2U;
    msg.file.assign("HRIFHLYJDGVUASNMGBXIVBYSICMKYYHXDCGERCDCZOVQXWYRAUJMMCUZSIWAJTKJHTNGLVHOIVLFTQFNSLROKHJADWDYBPKLBEOUNFPFCIVVSPIICWXIFOMSADXNMAICWKAZMLS");

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
    msg.setTimeStamp(0.24037747251265273);
    msg.setSource(44290U);
    msg.setSourceEntity(209U);
    msg.setDestination(47466U);
    msg.setDestinationEntity(105U);
    msg.op = 103U;
    msg.file.assign("ZHVPATAPZATSMVSDDEQGSWDNIPFJWUGALXERWUYVQBEGONCVKDZHCYOUONQFRELKSMMCFDUZXIBXBESUDRCSSPBYIFTYDMPNVGKGPYHBMLPQHUNMGYOCRIMPWTXQZLVCYIPTWJBAVMBZQVCXZYNOJCESSXZTIXQKHAWAWAJAJLLDKEEHOVMGRLEBWOJH");

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
    msg.setTimeStamp(0.8503119911082885);
    msg.setSource(3861U);
    msg.setSourceEntity(128U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(176U);
    msg.op = 174U;
    msg.clock = 0.5157940340591641;
    msg.tz = -106;

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
    msg.setTimeStamp(0.9488477333103027);
    msg.setSource(29525U);
    msg.setSourceEntity(63U);
    msg.setDestination(6574U);
    msg.setDestinationEntity(111U);
    msg.op = 177U;
    msg.clock = 0.7548484083070616;
    msg.tz = -121;

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
    msg.setTimeStamp(0.6248201278033603);
    msg.setSource(47839U);
    msg.setSourceEntity(120U);
    msg.setDestination(49105U);
    msg.setDestinationEntity(253U);
    msg.op = 217U;
    msg.clock = 0.4456863522093607;
    msg.tz = -5;

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
    msg.setTimeStamp(0.05980506141586217);
    msg.setSource(10365U);
    msg.setSourceEntity(177U);
    msg.setDestination(13423U);
    msg.setDestinationEntity(0U);
    msg.conductivity = 0.5223305665455851;
    msg.temperature = 0.9093283684062158;
    msg.depth = 0.9709079525027472;

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
    msg.setTimeStamp(0.11959023021131276);
    msg.setSource(19692U);
    msg.setSourceEntity(50U);
    msg.setDestination(17651U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.8139236025402333;
    msg.temperature = 0.0009185771975088741;
    msg.depth = 0.08658332087766396;

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
    msg.setTimeStamp(0.9712478035470384);
    msg.setSource(51498U);
    msg.setSourceEntity(231U);
    msg.setDestination(40870U);
    msg.setDestinationEntity(215U);
    msg.conductivity = 0.7027481356079028;
    msg.temperature = 0.7719284784209051;
    msg.depth = 0.9397457706456848;

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
    msg.setTimeStamp(0.0464712538520774);
    msg.setSource(21217U);
    msg.setSourceEntity(43U);
    msg.setDestination(2827U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.3812739116161562;
    msg.roll = 12574U;
    msg.pitch = 55744U;
    msg.yaw = 48302U;
    msg.speed = 1066;

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
    msg.setTimeStamp(0.6213024142223242);
    msg.setSource(47549U);
    msg.setSourceEntity(105U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.37041473041473505;
    msg.roll = 35108U;
    msg.pitch = 59864U;
    msg.yaw = 18031U;
    msg.speed = 11931;

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
    msg.setTimeStamp(0.8139057793683364);
    msg.setSource(62593U);
    msg.setSourceEntity(203U);
    msg.setDestination(39135U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.09276017937068193;
    msg.roll = 12997U;
    msg.pitch = 36748U;
    msg.yaw = 48124U;
    msg.speed = 3413;

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
    msg.setTimeStamp(0.6838741367671075);
    msg.setSource(1680U);
    msg.setSourceEntity(153U);
    msg.setDestination(17808U);
    msg.setDestinationEntity(178U);
    msg.altitude = 0.4456904374696651;
    msg.width = 0.613310635738084;
    msg.length = 0.6308740287807701;
    msg.bearing = 0.03126457022048601;
    msg.pxl = 10500;
    msg.encoding = 174U;
    const signed char tmp_msg_0[] = {-35, 71, 16, 121, -2, 57, -62, 20, 75, 38, -113, 95, -16, 49, -89, -68, -32, -55, -55, 20, -120, 54, -84, 83, 113, -106, -116, 106, 31, -18, 39, 123, -78, 45, 57, 7, -82, 8, 103, -118, 108, 76, -34, -62, -92, 36, 82, -41, -113, 22, -61, 100, -101, -36, -95, 66, 35, 37, 37, 44, -21, -10, -90, 44, -40, -84, -71, 109, -73, -7, 85, -120, 68, 117, -126, -13, -45, -62, -124, -96, -21, 86, 84, 63, 4, -112, -52, 70, -39, 67, -63, -75, 62, 32, -86, 45, -113, 20, 39, -118, -35, -91, -67, 122, 76, 110, -85, 124, 11, -59, 2, 45, -18, 56, 104, -63, -46, -38, -118, 33, 125, 85, 94, -87, -122};
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
    msg.setTimeStamp(0.88045814882857);
    msg.setSource(62942U);
    msg.setSourceEntity(54U);
    msg.setDestination(5777U);
    msg.setDestinationEntity(4U);
    msg.altitude = 0.8289833465911703;
    msg.width = 0.1059389450888808;
    msg.length = 0.11433440375674786;
    msg.bearing = 0.6797568091470285;
    msg.pxl = 27071;
    msg.encoding = 244U;
    const signed char tmp_msg_0[] = {-34, 98, -125, -67, 1, 37, 120, 113, 38, 71, 96, 15, 117, -5, 17, 121, 4, 64, 28, -10, 22, -120, 121, 62, -90, 49, -119, 49, -57, -77, 32, 14, -63, -98, 83, 73, -71, -17, -30, -86, -87, -36, 28, 61, 72, 119, -16, 71, -52, 88, 7, 25, 71, -127, -18, -22, 113, 42, 81, -26, 88, 111, 33, 8, -86, 41, 16, -10, -37, -115, 20};
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
    msg.setTimeStamp(0.518108441818542);
    msg.setSource(56327U);
    msg.setSourceEntity(78U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(217U);
    msg.altitude = 0.5081651677714459;
    msg.width = 0.027261358295798344;
    msg.length = 0.41013172664132114;
    msg.bearing = 0.11556046585361257;
    msg.pxl = -19558;
    msg.encoding = 90U;
    const signed char tmp_msg_0[] = {-114, -92, 33, 89, -55, -37, 85, 109, 123, 11, -44, 46, 81, -14, -4, -58, 81, 52, -76, 108, 114, -105, -42, -26, -89, -13, -59, 107, 98, -50, -92, -81, 83};
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
    msg.setTimeStamp(0.25612969247741935);
    msg.setSource(18838U);
    msg.setSourceEntity(65U);
    msg.setDestination(13088U);
    msg.setDestinationEntity(71U);
    msg.text.assign("AIKIPNKSYQWUMUPAVKRTIMTKVTXEZYFBNQLDDORTOOBJWSDCOVHXCNWHZRTYBLEZBXVMEZVZUWPACCQIBNZNWYAGKPGQCWHQQDGXHVZIYUDBMOAJGSTFHGGM");
    msg.type = 229U;

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
    msg.setTimeStamp(0.3948753421887159);
    msg.setSource(32598U);
    msg.setSourceEntity(29U);
    msg.setDestination(36952U);
    msg.setDestinationEntity(154U);
    msg.text.assign("PTFVCIHMOWFSNSFNHZVWLXTACAMCJWOVDZ");
    msg.type = 11U;

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
    msg.setTimeStamp(0.4091704870872199);
    msg.setSource(41507U);
    msg.setSourceEntity(152U);
    msg.setDestination(23604U);
    msg.setDestinationEntity(202U);
    msg.text.assign("KKREAKZFCVZKXTDZRJBJRIDSSLASMIFYHQOFNBWQ");
    msg.type = 103U;

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
    msg.setTimeStamp(0.4051216758304744);
    msg.setSource(36425U);
    msg.setSourceEntity(75U);
    msg.setDestination(46751U);
    msg.setDestinationEntity(63U);
    msg.parameter = 236U;
    msg.numsamples = 39U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 19200U;
    tmp_msg_0.avg = 0.30850790379534043;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.33882468999696647;
    msg.lon = 0.6269087600488158;

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
    msg.setTimeStamp(0.15177584689684354);
    msg.setSource(54788U);
    msg.setSourceEntity(78U);
    msg.setDestination(49933U);
    msg.setDestinationEntity(133U);
    msg.parameter = 218U;
    msg.numsamples = 246U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 22443U;
    tmp_msg_0.avg = 0.2179442617205506;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8989446727365088;
    msg.lon = 0.004007534385182199;

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
    msg.setTimeStamp(0.3055428042770644);
    msg.setSource(55425U);
    msg.setSourceEntity(195U);
    msg.setDestination(53186U);
    msg.setDestinationEntity(198U);
    msg.parameter = 61U;
    msg.numsamples = 198U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 22410U;
    tmp_msg_0.avg = 0.394749171846258;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.43715169713432156;
    msg.lon = 0.00048674525700265203;

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
    msg.setTimeStamp(0.9080513652636467);
    msg.setSource(64073U);
    msg.setSourceEntity(98U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(201U);
    msg.depth = 3051U;
    msg.avg = 0.6325926279801558;

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
    msg.setTimeStamp(0.8856648900903921);
    msg.setSource(48291U);
    msg.setSourceEntity(127U);
    msg.setDestination(40794U);
    msg.setDestinationEntity(243U);
    msg.depth = 20815U;
    msg.avg = 0.425454214633712;

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
    msg.setTimeStamp(0.44921229194653545);
    msg.setSource(50881U);
    msg.setSourceEntity(187U);
    msg.setDestination(5553U);
    msg.setDestinationEntity(69U);
    msg.depth = 41930U;
    msg.avg = 0.6297642377036625;

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
    msg.setTimeStamp(0.9660530956807065);
    msg.setSource(16489U);
    msg.setSourceEntity(14U);
    msg.setDestination(33675U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.2781346583642853);
    msg.setSource(5783U);
    msg.setSourceEntity(184U);
    msg.setDestination(58342U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.755016299613735);
    msg.setSource(12202U);
    msg.setSourceEntity(228U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.711419624231426);
    msg.setSource(25089U);
    msg.setSourceEntity(235U);
    msg.setDestination(54119U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("TQUFVELAGYDKSVHCSWQGXIINVWFSTAFDTYBAYBZPDEQHS");
    msg.sys_type = 83U;
    msg.owner = 12679U;
    msg.lat = 0.5829258969798988;
    msg.lon = 0.021256824981537803;
    msg.height = 0.02627942130393257;
    msg.services.assign("AVUHPGKUICCBBHZDUWLXLHWMZTMFVMAOCIJLIZKPSCIZNHNQFLGJWLFYNOPZQKJMLPTEYSYFSTOEUDCXXRQARBZ");

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
    msg.setTimeStamp(0.8767560511021688);
    msg.setSource(21484U);
    msg.setSourceEntity(190U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(12U);
    msg.sys_name.assign("WQPBXIXGNNEJKFSIROGCFVIVZNCJGCGOELGWYGLHVWNHXHEXQSFZNDRJAOMMHCVEHTZXLUXSDTBYPGLEIHAASFZUOMKNMICAIXUKPMLKVUYQGKXFLJAOBDARDENBRWJNCTYKFEUVPGXUMRPYZAKZDAFQBUYQBZLRUQTZDUSAEMFOBSPWLJCQWGTNFBOEVOWJUSSHSIQCMTPRLDPFRRBMIKYCPDTZIHTYVDSVTJAEWY");
    msg.sys_type = 135U;
    msg.owner = 19184U;
    msg.lat = 0.7384027206258246;
    msg.lon = 0.03511341315066263;
    msg.height = 0.8579408393221541;
    msg.services.assign("FERGKTCCKMAUADRLBPXGFPYADWCGSLORCHCZSFPJTGTMYXMYXBBWZXDHEJFEHIIOVTQQNMDXLZWQJIRMTRJBZUBPZJEMVXZDXOHRSLQWKMCWBILDLVZISJBJGQMSGPUBOATGKYUJNQVEXWQEPNVQZSAWDDXUIVNGLYVACRKSTZOUUQNKRFXPISOMAGOSBNBPUZLHUJQKNTTFRFOHAADKEOHYLFPNODVUFYGWCSTKEP");

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
    msg.setTimeStamp(0.8618585831942234);
    msg.setSource(61534U);
    msg.setSourceEntity(226U);
    msg.setDestination(57265U);
    msg.setDestinationEntity(174U);
    msg.sys_name.assign("YMHQXJLCAOKFWHGEFKBLNXFMODWEJDESCFSNVGKDIUKCMUIVTVJCDTPRZMDATKIWBXESNBGGVYWZVRUUALFTOXARDQKYULGDLCCRNJZJUARHGTAEUXCSXEWMPOTPOORILBLHISXQYYVBMSCZIRWQPRHFWIAYQZLEMAPYEYZEYZBVOXMGWDTPTSGDSXJHUFAREJKBMPPQBAPIGDVPHIQQNLWOTGHJNTUVQSQU");
    msg.sys_type = 235U;
    msg.owner = 32242U;
    msg.lat = 0.4443077751452079;
    msg.lon = 0.03268083029921143;
    msg.height = 0.7485676386675046;
    msg.services.assign("JRODJWRBLNFXPUWFSKBOUOUSZVVYECIFHBCCEMCATKTKTDYAEQQVJWQVNEYVEFDISDFEMRPSCMXVMJIZKFAFXDIAWXQIWHTCZQAYYSZFQQPNWMBZYABKCNZHBUIPXYDCOBBGLASGNLMGUOPDFOGLVRPAUHSHRIKNWYWBDPAZMOSJNTGEKMXAGHQXHJPH");

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
    msg.setTimeStamp(0.052859587686535425);
    msg.setSource(24626U);
    msg.setSourceEntity(179U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(18U);
    msg.service.assign("NSSDBOHQCOUBGJHTMPNKYDWPGTAWUNGQFXVCLIRIEVTBKAVRXODWUEXBESTKOHOUIUPRNZKRQFSVBYBRERYKCAZHMERPISJEIXDOSGXDTIRMNPUYNDHJAJNQLRWPJBXGQEMOZZKKPLVZFPKYWQMQWYLOLPGLOYJFSWDCBLGXKCVSTMMWYCJFZFBBECXULWFCTVIQVFAWHILDNPAAUMVYGXFDXDYTZHOTHMLJUAMQCSZHJZGURQCSAIGFTNHV");
    msg.service_type = 60U;

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
    msg.setTimeStamp(0.7363427696632597);
    msg.setSource(51823U);
    msg.setSourceEntity(160U);
    msg.setDestination(28252U);
    msg.setDestinationEntity(114U);
    msg.service.assign("WPTTTHOEUYTALJFVLKXMPYHYDMQEZNHXKIETWHCBSQAFTHBPW");
    msg.service_type = 135U;

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
    msg.setTimeStamp(0.7716840419523147);
    msg.setSource(15530U);
    msg.setSourceEntity(13U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(67U);
    msg.service.assign("OHKEYLBOUMCJGPKVNXWVOHJXUBOIHBMSXETNMONOWRBFSSAEQVOQQYIUIGALATUYYLHAKKDUOCBDPQFYOHMRAIPUXGAJRZTXLTCGKTFDSPFZAAWCIBJAXIPGFQHQDQKPVRSYGYJUKRHKDVZEMZTZYNXCSFNVZBZEEWECFEEC");
    msg.service_type = 182U;

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
    msg.setTimeStamp(0.5449770483033701);
    msg.setSource(53149U);
    msg.setSourceEntity(86U);
    msg.setDestination(23103U);
    msg.setDestinationEntity(140U);
    msg.value = 0.3571076982173935;

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
    msg.setTimeStamp(0.5224336602017137);
    msg.setSource(16883U);
    msg.setSourceEntity(194U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(3U);
    msg.value = 0.6544355427798593;

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
    msg.setTimeStamp(0.14225437731782287);
    msg.setSource(33426U);
    msg.setSourceEntity(230U);
    msg.setDestination(2654U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7123613923927858;

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
    msg.setTimeStamp(0.34806903171868375);
    msg.setSource(19225U);
    msg.setSourceEntity(237U);
    msg.setDestination(34380U);
    msg.setDestinationEntity(214U);
    msg.value = 0.33049920998928217;

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
    msg.setTimeStamp(0.8833691615895923);
    msg.setSource(53695U);
    msg.setSourceEntity(208U);
    msg.setDestination(43330U);
    msg.setDestinationEntity(159U);
    msg.value = 0.24387538411423748;

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
    msg.setTimeStamp(0.18220300255598176);
    msg.setSource(51180U);
    msg.setSourceEntity(244U);
    msg.setDestination(61894U);
    msg.setDestinationEntity(193U);
    msg.value = 0.1538096304309432;

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
    msg.setTimeStamp(0.5619490872866757);
    msg.setSource(51024U);
    msg.setSourceEntity(188U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(219U);
    msg.value = 0.11689453098527647;

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
    msg.setTimeStamp(0.8795398891570545);
    msg.setSource(21662U);
    msg.setSourceEntity(98U);
    msg.setDestination(11763U);
    msg.setDestinationEntity(202U);
    msg.value = 0.47422832628857203;

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
    msg.setTimeStamp(0.19632285771368074);
    msg.setSource(36247U);
    msg.setSourceEntity(91U);
    msg.setDestination(56231U);
    msg.setDestinationEntity(80U);
    msg.value = 0.2104860610572996;

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
    msg.setTimeStamp(0.31371071153572694);
    msg.setSource(22609U);
    msg.setSourceEntity(114U);
    msg.setDestination(24701U);
    msg.setDestinationEntity(84U);
    msg.number.assign("JGHZQMVQBVXDZTHFDPIJUAASPKICUDZYUTUMKFNJLSOCWXQTAKWJRPDAVLHCEAALN");
    msg.timeout = 59054U;
    msg.contents.assign("LMCXZXKKNTOAMELOXBSRHIASWPSHPZCKBZTJTDWTEYTHBIUKQDRYVRQDXGEQJYFQPWECGYPZWURYXJAGOHLRDBIANPFMTVIJQEDYYUANJJLBSNWUGFOXBYSPVNWUZRZINCMNTBFCIBYFMRXHKXJKVKMLXPLOEOQFXUGLBESWEPODITDMMJQUHGQDZLAZKVHWPLSJEBELJSFDACYGZSTHGMNHVCOOUKIVPVQUVASFNGRQAZCRWCTCNKIVAHFWR");

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
    msg.setTimeStamp(0.36425060499603956);
    msg.setSource(9826U);
    msg.setSourceEntity(95U);
    msg.setDestination(56052U);
    msg.setDestinationEntity(226U);
    msg.number.assign("OHVLQXSJRSAKEHBBZVWHWYSBKTUYKOPROLGVIJHXQCYIVNFUFPTCWCRXHJYRMNRNCDZFBZCPDEDGHXASDNGQTQEMFGCGGBIELKRJWRPKLAIZTX");
    msg.timeout = 18697U;
    msg.contents.assign("RNWDUTCXWKEZNOVNMSLQKSPGSXGNRTPGMSHRWLFPJJFQFGVOYMAGBJNEDONPYKKLGTFULYHNAJAOCFHIYDUGXEHMWMEAUREJZMOIVQNJSUOCIIPCDRXNQUYWFGGLDDZVDJIIRZVMGHPYLERLISUKDUTCQCUZCEXBTFQKMWQHKIDWAJLJFSYRKACZHXTPKBRVWSKOIDOEZYYOBBXVAJALVQCPVTVSXXTPBQB");

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
    msg.setTimeStamp(0.2876496766472333);
    msg.setSource(34777U);
    msg.setSourceEntity(216U);
    msg.setDestination(28821U);
    msg.setDestinationEntity(4U);
    msg.number.assign("VGYCDWAHDWTKXPTZHWTBCFKUKEOCIWZGEEKMIBAPSPIJHYAJLVIRRGUHNAYBSYJCNUMNJUYOGPVIBXZJFAOBJCQVHRFUSYWXOPLILRXNNBOZJZDLEVCHKTETZKDLSCSDKMQTUVGQZSRMJXQRWUOSCOKZNWIBLTOQEDVXIBEMPAGOMHGMHXNDVFJFWLTISSEICRFANYEGQPHQ");
    msg.timeout = 51426U;
    msg.contents.assign("GHKZGBXFEKDVMXAZAWYRVFOOYQCGJJGAABYQIHWHOXYDNSZKIOANGGEPWUESSNHTHYZSQPTGZRBPTOTLNWLLHPMTMLZDYQFQFZEDOCSFVEUZXDHLWCQLOWXDAUPCORCPNEMATVZX");

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
    msg.setTimeStamp(0.44189503104069905);
    msg.setSource(47599U);
    msg.setSourceEntity(64U);
    msg.setDestination(32963U);
    msg.setDestinationEntity(184U);
    msg.seq = 3604269199U;
    msg.destination.assign("QPWUTDWNPFNQXIZHFBMLINYPLDCIJZHCYPDJXXDQCAFEZNEZQBYIUIMATPGQHGSTSMKTDHYWQWUNJCKLUSQNPRNIZSUXCVRHJLHGBTPEEFMOJENHPEZYHUDBGKUAYRXORMOVOVKOGJR");
    msg.timeout = 14218U;
    const signed char tmp_msg_0[] = {73, 116, 28, 117, 37, -15, 79, -95, 57, 121, 78, 20, -18, -41, 24, -10, -56, -8, -22, 115, 38, -98, 21, -52, 77, 93, -87, -76, 87, -4, 51, -23, 10, 60, 112, 0, 30, -65, 68, 72, 29, 38, -24, -48, -22, -53, -71, -31, 46, -16, 74, -18, 102, -17, 24, 32, -81, 43, -45, -64, -72, -72, -67, -97, -75, -99, -50, -96, -95, -94, -49, -42, 10, -103, -4, 69, -47, -23, 122, 50, 74, -50, 94, -42, -47, -22, -77, 20, 26, 85, 51, -94, 59, -87, 0, -100, 94, -50, 67, 15, -92, 116, -111, -73, 69, 69, -28, -110, 16, -87, 15, -88, -91, -125, 95, 103, 2, 6, 117, -24, -69, -11, -23, 69, -35, -84, -39, -67, -84, 16, -99, 2, -38, -125, -55, -72, -36, -26, 7, -116, 70, -80, 51, 75, -36, -97, -118, 52, 106, 120, -69, 89, 88, 115, 47, -45, -100, 39, -97, -87, -84, 29, -37, 48, -93, -58, -98, 3, 10, 89, -64, 45, 78, 90, 16, 108, 99, -55, 102, 40, 21, 51, -44, -106, 6, -63, 20, -85, 7, -56, -88, -52, 10, -98, -108, -12, -8};
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
    msg.setTimeStamp(0.6239475149322521);
    msg.setSource(33962U);
    msg.setSourceEntity(251U);
    msg.setDestination(47318U);
    msg.setDestinationEntity(190U);
    msg.seq = 4056363565U;
    msg.destination.assign("MSQDXZSHEAEZFGOQFKYHQYPPTSOOTAUBSCGIMLVHEYHSNGBODHIF");
    msg.timeout = 11498U;
    const signed char tmp_msg_0[] = {125, 113, -94, 71, 117, 122, -97, -78, -87, -2, -50, -120, 3, 117, -29, 40, -100, 76, 31, 79, 45, 49, -107, 5, -106, 86, 61, -80, -115, 87, 28, -102, 100, 73, 68, -56, 69, -120, -113, 10, -14, -123, 53, -52, 90, 48, -3, -34, 119, -110, -124, 28, -19, 79, 14, -77, -11, 27, -102, -21, -51, -31, 35, -64, 16, -43, -5, -51, -73, -113, -77, 101, 78, -51, -26, -67, 87, 3, -63};
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
    msg.setTimeStamp(0.7380406586348581);
    msg.setSource(7114U);
    msg.setSourceEntity(95U);
    msg.setDestination(39456U);
    msg.setDestinationEntity(85U);
    msg.seq = 1326074194U;
    msg.destination.assign("BJCBGOYOZEZQAYDLLJGVNDWVBTTTXRQJUAMLGQRGYPEPEYVWBEKIXNAQTZUATQSVXIFUVLPFIKHCEHYKPIZMXNYHKPIXACSZVTAWOJRECUAQDBSXYQCTMLOSNPRIWOFOSNBJSNBZMRDEVAKQOUFWZUWINA");
    msg.timeout = 18170U;
    const signed char tmp_msg_0[] = {57, 15, -58, -65, 95, -86, 38, -75, 109, -32, -115, -16, 61, -51, 89, 112, -19, 108, -121, -77, 97, 83, -14, 99, -125, -1, -89, -76, -98, -98, 94, 46, -21, 66, 78, 6, -65, -30, 52, -83, 0, -88, 47, 5, 3, 43, -50, 57, -29, -63, 89, -59, 102, 14, 67, -57, 17, -9, -106, 82, -92, 85, -31, -87, 101, 98, 57, -36, 21, -123, -98, -110, 37, 35, -53, 89, -66, -19};
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
    msg.setTimeStamp(0.01611027341172755);
    msg.setSource(35439U);
    msg.setSourceEntity(205U);
    msg.setDestination(61246U);
    msg.setDestinationEntity(26U);
    msg.source.assign("BEUQQYGOACYUXYYUYTNGKJBEMYQBRGZTDMQEO");
    const signed char tmp_msg_0[] = {126, 56, -21, 13, 51, 50, 15, -42, -120, 71, 100, -91, -24, -88, 106, -55, -64, -53, -77, 42, -117, 60, -70, 18, 20, -120, 88, -115, -58, -47, 32, -58, -122, 117, -48, -93, -90, -17, 115, 78, -13, -75, -104, 105, -99, 93, 39, -36, -43, -118, 37, -48, -87, -40, -97, 75, -70, -103, -114, -7, 101, -69, -63, 94, -86, -40, 85, 11, 5, -51, 56, -97, -78, 63, 63, -62, 27, -67, 110, -62, 107, -9, 28, -126, 45, 91, -43, 29, 84, 100, -24, -28, -74, 25, -17, -47, 23, -19, 103, 49, -15, -5, -67, 82, -25, -107, 120, -75, -84, 45, 57, -50, -33, -82, 56, 55, -45, 95, -3, 85, -52, -106, -87, -49, -56, -75, 73, -16, 52, 118, 113, 122, -91, -38};
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
    msg.setTimeStamp(0.05051504533492379);
    msg.setSource(49512U);
    msg.setSourceEntity(148U);
    msg.setDestination(26389U);
    msg.setDestinationEntity(241U);
    msg.source.assign("PTDCUMJVDRSVGXULQTGJUTWVCSPJSEJKRGAYOHGKPTQRXBBYCWOOVJIRMMZPNZLKTNRPRROHE");
    const signed char tmp_msg_0[] = {93, -29, 97, -125, 9, -46, -44, 53, 17, 59, 81, -76, -43, -67, -97, 98, -18, 76, 14, 14, 3, -44, -27, 34, 70, -22, 112, -38, 22, 25, 94, -102, -20, -28, -45, 35, 39, 100, -7, 27, -33, -124, -58, 101, -12, 64, -53, 122, -116, 58, 103, -57, 14, 64, -71, -97, -108, -70, 1, -4, -46, -36, -109, 74, 104, -50, -6, -36, 19, -101, -126, -79, 91, -112, 43, -117, 37, 115, 34, -28, -6, -60, -48, 61, 125, -108, 14, 17, 43, -116, 123, 52, -56, -4, -101, -51, 20, 21, 17, 14, 27, -98, -124, 15, -45, -49, 120, -25, -4, 106, 102, 115, -42, 124, 9, 79, 25, -68, 86, 117, -123, 46, -75, 19, 72, 40, 39, 0, -63, 64, -115, 11, -108, 59, -51, 103, -31, 12, 10, -51, 49, -43, 97, 56, 40, 112, 6, -16, 26, 17, 65, 46, 86, 100, -31, 28, 85, 18, 26, -111};
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
    msg.setTimeStamp(0.4279906750276735);
    msg.setSource(10391U);
    msg.setSourceEntity(211U);
    msg.setDestination(40374U);
    msg.setDestinationEntity(163U);
    msg.source.assign("DYPBUTQDXAPDSCZBTNNBBVSCUBPREHYRIRTDLGTTESVYYVXEAUORBDNAKEJJJIJBWSPOTZZTCQRJLFHIWECNJLIQIAWCERZKRMCMDHXGIFQGEGAZZZLVMNROQUOAVVOUFZKYKHZLUSYHMXHUCRGUMGHNFIJPMSYSMOLFWSOQAJNKPLPXEOMDYFCCQKMFJIBRVOCIFMPNLPDUXANHISKAEVWZJXGKPXDBTOQQSNLQULGYKWWXVGV");
    const signed char tmp_msg_0[] = {-11, -9, -117, 13, -72, 88, -42, 45, -10, -80, -24, 5, 113, 41, 38, 6, 39, 67, -125, 1, -98, 119, 86, -24, -95, -20, -18, -33, -126, 120, 68, -101, -124, 105, 63, 99, 97, -54, 11, -110, -37, -80, -49, 73, -3, 56, -42, -16, -92, -109, -87, 105, 78, 95, 101, 94, 12, -67, -51, -125, -90, 19, 36, -106, 8, -107, -91, 108, 30, 4, 38, -34, -35, 101, -71, -17, 124, 109, 24, 73, 2, 33, -118, -10, 17, 118, 83, 73, 106, -113, -93, -3, 53, 35, 90, 117, 122, 31, 93, -105, -57, -109, 97, -94, -36, 104, -11, -94, 114, -111, -118, 69, 90, 3, 47, 34, -21, -126, 54, 121, 2, -107, -34, 116, 45, 54, 15, 54, -116, 10, -54, 89, 39, -85, 48, -109, 44, 79, -93, -112, 71, 1, 4, 3, 124, 22, 97, 102, -21, 119, -109, 71, -3, 93, 68, 60, -69, 39, -47, -80, -58, -104, 63, -45, 29, 93, 104, 65, -50, 84, 24, 84, -21, -62, 0, 16, 8, 106, -94, -117, -93, -46, 71, -26, 86, 7, -34, 77, 87, -24, 57, -81, 93, 17, 51, 6, 38, -61, 109, 64, -47, 46, 13, -33, 109, 52, -91, 48, -9, 34, 11, -75, -26, -62, -41, -20, -110, -30, -112, -92, -13, -21, 98, -53, 101, -120, -95, -63, 65, 12, -73, -9, 86, -10, -12, -103, 77, -111, -31, -8, -63, -70, -78, -77};
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
    msg.setTimeStamp(0.17965109216397412);
    msg.setSource(37399U);
    msg.setSourceEntity(19U);
    msg.setDestination(62685U);
    msg.setDestinationEntity(125U);
    msg.seq = 1430222285U;
    msg.state = 23U;
    msg.error.assign("HUWKWADOQRALVUADWYZEXOPKSNBJWZMIPMCZESYGXUMETQYSXKJXIXXEMTCCVRIEMKTDWULUHTVICRZCQJDHXLOPKIQXGFYUR");

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
    msg.setTimeStamp(0.7675911916968371);
    msg.setSource(3781U);
    msg.setSourceEntity(105U);
    msg.setDestination(64957U);
    msg.setDestinationEntity(57U);
    msg.seq = 1874051004U;
    msg.state = 125U;
    msg.error.assign("HKRFOSYYNKDSUIGZAVLOFIKEVLSYPZQAYAGGARMIWFWIZCDGBEHOAJXPYNSYJJMFWIPELHSPARYKOXUVKVDCBOEDPNTUVXUBTPDPXSRQJQOAGVOYYWC");

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
    msg.setTimeStamp(0.8238253941335413);
    msg.setSource(30928U);
    msg.setSourceEntity(172U);
    msg.setDestination(4204U);
    msg.setDestinationEntity(75U);
    msg.seq = 2088128483U;
    msg.state = 206U;
    msg.error.assign("TUNQRJNYGXPKIJNLQYVWHFYCSRDQPVYFA");

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
    msg.setTimeStamp(0.7686856067612415);
    msg.setSource(41116U);
    msg.setSourceEntity(164U);
    msg.setDestination(56684U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("UEFZOYTJDRWQNQYCTJJWQOLQVMMYMCRQSFPXQXUFAKXBSUTYUDGIWVKNGJGWQVHCUYCAHCEDXNQFZUEPPRKXNDTLLDGYVTXRPSCJKMDDMOBRFQIOOLEDNSZMMZTYWWBPPSLOTGRZSEJVOAEMYBHHIDBEZLWNGOBZAJHIXOXWSTKAELLXEVGNQAPFURVCIMKKOHKBCXBMYFFZSIHPUHA");
    msg.text.assign("YCCFGSFEEUATQCULADUEFVWJDQWTEFXDVKYXVGIYIEWGZXYZYLWQBXMOFSDKCRALROLKVNIFJSJPKRRHIBXTMXOPLIZJHSBNUHEPGEBYCQQTHIREMFOGNDBWYHSDKMILLZWOBJCMKASNDGXOKSKADNOJTUUZ");

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
    msg.setTimeStamp(0.33574275660072805);
    msg.setSource(23376U);
    msg.setSourceEntity(253U);
    msg.setDestination(25759U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("AQYENGJWPAIMCBZOARKWTMWFYPQPHCXWJKKSZCDISJLYCXTDNUEMQYEBHPKBWPDQIDGWSRTGZGSAVUNTORIKDVBWXBLKMKEQTXVLHQZRPVNVNVGUVLDBASZDILUFEHBYRLLGUP");
    msg.text.assign("UAZLBLFFFRJORSYAVQTBMILINRSTGNGWHXRNINLDARVFNLFEMPVTPVKPOXBKCTNMVJHVQRGCUCJZHNCVYQHUWGQKVKWOZADDHMCUKJHW");

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
    msg.setTimeStamp(0.4960782939788758);
    msg.setSource(3420U);
    msg.setSourceEntity(71U);
    msg.setDestination(43594U);
    msg.setDestinationEntity(139U);
    msg.origin.assign("ZVDIXRIYPQKUMUJHKELMXSRZNNACBYLZMACLWQHRHCFYMWERGQXYUELREDCWZDCGPNGOYUQUDJPFTXAOJLEVAAXMWTCSZBWKVYOWVPZBRCNHXTBLFQBDZHMTHPNCKGYXGDBPUIMRMRZCKVOPJNJASFNZNKXFDVFGURMKEHUAGTWAVWTHLWLGNBQEFLQYCIFDXPIWYUELJQMEOOO");
    msg.text.assign("PVEAIFPNLMKNDWZNWXPQIRPTYJDXVYVRZFRQEKGBMWMPRCBNITHGOBZDMFCJGHVYIZUUJMJMSTZWONFZEUTIXQYQGBXCBFSURTEKQCXMPKQBHFAHLESPFMRULCHRDDVAPPHMLYWJLBIGOEMKTYOVXALEGSKNYIJBCVPKJQAFUGOELCCYLJHKTYOOFXHNWIXVDBQXAOSDL");

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
    msg.setTimeStamp(0.3699033744211693);
    msg.setSource(53182U);
    msg.setSourceEntity(221U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("XDVNYJVTLAZDCKUIBFXICZIMPNPBZAIKLVKDREEECLKLBJIHMZCVWHGDQIBVXVWGPLCLQMDMFPWBDKPLSEQOFSMTIEXGCAAGFDYFBTHHNBOBFPHVFKJWSEXTYRXASFCEJVJMRNXRFMNEWKPYMUBYLRGXHHGWYQPLS");
    msg.htime = 0.7911421924943196;
    msg.lat = 0.5489572675940184;
    msg.lon = 0.44113453153845206;
    const signed char tmp_msg_0[] = {-34, -82, 30, 111, -67, 114, -73, -92, -58, 100, 7, 33, -20, 72, -38, 19, 69, -99, -117, -50, -96, 103, -67, -20, -14, 64, -88, -117, 28, -69, -10, -126, -111, -110, -38, 35, 63, -40, -111, 84, -107, 20, -37, 64, 105, 53, 17, -72, -78, 21, 116, -97, 96, -20, -66, 32, -29, -114, 76, 5, -90, 94, 51, -27, 60, 34, -32, 62, 54, 13, 98, 37, 4, 66, 120, -88, -124, 31, -37, -49, -95, 6, 1, -86, -101, 74, -82, 122, 13, 16, 40, -96, 2, -4, 118, -122, -37, 14, 88, -63, -23, 119, -59, 54, 110, -83, -32, -99, -122, -8, -91, -90, -21, -34, 4, -101, -42, 52, 49, 108, 36, -110, -127, 122, -69, -73, 24, 30, 23, 85, -5, 90, -43, 26, 113, -75, 25, -118, -126, -98, 35, -33, 86, -7, 101, 76, 29, -126, 42, 97, -72, -12, -120, 120, -117, 3, -1, 77, -39, -57, 94, 24, 1, -103, 16, -92, -61, 97, -122, 51, -67, 106, 23, -93, 92, 81, -83, 88, -111, 23, -31, -102, -73, 125, -108, 30, -68};
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
    msg.setTimeStamp(0.42709023781699473);
    msg.setSource(37017U);
    msg.setSourceEntity(102U);
    msg.setDestination(34567U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("GIOUFZUNEPELPMWCJHIHYXUOIZQCBKOTEVTXBYNZYAAHPLRTYNDDCEZFGHFLNJORXZQEZAVHKZWBOACDCUWSXK");
    msg.htime = 0.051628175725057734;
    msg.lat = 0.7932814150800516;
    msg.lon = 0.8154507148748749;
    const signed char tmp_msg_0[] = {115, 111, 125, 47, 75, 31, 34, 69, 37, 73, -32, -4, -126, 41, 70, -8, 8, 124, -25, 37, 119, 99, 14, 88, 60, -35, -111, 81, 86, 99, -4, -88, -72, 16, -16, 18, -35, -79, -43, 9, -26, 85, -107, 66, 27, -97, 3, 67, -83, -54, 82, -5, -36, -69, -117, -78, -53, 1, -18, -65};
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
    msg.setTimeStamp(0.5349263034643194);
    msg.setSource(17745U);
    msg.setSourceEntity(170U);
    msg.setDestination(16990U);
    msg.setDestinationEntity(188U);
    msg.origin.assign("ITQDNZNYJHXYYAXGOQSJQYLOXTVUJKPFDFBHVLPHGIDFRMVUSCBLWTMCEZZIQZSTILEFTDZHPREBYZPORXPVHWKYFIFQAKIQXJGHTXUVOUEQLGMNWBOXVHSPOCPICGAFXTJJWMHYVRIMUJZNMADFBJNSMUCKVGDJEURSQKK");
    msg.htime = 0.06203016865025157;
    msg.lat = 0.8652721731403296;
    msg.lon = 0.6753386124536236;
    const signed char tmp_msg_0[] = {84, -84, 39, -15, -125, 120, -11, -117, 51, 117, 83, -74, 33, 46, -37, -93, -31, -23, 33, 53, -56, -124, -114, -54, 81, 7, -60, -74, 88, -55, 30, -37, -68, 25, -128, 65, 67, 35, -20, -77, 81, 26, 81, 28, 72, -83, -55, -66, -38, 51, -29, -85, -74, -114, 59, -93, -69, 68, -70, 54, -120, 111, -107, -82, 94, -126, 116, 25, -34, 19, 35, -29, -99, 62, -28, 29, 33, -32, -98, 115, -100, -105, -47, -67, -72, 41, -20, 49, 122, -114, -40, -95, -104, 16, -31, 109, -4, 35, 110, 16, -27, -102, 61, 60, 52, 68, 27, -16, -107, -14, 68, 59, -44, 81, 124, 47, 59, 72, -49, -26, 34, 47, 96, 32, -5, 105, 25, 77, -101, -102, -107, 92, -26, 71, -96, 110, 73, 9, 71, -16, 23, -126, 76, 62, -128, -111, -1, -4, 34, 54, 90, -109, -30, -62, -70, -124, -78, -85, -16, 47, 8, 47, 3, -97, -75, -23, -117, -20, -99, 126, -24, -77, -49, 62, -35, 124, -90, -108, 4, -49, -49, -40, 22, -118, -42, 115, -41, 28, -118, -42, 88, 63, -22, 17, -22, -105, 93, 70, 72, 67, -33, -103, -84, 79, -108, 120, -128, -72, -45, -99, -90, -9};
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
    msg.setTimeStamp(0.06297829589765269);
    msg.setSource(45950U);
    msg.setSourceEntity(191U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(225U);
    msg.req_id = 32666U;
    msg.ttl = 15964U;
    msg.destination.assign("XWKPPDQAOSSFRUKUBJVZBCCVVAYII");
    const signed char tmp_msg_0[] = {40, -27, -88, -58, 63, -69, 2, 25, -41, 42};
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
    msg.setTimeStamp(0.9602193989287818);
    msg.setSource(50105U);
    msg.setSourceEntity(183U);
    msg.setDestination(32159U);
    msg.setDestinationEntity(69U);
    msg.req_id = 642U;
    msg.ttl = 26076U;
    msg.destination.assign("ABHFOFFNUATBFHIEDYGKQPOMJKFZILSKRHLBKFJLPBYGSYPUEXCGYWCZVGMNMUSVJAJTKCOM");
    const signed char tmp_msg_0[] = {119, -106, 100, -7, -45, 62, -125, 55, -65, -122, 11, -27, 27, -36, 83, 42, -81, -63, 95, -55, -26, -47, -105, -75, 16, -121, -128, 111, -70, -43, 120, 110, -100, 98, 66, 1, 49, -81, -5, 30, -37, 98, 15, -48, -85, -74, -41, -17, -50, 83, 0, -100, 95, -48, 102, -13, 106, 4, -43, -101, -18, 75, -53, -12, 50, -113, 116, 57, -107, -7, -2};
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
    msg.setTimeStamp(0.3687420286432409);
    msg.setSource(8854U);
    msg.setSourceEntity(23U);
    msg.setDestination(42939U);
    msg.setDestinationEntity(48U);
    msg.req_id = 1237U;
    msg.ttl = 2097U;
    msg.destination.assign("KOYZBAWMILMATYLNXKKZPGWKHGVSTULKKDQAVWCOXRPJTOPUFHNXAYCQYBDFOPOCLMFZUO");
    const signed char tmp_msg_0[] = {54, 36, 19, 49, 120, -2, -126, -120, -127, 110, 68};
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
    msg.setTimeStamp(0.46258553212580267);
    msg.setSource(50947U);
    msg.setSourceEntity(179U);
    msg.setDestination(43577U);
    msg.setDestinationEntity(198U);
    msg.req_id = 5187U;
    msg.status = 130U;
    msg.text.assign("LTWFXZUODFANIUHPRDGIIXJFWFJBYPCHBBVPSNNSIKLXMLVYQIWKSRHSJEACLJPYNSDTDPZGRJEBYSPEUAOHAGWVEBWVIRUICSHEEQTZGLQKBKVRYWNZHTRRWFGJYLTEATJXRDIUCBZOQLNMPKFOQGHOKUOFKBHQZAANXEIJYCVHTPJYEAC");

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
    msg.setTimeStamp(0.33895885911634305);
    msg.setSource(37196U);
    msg.setSourceEntity(34U);
    msg.setDestination(12516U);
    msg.setDestinationEntity(109U);
    msg.req_id = 13178U;
    msg.status = 172U;
    msg.text.assign("JTLJFNXSYNZDOBXSWOOQBKUXOMWPAKCARBCUHRZVXGUPLQAFHPOXTVTHTNBXLJWMPRSFYRFXLJCSRVAIWISUNDQGICGVYQNKRBHINOMVIUYQERDEKLKZVMYCVETYUFSZFNKJMWKQYGSJHOADGOQNJSXHIJIPHWZJGNDWJZAQMBAZWQFPYADDPHIMLRBVBGPHRELXTEMUYEACYCKAUONCULBKCMIPSOEEDTQRDEBEKHGZWIFWZL");

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
    msg.setTimeStamp(0.13570726521577825);
    msg.setSource(5371U);
    msg.setSourceEntity(152U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(72U);
    msg.req_id = 57600U;
    msg.status = 24U;
    msg.text.assign("LBPBHJSSDGWIHTVELUNTNNHVJUQJWCIZCKXLFMVBTSP");

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
    msg.setTimeStamp(0.6336547974825658);
    msg.setSource(10547U);
    msg.setSourceEntity(215U);
    msg.setDestination(11764U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("STRMWWZATCVICVZDEOAYWKCRDUZJCBPYNNPBFUHBOAFKWYZPNDRVOZ");
    msg.links = 3609405861U;

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
    msg.setTimeStamp(0.29355425489749987);
    msg.setSource(45634U);
    msg.setSourceEntity(120U);
    msg.setDestination(60919U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("CZDICXOUSFXNEWISRDJVATZPRVOQHMKYONGBCBFUUPVSXEXAHBLARZHSOATLXNPJZNAPPWRUI");
    msg.links = 2421430284U;

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
    msg.setTimeStamp(0.8049993188093435);
    msg.setSource(53499U);
    msg.setSourceEntity(35U);
    msg.setDestination(7844U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("QXTUSNPVWOUFAWKKYRNDSBLKAABAXQAOLKZUHMVSJJPYUEMPGRASONQSZDSIWZDVYYLFBFMXNWEKMUQBBVCPBJDILIJLXGECELUTIOHZCDRZTUWRKQYDSRIGUGXTFJQVTJJVOYSTNTQTWMYHQFVUEHEAGOAOZAGOWCTNBMTWQODPCECXYJZLNJLZKDPXMCPPMXHCUFHJFCBBZIOSWRRHXRIIGYIPRHZ");
    msg.links = 3458053769U;

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
    msg.setTimeStamp(0.1047270041205891);
    msg.setSource(55541U);
    msg.setSourceEntity(7U);
    msg.setDestination(62602U);
    msg.setDestinationEntity(211U);
    msg.groupname.assign("UTGYMSWCLDQJEHLEVCRUFXRLGEDYCZCSGBWCIOQTYVTGPRNGXWRGDPHPCZTEQSWOBAMCWMMFRZVQKTYHVMDCUDXDSHZUIXMRZEYXFEMOILBYIPTATOFJKJIIYGBYMLZWNUNABXVUPOHQGHYCDBSFQKBAAAXGQGKZKEZAFNNJPMTHUJKZWPPOVWOFVO");
    msg.action = 239U;
    msg.grouplist.assign("MPHKCWSUFDTEGSEYCARGOYMHCJTMQHSEWXRZNPVOXCWWXCFBZRTSTVEKBPNQOZDBLBORYJXUOZIHFARWLAVZOIJOLXZJHSLNGJIWEQDIBTERIMUQRMYWHBFYLWKGUEBTIUMTAMFXXZSLHNNXHEUJNDFSSGQYPCXRBDQPYEQTYAFJGYTIZUPSLKCRAJQDOIUAMLNJAKUD");

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
    msg.setTimeStamp(0.334631791439824);
    msg.setSource(43265U);
    msg.setSourceEntity(106U);
    msg.setDestination(37996U);
    msg.setDestinationEntity(246U);
    msg.groupname.assign("FWYNJYOOLQUOTKOUGXRDNXOEKUCCADARRINXEUHAOHJPIMHPRFXGVTMXAZPEXSSBWMFZPUKLIVEFBEVHDWOCNUYZKGITCDGBRNGSQPJCZKSAVJFWKRJIQLFHBWMVUXBPECLLMDPTSPVBCPYJEQWPTCNKQXMEAEKDBISIHZSTLLNQVJAYFUADAYWHUHUGBBSCDYKYRZVJOHVTNLZ");
    msg.action = 186U;
    msg.grouplist.assign("UEXKTAWTPHONUNFYTSDJISAOXTEVRKJLGQCKLLJAHAPKCKGLUEAVDKJHFTSPTHWQOPBZVBSGTSCWVOGRRYLFYZUFMNOEFWBSTALUMPQMPEQNADUDXFXRCU");

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
    msg.setTimeStamp(0.128538275596061);
    msg.setSource(31190U);
    msg.setSourceEntity(116U);
    msg.setDestination(33402U);
    msg.setDestinationEntity(9U);
    msg.groupname.assign("YXAPGFNLGKMKNXENFHTVXHEOJRKC");
    msg.action = 98U;
    msg.grouplist.assign("UFGLKOARFKPSIQSYYWCSMWBJLMAEFATOZUJDUSTNRCRXGKFYSARTIDRRGOXOXWKRZEWGKSTHHVJEBZNBHBVOVEIIJBLBJHMLWHPKCIVOQUEDETZEQSFZXIZBJRQRBDVPBGGKDTDEVSDCFCNPMHLPLUFDTGULBFWYTZFPPGNGZYXLVUPOXKWKWYNVMZAMJVYDICQX");

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
    msg.setTimeStamp(0.474200630316819);
    msg.setSource(41928U);
    msg.setSourceEntity(13U);
    msg.setDestination(14778U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5815569798689816;
    msg.sys_src = 45123U;

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
    msg.setTimeStamp(0.6890524312386695);
    msg.setSource(58924U);
    msg.setSourceEntity(47U);
    msg.setDestination(44512U);
    msg.setDestinationEntity(59U);
    msg.value = 0.3986145288818739;
    msg.sys_src = 30215U;

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
    msg.setTimeStamp(0.3768165098687837);
    msg.setSource(54362U);
    msg.setSourceEntity(19U);
    msg.setDestination(16745U);
    msg.setDestinationEntity(115U);
    msg.value = 0.861726576889109;
    msg.sys_src = 31311U;

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
    msg.setTimeStamp(0.539654928317156);
    msg.setSource(55111U);
    msg.setSourceEntity(88U);
    msg.setDestination(9871U);
    msg.setDestinationEntity(106U);
    msg.value = 0.035326039035209034;
    msg.units = 197U;

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
    msg.setTimeStamp(0.5087437382321514);
    msg.setSource(43142U);
    msg.setSourceEntity(41U);
    msg.setDestination(49721U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9786072651512387;
    msg.units = 227U;

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
    msg.setTimeStamp(0.8547740696510711);
    msg.setSource(38487U);
    msg.setSourceEntity(242U);
    msg.setDestination(27621U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7180745148681653;
    msg.units = 194U;

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
    msg.setTimeStamp(0.9825897440542652);
    msg.setSource(58523U);
    msg.setSourceEntity(213U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(170U);
    msg.base_lat = 0.14770085519792464;
    msg.base_lon = 0.9172918717796078;
    msg.base_time = 0.02622512572706648;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 31444U;
    tmp_msg_0.priority = 78;
    tmp_msg_0.x = -16209;
    tmp_msg_0.y = 22037;
    tmp_msg_0.z = -4118;
    tmp_msg_0.t = 30943;
    IMC::PowerChannelControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MNZYDEDARYATPNVZYFTGEMSJSBZGVXEXCWKLHEEGONXQBCLADKCZRBARWGOLMQTOYIDJXOILPSPQPTLQHCBFCUVZNHZVRPXYPIFRCXUUPDJMUPFDTLUOXCJFVCLRAZDBSDYWVTFMXSPISQJORIVHMHDKGTHVERKLIF");
    tmp_tmp_msg_0_0.op = 90U;
    tmp_tmp_msg_0_0.sched_time = 0.24320129370010768;
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
    msg.setTimeStamp(0.11426879459504069);
    msg.setSource(39573U);
    msg.setSourceEntity(18U);
    msg.setDestination(39202U);
    msg.setDestinationEntity(48U);
    msg.base_lat = 0.895333456137457;
    msg.base_lon = 0.8794969629123409;
    msg.base_time = 0.6208111305478883;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 1907U;
    tmp_msg_0.destination = 63771U;
    tmp_msg_0.timeout = 0.2209601696714223;
    IMC::TransmissionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 7134U;
    tmp_tmp_msg_0_0.status = 78U;
    tmp_tmp_msg_0_0.range = 0.22629612425925727;
    tmp_tmp_msg_0_0.info.assign("KHODCOALFOVKBVYQYSFDMKBJAEJLXWRXOECMKQUXXBUNNGKNYGZICLSDTAPAMPHJBHMTCHWWYZSMCUIYXAFJCSINIBBVEFZHLPFXTDAKUTRGVSZGKNLGOXJYKCHUIZFPQTISOVGKJUWEHQNMGGWQJRIAFUPTRLHWOPVRVJCYLQHIFYNFTRZZNUSDGQZLMIJLDEIMSB");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.042988654843677865);
    msg.setSource(9206U);
    msg.setSourceEntity(147U);
    msg.setDestination(15552U);
    msg.setDestinationEntity(196U);
    msg.base_lat = 0.7455436326598683;
    msg.base_lon = 0.2712040698696585;
    msg.base_time = 0.16999478903649468;

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
    msg.setTimeStamp(0.36942438092742);
    msg.setSource(59018U);
    msg.setSourceEntity(67U);
    msg.setDestination(8258U);
    msg.setDestinationEntity(9U);
    msg.base_lat = 0.011171041557299866;
    msg.base_lon = 0.6937185428516136;
    msg.base_time = 0.8889410538184124;
    const signed char tmp_msg_0[] = {47, -94, 57, 100, -26, -78, 11, 2, 49, -92, 9, -51, 48, 18, -108, -8, 19, 12, -2, 47, -101, 73, 55, -35, 91, 106, -49, 53, 27, -93, -65, 68, -5, -71, 27, -75, 102, 111, -22, -55, 18, 103, -79, -117, -56, 0, 97, 120, -14, -58, -97, 16, 48, 57, -42, -29, 57, 104, 0, 126, 65, -56, -27, 22, 62, -46, 46, -73, -32, -30, 106, -39, -10, -118, -47, -110, -66, 116, -31, 40, 52, -58, -78, -47, -93, -20, -107, 6, -36, 44, -60, 19, -108, -63, 96, 92, 59, -42, 24, -55, -13, -107, 92, 33, -10, -62, -35, 100, 48, 93, 34, 3, 77, -78, -67, -103, -41, -97, 49, -43, -49, -20, -61, -26, -106, 19, -65, -22};
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
    msg.setTimeStamp(0.5256909014973835);
    msg.setSource(35579U);
    msg.setSourceEntity(254U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(94U);
    msg.base_lat = 0.967497549703182;
    msg.base_lon = 0.8939063967332362;
    msg.base_time = 0.4553835981555314;
    const signed char tmp_msg_0[] = {75, -112, 106, -107, -49, 57, -97, -36, 45, -18, -99, 45, -108, -1, -79, 69, -117, -20, -39, 40, 78, 89, -103, -93, 11, -103, -86, 55, -114, -66, -45, -8, -95, 1, -1, -38, 81, 45, 44, -10, -15, 60, 14, -52, -59, -108, -71, 73, -40, 120, -28, 102, 64, 92, 22, 6, -12, -33, -81, 117, -28, 61, -8, 97, -23, 7, 76, -6, -39, -46, 101, 45, 26, 27, -67, -115, -77, 52, -10, -34, -25, 4, 105, -4, 46, 62, -66, 95, 73, -114, 100, 81, 70, 109, 26, 125, 89, 121, -112, -90, -48, 7, -95, -99, 18, 51, 78, 92, -100, 117, 46, -21, 98, 55, -28, -36, -28, 7, -25, -10, 125, 95, -115, -120, -27, 126, 95, 36, 74, 1, 98, -10, -36, -79, 126, -59, -103, 113, -110, -88, 39, 80, -51, -95, 79, -2, -68, -92, -9, 78, -105, -112, -32, 24, 41, -102, -38, -47, 113, -82, -46, -118, -72, 80};
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
    msg.setTimeStamp(0.7659987397733728);
    msg.setSource(3823U);
    msg.setSourceEntity(21U);
    msg.setDestination(47605U);
    msg.setDestinationEntity(190U);
    msg.base_lat = 0.48655816457263956;
    msg.base_lon = 0.017944666722160774;
    msg.base_time = 0.02328431237461448;
    const signed char tmp_msg_0[] = {-108, 103, 41, -48, 15, 106, 78, 79, 107, 103, -104, 83, 40, -86, 12, -118, -90, 73, 26, -62, -10, 94, 91, -34, -96, 0, -98, -77, -9, -127, -85, -3, -34, -33, -41, -121, 125, 56, 58, -7, -83, -112, -55, 85, -67, 24, 76, 116, -28, 3, 121, 84, -112, -22, 10, 22, -91, -125, -62, -127, 55, 1, 9, -44, 64, 75, -14, 84, 11, -29, 126, 39, -52, -2, -67, -101, -126, -108};
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
    msg.setTimeStamp(0.03241908194967136);
    msg.setSource(17501U);
    msg.setSourceEntity(206U);
    msg.setDestination(20764U);
    msg.setDestinationEntity(41U);
    msg.sys_id = 46377U;
    msg.priority = -128;
    msg.x = 18877;
    msg.y = -19186;
    msg.z = 25680;
    msg.t = 4748;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("TDAANBUUIJKGDEGSPJ");
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
    msg.setTimeStamp(0.31619857304274657);
    msg.setSource(24784U);
    msg.setSourceEntity(41U);
    msg.setDestination(895U);
    msg.setDestinationEntity(119U);
    msg.sys_id = 10619U;
    msg.priority = 63;
    msg.x = -8727;
    msg.y = 30527;
    msg.z = -17831;
    msg.t = 2538;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 4693U;
    tmp_msg_0.lat = 0.16375344580699458;
    tmp_msg_0.lon = 0.05208085418994057;
    tmp_msg_0.speed = 0.3730999803774755;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("ETHGUCRCAZQMLVGSQSLJNMRDCNBYRXKHENSPQTDWZKFLDPRBIFISGFMKSHUYTLAIMOAWEMCOSEFCKBDDIVZZZYOQPFJWYWVVHIOLUULQBKUPLFBYHUOPBCLWKXJIJBQIVOGPPXQAOTRROVNAFVPZXSWRTZKFYTMICGMUXRHTQITDXLCUKQBXNMEAGXZPSZNWVPKWOJIETVXSUSBNALJGMEXTGVFFHOJQCDNAABGYNRW");
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
    msg.setTimeStamp(0.0020997042125774357);
    msg.setSource(47243U);
    msg.setSourceEntity(8U);
    msg.setDestination(500U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 10806U;
    msg.priority = -28;
    msg.x = 5898;
    msg.y = -26590;
    msg.z = 23549;
    msg.t = 7692;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NMMZNJUMXKMODPVBGURITJLFHAESUKXAHAOBNIHZVMFALEBRNWPGWLQRQNGEGRWPVHKILWLEKCCVQMEFTYTOXCCQTFCUDNKGSSCFVVDXVDPVRTZYDPONADCGFZKIKYZLIHFOTSJFSUYJWTIJPYZNCHDO");
    tmp_msg_0.visibility.assign("WRDDQTELFRWWIOCEYLRRUCKDMUVQPFLTOADTOKYUMDDSHTIUMVMFVGBZXGWAPVHEYNVMZVEFJGWCCGAAYWKHJDKNTXPIOPJCEVXGRLZRADJQBTQOEKANCBZUEXYXSZSZQSUTFLFTHIXVZFBKSAGYSPQCVWRWSJEIDNXXKOHRYTPHBEAY");
    tmp_msg_0.scope.assign("ZYJOUJGJRFXNJEHPMBTQCXNEKIFEQZCDPYPCSMNKKHMGGBWLCJUHBN");
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
    msg.setTimeStamp(0.37068413602986705);
    msg.setSource(50453U);
    msg.setSourceEntity(48U);
    msg.setDestination(40470U);
    msg.setDestinationEntity(209U);
    msg.req_id = 15439U;
    msg.type = 20U;
    msg.max_size = 25542U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.24456166512371946;
    tmp_msg_0.base_lon = 0.8474522464060189;
    tmp_msg_0.base_time = 0.013606198186563834;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 42675U;
    tmp_tmp_msg_0_0.destination = 51518U;
    tmp_tmp_msg_0_0.timeout = 0.11973240658746942;
    IMC::Target tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.label.assign("USAVACGBBREWXUYOIKFWLFPSEXZNRUATOASHAJUNWYKITHECIBNXLNWCEOSHYEZWUHHXMMSXOJOHXSJQJYMIPQPWRSPTGJOCUCFRPDNYKZHMMWJLBDTVUYOJGBYTNJSZKVDDLYLERZLAOQPPTJCGQKJU");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7797420107487217;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.17468385952722498;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8219392614396743;
    tmp_tmp_tmp_msg_0_0_0.z_units = 248U;
    tmp_tmp_tmp_msg_0_0_0.cog = 0.8019658692835291;
    tmp_tmp_tmp_msg_0_0_0.sog = 0.11479448997698649;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.40965222221680087);
    msg.setSource(44839U);
    msg.setSourceEntity(15U);
    msg.setDestination(45899U);
    msg.setDestinationEntity(228U);
    msg.req_id = 4178U;
    msg.type = 207U;
    msg.max_size = 62381U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9441603909184342;
    tmp_msg_0.base_lon = 0.47614748043262334;
    tmp_msg_0.base_time = 0.43548169901833056;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 30194U;
    tmp_tmp_msg_0_0.destination = 37600U;
    tmp_tmp_msg_0_0.timeout = 0.5973652266273868;
    IMC::TeleoperationDone tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.5477083468185402);
    msg.setSource(20525U);
    msg.setSourceEntity(12U);
    msg.setDestination(10839U);
    msg.setDestinationEntity(10U);
    msg.req_id = 41093U;
    msg.type = 56U;
    msg.max_size = 18070U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9564712982165519;
    tmp_msg_0.base_lon = 0.49436026839984926;
    tmp_msg_0.base_time = 0.011943004856795336;
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
    msg.setTimeStamp(0.7408638859354354);
    msg.setSource(63523U);
    msg.setSourceEntity(218U);
    msg.setDestination(8358U);
    msg.setDestinationEntity(94U);
    msg.original_source = 35064U;
    msg.destination = 8126U;
    msg.timeout = 0.9058823691158158;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.47325942895197703;
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
    msg.setTimeStamp(0.27181546492402353);
    msg.setSource(7312U);
    msg.setSourceEntity(17U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(131U);
    msg.original_source = 6475U;
    msg.destination = 39349U;
    msg.timeout = 0.45376294378271587;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 12947U;
    tmp_msg_0.control_ent = 174U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 53U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.43530896037063815;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 248U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.022885003099618273;
    tmp_tmp_tmp_msg_0_0_1.z_units = 25U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.5415842614560331;
    tmp_tmp_msg_0_0.lon = 0.6966473246609555;
    tmp_tmp_msg_0_0.radius = 0.5272377338749298;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 226U;
    tmp_msg_0.proximity = 229U;
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
    msg.setTimeStamp(0.4101621214337916);
    msg.setSource(44768U);
    msg.setSourceEntity(154U);
    msg.setDestination(17247U);
    msg.setDestinationEntity(114U);
    msg.original_source = 61148U;
    msg.destination = 37718U;
    msg.timeout = 0.17284697193288967;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("ZHRTVHPFOVWLADWYANUXBZFTKCSKROFJSTNPEEWEFXDLYRFNNLIXZHXXHQWIAUYATZHJJEYOZQBLQKUCPGBQZHBPRZOTMKLGMQRBIDNESYKKVHRPDBTCVMYMUUNWPOODNEUQISFBGMYVJAWDKGPANYSIJXUVOOC");
    const signed char tmp_tmp_msg_0_0[] = {-61, -113, -73, 52, 63, 83, 82, 52, -53, -56, 21, 45, -91, 117, 47, -69, -62, 34, 115, 23, 105, -28, 26, -101, -38, 71, 116, -57, -41, -22, -35, 72, -111, 121, -32, -94, -40, 39, 27, 96, 5, 76, 25, 102, -80, -72, 120, 68, 25, 108, -102, -88, -82, -88, 31, -96, -3, 73, 113, 70, 19, -128, -109};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5965247480663065);
    msg.setSource(39581U);
    msg.setSourceEntity(54U);
    msg.setDestination(1231U);
    msg.setDestinationEntity(38U);
    msg.type = 235U;
    msg.comm_interface = 15203U;
    msg.model = 7414U;
    msg.list.assign("ENBSVMTKNBLNYUDOQQAMIVTZCDAURXIHYTDJSCXXHEAEJPJGPLWGQQOOQMIZHYO");

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
    msg.setTimeStamp(0.6438590239589613);
    msg.setSource(39281U);
    msg.setSourceEntity(189U);
    msg.setDestination(35400U);
    msg.setDestinationEntity(176U);
    msg.type = 180U;
    msg.comm_interface = 51424U;
    msg.model = 40472U;
    msg.list.assign("IBADCSAXPPKYUOYWOKTBLYQZDBKYYRRLMDGMNCJTFCHHAVJXARMDDNWDXFNEHOAIQKWJJLSEOLVVNZOOCFEZZMFASNEBHBTGZCZOGRNIKFQQFFPFUKSPWPVEJVZSKDMNHYTVPZYQBSMUQLTVGURJJNGWEMONXRZPQCGXQRMTPKRSYIWPJTZELEIWTAFANEXBDHKSIFRIUUQXHYCGJCTQIVSUDUGM");

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
    msg.setTimeStamp(0.002436375668468549);
    msg.setSource(44929U);
    msg.setSourceEntity(27U);
    msg.setDestination(24057U);
    msg.setDestinationEntity(14U);
    msg.type = 61U;
    msg.comm_interface = 36731U;
    msg.model = 15857U;
    msg.list.assign("NDCJCUYSATKILMGBJOJIGCWFNSZXFAEQKWEGZIEJLZONWMJKHQUEQXYINVULYONHOPCLYAJEADBVLVDCESO");

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
    msg.setTimeStamp(0.7977773324013824);
    msg.setSource(40072U);
    msg.setSourceEntity(93U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(201U);
    msg.type = 147U;
    msg.req_id = 3254241859U;
    msg.ttl = 62323U;
    msg.code = 188U;
    msg.destination.assign("DGOXLXSFCUBZEMGYRYQHTEBKAWHTIMVBWXJUWOGXCKOGAIHSGPKLMVOIWFPWJTAVNVRJQVEHPLMKRSQITNDBCTNURFZPCDENUSEFYEQUELSCGDYHZONBAZLNRZLVVFTGDLUWHJAYDUOLIQBOHKIPTYBXBKDHNMLIYSS");
    msg.source.assign("ZCDOJZQIOJGTJRNMTGKRSFUGYXQFQYFYDBWZNTTPLPRNHCOVGNJWEOOEURUZJAHINCFIONUXOLMKMJRVTSDWAGXZNZPVXIUDYHALCFWQUWXBPIBXYRIAVFIZLMKNIQSWEOETHDBPXEGBSRQCMWLCTAFIXVLHMDEVEGLKUKWMAVFSPUJDACBYRHVTAPXUVEOSWMRUBCQZXLJCKYTWY");
    msg.acknowledge = 190U;
    msg.status = 214U;
    const signed char tmp_msg_0[] = {7, -33, 24, 121, -31, 30, -117, -105, -17, -7, 12, 53, -97, -100, 90, 22, 50, 120, 76, -60, -9, -117, 61, 89, -19, -36, -88, 93, -39, -9, -72, 109, -100, -104, 68, -108, -111, -110, 74, 87, -105, 58, -127, 60, -34, 36, -14, 121, 77, 24, 96, -100, -81, -91, -34, 120, 21, -88, -66, -9, -86, 17, -104, 27, -93, 50, -6, 122, -92, 91, 10, 64, 65, -71, -124, 100, 53, 37, -73, -56, -51, -48, -82, 23, -124, 40, -48, -73, -2, -105, 11, -40, 100, -117, 107, -119, -17, 51, 17, -76, -104, 109, 47, 34, -83, -120, -9, 58, 68, 82, -28, -126, -80, -25, -20, 50, 113, -52, -82, -42, 68, 3, -47, -112, 40, 15, 25, -94, 53, 68, -31, 57, 104, -65, -42, 48, -16, 4, 43, -10, 80, 12, 97, 76, -86, 51, 19, -24, 50, -33, 125, 104, 71, -47, -66, 58, -74, 27, 64, 19, 8, 84, -83, 117, 6, 10, -43, -36, 101, 76, 68, -29, -63, 34, -111, -79, 52, -51, 22, 102, -28, 49, -41, -128, -79, -106, 21, 97, -65, -13, 78, -27, 70, -66, -90, -51, -34, 32, 88, 103, -93, 115, 68, 24, 85, 0, 35, -94, -10, 27, -99, 110, -28, -82, -116, 72, -87, 86};
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
    msg.setTimeStamp(0.23845942377064655);
    msg.setSource(33035U);
    msg.setSourceEntity(254U);
    msg.setDestination(28422U);
    msg.setDestinationEntity(74U);
    msg.type = 100U;
    msg.req_id = 1596273658U;
    msg.ttl = 42822U;
    msg.code = 88U;
    msg.destination.assign("BHULEWWANYSEBETZFJKJHOQAIEXKBKKNBVERWFUIAOZMHWQJGQOCOXMLRYCOV");
    msg.source.assign("RMTWZJQQCR");
    msg.acknowledge = 131U;
    msg.status = 24U;
    const signed char tmp_msg_0[] = {-49, 2, -31, 113, -27, -4, 89, 75, -38, -66, -31, -124, -87, -86, -96, -116, -3, -42, -31, -96, -128, 119, -68, 11, -96, -19, 75, -24, 44, 59, 83, 8, 37, 63, 24, 29, -34, -21, -73, 55, 47, 96, -14, -90, -53, -17, -78, -83, 56, -35, -84, -59, 64, 69, 55, 60, -56, 56, -39, 53, -116, 80, -58, 111, 90, -63, 113, 44, -89, 96, 11, 16, 118, -56, -78, -62, -113, 72, 32, 79, -49, 104, 22, -99, 23, 65, -6, -52, -39, -89, -40, 96, -61, 43, -63, 65, 17, -43, -118, 76, -45, -119, -118, 68, 62, 17, 110, 110, 56, 66, -81, -34, 63, 46, -85, 27, 21, 37, -38, -40, -124, 50, 77, 87, -70, 46, 120, 79, 105, -123, 6};
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
    msg.setTimeStamp(0.7371830038019516);
    msg.setSource(12759U);
    msg.setSourceEntity(152U);
    msg.setDestination(33095U);
    msg.setDestinationEntity(91U);
    msg.type = 17U;
    msg.req_id = 1552314004U;
    msg.ttl = 61963U;
    msg.code = 254U;
    msg.destination.assign("MEYUTNLPKXZJEEKCSKHWANRKEQZDQMCDQOOEEGHDXGDHUSCHVDHKLIDGJXGLPANXPHEDQBAOWOIUNLCMLOJHA");
    msg.source.assign("OYEHIGSRJPOWHAROMFWNTRBJXJYEOQGILJFKZEVWAAZRTOHQWMGBKXOUCYKVPTFSOCJTFFLRPKIMXSXQKQHWMVCTQJSCNQAKTWGSUALLJXWBNGIIFQELPPYSHAMBIGGYJYVDAUZMVXCZDHQNBEHURMCFNIDKBNCRPYTNCSDXMDSBLSGDJPHUCUAONZZDFP");
    msg.acknowledge = 171U;
    msg.status = 123U;
    const signed char tmp_msg_0[] = {53, -7, -125, -67, 112, 42, 25, 94, 54, -127, -58, 92, -74, -116, 68, -21, -69, -12, 63, -4, -80, 20, -5, 111, -85, -52, -30, 54, -123, -7, 9, 18, -2, -97, 56, -35, 95, 61, -30, 34, 92, -14, 25, -116, 83, 93, 6, 40, 72, 113, 35, 119, -119, -42, -90, 46, -99, -65, -111, 44, -37, -14, 14, -8, -61, -62, 69, 110, -36, -72, -31, -5, -115, -5, 82, 2, -75, -8, 114, -37, -39, -71, -57, 60, -58, 49, 31, 90, 57, 20, 4, 27, -49, 44, -69, 2, -119, -51, -44, -116, 21, -80, 120, 98, -45, -107, -39, -73, 97, -39, -37, -61, -84, -45, 41, 113, -91, -85, 58, -124, -56, -71, 15, -72, 94, -23, 122, -22, 49, -72, -60, 52, 79, 77, -67, 97, 45, -100, -76, 76, 53, 1, 72, 72, -42, -8, -78, 21, -40, 18, -60, 89, -44, 123, -50, 14, 96, 64, -98, 59, 123, 108, 85, 81, -41, 85, 58, 28, -22, 71, 80, 62, -120, -120, -128, -48, -111, 14, -109, 23, -64, 117, 10, 61, 101, -30, -72, 3, 118, 49, -111, -76, 64, 74, -40, -105, -33, -17, -31};
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
    msg.setTimeStamp(0.21983492430983864);
    msg.setSource(10141U);
    msg.setSourceEntity(61U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(201U);
    msg.id = 59U;
    msg.range = 0.4700066089533468;

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
    msg.setTimeStamp(0.047617840803088174);
    msg.setSource(325U);
    msg.setSourceEntity(133U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(210U);
    msg.id = 91U;
    msg.range = 0.7113822458079403;

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
    msg.setTimeStamp(0.9165364760515509);
    msg.setSource(49437U);
    msg.setSourceEntity(189U);
    msg.setDestination(53679U);
    msg.setDestinationEntity(129U);
    msg.id = 216U;
    msg.range = 0.6537508518699663;

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
    msg.setTimeStamp(0.938663206899507);
    msg.setSource(28865U);
    msg.setSourceEntity(73U);
    msg.setDestination(13126U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("NCXTTABXERHIFGJMYTLASIWRDLMMJWVUXZIQUOPTEYWOJGKHTBUCDMGQGYCSMHKESINVWOJADYBMZNFMVEIHXWRBOXEIKSDPOVOSOWTWOZFAOSSQXTJZGWNTXEHDLPWNCMJLUVUFDBKBZEFKFXEDIPHLIVLFENCPGCUZAVBRYNUPKTUTKGHROCSJDANQQXDNVMLRRNYFSYQFCPYRVKKDLUJRLB");
    msg.lat = 0.06676040836525043;
    msg.lon = 0.8401870052688106;
    msg.depth = 0.7767751541913284;
    msg.query_channel = 210U;
    msg.reply_channel = 10U;
    msg.transponder_delay = 74U;

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
    msg.setTimeStamp(0.9149448934908698);
    msg.setSource(63261U);
    msg.setSourceEntity(41U);
    msg.setDestination(55643U);
    msg.setDestinationEntity(126U);
    msg.beacon.assign("FXMTISGTTLTTWIFZAZHEKNIDYRTONGWXRELYRXNZHVBMWDSGPXHGZYPNMLFTLCZCACPSYVMJVHRJVVSZWOABDIOPRFBMQKEEUNNWIFRSHXMMHACPLUBWEVWUDYVGTYMUDJNDALLPFPKDZMXAQOPAQLPKFWNEHEXQZOAVCQZHEJGJEFUCFGI");
    msg.lat = 0.42867045843076645;
    msg.lon = 0.9127747629000704;
    msg.depth = 0.6795573150325166;
    msg.query_channel = 164U;
    msg.reply_channel = 110U;
    msg.transponder_delay = 52U;

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
    msg.setTimeStamp(0.5949162208766803);
    msg.setSource(47281U);
    msg.setSourceEntity(168U);
    msg.setDestination(16382U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("UWCWZKBHPQXJAEYXSGPCKYAUFVFVFBCCYZGNPSUMMSHLRGFBMDRFAHRCLNBRDRIJEPEPDZKSUXECCFTDOOYHYYUQTKJOXGVFQTLUWLZWDVVNTLMDKXQDEOSBHXRZNEPYMIMNAMSDOCIGKBKLZBLAESVVBTYSTVUQCWOFZCTOAJPOIYYFRZRRXELQJZATWHROVDDWSMGIPTHGQXXMPLIGBPFVBUHWIKWOQJNJAJGINQNNN");
    msg.lat = 0.5049379992218967;
    msg.lon = 0.4865951319644011;
    msg.depth = 0.5405061838253654;
    msg.query_channel = 95U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 165U;

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
    msg.setTimeStamp(0.41763287034459073);
    msg.setSource(36695U);
    msg.setSourceEntity(68U);
    msg.setDestination(1928U);
    msg.setDestinationEntity(124U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.44175705913893226);
    msg.setSource(14179U);
    msg.setSourceEntity(127U);
    msg.setDestination(4477U);
    msg.setDestinationEntity(118U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.33390301164657676);
    msg.setSource(19254U);
    msg.setSourceEntity(137U);
    msg.setDestination(23429U);
    msg.setDestinationEntity(39U);
    msg.op = 169U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WBSSPYKYDVBLFBMDWAPGWUFCWTKDUIFDFYEYSTODIRKNXYJQTXOOXJMSYQCSSMNGMQUAZQVRQIPEKCKSAUPGQSBHMNHBJDLXAJSPKCNOKMHPWFFFEOGOZUWTCZBTILEZDLUXAVWETAGIEBCBGPGHAZZHJNUTTUTRIUXNYWGVXHUIRXDJVFYPKRHOFEZEJNODQGNIHLCNPMHLMKDQVQHCTACEVLFBAYRXJSLKROVIWWZL");
    tmp_msg_0.lat = 0.9043663425664189;
    tmp_msg_0.lon = 0.5442278407714678;
    tmp_msg_0.depth = 0.08972820909455814;
    tmp_msg_0.query_channel = 235U;
    tmp_msg_0.reply_channel = 59U;
    tmp_msg_0.transponder_delay = 5U;
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
    msg.setTimeStamp(0.9159014768564939);
    msg.setSource(41440U);
    msg.setSourceEntity(222U);
    msg.setDestination(15064U);
    msg.setDestinationEntity(239U);
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("CQITYYKORJOIZHR");
    tmp_msg_0.lat = 0.3105277810862195;
    tmp_msg_0.lon = 0.5720335001081077;
    tmp_msg_0.z = 0.356289907717408;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.cog = 0.6145613487598361;
    tmp_msg_0.sog = 0.04163342486645827;
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
    msg.setTimeStamp(0.26948913462534885);
    msg.setSource(62192U);
    msg.setSourceEntity(232U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(75U);
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 5;
    tmp_msg_0.value = 1834741594;
    tmp_msg_0.gain = 178U;
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
    msg.setTimeStamp(0.10882305655371594);
    msg.setSource(16329U);
    msg.setSourceEntity(246U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(215U);
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("AKDVIQGWARLNQHYEHVYVEFQUCZUZPRN");
    tmp_msg_0.message_id = 37843U;
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
    msg.setTimeStamp(0.13537726633177405);
    msg.setSource(24295U);
    msg.setSourceEntity(127U);
    msg.setDestination(60965U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.9936002448193177;
    msg.lon = 0.3636063416186529;
    msg.depth = 0.06549186355565528;
    msg.sentence.assign("EOBEMVWYSHEHCUFRSW");
    msg.txtime = 0.06348574250459615;
    msg.modem_type.assign("BRQVETEFMSLNDDKRPRZJLTZGHYQTNXGLKTMSJBJQOEVWFLCJQRDWVKGLHZTPWUQOMFVFBWITSKXCSVPOEEOFOVZLCWLIAQKAANHRIDVJHWNZGSFKRBJAQTLNMSJXCKYDSFTZKBSX");
    msg.sys_src.assign("ZSBWLIDBAYTRVVMJHKGCJIEHBCWZMARMRMYNVFWHFTMCYTCLEOZVJYJQTAVKJAJICSUUGHMMRPKXEDUSBLNHWSXDBUWLYUICWQDOQZTFBHHJBASHZCGENAIZGEQVXPTGELMOATVCQYDKGKDISVOWUODLTNXYEUYRFJNUINUXWNNXJKTLQHIDAUQSHPOELAPNKRFAQZQYMKTPFOVDZKGXYRZIXRPGBSGPFEOPXSSPDFQ");
    msg.seq = 30539U;
    msg.sys_dst.assign("CSTEPBAAFFNWOZFNPYRBHFKXQOQYFBIWUUELYGGHHGXXKKNNRJFLKHQXZNRLGXHMSNHRJWEQRFPMSQTXRKBIAJVXZMKDASIAOITYMGUYDYEDJACOWFWSTVWIWPKMFTXVQDBDTHEMWGMZGKIVLBOTVULJPVZBCXHTUOQSDASOCOMBOKCGABPQZPYLETPLVCRECAKERTZPHIEWWVQUZBUNFUUNZIJMJCVJVZRIGJMGEQODSDCNYR");
    msg.flags = 209U;
    const signed char tmp_msg_0[] = {-100, 13, 18, -104, 117, -74, 38, -38, -53, 6, -13, 14, -118, 71, 43, -1, -12, -128, -29, -18, 121, 105, 7, -46, -124, -75, -14, 7, 76, 88, -31, 107, -88, 118, -93, 50, -34, -125, 46, 14, -23, -98, 64, -100, 45, -7, 48, -27, 83, -72, -106, 122, -24, -48, 28, 39, -88, -94, -98, 5, 44, 108, 81, 74, 67, 63, -38, -47, -53, -79, -99, 101, 41, 85, -104, -72, -7, 101, -115, -65, -3, -7, -39, 91, 55, 95, -65, 52, -57, 59, -46, -13, 89, -59, 4, 93, -38, -59, -16, 119, 78, -40, -110, -50, 75, -73, -12, 101, -88, -113, 86, 40, 5, 9, 65, 112, 96, -8, -53, -8, 50, -42, 97, 115, 57, 16, -1, -1, -95, -55, 80, 35, 109, 19, -127, -53, 10, -67, -102, -108, 55, -71, -13, 48, 114};
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
    msg.setTimeStamp(0.8003059648880232);
    msg.setSource(44997U);
    msg.setSourceEntity(93U);
    msg.setDestination(32341U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.4911782317062986;
    msg.lon = 0.8662002680315019;
    msg.depth = 0.35531670583605435;
    msg.sentence.assign("KGEIGZBYKYIVRNKOSUNFEWJPDFJHTUPAMGOXGCXXRFWBEAPVMEUYBEHARDCNWBEIWVYIJGMIIOIQCXVZWYVZRLNDOWTPDGBRIBSYSSYNHRQYLVPIWFAPYGDHSBDPMJNHDABSEQTPFVUKJLGFRZQDMHVKADTASQMRZMLVLUTEJKXJQTHMKLJSVXJGCLKOACQRRECZOHQXGPTXCUBENQOUSUWWYTFMFLAFONJLCTNZXPSUZLDOHBZKUZANWHIMT");
    msg.txtime = 0.18833276270556742;
    msg.modem_type.assign("PCLISEYCJZSPYQEKJMMVTKLTEGFYNFDNAWVBAOWEZABHAJTCRXFUKITHMSUCMOBUHDBEVJAOEBBIXHKRKYWPNAMXXROTJTWPFGVRKQWMGGWIUIMVLECJDQNUZAQROXYTRHVICYYSWLPASEXBHGCNNLKOWHZJDUZGIRHGZA");
    msg.sys_src.assign("SKQGXDCBYFNRSZVKZFVSINVIIOMKBEEDNOYBLHJCUFLHASR");
    msg.seq = 14352U;
    msg.sys_dst.assign("HJCCXBOBHEXBQDJZXIGLIXJTULAHGXCTQVRCVIIBOPLCSKJZPGUHFCTMOEUUFPUPTFCGZFX");
    msg.flags = 42U;
    const signed char tmp_msg_0[] = {48, -9, -63, -96, 50, -99, -21, 118, 95, -31, -57, 19, -45, -119, -41, 37, -34, 65, 101, -115, -17, -124};
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
    msg.setTimeStamp(0.7707423372177934);
    msg.setSource(45193U);
    msg.setSourceEntity(14U);
    msg.setDestination(46859U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.543386771715093;
    msg.lon = 0.8603743296894864;
    msg.depth = 0.9338283321654225;
    msg.sentence.assign("BKDGDTNVHAKHDXGHUVWPQPQAHEFPCULVHIVITNUZNKVCYXEOFKBSXNRPJUZSVZKFICUJTRDHDQLCNGRTOPETOGPFKAJGPYIJQWDNWJPRFOXTBJWLZSBKWGIKFBYDVNITCDVXFXGXYMCFQELQHWGWFQOEPSZARTHSLINFUIJURIEGYNZVLBBWBASKRUCGSAOU");
    msg.txtime = 0.224419203164115;
    msg.modem_type.assign("KTSQACIATKAAGLURWXQEENZEAPQVVSXFDLCCXXLFHNAQLMDOKWZWTRGSGYNXUATIGTQIXMHDLFTHWWFBWKUBCCMGJNGDKZOMPEIRSEMLARRMNJHLPEQSRSSOZWZKNXPCJUUHRZZVZBJPYPPPHYEVOHIDKFOGAEIFKLQNMRQJAPYZMVFOBVYECOFNTBHOMBPKHCBJYFDWVXLSJSTZYQBGUROXYTYVBRUJHUOGCQVDYI");
    msg.sys_src.assign("ORSMHBSHHCSCXLPJLQZFGYOYLTFPFIZRJMPOCOWGOQITXTBYQUCKZNLAUDVTEKVXPEEQKOXIECADVWDUMSJGQNJOKIPZBCFUNYCAQRUBBQZOSVWCRDGUFPHBEQRDHYSRYYNVICZWNHKIWPAZNFMKILRJFYDELXHAWAGDZBTHAMFJMBEVRXKDVATUKXYJLUPWHAKVTYLBEIILFUOIVZQTJ");
    msg.seq = 938U;
    msg.sys_dst.assign("LNGDYFHMAEIVUZIICGJROPJEWAVGEVNTLRHODLLWAXKNRUHUJHQIOFWDCZSUAKQKVTSCFIMGFMDWVZWEUZEGPLBOSKFKPLRALNKHGPWXJWVTYYDHMWBBYFANCAWECYAQXFHYRBDRAJIMYJNGVSBIGZOCZNJUCDFTNVJKTCDGCSGWDQTICMNKKJYMFKQOPQZERXQPULPSOBPBTDQTLXZEJVBXBSESXBQZPOO");
    msg.flags = 75U;
    const signed char tmp_msg_0[] = {-63, 112, 11, -117, -123, 115, -96, 0, -4, -122, -76, -42, 38, -68, 108, 61, 62, 71, -90, 98, 91, 25, -73, -14, -109, 1, -38, 13, -38, 117, 41, -33, -119, -106, -2, -17, 20, 60, -121, -97, 119, -113, 102, -51, -68, -12, -118, 89, -81, -49, 56, -128, 121, -24, -32, 27, 26, 1, -126, 33, 35, 8, -9, -7, 72, 49, -121, -112, 2, 37, 56, -37, 25, -67, 7, 36, 35, -21, -12, -76, 111, -13, 119, 46, -14, 89, -101, 84, -29, -36, -92, -26, -21, -2, 38, -75, 4, -49, -5, -34, 119, 63, 64, -57, -76, -68, 47, 71, 66, 111, -19, -13, -26, 80, -124, 109, -116, -83, -20, 94, 87, -50, -46, 107, -75, 49, 41, 87, 111, -97, 2, 74, 112, -67, -12, 56, -25, 52, 8, -36, -66, 115, -14, -114, -113, 11, 77, -10, -39, 84, 29, 51, -77, 106, -3, -73, -24, 72, -57, -52, -82, -94, 24, 30, 7, 43, 10, 28, 105, -38, 70, -92, -102, -78, 65, -122, -47, 35, -10, -107, 112, -93, 62, 73};
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
    msg.setTimeStamp(0.29689653050362186);
    msg.setSource(8042U);
    msg.setSourceEntity(103U);
    msg.setDestination(47737U);
    msg.setDestinationEntity(137U);
    msg.op = 207U;
    msg.system.assign("FNDXHANEDKJFEROWLMPOEAPICQTTWWTAKGVZEQQBJITUDHWXBMSRHJYURKGSJPGDSRXXNPSXGFYYVOAILFUMPNEXKHMVMZXMTCCHCDMUUFGPIBPRCYNZBEIKYMQDBOGCZQKHTOLJWEPXWVAQCLECAANUUOLHQUKQCFIIZZNVTOFQSDAKKNZSNFJSBUTRZYLVVJTGSLGHANKSYLFZBZDXORYBIFOYHBJXHEVVYPBCDJPJSRQWLRTOV");
    msg.range = 0.30343805111253186;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 154U;
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
    msg.setTimeStamp(0.1538709286665385);
    msg.setSource(36619U);
    msg.setSourceEntity(75U);
    msg.setDestination(57337U);
    msg.setDestinationEntity(151U);
    msg.op = 125U;
    msg.system.assign("TOWSNLVIORRPQ");
    msg.range = 0.3769417290791507;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 85;
    tmp_msg_0.value = -261504859;
    tmp_msg_0.gain = 211U;
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
    msg.setTimeStamp(0.935469013293966);
    msg.setSource(52918U);
    msg.setSourceEntity(178U);
    msg.setDestination(53306U);
    msg.setDestinationEntity(168U);
    msg.op = 165U;
    msg.system.assign("SWPUVALWPAPAVCTSYYHCCEWXGADARHUQMBKJUV");
    msg.range = 0.3869322092249128;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MBKZFLBWPHYIWKPAMZ");
    tmp_msg_0.attr_type = 126U;
    tmp_msg_0.min.assign("JREXWMXMJOTNWUUGDLGZOMCQTXIMODKVGSGKQWUDXHZZCVAUWFOLAAFWDOXPWSJJCHIGEFICZKGKFBMSJFBIKZRQBIZRGJSJOOBEBSBNTQTJCTCZKISIVNDXQYYHNSYJALPALDDRVIZQULOKPC");
    tmp_msg_0.max.assign("ZIUIWRQIJMWZOYSZVNHDNSYKFPFIATAUXVFOWTT");
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
    msg.setTimeStamp(0.6761324867854148);
    msg.setSource(35577U);
    msg.setSourceEntity(44U);
    msg.setDestination(32226U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.733702215015477);
    msg.setSource(54663U);
    msg.setSourceEntity(240U);
    msg.setDestination(57647U);
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
    msg.setTimeStamp(0.8334333580777014);
    msg.setSource(45845U);
    msg.setSourceEntity(8U);
    msg.setDestination(58301U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.4169881548909281);
    msg.setSource(14618U);
    msg.setSourceEntity(194U);
    msg.setDestination(13920U);
    msg.setDestinationEntity(68U);
    msg.list.assign("ZNNRLBEVFQDUWPHEYUAZKCTINJNOZIMKLOCQCUUSNALWMEYGVRTQATNSWQQOYCVVOBXOQHKXIYPTHNWVPOWZYYQURRXIZMULABFNAGPDXQUGVFCGCEUKPUHQYWFDIF");

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
    msg.setTimeStamp(0.8260643648952803);
    msg.setSource(30853U);
    msg.setSourceEntity(55U);
    msg.setDestination(47751U);
    msg.setDestinationEntity(33U);
    msg.list.assign("FDOQXGZHVHOOPCYJXDDLTGJACTCOJXBVENHUHIHCPRDAAABGSFZQTXLVMUBTUWTWYSNYJTZRWCMACLRYMCZJVEHXNOUWGGTFOPPCMILBJLQAHMVUEZNUWTOWNIPPWDAWUPOKKZSBIEJELDLNUGNNNRCJJRFZQIUFORKIMPSVSRYTEGKDYSBZFYDSWLIQIE");

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
    msg.setTimeStamp(0.7313768085964739);
    msg.setSource(42864U);
    msg.setSourceEntity(247U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(50U);
    msg.list.assign("TNZAFNSOQEFPONFJQWVQVSPGKYGXCYDCQWLZIDMQOTOTHCWKGMYFPAOYCSIVEWAAMCLPGNYGUAKIFIDXTISDPUYOKMZWRVRWHNYMWYIHTEVQCSJCNZEALRUHNBLJZXNIZMFHIEXPDOIODWMARDTVKTXHQ");

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
    msg.setTimeStamp(0.01759745573715432);
    msg.setSource(7989U);
    msg.setSourceEntity(93U);
    msg.setDestination(31565U);
    msg.setDestinationEntity(192U);
    msg.peer.assign("BAXYFXFKIRZAWHKOQRMNIBINHYCBRJKWJKMEIHHMVZT");
    msg.rssi = 0.9847948139983506;
    msg.integrity = 59921U;

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
    msg.setTimeStamp(0.06644497266325988);
    msg.setSource(56862U);
    msg.setSourceEntity(253U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(138U);
    msg.peer.assign("OURLBOKPTELEPNYKQYELRNDKDJUUVCCDAFQVSLANWPHIJIDITGOCOCTJKNDMKWAAGZHRDINFRSAHTRUBQGMMGTXHSVLURSWMFIUUWCOCUDGEIZXZTPWMQVZLGJEIXVUPKZXNYMBFTZNEBAHHZBBPOZLBZVIBYGTQJWISKPNDPYALOGQPRFGFVVCFLAREDBDWTXEHRYGKNCJRPMKSQHTFYOACVJXMXHJKOIJWEAQSXQFWYBJZYLU");
    msg.rssi = 0.5375741040905937;
    msg.integrity = 39375U;

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
    msg.setTimeStamp(0.6183312689561968);
    msg.setSource(44634U);
    msg.setSourceEntity(170U);
    msg.setDestination(33022U);
    msg.setDestinationEntity(233U);
    msg.peer.assign("BXOPDFYQEAINIDLKBYLSLTYDRIWPWEOWAQDTUP");
    msg.rssi = 0.40312042591222874;
    msg.integrity = 41109U;

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
    msg.setTimeStamp(0.7313554309310334);
    msg.setSource(29726U);
    msg.setSourceEntity(110U);
    msg.setDestination(4923U);
    msg.setDestinationEntity(171U);
    msg.req_id = 56954U;
    msg.destination.assign("RPOJGNTKKYSUIZWTCATBGHCUPJQRQBKEJNWVFSNHZIBPDXOUXZQDGLZABSVYECXATBJPQEIXNPEJMGACEHLVVKTQSIAQJBWVRYHRYUJNJFSPZXCLSAAKYRFIGISXGPSLFKCQTMIDCBCMGLHXADUKFFCUXWQWLTOIOUNFVCK");
    msg.timeout = 0.5576596369864811;
    msg.range = 0.658327259267288;
    msg.type = 3U;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.30057172006407373;
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
    msg.setTimeStamp(0.1831738106482904);
    msg.setSource(2698U);
    msg.setSourceEntity(223U);
    msg.setDestination(51054U);
    msg.setDestinationEntity(76U);
    msg.req_id = 64743U;
    msg.destination.assign("EMSBIZSICLITDGLBZDNTVPUVPYCKUVQFYXAVDNOKVNMLFAHPRCQWXMQWWJOESRKXKUGOOKMKLNJJOCUWDMOXDRTC");
    msg.timeout = 0.04931428856013231;
    msg.range = 0.07434113360008276;
    msg.type = 154U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 4U;
    tmp_msg_0.snapshot.assign("BECPRWCRJWOEHGSVFICBSJUAXNCVAJNILGTA");
    IMC::ArmingState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 165U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6878398090194954);
    msg.setSource(5652U);
    msg.setSourceEntity(173U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(120U);
    msg.req_id = 22940U;
    msg.destination.assign("WIBCSUGATFFIPCQYWRYAHFRAXMALBONOTIMLGREBZKDKAUPGNYYCWUPWIWXSOQHMPZBJXMKMQVYRGFXXZEIRNTYGVOOZIZPVURIESHTEZSKCBLURTZNKUAMDRISPBOAEJOSWHNVNODEWDJNHPDYCSHQNQCLDBPLULUJVNHMMCVFSHBOEWYORLCUIVWRTFMGAXXCKFGXXL");
    msg.timeout = 0.3273294069908461;
    msg.range = 0.4279436994409178;
    msg.type = 96U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 230U;
    tmp_msg_0.error.assign("LKRZMELQAZHQCZBPOQRVDMERXEYTXCIBXZWJZLUHIJEHIRNPKQSLDKQQJGEMSCCUSGABWYTWEDUFIHOXKCEFPIDXBALONVTKIUA");
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
    msg.setTimeStamp(0.7525757085100124);
    msg.setSource(9798U);
    msg.setSourceEntity(75U);
    msg.setDestination(3629U);
    msg.setDestinationEntity(94U);
    msg.req_id = 15294U;
    msg.type = 125U;
    msg.status = 113U;
    msg.info.assign("RWQGQORLGDBKJKNQZEVOXAUVHNRRRZUQFVBXCKEIJCHFQAQGEGSMRBPLWDECMUZHNKSAUHEYJZBKSEVLHCQSMGCYVDXFFGDSMNVBTMWEUAXAFXHDIVVMYWKAJZDPTLYBEYGLMODBFCXOITYOHIVXIIYBHLHUMBIZONWOABCDPZWCJFRJPJHIPKZPITSWISQRXLTWATRQPYSTREXAOTMDYJQJNMNALGCYFPVSGZCLGWNS");
    msg.range = 0.15147041479579937;

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
    msg.setTimeStamp(0.730917123560793);
    msg.setSource(13286U);
    msg.setSourceEntity(161U);
    msg.setDestination(6389U);
    msg.setDestinationEntity(120U);
    msg.req_id = 32668U;
    msg.type = 97U;
    msg.status = 32U;
    msg.info.assign("WMUYZRRHMQGOQWLKLYGVCHHTQDVBSVCTNVZKCLICOYBXNFUJTIDIANCINWGOANRTTZBTJNHXRHHSOLSGHGURLRFKVDBUSSNOQAEMPZYJZOJVVCOYEKAPLFUKFXFXMJDWTQMBJPOPPVQBWIGPASKFAJHIPTZRDHGSILGOVXWVEWIUDDHUZQPNZTUQKAOIELUKMYCSNFICJCAYCAEFSAPXWMFYBZMYF");
    msg.range = 0.27937050824444776;

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
    msg.setTimeStamp(0.17449959874476417);
    msg.setSource(4195U);
    msg.setSourceEntity(74U);
    msg.setDestination(2689U);
    msg.setDestinationEntity(23U);
    msg.req_id = 42655U;
    msg.type = 152U;
    msg.status = 46U;
    msg.info.assign("JZFDVJODOLSKBRAKFQXQGKLJSQQJALMSCYTNZIPZWRVIIAXEGUZEIUKSABNHUSYFETUQVBKXEJPHNXGFMDNFGETEWVXHANYDS");
    msg.range = 0.6467889829860236;

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
    msg.setTimeStamp(0.26393466226309814);
    msg.setSource(12112U);
    msg.setSourceEntity(143U);
    msg.setDestination(2388U);
    msg.setDestinationEntity(147U);
    msg.system.assign("CDQFERRWLJSHKZCZSAWTQPBTJINCVCDVMGYHADHWRHDOHADAGXYFQMHXAOHVWCKZREAXRFQUKHERUHPPITLIYVZXKGMEFTLGCSUSXVVMTVWEYDFKUBSJHDJCRBILJOPMDMJXUJBAKGBUUEWNSPCELTQWYWONFIQXPSMJINFJVYGBOZNBYNPILYISKDMRSITKOFNATJWOXFTZCRUKGLAEZPKVUEX");
    msg.op = 13U;

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
    msg.setTimeStamp(0.22556961820650623);
    msg.setSource(42771U);
    msg.setSourceEntity(89U);
    msg.setDestination(8423U);
    msg.setDestinationEntity(241U);
    msg.system.assign("RKMZEGOGOROGPDJUUWPTADUFSXOTQBXLFWHVRFTPFJLBRHDIXUQDEWZONQKJGYANBIRKLYBPISXARGRFIVYOBUNWYPNDHZLBJNEUHVIIWULECGIQCUFCYPCTNQMRFCGSTJPAMTHYVNRODZXTCCMHRWBX");
    msg.op = 140U;

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
    msg.setTimeStamp(0.9303804106685785);
    msg.setSource(20426U);
    msg.setSourceEntity(116U);
    msg.setDestination(51945U);
    msg.setDestinationEntity(234U);
    msg.system.assign("YHTFGLZJVNFFHMBEAFVHSILQUKYPLPJJFRRWDXOLERYXQTHIURDMBBWCLKMNAPFGRCDLIZBRD");
    msg.op = 117U;

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
    msg.setTimeStamp(0.14591934090298087);
    msg.setSource(33735U);
    msg.setSourceEntity(121U);
    msg.setDestination(56090U);
    msg.setDestinationEntity(136U);
    msg.value = 4369;

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
    msg.setTimeStamp(0.29915852775538254);
    msg.setSource(46751U);
    msg.setSourceEntity(49U);
    msg.setDestination(54067U);
    msg.setDestinationEntity(87U);
    msg.value = -31283;

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
    msg.setTimeStamp(0.5873926505110896);
    msg.setSource(29594U);
    msg.setSourceEntity(72U);
    msg.setDestination(22277U);
    msg.setDestinationEntity(183U);
    msg.value = 28979;

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
    msg.setTimeStamp(0.9674751195603652);
    msg.setSource(64476U);
    msg.setSourceEntity(231U);
    msg.setDestination(18427U);
    msg.setDestinationEntity(138U);
    msg.value = 0.3290779218341575;

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
    msg.setTimeStamp(0.13447080013142587);
    msg.setSource(15911U);
    msg.setSourceEntity(210U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(68U);
    msg.value = 0.9815997206788912;

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
    msg.setTimeStamp(0.3934193125796632);
    msg.setSource(32517U);
    msg.setSourceEntity(245U);
    msg.setDestination(45043U);
    msg.setDestinationEntity(128U);
    msg.value = 0.699905198948448;

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
    msg.setTimeStamp(0.21763688047485308);
    msg.setSource(544U);
    msg.setSourceEntity(71U);
    msg.setDestination(64025U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6178789600247006;

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
    msg.setTimeStamp(0.8542616822326464);
    msg.setSource(48178U);
    msg.setSourceEntity(127U);
    msg.setDestination(796U);
    msg.setDestinationEntity(133U);
    msg.value = 0.41314886383989513;

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
    msg.setTimeStamp(0.34832493460996283);
    msg.setSource(29690U);
    msg.setSourceEntity(199U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(107U);
    msg.value = 0.2815665310876414;

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
    msg.setTimeStamp(0.02759979911921817);
    msg.setSource(57786U);
    msg.setSourceEntity(58U);
    msg.setDestination(59078U);
    msg.setDestinationEntity(149U);
    msg.validity = 20202U;
    msg.type = 193U;
    msg.utc_year = 21312U;
    msg.utc_month = 157U;
    msg.utc_day = 4U;
    msg.utc_time = 0.06983498763949325;
    msg.lat = 0.36676074631568145;
    msg.lon = 0.8578912342006964;
    msg.height = 0.760185344516202;
    msg.satellites = 197U;
    msg.cog = 0.7504735038165923;
    msg.sog = 0.15713148711079528;
    msg.hdop = 0.9372329594093926;
    msg.vdop = 0.2000185562881388;
    msg.hacc = 0.08026899355982342;
    msg.vacc = 0.08950817058302851;

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
    msg.setTimeStamp(0.6602391846700206);
    msg.setSource(2644U);
    msg.setSourceEntity(22U);
    msg.setDestination(64674U);
    msg.setDestinationEntity(76U);
    msg.validity = 28285U;
    msg.type = 44U;
    msg.utc_year = 41255U;
    msg.utc_month = 100U;
    msg.utc_day = 193U;
    msg.utc_time = 0.8506285986874391;
    msg.lat = 0.5515169626884282;
    msg.lon = 0.69693911779573;
    msg.height = 0.910407119526909;
    msg.satellites = 103U;
    msg.cog = 0.638646294578332;
    msg.sog = 0.6783510324454269;
    msg.hdop = 0.4622394523029749;
    msg.vdop = 0.4962989190069804;
    msg.hacc = 0.6260188735427196;
    msg.vacc = 0.5895469402338656;

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
    msg.setTimeStamp(0.36450154719605354);
    msg.setSource(27550U);
    msg.setSourceEntity(84U);
    msg.setDestination(22995U);
    msg.setDestinationEntity(230U);
    msg.validity = 31587U;
    msg.type = 15U;
    msg.utc_year = 48478U;
    msg.utc_month = 214U;
    msg.utc_day = 253U;
    msg.utc_time = 0.6578516104372878;
    msg.lat = 0.22084680161253079;
    msg.lon = 0.6191951846402001;
    msg.height = 0.9717223753958663;
    msg.satellites = 189U;
    msg.cog = 0.4784502034959428;
    msg.sog = 0.39857732138766555;
    msg.hdop = 0.04542114992239521;
    msg.vdop = 0.11394332765990933;
    msg.hacc = 0.5014885753048993;
    msg.vacc = 0.8835642036817513;

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
    msg.setTimeStamp(0.2598424550186331);
    msg.setSource(52071U);
    msg.setSourceEntity(151U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(112U);
    msg.time = 0.40850039115167425;
    msg.phi = 0.7634032864867276;
    msg.theta = 0.9684710174380439;
    msg.psi = 0.6731943193195836;
    msg.psi_magnetic = 0.7236133144656351;

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
    msg.setTimeStamp(0.8497070059264273);
    msg.setSource(44939U);
    msg.setSourceEntity(170U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(86U);
    msg.time = 0.3916368047627683;
    msg.phi = 0.9801126787489445;
    msg.theta = 0.4309191500155817;
    msg.psi = 0.7978565760109397;
    msg.psi_magnetic = 0.8286004162062296;

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
    msg.setTimeStamp(0.24367980503406894);
    msg.setSource(42155U);
    msg.setSourceEntity(152U);
    msg.setDestination(48984U);
    msg.setDestinationEntity(219U);
    msg.time = 0.5099761713777695;
    msg.phi = 0.1822899666323965;
    msg.theta = 0.5453076994103864;
    msg.psi = 0.1850731831910558;
    msg.psi_magnetic = 0.8775881358841588;

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
    msg.setTimeStamp(0.8409373247041355);
    msg.setSource(25597U);
    msg.setSourceEntity(141U);
    msg.setDestination(9289U);
    msg.setDestinationEntity(36U);
    msg.time = 0.8450851986581212;
    msg.x = 0.730552794761659;
    msg.y = 0.09577105399692531;
    msg.z = 0.37072497501992996;
    msg.timestep = 0.6142519149078317;

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
    msg.setTimeStamp(0.09193296909893423);
    msg.setSource(35687U);
    msg.setSourceEntity(22U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(183U);
    msg.time = 0.11646950067126771;
    msg.x = 0.9331939262856256;
    msg.y = 0.7895184279148642;
    msg.z = 0.6627733779914577;
    msg.timestep = 0.0021731697634378433;

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
    msg.setTimeStamp(0.619798980880536);
    msg.setSource(2081U);
    msg.setSourceEntity(165U);
    msg.setDestination(45312U);
    msg.setDestinationEntity(254U);
    msg.time = 0.06185818023502332;
    msg.x = 0.13186724225953472;
    msg.y = 0.21848556542029685;
    msg.z = 0.6287037657893363;
    msg.timestep = 0.17696462501811439;

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
    msg.setTimeStamp(0.7994733947379903);
    msg.setSource(53452U);
    msg.setSourceEntity(25U);
    msg.setDestination(38565U);
    msg.setDestinationEntity(139U);
    msg.time = 0.7383319661954835;
    msg.x = 0.22796154688537107;
    msg.y = 0.8759942478092599;
    msg.z = 0.16833933026442027;

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
    msg.setTimeStamp(0.3603776989896875);
    msg.setSource(28027U);
    msg.setSourceEntity(195U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(218U);
    msg.time = 0.770500917675206;
    msg.x = 0.7836689511049503;
    msg.y = 0.3565642580058791;
    msg.z = 0.09955962461392043;

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
    msg.setTimeStamp(0.211555967543534);
    msg.setSource(64738U);
    msg.setSourceEntity(50U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(217U);
    msg.time = 0.4479529243151391;
    msg.x = 0.8960121624658439;
    msg.y = 0.15956744446085847;
    msg.z = 0.5793539671585136;

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
    msg.setTimeStamp(0.5692299137754365);
    msg.setSource(4680U);
    msg.setSourceEntity(167U);
    msg.setDestination(48556U);
    msg.setDestinationEntity(251U);
    msg.time = 0.3889936921326308;
    msg.x = 0.48422917860235415;
    msg.y = 0.33195714689623634;
    msg.z = 0.0923549194042953;

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
    msg.setTimeStamp(0.6149093813134777);
    msg.setSource(41610U);
    msg.setSourceEntity(60U);
    msg.setDestination(53586U);
    msg.setDestinationEntity(239U);
    msg.time = 0.5220075271523789;
    msg.x = 0.9771086079744238;
    msg.y = 0.07731942976045869;
    msg.z = 0.8282567982759599;

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
    msg.setTimeStamp(0.1592450396921068);
    msg.setSource(7846U);
    msg.setSourceEntity(210U);
    msg.setDestination(32342U);
    msg.setDestinationEntity(127U);
    msg.time = 0.8675153785370604;
    msg.x = 0.8316748940848415;
    msg.y = 0.9143615601635245;
    msg.z = 0.08843933497008094;

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
    msg.setTimeStamp(0.14010337670219142);
    msg.setSource(33770U);
    msg.setSourceEntity(164U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(74U);
    msg.time = 0.13353884489099188;
    msg.x = 0.7580004060628242;
    msg.y = 0.39260866653423;
    msg.z = 0.4141744158173375;

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
    msg.setTimeStamp(0.14682702436661466);
    msg.setSource(11315U);
    msg.setSourceEntity(52U);
    msg.setDestination(22158U);
    msg.setDestinationEntity(117U);
    msg.time = 0.16260473092799432;
    msg.x = 0.6684309811366953;
    msg.y = 0.9484651618358875;
    msg.z = 0.9534649415786142;

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
    msg.setTimeStamp(0.8638407772823304);
    msg.setSource(21106U);
    msg.setSourceEntity(58U);
    msg.setDestination(9155U);
    msg.setDestinationEntity(144U);
    msg.time = 0.2117462294238608;
    msg.x = 0.0023087898011123764;
    msg.y = 0.3417122747775039;
    msg.z = 0.007757170756186427;

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
    msg.setTimeStamp(0.30147429119118707);
    msg.setSource(34359U);
    msg.setSourceEntity(213U);
    msg.setDestination(14866U);
    msg.setDestinationEntity(200U);
    msg.validity = 0U;
    msg.x = 0.6836778466620095;
    msg.y = 0.3417806892909332;
    msg.z = 0.5621941178344608;

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
    msg.setTimeStamp(0.37237128492019933);
    msg.setSource(53152U);
    msg.setSourceEntity(4U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(52U);
    msg.validity = 77U;
    msg.x = 0.38383138737815103;
    msg.y = 0.5402808142355928;
    msg.z = 0.0643874919253129;

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
    msg.setTimeStamp(0.48730884514962913);
    msg.setSource(1226U);
    msg.setSourceEntity(85U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(30U);
    msg.validity = 181U;
    msg.x = 0.5017066537779169;
    msg.y = 0.8304502919328767;
    msg.z = 0.6919410318945071;

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
    msg.setTimeStamp(0.22057841518994847);
    msg.setSource(25633U);
    msg.setSourceEntity(142U);
    msg.setDestination(24363U);
    msg.setDestinationEntity(31U);
    msg.validity = 32U;
    msg.x = 0.7593810274122088;
    msg.y = 0.5402805633967159;
    msg.z = 0.6398360261691878;

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
    msg.setTimeStamp(0.47511216471667483);
    msg.setSource(3554U);
    msg.setSourceEntity(135U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(122U);
    msg.validity = 29U;
    msg.x = 0.8975605549212545;
    msg.y = 0.5696022076921935;
    msg.z = 0.12389852842082794;

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
    msg.setTimeStamp(0.6772875047766507);
    msg.setSource(18156U);
    msg.setSourceEntity(234U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(59U);
    msg.validity = 64U;
    msg.x = 0.5084337324435753;
    msg.y = 0.2620773590536293;
    msg.z = 0.32376738584154763;

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
    msg.setTimeStamp(0.26793609988950184);
    msg.setSource(62234U);
    msg.setSourceEntity(186U);
    msg.setDestination(54678U);
    msg.setDestinationEntity(84U);
    msg.time = 0.7176907938385876;
    msg.x = 0.5834171380891563;
    msg.y = 0.34508649140520153;
    msg.z = 0.1972289989833934;

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
    msg.setTimeStamp(0.056928010129380535);
    msg.setSource(19591U);
    msg.setSourceEntity(122U);
    msg.setDestination(46632U);
    msg.setDestinationEntity(34U);
    msg.time = 0.3483496580110511;
    msg.x = 0.10616868071511631;
    msg.y = 0.2625705648166611;
    msg.z = 0.021307281177355475;

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
    msg.setTimeStamp(0.42651309054873066);
    msg.setSource(25607U);
    msg.setSourceEntity(18U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(152U);
    msg.time = 0.5387343718096187;
    msg.x = 0.5641109495828681;
    msg.y = 0.8641358199539172;
    msg.z = 0.2768777264217711;

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
    msg.setTimeStamp(0.28838771139271935);
    msg.setSource(9239U);
    msg.setSourceEntity(11U);
    msg.setDestination(16548U);
    msg.setDestinationEntity(54U);
    msg.validity = 141U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4423501882887143;
    tmp_msg_0.y = 0.2777765056137801;
    tmp_msg_0.z = 0.13852014944031055;
    tmp_msg_0.phi = 0.08997620256109418;
    tmp_msg_0.theta = 0.0631629474866543;
    tmp_msg_0.psi = 0.5688043015337862;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.17847037136122068;
    tmp_msg_1.beam_height = 0.05092333410361194;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8432890961192172;

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
    msg.setTimeStamp(0.6970592531691752);
    msg.setSource(13917U);
    msg.setSourceEntity(170U);
    msg.setDestination(31274U);
    msg.setDestinationEntity(77U);
    msg.validity = 211U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5721858356969415;
    tmp_msg_0.beam_height = 0.8866872155874288;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9531589733440249;

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
    msg.setTimeStamp(0.24820765433738234);
    msg.setSource(29383U);
    msg.setSourceEntity(212U);
    msg.setDestination(60109U);
    msg.setDestinationEntity(10U);
    msg.validity = 196U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.09894919410881975;
    tmp_msg_0.y = 0.27055767430699884;
    tmp_msg_0.z = 0.9545252535952788;
    tmp_msg_0.phi = 0.6022773452727802;
    tmp_msg_0.theta = 0.6076663384128872;
    tmp_msg_0.psi = 0.08575106877106942;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.4370114648802196;
    tmp_msg_1.beam_height = 0.039748320502355106;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6869992424284115;

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
    msg.setTimeStamp(0.10908570654797867);
    msg.setSource(50830U);
    msg.setSourceEntity(89U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7019132189310694;

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
    msg.setTimeStamp(0.14575585778718503);
    msg.setSource(39242U);
    msg.setSourceEntity(6U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6124230017082701;

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
    msg.setTimeStamp(0.9331193266969341);
    msg.setSource(22271U);
    msg.setSourceEntity(90U);
    msg.setDestination(63251U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7993859478981422;

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
    msg.setTimeStamp(0.8673599784235346);
    msg.setSource(59113U);
    msg.setSourceEntity(18U);
    msg.setDestination(185U);
    msg.setDestinationEntity(111U);
    msg.value = 0.750466534877997;

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
    msg.setTimeStamp(0.4563824705699987);
    msg.setSource(4311U);
    msg.setSourceEntity(140U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5216966141369729;

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
    msg.setTimeStamp(0.7951554453160412);
    msg.setSource(39864U);
    msg.setSourceEntity(51U);
    msg.setDestination(21546U);
    msg.setDestinationEntity(111U);
    msg.value = 0.3446677331644412;

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
    msg.setTimeStamp(0.19566436157946343);
    msg.setSource(23536U);
    msg.setSourceEntity(5U);
    msg.setDestination(24867U);
    msg.setDestinationEntity(70U);
    msg.value = 0.12983070325321167;

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
    msg.setTimeStamp(0.8552499684009748);
    msg.setSource(34712U);
    msg.setSourceEntity(171U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(226U);
    msg.value = 0.30622957612086044;

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
    msg.setTimeStamp(0.48849395723499267);
    msg.setSource(13714U);
    msg.setSourceEntity(173U);
    msg.setDestination(22445U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5186810816261088;

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
    msg.setTimeStamp(0.44899597722703344);
    msg.setSource(35910U);
    msg.setSourceEntity(117U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(50U);
    msg.value = 0.08790646919007872;

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
    msg.setTimeStamp(0.6397886990265905);
    msg.setSource(17528U);
    msg.setSourceEntity(141U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(188U);
    msg.value = 0.44498244976227597;

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
    msg.setTimeStamp(0.8573314960800129);
    msg.setSource(38284U);
    msg.setSourceEntity(201U);
    msg.setDestination(34599U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6591515011482997;

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
    msg.setTimeStamp(0.8139986060356211);
    msg.setSource(21445U);
    msg.setSourceEntity(53U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(52U);
    msg.value = 0.10739989328638555;

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
    msg.setTimeStamp(0.9115018591324909);
    msg.setSource(56961U);
    msg.setSourceEntity(229U);
    msg.setDestination(8419U);
    msg.setDestinationEntity(135U);
    msg.value = 0.1979093799206203;

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
    msg.setTimeStamp(0.8387126566249329);
    msg.setSource(6534U);
    msg.setSourceEntity(117U);
    msg.setDestination(62204U);
    msg.setDestinationEntity(20U);
    msg.value = 0.2753004594674838;

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
    msg.setTimeStamp(0.7843329693053255);
    msg.setSource(61493U);
    msg.setSourceEntity(182U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(191U);
    msg.value = 0.1989690463058169;

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
    msg.setTimeStamp(0.2800916724771826);
    msg.setSource(6324U);
    msg.setSourceEntity(9U);
    msg.setDestination(3598U);
    msg.setDestinationEntity(83U);
    msg.value = 0.06932285098222102;

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
    msg.setTimeStamp(0.24783494937074624);
    msg.setSource(26841U);
    msg.setSourceEntity(141U);
    msg.setDestination(22329U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9034805027553499;

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
    msg.setTimeStamp(0.533098188576755);
    msg.setSource(49407U);
    msg.setSourceEntity(100U);
    msg.setDestination(53612U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8067443614470106;

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
    msg.setTimeStamp(0.855025050332277);
    msg.setSource(46326U);
    msg.setSourceEntity(36U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(158U);
    msg.value = 0.07372511121989545;

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
    msg.setTimeStamp(0.6792640176056957);
    msg.setSource(13687U);
    msg.setSourceEntity(70U);
    msg.setDestination(56602U);
    msg.setDestinationEntity(150U);
    msg.value = 0.716368126735594;

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
    msg.setTimeStamp(0.5853651616604506);
    msg.setSource(56808U);
    msg.setSourceEntity(198U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4899752447367647;

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
    msg.setTimeStamp(0.7682107330447593);
    msg.setSource(52372U);
    msg.setSourceEntity(123U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6333799203630429;

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
    msg.setTimeStamp(0.4075781066656283);
    msg.setSource(4432U);
    msg.setSourceEntity(38U);
    msg.setDestination(14520U);
    msg.setDestinationEntity(239U);
    msg.value = 0.07671328210911998;

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
    msg.setTimeStamp(0.7536177776857739);
    msg.setSource(1486U);
    msg.setSourceEntity(195U);
    msg.setDestination(31459U);
    msg.setDestinationEntity(222U);
    msg.direction = 0.955592344831511;
    msg.speed = 0.5060914255417273;
    msg.turbulence = 0.6954881199887758;

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
    msg.setTimeStamp(0.32885908791492247);
    msg.setSource(49830U);
    msg.setSourceEntity(221U);
    msg.setDestination(35390U);
    msg.setDestinationEntity(235U);
    msg.direction = 0.6294484932762725;
    msg.speed = 0.18293232905018597;
    msg.turbulence = 0.6596703250649413;

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
    msg.setTimeStamp(0.5742787978439032);
    msg.setSource(46278U);
    msg.setSourceEntity(103U);
    msg.setDestination(25507U);
    msg.setDestinationEntity(119U);
    msg.direction = 0.13093752931306057;
    msg.speed = 0.9731429863722374;
    msg.turbulence = 0.11257541189387699;

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
    msg.setTimeStamp(0.9618707811726382);
    msg.setSource(41216U);
    msg.setSourceEntity(163U);
    msg.setDestination(3307U);
    msg.setDestinationEntity(34U);
    msg.value = 0.14321973882964667;

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
    msg.setTimeStamp(0.07182333287489695);
    msg.setSource(52976U);
    msg.setSourceEntity(7U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(143U);
    msg.value = 0.19415681053711376;

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
    msg.setTimeStamp(0.9040626464512745);
    msg.setSource(52818U);
    msg.setSourceEntity(90U);
    msg.setDestination(35989U);
    msg.setDestinationEntity(173U);
    msg.value = 0.873757859175977;

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
    msg.setTimeStamp(0.08444162867188365);
    msg.setSource(24024U);
    msg.setSourceEntity(40U);
    msg.setDestination(53923U);
    msg.setDestinationEntity(19U);
    msg.value.assign("KJXVJXMXEVYGMUHIAJZXSEOUWPFIPNYHFCHZTGQHFNNRKLHQSBIDMZNPOFSVJCRPCOZFMIMZCQCBVYLDEFWBTJSZKUSSSHCMVLYVKYRSRQUJBWOGPM");

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
    msg.setTimeStamp(0.8743156373680924);
    msg.setSource(6637U);
    msg.setSourceEntity(63U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(30U);
    msg.value.assign("VDZVLAZRXWREHJNEAWRMSNMPNXK");

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
    msg.setTimeStamp(0.4055463421026916);
    msg.setSource(60735U);
    msg.setSourceEntity(65U);
    msg.setDestination(23959U);
    msg.setDestinationEntity(198U);
    msg.value.assign("RKDLSDXJKIBCURSJGPBBZPUQYDRZKHVQEUXFGTOKRNUOBLBJBERUZFZOOXZKIXDRNVYZDQAFYXEJLCCLCMAVMRWVZWHTQXNGTUYDFZUANQAIBGOTODQUVHX");

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
    msg.setTimeStamp(0.5608131766291359);
    msg.setSource(50599U);
    msg.setSourceEntity(92U);
    msg.setDestination(11874U);
    msg.setDestinationEntity(225U);
    const signed char tmp_msg_0[] = {-15, 122, -58, 118, 105, 26, -88, -88, 54, -45, -38, -47, -93, 120, -23, 91, -48, -71, -124, -68, 67, 74, 93, 59, 124, -107, 84, -64, -28, -35, 109, 97, -16, 42, 51, 36, 94, -69, 29, -39, 38, 95, 44, -8, 80, -125, 111, -55, 56, 55, 82, 88, 86, 39, 5, 23, -40, -81, -114, -82, -81, 79, 98, -119, -106, 73, 37, -70, -63, 30, 85, -27, 42, -107, 0, -115, -115, -35, 92, -79, -47, 89, -118, -119, 7, 39, 118, 72, 18, -114, -11, -5, -5, 112, -57, 122, 99, -33, 92, -72, -112, 57, -52, -119, -76, 126, 117, 10, 4, -5, -43, 91, -28, 51, -51, -34, -37, 29, -41, 29, 4, -75, -10, 76, -38, 11};
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
    msg.setTimeStamp(0.886278309397895);
    msg.setSource(36664U);
    msg.setSourceEntity(196U);
    msg.setDestination(31164U);
    msg.setDestinationEntity(238U);
    const signed char tmp_msg_0[] = {100, 101, -21, 26, 67, -76, -126, -62, 16, 15, 122, -102, 46, -36, -44, -115, -69, 11, 76, -77, 94, -124, 87, 45, -97, -104, 6, -71, 116, -115, -33, 93, 98, 18, -126, -55, 117, -116, -102, -50, 31, 53, -5, 10, 22, -28, -100, 105, -24, -61, 116, -51, -67, 31, -30, -9, 42, -87, -48, -124, 126, -81, 62, 63, -115, -68, 113, 12, 120, 24, -93, -128, 68, -111, -82, -86, 34, -57, -22, 76, 6, 92, 114, -67, 53, 38, -44, 1, 88, -88, -50, 44, 98, -5, 102, 47, -56, 86, -75, 87, -46, 2, -5, 103, -8, 15, 17, 120, 104, -109, 57, -9, 63, 45, -56, -9, 78, 100, 12, 70, -118, -15, -84, -87, -18, 64, 95, 51, 92, 20, -26, -40, 32, -116};
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
    msg.setTimeStamp(0.7514057778510042);
    msg.setSource(28338U);
    msg.setSourceEntity(135U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(211U);
    const signed char tmp_msg_0[] = {94, 24, 103, 45, 96, 109, 62, -36, -9, 91, 56, 82, 41, -35, 26, 101, 53, -118, 126, 49, 81, 88, -62, -25, 97, 69, 45, 100, -21, -34, -72, -22, -89, -70, -25, -50, -82, 91, 83, 99, 99, 85, -17, 104, 102, -4, 27, -128, -20, 3, 118, 71, -3, 22, -45, 15, 104, -94, 102, 21, -2, 50, -20, -118, -92, 96, -91, -18, 126, -67, -68, 75, -58, 89, -56, -46, -108, 82, -49, 17, 114, 38, -61, 121, -18, 122, -127, -58, -63, -19, 120, -44, -80, 104, 101, -5, 30, -74, -94, 94, -67};
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
    msg.setTimeStamp(0.7686053026522154);
    msg.setSource(57755U);
    msg.setSourceEntity(50U);
    msg.setDestination(28309U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6030230547026856;

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
    msg.setTimeStamp(0.43792439921304205);
    msg.setSource(53321U);
    msg.setSourceEntity(215U);
    msg.setDestination(48474U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9316620904865686;

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
    msg.setTimeStamp(0.8019995025788843);
    msg.setSource(56426U);
    msg.setSourceEntity(176U);
    msg.setDestination(58569U);
    msg.setDestinationEntity(163U);
    msg.value = 0.6003616199860969;

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
    msg.setTimeStamp(0.6727601906986362);
    msg.setSource(39431U);
    msg.setSourceEntity(226U);
    msg.setDestination(30509U);
    msg.setDestinationEntity(163U);
    msg.type = 197U;
    msg.frequency = 2459680429U;
    msg.min_range = 22252U;
    msg.max_range = 1496U;
    msg.bits_per_point = 233U;
    msg.scale_factor = 0.44034162465196525;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3056337333824376;
    tmp_msg_0.beam_height = 0.9726740477244384;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-28, -33, -106, -109, -99, 126, -34, 70, -48, 92, -74, 42, -54, -64, -86, -45, 89, -10, 102, 31, 68, -46, -126, 81, -122, -50, -19, 32, 28, 87, -119, -31, -16, -128, 52, -6, 96, -72, 98, 119, 12, -119, 88, -47, -101, 100, -127, 47, 48, 91, -2, 118, 65, 56, -45, 65, -114, 75, 55, -118, 74, 52, -69, 57, -86, 23, -10, 91, 16, -79, 70, 75, -39, -3, -26, 62, -44, -73, 23, 70, -80, -74, 64, 80, 107, -62, -62, -58, 42, 92, 97, -10, -59, 14, -35, 124, 81, -116, -126, 119, 13, 123, -49, -83, -114, 18, 16, 36, -102, 89, 87, 104, 13, -22, -55, 97, -24, -105, 85, -104, -106, 41, -101, 58};
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
    msg.setTimeStamp(0.07331724138652684);
    msg.setSource(44047U);
    msg.setSourceEntity(86U);
    msg.setDestination(10036U);
    msg.setDestinationEntity(100U);
    msg.type = 236U;
    msg.frequency = 296959602U;
    msg.min_range = 28255U;
    msg.max_range = 19768U;
    msg.bits_per_point = 115U;
    msg.scale_factor = 0.1113842240366677;
    const signed char tmp_msg_0[] = {-68, 100, 119, 33, 18, -85, 2, -2, -22, 81, -21, -4, -56, -101, -23, -125, 66, 51, 18, 101, -105, -66, 83, -85, 66, 41, -106, 124, 58, 34, 115, -2, -26, 122, 73, 55, -67, 105, -8, -60, -115, 72, 72, -45, -51, 25, 23, 33, 43, 62, 94, -8, -12, 46, 65, -62, 71, 39, 68, -108, -49, -96, -87, -33, 88, -49, -17, 19, 120, 35, 66};
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
    msg.setTimeStamp(0.43055658332623004);
    msg.setSource(42494U);
    msg.setSourceEntity(104U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(231U);
    msg.type = 195U;
    msg.frequency = 3184394729U;
    msg.min_range = 32285U;
    msg.max_range = 5795U;
    msg.bits_per_point = 142U;
    msg.scale_factor = 0.16225213945822525;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.31212576558610083;
    tmp_msg_0.beam_height = 0.2190630472188695;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-121, 96, -117, 81, 79, -23, -16, 98, -43, 35, -39, -19, -110, -120, 39, 58, -118, 86, -86, -47, -104, -26, -27, 88, 2, 97, -110, 122, 36, 125, -45, -73, 2, -10, 16, -111, 83, -89, 73, -75, -5, 79, -4, 70};
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
    msg.setTimeStamp(0.8561582916465181);
    msg.setSource(41612U);
    msg.setSourceEntity(139U);
    msg.setDestination(19082U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.2896473624384962);
    msg.setSource(38721U);
    msg.setSourceEntity(131U);
    msg.setDestination(64027U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.0063571818157069915);
    msg.setSource(445U);
    msg.setSourceEntity(248U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.9894997478681242);
    msg.setSource(27350U);
    msg.setSourceEntity(55U);
    msg.setDestination(41286U);
    msg.setDestinationEntity(154U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.19747489531872153);
    msg.setSource(13067U);
    msg.setSourceEntity(57U);
    msg.setDestination(9500U);
    msg.setDestinationEntity(76U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.047591774434846745);
    msg.setSource(7923U);
    msg.setSourceEntity(174U);
    msg.setDestination(41849U);
    msg.setDestinationEntity(239U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.3261217434671654);
    msg.setSource(51985U);
    msg.setSourceEntity(49U);
    msg.setDestination(51897U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5695193354553532;
    msg.confidence = 0.1691923930650726;
    msg.opmodes.assign("TILMMWRHKNYBXOEYORUXUYHSZCUUVVXICCHZSQYEDORCSHPLVZJTLKTNPZGGMLDCLEBPVKRPMJSEOOVNOVYGWFYJIAZPGDMANSTVIZGFXYKQUPRIQTBJTBIXISQAMOWFAUKUHWDUROMFQZLZHYEWJAIQNMIZSNWQRVPXSEDJYA");

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
    msg.setTimeStamp(0.27011570119793893);
    msg.setSource(28369U);
    msg.setSourceEntity(82U);
    msg.setDestination(17375U);
    msg.setDestinationEntity(208U);
    msg.value = 0.33317344862528253;
    msg.confidence = 0.6832678495357749;
    msg.opmodes.assign("UEQCBEHKRPFBUSWOVTQXPIVKDCZHAYWVTLGNFAIINEDFNUVYCXLDDRUZP");

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
    msg.setTimeStamp(0.5876240704243653);
    msg.setSource(25238U);
    msg.setSourceEntity(16U);
    msg.setDestination(34716U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6952508663802638;
    msg.confidence = 0.008077529505126302;
    msg.opmodes.assign("QKNGNTPLDUYJQCBVMRAYRCFFXEFDIYVHHMEWBMKDGKCRNOTYDTHZPHZUUFUVECEIKVEWSANMBOQOLBWPAMUWLEBCTZAOGLMYHUBFHIGACTUJFSSDHIPRXXTSPDOLKXKVQSGCFRMLQYJTGXWHFOCIYQQIXPPSZKLMMFPJVOSEZDAVWCWBMIXIARFBXL");

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
    msg.setTimeStamp(0.5312159603052706);
    msg.setSource(1202U);
    msg.setSourceEntity(126U);
    msg.setDestination(59002U);
    msg.setDestinationEntity(93U);
    msg.itow = 3929694598U;
    msg.lat = 0.29560282627150125;
    msg.lon = 0.2335997318763866;
    msg.height_ell = 0.9399931991948909;
    msg.height_sea = 0.8250370638666308;
    msg.hacc = 0.6961825431778826;
    msg.vacc = 0.4421307808670526;
    msg.vel_n = 0.510884426064988;
    msg.vel_e = 0.9361279810466102;
    msg.vel_d = 0.5604258552797414;
    msg.speed = 0.9244447800164177;
    msg.gspeed = 0.26123048608984967;
    msg.heading = 0.6286521191418235;
    msg.sacc = 0.5749568652158631;
    msg.cacc = 0.05427493574133602;

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
    msg.setTimeStamp(0.3163257611658755);
    msg.setSource(12420U);
    msg.setSourceEntity(53U);
    msg.setDestination(54666U);
    msg.setDestinationEntity(235U);
    msg.itow = 4110781776U;
    msg.lat = 0.3159212900642502;
    msg.lon = 0.438517899777476;
    msg.height_ell = 0.1266454593882973;
    msg.height_sea = 0.4790538866339159;
    msg.hacc = 0.10429839069774927;
    msg.vacc = 0.21047238759311826;
    msg.vel_n = 0.4247360953875311;
    msg.vel_e = 0.6785867105649086;
    msg.vel_d = 0.435172478810951;
    msg.speed = 0.45124263933629205;
    msg.gspeed = 0.5478940292899098;
    msg.heading = 0.6317338096574693;
    msg.sacc = 0.6226806830757731;
    msg.cacc = 0.8398444784104131;

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
    msg.setTimeStamp(0.1904729060309921);
    msg.setSource(48691U);
    msg.setSourceEntity(168U);
    msg.setDestination(51491U);
    msg.setDestinationEntity(69U);
    msg.itow = 2888341160U;
    msg.lat = 0.7663709711770182;
    msg.lon = 0.9001377051487357;
    msg.height_ell = 0.654447996379669;
    msg.height_sea = 0.2564911501190792;
    msg.hacc = 0.17494398511421827;
    msg.vacc = 0.2713924909914721;
    msg.vel_n = 0.43690674384733463;
    msg.vel_e = 0.37480208131634263;
    msg.vel_d = 0.8960744071286126;
    msg.speed = 0.8892293548704308;
    msg.gspeed = 0.9271931782647845;
    msg.heading = 0.1492915101351875;
    msg.sacc = 0.06712424778052206;
    msg.cacc = 0.5234214113730504;

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
    msg.setTimeStamp(0.013428352662738896);
    msg.setSource(47129U);
    msg.setSourceEntity(131U);
    msg.setDestination(27309U);
    msg.setDestinationEntity(78U);
    msg.id = 144U;
    msg.value = 0.23285621011241342;

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
    msg.setTimeStamp(0.5154060334287188);
    msg.setSource(4564U);
    msg.setSourceEntity(172U);
    msg.setDestination(21216U);
    msg.setDestinationEntity(237U);
    msg.id = 148U;
    msg.value = 0.15560761052961802;

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
    msg.setTimeStamp(0.2164586796673954);
    msg.setSource(42335U);
    msg.setSourceEntity(124U);
    msg.setDestination(33596U);
    msg.setDestinationEntity(59U);
    msg.id = 137U;
    msg.value = 0.24309804487217934;

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
    msg.setTimeStamp(0.34794133291851514);
    msg.setSource(10418U);
    msg.setSourceEntity(151U);
    msg.setDestination(58766U);
    msg.setDestinationEntity(1U);
    msg.x = 0.07170930800216635;
    msg.y = 0.8764407934140637;
    msg.z = 0.546957811690713;
    msg.phi = 0.29027845154736864;
    msg.theta = 0.3079072688532054;
    msg.psi = 0.9408966696885237;

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
    msg.setTimeStamp(0.32743060848993766);
    msg.setSource(59963U);
    msg.setSourceEntity(167U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(235U);
    msg.x = 0.21838915745423415;
    msg.y = 0.44559325730978483;
    msg.z = 0.6946552844980817;
    msg.phi = 0.966038658055046;
    msg.theta = 0.7420877270683535;
    msg.psi = 0.9439085158211515;

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
    msg.setTimeStamp(0.7680737713092397);
    msg.setSource(56028U);
    msg.setSourceEntity(60U);
    msg.setDestination(36037U);
    msg.setDestinationEntity(144U);
    msg.x = 0.690167069516242;
    msg.y = 0.4746337405440525;
    msg.z = 0.5569059448356188;
    msg.phi = 0.8227287304494525;
    msg.theta = 0.731426187004786;
    msg.psi = 0.5747481452018873;

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
    msg.setTimeStamp(0.15839316045413643);
    msg.setSource(7632U);
    msg.setSourceEntity(3U);
    msg.setDestination(64880U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.009836571959291884;
    msg.beam_height = 0.48438422012753013;

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
    msg.setTimeStamp(0.36131784773473097);
    msg.setSource(57696U);
    msg.setSourceEntity(162U);
    msg.setDestination(60739U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.20222624239862952;
    msg.beam_height = 0.9907408982734411;

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
    msg.setTimeStamp(0.8580807658751272);
    msg.setSource(32267U);
    msg.setSourceEntity(129U);
    msg.setDestination(46018U);
    msg.setDestinationEntity(9U);
    msg.beam_width = 0.03166971206843294;
    msg.beam_height = 0.985041869620839;

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
    msg.setTimeStamp(0.31401834282231866);
    msg.setSource(56775U);
    msg.setSourceEntity(7U);
    msg.setDestination(51034U);
    msg.setDestinationEntity(76U);
    msg.sane = 44U;

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
    msg.setTimeStamp(0.17214920015129886);
    msg.setSource(30574U);
    msg.setSourceEntity(211U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(176U);
    msg.sane = 110U;

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
    msg.setTimeStamp(0.48432605254273575);
    msg.setSource(1197U);
    msg.setSourceEntity(114U);
    msg.setDestination(18675U);
    msg.setDestinationEntity(248U);
    msg.sane = 164U;

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
    msg.setTimeStamp(0.2777825406659419);
    msg.setSource(16895U);
    msg.setSourceEntity(13U);
    msg.setDestination(61674U);
    msg.setDestinationEntity(79U);
    msg.value = 0.4131050327490049;

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
    msg.setTimeStamp(0.23602896029715625);
    msg.setSource(20112U);
    msg.setSourceEntity(158U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5341481051080684;

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
    msg.setTimeStamp(0.278311882709639);
    msg.setSource(38437U);
    msg.setSourceEntity(145U);
    msg.setDestination(15428U);
    msg.setDestinationEntity(67U);
    msg.value = 0.9780083057487866;

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
    msg.setTimeStamp(0.27909929990786086);
    msg.setSource(37162U);
    msg.setSourceEntity(61U);
    msg.setDestination(42761U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9755602276969303;

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
    msg.setTimeStamp(0.9115580962497462);
    msg.setSource(43467U);
    msg.setSourceEntity(147U);
    msg.setDestination(51990U);
    msg.setDestinationEntity(233U);
    msg.value = 0.8610257847052635;

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
    msg.setTimeStamp(0.9268638761306325);
    msg.setSource(37613U);
    msg.setSourceEntity(99U);
    msg.setDestination(36490U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6323659335721914;

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
    msg.setTimeStamp(0.22989200130089593);
    msg.setSource(30223U);
    msg.setSourceEntity(78U);
    msg.setDestination(33168U);
    msg.setDestinationEntity(60U);
    msg.value = 0.19962638459381854;

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
    msg.setTimeStamp(0.5099522064467246);
    msg.setSource(37535U);
    msg.setSourceEntity(49U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(6U);
    msg.value = 0.10080705111507282;

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
    msg.setTimeStamp(0.1569136339854027);
    msg.setSource(8203U);
    msg.setSourceEntity(248U);
    msg.setDestination(1942U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5369316358718881;

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
    msg.setTimeStamp(0.9680547194597712);
    msg.setSource(23824U);
    msg.setSourceEntity(61U);
    msg.setDestination(50397U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5996533170726736;

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
    msg.setTimeStamp(0.5511865596802207);
    msg.setSource(36517U);
    msg.setSourceEntity(233U);
    msg.setDestination(34631U);
    msg.setDestinationEntity(60U);
    msg.value = 0.2711276430048186;

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
    msg.setTimeStamp(0.8036728807843413);
    msg.setSource(41341U);
    msg.setSourceEntity(12U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(72U);
    msg.value = 0.07293854248616727;

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
    msg.setTimeStamp(0.27129967895282225);
    msg.setSource(62752U);
    msg.setSourceEntity(105U);
    msg.setDestination(62587U);
    msg.setDestinationEntity(46U);
    msg.value = 0.981430168726665;

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
    msg.setTimeStamp(0.946581306379274);
    msg.setSource(28394U);
    msg.setSourceEntity(25U);
    msg.setDestination(35567U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7833238682162554;

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
    msg.setTimeStamp(0.9519182596681709);
    msg.setSource(39241U);
    msg.setSourceEntity(247U);
    msg.setDestination(22347U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8083976067814281;

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
    msg.setTimeStamp(0.5524516020494251);
    msg.setSource(31449U);
    msg.setSourceEntity(55U);
    msg.setDestination(52037U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8652603386658347;

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
    msg.setTimeStamp(0.3261993380407703);
    msg.setSource(13604U);
    msg.setSourceEntity(54U);
    msg.setDestination(43400U);
    msg.setDestinationEntity(83U);
    msg.value = 0.4832339240018543;

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
    msg.setTimeStamp(0.926524119072481);
    msg.setSource(38569U);
    msg.setSourceEntity(126U);
    msg.setDestination(42226U);
    msg.setDestinationEntity(84U);
    msg.value = 0.14549454271708062;

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
    msg.setTimeStamp(0.2503944336687205);
    msg.setSource(48215U);
    msg.setSourceEntity(21U);
    msg.setDestination(29009U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7946523440366718;

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
    msg.setTimeStamp(0.7842918308798944);
    msg.setSource(24036U);
    msg.setSourceEntity(89U);
    msg.setDestination(57581U);
    msg.setDestinationEntity(17U);
    msg.value = 0.17331255902758747;

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
    msg.setTimeStamp(0.7030741378610246);
    msg.setSource(17791U);
    msg.setSourceEntity(55U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8568137300640218;

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
    msg.setTimeStamp(0.05354468985149374);
    msg.setSource(22211U);
    msg.setSourceEntity(50U);
    msg.setDestination(49472U);
    msg.setDestinationEntity(113U);
    msg.value = 0.795045872649845;

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
    msg.setTimeStamp(0.992988900859026);
    msg.setSource(39757U);
    msg.setSourceEntity(55U);
    msg.setDestination(12636U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5131597250994465;

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
    msg.setTimeStamp(0.5981195170987545);
    msg.setSource(46068U);
    msg.setSourceEntity(229U);
    msg.setDestination(55204U);
    msg.setDestinationEntity(80U);
    msg.value = 0.7524641320103034;

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
    msg.setTimeStamp(0.7797634306880399);
    msg.setSource(52734U);
    msg.setSourceEntity(204U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(140U);
    msg.validity = 10589U;
    msg.type = 173U;
    msg.tow = 1671295569U;
    msg.base_lat = 0.2182430980193628;
    msg.base_lon = 0.13301895568405697;
    msg.base_height = 0.4298847478313522;
    msg.n = 0.7182826835897587;
    msg.e = 0.8547081339108845;
    msg.d = 0.02987731383194847;
    msg.v_n = 0.2925837525017174;
    msg.v_e = 0.1013508918596231;
    msg.v_d = 0.9524685698360469;
    msg.satellites = 101U;
    msg.iar_hyp = 50128U;
    msg.iar_ratio = 0.14324219233353486;

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
    msg.setTimeStamp(0.5238342954993815);
    msg.setSource(60671U);
    msg.setSourceEntity(86U);
    msg.setDestination(41485U);
    msg.setDestinationEntity(73U);
    msg.validity = 52916U;
    msg.type = 14U;
    msg.tow = 3154168372U;
    msg.base_lat = 0.12363077844600323;
    msg.base_lon = 0.7619960716407423;
    msg.base_height = 0.41819659753970817;
    msg.n = 0.06488346191979155;
    msg.e = 0.6663747458771765;
    msg.d = 0.9735094515297643;
    msg.v_n = 0.8832152712059032;
    msg.v_e = 0.9344123091315948;
    msg.v_d = 0.45968995910869903;
    msg.satellites = 233U;
    msg.iar_hyp = 28851U;
    msg.iar_ratio = 0.4132947095358326;

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
    msg.setTimeStamp(0.777081402358751);
    msg.setSource(40603U);
    msg.setSourceEntity(56U);
    msg.setDestination(46156U);
    msg.setDestinationEntity(231U);
    msg.validity = 37784U;
    msg.type = 128U;
    msg.tow = 1935275372U;
    msg.base_lat = 0.5367183164169607;
    msg.base_lon = 0.2691457411372663;
    msg.base_height = 0.8457652674591517;
    msg.n = 0.6876604406163896;
    msg.e = 0.34393240339294906;
    msg.d = 0.42499359076934506;
    msg.v_n = 0.6783966841438492;
    msg.v_e = 0.08747985868816843;
    msg.v_d = 0.21426572741072547;
    msg.satellites = 121U;
    msg.iar_hyp = 53434U;
    msg.iar_ratio = 0.09465498232634295;

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
    msg.setTimeStamp(0.7224295444630426);
    msg.setSource(64065U);
    msg.setSourceEntity(144U);
    msg.setDestination(39732U);
    msg.setDestinationEntity(197U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6819272091906874;
    tmp_msg_0.lon = 0.5202674038423264;
    tmp_msg_0.height = 0.7069724063932458;
    tmp_msg_0.x = 0.8877196837707272;
    tmp_msg_0.y = 0.2549461624842263;
    tmp_msg_0.z = 0.3930248861951078;
    tmp_msg_0.phi = 0.9439306085299592;
    tmp_msg_0.theta = 0.6627695501214753;
    tmp_msg_0.psi = 0.6168649212979502;
    tmp_msg_0.u = 0.8394744417166067;
    tmp_msg_0.v = 0.6717681852064592;
    tmp_msg_0.w = 0.43507562891752405;
    tmp_msg_0.vx = 0.2969695923819037;
    tmp_msg_0.vy = 0.7046510514590644;
    tmp_msg_0.vz = 0.6814948507756975;
    tmp_msg_0.p = 0.21816606575540254;
    tmp_msg_0.q = 0.003947828348824567;
    tmp_msg_0.r = 0.7140119320919491;
    tmp_msg_0.depth = 0.5351816057490432;
    tmp_msg_0.alt = 0.06733065897739132;
    msg.state.set(tmp_msg_0);
    msg.type = 105U;

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
    msg.setTimeStamp(0.980482241736521);
    msg.setSource(8793U);
    msg.setSourceEntity(165U);
    msg.setDestination(25287U);
    msg.setDestinationEntity(46U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.714295402133496;
    tmp_msg_0.lon = 0.8063135201879235;
    tmp_msg_0.height = 0.11805179208862426;
    tmp_msg_0.x = 0.923298315198059;
    tmp_msg_0.y = 0.9372222193546784;
    tmp_msg_0.z = 0.7497110467968129;
    tmp_msg_0.phi = 0.8691546100806065;
    tmp_msg_0.theta = 0.40835687110921337;
    tmp_msg_0.psi = 0.8516254169086348;
    tmp_msg_0.u = 0.8830475703048067;
    tmp_msg_0.v = 0.1180320373237953;
    tmp_msg_0.w = 0.9196262134353321;
    tmp_msg_0.vx = 0.6301481959975002;
    tmp_msg_0.vy = 0.280705379232694;
    tmp_msg_0.vz = 0.6649404777748535;
    tmp_msg_0.p = 0.600701792674937;
    tmp_msg_0.q = 0.13181722722768052;
    tmp_msg_0.r = 0.9231917647401389;
    tmp_msg_0.depth = 0.07833193683299211;
    tmp_msg_0.alt = 0.4537912566303727;
    msg.state.set(tmp_msg_0);
    msg.type = 198U;

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
    msg.setTimeStamp(0.7740601891410693);
    msg.setSource(21938U);
    msg.setSourceEntity(79U);
    msg.setDestination(7450U);
    msg.setDestinationEntity(60U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2893534648978173;
    tmp_msg_0.lon = 0.4758214145910947;
    tmp_msg_0.height = 0.8559275018702348;
    tmp_msg_0.x = 0.023134478814548665;
    tmp_msg_0.y = 0.9479979959810712;
    tmp_msg_0.z = 0.5603188622734995;
    tmp_msg_0.phi = 0.09857244747423533;
    tmp_msg_0.theta = 0.8974831670986264;
    tmp_msg_0.psi = 0.5826834596212417;
    tmp_msg_0.u = 0.2564337544379739;
    tmp_msg_0.v = 0.8170323064609075;
    tmp_msg_0.w = 0.8429174964657037;
    tmp_msg_0.vx = 0.6934608538497145;
    tmp_msg_0.vy = 0.25863946283087125;
    tmp_msg_0.vz = 0.9136642909739693;
    tmp_msg_0.p = 0.2910353407616687;
    tmp_msg_0.q = 0.8530270538897086;
    tmp_msg_0.r = 0.2284048044454008;
    tmp_msg_0.depth = 0.4553624726360763;
    tmp_msg_0.alt = 0.5367477587690211;
    msg.state.set(tmp_msg_0);
    msg.type = 133U;

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
    msg.setTimeStamp(0.4485635730957449);
    msg.setSource(7912U);
    msg.setSourceEntity(251U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(50U);
    msg.value = 0.19910809572413735;

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
    msg.setTimeStamp(0.013183444635513908);
    msg.setSource(38442U);
    msg.setSourceEntity(94U);
    msg.setDestination(4618U);
    msg.setDestinationEntity(43U);
    msg.value = 0.19603881602908024;

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
    msg.setTimeStamp(0.5017729557283195);
    msg.setSource(47684U);
    msg.setSourceEntity(240U);
    msg.setDestination(33446U);
    msg.setDestinationEntity(186U);
    msg.value = 0.9352129453162245;

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
    msg.setTimeStamp(0.352059934605505);
    msg.setSource(59329U);
    msg.setSourceEntity(41U);
    msg.setDestination(17265U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5718941887936259;

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
    msg.setTimeStamp(0.4722916210771204);
    msg.setSource(50327U);
    msg.setSourceEntity(15U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(72U);
    msg.value = 0.8193056646185615;

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
    msg.setTimeStamp(0.39346667084119225);
    msg.setSource(2452U);
    msg.setSourceEntity(151U);
    msg.setDestination(64064U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6322468247569043;

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
    msg.setTimeStamp(0.7386098767792018);
    msg.setSource(57483U);
    msg.setSourceEntity(120U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3275354458518982;

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
    msg.setTimeStamp(0.34490846533193664);
    msg.setSource(48954U);
    msg.setSourceEntity(34U);
    msg.setDestination(57387U);
    msg.setDestinationEntity(214U);
    msg.value = 0.19884525136494835;

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
    msg.setTimeStamp(0.6625693188995173);
    msg.setSource(40042U);
    msg.setSourceEntity(146U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8401385920103924;

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
    msg.setTimeStamp(0.3169035793345427);
    msg.setSource(52024U);
    msg.setSourceEntity(5U);
    msg.setDestination(62801U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0052588241121215296;

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
    msg.setTimeStamp(0.29049038136929173);
    msg.setSource(57864U);
    msg.setSourceEntity(8U);
    msg.setDestination(3930U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8546483488475838;

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
    msg.setTimeStamp(0.5889304466520927);
    msg.setSource(26589U);
    msg.setSourceEntity(198U);
    msg.setDestination(48589U);
    msg.setDestinationEntity(210U);
    msg.value = 0.9424595454956589;

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
    msg.setTimeStamp(0.43070195893914887);
    msg.setSource(14181U);
    msg.setSourceEntity(51U);
    msg.setDestination(58595U);
    msg.setDestinationEntity(1U);
    msg.value = 0.2195604592978876;

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
    msg.setTimeStamp(0.19323035110607167);
    msg.setSource(22811U);
    msg.setSourceEntity(26U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(76U);
    msg.value = 0.10618087857668423;

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
    msg.setTimeStamp(0.6324613316673252);
    msg.setSource(35424U);
    msg.setSourceEntity(235U);
    msg.setDestination(36915U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0553526913150284;

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
    msg.setTimeStamp(0.3401550395354843);
    msg.setSource(26101U);
    msg.setSourceEntity(204U);
    msg.setDestination(1780U);
    msg.setDestinationEntity(211U);
    msg.id = 84U;
    msg.zoom = 130U;
    msg.action = 69U;

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
    msg.setTimeStamp(0.7045160889226098);
    msg.setSource(21560U);
    msg.setSourceEntity(11U);
    msg.setDestination(41655U);
    msg.setDestinationEntity(149U);
    msg.id = 98U;
    msg.zoom = 21U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.8315365009711098);
    msg.setSource(5048U);
    msg.setSourceEntity(239U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(37U);
    msg.id = 156U;
    msg.zoom = 119U;
    msg.action = 73U;

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
    msg.setTimeStamp(0.4900218631575597);
    msg.setSource(52172U);
    msg.setSourceEntity(99U);
    msg.setDestination(28498U);
    msg.setDestinationEntity(60U);
    msg.id = 91U;
    msg.value = 0.36595299159443784;

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
    msg.setTimeStamp(0.17365814134696023);
    msg.setSource(37100U);
    msg.setSourceEntity(38U);
    msg.setDestination(18292U);
    msg.setDestinationEntity(11U);
    msg.id = 64U;
    msg.value = 0.7903273228716067;

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
    msg.setTimeStamp(0.2632502383019705);
    msg.setSource(32471U);
    msg.setSourceEntity(94U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(25U);
    msg.id = 195U;
    msg.value = 0.24805290748505637;

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
    msg.setTimeStamp(0.7293782398710004);
    msg.setSource(29939U);
    msg.setSourceEntity(216U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(241U);
    msg.id = 105U;
    msg.value = 0.280243744442252;

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
    msg.setTimeStamp(0.4585797010927428);
    msg.setSource(14221U);
    msg.setSourceEntity(97U);
    msg.setDestination(53752U);
    msg.setDestinationEntity(155U);
    msg.id = 27U;
    msg.value = 0.16241054862713067;

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
    msg.setTimeStamp(0.24407383669436022);
    msg.setSource(27419U);
    msg.setSourceEntity(196U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(138U);
    msg.id = 197U;
    msg.value = 0.9685988463122117;

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
    msg.setTimeStamp(0.06342022132333547);
    msg.setSource(26654U);
    msg.setSourceEntity(198U);
    msg.setDestination(14501U);
    msg.setDestinationEntity(156U);
    msg.id = 146U;
    msg.angle = 0.8469889185226103;

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
    msg.setTimeStamp(0.038620812488199485);
    msg.setSource(63921U);
    msg.setSourceEntity(252U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(65U);
    msg.id = 43U;
    msg.angle = 0.0762097806687404;

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
    msg.setTimeStamp(0.9786757795026311);
    msg.setSource(42910U);
    msg.setSourceEntity(153U);
    msg.setDestination(7295U);
    msg.setDestinationEntity(23U);
    msg.id = 233U;
    msg.angle = 0.5251902979471397;

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
    msg.setTimeStamp(0.8785357999370331);
    msg.setSource(21113U);
    msg.setSourceEntity(157U);
    msg.setDestination(58054U);
    msg.setDestinationEntity(205U);
    msg.op = 72U;
    msg.actions.assign("TZFJJPVXJFMGNMJDMDKEQHIN");

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
    msg.setTimeStamp(0.09184509997422163);
    msg.setSource(33587U);
    msg.setSourceEntity(113U);
    msg.setDestination(20505U);
    msg.setDestinationEntity(41U);
    msg.op = 105U;
    msg.actions.assign("NZNQEKOBPCJQSCJWEOWLKDLCSOTEQAZBGUGNKHMZUGIIOTWZPQVEPBSFNQTGSHTSNTXYRYNFBUCPFMFMSFRIOXZJHFCICKVSEGPBDTOBDSWJQDPHCWDVRWPGJQZJBYAKYIXUCUKWWEPATULAPFCTMVOZVULJOMNQDRVFXGUXGYDYBMMFJYWHFYLUXWRPRRXOHXANMNUZSCAGMIIAHKVDIQITLZIAYLNDLRKVEVZEKEOAXTQHSEABJLLHMD");

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
    msg.setTimeStamp(0.8797123816871415);
    msg.setSource(8149U);
    msg.setSourceEntity(70U);
    msg.setDestination(25649U);
    msg.setDestinationEntity(156U);
    msg.op = 10U;
    msg.actions.assign("FVPXBRIQRRRKHBTNKQOLIZMJPPVYNUPINDDCRCYWLIALOYGLDTCWFDNISKZUIQVVOBBOQVUVBUSADNWZLJJFXJVOTERRNHXCJEOLFMZYOEAICSTKMXPZUPTGUQAZUAHSMNCVJCLEJWKQFQMPIVFKTNSEXYBHOZMTMXHHHFDUPDWDZECCAWBPRGIKCIEWXUTSNMWAFZG");

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
    msg.setTimeStamp(0.7650999491840816);
    msg.setSource(36537U);
    msg.setSourceEntity(182U);
    msg.setDestination(36936U);
    msg.setDestinationEntity(182U);
    msg.actions.assign("YCLMCEUEAPPZQJNQZMDBOJXRDCSVNSTTFBEBYXRWCHZGWZWLPJQASZWXHSUKFULVAXYSWFZCUNGZDHBVGMWIPQGSPHJWYDJAHGVUIGKVBTVARUYOORXRGOSKTNEFUNIXLXWKBRHDMJEKVOPMARTHYFNOQTTXUZQLAZNHBODGYDGOJ");

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
    msg.setTimeStamp(0.7026141906847687);
    msg.setSource(11566U);
    msg.setSourceEntity(73U);
    msg.setDestination(25165U);
    msg.setDestinationEntity(230U);
    msg.actions.assign("QCOYTZROXLQCPQWJFPULFKUDTZKMEJFUTIHSPHWAVBAHPTCVFEQPWNZMZRABXMRHAAGEGJZADIKSJMJCJEII");

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
    msg.setTimeStamp(0.9242892338145388);
    msg.setSource(51590U);
    msg.setSourceEntity(145U);
    msg.setDestination(45043U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("SMURZJZFWOOWJMWYQGHLPXICMQXTNQXMRDPGKR");

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
    msg.setTimeStamp(0.0920562538496218);
    msg.setSource(47653U);
    msg.setSourceEntity(175U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(64U);
    msg.button = 28U;
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
    msg.setTimeStamp(0.6112483101877941);
    msg.setSource(15226U);
    msg.setSourceEntity(90U);
    msg.setDestination(31374U);
    msg.setDestinationEntity(192U);
    msg.button = 57U;
    msg.value = 80U;

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
    msg.setTimeStamp(0.5832291926791973);
    msg.setSource(20623U);
    msg.setSourceEntity(68U);
    msg.setDestination(20181U);
    msg.setDestinationEntity(158U);
    msg.button = 115U;
    msg.value = 169U;

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
    msg.setTimeStamp(0.9228768280499565);
    msg.setSource(36315U);
    msg.setSourceEntity(103U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(93U);
    msg.op = 46U;
    msg.text.assign("EFGAQKQLWCVGVZOHWKCVBHTGNNGJEPJXENKYISRBKXFQVNMBMGJOYAXDOAZ");

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
    msg.setTimeStamp(0.7102189112583241);
    msg.setSource(785U);
    msg.setSourceEntity(121U);
    msg.setDestination(48089U);
    msg.setDestinationEntity(150U);
    msg.op = 59U;
    msg.text.assign("PBBVNYHHIJYSEYKENAGQLMSWVEHMVQVNAFQOZLAZHCYKAHQLJAGGSWDOQTKQMDVSFXWWSFDMUHKIFOPKZWNUJXBEVKARYOIMAYBEREUCPGGCPYJNSZJNUXSGVFLZQEHBIFLJTCRTTDZIWTUXV");

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
    msg.setTimeStamp(0.407194936491872);
    msg.setSource(30002U);
    msg.setSourceEntity(137U);
    msg.setDestination(40145U);
    msg.setDestinationEntity(95U);
    msg.op = 75U;
    msg.text.assign("CSEKOYMDNYEAPDQHFDQHZRBJEXQYKPPZBTOXIJCACYLPUARJWWJAIRMSNUVWIINLHDUTRXFVUJJVNXHODIKQHGYAMTSNVZXWXETBDJZRSTNOPYAQTYPRUOGVZBLHGMLEGEWBNOWOGOZARVCXHESRPYNKLZJLSTBVSSITFKGAIFBGKLPPTXDFKIMWQCXQSDDTUBHKVKHVYUMQKIMJCQEMQFRSBBJGIGZNLEWWMDZEUFCOVLYCF");

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
    msg.setTimeStamp(0.6574157899897255);
    msg.setSource(5208U);
    msg.setSourceEntity(225U);
    msg.setDestination(58312U);
    msg.setDestinationEntity(33U);
    msg.op = 47U;
    msg.time_remain = 0.025221332859165058;
    msg.sched_time = 0.7075803391128013;

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
    msg.setTimeStamp(0.2346549207374221);
    msg.setSource(42526U);
    msg.setSourceEntity(34U);
    msg.setDestination(22289U);
    msg.setDestinationEntity(136U);
    msg.op = 161U;
    msg.time_remain = 0.6801022637920899;
    msg.sched_time = 0.3391925387502305;

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
    msg.setTimeStamp(0.6254453740057079);
    msg.setSource(1494U);
    msg.setSourceEntity(85U);
    msg.setDestination(39881U);
    msg.setDestinationEntity(82U);
    msg.op = 188U;
    msg.time_remain = 0.17287024606552936;
    msg.sched_time = 0.12050639275784392;

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
    msg.setTimeStamp(0.9525936375906746);
    msg.setSource(9193U);
    msg.setSourceEntity(163U);
    msg.setDestination(63895U);
    msg.setDestinationEntity(240U);
    msg.name.assign("SHPALYIZSOFNMVTNTBHZBCFAARSULCSJSONYOAQJFXMRPDILQKALUTGJEDQJVRITEOYBZZLPJKQCXSWVDCBCOWVITZHXUWUZCEWBVOLUNCZA");
    msg.op = 235U;
    msg.sched_time = 0.10647895610959413;

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
    msg.setTimeStamp(0.6968256388515236);
    msg.setSource(22493U);
    msg.setSourceEntity(191U);
    msg.setDestination(45930U);
    msg.setDestinationEntity(150U);
    msg.name.assign("LFZIJUSXNKVKOGODUBVLDXGILRIXOZIGYTQCOTTYIUUAMSDVBNTHETVMBDMAHUYMUSEDQPGIXOVKWCDCFPWKORSPMPQASLYQJDVGNMQHWJKBBBVPK");
    msg.op = 250U;
    msg.sched_time = 0.07934104504949724;

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
    msg.setTimeStamp(0.09756266852502427);
    msg.setSource(6310U);
    msg.setSourceEntity(252U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(109U);
    msg.name.assign("LIPIAQJLHGDIIPFVGVDNCHYTLWYNDZBTMDHYZFGDPXEZXHVQLLXTCTOCCZQFPKJRGVKYRFOMFHMXTWPSENAPJVJXLUGOIPTNECTCSUBQYJJAUXTUYCMMDYSGAZSONRZMPWQZEVFGRGKOKHUHYSLKDVJOSAAQBGZZLNKABKRXQUHQDFNEYEFXXLRTWNYKWRRJIFNPSMKAODOEBXWBEKFVZJSR");
    msg.op = 198U;
    msg.sched_time = 0.1515729821214341;

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
    msg.setTimeStamp(0.9643337826941859);
    msg.setSource(60039U);
    msg.setSourceEntity(249U);
    msg.setDestination(16734U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.24931055262311008);
    msg.setSource(45223U);
    msg.setSourceEntity(161U);
    msg.setDestination(19569U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.8445405058432169);
    msg.setSource(10979U);
    msg.setSourceEntity(174U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.8777143824726358);
    msg.setSource(34782U);
    msg.setSourceEntity(100U);
    msg.setDestination(219U);
    msg.setDestinationEntity(197U);
    msg.name.assign("BQNXCAWZJMWLRYFICPZIPS");
    msg.state = 117U;

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
    msg.setTimeStamp(0.4625974739230124);
    msg.setSource(7662U);
    msg.setSourceEntity(219U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(46U);
    msg.name.assign("LOTGFHJETNGTBYSVCSHYMJCUFWBOMGGHRZETMAZDBGULNLJJYAXEJZKDIPNLLLTCIOZFGXKOOOBKQVRYNAZPUNPEAVEKSJWSXWJPFXEZRRFLADFWBPXEHXOZBNNFSTXVCUIOLIWYEMDKANKWVYDMYUKYGHHGSSUUKBWSCLFUCIMQVVPNOGTGBIDCHEWMMBSQBDHAXIWPXZPFUEUDFKWPDJQSAPINRQQQAOTDRRIYACRJVRCZHLYKTCXHVQM");
    msg.state = 198U;

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
    msg.setTimeStamp(0.7035896462469479);
    msg.setSource(10909U);
    msg.setSourceEntity(185U);
    msg.setDestination(60780U);
    msg.setDestinationEntity(161U);
    msg.name.assign("OBSZZLJVINARUWMEWYWQOJOEHVVFXHHQJZAXSYIARPJBMHRCYTCWVVUQBPKCFDFALEHGXJQIUDMGUWCXSBJCMPDLNUATKVIAEVIXWYBNQIMIUHR");
    msg.state = 59U;

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
    msg.setTimeStamp(0.24139980999667188);
    msg.setSource(42808U);
    msg.setSourceEntity(71U);
    msg.setDestination(57259U);
    msg.setDestinationEntity(253U);
    msg.name.assign("AHAZSDFKIKHFIYIBYWLUJSYLSMCUSXTDJUBPL");
    msg.value = 102U;

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
    msg.setTimeStamp(0.821120628656362);
    msg.setSource(4823U);
    msg.setSourceEntity(30U);
    msg.setDestination(12917U);
    msg.setDestinationEntity(140U);
    msg.name.assign("NKLTNDUXAOCGPXTPDGAMKSFTEYKAHCBRFAWKHFSBHNGTYEPRMODJUD");
    msg.value = 174U;

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
    msg.setTimeStamp(0.11532400534333798);
    msg.setSource(353U);
    msg.setSourceEntity(124U);
    msg.setDestination(46634U);
    msg.setDestinationEntity(218U);
    msg.name.assign("VIBVDXAWVMZAUFTEXAQPZFHDMSLVEZCBLRZZPGIBCWSIYXTSSUGGKIGWLUJJXNQVPEAFLYEWTQACTXCMTLXSWSMZGXJQOSPEFHQHGJFEDRVLFUZXFYNNOWNZDKHACJVJPIBRKKAWBUBTUGFBJCYCNPBUUGADEYDAPFOSETKUKZQYJREXOGCOROKXSMWCIBVKIDGVKNLMNBACNMWWKQINIOUTQHDRYHDYPOTHPLRTHMRR");
    msg.value = 91U;

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
    msg.setTimeStamp(0.35374174471637787);
    msg.setSource(33460U);
    msg.setSourceEntity(231U);
    msg.setDestination(29261U);
    msg.setDestinationEntity(88U);
    msg.name.assign("MFZLAUXMSLOTIBUNQBZEAFSEDSFEYFCWARVXVQQHI");

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
    msg.setTimeStamp(0.16817906976646013);
    msg.setSource(61559U);
    msg.setSourceEntity(85U);
    msg.setDestination(8812U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ALAUHIJEYSHXKYMDBTWGTVWGVJYSHMXQNYXSUPFLSQVMRSZVTNXTIKCBDENGFDGKJODNNEGVEORJGSUEZIMRJAXATYDAKZWJKWXQPUUQVGPGAFNCHRZQURYMTOWMSLUAZN");

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
    msg.setTimeStamp(0.9240654683618311);
    msg.setSource(15045U);
    msg.setSourceEntity(72U);
    msg.setDestination(65364U);
    msg.setDestinationEntity(248U);
    msg.name.assign("DPBYITAVOWMOMIGZFIFDCYJEZUEHPQCUPSAYTYWGJRDOZTBXPLPIVFWKRQANLIADYLICGUBSQTIJNCHBQWOBCEXLFZXTSKWVJYHDACYJVRVVGNNELWRLHNQXAOHMNQRMWENDFQSCYGRMWJBUZEBSLL");

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
    msg.setTimeStamp(0.8673061971615111);
    msg.setSource(37499U);
    msg.setSourceEntity(82U);
    msg.setDestination(39608U);
    msg.setDestinationEntity(182U);
    msg.name.assign("HKKJHFRBDLZRZAXALXPJGGKWEUNTAZVCGABVMOEPUUSNDIRBBJFGTQCGJUKRELWHOJPGZOOOJMSXOFBZIFQGMAYQRNNPXMMSOFLYCAOXYLBLDPKEMGEGUTSLTSTSRAJDRQZMQSDWJVICVKHVTWDFANTNTYVNUEDVZDWEIARCRMVLYJXWCOKBIKZYEUCWHMISSHXHUSIU");
    msg.value = 248U;

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
    msg.setTimeStamp(0.730806813875607);
    msg.setSource(46517U);
    msg.setSourceEntity(211U);
    msg.setDestination(16106U);
    msg.setDestinationEntity(90U);
    msg.name.assign("SEQSCBLBRPKLHUMYBSPDOTRCLCXCRKUDIFFHCOHUZDTQUZJWOKXVCDKDEGINWQJMQMSYLSMZJMPXTURAZOEFXXXFNCEEICITVDWHDCDVABLOZOHHOFMEHTZMDZVASR");
    msg.value = 198U;

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
    msg.setTimeStamp(0.2506155307698359);
    msg.setSource(60735U);
    msg.setSourceEntity(41U);
    msg.setDestination(50296U);
    msg.setDestinationEntity(95U);
    msg.name.assign("EOKFMAUTCZRFVIJIQDOGSTDBYGFZPUWFZLEQOWOYXTKXISPMVXK");
    msg.value = 52U;

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
    msg.setTimeStamp(0.9557235384343322);
    msg.setSource(9751U);
    msg.setSourceEntity(165U);
    msg.setDestination(60314U);
    msg.setDestinationEntity(54U);
    msg.id = 25U;
    msg.period = 753782309U;
    msg.duty_cycle = 2124089737U;

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
    msg.setTimeStamp(0.19054971631130524);
    msg.setSource(62072U);
    msg.setSourceEntity(80U);
    msg.setDestination(53831U);
    msg.setDestinationEntity(120U);
    msg.id = 45U;
    msg.period = 3673804119U;
    msg.duty_cycle = 397581325U;

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
    msg.setTimeStamp(0.7311778702801623);
    msg.setSource(46859U);
    msg.setSourceEntity(87U);
    msg.setDestination(20069U);
    msg.setDestinationEntity(252U);
    msg.id = 6U;
    msg.period = 1272571506U;
    msg.duty_cycle = 3147611336U;

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
    msg.setTimeStamp(0.6256101594732236);
    msg.setSource(26655U);
    msg.setSourceEntity(187U);
    msg.setDestination(44915U);
    msg.setDestinationEntity(114U);
    msg.id = 4U;
    msg.period = 3070363763U;
    msg.duty_cycle = 2168526522U;

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
    msg.setTimeStamp(0.4930566020627237);
    msg.setSource(24083U);
    msg.setSourceEntity(107U);
    msg.setDestination(25470U);
    msg.setDestinationEntity(8U);
    msg.id = 233U;
    msg.period = 2992439293U;
    msg.duty_cycle = 923982682U;

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
    msg.setTimeStamp(0.3669341878868241);
    msg.setSource(54260U);
    msg.setSourceEntity(38U);
    msg.setDestination(5527U);
    msg.setDestinationEntity(149U);
    msg.id = 251U;
    msg.period = 494056757U;
    msg.duty_cycle = 3775790327U;

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
    msg.setTimeStamp(0.6286317196851748);
    msg.setSource(45936U);
    msg.setSourceEntity(7U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.6056465137208846;
    msg.lon = 0.8199830328664023;
    msg.height = 0.3784668824323194;
    msg.x = 0.46568149649979496;
    msg.y = 0.8245024134751376;
    msg.z = 0.9487882207934821;
    msg.phi = 0.352206047480627;
    msg.theta = 0.20119267003625207;
    msg.psi = 0.7200674554401207;
    msg.u = 0.5631901020388992;
    msg.v = 0.6551451212438617;
    msg.w = 0.34834869702441984;
    msg.vx = 0.23212126819744694;
    msg.vy = 0.8227950609088044;
    msg.vz = 0.03712100244715644;
    msg.p = 0.022476401293489157;
    msg.q = 0.7746405034875797;
    msg.r = 0.7157784213626109;
    msg.depth = 0.15589892685064966;
    msg.alt = 0.8873258482664887;

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
    msg.setTimeStamp(0.35607190829818225);
    msg.setSource(62709U);
    msg.setSourceEntity(19U);
    msg.setDestination(49999U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.4754144881154355;
    msg.lon = 0.6616202636649963;
    msg.height = 0.19667318422573676;
    msg.x = 0.9353293674897522;
    msg.y = 0.12256650668892444;
    msg.z = 0.36395016909585154;
    msg.phi = 0.7472147033994859;
    msg.theta = 0.4425468868070912;
    msg.psi = 0.3536634311561916;
    msg.u = 0.7100647953280684;
    msg.v = 0.22236659820022253;
    msg.w = 0.34659668933463605;
    msg.vx = 0.7747714366644989;
    msg.vy = 0.5650937880551176;
    msg.vz = 0.9338543584561099;
    msg.p = 0.43555116781919934;
    msg.q = 0.04915302188458526;
    msg.r = 0.609234495981987;
    msg.depth = 0.6569366565114348;
    msg.alt = 0.1120117801749837;

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
    msg.setTimeStamp(0.8926410296342432);
    msg.setSource(44136U);
    msg.setSourceEntity(189U);
    msg.setDestination(52437U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.4025011449730389;
    msg.lon = 0.15706686820774418;
    msg.height = 0.9676840723342282;
    msg.x = 0.728865945752539;
    msg.y = 0.6366523609400008;
    msg.z = 0.6834109016108266;
    msg.phi = 0.5203455040487484;
    msg.theta = 0.8928684601299964;
    msg.psi = 0.2679812770220531;
    msg.u = 0.27362278843172494;
    msg.v = 0.7833753098149867;
    msg.w = 0.18894973584122188;
    msg.vx = 0.8763667923570776;
    msg.vy = 0.46788303672585607;
    msg.vz = 0.6070595281959174;
    msg.p = 0.8809856341645349;
    msg.q = 0.46673507377370416;
    msg.r = 0.06430114372018747;
    msg.depth = 0.8222596091951719;
    msg.alt = 0.47102857860474945;

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
    msg.setTimeStamp(0.10045874997387039);
    msg.setSource(17607U);
    msg.setSourceEntity(86U);
    msg.setDestination(65039U);
    msg.setDestinationEntity(104U);
    msg.x = 0.15043318901305525;
    msg.y = 0.7502558438018007;
    msg.z = 0.37129163462508574;

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
    msg.setTimeStamp(0.5453062513974511);
    msg.setSource(51767U);
    msg.setSourceEntity(121U);
    msg.setDestination(31849U);
    msg.setDestinationEntity(213U);
    msg.x = 0.07643483875653811;
    msg.y = 0.3915675023998393;
    msg.z = 0.3168161415609866;

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
    msg.setTimeStamp(0.20024311370813752);
    msg.setSource(40257U);
    msg.setSourceEntity(72U);
    msg.setDestination(4665U);
    msg.setDestinationEntity(195U);
    msg.x = 0.5565909804212367;
    msg.y = 0.11675459886214457;
    msg.z = 0.8417454135727916;

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
    msg.setTimeStamp(0.16813585086963978);
    msg.setSource(37591U);
    msg.setSourceEntity(46U);
    msg.setDestination(60496U);
    msg.setDestinationEntity(59U);
    msg.value = 0.34443404209729045;

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
    msg.setTimeStamp(0.7421769469478201);
    msg.setSource(3107U);
    msg.setSourceEntity(17U);
    msg.setDestination(14796U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8300779047849421;

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
    msg.setTimeStamp(0.42398372382371696);
    msg.setSource(36784U);
    msg.setSourceEntity(211U);
    msg.setDestination(44782U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9745831597894931;

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
    msg.setTimeStamp(0.45891866435968853);
    msg.setSource(57803U);
    msg.setSourceEntity(6U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6126139834067156;

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
    msg.setTimeStamp(0.12146591071036117);
    msg.setSource(32720U);
    msg.setSourceEntity(192U);
    msg.setDestination(60413U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7276313288184484;

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
    msg.setTimeStamp(0.2105665408566212);
    msg.setSource(63258U);
    msg.setSourceEntity(170U);
    msg.setDestination(58200U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9742225750512896;

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
    msg.setTimeStamp(0.9829023579776021);
    msg.setSource(46412U);
    msg.setSourceEntity(126U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(28U);
    msg.x = 0.12514327950148807;
    msg.y = 0.343363307583854;
    msg.z = 0.2814789855175186;
    msg.phi = 0.3151670278806832;
    msg.theta = 0.09880473210296381;
    msg.psi = 0.35754002074588465;
    msg.p = 0.6071451768219485;
    msg.q = 0.11573367828802705;
    msg.r = 0.33172324779050166;
    msg.u = 0.7042648397980092;
    msg.v = 0.023658607930207576;
    msg.w = 0.29092419070629283;
    msg.bias_psi = 0.21692644014644957;
    msg.bias_r = 0.08999750191028943;

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
    msg.setTimeStamp(0.9452127695028243);
    msg.setSource(24789U);
    msg.setSourceEntity(242U);
    msg.setDestination(25387U);
    msg.setDestinationEntity(186U);
    msg.x = 0.30936029461347336;
    msg.y = 0.3901082733799872;
    msg.z = 0.6369358061306493;
    msg.phi = 0.5342671938451479;
    msg.theta = 0.14411095076396185;
    msg.psi = 0.503191141797222;
    msg.p = 0.9692100091209561;
    msg.q = 0.4616372681928136;
    msg.r = 0.13558266149435272;
    msg.u = 0.37936957185932974;
    msg.v = 0.34038096677684193;
    msg.w = 0.39626878906718266;
    msg.bias_psi = 0.7671422974613564;
    msg.bias_r = 0.11849311945160668;

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
    msg.setTimeStamp(0.6687295285536843);
    msg.setSource(46421U);
    msg.setSourceEntity(1U);
    msg.setDestination(6707U);
    msg.setDestinationEntity(6U);
    msg.x = 0.947929937900062;
    msg.y = 0.09505127667260904;
    msg.z = 0.2565965763369834;
    msg.phi = 0.9996327104501378;
    msg.theta = 0.855748706250521;
    msg.psi = 0.6686627782016986;
    msg.p = 0.4372776137782073;
    msg.q = 0.43161470942168545;
    msg.r = 0.8754251724188359;
    msg.u = 0.3121961017911904;
    msg.v = 0.2591379660208172;
    msg.w = 0.025167227789463564;
    msg.bias_psi = 0.1777171239841312;
    msg.bias_r = 0.7225922256113535;

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
    msg.setTimeStamp(0.06182722783773753);
    msg.setSource(24649U);
    msg.setSourceEntity(236U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(250U);
    msg.bias_psi = 0.45436038513097565;
    msg.bias_r = 0.10629518384277192;
    msg.cog = 0.543524599702176;
    msg.cyaw = 0.6030649229019817;
    msg.lbl_rej_level = 0.962529956768273;
    msg.gps_rej_level = 0.5254264305507509;
    msg.custom_x = 0.5525633103102242;
    msg.custom_y = 0.4779766315865379;
    msg.custom_z = 0.7682389293247299;

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
    msg.setTimeStamp(0.8275855420249533);
    msg.setSource(33426U);
    msg.setSourceEntity(14U);
    msg.setDestination(17724U);
    msg.setDestinationEntity(148U);
    msg.bias_psi = 0.6903153599447626;
    msg.bias_r = 0.7943438029654881;
    msg.cog = 0.6195277369798442;
    msg.cyaw = 0.7739107804031554;
    msg.lbl_rej_level = 0.41910501413682166;
    msg.gps_rej_level = 0.8878082401475753;
    msg.custom_x = 0.29769581609809215;
    msg.custom_y = 0.31162746696232624;
    msg.custom_z = 0.8646130971832919;

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
    msg.setTimeStamp(0.8790201067160824);
    msg.setSource(35889U);
    msg.setSourceEntity(191U);
    msg.setDestination(64898U);
    msg.setDestinationEntity(48U);
    msg.bias_psi = 0.5787117497390668;
    msg.bias_r = 0.2247466302081118;
    msg.cog = 0.12443120706090782;
    msg.cyaw = 0.09640982542721666;
    msg.lbl_rej_level = 0.5369933011191447;
    msg.gps_rej_level = 0.12683147230618974;
    msg.custom_x = 0.14293090646635465;
    msg.custom_y = 0.4633801812833417;
    msg.custom_z = 0.08900571097145538;

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
    msg.setTimeStamp(0.8891313228963426);
    msg.setSource(64941U);
    msg.setSourceEntity(218U);
    msg.setDestination(21983U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.9179144828007567;
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
    msg.setTimeStamp(0.34720607315851315);
    msg.setSource(13270U);
    msg.setSourceEntity(18U);
    msg.setDestination(41909U);
    msg.setDestinationEntity(232U);
    msg.utc_time = 0.9112081765112249;
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
    msg.setTimeStamp(0.9882404162796404);
    msg.setSource(3003U);
    msg.setSourceEntity(234U);
    msg.setDestination(50863U);
    msg.setDestinationEntity(168U);
    msg.utc_time = 0.15769851193466455;
    msg.reason = 106U;

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
    msg.setTimeStamp(0.5659912305071153);
    msg.setSource(51164U);
    msg.setSourceEntity(146U);
    msg.setDestination(53589U);
    msg.setDestinationEntity(212U);
    msg.id = 98U;
    msg.range = 0.7674081647545309;
    msg.acceptance = 98U;

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
    msg.setTimeStamp(0.44210429524051265);
    msg.setSource(36921U);
    msg.setSourceEntity(39U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(247U);
    msg.id = 42U;
    msg.range = 0.3028621178212425;
    msg.acceptance = 65U;

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
    msg.setTimeStamp(0.10128908535538994);
    msg.setSource(54681U);
    msg.setSourceEntity(189U);
    msg.setDestination(9252U);
    msg.setDestinationEntity(147U);
    msg.id = 151U;
    msg.range = 0.4438835360840997;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.42178836617894955);
    msg.setSource(23384U);
    msg.setSourceEntity(165U);
    msg.setDestination(42803U);
    msg.setDestinationEntity(27U);
    msg.type = 9U;
    msg.reason = 172U;
    msg.value = 0.1868771694178567;
    msg.timestep = 0.8809651349794523;

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
    msg.setTimeStamp(0.0779344186575689);
    msg.setSource(30078U);
    msg.setSourceEntity(232U);
    msg.setDestination(42887U);
    msg.setDestinationEntity(159U);
    msg.type = 48U;
    msg.reason = 166U;
    msg.value = 0.8066602682289452;
    msg.timestep = 0.0160175107842212;

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
    msg.setTimeStamp(0.42789368348833345);
    msg.setSource(39671U);
    msg.setSourceEntity(84U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(140U);
    msg.type = 129U;
    msg.reason = 173U;
    msg.value = 0.4681614165246506;
    msg.timestep = 0.35972551041145906;

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
    msg.setTimeStamp(0.457660552231521);
    msg.setSource(57204U);
    msg.setSourceEntity(124U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(236U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("THFQXLWNIGCBXIJJBTEJELVUCDGRWGUVGHTHCLPROAKZWQSPZSUVKKNWSCMUSOHXNYEHDYLDFKCVIPAICLNBOAXLJTOIFSJYDOYKOBUZEMSTHFYVIVOPSQHOBNTRAVKAGXEAUATLBGYQRPLKMRUQMWDCZGXRNPFMRRLIMXTCDVE");
    tmp_msg_0.lat = 0.4688644582632321;
    tmp_msg_0.lon = 0.6048341660167765;
    tmp_msg_0.depth = 0.5825804140337538;
    tmp_msg_0.query_channel = 93U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 82U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.07633507656855698;
    msg.y = 0.3051312751711137;
    msg.var_x = 0.51487504010405;
    msg.var_y = 0.692630538087328;
    msg.distance = 0.5528162837860234;

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
    msg.setTimeStamp(0.0761090180040549);
    msg.setSource(37733U);
    msg.setSourceEntity(87U);
    msg.setDestination(6348U);
    msg.setDestinationEntity(61U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EANUSDDOUSZPMYDMGQJIGGKPBJSDKKNTGKOQWLEZXHZSYQXFJGXAXKCBFHXAGUIRYJYIVWYWCVVTPOVIHJYQMTXPYUFVKJTOAEIGKQUKCVNTWYSWZIXFERBHPBJDFAFNMREOFJIBWGSRUMJXHVFTPRATGAUCLEYKAEMLSBMEBPKWREROMHVQLFZFPBGVDCNDDWNTLBOWLNLLZNPOO");
    tmp_msg_0.lat = 0.14016793050285614;
    tmp_msg_0.lon = 0.26387606466578173;
    tmp_msg_0.depth = 0.19237743166013677;
    tmp_msg_0.query_channel = 19U;
    tmp_msg_0.reply_channel = 7U;
    tmp_msg_0.transponder_delay = 65U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2862868207107859;
    msg.y = 0.9544231406822047;
    msg.var_x = 0.7949017430511942;
    msg.var_y = 0.781112702232518;
    msg.distance = 0.3228687851557539;

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
    msg.setTimeStamp(0.16318900849593565);
    msg.setSource(45831U);
    msg.setSourceEntity(154U);
    msg.setDestination(54196U);
    msg.setDestinationEntity(16U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CPWZQJHQXSVRBVWZBWUTAOWLHZBBPLZJYMQFXOPTFLBDIMAINXQGCYUOGUUHIOUETNZUSDUTBKFNUPTGRORARRTWFNFETPVMIHMOIZNCPZCWITVNVQXOMSPRAJUYMNXRQWYYPSLDRCSG");
    tmp_msg_0.lat = 0.020272731366837715;
    tmp_msg_0.lon = 0.5085651372029163;
    tmp_msg_0.depth = 0.6392539624392081;
    tmp_msg_0.query_channel = 66U;
    tmp_msg_0.reply_channel = 236U;
    tmp_msg_0.transponder_delay = 115U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3538242046640705;
    msg.y = 0.5679244723403947;
    msg.var_x = 0.8946177632590714;
    msg.var_y = 0.34668241405420674;
    msg.distance = 0.6306890164094835;

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
    msg.setTimeStamp(0.23751907966715347);
    msg.setSource(23430U);
    msg.setSourceEntity(248U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(204U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.7469043901166107);
    msg.setSource(3195U);
    msg.setSourceEntity(46U);
    msg.setDestination(48133U);
    msg.setDestinationEntity(124U);
    msg.state = 123U;

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
    msg.setTimeStamp(0.04709630390746844);
    msg.setSource(25696U);
    msg.setSourceEntity(112U);
    msg.setDestination(58342U);
    msg.setDestinationEntity(148U);
    msg.state = 61U;

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
    msg.setTimeStamp(0.7887379548711195);
    msg.setSource(22683U);
    msg.setSourceEntity(242U);
    msg.setDestination(19447U);
    msg.setDestinationEntity(111U);
    msg.x = 0.1772535724923875;
    msg.y = 0.7949114014109672;
    msg.z = 0.4812173703233601;

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
    msg.setTimeStamp(0.9813735846115886);
    msg.setSource(40665U);
    msg.setSourceEntity(176U);
    msg.setDestination(52479U);
    msg.setDestinationEntity(57U);
    msg.x = 0.6393170956731318;
    msg.y = 0.038825847832390625;
    msg.z = 0.3525796474086187;

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
    msg.setTimeStamp(0.16235285762783191);
    msg.setSource(25360U);
    msg.setSourceEntity(244U);
    msg.setDestination(54146U);
    msg.setDestinationEntity(188U);
    msg.x = 0.008871834166116366;
    msg.y = 0.27985531046202494;
    msg.z = 0.545587597867665;

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
    msg.setTimeStamp(0.6657542287081778);
    msg.setSource(44335U);
    msg.setSourceEntity(16U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(114U);
    msg.va = 0.1775013506982338;
    msg.aoa = 0.4385974742605213;
    msg.ssa = 0.9932499737368985;

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
    msg.setTimeStamp(0.8183168547379209);
    msg.setSource(40325U);
    msg.setSourceEntity(217U);
    msg.setDestination(11357U);
    msg.setDestinationEntity(32U);
    msg.va = 0.7549180532163832;
    msg.aoa = 0.2006268338464482;
    msg.ssa = 0.960032022596645;

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
    msg.setTimeStamp(0.12092851997801157);
    msg.setSource(51656U);
    msg.setSourceEntity(224U);
    msg.setDestination(37936U);
    msg.setDestinationEntity(123U);
    msg.va = 0.5077195628430496;
    msg.aoa = 0.25420139281082776;
    msg.ssa = 0.4515808780229862;

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
    msg.setTimeStamp(0.39509317725258075);
    msg.setSource(11582U);
    msg.setSourceEntity(39U);
    msg.setDestination(33765U);
    msg.setDestinationEntity(245U);
    msg.value = 0.014394468015277773;

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
    msg.setTimeStamp(0.7744460957371557);
    msg.setSource(17305U);
    msg.setSourceEntity(37U);
    msg.setDestination(5590U);
    msg.setDestinationEntity(10U);
    msg.value = 0.050991702972948305;

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
    msg.setTimeStamp(0.7582976064771915);
    msg.setSource(56319U);
    msg.setSourceEntity(16U);
    msg.setDestination(6160U);
    msg.setDestinationEntity(60U);
    msg.value = 0.7242387255127356;

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
    msg.setTimeStamp(0.17082678250067496);
    msg.setSource(2255U);
    msg.setSourceEntity(69U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(64U);
    msg.value = 0.6666027658418995;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.22319806155299715);
    msg.setSource(23039U);
    msg.setSourceEntity(157U);
    msg.setDestination(9203U);
    msg.setDestinationEntity(221U);
    msg.value = 0.7348594983657987;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.7110923250595775);
    msg.setSource(56253U);
    msg.setSourceEntity(203U);
    msg.setDestination(59235U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6721275457577435;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.517879450712405);
    msg.setSource(10006U);
    msg.setSourceEntity(25U);
    msg.setDestination(10108U);
    msg.setDestinationEntity(151U);
    msg.value = 0.9739447777975845;
    msg.speed_units = 16U;

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
    msg.setTimeStamp(0.8685451363432171);
    msg.setSource(28816U);
    msg.setSourceEntity(14U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8001154961994319;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.7064305264625567);
    msg.setSource(11743U);
    msg.setSourceEntity(188U);
    msg.setDestination(13803U);
    msg.setDestinationEntity(160U);
    msg.value = 0.10812753213872073;
    msg.speed_units = 207U;

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
    msg.setTimeStamp(0.632324564310387);
    msg.setSource(60725U);
    msg.setSourceEntity(45U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(57U);
    msg.value = 0.16976965394271903;

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
    msg.setTimeStamp(0.3032574492936905);
    msg.setSource(13145U);
    msg.setSourceEntity(22U);
    msg.setDestination(2531U);
    msg.setDestinationEntity(111U);
    msg.value = 0.2876192788948323;

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
    msg.setTimeStamp(0.67453022246943);
    msg.setSource(51417U);
    msg.setSourceEntity(15U);
    msg.setDestination(1095U);
    msg.setDestinationEntity(124U);
    msg.value = 0.48052247538551396;

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
    msg.setTimeStamp(0.2185824239799561);
    msg.setSource(24591U);
    msg.setSourceEntity(241U);
    msg.setDestination(40572U);
    msg.setDestinationEntity(174U);
    msg.value = 0.42178024637809897;

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
    msg.setTimeStamp(0.6053138589583297);
    msg.setSource(8928U);
    msg.setSourceEntity(149U);
    msg.setDestination(64007U);
    msg.setDestinationEntity(110U);
    msg.value = 0.1887259754808791;

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
    msg.setTimeStamp(0.9886572114526558);
    msg.setSource(16882U);
    msg.setSourceEntity(167U);
    msg.setDestination(44589U);
    msg.setDestinationEntity(132U);
    msg.value = 0.6660498574232739;

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
    msg.setTimeStamp(0.3445406080190301);
    msg.setSource(40058U);
    msg.setSourceEntity(154U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(51U);
    msg.value = 0.8829677589274318;

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
    msg.setTimeStamp(0.10605601079251337);
    msg.setSource(5855U);
    msg.setSourceEntity(196U);
    msg.setDestination(21563U);
    msg.setDestinationEntity(241U);
    msg.value = 0.48767184917444417;

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
    msg.setTimeStamp(0.9691550014258075);
    msg.setSource(44988U);
    msg.setSourceEntity(32U);
    msg.setDestination(32492U);
    msg.setDestinationEntity(213U);
    msg.value = 0.10210265157241694;

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
    msg.setTimeStamp(0.3049110472949078);
    msg.setSource(377U);
    msg.setSourceEntity(129U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 629606591U;
    msg.start_lat = 0.6179754435419544;
    msg.start_lon = 0.9582355199540666;
    msg.start_z = 0.1514835826684091;
    msg.start_z_units = 201U;
    msg.end_lat = 0.6912847827491201;
    msg.end_lon = 0.7947026932489597;
    msg.end_z = 0.4309967221519033;
    msg.end_z_units = 180U;
    msg.speed = 0.6763550562386748;
    msg.speed_units = 182U;
    msg.lradius = 0.43506226975209283;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.20606093046996388);
    msg.setSource(53425U);
    msg.setSourceEntity(140U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 2804647421U;
    msg.start_lat = 0.36205776174704096;
    msg.start_lon = 0.9794620143506501;
    msg.start_z = 0.9224397703761719;
    msg.start_z_units = 15U;
    msg.end_lat = 0.2287270938966911;
    msg.end_lon = 0.7324721654065721;
    msg.end_z = 0.08185560454565366;
    msg.end_z_units = 149U;
    msg.speed = 0.5803155682062968;
    msg.speed_units = 62U;
    msg.lradius = 0.9883777536822933;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.2843851259678135);
    msg.setSource(35350U);
    msg.setSourceEntity(92U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(9U);
    msg.path_ref = 582016973U;
    msg.start_lat = 0.30739603328079124;
    msg.start_lon = 0.09551336843839242;
    msg.start_z = 0.16293457520584564;
    msg.start_z_units = 194U;
    msg.end_lat = 0.3708880044835764;
    msg.end_lon = 0.1943727877989515;
    msg.end_z = 0.046498903699334404;
    msg.end_z_units = 73U;
    msg.speed = 0.20141533841826376;
    msg.speed_units = 239U;
    msg.lradius = 0.5833505453546688;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.3348764454321488);
    msg.setSource(180U);
    msg.setSourceEntity(108U);
    msg.setDestination(51101U);
    msg.setDestinationEntity(59U);
    msg.x = 0.525977304382965;
    msg.y = 0.1015944210955958;
    msg.z = 0.8436798004871224;
    msg.k = 0.06071862597885902;
    msg.m = 0.32445172269698863;
    msg.n = 0.27168148200190667;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.5326557612307685);
    msg.setSource(62179U);
    msg.setSourceEntity(124U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(25U);
    msg.x = 0.5179896948269989;
    msg.y = 0.6811651389767285;
    msg.z = 0.35949302944823625;
    msg.k = 0.9137862751993998;
    msg.m = 0.45814872268841156;
    msg.n = 0.4322651866363427;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.3360115488002454);
    msg.setSource(19946U);
    msg.setSourceEntity(188U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(254U);
    msg.x = 0.2849247605371583;
    msg.y = 0.7156014773771527;
    msg.z = 0.7903175409517325;
    msg.k = 0.6472634243423872;
    msg.m = 0.44419016653213095;
    msg.n = 0.23864681612825112;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.6020625055654526);
    msg.setSource(4247U);
    msg.setSourceEntity(157U);
    msg.setDestination(7524U);
    msg.setDestinationEntity(218U);
    msg.value = 0.23725496984510286;

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
    msg.setTimeStamp(0.326741365698182);
    msg.setSource(35380U);
    msg.setSourceEntity(177U);
    msg.setDestination(23186U);
    msg.setDestinationEntity(140U);
    msg.value = 0.19298158497223505;

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
    msg.setTimeStamp(0.4652370657602434);
    msg.setSource(41219U);
    msg.setSourceEntity(216U);
    msg.setDestination(44131U);
    msg.setDestinationEntity(241U);
    msg.value = 0.07674588873049482;

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
    msg.setTimeStamp(0.07912059228836166);
    msg.setSource(24361U);
    msg.setSourceEntity(211U);
    msg.setDestination(56201U);
    msg.setDestinationEntity(211U);
    msg.u = 0.3776856471666338;
    msg.v = 0.6776852582524396;
    msg.w = 0.38978836633991;
    msg.p = 0.7229466868029792;
    msg.q = 0.2518494207549007;
    msg.r = 0.4551672433566417;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.04195782546663018);
    msg.setSource(17653U);
    msg.setSourceEntity(133U);
    msg.setDestination(38987U);
    msg.setDestinationEntity(56U);
    msg.u = 0.07914436226142985;
    msg.v = 0.1434898695221889;
    msg.w = 0.591334378523345;
    msg.p = 0.12686198521093817;
    msg.q = 0.9620770262391922;
    msg.r = 0.20621855956391244;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.21089399916585283);
    msg.setSource(37711U);
    msg.setSourceEntity(208U);
    msg.setDestination(38076U);
    msg.setDestinationEntity(142U);
    msg.u = 0.11985132702743428;
    msg.v = 0.18619870998991384;
    msg.w = 0.45066554462717956;
    msg.p = 0.23922783666488856;
    msg.q = 0.9587848914204327;
    msg.r = 0.4301590011172812;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.07571504931865725);
    msg.setSource(48464U);
    msg.setSourceEntity(183U);
    msg.setDestination(64585U);
    msg.setDestinationEntity(47U);
    msg.path_ref = 2007797704U;
    msg.start_lat = 0.15034467709800636;
    msg.start_lon = 0.0012658899003252788;
    msg.start_z = 0.10045198779534414;
    msg.start_z_units = 220U;
    msg.end_lat = 0.9851546453460834;
    msg.end_lon = 0.8758102765353651;
    msg.end_z = 0.7247812648650382;
    msg.end_z_units = 250U;
    msg.lradius = 0.08278292592310166;
    msg.flags = 44U;
    msg.x = 0.5630754437471908;
    msg.y = 0.2675967649553286;
    msg.z = 0.11183485589993192;
    msg.vx = 0.6352827656905143;
    msg.vy = 0.2538231909563059;
    msg.vz = 0.12415420310847747;
    msg.course_error = 0.1870790598964872;
    msg.eta = 30018U;

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
    msg.setTimeStamp(0.30505950346086563);
    msg.setSource(56138U);
    msg.setSourceEntity(20U);
    msg.setDestination(47772U);
    msg.setDestinationEntity(45U);
    msg.path_ref = 298144405U;
    msg.start_lat = 0.44834826110850545;
    msg.start_lon = 0.2019514939940369;
    msg.start_z = 0.16548235751645057;
    msg.start_z_units = 203U;
    msg.end_lat = 0.07002142889792817;
    msg.end_lon = 0.29232945318234715;
    msg.end_z = 0.33746638207628377;
    msg.end_z_units = 228U;
    msg.lradius = 0.5616918779756644;
    msg.flags = 4U;
    msg.x = 0.5828158412799032;
    msg.y = 0.2823415030833327;
    msg.z = 0.33938669357623774;
    msg.vx = 0.9477494490031678;
    msg.vy = 0.2600688114857935;
    msg.vz = 0.5404921619102411;
    msg.course_error = 0.9894846825559472;
    msg.eta = 33945U;

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
    msg.setTimeStamp(0.9233625023997581);
    msg.setSource(21345U);
    msg.setSourceEntity(217U);
    msg.setDestination(51685U);
    msg.setDestinationEntity(68U);
    msg.path_ref = 1488679077U;
    msg.start_lat = 0.14656966866808518;
    msg.start_lon = 0.5416238975295936;
    msg.start_z = 0.7951301119596231;
    msg.start_z_units = 125U;
    msg.end_lat = 0.48186723504560836;
    msg.end_lon = 0.2148920171321833;
    msg.end_z = 0.2594412501903386;
    msg.end_z_units = 124U;
    msg.lradius = 0.5033060379619579;
    msg.flags = 54U;
    msg.x = 0.3198133808988206;
    msg.y = 0.9300238276181914;
    msg.z = 0.8238046905890196;
    msg.vx = 0.35320343324618664;
    msg.vy = 0.7520479562955061;
    msg.vz = 0.07478608480301319;
    msg.course_error = 0.6514408523116793;
    msg.eta = 8396U;

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
    msg.setTimeStamp(0.5046996920976364);
    msg.setSource(51052U);
    msg.setSourceEntity(124U);
    msg.setDestination(54134U);
    msg.setDestinationEntity(47U);
    msg.k = 0.23503804838931253;
    msg.m = 0.05274544914232715;
    msg.n = 0.06829995018951895;

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
    msg.setTimeStamp(0.31632422710441677);
    msg.setSource(8821U);
    msg.setSourceEntity(5U);
    msg.setDestination(10821U);
    msg.setDestinationEntity(253U);
    msg.k = 0.09366890030178066;
    msg.m = 0.5588715132217434;
    msg.n = 0.4500411910653169;

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
    msg.setTimeStamp(0.37944319820794703);
    msg.setSource(44213U);
    msg.setSourceEntity(151U);
    msg.setDestination(26225U);
    msg.setDestinationEntity(62U);
    msg.k = 0.7910960105311289;
    msg.m = 0.6959653350964604;
    msg.n = 0.6192579923867326;

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
    msg.setTimeStamp(0.629445935659033);
    msg.setSource(40413U);
    msg.setSourceEntity(139U);
    msg.setDestination(41410U);
    msg.setDestinationEntity(182U);
    msg.p = 0.009654160813215351;
    msg.i = 0.47539755397473704;
    msg.d = 0.3236071989395891;
    msg.a = 0.40284326282910166;

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
    msg.setTimeStamp(0.8455989071305702);
    msg.setSource(30119U);
    msg.setSourceEntity(151U);
    msg.setDestination(37306U);
    msg.setDestinationEntity(211U);
    msg.p = 0.588770515191023;
    msg.i = 0.2488518556334678;
    msg.d = 0.7440220158526953;
    msg.a = 0.2683198568207057;

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
    msg.setTimeStamp(0.6916251736107412);
    msg.setSource(27629U);
    msg.setSourceEntity(16U);
    msg.setDestination(11081U);
    msg.setDestinationEntity(70U);
    msg.p = 0.6381510920234601;
    msg.i = 0.5473937083396713;
    msg.d = 0.40109264856603144;
    msg.a = 0.04891293323310364;

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
    msg.setTimeStamp(0.14390305525918967);
    msg.setSource(52871U);
    msg.setSourceEntity(36U);
    msg.setDestination(56974U);
    msg.setDestinationEntity(96U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.34172702612088823);
    msg.setSource(6490U);
    msg.setSourceEntity(107U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(171U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.755924345561201);
    msg.setSource(58110U);
    msg.setSourceEntity(170U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(247U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.8454192221547481);
    msg.setSource(46195U);
    msg.setSourceEntity(57U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(126U);
    msg.x = 0.25837241887465356;
    msg.y = 0.8926289255076231;
    msg.z = 0.5602353058065898;
    msg.vx = 0.8928308738054057;
    msg.vy = 0.37871346120960003;
    msg.vz = 0.33085711255043704;
    msg.ax = 0.5606079549656094;
    msg.ay = 0.8764543433347015;
    msg.az = 0.3114240933441058;
    msg.flags = 24079U;

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
    msg.setTimeStamp(0.13773588786927748);
    msg.setSource(62270U);
    msg.setSourceEntity(114U);
    msg.setDestination(17422U);
    msg.setDestinationEntity(26U);
    msg.x = 0.9373493822696494;
    msg.y = 0.3005558953287;
    msg.z = 0.6557373490798005;
    msg.vx = 0.22017613020082705;
    msg.vy = 0.940893085556914;
    msg.vz = 0.33673584604033535;
    msg.ax = 0.6621458621077351;
    msg.ay = 0.5147750266891398;
    msg.az = 0.16289003651014566;
    msg.flags = 22322U;

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
    msg.setTimeStamp(0.4854286020075479);
    msg.setSource(32591U);
    msg.setSourceEntity(16U);
    msg.setDestination(46560U);
    msg.setDestinationEntity(174U);
    msg.x = 0.9487945488949913;
    msg.y = 0.8635398128535992;
    msg.z = 0.6272145209243412;
    msg.vx = 0.6570161259799012;
    msg.vy = 0.048903590830308596;
    msg.vz = 0.5716566838696243;
    msg.ax = 0.48111514070659656;
    msg.ay = 0.18759591792237496;
    msg.az = 0.9556283344082958;
    msg.flags = 41496U;

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
    msg.setTimeStamp(0.8309277444353939);
    msg.setSource(56171U);
    msg.setSourceEntity(82U);
    msg.setDestination(28994U);
    msg.setDestinationEntity(171U);
    msg.value = 0.3206849812634446;

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
    msg.setTimeStamp(0.2192462135603258);
    msg.setSource(8476U);
    msg.setSourceEntity(219U);
    msg.setDestination(35732U);
    msg.setDestinationEntity(204U);
    msg.value = 0.16399643691634436;

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
    msg.setTimeStamp(0.04660714324653448);
    msg.setSource(22067U);
    msg.setSourceEntity(8U);
    msg.setDestination(49229U);
    msg.setDestinationEntity(51U);
    msg.value = 0.36001520583111457;

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
    msg.setTimeStamp(0.7067115634647072);
    msg.setSource(951U);
    msg.setSourceEntity(214U);
    msg.setDestination(41803U);
    msg.setDestinationEntity(55U);
    msg.timeout = 5654U;
    msg.lat = 0.1676213566793998;
    msg.lon = 0.7710817182167905;
    msg.z = 0.5866065245319974;
    msg.z_units = 72U;
    msg.speed = 0.9359554185254373;
    msg.speed_units = 23U;
    msg.roll = 0.4809000610026761;
    msg.pitch = 0.6539318051459646;
    msg.yaw = 0.47459555322964053;
    msg.custom.assign("WKIDKWOVWLHHFRLYMNDNOICPYUVYIGQGWZXKJEPJNJTKSWWREABBCZDRGIRJTSZCBWPRMECOAGCVOUERKLHVRFTNGQIABMGTB");

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
    msg.setTimeStamp(0.41581332111918856);
    msg.setSource(4110U);
    msg.setSourceEntity(181U);
    msg.setDestination(36291U);
    msg.setDestinationEntity(161U);
    msg.timeout = 8246U;
    msg.lat = 0.4725294443196211;
    msg.lon = 0.19210015474590258;
    msg.z = 0.709399278169908;
    msg.z_units = 235U;
    msg.speed = 0.32354173068502534;
    msg.speed_units = 164U;
    msg.roll = 0.46711043836981525;
    msg.pitch = 0.6727124342370284;
    msg.yaw = 0.13185208204458243;
    msg.custom.assign("LAPHRYSVOUQJDPXWSBDUBCVIZQNSJSDUAFBITEPOIJNLWUXJXGGGEORLFEDMVXEWLSWQB");

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
    msg.setTimeStamp(0.04491616282222777);
    msg.setSource(51911U);
    msg.setSourceEntity(58U);
    msg.setDestination(37907U);
    msg.setDestinationEntity(201U);
    msg.timeout = 60379U;
    msg.lat = 0.8616877095859352;
    msg.lon = 0.5800375401173699;
    msg.z = 0.24672668009933685;
    msg.z_units = 110U;
    msg.speed = 0.5248150570614698;
    msg.speed_units = 149U;
    msg.roll = 0.1142209702814192;
    msg.pitch = 0.6856829361366721;
    msg.yaw = 0.9765021237458549;
    msg.custom.assign("NDMWVLXUEQEGAGWIMUSKUUMZNRQROEMJZZINZYRJRSUWGRMAX");

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
    msg.setTimeStamp(0.459435153774168);
    msg.setSource(54289U);
    msg.setSourceEntity(139U);
    msg.setDestination(61326U);
    msg.setDestinationEntity(82U);
    msg.timeout = 43361U;
    msg.lat = 0.838821148568358;
    msg.lon = 0.29679327035906466;
    msg.z = 0.9720478579885404;
    msg.z_units = 238U;
    msg.speed = 0.11683487461246889;
    msg.speed_units = 241U;
    msg.duration = 54833U;
    msg.radius = 0.8992928830190338;
    msg.flags = 91U;
    msg.custom.assign("HGKFSGLVRJCWCODVWLHMJBCYOFNDVAXBVFZJJRMAYSBIDTFIHWKOPIUBDTSTXCTCXODLTHYOSORVBLGFWMRDIEOZGPQHGTBJGSJEOMWMPHZLBAFKLFDTQRHZMOEKYIERXGHGKLEXCKPEAQSJSFUOQZNJUEALNWXADSRHJWAILAZNXQMYQVRIQNCZXPZNPBULGUZNZQF");

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
    msg.setTimeStamp(0.9264106744949611);
    msg.setSource(11915U);
    msg.setSourceEntity(177U);
    msg.setDestination(28663U);
    msg.setDestinationEntity(49U);
    msg.timeout = 45139U;
    msg.lat = 0.5526918886602746;
    msg.lon = 0.7537782482261082;
    msg.z = 0.8467805183381902;
    msg.z_units = 128U;
    msg.speed = 0.8462148013801628;
    msg.speed_units = 193U;
    msg.duration = 30752U;
    msg.radius = 0.36380380543646695;
    msg.flags = 91U;
    msg.custom.assign("BYSXKRSJZFWGGXLKCVEXMCYZBWQBPCUKSZRCMHTEIRAVTSMTNWOQLUIFMYTFAQLKHJXWIWDLAWMDNWJHRPMCAXDYNQRAMKQMBOLNOLJVEWAGIHDUUXGVXDDCZOCRNHYVFWTELAGVFTUZLQKEIKEUGCMQQOOHZIUNBSEOJJTBHDATKUZKPGNGNSTXQPDHPPQEOHYFLFJGYNXYOVWZIRCCYBPUBVFIAFRSYMBHDSIBTJFNGLVZSJ");

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
    msg.setTimeStamp(0.21379800875747224);
    msg.setSource(23088U);
    msg.setSourceEntity(12U);
    msg.setDestination(42993U);
    msg.setDestinationEntity(149U);
    msg.timeout = 65306U;
    msg.lat = 0.9856275461587066;
    msg.lon = 0.2543353600829714;
    msg.z = 0.5850106492014376;
    msg.z_units = 215U;
    msg.speed = 0.6013810747392276;
    msg.speed_units = 168U;
    msg.duration = 10354U;
    msg.radius = 0.3887368850022671;
    msg.flags = 75U;
    msg.custom.assign("RZUSCERMHMGKEERZV");

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
    msg.setTimeStamp(0.9081839487891454);
    msg.setSource(50408U);
    msg.setSourceEntity(26U);
    msg.setDestination(26838U);
    msg.setDestinationEntity(162U);
    msg.custom.assign("NOWGBXERVTAFGGOWVXCBCXPVPQITFCIRFSWCBGZRESOYXJRJJBJKOFICWHTSHMJVUQAVDKUIOHYLKTMDPQOVNDUBWA");

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
    msg.setTimeStamp(0.647506755010265);
    msg.setSource(55837U);
    msg.setSourceEntity(189U);
    msg.setDestination(7139U);
    msg.setDestinationEntity(129U);
    msg.custom.assign("ZMFJZXAHFICHWHZTPRMGVMHAQIODXCRDRACOVFVCICXPYTFSQYXKEROHGPENUNNZRDVSGABVXZGZOWZEXUBTZSDADLUHFOIRNPBMUHSVDRICGPPYKOVSPLLSSEIWWLZMWFNYQQAJBOGVEYANWGQTUSOILBOUIZTUQQWJGTJDLMGFUXVTBUPKGDRNSQKKTAYE");

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
    msg.setTimeStamp(0.6733613461529969);
    msg.setSource(12870U);
    msg.setSourceEntity(134U);
    msg.setDestination(33716U);
    msg.setDestinationEntity(133U);
    msg.custom.assign("SNWMAMMBUOKIHMBSTRZYEOOAMTLPDNCXQGOVVZYNGWMOUXSZXVOJVUZBEXZGIPPGGFTCQMDFZPDENWKUCABEROEEYBXFSWHDKRWVRLPBHWZKDCYAILLWMIYSIOZMRJTNRLLJAXQQ");

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
    msg.setTimeStamp(0.5961537418326127);
    msg.setSource(55603U);
    msg.setSourceEntity(136U);
    msg.setDestination(50864U);
    msg.setDestinationEntity(242U);
    msg.timeout = 30084U;
    msg.lat = 0.05394127089487688;
    msg.lon = 0.07334442820317633;
    msg.z = 0.22359336759497928;
    msg.z_units = 216U;
    msg.duration = 40175U;
    msg.speed = 0.7730819893740738;
    msg.speed_units = 166U;
    msg.type = 195U;
    msg.radius = 0.9223624010475915;
    msg.length = 0.7484406334706785;
    msg.bearing = 0.6799806911609246;
    msg.direction = 161U;
    msg.custom.assign("XWENHOARMPTUOABSCVHBZYYINQHSQWJWHXT");

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
    msg.setTimeStamp(0.8765425467907668);
    msg.setSource(37923U);
    msg.setSourceEntity(106U);
    msg.setDestination(37393U);
    msg.setDestinationEntity(147U);
    msg.timeout = 1140U;
    msg.lat = 0.9853045441164745;
    msg.lon = 0.8980178068656159;
    msg.z = 0.3098348402143637;
    msg.z_units = 106U;
    msg.duration = 10888U;
    msg.speed = 0.7682326476056931;
    msg.speed_units = 11U;
    msg.type = 250U;
    msg.radius = 0.2926099752398319;
    msg.length = 0.4880808812699171;
    msg.bearing = 0.11329893925495427;
    msg.direction = 40U;
    msg.custom.assign("BAGLHMOWKJFOFBWMULSVICKJNOGUYGHQGXJEWEUAKTZPQISNOPMSWRVTYSNFGYUILFIMSLKFLKGUTZPYQJYFWTCMBAELBNZRIMUEDBFFADNGHJWRZXFHEBLSXCAZTOYPKDVRTRZQOJRMUXJCNBAMUWSUVVCAEKZXOVEHDKQDXHPWGRFRPJIWBNWDVKVIDCDBLVNPEGSSEAIRYUQEBLIDJIQ");

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
    msg.setTimeStamp(0.9867294216409648);
    msg.setSource(28597U);
    msg.setSourceEntity(167U);
    msg.setDestination(34508U);
    msg.setDestinationEntity(50U);
    msg.timeout = 30084U;
    msg.lat = 0.9680284452057782;
    msg.lon = 0.3497491843510274;
    msg.z = 0.3353656350117876;
    msg.z_units = 19U;
    msg.duration = 5171U;
    msg.speed = 0.6391539821818625;
    msg.speed_units = 25U;
    msg.type = 12U;
    msg.radius = 0.4567391517397059;
    msg.length = 0.1789028259033295;
    msg.bearing = 0.5467451712916918;
    msg.direction = 56U;
    msg.custom.assign("RPQTWWJAAPBSCCNBPWHUKZLKFZJCEEGEKPMYJIGHNIKFCQHBAXXRLVTEVUQHUAXKUEYTBOMHATDVRFAOQOCVVIFYV");

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
    msg.setTimeStamp(0.5991258436745652);
    msg.setSource(14460U);
    msg.setSourceEntity(134U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(33U);
    msg.duration = 39366U;
    msg.custom.assign("RZBYLWETCSBDXMEKSMCZMRQZZIQALVIINBVMIIQWBNGTCGCXLXMFRNDTSDXMFTCQRYOZOHKBEKDJVDWQWKYTJVBGHODARJHAEJANMLNAOPGMLWSDNDUYDVFKEQLCTXLIYEGWUHQHOOYNAZVIBWGSTFFERUGUJSAPYRJHAFYPKPXJEOYFCVLNLZZPAYNQMDPBPUKRSZRHUXUMKULGVOAGWBFCHTPQCQOUEXJONUTZGVRXTPSEBSKHFPIJHCJW");

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
    msg.setTimeStamp(0.9802928325108823);
    msg.setSource(2310U);
    msg.setSourceEntity(39U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(197U);
    msg.duration = 24423U;
    msg.custom.assign("XQZDUBHHBJFATEFRKURIJWJPLDNZAULMXYJDMSCAYJHLPILQLBEOGKETKCDVBXWMPGIASHMVHZIFBFDMEPPFOONITMEIMRTHDGJZATHZWQWAGGKICULMXNNYYOOUWUYGZRJVOYHSCKSEHJNTWNQIYFVTFXJUMQWPZOPAGKF");

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
    msg.setTimeStamp(0.4022204116523991);
    msg.setSource(29826U);
    msg.setSourceEntity(123U);
    msg.setDestination(63459U);
    msg.setDestinationEntity(89U);
    msg.duration = 7287U;
    msg.custom.assign("BTPQKHMOTCTUDMPAJBQVOWGNIJLIOSGKGOYEHKJBJWSXUGLVSEEAQGGWWOLLBYNKTDKHRBZAPAJGCUSNJDFPYEPQLNNMTYCRREB");

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
    msg.setTimeStamp(0.6624719359192449);
    msg.setSource(26017U);
    msg.setSourceEntity(127U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(59U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07482752135594628;
    tmp_msg_0.speed_units = 73U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3576U;
    msg.custom.assign("LMLYHLVVRWLSAGZPOBYKXYKQCGYHBCAJJFQGXMNVDHNDNXWAAHHTFQAQWDOIWXMPYZ");

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
    msg.setTimeStamp(0.028030817019825016);
    msg.setSource(27354U);
    msg.setSourceEntity(59U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(31U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2262089927U;
    tmp_msg_0.start_lat = 0.7991409172241473;
    tmp_msg_0.start_lon = 0.9775517944031076;
    tmp_msg_0.start_z = 0.47487585641591135;
    tmp_msg_0.start_z_units = 206U;
    tmp_msg_0.end_lat = 0.20840572191238382;
    tmp_msg_0.end_lon = 0.45841577614965234;
    tmp_msg_0.end_z = 0.6965383705503608;
    tmp_msg_0.end_z_units = 18U;
    tmp_msg_0.speed = 0.14247723296943693;
    tmp_msg_0.speed_units = 94U;
    tmp_msg_0.lradius = 0.15690683063819255;
    tmp_msg_0.flags = 102U;
    msg.control.set(tmp_msg_0);
    msg.duration = 64785U;
    msg.custom.assign("KXEZKTJQXRKEIOEJY");

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
    msg.setTimeStamp(0.8701301840188911);
    msg.setSource(18098U);
    msg.setSourceEntity(0U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(145U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.3921611828568452;
    msg.control.set(tmp_msg_0);
    msg.duration = 2447U;
    msg.custom.assign("YGBCKHCHGALKVLFDMJPXJXDCYPZIFYECNFUPFAQCFETWQTKBGKLGLUOZDUFZVPMZIQFQIURWBGCYDDBSHSLLBSJFJCYEAMKYRWRUSPXWWOMTXMLVDRXNPBOUHULGEXFBOPSOOZEYOEZVILIZJTGRQASWUNGKIENEDXJKICKWQCYTTDQTBBMZWVTSIVBFNMMIAVVZMGWOYJSHRJAHTXMHURRNAQDWCLHQOJDNNSQVPNAHKYPEAZVETHIPKRR");

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
    msg.setTimeStamp(0.9767138099280073);
    msg.setSource(64111U);
    msg.setSourceEntity(66U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(136U);
    msg.timeout = 42791U;
    msg.lat = 0.700703780390088;
    msg.lon = 0.32045813292284386;
    msg.z = 0.7366960875302863;
    msg.z_units = 37U;
    msg.speed = 0.985197667826027;
    msg.speed_units = 199U;
    msg.bearing = 0.4327949757407946;
    msg.cross_angle = 0.37536937213684207;
    msg.width = 0.14499021264063738;
    msg.length = 0.8894985154683659;
    msg.hstep = 0.5769210673463752;
    msg.coff = 190U;
    msg.alternation = 220U;
    msg.flags = 217U;
    msg.custom.assign("YPTKYTZSJWGINOYDMRKCLUFBNSWHGRWDTBMMXDPRFWOTBUVIWDUXMHOSZJXSPHYJVFPMVWMACYFGHLQAXZHQOUYWCXYTWJAZVBLLGVBCEUERFKVCKEDUPRIIFZHFJKTQVGEZCJPOJCUAKHZTELRMUBCFYNECZPEJTMAFLGMFNNVOURJQ");

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
    msg.setTimeStamp(0.781618169921605);
    msg.setSource(24217U);
    msg.setSourceEntity(251U);
    msg.setDestination(13726U);
    msg.setDestinationEntity(141U);
    msg.timeout = 65524U;
    msg.lat = 0.4667155813914705;
    msg.lon = 0.4422101571874666;
    msg.z = 0.5142156853458036;
    msg.z_units = 129U;
    msg.speed = 0.2584480288615514;
    msg.speed_units = 30U;
    msg.bearing = 0.2725264767167246;
    msg.cross_angle = 0.48930410042071126;
    msg.width = 0.8297171373134624;
    msg.length = 0.7087738978150534;
    msg.hstep = 0.3953565665968811;
    msg.coff = 242U;
    msg.alternation = 126U;
    msg.flags = 53U;
    msg.custom.assign("IZMAELDXAYHMEDLZLMIFTNISOWSJSKRCWARIDKRVHNCKIGMBBAXZZHHVOTZBXGHWVPTNXJQACJWQWOUQUTIXSKGUKPNLQKMWTCEJVSRDOCUHTFYTXAMYKCCDVNYOJVOLHAPBDBVCEE");

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
    msg.setTimeStamp(0.6080276818981774);
    msg.setSource(61540U);
    msg.setSourceEntity(57U);
    msg.setDestination(25864U);
    msg.setDestinationEntity(4U);
    msg.timeout = 23658U;
    msg.lat = 0.27773437935420275;
    msg.lon = 0.3799972345582988;
    msg.z = 0.050415575443973015;
    msg.z_units = 30U;
    msg.speed = 0.4209948111539583;
    msg.speed_units = 184U;
    msg.bearing = 0.22899629039014302;
    msg.cross_angle = 0.4969987852697717;
    msg.width = 0.5198277116682013;
    msg.length = 0.31102121810451233;
    msg.hstep = 0.4961843208913048;
    msg.coff = 0U;
    msg.alternation = 253U;
    msg.flags = 32U;
    msg.custom.assign("COZQOUHDZYQAENHXDQRLMVFRKWBLJFHUEZHDBPRLTLPJYWYQTNVQVQPGIOMKHWFYMMINVEEROCDEBJVEHGAPCIOLEMSYTFQRXURGGYIZPGRADIFVWMNWGVNEJWMOJAKNNCZSXSRGSPUUXOUBADBIKOFBWCHATUYKSTZPCVYUMTNRLNVLXKSCXFAJSCZLDUFPXAFXTKBHKUXVCAFJNGYIEGMWJYBAPDJL");

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
    msg.setTimeStamp(0.16624100582278356);
    msg.setSource(65526U);
    msg.setSourceEntity(28U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(110U);
    msg.timeout = 63677U;
    msg.lat = 0.053704685091704785;
    msg.lon = 0.8284829053317733;
    msg.z = 0.7043351875948334;
    msg.z_units = 136U;
    msg.speed = 0.6460892825099709;
    msg.speed_units = 115U;
    msg.custom.assign("IZGMWRZNHFGKIAQCGHPEHGAYFSSKPFSZTROLVYWQ");

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
    msg.setTimeStamp(0.08000011123462414);
    msg.setSource(26661U);
    msg.setSourceEntity(160U);
    msg.setDestination(61201U);
    msg.setDestinationEntity(92U);
    msg.timeout = 26084U;
    msg.lat = 0.5997425122064636;
    msg.lon = 0.19682872462496226;
    msg.z = 0.7669161654645824;
    msg.z_units = 127U;
    msg.speed = 0.5102161716893833;
    msg.speed_units = 194U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.36064760166958076;
    tmp_msg_0.y = 0.36279656535652904;
    tmp_msg_0.z = 0.004477733690713803;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZKTHNOQBHGPRMXPBOMNQGPIKLRXCGRGDSAQALJQYZOEKNIPNGWRJBFTREDWHIJCZFSAWZLXPMHNJTDYJJVEHIUOMOXDFLEMUDWKSBUQUKSKVTVUQZEYGDAZRTYZMUTGMIDFVKSOZAFNFAFATHRCYZJWVZGOVSBNIPQBQJYXUFYEOPDKWSESLTYCMEWSVIHVCYQHAJXUPGLHKGRVR");

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
    msg.setTimeStamp(0.8987001132537757);
    msg.setSource(43127U);
    msg.setSourceEntity(174U);
    msg.setDestination(33918U);
    msg.setDestinationEntity(27U);
    msg.timeout = 5850U;
    msg.lat = 0.12540890793063408;
    msg.lon = 0.1767077005462706;
    msg.z = 0.6756198917517957;
    msg.z_units = 240U;
    msg.speed = 0.38697568955957173;
    msg.speed_units = 244U;
    msg.custom.assign("IFYPBDCVCEWKBHVBLIAJCWUFWTQZISMWLAPGNNDZFZYJPFQSTRBFJTXPVLBKEOHNVGCOTOKNJWQTEVLAMGMFAJFSGYKULCQCIQGFNZKWWULSMSMOYTI");

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
    msg.setTimeStamp(0.8084421602618477);
    msg.setSource(48820U);
    msg.setSourceEntity(149U);
    msg.setDestination(57716U);
    msg.setDestinationEntity(60U);
    msg.x = 0.7419354620492397;
    msg.y = 0.06799643325893989;
    msg.z = 0.5866311472362566;

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
    msg.setTimeStamp(0.7793178959295919);
    msg.setSource(29523U);
    msg.setSourceEntity(132U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(110U);
    msg.x = 0.18882065558475603;
    msg.y = 0.4175283204920964;
    msg.z = 0.42034845428436785;

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
    msg.setTimeStamp(0.7246725352644375);
    msg.setSource(8729U);
    msg.setSourceEntity(26U);
    msg.setDestination(1111U);
    msg.setDestinationEntity(125U);
    msg.x = 0.4690693651405168;
    msg.y = 0.2492070280362284;
    msg.z = 0.5558221765491337;

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
    msg.setTimeStamp(0.3240790007983352);
    msg.setSource(16193U);
    msg.setSourceEntity(217U);
    msg.setDestination(51056U);
    msg.setDestinationEntity(36U);
    msg.timeout = 43420U;
    msg.lat = 0.12055961589052178;
    msg.lon = 0.4631079033575689;
    msg.z = 0.09252907871889282;
    msg.z_units = 207U;
    msg.amplitude = 0.5171226809125634;
    msg.pitch = 0.02943977530945241;
    msg.speed = 0.734943897832844;
    msg.speed_units = 123U;
    msg.custom.assign("NHIXIEWIFWJCQWBADXMDAMCLDGBANSCTUKLP");

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
    msg.setTimeStamp(0.7470191696564205);
    msg.setSource(35414U);
    msg.setSourceEntity(198U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(250U);
    msg.timeout = 49547U;
    msg.lat = 0.9538643688921162;
    msg.lon = 0.6222856837409193;
    msg.z = 0.8979765346795042;
    msg.z_units = 149U;
    msg.amplitude = 0.3825746661081598;
    msg.pitch = 0.006109147337743037;
    msg.speed = 0.5975105544542555;
    msg.speed_units = 212U;
    msg.custom.assign("LZLORBEMNYWNLMPVFQRWVFPISLJDWOHKWEYOKOETIHDAGGLDVXIVLECGPXCWUEOKBKDCQTBMTJGEXPSHBYAUQMRSAPBSNYQTODXKZUWNVHIBTMVBJITRMPH");

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
    msg.setTimeStamp(0.5893574046465828);
    msg.setSource(11710U);
    msg.setSourceEntity(186U);
    msg.setDestination(63156U);
    msg.setDestinationEntity(207U);
    msg.timeout = 15724U;
    msg.lat = 0.38179376870180926;
    msg.lon = 0.8640418438125895;
    msg.z = 0.9846068860167504;
    msg.z_units = 95U;
    msg.amplitude = 0.9200886197657011;
    msg.pitch = 0.56865277736421;
    msg.speed = 0.5361667638715375;
    msg.speed_units = 122U;
    msg.custom.assign("ZDNQYRZVVHYJOGLFIAUGQMEKMTMKSMCSQESLDUGODYROXSMPPBJWBNREHSWMUBHYISAJOOSHCDACNVVUYJXEOCFVQCBTUIWWBHQZSCYJBGRFAGUAZLCKMWBNZDLNLNPHWTWICXEDKKXHXDJGKBGPRNGYTXNNCEPMRDZFGTIUAIRTHFTAJLIXEUVZWKSJMPZJFBQDVOFHRTVUXAQHCALUEKZLPQWXIRPIXKMNERBOZPGYITOVDLLKAFWQQVFE");

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
    msg.setTimeStamp(0.6444292174883187);
    msg.setSource(45231U);
    msg.setSourceEntity(174U);
    msg.setDestination(37561U);
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
    msg.setTimeStamp(0.445366629361032);
    msg.setSource(26116U);
    msg.setSourceEntity(0U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.28512297276964427);
    msg.setSource(8739U);
    msg.setSourceEntity(216U);
    msg.setDestination(28860U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.4291215358676911);
    msg.setSource(43501U);
    msg.setSourceEntity(198U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.8980890391158216;
    msg.lon = 0.5039387393954227;
    msg.z = 0.4850366600137056;
    msg.z_units = 234U;
    msg.radius = 0.03352697743719135;
    msg.duration = 12616U;
    msg.speed = 0.3074751992325766;
    msg.speed_units = 196U;
    msg.custom.assign("TJCJSKJLGWKDSPVAFXSTSZSXLOZXBEEKGUBYNAZDEKNZDESOHOQGAWRKLURFFNYJCUPGGQOAJRKWDEKASLNIHCYKVUVMVRUXIUZIKCUVSTBZJARPOYBLZOLAPDTXWTIKBGRFWXWPEIVFLZNWRGBRXZHTMYVLMFBHPJPJCGMIQMPEYTNHNSN");

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
    msg.setTimeStamp(0.7283717646153746);
    msg.setSource(31338U);
    msg.setSourceEntity(39U);
    msg.setDestination(250U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.7597392871841929;
    msg.lon = 0.9673735092857576;
    msg.z = 0.4481380175707279;
    msg.z_units = 118U;
    msg.radius = 0.5551617225030644;
    msg.duration = 58757U;
    msg.speed = 0.21907368470125677;
    msg.speed_units = 53U;
    msg.custom.assign("CTDNLLVJTKIHGJQNQSAFIJGITEDRUHUXMGXBZZZEAVMLPZPMAYDSPJDYLAZBZWXPTKYFFSPPFRKBXUWJMCOIKVKUPXRKRCEJZYOVVRCNAHAUFZXSSGZGJKOOMJALQXTUWDXGIOQYTECVHRPWFIGBRTMOSSEWNNCUIDEAWFMLKLNFPCQIOW");

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
    msg.setTimeStamp(0.23081263632557658);
    msg.setSource(2346U);
    msg.setSourceEntity(216U);
    msg.setDestination(55313U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.6282312217514027;
    msg.lon = 0.5091716393152727;
    msg.z = 0.525811625280049;
    msg.z_units = 94U;
    msg.radius = 0.9344413839289254;
    msg.duration = 19670U;
    msg.speed = 0.20758434133062265;
    msg.speed_units = 213U;
    msg.custom.assign("VUCKWFNZEZPRENTBWAZBFHPDMMVILKQCPANVXZTOZRIK");

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
    msg.setTimeStamp(0.9854322545774913);
    msg.setSource(1301U);
    msg.setSourceEntity(47U);
    msg.setDestination(32332U);
    msg.setDestinationEntity(90U);
    msg.timeout = 32037U;
    msg.flags = 26U;
    msg.lat = 0.0456870975459972;
    msg.lon = 0.004814411677160679;
    msg.start_z = 0.45412690967189595;
    msg.start_z_units = 69U;
    msg.end_z = 0.710041450978307;
    msg.end_z_units = 51U;
    msg.radius = 0.5127764186621816;
    msg.speed = 0.7289179355539822;
    msg.speed_units = 35U;
    msg.custom.assign("GNGEWSCEEKDXYAVMMFFYSPYBKILXCRUNDVCOQNKHPRPWIZIVXRFHZTVSOOIJEQQGAUJSHOTPYPXTHWRECQVPTZMNUGIJQTMGYLDPSLWYKFBSJCNHDMNTELDIFPSXIXTPIJFGLGQEWCZAPTRZLKACUIZUYTXHUNMQ");

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
    msg.setTimeStamp(0.41594136104015555);
    msg.setSource(27440U);
    msg.setSourceEntity(197U);
    msg.setDestination(32245U);
    msg.setDestinationEntity(247U);
    msg.timeout = 22353U;
    msg.flags = 64U;
    msg.lat = 0.023147455322094945;
    msg.lon = 0.1834852031992763;
    msg.start_z = 0.7823332352695761;
    msg.start_z_units = 144U;
    msg.end_z = 0.38289685868848156;
    msg.end_z_units = 5U;
    msg.radius = 0.24533244323700476;
    msg.speed = 0.4361978184354208;
    msg.speed_units = 171U;
    msg.custom.assign("RZSCDXBHUDQFVVINHURNMZACZKJLXT");

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
    msg.setTimeStamp(0.07845483459083713);
    msg.setSource(28945U);
    msg.setSourceEntity(204U);
    msg.setDestination(50546U);
    msg.setDestinationEntity(32U);
    msg.timeout = 43257U;
    msg.flags = 138U;
    msg.lat = 0.22463231820883522;
    msg.lon = 0.9200461286709839;
    msg.start_z = 0.1097528966813045;
    msg.start_z_units = 214U;
    msg.end_z = 0.6754533634677673;
    msg.end_z_units = 85U;
    msg.radius = 0.619485262036167;
    msg.speed = 0.489558153096709;
    msg.speed_units = 179U;
    msg.custom.assign("FPTHRSAZBSSFLOBNAJQDPGQEJYYENWXWSBFNCOKOKKOUXJBTYJCPZGIEBERSHJGRDGJAYAFQVUXQUILKWZPTZYBOSOEVRPOTVB");

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
    msg.setTimeStamp(0.30295010685285517);
    msg.setSource(37289U);
    msg.setSourceEntity(194U);
    msg.setDestination(35141U);
    msg.setDestinationEntity(129U);
    msg.timeout = 30811U;
    msg.lat = 0.27383416684519735;
    msg.lon = 0.9242913702059536;
    msg.z = 0.8833490028516905;
    msg.z_units = 121U;
    msg.speed = 0.5005171115280388;
    msg.speed_units = 184U;
    msg.custom.assign("MZZHOVCEOMLYFCFIQXJZTTVMHIQZNUDKALRRCWPRBHSCCEYOMCQVPIDSAUQHZUXXBXLPARKCWJNLHUMDDMIBPPZWNTQLLJLXXSQRKLCZAJYFUPUYDILKJKEBWPYFQYHXQZSIGMXRWIGFZITUMGGFBHVTHADUJAQQVVSADWJRF");

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
    msg.setTimeStamp(0.8344881049238821);
    msg.setSource(53863U);
    msg.setSourceEntity(100U);
    msg.setDestination(24898U);
    msg.setDestinationEntity(244U);
    msg.timeout = 25383U;
    msg.lat = 0.016191555976625693;
    msg.lon = 0.6686170948698569;
    msg.z = 0.10466819709942465;
    msg.z_units = 126U;
    msg.speed = 0.3764050573976314;
    msg.speed_units = 44U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6981325892121147;
    tmp_msg_0.y = 0.06733050529383866;
    tmp_msg_0.z = 0.18685317731961393;
    tmp_msg_0.t = 0.6499649406033604;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AWPHRJKDSXSBGPOAGMZUDQZHOJABXFLYLAMITTQDBWRSYVFJUKVVXKVQMJQWCUSKKWQCNVRGEZZUZHAMWSUBDQLDIROGIIOLGMGBBVUWSVOZXHVHDDCPYMULZNTOFBCDNKPQZVHMFMGFYUEFEFEALAIRSYXTASNNMEP");

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
    msg.setTimeStamp(0.7684637650417184);
    msg.setSource(52726U);
    msg.setSourceEntity(46U);
    msg.setDestination(31767U);
    msg.setDestinationEntity(187U);
    msg.timeout = 32480U;
    msg.lat = 0.2299618072972005;
    msg.lon = 0.8115494020220118;
    msg.z = 0.921695257851007;
    msg.z_units = 131U;
    msg.speed = 0.14857253561995598;
    msg.speed_units = 176U;
    msg.custom.assign("FICEMAYECRTNOPYMUOMAUBNAECOZSFFKMBOJLWPZYAWZBDTIHFZUGYYRXLZPVXNQSDKMYMTXTVSGJZDEHGLMAGIREXSMJP");

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
    msg.setTimeStamp(0.9225774876421021);
    msg.setSource(2367U);
    msg.setSourceEntity(156U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(212U);
    msg.x = 0.12169153016494971;
    msg.y = 0.8770474767087422;
    msg.z = 0.6825694559008547;
    msg.t = 0.005363958724351248;

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
    msg.setTimeStamp(0.9351406953044546);
    msg.setSource(11361U);
    msg.setSourceEntity(140U);
    msg.setDestination(50155U);
    msg.setDestinationEntity(128U);
    msg.x = 0.7840918292312452;
    msg.y = 0.4714631622116142;
    msg.z = 0.7242284697240494;
    msg.t = 0.8308259720878259;

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
    msg.setTimeStamp(0.6115468689820491);
    msg.setSource(33339U);
    msg.setSourceEntity(84U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(254U);
    msg.x = 0.1916790339919462;
    msg.y = 0.7833320606179102;
    msg.z = 0.2644760407504253;
    msg.t = 0.8121283108414417;

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
    msg.setTimeStamp(0.8250755713614363);
    msg.setSource(32738U);
    msg.setSourceEntity(160U);
    msg.setDestination(37978U);
    msg.setDestinationEntity(49U);
    msg.timeout = 23365U;
    msg.name.assign("YFXDTRNPHDFIPKLYWAQRIVSWYNKDVZSWIYCYHJGCCNMDBIOQACPWBMLAAJFTMIFGZAJKMUNHMDZYPXFSJBBDPEPZXETBOQCNRERRIEJAQOVVZMZEWERLUMTVQYQ");
    msg.custom.assign("NWHSWKXCRXIBQTKDXOASJHBAVNLVLNHISSMCYHLVTJEMQBCBQLOROPCUYIMFBBXOUELAECSZPNNLQFVSETZOIBHNPYZJQVHIUSUKPBGRZGCOPOWFXYNYUDANEFQQLYPYPIJJHDJGZH");

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
    msg.setTimeStamp(0.8023379614618952);
    msg.setSource(32986U);
    msg.setSourceEntity(107U);
    msg.setDestination(42588U);
    msg.setDestinationEntity(175U);
    msg.timeout = 26175U;
    msg.name.assign("AURYWVATZSVTKSEVNPYRHOEJZUYTCYSCGKMUOOERWLAXTPHJYQOKDNFFQQYEJXTMXTCJPJGPBFEIUJQEOXDFFIMBKHLRQSCPJBUWUZLGPLRBXYXLKESGIRHDCIHNVLHVWXQCUPDCNZKDMHFMXLWMANNJDZSGINKVJZQPKTNEZVGBAQHIWHIQYTPGCKZFBWNDOBUMADQMSXSAKTBFJEDFYIRZVYBZVS");
    msg.custom.assign("CQSXJTRDMWAGKCZFVAGAEUDKCYVNBMTYBUPWTBXVPLYSAFJQYJSARMQQDOWYVNFHFWMNEHSZVQLQTRXUBIXEADNQKUFNXHVMGPSCOHDGZL");

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
    msg.setTimeStamp(0.09721785531606586);
    msg.setSource(61704U);
    msg.setSourceEntity(84U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(53U);
    msg.timeout = 28256U;
    msg.name.assign("LARZFQMOGITRYKPWQELEEWNPODBIQMFDKWTYBBAMBMPKFXRJZQELFKOVIPVIUCSCUXZDCTTERDDMNUWSUUSLTXYFSBCRTUVMJKBGDIQUAKACTBSZBMDJOXUFSZYRVRFZWHVGCLVJLKSNIWTPXFYJECQZAQCVCUDAXDZAHLOHYPTNPGLJPVGNKTGNLHBMHGONHPCNVSSYJPIRONWIHIQAEAYZJXXMHJWRJHEUONSQ");
    msg.custom.assign("EJHNTLJKGFDQIEJFMHTPQXECYRRIJFFWBUAIPXCEHFVGJBENZSOQVNHYYKMPNVBDSYLBXGTKDDLTHRQOEWOXAZWAPUPKBWABFQEZGLVVUQMMSLUKXSUOYVILAOBPCNMMYFMCNGHYGULKDARJKERGWYDWOPOHTZDRKIBLWZSTCOGNTROTJUQDHSCYWVJMPRZUJVGOXCIPWFKRITNVMNMBXZSSLYCICKHLFIACQXZAZDTFRXVHGPAUUISWBQEZ");

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
    msg.setTimeStamp(0.14477982177133042);
    msg.setSource(8310U);
    msg.setSourceEntity(145U);
    msg.setDestination(3278U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.13852431432804801;
    msg.lon = 0.2025253125720997;
    msg.z = 0.8520869043089124;
    msg.z_units = 128U;
    msg.speed = 0.6284515134218596;
    msg.speed_units = 168U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.930979869879208;
    tmp_msg_0.y = 0.32148182212792653;
    tmp_msg_0.z = 0.5121515276057709;
    tmp_msg_0.t = 0.6085752644154268;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 62894U;
    tmp_msg_1.off_x = 0.544804320495515;
    tmp_msg_1.off_y = 0.2333192519680295;
    tmp_msg_1.off_z = 0.4961180981938903;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7855456682957103;
    msg.custom.assign("AJEZXSCZPUVHODZFPNWGADAMYXEHETRVLEIOPNHOLKAQCYFO");

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
    msg.setTimeStamp(0.6471281208237432);
    msg.setSource(3616U);
    msg.setSourceEntity(193U);
    msg.setDestination(9239U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.12386450981998243;
    msg.lon = 0.6575019686122016;
    msg.z = 0.6312867866683654;
    msg.z_units = 72U;
    msg.speed = 0.5642678737498085;
    msg.speed_units = 163U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7411031429321812;
    tmp_msg_0.y = 0.04271216365605002;
    tmp_msg_0.z = 0.5164654640806715;
    tmp_msg_0.t = 0.5572266848845993;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5388U;
    tmp_msg_1.off_x = 0.9628188514452919;
    tmp_msg_1.off_y = 0.3798550924645061;
    tmp_msg_1.off_z = 0.2017017611707832;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5431408301876082;
    msg.custom.assign("KVQNBTHQYOVETCPKOTBX");

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
    msg.setTimeStamp(0.5374989631335475);
    msg.setSource(31215U);
    msg.setSourceEntity(174U);
    msg.setDestination(36163U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.8591797229278038;
    msg.lon = 0.01695446314245752;
    msg.z = 0.8246925686225957;
    msg.z_units = 227U;
    msg.speed = 0.9801771808685387;
    msg.speed_units = 159U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3050212899260051;
    tmp_msg_0.y = 0.9068883045961288;
    tmp_msg_0.z = 0.09496995746257042;
    tmp_msg_0.t = 0.4489999370151172;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 49548U;
    tmp_msg_1.off_x = 0.9098842641254345;
    tmp_msg_1.off_y = 0.4543790591136275;
    tmp_msg_1.off_z = 0.21540370483856353;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8780267801174553;
    msg.custom.assign("QHETVJBXMUHQYDUTTOQOED");

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
    msg.setTimeStamp(0.792200044815691);
    msg.setSource(64616U);
    msg.setSourceEntity(189U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(8U);
    msg.vid = 6697U;
    msg.off_x = 0.6084390505431176;
    msg.off_y = 0.22281334517900842;
    msg.off_z = 0.6583318508670738;

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
    msg.setTimeStamp(0.16919847895560813);
    msg.setSource(33605U);
    msg.setSourceEntity(251U);
    msg.setDestination(28563U);
    msg.setDestinationEntity(1U);
    msg.vid = 10977U;
    msg.off_x = 0.6703759121494175;
    msg.off_y = 0.00893770218353851;
    msg.off_z = 0.500599031062656;

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
    msg.setTimeStamp(0.34738876588329703);
    msg.setSource(6441U);
    msg.setSourceEntity(6U);
    msg.setDestination(36400U);
    msg.setDestinationEntity(91U);
    msg.vid = 5558U;
    msg.off_x = 0.26127729110999576;
    msg.off_y = 0.8859105367582027;
    msg.off_z = 0.12230420220697402;

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
    msg.setTimeStamp(0.5952551586666055);
    msg.setSource(65444U);
    msg.setSourceEntity(230U);
    msg.setDestination(48929U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.9047673528436673);
    msg.setSource(36048U);
    msg.setSourceEntity(226U);
    msg.setDestination(50894U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.8801261499942707);
    msg.setSource(9278U);
    msg.setSourceEntity(110U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.09578729395156338);
    msg.setSource(26203U);
    msg.setSourceEntity(91U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(120U);
    msg.mid = 4560U;

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
    msg.setTimeStamp(0.5860670118282149);
    msg.setSource(65170U);
    msg.setSourceEntity(254U);
    msg.setDestination(59413U);
    msg.setDestinationEntity(74U);
    msg.mid = 4628U;

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
    msg.setTimeStamp(0.31808993360840676);
    msg.setSource(39712U);
    msg.setSourceEntity(96U);
    msg.setDestination(12969U);
    msg.setDestinationEntity(232U);
    msg.mid = 62514U;

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
    msg.setTimeStamp(0.7608292625511587);
    msg.setSource(64093U);
    msg.setSourceEntity(31U);
    msg.setDestination(36588U);
    msg.setDestinationEntity(85U);
    msg.state = 232U;
    msg.eta = 25382U;
    msg.info.assign("GZNFWHQSNIDYQBVZJNFOPSJEFRXIVHFNZR");

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
    msg.setTimeStamp(0.12152798208843962);
    msg.setSource(33377U);
    msg.setSourceEntity(25U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(229U);
    msg.state = 232U;
    msg.eta = 9827U;
    msg.info.assign("WEVDYIZZIYNUVIGJTJFFHKPIYBORWCJIHQSOXZRKFSNXJQBWJCMYMWIEYXKENZRBCHDBGPLYYNDUBVNMHSRBNVWFLKBDTSMAWCVXNOGMJLAOOYTAVAGKPROTSSZJNYIRDFDAHZMWGXCFYLWUPEKPGWQQHEOPJMSXPUKZKCGRGJQXQDPTTDELGJVHRZEQIUTXRHTOOLCMEACBFDHNAXLQHEUTVMKSIQCABUPSFKZPAVVUIW");

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
    msg.setTimeStamp(0.773965058433843);
    msg.setSource(63410U);
    msg.setSourceEntity(179U);
    msg.setDestination(4805U);
    msg.setDestinationEntity(134U);
    msg.state = 207U;
    msg.eta = 62242U;
    msg.info.assign("DBETUXTRRKKIIYVDTGVHDNZOCGKSSHVFFIIEMBEYKPYKFSIYIZOAHDPKLZPMDTAUCCSOQ");

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
    msg.setTimeStamp(0.4925220676439892);
    msg.setSource(50895U);
    msg.setSourceEntity(183U);
    msg.setDestination(22061U);
    msg.setDestinationEntity(145U);
    msg.system = 26505U;
    msg.duration = 49893U;
    msg.speed = 0.1479203277154184;
    msg.speed_units = 204U;
    msg.x = 0.28190752498196203;
    msg.y = 0.6205557640130395;
    msg.z = 0.4777361048333373;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.2877105895442612);
    msg.setSource(43045U);
    msg.setSourceEntity(143U);
    msg.setDestination(14546U);
    msg.setDestinationEntity(191U);
    msg.system = 30636U;
    msg.duration = 37804U;
    msg.speed = 0.7232475263979036;
    msg.speed_units = 48U;
    msg.x = 0.5937112217885745;
    msg.y = 0.09126826385431452;
    msg.z = 0.34673594432547505;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.9156911115870441);
    msg.setSource(46889U);
    msg.setSourceEntity(121U);
    msg.setDestination(11136U);
    msg.setDestinationEntity(83U);
    msg.system = 38966U;
    msg.duration = 37578U;
    msg.speed = 0.9705244671828832;
    msg.speed_units = 28U;
    msg.x = 0.35751699843185736;
    msg.y = 0.9564895458454213;
    msg.z = 0.2552361383308791;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.5099041633059203);
    msg.setSource(48499U);
    msg.setSourceEntity(100U);
    msg.setDestination(4681U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.28174125902751923;
    msg.lon = 0.03153668949930011;
    msg.speed = 0.30186050185930335;
    msg.speed_units = 167U;
    msg.duration = 62417U;
    msg.sys_a = 2370U;
    msg.sys_b = 48594U;
    msg.move_threshold = 0.5636837450659156;

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
    msg.setTimeStamp(0.94857587967187);
    msg.setSource(34357U);
    msg.setSourceEntity(33U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.823851196891631;
    msg.lon = 0.2059520980191606;
    msg.speed = 0.7962510144363432;
    msg.speed_units = 248U;
    msg.duration = 39282U;
    msg.sys_a = 59081U;
    msg.sys_b = 21647U;
    msg.move_threshold = 0.8775340073026955;

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
    msg.setTimeStamp(0.6773809743990852);
    msg.setSource(47380U);
    msg.setSourceEntity(64U);
    msg.setDestination(7534U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.7687640040714127;
    msg.lon = 0.22406593737395442;
    msg.speed = 0.8641341924644429;
    msg.speed_units = 196U;
    msg.duration = 58198U;
    msg.sys_a = 335U;
    msg.sys_b = 29258U;
    msg.move_threshold = 0.3078574357393298;

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
    msg.setTimeStamp(0.4461112665693767);
    msg.setSource(48417U);
    msg.setSourceEntity(179U);
    msg.setDestination(47609U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.22048134665785946;
    msg.lon = 0.7749846754875026;
    msg.z = 0.6670671922284983;
    msg.z_units = 239U;
    msg.speed = 0.2095108348716096;
    msg.speed_units = 127U;
    msg.custom.assign("QYFXUVKEGFTWMHQEQCIDYNPQMAKDJIEKXEGTXHPMVLCRQNPNBUOLZPVQSCVRRKZSOURLJTWRNCRMBGQZIXHTJLBVVQBWXPOYJJNYWLKALURSEAAGCHBFYQDERNBOKCPCAMWZZDHUKSIXOZSXYHIOLXZGJUTQLAFNGPITHJIFHCROYXBVPGODLWJYUFVWFNNPWPIEFTMWKSHLDEFZHWZTAGFYDDURMEKMOSBCANDTMSZSIDUEXJVIUSBTJGCA");

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
    msg.setTimeStamp(0.9554042035488666);
    msg.setSource(20699U);
    msg.setSourceEntity(240U);
    msg.setDestination(51983U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.45253023412968696;
    msg.lon = 0.1859111775963458;
    msg.z = 0.47755600686065003;
    msg.z_units = 211U;
    msg.speed = 0.6800922025027151;
    msg.speed_units = 40U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7308708274461382;
    tmp_msg_0.lon = 0.4676873577046371;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CBZVAUIMKETOKEUPTAMIPFZMMLNWSXHREOFEJJJLXXFYHGNVOYVFLIUDZTWJZASIFKGPWPUAQYFGOHVVKNQTUVOPXNFUZEHCNZKKSSABJDHFBBNDDNXJUOSLXMWCRRFEBFNQRQGBVRAHCARIGDSLYSGLTZEIXHXMRMCPGAQTDRCMHOCISPYBHJIXGVUW");

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
    msg.setTimeStamp(0.2640569383767398);
    msg.setSource(35279U);
    msg.setSourceEntity(188U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.6148532208961516;
    msg.lon = 0.28570022197763134;
    msg.z = 0.7750896562380033;
    msg.z_units = 241U;
    msg.speed = 0.6448945207705519;
    msg.speed_units = 247U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7023623561017762;
    tmp_msg_0.lon = 0.008364102494866188;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZZOPNLTUKHCFUSQCTMAKIJWZCXYTHJPKEDULUIVKRFTIGSRCSLZWJPOHIZBIWPAQXLAAKIYGNBENRQTZMAQXRHNRDRBBKVXEBXGLHMDVDEERGYVTINGREWYUGQPFBFQFLMNTRASLKZOCBVXKNYXJYWODVHWHEVIGPMHUPKCJUGMJAUWFTJAMLDLEPBSJFEOOGXSTQNCYACWCDEAIJBYUOQV");

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
    msg.setTimeStamp(0.7860048390681954);
    msg.setSource(58293U);
    msg.setSourceEntity(129U);
    msg.setDestination(7039U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.6160234525528585;
    msg.lon = 0.5230771406592039;

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
    msg.setTimeStamp(0.5517780610112994);
    msg.setSource(58856U);
    msg.setSourceEntity(224U);
    msg.setDestination(8214U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.6310847960560138;
    msg.lon = 0.2695482136278774;

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
    msg.setTimeStamp(0.5430932443001627);
    msg.setSource(9397U);
    msg.setSourceEntity(231U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.841802143481646;
    msg.lon = 0.5224676621815902;

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
    msg.setTimeStamp(0.12397833541264636);
    msg.setSource(11871U);
    msg.setSourceEntity(114U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(198U);
    msg.timeout = 4870U;
    msg.lat = 0.10130098810212484;
    msg.lon = 0.6319109036444531;
    msg.z = 0.03133702785697223;
    msg.z_units = 145U;
    msg.pitch = 0.4605629908128662;
    msg.amplitude = 0.5167720711888423;
    msg.duration = 36172U;
    msg.speed = 0.6989366266343887;
    msg.speed_units = 209U;
    msg.radius = 0.5239021620818303;
    msg.direction = 210U;
    msg.custom.assign("AGEVCXANVETSDPJVOLDBRXCBPJRYWHWXGLMKTMPRTZKIGUKIDWIBYRWYNCQSSMCLOURVEHEWTMLXNFVWMHFDBOVLSSFMDOAABNXOSLSMRZDNSFNJYEFYVMPHEFJQQIIPZDIZUMQTHBXKSLWPSQLAUVFUNGLIGOKTNTNZVYDHBKTIEEPBRIQDRYYZCEJZAFZCYMGJQOCOPCHLJIGRNQAUBXJ");

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
    msg.setTimeStamp(0.4338876341148712);
    msg.setSource(8353U);
    msg.setSourceEntity(61U);
    msg.setDestination(21268U);
    msg.setDestinationEntity(124U);
    msg.timeout = 14220U;
    msg.lat = 0.2811948406027004;
    msg.lon = 0.4075184038846831;
    msg.z = 0.8866607136767034;
    msg.z_units = 60U;
    msg.pitch = 0.8810219002841105;
    msg.amplitude = 0.23681536303699235;
    msg.duration = 39109U;
    msg.speed = 0.19351377827138683;
    msg.speed_units = 206U;
    msg.radius = 0.5627201266253469;
    msg.direction = 194U;
    msg.custom.assign("ELUQNNPZBGNQOMITLSUXRDISOYLCCUKTKPVOFPUNXBRMTCJBWIEJVOZAEHGJYUBMMYIMHPDFQVAOAKAHDLLHJOXAUWCZCBEYPEENFJOSRKKFGHVFILNRNXCTBNXGWGGZZTGFJPOMKAAJQYYVUJXUYSXLMRZYDKQRDBTVWKBDIGWPQYDOTCKWLFAEDYTPCSQDNUHGJCL");

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
    msg.setTimeStamp(0.9477722062066317);
    msg.setSource(61015U);
    msg.setSourceEntity(210U);
    msg.setDestination(47211U);
    msg.setDestinationEntity(251U);
    msg.timeout = 19460U;
    msg.lat = 0.6527575693307072;
    msg.lon = 0.43179673602717217;
    msg.z = 0.6275200385712784;
    msg.z_units = 91U;
    msg.pitch = 0.6499293588909411;
    msg.amplitude = 0.8524379145489663;
    msg.duration = 20924U;
    msg.speed = 0.40372900765755293;
    msg.speed_units = 158U;
    msg.radius = 0.7685650910706785;
    msg.direction = 150U;
    msg.custom.assign("ICKQVYYKWWIKZPDNKCPJQXRWAAXVGQMGNPDNMHOXBDMZKAZRJSUJNTCUGCSHKPEHLSRTLBEETFSZFYQQPDRUKBOOAIMUZXXORUEYNHCJYQAHVAYYTJEIWDMMINM");

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
    msg.setTimeStamp(0.7870063994163365);
    msg.setSource(64532U);
    msg.setSourceEntity(99U);
    msg.setDestination(30215U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("MQVXKDEROCSLBIYQAQOUMBP");
    msg.reference_frame = 122U;
    msg.custom.assign("GDBMMVPIWAUSXPDAZREKCWAZMPQMIWYOHQMTESUOPJIVLHBLBKQXLNJTQIURVYACOPDYFLXMTNRCUTIVHOFOKFVVLJEXHOBWGOIBSXNUSMIJWHXNQNZYHRDTJPRATMZSCRAULMSKZXKFWGDWIOLJNFFCJAYVUNFYFEZBGCTZSWSLZKHNRIJZAXVXTTFGEJRMGBXYYCKGYDYJQEFAHLZDQISSV");

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
    msg.setTimeStamp(0.5371424084834784);
    msg.setSource(43081U);
    msg.setSourceEntity(48U);
    msg.setDestination(63339U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("CQAUXZVNSJGOQLJEWEYVSBOMUKLUSZNZPVYGFTNRMPVJQSDHSNLNPPDEEIHWHMOFLHDYTZQRQJBEWVQFGWXXKVOUDKTNWLBLGCGPAAPUHIXHHFDZDJFKURFTHQXAYWXCILRBMCPMHBZTAGIOYENTGJDCCWORQIKOEGSQVVSAZISWRPONKLGJLYTKYQERZSPNBRRMV");
    msg.reference_frame = 32U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40314U;
    tmp_msg_0.off_x = 0.5195648339743382;
    tmp_msg_0.off_y = 0.9732701035012782;
    tmp_msg_0.off_z = 0.5452283723341644;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XDWQEKGJAQXUZMWYSWTVONSUIGEEKDTGMOTXHXPBNRPCLBOBPZDYBOKRJFURQZKTFOGVHHBY");

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
    msg.setTimeStamp(0.19479479335993777);
    msg.setSource(45069U);
    msg.setSourceEntity(145U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("VFPQFWEQOJELZNLOXZSGMLJKSOWPFTTVQNMJJTHYICKAYYWZCKAPYIZHFBAEBNDQMXVVWBIOJMRXZPDXBLIQRZWEIEGSCRAEBSGRZXITHYDQAXAUZFYNYREGCRKOGMXHWJCTDBQNXSUPMULLTNYNE");
    msg.reference_frame = 0U;
    msg.custom.assign("GSIHNBUFAVRGGBVUAWFLPAEYIKPUBZXEFTENRWPUCQBCFGOUXNLHUBQSTLNMEDDFAVOZQLBJVGMEWYXNYEBRVMNKVUVIIIKAFJEMLIWKNNMSZZTTAYDTQUHOQNMSIFJEKRQHFSZKIOJLAVWTYYZCOFNZXPDGZKRJSYXMODDCGHWBDFSI");

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
    msg.setTimeStamp(0.20103591783435504);
    msg.setSource(302U);
    msg.setSourceEntity(126U);
    msg.setDestination(45541U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("VHTHPOUUBWNXNXZGJERPMIWCZVLVUNWZOJZKHUHYVPQBYQXMINDMUKKEAW");
    msg.formation_name.assign("ZRLCUGSXKBKYYJIFRPMERUSMZDJULMLTHJXWBCNFABHSSEPVIBQOAQZMROUNTCQSBERESIVGBKLVJIDQDNCBWWUNARXAAGRHIUXDDVIFJMBAYPIPOPZCKDKUELENOWWWGXTJYNYEOVARICGEWLBSFVFTVYMXJZOTQMQMWIGSWYCPUGTFFKMHJBXXDKYQAHKDORPFHQNTSEEVMNLNDNSPDZORYYGXZOFLTCUHHHQPHTAKQGFOTLVPZUJ");
    msg.plan_id.assign("DSQMNMMNAHMP");
    msg.description.assign("SIXGGOLOBYWGIUPEOZCVLBVKERGGTFBPTQURTLPWUGGVXPXFGRYRCLZCQQJVIRJBQTQAONXAPCMMYEWFWZEFZJKBSOQDKMONETIDIEELJVVHDZSMFSMZNXHVQBJYIWCOOMYPXEDHZLIFZNBDSCKEUSLYMPSKIUJKKNNKUHFJJCTJFABGXXAKBCKDYOWRNDALSCFRTMTMWR");
    msg.leader_speed = 0.23975117621013664;
    msg.leader_bank_lim = 0.8419732672465498;
    msg.pos_sim_err_lim = 0.3836455261333598;
    msg.pos_sim_err_wrn = 0.12108134074030719;
    msg.pos_sim_err_timeout = 28312U;
    msg.converg_max = 0.4814546910093298;
    msg.converg_timeout = 55995U;
    msg.comms_timeout = 37834U;
    msg.turb_lim = 0.5315839503476083;
    msg.custom.assign("KYTZTVFIBTDPKXNWODZFIVFEMPHIKKDZYGIHGXLOSWXHWMFMYRPRMUEQNFKYCFQXCZEQLSQJOQHKZPBMTBDVFGIGBDSPEPSRDLJLXXNQFMPDPYLMHRCVJJLCVXHMRXQDQEYPFJJUBNVWGNNCASHNTAGBACHUSGHKCNSWRDTOOHEZEKVAEX");

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
    msg.setTimeStamp(0.8722859940232913);
    msg.setSource(4478U);
    msg.setSourceEntity(214U);
    msg.setDestination(19407U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("VFUPROBYHNNMHPJJKKXFTSYUBVOTQDLZFFJEEMCPOGYLITZXYOEZILEXEULJHZYSBIGKAZWFIFRUKQRSGJJWPZTVMYXACSBPGAZRASTFQMNCRQQOBVXWRFXWHVXAAGDCKFLVNQQIWMOPPDLCHSBFAKANSSEJJWGQWNDVKNZCVWLHMIDTBMTPYJVGUCECORHKGIQ");
    msg.formation_name.assign("UPNWMUBZPVZKVKZEKTMPAOCGLVWWOLFQXLBJWVPTLDEQGWRUSMVCKEAPHDYDRKXZZPBIQXCREJYPSBQFWMKZGGLXTBCXSGMPLNGJNHCQHZERCUMHNOAXD");
    msg.plan_id.assign("HHEFGAMSTYDOYATSMZAGOOQKNFBJVFJYLCCUBSOYRCUYFWKYTQOVWCZPHEKENOAKRKMYHYFUIOJKIDFKLZXMHLXJIMLRVYIOVDTGNQQJKXOBTVLZNWZEEYZZPDLBDQLASPXWEQVJADBVNHAMOTASUCBNPWPMPIAZCRZICGUQZDNRESUFNE");
    msg.description.assign("QJJCVMUMOEVZKZBWPLRKBULSGVZGXIIBWRFPUGTVSYNAHVCUSKJCEBWSXHMPODQXQRDZBQHCDTJWGDCAPBTIPMMNKNFLIWKAWMUFOIVGMJRQLHHTCZSGYHGASGOGLXSVOBRXAADNHRCYVYGFXFFPLQZSNE");
    msg.leader_speed = 0.31469317497271987;
    msg.leader_bank_lim = 0.5134273973475022;
    msg.pos_sim_err_lim = 0.05445413574868874;
    msg.pos_sim_err_wrn = 0.8104054892457061;
    msg.pos_sim_err_timeout = 16427U;
    msg.converg_max = 0.33449735930968905;
    msg.converg_timeout = 52146U;
    msg.comms_timeout = 11026U;
    msg.turb_lim = 0.09354773023475593;
    msg.custom.assign("PXTJHWGNKQSFRZMPDDJAQSVKYGZLQASAPAFSNJHMACKIXISQHHLGGVCTCBTLVEODERXQMSOCLHMYATWXOQQYAXSMVJWGKPEARLIYRUMEFDNZRBUTXCYLTJASBVQZEEUXGHUMDLKEBOJWDHFFRZWBOQYMWURLBBDWCUHFNMYQUIFWTPGPOKXDPOGURFNDTSXKSTIIZRZFBIUNLRONJJCEHWWLFJJBNGACVTYNZMZKVUBPEIOHCXIVOIP");

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
    msg.setTimeStamp(0.7111634801009843);
    msg.setSource(1478U);
    msg.setSourceEntity(172U);
    msg.setDestination(26022U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("OUZQZSNVJOXIABMSJRUBSDWLNUEGPYWIYEQAMQSRUOPOXVIHKBLWJRHJCDFXSKWNQTRYTGJVABHPY");
    msg.formation_name.assign("JNVYNEBMTHODZNHZZQCYESCFURPIUFPWVFKDNLQIOFWBDGVQVCSUIOUYGYRIPCORIYTGNFDPBAJKLMIEJQQOAMUCKLGCRDDCHTIWTBVXFWAGUQBNOKHNMCWESTHTIGXPSAARMOWWTPZRDASQVYLFNUXJBKLYZVNL");
    msg.plan_id.assign("SLSUKFOYBUMNQBSKYAXUANTDZWYLAMPXDUNIQONANRTJENITXYZOWIQRUPTVYERFFKJFYQLCTCIWELPKFJEWHYOBONMQPWWVSMSIVBVWFQLRZFKZEAGDVPDZXIQCQDPZEMDUYCGTHJDOBISYDRJBUZJITHBTZCPQHNNCCXJXCQMLBXEHHCLUMHDWVVOKXMWRBEEHVTNPWAAGSXGDVRVAMLGSY");
    msg.description.assign("FZLYZKTLWVBTQAUMHIESCGTBFUKVPMJALMJKFXIEGAJXNWDALJWVXZSAHZDBTCPANNHJOKGQQKRDGWYQEFLZLQSPEYQPFBAPI");
    msg.leader_speed = 0.6099367233047318;
    msg.leader_bank_lim = 0.6244434979632218;
    msg.pos_sim_err_lim = 0.9062523376236704;
    msg.pos_sim_err_wrn = 0.5291585696759499;
    msg.pos_sim_err_timeout = 59913U;
    msg.converg_max = 0.463021642980855;
    msg.converg_timeout = 9921U;
    msg.comms_timeout = 19634U;
    msg.turb_lim = 0.44603013420537085;
    msg.custom.assign("XJUSJZUVFCMASQBPWTPZWBHBMVTYESDOQUNITTKKRGMDOXRWNILWXSYVNXPZCWCHRTZUBAJIAEJCQOENK");

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
    msg.setTimeStamp(0.5400136343670373);
    msg.setSource(5608U);
    msg.setSourceEntity(115U);
    msg.setDestination(19084U);
    msg.setDestinationEntity(162U);
    msg.control_src = 55842U;
    msg.control_ent = 173U;
    msg.timeout = 0.2059277398929803;
    msg.loiter_radius = 0.6623918404789145;
    msg.altitude_interval = 0.46035019590859294;

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
    msg.setTimeStamp(0.1790011504291683);
    msg.setSource(60163U);
    msg.setSourceEntity(161U);
    msg.setDestination(54136U);
    msg.setDestinationEntity(154U);
    msg.control_src = 45652U;
    msg.control_ent = 123U;
    msg.timeout = 0.31307059659426584;
    msg.loiter_radius = 0.6788959891737689;
    msg.altitude_interval = 0.41581075551246327;

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
    msg.setTimeStamp(0.9521178227615069);
    msg.setSource(1419U);
    msg.setSourceEntity(210U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(191U);
    msg.control_src = 60321U;
    msg.control_ent = 41U;
    msg.timeout = 0.8642632328083888;
    msg.loiter_radius = 0.6393940871082955;
    msg.altitude_interval = 0.5734807199220774;

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
    msg.setTimeStamp(0.26096658884150525);
    msg.setSource(34687U);
    msg.setSourceEntity(170U);
    msg.setDestination(26816U);
    msg.setDestinationEntity(175U);
    msg.flags = 194U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6267375498427838;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.33190376880070493;
    tmp_msg_1.z_units = 162U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.45675612387852016;
    msg.lon = 0.41944006829147706;
    msg.radius = 0.34902856510128455;

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
    msg.setTimeStamp(0.5792930653666513);
    msg.setSource(2778U);
    msg.setSourceEntity(81U);
    msg.setDestination(8244U);
    msg.setDestinationEntity(124U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07857628234760194;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7474394801768508;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6580654748211402;
    msg.lon = 0.8908695767535;
    msg.radius = 0.8064501693949587;

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
    msg.setTimeStamp(0.5860787982353493);
    msg.setSource(31683U);
    msg.setSourceEntity(130U);
    msg.setDestination(63371U);
    msg.setDestinationEntity(12U);
    msg.flags = 79U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7832454102505486;
    tmp_msg_0.speed_units = 40U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8427330449067624;
    tmp_msg_1.z_units = 232U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21049000941248042;
    msg.lon = 0.17980224622706353;
    msg.radius = 0.14621533386501195;

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
    msg.setTimeStamp(0.33678669132643213);
    msg.setSource(56905U);
    msg.setSourceEntity(178U);
    msg.setDestination(57990U);
    msg.setDestinationEntity(128U);
    msg.control_src = 34560U;
    msg.control_ent = 182U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 86U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9493147896222783;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.317172144186995;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.22784521728239138;
    tmp_msg_0.lon = 0.08366113460571778;
    tmp_msg_0.radius = 0.819075567080075;
    msg.reference.set(tmp_msg_0);
    msg.state = 201U;
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
    msg.setTimeStamp(0.743240394541207);
    msg.setSource(62534U);
    msg.setSourceEntity(214U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(193U);
    msg.control_src = 58260U;
    msg.control_ent = 207U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.497996753138094;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.05069273593678203;
    tmp_tmp_msg_0_1.z_units = 12U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3019431880032013;
    tmp_msg_0.lon = 0.7831397441079785;
    tmp_msg_0.radius = 0.02024807258985195;
    msg.reference.set(tmp_msg_0);
    msg.state = 52U;
    msg.proximity = 1U;

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
    msg.setTimeStamp(0.6484855520831546);
    msg.setSource(2481U);
    msg.setSourceEntity(93U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(7U);
    msg.control_src = 44835U;
    msg.control_ent = 23U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 48U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.21118989498272622;
    tmp_tmp_msg_0_0.speed_units = 128U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14464321234378985;
    tmp_tmp_msg_0_1.z_units = 234U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7179330441131683;
    tmp_msg_0.lon = 0.06663011340901559;
    tmp_msg_0.radius = 0.39763403284199517;
    msg.reference.set(tmp_msg_0);
    msg.state = 68U;
    msg.proximity = 26U;

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
    msg.setTimeStamp(0.882941982862129);
    msg.setSource(48476U);
    msg.setSourceEntity(110U);
    msg.setDestination(11332U);
    msg.setDestinationEntity(192U);
    msg.ax_cmd = 0.32006394254938986;
    msg.ay_cmd = 0.030958307908347416;
    msg.az_cmd = 0.20868369448502289;
    msg.ax_des = 0.7338442104046152;
    msg.ay_des = 0.23392504431780037;
    msg.az_des = 0.5424984690349842;
    msg.virt_err_x = 0.40512469634668036;
    msg.virt_err_y = 0.26673570562489113;
    msg.virt_err_z = 0.71709723136517;
    msg.surf_fdbk_x = 0.741460671554267;
    msg.surf_fdbk_y = 0.7123034859208188;
    msg.surf_fdbk_z = 0.46869235006449583;
    msg.surf_unkn_x = 0.3660709052042397;
    msg.surf_unkn_y = 0.5423852560120457;
    msg.surf_unkn_z = 0.9676490536211149;
    msg.ss_x = 0.1927354761357437;
    msg.ss_y = 0.6505690954998704;
    msg.ss_z = 0.49321144271337136;

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
    msg.setTimeStamp(0.5864635439829687);
    msg.setSource(14789U);
    msg.setSourceEntity(20U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.8248913594533397;
    msg.ay_cmd = 0.8639508059424327;
    msg.az_cmd = 0.5381686448004708;
    msg.ax_des = 0.3714351973405604;
    msg.ay_des = 0.6417103134432278;
    msg.az_des = 0.333910826509474;
    msg.virt_err_x = 0.03170888572379016;
    msg.virt_err_y = 0.37914500381411254;
    msg.virt_err_z = 0.49444892983164035;
    msg.surf_fdbk_x = 0.6774187390347667;
    msg.surf_fdbk_y = 0.5818697448758157;
    msg.surf_fdbk_z = 0.6698224676949442;
    msg.surf_unkn_x = 0.14029336590697883;
    msg.surf_unkn_y = 0.1882602960678399;
    msg.surf_unkn_z = 0.22961917796777387;
    msg.ss_x = 0.929280054069901;
    msg.ss_y = 0.3594818005610936;
    msg.ss_z = 0.5433616527639279;

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
    msg.setTimeStamp(0.740728940052917);
    msg.setSource(52964U);
    msg.setSourceEntity(26U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(97U);
    msg.ax_cmd = 0.8293525322288663;
    msg.ay_cmd = 0.572642496225121;
    msg.az_cmd = 0.9155484298879923;
    msg.ax_des = 0.9800152977922046;
    msg.ay_des = 0.8922937312237283;
    msg.az_des = 0.5233455558282974;
    msg.virt_err_x = 0.7558251652715479;
    msg.virt_err_y = 0.9592532732824686;
    msg.virt_err_z = 0.3945971372693978;
    msg.surf_fdbk_x = 0.26678205057284;
    msg.surf_fdbk_y = 0.11780156783042872;
    msg.surf_fdbk_z = 0.6669191005010946;
    msg.surf_unkn_x = 0.01449566315404971;
    msg.surf_unkn_y = 0.6472904903366429;
    msg.surf_unkn_z = 0.6090150895157675;
    msg.ss_x = 0.7527768823502269;
    msg.ss_y = 0.5678968001929352;
    msg.ss_z = 0.4785242042424639;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EUIYWYMXHNNTEYPOJSJZOIGY");
    tmp_msg_0.dist = 0.29302732092706707;
    tmp_msg_0.err = 0.5287266002157812;
    tmp_msg_0.ctrl_imp = 0.9660162590024017;
    tmp_msg_0.rel_dir_x = 0.9171621055942383;
    tmp_msg_0.rel_dir_y = 0.6823754060447219;
    tmp_msg_0.rel_dir_z = 0.4630896474767108;
    tmp_msg_0.err_x = 0.08542959260376859;
    tmp_msg_0.err_y = 0.9861073945969212;
    tmp_msg_0.err_z = 0.9002003964088131;
    tmp_msg_0.rf_err_x = 0.38281012423926464;
    tmp_msg_0.rf_err_y = 0.27842446294109746;
    tmp_msg_0.rf_err_z = 0.28262887294738404;
    tmp_msg_0.rf_err_vx = 0.45021603696719303;
    tmp_msg_0.rf_err_vy = 0.3103640603001141;
    tmp_msg_0.rf_err_vz = 0.6373411905364369;
    tmp_msg_0.ss_x = 0.8052302689348512;
    tmp_msg_0.ss_y = 0.6828123421774729;
    tmp_msg_0.ss_z = 0.7700046504178119;
    tmp_msg_0.virt_err_x = 0.10271242295717187;
    tmp_msg_0.virt_err_y = 0.3801329128740486;
    tmp_msg_0.virt_err_z = 0.9856366280510077;
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
    msg.setTimeStamp(0.14134968602313946);
    msg.setSource(34526U);
    msg.setSourceEntity(249U);
    msg.setDestination(47452U);
    msg.setDestinationEntity(140U);
    msg.s_id.assign("ISJMPKNFHQJYARDGAEORVGENYYSUAWRYZSZKUCMIFWIOQMLQKDKVZCAISRXPIUCRSDMVUZBPLQEKPCNTTHPGJWMDXZEVWXFLNFJQTXDGOKQNGRONZTIEALEKNOOH");
    msg.dist = 0.43052758182732187;
    msg.err = 0.07269275737807546;
    msg.ctrl_imp = 0.4474192430059616;
    msg.rel_dir_x = 0.76482390804083;
    msg.rel_dir_y = 0.8160356814323718;
    msg.rel_dir_z = 0.5251253022439476;
    msg.err_x = 0.8781913068320832;
    msg.err_y = 0.8479282408181136;
    msg.err_z = 0.1315815518462038;
    msg.rf_err_x = 0.14637485719031473;
    msg.rf_err_y = 0.3960109575132883;
    msg.rf_err_z = 0.8186533819405145;
    msg.rf_err_vx = 0.7483083745703561;
    msg.rf_err_vy = 0.6329668201090171;
    msg.rf_err_vz = 0.633523930119905;
    msg.ss_x = 0.3522168896061877;
    msg.ss_y = 0.3209778870326897;
    msg.ss_z = 0.7805842169138524;
    msg.virt_err_x = 0.891391885659602;
    msg.virt_err_y = 0.1852938097408885;
    msg.virt_err_z = 0.8461431452288547;

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
    msg.setTimeStamp(0.2204539631936563);
    msg.setSource(49165U);
    msg.setSourceEntity(183U);
    msg.setDestination(14745U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("WZVKAWDFUTVTYYQZTETRJWOCRWISHKGMVPNMHBWXBVODYJQLKOMDNPPMSFOCPJAGBLAPHRZRVUOXQISACLUCDLXOXWRUJXIEFLJQJGOBIXMTKQOFCGAZYAUTZUEXPBCIAPXVZQWFIH");
    msg.dist = 0.1892486973552996;
    msg.err = 0.6082166930494428;
    msg.ctrl_imp = 0.6739567580194008;
    msg.rel_dir_x = 0.5267454903108519;
    msg.rel_dir_y = 0.04966281751669688;
    msg.rel_dir_z = 0.8308720532854421;
    msg.err_x = 0.41105250408858784;
    msg.err_y = 0.800895869338513;
    msg.err_z = 0.7069647465646828;
    msg.rf_err_x = 0.6286866720832741;
    msg.rf_err_y = 0.5815981017513349;
    msg.rf_err_z = 0.6391549144437414;
    msg.rf_err_vx = 0.8959846726731395;
    msg.rf_err_vy = 0.7658109042998646;
    msg.rf_err_vz = 0.2220009175928216;
    msg.ss_x = 0.9112725421890789;
    msg.ss_y = 0.5108293999510216;
    msg.ss_z = 0.9678860378031201;
    msg.virt_err_x = 0.16524876711492453;
    msg.virt_err_y = 0.21964805835355827;
    msg.virt_err_z = 0.049066395149291564;

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
    msg.setTimeStamp(0.653779767880318);
    msg.setSource(5258U);
    msg.setSourceEntity(110U);
    msg.setDestination(63800U);
    msg.setDestinationEntity(118U);
    msg.s_id.assign("ZKNDYHZULPHGQPTVYCIWWGQCIVDROTRYKKESLZQDXNGNEAQNTGTUMMOLBBFDDUZXEAJDYMBCJHCDKHVRHQRQJKUMIJTBOFFVGHFRLPUQZIWUSYZQZHNSTKJOEYMVCSNOGEAAVKMBYCJHFSDIPGQMXJXWFLLPXRLRFVZUCMUMOTAPXBAFOPVGNIYTXZASPWFIIEDJFMHJRECXVWWBBCSJ");
    msg.dist = 0.3490419542204585;
    msg.err = 0.6525617759435872;
    msg.ctrl_imp = 0.7372172716832884;
    msg.rel_dir_x = 0.1530785636891504;
    msg.rel_dir_y = 0.13606924525833897;
    msg.rel_dir_z = 0.3862984792493144;
    msg.err_x = 0.1375743482548032;
    msg.err_y = 0.6054978304803293;
    msg.err_z = 0.44031097027927546;
    msg.rf_err_x = 0.0526425629095707;
    msg.rf_err_y = 0.5909855165290658;
    msg.rf_err_z = 0.7154058985591621;
    msg.rf_err_vx = 0.6255541312601536;
    msg.rf_err_vy = 0.9864412240592447;
    msg.rf_err_vz = 0.7156450685540969;
    msg.ss_x = 0.29634299169368394;
    msg.ss_y = 0.2844214035687188;
    msg.ss_z = 0.747657475372334;
    msg.virt_err_x = 0.6191428780621376;
    msg.virt_err_y = 0.9407799261606075;
    msg.virt_err_z = 0.003708773627379869;

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
    msg.setTimeStamp(0.7789274591196126);
    msg.setSource(31232U);
    msg.setSourceEntity(248U);
    msg.setDestination(14954U);
    msg.setDestinationEntity(155U);
    msg.timeout = 31884U;
    msg.rpm = 0.37158641103048873;
    msg.direction = 229U;
    msg.custom.assign("XSNBIAAYAVPJFLNVAXPOTPGHPUJOOTMHJIRCLBAMDXDIKRIHQKFKILXWFIUSFOEUPVXEFNJJOPJFMZHBBYLWEZTOEQAWQDUPXGEMDOU");

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
    msg.setTimeStamp(0.48542480185187264);
    msg.setSource(45493U);
    msg.setSourceEntity(113U);
    msg.setDestination(35569U);
    msg.setDestinationEntity(195U);
    msg.timeout = 11247U;
    msg.rpm = 0.8858811060555042;
    msg.direction = 114U;
    msg.custom.assign("ZQZTOUWKLTVYWXXFMYTQYWKUEOBXVDGHPGPDHZXICUQSYMLJHNNMKASDKRJPNPFONMECORALUDVKHZWBZWVFPKOKTFIKCVLCJRNXMFDAHETQAHQNINTDUEJBNYTOFGLCZGUABJCZXIGUVIXXYNTFUIVIDEYZGXQKHBQFELATJ");

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
    msg.setTimeStamp(0.963811788083788);
    msg.setSource(63652U);
    msg.setSourceEntity(55U);
    msg.setDestination(44625U);
    msg.setDestinationEntity(6U);
    msg.timeout = 64493U;
    msg.rpm = 0.02361749284441972;
    msg.direction = 106U;
    msg.custom.assign("IIDBTABCYDHGSLXJXTFTMWVXIBQEPGKSCSMZVTFVLZQWWPOUCYDTRQAPBORCCHVOYQTDKUWLRJINLYWRWGLODIJRAKNSYNPZPDMSEVDRGZCGXQNYFQPEHFMUEEAOYXKEBVOGSQHIDXFIOMMOUXFLLETDFJVRCSAJACBEJMQZFP");

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
    msg.setTimeStamp(0.10229433995640735);
    msg.setSource(44392U);
    msg.setSourceEntity(31U);
    msg.setDestination(33808U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("DGZPNTXDPTXIZQMOSSBIGNURHAVFYAOGHVYKTKYGXIFCVXEGRJWIJGGYXQZHLZYMUHMAPEOOWD");
    msg.type = 184U;
    msg.op = 122U;
    msg.group_name.assign("IBPGZWGKUESJINFUHSBHCOSRQBJTPJAXJZCKFSCOLJP");
    msg.plan_id.assign("IMZFUORRDQVDAFKIPCTCSIHJGQUZAXVSXXFUQWQGNREIHWNQGJHRCMZGSCEONCXNXZBBJTOWPSLOUUQJIIVWTOVVUOQDTLDWUAK");
    msg.description.assign("SVPIXXTCKNEMWWJDOMQAWHDQXZMECMXFJELKIOCXDNCGTWBGANPXHJGEVSWNZIPAEXSIYBRZFARYKL");
    msg.reference_frame = 68U;
    msg.leader_bank_lim = 0.9312422723860923;
    msg.leader_speed_min = 0.7836296197399021;
    msg.leader_speed_max = 0.49550554185337636;
    msg.leader_alt_min = 0.022036180850598774;
    msg.leader_alt_max = 0.3533410778655275;
    msg.pos_sim_err_lim = 0.20776365266999341;
    msg.pos_sim_err_wrn = 0.031232585036351734;
    msg.pos_sim_err_timeout = 41822U;
    msg.converg_max = 0.8537351625671463;
    msg.converg_timeout = 40359U;
    msg.comms_timeout = 26116U;
    msg.turb_lim = 0.8690113210672339;
    msg.custom.assign("TCFTGMUQURSWJALAAVQJIXFLYPLJLSUOGPRGOKEJWHTKGSSYMJZEAVMOWIRUPNZXDVLFVHFTEDOKFNYHDBZFOHH");

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
    msg.setTimeStamp(0.2553812349044964);
    msg.setSource(54471U);
    msg.setSourceEntity(252U);
    msg.setDestination(22243U);
    msg.setDestinationEntity(65U);
    msg.formation_name.assign("CRLOPMBTXILLBEBMSOUZGTYAAXUFJBNEVJGSGKJVYZMUKCDENUPVPRQUQEOMEMMAGTMZZALPTRKKBEWXGZPSRPAVCKGDQDUQEXOSZYULCATAZCYVLMWWNHFQZSJZVKDHFFIEQHUFCOTHKFVYMNWOUQHRWWMWIPINWQPW");
    msg.type = 111U;
    msg.op = 32U;
    msg.group_name.assign("KJVMBYXODQIUSDAEJXZLGIGXTNLMRRKGYGEDQDMEEHTOSEYUWIFWMWLUFGZVMAIXYYHPKAREUWQQQUXXOWCUTPSBLHNYOKCPJZTNMGUBXCJTQREKNZZWYGHYZTRNKVLOPKPJTEDSCWHFZNIAFDPFSSXBCERICBPHYNUAQVQABVRIGMWUKIXJKUHA");
    msg.plan_id.assign("YSFEZYOZHFKXWPLXDAEHOBLHKRNAHLQIWVAHJRKQTSOTTSGXJDXZTPBLPDJWZSAPGWEAYIARHLZJWLKDMWVMLMEYGSRMTBGTFYQVGUCWSCXHQYDPKDSPRMMRPEKAOVTJVHUWLSCBFZVBZRIMQDCFANUEQEBVEMOBUIJHPPYXOJXIUONGNXFI");
    msg.description.assign("MEYTLSPDOTDCSCGTLJYGICTULWVFYSCOJOAFUXEBKAIUQBHILTQKPEJKSGBOCYZFYZZHEHQPEABJWSWRRBXFIRFGKRBCMRKCUMGPJNTNOKVIDGFERZGGLWKUNVALMWEPOVXEKBGBAYYZCRJUKPNCDDBXQWVQTXPFOPMZQMDELHZRWK");
    msg.reference_frame = 189U;
    msg.leader_bank_lim = 0.34527916886949994;
    msg.leader_speed_min = 0.5897024639730496;
    msg.leader_speed_max = 0.6224405604355185;
    msg.leader_alt_min = 0.6046487616859959;
    msg.leader_alt_max = 0.4540714255685361;
    msg.pos_sim_err_lim = 0.5806113921351523;
    msg.pos_sim_err_wrn = 0.876316062851079;
    msg.pos_sim_err_timeout = 26477U;
    msg.converg_max = 0.3278914137724166;
    msg.converg_timeout = 34417U;
    msg.comms_timeout = 23297U;
    msg.turb_lim = 0.8549455660126957;
    msg.custom.assign("TNNPGGDREXPKJCAZPXJMPCMUZSLMUTJOXLSJRIQYRXQJNWNTHPDYKSHNGMAPBIZXOGWFKEEJQUHWNXGHUWLVNBUWBVKTDFROMYMIVHEXHOJ");

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
    msg.setTimeStamp(0.6105670044226731);
    msg.setSource(4073U);
    msg.setSourceEntity(212U);
    msg.setDestination(43499U);
    msg.setDestinationEntity(161U);
    msg.formation_name.assign("LGPLDENIEPDUORGJLODZPVJSNOXAKHBRYQRIUVLJUTYYYTTKWTCNWSBOLZILCYGCDZBKPUMOWFXADBJQEXMQLCHAVARRHEQNHZQJOMWYRJYYPWTKVXUVZUNQSKCAMAUOSFBMQDYPGJNVMEFHTIZAIUBRVFOVCKZKBPEFFPYSLJPSWCSJBFRXCZXWGGRFWTMEKUKLHHUEIDHSTCXE");
    msg.type = 166U;
    msg.op = 0U;
    msg.group_name.assign("UHDJGUOUMHCUIPGOZGGQCSQBLGFEHROJPBXOITGRCIVHYHEKGXNYXMZXATPSGJSFLSMBAYRCFWSKPWMRQMDPACVKLUQSVNFEDAEWBITPSRXAZFLPBDEMKPNOAUJTRFRVYNJQAIXLWQETKDICJXTAFDBYWTXCMPOONHHUQQJZCNDINIBVVJVKJHWOYQMILDZREENXNDHFZGJWZKZOREAWTYZIPCMGMLKBQFURVNKYSCUEKBLWULHTWSVFTYLAVD");
    msg.plan_id.assign("CPDLOIBAOWAMBRTYPOYEFEIJSWRTGURASKMKFPNYXBQWMJXZKCKEPFBVJFZWZSWNTSQAHNUAJKVJCSXFLYCAWLQIXIIRLZTVXEKZRKTEQMYJCZZDUGMLENLFDDEKBDEVRWZDWGJPUNLHMPMGIHHPDUSYLIFQZYSPVBTARIMTBHVGQX");
    msg.description.assign("ZGAHTGCKJAYBHGBOMWXTIWKUQTWULZHIGIFJAWVCUADPFYEPSQPXSHVTYGFSNOXDASTAYJVCOWWQZJNLMVSYAPLMBZUXTJQWRYULFKPPOANSGNRMRJKDURHTGDOPGBCHCMERESZWIRWSCIUBBZQXNIDLHBPRXSTVNXJZAYYTDFUYLKSCZTKIYMOFKUQKLPMMDXFGQILNDBWRKJEVENEVKVFVCJDXPQMHBIGEFNLNZBFOOCOUDXOCJHEQAREVLI");
    msg.reference_frame = 94U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51469U;
    tmp_msg_0.off_x = 0.2818079334714415;
    tmp_msg_0.off_y = 0.5707706055309875;
    tmp_msg_0.off_z = 0.487257804261806;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.49337560975031847;
    msg.leader_speed_min = 0.5068616872238663;
    msg.leader_speed_max = 0.16759589973094324;
    msg.leader_alt_min = 0.27912205386035893;
    msg.leader_alt_max = 0.1041232537485236;
    msg.pos_sim_err_lim = 0.6327543010237838;
    msg.pos_sim_err_wrn = 0.8517651357988483;
    msg.pos_sim_err_timeout = 15258U;
    msg.converg_max = 0.14925082598006034;
    msg.converg_timeout = 15674U;
    msg.comms_timeout = 9602U;
    msg.turb_lim = 0.6259145282288764;
    msg.custom.assign("IYAJVYIYILSQFKKKOADHIPSSQB");

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
    msg.setTimeStamp(0.8708195096680176);
    msg.setSource(38302U);
    msg.setSourceEntity(55U);
    msg.setDestination(43566U);
    msg.setDestinationEntity(176U);
    msg.timeout = 12778U;
    msg.lat = 0.6690971882197728;
    msg.lon = 0.02051039744366967;
    msg.z = 0.19114730500121735;
    msg.z_units = 99U;
    msg.speed = 0.29599228869265093;
    msg.speed_units = 168U;
    msg.custom.assign("WRWUKTSYUWANMWGQNHZIICUZKQKKNVDYSHEOFCBRMSDZGLSVLFGRYJSGTXPOTVDYNOXVQT");

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
    msg.setTimeStamp(0.3414853693365004);
    msg.setSource(11983U);
    msg.setSourceEntity(198U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(197U);
    msg.timeout = 50364U;
    msg.lat = 0.09489885234715223;
    msg.lon = 0.0038280982049859746;
    msg.z = 0.5530143737270812;
    msg.z_units = 209U;
    msg.speed = 0.7476733646151081;
    msg.speed_units = 143U;
    msg.custom.assign("XVBWQGHDLKVSONRZPKJFNGWAAMUPDHZVSJCILXMJNOLTUOBPKHYRCGSXTOHNPVDSCABUELKQUHPWUFZCADIRNHKOODRIVPMHBFRLSPELOCUTQTWEAYLVNYFEVPIYXRIKDVUWFDDEUFPANBXGTJLGBANLJKJGKEQMSHRYRUSTOFWESUCQJXQZGMMZBIWZAJOGGSEKCRWTQTYIXMRFXMNFXPSZAYWDYZZVCOYTQWGBJKAXZCNQBHIJIEMTFHEQD");

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
    msg.setTimeStamp(0.7049886953174193);
    msg.setSource(61418U);
    msg.setSourceEntity(70U);
    msg.setDestination(13426U);
    msg.setDestinationEntity(159U);
    msg.timeout = 51103U;
    msg.lat = 0.2928196452369797;
    msg.lon = 0.2659834139421057;
    msg.z = 0.9664561796346087;
    msg.z_units = 8U;
    msg.speed = 0.3974102432943768;
    msg.speed_units = 151U;
    msg.custom.assign("ZNWWYMBTWUFLVCLBPYGUQHCQRMKQMZHCSXWVDSDLOXGPENBUCSOBNWTULEJKIELQDUGZNNLGCATFOXZASUCDJREEMYJONQNIEVGMYRHZIPWOLRXTXWVXBJJCUFFVRSVCEBZDALJXKMDPTHMIBQCVEAQYRJJYIZPTIWTQBHLAKNSTRRHOOOVCRMHYVUFITATDJDVAGFISYDEZYRPNKINGFFFKXKXXBHHKPAPHSPAIJPQGKMGEW");

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
    msg.setTimeStamp(0.24492015249047772);
    msg.setSource(63512U);
    msg.setSourceEntity(116U);
    msg.setDestination(15117U);
    msg.setDestinationEntity(84U);
    msg.timeout = 7653U;
    msg.lat = 0.1394961030531079;
    msg.lon = 0.36208616468324917;
    msg.z = 0.9352698209686419;
    msg.z_units = 6U;
    msg.speed = 0.54409539580178;
    msg.speed_units = 65U;
    msg.custom.assign("YUZJMXJZGIFRWYATGHMMDYGQKGUDQRWNOIQTDPLQEKTQFZPHIALCNBWIGEHNZCVPKVUK");

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
    msg.setTimeStamp(0.7801195181943305);
    msg.setSource(30381U);
    msg.setSourceEntity(139U);
    msg.setDestination(54236U);
    msg.setDestinationEntity(251U);
    msg.timeout = 42507U;
    msg.lat = 0.7627053232942104;
    msg.lon = 0.7162368216236854;
    msg.z = 0.655059776387502;
    msg.z_units = 225U;
    msg.speed = 0.04241957357150372;
    msg.speed_units = 47U;
    msg.custom.assign("KWMZJXTSYAZ");

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
    msg.setTimeStamp(0.9213029697399008);
    msg.setSource(382U);
    msg.setSourceEntity(57U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(128U);
    msg.timeout = 30440U;
    msg.lat = 0.0011030096273313417;
    msg.lon = 0.9046969608464326;
    msg.z = 0.0692045306570993;
    msg.z_units = 53U;
    msg.speed = 0.6759511158972619;
    msg.speed_units = 129U;
    msg.custom.assign("EAVYQZDJVKSAHGXYZHCFJWFIPMLRWXDWZVVTJEYZRMDWPBYTDTGISLUIHWDFCLXDMZPFBWCIUVEOKHKNJLGORSQITBATKBERMJBWGCJRMXUPNSRTRGBYSTVPWLZCENLVCUGNXMBLYFGLVXFIOPEIERMQHAGEGJPUZJIATAQIDYMPKWYMEHERPFNASMUTWJFASXCJFBCNBNOLLKCXNOCQOAQHDYOOZUTDOHPBQU");

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
    msg.setTimeStamp(0.263380047805312);
    msg.setSource(42450U);
    msg.setSourceEntity(232U);
    msg.setDestination(35587U);
    msg.setDestinationEntity(126U);
    msg.arrival_time = 0.38504738079268763;
    msg.lat = 0.8298304490309392;
    msg.lon = 0.23128754894610581;
    msg.z = 0.9088579165374907;
    msg.z_units = 144U;
    msg.travel_z = 0.5647593235979633;
    msg.travel_z_units = 87U;
    msg.delayed = 208U;

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
    msg.setTimeStamp(0.81936218006942);
    msg.setSource(102U);
    msg.setSourceEntity(202U);
    msg.setDestination(9821U);
    msg.setDestinationEntity(211U);
    msg.arrival_time = 0.4712385972438222;
    msg.lat = 0.10737190919983097;
    msg.lon = 0.1954154077050163;
    msg.z = 0.3338323435472005;
    msg.z_units = 8U;
    msg.travel_z = 0.6346216819542356;
    msg.travel_z_units = 35U;
    msg.delayed = 238U;

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
    msg.setTimeStamp(0.2947766753508678);
    msg.setSource(62702U);
    msg.setSourceEntity(173U);
    msg.setDestination(54971U);
    msg.setDestinationEntity(123U);
    msg.arrival_time = 0.260245393905425;
    msg.lat = 0.9879649918591166;
    msg.lon = 0.06762402248338728;
    msg.z = 0.8191929697746811;
    msg.z_units = 56U;
    msg.travel_z = 0.5526307213991482;
    msg.travel_z_units = 79U;
    msg.delayed = 19U;

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
    msg.setTimeStamp(0.8421842641067747);
    msg.setSource(38570U);
    msg.setSourceEntity(134U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.790126548788732;
    msg.lon = 0.29685434056678917;
    msg.z = 0.8041243074301795;
    msg.z_units = 199U;
    msg.speed = 0.2539279626903569;
    msg.speed_units = 15U;
    msg.bearing = 0.08477713792504404;
    msg.cross_angle = 0.27190021199599235;
    msg.width = 0.7566122319433595;
    msg.length = 0.5769071024387676;
    msg.coff = 97U;
    msg.angaperture = 0.49737375816986373;
    msg.range = 43446U;
    msg.overlap = 161U;
    msg.flags = 217U;
    msg.custom.assign("OSJKYOQFHXTGEWBPIMDBJLKFKWLNJUYDMMIADHSXSLKRHRULROVANDIX");

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
    msg.setTimeStamp(0.7340548662995987);
    msg.setSource(64508U);
    msg.setSourceEntity(1U);
    msg.setDestination(46769U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.4376678987155732;
    msg.lon = 0.7999122107454583;
    msg.z = 0.4187543871876763;
    msg.z_units = 13U;
    msg.speed = 0.12447557960081768;
    msg.speed_units = 94U;
    msg.bearing = 0.9417607008361135;
    msg.cross_angle = 0.6009325723328629;
    msg.width = 0.8932374805794768;
    msg.length = 0.0274016450107456;
    msg.coff = 242U;
    msg.angaperture = 0.11514150074308449;
    msg.range = 41145U;
    msg.overlap = 141U;
    msg.flags = 17U;
    msg.custom.assign("GRKBATJXWYEQJWNYJKWKBHSGEONFGUIE");

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
    msg.setTimeStamp(0.43950610234165965);
    msg.setSource(57720U);
    msg.setSourceEntity(207U);
    msg.setDestination(57634U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.6084488300664563;
    msg.lon = 0.9215989107472179;
    msg.z = 0.8145552580336821;
    msg.z_units = 193U;
    msg.speed = 0.724722071985833;
    msg.speed_units = 94U;
    msg.bearing = 0.41307633756686;
    msg.cross_angle = 0.08950957492865774;
    msg.width = 0.41200700679744373;
    msg.length = 0.6786606142038188;
    msg.coff = 41U;
    msg.angaperture = 0.7475048067216508;
    msg.range = 4010U;
    msg.overlap = 106U;
    msg.flags = 97U;
    msg.custom.assign("QKDCCJXFOOTVSUXLQJXIGVMULHVSNOKS");

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
    msg.setTimeStamp(0.5273162678321466);
    msg.setSource(16946U);
    msg.setSourceEntity(171U);
    msg.setDestination(35499U);
    msg.setDestinationEntity(167U);
    msg.timeout = 55343U;
    msg.lat = 0.3158773646388977;
    msg.lon = 0.5006277664412281;
    msg.z = 0.2823172534644641;
    msg.z_units = 190U;
    msg.speed = 0.2195691257289626;
    msg.speed_units = 41U;
    msg.syringe0 = 37U;
    msg.syringe1 = 218U;
    msg.syringe2 = 221U;
    msg.custom.assign("QALHCMNKBRRKRTZYGKPEECIZKYHPGSSSJGZRYQJGFCOAOBPSN");

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
    msg.setTimeStamp(0.27236996797457824);
    msg.setSource(64058U);
    msg.setSourceEntity(181U);
    msg.setDestination(61541U);
    msg.setDestinationEntity(99U);
    msg.timeout = 6525U;
    msg.lat = 0.4929058675001229;
    msg.lon = 0.13472831166914223;
    msg.z = 0.5225828302943712;
    msg.z_units = 185U;
    msg.speed = 0.3135587243768465;
    msg.speed_units = 204U;
    msg.syringe0 = 240U;
    msg.syringe1 = 143U;
    msg.syringe2 = 188U;
    msg.custom.assign("NXPZNAXRJVEBYAXMTTDJMPLORKTWSRKCNUWUXQOUATQWSQOJIFFKPSFGAEIIFRTESGHHVZTSLMCNZKCFDRQMBZLCPHVGCBTYANOIUYKAYLOLYQGHEYOCZGCGZBZTXLEIHXIHFKSUVXU");

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
    msg.setTimeStamp(0.311978598941415);
    msg.setSource(54197U);
    msg.setSourceEntity(34U);
    msg.setDestination(51260U);
    msg.setDestinationEntity(84U);
    msg.timeout = 21604U;
    msg.lat = 0.46489515953271854;
    msg.lon = 0.6227037273841832;
    msg.z = 0.8610753926978304;
    msg.z_units = 80U;
    msg.speed = 0.12551414548068185;
    msg.speed_units = 58U;
    msg.syringe0 = 203U;
    msg.syringe1 = 70U;
    msg.syringe2 = 40U;
    msg.custom.assign("JBKUQZCDOULKHSWOH");

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
    msg.setTimeStamp(0.7932396749982257);
    msg.setSource(64181U);
    msg.setSourceEntity(86U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.2610950723315648);
    msg.setSource(36492U);
    msg.setSourceEntity(15U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.967477480420235);
    msg.setSource(17759U);
    msg.setSourceEntity(161U);
    msg.setDestination(63393U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.5959963689431369);
    msg.setSource(41910U);
    msg.setSourceEntity(111U);
    msg.setDestination(3009U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.6119948803328553;
    msg.lon = 0.014704108494188572;
    msg.z = 0.8763816188448644;
    msg.z_units = 117U;
    msg.speed = 0.5404658731475919;
    msg.speed_units = 227U;
    msg.takeoff_pitch = 0.9929557208996008;
    msg.custom.assign("LWYLBXEIIHYODCQOCKRJOOAVYZJOVLEJQXNCMPKYMYLHZFLCKTXIUQHAXBOESGDCGGBWBVOYNLHVXATRMKPUHCGSEJQERZUCBCFZOXAMTIIFIMJNKDPPP");

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
    msg.setTimeStamp(0.11321435520082102);
    msg.setSource(63199U);
    msg.setSourceEntity(66U);
    msg.setDestination(39755U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.44921214572043244;
    msg.lon = 0.44903405698743204;
    msg.z = 0.8357477305357573;
    msg.z_units = 141U;
    msg.speed = 0.5789072263601394;
    msg.speed_units = 29U;
    msg.takeoff_pitch = 0.08230131550564102;
    msg.custom.assign("VUXLTAYEMYFQGJVPLBBEWTJVZPHHGCMPJOUZVKAQLNSLHEQMFWOMRZBDOPNIIODFOTGSIEEASJJVZJXECNR");

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
    msg.setTimeStamp(0.28563421317464877);
    msg.setSource(41240U);
    msg.setSourceEntity(20U);
    msg.setDestination(31431U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.34426099012524614;
    msg.lon = 0.11555960131545451;
    msg.z = 0.6348922404470938;
    msg.z_units = 203U;
    msg.speed = 0.433776926123842;
    msg.speed_units = 54U;
    msg.takeoff_pitch = 0.5237237803983827;
    msg.custom.assign("JLOVUVEDGLARNOZFUTIOCZCYXTBWQEMFCGYKJEIFFRUZEYZEAJXIGZXIJWEXNWSQJNFMKOXLZTPMHRSZTQYWELGMITLYPTGRUSBTHBAPSLVBDASXGBETQYQLNQFSHWDEKHRFSWWFNCRDKBIUCAXKRWAUNCHNIBKMVSLMZXHSQDPJJOFGGLYFGDDCYWOVYVAUPKPRIPIMIZVTTKNNHMXDJODQBOGPWNPMBQUVKHJZPRVDOHA");

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
    msg.setTimeStamp(0.6049213523633694);
    msg.setSource(53184U);
    msg.setSourceEntity(208U);
    msg.setDestination(20357U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.9942074980493171;
    msg.lon = 0.4096461374340976;
    msg.z = 0.058312041091622024;
    msg.z_units = 9U;
    msg.speed = 0.6725564542536245;
    msg.speed_units = 127U;
    msg.abort_z = 0.052665353200904264;
    msg.bearing = 0.9129160691049325;
    msg.glide_slope = 34U;
    msg.glide_slope_alt = 0.1274656332256242;
    msg.custom.assign("WSSWIOJBBZXZTVRGKETWDYMNDCWMMJOGJJGVATCCCMLETGSULHLXZSRBFJFRCIRGYXWQCWKLTDEFCUTRUUPLOIBFZ");

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
    msg.setTimeStamp(0.6662365566357272);
    msg.setSource(6205U);
    msg.setSourceEntity(14U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.9381761985188096;
    msg.lon = 0.9518064664205285;
    msg.z = 0.7672932223822311;
    msg.z_units = 22U;
    msg.speed = 0.6730680794650018;
    msg.speed_units = 130U;
    msg.abort_z = 0.8153122199493261;
    msg.bearing = 0.0462294591761474;
    msg.glide_slope = 120U;
    msg.glide_slope_alt = 0.42583335532472344;
    msg.custom.assign("IRQMCTEVQUJNJHVHWADNWNDSWQGAJSRZYKLMWMKAWXKMPZQOHKPDLQEOXSPIPJIHGF");

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
    msg.setTimeStamp(0.013067897434913545);
    msg.setSource(33134U);
    msg.setSourceEntity(145U);
    msg.setDestination(60141U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.11653787454379827;
    msg.lon = 0.29109199053289947;
    msg.z = 0.28047633292854;
    msg.z_units = 176U;
    msg.speed = 0.5725749796835002;
    msg.speed_units = 38U;
    msg.abort_z = 0.8830942907132656;
    msg.bearing = 0.49253552936554845;
    msg.glide_slope = 212U;
    msg.glide_slope_alt = 0.19351919854966115;
    msg.custom.assign("XQSIWNKLCGPVTGRIZDWLAKKUPVUVTRSFUBCZBVMTHBLXXZQCBQOKOPYLIQXGQOASRGTEJVHJSNTWNUETYEEMCHDIMPWYPTXGVTWYTJYXLMCVGFONBMCDIZCSLJWQFEMBLM");

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
    msg.setTimeStamp(0.2671794055717843);
    msg.setSource(53646U);
    msg.setSourceEntity(121U);
    msg.setDestination(47457U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.801551590384498;
    msg.lon = 0.08489262526795815;
    msg.speed = 0.09200009804725184;
    msg.speed_units = 31U;
    msg.limits = 20U;
    msg.max_depth = 0.04340205852629153;
    msg.min_alt = 0.9156549161242701;
    msg.time_limit = 0.5163468568186175;
    msg.controller.assign("FZJJTTALNZHOAZPLAKSMDGWDYDPNOALNEXEGLQALTRSMXGMOXFHCTZHVJHLTYUEBVSMYLGBDJIQCHIWOREPNFWRYFMYXERTFWZTQOYWVPKUUZCDCVYQSWUQUSASNWCQTPBQLZBGMOQLEISGVOZKBHKKGXFUNTUVJIXZRDLIEOPXYNOJBHEAYBSCNVFAEPMCWMRXU");
    msg.custom.assign("MHJMHCXXNOEDRUNZVZWXFCEPITKUGHZNQCYHDPUFCDOJMLNSHSBGIMLTFVQRTMYBHODIHOLGYTSSNSJBVZWKAVMZRDVMDQGUFNDTWETKKAVAJPOTXLXDMUCFPWYARVBGSSZXQZJAVYBUECWRLULIHUBWFPXPCGGXPNGJIRYENIC");

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
    msg.setTimeStamp(0.670183981934177);
    msg.setSource(64807U);
    msg.setSourceEntity(131U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.1633868022507201;
    msg.lon = 0.22607587014160013;
    msg.speed = 0.18923784116174425;
    msg.speed_units = 206U;
    msg.limits = 238U;
    msg.max_depth = 0.6451711819710979;
    msg.min_alt = 0.46842818477064074;
    msg.time_limit = 0.08070851951512958;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.31407338751623304;
    tmp_msg_0.lon = 0.24093626395880297;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TNIFABJHCYNGMJHULREBTJUTPBRPVUUCZNDSQOQLKPLHAGIZFTASQNRKSEVLCCTWYIXUQVRDJEINPIMZWFHZMKEODIMXDDYEHOBEYARTBQHHFFCKYXETVSCNHRWXKKXGKORLXMQYYQEIXVIBTOUDGNOPRKVGOMAHYVVEDATNSXDNUDUACAJFFWFYGBQTZWVWLUIBUMBQJJBMZJANKFODOGOLZFZSCIGZLHXJ");
    msg.custom.assign("DEAZUGRZJCSJNERZRPPOVUHFTJIGNBWXKUPNKQFTUKIPSYLUAFVFIBEZYADFQNJDODHPTOLRFCWRHCGQWUKMYQSIFKNSHMTBEBYLGBIJLSZGMXNZBJWZPOTYIQVGMIVWWVZSLSKTXNLAXRWPOFOACUMVHYOENXQHKPMAQCDYLQSJKUGXBUAXDYVXEDCFMNIHOWNZQMYJGVEBTXSOXSLZR");

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
    msg.setTimeStamp(0.5150828995192868);
    msg.setSource(15289U);
    msg.setSourceEntity(200U);
    msg.setDestination(28990U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.659940252639477;
    msg.lon = 0.6689775421649982;
    msg.speed = 0.8988232322626017;
    msg.speed_units = 228U;
    msg.limits = 208U;
    msg.max_depth = 0.5468990892304607;
    msg.min_alt = 0.867275923170022;
    msg.time_limit = 0.9328957830855813;
    msg.controller.assign("WGQTIWUHCLKJQYRJZGRCZEYFJBVSWBLNDCSSTAPD");
    msg.custom.assign("PTIWUOVYSQKAG");

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
    msg.setTimeStamp(0.5973306381853569);
    msg.setSource(22060U);
    msg.setSourceEntity(126U);
    msg.setDestination(37809U);
    msg.setDestinationEntity(218U);
    msg.target.assign("ZOOKBOWYWCUUADSTHCIBZEQIWLJNASUTOCBLBORSQTIQWFAFVZYSGWXTIFJGHQTIXKUCBGUHXLAKQQXUTBZMJWBRYNRBEKVFWXDYFNCHYBFO");
    msg.max_speed = 0.052428095768857985;
    msg.speed_units = 32U;
    msg.lat = 0.9681668654532369;
    msg.lon = 0.631896858483752;
    msg.z = 0.42751433419903107;
    msg.z_units = 41U;
    msg.custom.assign("VIMBYWSWKSNOKLEDZCUADTWXQFRBEBZZBABEHYIOUIGVLJFQJTNGAHRKFPNXQMEFQSQMHHNPOTVCONUEGCKNMRHLRQQXECTLABJHXLFJCFQEZDTPTUFY");

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
    msg.setTimeStamp(0.6486580379073321);
    msg.setSource(12061U);
    msg.setSourceEntity(42U);
    msg.setDestination(39681U);
    msg.setDestinationEntity(135U);
    msg.target.assign("AWRLCKDZKUAOFNKNRZXXMYJOFSJIMIOPUVURYOHFMZWQCFQKTNZNUTBDMOEODPILFYPILNKZYYLMIOVCMBGVRQVNWAWXGTGNHBFJXAPDHVSESBLEEPUQQYPEWODSBYIJAIBYLGGZFXBCQDOSGPKHJXEBZYACDXSEMV");
    msg.max_speed = 0.5780547972125624;
    msg.speed_units = 209U;
    msg.lat = 0.8258941826823306;
    msg.lon = 0.19355884250809097;
    msg.z = 0.08609764960043143;
    msg.z_units = 40U;
    msg.custom.assign("CLFUXPPTKCHNZGSJOPLSXKXQDVYEJHNGEJHCDNMAFZKEURWIYHUYDBUMYBQVXJITMUIXIUTZWOMEWTPRNEMVUIRXJYJJROHGQZRTEKQNRQDWXZGTAVBCAOOQCFLLOLUXWMJBIHMIQWPEUTDSRADOAPSCFDQAISVNIWLYDPSRNHOVBZJMVSKPGLQPEANFMFEGRJYWKLVYGZDVIZ");

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
    msg.setTimeStamp(0.09251316333291582);
    msg.setSource(61693U);
    msg.setSourceEntity(96U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(33U);
    msg.target.assign("USHVYKFVRJWMVPRXDLYIIAPBNVBXMUWBTTBOHRITMPEJWVGAOJQSORFNZPNBUPNTIJZTFOSLMGKZFPGCDJTZJDEGEFUHRYOFQGQFBFQTJXXRVUQDSQRWJOLCSMNOFUIBYICZWIDPLVRKGEQRIPAJXECYOZBDCWXRLGCETMMHYYUZNZXLBYNCQGLSGSPBVDKNHUJOITCSAQNLYMKKEWS");
    msg.max_speed = 0.05526782924876317;
    msg.speed_units = 49U;
    msg.lat = 0.3478548884058479;
    msg.lon = 0.6704147690902854;
    msg.z = 0.3454978349022133;
    msg.z_units = 248U;
    msg.custom.assign("TYUDJWHGADCLZFNSRBYRNLLQVEPVQMXIYGMUFGSENDPZAHJVKNAJUGQMOCKZWQMVYEQGTLWBFKOKWFBVAQTKLMKDXHIYSCROHDCDEANZMGCOLXHWYFXCZYISSPZRPIPYNVYLQOTIDVXTKZOBXWORJFPLBKAJRUZPUAQJB");

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
    msg.setTimeStamp(0.0014114483770311104);
    msg.setSource(20309U);
    msg.setSourceEntity(167U);
    msg.setDestination(59641U);
    msg.setDestinationEntity(46U);
    msg.timeout = 8732U;
    msg.lat = 0.2384719539164818;
    msg.lon = 0.7213593699828083;
    msg.speed = 0.8268697167779463;
    msg.speed_units = 120U;
    msg.custom.assign("KMLLFRKVSAZFJKJYQMLCDPXUHAXINCKROLCRNDONVXARPZXDEW");

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
    msg.setTimeStamp(0.8078333162882845);
    msg.setSource(58542U);
    msg.setSourceEntity(33U);
    msg.setDestination(36652U);
    msg.setDestinationEntity(21U);
    msg.timeout = 65406U;
    msg.lat = 0.1380490386485249;
    msg.lon = 0.939745103064231;
    msg.speed = 0.11084118509814866;
    msg.speed_units = 90U;
    msg.custom.assign("VOQKBPXPONJFRHXSXHRINFUWDQGFFVQCRJYFCIRVHKLMOGMAISMEWSUITSYNYOCCXMCIXTUWZMEYHJZGRESLTOCMAFALNJ");

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
    msg.setTimeStamp(0.23347898845830672);
    msg.setSource(6539U);
    msg.setSourceEntity(8U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(64U);
    msg.timeout = 52897U;
    msg.lat = 0.16448906905798777;
    msg.lon = 0.15516290558839463;
    msg.speed = 0.5657503577474514;
    msg.speed_units = 128U;
    msg.custom.assign("CFXBSVBXUMLKVSSXOWZAIUHZJYDICXGWJMWTQPVBPLAZJNXBBLDPDELSXFSMVCIOJHHCRHUEGKDBVYROKYQCMDNWXFTOIUZIKAVFPOHPUWTNRVZSJIWEFCUYIZZBNXEODGCLQRKDEBRLNIVOROFMNPPGYVPJFTTHWIVUSBMYRWKRLJQELAGXLUCDPRNOTOJJIQZGHGQCHAGZ");

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
    msg.setTimeStamp(0.6012470882511469);
    msg.setSource(8898U);
    msg.setSourceEntity(19U);
    msg.setDestination(51675U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.18758262713017115;
    msg.lon = 0.11646592954445334;
    msg.z = 0.3755286152882398;
    msg.z_units = 152U;
    msg.radius = 0.8608897211914012;
    msg.duration = 38188U;
    msg.speed = 0.6310361456579172;
    msg.speed_units = 46U;
    msg.popup_period = 37007U;
    msg.popup_duration = 61740U;
    msg.flags = 246U;
    msg.custom.assign("YLTMRCVOHLFIXQSEHLQBHMPZEKUEBSTFQNEOKWPWIKZEEKTYMIJGMDXXDGNVPBQSJRLIMUJWFTDKXOKDZHNWOVVECYEXATROYDPVJKPHKNABVZQMCFOAFCGMRSGVJBJUWDBSMPZHIGRXGPYMPNXRJAICGNDCBTFFUTMYPCBLQSDDDKOCWOJIZ");

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
    msg.setTimeStamp(0.6916809052563622);
    msg.setSource(3001U);
    msg.setSourceEntity(35U);
    msg.setDestination(45065U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.6269963503207082;
    msg.lon = 0.19227584556010413;
    msg.z = 0.4549569260592188;
    msg.z_units = 234U;
    msg.radius = 0.030300109736078995;
    msg.duration = 32328U;
    msg.speed = 0.41704180880954256;
    msg.speed_units = 104U;
    msg.popup_period = 55186U;
    msg.popup_duration = 48944U;
    msg.flags = 2U;
    msg.custom.assign("DHZXQEENBGSKTMLRPRRMRNTDSUVCYSPVUCKXJVACINOMJFBXKUDMYALTARIRHEJMULFSJCDKWMLABTRNYUOQIXZVZPEBMOGRDKWRYJYKIXHNBJKLQPAWUPTWPJZKHLLWVFZDVIKBCZVYPYNZHEAUGCQWTGLNXIMIACTASGGHACXKSN");

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
    msg.setTimeStamp(0.0007111745076854303);
    msg.setSource(14662U);
    msg.setSourceEntity(120U);
    msg.setDestination(62930U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.5896740294385422;
    msg.lon = 0.7782734693695099;
    msg.z = 0.49846182635927927;
    msg.z_units = 234U;
    msg.radius = 0.8515119590420275;
    msg.duration = 62534U;
    msg.speed = 0.5278164742908892;
    msg.speed_units = 104U;
    msg.popup_period = 18139U;
    msg.popup_duration = 49104U;
    msg.flags = 14U;
    msg.custom.assign("EAOZTCBMINPNNNLDCDXBQOYPYRKSWABISREEEHIRRUHTZYSDXYFSCLPTGYMOPZHRQDFINHGYJITVHSMWHHDFVWVZVZGPTSFUGKOAXULBFUAHHYZZRJVDQMKPZTQGBAQGUJZCCDMPARYTQCNUOOFMUXETRWNDPLKWEXCUVJAIXLKVZMLEDFXTXWNRHPOIBYGCTNL");

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
    msg.setTimeStamp(0.3565604154051891);
    msg.setSource(8186U);
    msg.setSourceEntity(217U);
    msg.setDestination(24255U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.22302001782424918);
    msg.setSource(60746U);
    msg.setSourceEntity(118U);
    msg.setDestination(19459U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.17971444912185497);
    msg.setSource(59186U);
    msg.setSourceEntity(169U);
    msg.setDestination(46295U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.10085209649049542);
    msg.setSource(47864U);
    msg.setSourceEntity(241U);
    msg.setDestination(46458U);
    msg.setDestinationEntity(174U);
    msg.timeout = 47514U;
    msg.lat = 0.9435894756399998;
    msg.lon = 0.13454685391798282;
    msg.z = 0.06896587617914207;
    msg.z_units = 132U;
    msg.speed = 0.2472666596314146;
    msg.speed_units = 173U;
    msg.bearing = 0.03852910865568859;
    msg.width = 0.5806036003560323;
    msg.direction = 126U;
    msg.custom.assign("HFEXYGEHSLASKALXDFXQSIMVPIBZGPJNADRDAIKWIYOKBIQPWFFJWCUFZULPSGSTGAVHJRLGVTPKXGGHHUJIKUGSHSNRLBQFMUVCOUJEGYWLZDDXKWVQABRBHZBIMQMPLQPYAUSCQYNEXTOLFHWCTTLCNQKOFARUONFNOYJ");

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
    msg.setTimeStamp(0.9064533254370819);
    msg.setSource(13833U);
    msg.setSourceEntity(52U);
    msg.setDestination(10011U);
    msg.setDestinationEntity(232U);
    msg.timeout = 40063U;
    msg.lat = 0.14515420796213996;
    msg.lon = 0.5689354601355833;
    msg.z = 0.8107772210680709;
    msg.z_units = 39U;
    msg.speed = 0.45317153762880547;
    msg.speed_units = 7U;
    msg.bearing = 0.9203779403352834;
    msg.width = 0.30863187649648305;
    msg.direction = 179U;
    msg.custom.assign("VFUUPPRJPWBVHBJEOUMFFNDVOZTFIWWLSYXJIPFLDKDUTNFQRRRIYMGRUEAUCNKQBDHSMGLQLOEASSECBLWLYWQCMBFPONKOMVNNXMBOJVJIUOAAZTTHAKAKMAEKGHSZQGHDYPNVHTRZLEXSQGYYUTSFQJHGZLCXRPNJVEKCX");

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
    msg.setTimeStamp(0.3326429101335383);
    msg.setSource(28446U);
    msg.setSourceEntity(15U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(219U);
    msg.timeout = 16929U;
    msg.lat = 0.9239852723593026;
    msg.lon = 0.06285150267606121;
    msg.z = 0.07667440891534016;
    msg.z_units = 66U;
    msg.speed = 0.11061155898453401;
    msg.speed_units = 174U;
    msg.bearing = 0.9386633798814042;
    msg.width = 0.06851156885477405;
    msg.direction = 210U;
    msg.custom.assign("ACHFWIWKTJPNFOUVKMQYTCGUOLGOHZOSUGZFIDENDBDWVZRWUVEBELYYVBCZJHADSKEXCJNMEALGCERMWVQWIPPLFG");

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
    msg.setTimeStamp(0.30050103488864977);
    msg.setSource(27883U);
    msg.setSourceEntity(34U);
    msg.setDestination(14043U);
    msg.setDestinationEntity(204U);
    msg.op_mode = 106U;
    msg.error_count = 57U;
    msg.error_ents.assign("JWNIQEIZCLVZNRVMEGAVLYHCIEWOECVUXKVCZUTTFJDBXFZYRFHPBCMGRNUKOLRDYOBTQRHOYINAIVUBSPMKWXDQLQLJSJMITOVTOHNM");
    msg.maneuver_type = 42281U;
    msg.maneuver_stime = 0.5303421920291665;
    msg.maneuver_eta = 41616U;
    msg.control_loops = 1107282710U;
    msg.flags = 213U;
    msg.last_error.assign("ZQKEDKMWFHKXAUVOBHQNYNCLINDABZWETJQGDUOTUYVKEYPZKRATUGEFUHRIFYYBZPQMOTJVMPYXULSKOLQIBCQILNGMFINNDXQAGNWPLSVALBMHTUTHW");
    msg.last_error_time = 0.9712910896260016;

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
    msg.setTimeStamp(0.8463834362818816);
    msg.setSource(29143U);
    msg.setSourceEntity(73U);
    msg.setDestination(35907U);
    msg.setDestinationEntity(132U);
    msg.op_mode = 7U;
    msg.error_count = 155U;
    msg.error_ents.assign("QYTLQVJXBCEXIUZZJHUDXZAOCNWBADEKMUEOVBHVNJRIGJLYMQKMCPTLEXILGAKPUDGRDMDKSKQGBRVOIBTQSHPTAXACFFWWFHXNUFEXZEYNLMWSYAICPMGHTYTHQEBSUCKNNGYDJVJESPWHDZFRQVMECBNVRFHMMTLSFCKOOUYYOSRKZUJVQNSLWSIDDEYGSDXFAMTIKWNBUWZFYJIOAARXFZQW");
    msg.maneuver_type = 8228U;
    msg.maneuver_stime = 0.19698204181231638;
    msg.maneuver_eta = 43934U;
    msg.control_loops = 550127058U;
    msg.flags = 194U;
    msg.last_error.assign("IFRUZDBDIJECTILPVQKVVIOTATXEYQJBYGTETCUJSFQUZDNCLXNCQKWMCYLYRKDBSKXMHYJHMRXHGEIGASPMQIMKGUAPLHALLWHZNTWXVJFQCLOVZRTIPWGZATUJRLOFRTDMCVABDFAEOCUFRUFWQEABUNNPAWFOSASJNVZJBGUEHQZCPEVJEHDKEKIDBPQMKSPXOHKDYDZXNFQSHHZVM");
    msg.last_error_time = 0.4544304304686917;

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
    msg.setTimeStamp(0.4874889358501837);
    msg.setSource(15984U);
    msg.setSourceEntity(40U);
    msg.setDestination(20386U);
    msg.setDestinationEntity(45U);
    msg.op_mode = 73U;
    msg.error_count = 102U;
    msg.error_ents.assign("UPHZLOPMLETSJKQUZVDCQRGBLYBJCIHXYOXBPSDKPLFCASWYZBVCQNZQERJNPZWQFXAJKFSAUIMCMWTYBSTILFSWUVHAXWIVPMUBXJQSLHTFXAVOJUMNVHFCGEXIJQOQJUOYHPQWZWLSZICHUEIECDXAMIBYGTUYDNTRLDPXVVCDOKFBWDAKCEEVRFNFHRMADWRNRRKNZPDKWOGIIETFUKZNEGTGGNMJSOL");
    msg.maneuver_type = 52500U;
    msg.maneuver_stime = 0.800915455451464;
    msg.maneuver_eta = 45933U;
    msg.control_loops = 3274250495U;
    msg.flags = 100U;
    msg.last_error.assign("KSITHYCHIKWENKGXQJNNHMPEJSNJSAERUTPLHAETZFOKQPDEDYFXWYMDSYNVRAFRLAPZSCGHUXXOZCOMJTOXYIJSGIFOWEEQHIWGAGPRDDWBPCCTEBZNFGIBMFLHLZUWCTQWJQYJKTAEGLMTUUPLFDUOJVHMQCYXVXMJKZVLUYFXVPOQUNZJLFTZSKOBUZVLQUQALVMREYOXXV");
    msg.last_error_time = 0.0878164992052135;

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
    msg.setTimeStamp(0.9317765659859759);
    msg.setSource(4037U);
    msg.setSourceEntity(140U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(219U);
    msg.type = 89U;
    msg.request_id = 49830U;
    msg.command = 155U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.8808228211582264;
    tmp_msg_0.lon = 0.8859959853258199;
    tmp_msg_0.speed = 0.5943320216221829;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.duration = 63584U;
    tmp_msg_0.sys_a = 55925U;
    tmp_msg_0.sys_b = 14273U;
    tmp_msg_0.move_threshold = 0.29369042468011686;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 538U;
    msg.info.assign("AQQZQNKKQSQWACTJTABKJRSVWTZNOBZPLVMOZZRDISICESCTHFFHEAACPXFNJCUQOPNWZTLDMJJVAVGYFEMIEQYUNXMWYYBLSBGLKOVUNOBMZYMHLOUIPZNBFWARRWRGBFDETYEYEPHQI");

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
    msg.setTimeStamp(0.25032595209350983);
    msg.setSource(51339U);
    msg.setSourceEntity(58U);
    msg.setDestination(47859U);
    msg.setDestinationEntity(212U);
    msg.type = 10U;
    msg.request_id = 32438U;
    msg.command = 96U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 38670U;
    tmp_msg_0.flags = 194U;
    tmp_msg_0.lat = 0.9843793462775593;
    tmp_msg_0.lon = 0.0029823526027961123;
    tmp_msg_0.start_z = 0.5432554502657171;
    tmp_msg_0.start_z_units = 121U;
    tmp_msg_0.end_z = 0.5588747709320822;
    tmp_msg_0.end_z_units = 134U;
    tmp_msg_0.radius = 0.2090369463527555;
    tmp_msg_0.speed = 0.07348276671117238;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("UHCYPJJEFRPQANNYWRPAQQLYDFYRXPXRHPWVPSCAHUVJLWSUQAHQTAJXXBTMSOFVCDNPPICAVKBNYDBVFWOHKRKBIRLMDQTZDJUSZKKMBHYSNNLY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50247U;
    msg.info.assign("DHNBOPTCRISWZYLCYBSFTIWYLQCLDTRYHVTTSFNAVIEERHLEOPBLMKTUSIBYNQNGXIOJWEVWHTXPCKRJJPNWUJPYPMHEUDIPQMRVFUGYQXIXLSBTTQ");

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
    msg.setTimeStamp(0.23045294723009158);
    msg.setSource(53061U);
    msg.setSourceEntity(136U);
    msg.setDestination(2959U);
    msg.setDestinationEntity(237U);
    msg.type = 71U;
    msg.request_id = 16945U;
    msg.command = 19U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 42968U;
    tmp_msg_0.lat = 0.586330164376055;
    tmp_msg_0.lon = 0.3959657129196167;
    tmp_msg_0.z = 0.4839767362308288;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.speed = 0.8385218452703226;
    tmp_msg_0.speed_units = 79U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6764112068033825;
    tmp_tmp_msg_0_0.y = 0.05585510384030479;
    tmp_tmp_msg_0_0.z = 0.19184311673278087;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NDESRLXSAIQYRMBOEYVFGIHQQTVZFPMJSHNYGAZGPCVAJXSNTFCFRPWRMVXYQEOCDZHJNIARLXFRQLTOUNBZWSGQKJUIHZBABGUMQKQKNEUPTDUDKBVXPTCWWLHIYIWFWCYAVFHTUOEYGDCTMOSAJLBQKIROLEWWBXGRZTEHSVYSPCACZDBUXPLYSKTWCCMNQKTKVMVZLAGPDNZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7138U;
    msg.info.assign("YDYBGSRINFSTJDWOPLAMVCGMPWFLATSEVCKCJWYLAPIISGTVUMXBELGCMQCUTUWTZQXYQWHGLVZLXAEMODHVMBBPJNOCFXGPCBHAKJVQRHONKIPZJDBXLZEQAFLWTZMYIPJXBBPPNEKTKJNOZDUSMGAQNNGCOZYOUV");

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
    msg.setTimeStamp(0.06932295352673501);
    msg.setSource(62158U);
    msg.setSourceEntity(214U);
    msg.setDestination(63897U);
    msg.setDestinationEntity(30U);
    msg.command = 128U;
    msg.entities.assign("KCILWQUEFPOHXYFHWAFYHVNCXNUHXJJUSNAB");

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
    msg.setTimeStamp(0.7910727759936758);
    msg.setSource(52260U);
    msg.setSourceEntity(110U);
    msg.setDestination(43575U);
    msg.setDestinationEntity(180U);
    msg.command = 37U;
    msg.entities.assign("YZJKOKMZJORANFBDSPLMWHBCATJIFHMCBNVHOMBWLZRABHLNQFMMWEKXCMECJGGIYBKBSKYUVNDMSEIAUGKTYJLHCJRITFFPVRPYEPXPMQDJOETQYCZDRCXXFPYNQQLGKMQHAUQDWOOIXLAEHZOXVFCZWKHALSANRQTVPCUFUZSNTIDRFHJIGDRYKSSOUFXKHXPBYYBNEVLUCE");

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
    msg.setTimeStamp(0.5166868896209054);
    msg.setSource(57142U);
    msg.setSourceEntity(207U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(115U);
    msg.command = 195U;
    msg.entities.assign("IMGEOLWHFAOXWPYYLFKPJXRILKHPDKVYTNXGHWZZQEQORWWCYXQJJLAQEBZYTSYATSNMCIPDFGCRQGCGVHKSETYEDNKMSIPDCVHRMXZEHMVWFUSNJTQAJCDGD");

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
    msg.setTimeStamp(0.0578506905292373);
    msg.setSource(8384U);
    msg.setSourceEntity(59U);
    msg.setDestination(6063U);
    msg.setDestinationEntity(33U);
    msg.mcount = 172U;
    msg.mnames.assign("TMIZLWMTTNSFBLQDLYNVUFAAJDHLCRQVISTWLANQVDOPRLYSVVCPNCBGUSIBGCYOWGIN");
    msg.ecount = 230U;
    msg.enames.assign("WDUXUOFPVNJTGHLJPQHZOUKHBBYZSSSGTJARCXJEUKPBFSBMCGXKEWAVLVERSLLFBZXGODCAQYQEVTZFSTGCXURRCXEKLGDTYCTMFHRMZMBAHIPYXNPEHDMBYBANBCRVZOMPLVICXHZFGVWESF");
    msg.ccount = 201U;
    msg.cnames.assign("VMEYNKGSMGWDETHSOANFQSOPHNEFJWCDMOTVO");
    msg.last_error.assign("LVMXSKFFSXTIVGKZIIRJJHHZO");
    msg.last_error_time = 0.8285214666249657;

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
    msg.setTimeStamp(0.6154489025985269);
    msg.setSource(47149U);
    msg.setSourceEntity(110U);
    msg.setDestination(42504U);
    msg.setDestinationEntity(96U);
    msg.mcount = 22U;
    msg.mnames.assign("IYGTOZXCHSAQFFDXYNVMNDDXKHAEOYPUJCILSADOBHWUDMRGHKQLTVYTPPGRIJZDJXCFSEYSRVMVLJWXKLWYCJJLANIZWOKBDBLIUYSDNFBERTEUFNTSNQREXSCGCTGHPHAKUIFYQIQSZXEUGYRBPMKRCVGVMMZVVXTUQEWKHTBSLKBHKHNZCNFRUWUBJBTWOLIZJEWTHOOPSAMPMADNDOIRCMZRPZUQMVELWFFGAVWONQQEXGGLOJAQXPC");
    msg.ecount = 76U;
    msg.enames.assign("OBFMOGHVGXXYVZMPWJQQIJYCUUNBQLPSDWZFCJHEFIERJVESLDDRQKGVLKJHKFOUABBLTPCRLZMKTXMZZODKHSWIYFVONOY");
    msg.ccount = 40U;
    msg.cnames.assign("OVYLKEMLHRHCYWQUEVWDDRKQHYBCCAMENARXGIPYNJDPMYWWNWZJXYZKPSZVJTVJAVTHXUFAXOSOMEXSWRPHRVLAKDHCUCIVJHDXEICTAKLAGCHPGYFOOSNILRGQBULIJTSUGPGFKGTDKRIZGLQZFMBBMQVNLYZASFICGWMUJTEBVSRCBZKINPHNYLDROZ");
    msg.last_error.assign("TSQQRFQAHNXFQZPHRHWRFAUYVPECIBRRNCEGVGLYOSASZSEQXDNOTLNJFCJWJVUJMIFGTMVHGYMUCNREHELPAKLQTCGUXWDISFYBFANORDLIMAIZAPKLGLPTKTOQGTZDMDVHWKBFGUVSJECKBBURPXOUQUVSCVIXWPMBENBDOODLXMNJAZCSPJRDWFUMIYHIXOLNBPYCJEWZZJVHTD");
    msg.last_error_time = 0.9717650165083678;

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
    msg.setTimeStamp(0.16356853370754143);
    msg.setSource(34231U);
    msg.setSourceEntity(133U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(246U);
    msg.mcount = 224U;
    msg.mnames.assign("HINZZBIERTFVMYEIHRGNQUOBJIOGXYYUALDAJAMINYSDLFQJIKLGQDOYHEBUNMSPQSHJQTGQFOKGDPZRQMVOYTZHLFCDFVNCLZMHAKGNXVTCITSVSWRSBWQUFBKPWJWWE");
    msg.ecount = 51U;
    msg.enames.assign("LUOSOSWDDUMLVZKRFUHQ");
    msg.ccount = 134U;
    msg.cnames.assign("EGIWERSXLVPYFUTRJRRHMKOKBJSSCANASSPARMXQEVLXDBTIULIDDPOYDXEZAOSPFVENPGILUZZKNDRHVXDHFOJFIULFRECHBGJXBTKXMSPCONCAEXEZEOTKZTPDJJFWTVBUGYUVNRAKK");
    msg.last_error.assign("MFLZWHAGDVFNTRPNWUOMBKFGKMJOIYJHKYLLMJRLOCPSDHDZLJZUWCTBOAOGKOUHYAWWNTEWHUIZQQLFMCIRBMDNRTSATFYSPCWZKRDLGNQNOFBWUSQCPEKFBUAOASFQYEQJZTRQRNSSIXVENTJXVGHVVBEBXZJPPYAYVDTMIXIGBJAMKUWXXOIPUGSZMELCVQSAPTCYGFXRDDYPF");
    msg.last_error_time = 0.5662634961927338;

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
    msg.setTimeStamp(0.2827297421939293);
    msg.setSource(22225U);
    msg.setSourceEntity(82U);
    msg.setDestination(41532U);
    msg.setDestinationEntity(217U);
    msg.mask = 75U;
    msg.max_depth = 0.3639746918098328;
    msg.min_altitude = 0.5540450713994589;
    msg.max_altitude = 0.1837258820079123;
    msg.min_speed = 0.8778821374512616;
    msg.max_speed = 0.7023185319130207;
    msg.max_vrate = 0.20537051748063395;
    msg.lat = 0.2416433174361733;
    msg.lon = 0.5652681519560108;
    msg.orientation = 0.24774271866342312;
    msg.width = 0.076847261715833;
    msg.length = 0.40850888567583665;

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
    msg.setTimeStamp(0.719877147425706);
    msg.setSource(15515U);
    msg.setSourceEntity(237U);
    msg.setDestination(18163U);
    msg.setDestinationEntity(7U);
    msg.mask = 24U;
    msg.max_depth = 0.037324972621371244;
    msg.min_altitude = 0.39501382318977674;
    msg.max_altitude = 0.9016921097090688;
    msg.min_speed = 0.6349134093853149;
    msg.max_speed = 0.48539665981257285;
    msg.max_vrate = 0.6140854399128352;
    msg.lat = 0.516886885683736;
    msg.lon = 0.7020800822632333;
    msg.orientation = 0.5078499701495353;
    msg.width = 0.5278071181530481;
    msg.length = 0.8734792041755011;

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
    msg.setTimeStamp(0.17662387760250686);
    msg.setSource(41370U);
    msg.setSourceEntity(31U);
    msg.setDestination(20940U);
    msg.setDestinationEntity(217U);
    msg.mask = 180U;
    msg.max_depth = 0.9669812782640321;
    msg.min_altitude = 0.18878455406339312;
    msg.max_altitude = 0.7446307924447028;
    msg.min_speed = 0.39666204139231886;
    msg.max_speed = 0.8050118751966104;
    msg.max_vrate = 0.5118640007983903;
    msg.lat = 0.17317681769143234;
    msg.lon = 0.7792049358620718;
    msg.orientation = 0.29819605984876996;
    msg.width = 0.14741740204555132;
    msg.length = 0.9035169483098017;

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
    msg.setTimeStamp(0.5729960147891524);
    msg.setSource(14254U);
    msg.setSourceEntity(136U);
    msg.setDestination(30913U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.5921093713206583);
    msg.setSource(63820U);
    msg.setSourceEntity(167U);
    msg.setDestination(50127U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.8758964413250775);
    msg.setSource(19407U);
    msg.setSourceEntity(229U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.5929896682761814);
    msg.setSource(63994U);
    msg.setSourceEntity(205U);
    msg.setDestination(11406U);
    msg.setDestinationEntity(203U);
    msg.duration = 59931U;

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
    msg.setTimeStamp(0.8443843690479069);
    msg.setSource(29215U);
    msg.setSourceEntity(153U);
    msg.setDestination(51105U);
    msg.setDestinationEntity(90U);
    msg.duration = 33897U;

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
    msg.setTimeStamp(0.7108602748263455);
    msg.setSource(55952U);
    msg.setSourceEntity(80U);
    msg.setDestination(36331U);
    msg.setDestinationEntity(113U);
    msg.duration = 52806U;

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
    msg.setTimeStamp(0.40930040662766276);
    msg.setSource(20502U);
    msg.setSourceEntity(66U);
    msg.setDestination(9239U);
    msg.setDestinationEntity(21U);
    msg.enable = 122U;
    msg.mask = 914803747U;
    msg.scope_ref = 3897340326U;

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
    msg.setTimeStamp(0.6420834281992617);
    msg.setSource(29004U);
    msg.setSourceEntity(209U);
    msg.setDestination(62328U);
    msg.setDestinationEntity(211U);
    msg.enable = 37U;
    msg.mask = 1024959228U;
    msg.scope_ref = 3177324587U;

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
    msg.setTimeStamp(0.6605940106700412);
    msg.setSource(63591U);
    msg.setSourceEntity(136U);
    msg.setDestination(59322U);
    msg.setDestinationEntity(180U);
    msg.enable = 105U;
    msg.mask = 596723192U;
    msg.scope_ref = 1942344716U;

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
    msg.setTimeStamp(0.17700498657133257);
    msg.setSource(1583U);
    msg.setSourceEntity(133U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(103U);
    msg.medium = 100U;

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
    msg.setTimeStamp(0.7476637648372494);
    msg.setSource(51917U);
    msg.setSourceEntity(238U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(215U);
    msg.medium = 253U;

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
    msg.setTimeStamp(0.8949391825326243);
    msg.setSource(14793U);
    msg.setSourceEntity(34U);
    msg.setDestination(5267U);
    msg.setDestinationEntity(233U);
    msg.medium = 182U;

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
    msg.setTimeStamp(0.9479926265374413);
    msg.setSource(52527U);
    msg.setSourceEntity(147U);
    msg.setDestination(26493U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7407471886753928;
    msg.type = 139U;

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
    msg.setTimeStamp(0.640762549026519);
    msg.setSource(26997U);
    msg.setSourceEntity(78U);
    msg.setDestination(28163U);
    msg.setDestinationEntity(198U);
    msg.value = 0.4227834656983651;
    msg.type = 173U;

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
    msg.setTimeStamp(0.5725291266855883);
    msg.setSource(63279U);
    msg.setSourceEntity(3U);
    msg.setDestination(52295U);
    msg.setDestinationEntity(39U);
    msg.value = 0.9880296229311091;
    msg.type = 65U;

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
    msg.setTimeStamp(0.5475424723933336);
    msg.setSource(62147U);
    msg.setSourceEntity(5U);
    msg.setDestination(4587U);
    msg.setDestinationEntity(97U);
    msg.possimerr = 0.9596748375131346;
    msg.converg = 0.17678653997610527;
    msg.turbulence = 0.9307907315671718;
    msg.possimmon = 177U;
    msg.commmon = 18U;
    msg.convergmon = 249U;

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
    msg.setTimeStamp(0.7945635709417217);
    msg.setSource(53569U);
    msg.setSourceEntity(47U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(201U);
    msg.possimerr = 0.19099601684896672;
    msg.converg = 0.3085953669276652;
    msg.turbulence = 0.30196498979951203;
    msg.possimmon = 97U;
    msg.commmon = 17U;
    msg.convergmon = 145U;

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
    msg.setTimeStamp(0.13323962021650093);
    msg.setSource(62579U);
    msg.setSourceEntity(18U);
    msg.setDestination(64960U);
    msg.setDestinationEntity(0U);
    msg.possimerr = 0.7903250704800711;
    msg.converg = 0.642270913406237;
    msg.turbulence = 0.803966365204224;
    msg.possimmon = 107U;
    msg.commmon = 186U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.1373144445611284);
    msg.setSource(62255U);
    msg.setSourceEntity(232U);
    msg.setDestination(20616U);
    msg.setDestinationEntity(122U);
    msg.autonomy = 192U;
    msg.mode.assign("TLIPVXCYLSTHTFJGDMYGYITSTHFSOABSZKIESOJEBSKWTNEMMYHBWRANGAQGIDMUPDMRMTIAKSWKXRQWLYVPNQRXUWAUYBBSCQXGRKPEI");

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
    msg.setTimeStamp(0.6960732562484155);
    msg.setSource(35520U);
    msg.setSourceEntity(48U);
    msg.setDestination(51033U);
    msg.setDestinationEntity(56U);
    msg.autonomy = 172U;
    msg.mode.assign("DIGEQXHUEGPOLAALDSZUZQKTTCNXLYYYLISAQLFWMDMRIBSQTOXORUSMIKWEQAAUHBTQCZECYTPMNKKTGINOCTBDUKHOZRTBTJVOWNUGKZYGVEMNMWZCVROAOFKYANRRNFWDDEQNFHWXGIYIHPKSJYCSYSMGJB");

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
    msg.setTimeStamp(0.7711088906601955);
    msg.setSource(10473U);
    msg.setSourceEntity(224U);
    msg.setDestination(55791U);
    msg.setDestinationEntity(108U);
    msg.autonomy = 46U;
    msg.mode.assign("OHBOISOKCTIZAOVPTFMBYRSFOOFDQGWIKEKTRVGNYOHSLEBLQFCSLVQOWKMEMRUNAIXWUPGAS");

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
    msg.setTimeStamp(0.518835807693865);
    msg.setSource(37734U);
    msg.setSourceEntity(40U);
    msg.setDestination(23221U);
    msg.setDestinationEntity(66U);
    msg.type = 118U;
    msg.op = 17U;
    msg.possimerr = 0.4909680727973025;
    msg.converg = 0.3099321532918895;
    msg.turbulence = 0.2315094626197185;
    msg.possimmon = 177U;
    msg.commmon = 8U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.8228486772804896);
    msg.setSource(22878U);
    msg.setSourceEntity(29U);
    msg.setDestination(60143U);
    msg.setDestinationEntity(164U);
    msg.type = 233U;
    msg.op = 249U;
    msg.possimerr = 0.1506723536296637;
    msg.converg = 0.09515288678326417;
    msg.turbulence = 0.08729716743037286;
    msg.possimmon = 237U;
    msg.commmon = 22U;
    msg.convergmon = 208U;

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
    msg.setTimeStamp(0.514013015905297);
    msg.setSource(59712U);
    msg.setSourceEntity(138U);
    msg.setDestination(12950U);
    msg.setDestinationEntity(136U);
    msg.type = 56U;
    msg.op = 231U;
    msg.possimerr = 0.8612209729745068;
    msg.converg = 0.9819789569624994;
    msg.turbulence = 0.27501661094527086;
    msg.possimmon = 131U;
    msg.commmon = 22U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.80371601285475);
    msg.setSource(42101U);
    msg.setSourceEntity(169U);
    msg.setDestination(12275U);
    msg.setDestinationEntity(11U);
    msg.op = 193U;
    msg.comm_interface = 220U;
    msg.period = 42164U;
    msg.sys_dst.assign("GUEWMQJYZYTUYVOGNVJWWQMRHQNCDMXUZYWWDDOYOTLAKCRZPTTWVCNDUALRZLBSDXCXAEZPEPJNJNTTUGFIRZKXVHRJNUXYFVBHKQKQJIRAJMHXWBKSPRNIUNTQHKEISBSKWPIEIQHJLOLLMAAHCPVFWEMDSRZRFMGQOYBAEIGVLCAHOOVUPEFZN");

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
    msg.setTimeStamp(0.08413769574913144);
    msg.setSource(20538U);
    msg.setSourceEntity(106U);
    msg.setDestination(38553U);
    msg.setDestinationEntity(63U);
    msg.op = 62U;
    msg.comm_interface = 163U;
    msg.period = 54891U;
    msg.sys_dst.assign("ZNKKMNIQLOQOHSSFFRZKDZPLNPCASHFEJBVXUOZNURTIJKYMLYVZEMSPWVTCOAGAZIHMGAPULGBXZOYAUTNVDZGEROXNWFCGVDCLGUWUGYMSXLWWQSQNBORIUKTYCGAX");

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
    msg.setTimeStamp(0.20340303380811786);
    msg.setSource(31241U);
    msg.setSourceEntity(102U);
    msg.setDestination(64447U);
    msg.setDestinationEntity(75U);
    msg.op = 249U;
    msg.comm_interface = 172U;
    msg.period = 44196U;
    msg.sys_dst.assign("JODOBMQTTGCYPYWUUUPONVKMHWYACMFBASGFBAINIYUBFJVGJLISSPCUJZEWATHYZWAHLHRJISCKLUSOELHLNCTEORDUXCHEFJKMPYTXNCRUNT");

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
    msg.setTimeStamp(0.8689601762488083);
    msg.setSource(63419U);
    msg.setSourceEntity(238U);
    msg.setDestination(54773U);
    msg.setDestinationEntity(94U);
    msg.stime = 1509236239U;
    msg.latitude = 0.11032871931596777;
    msg.longitude = 0.3598930584882214;
    msg.altitude = 63722U;
    msg.depth = 32666U;
    msg.heading = 56227U;
    msg.speed = -26683;
    msg.fuel = -115;
    msg.exec_state = -88;
    msg.plan_checksum = 38975U;

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
    msg.setTimeStamp(0.9990869487777885);
    msg.setSource(53666U);
    msg.setSourceEntity(175U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(149U);
    msg.stime = 309933259U;
    msg.latitude = 0.7929935692023301;
    msg.longitude = 0.8127828780753972;
    msg.altitude = 10131U;
    msg.depth = 31379U;
    msg.heading = 42699U;
    msg.speed = 23152;
    msg.fuel = 14;
    msg.exec_state = -55;
    msg.plan_checksum = 44045U;

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
    msg.setTimeStamp(0.3676183266539159);
    msg.setSource(49555U);
    msg.setSourceEntity(119U);
    msg.setDestination(12660U);
    msg.setDestinationEntity(223U);
    msg.stime = 811301647U;
    msg.latitude = 0.43704332964743986;
    msg.longitude = 0.06064582957383857;
    msg.altitude = 16384U;
    msg.depth = 58961U;
    msg.heading = 25367U;
    msg.speed = 3635;
    msg.fuel = 42;
    msg.exec_state = 75;
    msg.plan_checksum = 58303U;

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
    msg.setTimeStamp(0.004612214222950439);
    msg.setSource(62240U);
    msg.setSourceEntity(36U);
    msg.setDestination(51570U);
    msg.setDestinationEntity(67U);
    msg.req_id = 3439U;
    msg.comm_mean = 115U;
    msg.destination.assign("UZSPUOFSJJSYJFBXSJAQXMECKHKOVYGCLRCMIJCYXREOSEOFNEFWVRSONWCLJXFAVOMGJLVQNYWPLHDNWZQVXPMZYYGNIUTAMYIXPPDURFHLDWEN");
    msg.deadline = 0.24838231329675375;
    msg.range = 0.7114315013904884;
    msg.data_mode = 183U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 59171U;
    tmp_msg_0.lat = 0.6849866556052762;
    tmp_msg_0.lon = 0.6949183227604112;
    tmp_msg_0.z = 0.5112472536768269;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.409656432809668;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.duration = 27811U;
    tmp_msg_0.radius = 0.7521870644474581;
    tmp_msg_0.flags = 113U;
    tmp_msg_0.custom.assign("OPIFBJURAMJPDEWHNWGHWJYGMVQSEZNKQFYETKPXGIHQLZVKBEYCSTSQBRYVAMVTJGFUUNQAXTRMLULGZMOKWFGSCEPONEMVHGVTHXZVDBIWBQRLZACLRJOXYIOIPAGLDEQHZBAZXIWPFKBCOPMYTTNQNLVMERYJHSKKHCOAWXENDRQEAUDPOONGFYCJMMQBRVXDOLYSFIWLTKTUZWJDRSBRSUFZBXHGNLPUICDCCCDAIZKDHX");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZXORIAAVFERZMKWWLSYBHEOTA");
    const signed char tmp_msg_1[] = {-92, -110, 30, 126, 94, -110, -112, 87, 40, 107, 66, -17, -63, 57, 123, -10, -57, -71, 17, -122, 119, -10, 72, 117, -29, -114, -127, -25, -13, 14, -98, 36, -68, -97, -111, -98, -5, 35, -121, -16, 13, 109, 123, 109, -113, -13, -10, 118, 34, 53, -71, 73, 82, -88, 69, 37, 3, -104, 32, 125, 123, 111, -17, 75, 116, -83, -80, -77, 25, 92, 56, 56, 91, 18, -7, 101, 24, 119, 61, 13, 88, -79, 28, -6, 97, -108, 122, 82, 115, -110, 44, -63, -39, -88, -21, -61, 45, -43, 68, -94, 42, -18, -14, 49, 46, -126, -65, -70, -70, -66, 76, 31, -43, 51, -109, 25, 70, 68, 61, -106, 64, 45, 59, -6, -111, 44, -10, 91, 5, 54, -123, -66, -101, -27, 35, -1, 101, 45, 73, 102, 56, -3, -44, 34, 26, 29, 123, 43, 77, -99, -107, -107, -83, 107, -85, 59, -71, -24, 19, 78, 70, 8, -7, -115, 0, 122, 46, -30, -61, 125, 82, 9, -44, 76, -10, -71, 106, 105, -20, -119, 1, -40, 19, 33};
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
    msg.setTimeStamp(0.16366003955241237);
    msg.setSource(2615U);
    msg.setSourceEntity(120U);
    msg.setDestination(28551U);
    msg.setDestinationEntity(239U);
    msg.req_id = 20379U;
    msg.comm_mean = 254U;
    msg.destination.assign("TJUSYVLXAKPIEUSYIHNMRVJEOXCBSLYFIHOFGGVRHJODZNUCDPNNHZDKAIKPNXQHHCJRVPZEGFAQYFEJSKBBXEUOGYFGRWDIXLYTCXSMAJVAAIQPQYYWBRJTWXQMWJACYBZPTTDZRTUFGFSDWVKMWLMLGHLBIWANDUVWPPXMFMKKLOMCZEVUITJISDPSBFIUBWLGDEC");
    msg.deadline = 0.9629468150598732;
    msg.range = 0.47390179679274047;
    msg.data_mode = 39U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.9657742517370564;
    tmp_msg_0.lon = 0.2610463323281045;
    tmp_msg_0.z = 0.902104000858257;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.radius = 0.724512385073344;
    tmp_msg_0.duration = 798U;
    tmp_msg_0.speed = 0.6251097040951742;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.popup_period = 8173U;
    tmp_msg_0.popup_duration = 61097U;
    tmp_msg_0.flags = 216U;
    tmp_msg_0.custom.assign("AYZKMUDXNWLKFKZSZZWJTQFOJNGVCXTGQNDWQRDTHQKOWEQFEMLDKYBBRTKTXUSEOKQJNITMVZYEJDWIWBRSHMTEOHIQRUJZBILWOCVOJVDBCXKDEGNRLYHHXPAYDPPAGUIGILUBFMIVFAISMLFRFACLYWJSZJXGSMJUYPTNZHKXUTOLC");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SRRPJBTCIUQZBCDNGMJXTIFEVYASVCKURIHWMOMYKKLBWNWEGBJPYTGFLIDPIPJWUDOLFCLUECVRPVVOYAARFNEOOXVBYITLQCARUJXWYUTRFJXVWNCBFXGHDQIDKYSYFGCQNTWVBQWQHQIQDEOTLRMS");
    const signed char tmp_msg_1[] = {-96, 0, 83, 81, -87, 76, -9, 56, -113, 90, 80, 89, 106, -42, 12, 92, -96, 42, 21, 105, -18, 48, 101, 32, -83, 69, -68, -64, -3, 12, -80, -88, 73, -19, 11, 2, -117, 77, -43, 89, 57, -83, -27, -95, -115, 109, -28, -23, -76, 11, 119, 74, -5, -86, 53, -64, -84, 70, -7, -106, 108, -91, 86, 102, 43, 107, 25, 10, 45, 119, 118, -70, 76, -113, -108, -22, 20, 42, -50, 93, -77, -9, -63, -58, -99, 120, -84, -116, 52, -110, -37, 43, -1, -101, -85, -28, 117, -110, -88, 107, -115, -69, 111, -24, 75, 66, -26, -79, 118, 10, -54, -37, -39, -5, -3, -26, -16, -85, -107, 40, -20, -121, 55, -119, 38, 59, -118, 19, 96, 105, -67, 109, -71, -12, -108, 113, -76, -4, -18, 3, 14, 105, 10, -44, -34, 8, 80, 19, 75, -83, 113, -91, 29, 33, -56, -111, -9, -121, -10, 50, -35, -69, 42, -119, -113, 112, 106, 48, 16, 48, 25, 92, -99, 55, -74, 78, 8, 32, 95, -14, -61, 46, -104, -31, -43, -79, 5, -84, -44, -41, -86, 101, 24, -41, 115, 76};
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
    msg.setTimeStamp(0.7029221897120811);
    msg.setSource(14700U);
    msg.setSourceEntity(44U);
    msg.setDestination(10159U);
    msg.setDestinationEntity(103U);
    msg.req_id = 37533U;
    msg.comm_mean = 85U;
    msg.destination.assign("ODWFCGKWKTQJSHSWBIBFYHILYDCRBFLZKYKSPEBPMCXZNQAQKEAYYGMSDOOPWPPCGEWQQXQC");
    msg.deadline = 0.31589729572960146;
    msg.range = 0.12496867353815122;
    msg.data_mode = 250U;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 232U;
    tmp_msg_0.x = 0.6044820176135542;
    tmp_msg_0.y = 0.39795486633140587;
    tmp_msg_0.z = 0.3571430450597465;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DAFESEYGXQIIJUHUWVNBYYUSSENSPMAQ");
    const signed char tmp_msg_1[] = {114, -11, -93, -120, -123, 55, 60, -47, -97, -115, 69, -88, -65, -70, 60, -67, -104, -15, -20, 33, 88, 51, 119, 92, -88, -19, -23, 91, 90, 15, 70, -97, -19, 103, -112, -94, 103, 42, -104, -33, -13, 91, -111, -28, 31, 60, 74, 25, -100, 59, -85, 103, -11, -57, -64, 46, -91, 97, -108, 96, -43, -40, -20, 70, 74, -76, -17, -75, -67, -117, 27, 34, 97, 49, 114, 44, -40, -14, 68, 37, -63, -86, 45, 0, -13, -92, 74, -20, 76, -74, 81, 113, -52, -5, -39, 121, 124, -79, -125, -2, -40, -79, 33, -66, 48, -127, 81, -77, -4, -59, -69, 115, -64, 22, -18, -6, -114, 9, 56, 63, -119, 40, -35, -127, 40, -39, -62, -125, -41, -109, 69, -106, 96, -78, -13, 13, 76, -14, -88, -19, -123, -31, 77, 85, 111, -63, -109, 83, -19, -47, -11, -34, 24, -102, 59, 82, -106, 123, -127, 52, 121, -76, -59, 116, 47, -114, 87, 56, 11, -91, 90, 0, -128, -65, 14, -123, -39, 64, 72, -73, -57, -128, 32, 62, -36, 1, -78, 72, 69, -125, 109, 45, -62, 52, 36, -112, -4, 1, -104, 4, 115, 82, 107, 79, -70, 0, 82, -17, -21, 75, -100, 32};
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
    msg.setTimeStamp(0.6164807373781567);
    msg.setSource(59181U);
    msg.setSourceEntity(233U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(67U);
    msg.req_id = 27740U;
    msg.status = 218U;
    msg.range = 0.6047895358764647;
    msg.info.assign("DFWUQZUBRSYHQWBHAOFVSENUWOOXCQNZDGEWKXMZPLMCWDDKHKOSGHGYBVKHJZUZDXVJDITCQWWBEIOYTJOSJKVFHINZTYCETTECAUANQBJGUSYBZPXOFELEAGCUMRQQFXMHFABEXQYGPJDJSSNVPPATGOFFMVMYIFTIUSNDIYRDNLKMZMBIBNILPPAOAWSPNTLXQBLEVSCDMCAERFYVGX");

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
    msg.setTimeStamp(0.08685610852637937);
    msg.setSource(21796U);
    msg.setSourceEntity(238U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(28U);
    msg.req_id = 4365U;
    msg.status = 32U;
    msg.range = 0.669003700647515;
    msg.info.assign("SVZWRJIACWAYPBPHCNFVKQADLSCWEQWYKSECBPKLSPREHSPYJKJBDQMWJPPFRNRQTDDTLWKUTONZMYDNCSTJQDVGVUJDXLKGQOIXUINXUBIUEFCZFTIWKGFYBLEOFENGZMTWOIRUEKQEOVAAAWPBCESHGIHRSHSTXCNDJFXZGRTRMTLUEHYBZTFQBLLKIZDJPXVNFWBHGSRMFMYR");

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
    msg.setTimeStamp(0.8536178620307104);
    msg.setSource(51539U);
    msg.setSourceEntity(211U);
    msg.setDestination(44636U);
    msg.setDestinationEntity(221U);
    msg.req_id = 46591U;
    msg.status = 165U;
    msg.range = 0.0260715020270329;
    msg.info.assign("DEXKDFHKQPFNFTYUUAHHNITAYWGZJPHYRNHROMSOALIXAFBWYRFIGJWIDLBWEKNBNRKFZXXIYXIWKHKPBEDBCIGAWZGMVRRXXMERBLPQDLUSAFGMAOGOQQVBCSKUUVHMBEQEUBYOAPJQWZATOGAIF");

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
    msg.setTimeStamp(0.7694142829222186);
    msg.setSource(434U);
    msg.setSourceEntity(34U);
    msg.setDestination(13870U);
    msg.setDestinationEntity(166U);
    msg.req_id = 42964U;
    msg.destination.assign("LQWWIWHJHGTPH");
    msg.timeout = 0.8697184928797524;
    msg.sms_text.assign("OHFODGTNTLXRCFTFQMSDMARSYCPYFSDKISOKGSTZUKLAQWGKKQLMSKDDIZPILUVHVUNERDUAXIVRUROVIPOEPLTWRWBDZTBPLBRMFMNNYGVJXRKCUZAQWYSLBREQOCJHZTPXNIXJGMBIVIMJNEMWJIOHJAPH");

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
    msg.setTimeStamp(0.7313945548806723);
    msg.setSource(17307U);
    msg.setSourceEntity(72U);
    msg.setDestination(49993U);
    msg.setDestinationEntity(97U);
    msg.req_id = 31186U;
    msg.destination.assign("TFEYLOXIJLXAVAYQDPPHTELBBRZKMXWSDCDMZALDCKFQYGGGZPMUUNHVQYTVUXBOOSOONBNPOVKENVYJWJGGFUVMQLAYUZRCNIVISZHCHP");
    msg.timeout = 0.017287852160720152;
    msg.sms_text.assign("QGCXOKNCAQEAWSJFTMGFHLZWECEKTLSVDHSNPSXINEKVKAFNVXNZDFPLBRMFLULBJYDHVIPCORCCDAPEADGRMDBRJHOOUKGTCMPKZGSBNAHMWFQMBVNFXYORXQBEDHMRTTEJSUPWCRHQZMYOULPQJOKVRIEGIZICBBLWSNXKEJJKGFTIQBWTIAZPWRAYLRXYVSDHYPONMQZIBULXGEXWPOXULYYZOSWVSUJTI");

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
    msg.setTimeStamp(0.4061646012646649);
    msg.setSource(43802U);
    msg.setSourceEntity(16U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(132U);
    msg.req_id = 17701U;
    msg.destination.assign("XBXCHSTGFYTMRAXBFDQKIKRBVGTZAVDNCVEPFIYMLCNGGCQMTAAOHDOROOMASKJXFDOUUAYUVFBEHUNLNTEJDKSZMQXNJANUPLRTAFWTCPUPKBWSZXPLNRLWGMLKXYJVWGKWFSJYSACFPMYWYNCUUWDCVXCHUZJSQRVJOMLEPOLZHEHWIGXLHZBOIBEGDBQYCIPKFDHPAIIZHRTFNDHINEWBPE");
    msg.timeout = 0.23941576633480877;
    msg.sms_text.assign("TLLHFKWSQTWBRAYZFIXYYOMPCUKHVADIBBJAPJQZOZAQODUNJRWEDIGPAASKJIXIAMZGWVXSXBVCXOGKOIKFUXPQUJTLIDEXHQRFBYFUHVLORMTCMHVKJYSZWCQNSNSPYAMPLZTMVFLFECZDUZXCDPIHWQCODRNNHHMCWRLYTWCFBSMUGJERGVE");

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
    msg.setTimeStamp(0.8170625630312194);
    msg.setSource(13020U);
    msg.setSourceEntity(130U);
    msg.setDestination(32643U);
    msg.setDestinationEntity(226U);
    msg.req_id = 11261U;
    msg.status = 52U;
    msg.info.assign("LVVMSAWHEQRVSTBOOKVTOPWLBSTSWOAXFIXDZUTTXQPGUMHDHWJELWODACJJLUURZWWXVXBYZHIGGSMDNKERPCDVRTLBIFANTRVLCVXMHHHGCYCNADTIKFKBMGTQMFJOIULQEIWOBPQRUCMXOAJPIQSBZZFNPHDNGYKGZUAAKSLRZYRQSKYANLIEYJBTFBQEPRUPJDNKOKMVYCLEUDWNGNJFZYQOWPXP");

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
    msg.setTimeStamp(0.028490283243203685);
    msg.setSource(37310U);
    msg.setSourceEntity(41U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(41U);
    msg.req_id = 58382U;
    msg.status = 13U;
    msg.info.assign("TQVGBIVDQDNCBBTNTBMTVRYVTBVFYCMFCRFAXFYIRXDDOBFIUZRLFOHAGQWMHHCTMOBPHJQVPNZMMBIOAXIESFBCWHQJGHQKEJEPXZSRKVHWJUGKZTRQWPCYZOZBZHMJKPONUAELVXOQ");

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
    msg.setTimeStamp(0.25169366947849625);
    msg.setSource(41591U);
    msg.setSourceEntity(178U);
    msg.setDestination(38890U);
    msg.setDestinationEntity(5U);
    msg.req_id = 512U;
    msg.status = 240U;
    msg.info.assign("PRWAARGKEIIJHCSZEYRQMLGFIMRUFYSHCMLDPEGNKYDWYFYTWTKPTGBZFWNHDUJDXFTHOBHNTVFOX");

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
    msg.setTimeStamp(0.3961576858197371);
    msg.setSource(58552U);
    msg.setSourceEntity(98U);
    msg.setDestination(52671U);
    msg.setDestinationEntity(85U);
    msg.state = 61U;

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
    msg.setTimeStamp(0.7727947066712604);
    msg.setSource(26729U);
    msg.setSourceEntity(75U);
    msg.setDestination(22448U);
    msg.setDestinationEntity(155U);
    msg.state = 221U;

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
    msg.setTimeStamp(0.45768254305054756);
    msg.setSource(59331U);
    msg.setSourceEntity(73U);
    msg.setDestination(35583U);
    msg.setDestinationEntity(36U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.019565498943476478);
    msg.setSource(11318U);
    msg.setSourceEntity(44U);
    msg.setDestination(8834U);
    msg.setDestinationEntity(16U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.0041214399107276645);
    msg.setSource(24947U);
    msg.setSourceEntity(23U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(1U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.0689443185899673);
    msg.setSource(20357U);
    msg.setSourceEntity(88U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(201U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.9133475065282916);
    msg.setSource(45871U);
    msg.setSourceEntity(91U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(202U);
    msg.req_id = 48501U;
    msg.destination.assign("OXBNMEIVSJKJXEEWEXTSTMVWOSYIDNPKVJZZZAZGDWTNELZCSQNMBITXFXVWFTVRGLAKFQOQUCJIEGHRRGZMEIWXCWOADFZTGSIUNSJPYNZYZGBLQMJXUB");
    msg.timeout = 0.12611488646836033;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("BAICMPHHNZOAREWCUOPNDRAVTZMPGKTTKIHYFISHCDXLKO");
    tmp_msg_0.op = 169U;
    tmp_msg_0.lat = 0.031308378867098474;
    tmp_msg_0.lon = 0.9315498251333559;
    tmp_msg_0.height = 0.2863157520913756;
    tmp_msg_0.x = 0.8314822544283155;
    tmp_msg_0.y = 0.02991813707506008;
    tmp_msg_0.z = 0.41568177537577;
    tmp_msg_0.phi = 0.023926938715971735;
    tmp_msg_0.theta = 0.32883100307219626;
    tmp_msg_0.psi = 0.3042953909097871;
    tmp_msg_0.vx = 0.536994893730625;
    tmp_msg_0.vy = 0.01512185193517035;
    tmp_msg_0.vz = 0.3551954416113994;
    tmp_msg_0.p = 0.8695503933942993;
    tmp_msg_0.q = 0.09920915221334092;
    tmp_msg_0.r = 0.1184012911503659;
    tmp_msg_0.svx = 0.32251717238311806;
    tmp_msg_0.svy = 0.5547782062183871;
    tmp_msg_0.svz = 0.7859835066658042;
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
    msg.setTimeStamp(0.4234740431046249);
    msg.setSource(10986U);
    msg.setSourceEntity(252U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(252U);
    msg.req_id = 33768U;
    msg.destination.assign("FCOBIFHAKUAAGANPVPOERWQIIWLNFUMQWVJOLMCXUSPKAYYIEQRLBPCKWCEPAZMVOQJXWYIZFTYODGTPTKIGDHGTUSVAWQOYFIZMLFHGRRGLDCMEWMHTTSBATKJOWD");
    msg.timeout = 0.5775057323788535;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 45501U;
    tmp_msg_0.lat = 0.6603547908801444;
    tmp_msg_0.lon = 0.06416259503507848;
    tmp_msg_0.z = 0.8426633989407852;
    tmp_msg_0.z_units = 34U;
    tmp_msg_0.speed = 0.2255728578827898;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.custom.assign("DTSKABGAEZVRROGYCINAYVMN");
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
    msg.setTimeStamp(0.09308023824949296);
    msg.setSource(20436U);
    msg.setSourceEntity(199U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(89U);
    msg.req_id = 61853U;
    msg.destination.assign("PALXUEURLXQEOGLDREDZPQGKOMESUGOAXFTJWNVSCXIVDRT");
    msg.timeout = 0.11081340457342614;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7259975077004492;
    tmp_msg_0.lon = 0.35440421056230365;
    tmp_msg_0.alt = 0.763140663996095;
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
    msg.setTimeStamp(0.39227808594167435);
    msg.setSource(27451U);
    msg.setSourceEntity(30U);
    msg.setDestination(30071U);
    msg.setDestinationEntity(28U);
    msg.req_id = 24828U;
    msg.status = 208U;
    msg.info.assign("TRLEXNGFDBUUDFPZUQBGLJVMWBDZSUYZAHPKAJNTCKGQUZDMUISJHIRWOXGJXKJEN");

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
    msg.setTimeStamp(0.523681725586412);
    msg.setSource(16533U);
    msg.setSourceEntity(232U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(70U);
    msg.req_id = 15030U;
    msg.status = 251U;
    msg.info.assign("AFOJOXKQANPSQCYQ");

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
    msg.setTimeStamp(0.3145859920004468);
    msg.setSource(27165U);
    msg.setSourceEntity(59U);
    msg.setDestination(30116U);
    msg.setDestinationEntity(53U);
    msg.req_id = 33504U;
    msg.status = 34U;
    msg.info.assign("UUZIWTOCMHDQEUJPZFJPBQYRGBEGEMSEQHVWRRZTDFRRKFNLUNUGBYIBBKWUHUXKSEJIKYWTPHNZTJCRSALWDADOGIEZSBSVLMIACHRBWXWVJNXSVDPNHVLQUIDBTCQSJQROFXQTSBICVLDNKYFELWFRXNVMZSGABPCYXGLPAXXZJK");

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
    msg.setTimeStamp(0.8093431308216833);
    msg.setSource(44044U);
    msg.setSourceEntity(175U);
    msg.setDestination(3863U);
    msg.setDestinationEntity(95U);
    msg.name.assign("JUQCEICCLYOULQYRGQZAKJGZUPQJOEPMEKZEKTTZYFYDVVKBMFWSPVEAEIRVRSRNAJBTGPHTRJRJPWOCOEMUXAUHXLDDJJNGNFKXGEQHBSLVSDZANQIFWVQCGCAFJLYOWWIWHUZMNUNISPLFLFBCKFOVOHRBHHBICC");
    msg.report_time = 0.2056790049220918;
    msg.medium = 183U;
    msg.lat = 0.4420998054598907;
    msg.lon = 0.7115531650177483;
    msg.depth = 0.35409729711814886;
    msg.alt = 0.046162001082214466;
    msg.sog = 0.11502165220565885;
    msg.cog = 0.7227631341323115;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("XOIMTUIFTIJLXZWYKHUENAMKBURSDHNTUYTYRGZVJPSXE");
    tmp_msg_0.type = 2U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.24019535126945957);
    msg.setSource(60594U);
    msg.setSourceEntity(102U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(112U);
    msg.name.assign("VSBYMDMVTZVNYIEYQNTBCYRKIJTRUYQPKZUSJKEGMISSVCNZRYWWQFPFFKLZWEUGCGXXOKWBZBGTNCYRJLQXFACHZERDLRVGTZQRPCPUANMKUACNLEAWQOEONOKODVUXWILOLMNVTMQWCAIWRSHGPBOVHUXHFTLFIAJBYTAWZSXAEEXQAS");
    msg.report_time = 0.1891132643950516;
    msg.medium = 203U;
    msg.lat = 0.33574284108693786;
    msg.lon = 0.277573778750534;
    msg.depth = 0.10883771420250765;
    msg.alt = 0.367643099069242;
    msg.sog = 0.31824683177424873;
    msg.cog = 0.6652632939032336;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.6018009144299505;
    tmp_msg_0.m = 0.752661487998409;
    tmp_msg_0.n = 0.34646988636298615;
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
    msg.setTimeStamp(0.4816243652612576);
    msg.setSource(971U);
    msg.setSourceEntity(45U);
    msg.setDestination(7026U);
    msg.setDestinationEntity(10U);
    msg.name.assign("BHZBVUMLCWXLDYEICWLYFSEGZMONFODTPPMQLIUYEVNUCNVBTEMIPJBLWFDWRLBZOYUDQOCGUXHYFKSAQNEFFBERLJIKHKBXCGYWJVMTIGAKJSWEPHVNDSXVUURIBVPIXHFHOTTIACJQYFSGDZJMTC");
    msg.report_time = 0.4777537856128382;
    msg.medium = 248U;
    msg.lat = 0.7503561303253481;
    msg.lon = 0.2303464381198499;
    msg.depth = 0.9483610595708646;
    msg.alt = 0.3788317311848952;
    msg.sog = 0.21332586237070605;
    msg.cog = 0.911584451032807;

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
    msg.setTimeStamp(0.16892615489068852);
    msg.setSource(50601U);
    msg.setSourceEntity(169U);
    msg.setDestination(55994U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.7847919390745601);
    msg.setSource(36104U);
    msg.setSourceEntity(180U);
    msg.setDestination(20279U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.26527354204406195);
    msg.setSource(62263U);
    msg.setSourceEntity(106U);
    msg.setDestination(25456U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.850988427199773);
    msg.setSource(45501U);
    msg.setSourceEntity(83U);
    msg.setDestination(64631U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("QVBNMSVSSKJDOUULEZFNEPLNXTQIHZHZYYTXJFTFXYALYNSEPFNIWIZRLHQPOQXINIDQIWARWDMFMKVACGKTOOVCXSNPDBHRGDCSKUJBOD");
    msg.description.assign("MKIOPVXEQYHNAFSNUSZZNIUCMJBIQJWEUDVFOTLTCLBFQJCPSQNJEXMLGWZSNLLNPKYFPWUGHSXMRFQBZBSGXXXVWQGOBXDSSZQAJHJAHDKUBZMKAGYLABJHMZPNEDEL");
    msg.vnamespace.assign("JRRAXTFFXQOWIXUGKLHCVAOZMIVSPVKRKZYHWOGJAMCHKXOTPICNJXDPHMIUVEBFQRTKYYYQQ");
    msg.start_man_id.assign("AKWCOJSYSLOXCAFCROKEYKROSTIQDIBSYBNUAJGXTWVXBEAVRLHZKNYLUYGZXPMOSDAPNSOXRCMNGQTFGTPNWWFUNWKGNEZACPMKJIHHGUCCQVQSUPAJYTSINRQQQNLMZEFQHLITEIFIZVBFVEYDK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YCBBSPEOMWGJTDLIYUTEBKJWYSKTNGHJQYXDZUOARSESZEARVZAQIGGDWDNDWFVNSTHLANOSKSSXFPXNIUDLVLZIVLANYBFRXDMXUDUIZQFWAPCPMHHKGQHQEWUXRGVEAXFCVTTJJAKRIXTOQBRIQOEVBBJLMVLVHFZTZCYBJQPWPNOMZQOOHCQWYCNAXGUYRYHIAGFWOHJNEPCTHRLLKZIKVKMN");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8299341785891613;
    tmp_tmp_msg_0_0.lon = 0.8851985505044244;
    tmp_tmp_msg_0_0.z = 0.053563366605051566;
    tmp_tmp_msg_0_0.z_units = 137U;
    tmp_tmp_msg_0_0.speed = 0.9769645790825215;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_tmp_msg_0_0.bearing = 0.9899207914147091;
    tmp_tmp_msg_0_0.cross_angle = 0.44616080630828436;
    tmp_tmp_msg_0_0.width = 0.24615709067400415;
    tmp_tmp_msg_0_0.length = 0.8487079995285997;
    tmp_tmp_msg_0_0.coff = 232U;
    tmp_tmp_msg_0_0.angaperture = 0.5329698692823384;
    tmp_tmp_msg_0_0.range = 57933U;
    tmp_tmp_msg_0_0.overlap = 181U;
    tmp_tmp_msg_0_0.flags = 56U;
    tmp_tmp_msg_0_0.custom.assign("MLRSANLQGHYIFADEBEVBXODHOUZBSTCGPPHDEAUQZJGMVZWUHCVWGYCLSIZDBACCCGFIZPRXHNHRAXTNSVJOFGPWRIIEFHUEPVOXFMCTZTXPJZPYPUQGYQLLKWL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LogBookControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 86U;
    tmp_tmp_msg_0_1.htime = 0.32319548310487534;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HWFWCFWKZZCTYEVZFXEYHAPVHARHRKOLEFOCYKLBSHRGDWIQDIKLKCYXZQGTKYBCMHGLZWXJTVRBOPWSYQIFALUGNJWQBYPFSZZNECICPLYQOVNAKBXYKVCLJTSZEAVUWJGEXUNFJMDJAMPQGFQHLMMQEYNUNJRDQSADMVRHKODGHRLEDDJUWOWGOASZOXXURBLNGORIOMNXVPNBEZDI");
    tmp_msg_1.dest_man.assign("MHETQWIYTZOZVMOFDCZBKFCXBSFPRHFLLIRMNBUACQXAELRKSMNFTUSWVLTQQSXTPCASCNBBIOTHVAKIDVIRGZVUBZGFXRXMIVTAPVIGDOURSFHEFMGRBZYNEXOXMJYPBFBJQHTGJYYUANQNINCGJRSNJMHSVZKYEKQURWKEDZATOLWXNPJEUEQTWMDOLIJKJUCDPGCPVQJLZLMSGWYAIPHQGGO");
    tmp_msg_1.conditions.assign("JXSHPEBPRGHVCOAUPISAWAVOIAEAELOOKBXILYXKQXTQDMPDNZHNQPFFRGKWJWIGDKVHRZFOQOLQSUZLPDGCVFBPIMRGGCMBJAEQFWLRJZUUYVUNRCAIIOHCWYMQSZKCZMSITWSCSXWECQJKMHYWWUBKDJDNAFROMYN");
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("YZBEQRVOLYGYOIKGHHFNBGMWYTFTBVCZSXYBPUWFLPLIUAUYPIIWGJXVBKARZHKFDBMXDYQRHOEOAZOWARASPEPEQBCDRTKHCMAVXLMLIWKKIUVSSLHDTSTNCFUOXIOCHWXGEYCJNTRUEXLALIJEPTOMQMKPEGSKKZNUMDPZIJWMALXQGFPDGSVVCNLFMNJOFZNRBCWFWJSQEDYZ");
    tmp_tmp_msg_1_0.lat = 0.7307733302920242;
    tmp_tmp_msg_1_0.lon = 0.353163451334228;
    tmp_tmp_msg_1_0.depth = 0.283864037427196;
    tmp_tmp_msg_1_0.query_channel = 111U;
    tmp_tmp_msg_1_0.reply_channel = 72U;
    tmp_tmp_msg_1_0.transponder_delay = 129U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FormationPlanExecution tmp_msg_2;
    tmp_msg_2.group_name.assign("NVHWREWEPZAVNFHTIIQJSWKODTDQHPAOPVIKRQZPPVWOLXQUQAXTYAQFJBNMZVCGHTEBAQBTOCAELCFTCPBVFSLYADCUSENBOHYIMMEAYOWZNGJJEFITXHRJWAUZNDSSSGDLVUGMHCIAHWKFXGCKRZMFKXVGYIYKKNYFKXPBEGMUGEXDFMBZDJQBTLLRUECUYKGZROYNBJXJROCMLMRJQVLOPXRCNKDYBSPHDILSUQZGRUZ");
    tmp_msg_2.formation_name.assign("DINTBUVMSNUFTEBEVHAXPWYHKMOIJQRKRVQFHPPUXXHAZHLHZAUHFHSBJHJQICWNMDTNTEJDQGRKWL");
    tmp_msg_2.plan_id.assign("JSHBEANSTUGMVBTZCILMJWDHSZCUDEFPWELISHGKROOONZWFQUTYDXCRJFEKZJUJUNKGLKXALBGGOWHKDYTKLPRCZMACWAPMLAVXAWQDBIIXQCEUVPFCVCAHJMST");
    tmp_msg_2.description.assign("SXZCTRBLZAGCXXRTGRNMGISXCWVHZRMGEEDXTJEHLKFAMWBFVOKWRHSIJQHMNEIAJGYUJUUOPBDYFYVJYAZMBWKJIQNGBUZAVOPBCXVKXCWKSHZUZMDLNQMHNAPJFQJDIGYTRVYLSHNXF");
    tmp_msg_2.leader_speed = 0.3315898035818171;
    tmp_msg_2.leader_bank_lim = 0.8051207451343101;
    tmp_msg_2.pos_sim_err_lim = 0.17615442046352936;
    tmp_msg_2.pos_sim_err_wrn = 0.44378149073711826;
    tmp_msg_2.pos_sim_err_timeout = 51718U;
    tmp_msg_2.converg_max = 0.8820351657037455;
    tmp_msg_2.converg_timeout = 57061U;
    tmp_msg_2.comms_timeout = 32445U;
    tmp_msg_2.turb_lim = 0.15214556324996886;
    tmp_msg_2.custom.assign("TEVFBNEVKDCMKZDGWLYNJDZPSQZSGVTGDWTYVOFDIQBLPEHQCPWRJCBTBLGRXRBPSIOWSAKPLUBMVNGKLDUERZHIFUMMUGXAZCZGRTJQCJFLQQPUSEJIYZAKXOCEFAODFRNUEOTBOVUMVRVNFVBRMFQJCZHJAUA");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::IridiumMsgTx tmp_msg_3;
    tmp_msg_3.req_id = 27487U;
    tmp_msg_3.ttl = 54967U;
    tmp_msg_3.destination.assign("QAOOZVESWAEIXTWPSQEYWYPOLSJKZJEGZBJFFUFLUQVXYLHROTHLNEPAMUQDWYVPUTIFCXMBRRTYMJQVSLGZYBZHXTNDFIJUCMZUNWZXIJBXTKYTROBAIKXAPBWNEAXVMKWSRHRCBXIGTEEIAMSVEDQOJJXVCPGBUWGSCLYDKDTP");
    const signed char tmp_tmp_msg_3_0[] = {-77, -51, -105, 17, 75, 88, -100, -9, -31, 21, 57, 115, 6, -68, -32, 61, -26, -25, -11, -38, -19, 119};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.7726338699352303);
    msg.setSource(17083U);
    msg.setSourceEntity(97U);
    msg.setDestination(31414U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("AOXHHFGAETBTUCVBIYTNPERWRQUPKMBUCDIMXYLNOLPCTSQSRIVTMNWUIQWANDABSLCXCUKJDJNZQRXZYQRGFYEXKETPRMBXMKBEHHRGLVZ");
    msg.description.assign("ZVNRDTHLIVEPYOAJZSZNEKGJHPBMHNRVIULFWFCQITIMQDVYMFZKZJDZSZWFJYPHUWANRLBXHCNRYKCILBUFPRGXOGBOLWEJOKGYFOBWPEILJIMTKRUXEGUNQBTVMQSUZEJKXSTTTBAJFPOGJOQUHKVHCAXTMBRVTZKMPMOGCBLXPSAOCGYWKP");
    msg.vnamespace.assign("FAVZQOYTRYSNDHVVMITGZBTSIPOEPGTEHEABMKXWMSDNLJZRKZKFJBCXADFXHEERVBUAGTSULYGAUCCQLFAXIGUYMQXTKJHHBNIMHGPXCPCYDJVTJOFIDHSVJDIIDEM");
    msg.start_man_id.assign("GKNGERLUIMFOTWRLDBLLSPPAFTAIIRHUCTANZCVJPBHRCVJWPMMGCBPZIYFKZVOXIYJLBQTOSRYZKISBOUXZFTLQQECKJLMKZGPLUAGJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CVXDBBRICGKJYCHTFHCWLUFUKPBHZKOYNSQIOMOYRZXUOWSIYEGTRVRFLKLFCMHNLIHCLNF");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 61451U;
    tmp_tmp_msg_0_0.rpm = 0.07077366239120486;
    tmp_tmp_msg_0_0.direction = 18U;
    tmp_tmp_msg_0_0.custom.assign("CTHKANMKVSNKIDBFREWHBCNZYICAGFQXDQQABBDQEXSXTDNFNSEGEMVPUQHAEZIJYQPZJUTGYWTNXRJGABRJXYPSLBHWDAQVOWEXSMPUCAEZPLOMMFGGPXVFFKWKUWDVMYHHSXFYTYBPGDUSJECFRCILLHPYWOILWOZJWSIUQAFYPLUSHJA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("MGXXXACJQITZJGSZEGWKFQHILOYIBARQDHDPMUJBGFHVFVGZDTRAPUFTHEUPJKCPHCYYGKVTBQRMDJKYYQQSOL");
    tmp_msg_1.dest_man.assign("ZGDVNTYGRXYGCLGVHTYYIPHSLGWGQVKSKZUAPBAJRHIBDAQBOIOCTNKEIYTWESHMQJJUMPCPPZQZOOFWSHHAYNOQEQCRUMDXRJWPTNYZ");
    tmp_msg_1.conditions.assign("VBXYUDRVUCNXAMQPIYTGMIBJBYEOPUQPBLOALRCTDDKDDWFITPHQH");
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
    msg.setTimeStamp(0.23853737626692983);
    msg.setSource(51210U);
    msg.setSourceEntity(175U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("MOLHEAQWZXNGGEBPKIUTMITBNFEBXAJXJWOUQRFDDKTUCHRZAPWMSGLPXIVJBVKIQFAGUCUJHDOEPQVCYRKMLQPMYRYSMMHYLFPMCQQJHTUNSVTOPOZSVIPLIAFCDVREKLIXAJHDHYAECGZTNJZTQDXDPNKMAUEYTBNYCRRZLBCGYFRZBXCEGJVFZLGLHOFATWVSBOXAODIDIRFGWQGZSNSYKMWPOKNW");
    msg.description.assign("IXIPFRWUMDPVGGHLYWCGTFCDAHCWOAKKBMILTDWHZBSQPBASNHUJLAOMXERSFRBPSHMZHHEZVQIOELPIOKRAJYS");
    msg.vnamespace.assign("TJOCNKNXWZMFFEPQPARILHSQDWWMZYVLYSDKTOMSXRCULVRFQOUZVSHFVAZQGJQYNGNWMFYMCEBLMZYMMHYADRITKMIVWPIAGKQGCGACAVFBK");
    msg.start_man_id.assign("ZUAUCSJDDIDJBXRMVZFPZFTKVYHDTMOOXZCTHZIMYXCKJZPCOBEXFXEMEJ");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.41112058962050724;
    tmp_msg_0.x = 0.06616830537594554;
    tmp_msg_0.y = 0.9396012307432308;
    tmp_msg_0.z = 0.7389873935506103;
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
    msg.setTimeStamp(0.9838333355381053);
    msg.setSource(35999U);
    msg.setSourceEntity(5U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(36U);
    msg.maneuver_id.assign("IWYGQBAURSRDOEKWMTOGFLKAFHPXHKDQYKKBQLZRXLOWNBSHVGCPYQCJHCFZFRTSVWV");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 38668U;
    tmp_msg_0.lat = 0.09122464606138514;
    tmp_msg_0.lon = 0.3552784341542241;
    tmp_msg_0.z = 0.4182113264732854;
    tmp_msg_0.z_units = 183U;
    tmp_msg_0.duration = 16822U;
    tmp_msg_0.speed = 0.6243251556132848;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.type = 180U;
    tmp_msg_0.radius = 0.7037903632673563;
    tmp_msg_0.length = 0.29876078479059753;
    tmp_msg_0.bearing = 0.5165901925211073;
    tmp_msg_0.direction = 240U;
    tmp_msg_0.custom.assign("LIZXSBRGESWVSDGMOZOVTDLMBNYCFVJPCKWNWSWGEQNLFENAWWDXUEAFQIPZUBTYPZFHHWHWDRBXURGJZKLAEZIDGJPHRFJZCHVOCTPMGAPOXXYSVCRHHKDFJFEKMVYTQMMCBRJEDKXNTEVTLGBEYH");
    msg.data.set(tmp_msg_0);
    IMC::UsblFixExtended tmp_msg_1;
    tmp_msg_1.target.assign("KGSLLPJZNAQKLJRVWOKAATTSVDQKTRMLGJJGSDATQXPSRLIBRIRYUZAQQOJLVZAVPKBXMQKLNYTNXRUWVQCEEUFAPZYFGOCHYRZTXWOLIGYKZPPZDDEDHVDSQDOEAKZEVDWHVVXNDIUYUKMEYBWTOZWBCAWTFXDFCHPTWIXBTJWCNZROGPECYUBOIFSJIGCYFXHCXFFINGREMFNJBNASVJHGUQMRN");
    tmp_msg_1.lat = 0.5714114535122007;
    tmp_msg_1.lon = 0.25056712252166535;
    tmp_msg_1.z_units = 78U;
    tmp_msg_1.z = 0.49159612857320434;
    tmp_msg_1.accuracy = 0.18217986107412132;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DvlRejection tmp_msg_2;
    tmp_msg_2.type = 223U;
    tmp_msg_2.reason = 64U;
    tmp_msg_2.value = 0.7232514538178233;
    tmp_msg_2.timestep = 0.5817911286666323;
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
    msg.setTimeStamp(0.14967996939247286);
    msg.setSource(7841U);
    msg.setSourceEntity(190U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(164U);
    msg.maneuver_id.assign("EQYXXSXWWDNBEFNAQEVFCCAAQVYIFICQOKHYUVUXOJABZMWAWGNNKNIULHHRZSMGXCCFEGKHIDNAMSTEBDRWLVCFQEPFJVVGKDSTPCHOOMKQLLDJORJJLSFRUBAVMAMXKSFUWMAQRBIYOGYZCIJDPCHPULSOBXGZRUBIWWEEMXZJPBRYUPLVZKTPKUHYGTBXYWTDNEKGPZG");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 56737U;
    tmp_msg_0.lat = 0.013309492958318847;
    tmp_msg_0.lon = 0.519284189660365;
    tmp_msg_0.z = 0.7064216887982324;
    tmp_msg_0.z_units = 114U;
    tmp_msg_0.speed = 0.6520044380904905;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.bearing = 0.33391139300530903;
    tmp_msg_0.width = 0.5577618900129139;
    tmp_msg_0.direction = 43U;
    tmp_msg_0.custom.assign("NQKUJMFJWZDYJQODKDPLFUCMXGR");
    msg.data.set(tmp_msg_0);
    IMC::ButtonEvent tmp_msg_1;
    tmp_msg_1.button = 86U;
    tmp_msg_1.value = 71U;
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
    msg.setTimeStamp(0.9328118860557121);
    msg.setSource(10436U);
    msg.setSourceEntity(210U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(165U);
    msg.maneuver_id.assign("LADFONWJHUWGIGHTAEHLGDLPFYEPIQWHRIDOBVAICAYSNOPNTUFRUMOTHAYMBPIAGBQHPAZRVRQLWIBUCIXMVXTAASKCCJJPWGFWSNIFEQJCXZQZQOGKPLVUYYTORJSKKEVBLZZSRYNJNWEZFFTHMGCDOVZI");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 43715U;
    tmp_msg_0.custom.assign("WEIGARAFNOOYSDMLQEXUTSAHORRAEKZUQSMLXBHIASKHRPMKOXDIXUXBRZQONMFVMHCWWDMRGHDNFBWTMTIXNCYPPVBYVJPZAJYVJHPLMGQXSJVLOCZQYDFCICHZKKKOWMFUNUFBSQAVAGDXQKILTTZFANYVRZVGBUBGGFVSUGRPVA");
    msg.data.set(tmp_msg_0);
    IMC::UamRxFrame tmp_msg_1;
    tmp_msg_1.sys_src.assign("RARWBGIUXGWQVWYTRRFHUXJTCHMDSJJIAHEYITFQEZOVBUGDZNFUZFCTDJMUBNVBWERGKVRTJXQIGNZFPIXWEMDMOUBQKSCOWYETUXRNSCEZOM");
    tmp_msg_1.sys_dst.assign("THUJWBFHIXJYYJCBPANDVWHCBGWWMOYELGUJPQEKUEYAUZYGGRUQJDSWSLZBPQSNEONVDQHFGDPPKWTSPHZRWMDMZOHNRORXTMDNUFAREKJIZBRWXSJZLWQPMLHRT");
    tmp_msg_1.flags = 107U;
    const signed char tmp_tmp_msg_1_0[] = {53, 37, -107, -128, 77, -91, 90, -106, -30, 95, 119, -39, 69, 33, -3, 121, -82, -102, -51, -89, -109, 81, 113, 120, 93, -31, 70, -56, 79, -31, 112, 76, -79, -107, 81, 86, -51, 36, -18, 81, -103, 113, -109, 33, -13, -3, 118, 80, 47, 117, 123, -90, -49, -106, 111, 95, 101, 96, 77, -69, 103, -90, -81, 102, 104, 75, 97, -40, -18, 8, 2, -121, 32, -24, -75, 93, 61, 117, 40, -128, 18, 66, 36, 68, -44, -117, 118, -116, -28, 57};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::BeamConfig tmp_msg_2;
    tmp_msg_2.beam_width = 0.5542877036064182;
    tmp_msg_2.beam_height = 0.27041411275962546;
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
    msg.setTimeStamp(0.24775012379993033);
    msg.setSource(30511U);
    msg.setSourceEntity(11U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(53U);
    msg.source_man.assign("PTYVXSXFBSEUVPCLTHUJRPIFAGAWWABQTQDSVXOPVCIMATVFIYNWUSSDEZBPQQERBEOERIDFNXAWZTLGIJFFKPYGHVIDCKSJQJMVPEEYIYERDFYXJRCLAZCAEAPDAFNRHYYGUZUMUUEWMUINWSQZYBFGJKMKSZOISWOBCDTBXHQBTDGONWNHXLVCLULJRVNDGFJGNPMJLMGSMM");
    msg.dest_man.assign("BQDZTQEZCTPEJVIPKAIATRLOCGGHGFPQXBRAXZRCGZCUDHRHWDSMESAXWDVNESOQKJTTWNMUWQJKIJWSZVHIEGOLDYDLKDOVRGQNHLTUAFYMYNDXMBFJSXOYNVMBSCCTKRDNBZKJTMWKBTXQRWMDUJFGXTSXUCPSYBPJOBHJYPYOHQUEULPOVHIARLUGOBWIQKNFNELHILZFFLAVGPEBPUWMNJYCNXZFUMILOQCFVZIGKRAIYEV");
    msg.conditions.assign("HLGHNOQJLKTHIAX");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 122U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.12605561329866688;
    tmp_tmp_msg_0_0.y = 0.17045263635040753;
    tmp_tmp_msg_0_0.z = 0.9565838252886185;
    tmp_tmp_msg_0_0.phi = 0.27892312160160126;
    tmp_tmp_msg_0_0.theta = 0.22756188422952617;
    tmp_tmp_msg_0_0.psi = 0.2301170861532822;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.8800333806247672;
    tmp_tmp_msg_0_1.beam_height = 0.5818161508503357;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.04512380144886674;
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
    msg.setTimeStamp(0.9101092287149709);
    msg.setSource(21065U);
    msg.setSourceEntity(251U);
    msg.setDestination(64034U);
    msg.setDestinationEntity(78U);
    msg.source_man.assign("DOHGBDVKTQKXHLCEFPHVUNPQK");
    msg.dest_man.assign("BCOYEWFKGKQLGZJDOTRMTGGDTBUKSKQABLZOJUFCCYRANWAAZUHKCUPV");
    msg.conditions.assign("PAZIOOMGOVVZTMDOWTWMFKZLJFDXGIFBAVPQPLRJEBZYYUQOEDGUPKKENCFOLWCGUMLDVUWKFOEZJRBTYEFMVJDBHMPGMLJZBSABNGFRHVSEZTPDAKCEPELQCFXHYSWQHNLZSJVKIMCBQRXWIHHXIJHNXISDNSHKBZKMOTNMYLCTKRRNNYXHTXRVPDFCELAAXSUWQQGVXEDUIZSWQNAQRXQRNFGUWCDYVPRWSGOPYJ");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("POPQNEGLLTYMDWOEFCSWCRAKJSNHJOAMFYAZ");
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
    msg.setTimeStamp(0.9613558404681791);
    msg.setSource(42335U);
    msg.setSourceEntity(77U);
    msg.setDestination(29147U);
    msg.setDestinationEntity(63U);
    msg.source_man.assign("UKVCYPXEBXKWJDSNVLEFTUUEIDXZYULKKNYMTTNJAOIFVBQWABONMSFQZTWCVDGBNFPUMRQKIUNQPYCJUOBZAUAPBKDSXGSMFPHJOLRRWGEXTXRXVDRGCHIRWYKZJOMYKNEINAWZQCARIMYJOZDQHQWJHOJMALILSRSLRRTYHVUCQEFDMVIGJTJPLFXLLCGCWWSEPEGTQBOCSTBVKDQYZSYZHMLNFHHEGFTAZEB");
    msg.dest_man.assign("EDMQPQBJGUVMJDOGVXHSHPOXDJOORSQTBGGIMSEFUUYIFJKUWYGGCKSEKQFDCMHQNZVFISWLYLBIITGRWCZARIBNCVOUVCANYSXV");
    msg.conditions.assign("KDNQXBMFCSAJSTRQKVAITOETBOIFVWHUEDSJLNIBZJOVWPBPUMFVZAMNHYYEIMKIKYYCRNRHGDWIXOMTJSEPTRLAWQTRSECUFFRHAOBVUDACZJNQZEIUGUGVXGLNAYYOMMESNZDNHJVELFCPTBRWXXXPBTTVUXCZTAZDICOGFSYPXMRXDKPASYGLMDEHNLMWGCFQWDGEPSJAHSHYQGCLXWBHFBCUQZOHKNZWZVILLQORIKOVKBQKJKY");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.9045372233594337;
    tmp_msg_0.v = 0.4189801483179417;
    tmp_msg_0.w = 0.9498313210555752;
    tmp_msg_0.p = 0.25883687247772824;
    tmp_msg_0.q = 0.9452602378146718;
    tmp_msg_0.r = 0.4161734809698916;
    tmp_msg_0.flags = 220U;
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
    msg.setTimeStamp(0.787825388302637);
    msg.setSource(51530U);
    msg.setSourceEntity(165U);
    msg.setDestination(36338U);
    msg.setDestinationEntity(184U);
    msg.command = 227U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QBPRDLKXEEXXIOCKJJOVLGPJPZMDSKNHBPOTEOXOHWZBWNYKRXGK");
    tmp_msg_0.description.assign("NKKUYHCPDYGMZRDJEZQWBPMRNABCQTXIZPXZHNBUJXB");
    tmp_msg_0.vnamespace.assign("GBAWYYODJQNNGJULQZEWNMYZFRZLBHVREDNFLBYQXTQMDCFUIROLNHUBJDTEWPSWCYCSXYFQNNROSYNCFMHAWGXAIBFXOGRHULTMBDZLVVMVPJCZSTGWGJPRORMDEVPWLDZKJUOYIXVUPJMZTCKIICQPRZNLYHE");
    tmp_msg_0.start_man_id.assign("GLSAHUKAZZWJXLWUSRWSYRGGXVRXDRKZBTNNYNECORRRLEFFDZLUOFCMDVRNVPSSNPBMOGGAABUOHQGPMVHNDLEUWJXWJYIXCHABAPHOGPJWICBOWYGVFTHKBKXQQEUZFHMIXIPFESUHZNTMQDKSEMXJPA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("EWIZMMPCBIYPUVS");
    tmp_tmp_msg_0_0.dest_man.assign("UNNUYXBATZPQMCWXCGYAVIGCOQEDKVLQDTSRKPURNQLXRRCFUQACILN");
    tmp_tmp_msg_0_0.conditions.assign("EDQYJTRYVFGRZKWGFJEODIIGEWHVGXOTLNAJTKBAEBVJBUPFXRPONUKPSXQFFDZRWISNIBYVIURBYMBEHWRCHKTINYJZLWETAGLMMVOZCNUCIMELTCAVFJSYTQRZSZFQQCHRFULPQVAKXWLTSDAWPQHJRVM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::ImageTracking tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SoiCommand tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 231U;
    tmp_tmp_msg_0_2.command = 180U;
    tmp_tmp_msg_0_2.settings.assign("DFWPQZOAUZGOZLNYISJIBIIULNHWVZFTOEANFYTNEOJKWHPGLJMQUJGWISIPR");
    IMC::SoiPlan tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.plan_id = 51290U;
    tmp_tmp_msg_0_2.plan.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.info.assign("GAQOCVKJOLALRAJOEKQRLWBIVDVBHRNPFNNASLSUXUUKVPDKRCZKGCHQPXOHXUAUQBXJDYQTZGXQXMAKQGPOSFXHARGJFUNPJPGDDEWZUNHCWPYELLNVZZYKMOJPQDYAMTHTJMYEERJONJKWODTXFMRDFHSWHNNWLBVGSAZICCYEUMDDSTFSTIESXIBYFYCLMZWKEBFWVGFTWTTQPBWI");
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
    msg.setTimeStamp(0.5595998969691479);
    msg.setSource(45519U);
    msg.setSourceEntity(179U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(138U);
    msg.command = 8U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WKKNLJVPBBDXKFSXPUXKNFARWGAAVURLIUZRVKEULMWRLLZYGKUSNODSZPCSROTV");
    tmp_msg_0.description.assign("DCHXNLIZFVXXWVOQPUIPLDMWXLVFNIYFGYSJPCDPZKSUXJHBQZRNADKKUMJLOXORUPTYQQNBTMCQLFZIXADOKIIDEWQLXMVWWYGHIEOETAJ");
    tmp_msg_0.vnamespace.assign("DSUONRGWUUJSSWZYDXGGMXNIUICROBLZGVMEPTHPNWAQLQAEIHEJHJFXDSOBQDSRUKDWIYNHDRVDBYYTPAUYYMXPYGTAKALTHPQKZNOFLETSCAQQPCIGPIXHLAMMBEVDSGFCPPZKAYHB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QSSEIEZJZNSXMDQPHVUKITDASCUBPPLDAITEHP");
    tmp_tmp_msg_0_0.value.assign("SHQXRLHLNFRAISMZSARPODPNFUCEUYMFHQJHWJVBVWBIBDHZEREYLJKODLHNVJOJOWFYINZCNUJCDZWLXQEUVGSPEIZETPXYSOPSDCAOFIMMSZCNSEY");
    tmp_tmp_msg_0_0.type = 60U;
    tmp_tmp_msg_0_0.access = 110U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IVJFZWMJLEOVOTOXBQPEHFBPBSGHLHDHUXEUUGOCYZBPWEAIRTYIAEDZWAIOFTWTZWSZJRGPRULXPWIBXBFNDRKYOYOXPADPLMSXUIEDGSXNPYAEEKERFWJNNCMUFAYKHCXOJAFSZCUKVVQLPDADKCGTUGYVNLRUQTZCQXGLRKZEGGFTIBMICITNNWAINQBJYJRCCVUVMHQXLQKOMZYHHJBSKKONAJRRJFTVBLSTQCMNDSW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VUONEBAHNWPLJQQN");
    tmp_tmp_msg_0_1.dest_man.assign("TAKNXMEKAQSHFCUAHGIFABDHVNUKIZOWHGRPN");
    tmp_tmp_msg_0_1.conditions.assign("GQQZEJVDKZJEXNVTRWSJXGDCFYDPBJQQMIGHGSEJZOVAYNWSKPPLQRAOAUIBPNGDTFZBHMSBMUVWIVDYIDCSIWQJALEYXQCTLJAYGUTUXSARSOXGTPHOAHJMREURGPCTKWOSPEOHOQDCTXDNWPSEYFPJKFKZNBVRGTQVTLMUQBORXDWZLUDNYZALOVHBVA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SadcReadings tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.channel = -31;
    tmp_tmp_msg_0_2.value = -1053860288;
    tmp_tmp_msg_0_2.gain = 237U;
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
    msg.setTimeStamp(0.12882707207609334);
    msg.setSource(34354U);
    msg.setSourceEntity(192U);
    msg.setDestination(50641U);
    msg.setDestinationEntity(77U);
    msg.command = 250U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WZGVYSZDSIZDIDORZJSVWKBBAYNSLXAGYRIKBUSQHCFNZEEQJCJIFBPDELRZAKXCPXVXAUDKKJWEWDTBQCGTNQBOIMJEUCTAKAJNHJWCKVFMAFQPWROUOHNDWNRIBQOERYELDCPGNIDOHPONZUTSVFRSYTMRLWTMYPXLMUWTBXPFSXTLKXQDSPCVMNVJZIOOGTQHMCZ");
    tmp_msg_0.description.assign("PRPVPZUICPVMLQCHJNWKUZTPHDTUCKXFOSJBYIBREBSLCDKZVRRRJUAGAMOFNLHDILURHXOGESAFXOAWCDSMPTEOUZASPAFYTJUAOEQUKNFHXZWGXZGIEVILBEYDMMXKIVBRWZVQKEWHFEDBSYKFBQOCV");
    tmp_msg_0.vnamespace.assign("LDADBGREICMRYGLTSQVWZALKFAQLJABFZYVIAMIELUGFXXWPGPEAQTKRUXNXMXWBJUUKMJXYEROBVFKERMASFVQCNCVAHOZRCWHJZNNIUCNNPJFBSQPNTXX");
    tmp_msg_0.start_man_id.assign("TMXPVNCMXSHZMCVGXROFOFZGJNFBIXTLB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VHOQAJBKJVIWVAMLPRQHTEYWTA");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 42660U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("FCKEAYHUPMQTTKWNOLYRWWBUIFHCCOKDGKUYHUZBNJRNGGHMADYNBIMFIZLDAXBCMJACYQ");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ECFSPKURCFXJURWEIHSDZYNMTUOVNWUYYTWOQUQGERHBLKGVQWRHCBONLJOFUBSSPMTCJLGZAAAXLLMHNSFDGSCRTYZXGEXJAODKHDGAVMANNSQBYQGHEOKLKLBPIIWXOWXBTNDFQOKCTQDBSJPWVIZ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GRCGVMLRBFPOVLMQSJRUYKANKHMZJSSDOIPIJMBSZFKJQQHZUOZGZXSKSQUFVOAFITPDTCYBTNUFAXFXEWNWNPDEDAQHAKNQEJDLIYCTCCSNIIWIUTYAVWRRMJAGPQAOEVWQ");
    tmp_tmp_msg_0_1.dest_man.assign("LOSXZIZFVWHNKMHZKQNSKHWIQNQGGVZOSFXZJPYHDMZWSRMDMJGAEZBLGPVFQGYAYFXTVKWJWTRTOIEIWTUNLAVOHLBJPHBYPUPHIJUCHLPXLNCAYOVHIQVPPNBRMUEXSSCKRTFSJMWBKCRRMSZMAGVRUPVZA");
    tmp_tmp_msg_0_1.conditions.assign("JTXRKIBVFZNYJZFKPWLVDTODQUMWLNMFIKFYQOUXRUA");
    IMC::IndicatedSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.37883820406696844;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeading tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.5928927958176337;
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
    msg.setTimeStamp(0.7507261852080522);
    msg.setSource(8445U);
    msg.setSourceEntity(13U);
    msg.setDestination(32860U);
    msg.setDestinationEntity(121U);
    msg.state = 251U;
    msg.plan_id.assign("QOZHIZJVGDXZXDRCCVFXISYLYINYZZORGHUBEBTWPPIYVCVODZVBMDFYCTMQINWOKPZIZAEFVAXPAMWWAWWIWCITGFCIGUEUKNRVQHPLABEGARAYTDMKWHLFNDJFYNSJEIRUNRKOHGVXDLOCFFMYMMETRDSTKHQCGLQKGHOSJVSRJPNJQJESAHPD");
    msg.comm_level = 173U;

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
    msg.setTimeStamp(0.3150992715219971);
    msg.setSource(12783U);
    msg.setSourceEntity(239U);
    msg.setDestination(14854U);
    msg.setDestinationEntity(48U);
    msg.state = 58U;
    msg.plan_id.assign("HDZOCPWFZIZDOUQPELCSSTUHSWAWLZHBFWOKSQMCZCUOIBNV");
    msg.comm_level = 45U;

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
    msg.setTimeStamp(0.5886380983749515);
    msg.setSource(29544U);
    msg.setSourceEntity(58U);
    msg.setDestination(53330U);
    msg.setDestinationEntity(165U);
    msg.state = 52U;
    msg.plan_id.assign("UJTAVIMTAKLIBYITLSGNZPUKYHSZMBUKZUTCEFMPXWOSXGECKLAVASXORRHCDTOWCOURXNLGRSMTACLGJNVZJWIHABHFEQRYPMQDDYAFFBVPXENMRHWLZEJXZJSYUIEBILPKLSOEVXTKUWLTWDYBCCHWDTUGUQXAJ");
    msg.comm_level = 204U;

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
    msg.setTimeStamp(0.14275566473308543);
    msg.setSource(44149U);
    msg.setSourceEntity(224U);
    msg.setDestination(38201U);
    msg.setDestinationEntity(133U);
    msg.type = 221U;
    msg.op = 113U;
    msg.request_id = 1626U;
    msg.plan_id.assign("LFTYSCVNEXRAXDKWWIQGPZMVXNPCRIREZTJYTJIHIYPGQGAJLNDLBFHGYPTOASWXHWTPANZPFKXBBHNSURDZRZKLBPVULKIQYSDQUQDQRMGGSCTWFDJOEXJCYBCIGAKRFAOEYMQECOZNRHXACBVBZMFUWVOMUAONDABHKCDDOFELUTKRVZVIEEPQVKWYRPOKSJLFKUQHSMUZGTJOEVMSVFMCLIIFJSQBUHMNYZWYNAWTTPUXXBXJGO");
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.9624838729448753;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VPLTCLFHCSZGXXDJTFRDAPBQRUKKUGCINOPRLPWOYFRDZZAUERVDWRIQFKYWYJYNAMWVAAOYBWZVAEOQUAXHOMQQJTUGHGPYSTOKKHCPMZHPTBAQGEVWKXVTINLJFSVLYXEGXRIBPKATIBBXDNGRQBKIFFEIQFTUCSNEYSBHNSIMXEVNGGJTHDCOUPXIWIPLFWZSMZDUNHLJSEKOLDJMVJYSUVHRDYTCQZXMOHNMENLWBJE");

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
    msg.setTimeStamp(0.15654893433445072);
    msg.setSource(29172U);
    msg.setSourceEntity(143U);
    msg.setDestination(17268U);
    msg.setDestinationEntity(221U);
    msg.type = 86U;
    msg.op = 8U;
    msg.request_id = 38426U;
    msg.plan_id.assign("PVMVXGTOZKFYWOGILXSXIHXZMFTGJTWSZCIIVUTNLSX");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 62U;
    tmp_msg_0.numsamples = 250U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 50277U;
    tmp_tmp_msg_0_0.avg = 0.9862525082984647;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.5836657315542089;
    tmp_msg_0.lon = 0.870720136236973;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LJRKBPQJJUYZ");

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
    msg.setTimeStamp(0.548858304700025);
    msg.setSource(60805U);
    msg.setSourceEntity(213U);
    msg.setDestination(25780U);
    msg.setDestinationEntity(248U);
    msg.type = 184U;
    msg.op = 83U;
    msg.request_id = 20671U;
    msg.plan_id.assign("IYQMJGFLATGMSHXITTFFSFCIRGMMUYDSMKXJGROQBQWWFXUKPWAUAGEVJEHVRRPIFKJIQLIAJBXLCTEEOBCYPLKDXGUUYBINESBHRWXBHAZVOUZOMAISNCDGOPUHKMQQTSYXVITDTYZCNDE");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.6737322454891789;
    tmp_msg_0.speed = 0.08702762783284324;
    tmp_msg_0.turbulence = 0.38643276466166676;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QJQTDUREMRBTXWETCRXXBIXSTARJCJPOGCBIQUHRMTUDDISIZTPEWBWKTNVV");

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
    msg.setTimeStamp(0.39843952078932543);
    msg.setSource(33287U);
    msg.setSourceEntity(228U);
    msg.setDestination(56605U);
    msg.setDestinationEntity(124U);
    msg.plan_count = 65021U;
    msg.plan_size = 3917018584U;
    msg.change_time = 0.3432064729651475;
    msg.change_sid = 44355U;
    msg.change_sname.assign("ODNEHWGZYIEBAAYXOYJTZMWGYMQRRPOJPITZALVMDZHUWENQFUFCTDQSWENXAGPYMXUEFINVBUZBSEIFLCTNHVQRNHPCLMAFOVHNBLZSRCETRILXWFVVJCNSHPFOQUSZIREIIXGMNSZQFQXOMHDJMAHZWUGVAS");
    const signed char tmp_msg_0[] = {-36, -60, 15, 55, -106, -115, -105, 0, 84, -57, 124, -87, -65, 87, 100, 42, 88, 38, -123, 72, 95, -98, 126, -96, 50, 87, -11, -75, -29, 88, 97, -20, -59, -128, -42, 117, -34, -115, -1, 20, -70, 16, 117, -61, 102, -63, -114, 49, -106, -39, -34, -91, 70, 4, 94, 2, -64, 95, -59, 106, -50, -41, -99, 80, 15, 24, 37, 91, 80, -17, 16, -48, 109, -92};
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
    msg.setTimeStamp(0.2995918897398503);
    msg.setSource(9465U);
    msg.setSourceEntity(97U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(194U);
    msg.plan_count = 64319U;
    msg.plan_size = 3697875004U;
    msg.change_time = 0.03495438594607536;
    msg.change_sid = 43295U;
    msg.change_sname.assign("PVGICUFTKJFQTJSTUZJPEGTDLUDWMPAJWSLHSRHGFPOEEVFGKTXONLNBZGEIDWXEJMOXFEKMPQVTUMOZEHXWRUBAASIBURPFLJEAMAHOVWXAZKXHYTCVJLLFIUQQOXKYVTBCOYPFYNGOBHZCCRZRNUWIGLSKPJKIRJDXDBWSSDIKRPBROMEZYWQZLDNQJHZWDAQSCYBKFADUHQBSVEQCIZLCYSNNRMXM");
    const signed char tmp_msg_0[] = {88, 16, 11, -16, 77, 85, 65, -8, 103, 115, 75, 55, -17, 47, 83, -17, -2, 17, 20, -42, 33, -14, -106, -7, 7, 21, 68, 55, -75, 98, -23, 53, -64, -28, 9, -39, 98, -38, -23, -67, -59, -34, 89, 43, -79, -34, 40, -87, -83, -59, -92, 91, 21, -45, -19, 88, 10, -94, 126, 67, -16, -106, -13, 35, -105, 63, -93, 70, 94, 76, 62, -29, -7, 95, 123, -42, 29, -80, 35, -7, 29, 93, -124, -27, 47, 69, -127, 12, -121, -35, -42, 44, 68, -100, 73, -47, -67, 42, 33, 10, -96, -119, -43, 98, 29, -47, 64, -34, 34, 90, -119, -73, -110, 30, 34, -90, -4, 92, 65, 41, -107, -27, 11, 91, 124, -3, -84, -40, -39};
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
    msg.setTimeStamp(0.6595990385182802);
    msg.setSource(33397U);
    msg.setSourceEntity(254U);
    msg.setDestination(8269U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 55027U;
    msg.plan_size = 3133708388U;
    msg.change_time = 0.7197850722368834;
    msg.change_sid = 38010U;
    msg.change_sname.assign("IAQVWNTZSKXUCZQDPUARZEOVBXLXJIJBZNKJGSDAUVPOOGEQNHVPJMIQASDOHQNYTWZMVCBSCCHITILPETHOKXAUFOTAZMLZCKLTENIRGZSEOPUMNSBRKGVJWHEXFTPTWMERQWAWBJMCEWFCLFUBAHILAYDVTBFVYFGVYOAUILUUJXKJRFBRJVHWIRXHCPYXGCTKFCGMLODXZSMNX");
    const signed char tmp_msg_0[] = {12, -117, -64, -45, 96, -94, -108, 8, -27, 8, 60, 44, -113, 4, 14, 80, 65, 89, -81, -52, -81, -78, -11, 11, -28, -4, -87, 91, -62, 10, -54, 31, -83, -114, -79, -94, -42, -3, 73, -97, 27, 57, 99, 84, -51, 126, -36, -111, -82, 116, -12, 62, -13, 114, -96, -75, 60, 97, -19, -5, 96, -39, 10, 111, -95, 126, -66, 41, -35, 108, -101, 66, 72, 66, -55, -76, -85, -39, 93, 75, -69, 33, 124, 90, 7, 115, 1, -47, 121, 91, -126, 65, -98, 112, 118, -115, 106, -125, 120, -61, 9, -25, 58, -79, 73, -62, -56, 11, 91, 38, -31, -101, -75, 3, 107, -127, -106, -74, 65, -101, -71, -41, -105, -112, -10, -120, -17, 37, -96, 19, 28, -86, 39, -47, -30, -118, -82, 30, -69, -27, -6, -93, 77, -121, 34, 61, 113, 20, -96, 121, -76, 54, -28, 29, -119, -119, -63, -119, -93, 62, 6, -48, -124, 5, -18, -38, -13, -10, 7, 62, 49, -107, -80, 70, 63, 124, -123, 65, 7, 31, -108, -43, -87, -117, -89, -60, 62, 41, -111, -94, 63, 11, -7, 70, -2, -41, 0, 25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QYSWLKVWXVLHECSKWUPOPYJUVTREBOMQRBICRMCMWWJLIGZSZOIHZZHGWCJYGSOGTCEQAPARPDBNGUSXTDKUTKLNXRMFEWWYQINKVPRFCNBZIUGLPQDOAQNCFFVMPVXVDHUCIYEYKNYSOFIWJCFVVZNAEXNLRJOUBTZBTZYPAXLSTLDCTHKTMJBVAGXFJNSEXDLGUWBPQXDORNEQID");
    tmp_msg_1.plan_size = 65264U;
    tmp_msg_1.change_time = 0.14681019569444853;
    tmp_msg_1.change_sid = 32164U;
    tmp_msg_1.change_sname.assign("YZUXRLMNCYBRDMTPWPQ");
    const signed char tmp_tmp_msg_1_0[] = {-24, 121, 4, 66, 84, -80, 112, -65, 53, 19, 66, 54, 43, -26, -47, -17, -85, -27, -68, -1, -24, 105, 102, -27, 15, -116, 33, -54, -75, 117, -98, -31, -29, 116, 14, -1, 94, 53, 30, 30, 88, -88, 51, 107, -3, -109, -109, 113, 55, 64, 7, 94, -99, 34, 9, 22, -27, 75, 79, 82, 69, 75, 126, 21, 23, -128, 74};
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
    msg.setTimeStamp(0.5798059835913237);
    msg.setSource(56427U);
    msg.setSourceEntity(77U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("WBPORIEWSMHJQATGPFYDYIHSNBZUQATTFUWSPHOFVKHCKBBQZZRLADIXXVUJXHSMLUQTSMAHKIXMJTNQDZBRSPIOQCEFGQQLFSCGXMNVVPWHAYEIALSSLOXVQMMCWGGV");
    msg.plan_size = 63701U;
    msg.change_time = 0.9172252086758402;
    msg.change_sid = 49407U;
    msg.change_sname.assign("UYJRQFXTYATPBVLCRBTETCXQMUFUTPFHKYHJNRTOAILBMPODELYFYXJZMGUOFQEHYQUGXISKALODOJIPWXCYBEDNLHUZKNHBUUWSNMUSVHZLPZKZTPZXTKD");
    const signed char tmp_msg_0[] = {-57, 76, -48, 41, 30, -20, -112, 56, -76, -19, -71, 91, 81, 118, -116, -96, 65, -58, 8, 40, -105, -100, -47, 38, 83, -127, 105, -15, -73, 102, -107, 18, -49};
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
    msg.setTimeStamp(0.9646277585038406);
    msg.setSource(4191U);
    msg.setSourceEntity(154U);
    msg.setDestination(56343U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("SXCFHJFLVYMZSWXQZUTVXZSGETVNTRNDYCPMYLSQECQHYGCCMJBRUOOUPYKBTZIXNIVIQGCPRJGBRUFBFQJWFZHEUJJPHKJKIPAQHPGERAIUHDGCKDKRLDXXAPYR");
    msg.plan_size = 11497U;
    msg.change_time = 0.42113492066532265;
    msg.change_sid = 62590U;
    msg.change_sname.assign("IUNSOPECQGKQNFUIBRSATOLJBPIHGFPFWHDXQQFXAFEZZEWUFPYHTZICBXATOVGTPLDAIOMCCHYJFVSMDXOYYRTRZVMDEYLEAMCZNMWRPVJDOAQHFEMSJXNOMPHCRRBXUQUYEVOBCKUQIJVWTKTDNRJGLCOWGGUMBRXLEPSNKQGXPJLMHGSWLLBWXZCHYVZ");
    const signed char tmp_msg_0[] = {-74, 122, -76, 100, -83, 31, 31, -61, -55, -35, -83, 20, -101, 28, 65, -32, 6, -96, 88, 84, -125, -88, -93, 102, 113, 110, 27, -84, 90, 55, 104, 109, 97, -27, 119, -75, 53, 37, -75, 24, 100, 31, -112, 44, -46, -47, -50, -20, -34, 36, -126, -49, -41, 124, -93, -114, -25, 61, 78, 34, 7, -110, 118, -37, -30, -19, 58, 99, -93, -124, -41, -82};
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
    msg.setTimeStamp(0.04400283339549915);
    msg.setSource(16634U);
    msg.setSourceEntity(207U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("QYGZLQWITYNAKOIPGIYKZQNRJFHRPATMZHXAESHXTUQKWDZBSUKWYFBIMFLONBWMGQBPVMLRRVLBABJJYDPCBCMLYNTKZNUJDWSLTEHOZVWTXNQJFDSDJVPIULOUMDDZPNVUKFNCIOAFXBEEJRXKBQVGHYTBJEPMDOIJSCEOHPXDUAJRLXVQPYMYESCVEOAXIGGVPNIFKWXFRHGTRMCGIUFTCANCLHESSSQVOUZRLKWSCWTRXZWGYOHH");
    msg.plan_size = 5170U;
    msg.change_time = 0.463800194238674;
    msg.change_sid = 29132U;
    msg.change_sname.assign("XYHNHGZWDSXRACLKOQAVPNKRPKFBXJRRYRGBTCIAREPY");
    const signed char tmp_msg_0[] = {72, -21, -111, 112, -52, -115, -93, -62, 102, -111, -18, 36, -32, 105, -126, 26, 103, 40, 100, -39, -70, -104, 17, -126, 97, -64, 85, 9, -79, -68, 40, 9, -70, -8, 1, 92, -72, 51, -128, -111, 95, -33, -37, 69, -81, 118, -112, 4, -68, 117, -43, -61, 62, 94, -7, -23, 100, -33, -115, -43, -89, -109, -38, 34, 91, -95, -126, -39, 117, 94, 59, -85, -15, 22, -23, 78, -118, 47, 1, 61, -73, 9, -71, 69, -94, 117, 78, 16, 62, 38, -17, -40, 59, 93, -88, 71, 119, -100, -10, 2, -77, 18, 69, -109, -46, 16, 33, 22, -23, 71, 30};
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
    msg.setTimeStamp(0.3439642714894019);
    msg.setSource(51954U);
    msg.setSourceEntity(18U);
    msg.setDestination(48851U);
    msg.setDestinationEntity(139U);
    msg.type = 156U;
    msg.op = 217U;
    msg.request_id = 24668U;
    msg.plan_id.assign("VJRDQIPYUGLQULRKORDTHJHLALSWYHWZORFDBUTEFXBOGPUKFGXXLAH");
    msg.flags = 20926U;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 231U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TPTARLRNFTPHPNNNRZDDSQKFAOIDYLRUZNTJEFIXXBHGYCFGFRQBFZJVAKTMJYLILKLMWTXHGCTEXIVAJTIL");

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
    msg.setTimeStamp(0.6989722009675787);
    msg.setSource(2245U);
    msg.setSourceEntity(1U);
    msg.setDestination(15454U);
    msg.setDestinationEntity(240U);
    msg.type = 177U;
    msg.op = 74U;
    msg.request_id = 41679U;
    msg.plan_id.assign("KWVEQHRLMUWHDYFCHQHQKBZNDWSEHIAMBOCQZJOPGAGUSSXLDKMOPNTTJPWJPLRVSHMUQQFGATBIFXBVXAKIBFMRLCMXTDFRAIXXJEBJOHPUGPQABRGETIUOJFOVNGLNAEVACUWWGLWBVJGEQNHPVLYAWZMJOOBOGJZHCKBTXKCXFDESPTXYKXRJWIVYRFKSVUTNTYZCZKZMNDSDPEKPYWCLDNILHGZVFIDIUQYCDYMRRELY");
    msg.flags = 65422U;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 236U;
    tmp_msg_0.numsamples = 70U;
    tmp_msg_0.lat = 0.5490352116528998;
    tmp_msg_0.lon = 0.6560421167995157;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OVWIHWLJNIMDPELEYIWYIGLCXPTUUETMJOHUQFDLJYDOQZSCWJUCKTVOYMZZZCCYLFOHOAEVSAFLAJTOJTE");

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
    msg.setTimeStamp(0.46956982494852106);
    msg.setSource(47937U);
    msg.setSourceEntity(161U);
    msg.setDestination(21157U);
    msg.setDestinationEntity(103U);
    msg.type = 243U;
    msg.op = 219U;
    msg.request_id = 47505U;
    msg.plan_id.assign("PQPFYLVHXLSWIWHLXAHGKTWJTLGDBASCFXSLKSSIUVJKMNYVQOTRKWTNBAXEPAWCVFJVBTUHZMWKJMRPMNPIRKTCOFNDTEDFFHDROOCDLEMXEIZUCJBFTCPLOKAQGIOT");
    msg.flags = 21049U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.2819466117247913;
    tmp_msg_0.lon = 0.8782376311303706;
    tmp_msg_0.depth = 142U;
    tmp_msg_0.speed = 0.9935712310392112;
    tmp_msg_0.psi = 0.18207343509161966;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RMZJQQLPIJLZMQGXDVNBOWJFQIBBFFNTKDYHMBXCAGN");

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
    msg.setTimeStamp(0.265385056179432);
    msg.setSource(52994U);
    msg.setSourceEntity(228U);
    msg.setDestination(51345U);
    msg.setDestinationEntity(12U);
    msg.state = 185U;
    msg.plan_id.assign("QZTESTKKGLDCHIWCPYINNZRKJUBQHEUHVKHYRXUCOLTVMMIRFEZQPWVFLGKQQVBGWHGNIPDLAGMITGMNSKHVBUWAUYTKAOOYFMCDTUCNTRLTZZPCYOMQJZARJPOIVHBNJORMXGHDDQTPWLOZFGSWXSZODUYXJWECRAOLLFEUBVKCCJPXAJHAQTCMYDHWKELPAMSR");
    msg.plan_eta = -1404182072;
    msg.plan_progress = 0.45411616666168886;
    msg.man_id.assign("JRWIASGPSEJREANJMNFSINBVPYEKXOZMNOICCZGHHELWUURJOPULFTJYQOEQVAGWRSPAVL");
    msg.man_type = 20738U;
    msg.man_eta = 2123413347;
    msg.last_outcome = 176U;

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
    msg.setTimeStamp(0.1636245749883758);
    msg.setSource(31603U);
    msg.setSourceEntity(189U);
    msg.setDestination(6061U);
    msg.setDestinationEntity(24U);
    msg.state = 59U;
    msg.plan_id.assign("TWPFEZRVLTULDVNCFCTJGYXR");
    msg.plan_eta = 317692620;
    msg.plan_progress = 0.3296653338141645;
    msg.man_id.assign("DGLSSLMDVJWJOFPZQZUSP");
    msg.man_type = 22495U;
    msg.man_eta = 416135587;
    msg.last_outcome = 36U;

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
    msg.setTimeStamp(0.4532182247174116);
    msg.setSource(9295U);
    msg.setSourceEntity(120U);
    msg.setDestination(23430U);
    msg.setDestinationEntity(81U);
    msg.state = 187U;
    msg.plan_id.assign("IGMZTGPPBBOEQMNEBFUCFLQVJJYIUTYDTLFZCOPVWULWNFYHADQTJWFGCMDNTJCIZZGHSGKQVTHMRGTXKIVMCDXFARRYWSYCRABNYJVSHXULREKPOMKUICARTZHGJYXSDQACIVEUIPLBNYKDKPSXJWMKKGAMUGEAEFBVFBRZLWA");
    msg.plan_eta = -276541946;
    msg.plan_progress = 0.6975577672214871;
    msg.man_id.assign("RFVGJGORIHPDXPDFWOMXGCILEFMFBQMYKDISBXJHLSJFNYAEUUBLDXATQTIQKBWAPVPNGFCKEGXRFKJFZIBCSMOOTSWLULCUYFDPVOOURNR");
    msg.man_type = 40588U;
    msg.man_eta = -897622294;
    msg.last_outcome = 181U;

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
    msg.setTimeStamp(0.14983773922120358);
    msg.setSource(706U);
    msg.setSourceEntity(149U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(252U);
    msg.name.assign("NIYDJZSROWEAUIWAIHPFSCUFIOEQBWVFLFUECGJOTIXUNWIBKHFOJXWPXRGJGQXYADPYPOYJGOBMPWWSKHMZQXXSSAKHNRVNANZNZCUBXTQAHCRKDDNRCSZEFDQYTPUGKQMPMU");
    msg.value.assign("ZRDBGPSCACVWKYCSTSOUZUJWBJIVENUTVIOUKBAVIDSNHYLFQOBDNFDSCLERCELAKXTVUPXOEYGKYZEDHPWEOAQUSCPXWWCTJOFLLPXQUWIQSLTODQFMYQQGFNDASXVHFXHRGERHBRBZXVNIJBHMOJYLHWIBALRBUATPKSXFFTQYXQEJNUKWAYRCVXSMZNMWHJIMTUNJ");
    msg.type = 132U;
    msg.access = 189U;

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
    msg.setTimeStamp(0.3436155659175075);
    msg.setSource(45237U);
    msg.setSourceEntity(59U);
    msg.setDestination(60578U);
    msg.setDestinationEntity(126U);
    msg.name.assign("AVHUKBSQJYSEHHBHUZVWUQATMQLOXNEMLXKUNLRYIFWOJBHWBTOFCKGZUVOIMIEAEPXTMKCPRGDOCCJVYZFRDIDONZEFYRJHAETVZLCXLPFIQNOMDKXUSDCPLGDFGZGQOPVWYNRDLSBIRWSJQGZYQPIFAYTSKJDIXPKDHLBFMEQHGPHVGQXFLYJGWXRBATHT");
    msg.value.assign("GIFJUBXZBELTUJUMVPYJNTKWLMEEPKACJUJUVZGAGQZVJILMGUMKHFKGTFKXOHDFOUISOCYVLRNGDHKLDEWRSGRSHODMOCKHREBRAWIZQXIOTEPZPNZTYIFHZESGLCRBXYNPVTSNUBVQTWHGPFHQSXUEASMYSVDBTJXFQXODWTFWICYWLWPNLCOLWA");
    msg.type = 38U;
    msg.access = 128U;

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
    msg.setTimeStamp(0.7951882896856501);
    msg.setSource(36137U);
    msg.setSourceEntity(246U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(208U);
    msg.name.assign("LXMIYKUESBYEWHKRWTIPHWXYAJFNUSBWDEFXQZDUXUJYAMCGRFKTHAQAUOPDRVUKDRQTKEIYMGQPGEXNCVHFVTZNFVNYDEPARVTNALROMYKBVLQQNWKZWXSJAFIJQF");
    msg.value.assign("VGPDDELBXLMDRSWERWFEPGNZFTKHZJEAHSEFIBKKTFGSBBUBXNPAPOIZULCYDDXPJGOUBPWUXJSCMMEKPNGZSFTKHALGIIAHOGYYMRIKMQTXFTVQNMJJIFODCMZAPNVFTYLGJDWETUKCLBPXLRVWJVMW");
    msg.type = 37U;
    msg.access = 168U;

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
    msg.setTimeStamp(0.8522907782604418);
    msg.setSource(46223U);
    msg.setSourceEntity(251U);
    msg.setDestination(23473U);
    msg.setDestinationEntity(200U);
    msg.cmd = 13U;
    msg.op = 209U;
    msg.plan_id.assign("KEULALBDNMGLH");
    msg.params.assign("HYNSNJFYAZSBPDUKLRSSLGDRYAWHUJMLOYZUNPVIARPQCOFTGSGWESPECDUVLWTWWFTDUISOMBKYNTZDGFJUCYMZQHCPILUVEHMDKDKQXGQYREIEFQJJZCJFTZEYAWNNVYMVBPJPHLGLEDIATSVAQDKAUARHMHQIPQSP");

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
    msg.setTimeStamp(0.6749514549179849);
    msg.setSource(57764U);
    msg.setSourceEntity(98U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(119U);
    msg.cmd = 116U;
    msg.op = 133U;
    msg.plan_id.assign("AFHECWIXHQRXECWTOYKLGNKOKJQOWUNAGYSIBHWMAVMNLBHMUWEFJTBQZVXWJFWJOKEZTYXNQNFUEGYPSGXUCDLBMRDFOOHASAGZZKJZKTNPLXQXIYQACEDVDLBEFSKFUUBEHOGRIMMLGJJWFPZGJECTSVBGUQCYMQQHIDRXITOGKDVDSRIPHNMSDTJZZVPZDOUKWRYDJPVIFVRYBBNLCPKACATVAVHLNP");
    msg.params.assign("VEGOUYZBRJMBXYVWDQGSQQCKLOFNSQJPGSATODEZLZDIVXIQAEXLZBFEYLYOGTCHWITOFXWMDJVWYOBPFZQWCZPUZZUCGNHHIYJEFSGRZLUKAJUUTIQUWTTEBFFMQFMCDYHIWWJSOUDHUKPGSYEDRAIHVNTPBRKNNPXLXZCPMMQDNKEOIIYTJJDLMVHSCRSLIOKAS");

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
    msg.setTimeStamp(0.5090243403746343);
    msg.setSource(8612U);
    msg.setSourceEntity(155U);
    msg.setDestination(54166U);
    msg.setDestinationEntity(14U);
    msg.cmd = 18U;
    msg.op = 242U;
    msg.plan_id.assign("WXRZDVPAEJZEMTCTESDVJUTXRRYMTAHSHSDWQLSBYHXUDABFFCVPQNKVQMCYRRFJBZMGRICNHQZLWLOZEWOQHEAKRAHPUGJOYDGBTLOWHGJSGXKBXDRWVMNSONXHSTDCBUAILAWTIGVYEMZAUNJ");
    msg.params.assign("XKQHKIOZWOKSURJHVVNIHTQYJMFYAPRWQYRUGLNIMCBUIOTSDQYAWGGVWJZKCOAPCPUDEFQSFEPOZDGJDGAYGSULXFNXUWZXGNRWIXLYTJDPURZFADQVHFWNNLZBNCVTMGEFTMEJMCCKWWUNRGETBRAUJCZTDEVONCBLRKL");

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
    msg.setTimeStamp(0.562249064606256);
    msg.setSource(10363U);
    msg.setSourceEntity(177U);
    msg.setDestination(63887U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("ZZNACKVBXYAALWYSBVGZICWGJPIRCEVNRKBWSVAYJCHVSANTYKJHLNUWWSMFDUCQGWNBWMTKPAHGJDL");
    msg.op = 195U;
    msg.lat = 0.26396759895606414;
    msg.lon = 0.9595133222714168;
    msg.height = 0.8768410948778914;
    msg.x = 0.5407585913022267;
    msg.y = 0.9553010975324181;
    msg.z = 0.3179784182279435;
    msg.phi = 0.5147873296084534;
    msg.theta = 0.43623857534819854;
    msg.psi = 0.338950529716313;
    msg.vx = 0.6730667145392601;
    msg.vy = 0.9003523091585057;
    msg.vz = 0.1357576819245504;
    msg.p = 0.5930283473768964;
    msg.q = 0.08328396789364412;
    msg.r = 0.6528129575319442;
    msg.svx = 0.6991080471673755;
    msg.svy = 0.10462821867569572;
    msg.svz = 0.2482352029843743;

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
    msg.setTimeStamp(0.9343352304826963);
    msg.setSource(44023U);
    msg.setSourceEntity(224U);
    msg.setDestination(19522U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("FCZDHJCGCNAKAOUHVVLLYZAMCECMTPYUIEFQHFILLBDXUPGYKJXLYFUESGGFXQEVLTWSPSPXABGDVLAMMIQXKTMOOIDROTUGPKQQJEXIRRNJCOJWNTZQZAIKDFRMTYQXWRHVDHCAPWYJPVKJLFMWXQURKFJRASSKZYONZOMSTCGJNDWOPSKWCZB");
    msg.op = 43U;
    msg.lat = 0.18390551699864877;
    msg.lon = 0.5677765575295587;
    msg.height = 0.778898059001787;
    msg.x = 0.6961251023480785;
    msg.y = 0.7294616874505494;
    msg.z = 0.21415945788664437;
    msg.phi = 0.6981582669998428;
    msg.theta = 0.36509452818772137;
    msg.psi = 0.13325684127092063;
    msg.vx = 0.338026697698388;
    msg.vy = 0.6205674199779486;
    msg.vz = 0.8246246787123834;
    msg.p = 0.9270303547061263;
    msg.q = 0.954728108745994;
    msg.r = 0.39280110876215746;
    msg.svx = 0.9655758621617407;
    msg.svy = 0.3404960376816337;
    msg.svz = 0.44288899694136064;

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
    msg.setTimeStamp(0.9559351611703396);
    msg.setSource(64290U);
    msg.setSourceEntity(125U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("YQEVOPIGYYLWESYCBELYNHSJGPIEMCQMIJTLZTXZMJKMOIARIUCAUWTAGSPPYDIFREQXOITXDAUQVIHHFMAFUSVOQHRB");
    msg.op = 208U;
    msg.lat = 0.1927028941636203;
    msg.lon = 0.941608909001328;
    msg.height = 0.43985112489973766;
    msg.x = 0.5013541930447516;
    msg.y = 0.4993254501935147;
    msg.z = 0.09188679218795404;
    msg.phi = 0.4844488373076652;
    msg.theta = 0.7103404102708015;
    msg.psi = 0.6609288491501039;
    msg.vx = 0.8734841921714338;
    msg.vy = 0.2772324693022664;
    msg.vz = 0.5438262080715013;
    msg.p = 0.9128564579615479;
    msg.q = 0.5003062520150673;
    msg.r = 0.7477582041436152;
    msg.svx = 0.4824313557297776;
    msg.svy = 0.3112657575529074;
    msg.svz = 0.6916950484668974;

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
    msg.setTimeStamp(0.6029375592524444);
    msg.setSource(55424U);
    msg.setSourceEntity(177U);
    msg.setDestination(14313U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("TEVYSWPXWJU");
    msg.type = 113U;
    msg.properties = 115U;
    msg.durations.assign("KPGBTJALTUARINXNJNHDYENDUJFETQOXKLSZDSFKEWWFEHOSIQMHOHZAGVWREZYWCKCNM");
    msg.distances.assign("JJRXDZEHEBOJJHABJTPIUNNHFITKDYVHTUNGFTDZWYOEZRJOGSXSQPPLEVKULNWWHWYIUTHCDMYFPAFKDFOCVLFSTIUOTJIAGKVWMHTQBABNKKZLEQCCQBOOTNZOGDJMSLXIYZPXHUGLFRRUXASWGJPSXRUPEE");
    msg.actions.assign("DQQDFSMTBOBOCANISNISFMXEBUAWHRVCKPLEBXWFQKBZNUOLGJKIVVYOJIGTIFSWYBHZYYGSCVPHPQUZDQJFDHTCBOADQYOWHSZLPEECXTEMFMMSRNTUZXHUZRWVSQNRENBYMOTBMDE");
    msg.fuel.assign("TJMNNWYXVHYKLOBINIXMTZQZYXGWZWYZTLHRMPBLHIBJHMVLWQFLDDZPHTKNGIGRFKSKOUEFVDEGULFJMPBTMVSIXHERSPYFESROOZQQZGANVUOCLPETGAWACDKNNTQNRFBKDUTBEFWYQNVIXRJZDJOYOSTJUMBCBVCHYXUJCQAQPPCXGPYPVA");

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
    msg.setTimeStamp(0.8281701841707493);
    msg.setSource(24836U);
    msg.setSourceEntity(192U);
    msg.setDestination(46171U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("ZVJGZGYBBYZWJSFBSCTKMVLDXEAZRQSEURHTDNJPKAXNYGWLUMBQSODDETNRNUMVPIGHVOZBSWNKXCRFXPAYUZGEFVJITWMTPLTCFIAFAJBVOCHGJULQZUYGAPQBEQNGOHWARWXQZSEQAVSBCTGEOCMKDNOWYIHJKATPIDEHSKVOLELIXDCAWYLIZLGHRUBYDM");
    msg.type = 214U;
    msg.properties = 104U;
    msg.durations.assign("WSDHULDFOQUDCFRUBHAEMPCZTCTZWIVRWMNZTFRRRISHRIEPVEOMNSEOLQZKBBDCAQQXVADJVSLYNCGPCMVAEHKRUVLFOAKBSFSPYTIHFIHLJVAYDLWDELUEUFGOTYJIPVRUT");
    msg.distances.assign("EHYHKYUBDFFKFQBQJCMMLSIRDEVBRYZJKYZJVEVVWLXGNXAZPWXTFQBWETXKLMPSYGRGTCOZYNWUFFHNXLJMWPHUJOPTKOQTABWNPMS");
    msg.actions.assign("YUEZFBPGMQSPRPNHXAJAKIIVUIKYHNUFWPERJYCZCGLDLFXIGMEXOPAZJRMMHSFZMVPNXSXTBDYVCMBNRCBDHMYQLYMNRSJIFOYFTWWZIDXEWWHBIAUXKSFAREUKGHBPFFCFSCTTLLUONJGBAQLHLNVQQKHDLAGEDNKEMUZZAOJCJYRTISADCRKMRUDLXGCQ");
    msg.fuel.assign("VAMHIGSORVXPLPIQWNUBPQRRFFVJBSNPQQXOCNYRJUPPTRFVGKNETEEPGJSGUBYKSWCGHONWEHIKCDMKFDLCKZVENWLQCUSULYZRUJAUDXOLIKJNXRFTAFBEBUL");

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
    msg.setTimeStamp(0.0763372642542065);
    msg.setSource(4886U);
    msg.setSourceEntity(51U);
    msg.setDestination(4391U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("ZJMOEYHEXWVDRBIRKKPFAQWXWEONZYAJCIVUJTTMUPPCJWZDGNOAKPPFOSCOKGAYBYTRFFKBRRFAVCRKUPVFHNJEZQHCLKSSFRIQJBIWMSIWWWAOALGLWEFGRHBOGXVHNOA");
    msg.type = 243U;
    msg.properties = 136U;
    msg.durations.assign("HBWAEWVGNJWEULCHDYVJBFAYNXUEGNOXDIRSRKCNWLYCIYZDSWVPPGIYFTRFPOMHGTQFBNEUZKUYHTPUJVBYGNVTIQJXMHWBJBOGBXQRTCWLKHFCMKWQXDMDOPQIGHOAHTZEHKVLNOTIMIIVBDOMYZXGYJQZLDQSYZM");
    msg.distances.assign("VSJBRJDHWSEHHUWYURUEUQGUEMITGIIJLYZYXVAXPQBXIRPZBEVIEKYFOKVOZDGLMCNKLEGAQDHUQAHXLJMATNMXQU");
    msg.actions.assign("HXIPCLBPOAPDEJJZBVMDSEANZUYKLSUSTEILTHWLKPVXAERDGHNLFOMERXJBZSOVQMWVDWWBUORPIBUGCJXSRYZELZJYMUCPIGWAQPLZWBUTNZTHJQBFMWDNQFCOGYGNVCSDNICTQUKIBOIBQUNCOMLGGJVGCVFFXJTDMSPYKHHFSIPSMKHHVYZIARPYMEFYDRNJAKQWKIZXHUHWKFVBALGOYQFAMYQ");
    msg.fuel.assign("TJLQPHMLIASFNSSFQRNYUCEACMOXDVQWUDCSRLMHBRXSTOYIEZXQDIHWSOVDDZVLLZTB");

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
    msg.setTimeStamp(0.3646422629703482);
    msg.setSource(9857U);
    msg.setSourceEntity(171U);
    msg.setDestination(12942U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.5842893726243462;
    msg.lon = 0.6235730018814573;
    msg.depth = 0.34894678711725957;
    msg.roll = 0.42863298303329833;
    msg.pitch = 0.7287057523497051;
    msg.yaw = 0.1895411656281658;
    msg.rcp_time = 0.5870446870628868;
    msg.sid.assign("GFDHBLPXGXJJNJXFGRNOLHBXEJKOHAQYLTOGNSLQUDYCJIYIIPKBJCABVZDO");
    msg.s_type = 97U;

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
    msg.setTimeStamp(0.07812721531775124);
    msg.setSource(36805U);
    msg.setSourceEntity(150U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.3712043077409247;
    msg.lon = 0.016965194573211995;
    msg.depth = 0.2991540706951834;
    msg.roll = 0.5707030406553439;
    msg.pitch = 0.03040581526496733;
    msg.yaw = 0.4382057027948698;
    msg.rcp_time = 0.4640563824988031;
    msg.sid.assign("XYQKAQBMDOPOBWKWKXKAFWMGJLTGPEXNTIVGLJSLQATUJXLXWRDZCTBRAYCEEOVVMVJYKQVEWPSXVOJNIXWYSJNVURRHUHWRETBJLWNHJVQIMSQYJZLZNONPBHYVMEFICCMXDDSHBIDZPSODKMQEFPSADULNQISCGFHHIULCARGHPFQZZIRJRFMOBIAZYOEOTLWGPZCVABTXKTMRTEUU");
    msg.s_type = 24U;

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
    msg.setTimeStamp(0.4660738380439473);
    msg.setSource(21734U);
    msg.setSourceEntity(153U);
    msg.setDestination(47783U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.9002023440712682;
    msg.lon = 0.4798514141900633;
    msg.depth = 0.671516085274424;
    msg.roll = 0.4576787125938522;
    msg.pitch = 0.4730555627012669;
    msg.yaw = 0.41174304203251;
    msg.rcp_time = 0.12488491330338247;
    msg.sid.assign("KPTGVZLFIIKOSDGSYNCRPITOXMQUKZYVRNZSQSFBHTYUVHOFRUHZ");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.7697778068427732);
    msg.setSource(6868U);
    msg.setSourceEntity(236U);
    msg.setDestination(7139U);
    msg.setDestinationEntity(0U);
    msg.id.assign("ZCBRHAROZDRPHMRETNUHIQCQPKATWJMFBUGAKSYYKDRYOPRNCGDXIEXWSXNYUMPFCYMGBGPFBIVTJHDUGXAGTVOUVSYCCHSZJVBVTCLEYNCSIKZSMLHVKZOHUOKP");
    msg.sensor_class.assign("YSKIYIHJYPNBNQCZIZFMMEJISFJTSPWXGAHJNGZNVPKQEPZXOELVTIVAZGEHTFBEDUGLSWWDBGLIFBHMPVFEWRCGRRWOLZAUOKQRNOFNEPOSJDSQXSMHKXTUIWIHDYLWTRSFXZT");
    msg.lat = 0.060860308284863884;
    msg.lon = 0.5285833254130994;
    msg.alt = 0.27648788178798134;
    msg.heading = 0.8229059945389152;
    msg.data.assign("VGJUSQEDXNBWUYFRJASRORCOZNRABPJBHZXOCCCMJKKVIDIDHIMTTMIIQMNRJMKLGFYFUIEFDVICFQFKHMQZLXEOTNFALTORSLDWUAGDHGLNXXWXYZWQTSQRLUXHXEQFIUNIYAXJZGOWRSZMPUGCPVVJEUEIACVPE");

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
    msg.setTimeStamp(0.519264074454903);
    msg.setSource(33222U);
    msg.setSourceEntity(196U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(35U);
    msg.id.assign("RQWNFDAKGULZOWYCNDHTAMBAEVROXFVMILGDUVUPXQSPDUHAUQWGZWGYIFYHMVELUXOBXPSSNMKLQWJIKMLVMICWJDDBIDYQSZZRHPAJCWOIORTMPLMECHVUSTMYJGTFESKGZSQAQXCUNDTFQHXFITQBWRTCJJULROQXAGV");
    msg.sensor_class.assign("SIHWTBUEFAXZHSTHBUMBXTQKFQDFEDJXSBKIGLMOWZEKSXVTDWROIOLDAVDCRLCQVRJWXXZLZUEGSQDHPDGCQQYOYAOSVUYHTBRKZGHGLGVHIBCIDNLEACPJMBAZSRCRNENIAQWOJF");
    msg.lat = 0.8164100642636096;
    msg.lon = 0.0300116521737136;
    msg.alt = 0.3916427693489325;
    msg.heading = 0.4651196831214881;
    msg.data.assign("ZFHGZKUWAMNRKMHSOVCRAIJD");

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
    msg.setTimeStamp(0.06629638974960295);
    msg.setSource(53994U);
    msg.setSourceEntity(180U);
    msg.setDestination(17020U);
    msg.setDestinationEntity(204U);
    msg.id.assign("YPHKGCSGUJBLTKDEYEYUCXTVFVBTLJHNIXCIZXEUBUCMQPZNIDFZLLTVMSWMXFKBCUHOJAYASNEMRJRHKPQSUJVORMZHEKBFDJOTCYIDXCFCHBQWPQIMAYLWQNWAXFHDFZLZRSUXSWHANLOFJXKTNQVGKIMGVACIR");
    msg.sensor_class.assign("XDWJJEYJGRMVMGHQTXFRYEYIZIIQBRTFEPOKVBAANYETCGMJYXRSMCZFOTDDCHLOOFJTNBQAMADEWSCMNVSXFSPRKKNPNJHSCCLUZLXYBOTEHZRPWFGVDDCUELZSJFZINUPOKTXOWIVILKQDGMFUQSOENLURBDR");
    msg.lat = 0.6873239068094738;
    msg.lon = 0.8745021782062357;
    msg.alt = 0.8250055686666898;
    msg.heading = 0.07301091096774692;
    msg.data.assign("PFNELNSIUUXZWJQOAQOKOWEJKFXCYTARFEGJSPDSVDKOZQGGORCBYTQIBRLGUAMISJYWAMGZI");

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
    msg.setTimeStamp(0.08529486768545458);
    msg.setSource(19778U);
    msg.setSourceEntity(54U);
    msg.setDestination(10705U);
    msg.setDestinationEntity(191U);
    msg.id.assign("TBJNFPWCJMCPZKIVRTFJYOGZPCMPRXNOYYJIEDGUHINPGOSPZYLQXTQIKLNRKCUAVTSAVUEMRPWKBLVLXTNWWLMHFDCZCTJOFLCYXJRFDIFKNEEBVAQYTHSUZOKGEMVLAVBXNFDGBUIWAPTKCEWEFSROTUMTIMHWXPXBNAUMONRGVWOFUD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TWFPFRRVBHZFPTIXABBCMWFZKMAEBQQMZBFRALPVDUQZXWEESKARNZCYCVHDKSOXIPUAKMKIPZFQGQFXPETJNHDMLFOCEKIUVJPCJXWKLPIGSXRNOHYZRVWNZOUWQNFSOHLGVGQWYSOODQZSWYLJHTDKETXYJFPJYKYDDJBLLNQBDLHUGIBGPTDMAYNXVIBLMCUJDMVRRGECREARTWTCEGIINQTYWAUGOIUOMNCMGSSHJNSXEAUZCLVUOA");
    tmp_msg_0.feature_type = 142U;
    tmp_msg_0.rgb_red = 230U;
    tmp_msg_0.rgb_green = 131U;
    tmp_msg_0.rgb_blue = 129U;
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
    msg.setTimeStamp(0.7164951747854418);
    msg.setSource(64644U);
    msg.setSourceEntity(16U);
    msg.setDestination(63931U);
    msg.setDestinationEntity(136U);
    msg.id.assign("JSZUYCYNKXGQMPBCPKEUCYNDWSNPJHMXISLHGFTWNOVYCVMSPVRPDJIJDEOMTZJTJSFBHFFGOSWYASTSEKUIBDRHVLRNGUFFSJLZGAEXLYARAOUNOXBYGZDRETNEARDCQHB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AWDGWRYRNFOOPLYULLPPSSNKKOCBSXNLZBDDRBLHSYQJWIOZDTEDYCYGATRCOZJBNDZLRZHAFOVVYZVNSTG");
    tmp_msg_0.feature_type = 231U;
    tmp_msg_0.rgb_red = 91U;
    tmp_msg_0.rgb_green = 238U;
    tmp_msg_0.rgb_blue = 136U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.969814956048367;
    tmp_tmp_msg_0_0.lon = 0.14257687842806166;
    tmp_tmp_msg_0_0.alt = 0.6620731477843333;
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
    msg.setTimeStamp(0.6849396854673973);
    msg.setSource(18061U);
    msg.setSourceEntity(132U);
    msg.setDestination(35355U);
    msg.setDestinationEntity(231U);
    msg.id.assign("QKZIVTSNNHQREQLWXXLVQSYXBWLVWSONOFTFYUAERSRKGVYCCMPTFIKUJTVGULISBDWCSHMREGWYOJMPIBXPCXXEFZXOXUCDZZKRJYTNDDOGHBXWSMHJZJRWAHQEATHKDOEVWIYSTBGKFWUFAFZSJDCUUQPDMQFIIBDLNQAEGLOVCZMLJCPVADDMYMYYJNJCHKRAOUGMNTEGSYIUQINZVLZTQWHPBHLOUJXONPPBGKCH");

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
    msg.setTimeStamp(0.8678819935957318);
    msg.setSource(43517U);
    msg.setSourceEntity(254U);
    msg.setDestination(64613U);
    msg.setDestinationEntity(194U);
    msg.id.assign("XXTELERXVSVMKOGELNGPIJBIOOCJYGIRJPOOL");
    msg.feature_type = 251U;
    msg.rgb_red = 83U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 12U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3928355616145477;
    tmp_msg_0.lon = 0.41829981274594596;
    tmp_msg_0.alt = 0.6666445923072237;
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
    msg.setTimeStamp(0.6648798321980375);
    msg.setSource(64802U);
    msg.setSourceEntity(141U);
    msg.setDestination(50387U);
    msg.setDestinationEntity(184U);
    msg.id.assign("BVQMERGLYXOQNCYLBBXNPLXEWDWZTSCHGWU");
    msg.feature_type = 116U;
    msg.rgb_red = 102U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 76U;

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
    msg.setTimeStamp(0.07022549790816457);
    msg.setSource(61840U);
    msg.setSourceEntity(210U);
    msg.setDestination(13929U);
    msg.setDestinationEntity(193U);
    msg.id.assign("EHUTWKSIAYADSGFPUQEYTYBNCAQRTOMCDDAIJPKLNFNTQCXHCBQSGRGQIXJOZQOXABTSDVMSKVXUUDCQATJZKLPRGLDCVHUEWJNUBLKRNOLBYXMFZRVZEJPRJNWJMAQOPIXXGPESRVARPCIPQYONVGKFMJCNXMEWWZYIJOBLVOIWWTWSIHHGIIBVEDKVXJXGYBKFGEOFEMCKDMLWTCYZBFFPUSHDSLLEPUZFYWRHRFHLYZUSBNKOMGZTVUQDZ");
    msg.feature_type = 9U;
    msg.rgb_red = 2U;
    msg.rgb_green = 173U;
    msg.rgb_blue = 204U;

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
    msg.setTimeStamp(0.4665765696406289);
    msg.setSource(9732U);
    msg.setSourceEntity(169U);
    msg.setDestination(9863U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.44435548501516453;
    msg.lon = 0.010785636532775755;
    msg.alt = 0.22573535392544042;

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
    msg.setTimeStamp(0.08868980412700767);
    msg.setSource(54580U);
    msg.setSourceEntity(162U);
    msg.setDestination(54701U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.30886825480116475;
    msg.lon = 0.557103131503743;
    msg.alt = 0.27989776854018233;

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
    msg.setTimeStamp(0.5596984066298184);
    msg.setSource(20867U);
    msg.setSourceEntity(212U);
    msg.setDestination(33864U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.0648278735809179;
    msg.lon = 0.9927282766917305;
    msg.alt = 0.9094094086367058;

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
    msg.setTimeStamp(0.22721490558717605);
    msg.setSource(28700U);
    msg.setSourceEntity(151U);
    msg.setDestination(5183U);
    msg.setDestinationEntity(116U);
    msg.type = 114U;
    msg.id.assign("BUQHXWFNMVKFSGTYLMCDDTKDXBHIRMZRBFQNFGWNKSTDQELMHLEOPNZVQJAMVXORJZBEIYXFIDTZAOZKMOUVJCTCWINVIAQGBAVYJPVRGZISYSNWNZUTNCOCRXXUWUTRPISUHBAGDTGQGIMDDYWNGKXXEAWWCKOXJLFPCKSMJFJZHRQAYBILPYJOMJHKEVHELDQFVOPUAKIXDLHSYGEJBPFWUQRBSPLPKZNYCEGEQAOPTTSBYL");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6157448966710486;
    tmp_msg_0.base_lon = 0.9473023477071436;
    tmp_msg_0.base_time = 0.9620475101042802;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 29197U;
    tmp_tmp_msg_0_0.priority = 126;
    tmp_tmp_msg_0_0.x = 19699;
    tmp_tmp_msg_0_0.y = 20547;
    tmp_tmp_msg_0_0.z = 21879;
    tmp_tmp_msg_0_0.t = 3388;
    IMC::RemoteActions tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.actions.assign("NJXFJUUDCDXDOQGIFRKSIUMEAZVYZPXWMCLFBEADWWSFNXQRHARJSXAZLTXQGIARDKOMYHPVLLNNDGHPCYTRDWWLJIFCBZARPQJJQYHHGERNVLDEVKDTLTEGUIVWSLXANTPNBLGPSNFUKCVQQPGQEMZKTSSAOCISCOMAEKOYQIHYTJBVVKCMYFPGFUKOYNKISJZOBXAKOWWCEZIHBPZZRVYJOQXJB");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.38117275485186464);
    msg.setSource(14559U);
    msg.setSourceEntity(246U);
    msg.setDestination(7701U);
    msg.setDestinationEntity(65U);
    msg.type = 105U;
    msg.id.assign("ZWGPTYCKMJIXANEMQAEOAVCMYIOSRSYLQJPMPEBKTCPITRSYSHGQHMSJOETLJTUFVEORCHQHYYHTHNC");
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 44U;
    tmp_msg_0.flags = 64U;
    tmp_msg_0.description.assign("ENZXQWGQKRNNNYBXMZOADCZOEMEEGEHXDCNBTISIJYLCKYLGHIJWGTYHUJWMJJGPHKATAGWIBSSUMZBHLFYFNTXDOCDOEPOMIBWFJAEPDWSVDRFGLDKMKLEKPUAVLXBRZHISCN");
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
    msg.setTimeStamp(0.8840026515028214);
    msg.setSource(25899U);
    msg.setSourceEntity(184U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(171U);
    msg.type = 175U;
    msg.id.assign("DBXIAEHEIDDVIFDKEUCLJDJZAAWOXGJQFZPMWGKYLTJCEYGDZZAPBBMASKEAELSRDOEGBWAEDVYNYIZNTOILRK");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BCXVBTOEIEMQBALNXVOFLUEBQGHFGBOTGPJKJRLDZAUCEIMFHYSHGHBURRLOFEJVNETXUGONMQLIVIPBCYVVMWVSRKCLXGDNUNFZS");
    tmp_msg_0.dist = 0.1888710412813699;
    tmp_msg_0.err = 0.025963764699027503;
    tmp_msg_0.ctrl_imp = 0.5946371098231643;
    tmp_msg_0.rel_dir_x = 0.3967238219039826;
    tmp_msg_0.rel_dir_y = 0.07680258734371914;
    tmp_msg_0.rel_dir_z = 0.3817409127612844;
    tmp_msg_0.err_x = 0.5131918280802525;
    tmp_msg_0.err_y = 0.05744325998866551;
    tmp_msg_0.err_z = 0.2709682262200075;
    tmp_msg_0.rf_err_x = 0.9619984781161423;
    tmp_msg_0.rf_err_y = 0.06549057267691838;
    tmp_msg_0.rf_err_z = 0.1905618420574552;
    tmp_msg_0.rf_err_vx = 0.15453518719497195;
    tmp_msg_0.rf_err_vy = 0.20016487536128458;
    tmp_msg_0.rf_err_vz = 0.13487320032265426;
    tmp_msg_0.ss_x = 0.4376954473532937;
    tmp_msg_0.ss_y = 0.8605126913327127;
    tmp_msg_0.ss_z = 0.17227278598532225;
    tmp_msg_0.virt_err_x = 0.011341255305680531;
    tmp_msg_0.virt_err_y = 0.25946834977622035;
    tmp_msg_0.virt_err_z = 0.39366081119900853;
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
    msg.setTimeStamp(0.7474462173694261);
    msg.setSource(58319U);
    msg.setSourceEntity(32U);
    msg.setDestination(64978U);
    msg.setDestinationEntity(44U);
    msg.localname.assign("NDOTPGLWJLREPJFTJCLEGEIWNUXHXCXWYASUKJWDIMVSNNHTIITSXAZMGSMEABZEROGIDNCWCKJRAVWZMJFLHQDZYGWNAFBTBIIUTVOEKLKXFYYVGXQXDVYBVOKRRUSKYLPDPUQHCAYHDQQKMRMNBMFPFEUPCDKVAEOZKNJQEFOZRVWVTXQGFTSJXSOGZJBTHUGLYRDZIERLYALOCTLUXABOHCVMQDPWNPS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("COTLOLSNGGOTVRUIZWYOWPWBHUDNWMBLVBXQSWUWFWKRAKUQICDUPGMYYGYDOXDYFTNVDTIOZEKNGLTCDNFESXKTMDNZBRQDRZHTGEPNAMPZVMASUYRGJBVEZMVWIRGPLFJJXNSHGBEOZ");
    tmp_msg_0.sys_type = 98U;
    tmp_msg_0.owner = 39458U;
    tmp_msg_0.lat = 0.11341299372229041;
    tmp_msg_0.lon = 0.7651515613476236;
    tmp_msg_0.height = 0.1841902290974179;
    tmp_msg_0.services.assign("VLDSJMMNWGEFTZTCRLQWRYABFIOFGREJNHZENIOTCUSVONVJPMERRBXHFBYZIOBNAIVHOIQBUZUTGILMCRLKMDWTJFWHIBXKGLSESVWDLHAOMFXWXCLLNHADHZCQSUKXOROABQQUPGAFAFJDWJHKOQCMXXKB");
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
    msg.setTimeStamp(0.9855886725509408);
    msg.setSource(39528U);
    msg.setSourceEntity(182U);
    msg.setDestination(61774U);
    msg.setDestinationEntity(226U);
    msg.localname.assign("RIWXIHQELJBVPOAZT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LMJXYIFDMLYWRFCSRGQEHWQQLCWTDVTAMYJEPYRVUOSABWIPEF");
    tmp_msg_0.sys_type = 88U;
    tmp_msg_0.owner = 64164U;
    tmp_msg_0.lat = 0.5282508995782983;
    tmp_msg_0.lon = 0.31421253506845925;
    tmp_msg_0.height = 0.9944521392276484;
    tmp_msg_0.services.assign("ITDLKQBQLWCHCBEDWLRTCMZIQDSMYGVFOVHXJLCGYJJPMABLRIXNSZDMKTWJSVEGMPOYGDIWGSHODOZRDECFHFRIKKVWVMXUQZXRYAYRLZBMVSOVEZGYAQGRRUNAKGISCROQMFFHTYNYSBNESYZ");
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
    msg.setTimeStamp(0.4031720273517351);
    msg.setSource(26371U);
    msg.setSourceEntity(112U);
    msg.setDestination(14893U);
    msg.setDestinationEntity(28U);
    msg.localname.assign("LPRMBIXJMASCEDHNUICLYOBBFTEXTG");

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
    msg.setTimeStamp(0.341123016628347);
    msg.setSource(9066U);
    msg.setSourceEntity(214U);
    msg.setDestination(20617U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("THGXIPUFFWBGCSBWXSKXRPGARWPDUKYWFDWGUQSUDMDKELNLJZVZ");
    msg.predicate.assign("RPXSBIGMABCQJOWBDNKRFVLJMPITZRDNEVVNXZWHYGPKFYEMHRCHGTCPHUNZFAALSOZZSOVSENDPLJJWCREUCZAD");
    msg.attributes.assign("UBDBNOALWPDYGEAFURWBAVFSOQLGJOXOQUBGKNGIISVUVGCNPDXNYCQIKYGKZLIKWAHVWBHWTXBGPZFGQWVDYJZDYOUMTRXSAYUMFJNZMMBXCRSLXLBUBSWRECKVMFSMPZDRHJRXJUATATELZTTYFQRJZRHGLQ");

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
    msg.setTimeStamp(0.31099352798136326);
    msg.setSource(9505U);
    msg.setSourceEntity(162U);
    msg.setDestination(28248U);
    msg.setDestinationEntity(22U);
    msg.timeline.assign("GRECYOWCZKSABXHSWSPCFXZUJGXEZGCFICIGWIZDZOPHCHOCTEOBMFABMVJTYKNPRQMNDIJ");
    msg.predicate.assign("QIUYYWTJPGCAHFZKKLVJYFQSAWOZAWNBPGRCQQDBIDTGISBXOLMOCOYTOIYNKWEEZVIUOKFMFBZXWWZFNCHJCELAKJKARNGNLGJUJSXMDXHTETGRVSFHMXVUVMPLTQAQJTDCGQMPZPLMYMRSDXPTDUUXFLJGPHNW");
    msg.attributes.assign("CXYASGTDNRHLUILVZEKERMSXRVYYZPEHICOQODZXPADJBDRQZILHFXYESCZJWSZXLTAHJMKIGVZUBYQKNBTA");

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
    msg.setTimeStamp(0.44410292007089947);
    msg.setSource(37981U);
    msg.setSourceEntity(65U);
    msg.setDestination(947U);
    msg.setDestinationEntity(33U);
    msg.timeline.assign("WNOTTWBNPUSGGKPZQDGOAIYEADUWRFRSBHCDOIQHQGRSKBAZUELTKDMLQALCKPQGMMPEWVEEJJURSJCJVOAKPYFGDKXYBFVWRULBLIPYVQCEDEIYAOROIWFNXWYPIAUXJWOMXRJNNHNHMFZBEDHYZHKBUHZSZCZZCGNMGAZNFSJBJPZVGXSANFICRQWQTLKXBOKTFOUJTXYITBGMV");
    msg.predicate.assign("NCOFCDBMEGSXVGQOFGZANHDIFFDOATPXHROMCJUYIJCNEYMQUPKZTGETFOCXGQJFBZCJUKPAZIPBSYMSPXMMTPPIGKVUHXHTZBSHVBSPWISSEXJZUVOFKDQLDLBONRYWYRIULLDJNQRTEAIDLNXD");
    msg.attributes.assign("GJMSXNSSRVRDVCLTGJFXSOXDLLFJNYWSWFTVRCRUQMYJIKAWOLIXFPNXHPKLDKUCRYDMYSMHXQDVHPWGUQXTGPLASKDDBB");

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
    msg.setTimeStamp(0.7869021355582103);
    msg.setSource(49446U);
    msg.setSourceEntity(34U);
    msg.setDestination(8890U);
    msg.setDestinationEntity(236U);
    msg.command = 188U;
    msg.goal_id.assign("QPIHZNWBZSPZJDKKCLMUCFKEHKRPARXSQTOCXJYTWRGEVBVJREQIOJKMYVQTXXXAENWCOZEYNGLGOGYMFFMFSRBHCNGAMDRWKSPUQPWBWMXGVTDSQRALOYYDALSKTBXVLLFBHIFZLOGPAXQUESYVUOQSXQDZPIOBBFGAEPRKOGCUUKYIIBIEDENOLTCHSHFJJYUHXUNNVACTTPMJTIDYAVMNMW");
    msg.goal_xml.assign("LDLPETCHPVVINJPNZUQSLYMWKNHXJRZVCZRGEWEUZNECECFDXNNANIMRSGUVLRULOBGSIQDWBXCJMMYRFVUADZYDJJIFAUCRYJAGLYLRAQPSHOMEMWOXTDMPKGPOQMWKKBFVQVMPBDNWHZG");

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
    msg.setTimeStamp(0.13826632843838893);
    msg.setSource(11095U);
    msg.setSourceEntity(229U);
    msg.setDestination(52701U);
    msg.setDestinationEntity(139U);
    msg.command = 95U;
    msg.goal_id.assign("VBLPJWZRXCDEOBIBDHOGPDLKHZODJAOGUWTZNWSPACNFISCBTKVFUKMYUDCGXQVLMOYOWJNGGMMJKPORLENHHMYJAFRBAYLRSWFCINRYZPIURLFMXRSCZAYOGZFISBBETXQHPWKKTMTROEEQETHWSZPIJDKECGAEDVEGAUQHXXJVGPQPMQNVAGWSUHZTLACLEXNQKSDRDNFANTWBOIYZZS");
    msg.goal_xml.assign("SEPZMCFXKHLFKYUATGOYTZPFOUVNMCYQOQYCMXDURIFCVXBZFRAZ");

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
    msg.setTimeStamp(0.5065830468093558);
    msg.setSource(52508U);
    msg.setSourceEntity(175U);
    msg.setDestination(1822U);
    msg.setDestinationEntity(214U);
    msg.command = 184U;
    msg.goal_id.assign("ZFYSGRJJHPTLGLBDOHCQOCFQODNVJOJIRIOGFYWWOVWXHMFCMUEQYAVEUSARNREXNABKEFTNCPSNNNDZGPMUBAEHAVZJVLESIAABHVGRSCCTKHUMYKJJPZPDLMDTXCKGYQENOUYRXYWB");
    msg.goal_xml.assign("KDIUCYVRTULCFSMKPFFYBOQVORFZFSPILEHMWJXQEWJCZBDGPATVHSCNRXSEEKILTLSCXVBNUZNUZKXMISWHAUGYRWFBGVLLREKDLNR");

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
    msg.setTimeStamp(0.029320450301194123);
    msg.setSource(42065U);
    msg.setSourceEntity(99U);
    msg.setDestination(60577U);
    msg.setDestinationEntity(156U);
    msg.op = 44U;
    msg.goal_id.assign("PJKFYBKFMAZMXSBXYNGQQISHAJJAFSGIDOWEVLOMKPFLEKTZRMTLSYSIWVBBJRHTSLHBNDAODLYERTJUPHXVBXZHVZZAXHRRZHTTQZTVGDOIKZCAYYXOPLHDQQFSKFECCRTFIWXRWAFQCMMDVSEPDRKKINALZDWYR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ICBERRJSDXDEWPORZAAFCNVITLOHMTVLUEAJPDRGDXKFXGIBOVWZDGYYTQKYHXMNASIHHWHENJTTEJJAXZPKUEDWRGAQYLQXKBXQPKBZCXGHFEGSJNIFGIXDKEJEOWBZLPZRUZAVMYMLAP");
    tmp_msg_0.predicate.assign("FVGTCXGKKUNZHL");
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
    msg.setTimeStamp(0.7017964611445558);
    msg.setSource(27986U);
    msg.setSourceEntity(94U);
    msg.setDestination(39026U);
    msg.setDestinationEntity(208U);
    msg.op = 62U;
    msg.goal_id.assign("GSCMCMZTWNLRISPHADDHAUCJSJQGTLAPMXOENZOZZKGSUNCWWND");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QGPRYMBWEERFCTUODBXYSGMDTUGCOYQXBGCMXKJOKDGVTRFLXYNNICQHEMSIEOKKDZDMGHGQSMYTNLOERELZPKZSMLSJLPJZEWIWOBVHX");
    tmp_msg_0.predicate.assign("TUCBDNTGSNJWZFKNEXUMMIOWJGGDZPCWZKHTGMVAXYKCFPNVIRHAGRFZLJXRSTRIQKLFAAORTYCBTUBZXZEFPLEDAMENJBZQPYODHMKHRMRIEKTAVWVJA");
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
    msg.setTimeStamp(0.5434110277921832);
    msg.setSource(10428U);
    msg.setSourceEntity(135U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(221U);
    msg.op = 92U;
    msg.goal_id.assign("XZVJWFDEOZDCGMPTLZMKWAPPQKDEETBFZRQYIIBMVQEHOHQFNFMFBCQYQONRMGBUZRDQOBKSRBIZAWMVODQRIRFUXVXYHCWSVNHILEGXCKZXXCV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TRTHVPYGFHAPCKBPNIEGHXWGACNBXEGTWVQTDQWUHUHRJSETZMJZNEVONMGAIBGRMHZECLOTWFBTECOOANXXFOHCIH");
    tmp_msg_0.predicate.assign("PROXSQEVALBBEOFQYQALDGHDSTJSTXNLUQFMQWJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJCYDFZMREDFRPFGSOZKQGXKDNAURKQMYSLSWUOAMFBSVQUV");
    tmp_tmp_msg_0_0.attr_type = 184U;
    tmp_tmp_msg_0_0.min.assign("DTBVGKBYGRMBQMPKLIHDLYYWLMIZIHQPAHZJWEKJXKULKOHLQSDCDOBINFSHAEYUFAEPSVSCEMWZAENXAYTUDWZBQUCJLCTOEFNFSXMPUIMEVWDHYRIXUVVNYGZWXOJETCJLBRBRRVCTF");
    tmp_tmp_msg_0_0.max.assign("CLTXSMQFWFZKQZTACREPCBTTQHCFPMYRWQWVENNCZCGKPRFRMTQLSSABNBOSMTAARXXFBVIZNLJHPPSFIXKDDLYHKVHJDYRLHNRUUKLXXKIVJHBBGHKPGIAMVTPVWAYWRIEOEJPQAJUCLQIQVJFEHRIGBYVJBNOXDYGGYOPKXZNZGLTBSYQQNDFZSJIOJWXHZKAFMXUITYZCSJLEUUUEEADDUZWYIAECGRFNMCLWTMDOUEOOSNVOODBHU");
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
    msg.setTimeStamp(0.9083518826761974);
    msg.setSource(62405U);
    msg.setSourceEntity(189U);
    msg.setDestination(5240U);
    msg.setDestinationEntity(48U);
    msg.name.assign("WXUXPKHFXTXFGOQRKJTVGUEFEPFDZIHFHMYCDRTEUCLMHSBDMZQAUJAQDYJISOPXANQZELEQUKVJZKWBWKAOROIMBPCMQLQRFDOTMKBSWXASLZNOEMYDVGSVZAWUOBWRCOSETMEYUTHIJYFAHRZIQB");
    msg.attr_type = 130U;
    msg.min.assign("QEVWJBJHUDQJDCCMBZPULGLKSVNWACWEXFWEIKGXOHHOVTAZSAAYBOXKFHVXIPYFUAEDHYANYLLNVCTDQRBSQDIEZNYIXLCCHVHSGDRVVUAEPPAWPUTUKWKGKMRCMHAQZWUHRNFDXDLZTIGWSICSCBXYPGSTLAYPRTMLJUFBYBWJXBQFEJTQP");
    msg.max.assign("PGVIACSQLSEWLKZXOQMYL");

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
    msg.setTimeStamp(0.14768960916856322);
    msg.setSource(21024U);
    msg.setSourceEntity(112U);
    msg.setDestination(46662U);
    msg.setDestinationEntity(9U);
    msg.name.assign("DJYVQSLRNXFWUAGUOYEHFBWRTRLHRLTIIFOYVKDWBSUHPZKRVTFHVKHDLGCVEQKAKNOFXUVEUMCEYWAHIXBWVBTJNKJQCLXQTAGWNLSZPCRKIMQRMUPFSLYVHSBKZNDFMZFCYJQTUQXBSQFANOQJUYMNTIUIZTXCBAOAIWWLCJPBPAZEHSYX");
    msg.attr_type = 12U;
    msg.min.assign("JFDNFHQOJMSSKQHUVZIZFDCGLTULLQPPXXUBVMKEBOYFFAPZHDYHIXSBFMOZXDDLAWESWSGAFJTYBZORKWNTTRUKVMQYQKMLQOPYPWCCZWKVNML");
    msg.max.assign("OLXBSTUUNSSEMVKCNVLQDAMDJFJFDPIRUQYKEFGOQZMFIHGKBJDJMJNVTQLXWNKWABCCQHWTRCPLGPATCYOXTJXVCHXFRJWLVDSVBA");

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
    msg.setTimeStamp(0.7939586108952325);
    msg.setSource(31001U);
    msg.setSourceEntity(81U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(2U);
    msg.name.assign("CSISOYEHOOFORCQTZNIWLGVNCDVCMHBHCZQZSHGUHMSD");
    msg.attr_type = 144U;
    msg.min.assign("WIKYAFXYIHFPDGVWZMLNTHFXEDXZUVYRHDJRALBIBSNGDPQQVTNPLRWXJHHVLCBSSCQXVLEUCHBOHGWDEUKQIONNLRBCBINKOSEDHVVZOTINIDXPXPFMWEKKQSXYCLARWNKZPZAQIFYOJZBEVMESRUIFAOYNOPSQDMJPMGMYZGUHCGUAPTEJAPBRWAGXWQKSTKJMODVLMGROTYYDAJSTSUTKRUMYQJBH");
    msg.max.assign("ENFJYSDNVUYLXZRWPPIJXUUUGPMEAEEWNONPQDZSGY");

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
    msg.setTimeStamp(0.7085613658440587);
    msg.setSource(22021U);
    msg.setSourceEntity(37U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(48U);
    msg.timeline.assign("DMWKTPVMCZAGCEDCOJWFQNQTTPOCJLVYUVOXJAUQNMJFFNUWBVAIMCDGOTWLGFJEBEAQZHNLLLOHGFOUIYCBMABKVXIFGHDJXSEZASSXIRSMIGXZHYDKKJZGHBVWNRQOEWXHKFHWKPNBIUVFMHAOANVSTYSRPGBZYSDLPJDXSBQVTKSRFQCWSUYQP");
    msg.predicate.assign("JPCBZHRZXOTVGBFDMHUBVFNUHTGAXTDWPDMXDSLCKLQLHITRTSGWAYFLRNBVUMIGAMVDDIQTZBDSLCA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EMODQNPLJDAUXBUMNVKIEVWIXAUZGVUFVFNBBDLSPLLEUOQXDDFPPGOUPGNPPOUVYZVVCAJFQETGQLCGIFJETTPCWOWMDXHRHFCGBLCTAEXJTMMBMNKSNREJXOAJQHWSZSHUSSHUQPMDCIKKFVZWHGEKPMNAM");
    tmp_msg_0.attr_type = 13U;
    tmp_msg_0.min.assign("ZGORDDZCPUHDHBZSRZQRHRJYYLYJAQJUBQFPVNJKEQYQLMUTTMVQGTKCWVAFQDTINWGFFLFZPZJWACARESMXULNOSNWVMMDUEHS");
    tmp_msg_0.max.assign("BECJCWBPDVOUACVZSTLTETUWO");
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
    msg.setTimeStamp(0.3661672407385177);
    msg.setSource(51784U);
    msg.setSourceEntity(188U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("HTJHIGFNDVMTAWATSHWBJVAOCCNHFKXSGSUIPVGHDKZHENHBXPLXWOIEFAOPXNVUFFXIAYGYYDYJOFVCJCHTMIWBSDEUIMBGVEUWMKBOZIDUJEDRRGRTLERCRTZLXLHRLCMIKAAKMAMQVIGAPZ");
    msg.predicate.assign("TNEKLQIXEOCDNSQXZSEKMHHTGARQSOTJAWIMDUGALNDVNFBXWCKRXEZAZAZAQBYCDGRNMTPWYEMRZQTFEEZZETYBFVHAGOUFWZNYKZILOWCXGMBPQVKHOCVFKIYVO");

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
    msg.setTimeStamp(0.3974239068554498);
    msg.setSource(32739U);
    msg.setSourceEntity(67U);
    msg.setDestination(7062U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("QROJENUJVPVNKVHQXFLERCACBFKXDNNYUIDQYXAKDQOYUGQVZIMWHNWPMRWNQIOMGVIISNFBALBBBGJXZWEFERTWHDLSUTJAYPPCEUGYRDJMNRKJKBUKKAQRFKNEUOLJMDGOAHZPXV");
    msg.predicate.assign("FPOGUKSWWBJMQAEBHJHEBCNAMDZCNGPMQQCLDGOKORRHRIDRYRURUUKSVZKIAXGDTTNDTFUWNYALALSKOLHASKQZUVZFCCIEUSYRLSSEPTJYIGMAMJFQKOYBSWDPHQYXANPRHMWPGEHKFNFZIYTOWVWXFBWQPCHXPGDUHBNYZCDLKMLTXSGTYXLRQI");

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
    msg.setTimeStamp(0.17227344099064423);
    msg.setSource(42376U);
    msg.setSourceEntity(205U);
    msg.setDestination(41010U);
    msg.setDestinationEntity(153U);
    msg.reactor.assign("QXRDDZPRZRXQAVNL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SFBCKORSCKSEQSXYVRHCFSFYOYWBDRGRYIMTUJCXKNPVHSBYQWMZULOISUQMYVDDGILAINOVTKKLLZCDKXIWVCWXPIZDWT");
    tmp_msg_0.predicate.assign("LSWPCPHUFYQFZUIWJEXCMBOTYRRYSSKZSJADUNHUNQTBOPRGBHMLSWRTIWPNOKNDEMFFFJUJVDYTMLPIZIBYHEGJXPERTMALICXQGSCQRLTELNFLRUWVSDPCXIWVCKBAKTZQOCGIXJYRDBGWWSQRCAUSEZJOHEUKXOOOHALTGLULAJDFIWKGFZVMBJONKHQECPXJH");
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
    msg.setTimeStamp(0.475131014371325);
    msg.setSource(41647U);
    msg.setSourceEntity(68U);
    msg.setDestination(44526U);
    msg.setDestinationEntity(234U);
    msg.reactor.assign("KKDJBPKPPOVSUJTAPNWXAWLXRPNBMUIDAJQMZTOBTGSFQSKGMCZDCDVVKKHSXFWJOXHOLHRYENHVBUQOLLWJAIFENGGLTTGZPYUIICIUYLFFWYHMRPVZHTCTLPCRCKXMXYSLDUSMZQUTBZHRGJCRRGJWQAOOKDQNMBIINQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OZZXGRCXPRRKQTSQYEYSZHMEMFQTWALHIMYPQKHXRMELGYUELZCZZUPDJPHYLFFWNUHCUELQPOMRFWIZSIQUTXOJJPMDONIUPDCDUOFHUWFVEHVVDHBXDYNRKNCEWJFTHJBIJVVAWNRBZATPALMASVKGVKJXCJGIODSQRTOAOUACABGQDMXTXONNLUGGGWPYMPKFIWBAYTSTIOIDERKVMBXKGLEAYVCCLRXSKWWBDSKBBBVZSJYFELI");
    tmp_msg_0.predicate.assign("JROVSDQEYAPCVROSYUOENFXEMNZMQPOOSQXRYGXMGQSYENVACXCGCCJTWTFUDXKXJBILJHFOKDZWJMFGRBCULBCCLNRZQIRYUIAOHFKFHEUXPLLURLQFTTJBMNWFLJVDXTSIIOKHCDTZZTVWBPQKDMDNWOVARAZCHTMEJPTWPLUGRENLVQJBSQBEYUGYMPBFAVDNKDVNPAZYMHUALQJIRIFBZDOAKIGWKHGYKSWTNHKWBI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AAOQHIKKKEGXCUWUVUZYDZECCJZVWPTSQDZKLOUN");
    tmp_tmp_msg_0_0.attr_type = 227U;
    tmp_tmp_msg_0_0.min.assign("AAGINGPQJGXOCWQEUZGVRCIMSIHOSAJJSHXDZHN");
    tmp_tmp_msg_0_0.max.assign("UGWKRKNFMEIRPBLFYAOXQVVSLWVQOBXDASOMZUPEVPSADRCOMRZWYIODKNCSGYHFZQRATQTKDEEILDCCSZJPWLRADBMJZXVJTERKHXRKUXBJSRXYVKTDHLNJTPIBHUNCTYO");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.1000045949826287);
    msg.setSource(34732U);
    msg.setSourceEntity(55U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(57U);
    msg.reactor.assign("JQZACIRBDOAXJPXQLURKHSYIJZYFHFRJCMPORYZDNCZDPWWSLWJRFIMDAKNPDYNNVZWBYEKNXFBCPMFXDITYTMCWOUIYBEMYXVGNT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JXVZWBJZWZOJBKMUYJHXPEMSRMIFMDMBIQQJQKVGENIORATNGFYREWRRGASPAVCKZQGSGLOLNFFYIFKFVMDTGUVWRHFBUBHJLCGTFDKDKANLCTBLTZBHKNKHXBDXTEQQUOWPPCPYRZCODCXMHMOHZWEDXAQEIVAAXSAGKQXURNQTSRAPFLCWIPHCZHNMLODIYYSOKELHZSJLQCGELDYVUGRIETICXOUNAWVJ");
    tmp_msg_0.predicate.assign("JREOVHSDXWJTKUUPTYCURGGVHTLSVGWDVAEBEOLBTTUFLUIZMJFAKSHWYPKAKIKRYGJNFZPGSESZILCDODBZSEBQAUTHEUEPZLJHMIGPOMCPTGPPYIWXZKXMNAVWZXBZYTQKRPDDJMBMQTMKOCQRNBUVWDRAOUOVKFAJGVNBC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YMNAIRAQDIDKFACSSBSJKQIZTITYMNDZZLCMRCXQFVYETIJFAYFGLBHPKPRREZXKBECSIPCAAZTNTITUZLSXUDYOBJYLFDBOGJEHUFAFAEPCTGPEJSWOVHBMWSSMFGOVXVXLJESGRUQLNNBNQYAWNHLRUIHBWQGUTGKLRZEUVJHBPUIYHDWOWZAPPPDXDMIRQK");
    tmp_tmp_msg_0_0.attr_type = 238U;
    tmp_tmp_msg_0_0.min.assign("EBBAKRGCESVSXYUOLWYAOOIMVTIJPWSNOMREGSVHKPVFEODMWNLJVYGNSHINAXYCXSIXEMGFMKOKJZABOIBBOZBBVXWRVTTDMARGMSJSYJDRHMFDTSFIDEUPUUKPDYXWIAFNYFZNWNHUUCXUWQVJTHELQLL");
    tmp_tmp_msg_0_0.max.assign("VSXXBDPVSLCDHJLIIVTXNSRVBAZAGBSFGYWLUSKPYTCTCAIQYFEGXQHWBEJZFFPLQYMTEQLQIZHRBATZLVHUGCRNRVNRKGVGEV");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5501065002743186);
    msg.setSource(610U);
    msg.setSourceEntity(38U);
    msg.setDestination(65040U);
    msg.setDestinationEntity(26U);
    msg.topic.assign("WFNTQGMRFPOTXBLOSHVKEVOZBDUXZJTYMGXUPQRQOBCHHRABGUODMBZFHYJPNVHCZSRBSMBCRCYIOZUMYRDDQNODKGRJICBEXWLJNKFXAEZRTRLLXDVVWWTWLMZW");
    msg.data.assign("KMWQSMRHZW");

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
    msg.setTimeStamp(0.9848799264359607);
    msg.setSource(35273U);
    msg.setSourceEntity(59U);
    msg.setDestination(31674U);
    msg.setDestinationEntity(150U);
    msg.topic.assign("GTLZCMEQCZZPFLANUDATXWTQUMZDYMTOTDRQBAFAQPWYI");
    msg.data.assign("AEGWUNBLURZVHTPATKOSAHCKXKQKRVUXXLICYOUFYDEDBQVPNSKTSGTFHIPTGJYNWIJLMDYZCAKMUFLEMHXVKAQVVGNYNSOJPAKZXLVDUHOOFBRCNJGFMMVCYQLNMTGEGBWOHZPQ");

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
    msg.setTimeStamp(0.7685208188811465);
    msg.setSource(44220U);
    msg.setSourceEntity(90U);
    msg.setDestination(8388U);
    msg.setDestinationEntity(159U);
    msg.topic.assign("YGWBGLXNERVQYIRPRSSTAUQSDPCDOXLVXTDJCPHPIRNNBLZQFVESGNBVIEBUHUBAKTTHOKAFHSMVLRLKHRYOUJHIVFYMHCCPOXSVQQTATMAVEFPPMIKYDPEGSGZKKWNMNWMFWLZLBZCBNAJA");
    msg.data.assign("OZGSZFXNINQQCHLCJZYETTNABLECRCWHBXDAGNPOEPXKPOJMKXVBUEMKQJFNCDLSTYGQOPQMYVJMYUGIKZLNRCRGHNCVHVBIHBPJWKUUARSXYSTBLWCZEASXJAWFY");

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
    msg.setTimeStamp(0.969526364646868);
    msg.setSource(52721U);
    msg.setSourceEntity(126U);
    msg.setDestination(35733U);
    msg.setDestinationEntity(219U);
    msg.frameid = 89U;
    const signed char tmp_msg_0[] = {106, 39, -61, 108, 19, 0, -22, 90, 57, -71, -94, 97, -3, -113, -34, 16, 94, -4, 51, -1, 27, 46, -60, 120, 77, 42, -12, 55, -108, 19, 47, -60, 117, 100, -1, 56, -81, -86, -33, -31, -83, 111, -5, -26, -90, 112, -18, 35, -124, -72, 69, 12, -11, -42, 43, 80, -62, -113, -80, 59, -55, 109, -15, -105, 2, -104, -100, 72, -24, 0, -42, 113, 94, 125, -84, 26, -26, -84, 54, -106, 78, 106, -17, -35, 95, -36, 22, 115, -9, 12, -38, 98, -106, -36, -126, 119, 77, 32, -88, 107, -106, 2, 52, -5, 124, -98, 66, -104, 9, -8, -123, 55, -72, 99, 104, -75, 103, 44, -125, 124, 25, 120, 48, -23, -22, 82, -115, -83, 53, -94, -93, -123, -115, -43, -41, 3, 73, -102, 125, -35, -18, 46, -18, -53, 111, -15, -21, 106, 76, 66, -14, -38, 0, 111, 47, 126, -56};
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
    msg.setTimeStamp(0.34168204994251394);
    msg.setSource(25445U);
    msg.setSourceEntity(197U);
    msg.setDestination(8295U);
    msg.setDestinationEntity(26U);
    msg.frameid = 229U;
    const signed char tmp_msg_0[] = {39, 56, 0, -118, 16, 25, 14, -37, 120, -13, 67, 116, -62, 107, 20, -77, -67, 82, 50, 126, 30, -28, -60, -122, -12, 59, -69, -19, -97, 65, -28, -37, 75, -16, 79, 121, -32, 80, 80, -46, -32, -13, 3, 2, 103, 64, 109, -66, 17, -115, 89, -44, -125, 59, -50, -85, 11, 46, 30, -40, -9, -55, 96, -95, -109, -56, 18, -107, 103, 10, 107, 30, -88, 32, 58, -60, -10, 88, -49, 109, -29, -33, -48, -18, -56, -68, 22, 79, 43, 29, 125, 68, -26, -128, -23, 20, -32, -73, 126, 115, -101, -18, -121, 44, 125, -94, -48, -29, 67, 112, 16, 91, 18};
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
    msg.setTimeStamp(0.4176023680621317);
    msg.setSource(11318U);
    msg.setSourceEntity(148U);
    msg.setDestination(19821U);
    msg.setDestinationEntity(229U);
    msg.frameid = 224U;
    const signed char tmp_msg_0[] = {-76, -72, -12, -67, -82, 103, -126, 54, -114, 60, 107, -15, -51, -119, -8, 39, 25, 68, 106, 115, 93, 51, 14, -7, 82, 76, 106, 103, 21, 42, 102, 30, 3, 89, -85, -23, 64, -108, -96, 98, -11, -103, -71, 57, -88, -24, -13, 87, 119, 109, 70, -19, -55, -94, -117, -82, 63, -5, -66, 55, 27, -9, -27, 25, -13, -102, -75, -58, -27, 25, 110, -114, -54, 16, 108, 2, 110, -55, -26};
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
    msg.setTimeStamp(0.8455304871983855);
    msg.setSource(47353U);
    msg.setSourceEntity(58U);
    msg.setDestination(45238U);
    msg.setDestinationEntity(40U);
    msg.fps = 47U;
    msg.quality = 99U;
    msg.reps = 78U;
    msg.tsize = 165U;

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
    msg.setTimeStamp(0.13864728288184136);
    msg.setSource(2541U);
    msg.setSourceEntity(81U);
    msg.setDestination(35986U);
    msg.setDestinationEntity(43U);
    msg.fps = 40U;
    msg.quality = 239U;
    msg.reps = 57U;
    msg.tsize = 159U;

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
    msg.setTimeStamp(0.1336946803575133);
    msg.setSource(28495U);
    msg.setSourceEntity(12U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(80U);
    msg.fps = 230U;
    msg.quality = 205U;
    msg.reps = 19U;
    msg.tsize = 76U;

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
    msg.setTimeStamp(0.18888709552385852);
    msg.setSource(42567U);
    msg.setSourceEntity(8U);
    msg.setDestination(23663U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.5571742196414006;
    msg.lon = 0.2464377350669953;
    msg.depth = 39U;
    msg.speed = 0.16698376573667306;
    msg.psi = 0.6651099598906351;

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
    msg.setTimeStamp(0.7729386541165297);
    msg.setSource(51909U);
    msg.setSourceEntity(230U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.6593405612470479;
    msg.lon = 0.05446357946857672;
    msg.depth = 110U;
    msg.speed = 0.9938708151597564;
    msg.psi = 0.20019359309906548;

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
    msg.setTimeStamp(0.4430715329635979);
    msg.setSource(22606U);
    msg.setSourceEntity(155U);
    msg.setDestination(57222U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.421318978704753;
    msg.lon = 0.7686084245436392;
    msg.depth = 43U;
    msg.speed = 0.11773894206026292;
    msg.psi = 0.2990835560978332;

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
    msg.setTimeStamp(0.7263216545514835);
    msg.setSource(54143U);
    msg.setSourceEntity(95U);
    msg.setDestination(58809U);
    msg.setDestinationEntity(140U);
    msg.label.assign("USTHHHQWMHQFBKVPQDYNKBGSQSSKFGTPENMIALFOQKQOJUHFXSZUGVKLAGXRRBLXCKHAOPMNDVCSYCNMPMMRWKMSOFZRUTZGRGCVWEIIXFRZOKTUGAPJLZXVPCNHVVXDYEXNTLLHYBXTNBVJCLFEODAYJYANEZDTMDTRRBMJCIYTIWFYEGRGQJLBNAWYQJZICTOW");
    msg.lat = 0.46399752010969775;
    msg.lon = 0.12209138217259241;
    msg.z = 0.21739539988562262;
    msg.z_units = 242U;
    msg.cog = 0.03804816405260103;
    msg.sog = 0.8730891134146205;

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
    msg.setTimeStamp(0.23852239303156375);
    msg.setSource(54120U);
    msg.setSourceEntity(71U);
    msg.setDestination(56138U);
    msg.setDestinationEntity(72U);
    msg.label.assign("BKWGRMOUNMDFKOCFBKDUJADSTDBXMAYKJIEQNFDVTYJRQCYAKTBVNTHUOCETNFUQXFXVCPEHGAZJOPFEWRLYHMJNQFF");
    msg.lat = 0.6614455497698333;
    msg.lon = 0.7274821776571184;
    msg.z = 0.49500589629329206;
    msg.z_units = 159U;
    msg.cog = 0.7620641141739747;
    msg.sog = 0.5232674690228106;

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
    msg.setTimeStamp(0.9204666592926769);
    msg.setSource(54417U);
    msg.setSourceEntity(247U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(20U);
    msg.label.assign("MIKZONTTHDEYKECCSDUKLJSOUNPZFRYYYPBQRQCMGRKKNLIZREMGPYPGDFYAECUUXJYMILVWCFGBYXBDNHXKHANOWUWUASNTGQKJZIC");
    msg.lat = 0.5854416358557182;
    msg.lon = 0.15693399558797005;
    msg.z = 0.7692826799067162;
    msg.z_units = 184U;
    msg.cog = 0.9856884540379701;
    msg.sog = 0.5598268590948674;

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
    msg.setTimeStamp(0.3441302287613235);
    msg.setSource(28857U);
    msg.setSourceEntity(91U);
    msg.setDestination(40078U);
    msg.setDestinationEntity(108U);
    msg.name.assign("KQYZBWLHTVPPTPAQEIWFFTWPJQAND");
    msg.value.assign("TJRYVUBCQENCBIIETOASCBLRWOKVXDICAMEZYRLDDEUATDTDZQFWXLQMGYNOOIRGHCRUWCTYEKNSSILFXYNWHHOABVTJXGMVEFNCPOXBFSESKZKWXJMPGTFIAYSQBDLPMGDVRIFZCBOOKZBMZFUUZTQLIHFAMXJHGFKJQJUDLKOWIAUPHTXBNNYQUPQMEUCNPFGIZJQVSLZAYSRAEPPMDHHGVBKLCWR");

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
    msg.setTimeStamp(0.35730656801748284);
    msg.setSource(29567U);
    msg.setSourceEntity(71U);
    msg.setDestination(63204U);
    msg.setDestinationEntity(187U);
    msg.name.assign("DOQJSLAVRTWBFTWBBQDMFBSMTKOGMODTIIPSOWPRNGHCIPCHMBZIZUONUTXSAVLYAXXTKKQEUFULTFREWNUTCCEKECLIEPPSPJVDZOKBLRZUZJJJRPQHNPLIYXQ");
    msg.value.assign("HINGNBLANJVLOJDRQRBUOMAZGEISELSQHGXFUJYWRXHCCTXCXLDDPOTILFJYPXRCNHZNSDHNFQBUNFIJCUVWDWFVDATMXVPUEAVIPUEOTIWGGYRLEOHXG");

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
    msg.setTimeStamp(0.9199837541293486);
    msg.setSource(55122U);
    msg.setSourceEntity(85U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(119U);
    msg.name.assign("BHJSRODGESRTJSAXCKRBZYBLIMZONCAQVKMYUJERGPIWDINJYNQLBOUIUOPXAYCLTLQKTKWMPOGITGMPIVGWEAQITOUECZEITQVTGFEADBECHXVPBHSZVVTYNKSDXLCCTDZYFJFRVJXHONZV");
    msg.value.assign("QRJKBGSHTRUZSFV");

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
    msg.setTimeStamp(0.6843297211091763);
    msg.setSource(46125U);
    msg.setSourceEntity(148U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XMIDZRCTQVEPSKHJCAFBZGO");

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
    msg.setTimeStamp(0.41557383269111436);
    msg.setSource(58869U);
    msg.setSourceEntity(24U);
    msg.setDestination(38868U);
    msg.setDestinationEntity(203U);
    msg.name.assign("LAIFTYFTGKXENXHKVKOAZILHVMZNRIRUQMHKFG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VGPEERHICSHZBURKWMYNHFRNNIGYKRCLFTWTMTDYDUOZSJVTWF");
    tmp_msg_0.value.assign("BSQVMXPTPMDGNGRQOONWZRT");
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
    msg.setTimeStamp(0.1592344472116488);
    msg.setSource(50989U);
    msg.setSourceEntity(104U);
    msg.setDestination(764U);
    msg.setDestinationEntity(154U);
    msg.name.assign("WSSUXTNAWDJNHDOXODAIXIBRGQZFMHDSSFBHQTGIPJFZBFMANRXYVBHPWXKJGPBZJAGTIEREWPRGZYZQVFYFGOQNATYKXLAWJGAFELPRDBDOTJQOWEQXULEZTOUCSRDZTIQLVNQYPZXKCPCFUABXJMTBNVVRPNEMSKKHRDCGFLGSUIVWMKUSKUCFWIKMYBOQC");

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
    msg.setTimeStamp(0.9488873085930754);
    msg.setSource(55528U);
    msg.setSourceEntity(65U);
    msg.setDestination(455U);
    msg.setDestinationEntity(168U);
    msg.name.assign("EEOKHTOBQTOXEUZWYTLKAPKGZKDMUXOEGVOVPJHRFNQHNXQBLIKVBRVTFXNPYNENPRPULSEQCZRJHJFUWAVHSUEXWYYVFRACIC");
    msg.visibility.assign("LMEOZCUXBAEFCPKDRRFKYGDITQWLHGOLVRJZSRZDPVKBINJIXMBUTTBLWYQMRAGZBBHCYACSOSGKIGJQNJUKVVQFANPRSDHRLNALMKLPIGAUQGWPRMABZDNEKXUVAWOKZMAEFYSIKQNWJSIJUBFHWHIXTVYFLWTTHKQSXHDUJEODVXINJRJZPOOBJTUXZLFMFBXCDYPUGQSSNHXDMMUTWLONOCEPRCZTEFSEDYZYG");
    msg.scope.assign("OKWMXBYFZZZOPOSMIXKCYHAJOSMCUVQBQWA");

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
    msg.setTimeStamp(0.5386930600616464);
    msg.setSource(44555U);
    msg.setSourceEntity(140U);
    msg.setDestination(26421U);
    msg.setDestinationEntity(223U);
    msg.name.assign("GDYFAEXKTSPYNAFTJJIJBCWKHDUVQAXXFERNLCWUKSOGMDJCXVLQVLIJRMVWHSDBTEZCDMPEJQWNSANORNHPDHKALJRJYIHCQQGEKUPCFTAXHZVKHBMOIVOTVAXQQCZURFDEXIMNGLMPNBZNJPFRNTOZOUPRKYIGLCPLPBDZUWIMARRWHTVXEKMWHYZXMNMS");
    msg.visibility.assign("GYSASXZTPYNOLLNKGYRWAQVVABLNVTSYBEHJDBPTDIEFJULEWXZKNWOYUKGWUTQXUVSSCTNDBHJSIWQUKRXEXEFLNQJJQWBRGBRKAIOOZHTMSGIH");
    msg.scope.assign("NAISVSIEOIESOABWWOFWDFGPYTDODNVCPCRGEMKCIHVHRNRSHMAALEHKCBVWBNTUGMQQSBUOCHWLGSTXRPQPSFBWYHXXZZZJSXBJENOWTCJCJKVMNXVKPJILLVKCWUMYXUYLXZAETZHMVBAPNUIXQQMYFGGOPDLCODEFFZXRZJMQLIL");

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
    msg.setTimeStamp(0.4736465663439069);
    msg.setSource(35854U);
    msg.setSourceEntity(43U);
    msg.setDestination(41595U);
    msg.setDestinationEntity(210U);
    msg.name.assign("VBRZRAESLSLFONPKBWCOWXNSHUERMAQFLITVVEUZZSGFDLOEOEKAVXYVTLVWGGDWCDIWFXXJTZYZIBFEGTAQAZDTFWJLLCXMNDJPGYRDNDCBOBPPSDPHHXCTWPFTUGIKHNRENQCFYAGOHHUWZEUVSZUFOKVIIKJBSJQXSIDYJKUMBMYNQWNHDZTBJOBTRKGYIJKJUQUWJTUABLCPGGZSAIRAOQSPCEF");
    msg.visibility.assign("OOYBTDUUAHDWVNNDZMLNKQOVTHURTBBUBEJFGCFXVSZOCBPUPHXZGOICEVCMLFRIWZKZELHBNXTKJKRGKSWEGEWCVBFCQGLOJQIPEASHP");
    msg.scope.assign("MFLWNMNYREGIBMMTEEQPQDJITDCIIQVRHSMJUOCGOYQAHXJNBUOOZVSWQHEGZPSDDJCKUZQYKJBHLHNAENLYXVU");

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
    msg.setTimeStamp(0.45937371512267444);
    msg.setSource(47026U);
    msg.setSourceEntity(136U);
    msg.setDestination(11853U);
    msg.setDestinationEntity(251U);
    msg.name.assign("IIIZPMDRQGYHIBSVFAMWKOYOHVPGKZNAWBCHTKLLEQBZNIJFJWRMUBSKGMVCECOPATGXFQCUBALARWQOTESRPEKVEUHYJEYDAFSNBEF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TKEDDZFUQQBAQNTBOTRSCSFGIYRIOADWPMRQVKSKVIHRWVUBJIJLCINDXSGPHVDUSRWCANAXUDZYIEKXLDJBFMLVZXHLLITMIFXCZAWLXEVANSOYBEMMUTTNGYU");
    tmp_msg_0.value.assign("FVARMUGBWNHYWHVPPFHSDGNBBMSTIMYCDNOODDIIRCOTJRHEMVQJTMCEYLPLSUREDUT");
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
    msg.setTimeStamp(0.06456712905241946);
    msg.setSource(36885U);
    msg.setSourceEntity(87U);
    msg.setDestination(36364U);
    msg.setDestinationEntity(63U);
    msg.name.assign("PNGGKJZSMCGGRTNCSZCOUGEIINPJORBWEQWSGQUZUHSAFIHCAXCMJTNCAEMNPWRCADPIV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LBOPCOBOXYFRPXEACIXGFQFLISBHSNIVKKARGNUCQZTUKJVJLYA");
    tmp_msg_0.value.assign("GZMUJKASKZSLVRWSBMWINMOCMUTUOTBLZWFIHQTNZTMNSNAWOQSIVPTDPHJIMPNULXGLFDECSJEKPEHYSXCYQICQAXCRDYBJQXAJBSWVJZPWOKJJDZEWAGEUVQBRVBFFZCYOETOADUNXKFXKMVNHQXJX");
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
    msg.setTimeStamp(0.6666776955891428);
    msg.setSource(42783U);
    msg.setSourceEntity(90U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(171U);
    msg.name.assign("XXNTFFROVKIYPJREXLNKHOJIUHJDLIRUMWNHLGQPHYOHWPAKOCWCCYJCHLSAAEDFRTNOGSBQKLMCHNWDHKQDRQWYMFGYEXBARTIQMUQZZLNDFRGMTFMMVWMSAVCPJOIWCVUTYKEAISDAUNBKTIRDGBYTUPESLUXQBQVKOSFGRBPZSMFLDWVOLYEZJGPZTQMCESHNGVDSEBBXLRJPJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VEMVRHUQIRTNRWTIYPLXFDPOJYVZHAJOSLVXNAJSRQPYMOLXOJNCMJHCPNHKDTNLDUUAPKPBHNUQTCKA");
    tmp_msg_0.value.assign("KLHFGTQUCMYPJJONNOVUIBBCREQDZDYSKZTMTZKVFFITGNWQBMJJBHRRQORRPYRDIUFAYZILPVAXCCAKLJXKYVWFMVWWKESUPBZPQIMQNDGREWNSLWEZUVMJAYOPGGSMDEMXVPNDYGBTILNGFAVXMGHAJLZTTBXCFAAKLHCQHQGUXVDXVDHHYWOTZXGRPOUSNSRUSPCSJMEWCDYLFEZKOOKQTELCCBJWABWFI");
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
    msg.setTimeStamp(0.4574730066343341);
    msg.setSource(52049U);
    msg.setSourceEntity(170U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(55U);
    msg.name.assign("WPFPLKEZIRFGIWZLXDXGURCYQAKYBBCJIMDXIWAWCKUYEKHSNMOANZOIDZHRBEYXZJHMODHIMPCKYSHFTLSXLWKUUPTJRQPXHMESICNKFJUEM");

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
    msg.setTimeStamp(0.2912392197525713);
    msg.setSource(19991U);
    msg.setSourceEntity(245U);
    msg.setDestination(46959U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QUGTXQBDASURUCFLHTNHBQZTYIJFPLNBTPEMJZIGUEZKNKNNYBFWYEERLXIVGTFYOYYXAHMFKSNQBUMVEEKVPSVAXOSGEWPAJLVMRWXLKBJXGCJCUDYUYBIFKRJHQGWGGPYVTCSPUSQOVWIIAOPLJMFAOPSSVLXDBWSQUOEFQMLAPCZMKJRDMFNTARNGRHTSHOWDPLOKLHROVWYIEBXZIXIDBTZWDIHHZCCHGJNCORDKMXCZJTZVRDKD");

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
    msg.setTimeStamp(0.7501645589906465);
    msg.setSource(55091U);
    msg.setSourceEntity(180U);
    msg.setDestination(27601U);
    msg.setDestinationEntity(234U);
    msg.name.assign("DEXJQPQLQMBGHWOJUSUUXTAKNSXJANKTMJKAHPZCKRVVFYEHYJTLZQGBETIDHOMRLLAXGKHTYNFKAHDVZRVIZOZTWGVVPQDICUNTCMSRMINZGWTIIMZOQBGFAOXYLJAQOPKCATSFSEYYZGEDOFNSNRRCOGODCBDHBEICLEBYMJHSXHSBEUJWFFCUPQPGKYPUVKMHRXIKNRVSLZCIRYVUMDDWDALWSPNBXWXUOULNGFQF");

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
    msg.setTimeStamp(0.7219168244638218);
    msg.setSource(22654U);
    msg.setSourceEntity(45U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(157U);
    msg.timeout = 220499574U;

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
    msg.setTimeStamp(0.6664177386223453);
    msg.setSource(56670U);
    msg.setSourceEntity(85U);
    msg.setDestination(1200U);
    msg.setDestinationEntity(183U);
    msg.timeout = 3728810391U;

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
    msg.setTimeStamp(0.27826422237366855);
    msg.setSource(56803U);
    msg.setSourceEntity(45U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(161U);
    msg.timeout = 669925911U;

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
    msg.setTimeStamp(0.20174963324764172);
    msg.setSource(48791U);
    msg.setSourceEntity(211U);
    msg.setDestination(55410U);
    msg.setDestinationEntity(250U);
    msg.sessid = 3118266499U;

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
    msg.setTimeStamp(0.9705429440791301);
    msg.setSource(40163U);
    msg.setSourceEntity(171U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2934211854U;

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
    msg.setTimeStamp(0.3764927868341338);
    msg.setSource(35193U);
    msg.setSourceEntity(98U);
    msg.setDestination(44376U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2892541061U;

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
    msg.setTimeStamp(0.6990843457307006);
    msg.setSource(3605U);
    msg.setSourceEntity(66U);
    msg.setDestination(10818U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1100923178U;
    msg.messages.assign("SURRRBLCLCLVUSDBZXOPWAIUOPJAWDSJDMQPBSOGXKMAEFNNZHGRINFLABMGCJQWKAWLLTLOSIUBDYAORPVQALZYVTEMUWWYUVHIVCTGWM");

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
    msg.setTimeStamp(0.32956717201146424);
    msg.setSource(32865U);
    msg.setSourceEntity(130U);
    msg.setDestination(40392U);
    msg.setDestinationEntity(162U);
    msg.sessid = 437334663U;
    msg.messages.assign("CZSDRBBWFGFJQNMKYWUXMUIUDECTHBGOXEHYURQBWPWVTBZOMFTHLVQITXYKVMARXXLLUKDZIJHASUOYJDBTKYZLNFRZSANDEJWIXPFFVWWKYEBNGOXPTYQVCUH");

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
    msg.setTimeStamp(0.3296304553647711);
    msg.setSource(33867U);
    msg.setSourceEntity(244U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1767526700U;
    msg.messages.assign("AEZXAKITLJEFPTSJNLVMBTYUEAPTFGJLFORW");

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
    msg.setTimeStamp(0.06515528723380204);
    msg.setSource(64522U);
    msg.setSourceEntity(114U);
    msg.setDestination(63065U);
    msg.setDestinationEntity(64U);
    msg.sessid = 4226125844U;

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
    msg.setTimeStamp(0.5941389158449925);
    msg.setSource(36648U);
    msg.setSourceEntity(250U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(164U);
    msg.sessid = 2472107748U;

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
    msg.setTimeStamp(0.43272826287622035);
    msg.setSource(32849U);
    msg.setSourceEntity(137U);
    msg.setDestination(65449U);
    msg.setDestinationEntity(194U);
    msg.sessid = 897322399U;

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
    msg.setTimeStamp(0.6673896777678086);
    msg.setSource(4188U);
    msg.setSourceEntity(143U);
    msg.setDestination(42542U);
    msg.setDestinationEntity(25U);
    msg.sessid = 2163590950U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.8076157320370144);
    msg.setSource(18912U);
    msg.setSourceEntity(117U);
    msg.setDestination(31865U);
    msg.setDestinationEntity(107U);
    msg.sessid = 1751330854U;
    msg.status = 72U;

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
    msg.setTimeStamp(0.18017296487160173);
    msg.setSource(1740U);
    msg.setSourceEntity(231U);
    msg.setDestination(13475U);
    msg.setDestinationEntity(41U);
    msg.sessid = 556096209U;
    msg.status = 15U;

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
    msg.setTimeStamp(0.8608621345637893);
    msg.setSource(14229U);
    msg.setSourceEntity(49U);
    msg.setDestination(12923U);
    msg.setDestinationEntity(52U);
    msg.name.assign("BWDGXPNIWUPMHTSUYT");

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
    msg.setTimeStamp(0.6031741114613897);
    msg.setSource(19490U);
    msg.setSourceEntity(222U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(26U);
    msg.name.assign("RCHFMIGEZMAUPFOLAZWALBJVLSRUINOJPGPLEPUVSMYJBUMXCJJWTWUGXKDTPMUBVKCHUACHSKQUASALGDFDNHKHTGIYNOWZBLHUPLFNURRENWCOFAAXVCCYZIGJQSDINTRJWDWYQFRFWNNXOSIRDOHTQVO");

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
    msg.setTimeStamp(0.8307576403327267);
    msg.setSource(28826U);
    msg.setSourceEntity(109U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(76U);
    msg.name.assign("HSGNGDTYDJXSAKJPPYUBKROQFOSDZQNVYDYEVLNMSYXWUTEQHJPOCPTACCFVFRRXRBBIEGAITHHLOELIPFQPRLLQUYZJKIZPJOVSKEJHMXQEHNFTVFFSTIXNNNCCAQUEDNCXFVAXBSWIGDAMSZRBKIGOJDZMLLFIPK");

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
    msg.setTimeStamp(0.3835959249898805);
    msg.setSource(32812U);
    msg.setSourceEntity(105U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(235U);
    msg.name.assign("ZVEMETUVJQQWRRJWNHPNUUNLFVBPFWARDNEIXFZKHLTCFAQWCBXWPSQVMBLFAOBCTJAIRULCGWGPRMCHDMNCVMNWSMODVGTDIRXVODSDSHAYNOHELZOQPYYFTYBSIYDRFGENFLBORLHGQMPPZEUTKCHUBVJVYOSGSQXZABXXKGQKPYZDXZSYIZUSA");

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
    msg.setTimeStamp(0.9188991424291748);
    msg.setSource(22866U);
    msg.setSourceEntity(209U);
    msg.setDestination(38335U);
    msg.setDestinationEntity(165U);
    msg.name.assign("ZTYJXYWWLAEEOVRHVKFGHWNQTVLGNSCQKPBVIQGFFWZBQSUROUNSBQRRWJIEGEJONXYYWMUOASWHNQXQDTAMTAZIHKWDBCHSCIHADMXPRMDGCPNGZLEFRHQHUKBTCROITDZPUXDJVEZURGXPKPFOLGEBAACUYVRBNEXYSNHKMIBKDUJGJOFLLCMZEYLDKVYCSVKNMZAICPIDFXYSPW");

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
    msg.setTimeStamp(0.00583246560227102);
    msg.setSource(47876U);
    msg.setSourceEntity(96U);
    msg.setDestination(20709U);
    msg.setDestinationEntity(85U);
    msg.name.assign("ZIOEJLOGIUIBWDEDYAGAYKUGZMHIKXPSUVHFCAXORPVPVDDIQFJBARYQNVTVGPXLYBLWJCYKWTAZNSSOHWZZTFHCKCGRWOJXXDWFIGBZHSOAMREKPNRAMNJJONZEYHKXIDGKQXGELQHUJYCMYSJIZDQCEVFMOTBHXRNBDFPLMPTOSAPVGUTTTQRUFYUTQUERNLLFNIOCCSPJKSUVLMYWGSBUHQZWBNHJIQMF");

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
    msg.setTimeStamp(0.051624594487029385);
    msg.setSource(58584U);
    msg.setSourceEntity(227U);
    msg.setDestination(49448U);
    msg.setDestinationEntity(213U);
    msg.type = 170U;
    msg.error.assign("MGEXFUCLSQBOGAMTUKOYIVBOZYHFLNLUCTRTEGYNIWLCNKVDBXMPDLLVWPGFUGREZFCGZHKMEKQAASFUREDWMIMAJAOGGBFNVUJAONKSPECPAXYSCHQZMMXFOMXJBWUCHIGRVLDCTUVZBDOUMCTQAQKECORZTEIWYLYJDRWPDSPYFLTHIKRRSZJIHWXGNIKHNYNRZSEDEDAOVRVUYJQXSJXHSHAWLWQHVVIZXTKPQFYBQSTFXONBIJBBTKNJDP");

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
    msg.setTimeStamp(0.9356809712597799);
    msg.setSource(49554U);
    msg.setSourceEntity(136U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(193U);
    msg.type = 103U;
    msg.error.assign("WPVDMYNBRITOURAKMRYIBQWMTLKAXMHTXLVHVRJBEJXUDEGLYVOOXDIAEXXOKFEGCDBKLZWVFSZNCSAPEOPHNTRSJBKYQJFZIAOAWYPACCPISUKSCCSYCUYGYTBIRDSEUZTFEOXUKTWFLNLNPMWQDDHHCFHZZNIVCVBWWZNZJLDEMBJNUJRGXQHUOGXGVBWMOQHGMUSFBMPPQJIQHVKZX");

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
    msg.setTimeStamp(0.7941317269222481);
    msg.setSource(24851U);
    msg.setSourceEntity(130U);
    msg.setDestination(18740U);
    msg.setDestinationEntity(20U);
    msg.type = 143U;
    msg.error.assign("IOCRSGAGJLCYIVDWDWHYCVZLWRNNKAUPIKRMUAQJVHFZQDNRMBVZQEVJMJTNETTPPACZJWNYFSFOUSFZRDEGSGPCWMQMCOHGOTNOWEAYOCJLJRCDRXGZK");

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
    msg.setTimeStamp(0.4833830778097923);
    msg.setSource(46575U);
    msg.setSourceEntity(163U);
    msg.setDestination(25856U);
    msg.setDestinationEntity(160U);
    msg.seq = 22100U;
    msg.sys_dst.assign("JKVWFXEPDGGMIFIQRGZYYTHKHOIQSOZIQDUAXNWGTWRQFEUZDHRLORTBDXDELCIJOUVSKVQJJKQCLSAQIBJGZAKEIMCCSZMFGIPPPXSVYFOZQOZITKNKUVETMHSLYYFOYWVLPYN");
    msg.flags = 143U;
    const signed char tmp_msg_0[] = {109, 95, 11, 38, -43, 38, 64, -25, 37, -82, 79, -55, -73, -41, 122, -115, 103, 105, 0, 57, -66, 104, -46, -69, 78, -36, 89, -34, 15, -92, -19, 29, 8, 89, 69, 112, 74, 108, 55, 21, -65, 1, -11, 64, 122, 96, 42, -36, 79, 71, 12, 75, -67, 107, -126, 0, -120, -46, -127, 35, -112, -112, -23, 22, 35, -80, 11, 52, -63, 94, -109, 89, -35, -82, -23, -22, 31, -28, -118, 1, 74, 104, -25, -22, 69, 120, -75, -46, 46, -34, 20, -72, -115, -75};
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
    msg.setTimeStamp(0.7431044428371393);
    msg.setSource(38662U);
    msg.setSourceEntity(206U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(36U);
    msg.seq = 9637U;
    msg.sys_dst.assign("NGOAMIHSQKQSHAVWLAXMEEHNBJRRMRDMCTUXSFINDGTJJFJCDPAUFSTLZCIKPAELZALTVZZFKHMOUPGGEUNGQNQBGXVWDEYMBOIIBBZCUZUYIKDQRCPBKSIHQXYMRVBEHCIUPQZFPGTMWYZTQCBWNUELRAVQAIOOGLYXLSSHYFHSKKVMNTND");
    msg.flags = 49U;
    const signed char tmp_msg_0[] = {7, 84, 81, 60, -32, 52, -106, 97, 79, -76, 114, 4, -57, 87, 3, -113, 95, -14, 70, -1, 42, 22, -80, 59, -88, 14, 39, 47, -67, 56, -53, 44, -70, 0, -68, -63, 101, 9, 103, -8, -115, 18, -107, 29, -110, 59, 9, -23, -4, -23, 24, -111, 46, 115, 65, 60, -13, 95, 1, 60, 106, -33, 23, 122, -22, -92, -40, -75, -77, -63, -115, -33, 95, -126, 83, 1, -47, 14, 87, 41, 119, 81, -109, -63, -128, 20, 93, -92, -116, -73, -119, 121, 44, -62, -2, 58, 53, 106, -31, -58, 85, 31, 125, 115, -19, 4, -59, 7, -127, -114, -122, 41, 26, 36, 15, -53, 91, -121, -41, -5, -80, -103, 74, 118, 117, 86, -72, -123, 95, 115, -27, 88, -56, 77, 86, 19, 25, 13, -28, 125, -34, 58, -90, 33, -9, -85, -98, -118, -124, -87, 98, -87, 116, 71, 64, -25, -45, 116, -33, 67, -124, 96, -123, 97, -79, -24, -91, -12, -88, -18, -50, -73, 38, -34, -100, 115, 74, -44, -67, 23, 73, -110, -86, -24, 104, 14, -6, 19, -22, -105, -17, 98, 107, -76, -50, 59, -9, -123, -51, -38, -49, 99, -93, 2, 116, 82, -121, 0};
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
    msg.setTimeStamp(0.2426365366280091);
    msg.setSource(64542U);
    msg.setSourceEntity(80U);
    msg.setDestination(7878U);
    msg.setDestinationEntity(130U);
    msg.seq = 37923U;
    msg.sys_dst.assign("HJVQMWERDLOYHSNFVXPHXIYDPXXQHXDIFVIEVIQJVTCSOCEMABXWOXDRSIUPUEZVZQESKVYGAJMBAGUWYFGYQVEBTBTEUJVOHLNYRCJHYWNDRFMTIMLMUUYGUKWDQJZLBINBQVKLTKXZOEPZFXBYOGFRQKSPWOWCGJ");
    msg.flags = 3U;
    const signed char tmp_msg_0[] = {69, -13, 109, -1, -5, 124, -26, -51, -13, 15, 19, -15, 64, 22, -113, -98, 72, 114, 26, 119, 58, -45, 39, -57, -115, 85, 96, -45, -96, 37, -107, 54, 100, -84, -64, 44, -32, 88, 100, -15, 117, 90, -87, 21, 1, -107, 45, 35, 63, -2, 3, 78, 0, 39, -37, -76, -14, -59, -124, 73, 11, 103, -54, -42, -18, -116, -59, -118, -69, -54, -99, -128, -107, -26, -60, 64, -11, 114, 34, -39, -53, -59, 36, 22, 18, -6, 85, -83, -66, 92, 86, 91, 105, -45, 116, -15, -65, -73, -103, -15, 15, -17, -48, -86, -119, 0, 102, 125, 54, -34, -125, -69, 115, 106, 84, 115, -97, -24, 6, -78, 111, -75, 55, 77, 17, 59, -44, 20, -36, -70, -39, -30, 107, 21, -117, 70, 95, 96, 91, -63, -26, 64, 65, 34, 23, 38, 72, 81, 1, 27, -2, 51, -12, -55, 81, -19, 48, -17, -64, -111, 32, 35, -39, 31, 28, -36, 45, -77, 53, -39, -94, 39, -43, -6, -29, 9, 64, -75, -67, -1, -126, -87, 91, -94, -59, 113, 123, 77, -99, 69, -86, -28, -65, 44, -118, 47, -68, 8, -7, -52, -69, -80, -70, 37, -85, -42, -79, 125, 112, 63, 59, -83, 121, 64, -40, -29, 6, -34, 81, 27, 24, 0};
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
    msg.setTimeStamp(0.15490644721392355);
    msg.setSource(35793U);
    msg.setSourceEntity(65U);
    msg.setDestination(28329U);
    msg.setDestinationEntity(214U);
    msg.sys_src.assign("RJSVELAFLOGJBWTZUFTWYWRWFSIZPECANYLKWKVFAQFNHXQNNQGWIHDMTDXTDHYDFQOLTQSPJLNQPAKFXZKYJUUOAEKAMWJOVNLZWHBGIXNPLGRAHDOBXEMCCIQFYUGYCWXUHRZVCKEOPRSEIZJEDLSUKWXBDUXADTPQXSRVZQMRIHMNFIVVMHGMEEUTVJCGSMGJLSPCUMICVTBBBORUFGHSKERBYSVRCQYPMPJBHNCIJTDZLAOYKZ");
    msg.sys_dst.assign("RUPECDTSXMGBXKCAXEETUKBAYVENOJRCZOJUHPWHGDFYFDIYJKJVPPJGXQSIMOKXTGQBOCDUDJOVTGNLWTZV");
    msg.flags = 203U;
    const signed char tmp_msg_0[] = {-80, -121, 93, 88, -55, -35, -65, 41, -38, 95, 102, 103, 120, 75, -48, -7, -26, -126, -39, 81, 36, 114, 19, -77, 74, 68, 120, 5, 23, 14, 58, -16, 5, 104, 123, 124, 32, 105, -116, -55, 14, 23, 38, 119, 96, -17, 113, 55, 50, 7, 84, 15, -73, -1, -27, 113, 104, -127, -81, -52, 83, -57, 53, 16, 117, -99, -93, -23, -69, -100, -120, -39, 3, -94, 36, 0, 0, 113, 25, -66, 72, 21, -78, 31, 63, -8, 63, -109, 22, -44, -128, -61, -59, 84, 5, -126, -51, 66, 47, -98, 13, -23, -78, -63, -58, -54, 52, -87, 0, 18, 108, 30, 116, 53, -5, -67, -123, 107, 102, -1, 60, -117, 60, 51, 88, 28, 5, -116, -24, -6, -53, 82, -92, 12, 52, -87, 119, 122, -5, -59, -86, -93, -95, -32, 46, 125, 84, -74, 101, 99, -124, 63, -52, 87, 77, -70, 121, -24, 53, -96, -112, -57, -69, 124, -35, 125, -102, 36, 105, -5, -22, -15, -73, 111, -7, 51, 8, 51, 82, 73, 24, 54, -41, 44, -94, -71, -62, -107, 23, 26, -34, -99, 55, 62, -120, -108, -95, 57, 49, -83, 59, -87, 112, 30, 14, -95, -43, -107, 33, 73, 51, 95, 86, 67, -116, 30, 66, 70, -30, 95, -29, -35, -81, -79, -79, 9, 62, -12, -30, -85, -23, 75, 15, -113, -122, 101, -75, -24, 105, 83, 61, -17, -98, -127, 6, 89, -48, 112, -45, 30, 57, 85, 121};
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
    msg.setTimeStamp(0.6822839750787154);
    msg.setSource(36686U);
    msg.setSourceEntity(207U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("WAWSKEAMDPQUMLKJVXCSJDOYSAMVKDJGRYCSVYBTJQXDGKMPZKVGRPNZHEHIIQIIFFGMOUUTCCGOXSFNYIWOPBLWKPWGZPLAJPKIDERLRXBVVOWXYIAHRHKKWLACSGFQODT");
    msg.sys_dst.assign("TSTQCVPKKOUNQQIEJHVEPXRYUOTACJZFLGIXQQHSBMQTGLKRKLZVZTHRGYEUNUEPBUGXOPWFSOVOFQZNAJ");
    msg.flags = 100U;
    const signed char tmp_msg_0[] = {-75, 21, 13, -127, -77, 84, -101, -112, 63, -101, 26, 54, -20, -85, 23, 48, 73, -122, 100, 82, 53, 1, -55, -13, -76, 57, -116, -64, 103, 100, -19, 30, -4, -108, -90, -72, -36, 87, 16, -31, 97, -50, -21, -37, 80, 71, -2, 113, 69, 122, -2, -5, -44, -120, -86, 104, 90, 92, 126, -103, -20, 73, 23, -2, -102, 76, -94, 121, 26, -104, -24, 28, -91, 30, 24, 62, 53, 88, 53, -4, -113, -10, -36, -86, -27, -34, 16, -14, 54, 73, 26, 2, -74, 53, 10, 68, -69, -105};
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
    msg.setTimeStamp(0.1596405128841436);
    msg.setSource(35589U);
    msg.setSourceEntity(141U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(6U);
    msg.sys_src.assign("WJLWASYZUXFFOEDZMUCOAIWKYJRMDUYWPHSOGTZBOYJWLCGIDNDQEXVOHBSHBGXHYMXKFQSEGIZJSKVPAEQRQDZXOOQRITNBORPBTBVBYBNTKVGZNDJKORLMMQGLVICDWRSCXPMJXIICGNPTRLKAYEFEJWELHQCUYHZXRBFLLLFSUJEPZPGQQPWAPANCOZSFIWVTHNVKDGEVTIBTZDCHTALSYFPECMVMFA");
    msg.sys_dst.assign("FABRJVTEKIYFCAISXFNTCLAJCQIBCZANEWDYBDIGQNQIHLJVBTNFUPLWLHAZQWKNDPBOJOHLBAU");
    msg.flags = 29U;
    const signed char tmp_msg_0[] = {10, 117, 53, -74, -123, -48, -25, -9, -48, -35, 121, -102, 76, 2, -6, -74, 0, -56, 121, 8, -79, 59, 5, 57, 86, 24, 70, -65, -31, 122, 95, -43, -10, 89, -61, -3, 47, 20, 41, -125, -1, -118, -104, -2, -116, -79, 63, 18, 66, 88, 75, -22, -124, -60, 34, 79, 48, 96, -113, -75, -87, 115, 72, -15, -14, 6, -120, -12, 5, -106, 21, -36, 60, -128, 36, 42, 89, 16, 107, -56, -35, 93, 126, 51, -46, -50, -117, 51, -92, -50, -17, 99, 1, -8, -49, 3, -27, -7, 115, -86, -30, -31, -39, 24, -63, 77, 110, -38, 30, -115, 95, 43, 29, -6, 56, -96, -39, 56, -58, -48, 29, -3, 0, -8, -90, 51, 37, 74, -92, 101, -60, 98, 121, 11, 30, -53, -30, -15, 108, 7, -37, 55, 62, 121, -50, 53, -52, -123, -86, 26, -116, -101, -115, 73, 35, -17, 123, -51};
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
    msg.setTimeStamp(0.39205172160334867);
    msg.setSource(42086U);
    msg.setSourceEntity(162U);
    msg.setDestination(21949U);
    msg.setDestinationEntity(150U);
    msg.seq = 37131U;
    msg.value = 237U;
    msg.error.assign("RHCBJJGVETNZYTLKCYQAB");

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
    msg.setTimeStamp(0.6106341775888742);
    msg.setSource(40918U);
    msg.setSourceEntity(245U);
    msg.setDestination(53503U);
    msg.setDestinationEntity(145U);
    msg.seq = 5088U;
    msg.value = 170U;
    msg.error.assign("UNCSBODOYQPKPSPIORNJHDLRGGVVWRHYQQGSXFDLEBQTJNGODXDELBMHWZHUKKRNNEVWVMQCAYMTYGFUDZSHKQWRZEGIKMIHFQPFKVPYJXOPUBIJZCWCFSRBLIXZVCSYXCFHPUTSDJWRJVDEHJGOSIYSESYZACZMAWANMUFGLWLBE");

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
    msg.setTimeStamp(0.6227031273818354);
    msg.setSource(19820U);
    msg.setSourceEntity(217U);
    msg.setDestination(19450U);
    msg.setDestinationEntity(104U);
    msg.seq = 42793U;
    msg.value = 217U;
    msg.error.assign("NSEVCHTLTXRUCMDAZMVGSTLUTIZKHWFMBAMEYJXOSEBWDNHFHQCINJMPFJMPXKUHVIVQIAVRHBLJGKYMUXWCVRBZZJVXIKUCCWOEADSWUYQRCDNMANRVSGDKZQELFOSDYKPOGKLOJGDWWTIBJAKFHWEXYLQNBHXKUHNZLPCTPZRYOZUCUFTVOFQTKXTJZFBBYYDIRFLAEJSIXGQOPANERPGLGMUHCPINSDOEPYVSBYXNZGOEAWR");

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
    msg.setTimeStamp(0.8865992601966632);
    msg.setSource(858U);
    msg.setSourceEntity(209U);
    msg.setDestination(45129U);
    msg.setDestinationEntity(82U);
    msg.seq = 45656U;
    msg.sys.assign("QFIMOWCVOOQXDGAUOEWHPYXRCRYQJYYFFQITEMNRKHMJWFOKCWFBMVNSUJUAUEBWSRXWNTVVKVZETGYADUBLXHXCKVJQMLOLSWDCSNNZGRIMHQITPBURGLAZAFKRJJVPSVMNYIOGBDCEKLQTADYPAOPZGJOPQEJQEZUEYHEHIUDAFRGPP");
    msg.value = 0.639359679353817;

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
    msg.setTimeStamp(0.7199011805220862);
    msg.setSource(46611U);
    msg.setSourceEntity(120U);
    msg.setDestination(41485U);
    msg.setDestinationEntity(172U);
    msg.seq = 45190U;
    msg.sys.assign("HOPZDQKDAHIAQPFBHIXEABCJDCMLDXVXNHEYEGZUVLTWSHQAZONRJPSAFNGKWWQTRUYYFFLQHFUFZVLQYMVUIXOIUIEA");
    msg.value = 0.8576644924738249;

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
    msg.setTimeStamp(0.759917501358605);
    msg.setSource(2610U);
    msg.setSourceEntity(15U);
    msg.setDestination(50873U);
    msg.setDestinationEntity(88U);
    msg.seq = 40908U;
    msg.sys.assign("JSMHCJHWHCZ");
    msg.value = 0.4976755839219248;

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
    msg.setTimeStamp(0.0010206875586248332);
    msg.setSource(42437U);
    msg.setSourceEntity(226U);
    msg.setDestination(55941U);
    msg.setDestinationEntity(103U);
    msg.seq = 5382U;
    msg.sys_dst.assign("PABAAEIKIEKHGFVJMRHMVLJQNMPVBJVCQAIFUAIGFDFRDYIQUSJJNAHZTGAPDQXNGPIYYNNHCK");
    msg.timeout = 0.9400860527454254;

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
    msg.setTimeStamp(0.07102326582413043);
    msg.setSource(44931U);
    msg.setSourceEntity(93U);
    msg.setDestination(4047U);
    msg.setDestinationEntity(62U);
    msg.seq = 17704U;
    msg.sys_dst.assign("EROKXUMMDGFYHOVKSTVGHWLHKKSNHZJTVAEZMFKIJJYZEWEAPKAXXACBXLUFNMJCTELPSCYASPPMUSXRGFAPIHRQVNWJUCQTMXQBGGIYLYVCVITJWYNKOSIV");
    msg.timeout = 0.4854936049637546;

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
    msg.setTimeStamp(0.2695561778913649);
    msg.setSource(43910U);
    msg.setSourceEntity(233U);
    msg.setDestination(28427U);
    msg.setDestinationEntity(55U);
    msg.seq = 9883U;
    msg.sys_dst.assign("AHGBMPIBWPLQGYHFTOOEKSPHFPUYZVIMWLKRIFWTDAXDWINOURWUCNHGGQCVSJHKUAKVELYGQUXVVWBFNTEMKOQAKYHNSZPSOTFECJUPMZWWBNJNUEXCTJGALHXNBORKFICPVXMJCPLLAMBEZXXHTDBEERAUYHFSXLOQBVSZCLAQCVI");
    msg.timeout = 0.7269985795943781;

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
    msg.setTimeStamp(0.9441066891441992);
    msg.setSource(39253U);
    msg.setSourceEntity(217U);
    msg.setDestination(10321U);
    msg.setDestinationEntity(22U);
    msg.action = 131U;
    msg.longain = 0.7709527835960938;
    msg.latgain = 0.3215294782041138;
    msg.bondthick = 3651862254U;
    msg.leadgain = 0.47880340343377836;
    msg.deconflgain = 0.09211410498367811;

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
    msg.setTimeStamp(0.3156652789027721);
    msg.setSource(60283U);
    msg.setSourceEntity(232U);
    msg.setDestination(23654U);
    msg.setDestinationEntity(80U);
    msg.action = 183U;
    msg.longain = 0.5068433394438373;
    msg.latgain = 0.49854595417391045;
    msg.bondthick = 2441237747U;
    msg.leadgain = 0.5425450925304767;
    msg.deconflgain = 0.08699318564410674;

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
    msg.setTimeStamp(0.35318742801784764);
    msg.setSource(11185U);
    msg.setSourceEntity(166U);
    msg.setDestination(23994U);
    msg.setDestinationEntity(120U);
    msg.action = 174U;
    msg.longain = 0.17153196512505253;
    msg.latgain = 0.2486870959955818;
    msg.bondthick = 264509361U;
    msg.leadgain = 0.9342086867672803;
    msg.deconflgain = 0.5561271356046452;

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
    msg.setTimeStamp(0.46841229097599);
    msg.setSource(46859U);
    msg.setSourceEntity(174U);
    msg.setDestination(62931U);
    msg.setDestinationEntity(120U);
    msg.err_mean = 0.7204629505966981;
    msg.dist_min_abs = 0.7122593012585877;
    msg.dist_min_mean = 0.6437508907574799;

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
    msg.setTimeStamp(0.06633214231768647);
    msg.setSource(4789U);
    msg.setSourceEntity(23U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(130U);
    msg.err_mean = 0.17783482203564094;
    msg.dist_min_abs = 0.11929089549383531;
    msg.dist_min_mean = 0.6626117539763717;

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
    msg.setTimeStamp(0.413609569198508);
    msg.setSource(60723U);
    msg.setSourceEntity(39U);
    msg.setDestination(41358U);
    msg.setDestinationEntity(201U);
    msg.err_mean = 0.6555550345579594;
    msg.dist_min_abs = 0.8191499431111298;
    msg.dist_min_mean = 0.9732143118278392;

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
    msg.setTimeStamp(0.018042392541450458);
    msg.setSource(41434U);
    msg.setSourceEntity(182U);
    msg.setDestination(33790U);
    msg.setDestinationEntity(43U);
    msg.action = 217U;
    msg.lon_gain = 0.16851868242420298;
    msg.lat_gain = 0.3875892388431217;
    msg.bond_thick = 0.900280863273888;
    msg.lead_gain = 0.7454173407735515;
    msg.deconfl_gain = 0.7217288878060351;
    msg.accel_switch_gain = 0.8932947679292546;
    msg.safe_dist = 0.9273738561487389;
    msg.deconflict_offset = 0.9274209205553972;
    msg.accel_safe_margin = 0.9623934548541656;
    msg.accel_lim_x = 0.7665367127825794;

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
    msg.setTimeStamp(0.6103962643711748);
    msg.setSource(21491U);
    msg.setSourceEntity(16U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(204U);
    msg.action = 97U;
    msg.lon_gain = 0.30719750349224617;
    msg.lat_gain = 0.25580553590765853;
    msg.bond_thick = 0.9329088278418088;
    msg.lead_gain = 0.07776098496332162;
    msg.deconfl_gain = 0.09466832704986483;
    msg.accel_switch_gain = 0.9452766299864599;
    msg.safe_dist = 0.9552066491877551;
    msg.deconflict_offset = 0.6051353692651074;
    msg.accel_safe_margin = 0.9531346302553162;
    msg.accel_lim_x = 0.389335805368652;

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
    msg.setTimeStamp(0.302979260465706);
    msg.setSource(26025U);
    msg.setSourceEntity(135U);
    msg.setDestination(137U);
    msg.setDestinationEntity(182U);
    msg.action = 92U;
    msg.lon_gain = 0.05874072393102425;
    msg.lat_gain = 0.6622463272661986;
    msg.bond_thick = 0.9264364023047605;
    msg.lead_gain = 0.9748123623988864;
    msg.deconfl_gain = 0.9834445667519295;
    msg.accel_switch_gain = 0.2921025948517748;
    msg.safe_dist = 0.7009349786101023;
    msg.deconflict_offset = 0.016450462316416115;
    msg.accel_safe_margin = 0.8205928002902406;
    msg.accel_lim_x = 0.8968427676355738;

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
    msg.setTimeStamp(0.742395168018335);
    msg.setSource(13930U);
    msg.setSourceEntity(228U);
    msg.setDestination(46148U);
    msg.setDestinationEntity(85U);
    msg.type = 86U;
    msg.op = 201U;
    msg.err_mean = 0.5754305714664972;
    msg.dist_min_abs = 0.5354850688499226;
    msg.dist_min_mean = 0.82879968544309;
    msg.roll_rate_mean = 0.4988808646914563;
    msg.time = 0.7764011873544725;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 105U;
    tmp_msg_0.lon_gain = 0.8840125372283644;
    tmp_msg_0.lat_gain = 0.8804109316284806;
    tmp_msg_0.bond_thick = 0.21943916205161573;
    tmp_msg_0.lead_gain = 0.31717716289611475;
    tmp_msg_0.deconfl_gain = 0.8120399089509962;
    tmp_msg_0.accel_switch_gain = 0.05449824305367901;
    tmp_msg_0.safe_dist = 0.8898137842231099;
    tmp_msg_0.deconflict_offset = 0.1246066543189146;
    tmp_msg_0.accel_safe_margin = 0.21930019099706255;
    tmp_msg_0.accel_lim_x = 0.9366020082883618;
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
    msg.setTimeStamp(0.14536150557482386);
    msg.setSource(35972U);
    msg.setSourceEntity(29U);
    msg.setDestination(48841U);
    msg.setDestinationEntity(30U);
    msg.type = 111U;
    msg.op = 82U;
    msg.err_mean = 0.3371524368728466;
    msg.dist_min_abs = 0.5683776172882329;
    msg.dist_min_mean = 0.4692130365817946;
    msg.roll_rate_mean = 0.6408618955831217;
    msg.time = 0.9437803517209241;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 28U;
    tmp_msg_0.lon_gain = 0.8090636826633221;
    tmp_msg_0.lat_gain = 0.3777238353499326;
    tmp_msg_0.bond_thick = 0.06911050315912459;
    tmp_msg_0.lead_gain = 0.013927765573916506;
    tmp_msg_0.deconfl_gain = 0.1629498631413837;
    tmp_msg_0.accel_switch_gain = 0.6878128218414972;
    tmp_msg_0.safe_dist = 0.3295745622402816;
    tmp_msg_0.deconflict_offset = 0.9155414283803764;
    tmp_msg_0.accel_safe_margin = 0.1196691601998846;
    tmp_msg_0.accel_lim_x = 0.5693030031518759;
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
    msg.setTimeStamp(0.5811475223552115);
    msg.setSource(33889U);
    msg.setSourceEntity(218U);
    msg.setDestination(43563U);
    msg.setDestinationEntity(160U);
    msg.type = 231U;
    msg.op = 89U;
    msg.err_mean = 0.10113038925306095;
    msg.dist_min_abs = 0.03252181981313895;
    msg.dist_min_mean = 0.4031340043346787;
    msg.roll_rate_mean = 0.13850589664733648;
    msg.time = 0.04623719701657791;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 100U;
    tmp_msg_0.lon_gain = 0.07389165001504927;
    tmp_msg_0.lat_gain = 0.28167166030439617;
    tmp_msg_0.bond_thick = 0.47185588126921796;
    tmp_msg_0.lead_gain = 0.3568667761658736;
    tmp_msg_0.deconfl_gain = 0.127640862928858;
    tmp_msg_0.accel_switch_gain = 0.29619968113857464;
    tmp_msg_0.safe_dist = 0.6471939482300306;
    tmp_msg_0.deconflict_offset = 0.009425123864856721;
    tmp_msg_0.accel_safe_margin = 0.03801094548944495;
    tmp_msg_0.accel_lim_x = 0.04044390557010791;
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
    msg.setTimeStamp(0.803926861232048);
    msg.setSource(29167U);
    msg.setSourceEntity(164U);
    msg.setDestination(30735U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.5368424183100667;
    msg.lon = 0.31064820577864716;
    msg.eta = 685407944U;
    msg.duration = 2743U;

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
    msg.setTimeStamp(0.5860546305680168);
    msg.setSource(32040U);
    msg.setSourceEntity(44U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.8011651146679882;
    msg.lon = 0.019411654005735857;
    msg.eta = 665201186U;
    msg.duration = 1110U;

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
    msg.setTimeStamp(0.2611370096243416);
    msg.setSource(57486U);
    msg.setSourceEntity(93U);
    msg.setDestination(20691U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.10095044363317096;
    msg.lon = 0.16383753569579718;
    msg.eta = 1318569254U;
    msg.duration = 37605U;

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
    msg.setTimeStamp(0.9270688583579422);
    msg.setSource(24523U);
    msg.setSourceEntity(121U);
    msg.setDestination(35530U);
    msg.setDestinationEntity(85U);
    msg.plan_id = 40244U;

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
    msg.setTimeStamp(0.289833431422966);
    msg.setSource(51402U);
    msg.setSourceEntity(172U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(99U);
    msg.plan_id = 37978U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.3370950682970828;
    tmp_msg_0.lon = 0.9384358829186179;
    tmp_msg_0.eta = 2366851775U;
    tmp_msg_0.duration = 7239U;
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
    msg.setTimeStamp(0.5638664202436077);
    msg.setSource(36523U);
    msg.setSourceEntity(180U);
    msg.setDestination(57337U);
    msg.setDestinationEntity(213U);
    msg.plan_id = 10518U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9617189544097198;
    tmp_msg_0.lon = 0.2088808677560261;
    tmp_msg_0.eta = 806465929U;
    tmp_msg_0.duration = 24834U;
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
    msg.setTimeStamp(0.03181941550892975);
    msg.setSource(6113U);
    msg.setSourceEntity(122U);
    msg.setDestination(44701U);
    msg.setDestinationEntity(87U);
    msg.type = 76U;
    msg.command = 249U;
    msg.settings.assign("IQORNEYFAWFHXGZUFTPVMAQHFCYZFAIVBJLPGARFMSLBNKOMDMVVBNJURIXSMBJNDABSAMLTMOIUYKJGCFYDTVWBCVRYTSDQARTQGYXEFHMPRTRXSEFZPQYYLIWJUAUEGGXBHPTKXGQVBEGMLJCRCHIOIVYLHXZGKUQPAFRTXMONCCSTEBYSQLCZJDPBNOVWWOILTZKHQPKZHPHZWUSRXNVJXDUOPDADEWNEZNLCKIIOOQNH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41723U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8707194664735683;
    tmp_tmp_msg_0_0.lon = 0.6634100301169484;
    tmp_tmp_msg_0_0.eta = 436347192U;
    tmp_tmp_msg_0_0.duration = 49799U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GUSYWTXIBJBJTYJFHFBOAVKQV");

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
    msg.setTimeStamp(0.185479671231096);
    msg.setSource(2379U);
    msg.setSourceEntity(41U);
    msg.setDestination(59367U);
    msg.setDestinationEntity(24U);
    msg.type = 37U;
    msg.command = 29U;
    msg.settings.assign("SKXVBSZLZTQUXZEVOJXPDUGZDGJBVGFSKMRXECTUZZDFKETJTIPQXLLVARLPJGDWIKWONYYGCRYJMUBMMYBMYNDBGNMNFROYQOHHMAXIKPKJKUQCHQFDLVPKSNCIOOWZU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5433U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JRKKMVWGGXYSSDZAVYEDXZZHNCMRCFZDTMUDORBCFYAUIDHJWRMOOGLSVHIHRIYIEGBLEELOBPDHRKQLSQZUBTXTNRZCZBKLHDOQOHYTNUUFBKTLGYCGXVTWCNVHUQWBTMAFWFNSXQXKBAAYATZEIYKKAPJHMYPJWXKGIQRIVITDMEGMNVFPRPUMXWPEOXGUYNIWJVQQSDLJLZOPUCFSLJXOPJGAKQLAEUVCSQPDNIW");

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
    msg.setTimeStamp(0.695550996116897);
    msg.setSource(27298U);
    msg.setSourceEntity(62U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(243U);
    msg.type = 91U;
    msg.command = 183U;
    msg.settings.assign("QJCDXUXUTLQXUHUHBRYEMYEURMOLQWXUKZOSJHSCKMXTCRIASHKUBPVPPVJCGWXRZSKYKGTWRDPVNFZSOAMWCASFTNJSNVOIEFCTWNIWBZHQZTMVEROGJJFDJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42188U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3550003991128444;
    tmp_tmp_msg_0_0.lon = 0.5067158557762842;
    tmp_tmp_msg_0_0.eta = 1478822098U;
    tmp_tmp_msg_0_0.duration = 65156U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NVAIMYHGRZEJMITWJSSLKKNDLYEVACKRNWCXDUCSFRBPUEDOJWRXUUQJUCQNZSYBZGQDBDYCFWYEJVHEJZAZZPLKHSFRZGLOMEVDQHEMGQGFIYHMHMKSECXEDKHAAIJLVZTRDFJYLCCBUBAIXNLWWMXGVPWIXNCTKFYCYPVNKKDPTOUUPHMTNPZJQOVBQOTAOTXVBWLPIED");

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
    msg.setTimeStamp(0.4776660235585459);
    msg.setSource(21950U);
    msg.setSourceEntity(73U);
    msg.setDestination(49143U);
    msg.setDestinationEntity(18U);
    msg.state = 123U;
    msg.plan_id = 4854U;
    msg.wpt_id = 114U;
    msg.settings_chk = 31412U;

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
    msg.setTimeStamp(0.6099774906688881);
    msg.setSource(16797U);
    msg.setSourceEntity(94U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(151U);
    msg.state = 145U;
    msg.plan_id = 21748U;
    msg.wpt_id = 236U;
    msg.settings_chk = 9790U;

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
    msg.setTimeStamp(0.5791800452050583);
    msg.setSource(63124U);
    msg.setSourceEntity(201U);
    msg.setDestination(56376U);
    msg.setDestinationEntity(22U);
    msg.state = 223U;
    msg.plan_id = 34095U;
    msg.wpt_id = 226U;
    msg.settings_chk = 50695U;

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
    msg.setTimeStamp(0.684730452245591);
    msg.setSource(39221U);
    msg.setSourceEntity(32U);
    msg.setDestination(9383U);
    msg.setDestinationEntity(244U);
    msg.uid = 104U;
    msg.frag_number = 102U;
    msg.num_frags = 96U;
    const signed char tmp_msg_0[] = {-92, 99, -4, 13, -75, 100, -89, -127, -68, -49, -37, 37, 0, -84, 70, -89, 121, -34, 118, 28, -101, 80, -94, 0, 33, -109, 9, -55, 48, 79, 43, -51, 98, -113, 22, -65, 121, 92, 82, -33, 47, 105, -99, 65, -52, -58, -20, -107, 124, 124, -78, -38, 122, -54, 3, 70, 115, 77, -3, 71, -54, -6, -23, 107, -48, 57, 91, -83, 76, 49, 111, -38, -3, 91, -121, -78, 21, -25, 96, 44, 45, -7, -11, -35, -107, 123, 125, -113, -103, 78, 61, 105, 105, -5, -103, -58, 23, -90, -18, 55, -114, 89, 101, -101, -96, -96, 82, -24, -100, -50, -48, 80, -46, -101, 56, 71, 103, 1, -41, 125, -36, -87, 35, -10, 91, -1, 92, 86, 59, 56, -88, 115, -8, -93, 81, -102, 78, -114, -69, -43, -93, 92, -65, -118, -15, -82, 1, 11, -94, -108, -106, -116, 100, 93, -107, 95, 99, 121, -29, -37, -128, 35, 21, 59, -45, -102, 103, 87, -120, -109, 25, -125, 91, 90, -108, 117, 45, 82, 31, -115, 101, 75, 46, 100, 94};
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
    msg.setTimeStamp(0.4308901241448655);
    msg.setSource(65125U);
    msg.setSourceEntity(126U);
    msg.setDestination(14674U);
    msg.setDestinationEntity(153U);
    msg.uid = 79U;
    msg.frag_number = 202U;
    msg.num_frags = 62U;
    const signed char tmp_msg_0[] = {63, 2, 51, 112, 12, 21, 51, -59, 49, -31, -7, -35, 12, 124, -69, 50, 63, -50, -57, 101, 108, 43, -39, 61, 58, -120, -11, 63, -38, -90, -2, -75, -18, -7, 83, 58, -13, -86, 49, 18, 17, -45, -84, -67, 125, -48, -46, 14, -106, 120, -121, -111, 71, 80, 112, -90, -33, 111, -96, -9, 53, 59, -114, 64, 33, 64, 88, -3, 71, 42, -63, -116, -113, -24, 40, 11, 106, -11, 4, -46, 10, 57, -56, -40, 121, 8, 80, 20, -12, -73, 124, -24, 65, 51, 87, 13, 92, -36, 36, -22, -91, -59, 122, 86, 23, 64, -10, 22, -115, -84, -36, 55, 117, -76, 3, 6, -59, -24, 7, 3, -31, 57, 107, 23, 83, 117, -22, -36, 105, -85, -74, 76, -33, 67, 48, -79, 90, 124, -48, 36, 62, 101, -31, -68, 96, -50, -47, 75, 56};
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
    msg.setTimeStamp(0.09122314627699679);
    msg.setSource(12974U);
    msg.setSourceEntity(84U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(173U);
    msg.uid = 237U;
    msg.frag_number = 33U;
    msg.num_frags = 118U;
    const signed char tmp_msg_0[] = {-49, 14, -57, -117, -70, -74, 67, -3, 119, -79, 109, 56, 23, 50, -78, 109, 51, 60, 122, -55, -32, 65, 55, -88, 2, -112, -108, 111, 126, -27, -114, -23, 95, 112, 30, -79, -7, -43, -70, -128, -93, 95, -58, 57, -93, 62, -104, -70, 84, 119, -11, -83, 60, 48, 116, 114, 51, -6, 47, -112, -98, -80, 121, -30, -106, 2, 24, -61, -44, -121, -117, -86, -117, 46, -53, 21, 90, -50, 68, -19, -77, 49, 21, 61, 7, 56, -49, -59, -29, 20, -6, -66, 77, 36, 88, -82, -83, 82, -33, 5, 69, -27, -19, 60, -50, 83, -66, -64, -52, 18, -121, -97, 90, -43, 20, 114, -67, -24, -116, 23, 84, -60, 89, 40, 121, -79, -67, 84, -11, -88, -47, 18, 105, 62, 61, 94, 48, -22, -10, 96, -37, -7, -101, -113, -40, -40, -67, 10, -75, 105, -96, -51, -102, -86, -14, -96, 53, 37, -90, 43, -43, 21, 51, 58, -27, 81, -85, -55, -92, -120, 79, 107, -109, -122, -76, -112, 53, 52, 10, 22, -45, -18, -91, -38, 6, 6, -10, -74, -17, -31, -52, -46, -74, -10, -21, 68, 66, -120, 56, 115, 44, -107, 96, -50, 72, 56, 71, -54, 92, -69, -87, 103, 75, 81, -18, 110, -105, 33, 29, -73, -34, 66, 76, -112, 5, 9, -49, -44, -91, -106, 1, 85, -46, 78, 22, -119, 39, 62, 5, -122, 89, 54};
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
    msg.setTimeStamp(0.6637151474854438);
    msg.setSource(23052U);
    msg.setSourceEntity(176U);
    msg.setDestination(52669U);
    msg.setDestinationEntity(224U);
    msg.content_type.assign("CTUDZKMVAGAIQDCMHZYAIHUZNVBVQTJLGNKSRXIINRHWVLTALCSGAMKPEGRHFQOZJNSATEQKMUGWIGDYBWIVUESYRPUWWZOBXCQUXYHGJNBOMYPCHMNLFXD");
    const signed char tmp_msg_0[] = {19, 50, -3, -109, 87, 16, -75, -8, -32, -56, -52, 86, 63, -73, -124, 85, -26, -42, 119, -5, 48, -116, 66, -118, -61, 10, 110, -77, -109, 73, 57, 78, 27, -81, -47, 79, -51, 28, 62, 74, -76, -88, 101, 11, 16, 35, -98, 105, -115, -44, 113, 10, 109, 33, -22, -80, 105, -90, -51, -93, -83, 45, -43, 22, 15, 44, -101, -91, 53, -46, -65, -30, -20, -59, 68, 2, 60, 9, -7, 97, 68, -104, -12, 87, -98, -16, 86, 73, 13, -65, -74, 67, -34, 58, 83, -46, 69, -47, -119, 26, -1, -53, 72, -117, -112, -110, 53, 81, -7, -124, 73, -25, -37, 12, 54, 73, -53, -60, 122, -6, -126, -56, -3, -103, 14, 122, -118, -104, -56, -5, -115, 116, 43, 100, 16, 59, 9, 33, 35, 70, -68, 37, -12, -107, -53, 111, -69, 70, 80, 107, 100, 88, 79, 47, 126, -83, -58, -46, 48, 46, 32, -22, -125, 95, -108, 40, 101, 108, -34, -33, 66, -94, 73, 69, -47, -87, 88, 91, 74, -20, 23, 56, -86, -9, 41, 82, -23, -121, 26, -94, -48, -41, -40, -73, -13, -121, -35, -7, 67, 113, 75, 8, -115, -32, -26, 59};
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
    msg.setTimeStamp(0.93262000363332);
    msg.setSource(55425U);
    msg.setSourceEntity(79U);
    msg.setDestination(43214U);
    msg.setDestinationEntity(216U);
    msg.content_type.assign("JSQWPLXHDYWYHVRHHAXRNZQSLOBPRKHKGIZDALTOBSOSNKWKSZYUKXZXFPXFMBJPWUELFZCIPYQVRQNLASJLOLEFBDOGYLSBDQHEPAUAYFPKYGIJQTZBIBQSVDOGTVHRVBWUWAW");
    const signed char tmp_msg_0[] = {-9, -123, 3, 26, 59, 106, -118, -1, 123, 32, -59, 77, -64, 7, -116, 17, 5, -67, 23, -29, 49, -120, -39, 119, -125, -97, 8, 11, -52, -127, -34, -107, -128, -121, -37, 53, 113, -117, -110, 19, 24, 29, -102, -65, 8, -81, -36, 54, 91, 56, 28, -15, 71, 73, 12, -81, 68, 123, -28, 41, -128, 116, -85, -55, 50, -33, -123, 68, -102, -25, -50, -69, 16, -66, 4, 4, -2, -119, 48, 31, 91, -99, 84, -117, -14, 63, -36, 56, 35, -61, -21, 22, -71, 99, 54, -122, -62, 15, -55, -78, -105, -67, -128, -65, 111, 9, -9, 121, -76, 52, -94, 31, 66, -95, 102, -28, -52, 64, -94, -73, -40, -126, 23, -67, 20, 38, 108, -95, 104, 51, 33, 107, -39, -86, 1, 56, 74, 79, 118, 61, -121, -80, -10, 73, 6, -35, 86, -38, -78, 2, 115, 105, 25, -66, 75, -11, 26, 108, 92, 12, 110, 17, -85, -47, -53, -1, 115, 116, -125, -1, 30, 17, 65, -53, 10, -86, -53, -69, -88, 20, -86, -39, -106, -103, -7, 112, -44, -117, -65, 85, -45, -116, 69, -29, 9, -108, -108, -103, 120, -40, -117, 10, 47, 60, -101, -37, 89, -68, 77, 19, -123, -9, 18, 46, -7, -123, -33, -78, -65, 124, 29};
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
    msg.setTimeStamp(0.2722085412969464);
    msg.setSource(17066U);
    msg.setSourceEntity(230U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(230U);
    msg.content_type.assign("KUHOPAKFGIPDPEBGCTMLCHJOFCCQRKPFIWOJIDKOGKEUKTVJBQNJZCOFJIFSURGEQDZIBQQKCKNZANARVMYYXISRQWMFHYCVDNARYEEATLPLGBLZPBDEMUWWPSRXILVTULXNLOKYQBMWHUVGXLONIBUMAHVLSSXOYRJCEQTMOHRZDJFAX");
    const signed char tmp_msg_0[] = {-24, 39, -2, -13, -99, 48, -96, 28, 55, 10, 111, 55, 23, 121, 18, 37, 13, -63, 64, -111, 16, -104, -92, 7, -8, -72, 45, -68, 19, 73, 119, 2, 30, 80, -126, -51, 92, -11, 22, 12, 108, 17, 15, -33, -78, 75, 103, -19, -105, 21, 14, 39, 110, 2, -3, -10, -99, 83, -116, -31, -81, -8, 83, -26, 7, -94, 67, 109, 121, 60, 79, -58, -11, -114, 100, 36, -97, -79, -9, -88, 39, 63, 12, 103, -48, 66, 11, 78, -79, -41, -9, 7, -3};
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
    msg.setTimeStamp(0.12023099675754834);
    msg.setSource(20779U);
    msg.setSourceEntity(238U);
    msg.setDestination(21947U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.025779784330686062);
    msg.setSource(30239U);
    msg.setSourceEntity(224U);
    msg.setDestination(63892U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.36092407531996873);
    msg.setSource(26033U);
    msg.setSourceEntity(119U);
    msg.setDestination(30882U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.34215115688316233);
    msg.setSource(34440U);
    msg.setSourceEntity(93U);
    msg.setDestination(27332U);
    msg.setDestinationEntity(138U);
    msg.target = 29241U;
    msg.bearing = 0.9800496016355003;
    msg.elevation = 0.38382188901374537;

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
    msg.setTimeStamp(0.07235302474842575);
    msg.setSource(3264U);
    msg.setSourceEntity(32U);
    msg.setDestination(43044U);
    msg.setDestinationEntity(52U);
    msg.target = 35923U;
    msg.bearing = 0.30267343911940436;
    msg.elevation = 0.665805410111264;

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
    msg.setTimeStamp(0.6096025948770315);
    msg.setSource(31425U);
    msg.setSourceEntity(17U);
    msg.setDestination(21013U);
    msg.setDestinationEntity(56U);
    msg.target = 55721U;
    msg.bearing = 0.8818690346873508;
    msg.elevation = 0.11427182094201915;

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
    msg.setTimeStamp(0.157753506531078);
    msg.setSource(50247U);
    msg.setSourceEntity(31U);
    msg.setDestination(3927U);
    msg.setDestinationEntity(41U);
    msg.target = 55112U;
    msg.x = 0.8813361110348943;
    msg.y = 0.5929820817129318;
    msg.z = 0.750497723772813;

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
    msg.setTimeStamp(0.08831028733070367);
    msg.setSource(13327U);
    msg.setSourceEntity(57U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(237U);
    msg.target = 13934U;
    msg.x = 0.237954945167954;
    msg.y = 0.30556432875170214;
    msg.z = 0.6602333531465118;

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
    msg.setTimeStamp(0.011803295657498158);
    msg.setSource(37984U);
    msg.setSourceEntity(2U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(103U);
    msg.target = 55267U;
    msg.x = 0.769325111766042;
    msg.y = 0.5445448392783087;
    msg.z = 0.8534843784270376;

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
    msg.setTimeStamp(0.43615798921360904);
    msg.setSource(13336U);
    msg.setSourceEntity(168U);
    msg.setDestination(9601U);
    msg.setDestinationEntity(251U);
    msg.target = 62795U;
    msg.lat = 0.35375859929095266;
    msg.lon = 0.34116539019734604;
    msg.z_units = 185U;
    msg.z = 0.19168980917241718;

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
    msg.setTimeStamp(0.9182782604523275);
    msg.setSource(54119U);
    msg.setSourceEntity(21U);
    msg.setDestination(6833U);
    msg.setDestinationEntity(212U);
    msg.target = 31565U;
    msg.lat = 0.5812620745452712;
    msg.lon = 0.39204260021636916;
    msg.z_units = 234U;
    msg.z = 0.9466289857749476;

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
    msg.setTimeStamp(0.27320157663998634);
    msg.setSource(39746U);
    msg.setSourceEntity(141U);
    msg.setDestination(36418U);
    msg.setDestinationEntity(27U);
    msg.target = 40565U;
    msg.lat = 0.4692739732743004;
    msg.lon = 0.5423924673281696;
    msg.z_units = 38U;
    msg.z = 0.0685397659142919;

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
    msg.setTimeStamp(0.45674923165513226);
    msg.setSource(56561U);
    msg.setSourceEntity(101U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(18U);
    msg.locale.assign("MOHIDSUIWPUYVJYSPZCUNZFJMOMXOSPVBRFJGPKZFATZJHRGUAEGBCIAWXMVMKIHNRFAQSXTXCHLTJMWLCNTZKVTWVYDVGTLISIMNZBEIQUGUANEBTXSQRCYDRBCMDNOVVPQARCTAMAIKONJIAYOFXKNKHSQLFBJOL");
    const signed char tmp_msg_0[] = {-111, -43, 122, 58, -63, 70, -59, 52, -74, -51, -54, -64, 74, 114, 111, 61, 33, 90, -10, -2, 83, -102, -36, -46, 15, -91, -103, 113, 49, -8, 32, 74, -48, -53, -118, 82, -107, 123, -18, 60, -128, -96, -8, 63, -17, -100, 13, -111, 28, 52, 106, 96, 68, 59, 2, 4, -107, 95, -20, 94, 36, -57, -10, -101, -107, 56, 98, -85, -37, 91, 29, 10, 21, 19, 20, 40, 3, 108, -117, -125, -98, 121, -106, 86, 52, -98, 96, 93, -12, 87, 103, -21, 93, -9, 119, -23, 124, -11, 94, 104, 42, 35, -128, -65, 89, -85, 99, 85, 88, 2, -126, -86, -65, -43, 75, 31, -15, -110, 76, -69, 2, -23, -52, 72, 55, 46, 97, 122, 0, 56, 88, 123, -128, -95};
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
    msg.setTimeStamp(0.19433849331695796);
    msg.setSource(32925U);
    msg.setSourceEntity(102U);
    msg.setDestination(43003U);
    msg.setDestinationEntity(95U);
    msg.locale.assign("ONAWNJULXTGJJSHLQKAYNAIXKJVPUEWDLKJJHVXLQEVNDLHRUXMDGTOYEQIMGNYYJMFJNFCTYFZELBBPQGPQSEWRETXGSRCXZAPAZKST");
    const signed char tmp_msg_0[] = {102, -76, -73, 49, -75, 44, -99, -76, 35, -21, 8, -87, 100, -53, -12, -24, 15, -95, 81, -125, -122, 70, 9, 98, -123, -55, -75, 44, -63, -55, -24, -94, 100, 22, 30, -60, 119, -7, -34, 114, -70, -78, 12, 102, -77, -42, -53, 6, 35, 39, 35, 75, 30, -120, 77, -92, -127, -9, 102, -117, 62, 14, 97, 91, 98};
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
    msg.setTimeStamp(0.8363425380143361);
    msg.setSource(56434U);
    msg.setSourceEntity(186U);
    msg.setDestination(64856U);
    msg.setDestinationEntity(85U);
    msg.locale.assign("BJASIWZPTOGWNEERPOGVUVFOHAKQSWHDGMERLBFSQKCBMZYUXZDLNANLHXXXVMWSFPBXKBYQVCZRHGLSBJDHXLPUTQNFWDRMTKYSSYVNPQPFJXDPUTBRMKRYPAATKUJCJUICVLHAOROEKWOYKFFOCHPASZCCWVYNTDUMNYECEYQDRQGVWITIRLDW");
    const signed char tmp_msg_0[] = {-14, 49, -41, -88, -1, 106, 69, -85, -89, 27, 64, 63, -50, 82, -17, -13, 86, 38, 26, -98, -24, 6, -27, -24, -25, 17, -26, -15, 84, 48, 122, 43, -33, 13, -71, -72, -96, -7, -111, -40, -73, 70, -115, 44, -111, -32, -115, 56, -4, 98, 58, 71, 17, 77, 98, 40, -51, -73, -85, 48, 94, -9, -50, 55, -1, 21, 78, 100, -115, 47, -51, -20, 69, -65, 72, -77, 102, -68, -125, 29, 10, 49, -89, -28, -8, -16, 19, -86, -32, 109, 26, 101, 74, -119, 70, -74, 78, 84, -67, 36, -92, 90, -41, 32, -93, -104, 98, 28, 100, 29, 118, 124, 69, 81, 121, -58, -112, -15, -43, -113, 44, 51, 28, -119, -44, 28, 53, 22, 116, 105, 48, 70, 69, 28, -60, -124, -20, 109, -91, -12, -53, -124, 68, 121, 120, -57, 46, 38, 4, 71, -5, -76, -121, -31, 28, -71, -52, -6, -56, -75, -101, 33, 61, 11, -88, 93, 88, -66, -30, 11, 111, -121, -4, -115, -36, 5, -101, -3, -15, -107, -42, -63, -27, -93, 63, -112, -123, -92, 55, -121, 92, 124, -68, 54, -78, 109, 44, 54, -80, -4, -78, -46, 26, -102, -100, 92, 115, 119, 79, 47, 116, 19, 101, -99, 48, 14, 99, 44, 66, -105, -92, -118, 70};
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
    msg.setTimeStamp(0.1133093008184366);
    msg.setSource(4568U);
    msg.setSourceEntity(221U);
    msg.setDestination(25845U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.15598807435827267);
    msg.setSource(31433U);
    msg.setSourceEntity(93U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.7061048123800802);
    msg.setSource(39787U);
    msg.setSourceEntity(137U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.7388126973400475);
    msg.setSource(10134U);
    msg.setSourceEntity(193U);
    msg.setDestination(3943U);
    msg.setDestinationEntity(127U);
    msg.camid = 200U;
    msg.x = 55115U;
    msg.y = 62683U;

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
    msg.setTimeStamp(0.45013258589920135);
    msg.setSource(18050U);
    msg.setSourceEntity(120U);
    msg.setDestination(10991U);
    msg.setDestinationEntity(230U);
    msg.camid = 225U;
    msg.x = 32233U;
    msg.y = 47566U;

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
    msg.setTimeStamp(0.5582889283277048);
    msg.setSource(50005U);
    msg.setSourceEntity(220U);
    msg.setDestination(9645U);
    msg.setDestinationEntity(144U);
    msg.camid = 55U;
    msg.x = 47118U;
    msg.y = 60770U;

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
    msg.setTimeStamp(0.21341596294428633);
    msg.setSource(15229U);
    msg.setSourceEntity(171U);
    msg.setDestination(49223U);
    msg.setDestinationEntity(31U);
    msg.camid = 198U;
    msg.x = 8262U;
    msg.y = 61616U;

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
    msg.setTimeStamp(0.7938513545028751);
    msg.setSource(39818U);
    msg.setSourceEntity(109U);
    msg.setDestination(40395U);
    msg.setDestinationEntity(145U);
    msg.camid = 101U;
    msg.x = 26140U;
    msg.y = 56063U;

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
    msg.setTimeStamp(0.11337193458661232);
    msg.setSource(2343U);
    msg.setSourceEntity(125U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(18U);
    msg.camid = 252U;
    msg.x = 32874U;
    msg.y = 35018U;

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
    msg.setTimeStamp(0.8228977403781121);
    msg.setSource(49680U);
    msg.setSourceEntity(78U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(139U);
    msg.tracking = 177U;
    msg.lat = 0.07119399977043128;
    msg.lon = 0.890556116397791;
    msg.x = 0.46631159905348996;
    msg.y = 0.4701915097812266;
    msg.z = 0.7427413974454727;

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
    msg.setTimeStamp(0.870493593081359);
    msg.setSource(46666U);
    msg.setSourceEntity(231U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(60U);
    msg.tracking = 13U;
    msg.lat = 0.5984409138302033;
    msg.lon = 0.6311581615897899;
    msg.x = 0.012147631338731868;
    msg.y = 0.032478842249769935;
    msg.z = 0.3990540628024086;

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
    msg.setTimeStamp(0.848496596873053);
    msg.setSource(60233U);
    msg.setSourceEntity(167U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(118U);
    msg.tracking = 229U;
    msg.lat = 0.8185542752945549;
    msg.lon = 0.9711784548131513;
    msg.x = 0.3704256380960075;
    msg.y = 0.15803485438614406;
    msg.z = 0.9171024039264492;

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
    msg.setTimeStamp(0.46071288860767545);
    msg.setSource(22017U);
    msg.setSourceEntity(82U);
    msg.setDestination(16228U);
    msg.setDestinationEntity(0U);
    msg.target.assign("HIUQHGSLPXWJTTVNCTQIKNSEEKCLSXRMIDEGCBRPRRYIETFYMRCAKFDTLJFQJTVZZNAUZDPTKZPMFMRNHZDHOGANP");
    msg.lbearing = 0.7522664036830424;
    msg.lelevation = 0.6568216258455729;
    msg.bearing = 0.6622771739956065;
    msg.elevation = 0.8706367189818107;
    msg.phi = 0.5026501839356717;
    msg.theta = 0.868749792976079;
    msg.psi = 0.1531712030218516;
    msg.accuracy = 0.7882959728185382;

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
    msg.setTimeStamp(0.6171061343308509);
    msg.setSource(2646U);
    msg.setSourceEntity(107U);
    msg.setDestination(180U);
    msg.setDestinationEntity(73U);
    msg.target.assign("FHKGOOOGLPDPMJVNQLRKAQUPIUMWACIWLEGXTFLZFHKLMOECCFKSIZUADNMNBLDFKIUKMZHLNHOWDTMLZPCPXAMTHQPNVADYUQVSOYWVOBJQBYJJCQSUVBXUWQITJZDFYQEGJHRTSNFHHKEGLBGYTXRTIZJMURDRKRFPN");
    msg.lbearing = 0.20544835080166934;
    msg.lelevation = 0.7932945451124829;
    msg.bearing = 0.35395905618543;
    msg.elevation = 0.057507824531724205;
    msg.phi = 0.25389002111736403;
    msg.theta = 0.3141518718035;
    msg.psi = 0.406967089857767;
    msg.accuracy = 0.4655455216689489;

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
    msg.setTimeStamp(0.9524165533391098);
    msg.setSource(55057U);
    msg.setSourceEntity(9U);
    msg.setDestination(5552U);
    msg.setDestinationEntity(139U);
    msg.target.assign("FPAKPNHAWISFZNPITEWKDIFRUUGBXXVXMMSZYBOWAVDDQMMGLIDBYQZUWFMQQEGOUTCOEL");
    msg.lbearing = 0.43864266180008227;
    msg.lelevation = 0.12370609725105408;
    msg.bearing = 0.7309922066817529;
    msg.elevation = 0.6102916477668899;
    msg.phi = 0.28419626789620067;
    msg.theta = 0.8851472929684385;
    msg.psi = 0.033517281981825464;
    msg.accuracy = 0.4892994882640481;

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
    msg.setTimeStamp(0.9352498220420031);
    msg.setSource(22608U);
    msg.setSourceEntity(131U);
    msg.setDestination(34170U);
    msg.setDestinationEntity(154U);
    msg.target.assign("HDYSQGZXMZNDFSVFFMCRXYKCCJKLFDHLAUACKGVMXVAJVNFZRLUGQZALKOFMPBMWLDHMOLTILKSGTUYHWBBOJQAAPRLTTCZWETHRBOOBGHBXYUAZWKPSWLSKMTRGSZTONBSIIYAYXSEUHEPQTUGXBEEDP");
    msg.x = 0.8659640725374479;
    msg.y = 0.7096448739058363;
    msg.z = 0.7725841306370516;
    msg.n = 0.67607422660866;
    msg.e = 0.7132490629283835;
    msg.d = 0.3166698910423139;
    msg.phi = 0.5827356864091928;
    msg.theta = 0.034936416871564124;
    msg.psi = 0.06692449157220703;
    msg.accuracy = 0.9499028725131053;

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
    msg.setTimeStamp(0.08198505058908001);
    msg.setSource(17905U);
    msg.setSourceEntity(92U);
    msg.setDestination(6902U);
    msg.setDestinationEntity(113U);
    msg.target.assign("YHJVGJYFGONPOCOIBTCRLVHXENTGTWJSJGCWBQHNROKZFDDKVAHYZOYPOKWMLOUIBAHFNLXMMKSIFAGSDJGYYKTA");
    msg.x = 0.3523002034092515;
    msg.y = 0.7514874532220257;
    msg.z = 0.02282071983325773;
    msg.n = 0.46940193001865893;
    msg.e = 0.7989292603164763;
    msg.d = 0.6866941824952049;
    msg.phi = 0.8029604951093469;
    msg.theta = 0.7215051468890873;
    msg.psi = 0.5873212487283049;
    msg.accuracy = 0.5999545439314293;

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
    msg.setTimeStamp(0.5016959825456688);
    msg.setSource(16157U);
    msg.setSourceEntity(91U);
    msg.setDestination(16740U);
    msg.setDestinationEntity(116U);
    msg.target.assign("SCWGJMJRITKJBTFIZSROBQVBODDBWNGEACYHWONWW");
    msg.x = 0.5691449320252274;
    msg.y = 0.6608898932503233;
    msg.z = 0.6736203595644727;
    msg.n = 0.14541127605844895;
    msg.e = 0.7660026048490456;
    msg.d = 0.23246330089440848;
    msg.phi = 0.7255967869928309;
    msg.theta = 0.8317206922573714;
    msg.psi = 0.5254591782896354;
    msg.accuracy = 0.4412966470711811;

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
    msg.setTimeStamp(0.10842014775735187);
    msg.setSource(23365U);
    msg.setSourceEntity(38U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(159U);
    msg.target.assign("GTXMAVGHEPIVMXTCDFOAKJYIYNRXMJHRWLUEAGBYOMSSSQFKWZQZWYDOURDRK");
    msg.lat = 0.06186304710978674;
    msg.lon = 0.35074667938389803;
    msg.z_units = 174U;
    msg.z = 0.292014619547017;
    msg.accuracy = 0.9380717755461386;

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
    msg.setTimeStamp(0.1497783654890169);
    msg.setSource(58186U);
    msg.setSourceEntity(81U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(223U);
    msg.target.assign("DHKFPOLVYSMNIOYYZPZARBMHHNHXDVWUTCLTTVSHTXGDTKEWYUIOSWSGJPMFXLSJOZDGYPGNVVPUVJDNPONDPEJZPAAZTTVABKGXCFBUWLZEWASQIGQCEENSHULEXUKIQRPUYZKMCLTIWILYZHIMAEALXKTCRDSNJQGRCIJRJHKUQOPXFJSDZ");
    msg.lat = 0.0516633917211089;
    msg.lon = 0.12450982343984829;
    msg.z_units = 184U;
    msg.z = 0.6644039944015756;
    msg.accuracy = 0.6342092960695201;

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
    msg.setTimeStamp(0.44078849992337465);
    msg.setSource(8811U);
    msg.setSourceEntity(114U);
    msg.setDestination(7418U);
    msg.setDestinationEntity(151U);
    msg.target.assign("NYNCGWCYXBZEOFZWLLIPCYTEOAWFZAUMQXBKSYZSKHPWCOSDVYWVJHGHQNNTEVDRDJHNSBWVJIKOESYRGAGLHIPYINTFFLKZSRZIUFACNLFXQHOVJMZYWVOREDGDWPMURIEEQI");
    msg.lat = 0.8099248438626451;
    msg.lon = 0.6224534879978201;
    msg.z_units = 134U;
    msg.z = 0.19949654810718964;
    msg.accuracy = 0.6734638652655532;

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
    msg.setTimeStamp(0.4991434423472283);
    msg.setSource(5342U);
    msg.setSourceEntity(149U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(177U);
    msg.name.assign("DMABHEDDXSKFLGYTOYJQCMXHIEUPBNNPSJASAESZNOXPWEUNWILBEPZCMQSHYVFWFGNU");
    msg.lat = 0.5921858490975749;
    msg.lon = 0.7911403139289799;
    msg.z = 0.06287857536895347;
    msg.z_units = 99U;

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
    msg.setTimeStamp(0.21733991649479434);
    msg.setSource(23235U);
    msg.setSourceEntity(21U);
    msg.setDestination(7459U);
    msg.setDestinationEntity(177U);
    msg.name.assign("TXXMOPCWAJQBTBQHPGJZPSZVRSDOKGSXEMFMVGURABTGJETCZPEEQTWAQHQSBIIGUSFWJVTXVQNNVVYBYHRAKDCCLFYRLGCVKJKCGHFXZOJAKZQMMVPKYNUAGUFDWSYQBXYQNNMFWXHIILVOJSAIMICJGPYFNDEBPUNNTELU");
    msg.lat = 0.4410960589909855;
    msg.lon = 0.5841092793460547;
    msg.z = 0.3808834214392005;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.383761754861209);
    msg.setSource(63342U);
    msg.setSourceEntity(107U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(148U);
    msg.name.assign("OVUMMAJRQLLMCGUEPNBGWARZPFEHVWVCFOVIXTDAXSVLFSBJEDOMOJQNEYHAQUGCHTRDINHLKXT");
    msg.lat = 0.993136559336467;
    msg.lon = 0.6859346026594126;
    msg.z = 0.27686575370856836;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.38761775830623535);
    msg.setSource(61792U);
    msg.setSourceEntity(122U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(72U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.5417633740747071);
    msg.setSource(3399U);
    msg.setSourceEntity(157U);
    msg.setDestination(56217U);
    msg.setDestinationEntity(181U);
    msg.op = 147U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PLMTFGUSFAKXNYHZYGCPVEDNXYUIVIIGCMSPWRSWGKQQISACOEAVOJILNIPHXKMQFAZZQXGUCPYWVEYGAULYLBDECHDJGVHGXLTJMLTAKMZTFCDERSHOZFWDQYUEPPTZFCMOBFAGQERTICRBTHDNJNRCXH");
    tmp_msg_0.lat = 0.09803240678671521;
    tmp_msg_0.lon = 0.5049986623797031;
    tmp_msg_0.z = 0.75857029119364;
    tmp_msg_0.z_units = 175U;
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
    msg.setTimeStamp(0.010134947240727832);
    msg.setSource(20440U);
    msg.setSourceEntity(223U);
    msg.setDestination(55784U);
    msg.setDestinationEntity(108U);
    msg.op = 247U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MVMZYVSFLMBLPDWMKANFGTMUVTJMJEHUZHMGNJQXZZNRITLVGXCTFLERTTWEQIPKAGQCQGHAEKEVGFDDCAFJWCRRNSPRSSUQSSQVOHWCRYRONPMUAAYOIBXZCELQJSABMIPGRWZND");
    tmp_msg_0.lat = 0.21012282242982827;
    tmp_msg_0.lon = 0.41238962488331354;
    tmp_msg_0.z = 0.9605224983396121;
    tmp_msg_0.z_units = 5U;
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
    msg.setTimeStamp(0.9827561039771484);
    msg.setSource(53953U);
    msg.setSourceEntity(37U);
    msg.setDestination(31483U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8872825381873877;
    msg.type = 36U;

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
    msg.setTimeStamp(0.5919742654681254);
    msg.setSource(51284U);
    msg.setSourceEntity(235U);
    msg.setDestination(46621U);
    msg.setDestinationEntity(189U);
    msg.value = 0.08719980846442954;
    msg.type = 50U;

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
    msg.setTimeStamp(0.824541785887532);
    msg.setSource(16263U);
    msg.setSourceEntity(102U);
    msg.setDestination(21257U);
    msg.setDestinationEntity(227U);
    msg.value = 0.3042314251167889;
    msg.type = 160U;

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
    msg.setTimeStamp(0.7533307365230627);
    msg.setSource(18542U);
    msg.setSourceEntity(0U);
    msg.setDestination(53735U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7403176621888835;

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
    msg.setTimeStamp(0.13078180445186283);
    msg.setSource(61596U);
    msg.setSourceEntity(164U);
    msg.setDestination(33876U);
    msg.setDestinationEntity(231U);
    msg.value = 0.41919558059595485;

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
    msg.setTimeStamp(0.7207215337030934);
    msg.setSource(58633U);
    msg.setSourceEntity(22U);
    msg.setDestination(6514U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5415071582146075;

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
    msg.setTimeStamp(0.091660424648075);
    msg.setSource(38334U);
    msg.setSourceEntity(165U);
    msg.setDestination(8684U);
    msg.setDestinationEntity(146U);
    msg.timestamp_last_service = 0.031332280955732816;
    msg.time_next_service = 0.220925837207;
    msg.time_motor_next_service = 0.7850030883471485;
    msg.time_idle_ground = 0.4396234117770881;
    msg.time_idle_air = 0.11303890464443833;
    msg.time_idle_water = 0.4788616726158188;
    msg.time_idle_underwater = 0.12356632061761996;
    msg.time_idle_unknown = 0.20070185057946377;
    msg.time_motor_ground = 0.6259355511465085;
    msg.time_motor_air = 0.544802314211614;
    msg.time_motor_water = 0.5199305283775711;
    msg.time_motor_underwater = 0.278177380468847;
    msg.time_motor_unknown = 0.08235252364934464;
    msg.rpm_min = -32254;
    msg.rpm_max = 22138;
    msg.depth_max = 0.6248556529821793;

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
    msg.setTimeStamp(0.15942717531208628);
    msg.setSource(36999U);
    msg.setSourceEntity(117U);
    msg.setDestination(38178U);
    msg.setDestinationEntity(241U);
    msg.timestamp_last_service = 0.41890218601448737;
    msg.time_next_service = 0.018795370717881732;
    msg.time_motor_next_service = 0.7424870769598966;
    msg.time_idle_ground = 0.3055676519484408;
    msg.time_idle_air = 0.08598762838660545;
    msg.time_idle_water = 0.8317733131091145;
    msg.time_idle_underwater = 0.6621546665032453;
    msg.time_idle_unknown = 0.5763893553879202;
    msg.time_motor_ground = 0.4331041128501082;
    msg.time_motor_air = 0.09400604638293542;
    msg.time_motor_water = 0.028443048675015237;
    msg.time_motor_underwater = 0.18201715914182925;
    msg.time_motor_unknown = 0.8026715389510399;
    msg.rpm_min = -23297;
    msg.rpm_max = 23922;
    msg.depth_max = 0.7197536310802808;

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
    msg.setTimeStamp(0.30388812176870805);
    msg.setSource(39261U);
    msg.setSourceEntity(243U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(51U);
    msg.timestamp_last_service = 0.721813889461318;
    msg.time_next_service = 0.19423253229657345;
    msg.time_motor_next_service = 0.7112233269818997;
    msg.time_idle_ground = 0.5335273457340696;
    msg.time_idle_air = 0.698669600453056;
    msg.time_idle_water = 0.5142742777307728;
    msg.time_idle_underwater = 0.06337971631983186;
    msg.time_idle_unknown = 0.324265677158045;
    msg.time_motor_ground = 0.794040921195905;
    msg.time_motor_air = 0.24962692046970525;
    msg.time_motor_water = 0.10290865076750955;
    msg.time_motor_underwater = 0.5798691533851796;
    msg.time_motor_unknown = 0.8400048057402484;
    msg.rpm_min = 20075;
    msg.rpm_max = 10697;
    msg.depth_max = 0.3054401865675327;

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
    msg.setTimeStamp(0.06418109502936886);
    msg.setSource(31305U);
    msg.setSourceEntity(161U);
    msg.setDestination(63233U);
    msg.setDestinationEntity(60U);
    msg.severity = 75U;
    msg.text.assign("KJUTJMVBHMRNNBKKLDWVXGBFBIAVYUBER");

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
    msg.setTimeStamp(0.13752160033267924);
    msg.setSource(6286U);
    msg.setSourceEntity(186U);
    msg.setDestination(45584U);
    msg.setDestinationEntity(154U);
    msg.severity = 40U;
    msg.text.assign("NSQBXZLRVOCXSEXKXPUKFUVZDACFFHYZIIEARLTVECRHLPSUVWZXGRIVRUCKWHCLWSPGEFZBETHJOYAMGMRMLXNPDPWTDPNOHDKDQVICCNHGDUHNEWOAV");

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
    msg.setTimeStamp(0.13683711793803033);
    msg.setSource(15161U);
    msg.setSourceEntity(0U);
    msg.setDestination(42831U);
    msg.setDestinationEntity(111U);
    msg.severity = 232U;
    msg.text.assign("ABYDBNFXOJGCSVNO");

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
    msg.setTimeStamp(0.047518660943911994);
    msg.setSource(34060U);
    msg.setSourceEntity(254U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(6U);
    msg.channel = 7;
    msg.value = -1434456953;
    msg.gain = 1U;

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
    msg.setTimeStamp(0.40261463874585735);
    msg.setSource(45973U);
    msg.setSourceEntity(222U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(160U);
    msg.channel = 29;
    msg.value = -918561062;
    msg.gain = 226U;

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
    msg.setTimeStamp(0.6058819847299436);
    msg.setSource(42121U);
    msg.setSourceEntity(162U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(12U);
    msg.channel = 65;
    msg.value = -1991380315;
    msg.gain = 228U;

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
    msg.setTimeStamp(0.3997803809970475);
    msg.setSource(30046U);
    msg.setSourceEntity(213U);
    msg.setDestination(64458U);
    msg.setDestinationEntity(252U);
    msg.ch01 = 0.42658656947725315;
    msg.ch02 = 0.2794805081942985;
    msg.ch03 = 0.9895328748723912;
    msg.ch04 = 0.3772019011950042;
    msg.ch05 = 0.5351364098333529;
    msg.ch06 = 0.116843456605081;
    msg.ch07 = 0.5453835580637136;
    msg.ch08 = 0.36434144924204215;
    msg.ch09 = 0.6468508164478427;
    msg.ch10 = 0.9149645420947192;
    msg.ch11 = 0.2940840945989289;
    msg.ch12 = 0.241596346728438;
    msg.ch13 = 0.2548363981574263;
    msg.ch14 = 0.9673002230147195;
    msg.ch15 = 0.0621850654508328;
    msg.ch16 = 0.25588438651478507;

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
    msg.setTimeStamp(0.923825885480858);
    msg.setSource(63585U);
    msg.setSourceEntity(130U);
    msg.setDestination(3051U);
    msg.setDestinationEntity(121U);
    msg.ch01 = 0.23806789756406443;
    msg.ch02 = 0.582282814324845;
    msg.ch03 = 0.4281504738749099;
    msg.ch04 = 0.51788245031434;
    msg.ch05 = 0.9047253220119491;
    msg.ch06 = 0.5013220701021069;
    msg.ch07 = 0.7103368293256586;
    msg.ch08 = 0.5681845299887046;
    msg.ch09 = 0.3947543510773315;
    msg.ch10 = 0.5537382428351748;
    msg.ch11 = 0.20499660697261346;
    msg.ch12 = 0.27964091567189986;
    msg.ch13 = 0.572621984000734;
    msg.ch14 = 0.4534246663750362;
    msg.ch15 = 0.5498895879581165;
    msg.ch16 = 0.9714236024766768;

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
    msg.setTimeStamp(0.7488412668372889);
    msg.setSource(6424U);
    msg.setSourceEntity(14U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(249U);
    msg.ch01 = 0.22652435822019956;
    msg.ch02 = 0.20885694252262832;
    msg.ch03 = 0.7804302698041058;
    msg.ch04 = 0.1702764657280572;
    msg.ch05 = 0.1945302354345555;
    msg.ch06 = 0.2917990281473616;
    msg.ch07 = 0.12154969036807906;
    msg.ch08 = 0.6453604158286913;
    msg.ch09 = 0.6451528228378635;
    msg.ch10 = 0.40363467428831445;
    msg.ch11 = 0.14049399408695573;
    msg.ch12 = 0.09591225715412088;
    msg.ch13 = 0.24459661176121794;
    msg.ch14 = 0.4202005555571927;
    msg.ch15 = 0.808652344562172;
    msg.ch16 = 0.925831230793623;

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
    msg.setTimeStamp(0.9373217691513105);
    msg.setSource(8556U);
    msg.setSourceEntity(87U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(145U);
    msg.op = 189U;
    msg.lat = 0.23327515832029733;
    msg.lon = 0.04486471962735461;
    msg.height = 0.20814182845390927;
    msg.depth = 0.07918574348476248;
    msg.alt = 0.6686903402399349;

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
    msg.setTimeStamp(0.7958715361871401);
    msg.setSource(40123U);
    msg.setSourceEntity(146U);
    msg.setDestination(48280U);
    msg.setDestinationEntity(220U);
    msg.op = 8U;
    msg.lat = 0.46080376409797374;
    msg.lon = 0.23935621376056304;
    msg.height = 0.22452112564180926;
    msg.depth = 0.30370572724123024;
    msg.alt = 0.5905835128377027;

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
    msg.setTimeStamp(0.013561666249871984);
    msg.setSource(61U);
    msg.setSourceEntity(163U);
    msg.setDestination(20554U);
    msg.setDestinationEntity(73U);
    msg.op = 28U;
    msg.lat = 0.5360396810560563;
    msg.lon = 0.5730108146381598;
    msg.height = 0.8635914925302985;
    msg.depth = 0.08714171812547666;
    msg.alt = 0.7566439904191425;

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
    msg.setTimeStamp(0.7062896572351426);
    msg.setSource(39646U);
    msg.setSourceEntity(20U);
    msg.setDestination(33165U);
    msg.setDestinationEntity(2U);
    msg.nbeams = 29U;
    msg.ncells = 86U;
    msg.coord_sys = 187U;

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
    msg.setTimeStamp(0.2641442249860978);
    msg.setSource(60086U);
    msg.setSourceEntity(66U);
    msg.setDestination(31717U);
    msg.setDestinationEntity(108U);
    msg.nbeams = 8U;
    msg.ncells = 102U;
    msg.coord_sys = 206U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5913582928523246;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.14302260790807053;
    tmp_tmp_msg_0_0.amp = 0.8752949531921299;
    tmp_tmp_msg_0_0.cor = 66U;
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
    msg.setTimeStamp(0.8819120905387631);
    msg.setSource(4408U);
    msg.setSourceEntity(71U);
    msg.setDestination(3443U);
    msg.setDestinationEntity(26U);
    msg.nbeams = 150U;
    msg.ncells = 223U;
    msg.coord_sys = 207U;

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
    msg.setTimeStamp(0.6183778267555525);
    msg.setSource(7046U);
    msg.setSourceEntity(127U);
    msg.setDestination(7916U);
    msg.setDestinationEntity(197U);
    msg.cell_position = 0.4895642113130828;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.4511881802543407;
    tmp_msg_0.amp = 0.9764664739196862;
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
    msg.setTimeStamp(0.46610446062289845);
    msg.setSource(49389U);
    msg.setSourceEntity(92U);
    msg.setDestination(44145U);
    msg.setDestinationEntity(60U);
    msg.cell_position = 0.6992691119089158;

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
    msg.setTimeStamp(0.10391658798523873);
    msg.setSource(65496U);
    msg.setSourceEntity(138U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(102U);
    msg.cell_position = 0.45787161675407495;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3023647029111546;
    tmp_msg_0.amp = 0.7085216762686971;
    tmp_msg_0.cor = 48U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.31260176552786934);
    msg.setSource(51037U);
    msg.setSourceEntity(253U);
    msg.setDestination(15175U);
    msg.setDestinationEntity(8U);
    msg.vel = 0.7659900222218553;
    msg.amp = 0.8999101359685981;
    msg.cor = 76U;

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
    msg.setTimeStamp(0.5819167158830973);
    msg.setSource(56627U);
    msg.setSourceEntity(182U);
    msg.setDestination(52793U);
    msg.setDestinationEntity(206U);
    msg.vel = 0.5163586357477025;
    msg.amp = 0.41531650744504667;
    msg.cor = 112U;

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
    msg.setTimeStamp(0.2622858937365937);
    msg.setSource(36531U);
    msg.setSourceEntity(39U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(59U);
    msg.vel = 0.21819349287919676;
    msg.amp = 0.1884151965618578;
    msg.cor = 142U;

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
    msg.setTimeStamp(0.4044428214471615);
    msg.setSource(51864U);
    msg.setSourceEntity(58U);
    msg.setDestination(43462U);
    msg.setDestinationEntity(42U);
    msg.name.assign("VWHSAQXAAQPXSVCLIZFZWTPLGLNFGPPGDPMSLQNGIOZPPCEHBJVSXDIBUHWZSDBGIQDXZOMNJCRKWLLODACHMWKBWCG");
    msg.value = 100U;

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
    msg.setTimeStamp(0.26027191045872455);
    msg.setSource(28234U);
    msg.setSourceEntity(180U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(188U);
    msg.name.assign("FZCYABLFVUPPATKKRONFULGSLJRHBQJIOXLF");
    msg.value = 94U;

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
    msg.setTimeStamp(0.1290988545973546);
    msg.setSource(23164U);
    msg.setSourceEntity(247U);
    msg.setDestination(51015U);
    msg.setDestinationEntity(44U);
    msg.name.assign("UDPNSLBWYTXLTZSIVHOIIZUKTETPJGQFWWUDCLDDQJQPPKSNWEACSGOGVZJHNINAKBTMYJWYAHQTATBMJLHNLOJFGAYEUYIONCEOAYDVSAQCVZRJOVNCKDXRXXUWDKJRUHNQGFPRLNALHPPSPHRSZHTFCZQLMPRZVCFCDQKOGTGSEYPBUXXVVZMVDYEOEKLMZCOZKIMIYEAWBMIICRKWYBRMBGQIBFXUEDXRQFJFXBHUOWLFEGRSXMKN");
    msg.value = 195U;

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
    msg.setTimeStamp(0.1777496399992109);
    msg.setSource(62065U);
    msg.setSourceEntity(104U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(121U);
    msg.name.assign("HCIDGIULSSHELDKALVWXTFVNUEFFHTVTVIPSROAKTPDYBLSDMRXQXMPRIWNFKLUBKUZWPXJVLWBHHGPZQBEMRZAOHFDSNBRKGCNJNRDNPV");

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
    msg.setTimeStamp(0.6878578783572277);
    msg.setSource(38507U);
    msg.setSourceEntity(187U);
    msg.setDestination(14844U);
    msg.setDestinationEntity(94U);
    msg.name.assign("RJXYNQWUPLHAJOJGZAHJJRMODWHJAVODMSZYZGXBXOUDUMBKTJFEIIGTVGRCBDMYNLRDWVRVDSLCAGCRZAAFSTTXHPNNVWMVHSREUETJTYBAQFQYXQWWCTEXHUWEMNCOYFCMOUPPQLIFXIKSGDKXQRDMEOXEPKMCLKZLOVMKXUYTNLUQGPGCCDWBJNVEKE");

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
    msg.setTimeStamp(0.8436220084715508);
    msg.setSource(15006U);
    msg.setSourceEntity(60U);
    msg.setDestination(8350U);
    msg.setDestinationEntity(17U);
    msg.name.assign("ZJEIDZUGFEARRKLPUWVDGMKTSEJHZCMWMRKLVRKMZNUOAICWBMXDHIDGDTKCVLXYQPWXTNWWIOTNEUBPYXSNDJKMNBZAAPVMNFQHMOKQLJYQFLCKUUYUCEKEELGDYGZXNQPWYUBIOTOHIVEBKYQBSVWAFQJEOCGIVGMXTZXYTIWRJRRBFQJWFSSADVXZDODABGHHNXROCHRJSTHFHYGOPUCLQJLHFQ");

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
    msg.setTimeStamp(0.43403805964070963);
    msg.setSource(30837U);
    msg.setSourceEntity(1U);
    msg.setDestination(60915U);
    msg.setDestinationEntity(88U);
    msg.name.assign("APCRMJQETXKMZETZWQSUHLGBIEVGNYGFYQFBWDRJGAHKWSLRVSMVFHNIXCZDUBXTBNKJJRAKQKGZHP");
    msg.value = 46U;

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
    msg.setTimeStamp(0.9091150870787491);
    msg.setSource(29871U);
    msg.setSourceEntity(171U);
    msg.setDestination(6455U);
    msg.setDestinationEntity(139U);
    msg.name.assign("QBWGDBKISATJETAYHLVQNDRZZKTGADJQREPIPWKLMMRPURESMOVFQIJUOHPVORMDMIBJBONSSDJLUNPWUTXVGEOATETKDHIZOLKZLPZFHTFAZSIJBCAUZEIXLBZPSJNLKEYKQCMGIYWGZPMQEYUYRKHVBVUWODGYXNFMFLNFHNGZNWTWXSSGFFQRAFCPLCRYVHTYQXWKSOHEBRHTQKCVLXMCBDGXUEAFCBVOXCADDRXUNPWXIYQUWJCJNAGYO");
    msg.value = 222U;

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
    msg.setTimeStamp(0.8492119445238056);
    msg.setSource(43345U);
    msg.setSourceEntity(20U);
    msg.setDestination(56832U);
    msg.setDestinationEntity(189U);
    msg.name.assign("EBMXUGJBJSSNDECJSSXIYJLGBDABZGAGIHZCUOKGAKUIJBRVZNIEQSRIBEBLDFCQQLWOSOUAGHNJQFETRETYUCAOVSRYXEPWMAVJI");
    msg.value = 7U;

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
    msg.setTimeStamp(0.6136946029696182);
    msg.setSource(54840U);
    msg.setSourceEntity(8U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(181U);
    msg.value = 0.05807923079032551;

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
    msg.setTimeStamp(0.8666745075152112);
    msg.setSource(62139U);
    msg.setSourceEntity(194U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(250U);
    msg.value = 0.894916861543305;

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
    msg.setTimeStamp(0.3267557431310866);
    msg.setSource(29664U);
    msg.setSourceEntity(4U);
    msg.setDestination(21326U);
    msg.setDestinationEntity(249U);
    msg.value = 0.911346450502514;

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
    msg.setTimeStamp(0.3206303466757029);
    msg.setSource(43645U);
    msg.setSourceEntity(98U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(175U);
    msg.value = 0.39175105509810126;

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
    msg.setTimeStamp(0.794204329224003);
    msg.setSource(54887U);
    msg.setSourceEntity(67U);
    msg.setDestination(43213U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7773232062918656;

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
    msg.setTimeStamp(0.05003907017369935);
    msg.setSource(65217U);
    msg.setSourceEntity(97U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(0U);
    msg.value = 0.7459775404287041;

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
    msg.setTimeStamp(0.4823336698421151);
    msg.setSource(53177U);
    msg.setSourceEntity(62U);
    msg.setDestination(8926U);
    msg.setDestinationEntity(160U);
    msg.value = 0.00103326660726899;

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
    msg.setTimeStamp(0.1200953157823964);
    msg.setSource(13537U);
    msg.setSourceEntity(233U);
    msg.setDestination(48361U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8744528496146252;

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
    msg.setTimeStamp(0.8035884942489415);
    msg.setSource(26376U);
    msg.setSourceEntity(126U);
    msg.setDestination(24525U);
    msg.setDestinationEntity(236U);
    msg.value = 0.5932827552246793;

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
    msg.setTimeStamp(0.7626015822864521);
    msg.setSource(19490U);
    msg.setSourceEntity(13U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(226U);
    msg.restriction = 131U;
    msg.reason.assign("QOQQVXCSSHVFRCAWCGYEYUQEXUZAZYIIQIGFZCHLFTBWCZDFJWIKVLRDAQTHDPMXKCGOGRSPMPHRDRA");

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
    msg.setTimeStamp(0.8391396988686617);
    msg.setSource(54U);
    msg.setSourceEntity(193U);
    msg.setDestination(8500U);
    msg.setDestinationEntity(4U);
    msg.restriction = 13U;
    msg.reason.assign("GQHVELWCYUPGEBFJRFAUFKEPXQEAPAQBRJOVIYFITCWOTHAYFHXZIBJUVRJXWBNOCGOSFYBQCCZBYPPLLVURMGHEJUEDZBVYXEIXUMSONWPIQKORCIPKZVMOWUGENIUS");

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
    msg.setTimeStamp(0.2357220492427169);
    msg.setSource(23423U);
    msg.setSourceEntity(122U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(54U);
    msg.restriction = 153U;
    msg.reason.assign("CDDLJZTOIERDLNHNAGLEWVAGPZMKVBVJCPAHXBASMSAEKIRGMFYJYGLUPLUQHMWXQCVXZHHAYWUJGTZOESRQQYPRHUKQMXEEWHVFOYPGIYUUJLWRNTGTPAZUFFGBPIKDKRLBJTIADRPNLMJJYVVCY");

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
    IMC::MqttTXFrame msg;
    msg.setTimeStamp(0.17545980950248496);
    msg.setSource(31487U);
    msg.setSourceEntity(245U);
    msg.setDestination(63220U);
    msg.setDestinationEntity(128U);
    msg.topic.assign("LYTLKRAXYWIGCNWTWUNSXRXQSXDDHFDUORFXHPBMJHEVCMBITOMLONAYEJLZCFVTOSCCEIXHQZZOMHFPDIATVBJBCYVGDIOSGRTQOWJOMEXZFRFAYPORKGEZUYKZFNSKQPAYATKWPXPSGGCTJQAWUDNKUBPTINBDHVQLHYESMQNQEULGYBNPENEUDHCQLVRSFUVZDQZMFGSDSPIJAIWJRCABWJAKEKMGVBWIHIOXHJNFZPM");
    const signed char tmp_msg_0[] = {100, -69, 17, 115, 3, 46, -23, -7, -29, 103, 93, -20, 34, -114, -59, 118, -110, -50, -89, -46, -72, 44, 6};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttTXFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttTXFrame msg;
    msg.setTimeStamp(0.9055566734672553);
    msg.setSource(63403U);
    msg.setSourceEntity(88U);
    msg.setDestination(25567U);
    msg.setDestinationEntity(222U);
    msg.topic.assign("VNVOHHASMSJKXRWCSXBUBTHWUHCE");
    const signed char tmp_msg_0[] = {6, 121, 87, -95, -78, 85, 100, -67, 26, 120, 58, -97, -57, 109, 124, -16, 102, 66, 81, -69, -58, -112, 82, -84, 82, -66, 17, 6, -58, -23, -76, 79, 83, -53, -79, 105, 47, 60, 54, 40, -15, -78, -55, 93, -90, -96, -2, -94, 121, 101, -36, 78, -20, 116, 28, 93, 69, -7, -18, 71, -104, -66, -119, 17, -119, 12, -79, -85, -94, -27, 86, 36, 71, -67, -56, 79, -48, 73, -77, -44, -65, -106, 55, 14, 81, -31, 60, -30, -17, 49, -99, -101, 44, 11, -109, 12, 46, 17, -83, -114, -62, -52, -57, -30, 36, 35, 59, 64, -39, 124, -99, -81, -115, 94, 113, 115, -31, 2, 98, 91, -43, 115, -84, 13, -95, 26, 122, -90, 49, -80, 35, 13, 75, 28, -80, 87, 21, 42, -23, 75, -90, 7, 105, 93, -22, 12, 100, -15, -34, -19, 126, 126, -22, -45, 54, 95, 55, -9, -80, 95, 34, -128, -66, -109, 21, -82, 113, -114, 122, 78, 31, -30, 17, -56, -61, 44, -111, -87, -128, -128, -25};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttTXFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttTXFrame msg;
    msg.setTimeStamp(0.06270120247525068);
    msg.setSource(59816U);
    msg.setSourceEntity(17U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(96U);
    msg.topic.assign("FRBIUZWTTJCVSKEXUEDUIEXQDQYIPOSSPPVPDEDGQGADZCPGIHIKQAXEFHIDTVLDGGQZJJTZCSJXIUSAFFWQRSBPKNMYZFOSAYMWGOVTLZA");
    const signed char tmp_msg_0[] = {3, 25, -36, -101, -113, -25, -25, -93, -49, 111};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttTXFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttRXFrame msg;
    msg.setTimeStamp(0.38114163246596555);
    msg.setSource(32490U);
    msg.setSourceEntity(167U);
    msg.setDestination(20555U);
    msg.setDestinationEntity(188U);
    msg.topic.assign("BGIESJPSFPXBKPMGRXCFGZHHVFSCVHRPGZEAFCDMYLJDSSQLPWGXVDUWKSWR");
    const signed char tmp_msg_0[] = {38, -54, -94, 47, 34, 30, -37, 50, 1, 121, 119, 59, 45, -87, -31, 64, 106, 63, -5, 57, -65, 110, 77, -98, -77, 42, -128, -76, 124, 119, -49, 92, -49, -96, -99, -15, -24, 72, -111, -69, 19, -29, 103, 81, -36, -47, -88, -32, -54, -120, -37, 29, 5, -28, 109, -24, -59, 81, 108, 32, -126, -113, 101, -58, -59, 33, 75, -8, -65, 21, 80, -116, -35, 1, 91, -113, -93, -69, -111, 46, 115, -60, 24, -81, -71, -49, -104, 77, 81, -72, 86, -112, -67, -57, 53, 121, 68, 103, 87, 18, 65, -89, 99, -40, -75, 67, 68, 72, 19, -66, 53, 98, 38, 118, -27, 82, -2, 80, 56, -103, 83, -95, 24, 33, -44, 89, -98, -70, -84, 107, 61, -116, -18, -23, 11, 67, -22, 36, -25, -116, 21, 85, 74, 111};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttRXFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttRXFrame msg;
    msg.setTimeStamp(0.49724057995373017);
    msg.setSource(3950U);
    msg.setSourceEntity(102U);
    msg.setDestination(65159U);
    msg.setDestinationEntity(59U);
    msg.topic.assign("RKWQPSZUPHHXKRSLTQOKWRLLDVFOBBYNTXVCWYGCSZUQVORZWELYJGHNPVIXPNMWAIXGPZNOXONCQREDVEWPHYXMWPMFYGBKCFMRVVSDVHAFKCTUCRDXDEADWJCOUBUOZXLEAIODSPWSSGSZJGMQJFQZFEFCHKDHBTYJBNQMHYRYLE");
    const signed char tmp_msg_0[] = {-1, -111, -94, -62, -1, -58, -101, -107, 52, 75, -63, -23, 111, -118, -42, 52, 117, 68, 7, 26, 12, -102, -93, -106, -124, 100, -70, -67, -70, 46, -13, -20, 56, -2, 71, -86, 68, 36, -79, -128, 21, 51, 126, 122, -97, -108, 64, -8, 111, -94, 87, 29, -109, -107, 6, 15, -18, 45, 61, -56, -5, -27, 58, -83, -40, -127, 89, 49, -25, -57, -62, -36, -45, 116, 56, 110, 94, 55, 126, 25, -68, -81, 107, -23, 21, 73, -77, -82, 43, -95, -85, -43, -75, 5, -40, 92, 63, 97, 33, 76, -84, 112, 112, 47, 12, 42, -76, -108, 126, 81, 70, -31, -53, -9, -41, -27, -13, 78, -93, -68, -69, -6, -25, 80, 65, 76, -34, -107, -62, 111, 76, -81, 65, -18, 70, 100, -104, -46, -116, 52, -42, 22, -126, 15, 64, -86, -120, -15, 35, -59, -102, 116, -99, -104, 81, -46, -63, -84, 31, -90, 49, -124, 11, -37, 66, 79, -91, -123, 16, -101, -107, 111, 104, 47, 78, 97, -53, -48, 84, -70, -23, -26, 57, -123, -104, -85, -8, 98, 86, -41, 88, 85, 41, -124, -95, 112, 34, -103, -107, 4, 118, 125, 26, -63, -31, -30, -4, -20, -49, 13, -66, -1, -121, -7, -62, 111, -120, 3, 121, 21};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttRXFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttRXFrame msg;
    msg.setTimeStamp(0.432759262287685);
    msg.setSource(24156U);
    msg.setSourceEntity(59U);
    msg.setDestination(61469U);
    msg.setDestinationEntity(243U);
    msg.topic.assign("SMUYLQERGAEKLKNXJZGJUKBHRRNBZVKQHLMDHLURYVXDLOSAJMLSAJYHIUFVAIWWWDSMDEFXMFGAOAQEYBWXSJKZFCNBIZHFDLOZGIXMWBBVMSRTOGSACSCEHASIYJNDHPYUNBTZUPVGORKDECYFZLNAWJTPGXUEVQXCMOWNWTOCDTAIZIWKNBCTB");
    const signed char tmp_msg_0[] = {27, -128, -106, 2, 3, -100, 112, -63, 19, -54, -96, -111, 99, -96, -53, 86, 96, -74, 8, 75, -114, -110, -47, -10, 41, -81, 50, -92, -106, -1, -69, 83, 46, -81, 108, -128, 35, 36, -15, 112, -66, -39, 107, -2, -118, -5, -89, 38, 123, 50, -41, -115, 90, -18, 84, 106, -34, -79, -97, 28, -123, 2, -2, 17, 123, -89, 39, -102, -121, -107, -7, -6, -22, 93, -94, -54, -125, -119, 102, 23, 108, 60, -13, -103, -88, 70, -48, 117, 120, 109, 7, -105, 55, -101, -4, -82, -28, -97, -11, -127, 73, 69, -58, -76, -58, -53, 42, 44, -2, -26, 16, -90, -76, 53, 68, -31, -43, -64, -89, -97, -4, -72, -59, 85, 41, -88, -79, -3, 3, -99, 80, 109, 41, -95, 69, 37, -36, 110, 50, 81, -18, -41, -73, 28, -87, 10, 123, -55, 81, -115, 82, 15, 40, 56, -123, 126, 30, 48, 97, 35, -17, 48, 20, 101, -89, -122, 37, -29, -93, -123, 51, 87};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttRXFrame #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2794407549884024);
    msg.setSource(63090U);
    msg.setSourceEntity(0U);
    msg.setDestination(31266U);
    msg.setDestinationEntity(49U);
    msg.op = 101U;
    msg.version.assign("LBUAUIHYCCZOBRRZEPVOJBQWITTQMLCFBEEGULLHKMOQZXPKWDOTRZZSNJIRPOMAGWUSZAYOMEBUQCYYNLJOMZREARSVJUNBIUXGTGPVULAMCHSVONSNEICOTXHYXMYYAXJVSREVZSJAXAKKLJXABGZSEDDLSWIBFFWECFHFHWLDJMDVBFTWNINYFKEJPXQWPPYQFIUQXJRDNMTWCHRLTPHKQTMODPDKSGHACBCGGVUPDFGQDYIWXVGZK");
    msg.description.assign("VZYIIQMNFRBJVIBQVMERBSRJOHRQFKWUPRJWNYQKPYNYAMFUDSYHLDLUIDTSOXWVLRPPMCFCYLVUNTXLZSFBIKQAMNDOXWXPPGGPRXPAKCJCDYPAFEKZTAFYTHFQJQWUYCIHGIKEEGDMAUMVHELIHNCSFZUMFDBNBCDAZTBAILHQXLJLNRNGZEZZNJMTTGBXOHVZWVEVKPBWO");

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
    msg.setTimeStamp(0.4217452759788374);
    msg.setSource(62429U);
    msg.setSourceEntity(0U);
    msg.setDestination(31239U);
    msg.setDestinationEntity(34U);
    msg.op = 52U;
    msg.version.assign("OSZOELRLUSJXTJMPIVXOVEXAKUUGDIOPNIJYSVHUDDMIPHJCTNGUTKHJDYMWWRTEGLKFEBQWA");
    msg.description.assign("JFZOIMZCILMBXNNIIVFVSXGNAFJRRCCHXNFRAXLGKJREOKKOHCWYOYGDDUWVJJECPWPMNHQVZDZSEWAKUFYAMKRGDXKPJDZFMDQHSLTBBETQYGMFHJSSVZWVULNIRMQBPPMCSTBRJUQUZIYUXMIPUWDRDHUTOTKXDSZOQOVYSHTZXCVJNAAYCNIAJXHGODEFKMXEZYQLLSWOTGCWKQEEL");

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
    msg.setTimeStamp(0.9395785749567308);
    msg.setSource(52089U);
    msg.setSourceEntity(158U);
    msg.setDestination(21528U);
    msg.setDestinationEntity(180U);
    msg.op = 225U;
    msg.version.assign("MRELNPZTFJREPSUZPPKNQOSGADHXUNCAOPSGGNHFSATLJBICNBVFZOGBLBILOQEEMQOKTHUTWVYMFLIRTCBJOXGJDLKFHEAWEOEPEHXIYUCXADAWIMEFCZDPRSGIVYMWVRHVDZQXBXLQRVWYZQGODWBUYAAHXBFTVQGIYCYHMGMDZFWRKRY");
    msg.description.assign("QGBKWDZYQLXVKHQONBZMWNLUKKXPELSSPWIHTFEAWLSUEWICYRQVKYQSMVOBOAXMIWNRFFVSBMSANHXXZIYUXGGGGOUCMPJBAJSNNFFTBVFUCVDZOARREYKAXQEQUPRJOPQGTMHZFEBKYTZUDXPLEGCLOYACGKDTMTDHWMCICZRMNDIXIQJVHEWZYIJKGHACSSPJZIDBJAETIQLRVRCLGVDRHVUONWYUJBAPFCYTFKNPJH");

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

  return test.getReturnValue();
}
