//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 971b1d246a2548118d0fee2a17f455a2                            *
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
    msg.setTimeStamp(0.09333339551940056);
    msg.setSource(45730U);
    msg.setSourceEntity(207U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(204U);
    msg.state = 129U;
    msg.flags = 207U;
    msg.description.assign("DMLNNIPKWIVYVRDCURJEUYJPWBXKBCCGICHDNVRMXRBDXHKSPUTTWWGIQOAZFTGJEYOSUDIIVLDRDLVIGULSAOHTZFNGAKBBZOSPSQSHASXYVZUNPOBWZWQNXHUDVHJLZEZSSMCERFXGYYAPTWEFPCFQTONERZEQTXLJN");

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
    msg.setTimeStamp(0.23419760093090658);
    msg.setSource(23931U);
    msg.setSourceEntity(79U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(132U);
    msg.state = 75U;
    msg.flags = 216U;
    msg.description.assign("QTZOKYJEQIUZMKXLGSHJBVPXZJMZYEEAVTXRHMEPSLCRSZWJGKSXNAYMTFAFZDITYFCREDYOUBNBEAFAGKRWXOTMXZQIAZVVLNOVFRLVSUJCQDOGJXFDVWBEXPVUPCKFHWGNUEOWHWONRGHQEPNCIUUSIAKOHXQPDHAIZHCBWNLV");

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
    msg.setTimeStamp(0.640052573095676);
    msg.setSource(59821U);
    msg.setSourceEntity(222U);
    msg.setDestination(51833U);
    msg.setDestinationEntity(203U);
    msg.state = 217U;
    msg.flags = 89U;
    msg.description.assign("TAQTVISMCEXRGLZQJTAIXWQOVVGGPTVSCMWRKSYZSYWLMVBFETKNNAJRJYFDOZSSNOCFHBEYGNJZOBNLJAKWGPDVPRGYRNUYBOPEOZHEXQUHPIHFXHXNUBEJKPTHJLLFYRFZRTPXFIKUPIIWQKCUCAXLBKWPH");

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
    msg.setTimeStamp(0.500543632687012);
    msg.setSource(29050U);
    msg.setSourceEntity(131U);
    msg.setDestination(7596U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.49444226619104126);
    msg.setSource(2726U);
    msg.setSourceEntity(18U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.0003905545665632282);
    msg.setSource(38502U);
    msg.setSourceEntity(35U);
    msg.setDestination(64834U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.9812136805793794);
    msg.setSource(6179U);
    msg.setSourceEntity(77U);
    msg.setDestination(36014U);
    msg.setDestinationEntity(192U);
    msg.id = 131U;
    msg.label.assign("LOKVLMOANQAPXETINBNQFOFUZHRPTOMGIPTKDLBDRVMHJYHNBPLLSQCKKINZJXHQEHFWJYODVJGCDIBKAWBUAAHPJUDWGWLOCPNRLROSIVUEJEXDZEAZOETDMJFMVXXYQHCMFCWFCTRKRSZWW");
    msg.component.assign("NVCKPFBMRHBAFAVBTFCVTSMOLRDADPEBQXNLUQDQAHBLLNNLNWMTEDWKJWYTPQUHXGIXLAMSDYMWRIUZNGSACGSCVTQMLKXUVOPHPHXADUKYOSQPRIIHQ");
    msg.act_time = 56593U;
    msg.deact_time = 7892U;

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
    msg.setTimeStamp(0.21589383490433467);
    msg.setSource(25921U);
    msg.setSourceEntity(83U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(184U);
    msg.id = 26U;
    msg.label.assign("GVSWNXVXUOWBCZUYIIUILSXIDKYGQXENVKRBTGXQLZLPDRZVBPVACFMZEDZRQVTXEWALXTDWATOBNMJENCGSHIPUFIUBHSMVAODLEUASORHSLQMHWWRHIEEFVWTDNDPUHKARMUMMQSKXJFOLCYGMJCJKKQFCTEMQQIWNSBSAWABLNPGZYMXFKBJPNA");
    msg.component.assign("EIRAXFDNHEQSGNIVMFBFQTRCVIVEMRKJGJNEJMUCRXKSSDBBFYQYLMQWPEDGCLTYYJTPKKKKOUOYIZOLFADOTCDMXELBBRVTNOHQDZWBMMPYJZRHYZAFXKGUNOSVSCXXTEBGSJYLDXREWAVWWHLZFGPONCHRUUTULMCIPXDGIFFVIHUVZJUMPWSJLWZOYBZYIUWUOCGAHSIZAZQPBDIPSBNLKFWHKTEVQOTCCXAXPMGNHHJRNTRNQ");
    msg.act_time = 13593U;
    msg.deact_time = 8403U;

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
    msg.setTimeStamp(0.10550970561537043);
    msg.setSource(1395U);
    msg.setSourceEntity(237U);
    msg.setDestination(5288U);
    msg.setDestinationEntity(212U);
    msg.id = 137U;
    msg.label.assign("WGBTSKFSQVHBNJJACLUSURQZOKYLNIJGIAVJBRLTROWXVNHCNM");
    msg.component.assign("OEDBIMICTRLGNWHDNTHWXJXGZSEKWWEFELKFRSLPIJLTMSQSRAAGGIFBBAKGGHEJXWQJKDNDNJAPRCITNJIAGSQFYVHVVYNKHIMZLZFNQSPXJMBDHYPQRICRDRTMMALETZWAVOYFSVHDXOGOKXOFYZNVZKUWPQMCVJNYITSMTXFVUKCUCZKBWYULHUUOEHTXJBEOXIQABFPBLMCSYRTXPULGQZUVYOVRU");
    msg.act_time = 13630U;
    msg.deact_time = 1076U;

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
    msg.setTimeStamp(0.7055124778224956);
    msg.setSource(9999U);
    msg.setSourceEntity(254U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(110U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.32116438167429073);
    msg.setSource(63725U);
    msg.setSourceEntity(130U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(230U);
    msg.id = 239U;

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
    msg.setTimeStamp(0.21303403732918658);
    msg.setSource(16629U);
    msg.setSourceEntity(247U);
    msg.setDestination(14401U);
    msg.setDestinationEntity(53U);
    msg.id = 248U;

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
    msg.setTimeStamp(0.6241808937063559);
    msg.setSource(24211U);
    msg.setSourceEntity(37U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(99U);
    msg.op = 43U;
    msg.list.assign("YUAMQQHEPNXOIRGWGAXRDFWBXAESEURGVSNKCQYHBOZQPHVRTBYXDLVVJZRVISQCZJAWIMDNGDISELOWBGTTWCNLIHOPLSVLMHJIQETSORTJPLCWBPBCNZYULPDUSIF");

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
    msg.setTimeStamp(0.6413545347893969);
    msg.setSource(48003U);
    msg.setSourceEntity(203U);
    msg.setDestination(41802U);
    msg.setDestinationEntity(253U);
    msg.op = 113U;
    msg.list.assign("UQYWPKNKSNPHRLGHKCJOTUOXTEXDYYEQQZHCIMAMYBACGKQTWYZTWTZQPSUVBVOSIZDLTQDJANSULWVXQWPBLLCCXHIIBEAUARRJSSLDDSGJTWIJFCVKBYPDYNHMJRYVKOICOFU");

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
    msg.setTimeStamp(0.6831425005712719);
    msg.setSource(28081U);
    msg.setSourceEntity(105U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(131U);
    msg.op = 113U;
    msg.list.assign("OGTRBXEFBJKUMNHPYEZFGISITEKCSMQQLSDUMMUCO");

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
    msg.setTimeStamp(0.9225106236413134);
    msg.setSource(14201U);
    msg.setSourceEntity(45U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(220U);
    msg.value = 249U;

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
    msg.setTimeStamp(0.5405578043439325);
    msg.setSource(51677U);
    msg.setSourceEntity(90U);
    msg.setDestination(9734U);
    msg.setDestinationEntity(234U);
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
    msg.setTimeStamp(0.5605115788058039);
    msg.setSource(50274U);
    msg.setSourceEntity(209U);
    msg.setDestination(27939U);
    msg.setDestinationEntity(25U);
    msg.value = 224U;

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
    msg.setTimeStamp(0.3036996589183776);
    msg.setSource(63867U);
    msg.setSourceEntity(46U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(0U);
    msg.consumer.assign("PBUVLANQQMYZCIXBNPECYEGVDMOTURJHTIXFNPDGYKZYFJANAOIJGSGOPLJNCKGHYPCBDCHLDVVGRIRTRFVJYIBHAVLWYVZABSERSNZOMMJELFOOZAASPXUQWDEOYZJCKGRLTHESULCXNVXDEUANQFMFDQWQKEMZFSGXROIKYSRQPQVPNPGHSKHFULWCWTKTUTIDJWAHDBAWOZ");
    msg.message_id = 16393U;

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
    msg.setTimeStamp(0.024087537042492224);
    msg.setSource(59613U);
    msg.setSourceEntity(136U);
    msg.setDestination(104U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("HGFBETWNNNOCUENRSXEIVRPTUYVRROCGMBRYGVMXGOANNPWKJHRASUYQDZIDFAKHXQJNDUPILBDXZTGGFGQSJNOQEIIFTTBWWXJRCLJOZSFUCXMGHCSLWYOMPISCXLAYAWSTYVSRBOVRSULMLJFVEWFWDEZFGOJOQFBOGCKXCIHLYPPRAKMNTTWQZAQPQYISLEDTXKEDBKJEQLBZQAC");
    msg.message_id = 9705U;

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
    msg.setTimeStamp(0.37023575275343656);
    msg.setSource(50492U);
    msg.setSourceEntity(90U);
    msg.setDestination(59893U);
    msg.setDestinationEntity(237U);
    msg.consumer.assign("PCTJKAAGIAPSOTNNVOAQUTFFLGYKEZYFPUQWZRZAKDJBNQVORLYFBELEXZRZZSTEFUGKCOCAGSDVDADWPFAWOSQHRHYHCMJKRMXBULXUVTIQTGWDSOPNZUXMSWRXMPTDVGSDGDKPBEROHNLHKLWXBIZDELUYWNTHJOENJMJQKEROIBNJFFIIXPFHPYPMCEBXCVAIUFWC");
    msg.message_id = 55591U;

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
    msg.setTimeStamp(0.6964609051892314);
    msg.setSource(39762U);
    msg.setSourceEntity(7U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(27U);
    msg.type = 150U;

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
    msg.setTimeStamp(0.31474259326794685);
    msg.setSource(59039U);
    msg.setSourceEntity(87U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(98U);
    msg.type = 224U;

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
    msg.setTimeStamp(0.027607492658401234);
    msg.setSource(10089U);
    msg.setSourceEntity(27U);
    msg.setDestination(54919U);
    msg.setDestinationEntity(196U);
    msg.type = 229U;

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
    msg.setTimeStamp(0.5941441901350714);
    msg.setSource(11574U);
    msg.setSourceEntity(219U);
    msg.setDestination(45546U);
    msg.setDestinationEntity(150U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.06756762794502569);
    msg.setSource(7203U);
    msg.setSourceEntity(174U);
    msg.setDestination(35714U);
    msg.setDestinationEntity(180U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.18490863304778038);
    msg.setSource(16690U);
    msg.setSourceEntity(209U);
    msg.setDestination(10881U);
    msg.setDestinationEntity(48U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.07656915633531025);
    msg.setSource(23200U);
    msg.setSourceEntity(79U);
    msg.setDestination(588U);
    msg.setDestinationEntity(147U);
    msg.total_steps = 163U;
    msg.step_number = 137U;
    msg.step.assign("OEFEUUGARGINURSBKEEALPYMBZ");
    msg.flags = 130U;

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
    msg.setTimeStamp(0.44318765631279755);
    msg.setSource(4885U);
    msg.setSourceEntity(206U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(254U);
    msg.total_steps = 71U;
    msg.step_number = 191U;
    msg.step.assign("DXWZIOLXPQWKAXKLXIONNJEVRKGXVKOZHHWDQQUZFARRNPFDRVHBBTJMLYLWCPXJIYGGJCIAFMLSCOZHMMPGOCOMFEPGBQKETKBWDZGXCVCROVMVQNHJIBYSYAZPSBAUTUJAHVTUTVNRLHYUYBQTQEUSPKJAQTYNHWIFDPPAUHKIJGWFRGZJXGQURVDSWLSVCIOZNWEEUYRXFMKMZDUBI");
    msg.flags = 101U;

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
    msg.setTimeStamp(0.00549796078680076);
    msg.setSource(64431U);
    msg.setSourceEntity(165U);
    msg.setDestination(10445U);
    msg.setDestinationEntity(91U);
    msg.total_steps = 84U;
    msg.step_number = 188U;
    msg.step.assign("YVIEZNLLFVZBCWTMTUWKLIICNPAGSBDTJEOFETXQPIXVPURKIXYKEMUUHKBBCVDNAGZFELNRLPTHWEQNAFGJSJYPQBWLSGXHPDGHMQLKZYVWBAUQSWJDNXKXVGQQGXOAOZIYTJDMTLYVZACMFIOHHRHYNFODPOLSHBNPUUWCIZKTJVTEGVROSUJEQSNYDRUZCDFRIFORCKRYOLKBHAJFXAABGMEJMMDICJFGXZTOURNHSKWSWMPD");
    msg.flags = 43U;

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
    msg.setTimeStamp(0.1595186824610012);
    msg.setSource(3258U);
    msg.setSourceEntity(0U);
    msg.setDestination(18756U);
    msg.setDestinationEntity(248U);
    msg.state = 92U;
    msg.error.assign("UVBRCXFXXOHIFUZRDMYXAPFPWCHSTYGCOVJOBPWOTMAAOWQLMLSKZWTQS");

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
    msg.setTimeStamp(0.4390492827648734);
    msg.setSource(19279U);
    msg.setSourceEntity(99U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(116U);
    msg.state = 36U;
    msg.error.assign("PHCHDPZINFULHKLVAUEB");

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
    msg.setTimeStamp(0.243128303745049);
    msg.setSource(27155U);
    msg.setSourceEntity(47U);
    msg.setDestination(26212U);
    msg.setDestinationEntity(100U);
    msg.state = 81U;
    msg.error.assign("QDSQIITDKQMHCGWTDDBBKXRDSMAQTSKHCOSBZPLRFJXZCXYFAESFZJOHXECXALYYPWJTTUKPZQAVYNBFOOWBGMOJJLRRSTZGLDALP");

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
    msg.setTimeStamp(0.467838307053163);
    msg.setSource(21822U);
    msg.setSourceEntity(118U);
    msg.setDestination(18989U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.9081228951775804);
    msg.setSource(63270U);
    msg.setSourceEntity(24U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.4451643304288809);
    msg.setSource(53553U);
    msg.setSourceEntity(111U);
    msg.setDestination(44178U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.08343826964331369);
    msg.setSource(56408U);
    msg.setSourceEntity(56U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(189U);
    msg.op = 189U;
    msg.speed_min = 0.7534367120667519;
    msg.speed_max = 0.9021804402596701;
    msg.long_accel = 0.44355299242440716;
    msg.alt_max_msl = 0.5156629037972394;
    msg.dive_fraction_max = 0.2583701967997226;
    msg.climb_fraction_max = 0.39692186113841366;
    msg.bank_max = 0.39435695322318487;
    msg.p_max = 0.14710402092876784;
    msg.pitch_min = 0.11270217371882019;
    msg.pitch_max = 0.32955422025847236;
    msg.q_max = 0.3107833696795338;
    msg.g_min = 0.031077901004622377;
    msg.g_max = 0.343426293659287;
    msg.g_lat_max = 0.14404036948919596;
    msg.rpm_min = 0.45608420012644524;
    msg.rpm_max = 0.17367617100569321;
    msg.rpm_rate_max = 0.5493674118181814;

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
    msg.setTimeStamp(0.5654672510853429);
    msg.setSource(32807U);
    msg.setSourceEntity(133U);
    msg.setDestination(20866U);
    msg.setDestinationEntity(228U);
    msg.op = 162U;
    msg.speed_min = 0.31970878391890356;
    msg.speed_max = 0.4945831736530928;
    msg.long_accel = 0.2555883844755127;
    msg.alt_max_msl = 0.20076695091475982;
    msg.dive_fraction_max = 0.09068579792838904;
    msg.climb_fraction_max = 0.8833345363228702;
    msg.bank_max = 0.26784858282831936;
    msg.p_max = 0.15212978071058336;
    msg.pitch_min = 0.49250770088432416;
    msg.pitch_max = 0.49939531731923326;
    msg.q_max = 0.43530717064257474;
    msg.g_min = 0.7747949389037965;
    msg.g_max = 0.38496370337591923;
    msg.g_lat_max = 0.08480923955281872;
    msg.rpm_min = 0.6557919498247833;
    msg.rpm_max = 0.5538448364253554;
    msg.rpm_rate_max = 0.5211152973503155;

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
    msg.setTimeStamp(0.14932326657616524);
    msg.setSource(45138U);
    msg.setSourceEntity(224U);
    msg.setDestination(12457U);
    msg.setDestinationEntity(207U);
    msg.op = 58U;
    msg.speed_min = 0.3972982915310822;
    msg.speed_max = 0.9705302982476998;
    msg.long_accel = 0.5422870206120348;
    msg.alt_max_msl = 0.7643246426960774;
    msg.dive_fraction_max = 0.9436319922912713;
    msg.climb_fraction_max = 0.06545723912533585;
    msg.bank_max = 0.7477538391574784;
    msg.p_max = 0.8664033111830701;
    msg.pitch_min = 0.25154446908314154;
    msg.pitch_max = 0.604167305853608;
    msg.q_max = 0.43742149325549995;
    msg.g_min = 0.8549789394332957;
    msg.g_max = 0.6006448002796424;
    msg.g_lat_max = 0.8779478279653562;
    msg.rpm_min = 0.4011059767979268;
    msg.rpm_max = 0.9643802862334636;
    msg.rpm_rate_max = 0.3804187936505461;

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
    msg.setTimeStamp(0.4949250202722646);
    msg.setSource(52626U);
    msg.setSourceEntity(135U);
    msg.setDestination(1129U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.6141396883316491);
    msg.setSource(4578U);
    msg.setSourceEntity(143U);
    msg.setDestination(22445U);
    msg.setDestinationEntity(81U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.5426147585776068;
    tmp_msg_0.confidence = 0.08659956082813514;
    tmp_msg_0.opmodes.assign("VCKLVGPMBUBEKZAETYZLQEJQJILXETPIIDNBUIRYRPURVYYRKNBQMEZKDBTADVSWPCHFPHIYWKWOXJDTSSMKTIQMAOAZUOJLJXNNQFZOSGJWYZCEWONTVXOCZLBFHEQXYGFCXHTINLGHERDITVSMWFCHYSDMJHSRMUSVGRPNNOVELBTCKNXZCDNDUGRHFPZBLADYQMTJADWMQRWAJOBUFKUMAGKPQFFWHOOLICIALPUVPCXKWJ");
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
    msg.setTimeStamp(0.46731479832296596);
    msg.setSource(29858U);
    msg.setSourceEntity(235U);
    msg.setDestination(389U);
    msg.setDestinationEntity(27U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 60286U;
    tmp_msg_0.custom.assign("QVLWGHFISMRXGHJZFCCNAKZXPPDXFQOLHEHSILCARATYRBTJMGVSMGQHJZNIJTSXBYBIXYBZFEPPOSSGNKZKZCCMERPRXITVEDFJMZGKYPOVFVQMAYZPHGHRQNMQDHDWEWCONATVYOCRSOCMRIOKRJOIWGWQUTSZYWNGXWKQEIVOCDLAUTALANO");
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
    msg.setTimeStamp(0.8681399880787287);
    msg.setSource(31189U);
    msg.setSourceEntity(32U);
    msg.setDestination(32818U);
    msg.setDestinationEntity(60U);
    msg.value = 0.2368593660374766;

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
    msg.setTimeStamp(0.9331719316190794);
    msg.setSource(56963U);
    msg.setSourceEntity(201U);
    msg.setDestination(47560U);
    msg.setDestinationEntity(105U);
    msg.value = 0.029299056993790873;

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
    msg.setTimeStamp(0.9904743604022426);
    msg.setSource(45949U);
    msg.setSourceEntity(127U);
    msg.setDestination(3081U);
    msg.setDestinationEntity(28U);
    msg.value = 0.48707918481925105;

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
    msg.setTimeStamp(0.9853173624469699);
    msg.setSource(19266U);
    msg.setSourceEntity(239U);
    msg.setDestination(6461U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.5340526275626118;
    msg.lon = 0.4069245589901834;
    msg.height = 0.06954064034316909;
    msg.x = 0.41411511685791236;
    msg.y = 0.4165807824701935;
    msg.z = 0.060889377126232325;
    msg.phi = 0.1343019521219545;
    msg.theta = 0.02795653743333204;
    msg.psi = 0.13569968183391878;
    msg.u = 0.44436931038642147;
    msg.v = 0.8183977235043656;
    msg.w = 0.7882287150066707;
    msg.p = 0.7830301418804314;
    msg.q = 0.44087009126542576;
    msg.r = 0.12334133836684635;
    msg.svx = 0.13644372947047356;
    msg.svy = 0.20048444344451022;
    msg.svz = 0.7912825741852989;

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
    msg.setTimeStamp(0.31985373344031554);
    msg.setSource(9801U);
    msg.setSourceEntity(127U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.41178060702245645;
    msg.lon = 0.3070821419676545;
    msg.height = 0.3173838935400619;
    msg.x = 0.017883946288488772;
    msg.y = 0.7830647246003726;
    msg.z = 0.47426691955456834;
    msg.phi = 0.5197620480190187;
    msg.theta = 0.4592782312159027;
    msg.psi = 0.24060938591755898;
    msg.u = 0.11071673948040228;
    msg.v = 0.5537788567910181;
    msg.w = 0.7386970511109254;
    msg.p = 0.40642953820886885;
    msg.q = 0.9096104869304769;
    msg.r = 0.8686214497554965;
    msg.svx = 0.4035328789269351;
    msg.svy = 0.8414804110751714;
    msg.svz = 0.20316559144269886;

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
    msg.setTimeStamp(0.5876275725412633);
    msg.setSource(11903U);
    msg.setSourceEntity(222U);
    msg.setDestination(55279U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.25155803423289314;
    msg.lon = 0.8974467360666748;
    msg.height = 0.446822894709912;
    msg.x = 0.6954984217224037;
    msg.y = 0.9907368700586944;
    msg.z = 0.1476842647383566;
    msg.phi = 0.1779413179075029;
    msg.theta = 0.3350347598082658;
    msg.psi = 0.5947898916047573;
    msg.u = 0.3238266527747835;
    msg.v = 0.6615999686886664;
    msg.w = 0.07720615386493135;
    msg.p = 0.2864165976167965;
    msg.q = 0.3416055935442438;
    msg.r = 0.7054284539138201;
    msg.svx = 0.9487246341409439;
    msg.svy = 0.9582563617116672;
    msg.svz = 0.6811335155048729;

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
    msg.setTimeStamp(0.2704634857873268);
    msg.setSource(7423U);
    msg.setSourceEntity(0U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(96U);
    msg.op = 45U;
    msg.entities.assign("WHMHXKKNGECSMCBXOMFGFZWQIGYBYBTDRMFZMNJIRFUFJHZDQKJEBUMNYWOLSOUPCZMHWADQXXWYGBCKKUAFJHKOIGINSEAOLLFPUNDZTMLYIQJCIWPEDGGPNEGRTUIVKZTYVJTOJDSYMVCWPGBSEXBVFUZOCQDYLQMVDSHZTVLNSAVTRUNXW");

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
    msg.setTimeStamp(0.40920514545303777);
    msg.setSource(24158U);
    msg.setSourceEntity(76U);
    msg.setDestination(47861U);
    msg.setDestinationEntity(122U);
    msg.op = 174U;
    msg.entities.assign("YVEOKQFDQFUXCHHPMVUDTUEOEVMMN");

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
    msg.setTimeStamp(0.6150126753025427);
    msg.setSource(20489U);
    msg.setSourceEntity(137U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(7U);
    msg.op = 235U;
    msg.entities.assign("ZBKOWOKTLAXJYOBXPMJZDDSZNDQTXCDVHACLYNPMXREGKVBSUYVANKJLMGLXWRKWSMVBPSFSAFQHQWFPLWGRYYFLDSNWNEFKJUBJIGPYQBANZUZNRDCFMIRUMCGOEXIOQYTJZRUVTTHIJQZZZHIBTHABBGEAMICOUXD");

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
    msg.setTimeStamp(0.13225295480695498);
    msg.setSource(42765U);
    msg.setSourceEntity(223U);
    msg.setDestination(16802U);
    msg.setDestinationEntity(212U);
    msg.type = 107U;
    msg.speed = 32767U;
    const signed char tmp_msg_0[] = {52, -125, -14, 35, 125, 49, 3, 28, 76, -80, 85, 61, -128, 51, 22, -105, -76, -47, -23, 100, -48, 31, -5, -55, 33, 88, -73, 74, -47, -9, 99, 45, -20, -116, 126, 25, -62, 79, 110, 35, -30, 56, -125, -36, -74, -65, 99, 65, -36, 108, -73, 74, 70, 9, 7, -118, -44, 11, -101, -6, 124, -22, 123, -1, 70, -10, -125, 61, -44, 56, 89, -45, 58, -21, -52, -126, 104, -97, 51, -38, -34, 76, 79, -11, 1, -14, -54, 101, -109, 12, 51, -79, 92, 38, 120, 92, -103, 74, -2, -8, 85, 61, 126, 116, -74, 52, 101, 56, -100, -99, -80, -120, 58, -30, -26, -6, 28, 77, 103, -37, 73, 77, -96, -9, 38, 51, 33, 0, -88, -42, 48, -101, -119, -112, -97, -84, 115, -66, -103, -8, -79, -14, -28, -36, 100, 111, 14, -39, 86, 2, -91, -65, 94, 64, 67, -30, -9, -116, 62, 79, 40, -95, -102, -31, -7, 65, -65, 94, -27, 60, 63, -4, 38, -54, 75, 91, 78, 104, 47, 10};
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
    msg.setTimeStamp(0.9276943454587588);
    msg.setSource(38316U);
    msg.setSourceEntity(235U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(19U);
    msg.type = 83U;
    msg.speed = 8557U;
    const signed char tmp_msg_0[] = {-86, 78, 111, -32, 11, 95, -12, 88, -100, -18, -112, -11, 92, -18, 19, 107, 58, 115, 41, 101, 31, 31, -124, 52, 42, -72, 93, -16, -42, -94};
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
    msg.setTimeStamp(0.5772580784490806);
    msg.setSource(17867U);
    msg.setSourceEntity(218U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(106U);
    msg.type = 25U;
    msg.speed = 23435U;
    const signed char tmp_msg_0[] = {108, 28, 122, 65, 63, 93, -89, -95, -60, 14, -21, -39, -73, -37, -105, 53, -22, -63, -68, -53, 84, -5, 74, -128};
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
    msg.setTimeStamp(0.9611740511851624);
    msg.setSource(16894U);
    msg.setSourceEntity(75U);
    msg.setDestination(6400U);
    msg.setDestinationEntity(146U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.8782201540130049;
    msg.bank2p_pgain = 0.3332332025355801;

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
    msg.setTimeStamp(0.3533887261181595);
    msg.setSource(40268U);
    msg.setSourceEntity(186U);
    msg.setDestination(26131U);
    msg.setDestinationEntity(109U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.3874905082289365;
    msg.bank2p_pgain = 0.4082703862911159;

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
    msg.setTimeStamp(0.42890318155193297);
    msg.setSource(60998U);
    msg.setSourceEntity(140U);
    msg.setDestination(46295U);
    msg.setDestinationEntity(13U);
    msg.op = 112U;
    msg.tas2acc_pgain = 0.737960407046387;
    msg.bank2p_pgain = 0.5517777200857753;

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
    msg.setTimeStamp(0.171049769539788);
    msg.setSource(49906U);
    msg.setSourceEntity(224U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(252U);
    msg.available = 2489474068U;
    msg.value = 110U;

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
    msg.setTimeStamp(0.6080539136280186);
    msg.setSource(45636U);
    msg.setSourceEntity(113U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(192U);
    msg.available = 1637943867U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.38894946400749175);
    msg.setSource(16691U);
    msg.setSourceEntity(83U);
    msg.setDestination(8491U);
    msg.setDestinationEntity(94U);
    msg.available = 1377553826U;
    msg.value = 8U;

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
    msg.setTimeStamp(0.4650281705157202);
    msg.setSource(59681U);
    msg.setSourceEntity(201U);
    msg.setDestination(47510U);
    msg.setDestinationEntity(229U);
    msg.op = 60U;
    msg.snapshot.assign("XUKHOGQVKDVGMCUAZMDRJQFIINNSAFNMROXZVOWTJUTBJIYADAVQWLKIKZCURTUHHKYPUWXSGKDRSTRFHQCBGWHVEBNEJNLSBYZBFZWLHLRXPUXOMWEOCCBMYELGUISXJPOYXYK");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8860180548958553;
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
    msg.setTimeStamp(0.4989082015479591);
    msg.setSource(39078U);
    msg.setSourceEntity(166U);
    msg.setDestination(42786U);
    msg.setDestinationEntity(11U);
    msg.op = 98U;
    msg.snapshot.assign("YETVYQLKAZBWRAYHLKTHZHJDRFOQXBWEPSJKTHMAGRBAHPWEJSCAYWCLUHJSXBVZKGKNFDDWOWMZUIHELQSGQVMJMGDCRDNGHRSGXDCGLODXNPIPZJCTMBFVRXUKNFKHLXXIGCIVPTW");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 80U;
    tmp_msg_0.text.assign("VANDJUITCCEHTFEKGMNWOWMOUMHXNRAFJHKALVSBETQKDULCHVTNRXYD");
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
    msg.setTimeStamp(0.29049154414561884);
    msg.setSource(15069U);
    msg.setSourceEntity(237U);
    msg.setDestination(38223U);
    msg.setDestinationEntity(211U);
    msg.op = 18U;
    msg.snapshot.assign("VKPZVLIHCQWNDPSTTWZDFGZJXISXEZXGCJLNATAOKLYCAMHGNNRRSTUUXJCWRJRUDEVUSKMBLYZBNEPVGUIFGXVUBQXUWUHVQTFPLBGRZDWPDMEPSYMYHJAMCWRINJEFUGSOIWBMIFXKLKPVYGSVPWMONKDCCXTZWSYZOHDB");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 251U;
    tmp_msg_0.clock = 0.9737524891560062;
    tmp_msg_0.tz = -91;
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
    msg.setTimeStamp(0.8311089527623579);
    msg.setSource(50874U);
    msg.setSourceEntity(86U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(88U);
    msg.op = 112U;
    msg.name.assign("OTIHIFYMQENFJATCAUMIRDEDEGNFAXPQGLJMSFQXWDGEI");

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
    msg.setTimeStamp(0.7470062583547379);
    msg.setSource(43981U);
    msg.setSourceEntity(10U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(215U);
    msg.op = 231U;
    msg.name.assign("OKLRLYHYYDSBVUQMZPIHHWMCZEETRZZEQOTBIPYYGJQSEFUHCUEJUYUETCIKAHDQDGLESFZBJYNSALXGAEDCKJLAAXPCIXRAJLYGOCCQIFDBRLQMITPJYPPHVVBMEWDVNZFMNNDWUXUVXTOVVCOGISXMMQYRPDXALFOGOWXBBCZFHFVKWNNILNHMUKFZTVTWTVBKKJPXC");

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
    msg.setTimeStamp(0.02253602629427609);
    msg.setSource(12147U);
    msg.setSourceEntity(164U);
    msg.setDestination(62762U);
    msg.setDestinationEntity(110U);
    msg.op = 76U;
    msg.name.assign("VYGVTGYUWANMREKIMXOGXLLRZQUJHRWLULAMIZDWFFJRSNZEOTCFATYYKTREHEGZZUUZMRSTSQWCPKD");

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
    msg.setTimeStamp(0.6963157969384465);
    msg.setSource(38619U);
    msg.setSourceEntity(107U);
    msg.setDestination(7707U);
    msg.setDestinationEntity(114U);
    msg.type = 169U;
    msg.htime = 0.6473473389331333;
    msg.context.assign("SXEJYDXLPWERIALTUDZACTAYIKORHBIIFJBHCZVJSWTZKDZVGOKPMJOMTOHQQZPAUTAOVAHLBSYEOJNLNECSKTSGKFXEYEHAZCFWDSRVOTIIRMSRAUPPCKBNKVMRTUCKRWGFQNQWXJP");
    msg.text.assign("TGKJKYTPGDITKDIENJYNWXHLSMBIVRQPUSUEPNLYVEXGQWYRPRXAFMAHNGNKKCLZMUYFKUNOLBMWKYXHLGPJSUQVZSTZVMPOBMJDBWAOCQFDPXNAZBJZEESCXOAGXCHNNFCVWRXOTREVWWRCIEVFZOMKBHHHFFUQJDWJBTQJJAFLQNODSVZDQSGRTFQLIEPRKTSRZGULYYWOUGCCJOEAABRPOIYHKAFXBCLXSIIHYZSUECZ");

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
    msg.setTimeStamp(0.8088903507365023);
    msg.setSource(2727U);
    msg.setSourceEntity(248U);
    msg.setDestination(62371U);
    msg.setDestinationEntity(40U);
    msg.type = 7U;
    msg.htime = 0.44489379347293667;
    msg.context.assign("MUQGCHLJOFRSZEUCTFHKYMAYKPNZVGWZIYIWMJAUKRLSCJLAMPWKSDGNDBTZWRGLPMAVVSLMGIWNICOCRIZROOARGTBEEFUZYVYFSGAQWICPQKCCUJXTPWEAPALFOBYBZQPKFBMIYEVMQXWWXARHYSSLZJWNQXBISFZXRNDZQMAYNMITERKXHBRTDKHSTNGJUCJCFGBXPSHNOOVDDXLOVHEUDKTYDTELDINNDOPJUFVBQGLTEVEJOJXQHK");
    msg.text.assign("HWZCZFTHLPFOCUBYFUOWGTHSLVESDTEZZTDELHJIHGSQJXOUMPKMPEIASBJZQURYSK");

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
    msg.setTimeStamp(0.29190195589974854);
    msg.setSource(28791U);
    msg.setSourceEntity(5U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(175U);
    msg.type = 175U;
    msg.htime = 0.8644850083280745;
    msg.context.assign("YUGCPPUCGVAOZPFMRLRDSQMNYEYJDZGAOEILPRNROTJMPCKTIKQNIWZAFZKXDTGHXEUUCCATHR");
    msg.text.assign("KGSWGOITVMJWAFWQWBAFXOMZJDSKCJNLKCXGZFJZHEVUKLXOLNVZBQPYLGPDPTWJODFSMDWGGJSACMTKZQEBRQVGJARJMSNHWQWIFYCKPDQXOUPXUMRQZBMSATICRPSUBMZZELBGFCLYFUIETVHENHBMLNYHIBORYMOUFRDUYXDTLSFQDETPYUPKPUXIQEASHCWDROUNABVNWQRNOXAFVYLIGTHIEEALRGIDHNNRJHKZK");

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
    msg.setTimeStamp(0.4207829052483787);
    msg.setSource(16257U);
    msg.setSourceEntity(149U);
    msg.setDestination(36087U);
    msg.setDestinationEntity(175U);
    msg.command = 107U;
    msg.htime = 0.6704860828146142;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 254U;
    tmp_msg_0.htime = 0.12200587472759095;
    tmp_msg_0.context.assign("ZYEKCQHBBPEBWCQTVVKMXVWVIUZSAXMGNZLAZINIQXKJFVUAUJRDSFJHFVEGQPIAZLMGGHHFTUXYVOOCPKXPZKWZJFHHNHLDFSBRXIEVMKDYQPZQLJRMTGXTYSYOTKNEKZUCABPVLVRQINEISJMYQXSGJOJBUGPNWOLYAYOMBWSJDUHRSALURQXMUCTJKDTSCNRIMYIAET");
    tmp_msg_0.text.assign("WEDPFUHGDXAHDRXVNEQBTJCYJHFAZIYWBLSIVVVXYPUNIUMOBLRKMAFVFOMQ");
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
    msg.setTimeStamp(0.3130872990432072);
    msg.setSource(37127U);
    msg.setSourceEntity(6U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(28U);
    msg.command = 70U;
    msg.htime = 0.36706328400102173;

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
    msg.setTimeStamp(0.8323845818902789);
    msg.setSource(19661U);
    msg.setSourceEntity(7U);
    msg.setDestination(15522U);
    msg.setDestinationEntity(228U);
    msg.command = 148U;
    msg.htime = 0.8376044310094596;

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
    msg.setTimeStamp(0.541331647256845);
    msg.setSource(29124U);
    msg.setSourceEntity(64U);
    msg.setDestination(52026U);
    msg.setDestinationEntity(157U);
    msg.op = 39U;
    msg.file.assign("AUQIJOGZXWDZIMWNVYICIPDOFKYMNDLLCHVJEZCYWEOJHAGGESYASAQMUCHGNUJDWXQKWUNHSXPGOOVICMGEULBHUWDTHEWEZTQRWFRITISPTUPEOOMTAGTSACZPKQCNALHBSBUODMXYBWSLWVIXYFJPLGJPCKOLTLBRCRRKHSLJRNEHKDMKNDBRSGNJXMPTIFLBFBYRXTYDBDVVFXVNAKRVURJQQYKTE");

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
    msg.setTimeStamp(0.43095658844996343);
    msg.setSource(24798U);
    msg.setSourceEntity(188U);
    msg.setDestination(3277U);
    msg.setDestinationEntity(10U);
    msg.op = 73U;
    msg.file.assign("OSBXGQEPVDMIPBEMXEHSJGTREYPQVVHPJEFQPYYSHDRLCICBQBZBZNKAYMDFHFAQODISWUBWGLGXVLUMLKE");

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
    msg.setTimeStamp(0.4484251638077652);
    msg.setSource(37004U);
    msg.setSourceEntity(34U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(205U);
    msg.op = 119U;
    msg.file.assign("GNACPFIWRBTDQSNFHSLOSIMOJVLMVXGONVDDDAAFHVDEXVEPRZQFIUCCPLOEFYZGFJKIKRNYPSSEASVKXZWMVHCKOOICZHOTYTJXMOBTUNXBYBUMBSJFXYKPXYEQTWUIKKRWVFSZDRGZOPFGEMNBLCLNHHKUZYJQWRSJMTCVPCPAYTZEGEHTI");

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
    msg.setTimeStamp(0.45907733228328906);
    msg.setSource(37122U);
    msg.setSourceEntity(61U);
    msg.setDestination(16902U);
    msg.setDestinationEntity(208U);
    msg.op = 145U;
    msg.clock = 0.8885393630457843;
    msg.tz = -114;

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
    msg.setTimeStamp(0.2947618308801533);
    msg.setSource(63126U);
    msg.setSourceEntity(164U);
    msg.setDestination(62917U);
    msg.setDestinationEntity(134U);
    msg.op = 230U;
    msg.clock = 0.7945177941527117;
    msg.tz = 43;

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
    msg.setTimeStamp(0.7677904643798651);
    msg.setSource(31123U);
    msg.setSourceEntity(141U);
    msg.setDestination(3698U);
    msg.setDestinationEntity(92U);
    msg.op = 190U;
    msg.clock = 0.1447992696152638;
    msg.tz = -111;

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
    msg.setTimeStamp(0.03152841466416223);
    msg.setSource(48117U);
    msg.setSourceEntity(169U);
    msg.setDestination(30353U);
    msg.setDestinationEntity(121U);
    msg.conductivity = 0.4104516382574023;
    msg.temperature = 0.2935412523269578;
    msg.depth = 0.48071056325408534;

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
    msg.setTimeStamp(0.8099027719398105);
    msg.setSource(28597U);
    msg.setSourceEntity(172U);
    msg.setDestination(39118U);
    msg.setDestinationEntity(248U);
    msg.conductivity = 0.8634619674567251;
    msg.temperature = 0.9912065280480897;
    msg.depth = 0.8793967695467069;

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
    msg.setTimeStamp(0.8527668514290989);
    msg.setSource(60162U);
    msg.setSourceEntity(78U);
    msg.setDestination(31352U);
    msg.setDestinationEntity(245U);
    msg.conductivity = 0.6127894976671229;
    msg.temperature = 0.037083065487323985;
    msg.depth = 0.15088244214970037;

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
    msg.setTimeStamp(0.7457846494578556);
    msg.setSource(50695U);
    msg.setSourceEntity(98U);
    msg.setDestination(56907U);
    msg.setDestinationEntity(111U);
    msg.altitude = 0.49691809102259554;
    msg.roll = 28916U;
    msg.pitch = 37088U;
    msg.yaw = 59286U;
    msg.speed = 2;

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
    msg.setTimeStamp(0.7555247917602843);
    msg.setSource(23758U);
    msg.setSourceEntity(1U);
    msg.setDestination(60989U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.8208115313826893;
    msg.roll = 18500U;
    msg.pitch = 25038U;
    msg.yaw = 39594U;
    msg.speed = 17348;

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
    msg.setTimeStamp(0.5118157289232312);
    msg.setSource(30072U);
    msg.setSourceEntity(206U);
    msg.setDestination(26075U);
    msg.setDestinationEntity(84U);
    msg.altitude = 0.31856781601736806;
    msg.roll = 7325U;
    msg.pitch = 12796U;
    msg.yaw = 26950U;
    msg.speed = 11975;

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
    msg.setTimeStamp(0.14921379928896294);
    msg.setSource(58929U);
    msg.setSourceEntity(221U);
    msg.setDestination(5042U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.7273825762594459;
    msg.width = 0.5734849053944823;
    msg.length = 0.9875955549706649;
    msg.bearing = 0.08031026454753565;
    msg.pxl = -5354;
    msg.encoding = 244U;
    const signed char tmp_msg_0[] = {98, 27, -10, -75, -50, -79, 80, 119, -99, 7, -100, 80, -105, -77, 90, 121, 11, 62, -33, 80, 100, 111, -51, 9, -31, 99, -107, 114, 1, -123, -8, -7, -82, 33, 104, 29, -120, 123, 8, -109, 91, -33, 111, 50, 33, -75, 15, 108, 8, 112, 115, -49, 90, -40, 9, -121, -75, -113, -127, -60, -58, 2, 32, -72, -116, -27, 97, 103, 9, 35, -96, -118, 66, -44, -37, -38, 63, -57, -101, 125, 74, 68, -121, 39, 110, -55, -23, -1, -45, 41, -46, 22, -46, 26, 70, -108, -13, 8, -114, -113, 26, 91, 22, -40, -76, -128, -78, -21, -83, 94, -113, 45, -91, -97, -53, 123, -79, -4, 114, -38, 34, 36, 85, -31, 82, 40, -72, -123, 61, -85, -40, -81, 30, -43, -98};
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
    msg.setTimeStamp(0.4188804560827657);
    msg.setSource(5977U);
    msg.setSourceEntity(251U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(13U);
    msg.altitude = 0.5789772561237998;
    msg.width = 0.9338405163937095;
    msg.length = 0.5384090926622609;
    msg.bearing = 0.4980893195206776;
    msg.pxl = 943;
    msg.encoding = 190U;
    const signed char tmp_msg_0[] = {76, -59, -86, -45, 94, 119, 44, 42, 32, 55, 5, -105, -74, -99, -71, 85, 93, 79, 25, -28, 52, 3, 57, 73, -69, 26, -74, 38, -50, 112, 90, 48, -93, 10, -11, -12, -30, -14, -110, -19, -74, 21, 126, 116, -121, 31, 107, -4, 52, -43, -68, -31, -58, -47, 49, -62, 9, 0, -39, 76, 36, 60, 85, -23, -1, 78, 82, 86, -103, -63, 100, 79, -32, -47, -98, 74, 118, -37, 100, -27, 126, -15, -126, 47, -123, -120, 13, -46, -33, -127, 37, -46, -69, -45, -70, 2, -92, 10, -7, 56, -30, -103, 66, 66, -58, 77, 4, 26, -46, -71, 118, 71, -80, 26, 99, -105, -11, 90, 122, 111, -116, -75, 34, -121, 38, 51, -72, 115, -71, 43, 104, -101, 51, -93, -47, -116, 123, 84, 88, -23, 102, -29, 104, -47, -18, -78, 84, -106, -119, 86, -90, 20, -118, 57, 7, -41, 32, 8, 37, -73, 79, -123, 113, -1, -124, -15, 110, 22, 99, 50, 55, -8, -79, -124, 75, -20, 83, 41, -79, -34, -108, -56, -90, 53, 43, -66, 126, -10, 84, -104, -19, 18, -107, -22, -79, 110, -86, 69, -117, -49, -44, 15};
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
    msg.setTimeStamp(0.5878621124731428);
    msg.setSource(40531U);
    msg.setSourceEntity(214U);
    msg.setDestination(25396U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.66925394204396;
    msg.width = 0.2790227598862245;
    msg.length = 0.6451687275516448;
    msg.bearing = 0.7235422240430824;
    msg.pxl = 892;
    msg.encoding = 81U;
    const signed char tmp_msg_0[] = {-48, -43, 3, 68, 25, 42, -106, 101, 105, 27, -68, -115, 44, -121, 91, 45, -75, -30, 52, 84, -100, -64, -1, 61, -36, -38, 86, -112, 126, 14, 97, 117, -114, 34, -6, 85, -63, 67, -29, 49, -69, -33, 13, -108, -117, -104, -81, -121, -21, 10, -118, 90, 69, 34, 0, -103, 85, -122, -85, -77, -39, -96, 121, -39, 71, 40, -21, 113, 28, -15, 35, 65, 60, -91};
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
    msg.setTimeStamp(0.2860880787729495);
    msg.setSource(56858U);
    msg.setSourceEntity(155U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(113U);
    msg.text.assign("YYBAGWRTTZWYDSGMDBQIJVTVGLAAKHXLMWZJDXNNVSJWIWLRULPSVEFJTTEYXHEOEQGFWSCDHWQVKQMPZUWHHVDKPQHUARAAGZSFFYZFVEGAIJZKZJEIBYFJPLZATXOINLQRTTUSPJMFMRZKEPNODS");
    msg.type = 143U;

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
    msg.setTimeStamp(0.35587373326388805);
    msg.setSource(285U);
    msg.setSourceEntity(108U);
    msg.setDestination(50390U);
    msg.setDestinationEntity(225U);
    msg.text.assign("OAIZZKATESNNSFJBFGGUWYGJWPSQFDEEYRQCTDOVQQCVGCKFXRMGOHYXWTQLIVMNVXUHNGKYMOPCHWSOJYEZUSWKKAVHNZJVHNRPTCRDHMTBVXCSIMETJDZXIQIEOGABCFPEUKJTMAXZURV");
    msg.type = 156U;

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
    msg.setTimeStamp(0.4887243726441233);
    msg.setSource(12386U);
    msg.setSourceEntity(50U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(65U);
    msg.text.assign("ENWMYHOYWSDTTQALJKZZZLVIPAMGRKYBSLXDDVEMQFIIRODTNNTIWYCJDFD");
    msg.type = 150U;

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
    msg.setTimeStamp(0.5326043460917044);
    msg.setSource(52080U);
    msg.setSourceEntity(192U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(34U);
    msg.parameter = 36U;
    msg.numsamples = 59U;
    msg.lat = 0.20768814169514427;
    msg.lon = 0.15824100863972468;

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
    msg.setTimeStamp(0.5763319289867382);
    msg.setSource(32109U);
    msg.setSourceEntity(220U);
    msg.setDestination(29232U);
    msg.setDestinationEntity(148U);
    msg.parameter = 194U;
    msg.numsamples = 156U;
    msg.lat = 0.41061663819605276;
    msg.lon = 0.9018699536047596;

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
    msg.setTimeStamp(0.40156410939236253);
    msg.setSource(19296U);
    msg.setSourceEntity(239U);
    msg.setDestination(48163U);
    msg.setDestinationEntity(244U);
    msg.parameter = 120U;
    msg.numsamples = 92U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38851U;
    tmp_msg_0.avg = 0.6184842284911013;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3442550816457971;
    msg.lon = 0.32980993422918403;

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
    msg.setTimeStamp(0.6921675371593112);
    msg.setSource(3507U);
    msg.setSourceEntity(227U);
    msg.setDestination(40892U);
    msg.setDestinationEntity(171U);
    msg.depth = 40150U;
    msg.avg = 0.17169780069295282;

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
    msg.setTimeStamp(0.8632040923747165);
    msg.setSource(56218U);
    msg.setSourceEntity(244U);
    msg.setDestination(39467U);
    msg.setDestinationEntity(156U);
    msg.depth = 24563U;
    msg.avg = 0.40314283611976454;

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
    msg.setTimeStamp(0.2834415986727328);
    msg.setSource(56195U);
    msg.setSourceEntity(200U);
    msg.setDestination(9171U);
    msg.setDestinationEntity(91U);
    msg.depth = 24157U;
    msg.avg = 0.6922847639887882;

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
    msg.setTimeStamp(0.24024379914322402);
    msg.setSource(55238U);
    msg.setSourceEntity(14U);
    msg.setDestination(18873U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.9699593070018552);
    msg.setSource(38894U);
    msg.setSourceEntity(150U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.008985589167032404);
    msg.setSource(28574U);
    msg.setSourceEntity(27U);
    msg.setDestination(33929U);
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
    msg.setTimeStamp(0.1293579188461076);
    msg.setSource(20895U);
    msg.setSourceEntity(134U);
    msg.setDestination(54524U);
    msg.setDestinationEntity(110U);
    msg.sys_name.assign("GRXTEEOYIJFYD");
    msg.sys_type = 202U;
    msg.owner = 42812U;
    msg.lat = 0.0019267632038868499;
    msg.lon = 0.887769196931101;
    msg.height = 0.542016342322218;
    msg.services.assign("XYHGYCLHDUHCZVKNYQLCPMHIEREDZAJRTAWOTNVSYEFVLQQUIIOZQKZEXSWDXMBUUKWMDPVHJJYRFFHFBSAZKXRZQNPNIMRURUDSA");

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
    msg.setTimeStamp(0.13683746775867944);
    msg.setSource(20603U);
    msg.setSourceEntity(178U);
    msg.setDestination(41149U);
    msg.setDestinationEntity(84U);
    msg.sys_name.assign("GVNRASOPSGJLLAZTYIMSCAEOIGJLCYDIVYSFTDFQJHPHATSEVXPRIQMYXSRVXRGHNWCGOCDDHQEPBHQRVXEQYCBJALPNUCPEPNQNDVOJJCKGUKMQOUFKE");
    msg.sys_type = 37U;
    msg.owner = 27814U;
    msg.lat = 0.10595504654856291;
    msg.lon = 0.19235496812538921;
    msg.height = 0.0006038943028161547;
    msg.services.assign("NKDERSHKYQWSOVXDBHALYOEERUUAZPCTTWAGHDVFGJTGRUTMAPBWOIJDPKESIMXLIWLZQBVYTKCKIIPNOMCMISWMSJLBRPWCOYJMFHJGVNRDPHGGZSLBQZXPARFO");

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
    msg.setTimeStamp(0.4486485446778571);
    msg.setSource(54522U);
    msg.setSourceEntity(102U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(59U);
    msg.sys_name.assign("AUOIXKZFZPRGONIEEBPJTSBYQJPFTJQQIAMTDSDVHDHMQUDXVZGUFODRAYPOENECNYGLPLYJVEHBCQCWG");
    msg.sys_type = 216U;
    msg.owner = 17847U;
    msg.lat = 0.4711142852929443;
    msg.lon = 0.2928190969339143;
    msg.height = 0.20783310091876184;
    msg.services.assign("QZAHQVJNJNWXDMAOMGHCUYEWQNMPKUMQOGCTFLKZPXPHMYWVFSBSZCBPIWBYAXQOKGEGDYBGHWMSOECPBHVQIXNMDZCRJVAPPHUQJHRRWLJUGBMIPOWOECIIYXADEKAMJUAKBZKCNPRNUYXKJTZSWXFJIELASSDTCGNJIXGFUVUYSLQVALDYZNZVWSFXCDTRVJZYOGLHOETRRHXOLTFRTQGKONBWED");

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
    msg.setTimeStamp(0.693058157373745);
    msg.setSource(28659U);
    msg.setSourceEntity(144U);
    msg.setDestination(41786U);
    msg.setDestinationEntity(178U);
    msg.service.assign("GDEQZVHRCMPIZHWRVTOIVONJMHQTAXUKFFACKPDUAORIPEKLNRTPNDBUSCXWYIMRJERAJIMKCTIZSGFPNSEQYHPYJRWIQQJQSZSJEKATEVJDGBWVKSTSFQALZDFVHDGHYIQZPUQFTRIGSMAUZTYXCBNALLCXMNGBPRMETCDOJOGFXPBVLBLWBN");
    msg.service_type = 31U;

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
    msg.setTimeStamp(0.5293560567118076);
    msg.setSource(39284U);
    msg.setSourceEntity(31U);
    msg.setDestination(38498U);
    msg.setDestinationEntity(165U);
    msg.service.assign("PVQDEAAKHQHYKUWWDQUZYLFHPQVDTLPAIUGATUTBVUXCMUDRFJBCNWSKNRGSJIWMADXIBLUVERXMPSSJJLHTOQZYBBIIDQDAGGUHCGEGVRFBJMXLNNZVINXCUPLVOKKXPZWDHNRCCKBAJYOSZPCFTKEBWYRRIEEIRHMEQTWBSRGESJOZSOOAFMZHQTOOO");
    msg.service_type = 87U;

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
    msg.setTimeStamp(0.4914329585358864);
    msg.setSource(54092U);
    msg.setSourceEntity(208U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(85U);
    msg.service.assign("DFNCQRNRYVTLQMCEZYYTJ");
    msg.service_type = 92U;

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
    msg.setTimeStamp(0.7417279000687176);
    msg.setSource(64523U);
    msg.setSourceEntity(217U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(18U);
    msg.value = 0.226047963682379;

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
    msg.setTimeStamp(0.533164116578456);
    msg.setSource(20533U);
    msg.setSourceEntity(146U);
    msg.setDestination(6738U);
    msg.setDestinationEntity(77U);
    msg.value = 0.767599740376715;

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
    msg.setTimeStamp(0.5369885668443);
    msg.setSource(17714U);
    msg.setSourceEntity(249U);
    msg.setDestination(15450U);
    msg.setDestinationEntity(188U);
    msg.value = 0.17813247873030114;

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
    msg.setTimeStamp(0.056470678583302236);
    msg.setSource(58523U);
    msg.setSourceEntity(113U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8853075339588692;

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
    msg.setTimeStamp(0.019460990927684385);
    msg.setSource(20572U);
    msg.setSourceEntity(24U);
    msg.setDestination(55821U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7389724098350898;

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
    msg.setTimeStamp(0.040667499734204915);
    msg.setSource(4091U);
    msg.setSourceEntity(35U);
    msg.setDestination(51243U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9572282227888422;

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
    msg.setTimeStamp(0.8112619949057975);
    msg.setSource(63564U);
    msg.setSourceEntity(215U);
    msg.setDestination(28095U);
    msg.setDestinationEntity(237U);
    msg.value = 0.07298854958172474;

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
    msg.setTimeStamp(0.39600775746821215);
    msg.setSource(12946U);
    msg.setSourceEntity(163U);
    msg.setDestination(29012U);
    msg.setDestinationEntity(30U);
    msg.value = 0.110653531736015;

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
    msg.setTimeStamp(0.9880116504760671);
    msg.setSource(31980U);
    msg.setSourceEntity(198U);
    msg.setDestination(7589U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9474971996003332;

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
    msg.setTimeStamp(0.6024739208346123);
    msg.setSource(13654U);
    msg.setSourceEntity(29U);
    msg.setDestination(53401U);
    msg.setDestinationEntity(30U);
    msg.number.assign("KDKTTMPZEVSQBOZGIEIBMQWMWMCHERRGYFUGZPOYTXIXJWVSKJKSYSBDDNAKLTXAEGXDBMFNLQMBTCHVYBXZRRCYFWPFTYLBZUKSRUPWNZJSEMLUQYJKGNKISLOAODNDVQFMJWHWUHIIBJQAKPQAXXPFJMROENLSBHGUJXHCDONPZBJVF");
    msg.timeout = 19426U;
    msg.contents.assign("BGBICCBTEFULXUGSZLPXWRMYOXKPVSJJUMMQRAUBITDNZMXQTDREWYPIJWTVFYGYSHHEXGAMLQYFBROSMOMUASMWWBEYSWVFWHXDXZVNTTVCXHICAKNLFDZIZURPQIACBKAOFFUZAVVERGDGGWEUSHXZILPLNRHJOCFXEVJLFIMQYJNZGJTGIBDZCKPTOJYQTNESWUBLSYPHBKPHK");

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
    msg.setTimeStamp(0.574160020079093);
    msg.setSource(24906U);
    msg.setSourceEntity(236U);
    msg.setDestination(25581U);
    msg.setDestinationEntity(238U);
    msg.number.assign("GNZZIJESINZMUUGFYDYLNCBRNILLETWKHZCMUTBQP");
    msg.timeout = 2183U;
    msg.contents.assign("VAMYWGRKACZZQQJDGRZUAJYTVJYBOKRIDCEIVVNPCLTHMGASIEIOSETWIEXSUJSBPBFBUYOZFKCMBXMNNIBOIQXGCLNXINOLCBCWLDQXRMLPMIASTZITFXXSCRHYWZLUKRGHHKLXTHEEPJQRADPWFMBAQFKRUQZEHDGFGJFDYHLEJJNKASVTNUFPGZVXYWOAEHQZGTDQPSHVXEQMANPUYUTD");

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
    msg.setTimeStamp(0.24254492979157483);
    msg.setSource(37105U);
    msg.setSourceEntity(18U);
    msg.setDestination(2204U);
    msg.setDestinationEntity(121U);
    msg.number.assign("NBYBURYOOBFKBQVZPBIQYYDQXQKLVATVYSARXUTFRRTLOGIMNLWZRFCTIMDVUYWJKEQUCTFTQYROPZVMBEVONGLLAKEGCXCUEXZLTFGKHMXZYERLHONOGKPEDDUEUQPMITNPMGDTRKJALSHNIZJFEPCIJOWDXSXBBABHWJGSIGUTNMQNCPFZHODVCPQKRASEKDSPWCILWHJNGEOSJWNXKZIAHFUJMMRA");
    msg.timeout = 22248U;
    msg.contents.assign("MVYATROQDUXHFPDKDSIBBYCGWSUNECTSGNJGKDAUKEFJWNRQGQZVQCBLIPGOFIHUMDSLFHLXTELVXEOHYKRTZTKWAIIXAHNHOQGRZHQBWTHEXDVLZPXHDVXZLWKJYSUQWJVUPPLQAMMBECKNKUZIGSVXWOETLRWFGFCDJCBYIBBXMYARIJDCUDPYMSTCXJCFORPYWIJKJOJULGVAPNEFMNIOQQNYFZAOZMRZKSCVRLMMNNTGOSAPABHRSP");

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
    msg.setTimeStamp(0.23004807306626718);
    msg.setSource(19316U);
    msg.setSourceEntity(252U);
    msg.setDestination(9717U);
    msg.setDestinationEntity(76U);
    msg.seq = 3664104098U;
    msg.destination.assign("ONXKXGRWVMVFXBZFYJLQUACCCLLKYRRMGNHBYRIQQNJUIZNGKRWWQPDMGWPPDQPATBIUPFGBUUFCMZEMYLXMJDUCIJTLXTEOALWMIWSSHBYEGNJYFDTUQOCVJYPARPIEYUTISILHAXSNJSJDDCAQBVVAOZZHPXVFQTVIWSHKZTMEOZKGURXMHAPUYCOTZVBVOHBEQWLCNQZDXEBROSLKGJFKEEHDVOKWPNRIKYFFKWLJSECTDGH");
    msg.timeout = 40375U;
    const signed char tmp_msg_0[] = {63, -21, 93, 115, -124, 99, 56, -1, 119, 90, 30, -80, -51, 97, -128, -25, -53, 85, -87, 78, -102, -125, 43, 52, 12, -104, 56, 107, 70, 115, -96, 48, -113, 86, 43, 13, -113, 113, -2, -62, -115, -53, -39, 30, 9, 21, 125, 50, -55, -46, -53, -34, 18, 61, 3, 50, -52, -117, 59, -36, 119, -41, 123, -39, 74, -90, -110, 93, -20, 112, 47, -46, 32, 84, 11, 29, 35, -53, 12, -80, 108, 102, 63, 36, -36, -93, -26, 34, 83, 51, 3, -82, 15, -73, -98, 6, -20, 9, -31, -90, -56, -99, -123, -98, -74, -105, 119, 61, 97, -76, -3, 53, -59, -109, -62, -117, -79, -33, 73, 65, -118, -87, 72, 14};
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
    msg.setTimeStamp(0.6834801948577084);
    msg.setSource(37776U);
    msg.setSourceEntity(19U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(188U);
    msg.seq = 181176796U;
    msg.destination.assign("ECQHSUFPTPRXECHGLERFOYDFRNIFWXIMJEBORAHHPCUATRIMIIAPAGLCSLXQCEIXUAFYVVCWVNYNNDMZBLOILYQGJ");
    msg.timeout = 10756U;
    const signed char tmp_msg_0[] = {-108, 59, 39, 47, 9, -47, -27, -101, 19, -103, -55, -65, 85, -48, -9, 57, -89, 13, 46, 75, -109, 17, -125, -62, -60, -125, -12, -5, -114, -9, -101, -30, -83, 32, -113, 58, 67, 109, -83, 78, -84, 89, -91, 34, 46, 77, 109, 67, -88, -31, 98, -49, 75, 107, 100, 101, 79, -98, -10, 40, 28, 12, 16, -36, 80, 109, 113, -41, 120, 8, 7, -67, 83, -23, 87, 43, 107, -5, 122, -7, 99, 33, -67, 52, 115, 90, 105, -122, -26, -86, -83, -91, 97, 120, 87, -121, -61, -57, 5, -114, -89, 92, -112, 78, -109, 84, -2, -119, -19, 58, -122, 89, 43, 99, 66, 97, -59, 86, 17, 121, -121, 117, -105, 122, -61, -128, -102, -77, -122, -27, -75, -107, -75, 74, -76, -23, 63, -120, 123, 54, -94, 49, -39, -36, 13, 89, 26, -116, 96, 62, 80, -122, -104, -55, 62, -103, 108, -68, 83, 53, -36, 71, 105, 74, -34, -14, -71, 61, 39, 93, 93, -6, -86, 9, -57, -82, 93, 56, 39, -36, 2, -102, 86, -71, 89, -49, -1, -115, 32, 124, 34, 101, -53, 27, 54, 4, 67, -58, 73};
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
    msg.setTimeStamp(0.9745573955060902);
    msg.setSource(43716U);
    msg.setSourceEntity(194U);
    msg.setDestination(19572U);
    msg.setDestinationEntity(109U);
    msg.seq = 2691207304U;
    msg.destination.assign("PLKPCTBAWVNGNHMCFLUAIFXSTHIKZMUKEJXIXIGEZFUMCQYROAYUCKUEYPXTCNHBLVSTOLCMZLHQMYRTGUOGWVFDVVVSGAFRROIGIBLDWVNDHCTHWAGUWTCPLDIPTROZQXAWSECHMJPKZICJG");
    msg.timeout = 52524U;
    const signed char tmp_msg_0[] = {4, -113, -93, 62, -43, -109, -107, -34, -7, 86, 64, -68, -93, -56, -128, 126, 76, 64, -45, 28, 58, 83, 126, 93, -122, 36, 78, 21, 16, -42, 114, 2, 0, -31, -82, -49, 23, 105, -41, -120, -68, -17, 108, -37, 47, -50, -91, 88, -94, 0, -34, -115, 120, 56, -69, -6, -15, -119, 53, 41, 25, 34, 55, 67, 124, -85, 2, 83, -57, 104, 119, -16, 81, 71, 76, -5, -16, 15, 2, 67, -53, -107, 58, -24, 119, -36, -104, -23, -119, -2, -58, -74, -109, 58, -78, -5, -23, -20, -90, 31, -58, -25, -53, -10, -56, 74, -36, -24, 0, -41, -69, 107, -49, 31, -69, 3, -57, -30, 108, -5, -72, -103, -45, 54, -47, -103, -14, -90, -121, -48, -66, 69, -45, -74, 107, 44, -108, 1, 13, -32, 74, -116, -96, -2, -123, -56, -114, 56, 46, -53, 83, -99, -62, -60, -20, 27, 71};
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
    msg.setTimeStamp(0.1549726324495212);
    msg.setSource(19633U);
    msg.setSourceEntity(26U);
    msg.setDestination(23215U);
    msg.setDestinationEntity(166U);
    msg.source.assign("EQSUWHICWTNHGXAL");
    const signed char tmp_msg_0[] = {124, -104, 22, -42, -91, -65, -44, 37, -7, 45, -106, 15, -107, 124, 58, -32, -116, -95, -120, -108, -124, 101, -48, -83, 78, 111, -53, -48, 66, 117, 9, 0, -42, -110, -61, 123, -28, -68, 14, -127, -39, -32, 92, -22, -57, -18, 21, 103, -50, -50, -60, -6, 48, -98, 11, -36, 6, -61, 37, 14, 62, -16, 61, -29, -81, -16, 23, -92, -21, -126, -94, 103, -112, -120, -20, -14, 87, -89, 23, 33, -93, 77, 36, -62, 69, -120, 44, -43, 10, 61, -68, -113, 49, -29, 23, 98, -3, -81, -61, -32, -57, 74, 63, 32, 45, -75, -124, 42, 11, -106, 43, -64, -83, 94, 112, -13, 3, -99, 17, -51, 72, -79, 53, 38, -123, -35, -92, 55, -118, -114, 13, -50, -115, 97, 70, 15, -38, -41, 48, -20, -51, 111, -111, -27, 124, -79, 104, -34, -80, -14, 121, 96, -125, 97, -32, -126, -56, -1, -124, 85, -27, -102, 60, 17, -38, -30, 38, 41, 22, 64, -71, 58, 120, -126, 110, -57, -52, 97, 70, 123, -123, -115, 120, 66, 61, 8, -62, -19, 73, -35, -124, 49, -66, 77, 67, 30, 120, 104, 12, 122, -30, -9, -103, 109, 23, -21, -65, 30, 7, 88, 113, -53, -42, -9, -43, 92, -8, 87, 57, 79, -56, 105, -119, 34, -29, -24, -123};
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
    msg.setTimeStamp(0.6977337649865968);
    msg.setSource(24151U);
    msg.setSourceEntity(156U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(190U);
    msg.source.assign("IPXLTHDBFOMSQORYPXAPNAUWBUECMKSNEPBZRNWZJGCHMTQWY");
    const signed char tmp_msg_0[] = {54, -74, 83, 121, -101, -60, -62, 111, 50, 98, 104, 9, -10, -119, 36, -9, -117, 41, -127, 101, -71, 26, 33, -112, 48, -32, -38, 60, 72, 96, 73, 45, -1, -86, -61, 73, 90, 72, -127, -126, -65, 28, -7, 20, 114, 72, 33, 46, 3, -84, -40, -123, 0, -122, -82, 54};
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
    msg.setTimeStamp(0.8040357584057908);
    msg.setSource(42811U);
    msg.setSourceEntity(248U);
    msg.setDestination(1783U);
    msg.setDestinationEntity(192U);
    msg.source.assign("IMXTDQMQOZWEAMIAVKIPWXXKYUEYHSAPJAKKJIFKYB");
    const signed char tmp_msg_0[] = {72, 80, -37, -27, 116, -6, -60, -39, 16, 104, -25, 115, 34, 65, -4, 31, -86, 61, -116, -26, -44, 27, -87, 73, 117, 19, 121, -93, -4, 3, 118, -82, 40, 102, 37, -13, -125, -90, 106, 36, -78, -92, -72, 10, 81, -23, 115, -25, 2, -53, -122, 69, 86, 119, -113, -43, 78, 110, -116, 26, -88, -13, 104, 43, -86, 112, -24, -47, -97, 119, -44, 75, -52, -51, 19, 9, 96, 112, 64, 74, -33, 64, 82, 96, 70, 102, 5, 71, 68, 47, -34, 23, 45, 51, 97, -128, 35, -62, -96, 91, -103, 9, -41, -116, -81, -33, 87, 51, -80, -29, 43, -12, -88, -29, -21, -11, 81, -44, 14, 42, 124, 81, -72, -4, 93, 17, -40, -49, 90, 87, 41, -43, 115, -61, -107, -85, -50, 118, -63, -25, -84, 84, -106, -27, -77, 67, 41, -89, 57, -56, -55, 77, -94, -6, 113, 110, -126, 93, -118, 76, -18, 55};
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
    msg.setTimeStamp(0.3532085401654621);
    msg.setSource(48024U);
    msg.setSourceEntity(242U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(105U);
    msg.seq = 4244206224U;
    msg.state = 144U;
    msg.error.assign("ZPWYYEUSVPZGPDEFVYOPVJBZNKPBFMVITLZOCJYFKXLHYAJXIPXVMFKESJIGXCSNXASNBCCOJRTBJSVOUBKLRMATYNURIKHLHALDWXIDPODMGZBXHLMRGSJFRZIBEG");

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
    msg.setTimeStamp(0.9824099952744242);
    msg.setSource(38460U);
    msg.setSourceEntity(67U);
    msg.setDestination(29977U);
    msg.setDestinationEntity(73U);
    msg.seq = 663505701U;
    msg.state = 185U;
    msg.error.assign("JXUJQCXZTHKSHZRLWWYAVUHBRMUVHFITJFDPDBQFLYQZHROEVFLKGVMBXGBFSAUWBAHETXANLMAEDIYOZKILNGTKRNSXZKPWRTXBJRTCFENUJWGIMOEVPSODEGCBLOLKHIKCXVBHQDMDFUDZNAUGNZOJGCXWGGWNXFQYMSAOFEQQYZAEOZXILZKKVCPUOABJSLCIKQDEUPTCYFSIQQWGVOJRPVSSMLTMITHBHRYNYJMYNPWJNPCYR");

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
    msg.setTimeStamp(0.15290786938604917);
    msg.setSource(58666U);
    msg.setSourceEntity(155U);
    msg.setDestination(10019U);
    msg.setDestinationEntity(176U);
    msg.seq = 2214565167U;
    msg.state = 67U;
    msg.error.assign("CNBEPLAFXTPKTRWHXHIFGGYWFGJLAJLRUZSQHQQWZWNVBJVETDXLEGTUGMTFGBKACMSZHSMFMDKHNJKYHGITDJZUCTCAJIHGHOCYLORGMATTDNPYMUROSYIIIMTRKOVZQSQJRXREEYDKJZOMHHRAICLKLEFYXDWFWNLUDWAWUZJDBPOBXFVNVPOIAPVBICDBOAMSIXSFYBPWCKQEUOQQVFJYRZNQSUMPCWUGPAZNBUOEZPNVVKEXQKBXXSVERC");

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
    msg.setTimeStamp(0.10596481112464107);
    msg.setSource(47219U);
    msg.setSourceEntity(148U);
    msg.setDestination(61821U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("OPQECSGTRALQWDZHAYOMLBMSVVWVWMHKKGKCXJHKYYVPZTBHVHIZNFZPEENUVRNKQSQROETWWYLTLQBGZLUBJROWGWGSCRLQFWMGOQBFZUJCSXRKYYXDNGREKIVOFQSNSYTDONYAIOHXIDEREWXMGLVYZPINQDIHCAD");
    msg.text.assign("YWPFYXRNMRILZLKYKJMTZNTZVPOJCIDHHLGCWIASTQVQKJIUNVZQSXUEYIZROBFFSMHEMENKJEA");

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
    msg.setTimeStamp(0.8507259191304724);
    msg.setSource(59278U);
    msg.setSourceEntity(100U);
    msg.setDestination(27052U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("IHRQRFWPUOZHYDWDWHSZZVJTTWCSVEWUYYXCJJS");
    msg.text.assign("EVCLKRRMLOZUXLDUQUECWODXEKEIHKLQLNZCIOXPAJFUMPUGWMSXTOAELIGTWJBIHQZGUPJNPBTGYUAJDKVNQVGWARBFSTOEBFSZSXMBRCWVIPSGBQSNNSBTJGER");

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
    msg.setTimeStamp(0.38943478128824804);
    msg.setSource(60842U);
    msg.setSourceEntity(219U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("XFGDTFWPDVPRVZZDURIDEXFHVEYIEZXCXDJQFIFGVBAPAIZNICTDKRPGJUWFKSHPKGBYARQCVNNNVOZTMWLOYQBYBRSHTSRPBMOBBOLYORMPJEHXUQHZNGARSCYYTQGNESXKKDAPIZQIJWSQXWGLOCEYVDJZMSDRLIUMXOYMWCUAQGWCUSEWYVHI");
    msg.text.assign("MVHXLJSJOXRXPZSFDGFKIAQVWBMDPPODBQDYRNWGMNVUXIVKLYCTBNABVSZCZOBIGQVSTWQSFRDZECGXRUALQREBFIAUIIWYCHYDWCOOVVGFBMPNAEQPSMAIGSKTXRQFHHR");

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
    msg.setTimeStamp(0.5761091896536265);
    msg.setSource(52788U);
    msg.setSourceEntity(229U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("LVDVEZJHHZHYFAXGIAEVBPBOVXQWLWSRUZTCLNDVPCMHTIZLJMWUHPAWSVNKTXKHUOBSHMZAGHEJTCTBWCWICQVBXIKNQWSQFQBBUNBPKTTOLRDRFJSGSIQZIRKTAODIZQKUYYLCHONNOYDNSR");
    msg.htime = 0.5410896507688867;
    msg.lat = 0.9496033961405601;
    msg.lon = 0.6851304927045485;
    const signed char tmp_msg_0[] = {121, -112, 45, 81, -84, 40, 71, -93, 13, -88, -87, -93, 67, 3, -55, 8, -110, 77, -49, -116, -54, 107, -97, 124, 23, 44, -21, -124, 100, -15, 49, 46, -118, -92, -74, -58, 32, 40, 102, 11, -28, 66, -111, -31, -44, 45, -32, 38, 113, 54, -10, 91, -109, -103, 58, -16, 82, -19, -97, -119, -64, 53, 78, -50, -120, 65, -103, -54, 9, 34, -115, -14, -59, -17, 58, 109, -49, 5, -107, 84, -60, -64, 71, 25, 17, 0, -123, 89, -29, 19, -124, -40, -7, -121, 64, 27, 43, -63, 124, -50, -35, -116, -43, 37, 37, -8, 103, 85, -93, 66, -50, 56, 80, -115, -2, 100, 59, -118, 77, -54, 23, -68, 26, -35, -65, -6, 53, 55, 116, -83, -23, 124, -8, -43, -45, -20, 97, -20, 19, -116, -26, -50, -125, 70, 116, 65, 112, 100, -112, -16, 26, -88, 0, -118, -36, 65, 34, 6, 80, -90, -42, 98, -83, 24, -111, 25, -78, 77, 120, -109, 109, -8, -8, -52, -34, 13, 107, 26, -70};
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
    msg.setTimeStamp(0.30190331329597764);
    msg.setSource(43832U);
    msg.setSourceEntity(153U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("VQCAMHPUKFGQEZHXBONOMTFIBTZFWNNLALZBBICCSJJZMJCSKFUUDYEYGRGVVXXJOOBDCZLYIPUJRRXFEGPMSSACTUOKHMQKHY");
    msg.htime = 0.898474737120268;
    msg.lat = 0.9000762172914032;
    msg.lon = 0.6501847139485789;
    const signed char tmp_msg_0[] = {-103, -27, 99, -6, 122, -70, 62, 99, -66, 11, 73, -120, -18, 124, -1, -84, 126, -44, 91, -108, 73, -45, 78, 93, 101, -105, -57, 85, -91, 78, -107, 50, 22, 60, 20, -20, 46, -123, -118, -56, 108, -6, 87, 123, 62, 29, -89, 88, 60, -101, 20, 49, 16, 126, 119, -58, 115, -120};
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
    msg.setTimeStamp(0.42274703424318494);
    msg.setSource(10860U);
    msg.setSourceEntity(22U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("DJWEIEGBLAFISSKSHQNUAEJBQYCHQAOQJXCHHTNRREG");
    msg.htime = 0.536950251365069;
    msg.lat = 0.06944718632670632;
    msg.lon = 0.8726926774544234;
    const signed char tmp_msg_0[] = {-40, -73, -72, 32, 59, 71, -28, 53, 44, -13, 95, 110, -87, 109, -71, 52, 86, -128, 45, -49, 93, -21, -110, -90, -115, -113, 9, 102, 5, 118, 35, -95, -43, 62, -28, -96, -17, 50, -35, 77, 125, -112, 45, 96, 80, 113, -83, -10, 57, 85, -98, -128, 25, -113, 124, -43, 120, -78, 123, 77, 17, -73, 104, -107, -14, 12, 17, -85, 41, -74, 3, -124, 36, -39, 26, 10, -98, 116, 50, -16, 85, -3, -122, 21, 86, -54, 4, 80, 65, 26, 11, -14, 14, -70, 51, 35, -75, -66, -22, 104, 5, -125, 30, -87, -68, -98, 33, -90, 76, -116, -16, -11, -110, 25, -60, -31, 68, -19, 64, 82, 51, 80, -45, -27, -44, -26, 19, -20, -71, 68, 20, 11, -98, 11, -56, 51, -123, 97, 57, -30, 17, 4, 52, 80, -6, -69, -1, 0, 67, -98, -55, 80, -64, -94, -96, 113, 99, 9, 125, 9, 32, -51, 76, -1, 125, 9, 59, -86, -64, -34, -35, 93, 80, 9, -101, -2, 17, 19, -77, -86, -33, 114, 46, 23, 21, 10, 26, 10, 110, -28, -107, 26, 4, -78, 86};
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
    msg.setTimeStamp(0.26072491666646413);
    msg.setSource(48242U);
    msg.setSourceEntity(216U);
    msg.setDestination(31926U);
    msg.setDestinationEntity(50U);
    msg.req_id = 12843U;
    msg.ttl = 6483U;
    msg.destination.assign("FTMBFWHQSEJRTLYTBNETQVHDDJZMLVSCOEVNRODUZQCXUQKUFAZKXKBCTXVYMSJKESIIFLVIIBUTSNMGMFPJWLDGUZADKDPAQNYSQ");
    const signed char tmp_msg_0[] = {-122, -98, 13, -120, 35, -16, -118, 117, 18, 122, 122, 3, -114, -124, 93, -28, 34, -58, 20, -107, -109, 120, -82, -92, -69, 16, -85, 68, -74, -85, -37, -119, 111, -120, -98, -42, 14, -89, 68, -88, 91, -102, 111, -108, 17, 26, -87, 93, 79, -6, 39, -54, -36, -51, 1, -110, -44, -11, -112, -122, -37, -64, -92, -96, 66, 15, 55, 120, -1, -94, -43, -96, 93, 60, -48, 63, -97, -82, -81, 70, -95, -42, 30, -78, 15, 50, -84, -10, 44, 110, 32, 44, 19, 71, 21, 21, 68, -85, 55, -28, -45, -35, 119, 5, -62, 64, -5, -125, 25, -9, 70, 105, -5, 54, 106, 97, 78, 56, -108, -46, 109, -66, 102, -104, -112, 126, 23, 19, -41, -45, -95, -114, -91, -88, -104, -60, -16, -58, 110, -70, -28, -78, -31, 111, 19, -126, 34, 77, 78, 52, -17, -68, 23, 38, -67, 41, -3, 41, 103, -104, -17, 109, 111, 85, -62, -76, 91, 77, 16, 8, -66, -53, -93, 12, -20, 15, 92, 69, -37, 10, 96, 24, -42, -121, -15, -13, 123, 56, 22, 44, 84, -125, 40, -117, 102, 65, 93, 15, -51, -24, -111, -113, -90, 89, -32, -21, -33, -22, -4, -104, -59, -110, 2, -58, 65, 89, -50, -11, -84, -117, 103, 123, 110, 122, 82, 98, -88, -29, 33, -119, -113, -47};
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
    msg.setTimeStamp(0.24848413208665177);
    msg.setSource(62357U);
    msg.setSourceEntity(46U);
    msg.setDestination(12135U);
    msg.setDestinationEntity(13U);
    msg.req_id = 57955U;
    msg.ttl = 24347U;
    msg.destination.assign("RBXTXFZFBKRQWURAZGCQXGYMKNTQBGPFNRUHICIWNGZAEKKTTXIMVDYNOUKTBHPTEHGMVXSIDPWOYHOZRZUGWWBQLDLMDZWSOFLGPKJZUISPXDUNSIAVXJWESOJVRSAEFNMMJFJFYVDDEBYASGEAYPHQDGEZKKWNLTZABVCROPXCUITIHKALASLUNCMGJRJOPQCTKJRVCJHTBDEWPLIHOLQ");
    const signed char tmp_msg_0[] = {-91, 51, 109, 103, -121, -19, -42, -5, 88, -98, 55, 13, -83, 47, 51};
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
    msg.setTimeStamp(0.7034673297186053);
    msg.setSource(11780U);
    msg.setSourceEntity(219U);
    msg.setDestination(54656U);
    msg.setDestinationEntity(189U);
    msg.req_id = 39688U;
    msg.ttl = 10880U;
    msg.destination.assign("PBVDXHMYUCTEWWLELENDMKPUTSMJWDCIHOBPYZWCUE");
    const signed char tmp_msg_0[] = {112, 3, 13, 18, 80, -47, 53, 120, 123, 73, -103, 93, 47, -110, 19, 94, 64, 111, 109, -61, -126, 114, -49, 113, -116, 125, 80, -56, -35, -6, -43, -69, -121, -85, 110, 109, -125, 54, 1, 102, -31, -19, 70, 31, 32, 21, -20, 113, 85};
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
    msg.setTimeStamp(0.1899908691178459);
    msg.setSource(27112U);
    msg.setSourceEntity(220U);
    msg.setDestination(48088U);
    msg.setDestinationEntity(62U);
    msg.req_id = 34142U;
    msg.status = 163U;
    msg.text.assign("ZXQFJIAJGZYYZUSEPVIFYHJKPZZBYGTBQJTHMWPCNRQPAWOJBFCRMKPKVDXJTYEJNBCUHYOFQDTLGWBQMVSLOLDKCNXENKKDRECCWJUPDMKLAABSPEWDVFVHNXNBFCOUAQKQNSI");

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
    msg.setTimeStamp(0.13835836707864713);
    msg.setSource(62635U);
    msg.setSourceEntity(60U);
    msg.setDestination(49869U);
    msg.setDestinationEntity(195U);
    msg.req_id = 42094U;
    msg.status = 42U;
    msg.text.assign("PSMKDBEFBRGJUZNDIYKPZEYIOHXWSZPCIOILYKVCAFXCZTAGXUJQRDANWLTTDXVLXTLPBAHWCTEHQKQVZMBHGAHTEWORMKFWNJVDAPUPZLULIRNRJZGCMKOMSMOVFAVNQYGCIBBUQPGYYUZQRCJMOODLEWHUEVKXCPRYTWIUBEXMJPNQS");

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
    msg.setTimeStamp(0.28909350272742496);
    msg.setSource(37159U);
    msg.setSourceEntity(184U);
    msg.setDestination(7754U);
    msg.setDestinationEntity(215U);
    msg.req_id = 49304U;
    msg.status = 131U;
    msg.text.assign("VLOYAASNUFLSSXTZNEUDDWQYSGMUZYHKIETPETGIVKQUFKGTKILVCQWOJQEMACVWNLIQJEGOAJCZDIHLIVZCHBCERXEZEKSYPYRVGNKFPSMMJBDHAHPDUYLWHYAJKKDNM");

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
    msg.setTimeStamp(0.11589223405133176);
    msg.setSource(32757U);
    msg.setSourceEntity(200U);
    msg.setDestination(53681U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("NVAUWYZPZRCANEFCYYHGCQXWTXBKFIKZQBZRIXLJCEIAYDWBZMKLVCQDKEGFLCQORPOSQMTNGCFNOFYAGDPSIABUDTFAKGVWHPYUEXUBUIIIWSWVBJUJASIOYINRCNGTRWWMROLJYRBXGHQBLVPLPSSZZMJOHORBGZKDQSXODGSHNKLNFI");
    msg.links = 1802509936U;

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
    msg.setTimeStamp(0.8796402977438197);
    msg.setSource(378U);
    msg.setSourceEntity(138U);
    msg.setDestination(10157U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("FEQLUXWKRGCOOXSJBTJYZTGJYUOSRUTGEFSARNUSDCVZWADXCMKIHGBCBMHJJAAETPYYFOJDLXYHETDNPSDXKWIDYUMOODCF");
    msg.links = 255404444U;

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
    msg.setTimeStamp(0.6643331493133049);
    msg.setSource(47489U);
    msg.setSourceEntity(183U);
    msg.setDestination(49470U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("PMZIAJLGAHFEEPFVMIYTLFRWFZJUQNDTXJBOAVIKFBSOMJAAYOEJUKHWZLYIVLEWTSAYDHBTNZWOHMHLRBKPSKPEQTVCKXIXGPRRLGWYHSRFCUQMTM");
    msg.links = 2525796115U;

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
    msg.setTimeStamp(0.25476537478012073);
    msg.setSource(51488U);
    msg.setSourceEntity(132U);
    msg.setDestination(38149U);
    msg.setDestinationEntity(156U);
    msg.groupname.assign("NVSGVTPIFWDTJQCO");
    msg.action = 104U;
    msg.grouplist.assign("FNAGCFBDXBKZOHHQNDJEXMAAFNVPCEXQVISMRAMGPCBZFFEIHXJRXTLOLFJTCZUGMUTCBPQOCHYANM");

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
    msg.setTimeStamp(0.7154597999969629);
    msg.setSource(21737U);
    msg.setSourceEntity(165U);
    msg.setDestination(45234U);
    msg.setDestinationEntity(210U);
    msg.groupname.assign("WPVUVEJSSROWCWNAWEBHPRIVGLKLJAWBUBOSRDDNDXCLQPTMBDJXKBMHJSYCG");
    msg.action = 15U;
    msg.grouplist.assign("JIWEPNMVVFBDHRRAQATFJXUUCGFBSEFKAUTNYSFBESOVNLVVWHFLWZVOFZHXYMYOQGX");

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
    msg.setTimeStamp(0.29233154436820796);
    msg.setSource(9455U);
    msg.setSourceEntity(152U);
    msg.setDestination(57648U);
    msg.setDestinationEntity(183U);
    msg.groupname.assign("GCBOWYEVMYYNTHIKMAATFQDUICKRPOLNFRQHTGYSDFH");
    msg.action = 122U;
    msg.grouplist.assign("HEBULWFTIAYWTWZCRQPHWIGLCKNRXXUBJSLOMFJZIJNJNMXIUGOVVDJVWVTEYCYUFYIRSAMMEROBTFKESYDQXHDKZZBHBPQGZ");

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
    msg.setTimeStamp(0.9769549846510567);
    msg.setSource(15845U);
    msg.setSourceEntity(93U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(168U);
    msg.value = 0.9736812745544751;
    msg.sys_src = 64350U;

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
    msg.setTimeStamp(0.5382282478228889);
    msg.setSource(28368U);
    msg.setSourceEntity(128U);
    msg.setDestination(20208U);
    msg.setDestinationEntity(165U);
    msg.value = 0.3274123839997146;
    msg.sys_src = 40226U;

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
    msg.setTimeStamp(0.8189181433118761);
    msg.setSource(36830U);
    msg.setSourceEntity(248U);
    msg.setDestination(7791U);
    msg.setDestinationEntity(3U);
    msg.value = 0.5560963277899754;
    msg.sys_src = 25046U;

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
    msg.setTimeStamp(0.78757581630468);
    msg.setSource(61247U);
    msg.setSourceEntity(87U);
    msg.setDestination(61342U);
    msg.setDestinationEntity(157U);
    msg.value = 0.3918250368755041;
    msg.units = 82U;

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
    msg.setTimeStamp(0.6322576348162005);
    msg.setSource(1361U);
    msg.setSourceEntity(207U);
    msg.setDestination(33810U);
    msg.setDestinationEntity(151U);
    msg.value = 0.657869156918335;
    msg.units = 206U;

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
    msg.setTimeStamp(0.4475782963679017);
    msg.setSource(43543U);
    msg.setSourceEntity(133U);
    msg.setDestination(52343U);
    msg.setDestinationEntity(242U);
    msg.value = 0.26066869450870445;
    msg.units = 80U;

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
    msg.setTimeStamp(0.5322479158017186);
    msg.setSource(20314U);
    msg.setSourceEntity(105U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.04895157559443064;
    msg.base_lon = 0.9790145670715164;
    msg.base_time = 0.8300597699563295;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 10571U;
    tmp_msg_0.destination = 52375U;
    tmp_msg_0.timeout = 0.9824745186018214;
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 15910U;
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
    msg.setTimeStamp(0.5014162186805935);
    msg.setSource(22067U);
    msg.setSourceEntity(85U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.9258583656888423;
    msg.base_lon = 0.2237580080612518;
    msg.base_time = 0.10443540128992024;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 5652U;
    tmp_msg_0.priority = -105;
    tmp_msg_0.x = 17357;
    tmp_msg_0.y = -4579;
    tmp_msg_0.z = -1820;
    tmp_msg_0.t = -6847;
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.29817194014863035;
    tmp_tmp_msg_0_0.lon = 0.16682787302928315;
    tmp_tmp_msg_0_0.z = 0.6399249998416999;
    tmp_tmp_msg_0_0.z_units = 174U;
    tmp_tmp_msg_0_0.radius = 0.23252772783893771;
    tmp_tmp_msg_0_0.duration = 61987U;
    tmp_tmp_msg_0_0.speed = 0.33212312409450373;
    tmp_tmp_msg_0_0.speed_units = 225U;
    tmp_tmp_msg_0_0.popup_period = 5449U;
    tmp_tmp_msg_0_0.popup_duration = 6605U;
    tmp_tmp_msg_0_0.flags = 207U;
    tmp_tmp_msg_0_0.custom.assign("OBCINOMNUQYKZABENYZEGIUKOEYS");
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
    msg.setTimeStamp(0.37658531584946464);
    msg.setSource(42503U);
    msg.setSourceEntity(86U);
    msg.setDestination(236U);
    msg.setDestinationEntity(212U);
    msg.base_lat = 0.4913588485332754;
    msg.base_lon = 0.8764266720951024;
    msg.base_time = 0.9433426210162266;

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
    msg.setTimeStamp(0.2897327551384573);
    msg.setSource(29501U);
    msg.setSourceEntity(2U);
    msg.setDestination(50864U);
    msg.setDestinationEntity(111U);
    msg.base_lat = 0.2809931366978017;
    msg.base_lon = 0.09705513413687894;
    msg.base_time = 0.5555258853318602;
    const signed char tmp_msg_0[] = {88, 126, -97, -6, 32, -41, -111, -109, 66, 117, -50, -112, -24, -81, -9, -61, -35, 41, -15, -112, -89, 22, 103, 23, 14, 89, -67, -112, -19, -118, 80, -28, 119, 53, -27, -70, -76, -35, -20, 97, -18, -74, 122, -85, -58, -11, 33, 17, -89, -109, 125, 42, 56, -114, -39, -16, -102, 70, 15, 54, -47, -64, -31, -26, 4, -8, 0, -76, 19, 69, 95, 71, 114, 88, -48, 94, -123, -33, -54, 59, 54, 44, 101, 94, 122, -119, -22, 38, -90, 126, 123, 120, -73, -52, 23, -107, -66, 10, -43, 6, -126, -36};
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
    msg.setTimeStamp(0.0016994748483977196);
    msg.setSource(51075U);
    msg.setSourceEntity(143U);
    msg.setDestination(25785U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.02321056828253476;
    msg.base_lon = 0.7878627711582338;
    msg.base_time = 0.026134560688359065;
    const signed char tmp_msg_0[] = {-12, 45, -33, 41, -73, -95, -23, 98, -85, 15, 56, -103, 73, -71, 85, -15, -97, 86, 51, -90, -102, -70, 20, 64, 42, 40, 116, 58, 86, -69, 102, -15, 100, -39, 97, 13, 33, 62, 108, -69, -18, 31, -23, -76, 65, 12, -94, -35, -31, 22, -4, 34, -124, -27, -100, -33, -110, 54, 82, 101, 96, 42, 20, 33, -2, -32, 55, 5, -42, -120, 82, -44, 69, -76, -52, -43, -26, 22, 62, -94, -60, 51, -55, 125, 56, -52, 68, -49, 58, 65, -87, 74, 62, -36, -60, -7, -126, -26, -72, 88, 60, 75, 32, 109, -32, 1, 111, 67, 0, 26, -125, -121, -5, -73, 7, -3, 59, 16, -36, -107, 36, -30, -9, -18, 90, -101, 45, -100, 80, -103, -105, 96, -22};
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
    msg.setTimeStamp(0.15577013573222964);
    msg.setSource(45543U);
    msg.setSourceEntity(56U);
    msg.setDestination(16004U);
    msg.setDestinationEntity(195U);
    msg.base_lat = 0.5772196652485124;
    msg.base_lon = 0.864555469430247;
    msg.base_time = 0.2159608138786282;
    const signed char tmp_msg_0[] = {-109, 75, -11, 61, 59, -8, -12, -98, -4, -115, 46, -41, 76, -25, 116, -74, -9, 28, -52, -54, 33, -26, -9, 104, -81, 78, -92, -102, 99, -85, -111, 21, -75, -39, 109, -30, 106, 8, -89, 82, 86, 20, -92, -48, -79, -126, -79, -12, -5, 17, 44, 122, 89, -18, 86, 20, 24, -44, -76, -3, 68, 111, 77, 59, 11, 83, 122, -55, 64, -94, 85, -57, 64, 53, -44, -62, -75, 23, -53, -54, 6, -18, -117, 41, -115, 102, 69, 32, -34, -120};
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
    msg.setTimeStamp(0.8247017613613099);
    msg.setSource(63172U);
    msg.setSourceEntity(19U);
    msg.setDestination(32569U);
    msg.setDestinationEntity(219U);
    msg.sys_id = 19067U;
    msg.priority = 18;
    msg.x = 2327;
    msg.y = -23013;
    msg.z = -2395;
    msg.t = -13842;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2620141838U;
    tmp_msg_0.value = 168U;
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
    msg.setTimeStamp(0.6369791449209804);
    msg.setSource(59063U);
    msg.setSourceEntity(41U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(244U);
    msg.sys_id = 52742U;
    msg.priority = -120;
    msg.x = 10103;
    msg.y = -30427;
    msg.z = 6006;
    msg.t = -1717;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.9420991791379818);
    msg.setSource(25395U);
    msg.setSourceEntity(27U);
    msg.setDestination(64111U);
    msg.setDestinationEntity(156U);
    msg.sys_id = 11932U;
    msg.priority = -98;
    msg.x = 24185;
    msg.y = -32728;
    msg.z = 2296;
    msg.t = 26733;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.op = 45U;
    tmp_msg_0.possimerr = 0.2998857202896915;
    tmp_msg_0.converg = 0.6145590325569403;
    tmp_msg_0.turbulence = 0.4125510914004952;
    tmp_msg_0.possimmon = 195U;
    tmp_msg_0.commmon = 45U;
    tmp_msg_0.convergmon = 33U;
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
    msg.setTimeStamp(0.5721839963623265);
    msg.setSource(2050U);
    msg.setSourceEntity(88U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(120U);
    msg.req_id = 47841U;
    msg.type = 66U;
    msg.max_size = 24838U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9841608710724001;
    tmp_msg_0.base_lon = 0.8434321211691508;
    tmp_msg_0.base_time = 0.5744243488946469;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 52046U;
    tmp_tmp_msg_0_0.priority = 9;
    tmp_tmp_msg_0_0.x = 17346;
    tmp_tmp_msg_0_0.y = -15016;
    tmp_tmp_msg_0_0.z = -8547;
    tmp_tmp_msg_0_0.t = 3336;
    IMC::UsblFixExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("GQSTPUTIURVVEBKOPGORMCLJDHKIXOMXXAPNIDLNYNFGQZRETZSQXXKGACJDWONNRCNFTBDERTIZKJJPVEYOCEHAWBNYSKEDBGEMEMXVYIMLREWACYYJDSMCKFWIDUVNBMDWZQBLYFOUSPAKHXLQPBELXUKSWGCQZHDHRWFHJJRHZZBGGWIBXOSUDMLPVGUZNSKHFSBLWLRUIIHYFZQCFVYNWRAPPTHVTMOTQCQYAJTXOJCVVAFFKJUOSPUG");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.5767547378227216;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.06448628944285739;
    tmp_tmp_tmp_msg_0_0_0.z_units = 236U;
    tmp_tmp_tmp_msg_0_0_0.z = 0.15084031749087168;
    tmp_tmp_tmp_msg_0_0_0.accuracy = 0.9090327864542089;
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
    msg.setTimeStamp(0.032213425101009774);
    msg.setSource(32295U);
    msg.setSourceEntity(134U);
    msg.setDestination(20388U);
    msg.setDestinationEntity(10U);
    msg.req_id = 37488U;
    msg.type = 201U;
    msg.max_size = 6340U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8160204883008126;
    tmp_msg_0.base_lon = 0.6134955770431569;
    tmp_msg_0.base_time = 0.2961831018434763;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 45121U;
    tmp_tmp_msg_0_0.destination = 4177U;
    tmp_tmp_msg_0_0.timeout = 0.9444199969068732;
    IMC::Phycoerythrin tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.1412218572684023;
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
    msg.setTimeStamp(0.3983575399589031);
    msg.setSource(10961U);
    msg.setSourceEntity(87U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(185U);
    msg.req_id = 54534U;
    msg.type = 104U;
    msg.max_size = 7461U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0006157397222378291;
    tmp_msg_0.base_lon = 0.5919516797134617;
    tmp_msg_0.base_time = 0.6972899571910887;
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
    msg.setTimeStamp(0.7704937877394413);
    msg.setSource(11422U);
    msg.setSourceEntity(156U);
    msg.setDestination(47579U);
    msg.setDestinationEntity(24U);
    msg.original_source = 41155U;
    msg.destination = 13965U;
    msg.timeout = 0.882587653797425;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 5655U;
    tmp_msg_0.lat = 0.5108635601072644;
    tmp_msg_0.lon = 0.9813918196968321;
    tmp_msg_0.z = 0.3332312565280535;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.1130360864136779;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.custom.assign("BRYNQHHHBTUEURDWXWMODVWDWPMVAAMPPTPNDCJYHMAOGQIILEONKNQILQHGDCQKLXZEJSSRFSBJKNPEYBEHGEDYTLUCFQMFJQIILA");
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
    msg.setTimeStamp(0.3080604404221);
    msg.setSource(35349U);
    msg.setSourceEntity(154U);
    msg.setDestination(29514U);
    msg.setDestinationEntity(63U);
    msg.original_source = 2154U;
    msg.destination = 46253U;
    msg.timeout = 0.5552043081422248;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.2453711501629201);
    msg.setSource(63034U);
    msg.setSourceEntity(209U);
    msg.setDestination(160U);
    msg.setDestinationEntity(29U);
    msg.original_source = 34861U;
    msg.destination = 57715U;
    msg.timeout = 0.2765680983715896;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 30717U;
    tmp_msg_0.lat = 0.09093476030843628;
    tmp_msg_0.lon = 0.02072567251060975;
    tmp_msg_0.z = 0.4520706670459581;
    tmp_msg_0.z_units = 102U;
    tmp_msg_0.speed = 0.3454967625868339;
    tmp_msg_0.speed_units = 102U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9828506430197643;
    tmp_tmp_msg_0_0.y = 0.26135918665919877;
    tmp_tmp_msg_0_0.z = 0.2626036404766754;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("GMJOCOFXHVDBFTQTXKDUFJWLBXVSQAGGXDITPXIHMUZKPVTQOSQGANUSHODNEVRLLLJEWBQWIBSLQDZKYRKNBLEALYRCLOBHHZTABSKRGJFXIACQFEXRZEWL");
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
    msg.setTimeStamp(0.6842762543394);
    msg.setSource(34631U);
    msg.setSourceEntity(69U);
    msg.setDestination(41247U);
    msg.setDestinationEntity(121U);
    msg.type = 158U;
    msg.comm_interface = 16681U;
    msg.model = 46571U;
    msg.list.assign("YRDJGLIHERGILXLSKKGDAFXNFKWOVCSYDVISGQMNEZRBUPZHPQUYWUOFZJMENGVPIBXEKEINYCOWGATRJVXVLIOPKUUWXQXSCYKWLUGMAWANSEXCKXCRMQJZDFYZTLJQCTDYBQHZATEQOSBOBDDAWMDKUGHNBWKCADHQBXJACYRYHCPHLU");

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
    msg.setTimeStamp(0.06966210277007767);
    msg.setSource(31320U);
    msg.setSourceEntity(14U);
    msg.setDestination(33744U);
    msg.setDestinationEntity(82U);
    msg.type = 225U;
    msg.comm_interface = 238U;
    msg.model = 33922U;
    msg.list.assign("JBUFDEUMYETXOMCSIQCZJMNWHGERDTMDODZFEZJGPRCBZFZOQGGOAENRAEHPUWUIAFBKVSYVVTCVMGHTPHQTGJEPMWGXBEP");

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
    msg.setTimeStamp(0.9079858939651708);
    msg.setSource(41525U);
    msg.setSourceEntity(41U);
    msg.setDestination(31729U);
    msg.setDestinationEntity(184U);
    msg.type = 151U;
    msg.comm_interface = 12259U;
    msg.model = 38715U;
    msg.list.assign("LEKPGATMJQYZOLXGGDXWEWHNCTEFDXFNBZHUIIZHXYTMWFYKCNSIMPFZSSPXUQ");

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
    msg.setTimeStamp(0.5951060936616193);
    msg.setSource(25229U);
    msg.setSourceEntity(202U);
    msg.setDestination(30981U);
    msg.setDestinationEntity(140U);
    msg.type = 132U;
    msg.req_id = 2951978002U;
    msg.ttl = 45521U;
    msg.code = 193U;
    msg.destination.assign("WUCPQPSBRXGAHOBFRVLEZHIOWOAJGFZBGYKDWTXJMLXNEBQMLHASZDRSBVLNKJGQTBITEMHWMUZYETBQSMQJGNRZPAMGYYGJXQEWRRRJUCQWQUPITFKNRIPEPNWOLVVVPCOEDLFCWUUFAIRCKZVZIMRMTGLFUDHAJOXVPWAKFAFQOXFLSEHKDUEPCHGKIQNXJDIHOCUYCDBLBTIPCATSZKBDNCDXWLUD");
    msg.source.assign("PAORJAUWTSTCDMGOSPGNYETKODJAQQXJOWADENSCJRAVCLVWJQIUOFBNGEBIYLQXYRAKEBZKIEUFFWWWMHGRFJWMBSCMLRDYORGBGGIPUMBRZHOXHWPAKQVLTQKZRS");
    msg.acknowledge = 130U;
    msg.status = 230U;
    const signed char tmp_msg_0[] = {34, -71, -51, 123, -47, -31, -94, -32, -56, 49, -77, 96, -81, 28, 2, -24, 83, -34, 8, 84, 37, -108, 19, 39, 112, -80, -61, -18, 10, 4, -83, -13, 83, -73, -96, 100, -17, -78, -44, -122, -77, -82, 90, -43, -90, -12, -82, -42, -81, -97, 102, -116, -116, 87, 8, -113, 0, 107, 28, 105, -92, -7, -110, 120, -42, 73, -6, -79, 37, 77, -83, 17, -84, 8, 6, 42, 0, -68, 81, 59, 88, 67, -12, -49, -51, -10, -114, -59, -14, 17, 23, 109, -15, 79, -69, 70, 9, -118, -121, -5, 54, 83, -4, 5, -41, -6, 105, 86, -46, -21, -51, 48, -41, -19, -110, 91, 116, -76, 82, 17, -62, -88, -18, 77, -124, 88};
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
    msg.setTimeStamp(0.14716692237570783);
    msg.setSource(10860U);
    msg.setSourceEntity(114U);
    msg.setDestination(53849U);
    msg.setDestinationEntity(198U);
    msg.type = 230U;
    msg.req_id = 1404089634U;
    msg.ttl = 39637U;
    msg.code = 169U;
    msg.destination.assign("KBDZADJRSHVIRAADXJEVYCFLMMWIQYGPQTYQIXPACZUOESKBWXUQJEAOCERKFTBPFBUAMXOUONQGCGYSFSHBVPYQMIIRGZUURPEWBXZKIJWVCOFFQVBWLMMTYWTRRZUSXWJOQGTVZCGXHSMPKNDGSKVQFEHEOZNXEHILY");
    msg.source.assign("PTUJPJTDTQAIZDDQJBUKZYNIYJMEPIMTONKCNBJNIROEMMEEARWXQHQVYWMWXDINARKHRATVFQRAEMAQSTRFBILGBGEXSICPVUHPCMFSGIWJYYPPGXCNXIKSVAURKYGLAZNUOLWDFTWOYFHYBDVVQENABHFNFOGF");
    msg.acknowledge = 171U;
    msg.status = 207U;
    const signed char tmp_msg_0[] = {78, -36, 72, 14, -29, 67, 68, 98, -117, 103, -94, 65, 77, 42, 101, -105, -22, -57, 6, 105, -111, -66, -114, 71, -12, -94, -26, -117, -86, -16, 99, -71, -23, 116, 5, -4, -61, -67, 7, 74, 31, 60, 21, 96, -9, -9, 98, 39, 59, 79, -104, 75, 28, 95, 104, 108, -108, 101, 82, -118, -24, -2, -115, 24, -36, -55, 19, -25, -36, 90, -8, -79, -1, 27, -104, 67, -39, -64, -13, -73, 42, -54, 71, 20, -74, -72, 114, 55, -36, 15, -48, -77, -61, -84, 10, 15, 86, -92, -24, -90, -80, 60, -128, -105, 125, -128, -71, 19, -41, 26, 24, 91, 58, -99, 0, -1, -53, 4, 42, -127, 85, 31, -81, 65, 56, 83, 8, -10, -40, -73, 6, -60, -4, 21, -60, 123, 13, 108, 96};
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
    msg.setTimeStamp(0.1589196389823193);
    msg.setSource(35623U);
    msg.setSourceEntity(205U);
    msg.setDestination(58103U);
    msg.setDestinationEntity(164U);
    msg.type = 6U;
    msg.req_id = 2537977678U;
    msg.ttl = 26894U;
    msg.code = 7U;
    msg.destination.assign("TQNYTQKZUBQFBQFGQYDIDMEIBPYZCHGLYJPELUACTAPGNQEELTDOMXVMQPOAGZVSCJKNMYAEEYOELLMJPFCXKYCUPGZWDNTHJBVRIGFFLPVKUTSNRUVSVVAPWCLSANHROJELZDWXSQITRFWEMFRDKZDKBVMGV");
    msg.source.assign("BOGURUULTJACVNZJSEZTPSMFNGEMUBNOTQMVNZDWWDYCFQMDDNEUMPPGJW");
    msg.acknowledge = 181U;
    msg.status = 180U;
    const signed char tmp_msg_0[] = {121, -117, 84, -94, -118, -72, 37, 109, 124, 49, -95, 50, -103, 50, -96, 50, 3, 118, -118, 25, -64, -29, -120, -88, 29, 35, 32, -112, -37, 107, -50, -84, 18, -8, 74, -32, -64, -120, 21, -5, 16, -27, 101, -54, -96, -9, -96, -11, -127, 101, -125, 21, -34, 9, 35, -30, 97, -128, -102, -13, -62, 87, -126, -79, 0, 64, -63, 89, 106, -16, 72, -29, 110, -12, -85, -108, -21, -7, 102, 47, -74, -30, -40, -74, -53, 26, 119, 62, -35, 113, -44, 117, -16, 85, -89, -21, -76, -15, -21, 0, -30, 95, 66, -90, 40, 4, 123, 119, -1, 46, -46, 45, -86, -52, -97, 54, 1, -27, 20, -110, 91, -24, 16, 50, 72, -79, 41, -92, -106, -92, 18, -80, 118, 96, 67, 96, 41, 10};
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
    msg.setTimeStamp(0.9451674329781442);
    msg.setSource(40689U);
    msg.setSourceEntity(6U);
    msg.setDestination(6079U);
    msg.setDestinationEntity(17U);
    msg.id = 237U;
    msg.range = 0.9945583842953432;

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
    msg.setTimeStamp(0.2993037877303655);
    msg.setSource(22381U);
    msg.setSourceEntity(189U);
    msg.setDestination(65059U);
    msg.setDestinationEntity(163U);
    msg.id = 230U;
    msg.range = 0.5363800811019853;

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
    msg.setTimeStamp(0.9904687881616296);
    msg.setSource(10068U);
    msg.setSourceEntity(63U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(241U);
    msg.id = 249U;
    msg.range = 0.5479803152563966;

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
    msg.setTimeStamp(0.9840689758343691);
    msg.setSource(46407U);
    msg.setSourceEntity(182U);
    msg.setDestination(40088U);
    msg.setDestinationEntity(99U);
    msg.beacon.assign("SVEJZXHISOAXBNYRZROMPDPASGURDSNHVQVLKJFYVVNQINHBTHMLVHGWXYOUGRYEBJRXXNHQFWKTWYRAQBDJNFJOFSBIIMKOOPGCPJNEFBWDTJIIAOGLKHLMNJKVASVUWZTAKGBHQLYPXEUXQMQMLMJKUQXYIZNODFOCGRTCXYZDBYNMCEVBLCKETWRCWUADZPGUXIGZTVCLJEPARDULSFPPYHSUK");
    msg.lat = 0.932046264854291;
    msg.lon = 0.15463824341517185;
    msg.depth = 0.3493835152160253;
    msg.query_channel = 244U;
    msg.reply_channel = 156U;
    msg.transponder_delay = 203U;

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
    msg.setTimeStamp(0.6136598925795681);
    msg.setSource(46753U);
    msg.setSourceEntity(6U);
    msg.setDestination(7427U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("UJLPZXWQREDVVXNOJAIRBPSTHCXGZXYEAUKQRCWFQYKWIORGWHQWDSZNOAPUGKQVRPSMUBJQLVJZETJYUANORVVCDNSZHJJLXVGOHYTRVHWLJCZWPFFTANOPDZBRERXOBUITUGLMVFFIACTBNMLHMNFSUGHEBBQIFYCQDEBXBQZGOINKMHPLARAYMZAKDJKGDIFXXIGEZSGSEWMKCKIDPLSMCHTWNXEHUFVYNSJFYCBTLYQ");
    msg.lat = 0.5960723808301798;
    msg.lon = 0.17812552599016607;
    msg.depth = 0.3965120109369863;
    msg.query_channel = 172U;
    msg.reply_channel = 144U;
    msg.transponder_delay = 206U;

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
    msg.setTimeStamp(0.6196530167760507);
    msg.setSource(9703U);
    msg.setSourceEntity(66U);
    msg.setDestination(51607U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("UCVSQNXXVMUPZYVDAZXMAFCIMZNFJIDEJETAFVIJHGLTZOJQZJTEKYGFPEOYQERJYVOCMBGWVJWCDGRWKWDRXHGTLWLIIIYUOSITHEXQBTSDVRYBMJNDVZCZMQIPKUILSALAJFRMZXDNOQNKIUMSOTHCUYFEMXCOLHKPXAPAPSUPGKABQEQWBKSYFNZLWPEYWSRRHJHGHDTNAFOHLKGNO");
    msg.lat = 0.7927896534559861;
    msg.lon = 0.35518086145696415;
    msg.depth = 0.3360398995165452;
    msg.query_channel = 5U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.4917255647245815);
    msg.setSource(43784U);
    msg.setSourceEntity(138U);
    msg.setDestination(11638U);
    msg.setDestinationEntity(167U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.44514675299133954);
    msg.setSource(8769U);
    msg.setSourceEntity(56U);
    msg.setDestination(27499U);
    msg.setDestinationEntity(225U);
    msg.op = 166U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YTVKNUFRDGZWYWXPFMNJIBLHBBDKCASLVXQPYAPWAKVPZJAJWXNYNHNFJWWBRXAMMGYJGLHFVKCSZXRESMASDZLCUBZPGCGUIHVCFXUOHZKCHGXCETEOQZVSMNTMBYFQLPITQJRHWFATLMPCDOIVKYTLCSBIRZFIMYRLGSTQRUHEFGVWDBUFOLPEPUQKQQJICHTOMSAAHNZUEXKGJBISDNRAOEKDT");
    tmp_msg_0.lat = 0.7039898347170495;
    tmp_msg_0.lon = 0.6349715450155441;
    tmp_msg_0.depth = 0.3506963959056266;
    tmp_msg_0.query_channel = 238U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 254U;
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
    msg.setTimeStamp(0.4372922813790593);
    msg.setSource(23159U);
    msg.setSourceEntity(142U);
    msg.setDestination(64417U);
    msg.setDestinationEntity(190U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.4260552924026565);
    msg.setSource(46945U);
    msg.setSourceEntity(152U);
    msg.setDestination(13478U);
    msg.setDestinationEntity(153U);
    IMC::Displacement tmp_msg_0;
    tmp_msg_0.time = 0.8886299154699333;
    tmp_msg_0.x = 0.6079742370295599;
    tmp_msg_0.y = 0.707820437349423;
    tmp_msg_0.z = 0.2852508051000855;
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
    msg.setTimeStamp(0.4803737552985158);
    msg.setSource(54376U);
    msg.setSourceEntity(14U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(187U);
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("EODWBWQJRKQOUFXGGKFYYUQAWLMEPBAHJKGKTZWZFXBDSYLCADXFMIRVDHESTTJHFONFPZBVBLTJNZHSIKGZBPHCLOKOXZVJTDCYFHCJUMEGQENGKDBRIBDRTGIMRHAUOAHAWIPIQNTUQROXLXMCNRUCRMEEUUVNYPALKEBGVQWLPSDKJ");
    tmp_msg_0.type = 48U;
    tmp_msg_0.properties = 14U;
    tmp_msg_0.durations.assign("JPMLJYXZRVQFPOBG");
    tmp_msg_0.distances.assign("UHFNEMZFLGHXMFNNMMZDQIRVDQIKPICTVEMQMWWTPUJDFGEYILYDHQGDWENRHJTXTJCNHNGAKJEGSZTTSERRVCHTNKVIHDJUEFBIHZROFNIDOLBDBOVYBLXTGALEWFCMBRGXMZYPELCWGHXSUWSWZBVJDKZCQLNKRPOSOA");
    tmp_msg_0.actions.assign("QZBPVJWZUMJCFNUEQIYRFLVPASDSCWGHNLLKTLMMABTWOPGXNOQRZJOCXNBKECDGRLSFMHZDCWYXYARTVAFTDRYJJLEUZQMKWIAVSSFIQGVUJTLPCQJKMZXKHUBKNNQOFISJVOFOPVKKAXOHWEYCNAFFBIYEWBWXJVGBMYMHBRREPGHINMSTLXIZUIBHMPYSEUGUPVGEUGZ");
    tmp_msg_0.fuel.assign("WQPIDFRGSWBOWFBWAEYUDNXYODFPVBOMYLECYDCTFOFAARITWCYKYNJUJDMKMHVLWHOIMVMCIETTFQRRCZQXNGLXGNBQFBSDLCEWJXZRXYESCROVIQPCYUBRZPNSBTGXEMRPJWKSVPTPQGS");
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
    msg.setTimeStamp(0.2151140525754761);
    msg.setSource(12671U);
    msg.setSourceEntity(116U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(225U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 237U;
    tmp_msg_0.op = 130U;
    tmp_msg_0.request_id = 25675U;
    tmp_msg_0.plan_id.assign("LISBDNEMHWVDAJDKKFGZFUTEKPFKCBBDOCJJBNGUKWCXZGJOUGKQVXILXYAWAENKMQTYEEGWYRSXRJPREQQCLPDOBDTALBDSEGSCSIOTVOXCWWOEOHACQKTUSPDYMUPMQMFCTULHVVIZZRFGNUIGUPEVKROVCKNMSIHIATRFWZYFBNYYNQNIHFAQNWGVRHLYPBTOLRHVSILMXQYJEZQHTDRLTUJWAUHFP");
    IMC::GetImageCoords tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.camid = 131U;
    tmp_tmp_msg_0_0.x = 43043U;
    tmp_tmp_msg_0_0.y = 47243U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("BQSBEXUTVMUJFONHFZJMWAESEDLXVIYIELYOPKXIVPKAURJAIVGGWMUDNGWMTWSZRSYK");
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
    msg.setTimeStamp(0.11558823308642352);
    msg.setSource(50849U);
    msg.setSourceEntity(121U);
    msg.setDestination(57914U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.819170140047207;
    msg.lon = 0.1810363501418586;
    msg.depth = 0.4619154840480557;
    msg.sentence.assign("MSDFLIUPFUWOLIGBDEKWOUAFOOJXHKMGNQSVLHPNRYQVCXXFNAUXFMZMYVVKNTTSIZWRCNQSXDDZRJTBIADLGAWYDYXQGEHEOKOGZLQIUEJVQCCHVCYZSCOPIEJEZYWDLAJTMLHLUIBLGIAVDKTNGFMFVBRJAKNZWBUQUEBNITCTVCOOMRMFSICPBVXQKYPEAPGTTPKBPJBKBH");
    msg.txtime = 0.14908878906366485;
    msg.modem_type.assign("FXTMDDHXPJXVQVWLLKWLJVHXMQGZBBERFITTRMECWOFVPPYKOMGAVCCNYQZHNHPPBGYISXWONMDHJFHEZZSYUTXAKSDFGEAMRAJLFZWIWNTMHDACNJJZCBOFQUUEJLGDUIJKRCYBRI");
    msg.sys_src.assign("ILDAWBJAPQZTFFRUQMQGWQBNCHLHJIFUHRJGOSDZMNUEYTQXFCRDOKZVYFTQUAXBGJWXJBBFHSOZGDWQMBMAVNPGMVHJGPSBUHFVVDTMIENHSYRZPZIKWPKXRBODCZLERKJLRYVSHXXMYSRRLXRVXOLXNNUIVGPNEHDHGCOAKKITZKDWCELYTJKPSVVATDKEAGYMFPLGYIBTEESPQEUWSXDYT");
    msg.seq = 34414U;
    msg.sys_dst.assign("RMRRJUHXEPCHHKTKOEVUQ");
    msg.flags = 97U;
    const signed char tmp_msg_0[] = {-86, 61, -70, 82, -20, -81, -30, -100, -95, 75, -126, -79, -123, -102, -112, 5, 112, -122, 124, 79, -71, -75, -54, 86, 109, -85, 44, 17, -121, 35, 82, -9, -23, -81, 14, -40, -57, -40, 124, 126, 52, -1, 71, 93, 39, 62, -86, -21, 79, -49, -126, -32, -4, -59, 12, 63, 52, -96, 42, -87, -85, 14, 9, -79, 60, -79, 111, -49, -96, -14, 30, 77, -69, 122, -2, 8, 77, 116, -105, -25, 118, 26, -92, 7, -41, -86, -36, 17, 85, 79, -11, 31, -60, 102, -110, 44, -102, -50, -109, -113, 81, -69, -66, -74, 69, 23, 97, -35, -96, 99, -46, 101, -46, -53, -76, -110, -101, -23, 20, 81, -110, 72, 104, 16, -125, -56, 22, 51, 110, 58, -82, -106, -111, -6, 26, -45, -69, -98, -126, -93, 52, 69, -106, 118, -40, 96, -47, -49, -79, 65, -56, 98, -71, -109, 96, 55, 117, 22, -36, 120, -79, -17, 93, -19, 99, 57, -92, 14, 1, -118, -56, 4, -55, -122, -43, 123, 61, 81, 111, -90, -81, 65, 68, 66, 15, 26, 117, -55, 7, -50, 51, 77, -91, 5, -114, -90, -10, -20, -18, -23, 41, 86, -6, -113, 31, -23, 70, 116, -78, -109, 73, 124, -23, -35, 30, -77, 98, -105, 55, 49, -102, -109, 79, -128, 22, -111, -54, 35, 81, 87, 17, -87, 62, 99, 113, -56, -70, 1, -99, 112, -11, 116, -83};
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
    msg.setTimeStamp(0.4953556848813184);
    msg.setSource(11848U);
    msg.setSourceEntity(62U);
    msg.setDestination(46561U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.3723636825939064;
    msg.lon = 0.4027442107574123;
    msg.depth = 0.018227781030722756;
    msg.sentence.assign("VZJFFKNJWVYRNBZGQTUAXASPQIFSQYBJDXHAMZEEYDDWKDZZRCCCLMQOYCXSBPOZTSPMPEUJPATJLKJHYUTXHMYHGIVLWGGOXLJDEPIWOGWMHIAHDNETUYDQMKLLQCDTHUXKOQBWPSZVTKXRCMSNRNNIDRNSGEBUBXRVFFCKWUUOMZFVCEXINTAAXGEHOGPLYLZKLII");
    msg.txtime = 0.8324174545683332;
    msg.modem_type.assign("BEJZPKCGOSNRVYSBIEAMFNVHSSVBTLDMWJXZXRXPEIGTAOUFHKFTLXCGZONITTMMQIGYWOHIVVQYTBCPBUWJWPTOARDOZTXLQFKQWURULNSOBXSOEBDAPXQAHEJKUJPHBGFDHNBIZGHQRTXLRARAODLYIJCPKYMWYLDFSDLUJXQPZ");
    msg.sys_src.assign("DXPBGPHDXHVTWFGQWSYHJEMCYKIJTVCPAJAUYWZNQSYSDHVIALMKNUKFBNSOZBBYSXGLGUYPEXDMTZYWVVCJEQIMKYYHBOREDLOXMRZJCQGZPNJFULVOETTOTRMRBVOXSBRIKNKGNNIFSCGCWQUFWZTITKVZLIRBJEKNQKOZOXLURXGAHSUAJFDFEHCBPNOFVWELMJAULMLW");
    msg.seq = 33549U;
    msg.sys_dst.assign("XCWTZRANKFXZKSLDWJSXRUUJMSEZLBWQSKBLJEIXNDKUEBCVTZNUDYQZWIAJXSSPAVGLIMUBOQDKNRYAPCGRIGCAVOEWJQDJAXNZANLYPCHTIFYVNYSUTZIMNPEIKIBVEWVOISRYLJCQFXLDMZOQYCCYXQJGTVBTHXBTHPP");
    msg.flags = 109U;
    const signed char tmp_msg_0[] = {120, 96, -97, -63, 61, -12, 81, 95, 126, 48, -51, 33, 55, -58, 56, -52, 101, 14, -105, -110, -79, -28, 102, -22, -2, 114, 126, 14, 57, -76, 112, -73, -57, -45, 110, 42, -25, -3, -78, -100, -80, 71, -50, 101, -80, -85, 77, 8, -31, -28};
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
    msg.setTimeStamp(0.6096163794129424);
    msg.setSource(23984U);
    msg.setSourceEntity(225U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.06093316249162051;
    msg.lon = 0.18531050516256353;
    msg.depth = 0.8739265050976365;
    msg.sentence.assign("BMPUDLLHVYMBJPHJGBRLOOPGZEJZROOHQXGNWLNRCMEBZRFGGYLYVKXSQVYPHAAGTSZFWWLMKXJMSDJELQUCKRDUDZZDAJMJVAXUEJAFZNYGHNDENXUOPXKBVISCWOMRVBFOXVSQNZOWDAHDNUFARPFCEITLUDCECAHCZTAZNEWCFOQWEPMMVWUSFXIVGKYCTNKXLIYIHYHXTYBKFISVTIQYRRGBTMPPAIJWSWJQSBSTGUIUDKEIKONKTL");
    msg.txtime = 0.4812585681540543;
    msg.modem_type.assign("MCGQIFYQPVDAOCOTDWHYXZWUWQIUQNRWNRPFMALOVILBRRSMFYOJESWUBSAMKMKZOBPPQOJILLOBXUTYJGXCHYXPZCSREMUJRKQNCHDYMKVGIVGTWHKYLLCOMWEJCJAENGAXJXNYRWVTAEVUFIZNXJDAFNETAHGNKXYVHDFZLPEBSTMPPVLOHZTGWZ");
    msg.sys_src.assign("CTCLQCAIZOCBDFWNJLPURWQREZPITYGFVSMXQNIFLXWTBAVZKPKNZYOPTEJCWUHNRLXBBJUAKSODQHFDRVSFOVQMDAKJBXJTPZGXDDGJGROOVQWZXFE");
    msg.seq = 20169U;
    msg.sys_dst.assign("BXFLLATQCHWKWMQUSNNKNEETCSWLEUUXAQRBGANZHHTSSFUKOVUAILMFPSCBPYPWRG");
    msg.flags = 101U;
    const signed char tmp_msg_0[] = {-52, 7, 112, 52, -42, -34, 43, -45, 14, -65, 98, -6, 114, -48, -111, 85, -37, 59, 124, 88, -67, -48, -117, -107, -33, 5, -11, 111, -41, -41, 27, -25, 90, 108, 34, 0, -118, -70, -104, -75, 63, 123, -93, 114, 84, -72, 61, -6, -45, 70, -115, 114, -83, -27, 65, 115, 54, -51, -91, -31, -80, 113, 86, -46, 69, 100, -14, 46, 88, 77};
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
    msg.setTimeStamp(0.23172348412622057);
    msg.setSource(34678U);
    msg.setSourceEntity(100U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(134U);
    msg.op = 115U;
    msg.system.assign("EFIWMZTELIFVWYRZBMOKKDTTSDSPMFQXTZCQMDCKZESOZLUBKEZYLQITMTBCMTJSCLQQRHJOXGVUHRVFWDGDBOUFQLYQNTDUABUGURCSPVPXXMCIEJPAWNHBXAYYHIORSGOPGCKURYHLQJGJNZHRAAUMBIKLDCBAOXBSACWGIVWCYKIDPWRSJZPANLW");
    msg.range = 0.22125528941449846;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("AHIZYLRUHPHFBLUXRYNVQRJSHEPWYZIALFXDBKVGLZRVRIXBEBQHNBOUBSMIYTCUDILSIZVYBKKHQMUKXUMUKNIEKFCGRLSEFMANOQUOUCTPDCPXNPIJYCWESWDWYFPDR");
    tmp_msg_0.max_speed = 0.7755964893179419;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.lat = 0.5103561446679706;
    tmp_msg_0.lon = 0.07243749190144777;
    tmp_msg_0.z = 0.6147626957613633;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.custom.assign("NDNULGIBCZZXXTBTZGLSCRSCTCZSJAGCPAXICLYAMJQAVVOPVUNIMAKPXNMUNFJXWTLSTYFQVDIUGTCEDKCXURJWEOYUIKXEKHHGRDQSCHQJOYNKEENOXQSEBEKYKUMWFPVUTPLHHWLLBYRQWJZINXIYJHDMAPMSOFZWINVAGOBERFWSYTAVHVRUAVDLPHFWFMQGRGMQBDILKKUCSGNTJPTWP");
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
    msg.setTimeStamp(0.7298463223938657);
    msg.setSource(58489U);
    msg.setSourceEntity(160U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(139U);
    msg.op = 94U;
    msg.system.assign("YFVPARIAPZTLDQPWXPRCVVFJJLIYHDPUZQUIRAVJAFNALELBSNRZRNCTSIEQDHQJXRSPXIKVYVVFQJWOGGYDQTJMFJDUGLZEAGJVFEVNLEXZOZCSYCCLRONXBKLWSMEEHXYAUCHGDWUUUPBZTZKZMYMFHFBJSCREORHSBWKBRTGQMIBKWPBSDDMSKNPQUHFYTKBQTNDACZXLMEQXEIGMOTOIHWWM");
    msg.range = 0.8043311033989168;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.45640393844079596);
    msg.setSource(32140U);
    msg.setSourceEntity(11U);
    msg.setDestination(30944U);
    msg.setDestinationEntity(227U);
    msg.op = 37U;
    msg.system.assign("CAZIBBMVVHSSAGLSRWMDHXUMORKUYQSREHIDVIOBDVUJLP");
    msg.range = 0.6594464212012476;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7743435668878423;
    tmp_msg_0.y = 0.6680917385187312;
    tmp_msg_0.z = 0.3717944240689435;
    tmp_msg_0.phi = 0.6632590858336718;
    tmp_msg_0.theta = 0.810122801739263;
    tmp_msg_0.psi = 0.8535339079122493;
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
    msg.setTimeStamp(0.5771308334167269);
    msg.setSource(47273U);
    msg.setSourceEntity(165U);
    msg.setDestination(53230U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.9278117186848012);
    msg.setSource(38665U);
    msg.setSourceEntity(72U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.2072369258709017);
    msg.setSource(26350U);
    msg.setSourceEntity(0U);
    msg.setDestination(20568U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.6760779686338205);
    msg.setSource(32496U);
    msg.setSourceEntity(3U);
    msg.setDestination(3828U);
    msg.setDestinationEntity(1U);
    msg.list.assign("IBZBSKFAVWMNDIPMMLKTOVLZYYKEXGZVRCXKBZRCUZOAXUPEUOIXQYQGONLLEZULETZXFIWWMIKPKILWAOJZUBBLQXDFCVFLCMAYSBBSJAJFPAMSIJZJRAVGUVNUUJHCRHVWXKSINEGNNQKDPCLFBPWTCBIWHKHHDUYTTQSRGIBGANETOQTEJRRXMPHUHLGSSTEXHJYOQFQRTH");

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
    msg.setTimeStamp(0.09539961965292165);
    msg.setSource(33551U);
    msg.setSourceEntity(2U);
    msg.setDestination(10686U);
    msg.setDestinationEntity(211U);
    msg.list.assign("JZYWBEOLZMGIYPIGOLAIKXUPTVCHHHZDFSHVVRV");

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
    msg.setTimeStamp(0.7181344687298742);
    msg.setSource(41606U);
    msg.setSourceEntity(70U);
    msg.setDestination(31371U);
    msg.setDestinationEntity(123U);
    msg.list.assign("EHQWDKICGZPFHTKIJEEUPLFUZCNOWZSLCPODSQOWWFNDKMYKINIRTQGBILPNNFYEBZAAYLFGSEDCMWRXVEJXZAVP");

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
    msg.setTimeStamp(0.19173139107719794);
    msg.setSource(20642U);
    msg.setSourceEntity(118U);
    msg.setDestination(2115U);
    msg.setDestinationEntity(170U);
    msg.peer.assign("MOPYLESZPZYIKZWOFIEPSLGHUNHJCZJBRRQQSVTWETWEFBDTHOADZJOFNEESWYNLRCHNIOIYQHCLLEVEAFISNOOPSMBBLMBBFUSXQEDAGNEPYUFCUGDHZZMCUXDIYUHKJXZGSMKHIUFKDMKCNAVXHQVWJCCGXNKDTIIYFOSWLS");
    msg.rssi = 0.3124934050738041;
    msg.integrity = 30002U;

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
    msg.setTimeStamp(0.7437048031036448);
    msg.setSource(58405U);
    msg.setSourceEntity(42U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(190U);
    msg.peer.assign("VMBJRHMBSVPCP");
    msg.rssi = 0.852341684607984;
    msg.integrity = 32281U;

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
    msg.setTimeStamp(0.4058311651020202);
    msg.setSource(11200U);
    msg.setSourceEntity(192U);
    msg.setDestination(11534U);
    msg.setDestinationEntity(133U);
    msg.peer.assign("SLBUOAMDJNXVYLQUBUCFZLZDKDPTLCPSGLXBRKBXUGQYHOJFHBPKIVSFDMXUPMHMKGSAOGNFPTGWMRWUGXKJYQXMREZSCYPVYUEWHHKNNTPZGLTNXDPZBUFTRBWSGOAOITVMFSKORSUNVCNIMRNDINOIKLLVQBSTKXVZJQQJMWVXAIUSWPLHWYBRAR");
    msg.rssi = 0.6371875726372466;
    msg.integrity = 46671U;

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
    msg.setTimeStamp(0.25535943933741123);
    msg.setSource(55405U);
    msg.setSourceEntity(118U);
    msg.setDestination(61634U);
    msg.setDestinationEntity(253U);
    msg.req_id = 40846U;
    msg.destination.assign("EKGYBOIUROZBLWTGVLZGCXVWGMX");
    msg.timeout = 0.5424974613528861;
    msg.range = 0.4666103309787556;
    msg.type = 151U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 25U;
    tmp_msg_0.htime = 0.096391342379756;
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
    msg.setTimeStamp(0.6322061086045513);
    msg.setSource(62624U);
    msg.setSourceEntity(187U);
    msg.setDestination(63932U);
    msg.setDestinationEntity(107U);
    msg.req_id = 37605U;
    msg.destination.assign("DVBBFDBOPKQTIOBENSQEUKWYNRCOYRHJWLPTOYQSGTYWFULMWMQHTUJFZXQLEMKIEHJTHIPVAHRTVJUNPCPGPTSKGWGBCJYUYJTNWAXZGSRPQTPWNMBAIZPZJDSOHPLODG");
    msg.timeout = 0.9294066141832823;
    msg.range = 0.13964407559691894;
    msg.type = 62U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 189U;
    tmp_msg_0.plan_id.assign("VHUEKMTDSKYSLCMABRMDZZLIWZSPHOLUGNOBWKNTUNWWBYMMXEFCIRISOFCKNQJUDJUBQCCSVREUQRCRQSNWAGRFKXVLYJPBESYVADNYUSEPYVIEREMOYIXXKTLQMNMLXJTAWGQAERKWOGYTTLPAXJSZWCFJTDROVQFXLIHIUFDPVHXHBMOMGZFYUDDALTCKG");
    tmp_msg_0.plan_eta = -133553767;
    tmp_msg_0.plan_progress = 0.5708367165641066;
    tmp_msg_0.man_id.assign("LMUMKPEDFEKWVFBJOCNPORXUIBVRGQUNBHNAIHZWIMJVOXJVVQHQQXXLQNPYASPUVOYSVCCLOATHSATEDEQSJZOAMXWXCYHODLOZWFRZKITVAGLNZXSCIKGCKNWHEFLCWRIHFSTCXQOVMSPDQDMRBBWGZTPTYFUEYCMGXUNGQMYYIFQRSEJEWLTR");
    tmp_msg_0.man_type = 64061U;
    tmp_msg_0.man_eta = -58301906;
    tmp_msg_0.last_outcome = 143U;
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
    msg.setTimeStamp(0.2051841454586638);
    msg.setSource(8314U);
    msg.setSourceEntity(224U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(177U);
    msg.req_id = 24883U;
    msg.destination.assign("CTTDNXBVQVGEM");
    msg.timeout = 0.04059707518819344;
    msg.range = 0.4449858750927447;
    msg.type = 45U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("HOYSDAVMKHLHGGIXHIBVLNRZLKMQUNACGVLOUACWFGXMJJCCSRPWPERXXQFJYTEZNICAKTLKISPZWHWJYUVBARKHJXBEBBG");
    tmp_msg_0.rssi = 0.09471122784961516;
    tmp_msg_0.integrity = 50523U;
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
    msg.setTimeStamp(0.24891743860721327);
    msg.setSource(32303U);
    msg.setSourceEntity(14U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(45U);
    msg.req_id = 9948U;
    msg.type = 150U;
    msg.status = 222U;
    msg.info.assign("XORFBETKLUPVWTJWHZKOTMYXBIEXEPIIAUAVNPENUDLXEPVZZEOKXHXDPCBYVTWZRDVBQAWRBPYSULCZORGIURNWTVRLIUKBNYEAGKHROITUWNUDIMJOHQLQMQFWPCGKANSPAFLXGFSGDZJDPYZDJHQFHFHOAJAFCNHJNVLMSMMOQIQTMEWWIGTOBB");
    msg.range = 0.5151210122444706;

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
    msg.setTimeStamp(0.6183250435375022);
    msg.setSource(11488U);
    msg.setSourceEntity(63U);
    msg.setDestination(58767U);
    msg.setDestinationEntity(89U);
    msg.req_id = 12516U;
    msg.type = 161U;
    msg.status = 169U;
    msg.info.assign("JOAAAQKCJUFUOWRPXBECACBYUSIQKWZMYFIMNNIKQKOSYMSBUXKXLDVMEVJUKIJIOQYHCHGZJXVWEWLPGTLSLNCEAYPLTRMXFFBEOADNUGHPLSMWWZEKBGYVCJIXMOQSQNBOOTIGXCSMGLUDCCDKVHAQIYURINAHRFTRBPZMNAGSVYHXVJZZRTRDVDDXEXZMHURFQHLHDVALOKPTEBRFELRWKQZNGYYJIT");
    msg.range = 0.12955334392550455;

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
    msg.setTimeStamp(0.9533969720086218);
    msg.setSource(55904U);
    msg.setSourceEntity(113U);
    msg.setDestination(43188U);
    msg.setDestinationEntity(178U);
    msg.req_id = 27922U;
    msg.type = 96U;
    msg.status = 207U;
    msg.info.assign("EKRZAASKGMRTONQCFIUPRZJAXVEEWKMJNQSDINWXYGN");
    msg.range = 0.9322112549820452;

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
    msg.setTimeStamp(0.7397719110702355);
    msg.setSource(50148U);
    msg.setSourceEntity(215U);
    msg.setDestination(15713U);
    msg.setDestinationEntity(73U);
    msg.system.assign("OJXMMAESRSHHTFPHLNBWMUCXGFXLQQJNGSPKOTJRNPLGJNMYNVGAWDCEHWOVVCSEQRMQCOAIXFPOCDTWAZVMMFUNITQUZYWYXIUVDKBVUCIPMYKLKLMPPSZKNETLZYJDKBNIYFVEYINDTFRWB");
    msg.op = 159U;

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
    msg.setTimeStamp(0.35437500182145854);
    msg.setSource(10291U);
    msg.setSourceEntity(11U);
    msg.setDestination(20056U);
    msg.setDestinationEntity(1U);
    msg.system.assign("LDCGTTAPDSOIOMWMKMIKFSHLPEYEQMTNR");
    msg.op = 237U;

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
    msg.setTimeStamp(0.8690482985369332);
    msg.setSource(50695U);
    msg.setSourceEntity(29U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(49U);
    msg.system.assign("RCTZBJEFNHKKVIZZODVSAUPFQWLYMKGBHNMWQWLAXTJDGFHSSULPBATCLHRITXQCCSOSGFJPVDGYZOYYFMBTYLMHMXENRBGRMZIRPKECKXYEMXLXGXFQJWENGOVQIZAQEJVWNSVQJZRMIBFCYHBOUFTRXLVDOYSPIJQOFPGRJSAKVLMEWWDEX");
    msg.op = 75U;

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
    msg.setTimeStamp(0.5826764846340333);
    msg.setSource(5775U);
    msg.setSourceEntity(250U);
    msg.setDestination(17066U);
    msg.setDestinationEntity(175U);
    msg.value = 23129;

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
    msg.setTimeStamp(0.17320607133018162);
    msg.setSource(18021U);
    msg.setSourceEntity(149U);
    msg.setDestination(25407U);
    msg.setDestinationEntity(104U);
    msg.value = 15377;

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
    msg.setTimeStamp(0.019735548533259872);
    msg.setSource(53654U);
    msg.setSourceEntity(157U);
    msg.setDestination(45765U);
    msg.setDestinationEntity(119U);
    msg.value = -32342;

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
    msg.setTimeStamp(0.13734182376246507);
    msg.setSource(21023U);
    msg.setSourceEntity(16U);
    msg.setDestination(20951U);
    msg.setDestinationEntity(120U);
    msg.value = 0.741689529668863;

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
    msg.setTimeStamp(0.9015755538631497);
    msg.setSource(22252U);
    msg.setSourceEntity(168U);
    msg.setDestination(1057U);
    msg.setDestinationEntity(40U);
    msg.value = 0.3804599172614299;

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
    msg.setTimeStamp(0.5242212785153251);
    msg.setSource(9931U);
    msg.setSourceEntity(239U);
    msg.setDestination(22495U);
    msg.setDestinationEntity(180U);
    msg.value = 0.13788264927047023;

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
    msg.setTimeStamp(0.6609705863254338);
    msg.setSource(50265U);
    msg.setSourceEntity(29U);
    msg.setDestination(7234U);
    msg.setDestinationEntity(187U);
    msg.value = 0.09974660420984349;

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
    msg.setTimeStamp(0.7826276096916708);
    msg.setSource(13291U);
    msg.setSourceEntity(132U);
    msg.setDestination(22835U);
    msg.setDestinationEntity(87U);
    msg.value = 0.1495075575823419;

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
    msg.setTimeStamp(0.4849520943661719);
    msg.setSource(60208U);
    msg.setSourceEntity(4U);
    msg.setDestination(46796U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9047070464786746;

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
    msg.setTimeStamp(0.6672836759577353);
    msg.setSource(61703U);
    msg.setSourceEntity(95U);
    msg.setDestination(7092U);
    msg.setDestinationEntity(237U);
    msg.validity = 57967U;
    msg.type = 104U;
    msg.utc_year = 28562U;
    msg.utc_month = 84U;
    msg.utc_day = 105U;
    msg.utc_time = 0.4658337706794532;
    msg.lat = 0.9621172628247244;
    msg.lon = 0.026005563015953803;
    msg.height = 0.933097164687693;
    msg.satellites = 214U;
    msg.cog = 0.324620665184696;
    msg.sog = 0.21288069823387046;
    msg.hdop = 0.5118950737423256;
    msg.vdop = 0.6766582905516685;
    msg.hacc = 0.9609231872136845;
    msg.vacc = 0.4952296256470371;

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
    msg.setTimeStamp(0.992654397077674);
    msg.setSource(7402U);
    msg.setSourceEntity(251U);
    msg.setDestination(64402U);
    msg.setDestinationEntity(113U);
    msg.validity = 43734U;
    msg.type = 210U;
    msg.utc_year = 53290U;
    msg.utc_month = 139U;
    msg.utc_day = 178U;
    msg.utc_time = 0.9969028991809374;
    msg.lat = 0.47566255030265236;
    msg.lon = 0.792203019666736;
    msg.height = 0.09712353260515016;
    msg.satellites = 90U;
    msg.cog = 0.18112986322878222;
    msg.sog = 0.8157263033306;
    msg.hdop = 0.9024018068291083;
    msg.vdop = 0.3771424245960926;
    msg.hacc = 0.8962588655188081;
    msg.vacc = 0.22667928525800596;

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
    msg.setTimeStamp(0.5818846986633207);
    msg.setSource(52504U);
    msg.setSourceEntity(104U);
    msg.setDestination(39264U);
    msg.setDestinationEntity(50U);
    msg.validity = 2191U;
    msg.type = 234U;
    msg.utc_year = 7875U;
    msg.utc_month = 164U;
    msg.utc_day = 193U;
    msg.utc_time = 0.7270369438815969;
    msg.lat = 0.04240574091779126;
    msg.lon = 0.7958420045805288;
    msg.height = 0.5001038668338571;
    msg.satellites = 226U;
    msg.cog = 0.5745704958182489;
    msg.sog = 0.04969742879949968;
    msg.hdop = 0.5234161395297509;
    msg.vdop = 0.6814002878305888;
    msg.hacc = 0.9663046426974532;
    msg.vacc = 0.3539921422729799;

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
    msg.setTimeStamp(0.03483603376382072);
    msg.setSource(30023U);
    msg.setSourceEntity(105U);
    msg.setDestination(45236U);
    msg.setDestinationEntity(162U);
    msg.time = 0.3739533283556121;
    msg.phi = 0.4174066933819386;
    msg.theta = 0.15202121425176363;
    msg.psi = 0.6484862965134306;
    msg.psi_magnetic = 0.8484708130942566;

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
    msg.setTimeStamp(0.5607756174749208);
    msg.setSource(3528U);
    msg.setSourceEntity(111U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(204U);
    msg.time = 0.9379190356138309;
    msg.phi = 0.3725379199871194;
    msg.theta = 0.8125568958711142;
    msg.psi = 0.42414756465137604;
    msg.psi_magnetic = 0.2747730486215999;

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
    msg.setTimeStamp(0.26346663534633985);
    msg.setSource(46280U);
    msg.setSourceEntity(188U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(92U);
    msg.time = 0.5780914050943743;
    msg.phi = 0.867117848709253;
    msg.theta = 0.17235826081158212;
    msg.psi = 0.46429823975820506;
    msg.psi_magnetic = 0.09593892132205684;

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
    msg.setTimeStamp(0.14373605609911244);
    msg.setSource(61835U);
    msg.setSourceEntity(188U);
    msg.setDestination(36372U);
    msg.setDestinationEntity(119U);
    msg.time = 0.6214369574668319;
    msg.x = 0.12095483077202718;
    msg.y = 0.5619572375661245;
    msg.z = 0.28505816404605366;
    msg.timestep = 0.5278292681896299;

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
    msg.setTimeStamp(0.3927566779725491);
    msg.setSource(43056U);
    msg.setSourceEntity(230U);
    msg.setDestination(7449U);
    msg.setDestinationEntity(38U);
    msg.time = 0.08515911390810516;
    msg.x = 0.3606969855698581;
    msg.y = 0.7211763917119096;
    msg.z = 0.4041711723366336;
    msg.timestep = 0.3339797912846545;

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
    msg.setTimeStamp(0.5128815677349631);
    msg.setSource(61366U);
    msg.setSourceEntity(224U);
    msg.setDestination(46682U);
    msg.setDestinationEntity(204U);
    msg.time = 0.993504342093945;
    msg.x = 0.924876949825079;
    msg.y = 0.377466570494318;
    msg.z = 0.35356638600649304;
    msg.timestep = 0.41958525435060745;

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
    msg.setTimeStamp(0.8755620131972643);
    msg.setSource(29690U);
    msg.setSourceEntity(114U);
    msg.setDestination(51525U);
    msg.setDestinationEntity(11U);
    msg.time = 0.7664701779716288;
    msg.x = 0.31672419114746686;
    msg.y = 0.5167281837992436;
    msg.z = 0.1349629963268072;

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
    msg.setTimeStamp(0.05468403118515652);
    msg.setSource(31278U);
    msg.setSourceEntity(49U);
    msg.setDestination(16153U);
    msg.setDestinationEntity(239U);
    msg.time = 0.9053805004392294;
    msg.x = 0.843506332390932;
    msg.y = 0.2852196386077448;
    msg.z = 0.550639338334338;

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
    msg.setTimeStamp(0.23220108335071377);
    msg.setSource(40204U);
    msg.setSourceEntity(174U);
    msg.setDestination(24821U);
    msg.setDestinationEntity(204U);
    msg.time = 0.3262014542283468;
    msg.x = 0.12583864006576195;
    msg.y = 0.68449571912172;
    msg.z = 0.13908796030374215;

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
    msg.setTimeStamp(0.0969073775297784);
    msg.setSource(5331U);
    msg.setSourceEntity(185U);
    msg.setDestination(7484U);
    msg.setDestinationEntity(174U);
    msg.time = 0.41483576152616086;
    msg.x = 0.653418072091048;
    msg.y = 0.47097990523609745;
    msg.z = 0.9621221775086606;

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
    msg.setTimeStamp(0.08380502140852042);
    msg.setSource(4927U);
    msg.setSourceEntity(197U);
    msg.setDestination(43548U);
    msg.setDestinationEntity(48U);
    msg.time = 0.20120129979838774;
    msg.x = 0.2141730486988226;
    msg.y = 0.23107250002959578;
    msg.z = 0.5733384241850302;

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
    msg.setTimeStamp(0.5985893152286678);
    msg.setSource(65095U);
    msg.setSourceEntity(160U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(10U);
    msg.time = 0.14890414598326818;
    msg.x = 0.5466341050020418;
    msg.y = 0.8007349273159041;
    msg.z = 0.12647833756657378;

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
    msg.setTimeStamp(0.8441333514747308);
    msg.setSource(22891U);
    msg.setSourceEntity(5U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(65U);
    msg.time = 0.3873545319386249;
    msg.x = 0.3436269574284977;
    msg.y = 0.7113739778321361;
    msg.z = 0.45265753224954886;

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
    msg.setTimeStamp(0.9638629789461454);
    msg.setSource(34067U);
    msg.setSourceEntity(53U);
    msg.setDestination(63703U);
    msg.setDestinationEntity(171U);
    msg.time = 0.6959155378221364;
    msg.x = 0.692089342187946;
    msg.y = 0.03838960513915901;
    msg.z = 0.8927857466224144;

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
    msg.setTimeStamp(0.35419092581686396);
    msg.setSource(30489U);
    msg.setSourceEntity(224U);
    msg.setDestination(3916U);
    msg.setDestinationEntity(78U);
    msg.time = 0.880466508263393;
    msg.x = 0.6434266128570028;
    msg.y = 0.32394341146690664;
    msg.z = 0.590547277072886;

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
    msg.setTimeStamp(0.11779805061508675);
    msg.setSource(26883U);
    msg.setSourceEntity(73U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(103U);
    msg.validity = 48U;
    msg.x = 0.9371592729995049;
    msg.y = 0.6576619747213007;
    msg.z = 0.3347879132785786;

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
    msg.setTimeStamp(0.7815517504776845);
    msg.setSource(727U);
    msg.setSourceEntity(74U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(150U);
    msg.validity = 77U;
    msg.x = 0.7174554280517484;
    msg.y = 0.6790497081439898;
    msg.z = 0.04290370609167937;

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
    msg.setTimeStamp(0.10778045391006053);
    msg.setSource(17297U);
    msg.setSourceEntity(59U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(151U);
    msg.validity = 1U;
    msg.x = 0.8986709362934586;
    msg.y = 0.023912515724783923;
    msg.z = 0.9974754871374246;

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
    msg.setTimeStamp(0.4651383841433542);
    msg.setSource(47307U);
    msg.setSourceEntity(130U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(249U);
    msg.validity = 247U;
    msg.x = 0.7026742621318012;
    msg.y = 0.43328764241674433;
    msg.z = 0.04609484817051113;

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
    msg.setTimeStamp(0.0996123783890408);
    msg.setSource(21482U);
    msg.setSourceEntity(11U);
    msg.setDestination(6055U);
    msg.setDestinationEntity(230U);
    msg.validity = 2U;
    msg.x = 0.6068552790119388;
    msg.y = 0.9584078488148933;
    msg.z = 0.030577924546479895;

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
    msg.setTimeStamp(0.48897468477859585);
    msg.setSource(22438U);
    msg.setSourceEntity(95U);
    msg.setDestination(29412U);
    msg.setDestinationEntity(44U);
    msg.validity = 155U;
    msg.x = 0.38081329191106605;
    msg.y = 0.8555566113961769;
    msg.z = 0.36757998004362635;

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
    msg.setTimeStamp(0.22059994117822257);
    msg.setSource(39993U);
    msg.setSourceEntity(181U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(124U);
    msg.time = 0.6673714398756335;
    msg.x = 0.06332413358606914;
    msg.y = 0.6428956756820811;
    msg.z = 0.6577075655080621;

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
    msg.setTimeStamp(0.06075377170466223);
    msg.setSource(27700U);
    msg.setSourceEntity(121U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(223U);
    msg.time = 0.11735024805293359;
    msg.x = 0.0036105541265500918;
    msg.y = 0.839546747934539;
    msg.z = 0.662962956143975;

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
    msg.setTimeStamp(0.25457849109240416);
    msg.setSource(18986U);
    msg.setSourceEntity(225U);
    msg.setDestination(3729U);
    msg.setDestinationEntity(11U);
    msg.time = 0.8873271846734763;
    msg.x = 0.2745021693630577;
    msg.y = 0.5327072973739818;
    msg.z = 0.44171371342543675;

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
    msg.setTimeStamp(0.3724045224270277);
    msg.setSource(27265U);
    msg.setSourceEntity(43U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(151U);
    msg.validity = 36U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3663324931062625;
    tmp_msg_0.y = 0.29867554186030365;
    tmp_msg_0.z = 0.48687694079848964;
    tmp_msg_0.phi = 0.47490005895561505;
    tmp_msg_0.theta = 0.5585576524551108;
    tmp_msg_0.psi = 0.6903309062107952;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4651894143846841;

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
    msg.setTimeStamp(0.3842806167723839);
    msg.setSource(35802U);
    msg.setSourceEntity(104U);
    msg.setDestination(3857U);
    msg.setDestinationEntity(57U);
    msg.validity = 112U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2699965904209064;
    tmp_msg_0.beam_height = 0.3614126535044525;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.21786982981853076;

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
    msg.setTimeStamp(0.4699826701644253);
    msg.setSource(2104U);
    msg.setSourceEntity(49U);
    msg.setDestination(43308U);
    msg.setDestinationEntity(152U);
    msg.validity = 36U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.000862122466313453;
    tmp_msg_0.beam_height = 0.969955399005551;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6995796180143252;

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
    msg.setTimeStamp(0.18734562469168958);
    msg.setSource(54740U);
    msg.setSourceEntity(91U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(110U);
    msg.value = 0.39061724393176644;

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
    msg.setTimeStamp(0.3167259441112449);
    msg.setSource(17709U);
    msg.setSourceEntity(252U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(127U);
    msg.value = 0.8116016407099081;

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
    msg.setTimeStamp(0.4826591643499172);
    msg.setSource(21989U);
    msg.setSourceEntity(158U);
    msg.setDestination(32604U);
    msg.setDestinationEntity(114U);
    msg.value = 0.7667953348807768;

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
    msg.setTimeStamp(0.1429320204353598);
    msg.setSource(16417U);
    msg.setSourceEntity(130U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(203U);
    msg.value = 0.5661547551060254;

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
    msg.setTimeStamp(0.32798175019124043);
    msg.setSource(52447U);
    msg.setSourceEntity(254U);
    msg.setDestination(22789U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8502345378808982;

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
    msg.setTimeStamp(0.55073334432801);
    msg.setSource(6289U);
    msg.setSourceEntity(207U);
    msg.setDestination(9260U);
    msg.setDestinationEntity(47U);
    msg.value = 0.41676763315740906;

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
    msg.setTimeStamp(0.14091030794438997);
    msg.setSource(58459U);
    msg.setSourceEntity(247U);
    msg.setDestination(46751U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3102980249109173;

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
    msg.setTimeStamp(0.9955235738952921);
    msg.setSource(1654U);
    msg.setSourceEntity(245U);
    msg.setDestination(6469U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8909101843787428;

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
    msg.setTimeStamp(0.7748795884937846);
    msg.setSource(9565U);
    msg.setSourceEntity(42U);
    msg.setDestination(37751U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5781024221196944;

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
    msg.setTimeStamp(0.7233081943363371);
    msg.setSource(51937U);
    msg.setSourceEntity(6U);
    msg.setDestination(54487U);
    msg.setDestinationEntity(6U);
    msg.value = 0.3124410938145422;

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
    msg.setTimeStamp(0.1638681176430622);
    msg.setSource(11481U);
    msg.setSourceEntity(183U);
    msg.setDestination(59387U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8886680343524099;

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
    msg.setTimeStamp(0.3738341234084587);
    msg.setSource(6136U);
    msg.setSourceEntity(242U);
    msg.setDestination(30284U);
    msg.setDestinationEntity(46U);
    msg.value = 0.08122352297704971;

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
    msg.setTimeStamp(0.35933427911830873);
    msg.setSource(38511U);
    msg.setSourceEntity(134U);
    msg.setDestination(13184U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8717009170189205;

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
    msg.setTimeStamp(0.9665893169883152);
    msg.setSource(59498U);
    msg.setSourceEntity(87U);
    msg.setDestination(12329U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8658946937257909;

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
    msg.setTimeStamp(0.5293006355049853);
    msg.setSource(47832U);
    msg.setSourceEntity(131U);
    msg.setDestination(19751U);
    msg.setDestinationEntity(99U);
    msg.value = 0.1529495240069032;

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
    msg.setTimeStamp(0.6827234183424518);
    msg.setSource(11946U);
    msg.setSourceEntity(22U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(93U);
    msg.value = 0.443393606743409;

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
    msg.setTimeStamp(0.06467622871028711);
    msg.setSource(46516U);
    msg.setSourceEntity(65U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(110U);
    msg.value = 0.1075684527075047;

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
    msg.setTimeStamp(0.5219031854327966);
    msg.setSource(30524U);
    msg.setSourceEntity(196U);
    msg.setDestination(28282U);
    msg.setDestinationEntity(231U);
    msg.value = 0.03155981678629183;

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
    msg.setTimeStamp(0.8730770928804329);
    msg.setSource(2392U);
    msg.setSourceEntity(65U);
    msg.setDestination(11151U);
    msg.setDestinationEntity(79U);
    msg.value = 0.23551041607238243;

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
    msg.setTimeStamp(0.5332289155017255);
    msg.setSource(3970U);
    msg.setSourceEntity(47U);
    msg.setDestination(48791U);
    msg.setDestinationEntity(138U);
    msg.value = 0.703080184469127;

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
    msg.setTimeStamp(0.24931110968393755);
    msg.setSource(27816U);
    msg.setSourceEntity(155U);
    msg.setDestination(53780U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7373704549911414;

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
    msg.setTimeStamp(0.3927412903714159);
    msg.setSource(62718U);
    msg.setSourceEntity(147U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(236U);
    msg.value = 0.31288366747241103;

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
    msg.setTimeStamp(0.28787626556603574);
    msg.setSource(17110U);
    msg.setSourceEntity(182U);
    msg.setDestination(52096U);
    msg.setDestinationEntity(32U);
    msg.value = 0.39387978682164226;

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
    msg.setTimeStamp(0.10568440151360303);
    msg.setSource(43192U);
    msg.setSourceEntity(74U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(198U);
    msg.value = 0.020160683910554922;

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
    msg.setTimeStamp(0.47529291334974155);
    msg.setSource(19548U);
    msg.setSourceEntity(185U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(77U);
    msg.direction = 0.3924715314550947;
    msg.speed = 0.3657328916035911;
    msg.turbulence = 0.12034991195188349;

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
    msg.setTimeStamp(0.8715649985929215);
    msg.setSource(43826U);
    msg.setSourceEntity(183U);
    msg.setDestination(3878U);
    msg.setDestinationEntity(148U);
    msg.direction = 0.45127572810554273;
    msg.speed = 0.8497143559297478;
    msg.turbulence = 0.7656838691862636;

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
    msg.setTimeStamp(0.5057980547860625);
    msg.setSource(52162U);
    msg.setSourceEntity(49U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.5969559332502979;
    msg.speed = 0.7443984532199341;
    msg.turbulence = 0.3647517124584281;

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
    msg.setTimeStamp(0.37911786242124346);
    msg.setSource(21277U);
    msg.setSourceEntity(175U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7109280698044943;

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
    msg.setTimeStamp(0.2730609190573027);
    msg.setSource(27390U);
    msg.setSourceEntity(88U);
    msg.setDestination(60683U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9344973730126526;

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
    msg.setTimeStamp(0.9314519698379854);
    msg.setSource(7979U);
    msg.setSourceEntity(59U);
    msg.setDestination(9753U);
    msg.setDestinationEntity(28U);
    msg.value = 0.13286709672767194;

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
    msg.setTimeStamp(0.22049977053253822);
    msg.setSource(29842U);
    msg.setSourceEntity(65U);
    msg.setDestination(33090U);
    msg.setDestinationEntity(102U);
    msg.value.assign("HNWPDJRVJWQSWURGMGBVYXVYUSFAMXJXVHGBFZYMZKNJVENLBHCYRTMCIECUSGRAEXV");

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
    msg.setTimeStamp(0.8298870915345857);
    msg.setSource(34040U);
    msg.setSourceEntity(170U);
    msg.setDestination(59668U);
    msg.setDestinationEntity(217U);
    msg.value.assign("ADOCWJBAZSYKVOQXXEFBOKMJLOTCVIBPGHCCSNYIMYIMEKPCAAFHGLLVIERCVNSEWIXUXWWWAHJMSLEGACOJTRHIUIXDBKAVZLKYRQMIERBCNSCZQTXMSQJDLGZJNABAUMDHWZBNVYETTGZHXFFWBNAOGKUBPMTUIVOFUJWRLFHVKPXHOGLYQQFHBROMZEEDQMUJQXSHYFGYPZERGKYQZTPIR");

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
    msg.setTimeStamp(0.8335727447806773);
    msg.setSource(17343U);
    msg.setSourceEntity(21U);
    msg.setDestination(10777U);
    msg.setDestinationEntity(54U);
    msg.value.assign("GCEHKKLTRICSNRBTXIMPMZYGLCWNKYCGTPKNWJOYRPGATUMKDOJVILDFLOPTFNOZZKYFRIXPBCWATDSTYHESMGRBPJCZDOUXBMXHPATJDSBLLVORFIXEEEUWUEFYWKTWVPUHIXQRYPHPWGVWJVZVODXYOUFDGQICICVEZIRBGYFQKFNNZAHUMADBJSVAXQDLHSUJBNMNFLHRVQOHZWXNEZESENCQBQAMSJHGMVQQUAUWDRSGQIAS");

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
    msg.setTimeStamp(0.8602931050805862);
    msg.setSource(36966U);
    msg.setSourceEntity(164U);
    msg.setDestination(50058U);
    msg.setDestinationEntity(62U);
    const signed char tmp_msg_0[] = {-65, -93, 17, 46, -95, -124, -11, -107, -118, -18, 48, -121, 47, -23, -35, 66, 33, -40, -51, 93, -117, -95, 83, -75, 30, 98, 93, 98, -79, -91, 71, 26, -25, -91, -116, 47, 120, -35, -9, 106, -57, 69, 19, -7, 31, -77, 11, 1, -1, 121, -57, 72, 3, 105, -74, 28, 106, -59, 125, -51, -3, -10, -35, -22, -126, 36, 38, -126, -117, -14, -118, -26, -66, 40, 16, 77, 122, 1, -93, -109, 108, -18, 116, -78, 121, -3, -27, -124, -77, -77, 9, -112, -47, 105, -5, 54, -113, -106, -107, -9, -96, -112, -113, -23, -42, 118, -93, 17, 85, -40, 61, 57, 113, -121, 112, 58, -26, -5, -30, 21, -27, -7, -18, -16, 57, 56, -49, 100, -71, 74, -46, -100, 27, -24, -57, 108, 108, 33, 87, 40, 100, 25, -75, 35, -128, -20, -25, 102, -63, 2, -33, -106, 41, 1, -44, 115, -120, 30, 82, -128, -126, 88, -113, 69, 91, 37, -27, -16, 4, -63, -95, 92, -53, -123, 78, -81, -86, 103, -21, -120, 41, -55, -41, 99, 56, -29, 81, -114, 113, -107, 125, -125, -88, -124, -47, 104, 17, 30, -49, -94, -35, 72, -115, 68, -71, 101, -2, -113, -19, 101, 62, -117, 33, 31, 64, -4, -92, 63, -11, -37, -16, -7, -54, -68, 74, -54, 51, -14, -114, 102, 61, 60, -16, -17, -30, 14, -106, -80, 108, -33, 98, -118, -7, -38, 101, -72, 72, -75, -79};
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
    msg.setTimeStamp(0.5836889192101812);
    msg.setSource(40792U);
    msg.setSourceEntity(117U);
    msg.setDestination(33860U);
    msg.setDestinationEntity(10U);
    const signed char tmp_msg_0[] = {5, -72, 34, 122, -100, 109, 92, -20, 88, 39, -8, 90, -128, -107, -26, 91, 44, -110, 98, 87, -29, -64, -14, -114, 54, -82, 20, 100, -31, 32, -95, 126, 124, -77, -40, -123, 73, 5, 49, -107, -2, -110, 0, -51, 111, -36, 47, 113, -109, 62, -42, -80, -72, -20, 5, -38, -28, -97, -50, -37, 105, -98, 118, 91, 25, -120, -44, -18, 98, -43, -50, 4, 5, 13, 47, -13, -110, -83, -36, -114, -56, 38, 16, -12, 26, 77, -63, 96, -64, 19, -11, -113, -117, 17, -63, -30, -115, 116, -3, 48, 5, 91, 42, 24, -19, -41, 95, 91, 45, 16, -53, 111, 54, -6, 43, 109, -107, -91, 54, -103, -57, -123, 61, 7, 78, 23, 66, -34, 37, -114, -90, 102, -7, -84, 90, 77, -10, -16, 98, 102};
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
    msg.setTimeStamp(0.8806911310858365);
    msg.setSource(36217U);
    msg.setSourceEntity(144U);
    msg.setDestination(79U);
    msg.setDestinationEntity(26U);
    const signed char tmp_msg_0[] = {31, 3, 111, -70, -32, -15, 49, -24, -14, 30, 12, -101, -8, -61, 106, -13, 2, 61, 126, 16, 125, 5, -59, -40, -8, -52, -124, 9, 77, 40, 52, 27, -112, -30, 8, 119, 24, 107, 32, -84, -14, 120, -97, 57, 60, -6, 125, 52, 78, 78, 99, -66, 60, -65, -51, -90, 3, -103, 54, -69, 77, 76, -109, 99, 6, -51, 14, -18, 65, -56, 26, 114, -52, -14, 93, 67, 79, 98, -61, 38, -5, 33, -96, -92, -81, 20, 64, -45, -30, -7, -39, 86, 92, -54, 38, 38, -34, 54, 51, 32, 60, -92, -76, -90, 88, -23, 103, 12, 102, 101, 101, 85, 122, 74, 45, 118, 26, 45, -103, -103, 48, -72, -128, -80, -26, 37, 37, -98, -13, -84, -107, 66, -68, -124, 81, -26, -87, -105, 27, 74, 5, 95, 64, 65, -65, -86, -79, -63, -29, -37, -27, 68, -32, -30, -37, -88, 113, 64, 84, -37, -71, -86, 112, 71, 120, -45, 75, 79, -90, -66, -13, 21, -25, 108, -56, -75, -21, -96, 100, 100, -92, -36, 13, -85, 91, 60, 91, -5, -68, -91, -125, -32, -28, 21, 75, -49, 53, 74, -82, 16, 28, -93, -54, 7, 96, -82, 23, -118, 102, 49, -54, -106, -53, -83, -52, 9, 93, -112, 123, 73, -128, -77, 102, -56, -104, -120, 3, -7, -97, 6, -68, -51, -124, -89, -55, -64, 51, 49, -105, -116, 90, 57, -121, -24, 101, 73, 99, -83, -27, 63, -90, -58, 43};
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
    msg.setTimeStamp(0.2709589546713794);
    msg.setSource(3772U);
    msg.setSourceEntity(154U);
    msg.setDestination(28191U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9203193592987642;

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
    msg.setTimeStamp(0.3376119520456955);
    msg.setSource(7620U);
    msg.setSourceEntity(223U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7555403309583092;

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
    msg.setTimeStamp(0.8388136825025969);
    msg.setSource(58694U);
    msg.setSourceEntity(147U);
    msg.setDestination(63988U);
    msg.setDestinationEntity(90U);
    msg.value = 0.46895169868693043;

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
    msg.setTimeStamp(0.04416353633318193);
    msg.setSource(55449U);
    msg.setSourceEntity(201U);
    msg.setDestination(36966U);
    msg.setDestinationEntity(107U);
    msg.type = 16U;
    msg.frequency = 280929634U;
    msg.min_range = 42185U;
    msg.max_range = 7414U;
    msg.bits_per_point = 192U;
    msg.scale_factor = 0.39765231133288303;
    const signed char tmp_msg_0[] = {17, -75, 47, 68, 59, -6, -120, -70, -22, -31, -8, -17, 92, -94, 122, -61, -35, -43, 16, 59, 116, 25, 103, -102, -16, 104, -11, 0, 64, -60, 40, 41, 11, -34, -124, -93, -50, 120, -120, -108, 106, -16, 44, -67, 16, 50, 110, -13, -126, 13, 0, 31, 94, 33, -41, 105, 69, 25, -107, 78, -88, 125, -101, -58, 66, -30, -6, -100, 122, 90, 30, 31, 32, 82, 93, 82, 88, 31, -108, -3, -32, 99, 66, -128, -81, 58, -18, 40, 50, -73, -76, -66, -97, -107};
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
    msg.setTimeStamp(0.3811678568703135);
    msg.setSource(20202U);
    msg.setSourceEntity(201U);
    msg.setDestination(43329U);
    msg.setDestinationEntity(0U);
    msg.type = 173U;
    msg.frequency = 1828851791U;
    msg.min_range = 49605U;
    msg.max_range = 38128U;
    msg.bits_per_point = 237U;
    msg.scale_factor = 0.5348564522792555;
    const signed char tmp_msg_0[] = {44, 49, 70, 99, 109, 58, 3, 119, 35, -31, 72, -61, 120, -31, 35, -56, 110, -112, 89, 105, -87, -14, -18, 20, 112, -69, -93, -116, -122, -8, -32, 97, -40, -28, 48, -40, 4, 96};
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
    msg.setTimeStamp(0.8813078440279455);
    msg.setSource(1925U);
    msg.setSourceEntity(79U);
    msg.setDestination(7620U);
    msg.setDestinationEntity(66U);
    msg.type = 111U;
    msg.frequency = 3192924939U;
    msg.min_range = 51116U;
    msg.max_range = 58238U;
    msg.bits_per_point = 1U;
    msg.scale_factor = 0.10693783207430518;
    const signed char tmp_msg_0[] = {-91, 8, -3, -6, 120, 116, 7, 80, -77, 48, -72, 28, 81, 121, -118, 67, -113, 78, -97, 1, -42, 67, 70, 92, 42, -25, 85, -92, -112};
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
    msg.setTimeStamp(0.769514413026204);
    msg.setSource(15054U);
    msg.setSourceEntity(179U);
    msg.setDestination(21438U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.627590047539179);
    msg.setSource(46407U);
    msg.setSourceEntity(26U);
    msg.setDestination(55405U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.171124636926547);
    msg.setSource(55191U);
    msg.setSourceEntity(138U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.6196710657047386);
    msg.setSource(22449U);
    msg.setSourceEntity(222U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(208U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.8903780107857859);
    msg.setSource(3760U);
    msg.setSourceEntity(223U);
    msg.setDestination(36329U);
    msg.setDestinationEntity(150U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.7603519383202609);
    msg.setSource(51421U);
    msg.setSourceEntity(47U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(108U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.13648030433017477);
    msg.setSource(271U);
    msg.setSourceEntity(95U);
    msg.setDestination(5911U);
    msg.setDestinationEntity(60U);
    msg.value = 0.25709568337575484;
    msg.confidence = 0.5541943655715599;
    msg.opmodes.assign("QCTOXMFLDEPGYRYLOQUMHCNFNIK");

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
    msg.setTimeStamp(0.7908981341334037);
    msg.setSource(32759U);
    msg.setSourceEntity(207U);
    msg.setDestination(32428U);
    msg.setDestinationEntity(216U);
    msg.value = 0.49283501205709446;
    msg.confidence = 0.3618236125300548;
    msg.opmodes.assign("TABAKLSRDUVAGNTQFDYIYNQWIJQRNDDKOMMCDODYYFKNSXPFSCJHXUXMHWGJSQWEVFAUNXDMLUZJTCRLBFTOQ");

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
    msg.setTimeStamp(0.15564508160689716);
    msg.setSource(37724U);
    msg.setSourceEntity(159U);
    msg.setDestination(10009U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9484418257537369;
    msg.confidence = 0.28376937061122043;
    msg.opmodes.assign("OPSCAGIBDFMGXUGTKJBPVJAOELAWWTHIYTQVUHFDADSVKXYRHYDEDTNMFOUZUWFLMUXLJPBXJYVKDWDVILANZAQPWCTBCHEXKBDBMECAANQUEQUMYXKQXNPJDUQWOJZSILHQINOFYGFSNWBZBEMRRTQWSRCELFRYKDELVGGR");

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
    msg.setTimeStamp(0.10947084217802872);
    msg.setSource(23608U);
    msg.setSourceEntity(222U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(120U);
    msg.itow = 1757953134U;
    msg.lat = 0.6635449577512718;
    msg.lon = 0.30109888656540984;
    msg.height_ell = 0.6386332854907725;
    msg.height_sea = 0.6154859383035993;
    msg.hacc = 0.12083114342540435;
    msg.vacc = 0.8203716530986411;
    msg.vel_n = 0.43789052100311976;
    msg.vel_e = 0.20707602112528667;
    msg.vel_d = 0.25619990151258587;
    msg.speed = 0.8974830055435803;
    msg.gspeed = 0.6996062089588023;
    msg.heading = 0.9056352667836329;
    msg.sacc = 0.8132193222772162;
    msg.cacc = 0.8047059841582127;

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
    msg.setTimeStamp(0.061681817614557044);
    msg.setSource(6854U);
    msg.setSourceEntity(111U);
    msg.setDestination(45449U);
    msg.setDestinationEntity(197U);
    msg.itow = 920391304U;
    msg.lat = 0.7453657844125182;
    msg.lon = 0.4954230127891356;
    msg.height_ell = 0.8859559060269234;
    msg.height_sea = 0.29788128447794027;
    msg.hacc = 0.489373974342311;
    msg.vacc = 0.46871024157003016;
    msg.vel_n = 0.8588105643572375;
    msg.vel_e = 0.24717454644745362;
    msg.vel_d = 0.843997545947843;
    msg.speed = 0.5963001181738662;
    msg.gspeed = 0.21151014248663325;
    msg.heading = 0.2292797337248269;
    msg.sacc = 0.63306214672263;
    msg.cacc = 0.1751768242083197;

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
    msg.setTimeStamp(0.2833787892161608);
    msg.setSource(54213U);
    msg.setSourceEntity(78U);
    msg.setDestination(3864U);
    msg.setDestinationEntity(52U);
    msg.itow = 2767778358U;
    msg.lat = 0.743058755909818;
    msg.lon = 0.5453790214229207;
    msg.height_ell = 0.8874202978198441;
    msg.height_sea = 0.09699284675818165;
    msg.hacc = 0.20757353722243044;
    msg.vacc = 0.9116994263983027;
    msg.vel_n = 0.4260819909889695;
    msg.vel_e = 0.5161877702710418;
    msg.vel_d = 0.5118382793901873;
    msg.speed = 0.24129613764399205;
    msg.gspeed = 0.4395252317291274;
    msg.heading = 0.7944735416087436;
    msg.sacc = 0.3773308098735114;
    msg.cacc = 0.04785818554292576;

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
    msg.setTimeStamp(0.9198435848918226);
    msg.setSource(61888U);
    msg.setSourceEntity(165U);
    msg.setDestination(63629U);
    msg.setDestinationEntity(123U);
    msg.id = 136U;
    msg.value = 0.3206712771171607;

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
    msg.setTimeStamp(0.7887318193107962);
    msg.setSource(12983U);
    msg.setSourceEntity(57U);
    msg.setDestination(40510U);
    msg.setDestinationEntity(93U);
    msg.id = 24U;
    msg.value = 0.36890437786345376;

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
    msg.setTimeStamp(0.643809202535013);
    msg.setSource(52319U);
    msg.setSourceEntity(10U);
    msg.setDestination(26067U);
    msg.setDestinationEntity(56U);
    msg.id = 233U;
    msg.value = 0.15688747705344697;

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
    msg.setTimeStamp(0.05349687663129876);
    msg.setSource(32129U);
    msg.setSourceEntity(5U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(247U);
    msg.x = 0.0808711980492749;
    msg.y = 0.04938953532835544;
    msg.z = 0.3312615698051017;
    msg.phi = 0.4684161858620175;
    msg.theta = 0.8579463301462564;
    msg.psi = 0.7158356895999163;

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
    msg.setTimeStamp(0.49852771637595994);
    msg.setSource(35666U);
    msg.setSourceEntity(16U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(107U);
    msg.x = 0.21720939750159562;
    msg.y = 0.8427259184515598;
    msg.z = 0.17728301279017655;
    msg.phi = 0.005019123077284804;
    msg.theta = 0.7542348961292937;
    msg.psi = 0.9264445956073074;

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
    msg.setTimeStamp(0.8589590527852629);
    msg.setSource(37170U);
    msg.setSourceEntity(93U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(88U);
    msg.x = 0.009324096889133604;
    msg.y = 0.1113367852451621;
    msg.z = 0.6390707780812352;
    msg.phi = 0.947191587307929;
    msg.theta = 0.7010669264450674;
    msg.psi = 0.12532246908258338;

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
    msg.setTimeStamp(0.8061158622221773);
    msg.setSource(58855U);
    msg.setSourceEntity(77U);
    msg.setDestination(61620U);
    msg.setDestinationEntity(92U);
    msg.beam_width = 0.1940478002181507;
    msg.beam_height = 0.449101610585366;

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
    msg.setTimeStamp(0.5918613290650693);
    msg.setSource(4697U);
    msg.setSourceEntity(96U);
    msg.setDestination(57512U);
    msg.setDestinationEntity(81U);
    msg.beam_width = 0.5481675238016824;
    msg.beam_height = 0.8385744597510029;

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
    msg.setTimeStamp(0.8788327959864273);
    msg.setSource(24207U);
    msg.setSourceEntity(9U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(136U);
    msg.beam_width = 0.1958502901031075;
    msg.beam_height = 0.4948911947395921;

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
    msg.setTimeStamp(0.4880018305787287);
    msg.setSource(50640U);
    msg.setSourceEntity(154U);
    msg.setDestination(10020U);
    msg.setDestinationEntity(188U);
    msg.sane = 79U;

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
    msg.setTimeStamp(0.2074522027432375);
    msg.setSource(29568U);
    msg.setSourceEntity(139U);
    msg.setDestination(29955U);
    msg.setDestinationEntity(22U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.7550869286770082);
    msg.setSource(45839U);
    msg.setSourceEntity(4U);
    msg.setDestination(34755U);
    msg.setDestinationEntity(221U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.4385671428950563);
    msg.setSource(40257U);
    msg.setSourceEntity(52U);
    msg.setDestination(59441U);
    msg.setDestinationEntity(141U);
    msg.value = 0.992352660472848;

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
    msg.setTimeStamp(0.6057700819058162);
    msg.setSource(48345U);
    msg.setSourceEntity(197U);
    msg.setDestination(58228U);
    msg.setDestinationEntity(105U);
    msg.value = 0.8608206499865216;

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
    msg.setTimeStamp(0.7380810710237751);
    msg.setSource(44304U);
    msg.setSourceEntity(108U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(63U);
    msg.value = 0.1296850557942083;

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
    msg.setTimeStamp(0.17048579777160022);
    msg.setSource(16680U);
    msg.setSourceEntity(198U);
    msg.setDestination(64850U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9344965086415717;

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
    msg.setTimeStamp(0.4226045056327541);
    msg.setSource(20064U);
    msg.setSourceEntity(250U);
    msg.setDestination(56520U);
    msg.setDestinationEntity(110U);
    msg.value = 0.15445388898216683;

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
    msg.setTimeStamp(0.2736535887269176);
    msg.setSource(32230U);
    msg.setSourceEntity(58U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6921778824588719;

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
    msg.setTimeStamp(0.12366766268356821);
    msg.setSource(32188U);
    msg.setSourceEntity(14U);
    msg.setDestination(45556U);
    msg.setDestinationEntity(169U);
    msg.value = 0.8830353359116087;

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
    msg.setTimeStamp(0.9137135941785323);
    msg.setSource(52340U);
    msg.setSourceEntity(193U);
    msg.setDestination(1299U);
    msg.setDestinationEntity(169U);
    msg.value = 0.5541855932311874;

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
    msg.setTimeStamp(0.786701322287978);
    msg.setSource(1330U);
    msg.setSourceEntity(124U);
    msg.setDestination(12691U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5307740800630975;

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
    msg.setTimeStamp(0.6263781293033096);
    msg.setSource(60583U);
    msg.setSourceEntity(168U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(174U);
    msg.value = 0.01950497692124098;

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
    msg.setTimeStamp(0.5060311798239537);
    msg.setSource(36669U);
    msg.setSourceEntity(235U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(181U);
    msg.value = 0.37869352772114706;

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
    msg.setTimeStamp(0.461167626819432);
    msg.setSource(31713U);
    msg.setSourceEntity(210U);
    msg.setDestination(53027U);
    msg.setDestinationEntity(245U);
    msg.value = 0.6445036738331956;

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
    msg.setTimeStamp(0.969303650950231);
    msg.setSource(56695U);
    msg.setSourceEntity(83U);
    msg.setDestination(26773U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8919574583899038;

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
    msg.setTimeStamp(0.24831023027851518);
    msg.setSource(10364U);
    msg.setSourceEntity(97U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(83U);
    msg.value = 0.315264943696391;

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
    msg.setTimeStamp(0.877975449701788);
    msg.setSource(52361U);
    msg.setSourceEntity(105U);
    msg.setDestination(28061U);
    msg.setDestinationEntity(159U);
    msg.value = 0.49246417367876516;

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
    msg.setTimeStamp(0.5998903003077687);
    msg.setSource(60907U);
    msg.setSourceEntity(86U);
    msg.setDestination(26546U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6602843016762509;

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
    msg.setTimeStamp(0.3744144948600796);
    msg.setSource(44179U);
    msg.setSourceEntity(156U);
    msg.setDestination(5330U);
    msg.setDestinationEntity(85U);
    msg.value = 0.4526373067225705;

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
    msg.setTimeStamp(0.039443234474881406);
    msg.setSource(48156U);
    msg.setSourceEntity(179U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7152829974035122;

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
    msg.setTimeStamp(0.6919849988158745);
    msg.setSource(32536U);
    msg.setSourceEntity(253U);
    msg.setDestination(296U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9428971721065859;

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
    msg.setTimeStamp(0.38508109614619823);
    msg.setSource(49540U);
    msg.setSourceEntity(49U);
    msg.setDestination(38579U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7063315875204238;

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
    msg.setTimeStamp(0.46957445354652105);
    msg.setSource(35232U);
    msg.setSourceEntity(34U);
    msg.setDestination(37293U);
    msg.setDestinationEntity(74U);
    msg.value = 0.515541088627977;

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
    msg.setTimeStamp(0.9996940086719119);
    msg.setSource(18417U);
    msg.setSourceEntity(93U);
    msg.setDestination(52266U);
    msg.setDestinationEntity(81U);
    msg.value = 0.39181083942523165;

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
    msg.setTimeStamp(0.521274122914461);
    msg.setSource(62789U);
    msg.setSourceEntity(197U);
    msg.setDestination(18906U);
    msg.setDestinationEntity(153U);
    msg.value = 0.35498573616507956;

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
    msg.setTimeStamp(0.7442993190855968);
    msg.setSource(29522U);
    msg.setSourceEntity(54U);
    msg.setDestination(3060U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7737368962286341;

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
    msg.setTimeStamp(0.4618221304423531);
    msg.setSource(31717U);
    msg.setSourceEntity(215U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(73U);
    msg.validity = 25822U;
    msg.type = 86U;
    msg.tow = 1273859864U;
    msg.base_lat = 0.05626536515815639;
    msg.base_lon = 0.6437201014740768;
    msg.base_height = 0.048715345267372534;
    msg.n = 0.058809243095488406;
    msg.e = 0.8766008315655589;
    msg.d = 0.8638270221984378;
    msg.v_n = 0.7438771277212904;
    msg.v_e = 0.8383181270265304;
    msg.v_d = 0.2253186355058967;
    msg.satellites = 173U;
    msg.iar_hyp = 43804U;
    msg.iar_ratio = 0.19120064537814707;

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
    msg.setTimeStamp(0.27794810824681526);
    msg.setSource(42397U);
    msg.setSourceEntity(81U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(94U);
    msg.validity = 40335U;
    msg.type = 47U;
    msg.tow = 2707175774U;
    msg.base_lat = 0.4938072796795865;
    msg.base_lon = 0.4563427274513564;
    msg.base_height = 0.08575834979321006;
    msg.n = 0.26749402636898845;
    msg.e = 0.3248965469456062;
    msg.d = 0.05322551693206157;
    msg.v_n = 0.7720520656631487;
    msg.v_e = 0.42594994826290433;
    msg.v_d = 0.23450521930670276;
    msg.satellites = 169U;
    msg.iar_hyp = 54213U;
    msg.iar_ratio = 0.8199253958766263;

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
    msg.setTimeStamp(0.5623250103903297);
    msg.setSource(47244U);
    msg.setSourceEntity(3U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(124U);
    msg.validity = 18834U;
    msg.type = 120U;
    msg.tow = 1948999417U;
    msg.base_lat = 0.0250783264244141;
    msg.base_lon = 0.8797772489775904;
    msg.base_height = 0.1494949358167731;
    msg.n = 0.06780520370522503;
    msg.e = 0.06930062536244086;
    msg.d = 0.7058460615044008;
    msg.v_n = 0.3049309717145331;
    msg.v_e = 0.30447457014361345;
    msg.v_d = 0.36230215665833687;
    msg.satellites = 155U;
    msg.iar_hyp = 55418U;
    msg.iar_ratio = 0.9567720876657779;

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
    msg.setTimeStamp(0.3188583952889047);
    msg.setSource(42511U);
    msg.setSourceEntity(121U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(9U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.11572939718267583;
    tmp_msg_0.lon = 0.4212186497032617;
    tmp_msg_0.height = 0.8459518149680593;
    tmp_msg_0.x = 0.4556829709581809;
    tmp_msg_0.y = 0.4947956172695339;
    tmp_msg_0.z = 0.018641739328960738;
    tmp_msg_0.phi = 0.22013530325352515;
    tmp_msg_0.theta = 0.0003843415512700954;
    tmp_msg_0.psi = 0.5177857491226178;
    tmp_msg_0.u = 0.7619791283542553;
    tmp_msg_0.v = 0.8687814147518242;
    tmp_msg_0.w = 0.8060848880966553;
    tmp_msg_0.vx = 0.9016740651577545;
    tmp_msg_0.vy = 0.24866376969044457;
    tmp_msg_0.vz = 0.17148140911625553;
    tmp_msg_0.p = 0.14996466254131235;
    tmp_msg_0.q = 0.47622341394267187;
    tmp_msg_0.r = 0.3842364271831482;
    tmp_msg_0.depth = 0.5700639278531661;
    tmp_msg_0.alt = 0.8080714402929535;
    msg.state.set(tmp_msg_0);
    msg.type = 204U;

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
    msg.setTimeStamp(0.23216047544684326);
    msg.setSource(12251U);
    msg.setSourceEntity(61U);
    msg.setDestination(6046U);
    msg.setDestinationEntity(239U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.10102959215618945;
    tmp_msg_0.lon = 0.509884318258654;
    tmp_msg_0.height = 0.08147654212522026;
    tmp_msg_0.x = 0.3520326354254606;
    tmp_msg_0.y = 0.45647505956381085;
    tmp_msg_0.z = 0.34109514906754745;
    tmp_msg_0.phi = 0.7503024886229301;
    tmp_msg_0.theta = 0.6173164081067358;
    tmp_msg_0.psi = 0.7295376230135899;
    tmp_msg_0.u = 0.62237275026623;
    tmp_msg_0.v = 0.32512340425308073;
    tmp_msg_0.w = 0.46228524124490533;
    tmp_msg_0.vx = 0.5879959072223588;
    tmp_msg_0.vy = 0.8373992877945581;
    tmp_msg_0.vz = 0.4792808628288461;
    tmp_msg_0.p = 0.2292206908430443;
    tmp_msg_0.q = 0.9721167286637241;
    tmp_msg_0.r = 0.3728815944083579;
    tmp_msg_0.depth = 0.8521524454838472;
    tmp_msg_0.alt = 0.9693339417359105;
    msg.state.set(tmp_msg_0);
    msg.type = 98U;

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
    msg.setTimeStamp(0.9511135996556854);
    msg.setSource(8121U);
    msg.setSourceEntity(242U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(226U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6854907553935498;
    tmp_msg_0.lon = 0.6128384811403333;
    tmp_msg_0.height = 0.37243683155641594;
    tmp_msg_0.x = 0.23758332239086855;
    tmp_msg_0.y = 0.40534833869264575;
    tmp_msg_0.z = 0.9132756243893825;
    tmp_msg_0.phi = 0.6491444724532566;
    tmp_msg_0.theta = 0.1363510705462796;
    tmp_msg_0.psi = 0.5346282358699008;
    tmp_msg_0.u = 0.9889081597461004;
    tmp_msg_0.v = 0.73611317738768;
    tmp_msg_0.w = 0.36998548323407254;
    tmp_msg_0.vx = 0.06732073038796815;
    tmp_msg_0.vy = 0.3920673690299039;
    tmp_msg_0.vz = 0.4160184972240576;
    tmp_msg_0.p = 0.8696119859639074;
    tmp_msg_0.q = 0.8219504435406014;
    tmp_msg_0.r = 0.571048400316098;
    tmp_msg_0.depth = 0.3259287385302918;
    tmp_msg_0.alt = 0.401716714463652;
    msg.state.set(tmp_msg_0);
    msg.type = 80U;

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
    msg.setTimeStamp(0.8934439287182624);
    msg.setSource(33944U);
    msg.setSourceEntity(25U);
    msg.setDestination(20778U);
    msg.setDestinationEntity(236U);
    msg.value = 0.997471714822077;

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
    msg.setTimeStamp(0.9384883820849148);
    msg.setSource(24825U);
    msg.setSourceEntity(156U);
    msg.setDestination(4162U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5555234733590398;

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
    msg.setTimeStamp(0.5838436077499402);
    msg.setSource(46526U);
    msg.setSourceEntity(145U);
    msg.setDestination(32874U);
    msg.setDestinationEntity(157U);
    msg.value = 0.28672442202894266;

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
    msg.setTimeStamp(0.8345808316175893);
    msg.setSource(8608U);
    msg.setSourceEntity(54U);
    msg.setDestination(40111U);
    msg.setDestinationEntity(95U);
    msg.value = 0.10481817169071583;

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
    msg.setTimeStamp(0.4027108153694643);
    msg.setSource(61113U);
    msg.setSourceEntity(128U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(170U);
    msg.value = 0.09848415803834731;

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
    msg.setTimeStamp(0.341974998223061);
    msg.setSource(42736U);
    msg.setSourceEntity(68U);
    msg.setDestination(62381U);
    msg.setDestinationEntity(103U);
    msg.value = 0.1472259523225229;

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
    msg.setTimeStamp(0.16088151207803436);
    msg.setSource(24550U);
    msg.setSourceEntity(249U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6317164778459545;

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
    msg.setTimeStamp(0.4336325825736861);
    msg.setSource(55958U);
    msg.setSourceEntity(250U);
    msg.setDestination(52845U);
    msg.setDestinationEntity(77U);
    msg.value = 0.33233112558467526;

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
    msg.setTimeStamp(0.4140707220839732);
    msg.setSource(14457U);
    msg.setSourceEntity(60U);
    msg.setDestination(32882U);
    msg.setDestinationEntity(187U);
    msg.value = 0.8232920877053537;

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
    msg.setTimeStamp(0.32530135510607994);
    msg.setSource(52874U);
    msg.setSourceEntity(119U);
    msg.setDestination(39894U);
    msg.setDestinationEntity(21U);
    msg.value = 0.5545394365218368;

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
    msg.setTimeStamp(0.46949116415422376);
    msg.setSource(58978U);
    msg.setSourceEntity(7U);
    msg.setDestination(35931U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0618774095786897;

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
    msg.setTimeStamp(0.2598331604895483);
    msg.setSource(39180U);
    msg.setSourceEntity(72U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(77U);
    msg.value = 0.36338418590680066;

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
    msg.setTimeStamp(0.8847105441786124);
    msg.setSource(31618U);
    msg.setSourceEntity(0U);
    msg.setDestination(6510U);
    msg.setDestinationEntity(49U);
    msg.value = 0.5596459878066299;

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
    msg.setTimeStamp(0.22835279261412988);
    msg.setSource(23386U);
    msg.setSourceEntity(124U);
    msg.setDestination(31774U);
    msg.setDestinationEntity(223U);
    msg.value = 0.23868867155194962;

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
    msg.setTimeStamp(0.058053397424129516);
    msg.setSource(15415U);
    msg.setSourceEntity(134U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5463039701792781;

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
    msg.setTimeStamp(0.001805356110595402);
    msg.setSource(54764U);
    msg.setSourceEntity(41U);
    msg.setDestination(29068U);
    msg.setDestinationEntity(72U);
    msg.id = 179U;
    msg.zoom = 4U;
    msg.action = 63U;

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
    msg.setTimeStamp(0.4540996084881169);
    msg.setSource(27586U);
    msg.setSourceEntity(204U);
    msg.setDestination(26175U);
    msg.setDestinationEntity(192U);
    msg.id = 192U;
    msg.zoom = 106U;
    msg.action = 55U;

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
    msg.setTimeStamp(0.1654798616759351);
    msg.setSource(8468U);
    msg.setSourceEntity(116U);
    msg.setDestination(39953U);
    msg.setDestinationEntity(163U);
    msg.id = 55U;
    msg.zoom = 53U;
    msg.action = 23U;

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
    msg.setTimeStamp(0.9403478877036546);
    msg.setSource(813U);
    msg.setSourceEntity(195U);
    msg.setDestination(62943U);
    msg.setDestinationEntity(66U);
    msg.id = 37U;
    msg.value = 0.7947538667676562;

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
    msg.setTimeStamp(0.15116003176322856);
    msg.setSource(1670U);
    msg.setSourceEntity(244U);
    msg.setDestination(21496U);
    msg.setDestinationEntity(25U);
    msg.id = 66U;
    msg.value = 0.14657039611385236;

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
    msg.setTimeStamp(0.39066013010772793);
    msg.setSource(19870U);
    msg.setSourceEntity(147U);
    msg.setDestination(6530U);
    msg.setDestinationEntity(117U);
    msg.id = 167U;
    msg.value = 0.3599961556742691;

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
    msg.setTimeStamp(0.3401537673732211);
    msg.setSource(51130U);
    msg.setSourceEntity(193U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(15U);
    msg.id = 159U;
    msg.value = 0.9246081915219132;

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
    msg.setTimeStamp(0.9720726909015615);
    msg.setSource(36343U);
    msg.setSourceEntity(44U);
    msg.setDestination(47619U);
    msg.setDestinationEntity(142U);
    msg.id = 237U;
    msg.value = 0.6883221322651614;

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
    msg.setTimeStamp(0.9689062627327185);
    msg.setSource(39316U);
    msg.setSourceEntity(51U);
    msg.setDestination(19817U);
    msg.setDestinationEntity(27U);
    msg.id = 148U;
    msg.value = 0.28488336447463225;

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
    msg.setTimeStamp(0.7708899996692795);
    msg.setSource(34928U);
    msg.setSourceEntity(123U);
    msg.setDestination(22171U);
    msg.setDestinationEntity(176U);
    msg.id = 160U;
    msg.angle = 0.8511244466152675;

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
    msg.setTimeStamp(0.8697669691590512);
    msg.setSource(64651U);
    msg.setSourceEntity(150U);
    msg.setDestination(15190U);
    msg.setDestinationEntity(160U);
    msg.id = 15U;
    msg.angle = 0.2927967540870292;

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
    msg.setTimeStamp(0.1715020796892175);
    msg.setSource(33372U);
    msg.setSourceEntity(68U);
    msg.setDestination(19025U);
    msg.setDestinationEntity(92U);
    msg.id = 104U;
    msg.angle = 0.25628573640134866;

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
    msg.setTimeStamp(0.4364654159335636);
    msg.setSource(31583U);
    msg.setSourceEntity(158U);
    msg.setDestination(18873U);
    msg.setDestinationEntity(76U);
    msg.op = 82U;
    msg.actions.assign("LQUCERHRQIVDHTGMJHDJNZPKBQPXLXRFQBLTGKZMRWMCTVVJXIPZRULNABOAACXUOBFPVSXTOESWDXMDNMWGOYLGUEKSSG");

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
    msg.setTimeStamp(0.954050171629427);
    msg.setSource(45307U);
    msg.setSourceEntity(87U);
    msg.setDestination(6324U);
    msg.setDestinationEntity(192U);
    msg.op = 12U;
    msg.actions.assign("WIFUBTVRQWAEOWYUROCAWQWOPFUTVYBSUIMGWAXUAGKFHVVXGLOYLDSDIGSLQCTFDBNBKDR");

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
    msg.setTimeStamp(0.07232587002949986);
    msg.setSource(57624U);
    msg.setSourceEntity(15U);
    msg.setDestination(18465U);
    msg.setDestinationEntity(97U);
    msg.op = 24U;
    msg.actions.assign("QJYDDQWTYUQWGHAORMTRUVACYTIKMLNJQUYZJLXPUKTKCQEOZEISRJKCMXUCXDGGFNAIPOEPMXSSAHHULIFZBVFAPIWDPXTRWSQPKLKXGOGJGBAOBCHGDZBZIZWPX");

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
    msg.setTimeStamp(0.5925718391632936);
    msg.setSource(53505U);
    msg.setSourceEntity(217U);
    msg.setDestination(36846U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("JJHTYBMONWWLJVMFHQANUQKAJYWWUNCXTEMISKOINGROBQZSHOCALKHCKLXIODIRAOSZPPIGJRCGTMBCXQCLVSERUYBPQRUAXOPNLMZBGWXTOYWBJSEZBPVVGUNTVQDUWTIYEHLACFIMDLHFWTIDV");

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
    msg.setTimeStamp(0.03003586868082264);
    msg.setSource(61202U);
    msg.setSourceEntity(229U);
    msg.setDestination(26413U);
    msg.setDestinationEntity(205U);
    msg.actions.assign("QMWHHXFWEMDHGLATKAQDKXKFPJOVCLSZYENPRHUNEBSBHNDJKP");

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
    msg.setTimeStamp(0.004077076188801265);
    msg.setSource(42684U);
    msg.setSourceEntity(14U);
    msg.setDestination(19652U);
    msg.setDestinationEntity(208U);
    msg.actions.assign("WLIOLYEQKRRANHIXXJIDSWWRHHUSOVTPUHZVQNVOSOMOBEDCIXGBNDAUMJJBVRALQZXJYWTEFGLU");

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
    msg.setTimeStamp(0.3511099346987383);
    msg.setSource(17122U);
    msg.setSourceEntity(55U);
    msg.setDestination(53579U);
    msg.setDestinationEntity(12U);
    msg.button = 198U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.4759996763592077);
    msg.setSource(9592U);
    msg.setSourceEntity(58U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(167U);
    msg.button = 212U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.5752856406669518);
    msg.setSource(18389U);
    msg.setSourceEntity(49U);
    msg.setDestination(28148U);
    msg.setDestinationEntity(172U);
    msg.button = 254U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.9549663832012389);
    msg.setSource(54660U);
    msg.setSourceEntity(251U);
    msg.setDestination(18812U);
    msg.setDestinationEntity(92U);
    msg.op = 215U;
    msg.text.assign("PVNEGHNEFONZUVGNTYBT");

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
    msg.setTimeStamp(0.2624136184519258);
    msg.setSource(45734U);
    msg.setSourceEntity(192U);
    msg.setDestination(18550U);
    msg.setDestinationEntity(253U);
    msg.op = 73U;
    msg.text.assign("EBKZIVGYAHJYGLDSRHFVISQIJXSEUFTHWMZMBUDNLKNPXRYNAVZWTDMTHJXXOFQQJUWRBHOASZUPTSKMDZJNZQGIHRAXCTEJGLOBVRPTCXPDOUNVEZOLKYTWEUZCLCPMRYNHVRYLJPKLWWRFGVVBSQJQMESWCZSWRDMUPAIHWICGPYLGAIQAPXLGFQQHJABGFITF");

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
    msg.setTimeStamp(0.6239306383668121);
    msg.setSource(10806U);
    msg.setSourceEntity(130U);
    msg.setDestination(3173U);
    msg.setDestinationEntity(163U);
    msg.op = 184U;
    msg.text.assign("HWNSLFUUOYUTZIMGFJPZKQWEOUFACERZWHVBHHBISHFTGUQOVJQKPBIEFEVUWGLLSEDDSJSCPLAMZRYBTIZJOETZLYVMSVKPMAFTCQRIHUGTEXJYKOFBGSMUBLBXQNYRMTVXXIAYGZYKZXYNLXUFKXAZEKMSHOHDKDOWCVCNMCIVAGIAFOMXGIPDRDWNJUCXZGYKEOPQNJSBTRJ");

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
    msg.setTimeStamp(0.987347429812601);
    msg.setSource(62467U);
    msg.setSourceEntity(176U);
    msg.setDestination(11558U);
    msg.setDestinationEntity(231U);
    msg.op = 95U;
    msg.time_remain = 0.6730705319865925;
    msg.sched_time = 0.6867071193504445;

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
    msg.setTimeStamp(0.2770703175005311);
    msg.setSource(45311U);
    msg.setSourceEntity(244U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(245U);
    msg.op = 219U;
    msg.time_remain = 0.19235278968247171;
    msg.sched_time = 0.638349089484278;

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
    msg.setTimeStamp(0.8981875626537297);
    msg.setSource(38689U);
    msg.setSourceEntity(174U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(69U);
    msg.op = 231U;
    msg.time_remain = 0.06368574764720569;
    msg.sched_time = 0.18116813394970854;

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
    msg.setTimeStamp(0.8898232140479303);
    msg.setSource(43401U);
    msg.setSourceEntity(44U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(254U);
    msg.name.assign("SLUVYEYYHJNHGVEPYJATCQOUQBCYIWNQQXJMQXWWBJYIGVXHMNNPUCDLPAGSRTGZWRZLTFOLZBBDAPGIFAQCACAOFEPDEZPQMHR");
    msg.op = 19U;
    msg.sched_time = 0.43203826925368827;

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
    msg.setTimeStamp(0.2890328532435489);
    msg.setSource(48957U);
    msg.setSourceEntity(118U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(253U);
    msg.name.assign("UKEOLHGIYKSTVNMVQOIMZJOIYFQNNUWECTCYYZKRHLTMOJJPAMGEPJWWRFIUAQQYQAPDLSTLZMHBFUEBTKFZXBBGLXRYPQEKNXZYQGVDC");
    msg.op = 25U;
    msg.sched_time = 0.6270821461488304;

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
    msg.setTimeStamp(0.21764179269506267);
    msg.setSource(14953U);
    msg.setSourceEntity(57U);
    msg.setDestination(44346U);
    msg.setDestinationEntity(213U);
    msg.name.assign("BMIUQEBUWPTFKHHVVXXXONIMATUGDVZHYKBPDZCXITRUTDELNPIVCAGZYUIDXETJSBQJZJWUQRPLXYQPECVQNWPFMDOZQONLKGAYJSKDHOFZGSO");
    msg.op = 52U;
    msg.sched_time = 0.5348696397215612;

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
    msg.setTimeStamp(0.7176895453996727);
    msg.setSource(55844U);
    msg.setSourceEntity(218U);
    msg.setDestination(63319U);
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
    msg.setTimeStamp(0.8931339427057403);
    msg.setSource(63763U);
    msg.setSourceEntity(41U);
    msg.setDestination(43393U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.49026435135634994);
    msg.setSource(43457U);
    msg.setSourceEntity(112U);
    msg.setDestination(9182U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.8350769241847735);
    msg.setSource(27065U);
    msg.setSourceEntity(215U);
    msg.setDestination(16767U);
    msg.setDestinationEntity(157U);
    msg.name.assign("YGPGEHJOGZZBYVRDVRCLNASYMDHOLNWTNJHJEIVELSOBDOAAJLMJITRWXWGPCTDCSDZTSRQLUZMQUPAQFFOKXHHKMWYADQRSIKGBQABKVTILCUJGZPGFZASDMXHPEMZJCFCIHOUKYTZX");
    msg.state = 171U;

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
    msg.setTimeStamp(0.732895010214002);
    msg.setSource(9599U);
    msg.setSourceEntity(23U);
    msg.setDestination(15199U);
    msg.setDestinationEntity(233U);
    msg.name.assign("ZOMFISNGUBLXML");
    msg.state = 162U;

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
    msg.setTimeStamp(0.4969129163958461);
    msg.setSource(6802U);
    msg.setSourceEntity(106U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(122U);
    msg.name.assign("NUYGGCEXKNXBRAYUOKULISKLPIFDTBYYLWAQQWXEPFRTIS");
    msg.state = 228U;

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
    msg.setTimeStamp(0.050040694035475064);
    msg.setSource(25203U);
    msg.setSourceEntity(144U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(237U);
    msg.name.assign("TPTODOVFTPLPHKZQABHALDVNSQSRKICXPZWSLOQYEMNNQSGHTYQGKGDUQXZICWGJZMUNKRXAKOLEJBCRLSPEWMXQFUYCKWVAGBEAIJOOKIOQVOCSHWMEAMBWZVFNPFXIIJMBHICJSAHBHUDXEJVNWWYDUJUCQXQRLJTLXHGJGDSWYKCMXBPPVFCUTMZRZERZFOVYDEFRIBUMTNUNDYVFE");
    msg.value = 184U;

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
    msg.setTimeStamp(0.1343890693753642);
    msg.setSource(6792U);
    msg.setSourceEntity(135U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(32U);
    msg.name.assign("NNNJUWLGIKGMZEWRXHHTURLYFJDIZADVJUCPWYBIXWJYECGYGLBZVYMLI");
    msg.value = 104U;

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
    msg.setTimeStamp(0.6277908924380539);
    msg.setSource(60888U);
    msg.setSourceEntity(56U);
    msg.setDestination(64674U);
    msg.setDestinationEntity(98U);
    msg.name.assign("EKIFOWJGEZFZSXJTKJQAMINLEFZRHZJNMHKFUHUGDMEORRXUIATMYDFLPWMCQANTCRPCAPCLFENRVWOYGTSPIGYPWPUYSRHQSVYVFRECBSXLBONQUVJRCUAUJXWNLOKWGCULBGOWYJEZWTDGOSXIIYVNHBVULAXCGKPAQJYQHMY");
    msg.value = 92U;

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
    msg.setTimeStamp(0.06858353241537185);
    msg.setSource(42700U);
    msg.setSourceEntity(218U);
    msg.setDestination(57792U);
    msg.setDestinationEntity(126U);
    msg.name.assign("HBCYISIAXSZPFSEGPJUQRYHMTUYTSOTNMLTLDSLBOFWKGEPRFNWFILPFPXPIRRPXNFNTGVLHWZEWKKZBWBIVRRIQVTBXVIODAEZXMHSDJTEGXUUAGKIKTROKVZGUNGMLJKDRMQHLDICGWKVOEJKGZUNZWXAGHUYINQWYAHSXVQLYZUDDTHCJCBVCCJBOCUQMAPSLENXDXKDVACRJYUJZAASHYMOPQJQFFTNLMC");

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
    msg.setTimeStamp(0.2637040100477699);
    msg.setSource(32943U);
    msg.setSourceEntity(96U);
    msg.setDestination(51868U);
    msg.setDestinationEntity(60U);
    msg.name.assign("HMNMXIEROFEEUSKSYENBDHQWEJIVDDUPKATUALSMGMKXWOUVVNIRSKQOXZRTWRPRCUKPZZDWHLXDQXVQZCTLQTNUFEIVSAKJRNGOJCXDUIGOJVEQLNOOYHCINRCBTIPDMWOMTWKZZUYWQKYQHFILLJHEAGHFUPMFPYFOAXRIFKLBTGVWHZPSLDATBMPFMFQHCYGRHZBXJPEGNRVCCZWTDXLXJSJYBAEGVNJUKBCDIMQ");

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
    msg.setTimeStamp(0.8307958010305286);
    msg.setSource(54578U);
    msg.setSourceEntity(87U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(171U);
    msg.name.assign("UZFFXSRBLODGYSTMHHXXHGKZMTQNQMPNBHQVUPMNIIDFWHEYWBDDXSTWJQWZUTAYOACAYXKKVHYUBJVWTSFHDLWACZCSZVHLXWXZRLXESPWPJTYRJPRNOFJXEGMNNKCPGAUEAVEHGIERLJDOZUVQRCIVOBMBKJDCLJKODGOJBBVEKIJUETZPPUWYNKOQGQTBDBSIFZKGFSLVENZYSORQCMKSLFOAUYDCTRITIFAGMGUPHCMFLRIWNICPAYQQV");

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
    msg.setTimeStamp(0.2400807194881488);
    msg.setSource(28041U);
    msg.setSourceEntity(93U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(61U);
    msg.name.assign("UHGMBWKTRJJOXPHRWCCCHQOZJRXMTCQWSDBKGRLSOVPTINZKTPDFXFIXIIEHABYREEBHEEVHMTSSOKPOYN");
    msg.value = 218U;

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
    msg.setTimeStamp(0.3215123766556237);
    msg.setSource(51674U);
    msg.setSourceEntity(175U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NWDWEGARSVRDYFYSSQZHXNBRZLDRCCTHTBAUTUKCDSRKXXQQTJWKXYIFXVIUMNXORKYH");
    msg.value = 141U;

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
    msg.setTimeStamp(0.8891865691221649);
    msg.setSource(48558U);
    msg.setSourceEntity(64U);
    msg.setDestination(57498U);
    msg.setDestinationEntity(6U);
    msg.name.assign("TNSUZKLDQPACSMMUVDPA");
    msg.value = 168U;

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
    msg.setTimeStamp(0.26158720923836565);
    msg.setSource(35002U);
    msg.setSourceEntity(46U);
    msg.setDestination(58970U);
    msg.setDestinationEntity(165U);
    msg.id = 190U;
    msg.period = 3428471609U;
    msg.duty_cycle = 176286884U;

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
    msg.setTimeStamp(0.4105399235840206);
    msg.setSource(43920U);
    msg.setSourceEntity(88U);
    msg.setDestination(57611U);
    msg.setDestinationEntity(92U);
    msg.id = 191U;
    msg.period = 2033136713U;
    msg.duty_cycle = 2258471656U;

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
    msg.setTimeStamp(0.74261269810054);
    msg.setSource(19277U);
    msg.setSourceEntity(60U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(75U);
    msg.id = 1U;
    msg.period = 1769943412U;
    msg.duty_cycle = 1228002362U;

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
    msg.setTimeStamp(0.19085310245936493);
    msg.setSource(32901U);
    msg.setSourceEntity(106U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(123U);
    msg.id = 194U;
    msg.period = 2993913794U;
    msg.duty_cycle = 1366698238U;

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
    msg.setTimeStamp(0.2585242545872938);
    msg.setSource(42043U);
    msg.setSourceEntity(149U);
    msg.setDestination(10060U);
    msg.setDestinationEntity(65U);
    msg.id = 154U;
    msg.period = 1687603479U;
    msg.duty_cycle = 1693485877U;

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
    msg.setTimeStamp(0.2626767196648455);
    msg.setSource(5628U);
    msg.setSourceEntity(221U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(118U);
    msg.id = 55U;
    msg.period = 2027082624U;
    msg.duty_cycle = 603168670U;

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
    msg.setTimeStamp(0.015026980465549733);
    msg.setSource(46210U);
    msg.setSourceEntity(250U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.6365120417511843;
    msg.lon = 0.8511568862564606;
    msg.height = 0.907870566467429;
    msg.x = 0.7605743955198521;
    msg.y = 0.49840288172166936;
    msg.z = 0.5508744226387798;
    msg.phi = 0.6954381497894545;
    msg.theta = 0.12048833299088135;
    msg.psi = 0.46270424670638477;
    msg.u = 0.8749746596197314;
    msg.v = 0.3515833746273921;
    msg.w = 0.24033790012314227;
    msg.vx = 0.25011852840284154;
    msg.vy = 0.3817223048963878;
    msg.vz = 0.7215327785492648;
    msg.p = 0.9009258137192668;
    msg.q = 0.9496942623725123;
    msg.r = 0.7487066974577873;
    msg.depth = 0.9297722534768849;
    msg.alt = 0.03527115320012719;

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
    msg.setTimeStamp(0.716696380111416);
    msg.setSource(2764U);
    msg.setSourceEntity(109U);
    msg.setDestination(4016U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9580972632343366;
    msg.lon = 0.6789585515105666;
    msg.height = 0.9547709420602498;
    msg.x = 0.9109734397624152;
    msg.y = 0.3333046600170747;
    msg.z = 0.9493155819026874;
    msg.phi = 0.9073247937635429;
    msg.theta = 0.9097936559111655;
    msg.psi = 0.7837711857968682;
    msg.u = 0.7685204343735121;
    msg.v = 0.8581540389064893;
    msg.w = 0.03462255054789898;
    msg.vx = 0.17107368489202535;
    msg.vy = 0.3543767919566081;
    msg.vz = 0.7039236510468743;
    msg.p = 0.4182572752943724;
    msg.q = 0.5219162216174269;
    msg.r = 0.04948338697732757;
    msg.depth = 0.16071066061308104;
    msg.alt = 0.36110394272607493;

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
    msg.setTimeStamp(0.8091595254622903);
    msg.setSource(57688U);
    msg.setSourceEntity(128U);
    msg.setDestination(41290U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.8228492556113327;
    msg.lon = 0.11055870438382143;
    msg.height = 0.5098702928116671;
    msg.x = 0.5856456432900827;
    msg.y = 0.3151523557619115;
    msg.z = 0.5471225365765459;
    msg.phi = 0.4119198264789997;
    msg.theta = 0.8524105386135057;
    msg.psi = 0.26685357012272226;
    msg.u = 0.9623499488373239;
    msg.v = 0.6478910351280517;
    msg.w = 0.43738743149836035;
    msg.vx = 0.20874989379669406;
    msg.vy = 0.8455583755600653;
    msg.vz = 0.5762388605620866;
    msg.p = 0.6904544847026721;
    msg.q = 0.3970488833013721;
    msg.r = 0.6970812714866105;
    msg.depth = 0.674562916150232;
    msg.alt = 0.7028985698251159;

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
    msg.setTimeStamp(0.7991915645398865);
    msg.setSource(12337U);
    msg.setSourceEntity(235U);
    msg.setDestination(43244U);
    msg.setDestinationEntity(34U);
    msg.x = 0.6685196492654809;
    msg.y = 0.54921937394667;
    msg.z = 0.9979835013664943;

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
    msg.setTimeStamp(0.5186627033905975);
    msg.setSource(605U);
    msg.setSourceEntity(244U);
    msg.setDestination(14209U);
    msg.setDestinationEntity(108U);
    msg.x = 0.17333982422610617;
    msg.y = 0.41225746117086304;
    msg.z = 0.7399625188510545;

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
    msg.setTimeStamp(0.9555502113728033);
    msg.setSource(60271U);
    msg.setSourceEntity(130U);
    msg.setDestination(37875U);
    msg.setDestinationEntity(253U);
    msg.x = 0.46821108731353245;
    msg.y = 0.047418008308012016;
    msg.z = 0.3221693685016451;

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
    msg.setTimeStamp(0.18542895745042665);
    msg.setSource(22663U);
    msg.setSourceEntity(120U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0862014606083834;

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
    msg.setTimeStamp(0.786772403353475);
    msg.setSource(18320U);
    msg.setSourceEntity(67U);
    msg.setDestination(35538U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6836906534490569;

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
    msg.setTimeStamp(0.7974570587445978);
    msg.setSource(61619U);
    msg.setSourceEntity(37U);
    msg.setDestination(49345U);
    msg.setDestinationEntity(250U);
    msg.value = 0.24756127187689747;

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
    msg.setTimeStamp(0.9413493553137651);
    msg.setSource(51294U);
    msg.setSourceEntity(104U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(95U);
    msg.value = 0.6206508119993767;

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
    msg.setTimeStamp(0.1996411813527893);
    msg.setSource(9351U);
    msg.setSourceEntity(20U);
    msg.setDestination(5988U);
    msg.setDestinationEntity(46U);
    msg.value = 0.07866311062419507;

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
    msg.setTimeStamp(0.2643387285820582);
    msg.setSource(23498U);
    msg.setSourceEntity(195U);
    msg.setDestination(34563U);
    msg.setDestinationEntity(132U);
    msg.value = 0.06121375739554746;

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
    msg.setTimeStamp(0.10359854615641051);
    msg.setSource(48957U);
    msg.setSourceEntity(22U);
    msg.setDestination(26614U);
    msg.setDestinationEntity(107U);
    msg.x = 0.7391530244942713;
    msg.y = 0.6310066069919542;
    msg.z = 0.073010900349879;
    msg.phi = 0.9826570472729179;
    msg.theta = 0.5338337382462017;
    msg.psi = 0.479946327955479;
    msg.p = 0.4761254900285087;
    msg.q = 0.8027036985002579;
    msg.r = 0.9829585477370872;
    msg.u = 0.13624434447520406;
    msg.v = 0.9829791414135879;
    msg.w = 0.43898562046524525;
    msg.bias_psi = 0.5783038465145224;
    msg.bias_r = 0.3274587690704891;

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
    msg.setTimeStamp(0.6264650328222207);
    msg.setSource(36559U);
    msg.setSourceEntity(159U);
    msg.setDestination(40942U);
    msg.setDestinationEntity(99U);
    msg.x = 0.27115670552685656;
    msg.y = 0.24881073936208897;
    msg.z = 0.11809627244745025;
    msg.phi = 0.7531328900847171;
    msg.theta = 0.2224428148440879;
    msg.psi = 0.003467181376912154;
    msg.p = 0.3491400689391281;
    msg.q = 0.5378347048003554;
    msg.r = 0.3020612701470985;
    msg.u = 0.21382289317724967;
    msg.v = 0.05709419920493808;
    msg.w = 0.9131930376027318;
    msg.bias_psi = 0.5982674544345058;
    msg.bias_r = 0.9090770515994528;

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
    msg.setTimeStamp(0.9699607979255529);
    msg.setSource(30277U);
    msg.setSourceEntity(111U);
    msg.setDestination(12006U);
    msg.setDestinationEntity(190U);
    msg.x = 0.6481716140666647;
    msg.y = 0.9928390834166364;
    msg.z = 0.1588711587219489;
    msg.phi = 0.8826118877054154;
    msg.theta = 0.8979469015724417;
    msg.psi = 0.4783408853223645;
    msg.p = 0.9412171830142544;
    msg.q = 0.01179508544169594;
    msg.r = 0.9530416994319574;
    msg.u = 0.28435484991965143;
    msg.v = 0.19458339064795382;
    msg.w = 0.739951415038337;
    msg.bias_psi = 0.3854009089217104;
    msg.bias_r = 0.47622342348289926;

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
    msg.setTimeStamp(0.30838412233649737);
    msg.setSource(27964U);
    msg.setSourceEntity(236U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.9708519967525754;
    msg.bias_r = 0.5881072727333722;
    msg.cog = 0.7763617108814734;
    msg.cyaw = 0.45935792550415844;
    msg.lbl_rej_level = 0.47034517909761686;
    msg.gps_rej_level = 0.38680516174915236;
    msg.custom_x = 0.21681486904740332;
    msg.custom_y = 0.4899037592269966;
    msg.custom_z = 0.8516761033480295;

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
    msg.setTimeStamp(0.6642069039263035);
    msg.setSource(43106U);
    msg.setSourceEntity(247U);
    msg.setDestination(57654U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.7579128104155194;
    msg.bias_r = 0.5272883367356634;
    msg.cog = 0.7436413863624826;
    msg.cyaw = 0.06754730418233668;
    msg.lbl_rej_level = 0.4197073992138063;
    msg.gps_rej_level = 0.1704158986967298;
    msg.custom_x = 0.390085393130154;
    msg.custom_y = 0.1609065433914756;
    msg.custom_z = 0.4274251231600258;

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
    msg.setTimeStamp(0.4735828677870707);
    msg.setSource(14319U);
    msg.setSourceEntity(192U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(5U);
    msg.bias_psi = 0.3168703003992901;
    msg.bias_r = 0.9802080173619467;
    msg.cog = 0.3616420658074928;
    msg.cyaw = 0.27408874231173375;
    msg.lbl_rej_level = 0.6568218885038004;
    msg.gps_rej_level = 0.315392852540901;
    msg.custom_x = 0.7184680957856349;
    msg.custom_y = 0.28826097430400044;
    msg.custom_z = 0.02777044398717543;

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
    msg.setTimeStamp(0.6108418004006642);
    msg.setSource(21119U);
    msg.setSourceEntity(171U);
    msg.setDestination(2266U);
    msg.setDestinationEntity(25U);
    msg.utc_time = 0.15626886864721778;
    msg.reason = 49U;

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
    msg.setTimeStamp(0.6370540763366151);
    msg.setSource(28105U);
    msg.setSourceEntity(114U);
    msg.setDestination(63466U);
    msg.setDestinationEntity(220U);
    msg.utc_time = 0.8520160048150439;
    msg.reason = 82U;

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
    msg.setTimeStamp(0.6015483545372945);
    msg.setSource(24476U);
    msg.setSourceEntity(148U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(220U);
    msg.utc_time = 0.6640357577626684;
    msg.reason = 74U;

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
    msg.setTimeStamp(0.3609274260147852);
    msg.setSource(54360U);
    msg.setSourceEntity(240U);
    msg.setDestination(30612U);
    msg.setDestinationEntity(45U);
    msg.id = 212U;
    msg.range = 0.015395933636180414;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.05440597495665178);
    msg.setSource(46036U);
    msg.setSourceEntity(127U);
    msg.setDestination(49810U);
    msg.setDestinationEntity(31U);
    msg.id = 10U;
    msg.range = 0.6488654410186081;
    msg.acceptance = 84U;

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
    msg.setTimeStamp(0.2544448911371764);
    msg.setSource(45032U);
    msg.setSourceEntity(200U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(171U);
    msg.id = 196U;
    msg.range = 0.5185859524793893;
    msg.acceptance = 160U;

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
    msg.setTimeStamp(0.9603861578227627);
    msg.setSource(34758U);
    msg.setSourceEntity(139U);
    msg.setDestination(27673U);
    msg.setDestinationEntity(82U);
    msg.type = 119U;
    msg.reason = 211U;
    msg.value = 0.33220322864600726;
    msg.timestep = 0.6427462279100619;

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
    msg.setTimeStamp(0.8199387367449855);
    msg.setSource(59576U);
    msg.setSourceEntity(183U);
    msg.setDestination(28879U);
    msg.setDestinationEntity(83U);
    msg.type = 150U;
    msg.reason = 133U;
    msg.value = 0.175063929334077;
    msg.timestep = 0.5486734771440269;

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
    msg.setTimeStamp(0.7284178467211443);
    msg.setSource(469U);
    msg.setSourceEntity(57U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(166U);
    msg.type = 2U;
    msg.reason = 223U;
    msg.value = 0.9960658698150555;
    msg.timestep = 0.9155037628475056;

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
    msg.setTimeStamp(0.49261860677562463);
    msg.setSource(7888U);
    msg.setSourceEntity(247U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(214U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WLQDICMFCZFHSVEPQFQHJWEDLFRHNJYUVNPAMARJRTLXBOLCSVBMQLXMTSNGNPQSJKZAKGDJEUKQTXYGXFFZQWUKQWJIEKEGBIVWLYYAXAHYDWIZWIQSSPPMRCUAZEARKGMBDTOKDFLBNJERCVXBTNXCGHKHO");
    tmp_msg_0.lat = 0.9378550283635328;
    tmp_msg_0.lon = 0.3105521841948512;
    tmp_msg_0.depth = 0.6281945027652462;
    tmp_msg_0.query_channel = 4U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 106U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9102775721422017;
    msg.y = 0.3867350298130102;
    msg.var_x = 0.3590718432836948;
    msg.var_y = 0.25640406958126327;
    msg.distance = 0.5090111585195514;

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
    msg.setTimeStamp(0.21573299632011522);
    msg.setSource(40171U);
    msg.setSourceEntity(79U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YIPVTSVIFBXNRIPPROZNUFPVZMDNOKQBMLGLFUYOZUSYTQOWWNHKNEHHENPGUYDMSZKDMTYJPQWJDMXJWBRJHTJQLILSG");
    tmp_msg_0.lat = 0.832179482127129;
    tmp_msg_0.lon = 0.4884352884819607;
    tmp_msg_0.depth = 0.769942821945755;
    tmp_msg_0.query_channel = 136U;
    tmp_msg_0.reply_channel = 40U;
    tmp_msg_0.transponder_delay = 22U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.19971887395381527;
    msg.y = 0.2643334947218786;
    msg.var_x = 0.00126271583735027;
    msg.var_y = 0.05425190819398973;
    msg.distance = 0.696134031502179;

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
    msg.setTimeStamp(0.7479850270641745);
    msg.setSource(17723U);
    msg.setSourceEntity(179U);
    msg.setDestination(11012U);
    msg.setDestinationEntity(159U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RJSUTPCUSMVLZGDHUFYNFOYITPPEYAXSSABFRQTQJQOABBXPBNKMGCXTWJDIBKFYQNWBNIHIRNTEYYAHIZNDHVKXAOCLYETMZXYRRFVIXHHKBNGQNMPKZEVJGWKJOHSCKQGSXSCAGLDIUADHZOZMOCHBZETDWYILCXOMQZLLDOPVSMMFRPSJDTLLJUUVFKPTLURCCVUVWEDMJKAZEWBQUOPZYRCVANRGWWFBHFJX");
    tmp_msg_0.lat = 0.1492114420950773;
    tmp_msg_0.lon = 0.5067992775207022;
    tmp_msg_0.depth = 0.0033131749288769496;
    tmp_msg_0.query_channel = 128U;
    tmp_msg_0.reply_channel = 108U;
    tmp_msg_0.transponder_delay = 185U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.625574677793518;
    msg.y = 0.7707293160266835;
    msg.var_x = 0.31440310562144647;
    msg.var_y = 0.4794085224662423;
    msg.distance = 0.15779140650806045;

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
    msg.setTimeStamp(0.4887361402195358);
    msg.setSource(47020U);
    msg.setSourceEntity(18U);
    msg.setDestination(712U);
    msg.setDestinationEntity(83U);
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
    msg.setTimeStamp(0.5462768632872721);
    msg.setSource(40139U);
    msg.setSourceEntity(91U);
    msg.setDestination(36952U);
    msg.setDestinationEntity(213U);
    msg.state = 134U;

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
    msg.setTimeStamp(0.5950116334043826);
    msg.setSource(28170U);
    msg.setSourceEntity(217U);
    msg.setDestination(16763U);
    msg.setDestinationEntity(41U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.8705582131127573);
    msg.setSource(6998U);
    msg.setSourceEntity(88U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(62U);
    msg.x = 0.8485028028453633;
    msg.y = 0.8760807614649111;
    msg.z = 0.3544451434352919;

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
    msg.setTimeStamp(0.38389470159663097);
    msg.setSource(7611U);
    msg.setSourceEntity(209U);
    msg.setDestination(24799U);
    msg.setDestinationEntity(196U);
    msg.x = 0.3288705757671696;
    msg.y = 0.5914372996799008;
    msg.z = 0.2782144986506171;

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
    msg.setTimeStamp(0.17887523066789357);
    msg.setSource(15571U);
    msg.setSourceEntity(181U);
    msg.setDestination(44372U);
    msg.setDestinationEntity(26U);
    msg.x = 0.6767187947197959;
    msg.y = 0.21646848013035258;
    msg.z = 0.7472310449148688;

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
    msg.setTimeStamp(0.7166337076102646);
    msg.setSource(53949U);
    msg.setSourceEntity(136U);
    msg.setDestination(30023U);
    msg.setDestinationEntity(65U);
    msg.va = 0.534776032661225;
    msg.aoa = 0.4386014829625261;
    msg.ssa = 0.04065448330162946;

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
    msg.setTimeStamp(0.6026396647941529);
    msg.setSource(6387U);
    msg.setSourceEntity(156U);
    msg.setDestination(13250U);
    msg.setDestinationEntity(221U);
    msg.va = 0.4812577648598121;
    msg.aoa = 0.03760316890038362;
    msg.ssa = 0.9397108040478166;

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
    msg.setTimeStamp(0.3470803035487692);
    msg.setSource(11288U);
    msg.setSourceEntity(111U);
    msg.setDestination(38342U);
    msg.setDestinationEntity(146U);
    msg.va = 0.9261775776202046;
    msg.aoa = 0.0037290086985984905;
    msg.ssa = 0.9242590713844181;

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
    msg.setTimeStamp(0.4081866923979157);
    msg.setSource(20336U);
    msg.setSourceEntity(146U);
    msg.setDestination(21997U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5907077981290347;

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
    msg.setTimeStamp(0.22055675707747868);
    msg.setSource(31517U);
    msg.setSourceEntity(35U);
    msg.setDestination(649U);
    msg.setDestinationEntity(196U);
    msg.value = 0.7967254631456686;

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
    msg.setTimeStamp(0.5401853292128919);
    msg.setSource(41181U);
    msg.setSourceEntity(252U);
    msg.setDestination(1646U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6215512000532947;

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
    msg.setTimeStamp(0.7358343010606285);
    msg.setSource(63901U);
    msg.setSourceEntity(162U);
    msg.setDestination(6088U);
    msg.setDestinationEntity(3U);
    msg.value = 0.08283185103308754;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.385451789424611);
    msg.setSource(21723U);
    msg.setSourceEntity(58U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(59U);
    msg.value = 0.04808016636419765;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.8289479189216179);
    msg.setSource(30940U);
    msg.setSourceEntity(116U);
    msg.setDestination(32920U);
    msg.setDestinationEntity(22U);
    msg.value = 0.02144388376819828;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.9737470095480648);
    msg.setSource(20286U);
    msg.setSourceEntity(103U);
    msg.setDestination(15749U);
    msg.setDestinationEntity(136U);
    msg.value = 0.07503018823052776;
    msg.speed_units = 200U;

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
    msg.setTimeStamp(0.5572990273701149);
    msg.setSource(13770U);
    msg.setSourceEntity(197U);
    msg.setDestination(26860U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8264039195018734;
    msg.speed_units = 237U;

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
    msg.setTimeStamp(0.9576324869282561);
    msg.setSource(46058U);
    msg.setSourceEntity(116U);
    msg.setDestination(38612U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4617474170299305;
    msg.speed_units = 111U;

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
    msg.setTimeStamp(0.8207378108646883);
    msg.setSource(3749U);
    msg.setSourceEntity(86U);
    msg.setDestination(24793U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9544075011982477;

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
    msg.setTimeStamp(0.04408076483309864);
    msg.setSource(58466U);
    msg.setSourceEntity(1U);
    msg.setDestination(41036U);
    msg.setDestinationEntity(178U);
    msg.value = 0.40208040424843505;

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
    msg.setTimeStamp(0.6359293979437356);
    msg.setSource(7198U);
    msg.setSourceEntity(217U);
    msg.setDestination(56222U);
    msg.setDestinationEntity(236U);
    msg.value = 0.3090889612024581;

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
    msg.setTimeStamp(0.895063765900063);
    msg.setSource(31616U);
    msg.setSourceEntity(49U);
    msg.setDestination(33594U);
    msg.setDestinationEntity(154U);
    msg.value = 0.4547802368009456;

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
    msg.setTimeStamp(0.07105444145135709);
    msg.setSource(18539U);
    msg.setSourceEntity(26U);
    msg.setDestination(14554U);
    msg.setDestinationEntity(15U);
    msg.value = 0.3459022968668688;

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
    msg.setTimeStamp(0.30578677866665394);
    msg.setSource(5965U);
    msg.setSourceEntity(128U);
    msg.setDestination(59894U);
    msg.setDestinationEntity(97U);
    msg.value = 0.04224960428526903;

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
    msg.setTimeStamp(0.09726168073930375);
    msg.setSource(46613U);
    msg.setSourceEntity(19U);
    msg.setDestination(19935U);
    msg.setDestinationEntity(200U);
    msg.value = 0.9539381120616476;

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
    msg.setTimeStamp(0.14319024751691334);
    msg.setSource(16175U);
    msg.setSourceEntity(142U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7421644100147644;

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
    msg.setTimeStamp(0.6189841036254933);
    msg.setSource(46942U);
    msg.setSourceEntity(86U);
    msg.setDestination(58649U);
    msg.setDestinationEntity(207U);
    msg.value = 0.2632536966498781;

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
    msg.setTimeStamp(0.29365606704916203);
    msg.setSource(34219U);
    msg.setSourceEntity(199U);
    msg.setDestination(12595U);
    msg.setDestinationEntity(17U);
    msg.path_ref = 1281685122U;
    msg.start_lat = 0.45656573428330915;
    msg.start_lon = 0.05577618212609625;
    msg.start_z = 0.3213153572850951;
    msg.start_z_units = 97U;
    msg.end_lat = 0.021978417706201903;
    msg.end_lon = 0.5795638581560868;
    msg.end_z = 0.5355660563053973;
    msg.end_z_units = 74U;
    msg.speed = 0.9964194766919977;
    msg.speed_units = 71U;
    msg.lradius = 0.1975093428482636;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.4473593297064916);
    msg.setSource(9021U);
    msg.setSourceEntity(17U);
    msg.setDestination(46899U);
    msg.setDestinationEntity(107U);
    msg.path_ref = 3677087896U;
    msg.start_lat = 0.08591900343771708;
    msg.start_lon = 0.4848407720505751;
    msg.start_z = 0.40202548977569863;
    msg.start_z_units = 167U;
    msg.end_lat = 0.3380839356100609;
    msg.end_lon = 0.9480367182247272;
    msg.end_z = 0.7199962565619185;
    msg.end_z_units = 230U;
    msg.speed = 0.5180198763588719;
    msg.speed_units = 215U;
    msg.lradius = 0.6644112746021764;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.17638819719278953);
    msg.setSource(8323U);
    msg.setSourceEntity(28U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(247U);
    msg.path_ref = 2255828012U;
    msg.start_lat = 0.09217009158574563;
    msg.start_lon = 0.6990493680006352;
    msg.start_z = 0.8859957444344314;
    msg.start_z_units = 234U;
    msg.end_lat = 0.5591883148293126;
    msg.end_lon = 0.2764643000175795;
    msg.end_z = 0.0979269700681098;
    msg.end_z_units = 15U;
    msg.speed = 0.7679839638762963;
    msg.speed_units = 130U;
    msg.lradius = 0.3266111034875657;
    msg.flags = 142U;

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
    msg.setTimeStamp(0.05794232360453422);
    msg.setSource(10910U);
    msg.setSourceEntity(34U);
    msg.setDestination(64659U);
    msg.setDestinationEntity(23U);
    msg.x = 0.8332862017018461;
    msg.y = 0.7450236248064352;
    msg.z = 0.3643168914682444;
    msg.k = 0.6587107941215072;
    msg.m = 0.13337577682666968;
    msg.n = 0.8623185946840205;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.34002123605196344);
    msg.setSource(25808U);
    msg.setSourceEntity(148U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(189U);
    msg.x = 0.4338712782713331;
    msg.y = 0.8155796536310977;
    msg.z = 0.8233926946785816;
    msg.k = 0.6689220785419688;
    msg.m = 0.3572364848584135;
    msg.n = 0.1566076716599597;
    msg.flags = 71U;

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
    msg.setTimeStamp(0.9039237410281157);
    msg.setSource(52148U);
    msg.setSourceEntity(101U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(89U);
    msg.x = 0.33577321112423764;
    msg.y = 0.306301144975781;
    msg.z = 0.5906882039967581;
    msg.k = 0.19516113012970215;
    msg.m = 0.21794890266994138;
    msg.n = 0.5304796902468425;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.8013024428722482);
    msg.setSource(41433U);
    msg.setSourceEntity(155U);
    msg.setDestination(45247U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8059092235391744;

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
    msg.setTimeStamp(0.1593662570880806);
    msg.setSource(21487U);
    msg.setSourceEntity(52U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7662825376486891;

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
    msg.setTimeStamp(0.08655410307893419);
    msg.setSource(19587U);
    msg.setSourceEntity(182U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(36U);
    msg.value = 0.4478992898774108;

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
    msg.setTimeStamp(0.33849661997983915);
    msg.setSource(2555U);
    msg.setSourceEntity(151U);
    msg.setDestination(57794U);
    msg.setDestinationEntity(31U);
    msg.u = 0.8392906451089722;
    msg.v = 0.5316518851150525;
    msg.w = 0.5827800239835351;
    msg.p = 0.29257525927113626;
    msg.q = 0.5701700515187031;
    msg.r = 0.8964843809256438;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.906848625396726);
    msg.setSource(51379U);
    msg.setSourceEntity(100U);
    msg.setDestination(44360U);
    msg.setDestinationEntity(219U);
    msg.u = 0.6845229431465292;
    msg.v = 0.8411406452640086;
    msg.w = 0.667246278927507;
    msg.p = 0.6888765992533982;
    msg.q = 0.37950933255226316;
    msg.r = 0.5327470434254755;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.7628529522282737);
    msg.setSource(64565U);
    msg.setSourceEntity(196U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(171U);
    msg.u = 0.9532383367818856;
    msg.v = 0.6507798847639842;
    msg.w = 0.9827750332378395;
    msg.p = 0.8137494611743399;
    msg.q = 0.4167764509094384;
    msg.r = 0.3119745301936241;
    msg.flags = 71U;

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
    msg.setTimeStamp(0.3279224769423401);
    msg.setSource(49876U);
    msg.setSourceEntity(248U);
    msg.setDestination(17807U);
    msg.setDestinationEntity(111U);
    msg.path_ref = 592895304U;
    msg.start_lat = 0.7401953083547284;
    msg.start_lon = 0.5083560291921022;
    msg.start_z = 0.2140873343797659;
    msg.start_z_units = 110U;
    msg.end_lat = 0.8114278540012936;
    msg.end_lon = 0.0918214134605363;
    msg.end_z = 0.7620512601609911;
    msg.end_z_units = 238U;
    msg.lradius = 0.05586135544869031;
    msg.flags = 18U;
    msg.x = 0.47635566710170274;
    msg.y = 0.6861108348422822;
    msg.z = 0.8973493150539592;
    msg.vx = 0.14112021379775963;
    msg.vy = 0.03277796463786964;
    msg.vz = 0.14202358632266177;
    msg.course_error = 0.4342733632416963;
    msg.eta = 19750U;

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
    msg.setTimeStamp(0.08764356254449657);
    msg.setSource(46046U);
    msg.setSourceEntity(107U);
    msg.setDestination(23472U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 2897383543U;
    msg.start_lat = 0.593686507385805;
    msg.start_lon = 0.3781765981100369;
    msg.start_z = 0.1997145935639153;
    msg.start_z_units = 132U;
    msg.end_lat = 0.2218778513044375;
    msg.end_lon = 0.022145626346513514;
    msg.end_z = 0.6516974471290722;
    msg.end_z_units = 252U;
    msg.lradius = 0.27782142188044545;
    msg.flags = 2U;
    msg.x = 0.8450412301602875;
    msg.y = 0.15764858387516312;
    msg.z = 0.4059202954408765;
    msg.vx = 0.4966894230905593;
    msg.vy = 0.9869605136252091;
    msg.vz = 0.27712021515506646;
    msg.course_error = 0.9491343337792284;
    msg.eta = 58242U;

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
    msg.setTimeStamp(0.09121171759685198);
    msg.setSource(33990U);
    msg.setSourceEntity(100U);
    msg.setDestination(58502U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 602874314U;
    msg.start_lat = 0.5500102264259868;
    msg.start_lon = 0.07891836924570372;
    msg.start_z = 0.05058187931247793;
    msg.start_z_units = 64U;
    msg.end_lat = 0.00874406266458061;
    msg.end_lon = 0.9439223274904903;
    msg.end_z = 0.867797235552195;
    msg.end_z_units = 131U;
    msg.lradius = 0.22246817225900883;
    msg.flags = 101U;
    msg.x = 0.10029658126813912;
    msg.y = 0.4156573402463736;
    msg.z = 0.26102644525367735;
    msg.vx = 0.19531105979809027;
    msg.vy = 0.5849936131743035;
    msg.vz = 0.21459067776113327;
    msg.course_error = 0.4903024316371002;
    msg.eta = 19041U;

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
    msg.setTimeStamp(0.32188133522107054);
    msg.setSource(16902U);
    msg.setSourceEntity(226U);
    msg.setDestination(65488U);
    msg.setDestinationEntity(23U);
    msg.k = 0.9149784962606469;
    msg.m = 0.4279326733310095;
    msg.n = 0.5891659749485028;

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
    msg.setTimeStamp(0.9846077441282479);
    msg.setSource(33956U);
    msg.setSourceEntity(150U);
    msg.setDestination(55391U);
    msg.setDestinationEntity(165U);
    msg.k = 0.778256105398574;
    msg.m = 0.7372549456497945;
    msg.n = 0.4956458605955151;

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
    msg.setTimeStamp(0.018880808020484308);
    msg.setSource(51875U);
    msg.setSourceEntity(89U);
    msg.setDestination(27041U);
    msg.setDestinationEntity(12U);
    msg.k = 0.5749194031233742;
    msg.m = 0.19157274624319465;
    msg.n = 0.8633301105795036;

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
    msg.setTimeStamp(0.5106252569962083);
    msg.setSource(2218U);
    msg.setSourceEntity(159U);
    msg.setDestination(18927U);
    msg.setDestinationEntity(167U);
    msg.p = 0.987212512310613;
    msg.i = 0.7055884631013968;
    msg.d = 0.8469598743517736;
    msg.a = 0.438714916506017;

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
    msg.setTimeStamp(0.38558534021953783);
    msg.setSource(52615U);
    msg.setSourceEntity(164U);
    msg.setDestination(62648U);
    msg.setDestinationEntity(219U);
    msg.p = 0.6695639415377982;
    msg.i = 0.5998390598277672;
    msg.d = 0.529743560698044;
    msg.a = 0.6402390803999035;

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
    msg.setTimeStamp(0.12503467581311634);
    msg.setSource(3771U);
    msg.setSourceEntity(216U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(29U);
    msg.p = 0.23750343683657804;
    msg.i = 0.5625724231593443;
    msg.d = 0.18809814415441495;
    msg.a = 0.8759300254649368;

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
    msg.setTimeStamp(0.2857744039431711);
    msg.setSource(48614U);
    msg.setSourceEntity(91U);
    msg.setDestination(52027U);
    msg.setDestinationEntity(18U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.08765714662425628);
    msg.setSource(1010U);
    msg.setSourceEntity(4U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(210U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.7263265841213494);
    msg.setSource(24827U);
    msg.setSourceEntity(237U);
    msg.setDestination(22811U);
    msg.setDestinationEntity(183U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.013212101685480149);
    msg.setSource(9417U);
    msg.setSourceEntity(31U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(232U);
    msg.x = 0.5506843689570474;
    msg.y = 0.11621410255388498;
    msg.z = 0.6481623951977693;
    msg.vx = 0.221491097505219;
    msg.vy = 0.684622757617452;
    msg.vz = 0.803036868525562;
    msg.ax = 0.0014802329835921224;
    msg.ay = 0.620525159435077;
    msg.az = 0.6339407275556137;
    msg.flags = 35038U;

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
    msg.setTimeStamp(0.7268224483025892);
    msg.setSource(62824U);
    msg.setSourceEntity(62U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(168U);
    msg.x = 0.8293521317886583;
    msg.y = 0.7599810794919141;
    msg.z = 0.6156841543405313;
    msg.vx = 0.815944207571465;
    msg.vy = 0.5619561510438276;
    msg.vz = 0.10965312986623643;
    msg.ax = 0.7329620826672382;
    msg.ay = 0.8918499563821644;
    msg.az = 0.992757367545749;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.24934065360368396);
    msg.setSource(4134U);
    msg.setSourceEntity(120U);
    msg.setDestination(51584U);
    msg.setDestinationEntity(13U);
    msg.x = 0.23064586431860712;
    msg.y = 0.44274427773054037;
    msg.z = 0.5356982978243253;
    msg.vx = 0.618074836256166;
    msg.vy = 0.097361707186302;
    msg.vz = 0.5964569313974049;
    msg.ax = 0.13880701527905903;
    msg.ay = 0.23244428804775452;
    msg.az = 0.14857690614357755;
    msg.flags = 61059U;

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
    msg.setTimeStamp(0.22294507983814182);
    msg.setSource(26557U);
    msg.setSourceEntity(172U);
    msg.setDestination(55696U);
    msg.setDestinationEntity(228U);
    msg.value = 0.612122958547643;

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
    msg.setTimeStamp(0.523168724414358);
    msg.setSource(49572U);
    msg.setSourceEntity(200U);
    msg.setDestination(6742U);
    msg.setDestinationEntity(13U);
    msg.value = 0.45737260087019416;

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
    msg.setTimeStamp(0.07901460968867169);
    msg.setSource(5379U);
    msg.setSourceEntity(64U);
    msg.setDestination(7364U);
    msg.setDestinationEntity(191U);
    msg.value = 0.4967585698667726;

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
    msg.setTimeStamp(0.9111880352850862);
    msg.setSource(47613U);
    msg.setSourceEntity(105U);
    msg.setDestination(62782U);
    msg.setDestinationEntity(43U);
    msg.timeout = 4949U;
    msg.lat = 0.9078457610497026;
    msg.lon = 0.6493820605720755;
    msg.z = 0.14676496888928436;
    msg.z_units = 244U;
    msg.speed = 0.7741603089681134;
    msg.speed_units = 27U;
    msg.roll = 0.2559112047623663;
    msg.pitch = 0.13914773648771295;
    msg.yaw = 0.060873973733937325;
    msg.custom.assign("OJRJAZMMSFWGAFKLDCSVVWCILFIMWKGHUNQISTKCTIPXVQRPDPLMHLTOJDPHOIJVXJACMSUQTEVLCFKXVDBLVOAUKOURWTUWXYZGCGTOYNNNVRBJGSJFQMEIHCTIP");

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
    msg.setTimeStamp(0.8834000126447682);
    msg.setSource(50141U);
    msg.setSourceEntity(247U);
    msg.setDestination(9403U);
    msg.setDestinationEntity(215U);
    msg.timeout = 8510U;
    msg.lat = 0.11750606434480981;
    msg.lon = 0.21162494376459484;
    msg.z = 0.4284677784235096;
    msg.z_units = 163U;
    msg.speed = 0.21113799497534502;
    msg.speed_units = 229U;
    msg.roll = 0.7159928403221506;
    msg.pitch = 0.05593273291253131;
    msg.yaw = 0.9758448012823038;
    msg.custom.assign("PRAACMTUJGAOMIGGZWHAYRLULKYKOJSUWGPEGSMEQDKHEGNPHPKWMDSNKTIPEBAMIITLCBTIFDLGYFJRBNRKHHUYNWNPZZZAOSJEMSQGCLVVZCOFGDUNTRPBHJPZYQIXZIOCRSXYEDUVWGLKEZDXXQSPFDXOLKROVRVVMFQJJDVNIW");

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
    msg.setTimeStamp(0.7700939203988222);
    msg.setSource(39098U);
    msg.setSourceEntity(184U);
    msg.setDestination(46216U);
    msg.setDestinationEntity(145U);
    msg.timeout = 41807U;
    msg.lat = 0.3558425235511895;
    msg.lon = 0.32833091292647876;
    msg.z = 0.05892306906315414;
    msg.z_units = 32U;
    msg.speed = 0.41627905028398904;
    msg.speed_units = 184U;
    msg.roll = 0.379696025580622;
    msg.pitch = 0.9857567963531344;
    msg.yaw = 0.6817420296151526;
    msg.custom.assign("HOUQBQUAXQYLCAXUHSYIPIBDLIIHITOFPXMGAOUASYCEDBUIVDFQVJBMWKZGAEPCSPUQOKFZLBXTCVHZYLGHDVXPORLJELDWNHWSWFIMEKTVXBRNICTEBEB");

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
    msg.setTimeStamp(0.5902256481239703);
    msg.setSource(12546U);
    msg.setSourceEntity(74U);
    msg.setDestination(5480U);
    msg.setDestinationEntity(232U);
    msg.timeout = 25205U;
    msg.lat = 0.7799801241887828;
    msg.lon = 0.6889349192630054;
    msg.z = 0.954873338236896;
    msg.z_units = 110U;
    msg.speed = 0.5322473272159183;
    msg.speed_units = 131U;
    msg.duration = 13780U;
    msg.radius = 0.5055420283208674;
    msg.flags = 164U;
    msg.custom.assign("WFFLTTXRVXMGKRCSLDNDQDURPSGVIHZEQBFYIOFIVYUIOSQMWIBHPPBDVWZHSQNEMUNHCYZQGJVSLDTKLXADXCTISOJFTXGKPWUUMVMULERBRWAWFKPTHDXCNGXFUJZGDGGAQDHBBYSHF");

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
    msg.setTimeStamp(0.22607496693639773);
    msg.setSource(44925U);
    msg.setSourceEntity(238U);
    msg.setDestination(60162U);
    msg.setDestinationEntity(143U);
    msg.timeout = 52861U;
    msg.lat = 0.884223708512574;
    msg.lon = 0.5393829862024998;
    msg.z = 0.42273580836379987;
    msg.z_units = 134U;
    msg.speed = 0.6523941772540891;
    msg.speed_units = 39U;
    msg.duration = 24139U;
    msg.radius = 0.6107762774554276;
    msg.flags = 96U;
    msg.custom.assign("GHXFXMFJIGSNBORKZOPSNMPYXQDRECXDUBAGRUEUTLYYTIQFFYGUMJGHEGBKLIXQNAKWOCJKNIQHFVVCZLQUROZXESLITPAWTPVENZOCJCBRAZDRFFGSYLTSNYMMBEIQBSANNTFKLRJDCIEHCASKKJPZLDGRMBILOIJPTAKUXFBLFMVPHVQAWMCKNSAWNOBWBVWURA");

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
    msg.setTimeStamp(0.7056349185840249);
    msg.setSource(59714U);
    msg.setSourceEntity(67U);
    msg.setDestination(31524U);
    msg.setDestinationEntity(57U);
    msg.timeout = 1020U;
    msg.lat = 0.10911406393367629;
    msg.lon = 0.00994785994614189;
    msg.z = 0.7715694870454013;
    msg.z_units = 178U;
    msg.speed = 0.5674529694533245;
    msg.speed_units = 245U;
    msg.duration = 29379U;
    msg.radius = 0.15009110591602548;
    msg.flags = 186U;
    msg.custom.assign("PCLPTECHLEHUWEIUVOYPTOOITQOJVHYGJLSXAJIKXARZNPUEENXKDD");

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
    msg.setTimeStamp(0.6319637299887765);
    msg.setSource(47723U);
    msg.setSourceEntity(47U);
    msg.setDestination(31110U);
    msg.setDestinationEntity(216U);
    msg.custom.assign("SMMUHABWQKIJQULKJZDGSZEPEBFKRLNYOPIXUOVTQASACZQUDRUCEEIZVKFDFOTIGQKDJPCYGLYLUPDTOCCZXPDSVZLVUXPIRPIBSGHMJWXNCJMUKHFTOEIRSNWVLWGAENBAXHSFRGLAFDCRQMLANLBFBHZQLHXGJYTWGHPXONYCPIGXEFHSYKMTBUCQJVDNBWXSERRXWNRAM");

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
    msg.setTimeStamp(0.8000557200095215);
    msg.setSource(48638U);
    msg.setSourceEntity(138U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(222U);
    msg.custom.assign("MQVUPHYQBWRIOBRXLIOVYCNKGUPOOJVVFIEJENGFTSIKXEBZHCTBPRDUYLCAKMGBPOISNWWZCXHNEXWFZETLZSFOUAWDKIDKFVBJGTUTMZMNMHJYGYSIMEQYLKKVOPSDWOBVQPSILCFPDQUAJHLQKJCDMCQGGNZMEASFWZQLUDSRYJAZTTADKUJJANQVHIMXEUVBEQGWTRJDXPTXDMHBFZSRXR");

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
    msg.setTimeStamp(0.49827461409536433);
    msg.setSource(20747U);
    msg.setSourceEntity(245U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(223U);
    msg.custom.assign("BRKYWJSTQTNLSNXQLNP");

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
    msg.setTimeStamp(0.9952874591917865);
    msg.setSource(21548U);
    msg.setSourceEntity(87U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(238U);
    msg.timeout = 30685U;
    msg.lat = 0.5932459797871176;
    msg.lon = 0.8065609530924285;
    msg.z = 0.08413926094318602;
    msg.z_units = 175U;
    msg.duration = 23815U;
    msg.speed = 0.28683182628071013;
    msg.speed_units = 49U;
    msg.type = 160U;
    msg.radius = 0.5460673771181846;
    msg.length = 0.235755794796353;
    msg.bearing = 0.1741228876504416;
    msg.direction = 60U;
    msg.custom.assign("HABHOFGNPUNRTCBYVVBDHOMXDLVZOSUSXBQNUFVZFQKZVNYFFRLDTPLAGDQJHKAIZOVHWAVEDISNCJZKJMMGFCUHWKNCCJRARWQJZIYTUNYNSBQOPQEPZWKHFKFURCUHRYJKBOUFTWQOPSLODATJQIRWWIGESLBXARSEGFCAYWUBGDVEMAQEVJGWRXPWZEZXCPCYOTMMPYHGJEMBGGHIESEILLSDXMCKAMKY");

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
    msg.setTimeStamp(0.4125001002472326);
    msg.setSource(40556U);
    msg.setSourceEntity(223U);
    msg.setDestination(20972U);
    msg.setDestinationEntity(68U);
    msg.timeout = 37272U;
    msg.lat = 0.5349289057354739;
    msg.lon = 0.8857533404576944;
    msg.z = 0.928963995560731;
    msg.z_units = 99U;
    msg.duration = 40334U;
    msg.speed = 0.20887692376691747;
    msg.speed_units = 207U;
    msg.type = 70U;
    msg.radius = 0.9046098151610241;
    msg.length = 0.9360679576826536;
    msg.bearing = 0.5365251942016424;
    msg.direction = 211U;
    msg.custom.assign("QAZLPSNPQDKAPCJHZPGSVEEWRBDRDOMFRZQEHHCQIFWOKBZSUHGNVNICUNKIVLYJJVIXQPSGZPRSGWBLIMZQFSTXQTEPCQDOCZTYIHYEKUFLFBONFTZJACUKRVURXMBHNOPOW");

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
    msg.setTimeStamp(0.08932414793165622);
    msg.setSource(15674U);
    msg.setSourceEntity(36U);
    msg.setDestination(28462U);
    msg.setDestinationEntity(88U);
    msg.timeout = 35032U;
    msg.lat = 0.6962904728720574;
    msg.lon = 0.8899839903167407;
    msg.z = 0.08601527362024453;
    msg.z_units = 213U;
    msg.duration = 65071U;
    msg.speed = 0.5487655385912983;
    msg.speed_units = 79U;
    msg.type = 62U;
    msg.radius = 0.02157838448031346;
    msg.length = 0.639364430857612;
    msg.bearing = 0.9586521454204544;
    msg.direction = 73U;
    msg.custom.assign("WEMRVKCPQMAANSJKWCHWGPQFCUEVZDHUSJGX");

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
    msg.setTimeStamp(0.7236892618646559);
    msg.setSource(14991U);
    msg.setSourceEntity(125U);
    msg.setDestination(50295U);
    msg.setDestinationEntity(155U);
    msg.duration = 47473U;
    msg.custom.assign("FKMAHYEBHACCSFQUROJYERYQMLXORIJWXJLFUWTLFJSCKIEHKEJSMOYPNNVTHQBFOIYYUVOOLDKJMZGCCMXKNUACYBLSPIGRAWBMRMPOFPOQGBVCNRVWZLDYDVRMFSSXEENDWWGZBJUIULZSIZCYHRJMNZE");

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
    msg.setTimeStamp(0.788828263398729);
    msg.setSource(12777U);
    msg.setSourceEntity(158U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(81U);
    msg.duration = 19286U;
    msg.custom.assign("LKRGWCPBUROXBAGZVJGPLFKEKARDHUUTPNNILGBJNCMYEIQGCJM");

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
    msg.setTimeStamp(0.5061558423834704);
    msg.setSource(37562U);
    msg.setSourceEntity(142U);
    msg.setDestination(14981U);
    msg.setDestinationEntity(117U);
    msg.duration = 48124U;
    msg.custom.assign("UTEGPOIAVHKRVNIXBSQJPOBDXGKVSZJOAYPJNVBYLYNEPWFZQAKUDMGRIRCAABLQYURPHSVOYXEXLCTBETTSRHWGXIDUYIFSWRJOOWMMVMGMUWQWOXZNGCEYILQDDZVKMZKFYFCWXECAEY");

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
    msg.setTimeStamp(0.6617729947567217);
    msg.setSource(43624U);
    msg.setSourceEntity(125U);
    msg.setDestination(45005U);
    msg.setDestinationEntity(243U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.9111226822791231;
    msg.control.set(tmp_msg_0);
    msg.duration = 14638U;
    msg.custom.assign("RSHZUTMNJLHGNKEHWNAWNEZRLPMPJQEAXWOVZTLAQYBUMLCESKTEAQHZUMCFVVBBPLZEVSOXROXPDOAGPQYHCUJFOVFTBUIYKUAGOGRGZXVQGDYQOTBVHFKHCKIJMPKD");

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
    msg.setTimeStamp(0.7245132559514476);
    msg.setSource(15521U);
    msg.setSourceEntity(168U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(88U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.10396645363524126;
    msg.control.set(tmp_msg_0);
    msg.duration = 44920U;
    msg.custom.assign("VZHUTELNNRZIJCFKQMIOXLODAXWCMRKVAQAYWUWDEOUMMYLNXAFBYFQOIKWKKTWSTNEUGRFPRGNHJMKZHSJUPJTGPYGGOXUZNHCVJZANGVPVBWBSHCXDMREBJSQHKWDDBXJZBILHBPLBQCEWJRRPFULOQVILPIFVHYSIZAJYOOKOKDDTXS");

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
    msg.setTimeStamp(0.39933581907389315);
    msg.setSource(28754U);
    msg.setSourceEntity(92U);
    msg.setDestination(5111U);
    msg.setDestinationEntity(182U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.05814736966160716;
    tmp_msg_0.z_units = 112U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23415U;
    msg.custom.assign("OHCSNTKGYLTKPPEESWHNBTNQXZVMCRUAFKZAMHUKVOQQUFNIJXRVPCGIMBYWWBLJFDFNCMXY");

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
    msg.setTimeStamp(0.835317206128666);
    msg.setSource(3011U);
    msg.setSourceEntity(103U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(158U);
    msg.timeout = 17610U;
    msg.lat = 0.3902212869310996;
    msg.lon = 0.5185358543249422;
    msg.z = 0.304605561218918;
    msg.z_units = 185U;
    msg.speed = 0.4455260404903745;
    msg.speed_units = 119U;
    msg.bearing = 0.5972400797094928;
    msg.cross_angle = 0.380205232812471;
    msg.width = 0.7686017096960037;
    msg.length = 0.7454425372757894;
    msg.hstep = 0.5201921090051911;
    msg.coff = 13U;
    msg.alternation = 186U;
    msg.flags = 161U;
    msg.custom.assign("BMSDVUETIKQFVILOOKGXFMACEFXKINGHOIQCRATKJBMMYBXTPQMQTUYTEPJHEAVRHRVDHZVKDUQGGS");

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
    msg.setTimeStamp(0.8332813568899394);
    msg.setSource(33926U);
    msg.setSourceEntity(236U);
    msg.setDestination(55704U);
    msg.setDestinationEntity(73U);
    msg.timeout = 13265U;
    msg.lat = 0.7900055008424811;
    msg.lon = 0.44421576037156973;
    msg.z = 0.9567481335334413;
    msg.z_units = 175U;
    msg.speed = 0.6481358714463462;
    msg.speed_units = 199U;
    msg.bearing = 0.6890884693750984;
    msg.cross_angle = 0.9631949406484003;
    msg.width = 0.508386556025441;
    msg.length = 0.032784145367833584;
    msg.hstep = 0.563334819851118;
    msg.coff = 218U;
    msg.alternation = 223U;
    msg.flags = 156U;
    msg.custom.assign("ZDNGGQODAOCFKSJTOFTEAKSWLQFEGPOHNAJMFPAZAUZLEXDVRDLUSWWJZIVHXBTVBYUXCQPUQWVLXCONRFMGHNRH");

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
    msg.setTimeStamp(0.1425800275073812);
    msg.setSource(42327U);
    msg.setSourceEntity(250U);
    msg.setDestination(5919U);
    msg.setDestinationEntity(200U);
    msg.timeout = 44200U;
    msg.lat = 0.8638058021546875;
    msg.lon = 0.39723359370895994;
    msg.z = 0.6549735420904835;
    msg.z_units = 231U;
    msg.speed = 0.8867694717442633;
    msg.speed_units = 145U;
    msg.bearing = 0.05969160283711994;
    msg.cross_angle = 0.9644825584887634;
    msg.width = 0.9561815747626892;
    msg.length = 0.45986271726671524;
    msg.hstep = 0.46255718017865977;
    msg.coff = 165U;
    msg.alternation = 53U;
    msg.flags = 108U;
    msg.custom.assign("YVWPTBYSNPFCTAGGAHCOIQARELGIXMSIMTPFHBNQVLBEXEZOBLYZWPAEUVCJXYPNVNXHFXUWLPMJJWWTQECMNGDJDHESRUZOHCJIJOKQNIKUROIXTOJFPVYB");

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
    msg.setTimeStamp(0.7371214061540757);
    msg.setSource(29382U);
    msg.setSourceEntity(84U);
    msg.setDestination(37950U);
    msg.setDestinationEntity(99U);
    msg.timeout = 40848U;
    msg.lat = 0.8499631920973695;
    msg.lon = 0.31477484514600096;
    msg.z = 0.43250917168013103;
    msg.z_units = 94U;
    msg.speed = 0.26579023703322746;
    msg.speed_units = 210U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.012240141408563776;
    tmp_msg_0.y = 0.32131153375589794;
    tmp_msg_0.z = 0.7061732809564228;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NBGLHQYUSOBCRVHYNFRAVYSACMRNTNCZPOFNCTDDDEFODYMJUEDPDKKV");

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
    msg.setTimeStamp(0.25091303925935315);
    msg.setSource(39716U);
    msg.setSourceEntity(221U);
    msg.setDestination(56552U);
    msg.setDestinationEntity(228U);
    msg.timeout = 40244U;
    msg.lat = 0.8510132983455997;
    msg.lon = 0.12941630222734257;
    msg.z = 0.49225336964987676;
    msg.z_units = 9U;
    msg.speed = 0.008576929980379289;
    msg.speed_units = 174U;
    msg.custom.assign("VZYRBCEMKQPRMSLAFEYYQUIKMSGAMTGARWQYL");

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
    msg.setTimeStamp(0.3768766748651077);
    msg.setSource(56949U);
    msg.setSourceEntity(85U);
    msg.setDestination(18885U);
    msg.setDestinationEntity(7U);
    msg.timeout = 61224U;
    msg.lat = 0.5754256235592525;
    msg.lon = 0.8149444801170689;
    msg.z = 0.3280519268479597;
    msg.z_units = 248U;
    msg.speed = 0.6489011127268942;
    msg.speed_units = 153U;
    msg.custom.assign("XDKMPLYTJGP");

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
    msg.setTimeStamp(0.6837556507389275);
    msg.setSource(59516U);
    msg.setSourceEntity(72U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(242U);
    msg.x = 0.13436403355215187;
    msg.y = 0.6828194401431201;
    msg.z = 0.8889338337621568;

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
    msg.setTimeStamp(0.15186648660745272);
    msg.setSource(43036U);
    msg.setSourceEntity(12U);
    msg.setDestination(6127U);
    msg.setDestinationEntity(12U);
    msg.x = 0.5618387264113376;
    msg.y = 0.6012905400756443;
    msg.z = 0.28536564907324014;

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
    msg.setTimeStamp(0.2988880571879178);
    msg.setSource(34626U);
    msg.setSourceEntity(232U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(80U);
    msg.x = 0.26580135319356835;
    msg.y = 0.4023290051593188;
    msg.z = 0.02328433996168089;

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
    msg.setTimeStamp(0.32528909931128847);
    msg.setSource(32202U);
    msg.setSourceEntity(58U);
    msg.setDestination(30334U);
    msg.setDestinationEntity(202U);
    msg.timeout = 50272U;
    msg.lat = 0.18215190817130755;
    msg.lon = 0.9264258842575912;
    msg.z = 0.33255261772348566;
    msg.z_units = 224U;
    msg.amplitude = 0.5589102245836448;
    msg.pitch = 0.39104333213401254;
    msg.speed = 0.7659988492440748;
    msg.speed_units = 241U;
    msg.custom.assign("OONXYHWDMXUCZLKBOBIJYSNNNSUUMWHCAMXAJXGIWHQGLEBGUIIQXEKJJEWIUMWIVDOFPJLEPUZDXRRRPCBEZUHPHGGQRHXNZFBBNVKPOEALVGMVPWWCDIDLCYFUHZFKFKRTZRPFEJSKKMLAKTFYPNOGQPWSCVTFWGABJVXTDIEGCTAZKSESNHVZ");

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
    msg.setTimeStamp(0.8789317877386059);
    msg.setSource(51646U);
    msg.setSourceEntity(77U);
    msg.setDestination(45519U);
    msg.setDestinationEntity(180U);
    msg.timeout = 46852U;
    msg.lat = 0.19770671018993535;
    msg.lon = 0.7398408574006672;
    msg.z = 0.9375716473249306;
    msg.z_units = 204U;
    msg.amplitude = 0.5740273495406489;
    msg.pitch = 0.15409178204551055;
    msg.speed = 0.496929686534786;
    msg.speed_units = 72U;
    msg.custom.assign("SOKWFYVCDSMLYDDUSLOCIWTSDEWPN");

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
    msg.setTimeStamp(0.6739456949182192);
    msg.setSource(20092U);
    msg.setSourceEntity(244U);
    msg.setDestination(44872U);
    msg.setDestinationEntity(171U);
    msg.timeout = 35678U;
    msg.lat = 0.8353429683684983;
    msg.lon = 0.34849505418740745;
    msg.z = 0.8838013463156981;
    msg.z_units = 30U;
    msg.amplitude = 0.3418343533544387;
    msg.pitch = 0.7691313850838902;
    msg.speed = 0.5068925228583212;
    msg.speed_units = 189U;
    msg.custom.assign("TUFIGNITTYEPIMWFMSBDENEMZSHGZPLXNZQJZCFRREXZYWCIQYVDBKHSMGBOUZOEUOWRHOJJVRGHCJVXTPRPHBYTGGWVBZFKMTUFHVCIPWMVYYCINADBNKZQEBXJGESQCPAHPWROOKXLKJHOMXQQXAZAGPFNDSDRHKLVYSCCLFODD");

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
    msg.setTimeStamp(0.20281466350534305);
    msg.setSource(59029U);
    msg.setSourceEntity(90U);
    msg.setDestination(23114U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.3288061189425865);
    msg.setSource(47426U);
    msg.setSourceEntity(3U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.8328422082496075);
    msg.setSource(60896U);
    msg.setSourceEntity(166U);
    msg.setDestination(1348U);
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
    msg.setTimeStamp(0.7016294073035715);
    msg.setSource(14679U);
    msg.setSourceEntity(52U);
    msg.setDestination(52946U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.7369687268692378;
    msg.lon = 0.07271850207261232;
    msg.z = 0.582880585081866;
    msg.z_units = 124U;
    msg.radius = 0.43868596645554014;
    msg.duration = 63272U;
    msg.speed = 0.6674417419456609;
    msg.speed_units = 247U;
    msg.custom.assign("JHQNKFTRYDSAVSZYXEPFMUTOSXTVSQDWIVITEGKWGQCPKRNNFZGUJRJTSPLQZLDJMUHXYBMDAAQIUOGILWGSPKZAHGLEIBUZCWPNVMMHZETJNLBBDGBIDAHQZOVFJFDWNPKCOZXESYUHTLAAYJKMQLYTTRDPEZBHHCEFCICFCGXOXMSFCODKAVQUBFHMOYZRRWL");

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
    msg.setTimeStamp(0.7142278691896472);
    msg.setSource(196U);
    msg.setSourceEntity(145U);
    msg.setDestination(59224U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.3879109445785539;
    msg.lon = 0.5182735561250263;
    msg.z = 0.6161670454626159;
    msg.z_units = 172U;
    msg.radius = 0.7684994677500875;
    msg.duration = 62097U;
    msg.speed = 0.34651699397080193;
    msg.speed_units = 152U;
    msg.custom.assign("PCIWDIJSMDGSNSFXITALBAUNMEMZIZHWZXGVTXTOBHSDOPRBQIFLQOUBFHYS");

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
    msg.setTimeStamp(0.6419046168590715);
    msg.setSource(55587U);
    msg.setSourceEntity(72U);
    msg.setDestination(56985U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.26244711879442395;
    msg.lon = 0.5010304668435832;
    msg.z = 0.5451956115057317;
    msg.z_units = 218U;
    msg.radius = 0.0906633959716785;
    msg.duration = 62106U;
    msg.speed = 0.4559676809169476;
    msg.speed_units = 90U;
    msg.custom.assign("ILUIXACGSTVFCNBRHMCTLPBQXIKZZFHSIYMMHBPLFUWMDXCMAPJJIJDREIVWZNJERMNWCKDOKODARCKDGHTTWNKXDQYBSRRDTSBSYDROIQVAUGGBWZLEHJSIKJJHFWVRUQALVFTOXQRMCWFDDLNZFXXLWFOYASPQOGHVPZOWA");

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
    msg.setTimeStamp(0.42964082970964923);
    msg.setSource(6906U);
    msg.setSourceEntity(69U);
    msg.setDestination(15093U);
    msg.setDestinationEntity(193U);
    msg.timeout = 54127U;
    msg.flags = 43U;
    msg.lat = 0.6804416956792528;
    msg.lon = 0.471123057422532;
    msg.start_z = 0.2230409360566492;
    msg.start_z_units = 205U;
    msg.end_z = 0.9028039711938569;
    msg.end_z_units = 42U;
    msg.radius = 0.21527015221251633;
    msg.speed = 0.9695678875618821;
    msg.speed_units = 204U;
    msg.custom.assign("ASISXSWSGECJSPLRMFKAWINUBNRWJKXDQSTTQYZDLYJFGRDTI");

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
    msg.setTimeStamp(0.5067516936861274);
    msg.setSource(55118U);
    msg.setSourceEntity(30U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(16U);
    msg.timeout = 57092U;
    msg.flags = 153U;
    msg.lat = 0.10646559507481601;
    msg.lon = 0.022380602144333905;
    msg.start_z = 0.03652097480164296;
    msg.start_z_units = 101U;
    msg.end_z = 0.5538706981177365;
    msg.end_z_units = 247U;
    msg.radius = 0.5763508631538031;
    msg.speed = 0.8444903276299509;
    msg.speed_units = 40U;
    msg.custom.assign("ZIEGLTAEZEGLMVVDMMXSHOZIRDFESWSSSCHOCJYWAAZRRJPMDQUTWUNUWHEJQTAXQLJYPVKJBDQSBOJBZNVDXGCRWTXRBFUOMYSKPTLMNBNETDKKIHEVYNVSRGOBGTVDWKMHFMXXULETYIBZNCQCDECPXOILFOHYLYGXZWNKGPTRKHSAHFPKUFFIFZOJFYHJVANIUKUJDGYGRCBO");

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
    msg.setTimeStamp(0.16118214328427372);
    msg.setSource(43097U);
    msg.setSourceEntity(18U);
    msg.setDestination(35700U);
    msg.setDestinationEntity(17U);
    msg.timeout = 7200U;
    msg.flags = 64U;
    msg.lat = 0.19623354342442245;
    msg.lon = 0.7879696811518633;
    msg.start_z = 0.6819155213845246;
    msg.start_z_units = 31U;
    msg.end_z = 0.6952009746810139;
    msg.end_z_units = 43U;
    msg.radius = 0.6513964524055147;
    msg.speed = 0.10091383480449412;
    msg.speed_units = 111U;
    msg.custom.assign("OPXXLWMQZLZQSRFDGZYWOPXNDJTFIKHLFZBYLVCPHGVARDKVUDKWYBSROQLGWHUXTWTAJVBPHMDISBGZCCNWUHXUQJLIPXWYEUEEMRBABVPSFMZSDBEJKNTNBGKGNPFJTCCRSKSPHURGQ");

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
    msg.setTimeStamp(0.4371907183620183);
    msg.setSource(38101U);
    msg.setSourceEntity(102U);
    msg.setDestination(41879U);
    msg.setDestinationEntity(222U);
    msg.timeout = 61608U;
    msg.lat = 0.10741880269496551;
    msg.lon = 0.10327859544639895;
    msg.z = 0.12476387755297458;
    msg.z_units = 202U;
    msg.speed = 0.9260390547548925;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6149732877693652;
    tmp_msg_0.y = 0.04956300152424764;
    tmp_msg_0.z = 0.415653773722532;
    tmp_msg_0.t = 0.7244333126755491;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VCHFYEHBDJIWFOCZLABLWMCEMVURMGJDKPOPYUPAOOINOWYGHSRNSBWTIFOYKLXSUJHREZYHVXGOQFXQCYGDACTRMTCUJIOJEBG");

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
    msg.setTimeStamp(0.7225757641918925);
    msg.setSource(3537U);
    msg.setSourceEntity(218U);
    msg.setDestination(20110U);
    msg.setDestinationEntity(245U);
    msg.timeout = 32796U;
    msg.lat = 0.11518432932564548;
    msg.lon = 0.13979440759802642;
    msg.z = 0.5418045937701347;
    msg.z_units = 20U;
    msg.speed = 0.24422495054232674;
    msg.speed_units = 92U;
    msg.custom.assign("WBNAPXJFUQRSLMZNIHMZRGNBPRQDAIYIFZCZFAHCCCSIIJIXLOSKSZABJQGMJTZJTRAOSRVBAJJLNXZHITQUWIEKSIYLRLSMEYRYEPUMFGZCROKBHAYXOUTYVUUWKPHPNIBXKHQVZDMLMWKXBTGOVDMQGTDEVFFFYMWTXLANJTKGGZBRUHSVYNQOVCNDPUHSDHBPFGDANLKKOPKSDGEQCEOPUVFYNQQWWWVCTRTEPLE");

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
    msg.setTimeStamp(0.07574975654597382);
    msg.setSource(11201U);
    msg.setSourceEntity(204U);
    msg.setDestination(3926U);
    msg.setDestinationEntity(90U);
    msg.timeout = 25121U;
    msg.lat = 0.46231559495754204;
    msg.lon = 0.6437976506536781;
    msg.z = 0.07833281427157623;
    msg.z_units = 108U;
    msg.speed = 0.9021229522835017;
    msg.speed_units = 90U;
    msg.custom.assign("TCVQDMPEUQYMVMHWKPRGGXFYYUIZBLETAPSIYTGLOHLAPSLEZFVBRXVFQZTSNTVHWATEKYGNJBMHPUDFDXIZVIDZCBRKWZNWPLKCYRAHLUGJEOMOIOXXMLNFKDQTJRKRBWJYOWH");

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
    msg.setTimeStamp(0.3789418474104498);
    msg.setSource(12975U);
    msg.setSourceEntity(197U);
    msg.setDestination(380U);
    msg.setDestinationEntity(84U);
    msg.x = 0.035749680764867287;
    msg.y = 0.25918362739522605;
    msg.z = 0.394546450240868;
    msg.t = 0.3946282582460622;

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
    msg.setTimeStamp(0.22388388811941573);
    msg.setSource(27989U);
    msg.setSourceEntity(142U);
    msg.setDestination(10067U);
    msg.setDestinationEntity(174U);
    msg.x = 0.780077357195464;
    msg.y = 0.1947106427182702;
    msg.z = 0.6144196912533655;
    msg.t = 0.4967237198637141;

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
    msg.setTimeStamp(0.7507567394964266);
    msg.setSource(6939U);
    msg.setSourceEntity(248U);
    msg.setDestination(43824U);
    msg.setDestinationEntity(138U);
    msg.x = 0.5737896618278954;
    msg.y = 0.5987360965137192;
    msg.z = 0.7769096693633355;
    msg.t = 0.6259593162089216;

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
    msg.setTimeStamp(0.38480715507002006);
    msg.setSource(44316U);
    msg.setSourceEntity(52U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(125U);
    msg.timeout = 34027U;
    msg.name.assign("ZXYOJVQXXVSHNLYTZJMUQGUTPJSYQFNRHDACTXKRPSKGOCRFXCLWVNIHMSQZGADRMWDEWKLAWNAMFUMJKTVPKAVEEPINJKRECBWUNEBELUZNZASFDGGZLLPIBMTNHVNVCUCHWLCAOTRYZMYJDOKUYOIJWSIHSPBOSFTPBLDQPSGXDQQY");
    msg.custom.assign("KTDODJGGMAIILWFJQIFTAMIICHQMHYOEKABHFAABFNFDMNEENIJXGXYBGYCGDNRBOJTTKUUCPAHZWZSXOJMBGLCLQDEHBBSIJVEUKSDLOBSZ");

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
    msg.setTimeStamp(0.8411727402450373);
    msg.setSource(33067U);
    msg.setSourceEntity(74U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(246U);
    msg.timeout = 30205U;
    msg.name.assign("NUSIGFRIGHGZIYKJYDWMJLKHTGRXQKXJOATSTJEPYODCZUAFUUVXMNXXPMQVEMUAZKFRRDVNCOTICXESWYOIUIPJWKSOZVGAGCDVBTNXUPTWLWRIZKZTXQEVDWHIZELSQSZJJLBJDGNLFYPNAMSJSNYVMWL");
    msg.custom.assign("KDOVHNEDEVZBQBAHIGLLAZKUJHVBDYBHBFNOXYTKBNJAXGHRRLZENUEFVEPZKLLXFOCYMDHIRTWDPJSYCMPEWURHYXBCZRGNAPJLXFPKEWXSTQTCKGIITJLOQUTWMCMWGTQ");

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
    msg.setTimeStamp(0.38496168933717057);
    msg.setSource(27415U);
    msg.setSourceEntity(162U);
    msg.setDestination(18241U);
    msg.setDestinationEntity(240U);
    msg.timeout = 11519U;
    msg.name.assign("HOCOXFZZGNZDABGGXYPWSGYAXXOWXYDNUCPKBTILLADPSTXIVHDVMUXMSCAHKLPNREIRXVYOITQUSWLBRZSMFZSREHSHMYONMDIPBCXGIPQ");
    msg.custom.assign("OWUVJTNNNZFBMOXMIOYYQGKAVLYGAQZISMFLDJREKAYYWQHDFXCRWDFNULUGPIXTKPKVKJFGKNIKBHQGDGPATVQZBPRULGEDWEFTHWJZYSUHYXVHRCGISFOJZLXWSKXOEJMBRWXBBCKLWJPQQCDJETZSRUXC");

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
    msg.setTimeStamp(0.1280537944675354);
    msg.setSource(45240U);
    msg.setSourceEntity(252U);
    msg.setDestination(57552U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.3489248085528115;
    msg.lon = 0.6455411660881244;
    msg.z = 0.19899768579695964;
    msg.z_units = 118U;
    msg.speed = 0.0008285600909768709;
    msg.speed_units = 183U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3695355851422121;
    tmp_msg_0.y = 0.9887378484295;
    tmp_msg_0.z = 0.7200117064470107;
    tmp_msg_0.t = 0.44843164616177844;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15345U;
    tmp_msg_1.off_x = 0.9730049887787181;
    tmp_msg_1.off_y = 0.05218358496221398;
    tmp_msg_1.off_z = 0.8330331152165558;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.011611125589385152;
    msg.custom.assign("CNEJERZMRWXPRHKWJMQTXAOOKCHTSDDQZZSTMQSMRICUNOLJDMXWTXJJHEMDYTXFLRYWTDPLABCRVIEMGSYOVHNGEPTNXHBRLZWRCVFWEQRLXIUMSOIDHYQADNULGYUVHWAFNBOCEQZTAOLBNGCZGOQSNUAQVNFYWGJIYAPHRPAIDPXTKJKFAPGHOPMSNLUEIEWKVGZVVZBIQBBHKQZZMJUFDLTGSVYFKCWUUKLDX");

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
    msg.setTimeStamp(0.931346491388828);
    msg.setSource(26559U);
    msg.setSourceEntity(29U);
    msg.setDestination(670U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.5679338248769319;
    msg.lon = 0.0009823983717146545;
    msg.z = 0.6125449680400701;
    msg.z_units = 229U;
    msg.speed = 0.0877989269819901;
    msg.speed_units = 209U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9474724572647596;
    tmp_msg_0.y = 0.23845552532816539;
    tmp_msg_0.z = 0.6039967021424951;
    tmp_msg_0.t = 0.48525257720479953;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6355052116722917;
    msg.custom.assign("GTNLVWWUHUPHMDNYSPTVZINMECBTCYINHRJBRBKPEBMPGBZIHVUWDWQQIZWOBHCJHVYBSJKRIAXSLIZSQLFTGQHSFZZ");

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
    msg.setTimeStamp(0.6460947730032786);
    msg.setSource(31662U);
    msg.setSourceEntity(126U);
    msg.setDestination(30331U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.03305246251945815;
    msg.lon = 0.8097882799165904;
    msg.z = 0.7328991789792406;
    msg.z_units = 38U;
    msg.speed = 0.4218153743975319;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7031700386427892;
    tmp_msg_0.y = 0.9166574873256724;
    tmp_msg_0.z = 0.26712028195458926;
    tmp_msg_0.t = 0.9797675880101405;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6480172551221518;
    msg.custom.assign("TZRPLHXPSFTYPSKCQAASGMQEFORVGYMDYGUCQFQSJWDCJSFZWCOKEXKYCXNHRLFNWAAGEGNYLJDWLJCYDSJSHBIQBPLTIOZTMEDVFYGHZSRPBNGDZMONYTFVEHMRBVZETINIWALETEVMFFRUPOKSLNABHVWODLDPTADRNUJZQVXKXKBAJWN");

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
    msg.setTimeStamp(0.12364432026890526);
    msg.setSource(33925U);
    msg.setSourceEntity(117U);
    msg.setDestination(60015U);
    msg.setDestinationEntity(1U);
    msg.vid = 48314U;
    msg.off_x = 0.9677217622917931;
    msg.off_y = 0.9873386215384452;
    msg.off_z = 0.4737548586123196;

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
    msg.setTimeStamp(0.951350361282306);
    msg.setSource(45824U);
    msg.setSourceEntity(34U);
    msg.setDestination(14351U);
    msg.setDestinationEntity(94U);
    msg.vid = 29807U;
    msg.off_x = 0.9491247727625247;
    msg.off_y = 0.6958643957229576;
    msg.off_z = 0.08774082371007863;

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
    msg.setTimeStamp(0.19841618344106104);
    msg.setSource(35005U);
    msg.setSourceEntity(230U);
    msg.setDestination(19104U);
    msg.setDestinationEntity(26U);
    msg.vid = 13292U;
    msg.off_x = 0.9473668266473136;
    msg.off_y = 0.35611153168984677;
    msg.off_z = 0.25747623779296214;

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
    msg.setTimeStamp(0.6983803519946257);
    msg.setSource(17404U);
    msg.setSourceEntity(65U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.4976548249264572);
    msg.setSource(13489U);
    msg.setSourceEntity(177U);
    msg.setDestination(53135U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.6830844818316298);
    msg.setSource(61620U);
    msg.setSourceEntity(204U);
    msg.setDestination(38292U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.05724375528837089);
    msg.setSource(40773U);
    msg.setSourceEntity(253U);
    msg.setDestination(49846U);
    msg.setDestinationEntity(142U);
    msg.mid = 29353U;

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
    msg.setTimeStamp(0.36028672920311433);
    msg.setSource(65203U);
    msg.setSourceEntity(203U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(22U);
    msg.mid = 63556U;

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
    msg.setTimeStamp(0.9838407054991938);
    msg.setSource(52118U);
    msg.setSourceEntity(33U);
    msg.setDestination(13734U);
    msg.setDestinationEntity(19U);
    msg.mid = 20007U;

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
    msg.setTimeStamp(0.7618391497780715);
    msg.setSource(6762U);
    msg.setSourceEntity(189U);
    msg.setDestination(41848U);
    msg.setDestinationEntity(57U);
    msg.state = 175U;
    msg.eta = 31519U;
    msg.info.assign("YKXZYUQWZYGOAZBZVNPXPGMLOSTEFNHSADSLFIHCBMQKGWVLXCSRHANZZPVOHJTUJSKSHVGFVWTXXPULFCSQAXIDDEADVDNCBDWTYBQCYXQGNZRIXDKEQVINMEKWWGDFRAHAN");

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
    msg.setTimeStamp(0.1484220630889198);
    msg.setSource(3600U);
    msg.setSourceEntity(80U);
    msg.setDestination(46025U);
    msg.setDestinationEntity(70U);
    msg.state = 243U;
    msg.eta = 29199U;
    msg.info.assign("LJPSQKQPFQPRTWAURDOZECYJZUREOFOTACNUSBAUWVAZNGEMMONGRXICSBGWNKTVPLEWRUTYJFAUAJQLGZKQCXDDFWTNWVYHDCQRTMXGFOXBIBWBOWNMBHUUYWCSMQZXMCOOXRLATQZGCEKKXIHBGEUTEYIQELPAVFVOSYSQKDPJ");

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
    msg.setTimeStamp(0.25234921139803357);
    msg.setSource(41696U);
    msg.setSourceEntity(35U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(52U);
    msg.state = 101U;
    msg.eta = 53521U;
    msg.info.assign("RWSMEZIURBQP");

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
    msg.setTimeStamp(0.8677961677041628);
    msg.setSource(13784U);
    msg.setSourceEntity(213U);
    msg.setDestination(20481U);
    msg.setDestinationEntity(71U);
    msg.system = 31229U;
    msg.duration = 61734U;
    msg.speed = 0.31175155570882274;
    msg.speed_units = 196U;
    msg.x = 0.5907512565973068;
    msg.y = 0.019259749924136815;
    msg.z = 0.4331401339810843;
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
    msg.setTimeStamp(0.9069661612057054);
    msg.setSource(41341U);
    msg.setSourceEntity(222U);
    msg.setDestination(33171U);
    msg.setDestinationEntity(54U);
    msg.system = 152U;
    msg.duration = 29820U;
    msg.speed = 0.24107016325217367;
    msg.speed_units = 110U;
    msg.x = 0.7152449564410828;
    msg.y = 0.5088838923259899;
    msg.z = 0.19524085489710552;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.4456997081089271);
    msg.setSource(30580U);
    msg.setSourceEntity(210U);
    msg.setDestination(45135U);
    msg.setDestinationEntity(144U);
    msg.system = 22966U;
    msg.duration = 26067U;
    msg.speed = 0.1192569572478811;
    msg.speed_units = 138U;
    msg.x = 0.007296916111496965;
    msg.y = 0.9560130620016842;
    msg.z = 0.14177420926037743;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.1483712218530301);
    msg.setSource(3062U);
    msg.setSourceEntity(7U);
    msg.setDestination(39742U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.6488794598024943;
    msg.lon = 0.5593343586956646;
    msg.speed = 0.4855096823438556;
    msg.speed_units = 199U;
    msg.duration = 55073U;
    msg.sys_a = 15760U;
    msg.sys_b = 63792U;
    msg.move_threshold = 0.27002695780781216;

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
    msg.setTimeStamp(0.5719046750680219);
    msg.setSource(64354U);
    msg.setSourceEntity(198U);
    msg.setDestination(37897U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.4631006032862096;
    msg.lon = 0.17767890849637513;
    msg.speed = 0.27251433757510757;
    msg.speed_units = 41U;
    msg.duration = 20040U;
    msg.sys_a = 40771U;
    msg.sys_b = 31566U;
    msg.move_threshold = 0.1330026304899835;

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
    msg.setTimeStamp(0.5639138616672732);
    msg.setSource(33481U);
    msg.setSourceEntity(148U);
    msg.setDestination(27692U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.7276013386641963;
    msg.lon = 0.024063817114540198;
    msg.speed = 0.43448399751186795;
    msg.speed_units = 144U;
    msg.duration = 63580U;
    msg.sys_a = 501U;
    msg.sys_b = 25889U;
    msg.move_threshold = 0.8071962180229229;

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
    msg.setTimeStamp(0.253655114821842);
    msg.setSource(19043U);
    msg.setSourceEntity(18U);
    msg.setDestination(27941U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.5358616802910259;
    msg.lon = 0.2627367036848952;
    msg.z = 0.7683604290897121;
    msg.z_units = 229U;
    msg.speed = 0.005677426590316781;
    msg.speed_units = 33U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.24019439990485514;
    tmp_msg_0.lon = 0.8223213023720561;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AAZBWIEIGLFPJVYZWLGCRXUTVPOFSYQFCRRJVLQFE");

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
    msg.setTimeStamp(0.8576652960845099);
    msg.setSource(16914U);
    msg.setSourceEntity(180U);
    msg.setDestination(25385U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.7776583409657845;
    msg.lon = 0.1461134970152307;
    msg.z = 0.14845352435634296;
    msg.z_units = 254U;
    msg.speed = 0.9727319900189062;
    msg.speed_units = 124U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9027978750344254;
    tmp_msg_0.lon = 0.6731650380343062;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TBHAYKJBQJMXLYEJOKXNKPQHZGODDGKKLNVVWNMDYSWHCDWNGEKKFGWSQTQIUEETBPYOWURUHCAIGIEATYYNAXAALKCFCJOFTSJNBLCTCZRPOIRFVSZMXPYATQSMIEFUVNHAMEUCOISWHGJFZWYZBDVAPDUULXEMSMDGTBPLXIRZUQBMDXURHCDFFIJPCVHIWNSKJZXQFZSPXGGRCVEBIBLSZTLQOYNRURPQOMQEVLJDHNOW");

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
    msg.setTimeStamp(0.3810926424774629);
    msg.setSource(56933U);
    msg.setSourceEntity(74U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.17231299081989138;
    msg.lon = 0.777158654587869;
    msg.z = 0.6555949192797815;
    msg.z_units = 154U;
    msg.speed = 0.2416589509947572;
    msg.speed_units = 95U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8173716424801696;
    tmp_msg_0.lon = 0.9375016639657219;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NHCJEKLYAULXOCOBWQRCYXOFMZTTYACHBTPXZIFHGPJOUVFQCMOTBVJKBDOSUGARREAAKNXRBYIGDPRZGDWPGIH");

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
    msg.setTimeStamp(0.21523672387771553);
    msg.setSource(15869U);
    msg.setSourceEntity(191U);
    msg.setDestination(8920U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.06545335540476815;
    msg.lon = 0.47650811381235036;

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
    msg.setTimeStamp(0.171058573087723);
    msg.setSource(39413U);
    msg.setSourceEntity(214U);
    msg.setDestination(51655U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.23360775609495565;
    msg.lon = 0.4270394002602039;

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
    msg.setTimeStamp(0.6428152827012158);
    msg.setSource(26419U);
    msg.setSourceEntity(131U);
    msg.setDestination(19437U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.9585085551786422;
    msg.lon = 0.936042202362847;

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
    msg.setTimeStamp(0.48553275040425936);
    msg.setSource(30087U);
    msg.setSourceEntity(21U);
    msg.setDestination(51941U);
    msg.setDestinationEntity(15U);
    msg.timeout = 8547U;
    msg.lat = 0.5218166573335637;
    msg.lon = 0.8971932144987106;
    msg.z = 0.6897699034542166;
    msg.z_units = 190U;
    msg.pitch = 0.6448167763515993;
    msg.amplitude = 0.9230534987022789;
    msg.duration = 2907U;
    msg.speed = 0.8475659580928563;
    msg.speed_units = 149U;
    msg.radius = 0.8761904153716913;
    msg.direction = 128U;
    msg.custom.assign("FHWTOIRHJWCOCNVLGMXFHROVEVTMHFDOTQXGEBYNFQIYSVUSLFPMTEBOQURPFOAQBZFGCUNHJCTGZAGROBAIKLNGKHPBZIWGYDUZEYZZPLSEKCSJKIUNQCHCIUXRRNKJEBFALPZXYKRXYYJMWWWRPIVWVOWTJQWUCNRDAPHOMNJYVPLIXDUAGWJFAXEHKMTYLKUXEAUHXTNMDBVQKSDLDC");

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
    msg.setTimeStamp(0.22810638689356344);
    msg.setSource(20437U);
    msg.setSourceEntity(89U);
    msg.setDestination(8616U);
    msg.setDestinationEntity(26U);
    msg.timeout = 21621U;
    msg.lat = 0.9394057585453128;
    msg.lon = 0.667356803142052;
    msg.z = 0.7191416338905177;
    msg.z_units = 29U;
    msg.pitch = 0.18083128530087578;
    msg.amplitude = 0.5251724890229398;
    msg.duration = 27949U;
    msg.speed = 0.7470054219851514;
    msg.speed_units = 173U;
    msg.radius = 0.2958751109856975;
    msg.direction = 108U;
    msg.custom.assign("PRHWICIUWRSOAMKSNWUNLCFEAQOGVGXPUETMALYNINSXZQTWLJLYQJBRGVSZPBHRDBZQPTWIYLRNDVIOGZTUNFDBMICOYNXHM");

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
    msg.setTimeStamp(0.6874369425737973);
    msg.setSource(41859U);
    msg.setSourceEntity(209U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(39U);
    msg.timeout = 6717U;
    msg.lat = 0.5947352124642742;
    msg.lon = 0.8701079489047426;
    msg.z = 0.01014658071421004;
    msg.z_units = 99U;
    msg.pitch = 0.2944929185475085;
    msg.amplitude = 0.5136758024608001;
    msg.duration = 49045U;
    msg.speed = 0.8087696378000742;
    msg.speed_units = 226U;
    msg.radius = 0.6157283603584714;
    msg.direction = 175U;
    msg.custom.assign("QAHVHCYXKDAPYURIFNRQTOERNOFZVWJLUOCQJPJINIIUTMDZIGKTXZFHYDTMTBRDLSBELLKYYYFBLAWJCAUDFBTVLVTRGMYODESJGYICKDZRPNGHWYLHOWKTSSRJNXKPBCBGHZAXAMRLNJSGGKXCVCWWDIBGINZETQHIPGEVERSQEMSHUSQBFZHZHOPOWRVUP");

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
    msg.setTimeStamp(0.7314446552150915);
    msg.setSource(38368U);
    msg.setSourceEntity(71U);
    msg.setDestination(62600U);
    msg.setDestinationEntity(78U);
    msg.formation_name.assign("XSXQAXQPDLJVGKYEOHZIBCLUSCOUNHQSCXVMHPZJYMCDLYISXVJAMCPWYSWWEQQNLKJSILQTQMPGBOABHSSDPXNMUXPZREPRTRHDOFVIGDZRGRZHGAJHTYZLFDUQERTYZYNWLFFMBDMMLKKFNTCICOLKKCADOHBCQNFAMGEOXKGZWQOMYUWVUWGFIFTJRXDSVEYVPZWUCTFVFKIUATTJRJKNBVPLONIEEZOGBIKAJBAJBRNBSGHEWUTRH");
    msg.reference_frame = 178U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41963U;
    tmp_msg_0.off_x = 0.3516034291471075;
    tmp_msg_0.off_y = 0.6191214870022369;
    tmp_msg_0.off_z = 0.7699342146148532;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NXZKOZZQQAGKVASSMJANAJCDMLNYWYSEVEWALSCUPWLFSUCCOODAYVMKRFLISUTEA");

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
    msg.setTimeStamp(0.06370495230117823);
    msg.setSource(14332U);
    msg.setSourceEntity(251U);
    msg.setDestination(58703U);
    msg.setDestinationEntity(47U);
    msg.formation_name.assign("XPHWVHYLDYZDRMTIZFRRPDBDNTXRRSEHTWGEJUSULHKOAZULBKWWSYVNKQJYPUXMADOQBCGFEWEBGTXFSNCRKMCGKAMCINWFGNMDCBPJUOWNVIGCCUTQPFXWXECJLKTSZXBBMFIIHVDDSHJXRLPWOMARMUVWHVYIYPOFVIEQHDOZFQATPAZJTJJQ");
    msg.reference_frame = 14U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7794U;
    tmp_msg_0.off_x = 0.6700814570109149;
    tmp_msg_0.off_y = 0.7224134043130349;
    tmp_msg_0.off_z = 0.6083580559673182;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FKJQQDMUBVPKILIGZTBUQARDDWGAJXZMBZFKQGWRJYEJCPAOGEYSICEUJGFOBHIRXPLHVLXYZAVPTQFNMVOYKBATESNQEKCVYXCTUHXSHAQVDKTMIWMPDFGBOKCSLPUQRWOLZOVCSHPLMUAYJRXXWEDMRIEHUCJRKJLYNWIEALFNKMBQBSUPBBUDHONGDUCXZVPNZZOTRFTOWWITKYNIHSDRQGMZGTAJEFPVWNTHYMWS");

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
    msg.setTimeStamp(0.635866579290509);
    msg.setSource(35470U);
    msg.setSourceEntity(237U);
    msg.setDestination(8696U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("FDMWSCDAHYIFMFOQUGXGOWUWCAFNBEYEVGJABHSDXROCSHLGPHJZKHGRYVLMTNZXSBITPPKDOZVZDEJILLLGKYGVUEMMEAVPWZMOQSWMDIHYGZNEXGBAVRVLJTQQFZDRALIFXPCYSQHIPERSBXTFTNKSAQIJYWRT");
    msg.reference_frame = 136U;
    msg.custom.assign("WJTFCHRLSPYKNXNEYWTVNXVIARTPVLESIAMWGAQKXOWCVUPXKNQXGDOBCEWLHQGABRFHDIZTCSVFQHSNZDVDUKESJYZZNOWUYOBMKCVGWAOZWTADRERXJCPFIUMFPAHXHNBSMZPJQPJXCGJDFMJKTZ");

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
    msg.setTimeStamp(0.10844422881302085);
    msg.setSource(9788U);
    msg.setSourceEntity(143U);
    msg.setDestination(573U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("ZZDQBORKMUVPXOQE");
    msg.formation_name.assign("VHYAAOSQPUONSCCWMIYMJLQXBVXGSANVWXKEFWDNJCJDFOKGFZPXHMGHCGKYIFHUHUIJDSZBTSTRQFYDPIEI");
    msg.plan_id.assign("MOLBOVCYRKVXFZYECPJKGDHSIWZJBBUIQNZAFCETLJMVEZUNJKFEGOMVYYYMUJOTXBCEHNCZFWSIFINXNURUDHXVCIQRQAPDGNTOBNALPPRBYBTXORHVYHXLLCEISLFYPJMVNKOWDDHUGKXJPPKVLDGRTQEJZG");
    msg.description.assign("NTANJVWJJLCZMOWMNQIERPKMZRUISKDANACLEADNRQREBZHYALEOYQRFJVBCUCLVDPZDUUANOFWISLCLYIVZXVHJTQGHMJYTTPNXOEGXIBCCIQFQSWSUITSXICSUZPNKWVHRAPWGMVHBFFQIEBNGBEMGTKYSUQBJKZZHLIZKPAAXVFSGMORXGUJHXYFTLYFJOOVNBPMDOCMHXPLXFWSWKDYCDUTEDLKKUMHWSVZOOTGAQKDXHDYGPBEWYTRPRF");
    msg.leader_speed = 0.9294540521666577;
    msg.leader_bank_lim = 0.8640806347298234;
    msg.pos_sim_err_lim = 0.6438673477299507;
    msg.pos_sim_err_wrn = 0.6749012385460554;
    msg.pos_sim_err_timeout = 20898U;
    msg.converg_max = 0.13211752316822312;
    msg.converg_timeout = 47651U;
    msg.comms_timeout = 6181U;
    msg.turb_lim = 0.809772046338727;
    msg.custom.assign("NABOCTJMMNLLIPEZGIKNCYGUTGJFZUNJZNLSOQOQQGVABRLWFFCMVBHYRPNVTXRQGEVUSPHCTYYXISXYQPGCWKHRASNYHCHAUKAXGAVPDOWVWJUEOIPKCNSITXSLCDEZWHXBQPDMRCWJDVIAZMBDZEOQFHZFEMFMBOTBGUYIPAUYIJXWKWXFKR");

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
    msg.setTimeStamp(0.07923774549097229);
    msg.setSource(23170U);
    msg.setSourceEntity(222U);
    msg.setDestination(44764U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("IUZHTUHMIROPIIWXYLWSPCGFDBMOVHXMQCJAQYSKKOKMNTETPSGAGOJTZCEGWWGWGQZMCLBKFFVIUVWNNK");
    msg.formation_name.assign("LMIQUZCLRQMNOTUKXDFEJLJMQTELFDHYPIGPAXYSGXGYHSAGQKAORVBFTFSCMDKWIVAYOZLFKFZKUXDXTLCTQQHMJRCOCINYYBIVGFPWNVKKLSELOTCYKXZBHMBATSBBVDIODTFJFJMEWKDUHYUAIPRPYSPHXNDNBIXZRZVJEBTUDHEVHMWQJGGCSOBDCUW");
    msg.plan_id.assign("SCUASPSKBSEDYDMGGAYSLQISUQNPNYACMQYIKCEZYIDOGHEIMKKCYMSTKVGVBVJACOTDPHATEKEXMZLSMEZPRDAZFHUJRDXRIGFWJEXZKWDMVNKLGNXTICZJLLCDHYWSTWHTWIQEXLFFTBOBOZGARAMLLFPN");
    msg.description.assign("GJINQBJYMTWYMXJPXEMDBANXEWOTSMVVUUSLVKZIEURMOYWCPWSKGEWTLOEQOZLFGTNTUFEBONHAYQSZAIFDCFNKRLEFOMJHYXLQMFOELRHWJBVPOINYUFYRHUGQQDTVTZZJBHIDGHCEMGFZKBLLSXXIHNXBZPLCRAHAMABRVKFYZRIDNKUQXWILKBDJSSCOIVBTVNDDACDAWUOJGVURHYPFZJXPJQTQAPQGISDWACYKCZRSRKGPVTWPC");
    msg.leader_speed = 0.686137218145367;
    msg.leader_bank_lim = 0.6191635569442641;
    msg.pos_sim_err_lim = 0.3012236328289125;
    msg.pos_sim_err_wrn = 0.7491357351514442;
    msg.pos_sim_err_timeout = 63003U;
    msg.converg_max = 0.8981139411947341;
    msg.converg_timeout = 33082U;
    msg.comms_timeout = 21631U;
    msg.turb_lim = 0.7183915952716339;
    msg.custom.assign("ZQCOCMRKYAXMFBBDIOEUCMCVBAXCREFGNBCOSSODSBAVYLDRYNDJQHSIWIRZIYJLIRXGWHPOJMX");

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
    msg.setTimeStamp(0.3663007133673286);
    msg.setSource(5267U);
    msg.setSourceEntity(118U);
    msg.setDestination(54927U);
    msg.setDestinationEntity(21U);
    msg.group_name.assign("KRZDLPXPTYICYEIZLYWASIBNUMEDLLONNCVZQYTYJTBWVQFQFADJGCFDKPVSAKKDRZTJHTUTPIJHPLSQZCHEPNSVFFEOZIOUBGFXVWTBUUTSMITSCDHUORBORPCERWBLFXIGNWMGKWCQNXLTGYXASCOGJLZPNYAUMUSKUKNSGJNRXPQBOB");
    msg.formation_name.assign("DOVNYBAQPNZUDBUBOSWCGFMXFVRKAGEHBUUDZHQVSKPVRSWPYRALONEKBSZAXLCYP");
    msg.plan_id.assign("WBUCNGEMFGSOHNSLVOXKQAADGXCIVMO");
    msg.description.assign("NUHZHCPGGCEXHPZWICKXUOPWDQVJLPFNWGBPTLCRBOINHOERNYZEZKZFQNHAMTXSJZWUDOQPARUIBKODQZFJBKRCLYMYZYRSBVABQLRAFOMSOYDHSIVLACUNPTRIENBQJXWSGLCJUXTJFNLATYUTZSMFERMBIWLXCXIXBFDKGYSIEPGVKKSLMFVREJYTEJPYIFRVYMZEHXCSJKADUVOTCUDKGVNDGVUEXAWK");
    msg.leader_speed = 0.5616062685531402;
    msg.leader_bank_lim = 0.44231623953796484;
    msg.pos_sim_err_lim = 0.1855028670391199;
    msg.pos_sim_err_wrn = 0.17039522673506124;
    msg.pos_sim_err_timeout = 32349U;
    msg.converg_max = 0.8774892661343482;
    msg.converg_timeout = 9868U;
    msg.comms_timeout = 61521U;
    msg.turb_lim = 0.7036601599771645;
    msg.custom.assign("SRPGOSPBLQDQEEWKLSSXAKAGCGVEQUBCTZHKHAKRXTGWCDFXZECLDPWXOWHTVMFJSGAONNGKUXLDAMCKAPQLUEOUZQUYTEBKITHN");

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
    msg.setTimeStamp(0.8159525481314284);
    msg.setSource(54015U);
    msg.setSourceEntity(234U);
    msg.setDestination(41658U);
    msg.setDestinationEntity(115U);
    msg.control_src = 16158U;
    msg.control_ent = 63U;
    msg.timeout = 0.4045696540124635;
    msg.loiter_radius = 0.416396973828266;
    msg.altitude_interval = 0.7161903509453437;

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
    msg.setTimeStamp(0.20770628080433684);
    msg.setSource(47543U);
    msg.setSourceEntity(49U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(175U);
    msg.control_src = 7487U;
    msg.control_ent = 145U;
    msg.timeout = 0.7789785138060218;
    msg.loiter_radius = 0.6188820129018499;
    msg.altitude_interval = 0.9427312841863879;

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
    msg.setTimeStamp(0.7985449263102613);
    msg.setSource(39332U);
    msg.setSourceEntity(137U);
    msg.setDestination(35854U);
    msg.setDestinationEntity(200U);
    msg.control_src = 23076U;
    msg.control_ent = 105U;
    msg.timeout = 0.1727984096686812;
    msg.loiter_radius = 0.8601952401290365;
    msg.altitude_interval = 0.3243540490863206;

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
    msg.setTimeStamp(0.43541256371994064);
    msg.setSource(60893U);
    msg.setSourceEntity(13U);
    msg.setDestination(31832U);
    msg.setDestinationEntity(103U);
    msg.flags = 190U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24780552630864328;
    tmp_msg_0.speed_units = 169U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6834872957544025;
    tmp_msg_1.z_units = 6U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2262475742323795;
    msg.lon = 0.7890281894511978;
    msg.radius = 0.047064555222070203;

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
    msg.setTimeStamp(0.35270358495550247);
    msg.setSource(24549U);
    msg.setSourceEntity(121U);
    msg.setDestination(46381U);
    msg.setDestinationEntity(89U);
    msg.flags = 19U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4528553094117779;
    tmp_msg_0.speed_units = 225U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.019641493930630083;
    tmp_msg_1.z_units = 187U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.22445400740133659;
    msg.lon = 0.7283754368470231;
    msg.radius = 0.18304154949835394;

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
    msg.setTimeStamp(0.07067800994757933);
    msg.setSource(63779U);
    msg.setSourceEntity(155U);
    msg.setDestination(46012U);
    msg.setDestinationEntity(36U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2020348193306376;
    tmp_msg_0.speed_units = 107U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6419746323721115;
    tmp_msg_1.z_units = 154U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9673920022658239;
    msg.lon = 0.3705418839023532;
    msg.radius = 0.3902241066773665;

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
    msg.setTimeStamp(0.8554464280449798);
    msg.setSource(55395U);
    msg.setSourceEntity(116U);
    msg.setDestination(26529U);
    msg.setDestinationEntity(67U);
    msg.control_src = 56886U;
    msg.control_ent = 34U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2566952136560179;
    tmp_tmp_msg_0_0.speed_units = 176U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.040826461311217255;
    tmp_tmp_msg_0_1.z_units = 140U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.09151704651137127;
    tmp_msg_0.lon = 0.7642206222560689;
    tmp_msg_0.radius = 0.5343345438790271;
    msg.reference.set(tmp_msg_0);
    msg.state = 115U;
    msg.proximity = 218U;

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
    msg.setTimeStamp(0.28690678862319696);
    msg.setSource(58410U);
    msg.setSourceEntity(164U);
    msg.setDestination(20401U);
    msg.setDestinationEntity(109U);
    msg.control_src = 30543U;
    msg.control_ent = 78U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 16U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.24526156916935615;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.500462157019149;
    tmp_tmp_msg_0_1.z_units = 164U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5763560450955652;
    tmp_msg_0.lon = 0.6579284225752469;
    tmp_msg_0.radius = 0.6447980999577084;
    msg.reference.set(tmp_msg_0);
    msg.state = 237U;
    msg.proximity = 250U;

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
    msg.setTimeStamp(0.3722941943548165);
    msg.setSource(36248U);
    msg.setSourceEntity(189U);
    msg.setDestination(6457U);
    msg.setDestinationEntity(164U);
    msg.control_src = 29860U;
    msg.control_ent = 56U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 209U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6491936070895683;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.07487532497917782;
    tmp_tmp_msg_0_1.z_units = 53U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7982361821250359;
    tmp_msg_0.lon = 0.5652377962332866;
    tmp_msg_0.radius = 0.8940332662239389;
    msg.reference.set(tmp_msg_0);
    msg.state = 229U;
    msg.proximity = 76U;

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
    msg.setTimeStamp(0.37069550279863384);
    msg.setSource(31419U);
    msg.setSourceEntity(219U);
    msg.setDestination(19118U);
    msg.setDestinationEntity(203U);
    msg.ax_cmd = 0.8815150191539771;
    msg.ay_cmd = 0.1672065252648155;
    msg.az_cmd = 0.22132321886792328;
    msg.ax_des = 0.6913770193828821;
    msg.ay_des = 0.04994536431148966;
    msg.az_des = 0.8227771658566974;
    msg.virt_err_x = 0.5380474208965151;
    msg.virt_err_y = 0.6382870624601621;
    msg.virt_err_z = 0.7825605934725274;
    msg.surf_fdbk_x = 0.4997918598332778;
    msg.surf_fdbk_y = 0.902813480296277;
    msg.surf_fdbk_z = 0.6348514493308549;
    msg.surf_unkn_x = 0.7608100907353811;
    msg.surf_unkn_y = 0.918925872715125;
    msg.surf_unkn_z = 0.8245815636696869;
    msg.ss_x = 0.723975927619652;
    msg.ss_y = 0.7562044265166553;
    msg.ss_z = 0.24472284000644218;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NPBEKXGZOZDEKMSICSYSJMUBJGJTUFEBFJIEHOHTDSPQNBWIUR");
    tmp_msg_0.dist = 0.17169418425155303;
    tmp_msg_0.err = 0.9582255269824089;
    tmp_msg_0.ctrl_imp = 0.721328783168682;
    tmp_msg_0.rel_dir_x = 0.8061087962437768;
    tmp_msg_0.rel_dir_y = 0.07783340590105181;
    tmp_msg_0.rel_dir_z = 0.18801369016496328;
    tmp_msg_0.err_x = 0.6422888890943481;
    tmp_msg_0.err_y = 0.5117097398253186;
    tmp_msg_0.err_z = 0.6035073324400196;
    tmp_msg_0.rf_err_x = 0.7564427889240927;
    tmp_msg_0.rf_err_y = 0.017330274748960206;
    tmp_msg_0.rf_err_z = 0.4240226372677298;
    tmp_msg_0.rf_err_vx = 0.06779213305702791;
    tmp_msg_0.rf_err_vy = 0.5781556925498007;
    tmp_msg_0.rf_err_vz = 0.9488957061795463;
    tmp_msg_0.ss_x = 0.4952189107945333;
    tmp_msg_0.ss_y = 0.824156690676126;
    tmp_msg_0.ss_z = 0.3074897535466744;
    tmp_msg_0.virt_err_x = 0.41207754581850886;
    tmp_msg_0.virt_err_y = 0.901410275386273;
    tmp_msg_0.virt_err_z = 0.018737781158918776;
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
    msg.setTimeStamp(0.5482085540136384);
    msg.setSource(21704U);
    msg.setSourceEntity(212U);
    msg.setDestination(49852U);
    msg.setDestinationEntity(29U);
    msg.ax_cmd = 0.5711281331527099;
    msg.ay_cmd = 0.17093638615893703;
    msg.az_cmd = 0.2115283181742763;
    msg.ax_des = 0.7633910059361019;
    msg.ay_des = 0.2866562752734404;
    msg.az_des = 0.7056827374793241;
    msg.virt_err_x = 0.050834466182426374;
    msg.virt_err_y = 0.20229647262300188;
    msg.virt_err_z = 0.40254776829769523;
    msg.surf_fdbk_x = 0.28884745872512707;
    msg.surf_fdbk_y = 0.2179985811795141;
    msg.surf_fdbk_z = 0.9615585171117043;
    msg.surf_unkn_x = 0.8565998381181861;
    msg.surf_unkn_y = 0.654618516054736;
    msg.surf_unkn_z = 0.36898325557239764;
    msg.ss_x = 0.0013039108884019823;
    msg.ss_y = 0.8692679623152157;
    msg.ss_z = 0.36369382113194626;

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
    msg.setTimeStamp(0.9801713593749268);
    msg.setSource(11546U);
    msg.setSourceEntity(241U);
    msg.setDestination(38335U);
    msg.setDestinationEntity(25U);
    msg.ax_cmd = 0.14364434381386437;
    msg.ay_cmd = 0.2657883998631546;
    msg.az_cmd = 0.884158393305098;
    msg.ax_des = 0.2064726157006056;
    msg.ay_des = 0.9348813694693678;
    msg.az_des = 0.6204359048980292;
    msg.virt_err_x = 0.2969162106823179;
    msg.virt_err_y = 0.43285442652120154;
    msg.virt_err_z = 0.25111013508156776;
    msg.surf_fdbk_x = 0.08201464630717026;
    msg.surf_fdbk_y = 0.8365393163346919;
    msg.surf_fdbk_z = 0.15688899319816985;
    msg.surf_unkn_x = 0.23451278428317301;
    msg.surf_unkn_y = 0.14832771286555213;
    msg.surf_unkn_z = 0.842919789080581;
    msg.ss_x = 0.9356910314998228;
    msg.ss_y = 0.26348559675586314;
    msg.ss_z = 0.5716525091003825;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YVFDLYBYWPHFIGLGNRTRZNRUPQWCANOBDOMKMSILXVNEWKUFMKKURDOXEAGTTTKNHZGZEOHCVSYRAQJIHPXAJADBNWKLBXKJYCDZSXVWBTXVTJFIDUVUMPYGZOCTGINYWFGMOGCWHEWSQERBUFIZEAGOYDVSHAVQZTBQOIPYTUOQXMKNBQLLFDCZ");
    tmp_msg_0.dist = 0.9261619034792595;
    tmp_msg_0.err = 0.7495371576441534;
    tmp_msg_0.ctrl_imp = 0.669492114867335;
    tmp_msg_0.rel_dir_x = 0.025411308630523877;
    tmp_msg_0.rel_dir_y = 0.6809489833323615;
    tmp_msg_0.rel_dir_z = 0.15338204901416364;
    tmp_msg_0.err_x = 0.46918211673221066;
    tmp_msg_0.err_y = 0.9314029904172099;
    tmp_msg_0.err_z = 0.3784207665595627;
    tmp_msg_0.rf_err_x = 0.8552961873433325;
    tmp_msg_0.rf_err_y = 0.4076342110707618;
    tmp_msg_0.rf_err_z = 0.29437918127386753;
    tmp_msg_0.rf_err_vx = 0.5393711959984646;
    tmp_msg_0.rf_err_vy = 0.9957551289749762;
    tmp_msg_0.rf_err_vz = 0.985845105850759;
    tmp_msg_0.ss_x = 0.6134184624867477;
    tmp_msg_0.ss_y = 0.09360068565581425;
    tmp_msg_0.ss_z = 0.7432774297323791;
    tmp_msg_0.virt_err_x = 0.8078849303070025;
    tmp_msg_0.virt_err_y = 0.05991682707601509;
    tmp_msg_0.virt_err_z = 0.5258271848637022;
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
    msg.setTimeStamp(0.02264007273745028);
    msg.setSource(2440U);
    msg.setSourceEntity(59U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("CHIXOQJUDTNVOLNLLGHIEDJYRZGGELUIWLCFSAWFDBAMUOABQZFBETIBMHZHVDKPLGZEIRVWDYWZAJQNRNDTRGWAXOVHNXPLMEONPDXWQTAUYVVPQLYVMDABXUGESCGCJSTKKVBPHURLOROYSYSGI");
    msg.dist = 0.7366567267076026;
    msg.err = 0.2755310056902772;
    msg.ctrl_imp = 0.7200252749879138;
    msg.rel_dir_x = 0.7955297597474547;
    msg.rel_dir_y = 0.7559975223494745;
    msg.rel_dir_z = 0.32854934318228957;
    msg.err_x = 0.7785578333067614;
    msg.err_y = 0.386956506333924;
    msg.err_z = 0.2835608152462178;
    msg.rf_err_x = 0.6140626248239313;
    msg.rf_err_y = 0.6226154669400029;
    msg.rf_err_z = 0.4393341165688165;
    msg.rf_err_vx = 0.661270128104234;
    msg.rf_err_vy = 0.8821363964576218;
    msg.rf_err_vz = 0.8223741574145079;
    msg.ss_x = 0.8435034333768305;
    msg.ss_y = 0.6768625120037453;
    msg.ss_z = 0.3186361808993712;
    msg.virt_err_x = 0.32724655350778553;
    msg.virt_err_y = 0.13711815362393898;
    msg.virt_err_z = 0.7102572812206429;

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
    msg.setTimeStamp(0.16353110785485547);
    msg.setSource(18154U);
    msg.setSourceEntity(40U);
    msg.setDestination(61494U);
    msg.setDestinationEntity(151U);
    msg.s_id.assign("SZPVZAODCCPUTBSUTCWGLNCCBYCZMZRITLMGYIYHHSFEIZYEVUZJCFZORSFYZWYQVHLAADTPVHJVQIBESLEWEGRTLCSFBDOGHUUWJHDIWMHVRNOJNTDTPHFOWSQNMKJNASROJQAZVKKAQAVORGKXIMYKLMSRHNJXPICKLOFDEFTR");
    msg.dist = 0.720413680477487;
    msg.err = 0.4420610772732523;
    msg.ctrl_imp = 0.8755078620177544;
    msg.rel_dir_x = 0.5898024867725781;
    msg.rel_dir_y = 0.8521786539167129;
    msg.rel_dir_z = 0.67301561741615;
    msg.err_x = 0.33634344537922056;
    msg.err_y = 0.4002649931077812;
    msg.err_z = 0.9452637201539889;
    msg.rf_err_x = 0.9096845716578941;
    msg.rf_err_y = 0.10908054962627012;
    msg.rf_err_z = 0.9252683105547439;
    msg.rf_err_vx = 0.9393953022291103;
    msg.rf_err_vy = 0.7092581873579243;
    msg.rf_err_vz = 0.1705684483148433;
    msg.ss_x = 0.10333150523416856;
    msg.ss_y = 0.7672969780255433;
    msg.ss_z = 0.421739038855371;
    msg.virt_err_x = 0.8573708711081548;
    msg.virt_err_y = 0.7783990495498644;
    msg.virt_err_z = 0.5398212890175064;

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
    msg.setTimeStamp(0.930999500018958);
    msg.setSource(47367U);
    msg.setSourceEntity(186U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(149U);
    msg.s_id.assign("MVYZUWZPTJNTKLGSPAXJTUFGRFPNVQZFUBVMZHEOXNWPXQHSUIWMHRAMNXGBUPBKTXSXRUOEHBIPNFMLDQAAXHHBTLPSIT");
    msg.dist = 0.9357666133447925;
    msg.err = 0.35942764179544584;
    msg.ctrl_imp = 0.5235378666410659;
    msg.rel_dir_x = 0.12796809642519746;
    msg.rel_dir_y = 0.0986820628660573;
    msg.rel_dir_z = 0.9488096093865502;
    msg.err_x = 0.861966977893146;
    msg.err_y = 0.9281956317776616;
    msg.err_z = 0.24005378710694125;
    msg.rf_err_x = 0.16800089602611556;
    msg.rf_err_y = 0.583490597869353;
    msg.rf_err_z = 0.6337044120517372;
    msg.rf_err_vx = 0.5335319818393583;
    msg.rf_err_vy = 0.7482156916660829;
    msg.rf_err_vz = 0.5491134718448528;
    msg.ss_x = 0.5675225042536742;
    msg.ss_y = 0.35268337034718134;
    msg.ss_z = 0.049049966447509585;
    msg.virt_err_x = 0.8223254734023661;
    msg.virt_err_y = 0.6879688098801641;
    msg.virt_err_z = 0.0521962091514252;

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
    msg.setTimeStamp(0.7768009320920856);
    msg.setSource(39767U);
    msg.setSourceEntity(230U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(191U);
    msg.timeout = 15389U;
    msg.rpm = 0.2905321370931897;
    msg.direction = 25U;
    msg.custom.assign("JAEDBSNPNPTZFFMYBYOXIRBFBBCFEGMHEPNZACRMQAQWZYLFELSOHCOGREGNMKYGJLKPVAWSCYMKNIUXVCWDKOACJDUILPIELMRDQFDUXDCEPDVESOWCZHZTGUHVQJAJIGAHCHRRZTQGNABSXYWJWWNBEFSFPRUTTNJVLKYTWATDRXDJKHPXBXHEQVLOTVMBMTIO");

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
    msg.setTimeStamp(0.05930163338301564);
    msg.setSource(14507U);
    msg.setSourceEntity(184U);
    msg.setDestination(5600U);
    msg.setDestinationEntity(76U);
    msg.timeout = 52791U;
    msg.rpm = 0.48831141736259365;
    msg.direction = 176U;
    msg.custom.assign("RGJYHKTBVBCVHMYEMDQJCWZ");

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
    msg.setTimeStamp(0.9175340582582511);
    msg.setSource(59628U);
    msg.setSourceEntity(174U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(0U);
    msg.timeout = 55818U;
    msg.rpm = 0.5769633903032685;
    msg.direction = 239U;
    msg.custom.assign("RTIJCVAVHNMCUWAJVHMPUETBZIDLICVFJRYQDWEXLZGPAHLDRYMKENEWHNQPHMEVOEUIQNVQWLJJXULYIXVPFIOPUAMCNOOFMNUMXKSJTVBAJZYOADJBQPTUWKDDWNXWLFETSUCPFSGABQPZBKWZXTGCGHXSPBENDHZDYGYKJUCUTSRMBNVILKROHLIGFYBZSGTMXWQVZQZRR");

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
    msg.setTimeStamp(0.6126567420278884);
    msg.setSource(11461U);
    msg.setSourceEntity(233U);
    msg.setDestination(19205U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("ADMQVVSQRVCJYHLBPZSGAZAISEXGMLRNAOAKUCGGTBIIKWFZYWFUOJGEUGZUOFPFYYQOHBQTTWAPRPOBVKSKAPNXRTSENXBHFGRTNMQUVLQSCHTGYDFUXAOWIRIXELNPBHNIXQSMDEHMYZDHZPUPHFIJXDARCHJDJNKVCT");
    msg.type = 110U;
    msg.op = 83U;
    msg.group_name.assign("JVRYNEECMCKJAJIPYIITMAIRECFOMZUMYWBBDGWUMNVURWEGTROXLWRMOKQIGRFNVQEBQPPDMYDSJAVKVSIQSPLPZHTGCJSOUCZRCUDEGLWLGAXWDCZBKBHCLJMBQELONKNRMYHLFASAFYWSVDZGFAKEJHFTSQYDIQFNUAENVKDKIYTDOSVFFBCRPPUILXXQHOQSMZX");
    msg.plan_id.assign("JQLPPTEUFDYFMTPVFCBJRYJZSQAOKIGAOTOCKSNQDRTPHXQSYWFCWUUHMVRONWEOAUOWQZBTAGEKSIYFELHMRKECIBPZGUZHGJFJZXDHGWXIDVKLXZOQAUQBSSFVVFMWSCHQVBPILLMYFJTXSCEPIDUWTIKNEPVZWIBLOMMHBAYDYZLXAMPJYDVGNYKDUGACCOLRMNJCIJSNOWBLHLRXNQEXPNRFDDBMYAHTRHTVNZN");
    msg.description.assign("JWUWWERJHBNPQPPOEJV");
    msg.reference_frame = 127U;
    msg.leader_bank_lim = 0.771399026254169;
    msg.leader_speed_min = 0.3745524275204227;
    msg.leader_speed_max = 0.31250647278595023;
    msg.leader_alt_min = 0.0031130924164399776;
    msg.leader_alt_max = 0.7540262907889782;
    msg.pos_sim_err_lim = 0.8829487495161698;
    msg.pos_sim_err_wrn = 0.1357920251654977;
    msg.pos_sim_err_timeout = 48177U;
    msg.converg_max = 0.12569258279143314;
    msg.converg_timeout = 21768U;
    msg.comms_timeout = 39885U;
    msg.turb_lim = 0.2906312509074428;
    msg.custom.assign("CDQRNDYMRYAJUJRZQZXPNHLTEFIZDQAGEBJWNYPJMIMUOYGICVNZWKZWVMHTFICYIHPEIUASCLJQVIQSEXBFXUBYLOGGLSTQ");

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
    msg.setTimeStamp(0.28107989950429413);
    msg.setSource(8082U);
    msg.setSourceEntity(22U);
    msg.setDestination(25816U);
    msg.setDestinationEntity(131U);
    msg.formation_name.assign("YOQTFLNKQRIFGRXRWHMHWATCWORFLCDOPDUFRJMWZDSJFUAEJSVAOLUHLDVVNWZLXRLOGARUAUZRVEKCXKYKJPTEJXRIUDVWQQBVBBXPPGIKXCAYOHCQTPESCWFSMGPSFMOWVYZSBNZYNAYBMECSTQSJFPOYSKDUWLALGOFXT");
    msg.type = 87U;
    msg.op = 67U;
    msg.group_name.assign("HNJDKROOTZPYFKSANSSYQVLBKVFDQHCWGAEJOFCBBCWJZCDVWNIGPDNJPIPTWKRBMTWDOJAQKBSUAIZHHMLXQULRRLZMEWBPNUXCKRYRXTSGTVUXMXVEUXNAEMOFXEPHGOLAAYIKYSJOCZBUKNLUDYEYRWPHQMMQYZCYDZFDQQIECWFNZGUBFYXJMQAZRRHWTQHVAJBNGFTEJGKTEOF");
    msg.plan_id.assign("WZKMUQHKKXUGNSBWEZGBOLALEUMRRJNIDCIMDVSVWXOISTDCRYOUNWHRGMJVMDXHKZIVVHAEGNAUPFNXWQLJRKPQXNVDGKZKNXYNLQBXWMCBAMQLUFNTHBZQPYAECBTKPEHFCSCTFSHI");
    msg.description.assign("XKXVZBOQVBGSXKCDFKLPWGYTPSBQAJNR");
    msg.reference_frame = 149U;
    msg.leader_bank_lim = 0.07164829307108267;
    msg.leader_speed_min = 0.7765130172554428;
    msg.leader_speed_max = 0.8074289948067618;
    msg.leader_alt_min = 0.24989912508493073;
    msg.leader_alt_max = 0.6265452484367816;
    msg.pos_sim_err_lim = 0.7060752606463663;
    msg.pos_sim_err_wrn = 0.8603409527155051;
    msg.pos_sim_err_timeout = 11454U;
    msg.converg_max = 0.6194390597664718;
    msg.converg_timeout = 28098U;
    msg.comms_timeout = 26921U;
    msg.turb_lim = 0.0507190369032986;
    msg.custom.assign("CJXFCDBNHVZGNDMVOOTISAOGAIQZOOYJDSKURNRYOAYPDXASWUHNGGLQKJXLMZHUBACQDUPWMWPLUKJH");

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
    msg.setTimeStamp(0.6553162643030688);
    msg.setSource(53324U);
    msg.setSourceEntity(34U);
    msg.setDestination(35848U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("DKJNXTABLHWRPXQCNBKUEGUCRCRZZSMRHBIXASAWZDVQGPXPHSJVOLOBGUSEFMPFLMANQFZBGPZFGCRECSKTOGIKXAFXTXIZQFZJLOJOMNGWCOZEYZIEUZCLXKVHCKLJJDIQLKPTFIJCRDHGVPPDTWQWUBSWDBYBVWHYVBUETRUOLIYXVFQMNSKIFSNMALJRDMGYPDANXEFTYSKUPDVAIWEA");
    msg.type = 242U;
    msg.op = 65U;
    msg.group_name.assign("GAQCPMZDXYXPGEMQCVISCGRZXEZJUAXTYVDQPPZOHVLDHKJYLYFQFPNZDVHBJRYZSWIYLKOBQHRTKUFPLUKUSDMHJCNTEFNBHMBZTQVEXYTAYVRBWHSXIWWVNDEREQQMOASBOEIKXTUKGCWYZXANSKQEGGEWPGFRZVJDUJYCHXIRFKNXDOWBFULATJJIU");
    msg.plan_id.assign("WRRQCNIQOVASKWFBCCLSVZRSUYIVMUSQPRWNEGMTRKVGODBXMHEBCTIUQCFXFQNKSSYXYEZJNSBFDAOKVUYPEKWYHWTCGLTLJFJZHAEPTLSPEEAQYYBMJLAIRHJIVDGIHXJXMDJPTYBNOBFDLUHJKRSZMMIFLACDTXIAWOTVNQCROEZOUGIJQMKRGPHODMFTTVCLXFBNWPXPGUZAUYNVWAMJPNVEZDBIH");
    msg.description.assign("TNZYDATCXHRVMOIBBDVZWGCVKCOEKPDLNNRNNWJJZBQQRCNLTMTPUSLAGTTVPWFSIHMKALLBAOEMSMJBHBHXQZQBUIFZYKAJVIFYRORSYCWWGRUDSOLWEPIACOSPQEKKKYQXFDOCIAJDFQVPNXIMHGTXMFBUOHQLAUMQPWZXYOHZTGJXNOPXXY");
    msg.reference_frame = 173U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35749U;
    tmp_msg_0.off_x = 0.5126400423180766;
    tmp_msg_0.off_y = 0.319957966308837;
    tmp_msg_0.off_z = 0.8386682846971525;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.04180801733678485;
    msg.leader_speed_min = 0.7526250981194097;
    msg.leader_speed_max = 0.8593132936718945;
    msg.leader_alt_min = 0.32896898378470363;
    msg.leader_alt_max = 0.6518263074117666;
    msg.pos_sim_err_lim = 0.6696295938737593;
    msg.pos_sim_err_wrn = 0.3341344181534619;
    msg.pos_sim_err_timeout = 36798U;
    msg.converg_max = 0.1723467325323802;
    msg.converg_timeout = 33500U;
    msg.comms_timeout = 50274U;
    msg.turb_lim = 0.1468600159554243;
    msg.custom.assign("OWWKVVXECKMEQAUWOGSKOAVEIFEHCKIUKGHNUSRNITEBLJWTAKKNFYZQMOMEMGSZAUQPIFCBZBPPGVHICSEDFOCDFLPYQDRDAXSBDLYSJBJHFMFZHTBNAGDTZMZYXIRNPVMVHSRXMCGOJNTNBOJDLV");

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
    msg.setTimeStamp(0.05091484031055871);
    msg.setSource(40635U);
    msg.setSourceEntity(181U);
    msg.setDestination(16685U);
    msg.setDestinationEntity(4U);
    msg.timeout = 42347U;
    msg.lat = 0.42646296055694055;
    msg.lon = 0.025278306838332543;
    msg.z = 0.9438560735908835;
    msg.z_units = 70U;
    msg.speed = 0.3339043552038241;
    msg.speed_units = 240U;
    msg.custom.assign("ZSQNPHNRAISWVXXTDYWQJGZADLJTNNQMJNXFVTIZPJOSDPUDPMAHDANEUQAWR");

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
    msg.setTimeStamp(0.41870844678298047);
    msg.setSource(55277U);
    msg.setSourceEntity(148U);
    msg.setDestination(22572U);
    msg.setDestinationEntity(16U);
    msg.timeout = 39996U;
    msg.lat = 0.5064751892363959;
    msg.lon = 0.8554142115305334;
    msg.z = 0.7297873074905976;
    msg.z_units = 175U;
    msg.speed = 0.8753308679176675;
    msg.speed_units = 23U;
    msg.custom.assign("QOAZOQDCCYNEOPUJYTHEISJEYXHNLG");

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
    msg.setTimeStamp(0.3369572784523447);
    msg.setSource(23146U);
    msg.setSourceEntity(112U);
    msg.setDestination(6581U);
    msg.setDestinationEntity(32U);
    msg.timeout = 7548U;
    msg.lat = 0.8328448626221622;
    msg.lon = 0.8351415983115451;
    msg.z = 0.9414778517626855;
    msg.z_units = 29U;
    msg.speed = 0.46585881438108745;
    msg.speed_units = 202U;
    msg.custom.assign("VIWLXGJSENLIKBDIN");

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
    msg.setTimeStamp(0.6360196962407105);
    msg.setSource(21805U);
    msg.setSourceEntity(80U);
    msg.setDestination(51951U);
    msg.setDestinationEntity(71U);
    msg.timeout = 46849U;
    msg.lat = 0.14374526798134146;
    msg.lon = 0.38448241105407976;
    msg.z = 0.7584727595245474;
    msg.z_units = 78U;
    msg.speed = 0.5973610016686711;
    msg.speed_units = 130U;
    msg.custom.assign("VQMNIEBJQQGZKYSCKUFFOVDJCXLBVZOMYMNIDAGQJMWITUYNXBAKATRCTOOATHTGVRNNWQQIHYNYGPWUETZJIWQHSSHRYQCRXPGJOXFBBSDV");

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
    msg.setTimeStamp(0.05978034542567845);
    msg.setSource(46560U);
    msg.setSourceEntity(39U);
    msg.setDestination(22996U);
    msg.setDestinationEntity(11U);
    msg.timeout = 2019U;
    msg.lat = 0.10363017378973971;
    msg.lon = 0.49845814004190636;
    msg.z = 0.5952478102824688;
    msg.z_units = 61U;
    msg.speed = 0.022267546508571878;
    msg.speed_units = 188U;
    msg.custom.assign("LDCCHPAKUOGFQWNLMCWGSCYMEESRXYZPVPPYWJNTTVSKHYLKIMWKYLXBSBAIBGPYVDTLDHZVGCPAJMHGRARBAYCZNDFXNIHSGZGEQNMJEROADMZIIQZQJHFQWXKJMVWQPSIANLZDEYBUOWLTWDNXQDBTERMDMUKKWQBQKIVTEGFEXNTJEJKAOITXO");

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
    msg.setTimeStamp(0.8380186861989777);
    msg.setSource(6106U);
    msg.setSourceEntity(40U);
    msg.setDestination(33148U);
    msg.setDestinationEntity(122U);
    msg.timeout = 43052U;
    msg.lat = 0.8714976438125224;
    msg.lon = 0.9986675677321104;
    msg.z = 0.9380044543407899;
    msg.z_units = 233U;
    msg.speed = 0.5635156269069815;
    msg.speed_units = 165U;
    msg.custom.assign("WOMUFWKNGAZNTVCYGQPRMJQJTCIBWLXMDEKDBOBOXAJCNZNRGYXETOGHQWEPOHABLSWZLUPUFGXKMGVIBNMKRZZOWOXACRHHHHBJIRQXQMCPLGETFJLJDXTLKVAWYFTDVKWVEOLPVTUFQKZSFEQPSHHWRCUIUKFZMDFBMYDEVNPGSRKLYSIXDDXJASQEYGTLJYIUBFJDFNRPCACXW");

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
    msg.setTimeStamp(0.6130931274774017);
    msg.setSource(31805U);
    msg.setSourceEntity(188U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(10U);
    msg.arrival_time = 0.7368618195846386;
    msg.lat = 0.9409925302411305;
    msg.lon = 0.28490786083352737;
    msg.z = 0.353653370642777;
    msg.z_units = 38U;
    msg.travel_z = 0.7658084848083786;
    msg.travel_z_units = 87U;
    msg.delayed = 184U;

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
    msg.setTimeStamp(0.6037729497898526);
    msg.setSource(57399U);
    msg.setSourceEntity(113U);
    msg.setDestination(18168U);
    msg.setDestinationEntity(83U);
    msg.arrival_time = 0.39395361270327856;
    msg.lat = 0.9039855140760668;
    msg.lon = 0.12860436544860587;
    msg.z = 0.26617030222109794;
    msg.z_units = 213U;
    msg.travel_z = 0.004646774006145438;
    msg.travel_z_units = 175U;
    msg.delayed = 67U;

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
    msg.setTimeStamp(0.5854176688819641);
    msg.setSource(20236U);
    msg.setSourceEntity(219U);
    msg.setDestination(24450U);
    msg.setDestinationEntity(5U);
    msg.arrival_time = 0.8635552475455024;
    msg.lat = 0.9023036286491682;
    msg.lon = 0.6783592916748254;
    msg.z = 0.21797639530529977;
    msg.z_units = 246U;
    msg.travel_z = 0.9704752038681285;
    msg.travel_z_units = 1U;
    msg.delayed = 163U;

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
    msg.setTimeStamp(0.6017653136566152);
    msg.setSource(44049U);
    msg.setSourceEntity(227U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.41037783138914596;
    msg.lon = 0.6995373102427073;
    msg.z = 0.6656090327840448;
    msg.z_units = 225U;
    msg.speed = 0.11459284055393759;
    msg.speed_units = 50U;
    msg.bearing = 0.030264224675473295;
    msg.cross_angle = 0.10342876811086787;
    msg.width = 0.6558156116620291;
    msg.length = 0.9791020846906213;
    msg.coff = 151U;
    msg.angaperture = 0.6790846774012;
    msg.range = 58778U;
    msg.overlap = 128U;
    msg.flags = 72U;
    msg.custom.assign("VCSSIHRDDRWKJXRWKWPHTWJYXAMTMGGGGOKPNLGZQOOKUUCWFRJWRABKMYLBAFRKDFNBOGTAXPADSUYAXJXIQBHCQHYFYXTLCURWMNKTUUZLVNPQJKQMMBGBHQEQBUVJFYTSUUZVVMLDOZZBECMIKIYJNLVCELDVYGIJWUNXK");

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
    msg.setTimeStamp(0.7062296199354532);
    msg.setSource(41361U);
    msg.setSourceEntity(115U);
    msg.setDestination(26355U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.6548397032385599;
    msg.lon = 0.8286380540070669;
    msg.z = 0.25149957658774424;
    msg.z_units = 87U;
    msg.speed = 0.9828361465292895;
    msg.speed_units = 34U;
    msg.bearing = 0.9555426270049011;
    msg.cross_angle = 0.3772885869840382;
    msg.width = 0.9781688778014901;
    msg.length = 0.07171246320137292;
    msg.coff = 54U;
    msg.angaperture = 0.758207752418413;
    msg.range = 43989U;
    msg.overlap = 59U;
    msg.flags = 111U;
    msg.custom.assign("FBNJPFIZSATJWVWUDBKYPOEHWGTWTIMYYUOFVXFNRZXHLDXRIGNAQNUISLBVLOKAGTRKKCDQVZAHAZZEQCWRRMQXOMFUODWU");

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
    msg.setTimeStamp(0.8399411641073719);
    msg.setSource(10849U);
    msg.setSourceEntity(218U);
    msg.setDestination(51214U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.19306589082915415;
    msg.lon = 0.379456438371347;
    msg.z = 0.5144124387571204;
    msg.z_units = 181U;
    msg.speed = 0.33087347166004377;
    msg.speed_units = 62U;
    msg.bearing = 0.17950625485895666;
    msg.cross_angle = 0.31175185351172763;
    msg.width = 0.36780289850134273;
    msg.length = 0.7138132944315398;
    msg.coff = 98U;
    msg.angaperture = 0.4088436408868079;
    msg.range = 46598U;
    msg.overlap = 175U;
    msg.flags = 191U;
    msg.custom.assign("HDQMQYFUDRHZXBVNXEAGVEHTSCUSSXYWUMEPJHZIEWCUOHKAKFQUSJRMKXOGGIYUXWOZGURCUCINWVTRGAJFLZSPVXKGQRBFYOTQJWIFANNMAFHOCZEQKFAUSYVSDJBWWYMXDPPZZLLLZXLSDCMKVQOKVAEQLJPEPCNCBZGIOVPPTTBE");

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
    msg.setTimeStamp(0.3166652426466453);
    msg.setSource(2467U);
    msg.setSourceEntity(227U);
    msg.setDestination(27712U);
    msg.setDestinationEntity(124U);
    msg.timeout = 5514U;
    msg.lat = 0.8734365901439017;
    msg.lon = 0.10488411658348529;
    msg.z = 0.24828511009959664;
    msg.z_units = 13U;
    msg.speed = 0.962628207785912;
    msg.speed_units = 15U;
    msg.syringe0 = 58U;
    msg.syringe1 = 115U;
    msg.syringe2 = 98U;
    msg.custom.assign("ICCXMUYLSVBNPHLLYHEIWIDWZAHIHRMQDBHKSZYPWRIJGCOCYQZVKLNWQNSBNFPROBOHROJMCOHVWTJOPAUCZUCOVPWEFOHXESQRUBMVEZGQSNPMQDGTDFTXWDYZUECXRCAFQMYSKKEGXJYGAIHOJL");

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
    msg.setTimeStamp(0.8924339167901563);
    msg.setSource(33139U);
    msg.setSourceEntity(158U);
    msg.setDestination(19563U);
    msg.setDestinationEntity(35U);
    msg.timeout = 54249U;
    msg.lat = 0.3084229210680034;
    msg.lon = 0.93955792700642;
    msg.z = 0.9853862470052285;
    msg.z_units = 114U;
    msg.speed = 0.9978996245384126;
    msg.speed_units = 221U;
    msg.syringe0 = 8U;
    msg.syringe1 = 70U;
    msg.syringe2 = 19U;
    msg.custom.assign("ZHKXGZNTDNWKGIBFIQXSXDS");

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
    msg.setTimeStamp(0.4966856786578623);
    msg.setSource(51842U);
    msg.setSourceEntity(232U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(145U);
    msg.timeout = 4264U;
    msg.lat = 0.9864852741796287;
    msg.lon = 0.555008762198658;
    msg.z = 0.31529357428090754;
    msg.z_units = 23U;
    msg.speed = 0.2912294119139961;
    msg.speed_units = 53U;
    msg.syringe0 = 100U;
    msg.syringe1 = 226U;
    msg.syringe2 = 217U;
    msg.custom.assign("HDTSGKQBHRWCMZZFTYSOQRLTFSRDHEWAOUALGIIGCNTGJDWTHFDMJMJNVCOXNRNDPNMUOKSXHKLUQNFKMGHEJQDJARNKWDTEAXRVSBBZNHYAVXEAOIRVKLOGVTIHS");

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
    msg.setTimeStamp(0.0025924142770029635);
    msg.setSource(54107U);
    msg.setSourceEntity(39U);
    msg.setDestination(10161U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.054729701114140994);
    msg.setSource(21996U);
    msg.setSourceEntity(72U);
    msg.setDestination(2489U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.3464785291607251);
    msg.setSource(41723U);
    msg.setSourceEntity(115U);
    msg.setDestination(31798U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.5893408624907639);
    msg.setSource(6875U);
    msg.setSourceEntity(112U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.10416211108403861;
    msg.lon = 0.12100774765245759;
    msg.z = 0.0947385816738433;
    msg.z_units = 146U;
    msg.speed = 0.021275437603356706;
    msg.speed_units = 28U;
    msg.takeoff_pitch = 0.2146399518060842;
    msg.custom.assign("XEAZXMFPXECMOBTBWMEGBPTBZQTPZJKENYLFWPXABVIOAQJNKCDDXCQEHZPOLDQYGSROIAFYCMRUHS");

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
    msg.setTimeStamp(0.004579839517863782);
    msg.setSource(25973U);
    msg.setSourceEntity(157U);
    msg.setDestination(30677U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.5034406798828499;
    msg.lon = 0.6897297689519705;
    msg.z = 0.6405847872999209;
    msg.z_units = 112U;
    msg.speed = 0.17460517015379817;
    msg.speed_units = 211U;
    msg.takeoff_pitch = 0.3504362105517659;
    msg.custom.assign("WZMSRLKHUHVKBOJGBZSRHBMPDCHGRMMWYWQDTEUOBWQWCXTPGDMAFFYIKOIAJSICKYQWAGNMRBOXVKJYEMVKIRGQMHPYISJEAWMCGMAOUEPNENYQXHTRUJLUTTSKHCECGTCDBFOUNSRTYLCFPBVGKIPEQFYTSLZNFCQBXTLOATRVHYXNQNDVBOZWPJLJZNRGKVBFJDOEVIULDDKQXUDNVZREXDJPFAZNQAHAFLXL");

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
    msg.setTimeStamp(0.6926443299871462);
    msg.setSource(57466U);
    msg.setSourceEntity(96U);
    msg.setDestination(35514U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.5124663967987989;
    msg.lon = 0.10413086536116567;
    msg.z = 0.6739485750806761;
    msg.z_units = 42U;
    msg.speed = 0.9698820995631481;
    msg.speed_units = 131U;
    msg.takeoff_pitch = 0.02003948915288023;
    msg.custom.assign("GYOFSWHZNTIZJLRFYTDLWUDQKFXIVPXAUOCPNLSENAFEMIAXZDQEZRRXVCZGSIQOCSGHVMYPYQGTTGHJTNJOEUYCSIDRQWSKJAGBBKDEZCBMHNLKBUKFXXSYOTMZURHLMEWDKXOLFDWZPXKERVMJKECWFUUDGRQNNJNBKTGNHMHPGPWUSWMFPZBBYVYEAOZJG");

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
    msg.setTimeStamp(0.8379349879155695);
    msg.setSource(41899U);
    msg.setSourceEntity(163U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.9141291609166153;
    msg.lon = 0.15437514483271775;
    msg.z = 0.6906206704187234;
    msg.z_units = 218U;
    msg.speed = 0.7430511078749785;
    msg.speed_units = 150U;
    msg.abort_z = 0.3424166102292049;
    msg.bearing = 0.5879751158613962;
    msg.glide_slope = 80U;
    msg.glide_slope_alt = 0.7907241281795127;
    msg.custom.assign("IZJXKQZXOEXKYYPWKMCACVLPLEYJJLFAGXOSAMKNUDKKYQAQHNMJUQRZBJOXWSVA");

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
    msg.setTimeStamp(0.2363792810602876);
    msg.setSource(31189U);
    msg.setSourceEntity(73U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.8117070134012238;
    msg.lon = 0.7884438207588146;
    msg.z = 0.10287078649418901;
    msg.z_units = 11U;
    msg.speed = 0.2809230125366712;
    msg.speed_units = 157U;
    msg.abort_z = 0.5535743314640544;
    msg.bearing = 0.9501384937072459;
    msg.glide_slope = 4U;
    msg.glide_slope_alt = 0.9216740523164778;
    msg.custom.assign("YCKAGFRIUSSZXQLJWZOPJDMRYXOQWZSQILHKWMASAXZGYYRKUI");

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
    msg.setTimeStamp(0.2667579945279711);
    msg.setSource(35586U);
    msg.setSourceEntity(90U);
    msg.setDestination(45276U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.0873209366270844;
    msg.lon = 0.3390544589684684;
    msg.z = 0.030086632915298228;
    msg.z_units = 148U;
    msg.speed = 0.3254418939883712;
    msg.speed_units = 27U;
    msg.abort_z = 0.9599524019560464;
    msg.bearing = 0.5250212468869268;
    msg.glide_slope = 141U;
    msg.glide_slope_alt = 0.9916815083828424;
    msg.custom.assign("QKSGEGBIZKXKRCMCANNWVEUOLYDSIWJEEQMDDHFHXCUIZKPEOBGLUBKEGPKCYKGWTU");

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
    msg.setTimeStamp(0.8792579999545014);
    msg.setSource(5185U);
    msg.setSourceEntity(35U);
    msg.setDestination(6388U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.4012293694098835;
    msg.lon = 0.5374560025143261;
    msg.speed = 0.7223841723540256;
    msg.speed_units = 0U;
    msg.limits = 164U;
    msg.max_depth = 0.06044722272645131;
    msg.min_alt = 0.5780032511097416;
    msg.time_limit = 0.799753494312905;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5763520122938331;
    tmp_msg_0.lon = 0.8745510688781055;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HEIZINHTOYJZIWOCKVKHCLWXVLRTZGIVDMGXTCAONTY");
    msg.custom.assign("KGRFTLYZPJZOJWQTZGSWCQCMUQSIXFCMLKEEJIIJQXMOYJRITUBJUENGENCYZNPDRXAXMBLIAIVMOVXEYVNVOXAIOBMIAEABNQYWQCGHGP");

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
    msg.setTimeStamp(0.3237930066292871);
    msg.setSource(41614U);
    msg.setSourceEntity(107U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.03603767396493707;
    msg.lon = 0.050881512196989664;
    msg.speed = 0.27213782094274275;
    msg.speed_units = 190U;
    msg.limits = 221U;
    msg.max_depth = 0.6565844740075507;
    msg.min_alt = 0.7419166225448233;
    msg.time_limit = 0.7077090063260535;
    msg.controller.assign("CZRCHNAZYAMWUSKOFKUIZRMYSLJMECNHXLDBA");
    msg.custom.assign("ZBNEUAVQGOIKXZRMMYJBREGVGGMCLXFOVZPEJIBHTKZDQSDGTDTUTKXYFFUFONNTXIRVFDTAQILODURBRKGUPAGDNDIJHPVALPYWGPBUOJJGWRQKIOCFKKSXRXMIXCZVWXLUYCXQPBWCJUNYRSOHACUYMEWYMEVNRLYTIVLWSLBJPNZFFGIVEQPZLDSQSQWYJOZEYSWHBMRPEMZPDAZKSWNSEACBML");

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
    msg.setTimeStamp(0.11863648262169024);
    msg.setSource(34344U);
    msg.setSourceEntity(146U);
    msg.setDestination(2419U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.7212234281249703;
    msg.lon = 0.7340858703261682;
    msg.speed = 0.39945693801380255;
    msg.speed_units = 163U;
    msg.limits = 101U;
    msg.max_depth = 0.002256331134724565;
    msg.min_alt = 0.45662593721363576;
    msg.time_limit = 0.40046804647647116;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20986780234755997;
    tmp_msg_0.lon = 0.10425567044677186;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FDMFGQPLIEATTLIMBSUXZSHEGNVWOHMKKWRZRCYXHLJGZZSJFEQWLVWZKVUCNCNBAQTVOSPYZLDMMFACTBNNEVKSIOUPRBVIGYTKFCNVONFX");
    msg.custom.assign("ZZENWBWDMBYHRGTEOKTFYJLXPTGOESNVQGIHPPUBQXOUKRLXASHJVGGADGIQATXPRMMJQMETDZWUTFYQGJVBLSZJEFIDSRHOVAFCXFBUYISYRRJOCIALPBVNTXCTMUIQWKJCEQ");

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
    msg.setTimeStamp(0.8450898756939559);
    msg.setSource(22409U);
    msg.setSourceEntity(44U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(146U);
    msg.target.assign("JWLIAFEIBAKPITYIMKBMTVMNQNBWJYLVKPSHD");
    msg.max_speed = 0.4127446177936426;
    msg.speed_units = 27U;
    msg.lat = 0.10721405968975684;
    msg.lon = 0.2702720768000253;
    msg.z = 0.9033126943850405;
    msg.z_units = 236U;
    msg.custom.assign("KXALHUORQNVSYWUFXXIBGENMFKVTQWTDSNKHNSYKRLCIOISBFWZCJVBQLYJDQZAPPMJAUMURYQBVTUCISFJCQKIDGEUXWZGESJZYHRUGQCZDODNIMRHXNFBTUAXCOK");

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
    msg.setTimeStamp(0.5587606670705233);
    msg.setSource(15512U);
    msg.setSourceEntity(119U);
    msg.setDestination(34697U);
    msg.setDestinationEntity(99U);
    msg.target.assign("WAOPEXHLJQNSDTMQVLXUPIQKRULZWKOFOJTPMPUPYPFXDYMHXGDCZFWMANRTKKABJAGIFPONTRRQRYYLZBKOBFBVTCNRCVNJZHNDM");
    msg.max_speed = 0.24306086180221353;
    msg.speed_units = 44U;
    msg.lat = 0.04062756389000011;
    msg.lon = 0.13226818107476712;
    msg.z = 0.9886448567563659;
    msg.z_units = 153U;
    msg.custom.assign("WYDSOLSAKAJOKFRGVIBYPGKOLSDIRZZCUZGSCHZGKPYQGUEIRPEZXNSWXKRXSUMMEUXWNXBOFUTLMMMHHCLEHYEFVLVWPCFUVBEKJFXDKFBJYNA");

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
    msg.setTimeStamp(0.41199812097215605);
    msg.setSource(28698U);
    msg.setSourceEntity(153U);
    msg.setDestination(36273U);
    msg.setDestinationEntity(192U);
    msg.target.assign("DWRPSOZHXQQSILLZXKFGGTLDYVGYQBLZVAUYKCPFUKPWWMHZHUGWDBMMPHNYVUERUYRWKPPJYNOJJ");
    msg.max_speed = 0.8340844490288297;
    msg.speed_units = 164U;
    msg.lat = 0.9565205209584539;
    msg.lon = 0.40220717637917214;
    msg.z = 0.8984290706674817;
    msg.z_units = 107U;
    msg.custom.assign("RGBHSALXATUTYBEZCAXCSNPEW");

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
    msg.setTimeStamp(0.6498994547401533);
    msg.setSource(37358U);
    msg.setSourceEntity(86U);
    msg.setDestination(8273U);
    msg.setDestinationEntity(202U);
    msg.timeout = 34139U;
    msg.lat = 0.9164970578609465;
    msg.lon = 0.1250583931347936;
    msg.speed = 0.6304443585162447;
    msg.speed_units = 237U;
    msg.custom.assign("WJQIDXJAYFTQBKHO");

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
    msg.setTimeStamp(0.4088809672198259);
    msg.setSource(13054U);
    msg.setSourceEntity(232U);
    msg.setDestination(21558U);
    msg.setDestinationEntity(184U);
    msg.timeout = 46183U;
    msg.lat = 0.006460587293495523;
    msg.lon = 0.9337304666560966;
    msg.speed = 0.29986046756415075;
    msg.speed_units = 204U;
    msg.custom.assign("FMJUBVHSAJVAZWCONLIXBKPQEOZDDRCANKYNDMKYEBOLXDNQDSDITRRYKPJNBZSEWGALKIQRSWXGYYRCCRLUDBEGFSOWHTPPMFOVHULWCXHPIAJZCHZXHPHGKCKNZTGTYAIMINROWTOTSMQZMPABFLPERZQURIKEWJKWLQUXDVGUFHIFWRHPVSSEIUJJTZBGZWAYEK");

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
    msg.setTimeStamp(0.541858215238972);
    msg.setSource(42612U);
    msg.setSourceEntity(8U);
    msg.setDestination(43919U);
    msg.setDestinationEntity(183U);
    msg.timeout = 25015U;
    msg.lat = 0.6469922642537077;
    msg.lon = 0.3136943270747088;
    msg.speed = 0.565988702646326;
    msg.speed_units = 52U;
    msg.custom.assign("ITGEZZERSRQDYOUQWFLQASZOCRMKETPXIWWASBJBCZOOYKJFGCUQDLOYGJECPTRIVNVKXDIRPVKMHNMLSDTJCHHNWRXLVRJBEGKBMGINTNXKLNTMHSKXGLBBNYDYXBPZTOKWAQ");

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
    msg.setTimeStamp(0.7090738739620435);
    msg.setSource(59524U);
    msg.setSourceEntity(86U);
    msg.setDestination(33463U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.16270875416498354;
    msg.lon = 0.7475504905979826;
    msg.z = 0.6194516822015645;
    msg.z_units = 88U;
    msg.radius = 0.8468349532662295;
    msg.duration = 44129U;
    msg.speed = 0.8593342657411871;
    msg.speed_units = 80U;
    msg.popup_period = 10677U;
    msg.popup_duration = 55319U;
    msg.flags = 192U;
    msg.custom.assign("MIMYFMMRZBPNABHZLQSZGZ");

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
    msg.setTimeStamp(0.3804365844251272);
    msg.setSource(37153U);
    msg.setSourceEntity(209U);
    msg.setDestination(61659U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.5797370418158199;
    msg.lon = 0.836496150393856;
    msg.z = 0.09428706005562759;
    msg.z_units = 174U;
    msg.radius = 0.5095835968596357;
    msg.duration = 47384U;
    msg.speed = 0.19694196534603836;
    msg.speed_units = 164U;
    msg.popup_period = 58378U;
    msg.popup_duration = 58724U;
    msg.flags = 31U;
    msg.custom.assign("AGYIPBOLEEDLDUUQMBVXWLDRGAORWYTTKQZOTRTAENMVFBCFIFLFNCKXAWWGCDSHPGKGKECRLAUQMGFSDETHLXPOXJUNZIJYMIQPHHZGMNXNBUSXSVXIBSVIRYKJORJSOJVNMVYLIHBJVPEDFSLZODBKAPUURCKCZNXQXFRAIFVCGWZXKSPTFZHBPZUKIRPQEBTWNQLHWZQETORHNMOUAOGNAJVVBDW");

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
    msg.setTimeStamp(0.35658964976028706);
    msg.setSource(1785U);
    msg.setSourceEntity(79U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.32242785372265204;
    msg.lon = 0.015957502322768935;
    msg.z = 0.46085922342386343;
    msg.z_units = 34U;
    msg.radius = 0.3353882610445802;
    msg.duration = 26150U;
    msg.speed = 0.3893310227839013;
    msg.speed_units = 91U;
    msg.popup_period = 54774U;
    msg.popup_duration = 63101U;
    msg.flags = 145U;
    msg.custom.assign("WUXPDIJEMLLCPNBXNIHGNSHNOBXGKATHUPOVZMMZURHDIAFJHDNGCEWQOIVACGROQMWUKNBAYVKTNYLYYVZGADTWCPWJXBHRPMIQZDGTORFXXJIBXX");

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
    msg.setTimeStamp(0.6562231497903005);
    msg.setSource(28234U);
    msg.setSourceEntity(24U);
    msg.setDestination(14836U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.039697459653426415);
    msg.setSource(2046U);
    msg.setSourceEntity(79U);
    msg.setDestination(34742U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.7631771476157585);
    msg.setSource(21040U);
    msg.setSourceEntity(107U);
    msg.setDestination(53434U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.3556934727971056);
    msg.setSource(27860U);
    msg.setSourceEntity(146U);
    msg.setDestination(24380U);
    msg.setDestinationEntity(111U);
    msg.timeout = 58536U;
    msg.lat = 0.04182132753374168;
    msg.lon = 0.04485480329726321;
    msg.z = 0.6373049695174285;
    msg.z_units = 76U;
    msg.speed = 0.5521412785923441;
    msg.speed_units = 81U;
    msg.bearing = 0.7294613821088274;
    msg.width = 0.9865630628724256;
    msg.direction = 128U;
    msg.custom.assign("JNEGYESOTMNMXNCPSZRIELRNXGKYBPWMUGLBADECEDWBLVZNEZIAECUHSXGWVSMTKQ");

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
    msg.setTimeStamp(0.565865832694501);
    msg.setSource(62211U);
    msg.setSourceEntity(172U);
    msg.setDestination(18496U);
    msg.setDestinationEntity(114U);
    msg.timeout = 22166U;
    msg.lat = 0.4685833213413142;
    msg.lon = 0.3013193107840185;
    msg.z = 0.5706160262113966;
    msg.z_units = 202U;
    msg.speed = 0.1765906803557944;
    msg.speed_units = 133U;
    msg.bearing = 0.06248905658388104;
    msg.width = 0.28605776366661684;
    msg.direction = 59U;
    msg.custom.assign("NAPOPNRPCKLHBYALXNDCITPOZLZHESNMYBFWFKIHHMQGOAKUXERLGLZKCWEMNOMTQNFBZATVYWZHXVZFTHOJBIXYLCRIFXJOBSFSUXASWVJTQCUPUQPJTFGXHRMWTEEDNJIYDUXYNLELHDWYYGSBUELAOKRJQDODKNKRGCFWSNGJXPRSHAIMJUVRESICZVYSPUGACXBAHK");

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
    msg.setTimeStamp(0.10152029050890177);
    msg.setSource(39394U);
    msg.setSourceEntity(139U);
    msg.setDestination(23363U);
    msg.setDestinationEntity(41U);
    msg.timeout = 11830U;
    msg.lat = 0.7436619368511007;
    msg.lon = 0.5334056930080673;
    msg.z = 0.13501638924910198;
    msg.z_units = 230U;
    msg.speed = 0.6663714837148988;
    msg.speed_units = 182U;
    msg.bearing = 0.7993649715813509;
    msg.width = 0.4863733742760078;
    msg.direction = 152U;
    msg.custom.assign("RUMJLBNHGFJBAVEIGLCWTZXBQGZRQRVLSEXXNUWQWMFKONFRWAODLKFRONW");

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
    msg.setTimeStamp(0.22904076781290494);
    msg.setSource(57947U);
    msg.setSourceEntity(122U);
    msg.setDestination(61669U);
    msg.setDestinationEntity(20U);
    msg.op_mode = 48U;
    msg.error_count = 177U;
    msg.error_ents.assign("HAZQSELSHJZQMSCIICBXSARWCTRYFFBAUSDQEOKXQFWJRXOPLZUFIRVXBPEALGYDVMACYLVIAJXRNXQGGCUVXMYPDZTAEJRYYINWIXWJFDRHPMKKRFBMQDLFNUTONKVJCMLKDWTWMUHECHTZCLONPANCG");
    msg.maneuver_type = 48682U;
    msg.maneuver_stime = 0.8710613760984306;
    msg.maneuver_eta = 35110U;
    msg.control_loops = 53766379U;
    msg.flags = 111U;
    msg.last_error.assign("NNEMWUWLOSRQNOQATTAZUVQJIFXCVNLFJWKDTBIZFGTOOOUMKHVRZLBEHHPLWEWUCBDZPEDFJWSOIQHFYKMTQCYIXYRDGSQHSDPYBVMVVSFKJQAMHGZYHLKBE");
    msg.last_error_time = 0.48309264614334846;

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
    msg.setTimeStamp(0.6359445738741422);
    msg.setSource(187U);
    msg.setSourceEntity(237U);
    msg.setDestination(21029U);
    msg.setDestinationEntity(193U);
    msg.op_mode = 115U;
    msg.error_count = 74U;
    msg.error_ents.assign("HWKCQRXMRAFZTVMAXGBZJWGENXNCIPEKPLNTBJTTHFCRNQWKVMDUYMJNRVKOEGUNYKNJTVSAZQIHMARXLRIBLYBKRBKNMLR");
    msg.maneuver_type = 63227U;
    msg.maneuver_stime = 0.5191948526121978;
    msg.maneuver_eta = 31335U;
    msg.control_loops = 124633863U;
    msg.flags = 225U;
    msg.last_error.assign("XTHYALYLTXBNNWKYDBVRSMMDCPQUCMFHDJRZNRXEQBBDCWMGDOAZWZNPYXZPSXQRSAGLWNSKMFFVTOENSJQJPOVKDICPOFLPEZWVNUTAWRSLOTFEYCLCGOQJVXWZIIORJZBPGBBALCEAUFUCPQSZKDNXSHUQISVHHMATYMNAVHWSELJHLAIABUOYRFIIKHXWGFNUTKEDQEVMJHMZOGOGMKXCGLXQFRPJKPUZGVRJEIVCTWUJGHQYD");
    msg.last_error_time = 0.6308704123130688;

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
    msg.setTimeStamp(0.1835767836627339);
    msg.setSource(41882U);
    msg.setSourceEntity(212U);
    msg.setDestination(42454U);
    msg.setDestinationEntity(117U);
    msg.op_mode = 181U;
    msg.error_count = 92U;
    msg.error_ents.assign("IBHXQOYEQEUAJUIGBDCWDSEXIAFJWEDDXPNXMWDVBCNCSPIVMKEZTFRKKRUWIYNTPTGGQWPKRBIXMYBHQOSLOHNENVCXFRVQRMAYHOUTFSZIZ");
    msg.maneuver_type = 2619U;
    msg.maneuver_stime = 0.39632317082603596;
    msg.maneuver_eta = 49094U;
    msg.control_loops = 1438264363U;
    msg.flags = 170U;
    msg.last_error.assign("XBAXBQSUCAGDLVGCEQNJJXWAPKCHPZSMUDAXZPTCNOQVNSCBYJKEEDGWSNOVSYGJXBPTDHSJDVVYNJRYWHCUKUUBIFZILJPDGKEFZXVMGIGQWYUNWYXTOVSZYMTOROOFVZEQALAYDIIQMXFFDNFPYTRTPOIAMTBHQXZBZFEPWMPRRUWORMCJJBKWIHAEKLFRLFIEKMHETYCZTAJDUVOLTDVKMXNKIKLQHHRGNNCSRQSH");
    msg.last_error_time = 0.5249300563905475;

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
    msg.setTimeStamp(0.4477827199722503);
    msg.setSource(14298U);
    msg.setSourceEntity(47U);
    msg.setDestination(53931U);
    msg.setDestinationEntity(232U);
    msg.type = 3U;
    msg.request_id = 26291U;
    msg.command = 148U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("FGMBNBYURCDCFWAXKBUFOHJTAGEVHQJHVMCZRBJADWBKLXLRXVOZMCGEHCPSIWZMDDOSGLRPKCRBYAPTUIRTYCDHVYPXRIWVAKPSCCTKCFFIZGGRVERDMPXGYEZPTQZAXREZHSVHQN");
    tmp_msg_0.max_speed = 0.21520087286260547;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.lat = 0.9778466851741525;
    tmp_msg_0.lon = 0.3022695703415518;
    tmp_msg_0.z = 0.7818836473360326;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.custom.assign("ZMRBRXJQBPGEAAYBPSVIYZLJOUXQAZCGGLXVIWNRFOIRWAHRAQKUSSNOTHSOXKJLYIFATEDENDZQKGQLKWMTONHHIGPOCEDVUFZNSWBUZQZDBVPUNYVQGEEHGDWFIGJVYPUGBFZKMPKPCDQHBNKXMCFTTK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23596U;
    msg.info.assign("DQOPHMEHZNPYYPROMKKJMORHOJKNCFAWNWTNACEVNIAFZRMALEYHIYWCJSCRLIXOSXKDLEGLQRCALUX");

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
    msg.setTimeStamp(0.6142124007667396);
    msg.setSource(23932U);
    msg.setSourceEntity(198U);
    msg.setDestination(40463U);
    msg.setDestinationEntity(171U);
    msg.type = 232U;
    msg.request_id = 5583U;
    msg.command = 25U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("EBJAYTNRCAKMNIWECYDDHICZFSFRQXLJXBCCLUZZXHCYFRULYGIHRGFHUAOTLHJSBIPKXPLQTVZULEEDKKOSFMAZBFQVOEEXFJMOYGWIJNVIQVWZVPZHF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31296U;
    msg.info.assign("KJHWNTOXXNPHJZVRZPHWOQGYXLYVEHEZCMPJLUDPCJKBEHFGGZDHSCRUSGQOXAUPDQRO");

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
    msg.setTimeStamp(0.5869615993069597);
    msg.setSource(57919U);
    msg.setSourceEntity(239U);
    msg.setDestination(15030U);
    msg.setDestinationEntity(41U);
    msg.type = 94U;
    msg.request_id = 16652U;
    msg.command = 109U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 16543U;
    tmp_msg_0.lat = 0.6102160154466513;
    tmp_msg_0.lon = 0.6778357850386335;
    tmp_msg_0.z = 0.5253298563654045;
    tmp_msg_0.z_units = 220U;
    tmp_msg_0.speed = 0.04313836367830792;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.custom.assign("WCOZZMFURWISBJAOVKDSTUNMHDSQTERNCQPGDEVWWWKHOCIFSCQGOXXBOIAJLVDPFHIHBTRICVGRVPRBAFZFVMUXFTGDGIFKIBUWXAZMRZMQSKLYVYPKBCJNTGWNYUELYNZSZTMWCKFGABSMLTRHL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60583U;
    msg.info.assign("DUXYXITPJITSGEULKVVWNIKTCAJABDSNNSICLOPIKPFUCPIIWVYBAFHCCRKKZFODEMSSVDMDRWIDHGDQLFNJIOEMQLZGNPGVHQNFWRDBFXGQNUKHMFZKRZHLXNPVFBKAKNKOMBLXARRAVTHMBYFZYNYWWMQYZZSEMWVOXCCEBXSEXIAWPGQXLDCUADAZLYQRMJE");

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
    msg.setTimeStamp(0.73124207375623);
    msg.setSource(24080U);
    msg.setSourceEntity(32U);
    msg.setDestination(26901U);
    msg.setDestinationEntity(129U);
    msg.command = 252U;
    msg.entities.assign("CSIVCRWFYEPTYPQEXBNYDKOAZKIVWWEFUJGRVZHALOMYDIOFJHMLNXTVQUHTOKCKGJBMGTWUWFULESLRBTKSAZDQSPMUCSYVBZXPRALPPDVWFAZCSTGMDGUXNDUCRQJZZJZRKOBZQCLCLQEPGNDOHESRHLGFCSHMWFDAQBJPIBXZTVITSAI");

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
    msg.setTimeStamp(0.25339868080990036);
    msg.setSource(14418U);
    msg.setSourceEntity(147U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(182U);
    msg.command = 190U;
    msg.entities.assign("NHUKBTSQRRAGSJYLQXQMBFPIUFSOLDGLTDUGCNKKWYTFKBCAVXOZVCIZQODEPMKCMOJDXLOZYXXYNLMQJMSCZWVRPJCUMDDDANLGPYGWSPJCMVPWZUZWMYDAPPSUKVKCTHBWQSHYEIAWNOBZLISGBEILFNTKRZGTNENENRBMIDAQWEWMOPVSTFHARUHGEIHHOIXFRVQAURTCEV");

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
    msg.setTimeStamp(0.90933920819799);
    msg.setSource(29397U);
    msg.setSourceEntity(168U);
    msg.setDestination(39798U);
    msg.setDestinationEntity(29U);
    msg.command = 246U;
    msg.entities.assign("KBFYHXJBYZXPTMQRAWRMALVBPZURDUEFCKDJMIPSJCIPYVNEAJVQAATZEYP");

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
    msg.setTimeStamp(0.13448269180406003);
    msg.setSource(47113U);
    msg.setSourceEntity(190U);
    msg.setDestination(33620U);
    msg.setDestinationEntity(122U);
    msg.mcount = 147U;
    msg.mnames.assign("JILRIXRIPJAXEHUKPRHYESNLBXMHGGJPDUAJJGOABBTYSDQNQMCVWSWKWCUNDYHUKMNOCKYISNMNXEKVXWWROUGYZPVWXNKYFWEETAUCFFKTPJRXLSFERGTOEYHBQIZZVAIFAQGQDTNXUMUQMRGOPSEDSKJZCPLXIMTFQRONSLUUMLMDHWBPAHQZLDDVKTJICEIZM");
    msg.ecount = 170U;
    msg.enames.assign("YAXHLCLGFZBLQJFQWXWMTOPPUMXIHHTNTFCGBOLCGZNHTIKUWJYAUCXBXYERKETDFTNDWDHNYAPGTQZDFBIAJOHEGJUHUTGSWZNWWRYVKDLGUSUSLBGZPXKNVOXJMLLSCSOIDZPAOEFUPSLBSEBYHQFAJOWVXRVXJIPENAIYKRQAEZDCXVEYHVMMPEAMNRGJOHVNOVISLRQCUJ");
    msg.ccount = 254U;
    msg.cnames.assign("YTRSSXJGQMEOHVKOD");
    msg.last_error.assign("CFYTBJBEMPNRGJAWXXCAJKDIYOFAYLZWMMZTPPYXBKVTOZXDGUVCHXJBVGISZCSATYNDWDBIIEQWHZZYBOCYWNQUFDYTOQSJNLPSFVOLMMGHOXEQQYRSDKFJGC");
    msg.last_error_time = 0.7251304944994926;

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
    msg.setTimeStamp(0.8261884718625627);
    msg.setSource(19244U);
    msg.setSourceEntity(93U);
    msg.setDestination(41611U);
    msg.setDestinationEntity(222U);
    msg.mcount = 64U;
    msg.mnames.assign("JPTGDWDEOTAUYFNXVFKKCRZRLCAZLLPMZCSHTYIBJ");
    msg.ecount = 125U;
    msg.enames.assign("XYAQCQLPJSSUEEAVIGAAKIKTICIVJQGCDYILFVLVHHPLYZJXCHYSXTHMKDEBJNYOUKAPYZLUYXTFVFSNQOBMFKUXODJQTPIXXZWXUWBZERDGHPEWCTSDLFMOBCMFLTNTPKIVGJSAQERJPKMSKULPZU");
    msg.ccount = 77U;
    msg.cnames.assign("PLBBHNAYXRCJEKTZPSSHBGKOIAXJXRQLASAEFTARQIEPPVTMVGXYOWOUPBDELQHTSILGSDJNVNWWLDFAGBUVCUARHLBWPEGTWEURAKXEYDCUFZCPCRQWGDMCOOYXMQPYIAFZCHUMGNTEKJ");
    msg.last_error.assign("EUCDPLXSXZYUFGFFNEHLXJLMW");
    msg.last_error_time = 0.6218074825433678;

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
    msg.setTimeStamp(0.8862249646957308);
    msg.setSource(10331U);
    msg.setSourceEntity(75U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(14U);
    msg.mcount = 91U;
    msg.mnames.assign("LILLMLHKRXUSQCSCWFLLPQWBTGBCJDUQOFQSNCDNUDRUJXWEXTYTWJFCNKLNMHWMVGQKVTCIQRNYAJZMGAEGUEUHJIRUKCPSYFZTMEASARGVMDVEONXUQZBDIFSZWJWPTGCRIVCMIXZXTUAUKFXHHKXYXBZZOMEIPYEEONVSAKWFSLYQONVPKBJJMZPOYZPDBJNWHTGQMSFIRDRPNYJFGSOLRA");
    msg.ecount = 238U;
    msg.enames.assign("XTGLJWJOFPYSPHIRHERLQZMQBAVETAJXEBCPOLHYLRJDWGUWKDWJBKGZKCOROHNBLXDULDPUTRAKSZOTVCYHUASUFQZICASINYGUQROCSRGAWFJPVNWJTUINMIGCMNXNWKEMFEYUZMGLEBIYNFVJZKIHCGSTZECYPMLKFOKKSYRITIWLSVXCNZJVNXQPOEMQQFAPCMXUDHSMQYVTMLRNBXGHASTVUVEYDBEQPDGKJBABDVIFWOBWAHD");
    msg.ccount = 167U;
    msg.cnames.assign("TAMLVYTWYCUJFNRQFHYZBDPJJMXRKUIUNAOINIWIHPSZRAUREWTNZPOLSDSOKYYIWLLUTCAGDIEVTLHEEFAXKRQCJQFYXYSGWDSNZ");
    msg.last_error.assign("SAYTZIENJGOEIMZCRDZDJNMECQCYJCOVYXLIIUASVRWCJWRNUZDQXNFUAYZFDVGTLZKXAWMYPZQDFLHOPPKDSDKVNLGQKZYQCPQSOSTNBNIKDVEOKXSRBFJMWCCOF");
    msg.last_error_time = 0.192816729930138;

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
    msg.setTimeStamp(0.42036460890519045);
    msg.setSource(29929U);
    msg.setSourceEntity(86U);
    msg.setDestination(26145U);
    msg.setDestinationEntity(228U);
    msg.mask = 9U;
    msg.max_depth = 0.4904388261107676;
    msg.min_altitude = 0.5756309076193512;
    msg.max_altitude = 0.848259471729553;
    msg.min_speed = 0.2606322294336334;
    msg.max_speed = 0.7692088332403646;
    msg.max_vrate = 0.770550937596255;
    msg.lat = 0.9753002043517739;
    msg.lon = 0.3446185224910241;
    msg.orientation = 0.39066273365110826;
    msg.width = 0.0302388487899099;
    msg.length = 0.34786364736493125;

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
    msg.setTimeStamp(0.6960311485650466);
    msg.setSource(33918U);
    msg.setSourceEntity(84U);
    msg.setDestination(22234U);
    msg.setDestinationEntity(209U);
    msg.mask = 237U;
    msg.max_depth = 0.39690167855041447;
    msg.min_altitude = 0.1770531411391103;
    msg.max_altitude = 0.8570570686765104;
    msg.min_speed = 0.07042665645251256;
    msg.max_speed = 0.24380780071636599;
    msg.max_vrate = 0.9247518325623689;
    msg.lat = 0.9477050828099549;
    msg.lon = 0.21538183890542772;
    msg.orientation = 0.9021952962385643;
    msg.width = 0.0851209397596061;
    msg.length = 0.31025006453863313;

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
    msg.setTimeStamp(0.5109672372530355);
    msg.setSource(55927U);
    msg.setSourceEntity(211U);
    msg.setDestination(27332U);
    msg.setDestinationEntity(57U);
    msg.mask = 3U;
    msg.max_depth = 0.4374671495512539;
    msg.min_altitude = 0.5257955757043102;
    msg.max_altitude = 0.5543271860909841;
    msg.min_speed = 0.43757371916018895;
    msg.max_speed = 0.10861703623460506;
    msg.max_vrate = 0.5606382600040833;
    msg.lat = 0.10719524686113246;
    msg.lon = 0.22478804078393078;
    msg.orientation = 0.9031135741858332;
    msg.width = 0.858576629029349;
    msg.length = 0.5791551460899734;

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
    msg.setTimeStamp(0.7383797964124358);
    msg.setSource(34491U);
    msg.setSourceEntity(118U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.6817342422437185);
    msg.setSource(51651U);
    msg.setSourceEntity(219U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.8360913222075382);
    msg.setSource(42251U);
    msg.setSourceEntity(42U);
    msg.setDestination(42180U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.18005109220971505);
    msg.setSource(22296U);
    msg.setSourceEntity(19U);
    msg.setDestination(51968U);
    msg.setDestinationEntity(225U);
    msg.duration = 62113U;

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
    msg.setTimeStamp(0.07113758223238653);
    msg.setSource(23499U);
    msg.setSourceEntity(28U);
    msg.setDestination(15232U);
    msg.setDestinationEntity(136U);
    msg.duration = 46046U;

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
    msg.setTimeStamp(0.5596451076070378);
    msg.setSource(9231U);
    msg.setSourceEntity(182U);
    msg.setDestination(40477U);
    msg.setDestinationEntity(191U);
    msg.duration = 60148U;

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
    msg.setTimeStamp(0.9135176119051256);
    msg.setSource(48277U);
    msg.setSourceEntity(20U);
    msg.setDestination(1517U);
    msg.setDestinationEntity(25U);
    msg.enable = 136U;
    msg.mask = 1781110236U;
    msg.scope_ref = 772635391U;

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
    msg.setTimeStamp(0.25130663219494065);
    msg.setSource(12086U);
    msg.setSourceEntity(96U);
    msg.setDestination(54906U);
    msg.setDestinationEntity(119U);
    msg.enable = 88U;
    msg.mask = 3206060404U;
    msg.scope_ref = 4009567227U;

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
    msg.setTimeStamp(0.6574466128857606);
    msg.setSource(49656U);
    msg.setSourceEntity(197U);
    msg.setDestination(39432U);
    msg.setDestinationEntity(202U);
    msg.enable = 157U;
    msg.mask = 1840725797U;
    msg.scope_ref = 1355697516U;

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
    msg.setTimeStamp(0.9874404537079892);
    msg.setSource(31011U);
    msg.setSourceEntity(116U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(151U);
    msg.medium = 215U;

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
    msg.setTimeStamp(0.22632175840361368);
    msg.setSource(59084U);
    msg.setSourceEntity(166U);
    msg.setDestination(59011U);
    msg.setDestinationEntity(239U);
    msg.medium = 176U;

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
    msg.setTimeStamp(0.5718726288748193);
    msg.setSource(2569U);
    msg.setSourceEntity(92U);
    msg.setDestination(15229U);
    msg.setDestinationEntity(109U);
    msg.medium = 220U;

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
    msg.setTimeStamp(0.704044900634815);
    msg.setSource(20060U);
    msg.setSourceEntity(125U);
    msg.setDestination(57306U);
    msg.setDestinationEntity(145U);
    msg.value = 0.5364307661411291;
    msg.type = 253U;

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
    msg.setTimeStamp(0.1647949418412641);
    msg.setSource(9368U);
    msg.setSourceEntity(24U);
    msg.setDestination(19404U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7987144773411171;
    msg.type = 97U;

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
    msg.setTimeStamp(0.5410579834997463);
    msg.setSource(38747U);
    msg.setSourceEntity(174U);
    msg.setDestination(12287U);
    msg.setDestinationEntity(107U);
    msg.value = 0.2502949619949165;
    msg.type = 34U;

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
    msg.setTimeStamp(0.1609171337251043);
    msg.setSource(51353U);
    msg.setSourceEntity(6U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.35568057347316084;
    msg.converg = 0.41645444380140983;
    msg.turbulence = 0.9535859982776572;
    msg.possimmon = 164U;
    msg.commmon = 212U;
    msg.convergmon = 113U;

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
    msg.setTimeStamp(0.4017351568291917);
    msg.setSource(30504U);
    msg.setSourceEntity(28U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(187U);
    msg.possimerr = 0.09101314127476112;
    msg.converg = 0.898831439260184;
    msg.turbulence = 0.3570135459019774;
    msg.possimmon = 118U;
    msg.commmon = 197U;
    msg.convergmon = 225U;

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
    msg.setTimeStamp(0.4318571369014278);
    msg.setSource(16060U);
    msg.setSourceEntity(240U);
    msg.setDestination(39239U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.7875721229160992;
    msg.converg = 0.39599001526337074;
    msg.turbulence = 0.6433365466504215;
    msg.possimmon = 122U;
    msg.commmon = 151U;
    msg.convergmon = 164U;

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
    msg.setTimeStamp(0.5831327735038991);
    msg.setSource(45349U);
    msg.setSourceEntity(240U);
    msg.setDestination(39295U);
    msg.setDestinationEntity(47U);
    msg.autonomy = 23U;
    msg.mode.assign("HSJNAYJAKXCIDKNTUEROAXJZZKVDECOZDSGTCAGYINLQHWSXFSMQJQVCLBIKYJVOPWQKJHAOVLZKNMEHRKIYTYWVXDULRREBSDQTWPBGXJFFZPIOJHMMLHBTBCJZBUPIFIMVYYRUBLVLBSUBCTDRUGPEEQCZSKDPWGFGCYLONSSTMMYWCLLHPNFIQHXZHTDXQFUDAOAVUHYTFWOZGJ");

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
    msg.setTimeStamp(0.9778689749422858);
    msg.setSource(6033U);
    msg.setSourceEntity(249U);
    msg.setDestination(29989U);
    msg.setDestinationEntity(222U);
    msg.autonomy = 142U;
    msg.mode.assign("LSGUQEXOCOBBQQCW");

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
    msg.setTimeStamp(0.5716059782125927);
    msg.setSource(53531U);
    msg.setSourceEntity(90U);
    msg.setDestination(31212U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 121U;
    msg.mode.assign("ZJJGSNVZIHEIPMNVRXFOYVCQALMCSJGNKHCJEVMYENEYPSIEVRLUIZKRTLSPTVSZGMFFUVGPAJHGAHDUDDMKCKOT");

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
    msg.setTimeStamp(0.25272808003557934);
    msg.setSource(61825U);
    msg.setSourceEntity(123U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(120U);
    msg.type = 232U;
    msg.op = 156U;
    msg.possimerr = 0.6267335362618432;
    msg.converg = 0.6398711582298086;
    msg.turbulence = 0.9513002890146135;
    msg.possimmon = 13U;
    msg.commmon = 104U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.9719030999672356);
    msg.setSource(22531U);
    msg.setSourceEntity(186U);
    msg.setDestination(20767U);
    msg.setDestinationEntity(206U);
    msg.type = 213U;
    msg.op = 26U;
    msg.possimerr = 0.8554499702099277;
    msg.converg = 0.2800800751474092;
    msg.turbulence = 0.20740488825551406;
    msg.possimmon = 144U;
    msg.commmon = 147U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.7546726551320343);
    msg.setSource(45665U);
    msg.setSourceEntity(34U);
    msg.setDestination(11808U);
    msg.setDestinationEntity(232U);
    msg.type = 54U;
    msg.op = 4U;
    msg.possimerr = 0.8682548011952425;
    msg.converg = 0.2229048151371147;
    msg.turbulence = 0.07693517794743598;
    msg.possimmon = 193U;
    msg.commmon = 187U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.7762426760479993);
    msg.setSource(57932U);
    msg.setSourceEntity(41U);
    msg.setDestination(972U);
    msg.setDestinationEntity(233U);
    msg.op = 24U;
    msg.comm_interface = 47U;
    msg.period = 63028U;
    msg.sys_dst.assign("HVKFKFRZBFNDIPOVUEJZRUGZBYCGUNLOEPIMHMIMHHXIGLDONDXTTYGTVZXSJZFJXVOPTEMXWZQOKQLMDRICTTZPLUCOMQNJCRYFXWQTGHKHAHTCXWQBUCOABIFUAHPWQEUJZDC");

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
    msg.setTimeStamp(0.40103163358601135);
    msg.setSource(62592U);
    msg.setSourceEntity(141U);
    msg.setDestination(34884U);
    msg.setDestinationEntity(228U);
    msg.op = 108U;
    msg.comm_interface = 18U;
    msg.period = 623U;
    msg.sys_dst.assign("SLQUUHRRCDOVJIQGGEYAVXEPINCLEDMZFBUJPOXKFVHTFOSFEUVLVQNKWSXYUANYHVRRXIBBWTQNRKCARNTQBLJSPJHJDWPTYZYBHZLSMFHBCWARCXQHNKNPQSJYHCJXFBIYFDWQWKIXMKXAIWMOOLZYATVHEEFZMVAGJYZFCEIMIPNOOGMWWUPEZMSKJCIDGWZUELFGKDPDYKGASLTHVDPLA");

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
    msg.setTimeStamp(0.6051258548640982);
    msg.setSource(57305U);
    msg.setSourceEntity(133U);
    msg.setDestination(1490U);
    msg.setDestinationEntity(180U);
    msg.op = 41U;
    msg.comm_interface = 139U;
    msg.period = 51677U;
    msg.sys_dst.assign("EYTXBIRXUZPZELDJOLSDHIFAYGKJ");

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
    msg.setTimeStamp(0.45955634227897046);
    msg.setSource(29972U);
    msg.setSourceEntity(114U);
    msg.setDestination(55216U);
    msg.setDestinationEntity(249U);
    msg.stime = 910379231U;
    msg.latitude = 0.8057975162382397;
    msg.longitude = 0.1432808831600333;
    msg.altitude = 46588U;
    msg.depth = 5023U;
    msg.heading = 59631U;
    msg.speed = -27946;
    msg.fuel = 112;
    msg.exec_state = -58;
    msg.plan_checksum = 30716U;

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
    msg.setTimeStamp(0.5711464521419759);
    msg.setSource(60143U);
    msg.setSourceEntity(225U);
    msg.setDestination(3979U);
    msg.setDestinationEntity(36U);
    msg.stime = 4156087521U;
    msg.latitude = 0.04730323768473732;
    msg.longitude = 0.2296671289488944;
    msg.altitude = 61363U;
    msg.depth = 15957U;
    msg.heading = 40614U;
    msg.speed = -10591;
    msg.fuel = -100;
    msg.exec_state = 71;
    msg.plan_checksum = 47119U;

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
    msg.setTimeStamp(0.0312543144690679);
    msg.setSource(35137U);
    msg.setSourceEntity(131U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(18U);
    msg.stime = 4008935390U;
    msg.latitude = 0.5788783925482348;
    msg.longitude = 0.6521918388831296;
    msg.altitude = 22464U;
    msg.depth = 54742U;
    msg.heading = 61858U;
    msg.speed = -3429;
    msg.fuel = 101;
    msg.exec_state = -124;
    msg.plan_checksum = 2461U;

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
    msg.setTimeStamp(0.4601976660882746);
    msg.setSource(54491U);
    msg.setSourceEntity(99U);
    msg.setDestination(1919U);
    msg.setDestinationEntity(241U);
    msg.req_id = 14174U;
    msg.comm_mean = 216U;
    msg.destination.assign("TPPWLFYKNCJQBNNWYDDFXBHVHPJFXOPVLQQGZHGVEWIFIMLWVTZHXHGDGNVMQZXNZTRGDMKRZXYRRFSNDCYLTUAXBVEKCWJJEFSKXUUHEFHONTEOOJSUILCXMBLFAVIVLROLPRCSUPKHDK");
    msg.deadline = 0.3843193086026817;
    msg.range = 0.41100115976558227;
    msg.data_mode = 242U;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("HVNRRAJNEQUENOUBWTILABHPTUCATLZDJOTWGHNQHNXCHWMIRBJUCPXYYOFMQQKRYDMVPJZSLDWMBCQCWXZKSGATRSHBHMDDWAXUBDYVSOPKQNLDP");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YDWWOXUZEVKTTLXFUOWCUGGOSBBLWUMCTDJMQLISHCBEECNQXFGPQHXABFQSAXKTKRZYSRAPSDYB");
    const signed char tmp_msg_1[] = {120, -40, 42, 15, -50, -19, -56, -90, -104, 13, -89, 34, -78, 94, 50, 15, -7, -15, -36, -88, -123, -48, -111, 39, 67, 56, 55, -1, 93, -9, 2, 86, -91, 106, 107, -128, -35, 1, 69, -13, -42, -119, 30, 86, -106, -48, 65, -123, -120, -125, 85, -55, -60, -102, -99, 118, -10, 53, 124, 103, 27, -84, 41, -53, 126, -13, -49, -19, -72, 46, -53, -21, -102, 114, -7, -84, 62, 11, 29, -64, -97, -56, 44, 94, -65, 16, -27, 111, -105, 55, -59, 77, 40, -59, -45, -61, 20, 100, -110, -4, -97, -41, -92, 119, -101, 19, 106, 120, -73, -34, 6, 64, 79, 34, 26, -103, -18, -67, -47, 113, -33, 51, 67, 46, -56, 57, 31, 51, -124, -49, -30, 62, -37, 74, -21, -62, -115, 71, -102, 18, 107, -31, 22, 47, -76, -87, 74, 102, 116, -50, -27, -70, 68, -37, 7, -47, 126, -57, 107, -84, 111, 10, 22, 98, -8, 34, 8, 29, -33, -22, -26, 10, 22, -47, -37, 105, -47, -76, 6, -62, 120, -39, 36, -22, 102, 72, 62, -16, -49, -35, -39, 54, -49, -14, -99, 9, 77, -59, -107, 13, 117, -6, 48, 118, -75, 54, -7};
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
    msg.setTimeStamp(0.4257599391716218);
    msg.setSource(46478U);
    msg.setSourceEntity(242U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(25U);
    msg.req_id = 60913U;
    msg.comm_mean = 241U;
    msg.destination.assign("TOLZJHVAOQLABMRYHVMEZDIYJZVZWGFFSXHVMSSDFDHZOEULPVRSXNCWECPHCAEFVFTTLXAVQGIPXUHZHBFXNVDCRRTWARJGTJOQJLXZPBUAVJCNFYSBPYHFLXRYQUGBMGWOKUPTWQJYNPLRBECVIYPACIHDXINUQSWGNGKOOAAQMRTUECYZEETSDSKQYKOPUMAIYBRIDXIDFXUKOLNRDBWMJTBIWLGKMKLMDSBGHI");
    msg.deadline = 0.6874573792023202;
    msg.range = 0.8197926717907449;
    msg.data_mode = 239U;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 34718U;
    tmp_msg_0.x = 0.8834871093539683;
    tmp_msg_0.y = 0.2111393754894041;
    tmp_msg_0.z = 0.27619288610388204;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TYQQIHIXZVKORXGGVVZOZIHXNHEDOGMVEOILIIJMMBQCVKCHEETPLPARRMHUUWQZNNFESGMKYEHNUIFLTWDEYWMQDRXWTTKLHOKVRFYZULGXWSDSKUFSIOQKHBAYGANVMJSNTPSDDMYPJRPPUWTVAORPLSSJCZJJTKUDEXTAXQAAQPJNCRGSACFXXYVHOEFSBYFHZQWZFUBCOGD");
    const signed char tmp_msg_1[] = {-8, -123, -20, 95, 53, 101, -13, 118, 53, 54, -119, 84, -84, -45, 59, -20, -108, -13, -78, -98, -92, 7, -73, 12, -65, -37, -116, -50, -31, -110, 12, -111, -95, 109, -89, -120, 111};
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
    msg.setTimeStamp(0.4917990149585396);
    msg.setSource(15128U);
    msg.setSourceEntity(68U);
    msg.setDestination(26811U);
    msg.setDestinationEntity(130U);
    msg.req_id = 38322U;
    msg.comm_mean = 125U;
    msg.destination.assign("CEAUWGSCXECUOBJMMXSIFSHFTBKSXLOLFHHWJNKICDSIMXZHGDKWJLUFVKUQJWODQBGDTKHEXCYATEDBLIOVFFEAMUGCPEUNCXBKUZHGMIPQEFGXFOMYNQTQJTVWMWMNRVRQQWDVNPPVIBYSAHLKUBNYRXZZRNJISBBTUUYZMRJEHYHRNPAKKOQZRCYFLCSZLQOXGVJPAGJELCATEO");
    msg.deadline = 0.46007785485183983;
    msg.range = 0.8855046288000763;
    msg.data_mode = 37U;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 38058U;
    tmp_msg_0.bearing = 0.9103504599065947;
    tmp_msg_0.elevation = 0.8768788604372835;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BQHPAVXMRIPQDHYAUOLDKGOWXHWNNFSBSNJABHJOEAKCIKTISNBGZFTXXRXDSELBKZQOPGEMCADLRDNRYTJCEFEJFLBQATMBVUPZLENNMLBLYSIMCDNMGXIHGYZLWCGPYVVSBRRDFGVZJSPJVYFKUFMCWXVJPELTSZPYQVCJWEHUUKOIGNQUUWPRBSUTHCWIZLQQFOHYTWXOFXYKNOZIEMEZCTQVYMTAD");
    const signed char tmp_msg_1[] = {43, 51, 89, -36, 86, -15, 65, 77, -15, -6, -68, -101, -55, 88, 21, 16, -101, -58, 56, 80, -91, -94, 81, 56, 64, -111, 99, 33, -117, 10, 85, -49, -55, 0, -71, 81, 109, -83, 67, 100, 11, 15, 107, 109, -121, 26, -117, -113, -119, -46, -100, -72, -30, -86, 121, -14, 0, 116, 79, 2, 81, -52, -115, 125, -24, -86, 26, 107, 44, -5, 51, -19, -1, 100, -77, -105, -103, 44, 56, 72, -48, 81, -83, 119, 108, -80, 15, -118, -77};
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
    msg.setTimeStamp(0.8711752176724156);
    msg.setSource(62090U);
    msg.setSourceEntity(205U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(228U);
    msg.req_id = 21294U;
    msg.status = 163U;
    msg.range = 0.318470954704138;
    msg.info.assign("PVFOHLMYLMDFSUIGNGRUXOSNJRUWBDQEHFWIZKXRDKASSCNYEAWYEK");

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
    msg.setTimeStamp(0.3489612099680153);
    msg.setSource(54238U);
    msg.setSourceEntity(82U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(136U);
    msg.req_id = 51132U;
    msg.status = 10U;
    msg.range = 0.17309280140921113;
    msg.info.assign("KOGJHWBYDMYBISYYSRUAHSSAFAJQECFLJTTPVDKDMUAPAHGZCQNWVACIJ");

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
    msg.setTimeStamp(0.12435600671908231);
    msg.setSource(47893U);
    msg.setSourceEntity(111U);
    msg.setDestination(46204U);
    msg.setDestinationEntity(33U);
    msg.req_id = 54541U;
    msg.status = 63U;
    msg.range = 0.17528080879924735;
    msg.info.assign("FZLMVTEDYIMNXNZVPCZJJDGALDRDDTNMOWCXSJROPHEXAFRAYRUBBYVIYKXIJSUVKBZFUGGIBMHQQLFRZDUKEHRESSFXCSVVOTFGJSEKGHUMWLPZWWPPLEYQQJGRSVF");

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
    msg.setTimeStamp(0.3101522338658973);
    msg.setSource(28069U);
    msg.setSourceEntity(103U);
    msg.setDestination(47511U);
    msg.setDestinationEntity(167U);
    msg.req_id = 36879U;
    msg.destination.assign("GVTQNIBXFJZIXZV");
    msg.timeout = 0.0021069181449282492;
    msg.sms_text.assign("JDRKKFOJAXOWQUWMLPQGHQSXDWDAAFIUONPDERHPKBUXVBMQRYFIJHWIRKITZAOYDBKMQTAPNZSZMZBWEVZULKXLZGZYCCGRHEGICLIWCFDJVGFYITUPCNTCUEBCSIVQBFHKDQRAHXWMSXMSYVJTPLQGKXSVQ");

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
    msg.setTimeStamp(0.08457110904124254);
    msg.setSource(45817U);
    msg.setSourceEntity(248U);
    msg.setDestination(48096U);
    msg.setDestinationEntity(27U);
    msg.req_id = 46616U;
    msg.destination.assign("FYCZLDQDGNGEIIHUQRGXYQJULDCPQACTUILVXVHCRAUSLZHIGVWKTNNALVYOQURBFNYWGLEBBCBNGKLRMEWPXSDARPFWTYMAMHJCAOIEMJDWCXHYVKNOYTKSKCLMJNFJMGAQFSPPDJTOLPGQJEDEUZDKXZSFBSUORAVHQPOIAWIDRZOBEHXEFMBFNKBPWFIQVUOKOPIUXWVRXJPACWUZYJTIN");
    msg.timeout = 0.6389969240770061;
    msg.sms_text.assign("WAQVLBDRTMGOUJUPSBNVUHHVXWIBZKPFHYMKDBVSQXGKKLGEDHZUMULXJATYRMWDNJDORCZXUXPPEZKODUVEOGMYCTOSSIAPBSHJKZQRBLYXIQIMJWNRFTFJPMOQVJQTHOGSLYNFSWECKHNECKMRPNRIEIDPZYFWZGLGFVRYIEDBYTELGZWHWKFCJTOGTRC");

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
    msg.setTimeStamp(0.0510166587169133);
    msg.setSource(30769U);
    msg.setSourceEntity(191U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(46U);
    msg.req_id = 20418U;
    msg.destination.assign("NGXMOQKZDLTJLOXMMQWEPCQSPTAGSQCLPDMXCVHNIBWPHWXUSFCVGZYKBGDMPKVUYJGEYPIIGWQBODOEBZVFRBURUWODROSNXLWAEQI");
    msg.timeout = 0.616189893374714;
    msg.sms_text.assign("YHMWGLIXDXOUMBVGLOQCSWEMSNWUPPJFUCQAMHSWMCBBZPDZYSWESVKLRCZZT");

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
    msg.setTimeStamp(0.6068890707899189);
    msg.setSource(27024U);
    msg.setSourceEntity(173U);
    msg.setDestination(55746U);
    msg.setDestinationEntity(163U);
    msg.req_id = 44684U;
    msg.status = 146U;
    msg.info.assign("NGEVXNLZWOCFGJKTEGOSWSSXLGEZRHATMDXFZNHKVADGFSVLHLZMLESTRQHVDYFMGMXFUCARH");

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
    msg.setTimeStamp(0.9442848534637784);
    msg.setSource(35314U);
    msg.setSourceEntity(239U);
    msg.setDestination(40358U);
    msg.setDestinationEntity(91U);
    msg.req_id = 39383U;
    msg.status = 99U;
    msg.info.assign("USMMQMCCNCPFEWQVKGUCHDDRIUSJHTFJEQVSTUUXZHJDPTFOKHGRVKGXLTUGEQEBOHZYCYMDWJKYBVLSPJCWYYEBSQQKLKZQKJYRNNNDHRWTMXRLWNVGHBXIXYGBWVWGRNPKNIJRVPOODCZAAPAEICMIYMXETEYPFVZSBQBL");

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
    msg.setTimeStamp(0.6195751566475773);
    msg.setSource(12762U);
    msg.setSourceEntity(238U);
    msg.setDestination(41710U);
    msg.setDestinationEntity(213U);
    msg.req_id = 33179U;
    msg.status = 77U;
    msg.info.assign("XJFSRKCTONVRTQZLKESTBTHOGAPDYKZCOAUOUGEHBKGKFRGJQXQOLQIBFADSNYXCYASXWHDDQGKDUNHSMSBGTWICKOSQFFEFJAEMIONUWCATYMIDEHBCRWDQVVUWYVYIEWQOPWHFNHMRPJIAJPUFTPUMEPLFJXYJQTFEVYOYKVNCNXWPRHJBJNLCZZSZBUGLKSUNIHKCGVNIIXWZRGIXEBQBDHTPVSYZMXZXVLLMURCZJOLPRZPDMTWMG");

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
    msg.setTimeStamp(0.07136672139741018);
    msg.setSource(53073U);
    msg.setSourceEntity(221U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(98U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.35000282249509074);
    msg.setSource(21966U);
    msg.setSourceEntity(213U);
    msg.setDestination(8804U);
    msg.setDestinationEntity(39U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.3802072266683255);
    msg.setSource(32963U);
    msg.setSourceEntity(129U);
    msg.setDestination(54082U);
    msg.setDestinationEntity(245U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.9342608384024559);
    msg.setSource(7143U);
    msg.setSourceEntity(152U);
    msg.setDestination(6092U);
    msg.setDestinationEntity(229U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.46362093676486016);
    msg.setSource(7400U);
    msg.setSourceEntity(4U);
    msg.setDestination(17877U);
    msg.setDestinationEntity(118U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.19802335532385928);
    msg.setSource(37672U);
    msg.setSourceEntity(79U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(96U);
    msg.state = 56U;

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
    msg.setTimeStamp(0.5573352585753508);
    msg.setSource(45252U);
    msg.setSourceEntity(52U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(12U);
    msg.req_id = 48053U;
    msg.destination.assign("ZSGVOOGMFELJETABCXNJDZRHGHFJKJMZNOSQBUOAZZXQWNVJORFXVDBVHJMGCVSLREJGWJBUXEBFCMLDENKLZIPGYUWPICSARSPSAUNYPITMKPXIWNYCLYQTLAAIADCEMWOTQEFSZAHUBLGTVIBALNTNGLEZORUBEOTQYZZDIFTWCXKXKJMWHQIRDUFDYDABXVCHDMRPQHDGHIFQRCSEVKFXSR");
    msg.timeout = 0.5502977608018876;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.3996428091573101);
    msg.setSource(44209U);
    msg.setSourceEntity(91U);
    msg.setDestination(60535U);
    msg.setDestinationEntity(136U);
    msg.req_id = 61363U;
    msg.destination.assign("RLYRHPPMKPUTEBUYNDIFIHUSUORQVSKCOLWEEYLFMZCFLGGNTBJIPQXXASDTMHJLQGNKDGOINCYTAISCBMBEDHZNHTAKZFJYXMIXYPPZJUUBZGGFCVQGZYBFHVUWJUJDNWXOLKQGJLMAERSOICSAQEBULOPFGXVHRTWOJAZRRYXDVMVWFWESOSVQVYB");
    msg.timeout = 0.4651285554895179;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.683671446458509;
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
    msg.setTimeStamp(0.2151694438936953);
    msg.setSource(15053U);
    msg.setSourceEntity(41U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(92U);
    msg.req_id = 21947U;
    msg.destination.assign("FMHOBAYVMVROCHVJOYZOYGFISNNRHDGFLBRXFIADZTOHMZRIVPSNZPPDESXHDEJJZGDGXEIATOYXQEDCBSXNMCVEWTATAASUXRJAFKSPVEIFXUEUTWNLVFWBBBJWQULPVWNGZFPOJJGSKKQGCNTKCEZWYTQBGKUDVLQOOXPLUEWFMSYVNIRLTPXLHRPZCKWMKKJUZJZPUTAWRDDIQMSRTKGBFCLU");
    msg.timeout = 0.22433727312321394;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WAHNMCUYVEBTVJGEMTRCKZJWWTNHCVQDZEAAGPHIUTVXSIOCQWQHRMVNJTNOHZUVODSGMXGOSMKYZPTEBJVOQKEZDZPHAUOMGPDFJVPFXYMCZKARLBIFQQYFLCJTNDWHSUDMZYOKBIPUEWDVYCGEALAKKRZYXCALLLYRSSIWNQDSQBAOTXDUDBRYXEGWMXPYBBFHTNJUELJGFRUNICAQNRLXOIKGHPZUGTLFPMBSWWCXFJ");
    tmp_msg_0.predicate.assign("USHBOLOTXTEOMPOMYOAHDIEDAIZSLULBQSIFBZFIJDELUWDFRUXKMYXSGFDVWYBQGBHAGVNRNATCPZZMANHSUWPDHPUQMNIJLXZJRRCJXBXUBXCVTWOLLULGREIFIGXPPYVEZPHOONTPCFQHKQRNFEXVMEJTUZTNCWJWSRALQXOKKYYSUPDVNADWF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PPIXSDZIDKTGMPVDRXUVLWDNYWLGMUSLYGKTARDEUFKUGXIROUENTJIHUCTPLCBLHHQSHEDVKCZEZTRAZDNRBMCJBFCFGPZLBFTPADYNOQASFFDWYKIVNPRSSILJEQVKRGWKATLHSWZANXPOBWPTQQGHOKXQGUEJNXFIZOSLRTQZAAXUUWKW");
    tmp_tmp_msg_0_0.attr_type = 35U;
    tmp_tmp_msg_0_0.min.assign("HQCCKIMUTJZHNKRFKEDNYJGPYTPUESFDWMHGMOHPCD");
    tmp_tmp_msg_0_0.max.assign("SAVPNSDHWLKVMKHRJDBE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6950480153889201);
    msg.setSource(34018U);
    msg.setSourceEntity(221U);
    msg.setDestination(38978U);
    msg.setDestinationEntity(199U);
    msg.req_id = 63394U;
    msg.status = 160U;
    msg.info.assign("FDDVWKHRZIGJOIIIMIHWGJEPEVEFONPBZLMZBHKRVVEBWRMTXGQLLDOHYREXAAITHCFFXCLSTZMWSYFZDIQSMKBTZSMDQMXQSPDYTGTRHIDMRVLXCCBLYWGEOJ");

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
    msg.setTimeStamp(0.26070094786825737);
    msg.setSource(16336U);
    msg.setSourceEntity(154U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(158U);
    msg.req_id = 455U;
    msg.status = 6U;
    msg.info.assign("FJDARAZOPMLVLFWJIKEMGPVBRNFJKMMEEQRCINXVHOYSYODRUJTQCTWQBLGNBVFPXAJPQUHHQZZSIGVCXHAJIDPEGICWSQUGZSYQLNXZTDYHLZZFTXSGSXKVGQOZCBROMYBEH");

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
    msg.setTimeStamp(0.6222522618364057);
    msg.setSource(51224U);
    msg.setSourceEntity(127U);
    msg.setDestination(65325U);
    msg.setDestinationEntity(16U);
    msg.req_id = 1259U;
    msg.status = 155U;
    msg.info.assign("BLDKZQYZSIWDJCSFMHUCGYAAJLGYMVFPJPPDZTFVHCISZQRVAGQXLEMZDBJDNFEUUVTGKYUKUIZGGNWRELWEFKGLKSIPRPEHNWURBTUHHOKMSBQTGUEQBSCQSCWPIDOEGAHIOTBHOHLARRUOOOWAZBXQDWNOVAQCKIYRTGQJAJAWQLBITXTISRVJKMKNYNBVZVNP");

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
    msg.setTimeStamp(0.36046404611769733);
    msg.setSource(71U);
    msg.setSourceEntity(82U);
    msg.setDestination(22358U);
    msg.setDestinationEntity(109U);
    msg.name.assign("JOMWLKRJBVGNN");
    msg.report_time = 0.6000563483517499;
    msg.medium = 36U;
    msg.lat = 0.2905288740040163;
    msg.lon = 0.48748907398839647;
    msg.depth = 0.20354712924592677;
    msg.alt = 0.1129214637889645;
    msg.sog = 0.47637606082662687;
    msg.cog = 0.14172781930539302;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 19887U;
    tmp_msg_0.status = 240U;
    tmp_msg_0.info.assign("IKEDPIMEGBXTDJCEHUFQOBURNNFKOHUPTNAYYESPWWULYYYTOBXRMBIMJSNHZSUQLFCRZLQOVCIKNDZSQRCXULKLEXQSPHAGLIKOWSMAZZVTHUPEDDTMVFTSXGBKOYZOCGIDWRRKRTIHYTAXNQMEDNCJLVJWZAZFQBMFAGVPNIWDELTSWSBKGUYBVFRVPPFHGWAMYC");
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
    msg.setTimeStamp(0.15354397497977068);
    msg.setSource(13491U);
    msg.setSourceEntity(201U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(106U);
    msg.name.assign("DJOGERCVAJNBWMMXXCTZXVVRKTBEDVNUZRQWCYBIUGJSNMDWWCRLRTOEHUEMNMSUUGHJGFOZOKCULYNWIIAHKBKQXGRJLRLSJZECDPJFQBHTZDIKYDVQUNXHCAYQLQKPPVWSTOMPKSTROENZVEVBICDIAEULMTEAQJKMFTYIWZBCFJASHSZYRKOHPLFGAPPZFOK");
    msg.report_time = 0.7269277886059813;
    msg.medium = 179U;
    msg.lat = 0.4185016847799614;
    msg.lon = 0.5494324432816251;
    msg.depth = 0.5342036152224776;
    msg.alt = 0.9580122583211428;
    msg.sog = 0.6528945169342814;
    msg.cog = 0.7132571757762574;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.6881359905716671;
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
    msg.setTimeStamp(0.24879281176307322);
    msg.setSource(27699U);
    msg.setSourceEntity(187U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(94U);
    msg.name.assign("HENSNOQGZVJLFSNZUHLZOUCHNIWCITUYQDCRXYSOEGANPUMOGJTAREAYHVJZISTSGQIMKEBGYWWTKJWTAPDYEPZBWCZGINSVIKXUPMGSDJZANRKNAHZBRKNFIQPLLLJYDOWUIQCBODBHUZAXSBPYPFBGZFQGOXEOXSXMFFGVXKMJQYLJUMVQFWDKEQYBRDTXSPVHATJRCEFRCCYLIELXKVXVPJFOWLAUW");
    msg.report_time = 0.38220443146812144;
    msg.medium = 83U;
    msg.lat = 0.6204561679400709;
    msg.lon = 0.7430735733293067;
    msg.depth = 0.8964081332118161;
    msg.alt = 0.6423498440817191;
    msg.sog = 0.5838654519620272;
    msg.cog = 0.3000643661699295;

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
    msg.setTimeStamp(0.5867118746431096);
    msg.setSource(23813U);
    msg.setSourceEntity(44U);
    msg.setDestination(48598U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.25331836067376023);
    msg.setSource(53300U);
    msg.setSourceEntity(168U);
    msg.setDestination(17321U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.3546583736595751);
    msg.setSource(24285U);
    msg.setSourceEntity(195U);
    msg.setDestination(59764U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.7157406886441349);
    msg.setSource(19312U);
    msg.setSourceEntity(216U);
    msg.setDestination(59300U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("ICGHKIEJSLELTMWUGUFYHYNVVMYVKNGOBKNXSAIFS");
    msg.description.assign("OCACHEZIORYGYQSUVIBLOJOWELIPHTHLIZTFDWHOUWPUVFUTPONJRMIEHPQFOJRXNWQRPMSMWEBXCLPWEPKAYGACDRDQY");
    msg.vnamespace.assign("HMGXHZHVDCNSOTOEIGTIFIWLOMJYZKGOFHHWNRKCDNMAKYXGAKTIYSVRNEUVGH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YQLRBTDIVSHMIBYFZGQPRWKNHEWSTOVANSXWYTQMISBHLTHVUIRQIDVPOCFGAKMERDYQCKMHCXZYHNJXPDDYBHEWAPKMENSZRWSBLIFXPCYJBNUUOFIJXVSNEFBSLUOWWUXIUMKARMYDGGFHCZCWOXEYEQGAJCDWPIUPODKTAFJMNVELLTSZJOLKXCZZXQUNCQVBHRJOZKFQLSLTRGOTAQGVAUJTUWRT");
    tmp_msg_0.value.assign("DBONJAUUNUMSMNMIPULNKPRBFCIMMXWLXYDLGSETAIYYGWTLKVHQRCZIESZVBFTDHBHBYHCWWWWKTQWALYDRYTOODOEVIJEBFMVAENPSRZKOUSKOWSCIQGXZVYLCO");
    tmp_msg_0.type = 16U;
    tmp_msg_0.access = 162U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OUCQQGUFTTSDEUQXCBNPPYNAETWQOSWSQZXTKVGNRKLFWJXYCFIRVCHUUPEOZTDFLUHDWOCVNLTGHPDNCRVTWUOYUZIFNEBJFZFXIIGUKLAOBYBJBLMMVZJXTDRWYDGGRVSXGQZSMRMZVICWHHBQMAIPHWGJNGMAEHSXHZNPQLWILANKSC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PVUUDRCEQEEGFHD");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.8728082716370298;
    tmp_tmp_msg_1_0.lon = 0.708225716205964;
    tmp_tmp_msg_1_0.z = 0.04335213589381848;
    tmp_tmp_msg_1_0.z_units = 41U;
    tmp_tmp_msg_1_0.radius = 0.836598226387357;
    tmp_tmp_msg_1_0.duration = 62436U;
    tmp_tmp_msg_1_0.speed = 0.93892876961063;
    tmp_tmp_msg_1_0.speed_units = 36U;
    tmp_tmp_msg_1_0.custom.assign("EEJKZLIMVPZSAPZGRLWSKUKWZFANXROSKJHRHVWEPCVJSUVHXYCUCXUAIJDDSJXQDMLWRQMMBTYQLQCTXHYHEQFXYYSRFTMUBCIOMH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Sample tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 64465U;
    tmp_tmp_msg_1_1.lat = 0.7754464529115339;
    tmp_tmp_msg_1_1.lon = 0.47648050760001603;
    tmp_tmp_msg_1_1.z = 0.0727289123221071;
    tmp_tmp_msg_1_1.z_units = 150U;
    tmp_tmp_msg_1_1.speed = 0.9615717790999758;
    tmp_tmp_msg_1_1.speed_units = 126U;
    tmp_tmp_msg_1_1.syringe0 = 199U;
    tmp_tmp_msg_1_1.syringe1 = 9U;
    tmp_tmp_msg_1_1.syringe2 = 160U;
    tmp_tmp_msg_1_1.custom.assign("RWOTMCKBOJKESWBQVNNNFHBIGZPM");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::StateReport tmp_msg_2;
    tmp_msg_2.stime = 1039432255U;
    tmp_msg_2.latitude = 0.23774781373977227;
    tmp_msg_2.longitude = 0.9695694262804007;
    tmp_msg_2.altitude = 27217U;
    tmp_msg_2.depth = 55196U;
    tmp_msg_2.heading = 31437U;
    tmp_msg_2.speed = 1525;
    tmp_msg_2.fuel = -33;
    tmp_msg_2.exec_state = 30;
    tmp_msg_2.plan_checksum = 60156U;
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
    msg.setTimeStamp(0.4870251370637342);
    msg.setSource(22395U);
    msg.setSourceEntity(92U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(68U);
    msg.plan_id.assign("VKFRTHLJMPVZJUBQTAOFXTHADLADULHUBZIRDDQJNJRRZWRWGYRMMAPYOKEBVSIWGBDSTOEGCPKARIVCTAKNXNIVOWGZIZDANQBOUOUPZQESHICDGOLLWKPNLIJMVCFPQDIQVMUVIGAUPBQTMVOEWFEZHHUJFWGYLPKHKSLISFZEESSCCRXAKNSEXQTNFSYYQXPJHMURQNXGJRABFGYDCSNLCYVWCWZOMTOWTGX");
    msg.description.assign("ABIBIAUOVLJNETWNVLIJDUYITTLXAJXFXKHKEKLRZFUMXGLBPWYXYTIFQVFRIXOLKUSJTUXEKBMNODYZWTECSACWNADQDIRZFRJYEVHCOBYOWXWAEUGVPFTQASHEPRBMRNHMSCJQSLOUZMQEZUHQZBLGQPYPVPLSGDKDRIXTNJVRGQXDZZZFJHMFYISKKVKNIQNMRYLVNGGMBCMBWSMEDQGCOCDHOPFSUTAPTKOGWCABORDZWJFP");
    msg.vnamespace.assign("GIOZKAWEJHULBQDVRUFTAISNIOEAEVWFKBIDYCDNKCYGTNACCVSGWHPYSJHDBSCJRTOJFRGIWDQW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DBCFPFUJWOXWROYKIQWKGAYXBPFWNXUQBHLLPTKPVBGVNDXONMUKJCFWYKAKPLZEEJTDFBVIYQYZHNLUXCECENPXHIJNBDMMUFZSORSJRKVECBTOTRUILZVIJARWTPSXD");
    tmp_msg_0.value.assign("MCTRKRJFRDTSYGFLONBUOGHCBMDQBOVNWGGAKZRYAZADVVZOEKEMVKMCQXBSCJUFVNHCZXFHLSKLJESKBNIXBFDHHBHIGLEDQTGDTQMIZKAOEEQSWVOHOQUPLXVJLPNFHKGSWSPYXLTBEJUMVKHATUAOCZQRTVDNYUPUWFWMZNBXPJPWFFEFUMDUROCIIQTGEXYADXYPPALZYPTLEIRASIOYLMNICYCTJGBJNSSINURA");
    tmp_msg_0.type = 218U;
    tmp_msg_0.access = 159U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GSDIPUJFZGGAEVDYOFYIFPHFMVOMOPJVFHHKHVTQYBIDBOXHWUTYOZKOLNEJEYKTCYJKXZQXBFDOTUPOZHVFXSVEEQRSBKGUWLRVNLVXFEFRYZXNQKJMCBTPRGWIQKGWEAUHQDJIIWZXYCNPCQA");

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
    msg.setTimeStamp(0.46278664491525756);
    msg.setSource(10812U);
    msg.setSourceEntity(144U);
    msg.setDestination(63512U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("NJBWXJOBUWTKPVHXLHYTBSHO");
    msg.description.assign("COTECRIKAFOXRIWHDZNTXBRPUSWCLSEPSMUUUGISGYQFFRGNZSWDBMYZMLKXXTRAAFXEAFPKRUJHISJKQIWMUMYPFQKFIEDTSPLSWIWRQQRGNGLOOCDKRHTWFDCNMAPDYQIWZGVYCMHWZJTBNXEVVPQKSMVBXCLYBEXRZQAMDEBAVDFPVNYBNUXKUOGZHBVTZPTHGJLJTNCNIZEHFHDJLHAUUXALYDOONZCYBAVIVOKL");
    msg.vnamespace.assign("ZGJDFFJUZZLNJNLGXNASMFSUHIPEHETVKRSCHNMBBERORCXREHKVDYIZONJOSMFJHFYAKZWGCTXSWBBCI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SHEZOOJGMYODUGCFZUOXOFQQGHDVEQAUKSLIJHURBSZXPPGLGRJNBLUJFUXLOFTMVZSNPACWXDPATHUZVKPCYDBJINWWARGKDQWCJVMWRMQBVHSQREXWPYHPJOWSBGNFBKMHBNYSNLVCKLWTAFIADZWEZXXHYXINJGDOIQYM");
    tmp_msg_0.value.assign("KSLJRRFUYTVKDPYRTMNFPATNEVEDXDGUFKDOHUQVLUROUKXCHSYHKXHILMVMTXWFEWQDSBIKAFIFZQLOFDQEQXHWAAJCBOZBJPZCGAMBQBJHEPATDAQ");
    tmp_msg_0.type = 56U;
    tmp_msg_0.access = 188U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VWKGBZQPXQGQNBROMUISPUQSZHVTWIMFGYLZEDCIAZMTKNBDGEMCKFCQUCFWTOZKFRNROAPJGKRRSHPEXKUHQBYBSZKFAOFAWSYVHUSKBVIYAEDZHGWLWOVDSIXUMEDEMNFQXMOVKVDECBCXLWVLSUTEKUTXGPJNPLI");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QQCDAYLEZWGUBEVYCOKRIBCEJPQTAZHCWQJSESVCQXQHJPMNRFHIMVHGPXOZXWIAHIKMQKAFKVKIONSFVOXNUIRMPACDXWCIGSLNXMBHUDSY");
    IMC::Drop tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 25937U;
    tmp_tmp_msg_1_0.lat = 0.2881452532779851;
    tmp_tmp_msg_1_0.lon = 0.2182428533681232;
    tmp_tmp_msg_1_0.z = 0.6400788881886074;
    tmp_tmp_msg_1_0.z_units = 177U;
    tmp_tmp_msg_1_0.speed = 0.52486966448913;
    tmp_tmp_msg_1_0.speed_units = 78U;
    tmp_tmp_msg_1_0.custom.assign("LPVAESSOQYIDZGLRBIWWZDHXNVRGBKTFGJTJOZCKEDYYWRANNMBMCJUUWKGIMMHXBWHXVTHOQGGKXDBLPBLHTHRCFXVRNBIDLSQYXRYVUXCEKXADMNQPQVQSCWWJJZOFZSZOOYWAMSLTOKRTAGUOJERIDSUKZYUPDAKMQEHPEZF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ManeuverControlState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.state = 64U;
    tmp_tmp_msg_1_1.eta = 35579U;
    tmp_tmp_msg_1_1.info.assign("WBNNRDERWMHITXFUBQCIPIEMFYFGOUVPCAFONZKPPQLHRQMHJSUMRUTBPDZARC");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::FormationState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.type = 31U;
    tmp_tmp_msg_1_2.op = 61U;
    tmp_tmp_msg_1_2.possimerr = 0.4356252974111495;
    tmp_tmp_msg_1_2.converg = 0.3739331499140015;
    tmp_tmp_msg_1_2.turbulence = 0.6660505715526146;
    tmp_tmp_msg_1_2.possimmon = 48U;
    tmp_tmp_msg_1_2.commmon = 112U;
    tmp_tmp_msg_1_2.convergmon = 123U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("XGKQABNUOGFGKNMVRRJYWPIOBLCCNOIJQLMWFBCMZRNDBIQWLFYXGHU");
    tmp_msg_2.dest_man.assign("MXZJDINVXTZQZSIGKQABLNKJSUZTKFVKTYKILDVLHPSYWYKYFGYYETCADPAMETROPCYJQKVVDSFRRRMWBWRGDQMTFACLMUSZWGEMJOCTNPCTWWFDQESWFCJSJYQDGIGEHFQAPUCDAGJIPIARVKBCIMXMGOOOBRAPEKTPDPZRJQXWLHNWNXOBQYNYCHXIUENUBMFLUUBUROUSHNMXHGLFOUBAZHWNEVVDOXHL");
    tmp_msg_2.conditions.assign("PBJAQDHLHLCVMONFOHEFKTBEEBSZIEYQTGMZIUTSGEWBZKERNQKUTHQMKRZWMWCKPCXHWPANGOVNJAQRYXVJQIBIKPCAXCFRYXBUTDDNRCLPFYLIUQAFTZFSMOFL");
    IMC::EntityList tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.op = 235U;
    tmp_tmp_msg_2_0.list.assign("FUWGRBRXJKDXNNIUCANHTGXVDQZLAYKNTYQCRBJKKTMYJDWOVVEHNFZVMQLKUAHAQTPTBLKGXMLBFCVDIZPZIGXDVINWTFWWNGHYSEQWQYHMOZFKQOLYM");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::RemoteSensorInfo tmp_msg_3;
    tmp_msg_3.id.assign("VSBCZDDUHBRGPSZQDCEJISVYTJZMOBEVCTWOIHFWWSSFPKFBBAJGAMUJXAFCXVCREFIMTHIOPTOKUBJPIXFWJNMXZHPOXLRYYGVRNZMUDIUYTAZIQGGXWTNDYEQQKYSUQDAWKMXYRABNODRVGSBEFHFALNPLALOYCNMKUOWXGWHNZDSCJLPQZSQTMIKEBHVFVEXDUNAJNIVLQLUYLGRTWJRCPMTUWKPNEDAVHTYPFHEEQIHKS");
    tmp_msg_3.sensor_class.assign("EFSXPDQKXXWHIXULTELLDUUGZCKJHCCOBKTWGKDVMPKZKWYMOXBUIYNMLHGUNTOLHRRNPXZARBRERCE");
    tmp_msg_3.lat = 0.02608980832234664;
    tmp_msg_3.lon = 0.06095390394723388;
    tmp_msg_3.alt = 0.8933954018349929;
    tmp_msg_3.heading = 0.2591177821516799;
    tmp_msg_3.data.assign("BXZDQTXYVLQCLKMRXJGTZPWFDJCAWAFMKSAYWWKYNQLFUFZVNRREBOXSWSWVIGKJWLLQHOKFHTAAAOZUZCMHYZOIHOCCCMFPEHIBWFDAUBTOZKDIBSJYXWTECSDPNVV");
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
    msg.setTimeStamp(0.9594625829459059);
    msg.setSource(14620U);
    msg.setSourceEntity(205U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(126U);
    msg.maneuver_id.assign("JXNQPTNAXLCSHJUNWSFWFVCDKMEAEDOQOKRWMMGNERUIYBFSPZMFTCBBDYHTHYHKXJQAVORRXTBXKVSGFLDLOGSMKGVKPRQZRCMBUHXBVVRVTBQLOAWYWQJILJOUFEGAXEUPZATZXUQZHHMPNLCDZNIRZMIWECWLIJJAXCATEOGVHWZSSDABPYFDFRPFDSLTPEMSCUBWUDAVBGIWDNQHSYKKCOQFMKPEYIZORUQYNGPINUIJON");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 46405U;
    tmp_msg_0.flags = 145U;
    tmp_msg_0.lat = 0.07386821059219295;
    tmp_msg_0.lon = 0.019659144043378318;
    tmp_msg_0.start_z = 0.867832996684772;
    tmp_msg_0.start_z_units = 24U;
    tmp_msg_0.end_z = 0.6020453346506781;
    tmp_msg_0.end_z_units = 225U;
    tmp_msg_0.radius = 0.18158302652519698;
    tmp_msg_0.speed = 0.8008809015176267;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.custom.assign("EINUSQCMKORAXHVLYMFCTAZJNFNBWLHHOUBDWSWUMNIVBMXXPLSWBVUXHJJZHWPZRMAAYWDTDLWKENKSNHPYOGQYYEBFEUNJWAOQFKJGMIGPDOFPKBKLTUFVWGXFWYQJKVJSHATQQRCPRSJUNITCVBJPBMZNVQRMDQPEABXHJFGIICCDIYAZCRUZCRHNTMV");
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
    msg.setTimeStamp(0.20422671599218611);
    msg.setSource(2946U);
    msg.setSourceEntity(187U);
    msg.setDestination(17028U);
    msg.setDestinationEntity(124U);
    msg.maneuver_id.assign("ZIYYFAJIKXSQVEPGUPFPBTJLXECODLHTJFNHXJYBAUFHQWBCERWPFDNWQVSLAZNEHPMLWKRYOIBVUOLTVXJKDAVKKGBTHDQNZZXNCPWLILOFLFKYFUXWSOPZVZDISZQRARNOPSGXSCHLHVNSXRHGELWMWKCMDGX");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 34183U;
    tmp_msg_0.lat = 0.31157915388397117;
    tmp_msg_0.lon = 0.5375673384024716;
    tmp_msg_0.z = 0.0028984636505646755;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.speed = 0.36248300766091934;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.bearing = 0.10078994921130635;
    tmp_msg_0.width = 0.662244487503284;
    tmp_msg_0.direction = 105U;
    tmp_msg_0.custom.assign("GJRYPZIZLAXTUFHGHAWHQEWMUEZVNPTAIBSTJQCGKFQBMYMFWUNYBRMKAXISOVMTRDXACINKNZMEZKHSHHHWVYYRBJRBNCKLQWBFTRBZVWFFUVLBDWIWDMPSLSHNYENIFEJTOAZTPOLCWHSG");
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
    msg.setTimeStamp(0.22070076451416443);
    msg.setSource(48197U);
    msg.setSourceEntity(125U);
    msg.setDestination(25989U);
    msg.setDestinationEntity(90U);
    msg.maneuver_id.assign("WXOWGYXPOXVYSHUJMIRZUPCTQUOTRCATVFSNRKMQRNJVILYHRXZOJMEGDLCKLBBKNNDAYTSZPAELDOOKNQXIPQHVHFAVTFMVQQIIDZRGSDLGZYKSZQGVKERIWYGDJFGRLV");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("PMEBJWOGRJRDWJAGDKNOKFUWBMCWHOMNCEXWVERAAVDFCCNQZBSPDDAZETTXIQIIXCTONYMRKKYYAWKELZNYLCVRPWGDMAAGEODLPDGTECSNRVVI");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystems tmp_msg_1;
    tmp_msg_1.list.assign("UAXXRPEKNCCYFNIYMVLSBVVIZEFDWMRAQWJZSMDVPUCULDXNKTMSNPAMGHRMQZXWIJIBCBAGUTKSYGWGOOKRX");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.2536961226427247);
    msg.setSource(64787U);
    msg.setSourceEntity(65U);
    msg.setDestination(8056U);
    msg.setDestinationEntity(126U);
    msg.source_man.assign("OESLXOURUZUNPSTNWHFIYCFYSBSTZPVJXXNRWABTNAGOKHNAMIZVHECVENGFVDSAGUNQUQIPZXKJVPGMGPLZPEGFKZQFWQ");
    msg.dest_man.assign("UVCLGYGPTOXDOWHFVWAMNHTCEEJDLASHFQHDVMRVXCIIPAUTTOSSHZPRKLFIXSMHJWXTPETNZWB");
    msg.conditions.assign("CKWXGVYDWEQVXKHFHYOOITDMSIHJYBKAHVONXOFIUDQMLTDMYDSAEOMRPXRCMEUNOELOFDNIUBJKNPTNZHPMYCJNBBILRUOXNGMWTFYSHRPQUQBFELEWQGCASOVHXYIQVKVPWSPFVFFACTUUTZEZGCITEJQDAZSGIZNBCKLFZJVKPJOPCTKQXJXNIJLERLBERG");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("ILUBDBCKSCMLDHNYKLMGKUKPRJYMCFFXINEHKRSZTFXADWJQTBFBPYCAHRDMIDQLYHTNFIQUQMJZYVWVZEUZYJUZSPGNJTPLPHIYUIZRQKEEPXTFMGONOEFACMUJAVDEVITHAVWGNOLGGZIXSODPAQSEUETBURCMOKKGAJRZRMWCVBKJWSETWXYLZLHVL");
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
    msg.setTimeStamp(0.021265708371252412);
    msg.setSource(48051U);
    msg.setSourceEntity(31U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(9U);
    msg.source_man.assign("ICDCZHQXXFAKZDJGAJFGPDRKBMBNJEQCNQUNEANSQJENVZGRKBOYDAWFJSAOTBRRVSNBMWVUNTLJLKTOXLCUWOBVFPXZEVHCRZHDOWHFNLWWDPUIMBQGETPVZCKQUZSXWATDUWVXOQQLAVXAQBYPKYIV");
    msg.dest_man.assign("XEDSKJZXOHXCNJSGAJXDWFSRUIZRDVHJAABBCCFJOOFCHZKRUMVPRBMDZZEIOEEKCSNYVPUIRSOMJWTEAORMNSUBLJVDIPCNRWULMLILFXDHAFGCQSYPBTKSOAVWZYBYNFINXT");
    msg.conditions.assign("ASJLXHCAXDDUUFRVWCKTGVMUPSSGYHKSQLNENRVHLPETOZHPDGTLJYUEIAKZGUHUHDBSJXYWEZTTDEBXFFOLOWMPBDYNXRZIICCLFIKZIVNGCQNMPAJZQYRAPBDCIMRTKQCPMKBNWKSYVYGSDKJGJZJGWSTMHINE");

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
    msg.setTimeStamp(0.016995380130899962);
    msg.setSource(30840U);
    msg.setSourceEntity(235U);
    msg.setDestination(48100U);
    msg.setDestinationEntity(144U);
    msg.source_man.assign("YHXDQXQEPKYIWYKQMUZJTFFHGUUXYUMZJWKWEAJCPMOUVJKAVYEHVWENRHGDEVVJSWNLTQSTNFBNPFORNXKFZDYSRAOLMJZBGGZWZJOIOLBDDNIVBLMSIIQKXPBWAEYVVEXYKREGDGNORGTIWCHMVYBDUCLAOQSSRRBARLOLUOCBPPZNCRMPAWNBSCFAKJHHCZLFFZMQGBVQHXUDSCPJXNKWHMZGSQITTUIXUEHIXDIOACQFTKPYRED");
    msg.dest_man.assign("ZYALXUFLPIUHOGOEYEJDBDXNRAEKPCNERQDIAUOOZHNKMGV");
    msg.conditions.assign("YCQBNEPRRBNNXUWEGMZLGXTFZRZYODLAEBLXNHOZQAIDZHLJBHRQXDWICWWSUKTLJXPOXAVFQOJANYIKMKLHARPMAJKQRKVQDFSSOLFXGENOVNKJKMCMUEJCTZPJHSDBSFGCDVZBSAHJSEBQWDOWSUWBMARHIOLYTPTZEITIYVQJWFUFDBEYYGHXLDGUTMWNGUJRTZFLFDPCCPPTAKKO");

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
    msg.setTimeStamp(0.5918699509736838);
    msg.setSource(46522U);
    msg.setSourceEntity(156U);
    msg.setDestination(64288U);
    msg.setDestinationEntity(159U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XRJXHLKNCWNJCVSPRTKJNDJATXZOYCYDBLRAPNXDHQZMEERFWKUHQDVOCAXUZCGVZOKIX");
    tmp_msg_0.description.assign("FJDWREZDEVKFMDCUSJWUORWLKBEZQUIWJUIRCHBCMMRLGTLHBYQGKXGFIOYEIHPPDVJGCNLKEPBXNZTGRFVDNQCOAIIRSLBOWCYRRYXPTOCPDOHXAHXEQQSBJHSFAPENXADJTLSYGHMPZSMSXZUTARDGAVJUGNJFUFXFOKYKWYKNZZFSJPTDVICRDBVPMZZVSOTOVINTUKYTFLUCAAXASLZJMQYMAMHBVXHILQG");
    tmp_msg_0.vnamespace.assign("MLBZFQMBFSPZXORCWROZNXCCAHCBCLAXOUVWJRHOHYHJSCZVNNSQIJOKBNKQETIWITUURFEMXBVYLZRKOECPLRUPABQMPQGGDAKZMGFEYOSWXIHUDCIGWHFDPKYOHOYNVJIDJWRDQRGPZKGCMJPDLNXWTAJZQVMEFEQFATSLFBHYGWTEIDMBNOULSAUYVTIRKYGGZXKLUJZSXQMAPBVVTTAPSFYKEFIJLEUNXXNYTUMBSHGQWDRDJEWNKVLC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TBVJVFMEQYDRMNTTGXHNGQJRYEKEYKJVQQOXGPAAQBAPCFOOVUMGQETDWFHWFVYHYHGXZIBVTOWTFTXOALLCXRCIQAUCCMPQZAINDPUIOANUZKJBECYRJYHGXDYTWDUSBNLMECVH");
    tmp_tmp_msg_0_0.value.assign("PNPIGSWUVPMSXRZBYRJKTQSXPHTRQKTEVPPBNWKDRQWJEFGMGKFNIZHLLYITYEHCBICDDCKVAWKMNJDIEFRUWUUTNMCSYZEVEOPSOWJJEOXYVMHJOEDMTZOMLS");
    tmp_tmp_msg_0_0.type = 159U;
    tmp_tmp_msg_0_0.access = 63U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EXPQVHFSWJHBQFAJRHPZLAZGDDBCOUABNBALXEXKWSSKFEFCKFCTAPTHELNKTVRPLXYFEYZIEJBWFASXYUROZQJUPQNZSUNXOCVSJZJJGXSIWWDDYMRIQEWYGGINVDMXTRXGUVSSTVYRUIMBCAIGMTHBCKLUKOAUJVUNAVWMZKLPIWLFNEPBBLMVTCOZCHDRNTUXHHGHZSCRJGWMPONOYEVPGTIRWCFYYQBOKDGEDQDFYM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JUTWGQNRDUFOSOLHCMDQWXXDEQGQZKIINEVKRDFNO");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.7867220958952709;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.19270588694069968;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.39984086423298526;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 172U;
    tmp_tmp_tmp_msg_0_1_0.duration = 10133U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 62110U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 46997U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.41872230147369394;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_1_1;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.beacon.assign("ROKTURSOFMUOYVEFYOUDCMQDKPNTSIIAFSAOEHPAWUIVKZETJQLBPHRFNPESBCDDZMBJLYTZWNQJBVIFUKPHLXREKLMJMIXALKQMVRSHOLXSHJJMQGHXYYDIKGGPKRSOZXXMZBKGEGKZFGZNWWXECWPCMAIYMRYITFQNIEDAINWCSTOWYQDOTOCVGVTAXAUPFCRFNVLWQUBQBNLHYJCNTTBPBEZVBNAYARVZXSGHJDSPGGRHDDZUJCE");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.16854091511567648;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.4696397272057623;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.depth = 0.9327652685583736;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.query_channel = 174U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.reply_channel = 196U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.transponder_delay = 175U;
    tmp_tmp_tmp_msg_0_1_1.beacon.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.x = 0.6997233365946992;
    tmp_tmp_tmp_msg_0_1_1.y = 0.6595463626381198;
    tmp_tmp_tmp_msg_0_1_1.var_x = 0.45970321105963474;
    tmp_tmp_tmp_msg_0_1_1.var_y = 0.7718538364755537;
    tmp_tmp_tmp_msg_0_1_1.distance = 0.06299403466426368;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::GroundVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 126U;
    tmp_tmp_msg_0_2.x = 0.6824387128234114;
    tmp_tmp_msg_0_2.y = 0.36048968515505786;
    tmp_tmp_msg_0_2.z = 0.7549478774394914;
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
    msg.setTimeStamp(0.3263874374788325);
    msg.setSource(44087U);
    msg.setSourceEntity(142U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(193U);
    msg.command = 28U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MMDKOALIKNZZAEIEE");
    tmp_msg_0.description.assign("HOZYAQKLPHKQPYWCWRCFPANKOJYVGTYHZRZRQNV");
    tmp_msg_0.vnamespace.assign("RSNIPYSBBOYTZYYLLEGYIIPUELVVUQRZWJSHCBECHPGEQFQYBWXEBKIJFSXEHTIVV");
    tmp_msg_0.start_man_id.assign("HKGYVKJTQRJSUKYJNXPSFNBMCIAXARTZFEAOQZVWRESEZCVBETFLRUAZRFMSWUHMQHLWZLEDHSZQLBDGSXRQPHABGXWWIQSFNUJPOVUVBZVDTSAIOLIDYOCDUKEGYAPXKDIMCLXPXZGXVSBQVQOYMWCREDNKWJFMBNTDVGCFHOHNLKABYMTQFJTORIKMYUBFOJCJLGK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XTOSMITVQWHLURKQKGFJXBTNCFWAYOBQMEQ");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.059822786344813195;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7249531222864656;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.45761204117268084;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 115U;
    tmp_tmp_tmp_msg_0_0_0.duration = 12573U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 17527U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 59976U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.5907725507552842;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Pulse tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.6313074338076721;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.2908920082783846;
    tmp_tmp_tmp_msg_0_0_2.z = 0.8533858060116322;
    tmp_tmp_tmp_msg_0_0_2.z_units = 228U;
    tmp_tmp_tmp_msg_0_0_2.speed = 0.6149667240505876;
    tmp_tmp_tmp_msg_0_0_2.speed_units = 54U;
    tmp_tmp_tmp_msg_0_0_2.takeoff_pitch = 0.7721346312083145;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("PEOSKJZUAFQFSRZHLGLUSLKFKMZEVBQWGCFTSEFXEICRUJFVVDMTDNTXNXMXTNMDLDHMQUGGTGHSPIBHJSWNBFOMKXTYNITXSWCMZIMAEHWUJQWABOBOBSWBZKWEKCQIZPBFDPNCYOYDLVAAJANGYHXQQGMKYJQPOIJOTRFUACZRRLBHQHGLRPJDKPWHV");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VBYFDHLPBXXZHQQCAMFHJSDSPYNKTYRWTLSCDCUNDRSFGEAOSZQUAGBNYLUBLTZXVKITXHGSYHDFRTLPJUTDXBZVRCEGTUZZEVAVMAQIWBNQKVUYWEECPWBZZLAYOKKKISLFSGPVXUJRWPFWHIOEKDQQNQOZWMVNIHXIAGYDDYKORUTFCQOMJDWYOPJMMWLEXGIFCPJTQFGGPHWRBCF");
    tmp_tmp_msg_0_1.dest_man.assign("EHBHRAPIDEQTTOFJUMTEWXMBEDLIXZZQIZQFYWZLHSHGLBYIHMRNKKGWASLOWRTXZDTKUUPCDNKZWGNVXIGLXFMPQAUNPXYUUBYRDJEZYISTJKNDIICSR");
    tmp_tmp_msg_0_1.conditions.assign("UVIXFBPXFLUWNSJYARMTYNPLTQDHIENQHKWVNBWESKGDRNTMXJBRBU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GroupStreamVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.7085491930724661;
    tmp_tmp_msg_0_2.y = 0.9038934808806162;
    tmp_tmp_msg_0_2.z = 0.3611675254143625;
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
    msg.setTimeStamp(0.33935718185282926);
    msg.setSource(7826U);
    msg.setSourceEntity(169U);
    msg.setDestination(53695U);
    msg.setDestinationEntity(169U);
    msg.command = 18U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RJKVDHHNVLFXKNQCIGOQMCPUYBILZHRCK");
    tmp_msg_0.description.assign("XUPEWWJNZZCOHOTWLTFABNRJZUMMJSCKMLCGTELSYISTTVFCSOIQMDDPQENDDSAFWUAZVOHQVOABINJENVHUTTCWOSEBGCIEZPKMUHQKDWGGZGHJXPKAMCALYYNXDOLFYKVBK");
    tmp_msg_0.vnamespace.assign("NYMDAIYXBHOKRKAHLWXDWINPGCZNQFMTQLSPBHIDTUOGIGIJYMYSJMESTCLOCWOTZFSKVSVLBXNXUNZHUQVIDQNLUKAXKJJSBLFHOEYQAJOAUPFLBGLAZLJDYWAPRYVCGQOITBUTCNSKSM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YFJUARJQYCINWCDGXOTTGLBVUNPXWVPWTIZOKMMONSOEBQMQFRRCXQXBKXYFAFIKQEDOSGFHNHLVFPPUZQDYNNVAIHBHAAQCUDUJGECVBR");
    tmp_tmp_msg_0_0.value.assign("CYQMYMXCLXEALCPBWUZVTHWNBEMDFGMMKNVCKJTOACIMPTWUZRHUIDLDZEGTIYHUHQXAOKNDSUEISR");
    tmp_tmp_msg_0_0.type = 189U;
    tmp_tmp_msg_0_0.access = 150U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VXANRKSJFBR");
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
    msg.setTimeStamp(0.35162595456881784);
    msg.setSource(10932U);
    msg.setSourceEntity(207U);
    msg.setDestination(5373U);
    msg.setDestinationEntity(23U);
    msg.state = 93U;
    msg.plan_id.assign("UWVSJMCBJVDOLUINHGTIIIRYRXPCSNXPDGLCWTKNPJFXCWQSKUDCAQKSGRIBGGKIEZHZNKOHGBIANGXOHUDMZSTWMPYNUUFLSEVAZVGNQQTMCNSGRKETZAMPBEJLTFRFDZSUYJTTHHKLPYPOHSPHNVDKYBQDQQ");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.5020028280867094);
    msg.setSource(31801U);
    msg.setSourceEntity(159U);
    msg.setDestination(44391U);
    msg.setDestinationEntity(184U);
    msg.state = 130U;
    msg.plan_id.assign("KULPXFEVKRTOFJYCHJKRINGEVOIJWLGFEUIHMUVCKUBQCEILJOMUVJTNZZRCSPTMKIOAGRGRYMSRBHKOQWFBXMQUOSPDRLZEGNYYUYTFJDCLZHXQNEHAFADGUWQDXZFFWKHPTBNLNBTBYDQSHZXOYGVZUWTSZESLJVADGXHAPDBPX");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.9470692909562993);
    msg.setSource(58834U);
    msg.setSourceEntity(155U);
    msg.setDestination(42198U);
    msg.setDestinationEntity(94U);
    msg.state = 85U;
    msg.plan_id.assign("SLEEGVUFNOBQPNIOGFMHXVCSMHDZTFXQJKCEXPGTRZPSYAPHEQCYHGIKCNAUCVSIJAFSCVSAZWXOAEHJGPAQIIYUDLZBQHTKMNNWZTGVWQJRAFWUDJFEBCEGFAYRRLVUXJTMHKHJBOTFUIGOCIKDVRJWSOQPKMBDLRVFOYZIKXVWELJLDRBBARBZSDKYUBHZMCQIPHCNWPX");
    msg.comm_level = 164U;

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
    msg.setTimeStamp(0.3961619769636242);
    msg.setSource(2298U);
    msg.setSourceEntity(146U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(188U);
    msg.type = 115U;
    msg.op = 69U;
    msg.request_id = 22863U;
    msg.plan_id.assign("BTCWVOMSXEFRTDRKIZMAJJFWAMBYRSTLDCJSTHJBNEQOJPXILDGNVWDMLRPBFGHHWWFQVHAOVTELXAZDKXBIQEFGHZSCBAZYPNMSFNUYDNNOUFEKGBPPKVIJIMJPDZOTCGSURCQMYUQBCRXGXMWXEPUPNADAQHHQR");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -19219;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EFOZEEYVITCHZYJIAHYEYIGCHSLFFKQQHGOEWNEOXTPIYSDLPWUAKHDRRWUMDPCNB");

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
    msg.setTimeStamp(0.6396523964467573);
    msg.setSource(46836U);
    msg.setSourceEntity(159U);
    msg.setDestination(44165U);
    msg.setDestinationEntity(124U);
    msg.type = 83U;
    msg.op = 226U;
    msg.request_id = 57895U;
    msg.plan_id.assign("ZSJPVBPLNUPYMVDJBSFJVISPKIYLVJVFZBIUZXWAMTRDTVMIDMFWKXNRQMWEXSGOCOXRDRJEJMLHYHWQFAECHUKOTINQDUQKTDTKMFNSURKZECFIIQYGPOOBXFTJDQCSGBLTXXXHUWUAFELWHMRBASNXCZHZOOKHQUODYZO");
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 73U;
    tmp_msg_0.lat = 0.23362885716246673;
    tmp_msg_0.lon = 0.5456853759412019;
    tmp_msg_0.height = 0.4308857343739899;
    tmp_msg_0.depth = 0.2521393660256006;
    tmp_msg_0.alt = 0.7770481636062351;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XNNQLRHAKAMFBCUUTYJNNOVGKEOJRWTGWDJSXUZISHMOTQSAKAQKCSD");

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
    msg.setTimeStamp(0.48117007842377957);
    msg.setSource(50101U);
    msg.setSourceEntity(235U);
    msg.setDestination(60306U);
    msg.setDestinationEntity(41U);
    msg.type = 96U;
    msg.op = 177U;
    msg.request_id = 47332U;
    msg.plan_id.assign("AZAIIHFFEMWVWWNSPELVZLSAEBICXNYYJBMCQFAZGNJKVIXRHCUPVUQBOLQAGTXKMBJUGGRYPJXXKRPTJQIMHNTYRCPNSGVFPSRDVSEHYRKWMKHBCUDBQQPBCXEZNTKOFFOADUPONLDZNZWMLXCRHNKGNZWMDCOJTQBUOZUAHALTTYOEJFRMVOCUWGPJDDROUGBHELWXSQSGSBAGIXUOYDQJFWXTEKWLYRSIEYFMYJLT");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 24U;
    tmp_msg_0.label.assign("MMKLOWFLUGZKKMHQFZOHQSDBYJVVPMGJFUNJGBZBLWGNIUAZNROEEORKWHYVAMLTXHEDLJPLCIGD");
    tmp_msg_0.component.assign("IGSCNBTJGYFHEIUDJMDQFGMVQRYVEWUZYLUVBYCABOTKAHNXQOQEJMRDJPCFMPPSOYPFOBXNXAMKXHAZKTSQUWRLEFDKHUELRZFEOSLUADFOSCTQXCBHVWDOMQWURNVIUBYLZIBIDNKGRZUGLSDWKMPEBFNWZKQWHPEEIACGVTKYLEAINZDWVRCIOZGXQSQNJTAJLNTICNCGXZGHMRZBKPPVKIYTHFOMRYVDJWYVGWC");
    tmp_msg_0.act_time = 44805U;
    tmp_msg_0.deact_time = 60432U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PTFPIGGXFBDBDWAUHAJBWMFCAUDQKKHQXJUODAOPVFNSEKMJRSDHCBNBYQDFFKRVWYHMEYEIERCSOWZVUBYZTJYUJRMVPZLVOUMWGANODGJGARXLCVBZDKYNKUHOPMEFODETTWJQQLWXXSLPJIFLLHRMCEPNTORAASUENXGVJGOYHEUQIQCSIFKCKWPHJTLSEWTIMXTZWVZHPYZBKFTAHBGRVSYLGDSLS");

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
    msg.setTimeStamp(0.062268563943058464);
    msg.setSource(8319U);
    msg.setSourceEntity(185U);
    msg.setDestination(11922U);
    msg.setDestinationEntity(15U);
    msg.plan_count = 14129U;
    msg.plan_size = 1355132926U;
    msg.change_time = 0.7913947622705746;
    msg.change_sid = 57826U;
    msg.change_sname.assign("KZNEGZPFRDTOTBSBRWIKVTQDUKXYFKNQJKQGGMQMUCYIHGJXLCSPMKOBNXNXJLYBZCDIZYAEHIEOVULFSJFOASBOCEVGLXJUWKTFRWCFYKMHBXHNYAYEHMMFCYVKASWVIVVMTPCIQYSWEWGHAQDEUDNXAQVTREJRTQAPRXUNLSDQGUOLOVSFXMJDUWRJTQZEERDDLHXFZGZBCJDOPILBUWPGZRIOASKNLIUCBZV");
    const signed char tmp_msg_0[] = {117, -48, -23, -61, 25, 12, -101, -39, -11, -69, 36, -58, 50, 57, 52, -90, 36, 99, 123, -125, -40, -47, -80, -11, 63, -42, 71, 32, 57, 11, -33, 121, 50, 60, 112, 65, 72, -76, 19, 50, -32, 119, 13, -41, 10, -118, -18, 104, 71, -8, 19, -96, 116, -109, -17, -72, 3, 108, -17, -36, -82, -97, 86, -121, -21, 12, -23, 89, 124, -101, -7, -76, 24, 69, -10, 65, -65, -78, -37, -116, 122, -116, -12, 23, 54, 40, 19, 86, -123, 75, -106, -64, -57, -84, 31, -48, -77, 74, 20, -57, 78, -100, 24, 3, -15, 95, -85, 29, -98, 10, -48, 55, -87, 31, -123, 58, 24, 22, 111, 25, 33, -68, -55, -17, -26, 40, -83, -95, 123, -88};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TKXYCBNUTBIYAVSLHLRCSXNUWIWKPFZKRENJLYJUKRLOZBPINFVJDFATLHTDEZPVDSBMTSDSHIRJOERACFIMIXPYMHHPAFBUSBQJWQWIFMNGHTEEGZDZMXBFGKOCOWYVV");
    tmp_msg_1.plan_size = 50644U;
    tmp_msg_1.change_time = 0.3161592529821957;
    tmp_msg_1.change_sid = 49185U;
    tmp_msg_1.change_sname.assign("WOEFOUNPUSADMYFJPHUQAVQGIEBNAKCHTIXTWXPLJMRNYXILSXVAUAESYYYPREMGPZKHLZQBPILOCWDXGQGHNAFJJCWSLKNTPXDHEFATKWYVUOWMLEWRFPZAYMTOSBCGKIYTBUPMBZTQMDFQVOWATVOCGVSDUNOLBKZCEQHKFBUXDLKOGVIZDJGRHRIICNCHOJDZLHZZURMCZN");
    const signed char tmp_tmp_msg_1_0[] = {28, 114, -40, 16, -66, -66, 125, -122, -7, 26, 68, 77, -120, -67, 5, -87, -20, -71, -58, -50, 42, 71, 66, -7, 31, 121, 118, 107, -48, -50, -102, -68, 44, 97, 38, 82, 113, 78, -64, 0, -41, 41, -69, 77, 26, -73, -15, -81, 123, -39};
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
    msg.setTimeStamp(0.1320884140177946);
    msg.setSource(29861U);
    msg.setSourceEntity(128U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(138U);
    msg.plan_count = 61256U;
    msg.plan_size = 3453996829U;
    msg.change_time = 0.9590539403927408;
    msg.change_sid = 50216U;
    msg.change_sname.assign("BOGTGYYLLVYQZTKHJJQCSALBNLUXIVKOZJQMOLFNZTAMEFVSIADCAWJMSNTWBAKNTMSHXLCHWXBUPFIRGBWHEKVDXHABNVCZTUIEVYQDPECXRDURRZWOFYKLYZUJTVJFVPHXXEQQLDDKQCAMIYPJEWGKQCSOBOUZBGARUWGLFWHMUBVARSSWRMGDEZHPMZIURREPSAOKMNFDEBPLPCOHK");
    const signed char tmp_msg_0[] = {-41, 79, 64, -107, 95, -3, -115, -23, 25, -23, 120, -104, 108, -17};
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
    msg.setTimeStamp(0.7272708756406219);
    msg.setSource(38715U);
    msg.setSourceEntity(151U);
    msg.setDestination(29438U);
    msg.setDestinationEntity(5U);
    msg.plan_count = 47070U;
    msg.plan_size = 2779583905U;
    msg.change_time = 0.7973482097051189;
    msg.change_sid = 4112U;
    msg.change_sname.assign("BKSFAKDPWWUO");
    const signed char tmp_msg_0[] = {-105, -56, 24, 8, 125, -11, -15, 85, -122, 103, 37, -67, 12, 101, -105, -2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ROJYRJYVCTHZQLGMSGSBWEVUFECRAFTOFMUYDBXZGKNDMECOOBWFHEYSMLDVNHXIOPWAPHHXAQXBRSDPPDOLDJPKHTNJPLZWGQSTQKEXAUXQWYUYRFORIKUWCDDEAUUXFZCFLZCLRBMKVDAGYKCTPZAKLEBYSXSQFUOIQIJAIZKQDGBPXJFCWNJGTVMZTREAL");
    tmp_msg_1.plan_size = 40918U;
    tmp_msg_1.change_time = 0.5650410075312114;
    tmp_msg_1.change_sid = 38751U;
    tmp_msg_1.change_sname.assign("HOYDTQOCLNXYIDQETOKCNVEQTFRRJPYUKDTTSXZOAKBLLMBPLFVVZRHJWNPGULCDGDREV");
    const signed char tmp_tmp_msg_1_0[] = {-29, 105, -36, -56, 41, 81, 48, -38, 97, 45, -68, 3, -113, 36, -26, 59, 8, 112, -49, -8, -107, 17, 88, 50, 106, -55, -95, -2, -116, 120, 105, -121, -24, -33, -77, 15, 117, 98, 50, -7, 79, -58, -65, -101, -81, -43, 107, -94, -42, -83, 126, -126, 72, -43, 9, -28, 126, -88, -14, 64, -75, -52, 16, -51, 44, -123, 117, 32, 43, 92, -111, -106, -28, 10, 44, -6, -71, -39, 43, -122, 112, -65, 95, -119, -24, 45, 123, 65, 117, -8, 47, 23, -1, 27, -53, 37, -33, -4, 73, -122, -33, 112, 10, -116, 88, -32, -83, 22, 40, 62, -69, 42, -33, -48, 2, -46, 37, 97, -55, 56, 29, 49, -73, -75, 41, 88, 10, -82, 114, -111};
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
    msg.setTimeStamp(0.6594434248101834);
    msg.setSource(38796U);
    msg.setSourceEntity(178U);
    msg.setDestination(11389U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("PQSVUMACYCXVIPCKGSASKTUXYLHYLMGRHYBOVWGAGQKOMELHRTCQXRTCTYNRZESJWYMOZIMVROKFFZTJNOOLMGLKFEAMGNBDHHDIHOOONKDUIFJJFKLRPVFVPZDCAUHJNUQZWBQDWHZXPTSENQENVWAYDAN");
    msg.plan_size = 60157U;
    msg.change_time = 0.6037075650109776;
    msg.change_sid = 48177U;
    msg.change_sname.assign("CYXNCDPAQLMVTXOLDTYFEYMHZKIZLXNMJUYFDYEBNCEDQGEXPQXCSSEOTBPFGJMQKXIGRFPWZXBLWWBCNTLVZCNEWFIAHGTRWHDUUSSWOPOKHQPMOESI");
    const signed char tmp_msg_0[] = {120, -123, 79, -115, 93, 124, 118, -103, -86, 30, -95, -115, 69, 61, -19, 72, -85, 78, 27, -57, 9, 70, -72, 95, 18, 54, -66, 29, -122, -73, -1, -89, 108, -16, -128, 17, 107, 115, -117, -2, 72, -31, 113, -117, 114, -82, 26, -26, -68, -124, 52, -109, 9, -86, 96, 103, -80, -14, 34, -59, 80, -43, 121, -99, -69, -48, 105, -30, 123, -126, 84, 117, 6, 93, 14, 65, 70, 57, -124, 8, -125, -119, 3, 44, 111, -128, 64, -56, 49, 28, -71, 16, -22, 81, 2, 118, -62, -103, 35, 96, -37, 46, 105, -90, 21, -25, 66, -52, -5, -98, -23, -60, -49, -74, -18, -5};
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
    msg.setTimeStamp(0.16628365690070868);
    msg.setSource(16424U);
    msg.setSourceEntity(34U);
    msg.setDestination(35324U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("HTAPZKKHWARLUOIDQGLOFTMQXXAAWUJJKVHBZNCSZSYGYGMRZVPYRCXMGHJXBCBJUFPIUNPKAZDXGKYDCHVGUVQFWQYJYXHNOLOMSHLIUOMMTROKYUVBIEFPDRSVDDSENGBBORAVYGQW");
    msg.plan_size = 16793U;
    msg.change_time = 0.1221741264590287;
    msg.change_sid = 40793U;
    msg.change_sname.assign("CQXRHKCIVPDITTBXVTXXMZUCJSHIYBDQGMFFGUJGSZA");
    const signed char tmp_msg_0[] = {-19, -13, -56, 6, 106, 101, 60, -101, 12, -112, 118, -61, -95, -34, 45, -88, -69, 104, -111, -36, 16, -39, -18, 83, -98, 119, 31, 73, 6, -26, 29, 10, -45, 14, -51, 84, 88, 25, 83, 28, 81, -91, -3, -97, 54, 20, 95, 6, -61, -110, 100, 12, -60, 35, -18, 72, -33, 102, -20, 40, 104, -70, 111, 89, -46, 52, 89, 88, 35, 122, -32, 69, 27, 21, -27, 66, -90, -19, 102, -56, 27, -85, 23, -76, -3, -114, 102, 22, 88, 119, -111, -107, -35, -87, -118, -104, -88, 101, -118, 115, 54, 104, -109, 31, 0, 22, 123, 85, 94, 31, -51, -58, -36, 67, -110, -28, 47, -119, 21, -6, -72, -14, -30, -59, 40, 39, 33, 8, 122, -16, 16, 117, -15, -111, 16, -77, 86, 29, -128, 107, -94, 96, 86, 49, -72, 78, -44, 35, -68, 96, 126, -13, -127, 53, 0, -42, -4, 79, 118, 35, 40, -74, 54, -37, 51, 69, -57, 56, -54, 86, -123, -107, 30, -8, 93, -4, -38, -105, -10, -71, 91, 21, 34, -9, -55, -72, -100, -91};
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
    msg.setTimeStamp(0.8524990560274568);
    msg.setSource(61297U);
    msg.setSourceEntity(34U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("WJFFAXBBVEWXYQJZDSAGQQQSBUNFRZVDSNXPSXTTHLYTCDSLHVXWUOTPTCFA");
    msg.plan_size = 6941U;
    msg.change_time = 0.8038847071583991;
    msg.change_sid = 64115U;
    msg.change_sname.assign("MBMCYSWNIIGKVZGMYYJPHCREZHJXDKRXVMXHAJOTDYMJHGVTZWUHTKCIINEFYAPEOKYVOQVMEIHNOQFHYUOWDWOALDQRLSLKUMSZRKENLRYJZRBWWKQQYUXXWJFIGJUFDRXWFTUQVSSZJCMUOXPPZNBKKBGFTJPVBEQOXSDGTIAAGHMQGXLANSBSPDLUFNKTECORIFPN");
    const signed char tmp_msg_0[] = {76, -45, -85, 24, 96, -55, -103, -79, -80, 116, -87, 74, 83, -92, 106, 11, -44, 95, -63, -112, 23, -6, -98, -97, -23, 100, -58, -71, -102, -117, 13, 61, 104, 111, -47, 56, -126, 69, 48, -106, 80, 65, -126, 109, 118, 27, 21, 16, 67, 122, -58, -80, -53, 86, -30, 26, 6, -107, -118, 77, -120, -89, -46, -98, 16, 5, 66, -66, 4, -119, -9, 108, 42, 83, -31, 65, 125, 13, 38, 64, -107, -43, 50, 4, 54, 75, 27, -50, -19, -48, -85, -34, 76, -42, 54, -125, 113, 16, 32, -9, -68, -54, 49, -84, -57, -118, -43, 28, 6, 94, 92, -108, 60, -84, -19, -76, 105, 45, -45, -34, 73, 26, -65, -80, 38, -106, -50, 102, 7, -45, -15, -58, 12, -99, 94, 41, 44, -31, -82, 60, 20, -125, 120, 25, -4, 39, 46, -39, 64, 8, -69, 86, 32, -93, -46, 25, 89, 106, 111, -96, -47, -23, -5, 83, -100, 93, 51, -104, 79, -43, 36, 48, 56, -76, 77, -60, -97, 124, -90, -115, 67, 26, -66, -77, -73, -63, -84, 23, -110, -58, -75, -62, 47, 75, 9, -65, -100, -62, 25, 71, -17, 52, 106, 65, -37, -100, -17, -46, 42, -26, 65, -44, 19, -127, -3, 120, 1, -12, -26, 118, -99, -114, 60, 107, -78, 65, -101, 55, 97, -46, -54, -34, -101, 110, 46, 75, 82, -16, -99, -10, -113, -123, -116, 117, -57, 32, -31};
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
    msg.setTimeStamp(0.9374455894390076);
    msg.setSource(11129U);
    msg.setSourceEntity(244U);
    msg.setDestination(28311U);
    msg.setDestinationEntity(101U);
    msg.type = 144U;
    msg.op = 0U;
    msg.request_id = 26546U;
    msg.plan_id.assign("PDRKTLOHKJLFTQPHZMCIFFGWFIIAZUSTLBHNYLUGGPOFRMSXBTDHNJGGZGIUHBQKOGDWOQJWGCVSTDVVEEZFRAKZZXSWINUIDFRQWXMTJAEVMJXYZATNVQIYNJOYARKFRUCKYHEWQBSKNIHBWXOJLQYCEMDJAAPOTBEHLPRDWGIHRCJWUKXCEOVMMZPRDQPTCCEINSZUXMAVGAXMPRLEZFBVNQXUCLOYQLWTYVPLPY");
    msg.flags = 52231U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 21644U;
    tmp_msg_0.plan_size = 2598606980U;
    tmp_msg_0.change_time = 0.4031542102875796;
    tmp_msg_0.change_sid = 3890U;
    tmp_msg_0.change_sname.assign("NXMUESNUMBTYFNUXILLWLEEPBSDBOTPR");
    const signed char tmp_tmp_msg_0_0[] = {15, 76, -109, 54, -120, -112, -44, -1, 45, 17, 22, 86, 32, 111, 116, -108, 57, -20, -68, -119, -59, 84, 27, 18, 4, 70, 62, -109, 117, -6, -74, 92, 53, 37, -11, -111, -101, -115, -23, -88, 8, 114, 37, 124, -124, 100, 88, 34, -115, -95, -48, 89, -50, 96, -114, -117, 80, 89, -109, 10, 115, -54, -120, 0, -89, 42, 88, -91, 122, -79, -11, 24, -9, 111, -9, 12, -128, 30, 76, 38, 126, -51, -48, -85, -28, -59, -2, -48, 33, -109, 16, -50, -33, -19, -128, -10, 31, 67, 17, 87, 19, 37, -103, -65, 48, -35, -46, -104, -89, -106, -68, 53, -12, 51, 52, -80, -98};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("CCSULHKLZBPHITTXPSNNIFVDUSXHXCLIHOUYHFZIDFYIBOUCNQRUAEETNSCPQQ");
    tmp_tmp_msg_0_1.plan_size = 59596U;
    tmp_tmp_msg_0_1.change_time = 0.5949444913938938;
    tmp_tmp_msg_0_1.change_sid = 24944U;
    tmp_tmp_msg_0_1.change_sname.assign("BQBFTAYXFDYGITHHKMHFNCNLGKXWHPNJQZHWCGMSKIXBBIUEURVGFOEFUZKJWJMDESEAZDRLJPVROXNXNJSKZEWRGRTFJOIMLUIHAACPBPRHBLTGUZQYTZDQCDCISXSRNLOTUGSNPXURTSCHIQABPQEWFWAVOYOYSCIOHMGKGYSEZVVHPWYQPIXMMCYABYZDBGUURKYAEVLOXLKLVUAFWVFK");
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {99, 55, -64, 70, -75, 3, -92, -70, 101, -7, 104, 113, 57, 31, 84, 72, 0, -29, 11, 80, 51, 67, -59, 85, -57, -81, -27, 19, 19, 79, -54, -58, -32, 51, -14, -38, -18, -71, -58, -102, 89, -55, 21, -39, 74, -90, -29, -14, -34, 39, -54, -32, -114, -2, 103, -10, -121, -117, -4, -70, -11, -119, 45, 28, 20, 88, 54, 42, 50, -97, 61, 70, -45, -21, 27, 18, -29, 9, -57, -27, -115, 11, 126, 8, -88, 33, -86, -24, 122, 112, 23, 54, -52, -13, 96, 58, 32, 15, -82, 0, 19, 18, 53, -23, 11, -28, 103, -89, -84, -24, -8, 75, 102, -57, 120, -102, 80, -96, 46, -28, 116, -62, 37, 121, 72, -76, 114, -121, 82, -47, -47, 35, 15, -53, -4, -122, 91, -110, 0, -122, 113, -83, 39, -122, -17, 6, -120, -60, 24, 17, -29, 52, -33, -36, 94, 16, -116, -82, -126, 8, 113, 73, -115, -68, 109, 34, 2, -83, -113, -53, 24, 91, 88, -75, 54, 115, 124, -126, -60, -2, 34, -35, -56, 36, -79, 15, 5, -90, -46, 119, -6, 37, -112, 116, 67, -75, -85, 13, 84, -39, 90, -1, -80, -102, 44, -6, 80, -89, 9, 37, -97, -49, -63, -49, 109, -89, 51, -124, -32, -77, 42, -115, -92, -15, 57};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ALALMCJENWBXEWBFNRW");

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
    msg.setTimeStamp(0.06443392793315872);
    msg.setSource(38890U);
    msg.setSourceEntity(34U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(222U);
    msg.type = 107U;
    msg.op = 10U;
    msg.request_id = 11632U;
    msg.plan_id.assign("QMIYXSZAOJAIKVCDBZNWTBQJWSBDTVTCSHTARVVAAEEEYUMBQYDXDSNELDTZUJNOKHFSBKPUSCQOUWGXYMGZJQPK");
    msg.flags = 2911U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("KEGNYQLNECKMQNZWPQUXOV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RIHLPUMTETRUWNAGFOPHCVGWTYQPRPUZIAPSYISURWNVDNGVMHWZYEEJWSGHGRKETDEMUJYXAJVPXIWUMJIOMGYYTZBQCMKGLHQGEZTONNAFFZKTSHQLAZDOMSCNPALODDXSHOQCZKBXSXSBEWDEQHKRTXIWIZOCWJFAVKKQOCNQBVBJXJLQFMYLECLLVEWIPTNUAVJZDTF");

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
    msg.setTimeStamp(0.08085165744391698);
    msg.setSource(5982U);
    msg.setSourceEntity(53U);
    msg.setDestination(50458U);
    msg.setDestinationEntity(197U);
    msg.type = 238U;
    msg.op = 69U;
    msg.request_id = 36891U;
    msg.plan_id.assign("VITAQCQODTKJQIWLVCGTJTJLBFDJYDAOVXMGZKMZHIRDSIQDYJGRVBMNEGRJLKXPSISNOPYUDOKSSEEXJWBNVCXGHYPYLYQKHCRFDRQVBNGKATZAGWKANXFIKOTDHZOMFTEUPHJTMSCVQISKFWEUEMIQUVSNUNAFFZNZOAUWQMAMXZXPSYWFWCZXLCRYE");
    msg.flags = 41104U;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 204U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EYYYEIZGROIARGTTKOIMQMNHDPBBCYDQSSUOPTAHLZMYVLFAGQMSRVWLIWUZDVCFQWPBNUHHXVNSRVAFGGCGNNLFUFJXSPHWEZOJCCNDHLXPSJPLBTWDGCDZWWUHKTCQSONDFJKFMZJRJAXOSYVIARMMCQHWTYMLRFWBYJEDOIPQHXCSTFXUPULETQEBLTUUKECZBAJPVXZWOYIBIAJNMGVXQ");

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
    msg.setTimeStamp(0.7408667804037995);
    msg.setSource(14342U);
    msg.setSourceEntity(12U);
    msg.setDestination(49815U);
    msg.setDestinationEntity(202U);
    msg.state = 143U;
    msg.plan_id.assign("HGJJNIOEUSPEGTOSHABUVSNWEOPHYYUVYGLDAGTPMYCJYBZOBUXVINFKIEFDSBSQZINIPFMRIQGCWWQHVZKXWILOWJWRCKGRRNZTMALIFYMVPEQDQOFAXZKRPMQJJCHCYXFNBJTBWPSKUMCNALHWJVAXNQPXSROEFXAINZTDLYBVPVKTKJDKMPLYBCFOEDTGACCNTRMGZEMYLZTFROXQHWLQDUUTDEQU");
    msg.plan_eta = 489153987;
    msg.plan_progress = 0.3093956118933727;
    msg.man_id.assign("MCQKNHZKYPEPEPEGFFFEXQXJBCGLXWJLTZICBDDNESDAGRSKARBGVHZTNCVKXABEAZKHGLZANUIVUHZAKPYPIIBWSIUGZPHLBVTFTJCUUJIKRFHYYQCOMFOSUFZCCPTBVQOLWRVDDTCQVIDGYKPEJTRDLLLQSQIBOQWKEAMYOMYHQDTUXOEGJGJHNWJRTOZYLXZSVLFOXMUPBHS");
    msg.man_type = 30352U;
    msg.man_eta = 116942001;
    msg.last_outcome = 196U;

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
    msg.setTimeStamp(0.9794283033682121);
    msg.setSource(33791U);
    msg.setSourceEntity(171U);
    msg.setDestination(8842U);
    msg.setDestinationEntity(36U);
    msg.state = 251U;
    msg.plan_id.assign("SPSQVMPQUKMNWABDDVZOLEMCOXLDPNNLOHMAFMZKVCERGOKPQNKYCYINRWVUGJQHJTXYZJKTKMYJQYGNSFYXLKVHJDLUTBOWALUECDGL");
    msg.plan_eta = 1753165498;
    msg.plan_progress = 0.06840858292183472;
    msg.man_id.assign("STMWKAMIONBRQTIAEPKCIUCBNDPPYDUHYTOESFMELFCTAKPULYBQLOEAHQREDXNXJKZFJDQPDYXTWMHOINTIGVNJJMBNHRMGEGALTXLBOPZFVJJYBIXJRWUOEWIAMVTOZPKQSFU");
    msg.man_type = 57839U;
    msg.man_eta = -2008260980;
    msg.last_outcome = 145U;

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
    msg.setTimeStamp(0.5388546853340381);
    msg.setSource(56414U);
    msg.setSourceEntity(94U);
    msg.setDestination(41285U);
    msg.setDestinationEntity(147U);
    msg.state = 0U;
    msg.plan_id.assign("TRKHSETHSAOXOYCYCGTXIWEVCOSSUHKRQILQEGNMIPRBHRIXVZNVSBLADOFNANDFHDBWCDGWMFOCLVAYRNBSVPQETCCLSJZQKDCQL");
    msg.plan_eta = -1519539452;
    msg.plan_progress = 0.5788372547558426;
    msg.man_id.assign("WTAWRFBBEQHARLFYWIYKHKIPMCIWDOEEOAKXVOCQSLETYGJAQPQZXNXFTJSMIIWBUXPMSPVIDRRHYQSNQEJUXJTQXNOCUGCBAX");
    msg.man_type = 47842U;
    msg.man_eta = -2130374488;
    msg.last_outcome = 110U;

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
    msg.setTimeStamp(0.21617245783823336);
    msg.setSource(49247U);
    msg.setSourceEntity(254U);
    msg.setDestination(39533U);
    msg.setDestinationEntity(50U);
    msg.name.assign("RXEZVUJNLYAPIGMXXADLGMCZRXJFIKQAQSIMSURZMZXFUUXNSBOWHUQGENLKWSKNUDEKDTUCCLBYQOAPVWAVGDJXQRKVRTTVPHTYWKWHHDSDQUXJRMYAQIBWEBZFOOQMGCMCBIKHJTIMYPYSOPIQACDPQYVLZDNYSNOFEWKBGEPSGYAVZNSTFAEFFCBRLKLLOIHFEOGBDRLA");
    msg.value.assign("TYUVWJDTZMWHYDSQAWXDZRKNSIQAURCMCDRGJKCMUFXTOAJLGAWUNBQFQBZLRIYSJXKEVNSHALGYWODILTRHIQXGNKTCTUHLZSXNZVNTRPFCIPHVMZVDXZEGZYD");
    msg.type = 71U;
    msg.access = 154U;

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
    msg.setTimeStamp(0.47218796621354653);
    msg.setSource(62566U);
    msg.setSourceEntity(66U);
    msg.setDestination(991U);
    msg.setDestinationEntity(152U);
    msg.name.assign("QPKKXTQGAWGZOUTQBEQVFNKIGHJRENBKVELEAVUQDLGNZAJKVTPSIOSUC");
    msg.value.assign("VEOKAXHLCMGJGEUOXLUVJTPSAVBSQRVSBLYQEXIKOIDDYAFXJYSWNSCMVZUZTWQDTIJATSYPYJJEKNQGQFYHDTUOUWZJFFQCHIUKVJBMGGDWTNGFBKWACWEXZBVCSVHSBOBMX");
    msg.type = 70U;
    msg.access = 225U;

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
    msg.setTimeStamp(0.08060300700459999);
    msg.setSource(28332U);
    msg.setSourceEntity(105U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(223U);
    msg.name.assign("ZIYZWPTEAFQFYMJMQFMOVJAXFWLGZXSRMHRXOTWIVZWDFYJFKPLCBEGOLBSSJUMGADSUGNQNANPPCAELFEKYDTTPRISODENQUICIDKKMILJERATPMXYKRNDIOOOHXBC");
    msg.value.assign("YWMJGOYPKEHMZBGKBYSGLPKEIYTSKUFGDOQBVJCFNUEJFLMHOUPNFQPKYZEAQEUKZAMVQDWXFROZOCKLJBBRSJVCHMNNNTXQZCGERIYSXGQPTLIZZJ");
    msg.type = 214U;
    msg.access = 173U;

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
    msg.setTimeStamp(0.909788474667589);
    msg.setSource(18068U);
    msg.setSourceEntity(66U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(83U);
    msg.cmd = 88U;
    msg.op = 230U;
    msg.plan_id.assign("YOKBLQOLXANGAWZMVWPIKZPZJPQPRVDHVOLVGYSMFHLGZXNNILFUJWEDFBTVSOXISVOTCRFLXUQQUUZDYUHHMVXLFBRBDKLNUZSEOOPWCTBHPVETFFDAWRIKAEWSEBKMWWEM");
    msg.params.assign("TUWVEXBOLWOORVPWCZMQV");

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
    msg.setTimeStamp(0.021418840573935727);
    msg.setSource(27637U);
    msg.setSourceEntity(83U);
    msg.setDestination(60706U);
    msg.setDestinationEntity(72U);
    msg.cmd = 179U;
    msg.op = 224U;
    msg.plan_id.assign("AEOXILPLBNZQMHSHRLRSBPBQGPFBELAZCKSTPHHGCVNEMDXGFCWNIMQALCCYWBJVTLGYNTZSPWJKHKKYTSSOPJWJWQYOMXWGMHUNWJFVKUTTUXNKAWFRYDRQWDZYHDKEVOATADGYOTCZLBQRZCCXIOPLYGBN");
    msg.params.assign("TTOZZWUMPSLAQAWBYFROKFRPCFFZRKCCPPTQQYILENNOKCLRUQTVHRKTEAHJLGHCGISMJYEXURNNBVCGSWIWGXJALKYDRIEAYUBEDXJBVMDIZBQUBOJDKQLDKSUQXTIVIVGGKYMEYJXDMBOFHUTVNLJBPZQJZYHPHEOCFPWSRLACXMKIDTZUAAMSNQDGXAYXVHTPFOTGCWGSNSRMDUHNVSFMFXWWNFARLJGUJXOBMHWPOCZIKEHVNIDYZZQ");

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
    msg.setTimeStamp(0.39372438079666994);
    msg.setSource(32719U);
    msg.setSourceEntity(179U);
    msg.setDestination(9614U);
    msg.setDestinationEntity(204U);
    msg.cmd = 115U;
    msg.op = 168U;
    msg.plan_id.assign("LOOFFLTUDJQZFZMVIVZHHNBIRYYWXGIMOUJYDLPQUTIKKFDMIDRGBQSWPTGFOLMAIQZNDVQYC");
    msg.params.assign("SDYWOEBJDLINTZEIUIDSKCF");

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
    msg.setTimeStamp(0.8917821904500893);
    msg.setSource(24916U);
    msg.setSourceEntity(39U);
    msg.setDestination(47589U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("PEMAUYNRRDQGCRHBRNKXCWPGHKJUJTEDXFIUEFWYXJCAKMZLRREUZSTCCQEUGPOUXIIXXSHVGMKLNQXSITGWBYBQCWHBIWANDBAHOARCOZPKKTVGPVVOFPYMNWHEIQRSJGZOLIXBIDZTQJUWOJABHBVVMTNMKTVJOFNTMJSSPBRYMLWVHNDECIQDRBDQKYVEPLSONLUFCGSNHUSZJZYLKTUALIPHDSLATACYGZEOVFFXWXFWOLFMQZGPM");
    msg.op = 12U;
    msg.lat = 0.5301186653265952;
    msg.lon = 0.031313448873435235;
    msg.height = 0.3343987156951187;
    msg.x = 0.4613508083286624;
    msg.y = 0.8188461188406455;
    msg.z = 0.19260404829815803;
    msg.phi = 0.8085431285510762;
    msg.theta = 0.08122890885178313;
    msg.psi = 0.42312873610596113;
    msg.vx = 0.8314012036735275;
    msg.vy = 0.2335057173268399;
    msg.vz = 0.5935132384785851;
    msg.p = 0.2459173556636336;
    msg.q = 0.9068464559770201;
    msg.r = 0.7074416741001389;
    msg.svx = 0.16441302337564;
    msg.svy = 0.09389316553305471;
    msg.svz = 0.6882453046037565;

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
    msg.setTimeStamp(0.21081918380160036);
    msg.setSource(21972U);
    msg.setSourceEntity(50U);
    msg.setDestination(59196U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("OCQXTPEVWPBNIZZANQSVZHTJXKHNOFFAVGECWHNEXYYSLVYLLC");
    msg.op = 50U;
    msg.lat = 0.37754132612312996;
    msg.lon = 0.9640119061237266;
    msg.height = 0.7883011006688533;
    msg.x = 0.2697598226711947;
    msg.y = 0.735708319701021;
    msg.z = 0.7854349967906751;
    msg.phi = 0.08093582256284393;
    msg.theta = 0.15300852857070235;
    msg.psi = 0.3563474814032601;
    msg.vx = 0.5885197680462259;
    msg.vy = 0.9111619842409521;
    msg.vz = 0.29632108756428266;
    msg.p = 0.7214611745106123;
    msg.q = 0.2700926398063366;
    msg.r = 0.07621652009598545;
    msg.svx = 0.4517608321862763;
    msg.svy = 0.47319838692614624;
    msg.svz = 0.9478728499443613;

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
    msg.setTimeStamp(0.6965767900748555);
    msg.setSource(10222U);
    msg.setSourceEntity(30U);
    msg.setDestination(17700U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("FUGEIIYRFOINZLDKXKCARWQZKJMDBUNJDVHEALJBEQTAWZUTGVJEILAXNTXFZOJEXY");
    msg.op = 37U;
    msg.lat = 0.8146622068865869;
    msg.lon = 0.35782623267193925;
    msg.height = 0.32705678088615864;
    msg.x = 0.06777039995487599;
    msg.y = 0.974567263673173;
    msg.z = 0.37845072683435166;
    msg.phi = 0.29058401764348374;
    msg.theta = 0.4258649702529378;
    msg.psi = 0.1800163856150665;
    msg.vx = 0.28411490158043573;
    msg.vy = 0.9251545866199814;
    msg.vz = 0.6222673226592;
    msg.p = 0.7468541921933118;
    msg.q = 0.7151383381462381;
    msg.r = 0.9265552993932379;
    msg.svx = 0.1041250137333749;
    msg.svy = 0.035719778079127185;
    msg.svz = 0.24781603785712292;

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
    msg.setTimeStamp(0.2843031221040708);
    msg.setSource(12074U);
    msg.setSourceEntity(63U);
    msg.setDestination(42297U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("SAGRYLOGNWBXASWSTTLSQPFDWAXMMXFRYLELFHQDQSFQCCDIDKGUHHXJPYXPIDVZNSIXVHYPPIQWJUKKSTTVNYWBOBEL");
    msg.type = 102U;
    msg.properties = 64U;
    msg.durations.assign("AOEZSZUDBGVAEKAJIXRXBBMPHNNZAGCKQLZSKBVDIH");
    msg.distances.assign("SWCDZNGKQUCUWWPTIMLQJHKNQXVWHDZXAVBBCAJIFEVRCUOOHJXNTPDLYVGOEWMNKXLUJHCFYETXYILBYZKJJEBSCHOFINBARUEOLREJZQHJGQRTGBEKODEBFSMHPSVHPTODUNVIAPYDTDUKAWFZGCQOMLLYMMKGIDDTWREERTCBVWCIAMFZTPBSPARRLQYSLXSTLGNBXOIXJMRFPAVUKXSONY");
    msg.actions.assign("UTQDDHAVLCMDUEEKCRNJPRQYQSLEIBFPZSSUSZOUBZWDNVHFROXJDAQKIVDPTFSWMAKLBVZGVVIWYXIACRCXOUPXPNBAXGY");
    msg.fuel.assign("WTXNOPVNEVVNYLZXHGQKHYQMFNXDBFJMEYLGSCCYYVBWUOWKPOAEVCDMRWYZLSILWZBRSQJUZNGEEKDDLUNQYGIWTEQNFAHWXSETQKDIQKKNHBTUDWHJIMODTE");

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
    msg.setTimeStamp(0.504894564095692);
    msg.setSource(33898U);
    msg.setSourceEntity(22U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("XJGRBCJHGGTMIQLUVANSXOVDFKZUWXOEEHPOESYXMWNQPDEKIHKFFHOTDHTZJJYGYTFBCZBHBLUDFHXLWSHCWWOPUJROADMCGDYZNAGIRLUISFJGLBXVBIKREPBNITOMAGYHIPRPKAWSWTRVQNICQDOOCLVDFXQAXPULDNIFQZAZKYFEWQEYGMYVELEJUNXUBQZ");
    msg.type = 180U;
    msg.properties = 109U;
    msg.durations.assign("SJMSVLTTRZGUACHUYBLDVHZIRGNRYZGOYUZWTURIECFFGKUKNVOAAHZLGMJZUMBSHDKBFXUYCBHPEODBYMTHGIXVQQNPGKRSEDATXCPERGNLZAWQMEJEPOOYTRFAIDZAOFJTIPNQRHKFMKWKBESWYCQBWLTHQNDMDWOBJBXXSGFNGSVJNZBIKPQTMVCJJVWWPPCFIODLNACIHOUPLIDLAVJXDFKHR");
    msg.distances.assign("JEAYQYJBIEZCDHOYDKRK");
    msg.actions.assign("PEWHCHFHXJWAETPYGJOKFYUPWZDQDLUZUALNTLXWFDENMGEEJRCXRGWWFDSMFNEISLVLEMGKBPSJUOQKXCZIXZQHLJIBJZDZVIVTWIWLDYCTRWLKVSQSGVIKRACPFCIURYZFKNQBDSI");
    msg.fuel.assign("JSOXPJBPWDROLIHBOHBIHGDVUBSVGCN");

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
    msg.setTimeStamp(0.25471495562596547);
    msg.setSource(25552U);
    msg.setSourceEntity(136U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("VWRELKYTOBCBMTDBLRFWWXUPSUJFEGLAGYQGDQXFDSZMSIHWWEHSCZDWAFJYOOCNHPATVRLVXRCBWIWOIGZHZKRILPOZAYLSAMKKSCPRVXKCEUNPIZQMYJVOXXUZCCEPRSJPUTRBBNKVPYZBGBFUVTKOILMQDZITUBINPDGEKCHRANQUWGJQFAQTSTUQEJFUXJOH");
    msg.type = 132U;
    msg.properties = 18U;
    msg.durations.assign("NIAANXVBGTDFLYEMSPPJRZQWAAQINWRYOUZUVANGYXBYIDKELXCMFMCMKOFAHDWPVKYSOFRPILTPZJIEUZPJMOQSDKCGPTTIXVJOJOF");
    msg.distances.assign("QFVGWQWIHVEJORFTYIYLONSUS");
    msg.actions.assign("AJFPWCYWGWTXBRCFBLYACCVBOXKPVVZZWOTAZTLDKDOGRZNJLWTRUGIKQFVSHSSSVHILJIAJTIJZNKBDRMYYUGHIXZHBIZUVDNOPTILZFQRDMPROPESGNGXCGHHGVWNMESQWJNXLYIHFARWEPQEIBYYFQYDJTPQCOWXUVUWMDKEQQBVLMXHPBMCKMAFLDGCUUJOLIZHSYRKEONKQNANFEGD");
    msg.fuel.assign("AXQHQFABFBMOOCFIKLZFLOZVEOSTRDUKMTRQXPJOJSVZCBDUOTUBA");

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
    msg.setTimeStamp(0.8685173322422198);
    msg.setSource(55186U);
    msg.setSourceEntity(132U);
    msg.setDestination(10129U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.3594272574732178;
    msg.lon = 0.37977117928416737;
    msg.depth = 0.24200575786126033;
    msg.roll = 0.8326326569089795;
    msg.pitch = 0.8650401244572437;
    msg.yaw = 0.3382987017312452;
    msg.rcp_time = 0.11227336842812952;
    msg.sid.assign("BWXHMZIRICQCHSEYGRTJAJQXODMEYICKOQIADOKVEMJSMNBBGUYDUREVYSZRMLRUAOOTUNSRGZPGFGTAWDUSNHBRXFETPXQUMKLBPLDIWPCODUHXIKYWZVQBZMDJDPGHNTTYGHVFGMAS");
    msg.s_type = 37U;

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
    msg.setTimeStamp(0.5556023140769568);
    msg.setSource(57807U);
    msg.setSourceEntity(89U);
    msg.setDestination(34825U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.27120188094413955;
    msg.lon = 0.03748224907230058;
    msg.depth = 0.9073618184512421;
    msg.roll = 0.9189888302674251;
    msg.pitch = 0.64006607760843;
    msg.yaw = 0.48186758340128377;
    msg.rcp_time = 0.7036645644320251;
    msg.sid.assign("VHYDCVXYULLDGEQSZVALRBOVCMDZGWCGRQKXJVVXREGLIFEJQKMLBHQXYYYARYLIZIIXMTOBSUHBJNBQIMNFTOUIACOPWZF");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.27744611436389843);
    msg.setSource(7652U);
    msg.setSourceEntity(172U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.4881292207634417;
    msg.lon = 0.3028513440909656;
    msg.depth = 0.07710650672932795;
    msg.roll = 0.8958025115023424;
    msg.pitch = 0.3944755812964936;
    msg.yaw = 0.02805208609618104;
    msg.rcp_time = 0.0976817487785584;
    msg.sid.assign("XFODZYMIGSZMPTPWEKENAOFUWWESMJMYLYEJGUBUAGCWJVDLQWHCYGHJPOJZLDNNGFXIDRPIDKLLSWDFUCHFZZRDTCTWARNJWGBVMJKFLNIQZUPDREAXCVINGZWHGBAVQNHZFOAIFSKMIAFJBVTRAZVIYMMYAPUMKKSXYNLVSSJQBXIDHPOLBHVUTGEQVOXPQBLNTPURKQQRCXXTHQJXYSCRYP");
    msg.s_type = 156U;

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
    msg.setTimeStamp(0.5798411068328135);
    msg.setSource(48683U);
    msg.setSourceEntity(144U);
    msg.setDestination(58099U);
    msg.setDestinationEntity(204U);
    msg.id.assign("BOUPKBZKGAJUEVKJMKZOJS");
    msg.sensor_class.assign("BGHYPZVAZRVPWRSUKENRMWOEQNTCEQSKOMDMDKOMZESLCLKQHBSBTMJYADCLJGUXFBPLQRSXRIS");
    msg.lat = 0.852455254452601;
    msg.lon = 0.99171498155684;
    msg.alt = 0.4041525250605137;
    msg.heading = 0.9428910464715459;
    msg.data.assign("EIPPYXJFKQSSWPCDEIFBBGRMNSRPIVUVLLAMYQOCJYXKEGJHTZHVZQEBIXCIDKFDWRHUSTZEBYJOTQMQTUHHJDBDERLORYJUOW");

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
    msg.setTimeStamp(0.1606678828525463);
    msg.setSource(23483U);
    msg.setSourceEntity(114U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(62U);
    msg.id.assign("FTCDTVGNXJYXNSPZIRLVWKATRORHVOVWFLMWQFNGJRJEEVUBPPAPQNBBANAQPDKXQBGECIYGBLETPFFJDDITXSXNUCJYYZDYXNJAUYHCZRVGGXFBRH");
    msg.sensor_class.assign("BUYHBGDNUDARETVPKJLUDOLIGQPMFZKWAMHIXPCRTWZECSQGLVWATGAZSRPSVFDMUAXHWVKSGVLCEEJRBXMD");
    msg.lat = 0.24102865831785636;
    msg.lon = 0.48777004277004177;
    msg.alt = 0.9018275969918588;
    msg.heading = 0.8101081292713757;
    msg.data.assign("QTBIOUXTHFAKTCKAAYNWFCHJYUEWYBHNZMPNNSOLKWZSYGXMIWBAWXAPLTHBFRNNRKHRWUMFKVDCDHWSLJUIJEFFZEA");

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
    msg.setTimeStamp(0.8978652485003837);
    msg.setSource(64895U);
    msg.setSourceEntity(200U);
    msg.setDestination(62406U);
    msg.setDestinationEntity(223U);
    msg.id.assign("WTARUUMDFYJXDDQFTX");
    msg.sensor_class.assign("UFCBSDFRTUANEKQGNLZCOWSCHE");
    msg.lat = 0.840768010740168;
    msg.lon = 0.27877855890017933;
    msg.alt = 0.2946299504043455;
    msg.heading = 0.8442862251197784;
    msg.data.assign("UIEQQHNZLIIHRZTVMMNNRBBKTEJAJHVCDDBOXVYUZWRMQTYBRAUEIMXPWVLYSGTYMZOMGSVZMJSKAIWPXJEDLFKPAKXJCOIQCCBNXDPYZQOFPGUARWFIECQTKYNDVDSLFZYCJTHYXVTIRGCCWDIAAPNHRLZLFSELOVWACDUWGHONQASWVHBQUPKKTWFKPUOZCDUQLHTUYOYLNRDRBBWLSFJGESOEGHREMMX");

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
    msg.setTimeStamp(0.7027678066688413);
    msg.setSource(45219U);
    msg.setSourceEntity(30U);
    msg.setDestination(48741U);
    msg.setDestinationEntity(112U);
    msg.id.assign("WRLQTPZTKDEINYUJGMWUVUTOJJSTAXKFOJABTDBYIAEWVPIPNRHQSIVFOYZJXAFZBPTUBJFHEPELFEIUAYIZJXOONALGYGZILOBRUMBOQOWMVPMCVHYZRGUNXMMAMIKYCFDDYQUATDMWCNCZFSSXIHXSSSHTGHWZEODSFCXQUEGPPGLLKNXRFTRDN");

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
    msg.setTimeStamp(0.4079981530732082);
    msg.setSource(12947U);
    msg.setSourceEntity(211U);
    msg.setDestination(64258U);
    msg.setDestinationEntity(9U);
    msg.id.assign("MNEQIBFCQYGXIKXGTOMHVCEJYJXVMJWNMLUQOLBJRHGHOQTVJWTPWDSZQNDOMDTPYYBBQAKXGZKHHOSXADJVLLANAPKHDHESZGMJLCCTFFMXKKZDLZIWDVZULOZIOOOYXKWNCNBFZSAWGEQRTYXIBEYFBGFRPZFARUODCJNVSHCULNRPXDYACBHVVRYGAIAP");

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
    msg.setTimeStamp(0.6038240383127169);
    msg.setSource(12698U);
    msg.setSourceEntity(249U);
    msg.setDestination(11230U);
    msg.setDestinationEntity(241U);
    msg.id.assign("YFBXRPTDXINBQUCYASWGRUCZQIAXPGBGCYWHAVUFVHVYZC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IHZQCGBDPFHDTPXVJKU");
    tmp_msg_0.feature_type = 117U;
    tmp_msg_0.rgb_red = 177U;
    tmp_msg_0.rgb_green = 116U;
    tmp_msg_0.rgb_blue = 227U;
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
    msg.setTimeStamp(0.39546998479459616);
    msg.setSource(28183U);
    msg.setSourceEntity(3U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(239U);
    msg.id.assign("XFRCQACEIVZFXTDLPRUVVAQROVZNNBFFNLWYMSNMGLMNBZVPUHKDQSFKGYOISILJONBGEEKAEJXZWITUBTYOLAQSOPLTFQDPC");
    msg.feature_type = 120U;
    msg.rgb_red = 204U;
    msg.rgb_green = 93U;
    msg.rgb_blue = 47U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6540830239936224;
    tmp_msg_0.lon = 0.884589763624455;
    tmp_msg_0.alt = 0.8636776988163376;
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
    msg.setTimeStamp(0.8336096328371018);
    msg.setSource(49157U);
    msg.setSourceEntity(140U);
    msg.setDestination(31047U);
    msg.setDestinationEntity(163U);
    msg.id.assign("RNCJMBBZAORRVNLYWFUYHKSZLXTIWQCUEGYQ");
    msg.feature_type = 199U;
    msg.rgb_red = 17U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 85U;

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
    msg.setTimeStamp(0.8111690893733788);
    msg.setSource(62872U);
    msg.setSourceEntity(12U);
    msg.setDestination(10563U);
    msg.setDestinationEntity(127U);
    msg.id.assign("RZQUUMQNEFWZRUBADBUYDSFWJKTNWMVBEUYDTTXVYFJHEJDJHHQKEHVJDQTRIXAJCGFIQHTXRBTFPYDOBUVZKAWMGFDUDHLSWNNBQPODPYNIBMGWAHGXCGARGOGLVZPAQZLBHSUIFSCBAMMIRLXKRQMNJCSVUYWCDPGIAUOCREI");
    msg.feature_type = 40U;
    msg.rgb_red = 75U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 123U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9028392623437819;
    tmp_msg_0.lon = 0.4148954411836989;
    tmp_msg_0.alt = 0.05021269705092124;
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
    msg.setTimeStamp(0.4946501236244032);
    msg.setSource(2044U);
    msg.setSourceEntity(205U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.6203807422483758;
    msg.lon = 0.13426850939397872;
    msg.alt = 0.11142665114337769;

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
    msg.setTimeStamp(0.3915561982403377);
    msg.setSource(48745U);
    msg.setSourceEntity(253U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.9582454066024774;
    msg.lon = 0.11219668152617024;
    msg.alt = 0.3132141062410492;

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
    msg.setTimeStamp(0.24778545287829046);
    msg.setSource(19315U);
    msg.setSourceEntity(79U);
    msg.setDestination(18257U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.8946258516301289;
    msg.lon = 0.577169242435484;
    msg.alt = 0.5273762535454593;

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
    msg.setTimeStamp(0.19227902842653333);
    msg.setSource(12360U);
    msg.setSourceEntity(192U);
    msg.setDestination(22266U);
    msg.setDestinationEntity(180U);
    msg.type = 29U;
    msg.id.assign("PQNBIEGCCQFPZBXXRCBKIZYLCXNJJYSXTVCFPALRXRLGSUXNYARAOBMPXMKCIHWWFWJWDNSMZHZQZYXJWJKMVRQHBVRQAGEGKYQWMJJKNWUDPDTIHICFFTMJSFEKFHLIKWVAULPEATAHBLYVZIGELDTCDPEHUXINESKOGVOUGRBTVPZGJIFHWDBHWVTTYOYSLAMUSSEBTJQGZRPGQAASVFKMEQPDUYOK");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IUZIODUZVEVHKTAAWLAPNGLEIRKIZFWSTHSCLSJRGHSVCSGBFOJQLWELMUALTXXXYEQZWEYPAJLJAVVMGFORURCSMKQVCQFZRJDYYFGMRTXBLUPDUEFQFJZXMUFCHEDWBPTNDZASLESHABPJHQOJDF");
    tmp_msg_0.visibility.assign("YDAXZOHYPUMJWJXUXJILOCGWIPYRNCXSFBEPTBRWUBQVOLRLGMOTHCOEMBVMIAJQACJKQIYAQWXGZDHFPGUCTVUKGNQMKRFONZNDTSOTSHYFSBXTXJPKEFENRLHIVFTBVKEFXNMLNWYRAVEXQUJHJMIQWKCJKRELSYTNVHKHRLEWBPG");
    tmp_msg_0.scope.assign("YLYDPSZSHURUDXRHEENBUKTWEKJZQGCTNTZGWWDSFQEGCZTQHCMXORTTNCMBNDRILEFVXAXGWWVQWPEVJKFPVGMAJORBWYNIVOGXOXIVH");
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
    msg.setTimeStamp(0.16037326332374435);
    msg.setSource(31789U);
    msg.setSourceEntity(82U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(193U);
    msg.type = 33U;
    msg.id.assign("UTJCFAUTYSJUSRJNIXHFGMXRVPPBVCPFCOTWKOVDYSJDGIDQOOQEAMLBURYJBYUKBRAMTUTAVGZBOPWKTGGILIRQZPQURXZEORNHKBQPMOLJSKHLYVAEEOGARXLWUWMWHXZQNWHSDKUKNEESXVZCVAIDGNINQMDCSYCLJOPIVECZIYSHAXDBHQBFQHWZGEEQLTEZJRBDLZDXPWFYVJMBYRSFVGXINHLMTF");
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("BDKBKSVRCJQXPQZVXSLWVTDMOORFDAXCGYDTLWLXVXZSAMAWMZKXZKJROHSEJOBTRRBAEPGPWIBGXFHQYQANCEZPERYHFVCTNUCIBJOUCIGIISPHWLFLAVDQUEDRYJLBNCVGKUJHCFUXNAVPRIYOBQIZGT");
    tmp_msg_0.x = 0.08744404039866838;
    tmp_msg_0.y = 0.10778298534179132;
    tmp_msg_0.z = 0.8347800080759622;
    tmp_msg_0.n = 0.32312051789430396;
    tmp_msg_0.e = 0.2457074833274454;
    tmp_msg_0.d = 0.24267931644627827;
    tmp_msg_0.phi = 0.8008155675226624;
    tmp_msg_0.theta = 0.44416213120371506;
    tmp_msg_0.psi = 0.2920701487450702;
    tmp_msg_0.accuracy = 0.2637657498299595;
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
    msg.setTimeStamp(0.38683113330826413);
    msg.setSource(30400U);
    msg.setSourceEntity(119U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(38U);
    msg.type = 194U;
    msg.id.assign("SHPTISBEQKBXPGQNYJVDRTPOMVLYSTVZAEIGVXGAIQZWNCNFMQSSLARPBIWGGENNZUBFCWGUWMHLEJTXHBWLZNVWXUKBDFQJDUY");
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 250U;
    tmp_msg_0.x = 27001U;
    tmp_msg_0.y = 15118U;
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
    msg.setTimeStamp(0.28183399736368453);
    msg.setSource(65063U);
    msg.setSourceEntity(179U);
    msg.setDestination(3222U);
    msg.setDestinationEntity(235U);
    msg.localname.assign("GEGYBQQXEBLNXAMMDUQRTSXOKCNOOIKAPDZALJXKLTAVFHMNNWFZLTPCFSMPJUFDZEKRYCJFXSGFSJWJCZIENUPBWIPBBQKCVDTZGYRDDCPKTRVBYCTFFWRDOEMXHWYSATBUGYRMVIGCUPLVYFIPOGLHSXDTHSBRSJUOEWNIOMETBQVYAHKPLJIVZJKDINPZZAUWYYZCQEHQOQDXMLHWVUANKRGHXTLBMA");

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
    msg.setTimeStamp(0.21617233575415373);
    msg.setSource(50827U);
    msg.setSourceEntity(0U);
    msg.setDestination(5285U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("GIRYVSLEPHKPSPMWDKRFFAVWVYCLGFGCEBCRZFWXEJBPSIRMYIOORPOWJESPWKAKYOZDIEYZYQNKJMCUNIUFMXZNNTBJEIUKLOKRQHDDWMDKZSSMGBBFWIXXQDACTUAYWYVCABUVQXLOJZHQVXDXGBTGWJCSNESZLGLTASZJFNGZHDUQGXHRQICNWLMDJPCUZVKMQEMTOGHMTLOIARCATPQIRRFPSYFJABJNEOTTNYHBEQLOB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JUGIFSMTDOPHYMWZLBKMBCSJEJSLYQPEFCEJKOJPXJDVTOLIZKLDYMHMSCINOQWDLAEXRVGFMJOPNVGVVCTOOPOTYBRGHIIDWDVSTYRRYAYEHWSTQFERRKWHIENINHHFKNARKFLXBHEMPYFZCNCGQMNBRZPN");
    tmp_msg_0.sys_type = 205U;
    tmp_msg_0.owner = 42650U;
    tmp_msg_0.lat = 0.4881650401412321;
    tmp_msg_0.lon = 0.7487726685070555;
    tmp_msg_0.height = 0.6952005795051348;
    tmp_msg_0.services.assign("NPTWRJVUXMNLFM");
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
    msg.setTimeStamp(0.5420641145383107);
    msg.setSource(51358U);
    msg.setSourceEntity(178U);
    msg.setDestination(42485U);
    msg.setDestinationEntity(52U);
    msg.localname.assign("UDFPDIFXIEPQDFVPWFUXYCYWZNMKPMPXBAZNJFBBMTQYYWSBLCOGMYUJDCRBKPRCHPIIEFDHM");

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
    msg.setTimeStamp(0.6395639637783103);
    msg.setSource(36858U);
    msg.setSourceEntity(226U);
    msg.setDestination(32425U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("XZJHOZBRFUJTRYQJAARIYPSJERDWNENLCKWAFBAWIOQTPORCMOSNVFJOAXEYLHLVUZCQIMICLVZBHBHAMGYNKQYJTTRUXFDKVNMKBHOPWJKKMKMTWDFRPUTUMCXUUKWJCFSXEEROGBAQKWGCPDQSLQBNAXSVOSYDUXIEBTQGEPPZGIVLYYTDUYZLXITEVSGJPSQMBCVNCTPEGGKSRYQDNI");
    msg.predicate.assign("OFZAPDFKAEBOUMUAYMITMUWPYPIJTDRMFGJOFNNPXJKCRIWLMQQCYXSNEAEBPZGZFZRRFEWIHDNXWYTOOKANUDBTDFINYLQLQYONEVMYRGHCVOTDMXSHHIUGTTJVFLMZXRMEACHVVWGJRRWUQB");
    msg.attributes.assign("UJUUQNYEMHEBMQDDTFEFNERYUSLCUEIBGSLCYEXCYADIOGJUMQEPHCXHWISXTYKPRYLQSWOYAJNMKROXGCTUALYVNBHZIKXQGZJCOVKSTZCOXSPUCWZTRCRMKJWTSQPLOFHRZSFZK");

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
    msg.setTimeStamp(0.7563765391605539);
    msg.setSource(32367U);
    msg.setSourceEntity(4U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(15U);
    msg.timeline.assign("PYIZCUKPHBPEJHVSWKOOVNZAMBUGQFOAITYYSNYCHYOUWEXZIZRNOTRRFDFAXQRDPUZONJBNLXUEPWGVMTXFBXEQEEBULGQVTFBUZAPGQOEFRDZTVMYWLLVFDXKHXCPCEOAMSNWLIDZDHABBVRBGIXWSWCCHIQLZIHTHBKINKTWYMPPQRNGPTTJCXFLIMFJIKCJRASSQRVQKODDGQLSAHLHYJDMVJJNUSKEACX");
    msg.predicate.assign("PDHQFIQLEEZFSMAWKIPOJAONNHRLGDCVAPBBEKMYNPETZLARGSXQEVWDWWCYUKLIQBMVJYKXKYMZRUDRLNMJFSHDBFEDMEBGTKJYNUPXNZUTZDJQRGIAYBGPUNXFXKWPJHTOSVNSJRCMIXVCLYILBZZXVUBFDWGHWKBIHDURHSQXPQETCOZYURSTOQQOLOCKVLTSCEPOIFYANWFGFAHXMSGCAVRHGJQVIJNTBDZFR");
    msg.attributes.assign("UHHYYUVUTJEILUZPWOCYDMVCGGEJKONTMPCASLPAUVFXWYGMDKMNITLNRVYPQUIUJVCQJMBEFJOAHMKKCOKBKQVMSXDRWOWSEGDQWNHHSYFGZXEDXQZSZRHJQNSAZSKKZWGLZJVICZJLIMGNBITIEPJRNDUFNOZBXBVPBVPBLYLQAROF");

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
    msg.setTimeStamp(0.7232466145111511);
    msg.setSource(40675U);
    msg.setSourceEntity(79U);
    msg.setDestination(62156U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("UVJLRFPJLMITBQOQPSFTNCXIZMYNTIFOADSLZLCQKGNVWJXJBJAJSVZHBSWHDFABOLUDTMTAEKHABNKRPWVXJMNDDVRFSWABOMLAEXEUTZDEPQQZZKFBRCEGIZUPBRJYNBRNHUSWORPMNMHEGVSDEKYGCGJADKSHWPONQLYYWWFHEUFUTYIIFXCVIQO");
    msg.predicate.assign("JCTTMWZXQDHTRFICQSOMYUQLQCPKUJPKNHFXXVLDCOOJSSGYMRBXMODPBEWAXMGVYEHCSKAMFVWPRJHQLBMVGHUJQOJAEWWDVZUHNLWTZOCNGJFQXUFENUIAPXEYRCGAGLSHMDPNQBZZHIRKLIGWYRYRTIOLBAVYUEYJFFGBYWSRITVPOUYNDEONZSKWRRVSLDCT");
    msg.attributes.assign("OQPTPFZECYVUWUSHESDHTOFMGBPAAMLLSWQGRUKEVZRPTYSHUVXUBKBIIAGUYZSCNLXSARXMJF");

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
    msg.setTimeStamp(0.7769120504006451);
    msg.setSource(26889U);
    msg.setSourceEntity(77U);
    msg.setDestination(20775U);
    msg.setDestinationEntity(176U);
    msg.command = 7U;
    msg.goal_id.assign("TROBIRSJEMCJZBFBXAPMXBXPMLUYCIJZOWTTAEHAWDUZMADPMAFMDNMSDCRVBYGLSTLWJQLWRDPUKWUJHKZRNOQKPHTSGYCYKTHQXQKLLPTRNOXFETELXZIQOAUAXGHEQWGGHIVH");
    msg.goal_xml.assign("EAVVABXOXREFAHQEWTGRKWLGOBQXGWZDTCMFYSVHUVDENYWSYXIQPDNTRWMC");

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
    msg.setTimeStamp(0.9502774866972431);
    msg.setSource(45778U);
    msg.setSourceEntity(254U);
    msg.setDestination(31266U);
    msg.setDestinationEntity(225U);
    msg.command = 104U;
    msg.goal_id.assign("YZOGWJGGVPIGUY");
    msg.goal_xml.assign("YKOTFHIZSDOUIINGXRDCTNNUUTBVQXEUSNHVQRGFNQLTZLJCKYKAGDKVKHMXVFABWKJPKMTXPSRJYLOQUKMGEAPLJRBKDRJCJVBFDQPWFPENVRRSSSWVZJMOPCWTTYJBYWZLRIQLUKGAZARZEBYZGZWLSJAWPPHYCIHXRDWMVTBSWXIYQADUQFIPSMQT");

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
    msg.setTimeStamp(0.640117884991815);
    msg.setSource(49425U);
    msg.setSourceEntity(53U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(107U);
    msg.command = 77U;
    msg.goal_id.assign("UJVTPIGNKYZSLGVYQXPZLYORJNRDDAQWBCIDXQOCILNHBHRGIADLESATKRGSTFMGMRUGVRFICPQAEJDRFQENLIXMCHKMFBRHLIEPQFSEAOWUZMLSUAVPFHJQNNJMOKZYNKTFBWQDYNFOKHBUEELTPTHZJXBKEZWXOIZSYUWCWVTEIWMBTXPJDZMVOJSXYVCLCAKXCWVGMBUYAUCPUDNISRGMZNGVUHBXQOSSVAGPRFCKYEJODHK");
    msg.goal_xml.assign("RDFIDSKNKPGGYRSEZFKVGVSAMFARPXIXFWQGBOXLREBVKJTLORDWACTSZBQVMESJMWOHCRHRDHNOMYEDQSPCTWUMZKUBIZTBUATLZXGXOCWTCGUQHEJNIQKYIIUYDIREUDANEZHLFNIXZSNCSNWYPWBLG");

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
    msg.setTimeStamp(0.48271529259954526);
    msg.setSource(27005U);
    msg.setSourceEntity(95U);
    msg.setDestination(50403U);
    msg.setDestinationEntity(92U);
    msg.op = 249U;
    msg.goal_id.assign("EUGTVZYWEHVMBWHJVERGOZAFPBSXIYYKGDWNQFZAKSQWZOXMKTGPRSHDXFAIUWTNEVFJJRABMVEJAOGLRFAOXDYNIPY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FALYSMXFXSGLBSXFMHDAZFWQPHLIKMYBCJJBUENWSKVCCOMERKIBRTTIEEEKJXWXTLQJWTNVUAEUHSCOZIBZFIADGNADLWVDUOGGAFOYOZNFUQRFNMKQVGFDBROKKVZVJPLERIOQPEKU");
    tmp_msg_0.predicate.assign("POPNATFKCUHBGQPCAXHSYUEVSTYBGSHQBBMLHTPVPSTBEURTIFPLYTDEJKCOJILKRUISQCAXBIEOWHZLZGNUANGDOTARCTUAWDEFRXEZJJYKFBIEYYVGYXHJMVOBRMDJLKCQZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IHILSKAMXBFYVXLKDNYFIMQWQMWZXKYPBJVLOCWRFORPPQMACPBTDHDFUKRKGLRHUISUGGATZDNYNACJCOKUJXEMJLOKJLYYKDWSVSQUNHUJAAOOUQLWFOBAZCSWIYLDPIUQYFTDHTMHTOVSEXHNV");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("CGNIVLFXELXBNUJJBOSLKKZPPFBHPDJABKOIJGMHZGSSMTOTYRMXBREECGLOEAWWYKIVTXIQUMTHYHVHWTCBKDKCOPVLXFUDDSNCEPOWNNSYBEKJXZPTUFZWHATEYCDGENQRHRUNEUSIJWYJCWAABLRDWSQRAMITBXQITOWPLUKMNJZSPJGIGIYCYVXJOQRWURCHFOGZAMGEAFLFMKLRRIPDQDMXQCFYMHSZDXHFPNZAVVFOQU");
    tmp_tmp_msg_0_0.max.assign("YEVVCXUZJLWRCFAHDMLCEMTZTEHDEHVGHJYZBMIMAHOCAFGQQDGUODWWLIGAPAXKDXNTQUHIOLZFPBNDZHEPTPGKYHGZMVOXLTJQTLNWFBQGWUEUHX");
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
    msg.setTimeStamp(0.7200304259283652);
    msg.setSource(16309U);
    msg.setSourceEntity(6U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(213U);
    msg.op = 122U;
    msg.goal_id.assign("QQDHFFNHZATROWONLHOQBTMTSWOZAZDPXXUPUNQWJIPJOYMYNQCGLRAJPZABNSPEUBFNUPRDM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SZJCHBYIXQUIXLPETWJKOJUKYDOVLQESYAHCNMHBXTMYBWHURTAZHVR");
    tmp_msg_0.predicate.assign("OBZLDTDCXRDISLRSIDPOOPMCTKRCIBNFDEYDBFQJWNJF");
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
    msg.setTimeStamp(0.3440864064035477);
    msg.setSource(31720U);
    msg.setSourceEntity(228U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(99U);
    msg.op = 209U;
    msg.goal_id.assign("FZGYRGFCESCULWLDBXQHXISCCUPMETFZNYFWLYOIXDYTTKKILEWBFIOZPVDFQOWSUZMQANPDJBSAYPVQYLERWTXTJIBJMNXAOLDENKNUSQKIAMYTJKHMUKZZNOLIDDRYJFNCTNRLLXSHUHSQXVHGPREVBPEFOEBVCZQJYMAJGPQHBSYPDRMCXPMVOXSHGWJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TLLSEADLRPGHQCHZUWJJPKOCHWDITZEXAQBJTHNEWKPPZDYEYEQKCTRDLYOTZFBSRFQRJGQLMEBHPOJXJEVMFDWWNDENMUCUMCPWTKSTZLZAMTPIKISNSUGSXXHOZYCXQGTLO");
    tmp_msg_0.predicate.assign("KMZKJVDGCJUOIOMTGMD");
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
    msg.setTimeStamp(0.5556062308279787);
    msg.setSource(21960U);
    msg.setSourceEntity(66U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(156U);
    msg.name.assign("CNVYMTSLEJLDKAERLTHEGGHJMKSBBSOWKBKLCPILNVRSFQZPBFWWQNJGIUOYSAVKMDEAMPCDCIWDTSUIXARXDIQXXUTTZUJUEENQJXZFQFCPOPYCIUAGMKMYSGIHWLFDUEFJHETNMVWHVAFVNOQBGMRXZAXUNYJSOAORXGYWLJAKSTUCBAZDNTYKBGNXKZFVSZIFOEPVFIGGCNOCDQLWBBLRMJYWPHHQTZRQJROUQVPCVYRBHEHDXLKRYWZPZ");
    msg.attr_type = 46U;
    msg.min.assign("IHJHWEWOZJBFPDXERBOLKQOHZAHJDABFGDEPFWLEHJNUYWRFICVJZDYXYEPDETCHDUKGF");
    msg.max.assign("XKADELVJYUUZJSMHQKIVTDYFAUYNWWFZMPSGBOFXMRGFBQBODOGFVRUXHAJDMPXZOQSRPIHJRNBGTVNVCXYEAWBQOCYCVNCQKTBTTUILDDTLMKGZISCVRIOYJNLZESHTKPWQOGLKBRFPLPCVACXUIUGSHOHEIJZFJELXGLRJYOKREXFQODTKBWPASAKFEZBCSZAYB");

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
    msg.setTimeStamp(0.5668777326579348);
    msg.setSource(35182U);
    msg.setSourceEntity(99U);
    msg.setDestination(4733U);
    msg.setDestinationEntity(233U);
    msg.name.assign("DIZXBSWATUHFXGWLGWDCOCQWEKSSWDAIYVVKNYONQBMHKZJHXRLYIXASFEELESIJYFGXDQRFQYUYZKGPPANKBFMRBJWLUDZJBWIHIGTWYGVUSSOIEOBPOJBMXEWCCGOVVUESTEDJRXFVRNNQPVDKZPRFZHFXOOTPZBASNCOCGMJAIPBLHOUXTCYTVVUBHFPQPLHKNZMAT");
    msg.attr_type = 95U;
    msg.min.assign("YMCPEDPVWFMVDCOCRFCTVPUZLRPIMXESDPFTNKI");
    msg.max.assign("MISBFCXLDXVDQNCNFFWHOIMDYJPPSQDGLOHDEPAAXWBGUKWSZZXBSNUCQTLBNANSFGJVOHPWKIQPMMNZYSYFQMRTZYFVHXAOGDELISVMWVBLREVLGTJHAVKYOPEGTOFTNGGBDLEPTLUWXOOZNKIYZKHGREAUUFKUTZMLKEJIHCWOEXZCRCUYTLVQBPNWIIVCAZRJWKEPRZKBIYHNDMJUWXBFSMDGRXHDPMHSQJCABFJATQEJVKQOCTR");

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
    msg.setTimeStamp(0.1841977558443194);
    msg.setSource(35882U);
    msg.setSourceEntity(7U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(36U);
    msg.name.assign("YZEMZYCLKEEMJMZCBOVXFUXOUSXUDRHQFWSTKJJMRKNLYMOABALSRHNVLAWBXYGPHDGVXINIWJZCWOJYURBFGYVWWAESAUTIOOQBNZCYATQCHGQJIDIGF");
    msg.attr_type = 223U;
    msg.min.assign("LQGXJYCDVAWEIEDLYSCDCEFKCLOAVNUBKUSZWTPRPHESCITLTXMDFMMMHFCANQ");
    msg.max.assign("LVVAOEMGNTSKVQVFGZBDLCBNPUIFCXDZZIYUIIYCKOGDNAYLBZMEBOCPQRGSXUXTGQDOKHPJMMFXSOAXCTHREUKLMTTWYDATBMMSHHTDGTYUQISWDH");

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
    msg.setTimeStamp(0.6136973400764137);
    msg.setSource(25353U);
    msg.setSourceEntity(179U);
    msg.setDestination(27531U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("ZKMJHFIAUTENCNCYIICGGWETDGJQSWYPSHWPMVMUOMRTVNZVKTQBDDNVWYRPOYDANXOFQUDKNUVJBHWWHTFXLILGXJIQDFDQHFWMLKTFGLOPUUSHPSYXEQODZOCQEBGCPVQXZDLEPCGMKUZJKSUJRMSVXYBMJXEZVOURJKZYIFQTKVSQZYTPOZAXJW");
    msg.predicate.assign("OJXCUHJJINQOWFSYHRHUSKQVJTSLGYRSEKIYPDXKCGMBCRSEFHAZEGLIQDRYQOQVBMZMJMYMVLAKFPWWTFTLOXDRMXKGPHPPYCYOMPBHMIENILSWTYNVQHJFMGBNEWJSLCHRBYUEZXAZTFGPZWRCHNWVDUTJEQOEWDSFWBNOKVUDDDBOFVUBTLXIIQIUCTIQAFVITQJDUKV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PYIWWZQYUPMISHTJGYRQHITDNLVOYZVIRYLDAVMTGXUQDKBFFURJBOEGJKLXMXWREPXAJCOTAQOOGIMZRKIQABCUDSMSLGCFTSREXSHVJBAVU");
    tmp_msg_0.attr_type = 50U;
    tmp_msg_0.min.assign("ALDJBJGSSRIIPZQQAYGGCFRZGEUOUTHJISEZ");
    tmp_msg_0.max.assign("JQSWNMQQEYEWJVGBAFSUOQOHSJLMCDPPOKBNLSXROTUPHZVTIVDTEDFQCZXVXRRLCDPYXWVWJCOESAUDATDGJACKDGQHMMXFSOJYNMPJWFZSRFJOIFMFKFWUZZBITPVBDBYYGHFTUHOMEKSVOELWCKZEQDRVNMAXXCLFOGTSYUBTCYZBAPNLLINZUKQABGRIGRANXESYPHTPLMI");
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
    msg.setTimeStamp(0.6633808391952316);
    msg.setSource(20631U);
    msg.setSourceEntity(229U);
    msg.setDestination(65031U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("PQVMNJWZLTJKYNAEISHZEWKKBVNITZGVTCXSETFCJOCGDFEVPBNUJMVRWCSRGYUGFXQWRRWHNBLZPFYYHEXHUYUFYKJZMWSLIMILZHERHGAGTTFBEXD");
    msg.predicate.assign("WMFNFFKXWTIMSQAESHEXMNUBBHFESJBGNPMIZKKWQTKYTMCSYRSDHAREKNIYAXBVPDPXQCATQRPFZXSSBQHBYQUBIAKVPLCMHYWUJKWNMULJJYZJPZUCFPSFVRLNRLIGGDTXACJBVHYIEGJYUWZDOWLGQWWVFCLCWUOEORODYZZORDEYNUDBECAPVGKCZLXVFNONHTDJERILTPPTRCRMHQLJGAZUIOGXIB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GBDNOHVAOGVOIEZSQCGYPJWXGKVHTULUNTSHHOVE");
    tmp_msg_0.attr_type = 133U;
    tmp_msg_0.min.assign("EGDYEOFSYYWPVBUHNJHNHYLKBXXTERNLKRYCPUFSBDYQEOOWKOCPCKDXNZHGWAOHGBSTCHPGAILEACUPUBXMRDNEFCVMMSJBJZZWIZNSXVEWOQUSKVGVNJRVLBZBWJXQIIWKIKTVEOZFAXNLPAAWIMKPYAPMFGGZVE");
    tmp_msg_0.max.assign("SOWZHHVSOZIJCICZKLWUVAQBABGTKXIFEEYYUGGISRJPRTQWWFTYLDYTTJRQVGKSZGWPUCBWABIEDDZNFXBDZNLQWXQSKJOKSKALCAUPGFPYMFPFEXMGEEXHNYRMWHNKFYXMHQSITDPWZQCJRLMKVYNRTROVAOWXNCFUDHQTBZELIGCAULVHMUJUPOCHLNZPDURRXNVTQIJSDZVQOMJXOLTJBSMANNSDDAPBICYBHOVFHKAYELM");
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
    msg.setTimeStamp(0.7793979017894509);
    msg.setSource(34361U);
    msg.setSourceEntity(208U);
    msg.setDestination(17432U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("DCYLFLOLYFNBNDNJWMFLAZXYOOBBHZNVMPWWGRWVTEFBQNEQEMIDMSPKZFGXYSDOEKTIUNCPAAPVKJXCEIXHKBXKRLPMPJWRBRTAOGFTYLCOIEFUCSSMYRN");
    msg.predicate.assign("SBEWGGQVCQNPFEQCVHDDTLSIYEWVHYKISTDOILGMOKXKQAYXUAZPERBZWCVCLKSTFJJEFGJNKRIPHZWDZXONXALMISUTZEYFGAYIDRJKEEQNDTMXXRHHPAUUBUXITNOSMAPUCHFBLUVQTWSQWBKVIMOOIQBLPUENCVCEMAZQBPHWJLLLZSIMXTNRYUJUMJCCAFNOONSGZVVJWKDFKBRXYMPADVFJTBBRFGXQDWTZPHNOZRGSODLAPGRJHWGCYY");

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
    msg.setTimeStamp(0.4700184400924007);
    msg.setSource(3275U);
    msg.setSourceEntity(80U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(19U);
    msg.reactor.assign("WQVTLJWTMSMKGJTUUZICDBFEBBUPDONFPRNEWXMLLHLWVCVQPZZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JJGAGKXOWBQFFMXIGKHSCGADACFUPHPNHZGEMDNEFGJNSVLIGVDMPGFLKRZTIAXWHOVVSNBAKEPLCLEODHNZFIBXXUSFXIAZVYONBVTVENLLZRDJEPCSZQOSTAUSWWYJOPQWXKYZLOPIUQTEHMXKDAETVWJIFDIRGXEFYTYQTCCMYMQUBLOSUCTXYBRQW");
    tmp_msg_0.predicate.assign("MXATBXPFSCJFEVUYJPUAUWCKSQXLOJUMQWIVSKAPGNKNFGTFNPMPXFSKNDYBWOTWEKOIDHSZITUCXWVSHKDKWAPMDELQSGYRCFRZRVORZXSHEQVHUZZGILFNBNGQYQWXVOZOLACSELTMKYJTMPTEPQUYADPQBCTVBEBJO");
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
    msg.setTimeStamp(0.6946488240359533);
    msg.setSource(42141U);
    msg.setSourceEntity(144U);
    msg.setDestination(33607U);
    msg.setDestinationEntity(47U);
    msg.reactor.assign("CMTRKLJRXKFZXUDRSRHMEDBWAGVXLQYRVCKXJKKABOOBUXMCPYHPQPREORMTTCLQASLTFGHKEBVFKGI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NODXPKVCFHYRMQEFYEQWHASEAYQTOWUYQERPMRQSJMWUBZALUNFXXBNHMRMQUWIKZBZDZVSKDPTYAFIAJLBHTJWUXJKVDASKUCCOPIWRETOKYNRAIDVNSTBYGYGHJVDRKMQEZNZSPXASOCFLAELDJBCNWGFEGPDTSRIGOCQ");
    tmp_msg_0.predicate.assign("CAVBQTCZSGYYTDLIFOWKYIWTQXRARFGXUOHHXILKOQFKDPAMYCNFWBPPPSQUILHDJQMXJPAJCSFYDDATNDBDGIZKRCVSIYWVFHPMZHTQJZJEKYYBUBXMAJKWEFPOCXQAZRLKGTLOYCUDJENFQZBPLWMGEVSMANLKOTOWZMVBBLRCXCSJNDAJHDHTWQLEPIUUGKEGNRVIHJMIQVRGWN");
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
    msg.setTimeStamp(0.3235318232023694);
    msg.setSource(20670U);
    msg.setSourceEntity(178U);
    msg.setDestination(5277U);
    msg.setDestinationEntity(133U);
    msg.reactor.assign("PIDVLZFJPEAQMXBMXEOIHJFHLMVSLMXDUBPHEAAYUMMJMZDMZUNIKUPVKRWTNCAHHZWRZFOJPXMNKKXLGXQTAXLRNMPKRJDYJBCFQGZOGPKEVGLTCWDSYLQOIIZWKCNYSHNDJISBRDRQRTYFATQGCVOBRTPFQXASFH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("POQPEBSGZQUMLKGCAPSQTGTGDHCNSKHQCPIAFKRWVKIDFXYPUXMXHTHYYJBBZOUYLMJGBOJCQKTLKSIIEGRMNBAGFFTESNZECYWZRXJVCYQALQDKTBBAXLYWSXEHFZXWORRHNDPMEODPWPYDYVAHIRJNS");
    tmp_msg_0.predicate.assign("MHMKKDBTTDUWIGAFGJZAXEPIONOXULQXCXKFWEEYWMLNVSVKIQFNTNGODHHIRRJLJM");
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
    msg.setTimeStamp(0.6456516372302518);
    msg.setSource(20964U);
    msg.setSourceEntity(251U);
    msg.setDestination(32698U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("ZQEBWENFUDGVFNZOHMFQUXPDPRXVFORSKHEIMZTRCHZEIMGJUCG");
    msg.data.assign("AXPPWMPHEUJTIZVJLFTNJWGHFIIKZCKNSTLWQBOXEPGFDFYTOMYLJRVMFKTVPAVAXUTMJKLTBWWCXKVDVEUJMDHMOEOKQRYPASIIKGNDQSGDMYHZXCCMTZZXQDQUCSI");

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
    msg.setTimeStamp(0.5656776511811851);
    msg.setSource(8101U);
    msg.setSourceEntity(129U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(71U);
    msg.topic.assign("EITTNBYVNNYFL");
    msg.data.assign("FODUOAYKKANXCUZNFPFODBIAWVLZKMWNCNEEZKGMKAGXSEFGRSDWZXHNLDLZJPDIEWZCTDMABGKSPOXXTGQPCSATTWKZAMFGWMRCTYSVQRV");

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
    msg.setTimeStamp(0.20510085860981953);
    msg.setSource(11432U);
    msg.setSourceEntity(122U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(111U);
    msg.topic.assign("CVYSHEHJBEIXCGLETWPALQQXEYVBLNUGSZNDJQROTSZIMWJVSNSJMCMZYUE");
    msg.data.assign("NRVTLLNCSVNHKUGGIWQJNTSAIWPXZDZLMKJBNCSFRETQGETKRPSJFZUDXIOWYXIIRHBLQVFABWJLKCBYJRICNOGKCUONMYTELVSOPBUGYVIRMXFYZFZEAHYOQSFKKTJBNFUCTJGPDOSROAHARHFYMWEGBPYAWMXKEYZOUUUZISEXVNFTWZJGEDGLWSNUXAZVDDLVQJAZHKDPEOQAPKYQHVRHCEQXMMTHPPJADBIXUGLOXQCWBMFIC");

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
    msg.setTimeStamp(0.8129681579889751);
    msg.setSource(1132U);
    msg.setSourceEntity(20U);
    msg.setDestination(27611U);
    msg.setDestinationEntity(63U);
    msg.frameid = 208U;
    const signed char tmp_msg_0[] = {-123, 84, -64, 96, -113, 119, 49, 79, 94, -9, 108, -125, -22, 103, -47, 113, 47, 37, 71, 4, 17, 44, 116, -89, 78, 90, 105, -104, 70, -126, -27, -7, 119, 51, -122, -6, 37, -33, 4, 102, -73, -64, -3, -86, -35, 100, 65, 48, -5, 98, 60, -77, 107, -40, 110, -103, 80, 123, -79, -93, -89, -60, 113, 62, -119, -92, 30, 42, 18, 94, 13, -85, -92, 39, -101, -6, -89, -67, 70, 75, 8, -95, 110, 56, 75, -71, 81, -49, 65, -110, -46, 54, -64, 119, 119, 0, -38, -3, 121, 109, -27, -5, -1, -83, 120, -69, 70, 36, -124, -20, -42, 56, 100, 123, 80, 22, 83, -33, 97, 98, -89, -13, -55, 0, 35, 104, 72, 10, 94, -9, 10, -112, -10, -19, -28, 60, -82, -1, -70, 53, 43, 47, -74, -112, -105, -57, 3, -71, 29};
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
    msg.setTimeStamp(0.6079843711061775);
    msg.setSource(52046U);
    msg.setSourceEntity(65U);
    msg.setDestination(41229U);
    msg.setDestinationEntity(43U);
    msg.frameid = 209U;
    const signed char tmp_msg_0[] = {-74, -76, -70, -20, -101, 67, 100, 116, 16, -58, 36, -3, -42, 38, -66, 35, -99, 73, 50, -6, -16, -52, 114, -51, -88, -68, -76, -32, 39, 74, -13, -90, -35, 86, 55, -61, 10, -32, -36, 1, -117, -88, -95, -117, 68, 1, -59, -46, 65, 121, 9, 93, 26, -20, 20, -109, -60, 122, -60, -89, 52, -25, 103, 21, -19, 40, -7, 64, 68, -73, -63, -97, -41, -114, 3, 92, -67, 95, 70, -6, 74, -63, 72, 98, -90, -112, 75, -107, 84, 126, 11, -76, 70, -75, 31, -13, 73, 40, 84, 121, -53, -2, -59, -13, 56, -4, -116, 11, 76, -70, -94, -21, 20, -67, -99, -120, -119, -62, 49, -22, -79, -13, 31, 26, 35, 23, 78, 95, -60, -62, 91, -29, -113, 111, 105, 95, -60, -17, -122, 65, -3, 38, -12, -122, -56, -1, -106, -61, -1, -47, -115, -81, -59, 32, 73, -57, -88, -123, -80, -53, -97, 60, -80, 64, 120, -52, -18, 89, 118, 70, -41, 26, -101, -122, -93, -18, 77, -115, -97, 87, 122, 102, 84, 22, -35, -86, 33, 46, 2, -43, 89, 116, -60, 81, -23, 55, 84, -61};
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
    msg.setTimeStamp(0.8320414116672576);
    msg.setSource(4344U);
    msg.setSourceEntity(28U);
    msg.setDestination(32881U);
    msg.setDestinationEntity(252U);
    msg.frameid = 18U;
    const signed char tmp_msg_0[] = {27, -54, -44, -65, -102, -84, 109, -119, -59, -3, 120, -73, 73, -51, 117, 24, 78, 47, -123, 118, 44, -13, -44, 6, -128, 63, 39, -5, -26, -44, 56, 37, -91, 50, 109, -17, -37, 11, -22, 95, 4, 14, -56, 118, 65, 33, -53, -72, 69, 81, -9, -106, 29, 40, -6, -85, -74, 111, 20, 83, -89, -126, 93, -77, 20, 84, 47, 80, 66, -33, -90, 24, 53, -46, -76, 123, -28, 16, -33, -90, -106, 98, 60, 86, -3, -81, 89, -33, 120, -88, -56, -41, 34, -41, -81, 74, 122, -115, 5, 90, 126, -103, 88, -16, 126, 8, -2, -89, -20, 36, -64, -111, -14, -27};
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
    msg.setTimeStamp(0.43922897390184623);
    msg.setSource(52143U);
    msg.setSourceEntity(204U);
    msg.setDestination(60081U);
    msg.setDestinationEntity(42U);
    msg.fps = 12U;
    msg.quality = 45U;
    msg.reps = 218U;
    msg.tsize = 127U;

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
    msg.setTimeStamp(0.5285036653039852);
    msg.setSource(10055U);
    msg.setSourceEntity(232U);
    msg.setDestination(9682U);
    msg.setDestinationEntity(145U);
    msg.fps = 66U;
    msg.quality = 218U;
    msg.reps = 8U;
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
    msg.setTimeStamp(0.6150540911345798);
    msg.setSource(26886U);
    msg.setSourceEntity(128U);
    msg.setDestination(30473U);
    msg.setDestinationEntity(101U);
    msg.fps = 150U;
    msg.quality = 226U;
    msg.reps = 55U;
    msg.tsize = 78U;

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
    msg.setTimeStamp(0.14746511577313903);
    msg.setSource(37161U);
    msg.setSourceEntity(34U);
    msg.setDestination(11283U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.8186072267601603;
    msg.lon = 0.14841982830265632;
    msg.depth = 99U;
    msg.speed = 0.6101525580694386;
    msg.psi = 0.8974710039963564;

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
    msg.setTimeStamp(0.41723377540784);
    msg.setSource(56377U);
    msg.setSourceEntity(146U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.1685902428159528;
    msg.lon = 0.33570793718750636;
    msg.depth = 67U;
    msg.speed = 0.12571658931602114;
    msg.psi = 0.8428594735825732;

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
    msg.setTimeStamp(0.7384401784929376);
    msg.setSource(4829U);
    msg.setSourceEntity(48U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.2621633977504467;
    msg.lon = 0.513021986388532;
    msg.depth = 5U;
    msg.speed = 0.9256712063966057;
    msg.psi = 0.2675573741782441;

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
    msg.setTimeStamp(0.36091849358869943);
    msg.setSource(23534U);
    msg.setSourceEntity(0U);
    msg.setDestination(22037U);
    msg.setDestinationEntity(225U);
    msg.label.assign("MHACEFLVPNSRMQLIZJSJYXIEGKIPGRALERCGPTFGNVBLZWLGQNDSUFHDJIDVAFNBUVKRUDXIDYACGNDMOAYHZBQMZVBNOZCORQSHPWTYKAQKYSWWRNYILHGJQOWCZQOCIMSCVJDUUEWZHIIGEDPXRWMAABGFALXBBPULXPYKSQJABVHFTXMJKWVOOYTSIHPCWMDTTZSQVLBYNKUBDFFCKKWTUFEPYR");
    msg.lat = 0.03029971017107036;
    msg.lon = 0.9955156977607076;
    msg.z = 0.7326568477293566;
    msg.z_units = 36U;
    msg.cog = 0.5308681502748649;
    msg.sog = 0.4144577966064439;

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
    msg.setTimeStamp(0.7178403893168089);
    msg.setSource(25149U);
    msg.setSourceEntity(58U);
    msg.setDestination(25017U);
    msg.setDestinationEntity(79U);
    msg.label.assign("FKDIORWVOBPVCZLZSAVGSYRGQGDDEYTKHZWDTQDYASQSIVDQCHWOCUEVUFNQVXPTOAOXQBTYKRTLXYXXZORWNKSHCGBZBAFVRUCISULWUBTYYGPILMWSEGHMMVMHMTMIQEKKB");
    msg.lat = 0.051558563165619575;
    msg.lon = 0.8005450673369611;
    msg.z = 0.7159542104702727;
    msg.z_units = 159U;
    msg.cog = 0.6920469426631757;
    msg.sog = 0.7300381414976971;

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
    msg.setTimeStamp(0.1459664661029566);
    msg.setSource(25261U);
    msg.setSourceEntity(109U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(170U);
    msg.label.assign("HXPJIFQQRKDAQYCUUZLCRUBRPLCURCPSGTNTEGQTERGVRVKRFCNIHJSYPEGBVXWKIMDAUOKZGIMTHAMOXWYLWWLDJTBKDCYONYUFLHKSFKRNWQTFCMUWMLEFMGNBNJTGUHTBDCOESEJVVADCVBIWZAQYDOMOVRIAPXPYKOFHNTIXHFZIJXBOKFBHVRIPSBQTXELEDSAYLXZVGKHZZNLAPJXNFJYQESMZWHNGLOZWVQBJYZGDDUJAOPWSA");
    msg.lat = 0.1587743040464923;
    msg.lon = 0.6821629829642483;
    msg.z = 0.4838889281666615;
    msg.z_units = 129U;
    msg.cog = 0.17636838236307972;
    msg.sog = 0.6302084223273222;

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
    msg.setTimeStamp(0.9708157276745645);
    msg.setSource(46834U);
    msg.setSourceEntity(134U);
    msg.setDestination(19172U);
    msg.setDestinationEntity(148U);
    msg.name.assign("EAFQTQHIATNEDWBYZHHIXIDJEXNQUMWVJAPSRVKCWUDKUGOOWLAFCZUJHWALTJKASUVJYMHLGSCIFMXJTDDWMAVMZCPHBEFGZBXKYZODMQWSQJNSYNYMBLMGXRHBYEKBRGEURMZJQPDHUJLVKTSPVGCGPXFBKYROCNAFBFSBROSWSQZPPURIETOYVGMDCQLGEBPYLINNOI");
    msg.value.assign("FAYKLQKUNYMWLJMMERZWPEGWNQDBLVDMFTUAOGXPOHDDTLJNYJBIWFXFZDBNUXSUXFWANEXPPAZGKAVSAFDZBEADWKS");

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
    msg.setTimeStamp(0.5174025586371798);
    msg.setSource(46007U);
    msg.setSourceEntity(207U);
    msg.setDestination(55568U);
    msg.setDestinationEntity(40U);
    msg.name.assign("TMWEZLYNPTYYZHTPBRV");
    msg.value.assign("HWZYLOPPOJELNVNVMOQQCNQQYZSHWRBFTPLRJGASPXTXFNKDTHSGUAFBYIQDADVZEVXTVCHXUIKRBJLHMXCMCMWCEHIEEUWYYMBXSOYLOAPDNDQFQYJUNZTWJULTRRMFODSTGWVABXNYEFQCUBPIIF");

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
    msg.setTimeStamp(0.16512658289730608);
    msg.setSource(20820U);
    msg.setSourceEntity(39U);
    msg.setDestination(17202U);
    msg.setDestinationEntity(243U);
    msg.name.assign("NMONHBULJRXIZJHDSQVDFWRUOOYIQRGZXHDZRJYHXENCYWJEYUZUJVYETBQRDGELZZZVIWQYSJDABR");
    msg.value.assign("LFWLRTQJKVQKMPEVYJDSISQPNUZHXLROJVLHCXGDBEATOHJUWMWOCODNCRUBPBVHZNMWJZCAYSAPJGPRAYNLGTKXBEDLQKBEXJXNSUEASCJNFHZHGISFBPWZEFYXSWGDADFBHRDJPSTYTZGCMEVDTXTQGMMBEUZCMXVGIYHOGTIMO");

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
    msg.setTimeStamp(0.6325963422693688);
    msg.setSource(30959U);
    msg.setSourceEntity(160U);
    msg.setDestination(2376U);
    msg.setDestinationEntity(234U);
    msg.name.assign("VENWIEBDUVUNYWMAZDG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QHEBXDUEMWSTVSMRCWGYRFAZAPJWEZPAPBQGBHKOHRZTMRLKBIVJXLEECWYDJDMCFEJVAJYVLDURUTGTPJWUIBZMSLNQJOQSBKVFOMOVOLLYYXRKJHKOOHECDARDFXPLAQXMSUEQMTKTADTPRCMSHNOBBICDCONVHCJUKGFYEXLNAIWYWPMZNDPWTWPXIUNGUKDRIBAGNJQZSYVANLYVIGUHTHVWIFBFGQSNLIYNCKFIRGZPXXSKZFZQXQF");
    tmp_msg_0.value.assign("AFOBSRVPWGOCCYHMKNBHANWZUXIRJVZTAMYSTXMHFPEPPRUPDKUZQNWLBWFIHEXCWMVWMSLTUOWMDE");
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
    msg.setTimeStamp(0.43348891797656586);
    msg.setSource(43589U);
    msg.setSourceEntity(46U);
    msg.setDestination(59663U);
    msg.setDestinationEntity(161U);
    msg.name.assign("FGNSHLMRKCRIIDNZPBKLCTVQCAVXOQNUOEYFNNGCFEAYECPJEMRNFKBGERZXMOQUWZSDVCUMCVBSCTTBBMUAFZJWMEZQXIYLRWYOTWFIPVTHKTSTUTONQXOHTXSCQNLMBOPBXJGRFPNKWZGYIKUAZGTJODKOWYKEAABVEPGDWLSRSIVLHXJGRIHHSLDRIFZPXXAUDHIJVYKAJJYDMCADYQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AXPOOIJFEOBPYRFSQLFHKJCYFIWQVVNWYUGCMGLRCUPBVPOOXMAFXXAJFICBRTFOGHUBHHNMNTVKTLMFBZRYMDDKZBMWJLEIAJDE");
    tmp_msg_0.value.assign("LVPQHVYUMVUKQNABFSETHUCISJTDBAWSBBEVJMQOVKMCSQDNNWIWNGCDPT");
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
    msg.setTimeStamp(0.8872046443764104);
    msg.setSource(61356U);
    msg.setSourceEntity(63U);
    msg.setDestination(54247U);
    msg.setDestinationEntity(138U);
    msg.name.assign("QPULMIGVIPRKQCVNDDRROVTAWEKZQOVQZTTDHXQPEJKEMUQTCFIYFXACLMNHNDWFSWGCFENRFGBXYMZMSZVTPAJISGPFSLEVNAFVBSTLUBPYEYUOURBVKBXLHPHMAOEVMKCJGQSHFWODSFZIJHBTRGNZURHXCZRIJIIJZAFNEIYWJDWGTLJLTPKRKYGDGAOKUAEUWMNDYNECTJYZP");

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
    msg.setTimeStamp(0.8693422612819405);
    msg.setSource(9913U);
    msg.setSourceEntity(50U);
    msg.setDestination(28102U);
    msg.setDestinationEntity(133U);
    msg.name.assign("QBSHUPUGCESRCAJKIEVHGBLCBOSAAOWPZCIUSRBRRJVGSGDJJVYWJGUKOWWMDFDDHYGYFJHRQTIWHSLNYWKVNBQPDZXBWZTTLRPQWNCDHICIOWALZUZHKEBFMBPSZFZYZNSVDYUWMJRONXGTMCUFPMQLLTKPFFLEXFOUMEKGAJIAOXKCCSNTAOPZEHKJNNCOXFMOHXQKEEVHVTA");
    msg.visibility.assign("QQVAHRNYCTKKOOUWGELARZOAVERRCZIENETSDSJLBSJTNQQQANHLIVCEFIIKDOHSQXYXYNJVLKBANSBNTPPAMBWATWUXOPPYZQTFFLJULLYSBLB");
    msg.scope.assign("KNHSBLSLQMSTMCXMIYWWMABFJIKODUABANESDC");

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
    msg.setTimeStamp(0.97374712271055);
    msg.setSource(10866U);
    msg.setSourceEntity(15U);
    msg.setDestination(1602U);
    msg.setDestinationEntity(105U);
    msg.name.assign("HPNQVXSRQUDUMZEZMRZEXMLQJBZDHNIFNIDK");
    msg.visibility.assign("RSXRJGYXRCPWZEOGXNVXCBGWDUYRPPQZZJKZGPXRIXHIUZEJQHDTILBPQQHBFKVESYPDLNMISYNFWPSWCQTONNFNRAGTNBHXBQHNOSPVBQIAAWKNSLUKAYLMKFOAMEDFVOZDFFWOMUUDCLJOVMPENKUUDR");
    msg.scope.assign("BYGCIMSTPEOZVLITKZLXQYWNCTVJMVOLBTZUPKLZVXJNAJDGBAWPGYWQMURXGLFGFKCEDJQYJNHCNXQTVHPOQMWWUXORDHRHNMLFETDLYUFZXOZMRMSTLXGHFRAICUANTXGGJNFZKYAZHQIEDWCEORTOMBKDRRBHUIJQLF");

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
    msg.setTimeStamp(0.17455327808350007);
    msg.setSource(5070U);
    msg.setSourceEntity(60U);
    msg.setDestination(11527U);
    msg.setDestinationEntity(252U);
    msg.name.assign("ZSQUAGKTUHCYNIZBWMTZANQIUGPZTDUSAYUXEUVTMYPAHOBLJRUTBHMLOBWDJOVHUHMCSQYAMNIRQCNSRDVVVBEOZQNRPFYCAGOKTWHCJBNSFRZFJBXXKDYJLTPBVEFOXWSXOAEXAKCNEQESRMCDFZOWXYMPJHOLTRMEPZIMKE");
    msg.visibility.assign("USEAYKXYIEDGMTCHBGGSNNIBOKGVGFQSGKRAFTTJFEBJRZQUEBJPEVZGXDHNUO");
    msg.scope.assign("OIPRFORECOQUGHYLFIXOGONJUDMJVKQLEIVFHPAFPWKISWPZMNQUTHJMICUMECTAAOWBDJNZJEQKTIUUELYSZZBZHVIVFSLBPQWFSETYENDPBIAWGKZVKOJDQWFMWMAHSCYYHYYQHHYBAXCLSWJTVBYVERBHURKWGLXWGCNAPGMBFMLOORRTDNSKIUZVKFBDENUXNCOSCRXZVXJDTJPAHZAQPLLMRQCSXYRTFSNVZMGXTGNBEXPKGTDJQDUK");

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
    msg.setTimeStamp(0.13679378214709204);
    msg.setSource(62038U);
    msg.setSourceEntity(3U);
    msg.setDestination(30392U);
    msg.setDestinationEntity(4U);
    msg.name.assign("RKBAWOFMGSMQUVZIJNEXAXPAXZHZMCDJRTCGEQWJVQUXQBHBDSD");

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
    msg.setTimeStamp(0.7375592470954266);
    msg.setSource(20500U);
    msg.setSourceEntity(149U);
    msg.setDestination(55392U);
    msg.setDestinationEntity(138U);
    msg.name.assign("EAQMKSJUVVZDGDQIIRBSPEHTLEOUBLWKCPTWANFPGLXWCNULNHKWYGRKIDLXISKNRXJRZIYNHFPBBLMQORMHHNALAZHCAXOMKSZEGKUZJVPIYAUUBRFVBFRFJVTZMGSEAOVUDAWTYDJQUMUMCDEZGKNTGOBQTFHGIYBPWEEFQRMBVVTXFEZLWZAPKSYCCGSFFDNQ");

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
    msg.setTimeStamp(0.6477332425805258);
    msg.setSource(25505U);
    msg.setSourceEntity(224U);
    msg.setDestination(4376U);
    msg.setDestinationEntity(47U);
    msg.name.assign("XKCWGJOZQATLRSEGMOYVFMEOEJPYMKUQPMSNTDNOWSHIGHLCLUXIUUAQJZJVGENOFOZQRWPAKFJIFMPSXKHILICSNCHRSRIDONHPYTJTLQOVLAEADWYYRIJZKGYTXQGWKKWXNMEKFWRVDRQKHBTVLLALQERWBSNRCUTBADGZFZPGYQYDPWRBHDXXFUOEBMCNKMAVBCTUSSCGEBVXCUAELDJPBNVJBDSTUV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CJAUPLICRQRVTDWZFXGGDREVOEVTHQIJNNEFJWNWURSHYAVEXUWUUHEHDMMPWUJEBVIHCLMPDAKOWLQSYRXMTURP");
    tmp_msg_0.value.assign("BNFBSRWHTQQAURMFASPZMSPRBSDMIOWOODEFPGWG");
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
    msg.setTimeStamp(0.29766301193587164);
    msg.setSource(53595U);
    msg.setSourceEntity(38U);
    msg.setDestination(28692U);
    msg.setDestinationEntity(4U);
    msg.name.assign("FBYLKZCDWHAYPRXWLGVUCWVBSNMMJDHIYSIIBTHDVELOUMTBDINZWYNALYEOENLMBOMTFZQCGACIHAJQNZPJTEVOWZBUJCOGVXIQBMKMNTYPYXHGJMSREUUWJGWDRCJUAOBDDOXWGLSPFXFHFTANGZYAAFBHIFSKSKOQRSUXVEXZKEZLPMYJILITZTRPSQFGNKALFVFIVXHJDCPHWOHMRKNOPUDQCRGTCBXQRQQDK");

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
    msg.setTimeStamp(0.7787880301226026);
    msg.setSource(20159U);
    msg.setSourceEntity(242U);
    msg.setDestination(50431U);
    msg.setDestinationEntity(101U);
    msg.name.assign("YLWEAZTUZPZMHDEAFIPSMKOWKDKOBTNFTHXZHERTUPNXLCGMPDPNOHTHGQIQZQVUSICWGL");

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
    msg.setTimeStamp(0.3503327812967624);
    msg.setSource(64550U);
    msg.setSourceEntity(83U);
    msg.setDestination(19586U);
    msg.setDestinationEntity(75U);
    msg.name.assign("BLTATQUIKQJNHXBWHYZUUJMJQMVQTBCSBRJGITNSFILADEARRGQJAIEKMFO");

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
    msg.setTimeStamp(0.181842306509983);
    msg.setSource(50958U);
    msg.setSourceEntity(221U);
    msg.setDestination(17336U);
    msg.setDestinationEntity(252U);
    msg.timeout = 2127698091U;

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
    msg.setTimeStamp(0.8820433836770196);
    msg.setSource(23406U);
    msg.setSourceEntity(179U);
    msg.setDestination(39587U);
    msg.setDestinationEntity(241U);
    msg.timeout = 3166696782U;

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
    msg.setTimeStamp(0.7770717773360392);
    msg.setSource(44482U);
    msg.setSourceEntity(205U);
    msg.setDestination(23845U);
    msg.setDestinationEntity(60U);
    msg.timeout = 3601280442U;

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
    msg.setTimeStamp(0.24739643066700934);
    msg.setSource(22104U);
    msg.setSourceEntity(48U);
    msg.setDestination(3508U);
    msg.setDestinationEntity(163U);
    msg.sessid = 1398518149U;

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
    msg.setTimeStamp(0.1285199233029951);
    msg.setSource(12516U);
    msg.setSourceEntity(160U);
    msg.setDestination(44490U);
    msg.setDestinationEntity(219U);
    msg.sessid = 3688329903U;

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
    msg.setTimeStamp(0.21921210512275158);
    msg.setSource(17022U);
    msg.setSourceEntity(221U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(128U);
    msg.sessid = 1728405048U;

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
    msg.setTimeStamp(0.43765869527906465);
    msg.setSource(50695U);
    msg.setSourceEntity(98U);
    msg.setDestination(16423U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2692981919U;
    msg.messages.assign("QAGIAZQVMLHHRTKSTRYPFEZWKXIYAROWKPKEKONOBXRLWSJXQZNCITNIHPLYFNCNRRESCSFHUXZBFXNYDEMHFYDFAADGHYPEHDMWJEPLWDOYGCSEDIKUVPCFTWDVOJXYLANAVGVGDLBUMJYVXJCRQBMKUNUCMPTITECYRU");

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
    msg.setTimeStamp(0.967710912953895);
    msg.setSource(35387U);
    msg.setSourceEntity(250U);
    msg.setDestination(40288U);
    msg.setDestinationEntity(98U);
    msg.sessid = 2944591375U;
    msg.messages.assign("ZSUPFPWEXPXYFWBVZMOAPFCWCRQFBCVASCMIKQXCVYZTEGZTACDTCOOHFXLETDJESELGPIGJXRHDOGUVHPMIOQIDMAHMTOTGHINYRQMZLNQBXTH");

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
    msg.setTimeStamp(0.35866991379307045);
    msg.setSource(47331U);
    msg.setSourceEntity(5U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(135U);
    msg.sessid = 907794840U;
    msg.messages.assign("GWPUKDJBKQICPMMLZDKDYTXTVIDFEDKJVNGAIGUQEMMFSAEPVQKMNVSJHYNURUQZYXKHPTVHAWESCPKIHCATSTROQSBXZYEVMRGYVBRSCJWTXRZOPSBBLSRFXXNLONOZCEVOXFPFLBCJMFHDISPIGQZUADCSZYQWWBJLGHDEQHZKIMTWLRGFJAHB");

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
    msg.setTimeStamp(0.7372031504890296);
    msg.setSource(10777U);
    msg.setSourceEntity(194U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(164U);
    msg.sessid = 247876000U;

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
    msg.setTimeStamp(0.8978495800315953);
    msg.setSource(37233U);
    msg.setSourceEntity(23U);
    msg.setDestination(54995U);
    msg.setDestinationEntity(197U);
    msg.sessid = 1828831857U;

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
    msg.setTimeStamp(0.2914930093280712);
    msg.setSource(12164U);
    msg.setSourceEntity(11U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2830693295U;

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
    msg.setTimeStamp(0.8001532186246897);
    msg.setSource(56405U);
    msg.setSourceEntity(127U);
    msg.setDestination(44721U);
    msg.setDestinationEntity(191U);
    msg.sessid = 1710727267U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.9958897990693858);
    msg.setSource(54288U);
    msg.setSourceEntity(0U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(219U);
    msg.sessid = 2460501176U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.831500260630384);
    msg.setSource(48588U);
    msg.setSourceEntity(143U);
    msg.setDestination(12197U);
    msg.setDestinationEntity(51U);
    msg.sessid = 2730886730U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.37175175082820777);
    msg.setSource(843U);
    msg.setSourceEntity(248U);
    msg.setDestination(29135U);
    msg.setDestinationEntity(37U);
    msg.name.assign("XJKLEPAOXISRGKHZYPMPOTNLEKXRCLBESIQDWO");

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
    msg.setTimeStamp(0.24046291796651387);
    msg.setSource(51376U);
    msg.setSourceEntity(239U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(243U);
    msg.name.assign("BZFAJEMBFLPYBNSWUTCRHTJTBIXCXJUXVMFDEZLMNNYIYIVADCKAIRHFQKOLQUWLHGFMCIEBLVKYNLBJLTOUWTSQYGKDZVACRFMDPBTOFIXLVQDIZGARVDXSSKSQGHCTJVYOUSSOMGFXKWUE");

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
    msg.setTimeStamp(0.34020154170099015);
    msg.setSource(47394U);
    msg.setSourceEntity(112U);
    msg.setDestination(5554U);
    msg.setDestinationEntity(95U);
    msg.name.assign("WCHIBIBBPTOYNSUYLKFYGOIJDTFOGMZVOEANIDUIAPGGVSENQYEEFDCFCYICXGFWJZCPLYXRJTGKBZQORZXMAFJKCLWMKDTCHNIMGDTWZBZPEDEWMRQQSPOCKTUMVLBEHMSJXPPNRXHDFKQNSXGUFNVFGHHOURVSUAARJXCKMMVUDUT");

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
    msg.setTimeStamp(0.17536406167430152);
    msg.setSource(44644U);
    msg.setSourceEntity(207U);
    msg.setDestination(9710U);
    msg.setDestinationEntity(108U);
    msg.name.assign("IXXYDNKVZDLJYJGHCVFCFTOBBFHFKIOEEQDMURHZSFJFYETVZPSMMULAHEGAZALBSWXJGZQNKECCFVVWRWMZOGRBDQTLNCKJBCUDOFHIEUGQVDKRUTPPMRIXUAWQZGHGVCDKOCWWSNQFUVPAYWBALAEYSMSKOGJWYPJKNOIHVGPSQXZTNWPJYXUOUZORYHRE");

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
    msg.setTimeStamp(0.10862038355797277);
    msg.setSource(9935U);
    msg.setSourceEntity(146U);
    msg.setDestination(30027U);
    msg.setDestinationEntity(213U);
    msg.name.assign("OYQCROYSJMITLLCUPCDSIVMFJEQTSIRNYZUCKZEFNARZKCLHYEVTIOEAGAUQXAGHTYZWJGDUHHBHJXIYBMQKMXVBKDVLMWMGAJFPJODTXFMSQBDFAGAJZKOKTSRWQTZFVTPWNBXUNECLGOONARPVHQ");

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
    msg.setTimeStamp(0.2935815735778893);
    msg.setSource(51271U);
    msg.setSourceEntity(103U);
    msg.setDestination(38788U);
    msg.setDestinationEntity(26U);
    msg.name.assign("DJSKQABYTTRIPQDLHGSCPQJ");

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
    msg.setTimeStamp(0.2872049054367398);
    msg.setSource(41569U);
    msg.setSourceEntity(118U);
    msg.setDestination(51641U);
    msg.setDestinationEntity(90U);
    msg.type = 124U;
    msg.error.assign("JUVDMJNXRMUYIPPTOCOHIDVYKCVKDZPVCXLSJAWAFILBRSHGVODTXJAEWEXWPXKBONMKNZEOEBHUAPZBYBNKIQZCVLLOFQVNPZQEIRYJCBNCVMAUADNEHL");

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
    msg.setTimeStamp(0.07457080294173102);
    msg.setSource(62401U);
    msg.setSourceEntity(173U);
    msg.setDestination(118U);
    msg.setDestinationEntity(157U);
    msg.type = 31U;
    msg.error.assign("ENJAVRVNVFEKYWGVIEEDCDURKVTPYCCJTPUUXEZWMCPELTYMBAJMPFGDPRSSFARCNYYWHSDKTFGUHFZSNOMUAYGMWISTLDCWZDIHBUAVHXIYMSQBZLOHBFRRKUMNEZBJCCLWXIIXMPUTZSTORZNPQTHPDRXGNQALDAANBPKSXVQWUOKEFQYQTLKVIWMBORVQJGIWYFODGVSYWEQJLNIQDBUOBOCCPJKXSZ");

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
    msg.setTimeStamp(0.39493995522053427);
    msg.setSource(57203U);
    msg.setSourceEntity(120U);
    msg.setDestination(27120U);
    msg.setDestinationEntity(5U);
    msg.type = 59U;
    msg.error.assign("IRAADPTIXDCBRGSZZQXKCTQEMPGHOVCZQQMAHTOOEUUOOCDPCGIJCROQEQQVLKFRGUHVSKHURPTFLHSJNJTDXLXMLEAYWJYGHVZZYILVZDWYDGWYFSQKXEUJFOZ");

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
    msg.setTimeStamp(0.9734106111900043);
    msg.setSource(30683U);
    msg.setSourceEntity(26U);
    msg.setDestination(11682U);
    msg.setDestinationEntity(57U);
    msg.seq = 22607U;
    msg.sys_dst.assign("FSVXRLTBAUNDTQPRKCPQXFWCBFIZMQRCMBZULJKEOKDLUNGLOZEHGMNYKMUDYCFPPOVSWHFGJONYQSBIUXWSMIOJCXLXOARULWLCGGZEGTKBNQEAPVIJJYBZACNIIEKYKHYBTSTGTF");
    msg.flags = 215U;
    const signed char tmp_msg_0[] = {-46, 125, -16, 82, 71, -30, 118, -120, 108, -18, 102, 1, -67, 77, -22, -7, 81, -18, -44, -110, -19, 74, -91, 83, -114, 8, 61, -14, 83, 114, -104, 95, 11, 95, 50, 37, 32, -40, 126, 44, -58, 80, 68, 119, 24, -121, -18, -97, 100, 27, 44, 67, -91, 64, -100, 4, -39, 97, 36, -10, -53, -96, -36, 43, 25, 5, -96, -93, -121, -78, 33, -12, 58, 4, 16, 97, 52, 118, 95, 123, -8, 60, -107, 19, 26, -80, 2, -81, 125, 31, -114, 46, -71, -61, -15, -34, 41, 75, -17, -37, -2, 3, 101, 117, 122, -112, 66, -2, 83, -82, -20, 99, -38, -78, 6, 96, -56, -60, -115, 46, -19, -31, -35, -82, -98, 88, 64, -96, 83, 14, -20, -100, -96, -114, 63, -118, -36, 114, 10, -13, -84, -44, -49};
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
    msg.setTimeStamp(0.34637332935918075);
    msg.setSource(9378U);
    msg.setSourceEntity(151U);
    msg.setDestination(32814U);
    msg.setDestinationEntity(147U);
    msg.seq = 200U;
    msg.sys_dst.assign("KIWLGKUHPGSLMZRDGZHNJTFLPCTIPFVYCOGGOXHUOFTPPJQJAEZEULKRWJEVMMCEWHZIPGATVZRKMXSRBXNVDIQXQHTYKKIYLHYZGNBDBGAMAREK");
    msg.flags = 205U;
    const signed char tmp_msg_0[] = {105, -52, -62, 40, -57, 78, 7, 76, -29, -2, 42, -123, -104, 15, -96, -61, -9, -128, 80, -21, -28, -35, -76, -34, 98, 42, 10, 83, 14, 16, 1, -82, 14, 18, 69, -91, 52, 44, 38, 38, 34, -123, -17, -127, -15, -7, -21, -96, -128, -92, -60, 49, -103, -22, -83, -68, -36, 99, 39, 73, 25, -53, 51, 30, 122, 91, -20, -8, 24, -23, -5, -4, -46, 48, -25, -36, 12, -3, 13, 88, -73, 83, -94, 95, 101, -119, -74};
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
    msg.setTimeStamp(0.7314970587292764);
    msg.setSource(19069U);
    msg.setSourceEntity(121U);
    msg.setDestination(18247U);
    msg.setDestinationEntity(213U);
    msg.seq = 28003U;
    msg.sys_dst.assign("GNQNMXVUZRLVDQHETASIOCQTIFJFBRTFQTPJOYXONTVKYLOPJTWHAUXAUAJBOVEQLJGLVWGJERXQYHTXRIAXGNFNIBHYPGGKMMFDLKCEMCMONHEGYRBDZPIVWJKBPLSODPZTKMEACZPPUUKFSDEAUEFZXQDKAEXVJSZGCWMULWIHNTSNVCWZIZPNFYHDAYQRLGHPCHIMHGCWBZSDAJSRKYCWXZCVSUYKNLKMXSDROWFQROMFLOISBRBI");
    msg.flags = 195U;
    const signed char tmp_msg_0[] = {72, 84, -83, -99, -91, -77, -84, -120, -128, 59, 36, -53, -109, 100, 97, -23, 80, -36, -27, 29, -100, 53, 38, -78, -94, 120, -69, 84, 88, 9, -89, -65, 66, -94, -60, -111, 18, 23, 86, 36, 113, 11, 75, -103, 116, -92, -29, -30, 17, 7, -51, 13, 14, 10, 29, 107, -85, -1, -35, 79, 124, 93, -43, -115, -109, -77, -73, 9, -84, -94, 79, 34, 112, 89, -7, -23, -51, -8, 41, 79, 63, 96, 105, 66, -8, 43, -114, 116, -51, -22, -124, -1, 73, -49, -102, 100, 3, -109, -101, 74, 58, 64};
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
    msg.setTimeStamp(0.6117356189298326);
    msg.setSource(11248U);
    msg.setSourceEntity(18U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(160U);
    msg.sys_src.assign("YWZQXSXKNUHUBYWZVVSALVZSZSPDOAMHPTHMXVITWGRKWXBKRDJOMMINUWMCQIFEOCALVRBXNCAUARBSHEHRBKHZUCQIFHBDUAJRCPAQOEXGVPGJLRJCKOEDMGVSBXXYXYZQAUTLETGDQGRNNUHMLLTZOYPGHSFEODDJTILCIWKTBSTEDJEWIJAYPQYQDPEQSQMAYYCOSNOULLWIKHVDEPNFUOKKMPTFCIRKWXWYTG");
    msg.sys_dst.assign("KCPBCWIBQSMEDBGQQFCQVHXYVDRTKSJXLWZCYEWSJEVUPYTWLFAZLXGVHHWENUPSALYHKWPIOMMIAWPHNNBVLYKFCHZLFWXCGXHQRUFYMTHKKSDERRYRERROZNMRDEPBWHXATOUENNKXIMOOYSLZIPGACLEHQQTD");
    msg.flags = 252U;
    const signed char tmp_msg_0[] = {-22, -38, 36, 53, 80, -53, -5, 63, 16, 2, -9, -46, 71, 91, 85, 118, 83, -103, 28, -86, -13, -7, 101, -10, 97, -20, -48, 111, 67, -85, -120, -52, 40, -16, -17, -35, -67, 4, 55, 119, 78, -33, -96, 105, 36, -52, -27, 107, -35, -35, -86, 110, -21, 94, -35, -5, -7, 77, -6, -12, 46, 101, -30, 42, 23, 38, -82, 95, 25, 116, -10, 100, -86, 58, 103, 49, 31, -38, 106, 21, 76, -45, 12, 26, 123, 26, -8, 72, -87, 89, -60, 78, 72, -53, -9, 25, 49, -7, -70, -15, -125, -67, -120, 41, 75, -108, 18, 47, 41, -122, -59, -37, -74, 97, -40, -32, -29, -80, 26, -10, -51, 89, -102, 117, 92, -62, 103, -72, 63, -89, 55, -42, 94, -20, -105, -114, -90, 49, 12, -11, -95, 71, 123, 20, -41, -53, 108, 43, 125, -81, 78, 80, -21};
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
    msg.setTimeStamp(0.3211565268824018);
    msg.setSource(5331U);
    msg.setSourceEntity(217U);
    msg.setDestination(19089U);
    msg.setDestinationEntity(66U);
    msg.sys_src.assign("ACBQHJTJPCFLSPZUHBVIBMLXAUEWOZOMGILCBNTVOJPXLYHUQRWTWMDGYZLGVPSCIXFJFTFMFDKVDIXRGDCIAAXOKRMDWRHOKJKZIWULSNSXVVPTEKLAEZSVOKEJRURFQKQWQHZYMHICCYWKRYOJRZFANATGCDOHBXM");
    msg.sys_dst.assign("OCKFMVZBFYBTWSRYDNGDNFTNSHVCTFXREWIXHJEYKMMRFNNVTUBQCVOYYKWDAZTSCFJXTKBZFKKNDLRJAJ");
    msg.flags = 249U;
    const signed char tmp_msg_0[] = {87, -71, -116, 118, 105, 65, 94, 64, -99, 33, 125, -27, -75, 95, -46, 36, 119, -108, 24, -66, -25, -82, 10, -63, 119, -102, -79, -76, -57, -125, -23, 107, -90, -39, 81, 84, -97, 85, -96, 86, 112, -10, -113, -47, -111, -124, -22, 13, -82, 32, -74, -58, -23, -98, 80, -116, -9, -92, 5, 123, -63, -80, 39, -120, -49, 74, -107, -52, 103, -111, 23, -63, -91, 29, -38, -104, 36, -36, -88, -51, -60, 64, -108, 47, 51, -95, 97, 120, 38, 59, 64, 78, 66, 36, 51, 20, 69, -3, -111, -34, -4, 46, -102, -7, 76, 120, 126, -55, -76, 55, 35, -33, 110, 105, -23, -75, 34, -71, -128, 77, -32, 86, 65, 76, 35, 87, 86, 49, 12, 17, -62, -41, 25, -30, -113, 5, -36, -117, 77, 114, 117, 98, -121, 63, -91, 117, 113, -54, 80, 73, 123, 53, 18, -126, -65, 29, -77, 61, 35, -116, -62, -62, -18, 81, 44, -52, -114, -24, 79, -100, -47, -10, -17, 15, 74, -37, -126, 62, 51, 29, -106, 72, -38, 53, 28, -119, 67, 120, 29, 17, 123, 30, 67, -38, 4, -31, -16, -16, -93, 86, -87, 11, -128, -71, 24, -75, 7, -12, 121, 51, -41, -92, -12, -15, -33, 9, 103, -42, -57, 125, -34, -27, 95, -34, 44, -40, 57, 48, -95, 5, -84, -73, 17, -79, -128, -94, -7, -84, -111, 96, -38, -41, -29, 72, 100, 19, -60, 52, -56, 114, 29, -93};
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
    msg.setTimeStamp(0.04003645072623818);
    msg.setSource(44145U);
    msg.setSourceEntity(66U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(74U);
    msg.sys_src.assign("NENZCKFJBPVKLFLCRQLCPPRUVZYGECJYKLAHUBQGESXAMIQANHJINPIQVORTXUMMHFJGGOUKIBTABAIXXVOGXEDYCYQTJSHFULHMTFWCOFVDKNOPZRBJWIPQWAUTLHLSZYBGHAHSDCEYJWUUMETYDZZVSRPMXKNFRYCJGVRDSNHGISFJUYKVOQZ");
    msg.sys_dst.assign("XCKRBOVAFCPJIECFALYMGZ");
    msg.flags = 136U;
    const signed char tmp_msg_0[] = {85, 58, -103, -70, 103, -16, -5, -35, 68, 75, 12, -74, 126, 98, 95, -100, -101, -109, 64, 6, 112, -102, -117, 85, -49, -40, -18, -47, -110, -85, 3, -94, -43, -59, 90, -41, -98, 96, -10, 117, 105, -1, 81, 70, -112, -86, -63, 25, 47, 93, -128, -86, 79, 97, 38, 10, 125, -127, 58, -51, 5, -66, -35, 76, -103, -28, -84, 103, -122, 0, 45, -81, 117, 34, -107, -63, -127, -116, -113, -116, -65, 68, -78, -72, -78, 20, 29, 115, 44, 126, -26, 65, -11, -90, -96, 2, -58, 38, 85, -16, -96, -85, -19, 25, 105, 60, -65, 111, 63, -112, 78, -36, -60, 11, -124, -117, -69, 53, 4, 103, 45, -18, -39, 84, 5, 8, 117, 116, 119, -112, 20, -94, 49, 63, -74, -68, -101, 83, 10, -87, -88, -24, -102, 126, 117, 122, 50, 71, -112, -55, 14, -127, -115, 86, 27, -29, 46, 94, 105, -54, 124, -15, 27, 35, -123, 4, 102, -115, -80, 66, -117, 16, -26, 20, 76, 40, -70, 85, -83, -41, -35, -7, -3, -23, -57, 78, -17, -76, 6, 119, -11, 91, 113, 25, -38, -42, 60, -70, -117};
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
    msg.setTimeStamp(0.15814813863348065);
    msg.setSource(44058U);
    msg.setSourceEntity(24U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(187U);
    msg.seq = 29407U;
    msg.value = 125U;
    msg.error.assign("IFIAFGEGATRBFQDYSRGWQYAMMWGZEWHLSAOMGUAMXXGKOQPKVW");

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
    msg.setTimeStamp(0.7141290870902327);
    msg.setSource(7657U);
    msg.setSourceEntity(132U);
    msg.setDestination(41130U);
    msg.setDestinationEntity(86U);
    msg.seq = 51594U;
    msg.value = 21U;
    msg.error.assign("AEQHCYCFVCORGJREVLEJLSAJMLNDHLGPDUKTSUV");

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
    msg.setTimeStamp(0.6269314592925546);
    msg.setSource(55011U);
    msg.setSourceEntity(131U);
    msg.setDestination(13476U);
    msg.setDestinationEntity(8U);
    msg.seq = 5572U;
    msg.value = 139U;
    msg.error.assign("NXPIVJGRZFIODJPIUSYHRQMSMMIUKUOZSARNJCTPWLXUMXTFNHUFADMLBMGP");

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
    msg.setTimeStamp(0.27959470248926677);
    msg.setSource(4328U);
    msg.setSourceEntity(4U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(183U);
    msg.seq = 56244U;
    msg.sys.assign("MLIETWBIGKBIIUUOHRAGJWOEHIFRJJHQVSZOFJNSYPEMCKLIKAWTLUJPKNBXSBTFUCITRYFVJRYSJXMLBQHDXIGJDHBOKYOMHTBOCZGGRMXYYWDVIDNKWGDNYSUHXWGAYAMPDSSMJPOSQNQZHFKZPFRQBAYE");
    msg.value = 0.4311418011867044;

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
    msg.setTimeStamp(0.7724134478375843);
    msg.setSource(647U);
    msg.setSourceEntity(211U);
    msg.setDestination(8567U);
    msg.setDestinationEntity(186U);
    msg.seq = 59082U;
    msg.sys.assign("ZCGTCSXPKUNPPNNHQKHMWXVATWRDTLIQUGQYEVHSBDPJSCBJZKBIOZOBXEETRFYXNSLDQDIMWPHCKVJQAQATLULMISCOFABWUDZBWPYTKKPROIJZHHSMARGFBKGKHNCZWRVOQU");
    msg.value = 0.7279781907764586;

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
    msg.setTimeStamp(0.5017315231196317);
    msg.setSource(47088U);
    msg.setSourceEntity(9U);
    msg.setDestination(53674U);
    msg.setDestinationEntity(189U);
    msg.seq = 41002U;
    msg.sys.assign("WSFGIGEBEAVITUMSGOHRYQWZDAJXRXHUCJXWIHCLHUSMCXFUCLFBNLDBEOEMG");
    msg.value = 0.9331751590264722;

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
    msg.setTimeStamp(0.737560745496597);
    msg.setSource(41523U);
    msg.setSourceEntity(68U);
    msg.setDestination(56025U);
    msg.setDestinationEntity(115U);
    msg.seq = 17944U;
    msg.sys_dst.assign("IQTWCVHLPVKKTUHONTMLOEIOBYRZKLRCJXUEXLGTJBORFIZUMARWBVMQQAQPSMUGYVXDOZEXFCJEGMRRIRYSEXITSQKOXKIJTCEUPZWALJCAWVODPFOYAHUXEPCYWCXSBGEVVBSLYZGUSAMKPPOXACZNNKUNIHLGEYNLPFFMRPDLGABTZDQCWFFFDDGJVBHTSQDFXRSJBKHWMQYPBNVTWFWJQBD");
    msg.timeout = 0.6344801651955464;

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
    msg.setTimeStamp(0.49753451425548423);
    msg.setSource(49172U);
    msg.setSourceEntity(147U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(66U);
    msg.seq = 40588U;
    msg.sys_dst.assign("ZRIEOZUMUVQTURFXJEKVAZDQCIVMNQMZLRTPXWGRA");
    msg.timeout = 0.8630447660633143;

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
    msg.setTimeStamp(0.8447649996048179);
    msg.setSource(36914U);
    msg.setSourceEntity(198U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(253U);
    msg.seq = 20248U;
    msg.sys_dst.assign("KWZVLXSBWYZJUBRMUWQQRMKSKHMNFIWOQWQEFBJUXHXJHZFCCVPGDDSNYJOBIESPSXDNTIGWSQGRZTEMWWQFEFFPLDKJLRGPLXVLBSAGATVDSUDECNGGUMKLC");
    msg.timeout = 0.9851128345854367;

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
    msg.setTimeStamp(0.42833957933676514);
    msg.setSource(35637U);
    msg.setSourceEntity(108U);
    msg.setDestination(9005U);
    msg.setDestinationEntity(97U);
    msg.action = 49U;
    msg.longain = 0.17016215435617188;
    msg.latgain = 0.5270964111954092;
    msg.bondthick = 886291410U;
    msg.leadgain = 0.10821375459525107;
    msg.deconflgain = 0.10927330588171291;

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
    msg.setTimeStamp(0.09545071963935892);
    msg.setSource(64100U);
    msg.setSourceEntity(212U);
    msg.setDestination(25845U);
    msg.setDestinationEntity(119U);
    msg.action = 10U;
    msg.longain = 0.02342215847832496;
    msg.latgain = 0.11162267798686887;
    msg.bondthick = 864393050U;
    msg.leadgain = 0.04066384830021241;
    msg.deconflgain = 0.6637004376746154;

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
    msg.setTimeStamp(0.0017344720687214599);
    msg.setSource(16782U);
    msg.setSourceEntity(92U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(39U);
    msg.action = 92U;
    msg.longain = 0.5773455137674444;
    msg.latgain = 0.4561572461472475;
    msg.bondthick = 930579762U;
    msg.leadgain = 0.8481640128864688;
    msg.deconflgain = 0.08433004451477111;

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
    msg.setTimeStamp(0.10494698006197534);
    msg.setSource(57358U);
    msg.setSourceEntity(249U);
    msg.setDestination(33072U);
    msg.setDestinationEntity(191U);
    msg.err_mean = 0.3163648399597663;
    msg.dist_min_abs = 0.638324925402172;
    msg.dist_min_mean = 0.1640801173945785;

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
    msg.setTimeStamp(0.5044924543712492);
    msg.setSource(13851U);
    msg.setSourceEntity(110U);
    msg.setDestination(2513U);
    msg.setDestinationEntity(108U);
    msg.err_mean = 0.5935614477781409;
    msg.dist_min_abs = 0.005936916794405223;
    msg.dist_min_mean = 0.9759333173490614;

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
    msg.setTimeStamp(0.7910562287704134);
    msg.setSource(27788U);
    msg.setSourceEntity(129U);
    msg.setDestination(13677U);
    msg.setDestinationEntity(185U);
    msg.err_mean = 0.5192073421591314;
    msg.dist_min_abs = 0.236655858472533;
    msg.dist_min_mean = 0.08168323626894003;

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
    msg.setTimeStamp(0.2181751081891422);
    msg.setSource(27492U);
    msg.setSourceEntity(188U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(13U);
    msg.action = 139U;
    msg.lon_gain = 0.7954517014025199;
    msg.lat_gain = 0.7676996619494763;
    msg.bond_thick = 0.029337789446481355;
    msg.lead_gain = 0.2593515216170551;
    msg.deconfl_gain = 0.46726380230698794;
    msg.accel_switch_gain = 0.9642944698173225;
    msg.safe_dist = 0.7109279601934295;
    msg.deconflict_offset = 0.6440017441168926;
    msg.accel_safe_margin = 0.6089581383697632;
    msg.accel_lim_x = 0.12424143636000262;

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
    msg.setTimeStamp(0.8731170183852589);
    msg.setSource(31754U);
    msg.setSourceEntity(193U);
    msg.setDestination(47977U);
    msg.setDestinationEntity(150U);
    msg.action = 180U;
    msg.lon_gain = 0.7103891904105643;
    msg.lat_gain = 0.7770293270676556;
    msg.bond_thick = 0.4657720820179322;
    msg.lead_gain = 0.2215793489373904;
    msg.deconfl_gain = 0.5203276578393616;
    msg.accel_switch_gain = 0.03299670400180754;
    msg.safe_dist = 0.25905404798158194;
    msg.deconflict_offset = 0.6406838822966259;
    msg.accel_safe_margin = 0.19308925514232034;
    msg.accel_lim_x = 0.1621541174954535;

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
    msg.setTimeStamp(0.15064783992988018);
    msg.setSource(48677U);
    msg.setSourceEntity(2U);
    msg.setDestination(37112U);
    msg.setDestinationEntity(3U);
    msg.action = 25U;
    msg.lon_gain = 0.05479764070741955;
    msg.lat_gain = 0.08866804970385278;
    msg.bond_thick = 0.49674915925948815;
    msg.lead_gain = 0.3071278508201094;
    msg.deconfl_gain = 0.37595219673441327;
    msg.accel_switch_gain = 0.6232993120831868;
    msg.safe_dist = 0.9378205032604664;
    msg.deconflict_offset = 0.864612138470963;
    msg.accel_safe_margin = 0.8437858138182814;
    msg.accel_lim_x = 0.3594977753414842;

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
    msg.setTimeStamp(0.3995070906469609);
    msg.setSource(39305U);
    msg.setSourceEntity(164U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(85U);
    msg.type = 146U;
    msg.op = 216U;
    msg.err_mean = 0.10517323379504873;
    msg.dist_min_abs = 0.6309915095659976;
    msg.dist_min_mean = 0.9140793637807936;
    msg.roll_rate_mean = 0.5904965413832267;
    msg.time = 0.1586680056008466;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 36U;
    tmp_msg_0.lon_gain = 0.9489422554049531;
    tmp_msg_0.lat_gain = 0.8271545113624947;
    tmp_msg_0.bond_thick = 0.1908412886669274;
    tmp_msg_0.lead_gain = 0.7413441908488194;
    tmp_msg_0.deconfl_gain = 0.4773946120047139;
    tmp_msg_0.accel_switch_gain = 0.6492625290148581;
    tmp_msg_0.safe_dist = 0.3662249297086706;
    tmp_msg_0.deconflict_offset = 0.301586099607274;
    tmp_msg_0.accel_safe_margin = 0.7753167899071003;
    tmp_msg_0.accel_lim_x = 0.27893711943547783;
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
    msg.setTimeStamp(0.08892663963703085);
    msg.setSource(55276U);
    msg.setSourceEntity(79U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(6U);
    msg.type = 89U;
    msg.op = 113U;
    msg.err_mean = 0.6547250946303308;
    msg.dist_min_abs = 0.8127818203822583;
    msg.dist_min_mean = 0.32456531434169034;
    msg.roll_rate_mean = 0.9991944648414236;
    msg.time = 0.6806610506325896;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 217U;
    tmp_msg_0.lon_gain = 0.409027961593717;
    tmp_msg_0.lat_gain = 0.3603976979601702;
    tmp_msg_0.bond_thick = 0.0010445600382539277;
    tmp_msg_0.lead_gain = 0.1478690848198928;
    tmp_msg_0.deconfl_gain = 0.24992684258607833;
    tmp_msg_0.accel_switch_gain = 0.017230784947612654;
    tmp_msg_0.safe_dist = 0.617821913674019;
    tmp_msg_0.deconflict_offset = 0.258066963930662;
    tmp_msg_0.accel_safe_margin = 0.3217971008273587;
    tmp_msg_0.accel_lim_x = 0.48703452061408314;
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
    msg.setTimeStamp(0.05673122925627838);
    msg.setSource(50208U);
    msg.setSourceEntity(123U);
    msg.setDestination(19692U);
    msg.setDestinationEntity(138U);
    msg.type = 97U;
    msg.op = 169U;
    msg.err_mean = 0.11178801471878808;
    msg.dist_min_abs = 0.8666548812136677;
    msg.dist_min_mean = 0.6421613919845328;
    msg.roll_rate_mean = 0.629840918202931;
    msg.time = 0.6363259694803718;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 44U;
    tmp_msg_0.lon_gain = 0.5837059219528353;
    tmp_msg_0.lat_gain = 0.8587151084450015;
    tmp_msg_0.bond_thick = 0.6527118415971055;
    tmp_msg_0.lead_gain = 0.5339807574561732;
    tmp_msg_0.deconfl_gain = 0.4146270214890295;
    tmp_msg_0.accel_switch_gain = 0.4384211919477614;
    tmp_msg_0.safe_dist = 0.2486225027629112;
    tmp_msg_0.deconflict_offset = 0.1190785765044462;
    tmp_msg_0.accel_safe_margin = 0.22835039297827708;
    tmp_msg_0.accel_lim_x = 0.08288194431919771;
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
    msg.setTimeStamp(0.8176391848755776);
    msg.setSource(9211U);
    msg.setSourceEntity(86U);
    msg.setDestination(30217U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.7248880940944107;
    msg.lon = 0.17560351828038934;
    msg.eta = 992417387U;
    msg.duration = 54806U;

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
    msg.setTimeStamp(0.07937348197671767);
    msg.setSource(54891U);
    msg.setSourceEntity(72U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.959923678995312;
    msg.lon = 0.47782448435956715;
    msg.eta = 2358449956U;
    msg.duration = 20315U;

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
    msg.setTimeStamp(0.27420960134128713);
    msg.setSource(58158U);
    msg.setSourceEntity(208U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.039134638283252476;
    msg.lon = 0.12798659093150133;
    msg.eta = 2155522273U;
    msg.duration = 33676U;

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
    msg.setTimeStamp(0.18932791996802012);
    msg.setSource(62575U);
    msg.setSourceEntity(16U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(75U);
    msg.plan_id = 65441U;

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
    msg.setTimeStamp(0.6331571138309269);
    msg.setSource(16420U);
    msg.setSourceEntity(76U);
    msg.setDestination(35712U);
    msg.setDestinationEntity(67U);
    msg.plan_id = 28460U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.16206791341042204;
    tmp_msg_0.lon = 0.19236362994640355;
    tmp_msg_0.eta = 1665192575U;
    tmp_msg_0.duration = 49789U;
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
    msg.setTimeStamp(0.28761681434536224);
    msg.setSource(28073U);
    msg.setSourceEntity(82U);
    msg.setDestination(3039U);
    msg.setDestinationEntity(101U);
    msg.plan_id = 8137U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4707677713846007;
    tmp_msg_0.lon = 0.6841533483849395;
    tmp_msg_0.eta = 658237851U;
    tmp_msg_0.duration = 56696U;
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
    msg.setTimeStamp(0.4367498360231892);
    msg.setSource(46486U);
    msg.setSourceEntity(198U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(43U);
    msg.type = 25U;
    msg.command = 45U;
    msg.settings.assign("YKTMEUGOAOIAIHNOSFKHIBTGJMTSWIJNUYBVZNXZDANVRSDHESKZGWDLHNDTVGKCXSZEPUWXMPBJXFBKEMXXFIBYOQLBQPARZESEQTAOUUEZWLCWSTRJOLCJTUHHQTGBNYPRDPPVGFMWRBZCGUCGXCQILQSYXNDKAYYAVLOQCFGWMCNVQRMMP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12388U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EXUBOZCOPKZCJXWVDHLVOAXRBAMXYSPBDGNNIFBIOMENMKTPKCVQGJONSFPOAKWJYKHJFJSFVQZRDMXATPVLWYRHXWHGLCDGHFCBJJBLYHEIMLGVQROFNYYZTZHIKWNVIQVOSZBCTEBWTTUSTEWDGUABCHEDCZLESQFDQLHJPSKJATSTYVUIWRRMPEXPYNLFKXQIARDUCMUQPXXMNQLICJFBVWAOTLNUMWRQMKIEZD");

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
    msg.setTimeStamp(0.8266605261512275);
    msg.setSource(4739U);
    msg.setSourceEntity(209U);
    msg.setDestination(50116U);
    msg.setDestinationEntity(51U);
    msg.type = 55U;
    msg.command = 82U;
    msg.settings.assign("HSERCLCUMTUAPCEOAKIZWHAPFTGMCJUQCSBDYSIAGVDKHMPAWPRTBAGPNWZCLIMKBJGXSYMSUEZWYAVGEOGVSTWSCJUXDNNKVPLJXNRDJHYKKZMFDXJGZQVRXCFDGSCPTGTALYXQXOTLAXVJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48775U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VUALCSWOZBGHNXNGLZEXXFQZSOUMCNDBLYUXDGMRGQOHIBHBOUFXSTLQRHKNTDXSKKCQZNPZWLYKZGZSVEPLDCGPOYCYEXKVPRRFDWBTAFFJTIJVWBWEVPDWOVNCMXMTQTTWLJHMN");

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
    msg.setTimeStamp(0.2951133411384049);
    msg.setSource(43976U);
    msg.setSourceEntity(123U);
    msg.setDestination(33312U);
    msg.setDestinationEntity(251U);
    msg.type = 207U;
    msg.command = 103U;
    msg.settings.assign("FJBWPUUXJKADDGTLORVHQTJPBTYLBMMXZJUCMGSDSQPDJIPPHVMLRYBAXECRJQSBOCEPUIHLFOZSPGEAZIPALFADMCAHVHPXYFHCNSUCYNLFGAKRNLEHMNRKVNQQOGTVIZKZQYHNDKXDWSLOAZQRXOBXESHJV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52897U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8015078644707984;
    tmp_tmp_msg_0_0.lon = 0.6227950038706122;
    tmp_tmp_msg_0_0.eta = 4230189950U;
    tmp_tmp_msg_0_0.duration = 21761U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GGLFIXKJPEWMZKNZIXRVJXSTTVKIFQORNYJTQEPCNKLJHQUPNXMOCDXNMQMRWROTZKINEBRFCSQJKDFSGKEDQUAVIGHKHZ");

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
    msg.setTimeStamp(0.9431540974179273);
    msg.setSource(14669U);
    msg.setSourceEntity(233U);
    msg.setDestination(54669U);
    msg.setDestinationEntity(24U);
    msg.state = 230U;
    msg.plan_id = 36996U;
    msg.wpt_id = 82U;
    msg.settings_chk = 7521U;

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
    msg.setTimeStamp(0.029027539683229686);
    msg.setSource(31271U);
    msg.setSourceEntity(102U);
    msg.setDestination(40427U);
    msg.setDestinationEntity(22U);
    msg.state = 120U;
    msg.plan_id = 44947U;
    msg.wpt_id = 63U;
    msg.settings_chk = 30914U;

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
    msg.setTimeStamp(0.9124292066424727);
    msg.setSource(39611U);
    msg.setSourceEntity(117U);
    msg.setDestination(10303U);
    msg.setDestinationEntity(221U);
    msg.state = 68U;
    msg.plan_id = 45975U;
    msg.wpt_id = 205U;
    msg.settings_chk = 43160U;

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
    msg.setTimeStamp(0.6414825784782868);
    msg.setSource(13363U);
    msg.setSourceEntity(211U);
    msg.setDestination(35848U);
    msg.setDestinationEntity(199U);
    msg.uid = 252U;
    msg.frag_number = 120U;
    msg.num_frags = 115U;
    const signed char tmp_msg_0[] = {40, 80, -20, 107, -55, 7, -125, -31, 97, 53, -25, 44, 114, -112};
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
    msg.setTimeStamp(0.1737162456703657);
    msg.setSource(27264U);
    msg.setSourceEntity(218U);
    msg.setDestination(7109U);
    msg.setDestinationEntity(27U);
    msg.uid = 69U;
    msg.frag_number = 95U;
    msg.num_frags = 97U;
    const signed char tmp_msg_0[] = {-10, -80, 111, 86, 21, -107, -118, 120, -22, 94, -63, 1, 40, -54, 22, 98, -92, 14, 62, -55, 26, -60, 37, 17, 26, -72, -90, 87, 89, -11, 80, -19, -16, 77, -92, 21, -55, 63, 108, 77, 67, 52, -23, -120, -44, 73, -128, -119, -80, -65, -91, -112, 4, -65, 73, -50, 52, -123, -47, -81};
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
    msg.setTimeStamp(0.4270877988259919);
    msg.setSource(49960U);
    msg.setSourceEntity(211U);
    msg.setDestination(31223U);
    msg.setDestinationEntity(113U);
    msg.uid = 9U;
    msg.frag_number = 109U;
    msg.num_frags = 152U;
    const signed char tmp_msg_0[] = {-125, 32, -74, 118, 38, 121, -86, 29, -61, 126, 114, -83, 49, 7, 69, 119, 55, -14, 19, 37, 21, 47, 55, 105, -34, -110, -89, -25, -117, -40, -7, -7, -75, 112, 115, 2, 79, 18, 108, -38, -58, -41, -56, -128, 36, -59, 42, 44, 80, -116, 56, 23, -50, -69, -43, 53, 63, -2, -30, 23, 34, 116, 9, -97, -83, 102, 30, -80, 43, 84, -83, -126, 109, 74, -119, 99, 58, 74, -38, 115, -83, 51, -18, -73, 28, -95, -5, -35, 70, -68, 20, -7, 107, 120, -68, 42, 37, -65, 66, 103, -71, 8, 13, -126, -102, -43, 31, 109, -106, -98, -39, -94, -94, 30, -21, -98, -64, 16, -2, 115, 47, 71, -113, -99, -59, -112, 118, -103, -47, 113, 111, 80, 82, 4, 65, -93, 81, 19, 24, 33, 121, 30, -107, -122, 0, -119, 18, -21, 80, 3, 108, -100, -80, -33, 76, 52, 72, -72, -42, 25, 113, -13, 42, -121, -1, -84, 59, 95, -71, -125, -117, 103, 15, -42, -115, 101, 9, 44, 24, -50, 39, 76, 62, -110, -86, -27, -44, -57, 48, 104, 34, -111, 44, -63, -119, -111, 32, -87, 65, -76, 91, -18, -104, -39, -2, -83, -67, 107, 57, -126, 110, 104, 75, -93, -80, 88, 126, 8};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.7959849329175169);
    msg.setSource(17600U);
    msg.setSourceEntity(75U);
    msg.setDestination(3018U);
    msg.setDestinationEntity(186U);
    msg.uid = 52U;
    msg.op = 152U;
    msg.frag_ids.assign("DPSEDHPRAQPUOJRYRFMFHTRTVJEAAIKNQWYVWYMXNQHVKPIMMASNSWDBKXTKPLGXCTXGYHDPNFECGLOATJJZZDDLJBOFCLIRENMUSHNHEZPMDNLZKCWULNXUWWFTIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.651061130571425);
    msg.setSource(14964U);
    msg.setSourceEntity(112U);
    msg.setDestination(54180U);
    msg.setDestinationEntity(125U);
    msg.uid = 93U;
    msg.op = 193U;
    msg.frag_ids.assign("JBDLQDLRKBHZNHVOQTGUDWPBTGPIFQMGDRKVNASXEWFJQWOAODHONIPWFMOCLCEZKRITLGWRXIVTESJOVSUKLZINVTWDRXNJVNQTFZUAMPBQYQASDAROIXOCUERXEUVLZVFLTACDPLHQCTYMGFGGAZHTZFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.33107418161971913);
    msg.setSource(10072U);
    msg.setSourceEntity(0U);
    msg.setDestination(15890U);
    msg.setDestinationEntity(9U);
    msg.uid = 212U;
    msg.op = 136U;
    msg.frag_ids.assign("MGKEQEVDZSLYONGYOLYPCCZGSVJAALPKPEMXXNFHTTZMAINWNTQERAVBWTSMORFDIJGUNUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.0033315826335663656);
    msg.setSource(64476U);
    msg.setSourceEntity(3U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(147U);
    msg.content_type.assign("DBRXNDQNLLRWFHKOPWZTFIPHUEWAAJMNQAVIOWEWLZJETYRWVBNLWSLCMAUFRQRMTAXITBCPSMQMPCUZSYBBHSFZYLJMILOMXGEOCDVTGMGOVWDVPEXJOKK");
    const signed char tmp_msg_0[] = {25, -108, -114, 104, 94, 22, -25, -48, 86, -77, 90, -8, 15, -81, 51, -14, -17, -8, 95, -67, -108, -18, -2, -13, 42, 73, -93, 52, 52, 0, -81, -54, -67, 60, 85, -9, -97, -119, 45, -84, 125, 63, -44, 9, -48, 33, 9, 91, -125, 67, 88, -76, -88, 1, -91, -58, -73, -79, -2, -66, -126, -121, 101, -5, -82, -80, -27, 65, -18, -102, -63, 116, -14, 109, -4, -9, 59, 12, -61, 120, -46, -86, -110, -109, -77, -111, 119, -44, -2, 18, 23, -6, 79, 64, -84, 86, 34, 59, -11, -64, -88, 30, -118, 69, 82, 19, 85, 89, -20, -3, 40, -53, -112, 65, 83, 70, 116, -87, -128, -65, 64, -65, 33, 121, 3, -123, 82, 77, -69, -34, 70, 70, -56, -7, -53, -80, 108, -30, -38, 62, -61, -127, 8, 53, 48, -33, 116, -86, -105, 5, -100, -56, 77, 100, 94, -46, 10, -50, 22, 122, 73, 116, 5, 101, -12, 11, 23, 81, 20, -42, 55, -53, 80, 79, 70, 84, 43, -95, -106, -3, -67, 116, -31, 26, 36, 85, -27, 108, 124, -22, -18, 31, 122, 50, 112, 52, 18, -96, -51, -122, 93, 70, -95, -128, -37, -28, -105, 126, -101, -50, 20, 68, 114, 48, -49, 51, 50, -127, 2, -107, -16, 94, -48, -85, -38, 120, -102, 11, -48, 86, -123, 67, 4, -67, -89, 109};
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
    msg.setTimeStamp(0.042384276083702654);
    msg.setSource(45065U);
    msg.setSourceEntity(221U);
    msg.setDestination(6427U);
    msg.setDestinationEntity(160U);
    msg.content_type.assign("EWZWLJELBPVHPYZYXCHBMUNFFVQGGVGPEOEGBJTTFROBQXQSDXDPCEIQLJSQUYOLRDZSGWLVDWAMCKKARIUFOISRHYLRTJHGSIBAGITMGOFNNZKDUIZAGKXTSEGCEJOMSJUFC");
    const signed char tmp_msg_0[] = {50, -64, -116, -56, -83, -94, 8, 37, -56, 35, -108, 71, -100, 50, -85, -49, 87, 14, 46, 39, 33, -100, -62, 31, 113, 109, -36, 91, 115, -22, 38, -11, -93, -42, 43, 106, -70, -60, 1, 54, 74, 64, -106, 91, 102, -85, -73, 111, 96, -78, -111, -119, 2, -114, 48, -31, -70, -73, -11, -63, 95, -82, -7, -84, -102, 107, -1, 83, -29, 17, 56, 119, -85, -64, -128, 0, -114, 124, -47, 52, -34, 82, 54, 55, -116, -27, 123, -62, -119, 19, -84, 107, 101, 96, -11, 33, -28, -59, 32, 87, 36, 119, -21, 2, -95, -92, -107, -82, -93, -75, 37, 36, -7, -97, -79, 101, -53, -120, -128, 123, -110, 56, 1, 108, -88, -40, 72, -57, 45, -66, -101, 6, 31, -64, -105, 117, -14, -28, 28, 95, -106, 100, -77, -55, -115, 4, 14, -117, 55, 30, 114, -11, 24, 6, -106, 124, -118, -67, -17, 80, -50, -69, -98, 85, -10, -55, 5, 67, 1, -49, 64, -14, 123, -68, -119, 50, -29, 28, -96, -103, -76, 79, -82, 25, -103, 116, 100, -34, -119, 58, -54, -77, 50, -89, 28, 81, -54, -12, 80, -75, 120, -17, 119, -71, 57, -52, -116, -34, 47, -86, 57, 125, -26, 26, 2, 52, -75, 97, 72, 92, -23, -22, 37, -33, -99, -5, -35, 35, -90, 52, -88, -73};
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
    msg.setTimeStamp(0.02533711923025883);
    msg.setSource(2095U);
    msg.setSourceEntity(105U);
    msg.setDestination(4446U);
    msg.setDestinationEntity(65U);
    msg.content_type.assign("BAVJIWYKHMZTLIRNRNZKCNVNIKYZLJZPCZJKWIEZIGBJTVEKASYZQTNCESBTMOCFMHMUOTJVXGVUQSCHFLJOJMSIPDNTFXNUXRDINQEFIOWEUKMKWWLVFELRIHFGXFBQOGLFUXCBAGHYQKEUMUEPUACEGKWFODVGJWFQXBRZVXARDTXPKYBHXGLQBDMZBLSPUATMADQSQSGHZCSRH");
    const signed char tmp_msg_0[] = {-105, 68, -98, -36, 45, 38, -4, 29, 24, 122, -50, -111, 22, 70, 10, 117, -85, 76, 40, 86, 67, -20, -101, -99, 87, 118, 0, 10, -26, 28, 21, 15, 37, -75, 39, 79, -71, -94, 36, -42, -51, -34, -84, -17, -12, 88, -60, 71, 47, -24, -42, -93, -126, 33, 2, -41, -20, -74, -82, 24, 73, 32, -5, -114, 26, -6, 21, -64, -118, -127, 23, -22, -93, 108, 11, 13, -30, 108, 73, 96, 93, 71, -2, -115, -111, -74, -21, 85, -47, 90, 59, 85, -97, -63, -37, 119, -11, 122, -89, -72, -32, 16, 121, -57, -21, -71, -62, 5, 31, 49, 41, -63, -53, -21, -48, -60, -20, -105, 89, 123, 98, -128, 54, 124, -23, 126, 35, 26, -64, -95, -47, -79, 114, -74, 7, -68, 110, 3, -49, -38, -99, -48, 49, 60, 56, -75, -73, -79, 88, -25, 50, -2, -85, -72};
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
    msg.setTimeStamp(0.5130197814912605);
    msg.setSource(37552U);
    msg.setSourceEntity(227U);
    msg.setDestination(43680U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.6541372761633576);
    msg.setSource(14319U);
    msg.setSourceEntity(17U);
    msg.setDestination(62753U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.028957149914763614);
    msg.setSource(62242U);
    msg.setSourceEntity(170U);
    msg.setDestination(64238U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.5167338028306295);
    msg.setSource(27026U);
    msg.setSourceEntity(77U);
    msg.setDestination(51013U);
    msg.setDestinationEntity(65U);
    msg.target = 22103U;
    msg.bearing = 0.6462162639323937;
    msg.elevation = 0.5262642722569603;

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
    msg.setTimeStamp(0.2490858389920464);
    msg.setSource(4825U);
    msg.setSourceEntity(69U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(237U);
    msg.target = 52043U;
    msg.bearing = 0.06821746298468956;
    msg.elevation = 0.2228074054612018;

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
    msg.setTimeStamp(0.15055511311242076);
    msg.setSource(44724U);
    msg.setSourceEntity(228U);
    msg.setDestination(57008U);
    msg.setDestinationEntity(207U);
    msg.target = 45558U;
    msg.bearing = 0.7634046343882904;
    msg.elevation = 0.7665786727480319;

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
    msg.setTimeStamp(0.513647991676124);
    msg.setSource(37373U);
    msg.setSourceEntity(209U);
    msg.setDestination(48653U);
    msg.setDestinationEntity(180U);
    msg.target = 22850U;
    msg.x = 0.021192585084978455;
    msg.y = 0.6298301767617224;
    msg.z = 0.837800355728476;

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
    msg.setTimeStamp(0.4739155799229552);
    msg.setSource(28365U);
    msg.setSourceEntity(94U);
    msg.setDestination(5419U);
    msg.setDestinationEntity(231U);
    msg.target = 60479U;
    msg.x = 0.09456302612089118;
    msg.y = 0.9938982448619932;
    msg.z = 0.8079176967320277;

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
    msg.setTimeStamp(0.9184977285493428);
    msg.setSource(14086U);
    msg.setSourceEntity(108U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(124U);
    msg.target = 20610U;
    msg.x = 0.3689856734101975;
    msg.y = 0.20865178669120932;
    msg.z = 0.7729064917155075;

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
    msg.setTimeStamp(0.3458617967469785);
    msg.setSource(2888U);
    msg.setSourceEntity(182U);
    msg.setDestination(24396U);
    msg.setDestinationEntity(47U);
    msg.target = 33493U;
    msg.lat = 0.01195226946776684;
    msg.lon = 0.07919392176622342;
    msg.z_units = 134U;
    msg.z = 0.2288333134238899;

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
    msg.setTimeStamp(0.5123452276645379);
    msg.setSource(42083U);
    msg.setSourceEntity(89U);
    msg.setDestination(53527U);
    msg.setDestinationEntity(158U);
    msg.target = 31360U;
    msg.lat = 0.7885044645262785;
    msg.lon = 0.29389323959108005;
    msg.z_units = 74U;
    msg.z = 0.2813044501435259;

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
    msg.setTimeStamp(0.6177133268128397);
    msg.setSource(44173U);
    msg.setSourceEntity(141U);
    msg.setDestination(60155U);
    msg.setDestinationEntity(36U);
    msg.target = 12222U;
    msg.lat = 0.11641603640754927;
    msg.lon = 0.7022047119680315;
    msg.z_units = 100U;
    msg.z = 0.1707234397211147;

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
    msg.setTimeStamp(0.5214597182314631);
    msg.setSource(18512U);
    msg.setSourceEntity(244U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(45U);
    msg.locale.assign("MYWAFLDKUXCSHLPQZXKOOKIZZGBUXODABQSLHZWNWDGRUOLTSUCVFIMFNCWBGODUPXFVXFKCRGJHYHHVNRSIUMQZEKCOWISAXDZTKSLWAIDORNNEUPVMYWZBIBVEPQBLLVNXGYKAEBUQNASJKVPPOJQRZBRXZIZQOJJUCIFYDGLJFMQCMHWQJIHTPDMMLBFNFYSFUYVBVNSRGTEREAVIYCTYEPAMTHTTMGHXRNEPLDA");
    const signed char tmp_msg_0[] = {19, -20, 50, -66, -56, 27, 45, -92, -71, 77, -65, 100, 28, 67, 52, 32, -35, -57, 75, -115, -54, -18, -87, -25, -95, -105, -72, -102, 15, 48, -126, -2, 63, 2, 88, -50, 38, -79, 126, -120, 24, 96, -46, 96, -61, 20, 77, 2, -113, 110, -113, 42, -36, -105, 89, 89, 46, 17, -19, -31, 68, -50, 25, 9, 80, 118, -128, 24, 116, -49, -24, 111, -72};
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
    msg.setTimeStamp(0.443579206729253);
    msg.setSource(28666U);
    msg.setSourceEntity(134U);
    msg.setDestination(35507U);
    msg.setDestinationEntity(75U);
    msg.locale.assign("ZMYADGUJUIAQPANELYNVYWYHDCTDCQGCCMRLKSTHOWYEVBAMZUQHYDMVEGTEHLSKPQWEHFMFLTLHICDFFLQGCOIRNEOTZCFUYSJWPPIZN");
    const signed char tmp_msg_0[] = {64, 14, -14, -69, 120, -21, 34, 118, 9, 15, -36, 95, 51, 20, 69, -104, -125, -49, -18, -47, -33, -106, 102, -12, 53, -106, 80, 6, 19, -106, 79, 109, 67, -3, -15, -112, -8, -34, 0, 113, -12, 119, 85, 80, -85, 118, -21, -21, 44, -122, 23, -42, 77, -87, -103, 92, -86, 39, 102, -74, -64, 1, 112, 18, -60, -43, 82, -127, -109, 68, -124, -77, -10, 12, 104, 82, -117, 88, 6, 43, 12, 12, -29, -41, -105, -22, 6, 91, 90, 29, -117, -110, -88, -57, -39, 50, -55, 37, -58, 68, -109, -55};
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
    msg.setTimeStamp(0.8043162874493333);
    msg.setSource(10739U);
    msg.setSourceEntity(73U);
    msg.setDestination(29638U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("PORDVFYCHWLOYSAWSVRXIBGBUAPRRELDWGECXHTVHXQNWZLXJUGRDATAFBKCMHDOPLDTVXVYETHYKAQDDFIUURKCBHBLNOQSMSTJQAJWMYPETBZLDBMCQJW");
    const signed char tmp_msg_0[] = {-14, 126, -10, 3, -18, -64, 36, -56, -49, -74, 92, -6, 99, -109, 52, -14, 101, 108, -88, 10, 79, 121, 87, -91, -49, 24, -69, 63, 16, -46, 49, -56, -56, -58, -17, -28, -14, -37, -123, -1, -77, 32, 105, -7, 87, -64, 22, 71, -73, 7, 55, 69, 103, -121, -32, -96, 45, -63, -81, 13, -109, -11, 43, -112, 77, -99, 62, -57, 122, 88, 19, -30, -50, -67, 97, 46, 98, 106, 120, -57, -85, 120, 11, 67, -12, -6, -94, 51, 4, 54, 86, 34, -72, -27, 96, -41, 101, 67, 59, 109, -50, 84, 53, 10, 60, -50, 71, 111, -93, 96, 57, -88, -14, -51, -70, -115, 95, 1, -9, -114, -127, 79, 3, 49, 73, -56, -18, 123, -107, -77, 43, 83, 12, -117, 9};
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
    msg.setTimeStamp(0.8150448563156014);
    msg.setSource(20075U);
    msg.setSourceEntity(26U);
    msg.setDestination(19528U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.7059885420338782);
    msg.setSource(48832U);
    msg.setSourceEntity(119U);
    msg.setDestination(64227U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.4610396176041389);
    msg.setSource(7127U);
    msg.setSourceEntity(57U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.0038167925647710765);
    msg.setSource(60889U);
    msg.setSourceEntity(104U);
    msg.setDestination(31416U);
    msg.setDestinationEntity(90U);
    msg.camid = 117U;
    msg.x = 45319U;
    msg.y = 49590U;

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
    msg.setTimeStamp(0.10537891090086693);
    msg.setSource(14609U);
    msg.setSourceEntity(74U);
    msg.setDestination(60408U);
    msg.setDestinationEntity(80U);
    msg.camid = 142U;
    msg.x = 3597U;
    msg.y = 36966U;

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
    msg.setTimeStamp(0.629334412574135);
    msg.setSource(64270U);
    msg.setSourceEntity(233U);
    msg.setDestination(37523U);
    msg.setDestinationEntity(229U);
    msg.camid = 94U;
    msg.x = 28258U;
    msg.y = 58615U;

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
    msg.setTimeStamp(0.7750837824788894);
    msg.setSource(46683U);
    msg.setSourceEntity(95U);
    msg.setDestination(46365U);
    msg.setDestinationEntity(68U);
    msg.camid = 9U;
    msg.x = 22945U;
    msg.y = 39498U;

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
    msg.setTimeStamp(0.53155459312557);
    msg.setSource(51932U);
    msg.setSourceEntity(29U);
    msg.setDestination(26968U);
    msg.setDestinationEntity(99U);
    msg.camid = 184U;
    msg.x = 9212U;
    msg.y = 56102U;

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
    msg.setTimeStamp(0.5134034546586418);
    msg.setSource(7256U);
    msg.setSourceEntity(122U);
    msg.setDestination(5248U);
    msg.setDestinationEntity(216U);
    msg.camid = 180U;
    msg.x = 63966U;
    msg.y = 16907U;

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
    msg.setTimeStamp(0.1439840075162644);
    msg.setSource(8289U);
    msg.setSourceEntity(201U);
    msg.setDestination(28326U);
    msg.setDestinationEntity(27U);
    msg.tracking = 165U;
    msg.lat = 0.30956816504379925;
    msg.lon = 0.11048270238325808;
    msg.x = 0.5731376652942831;
    msg.y = 0.009445746935365151;
    msg.z = 0.6216661437595653;

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
    msg.setTimeStamp(0.13424305713118145);
    msg.setSource(7849U);
    msg.setSourceEntity(26U);
    msg.setDestination(34538U);
    msg.setDestinationEntity(62U);
    msg.tracking = 58U;
    msg.lat = 0.2745826141672435;
    msg.lon = 0.23396968256848016;
    msg.x = 0.5503353555702368;
    msg.y = 0.7182182555242755;
    msg.z = 0.3258465479728928;

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
    msg.setTimeStamp(0.8867858898178009);
    msg.setSource(6658U);
    msg.setSourceEntity(219U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(217U);
    msg.tracking = 179U;
    msg.lat = 0.6277574422341166;
    msg.lon = 0.5600880593842229;
    msg.x = 0.21081527093588337;
    msg.y = 0.6726179347560989;
    msg.z = 0.6904985159237289;

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
    msg.setTimeStamp(0.703808822250106);
    msg.setSource(29627U);
    msg.setSourceEntity(195U);
    msg.setDestination(27905U);
    msg.setDestinationEntity(88U);
    msg.target.assign("MULCBMKHCATZJHRWGIKRLXZJYOXSYYINYPMOMXRAHXGHFWDUCGQBKCYNIOECFGQGACFKDSUPCHKRPYAUGYDQRZLUMNQNOGSJXFIPILYJDZVTBVSWBAEIEWRXAOKFQRNWEQHEMAVRISXTLCWKWBSCNUBLVICLPINZQZVKTSVJNEOFGGXZPHYLVJAFPYEMUWEUTEWWSMLBTBXDDQFPVOJFASPBQXOMTJHDVTNPDEVQTOZBJMRSZFHLARKODIZD");
    msg.lbearing = 0.5020014666601049;
    msg.lelevation = 0.2879609904365218;
    msg.bearing = 0.177969839684735;
    msg.elevation = 0.6754962384692634;
    msg.phi = 0.01951187016499667;
    msg.theta = 0.22005168735795944;
    msg.psi = 0.24002814694054553;
    msg.accuracy = 0.6283962427865293;

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
    msg.setTimeStamp(0.8822123710433705);
    msg.setSource(16029U);
    msg.setSourceEntity(80U);
    msg.setDestination(8198U);
    msg.setDestinationEntity(144U);
    msg.target.assign("NBJIPPXJQODAGHYTKLWVHRBQXBYJBGRKTCZPFDFCQKXDNPOTFBLIRQJFGWBOEGZJIUWGCPHEUSRIQNLNMKZVFHUYA");
    msg.lbearing = 0.3335733389522475;
    msg.lelevation = 0.9808155662003469;
    msg.bearing = 0.21146924053791138;
    msg.elevation = 0.6238915489987468;
    msg.phi = 0.8584042547041201;
    msg.theta = 0.2621767614607349;
    msg.psi = 0.8884854087205456;
    msg.accuracy = 0.6116782703483727;

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
    msg.setTimeStamp(0.6237196362212439);
    msg.setSource(13933U);
    msg.setSourceEntity(63U);
    msg.setDestination(59131U);
    msg.setDestinationEntity(34U);
    msg.target.assign("PPSEABDEBOXKYQQUMWRBZATODLAFKDVUHRIGGCYOZCKHCTXGJOFKQWIVMEKIZIICWAQZORANPBRWZPHWYASJSFHBMOESTVQDVHXKMPUBLWCRBYXSZJHRUTYVSDMXWLIXJINPUYEGCUDXSXILTTHYFUDRNLTMIEKUANPORBYFUADH");
    msg.lbearing = 0.08077420457995976;
    msg.lelevation = 0.809968648615051;
    msg.bearing = 0.4656863735328165;
    msg.elevation = 0.015033423305885751;
    msg.phi = 0.32664715483228646;
    msg.theta = 0.9013094707403948;
    msg.psi = 0.8479863877850107;
    msg.accuracy = 0.6395899526501779;

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
    msg.setTimeStamp(0.38397969313530134);
    msg.setSource(33131U);
    msg.setSourceEntity(235U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(63U);
    msg.target.assign("KQOAENGSQEUQLBDVSILJCYIEDNUFNYUVJTJIIOXLGTVB");
    msg.x = 0.7570901955317461;
    msg.y = 0.09644113988234604;
    msg.z = 0.7704010322125997;
    msg.n = 0.4920569730475024;
    msg.e = 0.3721931221644985;
    msg.d = 0.09674426885070853;
    msg.phi = 0.431197087181012;
    msg.theta = 0.26439333683947286;
    msg.psi = 0.04651510416907367;
    msg.accuracy = 0.25872750861631555;

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
    msg.setTimeStamp(0.4698422927103829);
    msg.setSource(65373U);
    msg.setSourceEntity(144U);
    msg.setDestination(46731U);
    msg.setDestinationEntity(128U);
    msg.target.assign("FSANZTGYOZYXVPDIBOJWYDWURMHUARDTEPKKWTVBPXKXDYWLOVNSEXOSCCGDGVFKFZYDXEPS");
    msg.x = 0.11520737943146309;
    msg.y = 0.22252508019667017;
    msg.z = 0.8647365131888215;
    msg.n = 0.3339702865970722;
    msg.e = 0.908393165001963;
    msg.d = 0.1247742632014075;
    msg.phi = 0.5370603882208884;
    msg.theta = 0.424530413119387;
    msg.psi = 0.851782770927867;
    msg.accuracy = 0.390278114872449;

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
    msg.setTimeStamp(0.5039792099648304);
    msg.setSource(51360U);
    msg.setSourceEntity(39U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(156U);
    msg.target.assign("MUUZIBVWZDFIVTIBQERSOKKMKDDNSOUALPMYMDSQTENZNHIRPUWCSHNRNMXLVEPCMLBHXNASXKBZCCRYHSXLJQVUGWHOQWXYDJLBTEQKOLSLITZORPFAHLKAOGAYGGXZPDXRIVGTQHIVNFNIGQFLJHRVONZHATJJEUFGTXQJPWIXXYBEDERKMYJQDRQHPOIZKYWGWZCTEBJJUCCFJYPAWUKNBFVMVDCFVCPKBZWSUBGUTOMRFAYAMW");
    msg.x = 0.8644688069050508;
    msg.y = 0.19525502723390908;
    msg.z = 0.1973197352183258;
    msg.n = 0.8259022144311912;
    msg.e = 0.027401561088179593;
    msg.d = 0.6573172365246394;
    msg.phi = 0.12465214015181114;
    msg.theta = 0.04701900215742838;
    msg.psi = 0.3082131067588546;
    msg.accuracy = 0.6893473179597793;

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
    msg.setTimeStamp(0.7194397097450139);
    msg.setSource(45911U);
    msg.setSourceEntity(213U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(30U);
    msg.target.assign("OSGIMDOVAJYHSYILJWACJHKZPQBPEIUSLUEMQYCLCOFNFLSUDFSOVDEMMWPJMVSCMYJPUTEGHWLXGUORBVGCENRLVQKTBIVEGSCTXWPQHYGXQFAKRLGHWPXIZOFKJBRLZGSDUARKOBNF");
    msg.lat = 0.36734977498493315;
    msg.lon = 0.723315972737139;
    msg.z_units = 125U;
    msg.z = 0.6978339091070112;
    msg.accuracy = 0.9499264818911796;

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
    msg.setTimeStamp(0.7312364220049246);
    msg.setSource(9148U);
    msg.setSourceEntity(160U);
    msg.setDestination(55257U);
    msg.setDestinationEntity(213U);
    msg.target.assign("KEQTCGFPBUIGPNDOCZMIINBKKLXEJJVJDNQFQYWJKZRDVZZMQUBANEMNPXHUHUKSXAOZHSRFGMPSVGEDNTPEQTZFIVLLXHSCLNSHJKFMLUMFWPWBDFLYAYLYVSCQCTPPBSTQCNSOTWEOWERGBVYGOQXSNDZRY");
    msg.lat = 0.12693267118613583;
    msg.lon = 0.6990467764281186;
    msg.z_units = 216U;
    msg.z = 0.4796637715871921;
    msg.accuracy = 0.39485257126151296;

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
    msg.setTimeStamp(0.12552945735477516);
    msg.setSource(37222U);
    msg.setSourceEntity(157U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(124U);
    msg.target.assign("JYITZAXEQKFMOZGPOZEULFAIRMETLTGNRABTZSXP");
    msg.lat = 0.9474240316366531;
    msg.lon = 0.1234276808702125;
    msg.z_units = 106U;
    msg.z = 0.6602692762838053;
    msg.accuracy = 0.02463819638686715;

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
    msg.setTimeStamp(0.4334551696543183);
    msg.setSource(41510U);
    msg.setSourceEntity(176U);
    msg.setDestination(64988U);
    msg.setDestinationEntity(127U);
    msg.name.assign("NXQXMQWMXFFNQQFTZWNUEQKZBXQTMTVHRPRQZWIOIMDPXKYCMSNDUPHGECD");
    msg.lat = 0.7527552834998924;
    msg.lon = 0.8756170082997671;
    msg.z = 0.6342635346612625;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.911164279879493);
    msg.setSource(37442U);
    msg.setSourceEntity(158U);
    msg.setDestination(62613U);
    msg.setDestinationEntity(129U);
    msg.name.assign("PUOYTOHYPRCMQMVCTRSEWUPTYSUBIKURNVGNXHZEZCLYSJQGWBINCZJAOAYKSDJQEHQOXETBKPMCUDVIXORSUANFPVNQZCRSLQVFWZFHHQZRPLMVSLIDKTWTOWZBKSXBKFRDJXNMCTERHTKNQFLIGIEOY");
    msg.lat = 0.6084553835874311;
    msg.lon = 0.11665042139772475;
    msg.z = 0.41393249560584255;
    msg.z_units = 30U;

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
    msg.setTimeStamp(0.6642151201648576);
    msg.setSource(31725U);
    msg.setSourceEntity(150U);
    msg.setDestination(59339U);
    msg.setDestinationEntity(112U);
    msg.name.assign("QWSDHNZKEUDVUIAPEXYEEALHANDBBKOCCZJJZNHCSUHFPIRVEQLUVXGIDNVMGJEQTWMVCLLNOGPXJTHA");
    msg.lat = 0.3036460050729768;
    msg.lon = 0.2541181697162117;
    msg.z = 0.683758005972568;
    msg.z_units = 169U;

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
    msg.setTimeStamp(0.15288423909774285);
    msg.setSource(38037U);
    msg.setSourceEntity(152U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(156U);
    msg.op = 158U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EFIFAWWINGRYKZHBGSFTUKKJHVISOCADHGEHDMUZYXDISRGVIIGBWJTRWKJPAMGVZZRLRRFWKYQLNCOUXPGWNOXRXKPMXJCDCUSUWKYQHLNEAEVMEXEVAVUMQFNFABQMNPYPJKSNGHQNQDZSYEPVUHKGCBDTTJROLYCZMLW");
    tmp_msg_0.lat = 0.8414592434899276;
    tmp_msg_0.lon = 0.6061879228847645;
    tmp_msg_0.z = 0.936279492998778;
    tmp_msg_0.z_units = 37U;
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
    msg.setTimeStamp(0.6474489871523111);
    msg.setSource(53498U);
    msg.setSourceEntity(22U);
    msg.setDestination(13248U);
    msg.setDestinationEntity(63U);
    msg.op = 128U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QXAHDDFULSXLUTHYPABBFBLCXJQLNHOTRLQWOJEINSYEKXPCWPEFDGPIRFKPQWCLQSYGILKVIPCRHFBGMGGOLUEVTVSSDTYIMEANDMMWWRXCTNOFPNMHJWRAEYZKFTUJCDNOFEDMVEZSBVGTOHYCWDUVUMQQPHRAESNPBKZCOBKHWGUZEBGJZZOQYBUVGKKUQVNKJSDPJKWIX");
    tmp_msg_0.lat = 0.23204858760212366;
    tmp_msg_0.lon = 0.05501536827195119;
    tmp_msg_0.z = 0.18180509392182298;
    tmp_msg_0.z_units = 62U;
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
    msg.setTimeStamp(0.5706363885952807);
    msg.setSource(16488U);
    msg.setSourceEntity(134U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(195U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.6371632044752431);
    msg.setSource(35953U);
    msg.setSourceEntity(217U);
    msg.setDestination(54268U);
    msg.setDestinationEntity(248U);
    msg.value = 0.24234730453203746;
    msg.type = 30U;

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
    msg.setTimeStamp(0.645409236855553);
    msg.setSource(9200U);
    msg.setSourceEntity(160U);
    msg.setDestination(37697U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9963989911444754;
    msg.type = 150U;

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
    msg.setTimeStamp(0.5197624354234482);
    msg.setSource(30465U);
    msg.setSourceEntity(58U);
    msg.setDestination(1276U);
    msg.setDestinationEntity(123U);
    msg.value = 0.24853511094120506;
    msg.type = 2U;

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
    msg.setTimeStamp(0.9518666727691291);
    msg.setSource(28145U);
    msg.setSourceEntity(234U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(202U);
    msg.value = 0.12701832086467146;

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
    msg.setTimeStamp(0.6570009678810942);
    msg.setSource(7498U);
    msg.setSourceEntity(53U);
    msg.setDestination(20729U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8737756213462365;

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
    msg.setTimeStamp(0.41148869733406634);
    msg.setSource(59632U);
    msg.setSourceEntity(231U);
    msg.setDestination(61041U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6993595836607428;

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
    msg.setTimeStamp(0.055465378441791335);
    msg.setSource(63733U);
    msg.setSourceEntity(194U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(246U);
    msg.timestamp_last_service = 0.37650361032127044;
    msg.time_next_service = 0.7511108634714808;
    msg.time_motor_next_service = 0.5995051145522589;
    msg.time_idle_ground = 0.8860650487159708;
    msg.time_idle_air = 0.18174700260765686;
    msg.time_idle_water = 0.6845182360406827;
    msg.time_idle_underwater = 0.7584869665990693;
    msg.time_idle_unknown = 0.474039860983111;
    msg.time_motor_ground = 0.9516825394477849;
    msg.time_motor_air = 0.1427914986802008;
    msg.time_motor_water = 0.4162974688307661;
    msg.time_motor_underwater = 0.9019568880390911;
    msg.time_motor_unknown = 0.9598951431462712;
    msg.rpm_min = -28905;
    msg.rpm_max = 11119;
    msg.depth_max = 0.08306120521954108;

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
    msg.setTimeStamp(0.5695247879565336);
    msg.setSource(21253U);
    msg.setSourceEntity(109U);
    msg.setDestination(16456U);
    msg.setDestinationEntity(6U);
    msg.timestamp_last_service = 0.9005173530506173;
    msg.time_next_service = 0.47158600374036497;
    msg.time_motor_next_service = 0.6095740397913051;
    msg.time_idle_ground = 0.9559945624250517;
    msg.time_idle_air = 0.7505902960714932;
    msg.time_idle_water = 0.9044637375521178;
    msg.time_idle_underwater = 0.28041669440116934;
    msg.time_idle_unknown = 0.9344082286718696;
    msg.time_motor_ground = 0.5575651888967372;
    msg.time_motor_air = 0.010484204434594524;
    msg.time_motor_water = 0.7081982001073394;
    msg.time_motor_underwater = 0.08474641753606493;
    msg.time_motor_unknown = 0.5504837078782019;
    msg.rpm_min = -12768;
    msg.rpm_max = 18261;
    msg.depth_max = 0.3463322713779017;

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
    msg.setTimeStamp(0.23021855764333576);
    msg.setSource(37370U);
    msg.setSourceEntity(55U);
    msg.setDestination(59496U);
    msg.setDestinationEntity(25U);
    msg.timestamp_last_service = 0.7915549474030006;
    msg.time_next_service = 0.22859299291127844;
    msg.time_motor_next_service = 0.3336226033691141;
    msg.time_idle_ground = 0.49382433181122243;
    msg.time_idle_air = 0.3776297852471747;
    msg.time_idle_water = 0.0255900590369883;
    msg.time_idle_underwater = 0.517694782835041;
    msg.time_idle_unknown = 0.6965118679801919;
    msg.time_motor_ground = 0.0556682613901357;
    msg.time_motor_air = 0.3714887342238865;
    msg.time_motor_water = 0.2701858389798917;
    msg.time_motor_underwater = 0.23445127097011254;
    msg.time_motor_unknown = 0.6997004743502204;
    msg.rpm_min = -26455;
    msg.rpm_max = 2896;
    msg.depth_max = 0.430267450528414;

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
    msg.setTimeStamp(0.05270826606247381);
    msg.setSource(16499U);
    msg.setSourceEntity(218U);
    msg.setDestination(4282U);
    msg.setDestinationEntity(189U);
    msg.severity = 1U;
    msg.text.assign("LHSREGSQIALISLRCXFJBCXMFADTUOJHUVFRZAAAXURNAILRKCKRWWDXJHQOQWWTBIWMDCUPBZPAYRCQFVNGBQLORXQOJL");

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
    msg.setTimeStamp(0.8752562774871188);
    msg.setSource(6359U);
    msg.setSourceEntity(60U);
    msg.setDestination(20040U);
    msg.setDestinationEntity(67U);
    msg.severity = 173U;
    msg.text.assign("TOEGIJYAWCTFFXTYIXZUEDMAZWTLSIYXCQDFXPBFCVMYMUIMQBNPJZRGCB");

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
    msg.setTimeStamp(0.022330065934865417);
    msg.setSource(8724U);
    msg.setSourceEntity(218U);
    msg.setDestination(12138U);
    msg.setDestinationEntity(202U);
    msg.severity = 176U;
    msg.text.assign("ELUUOTILNGYCQBXXJWPUANDWYFLQHMYTULACDZDEATQZOIECXQADKTKYTBGQIMKVMPIVPLUZFHZHHXLMDTBODPLATLARHBIQVOFPASQPKZMWPZDQEFDWJSG");

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
    msg.setTimeStamp(0.9277955925358062);
    msg.setSource(41104U);
    msg.setSourceEntity(252U);
    msg.setDestination(20783U);
    msg.setDestinationEntity(89U);
    msg.channel = -51;
    msg.value = 1724948881;
    msg.gain = 119U;

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
    msg.setTimeStamp(0.04656013159790895);
    msg.setSource(65288U);
    msg.setSourceEntity(227U);
    msg.setDestination(63076U);
    msg.setDestinationEntity(180U);
    msg.channel = -128;
    msg.value = -1438164644;
    msg.gain = 224U;

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
    msg.setTimeStamp(0.12065290545158314);
    msg.setSource(64360U);
    msg.setSourceEntity(186U);
    msg.setDestination(24871U);
    msg.setDestinationEntity(172U);
    msg.channel = -62;
    msg.value = 1398077131;
    msg.gain = 28U;

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
    msg.setTimeStamp(0.3964665192117339);
    msg.setSource(16312U);
    msg.setSourceEntity(16U);
    msg.setDestination(19383U);
    msg.setDestinationEntity(225U);
    msg.ch01 = 0.6953344690712908;
    msg.ch02 = 0.18871346374387366;
    msg.ch03 = 0.6514009327972926;
    msg.ch04 = 0.20338488868593585;
    msg.ch05 = 0.4679222338592933;
    msg.ch06 = 0.49952921413635276;
    msg.ch07 = 0.8489386379609593;
    msg.ch08 = 0.6487233551658607;
    msg.ch09 = 0.12698238866210343;
    msg.ch10 = 0.8691675786455095;
    msg.ch11 = 0.0804786230822434;
    msg.ch12 = 0.9195057398962299;
    msg.ch13 = 0.49252458433823776;
    msg.ch14 = 0.2520749148918501;
    msg.ch15 = 0.20995041724507146;
    msg.ch16 = 0.09641569695525054;

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
    msg.setTimeStamp(0.5265028509981163);
    msg.setSource(23877U);
    msg.setSourceEntity(250U);
    msg.setDestination(35414U);
    msg.setDestinationEntity(218U);
    msg.ch01 = 0.08323560347296133;
    msg.ch02 = 0.34269495659258686;
    msg.ch03 = 0.6240310383008698;
    msg.ch04 = 0.7295602723485752;
    msg.ch05 = 0.3450175621625423;
    msg.ch06 = 0.05512113281362585;
    msg.ch07 = 0.7562663495029414;
    msg.ch08 = 0.6614473985105893;
    msg.ch09 = 0.313005595442017;
    msg.ch10 = 0.8537397102536447;
    msg.ch11 = 0.8242560411361887;
    msg.ch12 = 0.25498712021349534;
    msg.ch13 = 0.4872743523624371;
    msg.ch14 = 0.27287998140503855;
    msg.ch15 = 0.3730397038835134;
    msg.ch16 = 0.6317332863727247;

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
    msg.setTimeStamp(0.8352816635915459);
    msg.setSource(39027U);
    msg.setSourceEntity(100U);
    msg.setDestination(43256U);
    msg.setDestinationEntity(29U);
    msg.ch01 = 0.7421456915980245;
    msg.ch02 = 0.9701002364589613;
    msg.ch03 = 0.1080965441214089;
    msg.ch04 = 0.509670158379849;
    msg.ch05 = 0.7198345052507615;
    msg.ch06 = 0.513090598990502;
    msg.ch07 = 0.6760710128142463;
    msg.ch08 = 0.6156681576252689;
    msg.ch09 = 0.8131747672914008;
    msg.ch10 = 0.16113506225667318;
    msg.ch11 = 0.0782306130818019;
    msg.ch12 = 0.6620035779567437;
    msg.ch13 = 0.9549318950329343;
    msg.ch14 = 0.6978712008253847;
    msg.ch15 = 0.12515281249673293;
    msg.ch16 = 0.9702409145581276;

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
    msg.setTimeStamp(0.4600975463604192);
    msg.setSource(13464U);
    msg.setSourceEntity(126U);
    msg.setDestination(42729U);
    msg.setDestinationEntity(228U);
    msg.op = 19U;
    msg.lat = 0.7642160008007994;
    msg.lon = 0.3786870798399957;
    msg.height = 0.2589051801900124;
    msg.depth = 0.26797991127975995;
    msg.alt = 0.9456443405826378;

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
    msg.setTimeStamp(0.9167686684508602);
    msg.setSource(64274U);
    msg.setSourceEntity(98U);
    msg.setDestination(22963U);
    msg.setDestinationEntity(140U);
    msg.op = 184U;
    msg.lat = 0.2707556408798374;
    msg.lon = 0.4638798818412515;
    msg.height = 0.8789752843464657;
    msg.depth = 0.9636710471843062;
    msg.alt = 0.643025690061821;

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
    msg.setTimeStamp(0.9309964220766613);
    msg.setSource(48399U);
    msg.setSourceEntity(166U);
    msg.setDestination(58254U);
    msg.setDestinationEntity(174U);
    msg.op = 126U;
    msg.lat = 0.9270397412021304;
    msg.lon = 0.9975749116277189;
    msg.height = 0.33856699781394817;
    msg.depth = 0.9056969253970564;
    msg.alt = 0.8931617112248059;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.04054687593654205);
    msg.setSource(50589U);
    msg.setSourceEntity(236U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(1U);
    msg.direction = 0.864509802340605;
    msg.speed = 0.41405596261184185;
    msg.turbulence = 0.003170694601618229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.3134253378492107);
    msg.setSource(5179U);
    msg.setSourceEntity(92U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(184U);
    msg.direction = 0.6170812235277;
    msg.speed = 0.3869086480596623;
    msg.turbulence = 0.5453976038015439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.2230057091680645);
    msg.setSource(6399U);
    msg.setSourceEntity(18U);
    msg.setDestination(61214U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.6091210855935532;
    msg.speed = 0.9067550295564322;
    msg.turbulence = 0.2680646499790855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.5856440393924526);
    msg.setSource(24779U);
    msg.setSourceEntity(58U);
    msg.setDestination(37511U);
    msg.setDestinationEntity(112U);
    msg.msg_type.assign("FGATZHWUYFZWIDTWMQCUICONJBOWL");
    msg.sensor_class.assign("QKAQKVCIIARFKXOLHHYUGRPVEXLTXENQGYKVMEMBCPVYIYQGVOIZVQLHTSFUDAZLIJNNTDGPLWAMVXJEXRESXBSSNYVXFMGNCUAFXXTECFWISKJJMESEZGPAAEPJQBRBPQDOMZBIQOURRRBDWRCQZFYIHDOPOUBWJSVOGHYJNGKDSCZIGMOCYTQPMRFAPMDNDSDCBTVHAKUJLINWHALTLYJTWJXWUCHWTFGFLKKSYZR");
    msg.mmsi.assign("HUZDUEKGEIPOQBWWZMYZNISSGPHWHLVAOQVRKLXUXTEJUIAOMRTBSJQVWQSMPNKVXNUWVHFCXROBBORKIZOKVXQSPONKLCOWWQVFHNNQKAYRBLFUIRYFFMJYHEVJQHLNBBOLIFCDIMXTTJEVWGGULUJMJQEYDGNUDDZZKTLBCAGCYFTAXLYAIGDHPBEGSRKQFVHZZCHYFMPRETIRNCJAGLSNXRWDSAIPYPZAWTOJS");
    msg.callsign.assign("EKQPFTVTEGQRLZAWJIRUNNHUAIUJMVJGHWFHEXSVPCKLTRMUETMBTJGNVTUOTPGTKZLWUBZYGSCPDZA");
    msg.name.assign("MQWQHOSXOUTAXAUSRHRBPISRYEATLBVUVWYPAQ");
    msg.nav_status = 131U;
    msg.type_and_cargo = 233U;
    msg.lat = 0.36567551077901017;
    msg.lon = 0.7108484880474253;
    msg.course = 0.6195558637445796;
    msg.speed = 0.6539998406566683;
    msg.dist = 0.3115732855292248;
    msg.a = 0.12682398242431003;
    msg.b = 0.8429484350140775;
    msg.c = 0.323933535487155;
    msg.d = 0.18068274178848298;
    msg.draught = 0.6891782137432675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.5559545761628538);
    msg.setSource(20388U);
    msg.setSourceEntity(232U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(233U);
    msg.msg_type.assign("FMWDUKOUJKHJEENNGAZQOBVQUNIO");
    msg.sensor_class.assign("CJGJCAKXLEVAPJBDDDYVSEDPIWUNBZQEQHKWOZSLHLHGVPAHOECTJVIIHFAWDLZTUQZVBLNXZZGAPUTFKFLXSTTUXMXJXIIRWKDUERGFTZPVXAIDGYSRUEVHLBMSFIGFTKGZTNRCTVOIZTNSOOCSPBNXKFFZY");
    msg.mmsi.assign("IKEAENDRAPMJJYAMEZXMIMEPUFATPBHZBJZSZDDQCGTLTFLBBVWBWGVVDORMYSLENNQSZJUQSEVURPVIGSXXOQFLDNYUTATCUARKMTGROBEGNTJSQBCNKYCOGNSXLOQYKCBHJILOCNUPZZYYUCVXHFFHDCWLJWGPFUXKWPKFTRWWMVDMDQOXFFXLFPNPGUCOIRHJHCVSPWLQKKGSTTILDZYANROZDIAHUSY");
    msg.callsign.assign("CYVQWPDOVRJSBLQOBUETBRLJVCSHPMJDXNGUEJWKIZXASQOXZDNTDBFGBAUSGNCKJZMUMULMTWPYMFKFOHKLFXQJKONIRYACGPGMLOVZVYIHLLWEAOTHTXUWWYWXTWHECYPALFCREWSXYUQXZGQAZGZUVNYGKPNEPMRRQCFDKNKPBNGXUCMDTMRQJSBHDETBYMEJDBVIEROIHJQICWNXSIJFSOUPYTHFPHDBFLVOREFIZR");
    msg.name.assign("XVTDJWNKNFDNOTBVLJYGNTIWOMYUZIRLBKSTYUJUMBXUWYOUFPAEGCRRADJQONBMZCAQWDLSPAPZQTKAZHPFCMGCNUUTSHAJEIYYSQYJRCZWMZIX");
    msg.nav_status = 16U;
    msg.type_and_cargo = 3U;
    msg.lat = 0.8695845151389641;
    msg.lon = 0.5370651138577565;
    msg.course = 0.5324572350951086;
    msg.speed = 0.9038887115883955;
    msg.dist = 0.9880813863285358;
    msg.a = 0.9161727748509997;
    msg.b = 0.6588845521698976;
    msg.c = 0.6154327929683261;
    msg.d = 0.3968404063822012;
    msg.draught = 0.6395474041022704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.8523706825608629);
    msg.setSource(20214U);
    msg.setSourceEntity(229U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(234U);
    msg.msg_type.assign("JDKUFBLBHQDIYKSEZAYSICSNHZGVMNQIELQKRXFOFZNVWDQBXMJSBYSNOCTYLXUEMBVWOSMLZWIXCGLWDBQDRMAGTTFUEYLZCALXGMBYSMIFGRVYHWPKGDJZZTCPFPDITNXIJVOX");
    msg.sensor_class.assign("JAPELDQGAOPCUDXIBOQTSPVLWELHZOBTNJPATRJSCCIKDPRJDRQZVXYMFVE");
    msg.mmsi.assign("KAXICAFHYQVOJYNIYCNHMSBVTHKFGQSIGRMSURETNK");
    msg.callsign.assign("YENJBYZDGIPGDEBCFZQKLXNQPJGHWRFZWUTQAPRMCDXCHDWKSFLSTODEGFNQSVQDQMDKIKWERUOEFWIIBDIGBQISRVHTFOVVPCFPKATM");
    msg.name.assign("XHBZSDKTTFUOAFJVMXJNMNSTKWIQKMEEWMHQJKRQYUNBCXUDZXPLNLKVWLGUSSOABPBYBMZIIAOIXOPNVGHFEDDLOILILDQDGHJVNWGMBURFLTXUYFKWHKPGLRPEDRPXTVFCDQEFYTXJASDRAE");
    msg.nav_status = 52U;
    msg.type_and_cargo = 56U;
    msg.lat = 0.24222682050661737;
    msg.lon = 0.49086231417692383;
    msg.course = 0.8463914978786709;
    msg.speed = 0.01237206523453438;
    msg.dist = 0.474739479974683;
    msg.a = 0.46192006133895713;
    msg.b = 0.520431429492398;
    msg.c = 0.03943740188487599;
    msg.d = 0.09613283449355126;
    msg.draught = 0.11922055997022674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.018544304420682778);
    msg.setSource(49125U);
    msg.setSourceEntity(171U);
    msg.setDestination(6408U);
    msg.setDestinationEntity(84U);
    msg.depth_at_loc.assign("RYFBFVNCAKOTWFOKLZCETGWHHKXPWBTICUJWMTWSJKSUSAESVSROHEIJKMMMBAHTQZPVBQSNRUTFWCYRDNRAFFMJLZYUGPHZTOCODFKZDWHYDNQJVNZVBJCGNPUAGIFFMTLWVNZGDMGTOREQVUILPNMGDJGMCKLXAVUMYJDXWYOXDXKIVEDQEUUPHOKFSYQYLHWLQSBKLIZEPPQVBEYXXYGISBIAARLDQEBQPCCOHXNCLARX");
    msg.danger.assign("JWCYMIHNAPMMCKXZYESBRNFAMDOUWYRKGXFBAZJXKLCNXNYIDEPUQKLNYHMWLJUNQLAUVJFPAQYVWTVYKBHZIRAESWOSDSYJPDLFVOCGEYWADBEXMTSQKEUTVJZGZHGJOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.08029131744788887);
    msg.setSource(63156U);
    msg.setSourceEntity(127U);
    msg.setDestination(49268U);
    msg.setDestinationEntity(92U);
    msg.depth_at_loc.assign("HQNXTFLSULLMGTXOANQVGEENNBFIC");
    msg.danger.assign("MBNLFWIMCEXRDJPVJAXPOIAGUTGFUJKDNBWQTRPBNMWSOEVZXLWOAVCMGCSPRMTGXTCAEZGHDPLALAJJHKCBQIGOTQRSDZLY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.15948679122664822);
    msg.setSource(17246U);
    msg.setSourceEntity(132U);
    msg.setDestination(23608U);
    msg.setDestinationEntity(185U);
    msg.depth_at_loc.assign("SRBFNOUXZSLDXIFPZYCFNFXFVHNICZSHYHPLHYGHBYBLTQUKJEDHVZMPKQTHGKDLZTKKUPXBSMOGZKEDVCVHVTWCWORVYCUNROZINGEJTVMFUAMIRRNOEWAQPOXYUSUQZILGGWCNQJWSQPMWPTGJQPHREDQUIWGYSWLZJREIZVAPTDQDORDAANEDVKMSFTWONNEALXPJAJMOKBYUXDLFSGCBTJYLAEMJRIBJVLXIOACXCXIUKFBFEHMYQSCT");
    msg.danger.assign("EPGSOLXELUKSZMGBJSHFGOTKWDVAKQLFBUNAWDJZYDFQXZPDXKDOKIMCVHZEKMOPQKOCIEBRWNLTIUNRBDBPNQTCYFDADUZITZVKCGFYPYGWMTHJHEILFMRVBMADQYGJFNABRWWNMHSSZXQJNWEMBFRCEYNPUHLIZVALYOLNQGJTLAWWVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.3886709392115849);
    msg.setSource(55798U);
    msg.setSourceEntity(214U);
    msg.setDestination(13099U);
    msg.setDestinationEntity(37U);
    msg.time = 0.9392302179804671;
    msg.x = 0.0017249894156756707;
    msg.y = 0.9643611914552391;
    msg.z = 0.16662846022572964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.225672051059001);
    msg.setSource(14490U);
    msg.setSourceEntity(105U);
    msg.setDestination(17051U);
    msg.setDestinationEntity(72U);
    msg.time = 0.3243357741359275;
    msg.x = 0.8699264747428317;
    msg.y = 0.8400859123286935;
    msg.z = 0.43686667089593034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.19594214733508075);
    msg.setSource(20198U);
    msg.setSourceEntity(152U);
    msg.setDestination(23417U);
    msg.setDestinationEntity(129U);
    msg.time = 0.6395388010893202;
    msg.x = 0.5477336856841074;
    msg.y = 0.8579823619284007;
    msg.z = 0.45852919893254607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
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
    msg.setTimeStamp(0.308581948594311);
    msg.setSource(61880U);
    msg.setSourceEntity(112U);
    msg.setDestination(23980U);
    msg.setDestinationEntity(189U);
    msg.nbeams = 31U;
    msg.ncells = 52U;
    msg.coord_sys = 46U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8599254055215995;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.584011352069188;
    tmp_tmp_msg_0_0.amp = 0.23304021203889513;
    tmp_tmp_msg_0_0.cor = 130U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5275291507825409);
    msg.setSource(2033U);
    msg.setSourceEntity(54U);
    msg.setDestination(20676U);
    msg.setDestinationEntity(76U);
    msg.nbeams = 32U;
    msg.ncells = 83U;
    msg.coord_sys = 65U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.939414229555482;
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
    msg.setTimeStamp(0.11840384866015263);
    msg.setSource(19871U);
    msg.setSourceEntity(55U);
    msg.setDestination(20526U);
    msg.setDestinationEntity(113U);
    msg.nbeams = 238U;
    msg.ncells = 128U;
    msg.coord_sys = 43U;

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
    msg.setTimeStamp(0.7924857110761918);
    msg.setSource(61676U);
    msg.setSourceEntity(173U);
    msg.setDestination(44461U);
    msg.setDestinationEntity(133U);
    msg.cell_position = 0.4279902803055077;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.34110492072739085;
    tmp_msg_0.amp = 0.8812117337089459;
    tmp_msg_0.cor = 249U;
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
    msg.setTimeStamp(0.26902118205732617);
    msg.setSource(25067U);
    msg.setSourceEntity(21U);
    msg.setDestination(40643U);
    msg.setDestinationEntity(210U);
    msg.cell_position = 0.8485669373423481;

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
    msg.setTimeStamp(0.939914928423314);
    msg.setSource(55011U);
    msg.setSourceEntity(85U);
    msg.setDestination(42577U);
    msg.setDestinationEntity(84U);
    msg.cell_position = 0.6375948317311455;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5214843447132048;
    tmp_msg_0.amp = 0.9475234764045195;
    tmp_msg_0.cor = 202U;
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
    msg.setTimeStamp(0.16492138463309214);
    msg.setSource(11783U);
    msg.setSourceEntity(151U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(119U);
    msg.vel = 0.906261048984282;
    msg.amp = 0.7196988443392163;
    msg.cor = 75U;

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
    msg.setTimeStamp(0.4311091057676302);
    msg.setSource(44947U);
    msg.setSourceEntity(172U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(146U);
    msg.vel = 0.14518797227878522;
    msg.amp = 0.774819046578594;
    msg.cor = 252U;

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
    msg.setTimeStamp(0.27094768043068373);
    msg.setSource(36600U);
    msg.setSourceEntity(214U);
    msg.setDestination(40591U);
    msg.setDestinationEntity(85U);
    msg.vel = 0.7901332265463168;
    msg.amp = 0.17888694830963192;
    msg.cor = 47U;

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
    IMC::Frequency msg;
    msg.setTimeStamp(0.5970310262057411);
    msg.setSource(34015U);
    msg.setSourceEntity(227U);
    msg.setDestination(53713U);
    msg.setDestinationEntity(124U);
    msg.value = 0.742029314094284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.4696766075817431);
    msg.setSource(36432U);
    msg.setSourceEntity(122U);
    msg.setDestination(11565U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9250424265687421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.1456188405355906);
    msg.setSource(58129U);
    msg.setSourceEntity(75U);
    msg.setDestination(12462U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7531847128534449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.6869921792675029);
    msg.setSource(18892U);
    msg.setSourceEntity(161U);
    msg.setDestination(40975U);
    msg.setDestinationEntity(134U);
    msg.sig_wave_height_hm0 = 0.9136720931505788;
    msg.wave_peak_direction = 0.47910757780513535;
    msg.wave_peak_period = 0.23066147956943717;
    msg.wave_height_wind_hm0 = 0.1687623881050928;
    msg.wave_height_swell_hm0 = 0.3118013810433229;
    msg.wave_peak_period_wind = 0.7085462288961745;
    msg.wave_peak_period_swell = 0.24510648478750252;
    msg.wave_peak_direction_wind = 0.9851279297407248;
    msg.wave_peak_direction_swell = 0.8730867054573507;
    msg.wave_mean_direction = 0.8355646972602245;
    msg.wave_mean_period_tm02 = 0.6658813225513076;
    msg.wave_height_hmax = 0.5866624213999639;
    msg.wave_height_crest = 0.44332281110741245;
    msg.wave_height_trough = 0.703583574365204;
    msg.wave_period_tmax = 0.5591977910966346;
    msg.wave_period_tz = 0.5726449578708526;
    msg.significant_wave_height_h1_3 = 0.506125155251106;
    msg.mean_spreading_angle = 0.08393911725993664;
    msg.first_order_spread = 0.8202273656183497;
    msg.long_crestedness_parameters = 0.4940394877882567;
    msg.heading = 0.7011325903324233;
    msg.pitch = 0.27939338287006965;
    msg.roll = 0.2580210481253685;
    msg.external_heading = 0.0843306311213109;
    msg.stdev_heading = 0.7637171793911679;
    msg.stdev_pitch = 0.1789289303327295;
    msg.stdev_roll = 0.6960050857191158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.6538474762698505);
    msg.setSource(11180U);
    msg.setSourceEntity(198U);
    msg.setDestination(48165U);
    msg.setDestinationEntity(185U);
    msg.sig_wave_height_hm0 = 0.7256036780322243;
    msg.wave_peak_direction = 0.8258050676197417;
    msg.wave_peak_period = 0.7526647443182142;
    msg.wave_height_wind_hm0 = 0.190742055541956;
    msg.wave_height_swell_hm0 = 0.7078009754602668;
    msg.wave_peak_period_wind = 0.7244591926462209;
    msg.wave_peak_period_swell = 0.8955448880111755;
    msg.wave_peak_direction_wind = 0.14292424407152515;
    msg.wave_peak_direction_swell = 0.8289673434784484;
    msg.wave_mean_direction = 0.3753087535825168;
    msg.wave_mean_period_tm02 = 0.27273088159815717;
    msg.wave_height_hmax = 0.49878729583606896;
    msg.wave_height_crest = 0.6238042769754983;
    msg.wave_height_trough = 0.5125194004440101;
    msg.wave_period_tmax = 0.5326242386382269;
    msg.wave_period_tz = 0.5478950484678162;
    msg.significant_wave_height_h1_3 = 0.5382705582239218;
    msg.mean_spreading_angle = 0.21213030331733917;
    msg.first_order_spread = 0.1295775521682836;
    msg.long_crestedness_parameters = 0.22439846448748735;
    msg.heading = 0.9390624648681068;
    msg.pitch = 0.2878307804664455;
    msg.roll = 0.4523465014050786;
    msg.external_heading = 0.24675409020071704;
    msg.stdev_heading = 0.1371753384470077;
    msg.stdev_pitch = 0.8454061261371756;
    msg.stdev_roll = 0.8000408467207643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.6749249474035447);
    msg.setSource(9985U);
    msg.setSourceEntity(13U);
    msg.setDestination(21881U);
    msg.setDestinationEntity(46U);
    msg.sig_wave_height_hm0 = 0.033408492797831646;
    msg.wave_peak_direction = 0.6185511672261955;
    msg.wave_peak_period = 0.015320481784326656;
    msg.wave_height_wind_hm0 = 0.5924999585616912;
    msg.wave_height_swell_hm0 = 0.4750884157216778;
    msg.wave_peak_period_wind = 0.19561135196612245;
    msg.wave_peak_period_swell = 0.511065409477822;
    msg.wave_peak_direction_wind = 0.3532171389866481;
    msg.wave_peak_direction_swell = 0.01921412690795743;
    msg.wave_mean_direction = 0.23293508840035937;
    msg.wave_mean_period_tm02 = 0.41093089943507777;
    msg.wave_height_hmax = 0.00608855543183795;
    msg.wave_height_crest = 0.9925750105889023;
    msg.wave_height_trough = 0.7492200025648212;
    msg.wave_period_tmax = 0.12049829315751948;
    msg.wave_period_tz = 0.7435903889579967;
    msg.significant_wave_height_h1_3 = 0.7762523276970836;
    msg.mean_spreading_angle = 0.5510716905074032;
    msg.first_order_spread = 0.5807591740416429;
    msg.long_crestedness_parameters = 0.15615616010956923;
    msg.heading = 0.5095464234268609;
    msg.pitch = 0.22747287244066805;
    msg.roll = 0.582281738368301;
    msg.external_heading = 0.751727404158626;
    msg.stdev_heading = 0.12585634343062835;
    msg.stdev_pitch = 0.9268351062086895;
    msg.stdev_roll = 0.302708037747368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9222148949552905);
    msg.setSource(60908U);
    msg.setSourceEntity(191U);
    msg.setDestination(9803U);
    msg.setDestinationEntity(104U);
    msg.name.assign("AMZFJPLTHYEMCTTWFSIARMRWSSWHQGVXQTKMBCNUIXRPGUXZSIXKYKLCEAUQOHDYYDZPGSOICGSIYVITVJ");
    msg.value = 162U;

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
    msg.setTimeStamp(0.05731829429115498);
    msg.setSource(16945U);
    msg.setSourceEntity(158U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(79U);
    msg.name.assign("QQPEIACYSLZOESHHEUZWECARXILNXUKKTSPYVNUIBRTVGLOKRXDOHBEQNWVDCUKEJAJLQCMBYFBMYUVMVARTHHFOSXUMXUSVRBLISCHLZLYIJGQK");
    msg.value = 122U;

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
    msg.setTimeStamp(0.7025031211797937);
    msg.setSource(64707U);
    msg.setSourceEntity(213U);
    msg.setDestination(26247U);
    msg.setDestinationEntity(222U);
    msg.name.assign("FHKKDXIIRWPETSTXFBMCLKIMUZLVAVCHNMCUPOHVANYUODDJWDKGISJGJ");
    msg.value = 74U;

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
    msg.setTimeStamp(0.3017274455162592);
    msg.setSource(19638U);
    msg.setSourceEntity(146U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(200U);
    msg.name.assign("XZKQRVUSINGRYJQAAKAIKEJBCFZZSYBAYLMVCJIDPLDZPQGVFTDGOCVMJCNPERURLFCOTHPIOXOWKXWZFRUTILXYZVGUHNTAHSHEJEHDWCUTEDDFSAYLXBSOHGZNYHXWVBEQFPFOFIVFCBQLNMTC");

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
    msg.setTimeStamp(0.9696560021795635);
    msg.setSource(55841U);
    msg.setSourceEntity(99U);
    msg.setDestination(41268U);
    msg.setDestinationEntity(151U);
    msg.name.assign("TTDKOSVEOREIBNWQEQLACIRPLZRWJEKHEMNJODFDVMTULPBYNDVNVWPIQWKOLDDAWIQHWTHTUGMUUDINMTZAXLJXRSUONIAHFHJJSKAOFHZWIYSDKOTLGQGPOQFZGCSLGUMFCBMTEROCZXFVPCYAWWBIKMPLJAKORHRQPFDYZHYBMESKXXXUXCERQVBRMLDUNJQCACBFBFTBJPFPAXAKCIGSSPHGVIGRZ");

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
    msg.setTimeStamp(0.32561518606573503);
    msg.setSource(26373U);
    msg.setSourceEntity(133U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(177U);
    msg.name.assign("MLEXNMTFJIVKMJJZDGTMOZUELTVQQDMYDGSTXKILLQIUSDBYQZCYZNGDFXJMKSJXCDEMWIACGWJDNJRYSBVVFKCZAHAOCUVPHWLNSIRVJPOWDLURXFQOKVUSRMPQPUQEYVKQYBHBW");

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
    msg.setTimeStamp(0.9052232946947744);
    msg.setSource(41778U);
    msg.setSourceEntity(219U);
    msg.setDestination(53175U);
    msg.setDestinationEntity(11U);
    msg.name.assign("CMQCQCORZXPSVPKNAHESKJPMRUQEIFDNIZYWDDTTWSNVAJKHYQEBGWSACBOYUSUSMYSDFZCGTISYHMCTQWGLJKUFRZNOVXKHFQMZXYFTLOWFOIXULDFXWBYNCAJXJZNKOIRUZGLBBNHHUBAFPMVOSLLCDETMTZXLRFPTLNWWXDAVJZKMMJITBOCGYF");
    msg.value = 242U;

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
    msg.setTimeStamp(0.11067334292811393);
    msg.setSource(58755U);
    msg.setSourceEntity(213U);
    msg.setDestination(22185U);
    msg.setDestinationEntity(140U);
    msg.name.assign("KGNHARKGTMROWDYPFZDRBQWKPPUHWGNGLNXPRJOKSACCUURBWOHFZCZUBWKXUMXGAZDDYBAJDAXTYLIFFPNFDHJMNXFXLGKCGJIJSKBGEAHOQICFTBVWTZSDGLDIBIHEYCESYAPMVGMFBZSKQEEZLVXROJPPVXBSHOHEKFIWQJCJUBYVIQOWSNRKHNPHUEOQSDMWSIACZEJARVQTELVMTNNETTVZOILUUVYYYYWZNMITOXD");
    msg.value = 130U;

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
    msg.setTimeStamp(0.9467081860089003);
    msg.setSource(23770U);
    msg.setSourceEntity(244U);
    msg.setDestination(52244U);
    msg.setDestinationEntity(147U);
    msg.name.assign("XFBIJTLURHWFHBHQAXIQVMXHJRGPZXMOIMACFKMPOTJDOZRWUIFNQFTMAIWOCTZQDYERCLDJJXKEALSYYHEFEEOPYPNFKAEBDLSBPUXXLKWWEKARTEBVWRPNYIKUVQIGIQDFSSDGCCGUNGXUHIGCZPNYAZBOHANJJPVQYYKNVGSVUMNURJDCRCRNWJKKRHZLOKUVXIQUSWABBDG");
    msg.value = 109U;

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
    msg.setTimeStamp(0.20665038699113458);
    msg.setSource(61311U);
    msg.setSourceEntity(141U);
    msg.setDestination(60449U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7347461687370581;

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
    msg.setTimeStamp(0.6123944151427464);
    msg.setSource(7756U);
    msg.setSourceEntity(177U);
    msg.setDestination(44310U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8975227978816931;

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
    msg.setTimeStamp(0.9193672715453431);
    msg.setSource(29452U);
    msg.setSourceEntity(242U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(164U);
    msg.value = 0.885254057928952;

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
    msg.setTimeStamp(0.04611105187666742);
    msg.setSource(47954U);
    msg.setSourceEntity(49U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8367601176053657;

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
    msg.setTimeStamp(0.9078140419652863);
    msg.setSource(1900U);
    msg.setSourceEntity(148U);
    msg.setDestination(18987U);
    msg.setDestinationEntity(243U);
    msg.value = 0.8599663346423174;

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
    msg.setTimeStamp(0.3366396726320362);
    msg.setSource(61876U);
    msg.setSourceEntity(134U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5780903413432555;

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
    msg.setTimeStamp(0.35286636433873797);
    msg.setSource(26038U);
    msg.setSourceEntity(132U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6649270224153634;

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
    msg.setTimeStamp(0.6330881660250743);
    msg.setSource(64360U);
    msg.setSourceEntity(194U);
    msg.setDestination(59231U);
    msg.setDestinationEntity(63U);
    msg.value = 0.9871245193337396;

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
    msg.setTimeStamp(0.05848639868108152);
    msg.setSource(11218U);
    msg.setSourceEntity(221U);
    msg.setDestination(52841U);
    msg.setDestinationEntity(70U);
    msg.value = 0.27938652546497456;

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
    msg.setTimeStamp(0.7196344795991885);
    msg.setSource(42277U);
    msg.setSourceEntity(69U);
    msg.setDestination(13410U);
    msg.setDestinationEntity(16U);
    msg.restriction = 23U;
    msg.reason.assign("PSODHFGIKPWJGAKBFLKCGKRZIFSDNVYUSEXZPMPAFYKOZLXFCMQXJRGIYUYMGISVBJMYHQBQYASDKNWTWWWTWWOIZUEIVSAAXVULZHOJFDJLZCHTRMOXYGSNMZPJAYMODBREDBDXVTQHVARNCXDGGNELIIFBRVACJZKEKPEQWTHTFEWKXHNX");

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
    msg.setTimeStamp(0.0023722522848492744);
    msg.setSource(17205U);
    msg.setSourceEntity(79U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(31U);
    msg.restriction = 16U;
    msg.reason.assign("AUVDZJEJVVSKARPERVBSKCSADCDLRUDGBMRXWLMKFGIVXEILGQHGMJYXKYVUFRNHHOYSCARAGHBXBTWKCHTOOOHFTRQVOFZUYJLLISEWNYBBKKMFDDNRUJTCULPJSXMBPPGNWMEPQTJAFLEEPQQDJEXEZSBMHCQGMWOHCTSNNRILRAKXFLMZOZANUCGWCIYQISSOIGUJDVQQBGNZVIWUYJZIWTZBFVXPNYFUAYMTPEFTWIDXXY");

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
    msg.setTimeStamp(0.5955901485406858);
    msg.setSource(38550U);
    msg.setSourceEntity(58U);
    msg.setDestination(51397U);
    msg.setDestinationEntity(167U);
    msg.restriction = 46U;
    msg.reason.assign("XTLFLPSHWQNPCRLGPEMWFQEKCCBBAZVQRJFSRFKBXVXHOASENYBSWZIYGJJGWORXZXLEFLPCYEWCZKIHBQKGPMNORDANVTTGJEAYBPPH");

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
    msg.setTimeStamp(0.4183034238254144);
    msg.setSource(27663U);
    msg.setSourceEntity(32U);
    msg.setDestination(60842U);
    msg.setDestinationEntity(55U);
    msg.op = 174U;
    msg.version.assign("XVSSQXNWBBCDLVEAGZIMKRTOGEEHGBUILPKFCIANBDLZEQKBFHRTZFRYGXIHPMGCYAKWJVMTMZPFWDXOUODKZRECXZEQBESXEKVYFPMEARIOMSRFYAKVUCWSFHCQMNUBTOSXBJVUVWJWYTWPTNVTRISMYCSCYDJQDSINLTFUWLPCHYJDLHZGIZYXHVGQ");
    msg.description.assign("DCZLEGHXAJZSJPCYWIXFXYNNRLACCAPVPYUACTQPPJJAZIFCHCQZLSZDIAFUVTFKLRMPBMNFBQVWXEXNEEVWWEBLDAIFDCKHADPJYSLZNOBQMNYYHJEQWIHUKQSHQAAXUQ");

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
    msg.setTimeStamp(0.6401275227218802);
    msg.setSource(51596U);
    msg.setSourceEntity(1U);
    msg.setDestination(16620U);
    msg.setDestinationEntity(67U);
    msg.op = 230U;
    msg.version.assign("CVSPEBPRDXTJWUBIYXOIHLPHXDXYUJIMKIABJPYXSGVJXOUJZEWIZQOUGZY");
    msg.description.assign("AAFONENWEYOAKFSMPYOPUNVBDQAKZODLLDZJLTFRSZTGEHPRAHBBMVHBJQGISREXUAQGFEMC");

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
    msg.setTimeStamp(0.3040329224535253);
    msg.setSource(9288U);
    msg.setSourceEntity(13U);
    msg.setDestination(56573U);
    msg.setDestinationEntity(84U);
    msg.op = 198U;
    msg.version.assign("KTHQIAXNIQQVDXVOTYTYKNBEUJGSZLIJARALCLRUFFWUQKIDEBNROUBOYMZZTVIOHCWGTZMBWROACRIDMWCZVEIQDXFSPBKWDHSUDVPSJGJYXKPFLSGUZTELNXNLQCSRXVTYBADJHXAGHPTPTFLVJFKFOMWGIEBHM");
    msg.description.assign("EDRYWLRDGHRRUZMPWSCRUUILCXHVIKDMJZVNFLDWZVEQXKMSWNKMIZEIVGSBQCAIFXBYOWMZLHHCWGHVITTHVBEZTAAQFQGSOSEMHCFVBABCJCABUW");

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
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.37996860946834254);
    msg.setSource(34733U);
    msg.setSourceEntity(225U);
    msg.setDestination(47766U);
    msg.setDestinationEntity(34U);
    msg.value = 0.319813564144117;

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
    msg.setTimeStamp(0.008175955034316451);
    msg.setSource(3538U);
    msg.setSourceEntity(57U);
    msg.setDestination(8723U);
    msg.setDestinationEntity(123U);
    msg.value = 0.3854296032172362;

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
    msg.setTimeStamp(0.3526833383660499);
    msg.setSource(54359U);
    msg.setSourceEntity(212U);
    msg.setDestination(37965U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8358499910262723;

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
