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
    msg.setTimeStamp(0.3909965377693617);
    msg.setSource(56555U);
    msg.setSourceEntity(13U);
    msg.setDestination(44108U);
    msg.setDestinationEntity(78U);
    msg.state = 188U;
    msg.flags = 217U;
    msg.description.assign("XKWAQOSUKJWHZBMEAAVQBCQFGEISHTLLVHWZUGYRPRBQQNCQISCURXNOPNASIVDEBKTLMURBKOEFYLFOMKXGGGJVMVIKBZQWLRRTWLCGVDTZYPNJEQVQIPCXZQYOASICFSMALPDYHCPZEWEXXUAGHFYDCOYZIH");

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
    msg.setTimeStamp(0.9653481069252956);
    msg.setSource(54232U);
    msg.setSourceEntity(254U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(5U);
    msg.state = 235U;
    msg.flags = 115U;
    msg.description.assign("ISAVCRBHFZJLAXVSXQRNVIUPNKNEQZVGNFXIGZCMYKXUSJVLVIADDUIXNBLMBFQIQZLEZSCGNAHUSDXGPJOQOKM");

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
    msg.setTimeStamp(0.3197187348018409);
    msg.setSource(61052U);
    msg.setSourceEntity(142U);
    msg.setDestination(13737U);
    msg.setDestinationEntity(44U);
    msg.state = 176U;
    msg.flags = 176U;
    msg.description.assign("ALOAXHSDMSKLQEZHAPAOPNZUAOJKSZNMOWIYVQYSZMRYTRJTFWKBSCZEBMDEZLUIVGNKHWJGCEVSQAQBKGWNNYPTQVGUFMBDUJOEUXWSLTCVLRDGQJGUEFIMYOWJCVXRGTMPRZEZYTYVMUJPKRDOJLUVBT");

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
    msg.setTimeStamp(0.702239989091703);
    msg.setSource(19839U);
    msg.setSourceEntity(12U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.021495239561820534);
    msg.setSource(62131U);
    msg.setSourceEntity(170U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.8543607449053864);
    msg.setSource(32686U);
    msg.setSourceEntity(191U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.45159344991454775);
    msg.setSource(32191U);
    msg.setSourceEntity(44U);
    msg.setDestination(61475U);
    msg.setDestinationEntity(132U);
    msg.id = 225U;
    msg.label.assign("GGIBDMNXHXQMBCYHZJVKOJYTMRZUBFRWZQKEFZQHYFOKCTSXQNJNSWWNPPBAORFZDUBIGGPBILVESNFTXPXKLSHPIWSOTGKLFTMQIYQEJFXRGYMNNWXDDBFQAWUFRYHDCYPCQWODLLUURNOTEIKIJCSVHDPIESOF");
    msg.component.assign("CEZXURSLQBNISXUFCPDNOKZWXLEHXFJCRJWQXZTZQNLBHACZKUTYSWXGAGPZAJRGIYWJADZSWDYEPTSFXKDBOCVJNBEPTGEWQLQLGKLOZLRUFJRXBHDTHMSVMVMQMFIEPEROQAUDYSIYMQRTLOHFSDUBGOOGZVQKVNHTBOIGOKCTIJFVDHNCRNPJUFYTKEBMFYVDUIUWW");
    msg.act_time = 59448U;
    msg.deact_time = 7485U;

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
    msg.setTimeStamp(0.16702993314653414);
    msg.setSource(46019U);
    msg.setSourceEntity(212U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(137U);
    msg.id = 73U;
    msg.label.assign("MQNFLVYOQHTKOFSQJVJEMOLMRIDEBZVNLFKABWEZSUIRMEDZTSVIQNWQJGZDLFVVDDCTIJLWBAHCMXEJABGTZRWRHUGDKOUYQCDIHCFWQBPZSRGRKMCAINTADXTHUORBEFPWXMCDHAZSSHOYGBSGUXKMWPUFEXNPWFXWPVNGEVNTA");
    msg.component.assign("HZILPAFAYIFYYJHWUCEERPRNKYVBFHWSOECHDSIRWBYQVVUMPYVMDSUUVXAKNFOSWZYJBFGARDLSOMPRPVLKHOFITEKUQGYCRQQDXZWOLXPJGXRFJOUMTQKVUGHDHCSQMNZLETYWCEPTKGZDBAQINRZJKBICZLMTPZLJSYQRHUGJWQURMMNDZIBTNOGVNIDFGXJKCNWOIXGXGVUXTTFCHXBLWSKFV");
    msg.act_time = 49580U;
    msg.deact_time = 10825U;

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
    msg.setTimeStamp(0.5735458530771814);
    msg.setSource(11208U);
    msg.setSourceEntity(49U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(137U);
    msg.id = 92U;
    msg.label.assign("BDLHLAGVZAWPMIYWPLBCZGBHOLLFBMFWRDRXSVGIRHPUVKUBSYVRKNOPEMXZJIWSJGEIXVCNJWQGRKNVDCXCJKUTMFGOEWHHTGYFMOOTNKDSBIFQVZPYRXHLESUVSFTAUPYTSMYEZLYSJXINTUKBEIRBVGH");
    msg.component.assign("HUPJJVULCJUUQAPBNTXPIOTT");
    msg.act_time = 60398U;
    msg.deact_time = 51360U;

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
    msg.setTimeStamp(0.6227181230148069);
    msg.setSource(36537U);
    msg.setSourceEntity(60U);
    msg.setDestination(38433U);
    msg.setDestinationEntity(224U);
    msg.id = 195U;

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
    msg.setTimeStamp(0.5925561478169133);
    msg.setSource(40301U);
    msg.setSourceEntity(11U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(118U);
    msg.id = 96U;

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
    msg.setTimeStamp(0.2781093281243676);
    msg.setSource(50792U);
    msg.setSourceEntity(196U);
    msg.setDestination(29210U);
    msg.setDestinationEntity(44U);
    msg.id = 86U;

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
    msg.setTimeStamp(0.3287012598784427);
    msg.setSource(23040U);
    msg.setSourceEntity(224U);
    msg.setDestination(8343U);
    msg.setDestinationEntity(8U);
    msg.op = 138U;
    msg.list.assign("PLBBSTISZMOXRYJAVNHRKELIYRUSNDLLXKCVKQKRRBOBKGMIDZXWGYMUCCECLRNWSSDPBLEACW");

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
    msg.setTimeStamp(0.6531913618003213);
    msg.setSource(21341U);
    msg.setSourceEntity(37U);
    msg.setDestination(49641U);
    msg.setDestinationEntity(71U);
    msg.op = 196U;
    msg.list.assign("XVNBQEHLXZPTYKYVXLPEHJYFZDAYJGMZWOMETIFLEUUBRRIBFOGLWVQJYANCOBRWHOVWLVXQSYKSPBMDRUWVCHSIDRCMIJXMQLZQVYKMZQHGEDRWLLYNUZOKNRWHKGCAGAMKCYXJTEASQLSNOUQDCIKPFACFPHNEYFXDAJNOPECJJTTOFIHJEWFUPWTSVGETPSRTXVMABSKCZRUAUDDZMOU");

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
    msg.setTimeStamp(0.6111237760405722);
    msg.setSource(59013U);
    msg.setSourceEntity(74U);
    msg.setDestination(33360U);
    msg.setDestinationEntity(10U);
    msg.op = 80U;
    msg.list.assign("AWSLGMLIKNZWEUYCVYNHRCRRFLDQSKDYLWIOTSDXFZSUDPEAGCRRJIUOHHDNBUXMQPXGFLWITXOFJLWRFLHUPDACLBXSBYGMWRFJFWEOIEPOQQTDNTBZYUAYCOEVMYYFVNCWZGSFXZPJDAMMNJISVUKJWVFBTPUBNHHNDMLYTMTQRUJHVBYPOEJVXTBPGQTIZEBZQHBQKVHCAZVRQUNXKCKCMAVESLJCNKOPOGEREOIQKGGAIZPKXDKWHSA");

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
    msg.setTimeStamp(0.5425622145083909);
    msg.setSource(20428U);
    msg.setSourceEntity(196U);
    msg.setDestination(45660U);
    msg.setDestinationEntity(107U);
    msg.value = 175U;

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
    msg.setTimeStamp(0.2828915095702462);
    msg.setSource(17510U);
    msg.setSourceEntity(150U);
    msg.setDestination(52021U);
    msg.setDestinationEntity(107U);
    msg.value = 29U;

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
    msg.setTimeStamp(0.27726468030371687);
    msg.setSource(44331U);
    msg.setSourceEntity(32U);
    msg.setDestination(42363U);
    msg.setDestinationEntity(116U);
    msg.value = 80U;

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
    msg.setTimeStamp(0.3217355930232194);
    msg.setSource(51816U);
    msg.setSourceEntity(157U);
    msg.setDestination(22486U);
    msg.setDestinationEntity(190U);
    msg.consumer.assign("AWOEUVTWLUDYNBSNAYGODZTVXPIKDPXLERJXKGQWRUH");
    msg.message_id = 16782U;

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
    msg.setTimeStamp(0.49173200908212855);
    msg.setSource(6256U);
    msg.setSourceEntity(10U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(41U);
    msg.consumer.assign("ZFSNRWIOSBHWLFYRRXOQRQQEQQGHPKLLIYEBYLIEXQUCJQLVZTEZGIBMXBHWVMYDLSKOPWYUCFKFKNEEVNUOKTWMJGCRTDEZNCCNGSMFYDMHLAFOTKGHTZJMBBOIVCABQJTVHZJCEPRYWCTCTF");
    msg.message_id = 34214U;

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
    msg.setTimeStamp(0.5854334281949574);
    msg.setSource(31543U);
    msg.setSourceEntity(138U);
    msg.setDestination(37431U);
    msg.setDestinationEntity(21U);
    msg.consumer.assign("JZXCBVERHWDFWOHRHTLKKXYVQHYNBTNVMTIDSPSGWNPCNQTMLWDLVPNFMKBNFBCHGHKZGJSRKTSGJTAVYTMVHWKRZISKAABOYPQWOKLJUIESVDCAJPHPRAUVUGYHBGUGTSXYXWAZMOOAFIMWZPGVNFULBNGNSWZY");
    msg.message_id = 62172U;

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
    msg.setTimeStamp(0.4359018085120222);
    msg.setSource(41059U);
    msg.setSourceEntity(181U);
    msg.setDestination(6246U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.420733419528477);
    msg.setSource(40674U);
    msg.setSourceEntity(219U);
    msg.setDestination(42037U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.48082826007492263);
    msg.setSource(30723U);
    msg.setSourceEntity(97U);
    msg.setDestination(56895U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.8976546057704635);
    msg.setSource(30200U);
    msg.setSourceEntity(75U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(134U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.03873559600104037);
    msg.setSource(16594U);
    msg.setSourceEntity(7U);
    msg.setDestination(39190U);
    msg.setDestinationEntity(23U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.39430220354929024);
    msg.setSource(9737U);
    msg.setSourceEntity(68U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(125U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.6465892650847573);
    msg.setSource(7000U);
    msg.setSourceEntity(67U);
    msg.setDestination(52367U);
    msg.setDestinationEntity(196U);
    msg.total_steps = 61U;
    msg.step_number = 181U;
    msg.step.assign("VULEIGOCXRYFMHSIGBTKFNEMXHSNQPAQEDUKNTDVZCYODLVAHUXBOTAJLLEUABTQQFVNABEGZMODKCYFPORSLWYUNCIRMHSIMWLINAYYAWUSIWPHRIFZZFPWAFTVHUOLJWZCDBXTJXPANOECRWHPPQGGJZNKOVBWDCOTMEYHJJSVKSJDIWRBHZDEZJRCKOKMQKLPXXQGRHMYVUCGWYXBYAXGKDXNIKUTTNEPQESLGGRZVFUJVDBQMZBPQLCSF");
    msg.flags = 118U;

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
    msg.setTimeStamp(0.7775232898873619);
    msg.setSource(63205U);
    msg.setSourceEntity(126U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(156U);
    msg.total_steps = 85U;
    msg.step_number = 96U;
    msg.step.assign("COFHSQPADJCBUOAFDMXVNEQCVJUDFULYMIYQSQHL");
    msg.flags = 45U;

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
    msg.setTimeStamp(0.892548119861628);
    msg.setSource(45888U);
    msg.setSourceEntity(61U);
    msg.setDestination(12689U);
    msg.setDestinationEntity(171U);
    msg.total_steps = 10U;
    msg.step_number = 6U;
    msg.step.assign("METHQSORIVZLFAGHVJTKWOHINRCSZSDEGTAYDVYXQTXVGQBOSBFMWEQASRIXMTXHGZNPTEWZYTNHJNSNXTACFMFAKXKBESEKUCXQHUPGLE");
    msg.flags = 142U;

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
    msg.setTimeStamp(0.9493224002398392);
    msg.setSource(1220U);
    msg.setSourceEntity(52U);
    msg.setDestination(61843U);
    msg.setDestinationEntity(219U);
    msg.state = 72U;
    msg.error.assign("WTQTOPXNVNAJFNMLHJEGVFEXURQDUXMGMDTDOYJBUZFHEMZQEYAPKSGKYPPILAABBRMCJSEIBGMKGBYRWYFPASARLUKUGYYJCIGCUCFIAUMXWXONWOQQZDQSFCSDVENWLIZPPCZLYVOWJFKHUKRJSCEETTYLYKXALNKUWGI");

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
    msg.setTimeStamp(0.3200911021798919);
    msg.setSource(43300U);
    msg.setSourceEntity(206U);
    msg.setDestination(25739U);
    msg.setDestinationEntity(150U);
    msg.state = 254U;
    msg.error.assign("PRHCFCCGAOYYKKEZWSVHVYBIJYAKVUHYLLBLMGTBQLNIPESUJWJFUDKIXGQEIRISSUGEBTKBYSIJKHGN");

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
    msg.setTimeStamp(0.8526979311988853);
    msg.setSource(11768U);
    msg.setSourceEntity(106U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(110U);
    msg.state = 240U;
    msg.error.assign("JMNQIKQCYYTHDWSGLJQSWBDIXBKEOIMBGPPMAJEWARHSUZCYYXPESADDACVKERNXJZ");

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
    msg.setTimeStamp(0.2658804746006833);
    msg.setSource(55760U);
    msg.setSourceEntity(114U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.2083038440821876);
    msg.setSource(49383U);
    msg.setSourceEntity(158U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.41970327717219846);
    msg.setSource(57198U);
    msg.setSourceEntity(19U);
    msg.setDestination(53837U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.37153605069043993);
    msg.setSource(19713U);
    msg.setSourceEntity(135U);
    msg.setDestination(24627U);
    msg.setDestinationEntity(5U);
    msg.op = 162U;
    msg.speed_min = 0.6982689223162926;
    msg.speed_max = 0.40944155971543295;
    msg.long_accel = 0.10412728180226405;
    msg.alt_max_msl = 0.8193343515186318;
    msg.dive_fraction_max = 0.4087069256267679;
    msg.climb_fraction_max = 0.5069190462638545;
    msg.bank_max = 0.4970281722824298;
    msg.p_max = 0.37645737944504154;
    msg.pitch_min = 0.9212681490180018;
    msg.pitch_max = 0.6253911794750195;
    msg.q_max = 0.2260607274779468;
    msg.g_min = 0.5983010881012187;
    msg.g_max = 0.6651566141782005;
    msg.g_lat_max = 0.8892626424693904;
    msg.rpm_min = 0.37617473357888687;
    msg.rpm_max = 0.18275878493802133;
    msg.rpm_rate_max = 0.20511072042718848;

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
    msg.setTimeStamp(0.8868258624860488);
    msg.setSource(23105U);
    msg.setSourceEntity(205U);
    msg.setDestination(57039U);
    msg.setDestinationEntity(220U);
    msg.op = 209U;
    msg.speed_min = 0.2540995367361807;
    msg.speed_max = 0.4981029621105725;
    msg.long_accel = 0.5211577131852781;
    msg.alt_max_msl = 0.6233375492105673;
    msg.dive_fraction_max = 0.32103409041937725;
    msg.climb_fraction_max = 0.5705708587017485;
    msg.bank_max = 0.16738502896149943;
    msg.p_max = 0.8578974046415437;
    msg.pitch_min = 0.6954317248318521;
    msg.pitch_max = 0.826714518601129;
    msg.q_max = 0.15353029213256586;
    msg.g_min = 0.9596907322617582;
    msg.g_max = 0.6985580513760948;
    msg.g_lat_max = 0.3624972249076178;
    msg.rpm_min = 0.7949700444581307;
    msg.rpm_max = 0.8424162004830089;
    msg.rpm_rate_max = 0.7902665479527281;

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
    msg.setTimeStamp(0.1351478777577304);
    msg.setSource(30664U);
    msg.setSourceEntity(13U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(194U);
    msg.op = 19U;
    msg.speed_min = 0.6241881591862907;
    msg.speed_max = 0.004193827563263919;
    msg.long_accel = 0.6635516305099288;
    msg.alt_max_msl = 0.49092639647548164;
    msg.dive_fraction_max = 0.7037837077954441;
    msg.climb_fraction_max = 0.01838453603357304;
    msg.bank_max = 0.6792277302445837;
    msg.p_max = 0.3450773337674652;
    msg.pitch_min = 0.877275258715598;
    msg.pitch_max = 0.4510610873501485;
    msg.q_max = 0.19722075285518048;
    msg.g_min = 0.8679127813823145;
    msg.g_max = 0.15576142355208744;
    msg.g_lat_max = 0.013514339016566623;
    msg.rpm_min = 0.6409188296416751;
    msg.rpm_max = 0.4033103714920525;
    msg.rpm_rate_max = 0.5612112573715919;

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
    msg.setTimeStamp(0.31910916220255403);
    msg.setSource(28703U);
    msg.setSourceEntity(97U);
    msg.setDestination(55113U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.5708865313891716);
    msg.setSource(58299U);
    msg.setSourceEntity(17U);
    msg.setDestination(50929U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.18675087909989818);
    msg.setSource(45183U);
    msg.setSourceEntity(186U);
    msg.setDestination(45583U);
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
    msg.setTimeStamp(0.1431745295604906);
    msg.setSource(8538U);
    msg.setSourceEntity(224U);
    msg.setDestination(42880U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.04304055989822908;
    msg.lon = 0.07908487874091241;
    msg.height = 0.14559624698647233;
    msg.x = 0.32555080452876894;
    msg.y = 0.091497138471617;
    msg.z = 0.4261172998006134;
    msg.phi = 0.27785235890197924;
    msg.theta = 0.7097421295811768;
    msg.psi = 0.9808998661438113;
    msg.u = 0.3013197005976268;
    msg.v = 0.29664344989768177;
    msg.w = 0.0553405319231578;
    msg.p = 0.23488640576007658;
    msg.q = 0.05001672174304428;
    msg.r = 0.6158275827040008;
    msg.svx = 0.6767735907243269;
    msg.svy = 0.8640143400524862;
    msg.svz = 0.7641148865401293;

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
    msg.setTimeStamp(0.2321494419801461);
    msg.setSource(65449U);
    msg.setSourceEntity(99U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.842640148013878;
    msg.lon = 0.35644988253813004;
    msg.height = 0.31986249618591345;
    msg.x = 0.6656664955575274;
    msg.y = 0.05597238469651289;
    msg.z = 0.45396788159330204;
    msg.phi = 0.6176121093197627;
    msg.theta = 0.6174928871449686;
    msg.psi = 0.3767255747529442;
    msg.u = 0.5604701478959603;
    msg.v = 0.13710460585062667;
    msg.w = 0.3102795875415192;
    msg.p = 0.9958807101854671;
    msg.q = 0.16349716288589378;
    msg.r = 0.4286585349564348;
    msg.svx = 0.395076802129941;
    msg.svy = 0.8948963716536471;
    msg.svz = 0.4165022305569518;

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
    msg.setTimeStamp(0.3809587658528273);
    msg.setSource(47503U);
    msg.setSourceEntity(9U);
    msg.setDestination(58382U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.6424682443131713;
    msg.lon = 0.10292246277403827;
    msg.height = 0.6930956107364278;
    msg.x = 0.5295089094225321;
    msg.y = 0.3798886256219638;
    msg.z = 0.4521306998678407;
    msg.phi = 0.18887524499590613;
    msg.theta = 0.9716445567245792;
    msg.psi = 0.8248368416994428;
    msg.u = 0.6851904916872164;
    msg.v = 0.8600208766931973;
    msg.w = 0.8140430945980937;
    msg.p = 0.6022751146035366;
    msg.q = 0.3450869543006644;
    msg.r = 0.29035234195450343;
    msg.svx = 0.4010036720423761;
    msg.svy = 0.9249209900119693;
    msg.svz = 0.14353951659115682;

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
    msg.setTimeStamp(0.1321961193753447);
    msg.setSource(30952U);
    msg.setSourceEntity(63U);
    msg.setDestination(31448U);
    msg.setDestinationEntity(78U);
    msg.op = 155U;
    msg.entities.assign("ROIKZHMUSNCYVCYIYTXGDGQIQYKRDTTLJTZAFHFZBPEMOCBRTEUHFNAJHWBYQCUCVJBJGRYPWOCKBGFVWODZBGEVSTJUQGDFLOVGRIAYQLMDIALVRUQSGDETLNCIBOVSWBMDDENASJBLZEZPAKXNSUVKLPAJAMVWLEWM");

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
    msg.setTimeStamp(0.9580759383254066);
    msg.setSource(57834U);
    msg.setSourceEntity(98U);
    msg.setDestination(35132U);
    msg.setDestinationEntity(165U);
    msg.op = 218U;
    msg.entities.assign("JCDZXOULZSSEQMKELJPGKQQOXLAALNEBCSKCKTUJIZAJKCVDDGWUZHQYFIMSBHRVGTRETOTDQPXRFPAHWGWDJBCUCYMNIMASXDVAGVMCZMHUKNITXLEPSNREJFEUGDEEMTBWRXAHHWTVRKF");

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
    msg.setTimeStamp(0.07792506978104663);
    msg.setSource(19855U);
    msg.setSourceEntity(122U);
    msg.setDestination(20377U);
    msg.setDestinationEntity(106U);
    msg.op = 229U;
    msg.entities.assign("WFAOTZJADOKKRDJUMLSZBOJLUGHESVJBPLYPKKQIUUC");

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
    msg.setTimeStamp(0.1280324247364183);
    msg.setSource(62126U);
    msg.setSourceEntity(110U);
    msg.setDestination(50994U);
    msg.setDestinationEntity(161U);
    msg.type = 8U;
    msg.speed = 65191U;
    const char tmp_msg_0[] = {3, 119, 1, -44, 41, -59, -73, -35, 99, -34, -44, 62, 29, -124, -15, -108, 69, 115, 37, 119, -77, 13, -86, 112, 112, 75, 66, 95, 10, 61, -24, -106, -96, 41, -58, 76, 69, 96, -8, 112, -29, -57, -96, -96, 125, 67, -48, 98, 50, -42, -85, -123, -70, 22, 28, 121, 123, -83, -6, -18, 20, -21, 82, -116, 7, 40, 64, 5, 118, 102, 121, -45, -16, -18, 1, -5, 96, -66, -26, -3, 105, 68, -105, 4, 8, -67, 70, 94, -22, 12, -118, 4, -102, -67, -54, -57, 106, 13, -57, -81, 115, 122, -79, -30, 84, -68, 108, -52, -112, -18, -50, -121, 18, -4, 56, -48, 103, -114, 87, -33, -68, 84, -105, 46, -94, 118, 82, -32, -21, 102, -47, -122, 13, 38, 120, 0, 4, -47, -29, -127, -62, 112, -56, 66, -114, 13, -86, 122, 51, -119, -37, -81, 54, -66, 51, 119, -91, -65, 123, 22, -28, -75, -52, -104, -96, -44, -107, -60, -72, -10, 101, 70, 101, -121, 74, 97, 110, 23, 78, -86, -67, -50, -49, 41, -84, -94, 42, -54, 88, 41, 94, -65, 70, -33, 57, -33, 105, -78, -2, 65, 84, -68, -45, 96, 15, 57, 10, 78, 102, 8, 23, -6, 67, -85, -106, -67, 24, 34, -5, 113, -1, 77, -63, 24, 89, -87, 19, -25, -48, -75, 90, 123, -49, -125, 78, -15, 122, -128};
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
    msg.setTimeStamp(0.8305349416276059);
    msg.setSource(38999U);
    msg.setSourceEntity(13U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(158U);
    msg.type = 174U;
    msg.speed = 5891U;
    const char tmp_msg_0[] = {12, 75, -59, -123, -60, 98, -44, -55, 68, 67, 50, 64, -112, -32, -35, -123, 112, 123, 122, 98, -54, -83, -5, 104, 115, 52, -96, 76, 81, 103, -67, 21, 42, 15, 49, -15, 119, 88, 75, -121, 81, -11, -118, -114, -101, 66, -59, 59, 44, 43, -75, -124, 34, -45, -8, -7, -52, 61, 80, -21, -11, -20, -85, -87, -126, -108, -55, -107, 66, 10, 79, -52, -95, -111, 44, -119, 3, 43, -91, 126, 60, -14, 7, 4, -67, -6, -70, 22, 1, 39, 94, 5, -28, 74, -41, -3, -115, 73, 61, 91, 22, -80, 65, 0, 5, 26, -113, -104, 123, -113, -116, 33, 6, -52, 102, -16, 118, 126, -120, -108, 73, -15, -75, -105, 20, 11, -61, 32, 34, 16, 121, 4, -54, 113, 31, -41, -95, 99, -77, -68, -46, -32, 83, 35, 53, -40, -25, 20, 64, -54, 104, 50, -75, 110, 17, 10, -22};
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
    msg.setTimeStamp(0.683499692291227);
    msg.setSource(64722U);
    msg.setSourceEntity(10U);
    msg.setDestination(37430U);
    msg.setDestinationEntity(224U);
    msg.type = 70U;
    msg.speed = 11936U;
    const char tmp_msg_0[] = {-65, 11, -115, -44, -27, -96, -47, 93, -70, 50, 55, -42, 53, 109, -47, -112, -60, -18, -58, 124, -53, -124, 42, -112, 43, 69, -11, 122, -113, -85, -37, 126, 79, -28, 63, 31, -10, 98, -24, -47, 0, -87, -124, 10, 19, -6, -29, 21, -45, 120, 115, 45, -50, 124, 43, -48, -30, -122, 68, -92, 2, -17, 67, -73, 46, -82, -89, 34, 31, 73, -48, -74, 103, -106, -110, 67, -9, 102, 48, 31, 106, -109, -49, 97, -2, 8, 70, 13, -112, -84, 108, -33, 37, -23, 120, 46, 60, 83, -13, 26, -75, 119, 52, 121, 74, 83, 125, 13, -2, 30, 90, -125, 17, 89, 42, -66, 7, -6, 21, 24, 3, -83, 10, -58, 27, 26, 5, -96, 35, 31, 111, -66, 18, -16, -13, -114, -68, 78, 18, 60, 105, -43, -88, -111, -120, 112, 120, 117, 103, -116, -68, 115, 28, 99, 23, -112, -113, 42, 70, 83, 43, 112, -14, 113, -65, -119, -9, 82, 100, -101, 41, -86, -28, 113, -96, 28, 52, 6, 86, 58, 94, -30, -94, -115, -115, -9, 117, 70, 75, -68, 18, -43, 82, -107, 8, 73, 96, -128, -119, -93, -102, 7, -3, 10, 1, 76, -126, 85, -60, 117, 22};
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
    msg.setTimeStamp(0.469342088518947);
    msg.setSource(38534U);
    msg.setSourceEntity(114U);
    msg.setDestination(45518U);
    msg.setDestinationEntity(175U);
    msg.op = 46U;
    msg.tas2acc_pgain = 0.6204120837768096;
    msg.bank2p_pgain = 0.2287984094092096;

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
    msg.setTimeStamp(0.41288310915037973);
    msg.setSource(40180U);
    msg.setSourceEntity(42U);
    msg.setDestination(43183U);
    msg.setDestinationEntity(45U);
    msg.op = 110U;
    msg.tas2acc_pgain = 0.965187600614525;
    msg.bank2p_pgain = 0.3984935041259676;

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
    msg.setTimeStamp(0.02217797247772768);
    msg.setSource(38663U);
    msg.setSourceEntity(242U);
    msg.setDestination(37806U);
    msg.setDestinationEntity(228U);
    msg.op = 254U;
    msg.tas2acc_pgain = 0.6411230306637201;
    msg.bank2p_pgain = 0.2521094623120277;

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
    msg.setTimeStamp(0.07693756418342024);
    msg.setSource(28626U);
    msg.setSourceEntity(106U);
    msg.setDestination(33880U);
    msg.setDestinationEntity(168U);
    msg.available = 1679324700U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.34745983827230287);
    msg.setSource(12090U);
    msg.setSourceEntity(130U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(189U);
    msg.available = 142315894U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.40497946609448376);
    msg.setSource(36211U);
    msg.setSourceEntity(246U);
    msg.setDestination(43428U);
    msg.setDestinationEntity(223U);
    msg.available = 342987896U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.9341575881327703);
    msg.setSource(33067U);
    msg.setSourceEntity(198U);
    msg.setDestination(29679U);
    msg.setDestinationEntity(2U);
    msg.op = 187U;
    msg.snapshot.assign("CRFJXRLEQABODVSKJJMUQDJOSMONOCUAADYTKAIZDBJCRZFMSXDPWELCDSKGQZGKMHIRYIYBHQSUEZSVGF");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.562674719604823;
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
    msg.setTimeStamp(0.34779448424104775);
    msg.setSource(9354U);
    msg.setSourceEntity(157U);
    msg.setDestination(46593U);
    msg.setDestinationEntity(21U);
    msg.op = 93U;
    msg.snapshot.assign("WPZVBWBCAXRIXQWKAAKMVJPAIMJHFGRQMRJJPLQTUOKWVNRTTIYKGOXVDMSYEFREQWHMQGVHHCFTJHXSJQGZOCHNYBILDKZADIGYVSDPYNKPLBFSDLWQAWTCBCEGXSFYMD");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.reason = 71U;
    tmp_msg_0.value = 0.23835313972222805;
    tmp_msg_0.timestep = 0.6005453849531198;
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
    msg.setTimeStamp(0.8680654418992411);
    msg.setSource(46205U);
    msg.setSourceEntity(62U);
    msg.setDestination(23606U);
    msg.setDestinationEntity(192U);
    msg.op = 6U;
    msg.snapshot.assign("FATPLVAWFVJUQCQUTZKWSQHESAYVEJTTFHJBDDWJZUYUGQPROZQDHXBVNXPIURZEXURGIRHYDBWNJJCQXEWOICHNMTLOGXLOKVLJMQENGODAPFBAATUKENQBXYTIGMDFNSIIMDSKTMPBUMMIGCYURXEBHRVZQLDRJFPNLSRCPFZLWOZMDJGVKZQBJPCINSCHMVRARGSLKITVWUGNPEHOSCYZ");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.6801068538135541);
    msg.setSource(43226U);
    msg.setSourceEntity(233U);
    msg.setDestination(47320U);
    msg.setDestinationEntity(211U);
    msg.op = 253U;
    msg.name.assign("LHBKPLJUTKOTGJZWTQXKWOGXXWWKXSPVRCOFCSGXBZWRDLLIYHPNTYCQBADERFCNVXHZJRCFBZCQVURS");

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
    msg.setTimeStamp(0.31980752992186434);
    msg.setSource(24239U);
    msg.setSourceEntity(39U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(75U);
    msg.op = 71U;
    msg.name.assign("NDJYXIZGLJBEGIGJVWQFIKXOWDVHFGABYYCJECWTQOEFNRNUQPKKZMUHTAKSKCNHEJNQNWTMDUFGTYZSSEMESVYDJIVDLYIJYWUZMBXPLQWHSMJKAJXEEQRVFAPKWSOLIQAXPACCBZCKUOPRBUAHCVIRUSBUNKDMWOWHJEZFRDXGITTKQXXBBLPDVCGPXLTPVNLFOFEYPLFHSHGRGVHTYQFTNZZQHIOIAGLYCVXWARAMZSOU");

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
    msg.setTimeStamp(0.428114197887963);
    msg.setSource(62891U);
    msg.setSourceEntity(35U);
    msg.setDestination(47555U);
    msg.setDestinationEntity(74U);
    msg.op = 157U;
    msg.name.assign("ZIWJFBJOBXNUKRPLBOLXMPAKYRVQIYVHHATBETFRLDSULZGJGRYETOHNSFBCGNFBMGLAMCCZERIDPSRIAMATQJIXKLTCYOYACJCPJZSWZXDGEHAZDOHPIQHTHZNLQMCFFHHUERZFYKOLBFLTFPANVRWVJWZOARKXOUDSGVUGSVEXXQQCJQMBTWHYIOUEWZCEQAPMVEPNESUFPKSXYLPIWKNSUKYTXGNJDNBQGCDVRUINDJMTQSXDB");

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
    msg.setTimeStamp(0.3520784322783266);
    msg.setSource(1612U);
    msg.setSourceEntity(10U);
    msg.setDestination(38821U);
    msg.setDestinationEntity(140U);
    msg.type = 152U;
    msg.htime = 0.027179140589187578;
    msg.context.assign("QYMEJUIOXXYDCDFGTVBBQRPJZSACQVCTSPWUJMBXRTNGJHNGLWPEYGAANQHOLYACERVXEDZJKDFNUBISYXZMLACSIKRAPFJSYHTB");
    msg.text.assign("HVBMZCYTPRJBUBGXMAHLFKYZOPIKZGUYHRUMLRLPKXMHTJPXQILYECFRHPFGBUNMPMNQSIWYTRNRDSLYWPZUJESABIJPFKZBCTGKQFIXMCQGFSWOZTFAPFXKWTMSCVNTJUEWSLVRXQTPAOXCZSHBKNOJSANHOEHYVSDNWAUFUUEEXJYVAEIBEKNDHDSBOQ");

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
    msg.setTimeStamp(0.8660049778383705);
    msg.setSource(55023U);
    msg.setSourceEntity(130U);
    msg.setDestination(52499U);
    msg.setDestinationEntity(205U);
    msg.type = 43U;
    msg.htime = 0.3284653846385387;
    msg.context.assign("THRVQOMTWUFZLTTJGZGKCDIFMWZVQKHVEPAGVPFASPQUADZTRUDGILAVPKFKCHZHJETHASFJMOMKHBQRGVNNKVBOJBPISNJF");
    msg.text.assign("YBREOLSGVCZJRFWTKTALKTQYGLHOQISWZGVAAYACMUUCXNSFCBJEGVMEMIVOIUWVTGMHVKVXSTDPLXGFQQWNOCBNMJUQNKEGKWXUHXRUNTQIZJHDCLPFYASYHPHOBBCXRKMPWUWDZBQKQKULUXQWOMBIYZEFLDOFFKOHXVTIRGLDHARPFAYRJ");

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
    msg.setTimeStamp(0.7072984277795801);
    msg.setSource(34841U);
    msg.setSourceEntity(19U);
    msg.setDestination(46693U);
    msg.setDestinationEntity(192U);
    msg.type = 85U;
    msg.htime = 0.44274137671915303;
    msg.context.assign("ZLVHAYOHJFUREGFMBBWCFYSFWICEUXJORPKFOKEJKVXJBJGKJUQVLNWVTZSROFALPXCNYJOPXANMFQXLIIBMUQLWNTFMBUGKIXRPZJWKRHYCVLUAMYMKQCSBNAIVDNTHEMERSQJHZRCHAPZCZTDYPIYIUCQYVZCBYLSSSMNHD");
    msg.text.assign("QPYJLTONZPMUWAATOTOGNWYITKHDZGBSBHHFKCTHQJMMUOZHVWKXYXJPJUMIOXXSVRFLTQJKGGSZCVUGXBDRKAXHXPYFPQCVKKAQZABFFOLNIFCNMXQKCERLCDALUSETWRPEBCSGXERNBCMCBHJIWRVEMNYHAZDAVUJPJUAJPWSCBVIGNUTTQAILYYWHSLY");

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
    msg.setTimeStamp(0.326434603971147);
    msg.setSource(4178U);
    msg.setSourceEntity(173U);
    msg.setDestination(41218U);
    msg.setDestinationEntity(125U);
    msg.command = 117U;
    msg.htime = 0.6269851855212022;

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
    msg.setTimeStamp(0.9249466250167433);
    msg.setSource(20490U);
    msg.setSourceEntity(21U);
    msg.setDestination(39808U);
    msg.setDestinationEntity(63U);
    msg.command = 206U;
    msg.htime = 0.8901906532121652;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 120U;
    tmp_msg_0.htime = 0.6409685580778762;
    tmp_msg_0.context.assign("YQSWVBQSHHFNCHDIODLIIHURKZYXBDTPLRTWUUEXZXHSODAOFROJYAPGRCJZBNSJFFRPVGUANYBTVPSDQWGXNZDLIGPNRSECESHMMQJZQDTMGYAVERMJLFTZWNWBCCGHKQSBMJBUQOOINTMZMYLUKMDAZAXIXFQYQNTXGLREBXHUXYFHUOEOILBW");
    tmp_msg_0.text.assign("MJCOOOTVKASDZCVRYVPCGJTULZDHSFIUTMXKHLFDBVAFYNSPABLQFLVNCLMMDFBYABPKQHRTFWSKBGFDZOOTOC");
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
    msg.setTimeStamp(0.09860764579071601);
    msg.setSource(56517U);
    msg.setSourceEntity(150U);
    msg.setDestination(5985U);
    msg.setDestinationEntity(2U);
    msg.command = 163U;
    msg.htime = 0.8864555150600332;

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
    msg.setTimeStamp(0.49970903699292446);
    msg.setSource(30123U);
    msg.setSourceEntity(22U);
    msg.setDestination(8955U);
    msg.setDestinationEntity(214U);
    msg.op = 22U;
    msg.file.assign("HAPNKWPIQODHPOAOUBUJPOJVORCGZNEYVTPVQTVGSGMLVQHCFBULHNBNHNJUARMWNXSYRQREIVDUMESFZURJQXWXAZIZRHEOMALSPYWSTKPLDZKLMLRVYHRJXJMKWFJIQUDFYHRNGGLTAAVSTPDJZXUYYHFNOXCTILFIDTEASEWBQVFMGWGTCCYVNSZYGICCGWCBAKEDJFBTLBBPOKFBIHDTZUQUGIOZMRDQCAKE");

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
    msg.setTimeStamp(0.38057036987236637);
    msg.setSource(44166U);
    msg.setSourceEntity(115U);
    msg.setDestination(60320U);
    msg.setDestinationEntity(25U);
    msg.op = 157U;
    msg.file.assign("MUSDQTISYVSTKNJAELYMHPQOEPZBFSHXANTGYWLIYWZBQFJGVFOGCDWFRBZOKFVRYKQUQVHKXOWGBWPQBWEWTKUURGGFXKQHIPEFJZKUXGYBCOXRZODTKVIJMBXRY");

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
    msg.setTimeStamp(0.08154001669135358);
    msg.setSource(27042U);
    msg.setSourceEntity(33U);
    msg.setDestination(36483U);
    msg.setDestinationEntity(121U);
    msg.op = 87U;
    msg.file.assign("TEQMRWIAXJFTQ");

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
    msg.setTimeStamp(0.6644214591247021);
    msg.setSource(63527U);
    msg.setSourceEntity(127U);
    msg.setDestination(53546U);
    msg.setDestinationEntity(82U);
    msg.op = 84U;
    msg.clock = 0.15200037831764324;
    msg.tz = 41;

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
    msg.setTimeStamp(0.007908625460680274);
    msg.setSource(46627U);
    msg.setSourceEntity(85U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(112U);
    msg.op = 254U;
    msg.clock = 0.6429637482682198;
    msg.tz = 41;

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
    msg.setTimeStamp(0.4459243731014386);
    msg.setSource(29139U);
    msg.setSourceEntity(246U);
    msg.setDestination(30781U);
    msg.setDestinationEntity(132U);
    msg.op = 45U;
    msg.clock = 0.1174989666583256;
    msg.tz = 91;

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
    msg.setTimeStamp(0.925645889712479);
    msg.setSource(55010U);
    msg.setSourceEntity(252U);
    msg.setDestination(5158U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.08361668193987659);
    msg.setSource(23785U);
    msg.setSourceEntity(64U);
    msg.setDestination(24654U);
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
    msg.setTimeStamp(0.3790962340967672);
    msg.setSource(50674U);
    msg.setSourceEntity(187U);
    msg.setDestination(56165U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.9819099971346342);
    msg.setSource(19510U);
    msg.setSourceEntity(92U);
    msg.setDestination(30006U);
    msg.setDestinationEntity(35U);
    msg.sys_name.assign("VMXOFFPGFDVMYIFJTJIQILQIIYTRKNDWZGLDQHKRUZZGPVZXJEXOVXGLCEOQEHQFCKIGPMYVVLSFADIBAWKJMXCKQMEEJWNUMLQDMOCHCRGSXSASXUWPZJTSJNNAHXEHHMDXFRVJCTIOIJYOLGMAZOSVBYZRWTBUSBCPNQALPQMAOTNRFELCPPEVHGLZLRKNHHADUWUSIBCTRNDPKUTXQFKKYBNWBVSDYRYGYHY");
    msg.sys_type = 193U;
    msg.owner = 19800U;
    msg.lat = 0.4439985919968673;
    msg.lon = 0.6802562457290269;
    msg.height = 0.948456677326469;
    msg.services.assign("FXRZRHRYYFJKFPRTMPKURKVHBGPJBOTQMOAMSQEVNZWDDMVCTBLGNSDEXDVTINLNZSMYFUCLZZHJOONDUHMEWWPFAEENBMEFYINUKZJSSHUHMCQMWAIQ");

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
    msg.setTimeStamp(0.464898253447782);
    msg.setSource(57396U);
    msg.setSourceEntity(167U);
    msg.setDestination(46901U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("TUMOJWUMGRMTPBLXMKNGBYKCRIDWTOLBNKFDLHJEWGORWLRKFDISJVLPFEGJBDRSTFZKHYIYIYCIODOEUVINEWXMREJHBUKCXYASXDKJXGNCTSLUYRBZKVQZWVQAHDGHVSUTAQRKCIOAJWNSBCNUPCQPEQMLFLHGONKPCLCAHMTZQDVWQSWFRETBAQXMPRXFJQNYFVJVJPAEXBXAICZOTSAFEVBYNIEUYZWNDPSHHOHMUPMTVZZDZYGLF");
    msg.sys_type = 111U;
    msg.owner = 10850U;
    msg.lat = 0.8762402890776176;
    msg.lon = 0.004668999766929249;
    msg.height = 0.438014272707412;
    msg.services.assign("RQELDPOHUTAFPAUDEZUMVCCRZJUVJLNMMDFYNRNDYXKMSAZTVSWBDIQBCZAWFBQGWGESPKAUBIMNLTSPMQAOWIIQGKWSNTDNAQAKPXXSFHLFYGWBYGXYNXVJXOKJJGOMTILLOYQTYZPWMXRIEZXICIPGVGUGTJHDRMJXIZBYB");

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
    msg.setTimeStamp(0.15286918118466086);
    msg.setSource(59728U);
    msg.setSourceEntity(120U);
    msg.setDestination(19922U);
    msg.setDestinationEntity(162U);
    msg.sys_name.assign("JLUKYOQRUWSRZZZKRKHMFIQBNIGJCYNKNUYRPWFISAGBEUUTGVQINNQHXQDENTGDYCOCGKMQYRUETWAULRFQSYCXSLLMXUWZPJYDHBMEBFPXPVFWZBETZSAZABCIVCPCZBPFSMJAHDJIRSEHDNOUDJRXTTSLKCMMIPPQEJFVONIXNFLT");
    msg.sys_type = 244U;
    msg.owner = 34130U;
    msg.lat = 0.6277024160800193;
    msg.lon = 0.02563030113287501;
    msg.height = 0.003979696753572792;
    msg.services.assign("EFTFGFWDCLMUGXWSVGMSAIPFNAEULBMUAFROWCHYOPQVIBNTLYWYORKVKNQLOMFCXZCVBDHBSQDEJYQKSPLFZKNDUCJMKTRUJXQSOXYJWRWXNHTUAVMPAZBGATHNVFDLVDDAAQULRFUSQHBKMWBPIANJSZCNVGSVKNPJWZYGGELJWOOZORGZPYAQITSJXIMIHIQ");

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
    msg.setTimeStamp(0.8471552856819338);
    msg.setSource(3131U);
    msg.setSourceEntity(62U);
    msg.setDestination(34114U);
    msg.setDestinationEntity(206U);
    msg.service.assign("CKPJGKWWONMDLHLGOUXNIRGRZUASHXNVPFWBBRZDXDWRNWMFTSYGEPUOZBWHTVADTFJEICGLVQCIFMWLIVQSUBYTTZSKXILMKIEQLNCEGUDOGGUZOYXSVJEYDZIEHFQFIKYEMAEHPIAFKXZIAPCMGMXHNVNWOYGHASMWVLCPVDYLTQCVRHCTATXNBZBMLHQRKRYPMXCDSJDJFVUOQNBJAZYJURRSJUPUKSBNWLOZOJ");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.7494872001859615);
    msg.setSource(10238U);
    msg.setSourceEntity(165U);
    msg.setDestination(35175U);
    msg.setDestinationEntity(149U);
    msg.service.assign("BLATWYLQODHEBHGCRBFEKOKVEVNXSFOUPVPTTYSEQBJSYBJZQVUITPKEJMIIDXNDVNMKIGDRXDZRJSVPAHJ");
    msg.service_type = 160U;

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
    msg.setTimeStamp(0.0806673412899046);
    msg.setSource(15842U);
    msg.setSourceEntity(64U);
    msg.setDestination(41451U);
    msg.setDestinationEntity(230U);
    msg.service.assign("JVNSMASPEIRNSHMADICUTIWTVBGEZWJWHOMZDOMXHSKFLOKPGBXPBLJQRYMYLKNOZRZRFLTGIGWKXJXFILCEMVFNWYUIRYPEOLXBCZTWPNQXCDUJQWPUFDCZIUEFTXIZUCUSXTQTAAMBCJKCOYVRSPOHKKNXBWVYORKPEPNDSVQDMADRQYUHQNFAHTVSFJVVGVYJUBEKROCZUJTGEKFIGDSA");
    msg.service_type = 63U;

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
    msg.setTimeStamp(0.3058700570604779);
    msg.setSource(48432U);
    msg.setSourceEntity(94U);
    msg.setDestination(4953U);
    msg.setDestinationEntity(12U);
    msg.value = 0.5985150348096953;

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
    msg.setTimeStamp(0.7235437794069305);
    msg.setSource(21068U);
    msg.setSourceEntity(143U);
    msg.setDestination(23572U);
    msg.setDestinationEntity(79U);
    msg.value = 0.06278923093851374;

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
    msg.setTimeStamp(0.995296480552801);
    msg.setSource(57367U);
    msg.setSourceEntity(70U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(8U);
    msg.value = 0.1299143481898153;

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
    msg.setTimeStamp(0.4838509706328902);
    msg.setSource(48852U);
    msg.setSourceEntity(150U);
    msg.setDestination(29762U);
    msg.setDestinationEntity(37U);
    msg.value = 0.3195109780690446;

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
    msg.setTimeStamp(0.651836343013665);
    msg.setSource(39898U);
    msg.setSourceEntity(65U);
    msg.setDestination(37884U);
    msg.setDestinationEntity(204U);
    msg.value = 0.9375649946091411;

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
    msg.setTimeStamp(0.10151240358009161);
    msg.setSource(60824U);
    msg.setSourceEntity(163U);
    msg.setDestination(16474U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3294454055484043;

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
    msg.setTimeStamp(0.04859348203267966);
    msg.setSource(5519U);
    msg.setSourceEntity(196U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8442915095330384;

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
    msg.setTimeStamp(0.278141485398809);
    msg.setSource(20872U);
    msg.setSourceEntity(206U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(249U);
    msg.value = 0.07835430281684186;

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
    msg.setTimeStamp(0.510464888803848);
    msg.setSource(40487U);
    msg.setSourceEntity(183U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6296560715443075;

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
    msg.setTimeStamp(0.15836322340181386);
    msg.setSource(26637U);
    msg.setSourceEntity(88U);
    msg.setDestination(19683U);
    msg.setDestinationEntity(253U);
    msg.number.assign("TEDRVVNCFTQSRDWWMYRAUTTQEZOTQMCUFYWJTXSQRIGYSONQDSIWZVLFKDZHEPHAFYJJKTISPIESXCXEZXCEVHVIMIMUACUPAIHBJPZEFZDUWNAPYRVOYFVLRJHDXSOXFPCMBZIGRGYJMAINOPYWJDSZXQRLKQUPBIFBLKGXOMA");
    msg.timeout = 15328U;
    msg.contents.assign("YQQUPIQOLNYQDYQGRHXRBKNBSKXAIBXQKHCVJKDZZAVBJCWNZJLTZIUUWIANYRTBTTOREECTMGSZEWCZOHFCRMMEIIPVEYSHCFGWKKR");

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
    msg.setTimeStamp(0.8254878474890018);
    msg.setSource(49459U);
    msg.setSourceEntity(42U);
    msg.setDestination(50196U);
    msg.setDestinationEntity(223U);
    msg.number.assign("YOXMCRVAKRMNWSKCRXHZMXUDPBOCQWSFJXZUZNHYQTFSCBWMWMVTTFFRWHFAXNWMRQRDCMESVUMPJBGUGIVHXZBIGOUDCGFLENBIOHGRAFUFTNNBKNTGTLJDDPILETLQYZTYGLBNPSQVPIYVOIJRYLJJOXAMGJHWZXQZREDGNXWGCITOAKHQSVSKYAHQYLBFWSZBZBCYRUPUANLDOYDVQJVCUHSEKLEEHWOMAACJQFKEKDPIIAOZJDLIP");
    msg.timeout = 13786U;
    msg.contents.assign("IBTYXJXAHTLHDKIOURWRGMYTMEFWAYSDEEHURVVFCBAOGYHHHCAMFAFGLDBQNYKKNCSNCLOSPRLVKYGNESQMRRZAKMFKQPWIVFCORKVNWXAMTEFUYTOVKNWGTPDDEVXPBYKEJWKLXNWIBPJHSQJNZXGOXPVQBZHVJZYQZUILLSDCAYGUOXSOXUETBZTBIDZUJJGUSERFIUFPXRRWCITL");

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
    msg.setTimeStamp(0.5352061516227644);
    msg.setSource(61547U);
    msg.setSourceEntity(53U);
    msg.setDestination(21182U);
    msg.setDestinationEntity(197U);
    msg.number.assign("GWCCHYFHFNUUWGJTLJZXEKMGGLNNKJYARUMSLROVAADZEWPQYARTJKHZZBQJWHKCCVZJYXSOVDDLPFFYVNDBOGXASYCOWCORAMWLMGGSIFFJTINQBTRZRBTUOHQFLKVXOPZIQQVEELBZGLDYHBSTEVNUDORXKRCPYVJQFWOIMXUHEIMIUSVJBNIPDNVSBT");
    msg.timeout = 27304U;
    msg.contents.assign("CMRZNSSVQCUTRPUVXVFYWYXHQPEPZGXGBAEB");

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
    msg.setTimeStamp(0.4843964971663852);
    msg.setSource(20634U);
    msg.setSourceEntity(30U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(19U);
    msg.seq = 1000710656U;
    msg.destination.assign("KFNVMVUQQGPUPLRJCOYKFSBEPSAAJWOZMUTQTGUSTKRGMZMOLCYGLRWGMLXNYIHLCBJYOEFHXHDHZXDMDYPNSMOIBUKVKZVIFTVUOXLKQAZCRTUJBXXNTONZEXYLJCEQIUROESBISXHGMFCKFCIPDHLCBIWPSUDVSAEYYPINABJKTRZMRTKQDNOEGHEJTRBHHWVPCVOELUNVGDPJXAGAFQQYWAFEC");
    msg.timeout = 31883U;
    const char tmp_msg_0[] = {65, -85, 30, 27, -120, 49, -99, 14, -57, -98, 125, 73, 123, -88, -48, 59, -122, 95, 19, -76, 12, -127, 3, -126, 71, -65, -69, 116, -99, 114, -44, 86, 124, -50, 104, -83, 9, 102, 43, 3, -49, 74, -85, 50, 101, -51, 105, -67, 98, -50, 84, -36, 55, -112, 80, 23, 54, -111, 41, -115, 28, 65, 19, -118, -104, 59, -53, 60, 54, -81, 94, 2, -21, -53, -79, 126, 98, -109, 34, 0, -28, 40, -40, 58, -125, 87, -28, -10, -111, -41, -67, -50, 51, 22, 120, 2, -57, 99, 57, -124, -62, -111, 103, -49, 33, 66, -1, 82};
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
    msg.setTimeStamp(0.17539397986542127);
    msg.setSource(48277U);
    msg.setSourceEntity(116U);
    msg.setDestination(5667U);
    msg.setDestinationEntity(204U);
    msg.seq = 3813198798U;
    msg.destination.assign("WYNUPBZWCFQTMIETZXSKBIPDURRQJRHQWJFIFSPBOUXZCLOIMMDLCGNTCFSXJPVZDUCSYKBYGDHOAOJJABKLZSHDTUENESILMGBXGNXDTHFKDRYIAXVTGXWTNCQTYAXGKANFSRSJOXHZFCPPLEOWFANPEPOBTMGYVFPVQWCMCEGYGNQHVRIROJZKAOUO");
    msg.timeout = 5893U;
    const char tmp_msg_0[] = {24, 20, -88, 17, 97, -125, 44, 2, -26, -56, -4, -28, -54, -12, -68, -69, 105, -50, -48, 4, 99, 2, -44, 10, 41, -119, 94, 57, -38, -101, -9, 68, -42, -60, -4, -96, -90, 109, -114, -32, 101, 114, 8, 54, -125, -3, -87, 32, 101, -38, 31, -8, 65, -27, -61, 110, -35, 46, -13, 37, 66, 6, -114, 112, -91, 85, -3, 53, -83, 46, -121, -109, -31, -4, -100, -9, 91, -26, -29, -116, 23, -7, 94, -37, 16, 33, -111, 115, 107, -103, 78, 106, 68, 30, -48, 110, 43, 25, 3, -22, 22, 20, 41, 7, 107, -66, 25, 2, 104, 42, 80, 43, -106, 0, -64, 77, -14, -98, 71, 69, -111, 94};
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
    msg.setTimeStamp(0.8088480921463157);
    msg.setSource(20324U);
    msg.setSourceEntity(172U);
    msg.setDestination(2003U);
    msg.setDestinationEntity(90U);
    msg.seq = 121462711U;
    msg.destination.assign("YEEZOOCQKSMZTLVVEPBNTOTGSACOFAKPNDAISUPGTJIBSYLYFPKDTWIXKGVFTPEGRJFLIPUHVXWSHOHLUSWZTVGTWIVMXQQNEJPLYECJUQMCEJYPMGPBCAHDBHCCDCJTNSSCKBZBVZEFUVJLEXLHRNNKRERYDQXIUIQKAOUFMHIUVDGHSXVGLQFLWSBAJROFIBOXNDGNARZWDWHQOWUWKFRFZUHCLABYTMARXNZPBKO");
    msg.timeout = 59946U;
    const char tmp_msg_0[] = {-103, 19, 43, 120, -96, 19, 65, 71, -54, -64, -110};
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
    msg.setTimeStamp(0.6499720553558087);
    msg.setSource(41106U);
    msg.setSourceEntity(185U);
    msg.setDestination(61390U);
    msg.setDestinationEntity(122U);
    msg.source.assign("HEHPOQUNHPWJAUWQOBYEKHQKJJZSCVPKMSLCBUTCTROFXTDDHYMNGNIFXOYVELFYRTYLAEHENASXFNSGUAHIUIBJCZFRLJNITERCXLFKGBDELAVDXOZNJGYKKYYCTWUVVZAULRRVWMPJSLIPCMBTVJGQZFNXEKWZYHFDYTGPUZECMOXRWCQTDXLDFMWJKPCKANGDHZXVUPJSSHKIQGIPRLBQQWMXEAMVPIBBWVGQARMQS");
    const char tmp_msg_0[] = {26, -104, 122, -16, -47, 91, 103, 14, 26, -36, 34, 74, 29, 36, -125, -9, 1, -10, 39, -44, 73, -72, 84, -5, -112, 4, -109, 45, -120, -35, -109, -102, 115, 46, -124, -78, 126, 17, -115, -21, 16, -24, 91, 105, -69, -72, 1, -110, 19, 58, -62, 105, 15, 30, 68, 55, 57, 63, -38, -66, 20, -37, -82, -126, 122, 52, -91, 97, 12, -42, 125, -65, 96, 116, 0, 74, 1, 85, -8, 43, -16, -50, 82, -61, -39, -108, -113, -69, -128, -5, -13, -33, 77, -22, 22, 19, 126, -52, -71, -25, -89, 65, 115, 47, 96, -109, 71, 66, -42, -12, 93, -66, 92, -88, -52, -77, -104, 56, -29, 110, -111, -77, -35, -49, 97, -117, -71, 38, -13, 99, 103, -77, -8, -3, 123, 81, -73, 118};
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
    msg.setTimeStamp(0.4740120606785527);
    msg.setSource(61976U);
    msg.setSourceEntity(233U);
    msg.setDestination(63792U);
    msg.setDestinationEntity(200U);
    msg.source.assign("NZZVVXIQSGSTYMWKKMPNPVFUNIERETFQCNWIMAJNOWHOSYUJMIDDHQVAMZYNUJEKOUXTRKXRKOSQIUBICBFYJMOGPJIOWQANIDILAEVOESUCHMFDBRQAEZRSZXKJGPULQQBSVYALTGQGXGHZMPHZFVEYAGTNBBTDC");
    const char tmp_msg_0[] = {-61, -23, 3, 73, 5, -86, -77, 25, 62, -95, -34, -4, -93, -115, -5, -111, -67, 100, 97, 125, 31, 92, -26, -78, -82, -90, -53, -10, 58, 63, 85, 84, 117, 33, -116, 124, -70, 24, -24, -67, 58, -79, -57, -83, -39, -39, -17, 91, -126, 13, -114, -128, 1, -115, -125, 66, -126, -48, -20, 101, 86, 30, 42, 103, -100, 103, -55, 9, 111, -78, -84, -76, 69, 60, 59, 111, 61, -116, 59, 117, 56, 71, -59, 54, -10, -63, 125, -4, 94, -93, 104, 17, -41, -6, -39, 112, -68, -40, -7, 21, -81, -105, -82, -64, -117, -49, -27, 44, -45, -104, -95, 94, 100};
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
    msg.setTimeStamp(0.5374736655071686);
    msg.setSource(26580U);
    msg.setSourceEntity(139U);
    msg.setDestination(4959U);
    msg.setDestinationEntity(137U);
    msg.source.assign("SFSTFVDMSAITNWANCTXDLARQBPRSGRNYKMLLBUHPHODABYICMDXRUEFXSUEOXQCHAJWZRHQHYHEQUQHZWCVOBKEWPHROFVCZGOWURINICIADKNEODZRLYOQYBVZQLFNYHGJGFLAIWIMKEZYGMKZ");
    const char tmp_msg_0[] = {-18, 121, -7, -68, -85, 121, -83, -52, 3, -57, -63, 32, 26, 71, -32, 105, -99, -87, 109, -91, 107, -57, -67, 117, -91, -99, 24, -75, 70, -102, 110, 125, 57, 121, -25, -121, -104, 31, -72, 17, 100, 64, 17, 82, 10, -1, -83, 23, -124, -56, 87, 72, 29, 16, -90, 52, 15, 50, -106, -36, 65, -55, -123, -4, 85, -6, -27, -12, -114, 1, 115, -38, 64, 116, -118, -42, -92, 101, -23, -123, -58, 107, 51, -19, -76, -37, 38, -2, 116, 55, 3, 85, 7, -92, -8, 14, 60, 117, 91, -35, 111, -94, -46, -57, 47, -9, -22, 119, -10, -28, 46, -35, -37, -71, 64, -89, 90, 103, -47};
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
    msg.setTimeStamp(0.5441264623083318);
    msg.setSource(1217U);
    msg.setSourceEntity(200U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(203U);
    msg.seq = 1933375823U;
    msg.state = 182U;
    msg.error.assign("SWTCVRKMMSXSKHQTSDHKPQDIZNRHGEJCNMRCUWKWKXOZNOCWFMOCXITGYKXQJTBQAPYMBQHIBRIVLNVXFOSBZVEDYCVLRDDAZNUGRZJFJAIFUXFVDHQELHGCAZNFLPBEZOTZHSLIBEAVDEWBMPYOBPQAWKTIYXUDRUUGTJAKQFCKNTCLRSSNETHJOXFMTVCWBGWLWPGLOUJYUFHDJYVAGASXPKWIXREOSGY");

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
    msg.setTimeStamp(0.21925599439903487);
    msg.setSource(792U);
    msg.setSourceEntity(180U);
    msg.setDestination(27604U);
    msg.setDestinationEntity(26U);
    msg.seq = 1111411081U;
    msg.state = 130U;
    msg.error.assign("LCPUCAPBPEDKIOAWHD");

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
    msg.setTimeStamp(0.18162312610159226);
    msg.setSource(63308U);
    msg.setSourceEntity(170U);
    msg.setDestination(7350U);
    msg.setDestinationEntity(43U);
    msg.seq = 1933195973U;
    msg.state = 161U;
    msg.error.assign("RCYGYGBXDJMUHMNUGEBXFOQMRUCSBGJXKQVERCMMRSPAWOYQVGMRVEBVITKICOAEXBGYFMPXJTKFYYBIENFZFDLEZSVWWNPGNNDNQXZZLJAHASXAPLGPUMJABCKBHDCUCZVGJJIHNHTSZOHELAOTCWHFVISFTKLJTMWDYQRUXECKHYQRLUEDTRZKUQTAPNCNAVFAIFGEU");

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
    msg.setTimeStamp(0.44726601464697435);
    msg.setSource(14749U);
    msg.setSourceEntity(177U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("HXBSOCACIAGQPVHMETSGIRBYSCGXAYFWAHOCURRZIYUDJGTNJCLDFLHRFIDMSJNUKSWBMXDPBFRTGPEXQDYVZEAPQYAUJMXVEBILLNOUOGTMWNNACYDNTGAVXKIBFSRZLPHDJOQHUUKIEQKQFTLZZUWMALJEGZBWQXJHGKVBPTHKQODMZIEWCMALCPKHWDTOGVKNMZVKRNCBPOSSFYYYTKUVHEOJU");
    msg.text.assign("CNUNQHRHFJJKRQKMWJXZMWCRBPNZTDMKJLOPLYKCZDGKDFZVOLFATLWDEJUOPGWBCVRXMOEHQYBVECHCABVSVPUVSPDPKLMLFAFFOELLFZYIRFHUTZNMDUVTFVDYICQMBTRJPCGOXGXXHRICMEUHSSBEYSHKTPQDYGOWUMRIQAFQYGXQNUVJAXGSLOOAZXXLAIADSIKBTEZYABXWIYJJBIC");

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
    msg.setTimeStamp(0.6285802147396045);
    msg.setSource(9580U);
    msg.setSourceEntity(191U);
    msg.setDestination(60819U);
    msg.setDestinationEntity(83U);
    msg.origin.assign("SATJUBTPGTSQNCZWGIJZCLRSVOACYQWVUGINXDURDHDINHMMKTZIIFQESHAKETKWSSYGPBYAPKXCGXEOXSOBFWLNCYEYDMOGURFBAZHZIUYVHKPLEEZLDRFVDUVFBVLPPXBGRHAURWQFGIEDWIJWCWMPVFFXBQOOTKHHQMHMSEMCXMHASXUDLDTLAKXPWTYRBKJOQQLUQCZBFZEOKAVBY");
    msg.text.assign("XUFQDVSHKSJNOMKTFLVMIHHXAEVPESZZXVJUCYYCNXFPPVLVGXIZKRBNQATWAVJNIJRQXIBPSHFEGGSNZJBQKTDPSYJCLKYWJHUOCWIOUWVDCYYEZCUFALSGH");

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
    msg.setTimeStamp(0.9559156446646686);
    msg.setSource(23449U);
    msg.setSourceEntity(212U);
    msg.setDestination(2972U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("VQKLVXNIVWINKDAWPMJORZDUAXSTUKEVMRZQYVCHLGRMZPJMBICLDJGQXGZUKLFIOCSVMMYZAIGKWFCCHNYZHOUCBPN");
    msg.text.assign("JQWANXVVLQAZQCVPEHBYHNDOLLFVYVFRYOYDGFNZVBMIWLITLUFVVQUGHMEBGGPCGTILONUKAPSSBNNGSKHTXFBYHMNMCKJDSFESZAEXTKDMEUNJOMOGXREVZWUOSXCPRK");

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
    msg.setTimeStamp(0.9248715563659877);
    msg.setSource(53386U);
    msg.setSourceEntity(13U);
    msg.setDestination(40759U);
    msg.setDestinationEntity(117U);
    msg.origin.assign("SOKQDNIPDNXPEORFGJTYBXEZKMHKIOYCJUZNTXYOCSPDKMHYLYCMUSUSWZVUOPAVBTAOTNEIVLEFPGJFLTZHEOGBBXUPJDBJEZRODLNWIPWD");
    msg.htime = 0.08130387480024592;
    msg.lat = 0.8347182248944928;
    msg.lon = 0.7314541533784727;
    const char tmp_msg_0[] = {82, 50, -28, -6, -59, 25, 79, -17, -77, 115, 19, 47, 70, -27, 108, 95, -99, 46, 47, -56, -2, 35, 23, 22, -8, -9, -88, -57, -53, 95, -108, 4, -81, 33, -20, -9, -99, -113, 24, -9, -114, -13, 20, 26, 68, 57, 86, 33, -112, -57, 19, 38, 76, -40, 120, 51, 125, -78, -32, -99, 117, -53, -125, 34, 14, 62, -119, 92, 84, 98, 114, 96, -120, -64, -18, -77, 36, 83, -29, -106, 29, -95, 55, -35, 47, -85};
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
    msg.setTimeStamp(0.7309699080084127);
    msg.setSource(58677U);
    msg.setSourceEntity(195U);
    msg.setDestination(57453U);
    msg.setDestinationEntity(214U);
    msg.origin.assign("HRKDLAVQQICSCUXEYXZELBBPGPMMDMSPLIMYJWNMGKTQBYOJGXFTAIOKQLHLJRSX");
    msg.htime = 0.7259211099474214;
    msg.lat = 0.5624331435488088;
    msg.lon = 0.022674556117851408;
    const char tmp_msg_0[] = {-52, -27, 55, -128, 19, -36, 94, 44, 38, -84, -60, 90, -55, -18, -69, 36, -93, 78, 59, -118, -120, -76, -16, -37, 61, 84, -69, 50, -82, 25, -76, -117, -97, -69, -126, -115, -94, -69, -30, -4, -55, 83, -73, 89, 50, 96, -43, -120, 107, 89, 80, -41, -72, -104, 112, -114, -67, 42, 81, -116, -45, 39, -110, -108, 87, -71, 12, 6, 10, 79, -57, -117, -84, -89, -52, 0, 119, -26, 101, -92, -14, 31, -74, -106, 13, -124, -65, -104, 85, -19, 28, 95, -66, 99, 56, 23, -35, 63, -97, 105, -80, 54, 40, -14, -8, -126, -97, -74, -72, 2, 12, -56, 107, 20, -23, -18, -70, -35, 123, -46, -103, -102, -51, -109, -124, -25, 58, 72, 71, 49, -57, -88, 69, 70, 112, -38, -57, -1, -34, -48, 68, -82, 82, 1, 81, -12, 65, 95, -43, -98, -28, -56, -109, 71, 126, -40, -2, 99, 114, -2, -109, -90, -10, -100, -111, -93, 2, 108, -64, 86, -93, 80, -87, -71, 16, 35, 119, -23, -88, 65, -60, 72, -128, 112, 103, 100, 41, 124, -110, 5, -121, -32, 81, 51, -39, -92, 84};
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
    msg.setTimeStamp(0.11585783595874544);
    msg.setSource(38143U);
    msg.setSourceEntity(75U);
    msg.setDestination(58389U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("OEXQCWAPRGZUBUYMJGIJRBVXRPTMTMKJHELWZHUVDKTFPQDAFPTGPIUIFMKHJTEZACQYTCVSYVFLCNULQHDMSWTNHMXNZDXTPEJHWVERCPXSCMLDDCSXPWJWCGXONOQVWBYFNJKUORGAOZAYXDGNAIYLVBVJQWFAGZKQTSSLLVBAJQGGXYSFTMCRRN");
    msg.htime = 0.0710913775877362;
    msg.lat = 0.5705628174973939;
    msg.lon = 0.5455924454618715;
    const char tmp_msg_0[] = {-106, -2, -52, 5, 115, -90, -7, -65, 64, -51, -16, -7, -108, 84, -128, -35, 32, -1, -99, -81, -127, -25, -93, -60, -109, -60, -62, -32, -20, 24, -100, -91, 2, 85, -15, -116, 50, 116, -85, -94, -55, -45, 50, -112, 97, -97, 52, 87, -7, 56, -43, -122, 72, -49, -62, 3, -53, 113, 106, 5, 86, 125, 39, -91, 56, -51, 72, -21, 98, -107, -77, -13, -57, -22, 45, 51, -115, 4, 51, -115, 71, -52, 106, 58, 59, 80, -32, -125, -50, -21, 106, -34, -36, -94, -22, 126, 98, 85, 53, -21, 115, -108, -70, -122, -38, -67, -120, -112, -96, 44, -78, 68, 29, 59, -127, 126, 87, -70, 40, -19, -118, -79, 41, 94, -9, 89, 66, -114, -31, -28, 79, 98, 119, -96, -111, -49, -5, -127, 61, -97, 77, -76, 75, -97, -65, 67, -120, -122, 57, -95, -16, 32, 54, -47, 57, -111, -116, 24, 112, -12, 103, 67, 2, 124, -85, 49, 67, 70, 8, 77, 60, 89, 15, -26, 63, -30, -15, 39, 125, 30, -89};
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
    msg.setTimeStamp(0.4987705820146955);
    msg.setSource(13977U);
    msg.setSourceEntity(177U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(59U);
    msg.req_id = 13640U;
    msg.ttl = 36186U;
    msg.destination.assign("HTICRTQJKSCDDWDKUSKIQUPZSQEZSVZJMJROCSNQGGFNLIRLSFYKQYEVSURHMPOGHCYZBSTMWIBLFQFEHICIAVWUJTMOJULNLRMSHENPPFBWNYZKGZVJRXEVVYNYLLBQIDOTAQDVFCVOWPFUKAKBHBUHPQMVCBFISDDZPMTIWMGP");
    const char tmp_msg_0[] = {-43, 9, 25, -62, -114, -51, -74, -81, -100, -50, 38, -70, -90, 102, 91, 54, 6, -18, -81, 64, 49, -104, 123, 117, 43, 91, -119, -58, 52, -72, -126, -117, -58, 80, -124, 57, 22, -17, 39, 34, -17, 36, 26};
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
    msg.setTimeStamp(0.1554412814831302);
    msg.setSource(44484U);
    msg.setSourceEntity(71U);
    msg.setDestination(59440U);
    msg.setDestinationEntity(179U);
    msg.req_id = 5106U;
    msg.ttl = 12266U;
    msg.destination.assign("VWEMTARQFKSBTYUBPJECGQGWXYNTTOXZYFMRTALJUQUFZSZVBMJNGWAVFPWDRIBAZSIAIBPCCXCHUOGIONRKAJFUPPAMEVYSWMSZLMQGJCCNYURDSXQNKNBLOMOUEHAVQKEXLGIREDDHLDFYBGRCQTVXDHNWWCQFWGVPGWJHPXKIBJEZBONKTOCUHXSUKXMD");
    const char tmp_msg_0[] = {-55, 4, 24, 59, 48, 110, -2, -70, 106, -74, -48, -98, -21, -108, 61, -2, -39, -8, -77, -71, 34, -46, 113, 120, 91, -74, 21, -95, -95, 12, -114, -57, -81, -123, 9, 42, -73, 105, -103, -21, -76, 6, -42, -40, -72, 65, 66, 112, 56, 71, 48, 89, 66, -107, 122, -97, 59, -95, 7, -83, -52, -22, -8, 62, 49, -95, 125, -97, -101, -49, -82, 124, -33, 102, -16, -20, -21, -43, 7, 12, -24, 22, 105, -22, 7, -128, 116, -35, 36, 60, 80, 2, -25, -36, -36, 97, 43, 76, 107, -9, 74, -47, 64, 81, 88, -31, 95, -61, 33, 17, 116, -116, 122, 41, -34, 87, 95, -14, -97, 26, 32, -12, -121, -15, -128, 78, -40, 21, -80, -124, 81, -64, 64, -94, -95, 67, -15, -4, 63, -65, 113, -43, -118, 57, 99, -58, -39, -96, 116, -71, -25, -70, -30, -10, 35, -72, -107, -83, 43, -11, -95, 51, 112, -53, -90, -14, 2, 49, 3, 116, -89, 38, -54, -79, 4, -81, 18, -35, 117, -95, -62, -2, -110, 25, -113, 64, 14, -52, -94, -120, -60, -113, 121, -60, 100, -113, -88, -108, 31, 54, 95, -44, -83};
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
    msg.setTimeStamp(0.7480694165551851);
    msg.setSource(50827U);
    msg.setSourceEntity(45U);
    msg.setDestination(43613U);
    msg.setDestinationEntity(19U);
    msg.req_id = 8912U;
    msg.ttl = 55971U;
    msg.destination.assign("DKFALVGPEITYKCAQISBZZZYTVNVFSYPMBCWCMYPQIXGSCEAFXWHFFXSHUZDPLRUTYRNMAMVGWKGURJBQMNDCDJEGMOEOPJOMOSLKXHOVTRLJVSVCDZSVQXB");
    const char tmp_msg_0[] = {116, 59, 8, -15, 116, 83, -40, 37, 13, -39, 17, 122, -120, 96, -22, -25, 118, -61, -54, -126, -86, -38, -78, -95, -86, -110, 10, -10, -42, 110, 67, -55, 40, 89, -1, -93, -17, -40, -63, 13, 78, 104, -61, 15, -125, 56, -85, -104, 59, 117, -70, -5, -5, -122, 44, -121, 119, 14, 115, 24, 81, 42, -91, -87, -10, 6, 104, -6, -9, -2, 121, -44, 120, 83, 40, 45, -22, 20, 57, -78, -3, 9, -25, -112, 26, -128, 110, -84, 68, -57, -10, -27, 113, -110, -1, 13, -8, 12, -4, 119, -96, 119, -28, -31, -93, -38, 107, 119, -118, 11, 62, 25, -98, -82, -56, -103, 4, 66, 6, 41, -65, -50, -34, 27, -7, -89, -7, 31, 54, 12, 117, -31, -28, 48, -92, -26, 11, -59, -97, -16, 96, 64, 99, -76, 79, 23, -13, 87, -59, -97, 23, -16, 6, -58, -124, -24, 12, -127, -124, -104, 22, 37};
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
    msg.setTimeStamp(0.44976473688427754);
    msg.setSource(51846U);
    msg.setSourceEntity(213U);
    msg.setDestination(46091U);
    msg.setDestinationEntity(87U);
    msg.req_id = 24417U;
    msg.status = 113U;
    msg.text.assign("EBRTRIGLNNXYCUKWIOWMDCHCJFZBDUZLBTKOACUZZFXZRQGBQDIEJJSABHJHDAYHFGVPKRKGWFYTGOVEERWHSPYUBILWNYBFNCQXYGMJDTSEXTPOSUWHUFLNQHLGHKGSNACSSZRLDWKPSPJQIHHUEDCDTWRQZOYDBUVMCOEFOESTJAMMKENQYVLZQTMZPUXFMAXPIXEKWVTAVRKIJKXGVO");

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
    msg.setTimeStamp(0.06114692978450309);
    msg.setSource(50305U);
    msg.setSourceEntity(243U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(78U);
    msg.req_id = 63237U;
    msg.status = 73U;
    msg.text.assign("XHIEHARTHNTVBLUODNROIPXRBLOQNIMVNOGRYFZJMCMKSQKCADAEEJYENWJZGFZFPUDIOFGQXPXWEUBKQWUSGDSIYCVOFGBEINSEUXLETBJD");

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
    msg.setTimeStamp(0.3704466686211413);
    msg.setSource(3582U);
    msg.setSourceEntity(88U);
    msg.setDestination(31127U);
    msg.setDestinationEntity(0U);
    msg.req_id = 43743U;
    msg.status = 44U;
    msg.text.assign("MYERGPUIHNLGNQOURTJPNMKRIOBHSLANPBYVHMLKKWCJHVVSOYCXEQLZVSBKKGWNTXIHXEPAXGJPUCZAPUSFHHPRVPYTKWKEDUDNIBQVBTYCGJUGSYLNXURLDYBOPFUTFDCJAHCQ");

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
    msg.setTimeStamp(0.14540427703047543);
    msg.setSource(1428U);
    msg.setSourceEntity(194U);
    msg.setDestination(32089U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("ERVDOPLEPRZYAHNRKNIPRKGLUHQQXVAJPHFGEKLWYBXSVZGHZYLABZHTJGFBZZIPBYKJSLAJEWPDCZVCUBOUDCCBMTBSQSNCMGJPGIYIQDETMIWRJTKQJQKBVILTYHIAUVWGIARFREADWFSPAXHXYKDNEVMMPHLRXAFOETBUSTXFJZZWNWGTOJSQUQJUXFDSAWGKYLRPHYMTOCLYVMCINKEOONXNO");
    msg.links = 71733887U;

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
    msg.setTimeStamp(0.4595436223743574);
    msg.setSource(47339U);
    msg.setSourceEntity(203U);
    msg.setDestination(38274U);
    msg.setDestinationEntity(232U);
    msg.group_name.assign("KMGZDBDXGZZBNJYFIWMGEXXUKJAVSZSHLEPHQPANBKFYJCUKBEZFNWYHJDOPCNVHQSRTLFDDYTMHTHWODEURMUAFOHLWTWTAQRKPRZICYVLOIPAUIGIBGNZVSFNGJMWQAJVNKBEVWCOF");
    msg.links = 6745067U;

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
    msg.setTimeStamp(0.3797327376190637);
    msg.setSource(894U);
    msg.setSourceEntity(135U);
    msg.setDestination(1727U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("KEHHAUNUTTUGOOXKZSXUKAASTPZNWXDJAINDVRJOMFSVDYQWHNKCHMJMLUQABVPGPCFQVZIIRUPQMFZOYTYPKGGEXWQMLVRFPVCBMUCQRLJFOGFLYYHVAIRQXBJSKZBPJDMYHXAGOXPEUGITLKCHAWBSENYVOWSOCQINPFBTYGDJUMSDZLZW");
    msg.links = 2224639228U;

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
    msg.setTimeStamp(0.39985597941871676);
    msg.setSource(63209U);
    msg.setSourceEntity(28U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(236U);
    msg.groupname.assign("KFZRIXLMIFQNCHTACCWALFMKDXCZNSUKNFYEKUULHCQGRIFWZUSVTPVNHYGSIGMHOZTCZZTRWUGTCGXTOKVYJFRHQXPWTOPDLVACXITMPYDOKJVWVPUUMJHBEORND");
    msg.action = 126U;
    msg.grouplist.assign("BWPYTXTPJJTDLJKPOLVJNYFNLIHKAXGFVHSDQSLAOLRXDSNCZRNXMGPXIKGOEAMKJDHTXQAYFIPSQUGNOHVVEQOCCBUSIFZWTLU");

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
    msg.setTimeStamp(0.7205100995563628);
    msg.setSource(12911U);
    msg.setSourceEntity(112U);
    msg.setDestination(24926U);
    msg.setDestinationEntity(20U);
    msg.groupname.assign("MFVGCGZZXXVTRWWPNFZYHQUPHUCVYMTJNJLKBBHBIUFSYBDPAVETWQGQZGYLIYSIOKTDAEPZAGARCXSLOXHXCLBEQMKQCCEOGIEDYOQBMFNJHOUFZTFBDYAVPXIKBWGNHCNUTPRUDIDRLICULRONZEBASPKHKWAEGCQVEQINWNLVLXMWXVTNAWOQFUISWDCUJTRFJGQFJMJWKPSKOUTSRZYKBMIKOXXASJPJDHEVGNMYJLEVORYMRRPA");
    msg.action = 141U;
    msg.grouplist.assign("QCGLARQZWMCVVNSHDQXZUDBGVEOUOYITGCVHIBRHCHAMRDSJLEDOYFGTOYLJEQMXQVODJNIECIWAFOZWUJEYXBPLLJIKFPZCWQBMWTADJSGLFTXVBZQFDTSRGIKQONYAMRYTHWSKFWFKEZIBBPFOKTINAPSUVNXQWZSBYUMHUDGVLKKXXJIPDTHYPKLCBRGXLCSOUMNPZJSEQSDGTYOERXJRMFHEWMERUAZTWVKACMNLBFVNUCGAHHPZA");

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
    msg.setTimeStamp(0.0370490434305748);
    msg.setSource(23385U);
    msg.setSourceEntity(204U);
    msg.setDestination(37469U);
    msg.setDestinationEntity(21U);
    msg.groupname.assign("LKXUETOWVPYAPNKBKEHXPAXCYONTVQKOPEYUIZTWDGVQEGFSOKTKNYAZXJUYNMOMDZVMMSHPORNJBVAAUECOITGJAJHRWXQGGTCJYVVASLSRQD");
    msg.action = 157U;
    msg.grouplist.assign("YJTXIFOCOIYZVCXDHNPOBPDUTQCTVLNKLIJWLBBIQFDUSZHHMNBWTBKVLKSFCJYTKBNZSHJIDWPKDQVEYENBYQKCLMGXJZSFODNBBMWMKUXHIARFEMMOAWJSJNFUNKGD");

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
    msg.setTimeStamp(0.4002806518029237);
    msg.setSource(34779U);
    msg.setSourceEntity(59U);
    msg.setDestination(7344U);
    msg.setDestinationEntity(216U);
    msg.id = 121U;
    msg.range = 0.8610354063741602;

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
    msg.setTimeStamp(0.011223881407759206);
    msg.setSource(1983U);
    msg.setSourceEntity(158U);
    msg.setDestination(60636U);
    msg.setDestinationEntity(31U);
    msg.id = 102U;
    msg.range = 0.7181437354710594;

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
    msg.setTimeStamp(0.7844907283106044);
    msg.setSource(57592U);
    msg.setSourceEntity(50U);
    msg.setDestination(46707U);
    msg.setDestinationEntity(51U);
    msg.id = 196U;
    msg.range = 0.23469158007198088;

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
    msg.setTimeStamp(0.1725200376523991);
    msg.setSource(16161U);
    msg.setSourceEntity(192U);
    msg.setDestination(9411U);
    msg.setDestinationEntity(6U);
    msg.beacon.assign("OKWREAEHPILHGJVUUYCKNDVUTRSOTBBHXXCDMSITFBLSCNXEAFBPRGGRHESVMEBOYBWULQZNRXAAZIUTRIOYHNQSMUOADQLWZZFKNACKCAIXTAYESWSGKBFXITQVVMQOBFOMDF");
    msg.lat = 0.9962230436205365;
    msg.lon = 0.8824724691230731;
    msg.depth = 0.9007804989995196;
    msg.query_channel = 176U;
    msg.reply_channel = 233U;
    msg.transponder_delay = 42U;

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
    msg.setTimeStamp(0.5895383980841893);
    msg.setSource(29767U);
    msg.setSourceEntity(93U);
    msg.setDestination(29353U);
    msg.setDestinationEntity(20U);
    msg.beacon.assign("NFAVFRRYRHZCYHALSYZZCJDCDLBOBNUTFTPOWNEEBMMYMOSUOTJBNQFRQBDAVRLTZKBDUHGYOVUCSNHTTFSIJLQHAHFILUEPAKIGWXYQXPPGLPHONNXGZPWUYRUJIIVMUQSQVDHQIGMVJMWSNBJDCWXWFIMBWKKDYCXMAAACGMOWVKKEVPXJVESUZWNJ");
    msg.lat = 0.46980905318097943;
    msg.lon = 0.9437513297205391;
    msg.depth = 0.7690793986822468;
    msg.query_channel = 143U;
    msg.reply_channel = 145U;
    msg.transponder_delay = 198U;

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
    msg.setTimeStamp(0.8352810422518748);
    msg.setSource(44522U);
    msg.setSourceEntity(178U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("EVABZNWXGOWLCDQEJPWANXVOCUWFGKRFOVVMYUTTJLRNZUZLCKHPCHWJRZIIDLOQUDUADOLNQGTNJBCWNGTULFOMURQIEFRXQKSLPZN");
    msg.lat = 0.5474890396298417;
    msg.lon = 0.6283607110949379;
    msg.depth = 0.9501294964224599;
    msg.query_channel = 23U;
    msg.reply_channel = 221U;
    msg.transponder_delay = 161U;

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
    msg.setTimeStamp(0.8731919823998263);
    msg.setSource(23143U);
    msg.setSourceEntity(252U);
    msg.setDestination(51446U);
    msg.setDestinationEntity(21U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.552529747502963);
    msg.setSource(42218U);
    msg.setSourceEntity(32U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(33U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.6011906869008103);
    msg.setSource(54045U);
    msg.setSourceEntity(155U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(117U);
    msg.op = 92U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OPALKREJMMXCYITBGYZKKXXIVIJFWQSBER");
    tmp_msg_0.lat = 0.29618393297455003;
    tmp_msg_0.lon = 0.874645893193451;
    tmp_msg_0.depth = 0.15672474896812172;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 113U;
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
    msg.setTimeStamp(0.4838569394955131);
    msg.setSource(41714U);
    msg.setSourceEntity(148U);
    msg.setDestination(21157U);
    msg.setDestinationEntity(122U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 52470U;
    tmp_msg_0.lat = 0.03834547535705024;
    tmp_msg_0.lon = 0.8961038712851646;
    tmp_msg_0.z = 0.403816640988112;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.duration = 25252U;
    tmp_msg_0.speed = 0.14293572988113823;
    tmp_msg_0.speed_units = 201U;
    tmp_msg_0.type = 156U;
    tmp_msg_0.radius = 0.24658550300731752;
    tmp_msg_0.length = 0.17335989999244317;
    tmp_msg_0.bearing = 0.9180074685907904;
    tmp_msg_0.direction = 46U;
    tmp_msg_0.custom.assign("WTPEGDXJTVVQQSLCWCEQMNQULKJNPHJILYABDAATNHKFRWSUIHUCBNDNTDIUMQWCLKKSWQNFQSWSUFAXDPZPNZWZSOXDBELOZUEGBJYOPKZCDEAHCYTORJVEPHNNFIESJIWMREXAAOPWDLMGZCYXTRQMRFSITVVLZUGXVXRYFBGRKBMYAULMJKTZCHFXOTBOEJGHOMVMCDIUHXURKSIXPPFKQRNRGSHOJVYGPBC");
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
    msg.setTimeStamp(0.1307678180166315);
    msg.setSource(24890U);
    msg.setSourceEntity(227U);
    msg.setDestination(56972U);
    msg.setDestinationEntity(11U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 120U;
    tmp_msg_0.mask = 4032572869U;
    tmp_msg_0.scope_ref = 972486902U;
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
    msg.setTimeStamp(0.14719163127184798);
    msg.setSource(55812U);
    msg.setSourceEntity(83U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(173U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 36793U;
    tmp_msg_0.status = 44U;
    tmp_msg_0.text.assign("RHTKVDMXFBFFAKBQAVGUWOZXNJJGHPMGSHXQCCYZVZXDOZOJLFPDTMGZAGAVFHOTMNJEBASRVQZLPFEGIBDTTJEBZSMHFWUDYPJTQRSCEERAVGZWO");
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
    msg.setTimeStamp(0.6157125952325732);
    msg.setSource(19234U);
    msg.setSourceEntity(158U);
    msg.setDestination(49808U);
    msg.setDestinationEntity(72U);
    msg.op = 230U;
    msg.system.assign("FCZDUERTJUXMPDHFIJJMNFABUNXWWHKQXYVAGNWWAQOWUONTQIUSZEGLMVDSCLUHKDAZEXHANCDFIPFOMPYYVIVEBPLNRDMQQXULMTMJPEGQRITMHCVWKPEHRP");
    msg.range = 0.49643585979659377;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.1211788016066494;
    tmp_msg_0.i = 0.14602640765965047;
    tmp_msg_0.d = 0.8260791185419153;
    tmp_msg_0.a = 0.9031382191546167;
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
    msg.setTimeStamp(0.28122370477981085);
    msg.setSource(30189U);
    msg.setSourceEntity(71U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(41U);
    msg.op = 230U;
    msg.system.assign("FCHTWIDNTWJNQQZOODRYKPIVWEWHEFHIPOTDZFPMAYNFMQCGMJWBDMEVJGFIHSALVKTYHCFXQOEBXCJCZCNOSBMGDOZEVRVENTJYMAYXPVSMEKGYLUHWXZBYQUKUPNRKLZXKSANEKIBLMQQSJBOERYFRWQASLBVSLTCTZVOZGILUGQAKJGSPJPCUJRIXNBIFNALDPXZQDKULPMVDJUDZUCTHXIXGHSBBLR");
    msg.range = 0.5146194818816101;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 122U;
    tmp_msg_0.frag_number = 246U;
    tmp_msg_0.num_frags = 34U;
    const char tmp_tmp_msg_0_0[] = {-126, 75, -37, -105, -45, -119, -59, 15, -84, -40, -122, -99, 19, 86, -27, 41, -112, 31, 7, -80, 28, -87, 1, 72, 57, 126, 24, -108, -57, 56, -108, 29, 28, -61, -72, 109, 119, 61, 76, -81, 106, 12, -33, 77, 69, -127, 30, 84, -58, 110, 83, 24, 117, 107, -54, -83, 5, 22, 103, 10, 108, 22, 72, -37, -81, 73, 7, -30, 22, -31, -12, -23, 20, -78, 106, -76, 88, 109, 43, 8, -90, -94, 60, 123, 110, 100, -96, -82, 20, 88, -60, -43, -76, 102, 83, 122, 113, -123, -115, -127, -109, -41, -46, 13, 34, -89, -2, 32, 104, 125, -19, -16, -96, -37, 31, 54, 25, 117, -87, 117, -80, -37, 95, -60, -2, 29, 72, 21, 83, -19, 32, -2, -105, 64, 50, 115, -93, 101, -28, 3, -40, -14, 94, 117, 91, 114, -25, -112, -118, 79, 90, -114, 97, -1, 4, -114, -39, -75, -113, 121, -79, 18, -59, 108, 73, -38, 99, 111, 0, 123, -122, 80, -97, -1, 97, 27, 80, 14, 85, 61, -112, -47, 95, 37, 29, 83, 80, 43, -100, -33, 81, -97, -25, 14, -50, 39, 82, 12, -24, 91, 98, 9, -63, -20, -27, 69, -90, 62, 45, -82, 44};
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
    msg.setTimeStamp(0.12546145984596124);
    msg.setSource(8758U);
    msg.setSourceEntity(227U);
    msg.setDestination(46019U);
    msg.setDestinationEntity(80U);
    msg.op = 201U;
    msg.system.assign("GYRGALOTPYFBNKIAFJSAKRNSCMZCDBFMFAVRUKQKSIPKMRCLPTSDLGQASSZOCAWUPUEVENZDJEXCGUCOJEWIBPZBOOLVOKQZYF");
    msg.range = 0.5403637002210104;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.33427435553385376;
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
    msg.setTimeStamp(0.14773707644130796);
    msg.setSource(24868U);
    msg.setSourceEntity(73U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.04805105811458399);
    msg.setSource(58630U);
    msg.setSourceEntity(210U);
    msg.setDestination(63589U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.3834210661667953);
    msg.setSource(11287U);
    msg.setSourceEntity(223U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.3312034493408784);
    msg.setSource(14484U);
    msg.setSourceEntity(216U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(108U);
    msg.list.assign("KLBILEQTARQMDOUVHEVNTPUFNHXRQYVZSCSHRMTZQUZUFJBNVXCDXBGNCYULYVJRPZSSIFDISWEDLPJHJGHSNAETWCWAWPUYTGHKAHIKYASNLSREDCYZFGWYZNMAAOOUXWGYOLIAPUBDJQMGQBKJZPRXURTPSOBFELIYQMZCRVIMOBLFYEQKVUAZAHWEOXJCGJCXJCOTTMXIORVHQWLKI");

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
    msg.setTimeStamp(0.8612525245890199);
    msg.setSource(2287U);
    msg.setSourceEntity(226U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(22U);
    msg.list.assign("UFQOMCQVGDHQGNFFDMGVVTYYTSPMPMCWMVBIJCEGVZBFTBQSTZFRLXUWXRLEWWSZBDLUUYJRANYNCDIIMAIZPLPRJXKZLMZUDRITMESRAHLUASICZYOVFNSLHABFJHSDJNEPTXAMNQEFFRHQTLIXYYIOKQAXOVAKNPWROLJBHFBGQOUKCVSTIECBK");

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
    msg.setTimeStamp(0.9015598614967664);
    msg.setSource(45872U);
    msg.setSourceEntity(185U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(147U);
    msg.list.assign("MQIFWQEXVZVQWZODTFPAXGMRISKYLOJBBJKTBIODPZVDGPRBYFOKLFSOKSLZZEUZMEEUOUWZUYGNQBQGVNNAVJPOBDVBSXPCKYJAFNQMDURWERPDZDORGXJURHNRGFFTHXYYTIKFNUILEMDPUSSNYDWAOCJQGQPQWKWJTTNQHGRLOGXL");

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
    msg.setTimeStamp(0.9214854437410642);
    msg.setSource(38363U);
    msg.setSourceEntity(63U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(91U);
    msg.value = -8187;

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
    msg.setTimeStamp(0.504771784413754);
    msg.setSource(60826U);
    msg.setSourceEntity(149U);
    msg.setDestination(25673U);
    msg.setDestinationEntity(127U);
    msg.value = -30067;

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
    msg.setTimeStamp(0.6978284877628903);
    msg.setSource(64577U);
    msg.setSourceEntity(129U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(77U);
    msg.value = -17997;

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
    msg.setTimeStamp(0.9391329773860907);
    msg.setSource(6435U);
    msg.setSourceEntity(8U);
    msg.setDestination(4587U);
    msg.setDestinationEntity(152U);
    msg.value = 0.2104020752440906;

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
    msg.setTimeStamp(0.493035748079664);
    msg.setSource(24000U);
    msg.setSourceEntity(131U);
    msg.setDestination(14915U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9817609406432444;

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
    msg.setTimeStamp(0.8708264887457791);
    msg.setSource(6215U);
    msg.setSourceEntity(202U);
    msg.setDestination(24982U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5982391165888237;

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
    msg.setTimeStamp(0.836788899146998);
    msg.setSource(24390U);
    msg.setSourceEntity(49U);
    msg.setDestination(34901U);
    msg.setDestinationEntity(137U);
    msg.value = 0.284163837607018;

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
    msg.setTimeStamp(0.7289951563789733);
    msg.setSource(8481U);
    msg.setSourceEntity(157U);
    msg.setDestination(5404U);
    msg.setDestinationEntity(239U);
    msg.value = 0.29587054918623645;

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
    msg.setTimeStamp(0.546666958771381);
    msg.setSource(21219U);
    msg.setSourceEntity(166U);
    msg.setDestination(8699U);
    msg.setDestinationEntity(55U);
    msg.value = 0.28373788729444815;

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
    msg.setTimeStamp(0.5887348475870596);
    msg.setSource(54849U);
    msg.setSourceEntity(246U);
    msg.setDestination(20965U);
    msg.setDestinationEntity(232U);
    msg.validity = 8317U;
    msg.type = 92U;
    msg.utc_year = 35986U;
    msg.utc_month = 22U;
    msg.utc_day = 95U;
    msg.utc_time = 0.4622233298416779;
    msg.lat = 0.6999180767429646;
    msg.lon = 0.8956035100395464;
    msg.height = 0.3164131947395066;
    msg.satellites = 33U;
    msg.cog = 0.6669802314225378;
    msg.sog = 0.029139856342698556;
    msg.hdop = 0.3240595244617488;
    msg.vdop = 0.07416391451246607;
    msg.hacc = 0.28701413913946494;
    msg.vacc = 0.6166200974657152;

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
    msg.setTimeStamp(0.27335138103594503);
    msg.setSource(33144U);
    msg.setSourceEntity(228U);
    msg.setDestination(49490U);
    msg.setDestinationEntity(78U);
    msg.validity = 28657U;
    msg.type = 101U;
    msg.utc_year = 45568U;
    msg.utc_month = 16U;
    msg.utc_day = 241U;
    msg.utc_time = 0.8731049791223819;
    msg.lat = 0.06403582064978519;
    msg.lon = 0.6127210173782879;
    msg.height = 0.7133455550699067;
    msg.satellites = 101U;
    msg.cog = 0.8328157208011918;
    msg.sog = 0.1760233517485047;
    msg.hdop = 0.10907111276953718;
    msg.vdop = 0.23428437998356988;
    msg.hacc = 0.709239434610866;
    msg.vacc = 0.13221994713772256;

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
    msg.setTimeStamp(0.20425265287466432);
    msg.setSource(25747U);
    msg.setSourceEntity(221U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(213U);
    msg.validity = 14397U;
    msg.type = 184U;
    msg.utc_year = 3415U;
    msg.utc_month = 204U;
    msg.utc_day = 108U;
    msg.utc_time = 0.41911607346332513;
    msg.lat = 0.9948854343250999;
    msg.lon = 0.4848387878186261;
    msg.height = 0.0014931114060356965;
    msg.satellites = 192U;
    msg.cog = 0.18516841105199244;
    msg.sog = 0.724964010043367;
    msg.hdop = 0.0503570003421574;
    msg.vdop = 0.67692855196789;
    msg.hacc = 0.7970429014208757;
    msg.vacc = 0.7572649275124662;

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
    msg.setTimeStamp(0.24014246521746108);
    msg.setSource(55351U);
    msg.setSourceEntity(147U);
    msg.setDestination(47489U);
    msg.setDestinationEntity(133U);
    msg.time = 0.32260639351400233;
    msg.phi = 0.9868108813767581;
    msg.theta = 0.5879465347739133;
    msg.psi = 0.053167851609608796;
    msg.psi_magnetic = 0.2576475888179579;

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
    msg.setTimeStamp(0.8426096523527489);
    msg.setSource(29509U);
    msg.setSourceEntity(208U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(198U);
    msg.time = 0.8648220660179565;
    msg.phi = 0.7629657263381731;
    msg.theta = 0.49048504335681953;
    msg.psi = 0.8781496015072476;
    msg.psi_magnetic = 0.09446413166933121;

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
    msg.setTimeStamp(0.19169612189632101);
    msg.setSource(23203U);
    msg.setSourceEntity(188U);
    msg.setDestination(61790U);
    msg.setDestinationEntity(29U);
    msg.time = 0.06106909991399234;
    msg.phi = 0.5011801519818597;
    msg.theta = 0.4968696331494523;
    msg.psi = 0.4704206399426657;
    msg.psi_magnetic = 0.781088781545957;

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
    msg.setTimeStamp(0.09738074223866533);
    msg.setSource(26054U);
    msg.setSourceEntity(155U);
    msg.setDestination(55742U);
    msg.setDestinationEntity(203U);
    msg.time = 0.9160033736794284;
    msg.x = 0.30764611722716817;
    msg.y = 0.7104591077357861;
    msg.z = 0.821767547313308;
    msg.timestep = 0.1279912268355936;

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
    msg.setTimeStamp(0.013085357166632283);
    msg.setSource(14277U);
    msg.setSourceEntity(19U);
    msg.setDestination(27720U);
    msg.setDestinationEntity(79U);
    msg.time = 0.062244756024053216;
    msg.x = 0.15754019516230444;
    msg.y = 0.9415628842638382;
    msg.z = 0.9423056735506959;
    msg.timestep = 0.5568743117762575;

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
    msg.setTimeStamp(0.15213927670854743);
    msg.setSource(33711U);
    msg.setSourceEntity(73U);
    msg.setDestination(8510U);
    msg.setDestinationEntity(191U);
    msg.time = 0.3923710264963046;
    msg.x = 0.23553431367382405;
    msg.y = 0.028882731257317773;
    msg.z = 0.42433421446011654;
    msg.timestep = 0.7589361942959709;

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
    msg.setTimeStamp(0.35714073555111703);
    msg.setSource(53742U);
    msg.setSourceEntity(99U);
    msg.setDestination(16067U);
    msg.setDestinationEntity(143U);
    msg.time = 0.7480094927284381;
    msg.x = 0.4160324570506414;
    msg.y = 0.4731427643563244;
    msg.z = 0.08789417527188426;

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
    msg.setTimeStamp(0.1753588564697529);
    msg.setSource(63374U);
    msg.setSourceEntity(224U);
    msg.setDestination(54155U);
    msg.setDestinationEntity(0U);
    msg.time = 0.10525764823732786;
    msg.x = 0.9003775722145227;
    msg.y = 0.11312137173636183;
    msg.z = 0.6181583449529183;

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
    msg.setTimeStamp(0.25163856498626247);
    msg.setSource(35804U);
    msg.setSourceEntity(115U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(20U);
    msg.time = 0.0729958939381784;
    msg.x = 0.6218272458211864;
    msg.y = 0.29332235526598227;
    msg.z = 0.5438257217242394;

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
    msg.setTimeStamp(0.07931205142445874);
    msg.setSource(35113U);
    msg.setSourceEntity(70U);
    msg.setDestination(826U);
    msg.setDestinationEntity(64U);
    msg.time = 0.04956185562577842;
    msg.x = 0.20109051610235062;
    msg.y = 0.12026699239337557;
    msg.z = 0.7915048765244129;

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
    msg.setTimeStamp(0.9884128537261204);
    msg.setSource(34211U);
    msg.setSourceEntity(250U);
    msg.setDestination(34351U);
    msg.setDestinationEntity(80U);
    msg.time = 0.4080490632558754;
    msg.x = 0.8734450868845681;
    msg.y = 0.26108226175054894;
    msg.z = 0.7747539860231735;

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
    msg.setTimeStamp(0.9281933575619392);
    msg.setSource(35002U);
    msg.setSourceEntity(197U);
    msg.setDestination(10943U);
    msg.setDestinationEntity(128U);
    msg.time = 0.6075717777203077;
    msg.x = 0.7472765806099805;
    msg.y = 0.17816958965949314;
    msg.z = 0.042975961762412695;

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
    msg.setTimeStamp(0.645730042050389);
    msg.setSource(48281U);
    msg.setSourceEntity(17U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(155U);
    msg.time = 0.4393479861301681;
    msg.x = 0.8175887542520387;
    msg.y = 0.6361099172106678;
    msg.z = 0.6506123316063607;

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
    msg.setTimeStamp(0.07290054082968545);
    msg.setSource(31250U);
    msg.setSourceEntity(107U);
    msg.setDestination(58022U);
    msg.setDestinationEntity(63U);
    msg.time = 0.07723815190945604;
    msg.x = 0.8764108280069369;
    msg.y = 0.9120350144152151;
    msg.z = 0.5490116890225886;

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
    msg.setTimeStamp(0.013263736257094871);
    msg.setSource(17717U);
    msg.setSourceEntity(239U);
    msg.setDestination(8950U);
    msg.setDestinationEntity(56U);
    msg.time = 0.7252970239158059;
    msg.x = 0.5313843967075119;
    msg.y = 0.3016662506285406;
    msg.z = 0.08291303185560062;

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
    msg.setTimeStamp(0.3728837316624882);
    msg.setSource(11763U);
    msg.setSourceEntity(65U);
    msg.setDestination(9736U);
    msg.setDestinationEntity(5U);
    msg.validity = 101U;
    msg.x = 0.436373984433965;
    msg.y = 0.1547775594983859;
    msg.z = 0.7345688638194078;

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
    msg.setTimeStamp(0.08240760095390065);
    msg.setSource(34302U);
    msg.setSourceEntity(117U);
    msg.setDestination(31893U);
    msg.setDestinationEntity(71U);
    msg.validity = 42U;
    msg.x = 0.714256388910084;
    msg.y = 0.5168699535185516;
    msg.z = 0.0721722829114756;

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
    msg.setTimeStamp(0.6688348597091563);
    msg.setSource(45480U);
    msg.setSourceEntity(144U);
    msg.setDestination(37050U);
    msg.setDestinationEntity(252U);
    msg.validity = 96U;
    msg.x = 0.14164559291816203;
    msg.y = 0.2577316891651871;
    msg.z = 0.49490462361278575;

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
    msg.setTimeStamp(0.9422701268072756);
    msg.setSource(704U);
    msg.setSourceEntity(62U);
    msg.setDestination(13360U);
    msg.setDestinationEntity(151U);
    msg.validity = 44U;
    msg.x = 0.43601716973399185;
    msg.y = 0.5890040078184862;
    msg.z = 0.49697038611633537;

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
    msg.setTimeStamp(0.5907180761316461);
    msg.setSource(17680U);
    msg.setSourceEntity(104U);
    msg.setDestination(20523U);
    msg.setDestinationEntity(78U);
    msg.validity = 133U;
    msg.x = 0.45885283992230563;
    msg.y = 0.7157564518117969;
    msg.z = 0.6836901952913249;

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
    msg.setTimeStamp(0.10078006397549788);
    msg.setSource(8461U);
    msg.setSourceEntity(187U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(56U);
    msg.validity = 185U;
    msg.x = 0.2540210936937999;
    msg.y = 0.7460910432196541;
    msg.z = 0.4967102829490917;

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
    msg.setTimeStamp(0.6650597421472605);
    msg.setSource(29568U);
    msg.setSourceEntity(206U);
    msg.setDestination(46212U);
    msg.setDestinationEntity(219U);
    msg.time = 0.1843503382358198;
    msg.x = 0.22372270673832706;
    msg.y = 0.6219800506197952;
    msg.z = 0.6815265236290947;

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
    msg.setTimeStamp(0.19525902127485084);
    msg.setSource(4598U);
    msg.setSourceEntity(219U);
    msg.setDestination(49094U);
    msg.setDestinationEntity(242U);
    msg.time = 0.13076734025110415;
    msg.x = 0.6090050452147061;
    msg.y = 0.9430848202330631;
    msg.z = 0.6912386573276087;

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
    msg.setTimeStamp(0.2428523031272426);
    msg.setSource(27226U);
    msg.setSourceEntity(194U);
    msg.setDestination(25556U);
    msg.setDestinationEntity(37U);
    msg.time = 0.1551014694873617;
    msg.x = 0.5425277776654936;
    msg.y = 0.47556377903507785;
    msg.z = 0.9769733218647454;

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
    msg.setTimeStamp(0.7219958321558665);
    msg.setSource(18745U);
    msg.setSourceEntity(56U);
    msg.setDestination(11738U);
    msg.setDestinationEntity(241U);
    msg.validity = 233U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4010294063960329;
    tmp_msg_0.y = 0.6975708487254694;
    tmp_msg_0.z = 0.019797804270033637;
    tmp_msg_0.phi = 0.6306116615716785;
    tmp_msg_0.theta = 0.8720154580234704;
    tmp_msg_0.psi = 0.8118549901905929;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.46657181627521493;

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
    msg.setTimeStamp(0.038822739117914784);
    msg.setSource(62419U);
    msg.setSourceEntity(220U);
    msg.setDestination(52770U);
    msg.setDestinationEntity(126U);
    msg.validity = 72U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8731797139044005;
    tmp_msg_0.beam_height = 0.4235076334724659;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9975922400647227;

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
    msg.setTimeStamp(0.8773109812047156);
    msg.setSource(51030U);
    msg.setSourceEntity(148U);
    msg.setDestination(12465U);
    msg.setDestinationEntity(154U);
    msg.validity = 149U;
    msg.value = 0.6513771058075932;

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
    msg.setTimeStamp(0.49361529676017657);
    msg.setSource(46905U);
    msg.setSourceEntity(74U);
    msg.setDestination(3649U);
    msg.setDestinationEntity(150U);
    msg.value = 0.620882353771479;

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
    msg.setTimeStamp(0.044538427085287435);
    msg.setSource(22767U);
    msg.setSourceEntity(29U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(168U);
    msg.value = 0.534020854660346;

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
    msg.setTimeStamp(0.3628177958596559);
    msg.setSource(8733U);
    msg.setSourceEntity(230U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(196U);
    msg.value = 0.7425355009833322;

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
    msg.setTimeStamp(0.9087465121980673);
    msg.setSource(27695U);
    msg.setSourceEntity(164U);
    msg.setDestination(22163U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9923941978808772;

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
    msg.setTimeStamp(0.43940752691499785);
    msg.setSource(63692U);
    msg.setSourceEntity(132U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(11U);
    msg.value = 0.601607258138044;

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
    msg.setTimeStamp(0.7322075489506819);
    msg.setSource(14916U);
    msg.setSourceEntity(16U);
    msg.setDestination(13578U);
    msg.setDestinationEntity(162U);
    msg.value = 0.7624709888124093;

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
    msg.setTimeStamp(0.9575275279814677);
    msg.setSource(50100U);
    msg.setSourceEntity(201U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(197U);
    msg.value = 0.7478006338998764;

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
    msg.setTimeStamp(0.20566506610317836);
    msg.setSource(28967U);
    msg.setSourceEntity(129U);
    msg.setDestination(32068U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7582544723111266;

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
    msg.setTimeStamp(0.2783084019154666);
    msg.setSource(36958U);
    msg.setSourceEntity(116U);
    msg.setDestination(54957U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7995670655400489;

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
    msg.setTimeStamp(0.7842937833048358);
    msg.setSource(5739U);
    msg.setSourceEntity(95U);
    msg.setDestination(6855U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7419142011414985;

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
    msg.setTimeStamp(0.8964048382437035);
    msg.setSource(36373U);
    msg.setSourceEntity(169U);
    msg.setDestination(46653U);
    msg.setDestinationEntity(117U);
    msg.value = 0.016033268085358654;

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
    msg.setTimeStamp(0.788649884776142);
    msg.setSource(4474U);
    msg.setSourceEntity(2U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(157U);
    msg.value = 0.18652127642661598;

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
    msg.setTimeStamp(0.1450640696242489);
    msg.setSource(32291U);
    msg.setSourceEntity(106U);
    msg.setDestination(21172U);
    msg.setDestinationEntity(216U);
    msg.value = 0.031448767881448014;

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
    msg.setTimeStamp(0.5132336742266325);
    msg.setSource(31719U);
    msg.setSourceEntity(205U);
    msg.setDestination(26555U);
    msg.setDestinationEntity(71U);
    msg.value = 0.3501578631870732;

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
    msg.setTimeStamp(0.09776230106512163);
    msg.setSource(40513U);
    msg.setSourceEntity(82U);
    msg.setDestination(25220U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3821251551295263;

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
    msg.setTimeStamp(0.06662530038491721);
    msg.setSource(15462U);
    msg.setSourceEntity(241U);
    msg.setDestination(48098U);
    msg.setDestinationEntity(30U);
    msg.value = 0.3291211449882365;

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
    msg.setTimeStamp(0.17986134500281403);
    msg.setSource(6667U);
    msg.setSourceEntity(23U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(15U);
    msg.value = 0.43874790273312614;

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
    msg.setTimeStamp(0.21659880691761324);
    msg.setSource(43417U);
    msg.setSourceEntity(134U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9747371779858117;

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
    msg.setTimeStamp(0.022394677458017154);
    msg.setSource(34844U);
    msg.setSourceEntity(202U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6291851658609596;

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
    msg.setTimeStamp(0.7190000832162565);
    msg.setSource(28739U);
    msg.setSourceEntity(181U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(204U);
    msg.value = 0.8903278736467991;

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
    msg.setTimeStamp(0.921042977667714);
    msg.setSource(60177U);
    msg.setSourceEntity(177U);
    msg.setDestination(38629U);
    msg.setDestinationEntity(98U);
    msg.value = 0.06621327986025338;

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
    msg.setTimeStamp(0.09013096175774404);
    msg.setSource(52032U);
    msg.setSourceEntity(212U);
    msg.setDestination(53886U);
    msg.setDestinationEntity(62U);
    msg.value = 0.11795684555548569;

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
    msg.setTimeStamp(0.2776252857242577);
    msg.setSource(58000U);
    msg.setSourceEntity(89U);
    msg.setDestination(53491U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3820017934074458;

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
    msg.setTimeStamp(0.19424446178812216);
    msg.setSource(15U);
    msg.setSourceEntity(78U);
    msg.setDestination(19843U);
    msg.setDestinationEntity(126U);
    msg.value = 0.3682893516197979;

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
    msg.setTimeStamp(0.8443266157140772);
    msg.setSource(40098U);
    msg.setSourceEntity(13U);
    msg.setDestination(49124U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.6120890292714897;
    msg.speed = 0.7568082856083751;
    msg.turbulence = 0.7374506318645833;

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
    msg.setTimeStamp(0.7734087167349385);
    msg.setSource(46121U);
    msg.setSourceEntity(3U);
    msg.setDestination(53079U);
    msg.setDestinationEntity(45U);
    msg.direction = 0.5041755676648134;
    msg.speed = 0.1480589202312277;
    msg.turbulence = 0.23521651372345753;

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
    msg.setTimeStamp(0.4198133161215951);
    msg.setSource(54865U);
    msg.setSourceEntity(147U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(158U);
    msg.direction = 0.8967260365352799;
    msg.speed = 0.5219348275002995;
    msg.turbulence = 0.18373289348882582;

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
    msg.setTimeStamp(0.13372816456307157);
    msg.setSource(16164U);
    msg.setSourceEntity(168U);
    msg.setDestination(42831U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5986300951915228;

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
    msg.setTimeStamp(0.36763390428646314);
    msg.setSource(46065U);
    msg.setSourceEntity(50U);
    msg.setDestination(26582U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5293071549697445;

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
    msg.setTimeStamp(0.478212091889749);
    msg.setSource(13651U);
    msg.setSourceEntity(49U);
    msg.setDestination(61868U);
    msg.setDestinationEntity(136U);
    msg.value = 0.11444349281554655;

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
    msg.setTimeStamp(0.8114133169315519);
    msg.setSource(56676U);
    msg.setSourceEntity(186U);
    msg.setDestination(8341U);
    msg.setDestinationEntity(233U);
    msg.value.assign("ROVEIANQHGYIZMOQZAXZHLIYPAIZDXRCNWWIIRFNGDQCDLTMTGUHDTAVPFBDGPKDFQDECWUFXUJNSPXRHCXEQVYKTIWGJ");

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
    msg.setTimeStamp(0.6510600932216457);
    msg.setSource(54661U);
    msg.setSourceEntity(50U);
    msg.setDestination(23161U);
    msg.setDestinationEntity(39U);
    msg.value.assign("RCQQMBEMCGNVLBZLZJSQAHYEKWHCBLHHEVEBWRMZKPJLXKJLDGVCGZDFOSCDYEWODZIOWUAXHGNYJLNTDOOLLGNY");

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
    msg.setTimeStamp(0.20270751834178946);
    msg.setSource(56066U);
    msg.setSourceEntity(183U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(112U);
    msg.value.assign("PCJTAKKWQDYHRPEVSZWBCFBBTIISGRGKJGLCOWWIZNMQVTYMFRALBEYPWJUIYNMDTUHFCUKYBBQAOVGZUALSQZTYYVWOVCZSJBJDJNRFAAOQPPCWBFESEUVQNZUSQRC");

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
    msg.setTimeStamp(0.9704705188301086);
    msg.setSource(52882U);
    msg.setSourceEntity(17U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(145U);
    const char tmp_msg_0[] = {-106, 21, -113, 38, -79, -109, -51, 53, 121, -90, 56, -52, -25, 18, -58, -51, 124, -69, -9, -101, 29, 119, 33, -36, -80, 62, 44, -89, -50, -88, -18, 68, -23, -65, 0, 46, 53, -85, 31, -12, 100, -37, -53, -51, 119, 123, 97, 4, 56, -6, -65, 86, -19, -60, -120, -75, 107, 96, -106, -117, -1, 71, -52, 6, 119, 126, -48, -77, 28, -91, -80, 93, 110, 61, 72, -62, 5, 109, -119, -61};
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
    msg.setTimeStamp(0.7624507506266975);
    msg.setSource(50158U);
    msg.setSourceEntity(70U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {36, -70, -23, 61, -63, -4, 34, -15, 103, -52, 109, 15, 12, 2, 94, -57, 110, -111, 83, 43, -64, 10, -1, 59, -27, -75, -1, -29, -46, 120, -34, 60, -91, -17, 93, 87, 50, 54, -24, -98, -29, 99, 88, 13, -122, -34, -72, -75, -86, -31, -4, -99, 12, 41, 36, -53, -52, -29, -67, -112, -50, 47, -22, -117, 99, -100, 75, -9, -25, 87, 90, 42, 46, -4, 19, 57, 41, -113, 52, -101, -53, -34, 68, -74, 83, 49, 35, -26, 124, 85, -64, 48, 1, 81, -99, -89, -42, 12, -110, -22, -125, -48, -69, -63, -53, -94, 7, 0, -107, -50, 43, -19, -126, -57, 39, 92, 70, 54, 3, 15, -118, -36, 12, 34, -31, 105, -93, -33, -67, 88, -29, -3, 90, -31, 73, 27, -110, 78, 41, 29, -14, 30, -69, -32, -55, -94, -42, -65, -26, 30, -74, -104, -50, -70, -95, 46, -20, -36, -103, 46, -90, 113, -49, 122, 89, 87, -43, -127, -83, 24, 14, -30, 7, 114, -23, -46, 29, 88, 119, -63, -103, -98, 124, -1, 28, 31, -69, -30, 115, 39, -125, -43, -119, 66, -86, -97, -4, -98, 66, -103, -3, -9, 101, -47, 97, 74, -89, -50, -122, -35, -104, -40, -63, 14, -69, -60, 52, 16};
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
    msg.setTimeStamp(0.2067071338336861);
    msg.setSource(34718U);
    msg.setSourceEntity(205U);
    msg.setDestination(19563U);
    msg.setDestinationEntity(169U);
    const char tmp_msg_0[] = {107, -124, -82, -80, -39, 0, 61, -125, 88, -116, 36, -58, 87, 93, -100, 57, 67, 25, 113, 50, -64, 124, -60, 122, -128, -72, -31, -94, 113, -39, 47, -104, -63, 124, -30, -98, 57, 37, -42, 41, -97, -28, 114, 92, 81, 86, 59, -36, 15, -93, -12, -91, 15, 73, 99, -79, -31, 12, 32, -75, 41, 64, -41, -60, -105, -78, 11, -71, 34, 100, -16, 12, 121, -102, 117, 24, 44, -62, 87, -102, 18, -80, 32, 114, 61, 126, 18, -64, -56, 124, -20, -59, -13, -56, 67, -44, -124, -102, -97, -66, -103, -48, 110, 63, -111, -49, 28, 32, -25};
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
    msg.setTimeStamp(0.5227264772530343);
    msg.setSource(52145U);
    msg.setSourceEntity(158U);
    msg.setDestination(54989U);
    msg.setDestinationEntity(68U);
    msg.type = 71U;
    msg.frequency = 1905741571U;
    msg.min_range = 25988U;
    msg.max_range = 23704U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.7183265473520513;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.24651932635745255;
    tmp_msg_0.beam_height = 0.28329166108768045;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {81, 55, 40, 43, 4, -19, 2, 1, -84, 85, 40, -30, -48, 6, -34, 37, -122, 41, 86, -97, 119, -67, 69, 86, -23, -70, -68, 109, 101, 17, 70, 32, -117, -25, 54, 97, -46, 116, -108, 117, -124, -81, -65, -118, -116, -127, 89, -64, -21, 52, -27, -106, 6, -60, 54, 75, -6, 103, -89, 74, 40, -13, -57, -69, -125, 32, -123, 10, 39, -27, 6, 49, -69, -8, 49, -64, -34, 8, 28, -59, -74, 90, 95, 60, 104, -113, -19, -93, -5, 68, -46, -80, -30, -49, -98, -45, -110, -80, 74, -23, -60, 69, 53, 42, -18, 77, 44, -89, -2, 86, -53, -22, -40, -6, -53, -52, 33, -40, -107, 98, -97, -85, 18, -24, -22, 108, 28, 82, 98, 101, 101, 10, -23, -66, -56, 93, 4, -103, -93, 12, 0, -110, -23, -50, -72, 64, 57, -27, -110, -75, -105, -61, 85, -100, -36, 117, 72, -82, 79, 119, -91, 63, 116, -126, -44, 90, -6, 71, -116, 20, -18, -62, 84};
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
    msg.setTimeStamp(0.15769946963939185);
    msg.setSource(16148U);
    msg.setSourceEntity(16U);
    msg.setDestination(52078U);
    msg.setDestinationEntity(66U);
    msg.type = 217U;
    msg.frequency = 3736254811U;
    msg.min_range = 29281U;
    msg.max_range = 47997U;
    msg.bits_per_point = 73U;
    msg.scale_factor = 0.029973512080868625;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8051483490830218;
    tmp_msg_0.beam_height = 0.5868080336316114;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {122, 122, 23, 103, -99, -117, -46, 110, -20, 43, -58, -7, -11, -55, -22, -76, 46, 24, -69, -74, -112, -68, 30, -58, 15, 65, 81, 72, -105, 65, -116, 49, 32, -85, -71, 75, -79, -80, 105, 96, -24, 72, -43, -125, -48, 123, -36, -13, -93, -118, -67, 67, 23, -82, 17, 119, -71, -100, -2, 60, -53, 108, -50, 55, -41, -24, 32, -90, -90, -85, 121, 25, 37, 96, -81, -121, 116, -92, 42, 6, 92, -117, -98, 62, 38, 24, -106, -41, -89, -80, 111, 24, 120, -41, -5, -55, -97, -34, 66, -3, 78, 72, -81, -20, 34, 64, 40, -64, -73, -68, 100, 10, -69, 107, -43};
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
    msg.setTimeStamp(0.3389810330192421);
    msg.setSource(8647U);
    msg.setSourceEntity(193U);
    msg.setDestination(44186U);
    msg.setDestinationEntity(27U);
    msg.type = 162U;
    msg.frequency = 2661374139U;
    msg.min_range = 18956U;
    msg.max_range = 21136U;
    msg.bits_per_point = 35U;
    msg.scale_factor = 0.24550970080630408;
    const char tmp_msg_0[] = {111, -4, -35, 93, -76, -52, -96, -11, 53, 107, -117, 4, -88, -29, 101, -22, -104, 110, 109, -72, -29, -71, 81, 105, 92, -51, -128, -4, 61, 74, -29, -77, 42, -39, 13, -87, -81, -93, 120, 27, -9, -109, 71, -55, -24, -43, 110, 30, -64, -111, -100, -54, 124, -30, 55, -101, 65, -73, 84, 84, -38, -63, 37, 122, 108, -97};
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
    msg.setTimeStamp(0.4747226373361071);
    msg.setSource(15525U);
    msg.setSourceEntity(111U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.4401262728852673);
    msg.setSource(26634U);
    msg.setSourceEntity(36U);
    msg.setDestination(34735U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.24947142944261913);
    msg.setSource(65364U);
    msg.setSourceEntity(228U);
    msg.setDestination(20175U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.4893582472328286);
    msg.setSource(12492U);
    msg.setSourceEntity(126U);
    msg.setDestination(43873U);
    msg.setDestinationEntity(5U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.32848493682945734);
    msg.setSource(26894U);
    msg.setSourceEntity(205U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(189U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.698041737667765);
    msg.setSource(45105U);
    msg.setSourceEntity(212U);
    msg.setDestination(30054U);
    msg.setDestinationEntity(117U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.6547790957077868);
    msg.setSource(45465U);
    msg.setSourceEntity(1U);
    msg.setDestination(30439U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9393939626553207;
    msg.confidence = 0.4666448792962794;
    msg.opmodes.assign("MQENMIXPXSTJBPMXFLCNLPUUVVLFDYMOSZHBNTXQPVFPYLRSFKHGICKFXQZVSMVWGSYOAOSHSPOQQZGEDIURLIBXGESJBNPPZEGOBCTVUAIEYUAAQEJTBCJYNZXVRMZWWEZLIUADAGWDKUET");

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
    msg.setTimeStamp(0.3619534693914953);
    msg.setSource(22143U);
    msg.setSourceEntity(134U);
    msg.setDestination(51563U);
    msg.setDestinationEntity(112U);
    msg.value = 0.8844745090952111;
    msg.confidence = 0.9952632005586652;
    msg.opmodes.assign("JALQEBWNTECXKZLABMIOWHAWKRQGEYKQPLEBDUSSNRHPOXYPSZCHFCCKNIITATBQDWXKMRNTAIFKQEMIAURMXTZDVSZKDJIVURZQTUVYSWAJRQNICXUHOOSTRWFOHUFLXZGHGYCVGNBPMRYXQAMNWHKDLUPOYDXTHYBPJCEEWZMUVPUWMDHXMSIHCFB");

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
    msg.setTimeStamp(0.7002807767301253);
    msg.setSource(40008U);
    msg.setSourceEntity(111U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(96U);
    msg.value = 0.9313264142436284;
    msg.confidence = 0.8571297972672716;
    msg.opmodes.assign("TVKHWRKFBLIFKKAJUKGNPHAREXNBUXDIZLOW");

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
    msg.setTimeStamp(0.6791617897415196);
    msg.setSource(48000U);
    msg.setSourceEntity(112U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(181U);
    msg.itow = 3804254653U;
    msg.lat = 0.2933812380026988;
    msg.lon = 0.8675178762410818;
    msg.height_ell = 0.992837113956927;
    msg.height_sea = 0.9549491441321484;
    msg.hacc = 0.0438078694716294;
    msg.vacc = 0.7388522677234969;
    msg.vel_n = 0.3807985161423346;
    msg.vel_e = 0.2650441447592775;
    msg.vel_d = 0.8025373828484244;
    msg.speed = 0.05291854606802271;
    msg.gspeed = 0.7377252610450709;
    msg.heading = 0.4505414597250005;
    msg.sacc = 0.23305858924094114;
    msg.cacc = 0.9701761507172445;

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
    msg.setTimeStamp(0.8382674425282574);
    msg.setSource(36206U);
    msg.setSourceEntity(127U);
    msg.setDestination(39427U);
    msg.setDestinationEntity(16U);
    msg.itow = 2403534990U;
    msg.lat = 0.6003873219032183;
    msg.lon = 0.20406080473637067;
    msg.height_ell = 0.18257086148015944;
    msg.height_sea = 0.710080735390778;
    msg.hacc = 0.9902296871940556;
    msg.vacc = 0.9285860195760196;
    msg.vel_n = 0.8044740201587195;
    msg.vel_e = 0.6815138963526086;
    msg.vel_d = 0.8157431702851691;
    msg.speed = 0.5561881818221702;
    msg.gspeed = 0.9102795760249681;
    msg.heading = 0.48649509834186655;
    msg.sacc = 0.463212917672157;
    msg.cacc = 0.7802609782729492;

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
    msg.setTimeStamp(0.5492347522269889);
    msg.setSource(6038U);
    msg.setSourceEntity(134U);
    msg.setDestination(18080U);
    msg.setDestinationEntity(117U);
    msg.itow = 2992213516U;
    msg.lat = 0.2300236157795199;
    msg.lon = 0.4042942219228509;
    msg.height_ell = 0.2488496210086869;
    msg.height_sea = 0.5995731251121184;
    msg.hacc = 0.2663418520737313;
    msg.vacc = 0.3629497519797775;
    msg.vel_n = 0.8050623182012854;
    msg.vel_e = 0.3975479557437498;
    msg.vel_d = 0.6602883311083246;
    msg.speed = 0.7344680046921515;
    msg.gspeed = 0.2176546560842274;
    msg.heading = 0.9320907022565149;
    msg.sacc = 0.8752955621579872;
    msg.cacc = 0.7921930260339416;

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
    msg.setTimeStamp(0.21239395797138416);
    msg.setSource(26400U);
    msg.setSourceEntity(146U);
    msg.setDestination(60491U);
    msg.setDestinationEntity(134U);
    msg.id = 75U;
    msg.value = 0.37140693537410985;

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
    msg.setTimeStamp(0.8034675123934888);
    msg.setSource(554U);
    msg.setSourceEntity(132U);
    msg.setDestination(30777U);
    msg.setDestinationEntity(100U);
    msg.id = 134U;
    msg.value = 0.7003092051756955;

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
    msg.setTimeStamp(0.3115995883494709);
    msg.setSource(14593U);
    msg.setSourceEntity(7U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(82U);
    msg.id = 23U;
    msg.value = 0.8108479255534459;

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
    msg.setTimeStamp(0.311640002365311);
    msg.setSource(28884U);
    msg.setSourceEntity(110U);
    msg.setDestination(34188U);
    msg.setDestinationEntity(192U);
    msg.x = 0.43641613192701145;
    msg.y = 0.17016831408975663;
    msg.z = 0.7013629214902404;
    msg.phi = 0.5896999374477193;
    msg.theta = 0.2929130139414228;
    msg.psi = 0.9443183867169527;

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
    msg.setTimeStamp(0.8268693638959188);
    msg.setSource(53725U);
    msg.setSourceEntity(221U);
    msg.setDestination(60316U);
    msg.setDestinationEntity(201U);
    msg.x = 0.04774729791054577;
    msg.y = 0.9826829530480229;
    msg.z = 0.8839653337610885;
    msg.phi = 0.9767152639989747;
    msg.theta = 0.2447800779092255;
    msg.psi = 0.031727223811301664;

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
    msg.setTimeStamp(0.29285556277317937);
    msg.setSource(17908U);
    msg.setSourceEntity(192U);
    msg.setDestination(13603U);
    msg.setDestinationEntity(112U);
    msg.x = 0.6467190016479215;
    msg.y = 0.8291222519792596;
    msg.z = 0.19757490333118433;
    msg.phi = 0.39693554980338974;
    msg.theta = 0.14132757641039417;
    msg.psi = 0.5457099852001489;

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
    msg.setTimeStamp(0.8009088537915318);
    msg.setSource(12754U);
    msg.setSourceEntity(234U);
    msg.setDestination(45641U);
    msg.setDestinationEntity(107U);
    msg.beam_width = 0.33578317775139677;
    msg.beam_height = 0.7882988994808418;

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
    msg.setTimeStamp(0.7416628462359057);
    msg.setSource(32699U);
    msg.setSourceEntity(35U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(167U);
    msg.beam_width = 0.42236833644033833;
    msg.beam_height = 0.7694916793463188;

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
    msg.setTimeStamp(0.22288860047746084);
    msg.setSource(6269U);
    msg.setSourceEntity(92U);
    msg.setDestination(16229U);
    msg.setDestinationEntity(74U);
    msg.beam_width = 0.6331003135120092;
    msg.beam_height = 0.38462328682799374;

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
    msg.setTimeStamp(0.42391191051148724);
    msg.setSource(4665U);
    msg.setSourceEntity(80U);
    msg.setDestination(22203U);
    msg.setDestinationEntity(152U);
    msg.sane = 68U;

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
    msg.setTimeStamp(0.2925749845620813);
    msg.setSource(20674U);
    msg.setSourceEntity(7U);
    msg.setDestination(45412U);
    msg.setDestinationEntity(244U);
    msg.sane = 186U;

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
    msg.setTimeStamp(0.7504414888620033);
    msg.setSource(42294U);
    msg.setSourceEntity(157U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(48U);
    msg.sane = 214U;

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
    msg.setTimeStamp(0.7070102844875301);
    msg.setSource(52001U);
    msg.setSourceEntity(106U);
    msg.setDestination(32675U);
    msg.setDestinationEntity(17U);
    msg.id = 230U;
    msg.zoom = 12U;
    msg.action = 175U;

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
    msg.setTimeStamp(0.6421656494411134);
    msg.setSource(46009U);
    msg.setSourceEntity(4U);
    msg.setDestination(49525U);
    msg.setDestinationEntity(68U);
    msg.id = 163U;
    msg.zoom = 221U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.44282192367601525);
    msg.setSource(51473U);
    msg.setSourceEntity(22U);
    msg.setDestination(46670U);
    msg.setDestinationEntity(76U);
    msg.id = 23U;
    msg.zoom = 250U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.28483259938889527);
    msg.setSource(64307U);
    msg.setSourceEntity(11U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(59U);
    msg.id = 77U;
    msg.value = 0.5522352913303016;

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
    msg.setTimeStamp(0.28089757077863686);
    msg.setSource(43377U);
    msg.setSourceEntity(6U);
    msg.setDestination(5330U);
    msg.setDestinationEntity(5U);
    msg.id = 159U;
    msg.value = 0.12045213733927362;

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
    msg.setTimeStamp(0.26978888962819814);
    msg.setSource(32964U);
    msg.setSourceEntity(68U);
    msg.setDestination(54408U);
    msg.setDestinationEntity(121U);
    msg.id = 50U;
    msg.value = 0.6260985508150504;

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
    msg.setTimeStamp(0.6564300988217427);
    msg.setSource(37260U);
    msg.setSourceEntity(246U);
    msg.setDestination(32259U);
    msg.setDestinationEntity(1U);
    msg.id = 234U;
    msg.value = 0.4461604362778444;

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
    msg.setTimeStamp(0.3607995740942842);
    msg.setSource(48706U);
    msg.setSourceEntity(75U);
    msg.setDestination(23155U);
    msg.setDestinationEntity(56U);
    msg.id = 57U;
    msg.value = 0.9931597215762715;

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
    msg.setTimeStamp(0.3199209253127415);
    msg.setSource(39693U);
    msg.setSourceEntity(136U);
    msg.setDestination(52980U);
    msg.setDestinationEntity(100U);
    msg.id = 89U;
    msg.value = 0.9170592663644553;

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
    msg.setTimeStamp(0.5210926271166487);
    msg.setSource(34424U);
    msg.setSourceEntity(138U);
    msg.setDestination(41941U);
    msg.setDestinationEntity(199U);
    msg.id = 87U;
    msg.angle = 0.4368301053468888;

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
    msg.setTimeStamp(0.6908117675852156);
    msg.setSource(31563U);
    msg.setSourceEntity(38U);
    msg.setDestination(54693U);
    msg.setDestinationEntity(251U);
    msg.id = 24U;
    msg.angle = 0.863310094872375;

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
    msg.setTimeStamp(0.5516957831205804);
    msg.setSource(19340U);
    msg.setSourceEntity(90U);
    msg.setDestination(1682U);
    msg.setDestinationEntity(127U);
    msg.id = 64U;
    msg.angle = 0.009953388903336857;

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
    msg.setTimeStamp(0.08189356656752544);
    msg.setSource(9482U);
    msg.setSourceEntity(47U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(54U);
    msg.op = 46U;
    msg.actions.assign("EALKUAANESZGKFKYOVLKH");

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
    msg.setTimeStamp(0.12715356161653346);
    msg.setSource(46346U);
    msg.setSourceEntity(254U);
    msg.setDestination(32622U);
    msg.setDestinationEntity(115U);
    msg.op = 177U;
    msg.actions.assign("PJRKYDEYRAJLWIEDLQIZLHXFHYEGCAE");

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
    msg.setTimeStamp(0.2502508248714588);
    msg.setSource(11749U);
    msg.setSourceEntity(36U);
    msg.setDestination(45612U);
    msg.setDestinationEntity(35U);
    msg.op = 67U;
    msg.actions.assign("RDZCZMHVNSQVTFZXVMXEISTYKHCZSSLCBDLWBWADCXYYEGJPBWZTHAOYJWQUDDMUGJXOJSSPPEPRNFGLZOUOCZAUGKTQWBWRMYLNOCWAZMRFJISFFKEMVXPVHOVVPBICLFXTKXTQHGNMNUMOABXBNKCGREVHYDBUQLUOQFIENRGQPS");

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
    msg.setTimeStamp(0.14202881979220827);
    msg.setSource(22346U);
    msg.setSourceEntity(14U);
    msg.setDestination(9602U);
    msg.setDestinationEntity(224U);
    msg.actions.assign("UPXRDRPLYLCUWTTQELZCQNGOBHGVCXZITHWVHQAJAWRNHKYFOFWTOZDODNTHCYQRHZAOVGCJXCGLHPYBJEVIXUKSBEMSQMMTXLNXJ");

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
    msg.setTimeStamp(0.48361403394482905);
    msg.setSource(46494U);
    msg.setSourceEntity(79U);
    msg.setDestination(43095U);
    msg.setDestinationEntity(144U);
    msg.actions.assign("UPLGFGDAXMTTIGTYWJQJBZLHUUNJSJCLPPGLXUJFYNKWJKYSVLAIKMRXCFMZQVXLPTERAQNWMFRYERSGRIEDKEUYLKYTCCLUASEHFQQDDWTUQXUNKZADMPEVTBIPEBLSGHWQHRDXOFYONZJKXIZHIDYWXWVPHTVZBRAFAWDZKSOVBWOGQPOFFGVMBIUVWCVQOQBMPNARAIDTNZOKFSEBYSZEPRLYVHCXHHGCZCKMD");

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
    msg.setTimeStamp(0.5339519516792958);
    msg.setSource(10976U);
    msg.setSourceEntity(111U);
    msg.setDestination(65458U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("ILUWNYVZVJXUCPXGGCIXGRWDMSLNPDDTOUBYRAWFQKUDHNSHGXBKQAIVJOZMGOQYIIFDFDSUTCUMHDNATNKQYKWPJELQBTESVYHMCPZORQZGLVCMNJXNLTCJPCRCPRFHJYIGRRMEIHHFXSGYIWALUZTAKFXKELRSULSMKSDJPMEAWYC");

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
    msg.setTimeStamp(0.2608617363138427);
    msg.setSource(7610U);
    msg.setSourceEntity(204U);
    msg.setDestination(23463U);
    msg.setDestinationEntity(179U);
    msg.button = 32U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.898807379731608);
    msg.setSource(1211U);
    msg.setSourceEntity(95U);
    msg.setDestination(8717U);
    msg.setDestinationEntity(174U);
    msg.button = 204U;
    msg.value = 41U;

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
    msg.setTimeStamp(0.8184062489679215);
    msg.setSource(27817U);
    msg.setSourceEntity(252U);
    msg.setDestination(21429U);
    msg.setDestinationEntity(104U);
    msg.button = 205U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.4563578178444956);
    msg.setSource(35503U);
    msg.setSourceEntity(194U);
    msg.setDestination(13636U);
    msg.setDestinationEntity(34U);
    msg.op = 244U;
    msg.text.assign("WPEYUWSSTXEOQSFVEZDLDXKRGDLIHRUZBPZPELVIHFMQBZOFCMSBCVHQGFNCANHBFNGSPUTVEAIDVZKWYKBYTMFQCRHLGCOLUFXCTBOOYMWUJVBYNHQNAMYJLRQJWUWKARXXKEXLDTKY");

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
    msg.setTimeStamp(0.6845157852359716);
    msg.setSource(18365U);
    msg.setSourceEntity(244U);
    msg.setDestination(57401U);
    msg.setDestinationEntity(105U);
    msg.op = 90U;
    msg.text.assign("GEUEOLRFDPJDLULPEDLBWGJISYWMAKIODQFKCALAHUUCVHFIPWSVKZKXWEHZKHDRQPMQGWDCSUZPPBEXSCRUVKHDAJQVNPFFVTYGHVVKMOXWELXTOQSALJBMCSNMNKIYCYYUXZFNFMURBASBDAGFYGJXTMKURQSJTHZNX");

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
    msg.setTimeStamp(0.9100164432504745);
    msg.setSource(48763U);
    msg.setSourceEntity(44U);
    msg.setDestination(37905U);
    msg.setDestinationEntity(141U);
    msg.op = 29U;
    msg.text.assign("OVFOLENEBJZBPCXTVYMQDQHTUMPEMLGNFJWTYVTLMDZOACQRSELXBWSEAFTYHCUYNZNKHVOMPPXFLUKMDVXWFJDAMJINEBQBCDQGWASHYAIZGQFNXDRVOMWWLNGDSPKQNEBSGRJUPRAICOSZDHJSZZVGFBZJVYOHAAKBSIFNCCRLIQWBGAJEPUCLRTZUFRDRFOTOHWAHIXEYPHI");

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
    msg.setTimeStamp(0.8383970194684556);
    msg.setSource(15957U);
    msg.setSourceEntity(110U);
    msg.setDestination(22820U);
    msg.setDestinationEntity(248U);
    msg.op = 132U;
    msg.time_remain = 0.5428464776016113;
    msg.sched_time = 0.6370460535134203;

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
    msg.setTimeStamp(0.9083467744022328);
    msg.setSource(14624U);
    msg.setSourceEntity(58U);
    msg.setDestination(60716U);
    msg.setDestinationEntity(238U);
    msg.op = 205U;
    msg.time_remain = 0.9033237874668033;
    msg.sched_time = 0.31758864311393187;

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
    msg.setTimeStamp(0.7847009670059443);
    msg.setSource(22139U);
    msg.setSourceEntity(179U);
    msg.setDestination(60228U);
    msg.setDestinationEntity(4U);
    msg.op = 180U;
    msg.time_remain = 0.9583912772223875;
    msg.sched_time = 0.00180470326585358;

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
    msg.setTimeStamp(0.04650178604883837);
    msg.setSource(10990U);
    msg.setSourceEntity(119U);
    msg.setDestination(62923U);
    msg.setDestinationEntity(40U);
    msg.name.assign("TQWUAGORCZSMIVDHFRLWBRLPNTQJKYRCPUAIYZQVECIKQWLGCYVKCLCWNOXTK");
    msg.op = 34U;
    msg.sched_time = 0.015451025862133982;

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
    msg.setTimeStamp(0.6005470786550292);
    msg.setSource(6197U);
    msg.setSourceEntity(101U);
    msg.setDestination(57492U);
    msg.setDestinationEntity(200U);
    msg.name.assign("CNTUPROXKIHMIQKAZUPJUYTCQAMAKWVCIOADURUVGFIXFITRIZWQSXENLVZICAJYIEBLOFCCDABVTXUJLEBKNHACXXPFTOKFFZMRQRBJRFVCYBMPDGSSPDBRYTWPLQNOQJXDQDWBZAHSNHHGEMQUJOCWVREIDVPALKHYLVKBDIWRXZSZNMOXUHZCWJEFODJDKUOPYEBGBGLEWNH");
    msg.op = 157U;
    msg.sched_time = 0.2239379255420575;

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
    msg.setTimeStamp(0.3482673502740926);
    msg.setSource(18370U);
    msg.setSourceEntity(167U);
    msg.setDestination(52060U);
    msg.setDestinationEntity(22U);
    msg.name.assign("WIDLJZOWABXJQMWKXYFNWTDXYDZIKCDYUVPKMSDAQGHQSSTMBVYZFUUCATOKJEAXIIDTXURRUKBWVZPLTXMUERTOHRBPZIQDPOJJJKCZMPN");
    msg.op = 188U;
    msg.sched_time = 0.07831804813800036;

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
    msg.setTimeStamp(0.5554693984248543);
    msg.setSource(1315U);
    msg.setSourceEntity(155U);
    msg.setDestination(29218U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.08116078980656627);
    msg.setSource(2104U);
    msg.setSourceEntity(217U);
    msg.setDestination(31652U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.33992213093027046);
    msg.setSource(25981U);
    msg.setSourceEntity(154U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.9440696348420657);
    msg.setSource(11202U);
    msg.setSourceEntity(209U);
    msg.setDestination(56822U);
    msg.setDestinationEntity(206U);
    msg.name.assign("KNQRPOAXZWWIBJZYLPRDPDLLSNPFTBNHMWXQDBSOCBFEQQCVVLYIYQRWAJSSZVJMZSKOLQTWFIBGHFPMBPDTHUEBURGMHWPVQKKQAYOQUOTDVCTRUESESGI");
    msg.state = 235U;

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
    msg.setTimeStamp(0.8506873299336137);
    msg.setSource(9066U);
    msg.setSourceEntity(104U);
    msg.setDestination(51591U);
    msg.setDestinationEntity(186U);
    msg.name.assign("CXYTWCGCOFEALNMGDUXXSXZRDYLXLYSUYEHEPTDIGXIFNXQEDFNHPAJDOUJZOQEHZHARDMCTPGRCKKBQZUSYRTDQBVKJWWPPIUEOLKAZKLWKUNSVCMFRJQIIAERMZWEHMGZJXFRIQLROBJGTBHVQD");
    msg.state = 71U;

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
    msg.setTimeStamp(0.06890149012397873);
    msg.setSource(50075U);
    msg.setSourceEntity(194U);
    msg.setDestination(58238U);
    msg.setDestinationEntity(103U);
    msg.name.assign("OVUQHBJDNIYOKRXKFCOZGQHQVCQZTAGGXWFXYQKNUMKQJTMUCXLAQBNADIWLTFLWGNSPDQJTFWTLMFOIIELSZNSHVVWYMZJFPRZMONYDBSGYDAYUDIRSKKFTEPRYZ");
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
    msg.setTimeStamp(0.4927307620003244);
    msg.setSource(12572U);
    msg.setSourceEntity(21U);
    msg.setDestination(24894U);
    msg.setDestinationEntity(59U);
    msg.name.assign("HYBRQRWOUHRLFWWPLGFUFEQSNMQGZVCPEGOPCHKVASMFEZZNQBWSDYPZZXZKKTAUGEIIFZVXJJLPHBJZIROCHYDLUNDNIDEXKTAEGSGSKTFFPLXLRVVENSHSMWDQNPHOTAGEBTMRXWMLRCCCUXIUDYPKQTADWNJEBJUYQDOOLRTKVVJHTBRVZAGSAGPUCQJOGCPXCFYXNUUBYIJBWEAKCXYSBWMKMAORNFQOJYFNYVBDSZIH");
    msg.value = 164U;

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
    msg.setTimeStamp(0.5913772519061858);
    msg.setSource(21007U);
    msg.setSourceEntity(60U);
    msg.setDestination(35336U);
    msg.setDestinationEntity(99U);
    msg.name.assign("CQDZXIUTOCWKHUSNBDNGJJNRNRVMLKVHZKLKYWXZSWTNXPYWIYYDRJHPFTROGNZDCFVVMFKRXGLDBJBBSIVGOHPIAEJZEUHXMGPVEMABAVHKUNIJYGBUTMLQXCEIYWQLMNUWEYDRJFDGPLDWVMYJPBCOOTRISPBJ");
    msg.value = 169U;

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
    msg.setTimeStamp(0.1224967393290568);
    msg.setSource(43345U);
    msg.setSourceEntity(32U);
    msg.setDestination(61646U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ZEGSEZRWDMDIAVPKHOEMJPMVUYFNLYHGSCMCREPYJCBXZFGQLYTAIGYCOFSNOXITLJPHMJWEMTHZAYNSHBTZYPKPBWLQBVVWNUCCOJDVKIBFLKXQHQAINIPDDAQVXSBUQIQQDUAFOUMWGSRAASQZXKWZOPNNLCEWTPFJGFVSWKVBBTCBEGYRWZLFIGTJOUVKIUGSCTKNPNYXMZDJHXUYDWXJLRROMTHGCIDUHHXLRBQZU");
    msg.value = 62U;

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
    msg.setTimeStamp(0.266649070309656);
    msg.setSource(11142U);
    msg.setSourceEntity(226U);
    msg.setDestination(30378U);
    msg.setDestinationEntity(45U);
    msg.name.assign("FHGJDDZZHBLPNEZQZCXJTTQUIDJKYUSOOBVUPHBEDJVKKKOMWLXCIGGXPAVLMWXLEXAYAEYGZVB");

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
    msg.setTimeStamp(0.828499937877212);
    msg.setSource(19256U);
    msg.setSourceEntity(46U);
    msg.setDestination(5805U);
    msg.setDestinationEntity(13U);
    msg.name.assign("OPLFVCHKWRMFGYLGUQBXWYYREKRBVECIVGDPYGHTZROZJNCUHFTDOXVYIJLSLTMCDVWXKMQMNAMFXPTVIROTIDQTVBJOYEOJGKYPYQXIOUIQKTSLZPHHFSKUJFIBUOHASRZBDNVAQKYBFEVCLXMZNEPHCLZNGQNHTSKBNAMAHNKLBCURC");

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
    msg.setTimeStamp(0.5935335250012482);
    msg.setSource(8963U);
    msg.setSourceEntity(247U);
    msg.setDestination(25326U);
    msg.setDestinationEntity(74U);
    msg.name.assign("GQXLTXHHODSVJTDYANBPJATZWVDPDOEKLLZXFRBWEUZGFLVOKQFOUOVPAVTZMTJIDEXPQTHCDALSIBSJBPRCNWMZCMHUALQABJPJKRPNYJDAHVJMLZDGSBTSDGVFRPJKEEOCVCRYXOFCYMSEKAYRCYAQNEMTESINUZGIRQMKWGYWUIXJWRLKUMGNHBFSSZXQGOIWYXIMAEVURUZYDFH");

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
    msg.setTimeStamp(0.7552289402082473);
    msg.setSource(47890U);
    msg.setSourceEntity(154U);
    msg.setDestination(6580U);
    msg.setDestinationEntity(99U);
    msg.name.assign("FXJZWGAOXHDYXIUTWAHZTQIREMNQLTNKMDRQLQACCXPVQYQMMEPOBOZKNWPDHMPCQALFKJNSZIFERAGFGHVIHOSBYZDWKNGVZGJNFUCVBTJKXIHJIEPYJYRXLUIDGTQRBPETYMQWNJNAPBGXDLBNIRWPDLOJSVPKSYUVUWLVRSMECPUASGDZYCIBSERSFOWTGFXCNQMYJXTUSHSHIORVKZBVKOATEYWDAWDOGULUKMHLEZRFVMCLOXHFCCK");
    msg.value = 184U;

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
    msg.setTimeStamp(0.9289744754005971);
    msg.setSource(15954U);
    msg.setSourceEntity(223U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(182U);
    msg.name.assign("XSNABWTQLXQGXHCYPYHNKQNGHECZBKKFALTOHMHHJBVFUUEMJTFHBFUJKNTIWVQYZECCAYSFXWBLTLBDQSINREDMCZUWZDDOO");
    msg.value = 115U;

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
    msg.setTimeStamp(0.9378408063353417);
    msg.setSource(29326U);
    msg.setSourceEntity(161U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(205U);
    msg.name.assign("SWUZLIHLJRMTURNNGBPVZUXFSYCGUZOLYDFXETEIQHTUDAICRNMZCSRBVYMBQENHBAXZQOIRTQBUOWJMVWWPHDPXZYEOLRPFPKTUIYHOCHZ");
    msg.value = 170U;

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
    msg.setTimeStamp(0.6692342664813064);
    msg.setSource(11869U);
    msg.setSourceEntity(71U);
    msg.setDestination(44598U);
    msg.setDestinationEntity(126U);
    msg.id = 15U;
    msg.period = 3430219104U;
    msg.duty_cycle = 2426418625U;

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
    msg.setTimeStamp(0.1530573572074685);
    msg.setSource(49934U);
    msg.setSourceEntity(100U);
    msg.setDestination(29568U);
    msg.setDestinationEntity(194U);
    msg.id = 106U;
    msg.period = 1169799820U;
    msg.duty_cycle = 693180356U;

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
    msg.setTimeStamp(0.3889937925839222);
    msg.setSource(4763U);
    msg.setSourceEntity(31U);
    msg.setDestination(30428U);
    msg.setDestinationEntity(21U);
    msg.id = 209U;
    msg.period = 112521187U;
    msg.duty_cycle = 261266354U;

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
    msg.setTimeStamp(0.1673594124576916);
    msg.setSource(24009U);
    msg.setSourceEntity(231U);
    msg.setDestination(33365U);
    msg.setDestinationEntity(15U);
    msg.id = 94U;
    msg.period = 3107340830U;
    msg.duty_cycle = 1579366908U;

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
    msg.setTimeStamp(0.2754473466013152);
    msg.setSource(55616U);
    msg.setSourceEntity(176U);
    msg.setDestination(18437U);
    msg.setDestinationEntity(37U);
    msg.id = 146U;
    msg.period = 3758560864U;
    msg.duty_cycle = 1051947022U;

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
    msg.setTimeStamp(0.5470308981860669);
    msg.setSource(61635U);
    msg.setSourceEntity(38U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(37U);
    msg.id = 32U;
    msg.period = 3994013563U;
    msg.duty_cycle = 942751942U;

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
    msg.setTimeStamp(0.971520223326154);
    msg.setSource(3658U);
    msg.setSourceEntity(243U);
    msg.setDestination(28167U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.195892349598508;
    msg.lon = 0.14339777030009448;
    msg.height = 0.6138626015356009;
    msg.x = 0.7613012856243755;
    msg.y = 0.8290252775198949;
    msg.z = 0.07290041736606634;
    msg.phi = 0.9238727254108313;
    msg.theta = 0.6385351113207922;
    msg.psi = 0.8237212923629034;
    msg.u = 0.44780089029589554;
    msg.v = 0.05128050224874847;
    msg.w = 0.9019937281435166;
    msg.vx = 0.16375708123630128;
    msg.vy = 0.4651644341539125;
    msg.vz = 0.3882720063187176;
    msg.p = 0.12312589272406793;
    msg.q = 0.09512639900547848;
    msg.r = 0.015072064556781783;
    msg.depth = 0.6627944005473037;
    msg.alt = 0.7453897189769699;

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
    msg.setTimeStamp(0.6991892342772743);
    msg.setSource(4925U);
    msg.setSourceEntity(207U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.6057794859093222;
    msg.lon = 0.1358573726125114;
    msg.height = 0.1555591574679468;
    msg.x = 0.4666017196296015;
    msg.y = 0.6384866219862154;
    msg.z = 0.8769873991369338;
    msg.phi = 0.6743267695347788;
    msg.theta = 0.36767510556678995;
    msg.psi = 0.9544925433637694;
    msg.u = 0.3025793462182842;
    msg.v = 0.08067886824818549;
    msg.w = 0.500136307211806;
    msg.vx = 0.4192332724086738;
    msg.vy = 0.09737908782204552;
    msg.vz = 0.21900815056277922;
    msg.p = 0.8033685704846832;
    msg.q = 0.9824956691495627;
    msg.r = 0.36483543282303466;
    msg.depth = 0.47532336189620394;
    msg.alt = 0.8538530301981142;

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
    msg.setTimeStamp(0.9813767988850691);
    msg.setSource(59173U);
    msg.setSourceEntity(123U);
    msg.setDestination(1683U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.33573847367305487;
    msg.lon = 0.5209214482897874;
    msg.height = 0.3536632516506466;
    msg.x = 0.3246102583282797;
    msg.y = 0.976547551180827;
    msg.z = 0.18833148580026737;
    msg.phi = 0.23629787627813892;
    msg.theta = 0.3341505194375163;
    msg.psi = 0.26023349188601663;
    msg.u = 0.7619116474712618;
    msg.v = 0.05969580751729364;
    msg.w = 0.6891673170441079;
    msg.vx = 0.1867110659880603;
    msg.vy = 0.937107784249016;
    msg.vz = 0.6187753384081364;
    msg.p = 0.6677673174230213;
    msg.q = 0.848282319491899;
    msg.r = 0.167602578212252;
    msg.depth = 0.7042290201615605;
    msg.alt = 0.6603048630572631;

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
    msg.setTimeStamp(0.5565829791391095);
    msg.setSource(4797U);
    msg.setSourceEntity(198U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(36U);
    msg.x = 0.8302140741535056;
    msg.y = 0.35365543366995766;
    msg.z = 0.12302241700371319;

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
    msg.setTimeStamp(0.537539969987718);
    msg.setSource(10971U);
    msg.setSourceEntity(130U);
    msg.setDestination(30319U);
    msg.setDestinationEntity(62U);
    msg.x = 0.4642233099953862;
    msg.y = 0.12344890752860382;
    msg.z = 0.7983220069116335;

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
    msg.setTimeStamp(0.868926520210695);
    msg.setSource(26504U);
    msg.setSourceEntity(16U);
    msg.setDestination(31176U);
    msg.setDestinationEntity(187U);
    msg.x = 0.9615494253863017;
    msg.y = 0.17520957473739152;
    msg.z = 0.6613239495481249;

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
    msg.setTimeStamp(0.6358952483443565);
    msg.setSource(35466U);
    msg.setSourceEntity(63U);
    msg.setDestination(2973U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7595000096128735;

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
    msg.setTimeStamp(0.31937224261872676);
    msg.setSource(26329U);
    msg.setSourceEntity(212U);
    msg.setDestination(13295U);
    msg.setDestinationEntity(59U);
    msg.value = 0.2687538314061475;

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
    msg.setTimeStamp(0.12361815004036425);
    msg.setSource(5377U);
    msg.setSourceEntity(194U);
    msg.setDestination(64178U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5163157532603151;

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
    msg.setTimeStamp(0.9587674829306236);
    msg.setSource(19479U);
    msg.setSourceEntity(18U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(52U);
    msg.value = 0.31239743781403895;

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
    msg.setTimeStamp(0.1097641576617936);
    msg.setSource(43479U);
    msg.setSourceEntity(95U);
    msg.setDestination(46623U);
    msg.setDestinationEntity(200U);
    msg.value = 0.1796511093507207;

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
    msg.setTimeStamp(0.9702036156594692);
    msg.setSource(99U);
    msg.setSourceEntity(43U);
    msg.setDestination(2048U);
    msg.setDestinationEntity(109U);
    msg.value = 0.2696788279510003;

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
    msg.setTimeStamp(0.9630539727795838);
    msg.setSource(17976U);
    msg.setSourceEntity(118U);
    msg.setDestination(21765U);
    msg.setDestinationEntity(118U);
    msg.x = 0.6353366002241038;
    msg.y = 0.5716003603296659;
    msg.z = 0.6032165935280608;
    msg.phi = 0.9910443543863826;
    msg.theta = 0.6491848234089554;
    msg.psi = 0.8413180924915472;
    msg.p = 0.6136447791001484;
    msg.q = 0.038739387031184735;
    msg.r = 0.9476792482634193;
    msg.u = 0.17863169430755332;
    msg.v = 0.8063538169777353;
    msg.w = 0.927044872310506;
    msg.bias_psi = 0.698087240249354;
    msg.bias_r = 0.4224265134072389;

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
    msg.setTimeStamp(0.8999905719018155);
    msg.setSource(43388U);
    msg.setSourceEntity(187U);
    msg.setDestination(11865U);
    msg.setDestinationEntity(206U);
    msg.x = 0.6845359907379753;
    msg.y = 0.4950392226115443;
    msg.z = 0.5248526083311029;
    msg.phi = 0.6554325450429406;
    msg.theta = 0.7736379038850546;
    msg.psi = 0.02863311797165735;
    msg.p = 0.16051025854873324;
    msg.q = 0.22968248215788123;
    msg.r = 0.855910849698017;
    msg.u = 0.7161055023134126;
    msg.v = 0.503808024626795;
    msg.w = 0.0589194176562472;
    msg.bias_psi = 0.43161309495113154;
    msg.bias_r = 0.7695567083828213;

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
    msg.setTimeStamp(0.11843354729423217);
    msg.setSource(58169U);
    msg.setSourceEntity(158U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(177U);
    msg.x = 0.13197149827929588;
    msg.y = 0.9420927284882306;
    msg.z = 0.6081629260431685;
    msg.phi = 0.3236168529618474;
    msg.theta = 0.21516052611299752;
    msg.psi = 0.18964580588189872;
    msg.p = 0.017155741361038368;
    msg.q = 0.6111524287857629;
    msg.r = 0.1662150500082713;
    msg.u = 0.5740845499041576;
    msg.v = 0.8353170907392262;
    msg.w = 0.8264622629654617;
    msg.bias_psi = 0.3759781858816097;
    msg.bias_r = 0.5603589124671788;

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
    msg.setTimeStamp(0.41327032081078574);
    msg.setSource(38640U);
    msg.setSourceEntity(47U);
    msg.setDestination(52402U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.17953992793681284;
    msg.bias_r = 0.1682490185319312;
    msg.cog = 0.9563520143443119;
    msg.cyaw = 0.27902340602853004;
    msg.lbl_rej_level = 0.44180726008523297;
    msg.gps_rej_level = 0.5064111817140431;
    msg.custom_x = 0.4544559114489093;
    msg.custom_y = 0.8067459134721318;
    msg.custom_z = 0.28821621260385055;

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
    msg.setTimeStamp(0.6585630507678879);
    msg.setSource(10995U);
    msg.setSourceEntity(158U);
    msg.setDestination(62230U);
    msg.setDestinationEntity(98U);
    msg.bias_psi = 0.5738972152391258;
    msg.bias_r = 0.4848959533439201;
    msg.cog = 0.9825149882516704;
    msg.cyaw = 0.05867083506929027;
    msg.lbl_rej_level = 0.21354475122863192;
    msg.gps_rej_level = 0.8332414001355218;
    msg.custom_x = 0.7408519807077341;
    msg.custom_y = 0.6906172888066092;
    msg.custom_z = 0.9353463596662577;

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
    msg.setTimeStamp(0.4323239857787604);
    msg.setSource(57716U);
    msg.setSourceEntity(53U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(238U);
    msg.bias_psi = 0.6668817551917522;
    msg.bias_r = 0.43450193923670377;
    msg.cog = 0.4216057374172245;
    msg.cyaw = 0.9533797106701813;
    msg.lbl_rej_level = 0.767301391133621;
    msg.gps_rej_level = 0.2693640993378299;
    msg.custom_x = 0.6468228937360215;
    msg.custom_y = 0.3771568821740937;
    msg.custom_z = 0.2855216757328568;

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
    msg.setTimeStamp(0.7306871978526115);
    msg.setSource(54495U);
    msg.setSourceEntity(105U);
    msg.setDestination(12027U);
    msg.setDestinationEntity(93U);
    msg.utc_time = 0.6664550747030221;
    msg.reason = 197U;

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
    msg.setTimeStamp(0.9221780592478803);
    msg.setSource(42892U);
    msg.setSourceEntity(190U);
    msg.setDestination(65475U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.21599199565689708;
    msg.reason = 94U;

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
    msg.setTimeStamp(0.17146510328041298);
    msg.setSource(10660U);
    msg.setSourceEntity(88U);
    msg.setDestination(24448U);
    msg.setDestinationEntity(142U);
    msg.utc_time = 0.22594730409975372;
    msg.reason = 208U;

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
    msg.setTimeStamp(0.7558721648251494);
    msg.setSource(13127U);
    msg.setSourceEntity(248U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(18U);
    msg.id = 42U;
    msg.range = 0.7195169630961997;
    msg.acceptance = 16U;

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
    msg.setTimeStamp(0.954523626188312);
    msg.setSource(9379U);
    msg.setSourceEntity(220U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(130U);
    msg.id = 177U;
    msg.range = 0.3143135696929391;
    msg.acceptance = 4U;

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
    msg.setTimeStamp(0.49599558178975467);
    msg.setSource(5727U);
    msg.setSourceEntity(158U);
    msg.setDestination(39554U);
    msg.setDestinationEntity(212U);
    msg.id = 202U;
    msg.range = 0.593491518758146;
    msg.acceptance = 80U;

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
    msg.setTimeStamp(0.6938563061901443);
    msg.setSource(22239U);
    msg.setSourceEntity(6U);
    msg.setDestination(51935U);
    msg.setDestinationEntity(115U);
    msg.type = 130U;
    msg.reason = 164U;
    msg.value = 0.17473554970748817;
    msg.timestep = 0.3046680492339784;

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
    msg.setTimeStamp(0.1133084514038033);
    msg.setSource(36887U);
    msg.setSourceEntity(34U);
    msg.setDestination(57728U);
    msg.setDestinationEntity(98U);
    msg.type = 4U;
    msg.reason = 75U;
    msg.value = 0.8607784554986893;
    msg.timestep = 0.22927954589787958;

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
    msg.setTimeStamp(0.07014464938680143);
    msg.setSource(2443U);
    msg.setSourceEntity(188U);
    msg.setDestination(16355U);
    msg.setDestinationEntity(61U);
    msg.type = 122U;
    msg.reason = 170U;
    msg.value = 0.4237130421290155;
    msg.timestep = 0.44709563955635356;

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
    msg.setTimeStamp(0.3094167726939432);
    msg.setSource(8254U);
    msg.setSourceEntity(174U);
    msg.setDestination(6172U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.8063758883657463);
    msg.setSource(62678U);
    msg.setSourceEntity(31U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.5169370028470359);
    msg.setSource(53961U);
    msg.setSourceEntity(243U);
    msg.setDestination(57451U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.543028382156636);
    msg.setSource(27483U);
    msg.setSourceEntity(17U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VEGFELRQRRBQJFTYXKADXYNIIJGYTTEDCAVGLIVOOMVMFQQERQFUYWCMJEWODBISZPXIYYAJKHSOBSYLXEFJKKMNHLCCVUFOTKVLCJSAYJRCQZKRSEAWUANRDZHTOAPUSRVLZGXSHOAUCJXKIFMZTNVGTLBQBCBBRPBIQMWTXHAQUKUZDSHOUHNTMNWEPPNMPHVJLDGKPZVUINOCZNXXTIL");
    tmp_msg_0.lat = 0.1050357118021028;
    tmp_msg_0.lon = 0.8209164587587678;
    tmp_msg_0.depth = 0.024110005607580254;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 101U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.14694851323875613;
    msg.y = 0.3810771346191111;
    msg.var_x = 0.3882709582927054;
    msg.var_y = 0.0031168173755299344;
    msg.distance = 0.04054127089883275;

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
    msg.setTimeStamp(0.19628539533419553);
    msg.setSource(37011U);
    msg.setSourceEntity(129U);
    msg.setDestination(27809U);
    msg.setDestinationEntity(31U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FRJZSHEFRIGACEJKRVJZCXRFWFXDOAUAOJTIHWSBGXOHBRPHFIMKNUVFXYBPYQPPERLMTBCMHYYXVBGTUXLTSHLCTAOFBOAGDDIUZULVZVFSXVXONYYZBPOCQZPNRWREKRBMJATWJEYACGITSUCKQQEDWNNVNEKM");
    tmp_msg_0.lat = 0.8260765418892073;
    tmp_msg_0.lon = 0.6483609611630758;
    tmp_msg_0.depth = 0.25007833245175115;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 44U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.336341147534684;
    msg.y = 0.42832397458848714;
    msg.var_x = 0.7588399712744404;
    msg.var_y = 0.056148066202435065;
    msg.distance = 0.1014849055903766;

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
    msg.setTimeStamp(0.1984532288512093);
    msg.setSource(37487U);
    msg.setSourceEntity(174U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(222U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UDXTTZTGFSJYLQMCKXCWHITJFZRCEIHCEXOGEYHBVNZFRKIVCRMWCQZDBSLNMBNKUJMUXLLGPNHQZMGOJMDU");
    tmp_msg_0.lat = 0.9122644022849815;
    tmp_msg_0.lon = 0.8505980083484804;
    tmp_msg_0.depth = 0.5982665389558549;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 136U;
    tmp_msg_0.transponder_delay = 192U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7292282034586046;
    msg.y = 0.9584719124519792;
    msg.var_x = 0.653342603734124;
    msg.var_y = 0.9195096658172415;
    msg.distance = 0.9033571273249514;

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
    msg.setTimeStamp(0.2661133356134653);
    msg.setSource(14476U);
    msg.setSourceEntity(156U);
    msg.setDestination(5338U);
    msg.setDestinationEntity(3U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.7537850972975964);
    msg.setSource(53698U);
    msg.setSourceEntity(216U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(170U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.6021993049558931);
    msg.setSource(60085U);
    msg.setSourceEntity(121U);
    msg.setDestination(32727U);
    msg.setDestinationEntity(177U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.6882914688797024);
    msg.setSource(52776U);
    msg.setSourceEntity(76U);
    msg.setDestination(25603U);
    msg.setDestinationEntity(40U);
    msg.x = 0.29965351019794517;
    msg.y = 0.9047952601662561;
    msg.z = 0.3522418559176368;

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
    msg.setTimeStamp(0.8006235379663851);
    msg.setSource(18382U);
    msg.setSourceEntity(223U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(57U);
    msg.x = 0.5472875392823581;
    msg.y = 0.8228734897581926;
    msg.z = 0.5167698641356269;

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
    msg.setTimeStamp(0.9726500501582385);
    msg.setSource(11755U);
    msg.setSourceEntity(208U);
    msg.setDestination(3807U);
    msg.setDestinationEntity(187U);
    msg.x = 0.9162275535439118;
    msg.y = 0.9543700045650261;
    msg.z = 0.6839106079868911;

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
    msg.setTimeStamp(0.3191986791700807);
    msg.setSource(49938U);
    msg.setSourceEntity(178U);
    msg.setDestination(30626U);
    msg.setDestinationEntity(45U);
    msg.value = 0.5374550728892898;

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
    msg.setTimeStamp(0.7868888760931901);
    msg.setSource(6584U);
    msg.setSourceEntity(126U);
    msg.setDestination(6884U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7240005624926669;

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
    msg.setTimeStamp(0.6736519019310654);
    msg.setSource(19206U);
    msg.setSourceEntity(86U);
    msg.setDestination(64947U);
    msg.setDestinationEntity(223U);
    msg.value = 0.4167195117070257;

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
    msg.setTimeStamp(0.8725352759687103);
    msg.setSource(11563U);
    msg.setSourceEntity(74U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8254630401133481;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.6879591941461753);
    msg.setSource(33518U);
    msg.setSourceEntity(118U);
    msg.setDestination(59656U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9696410496508321;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.24763714884324217);
    msg.setSource(41561U);
    msg.setSourceEntity(220U);
    msg.setDestination(840U);
    msg.setDestinationEntity(166U);
    msg.value = 0.09166850558050654;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.5429179808093204);
    msg.setSource(4318U);
    msg.setSourceEntity(211U);
    msg.setDestination(3194U);
    msg.setDestinationEntity(212U);
    msg.value = 0.29082753137656536;
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
    msg.setTimeStamp(0.030801403403603933);
    msg.setSource(62921U);
    msg.setSourceEntity(200U);
    msg.setDestination(13241U);
    msg.setDestinationEntity(107U);
    msg.value = 0.5479450301039275;
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
    msg.setTimeStamp(0.8805403401659994);
    msg.setSource(29709U);
    msg.setSourceEntity(214U);
    msg.setDestination(4718U);
    msg.setDestinationEntity(253U);
    msg.value = 0.04752389125126022;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.17205409922137782);
    msg.setSource(4289U);
    msg.setSourceEntity(51U);
    msg.setDestination(39841U);
    msg.setDestinationEntity(34U);
    msg.value = 0.3061894228099381;

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
    msg.setTimeStamp(0.2672121026678276);
    msg.setSource(41724U);
    msg.setSourceEntity(110U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(136U);
    msg.value = 0.20423706417958598;

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
    msg.setTimeStamp(0.1906211208394123);
    msg.setSource(61650U);
    msg.setSourceEntity(238U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(194U);
    msg.value = 0.06467307995287352;

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
    msg.setTimeStamp(0.14827578006128317);
    msg.setSource(36908U);
    msg.setSourceEntity(109U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(98U);
    msg.value = 0.3253790089819034;

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
    msg.setTimeStamp(0.6101927269122702);
    msg.setSource(5036U);
    msg.setSourceEntity(180U);
    msg.setDestination(31784U);
    msg.setDestinationEntity(158U);
    msg.value = 0.40494700400151673;

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
    msg.setTimeStamp(0.19383859127282932);
    msg.setSource(44141U);
    msg.setSourceEntity(28U);
    msg.setDestination(38906U);
    msg.setDestinationEntity(134U);
    msg.value = 0.5455237136785746;

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
    msg.setTimeStamp(0.6887317486248562);
    msg.setSource(54154U);
    msg.setSourceEntity(1U);
    msg.setDestination(18315U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7894334066953912;

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
    msg.setTimeStamp(0.7426948674161763);
    msg.setSource(35338U);
    msg.setSourceEntity(111U);
    msg.setDestination(19038U);
    msg.setDestinationEntity(85U);
    msg.value = 0.9395045885110686;

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
    msg.setTimeStamp(0.12391570919006656);
    msg.setSource(17283U);
    msg.setSourceEntity(235U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(29U);
    msg.value = 0.537157079197606;

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
    msg.setTimeStamp(0.7826001368774904);
    msg.setSource(9736U);
    msg.setSourceEntity(67U);
    msg.setDestination(29740U);
    msg.setDestinationEntity(50U);
    msg.path_ref = 819160832U;
    msg.start_lat = 0.20293950026210328;
    msg.start_lon = 0.27926306234401077;
    msg.start_z = 0.9515092832016915;
    msg.start_z_units = 160U;
    msg.end_lat = 0.3099581175523056;
    msg.end_lon = 0.05703882529741744;
    msg.end_z = 0.4594557378652727;
    msg.end_z_units = 98U;
    msg.speed = 0.7802722308586751;
    msg.speed_units = 102U;
    msg.lradius = 0.11877063665501775;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.25583672392900125);
    msg.setSource(42180U);
    msg.setSourceEntity(107U);
    msg.setDestination(16476U);
    msg.setDestinationEntity(178U);
    msg.path_ref = 1403427819U;
    msg.start_lat = 0.8545960168574065;
    msg.start_lon = 0.31255647487314064;
    msg.start_z = 0.474231517155005;
    msg.start_z_units = 127U;
    msg.end_lat = 0.6086752173275778;
    msg.end_lon = 0.7428734864084653;
    msg.end_z = 0.33988931093116137;
    msg.end_z_units = 230U;
    msg.speed = 0.4150198806989187;
    msg.speed_units = 55U;
    msg.lradius = 0.506736507871142;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.8817077939235474);
    msg.setSource(16952U);
    msg.setSourceEntity(20U);
    msg.setDestination(31185U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3491098310U;
    msg.start_lat = 0.14304877311698172;
    msg.start_lon = 0.6283379039928464;
    msg.start_z = 0.8048603627873733;
    msg.start_z_units = 17U;
    msg.end_lat = 0.4604838403753403;
    msg.end_lon = 0.6969554957672904;
    msg.end_z = 0.6878620030522086;
    msg.end_z_units = 185U;
    msg.speed = 0.9546026147636573;
    msg.speed_units = 202U;
    msg.lradius = 0.5926219083158991;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.8342433030672703);
    msg.setSource(3446U);
    msg.setSourceEntity(231U);
    msg.setDestination(289U);
    msg.setDestinationEntity(151U);
    msg.x = 0.15122283206296494;
    msg.y = 0.0629048761907981;
    msg.z = 0.45775387817478863;
    msg.k = 0.2570120735152581;
    msg.m = 0.939212862635954;
    msg.n = 0.19349010335361527;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.3455417585349231);
    msg.setSource(31305U);
    msg.setSourceEntity(72U);
    msg.setDestination(30233U);
    msg.setDestinationEntity(43U);
    msg.x = 0.45542947106185483;
    msg.y = 0.6776407081822895;
    msg.z = 0.7729046436295172;
    msg.k = 0.5274312599549597;
    msg.m = 0.7808875944545262;
    msg.n = 0.7118410377119527;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.40028205027597163);
    msg.setSource(9623U);
    msg.setSourceEntity(233U);
    msg.setDestination(8359U);
    msg.setDestinationEntity(108U);
    msg.x = 0.453443018073179;
    msg.y = 0.43258704372644596;
    msg.z = 0.2722799296052856;
    msg.k = 0.9760378934939485;
    msg.m = 0.7472573425886223;
    msg.n = 0.6256467926265199;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.4057535966769473);
    msg.setSource(61972U);
    msg.setSourceEntity(161U);
    msg.setDestination(46664U);
    msg.setDestinationEntity(110U);
    msg.value = 0.3948816076967905;

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
    msg.setTimeStamp(0.0059575657724084685);
    msg.setSource(53981U);
    msg.setSourceEntity(119U);
    msg.setDestination(6430U);
    msg.setDestinationEntity(31U);
    msg.value = 0.27730747570135117;

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
    msg.setTimeStamp(0.19978366836827932);
    msg.setSource(24209U);
    msg.setSourceEntity(193U);
    msg.setDestination(38923U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8943238925275889;

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
    msg.setTimeStamp(0.3801550482504611);
    msg.setSource(22264U);
    msg.setSourceEntity(13U);
    msg.setDestination(63023U);
    msg.setDestinationEntity(166U);
    msg.u = 0.8083843055734852;
    msg.v = 0.06723908166599324;
    msg.w = 0.2636136546151585;
    msg.p = 0.18129637646476005;
    msg.q = 0.7178236316894614;
    msg.r = 0.9754122684227958;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.28248840868208636);
    msg.setSource(29908U);
    msg.setSourceEntity(37U);
    msg.setDestination(42928U);
    msg.setDestinationEntity(253U);
    msg.u = 0.8561080932850829;
    msg.v = 0.44432306665990606;
    msg.w = 0.21240924744221001;
    msg.p = 0.7799449931596388;
    msg.q = 0.6265816779394985;
    msg.r = 0.997435717682043;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.44133475197578953);
    msg.setSource(63300U);
    msg.setSourceEntity(157U);
    msg.setDestination(26546U);
    msg.setDestinationEntity(175U);
    msg.u = 0.7983955856677176;
    msg.v = 0.39238256811390093;
    msg.w = 0.06595541294012108;
    msg.p = 0.4155279474863188;
    msg.q = 0.37271183896765636;
    msg.r = 0.36176955771112673;
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
    msg.setTimeStamp(0.41923339888605937);
    msg.setSource(56873U);
    msg.setSourceEntity(245U);
    msg.setDestination(29896U);
    msg.setDestinationEntity(198U);
    msg.path_ref = 2987144261U;
    msg.start_lat = 0.878053202275092;
    msg.start_lon = 0.7084436257647234;
    msg.start_z = 0.2486862128853805;
    msg.start_z_units = 78U;
    msg.end_lat = 0.14920720091070694;
    msg.end_lon = 0.38239902472521503;
    msg.end_z = 0.2330638351480584;
    msg.end_z_units = 40U;
    msg.lradius = 0.742836899023291;
    msg.flags = 143U;
    msg.x = 0.3762112500517697;
    msg.y = 0.10911708846891266;
    msg.z = 0.6812005614315513;
    msg.vx = 0.2095239002243401;
    msg.vy = 0.04594285928814401;
    msg.vz = 0.9958343277960142;
    msg.course_error = 0.9901665918751619;
    msg.eta = 65387U;

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
    msg.setTimeStamp(0.15842299854840103);
    msg.setSource(33218U);
    msg.setSourceEntity(179U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(224U);
    msg.path_ref = 1984009476U;
    msg.start_lat = 0.12495490777933993;
    msg.start_lon = 0.5012797500291648;
    msg.start_z = 0.5564005510062179;
    msg.start_z_units = 109U;
    msg.end_lat = 0.8323885216420585;
    msg.end_lon = 0.04886344938311726;
    msg.end_z = 0.7340449158004398;
    msg.end_z_units = 43U;
    msg.lradius = 0.9941403260049051;
    msg.flags = 245U;
    msg.x = 0.6298936731395934;
    msg.y = 0.8713674668262207;
    msg.z = 0.3308644773839746;
    msg.vx = 0.28658076861279713;
    msg.vy = 0.09281329686082307;
    msg.vz = 0.44982000121721255;
    msg.course_error = 0.12386916460497877;
    msg.eta = 48049U;

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
    msg.setTimeStamp(0.5947501674191003);
    msg.setSource(59764U);
    msg.setSourceEntity(211U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 868132758U;
    msg.start_lat = 0.3427009351548411;
    msg.start_lon = 0.5003652746509358;
    msg.start_z = 0.0257314213447265;
    msg.start_z_units = 219U;
    msg.end_lat = 0.49546793456068106;
    msg.end_lon = 0.4534563918278455;
    msg.end_z = 0.21882647569222136;
    msg.end_z_units = 226U;
    msg.lradius = 0.5931491065349404;
    msg.flags = 135U;
    msg.x = 0.5911750306802119;
    msg.y = 0.5046596302899821;
    msg.z = 0.35584956898734943;
    msg.vx = 0.7112010267536114;
    msg.vy = 0.8552118129429923;
    msg.vz = 0.9945435283471515;
    msg.course_error = 0.9127829539119793;
    msg.eta = 39455U;

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
    msg.setTimeStamp(0.27637310172927654);
    msg.setSource(33168U);
    msg.setSourceEntity(238U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(48U);
    msg.k = 0.12947869395515332;
    msg.m = 0.15635077197592895;
    msg.n = 0.3116941058421081;

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
    msg.setTimeStamp(0.5441708584650924);
    msg.setSource(28820U);
    msg.setSourceEntity(109U);
    msg.setDestination(21568U);
    msg.setDestinationEntity(143U);
    msg.k = 0.8344892289575154;
    msg.m = 0.14781355840194854;
    msg.n = 0.4427087759894276;

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
    msg.setTimeStamp(0.3800722742234658);
    msg.setSource(9351U);
    msg.setSourceEntity(164U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(37U);
    msg.k = 0.35497301734770637;
    msg.m = 0.2906417858726842;
    msg.n = 0.2845015123708047;

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
    msg.setTimeStamp(0.7816228715549582);
    msg.setSource(41665U);
    msg.setSourceEntity(101U);
    msg.setDestination(10307U);
    msg.setDestinationEntity(10U);
    msg.p = 0.7697012778272793;
    msg.i = 0.029154394874325362;
    msg.d = 0.8533791317760917;
    msg.a = 0.5078147245824356;

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
    msg.setTimeStamp(0.35005568904353923);
    msg.setSource(62174U);
    msg.setSourceEntity(193U);
    msg.setDestination(49967U);
    msg.setDestinationEntity(45U);
    msg.p = 0.6613246451760528;
    msg.i = 0.947459485512607;
    msg.d = 0.7585143312570112;
    msg.a = 0.874090162965609;

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
    msg.setTimeStamp(0.34269759918171505);
    msg.setSource(59608U);
    msg.setSourceEntity(38U);
    msg.setDestination(46458U);
    msg.setDestinationEntity(58U);
    msg.p = 0.5849461328354603;
    msg.i = 0.8337898569795152;
    msg.d = 0.10907406175959089;
    msg.a = 0.7500931416491723;

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
    msg.setTimeStamp(0.8838651671838065);
    msg.setSource(11207U);
    msg.setSourceEntity(115U);
    msg.setDestination(40958U);
    msg.setDestinationEntity(42U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.5102144826861263);
    msg.setSource(11344U);
    msg.setSourceEntity(108U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(180U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.00921851453177569);
    msg.setSource(1825U);
    msg.setSourceEntity(49U);
    msg.setDestination(40268U);
    msg.setDestinationEntity(227U);
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
    msg.setTimeStamp(0.06244393822188643);
    msg.setSource(64485U);
    msg.setSourceEntity(119U);
    msg.setDestination(56869U);
    msg.setDestinationEntity(176U);
    msg.timeout = 30436U;
    msg.lat = 0.11817506465545391;
    msg.lon = 0.3762151606195614;
    msg.z = 0.9855707529686524;
    msg.z_units = 101U;
    msg.speed = 0.39357014171333216;
    msg.speed_units = 84U;
    msg.roll = 0.4788153412189726;
    msg.pitch = 0.04684026314659828;
    msg.yaw = 0.43926162039564;
    msg.custom.assign("KPTOORLJLNTHPLEAEBVABBFYNXPDCOOUNSFWDNEYUCWEYYEUCXGIWIYZRVJSIGQRYVZOXJRWJCALVWTDXRMMZKMEORDFGUXATIHGMBFQCGKXSBCWAQIIHRHBXRONMDPKHIEKUMDLTNCCTVNPHCGQZSLOSNIZBKBGAJQESJTEQODTHMFYZVAFRKYULGSXAJJVFFTIAWWGOSFQHQCHDKZJDSEKPVIPSZTZA");

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
    msg.setTimeStamp(0.5004771609662146);
    msg.setSource(23141U);
    msg.setSourceEntity(243U);
    msg.setDestination(43492U);
    msg.setDestinationEntity(161U);
    msg.timeout = 5287U;
    msg.lat = 0.5429523844302916;
    msg.lon = 0.884814394623457;
    msg.z = 0.38385172519322897;
    msg.z_units = 93U;
    msg.speed = 0.8833910374678793;
    msg.speed_units = 219U;
    msg.roll = 0.12350797022523963;
    msg.pitch = 0.3078562229352326;
    msg.yaw = 0.33622570473129965;
    msg.custom.assign("MTRJGNHNRYWFJRDQUFTXKAHEPVGQNLAUQUXMLEBIVTNXVFLYMGVBWFHSKCOPQKSUIVDXAGMVRZIDGBVTPAFJXQFETTLVGWPTRCHTUYBQHWGOIKOIXZWAOAGYOCYYSGOPZBNLMYYXZXNMUCLMKZ");

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
    msg.setTimeStamp(0.6883614643174053);
    msg.setSource(51117U);
    msg.setSourceEntity(229U);
    msg.setDestination(30334U);
    msg.setDestinationEntity(31U);
    msg.timeout = 47968U;
    msg.lat = 0.30015512361666496;
    msg.lon = 0.8100567840104234;
    msg.z = 0.4995002133274884;
    msg.z_units = 126U;
    msg.speed = 0.6051441953398514;
    msg.speed_units = 248U;
    msg.roll = 0.19815763583659562;
    msg.pitch = 0.12979579411219488;
    msg.yaw = 0.09741975753862486;
    msg.custom.assign("ULJRLTOXEHWPWVWKELEXIPHNRFFAMCIQQFXIZGRUPOPSHGDIJWFHNZBWUELKVYUCOELQOSIEJ");

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
    msg.setTimeStamp(0.8509086389767112);
    msg.setSource(36488U);
    msg.setSourceEntity(57U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(233U);
    msg.timeout = 14619U;
    msg.lat = 0.9293151552601283;
    msg.lon = 0.22210159370096494;
    msg.z = 0.4383231935180024;
    msg.z_units = 219U;
    msg.speed = 0.06970739887534205;
    msg.speed_units = 65U;
    msg.duration = 36575U;
    msg.radius = 0.7489899527822959;
    msg.flags = 210U;
    msg.custom.assign("GTCZJCVAGNTBSKPPMXJEZYOAKEXPCTCKSNDXJZLQJLZCHXDCPNHLQDFIHIFKVAWIMDIWFAVEDNLKYKDGPKKQQMQBDXRVACGIMPNPXYABBNVTVNWFWFUTVJYMKTOENFYTJXUUZHCDMBCUBTJFIVNYOPJZSYDMIHSARSAETRXZSZPNBAEFRUBUEMUQLBBKMIRSULGOWGWUCWLVHTFSQGRWEOQQGHJOHYOUIFRGPHJROXWZLRLVSYDE");

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
    msg.setTimeStamp(0.9133795452167903);
    msg.setSource(57738U);
    msg.setSourceEntity(208U);
    msg.setDestination(17537U);
    msg.setDestinationEntity(156U);
    msg.timeout = 5584U;
    msg.lat = 0.8175741295554086;
    msg.lon = 0.9621689155303161;
    msg.z = 0.3287428856916328;
    msg.z_units = 20U;
    msg.speed = 0.9335337860272962;
    msg.speed_units = 75U;
    msg.duration = 53235U;
    msg.radius = 0.45770877474188365;
    msg.flags = 47U;
    msg.custom.assign("DEXNYDOFPAHLBHJLLMUIGCRKCSVWDBAEVGHWTNYSONKUGCBCLEELTMSOCXIJCJQUHJTNZTGEZMZPFSZWQESOATTQYKAFDLZSEVBVYSDBCYKEXMZGEBIFQPONDAIWTGCPDVIJRPXZRVAHPUAQXPSXLMNKFPSWWRL");

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
    msg.setTimeStamp(0.4733972460917234);
    msg.setSource(8887U);
    msg.setSourceEntity(209U);
    msg.setDestination(17963U);
    msg.setDestinationEntity(7U);
    msg.timeout = 32654U;
    msg.lat = 0.9844792832359026;
    msg.lon = 0.5319067630296125;
    msg.z = 0.11621608815678586;
    msg.z_units = 23U;
    msg.speed = 0.8723605434094903;
    msg.speed_units = 61U;
    msg.duration = 59758U;
    msg.radius = 0.009121362924155552;
    msg.flags = 61U;
    msg.custom.assign("HNCSTKVRVBFJXZJISZGZTLNDQSIISBESMAMJZSHAQEQKEZMKHFVANXLYT");

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
    msg.setTimeStamp(0.4267892954244369);
    msg.setSource(44242U);
    msg.setSourceEntity(58U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("DDJPBEPRHBONOICSSWANZNHXGSRLLAOOY");

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
    msg.setTimeStamp(0.4860329840430755);
    msg.setSource(9191U);
    msg.setSourceEntity(200U);
    msg.setDestination(8852U);
    msg.setDestinationEntity(93U);
    msg.custom.assign("RMDJCEEFHLAUGOKUJYGVNBIPPMFHSDLQUKNEVIAAACSDVGTWKBDQTCTHJEZIHQRNJGNHASQSZEATUYZHVWSXMZBKPMVFHITDBSYANSWZCXDXENXKYUYZPWMOKFWWORJVROBMKQYFTXEGNRJSTPNLYUEJRKMNGOAGQEZZPCOILIIBVCWJXUAGLRGUHLKQDWFUPWCLQDDHWYNDUBAFQJMYPMLXLXLOVTIGFSBTEPOZPBCVCKXOCRXHZBQFVMI");

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
    msg.setTimeStamp(0.19021219555483082);
    msg.setSource(15098U);
    msg.setSourceEntity(250U);
    msg.setDestination(38260U);
    msg.setDestinationEntity(4U);
    msg.custom.assign("VZFAFLTDRZKKQECYYUAFAXSSNENSAUUJLINMQHLYPWKPBACRUFHTNJGALKYJECBZMPRYFEKLMXVOGOMWXGBETSDNQXJLIRMHKOFMDOETTASZOWZVIHUGCCIONNBQWJQJXMBIIKYNDPMAKCDTAPWPEBCGKWGWNTIVGGJLCMUDTSQWCPLHXVTUFXZD");

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
    msg.setTimeStamp(0.6244786418158677);
    msg.setSource(21637U);
    msg.setSourceEntity(171U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(120U);
    msg.timeout = 35625U;
    msg.lat = 0.503717576591058;
    msg.lon = 0.8734022855948874;
    msg.z = 0.5514008606873756;
    msg.z_units = 213U;
    msg.duration = 47075U;
    msg.speed = 0.14029075397058755;
    msg.speed_units = 183U;
    msg.type = 155U;
    msg.radius = 0.4740015173886345;
    msg.length = 0.1437286654298433;
    msg.bearing = 0.6818553813258427;
    msg.direction = 18U;
    msg.custom.assign("BUUSIQSKBWTQSOGVTMOWCJJYABPZGKXTOWMIDBNVUMYRGRSEOAWGMEZINVXYHXPAJLAHNZSGRROADFDZUWBLOAXMECFN");

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
    msg.setTimeStamp(0.5813303225307397);
    msg.setSource(54401U);
    msg.setSourceEntity(140U);
    msg.setDestination(30531U);
    msg.setDestinationEntity(236U);
    msg.timeout = 44974U;
    msg.lat = 0.1590865956214471;
    msg.lon = 0.3079854512545942;
    msg.z = 0.1435709914365455;
    msg.z_units = 229U;
    msg.duration = 10754U;
    msg.speed = 0.5580391660862395;
    msg.speed_units = 226U;
    msg.type = 237U;
    msg.radius = 0.1661059966921936;
    msg.length = 0.45774629196137107;
    msg.bearing = 0.21172793821989966;
    msg.direction = 91U;
    msg.custom.assign("XPVVHOMORCQDDKYUJBADLGCALDFAOUYDYELOKRWCTNHENENCXAWXSCURBUXZRFCYBURKQJFYFMHKXYITZWVIVYAIVQQYJAONWYCUHJONGRUGIBKSKKMDPHJGLMWLPIQBJTISUDXEHSZTFOSCVXZEHJSBUZZWTVPVCTKDNTFMBHFWOVGMALNTWPLGRQESN");

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
    msg.setTimeStamp(0.6262721030910237);
    msg.setSource(48133U);
    msg.setSourceEntity(217U);
    msg.setDestination(20850U);
    msg.setDestinationEntity(170U);
    msg.timeout = 52482U;
    msg.lat = 0.32900693560799654;
    msg.lon = 0.8507458580419582;
    msg.z = 0.18165302581138731;
    msg.z_units = 101U;
    msg.duration = 12424U;
    msg.speed = 0.996469108597706;
    msg.speed_units = 103U;
    msg.type = 121U;
    msg.radius = 0.6181635188363249;
    msg.length = 0.3584440741959106;
    msg.bearing = 0.7436651281323069;
    msg.direction = 216U;
    msg.custom.assign("ACBVOYTSZLMNWSVEXRXBVOGMTRNKHZSOWHGSWIQFHRTGQLNDTNGUYDBFWBTQLOQKAZZLFBYNBIMOLKBTSMARXUHFNODUWVIPZAUXZCFFCPYCKELMMYCSXPNSOVUBARDEJNBMFJHDDCESZGRXRLWJYZEMJWRVIDQWGUJLNETCQMTVIEJHMJYUQFIAH");

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
    msg.setTimeStamp(0.2538437089472072);
    msg.setSource(42786U);
    msg.setSourceEntity(131U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(233U);
    msg.duration = 57982U;
    msg.custom.assign("LHSIUPXHLKOMMVIRHJGBPJRCXXUJVYHYGRMVDXFPQWNVDJWTWBBVPKIYEEWXHLNTYCRBUUAPZJSSDBEQOYIHHQEUKEJYYYMGATGMYMKPQHBVTFTTLMNBIVQDNSJCPMLJQUUQFAASORZCGLNZCAKEKCPGNSYAHAFRIOSENKZXOKBCHXRFULDOFTBDZSAXOQXO");

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
    msg.setTimeStamp(0.38856423179166466);
    msg.setSource(13833U);
    msg.setSourceEntity(78U);
    msg.setDestination(40492U);
    msg.setDestinationEntity(8U);
    msg.duration = 52697U;
    msg.custom.assign("GWLLOJZSMZFBHRKVBANUKPTQ");

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
    msg.setTimeStamp(0.7086798781058491);
    msg.setSource(38126U);
    msg.setSourceEntity(38U);
    msg.setDestination(30497U);
    msg.setDestinationEntity(233U);
    msg.duration = 38183U;
    msg.custom.assign("DKSZPEZPARHAHXZYTMPCHGGXNWEYZQFTEMOKUJDWSWZGLMRNKUPCHUD");

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
    msg.setTimeStamp(0.06574175888238565);
    msg.setSource(27508U);
    msg.setSourceEntity(245U);
    msg.setDestination(27968U);
    msg.setDestinationEntity(168U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.369173831825791;
    msg.control.set(tmp_msg_0);
    msg.duration = 35071U;
    msg.custom.assign("KTLTVAUGSIATLSAYUQWFLBIFMNCLBZJYMEVAYSBOHPFNFCNORBMTEXWDSKSZRWSFNTREOLOQVSKVUEXRPCKBZBWKRFWEJXNCCHCUVXETIMSDCFDXPCJENGIARIBLYRLWPGZUMGYQMYWQXQASIKTGPSKZHZTUQDAIQAUEJJWUFCOLJOMKEHDROZHWPHXKXGVDPQVDMIHONVGYAXEVDZIGJYDYJBLJBLGOIQUWTNQMTZMZ");

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
    msg.setTimeStamp(0.07852101994610483);
    msg.setSource(50359U);
    msg.setSourceEntity(249U);
    msg.setDestination(37990U);
    msg.setDestinationEntity(65U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7751939510673641;
    msg.control.set(tmp_msg_0);
    msg.duration = 18625U;
    msg.custom.assign("JDNDNJTBLPMTRJBZPGSITZXWHEMGPRYAIYJPFQWRPMAS");

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
    msg.setTimeStamp(0.5893160365055587);
    msg.setSource(43401U);
    msg.setSourceEntity(179U);
    msg.setDestination(59043U);
    msg.setDestinationEntity(151U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.603906210381938;
    tmp_msg_0.z_units = 179U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11773U;
    msg.custom.assign("RICKILQTJSBTRKFXHEUVBXQMZQDSLKGJLECTOSODN");

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
    msg.setTimeStamp(0.07073399099697675);
    msg.setSource(2590U);
    msg.setSourceEntity(253U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(198U);
    msg.timeout = 56674U;
    msg.lat = 0.9348448460377627;
    msg.lon = 0.7148794842655707;
    msg.z = 0.7596252471516475;
    msg.z_units = 228U;
    msg.speed = 0.19175591489145094;
    msg.speed_units = 60U;
    msg.bearing = 0.4380706022713773;
    msg.cross_angle = 0.3548023888028933;
    msg.width = 0.8279818972704158;
    msg.length = 0.06346651882528109;
    msg.hstep = 0.10725382560660679;
    msg.coff = 57U;
    msg.alternation = 110U;
    msg.flags = 99U;
    msg.custom.assign("FBFEPMEZJTPIUFCQFZVVGNCRKBGZHXGX");

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
    msg.setTimeStamp(0.6536994201161368);
    msg.setSource(31123U);
    msg.setSourceEntity(185U);
    msg.setDestination(50721U);
    msg.setDestinationEntity(145U);
    msg.timeout = 9002U;
    msg.lat = 0.473433717397472;
    msg.lon = 0.8257541322461044;
    msg.z = 0.13147661784718834;
    msg.z_units = 155U;
    msg.speed = 0.27948992930315575;
    msg.speed_units = 234U;
    msg.bearing = 0.3729643799775806;
    msg.cross_angle = 0.3201364325195529;
    msg.width = 0.11679365104894646;
    msg.length = 0.5399177278806474;
    msg.hstep = 0.647993387612944;
    msg.coff = 241U;
    msg.alternation = 8U;
    msg.flags = 245U;
    msg.custom.assign("PAGUYOZSSCCZKVPCWUQQIWAWMXQQJKAMOIDHGTFBPPBJGVMRCFYRLJSMHCRLIELNVWUKISBKIEUYZEZTBSERHAWRFHFXTTNWGKIQCJXOPYTANLKZEHCMNXBTBNQSYMDAHQIUZVTQHMUWFFHDLPYJFKAIGLDEXDUZDRGCSJ");

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
    msg.setTimeStamp(0.3474848740695853);
    msg.setSource(29557U);
    msg.setSourceEntity(110U);
    msg.setDestination(35750U);
    msg.setDestinationEntity(115U);
    msg.timeout = 44908U;
    msg.lat = 0.5363903304779444;
    msg.lon = 0.6804169356576163;
    msg.z = 0.03224852406783907;
    msg.z_units = 60U;
    msg.speed = 0.6502891079751523;
    msg.speed_units = 102U;
    msg.bearing = 0.25441228349006206;
    msg.cross_angle = 0.5014997622306983;
    msg.width = 0.2661609004551947;
    msg.length = 0.48818701822242905;
    msg.hstep = 0.894904834729944;
    msg.coff = 43U;
    msg.alternation = 27U;
    msg.flags = 29U;
    msg.custom.assign("LKHGNPGZQWPYUNKNKBZGJNVFVFKRXIVLUJABEDCFROLTOSKLQHTDFIKAYAWSSXTTRJHHXCVR");

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
    msg.setTimeStamp(0.5605780429072443);
    msg.setSource(58619U);
    msg.setSourceEntity(107U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(91U);
    msg.timeout = 31526U;
    msg.lat = 0.11634205852699653;
    msg.lon = 0.7917717323047256;
    msg.z = 0.9821515622798909;
    msg.z_units = 115U;
    msg.speed = 0.9129635855026647;
    msg.speed_units = 183U;
    msg.custom.assign("ZDWRIZOUKWSXSFVMSIPLMAKXSEBCGMHPFZGSYQWJZIAGCPLYMANYSZTIPQCLDPOHERBWMXGJTVXZUMDUAGSZVBLCHHRUQHWVSWPADIKDIKAJAVIJWTXBOYRYYMNNHAOFNCBELAEEHFYOOEPJFQSJUHETCBVBNYACMRGHCKFRCLKNQUJZQJQNLZQXUOXQTDJTISVGT");

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
    msg.setTimeStamp(0.7926427493159115);
    msg.setSource(28481U);
    msg.setSourceEntity(196U);
    msg.setDestination(21561U);
    msg.setDestinationEntity(137U);
    msg.timeout = 22444U;
    msg.lat = 0.6398806450477681;
    msg.lon = 0.302037949934322;
    msg.z = 0.8447236189925044;
    msg.z_units = 97U;
    msg.speed = 0.37198782835264743;
    msg.speed_units = 156U;
    msg.custom.assign("PVDSHVPKGGPPUQFHOQASORIQYUOWELUGTKVIHGKLXRUTYRICERFZNEOSZWNOVYWASVXUUMXFGLRTDWAEQDVIUXCJDUL");

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
    msg.setTimeStamp(0.1079022271354555);
    msg.setSource(5840U);
    msg.setSourceEntity(64U);
    msg.setDestination(40542U);
    msg.setDestinationEntity(215U);
    msg.timeout = 14346U;
    msg.lat = 0.03667331260229734;
    msg.lon = 0.1978501744563076;
    msg.z = 0.2730178632430623;
    msg.z_units = 102U;
    msg.speed = 0.32320437432854143;
    msg.speed_units = 61U;
    msg.custom.assign("PUGZXKDMNHJAZKEPRGMOKWPNYAECJESUDHTXMNLCRYCWCBSYLVO");

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
    msg.setTimeStamp(0.43136684413524884);
    msg.setSource(31595U);
    msg.setSourceEntity(149U);
    msg.setDestination(59878U);
    msg.setDestinationEntity(112U);
    msg.x = 0.26012594013653034;
    msg.y = 0.1328630259851652;
    msg.z = 0.9404564488136823;

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
    msg.setTimeStamp(0.17728683131859235);
    msg.setSource(47772U);
    msg.setSourceEntity(63U);
    msg.setDestination(38435U);
    msg.setDestinationEntity(35U);
    msg.x = 0.19277239420665504;
    msg.y = 0.4275872250673136;
    msg.z = 0.8212183508030454;

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
    msg.setTimeStamp(0.2553344215939387);
    msg.setSource(54529U);
    msg.setSourceEntity(32U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(106U);
    msg.x = 0.09779886033751739;
    msg.y = 0.6627956722132179;
    msg.z = 0.3449750601014212;

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
    msg.setTimeStamp(0.251342109057207);
    msg.setSource(12184U);
    msg.setSourceEntity(244U);
    msg.setDestination(65011U);
    msg.setDestinationEntity(218U);
    msg.timeout = 9879U;
    msg.lat = 0.038956007205815824;
    msg.lon = 0.47546361776883916;
    msg.z = 0.9325175810689321;
    msg.z_units = 107U;
    msg.amplitude = 0.7641897210254706;
    msg.pitch = 0.3370709255847264;
    msg.speed = 0.848118942142251;
    msg.speed_units = 192U;
    msg.custom.assign("XCHBVFKVDLVWZSNKKMDNQAUIEMBAYELPOOQDJQVDVJXFHFYZITGEPNDSB");

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
    msg.setTimeStamp(0.5968365510261022);
    msg.setSource(59046U);
    msg.setSourceEntity(246U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(2U);
    msg.timeout = 17429U;
    msg.lat = 0.0017704298776878291;
    msg.lon = 0.8654760196567607;
    msg.z = 0.6456728093626632;
    msg.z_units = 167U;
    msg.amplitude = 0.9673293132913889;
    msg.pitch = 0.022385784549197485;
    msg.speed = 0.9703846059640723;
    msg.speed_units = 174U;
    msg.custom.assign("NMPWGXBSYZLZJUVECXFBNWQYKSRGPDJJTIBLSVMCYXQZUPZFGFQDDCYMEIABHLDPWGXKGBEVEUDHGAVKSYDTPCAUYJKVFYNJOXEFRZQVRCSJELBTHGVIDDCJDGQMGLMTHFCFAEDMCSTOOUOFLUQCWLKOHEMLNASHKPFNULHIWJBWTQTXJZMJRN");

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
    msg.setTimeStamp(0.9779711547120366);
    msg.setSource(41169U);
    msg.setSourceEntity(83U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(184U);
    msg.timeout = 23384U;
    msg.lat = 0.9011023440500439;
    msg.lon = 0.026555240224002685;
    msg.z = 0.8830993429612937;
    msg.z_units = 34U;
    msg.amplitude = 0.4095646588906122;
    msg.pitch = 0.06323029530142432;
    msg.speed = 0.9712115042572316;
    msg.speed_units = 150U;
    msg.custom.assign("CSVYJZMPDNRXBFBKTXTSWKMFQSFWAXTVDSTORMXGZGBMSXGWLJCKIRAUIHDQOWFCHYRLLSYBIIGDBPKRJOEXYNWVDCOCTEVNVZBJRYVZQQXUUJUPNOFELZQSWTCGJLAOHUERITLMNZGIYPYFOAAUPSHZZJEDHCWZQUDXQEOMSPGICGWMENNEHHNKUIWWKOHFCYQEFOVVQKSQHTKYIPMGTAXRAFBIBGRAUBKKDYLFBMPMLADVE");

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
    msg.setTimeStamp(0.15624135132402694);
    msg.setSource(26270U);
    msg.setSourceEntity(37U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.09761533802286604);
    msg.setSource(1314U);
    msg.setSourceEntity(91U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.8906095334571219);
    msg.setSource(51845U);
    msg.setSourceEntity(253U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.19722364253650593);
    msg.setSource(4593U);
    msg.setSourceEntity(150U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.35664767875420966;
    msg.lon = 0.4367855950495113;
    msg.z = 0.12801460219685978;
    msg.z_units = 209U;
    msg.radius = 0.5836590642826669;
    msg.duration = 58619U;
    msg.speed = 0.24797619231382284;
    msg.speed_units = 34U;
    msg.custom.assign("SSFNUTARRUGZHKDJLPSQLHWBZCVREISLINCVSOIWBEDIDVWYTFPMQQVMZMVVEVOMPKVQXGAQPOBJIOJAWGYKTAC");

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
    msg.setTimeStamp(0.07864664997503301);
    msg.setSource(32542U);
    msg.setSourceEntity(241U);
    msg.setDestination(49819U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.02393176619320958;
    msg.lon = 0.2255977591062831;
    msg.z = 0.7326034069775166;
    msg.z_units = 122U;
    msg.radius = 0.6390641669196495;
    msg.duration = 28960U;
    msg.speed = 0.7224722114468698;
    msg.speed_units = 196U;
    msg.custom.assign("IAEVDWEYMSVCTRLRFQWLTTUMJJXHFGXKODVRSHLMAIEJLCCZFOMZNVWGBZOBCJTGBAELUWGRPMIGXKYQWUXEQPSMDUOADTXBFJHFKNOQLEDXILUUKGQHDVSQNVEPLBZRANZWMQBQFMFHJHKVACOSXXVLDZOYNEBKYSTHMNRRUSEUPVRKIOXITNCIGOSWDIHAJWNUANT");

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
    msg.setTimeStamp(0.5124470747221752);
    msg.setSource(44599U);
    msg.setSourceEntity(106U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.3603016824307719;
    msg.lon = 0.4725175727936386;
    msg.z = 0.005434993686781464;
    msg.z_units = 83U;
    msg.radius = 0.05668735137755265;
    msg.duration = 42410U;
    msg.speed = 0.5153939537770039;
    msg.speed_units = 42U;
    msg.custom.assign("PJFIUNEPYYFFWKDA");

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
    msg.setTimeStamp(0.929346738880993);
    msg.setSource(10284U);
    msg.setSourceEntity(130U);
    msg.setDestination(20403U);
    msg.setDestinationEntity(170U);
    msg.timeout = 61981U;
    msg.flags = 121U;
    msg.lat = 0.09504323001519732;
    msg.lon = 0.5047825451415765;
    msg.start_z = 0.5673211060112019;
    msg.start_z_units = 45U;
    msg.end_z = 0.7711195344490612;
    msg.end_z_units = 239U;
    msg.radius = 0.23534757786835825;
    msg.speed = 0.09993789342080772;
    msg.speed_units = 158U;
    msg.custom.assign("AQSOGZRVYCFX");

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
    msg.setTimeStamp(0.2914706111095362);
    msg.setSource(47461U);
    msg.setSourceEntity(244U);
    msg.setDestination(3491U);
    msg.setDestinationEntity(207U);
    msg.timeout = 58396U;
    msg.flags = 193U;
    msg.lat = 0.4394083642136425;
    msg.lon = 0.6569115088952447;
    msg.start_z = 0.5926154409174044;
    msg.start_z_units = 77U;
    msg.end_z = 0.021699496546100816;
    msg.end_z_units = 27U;
    msg.radius = 0.8027901368442785;
    msg.speed = 0.8135984870168529;
    msg.speed_units = 119U;
    msg.custom.assign("IOYBXMSLGHBIRPCOTAODJZDCICUQJYBCPKNMAEVVAPJCMQPBVRQEBHTLWAZONBFWULEHMEKQQWJPUFK");

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
    msg.setTimeStamp(0.37120734457262416);
    msg.setSource(47153U);
    msg.setSourceEntity(126U);
    msg.setDestination(10820U);
    msg.setDestinationEntity(217U);
    msg.timeout = 24886U;
    msg.flags = 137U;
    msg.lat = 0.19022158156427615;
    msg.lon = 0.7551418936147118;
    msg.start_z = 0.9794585670403158;
    msg.start_z_units = 185U;
    msg.end_z = 0.6602207752003321;
    msg.end_z_units = 130U;
    msg.radius = 0.1051825971657806;
    msg.speed = 0.15484517358219663;
    msg.speed_units = 107U;
    msg.custom.assign("STMNNMCLQDINFQYBQYQACIKXFLUZLDTPWEIKLYSMXTDGXIANRDSEWRUGAVUSCOVXWMEJGHITZECKIQVYLXWSZUKJNQALDGOKPPJTCHOFAGFHITCFLVMHPNRHVBATVURBZKREJGRZUFFWGWMOETZQEVYK");

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
    msg.setTimeStamp(0.7982704349401821);
    msg.setSource(19231U);
    msg.setSourceEntity(233U);
    msg.setDestination(14518U);
    msg.setDestinationEntity(156U);
    msg.timeout = 42155U;
    msg.lat = 0.5959151800055577;
    msg.lon = 0.6464570367333891;
    msg.z = 0.9657882793541525;
    msg.z_units = 228U;
    msg.speed = 0.9495738674488;
    msg.speed_units = 55U;
    msg.custom.assign("MDPUVCYSANXZXCHLEMFZBFZWLZEGZUNOTJZWOTHXTLKMGPPCUCSBAWLAISTTHZNQBEUWILJTDITGLFLMPAYOJMZRCYHHWNZQKPRYMQBPNQBTSDNWFBFUAQWRKYVSKDOGTMCJRVKUOOPQDCSYYIITULVUEFDEZWGYMVVRCRNMQSIDGFNJUXXSPFEJVMKQVJBAERYXLRYVNNIAHFWUKHSBHOGAWOXHJEQDRBVIISPGRXJKXOKKGGAEACIDJFBHX");

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
    msg.setTimeStamp(0.7109672761648592);
    msg.setSource(35605U);
    msg.setSourceEntity(250U);
    msg.setDestination(486U);
    msg.setDestinationEntity(13U);
    msg.timeout = 20402U;
    msg.lat = 0.32293727259024474;
    msg.lon = 0.09617372904178256;
    msg.z = 0.3524494282808639;
    msg.z_units = 24U;
    msg.speed = 0.588247008685072;
    msg.speed_units = 24U;
    msg.custom.assign("WOTWJHAPFAFMOJWNRHTFTSFOUVCTDKLDZQIOXNBDFDLATGNKXYHENWSQBSVPQSXMKKPZJAPVBUKOIULERROGRAQQUJUGVXIZVKCMXGSXODEXTHHSPDHDRZBPKHWFWVEEFVRCKNSYGZYUYMGTNRFBMIVDQQYIZJNKFHGQKDNAPBLMBMZLSTSJAXNO");

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
    msg.setTimeStamp(0.6780606003336719);
    msg.setSource(63321U);
    msg.setSourceEntity(88U);
    msg.setDestination(43692U);
    msg.setDestinationEntity(0U);
    msg.timeout = 20147U;
    msg.lat = 0.6700971956985071;
    msg.lon = 0.42340312071108843;
    msg.z = 0.44546118859879114;
    msg.z_units = 16U;
    msg.speed = 0.30784598149949916;
    msg.speed_units = 21U;
    msg.custom.assign("FDSBILKAFFGJZLEQLPBIHUYWWXTENXGRKOSETYMSQRQNBZLXBSKQVNKCDJQZOPICGZRTOHNIGULNAZYVIESMBYKVATEKNFCWSSICKDXHXAJMRLCXVWTUJUPYAGGOCVTOWNMFAPQSRCGWZ");

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
    msg.setTimeStamp(0.07591465375913875);
    msg.setSource(20081U);
    msg.setSourceEntity(208U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(252U);
    msg.x = 0.002086984734984698;
    msg.y = 0.8213547744661951;
    msg.z = 0.799858377373983;
    msg.t = 0.8893460648541401;

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
    msg.setTimeStamp(0.44872460831375105);
    msg.setSource(4827U);
    msg.setSourceEntity(214U);
    msg.setDestination(59128U);
    msg.setDestinationEntity(213U);
    msg.x = 0.5543569788690391;
    msg.y = 0.7802647435119455;
    msg.z = 0.6088693691637266;
    msg.t = 0.155595996016742;

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
    msg.setTimeStamp(0.20294145301870337);
    msg.setSource(31300U);
    msg.setSourceEntity(166U);
    msg.setDestination(34231U);
    msg.setDestinationEntity(155U);
    msg.x = 0.46274307097357825;
    msg.y = 0.9955522326252298;
    msg.z = 0.7028033845663127;
    msg.t = 0.1443070936229166;

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
    msg.setTimeStamp(0.5929803834419968);
    msg.setSource(1136U);
    msg.setSourceEntity(108U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(184U);
    msg.timeout = 32493U;
    msg.name.assign("KXFAPGDIUIRPZHERVPELXCNEDKLLATOANNCPHFJCRXBPAEAFNKHLKJYUMTUVUXSYCTGSRQKJBMYWJNBDLOSCCLVEKJBLWFPQIVRNEWGVDPTZKGXFZMAISGNNQUGWHJYIDORFBTJSCXEEMFZOHOXRQAAYWPOXGOGHVMDRTZIIWXIHPVUBBPZWOKMCXVFVFQLOMOZEYTBMFSGZQSKHVUDQEUWYQWNJIMHWSQUDTQDBTUAIJYLYSSATDR");
    msg.custom.assign("KTCNQSIRXFZTMHWSBSDKNFEZUJZBACAWXQHZLEYPXLCPWXTKIVBTDYBPSYURGUHRYUESURXDFWHYPBVMYQPCAZNGNMEXVBEUDSOCEWWGMTJJYAGNRYHHIXPRTVJPOFODIOICEJHQWYXRDGGBVLUULVQWSINEDJUKZKVCTPKOICOFQFULZIETGJZCBQHLAZOMGRMFCDAHINQFADNHXLEJVKLKKYSAXPS");

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
    msg.setTimeStamp(0.8238121475227185);
    msg.setSource(46490U);
    msg.setSourceEntity(245U);
    msg.setDestination(19127U);
    msg.setDestinationEntity(171U);
    msg.timeout = 25604U;
    msg.name.assign("NWJURQJPWWZVICPDBPJXHKEYBELJJLGBPOMTGJEOQQAKOZRVLXIYGEKMQQYOUDBQBGCKYRUOJVOSBNVUVNMUHCCIROVYNFSKTWWFNSWSEQHHQGISKHKKSOADHCJGWTTPLTILXEYVPRFUXBADLXZYZNNTDIVCHHAFFNOTBEWUPHRRLAVOXGPKBMCNFZFZUCILEDCZXTXMJAQSFMXRRAGRWITEPAVDMGDDFISYCKUEPZMQXBZYI");
    msg.custom.assign("YFPTWNNFIQYEHICKZYJECZSJJYXOJGFTXIRRXHDQHWLHVVVDFVRUHWIPORFHIOUGPQBGGEDBJSCPINLSKTYRJUAWUAPMLWZIDJYYZXUDBFFDACRLAVDUALLYCGJOQDAGPMRWBGGOLEHEQLRBDVKSASOBEHHBNZMCJNKVQPEVITMTSTRUYBYSEKGLVIXKOCKSNLWB");

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
    msg.setTimeStamp(0.7156699461383849);
    msg.setSource(11137U);
    msg.setSourceEntity(55U);
    msg.setDestination(53607U);
    msg.setDestinationEntity(58U);
    msg.timeout = 7896U;
    msg.name.assign("CWATYFZSCVOPPTHEDYHZBXFYKDDDNBVORJXENJIFSXOQQFWJOUQLNWLCXEGPLLCCTHKNZBZMDLNKMHWYXQMYXPZA");
    msg.custom.assign("JDVMCYWJKYKVYURMCFBPLQQ");

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
    msg.setTimeStamp(0.6689953413318623);
    msg.setSource(29471U);
    msg.setSourceEntity(58U);
    msg.setDestination(24705U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.6830218431577919;
    msg.lon = 0.6295211122467256;
    msg.z = 0.4752504954274519;
    msg.z_units = 224U;
    msg.speed = 0.9526510141364577;
    msg.speed_units = 57U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4720U;
    tmp_msg_0.off_x = 0.8594966055449276;
    tmp_msg_0.off_y = 0.2554392079026172;
    tmp_msg_0.off_z = 0.1440835385221324;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3123535715660912;
    msg.custom.assign("STKXYACBOBSOIWGJXJZNBSMWZFGTIYYQPESYTRJVXADPTLHZIVGQXESAKNXOOXKHTJSVAQQHPLMEHCGQLSIXKRLTORNMFNVCFNRYPPHJDKVCCPERJZJCFJCUGDNUDLHPUATFMVWUCFKJIQMDSBEZEHOKUISLUYOFHNDQZ");

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
    msg.setTimeStamp(0.13283516327670042);
    msg.setSource(966U);
    msg.setSourceEntity(20U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.024393064477530757;
    msg.lon = 0.7213298810880786;
    msg.z = 0.27845930706405086;
    msg.z_units = 1U;
    msg.speed = 0.2135967745398596;
    msg.speed_units = 85U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7909496033108193;
    tmp_msg_0.y = 0.5761683868583755;
    tmp_msg_0.z = 0.895649657863392;
    tmp_msg_0.t = 0.43365688354298515;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5025207135663252;
    msg.custom.assign("OBTZXWHXKZPLTRWIIXCUIINNSLYZDDLJN");

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
    msg.setTimeStamp(0.2813780669286686);
    msg.setSource(62468U);
    msg.setSourceEntity(157U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.9941660946069314;
    msg.lon = 0.5554266902810373;
    msg.z = 0.17852992494066078;
    msg.z_units = 50U;
    msg.speed = 0.9472675669144169;
    msg.speed_units = 153U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9587448330896934;
    tmp_msg_0.y = 0.3753556549235596;
    tmp_msg_0.z = 0.5956380155891088;
    tmp_msg_0.t = 0.8251877091071252;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.1611209222573382;
    msg.custom.assign("BDCMLJLARRCXPMNWSEZXACBSWAOQYSPCSHKOMXITHWUDDXFSIHLCVYTIKWRBYCKMREZZCVUPVGQYTKDGUEBGAAMGVJESGDCYUINGUSNFFUOMKTWEVQO");

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
    msg.setTimeStamp(0.48953109468258693);
    msg.setSource(39603U);
    msg.setSourceEntity(192U);
    msg.setDestination(62144U);
    msg.setDestinationEntity(65U);
    msg.vid = 10600U;
    msg.off_x = 0.2988134007262162;
    msg.off_y = 0.8555293145584908;
    msg.off_z = 0.5723738509564033;

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
    msg.setTimeStamp(0.5073173441566166);
    msg.setSource(32629U);
    msg.setSourceEntity(116U);
    msg.setDestination(29603U);
    msg.setDestinationEntity(62U);
    msg.vid = 36567U;
    msg.off_x = 0.9741003806408648;
    msg.off_y = 0.9331375573402638;
    msg.off_z = 0.10593602179836403;

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
    msg.setTimeStamp(0.39250660817175864);
    msg.setSource(8129U);
    msg.setSourceEntity(219U);
    msg.setDestination(13832U);
    msg.setDestinationEntity(41U);
    msg.vid = 27455U;
    msg.off_x = 0.7872093015490954;
    msg.off_y = 0.8749967551977914;
    msg.off_z = 0.3560837680753437;

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
    msg.setTimeStamp(0.9519069528834241);
    msg.setSource(29203U);
    msg.setSourceEntity(150U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9237276826597198);
    msg.setSource(16560U);
    msg.setSourceEntity(157U);
    msg.setDestination(46780U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.9153118296781825);
    msg.setSource(64557U);
    msg.setSourceEntity(72U);
    msg.setDestination(5478U);
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
    msg.setTimeStamp(0.6708081053403655);
    msg.setSource(36264U);
    msg.setSourceEntity(9U);
    msg.setDestination(43904U);
    msg.setDestinationEntity(52U);
    msg.mid = 7881U;

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
    msg.setTimeStamp(0.33105293667619495);
    msg.setSource(4230U);
    msg.setSourceEntity(209U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(144U);
    msg.mid = 56231U;

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
    msg.setTimeStamp(0.17037683065559706);
    msg.setSource(781U);
    msg.setSourceEntity(185U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(115U);
    msg.mid = 21383U;

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
    msg.setTimeStamp(0.895191926594917);
    msg.setSource(63008U);
    msg.setSourceEntity(103U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(211U);
    msg.state = 77U;
    msg.eta = 33810U;
    msg.info.assign("WQBZZLMXXGTPGCBEQLSZLITOJTCVCFUVSYDJVQNNHEWIAEHINEXOITSDDKLPVMEWHVPTOKDRFYWDGKZWYTXHSEAHFCSBNXZEFXOOHCLUKKWBAJKTLZRJSQABGMAPJUUGEMIISHMFVDKYXYPFNQBYNNXPHMCKVDXUEQWJRFYGSAJRXQNGLQKMVUFIJVALRVKNCCTOOGDHIUBRYOUBMPZZBAUMNQPRSBFDDSPLHJTRGPWQLCAMOZIWWFGEYURZYO");

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
    msg.setTimeStamp(0.5114646411344975);
    msg.setSource(50182U);
    msg.setSourceEntity(130U);
    msg.setDestination(6099U);
    msg.setDestinationEntity(157U);
    msg.state = 249U;
    msg.eta = 1278U;
    msg.info.assign("COPAQOLDALUIJITABYATEMRGMMFNBKHYGTGPNOXNZOMHCZBZGJSYCWIQNKWJUKRIKXPTUEMRAIFKJPPZVRFQWOMZZQXTSWBYKRTLZFBUXVAYXURLSNGXEVJHCBWXDYLTFIEFFIQNELXKDQHFUSONDSUHZ");

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
    msg.setTimeStamp(0.8605432284184041);
    msg.setSource(51506U);
    msg.setSourceEntity(51U);
    msg.setDestination(16240U);
    msg.setDestinationEntity(114U);
    msg.state = 211U;
    msg.eta = 43729U;
    msg.info.assign("XOEKCELLPUQCGKPCYHGDTTZFDYRJKWBHZUYZCKCRJZJSDKEEVVITDJMXFQWXFHRNCIBZFDNDLERMJPGMJMHYBEGR");

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
    msg.setTimeStamp(0.5458815574305709);
    msg.setSource(30315U);
    msg.setSourceEntity(137U);
    msg.setDestination(9602U);
    msg.setDestinationEntity(110U);
    msg.system = 19881U;
    msg.duration = 41711U;
    msg.speed = 0.835971169406963;
    msg.speed_units = 32U;
    msg.x = 0.029970576630206525;
    msg.y = 0.15206214912283655;
    msg.z = 0.6090586229646843;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.5414774328087114);
    msg.setSource(33675U);
    msg.setSourceEntity(81U);
    msg.setDestination(16369U);
    msg.setDestinationEntity(151U);
    msg.system = 17338U;
    msg.duration = 41408U;
    msg.speed = 0.4722204939232981;
    msg.speed_units = 205U;
    msg.x = 0.3382656903310318;
    msg.y = 0.6261881962772441;
    msg.z = 0.03603557669704771;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.4870069443566287);
    msg.setSource(41039U);
    msg.setSourceEntity(119U);
    msg.setDestination(33020U);
    msg.setDestinationEntity(115U);
    msg.system = 27006U;
    msg.duration = 43051U;
    msg.speed = 0.5365864185769609;
    msg.speed_units = 200U;
    msg.x = 0.07322633553517433;
    msg.y = 0.3015580704031863;
    msg.z = 0.6180935264362802;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.8221821323594687);
    msg.setSource(45359U);
    msg.setSourceEntity(233U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.48384168943531813;
    msg.lon = 0.6234237087509084;
    msg.speed = 0.04942538344062719;
    msg.speed_units = 6U;
    msg.duration = 45063U;
    msg.sys_a = 18187U;
    msg.sys_b = 62699U;
    msg.move_threshold = 0.7223974923866565;

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
    msg.setTimeStamp(0.19377747650512145);
    msg.setSource(31445U);
    msg.setSourceEntity(88U);
    msg.setDestination(33857U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.7390261752253077;
    msg.lon = 0.4855452929284554;
    msg.speed = 0.8679325292158869;
    msg.speed_units = 249U;
    msg.duration = 59489U;
    msg.sys_a = 65207U;
    msg.sys_b = 18729U;
    msg.move_threshold = 0.49486127848818495;

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
    msg.setTimeStamp(0.060339643280972965);
    msg.setSource(46522U);
    msg.setSourceEntity(223U);
    msg.setDestination(53410U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.5793924058050375;
    msg.lon = 0.9057860935067128;
    msg.speed = 0.547692150177713;
    msg.speed_units = 72U;
    msg.duration = 5429U;
    msg.sys_a = 54897U;
    msg.sys_b = 44790U;
    msg.move_threshold = 0.002249254888745944;

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
    msg.setTimeStamp(0.37200699391935044);
    msg.setSource(13217U);
    msg.setSourceEntity(223U);
    msg.setDestination(60885U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.10135142419528842;
    msg.lon = 0.7769329737850184;
    msg.z = 0.6634562215876061;
    msg.z_units = 180U;
    msg.speed = 0.774052924030636;
    msg.speed_units = 155U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5626507916926046;
    tmp_msg_0.lon = 0.21572849918213233;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UVLCKZNZWYDOFDJPTUDAGMORHLMXIAGTPEHIKJXBSVNUXKOBKORGCHMSNOHOILDVZTNCVTXFGQXQEAPYULRKJEAUWDGRCAWZVNPXSIRDFGYOZIFQQYSCQVUAWLENXSXPMFEDBAKIRELQAQBIRJTXCPTETZIULKKBWIHNCHJFBUYHLOEYSMKSTVDMQSBHDWBJMRD");

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
    msg.setTimeStamp(0.9910577087016522);
    msg.setSource(36382U);
    msg.setSourceEntity(140U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.03400563504992116;
    msg.lon = 0.27286196294279697;
    msg.z = 0.6719787660420756;
    msg.z_units = 79U;
    msg.speed = 0.39355949601047213;
    msg.speed_units = 51U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.748777208173772;
    tmp_msg_0.lon = 0.3727885164599207;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PFGGXVBPKCROVIVDKCQVRQPDWBAGYKHFHEHNFVBTJPZRIDCTBWSSGAPOESSFAZOSCZMUWAHTDGDRPBFWLJEYNZUQCJEBTIXOTYIMRRKUDXHJLANJVLUQVOKDTRAWFXSKMTJNNLWXENCCUXYQZYCUCWKNQTOFJMGCMYMRUYDAFOHLGIMQQAONIPJPAEVYZSKDUSIUHGHXPEM");

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
    msg.setTimeStamp(0.6344832045787768);
    msg.setSource(17726U);
    msg.setSourceEntity(189U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.09633179089195065;
    msg.lon = 0.12997286656032225;
    msg.z = 0.093581649390714;
    msg.z_units = 46U;
    msg.speed = 0.3493000645177239;
    msg.speed_units = 121U;
    msg.custom.assign("OBHIWHIYUNGSXDUFYTHBWNPWYUJWEDJIFTGJDHPCMWXZSCKYNOJEECGPCFVOUVDLWGBCLSSWRODFNFZFTDBHVABMSNYDQXPEUKSXVVIMTSAGOLGETMRRKRQFIVABMPKCJRVBBRNATLZSTJGL");

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
    msg.setTimeStamp(0.008878371250589878);
    msg.setSource(61888U);
    msg.setSourceEntity(57U);
    msg.setDestination(28901U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.7064938747329875;
    msg.lon = 0.36625717316738704;

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
    msg.setTimeStamp(0.4441363127976893);
    msg.setSource(62084U);
    msg.setSourceEntity(161U);
    msg.setDestination(60543U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.524879376886348;
    msg.lon = 0.40536070890127296;

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
    msg.setTimeStamp(0.7819900931154735);
    msg.setSource(63384U);
    msg.setSourceEntity(185U);
    msg.setDestination(56066U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.6396124134348518;
    msg.lon = 0.9576871608563836;

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
    msg.setTimeStamp(0.9330244299181019);
    msg.setSource(28089U);
    msg.setSourceEntity(44U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(38U);
    msg.timeout = 62835U;
    msg.lat = 0.9079519787443819;
    msg.lon = 0.7464750672487435;
    msg.z = 0.7203773837529159;
    msg.z_units = 181U;
    msg.pitch = 0.7670770644237098;
    msg.amplitude = 0.9910122775593796;
    msg.duration = 56991U;
    msg.speed = 0.6698809692972452;
    msg.speed_units = 124U;
    msg.radius = 0.3105201710658776;
    msg.direction = 231U;
    msg.custom.assign("WPHLYSSMRWPYDHKHOVKWEIHZOOJFZHAEJNFYZKNRIQLNQBTUVWIXIJIOCCGQGP");

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
    msg.setTimeStamp(0.045953725727496564);
    msg.setSource(4960U);
    msg.setSourceEntity(243U);
    msg.setDestination(9678U);
    msg.setDestinationEntity(118U);
    msg.timeout = 61987U;
    msg.lat = 0.47987060501146783;
    msg.lon = 0.2789071658200598;
    msg.z = 0.07428011388357891;
    msg.z_units = 110U;
    msg.pitch = 0.453547853089287;
    msg.amplitude = 0.5496069841727428;
    msg.duration = 27014U;
    msg.speed = 0.46711433573530325;
    msg.speed_units = 136U;
    msg.radius = 0.02231481162967286;
    msg.direction = 14U;
    msg.custom.assign("CMRAJXZDXRPQBLPGTLIAZBTGUVENZFJROFAZXDEQNCBHCKOZMVUQEIYKFPGUEWHLLNYPYUVEWANCPNEKQSJSIIGPKTNOULTTCNCYIHWJRQWOAUORSWZXWFVHTJROMGBDVFUTLAEKWRXIKGPMPXOFHSQKSBAYVEXBHBMMCUDZVXLBLJQMOFVGDHFZNDJWKLUHYJIACVMVGTYADCSQIXMGPZFASKGLEYBTQHDODSHJNRRPWEDYRSF");

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
    msg.setTimeStamp(0.02040566247236053);
    msg.setSource(22882U);
    msg.setSourceEntity(128U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(43U);
    msg.timeout = 44340U;
    msg.lat = 0.6126701004142273;
    msg.lon = 0.6069632518300216;
    msg.z = 0.6624544000553274;
    msg.z_units = 30U;
    msg.pitch = 0.527831111732899;
    msg.amplitude = 0.788044172904604;
    msg.duration = 62034U;
    msg.speed = 0.8654089294627577;
    msg.speed_units = 125U;
    msg.radius = 0.6831149808114259;
    msg.direction = 72U;
    msg.custom.assign("ADIHZQGKMIJSLITMPRHACBLQGQQSARGOTTUITGBFMQVJADGIONCMPRCZOIRPNHJXFWQGGPZRBFMXHUNJ");

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
    msg.setTimeStamp(0.47326787529333836);
    msg.setSource(35240U);
    msg.setSourceEntity(210U);
    msg.setDestination(21518U);
    msg.setDestinationEntity(244U);
    msg.formation_name.assign("QAVGVHWXNAWRJKXUBRTYJOWNPOGZBBHNTQURSLHNDIUUHHEXIHSWQZYBGYOKBRFOLPUQMTGGVFBXTCCOYEJYYFRKAJMXBRPRPXZLKBTDNLUHIFGWCJMIXUEX");
    msg.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60358U;
    tmp_msg_0.off_x = 0.8016207930773727;
    tmp_msg_0.off_y = 0.0931122270100575;
    tmp_msg_0.off_z = 0.5332417908933069;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DQIENSDONLTLQHTDJPCZELRSJTQNUTQMUIKKQBBFGWPCHIMNFCFGEUJHNJKPMUYVCMASOGBXLROPVVZRRAKJVPLGCXZPGZWTCUULFYOGWHWOMDZKFYSCIUSZKUHOGXOGWVBTCPQJWXFIEJMRLRIYDNRQ");

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
    msg.setTimeStamp(0.08825088087660582);
    msg.setSource(1242U);
    msg.setSourceEntity(163U);
    msg.setDestination(10296U);
    msg.setDestinationEntity(5U);
    msg.formation_name.assign("HSQGOJLNYZWCBORJGYUPADBVDRVKPCUAJPWQFQPYKWIYERQMBMXFUJFXCRNOLVDDWLNKSHQHZPFYZNVHTGKIYNTHIWNFDBNXUPZNMQJKQKTEIPODDPZWURJTWFRZRUSDJHNLYOIGIYS");
    msg.reference_frame = 223U;
    msg.custom.assign("EFXZLMEDMLFKQIMWDXTLFHNNOYTHLLHGPBTRTHUAVOWEBZRVQPZCCHRXRGGNUZAMWBDFAHKICEFQEGKECOJPGGFCJBODVTZLSAYROQKLWSULYMIKJPPNNCARCTIKTDXTFZOYNRBEXAYUNVNBQKFIAPCQXFFSAYYUPOMNUPBYIQNKMVJIIOZOVAUSHWOGRKQDXAWSJGJYTVESMDHSVISBB");

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
    msg.setTimeStamp(0.79942037882824);
    msg.setSource(51849U);
    msg.setSourceEntity(59U);
    msg.setDestination(477U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("XCYIBRRJXNXYYTYKWPKBDAVVXJZPCTYEDUBFFEAZECDGOJMZSRIBNIPMISTRLXIGDQFBUGCGKSGKXUGKBUHSHLQUOVOPWXARPSLWBXQJWTMMRFOFJWSNPNL");
    msg.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24347U;
    tmp_msg_0.off_x = 0.1716388419014594;
    tmp_msg_0.off_y = 0.02316505039128658;
    tmp_msg_0.off_z = 0.16127149926251416;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OVNQGQELGCJKWGMXHTRJDDLLCGYBTBUNWWLTQGEQEYZHBNLFZAJDIXYDOQXPSKXAMRJUZKEUWOZMMVNTFAGFPHZCLZASMFBZBKDCMXPZTSPXBIOYYTPVDRTQVEOUYGKAEUGVHVIFY");

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
    msg.setTimeStamp(0.9696872710775194);
    msg.setSource(4908U);
    msg.setSourceEntity(109U);
    msg.setDestination(41719U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("MFHBTQUPYPJWQZBETVCBOQHZXTFFZQTELRVAZTZKCVFTGDZDINKHHNYWXUKJHSEPGANYYUCVOPLYHDNDUDRSREIWNKMNGGDJORLAJXQBUGCJDBXGARPCESSSAFKMLOFEPXGIFRXUAVCLTMLMQIJLFKDEHZHKJOBPWSGOKQCWBPMLGVJLUVWTENUINJ");
    msg.formation_name.assign("BAXGRGQEWQEFBXZSDJTWWGWLTAVNCOSUPFJSSXVLESRLJMKZZVQLFEOUKABUSBVDSXCYEMQIMYDFRHVODOHNTIUCOCTXMTRMARUNZFYTPPAGDIXRQHGXILGKVJDKYOE");
    msg.plan_id.assign("ILFPTJNDCTSQOBXIXNCAAUIKNSEVSDFCNAMCFSHFPPGHIDYZJYRLYWTYGTATLQHS");
    msg.description.assign("TUWBQSGXGJULGVJYHVMTASXDIQLUBFKQOSFLHCMCNXBRKBYUFUZGAYLXKRLWEOAHHCXDUHGXWCMKOKPRXMEJKMLPCBOZBSNLNTJQGNVIIISVHWYAWKZO");
    msg.leader_speed = 0.9278271459837316;
    msg.leader_bank_lim = 0.6402774088181347;
    msg.pos_sim_err_lim = 0.5499937177676247;
    msg.pos_sim_err_wrn = 0.3080064000202408;
    msg.pos_sim_err_timeout = 5683U;
    msg.converg_max = 0.9210678112580126;
    msg.converg_timeout = 38779U;
    msg.comms_timeout = 545U;
    msg.turb_lim = 0.029611989584682363;
    msg.custom.assign("ADPDCCVRYXQX");

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
    msg.setTimeStamp(0.03231373144141714);
    msg.setSource(54429U);
    msg.setSourceEntity(180U);
    msg.setDestination(34237U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("UXJDGMPMJKKWFYCBTIWXUOHHXWANPRMLVIBTHDAQ");
    msg.formation_name.assign("DQUBTTAMWZKTLHFXTVPWQGENMZEJMMNKOSHVNZKOYRVMLPGPECTREUKZYRUIQQTGRTWIGEPKMRAFXYRBZBIJJDWNBMAHAANSXNDHWMYGVCXPSFIKJCOFAYFDURZOHSUQUJUTLLFIVCFLNNCDVBBMGGEDSDEYIVWJHOXGEOSQVZXMUYHLPABBCYL");
    msg.plan_id.assign("KAUJMWEQBJGKUPWQVFMYJLZMNAMLVVISFPOUUQIJPRPEYTMYFSREAGAJXZJDXLBXVDKBBGHOEAPZOHCXCWIQHKLTGIGGMEEUZHVCDIHTDPPMOCWQCJKEGYICBZKNOCVGH");
    msg.description.assign("ROZZOYOZQDASGBOJLPTFPHEWDRTAMJYCNNSDLEMKIMBQQRIGWBEKSLQVCWJHEOPXBFJRTUGOHXYATYVIVXJUSWMCGCSXKCWLNNNPZTPSISUKFBVY");
    msg.leader_speed = 0.4105676818419556;
    msg.leader_bank_lim = 0.06852009614094523;
    msg.pos_sim_err_lim = 0.40391726885008195;
    msg.pos_sim_err_wrn = 0.9228584522735692;
    msg.pos_sim_err_timeout = 41363U;
    msg.converg_max = 0.8098403132470996;
    msg.converg_timeout = 16587U;
    msg.comms_timeout = 62413U;
    msg.turb_lim = 0.09347568770225878;
    msg.custom.assign("GHUZDELBRHCTNLSXWMSNOCNDJZIGIMBPLJCADPBFQVMETAMZRFTFBVELSIBISNYQMCSZMNHIPLEZDEFXAGQGJWVF");

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
    msg.setTimeStamp(0.620012427467212);
    msg.setSource(28025U);
    msg.setSourceEntity(251U);
    msg.setDestination(8686U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("ZNFGFWJRHUBOFUYTWLNXADSOIGJXA");
    msg.formation_name.assign("ZKPFJKGBBVJOLSMRKIODJWLWVBDNLJHPGHPYQTWRYMGMGBSZCRLYDQSBCOZDGXCRZYRHERUPDAQPUUVTHKTNSIULLFAAEPOFAQRIZAMNUNIINHSEWDCXDRXWRFNWUVOBVMZJXTNFOVTEXCHRCCXLYKPYEJUXODJSTJXBG");
    msg.plan_id.assign("VUATKXRHOJFSBJJDDIMOXMSIMHIDKZPWOYLBNJOQTBJEQMSFFUVCGCTMGFHALZTIILCBATCHBXBEQXXOVRMPKWEDVFKKEQBQOEQZAVYJWRGJVPTYGUNOWCYLWMKEOOEVMNYUZTSTUZPTYBSCKANPNSKLAXRDWUSHUGRHQCMLCFZXDDQQJQIRELZSHYZMYTDPLBUNKWXNBOCYRGAHCFDWVHUDHJGWGPAXLKRNF");
    msg.description.assign("QAWKDQPQQWQJXEFKUYKWWNBMFLPNUAULNXFFWECHJVEYVAGYQTJIDZMATYEDLBCWROYLCOSXGSUZZGIRPROICRPRUAYMOHSIHITFLWCGPCHHKOSBAKGPBMOENOPAJSRVTMBHJRDNKRVRUARCQDOTIJGNAGZMKCPLSSZTPLHNLBFYDZKKXWYQXTVEBKWOSIFXMHVMWIJNHCTIDUODFJQGBSFMBUNZJMLEPGEQYXXVU");
    msg.leader_speed = 0.3089425199571142;
    msg.leader_bank_lim = 0.7647639876916021;
    msg.pos_sim_err_lim = 0.8279336072242597;
    msg.pos_sim_err_wrn = 0.031417276913909054;
    msg.pos_sim_err_timeout = 16427U;
    msg.converg_max = 0.1699453682633395;
    msg.converg_timeout = 9991U;
    msg.comms_timeout = 1024U;
    msg.turb_lim = 0.28893638328199234;
    msg.custom.assign("MSLOFQRBIHUOATHJLRACPEUHZWQYFMIBIUEGWISFUSEFOWBCQWYXNHFMDGAZTDABVPRRLYWJLRMITVKSYIOKGJHAMFNRJQJEWDLDFZ");

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
    msg.setTimeStamp(0.7947090304622424);
    msg.setSource(64701U);
    msg.setSourceEntity(48U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(29U);
    msg.control_src = 4793U;
    msg.control_ent = 36U;
    msg.timeout = 0.665877936691338;
    msg.loiter_radius = 0.5921166635802863;
    msg.altitude_interval = 0.3377062699613841;

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
    msg.setTimeStamp(0.44156466762414215);
    msg.setSource(5454U);
    msg.setSourceEntity(230U);
    msg.setDestination(61300U);
    msg.setDestinationEntity(18U);
    msg.control_src = 10312U;
    msg.control_ent = 53U;
    msg.timeout = 0.5227255224658302;
    msg.loiter_radius = 0.3918219693467295;
    msg.altitude_interval = 0.01585955852277854;

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
    msg.setTimeStamp(0.9165696262280179);
    msg.setSource(9909U);
    msg.setSourceEntity(140U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(109U);
    msg.control_src = 25537U;
    msg.control_ent = 130U;
    msg.timeout = 0.4303334364070591;
    msg.loiter_radius = 0.5818575707643575;
    msg.altitude_interval = 0.11678904871094864;

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
    msg.setTimeStamp(0.06795487621154483);
    msg.setSource(57080U);
    msg.setSourceEntity(68U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(31U);
    msg.flags = 110U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5354734017786612;
    tmp_msg_0.speed_units = 214U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18834576772569234;
    tmp_msg_1.z_units = 153U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.07314126763786022;
    msg.lon = 0.23567101269671786;
    msg.radius = 0.9093197916692164;

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
    msg.setTimeStamp(0.0902615964062563);
    msg.setSource(1059U);
    msg.setSourceEntity(181U);
    msg.setDestination(29071U);
    msg.setDestinationEntity(3U);
    msg.flags = 74U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.31409563995392686;
    tmp_msg_0.speed_units = 203U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9783129619351679;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7151273384000167;
    msg.lon = 0.7343115466109236;
    msg.radius = 0.2010716730424046;

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
    msg.setTimeStamp(0.8426388294712504);
    msg.setSource(34714U);
    msg.setSourceEntity(100U);
    msg.setDestination(27701U);
    msg.setDestinationEntity(1U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24267494113724553;
    tmp_msg_0.speed_units = 98U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7677269648132917;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4670899512432446;
    msg.lon = 0.3622481338217416;
    msg.radius = 0.3776271217153173;

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
    msg.setTimeStamp(0.3832418741974635);
    msg.setSource(21957U);
    msg.setSourceEntity(92U);
    msg.setDestination(30977U);
    msg.setDestinationEntity(30U);
    msg.control_src = 21693U;
    msg.control_ent = 211U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 78U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8594187211075132;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2830558989522868;
    tmp_tmp_msg_0_1.z_units = 119U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5924652422420041;
    tmp_msg_0.lon = 0.0561853665427966;
    tmp_msg_0.radius = 0.4710155963975424;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
    msg.proximity = 126U;

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
    msg.setTimeStamp(0.7936982282490753);
    msg.setSource(29841U);
    msg.setSourceEntity(127U);
    msg.setDestination(11961U);
    msg.setDestinationEntity(166U);
    msg.control_src = 48992U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7531709264882971;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6725221482536796;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7333744383397722;
    tmp_msg_0.lon = 0.004361944885630464;
    tmp_msg_0.radius = 0.6330311580650206;
    msg.reference.set(tmp_msg_0);
    msg.state = 225U;
    msg.proximity = 118U;

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
    msg.setTimeStamp(0.6287775187419683);
    msg.setSource(49662U);
    msg.setSourceEntity(158U);
    msg.setDestination(41879U);
    msg.setDestinationEntity(91U);
    msg.control_src = 24312U;
    msg.control_ent = 39U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8422289813228386;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.48218876958626367;
    tmp_tmp_msg_0_1.z_units = 145U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24771502323294048;
    tmp_msg_0.lon = 0.8960116300715177;
    tmp_msg_0.radius = 0.59139354178242;
    msg.reference.set(tmp_msg_0);
    msg.state = 243U;
    msg.proximity = 63U;

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
    msg.setTimeStamp(0.2888663100214467);
    msg.setSource(10900U);
    msg.setSourceEntity(60U);
    msg.setDestination(32632U);
    msg.setDestinationEntity(70U);
    msg.ax_cmd = 0.6510023446139448;
    msg.ay_cmd = 0.28292008942663105;
    msg.az_cmd = 0.6001015737762146;
    msg.ax_des = 0.2895313188079871;
    msg.ay_des = 0.9262101888334937;
    msg.az_des = 0.30997021686332293;
    msg.virt_err_x = 0.4835302203348414;
    msg.virt_err_y = 0.3317384572122085;
    msg.virt_err_z = 0.5731716865925495;
    msg.surf_fdbk_x = 0.7834250704356434;
    msg.surf_fdbk_y = 0.628022519934216;
    msg.surf_fdbk_z = 0.9078880724184769;
    msg.surf_unkn_x = 0.3939190252858914;
    msg.surf_unkn_y = 0.9889588515327518;
    msg.surf_unkn_z = 0.17236218836668382;
    msg.ss_x = 0.16836399098333144;
    msg.ss_y = 0.3317340195816192;
    msg.ss_z = 0.8454857707267971;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CFGKDVIDKUJSNBSSMFWQZUZSOJQNSZGXXSGJGBRXLBQKKNLSTMCWFEUKVGDJQCUHYMYOWGAVQARPXXGPKENPDSCVFGHAZVNWQFMPOYAQEJAUPTBNBCDVLGWEIETXDQXCDRLWFZRXUJZVZVTXTJUJONEELPIMOLEAWNFINAEJLVLIIMHYRSYRAQPTWYDUUVHMXOCYURFLO");
    tmp_msg_0.dist = 0.7365743212740986;
    tmp_msg_0.err = 0.4812682890213297;
    tmp_msg_0.ctrl_imp = 0.8099315988051732;
    tmp_msg_0.rel_dir_x = 0.06695681405204679;
    tmp_msg_0.rel_dir_y = 0.3478654942739896;
    tmp_msg_0.rel_dir_z = 0.46895659464794104;
    tmp_msg_0.err_x = 0.9292215673917743;
    tmp_msg_0.err_y = 0.23901524990448164;
    tmp_msg_0.err_z = 0.54694224450269;
    tmp_msg_0.rf_err_x = 0.8058823848595703;
    tmp_msg_0.rf_err_y = 0.4577497403044609;
    tmp_msg_0.rf_err_z = 0.23747982103651155;
    tmp_msg_0.rf_err_vx = 0.4912181829347858;
    tmp_msg_0.rf_err_vy = 0.5192306825049161;
    tmp_msg_0.rf_err_vz = 0.2301237814535212;
    tmp_msg_0.ss_x = 0.7385794812765066;
    tmp_msg_0.ss_y = 0.7667210274768681;
    tmp_msg_0.ss_z = 0.8692894961601876;
    tmp_msg_0.virt_err_x = 0.008366329350739554;
    tmp_msg_0.virt_err_y = 0.13473450603101822;
    tmp_msg_0.virt_err_z = 0.44513587600846827;
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
    msg.setTimeStamp(0.3683338575884312);
    msg.setSource(12501U);
    msg.setSourceEntity(202U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.38253824058460817;
    msg.ay_cmd = 0.31405476047523084;
    msg.az_cmd = 0.9102194427467155;
    msg.ax_des = 0.636550810269874;
    msg.ay_des = 0.3413606924039313;
    msg.az_des = 0.19491571682188824;
    msg.virt_err_x = 0.7181051832712;
    msg.virt_err_y = 0.0840708084194296;
    msg.virt_err_z = 0.09449966437245172;
    msg.surf_fdbk_x = 0.48691258770164914;
    msg.surf_fdbk_y = 0.1635895053807609;
    msg.surf_fdbk_z = 0.5470961004967785;
    msg.surf_unkn_x = 0.42594829448206817;
    msg.surf_unkn_y = 0.1134966371069126;
    msg.surf_unkn_z = 0.8800512140504176;
    msg.ss_x = 0.6549945406616937;
    msg.ss_y = 0.1985347146511166;
    msg.ss_z = 0.7068323835439103;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RWQOCFIWFAQAIHRQLWCWNRSFDTBMJNVFMNNXEKPORLICZANYASINUBGRBHUEVACNYUZJSKPUGXAHRQBDAWONPCZACELJEFOKKWDDGTQFTMXBYOOSBOPGHSFVTOOTTXUZECBJVYJZLYDXBLFMUDMKUAPQSQVPJFSWEMBUKOMACG");
    tmp_msg_0.dist = 0.6219274293858584;
    tmp_msg_0.err = 0.048759262406623316;
    tmp_msg_0.ctrl_imp = 0.20260234973659874;
    tmp_msg_0.rel_dir_x = 0.6936784288685427;
    tmp_msg_0.rel_dir_y = 0.6953512751540999;
    tmp_msg_0.rel_dir_z = 0.6007524581428102;
    tmp_msg_0.err_x = 0.9087880095418902;
    tmp_msg_0.err_y = 0.6791015587451755;
    tmp_msg_0.err_z = 0.333594293264429;
    tmp_msg_0.rf_err_x = 0.8925972230737348;
    tmp_msg_0.rf_err_y = 0.7226145828758026;
    tmp_msg_0.rf_err_z = 0.2902325482491066;
    tmp_msg_0.rf_err_vx = 0.9998423995697967;
    tmp_msg_0.rf_err_vy = 0.2016560012676395;
    tmp_msg_0.rf_err_vz = 0.022090173502718913;
    tmp_msg_0.ss_x = 0.9462053722527055;
    tmp_msg_0.ss_y = 0.7523005818433006;
    tmp_msg_0.ss_z = 0.6744266322806378;
    tmp_msg_0.virt_err_x = 0.25596178780938583;
    tmp_msg_0.virt_err_y = 0.4747793310945686;
    tmp_msg_0.virt_err_z = 0.4729795805853986;
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
    msg.setTimeStamp(0.5444063290593525);
    msg.setSource(11281U);
    msg.setSourceEntity(245U);
    msg.setDestination(53579U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.21574617631756055;
    msg.ay_cmd = 0.409228208167262;
    msg.az_cmd = 0.2984668546219924;
    msg.ax_des = 0.4655543087827396;
    msg.ay_des = 0.9103053795767694;
    msg.az_des = 0.7383292922217423;
    msg.virt_err_x = 0.6771776964857547;
    msg.virt_err_y = 0.1802573639001982;
    msg.virt_err_z = 0.25892019644912034;
    msg.surf_fdbk_x = 0.5279932266599257;
    msg.surf_fdbk_y = 0.993730264913497;
    msg.surf_fdbk_z = 0.7540025234566443;
    msg.surf_unkn_x = 0.4134989921842883;
    msg.surf_unkn_y = 0.7411392819751368;
    msg.surf_unkn_z = 0.16224713731420926;
    msg.ss_x = 0.8629825953696477;
    msg.ss_y = 0.6279760983330788;
    msg.ss_z = 0.6671027584167073;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OMOMFDYMNESPBORHIVSBXXJFTLFTQCNEKTBOUFPYVBVQYKRRKMPKLPCUYISLNQMIMYCVQWLHFWCVKYOSMUACIIIIRZZUHNMORAV");
    tmp_msg_0.dist = 0.9979893611879995;
    tmp_msg_0.err = 0.23684124448794497;
    tmp_msg_0.ctrl_imp = 0.6434304825093835;
    tmp_msg_0.rel_dir_x = 0.8949029851706342;
    tmp_msg_0.rel_dir_y = 0.28971057081833373;
    tmp_msg_0.rel_dir_z = 0.22989219364277358;
    tmp_msg_0.err_x = 0.7803598657259014;
    tmp_msg_0.err_y = 0.07291680962209512;
    tmp_msg_0.err_z = 0.457498185430094;
    tmp_msg_0.rf_err_x = 0.11002336887151354;
    tmp_msg_0.rf_err_y = 0.09126979784367761;
    tmp_msg_0.rf_err_z = 0.9160173373061918;
    tmp_msg_0.rf_err_vx = 0.781085968555799;
    tmp_msg_0.rf_err_vy = 0.9564657412430675;
    tmp_msg_0.rf_err_vz = 0.9279947623260374;
    tmp_msg_0.ss_x = 0.4012413005449502;
    tmp_msg_0.ss_y = 0.9076544953608958;
    tmp_msg_0.ss_z = 0.3653701599130026;
    tmp_msg_0.virt_err_x = 0.7340971073023168;
    tmp_msg_0.virt_err_y = 0.6864526614192394;
    tmp_msg_0.virt_err_z = 0.29544726898494056;
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
    msg.setTimeStamp(0.9169516250272702);
    msg.setSource(9229U);
    msg.setSourceEntity(229U);
    msg.setDestination(8684U);
    msg.setDestinationEntity(241U);
    msg.s_id.assign("CYQFYLLDXBQVJDHOAJBACPHDDTFXKAYDWCEYOQRAXNELQOUMSABVSLXGCBSYYFIAFBPCSTBUJGILTNTMQHZJTXIRCJZKUOXGQOVFRZQPZZNQSKNCYLJMKWHVUGBGOLBDEEDOMDSIMAWPHNWZHMRSJIBUZREIVVXNTLZFRWXTVNKUKKFLOPLUWZERWHGUYENXZJEYWSDOSTCGUFKSTHKM");
    msg.dist = 0.7455406434736929;
    msg.err = 0.34499913712154817;
    msg.ctrl_imp = 0.1701143926479619;
    msg.rel_dir_x = 0.02411749260187024;
    msg.rel_dir_y = 0.0018537260403003186;
    msg.rel_dir_z = 0.7976306413074025;
    msg.err_x = 0.7471331785155222;
    msg.err_y = 0.2597053361009245;
    msg.err_z = 0.32167690872402244;
    msg.rf_err_x = 0.5790497777255524;
    msg.rf_err_y = 0.6545841448892946;
    msg.rf_err_z = 0.18352778051269925;
    msg.rf_err_vx = 0.09154475244778548;
    msg.rf_err_vy = 0.6391415421638218;
    msg.rf_err_vz = 0.9295631922635784;
    msg.ss_x = 0.11413120419201706;
    msg.ss_y = 0.28084382417451625;
    msg.ss_z = 0.5220540555033529;
    msg.virt_err_x = 0.6232427229238521;
    msg.virt_err_y = 0.07246874981796614;
    msg.virt_err_z = 0.6507404456009985;

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
    msg.setTimeStamp(0.81671643061519);
    msg.setSource(17643U);
    msg.setSourceEntity(100U);
    msg.setDestination(34360U);
    msg.setDestinationEntity(25U);
    msg.s_id.assign("RKQVJWPEQYRLWCLVQIMFMBOJLRASEHMQUHWQKVFENLCDPLSBNKVHDXFERPOMFXTWJJZFEDBSFYMGIIWYBDYIWVRAPFNHMIRQGGKTUCCXGMUFWPRAVSJILADMDSBAEOVCPGPROZNMNHZDQSTUNXELBCOCRTUFTYKALBHWBGKADIAJUQXZGOAXZXSKYNGJTKTCWOYDZONVIHU");
    msg.dist = 0.6345720793635085;
    msg.err = 0.9172473929882068;
    msg.ctrl_imp = 0.10485940438815355;
    msg.rel_dir_x = 0.6562030042281135;
    msg.rel_dir_y = 0.43678019203803553;
    msg.rel_dir_z = 0.6652358810452099;
    msg.err_x = 0.9196026324299741;
    msg.err_y = 0.4350297027972295;
    msg.err_z = 0.21075278816923815;
    msg.rf_err_x = 0.1368269058510112;
    msg.rf_err_y = 0.3307311587554568;
    msg.rf_err_z = 0.49703258876596934;
    msg.rf_err_vx = 0.8571400863699005;
    msg.rf_err_vy = 0.07737419680457158;
    msg.rf_err_vz = 0.37583937262884304;
    msg.ss_x = 0.8600741782862393;
    msg.ss_y = 0.49455091151365005;
    msg.ss_z = 0.1734200737667413;
    msg.virt_err_x = 0.183882435498268;
    msg.virt_err_y = 0.044658664505962675;
    msg.virt_err_z = 0.8759324731669289;

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
    msg.setTimeStamp(0.29567564609427577);
    msg.setSource(31740U);
    msg.setSourceEntity(224U);
    msg.setDestination(56775U);
    msg.setDestinationEntity(222U);
    msg.s_id.assign("QRACTCISZELALUIWTUPNGIWZQTSIOZDUKVLVHKEKWBQSXTXFMKYANCOCUVYIBVYKCNRQHUJJWHJJOEZMBUOJLZGTOH");
    msg.dist = 0.37359533408121237;
    msg.err = 0.6075407566384614;
    msg.ctrl_imp = 0.20681890761304222;
    msg.rel_dir_x = 0.38754839401488106;
    msg.rel_dir_y = 0.4030980787118522;
    msg.rel_dir_z = 0.15426330497494467;
    msg.err_x = 0.7630727783299317;
    msg.err_y = 0.5663854429662901;
    msg.err_z = 0.5688549587064294;
    msg.rf_err_x = 0.04185837765253608;
    msg.rf_err_y = 0.40499075370092463;
    msg.rf_err_z = 0.48882179552234395;
    msg.rf_err_vx = 0.5170314691158465;
    msg.rf_err_vy = 0.23498061596028996;
    msg.rf_err_vz = 0.7268584943098702;
    msg.ss_x = 0.6182398542922701;
    msg.ss_y = 0.6760234697222777;
    msg.ss_z = 0.9269820470809915;
    msg.virt_err_x = 0.8224068463471501;
    msg.virt_err_y = 0.685083517532321;
    msg.virt_err_z = 0.42557536837898813;

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
    msg.setTimeStamp(0.9823053925275366);
    msg.setSource(7760U);
    msg.setSourceEntity(28U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(141U);
    msg.timeout = 48981U;
    msg.rpm = 0.36487354138985806;
    msg.direction = 25U;
    msg.custom.assign("HXLSQCGBRGZKNOVVKQSFVNBPRDWMRMALBKXWLHHWQMO");

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
    msg.setTimeStamp(0.4347728354521002);
    msg.setSource(42503U);
    msg.setSourceEntity(223U);
    msg.setDestination(45546U);
    msg.setDestinationEntity(205U);
    msg.timeout = 44327U;
    msg.rpm = 0.04752175702346295;
    msg.direction = 99U;
    msg.custom.assign("CUJQPEGMDRZBGRVBSUACJEYCHYGDCNPORHCBNTQRSAXGNPUSXSNZPBVZEHKLKEKMADMKAFTMLENXYWLHFTFZBMJROEEFFOYZWOJBVWVSLLCKLDIKVJFMJBRCASAXOINXBHNDICTGLGUSPONTBIIAOQXUAWHEYMYRVWOKXPZPJQQTWXHRMJWZFVCFNYEKIUBKDSTUIYZXYTIQ");

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
    msg.setTimeStamp(0.834825158522697);
    msg.setSource(35482U);
    msg.setSourceEntity(121U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(253U);
    msg.timeout = 21811U;
    msg.rpm = 0.45626845654783965;
    msg.direction = 99U;
    msg.custom.assign("PKWTVOZRIZLZJHHDCUAXNGVZNHFPMBJSOUJRHPXCDNBAWCBESCVROATNKQUDULGYRONWIOILYATTSEEBXRQMBFETKSEKUUVKDZPVG");

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
    msg.setTimeStamp(0.30206545297428566);
    msg.setSource(43131U);
    msg.setSourceEntity(3U);
    msg.setDestination(13159U);
    msg.setDestinationEntity(30U);
    msg.op_mode = 62U;
    msg.error_count = 98U;
    msg.error_ents.assign("DVNCKYZDNOILSJCUHDHTIUAOPRZQQYZBZAOWGPWIWDBGLELETZKTKNMWGJWVYIVTQUYQUGGEQNJPSPMMEPSWIYAFWKTHGNVAXCJTR");
    msg.maneuver_type = 54993U;
    msg.maneuver_stime = 0.8219671016139951;
    msg.maneuver_eta = 22048U;
    msg.control_loops = 1392104714U;
    msg.flags = 28U;
    msg.last_error.assign("FPISKGFYGVWKAJYFVVOZBMARULQREHGWLUZKZEYCSCZBNNFTOPTSFTDYMLNOQIJKJIUYXCXBCNHVSIZAAJWNSPXGMVJE");
    msg.last_error_time = 0.5389449834833712;

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
    msg.setTimeStamp(0.2555878092672159);
    msg.setSource(34743U);
    msg.setSourceEntity(13U);
    msg.setDestination(12172U);
    msg.setDestinationEntity(128U);
    msg.op_mode = 162U;
    msg.error_count = 111U;
    msg.error_ents.assign("NTWWLIWQHFJMVKQTLDEQTSPSRZTDKPREMUIPDVKFKQHIXGTIPWXXBJJLZKCVOETGXLUGZERXXFZHBRQBNRMUNYLRH");
    msg.maneuver_type = 64151U;
    msg.maneuver_stime = 0.9347818220166775;
    msg.maneuver_eta = 7054U;
    msg.control_loops = 816486795U;
    msg.flags = 105U;
    msg.last_error.assign("FFHXYDDERWOEVVMUHJMUIDKDYNDPURLVLUPMVLPKFIMOAVVEBNXDNCFHGBQTWWADPLTNPKVTHOIXQHSJIRYNKQJIIRZQOLARXWKAAQGOFZTNAMBQOZZGVPZXQSKOBTSXSGSDIRJEAUFPEGTJWBXLDURLIRNFNFLYSTTYMXZWTGTEKSWOBVWCSYIHOXYCZERYKSCJGCDFPLGBQZKASIOMEGHJZMHCHCVPAYXABQ");
    msg.last_error_time = 0.07295084630889759;

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
    msg.setTimeStamp(0.000928820947307174);
    msg.setSource(9157U);
    msg.setSourceEntity(121U);
    msg.setDestination(55500U);
    msg.setDestinationEntity(81U);
    msg.op_mode = 175U;
    msg.error_count = 91U;
    msg.error_ents.assign("DJHNNZGMBCVHQQYIFPYYESDKYCMCVQFIBBNVOKJWARRJIFENLJMXEBHBMMQWWAAWSUPJQKCFHDSOLTUXYZRPPKXFQJTRGYGN");
    msg.maneuver_type = 18628U;
    msg.maneuver_stime = 0.9482659335004018;
    msg.maneuver_eta = 1135U;
    msg.control_loops = 2323670981U;
    msg.flags = 212U;
    msg.last_error.assign("ZDTBCJPJYUBGTSGZCKWSHXFXIZWBUIPESNXYXDYJHSJNGZPJLPFDATIAMEYNOTLULDUKSQLQMPXLFETJKKLRXUVOREUCSABLTDYEDLDRPWRZVMKNAPMHUENIJAVXAOYGHGKFWZQIRZBDFMUAOELWINHOXBJGGHC");
    msg.last_error_time = 0.7168642584190239;

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
    msg.setTimeStamp(0.5783552442746266);
    msg.setSource(53529U);
    msg.setSourceEntity(147U);
    msg.setDestination(32054U);
    msg.setDestinationEntity(228U);
    msg.type = 146U;
    msg.request_id = 13200U;
    msg.command = 125U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6457226225134417;
    tmp_msg_0.lon = 0.40758003116728825;
    tmp_msg_0.z = 0.5461487007994481;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.050347815550894515;
    tmp_msg_0.speed_units = 108U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 41368U;
    tmp_tmp_msg_0_0.off_x = 0.7243843987086448;
    tmp_tmp_msg_0_0.off_y = 0.7631921230735832;
    tmp_tmp_msg_0_0.off_z = 0.16500326921017439;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.8723586457351601;
    tmp_msg_0.custom.assign("IGNDFBWTMBPZXFURILWNNOZMHVNIXTJOEPGENQEZKHFAGKNTCRVKEUJHJWQESYFYZLZELRWCLVVPYKGXBHVDCZAGDBWXLVQBWIOCBSREEPYYBQLCMNACAFTJAJDWUKMVIUWFMLP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30520U;
    msg.info.assign("PTYSKKGAVOTWEHXVEQZFNBVPAONEAZYFXJRAJZBWMRIONVJQLKESCDWOTNRRAFBRYJXCIUSTRUYNSLCFKVOHMGQNSYAAPFQJUQLTCHDPLZBMGDDZLYVGQMYIXU");

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
    msg.setTimeStamp(0.02528136242612722);
    msg.setSource(38587U);
    msg.setSourceEntity(95U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(230U);
    msg.type = 151U;
    msg.request_id = 37190U;
    msg.command = 221U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 44727U;
    tmp_msg_0.lat = 0.5293161785854614;
    tmp_msg_0.lon = 0.9222337238419707;
    tmp_msg_0.z = 0.6666260588025688;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.7347495121983897;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.duration = 23002U;
    tmp_msg_0.radius = 0.20414417256924844;
    tmp_msg_0.flags = 155U;
    tmp_msg_0.custom.assign("VYMPZDVBATYKXZKXVWITJHJINSENXOMULWKDNPVAEVRDBXSRDHIQUJXACMSKGLLRTIQNUUPLOR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27676U;
    msg.info.assign("WBRWPQOQVWARZCYWXDPBOECSNXOVLSYPETTUZCNVOIYHSJUUUQITRJGYECJBMEJIXMHI");

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
    msg.setTimeStamp(0.9929567599056182);
    msg.setSource(39144U);
    msg.setSourceEntity(17U);
    msg.setDestination(55007U);
    msg.setDestinationEntity(44U);
    msg.type = 199U;
    msg.request_id = 4043U;
    msg.command = 20U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("IFCTPJTMBEEPMRUNVVHGVOIAZYTQHXIOAFXJYWCR");
    tmp_msg_0.formation_name.assign("IFXWXALDBRAVOVWLUCWEPRRBHMBZGUQWWSHJPHTUKHMJTGWLENYYAQYPOIPZMBZNONZRQNEGQKXTUTKYDIFTKPBLTWKYQKASCISLIRCWJOCBCDZPIMVLDZKTIRYKFMITGHZNNAHUPVSUDBSSNVUJRJHBERFBUOVFXAGLPEXUOEMYFFUXOHXSPYKQQPMVECFVFEDXAQZCCFMOVJBLYGOXMRHTASCWGJDZNHNOQLVNDGGDZLTJERMCKXAYW");
    tmp_msg_0.plan_id.assign("MURPRHGMIKENHSQNUQEOVNJLAI");
    tmp_msg_0.description.assign("KHLRHIAMYIJPNBKKPG");
    tmp_msg_0.leader_speed = 0.9785596279136293;
    tmp_msg_0.leader_bank_lim = 0.4885958919823349;
    tmp_msg_0.pos_sim_err_lim = 0.1617199866899749;
    tmp_msg_0.pos_sim_err_wrn = 0.34997994878162697;
    tmp_msg_0.pos_sim_err_timeout = 41425U;
    tmp_msg_0.converg_max = 0.057798608301269594;
    tmp_msg_0.converg_timeout = 17035U;
    tmp_msg_0.comms_timeout = 62589U;
    tmp_msg_0.turb_lim = 0.37390331576853786;
    tmp_msg_0.custom.assign("TFBLGKFRSCXLHQLAZUWLICGMZXDETNWJUQGYDBTYXNI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19405U;
    msg.info.assign("GSPSZBVQNPVPUMAIAMCSOKLRGLHFTKAKXEAWZLBKSLQQYEDOWLYFWXYVTIRQUJYRDUKSUJPUGXTEU");

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
    msg.setTimeStamp(0.9854502047995204);
    msg.setSource(31100U);
    msg.setSourceEntity(215U);
    msg.setDestination(46396U);
    msg.setDestinationEntity(12U);
    msg.command = 6U;
    msg.entities.assign("TIUJTHVYQQKXVVJJDJYWPAEWNYUCGAKWIWGIWMUYHCQPCUBGOJXDIDYHWBBHRUUDJOXMOORWNHSRBUQENPIZDCTGASAODKNTSQNEJFGJLXTTRPQURELKFFKVPSVCNNYMMKBZHFDBLOKWOCEXTKLFIOQLEXVXAXDNMTVMPCHA");

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
    msg.setTimeStamp(0.7373373210367788);
    msg.setSource(14217U);
    msg.setSourceEntity(99U);
    msg.setDestination(9866U);
    msg.setDestinationEntity(232U);
    msg.command = 93U;
    msg.entities.assign("SFBGNZBBVUHGSFYAXOTJARCTVDEDJPIAGETEXGPKQLARIBLNZKDXVZEVRYPPZDUKJMRRIKFAMLXHKOCXRLNCOUIBKDFQGQBWWNHBQARPRUUFKNHLAPOQHFLBJYEZWADUGGXQVTVADZVLEMPBOEZTRNSPDYHBOUMWNCDWVZWTQDQZJMKGSCCHIKWSIXFINQUTKSYYIOVYTFFJHRLZOFYNTYOIXSNJJOLHCLGJSSAWXYIEUQXCTMW");

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
    msg.setTimeStamp(0.27209284733579264);
    msg.setSource(10973U);
    msg.setSourceEntity(126U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(28U);
    msg.command = 232U;
    msg.entities.assign("BIDZBCPHXUOYK");

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
    msg.setTimeStamp(0.48868229647038375);
    msg.setSource(31958U);
    msg.setSourceEntity(223U);
    msg.setDestination(62922U);
    msg.setDestinationEntity(98U);
    msg.mcount = 141U;
    msg.mnames.assign("UQWPCVFNEZIANQKLJYZMODSCUVJAMFTHZXXFHEOHVKXYWCQGQJMBQQWJWJWQGEY");
    msg.ecount = 232U;
    msg.enames.assign("AHOPGMOZAZUVIYOTUQCYXFRZEQUHGLXWDFGADYWIDQSLBUDJJBRWHVBLXVRJMCYJECMUZQDPTNVLNRCEZYTBLSJVRWGEXKFOMQZOHCGETJLXGMHCOBANKEUWZSFKSQEPXWIUGTBKWSHLLMOVYMXARBPHUFSMYJHKKLQPBVCAQFCDSFTHTUJCG");
    msg.ccount = 112U;
    msg.cnames.assign("IQQCTYLHUVYDKLNUFIINWBOMTTENPWECRUAZNPLKIBGDBSLKMVQIAZOXRFGSRMYOQEZTGUUOIOCZYGPVQOBUBKBALAYPPXIDUXPBOYKPTQPSKYOLZGUOEWENSANZMVLFGSXDI");
    msg.last_error.assign("TOOPVPOJUBCNXKEVKAKIKSLOMMLVZEUDYEPUXVSXGGJQNBBFZDQMYFVUY");
    msg.last_error_time = 0.8386755422877883;

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
    msg.setTimeStamp(0.949920918674757);
    msg.setSource(43378U);
    msg.setSourceEntity(109U);
    msg.setDestination(11811U);
    msg.setDestinationEntity(170U);
    msg.mcount = 66U;
    msg.mnames.assign("GHHFXJLZHICIZPAGTUWYRQNBZSQQQPPRBXBCTFJOEDEEOHULJUREDAHCLWVRRRDDXZKUGKVYAQBEMBELKKNUHMSGOFLWRUYFGJELIMOMFIXWPZNGDOI");
    msg.ecount = 208U;
    msg.enames.assign("OBSMMTCCRJDSOUGWSFTDHEUYBPRHYKHFXLXVIDKNPKRFGMABFLUPULTXZUSVGZOZWYENSQSDPEWSLYTPDRKDULGCQTATRGIBQJDKWXKEXQWHBLGNIAUWPYJJANZTVHOCZNNMTXVHHSLRIBZUFLRSZGWFECCBFQQPMUJEOXZGPEDLRTQTOKVXHBVYIAYFDVVO");
    msg.ccount = 204U;
    msg.cnames.assign("UEUGZXZIPLZOKGUGHRYYGCFYIAHLIQMKFWHUJEOFZIVOKLAFOOUMETWZVVSCYWQAMYRZDVHJGPLOBMYCCBTSTJPEFJTIMNSGLOALJQDPCQHKQGQTKKVFUTTCNDRVKBABPHMRLJDCRWCPNMQATIDFMKGWBFSXSBYIRXFQIWVXEVNEEYJSAJYNWZT");
    msg.last_error.assign("TONCGFPELYHHRTULREYBMXTDLLDDQKWCAARCZWFFTKYQIRZEXQIJRIDENMXIXSNSESJSZPZHDMRNWLVUNXLQNQTECOAFVGVMNJVYPNIJQUQFZKFRCDK");
    msg.last_error_time = 0.6766621492654844;

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
    msg.setTimeStamp(0.7395421325124825);
    msg.setSource(36266U);
    msg.setSourceEntity(111U);
    msg.setDestination(9032U);
    msg.setDestinationEntity(174U);
    msg.mcount = 5U;
    msg.mnames.assign("BYJAQYVPICKCUWHCUQXQDBUKJVPVKFXDIASRBZKKTMXJZFUWGNKUNZCJTFRLPENY");
    msg.ecount = 75U;
    msg.enames.assign("QOUXYJQRDAZCQOHVLOSJHNNPXMWISNXOZKGQMXQDMJSCVVRCBEFSTEPONAFHPWVZMWCEAHQSZEJCKKIDXGUQIJKKWJHGRMXDNNKPBZTHNVFTZBYERTAMWPWQCMVWBCRDOKXEGYECTDALNNHYUVVWJDNOUJTRVMTIJZQLGOAVLUHUFCILBWAIJTSHABXAFPZPGLDIGGKYDZM");
    msg.ccount = 243U;
    msg.cnames.assign("DGNQCPQKLPJQDDMDJIDVXCKXAOSWODENKMUOPSPKBRFGOVZVBVBSHFMGEWIHLSWQBTQKQTFUQWJFWHTFTZJNYBPUF");
    msg.last_error.assign("MELFRUDXQYLCSOVMNLDXVRUBEXTZYTGOYWUEKFCVKXIUIAHVAUCNTPEIKYYBGPBHXLHXLUFIANSLEDBTRDKFFWQFYQPAIFPJCVYODZSCWXRNYSUWIZJGJEVVQDOJAKKKCZHOJGAZZCKBEDLTRMPSRGEVGFDGJGHAUHHUBDNSQWYQWWILPWUJDOBXAEBTHHZPNWCZNTRYGIJVJOSIMIGORO");
    msg.last_error_time = 0.46609627235418727;

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
    msg.setTimeStamp(0.9140167171289055);
    msg.setSource(59209U);
    msg.setSourceEntity(187U);
    msg.setDestination(45569U);
    msg.setDestinationEntity(57U);
    msg.mask = 13U;
    msg.max_depth = 0.2054666362375257;
    msg.min_altitude = 0.5233038456597346;
    msg.max_altitude = 0.6023067391778987;
    msg.min_speed = 0.9023574890709802;
    msg.max_speed = 0.15894782117752237;
    msg.max_vrate = 0.6254224689683522;
    msg.lat = 0.5736166604777717;
    msg.lon = 0.21243038386659252;
    msg.orientation = 0.8982633629518714;
    msg.width = 0.0919772372649812;
    msg.length = 0.9372110768302002;

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
    msg.setTimeStamp(0.18421176541229234);
    msg.setSource(15807U);
    msg.setSourceEntity(13U);
    msg.setDestination(40887U);
    msg.setDestinationEntity(251U);
    msg.mask = 224U;
    msg.max_depth = 0.3390960480385552;
    msg.min_altitude = 0.17228637023146132;
    msg.max_altitude = 0.24025238453704723;
    msg.min_speed = 0.1834625151620639;
    msg.max_speed = 0.6921035457597037;
    msg.max_vrate = 0.3064913563950027;
    msg.lat = 0.43775843838818707;
    msg.lon = 0.08999013486371643;
    msg.orientation = 0.8919617481122062;
    msg.width = 0.27516302766653344;
    msg.length = 0.624977416196438;

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
    msg.setTimeStamp(0.5485796500324812);
    msg.setSource(3299U);
    msg.setSourceEntity(151U);
    msg.setDestination(33548U);
    msg.setDestinationEntity(110U);
    msg.mask = 7U;
    msg.max_depth = 0.5462278708559127;
    msg.min_altitude = 0.7006414382846443;
    msg.max_altitude = 0.8940389721933281;
    msg.min_speed = 0.42841660616937705;
    msg.max_speed = 0.1737442594807641;
    msg.max_vrate = 0.6995870325866347;
    msg.lat = 0.2839689763613318;
    msg.lon = 0.2934633112833335;
    msg.orientation = 0.19101186387617952;
    msg.width = 0.3428969015069696;
    msg.length = 0.3536847819262857;

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
    msg.setTimeStamp(0.9510108668825444);
    msg.setSource(38040U);
    msg.setSourceEntity(175U);
    msg.setDestination(20322U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.49214896828362054);
    msg.setSource(53765U);
    msg.setSourceEntity(50U);
    msg.setDestination(53154U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.8778809354580926);
    msg.setSource(42506U);
    msg.setSourceEntity(104U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.35544838333454665);
    msg.setSource(17989U);
    msg.setSourceEntity(174U);
    msg.setDestination(63394U);
    msg.setDestinationEntity(41U);
    msg.duration = 53994U;

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
    msg.setTimeStamp(0.5920828297779998);
    msg.setSource(30316U);
    msg.setSourceEntity(240U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(212U);
    msg.duration = 18317U;

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
    msg.setTimeStamp(0.3696560413418877);
    msg.setSource(56936U);
    msg.setSourceEntity(37U);
    msg.setDestination(10410U);
    msg.setDestinationEntity(184U);
    msg.duration = 17411U;

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
    msg.setTimeStamp(0.4190687893299724);
    msg.setSource(26767U);
    msg.setSourceEntity(114U);
    msg.setDestination(19713U);
    msg.setDestinationEntity(191U);
    msg.enable = 110U;
    msg.mask = 1206433714U;
    msg.scope_ref = 2947532089U;

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
    msg.setTimeStamp(0.820976600557771);
    msg.setSource(55825U);
    msg.setSourceEntity(159U);
    msg.setDestination(59658U);
    msg.setDestinationEntity(142U);
    msg.enable = 82U;
    msg.mask = 3395436697U;
    msg.scope_ref = 2078020352U;

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
    msg.setTimeStamp(0.9920564346143752);
    msg.setSource(11494U);
    msg.setSourceEntity(74U);
    msg.setDestination(20431U);
    msg.setDestinationEntity(187U);
    msg.enable = 165U;
    msg.mask = 2430438921U;
    msg.scope_ref = 1034272329U;

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
    msg.setTimeStamp(0.1244279768692258);
    msg.setSource(55309U);
    msg.setSourceEntity(10U);
    msg.setDestination(52477U);
    msg.setDestinationEntity(110U);
    msg.medium = 39U;

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
    msg.setTimeStamp(0.8314393892793805);
    msg.setSource(21454U);
    msg.setSourceEntity(217U);
    msg.setDestination(9681U);
    msg.setDestinationEntity(38U);
    msg.medium = 16U;

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
    msg.setTimeStamp(0.5181650976851294);
    msg.setSource(42965U);
    msg.setSourceEntity(131U);
    msg.setDestination(52336U);
    msg.setDestinationEntity(116U);
    msg.medium = 5U;

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
    msg.setTimeStamp(0.6922339529617991);
    msg.setSource(35317U);
    msg.setSourceEntity(116U);
    msg.setDestination(63067U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6262907436674495;
    msg.type = 174U;

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
    msg.setTimeStamp(0.7707837175885749);
    msg.setSource(46742U);
    msg.setSourceEntity(11U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(37U);
    msg.value = 0.41440936339143486;
    msg.type = 106U;

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
    msg.setTimeStamp(0.18840313799878727);
    msg.setSource(50943U);
    msg.setSourceEntity(93U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5756644711143069;
    msg.type = 184U;

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
    msg.setTimeStamp(0.37868327839977933);
    msg.setSource(55016U);
    msg.setSourceEntity(156U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(118U);
    msg.possimerr = 0.2979834375259074;
    msg.converg = 0.24171319836233218;
    msg.turbulence = 0.4772477492678092;
    msg.possimmon = 25U;
    msg.commmon = 83U;
    msg.convergmon = 119U;

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
    msg.setTimeStamp(0.5362571003180829);
    msg.setSource(13263U);
    msg.setSourceEntity(68U);
    msg.setDestination(42109U);
    msg.setDestinationEntity(218U);
    msg.possimerr = 0.9851458987498498;
    msg.converg = 0.5105466808020822;
    msg.turbulence = 0.28415185582746394;
    msg.possimmon = 81U;
    msg.commmon = 177U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.5022749227067964);
    msg.setSource(53828U);
    msg.setSourceEntity(239U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(177U);
    msg.possimerr = 0.012436015604751383;
    msg.converg = 0.5436957121347188;
    msg.turbulence = 0.9651701942949509;
    msg.possimmon = 110U;
    msg.commmon = 133U;
    msg.convergmon = 152U;

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
    msg.setTimeStamp(0.4053864601328704);
    msg.setSource(36184U);
    msg.setSourceEntity(226U);
    msg.setDestination(54022U);
    msg.setDestinationEntity(132U);
    msg.autonomy = 89U;
    msg.mode.assign("UOMOACQGRMDFQOQDNFJUSZONOTEEIOJIEMKJADLLUKWCKWXZAJFDXTTAVNNLDRPETWVGJBVCCCJKZBLCCA");

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
    msg.setTimeStamp(0.9707225535477465);
    msg.setSource(51953U);
    msg.setSourceEntity(101U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(72U);
    msg.autonomy = 253U;
    msg.mode.assign("CDAGSSOZTNANENDTOGWVQUOWSRKYBPVFJIWVIETBCOPAALJXCTWRYLTZUZRRATFEVCLPQHGBGPBHPILKHCMXNGPHJBOVEHTKAGFVPYZXCWWHIREUICJDGRDOUTAZKMWIBDFGMXKQNWDZSUVRDVYUNLLQGELJZBQF");

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
    msg.setTimeStamp(0.9729144527507478);
    msg.setSource(45282U);
    msg.setSourceEntity(250U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(222U);
    msg.autonomy = 117U;
    msg.mode.assign("SVTISDTQQPBAMLFIZYITYZCQKHULVCFHSNZMABTHFCXDYPZJYEUAJGOFQHVETROUNWNLZUGGXRKMNDGPTTKHMBWFMXRBZJGLOWRHXJXCDRXSMYQYSJDFUUGAHDZOAEPEJBPLBNYDMUUAKFFMXWPCFKVLNNRADQOYLNMZENOVDLBUVHCEWJBMKABOSE");

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
    msg.setTimeStamp(0.7490901181821017);
    msg.setSource(23406U);
    msg.setSourceEntity(110U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.7121479242053331);
    msg.setSource(9027U);
    msg.setSourceEntity(60U);
    msg.setDestination(37485U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.21727783648799248);
    msg.setSource(41259U);
    msg.setSourceEntity(176U);
    msg.setDestination(58131U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.1808677799336682);
    msg.setSource(10156U);
    msg.setSourceEntity(128U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("AVRNJGYPRUJKVZXZHYXMTSWIJRYGTGZKXCBIOKXTSBHFULRTXQRKYPQHKEFYDAMBIEXKTNNSOJNVPQYXOXBVIWPRVDEDAFQUIBEPYVGMAULHHBIMJLBNLOWUUTAVWPGFZU");
    msg.description.assign("XGDIUZOQFQDAPWXQUBMVYBSBIMODLHTQVGYMYVDRCCIENWJVTGFHLNNVO");
    msg.vnamespace.assign("XFTHZQKIZCBYBXRQAGCNRIQNJRBFMNHNFSQPTMCWXDJZZYYWGPTLVREAVSPPUTDINSPBWACFNTKJTVTGGQDQZKDHCNADDMKZLPYRXJZFUZSBJNJATYOFOSULBDEYLFSOGWYZJYCLQSXUOUQAWHWKAFISUQRRLOGMIALLKUMXMDVKHIIFOEDLKPGGTOXMPHBEBRBISWFMGHJNDTYPEINCEUZCCVPWKIAHEEVVRXJ");
    msg.start_man_id.assign("SOSVUNUZZWJQLPWGMJQLNMIGBPNHDRJDDXRDXIUSANZGYVICWEOHFVSHPJLBXCFXWESXQZRIUZTHFGCJPKHNACLVOWPBGNYFIQJJGOGUQVAXTBRZTOGJRKYVECHDDBXUIQM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZFTODYBBFPTYFLJKIMQGIUJYCTJEDTTASMSCEICQMTKNHNKVMZGBFHWVMONYFRDMIOUZNVAUDCYJZEIXJWPOLPSGXEHTVRXGERNSWGWVTPJQUEZVSCQUMAYKXYEMQCCIBSJZKUGGXAAJNWBRTZHUEHXFSPTOLDHSRYRBCSKUOHDQZLWRONYKGPHIBZSYMBKOERLWPDAFXKLLJIOCHWIUNPIXQWQWBPLJFLXGAENHMRFPRXAFUCLQBNAQ");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 24206U;
    tmp_tmp_msg_0_0.lat = 0.9297587234969553;
    tmp_tmp_msg_0_0.lon = 0.37121390872792503;
    tmp_tmp_msg_0_0.z = 0.8705105144656567;
    tmp_tmp_msg_0_0.z_units = 116U;
    tmp_tmp_msg_0_0.pitch = 0.16257736602618178;
    tmp_tmp_msg_0_0.amplitude = 0.9402458026399896;
    tmp_tmp_msg_0_0.duration = 57167U;
    tmp_tmp_msg_0_0.speed = 0.4086151612503929;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_tmp_msg_0_0.radius = 0.14743019366805665;
    tmp_tmp_msg_0_0.direction = 224U;
    tmp_tmp_msg_0_0.custom.assign("QGMOVGNFJNFWXRTQRMHBEYHYLTJEOFPYQBVJVRXPYPHWJYMMTLKROGLVIWMEDHNXUNRESSDSBJBNLAFATSKKVYDZCOTDRHCZLHTHNXTXJBLDPICIAUKGAWVLEIJPPFCKUMZBYEOVKJPEIFFNIWBTSQYJRXACFCCIRZJSNBLCSKZAUUTSUDPOQCXQWPG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Dislodge tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 17781U;
    tmp_tmp_msg_0_1.rpm = 0.5370104244616946;
    tmp_tmp_msg_0_1.direction = 214U;
    tmp_tmp_msg_0_1.custom.assign("MJBHGZTPJOEUYXCCYSPKJNMSOHSLXDKYDTBNPPNSWDIQOJVLPHVWQQLIUGZORWDNJBBQYNGUXAFRRKKEXMVRQQHOK");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XHMTOFCRENOBHXQQFRAUJLIEYRSFLNIZLVSSULAVKUCZPBQBVNFDVCAQDWBNXYJERAURCJMIXMCBAHKVPINRZKJEGRVMNMNUSOKYOJBHURCQIKZPHUFQEOUQDAHRZCNPGPUTLNEOMQIZEBGHGFFOZAYCGFYKTWDKOEJHZGSASPCXXTD");
    tmp_msg_1.dest_man.assign("GEGFICKTPZOEAMOPOKCWWXUYBFLRIPJFGUQPDDJBJXTPFGRJZHQWMUZNVAIGZKHHRDBYBVHKZQXWAPNDMAURRFCLGKFRCXSAJELQKVWBDRAVGIRXSSDEYVKXFLKFNDPTILQLEOTBLUMKYTMCXNMOUZSUMYUMQFNIOBVDQXEEHGCOUTNIEQCGEJIVQL");
    tmp_msg_1.conditions.assign("RLWYIPGVXLVEQJOOVBJTTWTXZBZXAHFPUYCIMYQISKFGUNWJXIFXSWFRUJQIHSOJTFVYDRQSKUCBYVEOZMNOLAPZAMQSVVGDWNKCRETPDGEZZQPDJTFUBYMAWRLSCDGLPHKHLIZAXBIGMQUUHMSPSHMHBHKHWRKZRT");
    IMC::CloseSession tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sessid = 1058936218U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Target tmp_msg_2;
    tmp_msg_2.label.assign("HITZTGJIXXQTVUVCCKWBBAWHFOOQCDWIVZOSDVMWRXYTHIJDXMEUDIMQATJWDMUURUQAJRGFUKYMPLZQOPSXJHPESUCBWQMQJNDYKNTBRINOFRXAWLJGRVHHYNOZGWVPTMS");
    tmp_msg_2.lat = 0.33350068993291615;
    tmp_msg_2.lon = 0.3133630782533675;
    tmp_msg_2.z = 0.6688698014953013;
    tmp_msg_2.z_units = 165U;
    tmp_msg_2.cog = 0.7328615987842002;
    tmp_msg_2.sog = 0.5041157439842809;
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
    msg.setTimeStamp(0.9202448408211013);
    msg.setSource(52460U);
    msg.setSourceEntity(84U);
    msg.setDestination(564U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("TGMYBPJKAIXWXNRWCJJHXVRZIRWDJQUGWUCZHQVLJSIIVVVTUEPDB");
    msg.description.assign("JOENQIWGVWELVLXOTWBWOHILRGGEXNMKBDUFIOZYEZRFRPUSFVDARDMDQYSCZGIPZPYQJEDBLJNQDJTBXH");
    msg.vnamespace.assign("DMLDDCTRBHZPFYKWEGGWQSDGIVPNIWQPEFOADRZORECIPTZHSBTXEVSUQHVOTCZRMMKLOBYFZVNHRYLACLQNOEJQVYIEAKEALUHDIQKTPSFUQSXFXJLHHITMSBCDGQOQAJJLBHUMPCXVKM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GVWFRFCWFKIXRNMPXFEVQEKHXGIUJNXXLPINAOFBRIOCHKMHYTRLAIARQGHXGAPSVMAQJBIWFRLZQWBTYRSSDEVQEXABWPJNJHBHJGZKKNCPZZETGXJYOQTMJVVEZXVUCSFBLXQGVQDDUSTMYDICONDOHZTGPRLPJKASBDLGNOVRCLVKDFQOPZGKTBARHJYZLSYZNMPHQCENMPAMUYTJL");
    tmp_msg_0.value.assign("KKKRSIUJPD");
    tmp_msg_0.type = 113U;
    tmp_msg_0.access = 233U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KSKUOGJCDANRVSWDBJWABQKEZEXXGPZBMHFOJPLILHVGAOITYNIWVWEMDKQXKGRVKUZBXMA");
    IMC::GetOperationalLimits tmp_msg_1;
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
    msg.setTimeStamp(0.8956681634242695);
    msg.setSource(15002U);
    msg.setSourceEntity(237U);
    msg.setDestination(43485U);
    msg.setDestinationEntity(92U);
    msg.plan_id.assign("WEONMYUNAIQTUZKXKMARMBWSVVANEFKIGPMYAXDNCJTUBKLVPKQCUZOSBVHKHVPCUELWGAWHFMLFBRQBOKXTYCXDFXGUJHOTYFRPVHEYSFJSAWUCEDOVDDGNJPGVRDUGZJOLL");
    msg.description.assign("IFDZQLNAJQUHUSUHREPJATRXYFJOQCYWLFGJCCIBGEEXSTDEQVVZDCQEBPQYADXYOLSBKINTMSRPPIRQXWYZIBJTBHWOREQZMULCVTMFZVHNGNZIHOSNYYYGXGTOILEJLJIDIJFMUOCRUDQRVPNWAINMYBTDCXEWKKZNGTSXJVRZOKSLGBOXMZMZHSJLFKVVWBADVUNMAAKKAFKGOMARGU");
    msg.vnamespace.assign("PLCISQQQPFSPOXFWCVARJXLVMFURNPPCYASKDPZJDBILFWUTMAIYWCNBJYYRHLJEWUSAKVEUXUNLWQFETZKFBKZYZVDRGODXTEDIQADVLNGR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KBGUBUSFYRSVEMSYCGVUKASIXHRUGXPDNBJKJKWDGETLZXWZMRAIAQTSEHDGDPMRVNWYDDCJYHPMCYOHGXGTNWDRXXXUUPUVTFIVETEQEZOYACLPAFZILZQOOHQQIMHUFCPTACHCMZJTWCKJOKAB");
    tmp_msg_0.value.assign("IVXMSUBABATYHNPVJKMOYFKSZGGRWNZVUQJQDQLTOIXYHALXETLUJMBFZSFECRPYXVUEBUENGBNMLSHOMJRROSTCJCWCCZNIJQLGZRMPDTXWXCHKFQBTQKXAPGTNNIYVTDDJQAILIZNKFFZQVFRWATDQDEJJPSJULEUGPXDYIRRBHNSYMCLUGURPIZNUPBOQOCBGDEHVMWFBGRTWKXFWOKHIEZCSGDWZOAXMMWKWVYYEHKCVHPIFSYLDAEK");
    tmp_msg_0.type = 40U;
    tmp_msg_0.access = 44U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NBKMEGHAJOCDMMZOUBUQRTHOHPHQSDPOFALYYSCKXAFMJBMVBQDJELXVCLRUYIJEYNYKXVUCCWXJNTRWDETFDLTXGPIZLGTBZHPYMWLREKGWXKGQJEDUPQZFIPVJASFYTDXEICVPIROKPRCHDNHNCDKHEZISDEHOUOKZARAVFBQGIJXKUFGWHGIEUNMSNWNWFXTFVZARUWSGZBAVKFLCMBLLBIJWOWULNQTGSNTYCIXVQTSJO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MAJXWKEGWBVUMTQVKDQULEOPFNLKQMOFWIIBAKLQNXHRECNYLECIEWRUNARJXZRKQNYUBBTNSPGAABNQHBEFJHOLXHVOSSDZQGEPCQJXMEZHVJIUMKFSVZWSXVSWSWICRPTCTDZWKPUHJGPRBMCAVZSFNBOODXITWCLRUDRPYOIXMZQRPUWJHXFCJKYJNSYYLQDFFZCTUPUMSPIVDGKTDLGOIHIVGTA");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 35149U;
    tmp_tmp_msg_1_0.control_ent = 176U;
    tmp_tmp_msg_1_0.timeout = 0.29319266362175067;
    tmp_tmp_msg_1_0.loiter_radius = 0.2700867309075017;
    tmp_tmp_msg_1_0.altitude_interval = 0.471734228164565;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SetPWM tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 105U;
    tmp_tmp_msg_1_1.period = 1668633781U;
    tmp_tmp_msg_1_1.duty_cycle = 327014698U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CcuEvent tmp_msg_2;
    tmp_msg_2.type = 167U;
    tmp_msg_2.id.assign("RJPNXQEFQNTICZMHHCZOFLLTAXOPJFRSGEXGTSYZHTWWBKHBXYQKYFVDEDAKHEDNPBMLLFAGWGQGKUGQHYMJONKJUPCIIPXSREEAUXSYUCVLQDDXZINNNIKDRNJUZBRZOBBKZUWMWMAABMXNOOHSAVSGWOCUCTRHTVREPEPNVFVAY");
    IMC::UamRxFrame tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.sys_src.assign("DMOSAPEOGZYBXWQJPVMOYZYRDLPKNGCOYRIXHKNOSTKSFUJNMLKWLVHVXRFCCHVDVEXXXUPTRBLDQIIUZYTHIAFLQWMJZX");
    tmp_tmp_msg_2_0.sys_dst.assign("SMNHOMDZVBYCOPPEOYUTCNKLOOSFAZYHITPYCBVKXNZUYNGQWFOKLQRWLPEPIKZQELXFKGRLDTIHBKRIPYKDQJGOMFNTUAYMLSIBTBWIAENUNQHKULXEVUEDIQFGWMUHOMIKWAOHMWTCIDRZJUSGNRCRLSRZVEWDHAOXXMJJVEETAHHCJZXSYRUDJYQWRZNVLQFXJHCAYCVDVJIGDPVEBSGRSWZAJAMSBFBMGF");
    tmp_tmp_msg_2_0.flags = 69U;
    const char tmp_tmp_tmp_msg_2_0_0[] = {-26, -76, 14, -66, 103, 89, -61, -4, 96, 94, -110};
    tmp_tmp_msg_2_0.data.assign(tmp_tmp_tmp_msg_2_0_0, tmp_tmp_tmp_msg_2_0_0 + sizeof(tmp_tmp_tmp_msg_2_0_0));
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    msg.start_actions.push_back(tmp_msg_2);
    IMC::OperationalLimits tmp_msg_3;
    tmp_msg_3.mask = 254U;
    tmp_msg_3.max_depth = 0.07301682462637027;
    tmp_msg_3.min_altitude = 0.42670582985467764;
    tmp_msg_3.max_altitude = 0.30902739376067057;
    tmp_msg_3.min_speed = 0.893725517861437;
    tmp_msg_3.max_speed = 0.13922957024736393;
    tmp_msg_3.max_vrate = 0.5579207704256637;
    tmp_msg_3.lat = 0.20844272208339076;
    tmp_msg_3.lon = 0.42095364678954095;
    tmp_msg_3.orientation = 0.5997826226500332;
    tmp_msg_3.width = 0.018565060836910896;
    tmp_msg_3.length = 0.7614554024733607;
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
    msg.setTimeStamp(0.8638431187364957);
    msg.setSource(8147U);
    msg.setSourceEntity(179U);
    msg.setDestination(54550U);
    msg.setDestinationEntity(112U);
    msg.maneuver_id.assign("XXLSIVKRMQPJXVBMSAJTYYLHYHOPQSBMTLDXYPWSITEPVKEHPBZNOWNLIDQTCZHBGKONLDDFDMGCCQDEUZUWFVABNRRUDFOZBWKMQSC");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("VSIESBSHMGQKBDMYWCADJRLHVOYUZFBXNVFFCCRQCWIANXMITENAIGUHNUK");
    tmp_msg_0.formation_name.assign("ORDYGJWIJKFFFKPQJENHIBLQVSNWOLUYRRIPJMWAXILWTDKENBXHFNBKJFZHKTWHE");
    tmp_msg_0.plan_id.assign("TBHHJJZUINNIBTOWDNVDNRSSWUMAPWDFPVXYQFILTZCIEWUIDQOUMRHODDGJDTRFBLBUZMLBKTOJUOGWSHJNEEKLWIHPIYTZIXCPZHBMXMUCKHKSPTTVVNOPYZAFIEKJDEDSGWTJQSLDELRJQCFXO");
    tmp_msg_0.description.assign("FDLIRKBIMIYGMOHQWHRJSDQZRFIGHJDWCABCWCVMTIWFXLEQZDBERMARJSZDNAMLCPSMOSKSLFOCTVALUIJBDGPXRQNWFKJZCOTUKOBPWMLVIEZFLVBZUKVAFHLRYMKNYYVNAEGZCHDE");
    tmp_msg_0.leader_speed = 0.1826816367550932;
    tmp_msg_0.leader_bank_lim = 0.7164803415857515;
    tmp_msg_0.pos_sim_err_lim = 0.719776226860093;
    tmp_msg_0.pos_sim_err_wrn = 0.7993048490189296;
    tmp_msg_0.pos_sim_err_timeout = 4475U;
    tmp_msg_0.converg_max = 0.6235802557497587;
    tmp_msg_0.converg_timeout = 17055U;
    tmp_msg_0.comms_timeout = 54232U;
    tmp_msg_0.turb_lim = 0.021102293117016724;
    tmp_msg_0.custom.assign("VMFRRTELNIMXXMQLABFHYTDWLONKRUNKZOHJCPVPOPHVMQRREVNSHTITQKGHXURCFEYSUWSQXMDLXBNAZZGBQECOCXZOSWJMKDYUQNSYWWOPG");
    msg.data.set(tmp_msg_0);
    IMC::DynamicsSimParam tmp_msg_1;
    tmp_msg_1.op = 2U;
    tmp_msg_1.tas2acc_pgain = 0.43542384874271456;
    tmp_msg_1.bank2p_pgain = 0.9118488232586354;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PopEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("ZMSGCXMQSDLURJQVJKBZUTHKOAFUBUMGWRCLRQYSVNOPLYPBPJIQLTYOOVZJDTQAHBFSLELPADCRUVQFWXKDOTMDHIBZAJEBIHCINQPVNYDFUZFLZCMPFPROHIIHAEHJTUYAMEKMGXBPZXKKWKSKLOMWFYQIE");
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
    msg.setTimeStamp(0.919603314529875);
    msg.setSource(34342U);
    msg.setSourceEntity(36U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("TAAUKMMVTXJKVIVSBDCUVERPSODHGZMRJBFSHCULUNDZQSQFEDQYTYGRZVYFQQFLQRVLOKYGTILUPKYCQ");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 24200U;
    tmp_msg_0.lat = 0.825638810538491;
    tmp_msg_0.lon = 0.9937986269961279;
    tmp_msg_0.z = 0.346142796364061;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.amplitude = 0.7717585530548909;
    tmp_msg_0.pitch = 0.666078211243535;
    tmp_msg_0.speed = 0.8858456956190813;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.custom.assign("WEDOUHEVMYZFTGOLZVDAAUENOEEQVNONWZNLMBFVQOQWMRSIFLAXSPGNJVUIKDEUGSOCIJ");
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
    msg.setTimeStamp(0.7125772361404995);
    msg.setSource(33403U);
    msg.setSourceEntity(69U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(151U);
    msg.maneuver_id.assign("SVDJXMLHWLUSCHQQTWAWQITCUCFEACTXHDNLYYRETPLDNEXDDGZOETFJRGTFHOWIGVZRETOTGUZAPMOZHLSKTEWYSRARQUOVNFPOIERLJXHLCAPRUYKWVUZBSDGFXQIJXDGDILMJPNCEBFZBONENVWFSHSJYCIVJIBRZKKLKUBQQQUJMKDMNPHVYPRAQVXHGYMBBWJOBKPDMRXMGQOYGMNKACBOJZGSWFXPVYIKBUUYICXAZPLTHFFNAM");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("ERFEPRWFZAYCRQMHDKXPILKDPHDRTYFAXGIXWHWAUPECBUQUAICYMMVSDCARKFJYSEPLEBZVHTBWDXOJMZYQGBFQLVNLOYWIDCNOHTGXUNZDBUSLXPWUYILXDNEGQBBRWIZPAAMPIGALVRCNITHPJUJTSKMNJJXQUNGWHTKKAVYQESWJFWTHDMNCZGQYZHVCNMSQKRJKOYOJLDSMKTEBOFOHLGCFAFVVQEZECSJNBMPROFULTS");
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
    msg.setTimeStamp(0.9222184922588728);
    msg.setSource(5570U);
    msg.setSourceEntity(145U);
    msg.setDestination(57219U);
    msg.setDestinationEntity(116U);
    msg.source_man.assign("FGTQQFGXGCUIEPPXVYFSHTROCSUCRXXPUMHJVARZEXYNYODNTNUJVIQRPVJEULALHJDQ");
    msg.dest_man.assign("IPFNIYYWYZJWEUYZENHERRWXVKAUGGVDSVAO");
    msg.conditions.assign("TAZPWAAQEDUMNXNNAGLYSLXQMJKBWDAIKGHHYCEIUHFVIFIJSLZVBSMPKGACMQTXLJXVNSZJHDCQVRFCDGWHGFWYLKORFTGUXRRWDLMCERPBYRVBJHJTITDZOVVPDBPJKEZOSGOKBPSHEIUSBMEWLOIQXUHQREMPUZEDYXUJLRGQCVBYHZYYONZWOAHQMAIETPWCIPGEDATWFSBRZFI");

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
    msg.setTimeStamp(0.23572777743847584);
    msg.setSource(22566U);
    msg.setSourceEntity(110U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(84U);
    msg.source_man.assign("FUNEKLEGBDWFNQAVBSXZ");
    msg.dest_man.assign("TAIMRIGYFWKPLQYLKZIDMNMENIVZVUDMHXNDOWFTZYUMFWTWDVQPYURRCBGVACHCEBJRFVYLOGINUMECSJRHSDZJLOQKACBWBTVOKFPPVMZEOLXCDMKWGNJUFMYTSFJYJSFPETAPHEIBMXERHOEHSXPUXJSQSDALTIVASRRDDZ");
    msg.conditions.assign("OPDAWWMMXWXOTPZZBDKKCYJNTRKBSXHTITEVSSRVWELVQSERQGCQERJGQMEAYOXJKTCIJHNZXFZAPVZHXUZRHZLFJNMCKQDLACPKQSNGLVIFHORZHFYLNM");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 63U;
    tmp_msg_0.entities.assign("EJLJEUIQWOMHODPYIRIAVGBCNWPNMGMDNWWPTDIKZGEXPCUBHFSXLVAELNSJWLDLKYJFHSCVLODUSITZVOKMCIOJQEJ");
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
    msg.setTimeStamp(0.6166789873401367);
    msg.setSource(45491U);
    msg.setSourceEntity(101U);
    msg.setDestination(58024U);
    msg.setDestinationEntity(236U);
    msg.source_man.assign("VCNDRULPDOSIJYNECBHMUEBQKAFZGTHJRMYKVAPKYYAMUZXRLTTICLYCIOWPKXXIGPWFBXUZLSWGDKJQFAFDYQULCPPMWVMUZMGRNGIBNGQRHAECV");
    msg.dest_man.assign("DOKOQRFZCOPRNSLUAPRHWMNBDKFXAFYJUWVUXQYLVCORZKETPWJHVSRMGAFTPSIXUGKJTESBYXEBTNHOGHJNJOLWARECHFHEQKQBEL");
    msg.conditions.assign("IPYOSNMRESATHWZQMEUDMCUDPLWGINSQOMQKKUJZQXCOBOTKXJLYCFCHGDKJQVVVKFCJBLAIIRWDGZBFYGYHVFCJEYWXFAANDCOUHYXQLJZZBHLHREUVNLMNACYINRJIVKFMWSGETMKXLZKBQPZUXTXMLYXIRSRBWMVGUVPPGCTGHWVKEPSTNJFAQTPYFOD");

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
    msg.setTimeStamp(0.25794240755773334);
    msg.setSource(316U);
    msg.setSourceEntity(251U);
    msg.setDestination(15190U);
    msg.setDestinationEntity(86U);
    msg.command = 185U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ETKFLJXVMRRXHLKSFHAGVFSZMLSBBWLROAXYUDBOKPIKJMTXJRKXHUPEOCMQYUEMZKMSXNVFTNBRYWMCBLRVVGISIYKTCXQNEJBWQZGORLFCXEOGKNHSPZYWVAHSDPVOPJZUWCDFCYCIJHFRASZEOBSPHYUEDFAPNDLNQJOYDLRCQILHQTBNQMSGVJCPMWHZLOADUXWGCANN");
    tmp_msg_0.description.assign("ZGWUVYRMHBJGQSKTOCHJQWKTXVLHFPOJQKFMNAZAAVQXDAVELXIOQEBYORBUHBLQDGGFUDRAYFNJZPONUADWRJTRZJWRMWCNUSSODWIVHPGIYDELAIKHEOTTOCMYQIOBUSLMRYHYZBBLBFZKNCSPYGAMNFFLIKVRQDLXHWEXRYIVTCTJZ");
    tmp_msg_0.vnamespace.assign("JVCWOIYLDMVVAJRSOZLXDLNWDZPIUBNGRKUHZXMJCGYJYSMZDFQEGPVLQBLVLCLITHQIEEPAPGTGATUCNZMRBXEXHRRLBWKHZIOCQJSSTXVUTXIDKHXDHNNLBWAVHFUQZATDCYR");
    tmp_msg_0.start_man_id.assign("TIUXQGMIATNZGTSYMWDOR");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QIGHKLVTWOFDZIPPAUBDYNNGTRRKWIYQMBAYKAUDXHCSASNCNEPRFHZODSPG");
    tmp_tmp_msg_0_0.dest_man.assign("KCEWYGFDARZWSHLVOU");
    tmp_tmp_msg_0_0.conditions.assign("QXWFRMYIFZAQIZOTKFLVIPDEJXHPGIUFXXTUTDSAWIWYLSBZJNBLGPVSBUFGPJURDVFTCUHCHLSQGBQWWFNOYURTHIDOHBNRNCEOOUQMZAAYXLLKVGQKXVHSPYAFEYCTCGCBPIGZKBJVISTHPTHKMRYZNJENDCKMVJKOB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::RelativeState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.s_id.assign("UQVRHEEOGTMEXJUJRDKWTXGPBZXCRHWHTYRREPFOAVDSCAHRDYFVAZSDWUPDYPKTVNKEVXKJJWGQHKCZCNLAYGJBUMGIMQKNETSRFBBPFHEZXLLOTIOLJVOEDKSNZZHYBVSRNFAQJEIGNUKPAFMPVHGMXRYCDYXOAPL");
    tmp_tmp_msg_0_1.dist = 0.19114287741400426;
    tmp_tmp_msg_0_1.err = 0.7276663586917795;
    tmp_tmp_msg_0_1.ctrl_imp = 0.6642879967404501;
    tmp_tmp_msg_0_1.rel_dir_x = 0.5072041846197646;
    tmp_tmp_msg_0_1.rel_dir_y = 0.9049969847744831;
    tmp_tmp_msg_0_1.rel_dir_z = 0.8078918995685326;
    tmp_tmp_msg_0_1.err_x = 0.6345760873692072;
    tmp_tmp_msg_0_1.err_y = 0.7118948848860112;
    tmp_tmp_msg_0_1.err_z = 0.7651849549023081;
    tmp_tmp_msg_0_1.rf_err_x = 0.36156878531884473;
    tmp_tmp_msg_0_1.rf_err_y = 0.17027035074621577;
    tmp_tmp_msg_0_1.rf_err_z = 0.9137596600468504;
    tmp_tmp_msg_0_1.rf_err_vx = 0.7161514821089011;
    tmp_tmp_msg_0_1.rf_err_vy = 0.5528780081829076;
    tmp_tmp_msg_0_1.rf_err_vz = 0.05701319804151428;
    tmp_tmp_msg_0_1.ss_x = 0.30421063661797587;
    tmp_tmp_msg_0_1.ss_y = 0.6361462666630278;
    tmp_tmp_msg_0_1.ss_z = 0.43067961559668433;
    tmp_tmp_msg_0_1.virt_err_x = 0.7062947865198075;
    tmp_tmp_msg_0_1.virt_err_y = 0.4860471582384568;
    tmp_tmp_msg_0_1.virt_err_z = 0.22004024092159846;
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
    msg.setTimeStamp(0.3848245013812094);
    msg.setSource(9700U);
    msg.setSourceEntity(61U);
    msg.setDestination(46871U);
    msg.setDestinationEntity(243U);
    msg.command = 168U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QHZTJDSAWVWSWKCYCXJPFNJBIDPLXWMLLGPLYMYSQMYZVPKYRICZAKKOVEUGHNURLXFXIPCODKIDDGGMCOPENUHHPKAGEATDIRUEUHSVLHJJQFBXQNQTTMITOHNRRTKSBKLHSMPVQZBTUOCZJMYSMXUYKIBFOWREJAGCCNAWLPDZEASCPMQZFRVXVBEXRWDTFSOKDQOBOWLMRVTJXUJWEXZNQZGBNNAISFUTOZLGFA");
    tmp_msg_0.description.assign("WMTUCHBORWZVLVALJMTDISHXFNOLNHVMFAJXPFXYOIMSCOVKLOBEYFMUIIXJYGGXKHUAIOFAGLCBQAKYSYZJZGWCZFMGQWDRKRXVCZIQLCKQLOPSRWUJBIGVHGGLUQDNDTWOKVYCIBQNIDEXWRRMPFFFLBMJEUWTXZEBSPZVHYUOEPSJNQUHHNRKHDTAXENKAUDBJNCSWERIZGAZUVGBASLMZPPSXERYQY");
    tmp_msg_0.vnamespace.assign("WVZVPDWLFTXJVLUZIHRKEYBUWTYMBMIMOQJCHLDZUXGNMAAWIQQRKBAHEDQVWFTKZXJSOUYARIDPYZUGPANRNTXSOCMAFFDMJDHELBCBXROYTCMOPRCNHFXYVCIZYSGUALYGHLWN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QXWLUASYVRVBOPTEPYLVHNAMJULCTIILUUXXBWGLZBMKSZMCBGPRDRTFSZZOLUBSOKIWFKXYHGHWHDTCEACEZSFVHHQQZHGNTFEVNRVASSFYMAVYFONNATCMUKTS");
    tmp_tmp_msg_0_0.value.assign("DPPLTDUKAKCFNNROTFCYPBMGYVZJBENLYNHJLQHOKNVQOZYAXFKJQWFGARUGOZMYVRPVWDWITMJUUCXDBHIQYFUVICMLSXOSIKZGJSOVDBHDIJJMGEPHZQKDPEVLZFBIWEVCEAUQSSUQIDAXXWQZGWOIZVZCGKPYRAAHQBFLYIMRBNWMOLLMBNCCTLXEKQAXEXSBERNORYKBHRKCJAWMUDPW");
    tmp_tmp_msg_0_0.type = 159U;
    tmp_tmp_msg_0_0.access = 161U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HXQKNFSVCAIIIGRMPEWTIMQCJTKUGHYBAVFKSRKSMEEBTQFENVCPIOTJOMTGWPAYVIEFTQXBHPAHLYODKLVMYZVOSS");
    IMC::EstimatedState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.5762824553213062;
    tmp_tmp_msg_0_1.lon = 0.7051127044400104;
    tmp_tmp_msg_0_1.height = 0.5033224744769362;
    tmp_tmp_msg_0_1.x = 0.9225667079729674;
    tmp_tmp_msg_0_1.y = 0.43462386579939316;
    tmp_tmp_msg_0_1.z = 0.8620483574081228;
    tmp_tmp_msg_0_1.phi = 0.026657943067918355;
    tmp_tmp_msg_0_1.theta = 0.7172190685251318;
    tmp_tmp_msg_0_1.psi = 0.9620879327837465;
    tmp_tmp_msg_0_1.u = 0.22300797561380503;
    tmp_tmp_msg_0_1.v = 0.12369742287346797;
    tmp_tmp_msg_0_1.w = 0.24066483694546614;
    tmp_tmp_msg_0_1.vx = 0.6296742204543129;
    tmp_tmp_msg_0_1.vy = 0.6985749116107804;
    tmp_tmp_msg_0_1.vz = 0.8376522580778964;
    tmp_tmp_msg_0_1.p = 0.2724263070692875;
    tmp_tmp_msg_0_1.q = 0.6693374702681687;
    tmp_tmp_msg_0_1.r = 0.2619245345203107;
    tmp_tmp_msg_0_1.depth = 0.34291625266737435;
    tmp_tmp_msg_0_1.alt = 0.8592502744682888;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AngularVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.5862121513102803;
    tmp_tmp_msg_0_2.x = 0.3185827009750176;
    tmp_tmp_msg_0_2.y = 0.5902444819643445;
    tmp_tmp_msg_0_2.z = 0.5623519206591767;
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
    msg.setTimeStamp(0.7101897469319586);
    msg.setSource(11016U);
    msg.setSourceEntity(222U);
    msg.setDestination(19166U);
    msg.setDestinationEntity(68U);
    msg.command = 45U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RLZXERKLPACUJOKHHDEFKTASKLAZJTNSAYJIPSEEJUXGNPUGKWUBJMCTCMVLYBFETQDYFTDURNUFIQDVHQUZHNLTGMHIQDELBWPOFNGNAOJXJXPIDWDZNCERDRCIUWWBTGAKFMBYYFNZHDSIWPXSLAUGRXSRHPEWEKMPVLO");
    tmp_msg_0.description.assign("SNMMEPYDDFNCANROLJRSMSEWTXABTNYUBOHLZXBMKTDKBDVWBLFWQCQDZOEJJNMOGWEFDQGIGIRPKLTHPSCKIITLRXFQWEAUGLPHOJXBHRRZXFUUBSQTYLNGLIZYVTVPLAJYCWVFKKACEAGNMDNQAAUGRVSOFOOEKHXZJTPFVAHUMIJHHTQVKFCSGEPWDZPAXHLXOXUT");
    tmp_msg_0.vnamespace.assign("CFXRDVCLDPNJRVUHDRZUSYBPLVKOVBWVHKUNXSHIKWHVGITXRIYTRIYHDOALXHGZETUBPGQMEWFCDSKLBODAQBBPCGCSJUSTRHLHTMFXGHCPONTSQFCNJGQGLLOAQPEKIOSZZMSFKN");
    tmp_msg_0.start_man_id.assign("SQWQPLXOZLLRCATOYUOKKBNBEFECTBDQLYILXDRMSLOJGTFWKCQUERKGSGHGSSFOBOUMNNVBQRCCKDFLINEZSPBRDPBNXWYEJTGVAFVWBWGIBCWYLTUZPAMMFQXZWYETADHMIJMYOEXIDLAXVUKYPTJAIZJNHNUIRIMVUOPKBFYJCWGSADZHEHHVPYNGTHQKVXQXIUTGRFGNXUM");
    IMC::AllocatedControlTorques tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.k = 0.026000999975591466;
    tmp_tmp_msg_0_0.m = 0.8460211491571155;
    tmp_tmp_msg_0_0.n = 0.36627376781869614;
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
    msg.setTimeStamp(0.8887206561276018);
    msg.setSource(11487U);
    msg.setSourceEntity(167U);
    msg.setDestination(59877U);
    msg.setDestinationEntity(14U);
    msg.state = 232U;
    msg.plan_id.assign("WHALLDYXKIVWNBUCZAFNFBTXAFGTDWGYPCSQZFWQSBKFQZTUQKRJFKYWTQEVRVZUHJRJNODDDLXBMINNQMBGRJNCQIMTWSJKIDRQHGEPXVMVLGPPCYXIZEEIESCPSAOEKMVYSYKAGIUYHUTTCOZDYBGLETPIRVFDBXYRVSHZAEXXAWFBJKCBDBCXLPXMFRNUTHLTNJHRWZLQNQSUEUMJZDCPHJLZVORCKSJAAGEKPIUONHLGOMGSOAIOYF");
    msg.comm_level = 66U;

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
    msg.setTimeStamp(0.08821324488638349);
    msg.setSource(21354U);
    msg.setSourceEntity(250U);
    msg.setDestination(19064U);
    msg.setDestinationEntity(201U);
    msg.state = 19U;
    msg.plan_id.assign("EEGNOCJKYIZWWFIBTBMFCTAJTMZTEHI");
    msg.comm_level = 113U;

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
    msg.setTimeStamp(0.4887481057801857);
    msg.setSource(10904U);
    msg.setSourceEntity(165U);
    msg.setDestination(14167U);
    msg.setDestinationEntity(62U);
    msg.state = 233U;
    msg.plan_id.assign("GLNPGQQUJPOTJGXILPXVOCAWRVUZPKDKAXWSKQUYMGDCFGVNTSGEMOEKDSLYRELQVJXAUVPABAPUPQEHABCSTSFHKEGIAYMKIUTCFSCWNZBVIELAJRCJCRJNGFUZIRUDSKPRZIHTXBWPUTZBAVMXLOKXHCNEFDNMRZRIYCFXBGQHDSBFIODUEJDNKOOWVHVQWOMHM");
    msg.comm_level = 40U;

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
    msg.setTimeStamp(0.34185072269672023);
    msg.setSource(22565U);
    msg.setSourceEntity(7U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(42U);
    msg.type = 120U;
    msg.op = 211U;
    msg.request_id = 13395U;
    msg.plan_id.assign("NPAVPTXLZMHLHMEHBMKKYYKVLQGCQWYMOJFILUYDMJBBKZZNNSWSXGTVIOUWSFSMJSRXRLEVJOMXLERHNPFNJSZKRIYAJAMTVPCGHIPCUZZDZBITFACBDNOGARLDOCKXECAGWVNUTQXYHWHODQQETJGPQSAWHTWBXNYDPKFHFDEPYFOTGRAELWIKU");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 63637U;
    tmp_msg_0.ttl = 19657U;
    tmp_msg_0.destination.assign("XIERCLOLRUGDFPSVJSDGMHTGTNLFGYXZYSVUOTOCNXKVSUMZPBURDVPJANRTIOBWDRQEREPDFWGOJVZUCNYNTSEQAVYXRAXZWEJVAOLIAZLSAWCQGLSIGIXFWDIXNQRUYTATCANOJMMCJKIHHBNBZBIWGMSMKHGQBUTJHOYBFQWEKMZFASQEKRZUZGLCI");
    const char tmp_tmp_msg_0_0[] = {126, 75, 81, -51, -11, 108, 71, 80, -37, 96, 61, 15, -74, 30, -76, 43, -97, 121, 28, -9, 38, 45, 50, 87, 20, 0, -87, 36, -59, -6, 7, 78, 42, -3, 41, -11, 45, 82, 63, -65, -26, 10, -86, 96, -52, -14, -3, 89, -30};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GNASPFETRZINDZPJFCXRKEMDKPHDMAGXXXONEFFRXDLCBQY");

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
    msg.setTimeStamp(0.8551736998261515);
    msg.setSource(57226U);
    msg.setSourceEntity(190U);
    msg.setDestination(54985U);
    msg.setDestinationEntity(178U);
    msg.type = 30U;
    msg.op = 124U;
    msg.request_id = 51667U;
    msg.plan_id.assign("FLJHHIFQVGBYJUZTYUZRSCKWPGLTEVBLRREAEHCLWIIIIBWOYNFULSXAQCEBT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("IJDSXWDICMQIODAZBBMHUQRAKTGJSZRYEEHKWCOBDKIHXPFLGU");
    tmp_msg_0.dest_man.assign("YTUAXTYHZSTBUIILZZMUDZBSCPCRMFYGJHTENXHIRKKGKDQNOWMRIQHMJHWQWXAPUALWKBJLGTVLGVYMOVLHXFHVSXPBWEWAEUNHVJAIZGSCKMDDRPNNWGZAJFPTSRCFQXVYDXECWQODSOIWLFAIOKLDYYMOLGBTCUSRZIBTUVTJGCKJLCUNJOPPIRABYNBQF");
    tmp_msg_0.conditions.assign("UZBBXRWYYFDCBYZV");
    IMC::ButtonEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.button = 141U;
    tmp_tmp_msg_0_0.value = 198U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WACKMTJLCYLKKGRBMVQYYAJJRFGUHOAIVISQEDPDHUJPIEELKUBZDEFGXJFTXNELRKNXGSZYTINXJELMFRIUWJBOAPSGSOYVRQUPLCQMQEFZMCWTGAFTRSAYZQZSBSBNDWLBGFTTBCOUW");

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
    msg.setTimeStamp(0.22586433144601126);
    msg.setSource(33393U);
    msg.setSourceEntity(105U);
    msg.setDestination(51110U);
    msg.setDestinationEntity(28U);
    msg.type = 98U;
    msg.op = 27U;
    msg.request_id = 45326U;
    msg.plan_id.assign("CAXGCVBIHSYXREYGTXFONFINZVETAAAQSWWTUPRYCHBFHMKQCDZOBGUXUMOTUAYTSZPCMXJJLNV");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 1868;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GESTXWNBDIIDXPHCBMBHEFWBMXIJFKVQEVIHWEWZMJBRPKOGPCURUYQNCNXTVCDKRFKXQUJAAPZAYHRTPOSVDVOTPHMRGAJIQHDCFMZJSLEFNNUAHDOLRSBVJLBGPOZUGLNXGZFHYKSRCSAVKBZAR");

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
    msg.setTimeStamp(0.3495962496805989);
    msg.setSource(40926U);
    msg.setSourceEntity(171U);
    msg.setDestination(51892U);
    msg.setDestinationEntity(197U);
    msg.plan_count = 3912U;
    msg.plan_size = 3992221454U;
    msg.change_time = 0.7584917505507427;
    msg.change_sid = 36185U;
    msg.change_sname.assign("UGIGNWSWXGVJYKEIQYMLEIPEMERYKZWHSOJSQUNWTLOTPAOAAAYETRTIBGPRTIWBUZPDPVRKFEQMSYQTRNZBJTRLPCNXHHMCFBFNUR");
    const char tmp_msg_0[] = {99, -1, -25, 5, -34, -80, -55, -39, -81, 113, -113, -32};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CDQOVHVZSKIBA");
    tmp_msg_1.plan_size = 23697U;
    tmp_msg_1.change_time = 0.18971098775266249;
    tmp_msg_1.change_sid = 56239U;
    tmp_msg_1.change_sname.assign("UUBMVGCYUANIJOJVABILQNFNPQSBGTOHDYAWUTOKJEEWYIQUHCRRNLXOQFLMFSJNZKYONXJAYKEHJZHAEXREYPTJIXRPPNBMUZGIFBWUXFNKSEWSVDZVLW");
    const char tmp_tmp_msg_1_0[] = {98, 44, 32, -121, 47, 43, -124, -20, 80, -105, -109, 69, -16, -30, 74, 87, -26, -54, -87, 80, -128, -106, 52, -14, -19, -121, 123, 64, 117, -48, -72, 4, -6, 121, 66, -79, 86, -95, 9, 89, 9, 90, 119, -2, 46, -23, -93, 113, -115, 8, -125, -128, -50, -103, 19, 42, -127, -96, -59, -34, -45, -99, 66, 51, -48, -119, -2, -18, 46, 108, 107, 67, 88, -58, -44, -117, -127, 66, -39, -34, -28, 45, 41, 48, -118, -121, 49, -105, 54, 84, -14, 123, 32, -16, 19, 0, -36, 26, 75, -40, 42, -77, 74, -78, -46, -30, 35, -52, -71, 82, 125, -31, -10, -81, -59, 83, -116, -33, 65, -52, -42, -83, 59, 27, 11, 122, 5, -80, 34, 23, 46, 65, 77, -51, 51, -62, -31, 35, -48, -83, 92, -41, 44, 30, 20, 87, 46, -29, -117, 42, -75, -20, -89, -85, -116, 16, 83, 60, -24, 107, -119, 112, 34, 28, 76, 118, 43, -45, 119, 41, 108, 93, 65};
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
    msg.setTimeStamp(0.801365269730008);
    msg.setSource(49032U);
    msg.setSourceEntity(207U);
    msg.setDestination(15538U);
    msg.setDestinationEntity(235U);
    msg.plan_count = 22235U;
    msg.plan_size = 1310912601U;
    msg.change_time = 0.10557328980087277;
    msg.change_sid = 53713U;
    msg.change_sname.assign("CEJROEODYYMIQTBGEWFLXFSIBUNEPBXLTQKPKSZBQKWNIEKUPGBUUHROZXGARUJSDUYOUKTLTVTWSIRMNFYAXIBBSZCMHMDFAHLWLHAZVXGJVD");
    const char tmp_msg_0[] = {-39, 61, -75, 41, 104, 82, 9, -109, -17, -87, -36, -89, -118, 15, 109, -77, 119, 121, 54, -58, -48, 0, -90, -26, 39, -9, -86, 79, -56, -124, -124, -17, 107, 68, -125, -111, -13, -62, -77, -63, -18, -74, -87, 99, 101, -10, 122, -34, -65, 79, -91, -68, 70, 3, 75, 46, -72, 124, -88, 114, -21, -4, -93, 86, 40, -43, -50, 47, -67, 6, 41, -61, 103, -84, -10, -100, 16, -9, 115, -118, 31, 81, 58, -109, -76, -114, 30, -50, 45, -63, 10, -66, 73, -37, 12, -41, -34, -114, -53, 1, -92, -50, -113, -47, -38, 26, 101, -98, -34, 76, -127, 95, -54, -81, -51, -40, -112, 108, 79, 96, 95, -78, 58, -37, -103, 109, -13, 24, -91, 107, -87, -74, 20, 2, -82, -25, 113, 115, 112, -40, 98, -103, 35, 108, 26, -73, 98, -62, -63, -61, 72, -81, 65, -9, 113, -36, 95, 28, 44, 25, -33, -52, 112, -112, 10, -106, 5, 121, 93, -109, 34, -61, 60, 92, 85, -101, 8, 16, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QOVNKLWOTOVJKUOFDSDKICPFEFORDVEZVCIHISOXXEQJZOIXNVHXGSAHCJYGBUMWEDIJAVJBJJAULRIGYYYZLDNWYACRHZLPBPYAUXKBRNASEWCMQDXNLVBALZCGFNSNXGMUAZKWEMPIIAHTSFYTLZRHSBOTYLUXPLQNDOQTYDRWUFXWNTJCIEUZWMGEKQFJUVPKQZXCSRTRSVCBMELIMRPP");
    tmp_msg_1.plan_size = 7069U;
    tmp_msg_1.change_time = 0.552813714054426;
    tmp_msg_1.change_sid = 41471U;
    tmp_msg_1.change_sname.assign("XTOPODXQBIXNNHSZUTSKXNDDCPBKKAXY");
    const char tmp_tmp_msg_1_0[] = {16, -18, 115, 38, -58, 108, 58, 101, -104, 25, 104, -88, 96, -85, -8, 37, 21, -53, 79, 122, -7, -5, -42, 89, 28, 21, 121, 83, 123, 21, -8, -3, -56, 107, -64, 113, -31, -2, -128, -78, -14, -119, -114, 51, -108, -40, 24, -34, 126, -57, -48, -97, 27, -111, 40, 66, 75, -113, 46, -58, 72, 109, 32, 87, -2, 44, 9, 36, -76, 33, 49, -22, 118, 17, 19, 3, 117, 32, -3, -69, 116, 54, 123, 120, -88, 6, 60, 85, -100, 97, -81, -43, 10, 89, -33, 9, 53, 23, 121, -93, -112, 81, 43, -121, -127, 30, -95, -36, 31, 116, 91, -18, 71, -88, 50, -102, -90, -55, -42, -22, -108, -116, 7, 74, -5, 14, -86, -18, -2, 109, -110, 4, 86, 69, -40, 88, -75, 75, -98, -43, -118, 49, -66, -115, -41, 125, -58, 1, 118, -62, 35, 95, -30, 91, 23, -81, 18, -107, 115, 9, -92, -104, -78, -70, 113, -22, 102, -43, -109, -106, -43, 89, -84, -83, -108, -102, -110, 24, 48, -14, -15, -110, 61, 92, 13, -71, -56, 62, -99, -50, -112, -94, 71, -125, 10, -6, 34, 64, -114, 97, 103, -62, -53, -94, -71, 124, 53, 40, -94, -45, 96, 96, -102, -89, 15, 40, 77, -90, -87, 100, -76, -31, 101, -38, -61, 113, -120, -62, -79, -71, 77, -115, 18, -123, -8, -107, -45, -18, -29, 7, 75, 53, -105, 69, -3, 46};
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
    msg.setTimeStamp(0.5314965826956229);
    msg.setSource(56450U);
    msg.setSourceEntity(171U);
    msg.setDestination(43852U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 26021U;
    msg.plan_size = 942017740U;
    msg.change_time = 0.23432618481869272;
    msg.change_sid = 55562U;
    msg.change_sname.assign("ZLIKBCXNAVSQEEPSKHFN");
    const char tmp_msg_0[] = {31, -2, -72, 82, 74, -108, -29, 1, 6, -7, 66, 1, 119, -19, 2, -59, -103, 55, -126, 44, 23, -30, -10, -14, -11, -94, 22, -46, -55, 15, -116, 24, 95, -78, -50, 43, -55, -121, 33, 12, 72, -97, -6, -120, -85, -39, 90, -43, -11, -107, -35, -37, 9, 11, -120, -59, 45, -78, 24, -36, -24, 9, 8, -9, -125, 5, 60, 45, 13, -108, -99, -63, 52, 89, 104, -108, 104, -112, -2, -50, 26, -21, -78, 10, 20, -30, -79, -125, -70, -33, -16, -12, 3, -115, 78, 46, 28, 73, -74, -4, 18, 120, -33, 11, -39, 63, -126, 76, -89, 75, 101, -81, 118, -49, 21, -48, -116, -80, 92, -7, 97, -53, 74, -23, -5, 106, -125, -42, -35, -13, 98, 24, 110, -48, -55, 32, -45, -114, -113, -104, -114, -41, -1, -2, -49, 15, 41, 90, 89, 77, 4, 84, 110, -38, -64, -125, -42, 54, 108, -32, 79, 112, 55, -84, -45, 31, 75, -52, 47, -86, -111, -112, -76, -119, -3, -4, -36, -43, 84, 62, -4, -36, 93, -19, -18, 103, 7, -45, -15, -67, -12, 75, -74, 2, 42, -90, 32, -72, -8, 68, -91, -61, -105, -100, 120, 78, 81, -5, 116, -21, 77, 41, 39, -48, 14, -10, -74, 42, 122, 120, 93, -72, -106, -16, -84, 118, -21, -10, 102, 27, 112, 121, -92, 72, -53, -46, 43, -101, -45, 16, -95, -11, 31, -72, 55};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UXINOPGQKPYCZJMFSMNCIVGDEZUVWIJUQPHCDBTPSJTKJMIJRLYNAQLXHDEWSSSBBPKWZRL");
    tmp_msg_1.plan_size = 45775U;
    tmp_msg_1.change_time = 0.32011279851347163;
    tmp_msg_1.change_sid = 35812U;
    tmp_msg_1.change_sname.assign("RXOWMKMEQENYWQVMSUIFNSKCVXVSTOZTWXKBAYFVZWLAXIJNXAOCDBLJQYCPSLPDICRDOPWYNRGAFMHUSJOETTDRZZYQQJSSXAPLHYENRMREQPFDURGFWIJGDXPAELQKLXCDFATUQAIEIRIYFYESQ");
    const char tmp_tmp_msg_1_0[] = {-118, 106, -20, 15, 121, 102, 80, -69, -92, -49, -28, 115, 5, 28, -38, -21, -127, -9, -47, -78, -61, 121, -91, -64, 62, -97, 102, 114, -94, 51, 58, -62, -76, 37, 120, 70, -90, -80, -67, -85, -36, -125, -16, -111, 4, 79, 105, -52, -100, 104, 24, -109, 36, -102, 32, -11, 122, 66, -106, 97, 4, -119, -121, -114, 126, 2, -123, -61, -15, 37, 23, -111, -69, -23, -102, -34, -8, -60, -27, -34, 56, -12, -22, 111, -70, 48, -49, 40, 21, 15, -5, 106, -71, -63, -4, 99, 63, -94, -28, -73, 79, -49, -73, 125, -19, 6, -57, 57, 73, 21, 11, -41, 13, 49, -62, -55, -65, 47, -79, -110, -79, -126, 29, 39, -82, 63, 121, -78, -42, 113, 36, 88, -57, 50, -30, 36, 7, -25, -3, -93, 68, 78, 63, -47, -86, -26, -53, -54, 50, -121, -114, -74, 125, 0, -63, -22, 15, -64, 2, -80, -55, -19, -109, -78, -24, -126, -30, 16, 18, 38, -106, -83, 26, -106, 126, 74, -88, 17, -20, 125, 81, -30, 113, 51, -113, -21, -39, 101, 110, 91, 92, 114, -32, -26, 95, 6, -128, 79, 70, 68, -80, -80, 63, 67, 69, -48, 108, -96, 120, 38, 68, 2, 17, 117, 76};
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
    msg.setTimeStamp(0.04763777269665914);
    msg.setSource(45373U);
    msg.setSourceEntity(134U);
    msg.setDestination(47509U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("SPIBSEQYZZDCKZRYEXZJSVLJGWPRXAOMHYOIZAUJJAYYCCKXUBDTTRUNRDJXIBGEQAAOITSXGPNJKITLLHPHGTEVFDXWFRXGQNLNBPUQCJSGYALWVIBOPLGUQVMASRQLFYTRKFBDIMHFEVMBASXETHMVTOVEPRQHNWDXQBPFFCTRINUECRUKM");
    msg.plan_size = 30289U;
    msg.change_time = 0.24093255294398475;
    msg.change_sid = 60907U;
    msg.change_sname.assign("UJOQNROBNHCSZZWWHRCZUFAXSSVFHLHUMIFLOMPSVCTAYWWPKTBKAROXGUINXQOTEOFZNEIGGNOACYSCDNQGVJYH");
    const char tmp_msg_0[] = {-38, 72, -123, -70, -23, -97, 94, -122, -74, -128, -5, 92, -68, 120, -52, 121, 29, 103, 19, 65, -105, -72, 50, 121, 10, 70, 126, -8, -125, 54, 73, -51, -95, -6, 76, -60, 69, -22, -23, -10, -110, 119, 110, -89, -51, -42, -45, -116, 116, 81, -2, -44, 68, -65, 88, 13, -103, -34, -43, -36, -121, -76, -16, -12, 84, 87, 116, -27, -71, -4, 57, -117, -110, 112, -34, 10, 43, -116, 39, 100, -83, 66, -20, -1, 15, 16, 124, -110, -41, -108, 85, 32, 116, 36, -97, 37, 24, 72, 28, -44, 26, 66, 30, -8, -127, -65};
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
    msg.setTimeStamp(0.33146461773002156);
    msg.setSource(19328U);
    msg.setSourceEntity(234U);
    msg.setDestination(54678U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("OUGJWZFIFYTEUAHKZTHBSMTEEQKFRIIQAWAQRBDBWVFTCSETPYRORRZUKNACMDSADSLCMTMEXRNVASGXBOXYCEOIZTEMIPGOBCNPFHDLGNZSQVYJGHCDLNAXYBZJULNKKWURDGQKNCLRNPTHYZKPHNPJPUVQKHSCWZGVVZXBTLFXSUQJGDOJRYZNSILVEVEBIIWPKUJPOXDLKRSWXFAAWUYDVQMLOXJFQCLGWUYDGMFPF");
    msg.plan_size = 12885U;
    msg.change_time = 0.11312003803641235;
    msg.change_sid = 56854U;
    msg.change_sname.assign("PSRKJTGOSMFLCAQNCFKPHEGOPFFOCTOREKAPTPENOLZQYCUOWTVEDFBUJINPLXVGPQXENFHDQDWFSRWZTSKUCZEVJNCCGGWWLIYWAPKNNEIGMVQOSAHMATTRYVVTOIXSJQLEFUSZPWKYJAIXDRFOJZABMVZNBQWPDSBNHZDRLV");
    const char tmp_msg_0[] = {-79, -75, -39, -60, -14, -34, -66, 91, 0, 43, -91, -71};
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
    msg.setTimeStamp(0.2445188829671885);
    msg.setSource(43239U);
    msg.setSourceEntity(92U);
    msg.setDestination(31327U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("CDRWRGYHVKOGBAHLVJAYFRJUCXKQYKWHUCKSMFDEDMZYUURYIRPGXDAPJ");
    msg.plan_size = 53536U;
    msg.change_time = 0.13954720651622088;
    msg.change_sid = 43724U;
    msg.change_sname.assign("XTIQWRZIHMUVJHVINHZRORSRGSALJEUXFXBYAHSEQMGPWODYXSJUQNTQMVLDLKEZTOWMWDHDALIBMQKBTGFQGNCVVRNBAFMIZWILNLIOSMUVNGFDDSEWNURAQWCJRHEJQWZGPOCYKSJJKYTGOAEVQXPXABJREJGCUFNURMKVKCOKYFPESDDMGZBXLAHHDPVIZXABKPZFEIWSHCJLSXCKDKUNBFBFFCTYOEAWLVCHTUPQPUTOPITZZBYY");
    const char tmp_msg_0[] = {-76, -107, -55, 41, 80, -98, 27, 71, 12, -99, 122, -22, -119, 65, 60, 104, 100, -72, 108, -90, 95, 15, -69, 32, 82, -54, 126, -13, -116, -56, -40, -79, -25, 66, -41, 84, 1, 73, -62, 89, 96, -41, -123, 57, 64, 0, 59, -97, -18, 59, 23, 50, 10, 56, 63, 90, -121, -95, 75, 36, 42, 59, 2, 48, 52, -30, 5, 8, 2, -17, 86, 105, -84, 84, -103, 37, 48, -46, -23, -49, 91, 66, 51, 20, 58, 30, 119, -78, 122, 35, 12, 102, 113, 72, 44, -74, 50, -84, 100, -42, -51, -26, -100, -124, -127, -77, -69, 72, 46, 74, 108, 23, 0, 0, -10, -126, -7, 99, -101, 119, -125, 103, 71, -77, -10, -49, -20, -78, -59, 69, -110, -49, 50, 30, 24, 53, 10, 81, 106, 40, -49, 91, -118, -57, 60, 8, -72, 55, -11, 77, 83, -47, 15, -126, 13, 122, 51, -11, 35, -15, -85, -38, -44, 126, 21, 116, -39, -97, 121, 77, 64, 24, 6, 78, 26, -84, -57, 15, 102, -5, 123, 99, 14, -108, -104, 25, 20, 22, -101, 64, -57, -37, -91, 75, 28, -102, 76, -27, 60, 51, 1, 4, 84, 49, -111, -16, 59, -38, -103};
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
    msg.setTimeStamp(0.7700811282727041);
    msg.setSource(47240U);
    msg.setSourceEntity(13U);
    msg.setDestination(48127U);
    msg.setDestinationEntity(153U);
    msg.type = 195U;
    msg.op = 115U;
    msg.request_id = 4188U;
    msg.plan_id.assign("MDHEOXTIFLNFFTUFGJUCJWYBNOUJRRDTD");
    msg.flags = 11550U;
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VKWGQGSBNYFTESSFD");

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
    msg.setTimeStamp(0.9075789488249424);
    msg.setSource(8328U);
    msg.setSourceEntity(24U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(235U);
    msg.type = 169U;
    msg.op = 62U;
    msg.request_id = 8851U;
    msg.plan_id.assign("EDSSKAYSFXVHUNYHIFOVTEPZSGXAKIRCAMFTPRXVVJOHPAYNPISGQNDGVRBGYSAKQWZDPCYBDYLOGWBLENCDYUXHCGZ");
    msg.flags = 62892U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.3473956643705276;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSJHSCEDPAHHVQZUVIRBDWANVZJPUVOGETTFNSDEFZQIKVLELSCCUIUIWJOTVJEHFXGVJGFLHRXZKQOSYMOLJZKKELIKFRBPDZESCEQBYGZARDOXULONJSTNUYPPHFGMQVQGLQKKZANZBADUYWJGIEJWCDDNFLCINTXQCDSNXABTWAPJTXHY");

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
    msg.setTimeStamp(0.6685131826950956);
    msg.setSource(32499U);
    msg.setSourceEntity(98U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(86U);
    msg.type = 10U;
    msg.op = 154U;
    msg.request_id = 24724U;
    msg.plan_id.assign("YWNQLHHMSIPGVDWBIGNKJIWELBECHOAXBAQHOTX");
    msg.flags = 7768U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 249U;
    tmp_msg_0.plan_id.assign("WJQRDIVUQJETQDAOGHGFIBDYKRDROONHODASRTIPGDSLNEDXXVCLUSJVALLHRGPTUMVLIHXUPIFUNQIVIWQKDMVFKRTBLMKWNVFABBXJQTONWHREAFGQUBYIFYQBEWCAESSUPJTMHESHDWOAVQKAHSFNZTYWEFOXKB");
    tmp_msg_0.plan_eta = -381377301;
    tmp_msg_0.plan_progress = 0.6453835587987679;
    tmp_msg_0.man_id.assign("ZYKTIZNNSSRLBACHTBEIVORISLCPFUXOHWRQZINXDQXMEQFDPFDKWHCTWTNHVCOIMCAQOVVPDIHIJFVBHBGGOFRVXPMASUUPKCAUGPNIWYDFQHJZWEFEZKJGDSGUSTGNLYMDOXFLZNFVGEPXKNTOJEUKELWTYJPAYGHAMSFVUYXQBLPBTWKWRPQIMLMRNYLZAGBVYCMMCNZSXKT");
    tmp_msg_0.man_type = 40660U;
    tmp_msg_0.man_eta = 1238167617;
    tmp_msg_0.last_outcome = 35U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MIJGIAVJHXKPUGHGFEQJBYNQSWMILTBBEWOMHRSRLVHKDYL");

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
    msg.setTimeStamp(0.36763151362068325);
    msg.setSource(32865U);
    msg.setSourceEntity(16U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(253U);
    msg.state = 20U;
    msg.plan_id.assign("PXEGAXZCCKLUTLAGHBOALAFZDJVYMYQBLPJKSFECBWIDPBMDICRGUETSXXOXYYAOWQNMLWNRCVEASIVKCGPJHBZFAJIMUEGWSQJUCZMBIVPIDBVTDQINOBXKHTIZHEZEMAGDFKOYWVLHUANTNPOMSSLZKWDTFYRQJLPRVKVQELIXDLURRFOWUZXUPWSPONPWYMCDOM");
    msg.plan_eta = 1846275864;
    msg.plan_progress = 0.9828113250057166;
    msg.man_id.assign("YRYMJOHUIZGJEXKCOSCDKUODVSQXDTZNMBVXXWZCZCKYDDQRLFISTAHBUCSGFZHGECPMOKUNAITKNVJBBBTEIPVASRJYLWEVLYBBLYUEMKLMCAPMPGWHUXDFYNNLCDAUKIABYWOSJFXPMRXZOVAIWCTQZOTVGGSV");
    msg.man_type = 58801U;
    msg.man_eta = -344499455;
    msg.last_outcome = 69U;

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
    msg.setTimeStamp(0.9042366531106495);
    msg.setSource(43573U);
    msg.setSourceEntity(175U);
    msg.setDestination(22871U);
    msg.setDestinationEntity(156U);
    msg.state = 129U;
    msg.plan_id.assign("ATAYAFPYOWDNNSMSCLGVBVTIRFUEHTTLIQMBYSPNANKLPVJMXYEGLTQULYSLUIPBVE");
    msg.plan_eta = 1131422737;
    msg.plan_progress = 0.6539026019807036;
    msg.man_id.assign("YNZHEQZGTHTRBOEWFWGZPDJUKCHLTKISBMGQJQSAGOBMRHPYVNRHEKMJJMQSFIMNIJLKHRVKUCYYURFYWAENVSQHABCIADSUFEZTBDXVVLWAFKWIZPOVFDAWCCPGEYEKRPLRZUUBZXYXNXRIDSABFNMYULSWIGXBPWHDBWXMMPCAXDSAQSDGSOLZONOBTDEEYUNNOGUQJOT");
    msg.man_type = 2759U;
    msg.man_eta = -1452269019;
    msg.last_outcome = 221U;

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
    msg.setTimeStamp(0.04218466933679288);
    msg.setSource(13924U);
    msg.setSourceEntity(89U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(189U);
    msg.state = 2U;
    msg.plan_id.assign("BMNWXFUBJSAYDGSYVAEDCIDDVPINUVGSSYLAGJHQTJCJPSWFQQCZZOMGARFLMIYHSOOQDJBDLRCDZBLLLCNNRUKJTXXBNFHLBHKKETWROZGSQFUECEHSIAGCXZEQTZAPTTWKYFBFHINUQUMKKHADBVYERQCMOSMPYHXCJNMRENDU");
    msg.plan_eta = 1367746316;
    msg.plan_progress = 0.3462833531613765;
    msg.man_id.assign("QQDOPZPYIITVUBDURDOEAHTZIWWMSDVNIFQDGKHY");
    msg.man_type = 14106U;
    msg.man_eta = 1777508813;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.8071791397166389);
    msg.setSource(5343U);
    msg.setSourceEntity(76U);
    msg.setDestination(12207U);
    msg.setDestinationEntity(95U);
    msg.name.assign("QRQFKCZTRCXXVVMUJGXSNHPIAST");
    msg.value.assign("OUMMHMPOJNLZFPNUDPARDOD");
    msg.type = 0U;
    msg.access = 146U;

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
    msg.setTimeStamp(0.7849151556206476);
    msg.setSource(8823U);
    msg.setSourceEntity(29U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(242U);
    msg.name.assign("YVDTYNQQURMVWMOSCGSGPAQECJBQGNNEEPVECLJSHXAZUJFTETIXNYWOACYQJRBXIMUDMOGFUAKIYHCLDHZIDWEPAWTOJMZKOASRTDNVHRTFBSBOUYSKFVGXPRQGQETTUYOMLLSYHUZDDWECRHJKIULWSLWRJVLMNJVVZNXJDFLIOZVXYPKZB");
    msg.value.assign("VMNXQXEMYIRXABJQRTEUFGOBTZEPWPDTWZISBMCZEKTRJNAYKAAWWAQACGUSJNXGUVZLG");
    msg.type = 44U;
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
    msg.setTimeStamp(0.6797787452406732);
    msg.setSource(58172U);
    msg.setSourceEntity(36U);
    msg.setDestination(1615U);
    msg.setDestinationEntity(176U);
    msg.name.assign("AEVUZTKYWKTANBZXXXTOLUJMUUEXVDHMGKDESINWFUVXDRQPJHUDWCTPVPWAARXCPEL");
    msg.value.assign("HVMCQCFIEABQBDVMFZVJHANDNVOVBRRVPCAGLUXRLPIOLYSMPTWQDXKZULOXYXZZXOYQRKTGWS");
    msg.type = 174U;
    msg.access = 79U;

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
    msg.setTimeStamp(0.1702174202514818);
    msg.setSource(12088U);
    msg.setSourceEntity(208U);
    msg.setDestination(50667U);
    msg.setDestinationEntity(161U);
    msg.cmd = 136U;
    msg.op = 190U;
    msg.plan_id.assign("LNQERGLOOUZUNQ");
    msg.params.assign("YTPQDBDCLKWZQNKEZILSJJZRMCIOPTQMOADQRJWCNGSQAOTLAJPYOFWKGZNSCRQAMAFTCEURMOCOEGBWTSFLFDHEYRNOEMKGLKXYIJXHHHUNXHVNQUVRYFAIEXBWPLHVYCMSSTSBNFHLODUGHXCPTWVIXNDSHHXUOPBGFLUV");

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
    msg.setTimeStamp(0.9653574580677028);
    msg.setSource(45397U);
    msg.setSourceEntity(127U);
    msg.setDestination(14345U);
    msg.setDestinationEntity(170U);
    msg.cmd = 239U;
    msg.op = 98U;
    msg.plan_id.assign("SYLDISYYUUNSZTIOMHBTWELAHEKPJANJYWEUBDRWMCUGMKHXBIXDFDRASXNWVWBOTSGULQROJOSDCYPGXIFNUBSGTZYTCMTRDVZGAHZOTAAFFJQZZOBWZUFNMWRIZLKMOVLRRRNEPJRWPJUGVEXOVWKFOJUQNHCKXIIHFMGFNMQYJESIEVMXQGEK");
    msg.params.assign("FRBHCIHMVYYSQLUOPDMHGBVGHWFIHCJXRSKTBRPTLOUSNJRYTNZOQYVZTQCWDFSIABFAZOMZGMGEBYUUNKWHOGPWEGPQUUNMHMRNNISQKETJMADPKEWZZPWJXKSCLNPTYRDCQVDCGUEPXKETKXKLJURJLIVEDVBPLBXFR");

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
    msg.setTimeStamp(0.2435805900247019);
    msg.setSource(34634U);
    msg.setSourceEntity(226U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(158U);
    msg.cmd = 172U;
    msg.op = 142U;
    msg.plan_id.assign("NIDOSTQELPNZQOBDVVBXFXZVUZTURNQOMWBYSVHLIKCKANCEXYXBLIFYKJSMBMHTAWQAHNJKLPDUSNGTRCJMYIEJGEYELVCHCWRVGTCAXJZYWQRYYUBIXHRKLGPSOOXILCAIMKFIJODKSFGMQGCKRVGXFACWEYBGJZHSPEPUAZZKPNWTQLXOODGJRJZHJXOPIPUMPCRAFNQQM");
    msg.params.assign("RAWJJKQWVLQZYGBUWFYAVXOREUAQAEXMWE");

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
    msg.setTimeStamp(0.35721415457163386);
    msg.setSource(61697U);
    msg.setSourceEntity(94U);
    msg.setDestination(37715U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("NQCGVBFSPTRBTAJMYOKBTGYAEDJOBOTVXBLRNYGGSQELQMLUGHCEKEHBOCDTOTTZZWZMRRJUPXYLAPERDWHUJHMDKNSCJZUEWPKEOQGRPZIFDFUVIVPNLJDAMXWU");
    msg.op = 129U;
    msg.lat = 0.9343999160497478;
    msg.lon = 0.9651787278560702;
    msg.height = 0.9686283556735791;
    msg.x = 0.6208205174155725;
    msg.y = 0.7268397560954881;
    msg.z = 0.1837036628238795;
    msg.phi = 0.1980168398508897;
    msg.theta = 0.9404858252203091;
    msg.psi = 0.47416716462056363;
    msg.vx = 0.7839515163471481;
    msg.vy = 0.9348012169879719;
    msg.vz = 0.916139386338884;
    msg.p = 0.12347186440533986;
    msg.q = 0.8890643796276293;
    msg.r = 0.7558821457727267;
    msg.svx = 0.4052087263929066;
    msg.svy = 0.3100902343812645;
    msg.svz = 0.8473591153955383;

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
    msg.setTimeStamp(0.33828564206902045);
    msg.setSource(38176U);
    msg.setSourceEntity(215U);
    msg.setDestination(49667U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("SWPHUXRJGLZJFNTDUIZGTTIZOKHBFOAZJZWIVCAPBBVWYYTEBYMAPRSEEELWYLXAPSGECGJENNQXQLPXINUGAKIHMKMJNSUHJRYZDFGPELCOKRUXOQVYZUMPIBDJPLUKLYTIRFGVDDVRBDW");
    msg.op = 209U;
    msg.lat = 0.13411990808011953;
    msg.lon = 0.2614176796466545;
    msg.height = 0.9581273916670942;
    msg.x = 0.6756547113174282;
    msg.y = 0.3211148156901523;
    msg.z = 0.38981913501412946;
    msg.phi = 0.3120899837919914;
    msg.theta = 0.16594334568069857;
    msg.psi = 0.24559761492203336;
    msg.vx = 0.5379077172395497;
    msg.vy = 0.3502902794175615;
    msg.vz = 0.9781603405080582;
    msg.p = 0.03792560601009887;
    msg.q = 0.9881488906129198;
    msg.r = 0.08973561841936462;
    msg.svx = 0.9943028936811817;
    msg.svy = 0.3058361683127844;
    msg.svz = 0.6676701598146626;

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
    msg.setTimeStamp(0.45905634926836714);
    msg.setSource(37861U);
    msg.setSourceEntity(77U);
    msg.setDestination(43256U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("FTBUKPHRWSUODEUFMNTNXMFSMLBDDVIZKFNKROVEMWZPRYIWKZNKGVHCIVHEBMVKEQODKEPJCLPQICUBVUEBSRGYSLAIWCTZXQYPPWTTAVLARBFLCDOBTDHJVAVLQLBAXDQMPYOSJCKPGYZNEGTOXXGWTEQJLNJYQIHA");
    msg.op = 57U;
    msg.lat = 0.22340206716196043;
    msg.lon = 0.7920050728630679;
    msg.height = 0.861159850244236;
    msg.x = 0.15504007216918592;
    msg.y = 0.9775656708496537;
    msg.z = 0.45300492870632225;
    msg.phi = 0.3622640277499971;
    msg.theta = 0.06674455087487563;
    msg.psi = 0.25609591510428265;
    msg.vx = 0.8083203363707657;
    msg.vy = 0.3454010614022899;
    msg.vz = 0.41072509111808964;
    msg.p = 0.09538373016912594;
    msg.q = 0.8599111969870616;
    msg.r = 0.4129941356737119;
    msg.svx = 0.4311766246151524;
    msg.svy = 0.9686847709721071;
    msg.svz = 0.4572097311738842;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.24390185500453188);
    msg.setSource(29212U);
    msg.setSourceEntity(55U);
    msg.setDestination(20772U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.6871639164552804;
    msg.lon = 0.2905873407652486;
    msg.depth = 0.08119952660425334;
    msg.roll = 0.3185009840394234;
    msg.pitch = 0.8602466794956839;
    msg.yaw = 0.6327786231814352;
    msg.rcp_time = 0.050316865720972714;
    msg.sid.assign("ILXERPUOSZYKJMDDEQMFXUWOIPKMVMBUUPNUAPWWGOKLEDBJQHOTEAPVYTVSZTKQHKAHWRMHCRCZAARYCXOHABJGMPFASFEVQSJJUIUUHJLTCITTBNILXZDWFZZNQNCOTJGICROEYAVPPUCDFFYTZGNNFXZDSMCJRBABQEGKKFIXLWWVXRKF");
    msg.s_type = 150U;

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
    msg.setTimeStamp(0.7664550629668754);
    msg.setSource(52670U);
    msg.setSourceEntity(225U);
    msg.setDestination(63568U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.5154750047297569;
    msg.lon = 0.7898184159014101;
    msg.depth = 0.9057990015953346;
    msg.roll = 0.9033632358831162;
    msg.pitch = 0.3762294182473641;
    msg.yaw = 0.15288165811104049;
    msg.rcp_time = 0.6160316962089394;
    msg.sid.assign("KZTYTCOUPRCESVPWGUPMFPIEOTBPWGSUNWFR");
    msg.s_type = 119U;

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
    msg.setTimeStamp(0.6699896499553992);
    msg.setSource(18308U);
    msg.setSourceEntity(63U);
    msg.setDestination(4664U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.7251194019000315;
    msg.lon = 0.19182429364629217;
    msg.depth = 0.5789943844823261;
    msg.roll = 0.7339159702293523;
    msg.pitch = 0.3553285910963929;
    msg.yaw = 0.7856823276271242;
    msg.rcp_time = 0.682641974347992;
    msg.sid.assign("KVGUAZZQIBEWPEEWFGAKLJIASORKRHCHZBFUKCYKYOSFMIOXZZWMJCIDBORFIGQBLXWWHDFJACLMKRXDKTPUZTRYIAILWJQMJUHYSDVZJGN");
    msg.s_type = 21U;

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
    msg.setTimeStamp(0.7955947670092649);
    msg.setSource(31273U);
    msg.setSourceEntity(178U);
    msg.setDestination(25972U);
    msg.setDestinationEntity(24U);
    msg.id.assign("AJEMGYYIJGZQYYYIXUEIMILMAPBMRPDRUXXIOOSZSEIKWRRIVSGHKTFHAFQDHIPHOMXOJLPJMCFBLWHCLBDZIOSFPKALQZZSDJLGKFMDBFKQRNHIZDMYVNPQQWTPLNVHEBHDWXCVXNTSPEVOTNSRWEAGEVGFXSTNUUGUGATRHQRBTYXQUW");
    msg.sensor_class.assign("AMYDYVVANRSMOUKTXOYYOMPDWHHHEAPZVVOTHJVZGQTPDBWVLKNJWJALNCEFDUQELPICKFTATUEQHZCSPWDSHKUCRIBCFBZQ");
    msg.lat = 0.740866893384463;
    msg.lon = 0.30324216419407146;
    msg.alt = 0.47636644199652456;
    msg.heading = 0.09666467736731132;
    msg.data.assign("FOBRRYMHLMFAWLFEBXCKGJRBABGVALVGVWKDHIHKBSUMQDEQNNCERGLZMKWFJBRKIACFPHKDNBSOZVTEHIXKHJXFBUNZSJUVYDTCUIUEWZSJXPAXCXHQAOQEA");

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
    msg.setTimeStamp(0.1943483103158684);
    msg.setSource(23586U);
    msg.setSourceEntity(26U);
    msg.setDestination(39946U);
    msg.setDestinationEntity(78U);
    msg.id.assign("AEQSWVAMZLUHKCAZIJVZACDTAEWNLBBRLKRDMOHPZCENUYXAPRHESDCYULFEGRKNNUBMIAPBIYXGQYBSUIPW");
    msg.sensor_class.assign("FEOADMSOXWQUAYCLAJJKHPJMSAGHTONWBUINKWNTVUMWNROQBCDLXQVPVNWKCLYUEGKKPVAJNTDQSETBIFIOWKSPVFBTCIEBHILJZTGBWGVRKMFQXYLNUCRFJUDQHMTLZNFGXSOBSHVBZVXUPARIBGIQOHRCUMDTEPESWSZYFJES");
    msg.lat = 0.42757373077051475;
    msg.lon = 0.6679553495187961;
    msg.alt = 0.3886067263227576;
    msg.heading = 0.4854240715344781;
    msg.data.assign("IUZGMDJTAIXEGSQWAPGJZQRWMZPNMFMVVSRAIJUGUQCQSSCIVZFJTEPNJHXEGBNTMJHWAW");

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
    msg.setTimeStamp(0.3529500254875354);
    msg.setSource(16839U);
    msg.setSourceEntity(141U);
    msg.setDestination(34936U);
    msg.setDestinationEntity(248U);
    msg.id.assign("OBMYSEOJMYDHVUMGHILAYLJQZJEMHCOEWKRARYGRKVSZWEJIJTLIHBPCISNJZVFTDFGMRBFPCKXCUWAAEMSETICUSFYTSUCPKUHVLINWINXZFZDPNDJOUXDJFPSFTOGNGVXERWNKMHQQTSQLSGMIBBUWKFL");
    msg.sensor_class.assign("WQJJRYYGPLCZVBMXKHUBGROKUPAACVUROFWKEZHYDEEIIDIVWLBDDSMOSLXZXWNRBDYJJMBVHFQMUNFBJXZSLJRHKVTNNERQLPDFFSWPFAPFPJRNFGFHWTGELHDOGCLAXPCGNWXRDIN");
    msg.lat = 0.399392087895566;
    msg.lon = 0.9511561964512598;
    msg.alt = 0.049041050505756245;
    msg.heading = 0.7993254585118114;
    msg.data.assign("XCDYLJCPPYHKZDLMXZSBOVTJJRRFTDPJWJEXYWWRNYXOGSIVMLZQJADXKWWNCUGVILDEANUIWCOOUZNOPFKKIKNAJKNKKETTLYBACINOAZMXCFKCJIZGTSHXQCHFZWQTRTPEPLHGG");

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
    msg.setTimeStamp(0.5718445776137617);
    msg.setSource(47955U);
    msg.setSourceEntity(75U);
    msg.setDestination(15502U);
    msg.setDestinationEntity(40U);
    msg.id.assign("TWKJIXHBKOHWJPKEWASHJCPQVISSXQIBCDDDTCEYYLBYLIJUBABDNPXGEYXVWNTPQQNRAUPXIJNLNMDXIOAVFCTSEV");

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
    msg.setTimeStamp(0.5558651324904466);
    msg.setSource(57521U);
    msg.setSourceEntity(202U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(196U);
    msg.id.assign("MYRTPCEJBQDRVCLPJUTFDRPXWOGXKUWKQQBSWKFETSXKIDYERJBYRPVOCJZWPJNXMHMYGGAGDDCAQTJZYKTNGMYQHHIZZKILDAVBIHXESWUVPKQGDNNBIWLFCLSGUWRIHXOZLZOLMTXLIFMMPSWDDFIBYWQVOQBKGJUZLNSJPEEPHMAUBKOOFCAACYXZJETGHI");

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
    msg.setTimeStamp(0.04439291696933911);
    msg.setSource(28507U);
    msg.setSourceEntity(34U);
    msg.setDestination(44221U);
    msg.setDestinationEntity(251U);
    msg.id.assign("ACOJDMUFKEOMHJYWTPNSCSVJREXOKHWBOTNBZBILEVHHZOHEDCPTFRSXSUBNMKXKEFPRXRNLRLMDOSDI");

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
    msg.setTimeStamp(0.9465500024120695);
    msg.setSource(14942U);
    msg.setSourceEntity(176U);
    msg.setDestination(1745U);
    msg.setDestinationEntity(191U);
    msg.id.assign("FUGPWSVXCKWAFQBGDQYKDEBLPUOIIIWOQFYSEXMLXAZEDGHNLHDZVMYWQONJVSSVBRBORZFIJRWHJTLICETAHSDQCEIGZTPBSKPRPHVKNHAABYXZNRPGKFJRNMLGUEQCEZLKYGSLEUCEBZVIDYDIDRXXEJFASWCYDGJVGXKRCDPTSLT");
    msg.feature_type = 66U;
    msg.rgb_red = 243U;
    msg.rgb_green = 79U;
    msg.rgb_blue = 111U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3881229366483281;
    tmp_msg_0.lon = 0.537533772726159;
    tmp_msg_0.alt = 0.9723084979371044;
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
    msg.setTimeStamp(0.25432134732077927);
    msg.setSource(54783U);
    msg.setSourceEntity(89U);
    msg.setDestination(26440U);
    msg.setDestinationEntity(59U);
    msg.id.assign("OLOUWZLLPIXNXJRZBUUDVGYLCAYKQUJKVXWGFURIVBBQFHRWSGNHRFZWIVVTVTUTGTPJHJCDDHKRMEXEZTOMCYDYNXZCTVBLRDCIBAPQDOATOXHIPSZRZCBHTWJQKBYKFXQWJENUAIACSXFFPDPGURNKLKHAABRNZSGKKEPBHMMSLEYGICWQFNJMZOOPATDVFOLTEEOMIJQYCSSHMNJGEQYXVDUMSQV");
    msg.feature_type = 88U;
    msg.rgb_red = 67U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 55U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.14225783366564282;
    tmp_msg_0.lon = 0.47365745069952014;
    tmp_msg_0.alt = 0.24084728245296616;
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
    msg.setTimeStamp(0.009069158312529635);
    msg.setSource(56979U);
    msg.setSourceEntity(140U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(23U);
    msg.id.assign("VCQVASMRUFJIFCGQMMJILEBSMDEHXXKMWGPQQSWAPNINDPHZNULNHWFFAKVHUVSQJYEIGBWECIAFLFXQKRCQZMPSDKTTKORLSZEOPQXVWQJORYNYPEDKABRDZUUNVKPNBCYHPJRGZLSALYFMBUVLLIHOKWBFZJWUIXMTQCUYRSVRNEHXXTOGZJCLFNTUWJDTTHKDEFXXTKXADOGSVENETTBIDJYUZWYPG");
    msg.feature_type = 190U;
    msg.rgb_red = 62U;
    msg.rgb_green = 215U;
    msg.rgb_blue = 222U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4026604979452164;
    tmp_msg_0.lon = 0.6071518977093646;
    tmp_msg_0.alt = 0.7290533930903969;
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
    msg.setTimeStamp(0.009731016194969522);
    msg.setSource(13247U);
    msg.setSourceEntity(24U);
    msg.setDestination(27389U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.17156801248036868;
    msg.lon = 0.20413864009273475;
    msg.alt = 0.7252685617810763;

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
    msg.setTimeStamp(0.17029951703444735);
    msg.setSource(6459U);
    msg.setSourceEntity(40U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.4712514818162583;
    msg.lon = 0.7115021001995774;
    msg.alt = 0.8838875997953551;

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
    msg.setTimeStamp(0.7773624642479164);
    msg.setSource(2816U);
    msg.setSourceEntity(215U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.13714906210420408;
    msg.lon = 0.7979782236301803;
    msg.alt = 0.6480696160213214;

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
    msg.setTimeStamp(0.7142581980518071);
    msg.setSource(61337U);
    msg.setSourceEntity(6U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(113U);
    msg.type = 173U;
    msg.id.assign("QJHMAUCETARMGVICXOWMBKCGUAYYZFPQAPSJDOLPZNCEWFZBBVNEVINLYJIFNYGZYEMQIVZQISYDEYHBNFSDKQDNOVCOKGHGPUAHQRHPUWTKUUOBFIBIDLEJPAYUGWOCKYSQXKKLDZTQRMBYMOJHABXFSDXZMRUNZCLJEJRGTXETMWXJOSXHSWCHWSPHIOSTTRZGHNNWD");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 34U;
    tmp_msg_0.quality = 108U;
    tmp_msg_0.reps = 105U;
    tmp_msg_0.tsize = 243U;
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
    msg.setTimeStamp(0.6750893213510982);
    msg.setSource(28571U);
    msg.setSourceEntity(196U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(90U);
    msg.type = 65U;
    msg.id.assign("GLSTMOBQBIQJRJYDTXEUFJVALNSDFERNPFAGAVPGVUAMFKDOPQQKRXHWMTPNWLCUDFAYVWMCVGEGSOPBMUYCWULJOWGLVTAJTIKYCHTKYUGOOQLYBPOOJCUXGDNIDOEUNKCNMYKMQWIUTEZSHWFBREALWZLIARWVFHTDKPIQZSQRAXXFSZZQXZZNVNKSHHXPG");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 151U;
    tmp_msg_0.goal_id.assign("NPGOCTZDLQJXCWMUBHINPRSFIMRCZCNIKQYMEKUEHUJVMKHFRLVQXEFPVLQMFGB");
    tmp_msg_0.goal_xml.assign("BJYCOUAAWTCOLGWOWOSNVQVKPHQZLRYBSJYLMKAOJSBEEYCPKRTZMMN");
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
    msg.setTimeStamp(0.700921771939855);
    msg.setSource(8353U);
    msg.setSourceEntity(194U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(107U);
    msg.type = 7U;
    msg.id.assign("OWCWKVQDJOJCQONXBJMMBJWZZKVIEYRYXLCJMEKFQBLUWOKHZPIUNPPNNVYAXJXOQEQYEAZMXURDGBKVROSEHKLQNSCDPRCIFEGTWJALFMCTHZRCGMWMIADTYURBGVQKCSOUVXWSBRXAZQCNUTLPISTBQYEZHSYWHXNVFIATRWMOGOWTBLGHAEVHLPFEDIFUVKDSJZNSYVMNKYISRJCLDXNGLAAFHI");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 90U;
    tmp_msg_0.error_count = 218U;
    tmp_msg_0.error_ents.assign("QFPKQXWPSMUNWZEWJLTABHMMSSZTKNBQVIHRCGQMGJHUHGGCLXYAFXDLARXFYLVFAQXMVOESOLHEQDGQSKEDJGVRBONRMNZHLYEJHACZUBJVWJRRKDTUNUAFTKRQSTCYOBMNHNDCYSKYVZIQXFBCVCMBZPPHWOUMXIJVEXEIORAKANDBMIIYJNTJZTKPIXTLEWTCDLYBWJZDUDZAREVIUOGFWCHFCZKFGBNPLXWSOPI");
    tmp_msg_0.maneuver_type = 24991U;
    tmp_msg_0.maneuver_stime = 0.496361167269353;
    tmp_msg_0.maneuver_eta = 21711U;
    tmp_msg_0.control_loops = 3977693970U;
    tmp_msg_0.flags = 246U;
    tmp_msg_0.last_error.assign("NWVYHJKAJBNYDXHPWFQKDVQDGLRMHMMTDUSETKWKUJIROWYTMZPKTORFGCZOYEVVBOTWSIIBRITXKYFQOGUBHAMQRHAZLQIUHRJOKVCZSSZONCGEXPGZYJZWSUOULKADCPVCVHQRFVESYJLLQMTGRIMAANYTSKJXHBFHPFBPBWLGZAUWMDPJEBIELFOUEILFCLAHSNKMSBINTCVOGBCIXSGZDDJXQFZWYPQPUTRGFXMPAEQDCEXCWDUYLJN");
    tmp_msg_0.last_error_time = 0.13633695968440496;
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
    msg.setTimeStamp(0.6591035183599169);
    msg.setSource(718U);
    msg.setSourceEntity(43U);
    msg.setDestination(58117U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("YSQZMSUGLXQENQQQQSONQTBDLTHHKDIUGOXKCFHCRRFEPCWWKZSWOJZXCBVDTJJHNHRUJALFISPDNJASEKCAOUQDVPEWVJRRCMRRGXTXLRWFMGIRTVOTXQAUZBXISBEWBBONFAFUGDZQPSFRPONNYXUMIAZPCHBLALSUYIPGMYPDVHFVWYVCFGJMCTKXBLMKELZHUAEYMWYSHTPXII");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ASYVRZPKHXVMULDYSTUIIXAWAVZNHRCWHEMHWAIHJPKXICFKGXMPLTCDOVOKJZTBRDTLPPYCMQWDUNRIGDMASQUNFPYSFKQFWYNTFEIGZRBSZBIAXOSIDNXGOHHEVBQVTGNQZBMKWRNRIQLGZQSBWOJMWEJFUTGQFLLKUZGMSCOSXTGTKSFXHMJDDAECNYMNEO");
    tmp_msg_0.sys_type = 214U;
    tmp_msg_0.owner = 49600U;
    tmp_msg_0.lat = 0.8382063967568817;
    tmp_msg_0.lon = 0.6366883246976277;
    tmp_msg_0.height = 0.4982473872892186;
    tmp_msg_0.services.assign("VFLPKLMGJYBITZRKKNNVYERPDHQLTJBIVXNJKTNGHNUKZBOOKBRTMZNSBGPUGMMQCRYWOPSTAJFMLRXSSEAGFBSRFGFKIDWAAIUJTQWAFFZHCZXFDZOXAVCWVOXIZOXVOD");
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
    msg.setTimeStamp(0.6556956934779491);
    msg.setSource(46819U);
    msg.setSourceEntity(93U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(168U);
    msg.localname.assign("JFVMRZSQTWBZUIOQVQCCFUHNWPQUBRGWIJXH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SXWOHQMDXAKJAGKCNSBYEAKLNXTNYMZSSVQPIPGEEHSXTSTBEQHTOHJGIQAWCAXCFLBWNCDFCC");
    tmp_msg_0.sys_type = 58U;
    tmp_msg_0.owner = 36369U;
    tmp_msg_0.lat = 0.8411804030830711;
    tmp_msg_0.lon = 0.9430142243573454;
    tmp_msg_0.height = 0.8590886864243596;
    tmp_msg_0.services.assign("DISVMBYNGBUCMGEZFFFUW");
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
    msg.setTimeStamp(0.2132827494013848);
    msg.setSource(5466U);
    msg.setSourceEntity(239U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("RXRLVKHMRJMEPCPFJSHRKKFHGQBZWXOUXXUYNTOYCDAAQWQCZTVLQYHPZZHVQSWWUOUGPSNYROQLNECLAOAZFMXVPFNHRNIDKTGOXPRDSCRWNOATTRWUYBMPEBODFWYNSVKBHJFDEEHALJFSPPJIIMMVBFNCDZULCJVGDXIZCQGXVVAHAYKFTJMJUTUHQCOWGIJUKGSSTAIYFMDKBBIEMBNGQZKDTPCRZNGEXMLYXQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JLRRXVLFRBSOTUWYTXHWKSTUVBFHAVEBWTHQMLAIXBUDADOVVPIYPJHCCXHYSKGBVDPWGSIICGCQGOLQETIOGMVSGFMRNBTSAFSTHCJUMEINCXJRFDZZSERHDJUDLPUYLPEJCMAINPROOUQQNKCNKRZRUFLXXMEZTQDNVQRNEBMAOAHMOAPJNKOFYGZSMEGZKXFPWEKZELILBVUZBTQOLWK");
    tmp_msg_0.sys_type = 206U;
    tmp_msg_0.owner = 1919U;
    tmp_msg_0.lat = 0.8320040391793986;
    tmp_msg_0.lon = 0.8121145378764343;
    tmp_msg_0.height = 0.40961675309705414;
    tmp_msg_0.services.assign("SAUQZKSLKKGTNFJOBNRFURXJATSHKWCMLIVUPOJUIXVVHIOPOOQDXZTTOKBBXTCTXFQGZLQSRKUYSSAXKMPYSPHWNJXQVVTDLRPGBFXYRGNKLFFQUGELWYAAEZIMHWEHDJWBDSCQRCZBSKHYIRUMUJNCOCMQQBDIOVABPVGKEDYCMWXWINCPEREHDLSEGBMTVNYUZTRWLEJFMFRUNJTADMV");
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
    msg.setTimeStamp(0.4019103683115345);
    msg.setSource(15316U);
    msg.setSourceEntity(90U);
    msg.setDestination(37417U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("OYJPUOLIZPLIXEGOSQIGZQHZEBOZMWEHJYJ");
    msg.predicate.assign("PRGNWGLAPUDODFMTMOCJMSLRRHNMTOUGCSBSQUBYUOFSHNDEIVWACNLZXSIAVTPKCIENQQDWWBYLTFODMYHRMQUSOLLOGAMHZZWWEBNEJJEWBYIXYQHZFNGLVEKFSJLUWRRMYXERJPGRSZJEOZQSQVEFWIFPKYBFRNHIKVQYDACACPDKPAOJAYAUUGBJXHKKMVSVXIJNCHDNXBAOFYXQVHDBUEZTTWGILJPIMHZKVUXVIXQX");
    msg.attributes.assign("QRIKJYBDUUUYHZUCHYDRAIIWPUASNESAAHSEFQBFOJVHCPDJPIJTICAICLIVTVRKK");

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
    msg.setTimeStamp(0.04167878174551076);
    msg.setSource(20394U);
    msg.setSourceEntity(176U);
    msg.setDestination(32374U);
    msg.setDestinationEntity(35U);
    msg.timeline.assign("VKPSODEQUUGSYPDHYOJGAUCWLHONFYKSGUFNHNDEVILPHKHMXTVZPSIMXNWGZMROAXPOJGAJVAWIBQBEGATSNQEDFTRCSQZPPLBMKAZNWBTBBZOXDTSBLFHRDQRMZWMQKMBXEDXBVRLTEQQIXJPPHIKMGECYCEKDUZWWUXFTDCVAHYMKLZWYSUJXJN");
    msg.predicate.assign("YIBHERQRCLWDRINTHXJHPUBMSBDXGGXWDBJKQVEDVOTJHLNRYOLSYDPBVVXQPKJILFKIOGGWFFOEMONEAVGMJPUTUEHRMRVNNMFAMGSOCLAAXPWDTVQEPEBZCYPSVDOAFTZK");
    msg.attributes.assign("RDTZSPACICUXQXZEAXSOVDQIZYFXOTMPQUCOYKPPLJSLRNBTSKEVGWHNVVKGFVYGIHOFTEGSVTNLMOIVRHSQBXKMVYJLKJGMZRYAMWBRDHWSYNGVSJCPFQFEZISOLUIJGBPKOFTRFLFBNUXTIHMUMXWDTAJPDHCQEZBLIJCPDRSWDEFBMOKCALLNGZWAVZJCJNYLBMPHQQXUIYTATIURNRZUKGBCWBQWH");

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
    msg.setTimeStamp(0.3628414339949464);
    msg.setSource(6827U);
    msg.setSourceEntity(148U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("JAEDPJZUJHWNSBKXRFCNXPFJECLGHWPQNFYNCEYQLQXOVJDSWMLJAHUXFOUXZMSZZYDRPCNCMKMVKTSCIPPDSDBAIIXZKIAVUTLDVCWTIUBLQCOOVTBWVZGECYBUEXRGRPQLSXQGNLSKEZODFOQXKSEAXPAOTFVEYFZJTTNVLGBRRLDHAV");
    msg.predicate.assign("FITIPVLMMVXFZUCMFUNBJODCLZBYADDSZCXTUMAIINKHRZOZXEDSCNYBLGEQALRMKRXYYLJGMUTHQBPIIYMZVARKAQSPGWZWB");
    msg.attributes.assign("HERXCAOJONHYFZMPCKONXWOYNKLDFTZDXNJIQHLGTKZPDCRLLWFSGEXAHEMNTGQOURPXKSKZDLOPUYMNBFEACSUTGWIUBWMJUFSTJFVBEZWFXLEPYREQBVJJXOLNRAWQWIPXBD");

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
    msg.setTimeStamp(0.034749245831445674);
    msg.setSource(32810U);
    msg.setSourceEntity(176U);
    msg.setDestination(9077U);
    msg.setDestinationEntity(164U);
    msg.command = 24U;
    msg.goal_id.assign("XUKSRATSVFRLCLUWIDDBNCJPKDMNDXOGRPOZIMLITDOQHH");
    msg.goal_xml.assign("LLZIUIWPOAAEDPIJFTXQEAQAGKRVYZYGEXIDNVHSPXFFFEWRAPLXKSWRUNTSGPCTJMYKBUFVLBKBNBGAZVCYLWMHPMKGLRTDKQOROSLYJOKXZAWTNUFHODUDFHCMXIOWCEZJFJUJKQSMDXIEIUFHVIVAS");

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
    msg.setTimeStamp(0.9333192514322606);
    msg.setSource(45905U);
    msg.setSourceEntity(161U);
    msg.setDestination(47238U);
    msg.setDestinationEntity(8U);
    msg.command = 70U;
    msg.goal_id.assign("LETJBJAQCQWELXZWZBHNORZGYEOUIEAWGHQCIPEUPSNFPTUQSWJZJNUSKKLT");
    msg.goal_xml.assign("QKRXYDSXLVWREMAECBPJIPAIQOGNONGFJOJBVJDLZZCAKKILCJMMBEXLACQBXVCSAPIHMWHEVK");

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
    msg.setTimeStamp(0.5933764333813302);
    msg.setSource(44097U);
    msg.setSourceEntity(247U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(202U);
    msg.command = 198U;
    msg.goal_id.assign("PWTMFNWLMAUBCXFAYJBJELAZEZCKFMMKFROIBCUZUQBGPPHRXIDIHZNRICJJFH");
    msg.goal_xml.assign("JEZBCLPRTJBNNTKZXYUVSPNIOTSYTXWWBXTVXCDMIPPMRRFIKQILVUJRDGSXFDYROFOEENPRZXUOAAWNDLGDPQFXIULFWBVKHPBWESXAVCTZCOBZIYMYKTUREMPHGAQUHZEWADQJYLALRBEMHDINBOGHHQKOJZQNKIYEKBSFSHAUDLKCQATWGWEMKNDZRNEAOZMGP");

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
    msg.setTimeStamp(0.013756980839776056);
    msg.setSource(21652U);
    msg.setSourceEntity(165U);
    msg.setDestination(46241U);
    msg.setDestinationEntity(122U);
    msg.op = 228U;
    msg.goal_id.assign("YPBTYFVURHTYCVDRRBHCTBLWYGUHTOIWIPWLBQKMUKNFEGEPDZXEJGSLCYMMDFSIXZQSINEXMXORJMKEYJPAXVAEUWQSYFDAVVXBATLOWKIGDYHLATZMSDFMONRRCDVNIRUEFSDTBSJVLZHQUMPIXVMPZQXNJDUAJSXYYGWHNQOPPQZRLGVLNGOUGWFZTJBCIWG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YPQHTKAHFGFSZYFVDDJIXEENCLMNULFBQZNQLXNWMYERJWSFVJESMFPZSIENNCAUOTGTKDPUQFWHZKAODYZDOTWEZYRXLKRCKKUXROAIWQKPRMTHEXHCTCGGJNZBXNUVMBFVJVLPNFMVMHXOJIOBJYEWDZYIVODQZTMOWPLUGQOGWRLESPTHHKRGCBCSRXVXTHIWDNBZBLIUSOVBL");
    tmp_msg_0.predicate.assign("DHEEQRCZZWPQTOGNFBSMGJDXZFJIMJTIZLTKMFCMULCNBNEBOKGVOICJIAUKALXPECWKPRCNHDDPXYYXVBRYIRCAHBRXOFFVHUSHLLHIQBRLZYUELNWYAPRFSZSMYUVAJWIIXXQVJDYFICOEVQNBBRPEEGHKITSUVQGAGDGMFBTCPOR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RBORQZEZDVXXKHHPZUCRLBFHQAF");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("BUBXGCIDTWPLSLFJTKMJZYYMXRYDKJKFVFHLGCTXIFPESBSMTDILOUJDEVJBVCBGTKAZAMORGMPYHDHNTWWSCEZGWXRHNXOEQWWKMIXHOANCUQRVJERDTUWBTKCRMJOKQVABNXPZVBLWLNEQYIEARDCIEIFATIPIWZPDEZVQRKLOFPBGPUVLFKHPOYOJKSUHYPMAJXVSOFCNSGNJSSXNMQWZNQYGM");
    tmp_tmp_msg_0_0.max.assign("RNTPZVYQBHUOYMJGCLWLUONVJFITRZHBOABTRFSDLLACGGDGSFIWZUMQUYZENXRUKQPGXOXNHCMNMQKVHMBZHVRTHQFDLPTETINWFIDMOGWDJDLYVFXDCJSJSAQOWKSOAWWZYCXCBHKBIPFYUZSIRJXABPXJNZVBFKPSQPQMVFADSXTGREDTUCVYAVNTITMHJKNHMRJOICVJMKUAIEOKLEUYCLDXSPUAPELWP");
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
    msg.setTimeStamp(0.696640770471133);
    msg.setSource(48264U);
    msg.setSourceEntity(236U);
    msg.setDestination(44617U);
    msg.setDestinationEntity(210U);
    msg.op = 156U;
    msg.goal_id.assign("YILYSESQTDHQYFZIWIAVCSCHOFGBOUBKOOXXPPVJWNKGPMCBKFSOQHVQKAMIZDNMZMDWJPEHBFIZVDJHTYBHTNICTZLVOAZPDEQSQLUCTAGXSUROIKFBEGRKBVYFMEQDXATCJJPDWYNHWOEGXFARWGSJMHXKNRCGRFCWQYJJMTGFAVXDQMQULSIFBWRLNYERULTRMKCUUOCPUGPDK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CKDYWBGXWDTCOWXDGENAIVJNISHILYJUTOLHFPILBQDOJDSUWTDNNZYTJAJOWFMAENZWPZPLCRMDRSRHFPEECQEBMFOAEYQBHADIQMUGZTEAHKVDOAKFKYMICCKOSXWJUUSLIJRPKLYXMFZSLQRPUUFNMKZBVERBGSRVOQBHARCJRMEXVQUXBH");
    tmp_msg_0.predicate.assign("NRLGKISOGLELMWMSHPQIZZROVULTKKGRLXNBIUCQIRVNONYGTEXPJDYSWEYNLZEAUTQIQWAFUWYTMFEWMTKWONVGUQUFVFJFLPIWHGXPPETIRMIT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SYXKVWBKTOEYAGVHDWFFXKMXTJYWDYZRMINZTWTHWVNCAIYCPVALAPJGJXIONEIFUMMCJDYBUEPUAQHVTIBBCBMFCHQUATJWDETHOBXXEUYLGSBXSAQNQGINCBDLROUQKCZQSAZBEYLJJTVRJJBNKGUHHHQRSPFOZNVSWKDNYCEQPZAKSCCDVSGEELHPWRFFQTRFUSNIDR");
    tmp_tmp_msg_0_0.attr_type = 238U;
    tmp_tmp_msg_0_0.min.assign("RJUANRTLDFPFCHEKEQZRITIJBJNUHIOHNRCHNMUVVGHEORCVSMBZLOMWNIQGPWVAYQDPPVYHBNAEXUNBWDGAILOKQTXREUCXYKFIDJRBUFIGZJTCPDVDWYDFWQFSKZYDLKNOFSTWVRMJSKMRIKFHXXEPXNXSNWPZEGZMQAHGEYOSXOMMTAGTCMOCTJYCVHAQLVCKBAYKPWADOUISEMYTLZFQKLAFZE");
    tmp_tmp_msg_0_0.max.assign("VUFMCZYYPXTNPFCVZQCEDBMPKCPZWUAMNYRHIVFSMVOJEZWYVGYGRMHHFAFDKSVCGETCSJ");
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
    msg.setTimeStamp(0.4830926874848106);
    msg.setSource(64247U);
    msg.setSourceEntity(97U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(105U);
    msg.op = 70U;
    msg.goal_id.assign("UXHYFDUGSLQWROPHKMLRZCPBQBYSBLHHFTQESOOPNXXCZUYDIMAHFNCWZPJJEXIODTIZQYUAMGSBMAOICNKFYAO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KISULWDTSACXPXEJOEBCRSZDEMZVGETMMNUJHMZKGLPVGWAOGDAWBTFRJUYLHLWANHGZVBXGXSXAMPQDTGCXZDMHQUUDKVAUPKTLWRCYVJDQCWMJMSAAIIFYRFOVEYRZTZSIPCZAKCREORHQTFOFOXLIEBNUJXS");
    tmp_msg_0.predicate.assign("JDHREBKLFVWRGWBCMSWUGOMYWXQGYLMSYVWQXFVFPPRDDZAOONLPJBZNIYXAPXEZPHRLNNIBPMBGRIUCUTRFOGZSECKXMNYZHXMJUYIYEKCOFJVYRJSDEVURUAFQJTQSVOCJUNYDMVNBIHWGEKQNYZJXQIHCSGESUDADTZPLLRLDQUGVIWAOKALSVBMTTZXEZAHOBFKHWTLCOIACWAJV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HYBVMKHTSGYQXPIYOJEVWISJPLDABBOUMVQDAXSKEIJZZSZTVQRIOYVNOPGQRPWUBYVGUMMEXUTXZSTYOOVXFAWKRRXDWRNXPSCTHQRUNUZDLIFQNSFUGOSNBRVIDEJFEMKJJLLZDCFGZCFHBLQDVEHCOOWHPJABAAPTEFFZKGFLCLNRJKFIWGTVPCWNDPJBKXTWXCWQCMYEMAMURYKQBHXGIOGBNEUDAAKISZCSHRZCDINTPQGHEMLAY");
    tmp_tmp_msg_0_0.attr_type = 98U;
    tmp_tmp_msg_0_0.min.assign("DMZYYPQIHQZHNNRMVAYOANXCWEFXBCRJDZMAAKPUXFLOHWPADKKJZTOHMFDVNXKIAYTFDZTXDAIMUNTLECKMZUPHTHEGYQJXNQIPWZQBCTGGGGKXMYSKBDZRXEKWKOBJESYWNRVCPM");
    tmp_tmp_msg_0_0.max.assign("JTSFCWDJJNKAVVTYGXKSXHBDLMIKAKOSRFILIX");
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
    msg.setTimeStamp(0.17810240447791303);
    msg.setSource(36191U);
    msg.setSourceEntity(117U);
    msg.setDestination(55776U);
    msg.setDestinationEntity(211U);
    msg.name.assign("GLNBRAQCECYOAJMHYQWLOVBYZFSYFWFGAVHUCFDWAVKOGYQENCLMYYAEKDUHGWNVLMXEWMPRBOFZSICBHDDUVJVDEMTWDZKOEBYXPSJAXUHOJIFQTDFKNYUKKNOJBWUWCFWILGRVQNXRPCMZKXQGCXTPJBWBDJRGOXTEZGILUUTSGM");
    msg.attr_type = 198U;
    msg.min.assign("ZAUUZGOYIEVDQNKDFOQMZBPASDPKEGMTMRPWRAXWSSFJGLNIPNJBYXQFFXBCMHQYMTVNBLVRNRELSDOAYYUSVCQVWWJGIRVKOULTFGKABCCSXLOVIJNECC");
    msg.max.assign("KYBWEFXZOCCGYTGJANSUMRSOJVPPTINBWMDISRQENMLTNZVDHOHCMLCVVFMMJMATLKNWIJRAOFEQBRSOZCLBJPPZTKSXCEKPLEPEUJHCBHVZQOAXKUYEJPURZFRFLMBNGZJSX");

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
    msg.setTimeStamp(0.4776864234348923);
    msg.setSource(33585U);
    msg.setSourceEntity(170U);
    msg.setDestination(44077U);
    msg.setDestinationEntity(53U);
    msg.name.assign("DUUESCIDYQCVXLTUFERAYPMPHCIATVBZEFSSNNRJTQMDHGDKOCABVZEFZVKOVUJMGPNTGMHYNAPBVMBXEEDHFRYKXYRZGHIHSMJZPLULGDOFHKVLRPA");
    msg.attr_type = 80U;
    msg.min.assign("HUHEYIAEERJZECHTMZKLQBRQZVLCDJXRBUJNPNEZMWFSXLFIYQWHLNKWARPKMFZMVXZNNNWPFGSMEUQJOOWILTGSCGGKCITMFPTCQVUXMAPIREPJKANKMUMSOJEJCQXZLASYDCZDOBUXTETAHCAQXOSEANBCYGCQWDFDGPVVPBGYKHDDVHIVDGGSRMTTLUYTLJKBIFTWXRDFZWAIBYODVBHSBPIGXLXFOUNRQAHYUFRJKUBRQYOZWOS");
    msg.max.assign("KTESXGCWLQCRHFWROFIWSURTQBWFWJMEVPKAFXEZJRFVTDHXTJNMQIZYBPHPWTBGNXATXHNKXBPGKPWNLQKIHHHIURYMUNZ");

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
    msg.setTimeStamp(0.7252895096611764);
    msg.setSource(27964U);
    msg.setSourceEntity(246U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(44U);
    msg.name.assign("BAAZVITVGWCAZRCRKVUMWQPDSGXDFPBOVZEAPHZDGARGOYXBTNLSBUFEZPSIJLIXLDSKVLRHAPMGK");
    msg.attr_type = 12U;
    msg.min.assign("CJQHOOXDGBI");
    msg.max.assign("BKVITNWTZAFGOWJQBYXLGBSPEVQB");

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
    msg.setTimeStamp(0.07909538849648268);
    msg.setSource(33885U);
    msg.setSourceEntity(107U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("CJKUAZMXCIOPZAFHWTFMCPBBDR");
    msg.predicate.assign("NVNNZNRQMGEJBEAYXXUIQOJYVKOBVPRDDOUTHAOZASNDHVQJJXGMGHSZCVLEFWASIRORILIXVGEQRBZKMGCCKEBLPSDUHIQNXPRVWDKQGCWZYFQCWQTBGHCOLOESIPZALBAGCFYUUNKMTPTYBUWOMXV");

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
    msg.setTimeStamp(0.3235048579578388);
    msg.setSource(11063U);
    msg.setSourceEntity(116U);
    msg.setDestination(48576U);
    msg.setDestinationEntity(22U);
    msg.timeline.assign("XMNGVZHCQFIWJXMEDSMLCHPHJZSYZBYRFMVRPZXKAOWKEDPNTDIIVRAGIGTOAHHYYDQITRSGLIXVMPASDIKONOEAPGEAPCJUXABPKKDXQGLLSQUQDVWFLWYXLEQBNSNQWUWDWYOMCNXCPOLEFCZJUYTHTVJKTEGFGUBRHBDELSKMQU");
    msg.predicate.assign("CGUBFTEEXMYFCJQSTVDOYCEVDLSSDRRCSDQMTZRIJNJTXG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LHRCVIBBYEUSLQAV");
    tmp_msg_0.attr_type = 228U;
    tmp_msg_0.min.assign("LZIYUEWUOKJIWMPLGUICAGNPCKXULHTPPEQYYMGCYTCINEKRQZCCFKEAVSNRIVBJTJOLNVHMHCQBJIXZVMQHKSINAEFVDZOTFWFQPLRLJATTJZYGRBAXSUSGEWCYOFMSOPUOKVMMLLRXWGPGSWMNIJOMXJDZUFADVYEHFLEXWRJKKPGPSUFBWHBNDEGDVYQQFGOTZIUHBBDXNZORVRYUTEBBSCZAPAIBFKYRMRVWXDTSQHD");
    tmp_msg_0.max.assign("CWGTKUCYTZWZOLCHANSVXOFCQXTMNJODFSJOCJBSMGKFVBFWQHUUVFBQCHSBEAFLEZAEEKWNOCAWSDZUOHRYTELSNKRRLIYRHGITZNWAVKPQJEH");
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
    msg.setTimeStamp(0.15930128490326678);
    msg.setSource(31542U);
    msg.setSourceEntity(6U);
    msg.setDestination(42115U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("QZRSIVDFJNMPEKZRYDSWKGHJRHVDVXCRVDWSMXVFQFBPEAKGKATCGTBHUAMBPAPQZRHCWWSFDRZU");
    msg.predicate.assign("SXQIACIEIXZBJQVNVXDRPNAWDUFULZDKAQXQLMBBGJSVSCCEWPUCUMRUMZJZOTQOOXLZPQGIZGILGFJQPGBFUWWYCOMPDWSYIKPXDKW");

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
    msg.setTimeStamp(0.017753121630851743);
    msg.setSource(32674U);
    msg.setSourceEntity(168U);
    msg.setDestination(47785U);
    msg.setDestinationEntity(13U);
    msg.reactor.assign("KLQHHBBFAUJRYXBJAEXPDNMDCHBDYHFJVTYVBFIVUFANUSJGHVUARQAROWXSCLDVOGQLDDDIBEMEIHGTSXQXKSPYRZXPSMHUGCLQFSOUVDKCXEATCZKKRWXMCKRYYWMGUCNPBJOMZKKTTQJJTGODZLNFJLVBGGESHOPZRDIRIQQUVEALWUWEMPQWIWOPSBCZCIYIKNMEUXKIROPZQXNNTEPLLJOAJMNPRZGYTFGNIEWV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JEWVUCGVBARZQFWKVDYUYFLGAFDUPCLSZMHORBHPCXVEPCYGNPMTUOZBYDWIFZBXDPTFDHLOTPQEEDBTIJLISSGPMDKUQSCTNXIVMKQLMSEDVIIRKTUJHHXYOYGKNNJJKOCGQBSLUFIGUXNXZSNYTZPYLTJWEBJFSIRCXURAQGECWMSAGGOEIONFSWZOLXWCBWFPYYHRNJKAAEDQVXMCLJJHITPHKAAXZABQRODZMUMNKWHWRROLR");
    tmp_msg_0.predicate.assign("WKFPARLGXAMEJTFFLHZCZAZFWFSWZVOXZRGQIRLWNZPUWCASDUJYYFHPIDRXOGUIKFEJYDWANPERCWLPLYOGFQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CLZEJVFULFCMBDLPBQNNXPOSTFOGXJGDMYLMKEZMESEOV");
    tmp_tmp_msg_0_0.attr_type = 45U;
    tmp_tmp_msg_0_0.min.assign("MJSMVHZFHJHIOFHHPPQCMXSIZJNOCHRYTXSORZAMBEQVDAFIUGFATBNYTJIULFDFLALSSNWQWGJNBJSHCTYBTKNRQIJMTUJLWPUDWVIQIZOWORTMUPEZQEGZOZWSUUEBSVKVVHKDYBEIFGYGCARGNXCEFFDPLKBAQGSGCKKYLPEUFORONAWKLKRGXVWAMZIDEUBXNXDDVVYDKZYRPQQLYNIXXKDRZHRVACBPGC");
    tmp_tmp_msg_0_0.max.assign("MZKIRTUZIYXZCXVRGKFCLTFPABRPEYCTZQVNIXZFXTKUGJKCDWYXDIUOJMSAAUEVCERDWPTFBOASPCJESFAQAZOCYORKHCAHFTXUWDMUZNAIDVWGIPSOFLOHJBNUYZGFNLSRVGLYKGELTJKNJPBHWOMRZLMDIQSEGBQIAXVNOPBXTJNRVCQQVNLJHHOMVMLQMLJSPWDGBEYWFIESOMWUNRNWISFCZYTMYBQGDKQRHUHKHJGXW");
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
    msg.setTimeStamp(0.25822160592382815);
    msg.setSource(22838U);
    msg.setSourceEntity(10U);
    msg.setDestination(52094U);
    msg.setDestinationEntity(217U);
    msg.reactor.assign("ACRBKTPPTUTUJWXEEACMINYVYDLXCFUBIZTOWEDRHYEJBDZUSEAAOQWMSZZAWIXYYFNMOQCLGRDCVHDHSXHRSOOYRQIWSHIGVLTPZNTZNUGSIYMGIIGDHIJRUMKHPLXVPARJFQUVUXKSGFMFLAONHICQKWTETZZEUJGYEADKPOBZVBREZOPNNFALSDJRXWLWJAQKBO");

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
    msg.setTimeStamp(0.31001194296554846);
    msg.setSource(58797U);
    msg.setSourceEntity(32U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(70U);
    msg.reactor.assign("JCXBNFUJVTYTSXEEOQPJMXGBGMMNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZOEBOFURELXMGFYVGZNSIVOTYTZDADTATZHQZCMFWQSAGEVZQMOHNIWCLQXXUAWDVVDHHNHBTCGYYOBLMGVPRNWEKGSPIATSVUZBFGLKMYUYWQKFSFEEGEDLJUANRVMZJCTLPTPJDKSSOBXQDXQNRXDNLRFX");
    tmp_msg_0.predicate.assign("IMESTTVVFVGORJNDZEGYRYLOZKXUMQWGTXFWLLSAUPMUQGLQSNWMNUYALDCNROMJKHMKZPDBNOTKQCVDDVXPQBNSPEBFBCCEVJAISGKEIAHIPGVZHKDCRWEQJCUZTZFJQBRIOTHJFXLQITHZWZHQAVPPHNFTADDBCJRWYNFPYUMJHWDQUMRABYBOESLXOTGZOXEXYFHZIJBLMJRKBXUDGLWPNUECXVYXTSHIKMOE");
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
    msg.setTimeStamp(0.35930970511179805);
    msg.setSource(12968U);
    msg.setSourceEntity(48U);
    msg.setDestination(7674U);
    msg.setDestinationEntity(37U);
    msg.topic.assign("SLLSOSTQSJHGAAZEGRQJXODRJVUTWVLIFHYYUASFDZIZXTZPCEAYDZEWGMVYEORGFQFTUWKELDAJLCGNBLXBGOTPNQEVWDLKBZPQOUFBNZHQMETMNLMIWNONCOIXHJU");
    msg.data.assign("MIXJUCWHWYKAGBPDHNNXTBPEPNGXWMOCUKQUDRRWDZVVGGVWPRPECPYKQCAKLSSGXAANCSOADRFGHFZQ");

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
    msg.setTimeStamp(0.051929765326188204);
    msg.setSource(8099U);
    msg.setSourceEntity(94U);
    msg.setDestination(48588U);
    msg.setDestinationEntity(51U);
    msg.topic.assign("WOSVWHKYGJUMYCJIFIUAJXVVVRMKCMXBXRFGLAUPOPCDJZULTFEAGUCTQN");
    msg.data.assign("PWULABKQEEMIHNLXRRDNHTOPYSZMXTOVBIZGYXFKFXJJZEEFVVYWHQVYFHTEMSCVALOBEDPGTWQYETGCHNTDYFXWDNXWCPSPIGCUTKZWPYKSQULAUJDSRBZQMGBSQSSJCGAQAUCOUZLRRDEIHARNDBTYWOXZLVHKHDKBXQGRUCJDF");

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
    msg.setTimeStamp(0.7890191363599396);
    msg.setSource(59028U);
    msg.setSourceEntity(240U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(13U);
    msg.topic.assign("JEMWXTERPEPFTQDYFTZBRAZAUFVRQUXOLRHEYAXUNZWPDONKETDYRYKYPORDBIWUFHOBFGMNPBWOHJVIUYEKXQIHFSWGVXCPMSQKTGPOAZQXIJTKJVAKXCXSIDIMPKEFSINCLCQCDLANDAOHTZQKMVN");
    msg.data.assign("KFYHEFFQHTSZDAODJVYFVIRAZHTGLDICKOLWYKDMUQMKYEKLBZIJTFUXREAVUVNVTSSASFJCWSTRLPUIYAWHTWPJHYSOO");

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
    msg.setTimeStamp(0.29007748981038195);
    msg.setSource(21083U);
    msg.setSourceEntity(12U);
    msg.setDestination(9464U);
    msg.setDestinationEntity(112U);
    msg.frameid = 126U;
    const char tmp_msg_0[] = {65, -108, -14, -46, 25, -64, 38, -73, 5, 124, -7, 123, 31, 11, -96, 96, -43, 99, -3, -108, -67, 112, -11, -101, 25, -88, 36, -52, -25, 57, -116, 3, 63, -65, -85, 117, 33, -65, 2, 1, 4, 118, 4, 84, -16, -101, 82, 24, 48, -39, -45, -38, 119, 43, 16, 35, 46, 87, 45, 110, -120, 13, -9, 33, 109, 6, 75, 113, -97, 68, 82, -94, -65, 18, 108, 68, -94, 10, 22, 29, -28, -10, -104, -38, 105, -51, -29, 13, -119, -54, 89, 112, 77, -43, -82, -24, 77, 57, -60, 0, -9, -47, -82, -97, 61, -18, 110, -8, 20, 71, -32, 53, -103, -121, -63, 80, 18, -21, 103, 84, -19, 123, -128, 45, 64, 71, -58, -103, 88, -110, 44, 51, 76, -32, -77, -114, 126, 77, 28, 60, -96, -3, -62, -75, -85, -7, -76, -21, 84, -123, 90, -16, -7, -64, 2, -28, 123, 73, -61, 14, -56, -50, 90, 49, 80, 115, -65, 33, 101, -47, -35, 87, -105, -79, -40, -3, -26, 10, 111, 111, 27, 61, -108, 40, 50, -45, 75, -73};
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
    msg.setTimeStamp(0.3060541730214855);
    msg.setSource(45531U);
    msg.setSourceEntity(137U);
    msg.setDestination(20060U);
    msg.setDestinationEntity(238U);
    msg.frameid = 221U;
    const char tmp_msg_0[] = {-60, 30, -71, 23, -43, -9, 116, -56, -124, -100, 60, 29, 121, 3, -119, 62, 115, 126, -88, 124, -107, -121, -113, -77, -4, -105, -97, 22, 119, -128, -89, -101, -10, 98, -60, 48, -54, -12, -76, -19, 91, 77, -16, -125, -60, 2, -25, -78, 28, 84, 60, 96, 79, 2, -109, 4, 108, 93, 50, 101, 74, 109, 102, 35, -12, -41, -118, 43, 92, 38, -43, -109, -88, -127, -87, -41, -115, -44, -108, 102, -65, 63, -48, 22, 71, 93, -58, 35, 5, 119, -122, 100, 38, -108, 15, 23, 16, 46, 68, -73, -69, 73, 45, -4, -17, 107, 115, 18, -48, -60, -26, -89, 46, 101, 104, -31, 12, 113, 119, -58, -5, 58, 108, 49, 126, -90, -82, 87, -29, -32, -11, -91, 103, 79, 81, 119, -98, 55, -83, 27, -68, -115, 32, 18, -75, 97, 43, -18, -36, -17, 104, -45, -2, 68, -15, 46, -34, 84, -122, 26, 43, -71, 60, -20, -69, -98, 124, 36, 95, -1, -86, -88, -126, 119, -62, -26, -103, 2, 25, -98, -9, -29, -110, 5, 27, -20, -24, 52, 74, 119, -120, -64, -21, -112, 60, 49, -77, 124, 101, 112, 88};
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
    msg.setTimeStamp(0.9439416621299956);
    msg.setSource(13469U);
    msg.setSourceEntity(182U);
    msg.setDestination(6633U);
    msg.setDestinationEntity(75U);
    msg.frameid = 121U;
    const char tmp_msg_0[] = {-124, 103, -99, 77, 39, -128, 124, 107, -77, -40, -109, 33, -80, 91, -69, -55, 110, -69, -128, 108, -57, -106, -7, -102, 35, 35, -73, -69, -95, -100, 87, 57, -43, 100, 29, -16, -20, 23, 105, 107, -2, 125, -36, 84, -41, 76, 55, 13, 8, -76, -70, -70, 62, -120, 18, 76, 13, -63, -18, 74, 104, -68, -49, -9, 39, -65, -128, 92, -36, 32, -107, -90, -105, 93, -49, -93, -80, 22, 0, 71, -45, -41, -51, -95, -33, 99, 41, 52, 98, 11, -27, 113, -11, 28, -113, 5, -58};
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
    msg.setTimeStamp(0.22671306561304638);
    msg.setSource(41310U);
    msg.setSourceEntity(24U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(205U);
    msg.fps = 150U;
    msg.quality = 89U;
    msg.reps = 85U;
    msg.tsize = 114U;

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
    msg.setTimeStamp(0.5417356932661223);
    msg.setSource(12783U);
    msg.setSourceEntity(41U);
    msg.setDestination(41961U);
    msg.setDestinationEntity(121U);
    msg.fps = 78U;
    msg.quality = 130U;
    msg.reps = 113U;
    msg.tsize = 192U;

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
    msg.setTimeStamp(0.21527604297284453);
    msg.setSource(60692U);
    msg.setSourceEntity(155U);
    msg.setDestination(54931U);
    msg.setDestinationEntity(43U);
    msg.fps = 176U;
    msg.quality = 217U;
    msg.reps = 168U;
    msg.tsize = 31U;

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
    msg.setTimeStamp(0.904250332407411);
    msg.setSource(37216U);
    msg.setSourceEntity(62U);
    msg.setDestination(24201U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.9281259646581225;
    msg.lon = 0.16077269139272377;
    msg.depth = 243U;
    msg.speed = 0.04821766203271016;
    msg.psi = 0.0116559791467018;

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
    msg.setTimeStamp(0.8323916515502162);
    msg.setSource(63608U);
    msg.setSourceEntity(126U);
    msg.setDestination(28651U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.1622163196362314;
    msg.lon = 0.3295892183067779;
    msg.depth = 224U;
    msg.speed = 0.6144918160577737;
    msg.psi = 0.6354507341324148;

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
    msg.setTimeStamp(0.7884838380542039);
    msg.setSource(58766U);
    msg.setSourceEntity(142U);
    msg.setDestination(53656U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.9532238341986696;
    msg.lon = 0.13021571219536088;
    msg.depth = 29U;
    msg.speed = 0.945910293202344;
    msg.psi = 0.3536336007300396;

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
    msg.setTimeStamp(0.2934648418448321);
    msg.setSource(19124U);
    msg.setSourceEntity(214U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(108U);
    msg.label.assign("SLAIMLEQGKSRGRRPBKBOUKAJDUUIHDTEFQFCUZMCIOIZFIBCDYCMLMIHWHZNZSWPRPJZXCNYUYTVWCOPRHXTTVLUZSBWBNQDIKMXNWVWQRLVCXSJMFQLQWXSDQQXUMEUBNOHGNKCIPHAYGKSFALJTOMGBEOBVVTPYRORLQQAHOTOSFJPFLAAPVREIYXJVSWKDXXENFYNCXDMGYZFJEDBNCJGGGUHZPJID");
    msg.lat = 0.8459782765155934;
    msg.lon = 0.24858595348517898;
    msg.z = 0.6560995624362098;
    msg.z_units = 51U;
    msg.cog = 0.6913327804004901;
    msg.sog = 0.3686515112099269;

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
    msg.setTimeStamp(0.9104705938618664);
    msg.setSource(45859U);
    msg.setSourceEntity(203U);
    msg.setDestination(9296U);
    msg.setDestinationEntity(93U);
    msg.label.assign("UMFHKFXNNRCWFUVRTGKMORJKJIGZSEQIFWLZUJLLDOVJEGRQMCPUBKDCEDXELCIGOLHAIJHTXVEYNXVOSBQJWHAPVBKOBHIDODUGHFMNAWNVDVWYYDWLTNYEUTWFQFWCCVTMBDLYQGZCCOJDZGHXSGZSHPQVJADU");
    msg.lat = 0.3594253615773455;
    msg.lon = 0.41577592826882825;
    msg.z = 0.5354193650155865;
    msg.z_units = 65U;
    msg.cog = 0.008977752340844969;
    msg.sog = 0.676367898593161;

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
    msg.setTimeStamp(0.35919957998878116);
    msg.setSource(28983U);
    msg.setSourceEntity(240U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(23U);
    msg.label.assign("JLKQGFURYCOHVZGFWNZUAFYSSWJQQZRMAGMXLWMLADSKQZLFYEPFAOQZTBXDRSMUSKOCTNYUJBOODQXNAVDPDUOYKCEBBMVSROIZCWWAYNIKEFXXXTIRMKTIIHBFTK");
    msg.lat = 0.8092296433709217;
    msg.lon = 0.7963152299173831;
    msg.z = 0.05136165081478794;
    msg.z_units = 15U;
    msg.cog = 0.8514492476567332;
    msg.sog = 0.990499901736275;

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
    msg.setTimeStamp(0.17300612794159453);
    msg.setSource(1912U);
    msg.setSourceEntity(247U);
    msg.setDestination(49002U);
    msg.setDestinationEntity(77U);
    msg.name.assign("GMHAYZIWFXJBRTLEGLLDFZHNTKWQJKMQLNPSUBVYUX");
    msg.value.assign("QTSGJKXSGKVIDLRKMUNXLORDC");

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
    msg.setTimeStamp(0.777319209032335);
    msg.setSource(57808U);
    msg.setSourceEntity(154U);
    msg.setDestination(54620U);
    msg.setDestinationEntity(27U);
    msg.name.assign("YYYNQYATVKOBFRLWUCFUPRGYKFSLNHVKWRSTAEIHZMIHRMBAKPVKXEBHVDKEZQEAGTXXOONMBDWGUWJSTEMEMDUTLDSJFZENNYQHIVCPKQXJTQCWXSOCBINRAFCVPLUKLCIBHGSYIBSZNVPPZZZUESWBTHDCPOWHGWADJMOLFGLWCQJDMOQTYSQDFGMXVANYROUZ");
    msg.value.assign("UKMKZLVNYHTDVIURRKTROZYLOBWKFYIJPUQCAMPCGVSHEBQHXROBJEEJNBYHRQPRFMZBFZVVXUBTTMNTHCSEYUIUVJDBBKWQLNUJMXIWCDORDGDECJCIVDVHCHSSANHVZAPHEXOAOORWQQQATMOXLAKMALFPWGLNGXPNJXSQTQPEBODGIGGAPIB");

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
    msg.setTimeStamp(0.8730029791600787);
    msg.setSource(793U);
    msg.setSourceEntity(254U);
    msg.setDestination(49322U);
    msg.setDestinationEntity(232U);
    msg.name.assign("YUWUFMUOHERDTLECXGPUIMWOLANTEZRYZLAFNUNBJAKCCGXQGRDZOZQFUROQDMAIZIGEJJRKZRPTXALRSXUVFNIWS");
    msg.value.assign("VOJPRNTKLPOQXILURCUFVFWIJQUAWNBCTHFSBPQOGSLQWPRJRUVKKXLSECSSCRHGYIJWWOAFUZTFQYBFYDTGBJYAOONMVQHXHIDKZVDMWKBEUSCKBYDCRGFNUXPBGCEGYVHPIEBADCMTELMAMZYRVMSTGYOJWPYFZEZWAZKFLDIAPXMXNUOSHQGQNJXAN");

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
    msg.setTimeStamp(0.5166566437404747);
    msg.setSource(42655U);
    msg.setSourceEntity(51U);
    msg.setDestination(27055U);
    msg.setDestinationEntity(223U);
    msg.name.assign("BRBDWRNJMWVLJWUAUZSHPLHBFYYKYEEEFHHNAENARTQDDFDVWMAUSMQGTAFIOPBAXPXDBIASWZSXAOLWZAKNKFCJHXQZVCOGSGURXXHJFBUZHCTTKNOSUIEXZCCYNOETMDVEY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LEWAKQURBAKZUVZEVNTTSBEYNPENXHTMWBVFRLSOAOMKBTJNVCPBYVXGYXNNLEULTQJFVOSZQKRJGOZVBMEMPCNCAGWYRHOZQHDHDFDHCHMBJDFHCGVMWKJDOQGRRMCIKYKDLIYIMTPDTIFISVF");
    tmp_msg_0.value.assign("MZOLKMUHXGRJIQDIKDHWLPAIJOVOFYDWEXOBPDQRYJMVAIUMAQZVRGMECWOWKWUYRXHLCMMFOKEWICUBGBZLYTZLTOMNTFCRCFNCBNLFWKBPDLQXBGNECXERXSEHQYQAMQYCPAZRVVLJVIBIKVADUSJKUBFPROUDAOSSLJY");
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
    msg.setTimeStamp(0.4322325692168931);
    msg.setSource(39217U);
    msg.setSourceEntity(192U);
    msg.setDestination(61730U);
    msg.setDestinationEntity(109U);
    msg.name.assign("XXMKIRKKAMWYCHVKVQISWLNHLFSKQNNXTLDIVOMOZFNTGXPMDVTBPFLDAHUMWRWUKQRCGXOY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MMJRJBDGLMUWHAITCMDGNWGYDPDFMCSKQJJLBKVULCDCPNSEOKZXUNZSSHWZNGAWUFXTKZRXQOCQXLSXRWYEJPHLNHAQMECEPAQJVIAHZIXFRBIXGATWVGZHYNZECEPBRZOLFONESDFOUFPSVDURUIIQJBZVBUBAKWYGCLLSPBCWJYZTIKAVGJYHMOAYDMUMFNTETOVSWHNIKGSNXRHERATQHFDXKBFQDGTOMKCFYJTOLYPB");
    tmp_msg_0.value.assign("VJRTUYHMOYUUAWXFUQIGSPIUOFPZNYERCVWQQFGBNGTYNSOOXDDMLTHKALAFBEYXNKXVCQMWJLVBEELHGJGFRLZXWCTSRBNJSFRPGSTQQPZFDCXMPVHEVWNKOKTLNXZWJIABVZUREDKEKLIOAAVMIFXJKXSDQHHMZEFDBIZFSJYABIZWNCNDDEWLRXKYGAGJCPURMCJCWAORKYBYLSPBMDPUWTAGKIRUMVZTPVIHSOQELDZH");
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
    msg.setTimeStamp(0.4598384429432256);
    msg.setSource(11591U);
    msg.setSourceEntity(27U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(171U);
    msg.name.assign("KGANPXJTUWVYDHZENYSGSQPFNIUEPYCHMFLBXDYPGMVOUPWOLZPTHKAVBFATCXRCOIUNAEDSXIWLJCWKZLGTJHKUJGYHLKUWFFQWSHCZMLDFRCOIZRFIKCHDYTVVBVWSOGNOYNPRKSIVROVEPDYPZXKFMZVTCLTAORYMHBQTGNGSQQOQNBIFXWUKB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZYIDTMQRMWNYSDTWGXRATEHDYIFSCXWEWBLTSBCCJPAPIMGGKLSURPVCBTQXTNUVQXSIXFMPZHRVOBUHSSLHHKKKBOIRUUXGQXPLVLVASGEYEZMFZITUKKCDHUCJPELJVGPWSFNBGLARKVNUUJXNZMKCQWDADGPYAMIDEOCMOWWOFLLJTZNOJAMPNYDOKCQJHHZJOUN");
    tmp_msg_0.value.assign("FOZCVAJNPVRJPJHXGMLGJSZQQEQSSCXZVTVBTRXJEHAYZMDCWIAHEHPJKEDXIWMCPUAXOAYZLUDNCYOJXSZMBXPNSGWZSCIFQ");
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
    msg.setTimeStamp(0.00674677730468054);
    msg.setSource(23856U);
    msg.setSourceEntity(100U);
    msg.setDestination(3508U);
    msg.setDestinationEntity(164U);
    msg.name.assign("HDLFAVLYVFXINQIMOSZLVQYTHXWEHTTCPUILGBLIBDKHFGYBEXVGRUTNJBYAGBHAZXYINQDUKCTCXYQUVGJQKKRBJWRKHDIUPEXMTNXPHYPVPFZJQIBZOBCOVWAURJEWTMOFTJPFSYLONDXFFWUMNWOHQLSGLMOEUAYVSSCMPECZUPHTUNFWGRXZIZNHPV");
    msg.visibility.assign("OPMDUSTPVFHGUVZUFGBUIPQQJZSWFIBHIDKPOFKJHGRXZDBGDMYZWAJRTXCGOAZUCNYUMDFOHQELIZGVNLNRCSMNJWRZBZTHLBJYPXAEEUMJRKSDPWSIZGPCHSSILDRWHKPYLNEKUETNEMAESJAHNRKFSXQLRMHFEVGCXQBPYKJDIMXMK");
    msg.scope.assign("NFGMYQWIGADIXKGIAZEMJSGBPRTVHCFMOJKMOFVHXQPTJRFBIYYUDUVQEUYMDWCSKGLDSHIGFIHGRDAEREUYBXOOVHRPGPRJYPYNVXCUEZCQOSMNPGQTNLAWVTU");

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
    msg.setTimeStamp(0.5156235367512626);
    msg.setSource(34829U);
    msg.setSourceEntity(103U);
    msg.setDestination(33274U);
    msg.setDestinationEntity(78U);
    msg.name.assign("IJNMKLKMITECDSUGBDDSHLSDMLZBTQLKNOOZFPLRUQPRIJOZJEXXAGRZBWUVDNPYDFWYZTFHEGVHGLEYVADDSTWRIFUBZVPXCLRQGNBKPMOYSKIURURPZWBKXFFVMHYTIKYOFJSRNUXNWOPNQMGQIAABLTSJJFHMAUULQVYTAESGOWCEGWGOVRDNAYCX");
    msg.visibility.assign("YIQLKCQNSSHMOEWLEMNFYDMTPGCTTWVXRVAFUCLSZXBOEYBPMHKZNRBWTFHNTWRQCTYJJAZXOVUPIRWQ");
    msg.scope.assign("ZUCMGKVTGGXHQYROYZKOHNCGANAPFNJWENDDQNRJJHFZRWDHDSRTHYBGIEGFMNGMXMYVOVVGVWGCKBCMHZOWKIPNZWDFNIOQFFSKVEXDIFLQUSREDBBPQICVWUHJJSLMARUXIPCBAJXTYAASVPTTYNEAEEOJBIUIOZHLLELYRQZPXVTXMBWJKXJYUESMSALUYCBURRKCLCUUPLFPKHWTVASJITQDZDOOSBXAQTNPGHQWBXDMQYKZCWSILL");

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
    msg.setTimeStamp(0.27823872477887324);
    msg.setSource(2592U);
    msg.setSourceEntity(184U);
    msg.setDestination(65511U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RBFONNUJFTMMMFEQRDFFHPNTBIYYTCOSPXLTKJZHB");
    msg.visibility.assign("SUREGVNPXPXCHMJKAPQDJGNTEBSYHAOUDFKFGPIGCEEJDGUTFXFCURKUSMMLYTHUQVZLZWWYTPNKVSWBEAD");
    msg.scope.assign("GVKDKFJJPFGXYDQEWSPCBKMNNMLWTZATYYSKECIRZVCAHYPJMRXXTJIVXMZRYUODBFUMNPXKQGRBLXREHNQTSQKPKBCHBIEKSUALLWGEXFRSTLATRGWZEOJVXJFSDPQWHMAFEYPHSCNNHQOZDVIEIGJIYCCXWVJRKQLZWBYGDQPVNZLVRTEKHBCZMFOZRLNGOOLCOFZOCXHHSSFUQMLYFMPUABMBTUOYABSJUUTIAWTI");

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
    msg.setTimeStamp(0.17984126628855468);
    msg.setSource(65528U);
    msg.setSourceEntity(164U);
    msg.setDestination(19006U);
    msg.setDestinationEntity(108U);
    msg.name.assign("IAZGYJBTBEPGRWOPYTDTBEGSSANMUCKTECZKVXLMSNOVVLFEXACDHHWYIQSFXTODAPODLLWSEIMQRRTKONDPADIFCVWPCNTJUYIZSAUFPCUIXTLGSJWPFACDGBAKCQUFZPAXWEOGXJKIFOMDRVPZLHJWKXBMLZXVHMUKOLQYXMZRYYJZKNLIVMJRUASTFERJUVHRHLQJDCQWOFSWGUXBJIQMYDKRNBNBNSIEYGZTM");

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
    msg.setTimeStamp(0.06343644942624249);
    msg.setSource(12722U);
    msg.setSourceEntity(206U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(102U);
    msg.name.assign("PUWXLKKQZAQUINQBLIGILMDOGVTEHYYMMETTHLNOVWTZWIPSOSECAMURAJOYHJLQWNGXYNBXWGPEWDSECVFOBRCPXXUHCFGMVIJROSUYRVICFYJAQFBNORQTYTSKOPHZNKQBTFDEZZZXLEUNHIBOOKNQFAWNBCIJIFSUCXLNEPEMYHLKRAHVZXSRGDKIVTBKAEPDCWMBTRAJSJGJFSDYVMGYADRPWUDFLLFJMDQUAZBJHRVQZCVX");

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
    msg.setTimeStamp(0.018336804934280693);
    msg.setSource(4227U);
    msg.setSourceEntity(66U);
    msg.setDestination(48776U);
    msg.setDestinationEntity(172U);
    msg.name.assign("AIOACEKQJYHXYGFWZRPTLDEJSBCKQ");

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
    msg.setTimeStamp(0.9466700249056769);
    msg.setSource(6110U);
    msg.setSourceEntity(48U);
    msg.setDestination(20749U);
    msg.setDestinationEntity(23U);
    msg.name.assign("ZPRNVUSDKVGHWOQPBLUDMOPSTKYUFQAPNZFSNJNDXNBUAAQSIHWOZMIZAMOKEYXHMRNEAHCXDCPUFINDZEUMBYXGFYRDVBYLDPREBHTKEBCAWYOTCGFMURKOXQFKGWAZSLDMCXMFCPUVLBMFRLHETBWUHDOGJWILRECNTAZJQQVPJESTJGXNVXWWJVSJLREIAIOZBA");

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
    msg.setTimeStamp(0.5151113805722404);
    msg.setSource(26955U);
    msg.setSourceEntity(241U);
    msg.setDestination(36115U);
    msg.setDestinationEntity(44U);
    msg.name.assign("YBKUXIGJZWFQUBOOVFLUVWAPMPAUF");

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
    msg.setTimeStamp(0.6542802409006981);
    msg.setSource(28447U);
    msg.setSourceEntity(38U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(168U);
    msg.name.assign("VZFRGMXHRMBVLBVJEEJHXBLHQZOCQSJNKPFJPQTGWREXUYZZKEELFPFPPRUYVGBIKEHHAQJPFJLSOJTKWCSYGHIXYFMFFYJZPALNKBLHNHWEYKQQUOXJZVAFKFOWUDCSQGVCMMHVANUQDPSGWRAIQMONLMBIRTXKBLOEIUPCZBTVPTLCI");

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
    msg.setTimeStamp(0.9288053588469689);
    msg.setSource(34069U);
    msg.setSourceEntity(218U);
    msg.setDestination(52162U);
    msg.setDestinationEntity(72U);
    msg.timeout = 388178374U;

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
    msg.setTimeStamp(0.46475078341262077);
    msg.setSource(48616U);
    msg.setSourceEntity(169U);
    msg.setDestination(22559U);
    msg.setDestinationEntity(78U);
    msg.timeout = 604857657U;

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
    msg.setTimeStamp(0.7358188346749474);
    msg.setSource(62021U);
    msg.setSourceEntity(136U);
    msg.setDestination(39673U);
    msg.setDestinationEntity(125U);
    msg.timeout = 3564526819U;

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
    msg.setTimeStamp(0.24610259147531643);
    msg.setSource(3492U);
    msg.setSourceEntity(106U);
    msg.setDestination(63776U);
    msg.setDestinationEntity(188U);
    msg.sessid = 2339181746U;

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
    msg.setTimeStamp(0.3541172502676141);
    msg.setSource(5380U);
    msg.setSourceEntity(57U);
    msg.setDestination(41490U);
    msg.setDestinationEntity(6U);
    msg.sessid = 1625024874U;

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
    msg.setTimeStamp(0.767051004973818);
    msg.setSource(18516U);
    msg.setSourceEntity(136U);
    msg.setDestination(2202U);
    msg.setDestinationEntity(136U);
    msg.sessid = 4292221427U;

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
    msg.setTimeStamp(0.48620765620914896);
    msg.setSource(10229U);
    msg.setSourceEntity(192U);
    msg.setDestination(29222U);
    msg.setDestinationEntity(140U);
    msg.sessid = 2035947152U;
    msg.messages.assign("EVNFHFIWXSBUMGXBBUTFADAEJTNSRJBNXDTKZFJGGAXOXAPYYIOHWLJSSFCPUKUSOKQRUPMKNSYNJPNOQQEWLHQAZFIHAOPWKTIKGCXVQDGWYTUQOMLGRWWPKCMEMDVPZMWWFIGCHU");

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
    msg.setTimeStamp(0.530851812127087);
    msg.setSource(25633U);
    msg.setSourceEntity(227U);
    msg.setDestination(24672U);
    msg.setDestinationEntity(148U);
    msg.sessid = 3506690286U;
    msg.messages.assign("QPOQJLNWSFDJKELLZGBXHEZXJXEXTXTTALCNRLUYJKUOMJNQDWDBGAPRMZAUERIPLTSRTCPHUHGCGDJVUWMYJDZTBQBREQOXADCSEIXAZKZIIZRQIREGVZQUIBOGXMKOLFYSWPBHBANWICWIPVUHVNNNSWJUMCQPMJYMF");

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
    msg.setTimeStamp(0.18277263946900113);
    msg.setSource(33026U);
    msg.setSourceEntity(247U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(16U);
    msg.sessid = 2344969692U;
    msg.messages.assign("BWURIDKCUBYJOCM");

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
    msg.setTimeStamp(0.19491508589865814);
    msg.setSource(39738U);
    msg.setSourceEntity(208U);
    msg.setDestination(63110U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3384235611U;

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
    msg.setTimeStamp(0.8245046060892234);
    msg.setSource(8395U);
    msg.setSourceEntity(205U);
    msg.setDestination(6651U);
    msg.setDestinationEntity(182U);
    msg.sessid = 4292353220U;

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
    msg.setTimeStamp(0.4613351912310242);
    msg.setSource(6238U);
    msg.setSourceEntity(67U);
    msg.setDestination(50983U);
    msg.setDestinationEntity(163U);
    msg.sessid = 825347204U;

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
    msg.setTimeStamp(0.9793246981139889);
    msg.setSource(51436U);
    msg.setSourceEntity(21U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(26U);
    msg.sessid = 3152007711U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.922559871827665);
    msg.setSource(2685U);
    msg.setSourceEntity(36U);
    msg.setDestination(36977U);
    msg.setDestinationEntity(92U);
    msg.sessid = 1706668339U;
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
    msg.setTimeStamp(0.2179528848516502);
    msg.setSource(2933U);
    msg.setSourceEntity(180U);
    msg.setDestination(52900U);
    msg.setDestinationEntity(162U);
    msg.sessid = 1634379379U;
    msg.status = 148U;

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
    msg.setTimeStamp(0.4406437645454905);
    msg.setSource(30310U);
    msg.setSourceEntity(182U);
    msg.setDestination(50402U);
    msg.setDestinationEntity(207U);
    msg.name.assign("QSLTHBOJBJZNREBIESAMACCJTKJVIZRWNBQKWAEUBUZDCORVFPYSEPWNSHXASJRRTSFTDBPXOTLHFUUYVKXDIPJVIGJISXUQ");

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
    msg.setTimeStamp(0.03131173983846858);
    msg.setSource(3851U);
    msg.setSourceEntity(38U);
    msg.setDestination(14543U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ZOYJPBZTBSVLNRVUKPXASZDJBVKSBXNWGMMUNNQQTCADXDBWYZCTSBNPCZMRQIZHUXQFUZTTJAVUAYJFARHHFQVJLXLGOVFUTYERSCCIOCFKJKZYHWOKCSYQKWBAEIIFKGQHEC");

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
    msg.setTimeStamp(0.26581373549287735);
    msg.setSource(57736U);
    msg.setSourceEntity(228U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(2U);
    msg.name.assign("AEQFBBCQTPHLJDTOFFRLXBOARRVAIRIQSGZBAUUHXOPRULTKEMZEGJONGVEXQVGYRLTVDKOYDDTBBESJXYBGWLNCLDMMOKQXHDMULSSIRHNYERCIYTYEFJZKWCKCUMSGXGZJPOUKQVSVWFHINVUBOCANIZGPQIXPFZXHQSWFJKNVSLCCYMDAFPSRTDBSWYOQKBWTNIMKFAYECQZGDOK");

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
    msg.setTimeStamp(0.2575177529083983);
    msg.setSource(21008U);
    msg.setSourceEntity(223U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(221U);
    msg.name.assign("BCUPTFZQTJBORDXYTKMLTVJTLIOFSBDHSEYHLIBHZGJMNIOPEIXOSJXEWEOVUKTOZZZVMIWASAWYJIQUJCDAFCAKWNYFLNKHBXASGCYWPEESGKMIFGIMSHQPQWZKJNPRPROVWGXPYCVKYLYHMBDCEEELERNYCGNHFUWRYUJVR");

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
    msg.setTimeStamp(0.3835992774145872);
    msg.setSource(30014U);
    msg.setSourceEntity(29U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(11U);
    msg.name.assign("WVBSSOELBKHLQOFOVAZHLQSGMCAHLTNUPHLJOGUDSVYFKAZLUCDJQWJKOPVNIFBMEXFZRIQVCWEPPUKGZBLMHAWWFEQYHTGMUGGCRJZQPFMSAWMDZTHPENXIGDEYRBMXOGFBVEPKDTPNURXPYKIXKDNAMAHQRTHMAVNLEEPBQWZWKOTJCVTXSBVKICJDTATDSIIWOJCEXYRQJAYUNBDRFGXLYCODFFRXMWXSNUYYLZBYTJSZZQNSKOGVR");

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
    msg.setTimeStamp(0.36607666987107923);
    msg.setSource(16902U);
    msg.setSourceEntity(170U);
    msg.setDestination(3990U);
    msg.setDestinationEntity(3U);
    msg.name.assign("GVKJMFAZXPKSUIILFTXLDPNWLUDJHNAWDQRZGFJCKIHZUXPCHNSFUNVPYCHNOKYAYRMPFMSWILRRQPITHRVCJYCKBWAHESKNXDYNFAQQWWWXDGSSQZGKOBTGEMYJDSTFTZUUGWWZNOJIQBXREXYHMMQCELVPZAWBBPTTQFKRVRLOMUDCTDBTOZGGCHQVMXAMTXAVHYBUESGPJAZEFIEASKJ");

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
    msg.setTimeStamp(0.12716098796048736);
    msg.setSource(39286U);
    msg.setSourceEntity(228U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(145U);
    msg.type = 231U;
    msg.error.assign("HUDGTKFBBEHCJNNXOVEUBGRPGRZEXFZNRYIO");

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
    msg.setTimeStamp(0.3275779513933085);
    msg.setSource(7462U);
    msg.setSourceEntity(237U);
    msg.setDestination(15340U);
    msg.setDestinationEntity(183U);
    msg.type = 74U;
    msg.error.assign("LNMZJCANIZKCJBGHHYLATGKMRGLBYKFPOJYERMHVJDBRIPJSSQTKYHFVRAZECSXCCDWVHWQZREELUVDITDWXHMMSLYGPCLYOWISQDNX");

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
    msg.setTimeStamp(0.3702162054704379);
    msg.setSource(64705U);
    msg.setSourceEntity(213U);
    msg.setDestination(57518U);
    msg.setDestinationEntity(172U);
    msg.type = 203U;
    msg.error.assign("AXLNLDIPSRNZJTTLVCMSRFGUEKMBDIUTJPNHMMBACVREGAWQOHZIGSYYZEFCZMWICUTEHBCXNVLTCJUIADBXWVYPOYBBPWIQBMQNUJLEJYTPEGTEYDZAUXAFVUJRMQYKNDPSQCIKPUGGDFDEDJLCXRYUKAFQKSGXVRTSVRYVMKVPOJHEHOWZWYXJZSBKNWXGZODIQOHKXASGFZMKIPELVLTHQSBABRORSAHOZWFC");

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
    msg.setTimeStamp(0.11111513667095962);
    msg.setSource(2125U);
    msg.setSourceEntity(213U);
    msg.setDestination(44935U);
    msg.setDestinationEntity(136U);
    msg.seq = 16202U;
    msg.sys_dst.assign("UWODNEVMGOKKSLODITHNYELGHZMUNACDUHWBWSMXKCBDAZRPYJOJENQFJCEWLUYRCRCGOOLOEFVQLVHECTCWVRAQXGJIQWNKMKYSTKBVHIIFMTBXQMQNBAYGQSDOZLMESCQBDXEQPJFXDALOWHZTBVGYFAIXEZHTALKOZTHKZBRGLAFPBRUJPCJQTPBYVAFGSFMGVHRMVKYIRWSJJUXUFZXGEPLCNUHDAKIWTUXRPPDRWJZSYPSMTZIXNSI");
    msg.flags = 6U;
    const char tmp_msg_0[] = {89, -115, 21, 41, 90, 113, 21, -115, -36, -84, 115, 72, -27, 10, 74, -41, -2, -59, -43, -106, 76, 30, 12, 54, -41, 113, -57, -74, 36, -32, -90, 98, -100, -3, -26, -32, 7, 69, -101, -108, 61, 119, -99, -10, -106, -96, 50, -82, -87, -93, 116, -114, -52, 106, 109, 9, 68, 33, -114, -125, -75, -93, 118, 15, 11, 72, 56, 102, -89, -5, 11, -95, -23, 65, -76, 7, -2, -106, -82, 90, 118, 75, -47, -5, -86, 25, -10, -55, -119, -114, 31, -79, -11, -27, -56, -32, -60, 15, 53, -122, -28, -116, -82, -122, 90, 46, 99, 101, -57, -71, -53, -82, 18, -52, -16, -98, -15, 31, -54, 57, -48, -22, 69, -42, -37, 62, 106, -123, -41, -9, 113, -10, 74, -72, -89, 42, -58, -83, -108, 30, -88, 83, -95, -113, -62, 51, -97, -123, -113, 40, 121, -57, -13, -31, -120, -82, -31, 80, 107, 91, 48, 97, -36, -68, -2, 19, 77, -25, 100, 123, 82, 123, 120, 67, -40, -63, -24, 3, -121, 107, 125, 101, 32, 22, -32, -90, 57, 123, 80, -40, 54, -17, 89, 23, 19, 45, 74, 119, 74, -8};
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
    msg.setTimeStamp(0.9805822519987502);
    msg.setSource(36815U);
    msg.setSourceEntity(85U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(107U);
    msg.seq = 37262U;
    msg.sys_dst.assign("LIRVRUNXLANZFDVRAZTPDONRQGAXSYZTAEQEVLIOYIGSNZQMPDYZQKMSHWLAGSBGSQJKBWCANJMEQSLXMJKPOQEWPIKEJNUKOCBIDYHCREXIQWWYDQTYSMLJGLYBBMBDNHRVBWZOBGTKHYSNFTMSLRKRNDKZCCMEXPHJXOGCIUOUY");
    msg.flags = 31U;
    const char tmp_msg_0[] = {4, -95, 61, -88, -89, -39, 30, 65, -112, 92, 97, 50, 39, -96, 58, 49, -54, -84, -18, 1, -102, -66, -105, -54, 34, -10, 79, 20, 38, -90, 97, 19, -88, 104, 92, 47, 56, -111, -41, -73, 68, -89, 20, 89, -49, -57, -108, -4, -43, -71, -102, -24, 92, 80, 22, 26, 22, 6, 101, -128, 110, 39, -112, 67, -113, 13, 115, -119, -124, 66, 22, 41, 13, 97, -98, -10, 116, -60, 94, -56, 54, -128, 116, 54, 85, -123, -83, 5, 94, -57, -121, 90, -127, -43, 36, -4, -69, -15, 49, 56, -52, 67, -49, -60, 58, 108, 90, 57, -51, 11, -119, 6, -123, -83, -115, 104, 89, -119, 25, -21, 126, 116, 37, -40, -40, -105, 25, 81, 98, 93, 56, -79, 11, 2, 50, 59, 9, -91, 55, -89, 93, -83, 34, 100, 28, -102, 69, -105, 61, -98, -114, -13, 42, -7, 109, 122, -21, 58, 89, 77, 107, 5, 13, 20, -127, -27, 0, -20, 111, 117, -128, -39, -60, -50, 71, 22, -128};
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
    msg.setTimeStamp(0.5411299079790085);
    msg.setSource(18103U);
    msg.setSourceEntity(91U);
    msg.setDestination(44730U);
    msg.setDestinationEntity(115U);
    msg.seq = 53651U;
    msg.sys_dst.assign("HJKEPYPFWIHJVAKECJXZSBDXRSWULVABWHXIPBYKHPSXNVPGUDHLJIDWINGZMZWUKUNBDRUPAHJHOQYVGTTZNQOEAMCXEDWLCUNRSFKDVVCZFMRDIRWOFLKXFOXATEIAMOLKQGMTFTUQBYTBOZLYMAPYNPACFIPQAISQMQMFNRHUVCZNQAIRTMBKSIXHTJWJYYOZTDFYSUXCRVYCZGGBXRWECMNEJEKNEGLDEVGS");
    msg.flags = 100U;
    const char tmp_msg_0[] = {74, -31, 57, 20, -103, -108, -119, -76, 126, -38, 66, 17, 40, 34, 9, 47, -123, -92, 46, 4, 65, -60, 83, 99, -30, -71, -82, 53, 94, -78, 15, -67, -112, 82, 7, 39, 47, 123, -116, -34, -22, -17, -22, -101, -49, -90, 75, -111, 78, 72, 47, -88, 36, -6, -39, 14, 119, 36, -88, 50, 11, 17, 96, 15, 114, -78, 62, 71, -53, 119, -124, 58, 85, -117, 120, 120, -24, 46, -97, 112, 98};
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
    msg.setTimeStamp(0.0492058786622146);
    msg.setSource(62940U);
    msg.setSourceEntity(164U);
    msg.setDestination(40749U);
    msg.setDestinationEntity(127U);
    msg.sys_src.assign("VELLLOJFHJSWYTUGUJQCTDTKCVKLHSPWBTZRQWABEPZPOUEDHRXXDJPRQDAZBSYNCNCCQOYIUNBWIMCDYOFPVVOSTRADKEKTQKBAFCMFPORJUKODXUIFYJXBPBFHGNEGSATXZFWYFQIMUSONNQXAJCMJEWPVYMPLGILOHEBMKZQPKMUBFITXVLHRHJZVOSIKNRMINZQWIA");
    msg.sys_dst.assign("XAOHMCUNKYMUZVTWHWLGKAYKJZSHCPKUUIEYRFMNDAU");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-110, -115, 20, -119, -5, 81, -90, -5, 50, 98, -119, -30, 1, 65, -76, -72, -66, 7, 95, 124, 30, 126, 70, -82, 48, -126, 72, -40, 103, -52, 65, -81, -89, 16, 104, -64, 32, -16, 54, -63, -44, -48, -8, 48, 107, 10, -47, 76, 5, -101, 9, -125, -120, -97, 73, 23, 51, -42, -113, 61, 67};
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
    msg.setTimeStamp(0.006466988723086264);
    msg.setSource(1968U);
    msg.setSourceEntity(209U);
    msg.setDestination(19190U);
    msg.setDestinationEntity(127U);
    msg.sys_src.assign("OMWGPQNPOCHITZQCFRNCILAEQPZZDTQCVOVGNNLQESNVMXPBFOLDTULYGRVQNDKRMKCZZGPBUXLBXMVCMUEHIKHQHJIYWVCXZAFBEF");
    msg.sys_dst.assign("AZRSHGEVQBNUUXLEGMJMWQAXFVUTCWBDLMQTCJPXHLIUVSAIYWYRPBDEXNJQWQETNDXMPHFRSYRYKHPYXWMKVNMWUWDLOLTAAOFQMDCKHONINJDOPJLVXSFFQSXVGPCWCKDOMZRUHBBBLGEOJ");
    msg.flags = 160U;
    const char tmp_msg_0[] = {-82, -8, 117, -62, 121, -54, -116, 88, 81, -17, -53, -53, -78, -42, -76, -83, -42, -10, 99, -40, -97, -20, 112, 111, -118, 28, -82, -73, 73, 29, -4, -66, 20, -118, -110, -101, 3, -60, 47, -26, 15, 75, -119, 68, -25, 65, -125, 84, -100, -94, 94, -8, 122, -40, -49, 15, -106, -104, -27, -81, -126, -34, -13, -16, -69, -27, 17, -10, 72, -8, -28, 13, -93, -27, -68, -35, 66, -62, -19, 107, -82, -56, -56, 12, -108, -56, 43, -51, -126, 62, 30, 76, 39, 102, 120, 106, 119, -69, 83, 63, 48, 46, 29, -114, -76, -77, 16, -5, 46, 27, 43, 47, 41, 86, -123, 79, 77, 1, -74, -63, 105, -33, 106, 84, 96, -103, 14, -128, -15, 75, -100, 58, -40, 31, -43, 52, 35, -42, -13, 31, -45, 108, 49, -88, 72, 43, 97, 45, 9, -27, -30, 8, -95, 83, -80, -104, -32, 59, 69, 78, 60, 74, -105, -57, -66, -110, 34, -39, -14, -82, -44, 62, -3, -89, 4, 28, -106, -25, 31, 95, 29, -86, 17, 23, 18, -82, 120, -90, 37, -33, -83, 8, 5, 0, -6, -92, -70, 65, -127, 119, -107, 47, 56, 117, 63, -54, 49, -60, 103, -119, -39, -121, 35, -51, 82, 11, 120, -79, 14, -65, -83, -20, -69, 113, 56, -104, -74, 90, -20, 96, 66, 34, 39, 73, 71, 50, -102, -62, -93, 123, -59, 18, -39, -44};
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
    msg.setTimeStamp(0.39774064401780274);
    msg.setSource(40641U);
    msg.setSourceEntity(2U);
    msg.setDestination(37965U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("XIZEORFSLYPYIYTUBUORKTLBHYWAJYOHUFQPGTEAGCBWNPMQKZGCVYHMAMLQWTLSXTBYGDQIRWFLUIKDMWPDPFAEKHPZOWHXNKCIPOLBUOWNEVLNMEKMYEWNZGQJBHJJCMOWIHXOAXTPQJGNAJQUQSUQBOSGDFMVKGKMQJCXDDFSNOJXSLFDFCNIVDKSUTSZAHXSJTVWEYZBSGGRJCXAXLIRVKTM");
    msg.sys_dst.assign("PYZIMPUKUKEJBXCNACEPQCHTVLRKWDZCESSNHXWWFOIZTOMVDACUQONGDYJNZHONXJUARENYQNVSDODGHIRGFWHGDTEZTIQMMXXTIISWPIKWRRIWBOAULOBR");
    msg.flags = 171U;
    const char tmp_msg_0[] = {-76, -56, 26, -15, -82, 98, 101, -90, 33, -99, 74, -55, -89, 92, -76, -72, -111, -64, -27, -127, -127, 124, 112, 56, -12, 26, -92, -96, 119, 1, -39, -28, -34, -44, -34, 37, -50, 116, 39, 39, -92, -1, -45, -20, -77, -44, 111, -68, -116, -7, -54, -110, 103, 7, -123, 26, -127, -90, -117, 35, 85, 17, 95, 27, 122, 86, -46, 70, -25, 124, 57, 103, -34, -113, -14, 62, -117, 28, -23, -125, 38, -106, -45, 30, -37, 67, 56, 4, -17, -62, -83, 106, -36, -109, -50, -2, -93, 54, 121, 12, 34, 15, 112, -32, 16, 102, -67, -104, -44, 82, 22, -7, -48, 123, -90, -126, 123, -105, 64, 76, 0, 46, 91, -50, 8, -52, 72, -120, 93, -6, -81, 89, 13, 110, 52, -17, 38, 71, 21, 51, 114, -32, 117, 25};
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
    msg.setTimeStamp(0.14699269829751405);
    msg.setSource(28951U);
    msg.setSourceEntity(108U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(247U);
    msg.seq = 26939U;
    msg.value = 31U;
    msg.error.assign("IUFIQFSYGZLUYJPVJYFUWLHTVSTTRMSRPLJQRWKRUBPXOMHDHIFWBZIBKKWQLDTFXLSXJAVORQNTPCOVBXNSLTPIIWPXXMJLACGDNZOSWKIUWHSTFRDXARJNKXZYGNVZSKDCVHCCKANHEVYGYBWJVOYUVTPYAEJCEUGQFGZUVFKMDMGODBUYBOLXSOUAMQIWGHZMEAEENRANXFQKRDPEHTBMZQEAZLGIEGN");

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
    msg.setTimeStamp(0.9977259519651641);
    msg.setSource(65297U);
    msg.setSourceEntity(236U);
    msg.setDestination(31559U);
    msg.setDestinationEntity(86U);
    msg.seq = 56789U;
    msg.value = 97U;
    msg.error.assign("VWALJQZZAHLDABTCMNAPKOWTFUCJBVSHWUXPDDLGABZMRJBZSCUZEUSICVTAPRIHHMHCTRDOABNESMNEYKHRNAFXSUPKMRNJPOENSSJPDLNEGHXXDJMTOWKRIGVNSQIPYBZWMIQZQLZHOPGXVLQEGLIVRLJFJOCCMQWKDBIKVUTHGGKOFXUFW");

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
    msg.setTimeStamp(0.012504609811166745);
    msg.setSource(46031U);
    msg.setSourceEntity(206U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(202U);
    msg.seq = 62568U;
    msg.value = 152U;
    msg.error.assign("IAOAWIJMVGURTCCYJXDHZ");

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
    msg.setTimeStamp(0.9468726009715598);
    msg.setSource(60799U);
    msg.setSourceEntity(37U);
    msg.setDestination(52171U);
    msg.setDestinationEntity(189U);
    msg.seq = 22609U;
    msg.sys.assign("PZUGEDBWZIKMGRQVWOPGEXUHNAHFRZUSQSCJAHGYBTNKVTBKDQOGTMKUQBQYYAJDVAEMDWQMXEXIAZBMCESCCMXXYNMXVJJHXABRGTJUJKHRSSVLKCSVNOALRTRLSYSUXIUVZFWEULILJWJDPIOLP");
    msg.value = 0.8612270296817796;

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
    msg.setTimeStamp(0.8936140248234906);
    msg.setSource(6528U);
    msg.setSourceEntity(27U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(246U);
    msg.seq = 31154U;
    msg.sys.assign("PMXHAVRMJCEAFUDJKDXKASEPHUOQRKFGXXESHJSCPHGOQMTJXYEFNWOAMTLOWOYYXSKJVGTBNLTHIERIINVSFTFWCMIKMBCYNJDZFPLNDAMTBUHLHVLHX");
    msg.value = 0.7171235577466668;

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
    msg.setTimeStamp(0.49775909038828436);
    msg.setSource(52195U);
    msg.setSourceEntity(190U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(179U);
    msg.seq = 1501U;
    msg.sys.assign("QQUPRKDVLOZZHMCLRKUXBFACPVSLXVFGPRWHRQYMIFZIDGWWJTW");
    msg.value = 0.9281884781743424;

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
    msg.setTimeStamp(0.06918153965779672);
    msg.setSource(48995U);
    msg.setSourceEntity(39U);
    msg.setDestination(35566U);
    msg.setDestinationEntity(248U);
    msg.action = 121U;
    msg.longain = 0.58843521350455;
    msg.latgain = 0.9320573742859772;
    msg.bondthick = 3282750688U;
    msg.leadgain = 0.04663469812174781;
    msg.deconflgain = 0.44883653441309646;

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
    msg.setTimeStamp(0.5046037172616062);
    msg.setSource(25235U);
    msg.setSourceEntity(118U);
    msg.setDestination(41479U);
    msg.setDestinationEntity(108U);
    msg.action = 250U;
    msg.longain = 0.5133633818726006;
    msg.latgain = 0.39059413408076615;
    msg.bondthick = 82784101U;
    msg.leadgain = 0.7159472878852554;
    msg.deconflgain = 0.8437754945633058;

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
    msg.setTimeStamp(0.9612177221204379);
    msg.setSource(25833U);
    msg.setSourceEntity(75U);
    msg.setDestination(40249U);
    msg.setDestinationEntity(112U);
    msg.action = 161U;
    msg.longain = 0.9995497286281397;
    msg.latgain = 0.8969625247881216;
    msg.bondthick = 384045791U;
    msg.leadgain = 0.055410241987205566;
    msg.deconflgain = 0.972235870706836;

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
    msg.setTimeStamp(0.4843589776838694);
    msg.setSource(14656U);
    msg.setSourceEntity(232U);
    msg.setDestination(37042U);
    msg.setDestinationEntity(246U);
    msg.err_mean = 0.9314756096063072;
    msg.dist_min_abs = 0.5156692763397235;
    msg.dist_min_mean = 0.3000370657448297;

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
    msg.setTimeStamp(0.4439784249799421);
    msg.setSource(40627U);
    msg.setSourceEntity(45U);
    msg.setDestination(55491U);
    msg.setDestinationEntity(22U);
    msg.err_mean = 0.3868113256462029;
    msg.dist_min_abs = 0.45825272116541216;
    msg.dist_min_mean = 0.400799015394096;

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
    msg.setTimeStamp(0.5350468892213048);
    msg.setSource(32987U);
    msg.setSourceEntity(243U);
    msg.setDestination(65529U);
    msg.setDestinationEntity(206U);
    msg.err_mean = 0.7025454169904652;
    msg.dist_min_abs = 0.9770680727172416;
    msg.dist_min_mean = 0.11601648628445371;

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
    msg.setTimeStamp(0.6132081655263049);
    msg.setSource(63486U);
    msg.setSourceEntity(112U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(201U);
    msg.uid = 6U;
    msg.frag_number = 252U;
    msg.num_frags = 80U;
    const char tmp_msg_0[] = {96, 7, -60, -69, -94, 10, 92, 94, 53, 91, 86, -12, 23, -78, -93, 53, 34, -84, -60, -10, 58, -79, -60, 11, 71, -9, -48, -3, -113, 37, 30, 23, 18, -111, -49, 29, -118, 2, 66, -74, 69, -42, -79, 109, 42, -81, -63, -74, 30, -111, -3, 43, 100, -7, -16, 60, 86, -102, 21, 87, -108, -87, -42, -90, 21, 94, 109, 4, 126, 11, -25, 71, -119, 113, 101, 122, -47, -2, -97, 56, -34, 96, -62, -20, -6, -86, -9, -21, -61, 95, -54, -35, 76, -106, 92, 9, -28, -75, -65, -11, -72, -20, -91, 8, 89, -26, 101, -123, 114, 117, -5, -12, -46, -1, 27, -126, -84, 17, 7, 113, -38, -83, 46, 98, 46, 34, 11, -88, -94, -6, -127, -55, 120, 122, 69, 101, -126, 99, -71, 73, -121, 70, -9, -97, 2, 38, 14, 18, 30, -88, 95, -105, -24, -85, -6, 63, 115, 106, 6, -73, 121, -53, -101, 37, -95, 38, 90, 111, -86, -36, 95, 31, -124, -10, 56, 13, -80, -91, 39, 108, 41, -46, 73, -41, -122, -102, -117, -9, -42, 114, 39, 4, 88, -48, -45, -106, 21, -10, 46, 64, -18, 57, 56, -54, -8, -52, -121, 33, -88, 104, -40, 84, -57, -88, 96, 20, 94, 55, -17, -120, 77, -62, -46, 45, -75, -52, 4, -34, 105, -103, -120, 62, 101, 109, -8, -55, -115, 17, -69, 63, -118, 94, 69, -25, -22, 38};
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
    msg.setTimeStamp(0.1827008007602584);
    msg.setSource(13677U);
    msg.setSourceEntity(122U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(93U);
    msg.uid = 78U;
    msg.frag_number = 231U;
    msg.num_frags = 155U;
    const char tmp_msg_0[] = {-97, 89, 68, 30, 31, 84, -65, -13, -73, 91, -68, 69, 57, -63, -9, 57, -80, -30, -75, -39, -99, 6, 19, -97, 113, -71, 96};
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
    msg.setTimeStamp(0.6093349021382242);
    msg.setSource(14522U);
    msg.setSourceEntity(204U);
    msg.setDestination(23636U);
    msg.setDestinationEntity(251U);
    msg.uid = 133U;
    msg.frag_number = 206U;
    msg.num_frags = 225U;
    const char tmp_msg_0[] = {48, -100, -40, 21, -67, 39, -54, 49, -39, -42, -70, -48, -123, -36, 105, 86, 43, 76, -106, 55, 94, -88, -95, -56, 106, -113, 110, 61, -123, -83, -105, -102, -56, -58, 65, 43, 112, -4, -89, 4, 49, -96, 13, 109, -65, 109, -62, -88, 124, 7, -79, -78, 74, -2, 0, 45, -93, 101, 43, -110, 101, -42, -117, -57, 49, -24, -33, 100, 122, -87, 118, 68, 65, -113, -103, -78, 88, -54, -16, -73, -27, -28, 14, 36, -80, -84, 63, -127, 107, -23, -120, 30, 126, 42, -123, 115, -113, -93, 66, -86, -44, 54, 51, -24, 42, -59, 37, 121, 108, -106, 123, -9, 76, -69, 14, -36, 82, -30, 86, -10, 54, 13, 98, 91, 87, 5, 64, -71, -13, -16, 86, 91, 58, 89, -42, 122, 109, -98, -32, -32, -49, -62, 1, 101, -66, 58, -73, -76, -46, 85, 27, -4, -75, 28, -10, 78, 83, -85, -108, -120, 120, 57, 44, -120, 115, 108, 1, 10, 26, -21, -72, -115, -97, -120, 50, 94, 70, -1, 119, 65, 76, 25, -24, -99, -45, 104};
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
    msg.setTimeStamp(0.31575912614155177);
    msg.setSource(29899U);
    msg.setSourceEntity(190U);
    msg.setDestination(8463U);
    msg.setDestinationEntity(80U);
    msg.content_type.assign("HSSYKUPZNNAOPIZBXWEGAZUPMDRAHMGVWKJQDXVOSNAKEWKGPTLELOZGYDSITNDSLOCAJRLIJZTTBTYVFFJMEEFAPDHOHCBZGQHQALTAMWPDOOZCNRVBRWUFQRUQGOMYZJGNUWBKURQXYKUQWCGZSPBHQTLUGFDPSYXNBTTDCHBLUISFEQXKHXEVMWMISMWJJCXYENCASKVFDIRZQTCLLJBI");
    const char tmp_msg_0[] = {-42, -18, 33, -54, 5, 22, 19, 106, -81, 122, 32, 35, -51, -80, 63, -77, 89, 81, 21, 59, -102, 120, -122, 91, -58, -88, 83, 48, -8, 114, 62, -9, 116, -50, 44, -81, -59, -48, -23, -90, -18, 41, 123, 85, -128, -10, -24, -72, -127, 82, 83, -124, 30, -120, 88, 68, -118, 62, 69, -9, -71, 93, 93, -107, -106, 101, 42, 57, 7, -55, -71, -85, -110, 19, 56, -78, 89, -110, -85, -63, -28, -104, 4, 39, 2, 68, -5, -113, 126, 121, -115, -5, 93, 87, 0, -52, 93, 119, 123, -38, -109, 122, 18, 30, -78, -26, -67, 54, -85, -83, 38, -52, 91, -91, 65, 22, -52, 74, -80, -30, 95, -83, 69, -86, -116, -113, -48, 120, 83, -82, 3, -26, -103, 80, 74, 48, 62, 97, -117, -86, 82, -10, -56, 121, 3, -30, 64, 101, 103, 124, -4, -50, 41, 94, 92, -113, -121, -11, -20, -86, -111, -3, -5, -86, -15, -18, 26, -32, 105, 100, 37, 32, -63, -41, -100, -111, -31, -112, -72, -85, -34, -6, 105, 124, 5, 107, -79, 0, -64, -107, 67, -3, 67, 62, 83, 13, 19, 96, -119, -113, 75, 116, 14, 80, 49, 100, -79, -34, 56, 60, -4, 76, 31, -48, 40, -37, 62, 110, -85, -77, -120, 2, -114, 17, 118, 115, -46, -24, 113, -21, 33, -88, 117, -54, 112};
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
    msg.setTimeStamp(0.8906274797206127);
    msg.setSource(51665U);
    msg.setSourceEntity(94U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(137U);
    msg.content_type.assign("JZZDACXPGRZYGLYSFRCCNLIVUIMAVEERQOTJDNOBNEHVOBHHNALGHLDPGPXBPROKSOMTKVAYUHWFQMHNNDBQUXYVWLMGUTJJSYWFTAISKPOFVEWQUCSFQWIQWPKLJJEVEIZUQPTTZCCCLDVWZJBHYFMICATAZMZNXTSBWMQPGBADMZGPXRBOWXECDXMFVHNSIKUXLYHUKFYQKMDXSQKEOPWODNUC");
    const char tmp_msg_0[] = {-3, 8, -122, 27, 84, -1, 0, 29, -37, 5, -118, -113, -27, -68, -118, -41, -71, 17, 125, -43, 115, 15, -23, 2, 66, 0, 25, -13, 36, -68, -25, -60, 11, -51, -118, -65, -92, 10, 115, 32, 46, -127, -102, -125, -57, 46, 25, 65, -104, 8, 40, 20, -47, -42, -62, 53, 49, 63, 110, 59, -96, -104, 38, -112, 80, 49, -122, -105, -86, -89, -52, 53, -10, -123, 44, 9, 12, -101, 48, -10, -79, -54, -50, -8, 110, -85, 58, 59, -111, 35};
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
    msg.setTimeStamp(0.46841568775085696);
    msg.setSource(22495U);
    msg.setSourceEntity(57U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(36U);
    msg.content_type.assign("UDCOTWMKPHACFAEACSQMI");
    const char tmp_msg_0[] = {-30, 33, 53, -103, -51, 46, -118, -10, 57, -99, -99, -15, 2, 93, 20, 37, 3, 41, 121, -102, -95, -10, 17, 90, -58, 48, 59, -55, -95, -112, -54, -121, -67, -53, -97, 75, -18, 74, -15, 101, 107, 29, 3, -116, 96, -125, 37, 125, 104, 42, -63, 36, -62, 37, 83, -98, 83, -79, 22, 31, -43, -12, 75, -94, 2, -18, -31, 45, 121, 104, -104, -2, 59, -99, 33, -29, 9, 47, -35, -108, -67, -35, -57, -64, 68, 112, -120, 16, 98, 13, 99, -60, -45, 19, -33, -112, 122, -98, -16, 18, 71, -32, 22, 1, -3, -80, -15, -93, 5, -32, 87, 35, -37, 63, 35, -84, 103, 105, -58, -58, -79, -78, -57, 54, -94, 62, 45, -74, 108, 110, 23, -126, -83, -58, -22, 72, -113, -8, -90, 68, 80, -39, 41, -64, 124, -45, -4, 36, 53, 39, -108, -31, 35, 90, 20, -59, 2, 107, 15, 115, 78, 3, -66, -14, 18, -58, -125, 24, -38, 61, -65, 19, -54, -123, 67, -127, 40, -87, -118, 35};
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
    msg.setTimeStamp(0.1638418758638347);
    msg.setSource(38579U);
    msg.setSourceEntity(192U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.2222099737641099);
    msg.setSource(372U);
    msg.setSourceEntity(117U);
    msg.setDestination(53283U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.9969133122073565);
    msg.setSource(44301U);
    msg.setSourceEntity(251U);
    msg.setDestination(21475U);
    msg.setDestinationEntity(247U);

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
