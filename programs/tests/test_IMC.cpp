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
    msg.setTimeStamp(0.5418135621438325);
    msg.setSource(44673U);
    msg.setSourceEntity(107U);
    msg.setDestination(46125U);
    msg.setDestinationEntity(65U);
    msg.state = 10U;
    msg.flags = 105U;
    msg.description.assign("FUNMVVLPXKSKONZFNDTJWCFDKUHQGYMNECWUNGGYOABUCBJSAWCTDOWAHLJMXCTZSBCNBSLLDFKYIRLEBFDRAVWAMXRHLMYGGFVRNQXVGSTUMRMQEKDGJVPPQQOEOXVHUBOFCPUQXVLPMHGOMEPQHYXJULSSWPPSCEJYIVIANUFIRYHJVRWOOMYHLFXZZKKCBIXFLIGEARWDEZQIJSYRJKZB");

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
    msg.setTimeStamp(0.32980961560020206);
    msg.setSource(31804U);
    msg.setSourceEntity(184U);
    msg.setDestination(27090U);
    msg.setDestinationEntity(93U);
    msg.state = 86U;
    msg.flags = 61U;
    msg.description.assign("YDOMMWNSXKFOQQOZUHYPLXZEMYVVDVGOHYWHMUHBUAJPBYBFNRLQXQVMCVVKHVUQLSCKCFEXBIDEFIKYNSALGCKCPRJWTUBMAAICJSPTTKEAUPRXPOULTSNDARDNGHCKAKWDILXQTYJSESOGAOZJNLKT");

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
    msg.setTimeStamp(0.1927045088788002);
    msg.setSource(57555U);
    msg.setSourceEntity(139U);
    msg.setDestination(6666U);
    msg.setDestinationEntity(89U);
    msg.state = 105U;
    msg.flags = 13U;
    msg.description.assign("FXXRUAUHOZHVDICCLBXPBMJSUPYJQAXYPVCWOYNYPR");

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
    msg.setTimeStamp(0.6896208114345153);
    msg.setSource(40225U);
    msg.setSourceEntity(239U);
    msg.setDestination(4560U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.43916406095415617);
    msg.setSource(45264U);
    msg.setSourceEntity(146U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.5690746854932924);
    msg.setSource(1765U);
    msg.setSourceEntity(49U);
    msg.setDestination(54740U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.6510917750301941);
    msg.setSource(37757U);
    msg.setSourceEntity(42U);
    msg.setDestination(33697U);
    msg.setDestinationEntity(106U);
    msg.id = 223U;
    msg.label.assign("AZFDRTEEUIYKPZZKCSTTJACQPTNOFHDZXCXHJNVNGIKURDWUSTFFIDBJQOVCVQBKAROMMGJATBQMXAWPMCNUJLIYZYXHMLGGECRJRGSKAV");
    msg.component.assign("GGPGQRQWOLRXWQBOLSHIZNVVDUUJPTYRIAHAVKBEXTZMOEKNWNMCJZFQVHDNPZNVFCIIXPHOPRZGQMZRTJKMIJNGGPIWUDCUNNNSKTHUTWRPSBIRABOLUSACYDGIHPSFVMSMQJTSXFPCMJYAOISTUYXTCHYYUWTLEBCMKKFGEOAYEYYNFOQJSCXWBMFRLPBCZGTJCD");
    msg.act_time = 59390U;
    msg.deact_time = 27012U;

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
    msg.setTimeStamp(0.4718243839444154);
    msg.setSource(51283U);
    msg.setSourceEntity(56U);
    msg.setDestination(39672U);
    msg.setDestinationEntity(214U);
    msg.id = 192U;
    msg.label.assign("PEHUSZZKHNGLILZINMMOTVPTVEMOQFTWCLHAQLXZIRYWGCWPJAKOSQZCYHGYJRYCVPCLKXTCEHMNKSVSRMYTRENTBSUUQGBEKNOSWPFAWHKCXJKVICAZOLJDZACUPMQRXBJWBIDEUL");
    msg.component.assign("DAFHKCUKGJIMMGRDLFNUBTMPFHKSSYXZXLVQCZEZCEWSHQSQSGYZYGBIIPPBZUHJXRYPEURSBLITYGSTKWRKNLYOAGGEFTUEAMCOBMVRQUAVQNRJEAIOPDUNQCNITIPWCNZXJGSBPJJXXDNPNDVQVMQRWAWMVBHHFLRDOXGTXZKJNIZGOLKCAYICUNTPDHOODQZBOVLEDVAAHWKMPKEQYFWBMDTJCUMFTV");
    msg.act_time = 44992U;
    msg.deact_time = 45970U;

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
    msg.setTimeStamp(0.35138777606928084);
    msg.setSource(46364U);
    msg.setSourceEntity(246U);
    msg.setDestination(46372U);
    msg.setDestinationEntity(127U);
    msg.id = 142U;
    msg.label.assign("UPOXDKWTWNORGPYZUVGJWYWPSXTXBHLQBYXHEMCCIAPJLESADFJCCAYTGJEPLTKXIMIOHLTQDJQBFCFNGFDCZPYAZOUNEUXJICMSFCGVQEVSVOINAUQQFURZMGKLVKQYXGEEYOHSHWSIVRKZVFJGKDDTRAHULZPOSBHNXLMHHYJRNPAWSAGRKOENCNEQKTDPRJFICV");
    msg.component.assign("WJGHFSVZMKNADXWNFXGBCXUNLGKSELEIFLGZQJJHAHDJEYYUFSKBMTEAXUVZOAQDSUDVXLIHNMFFGNDFZAOORZZOYKFLGLBPOLMYNJAJUTOPTEYWSW");
    msg.act_time = 34446U;
    msg.deact_time = 32918U;

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
    msg.setTimeStamp(0.4851536854982803);
    msg.setSource(19181U);
    msg.setSourceEntity(1U);
    msg.setDestination(53030U);
    msg.setDestinationEntity(123U);
    msg.id = 222U;

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
    msg.setTimeStamp(0.5422377208463065);
    msg.setSource(28724U);
    msg.setSourceEntity(118U);
    msg.setDestination(55071U);
    msg.setDestinationEntity(204U);
    msg.id = 222U;

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
    msg.setTimeStamp(0.03979966544145663);
    msg.setSource(1327U);
    msg.setSourceEntity(136U);
    msg.setDestination(20142U);
    msg.setDestinationEntity(185U);
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
    msg.setTimeStamp(0.33851598689420015);
    msg.setSource(47430U);
    msg.setSourceEntity(89U);
    msg.setDestination(6897U);
    msg.setDestinationEntity(4U);
    msg.op = 76U;
    msg.list.assign("EECNMAZHQBLQZWCSZXADLWDGEGPMDQYIQEJDTMHOYCOXVFGPKKZJKWKUSYQYUJJBFBAHDFFGRYSLALRBEXIBXBPOLIEAFIYNEQYKETTVIUXKQYIQPTSKZUWUYIRNPYFUAXZVAOKVVSOOBTLDTJOGHCTG");

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
    msg.setTimeStamp(0.5342380314170668);
    msg.setSource(28929U);
    msg.setSourceEntity(165U);
    msg.setDestination(27912U);
    msg.setDestinationEntity(84U);
    msg.op = 211U;
    msg.list.assign("JKTKNMVYKIQIJXPNCXELDDWRSRREXDQMYVPNRFQCGYEW");

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
    msg.setTimeStamp(0.8507799701794454);
    msg.setSource(61242U);
    msg.setSourceEntity(31U);
    msg.setDestination(46117U);
    msg.setDestinationEntity(107U);
    msg.op = 139U;
    msg.list.assign("WAAVUHJIITAAJZMRHAWWDSZHLNNCECEWPQJGXZITMSSZXRAFHVXPSQIOFWVODFFYBFIBECFYZXHDDUTXKTDHKHQARGMJPJETNODSHWQBRMONDOTMTLUYYTVGIZTOUIBDCCGBHSSYBMRFKYODQXLKDBGUBMTVVBQOILLXSPGVPUYOXPGLCMREZERFKSCRWCUAFKGQ");

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
    msg.setTimeStamp(0.8822159437877998);
    msg.setSource(35613U);
    msg.setSourceEntity(202U);
    msg.setDestination(21883U);
    msg.setDestinationEntity(206U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.7137070242281159);
    msg.setSource(30056U);
    msg.setSourceEntity(145U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(80U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.6039643649911541);
    msg.setSource(20483U);
    msg.setSourceEntity(172U);
    msg.setDestination(36813U);
    msg.setDestinationEntity(100U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.21377123677436782);
    msg.setSource(14575U);
    msg.setSourceEntity(180U);
    msg.setDestination(47915U);
    msg.setDestinationEntity(238U);
    msg.value = 124U;

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
    msg.setTimeStamp(0.99642472146624);
    msg.setSource(8804U);
    msg.setSourceEntity(33U);
    msg.setDestination(14178U);
    msg.setDestinationEntity(25U);
    msg.value = 3U;

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
    msg.setTimeStamp(0.07255167560918097);
    msg.setSource(50109U);
    msg.setSourceEntity(247U);
    msg.setDestination(37304U);
    msg.setDestinationEntity(174U);
    msg.value = 188U;

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
    msg.setTimeStamp(0.4051810476031483);
    msg.setSource(15890U);
    msg.setSourceEntity(62U);
    msg.setDestination(60793U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("CSYCJFRPIXWNQFFSHHHIWKMQNGDVKIBIXOPBZOPUCZAQJEMRVEBBDLUJXJVTPGZIRRETXDJCTQXRLUZNZYLZNUHGROGGNGIMTOYSKCQYLOFEPJSOVWAKKLHQUCIMBHCKBOSRAHUQLQTWAAHBLCKSXBJQSFFUGDAYYMFZPNXT");
    msg.message_id = 33322U;

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
    msg.setTimeStamp(0.8012015132951629);
    msg.setSource(58531U);
    msg.setSourceEntity(214U);
    msg.setDestination(19792U);
    msg.setDestinationEntity(46U);
    msg.consumer.assign("JFUNWWGQJDCAFZLQWWQAQHSMIZKHYDCRVTEIFQOGLOZMKUHVZIGOZAANJMTTCJARGGXEVFKTLLZNBQPXRHVLCXBZXVHCYHIDUBBXNSSXHDJJWPNBXVMIGSKMEPUQTOBHZDPKDMERLUHSWFUFWPPQXJVQACDSAGZRKDIMPAFLRNEMIVUGGOK");
    msg.message_id = 52866U;

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
    msg.setTimeStamp(0.4829372835505442);
    msg.setSource(58432U);
    msg.setSourceEntity(103U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(92U);
    msg.consumer.assign("YSRGBMGFVFINBAAEJOMNWI");
    msg.message_id = 5023U;

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
    msg.setTimeStamp(0.5739085627986236);
    msg.setSource(30559U);
    msg.setSourceEntity(124U);
    msg.setDestination(34380U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.5887869618906271);
    msg.setSource(24434U);
    msg.setSourceEntity(200U);
    msg.setDestination(10231U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.2113464770804665);
    msg.setSource(40789U);
    msg.setSourceEntity(174U);
    msg.setDestination(37666U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.9200478285220687);
    msg.setSource(57236U);
    msg.setSourceEntity(233U);
    msg.setDestination(49175U);
    msg.setDestinationEntity(146U);
    msg.section.assign("PSFBYTWYHMLDIBYZKRMVZAEDOFMTVBEBLQSLVLXIEDIPVWFIJKDILIROOAQHQNXCSJCEFWQKFLQUFKISHAZGW");
    msg.param.assign("EEAZNLGLLWOQCSTFWTSNJSKSIYIRYLTGDGSROUJBBXALSJKMLVCKQCMGVGKPNFOTPVFWUNHOVZFQVSQAZZQRU");
    msg.value.assign("GCAEHCTHRRMVTHIMQHNUIJDLUPXWPKKYSDJEMRDNOGYVHEVLTBWCIGTYCXLCSXKITFKEPJNOFRVMTBBOYOQGFBVZWYFKZNBSQEXJIYWYMGWDFSVHLCSUNRPDMFNLRDTVRZFXAKZSLXNGSHZCIUEYITPVFKSFOJJISUAQTAPOWEEWRDJMOKUZGVXTMYJWZHBXNZ");

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
    msg.setTimeStamp(0.688475659334675);
    msg.setSource(33687U);
    msg.setSourceEntity(212U);
    msg.setDestination(18374U);
    msg.setDestinationEntity(202U);
    msg.section.assign("BXTKUQOZNMDQQWKCBOJSLMVOAVGXBLTTRKXJVIINKDLAHLXBCZAZSCZZBOCHFPDYOTHBZPDJTAQEDRNYXEAVWTQUGWOIPVDNNXLJBDKFKZYWBHMOQNWVMVWNRKPWARLJKJJFSAIVMZJSUOESTOCUDE");
    msg.param.assign("VMXDIAWZJTONXEBLZVYCTRJOHDGOCCBXZVNPPDVBKNKGUKJT");
    msg.value.assign("SMXICVBYACRTKYYJHBXEKPNR");

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
    msg.setTimeStamp(0.23735442785585859);
    msg.setSource(15353U);
    msg.setSourceEntity(193U);
    msg.setDestination(50645U);
    msg.setDestinationEntity(138U);
    msg.section.assign("DDRIZMPENJMWLSZIGLZNQBCCVJUXNTQXKSRZFYOJFASYETPOWFTTNYGWIUOBZZQREIQSLMJJLXJAWDDLIN");
    msg.param.assign("ANMYRHWUVFCVOAHKNJIOLMDQKVSUZAPFXIK");
    msg.value.assign("IQRSXJXIIP");

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
    msg.setTimeStamp(0.4289681408927637);
    msg.setSource(49927U);
    msg.setSourceEntity(18U);
    msg.setDestination(33076U);
    msg.setDestinationEntity(108U);
    msg.op = 51U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ZJKPLYSXBPKJUQCPEGKFOKAAMGOKDIHQUTOCYDLVOUMRZAPUCHHOZGAVJJEWJHKBNQELZEDILVEXBDFOZPMNVGYXCKSUHXCDNGANYWSOFRXYJLMDHTMABKEPQKTWSEZBIMXRIRSDMQTTSSLGGYWDROCIVQRRTFGUMFBPLJZIJZVYOJI");
    tmp_msg_0.param.assign("LQQCJWQJVMPVISSAMSRTSOZLVZSDTNMFYZFRMEAGGFLZFAMIBSPYGVPAFSEKARPMDAIHNPHILXGCADODLBWTAWQZXFZUKQDUWNOORCRYVYAHPPYNYMXZQGDUHKERGXUFVBABNXHJNNBBETLOCSTXRGSYOBXCRDTJMKBLCEQEVCCZYBICWNSUGFITYZLEDPTKNRBQKIEHHPVIVHZGUTKMOJJUWDFOHELLYVMOKUOID");
    tmp_msg_0.value.assign("KXASIYCFVHNRIUDEZMAPGDGQFQLWBVJBLIQZIUUTOFJKUUIOYQXXRCYKEHCPYZIOZBTOWOSNGTSZILSCCJYOANWTLKHWEVVGVUFSLNNVDUAKNJXXPPPCFHZAJVWIHFZLDBUNOHBEBORRDRDQQZWFKYRKXADHTMNEJBQWKLSCTMNAAFAPRSJCRMBMVAMTTMXPLZOMWRDIG");
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
    msg.setTimeStamp(0.8959738374375035);
    msg.setSource(59904U);
    msg.setSourceEntity(14U);
    msg.setDestination(11735U);
    msg.setDestinationEntity(224U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.30772441735906697);
    msg.setSource(39491U);
    msg.setSourceEntity(35U);
    msg.setDestination(35378U);
    msg.setDestinationEntity(29U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.35063254425759993);
    msg.setSource(46706U);
    msg.setSourceEntity(219U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(245U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.5271034124677821);
    msg.setSource(17925U);
    msg.setSourceEntity(214U);
    msg.setDestination(13559U);
    msg.setDestinationEntity(173U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.15799370907793797);
    msg.setSource(30914U);
    msg.setSourceEntity(200U);
    msg.setDestination(1981U);
    msg.setDestinationEntity(224U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.4807427804912455);
    msg.setSource(56873U);
    msg.setSourceEntity(173U);
    msg.setDestination(14515U);
    msg.setDestinationEntity(162U);
    msg.total_steps = 13U;
    msg.step_number = 232U;
    msg.step.assign("SFSVWYJLESAOJU");
    msg.flags = 144U;

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
    msg.setTimeStamp(0.8170089201029769);
    msg.setSource(4106U);
    msg.setSourceEntity(211U);
    msg.setDestination(61387U);
    msg.setDestinationEntity(27U);
    msg.total_steps = 130U;
    msg.step_number = 191U;
    msg.step.assign("KDETRGWWGPCTMDEDRQCJFNBQUTHDAVFYETZQLHRBYMZYLLIRTMOYZSXGHSVNHWZPURGMBQJRAQIFZVNSTBSDBOBXENGJXFBVUOARYPKIKXGDACORFDXCCXYLCTCSTNHHAZOFVRKJEMYLEBKMHNIAWLOAJWTCSSNKKPOQYFOWKHUWAIEUPVFSVVKLDQPQPSPWXCZUBJXRMWPEIHIUDLSOMYFUCEKO");
    msg.flags = 85U;

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
    msg.setTimeStamp(0.4117642694449444);
    msg.setSource(16866U);
    msg.setSourceEntity(165U);
    msg.setDestination(14303U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 208U;
    msg.step_number = 42U;
    msg.step.assign("MPQQBUKSFPMPAOFAAYJTTRQWMNZLQRPGLIOBVCYFSHGUMEUBZERGVLJLMNXJVVZVCFOYAKVKBOTSZLNFKGPJLBZWFNZXKSNAUIMVGQDADAYJYWSCBPEXDNEXFPVZQHJYWMSQDXVJPGIYLPEHFCDIOXXQQRXVNMUZTESIUBKTMXDO");
    msg.flags = 35U;

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
    msg.setTimeStamp(0.588953867447086);
    msg.setSource(16532U);
    msg.setSourceEntity(90U);
    msg.setDestination(36258U);
    msg.setDestinationEntity(112U);
    msg.state = 38U;
    msg.error.assign("OTWZHZCUHBUKIDOCPPGWSYVQSDYNMJWDEMZMNRZGFJGTZTXPERUPHPLUCSETQDBHMPEJRWPXQRKHKXKXUOQFCJBSJBQSMUQUMQXVELDGOBIMVRDIQFLBEMSFYQQNKDCHBKNJGVXARJSZUBSFAKOGOEZTLYCFABBXGVCEFTYTYDPCVILHLXUMINJALIVWCJAKNWFDELDOKZT");

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
    msg.setTimeStamp(0.5920639351315089);
    msg.setSource(3140U);
    msg.setSourceEntity(40U);
    msg.setDestination(61449U);
    msg.setDestinationEntity(110U);
    msg.state = 73U;
    msg.error.assign("LPPGAYKYAPLMTRIKZKLBRWNKQRFTGOXQSCBRQENVTFTXGCZPRWMDJISSTUDJUEUR");

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
    msg.setTimeStamp(0.4443826648868956);
    msg.setSource(53370U);
    msg.setSourceEntity(104U);
    msg.setDestination(8477U);
    msg.setDestinationEntity(98U);
    msg.state = 25U;
    msg.error.assign("NXQTVNOKAVLBDXXMCXPEYLDLSWAZYMAITXUKCIYJCPEQPHCPUGIDSQVKAMXEHUZAHGFZUNCQZYJLIQWQBDHUFOWVOHENPJZRMEZXYJCOLVTEGRCUTIOFHBXGXGUBVVDMTVYWHRCRODIFAPURZDMLTIWNJUGPODQKZLESQYLMIHRVYEJZRWHHFOA");

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
    msg.setTimeStamp(0.7502431322721856);
    msg.setSource(62523U);
    msg.setSourceEntity(53U);
    msg.setDestination(39762U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.39417914932263454);
    msg.setSource(505U);
    msg.setSourceEntity(47U);
    msg.setDestination(28579U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.3408044733857364);
    msg.setSource(40025U);
    msg.setSourceEntity(183U);
    msg.setDestination(1366U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.4093567197562591);
    msg.setSource(64365U);
    msg.setSourceEntity(62U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(170U);
    msg.op = 147U;
    msg.speed_min = 0.36273463852896004;
    msg.speed_max = 0.1676433135694776;
    msg.long_accel = 0.26630619156687274;
    msg.alt_max_msl = 0.45669022107256263;
    msg.dive_fraction_max = 0.7115461211972746;
    msg.climb_fraction_max = 0.13946471474906896;
    msg.bank_max = 0.5633534669485183;
    msg.p_max = 0.7992519623588662;
    msg.pitch_min = 0.056401320014766276;
    msg.pitch_max = 0.42462427764220745;
    msg.q_max = 0.967976855187833;
    msg.g_min = 0.4993255147856487;
    msg.g_max = 0.12373266548691797;
    msg.g_lat_max = 0.49426719177092415;
    msg.rpm_min = 0.7508724989783772;
    msg.rpm_max = 0.04629632310505816;
    msg.rpm_rate_max = 0.5682255561904818;

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
    msg.setTimeStamp(0.10063874637618797);
    msg.setSource(36750U);
    msg.setSourceEntity(24U);
    msg.setDestination(42530U);
    msg.setDestinationEntity(147U);
    msg.op = 166U;
    msg.speed_min = 0.7550676547518649;
    msg.speed_max = 0.9205686892619424;
    msg.long_accel = 0.10179057463763486;
    msg.alt_max_msl = 0.05774668961666729;
    msg.dive_fraction_max = 0.7689685469594544;
    msg.climb_fraction_max = 0.48940439501566824;
    msg.bank_max = 0.9923861193178588;
    msg.p_max = 0.8465280857236517;
    msg.pitch_min = 0.474252400517131;
    msg.pitch_max = 0.3320108695507763;
    msg.q_max = 0.3353187422477233;
    msg.g_min = 0.36707446727503035;
    msg.g_max = 0.24478448467980884;
    msg.g_lat_max = 0.4684075390677537;
    msg.rpm_min = 0.826161514610633;
    msg.rpm_max = 0.6505963579411691;
    msg.rpm_rate_max = 0.3901146060989197;

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
    msg.setTimeStamp(0.36368360882651296);
    msg.setSource(54239U);
    msg.setSourceEntity(136U);
    msg.setDestination(29245U);
    msg.setDestinationEntity(107U);
    msg.op = 57U;
    msg.speed_min = 0.1758828405250802;
    msg.speed_max = 0.037111929486091655;
    msg.long_accel = 0.29080437270916903;
    msg.alt_max_msl = 0.9668132840124137;
    msg.dive_fraction_max = 0.9658430884146971;
    msg.climb_fraction_max = 0.571044949720367;
    msg.bank_max = 0.08236820618067986;
    msg.p_max = 0.5011231752077301;
    msg.pitch_min = 0.7595429410409039;
    msg.pitch_max = 0.11800441176472365;
    msg.q_max = 0.0869972207211388;
    msg.g_min = 0.4357495958279376;
    msg.g_max = 0.18295097498672175;
    msg.g_lat_max = 0.8113853275161379;
    msg.rpm_min = 0.11078920287297211;
    msg.rpm_max = 0.7481760725600942;
    msg.rpm_rate_max = 0.22157285356004475;

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
    msg.setTimeStamp(0.8276023112734663);
    msg.setSource(2666U);
    msg.setSourceEntity(69U);
    msg.setDestination(17910U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.40439537549693216);
    msg.setSource(11292U);
    msg.setSourceEntity(33U);
    msg.setDestination(45172U);
    msg.setDestinationEntity(246U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 8U;
    tmp_msg_0.goal_id.assign("CSMXTENRDDTKBOEPEOWPIFWYHNJAISRUDEBGDROMZJOCPBFZZOLVMWZYRYJQNGJFVIOCGFNXCQRPJABKKYIJSDYSAPMQGVVMZQJRRGXTQU");
    tmp_msg_0.goal_xml.assign("KHWWHYCIXBSJZXUUYOKXNVRIFOMXANIHCEZCUPTJJDIQQDJGCMLQJJUKLXWNSKENCBREAYQKTLTCPVZZDFQNBJDRPGXQAAAUHNLFYVWVFHMPRDARGSIIHPTDWMYTGKAPLIDGGUJVKOOVYKGHSOPXZUCEBXHJIKZPGGSJTORSVCBAAMMQSYLTVCTFFEZNREBMDTFLBGVBNLMXQSOZWXIYFEEHNTRQNWSIBWCORFMLFD");
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
    msg.setTimeStamp(0.8939050339392252);
    msg.setSource(8582U);
    msg.setSourceEntity(90U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.8388600208835859);
    msg.setSource(51880U);
    msg.setSourceEntity(209U);
    msg.setDestination(35593U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.8293730657406372;
    msg.lon = 0.2917145826689378;
    msg.height = 0.7842280435511807;
    msg.x = 0.2549116835015497;
    msg.y = 0.3374094742579874;
    msg.z = 0.9388884695837221;
    msg.phi = 0.9738007518245222;
    msg.theta = 0.5041469918085449;
    msg.psi = 0.5255731848224365;
    msg.u = 0.5634671548636253;
    msg.v = 0.8600831114251157;
    msg.w = 0.38105062530468814;
    msg.p = 0.5683364063459445;
    msg.q = 0.16114277833441315;
    msg.r = 0.7178799822295553;
    msg.svx = 0.45857453396765935;
    msg.svy = 0.34513336232194003;
    msg.svz = 0.5386830713117917;

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
    msg.setTimeStamp(0.16277014638671206);
    msg.setSource(33060U);
    msg.setSourceEntity(147U);
    msg.setDestination(24261U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.2315128560189581;
    msg.lon = 0.41899838760290353;
    msg.height = 0.4261999863424967;
    msg.x = 0.8898950600010318;
    msg.y = 0.6165944975345435;
    msg.z = 0.7818349263194568;
    msg.phi = 0.24914739509529493;
    msg.theta = 0.2954698240133331;
    msg.psi = 0.6033150808248127;
    msg.u = 0.6468678177165371;
    msg.v = 0.11943569207567584;
    msg.w = 0.3273958219395552;
    msg.p = 0.7266084137135987;
    msg.q = 0.4996680298657946;
    msg.r = 0.8825625134564412;
    msg.svx = 0.9850526589711706;
    msg.svy = 0.9491206754031967;
    msg.svz = 0.4084741204219938;

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
    msg.setTimeStamp(0.9066298308282184);
    msg.setSource(21094U);
    msg.setSourceEntity(249U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.5366119574578322;
    msg.lon = 0.4254128272389075;
    msg.height = 0.814740705701885;
    msg.x = 0.8467245320099592;
    msg.y = 0.360781138224907;
    msg.z = 0.03451980656097431;
    msg.phi = 0.10613956885701581;
    msg.theta = 0.6249202080116911;
    msg.psi = 0.9911956158041613;
    msg.u = 0.9939574993989293;
    msg.v = 0.6218177274172922;
    msg.w = 0.6694663918129317;
    msg.p = 0.8747332872418216;
    msg.q = 0.6601816444595642;
    msg.r = 0.12300098487673361;
    msg.svx = 0.9278516599013006;
    msg.svy = 0.9576206839412356;
    msg.svz = 0.30104690556912717;

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
    msg.setTimeStamp(0.8665338060303172);
    msg.setSource(46035U);
    msg.setSourceEntity(204U);
    msg.setDestination(194U);
    msg.setDestinationEntity(128U);
    msg.op = 242U;
    msg.entities.assign("WSTQVYMAJWRPWALEFATSSTHUJDLGHZRXVATOOEFXFSZWDEWYOTQWMXAKDVQJIVRQFKXSFHIHAPTILUBXVSAHLCOAVYPCD");

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
    msg.setTimeStamp(0.2179638760150604);
    msg.setSource(20514U);
    msg.setSourceEntity(76U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(161U);
    msg.op = 90U;
    msg.entities.assign("EHLBOHUCCTNZPXBYRGJFDGGBVAJXOKJICZNHYDDXZPYAQDMLBYHPIGQAVUMZTFXRKPCFRVMRILVTJCKVMQAAWGUOPASRSEYCBRFSKHAAJWVZADSKTCDKXQ");

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
    msg.setTimeStamp(0.13574654247380236);
    msg.setSource(15573U);
    msg.setSourceEntity(62U);
    msg.setDestination(56692U);
    msg.setDestinationEntity(81U);
    msg.op = 53U;
    msg.entities.assign("SGUOBKQQCRFNMIPNOGTANUWMBYPULTCOHQHJUBYXRIITZSDFEXODKHTPZQBDGFADWELSJALQLRSOUZAOJUDLZZABETRIPOBAOMWJKKKFLWGAPVRBJGWMPHPYYUMCHZOYKRXGIAQHWBZDJBSZKKHYDWINWJMFVTXXAFKVXLRGRIEMNSPZERQFZAFJVVHOJCXREWV");

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
    msg.setTimeStamp(0.909158738347261);
    msg.setSource(50128U);
    msg.setSourceEntity(194U);
    msg.setDestination(10228U);
    msg.setDestinationEntity(170U);
    msg.type = 254U;
    msg.speed = 818U;
    const char tmp_msg_0[] = {-57, 9, 51, -14, -107, 32, -68, -15, 60, -16, 81, -80, -33, -19, 65, 112, 121, 109, -107, -84, -19, -29, -110, -104, -12, 107, -119, 56, 90, -94, 52, -35, 46, -56, -91, 75, -111, -84, -9, -74, 106, 45, -39};
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
    msg.setTimeStamp(0.3273491874930827);
    msg.setSource(55444U);
    msg.setSourceEntity(142U);
    msg.setDestination(3705U);
    msg.setDestinationEntity(143U);
    msg.type = 137U;
    msg.speed = 52716U;
    const char tmp_msg_0[] = {-78, -71, -97, -84, 6, -24, -21, -77, -56, 11, -63, 100, 30, 70, -17, -77, -121, 12, -121, -52, 65, 125, -113, 83, -109, -74, -89, 38, -17, -62, -10, -50, 92, 102, -113, -60, -68, -4, -128, -84, 98, 30, 114, 123, 2, -53, -123, -104, -35, 20, -95, 0, -30, -92, -35, -8, 99, 25, 68, -7, 98, 25, -64, -2, -23, 102, -64, 51, 102, 25, 114, -37, -27, 32, 55, -74, -114, -127, -20, 55, 63};
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
    msg.setTimeStamp(0.5801378111201957);
    msg.setSource(44867U);
    msg.setSourceEntity(253U);
    msg.setDestination(7100U);
    msg.setDestinationEntity(212U);
    msg.type = 87U;
    msg.speed = 35774U;
    const char tmp_msg_0[] = {93, 39, 12, 113, 28, -44, 10, -86, 2, 73, 2, -98, -51, 86, 5, 69, -76, 124, -63, 23, -125, -18, 80, 33, -24, 88, 114, -29, -105, 117, -92, 36, 67, 110, 94, 98, 32, 98, -19, 102, -94, 53, -99, 69, -16, -48, -99, -98, 1, -91, 88, -98, 88, 65, 51, -125, -85, -8, -27, 106, -122, -10, -80, -43, -73, 113, 33, -59, 125, 29, 58, 79, -113, -94, -81, 86, -108, -63, -26, -38, -114, -90, -110, -118, 89, -86, -8, -73, 36, 85, 90, 63, -64, 82, 12, -56, -39, -52, 53, -79, 34, -117, 103, -27, 18, 1, -18, -67, 46, -80, 31, -46, -75, 114, 13, 31, 2, -27, 96, -35, -57, -123, 120, -67, 68, 8, 104, -78, -46, 61, 126, 57, -98};
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
    msg.setTimeStamp(0.2820570408896571);
    msg.setSource(50219U);
    msg.setSourceEntity(13U);
    msg.setDestination(34507U);
    msg.setDestinationEntity(121U);
    msg.op = 139U;
    msg.tas2acc_pgain = 0.7974732794623327;
    msg.bank2p_pgain = 0.4450454228344438;

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
    msg.setTimeStamp(0.7507346422198414);
    msg.setSource(48679U);
    msg.setSourceEntity(64U);
    msg.setDestination(20111U);
    msg.setDestinationEntity(176U);
    msg.op = 19U;
    msg.tas2acc_pgain = 0.4767384537002409;
    msg.bank2p_pgain = 0.9492677183442516;

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
    msg.setTimeStamp(0.02942876961237262);
    msg.setSource(17114U);
    msg.setSourceEntity(13U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(38U);
    msg.op = 244U;
    msg.tas2acc_pgain = 0.9396259293384022;
    msg.bank2p_pgain = 0.07125826609283148;

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
    msg.setTimeStamp(0.4023148530077362);
    msg.setSource(65030U);
    msg.setSourceEntity(167U);
    msg.setDestination(37623U);
    msg.setDestinationEntity(183U);
    msg.available = 1060613908U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.4513763877859639);
    msg.setSource(42354U);
    msg.setSourceEntity(35U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(196U);
    msg.available = 1379574540U;
    msg.value = 170U;

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
    msg.setTimeStamp(0.797507323122784);
    msg.setSource(37394U);
    msg.setSourceEntity(245U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(128U);
    msg.available = 3821290640U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.19342091105040626);
    msg.setSource(16369U);
    msg.setSourceEntity(180U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(10U);
    msg.op = 175U;
    msg.snapshot.assign("PLDPZLSWJSMIAALQZYXWVGMLDRUFPDKZEXOJKLJTFEBNRQRCXWNTSULJUXCBUFZTQJNBYVVAQSTGHYHNFBKFXDIRBCCEKWFQMROSCEVLGOOOIXAMOJFIJCHSMCAKNCWEPYKKLQEZRVPRAZMESJPUIQQJBWHWYPEWXNXHBBIGVZHIGVDOACYZZGYNOLGTUWFFITMMHPYFA");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 2074654144U;
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
    msg.setTimeStamp(0.3758375584664676);
    msg.setSource(8738U);
    msg.setSourceEntity(101U);
    msg.setDestination(8725U);
    msg.setDestinationEntity(233U);
    msg.op = 102U;
    msg.snapshot.assign("MKFRNUAFSMZAIKHPYECPIDYXSCLZEJNJKBNLQXKHWIBVTDRHHG");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 96U;
    tmp_msg_0.text.assign("IOVXUWJZRJDRTLVJICSIKGYBASOUBWTQGTUZQVALYCSXIZPXBYKENQFMWUXPMJTLHNCPNEMWPUPQVGVYZHLQVR");
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
    msg.setTimeStamp(0.5083155602701821);
    msg.setSource(63463U);
    msg.setSourceEntity(240U);
    msg.setDestination(516U);
    msg.setDestinationEntity(21U);
    msg.op = 252U;
    msg.snapshot.assign("HIIBBKPXDARGEJGISMGBAROECESTLUHGRYVYHPGQPOQVHJKCWNOVZBASDWJVHPXPLZNPOXFOIQXMYEKJZZOUUQFMNVEJMYCQOSTDJDQNHSBCBTIFDAHILW");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 49750U;
    tmp_msg_0.lat = 0.9159917612399135;
    tmp_msg_0.lon = 0.388873052241565;
    tmp_msg_0.z = 0.21008096340755034;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.2611291515483817;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.bearing = 0.8167537438461192;
    tmp_msg_0.cross_angle = 0.851508521330401;
    tmp_msg_0.width = 0.8531935460700942;
    tmp_msg_0.length = 0.7492264433156139;
    tmp_msg_0.hstep = 0.010662571620585592;
    tmp_msg_0.coff = 153U;
    tmp_msg_0.alternation = 223U;
    tmp_msg_0.flags = 227U;
    tmp_msg_0.custom.assign("OGJORIFUMIGRUXCXZTCRWSGHDKPEGULVIPSVNTQRQYHQUEKRJXMOHKBWQTCZHPEGAJEHXCHYYQAHTWGSZS");
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
    msg.setTimeStamp(0.31306000922999777);
    msg.setSource(28865U);
    msg.setSourceEntity(203U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(106U);
    msg.op = 199U;
    msg.name.assign("WGIFKXNDZOYH");

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
    msg.setTimeStamp(0.9149182106143985);
    msg.setSource(32270U);
    msg.setSourceEntity(43U);
    msg.setDestination(52044U);
    msg.setDestinationEntity(189U);
    msg.op = 159U;
    msg.name.assign("CPEYGZYGFAITFMPYUFODHTXGERVZCHYFMHIUMXYCNGBBTMKQHVIFXJTGTEINHBSORAFRVRX");

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
    msg.setTimeStamp(0.29078472247703335);
    msg.setSource(8942U);
    msg.setSourceEntity(17U);
    msg.setDestination(61776U);
    msg.setDestinationEntity(172U);
    msg.op = 164U;
    msg.name.assign("BSFLAILNRCQIPHOHPXVKMFYUBWFHEFDDPBZXPDNGUHPGOQPQBNQBDVLREPENYAVBHSNWFNRISDJPHCQXVUTUOXOXUHYHMCKTXLTEFZFMOWMVJTSAJCKVFZSAQQEMUSXCKAFGOBUZMHCNIVFLGTMSIITGNWZZEGEDZKJVJ");

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
    msg.setTimeStamp(0.657049600941601);
    msg.setSource(22284U);
    msg.setSourceEntity(158U);
    msg.setDestination(43111U);
    msg.setDestinationEntity(10U);
    msg.type = 31U;
    msg.htime = 0.5968482345802298;
    msg.context.assign("DJVELOPGFEPVTBJZXCFTIOLJDZQLMTCFJINTSUWAOFAZGOLGALRAGTPRDPMUJYBNMYKNFFPJSJNZQXCBVQDQUMBKTZXHB");
    msg.text.assign("HRMWSOLNVONHIJOWLZGGTAYOSRSTFUTXGBDAUVIRMACSQWUACOXZPEBQGFDIVBMNJYOKIAQFJDGYJJELQ");

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
    msg.setTimeStamp(0.5610642343034917);
    msg.setSource(18955U);
    msg.setSourceEntity(138U);
    msg.setDestination(6116U);
    msg.setDestinationEntity(90U);
    msg.type = 246U;
    msg.htime = 0.4738892802564627;
    msg.context.assign("NHUGXTVIVCLFUXZEECIATRLAMLKQYBBUWUTKUPZXWLVRYPSSSIITFBIMOTUWKQFSPKJZOKAQEUOOZZBPHLCGFPJNJJDJCBDWZPDQHQVYS");
    msg.text.assign("CESCXIZEFEFKZFTZSEBAYVDRBSJXIEWDJRTRPXQREPVXFZDATALOMASUMNLOTOXGHVHKMIPQBODYBADRKRENMDCTVUFIIBBJOKGCRWNULLOEQXDYPGQVXXBQDCOBUYQUVSSPLIRCNKPFZMHXNZAPARJ");

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
    msg.setTimeStamp(0.9505287603641669);
    msg.setSource(53487U);
    msg.setSourceEntity(187U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(82U);
    msg.type = 22U;
    msg.htime = 0.6486507755060383;
    msg.context.assign("XUIHBEKIEQTWMTFSZDYQUOKTHCUSJOVWJZNNARNOPMGDCMAGAQFKQGFUSWRBIIRSFSAZJEBLIFJLFSEAQUTNOPFKWCNUTXXCQLBZTLSOQRZMCBIHSLYDYNNHTORXJJHGNPVTNLWEVWJCQHDLRSRYBPCMFKBGDWAJEELBNPMGGXTDUHXEWVUYCXQDTEZBKDMAXDPKKRXWLYIZXKYJZVOMPVJVUOCRGOZFDSIOAVZCWMYFQ");
    msg.text.assign("TMNIKQSTIKDIUNHFUYRTJVIGADHOFZNFNYAUHUZTXNHMABOKXWWJLVEEKECWAWPV");

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
    msg.setTimeStamp(0.012490741499802449);
    msg.setSource(16566U);
    msg.setSourceEntity(131U);
    msg.setDestination(11283U);
    msg.setDestinationEntity(24U);
    msg.command = 126U;
    msg.htime = 0.4336854939803778;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 35U;
    tmp_msg_0.htime = 0.26593498817864325;
    tmp_msg_0.context.assign("OTOLCEOSRIXHVDXIYKKDVBHHUASYFAUINYOTEXGGPMCWMWOZZPVTRNWCAWYHCUMLEGCIMGBDAMXPLECRBNQJZVFBFOTAXMFWHEGJRSHODLKUFBGPSGKKWFHVCYMXLPAKDNBOFXIRDJCYAEQR");
    tmp_msg_0.text.assign("TSHQCBFPSPTHRQPUDLKKPNJDFLTVZMLRGMLCCQRWWIPKAZJBCIRNEDCJ");
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
    msg.setTimeStamp(0.9199884972940118);
    msg.setSource(60211U);
    msg.setSourceEntity(208U);
    msg.setDestination(39875U);
    msg.setDestinationEntity(199U);
    msg.command = 68U;
    msg.htime = 0.18382610149243772;

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
    msg.setTimeStamp(0.9589900592963296);
    msg.setSource(47933U);
    msg.setSourceEntity(33U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(3U);
    msg.command = 229U;
    msg.htime = 0.9886873300668948;

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
    msg.setTimeStamp(0.3261838498948747);
    msg.setSource(20233U);
    msg.setSourceEntity(60U);
    msg.setDestination(34291U);
    msg.setDestinationEntity(224U);
    msg.op = 234U;
    msg.file.assign("RGBINAKUPFBJUABQVSFYLYHPMJFABXUVWJDOLJUQKUPLLPCDZVCQOOKYTUHIYJLQXXKPBVECJFSWYRTBZWQC");

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
    msg.setTimeStamp(0.8739826594406811);
    msg.setSource(23573U);
    msg.setSourceEntity(84U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(49U);
    msg.op = 171U;
    msg.file.assign("DMDKQRVLEKQWYNQBCHLDAGSPOVDICUYOFFTBAVQMKWOLSOYRTOMUTZPWHJYKGPMLBVWFJNKIJFXSCNWSFPUTLKAGCRZSQENGHORZYFSAEBCIVLKOHSRGIOQTYWMXTYPRXADPGJOBUZVBGFXUTNOHGXDQCPMKGDJUUXSKSBXQIWZREIXGEXWMARLNBLUDCAZA");

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
    msg.setTimeStamp(0.08525590303790664);
    msg.setSource(3966U);
    msg.setSourceEntity(161U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(20U);
    msg.op = 104U;
    msg.file.assign("ZLXWJRRETIHTZWQSYYOWVQXEWINPJOCQKMFIDRSCZGIFBPATBTVSVXDUMADKQQVQKOVNHGOKUHHFXLMKZAVKXPRGNPAKVVBYZCLMBSYPNGUXDQONBSJDGOFHDJJEHWBKATUQLWTAEMNLMAPIU");

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
    msg.setTimeStamp(0.3188770311231396);
    msg.setSource(52207U);
    msg.setSourceEntity(43U);
    msg.setDestination(46505U);
    msg.setDestinationEntity(47U);
    msg.op = 208U;
    msg.clock = 0.47963973358860534;
    msg.tz = 92;

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
    msg.setTimeStamp(0.5250446309150094);
    msg.setSource(33716U);
    msg.setSourceEntity(179U);
    msg.setDestination(42751U);
    msg.setDestinationEntity(11U);
    msg.op = 149U;
    msg.clock = 0.26347772433753214;
    msg.tz = -87;

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
    msg.setTimeStamp(0.780216589103653);
    msg.setSource(46967U);
    msg.setSourceEntity(26U);
    msg.setDestination(14457U);
    msg.setDestinationEntity(87U);
    msg.op = 111U;
    msg.clock = 0.06956670100439954;
    msg.tz = -38;

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
    msg.setTimeStamp(0.09954591801499657);
    msg.setSource(34712U);
    msg.setSourceEntity(169U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.8963804615974568);
    msg.setSource(9749U);
    msg.setSourceEntity(116U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.21707880295827475);
    msg.setSource(51490U);
    msg.setSourceEntity(72U);
    msg.setDestination(52734U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.6613691915932847);
    msg.setSource(55368U);
    msg.setSourceEntity(102U);
    msg.setDestination(51624U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("ZPLUGNYJSGYLMVOCMCJDVFQXPBENLZKQYAJRNBRPIMYCNSHAQYDSAOIIXKKDSMHVJXCYFLJPWCXKCRRFJWHXKUEBEVRMZWSSOBVLEJSWFZCKVJBKSDTHXQHOEUGAPFWVTDD");
    msg.sys_type = 216U;
    msg.owner = 33545U;
    msg.lat = 0.15723556140484674;
    msg.lon = 0.07809592381895658;
    msg.height = 0.6163171554879202;
    msg.services.assign("BRZRKXHSKZTGYXPSECQOAECHELLOPDFWXBIAJLPZUKDZYAVCSIQQLYOYRDQQSGIJJGCMVGR");

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
    msg.setTimeStamp(0.29431170587931044);
    msg.setSource(56149U);
    msg.setSourceEntity(78U);
    msg.setDestination(36850U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("SRIVSIDSNPOLVXWLKGGIWLNAHWBNLYVXAMSMMFCEZKHXGPAFBFOKKFVLLNZXWPUXJUTPTIFCKQUHATIGGOSTDQZVYYHMZXRBRHEOKJYPCZCDESDJSVJBCJSJRUPDWCHUWKYPWSKOXCENHWTXBNATEQXUFORCNJMTRIGECRGQBZMDPKUHVDVMIIEQYJYDNFCJFDYIOLTGJOMDNLBZYNXUOZKPLYQBSGPAWHRBMEFQTQIZAREMAUAOR");
    msg.sys_type = 52U;
    msg.owner = 46924U;
    msg.lat = 0.22751334570909765;
    msg.lon = 0.36529144415386494;
    msg.height = 0.08328327389715195;
    msg.services.assign("TYAVWURWBZSKPFQXFOSDRPWOLKJZSHRFDIOQSLOXSPDCJWJBECYPGJUCFBRNJYEUNEYTZXAJYBTGHZJXMMYRZGAKOQGQNSPESPGVHJTEXUVSHZYUWXKKCKRDZINQWIVEATBGQRVPXRVRYCN");

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
    msg.setTimeStamp(0.6578849220986309);
    msg.setSource(49651U);
    msg.setSourceEntity(83U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("WBCNFDGXVDZKHKIROAERQSQFVJCYZUKGPSPQYNTEQBCSHWEYHUIFWVYVZMHHDJBIREHNBUKPSXIAXCPXLKIDYXOPPJMXQOTLMJWGHZRBQRSEZEOGFQCPDT");
    msg.sys_type = 19U;
    msg.owner = 53538U;
    msg.lat = 0.726796320836627;
    msg.lon = 0.9432281458621495;
    msg.height = 0.6764971727017953;
    msg.services.assign("LZPNURALLMTTJBISLCGDHNNIQMIQCKLGFACJXCFKWHEBOZWRCFCJJIPTAMKOSKDNQVVOHERTUOGCVYVGYQXJMYXYPHUBBKIGOSEOSFJYMAZZDCKAEUHQRFRXBIZWYIVPSKJFXUINWRHHOJLWMLXWWFGFDZTBJOUGNUMXQSRLVPSYNFYGSZPVJVAPTKPMEZBDLVVPITSNHAFUROIHUCYYQQOEGQQZTH");

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
    msg.setTimeStamp(0.9596791208870021);
    msg.setSource(9326U);
    msg.setSourceEntity(1U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(8U);
    msg.service.assign("LKCXYSGQQPJLHWJIBGEROGAFFVENFJVHZCAQJZRHNTDBMPTSOHPECKBAHKNGKOFWWYJIECMINVMHRIERXRMREFVCEGQXPXPFDFGVDRMKAYIXFNCCBZIAYACYSTZWDSMPJQONDWUOLMXNQKHSDMTKJVFDPLYYXWAOUULOPZIUQ");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.4231199635741909);
    msg.setSource(35526U);
    msg.setSourceEntity(148U);
    msg.setDestination(16313U);
    msg.setDestinationEntity(149U);
    msg.service.assign("FFKLYIJNUCEGJVGHMGAJWDAVUFFCBYESORMPAPAPHFKWCEOWWIRWQGEJXGPCXXANNPOKHNRQRCDVGPBTQJLTBZZWKNLIVNISJJEKMAMBTOXOZYJTMQGYFVUDQHBRVKEUERESEPMDDJLVVINZLUYUTXTVSBHSTMCOUSYIRDDNJZSHHLZMSIPFULWGVCQCTBZSIXEKPNZLADTYBOWZXLOGGODFRXZRCFMYHDPFHWHUAYKB");
    msg.service_type = 200U;

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
    msg.setTimeStamp(0.6110635000774601);
    msg.setSource(7859U);
    msg.setSourceEntity(225U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(170U);
    msg.service.assign("VTAMPLZBXRMWCYADVQEPRWQIBCKBCHHTGDWHXPKVNOMZMUZFTSOITELYXCKGLJJNTWFRMFRWDXFZUASBBFLOINQPHPKTXBAVRKQPGETCGVASNXBIWUMECLALLRTJDQUFTYTOHS");
    msg.service_type = 214U;

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
    msg.setTimeStamp(0.770151222705638);
    msg.setSource(54521U);
    msg.setSourceEntity(157U);
    msg.setDestination(42287U);
    msg.setDestinationEntity(101U);
    msg.value = 0.13189145107715883;

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
    msg.setTimeStamp(0.47075926498274956);
    msg.setSource(41478U);
    msg.setSourceEntity(155U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9425813642111576;

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
    msg.setTimeStamp(0.6862436828513567);
    msg.setSource(21764U);
    msg.setSourceEntity(43U);
    msg.setDestination(33762U);
    msg.setDestinationEntity(206U);
    msg.value = 0.7485227898399237;

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
    msg.setTimeStamp(0.5834897258613524);
    msg.setSource(2808U);
    msg.setSourceEntity(121U);
    msg.setDestination(21934U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7756452734098266;

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
    msg.setTimeStamp(0.017917183318953755);
    msg.setSource(30514U);
    msg.setSourceEntity(123U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8191230291114738;

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
    msg.setTimeStamp(0.20912549276137649);
    msg.setSource(58049U);
    msg.setSourceEntity(197U);
    msg.setDestination(65281U);
    msg.setDestinationEntity(47U);
    msg.value = 0.8579536071787269;

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
    msg.setTimeStamp(0.04178375022503966);
    msg.setSource(11887U);
    msg.setSourceEntity(241U);
    msg.setDestination(10956U);
    msg.setDestinationEntity(137U);
    msg.value = 0.5587243049239494;

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
    msg.setTimeStamp(0.4230683830468015);
    msg.setSource(58094U);
    msg.setSourceEntity(180U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(22U);
    msg.value = 0.2731354550034053;

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
    msg.setTimeStamp(0.1573038466086194);
    msg.setSource(30804U);
    msg.setSourceEntity(23U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(147U);
    msg.value = 0.39374134859436083;

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
    msg.setTimeStamp(0.03349359844545585);
    msg.setSource(19950U);
    msg.setSourceEntity(71U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(61U);
    msg.number.assign("ABCEWUWECDQTZYJNLWMTWEHUKKVOGKOTKDKQJISYVKORGRVASVQYSTANRIOXRDOGGRZYXWHKCBZHRSMUVDAENGZSLLQWXTOYJCBZUAV");
    msg.timeout = 11940U;
    msg.contents.assign("HWRNIYXERTGPLZWRHBAXKZQXHYVGCQFLZLKKNNTKMYEXNESFIWLNMPNGDDLHBOLVBTA");

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
    msg.setTimeStamp(0.6550194952203432);
    msg.setSource(5098U);
    msg.setSourceEntity(149U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(207U);
    msg.number.assign("LRZLDJXBAUARGAIDKESSUJEZRWZUPPUVFWHTFCVKZZNLYWHGRBANBCJGNYJTTGVKCUDDISDJCINISRDTWKOFQUCTMYBLIEOVEIHFWCHDIMTLTKVQWHKGKRHMYSLGVMLSTJXOYXPRFEENUICCRMMRQSBSOGYQDQHFVPGNHFZPWFYUBEXBEFLKGUKPIQQXPCIAMOQMOP");
    msg.timeout = 58081U;
    msg.contents.assign("INKRBASWHWCJTSOZZANJTRXOAPYTQNWYATQGAEKRXBDWVZXOQIGDXJYGKKWCLWKHMQROJEMOMVSFSJQTVDBMPYNEFMKLRXUQDVXGAZYEI");

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
    msg.setTimeStamp(0.5990400670776316);
    msg.setSource(47878U);
    msg.setSourceEntity(167U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(197U);
    msg.number.assign("GLZFYDIJEUEXWHGSXHZDRHUOEORTPLMLICBGNOWVQOERCHCNAKKSXSMWTVGWAXVPALYQDIAMOBKQIFVQPSMOXFVPRPUDZDJTHAHN");
    msg.timeout = 31389U;
    msg.contents.assign("KHYEJGOHDWSAOTSJZCNHGPEVLKQZJXUIRYLWXMMHCSKEDXZPURXFGQTTUBZLRPZMPEWKUSHIMXSVGZDJDFQUNYQGINJXDLPBOQQVFMYCPMULAFKBVDPPUDEHGRHVTVWAAFAOTSQCDIOHNKZFEW");

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
    msg.setTimeStamp(0.7057514285359365);
    msg.setSource(43341U);
    msg.setSourceEntity(240U);
    msg.setDestination(10788U);
    msg.setDestinationEntity(176U);
    msg.seq = 2487064129U;
    msg.destination.assign("ZXGGHKPUKMQXLGWOYQEAGVWOSNIRB");
    msg.timeout = 56536U;
    const char tmp_msg_0[] = {10, 62, -103, -80, -54, 37, 72, -43, 30, 109, 64, -22, 89, 43, -128, -109, -75, -118, 79, 84, -49, -128, 81, 36, 38, 63, -32, 49, -126, 90, 28, -43, -101, -61, 25, -60, 112, 66, 78, 60, -23, 16, -91, -82, 0, 22, 111, -32, 91, -83, -107, -117, -19, -54, -44, 23, 3, -2, 95, -39, 31, -90, 34, -66, 41, -126, -84, -47, -67, -108, -11, 21, 85, -37, 37, -66, 91, -30, 5, -20, -19, 64, -8, 88, -62, 3, 33, -87, -48, 23, 107, -108, 121, -105, -39, -82, -74, -79, 27, 109, -74, 71, -101, 120, -37, 44, -81, 126, 0, 123, 109, -40, -60, 84, -110, 106};
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
    msg.setTimeStamp(0.07270140668551539);
    msg.setSource(28712U);
    msg.setSourceEntity(220U);
    msg.setDestination(28952U);
    msg.setDestinationEntity(170U);
    msg.seq = 1843042678U;
    msg.destination.assign("FDDXIFYLXQDAJADTJHZWI");
    msg.timeout = 1209U;
    const char tmp_msg_0[] = {42, -37, 73, 43, 113, -80, -40, -54, -92, -97, 3, 114, 78, -13, -98, 27, -40, -97, 0, 27, -8};
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
    msg.setTimeStamp(0.4795945882000132);
    msg.setSource(56560U);
    msg.setSourceEntity(163U);
    msg.setDestination(58731U);
    msg.setDestinationEntity(48U);
    msg.seq = 148313446U;
    msg.destination.assign("LSLRNKYCNEDKJTNVPGKZNUCMKZETDIVYIAAVJLIYSYWUENCNSDXZPWOSMHKUHMQGLCTEIXSJQHBAQAHZGZPRNOBVQYHWTPESTDJKSHXNBHXWVRTKWVFOYPPUBZFWTLOTXQZSRLMOJKDQEKSGPRQFYUWIOHDBBUOACAMFEBIGLMJRZRQQJEGXUDEUNYKOOTIPMZEIDCSFHAVFRYGAUCFPDJCVHXGWMCX");
    msg.timeout = 38820U;
    const char tmp_msg_0[] = {62, 116, 46, -25, 68, 60, -10, 102, -60, 105, -24, 74, -42, -6, 24, 104, 65, 116, 14, 16, -4, 24, -14, -81, -121, 91, 61, -79, -126, -80, 114, 23, 117, 58, -121, 53, 18, 39, 17, 88, 4, 7, 52, 27, 93, 88, -28, 20, -40, -59, 126, -27, 102, 95, 64, -98, 12, -116, 57, -123, 121, -41, -18, 69, 3, 54, 126, 117, 90, -123, 83, -14, 50, -1, -106, -53, 28, -3, 79, 16, -50, 123, 2, 116, -18, 123, 33, -11, 97, -76, -89, -126, 72, 29, -15, -110, 38, 112, 30, 77, 97, 45, 108, -29, 67, -88, 100, 81, 96, -59, -96, 73, 16, 88, -72, 123, -96, -87, -70, -77, 19, 95, 107, -128, 34, -53, -59, -47, -117, -115, -55, -12, 9, 59, -94, 108, 46, 126, -27, -117, 69, -57, 70, 82, -56, 63, -23, -55, -24, -99, 88, 2, 57};
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
    msg.setTimeStamp(0.1366090224301526);
    msg.setSource(29126U);
    msg.setSourceEntity(118U);
    msg.setDestination(5525U);
    msg.setDestinationEntity(146U);
    msg.source.assign("VDIZYELVYDZVZTKECHXDUQWKNARCPIARRPJFBZKAUQKFMHXHHVIGJYVBXDLAUXEQZONWBIKXNMXWHCAEMGRRAVLBFBYMUAJWCSLLUISHAGDGUZPQSGBTCBFIYQEOJUMEJQD");
    const char tmp_msg_0[] = {-92, 96, -74, 119, -21, -80, -103, -115, 84, -119};
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
    msg.setTimeStamp(0.31993692207601343);
    msg.setSource(30905U);
    msg.setSourceEntity(249U);
    msg.setDestination(59567U);
    msg.setDestinationEntity(177U);
    msg.source.assign("AZHLDQLJRNWPH");
    const char tmp_msg_0[] = {-20, 59, -86, -13, -120, 74, 52, 33, -43, 26, 20, 17, 28, -105, -37, 2, 121, 90, 43, -30, -79, -72, -8, 111, -108, -75, -62, -106, -48, -58, -49, -118, -39, -115, -123, -54, 8, 74, -80, 117, 40, -31, 56, 11, 102, 86, -123, 3, -66, 17, 97, -45, 30, -37, 17, 77, -4, 78, 37, -119, -119, 54, -69, 112, 89, 38, -38, 73, -122, -128, -124, -125, 53, 93, -57, 94, 66, 20, 19, 12, -74};
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
    msg.setTimeStamp(0.6438338745416625);
    msg.setSource(47689U);
    msg.setSourceEntity(61U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(220U);
    msg.source.assign("PXFBZZCTVMWKXYQZYTOUVNASHHZCBWNOKFJDMGNGVKRABIVETJCJRMGDJRMUANFKNLMTEQRLRVRDSUXSYIGJRNPQSTETLIHXYAKIRBHYIXFBCDKSUWYDHXOWWQEZIINQAJEMXQ");
    const char tmp_msg_0[] = {-92, -98, -43, -103, -65, 124, 97, 97, -75, 64, 33, -9, 121, -120, -29, -125, -70, -127, -69, -29, 12, 42, -70, -116, -42, 116, -9, 87, -49, 68, -34, 31, 88, -110, 58, 71, -56, -47, -36, -2, -35, 63, 44, 28};
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
    msg.setTimeStamp(0.3834276772720069);
    msg.setSource(60928U);
    msg.setSourceEntity(105U);
    msg.setDestination(20514U);
    msg.setDestinationEntity(248U);
    msg.seq = 2386919971U;
    msg.state = 6U;
    msg.error.assign("KKOCADAJDYDTDTNGHFIITBGJRUCAZDFOPYZMRLW");

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
    msg.setTimeStamp(0.5449216712192557);
    msg.setSource(16369U);
    msg.setSourceEntity(184U);
    msg.setDestination(28395U);
    msg.setDestinationEntity(141U);
    msg.seq = 3804209311U;
    msg.state = 87U;
    msg.error.assign("GIBUFHWCPPOCGQMLHLUYGYTCIRJRBWEQJAWFWKEZSOLDYFZVSNVHEPVJRXZHEKAMPVODPMDKCSAWUYXC");

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
    msg.setTimeStamp(0.32662722734980854);
    msg.setSource(40569U);
    msg.setSourceEntity(60U);
    msg.setDestination(712U);
    msg.setDestinationEntity(58U);
    msg.seq = 3865518250U;
    msg.state = 247U;
    msg.error.assign("HKDXUWBQJCA");

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
    msg.setTimeStamp(0.2612401148971064);
    msg.setSource(47526U);
    msg.setSourceEntity(43U);
    msg.setDestination(19093U);
    msg.setDestinationEntity(88U);
    msg.origin.assign("YHQBSTVMNTAGFVJAPPAUEQDJTLSPDFNEIKJFHTAFPAGWMIBCBAJLTWWGXKOWBKOHDJGZHGBUXPWRNFZDLHSZEFEPULQYVDWGEZJGOFODHRPSUNQUDUDBCSXIHOCXIOBLUXLNEFWAKIYCNVHFXRNGKKBWRLSYQYGMLBMTEMVYEOQLHTMWCKNQBVCZNRFCXJCZRACEMDRTSNYREVOUYRZTLZTQUVQWVKIRKXMA");
    msg.text.assign("AOUMXQZDYXAFLDUHVHYIZDAUFSNKDBIGRRCKKEBYLJOBXBPZMDUOITTIDJXPCGJWPUPNWJKWNVKYCGZYYYGMGJLQHXPSNBETUKQMNBYMSC");

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
    msg.setTimeStamp(0.35707339740452904);
    msg.setSource(56511U);
    msg.setSourceEntity(169U);
    msg.setDestination(11042U);
    msg.setDestinationEntity(186U);
    msg.origin.assign("VPTACDEOBGBYTQEGUPZVFOKEFVJUGQXCNF");
    msg.text.assign("BWHAUKQMMYZHFQCFSABALVHQFLOBABBIAYPOPCZOVLSOIZGRRQER");

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
    msg.setTimeStamp(0.8290708490579972);
    msg.setSource(331U);
    msg.setSourceEntity(148U);
    msg.setDestination(63414U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("NWCPHXKUGAKPYMVYZUTXQHAHGIZVVGKZMOPDRNJDQEBSDRRCGZUFGYOZUSNZFIQFVVJBRUBVKEWIELPACLCQMTOAYSTIW");
    msg.text.assign("TOKDUEPKYVIRHLIHUVZBUZEXKVTOMYHOXNUEPGWOKKEYXDVNUBOTTCJASYLYDNFIFTSMNYTHNXACHXZGSACGEXSRIOUQCTUSAQDWMMBVMZUCRIAVGUBFPOMWMLARNFRPWBOHGSQJBDIXFPJPQKMPALYLFZABCKQGGPJDQQNSVBDNJXKWAGZGAWGWZREJLEQJFIKXBRI");

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
    msg.setTimeStamp(0.7878962295105684);
    msg.setSource(18444U);
    msg.setSourceEntity(66U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("ORGSCQFNISVEAUJKGWNTZATZEABDSRIVUROJAREKEOMWXHIPZXWAFRYKHBQDNBMBOPVFXQPRWBJYLZINVEWFLDKNUMTWYZUURJKIGIBORNTHFQPZDIRQLKBCSDKPVADOEHXBXZJIAMVLUHNZTHVJNSWYXHKCAJPHGPJTUVMBSZUNWKCUOQMCNK");
    msg.htime = 0.794008172838676;
    msg.lat = 0.9996572911677463;
    msg.lon = 0.4408519601076877;
    const char tmp_msg_0[] = {32, -20, 17, -51, 26, -95, -28, -91, -35, 110, 115, 6, -104, 67, 6, 3, 59, -14, -77, -72, 75, 114, -20, 23, -43, -28, 26, 6, 123, -33, -54, -86, -127, -89, 97, -11, 2, -53, 76, -10, -43, 39, -103, 112, 71, -37, -101, -70, 97, 67, -104, -37, 118, -74, 84, -6, -100, -112, 109, 103, -6, 118, -49, -42, -120, 62, 11, -86, -124, -10, -17, 103, 92, 2, -44, -71, 57, 101, 21, 83, -55, 18, 24, 81, -78, 8, 30, -106, -72, -28, -35, -112, 98, 4, 32, 62, -16, -111, 26, 67, 107, -109, 4, 18, -52, -34, -110, 28, -88, 39, 94, -44, 103, 66, -100, -101, -96, -11, 99, 73, -70, -66, -31, 120, 112, 82, 116, 30, -90, -37, 90, -18, -82, -35, -98, 93, 1, 75, 26, 40, -60, 114, 122, 122, 18, -26, 33, -42, -63, 33, -78, 98, -22, -27, 100, 112, 64, -46, -69, 69, -10, 12, 1, -128, -106, -76, 62, -88, -75, 2, 114, 46, 56, 13, 38, -15, 112, 112, -16, -45, 70, -66, -80, 100, -17, -89, -1, -25, 82, 29, -84, 117, -124, 79, -83, 18, 7, 102, -71, -106, 62, -47, 93, 86, 54, -123, -36, 74, -120, -72, 91, -5, -38, -88, 109, -91, 39, 121, 38, -74, 34, 113, 100, 73, 45, 55, 29, 76, -65, 106, -100};
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
    msg.setTimeStamp(0.7626785176824468);
    msg.setSource(63365U);
    msg.setSourceEntity(162U);
    msg.setDestination(61073U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("KTJTWLSDWCWAICUIHVXLXTEQNZIPZDSQTNULQSMTFRLZCNREAMXAAQAUBPPYKSDYEVPYUHYYFC");
    msg.htime = 0.3397164495771393;
    msg.lat = 0.7546861667118455;
    msg.lon = 0.5109820134698172;
    const char tmp_msg_0[] = {98, 94, -48, 32, 91, 36, 61, 8, 84, -57, 65, 43, -48, -81, 44, -91, 37, 104, 37, -13};
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
    msg.setTimeStamp(0.3855971852364263);
    msg.setSource(42676U);
    msg.setSourceEntity(11U);
    msg.setDestination(55273U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("VUVWRGPSCBMVHEDROBIX");
    msg.htime = 0.2888763871976987;
    msg.lat = 0.004541297922853849;
    msg.lon = 0.3116923846971994;
    const char tmp_msg_0[] = {-10, 28, 25, 125, -86, 66, -20, -22, -44, 31, -93, 100, -107, -50, 79, -32, 37, 125, -97, 55, 87, -74, -30, 49, 43, -15, -11, -48, 19, -108, -116, -67, 83, 93, 105, 90, -128, 89, 88, 92, 22, 25, 34, -101, 37, 70, -104, 54, -48, -81, 62, 25, 61, -95, -48, -86, -45, -89, -73, 41, 78, -111, -69, -120, 118, 104, 34, -63, -119, -54, -66, -55, 106, 52, 105, -120, -120, -125, 24, 67, -36, -37, 114, -43, 93, -31, -70, 116, 114, -73, -8, 27, 110, -30, -88, 10, -53, -112, -82, -15, -45, -86, -118, -110, 58, 67, 98, 37, 34, 61, 72, 57, 68, -2, -70, -42, 89, 15, -30, 107, 15, -73, 27, 22, 8, 1, 43};
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
    msg.setTimeStamp(0.598763861126884);
    msg.setSource(39551U);
    msg.setSourceEntity(70U);
    msg.setDestination(3250U);
    msg.setDestinationEntity(26U);
    msg.req_id = 49721U;
    msg.ttl = 11375U;
    msg.destination.assign("UTOZAISIVMKWCOXCBDEORFKLWTKMHNVNPKFFGHCGUCVQIOEFSVXETYPVJQVFHLRMVXGIFMYREOYYLZZQBDJXNBDGWOLNNLRZMHQABBWDDUWGQZSKTOKAKRXVXEKSFNLEJYJLPADRGIMZJWECXDINGJUJMPAASRE");
    const char tmp_msg_0[] = {44, -125, 107, 92, 91, -32, -15, 99, -40, 93, 76, -42, 30, 120, 112, 67, 65, 15, -29, -105, -16, 74, -91, 86, -91, -104, 87, -36, 44, 90, 34, -48, -111, 80, -22, -84, -56, -112, -39, -53, 9, -50, 124, 40, 96, 51, -6, 96, -115, -99, -31, 18, 98, -17, 10, 13, -116, 32, 1, -99, 111, 83, -62, 9, -6};
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
    msg.setTimeStamp(0.6851352539578726);
    msg.setSource(836U);
    msg.setSourceEntity(153U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(169U);
    msg.req_id = 24376U;
    msg.ttl = 13558U;
    msg.destination.assign("MVGCDRHKJHF");
    const char tmp_msg_0[] = {-27, -68, 84, -119, -46, 51, -1, 75, -100, 41, -44, -111, 93, 92, -125, 6, 54, 20, -111, -89, -20, 45, 43, -66, 81, -33, -114, 114, -57, -111, 3, 41, 58, 37, 123, -118, -49, 20, 64, -11, 74, -13, -14, 19, 103, -77, -68, -31, 7, -3, 114, 91, 18, -50, 9, 102, -36, -126, 88, -105, -49, -91, -76, -80, -51, -111, 83, -24, -103, -1, 17, 89, 43, 55, -68, 36, 43, -107, -22, -43, -61, -99, -126, 89, 115, -38, 103, -88, -110, 13, -72, -105, -24, 73, 98, 117, 52, -99, 18, 82, -18, -112, 26, -45, 107, -97, -82, 27, -21, 85, -49, 61, 73, -44, -88, -124, -64, 59, -106, 64, 58, 80, -108, -69, 8, -114, -66, -106, -100, 73, 114, -88, 103, 94, 66, -27, 77, 105, 33, 125, 30, -4, 50, 5, 21, -32, 48, 50, -119, -111, -127, -63, -104, 20, 11, -41, -34, 35, -99, 45, 104, -15, -57, -76, -40, -53, 108, -77, -121, 84, 111, -40, -52, 102, -71, 115, -67, -62, -57, -127, -4, 73, -40, -62, 104};
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
    msg.setTimeStamp(0.630852127577228);
    msg.setSource(2271U);
    msg.setSourceEntity(221U);
    msg.setDestination(34182U);
    msg.setDestinationEntity(17U);
    msg.req_id = 46326U;
    msg.ttl = 7027U;
    msg.destination.assign("YIJXKTAFIWCFWFECPWMFZLLGRQCRRUUBYMHUXZPBMNTYSQMGVXDKLWOKCDDMKTWVJNMUJLPTNKHBXCKFDQOAZIOHLWZONHIJBTIABKDGOBLDVPGSDBLDPICQSAHUCNIICZRTHNXJMSUZKXMTRHHOVSZKRLYQWYASTAEGBTQEAMEIEHRUVJXZQNAMRJLWNEWOXVDRYVQBJF");
    const char tmp_msg_0[] = {76, -92, -85, 124, 122, -115, 104, 81, -21, 16, 88, 29, 21, -6, -16, 11, 31, -12, 35, 74, -44, 101, -105, -30, 109, 72, 3, 63, 106, 39, -39, -51, 104, 83, 95, 49, -49, 11, 83, -12, -106, -23, 43, 27, 103, -101, -101, 76, 101, 14, -20, 74, -8, 85, 34, -95, 58, 35, -16, 29, 110, -74, -107, 113};
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
    msg.setTimeStamp(0.6381065462946836);
    msg.setSource(59136U);
    msg.setSourceEntity(90U);
    msg.setDestination(24155U);
    msg.setDestinationEntity(232U);
    msg.req_id = 43524U;
    msg.status = 143U;
    msg.text.assign("HHDRJPWPDCQRXSZAZLULOOBNURMELUHVDYUFKKJKYCKOJVDVOWMDEMAIVGXGZFNOQAEIXEAPSOJROVXNSBCGVAVDGDCFETJTIVWFWLNNBNWECZYDRYUBWLFKQECLPLUKYTTFRBIWFFCGHGYRY");

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
    msg.setTimeStamp(0.6357638574080079);
    msg.setSource(2277U);
    msg.setSourceEntity(207U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(7U);
    msg.req_id = 33183U;
    msg.status = 207U;
    msg.text.assign("VOZKXQNBADDRPXAPMKNCSZGEZPTQVKDAGKFKVITTJLLAOAMBDCJRGVLQRPWTCGJLXYBFSOAWRAWTIZXXVXHSHJGSBVUBRNLFIUHKDDCKHFZESULNHMOZHCHYPVUWIJMNMNBHENXVEGTQIQBSQKZELFMLCVT");

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
    msg.setTimeStamp(0.6919691288311387);
    msg.setSource(44270U);
    msg.setSourceEntity(97U);
    msg.setDestination(19502U);
    msg.setDestinationEntity(55U);
    msg.req_id = 19585U;
    msg.status = 44U;
    msg.text.assign("RBPUYORFZNAPLEJAWHOUPUABCRGXMORXWTCKVQELIMQFROBCIKYKBPVPEOBDSBEGFGSHKGHPRYHSWALZBYJNXHFPAMSCATDANJHYLJCWZEZZQHVNHRQXFTRESCSDQDVBGBQYFZSICMDTKKDKNIWITLFERLUXMPBTQVVGODLVJPIFUIPXTWTJGOQZYWTUCDXMCSGGDKUIZCLZDUOVNENUWXZQMFYGHXJMJSVSNNVNMQMYITAREWUKYLKOFW");

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
    msg.setTimeStamp(0.652972705825486);
    msg.setSource(6405U);
    msg.setSourceEntity(34U);
    msg.setDestination(15908U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("TAUGYEAJTVLIQWEVBEOBQPRYWWFQIAGZDKVXOBMGIZVYJTQNQFZBIMSHGLWXPOZPXOVMHHHFSXSGWVOIRURDRYADZ");
    msg.links = 414843039U;

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
    msg.setTimeStamp(0.8285173813293073);
    msg.setSource(1146U);
    msg.setSourceEntity(60U);
    msg.setDestination(37816U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("MFXTCQTPMYLGPEURDEPNOPODXWQWBWAUSMUDUGAGALNHILGWWGRYDZSSLYKUTWSZBKETEBZBHHQNJVLYUPTPUJKFKCTCZSVIXJIYH");
    msg.links = 2182649774U;

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
    msg.setTimeStamp(0.33665091497902366);
    msg.setSource(45257U);
    msg.setSourceEntity(83U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("QJDSZSAOTLAVPKTLIGRFMLLDHDXGTZMMHKCSNWIAKSSPWMVEPYQOVQTDZWUEQEXOYFRJOBEXTMJRNNLMAJNWHUPEZQRIGUFCVDRUYIXEQNBHYINXHYIVEHBFGOAPVMWCWGYCBNZNZMMZAXTVLLKJBSOLDOANAPFFZHTCNGKYCXTEWPWOYBHWUBDQRSRJIFCRVRIDSF");
    msg.links = 1432690257U;

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
    msg.setTimeStamp(0.16321661211681504);
    msg.setSource(47537U);
    msg.setSourceEntity(17U);
    msg.setDestination(5462U);
    msg.setDestinationEntity(83U);
    msg.groupname.assign("RFQRWYQCUCSVPBQPMRDMYDWDXFADBVNTEGNIAZLUSYRLXFMNSOPENPTSPZKBJOWAG");
    msg.action = 40U;
    msg.grouplist.assign("BEFBFMJEQJBYPPSROSSXSBLAOODPZGMIJZOZECQUGDPRCPUOMURLTSRMKSICHIOEOTHXGGYBTWYCKPXFZLUDJVXNGUVLHWQAJALWZSDYQWAUVWTTHBRNIUEHINDAVLDDNNWJKKVIHCNFCSVMJQIUUCGRBVJYTWXIGWNNGVKYPHEOD");

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
    msg.setTimeStamp(0.9415356254310874);
    msg.setSource(43853U);
    msg.setSourceEntity(253U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(108U);
    msg.groupname.assign("UYQCNOUJZIRNZITXBRAMYGJSLTRFDEBNHUOXPRSGWAIDTPHNSXNPYCXVJTCZFDBLFWICJYOUHCHSUJVRWDOWMOLMWYIKYCQNAVVUGIWKBST");
    msg.action = 205U;
    msg.grouplist.assign("NIDRVUTCYNWCSRWEFRJSEMGFJAVFFHKAIVBNYKQYKLXDNWJHGGWWYLJIJCBPZGXEUMBMXDEZZIRGZLVFJFJOXXUYRPJFPUXIHRUGEZXYRDNQKFWQPOMMUTSOCLWVXRJDOSSSJQII");

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
    msg.setTimeStamp(0.9987056259894707);
    msg.setSource(38291U);
    msg.setSourceEntity(1U);
    msg.setDestination(31866U);
    msg.setDestinationEntity(39U);
    msg.groupname.assign("TBVDAQCUZSPMF");
    msg.action = 85U;
    msg.grouplist.assign("GRDHIDQYDRZGRWUHRAWIMIYOJAEBXWROAPMWABWYLZBMBBNVDLFHQCYJZGVGYSEEYSXULFFVKQLYYKSUHCQTEUAGFQVJRRSUNAEVWTTVJILSNCZXXBFQJOUEYOHGEDMILAWXTFROMPZKULXICNJIKPJEHLKPHKMO");

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
    msg.setTimeStamp(0.9439134477879798);
    msg.setSource(34480U);
    msg.setSourceEntity(106U);
    msg.setDestination(1880U);
    msg.setDestinationEntity(238U);
    msg.id = 177U;
    msg.range = 0.6115755603144957;

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
    msg.setTimeStamp(0.690935535606883);
    msg.setSource(26056U);
    msg.setSourceEntity(56U);
    msg.setDestination(24428U);
    msg.setDestinationEntity(43U);
    msg.id = 62U;
    msg.range = 0.6022587636421866;

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
    msg.setTimeStamp(0.1496403245520972);
    msg.setSource(36308U);
    msg.setSourceEntity(113U);
    msg.setDestination(50310U);
    msg.setDestinationEntity(239U);
    msg.id = 96U;
    msg.range = 0.5792883777976776;

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
    msg.setTimeStamp(0.049499889336794056);
    msg.setSource(62515U);
    msg.setSourceEntity(150U);
    msg.setDestination(16632U);
    msg.setDestinationEntity(145U);
    msg.tx = 27U;
    msg.channel = 34U;
    msg.timer = 46011U;

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
    msg.setTimeStamp(0.5666511504888386);
    msg.setSource(28952U);
    msg.setSourceEntity(200U);
    msg.setDestination(29505U);
    msg.setDestinationEntity(216U);
    msg.tx = 172U;
    msg.channel = 156U;
    msg.timer = 39800U;

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
    msg.setTimeStamp(0.6143862658722951);
    msg.setSource(39889U);
    msg.setSourceEntity(75U);
    msg.setDestination(7775U);
    msg.setDestinationEntity(15U);
    msg.tx = 235U;
    msg.channel = 198U;
    msg.timer = 12873U;

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
    msg.setTimeStamp(0.2946117784359278);
    msg.setSource(17164U);
    msg.setSourceEntity(206U);
    msg.setDestination(18657U);
    msg.setDestinationEntity(125U);
    msg.beacon.assign("UXGJJRVUGPCXBMHGSVBYFVSQETMLNPGTKCTWYQIIYCVVMMUDOJXGXONEXWKSOWSPVHMPTGIJHZWPFEAWLHQMNIQISZXIMAUOXUBXQFHLJNNJOAKDMARLCCBALCQVRLBWBYUEIYHRPWFYFTXFTCNZJBTOIQOEPDSKNNIWARV");
    msg.lat = 0.4952748728304406;
    msg.lon = 0.36775407460301346;
    msg.depth = 0.5187126520387285;
    msg.query_channel = 163U;
    msg.reply_channel = 37U;
    msg.transponder_delay = 22U;

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
    msg.setTimeStamp(0.39999396302128754);
    msg.setSource(56802U);
    msg.setSourceEntity(135U);
    msg.setDestination(5451U);
    msg.setDestinationEntity(145U);
    msg.beacon.assign("EXLDHFYLBTMFAHFRSLPZBLAQISWOUTKEEMJODXVSP");
    msg.lat = 0.22730501095658728;
    msg.lon = 0.8731548362299121;
    msg.depth = 0.11851295165749054;
    msg.query_channel = 79U;
    msg.reply_channel = 134U;
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
    msg.setTimeStamp(0.21326409614083575);
    msg.setSource(18675U);
    msg.setSourceEntity(66U);
    msg.setDestination(61037U);
    msg.setDestinationEntity(108U);
    msg.beacon.assign("DDJQYSJEHSGVFYVOLCRDRXSXKIWQWNJTTGLYQTMTSFHDCSZPZSNLMVIZHQHLLDEDCUSLBBJIBEABQTCRQMTHCGGXUOQWBFQVXAJBKFPNWOKCURFVVUOVZOXVBNDNIAHARPMXDTYOLTSCQZGWKYGHBMJKRMCZOZJMRDULHGSZFPZWEBQKY");
    msg.lat = 0.08202598889429391;
    msg.lon = 0.41116861063593124;
    msg.depth = 0.993485598165499;
    msg.query_channel = 240U;
    msg.reply_channel = 120U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.032454291559808945);
    msg.setSource(49959U);
    msg.setSourceEntity(176U);
    msg.setDestination(48848U);
    msg.setDestinationEntity(29U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.5272171740042407);
    msg.setSource(39584U);
    msg.setSourceEntity(36U);
    msg.setDestination(42592U);
    msg.setDestinationEntity(96U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.5565672219499879);
    msg.setSource(46714U);
    msg.setSourceEntity(60U);
    msg.setDestination(3698U);
    msg.setDestinationEntity(81U);
    msg.op = 155U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WYJRGORZYNSABNPIMLSRWERPBDXPDMIAGBXEAUSWYKNWJQZIIDECLIHESBNHUZNCWTNQFHZHFEOOTQLYTFVPSXGXOCJGFNVCZFJEKRWOUPRKWVFMEUOTZAHGKBJTTLGZXKMAELVMYFMPYUBLCDDDVHTSASLFZKSCILRZYRAGMQVFLUGKSBFKBGJKHPWQOUVXCRDHTUQTYXMDIQJGBWHUEPTOQQAOMVIXLXAZBWINUVYDV");
    tmp_msg_0.lat = 0.21398176794613188;
    tmp_msg_0.lon = 0.5864288088844382;
    tmp_msg_0.depth = 0.6317134162783079;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 113U;
    tmp_msg_0.transponder_delay = 185U;
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
    msg.setTimeStamp(0.6148012418844083);
    msg.setSource(20609U);
    msg.setSourceEntity(172U);
    msg.setDestination(1874U);
    msg.setDestinationEntity(35U);
    msg.address = 62U;

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
    msg.setTimeStamp(0.5203535631547159);
    msg.setSource(58155U);
    msg.setSourceEntity(184U);
    msg.setDestination(32117U);
    msg.setDestinationEntity(234U);
    msg.address = 60U;

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
    msg.setTimeStamp(0.7418130753857023);
    msg.setSource(9948U);
    msg.setSourceEntity(162U);
    msg.setDestination(49859U);
    msg.setDestinationEntity(35U);
    msg.address = 10U;

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
    msg.setTimeStamp(0.9860145954445516);
    msg.setSource(19924U);
    msg.setSourceEntity(164U);
    msg.setDestination(47095U);
    msg.setDestinationEntity(59U);
    msg.address = 127U;
    msg.status = 28U;
    msg.range = 0.857509935505395;

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
    msg.setTimeStamp(0.06871444926778847);
    msg.setSource(13229U);
    msg.setSourceEntity(97U);
    msg.setDestination(13879U);
    msg.setDestinationEntity(22U);
    msg.address = 186U;
    msg.status = 247U;
    msg.range = 0.5356675229500427;

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
    msg.setTimeStamp(0.030037745485058887);
    msg.setSource(6053U);
    msg.setSourceEntity(56U);
    msg.setDestination(9637U);
    msg.setDestinationEntity(242U);
    msg.address = 89U;
    msg.status = 162U;
    msg.range = 0.8851469115053082;

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
    msg.setTimeStamp(0.3932134184202931);
    msg.setSource(9708U);
    msg.setSourceEntity(179U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(33U);
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("NAPHHXSUGSQHKLWZHCJFFBEBBWNVTJYTXAORHMIUCDPZRGSCHVRUAYMRYIBWABJYCWEPJZIPUQSCCMRNUBVKHETDOGKAGCLTVOPQUMXYBJWXGMDKQEJLLYHQSZQQONIKJXQIXGUITDJFMPWTWEGIKBGCARYVKNZPNLTQNZTIOFGKUFFMFCOPKKMWDZERIATVUXZOXADFSEOSWSVYQYVRBJFHGEDJNBFODMPANTLV");
    tmp_msg_0.op = 232U;
    tmp_msg_0.lat = 0.1815733068433657;
    tmp_msg_0.lon = 0.6379873737061602;
    tmp_msg_0.height = 0.8760958251384878;
    tmp_msg_0.x = 0.37661449047466733;
    tmp_msg_0.y = 0.025414185207259465;
    tmp_msg_0.z = 0.9623699787161928;
    tmp_msg_0.phi = 0.32780943644649074;
    tmp_msg_0.theta = 0.11701896906581166;
    tmp_msg_0.psi = 0.9457504330633686;
    tmp_msg_0.vx = 0.10948139245787225;
    tmp_msg_0.vy = 0.8096531816978338;
    tmp_msg_0.vz = 0.021841509162294992;
    tmp_msg_0.p = 0.5230407477875936;
    tmp_msg_0.q = 0.2062618346459998;
    tmp_msg_0.r = 0.6244192899671158;
    tmp_msg_0.svx = 0.8749592921254378;
    tmp_msg_0.svy = 0.07385531983615379;
    tmp_msg_0.svz = 0.8912224421256427;
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
    msg.setTimeStamp(0.9875551964472217);
    msg.setSource(24765U);
    msg.setSourceEntity(115U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(109U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("TFRBEIAQJHBUSXFHCGWNVQDLSKHQCIOWNLXWSDMYCJOHCDFIJMXCZAFDDRYZJQYENUWCIVYHMNSTNCFZKHKLKTAAFFTYJQRLTMOEVLUBTGWXKUAQLRPGBHZTOYEQVHZGOUNGLVUJ");
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
    msg.setTimeStamp(0.5014840595100071);
    msg.setSource(23671U);
    msg.setSourceEntity(112U);
    msg.setDestination(20889U);
    msg.setDestinationEntity(114U);
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.9806261146531476;
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
    msg.setTimeStamp(0.6348366764298231);
    msg.setSource(54936U);
    msg.setSourceEntity(74U);
    msg.setDestination(63575U);
    msg.setDestinationEntity(252U);
    msg.enable = 245U;

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
    msg.setTimeStamp(0.34122523477827416);
    msg.setSource(23981U);
    msg.setSourceEntity(225U);
    msg.setDestination(17747U);
    msg.setDestinationEntity(207U);
    msg.enable = 170U;

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
    msg.setTimeStamp(0.16546626256478836);
    msg.setSource(50189U);
    msg.setSourceEntity(183U);
    msg.setDestination(31140U);
    msg.setDestinationEntity(92U);
    msg.enable = 145U;

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
    msg.setTimeStamp(0.5870934876878616);
    msg.setSource(43414U);
    msg.setSourceEntity(192U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(63U);
    msg.summary = 72U;
    msg.level = 119U;

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
    msg.setTimeStamp(0.9424717534895498);
    msg.setSource(49411U);
    msg.setSourceEntity(15U);
    msg.setDestination(34124U);
    msg.setDestinationEntity(150U);
    msg.summary = 54U;
    msg.level = 197U;

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
    msg.setTimeStamp(0.6308438190456437);
    msg.setSource(2063U);
    msg.setSourceEntity(205U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(219U);
    msg.summary = 69U;
    msg.level = 26U;

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
    msg.setTimeStamp(0.1824915087349792);
    msg.setSource(59285U);
    msg.setSourceEntity(197U);
    msg.setDestination(14876U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.23372675149499178);
    msg.setSource(33192U);
    msg.setSourceEntity(22U);
    msg.setDestination(4107U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.548239577950191);
    msg.setSource(22975U);
    msg.setSourceEntity(249U);
    msg.setDestination(41732U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.8680517941384844);
    msg.setSource(58315U);
    msg.setSourceEntity(182U);
    msg.setDestination(7040U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.06554205778261135);
    msg.setSource(44259U);
    msg.setSourceEntity(71U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.9920820154652532);
    msg.setSource(17525U);
    msg.setSourceEntity(185U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.1899426883804638);
    msg.setSource(28483U);
    msg.setSourceEntity(204U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(251U);
    msg.op = 91U;
    msg.system.assign("AWABQYZCFMJBMWSIPFAIJGVXUMBFWGPZPWTGEEYDASZPKFLVAWEYFFOTOTTGXZHKNISJZDBXMULLEEHYBVCAEKMTUWOMVAGQEUCWIIVQLPNNNNMSDJICHURCNTFTQYKIUYNRJQQJVGBAXQCZNZYXRMBLAUUOBWKOPMKD");
    msg.range = 0.14563297659844276;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4884396858790472;
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
    msg.setTimeStamp(0.4483428429536078);
    msg.setSource(31732U);
    msg.setSourceEntity(96U);
    msg.setDestination(10532U);
    msg.setDestinationEntity(192U);
    msg.op = 54U;
    msg.system.assign("IHPMKCEBUYECEAETRISEITAFTWJFPTSADNLQCOVBHHTVDJUYMQXVYJFODBNXZPJUAWYQLODZSMVRGRJLAKLSIFBRKGMIRUUXQJDNUMORKFYRHUCPTCXDGZJXLTNVPICKNSJNHWWWQGZGZ");
    msg.range = 0.13758626371621674;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("SMAWQQDNOEXYXZVKCLROGVFBFYYFQKLGSTBDSXPRDTUAYNDXPRQWZETINCCQCBKGZFZVZJAIAWJWUSXPBCENAKHNRBXNLSIGZXWHJPIVKXJPCKRMEUMWDNSHIODYWQMVUBKAQ");
    tmp_msg_0.value = 144U;
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
    msg.setTimeStamp(0.3150404579509105);
    msg.setSource(43463U);
    msg.setSourceEntity(239U);
    msg.setDestination(25076U);
    msg.setDestinationEntity(227U);
    msg.op = 168U;
    msg.system.assign("ZVIKWPGOTCRPUBFQQFIZFXDFJITBAIZJKUBSEGPQIDYHTXREYKCBUSVECSDGVJTJNZUNSODGZBVVBJOTIOTWRAYQNVJROHYEGRUPSJOUDWSYWWDSQXIWBXOPUXKMBYNQJLIHHKNFKXCLAROSFDTCNKGPUBPEJAQFPWMULGCAWXYMTOXSQFYNLVXHZE");
    msg.range = 0.698992777949088;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.op = 69U;
    tmp_msg_0.request_id = 45429U;
    tmp_msg_0.plan_id.assign("SQYMDUWUBKSFOAOWYXZPTFIHGLXACIAHFUYFXWWYAQVNHNLXTKBRKXSPANQBEFJQEWEZOJVJUKBSIAMGVAIJJSIRHBXDVQXSUNXQJHMWCCLBDTFLLIGNIOFJXDLEMYMODZROJGHMTTUEGURQCHHMRMLTDVNJOLRYMVPKFNEZIPHLEICRGTJKORPCTSORGYSWGAKBQFWDMBGZYDCVPEZZZQEXNDHK");
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7829660375671419;
    tmp_tmp_msg_0_0.lon = 0.8506425604302291;
    tmp_tmp_msg_0_0.height = 0.4088803363572665;
    tmp_tmp_msg_0_0.x = 0.08910975118471998;
    tmp_tmp_msg_0_0.y = 0.33441076909692236;
    tmp_tmp_msg_0_0.z = 0.36820522167905423;
    tmp_tmp_msg_0_0.phi = 0.7082181211631063;
    tmp_tmp_msg_0_0.theta = 0.3061629464725282;
    tmp_tmp_msg_0_0.psi = 0.2395322323085699;
    tmp_tmp_msg_0_0.u = 0.9684891989558403;
    tmp_tmp_msg_0_0.v = 0.08503416346077597;
    tmp_tmp_msg_0_0.w = 0.16377751138937646;
    tmp_tmp_msg_0_0.vx = 0.35742726931297986;
    tmp_tmp_msg_0_0.vy = 0.5864908154102351;
    tmp_tmp_msg_0_0.vz = 0.043433676866417636;
    tmp_tmp_msg_0_0.p = 0.7128794494684091;
    tmp_tmp_msg_0_0.q = 0.7701160418137274;
    tmp_tmp_msg_0_0.r = 0.8683501571568356;
    tmp_tmp_msg_0_0.depth = 0.10955085186216862;
    tmp_tmp_msg_0_0.alt = 0.030561895954152818;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("NPEWGMFJZDK");
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
    msg.setTimeStamp(0.5151005681160011);
    msg.setSource(34449U);
    msg.setSourceEntity(60U);
    msg.setDestination(42398U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.9543936830639177);
    msg.setSource(49556U);
    msg.setSourceEntity(108U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.5927127546007358);
    msg.setSource(62004U);
    msg.setSourceEntity(46U);
    msg.setDestination(36217U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.2554598356375599);
    msg.setSource(25375U);
    msg.setSourceEntity(128U);
    msg.setDestination(59767U);
    msg.setDestinationEntity(239U);
    msg.list.assign("HAZLQOBRCADVCFKSYOKVTPCUMDQTDCSWDIXCXNWRVUKMHGJJQAXSOBHJWZQHFLCXGKHCYKMEIGUPLOUJKJYDLRXEZQSIRHMVTTABIMTYXBPRTGGFZUXWFITNCJYMYMAVNAOYEWAHZKVELUYOUMHQXWSFUADNGDLMFFBDKEQPEZNQVHCLEYIRZXNLSAEZCOKXRSIGIROBSTPVQWPFJWKJWJAMNUBVSGEPGNHDNSPLOBPLVF");

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
    msg.setTimeStamp(0.10646450211931402);
    msg.setSource(9634U);
    msg.setSourceEntity(230U);
    msg.setDestination(20915U);
    msg.setDestinationEntity(163U);
    msg.list.assign("GBOCRWVJEJUNMZXSYQKPAUFVCNEEYOOLWXVDADTISZZWMTOABYEQZYKLMCPBQHWIIXUBPNHDJWQFMYSSTWHEVALTQVEGEDUSTBXCCFXLMGMZYGRILPYFKORRLOWYCALXXTNCUQGRGKQYXTXNINQJUHPTHCVDCZWSITMMNVFPRZJAIOZ");

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
    msg.setTimeStamp(0.5113220862878168);
    msg.setSource(48707U);
    msg.setSourceEntity(40U);
    msg.setDestination(52860U);
    msg.setDestinationEntity(139U);
    msg.list.assign("FACETCHMAFPXRYBBVQQSXWZMNXODEITBZMWWAGFDSFIPCJFNGXTXPPOMLIYZLXHXQVAQRUCGMNJHYTSZUVTYNRYOOHKSEIKMYNYNEIWXALTNWHGGSIUNDQKLJESKLBSMDKKSRZMFVBPTOQBGRHEZULMJWWDLSRVRUZQAIUAB");

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
    msg.setTimeStamp(0.21840034602687108);
    msg.setSource(4525U);
    msg.setSourceEntity(189U);
    msg.setDestination(40856U);
    msg.setDestinationEntity(205U);
    msg.value = 4299;

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
    msg.setTimeStamp(0.7620892388157848);
    msg.setSource(10952U);
    msg.setSourceEntity(198U);
    msg.setDestination(5815U);
    msg.setDestinationEntity(179U);
    msg.value = 4617;

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
    msg.setTimeStamp(0.12480923580196102);
    msg.setSource(44914U);
    msg.setSourceEntity(54U);
    msg.setDestination(46222U);
    msg.setDestinationEntity(114U);
    msg.value = 11561;

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
    msg.setTimeStamp(0.9990703761102068);
    msg.setSource(29741U);
    msg.setSourceEntity(102U);
    msg.setDestination(26646U);
    msg.setDestinationEntity(197U);
    msg.value = 0.5312973261828544;

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
    msg.setTimeStamp(0.361965630963776);
    msg.setSource(28501U);
    msg.setSourceEntity(186U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(230U);
    msg.value = 0.5594538450431835;

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
    msg.setTimeStamp(0.9913039818773479);
    msg.setSource(55823U);
    msg.setSourceEntity(129U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(105U);
    msg.value = 0.41757896044689724;

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
    msg.setTimeStamp(0.5312345000769317);
    msg.setSource(24398U);
    msg.setSourceEntity(164U);
    msg.setDestination(24254U);
    msg.setDestinationEntity(115U);
    msg.value = 0.13096555523484754;

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
    msg.setTimeStamp(0.12328484947804508);
    msg.setSource(44529U);
    msg.setSourceEntity(214U);
    msg.setDestination(43405U);
    msg.setDestinationEntity(138U);
    msg.value = 0.4352441409607706;

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
    msg.setTimeStamp(0.3368806178514767);
    msg.setSource(17012U);
    msg.setSourceEntity(161U);
    msg.setDestination(62953U);
    msg.setDestinationEntity(96U);
    msg.value = 0.933113375908599;

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
    msg.setTimeStamp(0.43978478562195955);
    msg.setSource(11133U);
    msg.setSourceEntity(131U);
    msg.setDestination(60465U);
    msg.setDestinationEntity(163U);
    msg.validity = 63472U;
    msg.type = 104U;
    msg.utc_year = 28452U;
    msg.utc_month = 199U;
    msg.utc_day = 127U;
    msg.utc_time = 0.4189184734052558;
    msg.lat = 0.3831027780413919;
    msg.lon = 0.12251542594949871;
    msg.height = 0.41585105647936027;
    msg.satellites = 25U;
    msg.cog = 0.008610724035773454;
    msg.sog = 0.2564322503080533;
    msg.hdop = 0.4488163384863252;
    msg.vdop = 0.19946899974091215;
    msg.hacc = 0.07148824659598718;
    msg.vacc = 0.12765388701391045;

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
    msg.setTimeStamp(0.14798844469116001);
    msg.setSource(24744U);
    msg.setSourceEntity(233U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(45U);
    msg.validity = 28172U;
    msg.type = 47U;
    msg.utc_year = 26786U;
    msg.utc_month = 219U;
    msg.utc_day = 226U;
    msg.utc_time = 0.06471660080219532;
    msg.lat = 0.9769980956532334;
    msg.lon = 0.09055039536280196;
    msg.height = 0.9597736903551889;
    msg.satellites = 106U;
    msg.cog = 0.2595881209752935;
    msg.sog = 0.978657855435736;
    msg.hdop = 0.38388946182878203;
    msg.vdop = 0.9640061450181102;
    msg.hacc = 0.5025411561554074;
    msg.vacc = 0.8767353571639863;

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
    msg.setTimeStamp(0.6058708831404565);
    msg.setSource(54826U);
    msg.setSourceEntity(55U);
    msg.setDestination(42843U);
    msg.setDestinationEntity(21U);
    msg.validity = 60998U;
    msg.type = 135U;
    msg.utc_year = 2227U;
    msg.utc_month = 188U;
    msg.utc_day = 142U;
    msg.utc_time = 0.7794299501142907;
    msg.lat = 0.5598000032842472;
    msg.lon = 0.6356064122690351;
    msg.height = 0.7740589336776356;
    msg.satellites = 68U;
    msg.cog = 0.1101602360391698;
    msg.sog = 0.2339975239671781;
    msg.hdop = 0.8444505081276338;
    msg.vdop = 0.03458735549412073;
    msg.hacc = 0.777747254173862;
    msg.vacc = 0.7998217326169833;

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
    msg.setTimeStamp(0.16671837267851697);
    msg.setSource(18319U);
    msg.setSourceEntity(121U);
    msg.setDestination(59417U);
    msg.setDestinationEntity(175U);
    msg.time = 0.9647107417268541;
    msg.phi = 0.7541522120047899;
    msg.theta = 0.11182890413398994;
    msg.psi = 0.44114794845052085;
    msg.psi_magnetic = 0.17156115392067872;

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
    msg.setTimeStamp(0.37724914581095736);
    msg.setSource(7910U);
    msg.setSourceEntity(25U);
    msg.setDestination(12073U);
    msg.setDestinationEntity(199U);
    msg.time = 0.10424889935231874;
    msg.phi = 0.9854125949764497;
    msg.theta = 0.5840814005627678;
    msg.psi = 0.38330051931910925;
    msg.psi_magnetic = 0.6698633393265037;

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
    msg.setTimeStamp(0.5859245635774626);
    msg.setSource(59458U);
    msg.setSourceEntity(140U);
    msg.setDestination(33747U);
    msg.setDestinationEntity(122U);
    msg.time = 0.14502851041611076;
    msg.phi = 0.49515203555660814;
    msg.theta = 0.4872527011012562;
    msg.psi = 0.49558390470748626;
    msg.psi_magnetic = 0.24108218839502038;

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
    msg.setTimeStamp(0.6009976434210169);
    msg.setSource(27281U);
    msg.setSourceEntity(166U);
    msg.setDestination(5918U);
    msg.setDestinationEntity(239U);
    msg.time = 0.7100367784384363;
    msg.x = 0.6948625094096449;
    msg.y = 0.7986048481002391;
    msg.z = 0.24430120599797522;
    msg.timestep = 0.955510922063474;

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
    msg.setTimeStamp(0.17699883151660867);
    msg.setSource(25779U);
    msg.setSourceEntity(243U);
    msg.setDestination(56252U);
    msg.setDestinationEntity(226U);
    msg.time = 0.5048290680039381;
    msg.x = 0.2271487298358842;
    msg.y = 0.2717837214031472;
    msg.z = 0.8402498922783657;
    msg.timestep = 0.4633753280865719;

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
    msg.setTimeStamp(0.051854704579089694);
    msg.setSource(24690U);
    msg.setSourceEntity(91U);
    msg.setDestination(48066U);
    msg.setDestinationEntity(29U);
    msg.time = 0.3253346649651253;
    msg.x = 0.5259628875029903;
    msg.y = 0.7650715603416076;
    msg.z = 0.9019912371068329;
    msg.timestep = 0.18651421838500704;

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
    msg.setTimeStamp(0.9752402309998154);
    msg.setSource(49086U);
    msg.setSourceEntity(5U);
    msg.setDestination(18928U);
    msg.setDestinationEntity(3U);
    msg.time = 0.907735970399194;
    msg.x = 0.7196073563864362;
    msg.y = 0.21534787865209604;
    msg.z = 0.27567825845347693;

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
    msg.setTimeStamp(0.7514286717035281);
    msg.setSource(44112U);
    msg.setSourceEntity(61U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(84U);
    msg.time = 0.6756972722500636;
    msg.x = 0.20086989200610517;
    msg.y = 0.011082034262347329;
    msg.z = 0.42810281881768564;

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
    msg.setTimeStamp(0.16939289295890203);
    msg.setSource(15848U);
    msg.setSourceEntity(87U);
    msg.setDestination(13291U);
    msg.setDestinationEntity(248U);
    msg.time = 0.8403499342742419;
    msg.x = 0.9913995632400452;
    msg.y = 0.1993517701457117;
    msg.z = 0.17283383481911707;

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
    msg.setTimeStamp(0.4147657247873975);
    msg.setSource(46022U);
    msg.setSourceEntity(196U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(120U);
    msg.time = 0.6949978454832579;
    msg.x = 0.6049322092793195;
    msg.y = 0.15647037309873602;
    msg.z = 0.3974216981480533;

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
    msg.setTimeStamp(0.760877454513241);
    msg.setSource(24824U);
    msg.setSourceEntity(5U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(193U);
    msg.time = 0.33092096607638155;
    msg.x = 0.3481909129784244;
    msg.y = 0.6840439497963988;
    msg.z = 0.6836315566245003;

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
    msg.setTimeStamp(0.3466329708534407);
    msg.setSource(17392U);
    msg.setSourceEntity(168U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(172U);
    msg.time = 0.8090171803710077;
    msg.x = 0.6156862467498276;
    msg.y = 0.5401220972110398;
    msg.z = 0.048291840007807396;

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
    msg.setTimeStamp(0.8358724492306517);
    msg.setSource(12885U);
    msg.setSourceEntity(46U);
    msg.setDestination(8602U);
    msg.setDestinationEntity(226U);
    msg.time = 0.14369128343694748;
    msg.x = 0.4501706253045301;
    msg.y = 0.16934980408565048;
    msg.z = 0.7956912587823273;

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
    msg.setTimeStamp(0.9174030875879192);
    msg.setSource(51435U);
    msg.setSourceEntity(155U);
    msg.setDestination(25702U);
    msg.setDestinationEntity(130U);
    msg.time = 0.3411349367760339;
    msg.x = 0.8198767910848895;
    msg.y = 0.763230225745758;
    msg.z = 0.21568835664698538;

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
    msg.setTimeStamp(0.9237628535407157);
    msg.setSource(6485U);
    msg.setSourceEntity(174U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(96U);
    msg.time = 0.53028034226427;
    msg.x = 0.03798006963017875;
    msg.y = 0.41717587595389727;
    msg.z = 0.0772795333159132;

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
    msg.setTimeStamp(0.8216189097258911);
    msg.setSource(64005U);
    msg.setSourceEntity(52U);
    msg.setDestination(53963U);
    msg.setDestinationEntity(39U);
    msg.validity = 225U;
    msg.x = 0.4952407170027163;
    msg.y = 0.5676452919835663;
    msg.z = 0.0053539768109357455;

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
    msg.setTimeStamp(0.6187263276266837);
    msg.setSource(46789U);
    msg.setSourceEntity(89U);
    msg.setDestination(31975U);
    msg.setDestinationEntity(40U);
    msg.validity = 87U;
    msg.x = 0.4231301222728181;
    msg.y = 0.9663111935259568;
    msg.z = 0.9418471240114938;

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
    msg.setTimeStamp(0.9409395566786067);
    msg.setSource(57914U);
    msg.setSourceEntity(177U);
    msg.setDestination(30252U);
    msg.setDestinationEntity(162U);
    msg.validity = 96U;
    msg.x = 0.5205688376674409;
    msg.y = 0.6487894258471717;
    msg.z = 0.8752336076856885;

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
    msg.setTimeStamp(0.38166668746047594);
    msg.setSource(62359U);
    msg.setSourceEntity(231U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(123U);
    msg.validity = 173U;
    msg.x = 0.6196450320154698;
    msg.y = 0.11378870227889293;
    msg.z = 0.5146333326101732;

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
    msg.setTimeStamp(0.3831627720480134);
    msg.setSource(54989U);
    msg.setSourceEntity(227U);
    msg.setDestination(63574U);
    msg.setDestinationEntity(41U);
    msg.validity = 168U;
    msg.x = 0.15814545801291402;
    msg.y = 0.19338147124753913;
    msg.z = 0.8174529194628418;

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
    msg.setTimeStamp(0.8997677416687013);
    msg.setSource(58788U);
    msg.setSourceEntity(28U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(23U);
    msg.validity = 94U;
    msg.x = 0.9657885927719725;
    msg.y = 0.1588525283432125;
    msg.z = 0.5100399671879664;

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
    msg.setTimeStamp(0.36277483301169233);
    msg.setSource(43884U);
    msg.setSourceEntity(113U);
    msg.setDestination(20898U);
    msg.setDestinationEntity(116U);
    msg.time = 0.22334251598013344;
    msg.x = 0.06132168959339879;
    msg.y = 0.4818366290465078;
    msg.z = 0.379435263576154;

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
    msg.setTimeStamp(0.7252585058613152);
    msg.setSource(38088U);
    msg.setSourceEntity(224U);
    msg.setDestination(38558U);
    msg.setDestinationEntity(113U);
    msg.time = 0.5085226471622889;
    msg.x = 0.9680303888342561;
    msg.y = 0.7753231361093642;
    msg.z = 0.9215870436112732;

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
    msg.setTimeStamp(0.7641276367794995);
    msg.setSource(8394U);
    msg.setSourceEntity(230U);
    msg.setDestination(1393U);
    msg.setDestinationEntity(187U);
    msg.time = 0.8147862667661461;
    msg.x = 0.11249572759956517;
    msg.y = 0.15121559503011495;
    msg.z = 0.505560584518049;

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
    msg.setTimeStamp(0.5127754861011711);
    msg.setSource(6892U);
    msg.setSourceEntity(1U);
    msg.setDestination(27273U);
    msg.setDestinationEntity(223U);
    msg.validity = 162U;
    msg.value = 0.01851539024639315;

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
    msg.setTimeStamp(0.48770972702260673);
    msg.setSource(13538U);
    msg.setSourceEntity(190U);
    msg.setDestination(8455U);
    msg.setDestinationEntity(93U);
    msg.validity = 61U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8582173069733708;
    tmp_msg_0.y = 0.3442160109163739;
    tmp_msg_0.z = 0.21911475904859923;
    tmp_msg_0.phi = 0.3610977651242093;
    tmp_msg_0.theta = 0.6828792312279287;
    tmp_msg_0.psi = 0.1534502035177714;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7286921445711646;

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
    msg.setTimeStamp(0.030450710742696896);
    msg.setSource(3691U);
    msg.setSourceEntity(122U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(142U);
    msg.validity = 87U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8873440278181791;
    tmp_msg_0.beam_height = 0.9917165936305662;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.880593253636314;

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
    msg.setTimeStamp(0.6027045655272238);
    msg.setSource(25261U);
    msg.setSourceEntity(84U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3981061425396921;

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
    msg.setTimeStamp(0.5851914322966966);
    msg.setSource(55418U);
    msg.setSourceEntity(186U);
    msg.setDestination(15074U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8155663825056003;

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
    msg.setTimeStamp(0.7532897064196465);
    msg.setSource(25242U);
    msg.setSourceEntity(252U);
    msg.setDestination(63819U);
    msg.setDestinationEntity(254U);
    msg.value = 0.21116741579273823;

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
    msg.setTimeStamp(0.20921479501471296);
    msg.setSource(38731U);
    msg.setSourceEntity(119U);
    msg.setDestination(28351U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7939128171763334;

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
    msg.setTimeStamp(0.5606329105243583);
    msg.setSource(46795U);
    msg.setSourceEntity(231U);
    msg.setDestination(25771U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8090421299587858;

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
    msg.setTimeStamp(0.319716957184358);
    msg.setSource(64097U);
    msg.setSourceEntity(98U);
    msg.setDestination(39988U);
    msg.setDestinationEntity(230U);
    msg.value = 0.36440003935887466;

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
    msg.setTimeStamp(0.13273229090082306);
    msg.setSource(5886U);
    msg.setSourceEntity(216U);
    msg.setDestination(26159U);
    msg.setDestinationEntity(227U);
    msg.value = 0.8684710662098526;

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
    msg.setTimeStamp(0.9480666160271836);
    msg.setSource(64925U);
    msg.setSourceEntity(26U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(123U);
    msg.value = 0.9352585619920284;

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
    msg.setTimeStamp(0.01416244428393254);
    msg.setSource(13863U);
    msg.setSourceEntity(50U);
    msg.setDestination(28132U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8996527143887864;

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
    msg.setTimeStamp(0.25059374276112434);
    msg.setSource(44331U);
    msg.setSourceEntity(212U);
    msg.setDestination(61435U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7512961420632267;

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
    msg.setTimeStamp(0.3865193392836087);
    msg.setSource(14917U);
    msg.setSourceEntity(24U);
    msg.setDestination(10820U);
    msg.setDestinationEntity(132U);
    msg.value = 0.1430585927215149;

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
    msg.setTimeStamp(0.05886745869084631);
    msg.setSource(51773U);
    msg.setSourceEntity(7U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(13U);
    msg.value = 0.26109090934493673;

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
    msg.setTimeStamp(0.5773368671154703);
    msg.setSource(58425U);
    msg.setSourceEntity(237U);
    msg.setDestination(43799U);
    msg.setDestinationEntity(16U);
    msg.value = 0.9804905278019056;

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
    msg.setTimeStamp(0.3300364559078808);
    msg.setSource(9726U);
    msg.setSourceEntity(125U);
    msg.setDestination(1998U);
    msg.setDestinationEntity(241U);
    msg.value = 0.40632704199519554;

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
    msg.setTimeStamp(0.5226012519459815);
    msg.setSource(60879U);
    msg.setSourceEntity(109U);
    msg.setDestination(62526U);
    msg.setDestinationEntity(85U);
    msg.value = 0.7920527001962933;

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
    msg.setTimeStamp(0.1442888381279377);
    msg.setSource(63380U);
    msg.setSourceEntity(102U);
    msg.setDestination(40699U);
    msg.setDestinationEntity(132U);
    msg.value = 0.6658388061933279;

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
    msg.setTimeStamp(0.05640681838040018);
    msg.setSource(63984U);
    msg.setSourceEntity(54U);
    msg.setDestination(42446U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6208436548521525;

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
    msg.setTimeStamp(0.5156421735504594);
    msg.setSource(33530U);
    msg.setSourceEntity(202U);
    msg.setDestination(15923U);
    msg.setDestinationEntity(245U);
    msg.value = 0.2890573254465659;

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
    msg.setTimeStamp(0.6208142672417133);
    msg.setSource(16845U);
    msg.setSourceEntity(2U);
    msg.setDestination(63412U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7061247327595442;

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
    msg.setTimeStamp(0.6842480877524462);
    msg.setSource(22649U);
    msg.setSourceEntity(242U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5124160131688581;

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
    msg.setTimeStamp(0.5124152825096138);
    msg.setSource(51815U);
    msg.setSourceEntity(221U);
    msg.setDestination(26457U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5621724814875199;

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
    msg.setTimeStamp(0.6937038058482425);
    msg.setSource(19249U);
    msg.setSourceEntity(236U);
    msg.setDestination(4096U);
    msg.setDestinationEntity(225U);
    msg.value = 0.27494198926579394;

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
    msg.setTimeStamp(0.3810459023315118);
    msg.setSource(32814U);
    msg.setSourceEntity(198U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(234U);
    msg.value = 0.3842805198640884;

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
    msg.setTimeStamp(0.7676829000578069);
    msg.setSource(48635U);
    msg.setSourceEntity(106U);
    msg.setDestination(46988U);
    msg.setDestinationEntity(170U);
    msg.value = 0.11256385916157574;

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
    msg.setTimeStamp(0.5486445206633911);
    msg.setSource(27162U);
    msg.setSourceEntity(86U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(140U);
    msg.direction = 0.4868736684906908;
    msg.speed = 0.22749428646845204;
    msg.turbulence = 0.001595764275977296;

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
    msg.setTimeStamp(0.5587676395574472);
    msg.setSource(57092U);
    msg.setSourceEntity(3U);
    msg.setDestination(24698U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.4410501603595587;
    msg.speed = 0.3218569294081841;
    msg.turbulence = 0.7974033840158741;

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
    msg.setTimeStamp(0.7738579268134035);
    msg.setSource(34677U);
    msg.setSourceEntity(239U);
    msg.setDestination(45029U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.08172131860277954;
    msg.speed = 0.6939048403213184;
    msg.turbulence = 0.02956454511901263;

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
    msg.setTimeStamp(0.1632937452520744);
    msg.setSource(14647U);
    msg.setSourceEntity(123U);
    msg.setDestination(23949U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5023635706635258;

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
    msg.setTimeStamp(0.7800558706575687);
    msg.setSource(5384U);
    msg.setSourceEntity(170U);
    msg.setDestination(30711U);
    msg.setDestinationEntity(56U);
    msg.value = 0.11056822094823704;

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
    msg.setTimeStamp(0.13403998209686252);
    msg.setSource(39214U);
    msg.setSourceEntity(4U);
    msg.setDestination(43556U);
    msg.setDestinationEntity(163U);
    msg.value = 0.8404075308962867;

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
    msg.setTimeStamp(0.35921561271589497);
    msg.setSource(23865U);
    msg.setSourceEntity(27U);
    msg.setDestination(24302U);
    msg.setDestinationEntity(74U);
    msg.value.assign("GYOCDHQUTAJNBRWVRZUBISKZXFKTOWVPZWSZLBFZELTHDGJRCUMWFREJFPPHCVGNYQGADADMFBUTUYJQRQYGLJDXUOGZ");

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
    msg.setTimeStamp(0.05783401522714571);
    msg.setSource(49070U);
    msg.setSourceEntity(158U);
    msg.setDestination(25976U);
    msg.setDestinationEntity(64U);
    msg.value.assign("HJZYLZPHTSIJOVKCLSKM");

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
    msg.setTimeStamp(0.41552578174945);
    msg.setSource(15328U);
    msg.setSourceEntity(98U);
    msg.setDestination(25008U);
    msg.setDestinationEntity(204U);
    msg.value.assign("KJQTWTLPNAZTILIPAFUVEYYWZYBOSKGRBUCGMINCWRYAGZDAGLBPCPMBXXIYJCPHVURYMNWHUQYAOVWJRKSMEKROOAQBSVSVITFMDADOTVCPAMYGZFACWILLOIULFSXCZXNFPGZXKNQLMDHVSHDLYJTEHADEXFORRQOFRRNUZOQWSINKQEECUTHLFBETKZTBQSPVTOXFKVKDHRXZIZLPHJEJWHNJPCHGNMQQBGEN");

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
    msg.setTimeStamp(0.5882426573593472);
    msg.setSource(64915U);
    msg.setSourceEntity(18U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(244U);
    const char tmp_msg_0[] = {91, 44, -123, -70, -86, 61, 12, 116, 117, -126, -104, -26, -98, -107, 84, 8, -70, 68, -18, -66, 40, -22, 34, 4, 64, 61, -31, -123, -104, 94, -103, 79, 92, -16, 34, -51, 118, 2, -112, -78, 76, -39, -26, -106, 47, 14, -101, -77, 47, -110, 12, -121, -98, 92};
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
    msg.setTimeStamp(0.7298967794074637);
    msg.setSource(50547U);
    msg.setSourceEntity(23U);
    msg.setDestination(17416U);
    msg.setDestinationEntity(116U);
    const char tmp_msg_0[] = {29, -120, 82, 90, 2, 69, -85, -27, 117, 106, -103, -61, -16, -2, 118, 61, -82, -97, 106, 36, 0, 73, 67, -109, -2, 66, -114, -16, -25, 56, 70, -56, 24, -45, 56, -86, 43, -35, -8, 112, 30, 47, 79, -127, 90, 66, 49, 37, -41, -5, -18, -105, -39, -12, -119, -11, -22, 112, 71, 55, -123, -36, 27, 25, -95, 69, 106, 29, 1, -36, -25, 6, -83, -64, -123, -103, 19, 19, -5, -25, -11, 102, 77, -91, -21, 62, -2, -69, -26, 21, -81, 24, -43, 107, 77, -20, 103, -12, 75, 19, -85, 27, 57, -122, 112, 119, 95, 20, -80, -3, 10, 92, 80, 100, -40, 18, 71, -29, -91, -66, -113, -108, -49, 63, 47, 3, -40, 0, 74, -89, 46, 119, 103, 78, -124, -83, 77, 59, -14, 28, 45, 62, -17, -69, 51, 94, 60, 26, 48, -51, 11, -19, 55, 92, -18, 88, 113, -4, 32, 5, -127, 80, -71, -27, 41, 37, -107, -3, 58, 58, 80, 30, -101, 29, -53, 102};
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
    msg.setTimeStamp(0.25943436465423386);
    msg.setSource(62338U);
    msg.setSourceEntity(106U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(11U);
    const char tmp_msg_0[] = {-69, 103, 114, 86, -47, 20, -105, 95, 106, 45, -76, -7, -58, -3, -95, -79, -5, 14, -61, 117, 121, -36, -81, 67, -18, -72, 4, -106, -41, -72, -62, -112, -4, 38, 66, 79, 55, -44, -109, -37, 48, -65, 25, -86, 35, -63, -74, 20, 91, -55, 104, -108, -118, -8, 89, -10, -109, -72, 54, 91, -3, -120, -43, -94, -107, -47, 1, -55, 13, -68, -42, -22, 14, 119, -58, -16, 29, -62, 96, 40, 118, -66, -35, 38, -38, -14, -52, -58, -67, -50, -87, -39, -14, -36, -54, -85, -95, -111, 55, -2, -15, 37, 62, -46, -23, -90, -86, 33, 66, -25, -109, -66, 18, 116, 63, -34, 25, 6, -42, 111, -21, -18, 78, 124, 63, -8, -56, -12, -95, 16, 67, 53, -26, -30, 77, -122, -13, -1, -103, -122, -116, -1, 20, 82, 30, 126, 32, -117, -54, -35, -31, 66, 52, 15, -71, -102, 79, 3, -70, 74, -114, 22, -3, -26, -107, 66, -125, -72, -28, 11, 107, -117, 104, 19, 49, -85, -104, 98, 61, -88, -49, 96, 51, -63, 79, 124, -59, 56, 119, -6, 96, 124, -126, -114, 49, -81, 42, -118, -86, -74, -92, 112, -99, 57, 41, 16, 63, -22, -58, -27, -37, 125, 26, 53, 35, -75, -3, 121, 67, -65, 66, 7, -126, 100, 64, -127, -36, -17, 55, -93, -16, -92, -75, 123, 40, 126, 48, -35, -36, -54, -52, 7, 96, 64, -38, 119, -6, -52, 17};
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
    msg.setTimeStamp(0.1928048045670423);
    msg.setSource(24732U);
    msg.setSourceEntity(188U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(124U);
    msg.frequency = 3886542343U;
    msg.min_range = 29500U;
    msg.max_range = 61515U;

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
    msg.setTimeStamp(0.8009496622247524);
    msg.setSource(61938U);
    msg.setSourceEntity(182U);
    msg.setDestination(34388U);
    msg.setDestinationEntity(247U);
    msg.frequency = 1101736146U;
    msg.min_range = 23286U;
    msg.max_range = 8034U;

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
    msg.setTimeStamp(0.7410180352799925);
    msg.setSource(22952U);
    msg.setSourceEntity(65U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(122U);
    msg.frequency = 1426238168U;
    msg.min_range = 19024U;
    msg.max_range = 2988U;

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
    msg.setTimeStamp(0.34811369806625525);
    msg.setSource(50070U);
    msg.setSourceEntity(97U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(188U);
    msg.type = 217U;
    msg.frequency = 1279584805U;
    msg.min_range = 59879U;
    msg.max_range = 6437U;
    msg.bits_per_point = 100U;
    msg.scale_factor = 0.974038497091417;
    const char tmp_msg_0[] = {66, 87, -34, -50, -72, 87, 112, -123, 30, -84, -54};
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
    msg.setTimeStamp(0.49980807353126055);
    msg.setSource(62144U);
    msg.setSourceEntity(169U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(204U);
    msg.type = 37U;
    msg.frequency = 335436689U;
    msg.min_range = 19746U;
    msg.max_range = 12760U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.8643256360697682;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8848026129538354;
    tmp_msg_0.beam_height = 0.4037757558672497;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {43, -79, 119, -42, -118, 40, -56, 98, 42, 85, 125, 90, -40, -67, 25, -42, 42, 68, -126, 119, -74, -112, -101, 26, -44, 95, -33, 48, -48};
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
    msg.setTimeStamp(0.6363924007877131);
    msg.setSource(62589U);
    msg.setSourceEntity(243U);
    msg.setDestination(22370U);
    msg.setDestinationEntity(39U);
    msg.type = 218U;
    msg.frequency = 1311339640U;
    msg.min_range = 8351U;
    msg.max_range = 39173U;
    msg.bits_per_point = 81U;
    msg.scale_factor = 0.5462465767350722;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9896816800517789;
    tmp_msg_0.beam_height = 0.5903652398076679;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-61, 53, -48, 55, 95, -121, -55, -77, -25, 72, 25, 55, -48, -9, -8, 61, 79, 121, -16, -125, 108, -3, -126, 110, -65, 96, -40, -122, -102, 114, -70, -38, 65, 106, 6, 70, 72, -121, 54, 46, 111, -113, 21, 74, -117, -37, -85, 48, 99, -56, -84, -54, -123, 51, 38, 72, 98, -1, 31, 101, 109, 28, -84, 29, -49, -66, 118, 23, 52, 68, 44, 97, -21, -8, -2, 23, 75, -101, 119, -19, 112, 105, 13, 33, -106, -94, 69, -32, -62, 107, 88, -42, 12, -10, -21, -13, 122, -56, -70, -61, -36, 56, 15, 63, -19, -21, 32, -64, -128, 50, -123, -117, -97, 105, -53, -93, 50, -4, 27, 21, -82, -59, 41, -41, 63, 56, -114, -94, -87, -106, 111, 19, -51, 42, 46, 45, -70, 72, 83, 30, 115, -23, 122, 79, -102, 69, -126, -99};
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
    msg.setTimeStamp(0.40136099342093023);
    msg.setSource(23969U);
    msg.setSourceEntity(1U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.11410072946577432);
    msg.setSource(13550U);
    msg.setSourceEntity(11U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.14716571437002268);
    msg.setSource(56112U);
    msg.setSourceEntity(77U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.7681038742261401);
    msg.setSource(64109U);
    msg.setSourceEntity(10U);
    msg.setDestination(33194U);
    msg.setDestinationEntity(89U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.2338593566426811);
    msg.setSource(12117U);
    msg.setSourceEntity(161U);
    msg.setDestination(11209U);
    msg.setDestinationEntity(22U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.9715994431759368);
    msg.setSource(35290U);
    msg.setSourceEntity(142U);
    msg.setDestination(1078U);
    msg.setDestinationEntity(238U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.3027287531847457);
    msg.setSource(14659U);
    msg.setSourceEntity(235U);
    msg.setDestination(956U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7545663842296072;
    msg.confidence = 0.48871405370209364;
    msg.opmodes.assign("DGDCSVIHFRFFYVIUQAJJPCJPOHSWFMOBFIROVKZNUWMJULRHZKCCNCMLEOXHMZTQRLNKXZHXKHWPXHGAQKBXMGIQTEOGVVQNPQRCBYYPMFIBNMOUBVPVYCYRTDNZLSWNUJYESKGLUGKBJWLHKTQMZDIETTEYWRETPOPYLDO");

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
    msg.setTimeStamp(0.6559390854594149);
    msg.setSource(10397U);
    msg.setSourceEntity(188U);
    msg.setDestination(47782U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8700315778807444;
    msg.confidence = 0.44464765661519223;
    msg.opmodes.assign("BBPBQADPZLKDGZGKWKAJCOQFOQCSSEFLUVNMNMHBBHOEZKKEUANFODWEWYDZYYIUQNHLUHJJEIHGPVSXBCIZXOCLGFJTLBJMTZENRGUYPRAPWDRZCOYKSERQUXZIFGTYDXKUABYCNNFYMGLMEOVSZDQDVGMRICX");

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
    msg.setTimeStamp(0.576026028392846);
    msg.setSource(62249U);
    msg.setSourceEntity(24U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(13U);
    msg.value = 0.10925348819283354;
    msg.confidence = 0.35450427131076645;
    msg.opmodes.assign("NZRWDFFLNPENLAHMKDTSXIZDWXHUYRSGXNNNHZLKGBRSJZSFYXYJZIBYLESVVPOQUGCMCKNEWISNQHDKJCXZXKJJYDLAICWJCFBXTOFVEIJYKEKSLVHDIDSHLLTYJHAOICUOQWBTQAFOQMCZBQZT");

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
    msg.setTimeStamp(0.24775179827136462);
    msg.setSource(59308U);
    msg.setSourceEntity(45U);
    msg.setDestination(60500U);
    msg.setDestinationEntity(171U);
    msg.itow = 509823159U;
    msg.lat = 0.8708276111753711;
    msg.lon = 0.3421562089917418;
    msg.height_ell = 0.9348395902865129;
    msg.height_sea = 0.33554455250480053;
    msg.hacc = 0.3226615220612047;
    msg.vacc = 0.2883495068566744;
    msg.vel_n = 0.33285351433374066;
    msg.vel_e = 0.03286209368372306;
    msg.vel_d = 0.9099854689201318;
    msg.speed = 0.7784981427891137;
    msg.gspeed = 0.30278825331878534;
    msg.heading = 0.9303340321564011;
    msg.sacc = 0.058471237752433125;
    msg.cacc = 0.7555288930938844;

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
    msg.setTimeStamp(0.23988306402580095);
    msg.setSource(35901U);
    msg.setSourceEntity(228U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(62U);
    msg.itow = 3593689685U;
    msg.lat = 0.4123965087967424;
    msg.lon = 0.4084106078612053;
    msg.height_ell = 0.6214590879305244;
    msg.height_sea = 0.6055554667189044;
    msg.hacc = 0.040447697597728705;
    msg.vacc = 0.833301803342634;
    msg.vel_n = 0.9846477456160277;
    msg.vel_e = 0.830944902314041;
    msg.vel_d = 0.5302345347856675;
    msg.speed = 0.7594723017212597;
    msg.gspeed = 0.0839588531047818;
    msg.heading = 0.8218605018996349;
    msg.sacc = 0.7104754590624336;
    msg.cacc = 0.10264455352263302;

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
    msg.setTimeStamp(0.6919051261530884);
    msg.setSource(2201U);
    msg.setSourceEntity(241U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(77U);
    msg.itow = 3627692506U;
    msg.lat = 0.1966589508940717;
    msg.lon = 0.15337738322350813;
    msg.height_ell = 0.12747112112501213;
    msg.height_sea = 0.3856189358222666;
    msg.hacc = 0.8024268034007782;
    msg.vacc = 0.09452382200296239;
    msg.vel_n = 0.521684734397423;
    msg.vel_e = 0.005844243782844427;
    msg.vel_d = 0.8450276897714896;
    msg.speed = 0.08136507983516461;
    msg.gspeed = 0.7415834920869758;
    msg.heading = 0.9194458356202801;
    msg.sacc = 0.43008354986725095;
    msg.cacc = 0.8099620662473466;

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
    msg.setTimeStamp(0.26187851049027766);
    msg.setSource(62467U);
    msg.setSourceEntity(132U);
    msg.setDestination(6221U);
    msg.setDestinationEntity(59U);
    msg.id = 180U;
    msg.value = 0.9273622870030656;

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
    msg.setTimeStamp(0.7605490289579311);
    msg.setSource(51786U);
    msg.setSourceEntity(213U);
    msg.setDestination(44428U);
    msg.setDestinationEntity(182U);
    msg.id = 114U;
    msg.value = 0.34752148505368174;

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
    msg.setTimeStamp(0.4881807392998462);
    msg.setSource(54605U);
    msg.setSourceEntity(21U);
    msg.setDestination(25213U);
    msg.setDestinationEntity(206U);
    msg.id = 154U;
    msg.value = 0.5111811803922679;

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
    msg.setTimeStamp(0.009821380913368705);
    msg.setSource(39384U);
    msg.setSourceEntity(95U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(45U);
    msg.x = 0.34194014809802564;
    msg.y = 0.8949210822415129;
    msg.z = 0.8538884305129341;
    msg.phi = 0.6805839828558329;
    msg.theta = 0.3441963200733268;
    msg.psi = 0.012615221348861616;

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
    msg.setTimeStamp(0.0715316147581021);
    msg.setSource(27081U);
    msg.setSourceEntity(220U);
    msg.setDestination(63238U);
    msg.setDestinationEntity(247U);
    msg.x = 0.8912817899881146;
    msg.y = 0.9069525631008356;
    msg.z = 0.6372312191908223;
    msg.phi = 0.9750245079797907;
    msg.theta = 0.9072457028693337;
    msg.psi = 0.609071077834538;

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
    msg.setTimeStamp(0.839149962591683);
    msg.setSource(42179U);
    msg.setSourceEntity(149U);
    msg.setDestination(3120U);
    msg.setDestinationEntity(198U);
    msg.x = 0.12064223157879628;
    msg.y = 0.5950206226180347;
    msg.z = 0.23191021293595804;
    msg.phi = 0.33131341758562394;
    msg.theta = 0.5617234560939238;
    msg.psi = 0.6801253776136511;

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
    msg.setTimeStamp(0.5424866193299893);
    msg.setSource(53136U);
    msg.setSourceEntity(139U);
    msg.setDestination(62588U);
    msg.setDestinationEntity(27U);
    msg.beam_width = 0.7540435026794944;
    msg.beam_height = 0.9918887764492375;

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
    msg.setTimeStamp(0.8639182659114005);
    msg.setSource(33120U);
    msg.setSourceEntity(240U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.033822682791113445;
    msg.beam_height = 0.8797081493425185;

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
    msg.setTimeStamp(0.7401526814605729);
    msg.setSource(64456U);
    msg.setSourceEntity(0U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(185U);
    msg.beam_width = 0.3602893355661574;
    msg.beam_height = 0.33915021349661645;

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
    msg.setTimeStamp(0.3519970950475413);
    msg.setSource(26837U);
    msg.setSourceEntity(98U);
    msg.setDestination(29857U);
    msg.setDestinationEntity(218U);
    msg.sane = 90U;

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
    msg.setTimeStamp(0.5006331073416038);
    msg.setSource(18964U);
    msg.setSourceEntity(61U);
    msg.setDestination(25718U);
    msg.setDestinationEntity(151U);
    msg.sane = 147U;

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
    msg.setTimeStamp(0.10293680415171891);
    msg.setSource(52969U);
    msg.setSourceEntity(107U);
    msg.setDestination(51018U);
    msg.setDestinationEntity(3U);
    msg.sane = 6U;

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
    msg.setTimeStamp(0.32171728580996894);
    msg.setSource(47556U);
    msg.setSourceEntity(175U);
    msg.setDestination(23268U);
    msg.setDestinationEntity(106U);
    msg.id = 12U;
    msg.zoom = 47U;
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
    msg.setTimeStamp(0.13188543487039006);
    msg.setSource(25053U);
    msg.setSourceEntity(159U);
    msg.setDestination(55466U);
    msg.setDestinationEntity(197U);
    msg.id = 235U;
    msg.zoom = 216U;
    msg.action = 229U;

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
    msg.setTimeStamp(0.8594120964877877);
    msg.setSource(33966U);
    msg.setSourceEntity(139U);
    msg.setDestination(15798U);
    msg.setDestinationEntity(219U);
    msg.id = 93U;
    msg.zoom = 50U;
    msg.action = 248U;

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
    msg.setTimeStamp(0.8212720409805205);
    msg.setSource(50744U);
    msg.setSourceEntity(140U);
    msg.setDestination(3005U);
    msg.setDestinationEntity(79U);
    msg.id = 14U;
    msg.value = 0.03304084639973137;

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
    msg.setTimeStamp(0.280071995722717);
    msg.setSource(62735U);
    msg.setSourceEntity(205U);
    msg.setDestination(18343U);
    msg.setDestinationEntity(249U);
    msg.id = 52U;
    msg.value = 0.16449372143044638;

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
    msg.setTimeStamp(0.11074735870100061);
    msg.setSource(47569U);
    msg.setSourceEntity(160U);
    msg.setDestination(24993U);
    msg.setDestinationEntity(92U);
    msg.id = 213U;
    msg.value = 0.05656123122417478;

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
    msg.setTimeStamp(0.003291479203619274);
    msg.setSource(31990U);
    msg.setSourceEntity(34U);
    msg.setDestination(35281U);
    msg.setDestinationEntity(105U);
    msg.id = 197U;
    msg.value = 0.7507636655417542;

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
    msg.setTimeStamp(0.4090317519022918);
    msg.setSource(7730U);
    msg.setSourceEntity(23U);
    msg.setDestination(49938U);
    msg.setDestinationEntity(84U);
    msg.id = 148U;
    msg.value = 0.8169141646176953;

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
    msg.setTimeStamp(0.0013198425357840993);
    msg.setSource(7035U);
    msg.setSourceEntity(122U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(238U);
    msg.id = 134U;
    msg.value = 0.8579551767195512;

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
    msg.setTimeStamp(0.6758458143354082);
    msg.setSource(41399U);
    msg.setSourceEntity(231U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(223U);
    msg.id = 198U;
    msg.angle = 0.2972762845993755;

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
    msg.setTimeStamp(0.21188109395885568);
    msg.setSource(55330U);
    msg.setSourceEntity(209U);
    msg.setDestination(55505U);
    msg.setDestinationEntity(226U);
    msg.id = 225U;
    msg.angle = 0.8042955073894221;

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
    msg.setTimeStamp(0.3179357334710239);
    msg.setSource(51283U);
    msg.setSourceEntity(140U);
    msg.setDestination(40987U);
    msg.setDestinationEntity(107U);
    msg.id = 217U;
    msg.angle = 0.6551342928825471;

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
    msg.setTimeStamp(0.41168786603668395);
    msg.setSource(317U);
    msg.setSourceEntity(158U);
    msg.setDestination(19714U);
    msg.setDestinationEntity(196U);
    msg.op = 249U;
    msg.actions.assign("IMBFAFWUIHRFXCIHXEAZKSTLNPYOULRRXQZSDKWNUOETBRZXDVOAAAOTXWEECGQMLCBTIKETGXWVEGUWWPDIEXUFYFVVDVDUCKCEDJHGPCGJXTNRXSLTSZNZQCBGIOKTCBLYZYHYPRMFRJNTJHHKFSQAIHADMVDUJZSQOAVH");

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
    msg.setTimeStamp(0.5899210724511048);
    msg.setSource(31386U);
    msg.setSourceEntity(77U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(91U);
    msg.op = 119U;
    msg.actions.assign("UUJOZVLYWANKAWOZSEHRPDBYOSXQIGYRIJMPZBCZRVECCLUSTVIWWMRAPKLIEOLMLVNQSNQZYIUYGYLRAFTYHFMSOHJHTOSXIVNIKOAEVTKKNJTPHXVBAXPSHFFKEQGLUBBJBCDNTSXMHTWGAOIRKGFEZG");

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
    msg.setTimeStamp(0.37373778787442746);
    msg.setSource(57053U);
    msg.setSourceEntity(121U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(190U);
    msg.op = 22U;
    msg.actions.assign("ZTFDDUYSITAJBFRAFLJTCEGHOPFVZGGOAXCDNRFCSIEOQICSXMDQBRDEAQGHWIWAHWO");

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
    msg.setTimeStamp(0.9501011823148245);
    msg.setSource(9089U);
    msg.setSourceEntity(178U);
    msg.setDestination(27277U);
    msg.setDestinationEntity(175U);
    msg.actions.assign("BPABQONZQLJCBSLGULRIBVXPAXZBYMLOVMQBCHMYOGFJDQASOTNGGCKTFTYEMZBHAKXPKRWANJEYRSDXBHFLUYVOWSORESMUGXLIHTLKAOJQATFKYKPRQMMRERZSPFXKJBQUWAWDKZGNFSUUJFVIEMJUEPWVXYGOYZENWPCVQEGPYIZRIQUHVNVEMAZGNWCIQYELDDCFDSODCTOXFXSM");

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
    msg.setTimeStamp(0.3274242281075218);
    msg.setSource(32467U);
    msg.setSourceEntity(180U);
    msg.setDestination(808U);
    msg.setDestinationEntity(178U);
    msg.actions.assign("ABDGDLZGULAKEWSVSWNHTIMYUKB");

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
    msg.setTimeStamp(0.40986814696164653);
    msg.setSource(2298U);
    msg.setSourceEntity(187U);
    msg.setDestination(24697U);
    msg.setDestinationEntity(237U);
    msg.actions.assign("CFBIQOELKIBYSAFXEPXDDMBAFESAYUMCIQVHDWBALZMHUNBOPOJZTLLHBTZCHUZQBAXZMWRJROFKPKVQGEILCYWXEWEYGPXUTXJDVZGVEIUHGZTPKDRSKJOWTYGRPUOVOOGSVHBRHURSVALOIPFZCSSDIPNEJUFAHUCDNJFHKHQGNZZTJQFTLQCYGNGIJ");

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
    msg.setTimeStamp(0.7803052152424307);
    msg.setSource(46090U);
    msg.setSourceEntity(81U);
    msg.setDestination(211U);
    msg.setDestinationEntity(13U);
    msg.button = 15U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.5702500508169311);
    msg.setSource(18698U);
    msg.setSourceEntity(12U);
    msg.setDestination(58077U);
    msg.setDestinationEntity(144U);
    msg.button = 225U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.004368814180299441);
    msg.setSource(49263U);
    msg.setSourceEntity(80U);
    msg.setDestination(3815U);
    msg.setDestinationEntity(100U);
    msg.button = 183U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.5186703697180958);
    msg.setSource(42354U);
    msg.setSourceEntity(116U);
    msg.setDestination(37854U);
    msg.setDestinationEntity(64U);
    msg.op = 32U;
    msg.text.assign("EBISUUPPGKNAENTEICHRUVLEIYXTZXLEVSOHPTKVZZUBLDVNZCSQOYJEMFPEVPTOULDGAFHJCORJDLVJIBSXGPJJBIPSPRSHKANBVYKAMDFIQHLKHKGQJNXLYDEOMCTYIISLDFRYBNXIHAYFQRQXWCBKGOTEGWFQJUZKFMWAAUSTRWOVXTQLHOCURBDGSCFCQJANEAXVGHWRKWMCZKPDQVBHGDTZCSNRQMYRWXYLMJNOXZM");

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
    msg.setTimeStamp(0.7995684526461674);
    msg.setSource(17579U);
    msg.setSourceEntity(28U);
    msg.setDestination(21736U);
    msg.setDestinationEntity(46U);
    msg.op = 69U;
    msg.text.assign("SAJKDRYURSXPLHHWEJDQYMAEIGAITBIZCRBMTDWLNJMUVDMVSWKKBPZXJNUEQGWTKTHIXNHDFRJADAJYVSTEWSTGMZJFLEQYGKVMEWUBXXBAOKFVDZTAYSQZNGEWQYFOFKXPXOCDSGLNBXOKYFCRHEWIZNKXQWGUFNPDUGRFJYZVPQNGUFLYDPZ");

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
    msg.setTimeStamp(0.5171211435765161);
    msg.setSource(28811U);
    msg.setSourceEntity(150U);
    msg.setDestination(62313U);
    msg.setDestinationEntity(218U);
    msg.op = 90U;
    msg.text.assign("CTMSUTYQBURROMLPKVIYMVEPUUQWICQRNEPEEWGNBZLUGMQHTZMNAQKVXGXJAXHNKIDGCLPADCSLVYYYSDTWAEWFHSNLDBCWYZEUQVZBBFMCCLIYAGXSIUPRHJRKNCWOKJSQJWSB");

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
    msg.setTimeStamp(0.12656622006686458);
    msg.setSource(39374U);
    msg.setSourceEntity(187U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(36U);
    msg.op = 145U;
    msg.time_remain = 0.9834886304060658;
    msg.sched_time = 0.849871239093769;

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
    msg.setTimeStamp(0.39483219920285206);
    msg.setSource(14640U);
    msg.setSourceEntity(113U);
    msg.setDestination(28306U);
    msg.setDestinationEntity(52U);
    msg.op = 205U;
    msg.time_remain = 0.9205381387242813;
    msg.sched_time = 0.7226148587291776;

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
    msg.setTimeStamp(0.8047111547476791);
    msg.setSource(32269U);
    msg.setSourceEntity(83U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(215U);
    msg.op = 25U;
    msg.time_remain = 0.15388051749475595;
    msg.sched_time = 0.8631535228535985;

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
    msg.setTimeStamp(0.32266145229238574);
    msg.setSource(48341U);
    msg.setSourceEntity(221U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(57U);
    msg.name.assign("EIKUOCNGVSPNQRVYMGVFAHWISWMBWXYZFHEMTFNPFZAIEAFRPUUIYBRMPEGQYRAUDUUSHJOPOYXCTDYGODHOZQVHAZBNL");
    msg.op = 211U;
    msg.sched_time = 0.544885522069507;

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
    msg.setTimeStamp(0.8433747363427404);
    msg.setSource(20835U);
    msg.setSourceEntity(253U);
    msg.setDestination(39602U);
    msg.setDestinationEntity(86U);
    msg.name.assign("FVIAWQEJGRMQZATZEZDGIQEVKIZIFDGLJLEHTXYDNTBGCQKPXOBVTEHJAOGAFOJHZDIIMJMYTQBDRKCRUFPECKHBOCYIWNOWGBFWPXUUYARQVKVJSXSDUOWRIRXWYUELPUACSJOLKHSAIPWZKWBCYNRLMURNTCAYNISTZDGSPLTEUOHXBXDWFNHVPNSMWAOLFXHQCLF");
    msg.op = 95U;
    msg.sched_time = 0.45254311475992737;

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
    msg.setTimeStamp(0.16289318083087523);
    msg.setSource(7494U);
    msg.setSourceEntity(173U);
    msg.setDestination(1332U);
    msg.setDestinationEntity(168U);
    msg.name.assign("KODQYYMQRQZRCZUUTWGALDYHULJPMRALJZCCWFXUVWTWDVYNOAHWGLVNAXFBLXFAKPEWPZXNDDLWEZQSOJDZVUGGCQNHBEGUPXIYJLFTIHWIVYXUGKHXEFKSZHBFIMSOFBQZDRNNSAIIMIXCCIVRSHPHUGBMFBUWKODVBJDTTPOHUABYNTLEORWJMETMOMQYEQCTRZR");
    msg.op = 139U;
    msg.sched_time = 0.7921038813251445;

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
    msg.setTimeStamp(0.5555965693126133);
    msg.setSource(21894U);
    msg.setSourceEntity(252U);
    msg.setDestination(36829U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.12839721206486676);
    msg.setSource(49498U);
    msg.setSourceEntity(157U);
    msg.setDestination(59604U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.4625818495696288);
    msg.setSource(17260U);
    msg.setSourceEntity(131U);
    msg.setDestination(35455U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.23232423003651836);
    msg.setSource(17414U);
    msg.setSourceEntity(146U);
    msg.setDestination(63244U);
    msg.setDestinationEntity(226U);
    msg.name.assign("BIDPFZVAYPPDZBDTEGVSKLIYASOLVHHFUTQCSYBCVBMPOFTGTSDUNPJATZJELVVOIKFKQWAPOYQRGIUINMLZAHP");
    msg.state = 167U;

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
    msg.setTimeStamp(0.40616415957179697);
    msg.setSource(46126U);
    msg.setSourceEntity(246U);
    msg.setDestination(37370U);
    msg.setDestinationEntity(130U);
    msg.name.assign("YAWLJBAMQZSFJHFKGYMTURRCKQNVQNGVEEXIIXIDKSMGJYMCNCAWOMWYFFWBUNDEQPTGVORNWHEQHDBBBZOVHRDWVBUZXBFCYUQOWFMCNWEARGGZVKMALTSIDXJXSAGVTPUZPTYHKZJPFZLYXEPILPOFLKNVWFYWHYLOJQUPKMIAIACMXFJESTTBDKDGSABIPISCHPRDHDT");
    msg.state = 161U;

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
    msg.setTimeStamp(0.537129232555787);
    msg.setSource(17664U);
    msg.setSourceEntity(231U);
    msg.setDestination(24090U);
    msg.setDestinationEntity(99U);
    msg.name.assign("NMQCOVVLUEHTKBWRPTXEIZGDOHRAPNVPIRDGBMWRFHGMUFDXXNKFJZECCUZTBTWBJXUWPGWMJMNJFTEPGLECSRLSBAVTGNKYGBSADQAQPLEKKHYXHHVNLBLQFCQCRXKYHAMMZHQCTDIYSSGJYMYNQFTBJIDYUIRYBOZIUIAFVVOQEMXVAKRPSWZGFJGOBXTUPRQIANE");
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
    msg.setTimeStamp(0.9817805248140584);
    msg.setSource(54154U);
    msg.setSourceEntity(202U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(31U);
    msg.name.assign("FTWAYLJUFPZCMKYISVYNIWXFWGRSLVPSXUBQQJZZEHYIATKDODPS");
    msg.value = 62U;

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
    msg.setTimeStamp(0.09029155236309105);
    msg.setSource(64750U);
    msg.setSourceEntity(241U);
    msg.setDestination(54542U);
    msg.setDestinationEntity(40U);
    msg.name.assign("DHSNYVQALUGMFITFIFEBHYMUXLAHOQLSPLCOQZHGHPZNUGPZZHQOAZOT");
    msg.value = 16U;

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
    msg.setTimeStamp(0.5882427989497987);
    msg.setSource(50307U);
    msg.setSourceEntity(160U);
    msg.setDestination(8757U);
    msg.setDestinationEntity(215U);
    msg.name.assign("NIDHYJFWKKTDMLGDCWIDFPJIRHVOQRHMQVZDNSKJWAAIEDGBNHMZRRRXEWTUAWNTXACEKPIWBGPCLOXTISYBTYNVNFMXZMRODWYEQFBTDIOXVSKCSFMOLSSTQCUCHHGUVDJJBLFAGGIQXTNZKKYRFSJQBSEQBWUZLCNHVSONPVYQDCG");
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
    msg.setTimeStamp(0.7554562979108211);
    msg.setSource(62728U);
    msg.setSourceEntity(193U);
    msg.setDestination(48781U);
    msg.setDestinationEntity(254U);
    msg.name.assign("AHGHTRCPDIJOBRYWQKHMPKQJEZRFLILYSWIXDNUVWNTKDJHTKQWQQNVRXBGHVUGLTDDIZZCQLZUAPCVMPXBJIYPRJBAYDDOZXDBBBIIXKLCUMJCAQNMYGJAFRWJCFA");

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
    msg.setTimeStamp(0.2972587288392359);
    msg.setSource(31060U);
    msg.setSourceEntity(80U);
    msg.setDestination(37038U);
    msg.setDestinationEntity(228U);
    msg.name.assign("DGMEDCJODCRXBTJWBSFUXHWRGGFWODURZPYGNZQWKEHBPLFVZIOULQTXJTUPORJWSTIKZOJQPAVEDNPZOSBNHJAMEGXCKVFVHUXIXGBYZYFIMJKBBVSYKXITYCNSBRNFIYDKLUELNNXYVRPKFWHKLJEHRGMAWYSLEZIRGKONXVLMSBAITACUHSMZHJVLZVFRQIDWC");

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
    msg.setTimeStamp(0.3128057220012227);
    msg.setSource(36756U);
    msg.setSourceEntity(217U);
    msg.setDestination(63691U);
    msg.setDestinationEntity(74U);
    msg.name.assign("GSWCZDFTDQKJTAQAYAGWOFNADWDDZHMCYY");

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
    msg.setTimeStamp(0.6195081310783281);
    msg.setSource(9728U);
    msg.setSourceEntity(60U);
    msg.setDestination(52883U);
    msg.setDestinationEntity(33U);
    msg.name.assign("QEIPATHMPZWXEVKKCMGUZJELDPULZQAYCCPQIFRGFYOASOFCDWPQNGAYDPENHLZXDXPSYANFNRKJKGSXBWKVAVUQIAMSCPSADIJHVTFJZYQBBFLRGFSNGJGWVXUIMJMODWXUMDTASKJTCRSXEBIQODEMVYZRBSUBXKLIWOFHTYMHBCNIWGHLOWOTTZMZWCQXORPNTUHKAXNGQNYMHTZLKHVU");
    msg.value = 135U;

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
    msg.setTimeStamp(0.6605338581479239);
    msg.setSource(50926U);
    msg.setSourceEntity(172U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(204U);
    msg.name.assign("YKUOLDDQWXTFXYJYKLEVTSHWYOUMRLASXBBKPCJUWRJIKMGZZRKBXDBHRCLSFCZZKNUTQ");
    msg.value = 102U;

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
    msg.setTimeStamp(0.6381178279190871);
    msg.setSource(51256U);
    msg.setSourceEntity(222U);
    msg.setDestination(56245U);
    msg.setDestinationEntity(114U);
    msg.name.assign("XBSYJYSGXEKRVODCFPSFXZDCCPQFJWGLTGGFDWCXNLRNZVTABSENZRZIIZ");
    msg.value = 86U;

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
    msg.setTimeStamp(0.5318024145381672);
    msg.setSource(43665U);
    msg.setSourceEntity(241U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(178U);
    msg.id = 254U;
    msg.period = 1795202610U;
    msg.duty_cycle = 462620209U;

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
    msg.setTimeStamp(0.1849651461930102);
    msg.setSource(49245U);
    msg.setSourceEntity(114U);
    msg.setDestination(35404U);
    msg.setDestinationEntity(29U);
    msg.id = 83U;
    msg.period = 1107074529U;
    msg.duty_cycle = 3028155574U;

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
    msg.setTimeStamp(0.6865808543833578);
    msg.setSource(30210U);
    msg.setSourceEntity(118U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(44U);
    msg.id = 133U;
    msg.period = 1370745995U;
    msg.duty_cycle = 2395398165U;

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
    msg.setTimeStamp(0.9491824420437204);
    msg.setSource(11554U);
    msg.setSourceEntity(22U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(214U);
    msg.id = 52U;
    msg.period = 1044419505U;
    msg.duty_cycle = 2499533023U;

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
    msg.setTimeStamp(0.41357725475409446);
    msg.setSource(62681U);
    msg.setSourceEntity(205U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(40U);
    msg.id = 155U;
    msg.period = 3413673329U;
    msg.duty_cycle = 193181669U;

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
    msg.setTimeStamp(0.2628697292923219);
    msg.setSource(27552U);
    msg.setSourceEntity(248U);
    msg.setDestination(15496U);
    msg.setDestinationEntity(195U);
    msg.id = 30U;
    msg.period = 1841056572U;
    msg.duty_cycle = 3096595539U;

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
    msg.setTimeStamp(0.530576466863382);
    msg.setSource(55946U);
    msg.setSourceEntity(146U);
    msg.setDestination(26983U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.2478963495805755;
    msg.lon = 0.028174212623881978;
    msg.height = 0.9255287188175744;
    msg.x = 0.3062177157033462;
    msg.y = 0.046332569190861594;
    msg.z = 0.9719468711176235;
    msg.phi = 0.42420563790856847;
    msg.theta = 0.35415365798459375;
    msg.psi = 0.6395891620159456;
    msg.u = 0.2509097252754472;
    msg.v = 0.6214158487535009;
    msg.w = 0.46538647466537286;
    msg.vx = 0.08768669145267116;
    msg.vy = 0.6865613515434107;
    msg.vz = 0.5052618205504316;
    msg.p = 0.14292782427716788;
    msg.q = 0.32311976333132975;
    msg.r = 0.8674151781946723;
    msg.depth = 0.1334256733542052;
    msg.alt = 0.03243583770606062;

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
    msg.setTimeStamp(0.9611656105162032);
    msg.setSource(54342U);
    msg.setSourceEntity(198U);
    msg.setDestination(62293U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.630844164252235;
    msg.lon = 0.8682393675757416;
    msg.height = 0.3175913892690292;
    msg.x = 0.20894473076076392;
    msg.y = 0.09487571689060226;
    msg.z = 0.7966558186837879;
    msg.phi = 0.5457948774367734;
    msg.theta = 0.5079500591073368;
    msg.psi = 0.44689438986184227;
    msg.u = 0.13671121302013822;
    msg.v = 0.6642035127766545;
    msg.w = 0.9610404859624464;
    msg.vx = 0.6430294138495826;
    msg.vy = 0.9945546334027704;
    msg.vz = 0.9932415242340324;
    msg.p = 0.48365535410143035;
    msg.q = 0.8179158900588694;
    msg.r = 0.2975604677583693;
    msg.depth = 0.5875990448658535;
    msg.alt = 0.04283343134726414;

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
    msg.setTimeStamp(0.9342777340835043);
    msg.setSource(15693U);
    msg.setSourceEntity(150U);
    msg.setDestination(32799U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.09877744663278232;
    msg.lon = 0.6107322738672271;
    msg.height = 0.29779793766102935;
    msg.x = 0.30464546141723947;
    msg.y = 0.8691908343885622;
    msg.z = 0.7782872384667204;
    msg.phi = 0.26207545810013344;
    msg.theta = 0.4869833818646996;
    msg.psi = 0.8353295605970387;
    msg.u = 0.4072135019160007;
    msg.v = 0.3006837923451927;
    msg.w = 0.9760035183697524;
    msg.vx = 0.8419203573714116;
    msg.vy = 0.2385366798862053;
    msg.vz = 0.5090803421964264;
    msg.p = 0.2858575793153897;
    msg.q = 0.8757637945562375;
    msg.r = 0.017312452150502255;
    msg.depth = 0.311318507247228;
    msg.alt = 0.6727745814247337;

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
    msg.setTimeStamp(0.44142285674048043);
    msg.setSource(33791U);
    msg.setSourceEntity(106U);
    msg.setDestination(10259U);
    msg.setDestinationEntity(80U);
    msg.x = 0.410067929772434;
    msg.y = 0.22259330964445856;
    msg.z = 0.5952024962046907;

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
    msg.setTimeStamp(0.33507277115795275);
    msg.setSource(61931U);
    msg.setSourceEntity(147U);
    msg.setDestination(39599U);
    msg.setDestinationEntity(100U);
    msg.x = 0.10010601158660715;
    msg.y = 0.13162378360645588;
    msg.z = 0.4096792007157516;

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
    msg.setTimeStamp(0.27414974687815274);
    msg.setSource(48829U);
    msg.setSourceEntity(147U);
    msg.setDestination(28006U);
    msg.setDestinationEntity(200U);
    msg.x = 0.9424765863532929;
    msg.y = 0.9756961277125801;
    msg.z = 0.35351924609144914;

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
    msg.setTimeStamp(0.9778467439616568);
    msg.setSource(4579U);
    msg.setSourceEntity(106U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5391893738675451;

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
    msg.setTimeStamp(0.7267865538578145);
    msg.setSource(31647U);
    msg.setSourceEntity(239U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(193U);
    msg.value = 0.29423570447285163;

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
    msg.setTimeStamp(0.19841166055002302);
    msg.setSource(60470U);
    msg.setSourceEntity(154U);
    msg.setDestination(24328U);
    msg.setDestinationEntity(195U);
    msg.value = 0.6229305874204617;

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
    msg.setTimeStamp(0.9244746078027173);
    msg.setSource(2639U);
    msg.setSourceEntity(215U);
    msg.setDestination(41294U);
    msg.setDestinationEntity(238U);
    msg.value = 0.1680857142207648;

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
    msg.setTimeStamp(0.05930080704138985);
    msg.setSource(17809U);
    msg.setSourceEntity(33U);
    msg.setDestination(63901U);
    msg.setDestinationEntity(154U);
    msg.value = 0.4361005320551714;

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
    msg.setTimeStamp(0.9103654732148024);
    msg.setSource(8957U);
    msg.setSourceEntity(140U);
    msg.setDestination(26200U);
    msg.setDestinationEntity(145U);
    msg.value = 0.2798535527669064;

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
    msg.setTimeStamp(0.04160431511416807);
    msg.setSource(6730U);
    msg.setSourceEntity(151U);
    msg.setDestination(8014U);
    msg.setDestinationEntity(248U);
    msg.x = 0.8688080390935838;
    msg.y = 0.23245764866545304;
    msg.z = 0.1973138533309059;
    msg.phi = 0.4826939975478959;
    msg.theta = 0.8278582819078796;
    msg.psi = 0.23514300557154333;
    msg.p = 0.5268436568467033;
    msg.q = 0.09553975182466556;
    msg.r = 0.3167407247168391;
    msg.u = 0.149802508261341;
    msg.v = 0.5980431577737595;
    msg.w = 0.16750455763396277;
    msg.bias_psi = 0.251293255102619;
    msg.bias_r = 0.11258577123671232;

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
    msg.setTimeStamp(0.37571090137998153);
    msg.setSource(26582U);
    msg.setSourceEntity(239U);
    msg.setDestination(6605U);
    msg.setDestinationEntity(116U);
    msg.x = 0.4493671037274537;
    msg.y = 0.4562295307914267;
    msg.z = 0.8483195723685137;
    msg.phi = 0.5925479780318699;
    msg.theta = 0.48707588652536016;
    msg.psi = 0.4523796098222005;
    msg.p = 0.32759630545812357;
    msg.q = 0.4840258684531643;
    msg.r = 0.652333475020639;
    msg.u = 0.8046402007477005;
    msg.v = 0.7931498051533478;
    msg.w = 0.8119108711285338;
    msg.bias_psi = 0.2875395211354833;
    msg.bias_r = 0.6203706016024019;

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
    msg.setTimeStamp(0.4016893111694515);
    msg.setSource(25672U);
    msg.setSourceEntity(50U);
    msg.setDestination(25320U);
    msg.setDestinationEntity(217U);
    msg.x = 0.44238824662686227;
    msg.y = 0.2869094468793496;
    msg.z = 0.4582242747990839;
    msg.phi = 0.3563515240220382;
    msg.theta = 0.9604785840686176;
    msg.psi = 0.5477864618601828;
    msg.p = 0.789273943820831;
    msg.q = 0.002956259732511901;
    msg.r = 0.7154854756734403;
    msg.u = 0.0007085954148944307;
    msg.v = 0.9356423728293882;
    msg.w = 0.51994876503129;
    msg.bias_psi = 0.7190793986144901;
    msg.bias_r = 0.3390672236608252;

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
    msg.setTimeStamp(0.2108804971123266);
    msg.setSource(49727U);
    msg.setSourceEntity(5U);
    msg.setDestination(10620U);
    msg.setDestinationEntity(70U);
    msg.bias_psi = 0.30011120390854085;
    msg.bias_r = 0.443295957359333;
    msg.cog = 0.7362983477933658;
    msg.cyaw = 0.536795426442243;
    msg.lbl_rej_level = 0.5971392149607501;
    msg.gps_rej_level = 0.6195220108064349;
    msg.custom_x = 0.8161350911068024;
    msg.custom_y = 0.6095363792449027;
    msg.custom_z = 0.6931742067248221;

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
    msg.setTimeStamp(0.06431066628036763);
    msg.setSource(1829U);
    msg.setSourceEntity(16U);
    msg.setDestination(59395U);
    msg.setDestinationEntity(215U);
    msg.bias_psi = 0.144715615876868;
    msg.bias_r = 0.8557374898774673;
    msg.cog = 0.00227936065262202;
    msg.cyaw = 0.27694282396689496;
    msg.lbl_rej_level = 0.6988174553355196;
    msg.gps_rej_level = 0.14779728525016678;
    msg.custom_x = 0.45512185490054635;
    msg.custom_y = 0.8056965665377894;
    msg.custom_z = 0.17952525297387745;

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
    msg.setTimeStamp(0.7599852937772156);
    msg.setSource(2062U);
    msg.setSourceEntity(2U);
    msg.setDestination(5606U);
    msg.setDestinationEntity(195U);
    msg.bias_psi = 0.038595572964193914;
    msg.bias_r = 0.45781841449587823;
    msg.cog = 0.10755612350246924;
    msg.cyaw = 0.6697577660869721;
    msg.lbl_rej_level = 0.2821831661134203;
    msg.gps_rej_level = 0.6443562823085208;
    msg.custom_x = 0.4270590990559614;
    msg.custom_y = 0.42878783739361825;
    msg.custom_z = 0.6930628813464781;

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
    msg.setTimeStamp(0.41818810424525654);
    msg.setSource(51799U);
    msg.setSourceEntity(30U);
    msg.setDestination(46321U);
    msg.setDestinationEntity(5U);
    msg.utc_time = 0.41427047066188827;
    msg.reason = 132U;

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
    msg.setTimeStamp(0.6187676032451013);
    msg.setSource(55651U);
    msg.setSourceEntity(21U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(188U);
    msg.utc_time = 0.5647935118635734;
    msg.reason = 253U;

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
    msg.setTimeStamp(0.5431692040344208);
    msg.setSource(53809U);
    msg.setSourceEntity(173U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(13U);
    msg.utc_time = 0.025391779099718015;
    msg.reason = 79U;

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
    msg.setTimeStamp(0.3245375959254384);
    msg.setSource(5174U);
    msg.setSourceEntity(82U);
    msg.setDestination(45103U);
    msg.setDestinationEntity(131U);
    msg.id = 147U;
    msg.range = 0.7387209497789609;
    msg.acceptance = 10U;

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
    msg.setTimeStamp(0.10734689316014812);
    msg.setSource(36798U);
    msg.setSourceEntity(152U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(28U);
    msg.id = 154U;
    msg.range = 0.6411910309562663;
    msg.acceptance = 158U;

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
    msg.setTimeStamp(0.061494356008706674);
    msg.setSource(64326U);
    msg.setSourceEntity(39U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(246U);
    msg.id = 57U;
    msg.range = 0.2373024040065066;
    msg.acceptance = 145U;

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
    msg.setTimeStamp(0.26951128504351607);
    msg.setSource(57872U);
    msg.setSourceEntity(104U);
    msg.setDestination(56966U);
    msg.setDestinationEntity(95U);
    msg.type = 113U;
    msg.reason = 78U;
    msg.value = 0.2586843444975312;
    msg.timestep = 0.9398788063292899;

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
    msg.setTimeStamp(0.044683370625448915);
    msg.setSource(6568U);
    msg.setSourceEntity(34U);
    msg.setDestination(43034U);
    msg.setDestinationEntity(245U);
    msg.type = 90U;
    msg.reason = 137U;
    msg.value = 0.20443150887371575;
    msg.timestep = 0.4914698310156831;

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
    msg.setTimeStamp(0.06750113245295519);
    msg.setSource(63732U);
    msg.setSourceEntity(58U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(84U);
    msg.type = 37U;
    msg.reason = 228U;
    msg.value = 0.5424778716975558;
    msg.timestep = 0.17981490428364943;

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
    msg.setTimeStamp(0.5350982237823766);
    msg.setSource(23228U);
    msg.setSourceEntity(205U);
    msg.setDestination(57498U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.32971633687087465);
    msg.setSource(10455U);
    msg.setSourceEntity(78U);
    msg.setDestination(30823U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.07169562855753142);
    msg.setSource(2962U);
    msg.setSourceEntity(243U);
    msg.setDestination(6430U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.13799832176961657);
    msg.setSource(12580U);
    msg.setSourceEntity(253U);
    msg.setDestination(48389U);
    msg.setDestinationEntity(178U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PQBGVOPSRUHCIJTWZBRWADANTHOAIWQCNYKGNHTUXEYOAFPIPACGFACIDUSMJQFCJZVSLMRGWNIZEDQULFYXRCGR");
    tmp_msg_0.lat = 0.03087248579516466;
    tmp_msg_0.lon = 0.30040091685820003;
    tmp_msg_0.depth = 0.7021662239046602;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 231U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.33691287136141;
    msg.y = 0.15475303331591972;
    msg.var_x = 0.38907559316401397;
    msg.var_y = 0.7313643800919956;
    msg.distance = 0.3624838522707259;

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
    msg.setTimeStamp(0.8085181081834094);
    msg.setSource(32055U);
    msg.setSourceEntity(252U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(62U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YMDPDOYXYXFWMDKF");
    tmp_msg_0.lat = 0.3921419935399355;
    tmp_msg_0.lon = 0.7212538112862575;
    tmp_msg_0.depth = 0.898713700579015;
    tmp_msg_0.query_channel = 124U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 98U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0371844813555926;
    msg.y = 0.874827714632375;
    msg.var_x = 0.4264180968966105;
    msg.var_y = 0.530920763137287;
    msg.distance = 0.29655632930001274;

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
    msg.setTimeStamp(0.5252430939250486);
    msg.setSource(30570U);
    msg.setSourceEntity(148U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(52U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GVJUTHIKNAAGOCNJLQJLUIXQSERZCEDCBUTYDSNOQZYRYSPSNTHOPJLUHDMVICFFGABIESVCNWLAYQGMFROSVOFQELOMIQDSPCDNFTDPUHERHXXFAIEWKTKKMVVMNBIDLRNHLLXYBMFUZTHRZNJBHZKMOYKGYHSCWMWSMYIXWQPJYWI");
    tmp_msg_0.lat = 0.6713851917607894;
    tmp_msg_0.lon = 0.4332643797520721;
    tmp_msg_0.depth = 0.6035844590375642;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 240U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.47441894203366963;
    msg.y = 0.49637643520805674;
    msg.var_x = 0.5698435906600686;
    msg.var_y = 0.15614071086431613;
    msg.distance = 0.2690157975742302;

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
    msg.setTimeStamp(0.38630369310662827);
    msg.setSource(38604U);
    msg.setSourceEntity(45U);
    msg.setDestination(770U);
    msg.setDestinationEntity(68U);
    msg.state = 207U;

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
    msg.setTimeStamp(0.40733996579418363);
    msg.setSource(38337U);
    msg.setSourceEntity(14U);
    msg.setDestination(44413U);
    msg.setDestinationEntity(67U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.6230738498249088);
    msg.setSource(4800U);
    msg.setSourceEntity(26U);
    msg.setDestination(1265U);
    msg.setDestinationEntity(157U);
    msg.state = 222U;

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
    msg.setTimeStamp(0.5700040143226445);
    msg.setSource(2605U);
    msg.setSourceEntity(191U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(224U);
    msg.x = 0.029666500635880944;
    msg.y = 0.19540947117813023;
    msg.z = 0.08267485623519755;

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
    msg.setTimeStamp(0.4470159883013147);
    msg.setSource(16537U);
    msg.setSourceEntity(154U);
    msg.setDestination(21316U);
    msg.setDestinationEntity(130U);
    msg.x = 0.2696090292902684;
    msg.y = 0.7019330375564273;
    msg.z = 0.22117094647976343;

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
    msg.setTimeStamp(0.8343134727042949);
    msg.setSource(3029U);
    msg.setSourceEntity(89U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(80U);
    msg.x = 0.33358006976349686;
    msg.y = 0.3838237916874436;
    msg.z = 0.649059408613539;

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
    msg.setTimeStamp(0.9861879649465745);
    msg.setSource(9574U);
    msg.setSourceEntity(11U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(155U);
    msg.value = 0.23800863495362823;

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
    msg.setTimeStamp(0.5310536196293196);
    msg.setSource(31021U);
    msg.setSourceEntity(64U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(105U);
    msg.value = 0.2136394389790769;

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
    msg.setTimeStamp(0.5174675164038827);
    msg.setSource(28229U);
    msg.setSourceEntity(244U);
    msg.setDestination(32625U);
    msg.setDestinationEntity(206U);
    msg.value = 0.722607016326587;

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
    msg.setTimeStamp(0.16405682309082992);
    msg.setSource(48933U);
    msg.setSourceEntity(38U);
    msg.setDestination(16432U);
    msg.setDestinationEntity(15U);
    msg.value = 0.5940835134079928;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.4403631296105849);
    msg.setSource(40239U);
    msg.setSourceEntity(120U);
    msg.setDestination(40401U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5958983315499979;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.6967303757794644);
    msg.setSource(31715U);
    msg.setSourceEntity(202U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8652110469821435;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.39412350867569945);
    msg.setSource(12358U);
    msg.setSourceEntity(3U);
    msg.setDestination(31048U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5621194548533721;
    msg.speed_units = 235U;

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
    msg.setTimeStamp(0.9741417326167505);
    msg.setSource(36619U);
    msg.setSourceEntity(244U);
    msg.setDestination(7322U);
    msg.setDestinationEntity(17U);
    msg.value = 0.19258717104016798;
    msg.speed_units = 37U;

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
    msg.setTimeStamp(0.05013359726065836);
    msg.setSource(27035U);
    msg.setSourceEntity(184U);
    msg.setDestination(10385U);
    msg.setDestinationEntity(151U);
    msg.value = 0.7125127951895118;
    msg.speed_units = 28U;

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
    msg.setTimeStamp(0.9302195944371744);
    msg.setSource(49414U);
    msg.setSourceEntity(25U);
    msg.setDestination(15963U);
    msg.setDestinationEntity(167U);
    msg.value = 0.3028311065934326;

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
    msg.setTimeStamp(0.7952646263011305);
    msg.setSource(139U);
    msg.setSourceEntity(55U);
    msg.setDestination(25741U);
    msg.setDestinationEntity(23U);
    msg.value = 0.41908093282986225;

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
    msg.setTimeStamp(0.9527030911704942);
    msg.setSource(20613U);
    msg.setSourceEntity(251U);
    msg.setDestination(10984U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5305185849501259;

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
    msg.setTimeStamp(0.7854972185944294);
    msg.setSource(38435U);
    msg.setSourceEntity(13U);
    msg.setDestination(916U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5713981584857242;

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
    msg.setTimeStamp(0.26222720797800647);
    msg.setSource(39405U);
    msg.setSourceEntity(120U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8718483740750186;

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
    msg.setTimeStamp(0.8523829206261547);
    msg.setSource(45640U);
    msg.setSourceEntity(38U);
    msg.setDestination(14750U);
    msg.setDestinationEntity(247U);
    msg.value = 0.5409684725483328;

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
    msg.setTimeStamp(0.7953685844387555);
    msg.setSource(61624U);
    msg.setSourceEntity(165U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8131222439866573;

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
    msg.setTimeStamp(0.34643632905355004);
    msg.setSource(8143U);
    msg.setSourceEntity(124U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(240U);
    msg.value = 0.3574199588466046;

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
    msg.setTimeStamp(0.4459288127734463);
    msg.setSource(57541U);
    msg.setSourceEntity(206U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(188U);
    msg.value = 0.016043614376508364;

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
    msg.setTimeStamp(0.41235803819499806);
    msg.setSource(62093U);
    msg.setSourceEntity(32U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(193U);
    msg.start_lat = 0.4474016070334679;
    msg.start_lon = 0.9693429609908077;
    msg.start_z = 0.7901864646147493;
    msg.start_z_units = 131U;
    msg.end_lat = 0.7832024679397844;
    msg.end_lon = 0.9992232142114957;
    msg.end_z = 0.5151988307916902;
    msg.end_z_units = 56U;
    msg.speed = 0.44616573115271263;
    msg.speed_units = 104U;
    msg.lradius = 0.006438158434478147;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.504473620538078);
    msg.setSource(52374U);
    msg.setSourceEntity(35U);
    msg.setDestination(62012U);
    msg.setDestinationEntity(201U);
    msg.start_lat = 0.6536732538923273;
    msg.start_lon = 0.2958432868014872;
    msg.start_z = 0.018595415952586958;
    msg.start_z_units = 129U;
    msg.end_lat = 0.9757288668756886;
    msg.end_lon = 0.759106375192108;
    msg.end_z = 0.9197513924628637;
    msg.end_z_units = 109U;
    msg.speed = 0.011972028560946701;
    msg.speed_units = 39U;
    msg.lradius = 0.25818967712359375;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.2217390367160781);
    msg.setSource(19646U);
    msg.setSourceEntity(169U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(57U);
    msg.start_lat = 0.6388211398794001;
    msg.start_lon = 0.1837564181205984;
    msg.start_z = 0.7255833745175346;
    msg.start_z_units = 246U;
    msg.end_lat = 0.9567947744787788;
    msg.end_lon = 0.7278520053767361;
    msg.end_z = 0.8932893590604377;
    msg.end_z_units = 204U;
    msg.speed = 0.21597705849325988;
    msg.speed_units = 132U;
    msg.lradius = 0.18362018415976;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.700391902653779);
    msg.setSource(20448U);
    msg.setSourceEntity(253U);
    msg.setDestination(10127U);
    msg.setDestinationEntity(18U);
    msg.x = 0.908586955015638;
    msg.y = 0.8503529638970249;
    msg.z = 0.9784948854986969;
    msg.k = 0.23149308012433134;
    msg.m = 0.5618688826778163;
    msg.n = 0.3232357607382782;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.09028157122833158);
    msg.setSource(15303U);
    msg.setSourceEntity(224U);
    msg.setDestination(12137U);
    msg.setDestinationEntity(206U);
    msg.x = 0.19117485025588776;
    msg.y = 0.7416908067132932;
    msg.z = 0.0324426251343074;
    msg.k = 0.6346883405047855;
    msg.m = 0.25762993608517804;
    msg.n = 0.3427410152631196;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.8738553280365249);
    msg.setSource(44846U);
    msg.setSourceEntity(80U);
    msg.setDestination(53973U);
    msg.setDestinationEntity(31U);
    msg.x = 0.8025043774584065;
    msg.y = 0.743750308087649;
    msg.z = 0.07331306115032932;
    msg.k = 0.7706140485101309;
    msg.m = 0.9526936703003758;
    msg.n = 0.9512937133979625;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.7675142968376694);
    msg.setSource(25915U);
    msg.setSourceEntity(208U);
    msg.setDestination(1338U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9828260351059106;

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
    msg.setTimeStamp(0.37168511038340146);
    msg.setSource(60101U);
    msg.setSourceEntity(18U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(241U);
    msg.value = 0.7891296004104897;

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
    msg.setTimeStamp(0.03495319518419926);
    msg.setSource(37864U);
    msg.setSourceEntity(85U);
    msg.setDestination(50278U);
    msg.setDestinationEntity(74U);
    msg.value = 0.36647503911918944;

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
    msg.setTimeStamp(0.21325247749491028);
    msg.setSource(21759U);
    msg.setSourceEntity(67U);
    msg.setDestination(46891U);
    msg.setDestinationEntity(156U);
    msg.u = 0.07986756257505334;
    msg.v = 0.08267039344248017;
    msg.w = 0.33079193019944597;
    msg.p = 0.740890726941394;
    msg.q = 0.454459823631454;
    msg.r = 0.44676466835585404;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.159476005349518);
    msg.setSource(56331U);
    msg.setSourceEntity(100U);
    msg.setDestination(48490U);
    msg.setDestinationEntity(78U);
    msg.u = 0.08047564321380885;
    msg.v = 0.9926043059893972;
    msg.w = 0.13796607427571905;
    msg.p = 0.6500531597980397;
    msg.q = 0.17730658622723539;
    msg.r = 0.27620551256599435;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.8165598466505297);
    msg.setSource(6276U);
    msg.setSourceEntity(21U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(193U);
    msg.u = 0.6762351738599423;
    msg.v = 0.9390417981534563;
    msg.w = 0.43972493627524045;
    msg.p = 0.93153105344115;
    msg.q = 0.10727292573115421;
    msg.r = 0.2010055179901018;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.5242615300385436);
    msg.setSource(43015U);
    msg.setSourceEntity(136U);
    msg.setDestination(23485U);
    msg.setDestinationEntity(41U);
    msg.start_lat = 0.35424833472652517;
    msg.start_lon = 0.34400412538630487;
    msg.start_z = 0.35214950334124684;
    msg.start_z_units = 18U;
    msg.end_lat = 0.731371660015652;
    msg.end_lon = 0.7522653626086203;
    msg.end_z = 0.9067797017708522;
    msg.end_z_units = 151U;
    msg.lradius = 0.7405649446723207;
    msg.flags = 46U;
    msg.x = 0.949418146229298;
    msg.y = 0.842933518081855;
    msg.z = 0.008319624164011552;
    msg.vx = 0.15467794165494309;
    msg.vy = 0.10973265050165237;
    msg.vz = 0.15216518189704475;
    msg.course_error = 0.28504712404812327;
    msg.eta = 40508U;

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
    msg.setTimeStamp(0.3249146052065821);
    msg.setSource(30142U);
    msg.setSourceEntity(201U);
    msg.setDestination(43353U);
    msg.setDestinationEntity(216U);
    msg.start_lat = 0.3301955650092463;
    msg.start_lon = 0.44843115815613666;
    msg.start_z = 0.7846340501124495;
    msg.start_z_units = 31U;
    msg.end_lat = 0.6700352678531304;
    msg.end_lon = 0.09549845068633;
    msg.end_z = 0.7579037418945145;
    msg.end_z_units = 35U;
    msg.lradius = 0.12382296378974078;
    msg.flags = 101U;
    msg.x = 0.49329136253382666;
    msg.y = 0.7854770475818501;
    msg.z = 0.3859528323271496;
    msg.vx = 0.6843239771519269;
    msg.vy = 0.19718444581851458;
    msg.vz = 0.38947728023717687;
    msg.course_error = 0.3838977561839165;
    msg.eta = 10472U;

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
    msg.setTimeStamp(0.8112007498505441);
    msg.setSource(22511U);
    msg.setSourceEntity(30U);
    msg.setDestination(1338U);
    msg.setDestinationEntity(117U);
    msg.start_lat = 0.6224232345158534;
    msg.start_lon = 0.8704056124319537;
    msg.start_z = 0.4568286610770459;
    msg.start_z_units = 38U;
    msg.end_lat = 0.8734825988976859;
    msg.end_lon = 0.5801202603777756;
    msg.end_z = 0.5843263932497117;
    msg.end_z_units = 18U;
    msg.lradius = 0.6167318121428327;
    msg.flags = 94U;
    msg.x = 0.07278124403107611;
    msg.y = 0.3061434635271246;
    msg.z = 0.5119829331660499;
    msg.vx = 0.037763861173104374;
    msg.vy = 0.4226667078566745;
    msg.vz = 0.7771871949327721;
    msg.course_error = 0.09500333640510072;
    msg.eta = 31917U;

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
    msg.setTimeStamp(0.3164648742353474);
    msg.setSource(41023U);
    msg.setSourceEntity(32U);
    msg.setDestination(12630U);
    msg.setDestinationEntity(44U);
    msg.k = 0.14613040240160535;
    msg.m = 0.8673759758898231;
    msg.n = 0.8857945447127268;

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
    msg.setTimeStamp(0.688469215220758);
    msg.setSource(57362U);
    msg.setSourceEntity(43U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(161U);
    msg.k = 0.402370617703385;
    msg.m = 0.5109876393291948;
    msg.n = 0.6815989873498075;

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
    msg.setTimeStamp(0.17876121888617313);
    msg.setSource(44084U);
    msg.setSourceEntity(159U);
    msg.setDestination(28655U);
    msg.setDestinationEntity(207U);
    msg.k = 0.10208859268106851;
    msg.m = 0.6360803015051205;
    msg.n = 0.9469254577025346;

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
    msg.setTimeStamp(0.3200625663536484);
    msg.setSource(42654U);
    msg.setSourceEntity(238U);
    msg.setDestination(49161U);
    msg.setDestinationEntity(239U);
    msg.p = 0.48454496530365265;
    msg.i = 0.5339028635663953;
    msg.d = 0.18597100718602488;
    msg.a = 0.9304459639007079;

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
    msg.setTimeStamp(0.43106395455943536);
    msg.setSource(15296U);
    msg.setSourceEntity(83U);
    msg.setDestination(53164U);
    msg.setDestinationEntity(186U);
    msg.p = 0.9974420533913803;
    msg.i = 0.23320864320986812;
    msg.d = 0.7918570498530032;
    msg.a = 0.7214293741216735;

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
    msg.setTimeStamp(0.18057150036231606);
    msg.setSource(13761U);
    msg.setSourceEntity(118U);
    msg.setDestination(33094U);
    msg.setDestinationEntity(222U);
    msg.p = 0.6660604714886607;
    msg.i = 0.9230391751024032;
    msg.d = 0.9931016514278455;
    msg.a = 0.6488918156636508;

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
    msg.setTimeStamp(0.7062023493780701);
    msg.setSource(6536U);
    msg.setSourceEntity(158U);
    msg.setDestination(22641U);
    msg.setDestinationEntity(226U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.26192874416499723);
    msg.setSource(27855U);
    msg.setSourceEntity(116U);
    msg.setDestination(19476U);
    msg.setDestinationEntity(195U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.42897479672066297);
    msg.setSource(59658U);
    msg.setSourceEntity(214U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(147U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.5051495643538202);
    msg.setSource(32363U);
    msg.setSourceEntity(232U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(17U);
    msg.timeout = 50344U;
    msg.lat = 0.23303583963375418;
    msg.lon = 0.19607407742377592;
    msg.z = 0.7881832556032987;
    msg.z_units = 7U;
    msg.speed = 0.8654351096888127;
    msg.speed_units = 236U;
    msg.roll = 0.22061975088183194;
    msg.pitch = 0.9576926300555126;
    msg.yaw = 0.45764614372061285;
    msg.custom.assign("DYGEMEXDFWLKEQMYFQVRUBXXBPYGKMSPCJVDSGAPNMUMRWBYPNZQJJDUISGWBNTRHRZUTZJOYNUAXLUXASIKLDKSCLWHGKTXBFTBEZYGQOIYLAIKXIHKFCCZ");

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
    msg.setTimeStamp(0.8919291357850243);
    msg.setSource(23270U);
    msg.setSourceEntity(80U);
    msg.setDestination(8450U);
    msg.setDestinationEntity(187U);
    msg.timeout = 3286U;
    msg.lat = 0.0064719259101355675;
    msg.lon = 0.7129945428778628;
    msg.z = 0.6657280196338848;
    msg.z_units = 250U;
    msg.speed = 0.4568847702316652;
    msg.speed_units = 26U;
    msg.roll = 0.7836528494201276;
    msg.pitch = 0.28343082394054675;
    msg.yaw = 0.41995425363922945;
    msg.custom.assign("ZITUUMVDLZQESQGFBRJAFIIXEVDCHETOIPWSEBPMOMQVNOQXODGMQRHASWCQFVKJLZSVLBDNBXYUHUKTNGSKRMYPUPSRALTGF");

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
    msg.setTimeStamp(0.45095434214599694);
    msg.setSource(12473U);
    msg.setSourceEntity(154U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(250U);
    msg.timeout = 38666U;
    msg.lat = 0.7577822133903269;
    msg.lon = 0.23783457712437428;
    msg.z = 0.8742461951427113;
    msg.z_units = 98U;
    msg.speed = 0.4656631774057396;
    msg.speed_units = 91U;
    msg.roll = 0.10234518615210975;
    msg.pitch = 0.1076178857014578;
    msg.yaw = 0.7446273147207519;
    msg.custom.assign("GTTGZPDOJHXSNKNNBAEHXAYSUVREBPKLPFCSBITWWFHKKEVRJHEIUXGMCFYLESGQXIJDZFIVHPQFNSRKNQOVZGUUUJZMRCQCCFQHLWJFMTUCZEIHQAZJOTIVOYKMWVLLBQAOBHRLCIUYINDKFSYMSGAXMWFOIHXDTYXWNWULAKZISLGPRMOGAVUDUSKATVMRPTYGODPPPYOELDAXDZJQBETCYDGROZJXHNCAPRCMYBNTLVBQEJWWS");

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
    msg.setTimeStamp(0.2087553268912059);
    msg.setSource(20774U);
    msg.setSourceEntity(218U);
    msg.setDestination(62118U);
    msg.setDestinationEntity(244U);
    msg.timeout = 59535U;
    msg.lat = 0.7096753195475604;
    msg.lon = 0.2972255149181996;
    msg.z = 0.7892024996067515;
    msg.z_units = 72U;
    msg.speed = 0.2575597696462809;
    msg.speed_units = 160U;
    msg.duration = 60492U;
    msg.radius = 0.21721469827952533;
    msg.flags = 238U;
    msg.custom.assign("KNKUHLBUPBDYAPBFQXGVMOBUTCQXKSBNEYG");

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
    msg.setTimeStamp(0.4551440425994462);
    msg.setSource(24843U);
    msg.setSourceEntity(214U);
    msg.setDestination(14290U);
    msg.setDestinationEntity(31U);
    msg.timeout = 52263U;
    msg.lat = 0.7944205449382875;
    msg.lon = 0.14786113875830242;
    msg.z = 0.5352363759096191;
    msg.z_units = 8U;
    msg.speed = 0.6092938449597018;
    msg.speed_units = 233U;
    msg.duration = 10045U;
    msg.radius = 0.5866934003085699;
    msg.flags = 21U;
    msg.custom.assign("JEAUXEZRDHWRJVFKPVSOYZHFXFBBVGAVVJXFARQJNQZYNTTYBGPQSDWBSLINXLYXCGRMDIRIMHJBSXKT");

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
    msg.setTimeStamp(0.8777332777047141);
    msg.setSource(64565U);
    msg.setSourceEntity(231U);
    msg.setDestination(9183U);
    msg.setDestinationEntity(86U);
    msg.timeout = 15019U;
    msg.lat = 0.12089144876935243;
    msg.lon = 0.7330761102527861;
    msg.z = 0.1025794967047663;
    msg.z_units = 5U;
    msg.speed = 0.06810577231956938;
    msg.speed_units = 72U;
    msg.duration = 26124U;
    msg.radius = 0.1628489219368251;
    msg.flags = 55U;
    msg.custom.assign("XAXBLOOBIMIZNJYGDJCHQNSVQETFXXWNMPZQACRIUMRDLLVGLKOEKTNRFLGYKRSXMCVVJOJHWTWBAXNVHSSEDJSUQPMTDYMEZWARGTXUWMTJLUAMOVKKVKCPXACZBOFVWDGTKQJSKPYNDEJDNJSSKBFMP");

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
    msg.setTimeStamp(0.3375656378545633);
    msg.setSource(52465U);
    msg.setSourceEntity(172U);
    msg.setDestination(28580U);
    msg.setDestinationEntity(142U);
    msg.custom.assign("MFRVEEMNZPETACLHNFFWKISLBWRPUASCFDZUSBIYHGTJEEVBMWMATKXNJVOIIUXLJGFHCZAUVPPWXZESPKDV");

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
    msg.setTimeStamp(0.5359632359379762);
    msg.setSource(20129U);
    msg.setSourceEntity(74U);
    msg.setDestination(43688U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("RJFKPSDBDMWWBYLUVAFSOWLSZWTJUOFINDWLNRRIXFTQZSXCEMDNECYYHMEVKEHKOIQKKJUVENOVZGLATAMJHZLGLMXPXYYGVEDOMTFCVGFYGVICJC");

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
    msg.setTimeStamp(0.7315383155008705);
    msg.setSource(11460U);
    msg.setSourceEntity(178U);
    msg.setDestination(52081U);
    msg.setDestinationEntity(246U);
    msg.custom.assign("CERJDZGEVRGLMXTYBGC");

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
    msg.setTimeStamp(0.4413061730510923);
    msg.setSource(50097U);
    msg.setSourceEntity(187U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(183U);
    msg.timeout = 27867U;
    msg.lat = 0.5439463666017694;
    msg.lon = 0.3161299227838025;
    msg.z = 0.8741325303705527;
    msg.z_units = 253U;
    msg.duration = 42207U;
    msg.speed = 0.7074730957537847;
    msg.speed_units = 61U;
    msg.type = 22U;
    msg.radius = 0.09547479868142839;
    msg.length = 0.8801620013947322;
    msg.bearing = 0.10725452915469713;
    msg.direction = 73U;
    msg.custom.assign("TSUADVHWSAJWOZHCMRJNNFXPSMNHRZJAVWEDYTNFHVDNTAFHPLL");

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
    msg.setTimeStamp(0.41619226147406996);
    msg.setSource(37506U);
    msg.setSourceEntity(10U);
    msg.setDestination(14568U);
    msg.setDestinationEntity(40U);
    msg.timeout = 49318U;
    msg.lat = 0.19242539056224128;
    msg.lon = 0.01422780207802743;
    msg.z = 0.9150540110658405;
    msg.z_units = 29U;
    msg.duration = 24336U;
    msg.speed = 0.25611051774827986;
    msg.speed_units = 253U;
    msg.type = 61U;
    msg.radius = 0.8556868133442863;
    msg.length = 0.31813173917564797;
    msg.bearing = 0.3781071061959176;
    msg.direction = 44U;
    msg.custom.assign("SXSRSVAZXQMSLJLMFTJNZNEVYDMZANRBJTMIEYZAVZDHSZGRKIDCOQVGYWRWWWXCTFHMQBSOOWBLWCYWLFVUKJGCLGKZEUJBNRDTQQMYEQAUUPPIOHTKVQPJFNUFPNSPYOWJJXRRQBTLPODEFIWTAPBAGMLAOGSCAONNNZUOPDTDXLIXHXUFHBFCMHVXUXDKBKDXTKKRZICVIIGGQHVIPES");

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
    msg.setTimeStamp(0.48296325859058054);
    msg.setSource(12470U);
    msg.setSourceEntity(53U);
    msg.setDestination(64240U);
    msg.setDestinationEntity(242U);
    msg.timeout = 43821U;
    msg.lat = 0.9075591723644645;
    msg.lon = 0.6331807735941077;
    msg.z = 0.7269894281076323;
    msg.z_units = 110U;
    msg.duration = 2061U;
    msg.speed = 0.99225370065925;
    msg.speed_units = 212U;
    msg.type = 1U;
    msg.radius = 0.30104505963941897;
    msg.length = 0.4466435318546932;
    msg.bearing = 0.044281207705228254;
    msg.direction = 220U;
    msg.custom.assign("STIIADHYPHBRQHMMEMDTJQADAQZMLROIFNNPCNXAHZUYLHWZXDCPZOOXREUNIYIBPJFFLDFIXQZLPBVQZILHIVYQNFNNKVTMHTSGSVYBLWXCHJTXKFTUJKXMMWQBWSGFSFWTWVFASCQZETZEUDYLZTJSYOIOCVCKRJJYRKGENUMKOUGMRVCLVNGSBEXCWPQSSFDULOWBOZBYXAONDGGDIGKBKGJOLRKRPGDVECEKAHPYVRPUC");

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
    msg.setTimeStamp(0.4541049134030377);
    msg.setSource(22472U);
    msg.setSourceEntity(253U);
    msg.setDestination(28795U);
    msg.setDestinationEntity(86U);
    msg.duration = 40914U;
    msg.custom.assign("PBYJYZCRYNZQCTAILLSBEITRSWKIVDKDJCBPPNKDPMKHQPANOHLSDFITCMCHKUUGYJDOSVVPNQFWHGUGUOGUMFOLCVSRNDAEDXHXHHLZRFAJNXSYTBIXVOHWOETXPGEGDILZMEYQSLYBYS");

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
    msg.setTimeStamp(0.5136824312263496);
    msg.setSource(21089U);
    msg.setSourceEntity(169U);
    msg.setDestination(59276U);
    msg.setDestinationEntity(215U);
    msg.duration = 47641U;
    msg.custom.assign("ITXYOUSHVKOFEIHYGFHPGDMOINYBZEYDQBHQFCRAUVPGMMTUHJAOSANDRRRPADDVWRNFWEPYAJQOEIYNSZOZXQLLLAJHQDRZGTWBKZWSHNONXUSYKNJVIFRXDYFIMGJWOCBEIRXPVBMFBXJQWZSKXBLNU");

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
    msg.setTimeStamp(0.7779465858186654);
    msg.setSource(22805U);
    msg.setSourceEntity(204U);
    msg.setDestination(2911U);
    msg.setDestinationEntity(44U);
    msg.duration = 43875U;
    msg.custom.assign("MWGTDULCQCOWCZYCFBYATKISEOADARIDRUETYTPGXSILFKNVKODHUFEZHXKZLMIMSVOGBZKCGSJTRQRMUSJXZNBDX");

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
    msg.setTimeStamp(0.4051217204780553);
    msg.setSource(49392U);
    msg.setSourceEntity(96U);
    msg.setDestination(46687U);
    msg.setDestinationEntity(130U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.026901185774834135;
    tmp_msg_0.start_lon = 0.7449117440218852;
    tmp_msg_0.start_z = 0.682045028793438;
    tmp_msg_0.start_z_units = 95U;
    tmp_msg_0.end_lat = 0.0610635511978207;
    tmp_msg_0.end_lon = 0.7227788941217549;
    tmp_msg_0.end_z = 0.8209478608184502;
    tmp_msg_0.end_z_units = 29U;
    tmp_msg_0.speed = 0.4114168179437775;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.lradius = 0.27055202366566755;
    tmp_msg_0.flags = 126U;
    msg.control.set(tmp_msg_0);
    msg.duration = 5047U;
    msg.custom.assign("PKTYISXLBSPIHQPCFXTSMZGJADXIVBSOHDLJWJGBCQSYZZDTVQQRYCMLFBAUIDQZMMUKYRTKNSOPRWFMUZSITQYFXJUCJTIEXAEIKRCRMLKBGZQHYIKVOPRJKQATVDNBLSWJRPWPCUUFOAFXOYCLDEQKB");

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
    msg.setTimeStamp(0.3559837856014616);
    msg.setSource(4373U);
    msg.setSourceEntity(219U);
    msg.setDestination(37412U);
    msg.setDestinationEntity(9U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.1922830094225496;
    msg.control.set(tmp_msg_0);
    msg.duration = 43722U;
    msg.custom.assign("GKZBFAMFOAUADGMBUMBLOFOHDKBBHWEPPMYZRIPTRRVOTETWKDUKYZTJNFUTGNFPVXFCWANJGJUPBJIKDTBWDVQSGTWMOJOUK");

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
    msg.setTimeStamp(0.6650201886874572);
    msg.setSource(26875U);
    msg.setSourceEntity(235U);
    msg.setDestination(55745U);
    msg.setDestinationEntity(178U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.12440833694830078;
    msg.control.set(tmp_msg_0);
    msg.duration = 28413U;
    msg.custom.assign("KVZCERXFBPQWNBWMMURECRT");

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
    msg.setTimeStamp(0.011971489513141198);
    msg.setSource(20205U);
    msg.setSourceEntity(36U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(248U);
    msg.timeout = 54489U;
    msg.lat = 0.32846890376633653;
    msg.lon = 0.7877579044680012;
    msg.z = 0.8626451211416096;
    msg.z_units = 176U;
    msg.speed = 0.21605031296056132;
    msg.speed_units = 68U;
    msg.bearing = 0.6920448098997454;
    msg.cross_angle = 0.5363765713747507;
    msg.width = 0.9987403133620701;
    msg.length = 0.29164995736526944;
    msg.hstep = 0.05241554961281292;
    msg.coff = 232U;
    msg.alternation = 121U;
    msg.flags = 69U;
    msg.custom.assign("KFSMXBOCUFSOFPKPICKVDLVOWHYBYJMLHGWVQDPETLRZFHKJGHBIHNHHEWEALWKOYAPQAP");

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
    msg.setTimeStamp(0.6059979356305246);
    msg.setSource(36227U);
    msg.setSourceEntity(233U);
    msg.setDestination(19432U);
    msg.setDestinationEntity(86U);
    msg.timeout = 57146U;
    msg.lat = 0.6269283324727912;
    msg.lon = 0.2354995079689196;
    msg.z = 0.011933734508824068;
    msg.z_units = 245U;
    msg.speed = 0.45848391193615223;
    msg.speed_units = 160U;
    msg.bearing = 0.2856283110351796;
    msg.cross_angle = 0.6640156121700401;
    msg.width = 0.9529970985673819;
    msg.length = 0.2994270907014963;
    msg.hstep = 0.17119402218779256;
    msg.coff = 48U;
    msg.alternation = 173U;
    msg.flags = 56U;
    msg.custom.assign("OIDIWNVQTAPTHUSXJUSMXSKLMQKOXWWMERQVBHE");

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
    msg.setTimeStamp(0.003460843701201144);
    msg.setSource(36016U);
    msg.setSourceEntity(150U);
    msg.setDestination(13648U);
    msg.setDestinationEntity(38U);
    msg.timeout = 6300U;
    msg.lat = 0.23198404144042817;
    msg.lon = 0.9419416521439233;
    msg.z = 0.04562016496876753;
    msg.z_units = 17U;
    msg.speed = 0.5572929074733374;
    msg.speed_units = 44U;
    msg.bearing = 0.5254817223235949;
    msg.cross_angle = 0.7888470646462155;
    msg.width = 0.9350405363002005;
    msg.length = 0.8472511371946999;
    msg.hstep = 0.1557972740824971;
    msg.coff = 130U;
    msg.alternation = 12U;
    msg.flags = 116U;
    msg.custom.assign("JIPMYLSSYEVOWYWRBEDWNZGAAIBVGVSGUIPBAWAJPLCMFDIMNKLUGXZDGBCIYNJYSJOKEQSAFZWLZVZWVQNEBZXXRMCMJVGGNKOOWIHYHZABHRPNMAXTCKPDAKDYFUCDHDRNTLO");

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
    msg.setTimeStamp(0.6078141844048435);
    msg.setSource(64698U);
    msg.setSourceEntity(219U);
    msg.setDestination(43243U);
    msg.setDestinationEntity(215U);
    msg.timeout = 20611U;
    msg.lat = 0.39748400619727875;
    msg.lon = 0.9426709633899619;
    msg.z = 0.5253230772291396;
    msg.z_units = 254U;
    msg.speed = 0.4135384429152905;
    msg.speed_units = 160U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.37424138702769594;
    tmp_msg_0.y = 0.07675391787943553;
    tmp_msg_0.z = 0.6800125953740723;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZPTKFPPUQMGLXFANMOWZIWAAODIKGTAOYFNALVBIPHHULKFEMXNOEZQKZOMEUHDKGEYQWTOMTGLQCPTKYVEHIJUSPDAXJJQQNQEXVXELFCMPAVBZVBSJCGSPWYNRPEKTUARQSPYTDSKYZSUDAKQNLIZBUXDYJGIOUGJMICXNCDSDV");

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
    msg.setTimeStamp(0.8446418272425663);
    msg.setSource(28422U);
    msg.setSourceEntity(219U);
    msg.setDestination(14273U);
    msg.setDestinationEntity(244U);
    msg.timeout = 56135U;
    msg.lat = 0.023847459432482232;
    msg.lon = 0.8205163035379606;
    msg.z = 0.5973487792116681;
    msg.z_units = 32U;
    msg.speed = 0.26258910780796885;
    msg.speed_units = 193U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.26167176527738756;
    tmp_msg_0.y = 0.8597750959435072;
    tmp_msg_0.z = 0.39248484749270485;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HRMGLNZDCADYUWCKJLCWNEHIKPMFWPZGPDVJXODWCEFSOETCCOZQHPKQGICFTIGBTBYQGJEXWVMSQPUBWNJYHDAOETZFGOWZRMUNFVKUSAFRYY");

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
    msg.setTimeStamp(0.5857462070444602);
    msg.setSource(48493U);
    msg.setSourceEntity(60U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(51U);
    msg.timeout = 64339U;
    msg.lat = 0.3129365563153692;
    msg.lon = 0.8576182662580857;
    msg.z = 0.913750151505079;
    msg.z_units = 174U;
    msg.speed = 0.264210664613184;
    msg.speed_units = 165U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.15730863308532672;
    tmp_msg_0.y = 0.039770333451226936;
    tmp_msg_0.z = 0.486673413713793;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AVIUKOQDYUECAFDLAEBNJQGTEIATXRIWSVWVHVKZQRKFHYDIBKUEQMRPLQLIIMSOFLMMANBHVJWRKZUHXOEENPLXVBXOFTCWPSNMSDAHPTTPNUNNVFSSGKCKUXZMFOIKENPLFYAGQJYDYNDBPPBGBVZBMFRYXVAWSWGCLLXRUACZQXBGIXTNYOJ");

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
    msg.setTimeStamp(0.792730267619608);
    msg.setSource(46651U);
    msg.setSourceEntity(11U);
    msg.setDestination(40708U);
    msg.setDestinationEntity(10U);
    msg.x = 0.8531850567362079;
    msg.y = 0.46956096748495535;
    msg.z = 0.21639174898283764;

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
    msg.setTimeStamp(0.7194370049342381);
    msg.setSource(44074U);
    msg.setSourceEntity(137U);
    msg.setDestination(49779U);
    msg.setDestinationEntity(212U);
    msg.x = 0.8868911337934303;
    msg.y = 0.39755080185964287;
    msg.z = 0.9978362209784469;

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
    msg.setTimeStamp(0.4832016866317884);
    msg.setSource(25814U);
    msg.setSourceEntity(247U);
    msg.setDestination(37968U);
    msg.setDestinationEntity(140U);
    msg.x = 0.582796629105227;
    msg.y = 0.7697295347698846;
    msg.z = 0.6232502794141239;

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
    msg.setTimeStamp(0.6663145097874044);
    msg.setSource(60944U);
    msg.setSourceEntity(155U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(38U);
    msg.timeout = 59664U;
    msg.lat = 0.4771767277365998;
    msg.lon = 0.8707268601596243;
    msg.z = 0.9801258983069128;
    msg.z_units = 126U;
    msg.amplitude = 0.4112419226898293;
    msg.pitch = 0.39258556570817593;
    msg.speed = 0.12851004238949626;
    msg.speed_units = 152U;
    msg.custom.assign("FMBYUPIHQCLNYPHPZGRAWICANEQDWIAHFABZZUPMEAGUZEONFZJSJFVMX");

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
    msg.setTimeStamp(0.24518175761066252);
    msg.setSource(31607U);
    msg.setSourceEntity(95U);
    msg.setDestination(58419U);
    msg.setDestinationEntity(90U);
    msg.timeout = 22258U;
    msg.lat = 0.3504246823558401;
    msg.lon = 0.5203941070428794;
    msg.z = 0.4338290892488422;
    msg.z_units = 113U;
    msg.amplitude = 0.4777223502223982;
    msg.pitch = 0.7125538810121378;
    msg.speed = 0.3719388215901511;
    msg.speed_units = 70U;
    msg.custom.assign("BXFAEGBTWATJHNFICZGWRVKZUKXUAKTRXDSUXSHFTOHTKXWVAOAVDUBGGOCZDOOJRBZLWPNFLVVGNJZMWGMTCBPZULVIYZEUSPIYCFLQSTMJEYEISVNAWQWTJKPSRENBXMGDQWDAVHNDPFOERPPONHXEUF");

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
    msg.setTimeStamp(0.8036298531557279);
    msg.setSource(59581U);
    msg.setSourceEntity(65U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(149U);
    msg.timeout = 40329U;
    msg.lat = 0.48374911541013055;
    msg.lon = 0.27228254262437124;
    msg.z = 0.9545118751220573;
    msg.z_units = 13U;
    msg.amplitude = 0.23759709474511437;
    msg.pitch = 0.07616146985943817;
    msg.speed = 0.3678637595542331;
    msg.speed_units = 18U;
    msg.custom.assign("XPMWNKNYMSSIAEMCVPYUJEXOIGCOFHYHCLJZJSQFVCRISEZDMSIIKFRRUUMXFSQPJGKCWAWTISHVRBNCTWRKBOPYYVUZRRVABABRANYQPHXTOXFMGJAWFHXZYERTGEEUTAFXQXMTDJNJNLLVOOGJWDALZHLPDIOLBCGDYHVWLYQBPPUKFBEOPNTOVNLUBLHDLKVDBAMRMUKCZGSCGSIGSGQWEZZWDIPQWJHMFHOUQUQEKQNJKDCFABVN");

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
    msg.setTimeStamp(0.037275045467195844);
    msg.setSource(6062U);
    msg.setSourceEntity(64U);
    msg.setDestination(47045U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.7894734086114519);
    msg.setSource(23766U);
    msg.setSourceEntity(240U);
    msg.setDestination(43103U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.579776884672766);
    msg.setSource(33676U);
    msg.setSourceEntity(183U);
    msg.setDestination(65388U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.2785940036391594);
    msg.setSource(29259U);
    msg.setSourceEntity(163U);
    msg.setDestination(6513U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.47419803452347276;
    msg.lon = 0.3609871685563697;
    msg.z = 0.6709905747778098;
    msg.z_units = 139U;
    msg.radius = 0.4553850259656588;
    msg.duration = 41041U;
    msg.speed = 0.33987227923203767;
    msg.speed_units = 204U;
    msg.custom.assign("KWFENPCGRITZIYKTUXIJNYRKZLTSEPWVGWKUEPLOXRRFXSCXWVLZPUIIPOMVDOQVARJKXYCESWMTHAIOYEALLNTWYBDQHJBGIPEWUGLITBDYSCTZGFETASQKNZFSZYTCFWUAIGGXGQXAYGHJHDDMOFUHSMRANSYMKWSNWQCUPNLORHBBJLQTVCAJLZXBIDDEOPJL");

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
    msg.setTimeStamp(0.9011341919565595);
    msg.setSource(29694U);
    msg.setSourceEntity(103U);
    msg.setDestination(43993U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.5984586315905454;
    msg.lon = 0.7679152700856362;
    msg.z = 0.2337147506003029;
    msg.z_units = 120U;
    msg.radius = 0.937936541594899;
    msg.duration = 64819U;
    msg.speed = 0.8051477763908614;
    msg.speed_units = 209U;
    msg.custom.assign("ICIBVFZFZDZLDTUULQHHJXKTSSWIROGIVESTPNPREAZLHZMNFCLYBMTNHAYJQZMUPIQZNPRNOEVMRVAWJOOXQGOFVRKIVTHBBXJJMAFDGUZAIQUARWSYMQPDCMJPPOYIRFJSYWSHQWKXTEJDVSBDYCTPXPKKSOEXECYEYECTIDRTGSFHAKNUZWGOKBGUNWFAIVLGQOLKHKGMDWQNPL");

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
    msg.setTimeStamp(0.6814060616245998);
    msg.setSource(19294U);
    msg.setSourceEntity(72U);
    msg.setDestination(54560U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.654343581864663;
    msg.lon = 0.5020909733168076;
    msg.z = 0.3574490934440684;
    msg.z_units = 101U;
    msg.radius = 0.2480574605013779;
    msg.duration = 37879U;
    msg.speed = 0.05544710909072448;
    msg.speed_units = 93U;
    msg.custom.assign("ZLHUQSKELRXHECBGS");

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
    msg.setTimeStamp(0.7162123115332669);
    msg.setSource(63859U);
    msg.setSourceEntity(64U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(8U);
    msg.timeout = 4426U;
    msg.flags = 177U;
    msg.lat = 0.8929471643332952;
    msg.lon = 0.2632513264564099;
    msg.start_z = 0.6678399718601239;
    msg.start_z_units = 141U;
    msg.end_z = 0.37929285720749706;
    msg.end_z_units = 126U;
    msg.radius = 0.6907035665545919;
    msg.speed = 0.8396109499808126;
    msg.speed_units = 70U;
    msg.custom.assign("YPKGNNQBYYKSELHEFCJLMDGFIQDLHSCZDJLCDFACKWLGIHZEWOBPMXXTXOBGSNVNPBGFLKTXDZUVYHSAIGEKOBPSZYJMWXKVUIYEYFIOSWHOWNAZYWLTKNIPRI");

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
    msg.setTimeStamp(0.29793411419784677);
    msg.setSource(41813U);
    msg.setSourceEntity(13U);
    msg.setDestination(56230U);
    msg.setDestinationEntity(96U);
    msg.timeout = 3014U;
    msg.flags = 153U;
    msg.lat = 0.9787357336648479;
    msg.lon = 0.3778249408962132;
    msg.start_z = 0.09226930391157273;
    msg.start_z_units = 166U;
    msg.end_z = 0.206942191387134;
    msg.end_z_units = 206U;
    msg.radius = 0.3209045660623083;
    msg.speed = 0.852517411106901;
    msg.speed_units = 69U;
    msg.custom.assign("IURBZYBOKBHWJAITDNLJENCLGJNOHBYHWYDURPOAPULUJYGSWTLMSVZNCOBEFVNYOTBTARYZUKZAKYKZGVVKZMAIIWELIWUNOHJCJCZBXMIFQTTXRQFAKXQCYPMSEBHVRIKQRDEQGFDFNODWMPQCJJWLAGFEUGOTSXXPUWCTYOJDZPNVRZHTSLUQQZIPHGCFJVGANXWKXTMEKECPSDGFISLRVFQGBMEVHXKVPOWPLSXSDXQMHIENDAY");

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
    msg.setTimeStamp(0.41441305568096376);
    msg.setSource(7142U);
    msg.setSourceEntity(39U);
    msg.setDestination(46879U);
    msg.setDestinationEntity(233U);
    msg.timeout = 28115U;
    msg.flags = 233U;
    msg.lat = 0.11916296077972244;
    msg.lon = 0.049719019472984516;
    msg.start_z = 0.10927596184620214;
    msg.start_z_units = 37U;
    msg.end_z = 0.6809567489974182;
    msg.end_z_units = 148U;
    msg.radius = 0.6542131108350299;
    msg.speed = 0.5884666752051696;
    msg.speed_units = 56U;
    msg.custom.assign("TYUBGYKXBMPJCRGTCSMTSHODQZBLUZPYAGPHPRTGGXAPCRFTNWYKCMAGGHNKCVZSEVEKAUZQLTLCRJYOXSMLQFIRHLFILSXNMPPWBBEFARSODI");

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
    msg.setTimeStamp(0.15537202248093795);
    msg.setSource(62793U);
    msg.setSourceEntity(218U);
    msg.setDestination(21676U);
    msg.setDestinationEntity(165U);
    msg.timeout = 45764U;
    msg.lat = 0.7878468691652943;
    msg.lon = 0.23206137925439485;
    msg.z = 0.02340252601716808;
    msg.z_units = 118U;
    msg.speed = 0.4366468582066474;
    msg.speed_units = 11U;
    msg.custom.assign("QHYRJXRNGXLETCPBXNPBKZKOZYLPWAMOWJAVVQHUVNIYOEDWEFOYNNETKXAOKJSCRXSJXH");

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
    msg.setTimeStamp(0.9653398706244478);
    msg.setSource(60055U);
    msg.setSourceEntity(222U);
    msg.setDestination(42394U);
    msg.setDestinationEntity(34U);
    msg.timeout = 13890U;
    msg.lat = 0.1448800752884738;
    msg.lon = 0.5169177583865404;
    msg.z = 0.9419411392685657;
    msg.z_units = 36U;
    msg.speed = 0.39424724917136866;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2908086525665865;
    tmp_msg_0.y = 0.6848950175379721;
    tmp_msg_0.z = 0.5639796116331756;
    tmp_msg_0.t = 0.2547251531767837;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ENKKNOKQAHJWTDQYCHNJOAPVAGPUPGTIXLPGMCAKUVSBOQIEIXDZKYGXRXCRFEIUSJZCXVYJHKTVRNCMYWEDOSJZBLTXCONGVVSMBXFSWRNZSIXCBWTSLAHYORMIGMDAUYBQMZEUPHUJPHMGGEWZYFTEMQLGLLFYCBKYRFQKNU");

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
    msg.setTimeStamp(0.5529264712035217);
    msg.setSource(20991U);
    msg.setSourceEntity(114U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(159U);
    msg.timeout = 43931U;
    msg.lat = 0.500631013662318;
    msg.lon = 0.02211609100185108;
    msg.z = 0.9974243956685691;
    msg.z_units = 210U;
    msg.speed = 0.7334222645741264;
    msg.speed_units = 23U;
    msg.custom.assign("XAPAUYZIZWWGFBDIKMPWJJNCONWHGHLTJOTSNUXHDJUQQVAVVFGJGOYALWREBYSPORMZLIENCMVPCJLCLDCFZUYHUNDHMQEORUSVSUDHMRXGHXBBZCIUIKPDRCRY");

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
    msg.setTimeStamp(0.6790733240602167);
    msg.setSource(59495U);
    msg.setSourceEntity(172U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(0U);
    msg.x = 0.5292339122071791;
    msg.y = 0.17633815427581812;
    msg.z = 0.6021067262711589;
    msg.t = 0.1250532862006537;

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
    msg.setTimeStamp(0.10194113439458075);
    msg.setSource(37012U);
    msg.setSourceEntity(83U);
    msg.setDestination(53264U);
    msg.setDestinationEntity(114U);
    msg.x = 0.1479225367812408;
    msg.y = 0.5685582387508326;
    msg.z = 0.12799029074521018;
    msg.t = 0.8648750206779645;

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
    msg.setTimeStamp(0.7847705634711994);
    msg.setSource(2395U);
    msg.setSourceEntity(238U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(149U);
    msg.x = 0.952221297852577;
    msg.y = 0.210826523016166;
    msg.z = 0.30235486539299816;
    msg.t = 0.6436007290834383;

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
    msg.setTimeStamp(0.8910435110668677);
    msg.setSource(48885U);
    msg.setSourceEntity(244U);
    msg.setDestination(50430U);
    msg.setDestinationEntity(232U);
    msg.timeout = 54739U;
    msg.name.assign("HZMGKJIUPHNVLPUSSXESWPAPCRYLWLTPAYEQTFJCMTUTAWTMYBZRKYWIOGQNVNHTAVOQLLDJRSOAEPMBGLKJWJEHQUXFIWADVCOEXZQNHMNRUIHXYVXYNKGPYKGUJPZRBLJHBKFHDQVVFASIMZAKDXECOCKMJWSDFRJPTYKSXFNTBXISQUQBCRWFDNDIMYVRJIFVIRGCKLMTXDEEGENZAEOLWZBUFZVZZSQHCHUOORBPCQ");
    msg.custom.assign("XTZDFHNXJSSQGOLLEXGHFQJZIBYVMOWRBGJETXKKZANMORJOXYREIJ");

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
    msg.setTimeStamp(0.426093496776208);
    msg.setSource(24966U);
    msg.setSourceEntity(28U);
    msg.setDestination(59004U);
    msg.setDestinationEntity(222U);
    msg.timeout = 2155U;
    msg.name.assign("LVZWVCSEREQOPYTBAVSYOGEDPIADHCKYNMTJBESJRFNISPONIRBCMKCMWNXUMBIJSLHZSEYTUBZUGOWRHLIEVTOQHKKQQDUAEIHCCZXNUPLTXQDPVLTZLTJVFYVWGUSMOWTHWOMAZVEGNPSJBDJDGQZCWACTJPGNEKIXASUXMDAALVIMLPLXFWQQRMJ");
    msg.custom.assign("DZMOPYOWLXLYYWOLBKNWWZCBDRSHMRWFSKNHJHBJHAKWRZDVXIUBGBOMSBNPKCRXJTYOQHMGVPVILETKINUGHLIAAVFUJXXKCRJN");

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
    msg.setTimeStamp(0.3009301151267454);
    msg.setSource(50315U);
    msg.setSourceEntity(96U);
    msg.setDestination(11673U);
    msg.setDestinationEntity(204U);
    msg.timeout = 37846U;
    msg.name.assign("IXHPOBWDHXNVUQWSBSGPIMESD");
    msg.custom.assign("OEBKLZSYHTMPRNTJWHDFPXOTIBEABCDLPLSGXMZIPVTXGZRQCIGQALVTPVVOKJAFUPNYCLDJSYKNIMRYWFYVPDAORYY");

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
    msg.setTimeStamp(0.4777274217319484);
    msg.setSource(36412U);
    msg.setSourceEntity(251U);
    msg.setDestination(13392U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.21057611629342332;
    msg.lon = 0.8272723688476562;
    msg.z = 0.25622085023901753;
    msg.z_units = 251U;
    msg.speed = 0.5202322062543326;
    msg.speed_units = 100U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2998185808506699;
    tmp_msg_0.y = 0.04599312566396074;
    tmp_msg_0.z = 0.5019797276029695;
    tmp_msg_0.t = 0.4394379723823796;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 65056U;
    tmp_msg_1.off_x = 0.3308232123767215;
    tmp_msg_1.off_y = 0.3828382650863803;
    tmp_msg_1.off_z = 0.8797281703874124;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.007891873309480935;
    msg.custom.assign("FNAMKEGJNTRDEUHSRSDOQIHSWKUBPZEPAIIAMYONJGCFAMUEKTIXHVOFHJAHGKIQYRJTVBFYZUDKQLCBBIVSWSUZUOGQXCKCIXVFBDJXQIDEZLABBOIGANZERUUKLCFHTNZZNDKDFYYVZRTSX");

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
    msg.setTimeStamp(0.1404276352235404);
    msg.setSource(40050U);
    msg.setSourceEntity(49U);
    msg.setDestination(57242U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.5039908162752245;
    msg.lon = 0.8268937862136345;
    msg.z = 0.8403790253089192;
    msg.z_units = 95U;
    msg.speed = 0.7831226359883767;
    msg.speed_units = 241U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7572501599437564;
    tmp_msg_0.y = 0.5594370797309199;
    tmp_msg_0.z = 0.8333098507678068;
    tmp_msg_0.t = 0.4776222776699065;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12669U;
    tmp_msg_1.off_x = 0.05870660620311752;
    tmp_msg_1.off_y = 0.047267111917690285;
    tmp_msg_1.off_z = 0.9268737365869903;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.35184321428725374;
    msg.custom.assign("OGIKWJQPLNCKOJNMCMBLZRGMZUPKDZPYVDAHMIXUGSDMYITXHTOBECEEHVAYJB");

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
    msg.setTimeStamp(0.11829553246550584);
    msg.setSource(31235U);
    msg.setSourceEntity(180U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.2987317888965294;
    msg.lon = 0.9316487837851479;
    msg.z = 0.11390078119117164;
    msg.z_units = 26U;
    msg.speed = 0.41127962803847307;
    msg.speed_units = 45U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6079372053452484;
    tmp_msg_0.y = 0.5359428675100141;
    tmp_msg_0.z = 0.9833703073267386;
    tmp_msg_0.t = 0.9836930037723006;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 33903U;
    tmp_msg_1.off_x = 0.8476162482887396;
    tmp_msg_1.off_y = 0.6727764464528904;
    tmp_msg_1.off_z = 0.9199777917886666;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8035929192290886;
    msg.custom.assign("XCCWHQZLDXRDCYGKYYPNQTXFFAGKVOODZCONCJIDIUIXYAQSMBRXTDRSERYVNUOHHPEIKGPWLAEVPBTKSUTALYFFTROFPKVGZIMQZXJZDGLIBMIM");

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
    msg.setTimeStamp(0.2824253983503682);
    msg.setSource(54642U);
    msg.setSourceEntity(92U);
    msg.setDestination(25362U);
    msg.setDestinationEntity(52U);
    msg.vid = 22120U;
    msg.off_x = 0.47513656065126;
    msg.off_y = 0.4143871958248544;
    msg.off_z = 0.07822687338484124;

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
    msg.setTimeStamp(0.08281435931555758);
    msg.setSource(8725U);
    msg.setSourceEntity(79U);
    msg.setDestination(3464U);
    msg.setDestinationEntity(128U);
    msg.vid = 1775U;
    msg.off_x = 0.9291049869686315;
    msg.off_y = 0.4477811701380202;
    msg.off_z = 0.6272980183486702;

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
    msg.setTimeStamp(0.6806577459367606);
    msg.setSource(58547U);
    msg.setSourceEntity(152U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(13U);
    msg.vid = 25665U;
    msg.off_x = 0.7115854328739233;
    msg.off_y = 0.8449011658638151;
    msg.off_z = 0.8450784731312261;

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
    msg.setTimeStamp(0.5934111073241156);
    msg.setSource(38884U);
    msg.setSourceEntity(50U);
    msg.setDestination(37864U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.711343155485517);
    msg.setSource(27896U);
    msg.setSourceEntity(115U);
    msg.setDestination(55106U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.26531758478146283);
    msg.setSource(63093U);
    msg.setSourceEntity(205U);
    msg.setDestination(27811U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.2315631186010777);
    msg.setSource(35808U);
    msg.setSourceEntity(44U);
    msg.setDestination(29133U);
    msg.setDestinationEntity(239U);
    msg.mid = 48666U;

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
    msg.setTimeStamp(0.09915985167094676);
    msg.setSource(28252U);
    msg.setSourceEntity(126U);
    msg.setDestination(38920U);
    msg.setDestinationEntity(148U);
    msg.mid = 23744U;

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
    msg.setTimeStamp(0.7109503305010993);
    msg.setSource(44231U);
    msg.setSourceEntity(244U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(161U);
    msg.mid = 1625U;

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
    msg.setTimeStamp(0.34672495372227585);
    msg.setSource(7035U);
    msg.setSourceEntity(112U);
    msg.setDestination(9920U);
    msg.setDestinationEntity(196U);
    msg.state = 2U;
    msg.eta = 4875U;
    msg.info.assign("VCNBHYGMHXDQLDXNHEOOJHVABQWUZNCQYCZZNSFLPBNBOOFWTIRULHORXTTPDSYLFQSXNXWHAZAXFFNVVVVRGKDGQTORBULQOJSGBYOVPTLGXUEMDTDLQSQPCCWQISIASRTGGKLRRREXHBWGJKHZAYKJJOTPPCDIVKUUJXDCZHEAKYFGZJSYFPUETXMJ");

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
    msg.setTimeStamp(0.4040845001662621);
    msg.setSource(49561U);
    msg.setSourceEntity(116U);
    msg.setDestination(55881U);
    msg.setDestinationEntity(165U);
    msg.state = 253U;
    msg.eta = 27519U;
    msg.info.assign("CMUETBBLQFCIMETBWFRQEHXMGHYPNDVGMTYWTJDOTUIADGKKKCOILNEAHRKJGXJCSDLHUXTPJOSSTVJAHXMMVCZWAEQQBUZGEREBTIJLGABSNKKIFSBVYNRWVUSHZYJOCVALQVXPXCKVLDKIQVOIEYLEZIOMZFGXFRFZRFNOGUNWPDAPWPZQNFMRUNFQMTPKL");

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
    msg.setTimeStamp(0.9265314762188676);
    msg.setSource(35636U);
    msg.setSourceEntity(91U);
    msg.setDestination(43112U);
    msg.setDestinationEntity(248U);
    msg.state = 191U;
    msg.eta = 44382U;
    msg.info.assign("LEIMQQGKWEIXVYKBJVEWV");

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
    msg.setTimeStamp(0.2550925497096823);
    msg.setSource(54046U);
    msg.setSourceEntity(82U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(65U);
    msg.system = 19244U;
    msg.duration = 40836U;
    msg.speed = 0.4578598380302409;
    msg.speed_units = 195U;
    msg.x = 0.7117349113569142;
    msg.y = 0.9317541690796123;
    msg.z = 0.5358905581830149;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.6841222467499124);
    msg.setSource(39201U);
    msg.setSourceEntity(237U);
    msg.setDestination(64473U);
    msg.setDestinationEntity(72U);
    msg.system = 38588U;
    msg.duration = 1452U;
    msg.speed = 0.24425810288072702;
    msg.speed_units = 211U;
    msg.x = 0.9233120496580012;
    msg.y = 0.33006691224024876;
    msg.z = 0.3283513823903672;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.5891070920621075);
    msg.setSource(45339U);
    msg.setSourceEntity(101U);
    msg.setDestination(26631U);
    msg.setDestinationEntity(4U);
    msg.system = 21141U;
    msg.duration = 38918U;
    msg.speed = 0.4741660940633742;
    msg.speed_units = 169U;
    msg.x = 0.48428979057829136;
    msg.y = 0.29714563360887736;
    msg.z = 0.6859218938997617;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.6999338812431398);
    msg.setSource(44373U);
    msg.setSourceEntity(120U);
    msg.setDestination(13085U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.4696938574309618;
    msg.lon = 0.3590232337567467;
    msg.speed = 0.0278296925482987;
    msg.speed_units = 45U;
    msg.duration = 33914U;
    msg.sys_a = 1810U;
    msg.sys_b = 9128U;
    msg.move_threshold = 0.9005913358466993;

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
    msg.setTimeStamp(0.9319706520540937);
    msg.setSource(54177U);
    msg.setSourceEntity(127U);
    msg.setDestination(20091U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.9647798502263036;
    msg.lon = 0.9513757435835652;
    msg.speed = 0.9330185961431845;
    msg.speed_units = 89U;
    msg.duration = 54765U;
    msg.sys_a = 55310U;
    msg.sys_b = 20733U;
    msg.move_threshold = 0.32617144411664767;

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
    msg.setTimeStamp(0.5902212814021609);
    msg.setSource(32631U);
    msg.setSourceEntity(22U);
    msg.setDestination(39710U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.8204752598495915;
    msg.lon = 0.22409426267192623;
    msg.speed = 0.417613823886977;
    msg.speed_units = 193U;
    msg.duration = 56109U;
    msg.sys_a = 18905U;
    msg.sys_b = 28930U;
    msg.move_threshold = 0.7478108632360657;

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
    msg.setTimeStamp(0.589225276279562);
    msg.setSource(63536U);
    msg.setSourceEntity(4U);
    msg.setDestination(21960U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.5446395223294875;
    msg.lon = 0.3995124831034369;
    msg.z = 0.500718541345932;
    msg.z_units = 7U;
    msg.speed = 0.2665889818882283;
    msg.speed_units = 96U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8376970203118635;
    tmp_msg_0.lon = 0.3992939216786675;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DJYDHCFMDBCUPLMQPMSZHJEQOXEIGQNXKMGPVCZQNTPLRLBXYAAFLHAJDIJBPVQMUKKZRPRACZRMNOAMRNMEETUBXZWHBB");

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
    msg.setTimeStamp(0.11332879400421558);
    msg.setSource(36865U);
    msg.setSourceEntity(202U);
    msg.setDestination(44051U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.9407469654274994;
    msg.lon = 0.5071669599640733;
    msg.z = 0.16554702770507723;
    msg.z_units = 88U;
    msg.speed = 0.7884179786259563;
    msg.speed_units = 60U;
    msg.custom.assign("BOXNSPZHQBNIOTOMFREULKLFOAXFKKXJOIYBHRHXNSBCFBFWRIKDVVMTTAKTJPGLQVMALTFEZODY");

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
    msg.setTimeStamp(0.22287731478387596);
    msg.setSource(35788U);
    msg.setSourceEntity(67U);
    msg.setDestination(4485U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.5818492068386979;
    msg.lon = 0.5086834913560867;
    msg.z = 0.16652536745598912;
    msg.z_units = 156U;
    msg.speed = 0.057326515858871385;
    msg.speed_units = 217U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.18859280084861407;
    tmp_msg_0.lon = 0.7517941416038675;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FITHZYQZFTQSELCWCINTNWXAPVGJPXVEEKMUFHNGENFTDJJHBTSRTVSDQNWQJNAOOSQHXRFXAYNYZLBJLINGJLIBOGDPSQIPGWEJOHSBCVZPJJKZAPKDAXEKBFZTMHLRSVWMMLXNXOCGCRAFULBEAVDEUFOCMWHYQVDK");

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
    msg.setTimeStamp(0.17160349783044426);
    msg.setSource(19222U);
    msg.setSourceEntity(201U);
    msg.setDestination(34820U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.3502442938339121;
    msg.lon = 0.5430214533139816;

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
    msg.setTimeStamp(0.03994744269354278);
    msg.setSource(47663U);
    msg.setSourceEntity(39U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.0010095143930387573;
    msg.lon = 0.47943494855980573;

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
    msg.setTimeStamp(0.8554651194463779);
    msg.setSource(15676U);
    msg.setSourceEntity(95U);
    msg.setDestination(42370U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.1993893226229192;
    msg.lon = 0.84618891003226;

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
    msg.setTimeStamp(0.6662613807020845);
    msg.setSource(63320U);
    msg.setSourceEntity(163U);
    msg.setDestination(6957U);
    msg.setDestinationEntity(173U);
    msg.timeout = 5056U;
    msg.lat = 0.05424909879561457;
    msg.lon = 0.1032542519342422;
    msg.z = 0.18457583600924943;
    msg.z_units = 91U;
    msg.pitch = 0.6141206298129739;
    msg.amplitude = 0.04350447604943919;
    msg.duration = 39826U;
    msg.speed = 0.23815546238531826;
    msg.speed_units = 223U;
    msg.radius = 0.3287617846528187;
    msg.direction = 233U;
    msg.custom.assign("TQCZTZJELA");

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
    msg.setTimeStamp(0.4661790070075008);
    msg.setSource(39631U);
    msg.setSourceEntity(33U);
    msg.setDestination(24745U);
    msg.setDestinationEntity(197U);
    msg.timeout = 21465U;
    msg.lat = 0.9972529818347748;
    msg.lon = 0.364905862892417;
    msg.z = 0.26260058880801496;
    msg.z_units = 28U;
    msg.pitch = 0.6125700429117461;
    msg.amplitude = 0.8592712554535469;
    msg.duration = 31678U;
    msg.speed = 0.5954689606194283;
    msg.speed_units = 203U;
    msg.radius = 0.0866867170764235;
    msg.direction = 75U;
    msg.custom.assign("KBZMCUYRQSNEHANJKZ");

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
    msg.setTimeStamp(0.6476904453782036);
    msg.setSource(54983U);
    msg.setSourceEntity(147U);
    msg.setDestination(57615U);
    msg.setDestinationEntity(254U);
    msg.timeout = 29489U;
    msg.lat = 0.1951397615926529;
    msg.lon = 0.59298017731568;
    msg.z = 0.5947230415400235;
    msg.z_units = 86U;
    msg.pitch = 0.8200035268415943;
    msg.amplitude = 0.03437542253249837;
    msg.duration = 17986U;
    msg.speed = 0.4911883681107163;
    msg.speed_units = 78U;
    msg.radius = 0.944284168545773;
    msg.direction = 228U;
    msg.custom.assign("HYAPPPQPKUKKNEHGMZIBNILKTUMEVOOKYACGFGRQSVJXEVGZTRDGYSJQFWLADFOIQCHPBWKCXLBUOCRZHHLNIRARLXTBUFNXHRDSIPFGSZXUMQEBLTJQDULWJESQLGTYVMWPCEFMWXOZECCPVSSUEWESOGYOYXRVQKAIFPHAICZGFZIDJXVVWQYXZNVNMDA");

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
    msg.setTimeStamp(0.32303790716179637);
    msg.setSource(16064U);
    msg.setSourceEntity(26U);
    msg.setDestination(64217U);
    msg.setDestinationEntity(172U);
    msg.formation_name.assign("FITVPFWFMXLZMYUWYLDECLBEVHJKFKZBUGNODNEKP");
    msg.reference_frame = 56U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47406U;
    tmp_msg_0.off_x = 0.16275681971170664;
    tmp_msg_0.off_y = 0.747538025352455;
    tmp_msg_0.off_z = 0.6314335640146134;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ECUDAFODJABDAKFVGXVATWJTEIFOCQFRLFGXOELGOOCEZZMRLBHCJPHLYOGWIRZJWWXDMVVBUDSKDZEWUKBPNTBKWLIESGWINDZFTYZTYCSTZOOSTIUQXICWBQLMJQXKYUNISCRGPDMHVYRUFBTIEJXZBSZQHCELS");

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
    msg.setTimeStamp(0.3315215915934605);
    msg.setSource(4326U);
    msg.setSourceEntity(194U);
    msg.setDestination(56808U);
    msg.setDestinationEntity(120U);
    msg.formation_name.assign("LDSKOATYWZTCLJEMTAGOYQHRYWAZRPPXJTEWCUWLHXKEVGOIPTLGRSSBBQKBOFMLXEBVUKPXESVZHIFFEIIBMFHMAIZZIGZNTHQJFGDDVXPOWKSJJCRPJSCRMDLAKONUYH");
    msg.reference_frame = 84U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17541U;
    tmp_msg_0.off_x = 0.5226863437372404;
    tmp_msg_0.off_y = 0.3021186927186079;
    tmp_msg_0.off_z = 0.31701370580498167;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RBERZHOKRPTSJAKFTFUMHXPNMOHJOGFPXHUVQDCOFYJJBVCGICSYLOBEIDKPFNWYUHZCNNRQXIZVWJNEVSYNOGELZAUZQJGLIREMWZHGPMYQNJHAITMWDVXNKPAGDXPIGTJQGJSQWUFIZFOYDLESABRLBFTNETCPRPFRXUJGPAKBRLZDXTCTBMBHQWULAEVDWRTBGNQWUCKVDSZEDV");

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
    msg.setTimeStamp(0.9365975083559892);
    msg.setSource(1774U);
    msg.setSourceEntity(121U);
    msg.setDestination(2575U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("ADEDQHZIGRNPBCSTZWEZMTEUOCMGJVGTIMXKTLHCZCHRURKYTJHAJCGMYFNSPG");
    msg.reference_frame = 152U;
    msg.custom.assign("QEFPDQEMLALJRAUUFSBXZCGZAYROSWVLHSQIRUTGNZFWUMRXQEYJBMBGUXYASBPFVHCJWJLVKKCKYVKOBJTDOQMZWBBQFANUMZNDTYEFAXCPEAKRKLIYDAVSIIWDDBIVDOIKKRRTHSMCIHGYQTRPUXEHECOHQCICFNGSKJFREQSIJTVYPCBG");

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
    msg.setTimeStamp(0.03315860346915389);
    msg.setSource(57043U);
    msg.setSourceEntity(129U);
    msg.setDestination(6223U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("JDFDZYCFQLZNZABUIBVWUCNBHZGWWYASOKIGXNOCITSGRZTGAGPSUEYQPTRLMSTRDWKQFPNPXFLFUIDKUJTCNEZMZOHQHFXBUERDXMXJAVBHHVPGFMFYXUHVWWYUXMPQVDABLEQIGVEKCHMSRWOXYWSJ");
    msg.formation_name.assign("HMDQAYWAMOWDCYWHSCIHQOQKYLDGLDJCUBSELDZXOIINJUVNWTLNYXSJEPFNUEYOYRETMBGZPKUIFCAHCRPHIYCWEEKILRITVZBSDGSSSHMXKXGZKTVTPCRWBBARDWZKLPMZGGCBARUXXFBYAQCMQJQTOQTZNKABVJOODXSDEHFPWVQFPVXPQWG");
    msg.plan_id.assign("GSLQXEKRHMUKBHRMOBQTXCWDWFIEOICHXNVRJLLWCFAHTHHJQDTLSLWDCESDZALBGARHGDNFNOEUPNXOWJAKLOCPYFQJSSEMCTKQNYPMLXJWBCRGDCFOLVAGEKINOSPXAFGOT");
    msg.description.assign("QBGXDHQMAFZQPTKOGYVICDJPKNGYVXPBHNWXDHVSICIZODEALEIGPUWXWCSAZYFIHBGYSWNWACCSFJRYLYRUEKMKULWRMXNEPFJBNLFLBSTXPMCHOQECGOIJJAYLFZKRPHNPJGCQODFETJDRFWLBITGOSDVARMGBZJFZCZKIHPUYKAFQRGIOJQKUMUTVMBBZHNNEUVWTESQVXJYRASIBRDXONTLZHVYRDUS");
    msg.leader_speed = 0.3663762097413171;
    msg.leader_bank_lim = 0.3645310293374019;
    msg.pos_sim_err_lim = 0.309268463510736;
    msg.pos_sim_err_wrn = 0.6626601353489556;
    msg.pos_sim_err_timeout = 11127U;
    msg.converg_max = 0.6444538574977206;
    msg.converg_timeout = 49999U;
    msg.comms_timeout = 63351U;
    msg.turb_lim = 0.9100137441054112;
    msg.custom.assign("YSJTMREQCINRCGYGMZLCDWABOIXVOKOSXGAZTXVDNIJLTXYNTJITUEQQOUBKLFWENOPVVRQWYZCAUHVUTHYCBLBWILIJSSPTHDOOFNALXEHSALWBAKCNEKPDGUDUQYCVCMOGHFARQIYWKBDSYXBXDXKIKROJGAFZZPULVETPZIFHZEEAYQFUMMKFXGSPVNWJADRIHOPDXLNJZGPRGLBFQMMRSRVHUSBMVUEFZWEWHNSPTC");

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
    msg.setTimeStamp(0.694288354304914);
    msg.setSource(24602U);
    msg.setSourceEntity(221U);
    msg.setDestination(40684U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("RQIUBXGNJNLVLQHSACBKEHXVJWSHTAUTBMLDGJKGPNNRYHMPZTIHYZEICGBJMXYSEBBOPQIZHFISLZDELVRGHRANHSXZDVXDRTCFZBJPJTTAAEPMCVOFJDVYKCNLVGMYROIMUFOLNPHYAIDKJDVIKOLSWDPMCTZWWBEOXMUJYACEQOQUUUCIVYFWOSLWFNBGWEPQN");
    msg.formation_name.assign("BKCIYVELWLRWZBTOS");
    msg.plan_id.assign("EGXPXBVRYJVQOTDJQBBWVLRHPDKXBUZHAFXEYASFDNAVUCGBYOSDBICAJPLLSJGGTUUGQQNQKEPLWSAMLNYPECLNWKGD");
    msg.description.assign("PUBJEFOEEDITKLJDJLGAFXHNRBTKETVULPXNENPARZFUFEBXBAXOOGDVHJYYPNIMZARQVITQYWQDBKQZWCISKGAFWAFSUMCKRZOIVLZQVHRYCVMRXBYFLSGPJTUSONNWITQXQJDIDLZPPIXGXUBGKLSBWTWCRLGHMKCSMMRPTAEJWWKGCDZHCXAPVXLMO");
    msg.leader_speed = 0.4613704832962602;
    msg.leader_bank_lim = 0.6559576896457737;
    msg.pos_sim_err_lim = 0.14222124771717926;
    msg.pos_sim_err_wrn = 0.0631504766017118;
    msg.pos_sim_err_timeout = 49883U;
    msg.converg_max = 0.11475654186390127;
    msg.converg_timeout = 39161U;
    msg.comms_timeout = 35390U;
    msg.turb_lim = 0.48031697646626004;
    msg.custom.assign("IZOMPJXHUCKLNJQFABESSRZHXBQIMCLJQOYNGRZTONXFARUNZMVSKTTOYJHXJLVXUAWQHBCEWWSBZEWLKVWJYAMJNECLDED");

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
    msg.setTimeStamp(0.45694871124730785);
    msg.setSource(34522U);
    msg.setSourceEntity(149U);
    msg.setDestination(47270U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("RTYUYODALZHWEZKTOYLVMPVPUMKOGIWKNBIOYCQKSRULUJCTKGMFNPQHQECGPVVJBLDMQCKUXSEWVRZQBXGULXQJDAXYJGVLOIDHTCHJ");
    msg.formation_name.assign("KLJHTUOAYAMUFOBJPNZDFVCLGWXHXLEXWIFTRIEYLFWAJGPYSTJXZBMAKDHULSWSSUWAQZTCQZYCAPPLOLZHXHOHVYBIMNN");
    msg.plan_id.assign("ZISWVCKAUZDUDBFZVHPLWNTPWTSZJVDCVGIIQHLQEUGGSTSWOVHFWKHRYQSOLQZZXPAWEAMHNYJEFSTXBDLCMGPYNRDEKXOMYPGKSRULYUCFROXQXUXLPNNYJRXESHKTBVBYNEIUTGIPIZWIMJQQEAFHBXRVBCUFOOMADRESMTHFSCNGTIAKRAVJDVAZXNOHCKRWBLAKBMQRC");
    msg.description.assign("XWAIEVEDNNBXUZOJTNQJCNVHSILCQBLVMYIKFAHUXXCLWRBGGRTFFPSTYCKCSODDYBWPMEIMBNOAWPXPCRHLFAOPJNGKFDAKJWDMRRYRTKJBUXJDOWM");
    msg.leader_speed = 0.5117782351240758;
    msg.leader_bank_lim = 0.610684177898693;
    msg.pos_sim_err_lim = 0.47941430530313234;
    msg.pos_sim_err_wrn = 0.10995638690271081;
    msg.pos_sim_err_timeout = 45742U;
    msg.converg_max = 0.3595678822318614;
    msg.converg_timeout = 37073U;
    msg.comms_timeout = 39635U;
    msg.turb_lim = 0.5734756530802075;
    msg.custom.assign("RSTFFFUBLJVJNLSIXSDAZNQCGOVDDARUMYBLQIYLTIPKPZIMUNMSOGUUEHHUJQQHISTGSSKKBVJZLCBZEYUEGWWQZVTMOEPPCLWXVEYGJORDGKUROQDPTVRAOADUJVERKMANGQMQGCWSNTRXMHJEOQMODKWBHEZNIT");

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
    msg.setTimeStamp(0.9022382314730237);
    msg.setSource(18144U);
    msg.setSourceEntity(64U);
    msg.setDestination(55187U);
    msg.setDestinationEntity(246U);
    msg.control_src = 39121U;
    msg.control_ent = 135U;
    msg.timeout = 0.37947342689567465;
    msg.loiter_radius = 0.52580360627617;
    msg.altitude_interval = 0.2629007121950496;

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
    msg.setTimeStamp(0.902306512386547);
    msg.setSource(36352U);
    msg.setSourceEntity(15U);
    msg.setDestination(1260U);
    msg.setDestinationEntity(117U);
    msg.control_src = 47955U;
    msg.control_ent = 44U;
    msg.timeout = 0.8848313465732515;
    msg.loiter_radius = 0.2323327691800503;
    msg.altitude_interval = 0.9061976548185818;

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
    msg.setTimeStamp(0.7084792523779316);
    msg.setSource(7754U);
    msg.setSourceEntity(214U);
    msg.setDestination(5168U);
    msg.setDestinationEntity(240U);
    msg.control_src = 64262U;
    msg.control_ent = 211U;
    msg.timeout = 0.4867403392714579;
    msg.loiter_radius = 0.32277178059320577;
    msg.altitude_interval = 0.5742467367522381;

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
    msg.setTimeStamp(0.7583593949870031);
    msg.setSource(14129U);
    msg.setSourceEntity(251U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(238U);
    msg.flags = 78U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.908037440170805;
    tmp_msg_0.speed_units = 57U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4830946721397762;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.16272957516381803;
    msg.lon = 0.7882923154551349;
    msg.radius = 0.2971904670568176;

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
    msg.setTimeStamp(0.6030261592635215);
    msg.setSource(18083U);
    msg.setSourceEntity(3U);
    msg.setDestination(24670U);
    msg.setDestinationEntity(168U);
    msg.flags = 70U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7235567302437284;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6887792170923792;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5087469854992164;
    msg.lon = 0.9862142876858703;
    msg.radius = 0.1549547758853791;

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
    msg.setTimeStamp(0.04036028509941081);
    msg.setSource(59064U);
    msg.setSourceEntity(112U);
    msg.setDestination(26922U);
    msg.setDestinationEntity(224U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.006236892698969432;
    tmp_msg_0.speed_units = 103U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.23068211959200846;
    tmp_msg_1.z_units = 28U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9123170018561692;
    msg.lon = 0.8896138114489369;
    msg.radius = 0.6699156058515434;

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
    msg.setTimeStamp(0.14274145701434093);
    msg.setSource(50076U);
    msg.setSourceEntity(8U);
    msg.setDestination(2271U);
    msg.setDestinationEntity(250U);
    msg.control_src = 7856U;
    msg.control_ent = 1U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9383715953560342;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9304787890221594;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13030221871094072;
    tmp_msg_0.lon = 0.49383651237230675;
    tmp_msg_0.radius = 0.6173013939374353;
    msg.reference.set(tmp_msg_0);
    msg.state = 31U;
    msg.proximity = 240U;

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
    msg.setTimeStamp(0.25524559193925755);
    msg.setSource(7115U);
    msg.setSourceEntity(34U);
    msg.setDestination(7870U);
    msg.setDestinationEntity(4U);
    msg.control_src = 45924U;
    msg.control_ent = 6U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 202U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2721987101696456;
    tmp_tmp_msg_0_0.speed_units = 99U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7056492019618211;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2035728714177173;
    tmp_msg_0.lon = 0.00939389736523788;
    tmp_msg_0.radius = 0.6126312062266455;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 210U;

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
    msg.setTimeStamp(0.24433428694536496);
    msg.setSource(10182U);
    msg.setSourceEntity(179U);
    msg.setDestination(15749U);
    msg.setDestinationEntity(56U);
    msg.control_src = 50276U;
    msg.control_ent = 13U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.009723554652214417;
    tmp_tmp_msg_0_0.speed_units = 37U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.019587660978865773;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8425249858975644;
    tmp_msg_0.lon = 0.9265234058542435;
    tmp_msg_0.radius = 0.9149237418380372;
    msg.reference.set(tmp_msg_0);
    msg.state = 233U;
    msg.proximity = 79U;

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
    msg.setTimeStamp(0.6815102900970323);
    msg.setSource(20019U);
    msg.setSourceEntity(236U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(136U);
    msg.op_mode = 234U;
    msg.error_count = 81U;
    msg.error_ents.assign("OTATNFLYUVWDMZJTYIFBTRVSAFROEHVPFSORM");
    msg.maneuver_type = 41304U;
    msg.maneuver_stime = 0.11911537971917507;
    msg.maneuver_eta = 2612U;
    msg.control_loops = 2110495453U;
    msg.flags = 98U;
    msg.last_error.assign("JIHPKMDRDSYNXRGLPEXHSHTYKAHWPWIVCBCJDJBJJTYWDBMOEQJOIUIEGARFCAJVZBUTAZVPVCZAIFXOBVTHYBOENBAUKUIXQXYLMXLUTTOGUMODARKSEQONSZZNMTQCUNUTBNSVSGAPVWLVEOYEPFNMMLDOJQEXNTAXYGHSZRHUKGJGQCZQCPDRSWSGAUIKZCFKPWVLGQL");
    msg.last_error_time = 0.07539702775224721;

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
    msg.setTimeStamp(0.7176028461127135);
    msg.setSource(40497U);
    msg.setSourceEntity(132U);
    msg.setDestination(35677U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 109U;
    msg.error_count = 34U;
    msg.error_ents.assign("JUFZCJIXGKWIUESTGRHLTFVZFHQRBEQNASMBOWVZDUPAXMKITVLMGMKLFYVRWLAWYGZCKNGDPXTNDATIDEMCABWVYIHOTWHYUJEIOOQAOAWHIYJLCFKDXQCBPHDCFZMSFOU");
    msg.maneuver_type = 64272U;
    msg.maneuver_stime = 0.2175747450395492;
    msg.maneuver_eta = 1223U;
    msg.control_loops = 2376956995U;
    msg.flags = 85U;
    msg.last_error.assign("NALYOVRDOSIHAEUTAMJYXBCKYWSSMZPFMGLDSWLJMESWIVDHPBUUEXQWZUWHBRGQVUFRZA");
    msg.last_error_time = 0.21210832213491138;

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
    msg.setTimeStamp(0.015251372242191863);
    msg.setSource(8288U);
    msg.setSourceEntity(221U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(171U);
    msg.op_mode = 71U;
    msg.error_count = 2U;
    msg.error_ents.assign("AZKLEOFKVDSMVTNXULWPBHYEURUCCXNDIAEYZCOFPEKXQDDOIEMJGTWIJLRTSBNPBYJJMLXVPHGWIOUUBZRXQVYTMBDVZHWMIJQUOFFCLYKOIUDBJSFUSLZIWGBEYJTQGYOCQYMMHVZZRRRSHGMMWKNEQWXHPDALKIUVAGYAOJVYCLCCN");
    msg.maneuver_type = 59723U;
    msg.maneuver_stime = 0.13391779820734873;
    msg.maneuver_eta = 47743U;
    msg.control_loops = 1187848434U;
    msg.flags = 20U;
    msg.last_error.assign("GDAESGTWVCKYDCTQVLMIHCZYNGIWBTKSQQDUFVYQGQDKPKIANAAPXZLYRWDSMAAYZUXOCMJSKWXIMZXHGLWWINUBNTMBORNJOBZUHMHDMOLUMZKROUNNPFZRAYSSKCTMEVABRFDEPUBHLQUXXPZAKJYFFSHECGISPSRHXJVTTG");
    msg.last_error_time = 0.28213230102968767;

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
    msg.setTimeStamp(0.35853511088188905);
    msg.setSource(49426U);
    msg.setSourceEntity(139U);
    msg.setDestination(53684U);
    msg.setDestinationEntity(47U);
    msg.type = 98U;
    msg.request_id = 60719U;
    msg.command = 34U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 65481U;
    tmp_msg_0.flags = 144U;
    tmp_msg_0.lat = 0.029630072798058738;
    tmp_msg_0.lon = 0.42597373149145445;
    tmp_msg_0.start_z = 0.7063230841756936;
    tmp_msg_0.start_z_units = 43U;
    tmp_msg_0.end_z = 0.568071703287107;
    tmp_msg_0.end_z_units = 131U;
    tmp_msg_0.radius = 0.2895192435555457;
    tmp_msg_0.speed = 0.463024236245704;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.custom.assign("BKOCALQFNHKACPMQSJDSPZSFIJIMAHDTFLFCFJGDEPVZZPUUPEJYLBZUUUIOJWNHKOWMVKDIJWXQTOILSHAKYGNXASCQJZRATEGITHQTHFCBMYJQXGOSLVSKLNTIVKWU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46018U;
    msg.info.assign("DTPNKOGGEAKJRVSVGRJNZIASEBEZAVYPOZMKVAMPXLNFZGDQZBUREIUMKUYTOV");

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
    msg.setTimeStamp(0.6146540296247479);
    msg.setSource(38893U);
    msg.setSourceEntity(203U);
    msg.setDestination(61267U);
    msg.setDestinationEntity(217U);
    msg.type = 43U;
    msg.request_id = 63U;
    msg.command = 187U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.5537263944516526;
    tmp_msg_0.lon = 0.484700475673162;
    tmp_msg_0.z = 0.3004513559419195;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.radius = 0.14954141584678327;
    tmp_msg_0.duration = 26054U;
    tmp_msg_0.speed = 0.6674829781163065;
    tmp_msg_0.speed_units = 188U;
    tmp_msg_0.custom.assign("IIRAREWIUXTIXJQHLYECLRUGEXDEJTNQODFLKDHPMTSNFIOEHK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61638U;
    msg.info.assign("ARXVPAGQVLPUWQAUOOHYVJITTRWMFFHFGKWPTKMVEHFDDSBRZDKEBJCFJDEUXYNUAIFZMXBFJRLUGPGCESHBS");

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
    msg.setTimeStamp(0.44766091697700294);
    msg.setSource(13121U);
    msg.setSourceEntity(149U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(67U);
    msg.type = 75U;
    msg.request_id = 6860U;
    msg.command = 26U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 29429U;
    tmp_msg_0.lat = 0.0475535053373396;
    tmp_msg_0.lon = 0.9268259789860599;
    tmp_msg_0.z = 0.40558046124060154;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.8635950331299793;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.roll = 0.0712643355144823;
    tmp_msg_0.pitch = 0.461523415213265;
    tmp_msg_0.yaw = 0.8198775997047827;
    tmp_msg_0.custom.assign("QHARLCKTEBSXQRDCZSRMSKRGMUDVGJTMUTNDBMKFYLAKHREHYHMOJQFGZVNNDAXIKLRNWVPRVSXLCATFZPIXHGWWVISEZTVYPZMSCTPVFAGDHOWNQPBTFAUJJDKHGHBBANKIGELFMCVKOAPJLOIDIAGUDOZYSHMEWWUYIEMCOOIKQHQFBBCSWZNNOWJUYZLECJYEUPIXQWXZFXOGVPEJBTXCYPDQXJQSUEVONIUWZBXLM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 202U;
    msg.info.assign("UKHTYVPBJZTHACCABWFTCQSNEVJSXYTVWNAIFWQELVJMHSLTZLUDTMFLCPGRFYQZAUNILEGRUTVXBOAXEGBXENMSXJPLQCHNYRIIZOLDVNZUUJWHMVGTCDPOSMEICHKVICZUZRXGOOPWEFQXBDJQROWHBRP");

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
    msg.setTimeStamp(0.27537228855740203);
    msg.setSource(17177U);
    msg.setSourceEntity(193U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(150U);
    msg.command = 150U;
    msg.entities.assign("EOSFLDZTGRBYYAALNGKLUZXLGOKFSDVEECBMDUYPSCPALXV");

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
    msg.setTimeStamp(0.31358470576204744);
    msg.setSource(43663U);
    msg.setSourceEntity(135U);
    msg.setDestination(19020U);
    msg.setDestinationEntity(158U);
    msg.command = 63U;
    msg.entities.assign("YOVACIWJELYVQKYYTBDRLADIZQXWGDHDZNXOQJOBMNQUTPAHENPXGQEZTVWNQROLEBLGKAOAUMNJALFXMSIDDBZCHYYIVZWFVNHJQOECRSTZPPSFRENKDJRXYVUTBVELRSURHLCUFQWGFGAQQSZ");

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
    msg.setTimeStamp(0.5173593660136);
    msg.setSource(9608U);
    msg.setSourceEntity(185U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(35U);
    msg.command = 143U;
    msg.entities.assign("XVWXJDLAFZMEQKONELR");

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
    msg.setTimeStamp(0.20929665842845857);
    msg.setSource(49204U);
    msg.setSourceEntity(209U);
    msg.setDestination(33956U);
    msg.setDestinationEntity(238U);
    msg.mcount = 132U;
    msg.mnames.assign("PZJXWJERHUIABZLGUHRXGZJFKVWWFFQZBCMOAKRLKPURGKQIQDDPDSCUJPAVRWBUKHNLANQTEWVELQJVHHAVDBWYELHTTZNYMBKINIAILXUGUFTWFJIKMIMOSMEMQYWZXIDD");
    msg.ecount = 92U;
    msg.enames.assign("UMNANBEULWOHBADDAJUTDDSZLPJZOUVFWJUTBBLGQPKEBFRVSJPKBDNFIUYESOTVNADRCQXPNHRRCSYMRTFGPCVYCWFOFYZHLLZFSKVROKTGXQMGJNOPGWJJYTRXHOGYGBKWLIKOSWUVLQRDDZEWBALUKBWICQKIXCEOMSPIXYUEMWTGICHHIZWVTZDAYMVRGPNQQIPCQGXNSJZ");
    msg.ccount = 28U;
    msg.cnames.assign("TLYHPODVIGWEFWMKK");
    msg.last_error.assign("ZIEUFJYCHUYPEEFAEFWZOLFLFUIAMVXGSAWJUMVTYZNXUBWHDDQMCFSMVKBWHZJBURWDIUXIJRCKLQEI");
    msg.last_error_time = 0.005587582097857924;

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
    msg.setTimeStamp(0.22166217375255703);
    msg.setSource(47593U);
    msg.setSourceEntity(142U);
    msg.setDestination(54336U);
    msg.setDestinationEntity(45U);
    msg.mcount = 241U;
    msg.mnames.assign("FUQTWMDTSGNPHPIRRNXNLOKENAXYSFFZZJYKCBKULVGLWXQGFKJJYGXNDYTURDOHIEWRIEBWCUAILMRRVDAEFAOQLSANNVKETUPVRVNOBHPSRJHWODBQDYJDCFVOELBABCSQPCKZMXZBTOEIQRMYZSAFULTJKZOSMCXQYEGRIHK");
    msg.ecount = 155U;
    msg.enames.assign("QMCIHVAGZTLRZMIJS");
    msg.ccount = 36U;
    msg.cnames.assign("ZAEIRNHICYCBCRFWRJUVJUSTADYONSKEUAJ");
    msg.last_error.assign("VBEAQBGDASOYQEDKAHFT");
    msg.last_error_time = 0.7284338766296243;

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
    msg.setTimeStamp(0.8189248761367661);
    msg.setSource(39037U);
    msg.setSourceEntity(242U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(143U);
    msg.mcount = 114U;
    msg.mnames.assign("WCYYTMXABSUBPEASPVEKCJXPJAXWPUEZHFMOM");
    msg.ecount = 170U;
    msg.enames.assign("AMRHKHAKYPTALCJLHLUHVJHORUQSMJBFVWWYBBXPRFVGXZZTTPWENXSUZHNKX");
    msg.ccount = 233U;
    msg.cnames.assign("PFFYXVJAHJRLXAWGQSDWTACYOZGNY");
    msg.last_error.assign("PUKMVGJLRMPISQVWDPTQHHWFYXFRKUBICXCAGMXPJDNOJEIZYKDINSJJOEASQLCNIHPXIHAYQVLWITQMFTJCJGHEMGSVUQLFBYBKYKKQYGLIBLKBHHLTKCUWQDWCPRZANOWYXBHJYZCFFESYFUEUBNWYVLZARDHRJNUVPRDZCBZQPTNFQJZUVENCZKXCTTSEXDBWDLOHSRME");
    msg.last_error_time = 0.636703434141804;

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
    msg.setTimeStamp(0.05146428386615998);
    msg.setSource(49729U);
    msg.setSourceEntity(245U);
    msg.setDestination(47345U);
    msg.setDestinationEntity(189U);
    msg.mask = 203U;
    msg.max_depth = 0.37217564989765195;
    msg.min_altitude = 0.7687483184247235;
    msg.max_altitude = 0.8747056056006975;
    msg.min_speed = 0.04315814494689607;
    msg.max_speed = 0.0736299265062782;
    msg.max_vrate = 0.15608725876697138;
    msg.lat = 0.37506112821963933;
    msg.lon = 0.31734570769433834;
    msg.orientation = 0.014239758612173525;
    msg.width = 0.3389255954860978;
    msg.length = 0.9808798940784199;

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
    msg.setTimeStamp(0.26465401421590107);
    msg.setSource(45191U);
    msg.setSourceEntity(35U);
    msg.setDestination(58114U);
    msg.setDestinationEntity(119U);
    msg.mask = 162U;
    msg.max_depth = 0.47149751031141707;
    msg.min_altitude = 0.981004181805892;
    msg.max_altitude = 0.8585371315076066;
    msg.min_speed = 0.433754774202186;
    msg.max_speed = 0.00671992155784551;
    msg.max_vrate = 0.903431978742006;
    msg.lat = 0.32364874910301433;
    msg.lon = 0.29086675708051024;
    msg.orientation = 0.4591583505814212;
    msg.width = 0.0096248488614743;
    msg.length = 0.2710093343977109;

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
    msg.setTimeStamp(0.6742854436122958);
    msg.setSource(14195U);
    msg.setSourceEntity(51U);
    msg.setDestination(43152U);
    msg.setDestinationEntity(142U);
    msg.mask = 27U;
    msg.max_depth = 0.4100993686977238;
    msg.min_altitude = 0.32182089447576856;
    msg.max_altitude = 0.701019617214306;
    msg.min_speed = 0.17553038295890522;
    msg.max_speed = 0.9056594056258371;
    msg.max_vrate = 0.11954759224264788;
    msg.lat = 0.8716129032083926;
    msg.lon = 0.6475979740498944;
    msg.orientation = 0.04868008704196136;
    msg.width = 0.7275130190963098;
    msg.length = 0.9172533897399501;

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
    msg.setTimeStamp(0.8866506615602);
    msg.setSource(57325U);
    msg.setSourceEntity(107U);
    msg.setDestination(56006U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.8648784016085718);
    msg.setSource(36426U);
    msg.setSourceEntity(221U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.2105116545181106);
    msg.setSource(4701U);
    msg.setSourceEntity(150U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.42615478081750946);
    msg.setSource(59845U);
    msg.setSourceEntity(190U);
    msg.setDestination(39968U);
    msg.setDestinationEntity(5U);
    msg.duration = 55545U;

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
    msg.setTimeStamp(0.11960686685500865);
    msg.setSource(61501U);
    msg.setSourceEntity(46U);
    msg.setDestination(8596U);
    msg.setDestinationEntity(52U);
    msg.duration = 9351U;

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
    msg.setTimeStamp(0.8813466987557853);
    msg.setSource(1720U);
    msg.setSourceEntity(164U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(108U);
    msg.duration = 4717U;

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
    msg.setTimeStamp(0.7521303254751718);
    msg.setSource(15211U);
    msg.setSourceEntity(165U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(131U);
    msg.enable = 232U;
    msg.mask = 3740415473U;
    msg.scope_ref = 3315401383U;

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
    msg.setTimeStamp(0.3224438076996372);
    msg.setSource(960U);
    msg.setSourceEntity(85U);
    msg.setDestination(37001U);
    msg.setDestinationEntity(223U);
    msg.enable = 161U;
    msg.mask = 1580851656U;
    msg.scope_ref = 4106452640U;

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
    msg.setTimeStamp(0.05841470065560295);
    msg.setSource(3974U);
    msg.setSourceEntity(234U);
    msg.setDestination(56245U);
    msg.setDestinationEntity(52U);
    msg.enable = 19U;
    msg.mask = 609455511U;
    msg.scope_ref = 2972298136U;

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
    msg.setTimeStamp(0.0563594185202817);
    msg.setSource(29782U);
    msg.setSourceEntity(211U);
    msg.setDestination(63725U);
    msg.setDestinationEntity(47U);
    msg.medium = 64U;

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
    msg.setTimeStamp(0.40545221709106993);
    msg.setSource(63748U);
    msg.setSourceEntity(7U);
    msg.setDestination(20336U);
    msg.setDestinationEntity(139U);
    msg.medium = 7U;

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
    msg.setTimeStamp(0.5814779203223421);
    msg.setSource(17996U);
    msg.setSourceEntity(252U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(14U);
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
    msg.setTimeStamp(0.042814277866805694);
    msg.setSource(45097U);
    msg.setSourceEntity(174U);
    msg.setDestination(52396U);
    msg.setDestinationEntity(150U);
    msg.value = 0.09389252032226869;
    msg.type = 167U;

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
    msg.setTimeStamp(0.2145489758592286);
    msg.setSource(5169U);
    msg.setSourceEntity(235U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8519186983359688;
    msg.type = 90U;

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
    msg.setTimeStamp(0.1505113451612744);
    msg.setSource(1790U);
    msg.setSourceEntity(169U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(78U);
    msg.value = 0.6671733828200858;
    msg.type = 185U;

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
    msg.setTimeStamp(0.1264241848782407);
    msg.setSource(39866U);
    msg.setSourceEntity(106U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(147U);
    msg.possimerr = 0.7951118978991624;
    msg.converg = 0.8535307451842813;
    msg.turbulence = 0.7282254859169497;
    msg.possimmon = 198U;
    msg.commmon = 83U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.13272051417102182);
    msg.setSource(50882U);
    msg.setSourceEntity(198U);
    msg.setDestination(13765U);
    msg.setDestinationEntity(48U);
    msg.possimerr = 0.2580745944187838;
    msg.converg = 0.7960534049597271;
    msg.turbulence = 0.7363181314780852;
    msg.possimmon = 69U;
    msg.commmon = 177U;
    msg.convergmon = 110U;

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
    msg.setTimeStamp(0.4637290176083806);
    msg.setSource(12839U);
    msg.setSourceEntity(239U);
    msg.setDestination(17948U);
    msg.setDestinationEntity(110U);
    msg.possimerr = 0.13466141198969583;
    msg.converg = 0.6374499146865431;
    msg.turbulence = 0.31971829655897266;
    msg.possimmon = 138U;
    msg.commmon = 188U;
    msg.convergmon = 185U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.009474817839237315);
    msg.setSource(51360U);
    msg.setSourceEntity(185U);
    msg.setDestination(57479U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.6519657257993673);
    msg.setSource(38747U);
    msg.setSourceEntity(239U);
    msg.setDestination(48645U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.1072883044553633);
    msg.setSource(51585U);
    msg.setSourceEntity(181U);
    msg.setDestination(40452U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.7674818697689529);
    msg.setSource(3721U);
    msg.setSourceEntity(79U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("GYONJGDNZYOVRXUNWLFQICMLCHRBJHYRVURBLPBITAPOMJOUVNKKEACBCDSNGJPSTEYVQWWFSYMCHJTEPAAISFLSZKXVVXOIWSUDNQGPFCREOUGEZAZLDLTHBXUTKTKIXFSJJGZFYVFQFAYDUNWQKOTOQEUDI");
    msg.description.assign("VUGKYJYFDKSFABDMAKTNJZVCQWQDUJVNYNAIXONIOFVBHORHCCEZUJPERCKESDTGPBSRUWDEPJMZWGNTD");
    msg.vnamespace.assign("BPVQXJLRWOTKFQIGDZYQJDGCKDLSKEIYJTDOPZSCPEEVCZFHKDRAWFNSZYWUVUNVGNZUQONGAKQSLPJHRRAYGRAKMTYJBCQFOBSDIRLCOOGMOVSDIXGWLTJYPVAEWSHCXNZMHBXNGIBNOXMNNECTYAKTLXFIPHXMJFTDYPRGGHMCHNUWDWSUMAVZRVVEVRSKUP");
    msg.start_man_id.assign("GUWCBENVVZEAJRYFVXJTCEEAZIBOMQQCSXMZJREEAXRUKKTFXTOLYQYVGZ");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.2869211174511359;
    tmp_msg_0.x = 0.7309867983446237;
    tmp_msg_0.y = 0.8431962751618465;
    tmp_msg_0.z = 0.7369371545646813;
    tmp_msg_0.timestep = 0.8923390077070474;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::EntityInfo tmp_msg_1;
    tmp_msg_1.id = 153U;
    tmp_msg_1.label.assign("BXGIYQWKPLOHYAIVUCEJLLFZRMDCPTOGILJTOEQHQNXPSKOYAUKQZNGCWAJZWBRSWNXQZVVHPMOGODDEBRDMIZTELXRAHJHJPJKNRGEZSRXZMBQUJSBAXVUSNJGSRWTVJZTOZNXFVBXMXAFMHFJCPNHMIMSGCFUBIDDHTMKUOKLACUWYBT");
    tmp_msg_1.component.assign("SIKLPLHZECZYJFWAYFABPTKGIACTRORGSPUJXFAKRUSJUESWSIKUOHLCXWTMLGCBVLZQRXNIDD");
    tmp_msg_1.act_time = 39676U;
    tmp_msg_1.deact_time = 16218U;
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
    msg.setTimeStamp(0.9576042089420984);
    msg.setSource(2079U);
    msg.setSourceEntity(190U);
    msg.setDestination(6147U);
    msg.setDestinationEntity(30U);
    msg.plan_id.assign("FIFJRWSDPJOVCAVZACFAOWJGVOBDSJYHEYWUKOPWIPSWHUMHGMQDCYQRXKIBNWVSXLUTCUODJSLCOTIZOXDQPUXNRJQPLNG");
    msg.description.assign("REYUDIDUIZUFGRQBBMHLTALWDWAZJONXEARJJTOEBYUXAQDTGLFEDBNJCNMLAHBTVHVPUBPVLZYKOASSLRHTDROOQEFCRCRLMJEHSIFFVGRKYYDRDJXCNVJAWPWMHLZUMPTZSBCKFGFOMVYMXNIXQUVIXNJHIMJ");
    msg.vnamespace.assign("TQRNYMHIBTNM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KANQLYLTGDRCKMTSBZIPDZCEUWCIAULQVQMXWFQQGIMIBQRPIBHPEASHFJLTVHNSXUTXVVGLYNTTBEHWPWOYEPDOKEIKTXMVPCNPOQLSJMRSPKBXVXID");
    tmp_msg_0.value.assign("KXGIQWEFWSARZWVPDHTBGWAISCIVUSTTIJIFQEHSYOOWJKJICVIWBYNNEMTBHRGRMDG");
    tmp_msg_0.type = 143U;
    tmp_msg_0.access = 235U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RDVOWZOEDWRVTHEJGKCVHDHXQRLUUZEAYCVFFGRQBPKRMUDMIYXPSNPDTWKHOHFIRLGXLAIGRZZOGWEMEINMYAFLZMWTHTXSWPDJZWTVQHOBCLJLEQXNZESTJQAFNTTXYAKLMNIDBEEBUVEDBZZYUTHJPKHDAWYQVCDFQYJMBUSIYULSIOXPUIFNJXJPMWNSGQYLAGCXTCQMRPJCIVBQNMSPZINOAWFUKKGFGU");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KTMVZCOXDXMQJGJWZKQXBLMYHHGRVBUSMUBBALZIEBYJUPKWPHHLFLCDSASXIFOYHRVZTTXYEWJPAZFBOIFJPLCFQLVAZWTAOGERCIVPAUKMZPXIWGUOQCYMFXGHGODONKNEESFVKDIGNDAVIEOWTUZAPUMQPBGWYSDWTKSBKIYXZRCUQTDKNZRRMAFLUMDHIOBHKHGNEBERCCYOJSLRFWPQWNTQXDJITRQRSYMETVJFSPQVDLCUHNJNAVCL");
    tmp_msg_1.dest_man.assign("BLGUGQOHBKFDTEZTUSXRIWLDPHWWTXNOYNJYAXPKSUABHTKIHROZISUKDHCVLEFJKWTIVQYKESPOLZNTUVYWBTMYNJXEJXZULMICCICCHCBIKXZVTLBTUYFGDQOWEYLSFDPFBBRIVBKGGJDNQYMJRTCJNNEYWWORLSAKL");
    tmp_msg_1.conditions.assign("WDWDVCVWXWNVZCEHJTT");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 27811U;
    tmp_tmp_msg_1_0.lat = 0.44164727743471377;
    tmp_tmp_msg_1_0.lon = 0.07475079812719021;
    tmp_tmp_msg_1_0.z = 0.6787528576488434;
    tmp_tmp_msg_1_0.z_units = 163U;
    tmp_tmp_msg_1_0.speed = 0.22490970503981256;
    tmp_tmp_msg_1_0.speed_units = 124U;
    tmp_tmp_msg_1_0.duration = 17640U;
    tmp_tmp_msg_1_0.radius = 0.5511705858417895;
    tmp_tmp_msg_1_0.flags = 40U;
    tmp_tmp_msg_1_0.custom.assign("QGNZOKYHAKZWAIILMVLBCBDUNYMXEYRJIUOXWXQVUBHLRWITGUFXQITTVKJQZPABRGZLOWNHUKBNZFOLHVFMKKCGLSDSBCHMEJFGUDLARPASVYEEDRTNPOZXSLWWWDCPMQFYSU");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::TrexCommand tmp_msg_2;
    tmp_msg_2.command = 35U;
    tmp_msg_2.goal_id.assign("ZMMWMJXPMHDZKHBDBCNGYXLHTNFOLBGDZCPANUTKTPSYSBRUAEQIZVPLNHWJRVIIKBSWSXDWQTKGFEKHTUXADKGHCMLWZJMXAWMFROOXPQDXQJEBWHJPTDIRCYNSFSLRWEPCEZGCXJKRUNLBMESVVURBKRCZJFOHQJVNWYVGODAJFIQ");
    tmp_msg_2.goal_xml.assign("KPTVQFUGHGUEOZQQNVWJKZHANEIMESLCUXUCYOFIQDDRKAVIHBRFTALSEIRMOWXHFWBXQQPALGLIEZJRPEYDLWHTPMUISXHVFCYQRBAZDDCSBEXPOBRPCTHGYESNNNTBJKRBQFLNJVCPMXMCBLKBLZUMCFWFWRUZ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CpuUsage tmp_msg_3;
    tmp_msg_3.value = 9U;
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
    msg.setTimeStamp(0.1581767250251921);
    msg.setSource(9703U);
    msg.setSourceEntity(225U);
    msg.setDestination(25721U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("QAGDPBHVVAMUTDKMHZGAVITLLLVNHWJMPQFSATMAUYSGSZAPSRWOCNYDGOUKIBLHFTZVIHNEMWPDKFXQJMNVSFIJRHENRNBVYDCRLXKTJLZKCLSAZIYRBRUOZOMZEOPWEXESDWYNGQXQKWFWUCOHFDJCEFCRZFOZXNANCOSEJKMWTAACXNZOKUEEULGBBUTDIXBFCUDXHTLQJVU");
    msg.description.assign("OQBESCWWANGSSSEGFXUUBFFPFBXVPZOBOCTCPZTQYIUTHKFFXYIPOMIWDTOBFEADOVUEKCCLZCCKMHVVADIBQDDYPAXEHXIGHWGKBTGHVQSLPTUYILGLMNVQTADRJYGLGRHYNZYNUYHFDPMUPNEKJVGOBQMNMSHOXEMTJDSUJIPKSYKRMOJVAXRIEZJJZRCXWDAKBUWJQGCFLMJTFPZUIERAYACLAR");
    msg.vnamespace.assign("GZOWYZHMTBXCLHMCBYPRANHTZDQRMTJTIMLLZQRAKEEDQQMOHSZUBEEPIKFQOPUFNANVPHUYOJYFKCAAWXSJGDSVKORVRKHGJWMSDFLYWBHFEWFZQYBGOIDPEQZDTNBXTVXDGLTZDIVXURJTAZTIFKNMCYLALDJVJEPWKPHSBUVIUNGTBJLCACEBMJXYNOVBNFXZFQIEKSRIMOQUSLWUIYVDWXJRNPGXCHYCA");
    msg.start_man_id.assign("OZIPZLTDPBPBPFZVCKVKZFJCBWBDZGTKLDHAZVLVOPBSNKGOKFZYCMJKANTOGIHYRLLRSNUJHVHEJQBFDFCTBFJXYAULJIXCQGOJSGSZMUWIDDOSGGUEAPDOXQD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NVDTORVTHLEMPPPLVKJEKQIKGANDECREXSTOGBDBHTYQYKYVSLMODFBYSJCFWWZUUKHSDLBXCQFPAREOQTQCVVJRSGEVRGKTCAHOZDCSVIACFXAZH");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 41749U;
    tmp_tmp_msg_0_0.lat = 0.8240378542120637;
    tmp_tmp_msg_0_0.lon = 0.5705282710658077;
    tmp_tmp_msg_0_0.z = 0.29880437514764235;
    tmp_tmp_msg_0_0.z_units = 24U;
    tmp_tmp_msg_0_0.duration = 41393U;
    tmp_tmp_msg_0_0.speed = 0.3498453007038843;
    tmp_tmp_msg_0_0.speed_units = 117U;
    tmp_tmp_msg_0_0.type = 208U;
    tmp_tmp_msg_0_0.radius = 0.3563388794228648;
    tmp_tmp_msg_0_0.length = 0.7172807465381577;
    tmp_tmp_msg_0_0.bearing = 0.037002399484267645;
    tmp_tmp_msg_0_0.direction = 65U;
    tmp_tmp_msg_0_0.custom.assign("QDYKABNNZBWBDTUQCLKSXZHUSPPOQHWHKMIJTTGUPGRXFPFMYSBKKCLIJJPSTSTFEKIHEKRLXWBTMYQZAYDNODZPFZKUGMZNBIXYZKOEHMAONCTXRIELYJEIVIOXJLUFRWYQGGUHVLGYODECVEQNBJSODBRJLWENHORWIJMFUHQAWYVCFNOWSNJIPCGICFWBPSTVTOMMPLRSZDHVAAXUFZEXMBDHVRCXCQAVUPL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LeaderState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("ABIFHKBWFPEFPYXUSTELUPMAZHSFWQZVZLWFVOIRECECOAZGHXGEYDUOFVDLJTYDV");
    tmp_tmp_msg_0_1.op = 79U;
    tmp_tmp_msg_0_1.lat = 0.305634062038996;
    tmp_tmp_msg_0_1.lon = 0.4716925827861198;
    tmp_tmp_msg_0_1.height = 0.9071076532079932;
    tmp_tmp_msg_0_1.x = 0.49735110116940395;
    tmp_tmp_msg_0_1.y = 0.1568771899547603;
    tmp_tmp_msg_0_1.z = 0.06013532932246912;
    tmp_tmp_msg_0_1.phi = 0.6624184195291506;
    tmp_tmp_msg_0_1.theta = 0.5453505627624964;
    tmp_tmp_msg_0_1.psi = 0.06425417523774046;
    tmp_tmp_msg_0_1.vx = 0.1783838748223785;
    tmp_tmp_msg_0_1.vy = 0.19174428341109917;
    tmp_tmp_msg_0_1.vz = 0.09350460629574575;
    tmp_tmp_msg_0_1.p = 0.5850125506266913;
    tmp_tmp_msg_0_1.q = 0.22700153496261755;
    tmp_tmp_msg_0_1.r = 0.30377898765048483;
    tmp_tmp_msg_0_1.svx = 0.9867124486874602;
    tmp_tmp_msg_0_1.svy = 0.734979587522423;
    tmp_tmp_msg_0_1.svz = 0.22176855794088646;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YDEAMJFEFQIUEBUSJTYRWOMWEHCGUPTMAOM");
    tmp_msg_1.dest_man.assign("IPBGDGGWACKCKOECIUQFXNTTBCDTRSGOYRCEKQKVUIFHTCYRYUZKOJXNABYNBWFUHYNHHWEQSFLOQMHEJFEIVAITPADRGXHUJNAFQAYBTKEWDXYWEQLPJBYSJPGRUGOMMSJD");
    tmp_msg_1.conditions.assign("WMWOUHYLRFNPSBMBTXEZDOBJCQRJPAHDBFRDJAFBSDKAGIUXWDIXOIGVQDSWCGECZSHZODKEJLHPAHNYICVHRFEIQXVOZD");
    IMC::ClockControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 140U;
    tmp_tmp_msg_1_0.clock = 0.7419146724492385;
    tmp_tmp_msg_1_0.tz = 43;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.08645453647882595);
    msg.setSource(91U);
    msg.setSourceEntity(201U);
    msg.setDestination(35138U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("WFYUBIHWPXVCMFLSGQTNYQRTDATLAVNCXXPHDIUENBDAIJGFMPTPAREYRDVJGBGXCLRGMZKFERAKECZWOZXESAAFSPOUCGEOMEXHJUOJPNBHMOJAZYGVMTZFHJUVQJWZWGWMYSFYXMKSNNTYOOUTBZYFNWVUXLJULVBGDWULYPRKEVVPYHIBCZTKRMZKDQPCRPNJNCSAIORXJIQBEHLSKH");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("XOMACGLOCJRPIQYMFYKCMIYGNHESTQXLTEOIMPHKSNPWKPUBAFULASCKZZBZPUSBGGRUUQRWMKGFDNVHGOUTWDTVSPCFRVLFELNCNIFABATVRVWVTOOAZDFZPJYTTLYFPGDJVHYZHOVGJSTOIOBAEQWRXEKZNEQCCZWICRMABVBDWXWAXRRQHUEFJHFJGWIQYXXSENZBAIEWHXEMNIKTCQKBSHJUUDYKDLSZQLMPJDXUY");
    tmp_msg_0.reference_frame = 194U;
    tmp_msg_0.custom.assign("AKNAQAGQMWGSBHJGTRDPENXDZOQRMVNHCOBLXRWKAIGGITBZKTEOTWLHQEILVWOFRFEHNPPKSYVGFFWUUJZAKJNSZUZJWSZLLVYDLJGXQREFDQCRCCAZEXMYXHMUWU");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("NFFKJFUEDGUAHNYZPFQMZXWMEHNGQXGUSVHTSAJRVLSOVCUMQOWTLJLBZZWDIGCRFZGSEOBDNZFJNUQESMMHFAYJKGKHLYQQWIUDVREMIWIXPUYSDPJDVKEUBLSCXVAXPAPWKIVFIBMXXRHNTCPNTHSXDJFAQTIVYWCRAHATMEYTWVYJZEIJZRBK");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("VFEBUYBLZKGYQUISEVOJAALEGTQKVOBMFOEAXXWYWSNGTLCPUINOTMHWLDSQKVMZBPDKXZOFLNRVYIUSQWJXOFLXIDXOPDHVSZYYCXZHZQBJSFRGUYCYREJFIIJQNILTUAKTGWGDNYZMD");
    tmp_tmp_msg_1_0.predicate.assign("SCDQMCYQLDRZKENFFKYYPNDDZOTJJGTFBBGBVKKIAPLQLCLNXPHICVIVWEURFPFWAFGGJDLUAIPQRGJGLDAFNVNZJKAEDIOHFTP");
    IMC::TrexAttribute tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("QGYMOCLSKLMJVJAQXMMTFBGHHEYRFCVXKOVQIWVNDDJXNFCKRSBNGRSRTAEWTNPFEYWGYYDDFBICQYPDBLZFWEXICKBMPRZUGVWPSVJBTVFHRMW");
    tmp_tmp_tmp_msg_1_0_0.attr_type = 169U;
    tmp_tmp_tmp_msg_1_0_0.min.assign("YBECNMXUPZKFGMBGKLOLPIEVDUDXWTKGRZWUCLCBTWRPOQDDOBCKMJIQVDKWFXZXLHSIARBHTOPVBNYZBUGVHZIENMYRTHMQLV");
    tmp_tmp_tmp_msg_1_0_0.max.assign("TEOLDZHQZYFAUDEQRIUCUCFTZRPIWNOQBFSCVQXAKTPERAHLLUYINXHMZRTCGNSZIDDVTWVJFEONVPXOBMCOTBPTUAINMPDSKWFJYCBPQMYLJHSLFUIFGJSBHSGDZEQRORBXGGBNJXJQXCAAIYWKEGZLXRBDJEPSEKZZZWVLFIXKDHREKVAUNKOMIAVGPVTAGNQPOMNKWJFTUYARSQRDV");
    tmp_tmp_msg_1_0.attributes.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.tokens.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Announce tmp_msg_2;
    tmp_msg_2.sys_name.assign("XVLXNEWOSGOFVLNUEHKFHFOEBMYCHEOSKFKUEROERGHDPBBZLTESIADYWOHISVZJKGHFAKNCQMSBMRTNIGZTUUAGQSZYXXISCQPPWMOLRAERTNXIXIJKJIOFULVUGLZXGUPADFHDPKNYFRZRYIBMDGUPRAPIJMVPLCCNCJIHABHLVDWJZQPASZJKWQUJBYQZMFCXQQCWOLWKBNADYXMRLETXCNNYQTWMTTJVSDPETKCR");
    tmp_msg_2.sys_type = 251U;
    tmp_msg_2.owner = 54378U;
    tmp_msg_2.lat = 0.3533812813699446;
    tmp_msg_2.lon = 0.0024136669831668067;
    tmp_msg_2.height = 0.740298995944876;
    tmp_msg_2.services.assign("KIHCQCNOHZNVACXGANRPPPDQDRIKBYMENJQAUKLDRUFLIYXLGIJHMXTLZFWITKFXUZNCIDMKPBHANVEMRIJTOHWUCYNSBTSJCLFCGMTUPDPEGARZBOOWWSABIGB");
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
    msg.setTimeStamp(0.6359883224418644);
    msg.setSource(23067U);
    msg.setSourceEntity(75U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(65U);
    msg.maneuver_id.assign("NHQYDVRRFIIVEHOLJUKVSDGMSQRBZJSHSJPGGCPBNRGYFIDHYNEBJPVBRHTCXAKQLWKMSXSCMLOXZFNJHMRDMGTXJUASAVJDFPWIIHJYYNTTURLQEFBZVAGJVRAUHKFNLFANVWMIPRECZBXXODFUEILHQSWEKQKCUXBCZOWITAADHWTIVNKCGPAYEDYOKPUBZBOBDRPYAOYEEZTEMZPSMCXLXTOCOQKZMWQVTKW");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.4162355214101304;
    tmp_msg_0.lon = 0.7594664201567745;
    tmp_msg_0.z = 0.21595450985898346;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.45161816430015056;
    tmp_msg_0.speed_units = 46U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4783482164335512;
    tmp_tmp_msg_0_0.lon = 0.2287696800580361;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KGLSYSFDVACRJTQMAPAHULUIMJMKUFHFJNYFXBNPWOQWAZQETWLTKNYDSKGGZOWLYBFJPBFTEKMXHHODQURLWUMKUYPPSAHZAISI");
    msg.data.set(tmp_msg_0);
    IMC::DevCalibrationControl tmp_msg_1;
    tmp_msg_1.op = 202U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblConfig tmp_msg_2;
    tmp_msg_2.op = 86U;
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
    msg.setTimeStamp(0.7079660409047644);
    msg.setSource(28028U);
    msg.setSourceEntity(250U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(89U);
    msg.maneuver_id.assign("MXHAMPVBIISTPDBEPNWTNXRQXMTWLYHEAHUCNEQQJQRFOARRBIGIFKUEXSQWWCFZHYPNYERQKVIYSYELVNDBGKSOOSE");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.28169800061477435;
    tmp_msg_0.lon = 0.9557374656542124;
    tmp_msg_0.z = 0.8560990867366202;
    tmp_msg_0.z_units = 193U;
    tmp_msg_0.radius = 0.8482559879510593;
    tmp_msg_0.duration = 8005U;
    tmp_msg_0.speed = 0.6655641716059514;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.custom.assign("BEZJVGZJXDEIHLRDKAUXSYVXFSKFPYEQIGSAVEQWLNGDJFT");
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
    msg.setTimeStamp(0.6913295985677312);
    msg.setSource(354U);
    msg.setSourceEntity(244U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(82U);
    msg.source_man.assign("OVZCPYSYHKULFHBDELYBNVLAVMNADCJLWZAKOHXUMGJOVQGIAMNEZDGSOJHURCGMEUIRABMCKFCBGINEDCQWBPXNOOGKUQZIGFJSATQEITHVFQCJDWSWUNWDCRSGAOJBRRKGFYHYWATTZDOTMTRLHJKTKYIZEJYXXQWNTWXNZRDBNQEDBWPAKFBCMVFLI");
    msg.dest_man.assign("OPIQYMOWEBITQZNFZQTUY");
    msg.conditions.assign("RQIKZQVNUDDYKRTIXWIWUFHQHVMGEVICJTSOJDYNDZAPUNNUOGBPIHFNEPABUDTMCIUWWFKXFMZLAERXDYLBSFTJHRAFTGUVHIPEKQJWKYAYCQHTCOBMVRLBXVQAHBYLSRTMQRMGXJEP");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.6637976535692871;
    tmp_msg_0.i = 0.5061676564601085;
    tmp_msg_0.d = 0.5554961154773659;
    tmp_msg_0.a = 0.6591374922163616;
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
    msg.setTimeStamp(0.40284014331276985);
    msg.setSource(56419U);
    msg.setSourceEntity(30U);
    msg.setDestination(20405U);
    msg.setDestinationEntity(40U);
    msg.source_man.assign("PSCJGHXTEAOJJVRDMBSPEVVSE");
    msg.dest_man.assign("NBHSJTWIDTZDJRFMISEUBRRTFWDIOKOPKTBFWNPMUPGEGEEUIOCJSIERNSAGCKKUDWYRVNCFKRKQTSGNILVOECHALTPJPZIPZUAWBVHVFXBBMVHZGTEZQHAWDMHGKIDACQVWEBPQMSOIQKCBBRAXMFEWSHXNXBSLCCMNFMFQXJLYWLDDQHXPVAQXFUTDIKNSJCJYTRANFZAVYPKOJLLHVUUVTHZNUXLYGYYQAEPMJUGORXGQZX");
    msg.conditions.assign("WIESLLOYYWSXULYSYZVENVHUNJZKAQQTYLFHORZQROCOIAGVKOPSQPQUGTSNHNZKDBJCEEYJMGYXWBXDGQCBUFHWZJFONIHVMMPDMDTIPLEDSYKGUZCCCDRDBQWXBESIK");

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
    msg.setTimeStamp(0.9216175201704379);
    msg.setSource(62832U);
    msg.setSourceEntity(24U);
    msg.setDestination(34509U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("VLQRPRJCNEXBZKXZFKFUIVCSCETOKHDDRXXVKJTDJZOWOCVLSBIALWYGBWCQUMYEGZJCPBEICHMQZIMGRJAFQPIAFNUNYPUUHVDWAKNKJRABLDBDISEYKSTSYQAGKPPHPEYOHLWVSTHVMGRYFQXUWDBERGPHJKPYUUDLNCBSVOAAOGHITAOFGGXTULEDWMQOZWLIFWWRJZ");
    msg.dest_man.assign("DSPQQYJIIAMLCGBJAGFEVRQAXIXTLVOPJYZSDQKPWEWHDKMOLARSXPLWLHL");
    msg.conditions.assign("CZRHQJMHWKAKKRVDYERGUHEAYQUTLYIZPEIRTPTJBITGBGXSCZEWULCITGNUXCETJGYARFLFOCODTWKPMRRAVREQ");

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
    msg.setTimeStamp(0.18957762920773802);
    msg.setSource(11839U);
    msg.setSourceEntity(75U);
    msg.setDestination(64582U);
    msg.setDestinationEntity(1U);
    msg.command = 126U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PDQNZELYVXIWFHOIWGJTODRAHSCJVQJWLFKTEVKGYNFCRUBJBDEZPOOJSTYQNYIMCGHDKLBVSMMQFTXWI");
    tmp_msg_0.description.assign("JELVNLAQOJUHMUMEVYLNTQWDQEJEUQTJBTXRRGGLWKNCIYGZSYSJHXFZVGDRFAMIQHBTGDSLRHLUEJCXZBITCZOALRITTKOOYNKFBRHSLERVVWPKVAMSHRCNIPCPCUPVBPOAYXMXFPZOMBKAPXREWSFIUYIHHWUYSWVDMCZHKYQDOEIPPGBXTJSTZUFOHELSNXKGUAXBQKNGOCYCANDQCJKNMDQADXRIVVWZFBNTEJMDWY");
    tmp_msg_0.vnamespace.assign("ZHSUGJFRTDNLRUEHEZQFNJKLJCHGF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QSKZKHRYSEAYNVVENLYGSCXJMEFIJUCLJHYJBODIIZKXDAIGNMKLUOQHBBCRIUREYWJHZIDVCWEPBQNOFOQUFESOGVUXHOWBKOPUYBCCYNLGH");
    tmp_tmp_msg_0_0.value.assign("ASSPDFZLPAVVRMWTDVVOMKCKQIHPYVTLSUNGCPZTYOFIZSXGUAEITEFSGOZRZJNMXQGUXRZJUJUWFQWAMYYIYBHXPFUKTUTVDIQMAGZIVDHRMHRLXOXLDYOCKEEHVQBYXWKNQGNMCHQHXDLMHGROJBALFWLEROYDYNESNFBOEWMVONPEDDCIWBTQLGRKTKBBJISJPCWWTENXRCUALZZNTDVIXUAJ");
    tmp_tmp_msg_0_0.type = 76U;
    tmp_tmp_msg_0_0.access = 218U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IUJIPGNQGDVYVTEYWDPWYTBGZUCZJAFCSUGXY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YQZNIQSZCKHKTEUBTIOTQFJSDLMRQXMWSQDABFGLJUNRQRIQANFEMBWKKOFLTGAFXEECBNHLJYXZADGAHWUWLEDOFYEOFZVCVEJHCDIUMILMDSXGYTNZJKJXTUTISLLDCWHPBIPOKDPCIRWFVGWUBYVPHXZBZDJXCOMYPBNHNJXSVFNOEUKPMMIRDGKVNUGIPBQRNLVGYTKJZQGHJWOSUAOSSXPGARABVERAAZHPC");
    tmp_tmp_msg_0_1.dest_man.assign("PHWCUYWZHJABGOOJIPHAEKLYHYHBTTVYTYJIBSRDSXLHCRCLJGMMADVVOFQWSSWTKCUYEZWUPLADIMUTJNPXXODEOJPFXTZUZUPFLMECRMWPQWBOHYDOHISX");
    tmp_tmp_msg_0_1.conditions.assign("ZXLFNIOXDAXQEJXTJTYIFAUVEITITUYZQOSDRMTFAPKAQWKICJCQUKKRWKPJVEWEGIWOTYLBRHCPCZWNEDTUJUCVHUFKFXDVMBMONVFKMWPILVWPJFRTLUWEDZIPJLIBFHZQNRVJOSMQMZGNKZHBJOIVENBRALYGXEBAPHGYPMCMYHDOLXKRRYVYMNPRUNCDLGFYHAQRSQSSLVYCWXAJUUMOGEZDHSPZSEX");
    IMC::UamRxRange tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.seq = 23836U;
    tmp_tmp_tmp_msg_0_1_0.sys.assign("KZGUZJHLGEROBQNADWKIHTSRSECWJXCMUGFULYXUCMHBNRFQXHZECZVMXKZFTEXGGUFKLIOEYJRUQHDWSLWVJSZUAYJWYYLPACHNHJWCOBRDZTBOPBGIAKDUOKHSZTQXKIDGTPLXFOSRFPRBLAMNLWPKFCYPQN");
    tmp_tmp_tmp_msg_0_1_0.value = 0.6633858997069622;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxFrame tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 51306U;
    tmp_tmp_msg_0_2.sys_dst.assign("UHFALHYMVSWRGBQEOAOCLYMRACKZPMZFAJFQQWVJISIOCARUTBWOEHGCQIMGSZBIXEEXCKDFYJXBKRZ");
    tmp_tmp_msg_0_2.flags = 15U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-10, 49, -79, 88, -98, -37, 22, -73, -30, -53, -79, -44, 103, -59, 101, 107, -106, -82, 72, -86, 126, -78, 97, 58, -97, -52, 62, -24, 119, -1, 95, 62, -5, -60, -108, -121, 74, 9, 73, -118, 3, 18, 50, -2, 46, -70, 21, 59, 11, 105, -3, 57, -3, -86, 53, 1, 52, -104, -116, -100, -126, 64, -5, -96, 17, -79, -100, 79, -22, -3, 110, -85, -4, 93, -73, -38, 71, 47, -16, -74, 93, 46, -117, -98, 116, 25, -83, 43, -123, -11, -15, 96, -67, 18, 114, -55, -10, 0, -59, 85, 111, -44, -69, -2, -14, 56, -33, -51, 124, 50, 93, 94, 114, -5, 96, -87, 122, 97, 51, -38, 99, -5, 79, 77, -104, 40, 121, -5, 103, 102, 23, -44, -46, 8, -55, -75, -42, -74, -95, -40, -11, 8, 108, -109, -43, 42, 80, 63, -128, -44, -122, -71, 75, -92, 19, -88, -114, 126, -74, 9, -13, -3, -13, 104, 39, 58, 60, 33, 13, -5, -80, -106, -123, -108, 108, 60, -78, 55, -73, 92, 67, 93, 52, -68, 51, -95, -20, 1, -59, -117, -95, 102, -116, 14, -81, 116, -91, -56, -72, -4, 72, 72, 112, 32, 72, -47, 5, 82, 115, 36, -27, -15, 26, 94, -17, -112, -20, 19, 78, 56, 26, -23, -25, -40, 0, -118, -91, -35, -40, -73, 56, -53, -79};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.462134291288234);
    msg.setSource(28635U);
    msg.setSourceEntity(228U);
    msg.setDestination(54950U);
    msg.setDestinationEntity(164U);
    msg.command = 116U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FIMMBYXJGHYCPVETKF");
    tmp_msg_0.description.assign("CDKXFFJDZDKGFDYEZGMSNOLXYUCKPRZVWQPTHPUXJTWTGHOJAQVDETMJVSPMOMQEGFEGGKXHLHBXCMENTLRTSWUFYXBVQTERWVYCBMFOCLIWUPRMHUNNVPGIHTMCBSMBCNSIEAKMEBYIXXGROLECVRSZWISNUNVTACUIKALFZFWYRNZVDKWAQSVLJKBLBYUATWPLAZNBZQAJORZRFRKHASIQIUX");
    tmp_msg_0.vnamespace.assign("YTZOEPJPYDQPHWWIBFAODJFIKHLGUTXJVYWTIETAYVXSOEFQEEBLVVXFZOGARERHMQSMGTPBXSNWCYUHJMBOTETLLSIICBVSFNGXSXKIZAJWJLMBADCWQGVRHGEZQATVGHPLETFCZDZXUSWQCUMWNFZ");
    tmp_msg_0.start_man_id.assign("FJLMREDLNBFSCFLDEDESZVUPVFIASASJZNXXWGQMGEWMIIMOPKVRPYTLNQYJWBF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CDDJNVSQPEOMCLEAJBPMHYEZUROZRUAIBGE");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("MJFZBGMYMKNZTRBPPZBZCHFOUJGTSHIQJIFAKWBBSRGMQFZ");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("QHEOTNJZTSIDNWYSGPFQKQYJQUXIDVBHCCJQYUFLFCRLXFHLDQXZYMGBTGPYSMPVKZTNKKAMESBTBJUAIDHCJVCUZZBOQGMKIWRMCVI");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("VJTFHUSUZZHZCRRPNPDTCCYAHDBIHVWCOZHABKGBOMILDXKZAYECSUGIAWFTSXPDQA");
    tmp_tmp_tmp_msg_0_0_0.description.assign("QKFIWPJNKGWQEYBOTWBTXZMRVGABYHACSCJOEVLXXDJRRNYKCAXFQWMLQOTIBDAIDATVJSSLFPKPZQFTUVHRCSOHEJZSPKOEDIUFEZVUXEEKR");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.6508705854731541;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.6788084912886865;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.8676874686648168;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.03096477060891023;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 58864U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.36089252262123206;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 47797U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 53929U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.6431943375659084;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DYEZNCRZAOUZFLQDXODHZVKALRWOYXZMXHRMMLCSCVKTFHYAJTOELQRGNJLBUENVIQIDIUESCKVYPNLCIPFOEOSXO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 66U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PWBNFVANCILJUAORVHITHTBRQYUIXVHBOATGZSLVBTGTGVUIUKSIKKQNBWFRQFVCPDUQXREJEYDMEEWRQLEEWYUXAKDTIRCXPDFMOSINOXHJEDSDRJOCFKESZYVGGWPZMHFOZAKPUFIPBJHDKJALLRBKQZOCHGSZMOUWZCVKPLSAYNS");
    tmp_tmp_msg_0_1.dest_man.assign("MAFYCSLPVNQZNJRIKGVGBYTWFSHJGVVPYJOKECDFRHCTLCKDHOXXNPBZCSCMFGIEZEURAQHQJYIVKJLWUTEIBICIPZBPNOFWPIWFZOTNKCJ");
    tmp_tmp_msg_0_1.conditions.assign("PHTSJVYGCNPAMWJVTZSGOKBHDKQVKHWZQDHIIRWFDRHUUTTOJQMLKYMVOJYETKOGUXNDYUXNRIQBJJXPFKBHLMAWUVIEOGTVIEZNCUPCGWKMBDGNRGNYAYLQZONXTOSCQWOSEPBKIYTFRQWLBBWBJUFEZMFADMEZNUAVDHUAMAJSLFZSGSRVRCIRGCSCQMHZMFXXPDEARZLGPFVIXZPQVDLKWXBQSEHCTLTEOHIND");
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
    msg.setTimeStamp(0.9687113121947766);
    msg.setSource(54612U);
    msg.setSourceEntity(196U);
    msg.setDestination(61093U);
    msg.setDestinationEntity(207U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TENKAEAPWEIJYCICSFFJBYOJMFFVMUZPISNAXPZHSQLZHSTJIWTLWZYSGTBKHANXJWNNSYVCGUUMDBXERKYCOWVRNAESOCSXUBBNYFUGL");
    tmp_msg_0.description.assign("YAKGRQXZIWZYIFEOGMLWDZTESCTVHGJJUJQBIBFMYAUUGTOECKQLOFNVJSOYNTTRHKBWTJKASPFZDGZWTDHAPISLLNOUITAZRGVLMHBRYXPKPDQ");
    tmp_msg_0.vnamespace.assign("LNILHIFPCXAPKMNTFKVOOCQAWZBQVABPCSRSULRKBDNEAWCTHLVUGWPDWFNPW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CBXIUMDOTREZRODHXCEAK");
    tmp_tmp_msg_0_0.value.assign("GQNDCFTZZVJEIDBLBEUBEMPSAYJORSOUMLBNQAHQDLQSGSVEWLPEUIKGRDBLUNSCRXHOHYNJCFWMJOFWMUCZOTNZMYOKOEVPYVQIHFZWTBPPUCTDRVAHZMZUQMJGVDVYQCSZIXZJOXISCAQGBRPUJYDLMUKIWAISKKTKBXWXHPLTJMXHENFWTTZDCAPQWTGWAYFGJXTVKENEPINQODRYAIJXHKMPLBXIY");
    tmp_tmp_msg_0_0.type = 206U;
    tmp_tmp_msg_0_0.access = 8U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OVBOJZJQFFEJHMGOMOPZTLRCCABCUEVOVBMRLIMHEEIXHFVJPAEZTKGEWLMFWYPNMDLHIFUOJAKQJOPRHNSULBZQVFKBRKUIWHCNQGTRNPNYSUNHWYTDMAGCACDNABPXLYSYIJQH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DGZIVUSKTNOWTUWKBJQFVWOKDPSYIRKPXZTOLNSXRAZFBIMXMMTQLYJHCNYJERLSGTFXLRCWCRYZQUAIGLLODUVSNMVPIGMNWCDMJIUDLHXYSFPJJIDKVNRWQRAOGBLKKUFGSOIBAMZAMPPXZOBQNLFYVSUBDAHZZATTWDXYHHBMFTKEDETTYSOWWVBVFSGCCGVXVNQHPZEPHUKCRZCHEUIDRAFWGAYQJQGEUENJCQCH");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 63257U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.32937388867999573;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.27190710654424766;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5211566859362761;
    tmp_tmp_tmp_msg_0_1_0.z_units = 139U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9331762829349439;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 1U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.731481098004737;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.016441276117891146;
    tmp_tmp_tmp_msg_0_1_0.width = 0.14774969292675755;
    tmp_tmp_tmp_msg_0_1_0.length = 0.04880375557514549;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.8652539380920943;
    tmp_tmp_tmp_msg_0_1_0.coff = 30U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 104U;
    tmp_tmp_tmp_msg_0_1_0.flags = 118U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SNRSALUKAYCXYNQEDYKDNAMRTHKBSYVGZRJXXHWDOJIZJRBPEVZUDAJFKEVBKWYLKANGZSBACWOWOABHDLPCOPQIFVYEYUODTMVAYGYFXGFUCZXXRCLRKUIBLUTNVDMIITDMNXLFIPWHLEPITEREABMDCLTQVZQRQJGWRPFTWNQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ControlLoops tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.enable = 211U;
    tmp_tmp_tmp_msg_0_1_1.mask = 930375193U;
    tmp_tmp_tmp_msg_0_1_1.scope_ref = 846644846U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("PQIGNFXGUTMTQBPIZSUO");
    tmp_tmp_msg_0_2.dest_man.assign("VKTXVLKSDAKNJYOHXQMONZLPHHIJJTVTBROFZFKYODRTZSECUVLZAZLAGMCUNPJZTBLDLELACFICRVJRKQTXUBBJOLRAGCCKAAVUUYDORGDQCIJDTFTPFSZK");
    tmp_tmp_msg_0_2.conditions.assign("HXJCQGOELRCMDABXPWWOQBRFNWEWENIRZLRWFDTUCSFNHSVGMBGRJBIOSHZCBARGDQSVYSKWSLOVZIVQXSDVNFKURLLDQYFPJJMLHHYUEFMQTMEYTQXXNNMLDJPKOKCGOXYGMIHHKYIPHSLTBPEUNGNOZQCPVPDNXFETYTBPKUAZCCYDRAQWVJULZDXTGVTUKIEDJAVSRKHHOWTTBNBXJJOFZZKUMXKIAOUAMGLIASGABIYPJV");
    IMC::VideoData tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 18U;
    tmp_tmp_tmp_msg_0_2_0.width = 51542U;
    tmp_tmp_tmp_msg_0_2_0.height = 553U;
    tmp_tmp_tmp_msg_0_2_0.widthstep = 12947U;
    tmp_tmp_tmp_msg_0_2_0.channels = 43U;
    tmp_tmp_tmp_msg_0_2_0.depth = 112U;
    tmp_tmp_tmp_msg_0_2_0.finaldata = 120U;
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-36, 45, -69, 95, -96, -64, 108, -45, 83, 28, 103, -101, 49, 71, -13, 19, -15, -40, -64, 15, 79, 63, 117, 1, 43, -20, -120, -51, -40, -8, -4, 101, -56, -9, 0, -84, 115, -79, 43, -31, 22, 65, 16, 64, -128, 78, -78, -125, -117, -81, 23, -88, 0, -102, -99, 3, -83, -96, 22, -46, 53, 32, 63, -13, 13, -81, 124, 124, 69, 2, 39, -117, -121, 111};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.44354993107592067);
    msg.setSource(31360U);
    msg.setSourceEntity(166U);
    msg.setDestination(12761U);
    msg.setDestinationEntity(208U);
    msg.state = 125U;
    msg.plan_id.assign("KTXMLIJNPLYWGGKEFDNQQIZQRHWJKLPYRRZQABXABJXGONVHNKKXCWOQUPGTFXDYHIMNHAPWFDXLVJRQINVSINGLUEDSMKRXTOZBDWMAGDQILNKMWOARAORQCWYAGTEFJPFLBDYMVFVJSANUTPXSEZEDIYMJBOURNUWFTECOAHKTHDJVYIOEZSIOMCCKPVHYBZZGUCLUEBUMWDASBVUWFKBXCCRZLZSTQFHGOMSIVLBUCTQPVHPFGHTSJESZ");
    msg.comm_level = 164U;

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
    msg.setTimeStamp(0.10751124039408866);
    msg.setSource(23889U);
    msg.setSourceEntity(204U);
    msg.setDestination(21483U);
    msg.setDestinationEntity(62U);
    msg.state = 151U;
    msg.plan_id.assign("WXRNPEQEAYMNAZZICTSWIWGONITVJHIJFOHLKARVSBVWPBMJCTBGGPTQAHHZLIIMRAAYUYPLMLHUGBXXNWDQNPCZBVOEYVDQHYMR");
    msg.comm_level = 100U;

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
    msg.setTimeStamp(0.9115488472719814);
    msg.setSource(15607U);
    msg.setSourceEntity(178U);
    msg.setDestination(48110U);
    msg.setDestinationEntity(60U);
    msg.state = 195U;
    msg.plan_id.assign("ZYDTQVJIOUDBXFGYGQCIASKLJFVTBPJHFGLNEDMQMPWBUSRQYNNUQHTIBEQAJNKTCOWCCENHXAZIIRHORBTKXEPIXSN");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.30976316442518537);
    msg.setSource(11135U);
    msg.setSourceEntity(199U);
    msg.setDestination(32601U);
    msg.setDestinationEntity(130U);
    msg.type = 202U;
    msg.op = 41U;
    msg.request_id = 21955U;
    msg.plan_id.assign("ZSRQIXUFUFOXODHYKVKTTQJZMWIARHNYXRIQPLJCPIGFTWCAEEHODSIOLN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PZRAKJCXYNQJAWSXMFAJBBLFOLEDXJPOIDTWGVRWXRFBQBCOUVRQZDFHDPCSAJVTIYGKCNAMELPIEWEKDGIFHIEPINDMEWSIZNQNHZOYRWSTPULEXNYRFAGNTXLZVUHLVOMSFMLMYYDAUVWUUEXTJGGMFCKKIKOVVAMQVYUDPFXKLCIBZTDJBOYVTJLHAPTOWPUMNOEEHZSNCKCBBBDCRSQQWSIGQJYKRQQ");
    tmp_msg_0.value.assign("SOSJDUPNRUIGZLIMFMENNEMOGAVUBFVIAFNZOTQXW");
    tmp_msg_0.type = 210U;
    tmp_msg_0.access = 87U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GFQNAMGSYCKCTHEOKYMIJRBPRUHNDADXOEOKWMRCTRFESIVIDNEBHLCGUNBANFOZWCZRCPAQMOSMETNZGGBRJDNGWGNAPPOJAXVJHSARTTFSYWUTQJWBLQINIZRVEDFZYSWICQKDEXFXLXOVQWYRBUVZWYTCPCXN");

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
    msg.setTimeStamp(0.8621996249559937);
    msg.setSource(33805U);
    msg.setSourceEntity(129U);
    msg.setDestination(665U);
    msg.setDestinationEntity(23U);
    msg.type = 122U;
    msg.op = 112U;
    msg.request_id = 51890U;
    msg.plan_id.assign("XSBRZIEEZHTVHFXCABCDCLQOCFIGMBKIHBQVJYUKUDNFTDGBOGHHRNVKEXUJAGHNDOCIHLDHIFEUETPKBJDWYCZLEJRJBLOSPFSMOZQLYWYQMXOOBZVZKGVTXRNRPNFVNNURLASMIZPZKTXWNWPXWPQUTYSIFYEMSDRCSJLXAOANDCCNTWMSIFYVVBLLUOAYWCSKDOWQPKHMDAJFJQBYIMPVGTUTSJVEPWKJGRUMFEZ");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("FBVFLQPMGEAJMBYTMCGSHEORHQMZTYKBXWKUSJGTJCHSUYEFWRFCIVLDIYHEAJGBDDIFCEYXSPXNBUNVAPUVHULYSBGMKIRZHCRLHEKNO");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("GOEBDUTYRJQRCZDFGGJUKGTKKCVKFSICVOZGEVRZDRTJQJBHXILIIORFYAOUGIBDYMZRVE");
    tmp_tmp_msg_0_0.feature_type = 132U;
    tmp_tmp_msg_0_0.rgb_red = 114U;
    tmp_tmp_msg_0_0.rgb_green = 186U;
    tmp_tmp_msg_0_0.rgb_blue = 154U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8292365184894731;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.14478652892653743;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.18512165968143712;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SIGYRQGIUXLWEMNGXWXYRFXNISDNJDXNASTAECLATKXTVO");

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
    msg.setTimeStamp(0.36847636316252885);
    msg.setSource(59113U);
    msg.setSourceEntity(143U);
    msg.setDestination(27487U);
    msg.setDestinationEntity(122U);
    msg.type = 182U;
    msg.op = 230U;
    msg.request_id = 36757U;
    msg.plan_id.assign("SFIUAYSIFVPFSYBGJORVXOTJOMYQAHPKDMADXFZWDXWJDWCSQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ETFMKWSYPUKTIGXLQWECEHLSNSYHGUIQIJKCQDAYLZHMRPTOBIOXFHWFFSBSVGUWTFEMDDVKOAQVHXRGTPWNYPHOEZBXEFNAWKASUYQVFRYMBKHOOTIKZCXMNLCUVGCEJPNKSJVADZUJCUBAZXZKJQOHMVEDMWMGZRXBPQSBGBJUADAQPGLEMTDWGTZQ");
    tmp_msg_0.sys_type = 25U;
    tmp_msg_0.owner = 63329U;
    tmp_msg_0.lat = 0.925691062225287;
    tmp_msg_0.lon = 0.7713910032840648;
    tmp_msg_0.height = 0.8368944454683973;
    tmp_msg_0.services.assign("ZHPBHLFNEUNDCXLJVADXYZQOFSINVKPCZKBYQFKFAOHHIYDAOENUGLFVVEJSACWYKU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MQFTXKJMKLAEBCWRIBEPUSXFVBTYVPCDHMJJRUBFDSWSAVUNAZFTPUWVKIYPBFTEQZMCMWRIQELBSKQXIVIZDNLRGSPVBIELHENGCBPOTONWZKTZVHJDAXWVKUJGFZOPDOXUUNSIMHHEJONKDHXRMQLONCYDYYAZXQREKCILRSGJEHWPDTCJSOOESTAQAGBJQFCSTYHIKPM");

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
    msg.setTimeStamp(0.1137701804537391);
    msg.setSource(11800U);
    msg.setSourceEntity(26U);
    msg.setDestination(38369U);
    msg.setDestinationEntity(109U);
    msg.plan_count = 26264U;
    msg.plan_size = 1642478973U;
    msg.change_time = 0.06676570084015199;
    msg.change_sid = 33866U;
    msg.change_sname.assign("YRADDTOZJPFRJBBMELZAKNQWDVCAJNEGAQSFNRXYWTLLIYVPECYRIVQYBKBRWVWCMEFPJSPYGHBSATNKMJPQCSXZDGMWGIMFOS");
    const char tmp_msg_0[] = {-19, 40, 124, 108, -15, 22, 65, -95, -102, 39, 26, 61, -56, 99, 24, -82, -119, -87, -78, -109, 70, 104, 86, -30, 118, -37, -88, 12, 15, -98, -101, -124, -126, -114, -4, 53, 125, -27, 72, 76, -25, -50, 69, 97, -111, 56, -8, -9, -46, 97, 65, -98, 24, 114, 32, 106, 37, 105, 126, 41, -27, 125, -61, -50, 106, -107, 61, 87, 88, -8, -1, -115, 48, -1, 38, -117, 59, 45, -99, 100, -106, 92, 83, -34, 121, -38, -1, 124, 73, -12, -107, 85, 42, -77, -52, 112, 27, -11, -68, -51};
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
    msg.setTimeStamp(0.21942530647939307);
    msg.setSource(49272U);
    msg.setSourceEntity(164U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(241U);
    msg.plan_count = 4641U;
    msg.plan_size = 2823424757U;
    msg.change_time = 0.17660791707427814;
    msg.change_sid = 23639U;
    msg.change_sname.assign("YBBTOVOCZTIMHGEJYPNMBURAJTJQETQNOQRRSHNFLKULFFHPGLLYN");
    const char tmp_msg_0[] = {-51, -43, 92, 119, 103, 100, -118, -24, -22, -11};
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
    msg.setTimeStamp(0.7011138977103061);
    msg.setSource(42169U);
    msg.setSourceEntity(233U);
    msg.setDestination(28418U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 21406U;
    msg.plan_size = 2261101029U;
    msg.change_time = 0.26955026623363887;
    msg.change_sid = 34762U;
    msg.change_sname.assign("FCSADPDOVUUTWGPXMEQCNNSSMAOOQYVDFUXXUTNYZVNXQFXDZNMJNOEBJFZEUBPTBHYLFWHKYTRYVZEAHMABZRUQQGAKHXVICXQYBZOELTADPEKGYTPIZEJDJAAVXCCPJPKFWMWNILTWOHSLBWQSMFGDUNYUJICNCSILDTEIZLXKBFNQHR");
    const char tmp_msg_0[] = {-84, 40, 111, 8, 98, -49, 108, -20, 107, 36, -97, 7, 54, -69, 114, -13, 117, -82, -60, -17, -33, -58, -100, -67, -128, -41, 117, -12, -33, -69, -125, -121, 34, 20, -77, 86, 125, 111, -14, -58, 19, 85, -104, -101, 3, 72, -51, -125, -56, -68, 119, -117, -53, -114, 40, 56, 9, 120, 35, -16, 111, 92, 96, 122, -61, 54, -112, 13, -99, -70, 1, -63, 31, -86, -116, -75, -85, -75, -17, 110, 28, 27, 93, -82, -26, 78, -119, -60, -23, 49, 24, -53, -105, 115, 90, -38, -126, -45, -46, 25, 39, -109, 123, -98, 20};
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
    msg.setTimeStamp(0.901909927403905);
    msg.setSource(63496U);
    msg.setSourceEntity(44U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("XBOQBBJCQEJQRGMPFKHRFUSHMVGMQTNGHYSDWKS");
    msg.plan_size = 31130U;
    msg.change_time = 0.16671076149760888;
    msg.change_sid = 35609U;
    msg.change_sname.assign("FZQCSMPYXPPGKRNJRW");
    const char tmp_msg_0[] = {33, 32, 114, 74, -48, 15, 12, -43, -88, 126, 110, 114, -49, 81, -57, 105, -2, 82, -108, -45, 25, 9, -13, 45, 114, 111, -61, 103, 101, 115, -102, 48, -14, -86, -54, 47, -127, -89, -21, -100, 115, 90, -122, 10, -119, -5, -20, -106, 76, -8, 51, -41, 18, -16, -127, 13, 105, 51, -37, -23, -64, -116, -65, -61, 32, -2, -28, -66, -28, 123, 21, 67, -89, 82, 110, -28, -76, 85, -23, -102, -12, 109, -118, -89, -84, -26, -61, 59, 11, -38, -100, -119, 56, 32, -87, -32, -50, -125, 33, 111, 54, 121, 126, 102, 50, -66, 102, 17, 33, -94, -57, -107, 75, 61, -104, -78, 31, 108, -127, -77, -124, -11, 117, 116, 126, -85, -115, -61, 10, 109, -61, -64, 24, -122, 126, 74, -103, 94, -72, -127, -28, -58, 95, 77, -76, 39, -28, -80, -12, 110, -24, -39, -65, 32, 90, -12, -116, 72, 96, -15, -77, 20, -46, -36, -124, 1, -110, 12, -13, -20, 83, -68, 72, -82, -102, 29, -90, 106, 52, 21, 66, 38, -118, -63, 6, 111, -117, -88, -55, 55, 89, -100, -36, -102, -98};
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
    msg.setTimeStamp(0.3247164223257104);
    msg.setSource(6847U);
    msg.setSourceEntity(58U);
    msg.setDestination(21732U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("NYFTESTDJIFTXDKAGEBKIHAMPEBDFGETAEVHFLSFVBWLRWLYWDZVACIMPLXOXSLZAGBVIDNYTPTOSSPZVQQPMCDKCMAMQTUCSXZKNNOGEHUIHBHALCJZKBRJSZLRQCWKOMGJJJIDNNHNFBWOHROVRZ");
    msg.plan_size = 13158U;
    msg.change_time = 0.7351545196199206;
    msg.change_sid = 5054U;
    msg.change_sname.assign("JWILCBAWZQYVEZSQZZABOTESFAAPPTYMQEMXLWKRLJQDSVQTQTLVHGVDLOPFITLHPGHJGZINYOJOHOVZBCFOTHPBBIBKJHXLGXUDKFSTYFUH");
    const char tmp_msg_0[] = {-114, 46, -59, 126, -21, -32, 12, 84, 85, 91, 40, 16, 43, 78, 2, 96, -120, 122, -95, -105, 90, 72, -38, 72, -93, 9, -96, -73, -30, 72, -85, -23, -112, -109, 28, 44, 86, -55, -9, -47, -62, -111, 116, 24, 77, -109, -95, 18, 87, -62, 34, -114, 110, -121, 29, -33, -85, -5, -100, 74, 118, -83, -19, 85, -100, 86, -28, 14, 102, -24, -82, 126, -44, -64, -96, -101, 41, 100, 53, -62, 117, 34, 70, -41, -107, 106, 28, -122, 55, 49, 91, 119};
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
    msg.setTimeStamp(0.464401963230618);
    msg.setSource(39838U);
    msg.setSourceEntity(217U);
    msg.setDestination(23645U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("LONEVTFQKSPMMHMEENBXFCTZEWAMYMIDGQBOAGDLZFRBLSFAXPCKIDIDFZINEWIXPMPXFYYDRLPCEROKSNCCUAJXXGZVFUHYNKUTQQKHRKRURUTWTFVYSUYCIOVTRAUDSEXIZUVTQQYTYHJHCWVZKSJEYIWLIECJXQSLBNCKHCOWVBMVAMTBWBDZXLGGINLKNGHOAURWBNJJQQGJ");
    msg.plan_size = 62151U;
    msg.change_time = 0.359373000279948;
    msg.change_sid = 11913U;
    msg.change_sname.assign("HNHLIAVLKHSWAMHCOPWIBVEBRQIJCWXBIBQXFLKPAIGCEMQTMQVEARTYCLBNWZJKXMZDRMIL");
    const char tmp_msg_0[] = {70, 68, -5, -38, -128, 59, 11, -21, -28, -55, 42, 72, -39, -59, -89, 11, 65, -78, -67, -100, -126, 126, -31, 23, -80, -62, 108, 121, 35, 76, 43, -4, 8, -115, 65, 85, -53, -98, 54, -5, 1, 61, 114, -98, 115, -51, 20, -91, 67, 44, -119, 41, 27, 111, 1, 104, -125, -45, -51, -87, -87, -39, -33, 20, 117, -92, 26, 17, 0, -54, 121, 6, -116, 93, 74, 95, -55, -75, 97, 19, 34, 34, -51, 111, 65, 7, -35, -109, -89, -58, 28, 119, 45, -65, -6, 11, -113, 72, -128, 70, 32, -44, 36, 41, 80, -17, -38, 14, 95, 61, 82, -123, -76, 32, 52, 28, -45, -30, 46, -36, 82, -98, 110, 76, -45, -1, -63, -99, -13, -30, -98, -75, -99, 73, 2, -49, 104, -64, -25, -88, 54, -29, -1, 13, -81, -50, -78, -37, 2, 37, 97, 21, 22, -48, 105, 94, -50, 43, -111, -123, -76, -68, -55, 31, -87, 21, -7, -54, 31, 109, 81, 110, 19, -32, -86, 101, -100, 16, -82, -4, 85, 70, 21, -110, -26, 42, 106, 98, -56, 104, -58, -102, -110, -9, 98, 44, 95, -63, 27, 93, 33, -33, -15};
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
    msg.setTimeStamp(0.7512972818715171);
    msg.setSource(60465U);
    msg.setSourceEntity(223U);
    msg.setDestination(7830U);
    msg.setDestinationEntity(228U);
    msg.type = 103U;
    msg.op = 210U;
    msg.request_id = 45981U;
    msg.plan_id.assign("ROLQGZXFHHOPFLOUDKJXBVDGULXRPPROEAQ");
    msg.flags = 926U;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 54U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KZJLILBPFLNAQBJQRNHEJNPCDCVNBSULIGYYRWYWESHAQYSHQOVYICBZJFMQCZWSNWXGWUAPCESBINZBSKFXAMXQLVMJURLXGWUBYVAMGSQITRIOCCWFJXQXOBMYEDXNWMKFGTKTNSVLMUOTDUTKPZAYTZQFNKBEESPSZDXGOOKAFHYODGYFCMRKKVFZRUTZPAHRERFIVAMDJOLIZTDIXTEUMJGRPJLVDHBDICHJAOQHVLPP");

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
    msg.setTimeStamp(0.29378100751433167);
    msg.setSource(61917U);
    msg.setSourceEntity(145U);
    msg.setDestination(46860U);
    msg.setDestinationEntity(128U);
    msg.type = 226U;
    msg.op = 117U;
    msg.request_id = 58999U;
    msg.plan_id.assign("ERTTJBZKNKEHFYYFEIQJKDOXGWGWOCXZHRBNMPDXGYDAWGESQPGHTFYMYSZSYFEOXSFDWCUPLRWFKBPEUXMZUDUCOHRKOLZKGAKGMTKWOIPPJMCDACABZVRVSPICTDKEAAVFRYIHTDVXIEBSVJNQSJXIBQQFVMIAKLMJTBXVW");
    msg.flags = 44361U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 58U;
    tmp_msg_0.x = 0.9843778795387418;
    tmp_msg_0.y = 0.5567125894612462;
    tmp_msg_0.z = 0.3004732334550745;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FRCJKIKGOWNQOJMYOEAQUXIJPAPPIXNDNEDITOPLMVUTKCVQIUQCESHFAGZQMJYWUJQBDCQMCYXNFTEDKWGKVJFLUZIVPAEMTGNG");

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
    msg.setTimeStamp(0.161878902478231);
    msg.setSource(33371U);
    msg.setSourceEntity(73U);
    msg.setDestination(34519U);
    msg.setDestinationEntity(166U);
    msg.type = 71U;
    msg.op = 242U;
    msg.request_id = 19566U;
    msg.plan_id.assign("RDAJMOBRNRXDMWFYNBRJUUFJKSXBDEUIMCNDYOMV");
    msg.flags = 18683U;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("FFYOGUBMDKWDIEHQOQNENLGJEVXJGNSIZAGCVHYPCHTBKQWZCQSYREIAOAKXTMZGWFKQEQCSODXMGDKERFMDTUNXVBLQSNOWKFZYHIUIKVYGMZLIVXMCZZMOPXDLARTLWQYVJVMXOPPXRBMBFKDJTFSDUBRWESNGPORKALHQTYRLXBFRFOTJRSDWZVUHCSNCV");
    tmp_msg_0.text.assign("FZXIZFOANAMDCDWIPWVCALMTESQGSPEBY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUKRGZMZUNYPTCYAENGAHKYFTVQYWJJJBXGDEVSARL");

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
    msg.setTimeStamp(0.35957968991873446);
    msg.setSource(50606U);
    msg.setSourceEntity(56U);
    msg.setDestination(53586U);
    msg.setDestinationEntity(238U);
    msg.state = 205U;
    msg.plan_id.assign("XWZQJHTIDOKX");
    msg.plan_eta = 2037574808;
    msg.plan_progress = 0.7352309583052774;
    msg.man_id.assign("TUOKHEPMLAVNR");
    msg.man_type = 30425U;
    msg.man_eta = -1830562675;
    msg.last_outcome = 210U;

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
    msg.setTimeStamp(0.6756781619093581);
    msg.setSource(10284U);
    msg.setSourceEntity(169U);
    msg.setDestination(45229U);
    msg.setDestinationEntity(236U);
    msg.state = 188U;
    msg.plan_id.assign("SWFOFXDJOIGKJEFTHPDWVHXPCHERTQEHLXDJQCDW");
    msg.plan_eta = 1328116831;
    msg.plan_progress = 0.549761500813301;
    msg.man_id.assign("ZZMKJYQETMGNYRHROFGBDSJEZBWSSWSWAAZTEDJNJXKQUWKWRJFPDOUCFJYPONPLVEAMKYITXGENHAUIVYPRZCULFKNBBTKRFKCEHHXMQCXYDHFRWCVAXPIMUBNUOSVNQRNVTCZGREJG");
    msg.man_type = 58797U;
    msg.man_eta = 2101014660;
    msg.last_outcome = 42U;

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
    msg.setTimeStamp(0.47583992278150555);
    msg.setSource(29748U);
    msg.setSourceEntity(225U);
    msg.setDestination(48922U);
    msg.setDestinationEntity(109U);
    msg.state = 106U;
    msg.plan_id.assign("LQEYZTIOAWTYPXGHXPPAXPBSCSMAZSFKWGIYKTXYQGRSQDHNEVURPALKCMBWECDVLNBALWMEVPZPKYNQNDOATD");
    msg.plan_eta = 852254555;
    msg.plan_progress = 0.2135749873301147;
    msg.man_id.assign("VLWLPQJOFPKGCJRETQEVDVFCFBSYPRNKESQGVURUKMKMXWPHJICZOIGBHTCXFMZSRQFYCAFJTVLLFABGLIJYXVIX");
    msg.man_type = 42138U;
    msg.man_eta = -956592354;
    msg.last_outcome = 27U;

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
    msg.setTimeStamp(0.059334534098386515);
    msg.setSource(52174U);
    msg.setSourceEntity(135U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(241U);
    msg.name.assign("YDBEMMWPQCRSCAOPHRGTJQEVFDOFWDWPXYXAIOKRXBKCLFZTDNJUZZUBRIBESMKAFYTZZUOIQRRTGEKXHIQDUJISVJPLVNCGFSRELMDALFKVANRXNXAE");
    msg.value.assign("ZTXUGVGZGFQTAJUKDHWYEBXDMRPMWISVBOKVRABJAPUDGBDZNLPPYMPXJZWUYDDCPESHEOSIUX");
    msg.type = 37U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.28169196348955106);
    msg.setSource(64676U);
    msg.setSourceEntity(40U);
    msg.setDestination(31018U);
    msg.setDestinationEntity(74U);
    msg.name.assign("VFIDRAJZCUTTIYCJECKFINVMMRLCKUHJXQRUOJSPYOLXGOVSBMHKRBXLFPNOQSSZWANIWLWVYAEACVWNEKWYJDWQG");
    msg.value.assign("WPFXUWANNXFUUIMKITQPXNAYZGGHXMBVXWKQCOYGAAJJNMNJSANAJD");
    msg.type = 207U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.23925568565485011);
    msg.setSource(41394U);
    msg.setSourceEntity(118U);
    msg.setDestination(24197U);
    msg.setDestinationEntity(30U);
    msg.name.assign("ZPNVUNVZAIGTSZZYUQCWZYXF");
    msg.value.assign("ECVTKDAVTPKWFUQLLJGSKVUNABFQZMUESFQXUBZEUWINRWDMCXDGRYHEUOSEXFBSIOVXKLVUCDDSGLNWKHUMQ");
    msg.type = 98U;
    msg.access = 91U;

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
    msg.setTimeStamp(0.5396037375010073);
    msg.setSource(55582U);
    msg.setSourceEntity(181U);
    msg.setDestination(55907U);
    msg.setDestinationEntity(106U);
    msg.cmd = 169U;
    msg.op = 243U;
    msg.plan_id.assign("BATDJCZVSYXSSACGPVMOLYDRSERBLOKAJCBLUTBXVBRICKXXNREQFHPPZRXFCQUJNWLUKTNLETYBIGAVIRMOSCVOQCAZQHLQJHGSBMDFKCSIPNFNVVRMTWUKFUUHZVPZVXLOMDFZJMWIMAOQHXWHCGDNGZYPMERAPILGBTOYFDJQUDKWYNMXYUMTWRKLWJUJAIWEQEVAGCGEHSBXISHPOKNBIUJQZFDNIHYHRTTDODLGPF");
    msg.params.assign("EBKATIZLJFRZIYNDILFTIVVKQFQOEUVOLOOBELUKZVHTJRUJZPEDWNCJGQQHWKNLKCHXVSPDNAICMQFVBMMWAGQHAWBLNGPYRQS");

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
    msg.setTimeStamp(0.5114004596340099);
    msg.setSource(20223U);
    msg.setSourceEntity(30U);
    msg.setDestination(20889U);
    msg.setDestinationEntity(108U);
    msg.cmd = 138U;
    msg.op = 252U;
    msg.plan_id.assign("KXTBUXJGCE");
    msg.params.assign("IJPMRJZKCFSCLRWAPVYNZXSAYQTXUTXBPWNKONYACLUKJLMAKOZZSBQHSUHBJHFRROBLNVSGZHKZHXTXNRIGELBAQEECADPWDGEOVC");

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
    msg.setTimeStamp(0.14048133892116643);
    msg.setSource(20093U);
    msg.setSourceEntity(240U);
    msg.setDestination(11311U);
    msg.setDestinationEntity(50U);
    msg.cmd = 127U;
    msg.op = 26U;
    msg.plan_id.assign("QISJLZNSQKIEUMFRROKZPDBQUOFPAJWNMONXNHMBIZDAWWAXGEJYGVSQHHURSEJQLPABLASUERFTXVLZCDTBTWMPCONWPVGDPFIW");
    msg.params.assign("OMSATEUNSNRATORSLLZNUNYBPJCUHKTIPHUUTGQEXICFOKIGOYOFLUSZTBCXJYDJEFQEDMJMJQLJVFZFKHVKMBINGEDXZIBZBTRSPSJB");

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
    msg.setTimeStamp(0.037051986719381924);
    msg.setSource(63698U);
    msg.setSourceEntity(155U);
    msg.setDestination(51265U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("DNQPPTUNQGVRPMHXSQBJOXQMIBJTIWEPVIAPTYYRBWYBUOFBDDXICMWWINSGMCFOHHANGDAZKIVKCJSWVONPGVNSWCFCAHNVPHZBGAPZZWLZUSKTXYDSBEFHRQURVROESYPHLXFKAWNGRXDIGLUJIJFLMNDJLHEOQEKQMDXGYQSZHSYZSHTWTYUTCEKLAFIOILJFLXBM");
    msg.op = 130U;
    msg.lat = 0.5272111183371793;
    msg.lon = 0.9463734466586461;
    msg.height = 0.9697488674817877;
    msg.x = 0.07801422846855521;
    msg.y = 0.508735322983126;
    msg.z = 0.06321593553007587;
    msg.phi = 0.9116862543819082;
    msg.theta = 0.7921765841650442;
    msg.psi = 0.11969542552639845;
    msg.vx = 0.9693564030542874;
    msg.vy = 0.48538702115403976;
    msg.vz = 0.2985398647984959;
    msg.p = 0.5345407261082938;
    msg.q = 0.9361163386569391;
    msg.r = 0.13035381887112418;
    msg.svx = 0.2748904299385946;
    msg.svy = 0.8740728996949013;
    msg.svz = 0.8959319787904708;

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
    msg.setTimeStamp(0.19510345804090323);
    msg.setSource(32368U);
    msg.setSourceEntity(86U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("SXIWZAQEERXSJUOVDHTVWQJUGITNJRGPVMKYTCPZTCWEDLZZDFEZDLMAHSILMOMSRXCFPWPTEAPEZEJKIXYRKBXMHCUDBNSSOCDVFCAXYFFUXJQOMBZGLRLSPTFGAUPGZIKRYKIBVZGQIUJNQDABFERWVJXSBMWK");
    msg.op = 254U;
    msg.lat = 0.5637030514547207;
    msg.lon = 0.05756485587719784;
    msg.height = 0.719652838416428;
    msg.x = 0.6844359312418027;
    msg.y = 0.6257960992675248;
    msg.z = 0.8745994460999812;
    msg.phi = 0.07699895251739153;
    msg.theta = 0.4419634368926345;
    msg.psi = 0.23070272819279836;
    msg.vx = 0.34614641138304925;
    msg.vy = 0.7050258735681985;
    msg.vz = 0.10257816218933036;
    msg.p = 0.2312197894111634;
    msg.q = 0.5431470937336932;
    msg.r = 0.6696814243085891;
    msg.svx = 0.725511803312476;
    msg.svy = 0.8306762946877542;
    msg.svz = 0.45650740889583596;

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
    msg.setTimeStamp(0.20500758578068035);
    msg.setSource(43662U);
    msg.setSourceEntity(123U);
    msg.setDestination(53216U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("IQIXOGRCOHTJYTTOVGMQJEGJQHYJKPGTBSRJFZLNBFNYJBAWRUFBOUULIKLPMJCTCSFXFWBVWJFDRVOEPQQOCCYZLNHEYXYAEJLAPCSGFGBHNQRYAIIWDOMKILXFSCPHZBDAWEODMALIWGKSRSVZAMLUYKVQVDNXCAHTUKTEGSGXZWZXHAWZW");
    msg.op = 26U;
    msg.lat = 0.9517479945599102;
    msg.lon = 0.014765983831968477;
    msg.height = 0.8376878366757279;
    msg.x = 0.03929072794543309;
    msg.y = 0.5701422606386357;
    msg.z = 0.009764270142191833;
    msg.phi = 0.7181684996074326;
    msg.theta = 0.013359717519432657;
    msg.psi = 0.3545667836169416;
    msg.vx = 0.7255589823988793;
    msg.vy = 0.12737432593498932;
    msg.vz = 0.04392006872719245;
    msg.p = 0.7602342372766784;
    msg.q = 0.7786872038349701;
    msg.r = 0.3203491512508678;
    msg.svx = 0.38926932060731534;
    msg.svy = 0.7458968629756826;
    msg.svz = 0.43449510936638025;

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
    msg.setTimeStamp(0.6321570736063786);
    msg.setSource(31800U);
    msg.setSourceEntity(108U);
    msg.setDestination(54204U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.6601035031608734;
    msg.lon = 0.36230088840866126;
    msg.depth = 0.6843918336462717;
    msg.roll = 0.9616641714277896;
    msg.pitch = 0.08538334178639273;
    msg.yaw = 0.3174047070883077;
    msg.rcp_time = 0.18283671257483392;
    msg.sid.assign("JCVOLKWQGEHHBSEXLKPCEPNVF");
    msg.s_type = 102U;

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
    msg.setTimeStamp(0.04300308230706351);
    msg.setSource(43908U);
    msg.setSourceEntity(0U);
    msg.setDestination(48797U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.6096284892999233;
    msg.lon = 0.8836508700668398;
    msg.depth = 0.37442054357675114;
    msg.roll = 0.6763840852434103;
    msg.pitch = 0.2882625257033008;
    msg.yaw = 0.6313138864419491;
    msg.rcp_time = 0.8785243508071332;
    msg.sid.assign("RIMEWDMEJCPCRQSGVZPDVOASYAYFSLFWHYYTKAPXNNWXYHPBLODLKRPHMFPPMCLRPUTGJSOIQLBJEGNGBSQWOHFEDEVJMAXZGBYZHXDKZAZSRYQSGKFEVQNUBOQXUHHEDL");
    msg.s_type = 240U;

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
    msg.setTimeStamp(0.2704128853108494);
    msg.setSource(43989U);
    msg.setSourceEntity(254U);
    msg.setDestination(16725U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.85470230579922;
    msg.lon = 0.7985100056318319;
    msg.depth = 0.1639208616751281;
    msg.roll = 0.06542720326073515;
    msg.pitch = 0.4351407636666784;
    msg.yaw = 0.384501979165343;
    msg.rcp_time = 0.45110666021364065;
    msg.sid.assign("VHLJQXIHCYEAORMPIQXZYPNOHDIVDYSSYIDCAMQZEFAGOCQZJE");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.7607952753867143);
    msg.setSource(62197U);
    msg.setSourceEntity(233U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(242U);
    msg.id.assign("GBUJMSLQAKOVESCOFTWRJQYWUIKVDKPPSGXYQWYTLKIDHCSZJRIDCFTKGTSMTWEOPRVUBFPBHTPEJNNZNZQEYKQNCDAATKMYBFDIKOVUSDOPDWEBOGCXU");
    msg.sensor_class.assign("LXFZFFWWOSZDHMLFTLDWZKQJUCCVIZEBEZGJXSRJPSQLGUAOPTZPAFPISGIZBMOCKSZGRGENXJRLJN");
    msg.lat = 0.2663931713167814;
    msg.lon = 0.8816953642206266;
    msg.alt = 0.09941110015807919;
    msg.heading = 0.6068506544874037;
    msg.data.assign("OZLJADJHUOWHOVLSSHZVTLDUEWEWOBESJKMJCIGQLYFNARUVTRGHVPKFYKDMEYXSUDSRTRKMPHVIXECDEVFTRYPZL");

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
    msg.setTimeStamp(0.8956950262828776);
    msg.setSource(50661U);
    msg.setSourceEntity(4U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(203U);
    msg.id.assign("BZNLVJJGPBMQMRNASYPFOWIQCHVEWELJUUHVOVPYZK");
    msg.sensor_class.assign("JWRQWLNZVYKYGDNKTUQXGNLMXRVZOYUWTASFDWRLQFMMXRNAJLSSKHPSZABIYBQPHYRVDKMJJOSQHGTFKUAKIVDZJSUWEOZHXOHYXPGOHHJBRTDUITIZMVNXEQAKLTRJULEVOFJCSQHCBUFMFBITNLZCABXRFBCPPDAUZRAAELMIRCFZVINPEQVJQWKBWEWONPJOGSWLFPLEGKBHHDXCDIMVCGWAKTGPDZSOYPXQDUBUEOCCMVTIS");
    msg.lat = 0.472679361215401;
    msg.lon = 0.14627434195416156;
    msg.alt = 0.2545863415242089;
    msg.heading = 0.2697854732693744;
    msg.data.assign("PVNGFUJSFSLOJHPFAQVQGUENVPFNAEFWAQKUIVLIWFDHJTDTPSXNZTJYMNGXHZDMPMJXWOCKEIZUDIQOEYVXLTCVZDMLBFCNSCBOPHSHBAKFEQIEWQEKVETMZIFYXQRVRLZBHOTPJIEHRLCZQJWDHRGEGIWYKGYSUYRLOXJKRAUXMAUCWDBMNIAGTMRHRFBDUSZXCWOSAKNQPBGUBDWKMXMK");

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
    msg.setTimeStamp(0.8041370725452223);
    msg.setSource(36253U);
    msg.setSourceEntity(68U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(147U);
    msg.id.assign("KFJBCLSTBMSZUVPRWTVJZSKHQSMHQOWKFAZZXTSGFVUJYYMLJNPIJDWRLSRLCXH");
    msg.sensor_class.assign("NTSHXVTJBRKRJAJJFFCPTZRXSDOHOYARDNNK");
    msg.lat = 0.4570185499153575;
    msg.lon = 0.48429291334308044;
    msg.alt = 0.7271985415186599;
    msg.heading = 0.28135096422293937;
    msg.data.assign("QZVOQPGGCDGNNTMZZDTBVUNIVBWBOFDDSXHUWNUBLYMHXJLFUNIODPWJGZHEOWDBLTZSTJCVXWKGAYYHKPFYVCQIZICPEXWTZCKTVUNQEIKRYVXHELFXFGKTHMCICVNGBFJDAIERNLKPJFDIZAURWVEXOEBRBEWYDEMBLQMLHARCAGPAPPGUSBXQCAZQSPISMHOSOYPORYSWREJRUFKFXQNVHMRSTMWGUOMXIJKHFYASQ");

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
    msg.setTimeStamp(0.08558197550871938);
    msg.setSource(14310U);
    msg.setSourceEntity(225U);
    msg.setDestination(45864U);
    msg.setDestinationEntity(228U);
    msg.id.assign("PDWZFCCHCNXLLWTOFKNGNIFIJQQWDHXXOBIFDVAJJZLPCVRFVBAYDMMRNIWSOCYKAQQMXJTYXQEVOQCUPHGIQZDEKLBOXIULCEGTJJGPGMBWGOYYHBSSFYJBHLVGBSENCKKRQNEDULDTWYSAJMMFTOIJNOPUUAUPMYFMAZMPRSPXQTGHTLBIUWZJWDDZXYFATAORLGSZOHTEAWTLXZRRIZHNBRYDERKKXES");

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
    msg.setTimeStamp(0.8876465769990722);
    msg.setSource(2184U);
    msg.setSourceEntity(239U);
    msg.setDestination(28971U);
    msg.setDestinationEntity(17U);
    msg.id.assign("GBZSVODADKCVEXRNYZSLPQMRYXDIOPBIVOMCSLMEXWUPCQVMTDFKYZLHDBIFLPJJOONYADEUGCHYYXNXFAMISDCMGVVFEJSKXYQRUFPWQDXFQKGNJNRFBUSGNTGJQWKXBNPCBPJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LAXCMGRDIJTITPJTZRVRIPVTLTSMKWQSFPYHNEPNFBHVQUZUOIPNNPREVSSSLKNCOKKBGG");
    tmp_msg_0.feature_type = 104U;
    tmp_msg_0.rgb_red = 164U;
    tmp_msg_0.rgb_green = 138U;
    tmp_msg_0.rgb_blue = 179U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5754375082297938;
    tmp_tmp_msg_0_0.lon = 0.648926427459457;
    tmp_tmp_msg_0_0.alt = 0.22399571486596348;
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
    msg.setTimeStamp(0.19176787508942694);
    msg.setSource(12840U);
    msg.setSourceEntity(87U);
    msg.setDestination(36055U);
    msg.setDestinationEntity(152U);
    msg.id.assign("CJGEWDYFRGMGIVTYOJBPDRVTWAXJIZCJQFUZEDHSNDXBXHCEXGJBOEIKMAONQEPUVOBPPTMMTTRPFRDMNSXZRHMKJNVSFFUMAKZAPSYQBHPERCWLIBQJKIILOZUUJKHRWNUHKVXBHGCARUUEDZNPXKKDCBEOWNSVVRSIUTKIQKTM");

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
    msg.setTimeStamp(0.0617552395541231);
    msg.setSource(7706U);
    msg.setSourceEntity(35U);
    msg.setDestination(57400U);
    msg.setDestinationEntity(101U);
    msg.id.assign("EVHFXRHLDXLNQNIBOHMFWORLMPXJMGANJZWTQRSCBKDAJGDIRC");
    msg.feature_type = 105U;
    msg.rgb_red = 104U;
    msg.rgb_green = 50U;
    msg.rgb_blue = 109U;

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
    msg.setTimeStamp(0.6035773441814024);
    msg.setSource(25195U);
    msg.setSourceEntity(65U);
    msg.setDestination(43395U);
    msg.setDestinationEntity(215U);
    msg.id.assign("EHNRCOXXGPPQIPQFYHIXQUNFFLEBEHDTFUMRJAJSSTQCOAXVFVJUMYARJLHXLOMXPBZDGJKALZLHZDYQBCAYZMTUILMZROXPAMTYDJNGWVVLWCFIBPYNFDQTSCWNVNGHRSGLYYO");
    msg.feature_type = 67U;
    msg.rgb_red = 241U;
    msg.rgb_green = 235U;
    msg.rgb_blue = 215U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7714323288498193;
    tmp_msg_0.lon = 0.21759906122383665;
    tmp_msg_0.alt = 0.8917315734114207;
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
    msg.setTimeStamp(0.14128502770382256);
    msg.setSource(52519U);
    msg.setSourceEntity(185U);
    msg.setDestination(61742U);
    msg.setDestinationEntity(144U);
    msg.id.assign("STZHEQXHJKUHEQPPXPNXVUGSRUPUZYVYZWGFBYOZQAAMXGBAOPMAZMOOLKALOYFDGFBFGTDRYPYRTUKUDDSCKIJFDQLUITWLJYJHTJORBICCINSGMMZXJBOHTYOVPKQ");
    msg.feature_type = 174U;
    msg.rgb_red = 162U;
    msg.rgb_green = 83U;
    msg.rgb_blue = 76U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.45072504757446175;
    tmp_msg_0.lon = 0.7033996645903349;
    tmp_msg_0.alt = 0.5605813878723289;
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
    msg.setTimeStamp(0.2965970174702892);
    msg.setSource(30479U);
    msg.setSourceEntity(128U);
    msg.setDestination(36991U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.03030300638091621;
    msg.lon = 0.2707117136687429;
    msg.alt = 0.9930777463336444;

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
    msg.setTimeStamp(0.6432579823259067);
    msg.setSource(54125U);
    msg.setSourceEntity(210U);
    msg.setDestination(20681U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.719853627641327;
    msg.lon = 0.2748522643575261;
    msg.alt = 0.9348972898875847;

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
    msg.setTimeStamp(0.740140151558878);
    msg.setSource(42406U);
    msg.setSourceEntity(57U);
    msg.setDestination(24986U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.1380116185650485;
    msg.lon = 0.364295740689089;
    msg.alt = 0.8528367332056787;

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
    msg.setTimeStamp(0.7517921000125322);
    msg.setSource(21754U);
    msg.setSourceEntity(169U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(171U);
    msg.type = 62U;
    msg.id.assign("OCBCJWQXXLRUNKGEJRQBYOSMXHFYXRWSBDYLEZHLWQK");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LWCUCQAEROOXEHBODDZVTVKZFIPXPIRNUECROSNAEWFTTZQKBJHMUWKMIEQJHWKFDTMBELXWAQAPZWXNVMSSSEPKBUBYKATSETNCXSVMKXOUBXTIKNMAKXYIQAMZSFQKRV");
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
    msg.setTimeStamp(0.4519348364139061);
    msg.setSource(53481U);
    msg.setSourceEntity(78U);
    msg.setDestination(7935U);
    msg.setDestinationEntity(83U);
    msg.type = 187U;
    msg.id.assign("CKMSFEDOPAHGETTWSRWWRVDTVMRAYOAVLVHNRSLOQRDJIWJJMLFHUUZCBXKYGFXDXQZCELOISIKJXC");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 55077U;
    tmp_msg_0.ttl = 16827U;
    tmp_msg_0.destination.assign("CGBGUVFIWKBSTIYCIRVPAIEGCVKLPSKZDQNJKKLTTHEEFJLSWCJFTFWZXVUBBVNZAYPBRVWWIQTINFXVWBNZFGVCOUSRDPUMHJSDQJMXYNUYKAYGAAWOEJHALEJBDATRCGOZKMQMXFIFSQEONSILSHDLUKBNQGMDTTYOCZQNZXGUWAYMI");
    const char tmp_tmp_msg_0_0[] = {10, 116, 102, 2, -86, 43, -122, -27, -97, -112, 65, -74, -69, -12, -18, 92, -48, -80, 120, 60, 72, 55, 34, 29, 48, 27, 108, -10, 21, -24, 109, 15, -115, -2, -47, -83, -18, 13, 36, 62, -71, 30, -72, 22, -13, -5, -102, 100, 22, 124, -23, -56, 119, -22, -106, 12, 63, -88, -1, -2, -102, -126, 119, 61, 98, -38, 2, -7, -68, 97, 69, -75, 18, -34, -124, 32, 17, -65, -7, 25, -15, -28, -77, -87, -3, -77, 76, -46, 124, 123, 73, -8, -25, 86, -28, -92, 66, 8, -50, -117, 123, -65, -90, -98, 84, -47, 114, -95, -123, -7, -80, 63, -27, 33, -57, -67, -17, 117, 48, -115, 61, -25, -37, 29, 70, -99, 53, -57, 7, 119, 118, -63, -54, -110, -34, -100, 57, 37, 116, 99, -5, 2, -119, 12, -57, 111, 92, 105, 76, 125, -29, 75, 74, -22, 12, -111, 41, 90, 71, -38, -50, -102, -91, 4, 102, 4, -115, -47, 113, -120, -2, -67, -100, -45, -102, 55, 2, 75, -54, -8, 35, -1, -112, 67, -36, -120, -93, 13, 42, -35, -13, -117, -91, -84, -84, -83, 104, 101, 29, 78, 21, 43, -39, -35, 42, 111, -35, 20, 92, 87, -23, 41, 44, 29, 39, -84, 93, -32, -73, 36, -64, -68, 19, -51, 70, 101, 101, -123, -60, 13, -35, -108, 23, 31, -54, -12, 35, -82, 50, -106, -12, 123, -48, 29, 99, 107};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.08768265051232671);
    msg.setSource(19810U);
    msg.setSourceEntity(187U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(244U);
    msg.type = 106U;
    msg.id.assign("FIGLADSYGOWAGIWQZIPIAANOUVPRIOVCSJHNMTUCZZGKPKCAOYILASAUDVURHHFHFXRNLLWZLRRPVTDGNKFZMELCBNCPPQUNRFPLJJTHQMMWSBGTWXTPEJZITCQVGQJYJYNDFYHABQDZLWLXBZNUIEMKHAYKBJOTVXQSMECMBFKPCVEJYUHZOBV");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 2162U;
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
    msg.setTimeStamp(0.9692958704687542);
    msg.setSource(29275U);
    msg.setSourceEntity(106U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(248U);
    msg.localname.assign("OARRRTHHDJVKAOPRZGFGOJINGJJHBVYKSENBGXIZFTNTNZNDWCZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OYKNGUKIFMYBEYQDXAYVOJJPOXAXDZJMLPTODYLMEZEB");
    tmp_msg_0.sys_type = 29U;
    tmp_msg_0.owner = 28416U;
    tmp_msg_0.lat = 0.3450449800654565;
    tmp_msg_0.lon = 0.05856492059931273;
    tmp_msg_0.height = 0.28688190882035247;
    tmp_msg_0.services.assign("JPAQDXFABDJBSCRYBSIKGDVOCZCRLNALWQRIAXFEHJIJWHAGLPVIGPAERIZVQKZDAELZOQTAJCKJAJYSFNTRNDDYLYJHMXCXYGIKQTMUGUUWOFQWDLXRUGBVJHTUSXOXNBYTSVRYULETOEGFVVZDKOOQFLMZFBCEVDOLSNMWZHQPTRPIAYMEMWBRPVTEQKMQPOXBYGTSZWWZMFGKMMDPLIKHCSNUPFXGHSCVFNHNHIYUHUTZEROKB");
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
    msg.setTimeStamp(0.8412514969442694);
    msg.setSource(47860U);
    msg.setSourceEntity(225U);
    msg.setDestination(52988U);
    msg.setDestinationEntity(249U);
    msg.localname.assign("VMDHNBCVEIZPFBLAQMSZVQHUQOFOBSCZHVGNKUEGAKBQRWKNMOMWHYWUWMMYHAZXVQEETSIJATHAMBURQDYLNWTJGPJOCLKVDRKMNHPLYQJPORLNONGGFXEXXCZXXLZEJGBVYYXHDIJRKACBYVTHEHCSTIDOKIQWPJCTWDYGUWSYJLFLRUARXZQELJIBTGNTOEFAYDURTCXMXQUUKEBFGLACOGPNZDZWWRSJFIPSFRSVODTZMBVFFSA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DOHYLAJIKLKFVDPVWXHPSVRGM");
    tmp_msg_0.sys_type = 126U;
    tmp_msg_0.owner = 45612U;
    tmp_msg_0.lat = 0.3963271328045245;
    tmp_msg_0.lon = 0.9414248425446828;
    tmp_msg_0.height = 0.41616134297272345;
    tmp_msg_0.services.assign("SNNXHGVUDSSXSRMBHBIQDOYJLAIOIOGMZORUWLUGIQJDURV");
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
    msg.setTimeStamp(0.5609592888857599);
    msg.setSource(11879U);
    msg.setSourceEntity(160U);
    msg.setDestination(50422U);
    msg.setDestinationEntity(247U);
    msg.localname.assign("RVMHMIOYJCUQALEWFWKHTXQTITXSZPIPBREYSOWDRPMHWQYXHISTQSZSWGTGRYONBDHWXAXDYRMOLVNFDCNIOOWMQBBJHFATSSPSBBVMDKAFFVFFKNVMYVOODPVZDJEJGLFKSRQYGWJBDKAHCQCZPDPTFCEVNNUEUZKNBTTLKLHXGQKMTVGXRQUHGNWQNDGPKCBEBICZZLURCGUXAAXEEGOAYLMOAUCULWJJIYILZKIPSIYPEZUJCNJZFX");

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
    msg.setTimeStamp(0.8017789476935612);
    msg.setSource(19270U);
    msg.setSourceEntity(7U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("ZJIUTEZJKJUWHSRIUKP");
    msg.predicate.assign("MUAHSDYPPBQUVIGSRACXTNOENYGFGFNWGNXONJGBHJKTWVSWKSCXPHOUZLSHKZCJWYVDIGPLWAIWGQPBALQMCLVPOMQSSVXUVFYFEHTEDRTBZUXBNXOXCRWMALUAFDXIFZDOYLLPCGTFATHLXKCQYQKMHENIWXJVSZAVJFZBJQRHRMIUIIUYTTUMRYMOODAEKHIJHCKDYFDRMKMDZQGPEVDBBBWQYZRVJKFITPWTRGJLPNKLNOCQOAZ");
    msg.attributes.assign("LFRXAKMMVKOAFCLXJNIKUMSBLBSJWSYVNIIROWJRCHISMWAXXBVPUCIEOHKCAKXQLFVGSDTXEOKRLHBNEUKLYYRWBYIFAPVRGWOGFSQASGDKGVPJTUVCMPTHODQUMDYLOTEJXEZCSDKBULJSTQUIGGPHOPAEENTVQNGUDQZVWFKCBZHZFQONTYXRSYPLZUFDCYQTHAGMFZTWALU");

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
    msg.setTimeStamp(0.09279947705410785);
    msg.setSource(65160U);
    msg.setSourceEntity(217U);
    msg.setDestination(49243U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("YTGNFFAJHMFOYULLNACURUQUMSQAKZYPXJZGEVOBLUCCCHFAWEHPHLGPHOEEZTZNE");
    msg.predicate.assign("XSOZFAGAOQITOFMJGTGINRSHOFZGOWYMPAXTLTIQDWPWGWUMPRDBRNKEJACZNQ");
    msg.attributes.assign("FPDSUIXFNZOTLWBPODIYDHAUUCKWUCHGGCZZNECDNEYQXBDRRONLNKIHDLABXHFJCVJUCTJBBMRXPTAOPZOJHECGIPYVSKYGVVLDCERXMMQIVSFZWFVLAQWFUSQZNNEPYUZJGETOHBZENWNOTMKMGCFFLSKXIUGGM");

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
    msg.setTimeStamp(0.1383913294116853);
    msg.setSource(7949U);
    msg.setSourceEntity(90U);
    msg.setDestination(17015U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("PWBCFBZDOBRJUFBWVHWGWMFLAXHVLKXAPGSXNUGHRAPWDQMSIMNVAOTWWACVYOIKDEJGSZOARYPNMTREGXVNKDOZPIXHHUGVPHOU");
    msg.predicate.assign("OSTWMYEBBHMXADEKOFEBSAPFUXTYJQAQAFKEETRPTXPZZFHDBKYSOHEJGURRSVALDZRYMRIWXWUVQRJHGCMCBQLO");
    msg.attributes.assign("MFTTQZKXGGXKBGHYOII");

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
    msg.setTimeStamp(0.0009211764573295866);
    msg.setSource(2829U);
    msg.setSourceEntity(112U);
    msg.setDestination(55095U);
    msg.setDestinationEntity(118U);
    msg.command = 169U;
    msg.goal_id.assign("IEIIIVSPEVVBKDVMPBIUUQJLGYNFFTFLACZBQCOOGXTMOVWTENBAPRKQARXUPDFQUFSYKKNHQPJSXLLWBVVGRIZWNYPQZWYHSESLRLTRXMMYDWJMUAOFMUWGWQKOSJKQCIPLFSBCIHXEHUEPKJXLGTHNZRDFCMASXKJXJXGGDKEAAECKBUODPNGNFHCIHHRESRBGTEYZADCHTMOPQDMTARQWIVODJZ");
    msg.goal_xml.assign("CCEDIGXJCPHVXCSTGRUAOWJKRDUUNOTIHAZKUHEBRJALSTOWVOMOWZWRANQSFOMHLGLGOSKIAZLNBYCIDSHNUZQBRUBBHQLAPPKXJTGFRTFFWDNPZXZULZVNYYKNRP");

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
    msg.setTimeStamp(0.6510924527986649);
    msg.setSource(33671U);
    msg.setSourceEntity(248U);
    msg.setDestination(613U);
    msg.setDestinationEntity(104U);
    msg.command = 46U;
    msg.goal_id.assign("XKUNMSXYXOEYHERZWZYVPNVDIJLANGOSWCZHQGTRONFFRUTDTWAAQDCMDUQYADNVBHBFHFZGUCQMHXOKDSZIKFCMDYLPWBPCZYAATDXHWLRJWBNSPXNKFVPEZOTFZDEYJNI");
    msg.goal_xml.assign("HBKKZBRNMWUZPSQZGEJNLCIJPLXLSBWUAWINXPTIRVGRQJDOHDPCFXKAEEEOJQYWSQSACWLGRPGWXNNBFYYTMS");

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
    msg.setTimeStamp(0.6480951485772921);
    msg.setSource(47048U);
    msg.setSourceEntity(242U);
    msg.setDestination(46216U);
    msg.setDestinationEntity(253U);
    msg.command = 31U;
    msg.goal_id.assign("EBJZPAXCQBKBLGNDYJMQDFMLZQSTKKVUXQUHY");
    msg.goal_xml.assign("KCJVUTMMXBWJRRPIVJFXYTUJDNBNAHKGLNIHZPVWLJGEYMXYOUKPVPZBKEGOQACZEQQDXHILSNRQWUOULHFOUGDPTKXCTYCDJNCNSYAMIREAEFFDZBKOBAMROEKDFQORKGQMQF");

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
    msg.setTimeStamp(0.4159987921085194);
    msg.setSource(32474U);
    msg.setSourceEntity(192U);
    msg.setDestination(6940U);
    msg.setDestinationEntity(214U);
    msg.op = 240U;
    msg.goal_id.assign("FCWPDVUARLGQYYTZTRSCGJHTENWIMDOFMWTUTUXUKJSUQCCJFEXXIKVDBGNPPJHOMRWRESQGT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QVIVPJTGUMDFHPAQOOZWBAIKWADOEXLAHVGFCBCMJBQMZNAPLMSCEEMZN");
    tmp_msg_0.predicate.assign("SUPCBNWIEEMPRJWKGZVJBCLCVWTRCNMSLDSREIYHZTMZXHLFQLORAGMLMRXZDLHPQRXNJKXGJQUJAZYBWOBZWKMOPAPZCKXQRMJASUSDEASSTLYFNDNHMFQNMYQYIVTVBGQKGEXOCWDRXONKVEBKPGDUZDCFDTEXH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XADQBHLSYTUTCEWYLFCPPRDVZLFGIHSGVEQXSJNJINRCBOCXLDIUGUBWFBJTIGRKGHTKVAFFJRLEVKZXWPYQWOF");
    tmp_tmp_msg_0_0.attr_type = 189U;
    tmp_tmp_msg_0_0.min.assign("ZITQAEDFMVUILRSMTTOYJLAOVYBECYEWXPRSEPQTCMODDWJIJHDPKLULRTOHVVTOPBRDHPYGECGEZCAWNLOXRGNRJCLHYNWVBQTKIXINKZDPKBEPBHFIQOEKXBFGGNEWFERZSVAUOYMNLVZUWHKYCUBOASWZBWYCFQFXLTJNPQMTUQFDNRKUMKJAZULPJGZIXGNGCSDUVDVPGMUKCXWLIFAHMFJWNY");
    tmp_tmp_msg_0_0.max.assign("HZDAPQHPVNSJWPUCTUJSFATMKZLNCJIOQ");
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
    msg.setTimeStamp(0.9573513630135068);
    msg.setSource(6384U);
    msg.setSourceEntity(11U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(219U);
    msg.op = 155U;
    msg.goal_id.assign("CDIOIHXLIBENJWZQHIGGDPQOZAUINLGKUUVQHLUBXQKCMONJCCHCPCOXGIDGYBPDJMQRLFJUOPAFNRTCCGMEPG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DBBPVTQMKYNOZBYGMYYLHPXDOIJMHDSTONLERWUCUYRQWLHVELIFFCBKOLQCQTFDZXVPHIRKIIJEZNPENPJVFQVSSZXSHNXABUEJAIARXQCRGAKHOWSHMNSMMUQGCYKULEQXGJWEGLTFSZAYSKVNUDJTKVGXRRLKCORJWBJWXDHSFVNEUHJYBGIRUZPFJYLHUDZMFMPAWCTFINTTOKTOGPAIVKABIAGG");
    tmp_msg_0.predicate.assign("URPTVHFNKHXRNQPKTMNMRPIBYAFUSVTBOUNKUULUGWOXODNOWDMWGKQZRBRJEZGXRSDJNZIPPWZHWGZSKCLTEPOMYQDFJTSREVXC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NEHJRYDGHOPZQTRNDEIDRCTLBBXEUPSZZOKETTNBMJRJHUBYFMUDRKIIOWQFWIHLMYWMJBXLBRWNQGLNJZYKTJOAGEVVVIPCMW");
    tmp_tmp_msg_0_0.attr_type = 73U;
    tmp_tmp_msg_0_0.min.assign("SQNQYECEDILCXZXUVNUWSXXIRKPWUQMPDGGSKRHWQVCXLATHIYPCNNRLEXMNPZHBPWMASMITQTEYNXGHRBAGPIUFASFFDJKRRJVMZFPYCJBRLNYVQFVIAEJCTCRHKRIWFITJMOVMEFLMTSL");
    tmp_tmp_msg_0_0.max.assign("GBDZMSVUGZGJAMLXMKQUPCRENQWSQCZXYHEBBVJRKBFLGYFVUEFTKLWWXGSPHRQHASXSYVYIBWUEORCMJ");
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
    msg.setTimeStamp(0.060756850403913654);
    msg.setSource(30019U);
    msg.setSourceEntity(124U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(127U);
    msg.op = 123U;
    msg.goal_id.assign("UWJUJMEAJCUXAKG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SWPJQNZNKJGQFEJNRVGJPULWRQLHPYEKEXYMXVMSLZARYYVOTDBBTDTCQTETDLIIVCYKTCBOEIKNCVJGAXF");
    tmp_msg_0.predicate.assign("TDJVWLJVSZBVXCLYZUHKYOGJIXVUHNOBOSFLZUQMZXEABMTSGFDASTCUIEBJXKXENEABRQQLMQTYWZTYQPUCVQKRQIRZJTUMCOIEUMRLCKGBIKCSOGYMJNXHAWAWFAPIYKGADHWDVSEHMLRFGEEUQOADPJIPU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OPDYPDPHTNCFVYWTFFXVVLSXOVOBXYQGBHZRQIKZBLCNYHJLIQDJJUWBUEHZTTRASYWCNVXKPRKHIQPFVRECYJGSTNPVBUVQMEVBORWANFWNXFJGJHYNUDIITCSAWSMCXKFFKRWEQKISXZLOMGXDDPGEQKVPJUOTKQRGFDUHELAYDGNEBJXZECQLZSBP");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("FHCUBKBPVRWVJGLMKRCOBHJTJDQXYAMUOTSAIYLYXFBONYVNWLEYQPSXDJNPTILFBEXPLVGESHJMFEKRZJHFBRITRFYKNCTESEBWVNDYHUPVEFNKHHWCZQQIZPZYSUSDATWIXNOGSNRIAAHMLZOLLUCGIWKHQWAMSITPOICQ");
    tmp_tmp_msg_0_0.max.assign("SRXHHHYZALKYANXNIXFNNQJSJQWUFXNBCINFOVQPZGESXSUGKTCQDYPZLXVTBZMPONXASADOELOUQLTVJDNMETFBRUMBRTYXZHOIQDIIZZODDHMBCARWVIIALQBPPUSWSJDEPOAWGZDWWKLFMNFJEPFOGDEMCCYFJYSKHRUCUQUBEEJUEUHHJMWJTGIXTGKMBE");
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
    msg.setTimeStamp(0.6800285207693786);
    msg.setSource(14498U);
    msg.setSourceEntity(84U);
    msg.setDestination(7031U);
    msg.setDestinationEntity(117U);
    msg.name.assign("SEVLJYBLPRZQFVTGOBEKHALSWNGMNYMDCFHZDECWPCUHDOOUJSHUKKCIZMERTFQRT");
    msg.attr_type = 138U;
    msg.min.assign("MIIOTKFHNEWYXGLRBBGBPUECDPDNVXADLZCCHQUUHQZMTSWMWYPIGGDKDZKGANVWTBKJZNEXLBXPBAVYOMRVJVYFJTIDUNZPADJM");
    msg.max.assign("TWDONVNDQZWIXVRWWKPYXQICLKUHBZPPVIHLCEGVFDFNAJEGRYMTIVXAYTXRABJQFAGGOKLFXGTTGUTAPIOAY");

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
    msg.setTimeStamp(0.23874884442906474);
    msg.setSource(15863U);
    msg.setSourceEntity(34U);
    msg.setDestination(61661U);
    msg.setDestinationEntity(17U);
    msg.name.assign("XSFICOUVNSYDYRZDCTPRDLNRIOJJFWWOMBBUHFJMVKUBXYWCSRHFMXJGJMQUEIWPVREOZOKASOKVXPLETZNRJMASZYVNCSRGHVGHLWZPKVMPUALIZXABWEGMEOZKYPDAYCGNTDACQYILKTPKDQRAHNQWMXTJBRWXBBCVKULQGBEYQWDUKTAVMLEMIEYSFBNGKTGVUFZEQXONAIIGJOTNPGUBQHLSLIPCPENSFFTQXZRQJ");
    msg.attr_type = 21U;
    msg.min.assign("QQMFIOGUKIJXEROPKDNCGCTDLHZXVIRZBYUEYXXPHQOZTYRVEAFARGLMBSIBSQDCU");
    msg.max.assign("PHZDEMMNELOMWYSAHNXJSOXJPYYZBHEGIQKWEWVOAPPSRUT");

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
    msg.setTimeStamp(0.38083411712981374);
    msg.setSource(21271U);
    msg.setSourceEntity(128U);
    msg.setDestination(15976U);
    msg.setDestinationEntity(15U);
    msg.name.assign("RJYNPABOGPMJPMEESFAXJKILK");
    msg.attr_type = 170U;
    msg.min.assign("QYVGCPZGSCQKFVOUMNKHOLNRIEFMQWJIF");
    msg.max.assign("QFECDJLCJOZDGNWLUHLYKWBXQVVGKNOUKIOKXSZZRWLLJJQWHGMXUMRCAFNTRWBYKIDOKUEZTAHVSIPUIZRIDLHVSCAYBFSEOAOPJHEYWXMQPPCIZIMAGCZKXJIAGHTMPSNMGKLSYNHAVRZQSPVQBEGJDSJRBFXNNPWJPXVQTJHTKBZETAOTXGOBNMCEQWUHPKVRYDFMROURAYAZNQXCD");

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
    msg.setTimeStamp(0.2325098442810687);
    msg.setSource(53316U);
    msg.setSourceEntity(100U);
    msg.setDestination(52976U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("PSABNRAFNFNTQKEYTBDUPIMHUQTYXASRPCUPTDQBCOVCUNAIYLEOWVTDTQSWWG");
    msg.predicate.assign("BWOIZZLRRUEEBFXVUVJVXWLNZDGWOYDFAZOLWGYMOIYLJZNOMCFUYTUKESBHXHLCWVTZSNFBFLPVFVKXZHHCXBRVJDQECYWVNDRBURWSFIKNHJYKMHGOXEUAMRDKSXEFUUFZQSBQALZTDQURTDCASNGYFECJARPZXTNPMJCJNHPVITGHCSGBEYQGKOIM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WKAWOSMYZFANHKDPJNXCWDQQYLINBUPERLSVMVUEOQTBNSANWJKLPOUSWOAFXCNSHOSPFJQERKLYMGEZVXBJZBVGFWCAPMNTKPTGHAOHUVTWFIGSPQGKBBQRWRUZHHWZREUVVYXDETRZZFBLATPDXICAINDMXNLEUKWOJLEQSCDUYZBDDJSFYBJYXDIIJEJXMOQYALGVKIQCZBFCGMFUIYRTSTIPMVEORICGRLOQDKNTAMCRHHCLFKGVHX");
    tmp_msg_0.attr_type = 205U;
    tmp_msg_0.min.assign("MLDTMVZTDTYABCMNIZOIFHHRPWETAOTHGZXXCEIJYBSESF");
    tmp_msg_0.max.assign("QJIABEGWDZLKNSWXRNYEUURTQJEBTCUIJWQHMAHFACXKNOSYQHVJEDSFALP");
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
    msg.setTimeStamp(0.15742898163415298);
    msg.setSource(39012U);
    msg.setSourceEntity(142U);
    msg.setDestination(36028U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("VTYBJPKMSRCEJRMNFRIJGDIMIXWFTPWJGNGOVJVVOUAQXFSTDCBOZNIDBPCFLMKQMOZKRZILXNHQLHARVADFUWEDQNRCXAFJRLUIJHQTTRUYBHGHCTWIVCAVWYYUZIKDSEEQFSKEYPLDPFHPCZKAWBOSSOQEMGVOGIKAMLXZWPDLXJNZXNKYDWINSHPNTKWCVFYNHGDFZVAUQBXYYQXCTXSLULPBARLSEHJUROBET");
    msg.predicate.assign("RZRBWEZWLVYMYYJNWKBVFXGOENFFBSSBJDRBOQBXNCKYRPKRIJSXQHPWXNYYNGURAJKNMEPVBAZKKKUCGTICTOAIZDSDMOSUCGYQULIFAFDJJXHWWOIEICIPAEZQDTPEJPIVCGGVZBBQDLLLEVWJXVXHDLHASUZHMWDIMCTTMIEOJSTOVPTACOEUGCSFUFFXHFSYBKLPJV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GMXYYRPQSTZASNLGRPLBROUPRQJXIPUHMJAOAKDGUBLXETZWJMBRUKMVARPXOJDOTGWSBAXLOJFTHJKMMFGBVWIQFFLHEIBNAYIMFVWANZKKQDSJUFVWLFKCPDPXWGZORYGUZEVEDCEQYNNTJUZGQOKIWSNRCMDAYHLKOIUWVFZOUYHPQJTBLAHNPCHHBEDLQOICGNBPHTFSKTRVD");
    tmp_msg_0.attr_type = 242U;
    tmp_msg_0.min.assign("LHIYFQCSAFTBGRIBVCTPQODEJUUVTYCKADCQZMLJPDWUYUSTMLRBRVSETDERBPGTJMUZVPAQFTJXBNWTODWWSYSXDAVZGZISXWJKHE");
    tmp_msg_0.max.assign("ZDRODRLWTEGASNJEBNKOVDCVWRGAKPSRHTZUHYEQSLBANAPZMIFXJEUEBMZYSJHYATWLY");
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
    msg.setTimeStamp(0.2874672997291108);
    msg.setSource(7242U);
    msg.setSourceEntity(111U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("ZZTTVNCRNXOEESWZDSNDEHYOEBKLLMTDYRCSQTBRAGTXWNYYIIEZIBZDXOZNBHPMXSJIWILMDJAMGPVUUFUSLQXAKFYHLPVCWJWVSYPXGLRSTMLRRLHEJGCCVZAUQJUVAIKPGGAKGYUFKEUKQNTPCWRAVBFNNKKHOOSRABCQJWJOPGIWVMDGFFYCSZHTFUCCGQUQWJARDDFJDMUENQFZQOTKIHXPPHXHDIOMZAEHBM");
    msg.predicate.assign("YPZPUWDYOCLTCXJKDWZFFHCLQPTZHYBHUWVMRGWHQFEDCXDZAJXMFQSAIZDOKPBXFRFSLIDOMSNVEWXKQPKGWOYSZMMFMUHAUWBJXHEASTTHVLKZCQFZYTWLNGCYSNQIAUHOSKVPMVIOAHBPJYRGBWUSRETRDY");

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
    msg.setTimeStamp(0.9344200347892394);
    msg.setSource(48118U);
    msg.setSourceEntity(13U);
    msg.setDestination(24135U);
    msg.setDestinationEntity(27U);
    msg.reactor.assign("QTQYBVUXOVJFSNIQDSRJUDCPNXFGVAPZJNCXRERPSAPRDBJPVUCLZTMUOFSANWAWFBAIEHIKDXLFXFEUVMQZWFAXREYKTHJPHTOBOBSMHIEQCXFNYTUWSSEBQJCMRNDHGJHGHYTJNRIHVVMKUOCKYILYARSUYJXBOTIYZCQVBRG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JNFEFNZFRJURCHQTTDBRXGQFIUTTOFXAFRKZFSLDPEBFEBKJDYRLMQWKZOWUOPOSENDWMMPPYQBDMAMIERCDEGNCVDWCOBQNCMXOBXTBGWFSUPUHGCZRAU");
    tmp_msg_0.predicate.assign("FYUOVICZGRXJNSPGGUWKMWYBOFGFXSBGDDITPBIIJTGLEVKMSCHELHHHIVJHIFSPQHOBMTJMMFLKOUQVKNYCAAVZWIFEQJJYYEFPFNLOHZSSILUHDFSDCZNSQNBXQMCRJOVZDSATURNZUODRKRLEHBJCGVLCOVWGZEWWMGTAD");
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
    msg.setTimeStamp(0.45886768314136284);
    msg.setSource(36427U);
    msg.setSourceEntity(48U);
    msg.setDestination(4685U);
    msg.setDestinationEntity(35U);
    msg.reactor.assign("DLQBGBDACQZRBMFVHZJXDGFUAZXFRQOSRMICNSVGOUIYSZDCMOLZIAKDHCBNNOXKKNKTCXDOLJQWTNPWJSYDDTHWRDWHWBNKEPEPLITAVIYCTGYRZNFHBUYUCHMHMTBSBSJHNTLWXC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YDOZKWPGYRPTEHNAPMVHGYZBJGMRQAQHSRKF");
    tmp_msg_0.predicate.assign("FXIYMDPNFZPOBVCGPSNLTRQYSQHTZVXNJYICPAAHJKWWKQNEKVUNZUGRXQADKMQCYWBVTDMOWBPMGZXTTJHIYRUKIKXBOSPRDWTUEJLFJCWJFUAJCDDEECAGGQYAHDVXVDCBSLQPSPXTNKECFYRGWTOYZVGSGEVTUMKNJYAEJIMBVRUUGLMLOXCOSLMIGWDZFKNSOILLBRAOQHHHMICFPRWJYFLBQSXPVIUHKFRLHZBMUZEN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QKVWQPPCVLWKEKJQBPAAELDOZMYPBDORMAEPISOGDURQHWTMKBJFNEBIAYRATWYYNOXDTIDXGBTXFZSGENNDLHSFPTXACMRONFZOFEJBGLFEQKIQEF");
    tmp_tmp_msg_0_0.attr_type = 111U;
    tmp_tmp_msg_0_0.min.assign("JSDEVCEKMGLDIFGCOJEVAHDBRKYSPUOMXJHNDQWQKAKTCVUTRRXWIMIRINZAEUNEYGGBEPNUSOVLAUGZRVFHPXDPABIILRYBTXAJELSMJQWJINZBFFNKCCDOKQXXNFDWZWCTGJQLVZXGILATZBRQLKZJRHSQDQIPLWHMYVMOJFNUTSHWLANAECCTOHUWKJGGXXUXMQSCOVZQMPP");
    tmp_tmp_msg_0_0.max.assign("PEFKDKZKJHOSQQHAZCQFICRMSNMDIWTASZUJYFIOROUBAGLPXSXATLJQGPCUQWBDJITWUSIHPCLCFAOAKVZPFHWVLRCVYOIZESOTCNPBZYVVCAHSDUYYBXTBRYKZYORXRMWOLZDSYGAVGXKHNDEDLRQERFDJEGVWDLMBHQCEVFMIWZUBJATFPQNGBXXBPXZTTNTLKKJHXFHMMNFGEOUISLVUETKWNPJVAHQNWJBRMCDJGIEUNNM");
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
    msg.setTimeStamp(0.8988365531029421);
    msg.setSource(50447U);
    msg.setSourceEntity(2U);
    msg.setDestination(31134U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("JRBTLHDKTZWXVFKAUXBILAKBAILHPTPKDPFTULLPCFKGMWKMVZEJOGYEUVQQIRYFJGPLGCEZHVOPVWRYSJCAXQRAYINYJOL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YJSWHYFQVDPZUZYFSGFQIQCLWOUPIMXSRMVFAYNHOXNZWRMOPNSLVKSUCEYRBHNEFXSADOGFLMBIBUUKLYPDQHGO");
    tmp_msg_0.predicate.assign("XVSGHEZBNUMLQJZKXJFONEUWDAGPYBJQWEJPPJSLQXHKRRRZZKWMSXCOQAWNMUUKZUKTRSMCPFMDBXVTWDRWIZCSGKDFGYRTMSIPKIRXWZQTPFJXETHKVIPBODTYCBCNAEQPOOOCIVEYOLXGBLENMNL");
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
    msg.setTimeStamp(0.7714572721142513);
    msg.setSource(9285U);
    msg.setSourceEntity(83U);
    msg.setDestination(11470U);
    msg.setDestinationEntity(200U);
    msg.id = 25U;
    msg.width = 33183U;
    msg.height = 29632U;
    msg.widthstep = 42822U;
    msg.channels = 38U;
    msg.depth = 186U;
    msg.finaldata = 154U;
    const char tmp_msg_0[] = {-5, -30, 50, -91, 92, -18, -85, -80, 39, 68, -1, -101, -53, -109, 84, 55, 119, -16, 80, 29, 118, 6, 37, 61, -18, 45, -27, 105, 63, -16, 114, 52, 79, 74, 1, 118, 43, 100, -19, -108, 62, 88, -97, 67, -80, 86, 102, -12, 119, 56, 118, 31, 6, 62, -50, 16, -57, 56, -11, 66, -126, -22, 89, -117, -87, 19, -18, 42, 3, -98, 91, -112, 99, 122, 22, -41, -91, 35, 24, 72, 10, -57, -70, 122, -68, 7, 86, -3, 98, 11, 54, 96, 31, 123, -59, 23, 58, 116, 68, -101, 31, 110, -42, -46, 60, -52, 78, 29, -26, -15, 74, -49, 62, 11, 98, 8, -10, 70, -64, 97, 88, 30, -18, 89, -123, 40, 77, 57, 0, 37, -28, 88, -111, -60, 53, 71, 26, 13, 6, -34, 32, 79, -100, -105, -105, -19, -56, -62, 4, -98, 40, 123, 66, 71, -78, -70, 11, 10, 25, 37, 36, -25, 124, 126, 69, -63, -23, 68, -74, -86, -42, 9, -88, -30, 46, -27, 28, 39, 96, 1, 90, 75, 91, 122, 83, -45, 112, -38, 49, -85, 102, -12, -79, -15, 105, -107, 38, 75, 109, -75, 111, -43, 19, -119, -47, -90, 74, 121, 26, -92, 76, -28, 12, 86, 45, 16, -35, -84, -29, -73, -44, -26, -1, -38, -67, -39, -47, 21, -17, -55, 80, 72, -53, -61, -6, -8, -72, -86, 111, -92, -30, -18, 1, 109, -50, -23, 56, -85, -108, -70, 10, -69};
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
    msg.setTimeStamp(0.8594342644844079);
    msg.setSource(7200U);
    msg.setSourceEntity(195U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(60U);
    msg.id = 0U;
    msg.width = 47933U;
    msg.height = 52394U;
    msg.widthstep = 22824U;
    msg.channels = 17U;
    msg.depth = 56U;
    msg.finaldata = 135U;
    const char tmp_msg_0[] = {81, 120, -49, 60, 123, -58, 94, 20, 18, 94, -25};
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
    msg.setTimeStamp(0.8555991706430629);
    msg.setSource(9312U);
    msg.setSourceEntity(152U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(46U);
    msg.id = 80U;
    msg.width = 37977U;
    msg.height = 55226U;
    msg.widthstep = 53286U;
    msg.channels = 98U;
    msg.depth = 22U;
    msg.finaldata = 76U;
    const char tmp_msg_0[] = {65, 29, -17, -44, -39, 98, 7, -11, -120, 105, 61, 112, 29, 88, 32, -101, 76, -103, 7, 66, 17, 79, 115, -81, -106, -68, -46, -14, -19, 83, -54, 62, 53, -28, -106, 6, -35, 29, 38, 59, 30, -49, 115, -23, -106, -100, 97, -3, 28, -18, 116, 56, -35, 0, 123, 84, 79, 12, 29, -111, 3, -41, -71, 66, 75, -85, -100, -82, -42, -84, 110, 62, 2, 29, -99, -32, -95, -54, 45, -119, -125, -82, -54, -73, -122, -34, -74, -80, 10, -100, -100, 91, -109, -89, 63, 73, -95, -6, 121, -24, -124, -14, 37, -47, 19, 126, -42, -128, -112, 64, -37, 51, -12, -124, 28, 76, 52, -2, -75, 7, -82, -30, -1, 121, 26, -121, -15, 79, -107, 60, -106, -116, -77, -24, -46, -33, 34, 30, 104, -24, 37, 4, -23, -8, -46, -41, 53, 3, -71, 62, 60, 4, 115, -11, -70, -57, 96, -80, 102, -113, 105, -93, 117, -45, -20, 103, -84, 106, -102, -43, 80, -57, -56, -37, -24, 90, 74, -30, -116, 126, 122, 114, 10, 90, 112, -5, -92, -122, 26, -111, -26, -95, -36, -82, -12, 35, -115, 122, -50, 45, -82, -121, -71, -89, -5, -108, 57, 91, -29, -78, 100, 120, -109, 23, -91, -14, -61, -1, 40, -23, 85, -89, 64, 89, 121, 116, -61, 103, -42, -47, 98, 126, 70, 71, 100, 76, 48, 106, -15, -98, 45, 75, 52, -97, -115, -75, -33, 78, 80, 120, 67};
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
    msg.setTimeStamp(0.7479242313304959);
    msg.setSource(24783U);
    msg.setSourceEntity(63U);
    msg.setDestination(31974U);
    msg.setDestinationEntity(66U);
    msg.width = 29150U;
    msg.height = 21955U;
    msg.channels = 36U;
    msg.depth = 101U;
    const char tmp_msg_0[] = {54, 59, -59, 108, -126, 50, -30, 74, 107, -26, -17, 9, -119, 124, 69, -78, 93, -81, 85, 107, 68, 104, -16, -60, 71, 32, 41, 65, 1, -64, 118, -71, -79, 113, -29, -100, 117, -59, -91, -28, 116, 53, -99, 61, -106, -23, -63, 47, 83, 52, 83, -126, -68, -58, 35, 78, 14, 32, 99, -85, 29, -64, 88, -50, 40, -46, 101, 119, 5, 90, -118, 98, -48, -7, -37, 77, -21, 61, 87, 22, -3, -73, -6, -17, 66, 52, 6, -81, -32, -52, -92, 7, 71, -98, 45, 15, 76, 104, -31, -55, 93, 18, -114, 16, -17, 29, 77, 103, 17, -105, -70, -49, 110, -21, -109, -17, 74, 126, -68, 91, -128, -125, 2, 85, -114, 101, -5, 44, -104, -64, 124, 28, -87, 70, -48, 58, -111, 29, -114, -32, -110, -84, 116, 27, -62, 118, 47, 11, -65, -75, 58, 71, -124, -103, -111, 42, -123, 85, -93, 26, -105, -102, -50, -84, 4, -1, 79, 7, 91, -110, -10, -65, -5, -54, -26, 82, 78, 8, 4, 77, 71, -50, 11, -27, -34, -82, -76, -39, 116, -5, 75, 51, 103, -63, -11, 105, -77, 33, 2, 115, 21, 20, -74, 15, 122, 81, -55, -128, 35, -55, 24, -31, -68, 103, -102, 83, 10, 90, 86, 107, -66, 28, 14, -110, -18, -76, -6, -96, 89, -26, -60, 65, -103, -25, 62, -113, -4, 60, -9, 1, -81, 125, -74, 2, -37};
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
    msg.setTimeStamp(0.7387652189813954);
    msg.setSource(49058U);
    msg.setSourceEntity(183U);
    msg.setDestination(7922U);
    msg.setDestinationEntity(128U);
    msg.width = 36235U;
    msg.height = 8850U;
    msg.channels = 248U;
    msg.depth = 244U;
    const char tmp_msg_0[] = {-67, -91, -110, 92, -101, -50, 45, 58, 99, -86, -89, -127, -85, -16, -3, 46, -95, -76, 104, -28, 108, -50, -69, 55, 25, -54, 110, 56, -47, -17, 78, -63, 2, -96, -59, -109, 38, -36, 108, 110, 115, -66, 93, -63, 58, 107, -5, 120, -113, 67, 8, -86, -18, -9, 91, 33, 38, -125, 122, 29, 74, -59, -14, -20, -13, -32, -35, 98, -27, -74, -92, -128, -104, -49, 108, 29, -97, 96, 95, -46, 32, 106, 44, -93, 113, -36, -92, 81, -35, -121, -77, 41, -48, 2, -101, 47, 47, -74, 32, 109, -40, -8, 109, -72, -125, 113, 9, 45, -12, 27, -38, 11, -60, -51, 100, -24, -39, -124, -94, -19, 41, 98, -101, -11, 2, -20, 81, -48, 115, 97, -33, -45, -67, 125, -37, 119, -119, -43, -108, -109, 79, 12, 63, 55, -40, -1, -51, -120, -50, 74, -11, -123, 87, 92, 33, 15, -46, 55, -40, -17, -9, -123, -83, 94, -106, 21, -19, -76, -83, -37, -16, 2, -30, 102, -7, -126, -43, 79, 17, 90, 6, 14, 87};
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
    msg.setTimeStamp(0.3402986625794955);
    msg.setSource(37174U);
    msg.setSourceEntity(244U);
    msg.setDestination(57664U);
    msg.setDestinationEntity(197U);
    msg.width = 37645U;
    msg.height = 14315U;
    msg.channels = 8U;
    msg.depth = 171U;
    const char tmp_msg_0[] = {30, 63, 115, -15, -73, 17, -50, 86, -36, -55, -125, 89, -80, 8, 16, 23, -70, -68, -27, -26, 23, 61, -68, -50, 36, 64, 14, 63, 53, -101, -117, 111, 77, -112, 4, -100, 57, 81, -102, -54, 92, -127, 39, -7, 24, -95, -114, 11, -58, 21, -1, 126, -128, 55, -2, -82, 119, 122, -96, 63, -53, 29, -31, -106, 111, 38, 49, 114, 122, -57, -7, -74, -51, -64, 102, 118, 90, -68, 93, 64, -14, 56, -91, -38, -122, -86, -50, 28, 86, 38, 26, -90, -120, -70, -58, 9, -33, -19, 13, -82, -56, 33, 100, 0, 32, 95, -117, 97, -122, 116, -110, 94, -20, 48, 71, -82, -114, -53, -12, -124, -23, -10, 6, 46, 72, -28, -51, 82, 87, -6, 13, -42, -84, -75, 83, 46, -96, 62, 51, -76, -121, -118, -53, -66, 14, 53, 89, -19, 47, -1, 59, 45, 84, -19, 107, 114, -95, -123, -13, -76, 121, -21, -91, -16, -99, -6, 55, 115, -23, 23, 85, 79, -86, -92, 126, 44, 86, -112, -117, -79, -101, 15, -125, -102, 82, 53, -102, -30, -6, 106, -120, 24, 39, -125, -84, 41, -48, 103, -55, 113, -33, -81, -85, -42, 30, -122};
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
    msg.setTimeStamp(0.29625868810840306);
    msg.setSource(3169U);
    msg.setSourceEntity(4U);
    msg.setDestination(28008U);
    msg.setDestinationEntity(120U);
    msg.frameid = 242U;
    const char tmp_msg_0[] = {-98, -100, -37, -126, 25, -29, 60, -86, -16, -115, -44, 70, -105, -104, -1, -3, 89, 108, -91, -53, -69, -112, 42, 107, -47, -27, 77, -43, -72, -99, -81, 120, -83, 97, -42, -118, -108, -72, -53, 22, 77, 71, -60, 0, 65, -29, -114, 52, -64, 21, 21, -80, -58, -96, 41, 40, 10, 59, 117, -55, -114, -16, 33, -13, -95, -18, -100, 75, -53, -33, 26, -59, -117, 36, 4, -99, 76, -73, 74, -119, -115, -123, -74, -103, 100, -108, -43, -50, -16, 26, 101, -118, -112, 100, 4, 72, -44, -85, -117, 43, 6, -109, 107, -92, 40, -76, 10, 44, 12, 123, -49, -11, 22, -58, -76, -59, 60, -31, 73, -113, 126, -39, 76, -34, 42, 92, -33, 12, 118, 97, -5, 105, 69, -57, 115, 45, -101, -20, -86, -23, -74, 100, -111, -92, -2, -70, -53, -42, 58, 37, 124, -74, -90, -66, 93, -32, 26, -49, 51, 112, 84, -113, -4, -76, 35, 125, -32, -21, 30, -85, 2, 54, -23, -52, 57, -16, 71, -69, 91, -79, 23, 3, 32, 82, -19, -42, 91, -12, 117, -77, -37, -15, -77, 113, 96, -6, -31, -70, -7, -101, 38, -6, -47, 82, 85, -75, 2, -2, -23, -16, 105, 55, -42, 82, -21, -75, 26, 46, -124, -58, -48, -118, 64, -11, 101, -105, 79, -48, -24, 21, 7};
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
    msg.setTimeStamp(0.5665954309490155);
    msg.setSource(13803U);
    msg.setSourceEntity(33U);
    msg.setDestination(14366U);
    msg.setDestinationEntity(195U);
    msg.frameid = 188U;
    const char tmp_msg_0[] = {31, -69, -21, 72, -94, -57, 109, -98, 100, 104, -22, 35, 20, -93, 0, 23, 4, 102, -39, -28, 23, 90, -35, -36, -56, -99, 78, 90, -110, 100, 84, -34, 120, -10, -81, -124, -11, -67, 104, 23, 36, 63, 13, 76, 12, 72, 17, 82, 77, 25, 21, 126, 106, 82, 29, -12, -67, -120, 98, -73, -26, -66, 93, -65, -88, 32, 62, 32, 28, -52, -54, 113, 63, 24, 98, -28, -6, -31, -84, 107, 8, -78, -90, 84, -44, -42, -128, 79, 29, 121, -96, -69, 116, -5, -103, -120, -38, -117, -58, -107, -121, 88, 49, -65, 53, 90, 42, 67, -89, -126, 124, 121, 107, -97, -7, 41, 44, -63, 38};
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
    msg.setTimeStamp(0.0011388826277383135);
    msg.setSource(36493U);
    msg.setSourceEntity(210U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(65U);
    msg.frameid = 181U;
    const char tmp_msg_0[] = {-21, -109, -123, 43, 4, -26, -86, -50, 113, 94, -127, -60, -18, 114, 40, -101, -60, 31, 119, -31, 29, 31, 22, 48, -6, 12, -47, 53, -106, 7, 68, -104, 45, -79, 125, -39, -102, 37, 101, -88, -98, -24, -3, 68, 102, 114, 78, -12, -5, -113, -42, 34, -25, -104, -64, 96, -110, 108, -86, 51, -32, -3, 82, -27, -66, 88, 101, 75, -51, 47, -49, 48, 16, 116, 2, 38, -106, -118, 94, -11, -36, 102, 24, 57, -126, 96, 88, -103, -103, 14, 121, -71, -121, -117, -31, 64, -63, -40, -42, -2, 39, -70, 21, -95, 102, -12, 59, 71, 123, -19, -62, -27, 23, -28, -10, 77, -48, 29, 32, -66, 87, -74, 94, -115, 6, 45, 118, 61, -99, -89, 16, 78, -78, 96, -89, -19, -4, -60, 123, -50, 47, 57, 82, 19, -96, 108, -11, -51, 17, -27, -106, -59, -89, 126, 124, -33, -32, -11, 98, 96, 106, -91, -108, -70, -73, -84, 90, -128, 123, -44, -94, -18, -121, -36, -106, -10, 17, 35, 69, 41, 54, -90, 45, -93, 4, -50, 97, 40, 110, 101, -48, -64, 63, 114, -111, -52, 1, -48, -64, -43, -31, 31, 69, 78, -6, -9, 5, 23, -83, -71, -7, 58, -30, 37, 122, 76, 107, -113, -63, -126, 94, 80, -70, 105, -83, 74, -53, 40, -83, 4, -17, -67, 86, 88, -56, -87, -35, -76, 119, 23, -26, 78, -17, -80, -37, 117};
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
    msg.setTimeStamp(0.6828759178679424);
    msg.setSource(56333U);
    msg.setSourceEntity(28U);
    msg.setDestination(40112U);
    msg.setDestinationEntity(0U);
    msg.fps = 104U;
    msg.quality = 133U;
    msg.reps = 153U;
    msg.tsize = 132U;

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
    msg.setTimeStamp(0.10341774250141023);
    msg.setSource(29860U);
    msg.setSourceEntity(242U);
    msg.setDestination(59441U);
    msg.setDestinationEntity(10U);
    msg.fps = 57U;
    msg.quality = 57U;
    msg.reps = 142U;
    msg.tsize = 169U;

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
    msg.setTimeStamp(0.3966316310574364);
    msg.setSource(50341U);
    msg.setSourceEntity(47U);
    msg.setDestination(22604U);
    msg.setDestinationEntity(182U);
    msg.fps = 59U;
    msg.quality = 53U;
    msg.reps = 3U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.920648335991179);
    msg.setSource(6897U);
    msg.setSourceEntity(1U);
    msg.setDestination(16037U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.4503960552417855;
    msg.lon = 0.22834144300279835;
    msg.depth = 197U;
    msg.speed = 0.8677590090654812;
    msg.psi = 0.4665333934281196;

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
    msg.setTimeStamp(0.1446485189535821);
    msg.setSource(11356U);
    msg.setSourceEntity(38U);
    msg.setDestination(32709U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.42926930709536115;
    msg.lon = 0.48839771885856553;
    msg.depth = 212U;
    msg.speed = 0.3277883798080218;
    msg.psi = 0.4161331457443105;

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
    msg.setTimeStamp(0.9930289653377626);
    msg.setSource(13013U);
    msg.setSourceEntity(39U);
    msg.setDestination(62019U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.7927755079651783;
    msg.lon = 0.9090432091760845;
    msg.depth = 229U;
    msg.speed = 0.7440859541125306;
    msg.psi = 0.31024220396409596;

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
    msg.setTimeStamp(0.6694864911363182);
    msg.setSource(6080U);
    msg.setSourceEntity(158U);
    msg.setDestination(4101U);
    msg.setDestinationEntity(176U);
    msg.label.assign("MNAQEBUFYDDHRRPWGTBAESFIXWUXUATVMBDSZQWJOUOLH");
    msg.lat = 0.7124412653817462;
    msg.lon = 0.8685829119904216;
    msg.z = 0.04912596236029654;
    msg.z_units = 217U;
    msg.cog = 0.5483237645051523;
    msg.sog = 0.14239397094111195;

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
    msg.setTimeStamp(0.05938711249241413);
    msg.setSource(1997U);
    msg.setSourceEntity(159U);
    msg.setDestination(33966U);
    msg.setDestinationEntity(107U);
    msg.label.assign("AHMNZTSQPMI");
    msg.lat = 0.9054476318031559;
    msg.lon = 0.1466654139434198;
    msg.z = 0.7222674433144455;
    msg.z_units = 184U;
    msg.cog = 0.6009855041123604;
    msg.sog = 0.34199309554082125;

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
    msg.setTimeStamp(0.09654085068865104);
    msg.setSource(56652U);
    msg.setSourceEntity(149U);
    msg.setDestination(44692U);
    msg.setDestinationEntity(239U);
    msg.label.assign("LGJRMACFIBTATMZCATUQRWQHWYCGVFWJCAXZRNYBXMPRXFVVPARBUSLPFCXCXGUYFXJBIOSAPLRIZJTICAHVTNQSIZWOSBCFLQDWUKE");
    msg.lat = 0.36262761998097803;
    msg.lon = 0.06458282552001537;
    msg.z = 0.8493470521530873;
    msg.z_units = 158U;
    msg.cog = 0.012521109657851692;
    msg.sog = 0.5503025524700138;

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
    msg.setTimeStamp(0.33073198618623934);
    msg.setSource(10528U);
    msg.setSourceEntity(128U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(150U);
    msg.name.assign("QJFTHBURUUMXZZTTWQYDPWEGZNYFNTWXUDCHKSAZZWOGDGCSAJHESYODVGEKVMQOCEFZIXDOILCGRBUFASMMHPFIOSBYEJLZAPYNCRIDOVVLLROSNQLMRTNHVXQXMTBZBYBQXLQPCERHDINFRHSX");
    msg.value.assign("ZUEHOSFKKETNLFMDDIISBYTUKQEWIXUZWKHSIQRFWFYIFWRIAWRVKMEKXZTGOQRJZOVBQFUZPVCBVEBNJUXVIWZQGIPSQDWPOOHZGKALTPLDJAVRVLBUYSHEYDJCWUQX");

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
    msg.setTimeStamp(0.7190152320451654);
    msg.setSource(10517U);
    msg.setSourceEntity(110U);
    msg.setDestination(1753U);
    msg.setDestinationEntity(123U);
    msg.name.assign("DOPQBFBXRSULOKGAKRBIAWEOCNQJDUTPIKBJICXQXT");
    msg.value.assign("ZBBWAVYMZQELAFHIMTCWVEGIFLDGOFHWMJYQHDPSGVLUBODSPPKKCLEWCGICSARLOVUTFLWDVKQTAXRZEFPLIOFMCWZSYVVATERRKQERUBEGTJDIFAAYUDYFPFXJDTLBOUNQQNTMXMPWGSRTHNMEAZSWOXDPBJTJIOKRJNWJZVXILYQDBJGBNHLUXHKIVAXPUUWCHBCNZGSOXRTSYHXNOKFCY");

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
    msg.setTimeStamp(0.69370426602879);
    msg.setSource(59346U);
    msg.setSourceEntity(214U);
    msg.setDestination(48318U);
    msg.setDestinationEntity(160U);
    msg.name.assign("DUVBUWEUOXZIZMWDFNAPSJAPKWBZGORWBTVMCYPGOFVOCQKQTMIJANAKQIGDQENOSLMKYNGWAMXVEYLTCGARXFEJXPAPOLFICPYZSPVLTQIGAQMSNJBFLDFEBCTIBJVIJGWDHZMKRTNVBPPWEVEHDSHGJTQDMHNEXJH");
    msg.value.assign("GWUTARVZLBVTRNFIXOBMBNUPUPOVZEYNIYPBKPURFAUXIGCCZNOHFOWXVNYVGLLUSQMJKLRCXLKRHWDZAIGELYFIDWBTZPFPATZZSPUOMWVNLMREXWYAYDECKVLFKUQSDJQRODDSTIGAQMHYTXJIMYQCOEAMSHIHODDOQUGXDQFGSCI");

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
    msg.setTimeStamp(0.2847083532892706);
    msg.setSource(35028U);
    msg.setSourceEntity(230U);
    msg.setDestination(3222U);
    msg.setDestinationEntity(147U);
    msg.name.assign("SLHXCJOSEFHIRIULVZDVSEVXDAHRGNHUWOPZWLQWMTBOYLPINESVBKXZIDPFBNIGUTQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GKMUDQYXDBTCTOQEURITFPIDSRZBSYPIJXNYHRQWBWPSROAENXLZMTCOWKUGFRCEWUGVZXAWYNWGVETYZVHIFJOFCRLBKWKYHUNVDTIGHSTSGLMGYUNOPBAQ");
    tmp_msg_0.value.assign("YWJZECYGTUUAPAULRLEOWNSSYLAXCUJMWLHQOJMIQQZNZPKPOSJSGXWQSHHNRBNZPBBNFCANEWNSZGAQZFHAFRDIMDEOEMAJVXFGQXQGRJHFFAVBWTQF");
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
    msg.setTimeStamp(0.4606632684934924);
    msg.setSource(56125U);
    msg.setSourceEntity(232U);
    msg.setDestination(42177U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ZPFANJXGYWUEIYXBQCDCHFFHP");

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
    msg.setTimeStamp(0.19703372909874306);
    msg.setSource(58852U);
    msg.setSourceEntity(193U);
    msg.setDestination(65021U);
    msg.setDestinationEntity(180U);
    msg.name.assign("UTEISPBCXOIPRVYVKYYCLJGNNGXCIYNDNCPNMVSJXUEYRUWPZYQJBLAXWFONEVDKAB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZOKWLGMYENWZWCVCBPKILFKGXEWYIJFIAFIVUIOTFKECSAH");
    tmp_msg_0.value.assign("GDNAOANMEWVRYKCLQLUWZ");
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
    msg.setTimeStamp(0.9270923636979228);
    msg.setSource(10827U);
    msg.setSourceEntity(204U);
    msg.setDestination(45769U);
    msg.setDestinationEntity(212U);
    msg.name.assign("DEZZCDOYZXDWXALDIHCIQRCXYRRZJHGHYPMOWOQLITBZUAGVNFLRSCBECYWGZHVAHDAQLFCGFNQQTQQZSBBKNKUHXKEKSJCEPPGOWVDMAFARMOHPSAVRVJLYEJTHDEBDJQ");
    msg.visibility.assign("JPQQAVLVPUZWKSDKWHLYSQFCIPYVDYJJAXSEJWHFECYLDDXVHVMJDETMCBLTARIN");
    msg.scope.assign("YZSJUTKARODFGDSAUNJQMYHINZUAKSOBCAIVVZDULQBFKQMUIOPWHTEFAUIZUPMSQWYMLJSAJNOCDLUMVANBFTOBNCXXPGHPASWRWXQBXRNTBCYVBFVAWOZLHZBGDMVNGIQZHXGVCRRMLHCFYTLGWEMQTBKUYIFQJRXFXHKMGTGHIPEKJSTXYRPRBHKNFDZKQAJYXTYGMFJPSVNDOSEPGDCELHJZWOLXPWIEERLE");

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
    msg.setTimeStamp(0.6413189932972679);
    msg.setSource(32406U);
    msg.setSourceEntity(175U);
    msg.setDestination(25854U);
    msg.setDestinationEntity(224U);
    msg.name.assign("KPVIFCOTVIUEBO");
    msg.visibility.assign("ZXQZCXKMAADBSJMFCWPBUWVGSYNJGUPZNYIPKWKRVDWLPMZODLOBHQIRMDGBEBSDOCTFDSMVUXPDLWFOMAKTVCNNZVJHFUIWFNGRYAEZERAOTQOXJFCHSICHYGOTGHLIKNOSURIYHEUVHUBKXNTEBLFP");
    msg.scope.assign("YZZTBHCQBMXOBUIKPCAAHKEUXVKRYHUSEKCUZITMCGRGWNACZCLVDFTQCPVUDYXIUHJBRAWNYPNTOVGIWAWWRLTNHPBYPGWNELQQTWOVHRSHSYLPJASDGDTRPMOJKMOUXSXQLSTJB");

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
    msg.setTimeStamp(0.23286015212738853);
    msg.setSource(45595U);
    msg.setSourceEntity(180U);
    msg.setDestination(26685U);
    msg.setDestinationEntity(229U);
    msg.name.assign("SMXNLILILDXXGBYSLHWMRMPZHLIQQNPCGAODOAXZKXEHMJWYGQUNVNMSJVQMAWBXFNEMXBYZPYRXGCTPKGKJJFDQFTOUOHKNIPEQQGEUWZSMQLXFTNTRC");
    msg.visibility.assign("DPGLCQEBCJNWEHSHDOODSUKYEAWZQATGJVNSKDRFZYLJXZWUEYMUTIGDMWKBXATRCRYPWLQMYRITKGNXMDFBGGWUVTARPUFRZHHDOQVRXTQSLNYANLZIHYLEMAELAOVJVBKFPZYWIUTJUJCUZCQXTCZLQPSHSWFYFENJCJIGSTOQECRFMWVIKJNAISQHCXDO");
    msg.scope.assign("OPSYYFBHZHMROXWM");

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
    msg.setTimeStamp(0.4093706157916519);
    msg.setSource(13376U);
    msg.setSourceEntity(217U);
    msg.setDestination(530U);
    msg.setDestinationEntity(207U);
    msg.name.assign("JWZXMFQQKBVRIUTASSSRCEFOMMLPXTETHHUYJDAWWHQOUEYUPHYYGGVEDPNRZRSAHGDBYBXKQSTAWOUDLLIPKGJEFPWVJCHUNWQPFEMKEITIVQLOCHEYFCQXROZMBNBJALNLBJKKAPVZOSBKRXMCWLHONCDZYOYTUXKHXBLVJIPRGWSCTUTQTAKEVDKFXNARBAIUMVDZDNEWNIPYIGFJDRTMZFLQGQAGVN");

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
    msg.setTimeStamp(0.4822323024505303);
    msg.setSource(19689U);
    msg.setSourceEntity(230U);
    msg.setDestination(12622U);
    msg.setDestinationEntity(103U);
    msg.name.assign("PQHXAGFTWYWKJFARSOKSFBLJVUDOHUYYEIMDCNXVCINXMZPXMFWERIMVYOIMXNGZJPJOKIVXPTSQEZPLPMFTVDVTAHFSTVJCWDRGLNISFIWORQOUWWIRQJZKSCOZHYKQEAKLVBYEJETAHUEPPZUNYXQNMDABUEGWNSARBDXNHL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYCMMMLFZZWONMJWNZLYSPKKMYRNTGPMHQEQMFITWEVTUEWAJLLALCENAIZVRGVLYANIXNXCIXJYYWLTBKBFAFSPUGWDNQKBYVWHQBXJMKYUOHGOXNCAPEDQIVJZSPRFOKEWFDUHCUKRVCAEXHSTRTUIPAUOLBZSADRIGIACXGVUQMTSKHQVPBPZHFBOZFETWHDPEXDQRLBKKRGJJVVEJJQRIO");
    tmp_msg_0.value.assign("OFLJGGXISJEQGKJHWYEXWIBJQDVGYLRWLCAGHJPECQXXKWKXAUZIQPINOLBITRCCTWMZYTAZUJVNHHKEDULDFRAFZPNSHOVZCLV");
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
    msg.setTimeStamp(0.038127688098605894);
    msg.setSource(40224U);
    msg.setSourceEntity(242U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(233U);
    msg.name.assign("XCTQMECXYBMXDJGUQNV");

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
    msg.setTimeStamp(0.2205174339997218);
    msg.setSource(422U);
    msg.setSourceEntity(84U);
    msg.setDestination(10386U);
    msg.setDestinationEntity(93U);
    msg.name.assign("UINWYRPVBRPPUSZPNGEHGPHAHYYIGNYTISTCBRQYFMS");

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
    msg.setTimeStamp(0.9270206572854615);
    msg.setSource(21374U);
    msg.setSourceEntity(76U);
    msg.setDestination(61367U);
    msg.setDestinationEntity(249U);
    msg.name.assign("IRAVISZDEQNGYZMDROMVOYZFJIRBKCOJSXZEAPMPSAMHJJKWGCRXLYCDYWRRWTFPJYAUBEKVFMOVLHERQWVUKAYXVKVUSQGLDPPNTFNGJEPNKBWGY");

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
    msg.setTimeStamp(0.9608071620358972);
    msg.setSource(12047U);
    msg.setSourceEntity(173U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(198U);
    msg.name.assign("OYNVKGLXZWJEZWOTGRVZVZJFJWHIBPHCEYXVHXBLVQBKUYSGJKEULJNXWKOAQCCLIZBRSHOZGKHJXLWNFDPWITKABUDTOQGAAOTYOUMAMSFLVPDFIQMNXMMYANWSJTBGDMSQCZYYUPFTDDTCYRJHRPCNCOHDBRITINSQJADAKAZCGPUPYXZYFRCRIEKVSLASLPHGMEWRUWBBVBURPXQWVMENGUL");

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
    msg.setTimeStamp(0.24256748403284534);
    msg.setSource(37542U);
    msg.setSourceEntity(59U);
    msg.setDestination(56556U);
    msg.setDestinationEntity(83U);
    msg.timeout = 1871762360U;

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
    msg.setTimeStamp(0.5310206621350025);
    msg.setSource(34083U);
    msg.setSourceEntity(90U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(47U);
    msg.timeout = 2169598802U;

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
    msg.setTimeStamp(0.2851089736149097);
    msg.setSource(1716U);
    msg.setSourceEntity(26U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(42U);
    msg.timeout = 4256986653U;

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
    msg.setTimeStamp(0.4610650745785476);
    msg.setSource(30627U);
    msg.setSourceEntity(176U);
    msg.setDestination(1961U);
    msg.setDestinationEntity(186U);
    msg.sessid = 1351392256U;

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
    msg.setTimeStamp(0.818887543289004);
    msg.setSource(57492U);
    msg.setSourceEntity(221U);
    msg.setDestination(33893U);
    msg.setDestinationEntity(253U);
    msg.sessid = 1762740302U;

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
    msg.setTimeStamp(0.25582204595557867);
    msg.setSource(4877U);
    msg.setSourceEntity(143U);
    msg.setDestination(42393U);
    msg.setDestinationEntity(197U);
    msg.sessid = 831271887U;

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
    msg.setTimeStamp(0.22719550356920337);
    msg.setSource(1647U);
    msg.setSourceEntity(234U);
    msg.setDestination(2658U);
    msg.setDestinationEntity(158U);
    msg.sessid = 61508471U;
    msg.messages.assign("LHWYLBQHZNCOWVNUTFUUREOAOPFXVNCSMCZRKIDQXRQBQYZNRECNPZ");

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
    msg.setTimeStamp(0.5634574783221399);
    msg.setSource(35186U);
    msg.setSourceEntity(152U);
    msg.setDestination(35887U);
    msg.setDestinationEntity(142U);
    msg.sessid = 3457321040U;
    msg.messages.assign("DZZDUSRUFLWJUNUNLHAQAHTRKLMUYSMDVQRMZLVJKFOCCWLDIDTTNLBXMVAFXZSTQZPYEWMCHIFQOPXLASIE");

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
    msg.setTimeStamp(0.4191146476278592);
    msg.setSource(17651U);
    msg.setSourceEntity(106U);
    msg.setDestination(20140U);
    msg.setDestinationEntity(55U);
    msg.sessid = 3785462025U;
    msg.messages.assign("OMUJHVJMEXYGRUFBNDCXKBYFBTWODZFGMFCIFILSXKNLGYGNSEANFPMBAJLIPVZCVPTEVMZTEWMFDTKYGBEQMOLERDCMQUROTIJAPWLZEXFMHUEKYVUKFTWGLCNQROHLSJUBWTHATBQKWIHJXNZZWJXAIDKISOBNACHUJQDYWNCPQVHYXRYEZSPGHOYBRXVXDQOCPAUIGDWLDANLV");

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
    msg.setTimeStamp(0.0961184699336265);
    msg.setSource(59832U);
    msg.setSourceEntity(250U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(165U);
    msg.sessid = 1188487666U;

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
    msg.setTimeStamp(0.478257373964334);
    msg.setSource(49676U);
    msg.setSourceEntity(194U);
    msg.setDestination(46535U);
    msg.setDestinationEntity(145U);
    msg.sessid = 96881658U;

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
    msg.setTimeStamp(0.4244121651820668);
    msg.setSource(26113U);
    msg.setSourceEntity(127U);
    msg.setDestination(21374U);
    msg.setDestinationEntity(32U);
    msg.sessid = 1339637421U;

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
    msg.setTimeStamp(0.9552784105524449);
    msg.setSource(11414U);
    msg.setSourceEntity(231U);
    msg.setDestination(50055U);
    msg.setDestinationEntity(64U);
    msg.sessid = 2485948307U;
    msg.status = 63U;

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
    msg.setTimeStamp(0.03210388874974224);
    msg.setSource(1323U);
    msg.setSourceEntity(248U);
    msg.setDestination(55096U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3406688226U;
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
    msg.setTimeStamp(0.7968733124408857);
    msg.setSource(1216U);
    msg.setSourceEntity(31U);
    msg.setDestination(7131U);
    msg.setDestinationEntity(30U);
    msg.sessid = 2511169479U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.149518978469925);
    msg.setSource(47437U);
    msg.setSourceEntity(100U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(8U);
    msg.name.assign("ZXUVPBFGEYNZFPKIJLLSKREAPHNUQITHCOCXCSLDHTDJJQUUYDLGRQ");

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
    msg.setTimeStamp(0.7110282560400104);
    msg.setSource(22159U);
    msg.setSourceEntity(72U);
    msg.setDestination(6651U);
    msg.setDestinationEntity(181U);
    msg.name.assign("XNVRGTOORAWRDMLUQWAUGQVQMHIAFFESDACWUIFHHVQVROUWXYPHICGXCKIUGVNKWPGZYJSESUBJEDHJVSPNJLKGMUITONEXUNQLHPKGOADYSRMLRJYDQYCCQPYDBPZAQDRLGHJEZKXOVVUCYXYZAVBMDCMQIBZEFJHJGAZMIBHKLLOPFTTFNTIXRKKWZFKXSVLECDZYPTTZFIIYNASSCTNPAFKQLJ");

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
    msg.setTimeStamp(0.12965630627080882);
    msg.setSource(34020U);
    msg.setSourceEntity(235U);
    msg.setDestination(11422U);
    msg.setDestinationEntity(55U);
    msg.name.assign("RQLNCSYZHRGSAQDJORTJXHJKEOCEKOMVFJMUMQSURMCEFRXKFLOPXFBJTYLLIETJAVCQMOESWTWKHPGLCPQGCIBDINIAVZDXDVEMARPHZVUT");

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
    msg.setTimeStamp(0.40745351379089023);
    msg.setSource(65445U);
    msg.setSourceEntity(183U);
    msg.setDestination(50178U);
    msg.setDestinationEntity(3U);
    msg.name.assign("FNMJZLUUWMBHVFWSDNRAFYGMBKTXEEVQGXVCJHOFKEDZTSJUMLZDTZIUOLIKRNRPRRCLFPCPJQXOKTLUPAJQJOTTFYVPYNYZBACICIPCTSLBJQGZDSOFIUOXOFXRYBRSXEXNWCWAPMHGMEZVHGQIVGVFIKEJUZEWVHDSEEVKQHKLAHWP");

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
    msg.setTimeStamp(0.7968217811874716);
    msg.setSource(31597U);
    msg.setSourceEntity(74U);
    msg.setDestination(65315U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DGGDWMYSMSYMLAYPRQVBQKJQPWJKKIOCEVBGSQVHXJSTIZUSRJJAEVBBTPQJARWZXIOZFNHOSYQSAKIPWEZFYHSVJHIYKXGFQFZUFCFPVIXUPMLYGEAKGDEIJLONHFU");

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
    msg.setTimeStamp(0.18672228797748713);
    msg.setSource(4701U);
    msg.setSourceEntity(43U);
    msg.setDestination(8002U);
    msg.setDestinationEntity(244U);
    msg.name.assign("FGVLJQPJXGNQQIHKTCGLUYBTBUWHPIDLYYZZGLFBNMKZSZKRGUWSTEFZURYZSIAIRLGNYNRDFKECSQZOJOUVBPJHITVCGUBNDSESJEROVHXDBNIMMIYMWJDTYNOPWPBVOQRSINKMRVHBCQMNJUCJTAIDVTODGBZWFOLXQPRPWHTMMXSEXYDAAAITSXNCOKQEJQQUMUALWXRLKHKHBMYOVEA");

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
    msg.setTimeStamp(0.6496505003473056);
    msg.setSource(57U);
    msg.setSourceEntity(56U);
    msg.setDestination(9723U);
    msg.setDestinationEntity(36U);
    msg.type = 170U;
    msg.error.assign("AWMPSEZLEVKHAPDVJZEGTOZKMZHSBXDYAJJMSFTWXFMMQHUUWNNYFCUEREVKBHBWSOFBWTFKULDPLDZQCSTCOQRPAANYGLHDNCLTRMHIOXZTPBDKFFQEXAVNYWQOSHRVSIJBAUQLOHZENIKQIHIRWTDYUPXRNMJGLWMUBCTVZMECUALJTJPYRCNPVQLIXOJLROKPAITYKFYYXIKFVZNJCBUIWGVOEGAGSUEHDONPQRZMFBXBDJGRSCK");

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
    msg.setTimeStamp(0.39516306307180393);
    msg.setSource(11897U);
    msg.setSourceEntity(31U);
    msg.setDestination(49049U);
    msg.setDestinationEntity(16U);
    msg.type = 195U;
    msg.error.assign("YQEQGHNAXQOGVKSXANTHYQJRUSJSCVNKCCIZTUADXFTHVMQIYPSRLNNTDAKJZZTWTOZDUMWVCVBECWQRIMYURYEGOAPXWGHGLQNLXGJJBNLCKCRGWBBCYWIQZOYHSPWOILXVLEJOPNXUWPJDMIVRUHZOOFDVHYKFSAK");

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
    msg.setTimeStamp(0.3286090152054526);
    msg.setSource(54400U);
    msg.setSourceEntity(66U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(81U);
    msg.type = 29U;
    msg.error.assign("LZPDKKSBYERHBCCDJWBATMJSNOSMGLIGHPQEQI");

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
    msg.setTimeStamp(0.22924299428325812);
    msg.setSource(4133U);
    msg.setSourceEntity(202U);
    msg.setDestination(447U);
    msg.setDestinationEntity(164U);
    msg.seq = 32938U;
    msg.sys_dst.assign("BWVKTVUILIFNVPEVLTLNFHYAAOVGBZBODZSDRSGQENRBFCGKJMDIUQACDMJQLRIXHJKPZXOWSRYTNDVDRWRUYQLSWBKUAQGRXREPMSTZKZPKIZZEJE");
    msg.flags = 247U;
    const char tmp_msg_0[] = {-55, 98, -119, -127, 104, -51, -98, -69, 12, -80, 57, -28, -69, -43, 54, 116, -62, 78, -14, 123, -44, 15, 19, -96, 11, 45, -23, 54, 24, -40, 67, 81, -116, -63, 108, -118, 14, 74, -112, -96, 25, 15, 21, -9, 83, 69, -88, 114, -74, -8, -18, -16, 51, -85, 85, -52, 110, 114, -14, 35, 41, -74, -101, -114, 1, 70, 25, 102, 109, 104, 32, 34, 103, 3, 3, -52, -100, 70, 122, 78, 5, 0, 12, 99, 25, 72, 44, -53, -1, 6, 3, -11, -88, 32, 83, 53, -85, -28, 11, -54, 119, 79, -26, 76, -32, -10, 75, -122, -77, 103, -110, -103, -70, -58, 31, -29, 76, 54, 33, -14, 110, 37, 12, 97, -88, 72, 19, 106, -89, -110, -46, 38, -7, 124, 44, 99, 59, 61, 65, 8, -118, -116, -127, 78, -20, -65, -99, -73, 39, -33, -111, 25, -24, -124, 93, 25, -70, 70, 95, -56, 76, 99, 113, 6, -39, -97, -115, -108, 87, -36, -126, -73, -84, -63, 10, -80, -16, -107, 48, -88, -64};
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
    msg.setTimeStamp(0.8810805658621442);
    msg.setSource(13429U);
    msg.setSourceEntity(110U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(94U);
    msg.seq = 51417U;
    msg.sys_dst.assign("OTRJRULLZKDSXAXZIGLDJRNECVDYSUWNSINTPFWEFHZBTGVOLQMGEXJWBQDNSIXSYZFRTHQPEKQCOIAISYEOWTKDPGIXOILEXHSLUPARBVCNNWJPMPCSQKZMCFUBKMJVTOHTAWFKOMMUDCHVRSTFUIZBKQUBWOSREFUCDMCPGMCPJLAHQXJFGDTYXOEVAWVH");
    msg.flags = 139U;
    const char tmp_msg_0[] = {95, 9, -58, -92, -85, 29, 39, 47, -116, -116, -127, -39, 5, 122, -113, 98, 60, 27, 117, -34, -46, -27, 79, 58, -61, 81, 123, -74, 98, -97, 33, 56, 62, 119, -85, -31, -42, -15, -90, -111, 121, 50, -124, 40, 66, 16, -89, 4, 56, -71, 111, 126, -8, -51, -11, 39, -84, 75, 85, -111, -62, 42, 55, -26, 16, 18, -15, 26, -50, -18, -82, -12, 35, -128, -3, 38, -47, -65, 89, 106, 14, -108, 12, -33, 38, -111, -95, -7, 2, 106, -47, -69, -44, 56, -124, -2, -19, 16, 14, 94, 24, 43, -94, 9, -88, 14, -7, -77, 30, -4, 31, 51, 88, 28, 51, 29, -32, 21, 36, -24, 71, 60, -29, 26, -45, -36, -11, 36, 38, 68, 87, -34, 29, -16, -13, 123, -46, 122, 14, 1, 86, -83, 42, -40, -108, 57, 71, 120, 36, 78, -80, 119, -18, 27, -68, 91, 15, 113, -61, -37, 35, -75, 32, 3, 122, 35, -1, -31, 26, 91, -1, 117, -48, -17, 125, 43, -119, -95, -97, 3, -100, 54, -90, -13, -75, -73, -9, 23, 94, -26, -70, 86, 48, 12, -123, -30, 54, -7, -28, -127, -41, 102, 30, -68, 112, -13, -116, -79, 48, 71, -67, -103, 97, -127, -97, -59, -113, 122, 53, -5, -106, 27, 122, -4, -43, -108, 84, 123, 43, -13, -108, -121, -43, 20, 0, 62, -23, 51, 19, 21, -55, -61};
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
    msg.setTimeStamp(0.05867824512271558);
    msg.setSource(7094U);
    msg.setSourceEntity(196U);
    msg.setDestination(35130U);
    msg.setDestinationEntity(27U);
    msg.seq = 63661U;
    msg.sys_dst.assign("OISHYRWKCXNYFOUIFETBAVKGNCANJZSMBRDHJYWVEZVPLQCNFMLHXNRFCFLJFHWGPXEJOZHPDTYVEXWOQMBPXGGGGRYDTTBVFQXLBIKQMRZXOFPSHCZPRIBGLWJAMUHEOKSMYIMPPUMSLNMNDWLATBAAEUUDEGRVKIZJILHDBHKXPWIXGINSTNAGCLCQHYKBLWQEYOKKFAOENBUUCSMJQ");
    msg.flags = 161U;
    const char tmp_msg_0[] = {-113, 25, -115, 53, -122, -108, 77, 113, -17, -13, 113, 16, -16, -41, -97, 73, -64, -112, -120, 1, -110, 2, 106, 32, -105, -8, 126, -35, 78, 37, -76, -57, 10, -28, 77, -109, 16, -69, 75, 69, 42, 74, 35, 49, 69, 105, 75, -105, -53, 53, 61, 2, 99, 57, -57, 111, 74, -117, 57, -3, 119, -28, 50, -19, -70, -20, 28, 19, -29, -113, -123, 88, -82, -108, 69, -21, -90, 23, 118, 99, -43, 74, 4, -46, 116, -95, 86, 42, -70, 97, -111, 23, 2, 13, 59, 56, 30, 71, -55, 50, -32, 9, 51, 37, -121, -42, -35, -35, -66, 66, -48, -105, -3, -109, -89, 124, -126, 55, -89, -76, -37, -61, 31, 8, 106, 6, -27, 125, -122, -88, -81, -16, -23, -26, 125, -47, -67, -116, 100, 64, 44, -128, 72, -71, 37, 15, 28, 48, 62, 2, -16, 63, -98, -13, -72, -41, -40, 21, -94, 29, 94, -98, 52, 4, 125, 113, 85, 97, -53, 35, -26, -124, -59, 45, 22, -103, 14, -14, 84, -40, -106, -34, 77, -13, -34, -11, 81, -45, 117, -75, 113, 69, 115, -32, -2, -8, -103, 68, 107, 0, 10, 29, -81, 55};
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
    msg.setTimeStamp(0.6663202179867131);
    msg.setSource(9144U);
    msg.setSourceEntity(154U);
    msg.setDestination(54623U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("WSVCSGJKGRJATHVCMLOLSKIPPEECTAHDDQBTIVPKIBSACRILMIUWZZOSENFTNUZEHNJWVJFQSKTVUDXTJGXCDHKIVVMCBJPJNQOJYBUZBPZKDKBUNWIHONSLLAEPXDFFFOLAIQBOWJGAXIXDJGOHQTFVGZRNMQHRYXPXZZRHMEUEMOWPKGWDEUPCCUYMSYEBTYWYOYGRDZTQSHATQBALKGFNI");
    msg.sys_dst.assign("UKPIJHQVSAPQYPXRCKVXEHEABYHRBDVEDZYOPKXLWCTDIRJBZJSTOORMPQXBMSPVYMLZFIBMWWKVCGUYQF");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-110, 58, -49, -12, 120, -23, -34, -59, -109, 45, -80, -54, 106, -94, -37, 35, -18, 87, -37, -95, -126, -47, 5, -95, -80, -9, -120, 60, -22, -12, 5, -68, 49, -55, -32, -65, 10, -39, -50, -64, 100, -69, 34, -17, 20, -78, -28, 29, -119, -46, -28, -6, -50, -124, -66, -113, 15, -48, 115, 95, 115, 0, -117, -114, -85, 92, -77, -54, 112, 75, 43, 125, 44, -15, 58, -81, -38, 7, -85, 41, -80, 20, 106, -30, -18, 122, -34, 76, -108, 67, -60, -70, -35, 61, -126, -58, -14, 109, 104, -37, 91, 18, 125, -35, -85, -92, 7, 57, -43, -115, -63, -55, -113, -40, -112, 84};
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
    msg.setTimeStamp(0.11976407077057472);
    msg.setSource(19126U);
    msg.setSourceEntity(62U);
    msg.setDestination(7089U);
    msg.setDestinationEntity(161U);
    msg.sys_src.assign("FITMUCRYPNGWQTAJSILZIWXMIFEIFBANBCULZAUPTPGYFILASWBJWHCNFSNWKDFOQYIESDXYFGUOEBVTCWZKQWHCAXGRKOQIHYQCUPUXLOJWUNRYOSXVLVVUPRDPWPHGCDMRUMJOLJDEEPDNZMCHHNVKZHVGJSRTOXJZQJJKSMPXBVQVWHDONLHAMKUANZDYZSLVZBQKTSJBGRORKAGKB");
    msg.sys_dst.assign("PZTBTAPQSJXITCFWLYQCWLTKFLWDIGUTPAASSLWMUCYWTBSPQNKOAHRZPLGOBFTPIJIFYKMNRVHRXQNBKXHXCCJQIIIGYPNVE");
    msg.flags = 3U;
    const char tmp_msg_0[] = {-44, 52, -70, -65, -26, -109, -52, 17, 17, 11, -84, 65, -37, 64, -123, 24, 122, -65, -11, 55, 103, -73, 82, -41, -61, -112, 100, -27, 18, -79, 43, -55, -29, -76, -71, -22, 64, 42, 71, -51, 104, 31, 87, -83, -128, 81, -50, 79, -50, 125, -98, 50, 41, -96, 11, -55, -125, -99, -52, -111, 24, -12, 63, 35, -92, -21, 122, 79, 101, -56, -92, -121, -88, 75, 68, 7, -52, 43, 118, -5, 6, -106, 2, -16, 61, -84, 94, 1, -37, -32, -110, 43, -109, -72, -80, -80, 2, -1, -38, 84, 73, -75, 124, -77, 7, -32, -27, -76, 2, -64, -6, -81, 83, 64, -44, 10, -113, 45, 86, 36, 125, -104, 55, -112, -14, 111, 91, -57, 48, 106, -32, 43, -31, -21, 95, -59, 34, -30, 11, -90, -35, -4, -60, 22, -117, -71, 126, -51, 91};
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
    msg.setTimeStamp(0.9804973653001008);
    msg.setSource(1001U);
    msg.setSourceEntity(40U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(3U);
    msg.sys_src.assign("YQRWAKUNPALFCDZLNQRZVQRRJHMPACFRPBWCTKPWP");
    msg.sys_dst.assign("SZTZOUVATEDHRYZHCFYJDSUQYYFTKJKPXBSQNIHNYUNHWPTHRJKOAWNR");
    msg.flags = 179U;
    const char tmp_msg_0[] = {52, 55, -73, -69, -68, 66, -60, 12, -81, 2, 17, -118, -47, -36, 86, 45, -27, 100, -56, 44, 83, -27, -34, 27, 51, 40, -74, 119, 12, -9, 17, -28, -9, 59, -2, 102, -64, 118, 66, -70, 110, -71, 79, 30, -26, -14, -6, 64, 36, -7, -84, 9, 39, 12, -48, -125, 68, -72, -34, 43, -62, -114, 123, 76, 35, -53, 82, -97, 66, -120, -69, 3, 117, -63, -106, 65, 8, 19, 25, -30, -50, -35, -98, -92, -54, 14, 57, 13, 119, 96, 45, 102, 0, 25, -77, 28, 98, 120, 77, -57, 89, -113, 50, -26, -92, -32, -81, 109, -119, 40, 116, 81, 18, 117, -86, 79, -47, -112, 28, -51, -31, -38, 119, -93, -9, -98, -23, 96, -109, -47, 124, 93, -68, 2, 31, 103, -71, 113, 27, 100, -19, 4, 56, 108, -123, 34, 65, -97, -53, 23, -11, 56, 106, -106, -88, 37, -66, 59, 101, 14, 29, 87, 102, 35, 103, -119, -57, -82, 71, 72, 61};
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
    msg.setTimeStamp(0.21851028770802938);
    msg.setSource(61681U);
    msg.setSourceEntity(182U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(191U);
    msg.seq = 33169U;
    msg.value = 252U;
    msg.error.assign("GZZHOOEBHEFVCHPNVQLNZCSVUGFNLXLMIBXPRZICLAGQICPDKAEVFVFWLOSHNQKUYBPAEEGSWCRGYNMMTTYTIZDCVLNUDRCYYWKTEUXDUDKTHDDYORWJWYAJLIUXPDCJFYBYFGBWZQEGEOAMSVOHCAAPANNKBUJKQIDIVKJKSLSLMWURSRWSAXBCUQQWHQMBTZVL");

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
    msg.setTimeStamp(0.39872796005138733);
    msg.setSource(45692U);
    msg.setSourceEntity(24U);
    msg.setDestination(45591U);
    msg.setDestinationEntity(13U);
    msg.seq = 1949U;
    msg.value = 130U;
    msg.error.assign("CICQBGKUETMTAGDJKVPTUKAUOJYYIMWYMDRESDNLTPJHCBFKXCYTPYVVQHHXGMXKFEEPDRWIQXHVOOKUNWXNICYMTZXNVRSQZOHEZKPGSQMHIJRBTDAJWFICOZBWUICVASBPZQRP");

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
    msg.setTimeStamp(0.08106246709908271);
    msg.setSource(26288U);
    msg.setSourceEntity(142U);
    msg.setDestination(11894U);
    msg.setDestinationEntity(186U);
    msg.seq = 51750U;
    msg.value = 242U;
    msg.error.assign("HZYGSVOZQHHMGU");

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
    msg.setTimeStamp(0.2787653687278252);
    msg.setSource(1037U);
    msg.setSourceEntity(96U);
    msg.setDestination(58251U);
    msg.setDestinationEntity(233U);
    msg.seq = 63860U;
    msg.sys.assign("JAYMXNXSMJRZYBVODCXQKFHEPUYFZCWCMTQITTAYOETXZBLXWHPHRUJZBKICJIGSZCMKGKCUQVGDUBAVWOFQEQNLSUYXCLBCBWQYJDXHZSHTJDJFVVAAGBRXTIPNSMFMILFSLIDWDDOGFJAANUHNQLOPCREAGTGRHMQUEKNEEVLTNSROKFPAXBAUINJZTGROHVWGDQOHVPKKHOUTZPVYNMMZNDEYSYWEKXQSDYFCIPREIUOWJLRRSGMBVLPBZ");
    msg.value = 0.7817768278380254;

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
    msg.setTimeStamp(0.07838008870290647);
    msg.setSource(11652U);
    msg.setSourceEntity(91U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(65U);
    msg.seq = 1192U;
    msg.sys.assign("RBVZMUFCOPGHVAWRNFHTRNTMDKRWXXJUWDUDSDDUHLYORWATFKHIJCIZDJNRQCKWLPDSYRAPGCCICOJZXNTBEFNIN");
    msg.value = 0.09090959137537424;

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
    msg.setTimeStamp(0.21755240729474234);
    msg.setSource(43956U);
    msg.setSourceEntity(113U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(100U);
    msg.seq = 26157U;
    msg.sys.assign("MXRUIHQXAIFUHJVZJNPGTTHDEGXNJMEIPAVIDITSCLIYFOJUKVHAGKWPTSYYEETXWNAZDLWPVIEOIXVDPAERCHWGRRQFJZPTZGRSQBUDSCGFQRROXKLWBFCSHYLFZGYFALBBHSDLQTKLXCBCNDDAOACSTRNLNPMCVYYYJC");
    msg.value = 0.1422688650227001;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.2028255249268901);
    msg.setSource(19220U);
    msg.setSourceEntity(44U);
    msg.setDestination(39368U);
    msg.setDestinationEntity(113U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.9406605141251135);
    msg.setSource(56858U);
    msg.setSourceEntity(100U);
    msg.setDestination(60382U);
    msg.setDestinationEntity(76U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.018922205784510093);
    msg.setSource(43321U);
    msg.setSourceEntity(251U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3998825313645731);
    msg.setSource(12255U);
    msg.setSourceEntity(26U);
    msg.setDestination(53959U);
    msg.setDestinationEntity(205U);
    msg.action = 14U;
    msg.longain = 3441102426U;
    msg.latgain = 2516685566U;
    msg.bondthick = 1319788111U;
    msg.leadgain = 2360549949U;
    msg.deconflgain = 1339442385U;

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
    msg.setTimeStamp(0.7371547112370468);
    msg.setSource(59831U);
    msg.setSourceEntity(175U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(109U);
    msg.action = 238U;
    msg.longain = 195756761U;
    msg.latgain = 3689880827U;
    msg.bondthick = 2521509926U;
    msg.leadgain = 1513477796U;
    msg.deconflgain = 3604915331U;

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
    msg.setTimeStamp(0.6990073795885379);
    msg.setSource(33697U);
    msg.setSourceEntity(87U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(104U);
    msg.action = 23U;
    msg.longain = 1575088305U;
    msg.latgain = 4071356764U;
    msg.bondthick = 14821164U;
    msg.leadgain = 687466433U;
    msg.deconflgain = 19093316U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.26645647927790583);
    msg.setSource(61653U);
    msg.setSourceEntity(155U);
    msg.setDestination(2535U);
    msg.setDestinationEntity(250U);
    msg.uid = 194U;
    msg.frag_number = 28U;
    msg.num_frags = 217U;
    const char tmp_msg_0[] = {89, 27, 45, -124, 28, 70, 112, -10, 26, -86, 116, -26, 75, 1, 66, -91, 93, -90, 34, -106, 97, -123, 90, 66, 77, 125, -57, -89, -45, -42, 58, 34, 47, 27, 21, -109, 97, 90, -10, -87, -74, -109, 62, -18, -32, -42, -13, -36};
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
    msg.setTimeStamp(0.8575261824088546);
    msg.setSource(62180U);
    msg.setSourceEntity(241U);
    msg.setDestination(18397U);
    msg.setDestinationEntity(9U);
    msg.uid = 8U;
    msg.frag_number = 206U;
    msg.num_frags = 42U;
    const char tmp_msg_0[] = {58, 80, -39, 117, -30, 118, 90, 79, -55, 52, 109, 17, 11, -13, 21, -104, -72, -18, 93, 15, 102, -107, -48, -114, 108, 8, 37, 31, -41, 99, -114, 48, 49, 101, -10, 17, -120, -52, 6, -110, -93, 49, 2, 40, -75, -123, -126, 25, -9, 123, 28, -95, -113, -66, -72, 15, -82, -110, -98, 46, 27, -118, 97, 34, -56, 75, 14, 72, 12, -55, -65, -47, 3, 37, -93, 106, 114, -78, 11, -41, -68, -57, -103, -32, 125, 122, 11, -49, -106, 97, 4, -57, 57, -19, 85, -96};
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
    msg.setTimeStamp(0.18942151024876186);
    msg.setSource(7948U);
    msg.setSourceEntity(9U);
    msg.setDestination(58753U);
    msg.setDestinationEntity(166U);
    msg.uid = 97U;
    msg.frag_number = 189U;
    msg.num_frags = 115U;
    const char tmp_msg_0[] = {33, 91, -92, 33, 74, -52, 63, -118, -103, 107, 17, -34, 89, 50, 21, 33, -104, 21, -2, -10, 81, -118, -99, -9, -116, -9, -27, -12, 111, -34, -73, 13, 24, -55, -34, 112, 36, 116, -56, 9, 108, -126, -58, -31, 64, -108, 61, -61, 5, 25, -16, -114, -31, -46, 43, -74, -117, -6, -112, 18, 15, -20, -13, 53, -81, 110, 4, 48, -67, -40, -37, -14, 51, -48, 110, -2, 1, -63, -2, -32, 40, 87, -110, -82, 41, 79, 126, -96, -22, -3, -111, -67, 46, 107, -101, 67, -29, -13, 3, 53, -67, -93, -49, -31, 8, -113, -46, 126, -111, -63, -82, 45, 120, -68, -60, 17, 18, -123, -105, 115, -47, 57, -93, -39, 2, -61, -28, 97, -88, -42, 25, 18, 67, 97, 20, 6, -124, 68, 42, 104, -108, -94, 103, -5, 101, -89, 17, 14, 77, 105, 70, -113, -50, -39, -119, -67, 39, 104, -54, -76, -121, -67, -101, -41, 34, 72};
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

  return test.getReturnValue();
}
