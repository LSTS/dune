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
// IMC XML MD5: 0fe4582bf06b504af601569d6a25a3a2                            *
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
    msg.setTimeStamp(0.0547908044352);
    msg.setSource(14408U);
    msg.setSourceEntity(173U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(18U);
    msg.state = 135U;
    msg.flags = 202U;
    msg.description.assign("FQTAWQNMDIJXIPTANFPMGBSNKEVQZSMRYUOKGCFCWMOJFZHVATVZGRELTUMXLSICDIQCAXJTAZDWZHPLOBLQOFCBUYARURHXQEGLCPGSFUNGBCYIXPHFJOMSATZBYNETSNIRWKXTWNVYJCGPRMVREJPKEIZEYJHRILPQQSVNWNTODZBOILDVFOQKGEKAHWDXQUNMDE");

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
    msg.setTimeStamp(0.976460809423);
    msg.setSource(23034U);
    msg.setSourceEntity(120U);
    msg.setDestination(10629U);
    msg.setDestinationEntity(118U);
    msg.state = 198U;
    msg.flags = 88U;
    msg.description.assign("ZVYSBUGKYJHDQEBTOISSIMU");

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
    msg.setTimeStamp(0.36925167553);
    msg.setSource(7080U);
    msg.setSourceEntity(43U);
    msg.setDestination(29117U);
    msg.setDestinationEntity(251U);
    msg.state = 3U;
    msg.flags = 67U;
    msg.description.assign("KPONJTLRJIPZWJTHDSKRIAVMFSCPRMCZQJZFYNIQXOSDZLJBYDMOATQNZEIFNKEXFBNYGHDFJQYRRLSVBLDHLZMZRSWUCRFTGUEPITUSXWDMWCPVPOAWCJWNUQTLPRDMGHQMMTXACDAVEVSHZZKKKRUGCPEOGUXHTUBJNAUSGMCNPGBDEMXOCIGCOOAXJLIUNVPWKNFQYOAYWGEZYXLEFVTRDYWHJBOUQYIVBFKGHVWBXLSQBVIFEBIAKK");

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
    msg.setTimeStamp(0.793767344426);
    msg.setSource(55060U);
    msg.setSourceEntity(155U);
    msg.setDestination(47975U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.503607072191);
    msg.setSource(23305U);
    msg.setSourceEntity(37U);
    msg.setDestination(18908U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.142658693665);
    msg.setSource(32457U);
    msg.setSourceEntity(198U);
    msg.setDestination(54174U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.200091037445);
    msg.setSource(32276U);
    msg.setSourceEntity(44U);
    msg.setDestination(2286U);
    msg.setDestinationEntity(231U);
    msg.id = 166U;
    msg.label.assign("EUWTXVDUYMVWIPKWSONPZGMUXZXKDBQOARPHFKSSOQCIDJBXBRLFIHBWACLRBTAYYEVT");
    msg.component.assign("NANXWHUYDTGQMPQXOALOJSHMMERIVUUIYCDNHFCSFUUZZHLRXVXWGQLXZQQJRBKVIINLYVFMOMZCQZZOYTIEFWPMWVZJSIZQGUWLKNLTNJFRHGKEJIBVLYYVHVWPHKMCTBRZDJSDDTNYSIXKNVDACWYFBBHSTLHIBPSKWMOUTCLXRDPUAWEKLWCMFRGSABSJCGAJXZKTYJGAJDUBSFEOEPKPTCTRYDONBUHEGGQXARABOQMGEQO");
    msg.act_time = 35271U;
    msg.deact_time = 51752U;

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
    msg.setTimeStamp(0.234580782734);
    msg.setSource(60583U);
    msg.setSourceEntity(246U);
    msg.setDestination(21165U);
    msg.setDestinationEntity(159U);
    msg.id = 147U;
    msg.label.assign("SASWWRHSGBQFVQFXIQUZFXDYMTYJZXCTPLTKBTXQNGPYBOCQVUWABMNVKFISEGIYMULEKSOUJEWLLGTOOHMNUPQHSHDAFEMOSEJAZLAZVWRRQIHCKPPKVERLURPTGRKMCNSEDTDBOAAHKIXYZROBZZ");
    msg.component.assign("QZZITAYPHUJJPPZZVVKDBEMXUOQYKCVDUGSAAJIUWKIBLZNDAXFHPNNMGXPBYLTWPMFQKNNNWDZSISDRJFKMCITWGSHGTCORCMMTKTHEYCJUYRWTHWTKNEJEXLDAKLGYYVLJCBHUXIWSSLLSZPQDGOUIFANQGQNKQOUADJXRBTNFZTHHXMZVMWOXGEUQCAOVGFHOPYXVDVSIMBRFEVSRRLSCBYOBAGBJEKEOBQFLVROERLI");
    msg.act_time = 60502U;
    msg.deact_time = 31679U;

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
    msg.setTimeStamp(0.725269766595);
    msg.setSource(53860U);
    msg.setSourceEntity(38U);
    msg.setDestination(54105U);
    msg.setDestinationEntity(207U);
    msg.id = 137U;
    msg.label.assign("UFRYDHDRCEGJQSYDCYDHSMMEZWJLAPEZJWPEACTWMBEJISFSFYUXRFLLFYMUQBIQRRWJEUBNPXMXTKMGKLTFMTZGYQXAOJLIIWBHKHDCAGUAURQQKGSTNPIDZFJQCQOCHE");
    msg.component.assign("ZYQJPYIPIUVCMDBKJAIHXVDWEZCMOBEYMREVXDESNJGSRMLNBKTZTQRHGZMPYFANEKUSIFJVVQHZPGWUUERTAGZXTWOANLYLOOUSFGBAXWQSECICDEMKZVNYOYK");
    msg.act_time = 40681U;
    msg.deact_time = 34904U;

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
    msg.setTimeStamp(0.874338528665);
    msg.setSource(37061U);
    msg.setSourceEntity(185U);
    msg.setDestination(11460U);
    msg.setDestinationEntity(135U);
    msg.id = 185U;

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
    msg.setTimeStamp(0.974161586764);
    msg.setSource(28623U);
    msg.setSourceEntity(207U);
    msg.setDestination(34364U);
    msg.setDestinationEntity(142U);
    msg.id = 231U;

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
    msg.setTimeStamp(0.84920965783);
    msg.setSource(61458U);
    msg.setSourceEntity(212U);
    msg.setDestination(14619U);
    msg.setDestinationEntity(32U);
    msg.id = 247U;

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
    msg.setTimeStamp(0.566476919759);
    msg.setSource(21156U);
    msg.setSourceEntity(253U);
    msg.setDestination(31054U);
    msg.setDestinationEntity(37U);
    msg.op = 194U;
    msg.list.assign("PULDNTGAMRWEQOTHPWCDBVXBHKWTSCMBDKAIVGEUFYKYKZLXAMTVJORZTMBJWHXUMYYYCJHFEADOODZCLNONQJSEKNFRMPGNVSILLTNFXGIFGBRAIWRKZAPAIYMZDXGBORIJWUQUWFHCGQBMHJCGHFIFKTPQSPWQPIQYWVVDBUAGPFEXENJNHVZCBOZJTYCHLTEVZSYRHXSKVBW");

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
    msg.setTimeStamp(0.0254357647992);
    msg.setSource(33848U);
    msg.setSourceEntity(143U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(230U);
    msg.op = 12U;
    msg.list.assign("BCMLNQAHKZCCXJLYMFUORYOPISBFMFZYQBSEPRSUZIDGGFHSAGWBWTRSWRQHLEPCQNAXCRHOKWRMLKVXHDNMYUOIHUTMBFIJEZGYDMZVTLYJKZBJSWHUHKKPLNDPARWNWKJDUFSCAGVLWRBRXIGQDCXMQNZJUICJYVOAZCCRFXOXVEOGBQEEVQBQPLZFTOAXHDTNVOELJKYJDIKTHJUOFSGYPTTMEI");

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
    msg.setTimeStamp(0.0440991145356);
    msg.setSource(45444U);
    msg.setSourceEntity(14U);
    msg.setDestination(9800U);
    msg.setDestinationEntity(230U);
    msg.op = 49U;
    msg.list.assign("XDQTHUJNPWZUOUHVOIXFYAJOQOXLOTWBEJDQPILTVCSDCWXREOCAECLKGDVWSFQGWUHNZZKSGBWPYIETRFGZOTZGAYWIWEVQZTMMPTNIBFMDLEXOEYRNLWGFJVAKANUCKHVTXJPTBYVCRWBSXEMLNKASKHZSADPKRTGYAUFZUGSPQHRFFVKVJBHFDHOPMUZXRJJURKIMSVQLYCAYDACFGBUQIBRBLNNXEMSYISNPRMHCEQLJZYQDNCM");

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
    msg.setTimeStamp(0.636536369091);
    msg.setSource(2564U);
    msg.setSourceEntity(105U);
    msg.setDestination(5888U);
    msg.setDestinationEntity(111U);
    msg.value = 66U;

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
    msg.setTimeStamp(0.388649124564);
    msg.setSource(44846U);
    msg.setSourceEntity(118U);
    msg.setDestination(27344U);
    msg.setDestinationEntity(125U);
    msg.value = 43U;

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
    msg.setTimeStamp(0.223701817775);
    msg.setSource(52528U);
    msg.setSourceEntity(123U);
    msg.setDestination(25949U);
    msg.setDestinationEntity(155U);
    msg.value = 119U;

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
    msg.setTimeStamp(0.864066082657);
    msg.setSource(2123U);
    msg.setSourceEntity(225U);
    msg.setDestination(36378U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("DLDMKMDAQTEXUUYFCQJTPYEWRNSLDOMZHZEZGESDVXUNCMPSJWFRCXGUTULZRRYSOVBPVOUWEKTZPIMPGOJOKGJQKKTASQYIQRDBGEHACBDJPYCLYFPCZYGVLRMWBBVIVKGTLQAIQGDJNRAQZVBFTOKHNTIVLBGJVBMUNISPAUBZXSDFXXSOHIHNOABEONXZRXRUEHMIFEHWMRKJWSUAZVWGITJICNKXCWWC");
    msg.message_id = 42900U;

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
    msg.setTimeStamp(0.551389973752);
    msg.setSource(14862U);
    msg.setSourceEntity(41U);
    msg.setDestination(54401U);
    msg.setDestinationEntity(91U);
    msg.consumer.assign("OECMUJFKNXVQMISLYSXIMRMTBHDBNDNCFBLOFWHXUAPIUAEWXQAJPCZUGAPPXSVIKEUZNAYSDMDFWDSBWALKBCHFCWIBYJTUYWZGCEKSBOPCQQPRXJBXLOMMDDJEOTFSJVYNQTLEPWMEKTPGZZOGONHHCWGQRRXEYYHRJQAHKVVVLNRRTK");
    msg.message_id = 14489U;

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
    msg.setTimeStamp(0.126526321901);
    msg.setSource(29681U);
    msg.setSourceEntity(161U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("PURQGUOZDQFRPISRDDENKQSKVIEJSDZIRPTVUHNFUOJTOWDVGEKMPSLUNBZATEIXOZXUXXKMAEOLDTKWJNOYNGFQGSACMFWKWECJLHDROYHEWSUCVJTRFNQQXVBYAOCESLRATIFQBWGFCJEJHIJCCTWNGADYOZWYBRXXHENLJQVBBM");
    msg.message_id = 11687U;

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
    msg.setTimeStamp(0.613863597277);
    msg.setSource(58144U);
    msg.setSourceEntity(14U);
    msg.setDestination(38928U);
    msg.setDestinationEntity(119U);
    msg.type = 175U;

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
    msg.setTimeStamp(0.438324360036);
    msg.setSource(34490U);
    msg.setSourceEntity(162U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(83U);
    msg.type = 14U;

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
    msg.setTimeStamp(0.625418720898);
    msg.setSource(56122U);
    msg.setSourceEntity(200U);
    msg.setDestination(55805U);
    msg.setDestinationEntity(114U);
    msg.type = 52U;

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
    msg.setTimeStamp(0.302659114952);
    msg.setSource(21318U);
    msg.setSourceEntity(148U);
    msg.setDestination(27752U);
    msg.setDestinationEntity(225U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.896546609062);
    msg.setSource(30293U);
    msg.setSourceEntity(1U);
    msg.setDestination(28747U);
    msg.setDestinationEntity(123U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.355109245957);
    msg.setSource(59152U);
    msg.setSourceEntity(254U);
    msg.setDestination(62389U);
    msg.setDestinationEntity(212U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.94002402333);
    msg.setSource(31573U);
    msg.setSourceEntity(240U);
    msg.setDestination(33970U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 233U;
    msg.step_number = 58U;
    msg.step.assign("WAJPNJCSDXXTWEHGXYAROTEOVR");
    msg.flags = 184U;

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
    msg.setTimeStamp(0.528304599965);
    msg.setSource(7849U);
    msg.setSourceEntity(135U);
    msg.setDestination(59502U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 209U;
    msg.step_number = 100U;
    msg.step.assign("MPHTCBKNTQFTESNNMJTAYGVTIGQSFFGUJKSYUCWHVHDMVICUDPQIMUJHWBPCVZZDEFDWJRSLSOGYZJEBVXAOOKGBZBHDPKRRXIXBHZGINMWRCNOYTHZMLWXFNGG");
    msg.flags = 64U;

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
    msg.setTimeStamp(0.673155551531);
    msg.setSource(44843U);
    msg.setSourceEntity(45U);
    msg.setDestination(45982U);
    msg.setDestinationEntity(74U);
    msg.total_steps = 60U;
    msg.step_number = 245U;
    msg.step.assign("BHTUGLRMDPRSKQCQIQAJNSVOEUTYOUPLWXPRSXJWCEZNSZWOBQVXTGECTANEAYAFYXUHPRAWHWJQIYGZDMCOKWDKJHROJXODEJNPFALKDHKUKCHMBQSSXVHFOANZBWPTISZQRVMDZHGSTFJHEMY");
    msg.flags = 61U;

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
    msg.setTimeStamp(0.795075408452);
    msg.setSource(2136U);
    msg.setSourceEntity(211U);
    msg.setDestination(33528U);
    msg.setDestinationEntity(97U);
    msg.state = 226U;
    msg.error.assign("KEPMEKIBGDBBWWBTOXARIZUEJRIXAOOYJNDPCTFZFPXMGUCPUUYWXDBLPQCHQVJAKZWRPTMNFYOZWDMGIDPPJGVCSMVGYHYHOARJTCEVROREXHZAYKJORKVEGMTSGDXBUHESSVYRZRQSLLZAXKMCWIJDMFRSQIELYCAHKWCFQWNJUZXCFAGVIDTHWZBLHIUQTXVLVZQBKAFTMPUUNHSEEPTISLJCSLKBTQNLYNF");

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
    msg.setTimeStamp(0.0776589958691);
    msg.setSource(10473U);
    msg.setSourceEntity(131U);
    msg.setDestination(11259U);
    msg.setDestinationEntity(48U);
    msg.state = 97U;
    msg.error.assign("EQNFZJUZOKPQCIWPWNYYWAYRUSQONTJKYTLLXLAWKPWDMXGCILVSSCIIMCHLNHJCWAMRVIDGRBAZBDNNJUDCALOSRTSCFTGDQYJSMFBEYDVYPHJQPEWZTFKESUHTZHRXSWUVYPOZXNMTPXVGXBSUKRUOETIVWMOVLEDXMVJNJBSZHPFKVZHTEFBPRUHHOCXWLDEAOQZMDGROLGABQFUQ");

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
    msg.setTimeStamp(0.619337385996);
    msg.setSource(4535U);
    msg.setSourceEntity(99U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(27U);
    msg.state = 48U;
    msg.error.assign("GCSPIUHCRKOXWKUWETHDZQQRBRRHJUZGVNJJAWWDPBMNLKSNSKMROVFVBMQVUCDETZUWRQXVNRHHDSELZXOLSABYMZKNQCDPTUDWWOLDPUTXXCOHWZGMMSVLJVOFOAJEKGCTUSCJYEJESCYFVFXIYWYBAZHSHPYFAPNHQ");

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
    msg.setTimeStamp(0.15794507344);
    msg.setSource(44867U);
    msg.setSourceEntity(115U);
    msg.setDestination(13273U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.855737912555);
    msg.setSource(50505U);
    msg.setSourceEntity(160U);
    msg.setDestination(40378U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.363800406481);
    msg.setSource(36773U);
    msg.setSourceEntity(247U);
    msg.setDestination(60805U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.541965827294);
    msg.setSource(65365U);
    msg.setSourceEntity(240U);
    msg.setDestination(13900U);
    msg.setDestinationEntity(13U);
    msg.op = 100U;
    msg.speed_min = 0.609801189106;
    msg.speed_max = 0.833165474869;
    msg.long_accel = 0.979810376638;
    msg.alt_max_msl = 0.129690939429;
    msg.dive_fraction_max = 0.193515452502;
    msg.climb_fraction_max = 0.0678612290109;
    msg.bank_max = 0.0334588760807;
    msg.p_max = 0.710632135184;
    msg.pitch_min = 0.0845208195693;
    msg.pitch_max = 0.504969394895;
    msg.q_max = 0.197116977017;
    msg.g_min = 0.479695017931;
    msg.g_max = 0.144466326212;
    msg.g_lat_max = 0.142155139956;
    msg.rpm_min = 0.185582461352;
    msg.rpm_max = 0.0421287171075;
    msg.rpm_rate_max = 0.10755384472;

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
    msg.setTimeStamp(0.651951361414);
    msg.setSource(29188U);
    msg.setSourceEntity(105U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(10U);
    msg.op = 10U;
    msg.speed_min = 0.44114631831;
    msg.speed_max = 0.970962051626;
    msg.long_accel = 0.948012796165;
    msg.alt_max_msl = 0.618662094636;
    msg.dive_fraction_max = 0.176723083366;
    msg.climb_fraction_max = 0.319848963059;
    msg.bank_max = 0.0808975250631;
    msg.p_max = 0.208129593096;
    msg.pitch_min = 0.256272462052;
    msg.pitch_max = 0.360898384099;
    msg.q_max = 0.057473353282;
    msg.g_min = 0.73644547536;
    msg.g_max = 0.0331415909244;
    msg.g_lat_max = 0.736254480157;
    msg.rpm_min = 0.35271619336;
    msg.rpm_max = 0.616814491655;
    msg.rpm_rate_max = 0.807703090238;

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
    msg.setTimeStamp(0.738418966486);
    msg.setSource(3670U);
    msg.setSourceEntity(130U);
    msg.setDestination(14536U);
    msg.setDestinationEntity(199U);
    msg.op = 154U;
    msg.speed_min = 0.52209758393;
    msg.speed_max = 0.383744863061;
    msg.long_accel = 0.0181846136282;
    msg.alt_max_msl = 0.269492345464;
    msg.dive_fraction_max = 0.0717212949028;
    msg.climb_fraction_max = 0.566147396531;
    msg.bank_max = 0.717574490704;
    msg.p_max = 0.289831125714;
    msg.pitch_min = 0.242681855949;
    msg.pitch_max = 0.195904856263;
    msg.q_max = 0.289269890911;
    msg.g_min = 0.291821921823;
    msg.g_max = 0.463087436777;
    msg.g_lat_max = 0.411681046545;
    msg.rpm_min = 0.291505090739;
    msg.rpm_max = 0.420534369694;
    msg.rpm_rate_max = 0.37770252259;

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
    msg.setTimeStamp(0.597764185614);
    msg.setSource(58508U);
    msg.setSourceEntity(234U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(29U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.821204669957;
    tmp_msg_0.dist_min_abs = 0.661151541047;
    tmp_msg_0.dist_min_mean = 0.370501934876;
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
    msg.setTimeStamp(0.217825372617);
    msg.setSource(49607U);
    msg.setSourceEntity(75U);
    msg.setDestination(42091U);
    msg.setDestinationEntity(105U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 38691U;
    tmp_msg_0.lat = 0.637753169407;
    tmp_msg_0.lon = 0.107747310103;
    tmp_msg_0.z = 0.360299494285;
    tmp_msg_0.z_units = 161U;
    tmp_msg_0.duration = 28177U;
    tmp_msg_0.speed = 0.555516307606;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.type = 133U;
    tmp_msg_0.radius = 0.0190516015604;
    tmp_msg_0.length = 0.962950075998;
    tmp_msg_0.bearing = 0.826807708984;
    tmp_msg_0.direction = 201U;
    tmp_msg_0.custom.assign("KJEDZCYRYQDPOFTDJAHTFJAAMXCGKZQNMWAXLNDABUHVPSQOBROIPFUUOKI");
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
    msg.setTimeStamp(0.0333185643921);
    msg.setSource(64996U);
    msg.setSourceEntity(14U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(218U);
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 17U;
    tmp_msg_0.mnames.assign("GUHJASTDVBUSLNAGPVQRMVRABTKRTWUKIQCLZUHNPPKCXQJSKJZCMKJUMSDTXUJYOITBHDKPLOELREIDFKFWENJEDANXMZEZDUCPYWHAT");
    tmp_msg_0.ecount = 20U;
    tmp_msg_0.enames.assign("AVUTEFKNLGEUQVCRRHJQLMEWMOYORCVKUHOUOKTUVEXGXSTFULXQFPJWGHNNGSKNZOHGUEJXGCBTLMZSTMZFIKPLEDFZWABWQVPIOX");
    tmp_msg_0.ccount = 88U;
    tmp_msg_0.cnames.assign("XIJUFOJPTHTMMLSHKCNQCWCUZVCYLFQDBXLMWWTZBKHPILWGZARGINODFBMYQLUVLIZKORBZUESMAOKIYYNXTIPQRDWZRVVOXTSJPCFKAEAJFETNLFSKKLAUPYSNXZQAQEVRXBJRYJDEGQQEGGHUUKCFCBUSKHTLRMOEDGUMBAGMOSIAINLRCCHTTDVGHVFFEGDZWPHBJVYWCONNDXQSVIYSMXQOJSNRHBR");
    tmp_msg_0.last_error.assign("PLWCHCLDQBOEIOZZYTFXMVAGMKDOSLNZIGNZKFRGWALVGZBFVLRNXSVGPITOHMBHNKTNBNEUHRZQNJUBWMSQWYXSRP");
    tmp_msg_0.last_error_time = 0.810052378338;
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
    msg.setTimeStamp(0.490513658321);
    msg.setSource(9220U);
    msg.setSourceEntity(2U);
    msg.setDestination(18930U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.752988913189;
    msg.lon = 0.0891668493681;
    msg.height = 0.48324095398;
    msg.x = 0.445013186435;
    msg.y = 0.324152724399;
    msg.z = 0.302888066135;
    msg.phi = 0.859334707071;
    msg.theta = 0.335975833251;
    msg.psi = 0.201531450847;
    msg.u = 0.911906628224;
    msg.v = 0.38899204028;
    msg.w = 0.768490919923;
    msg.p = 0.363701538631;
    msg.q = 0.6392150157;
    msg.r = 0.145301813064;
    msg.svx = 0.0525447780956;
    msg.svy = 0.0843932068894;
    msg.svz = 0.297729423886;

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
    msg.setTimeStamp(0.863990526959);
    msg.setSource(46853U);
    msg.setSourceEntity(86U);
    msg.setDestination(4247U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.308267223386;
    msg.lon = 0.638291224795;
    msg.height = 0.919508586091;
    msg.x = 0.0239341828073;
    msg.y = 0.464427790451;
    msg.z = 0.181308635823;
    msg.phi = 0.119151869385;
    msg.theta = 0.457630573092;
    msg.psi = 0.92904943139;
    msg.u = 0.745987683608;
    msg.v = 0.595155478891;
    msg.w = 0.265144823533;
    msg.p = 0.662379350618;
    msg.q = 0.684671204219;
    msg.r = 0.322382606544;
    msg.svx = 0.714548895386;
    msg.svy = 0.200585093594;
    msg.svz = 0.930150517102;

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
    msg.setTimeStamp(0.521361404603);
    msg.setSource(21636U);
    msg.setSourceEntity(31U);
    msg.setDestination(51542U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.138318677576;
    msg.lon = 0.101176533786;
    msg.height = 0.644744372372;
    msg.x = 0.467408163174;
    msg.y = 0.107608704479;
    msg.z = 0.853087118816;
    msg.phi = 0.201691490489;
    msg.theta = 0.796837237183;
    msg.psi = 0.867268021621;
    msg.u = 0.657267177322;
    msg.v = 0.529172503013;
    msg.w = 0.334970478453;
    msg.p = 0.585501138725;
    msg.q = 0.647452210995;
    msg.r = 0.322314152796;
    msg.svx = 0.201362286128;
    msg.svy = 0.40162005455;
    msg.svz = 0.594558538807;

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
    msg.setTimeStamp(0.668569580396);
    msg.setSource(12516U);
    msg.setSourceEntity(91U);
    msg.setDestination(58183U);
    msg.setDestinationEntity(223U);
    msg.op = 202U;
    msg.entities.assign("RROYDEWUZZVMPKJVVKPYHPQXQABYDLKOQFMOXRWZKIJBAZUESVTWSIRVJNUHJHLQCCMTYEKFPDGBGWNUPVEPMGIKLCIWKTAIZWUYYPZJSLFFTGCVOCOBXXXUDCTHDAFYEFYNUSCHETROGNWGDRIODLMAAULDSPMWMDZRMILHRIQNNASBECZOQBHOTEJARYFBSHXKD");

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
    msg.setTimeStamp(0.452187310942);
    msg.setSource(15546U);
    msg.setSourceEntity(180U);
    msg.setDestination(56541U);
    msg.setDestinationEntity(38U);
    msg.op = 243U;
    msg.entities.assign("UOEIYZCCDIVGRKJXCYRALFAWIKHMNOSIPJHZNGULPSRNVPDAOCWUXZZIAOEEHMDWGCQRZMONFFLXXHCWZJPKWUUJZEKDLWTNOMWEIUXFTDNLYVKUUTBKYSFDGTIHHMNVMJGXDGYSEPSCVOLYQRLRWMHDYNSSJQQTCRKZGLFMSBAHXZBGQRQXU");

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
    msg.setTimeStamp(0.00371454845769);
    msg.setSource(38347U);
    msg.setSourceEntity(1U);
    msg.setDestination(61295U);
    msg.setDestinationEntity(187U);
    msg.op = 71U;
    msg.entities.assign("MEDRARNTELIQOLECZUBJSLCTFLVJZUUOGGBVRCBFMBGCYJDGXUDNSIDTROFAEBRUCKYWOSIZKIMWZOACNXKWMRKYUAHRNMGJDUMBXTSWEQPJVVVFKLLTUMHWHHVXTBKERLZZSXTWZPGSZQHMISNI");

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
    msg.setTimeStamp(0.49698294084);
    msg.setSource(10653U);
    msg.setSourceEntity(9U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(175U);
    msg.type = 143U;
    msg.speed = 57823U;
    const char tmp_msg_0[] = {16, 59, 96, 125, -79, -118, 24, 110, 52, 116, -49, -117, 117, -123, -109, 124, -105, 46, 92, 102, 90, -18, 88, -79, -104, 123, 24, 37, -73, -124, 75, 39, 77, 13, 44, 20, -87, 67, -66, -87, 22, 42, -35, 91, -110, -8, -112, 55, 120, -41, -95, -77, -86, -93, 121, 25, 27, -39, -37, 125, 88, -6, -65, -82, -20, -19, -55, 16, 125, -63, 16, -49, 41, -59, 104, 89, 4, -20, 111, -123, -26, -97, -84, -97, -19, 32, -7, 68, 48, 85, 73, 24, -40, 21, 101, -35, -33, -52, -125, 22, 75, 85, -111, 80, -10, -120, 101, -85, -116, -72, 25, 69, -62, 30, -28, 122, -94, -110, -2, 14, -27, -34, 8, -128, -60, 29, 35, -46, -121, -19, 60, 114, 103, 104, -122, -2, -115, 109, -58, -87, 8, 49, 103, 35, 113, 117, 61, 92, -112, 122, -110, 20, 42, 53, -57, 47, 98, -24, -1, -53, -23, -71, -51, 16, 104, -46, 66, -81, -71, 69, 111, 16, -119, -56, 108, -103, 87, 8, 22, -104, -46, 101, 24, -109, 126, 87, -122, 60, -30, -122, -67, -29, -2};
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
    msg.setTimeStamp(0.797718630024);
    msg.setSource(37179U);
    msg.setSourceEntity(92U);
    msg.setDestination(3554U);
    msg.setDestinationEntity(54U);
    msg.type = 14U;
    msg.speed = 43639U;
    const char tmp_msg_0[] = {-62, 70, -22, 66, -85, -74, 40, -20, 7, -93, 49, 59, -115, -43, 32, -88, -37, -89, -84, -115, -23, -110, -29, 55, 47, 20, -57, 95, -116, 70, -1, -15, -32, -106, -47, 112, 48, 80, -60, -9, 16, 75, 42, -102, 68, 121, -34, 59, -55, 62, 40, -55, 30, 13, 96, 62, -54, -78, -26, 100, 29, -123, -6, 42, -69, 123, -6, 123, -69, -128, 68, -70, -64, -94, 93, -17, -13, 22, 108, 28, 96, -62, -112, 65, -87, 53, 62, -33, -109};
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
    msg.setTimeStamp(0.380972187588);
    msg.setSource(37989U);
    msg.setSourceEntity(103U);
    msg.setDestination(7845U);
    msg.setDestinationEntity(42U);
    msg.type = 219U;
    msg.speed = 12114U;
    const char tmp_msg_0[] = {-63, 115, -76, -22, -100, -9, -25, -91, 47, -14, 80, -125, -6, -30, -70, -127, -37, -71, 31, 104, -33, 85, 123, 37, -92, 34, -56, 2, -25, -94, 34, -74, -100, -18, 21, 113, -83, -109, 50, -23, -99, -30, 1, 99, -28, 46, -76, -87, -110, -7, 50, 83, 34, -59, 121, 13, 116, -24, 50, 77, -6, 109, -81, -22, -28, -64, -123, -23, 9, -114, -90, 115, 90, -126, -103};
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
    msg.setTimeStamp(0.99391134554);
    msg.setSource(25633U);
    msg.setSourceEntity(6U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(147U);
    msg.op = 217U;
    msg.tas2acc_pgain = 0.186959806139;
    msg.bank2p_pgain = 0.653452856426;

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
    msg.setTimeStamp(0.990914495675);
    msg.setSource(13438U);
    msg.setSourceEntity(213U);
    msg.setDestination(24719U);
    msg.setDestinationEntity(219U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.0884898719313;
    msg.bank2p_pgain = 0.501256255762;

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
    msg.setTimeStamp(0.772801466445);
    msg.setSource(8032U);
    msg.setSourceEntity(13U);
    msg.setDestination(40483U);
    msg.setDestinationEntity(174U);
    msg.op = 170U;
    msg.tas2acc_pgain = 0.596257093034;
    msg.bank2p_pgain = 0.226820023791;

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
    msg.setTimeStamp(0.0831724881408);
    msg.setSource(41380U);
    msg.setSourceEntity(232U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(78U);
    msg.available = 1936317909U;
    msg.value = 71U;

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
    msg.setTimeStamp(0.791069618261);
    msg.setSource(58497U);
    msg.setSourceEntity(78U);
    msg.setDestination(21559U);
    msg.setDestinationEntity(199U);
    msg.available = 3318975734U;
    msg.value = 237U;

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
    msg.setTimeStamp(0.915484010189);
    msg.setSource(33078U);
    msg.setSourceEntity(44U);
    msg.setDestination(26568U);
    msg.setDestinationEntity(171U);
    msg.available = 3984796948U;
    msg.value = 70U;

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
    msg.setTimeStamp(0.0634727160453);
    msg.setSource(46941U);
    msg.setSourceEntity(171U);
    msg.setDestination(34584U);
    msg.setDestinationEntity(48U);
    msg.op = 79U;
    msg.snapshot.assign("HUCLACWMRANHNDUYFVTBUCOCOSVYGLLTQTNGYVKJYCSKVICCKNDQZSSQATKJDHWQFU");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 47481U;
    tmp_msg_0.control_ent = 102U;
    tmp_msg_0.timeout = 0.441355662744;
    tmp_msg_0.loiter_radius = 0.244127663565;
    tmp_msg_0.altitude_interval = 0.450220836324;
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
    msg.setTimeStamp(0.134578710242);
    msg.setSource(34816U);
    msg.setSourceEntity(129U);
    msg.setDestination(13176U);
    msg.setDestinationEntity(15U);
    msg.op = 137U;
    msg.snapshot.assign("CPFNDCBCMYRVHCHERYMMHWYENGIEGXOCFLAKIWOFYSDYJDJTXBKWPMKTMHGFZMRX");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 164U;
    tmp_msg_0.snapshot.assign("AVVKDEIDNZSUCH");
    IMC::Rpm tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 31061;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0517731104782);
    msg.setSource(53468U);
    msg.setSourceEntity(216U);
    msg.setDestination(54705U);
    msg.setDestinationEntity(44U);
    msg.op = 101U;
    msg.snapshot.assign("YSDAOTYATYWOIZIXUTESMKAPWBVODDSTZBUHPAPLQIHEICFGWYMYDFZCPXFQNXTQZLRJZTGYXJXUZXDYFNKVLBSOFCEPVRTKJ");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 195U;
    tmp_msg_0.eta = 53325U;
    tmp_msg_0.info.assign("VBEPIUQUACEDSQSQRBBMKQLTNBTEADLYCEMQZIIPKBYVZCXMUDQIWUFQYA");
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
    msg.setTimeStamp(0.798140294539);
    msg.setSource(16703U);
    msg.setSourceEntity(145U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(44U);
    msg.op = 201U;
    msg.name.assign("DFKMOFIIUJUFCDRDORRSSNCIGNJGMUATQSYVWAXZZEZGVESBJGJSUAXVXEJYTRXQTJLQENOTLHIHHZPAPNRQVROZLMIWSAEK");

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
    msg.setTimeStamp(0.527718210642);
    msg.setSource(58700U);
    msg.setSourceEntity(176U);
    msg.setDestination(48381U);
    msg.setDestinationEntity(224U);
    msg.op = 205U;
    msg.name.assign("JBWJCGHYVYVQKQMIFPHAU");

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
    msg.setTimeStamp(0.426747585659);
    msg.setSource(65092U);
    msg.setSourceEntity(157U);
    msg.setDestination(15119U);
    msg.setDestinationEntity(219U);
    msg.op = 92U;
    msg.name.assign("VXNAAKVOCHMSYUJNQXWHXUTUDQWXPNHWIHANZJPNNBYJHACRDYSYKMMLVEVRUDKBSTLDQKWFBYSLDOBELWMXFXMVDWPWCUMJECTOVGRXPPFGCIMFWJGGRQUFSZVOLBYMQLGSKGYASOOBYFFEZEBCRITRNPQUVOKRPOJZKHCFAYPFTGIKEJHGZUAZKTFUZZSK");

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
    msg.setTimeStamp(0.0818920338426);
    msg.setSource(61901U);
    msg.setSourceEntity(147U);
    msg.setDestination(4495U);
    msg.setDestinationEntity(222U);
    msg.type = 101U;
    msg.htime = 0.513529456753;
    msg.context.assign("UWBKNHSLCGSMZOYYORVKDFMGJWKADTKFJSZDCRBPLNTGYKJBVLMPJCWASHEFVLQWXQDXEJRFXFKKTEVSMCOGWTQYTLDINCZMCRISTIOVWUZHXUI");
    msg.text.assign("VETONGJZRQSCDGNBCMRVPYWZWIBGIZQPFNAQQLPRLDDUPMVSJJTUFCJIGQNIOCZWCXVUIKNOSAOAGHWRHYSCDKLECMRUEFADMVUNKFKM");

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
    msg.setTimeStamp(0.626920530172);
    msg.setSource(25579U);
    msg.setSourceEntity(10U);
    msg.setDestination(9538U);
    msg.setDestinationEntity(28U);
    msg.type = 193U;
    msg.htime = 0.466869731324;
    msg.context.assign("QVOVWOIYGGZJXSPIYTIZJBSS");
    msg.text.assign("PARCEQMZMRV");

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
    msg.setTimeStamp(0.922932850612);
    msg.setSource(55431U);
    msg.setSourceEntity(101U);
    msg.setDestination(3294U);
    msg.setDestinationEntity(19U);
    msg.type = 171U;
    msg.htime = 0.380116446738;
    msg.context.assign("JDSJAPTLFUOATVNUDBBSXXVZMTYDPNLLYPJPILJZDXGXMUIRNPNAMRC");
    msg.text.assign("ZIEHTNQVWLEHICXAWZMTMDRTQRAUXJVXVXZPUENSNNFFLEDLACESRPNIPOAAOGBOBWIRLQORDCZXHVZUWCBIROZTDXVHLVQQFNKYHFDOUVBSSTQEKSDHDYKNHFWWIQRWHKCVJWYTABKYABGIXGLQODBAJSXCBUQPEJICGYPFZMIFRFVFUYLNUW");

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
    msg.setTimeStamp(0.391635926107);
    msg.setSource(45824U);
    msg.setSourceEntity(166U);
    msg.setDestination(35083U);
    msg.setDestinationEntity(185U);
    msg.command = 115U;
    msg.htime = 0.150031219954;

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
    msg.setTimeStamp(0.108379279748);
    msg.setSource(50335U);
    msg.setSourceEntity(145U);
    msg.setDestination(10422U);
    msg.setDestinationEntity(87U);
    msg.command = 222U;
    msg.htime = 0.824379854267;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.htime = 0.174914581715;
    tmp_msg_0.context.assign("IORJEKMRAFVMPLSUBZWPXHDIJOP");
    tmp_msg_0.text.assign("SIAJFAKJCJG");
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
    msg.setTimeStamp(0.399676592402);
    msg.setSource(760U);
    msg.setSourceEntity(24U);
    msg.setDestination(60354U);
    msg.setDestinationEntity(8U);
    msg.command = 102U;
    msg.htime = 0.0485916231157;

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
    msg.setTimeStamp(0.0192234039277);
    msg.setSource(40340U);
    msg.setSourceEntity(120U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(96U);
    msg.op = 12U;
    msg.file.assign("EOEBVJUCGJOPZURBCQLSERWGJTUZGCOKZVLLWHAHUGYRAUTHLLOSBVXNPSKQJWPEQSDRLYRICYOYQDSHMDKEHDHGCSBKFDQNOIXZGWGMMKSRSXCTGJTOMFINQ");

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
    msg.setTimeStamp(0.84144003532);
    msg.setSource(56052U);
    msg.setSourceEntity(177U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(100U);
    msg.op = 152U;
    msg.file.assign("XTUXKHRBPZTZQCQJIXQGXCVVIQBAWMRMICWCIBQSDBHOJDOXHFTABLIUFBALLTBNRJEMFSHCQNVVDFDPEXDEKZHZKDNJVYSPXKKXUFVONTANLMREKUSDU");

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
    msg.setTimeStamp(0.243347438049);
    msg.setSource(22455U);
    msg.setSourceEntity(182U);
    msg.setDestination(31321U);
    msg.setDestinationEntity(4U);
    msg.op = 37U;
    msg.file.assign("EHONPHJMRYJSXCXYQQIGVWYTNKNBGUYRAXGGDRJUJDXSBRICZACKTIYHUQPITZUXOHSRSJVHZPKXMJRHBUVTIENIFVMPXOYVCOQISODWRHFFRDKBCDZQTSSTLMQKGGSILLWMPP");

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
    msg.setTimeStamp(0.985443885694);
    msg.setSource(26005U);
    msg.setSourceEntity(89U);
    msg.setDestination(4883U);
    msg.setDestinationEntity(200U);
    msg.op = 31U;
    msg.clock = 0.104860912286;
    msg.tz = 33;

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
    msg.setTimeStamp(0.702960454266);
    msg.setSource(48985U);
    msg.setSourceEntity(209U);
    msg.setDestination(50323U);
    msg.setDestinationEntity(33U);
    msg.op = 103U;
    msg.clock = 0.990260078814;
    msg.tz = -40;

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
    msg.setTimeStamp(0.367405462099);
    msg.setSource(44524U);
    msg.setSourceEntity(200U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(105U);
    msg.op = 77U;
    msg.clock = 0.590467323813;
    msg.tz = -44;

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
    msg.setTimeStamp(0.976006347797);
    msg.setSource(10675U);
    msg.setSourceEntity(13U);
    msg.setDestination(21677U);
    msg.setDestinationEntity(28U);
    msg.conductivity = 0.227393071107;
    msg.temperature = 0.23070869679;
    msg.depth = 0.822800284108;

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
    msg.setTimeStamp(0.0991361119818);
    msg.setSource(39772U);
    msg.setSourceEntity(169U);
    msg.setDestination(49670U);
    msg.setDestinationEntity(195U);
    msg.conductivity = 0.739035959108;
    msg.temperature = 0.322738451001;
    msg.depth = 0.813090863244;

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
    msg.setTimeStamp(0.86146080521);
    msg.setSource(48U);
    msg.setSourceEntity(177U);
    msg.setDestination(39211U);
    msg.setDestinationEntity(165U);
    msg.conductivity = 0.0776533925864;
    msg.temperature = 0.892116657864;
    msg.depth = 0.61205379605;

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
    msg.setTimeStamp(0.288801799647);
    msg.setSource(36771U);
    msg.setSourceEntity(208U);
    msg.setDestination(58823U);
    msg.setDestinationEntity(172U);
    msg.altitude = 0.247870322065;
    msg.roll = 11825U;
    msg.pitch = 22807U;
    msg.yaw = 32261U;
    msg.speed = -30533;

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
    msg.setTimeStamp(0.576323211329);
    msg.setSource(38208U);
    msg.setSourceEntity(50U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(13U);
    msg.altitude = 0.380638038765;
    msg.roll = 17394U;
    msg.pitch = 55448U;
    msg.yaw = 5747U;
    msg.speed = 21566;

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
    msg.setTimeStamp(0.405534716122);
    msg.setSource(10742U);
    msg.setSourceEntity(26U);
    msg.setDestination(8293U);
    msg.setDestinationEntity(16U);
    msg.altitude = 0.284038123391;
    msg.roll = 46788U;
    msg.pitch = 8477U;
    msg.yaw = 57723U;
    msg.speed = -7662;

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
    msg.setTimeStamp(0.273090554463);
    msg.setSource(6902U);
    msg.setSourceEntity(35U);
    msg.setDestination(43987U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.280301703658;
    msg.width = 0.473645085064;
    msg.length = 0.573162705148;
    msg.bearing = 0.572107166734;
    msg.pxl = -13775;
    msg.encoding = 149U;
    const char tmp_msg_0[] = {-39, 44, 110, 56, 124, -61, 8, 10, -112, 86, 105, -57, -59, -122, -101, 107, -49, 27, -59, 85, -97, 18, 23, -118, 94, -84, 96, 88, -69, 6, -44, 21, -103, 21, 112, -79, -80, -26, -119, 66, -34, 125, -91, -13, 122, 58, 44, 102, 62, 54, 24, -35, -108, 49, 17, -10, 106, 71, -61, 28, 76, 45, -73, -125, -21, -44, 48, 11, -104, -114, 5, 81, 85, 83, 61, 112, -75, 77, -100, -85, -42, 4, 85, -78, 66, -32, 43, -57, 91, 50, -103, -117, 22, 29, 71, -37, -44, 46, 61, 120, 47, 57, 30, 51, -84, 19, -105, -39, 83, 56, -29, -59, -91, 43, -112, -119, 33, -60, 102, -61, 11, -8, 66, -94, -30, -14, -12, 79, -70, 105, -126, -109, -119, -59, 33, -91, 102, 67, -84, 40, 122, 79, -78, -75, -19, 110, 116, 17, -12, 121, 74, 64, -19, 89, -52, -56, 34, -68, 75, -81, 34, -105, 54, -107, -100, -113, 41, -8, -34, 90, -9, 80, -126, -117, 91, 1, 55, 42, -62, 82, -85};
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
    msg.setTimeStamp(0.814456010854);
    msg.setSource(16977U);
    msg.setSourceEntity(224U);
    msg.setDestination(47938U);
    msg.setDestinationEntity(136U);
    msg.altitude = 0.356032018131;
    msg.width = 0.791834356989;
    msg.length = 0.710830464233;
    msg.bearing = 0.629010034645;
    msg.pxl = 19215;
    msg.encoding = 16U;
    const char tmp_msg_0[] = {111, 120, 59, -72, -7, 8, 47, -83, 109, -109, -26, -24, -23, -57, -20, 50, 116, 63, -78, -59, -80, -69, -39, 10, 113, 110, 94, 88, -19, 19, 67, 26, -40, -122, 22, 17, -113, -12, 36, -11, 63, 124, 112, -13, 117, -48, 72, -81, 23, 93, 80, 31, 73, -121, -111, -38, 61, -15, 64, -17, -109, 118, -25, 38, 54, 19, -8, -6, -5, 89, -50, 63, -32, -38, -29, -29, -67, -115, -106, -102, -118, -54, 31, 52, -121, 118, -111, -77, 96, 107, -89, 99, 94, -11, 61, -29, -58, -127, -102, 19, -78, 24, -97, -107, -106, -8, 98, 74, 4, -118, 62, 10, 7, -106, 26, 91, 86, -101, -62, 13, 109, 2, 113, 17, -107, -38, 36, 44, -127, -4, -90, 11, 61, -105, 36, 32, 65, -16, -125, -32, -122, -59, -5, 112, -28, 6};
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
    msg.setTimeStamp(0.67181483076);
    msg.setSource(44593U);
    msg.setSourceEntity(154U);
    msg.setDestination(13568U);
    msg.setDestinationEntity(37U);
    msg.altitude = 0.518170108985;
    msg.width = 0.672894761009;
    msg.length = 0.0441370700759;
    msg.bearing = 0.60397014632;
    msg.pxl = -3392;
    msg.encoding = 157U;
    const char tmp_msg_0[] = {41, -56, -99, 50, -40, 24, 73, 25, -2, -90, -24, -127, -6, -62, 56, 52, 118, -68, 22, 90, 70, 0, 126, 70, 101, -30, 117, 98, 82, 63, 97, -54, 4, 39, -2, 125, -51, 9, -45, -22, -111, -100, -67, 107, 6, 54, -33, -55, 87, -125, -96, 61, -10, -38, 89, 82, 117, 100, -38, 66, -48, -56, -63, -10, 34, -97, -120, -127, 10, -90, -80, -110, -27, -4, 105, -70, 42, 47, -38, -1, -43, -39, 95, 89, 39, 47, -98, 83, 100, 95, 18, -6, -10, 36, -123, -128, 8, 42, 52, 125, -26, -4, 75, 31, 82, 61, 33, 29, -86, 8, -24, -76, -42, -35, -64, 45, 126, 84, -98, 109, -95, 48, -54, -1, -92, 19, -120, -48, 36, -5, -121, -119, -73, -114, 4, 26, -41, 21, 32, 85, 120, 33, -62, 57, -58, 96, -65, 61, -107, 75, 113, -26, 39, -70, 70};
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
    msg.setTimeStamp(0.403466000355);
    msg.setSource(6802U);
    msg.setSourceEntity(17U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(65U);
    msg.text.assign("CWTGHMSVBFZDXKQQPJRSYAEOAWOAOJJHUFUFSDUNBYE");
    msg.type = 179U;

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
    msg.setTimeStamp(0.61338694632);
    msg.setSource(61721U);
    msg.setSourceEntity(40U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(169U);
    msg.text.assign("CSWKJDRGKTECAOHXFERKLVRRHFLDNBOIUQUAGLCEAMDPRIBOGASMSCFFXEURIPKUTWAUZFOXWISTVPFPRXNPYXDTOSXUHQNRNDQLJMVJZESLWAZSDVPKIBAODZBREKCZEHVYTMOZQHVZCKNWCMAAGB");
    msg.type = 73U;

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
    msg.setTimeStamp(0.325652621613);
    msg.setSource(14786U);
    msg.setSourceEntity(144U);
    msg.setDestination(10460U);
    msg.setDestinationEntity(205U);
    msg.text.assign("SONWFRGJDRMAUWDKIYHAPLJGVTQSNRLXBSHJYMBHLZPFIUTDUQUMFSVYPHZUHUATFMBXNCTYSGSZEKQUZHLPKVFYQCUMURZLMCXIJHKCGCPROVPPAZYVECQKZHRWTHXQMVJFIFMLBCWIJWXOXFP");
    msg.type = 232U;

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
    msg.setTimeStamp(0.530187217373);
    msg.setSource(13725U);
    msg.setSourceEntity(184U);
    msg.setDestination(53881U);
    msg.setDestinationEntity(241U);
    msg.parameter = 205U;
    msg.numsamples = 230U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 58504U;
    tmp_msg_0.avg = 0.736417731895;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.249214275745;
    msg.lon = 0.394106592257;

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
    msg.setTimeStamp(0.339520804828);
    msg.setSource(31030U);
    msg.setSourceEntity(87U);
    msg.setDestination(9166U);
    msg.setDestinationEntity(232U);
    msg.parameter = 49U;
    msg.numsamples = 55U;
    msg.lat = 0.208962212436;
    msg.lon = 0.355922839957;

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
    msg.setTimeStamp(0.444587937256);
    msg.setSource(20327U);
    msg.setSourceEntity(79U);
    msg.setDestination(12382U);
    msg.setDestinationEntity(76U);
    msg.parameter = 158U;
    msg.numsamples = 152U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21277U;
    tmp_msg_0.avg = 0.241545494898;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.564827582547;
    msg.lon = 0.787953570526;

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
    msg.setTimeStamp(0.771200467172);
    msg.setSource(17125U);
    msg.setSourceEntity(12U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(230U);
    msg.depth = 4213U;
    msg.avg = 0.891263102939;

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
    msg.setTimeStamp(0.263157175468);
    msg.setSource(54003U);
    msg.setSourceEntity(189U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(145U);
    msg.depth = 16073U;
    msg.avg = 0.00892735574122;

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
    msg.setTimeStamp(0.489704103589);
    msg.setSource(28256U);
    msg.setSourceEntity(251U);
    msg.setDestination(25467U);
    msg.setDestinationEntity(126U);
    msg.depth = 34332U;
    msg.avg = 0.834105635057;

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
    msg.setTimeStamp(0.189222695441);
    msg.setSource(29956U);
    msg.setSourceEntity(249U);
    msg.setDestination(37917U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.0508313316867);
    msg.setSource(12988U);
    msg.setSourceEntity(79U);
    msg.setDestination(8225U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.463929511496);
    msg.setSource(56701U);
    msg.setSourceEntity(199U);
    msg.setDestination(15003U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.270683260881);
    msg.setSource(58223U);
    msg.setSourceEntity(1U);
    msg.setDestination(51255U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("MHJHASNMKFZMXBNFYLIPLESITHLLEHKJURITJQRYIZCAGWBGPGCPDVGEFKKBNJBKUYZYUNFCOSLZSUARDNKHNREJZHPYTWGXDFBSIGVATQWFSQYXSOXPUNXOQPJRCPLAJKMVTEPVNXLXCEACMOEEANQVIVWBYBLGVUXEFS");
    msg.sys_type = 187U;
    msg.owner = 34011U;
    msg.lat = 0.926032293874;
    msg.lon = 0.139819086578;
    msg.height = 0.257378984949;
    msg.services.assign("GUKKFNSYGPXBDXBLWJLUOCRADTPSVOHPXUYRVAYIEQKMTLREKJFXLIFWIIVDHOXTFEQNDIVHBVKFMARBTAQPGSZTOSDCXNXZXYCNNZLSUMDMKJJOAFURWAYMHIBEQPVCCZNWMIWBASUTCYZ");

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
    msg.setTimeStamp(0.859547821314);
    msg.setSource(51424U);
    msg.setSourceEntity(229U);
    msg.setDestination(14408U);
    msg.setDestinationEntity(57U);
    msg.sys_name.assign("ORQUAXOKRBFYHUFOTIWDHJ");
    msg.sys_type = 65U;
    msg.owner = 13119U;
    msg.lat = 0.306225244162;
    msg.lon = 0.42129309087;
    msg.height = 0.391110416401;
    msg.services.assign("YIPLMZVRWSBGQCAWSGTVWRGSACCOQEMDIYZPBCLQODFUFZLUKOQZDXXPCNJTXTMQVFPZYNHLBZNCNYIYSUBQRBUOHOQHWOEJAPFKTRVSEHVRMETZEUDIYWYXJBNTUFWSUFUFSDXRALERTIBJJIKGNXVWAWMAOYLBNMCNHFIKAOWJZDXH");

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
    msg.setTimeStamp(0.293829622717);
    msg.setSource(48735U);
    msg.setSourceEntity(230U);
    msg.setDestination(29629U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("IYNFLHDIUYTJWORBKTUZTMDSFGOMRXPDNGIBUMFNHKGLGNALYQHIOZPCHVDWLZYRGQKJOLMCCHHTJVZSJPAECTVJZDRPCFQHPEDOQIUUMEMZJBZUCLXXZNTABXOMREQFTOWDXVFARSJRRIICSKAERGSFGVVCXXBLGBASQLFOJRNDKNCCHEDHYOQWVKAPPTZEBKAGYYIEUWMYSFEUWAUWNKSPUMGOPXBNQJQMYTFDXLSNHTYWVX");
    msg.sys_type = 14U;
    msg.owner = 7781U;
    msg.lat = 0.175648500094;
    msg.lon = 0.429968188365;
    msg.height = 0.294265831592;
    msg.services.assign("IBYSNBCBBVSCQFRRDEQGZLMOFDVJLCESYXZNDBWHBZKMTSAGFCODVCTQLZZKRUPUXFQQPETJYIJYLGUBHRWUQIMTRMZQRJDXEHRGFPVKRANZLTJASUZUINXPJLPHOMNXUYNOVZKFXFJJXOQODWHYSRNCAFOIWTLDTHJKTCEHDTUEQISGHILGSDYOLAPHWMMUWNXOKDAABMEGYOEFBGHKNJLNIBVGESKXKAWPFVYS");

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
    msg.setTimeStamp(0.708799515903);
    msg.setSource(48343U);
    msg.setSourceEntity(233U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(125U);
    msg.service.assign("CULIJEQBWHGKDJIOMCHMLFZTYNPFVMHGGIBYHFTDREEPXSEYUCYYVZNVLOVHFUPWZAVDTRGTGK");
    msg.service_type = 44U;

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
    msg.setTimeStamp(0.0375488006626);
    msg.setSource(31881U);
    msg.setSourceEntity(91U);
    msg.setDestination(53914U);
    msg.setDestinationEntity(5U);
    msg.service.assign("IVMNZGSYGCDUCDJCBAUWVPAHJEXQWCKGLJCBEQJXQXZRDEDWBSQSBROUQTXYASRGKQOOVUFXOFYCMJTOTLHMEPFTTSPFNNGJLVJORCERHRRMAVZWTIXDMUMGMKNUWZLHUKWATIKCKHYASNKODGBSPBMFFEWGDNBKHVNQLLHYYZVY");
    msg.service_type = 101U;

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
    msg.setTimeStamp(0.766677478758);
    msg.setSource(63116U);
    msg.setSourceEntity(22U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(219U);
    msg.service.assign("FVICETQMYVGFRGGYESWKLZOEDJHAGXONPTAUNOVXRXNJSDCHYXKINRNJTHTASWAFB");
    msg.service_type = 186U;

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
    msg.setTimeStamp(0.0966877883515);
    msg.setSource(37010U);
    msg.setSourceEntity(50U);
    msg.setDestination(34555U);
    msg.setDestinationEntity(77U);
    msg.value = 0.62237380013;

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
    msg.setTimeStamp(0.0943975599109);
    msg.setSource(35889U);
    msg.setSourceEntity(20U);
    msg.setDestination(20439U);
    msg.setDestinationEntity(68U);
    msg.value = 0.755557350458;

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
    msg.setTimeStamp(0.0163692734062);
    msg.setSource(46370U);
    msg.setSourceEntity(116U);
    msg.setDestination(22830U);
    msg.setDestinationEntity(153U);
    msg.value = 0.721168513716;

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
    msg.setTimeStamp(0.833821869253);
    msg.setSource(2655U);
    msg.setSourceEntity(65U);
    msg.setDestination(43599U);
    msg.setDestinationEntity(240U);
    msg.value = 0.813353887098;

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
    msg.setTimeStamp(0.660408558456);
    msg.setSource(19040U);
    msg.setSourceEntity(166U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(107U);
    msg.value = 0.804673728905;

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
    msg.setTimeStamp(0.641442319571);
    msg.setSource(5975U);
    msg.setSourceEntity(81U);
    msg.setDestination(34069U);
    msg.setDestinationEntity(44U);
    msg.value = 0.761234570489;

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
    msg.setTimeStamp(0.560226680252);
    msg.setSource(42289U);
    msg.setSourceEntity(21U);
    msg.setDestination(20898U);
    msg.setDestinationEntity(67U);
    msg.value = 0.593352491973;

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
    msg.setTimeStamp(0.234702321478);
    msg.setSource(26280U);
    msg.setSourceEntity(73U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(156U);
    msg.value = 0.439621912227;

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
    msg.setTimeStamp(0.577554956901);
    msg.setSource(2275U);
    msg.setSourceEntity(19U);
    msg.setDestination(10299U);
    msg.setDestinationEntity(194U);
    msg.value = 0.647305530197;

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
    msg.setTimeStamp(0.331496537987);
    msg.setSource(15979U);
    msg.setSourceEntity(219U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(201U);
    msg.number.assign("BCVOPZQGZWOURTHLWMYVBFVTYPFBQLBNRSHGGRAMBPRMTJVBINHUXDDKSMQHXPCOYXAJCWQZAPUOGLAFQNKLYKWNYRDXNNYFRLIFZXKREAXKDXUJFHYW");
    msg.timeout = 55585U;
    msg.contents.assign("GNMMDRFGXTBWCVOLTZEWMXKIAZELECCGXQQFKVVFEAFWPPADQWQJDTGINLQJIYHMSTAY");

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
    msg.setTimeStamp(0.253040404237);
    msg.setSource(52117U);
    msg.setSourceEntity(65U);
    msg.setDestination(17693U);
    msg.setDestinationEntity(55U);
    msg.number.assign("NAHPQIPFERQTHWNERWTLOLIADIGVOLEAYUKYB");
    msg.timeout = 35792U;
    msg.contents.assign("PSZAWCEUVJK");

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
    msg.setTimeStamp(0.865378608975);
    msg.setSource(13061U);
    msg.setSourceEntity(144U);
    msg.setDestination(5326U);
    msg.setDestinationEntity(36U);
    msg.number.assign("HUJQWITVLSMMHCPNUFLYEUWCETBCERMSINABVLUZGKRVIEXVOGJPGVSARZYQQVFVW");
    msg.timeout = 24768U;
    msg.contents.assign("UWPSRLULGUNRABQJNIWSZCEDHNIYAMFJPPLXVRVORBOBCTJZSHSKJWOZOJFJSQMEKBTLGNRGPDVSQDPANXOHGCDAZNZHQQDXXBWTKEPNXTDRLJZNOZAWLCFXMMRWYUSYCITSWPYHJV");

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
    msg.setTimeStamp(0.281886353002);
    msg.setSource(58266U);
    msg.setSourceEntity(104U);
    msg.setDestination(20685U);
    msg.setDestinationEntity(81U);
    msg.seq = 3533734971U;
    msg.destination.assign("RWYQDXPCNMVQYSZEOJESGIWKUCGGLOYENSLUWHGZSPMCSJNBQQGYEKUMLBJRHNYNWIDBHSKOFVHFOYFQYKPRNFZTFEACAIMOWQHMBCITUPGXBVFPTKSIJPMDQQXVAUXJDAOVEGDJAFMUIRKKQIMTEHEAHBXAWXTZZQMZXKALJDIUTLIZEPLGFYVNEXADAKGWZHCIWZPHRNBCJ");
    msg.timeout = 1076U;
    const char tmp_msg_0[] = {-116, 98, 69, 122, 26, 4, -106, -57, -52, 27, -86, 110, 82, 115, 2, 70, 107, 73, 40, 41, 98, 46, 14, -88, 51, -47, 48, 45, -66, -23, 29, -10, -77, 16, -78, -35, -3, 101, -123, -64, 105, 43, -22, -29, -119, -49, 29, 90, 4, -7};
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
    msg.setTimeStamp(0.987676515113);
    msg.setSource(5169U);
    msg.setSourceEntity(118U);
    msg.setDestination(25632U);
    msg.setDestinationEntity(124U);
    msg.seq = 1272140445U;
    msg.destination.assign("AVNZASECRDPBLXLMTDWWNHRWGBKSIEZVOYJMZEAXBOCAXSRRWDUOAIQRQBFTRTXBOTTEDSCGWIENHUYUFSAKERCSGVUXUWOHLSUOQNMGQPIIVDERVRUKPPRI");
    msg.timeout = 52668U;
    const char tmp_msg_0[] = {87, -101, -6, 16, 102, -34, 86, 105, -100, -113, -111, -93, 118, 91, -85};
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
    msg.setTimeStamp(0.705558052953);
    msg.setSource(2513U);
    msg.setSourceEntity(53U);
    msg.setDestination(4161U);
    msg.setDestinationEntity(150U);
    msg.seq = 3980493057U;
    msg.destination.assign("JMRKQEPHEQJIGNTNLDKTCVDLUUSBJMETXMCFUTPBNNGOSGLHPEMERNQSBDRMCZOXPYVEHBDCZPXNOYQXMMKEHYTVFUUGZAWQGPKKRDZDONYINZJMPEQXETJBWKNPYTXPIOAAGWBCOQFBIDDHFGOPMCKOVXVDLIGNYLYWALZJUAXVSAFOLHCW");
    msg.timeout = 17729U;
    const char tmp_msg_0[] = {123, 126, 41, -93, 113, 55, 44, -77, -64, 28, 98, -75, -95, -99, -84, -111, 63, 33, 48, 53, 118, 17, 75, -29, 120, 8, 54, 81, 31, -51, 45, -123, 35, -33, 81, 85, -122, -121, 111, -61, -98, -64, 66, 87, 82, 25, -101, -59, -113, 52, -16, -48, 15, 61, 107, -104, -86, -99, 46, -11, -119, 4, -75, -2, 61, -69, 75, -57, 123, -26, 10, -85, 101, -121, -39, 80, 122, -118, 33, -100, 93, -10, 28, -26, -39, 113, -17, 57, -49, -86, 27, 116, -50, 34, 44, -44, -41, 40, 68, -117, -122, 36, -16, -45, 92, -85, -31, -47, 92, -3, 5, -36, -27, 100, -67, -36, -54, 20, 84, -24, -93, 38, -19, 91, -47, 113, -60, -127, 125, -48, -12, -19, 78, 41, 69, -90, -79, 11, 45, -125, 76, 44, -45, -89, -8, -123, -96, -15, -3, -95, 70, -41, 98, -15, -66, 83, 36, 31, -61, -96, 64, 25, -81, 102, -60, 37, 123, 10};
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
    msg.setTimeStamp(0.445253959771);
    msg.setSource(43604U);
    msg.setSourceEntity(242U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(219U);
    msg.source.assign("TTIHXIYHQORUGGSITJFKBXZLGEPBVKKWWQTJTYDDAYJPIZKCLJYETNKDUXBRUVFPJGEWCSOMCCAVSCNLSRSGZIRRFSGJBCQVHQKXJMDGEPJUVOENVSMMVDORMPHWYXNDOBWABMHXLFHQATLATRRZWSKIYPZZHWDHARONBLELETQJYUKDEUINPOOWSISQYUOGANCXUXFAXQUDNMQPBBIKUFPMILVFKRZNPYLQDNEJYZMAXVZ");
    const char tmp_msg_0[] = {-73, 46, -99, 31, 83, 82, 68, -84, 34, -54, -17, -81, -9, 93, 14, -122, -70, 110, -28, -87, -2, 21, 91, -68, 90, 55, -79, 20, -31, -62, -95, 80, -26, 119, 24, -124, 34, -25, 6, 106, 31, -48, -85, 2, -90, -62, -26, -44, -98, -128, -6, -87, -3, 36, -125, -26, -50, -39, 50, 89, 10};
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
    msg.setTimeStamp(0.941453187574);
    msg.setSource(18132U);
    msg.setSourceEntity(187U);
    msg.setDestination(35670U);
    msg.setDestinationEntity(252U);
    msg.source.assign("VVRNDMQCNSPCKYKBCQILNTYGFABFRSNKLRGDEERUEEHISXVPADVWXEGSFVPGASHUKTKXAIAMZ");
    const char tmp_msg_0[] = {59, 87, -18, -18, -125, 45, 56, -1, -97, -118, -29, -78, 112, 121, -35, 86, -88, 106, -72, 64, 125, 60, 88, -44, -36, -47, 8, 79, -29, -27, 5, -33, 73, 45, 3, 8, 13, -43, 70, 104, -95, 41, -8, -53, -47, -100, 9, -91, -61, 82, 0, -64, 70, -1, 24, 15, 96, 82, 83, 76, -74, -78, 66, 24, -13, -20, -102, -56, -95, 28, 59, -47, -3, 74, 112, 52, -50, 111, -118, -127, -101, 92, 18, 60, 108, -21, 61, 89, -105, 5, -37, 124, -18, 99, -50, 18, 67, -88, -69, 37, -89, -40, 119, 105, -29, 32, 51, 49, -71, -8, 67, -66, -62, -5, 14, -1, -76, 108, -93, -128, 50, -116, 36, 86, -115, 8, 8, -95, 67, 16, 5, 114, 53, 74, 18, 63, 108, -113, 16, 33, 112, 109, 34, 20, 30, 50, 49, 117, 64, -49, -9, -55, -116, 111, -54, -99, -65, -41, -43, -103, -28, -6, -72, 46};
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
    msg.setTimeStamp(0.0521443693592);
    msg.setSource(50573U);
    msg.setSourceEntity(93U);
    msg.setDestination(21259U);
    msg.setDestinationEntity(225U);
    msg.source.assign("LSTNTLOPUMPXHLVUUQRYRWITJXZATPBDHREBDWAXWTMWMILGBHIVUESQCOXZXEIERFZTBOEYPJJLEZSSMROYZLKHNMTKSWHWZOAJQYRIKSHODOAIEXPBGRGXJAPPLCZKIFNGRUPDJTVDDMMLCNMNYFVRQGHWCJCGYWETQQVWJXUE");
    const char tmp_msg_0[] = {-111, 106, -61, -119, -105, -26, 52, 107, 87, 123, 51, 28, 71, -8, -115, -109, 2, -75, 105, -27, -102, 8, -123, -80, 23, -1, -87, 10, 102, 86, -109, 125, 79, 68, 17, 38, 2, 75, 3, -20, -94, -74, 77, 95, 13, 9, -126, -22, -83, 52, 70, -94, -12, -57, 53, 100, -51, 40, -56, -71, -6, 111, -85, -77, -98, 44, 61, 51, 68, 18, 85, -117, 41, -55, -87, -64, -73, -61, 49, -37, -18, 82, -78, -52, 56, -73, -61, 2, 76, 26, -84, -8, -2, 98, 4, -24, 41, 92, -48, -103, 124, 112, 119, -84, -59, -91, 24, -36, 30, 16};
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
    msg.setTimeStamp(0.881757579382);
    msg.setSource(54965U);
    msg.setSourceEntity(153U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(57U);
    msg.seq = 148761608U;
    msg.state = 125U;
    msg.error.assign("CPQHWTDDMRNOPXAKXOFBCGDEBQEDKWATNRKJJKJBEXYBVCFYOTNOUPTDPYQHFPNWCOAPBJDEILSS");

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
    msg.setTimeStamp(0.461079338538);
    msg.setSource(879U);
    msg.setSourceEntity(185U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(95U);
    msg.seq = 1976996433U;
    msg.state = 177U;
    msg.error.assign("CVDFFMVIPYCUGHRXRPNZWOMMCPIELVUZPSKPJSHWZQPCUAXHZZANOGLIASZYGETTHSARRBKVOQCFKLDUTNWQKMHEKJFVKJZQHRXLHRAGVSHJKFJCIWNTKRAIBKUJMIVYWNNYMAPVM");

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
    msg.setTimeStamp(0.363490507435);
    msg.setSource(26472U);
    msg.setSourceEntity(22U);
    msg.setDestination(31280U);
    msg.setDestinationEntity(31U);
    msg.seq = 3592856233U;
    msg.state = 127U;
    msg.error.assign("UYEJOHEFTUOUUGBLADIVARVHTBLOKNJMHNBVNMXWOUNDYYOTSLYJXUERSBTPNDGDSGHVJARCXPTSJZJKCMVYUBUCJWXZZOECFHGFKYKFBGFXIWAMANWTCWCFYTQHSEDKEKENDMJJUPRLMWZFZQLKCAEIOTRZXGPFPYSLVTHGVLWXOIYIHNPLLVQFMKNPNQXBIPZOOYHWCJQSRIPFBVQGILEIS");

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
    msg.setTimeStamp(0.614508543821);
    msg.setSource(29175U);
    msg.setSourceEntity(31U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("HAQRLRTLKUTWKWDEQYJLAAQSNADUBHCPMRGGGEVTTPUTTVFKSEVBPYOIBZNCKMIYXTYSAUQXJOJMJMPKWWZCZDYKPALEIHMVCXFPKHDGWEZGHNLFCYBVFQLANXYPUNKRDDVZIRGSTZONOGNFQQZBJLLFAQNOJVBHJWDELNMPBGXIYEWXDCIZSFGTMBISCASOKEPSWYUVSUBWXSAJMGRVEICHUHMTXERXRWRJFOVDCQFHYRIOMQOFUZDK");
    msg.text.assign("NILKCXFZVKBFOMWGBLIZFGLHZGWCTHXQOOFDKQDKOUAIACRSIXJKMYYVXNFJNZGULAWFHTJBZUVXOGDJSXDRZPYSQQBQWTJKYVLVBASXMPGXPMIRUOPC");

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
    msg.setTimeStamp(0.962442746955);
    msg.setSource(65529U);
    msg.setSourceEntity(46U);
    msg.setDestination(60305U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("UAYGAJPUICOJOXCYYOGBJSLDJSCFYXMRRDFISMFNKXSUSWNNBXLVVNZOIGMRSQVFKWVBWTPTBLEZPSZPIULMBXMKTNRGOLKEWUQBXGFTZUNQEKCCWGVPKOMTTOVXVWHTHAFSPQHCZNJSGSPHLCAWYXUTIUEEILJRDKYEEIARDTYXBVQCAOALPQAEOZHHXGWAARCDM");
    msg.text.assign("LIWUKBYSXHKFCJAFDILGFNOTSJWBZNARYHPMAMFMUGNXLDVVPMAVJ");

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
    msg.setTimeStamp(0.546590068933);
    msg.setSource(31701U);
    msg.setSourceEntity(47U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("PBFOXCYQKBSZQUYZYWLFZLGILRJZKDMHHJKJSCUBNZQOBNWFEMZZGUBLNHNCDVJAIUWIDDWEYCPTFUQOWDMVDTVNVXTRHPKHCSBXVPGFSJHKXOCIITIHPQSATEVUUHCOZMBTHGPWFFMEUJTGWIRXPBY");
    msg.text.assign("KQCTPSDOIKNWAFYIMEMAAWXJGEOYMQXCWUHBGRWYXRQZMDPCEGVNBEGXHCYOPCHDJNZZRYJPIQWNUDWMHGKUPFDMEYAXIUSXTFGSEEXOLKKRCKFLBACDTSFTWINCTTZQORUVJPRPYBZPOBRQZQHAGZBPRJDELBWQXTHNUDRGSCXUACUMHJVPMFN");

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
    msg.setTimeStamp(0.375962951751);
    msg.setSource(47671U);
    msg.setSourceEntity(72U);
    msg.setDestination(23214U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("RZLLKEAUKIOIZTIFDREGMXJGYCCSHTYDPFGLSXJRIJQXNCDBUJPAZSMAMWCJHWYEVDGFCDXFFPRDAIOEKXDLQAQFUTYTYCGLWYGYJMELBKVTNHAXBYDNOTAWOPRLGUVSVUCZISMAERJQFLSHUNCPDBSLYRSNPNOOHJKWTZOTKJGMABUMKKBPOFWVSBZRXOLRH");
    msg.htime = 0.699013129753;
    msg.lat = 0.770564344575;
    msg.lon = 0.428408016525;
    const char tmp_msg_0[] = {-89, 37, 80, -127, -51, -50, 5, 33, 61, 90, -43, 77, 78, 25, 29, 86, -8, -3, -90, -77, -6, 15, 21, 42, -85, -108, 64, 92, -28, 42, 106, -59, -88, -61, 6, -18, -78, -69, 30, -86, -94, 0, -74, 62, 10, -32, 88, 15, 115, -113, -30, -64, 79, 89, -85, 85, -65, -127, 82, 4, 91, -7, 66, -110, -76, 115, -38, -15, 89, 95, -110, 87, 83, -31, 120, 97, 1, 67, 38, 5, 11, -78, -37, 49, 0, -18, 35, 126, -13, 19, -85, 124, 61, -74, 71, 43, -102, -29, -38};
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
    msg.setTimeStamp(0.466240269531);
    msg.setSource(22668U);
    msg.setSourceEntity(135U);
    msg.setDestination(34967U);
    msg.setDestinationEntity(211U);
    msg.origin.assign("NUIQQMZQRTXMFHLIDTIBOKXFUMWBXDWJSEJEAFGAFQZUWTYTRXLKNBAEGGCTAHHNOSZWMYMDRNWVSBBPUOOQIFSGMMXCWAJDMBTZVFSYCGWHXQEUJABBINYVTQVRJOEUBFWRFPKHBIDKGARPYPHXHELSPSEVJPZLDLNPMOIUYLSDYTZGCRIKXJOFCYUSJKRIORHRUDLTVLHEKQVWPKEMNLACZCZCYJCHWKNPOGPCFGOSXLV");
    msg.htime = 0.267425137213;
    msg.lat = 0.697538436887;
    msg.lon = 0.168501143477;
    const char tmp_msg_0[] = {-109, 57, -121, -11, -93, 56, -31, -98, -18, -95, 74, -27, -4, -89, 57, 85, 94, -109, 57, 55, -39, 92, 44, -46, 9, 97, -4, -14, 32, 75, -33, -104, -101, 74, 103, -60, -27, 111, 89, 2, -21, -124, -35, 99, -53, -49, -55, -48, -16, 116, -99, 67, 48, 13, -68, -9, -121, -24, 89, 49, -9, -96, 44, -40, -11, -4, -93, -32, 79, 28, -105, 46, -72, -14, 68, -3, -74, -88, -56, -126, -79, 20, 33, -102, 40, -12, 107, -88, -37, -114, 20, -57, -102, 38, 95, 43, 39, 36, 36, -108, 74, -74, 1, 32, -122, -83, -31, -5, -77, -72, -16, -116, -20, 40, 26, 85, -109, 107, -18, 63, -22, 105, -62, 62, -22, -15, 85, 96, -77, 97, -7, 34};
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
    msg.setTimeStamp(0.651491743916);
    msg.setSource(47257U);
    msg.setSourceEntity(145U);
    msg.setDestination(45223U);
    msg.setDestinationEntity(82U);
    msg.origin.assign("FFLCOKIWJKDDOMWVXFXPYSEOUPSPMGSCSPNTNFVNMGAHGFRBZHYZECZOKRALNTZBQQDSGOMOIQPSPYAUWPHZLVBWRSJNTAIVZICNVSUTJGODJTZEAQIFWNTC");
    msg.htime = 0.651698378601;
    msg.lat = 0.139245150821;
    msg.lon = 0.34091400185;
    const char tmp_msg_0[] = {-12, 62, -28, -112, -41, -2, -4, 101, 31, -2, -25, -53, -93, 121, -109, 75, 40, 10, 5, -4, 3, 77, 91, -90, -43, -104, 100, 63, 9, -73, 101, -30, -95, 35, -6, -120, -109, 107, 94, -107, 90, 98, -3, -76, 37, -78, -24, -12, -88, -73, 44, 125, -1, 103, -80, 72, 10, 52, -59, 98, -73, -1, -114, -116, -77, -12, -114, -108, 78, 119, -65, 82, 5, 31, 115, 84, -49, -110, 120, 80, 56, 71, 47, -38, -45, -125, 125, 80, 2, -86, -30, 50, 6, -19, -31, -15, -43, -68, 70, -72, 20, -84, 81, -52, 56, 73, 17, -124, -8, 122, -118, 95, -61, 117, 86, 2, 56, -93, 65, -88, 6, 4, 80, 18, -124, -105, -87, -19, -128, 115, -8, 7, 123, 85, -70, 75, -7, 69, 41, 39, -28, -108, -126, -106, 5, 50, 28, 101, -78, -15, -1, 90, -36, 96, 121, 93, 35, 20, 117, 123, -75, -100, 68, 45, -105, 44, 97, 16, 91, -32, -88, -21, -79, -43, -125, -65, -112, 19, 94, 126, -119, 59, -91, -64, -84, -25, 41, 28, -7, 113, 70, 88};
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
    msg.setTimeStamp(0.91633148981);
    msg.setSource(17305U);
    msg.setSourceEntity(22U);
    msg.setDestination(63349U);
    msg.setDestinationEntity(21U);
    msg.req_id = 61445U;
    msg.ttl = 50665U;
    msg.destination.assign("MYUMSHMJJJKAAR");
    const char tmp_msg_0[] = {31, -120, 26, 43, 123, 96, 35, -58, -31, -118, 120, 39, 81, 71, 24, -55, 111, 52, -90, -6, 29, -72, 58, -123, -71, -71, -26, -116, 57, -114, 43, -49, 17, -60, 38, -74, 84, 126, 107, -114, 118, -38, -58, 94, -101, -108, 7, -99, 107, -71, -99, 71, 113, 59, -18, -79, -75, -70, -89, -100, 62, 61, 81, 16, -95, 63, 49, -16, -84, 74, -102, 70, 12, -11, -30, 54, 110, 46, -8, 125, -79, 53, 2, -81, -44, -43, 120, -22, -18, 12, -29, -120, 58, 33, -8, 111, -44, 6, -5, -95, -10, -127, 84, 4, -7, 52, 126, -92, -31, 20, -111, -27, 52, -88, -71, 92, -72, 19, -112, 87, -33, -66, -13, -31, -21, 87, 57, 63, 22, 110, -128, -19, -5, 117, 57, -27, -66, -18, -74, -69, -94, -27, 49, 10, 20, -16, 27, 68, 123, 47, 0, 38, 33, 65, -74, -66, -8, 60, 36, 89, -77, 114, 108, -86, 91, 87, -127, 28, 50, -16, -66, -111, -112, -40, 52, 15, -65, 86, -62, -89, -53, -7, 100, 83, -2, -126, -121, -82, 50, -80, -77, 100, 41, -93, 59, 98, 2, -117, -54, -34, 40, -109, 78, -42, -90, -112, -37, 52, 111, 60, 108, -31, 59, -55, 32, -30, 95, 94, 49, 69, -119, -52, 4, -51, 23, 105, 116, 72, 29, -125, 77, 15, 8, 2, -77, 38, -11, 10, -112, 109, 56, -26, -72, 37, -109, 89, -22, 40};
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
    msg.setTimeStamp(0.639787164862);
    msg.setSource(26522U);
    msg.setSourceEntity(58U);
    msg.setDestination(24774U);
    msg.setDestinationEntity(109U);
    msg.req_id = 59743U;
    msg.ttl = 21706U;
    msg.destination.assign("AKZOQPCBKTRIPSWCTNSWYACEHOMEUFHPTFLGACRRXBWILDOFMPXNKOQJLOBVGZCMRZIZHPF");
    const char tmp_msg_0[] = {5, -83, 125, 4, -106, 83, -82, -66, -25, -84, -5, -101, 60, 24, 95, -50, 31, 9, -76, -80, 48, 30, -102, 86, -101, -120, -29, -37, 9, 5, 13, 83, 108, -104, 74, 36, -81, 53, -39, -99, 96, 20, -29, -112, -21, 90, 88, -60, 3, 93, -67, -115, 45, 47, -47, 4, 61, -83, -93, 45, 55, -91, -91, -97, -75, -5, -70, 101, -2, 120, 88, 37, 26, -19, -128, 60, 114};
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
    msg.setTimeStamp(0.519548856554);
    msg.setSource(57045U);
    msg.setSourceEntity(119U);
    msg.setDestination(19083U);
    msg.setDestinationEntity(189U);
    msg.req_id = 47023U;
    msg.ttl = 64555U;
    msg.destination.assign("SMUXIISPAGMKKBWIFVBNUOCDOBEPKNTRFAYYZQLIRCIJPENGJCVYCZYXRSWNBTXUVABYEDXDNAEGKNSVOZHWEGNSHMXODMTTFACWBSHHRPLYWHHISQPIAQAHXXAEVXMOULNCYTHPMLDQBFLQJVZUYFRUZJVMZPOFXLFLOLUKUUWAREJYEQCSMTJMXQWSCJPIHMDJWGTONGGKDWQQVQHIYIKJFBUJABKWRSCVEDNDCPGKFVRGDLPR");
    const char tmp_msg_0[] = {95, 95, 45, 81, 19, 26, -89, -110, 0, 42, -127, 81, 54, 41, 9, 78, -19, 2, -69, -75, -99, -22, -99, 119, -76, 19, 84, -8, 119, 119, 66, 53, -74, 62, -2, 61, -18, -81, 91, 126, 119, 58, 69, -38, -72, 62, -10, -58, 70, 9, 113, -3, 107, -42, 86, -3, -80, 99, -101, 33, -80};
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
    msg.setTimeStamp(0.649380223117);
    msg.setSource(26200U);
    msg.setSourceEntity(250U);
    msg.setDestination(64804U);
    msg.setDestinationEntity(178U);
    msg.req_id = 49814U;
    msg.status = 88U;
    msg.text.assign("MWIFVVPUWLTIUYIVGHSCNIDTVG");

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
    msg.setTimeStamp(0.519899670912);
    msg.setSource(33867U);
    msg.setSourceEntity(60U);
    msg.setDestination(47810U);
    msg.setDestinationEntity(70U);
    msg.req_id = 63181U;
    msg.status = 68U;
    msg.text.assign("KSOERFPWMMEGIGRKDWRPFOJATHCQLZVJKAFYVOWXQQGFHRDSNHKDBFXHGDDLHBRBSSZNWTQKMUPJPSVGCAZEYUMNXJCDHLJGQXFRSUH");

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
    msg.setTimeStamp(0.397618513214);
    msg.setSource(13742U);
    msg.setSourceEntity(155U);
    msg.setDestination(9175U);
    msg.setDestinationEntity(156U);
    msg.req_id = 53563U;
    msg.status = 173U;
    msg.text.assign("EQMPPATZDVILRPRQNHNVRPJOJSRRWNEEQPKIOMFAGHWDMLLPRTBYCXHBAXFXLZUDWCHZHITKZEHXIMYYHFEFIBQZSVOLNLGBIURKZLUABHOOSGEPKLCXDXTUPAYNCXZBESAIVORWSTUTFXOBAMRKWGFSPCDCTSZMJZVLAUQDKZEXWVUKXSWLQTFGJQYACWVNSJEIBTGJDAKKCCOGJDNGKTPHYJNMQJYNVGCNRUOEVUYWDBQ");

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
    msg.setTimeStamp(0.845752291001);
    msg.setSource(2151U);
    msg.setSourceEntity(113U);
    msg.setDestination(28035U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("JVPXSGKLCGWYQXXUSIQNTJMPJEBLIFVNLCUWQCYTQIONOMSGVBFYEFVZBFCCUKEJASNV");
    msg.links = 1991853228U;

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
    msg.setTimeStamp(0.990160899178);
    msg.setSource(3283U);
    msg.setSourceEntity(60U);
    msg.setDestination(35473U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("BESCMHMVKJXOQSZDGUAYDVIBJBNAWFYKIWOVRYDVEACBXVZDUZLSXKDTWBHRQUCIYMCLHIUB");
    msg.links = 3909098769U;

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
    msg.setTimeStamp(0.764560551706);
    msg.setSource(58922U);
    msg.setSourceEntity(173U);
    msg.setDestination(57952U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("HAZSRGQUGPNUIFYDCXVPHNNEAOUZAUYVQMVVPGZBXHYWLXIHWMXHIDUSSMZXELSPWOYNRAJNZBUVBCIGBIYYOAAEQTFMXQTJIPPKELLRWEZVXSZJRWQDMNKOXOBGUFAGFUZTLTAKQFPHDBCIARSIEQQMJYMMHYMFJVWHGRDEYERVPJKNYLFOCWMKVXSDWBNSCGAFTFLSCINQCCKTGTGKWODNJLKKOKDUZTCVBRRHTTIOJLHCDDBREQL");
    msg.links = 1473252699U;

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
    msg.setTimeStamp(0.472595824092);
    msg.setSource(1297U);
    msg.setSourceEntity(246U);
    msg.setDestination(24053U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("QNUAHPOYREULLGQVUZQVKBJXRMPOQQZSKCTWSSJYULHVPPAISLECPDQTERPKDCISLMBDDHGYZFYPIEUNWNUKEOOVJWHDZRZXAMDCKXFYTAKAYAKBRYSITKYAJHGNQWMTGHFMGJHBWDLTFTVESRFRDYAJWOSNXEPXZGLWIQMSFCNSVFCNFU");
    msg.action = 195U;
    msg.grouplist.assign("TZWDYPZVGQNDAWVFVCNZMESG");

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
    msg.setTimeStamp(0.519479975139);
    msg.setSource(44166U);
    msg.setSourceEntity(77U);
    msg.setDestination(13212U);
    msg.setDestinationEntity(153U);
    msg.groupname.assign("LUWXGECQVQURJDOLTMKUUBGVNNWENFPSGBJZMWXYFTHVOZAPZXHOBWHZGYRQYTMDQGKYTBNWUYGJKOEXTNRFSIYONLP");
    msg.action = 127U;
    msg.grouplist.assign("AYQFGFRLZFWFS");

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
    msg.setTimeStamp(0.428494481169);
    msg.setSource(47407U);
    msg.setSourceEntity(24U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(44U);
    msg.groupname.assign("ALGGAXSUGBKUGZRIHRSNKBOJGMGNOSVWPJXWWHWMWVKKXPSINUFGSQPHQIEFIZEJLZITDNOIOVLCAYZKFLXXCTFTNVTUYPPLUZVQHTKKRFPIBIZQOBBBAOQVBFGJFNVWZSQHSOUHVWCEEYPAWNDZCMHYEDYYYJAUWECECUCDKVUCPQMDYDMTXNNQDOMRFMA");
    msg.action = 142U;
    msg.grouplist.assign("JKRQPFYFUHHBNLMMOWYMACOVDWQXQHUPSUCIYWYTFQDBPSILZGXCVAKVHURBCKCXOSZBGXWWQFZANEXDBTGKHMXQIRVGRCJJOIXDGZNREGZRCULMPEDMHZZYTRQHFSE");

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
    msg.setTimeStamp(0.403047310733);
    msg.setSource(16493U);
    msg.setSourceEntity(70U);
    msg.setDestination(64730U);
    msg.setDestinationEntity(235U);
    msg.value = 0.30707412853;
    msg.sys_src = 47322U;

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
    msg.setTimeStamp(0.620500225488);
    msg.setSource(8264U);
    msg.setSourceEntity(63U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(34U);
    msg.value = 0.534992158534;
    msg.sys_src = 17916U;

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
    msg.setTimeStamp(0.15311907797);
    msg.setSource(48905U);
    msg.setSourceEntity(22U);
    msg.setDestination(50463U);
    msg.setDestinationEntity(211U);
    msg.value = 0.904123751357;
    msg.sys_src = 2106U;

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
    msg.setTimeStamp(0.409453375584);
    msg.setSource(30161U);
    msg.setSourceEntity(47U);
    msg.setDestination(8403U);
    msg.setDestinationEntity(147U);
    msg.value = 0.626375169107;
    msg.units = 60U;

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
    msg.setTimeStamp(0.0935930614779);
    msg.setSource(38466U);
    msg.setSourceEntity(82U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(1U);
    msg.value = 0.537606281774;
    msg.units = 231U;

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
    msg.setTimeStamp(0.842413840091);
    msg.setSource(5867U);
    msg.setSourceEntity(191U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(0U);
    msg.value = 0.639958217679;
    msg.units = 66U;

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
    msg.setTimeStamp(0.506149520141);
    msg.setSource(43508U);
    msg.setSourceEntity(44U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(237U);
    msg.base_lat = 0.0147092817399;
    msg.base_lon = 0.645547419232;
    msg.base_time = 0.990851856737;

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
    msg.setTimeStamp(0.474251415277);
    msg.setSource(41527U);
    msg.setSourceEntity(42U);
    msg.setDestination(16945U);
    msg.setDestinationEntity(124U);
    msg.base_lat = 0.954962183078;
    msg.base_lon = 0.476171035661;
    msg.base_time = 0.62241089115;

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
    msg.setTimeStamp(0.543051977708);
    msg.setSource(50052U);
    msg.setSourceEntity(124U);
    msg.setDestination(27629U);
    msg.setDestinationEntity(217U);
    msg.base_lat = 0.749041889062;
    msg.base_lon = 0.734869412108;
    msg.base_time = 0.330653807659;

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
    msg.setTimeStamp(0.321235915711);
    msg.setSource(37549U);
    msg.setSourceEntity(24U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(90U);
    msg.base_lat = 0.527245656243;
    msg.base_lon = 0.80924973577;
    msg.base_time = 0.398790022126;
    const char tmp_msg_0[] = {-104, -21, 116, 102, -61, 7, 115, 101, -35, -106, 81, 11, -21, -118, 40, -55, 17, -26, 119, -113, 62, -92, -122, -107, 95, 46, -36, -123, 126, 98, 53, 59, -85, -23, -117, -54, -90, -63, 33, -49, -100, 76, 92, -14, -80, -93, 67, 3, 1, 17, 45, -92, 30, 105, -25, 112, -54, -85, 17, 84, -17, 116, -63, 20, -72, -65, 118, -46, -41, -115, -56, -119, 2, -85, 27, -120, 120, -90, 33, -18, -45, 57, 108, -4, 102, 15, 50, -100, -94, -22, 71, -10, 101, 76, -38, -93, -91, 39, -96, 82, 80, 40, -1, 89};
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
    msg.setTimeStamp(0.614283733287);
    msg.setSource(19571U);
    msg.setSourceEntity(220U);
    msg.setDestination(55848U);
    msg.setDestinationEntity(167U);
    msg.base_lat = 0.186133864867;
    msg.base_lon = 0.23267937881;
    msg.base_time = 0.801253976763;
    const char tmp_msg_0[] = {12, -21, 110, 77, -24, -10, -66, 100, 45, 53, 94, -90, 110, 71, 4, -123, 1, -42, -7, -39, 11, 109, 70, -5, -92, 121, -104, 1, 14, 99, 122, -46, 102, -122, 12, 118, 30, 70, 51, -69, 49, 67, -5, -104, -56, -115, -36, 102, 95, 54, 14, 122, -125, -92, 95, 60, 78, -55, 38, -80, 95, 126, -4, 89, 13, -99, -59, -10, -17, -33, 31, -21, 66, 77, -97, 95, 32, -64, 123, 41, 46, -75, 115, -114, -127, -87, -44, -46, -110, -52, 74, -111, -83, -6, 4, 22, -103, -9, -26, -113, 112, -58, 110, 85, -116, 39, 32, -19, 52, 62, 35, -105, 63, 58, -78, 114, -69, -11, 5, -122, -1, 105, 114, 82, -45, 113, 125, 14, 39, -121, -90, -115, -41, -22, -95, 45, -115, 83, 12, 75, 56, -44, -37, -21, -80, 91, 97, -76, -6, -95, 28, -55, 52, 119, -74, -24, -61, -105, 85, 52, -50, 116, -71, 86, 25, 1, 67, -48, -69, 30, -50, 17, -21, -10, 118, 71, -92, 72, -116, -32, 104, 49, 58, -58, 78, -15, 33, -83, -51, -115, -38, 0, -12, -22, -119, -50, 29, 106, 86, -46, 38, 108, 118, 87, -101, 4, 48, 7, 23, -114, 123, -98, -71, -30, -58};
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
    msg.setTimeStamp(0.208814031492);
    msg.setSource(32242U);
    msg.setSourceEntity(242U);
    msg.setDestination(23038U);
    msg.setDestinationEntity(144U);
    msg.base_lat = 0.690525783572;
    msg.base_lon = 0.535745067385;
    msg.base_time = 0.53136788796;
    const char tmp_msg_0[] = {-66, 103, -15, -4, 114, -19, -57, -28, 12, -82, -91, -80, 99, -18, -80, -78, -83, 37, -41, 98, -123, 76, -82, 48, 67, 117, -12, 23, 65, 84, 86, 39, 34, 111, -30, -88, 37, 110, 92, -126, 44, -9, 27, 115, -76, 84, 97, -39, 69, -106, -112, -127, -40, 16, 16, -111, -106, -40, 34, -3, -52, -2, -99, -35, 84, 90, -51, -95, -114, -106, 15, -102, -21, -69, -85, 35, 38, 117, 48, -95, 21, -119, -68, 3, 103, -87, 120, 115, -25, -58, 1, 80, -95, -67, -128, 26, 80, 50, 84, -81, -109, -64, 27, -89, 6, 39, 124, 121, 107, -16, -66, -12, 14, -51, 94, -11, -4, 90, 63, -15, -120, 92, -79, -36, 104, 30, -11, 83, 82, 65, 13, 15, -8, 29, 106, 37, 106, 66, -48, 53, 103, 28, 7, -106, -97, -18, -44, 61, -18, 56, -126, -83, -75, -77, -114, -75, -16, 86, -45, 52, -45, 95, 99, 64, 2, 19, 92, 29, 14, 44, 67, -45, -87, -9, 12, 32, 82, 21, 48, -23, -39, -57, -124, 99, 77, 122, -66, 35, 62, 54, -125, -4, 56, 122, -99, 38, 37, 92, 3, -101, -20, -82, 51, 18, 16, -59, -14, 60, 87, -66, 58, 42, -68, 86, 8, 61, 86, 100, 113, -114, -32, -9, 73, -120, 21, 51, 1, -12};
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
    msg.setTimeStamp(0.065835352325);
    msg.setSource(25381U);
    msg.setSourceEntity(157U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(148U);
    msg.sys_id = 37807U;
    msg.priority = -59;
    msg.x = 16760;
    msg.y = 29353;
    msg.z = 25385;
    msg.t = -10763;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 91U;
    tmp_msg_0.value = 0.750438404704;
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
    msg.setTimeStamp(0.687768137428);
    msg.setSource(18315U);
    msg.setSourceEntity(2U);
    msg.setDestination(25691U);
    msg.setDestinationEntity(21U);
    msg.sys_id = 62284U;
    msg.priority = -58;
    msg.x = 14098;
    msg.y = -148;
    msg.z = 1084;
    msg.t = -8826;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.531221930242);
    msg.setSource(36833U);
    msg.setSourceEntity(117U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(145U);
    msg.sys_id = 32652U;
    msg.priority = -59;
    msg.x = 28912;
    msg.y = 74;
    msg.z = -15693;
    msg.t = -16021;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.690945490388;
    tmp_msg_0.x = 0.395433836705;
    tmp_msg_0.y = 0.759956925574;
    tmp_msg_0.z = 0.277989367472;
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
    msg.setTimeStamp(0.00386189202628);
    msg.setSource(24447U);
    msg.setSourceEntity(10U);
    msg.setDestination(20315U);
    msg.setDestinationEntity(147U);
    msg.req_id = 8890U;
    msg.type = 247U;
    msg.max_size = 32476U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.109015331033;
    tmp_msg_0.base_lon = 0.554790421298;
    tmp_msg_0.base_time = 0.10730580863;
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
    msg.setTimeStamp(0.669334189266);
    msg.setSource(9565U);
    msg.setSourceEntity(1U);
    msg.setDestination(41265U);
    msg.setDestinationEntity(245U);
    msg.req_id = 8501U;
    msg.type = 37U;
    msg.max_size = 41965U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.435561676942;
    tmp_msg_0.base_lon = 0.729143987245;
    tmp_msg_0.base_time = 0.236321469222;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 45174U;
    tmp_tmp_msg_0_0.destination = 15862U;
    tmp_tmp_msg_0_0.timeout = 0.143172044714;
    IMC::AnnounceService tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.service.assign("FVWHGIRQKNAIQRVITFJPIIZOHWMPOWIKWHZMCHEXCRYRSPQCWDPYLDLLMRNNRYXTQTGRPDKXLUMHZDHQRDRZMEKLNGOOZCCRKWBQLMDWLUUGQJ");
    tmp_tmp_tmp_msg_0_0_0.service_type = 212U;
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
    msg.setTimeStamp(0.173263435704);
    msg.setSource(4033U);
    msg.setSourceEntity(226U);
    msg.setDestination(15728U);
    msg.setDestinationEntity(237U);
    msg.req_id = 51335U;
    msg.type = 252U;
    msg.max_size = 64137U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.349314077553;
    tmp_msg_0.base_lon = 0.413092500645;
    tmp_msg_0.base_time = 0.285404302269;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 37067U;
    tmp_tmp_msg_0_0.priority = 57;
    tmp_tmp_msg_0_0.x = 8908;
    tmp_tmp_msg_0_0.y = -21520;
    tmp_tmp_msg_0_0.z = 7729;
    tmp_tmp_msg_0_0.t = 28590;
    IMC::SmsStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 34724U;
    tmp_tmp_tmp_msg_0_0_0.status = 133U;
    tmp_tmp_tmp_msg_0_0_0.info.assign("SOMKZMNLJVDSVOZSXNPBJTCUXFWTFGCAPTYFWHYEJTSLBXWSQJJNUVGKZKCMGVGIPJWTTXUXEMUAMBAYLPHIWARB");
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
    msg.setTimeStamp(0.618788040723);
    msg.setSource(42221U);
    msg.setSourceEntity(160U);
    msg.setDestination(136U);
    msg.setDestinationEntity(166U);
    msg.original_source = 12791U;
    msg.destination = 24447U;
    msg.timeout = 0.950085524618;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.93283340357;
    tmp_msg_0.lon = 0.638840006813;
    tmp_msg_0.depth = 167U;
    tmp_msg_0.speed = 0.760312169076;
    tmp_msg_0.psi = 0.888662471179;
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
    msg.setTimeStamp(0.204253739059);
    msg.setSource(29386U);
    msg.setSourceEntity(76U);
    msg.setDestination(5658U);
    msg.setDestinationEntity(212U);
    msg.original_source = 32846U;
    msg.destination = 4422U;
    msg.timeout = 0.392000564825;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 95U;
    tmp_msg_0.mask = 3298212983U;
    tmp_msg_0.scope_ref = 150401634U;
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
    msg.setTimeStamp(0.988426503939);
    msg.setSource(374U);
    msg.setSourceEntity(207U);
    msg.setDestination(54517U);
    msg.setDestinationEntity(1U);
    msg.original_source = 29035U;
    msg.destination = 59211U;
    msg.timeout = 0.928696522026;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("FKRADZYDUZJVTUOIO");
    tmp_msg_0.state = 208U;
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
    msg.setTimeStamp(0.683586413449);
    msg.setSource(53161U);
    msg.setSourceEntity(113U);
    msg.setDestination(4029U);
    msg.setDestinationEntity(37U);
    msg.type = 60U;
    msg.comm_interface = 58021U;
    msg.model = 39991U;
    msg.list.assign("FHQWIJIKDLHYCADTYANCEVOGK");

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
    msg.setTimeStamp(0.31086766618);
    msg.setSource(17757U);
    msg.setSourceEntity(131U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(72U);
    msg.type = 104U;
    msg.comm_interface = 10391U;
    msg.model = 32468U;
    msg.list.assign("ARHBCSQHAMPCCPIXFQQEGKRWQWJOYZMYRPKLMBLSHROVWODVRDKUTISMLHTMFEHTXTXWHSGBTAICNVVKYGUUNVMZXWEBVSFSGPSUZXGHNSPABLNMZPONJIMWYZDNKATFXJAEEFCFTYWYOLAGFJBBIAKRUNJZBHTQZMIULEUDQGYBGFKKKERZJWNNDBQYNRKGEYFOJLCUPSCJLOCL");

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
    msg.setTimeStamp(0.915408351072);
    msg.setSource(53645U);
    msg.setSourceEntity(45U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(48U);
    msg.type = 72U;
    msg.comm_interface = 38864U;
    msg.model = 8068U;
    msg.list.assign("RAQDHGRLBKVPTRQJWYFVGDLTHNODOMBDIWBLZBELIUHGVXYZIKCSFAQGKPJERKXRZPP");

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
    msg.setTimeStamp(0.72716997124);
    msg.setSource(44837U);
    msg.setSourceEntity(30U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(27U);
    msg.type = 137U;
    msg.req_id = 544870017U;
    msg.ttl = 19547U;
    msg.code = 20U;
    msg.destination.assign("KUKTEGYLGQZFZAIUWAHBRMKGWESVAVJCDLFEGOTLYOTYLBBIPTOZNXMJMLNOZ");
    msg.source.assign("YPCGANGXVBXUMWIQVNFDCCHPFMCGJPEDNUDXRZPVWQDFELDSYFJGEWKJIYCUNOXAVLHXGSZNWHEBBCTBRPBYYAJGTARKTOTHKPRMHGOFEZJXUDMUFRHEXLOPMOMMHVJXBE");
    msg.acknowledge = 224U;
    msg.status = 152U;
    const char tmp_msg_0[] = {-55, -78, 105, 1, -78, -1, 43, -4, 12, -78, -109, 50, 86, -116, 119, -38, 94, 88, -49, -3, -29, 122, 126, 104, -120, 67, -40, -30, 10, -19, -38, -96, 109, -101, -68, 33, -4, 17, 76, -7, -76, 29, -31, -14, -84, -83, 13, -69, -82, -34, -70, -110, -77, -36, -46, -108, -28, -55, 6, -99, -3, -62, 119, -85, -29, 2, 68, 69, -45, 54, 40, -122, 74, 95, 82, -103, 91, 79, 77, -32, -123, -78, 1, 95, -121, -49, -100, 93, 21, -16, -42, -67, 102, 110, 81, -62, 40, 59, -111, -44, 78, -8, 16, 112, 51, -85, -114, 109, -103, -61, -77, -32, 14, 7, 81, -15, 9, 122, 80, 68, -30, 63, -110, 107, -77, -73, 48, -91, 86, -32, -98, 113, 9, -92, 53, -11, 11, -67, 75, -105, 31, -28, 74, 36, -51, 23, -43, -66, 125, 100, -25, -125, 114, -58, 0, -26, -54, 8, 22, -36, -65, 45, -81, 102, -54, -119, -14, 85, 4, -44, 91, -96, -47, -70, -96, -31, 81, -23, -40, -61, 96, -94, -21, -78, -93, 123};
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
    msg.setTimeStamp(0.523538361281);
    msg.setSource(43057U);
    msg.setSourceEntity(27U);
    msg.setDestination(896U);
    msg.setDestinationEntity(129U);
    msg.type = 247U;
    msg.req_id = 4271127538U;
    msg.ttl = 27481U;
    msg.code = 77U;
    msg.destination.assign("TEGPWDGZMJEANDIILMQBTPIENQVSVPOOUZKXLRBWKYEXAZXTLPUFSNCKPUYAFSTTOUQFCQAHZQVALSLNVIRQZSGLWOHRWDPUOELKJOCNKJHLSXIDMAVNHBFOMDNI");
    msg.source.assign("NFMLOVAELYNABDGIBDQAEEVIMVLYHZIRFOUUEDSRCTNMQKSNEWVUKZOZOWROARBMRDRZHHDMPS");
    msg.acknowledge = 98U;
    msg.status = 231U;
    const char tmp_msg_0[] = {91, -32, -47, 121, -44, -8, 73, -54, 5, -67, -93, 82, -4, 17, -27, 86, 58, -51, 21, -55, 18, 60, 67, -58, -112, -88, -107, -14, 122, -16, 120, 101, -67, -40, 89, -107, -31, 110, -58, 32, 19, 75, 8};
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
    msg.setTimeStamp(0.621330642021);
    msg.setSource(1539U);
    msg.setSourceEntity(117U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(27U);
    msg.type = 122U;
    msg.req_id = 111734145U;
    msg.ttl = 22891U;
    msg.code = 194U;
    msg.destination.assign("PTFNYVLVHOFTNKSTGGBFRFOZF");
    msg.source.assign("WDTHJWGKHSATQPLGGJDFGBMEAICOMGKYAWTAJOKYAADABZGLGUBNWEZPZTJHXNEPHWCBYKOHPRQPEYXDAZMYIIPORQJYZGZXPTIFEDNSJNYXQDOMPNETORBPIHNWEMDUXSBLKVAWIF");
    msg.acknowledge = 127U;
    msg.status = 87U;
    const char tmp_msg_0[] = {-33, 31, -64, -76, -36, -26, -7, 6, 7, -80, 16, -11, 26, 107, 52, -62, -94, -20, 79, -44, -110, 113, 3, 76, 118, 109, 60, -8, 82, 57, -68, 5, -11, 27, -103, 3, -56, 54, 106, 91, 58, -20, 36, 89, -33, -29, 44, 104, -67, -124, -20, -109, -108, 117, 39, 23, 124, -27, 61, 71, -26, -3, -53, 38, 8, -2, -20, 32, 28, 99, 78, 67, -1, 103, 77, 10, -96, 107, -40, -48, -89, 111, 73, -20, 96, -11, 17, -42, 16, 5, 120, -29, -19, -35, 50, 52, 33, -107, 2, 7, 86, 99, -10, -29, -123, -51, -115, 96, -49, -24, -65, 31, -81, -4, -96, 92, -57, -115, 110, -73, 97, 35, -84, 53, 71, -128, 32, 0, -94, -58, -125, 6, -108, -93, -78, 58, 12, 47, 9, -14, -10, -96, -8, -104, 80, 51, 107, 85, 15, 73, -34, -16, -5, -112, -91, 78, -82, 122, -37, 38, 75, -99, 77, 19, 68, 26, 74, 93, -24};
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
    msg.setTimeStamp(0.701946357359);
    msg.setSource(62355U);
    msg.setSourceEntity(94U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(224U);
    msg.id = 231U;
    msg.range = 0.533839262028;

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
    msg.setTimeStamp(0.132934832376);
    msg.setSource(59078U);
    msg.setSourceEntity(170U);
    msg.setDestination(59900U);
    msg.setDestinationEntity(188U);
    msg.id = 95U;
    msg.range = 0.371924394801;

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
    msg.setTimeStamp(0.406418445175);
    msg.setSource(45581U);
    msg.setSourceEntity(244U);
    msg.setDestination(63665U);
    msg.setDestinationEntity(213U);
    msg.id = 81U;
    msg.range = 0.193814325838;

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
    msg.setTimeStamp(0.441138378959);
    msg.setSource(50526U);
    msg.setSourceEntity(213U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(206U);
    msg.beacon.assign("DZVPUEYBLDBCSVYMSDVXILIKPOIPYGLPURTHDRCIUSNBHGOKCVMWBEXTBCJDLROLCAOIQUFKTLVKHMANDSIJKEQNLCQJNAJ");
    msg.lat = 0.570217061188;
    msg.lon = 0.98501982184;
    msg.depth = 0.169019435139;
    msg.query_channel = 70U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 87U;

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
    msg.setTimeStamp(0.878736046895);
    msg.setSource(21749U);
    msg.setSourceEntity(232U);
    msg.setDestination(59602U);
    msg.setDestinationEntity(229U);
    msg.beacon.assign("NMIWRNPAQJLUIPZKOGOFQNLBJBBVJDPFCVBNFGGNFWBOGPFPITDNICXTJKCDVWQNHXDYWQZPRHYAQPMSZHBWKRFXXEZSXCIWOYDLZOHFGEXACMCRAJYGTSWRUDNUICPOSGXSKAEKIHIAMQSUJKAGLOTLHCVTRZTHYQYLVAKZSQHKXCJZV");
    msg.lat = 0.421645270371;
    msg.lon = 0.455692282367;
    msg.depth = 0.104782744689;
    msg.query_channel = 157U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 155U;

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
    msg.setTimeStamp(0.531543895375);
    msg.setSource(61683U);
    msg.setSourceEntity(110U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("NHSWZWCEDUJSIOOPRDJHKYJIBCKQJFWJEFYUSILOMKXVNAVHWBQWPCGPJRGIITUTTPZSKERINDRUFEAYBZVEINLRIUGEBFHKKNLZSMODNPPSQTFXTABLTGSSBLMRUKYAVLUYYMRQWPFGZLIQOWDOQHRNZZNTJKCXTMXEZVBHEEHYNIMAFLAXMUCQGKMFZVYCTDYBWGXFSUDLCMMBSDOVGQ");
    msg.lat = 0.855982807751;
    msg.lon = 0.00679223145818;
    msg.depth = 0.809247715781;
    msg.query_channel = 101U;
    msg.reply_channel = 121U;
    msg.transponder_delay = 57U;

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
    msg.setTimeStamp(0.343361056586);
    msg.setSource(53970U);
    msg.setSourceEntity(87U);
    msg.setDestination(39468U);
    msg.setDestinationEntity(37U);
    msg.op = 165U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VEQCAKPBWLVGTKZCMALLRPPQBNUOKAXEXCYYEAHYDVUDQGCDDGBUEWQONJUQFXNQHIHGIMORZYTIZXAIVULEORTOWLWYFCTUHBROPFSKOINVKNQTMWJFOIXXZZPDLEBWGSDDPDMUZRMGNSPUXXFBDZWYHNY");
    tmp_msg_0.lat = 0.952789258992;
    tmp_msg_0.lon = 0.917253799516;
    tmp_msg_0.depth = 0.963861154023;
    tmp_msg_0.query_channel = 231U;
    tmp_msg_0.reply_channel = 143U;
    tmp_msg_0.transponder_delay = 209U;
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
    msg.setTimeStamp(0.662604042124);
    msg.setSource(7907U);
    msg.setSourceEntity(164U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(72U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.245001715695);
    msg.setSource(44908U);
    msg.setSourceEntity(171U);
    msg.setDestination(63842U);
    msg.setDestinationEntity(4U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.532161437728);
    msg.setSource(58253U);
    msg.setSourceEntity(18U);
    msg.setDestination(48846U);
    msg.setDestinationEntity(11U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 7598U;
    tmp_msg_0.status = 230U;
    tmp_msg_0.text.assign("LNLGQNOAIYJHYPWOGOYPJNLDOFXGFXOVWNISRRMBJWSCOFTGXHGLWCUI");
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
    msg.setTimeStamp(0.0194686915564);
    msg.setSource(29825U);
    msg.setSourceEntity(246U);
    msg.setDestination(62835U);
    msg.setDestinationEntity(144U);
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.151422059146;
    tmp_msg_0.m = 0.289261030512;
    tmp_msg_0.n = 0.0586536456268;
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
    msg.setTimeStamp(0.0754604380592);
    msg.setSource(262U);
    msg.setSourceEntity(219U);
    msg.setDestination(22470U);
    msg.setDestinationEntity(140U);
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.994258181027;
    tmp_msg_0.lon = 0.593026325558;
    tmp_msg_0.speed = 0.100306200666;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.limits = 47U;
    tmp_msg_0.max_depth = 0.761055968131;
    tmp_msg_0.min_alt = 0.461682762109;
    tmp_msg_0.time_limit = 0.42683716045;
    tmp_msg_0.controller.assign("DEUZPGSQNLQOTDRIMAGEKXCAKSHSELKLYXWNPFSRQPHZYGVYZIYSLYWQAROUZKFOISBEDNAHKWHWFVQJCQAOLDOBLVSUAGBNNNSFZZFJJXHKTIAVVHFEBYIYRTVGOOQNCHMIEJRMJABJPKHMBCGYUCXIZTESPGVMPDERNBLMCFBZGPFLFUCOBZGITFMKCDCPRKXVOUIXWSUPRTJANXURDRXMJLQWWETMWYDHHJPITTDWNXEKQTV");
    tmp_msg_0.custom.assign("KSHCEPPPKFGKKUH");
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
    msg.setTimeStamp(0.319944694945);
    msg.setSource(27983U);
    msg.setSourceEntity(117U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.628030493957;
    msg.lon = 0.440608397953;
    msg.depth = 0.892467561581;
    msg.sentence.assign("VHUVEHHYRPZCINXFKBRPMGWYRWUGCQSXQDFHEFCANQRLETPTXXNQETMPTLVKVNOOTMAFYKJQIRTWZUBJVLZJ");
    msg.txtime = 0.686862240107;
    msg.modem_type.assign("AWIEEJSKOJUFYLUUVDKMYPCZKLVQIFGNWQFZXBTIEMODHTDDLAINPNRCOQQNBGVNTPZYFEWWHEHEWLPPRHJTHCABAGSOYRGPXIUGTSBQPZXRRDRZALKQDGVVOLOZWKGZTBDSIGQSEKYMAVXMHYIDTDEPUTOFVUBBUUYJQCHLLXORMXZPLNGDRVOGNYKUXMFAYSHTKUJCBOCFFKATBWRJQXIKSNLVWWJCWSCS");
    msg.sys_src.assign("LNSSOMZNZFYLOUFYRDSBOIGICCHQFJECXLIZLFWBCWTCGPPUWIYYXDYGDPDWIQFLU");
    msg.seq = 53152U;
    msg.sys_dst.assign("FNYQVJKYKGKFMKMZVXRYEURXAWSOIBSDAEIQDSFJCGMCVNPFZKCZXKJUJWHNXHWWGTFDYNVGTKITMOQZTUUCLVMZZPGKLOFWOZEGOWICZSXLCHWIHLAENEGWYAJJKSUSEJXMGBEXFOBUDORMUOTVYBAZTPFUYMCIPHNINAAVYDVXFHTONBOKPBBHVJRIQDQRZARHN");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-26, 86, 113, 57, -38, 43, 61, 24, 70, 75, 39, 74, 120, 18, 74, 76, -118, -47, -81, -92, -88, 21, -61, -112, -103, -18, -34, -38, 101, -57, -120, 97, -57, 103, -94, 31, -90, -66, -15, 111, 84, -45, -125, 79, 18, -1, 63, -124, 64, 33, -98, -95, 124, -36, 12, -88, 76, 97, -88, -3, -43, -71, -14, -58, -73, -74, -36, -91, 102, 36, 57, 75, -52, 10, -9, 105, 93, 77, -29, -60, 4, -102, 89, -86, 5, 101, 27, -107, -43, -95, 56, 77, 35, 83, -19, 121, -64, -49, -78, -92, 43, -17, -31, -63, -14, 73, 108, -42, 117, -36, 36, -85, 103, -24, -69, -77, 63, 80, -54, -96, -59, 77, -34, -91, -114, 51, 31, -77, -86, -42, 7, 35, 11, -61, -108, -28, -1, -110, -98, -83, -18, -35, 6, 45, 120, 98, -101, 23, 99, -102, 70, 55, -120, 51, 90, -73, -110, -71, -101, 66, 50, -50, 34, -52, -92, -119, -124, -22, -90, -88, -12, 13, 124, 62, -19, 68, 27, 34, 125, -56, 58, -10, -49, -17, 10, 0, 118, -12, 126, -88, -4, -63, -27, -2, 28, -46, -115, 99, -5, -42, 64, -105, 95, 122, 106, 19, 4, -127, -14, 116, -38, -93, -28, -9, -91, 49, 41, 4, -55, 81, 44, -54, -41, 108, -98, -56, -24, -98, -116, -35, 110};
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
    msg.setTimeStamp(0.120142767763);
    msg.setSource(35394U);
    msg.setSourceEntity(127U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.741266000019;
    msg.lon = 0.533465483013;
    msg.depth = 0.568184448168;
    msg.sentence.assign("XXYBIUZTAAGSERHVPYBSGGMVSTQNVZFXV");
    msg.txtime = 0.991969171187;
    msg.modem_type.assign("PFHRCVOOSFRCWLTBNAKWLBBSFHFGYCTFHXLXUECALMRWXZPZMFVXVSAUREAUCNWLKQ");
    msg.sys_src.assign("DJLUVYFSEEOEDGMYQCRMZDZCXXJAEGDSFXTKIFBVHBAEUUYOJYMDFSPKSZDLXRZQUMEPUCKDOIGT");
    msg.seq = 65509U;
    msg.sys_dst.assign("WWBPOJDNZDXDBFWNFNKALPTCRBTVTGXEYYYNDXXMXGVTXMUMNZGSXKIYEKFWRVWQJCFHVHSEICOGEKCAGABDFFZMWMGLGRRAGOHAHZOLYJDYIFUMJUCSKWSUIMZSEAEXEJBFVLBDRQPPTKHRSQLVPTMIIYHDQYBLBUECLCQSTZWNQAZHBKRJRICSKYNFLZAVXNSIPZBSKDUQONKUQWE");
    msg.flags = 241U;
    const char tmp_msg_0[] = {-33, -49, 70, 73, -50, -126, -118, -120, 17, 97, 30, -31, -74, -87, 25, 16, 1, 39, 52, 33, -8, 39, 51, 97, 98, -5, -120, -126, 94, 82, 119, 49, 80, -82, 6, -26, -60, -89, 109, -123, 98, -50, 78, 121, 66, 10, -23, 105, -98, 112, 4, -116, -106, -93, 40, 48, 71, -23, 18, 29, -93, 85, -47, -80, 54, -1, -114, 117, -65, -72, -57, 87, 104, -22, 89, -127, -57, 104, 14, 41, 112, 59, -115, -2, 94, 114, 54, 88, -45, 89, -93, -58, -99, 109, 16, 39, 123, -7, -30, -60, -10, -33, 19, 34, -45, -122, 39, -99, 122, 80, -21, 86, 58, -41, -125, -77, 101, -75, 55, -126, 56, 38, 1, -67, -38, 34, 64, -67, 51, -4, 84, -60, 7, -31, 67, -50, 119, 122, 8, 99, -123, -61, -66, 43, -81, 118, -26, 103, 46, -30, -78, -108, -75, 115, 68, 108, -20, 8, 84, -18, -110};
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
    msg.setTimeStamp(0.911165140307);
    msg.setSource(35159U);
    msg.setSourceEntity(154U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.206337572037;
    msg.lon = 0.520779664778;
    msg.depth = 0.566000759589;
    msg.sentence.assign("GAGDSSUEYULTMWDANYJOQIF");
    msg.txtime = 0.499340261055;
    msg.modem_type.assign("RXAQTOYSDDUEXBMDGRYVDZURICBSXJNVQFLHMVFAHPIATUWAXYOZMRZPQRKYNMLTUZEPPKULFENBDAZYHNCJEWROOJRFFVKRFXHHWE");
    msg.sys_src.assign("ZZKLEOVNNEUJOVWUMHIPQOROFYSIVUSGTJKWVNFUCPPFCLNLDPZIMNLU");
    msg.seq = 30971U;
    msg.sys_dst.assign("QXHIWXLMNBPSPULSMHBFAAOFZQOORGOIRCCIYIIAVPLTGJHQIKVNNATRFNEAU");
    msg.flags = 128U;
    const char tmp_msg_0[] = {126, 75, -36, -1, -33, 100, -82, -4, 94, -45, -61, -33, -36, -16, 82, -29, 102, -118, 59, -60, 118, -39, -79, -2, 40, 125, 106, 28, -128, 98, 67, -107, 93, -89, 123, 65, 43, 84, 98, -3, -45, 8, 67, 82, 42, 35, -54, -91, -27, 95, 21, -113, -101, -33, 109, -99, 5, -2, 82, 28, -49, -61, 95, -7, -116, 38, 42, 18, 73, -41, 42, 0, -124, 83, 45, 95};
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
    msg.setTimeStamp(0.662378227486);
    msg.setSource(30871U);
    msg.setSourceEntity(214U);
    msg.setDestination(34054U);
    msg.setDestinationEntity(248U);
    msg.op = 154U;
    msg.system.assign("QOYRYSOJSXVNTROITGUACKJQGJNWMKBFGLYVSMCUPHPCDPFHHMDEEAGHBUSBJHJHWRJZKXNHDBINWKYXDAFIRCSOUDMRQSGGLIIGVRZPKDLZVMYWZYWPSOKQVXGIKNPUTARBDBCQOFPSBBZCOEVYFNDURPELPHTNOHUALVXZJE");
    msg.range = 0.073519271557;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QKSGDSRKKCQLGKJHYNDPDVJVBRRTKVBUYYDTKGFIKFSCULFNLIGIDWJTMWRHXFDGAMOVBULQUYEDXBQZAKR");
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
    msg.setTimeStamp(0.423540431563);
    msg.setSource(1559U);
    msg.setSourceEntity(227U);
    msg.setDestination(11926U);
    msg.setDestinationEntity(94U);
    msg.op = 229U;
    msg.system.assign("UADGKICDZCFJFZFVHUSWIPNEGUQTKSKDPJOWGHIXCKOJUWWMRNHIHGCSNNHEWVCEQHAIIPMLDXLDDVKZHLXYKWDFKBRZZFKBYVFDANXZEAJMPMCJAIBBXDQRPUBVTOBCFRZHAFYLINIRRLMUMSTSGVNPBSTQURYYALA");
    msg.range = 0.345662915247;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.0930966385311;
    tmp_msg_0.y = 0.155220710426;
    tmp_msg_0.z = 0.0888672078061;
    tmp_msg_0.vx = 0.645947960361;
    tmp_msg_0.vy = 0.0306498188787;
    tmp_msg_0.vz = 0.194036999214;
    tmp_msg_0.ax = 0.0664629902455;
    tmp_msg_0.ay = 0.573558096374;
    tmp_msg_0.az = 0.715420246475;
    tmp_msg_0.flags = 17385U;
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
    msg.setTimeStamp(0.492427731286);
    msg.setSource(9099U);
    msg.setSourceEntity(120U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(94U);
    msg.op = 106U;
    msg.system.assign("LDFUKISIZAIFLIJVDGKSQNYVALCGRMHYAKAZMVTBXVJHQIQRWYPPZKNQHDITZOH");
    msg.range = 0.0932400014534;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.873108608457;
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
    msg.setTimeStamp(0.489442422824);
    msg.setSource(32382U);
    msg.setSourceEntity(186U);
    msg.setDestination(21433U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.921912724129);
    msg.setSource(25051U);
    msg.setSourceEntity(18U);
    msg.setDestination(1899U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.919277389306);
    msg.setSource(55156U);
    msg.setSourceEntity(234U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.225813372215);
    msg.setSource(17373U);
    msg.setSourceEntity(77U);
    msg.setDestination(37698U);
    msg.setDestinationEntity(51U);
    msg.list.assign("CNWJNZRYMQTVAJYLWNMAOZHANRWDQVZYBSUWLHGIXOQVUJNFDNIOITHJHDFDXYLMVSQEASXIVIIF");

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
    msg.setTimeStamp(0.0194854533559);
    msg.setSource(64983U);
    msg.setSourceEntity(246U);
    msg.setDestination(18376U);
    msg.setDestinationEntity(233U);
    msg.list.assign("KWDIMVGHNEENXFMRYJQAEKXWHOICXBWLCDRBWVDPOQQHMTNXFGWNVOSANHTPPHNEYYYJKXJRLZYJTTZBAUJRLBAWZLRHAUSIUVEOBURERIQHQGPNOASCLHVZWQ");

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
    msg.setTimeStamp(0.326396231776);
    msg.setSource(59198U);
    msg.setSourceEntity(37U);
    msg.setDestination(18651U);
    msg.setDestinationEntity(70U);
    msg.list.assign("WTCYHDLTHCNTQGIUEVCKQNJVLAUCBMMKPNHLPLLAUOMQALJICGANUTPDBKOQWDEVSTROGSRFXFTSNTZQNIKJNQFZBVGGYKXGBAMXYEJGEPIQWCKVZRXGTHGMWPUVAWDEAEZWNFRUVFUCSWDYVDPPYDJCYCXXIMI");

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
    msg.setTimeStamp(0.36545596652);
    msg.setSource(15760U);
    msg.setSourceEntity(71U);
    msg.setDestination(9692U);
    msg.setDestinationEntity(14U);
    msg.peer.assign("ZJBYMOKULDJCILVFEMTKQYAYMRYNCPHALTOKKLFDBSDJRCFMEEQBNNYMXUZIAWOLESNW");
    msg.rssi = 0.941435100431;
    msg.integrity = 51218U;

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
    msg.setTimeStamp(0.385978677122);
    msg.setSource(40923U);
    msg.setSourceEntity(228U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(213U);
    msg.peer.assign("MLCTEUPZHCWUKNRHVDKCRMKNEEYUFMSAODEMXXVYTNGEYANSPWOSSNLNLIVUVIHFXYLZAVODQRCCLTPQMPOGXCFIDDKPHWAHYTFCYGBRBBCDJSJCRIQKJGDHBZNKTNIDVBPOMGAQWMUAQQZLYWXTHOPZEFOJXMHVDBNHJRQABRDGJBGV");
    msg.rssi = 0.117231752869;
    msg.integrity = 15513U;

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
    msg.setTimeStamp(0.430013820258);
    msg.setSource(39655U);
    msg.setSourceEntity(119U);
    msg.setDestination(55948U);
    msg.setDestinationEntity(232U);
    msg.peer.assign("UEWVQNXJTKLJLKELHRHZMJTWIGHDNTCZOHFTCPFLDAQXNQMTGLLRFRORYNKPYCIQTOBWBZJSJVJGRYHZGHMXTAPMUFASENPPQPDIFWYWFZUCVSAHOSNOXVRWVDQKCUBTHMMVQUAXECPELMVFKDWZUYSNQCIYBYBMIUNVSIXRDWZREDKAUQPXGFKQZKBIHUKARLGLDVNMEBJ");
    msg.rssi = 0.0359841890419;
    msg.integrity = 16662U;

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
    msg.setTimeStamp(0.0762004340173);
    msg.setSource(18453U);
    msg.setSourceEntity(20U);
    msg.setDestination(54515U);
    msg.setDestinationEntity(145U);
    msg.req_id = 65381U;
    msg.destination.assign("DCTUIOAKKBGYVFCNKZDWOLXPJWFRLSWYIJPALYRYISYMKGUBYPYOCAZUVBCAMHLWPQVVTCJDWKWSLLFGFMGJHOSHONXWKZDOTINEMMGXSFPRUXAAHUOMXFCSFNAPUECABOUDHBNETILECEFQQEGBZXQBPQMYZNNJPRVPCM");
    msg.timeout = 0.348782568674;
    msg.range = 0.276371052495;
    msg.type = 162U;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 10573U;
    tmp_msg_0.status = 195U;
    tmp_msg_0.info.assign("CVQENLZCKXHZJLBJRYBZKECOPUFSJPVOSIWYPKOLFJMYQSTXHCXVFZYGJAHIQQIIZDBMKRQDFDMCVTEYONQDCNOFPRIATKZHKEAVJKSAGGMDDHBYFWNCCXVTTPSRFDYYMZROIEUDET");
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
    msg.setTimeStamp(0.558215479481);
    msg.setSource(43907U);
    msg.setSourceEntity(184U);
    msg.setDestination(12434U);
    msg.setDestinationEntity(85U);
    msg.req_id = 26738U;
    msg.destination.assign("NBBGCZZWUXZTBHPFPXWPQINEIZYQEUMFCDSKQMNARUTFSLRUXGDIEPKYYOREDWJZVBYKMEJXFSTG");
    msg.timeout = 0.494702631358;
    msg.range = 0.761798525411;
    msg.type = 137U;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 79U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.794516108446;
    tmp_tmp_msg_0_0.y = 0.875380404402;
    tmp_tmp_msg_0_0.z = 0.186199046016;
    tmp_tmp_msg_0_0.phi = 0.812266829194;
    tmp_tmp_msg_0_0.theta = 0.50111470257;
    tmp_tmp_msg_0_0.psi = 0.598198725222;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.423889457001;
    tmp_tmp_msg_0_1.beam_height = 0.79462701371;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.884411847699;
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
    msg.setTimeStamp(0.527149140976);
    msg.setSource(38663U);
    msg.setSourceEntity(161U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(102U);
    msg.req_id = 5416U;
    msg.destination.assign("SFUKCWUOSTZDXJMHXTGNJHYZQCWXHFTRZQIAICLMGEGCNAKWLYSGAOMITVRGKQCXQEWXVYQQWBOLKWLINIHPABMHVNPSLTOMKLVPJDKNJKXMBGNIUPBQRODEPJBBIYONZJEDNWPBWSZJDWZZQRVEEGTPGMREUXVACTYHIRSHOTKLHERYPMHYYGNAOSRTDJARZPFLKFDBZQFDMFLEUOCAIXACDBF");
    msg.timeout = 0.322881298253;
    msg.range = 0.910212664401;
    msg.type = 128U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("YDNKWFUZPCLVSBJJKNWYCDBOKZPVR");
    tmp_msg_0.lat = 0.440559514032;
    tmp_msg_0.lon = 0.71385553903;
    tmp_msg_0.z = 0.274685021121;
    tmp_msg_0.z_units = 160U;
    tmp_msg_0.cog = 0.624555998756;
    tmp_msg_0.sog = 0.231798226133;
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
    msg.setTimeStamp(0.74743685238);
    msg.setSource(49809U);
    msg.setSourceEntity(134U);
    msg.setDestination(27898U);
    msg.setDestinationEntity(138U);
    msg.req_id = 36176U;
    msg.type = 218U;
    msg.status = 226U;
    msg.info.assign("SJHUOKYYVNASNACLFVWQYYVNYKRTAFTMNKJLWXIIMDOJOUTSOIZWBGOAALVXGZRHEXHVSGLZOZKACOCCXIJXWQMBTKXLIXDFEQDVHUHREODXTTGQFCLPWJL");
    msg.range = 0.484218042746;

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
    msg.setTimeStamp(0.589736266947);
    msg.setSource(31981U);
    msg.setSourceEntity(56U);
    msg.setDestination(5754U);
    msg.setDestinationEntity(85U);
    msg.req_id = 14861U;
    msg.type = 55U;
    msg.status = 30U;
    msg.info.assign("RPTPZJBQZLTDDTXSGMTJSGHHPOJGVRUNQFYEWTWGGDLTYDMNNYLYZHPKWDJFUJNOCBUSUKWFCLHESWMDPKKGKIZXJNQQARYIMILJCVEGQVRTIQORHEQOUJVCYUONELFCBJVAEIPBLXTSNVXDBXHAYRANPHAEAZFRBBWPMJLUZWWF");
    msg.range = 0.00315324623719;

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
    msg.setTimeStamp(0.900907212421);
    msg.setSource(13273U);
    msg.setSourceEntity(124U);
    msg.setDestination(58888U);
    msg.setDestinationEntity(151U);
    msg.req_id = 18550U;
    msg.type = 186U;
    msg.status = 27U;
    msg.info.assign("YRUPXXASPYPHFGIASELFCWZUZDMVRKUOIZFZYNB");
    msg.range = 0.32476532489;

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
    msg.setTimeStamp(0.132627985167);
    msg.setSource(41894U);
    msg.setSourceEntity(56U);
    msg.setDestination(7627U);
    msg.setDestinationEntity(82U);
    msg.value = 25801;

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
    msg.setTimeStamp(0.889128835656);
    msg.setSource(48706U);
    msg.setSourceEntity(86U);
    msg.setDestination(33445U);
    msg.setDestinationEntity(194U);
    msg.value = 32543;

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
    msg.setTimeStamp(0.541846388396);
    msg.setSource(29480U);
    msg.setSourceEntity(99U);
    msg.setDestination(23210U);
    msg.setDestinationEntity(30U);
    msg.value = -29730;

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
    msg.setTimeStamp(0.431498014638);
    msg.setSource(43493U);
    msg.setSourceEntity(78U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(159U);
    msg.value = 0.749248118897;

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
    msg.setTimeStamp(0.371114859811);
    msg.setSource(1200U);
    msg.setSourceEntity(139U);
    msg.setDestination(56961U);
    msg.setDestinationEntity(71U);
    msg.value = 0.491452648333;

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
    msg.setTimeStamp(0.383018794698);
    msg.setSource(415U);
    msg.setSourceEntity(62U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(219U);
    msg.value = 0.846073578299;

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
    msg.setTimeStamp(0.718602073079);
    msg.setSource(6235U);
    msg.setSourceEntity(29U);
    msg.setDestination(6666U);
    msg.setDestinationEntity(1U);
    msg.value = 0.229421836159;

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
    msg.setTimeStamp(0.290021453575);
    msg.setSource(32766U);
    msg.setSourceEntity(69U);
    msg.setDestination(17781U);
    msg.setDestinationEntity(119U);
    msg.value = 0.850115025354;

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
    msg.setTimeStamp(0.938938507943);
    msg.setSource(23607U);
    msg.setSourceEntity(48U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0764678029936;

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
    msg.setTimeStamp(0.320780111875);
    msg.setSource(19329U);
    msg.setSourceEntity(252U);
    msg.setDestination(2136U);
    msg.setDestinationEntity(186U);
    msg.validity = 54908U;
    msg.type = 187U;
    msg.utc_year = 50273U;
    msg.utc_month = 158U;
    msg.utc_day = 109U;
    msg.utc_time = 0.354872030874;
    msg.lat = 0.997823900225;
    msg.lon = 0.628550433314;
    msg.height = 0.536091078843;
    msg.satellites = 156U;
    msg.cog = 0.164054471945;
    msg.sog = 0.268856571431;
    msg.hdop = 0.964390835773;
    msg.vdop = 0.0149745317706;
    msg.hacc = 0.255331780098;
    msg.vacc = 0.723877350995;

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
    msg.setTimeStamp(0.498999700062);
    msg.setSource(37141U);
    msg.setSourceEntity(224U);
    msg.setDestination(25930U);
    msg.setDestinationEntity(43U);
    msg.validity = 3465U;
    msg.type = 102U;
    msg.utc_year = 26474U;
    msg.utc_month = 94U;
    msg.utc_day = 78U;
    msg.utc_time = 0.117663357788;
    msg.lat = 0.427767151529;
    msg.lon = 0.156598072742;
    msg.height = 0.525095813197;
    msg.satellites = 25U;
    msg.cog = 0.090512273516;
    msg.sog = 0.258180725208;
    msg.hdop = 0.982630808816;
    msg.vdop = 0.744771060493;
    msg.hacc = 0.931423640781;
    msg.vacc = 0.131687884554;

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
    msg.setTimeStamp(0.790709445006);
    msg.setSource(52209U);
    msg.setSourceEntity(165U);
    msg.setDestination(56534U);
    msg.setDestinationEntity(111U);
    msg.validity = 8185U;
    msg.type = 173U;
    msg.utc_year = 49462U;
    msg.utc_month = 10U;
    msg.utc_day = 71U;
    msg.utc_time = 0.971566751503;
    msg.lat = 0.797761173424;
    msg.lon = 0.393822580241;
    msg.height = 0.194615504934;
    msg.satellites = 205U;
    msg.cog = 0.959012451425;
    msg.sog = 0.587030111348;
    msg.hdop = 0.841665717127;
    msg.vdop = 0.453963711389;
    msg.hacc = 0.496637145446;
    msg.vacc = 0.383425470249;

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
    msg.setTimeStamp(0.867552362268);
    msg.setSource(3251U);
    msg.setSourceEntity(175U);
    msg.setDestination(56047U);
    msg.setDestinationEntity(206U);
    msg.time = 0.320686197729;
    msg.phi = 0.446686555586;
    msg.theta = 0.813012489925;
    msg.psi = 0.79707528417;
    msg.psi_magnetic = 0.0807427488827;

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
    msg.setTimeStamp(0.984501055743);
    msg.setSource(4048U);
    msg.setSourceEntity(85U);
    msg.setDestination(35851U);
    msg.setDestinationEntity(100U);
    msg.time = 0.638341449548;
    msg.phi = 0.364381821541;
    msg.theta = 0.0213750380719;
    msg.psi = 0.79431468077;
    msg.psi_magnetic = 0.608617515385;

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
    msg.setTimeStamp(0.214939683416);
    msg.setSource(55708U);
    msg.setSourceEntity(2U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(186U);
    msg.time = 0.105224794844;
    msg.phi = 0.855361408915;
    msg.theta = 0.169823836264;
    msg.psi = 0.435932962422;
    msg.psi_magnetic = 0.747405181283;

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
    msg.setTimeStamp(0.28991305471);
    msg.setSource(63750U);
    msg.setSourceEntity(79U);
    msg.setDestination(5968U);
    msg.setDestinationEntity(144U);
    msg.time = 0.776168245239;
    msg.x = 0.93346992209;
    msg.y = 0.947643082428;
    msg.z = 0.590097674105;
    msg.timestep = 0.985612624869;

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
    msg.setTimeStamp(0.590105108645);
    msg.setSource(55925U);
    msg.setSourceEntity(184U);
    msg.setDestination(49928U);
    msg.setDestinationEntity(153U);
    msg.time = 0.612656995269;
    msg.x = 0.717597786584;
    msg.y = 0.326327492589;
    msg.z = 0.49893694962;
    msg.timestep = 0.416631603897;

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
    msg.setTimeStamp(0.0783717390175);
    msg.setSource(28419U);
    msg.setSourceEntity(252U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(172U);
    msg.time = 0.749069031919;
    msg.x = 0.804648842439;
    msg.y = 0.144262250363;
    msg.z = 0.810693313554;
    msg.timestep = 0.857377274283;

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
    msg.setTimeStamp(0.180022812913);
    msg.setSource(29136U);
    msg.setSourceEntity(201U);
    msg.setDestination(19065U);
    msg.setDestinationEntity(99U);
    msg.time = 0.11098241903;
    msg.x = 0.194923138648;
    msg.y = 0.55498896558;
    msg.z = 0.628468928433;

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
    msg.setTimeStamp(0.741027297219);
    msg.setSource(23308U);
    msg.setSourceEntity(144U);
    msg.setDestination(55136U);
    msg.setDestinationEntity(171U);
    msg.time = 0.898613878275;
    msg.x = 0.45535511714;
    msg.y = 0.0787496086221;
    msg.z = 0.960352989245;

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
    msg.setTimeStamp(0.380234341207);
    msg.setSource(937U);
    msg.setSourceEntity(21U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(103U);
    msg.time = 0.616484172912;
    msg.x = 0.531330115282;
    msg.y = 0.551642721915;
    msg.z = 0.435218828473;

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
    msg.setTimeStamp(0.0407788870551);
    msg.setSource(17973U);
    msg.setSourceEntity(187U);
    msg.setDestination(33561U);
    msg.setDestinationEntity(80U);
    msg.time = 0.975341010189;
    msg.x = 0.0995191059277;
    msg.y = 0.358842010705;
    msg.z = 0.849150257983;

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
    msg.setTimeStamp(0.859394118657);
    msg.setSource(32221U);
    msg.setSourceEntity(143U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(147U);
    msg.time = 0.252103893872;
    msg.x = 0.701686542223;
    msg.y = 0.907203707364;
    msg.z = 0.127525541958;

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
    msg.setTimeStamp(0.258098134221);
    msg.setSource(62754U);
    msg.setSourceEntity(96U);
    msg.setDestination(779U);
    msg.setDestinationEntity(46U);
    msg.time = 0.861507951505;
    msg.x = 0.0622425293101;
    msg.y = 0.373750673217;
    msg.z = 0.93185479955;

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
    msg.setTimeStamp(0.271021471008);
    msg.setSource(18707U);
    msg.setSourceEntity(131U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(224U);
    msg.time = 0.461018939646;
    msg.x = 0.354703788484;
    msg.y = 0.857159837317;
    msg.z = 0.239348789611;

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
    msg.setTimeStamp(0.448369857937);
    msg.setSource(29540U);
    msg.setSourceEntity(106U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(51U);
    msg.time = 0.722592623556;
    msg.x = 0.918254734005;
    msg.y = 0.326385061635;
    msg.z = 0.266566157839;

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
    msg.setTimeStamp(0.703065393027);
    msg.setSource(9594U);
    msg.setSourceEntity(164U);
    msg.setDestination(44939U);
    msg.setDestinationEntity(249U);
    msg.time = 0.225762576157;
    msg.x = 0.270658897376;
    msg.y = 0.0182420030057;
    msg.z = 0.537735892549;

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
    msg.setTimeStamp(0.930917357403);
    msg.setSource(54769U);
    msg.setSourceEntity(37U);
    msg.setDestination(31347U);
    msg.setDestinationEntity(120U);
    msg.validity = 114U;
    msg.x = 0.093455628952;
    msg.y = 0.886139361942;
    msg.z = 0.0594046323025;

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
    msg.setTimeStamp(0.660423003461);
    msg.setSource(63167U);
    msg.setSourceEntity(196U);
    msg.setDestination(10282U);
    msg.setDestinationEntity(167U);
    msg.validity = 214U;
    msg.x = 0.627350107364;
    msg.y = 0.790426718998;
    msg.z = 0.534957602657;

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
    msg.setTimeStamp(0.401818997839);
    msg.setSource(64673U);
    msg.setSourceEntity(167U);
    msg.setDestination(56205U);
    msg.setDestinationEntity(182U);
    msg.validity = 87U;
    msg.x = 0.714930490596;
    msg.y = 0.149584338167;
    msg.z = 0.227114653415;

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
    msg.setTimeStamp(0.785130759552);
    msg.setSource(38795U);
    msg.setSourceEntity(8U);
    msg.setDestination(47415U);
    msg.setDestinationEntity(179U);
    msg.validity = 216U;
    msg.x = 0.488817069832;
    msg.y = 0.135661479356;
    msg.z = 0.0317694223518;

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
    msg.setTimeStamp(0.820084897992);
    msg.setSource(46916U);
    msg.setSourceEntity(200U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(86U);
    msg.validity = 223U;
    msg.x = 0.444369294834;
    msg.y = 0.722581981057;
    msg.z = 0.327290051257;

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
    msg.setTimeStamp(0.959023474969);
    msg.setSource(23336U);
    msg.setSourceEntity(242U);
    msg.setDestination(53066U);
    msg.setDestinationEntity(82U);
    msg.validity = 252U;
    msg.x = 0.412454431425;
    msg.y = 0.92455493632;
    msg.z = 0.260639688788;

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
    msg.setTimeStamp(0.900864077687);
    msg.setSource(8409U);
    msg.setSourceEntity(217U);
    msg.setDestination(27100U);
    msg.setDestinationEntity(199U);
    msg.time = 0.646033327178;
    msg.x = 0.710114556367;
    msg.y = 0.817057536532;
    msg.z = 0.709232763186;

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
    msg.setTimeStamp(0.217377264089);
    msg.setSource(37963U);
    msg.setSourceEntity(251U);
    msg.setDestination(43610U);
    msg.setDestinationEntity(242U);
    msg.time = 0.783888621639;
    msg.x = 0.395144052697;
    msg.y = 0.738516321756;
    msg.z = 0.248627369422;

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
    msg.setTimeStamp(0.791865436254);
    msg.setSource(43999U);
    msg.setSourceEntity(89U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(240U);
    msg.time = 0.831194046511;
    msg.x = 0.31329028179;
    msg.y = 0.84960774205;
    msg.z = 0.863035270031;

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
    msg.setTimeStamp(0.0798909024034);
    msg.setSource(38460U);
    msg.setSourceEntity(15U);
    msg.setDestination(4144U);
    msg.setDestinationEntity(74U);
    msg.validity = 151U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.599810399902;
    tmp_msg_0.y = 0.0863860396257;
    tmp_msg_0.z = 0.0655580940693;
    tmp_msg_0.phi = 0.122119372392;
    tmp_msg_0.theta = 0.457080184855;
    tmp_msg_0.psi = 0.581913691883;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.505962547982;
    tmp_msg_1.beam_height = 0.64016767294;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.750074579434;

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
    msg.setTimeStamp(0.0217095033489);
    msg.setSource(18221U);
    msg.setSourceEntity(104U);
    msg.setDestination(5404U);
    msg.setDestinationEntity(3U);
    msg.validity = 210U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.138058230285;
    tmp_msg_0.y = 0.763657964265;
    tmp_msg_0.z = 0.293216737427;
    tmp_msg_0.phi = 0.91840168636;
    tmp_msg_0.theta = 0.6058296718;
    tmp_msg_0.psi = 0.981007996365;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.708356369281;

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
    msg.setTimeStamp(0.941533418817);
    msg.setSource(50626U);
    msg.setSourceEntity(13U);
    msg.setDestination(7130U);
    msg.setDestinationEntity(166U);
    msg.validity = 183U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.464568045588;
    tmp_msg_0.y = 0.254222553721;
    tmp_msg_0.z = 0.322717758018;
    tmp_msg_0.phi = 0.172121027761;
    tmp_msg_0.theta = 0.680854637097;
    tmp_msg_0.psi = 0.960904912751;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0324378357936;

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
    msg.setTimeStamp(0.507065041293);
    msg.setSource(51006U);
    msg.setSourceEntity(26U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(69U);
    msg.value = 0.00228650914734;

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
    msg.setTimeStamp(0.986131190128);
    msg.setSource(29499U);
    msg.setSourceEntity(140U);
    msg.setDestination(44159U);
    msg.setDestinationEntity(183U);
    msg.value = 0.219252104966;

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
    msg.setTimeStamp(0.0838495210753);
    msg.setSource(29825U);
    msg.setSourceEntity(21U);
    msg.setDestination(3668U);
    msg.setDestinationEntity(177U);
    msg.value = 0.900660883601;

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
    msg.setTimeStamp(0.0864555180957);
    msg.setSource(4139U);
    msg.setSourceEntity(33U);
    msg.setDestination(55308U);
    msg.setDestinationEntity(190U);
    msg.value = 0.15327872872;

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
    msg.setTimeStamp(0.253017068887);
    msg.setSource(19481U);
    msg.setSourceEntity(53U);
    msg.setDestination(47565U);
    msg.setDestinationEntity(173U);
    msg.value = 0.438640534698;

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
    msg.setTimeStamp(0.366711020918);
    msg.setSource(22332U);
    msg.setSourceEntity(174U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(2U);
    msg.value = 0.798092419345;

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
    msg.setTimeStamp(0.282997604108);
    msg.setSource(50105U);
    msg.setSourceEntity(215U);
    msg.setDestination(35271U);
    msg.setDestinationEntity(120U);
    msg.value = 0.772645263382;

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
    msg.setTimeStamp(0.11755516434);
    msg.setSource(22394U);
    msg.setSourceEntity(83U);
    msg.setDestination(54131U);
    msg.setDestinationEntity(92U);
    msg.value = 0.708004839031;

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
    msg.setTimeStamp(0.0357656528189);
    msg.setSource(24971U);
    msg.setSourceEntity(183U);
    msg.setDestination(41837U);
    msg.setDestinationEntity(87U);
    msg.value = 0.59195746877;

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
    msg.setTimeStamp(0.6435593747);
    msg.setSource(20722U);
    msg.setSourceEntity(118U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(87U);
    msg.value = 0.794964364298;

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
    msg.setTimeStamp(0.864834468182);
    msg.setSource(63485U);
    msg.setSourceEntity(12U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(82U);
    msg.value = 0.460423442136;

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
    msg.setTimeStamp(0.800085447907);
    msg.setSource(26288U);
    msg.setSourceEntity(86U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(91U);
    msg.value = 0.75119057257;

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
    msg.setTimeStamp(0.229756290853);
    msg.setSource(35500U);
    msg.setSourceEntity(14U);
    msg.setDestination(58381U);
    msg.setDestinationEntity(197U);
    msg.value = 0.86161728788;

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
    msg.setTimeStamp(0.727401992786);
    msg.setSource(6316U);
    msg.setSourceEntity(110U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0287351232155;

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
    msg.setTimeStamp(0.572353696654);
    msg.setSource(38829U);
    msg.setSourceEntity(126U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(121U);
    msg.value = 0.649570820837;

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
    msg.setTimeStamp(0.508828282123);
    msg.setSource(18246U);
    msg.setSourceEntity(92U);
    msg.setDestination(33963U);
    msg.setDestinationEntity(247U);
    msg.value = 0.685883059551;

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
    msg.setTimeStamp(0.752847904162);
    msg.setSource(27296U);
    msg.setSourceEntity(212U);
    msg.setDestination(27611U);
    msg.setDestinationEntity(122U);
    msg.value = 0.488502046914;

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
    msg.setTimeStamp(0.914589997186);
    msg.setSource(13688U);
    msg.setSourceEntity(189U);
    msg.setDestination(24427U);
    msg.setDestinationEntity(44U);
    msg.value = 0.467239078619;

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
    msg.setTimeStamp(0.528197312812);
    msg.setSource(62171U);
    msg.setSourceEntity(174U);
    msg.setDestination(51680U);
    msg.setDestinationEntity(96U);
    msg.value = 0.51953816273;

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
    msg.setTimeStamp(0.97067382429);
    msg.setSource(51128U);
    msg.setSourceEntity(118U);
    msg.setDestination(23830U);
    msg.setDestinationEntity(156U);
    msg.value = 0.553853207891;

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
    msg.setTimeStamp(0.838219935869);
    msg.setSource(15318U);
    msg.setSourceEntity(215U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(58U);
    msg.value = 0.75684720245;

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
    msg.setTimeStamp(0.416540212542);
    msg.setSource(58441U);
    msg.setSourceEntity(220U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(198U);
    msg.value = 0.860811847855;

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
    msg.setTimeStamp(0.768442508142);
    msg.setSource(12801U);
    msg.setSourceEntity(151U);
    msg.setDestination(45746U);
    msg.setDestinationEntity(176U);
    msg.value = 0.667935892197;

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
    msg.setTimeStamp(0.425123444321);
    msg.setSource(48617U);
    msg.setSourceEntity(235U);
    msg.setDestination(12263U);
    msg.setDestinationEntity(244U);
    msg.value = 0.296186580285;

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
    msg.setTimeStamp(0.0943597280424);
    msg.setSource(6077U);
    msg.setSourceEntity(86U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.724902330861;
    msg.speed = 0.384739561625;
    msg.turbulence = 0.916058275691;

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
    msg.setTimeStamp(0.955581327121);
    msg.setSource(34227U);
    msg.setSourceEntity(244U);
    msg.setDestination(467U);
    msg.setDestinationEntity(207U);
    msg.direction = 0.0111141635301;
    msg.speed = 0.64159954837;
    msg.turbulence = 0.339562107557;

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
    msg.setTimeStamp(0.292550444549);
    msg.setSource(41213U);
    msg.setSourceEntity(73U);
    msg.setDestination(2412U);
    msg.setDestinationEntity(156U);
    msg.direction = 0.205657374417;
    msg.speed = 0.093693178792;
    msg.turbulence = 0.571840982565;

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
    msg.setTimeStamp(0.75595337278);
    msg.setSource(61397U);
    msg.setSourceEntity(242U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(67U);
    msg.value = 0.631523645652;

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
    msg.setTimeStamp(0.396875890882);
    msg.setSource(11711U);
    msg.setSourceEntity(208U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(105U);
    msg.value = 0.228523594298;

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
    msg.setTimeStamp(0.653545984317);
    msg.setSource(39054U);
    msg.setSourceEntity(120U);
    msg.setDestination(58141U);
    msg.setDestinationEntity(78U);
    msg.value = 0.51439331116;

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
    msg.setTimeStamp(0.0848117071924);
    msg.setSource(44247U);
    msg.setSourceEntity(99U);
    msg.setDestination(1842U);
    msg.setDestinationEntity(60U);
    msg.value.assign("PEDPDTLZRKJVRHWMUAMLVZPUYJCDAONYSJTGDNWKHBFQVXWNJGDBBSBTONORESUJEJEESQSVLXALBMEJPPHAUOHLORMUFLKCJYXQXUYYUEVBLMKZTZEMXZMGHESLVWCFOWOYOWHIIBAAYNWURKZTTPKYIFZCPFCHQEKRIQGJGTWKMWIVCGQNHZYOBFRUXMRHCCKDRQDRIFIT");

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
    msg.setTimeStamp(0.649369391224);
    msg.setSource(10421U);
    msg.setSourceEntity(44U);
    msg.setDestination(823U);
    msg.setDestinationEntity(81U);
    msg.value.assign("BGZSWGRIBPGNNGVANYAALBPYIUICDCDSRQOBOJHFRPKORSTCHURPKKCAUFNSAVXOUQLPIUUNRFVVYKRLNYBNMPEOQNZLVTZEZQLBCCMHDAXDODHVBSZSNMMAUXLMQYPHXKJECGIRE");

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
    msg.setTimeStamp(0.168139661774);
    msg.setSource(27218U);
    msg.setSourceEntity(84U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(62U);
    msg.value.assign("GYGXAGTPXFKHDYRUZVMRGURIXKEDIRIRESCUNKOJPOOLNSDLTUM");

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
    msg.setTimeStamp(0.100151688796);
    msg.setSource(57149U);
    msg.setSourceEntity(175U);
    msg.setDestination(47734U);
    msg.setDestinationEntity(247U);
    const char tmp_msg_0[] = {15, -80, -110, 126, 120, -16, -61, 89, -28, 40, -103, 70, -78, -8, 0, -29, 15, 122, -92, -62, 51, 102, -10, -44, 87, 61, -46, -44, 123, -93, -32, 126, -46, 120, -21, 83, 82, -67, -25, -91, -104, 61, 28, -9, -118, 3, -79, 42, -123, -122, 78, 55, 91, 89, -95, 12, 14, 126, -23, -60, -70, 2, -89, 77, -62, 22, -25, -39, 38, 76, 77, 50, -21, -64, 96, 95, 34, -93, -68, 56, 58, -84, -127, -78, -31, 119, 49, 73, 78, -119, -111, 14, -125, 23, -78, -38, 16, 110, 7, 26, -57, -114, -81, -54, -34, -119, 64, 41, -90, -34, 78, 61, -5, 43, 24, -16, -45, -40, -127, -26, 103, 65, -28, 52, 13, -14, -24, -16, -49, 93, 5, -102, 106, -75, -126, -114, -53, 109, 93, -16, -99, -48, 34, -12, -58, 50, 48, 113, -72, 121, 27, 52, 100, -123, 121, 29, 24, 37, 100, 19, -36, -69, 102, 49, 100, -35, 9, 93, -119, -91, 112, -105, 25, -95, -83, -116};
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
    msg.setTimeStamp(0.400506345462);
    msg.setSource(64630U);
    msg.setSourceEntity(132U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(88U);
    const char tmp_msg_0[] = {84, -121, -25, -60, 122, -96, 15, -113, 63, 40, -55, 82, -66, 120, 49, 29, -36, -110, -38, -116, 110, 14, -101, -128, -18, 90, -40, 102, -120, 57, -109, -128, 28, -40, 11, 114, 106, 124, 16, -125, 93, -114, -98, -10, -1, -96, 42, 59, -41, -6, -60, -72, -12, 6, 41, -76, 49, 37, 25, 71, 50, -117, 117, 59, -100, -99, -19, 125, 122, -4, 110, 88, 42, -18, 10, 83, -61, -8, 69, -102, -68, -75, -10, 73, -89, -120, 99, -102, -91, -78, 93, 126, -47, -11, -74, -53, -77, -8, -13, -9, 25, -117, -88, 95, -46, 21, -79, 46, -107, -56, -80, 59, 36, 126, 11, -77, -90, 60, -35, -126, 123, -1, -45, 111, 52, 16, -83, -35, -5, 95, -25, 120, 32, 12, 44, -27, -120, -62, 1, 116, -45, -29, 56, -78, 90, -33, 115, -40, -18, 37, -3, -56, 0, 29, 77};
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
    msg.setTimeStamp(0.286043958864);
    msg.setSource(46388U);
    msg.setSourceEntity(119U);
    msg.setDestination(34144U);
    msg.setDestinationEntity(65U);
    const char tmp_msg_0[] = {124, -66, -106, 42, 61, 76, 95, 62, -71, 114, -43, -10, 26, -43, 114, 11, -5, -107, 70, 9, 37, 62, -74, -32, -8, 61, 53, 34, 55, 113, -10, 62, -28, 54, 41, -19, 112, -33, -85, 44, -119, -61, 20, -46, 29, -68, -99, 6, 35, -121, 125, -47, -46, 32, 84, -62, -42, 5, 12, 91, -25, 59, -15, -25, -107, 108, 119, -76, -128, -84, -71, -4, 2, 68, 32, -83, 94, -74, -108, -128, 64, -65, -41, -29, 42, 125, 63, -127, 42, 40, -113, -118, 14};
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
    msg.setTimeStamp(0.575948850499);
    msg.setSource(7018U);
    msg.setSourceEntity(152U);
    msg.setDestination(14658U);
    msg.setDestinationEntity(179U);
    msg.value = 0.247495320887;

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
    msg.setTimeStamp(0.826258093317);
    msg.setSource(10081U);
    msg.setSourceEntity(163U);
    msg.setDestination(19597U);
    msg.setDestinationEntity(129U);
    msg.value = 0.152262099629;

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
    msg.setTimeStamp(0.720488129128);
    msg.setSource(29510U);
    msg.setSourceEntity(9U);
    msg.setDestination(62005U);
    msg.setDestinationEntity(23U);
    msg.value = 0.76535294701;

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
    msg.setTimeStamp(0.00661633917466);
    msg.setSource(34002U);
    msg.setSourceEntity(234U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(51U);
    msg.type = 25U;
    msg.frequency = 1545239001U;
    msg.min_range = 29883U;
    msg.max_range = 6963U;
    msg.bits_per_point = 42U;
    msg.scale_factor = 0.846123289351;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.60087792051;
    tmp_msg_0.beam_height = 0.224357472316;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {95, -21, -94, -36, 102, -21, 111, 88, -99, 3, 34, 80, -65, 29, -94, -35, 124, -21, -29, -26, 26, 47, -124, -116, 20, -66, 12, -112, -97, -18, -35, 118, 91, -125, -111, -117, 109, 32, 51, 109, 44, 36, 113, -59, 82, -104, -96, -98, -57, 98, 56, 10, -65, 8, -98, 99, 21, 3, -40, 106, -9, -100, 11, -16, -29, 58, -111, -57, 2, 41, 104, 102, -110, -2, 6, -52, 19, 65, -71, 30, 79, -118, 67, 8, -84, 37, 15, 17, -125, 65, 101, -68, 46, 75, -101, 125, -116, -108, -24, -54, 116, -37, 85, 9, -57, -22, -20, -84, -71, -70, 93, -2, 57, -40, 16, -124, -41, 123, -79, 21, -74, 113, 99};
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
    msg.setTimeStamp(0.9412120213);
    msg.setSource(48712U);
    msg.setSourceEntity(100U);
    msg.setDestination(43214U);
    msg.setDestinationEntity(116U);
    msg.type = 192U;
    msg.frequency = 3969144320U;
    msg.min_range = 44539U;
    msg.max_range = 48822U;
    msg.bits_per_point = 115U;
    msg.scale_factor = 0.625846267313;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.157405188522;
    tmp_msg_0.beam_height = 0.998716950415;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-19, -50, -116, 121, 83, 62, -53, -99, 39, 7, -78, 69, 120, 104, 118, -25, 90, -67, -56, -118, -73, -68, -102, 58, 68, 11, -9, -1, -48, 105, -67, 74, -109, -81, -68, -74, 107, -15, 17, 58, -116, -35, -23, -120, 66, -93, 24, -80, 87, 66, -87, 31, -121, 1, -91, 38, 74, 54, 73, 1, -87, -34, 120, -12, -10, -116, -29, 39, 28, -2, 19, 82, 10, 33, 8, -69, 45, 71, 58, 85, 124, -63, -63, -74, -38, 119, -45, 49, -82, 87, 120, 22, -113, 59, -93, 123, -32, 67, 53, 96, -85, 123, -81, 20, -90, -15, 125, 5, -70, -34, -44, 23, -103, 21, 41, 72, -116, -31, 106, 99, -36, 18, -3, 91, 67, 85, 97, -72, -48, -59, -46, 94, 73, 43, -70, -124, 7, 8, -11, 41, 108, -93, 73, 121, 123, -122, -115, 81, 95, -10, 34, -116, -33, 16, 86, -128, 10, 41, 100, -4, -65, -12, -59, -17, 120, -44, -9, 109, 115, -33, -86, 35, 117, 12, 24, 90, -43, 76, 105, -114, -56, 44, 47, -3, 30, 54, -1, -79, 25, -8, 102, 121, 33, 68, 123, 36, -99, -93, -56, 22, -29, 104, 119, 73, 123, 69, -83, 89, -123, 56, -34, 111, 123, -54, -38, -96, -48, 108, 70, 111, 77, 75, -88, 14, 107, 93, -45};
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
    msg.setTimeStamp(0.0190719448374);
    msg.setSource(52197U);
    msg.setSourceEntity(14U);
    msg.setDestination(18540U);
    msg.setDestinationEntity(135U);
    msg.type = 10U;
    msg.frequency = 235722192U;
    msg.min_range = 64477U;
    msg.max_range = 25555U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.729242017202;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.303863752886;
    tmp_msg_0.beam_height = 0.53010160382;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {126, 111, -85, -3, -57, 81, 32, -29, -92, 68, -45, -54, -12, 47, 51, -121, -96, -90, -14, 98, -82, -89, 0, -66, -35, 49, 6, -15, 71, -25, -13, -115, 46, 78, -112, 6, -41, 93, -61, 33, -5, 40, 58, -97, -114, 55, -81, -110, 112, 31, 12, 18, 97, 10, 83, -72, -71, -114, 91, 79, 90, -27, 91, -66, 95, -88, -126, -104, 80, 97, 28, -111, -98, -45, 0, -75, -99, 106, 32, -108, 42, 58, -97, -89, 118, 109, -71, 24, -61, 47, -73, -66, 52, 39, -123, 117, -2, -96, 85, -117, 44, 124, 105, 23, 50, 114, -83, -113, 4, -30, 44, -54, -123, 19, 82, 112, 31, 30, 38, -119, 66, -74, 27, 2, -8, 83, -124, -128, 123, -59, 100, 57, -122, 122, 9, 107, -68, -14, 125, -125, -113, 71, 95, -24, -37, -55, 16, -110, -38, 79, 125, -98, 22, -12, 92, -1, -78, -119, -17, -122, 106, -104, 95, 94, 104, -20, 51, 5, -31, 57, -56, -121, -101, 47, -29, 98, -23};
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
    msg.setTimeStamp(0.706732917603);
    msg.setSource(18928U);
    msg.setSourceEntity(91U);
    msg.setDestination(19273U);
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
    msg.setTimeStamp(0.952433788885);
    msg.setSource(60267U);
    msg.setSourceEntity(175U);
    msg.setDestination(1244U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.683394534421);
    msg.setSource(17354U);
    msg.setSourceEntity(64U);
    msg.setDestination(2006U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.786398405957);
    msg.setSource(42049U);
    msg.setSourceEntity(79U);
    msg.setDestination(15556U);
    msg.setDestinationEntity(102U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.413033794096);
    msg.setSource(41082U);
    msg.setSourceEntity(101U);
    msg.setDestination(62156U);
    msg.setDestinationEntity(2U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.611357239789);
    msg.setSource(54516U);
    msg.setSourceEntity(1U);
    msg.setDestination(51619U);
    msg.setDestinationEntity(151U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.122015542727);
    msg.setSource(22003U);
    msg.setSourceEntity(121U);
    msg.setDestination(56237U);
    msg.setDestinationEntity(191U);
    msg.value = 0.0398812444281;
    msg.confidence = 0.234319572567;
    msg.opmodes.assign("ZYYBJMSLYXGZODPLRALFULGEHMGNHRKMFUSNZGETWLFYBJRGVUKQCTTTJYDATBKNVLQVCHQYHBUTFICJCGIQIEDOJWUFV");

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
    msg.setTimeStamp(0.498879558138);
    msg.setSource(18328U);
    msg.setSourceEntity(78U);
    msg.setDestination(7069U);
    msg.setDestinationEntity(177U);
    msg.value = 0.770455008944;
    msg.confidence = 0.850041838997;
    msg.opmodes.assign("EQKGHSBTBQCBTOCBSLAYLSENSCMWRSKEHJDAZIGLUXDGFBQWLNSMFYSDKHDRDQWPIHPYRYTPCUVWJOCKMBUYWQHJYLUH");

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
    msg.setTimeStamp(0.895946652731);
    msg.setSource(39661U);
    msg.setSourceEntity(154U);
    msg.setDestination(5750U);
    msg.setDestinationEntity(56U);
    msg.value = 0.100864136197;
    msg.confidence = 0.338916472508;
    msg.opmodes.assign("DZVIURATEASQAEPVHKAKLFXPEPWQMNTKYJRMDHVGDINPZWFBNJCRKBORDFODRG");

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
    msg.setTimeStamp(0.989648578099);
    msg.setSource(44991U);
    msg.setSourceEntity(77U);
    msg.setDestination(21104U);
    msg.setDestinationEntity(251U);
    msg.itow = 2601897526U;
    msg.lat = 0.559212537769;
    msg.lon = 0.257147802786;
    msg.height_ell = 0.572003318298;
    msg.height_sea = 0.3126867566;
    msg.hacc = 0.989295652348;
    msg.vacc = 0.448027244816;
    msg.vel_n = 0.763194970775;
    msg.vel_e = 0.749411473688;
    msg.vel_d = 0.451099399978;
    msg.speed = 0.338546760847;
    msg.gspeed = 0.00399794154251;
    msg.heading = 0.0771433758144;
    msg.sacc = 0.497568082154;
    msg.cacc = 0.934809123722;

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
    msg.setTimeStamp(0.328657336546);
    msg.setSource(2953U);
    msg.setSourceEntity(33U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(175U);
    msg.itow = 1696269643U;
    msg.lat = 0.839812508266;
    msg.lon = 0.220305231128;
    msg.height_ell = 0.422560797851;
    msg.height_sea = 0.233203190578;
    msg.hacc = 0.0878013544452;
    msg.vacc = 0.868580357571;
    msg.vel_n = 0.697989363527;
    msg.vel_e = 0.00708269126609;
    msg.vel_d = 0.475803568934;
    msg.speed = 0.367432310841;
    msg.gspeed = 0.818153629669;
    msg.heading = 0.0414030578517;
    msg.sacc = 0.920261084904;
    msg.cacc = 0.234463736161;

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
    msg.setTimeStamp(0.987354822904);
    msg.setSource(12998U);
    msg.setSourceEntity(166U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(181U);
    msg.itow = 1609081417U;
    msg.lat = 0.975681299864;
    msg.lon = 0.331145566514;
    msg.height_ell = 0.22104422603;
    msg.height_sea = 0.817388463784;
    msg.hacc = 0.0385790588322;
    msg.vacc = 0.700311837102;
    msg.vel_n = 0.327393523873;
    msg.vel_e = 0.387114047699;
    msg.vel_d = 0.404937147828;
    msg.speed = 0.689907574576;
    msg.gspeed = 0.969308427714;
    msg.heading = 0.486874342737;
    msg.sacc = 0.794244109286;
    msg.cacc = 0.935214110087;

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
    msg.setTimeStamp(0.620753183436);
    msg.setSource(26212U);
    msg.setSourceEntity(157U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(194U);
    msg.id = 8U;
    msg.value = 0.578289954576;

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
    msg.setTimeStamp(0.220870545446);
    msg.setSource(45526U);
    msg.setSourceEntity(47U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(70U);
    msg.id = 208U;
    msg.value = 0.778654627911;

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
    msg.setTimeStamp(0.407423750214);
    msg.setSource(26512U);
    msg.setSourceEntity(129U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(133U);
    msg.id = 16U;
    msg.value = 0.599023333013;

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
    msg.setTimeStamp(0.535892834137);
    msg.setSource(58459U);
    msg.setSourceEntity(172U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(226U);
    msg.x = 0.962433038532;
    msg.y = 0.303590248491;
    msg.z = 0.0830107683451;
    msg.phi = 0.783521426756;
    msg.theta = 0.525722851865;
    msg.psi = 0.317414994219;

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
    msg.setTimeStamp(0.0449953335249);
    msg.setSource(47006U);
    msg.setSourceEntity(41U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(24U);
    msg.x = 0.260643163931;
    msg.y = 0.877573878728;
    msg.z = 0.497440454254;
    msg.phi = 0.41473760264;
    msg.theta = 0.68702456374;
    msg.psi = 0.845393364397;

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
    msg.setTimeStamp(0.691450163447);
    msg.setSource(24545U);
    msg.setSourceEntity(148U);
    msg.setDestination(58942U);
    msg.setDestinationEntity(124U);
    msg.x = 0.192805363739;
    msg.y = 0.839588549859;
    msg.z = 0.375049205516;
    msg.phi = 0.171582926257;
    msg.theta = 0.412556438342;
    msg.psi = 0.851625005267;

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
    msg.setTimeStamp(0.301368128446);
    msg.setSource(53423U);
    msg.setSourceEntity(212U);
    msg.setDestination(28811U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.132050959257;
    msg.beam_height = 0.554418686437;

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
    msg.setTimeStamp(0.298003514562);
    msg.setSource(38668U);
    msg.setSourceEntity(115U);
    msg.setDestination(55232U);
    msg.setDestinationEntity(202U);
    msg.beam_width = 0.277404581912;
    msg.beam_height = 0.327678650117;

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
    msg.setTimeStamp(0.317019990523);
    msg.setSource(54399U);
    msg.setSourceEntity(123U);
    msg.setDestination(57271U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.589157215603;
    msg.beam_height = 0.695840054071;

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
    msg.setTimeStamp(0.893045207488);
    msg.setSource(11251U);
    msg.setSourceEntity(144U);
    msg.setDestination(12528U);
    msg.setDestinationEntity(108U);
    msg.sane = 193U;

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
    msg.setTimeStamp(0.312220467746);
    msg.setSource(49150U);
    msg.setSourceEntity(16U);
    msg.setDestination(2782U);
    msg.setDestinationEntity(176U);
    msg.sane = 194U;

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
    msg.setTimeStamp(0.487991737667);
    msg.setSource(36357U);
    msg.setSourceEntity(249U);
    msg.setDestination(8242U);
    msg.setDestinationEntity(183U);
    msg.sane = 41U;

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
    msg.setTimeStamp(0.142768700839);
    msg.setSource(59947U);
    msg.setSourceEntity(60U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(235U);
    msg.value = 0.544320298475;

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
    msg.setTimeStamp(0.216282726388);
    msg.setSource(57740U);
    msg.setSourceEntity(63U);
    msg.setDestination(53130U);
    msg.setDestinationEntity(177U);
    msg.value = 0.802049856507;

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
    msg.setTimeStamp(0.393646864813);
    msg.setSource(17092U);
    msg.setSourceEntity(221U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(131U);
    msg.value = 0.421033814181;

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
    msg.setTimeStamp(0.878509584336);
    msg.setSource(39121U);
    msg.setSourceEntity(73U);
    msg.setDestination(15110U);
    msg.setDestinationEntity(40U);
    msg.value = 0.605375515527;

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
    msg.setTimeStamp(0.323891861927);
    msg.setSource(27047U);
    msg.setSourceEntity(217U);
    msg.setDestination(58154U);
    msg.setDestinationEntity(10U);
    msg.value = 0.449498388591;

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
    msg.setTimeStamp(0.369397915726);
    msg.setSource(12321U);
    msg.setSourceEntity(134U);
    msg.setDestination(56827U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0588888836285;

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
    msg.setTimeStamp(0.574638797689);
    msg.setSource(60686U);
    msg.setSourceEntity(155U);
    msg.setDestination(3725U);
    msg.setDestinationEntity(136U);
    msg.value = 0.776975568397;

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
    msg.setTimeStamp(0.223740636989);
    msg.setSource(6040U);
    msg.setSourceEntity(2U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(110U);
    msg.value = 0.79313386274;

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
    msg.setTimeStamp(0.390850071937);
    msg.setSource(4994U);
    msg.setSourceEntity(114U);
    msg.setDestination(1026U);
    msg.setDestinationEntity(127U);
    msg.value = 0.420710768821;

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
    msg.setTimeStamp(0.67554711487);
    msg.setSource(19521U);
    msg.setSourceEntity(206U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(200U);
    msg.value = 0.487692484683;

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
    msg.setTimeStamp(0.0763974143089);
    msg.setSource(37567U);
    msg.setSourceEntity(200U);
    msg.setDestination(58682U);
    msg.setDestinationEntity(189U);
    msg.value = 0.0575358267531;

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
    msg.setTimeStamp(0.297640198738);
    msg.setSource(42743U);
    msg.setSourceEntity(132U);
    msg.setDestination(13450U);
    msg.setDestinationEntity(140U);
    msg.value = 0.639621978095;

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
    msg.setTimeStamp(0.382488089039);
    msg.setSource(60115U);
    msg.setSourceEntity(249U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(187U);
    msg.value = 0.462221342079;

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
    msg.setTimeStamp(0.837566296515);
    msg.setSource(61057U);
    msg.setSourceEntity(6U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(110U);
    msg.value = 0.584699820022;

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
    msg.setTimeStamp(0.820522674848);
    msg.setSource(48922U);
    msg.setSourceEntity(12U);
    msg.setDestination(8094U);
    msg.setDestinationEntity(205U);
    msg.value = 0.859596825856;

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
    msg.setTimeStamp(0.146462406214);
    msg.setSource(18372U);
    msg.setSourceEntity(61U);
    msg.setDestination(32961U);
    msg.setDestinationEntity(186U);
    msg.value = 0.977950379342;

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
    msg.setTimeStamp(0.722681450118);
    msg.setSource(39483U);
    msg.setSourceEntity(150U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(184U);
    msg.value = 0.463795249019;

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
    msg.setTimeStamp(0.60752621888);
    msg.setSource(53480U);
    msg.setSourceEntity(176U);
    msg.setDestination(805U);
    msg.setDestinationEntity(168U);
    msg.value = 0.316490227855;

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
    msg.setTimeStamp(0.388613541357);
    msg.setSource(42603U);
    msg.setSourceEntity(25U);
    msg.setDestination(17995U);
    msg.setDestinationEntity(72U);
    msg.value = 0.909018365016;

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
    msg.setTimeStamp(0.657251956103);
    msg.setSource(20685U);
    msg.setSourceEntity(168U);
    msg.setDestination(43716U);
    msg.setDestinationEntity(126U);
    msg.value = 0.106204411045;

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
    msg.setTimeStamp(0.633524568586);
    msg.setSource(52220U);
    msg.setSourceEntity(124U);
    msg.setDestination(45481U);
    msg.setDestinationEntity(149U);
    msg.value = 0.667712467367;

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
    msg.setTimeStamp(0.0308111909765);
    msg.setSource(2864U);
    msg.setSourceEntity(172U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(163U);
    msg.value = 0.57683979812;

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
    msg.setTimeStamp(0.358573633718);
    msg.setSource(29982U);
    msg.setSourceEntity(103U);
    msg.setDestination(35026U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0362222871334;

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
    msg.setTimeStamp(0.911945554708);
    msg.setSource(65102U);
    msg.setSourceEntity(171U);
    msg.setDestination(22561U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0746685475092;

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
    msg.setTimeStamp(0.833680112221);
    msg.setSource(31150U);
    msg.setSourceEntity(145U);
    msg.setDestination(11318U);
    msg.setDestinationEntity(7U);
    msg.validity = 27122U;
    msg.type = 213U;
    msg.tow = 43046345U;
    msg.base_lat = 0.282266055827;
    msg.base_lon = 0.942756762315;
    msg.base_height = 0.687073087665;
    msg.n = 0.907282286532;
    msg.e = 0.626761690659;
    msg.d = 0.0231207958145;
    msg.v_n = 0.483844737417;
    msg.v_e = 0.56472287903;
    msg.v_d = 0.241958319551;
    msg.satellites = 175U;
    msg.iar_hyp = 26034U;
    msg.iar_ratio = 0.24914494524;

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
    msg.setTimeStamp(0.722144637182);
    msg.setSource(54430U);
    msg.setSourceEntity(226U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(195U);
    msg.validity = 63959U;
    msg.type = 144U;
    msg.tow = 2462783970U;
    msg.base_lat = 0.181298258557;
    msg.base_lon = 0.295950653423;
    msg.base_height = 0.283404284428;
    msg.n = 0.263971237109;
    msg.e = 0.149435839917;
    msg.d = 0.606904368456;
    msg.v_n = 0.804311282709;
    msg.v_e = 0.638808209949;
    msg.v_d = 0.859962279514;
    msg.satellites = 247U;
    msg.iar_hyp = 2399U;
    msg.iar_ratio = 0.859135171344;

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
    msg.setTimeStamp(0.453532395743);
    msg.setSource(4526U);
    msg.setSourceEntity(95U);
    msg.setDestination(2197U);
    msg.setDestinationEntity(207U);
    msg.validity = 44599U;
    msg.type = 84U;
    msg.tow = 309310048U;
    msg.base_lat = 0.414371047176;
    msg.base_lon = 0.461100204025;
    msg.base_height = 0.438421045868;
    msg.n = 0.119747356733;
    msg.e = 0.126581202099;
    msg.d = 0.485236789479;
    msg.v_n = 0.872721770493;
    msg.v_e = 0.98458611637;
    msg.v_d = 0.782653002151;
    msg.satellites = 3U;
    msg.iar_hyp = 64655U;
    msg.iar_ratio = 0.931532741542;

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
    msg.setTimeStamp(0.647899975246);
    msg.setSource(18334U);
    msg.setSourceEntity(88U);
    msg.setDestination(12751U);
    msg.setDestinationEntity(231U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.733266906838;
    tmp_msg_0.lon = 0.260507050089;
    tmp_msg_0.height = 0.566539406102;
    tmp_msg_0.x = 0.33564108024;
    tmp_msg_0.y = 0.241762313153;
    tmp_msg_0.z = 0.411400326925;
    tmp_msg_0.phi = 0.919438005023;
    tmp_msg_0.theta = 0.267971401746;
    tmp_msg_0.psi = 0.253471671213;
    tmp_msg_0.u = 0.744151711046;
    tmp_msg_0.v = 0.00896002252687;
    tmp_msg_0.w = 0.34671372597;
    tmp_msg_0.vx = 0.299631850679;
    tmp_msg_0.vy = 0.987777195397;
    tmp_msg_0.vz = 0.359423383232;
    tmp_msg_0.p = 0.90449887638;
    tmp_msg_0.q = 0.0817368147679;
    tmp_msg_0.r = 0.425318242731;
    tmp_msg_0.depth = 0.0488295256012;
    tmp_msg_0.alt = 0.391681921567;
    msg.state.set(tmp_msg_0);
    msg.type = 51U;

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
    msg.setTimeStamp(0.0358211639069);
    msg.setSource(16326U);
    msg.setSourceEntity(147U);
    msg.setDestination(30253U);
    msg.setDestinationEntity(69U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.669460569435;
    tmp_msg_0.lon = 0.036998726728;
    tmp_msg_0.height = 0.589390609932;
    tmp_msg_0.x = 0.940944198029;
    tmp_msg_0.y = 0.234218323452;
    tmp_msg_0.z = 0.83471264515;
    tmp_msg_0.phi = 0.684938120709;
    tmp_msg_0.theta = 0.46559744215;
    tmp_msg_0.psi = 0.667868583961;
    tmp_msg_0.u = 0.409094033727;
    tmp_msg_0.v = 0.926485239676;
    tmp_msg_0.w = 0.716783442473;
    tmp_msg_0.vx = 0.0157651825179;
    tmp_msg_0.vy = 0.945061346832;
    tmp_msg_0.vz = 0.391145080975;
    tmp_msg_0.p = 0.000658062208284;
    tmp_msg_0.q = 0.981830188226;
    tmp_msg_0.r = 0.0303634040069;
    tmp_msg_0.depth = 0.77616396448;
    tmp_msg_0.alt = 0.935724204153;
    msg.state.set(tmp_msg_0);
    msg.type = 184U;

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
    msg.setTimeStamp(0.518593074037);
    msg.setSource(34905U);
    msg.setSourceEntity(35U);
    msg.setDestination(49706U);
    msg.setDestinationEntity(146U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.85859397169;
    tmp_msg_0.lon = 0.515460238882;
    tmp_msg_0.height = 0.16161340738;
    tmp_msg_0.x = 0.501737391896;
    tmp_msg_0.y = 0.48291289144;
    tmp_msg_0.z = 0.233506301961;
    tmp_msg_0.phi = 0.987915879843;
    tmp_msg_0.theta = 0.430676338081;
    tmp_msg_0.psi = 0.434452725707;
    tmp_msg_0.u = 0.845914926795;
    tmp_msg_0.v = 0.766701795179;
    tmp_msg_0.w = 0.628318474826;
    tmp_msg_0.vx = 0.142384169198;
    tmp_msg_0.vy = 0.136451627221;
    tmp_msg_0.vz = 0.802986510111;
    tmp_msg_0.p = 0.574566872654;
    tmp_msg_0.q = 0.936871302696;
    tmp_msg_0.r = 0.59475082511;
    tmp_msg_0.depth = 0.75853851614;
    tmp_msg_0.alt = 0.250072061883;
    msg.state.set(tmp_msg_0);
    msg.type = 86U;

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
    msg.setTimeStamp(0.125993610086);
    msg.setSource(55408U);
    msg.setSourceEntity(53U);
    msg.setDestination(32253U);
    msg.setDestinationEntity(122U);
    msg.value = 0.48443307741;

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
    msg.setTimeStamp(0.183961178579);
    msg.setSource(55735U);
    msg.setSourceEntity(228U);
    msg.setDestination(49208U);
    msg.setDestinationEntity(164U);
    msg.value = 0.667844963767;

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
    msg.setTimeStamp(0.83283354665);
    msg.setSource(21250U);
    msg.setSourceEntity(17U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(182U);
    msg.value = 0.72932622667;

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
    msg.setTimeStamp(0.838160171201);
    msg.setSource(21572U);
    msg.setSourceEntity(32U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(180U);
    msg.value = 0.92500183758;

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
    msg.setTimeStamp(0.490249472154);
    msg.setSource(36168U);
    msg.setSourceEntity(158U);
    msg.setDestination(210U);
    msg.setDestinationEntity(18U);
    msg.value = 0.86430660463;

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
    msg.setTimeStamp(0.328603372911);
    msg.setSource(7958U);
    msg.setSourceEntity(31U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(79U);
    msg.value = 0.551184005473;

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
    msg.setTimeStamp(0.5673907462);
    msg.setSource(20715U);
    msg.setSourceEntity(47U);
    msg.setDestination(43813U);
    msg.setDestinationEntity(116U);
    msg.value = 0.249263847751;

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
    msg.setTimeStamp(0.36784873754);
    msg.setSource(8400U);
    msg.setSourceEntity(70U);
    msg.setDestination(36448U);
    msg.setDestinationEntity(6U);
    msg.value = 0.634147097027;

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
    msg.setTimeStamp(0.604294865246);
    msg.setSource(960U);
    msg.setSourceEntity(105U);
    msg.setDestination(57124U);
    msg.setDestinationEntity(103U);
    msg.value = 0.331907886617;

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
    msg.setTimeStamp(0.178150283353);
    msg.setSource(56243U);
    msg.setSourceEntity(120U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(173U);
    msg.value = 0.858102785468;

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
    msg.setTimeStamp(0.0985780394691);
    msg.setSource(21118U);
    msg.setSourceEntity(167U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(180U);
    msg.value = 0.784884240125;

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
    msg.setTimeStamp(0.208548626761);
    msg.setSource(26202U);
    msg.setSourceEntity(119U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(77U);
    msg.value = 0.176866608038;

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
    msg.setTimeStamp(0.728907203018);
    msg.setSource(16555U);
    msg.setSourceEntity(25U);
    msg.setDestination(18053U);
    msg.setDestinationEntity(33U);
    msg.value = 0.830747076583;

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
    msg.setTimeStamp(0.640536333192);
    msg.setSource(13807U);
    msg.setSourceEntity(110U);
    msg.setDestination(5147U);
    msg.setDestinationEntity(195U);
    msg.value = 0.810675146697;

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
    msg.setTimeStamp(0.246966663891);
    msg.setSource(40021U);
    msg.setSourceEntity(48U);
    msg.setDestination(13755U);
    msg.setDestinationEntity(127U);
    msg.value = 0.257281581386;

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
    msg.setTimeStamp(0.028643069848);
    msg.setSource(5104U);
    msg.setSourceEntity(70U);
    msg.setDestination(42923U);
    msg.setDestinationEntity(79U);
    msg.id = 117U;
    msg.zoom = 22U;
    msg.action = 233U;

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
    msg.setTimeStamp(0.595949575753);
    msg.setSource(15481U);
    msg.setSourceEntity(207U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(240U);
    msg.id = 146U;
    msg.zoom = 128U;
    msg.action = 101U;

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
    msg.setTimeStamp(0.581533266936);
    msg.setSource(56384U);
    msg.setSourceEntity(5U);
    msg.setDestination(64625U);
    msg.setDestinationEntity(8U);
    msg.id = 203U;
    msg.zoom = 88U;
    msg.action = 62U;

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
    msg.setTimeStamp(0.20532287356);
    msg.setSource(44925U);
    msg.setSourceEntity(32U);
    msg.setDestination(18831U);
    msg.setDestinationEntity(29U);
    msg.id = 247U;
    msg.value = 0.245245218608;

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
    msg.setTimeStamp(0.245454493416);
    msg.setSource(52729U);
    msg.setSourceEntity(60U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(9U);
    msg.id = 216U;
    msg.value = 0.284586405932;

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
    msg.setTimeStamp(0.00107697179379);
    msg.setSource(25725U);
    msg.setSourceEntity(62U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(124U);
    msg.id = 15U;
    msg.value = 0.664229055202;

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
    msg.setTimeStamp(0.00158767348469);
    msg.setSource(23887U);
    msg.setSourceEntity(63U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(165U);
    msg.id = 170U;
    msg.value = 0.734512796626;

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
    msg.setTimeStamp(0.774947407754);
    msg.setSource(25968U);
    msg.setSourceEntity(107U);
    msg.setDestination(26840U);
    msg.setDestinationEntity(139U);
    msg.id = 84U;
    msg.value = 0.63553253277;

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
    msg.setTimeStamp(0.658860862325);
    msg.setSource(22194U);
    msg.setSourceEntity(42U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(142U);
    msg.id = 148U;
    msg.value = 0.260970425785;

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
    msg.setTimeStamp(0.773356360118);
    msg.setSource(15558U);
    msg.setSourceEntity(229U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(153U);
    msg.id = 219U;
    msg.angle = 0.728426805627;

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
    msg.setTimeStamp(0.383462838892);
    msg.setSource(5159U);
    msg.setSourceEntity(202U);
    msg.setDestination(42629U);
    msg.setDestinationEntity(184U);
    msg.id = 30U;
    msg.angle = 0.578253945378;

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
    msg.setTimeStamp(0.0737628199729);
    msg.setSource(44508U);
    msg.setSourceEntity(147U);
    msg.setDestination(39256U);
    msg.setDestinationEntity(2U);
    msg.id = 170U;
    msg.angle = 0.902866493735;

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
    msg.setTimeStamp(0.559705139642);
    msg.setSource(32995U);
    msg.setSourceEntity(110U);
    msg.setDestination(45469U);
    msg.setDestinationEntity(10U);
    msg.op = 67U;
    msg.actions.assign("GHGNGUTIBDAUGRFZUBGQHEHUHZQROYBYSRMVWJCPJGSJTCBAXAMMMUPFAHZCDUPLBWLIZSXXYHNKVQELSFFIWGHMJQRZHVKLPNOOPRUVIDIOLKENHOV");

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
    msg.setTimeStamp(0.864122877111);
    msg.setSource(57541U);
    msg.setSourceEntity(213U);
    msg.setDestination(26890U);
    msg.setDestinationEntity(187U);
    msg.op = 49U;
    msg.actions.assign("YTJYWKZVPPCKREYEWWUPHPENLJQDVWFDWHBQDHJFIKLIOTJSVNMELOVGOBLGMZGSLDUBNTZCETMTOTAWRQBSATZKXRFQJPUMKXIDTRCNRIUINGEAQXXPSKIFWBHWPKRYJBLTBJBXWEZMOXEDN");

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
    msg.setTimeStamp(0.888289653624);
    msg.setSource(21579U);
    msg.setSourceEntity(48U);
    msg.setDestination(54603U);
    msg.setDestinationEntity(45U);
    msg.op = 71U;
    msg.actions.assign("DNPGBCSAHROTAXHWTLDSNSUPDYIJNQHRMDNTMARSEAUYCYTHCNOZXCVZMKEYNRVJBFNOMTRCKMVJXAJLWHVKCLYUGVQWYUDBKUGDBKQWPIRPMJPHPIXJGLLJQLHQBSZWXULGTEJHWDXFCQIRADOGMESZZOZCVVLPNJYSKADZUUFSBXROKEFALXILIFKBFHWSTGIETGOYPCTFQMIOBJNEBCSBQMONZFEUFGOXGEFEVRZVPQAIHVZKRY");

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
    msg.setTimeStamp(0.487715644726);
    msg.setSource(54401U);
    msg.setSourceEntity(26U);
    msg.setDestination(51222U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("IOQRUSLRVCWSEJYDMIKDIFYAOUVLYQWOWWLKTFAZTBNFDKOHEEJTXV");

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
    msg.setTimeStamp(0.216260671061);
    msg.setSource(11316U);
    msg.setSourceEntity(105U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(25U);
    msg.actions.assign("BRDPIOVKSHQQSEDYUZLKLRREFKDG");

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
    msg.setTimeStamp(0.864825720897);
    msg.setSource(26238U);
    msg.setSourceEntity(246U);
    msg.setDestination(10905U);
    msg.setDestinationEntity(213U);
    msg.actions.assign("XFHPWQGHVDUAXETEBUFNIDWLHCBKATGCMNDVNTDPGNDFSLZLALXGJOYCEZNSCBRQPX");

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
    msg.setTimeStamp(0.964201318192);
    msg.setSource(48468U);
    msg.setSourceEntity(240U);
    msg.setDestination(40041U);
    msg.setDestinationEntity(234U);
    msg.button = 117U;
    msg.value = 17U;

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
    msg.setTimeStamp(0.0341735736576);
    msg.setSource(61819U);
    msg.setSourceEntity(132U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(134U);
    msg.button = 119U;
    msg.value = 170U;

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
    msg.setTimeStamp(0.827883914131);
    msg.setSource(15449U);
    msg.setSourceEntity(209U);
    msg.setDestination(43530U);
    msg.setDestinationEntity(123U);
    msg.button = 15U;
    msg.value = 206U;

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
    msg.setTimeStamp(0.895328202468);
    msg.setSource(25852U);
    msg.setSourceEntity(93U);
    msg.setDestination(34051U);
    msg.setDestinationEntity(225U);
    msg.op = 205U;
    msg.text.assign("YSIRZDKUMMIBFTKYCFSGLMVJRCGWGGULGWCNJBRTUCYOYOTMGAPIQIJZVUEWARLVKKAEBJSHDWZCCBTZHGVLIMERFKHNHYIJFCSTYSUEOPWAXFFOXEVSJGXYESCQDLHLWUKUOTXRYTHQNNEYWNENKPLABAHYNOZNQLQWIDDMNLJPVXBMOMIQIXFFVVVEQFUDGKZSRQZPTUCMHKMJNHSJRIADZOPCWRVLABZHJDAZTPAREQXUTBX");

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
    msg.setTimeStamp(0.907494796763);
    msg.setSource(49894U);
    msg.setSourceEntity(99U);
    msg.setDestination(14577U);
    msg.setDestinationEntity(60U);
    msg.op = 173U;
    msg.text.assign("MTYWEZQVZGGIBEISMSFEJEWKVCESKXEDWJHLYTKJSYHQVYLAMFNOAGFPXHZANUAMTSYCXGVRSWQELOOUYGCRLRXNZJHOWNXTLQNAHMZLWITCJIBPVBZPSDKIBUKJBRKOVUKDWMIFVRFHDFTSGQVJTUHLHXACXPURID");

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
    msg.setTimeStamp(0.196832535656);
    msg.setSource(29101U);
    msg.setSourceEntity(170U);
    msg.setDestination(3509U);
    msg.setDestinationEntity(100U);
    msg.op = 230U;
    msg.text.assign("AWACBGEIKUXJXZNTFTPGCBEQAAYSQDVCDGETTNNXLWELPCJVCAVYMVJZWPRWTYOESHYPHXKZZPTRFMDVVRXMHODBRTWKIVGASZDBKSFHLNINFCHIQNURKBCXEUMBZMJPMSXEIPJLRIFJKAYVVEIWJKGQGDUYSHQTMUIHKEPSGLFUCJNOFQHOJHQFJITENXGZLRASDZMUKPWYORWPLOWLTO");

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
    msg.setTimeStamp(0.139349949343);
    msg.setSource(62329U);
    msg.setSourceEntity(40U);
    msg.setDestination(15800U);
    msg.setDestinationEntity(119U);
    msg.op = 82U;
    msg.time_remain = 0.448815791673;
    msg.sched_time = 0.63218635273;

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
    msg.setTimeStamp(0.217405336849);
    msg.setSource(47339U);
    msg.setSourceEntity(169U);
    msg.setDestination(35130U);
    msg.setDestinationEntity(210U);
    msg.op = 145U;
    msg.time_remain = 0.755736624371;
    msg.sched_time = 0.0415483551117;

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
    msg.setTimeStamp(0.550256362765);
    msg.setSource(53483U);
    msg.setSourceEntity(10U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(245U);
    msg.op = 246U;
    msg.time_remain = 0.446357115364;
    msg.sched_time = 0.774162065234;

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
    msg.setTimeStamp(0.879088309331);
    msg.setSource(30557U);
    msg.setSourceEntity(254U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NEYBIQMQHKQEJXBNITOPFUETVVAEXGVSLFYFIUXNDHDZPPYRZDVMQWCZNOTQB");
    msg.op = 96U;
    msg.sched_time = 0.910225994649;

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
    msg.setTimeStamp(0.337892930501);
    msg.setSource(61015U);
    msg.setSourceEntity(120U);
    msg.setDestination(43586U);
    msg.setDestinationEntity(43U);
    msg.name.assign("SRSJDGCOREQACWQDLOFBEJPMTINCARJARDMFU");
    msg.op = 192U;
    msg.sched_time = 0.629436042975;

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
    msg.setTimeStamp(0.0128304593869);
    msg.setSource(11855U);
    msg.setSourceEntity(245U);
    msg.setDestination(17418U);
    msg.setDestinationEntity(237U);
    msg.name.assign("SRUAXZVAGRXMUKOVXPSAIAMJDBHKWQOZTZCLGIJKMCAKAMJJKYZXWFYDOVGBDBYLTJLPJYXQCKPHWWHTYEYISDZTOGZNVWFFADPLHQEBTXWDTCRZWHETO");
    msg.op = 239U;
    msg.sched_time = 0.805540249449;

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
    msg.setTimeStamp(0.674011070293);
    msg.setSource(44848U);
    msg.setSourceEntity(100U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.507695614234);
    msg.setSource(50419U);
    msg.setSourceEntity(126U);
    msg.setDestination(56055U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.0491014411461);
    msg.setSource(49175U);
    msg.setSourceEntity(160U);
    msg.setDestination(23474U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.00115940034525);
    msg.setSource(58640U);
    msg.setSourceEntity(44U);
    msg.setDestination(37934U);
    msg.setDestinationEntity(225U);
    msg.name.assign("AXXUYWFCHRJNOPWNGEJNAIIQMGBQGTSBTPLQZYHNENIFRGDMGRBIPOPFGQZPDRWELFVJSPAMFBQMWNEHMCMDRZUUCZLWDFQVQKETOVZKRYIFWJTRZCWAQHKRCLMHJPYWAODKEHNESUKLYOPYVVUDSDAKENHMDUKCYJEBEGGVNKGUOVPZXVHBATASVFXACZUXSCSXOTXKICWTJSLHUYBAVJPYGD");
    msg.state = 175U;

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
    msg.setTimeStamp(0.729209230109);
    msg.setSource(36584U);
    msg.setSourceEntity(122U);
    msg.setDestination(53263U);
    msg.setDestinationEntity(75U);
    msg.name.assign("JZWOGUVINORFAJQNFIQLJEIVWJGAADGEGQKTOCALMUWBHOCPVIEUHVURDXOCIXGXLODYTORPPSEMSNOJBTPCNFDEQCMNRIPDOVAXRDYQRGQSBJUYQXKPBENWCDZMYEKKFKARYWHNMWYSWLITTXUVZCMJBAZXHTOFLTHYVVHAISGFXKJZMRZGLEKHG");
    msg.state = 29U;

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
    msg.setTimeStamp(0.976707796874);
    msg.setSource(29617U);
    msg.setSourceEntity(7U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(11U);
    msg.name.assign("NHFETGVLRALPHVQXVSSQBBAWNYRDRVNIOIDRNJLLDOQZDLGJEMRE");
    msg.state = 125U;

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
    msg.setTimeStamp(0.868725379298);
    msg.setSource(42599U);
    msg.setSourceEntity(61U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(201U);
    msg.name.assign("BWDOSLMGKCOGNRGPWRUSFSBOLCNUQEJQGKGKCRBIGWISOUMTMFZQCAOXHDOMBRMESDHPWXCLYQFZKVWEVUPANLAOQBTRYDZYCTMBWYOXRLXUELSDJHPJMVTJQGNPKJMNVDWDYXCFXAJDAAZZUFSHIBQZWBOSAGLLUMYVUMAIFEPFUJGVEBTHUQJRKPNKLNTXHERYTQTCCHTFTZXYIIINFVVSVEAKWGPXJZDKOZRSPEHPIRNL");
    msg.value = 142U;

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
    msg.setTimeStamp(0.906465109269);
    msg.setSource(64466U);
    msg.setSourceEntity(177U);
    msg.setDestination(33132U);
    msg.setDestinationEntity(209U);
    msg.name.assign("TQMXXLZNQRQKRMSTRYJHCDBWFWREQHDNPQNIWVOMGCDVIOCIIIGGKZKFIYJAEWFXAKYTPQSCYTXIFDUEDPGBXNCBLNDMLNUSNBCJTHKUMJQVICLLXIVECSEATPSPEEKSZCSOJKZVODWJFEBUNGVRRUHA");
    msg.value = 141U;

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
    msg.setTimeStamp(0.854759293789);
    msg.setSource(1864U);
    msg.setSourceEntity(237U);
    msg.setDestination(23221U);
    msg.setDestinationEntity(25U);
    msg.name.assign("FMOIRUASFBMTLDJQNRXPBGGDHLDRFWFAZGQBSYMEZCEETEQDKBRJIUJAQVEPONUIYNAXCCRPWJUQNSYJZAYWIBDIZFVUYOUARXTSTAEJYSCPKUTYHHKTSFHFTHMKRVZHIOPEKCLALPGZFNLBWVVTDGZNSNXFVPPMNECXAIIYDLJKUOZWETOLWWNVWKOJDXOLZEQDBCUXYCQHHKKVXVVXOZMJGW");
    msg.value = 76U;

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
    msg.setTimeStamp(0.0377777744645);
    msg.setSource(1365U);
    msg.setSourceEntity(72U);
    msg.setDestination(22731U);
    msg.setDestinationEntity(145U);
    msg.name.assign("IMLJTKMLBMRGIGRUQWZIGIKJNSZBIQHMBBDEXZZYHRCNERPNDSLIEVMQOTOWSILKOBVHTXWHJFTJHNXTTDYSWUKGLYLPBHQVUOAGCJFANMSOCJMPLTFOONXWFQDTJAUDYVYQVRNEGIBMUFBWWOOXSOMHUHECLRBUILDPJPFDYKZRRHIPXZPWXDNFAJKYYGVGAXABSPREDVSRUKWCXHPCTCVQQASUAFZFYFDECLPXUEAECQCNTKQZKZESAWG");

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
    msg.setTimeStamp(0.770367083841);
    msg.setSource(47786U);
    msg.setSourceEntity(202U);
    msg.setDestination(9378U);
    msg.setDestinationEntity(1U);
    msg.name.assign("NQUQSQLYHHXXNOWCWZXCPWXPCZQTSRULMHAPIGLVYYWKUZIFI");

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
    msg.setTimeStamp(0.00288697676046);
    msg.setSource(62350U);
    msg.setSourceEntity(49U);
    msg.setDestination(13328U);
    msg.setDestinationEntity(197U);
    msg.name.assign("QPQDXSEAMYYRUJIIFRGBMXASINXKUYLERJUYDVPJWTQDQJRK");

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
    msg.setTimeStamp(0.722027667335);
    msg.setSource(48561U);
    msg.setSourceEntity(94U);
    msg.setDestination(40929U);
    msg.setDestinationEntity(50U);
    msg.name.assign("RNEOUUHXRTJWHDSYOAXJBCFKVSBXPALDEFOMPGXVMXGQHIVDNQRMRMTZWHU");
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
    msg.setTimeStamp(0.472231360726);
    msg.setSource(3203U);
    msg.setSourceEntity(42U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(217U);
    msg.name.assign("DAUPPZELQBVNVZAVTEHHZDQKOUFUVVPGIINAOCXGGLDKDCOCIRLOUTVSHNDSNJYRIJVTFLCIYZGJHSPBQFVWBJCWYLOIRDCKTFPYLWWFGJZRQANJARYMWMQOQIWXUSMZUEMKGCRKCXHHDQMTTSHSILEQBNZMUXTNYUKQAO");
    msg.value = 116U;

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
    msg.setTimeStamp(0.631381875425);
    msg.setSource(60721U);
    msg.setSourceEntity(53U);
    msg.setDestination(32378U);
    msg.setDestinationEntity(155U);
    msg.name.assign("GQGETBPJYZSSHLKFHNFSLDSMBXCBNGXFACUZVDBPRNKWNZIHAEUGNBQMPJAKFCEXCZDXSUQYWOBPZSXTTEEQARGJV");
    msg.value = 209U;

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
    msg.setTimeStamp(0.751437697215);
    msg.setSource(35816U);
    msg.setSourceEntity(21U);
    msg.setDestination(4667U);
    msg.setDestinationEntity(25U);
    msg.id = 128U;
    msg.period = 1732456857U;
    msg.duty_cycle = 2686978171U;

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
    msg.setTimeStamp(0.963467726833);
    msg.setSource(29668U);
    msg.setSourceEntity(140U);
    msg.setDestination(40164U);
    msg.setDestinationEntity(211U);
    msg.id = 17U;
    msg.period = 1761028020U;
    msg.duty_cycle = 3556306166U;

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
    msg.setTimeStamp(0.32237985782);
    msg.setSource(14257U);
    msg.setSourceEntity(141U);
    msg.setDestination(39336U);
    msg.setDestinationEntity(49U);
    msg.id = 2U;
    msg.period = 294576590U;
    msg.duty_cycle = 2955407449U;

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
    msg.setTimeStamp(0.456760626015);
    msg.setSource(65076U);
    msg.setSourceEntity(223U);
    msg.setDestination(12053U);
    msg.setDestinationEntity(206U);
    msg.id = 5U;
    msg.period = 3310866450U;
    msg.duty_cycle = 734357441U;

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
    msg.setTimeStamp(0.380425727732);
    msg.setSource(22474U);
    msg.setSourceEntity(131U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(203U);
    msg.id = 169U;
    msg.period = 281588449U;
    msg.duty_cycle = 3888709780U;

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
    msg.setTimeStamp(0.114995962507);
    msg.setSource(12200U);
    msg.setSourceEntity(232U);
    msg.setDestination(22889U);
    msg.setDestinationEntity(74U);
    msg.id = 162U;
    msg.period = 2010545716U;
    msg.duty_cycle = 176801184U;

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
    msg.setTimeStamp(0.238258971018);
    msg.setSource(47354U);
    msg.setSourceEntity(21U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.891954695063;
    msg.lon = 0.0121101525751;
    msg.height = 0.490619904071;
    msg.x = 0.962077097918;
    msg.y = 0.142209833333;
    msg.z = 0.930347255481;
    msg.phi = 0.272189348498;
    msg.theta = 0.435172652594;
    msg.psi = 0.782877727877;
    msg.u = 0.107478407791;
    msg.v = 0.557935874009;
    msg.w = 0.776825978577;
    msg.vx = 0.843911656569;
    msg.vy = 0.244090854677;
    msg.vz = 0.0321945192015;
    msg.p = 0.0515289698836;
    msg.q = 0.096528007273;
    msg.r = 0.981799837432;
    msg.depth = 0.309052370177;
    msg.alt = 0.162457569125;

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
    msg.setTimeStamp(0.717727619919);
    msg.setSource(1072U);
    msg.setSourceEntity(43U);
    msg.setDestination(44572U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.658233902634;
    msg.lon = 0.172230047569;
    msg.height = 0.756460494815;
    msg.x = 0.167048050838;
    msg.y = 0.193824065803;
    msg.z = 0.883307748148;
    msg.phi = 0.300696303801;
    msg.theta = 0.902748260787;
    msg.psi = 0.795519671516;
    msg.u = 0.465732354748;
    msg.v = 0.0588245415285;
    msg.w = 0.0887123798373;
    msg.vx = 0.797369697984;
    msg.vy = 0.280645779639;
    msg.vz = 0.641439073998;
    msg.p = 0.0767784562137;
    msg.q = 0.565796398521;
    msg.r = 0.294116441745;
    msg.depth = 0.355528266977;
    msg.alt = 0.474809408131;

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
    msg.setTimeStamp(0.954123982274);
    msg.setSource(44775U);
    msg.setSourceEntity(60U);
    msg.setDestination(42472U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.216720968627;
    msg.lon = 0.0988701762187;
    msg.height = 0.0378179206096;
    msg.x = 0.0489809694811;
    msg.y = 0.43629985839;
    msg.z = 0.563066951908;
    msg.phi = 0.711781730309;
    msg.theta = 0.227613154142;
    msg.psi = 0.568158344602;
    msg.u = 0.761479314977;
    msg.v = 0.708591197684;
    msg.w = 0.438624668573;
    msg.vx = 0.149135999203;
    msg.vy = 0.437221949568;
    msg.vz = 0.30336752613;
    msg.p = 0.224859829244;
    msg.q = 0.562909158568;
    msg.r = 0.479558255344;
    msg.depth = 0.0984389065525;
    msg.alt = 0.250492323089;

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
    msg.setTimeStamp(0.0403767159172);
    msg.setSource(48446U);
    msg.setSourceEntity(236U);
    msg.setDestination(52898U);
    msg.setDestinationEntity(65U);
    msg.x = 0.228721544913;
    msg.y = 0.873084282464;
    msg.z = 0.857656677536;

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
    msg.setTimeStamp(0.885811419162);
    msg.setSource(31950U);
    msg.setSourceEntity(168U);
    msg.setDestination(62668U);
    msg.setDestinationEntity(154U);
    msg.x = 0.472681909677;
    msg.y = 0.997382983479;
    msg.z = 0.105838952002;

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
    msg.setTimeStamp(0.0397308818008);
    msg.setSource(62403U);
    msg.setSourceEntity(153U);
    msg.setDestination(63868U);
    msg.setDestinationEntity(251U);
    msg.x = 0.755400270338;
    msg.y = 0.999726033555;
    msg.z = 0.823390899353;

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
    msg.setTimeStamp(0.794962341744);
    msg.setSource(27000U);
    msg.setSourceEntity(132U);
    msg.setDestination(2481U);
    msg.setDestinationEntity(212U);
    msg.value = 0.926562094625;

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
    msg.setTimeStamp(0.342893070421);
    msg.setSource(51050U);
    msg.setSourceEntity(71U);
    msg.setDestination(32528U);
    msg.setDestinationEntity(119U);
    msg.value = 0.130273662863;

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
    msg.setTimeStamp(0.319303946724);
    msg.setSource(15368U);
    msg.setSourceEntity(246U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0903566522103;

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
    msg.setTimeStamp(0.583650229909);
    msg.setSource(14932U);
    msg.setSourceEntity(40U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(175U);
    msg.value = 0.887819947038;

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
    msg.setTimeStamp(0.459319289409);
    msg.setSource(11730U);
    msg.setSourceEntity(141U);
    msg.setDestination(39792U);
    msg.setDestinationEntity(214U);
    msg.value = 0.245381488894;

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
    msg.setTimeStamp(0.0336912706092);
    msg.setSource(1900U);
    msg.setSourceEntity(207U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(191U);
    msg.value = 0.280382900331;

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
    msg.setTimeStamp(0.121766213688);
    msg.setSource(16937U);
    msg.setSourceEntity(130U);
    msg.setDestination(55918U);
    msg.setDestinationEntity(178U);
    msg.x = 0.800827518762;
    msg.y = 0.576959564663;
    msg.z = 0.664013040063;
    msg.phi = 0.386076491185;
    msg.theta = 0.437871333876;
    msg.psi = 0.280414193063;
    msg.p = 0.736819632454;
    msg.q = 0.820072777141;
    msg.r = 0.809690167853;
    msg.u = 0.117440001568;
    msg.v = 0.879828921866;
    msg.w = 0.253608017845;
    msg.bias_psi = 0.397894582999;
    msg.bias_r = 0.456121490764;

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
    msg.setTimeStamp(0.930816147622);
    msg.setSource(31561U);
    msg.setSourceEntity(56U);
    msg.setDestination(29134U);
    msg.setDestinationEntity(74U);
    msg.x = 0.206383591361;
    msg.y = 0.777151232309;
    msg.z = 0.663558262073;
    msg.phi = 0.917237298107;
    msg.theta = 0.909504674304;
    msg.psi = 0.830387646945;
    msg.p = 0.780546101942;
    msg.q = 0.810587213737;
    msg.r = 0.94646247437;
    msg.u = 0.317129414958;
    msg.v = 0.517856414546;
    msg.w = 0.251095602581;
    msg.bias_psi = 0.0523360796134;
    msg.bias_r = 0.0325909494995;

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
    msg.setTimeStamp(0.590168721803);
    msg.setSource(31287U);
    msg.setSourceEntity(219U);
    msg.setDestination(52832U);
    msg.setDestinationEntity(223U);
    msg.x = 0.832649146724;
    msg.y = 0.0190993568285;
    msg.z = 0.931317276917;
    msg.phi = 0.732308490951;
    msg.theta = 0.907807705177;
    msg.psi = 0.0143896019638;
    msg.p = 0.432160474546;
    msg.q = 0.643956216167;
    msg.r = 0.850411670563;
    msg.u = 0.00567922606864;
    msg.v = 0.556712334599;
    msg.w = 0.64063973162;
    msg.bias_psi = 0.686220614123;
    msg.bias_r = 0.152458346564;

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
    msg.setTimeStamp(0.453363653951);
    msg.setSource(16315U);
    msg.setSourceEntity(118U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(6U);
    msg.bias_psi = 0.545735033116;
    msg.bias_r = 0.812842635419;
    msg.cog = 0.214390943459;
    msg.cyaw = 0.705447177539;
    msg.lbl_rej_level = 0.679241136592;
    msg.gps_rej_level = 0.727021606516;
    msg.custom_x = 0.72467680589;
    msg.custom_y = 0.628605304047;
    msg.custom_z = 0.856703747705;

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
    msg.setTimeStamp(0.892726293292);
    msg.setSource(16952U);
    msg.setSourceEntity(1U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(32U);
    msg.bias_psi = 0.665550890368;
    msg.bias_r = 0.0490977103706;
    msg.cog = 0.826103882171;
    msg.cyaw = 0.289053969408;
    msg.lbl_rej_level = 0.0506089454797;
    msg.gps_rej_level = 0.278760551865;
    msg.custom_x = 0.482488366645;
    msg.custom_y = 0.728831526709;
    msg.custom_z = 0.861392082966;

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
    msg.setTimeStamp(0.264383178656);
    msg.setSource(47584U);
    msg.setSourceEntity(89U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(94U);
    msg.bias_psi = 0.642771235663;
    msg.bias_r = 0.0479810024372;
    msg.cog = 0.53247549638;
    msg.cyaw = 0.451860278751;
    msg.lbl_rej_level = 0.1444307271;
    msg.gps_rej_level = 0.818317360775;
    msg.custom_x = 0.679618119421;
    msg.custom_y = 0.574159939954;
    msg.custom_z = 0.523688405121;

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
    msg.setTimeStamp(0.635262006154);
    msg.setSource(26868U);
    msg.setSourceEntity(184U);
    msg.setDestination(13704U);
    msg.setDestinationEntity(122U);
    msg.utc_time = 0.441263205425;
    msg.reason = 214U;

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
    msg.setTimeStamp(0.184330440788);
    msg.setSource(7314U);
    msg.setSourceEntity(196U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(220U);
    msg.utc_time = 0.331100379706;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.173429051676);
    msg.setSource(55049U);
    msg.setSourceEntity(28U);
    msg.setDestination(45520U);
    msg.setDestinationEntity(203U);
    msg.utc_time = 0.195973535155;
    msg.reason = 18U;

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
    msg.setTimeStamp(0.293390347269);
    msg.setSource(50795U);
    msg.setSourceEntity(36U);
    msg.setDestination(51802U);
    msg.setDestinationEntity(207U);
    msg.id = 193U;
    msg.range = 0.638979759189;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.209943626031);
    msg.setSource(21037U);
    msg.setSourceEntity(77U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(182U);
    msg.id = 57U;
    msg.range = 0.859798884819;
    msg.acceptance = 174U;

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
    msg.setTimeStamp(0.714468226845);
    msg.setSource(39090U);
    msg.setSourceEntity(15U);
    msg.setDestination(5792U);
    msg.setDestinationEntity(245U);
    msg.id = 181U;
    msg.range = 0.126419902293;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.280723932987);
    msg.setSource(40851U);
    msg.setSourceEntity(75U);
    msg.setDestination(9204U);
    msg.setDestinationEntity(221U);
    msg.type = 167U;
    msg.reason = 37U;
    msg.value = 0.850368491786;
    msg.timestep = 0.850015663817;

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
    msg.setTimeStamp(0.716848812689);
    msg.setSource(43142U);
    msg.setSourceEntity(141U);
    msg.setDestination(51227U);
    msg.setDestinationEntity(106U);
    msg.type = 79U;
    msg.reason = 153U;
    msg.value = 0.416550364931;
    msg.timestep = 0.480649688803;

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
    msg.setTimeStamp(0.975599559152);
    msg.setSource(28651U);
    msg.setSourceEntity(60U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(13U);
    msg.type = 238U;
    msg.reason = 44U;
    msg.value = 0.503665677747;
    msg.timestep = 0.985926790681;

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
    msg.setTimeStamp(0.475311646713);
    msg.setSource(49244U);
    msg.setSourceEntity(193U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(168U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MVDCXUOTEKWWCNDDNMIKBEFLDWLPSLKYHCTQGEIVRZJBHJFEGJUUXRGAWWIRUAXUBSVLDXYZLBTVLQGYMHTUQYFNNMKPKVGXINZAZJGGPZHWVPFRFQVDNGMYVXYHSQ");
    tmp_msg_0.lat = 0.564576874019;
    tmp_msg_0.lon = 0.977485374037;
    tmp_msg_0.depth = 0.00976324046587;
    tmp_msg_0.query_channel = 51U;
    tmp_msg_0.reply_channel = 43U;
    tmp_msg_0.transponder_delay = 162U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.286438767023;
    msg.y = 0.694282376884;
    msg.var_x = 0.386563089877;
    msg.var_y = 0.894747712139;
    msg.distance = 0.0323917386722;

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
    msg.setTimeStamp(0.855444956983);
    msg.setSource(8828U);
    msg.setSourceEntity(81U);
    msg.setDestination(54279U);
    msg.setDestinationEntity(211U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IGJDIUQKWNPMZUKRJWKDZMLERHTVTLPOIQNOVRZHIINFGUFFVOAEHDMZYSNNBVYABPLWA");
    tmp_msg_0.lat = 0.977023521853;
    tmp_msg_0.lon = 0.283746967569;
    tmp_msg_0.depth = 0.651676696248;
    tmp_msg_0.query_channel = 195U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 194U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.551352436386;
    msg.y = 0.79459708212;
    msg.var_x = 0.527510761631;
    msg.var_y = 0.00477879547364;
    msg.distance = 0.31636363957;

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
    msg.setTimeStamp(0.142762623708);
    msg.setSource(20121U);
    msg.setSourceEntity(125U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(43U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PLWZFQYWIWMHKTERHFVQOVESQELIJGMKKAVAVLFTUKINGIMDFUXKF");
    tmp_msg_0.lat = 0.894842507845;
    tmp_msg_0.lon = 0.678694273763;
    tmp_msg_0.depth = 0.55770729809;
    tmp_msg_0.query_channel = 86U;
    tmp_msg_0.reply_channel = 107U;
    tmp_msg_0.transponder_delay = 189U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.214871331486;
    msg.y = 0.908253186175;
    msg.var_x = 0.621468941718;
    msg.var_y = 0.862406213957;
    msg.distance = 0.456021942408;

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
    msg.setTimeStamp(0.914327846843);
    msg.setSource(43850U);
    msg.setSourceEntity(197U);
    msg.setDestination(62936U);
    msg.setDestinationEntity(70U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.943922149315);
    msg.setSource(53959U);
    msg.setSourceEntity(79U);
    msg.setDestination(19048U);
    msg.setDestinationEntity(184U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.11163955613);
    msg.setSource(5138U);
    msg.setSourceEntity(221U);
    msg.setDestination(4067U);
    msg.setDestinationEntity(35U);
    msg.state = 226U;

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
    msg.setTimeStamp(0.258475806576);
    msg.setSource(11581U);
    msg.setSourceEntity(205U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(180U);
    msg.x = 0.111898251781;
    msg.y = 0.347192045355;
    msg.z = 0.253381872799;

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
    msg.setTimeStamp(0.169206089782);
    msg.setSource(3730U);
    msg.setSourceEntity(112U);
    msg.setDestination(22433U);
    msg.setDestinationEntity(55U);
    msg.x = 0.390673436905;
    msg.y = 0.0858514684533;
    msg.z = 0.677217159746;

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
    msg.setTimeStamp(0.780094394477);
    msg.setSource(86U);
    msg.setSourceEntity(51U);
    msg.setDestination(42492U);
    msg.setDestinationEntity(128U);
    msg.x = 0.666895217567;
    msg.y = 0.0475542680541;
    msg.z = 0.628243662948;

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
    msg.setTimeStamp(0.692066102333);
    msg.setSource(48235U);
    msg.setSourceEntity(132U);
    msg.setDestination(25360U);
    msg.setDestinationEntity(88U);
    msg.va = 0.451990838534;
    msg.aoa = 0.148558273759;
    msg.ssa = 0.146992574743;

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
    msg.setTimeStamp(0.0848606528128);
    msg.setSource(5462U);
    msg.setSourceEntity(215U);
    msg.setDestination(2992U);
    msg.setDestinationEntity(252U);
    msg.va = 0.369233305777;
    msg.aoa = 0.786992962687;
    msg.ssa = 0.884495207014;

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
    msg.setTimeStamp(0.444544601523);
    msg.setSource(9142U);
    msg.setSourceEntity(60U);
    msg.setDestination(54910U);
    msg.setDestinationEntity(178U);
    msg.va = 0.256676896536;
    msg.aoa = 0.10563665951;
    msg.ssa = 0.309865787427;

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
    msg.setTimeStamp(0.0758065582631);
    msg.setSource(64908U);
    msg.setSourceEntity(219U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(110U);
    msg.value = 0.578484708896;

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
    msg.setTimeStamp(0.285114761233);
    msg.setSource(62284U);
    msg.setSourceEntity(85U);
    msg.setDestination(14595U);
    msg.setDestinationEntity(159U);
    msg.value = 0.788749563211;

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
    msg.setTimeStamp(0.923152076232);
    msg.setSource(63520U);
    msg.setSourceEntity(147U);
    msg.setDestination(61971U);
    msg.setDestinationEntity(213U);
    msg.value = 0.571451268334;

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
    msg.setTimeStamp(0.104926027338);
    msg.setSource(17862U);
    msg.setSourceEntity(185U);
    msg.setDestination(9751U);
    msg.setDestinationEntity(90U);
    msg.value = 0.385874839453;
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
    msg.setTimeStamp(0.193876605684);
    msg.setSource(8325U);
    msg.setSourceEntity(16U);
    msg.setDestination(34355U);
    msg.setDestinationEntity(77U);
    msg.value = 0.940225004353;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.209493076218);
    msg.setSource(23377U);
    msg.setSourceEntity(52U);
    msg.setDestination(39294U);
    msg.setDestinationEntity(31U);
    msg.value = 0.0950379580523;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.288737691559);
    msg.setSource(17033U);
    msg.setSourceEntity(111U);
    msg.setDestination(24100U);
    msg.setDestinationEntity(238U);
    msg.value = 0.213211084468;
    msg.speed_units = 47U;

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
    msg.setTimeStamp(0.0426570680061);
    msg.setSource(65308U);
    msg.setSourceEntity(145U);
    msg.setDestination(588U);
    msg.setDestinationEntity(253U);
    msg.value = 0.621938395546;
    msg.speed_units = 109U;

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
    msg.setTimeStamp(0.467927986849);
    msg.setSource(22515U);
    msg.setSourceEntity(239U);
    msg.setDestination(4755U);
    msg.setDestinationEntity(131U);
    msg.value = 0.505858017369;
    msg.speed_units = 78U;

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
    msg.setTimeStamp(0.614165343239);
    msg.setSource(17103U);
    msg.setSourceEntity(31U);
    msg.setDestination(2804U);
    msg.setDestinationEntity(190U);
    msg.value = 0.899018144095;

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
    msg.setTimeStamp(0.61809734628);
    msg.setSource(21814U);
    msg.setSourceEntity(205U);
    msg.setDestination(29324U);
    msg.setDestinationEntity(101U);
    msg.value = 0.434796411555;

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
    msg.setTimeStamp(0.738828527262);
    msg.setSource(52710U);
    msg.setSourceEntity(228U);
    msg.setDestination(54208U);
    msg.setDestinationEntity(110U);
    msg.value = 0.206375717378;

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
    msg.setTimeStamp(0.817724942881);
    msg.setSource(44924U);
    msg.setSourceEntity(153U);
    msg.setDestination(24208U);
    msg.setDestinationEntity(36U);
    msg.value = 0.192869366075;

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
    msg.setTimeStamp(0.349328381563);
    msg.setSource(43051U);
    msg.setSourceEntity(236U);
    msg.setDestination(20246U);
    msg.setDestinationEntity(200U);
    msg.value = 0.452437096167;

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
    msg.setTimeStamp(0.272193353122);
    msg.setSource(30099U);
    msg.setSourceEntity(119U);
    msg.setDestination(44068U);
    msg.setDestinationEntity(116U);
    msg.value = 0.689967062181;

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
    msg.setTimeStamp(0.599525243163);
    msg.setSource(34823U);
    msg.setSourceEntity(90U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(198U);
    msg.value = 0.383999091696;

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
    msg.setTimeStamp(0.303026860445);
    msg.setSource(28515U);
    msg.setSourceEntity(2U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0260618364129;

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
    msg.setTimeStamp(0.206507625969);
    msg.setSource(21256U);
    msg.setSourceEntity(4U);
    msg.setDestination(57996U);
    msg.setDestinationEntity(148U);
    msg.value = 0.758869287894;

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
    msg.setTimeStamp(0.245742035497);
    msg.setSource(53086U);
    msg.setSourceEntity(35U);
    msg.setDestination(50406U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 108265878U;
    msg.start_lat = 0.82865879385;
    msg.start_lon = 0.815474306453;
    msg.start_z = 0.427879244747;
    msg.start_z_units = 74U;
    msg.end_lat = 0.772427162503;
    msg.end_lon = 0.37775283276;
    msg.end_z = 0.46430819199;
    msg.end_z_units = 123U;
    msg.speed = 0.00316785232754;
    msg.speed_units = 192U;
    msg.lradius = 0.756317515446;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.322536614421);
    msg.setSource(50227U);
    msg.setSourceEntity(114U);
    msg.setDestination(45107U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 2379690266U;
    msg.start_lat = 0.374963339639;
    msg.start_lon = 0.683952486925;
    msg.start_z = 0.940849498137;
    msg.start_z_units = 226U;
    msg.end_lat = 0.944769350611;
    msg.end_lon = 0.954996760625;
    msg.end_z = 0.918904970267;
    msg.end_z_units = 109U;
    msg.speed = 0.636497553596;
    msg.speed_units = 19U;
    msg.lradius = 0.558602585243;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.776509464663);
    msg.setSource(50392U);
    msg.setSourceEntity(159U);
    msg.setDestination(46384U);
    msg.setDestinationEntity(204U);
    msg.path_ref = 2320267500U;
    msg.start_lat = 0.041323288891;
    msg.start_lon = 0.16820746293;
    msg.start_z = 0.780351991182;
    msg.start_z_units = 148U;
    msg.end_lat = 0.227862873857;
    msg.end_lon = 0.301249381686;
    msg.end_z = 0.384264961324;
    msg.end_z_units = 155U;
    msg.speed = 0.637133793658;
    msg.speed_units = 72U;
    msg.lradius = 0.0824506808324;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.186363041977);
    msg.setSource(4034U);
    msg.setSourceEntity(221U);
    msg.setDestination(12174U);
    msg.setDestinationEntity(232U);
    msg.x = 0.0649787555692;
    msg.y = 0.333539431023;
    msg.z = 0.850842585086;
    msg.k = 0.385093087392;
    msg.m = 0.574258561063;
    msg.n = 0.720792819678;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.170009922235);
    msg.setSource(37430U);
    msg.setSourceEntity(159U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(177U);
    msg.x = 0.352919577453;
    msg.y = 0.887285791532;
    msg.z = 0.139595702758;
    msg.k = 0.722282712193;
    msg.m = 0.470057659106;
    msg.n = 0.123221345986;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.810475256915);
    msg.setSource(38198U);
    msg.setSourceEntity(7U);
    msg.setDestination(39041U);
    msg.setDestinationEntity(52U);
    msg.x = 0.854156830498;
    msg.y = 0.861397614727;
    msg.z = 0.367662420707;
    msg.k = 0.474241788986;
    msg.m = 0.428353236553;
    msg.n = 0.978439742431;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.228530759904);
    msg.setSource(62405U);
    msg.setSourceEntity(213U);
    msg.setDestination(8652U);
    msg.setDestinationEntity(254U);
    msg.value = 0.330736643675;

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
    msg.setTimeStamp(0.722750053316);
    msg.setSource(29281U);
    msg.setSourceEntity(87U);
    msg.setDestination(35382U);
    msg.setDestinationEntity(61U);
    msg.value = 0.749817654512;

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
    msg.setTimeStamp(0.685501818409);
    msg.setSource(27648U);
    msg.setSourceEntity(180U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(87U);
    msg.value = 0.846690482439;

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
    msg.setTimeStamp(0.656400380687);
    msg.setSource(35366U);
    msg.setSourceEntity(133U);
    msg.setDestination(62335U);
    msg.setDestinationEntity(81U);
    msg.u = 0.0358514499842;
    msg.v = 0.978561930299;
    msg.w = 0.35586290764;
    msg.p = 0.109719780405;
    msg.q = 0.308806052843;
    msg.r = 0.0136263538811;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.801942911909);
    msg.setSource(39263U);
    msg.setSourceEntity(232U);
    msg.setDestination(62906U);
    msg.setDestinationEntity(248U);
    msg.u = 0.171770500638;
    msg.v = 0.0621881755126;
    msg.w = 0.87719083513;
    msg.p = 0.143334514894;
    msg.q = 0.858503042037;
    msg.r = 0.742732722469;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.256248476713);
    msg.setSource(50393U);
    msg.setSourceEntity(28U);
    msg.setDestination(4407U);
    msg.setDestinationEntity(244U);
    msg.u = 0.385065678635;
    msg.v = 0.673905901441;
    msg.w = 0.0960397047365;
    msg.p = 0.189694568724;
    msg.q = 0.071392592773;
    msg.r = 0.545916818605;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.712936347526);
    msg.setSource(31749U);
    msg.setSourceEntity(0U);
    msg.setDestination(64169U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 3665088826U;
    msg.start_lat = 0.640404276475;
    msg.start_lon = 0.253980904515;
    msg.start_z = 0.656290635037;
    msg.start_z_units = 89U;
    msg.end_lat = 0.602908839067;
    msg.end_lon = 0.748057136057;
    msg.end_z = 0.761936279752;
    msg.end_z_units = 241U;
    msg.lradius = 0.620815498119;
    msg.flags = 93U;
    msg.x = 0.0607945219292;
    msg.y = 0.153039274612;
    msg.z = 0.0146828206184;
    msg.vx = 0.965575288366;
    msg.vy = 0.070866264561;
    msg.vz = 0.0675730568837;
    msg.course_error = 0.130650608302;
    msg.eta = 39111U;

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
    msg.setTimeStamp(0.428920352054);
    msg.setSource(56938U);
    msg.setSourceEntity(231U);
    msg.setDestination(40681U);
    msg.setDestinationEntity(40U);
    msg.path_ref = 1673064486U;
    msg.start_lat = 0.0809360934066;
    msg.start_lon = 0.617327821811;
    msg.start_z = 0.524405629901;
    msg.start_z_units = 230U;
    msg.end_lat = 0.490185379775;
    msg.end_lon = 0.849277223921;
    msg.end_z = 0.74086885726;
    msg.end_z_units = 246U;
    msg.lradius = 0.276611136814;
    msg.flags = 59U;
    msg.x = 0.86788183086;
    msg.y = 0.576063840361;
    msg.z = 0.683556291266;
    msg.vx = 0.668718082922;
    msg.vy = 0.0149905546739;
    msg.vz = 0.571675327307;
    msg.course_error = 0.508884197926;
    msg.eta = 44509U;

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
    msg.setTimeStamp(0.917188186079);
    msg.setSource(57805U);
    msg.setSourceEntity(146U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(21U);
    msg.path_ref = 2401964384U;
    msg.start_lat = 0.228748051082;
    msg.start_lon = 0.527520060241;
    msg.start_z = 0.31530479902;
    msg.start_z_units = 171U;
    msg.end_lat = 0.200912271373;
    msg.end_lon = 0.833346813002;
    msg.end_z = 0.525463894636;
    msg.end_z_units = 185U;
    msg.lradius = 0.271354991406;
    msg.flags = 168U;
    msg.x = 0.575383402433;
    msg.y = 0.406242210554;
    msg.z = 0.201569437509;
    msg.vx = 0.924462521601;
    msg.vy = 0.122962631309;
    msg.vz = 0.44039557519;
    msg.course_error = 0.898238210983;
    msg.eta = 36232U;

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
    msg.setTimeStamp(0.354507348884);
    msg.setSource(18839U);
    msg.setSourceEntity(3U);
    msg.setDestination(50255U);
    msg.setDestinationEntity(119U);
    msg.k = 0.542590132266;
    msg.m = 0.587719395341;
    msg.n = 0.408005063489;

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
    msg.setTimeStamp(0.700617250059);
    msg.setSource(43018U);
    msg.setSourceEntity(9U);
    msg.setDestination(64419U);
    msg.setDestinationEntity(86U);
    msg.k = 0.804807563769;
    msg.m = 0.904667186554;
    msg.n = 0.0795193685818;

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
    msg.setTimeStamp(0.704938137793);
    msg.setSource(16477U);
    msg.setSourceEntity(185U);
    msg.setDestination(7021U);
    msg.setDestinationEntity(217U);
    msg.k = 0.130437613209;
    msg.m = 0.174276635603;
    msg.n = 0.0914516215063;

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
    msg.setTimeStamp(0.429476749193);
    msg.setSource(44368U);
    msg.setSourceEntity(173U);
    msg.setDestination(39496U);
    msg.setDestinationEntity(249U);
    msg.p = 0.680623845991;
    msg.i = 0.929018389832;
    msg.d = 0.697455537178;
    msg.a = 0.696488569423;

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
    msg.setTimeStamp(0.0122960757119);
    msg.setSource(57169U);
    msg.setSourceEntity(117U);
    msg.setDestination(29667U);
    msg.setDestinationEntity(150U);
    msg.p = 0.629631949887;
    msg.i = 0.126202757275;
    msg.d = 0.672914693576;
    msg.a = 0.633461367864;

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
    msg.setTimeStamp(0.406813712478);
    msg.setSource(23478U);
    msg.setSourceEntity(40U);
    msg.setDestination(50905U);
    msg.setDestinationEntity(71U);
    msg.p = 0.583804386;
    msg.i = 0.677588208771;
    msg.d = 0.84309338154;
    msg.a = 0.185173582958;

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
    msg.setTimeStamp(0.696664021175);
    msg.setSource(56580U);
    msg.setSourceEntity(7U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(183U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.63137167816);
    msg.setSource(15706U);
    msg.setSourceEntity(29U);
    msg.setDestination(52472U);
    msg.setDestinationEntity(202U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.266718845481);
    msg.setSource(47973U);
    msg.setSourceEntity(161U);
    msg.setDestination(27515U);
    msg.setDestinationEntity(204U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.877669867431);
    msg.setSource(15399U);
    msg.setSourceEntity(168U);
    msg.setDestination(48180U);
    msg.setDestinationEntity(226U);
    msg.x = 0.520766826457;
    msg.y = 0.0488125648104;
    msg.z = 0.476403284464;
    msg.vx = 0.0822087811945;
    msg.vy = 0.689182796931;
    msg.vz = 0.912011339042;
    msg.ax = 0.707720335465;
    msg.ay = 0.545600429173;
    msg.az = 0.577001737617;
    msg.flags = 40167U;

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
    msg.setTimeStamp(0.284278872721);
    msg.setSource(39505U);
    msg.setSourceEntity(236U);
    msg.setDestination(36221U);
    msg.setDestinationEntity(58U);
    msg.x = 0.399892074459;
    msg.y = 0.626119947258;
    msg.z = 0.30316720362;
    msg.vx = 0.350912319202;
    msg.vy = 0.278048739322;
    msg.vz = 0.280573106882;
    msg.ax = 0.896555403369;
    msg.ay = 0.390107381716;
    msg.az = 0.944993060134;
    msg.flags = 65183U;

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
    msg.setTimeStamp(0.425517804758);
    msg.setSource(41483U);
    msg.setSourceEntity(155U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(27U);
    msg.x = 0.877256079113;
    msg.y = 0.474882229485;
    msg.z = 0.443783278129;
    msg.vx = 0.686409988893;
    msg.vy = 0.607081301363;
    msg.vz = 0.598570510951;
    msg.ax = 0.0796842330797;
    msg.ay = 0.0435077233981;
    msg.az = 0.341764734476;
    msg.flags = 56894U;

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
    msg.setTimeStamp(0.645314747584);
    msg.setSource(56400U);
    msg.setSourceEntity(194U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(8U);
    msg.value = 0.265438599938;

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
    msg.setTimeStamp(0.258031071179);
    msg.setSource(59912U);
    msg.setSourceEntity(162U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(127U);
    msg.value = 0.497519189584;

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
    msg.setTimeStamp(0.386992810931);
    msg.setSource(18238U);
    msg.setSourceEntity(124U);
    msg.setDestination(5928U);
    msg.setDestinationEntity(68U);
    msg.value = 0.646757418121;

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
    msg.setTimeStamp(0.426865372136);
    msg.setSource(11683U);
    msg.setSourceEntity(46U);
    msg.setDestination(59877U);
    msg.setDestinationEntity(64U);
    msg.timeout = 61303U;
    msg.lat = 0.230467198138;
    msg.lon = 0.571156020335;
    msg.z = 0.629672835432;
    msg.z_units = 60U;
    msg.speed = 0.914319972053;
    msg.speed_units = 135U;
    msg.roll = 0.652448595709;
    msg.pitch = 0.015900718578;
    msg.yaw = 0.236821110051;
    msg.custom.assign("CDUPIERPABJDDPMDZMORVFGDGEYOCEXKAKHPCDUFSKZTUZRDZBQEHBVBMYTLZYAKNHHHATWUUKXQIOOZWUZISGLBNE");

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
    msg.setTimeStamp(0.667415951191);
    msg.setSource(56945U);
    msg.setSourceEntity(80U);
    msg.setDestination(22602U);
    msg.setDestinationEntity(154U);
    msg.timeout = 290U;
    msg.lat = 0.203647028957;
    msg.lon = 0.373966877124;
    msg.z = 0.0915341066245;
    msg.z_units = 43U;
    msg.speed = 0.979512384523;
    msg.speed_units = 237U;
    msg.roll = 0.626577675059;
    msg.pitch = 0.0458803798286;
    msg.yaw = 0.964046016956;
    msg.custom.assign("IYWXJEKKYMLQFWHEISCDGIENWWKCOQNUFXUZXAKHBEVLANNPIHYXCCZRQLJSSNDOVHMQZHTRNARLRHKNUCTBZXVDJMLVENYFPHSGXAPCXKKOKX");

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
    msg.setTimeStamp(0.108128396667);
    msg.setSource(36199U);
    msg.setSourceEntity(92U);
    msg.setDestination(46079U);
    msg.setDestinationEntity(189U);
    msg.timeout = 46617U;
    msg.lat = 0.662090898858;
    msg.lon = 0.497805272934;
    msg.z = 0.629022822198;
    msg.z_units = 186U;
    msg.speed = 0.502397625309;
    msg.speed_units = 248U;
    msg.roll = 0.321911198292;
    msg.pitch = 0.0825524479581;
    msg.yaw = 0.764494882243;
    msg.custom.assign("WKEYPUGEXCXAGVGWPRIIJDIDXJESXNLGPHNWVDYKUIMQBUPAUOEZSYWLMQQWTDHJIPOMQMDVYHKONLUKZZJZSTFFDISWLHDUMCTZQCRNCGBAFOSROZFZQVOOGLQXSWBMZIMAFVQCJQBKKRYYUAIUFEBBEGX");

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
    msg.setTimeStamp(0.107078768074);
    msg.setSource(56802U);
    msg.setSourceEntity(141U);
    msg.setDestination(11606U);
    msg.setDestinationEntity(211U);
    msg.timeout = 8604U;
    msg.lat = 0.245807516001;
    msg.lon = 0.22966508388;
    msg.z = 0.975791497172;
    msg.z_units = 210U;
    msg.speed = 0.606254844709;
    msg.speed_units = 171U;
    msg.duration = 43590U;
    msg.radius = 0.972411224089;
    msg.flags = 50U;
    msg.custom.assign("JPQVCSLRCZLOSOVDARVMJZQAAEHSSUPFKHGBCYC");

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
    msg.setTimeStamp(0.301903430598);
    msg.setSource(3304U);
    msg.setSourceEntity(109U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(51U);
    msg.timeout = 62872U;
    msg.lat = 0.312074929653;
    msg.lon = 0.95176028764;
    msg.z = 0.0607478103179;
    msg.z_units = 68U;
    msg.speed = 0.674215830298;
    msg.speed_units = 19U;
    msg.duration = 35572U;
    msg.radius = 0.413069661917;
    msg.flags = 254U;
    msg.custom.assign("MIDADTCNOPJPSUBSPSTXXYKKSZDOASQJEABGFSXFUAOT");

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
    msg.setTimeStamp(0.838204299658);
    msg.setSource(87U);
    msg.setSourceEntity(172U);
    msg.setDestination(57774U);
    msg.setDestinationEntity(206U);
    msg.timeout = 10887U;
    msg.lat = 0.520052308343;
    msg.lon = 0.904375004;
    msg.z = 0.277674369992;
    msg.z_units = 104U;
    msg.speed = 0.48400675682;
    msg.speed_units = 15U;
    msg.duration = 21063U;
    msg.radius = 0.636360012103;
    msg.flags = 67U;
    msg.custom.assign("NQSKWRBYGXHAFFDKHEKUOPVBRSOGCLCNQIJZLFBHOALYETXQOFDXMLHZKKZLPVVRAEYITLTXFFMIEFOSEBXUJGIVYNCTYCQWSBWKWCYHJDPZQJEXYIIKPIRQZZVOPDBAWNOMGAHZIDNNPVSPRPRTCGJXELSVLUOBFWXADZJAALREMNJKHHAVUDDBWUHQTIDGWJGTUCWCYEAYMCRWOSHUXMTNQPDMXMGFRUVLZ");

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
    msg.setTimeStamp(0.0965848649898);
    msg.setSource(36017U);
    msg.setSourceEntity(89U);
    msg.setDestination(16374U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("QHUWEILZXTXMEVJLCTLAISEDJCILKJAWHPZSODZGOIGNGFEH");

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
    msg.setTimeStamp(0.897319301324);
    msg.setSource(3846U);
    msg.setSourceEntity(58U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(233U);
    msg.custom.assign("FJMLMCXVHBVKYVJQSEJSZUNNPGDGEYULNOYQGFXEQEYORWXRRBBHAFKCGSTKTHYPXTULDHQIOIFIWRVZHPOKTTVPKNPJDYSZEASNRSMOLSLNRLLTIEOMMEAWUDHGCCWARUQQOODSGADIKFWVQZUUYLEKWYTXJCCURCNIQZVVLPMNFPNMXACJTBHXOXKRAVMQFHBZFFGLOEQXXWSBJASJBTZKCBGYEUZDJCWIZZVNMDPWDPRGTIIM");

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
    msg.setTimeStamp(0.393104133909);
    msg.setSource(33885U);
    msg.setSourceEntity(2U);
    msg.setDestination(9311U);
    msg.setDestinationEntity(179U);
    msg.custom.assign("IRAVJNXJFIK");

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
    msg.setTimeStamp(0.651689050481);
    msg.setSource(63205U);
    msg.setSourceEntity(62U);
    msg.setDestination(17646U);
    msg.setDestinationEntity(72U);
    msg.timeout = 43967U;
    msg.lat = 0.367662593598;
    msg.lon = 0.123325958496;
    msg.z = 0.0916020697595;
    msg.z_units = 168U;
    msg.duration = 8400U;
    msg.speed = 0.459266016522;
    msg.speed_units = 170U;
    msg.type = 149U;
    msg.radius = 0.509400492355;
    msg.length = 0.845735477725;
    msg.bearing = 0.185793517488;
    msg.direction = 179U;
    msg.custom.assign("WALCBLDOOGXZ");

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
    msg.setTimeStamp(0.638449037417);
    msg.setSource(57497U);
    msg.setSourceEntity(78U);
    msg.setDestination(43342U);
    msg.setDestinationEntity(175U);
    msg.timeout = 36989U;
    msg.lat = 0.868079628822;
    msg.lon = 0.246174625925;
    msg.z = 0.72397258058;
    msg.z_units = 4U;
    msg.duration = 3914U;
    msg.speed = 0.844349843976;
    msg.speed_units = 121U;
    msg.type = 157U;
    msg.radius = 0.448393091036;
    msg.length = 0.071776423687;
    msg.bearing = 0.608499513083;
    msg.direction = 76U;
    msg.custom.assign("BHTWCSLDYCGECNUQIYOWFOLZYVJXDVYVKXSXFWZOOFWRBDGNMXHJKLVFTWQS");

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
    msg.setTimeStamp(0.883767777811);
    msg.setSource(64933U);
    msg.setSourceEntity(202U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(142U);
    msg.timeout = 5571U;
    msg.lat = 0.00323400879213;
    msg.lon = 0.124753439983;
    msg.z = 0.26120558844;
    msg.z_units = 240U;
    msg.duration = 63726U;
    msg.speed = 0.0524939237893;
    msg.speed_units = 93U;
    msg.type = 44U;
    msg.radius = 0.138385106779;
    msg.length = 0.115710852784;
    msg.bearing = 0.0648972530469;
    msg.direction = 118U;
    msg.custom.assign("IKLBZSGJIKSOOZDFMVLYEIYFDTZRPALNHXOCRWTDCUJAHUUXPYQAYOKEHDXARGOUSNCQFDTYKNQRBGWAAVGIUMZHQVYUUXMNLSQVSYBJSRKCPETYXKMCQMGIDRMCSYLFPWDXNEXMFRLDGTHYNJTDIJECKSDQUHGZNOAFABINRVHELXQKTBOKIESZMJVWTEUNJXPHJPMVGLQWPVSCPHWRBRFNMUAIICVBLGEQHKJWBOFZ");

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
    msg.setTimeStamp(0.920208599349);
    msg.setSource(38538U);
    msg.setSourceEntity(107U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(231U);
    msg.duration = 28054U;
    msg.custom.assign("BRASDPEUYFKABUVXYNGEWFVRGOBHUOCWWOXMSCWVDLSHVHHPJHSPNYBPUIFKLKQZXZNOXQVFMFFJXRDGBNRUDFQIAGQMWTBKLRXIGJRSBGNFGZJLDUTYBTMMIAOAKMSACPTTRNIWTGZCZDLZRHOKXIEICELJHUPPIJNTEYNTKJKRYKFUEQYELMOCZZOSMLRVCQSVNGIZUXESPYEEDXDTWLUN");

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
    msg.setTimeStamp(0.229947410327);
    msg.setSource(24503U);
    msg.setSourceEntity(205U);
    msg.setDestination(62019U);
    msg.setDestinationEntity(188U);
    msg.duration = 60009U;
    msg.custom.assign("NHNMKVLULIFFZDCCAEKJHGTOYRVWVNAMEUSUOUPF");

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
    msg.setTimeStamp(0.816700724275);
    msg.setSource(59545U);
    msg.setSourceEntity(91U);
    msg.setDestination(403U);
    msg.setDestinationEntity(127U);
    msg.duration = 2172U;
    msg.custom.assign("XUHBPVMZRYIDOAFPHNEKLJYVGKDQJPXNPEVPMAWBQSRUHDYXIGKQOCBSXK");

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
    msg.setTimeStamp(0.109940006906);
    msg.setSource(47195U);
    msg.setSourceEntity(219U);
    msg.setDestination(20159U);
    msg.setDestinationEntity(98U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.631858053849;
    msg.control.set(tmp_msg_0);
    msg.duration = 39855U;
    msg.custom.assign("JOXRFKWUISDRBZOZULDNCEMYOAXZBANYUGQKVTZFX");

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
    msg.setTimeStamp(0.72541538527);
    msg.setSource(34731U);
    msg.setSourceEntity(237U);
    msg.setDestination(46894U);
    msg.setDestinationEntity(31U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1975768928U;
    tmp_msg_0.start_lat = 0.877319302728;
    tmp_msg_0.start_lon = 0.549451607807;
    tmp_msg_0.start_z = 0.0232833003038;
    tmp_msg_0.start_z_units = 200U;
    tmp_msg_0.end_lat = 0.709324828502;
    tmp_msg_0.end_lon = 0.804740819137;
    tmp_msg_0.end_z = 0.375251601239;
    tmp_msg_0.end_z_units = 83U;
    tmp_msg_0.speed = 0.481595858215;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.lradius = 0.73895607665;
    tmp_msg_0.flags = 8U;
    msg.control.set(tmp_msg_0);
    msg.duration = 15734U;
    msg.custom.assign("DSYLFGNOXKTVKPQAEDCCNHSOXXTWMJMHVZVGZDADNECSJZLGKOBDYFMWNBGXTVHHETWIFHNSCYOLEQCVNPIUJ");

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
    msg.setTimeStamp(0.390082046144);
    msg.setSource(50712U);
    msg.setSourceEntity(20U);
    msg.setDestination(43744U);
    msg.setDestinationEntity(114U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1295438389U;
    tmp_msg_0.start_lat = 0.105949127235;
    tmp_msg_0.start_lon = 0.192691900058;
    tmp_msg_0.start_z = 0.602699258992;
    tmp_msg_0.start_z_units = 35U;
    tmp_msg_0.end_lat = 0.545517091974;
    tmp_msg_0.end_lon = 0.109868064891;
    tmp_msg_0.end_z = 0.25097543757;
    tmp_msg_0.end_z_units = 194U;
    tmp_msg_0.speed = 0.852954593102;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.lradius = 0.453908753774;
    tmp_msg_0.flags = 154U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63617U;
    msg.custom.assign("DLJMKNLNCQJHQSVVVKSVCFQSIIYGXFPWYLWSUMWGFRIFAUDOYDUKLBMNIOBEMJESLOMYWIQEPRZIPRTWWTFSBHIHSGTFRDHZDYLBNPKCEFHGXOQDKMJPADBSXXTGKKAXZNRBBJNZVQFAZHWCIRENIHTAVQDQRLKBTXTAPSUXYKQIOXVTPWWEOLRPZYVCNXFMEVZMGURUKNWCSZEHJJGAJJZGY");

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
    msg.setTimeStamp(0.466359475437);
    msg.setSource(17739U);
    msg.setSourceEntity(188U);
    msg.setDestination(32797U);
    msg.setDestinationEntity(50U);
    msg.timeout = 8802U;
    msg.lat = 0.615723830967;
    msg.lon = 0.88623883191;
    msg.z = 0.835756349678;
    msg.z_units = 250U;
    msg.speed = 0.483923723174;
    msg.speed_units = 152U;
    msg.bearing = 0.277662336815;
    msg.cross_angle = 0.694282589865;
    msg.width = 0.777891878427;
    msg.length = 0.389463357496;
    msg.hstep = 0.736749877724;
    msg.coff = 254U;
    msg.alternation = 15U;
    msg.flags = 147U;
    msg.custom.assign("XUYQXIWKPIYMTFZVGFMCEHYKZDMOIHPSBXNMFJYESQQWDZLTKNWNYTVGBVVITJZNKALXSPOPCITCRNDKOCJBWRPKNEIWDUAJGGQKOGUJECHRYVIAHPNWDYLVUEM");

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
    msg.setTimeStamp(0.205633876093);
    msg.setSource(28100U);
    msg.setSourceEntity(92U);
    msg.setDestination(38501U);
    msg.setDestinationEntity(102U);
    msg.timeout = 21554U;
    msg.lat = 0.682616716463;
    msg.lon = 0.100959406775;
    msg.z = 0.936604903009;
    msg.z_units = 225U;
    msg.speed = 0.539866227546;
    msg.speed_units = 88U;
    msg.bearing = 0.484094067793;
    msg.cross_angle = 0.868912254845;
    msg.width = 0.7874381975;
    msg.length = 0.923213856082;
    msg.hstep = 0.427152284138;
    msg.coff = 14U;
    msg.alternation = 107U;
    msg.flags = 67U;
    msg.custom.assign("EHRQATEUCWATSCPEBPDJICMSTPWAJYBDPMNVCJKWYBSBNUTVSODLKGUETGXRQZRHZJNVXKZOQEZJRWIGCODLZHYYXFLFNGDAVITQEHYHFMWCVJVZXYLVUTSDSBZYHIFFRJTSFDJCFDWNQRXNEFAOPUMHWGHOMZWAPCLBQMIXAUPELPKVBWOSKFVULIHGQTJOUNNSOCXARPGXOEHGGILKMMUYDRNGAJKBKUIDSM");

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
    msg.setTimeStamp(0.759991198909);
    msg.setSource(40625U);
    msg.setSourceEntity(135U);
    msg.setDestination(11936U);
    msg.setDestinationEntity(208U);
    msg.timeout = 62068U;
    msg.lat = 0.218799011814;
    msg.lon = 0.497672922943;
    msg.z = 0.621834677549;
    msg.z_units = 82U;
    msg.speed = 0.270502820467;
    msg.speed_units = 170U;
    msg.bearing = 0.742891148867;
    msg.cross_angle = 0.475146409554;
    msg.width = 0.533914598307;
    msg.length = 0.393762745339;
    msg.hstep = 0.93833845806;
    msg.coff = 177U;
    msg.alternation = 52U;
    msg.flags = 229U;
    msg.custom.assign("GLNXWOXBNZQDXDOQGNSMGFLZNJYEUUDAGHMFGOPBUBRSIOPRHYLVOEHTTMKCAWZRITBNYDSIXILRTKQYKTFUKRKM");

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
    msg.setTimeStamp(0.626452260669);
    msg.setSource(13216U);
    msg.setSourceEntity(86U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(237U);
    msg.timeout = 57479U;
    msg.lat = 0.530232666906;
    msg.lon = 0.291011116973;
    msg.z = 0.378879324159;
    msg.z_units = 21U;
    msg.speed = 0.693114970635;
    msg.speed_units = 80U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.26703506134;
    tmp_msg_0.y = 0.257163575792;
    tmp_msg_0.z = 0.936893637872;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BHMACRYGWGIOZUMXVPNNCNAJFDEAYLYXMCRJEDNKOEXGDQERELOBFVVSCROHLWIQVCJVTSGQKGNQWMPWZMGPTQCFXWAYBZJNSWBGFLPUDFYOVRZJFIWFTZAACPDKPLEIASMQUKZYPUTHPNILDVHERNOTTDKGWXMIYBXNUJJXBEJOTJIMWGUCHKSUYNIABZEOHOAVTQXSZHBCMXUTLLQSRRHVVEBSUTKUSSFYCWOIFKHKLBLA");

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
    msg.setTimeStamp(0.101742354325);
    msg.setSource(55248U);
    msg.setSourceEntity(206U);
    msg.setDestination(44017U);
    msg.setDestinationEntity(130U);
    msg.timeout = 14693U;
    msg.lat = 0.258105264507;
    msg.lon = 0.22483585689;
    msg.z = 0.612496358927;
    msg.z_units = 204U;
    msg.speed = 0.588909044126;
    msg.speed_units = 46U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.943890836028;
    tmp_msg_0.y = 0.115303710332;
    tmp_msg_0.z = 0.0957412562152;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PVNGJGVXVRSTCCPDKZMHWIFCAAJGPHQVGWJRBWGYIZOUDXNPSWMUDGGCFENFKLTDWQTKANKVTSKR");

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
    msg.setTimeStamp(0.584235011536);
    msg.setSource(35633U);
    msg.setSourceEntity(112U);
    msg.setDestination(51858U);
    msg.setDestinationEntity(195U);
    msg.timeout = 15293U;
    msg.lat = 0.627280754714;
    msg.lon = 0.251735189217;
    msg.z = 0.97982248636;
    msg.z_units = 148U;
    msg.speed = 0.742494455794;
    msg.speed_units = 52U;
    msg.custom.assign("IMKIXRGBDAPWDKMYPHTNKURH");

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
    msg.setTimeStamp(0.233592393884);
    msg.setSource(32775U);
    msg.setSourceEntity(154U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(174U);
    msg.x = 0.31785089332;
    msg.y = 0.54687687252;
    msg.z = 0.993657647954;

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
    msg.setTimeStamp(0.975960657133);
    msg.setSource(51741U);
    msg.setSourceEntity(78U);
    msg.setDestination(20297U);
    msg.setDestinationEntity(248U);
    msg.x = 0.0987465893523;
    msg.y = 0.85650143674;
    msg.z = 0.754526822707;

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
    msg.setTimeStamp(0.234535551313);
    msg.setSource(49475U);
    msg.setSourceEntity(87U);
    msg.setDestination(39558U);
    msg.setDestinationEntity(216U);
    msg.x = 0.0996489647198;
    msg.y = 0.569766129114;
    msg.z = 0.655532942183;

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
    msg.setTimeStamp(0.729107970366);
    msg.setSource(42022U);
    msg.setSourceEntity(45U);
    msg.setDestination(8149U);
    msg.setDestinationEntity(225U);
    msg.timeout = 52304U;
    msg.lat = 0.245272664606;
    msg.lon = 0.499223467249;
    msg.z = 0.454949846297;
    msg.z_units = 100U;
    msg.amplitude = 0.0864098251428;
    msg.pitch = 0.0111634789481;
    msg.speed = 0.239883511888;
    msg.speed_units = 102U;
    msg.custom.assign("ZXADNLDSZZICZHRLUUJLFRHRHWAUNSQPMVCUYIGPYMKJMEYHNICYTBPAIHBSENVFFVDRVAGCARDIWWWSJGUDEQBTFRPJUTQKAIMHBLDEBUZWOCPNWKQDIBWHHDLIOCTQKXKJBXOPFBMWFTKLWRZHGGHEKOGOUXJXRQDJNQVUOAYEVTFXOPANAGSEQTLWXVEFSUSQMZ");

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
    msg.setTimeStamp(0.136314902395);
    msg.setSource(44569U);
    msg.setSourceEntity(75U);
    msg.setDestination(31171U);
    msg.setDestinationEntity(97U);
    msg.timeout = 579U;
    msg.lat = 0.437353736793;
    msg.lon = 0.0757086364455;
    msg.z = 0.353838610422;
    msg.z_units = 213U;
    msg.amplitude = 0.870664743745;
    msg.pitch = 0.500757864476;
    msg.speed = 0.254014554223;
    msg.speed_units = 121U;
    msg.custom.assign("BKYNOXNHVVKESDUIAZMWPDKITENT");

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
    msg.setTimeStamp(0.0690226689855);
    msg.setSource(17065U);
    msg.setSourceEntity(73U);
    msg.setDestination(44571U);
    msg.setDestinationEntity(116U);
    msg.timeout = 56407U;
    msg.lat = 0.110946943186;
    msg.lon = 0.0504468035135;
    msg.z = 0.425439922737;
    msg.z_units = 139U;
    msg.amplitude = 0.836676968351;
    msg.pitch = 0.588662443369;
    msg.speed = 0.0868146551125;
    msg.speed_units = 78U;
    msg.custom.assign("TXZIKUEJZWEAWLNZDGHVCDPBQZYMQCPHXVDSBBLDH");

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
    msg.setTimeStamp(0.931127397493);
    msg.setSource(51874U);
    msg.setSourceEntity(135U);
    msg.setDestination(45927U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.607282771808);
    msg.setSource(54619U);
    msg.setSourceEntity(94U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.871715723491);
    msg.setSource(7843U);
    msg.setSourceEntity(117U);
    msg.setDestination(8324U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.0557218602885);
    msg.setSource(13638U);
    msg.setSourceEntity(213U);
    msg.setDestination(3529U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.568916311921;
    msg.lon = 0.179138235079;
    msg.z = 0.480214960534;
    msg.z_units = 235U;
    msg.radius = 0.977051109382;
    msg.duration = 19897U;
    msg.speed = 0.540062162914;
    msg.speed_units = 139U;
    msg.custom.assign("NEJHZKCDIBAPCIWLEFTWEQSVOJIJF");

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
    msg.setTimeStamp(0.281633340976);
    msg.setSource(37608U);
    msg.setSourceEntity(121U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.403811035099;
    msg.lon = 0.419846198491;
    msg.z = 0.445758547218;
    msg.z_units = 166U;
    msg.radius = 0.79184661009;
    msg.duration = 12596U;
    msg.speed = 0.0880089104479;
    msg.speed_units = 66U;
    msg.custom.assign("RLJNWSVVJKPXBJJJSWFCMVMTXYDMDQAMBLGHCDWHWYNGTNTUNPEIQUWDROFPLRSGUYSQUJYFMUMDHZFQDFZXGPUNECPOTIAISCYIJCPGPRPCOCVLBHFAUAXTYJ");

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
    msg.setTimeStamp(0.47683759754);
    msg.setSource(6534U);
    msg.setSourceEntity(126U);
    msg.setDestination(63364U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.230881407004;
    msg.lon = 0.387293897167;
    msg.z = 0.912010592108;
    msg.z_units = 80U;
    msg.radius = 0.371799106421;
    msg.duration = 45159U;
    msg.speed = 0.645936739342;
    msg.speed_units = 28U;
    msg.custom.assign("JPNZLDEEHJLPASOZKYXHMODUWCCCKDYBCOTPKRRTQLTBMMIDJRXFGVUCGLSKFXTQYZAVFGZIQYNRSAPPFWRBVMEOHOVKEJGWZLEPUJPVDTATNWHQRAOMJIHOVLSBEKASGAHPIBQVIWQHBKBFYNLDURAEXTSDLSQQUIULGUZLDUQCWQKXAEZSOZRKUICBPYGNXPHUYBWRDTCF");

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
    msg.setTimeStamp(0.0838567092401);
    msg.setSource(30003U);
    msg.setSourceEntity(31U);
    msg.setDestination(32438U);
    msg.setDestinationEntity(88U);
    msg.timeout = 41578U;
    msg.flags = 212U;
    msg.lat = 0.656731551112;
    msg.lon = 0.495813241222;
    msg.start_z = 0.512174795419;
    msg.start_z_units = 109U;
    msg.end_z = 0.939561253328;
    msg.end_z_units = 100U;
    msg.radius = 0.926843034888;
    msg.speed = 0.499630874186;
    msg.speed_units = 226U;
    msg.custom.assign("ULWZWUPGXEGXHUSVJSWIOMCHSLPTWNCUBRTFRQJWKXPNYYSNBMZUMTOVKNHRZRXXILAWIBJDVYVYGFTLPNAGLFDSFGVPUBVKXIFCYWOPLOMAJIENTTQKYQLMQEAMCKJUYOHHAACZJZHDQCMHDCFFAEQMNKETQYPQRGEYVZLCSZCFPAPDJMBISWITNJVZWGQROSUGUERZKBACSRRDBIKUOBXDDWOEAEXRBNTYZLFJLPHDHXVDGFGX");

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
    msg.setTimeStamp(0.486630702458);
    msg.setSource(21776U);
    msg.setSourceEntity(149U);
    msg.setDestination(1286U);
    msg.setDestinationEntity(243U);
    msg.timeout = 2610U;
    msg.flags = 212U;
    msg.lat = 0.497541600917;
    msg.lon = 0.0638465216173;
    msg.start_z = 0.278821599831;
    msg.start_z_units = 81U;
    msg.end_z = 0.288211195456;
    msg.end_z_units = 11U;
    msg.radius = 0.228828911418;
    msg.speed = 0.957147395599;
    msg.speed_units = 171U;
    msg.custom.assign("CANNFWKFIPGQWQCJHZVJSHEXOOVZRYFRKJCYDTQPGQMPIYGRCPJMIMNKUWCEYD");

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
    msg.setTimeStamp(0.0263408725662);
    msg.setSource(40379U);
    msg.setSourceEntity(180U);
    msg.setDestination(20311U);
    msg.setDestinationEntity(73U);
    msg.timeout = 40365U;
    msg.flags = 9U;
    msg.lat = 0.849022035111;
    msg.lon = 0.177195897652;
    msg.start_z = 0.913645938395;
    msg.start_z_units = 122U;
    msg.end_z = 0.135949694478;
    msg.end_z_units = 215U;
    msg.radius = 0.563883177516;
    msg.speed = 0.703199710093;
    msg.speed_units = 106U;
    msg.custom.assign("ABQZDVBKHFPGOPGTPYQFOCFEEODEGFVZOFXRCKQMCWZLIUXXLSFIMWJTBBATTBDQJROBYEUITKBLGSHVELOAUDAUTJVPAUYBDSDMUFCKJWMGDPRNKACVGVWNYQRUNCYFMURBDW");

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
    msg.setTimeStamp(0.932998789854);
    msg.setSource(3749U);
    msg.setSourceEntity(77U);
    msg.setDestination(48890U);
    msg.setDestinationEntity(44U);
    msg.timeout = 51244U;
    msg.lat = 0.497548099746;
    msg.lon = 0.625600237716;
    msg.z = 0.334353408088;
    msg.z_units = 242U;
    msg.speed = 0.455059609287;
    msg.speed_units = 195U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.477901959582;
    tmp_msg_0.y = 0.861061809793;
    tmp_msg_0.z = 0.0320858442724;
    tmp_msg_0.t = 0.340863281357;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KSFFGRSCTSICYVMTEKKBIPBYHGUPKLZDQXIJDACRFHMQRADHDGXNRRRKMLPVITUXYBGWJBRFZNLKSFIINWGYYSBDGULBNPAZWUHZTCJRJPFNMVVWHTFANLZQNOEXLVEBFAPOAQWKEWIFYJVMNWOSHXSCQPMDOEQLBAZUUWLRJVP");

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
    msg.setTimeStamp(0.466266394106);
    msg.setSource(4943U);
    msg.setSourceEntity(141U);
    msg.setDestination(64723U);
    msg.setDestinationEntity(209U);
    msg.timeout = 27640U;
    msg.lat = 0.717532574227;
    msg.lon = 0.447691890316;
    msg.z = 0.649405544114;
    msg.z_units = 205U;
    msg.speed = 0.20254291883;
    msg.speed_units = 41U;
    msg.custom.assign("JZNVLNSUZOZQJWUWNXVMOCRMUWEHXNORFLTRQLKCHIKKDGIPDOBMDAFNLPSRXUZKYPNZOCMGLMJPGHJHQVAEJKICXVGWUERQKUYYIFXCUQJFYSPDBBTLDTPQYJI");

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
    msg.setTimeStamp(0.194528437634);
    msg.setSource(58638U);
    msg.setSourceEntity(13U);
    msg.setDestination(1346U);
    msg.setDestinationEntity(9U);
    msg.timeout = 58274U;
    msg.lat = 0.614718191124;
    msg.lon = 0.0926585202054;
    msg.z = 0.438042853422;
    msg.z_units = 43U;
    msg.speed = 0.945910499918;
    msg.speed_units = 65U;
    msg.custom.assign("CCUGUNFVBCDNXWVFFNJZYFILRQQLUNMCPQJONATHTLSAJPHNUKBZMYXIKEGQKLAPPDGRQXMEWSUDHQGFSTMFEUUMWSAIPAMKZCROZAHCWBQKINJJQJRWIFROQLE");

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
    msg.setTimeStamp(0.631087778439);
    msg.setSource(17663U);
    msg.setSourceEntity(121U);
    msg.setDestination(3466U);
    msg.setDestinationEntity(20U);
    msg.x = 0.300739260927;
    msg.y = 0.147454910461;
    msg.z = 0.439606352339;
    msg.t = 0.87143642915;

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
    msg.setTimeStamp(0.723390237213);
    msg.setSource(34460U);
    msg.setSourceEntity(50U);
    msg.setDestination(61444U);
    msg.setDestinationEntity(163U);
    msg.x = 0.343530734266;
    msg.y = 0.275218446027;
    msg.z = 0.445820269392;
    msg.t = 0.870413047255;

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
    msg.setTimeStamp(0.260241543277);
    msg.setSource(56520U);
    msg.setSourceEntity(182U);
    msg.setDestination(53841U);
    msg.setDestinationEntity(246U);
    msg.x = 0.0135062272378;
    msg.y = 0.626730888246;
    msg.z = 0.845237061524;
    msg.t = 0.4860401896;

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
    msg.setTimeStamp(0.575091768101);
    msg.setSource(52724U);
    msg.setSourceEntity(181U);
    msg.setDestination(38140U);
    msg.setDestinationEntity(17U);
    msg.timeout = 29851U;
    msg.name.assign("ITOHTRRQGZHASGHBWRMNWMBLVGJSSAWOVCXETAPUUKJJWCNELNDDSIF");
    msg.custom.assign("YIZCQOYXUGNVUWTEPEVTKVORPYRAMGPTBXXBOFQHMNELQKTFFMYSATYUMNEBZIHFSVUGQBCLRHSEEZKJYFWWALAMZSGIJXTNPBAOMSVVCWNTZYBPZWDHCIKOHDJBIEJTRPLQRFALJHSDVCVCIFNMTNDCCEKWDCRWWOGKOZURXXGSLPKXLUMDRVRFGUN");

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
    msg.setTimeStamp(0.543320956609);
    msg.setSource(49879U);
    msg.setSourceEntity(135U);
    msg.setDestination(8006U);
    msg.setDestinationEntity(163U);
    msg.timeout = 19161U;
    msg.name.assign("EGERKIBQOVLKVAAKJTHLTEZXSTFWXTHHWTGHQFMZWHSVJBQZYTMOXZUSUYNUGZJBXQYJDYGPEWYLSWRNY");
    msg.custom.assign("LIXADYDLNFZDCPFLAKQBQQBVUQKBRXCAOKPUHUOJMBHBQVWMQTZVHGUUOHUYKRTRFUOGMLFGHLNSWQPZNXWEWBUHAMYNERKWFTEAEJEBWJVAFTIHIGZIATPDOLBJCCPYIDZCYIVLEIZYCBDYXVSXIGWULRKFFPWPKRTGNOGAYPMTGSXEZJQZMTSZQNJPRIKNKJ");

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
    msg.setTimeStamp(0.734144025808);
    msg.setSource(20867U);
    msg.setSourceEntity(39U);
    msg.setDestination(35446U);
    msg.setDestinationEntity(189U);
    msg.timeout = 8184U;
    msg.name.assign("BGCWCMDVVCIYLEHRSIPFLTFDOLZSWPSEPOTIOSUXRZDLINNAHYBPTWQLXYXKLATZDYHPQRBDUUKARGNAQECWHCYEJEXXTQRTUEBFJDNDZIMZIUWOXHBGREQYRTGJJRKGPAGMZJSNFDHWMFPMMXQUFAIKTAAKMZN");
    msg.custom.assign("XYZWYCRFTUSIYGTLQQJOSRBOJBABMRJPYIAKHRUVLMRTYBFBZGHDVLGDHNJCCQMMZHLXZDNKAVHODPNGMHSLYROQIIVTMKKFRHUVNCAFPUWNGKYKZILVESYLSQUHSBIRXWDSKIZACXYUWSXKGDMCMZHWAJAUVJODEZLPFDCQNNTAUQXGYBGEQPJQTEIFTFBBEDKC");

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
    msg.setTimeStamp(0.474977132904);
    msg.setSource(51953U);
    msg.setSourceEntity(68U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.183470437625;
    msg.lon = 0.350115651548;
    msg.z = 0.50518268022;
    msg.z_units = 234U;
    msg.speed = 0.655575352073;
    msg.speed_units = 193U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.812001603386;
    tmp_msg_0.y = 0.755977033539;
    tmp_msg_0.z = 0.282895181259;
    tmp_msg_0.t = 0.841938846679;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 10232U;
    tmp_msg_1.off_x = 0.559721891522;
    tmp_msg_1.off_y = 0.622482816026;
    tmp_msg_1.off_z = 0.888905445052;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.530329874929;
    msg.custom.assign("SKGKZRCSFULURYFNNUORGPSSRBBXTPXNBIZMBDOFVMQKBXTMGAYYRCVVZPOZLKAHUTZKLQHYUCMOVIIBFWUALWPRQQGIYAKHNFOQXNCLVYSLCTYNBVXJ");

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
    msg.setTimeStamp(0.0244935389284);
    msg.setSource(12389U);
    msg.setSourceEntity(19U);
    msg.setDestination(21777U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.554215183692;
    msg.lon = 0.263022324335;
    msg.z = 0.661810060252;
    msg.z_units = 99U;
    msg.speed = 0.835320098107;
    msg.speed_units = 221U;
    msg.start_time = 0.313756274317;
    msg.custom.assign("XYJDVCBWNQBMSNHQNPYAFOBJVEOJBADGTHVNBWFKAQLDVQXTNIBUCTDRPPTRWBXEBULAVWMUBHZPKCCACTKHVHAZJTLMGYIIFZIHIMJWMEDHKPWFAMZGGAYLILEFVUFOUSNOPSLTRQJHREYGHUOONCBQMGTNDWMNSFQPJLKJJE");

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
    msg.setTimeStamp(0.199985197054);
    msg.setSource(48847U);
    msg.setSourceEntity(129U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.998039699937;
    msg.lon = 0.612484339055;
    msg.z = 0.00932384286165;
    msg.z_units = 209U;
    msg.speed = 0.0535688613667;
    msg.speed_units = 90U;
    msg.start_time = 0.43622334423;
    msg.custom.assign("MHWIYJSJQTJWPUIOQVJTPGJYWFDKUYALITKTFXFEBNMXFMEP");

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
    msg.setTimeStamp(0.165197492627);
    msg.setSource(39268U);
    msg.setSourceEntity(167U);
    msg.setDestination(63122U);
    msg.setDestinationEntity(6U);
    msg.vid = 63891U;
    msg.off_x = 0.39105297936;
    msg.off_y = 0.325490473177;
    msg.off_z = 0.242655530087;

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
    msg.setTimeStamp(0.646575787782);
    msg.setSource(42646U);
    msg.setSourceEntity(89U);
    msg.setDestination(21897U);
    msg.setDestinationEntity(147U);
    msg.vid = 45482U;
    msg.off_x = 0.194013714225;
    msg.off_y = 0.109616908298;
    msg.off_z = 0.918566973578;

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
    msg.setTimeStamp(0.910767200995);
    msg.setSource(14647U);
    msg.setSourceEntity(49U);
    msg.setDestination(62434U);
    msg.setDestinationEntity(127U);
    msg.vid = 23441U;
    msg.off_x = 0.193062585052;
    msg.off_y = 0.5720103994;
    msg.off_z = 0.189047935391;

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
    msg.setTimeStamp(0.759215647972);
    msg.setSource(21867U);
    msg.setSourceEntity(125U);
    msg.setDestination(43010U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.771889440724);
    msg.setSource(6604U);
    msg.setSourceEntity(132U);
    msg.setDestination(6208U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.372466653854);
    msg.setSource(63509U);
    msg.setSourceEntity(246U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.166350470708);
    msg.setSource(65083U);
    msg.setSourceEntity(59U);
    msg.setDestination(16333U);
    msg.setDestinationEntity(252U);
    msg.mid = 33245U;

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
    msg.setTimeStamp(0.755164281427);
    msg.setSource(3058U);
    msg.setSourceEntity(85U);
    msg.setDestination(20068U);
    msg.setDestinationEntity(22U);
    msg.mid = 3027U;

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
    msg.setTimeStamp(0.679958081402);
    msg.setSource(25859U);
    msg.setSourceEntity(117U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(35U);
    msg.mid = 60156U;

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
    msg.setTimeStamp(0.683087418044);
    msg.setSource(3559U);
    msg.setSourceEntity(55U);
    msg.setDestination(51372U);
    msg.setDestinationEntity(195U);
    msg.state = 135U;
    msg.eta = 19717U;
    msg.info.assign("VQSPMRNMYZCPNXRLNYYQIBXVKFICAMVQRIAJSKPZVVIULTUSRXHJGQY");

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
    msg.setTimeStamp(0.731443298035);
    msg.setSource(52985U);
    msg.setSourceEntity(11U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(165U);
    msg.state = 129U;
    msg.eta = 36967U;
    msg.info.assign("IBWJDEQLSNZZYPUDYXWOLSCHLJSQRBXITCDBJOKJHDHLHZDGBXBOXYGIGCMQAYAHQNYPNLASONRHSRCXQNRYZ");

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
    msg.setTimeStamp(0.829618849044);
    msg.setSource(50445U);
    msg.setSourceEntity(222U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(70U);
    msg.state = 129U;
    msg.eta = 55753U;
    msg.info.assign("TQXGHLRTQPNNJ");

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
    msg.setTimeStamp(0.0427762154778);
    msg.setSource(63871U);
    msg.setSourceEntity(176U);
    msg.setDestination(24057U);
    msg.setDestinationEntity(40U);
    msg.system = 22215U;
    msg.duration = 9366U;
    msg.speed = 0.868379365007;
    msg.speed_units = 37U;
    msg.x = 0.228294100383;
    msg.y = 0.645108876627;
    msg.z = 0.0705889066783;
    msg.z_units = 33U;

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
    msg.setTimeStamp(0.235365301296);
    msg.setSource(46516U);
    msg.setSourceEntity(2U);
    msg.setDestination(52967U);
    msg.setDestinationEntity(182U);
    msg.system = 36283U;
    msg.duration = 62842U;
    msg.speed = 0.424088492921;
    msg.speed_units = 15U;
    msg.x = 0.455755518838;
    msg.y = 0.0725837545137;
    msg.z = 0.243835607892;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.578808950632);
    msg.setSource(32895U);
    msg.setSourceEntity(128U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(95U);
    msg.system = 7750U;
    msg.duration = 29970U;
    msg.speed = 0.63395723879;
    msg.speed_units = 251U;
    msg.x = 0.545105656474;
    msg.y = 0.0244124297919;
    msg.z = 0.352718834585;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.166017098026);
    msg.setSource(44104U);
    msg.setSourceEntity(111U);
    msg.setDestination(64048U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.808702001148;
    msg.lon = 0.75898903909;
    msg.speed = 0.636838108533;
    msg.speed_units = 168U;
    msg.duration = 49898U;
    msg.sys_a = 12915U;
    msg.sys_b = 18766U;
    msg.move_threshold = 0.129572364051;

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
    msg.setTimeStamp(0.740258208503);
    msg.setSource(38233U);
    msg.setSourceEntity(18U);
    msg.setDestination(47223U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.842034130739;
    msg.lon = 0.910384231237;
    msg.speed = 0.189960571701;
    msg.speed_units = 249U;
    msg.duration = 27494U;
    msg.sys_a = 2620U;
    msg.sys_b = 27813U;
    msg.move_threshold = 0.983189780869;

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
    msg.setTimeStamp(0.123854594928);
    msg.setSource(63678U);
    msg.setSourceEntity(97U);
    msg.setDestination(35909U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.475598318114;
    msg.lon = 0.63975639245;
    msg.speed = 0.747405798393;
    msg.speed_units = 241U;
    msg.duration = 25874U;
    msg.sys_a = 17151U;
    msg.sys_b = 49866U;
    msg.move_threshold = 0.940610614763;

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
    msg.setTimeStamp(0.373739151943);
    msg.setSource(57627U);
    msg.setSourceEntity(139U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.583905339563;
    msg.lon = 0.02267376836;
    msg.z = 0.0561898139905;
    msg.z_units = 26U;
    msg.speed = 0.414000549792;
    msg.speed_units = 10U;
    msg.custom.assign("LTBVVCOKNMZXLVESVNDJHNNIY");

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
    msg.setTimeStamp(0.652136117833);
    msg.setSource(63583U);
    msg.setSourceEntity(89U);
    msg.setDestination(3810U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.710984431164;
    msg.lon = 0.123140991897;
    msg.z = 0.350198826547;
    msg.z_units = 169U;
    msg.speed = 0.88014826509;
    msg.speed_units = 72U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.844648029198;
    tmp_msg_0.lon = 0.152448126266;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KQYJUGJRPQYKSMUMGGTNZPEHVRCNYZLSAOWPSBNAOEOBJNMXKFIVRV");

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
    msg.setTimeStamp(0.367000136838);
    msg.setSource(61171U);
    msg.setSourceEntity(5U);
    msg.setDestination(46982U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.81382943657;
    msg.lon = 0.559796659946;
    msg.z = 0.549966619884;
    msg.z_units = 237U;
    msg.speed = 0.843077155675;
    msg.speed_units = 34U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0402785930589;
    tmp_msg_0.lon = 0.445208847698;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KNMSVXZDBTARCONLIPNJLGUDSDDIRUSIAOESMYGJYPFERPPRCJZIQTGEQDGREFDKHWGKEBODWKXNIPGKLVRJJGVCKYWNMVHAJBJKPKXLVVQQCZEAMESZONWDCGZYKAZTMWYHBYQLQUOUQYPWIMJFAAQSONLZZLOMTLOHJXQYFMQTSXEICBCXJUXTINFNH");

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
    msg.setTimeStamp(0.711513821806);
    msg.setSource(59086U);
    msg.setSourceEntity(204U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.488072059504;
    msg.lon = 0.0902026706252;

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
    msg.setTimeStamp(0.959594153384);
    msg.setSource(23922U);
    msg.setSourceEntity(205U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.795189814726;
    msg.lon = 0.213620279974;

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
    msg.setTimeStamp(0.678733544726);
    msg.setSource(52415U);
    msg.setSourceEntity(45U);
    msg.setDestination(21506U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.398428438875;
    msg.lon = 0.556540794198;

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
    msg.setTimeStamp(0.941374227831);
    msg.setSource(45479U);
    msg.setSourceEntity(163U);
    msg.setDestination(41285U);
    msg.setDestinationEntity(168U);
    msg.timeout = 59190U;
    msg.lat = 0.253694198568;
    msg.lon = 0.624104975312;
    msg.z = 0.959831446945;
    msg.z_units = 46U;
    msg.pitch = 0.880136384546;
    msg.amplitude = 0.94979792407;
    msg.duration = 13866U;
    msg.speed = 0.22337351902;
    msg.speed_units = 157U;
    msg.radius = 0.781553722694;
    msg.direction = 9U;
    msg.custom.assign("CKTYRPTAODQRIWEDXIZESGDQGFZGUSZPQIBKSNHTMHOKZASTZXZVVSXSVQZTBCHWAAURNMWRBNULHDGVHGMPTMIZMXYXYULKUFNQSCONKBSEHRGPIHURKBPJY");

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
    msg.setTimeStamp(0.255074167748);
    msg.setSource(47307U);
    msg.setSourceEntity(216U);
    msg.setDestination(50397U);
    msg.setDestinationEntity(251U);
    msg.timeout = 37116U;
    msg.lat = 0.793834252052;
    msg.lon = 0.0734549541684;
    msg.z = 0.703115565694;
    msg.z_units = 172U;
    msg.pitch = 0.0667001174859;
    msg.amplitude = 0.585608293354;
    msg.duration = 25950U;
    msg.speed = 0.493893794964;
    msg.speed_units = 143U;
    msg.radius = 0.22693421833;
    msg.direction = 138U;
    msg.custom.assign("TGXQRDFRKNGSZKWADOAIBDOTJSCALZHJOXKMJLAMUYMBRFEKBAFDKONNJBVFDGQBXHOUPUUWQYWLVFCEZRLSWBCCCLZMBYJELRHGMGOQEYFNVDJ");

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
    msg.setTimeStamp(0.922056621725);
    msg.setSource(20746U);
    msg.setSourceEntity(52U);
    msg.setDestination(23008U);
    msg.setDestinationEntity(176U);
    msg.timeout = 17321U;
    msg.lat = 0.126242800715;
    msg.lon = 0.508925621303;
    msg.z = 0.779757924921;
    msg.z_units = 129U;
    msg.pitch = 0.757728358101;
    msg.amplitude = 0.40709766796;
    msg.duration = 43110U;
    msg.speed = 0.252447260967;
    msg.speed_units = 147U;
    msg.radius = 0.219237457;
    msg.direction = 220U;
    msg.custom.assign("CMYXJKOGNADVXYAIQPAKZOHLHVFKPICONUSPFKHOOAUXMZZGVDJTIESZBERZPNBALQDCFWOLSTABUFVBMCXBGXKYYWMOQIEFEFBLSVSGPTAOQUNSAMQSLEUQIKPVEVGFPMBRELCQIANYWPEGWBYRZRRKVFNECGDZKYHVVXSTIGWJWXUJHLWCXYWKT");

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
    msg.setTimeStamp(0.543735201317);
    msg.setSource(61263U);
    msg.setSourceEntity(161U);
    msg.setDestination(28273U);
    msg.setDestinationEntity(17U);
    msg.formation_name.assign("CLYELUUPNAKNJKCCIPTABUHHCETEWBBNAJVEEQUXTPXQZONDUNEIVNCSLZQDOHLHTFIFTXZFSWCUVRFXRRIUYSWWFNBZLJFMDUMGPMGAMBABGDSXVHL");
    msg.reference_frame = 75U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7770U;
    tmp_msg_0.off_x = 0.612076574167;
    tmp_msg_0.off_y = 0.818419317817;
    tmp_msg_0.off_z = 0.148731319598;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TXNYUUKGTKVJWVQDECBHEEWNIQRESIWMNRZYBAZSDBOGPBFDBZAWRABPSAMVXZOMMNN");

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
    msg.setTimeStamp(0.474999356466);
    msg.setSource(4549U);
    msg.setSourceEntity(228U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("HHNLSYDTYYHMKIPWGHRVJTJKJNLEQJMVYJDUCLAWNAZAIGTBU");
    msg.reference_frame = 13U;
    msg.custom.assign("HDDSJPGOMBLLPABMUCCMBXUTGFWXKGUSHRUKCLUQXVVSDWPHNZCVLPKYFKVZAXYIWTXYNYJ");

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
    msg.setTimeStamp(0.261987164999);
    msg.setSource(42473U);
    msg.setSourceEntity(121U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(5U);
    msg.formation_name.assign("TRPFKYFJZPJBJYNDVOBEKGSNYXBIWOXMYHSLWOVUKLSULUHEZVSAHAZIIZHIXDFCDKQRZGTCCETIWFFENHAATXKTMPIEPYCWWQUNWUIVQISVJQLJUEPZYWENENSVHXFSUTBQORYRLAKDDBKUHMBORJLTDGCMGOFLSVQ");
    msg.reference_frame = 144U;
    msg.custom.assign("EUCPOCNRNPNTRKUAEGBTBHEMZYAVCOWDGYXADFSXKJCKCFPIRREYHAENDJNUNVPDLXLUZIQUVDVLARMLCMYGXJPOZRZRWHYFUUIQYOININCKOLKSMMBOLBFOAJMUGGCTBHZPBITIXTQVTESJYUIWPZCPLDPBKMBKQAUJVEZVQCQNAZBPQAHWGEHEWGWHXHLMBLFQHVJHTYMSXFVJRMVYDGFEDTXZODFSGSGTFKJAWNS");

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
    msg.setTimeStamp(0.538787484117);
    msg.setSource(57048U);
    msg.setSourceEntity(231U);
    msg.setDestination(12553U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("IBELUSMYKWTMOSPGXZKRHQSQFDXBKTEYTVRYXDYZNZREZZNUMBUHIFNEJKCFYUHMEACHDRHPAVMBKGHCIPONRAKHIVOUNJRTJESQBTOFQEOEQDO");
    msg.formation_name.assign("QWYEHPSHYPJFRLBAXTGIFOXAEKXVARNFWODTLCYUJDALYINMFSBMWKOORYCQVLZBGGJJSUPITEAXXLSACSEOHULTWRJVFOCNPMXRLBIMOQIANHQUVYUQMKUEFALDDNBVBLOYRXETWZVMPHHFCYZKNWBWBDNNHKZRSLBJVI");
    msg.plan_id.assign("ZVZNXUBXKZIYSZJXOXDPMQAHCECQUFAWKCIIXKHSKESEYBEFRJUDDFQUVGMQNND");
    msg.description.assign("GVNFHBGSHQUPKLPRJPEGWCVQDYTTWAEHYMSOSAIRIKKYRLWNMDVYTQOKIMLFRMTHVAOFCDDUVNPYEGZFZCUPDBEPGCERYMRCSRZPHIIFIZLUQFLBTTMXFNBXLXFIPHOZNNLOBAJFQFJHGQBMPCIELUNZVLIDAGCAVOSCXWPBMASEZVCZOJZJDEMQNXHOBSELXSSXVATXWYDVHBDGGKUAJUNTJNQKQTXKWQMWDAUYIJUJWRTUYYXKKGSH");
    msg.leader_speed = 0.251966402306;
    msg.leader_bank_lim = 0.13006109907;
    msg.pos_sim_err_lim = 0.21620725251;
    msg.pos_sim_err_wrn = 0.222734001165;
    msg.pos_sim_err_timeout = 9236U;
    msg.converg_max = 0.332535724964;
    msg.converg_timeout = 42016U;
    msg.comms_timeout = 61291U;
    msg.turb_lim = 0.301977247301;
    msg.custom.assign("GJWKTOYHNKDNGDFACNPQILUJFVCGEXLVPBLYGNAZWVTJXOIXSUHRBF");

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
    msg.setTimeStamp(0.978959666938);
    msg.setSource(3905U);
    msg.setSourceEntity(181U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("NEVBMOXEFDONIRDSUZRQQUMCMULTFIIAQXOJGQSVSYMTCMJSWOXOLNBGTXUSSWDFCKXNCJORZTNKIUEYCIATFBIZIYHUFBYWVYSKRDAUSJPYAWRBOJJPFQZIRZKGEMLXGNBHRQBWFLRWWEGILEFJKVHVQUTZHKRXNKSBXLDQWZFTJPHYPPVDXHBEPGKHGHZLHZEVYIWRQAGEDA");
    msg.formation_name.assign("AJEYIYVWBDQIRGYZDVTRSQSHJMONDTLCEWBEBZVQFNXQPDOJAEMSGSOGITNTFSQTIEPXZWGOKZKVAODAEOXBHHGCCOPKCAABHSZZKVHZLITMQHWMDFXSBJNFGNXRSCCBPXGIORBLMMFCGLDCBUALAXFUVXNZKFMQIJLPYJUUEMTLORJHLQJPRREDJGQKVFVHQWHKEGMRRUWXKYDVALLNZANTONTYTMPPBUDUJWPPKVNZIIWCUSIFSHKC");
    msg.plan_id.assign("YPAQPALZHRROTYZKGSGKCKGLFWJJNIIGDAZRNFA");
    msg.description.assign("ZXHOAXKFOQHNIWUTWJCGEIBCHZRCELHEDSMKONGPTJGMUOFQKWHKOYYDQGASRVFMJGAHUDPULNDTJTXIXFWEJQIRMHEABGSISGKFLAVEDFIEYIWRQBSMYUMVVONWCNPILSJHKBULXWSTRRMECQYYZCHQZQCPGVIVANJDSQUWDTZTSPLDQYLVLNBWBSHRTXOCNYUU");
    msg.leader_speed = 0.71202512605;
    msg.leader_bank_lim = 0.735214504517;
    msg.pos_sim_err_lim = 0.877196440722;
    msg.pos_sim_err_wrn = 0.187954475237;
    msg.pos_sim_err_timeout = 54120U;
    msg.converg_max = 0.741847180484;
    msg.converg_timeout = 53643U;
    msg.comms_timeout = 65261U;
    msg.turb_lim = 0.458381821714;
    msg.custom.assign("UMHCIFMQSMFCDNYKMIFOTLOKZTWSPOQDJFUPZSHNSFRQGSQYRHTKZYNTKWQCVYJXRPJZVLMUQFUNAOBLDGPSHLDPPFPKJYOBEHNZFGOZALZYSJXVCPJWQXXHNJNEUZSRDMXEHGNWULKXUIXYITQKBWAQMCGGWTWCXVWGOYTAOUTYVNJASLHBGITIUKSLADRLTPDAHDCBKRKDLYPHCVEMMAAEBIVWIAZRNCVFVEVEIFIECGBDGZJWEXU");

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
    msg.setTimeStamp(0.319917525341);
    msg.setSource(49211U);
    msg.setSourceEntity(89U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("PMEGDHYFIXCJSGVXNUDSXRJONAIAHYOJWQXKUBPINGRGYOLDULNYPHVCGKCQKQPERQOIBSBJQEZTELADLSILOBZXQZNOHTCKCMEFPYLFJNABHDQOJHNXMZUAEAJNWIVUXTRYRTVTZNWYEBKYTBQEXFWWTPIMDCTHFL");
    msg.formation_name.assign("RRXQEBCQOUWHAILNIYBAVTWIZYHMCDZTMONLLTPVMTDASDTDFIUSGBSNKGYWNGLUGFARWGOFRBRSLHBLZEJYHPNFDS");
    msg.plan_id.assign("FOPMMFRSWZBKLFNWNPDQLVHCNILSGEZOQCHSRXPYFFUOBCEKNATQUWSBBCYDADRQSVVXSTBNXUGMMFXHWPQCHZVVDPGEAIKUZTAWBRSCBOTYDQJJCAMYHNJQRRPEOMMXBVNGQLYWHUALSFLMEHX");
    msg.description.assign("KNORGZGVHQPXZAHMTYNVYIBOTKVMSAYCFXWUUQJVBPUFWEOJHXCRNGLQXZMPDIMTLMNJFTOFLHMMEZVCRGHETHGTKDSKQDVRODMRLCVXEXCKLBRZALPWQLMVFTAQBJDUPBBPIKZYDGLECNIQWAKOUVTOXGZKAHQYWYOZDFUPYUQJBCESXFGSDCWR");
    msg.leader_speed = 0.089348527048;
    msg.leader_bank_lim = 0.0979812296932;
    msg.pos_sim_err_lim = 0.141552283376;
    msg.pos_sim_err_wrn = 0.909797174766;
    msg.pos_sim_err_timeout = 61616U;
    msg.converg_max = 0.303824929231;
    msg.converg_timeout = 32968U;
    msg.comms_timeout = 10840U;
    msg.turb_lim = 0.695427811292;
    msg.custom.assign("UMRZXZZHEZYKHUCYLOQIYSOYTFPEBNIHFDRTAXIZECMGRJANWVPIVKDNVAQJOYAAYGLDQPMBRREJRFBDUVSDGEGNODUYUJQKTGJNFSGWJTPXRMEZVRCVBILOLAGHSFTKCPMTWZ");

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
    msg.setTimeStamp(0.499035282459);
    msg.setSource(27840U);
    msg.setSourceEntity(207U);
    msg.setDestination(21779U);
    msg.setDestinationEntity(158U);
    msg.control_src = 54623U;
    msg.control_ent = 130U;
    msg.timeout = 0.2878639179;
    msg.loiter_radius = 0.520811396894;
    msg.altitude_interval = 0.646740968937;

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
    msg.setTimeStamp(0.767619683293);
    msg.setSource(333U);
    msg.setSourceEntity(240U);
    msg.setDestination(3455U);
    msg.setDestinationEntity(32U);
    msg.control_src = 11220U;
    msg.control_ent = 191U;
    msg.timeout = 0.973533487986;
    msg.loiter_radius = 0.422126271251;
    msg.altitude_interval = 0.250398606614;

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
    msg.setTimeStamp(0.900724904715);
    msg.setSource(11635U);
    msg.setSourceEntity(217U);
    msg.setDestination(629U);
    msg.setDestinationEntity(32U);
    msg.control_src = 46666U;
    msg.control_ent = 156U;
    msg.timeout = 0.467641698291;
    msg.loiter_radius = 0.326027854225;
    msg.altitude_interval = 0.572446816231;

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
    msg.setTimeStamp(0.447760017556);
    msg.setSource(44154U);
    msg.setSourceEntity(49U);
    msg.setDestination(18368U);
    msg.setDestinationEntity(175U);
    msg.flags = 31U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.544185290194;
    tmp_msg_0.speed_units = 21U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0306440362043;
    tmp_msg_1.z_units = 13U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.305888474983;
    msg.lon = 0.222153489236;
    msg.radius = 0.0585378259169;

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
    msg.setTimeStamp(0.281699777298);
    msg.setSource(53013U);
    msg.setSourceEntity(224U);
    msg.setDestination(53767U);
    msg.setDestinationEntity(44U);
    msg.flags = 244U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.732454668884;
    tmp_msg_0.speed_units = 67U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.718452949875;
    tmp_msg_1.z_units = 62U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.451784929743;
    msg.lon = 0.797632968469;
    msg.radius = 0.954981236344;

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
    msg.setTimeStamp(0.0930675813018);
    msg.setSource(1750U);
    msg.setSourceEntity(124U);
    msg.setDestination(42411U);
    msg.setDestinationEntity(177U);
    msg.flags = 195U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.69033451897;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.261454092946;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.75464224489;
    msg.lon = 0.500446805809;
    msg.radius = 0.564510792562;

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
    msg.setTimeStamp(0.0608144923194);
    msg.setSource(50016U);
    msg.setSourceEntity(170U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(218U);
    msg.control_src = 39491U;
    msg.control_ent = 97U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 147U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.93343592829;
    tmp_tmp_msg_0_0.speed_units = 40U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.349399735997;
    tmp_tmp_msg_0_1.z_units = 121U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.459898898497;
    tmp_msg_0.lon = 0.879452589617;
    tmp_msg_0.radius = 0.270483240464;
    msg.reference.set(tmp_msg_0);
    msg.state = 237U;
    msg.proximity = 16U;

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
    msg.setTimeStamp(0.789638645791);
    msg.setSource(25386U);
    msg.setSourceEntity(109U);
    msg.setDestination(53616U);
    msg.setDestinationEntity(37U);
    msg.control_src = 40212U;
    msg.control_ent = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0780719702685;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.879868307275;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.690070540347;
    tmp_msg_0.lon = 0.993564572701;
    tmp_msg_0.radius = 0.152907767379;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 7U;

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
    msg.setTimeStamp(0.203839199092);
    msg.setSource(23248U);
    msg.setSourceEntity(196U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(9U);
    msg.control_src = 12710U;
    msg.control_ent = 67U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 88U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.874850966656;
    tmp_tmp_msg_0_0.speed_units = 77U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.212629251824;
    tmp_tmp_msg_0_1.z_units = 124U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.741370198606;
    tmp_msg_0.lon = 0.576340101608;
    tmp_msg_0.radius = 0.123580263484;
    msg.reference.set(tmp_msg_0);
    msg.state = 189U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.0805401111371);
    msg.setSource(28302U);
    msg.setSourceEntity(200U);
    msg.setDestination(52022U);
    msg.setDestinationEntity(235U);
    msg.ax_cmd = 0.598379402179;
    msg.ay_cmd = 0.82861674389;
    msg.az_cmd = 0.485035145333;
    msg.ax_des = 0.0033860809824;
    msg.ay_des = 0.891129029418;
    msg.az_des = 0.510717615281;
    msg.virt_err_x = 0.27577001045;
    msg.virt_err_y = 0.709541887017;
    msg.virt_err_z = 0.147875162727;
    msg.surf_fdbk_x = 0.254306021513;
    msg.surf_fdbk_y = 0.128537217637;
    msg.surf_fdbk_z = 0.0578364980327;
    msg.surf_unkn_x = 0.0277055602076;
    msg.surf_unkn_y = 0.415119190391;
    msg.surf_unkn_z = 0.640464707205;
    msg.ss_x = 0.905358509265;
    msg.ss_y = 0.632580954468;
    msg.ss_z = 0.570084858292;

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
    msg.setTimeStamp(0.327399643285);
    msg.setSource(19675U);
    msg.setSourceEntity(28U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(246U);
    msg.ax_cmd = 0.28480865573;
    msg.ay_cmd = 0.751653589909;
    msg.az_cmd = 0.791696602118;
    msg.ax_des = 0.641182732094;
    msg.ay_des = 0.0964069620569;
    msg.az_des = 0.560794115173;
    msg.virt_err_x = 0.0378193049955;
    msg.virt_err_y = 0.185197721516;
    msg.virt_err_z = 0.0751459391691;
    msg.surf_fdbk_x = 0.380009358198;
    msg.surf_fdbk_y = 0.855723411067;
    msg.surf_fdbk_z = 0.933915582152;
    msg.surf_unkn_x = 0.693806303783;
    msg.surf_unkn_y = 0.629670519942;
    msg.surf_unkn_z = 0.631741609897;
    msg.ss_x = 0.255833116855;
    msg.ss_y = 0.728750335507;
    msg.ss_z = 0.166844187478;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RMXLZUAJNYKBHKASCNTFVDRBVSWPNFZIZKYWGTWZVGVARLZJSPKMIETNUJWGIHOHNQZRXCMFGOXYECRGMJEIZEWORPM");
    tmp_msg_0.dist = 0.142569402647;
    tmp_msg_0.err = 0.0319894919646;
    tmp_msg_0.ctrl_imp = 0.648758287611;
    tmp_msg_0.rel_dir_x = 0.874404814224;
    tmp_msg_0.rel_dir_y = 0.288289820699;
    tmp_msg_0.rel_dir_z = 0.67163434371;
    tmp_msg_0.err_x = 0.510530839468;
    tmp_msg_0.err_y = 0.664477597566;
    tmp_msg_0.err_z = 0.0374716262707;
    tmp_msg_0.rf_err_x = 0.55746722961;
    tmp_msg_0.rf_err_y = 0.216735683896;
    tmp_msg_0.rf_err_z = 0.563794613332;
    tmp_msg_0.rf_err_vx = 0.496559244684;
    tmp_msg_0.rf_err_vy = 0.991931264409;
    tmp_msg_0.rf_err_vz = 0.803115356224;
    tmp_msg_0.ss_x = 0.123259830885;
    tmp_msg_0.ss_y = 0.701025918705;
    tmp_msg_0.ss_z = 0.83007160998;
    tmp_msg_0.virt_err_x = 0.0918601828418;
    tmp_msg_0.virt_err_y = 0.118740589042;
    tmp_msg_0.virt_err_z = 0.495872723014;
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
    msg.setTimeStamp(0.681430882325);
    msg.setSource(18634U);
    msg.setSourceEntity(112U);
    msg.setDestination(59220U);
    msg.setDestinationEntity(29U);
    msg.ax_cmd = 0.770766893065;
    msg.ay_cmd = 0.983953372671;
    msg.az_cmd = 0.697455595364;
    msg.ax_des = 0.790789979116;
    msg.ay_des = 0.970108714497;
    msg.az_des = 0.617605586019;
    msg.virt_err_x = 0.842235928295;
    msg.virt_err_y = 0.191339601533;
    msg.virt_err_z = 0.0677643074741;
    msg.surf_fdbk_x = 0.0379576958261;
    msg.surf_fdbk_y = 0.130577306702;
    msg.surf_fdbk_z = 0.11999351372;
    msg.surf_unkn_x = 0.278106907254;
    msg.surf_unkn_y = 0.0459747203539;
    msg.surf_unkn_z = 0.74274532595;
    msg.ss_x = 0.849252793336;
    msg.ss_y = 0.570404707177;
    msg.ss_z = 0.146834193513;

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
    msg.setTimeStamp(0.835601517458);
    msg.setSource(44567U);
    msg.setSourceEntity(5U);
    msg.setDestination(58657U);
    msg.setDestinationEntity(33U);
    msg.s_id.assign("BSDULFHPOZQDYXKGCCMYUWCDYQYBMDODSNWZAQNVLIMYIDXGTQTCAGPISXVBRSAIFNFOKJOLHPHERSBLYDJBBBDKCEIKORVAEPVNURIAPFTWIHPHGTNAQRJZSKWFUNTJUFRTEJENYKFZVXVMHRSETOFEY");
    msg.dist = 0.846461172606;
    msg.err = 0.288435176788;
    msg.ctrl_imp = 0.279251351793;
    msg.rel_dir_x = 0.842831503032;
    msg.rel_dir_y = 0.990696950059;
    msg.rel_dir_z = 0.199185215123;
    msg.err_x = 0.423851511527;
    msg.err_y = 0.733584854139;
    msg.err_z = 0.020647662043;
    msg.rf_err_x = 0.148391319096;
    msg.rf_err_y = 0.311928357234;
    msg.rf_err_z = 0.330518280331;
    msg.rf_err_vx = 0.889396386873;
    msg.rf_err_vy = 0.521347900763;
    msg.rf_err_vz = 0.830024377765;
    msg.ss_x = 0.477222530902;
    msg.ss_y = 0.538877172361;
    msg.ss_z = 0.705710660718;
    msg.virt_err_x = 0.125280759097;
    msg.virt_err_y = 0.977007540529;
    msg.virt_err_z = 0.0416604178974;

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
    msg.setTimeStamp(0.104827018723);
    msg.setSource(18513U);
    msg.setSourceEntity(13U);
    msg.setDestination(28960U);
    msg.setDestinationEntity(2U);
    msg.s_id.assign("POGJVBESRXFLKXYSQSOZQDTIOQSDORVTGKJVZURKNPUQHGFOWLHRNDXJCJMVIPVOFMKDTIJHTMRIRUUCYHQWKAANLSGNPVBYLICRZCATULUMCYYMIHFHVHDHJRFYLWMEHFEWLFZFNVGZIBTSXLESXVOYKAXWBWIATESVTOEJCYQMXBRAPDPLKXCWFWFNWKEKJUZACRGIOBQBQSEUNGZUABYSZTYHAC");
    msg.dist = 0.12555558207;
    msg.err = 0.576053160212;
    msg.ctrl_imp = 0.971361266746;
    msg.rel_dir_x = 0.338034466691;
    msg.rel_dir_y = 0.657248394888;
    msg.rel_dir_z = 0.156485141755;
    msg.err_x = 0.349127945304;
    msg.err_y = 0.726963598051;
    msg.err_z = 0.879873666755;
    msg.rf_err_x = 0.317783432923;
    msg.rf_err_y = 0.785004358139;
    msg.rf_err_z = 0.736949523848;
    msg.rf_err_vx = 0.200905491506;
    msg.rf_err_vy = 0.308134543527;
    msg.rf_err_vz = 0.704628633889;
    msg.ss_x = 0.822111253738;
    msg.ss_y = 0.815417760912;
    msg.ss_z = 0.295626566296;
    msg.virt_err_x = 0.253818865083;
    msg.virt_err_y = 0.0702290654465;
    msg.virt_err_z = 0.527017182722;

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
    msg.setTimeStamp(0.136222364038);
    msg.setSource(37457U);
    msg.setSourceEntity(209U);
    msg.setDestination(37471U);
    msg.setDestinationEntity(204U);
    msg.s_id.assign("DVQDIIDGURDNKNBKSHTUMXDEMKSGISFFFZPIHVRLHLYFFTHJNLUNNUELWLRGRBVNGGKSDACO");
    msg.dist = 0.319590410053;
    msg.err = 0.186809842309;
    msg.ctrl_imp = 0.763105056808;
    msg.rel_dir_x = 0.773698790108;
    msg.rel_dir_y = 0.8025937622;
    msg.rel_dir_z = 0.561344243255;
    msg.err_x = 0.425584806924;
    msg.err_y = 0.776401123188;
    msg.err_z = 0.816376927204;
    msg.rf_err_x = 0.970855973246;
    msg.rf_err_y = 0.936159907997;
    msg.rf_err_z = 0.720403177405;
    msg.rf_err_vx = 0.0104643673389;
    msg.rf_err_vy = 0.629247661849;
    msg.rf_err_vz = 0.178258849485;
    msg.ss_x = 0.524633065369;
    msg.ss_y = 0.42461268641;
    msg.ss_z = 0.767481889615;
    msg.virt_err_x = 0.441717697708;
    msg.virt_err_y = 0.873344131484;
    msg.virt_err_z = 0.64076587578;

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
    msg.setTimeStamp(0.296127875506);
    msg.setSource(63859U);
    msg.setSourceEntity(194U);
    msg.setDestination(820U);
    msg.setDestinationEntity(151U);
    msg.timeout = 57317U;
    msg.rpm = 0.800879268594;
    msg.direction = 201U;
    msg.custom.assign("BPZUIYLGPXBFLGADPGMRBLQSAQLZIQXZWSFVVERHINMOUVFVYRCLUWYWVNZMEHPILYRZTSMMDEGYOZHCSFWCQJXZLCOEKDADCMOJWA");

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
    msg.setTimeStamp(0.129976297476);
    msg.setSource(18979U);
    msg.setSourceEntity(62U);
    msg.setDestination(8236U);
    msg.setDestinationEntity(135U);
    msg.timeout = 28187U;
    msg.rpm = 0.81657817601;
    msg.direction = 249U;
    msg.custom.assign("FAKGOWJQJXMNRLILMYIWGJKHAZJXIQGLLRSHPPRCVDHPYEOHXBRIVKHFHVYBBAHCXWAIVVOMPRXLNWEQOJPNDZHLYEZPKBTKLQTEAWVUWOAOEXRWGXZVSDLATVMTCBNENYMBEDOYVANREIP");

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
    msg.setTimeStamp(0.273149447412);
    msg.setSource(29210U);
    msg.setSourceEntity(157U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(113U);
    msg.timeout = 53331U;
    msg.rpm = 0.337878158174;
    msg.direction = 3U;
    msg.custom.assign("IKKXSLAGOHDIZFVTLJPMNPEOCPYRVFLPWBIMLGVZORZLNXUBIPSXHDMDQCLQCZCNBMEQHDLWIXROUOJYEGCAKKZCAYAYRWNRE");

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
    msg.setTimeStamp(0.911673121037);
    msg.setSource(18436U);
    msg.setSourceEntity(86U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("LXUVXCAWBDIAFGUADFGCAQQFNVGAEXNKNVNRNMGWCUDHOSQPKYWURISMPBTWYDLKERFRQACSNWDVP");
    msg.type = 7U;
    msg.op = 20U;
    msg.group_name.assign("NQYKMAGMMVGYIBSHTVAAPBSYHDEDKRXWVBROHWGCTKLMCSWMZKGKBCNSPLFLLQWIMFTUJCOMOGHEVDXRVADEBINEGWCOXJRXNZYCUTFPONZZDBJNOSUAQHEFJIUJJDLHYFYZKWT");
    msg.plan_id.assign("CUEPFKMYQNVZCOIKYPQBASROIBWRWQXYKMGEXKUZMGFBHIZZVSOJRMFNYIBGNXAXTTNQHKBPHODEXVWRNNHDAFDARTYHSOJLAYLMHREFFCJSNTCPTIQRIRCSBXLLJHJGOTMGDBCUKNUYFWSDRVWQCMEWQTAOJJWGZXSMDNWIVOBOSTFHUDTCSUUPAJVY");
    msg.description.assign("ZEHXGCNWPSZLDNKWRFTSYZXBNVTGYCMLHSOCRIMHRKTIIBIKQLHYTRECHFSQEVDMDFPFJOJMHFHOQVCDCVFANMXAKYYIQIDNAMJRARKUDEPVKZYTBIKWXMEPOQAAPXUOCSXUGEPLAGEZJAWDJ");
    msg.reference_frame = 1U;
    msg.leader_bank_lim = 0.636869513133;
    msg.leader_speed_min = 0.708587219309;
    msg.leader_speed_max = 0.0271312651891;
    msg.leader_alt_min = 0.464679181115;
    msg.leader_alt_max = 0.310770846916;
    msg.pos_sim_err_lim = 0.550140085805;
    msg.pos_sim_err_wrn = 0.303675972438;
    msg.pos_sim_err_timeout = 51177U;
    msg.converg_max = 0.492804196739;
    msg.converg_timeout = 45456U;
    msg.comms_timeout = 37739U;
    msg.turb_lim = 0.882275236078;
    msg.custom.assign("FHWPOJQPMIMAIKBQTZBDGSBXBWQWTUGGBZFSEKMFXDLGRWUCBKCZRMRDTILMZUGYLEYZITYLAMIEKYQZDKFJBAXYJOPLAMJDJGIWONTYJQALVXHNWATIGCAQVPXPEVSCXMNCOCCYAPHFTEUFXRJTWBZQHNVSXNENWXGMRIUNOOFIUVXTYFNYGUIVOSRVHJLOBAHWOKNYMZELZVKODPSHSBHELPQQPJDKLRFREFRENWUVKCHZDUAJPKUSDCSHCV");

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
    msg.setTimeStamp(0.0950198865595);
    msg.setSource(24143U);
    msg.setSourceEntity(116U);
    msg.setDestination(33330U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("AWEWBOWFMIPGNNBMLYUMALEXQINTAIGOSAOTZFHMEQXZCTJOCFJKRTCFRYVNTSXSLZGBRKPUBEMLULZDXTQHUDHCTYEAGYINQAWHCTBJUNRCWOUEXOZBBJPYJMRFAOXHQDCYUHFIKALCSKBPJCDKMSXEMPVYXR");
    msg.type = 46U;
    msg.op = 119U;
    msg.group_name.assign("LCANZGVUFJBJQGXTTGVKWGWBIYXGAJTHDFHDFFWIPWESTCELLOYXRMEWUWUDRJTCUQHWQMIAMYSAYIPTVXIPLLCVGODDUPLHSZTHORUBNZLSHZYFEEUOWGJRMXERNBLMKVVYCUOCZYPSKNREDJSNCMKAYGBVKHSQNAIXRAIDQOFBODPNUMFSUTGFZIQZANXLEOTIKYQQOHKRIYSJHEZWJBDPKSMFCDKXRQQAVEJHXVAFMC");
    msg.plan_id.assign("NPYSABNYHZPVKKTTCAXGVZZHUNPTJUQGUZFRHZMHZKJIOCARSBUKLCWIXRGRLBFPABXCLLONAWIEWSIEWEDZMJUMHJSDYEYIZRRILAWNPPZXXRLFVCQCOLQBCTDIKAEXGBEJJWUWDVFPYXJNFNMVSQGIDODFROWWOMEMRASPSCTEADDLEJOKUHLSXBGVVBHUKQJNACQHTFKRWGFPQXUVFOKFYJYQZKXBQTIOMY");
    msg.description.assign("GGFKZPAANWLQNEOUMVN");
    msg.reference_frame = 204U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12565U;
    tmp_msg_0.off_x = 0.679127720271;
    tmp_msg_0.off_y = 0.371179165814;
    tmp_msg_0.off_z = 0.292879904449;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.800605186231;
    msg.leader_speed_min = 0.951729871972;
    msg.leader_speed_max = 0.419792317961;
    msg.leader_alt_min = 0.445374093028;
    msg.leader_alt_max = 0.79676183825;
    msg.pos_sim_err_lim = 0.643788851159;
    msg.pos_sim_err_wrn = 0.66327011575;
    msg.pos_sim_err_timeout = 30497U;
    msg.converg_max = 0.193135967004;
    msg.converg_timeout = 5906U;
    msg.comms_timeout = 45557U;
    msg.turb_lim = 0.969335860708;
    msg.custom.assign("VVPMPHXDNIDRBBLWRZIYADKNIZQTKVKOUHMPSOTEKEJXDCTEAVMLWMONRTKFNKTLYKQRZPXSFDYIYOE");

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
    msg.setTimeStamp(0.910527522126);
    msg.setSource(17191U);
    msg.setSourceEntity(193U);
    msg.setDestination(30596U);
    msg.setDestinationEntity(164U);
    msg.formation_name.assign("GPMFJWAPXFCQZTQEHNKPTCVWVFBLBSHZBSMTFXHDCPDNLEIOBKYLELYWEYRPGWDCBOLMLRNSUILKBUTNTYULCUQZVTFSRGMULUWOXIUVYG");
    msg.type = 46U;
    msg.op = 135U;
    msg.group_name.assign("DILMPFFMGSQVRUKUKVCUPUJSTFTOCAGOELDHKVXKLZXAMDDNUMFLXNQBDWIFTORGLDPSVXUTOMCWPCDCJJHIYKRYSSXNYBMAYVUJXJEMV");
    msg.plan_id.assign("TKWQAFILUHQHZMSNQDCKMPONBOZZDXA");
    msg.description.assign("KVQNTLTSMRXZOREDHVZYIQDOZGNUMKCVFCNKACXYYXENDYORGDIDNNTUNMEKSDREGYLBUWJRGAGZBWV");
    msg.reference_frame = 233U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27233U;
    tmp_msg_0.off_x = 0.654955011171;
    tmp_msg_0.off_y = 0.481422935292;
    tmp_msg_0.off_z = 0.139728344583;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.971812725545;
    msg.leader_speed_min = 0.672690350671;
    msg.leader_speed_max = 0.346944510048;
    msg.leader_alt_min = 0.191849590296;
    msg.leader_alt_max = 0.924668361817;
    msg.pos_sim_err_lim = 0.380986721161;
    msg.pos_sim_err_wrn = 0.81057385116;
    msg.pos_sim_err_timeout = 14806U;
    msg.converg_max = 0.281425176446;
    msg.converg_timeout = 55355U;
    msg.comms_timeout = 19201U;
    msg.turb_lim = 0.8580602649;
    msg.custom.assign("MCIKXNAXQCQBWQVGBIVHFZSZSFYMVTRBKJUEWCXPBTHNTTTNGCUQANQOAMQEQSDJYMHCPRSGSNUEDMVMOO");

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
    msg.setTimeStamp(0.32301164323);
    msg.setSource(21106U);
    msg.setSourceEntity(17U);
    msg.setDestination(36559U);
    msg.setDestinationEntity(68U);
    msg.timeout = 6548U;
    msg.lat = 0.310286964191;
    msg.lon = 0.362538806463;
    msg.z = 0.999602267792;
    msg.z_units = 128U;
    msg.speed = 0.861499252234;
    msg.speed_units = 120U;
    msg.custom.assign("UMZUVBTJYYTWGCGPIXBIEGG");

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
    msg.setTimeStamp(0.962367138805);
    msg.setSource(1786U);
    msg.setSourceEntity(179U);
    msg.setDestination(13366U);
    msg.setDestinationEntity(22U);
    msg.timeout = 7468U;
    msg.lat = 0.860125659553;
    msg.lon = 0.803276443064;
    msg.z = 0.339899612398;
    msg.z_units = 100U;
    msg.speed = 0.875653978976;
    msg.speed_units = 69U;
    msg.custom.assign("RDFKLYNBQRQILMVDHCHYYFRWPKLVLBQPEEGWRNVDWHPRAEJWVGSDWOTKFSOEQPFFOHYXUZMTTLBBIVTPYC");

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
    msg.setTimeStamp(0.211934590043);
    msg.setSource(60269U);
    msg.setSourceEntity(147U);
    msg.setDestination(46975U);
    msg.setDestinationEntity(82U);
    msg.timeout = 10273U;
    msg.lat = 0.98411066564;
    msg.lon = 0.353210707732;
    msg.z = 0.237869018469;
    msg.z_units = 247U;
    msg.speed = 0.557626497651;
    msg.speed_units = 59U;
    msg.custom.assign("GWJOZSJUOXESVDQACQGICQZSSXOXVUHMYGBIDSXMZ");

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
    msg.setTimeStamp(0.366161828309);
    msg.setSource(11064U);
    msg.setSourceEntity(149U);
    msg.setDestination(22715U);
    msg.setDestinationEntity(158U);
    msg.timeout = 58991U;
    msg.lat = 0.0729054891896;
    msg.lon = 0.391573702957;
    msg.z = 0.300244413471;
    msg.z_units = 120U;
    msg.speed = 0.0981275643284;
    msg.speed_units = 106U;
    msg.custom.assign("OAFICOEWBPSKESBHKEZOIIMINVXSNFHHQEVQDSGYMJCXFJADLKLRJKIRGUFVIMQLOGWQAAGWJVPPMBOWEZVGXJVOYCAUUBECJCUTHHNVDNMAJSINSGIZFWPYJDILUZOWCORMEWKUXQRCKVQHQDMXCALSGTBLBYWHRNHNAPGSYNYHPTBJRWZVHZCRRTVYOBRDKTUQYGAMPXLKEYTTLMZJFUSPRIXBWKDUNPBLYEFAXGPKQMDDT");

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
    msg.setTimeStamp(0.110444808036);
    msg.setSource(34107U);
    msg.setSourceEntity(148U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(5U);
    msg.timeout = 41615U;
    msg.lat = 0.668199546978;
    msg.lon = 0.54630032743;
    msg.z = 0.768880148795;
    msg.z_units = 228U;
    msg.speed = 0.993594954839;
    msg.speed_units = 239U;
    msg.custom.assign("UEZIOOVQDCECOAAFLAHVVLKQXDBXWJYYDHBVYEGCBPWTYSHCUSKKQUKIKNMGOVEOZCEQBMXDPUVJCWAXRPQKOGYREFORSBHNLHIMWSEFBGPYKKFIVZXZLNPYJIGMGYJXROZTWNSBTPMMACXOYPMVZKDYNAIPUWU");

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
    msg.setTimeStamp(0.723805284157);
    msg.setSource(31370U);
    msg.setSourceEntity(71U);
    msg.setDestination(5910U);
    msg.setDestinationEntity(20U);
    msg.timeout = 52357U;
    msg.lat = 0.366162897987;
    msg.lon = 0.992668900392;
    msg.z = 0.100818417803;
    msg.z_units = 89U;
    msg.speed = 0.246289546367;
    msg.speed_units = 250U;
    msg.custom.assign("NLPZKVPLMSBIWBWYRDFPYZXNJLWT");

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
    msg.setTimeStamp(0.111371771822);
    msg.setSource(61892U);
    msg.setSourceEntity(8U);
    msg.setDestination(59663U);
    msg.setDestinationEntity(165U);
    msg.arrival_time = 0.755521897597;
    msg.lat = 0.314205686666;
    msg.lon = 0.103576779931;
    msg.z = 0.514552844402;
    msg.z_units = 83U;
    msg.travel_z = 0.415120569071;
    msg.travel_z_units = 249U;
    msg.delayed = 43U;

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
    msg.setTimeStamp(0.249821233594);
    msg.setSource(1374U);
    msg.setSourceEntity(182U);
    msg.setDestination(26245U);
    msg.setDestinationEntity(178U);
    msg.arrival_time = 0.921764308666;
    msg.lat = 0.983853908751;
    msg.lon = 0.971631944448;
    msg.z = 0.971866257462;
    msg.z_units = 43U;
    msg.travel_z = 0.551725310788;
    msg.travel_z_units = 215U;
    msg.delayed = 37U;

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
    msg.setTimeStamp(0.530219221467);
    msg.setSource(40841U);
    msg.setSourceEntity(245U);
    msg.setDestination(11656U);
    msg.setDestinationEntity(102U);
    msg.arrival_time = 0.279658760247;
    msg.lat = 0.0390465661089;
    msg.lon = 0.588889960322;
    msg.z = 0.13055676866;
    msg.z_units = 91U;
    msg.travel_z = 0.657173608913;
    msg.travel_z_units = 51U;
    msg.delayed = 53U;

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
    msg.setTimeStamp(0.60526106975);
    msg.setSource(61943U);
    msg.setSourceEntity(123U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.971635410547;
    msg.lon = 0.0226600175514;
    msg.z = 0.251904482199;
    msg.z_units = 175U;
    msg.speed = 0.918074019998;
    msg.speed_units = 85U;
    msg.bearing = 0.19886244954;
    msg.cross_angle = 0.244002625387;
    msg.width = 0.0112819198618;
    msg.length = 0.116139714415;
    msg.coff = 170U;
    msg.angaperture = 0.633317800421;
    msg.range = 7168U;
    msg.overlap = 68U;
    msg.flags = 69U;
    msg.custom.assign("WFZIOOXZQGYXGOKDEYTFPCOWDLNXYKAMTBLRWBSXEKIHVHHEUOIMXDTZJADOAVBERKVSCWPKTWWHARHZKSDVMELKGUQCYXGJUAMVBRSFCFZZSWMHZFUGBGLCAPSSRRIDIENZLQNLINDXCEIRXTAWPXHFGIBVGIPZJ");

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
    msg.setTimeStamp(0.232862575679);
    msg.setSource(58235U);
    msg.setSourceEntity(18U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.224051170127;
    msg.lon = 0.729842919219;
    msg.z = 0.128028878293;
    msg.z_units = 10U;
    msg.speed = 0.671698362563;
    msg.speed_units = 248U;
    msg.bearing = 0.313928253411;
    msg.cross_angle = 0.165507560131;
    msg.width = 0.800928185124;
    msg.length = 0.749426370334;
    msg.coff = 254U;
    msg.angaperture = 0.502713901981;
    msg.range = 22601U;
    msg.overlap = 129U;
    msg.flags = 64U;
    msg.custom.assign("HXYCYDFBDBLJGWGWPIEXQRMOXMDILCZFMPNAAYWWNKCACUTMANUQJDQBPEMKDGIQZXTPJHSTHODKMJFJRYKOZUESRBKGSINQLNSCNTLJPHLGMAZZHDGAWLFEESICEOIRGAQAYRFWHNRJSHRHHHIGTNOLXZXWFVKLUVWBYVNKKVUDMIPJQZFICVFYSODZALBEVQEVNPUYTSWTCTOVSYLOZOKREQIXJX");

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
    msg.setTimeStamp(0.181135597439);
    msg.setSource(21527U);
    msg.setSourceEntity(242U);
    msg.setDestination(50164U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.239386873349;
    msg.lon = 0.68576756594;
    msg.z = 0.228776732232;
    msg.z_units = 131U;
    msg.speed = 0.262379411826;
    msg.speed_units = 23U;
    msg.bearing = 0.781988721335;
    msg.cross_angle = 0.129296278484;
    msg.width = 0.629893472078;
    msg.length = 0.407985485775;
    msg.coff = 30U;
    msg.angaperture = 0.0561904898822;
    msg.range = 16265U;
    msg.overlap = 117U;
    msg.flags = 107U;
    msg.custom.assign("YAATGBDJMNATRCCFGHVVRXRWBUCWIQVXWERNHEQCSLOPXGYQAIHWZLUEWIJMMADJBTMHVPCIYWRKONQVIEZDNEOMZLTQKTPATFSTKPCPDVWHSMCTAIRJGYSMONWGXDKGBVMOJYFUFDPGKSBXDUSVKUNFQCNRFELJZYTZPHFRXEOUXEWNYBABKBJTYPVOPUQBRELMZGKIZQIFXPILZDDNGHLHXF");

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
    msg.setTimeStamp(0.149946442047);
    msg.setSource(62112U);
    msg.setSourceEntity(133U);
    msg.setDestination(46796U);
    msg.setDestinationEntity(60U);
    msg.timeout = 10646U;
    msg.lat = 0.294632208184;
    msg.lon = 0.333082584361;
    msg.z = 0.251482285803;
    msg.z_units = 48U;
    msg.speed = 0.0556193100163;
    msg.speed_units = 89U;
    msg.syringe0 = 162U;
    msg.syringe1 = 242U;
    msg.syringe2 = 249U;
    msg.custom.assign("GUYSTHMGCXXPSNFWSQYDVVKQBRXH");

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
    msg.setTimeStamp(0.21240294492);
    msg.setSource(53284U);
    msg.setSourceEntity(40U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(153U);
    msg.timeout = 50151U;
    msg.lat = 0.484541016743;
    msg.lon = 0.0362711091951;
    msg.z = 0.77753389108;
    msg.z_units = 251U;
    msg.speed = 0.262339486705;
    msg.speed_units = 76U;
    msg.syringe0 = 43U;
    msg.syringe1 = 149U;
    msg.syringe2 = 101U;
    msg.custom.assign("DTRTTYKQTQUANOUJYUMRFWQCATIOSDVCPOQSLOHZRARECPUSEEPRWAJZIQTJVCKGRPFZDMAPHRYEZXWFVENYICDNFPJIUUEOIYNXWKARWMDGBBFZIEYXYSHDWDAHHPTKANVLLQGNXILFTMGJKFNBQBGYJBHFSQVNSIWMTXLHRJANSEDZLXOJDBBVBRQGTGSFWUXXAMLPGLOKVCZ");

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
    msg.setTimeStamp(0.114254778821);
    msg.setSource(57916U);
    msg.setSourceEntity(167U);
    msg.setDestination(41502U);
    msg.setDestinationEntity(178U);
    msg.timeout = 53374U;
    msg.lat = 0.76664329638;
    msg.lon = 0.491482696585;
    msg.z = 0.00458954733055;
    msg.z_units = 160U;
    msg.speed = 0.611571191926;
    msg.speed_units = 193U;
    msg.syringe0 = 129U;
    msg.syringe1 = 102U;
    msg.syringe2 = 58U;
    msg.custom.assign("KUMEKDPLLECRWUIXRNGFMJTHWVECXSFLBZPKWCAEFMAWQFHJXUYUWTNGVURL");

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
    msg.setTimeStamp(0.0536135018754);
    msg.setSource(1501U);
    msg.setSourceEntity(70U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.85739817872);
    msg.setSource(47499U);
    msg.setSourceEntity(80U);
    msg.setDestination(51849U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.388387450636);
    msg.setSource(4394U);
    msg.setSourceEntity(52U);
    msg.setDestination(15789U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.236686815735);
    msg.setSource(22684U);
    msg.setSourceEntity(227U);
    msg.setDestination(13828U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.476480089266;
    msg.lon = 0.447836555548;
    msg.z = 0.684115643785;
    msg.z_units = 63U;
    msg.speed = 0.0987143154356;
    msg.speed_units = 23U;
    msg.takeoff_pitch = 0.116240946886;
    msg.custom.assign("XNWQTQZFOSABZVLQFEWRCWAT");

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
    msg.setTimeStamp(0.763750273831);
    msg.setSource(585U);
    msg.setSourceEntity(40U);
    msg.setDestination(6U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.0984810660749;
    msg.lon = 0.429108045579;
    msg.z = 0.459714200617;
    msg.z_units = 192U;
    msg.speed = 0.103365629479;
    msg.speed_units = 32U;
    msg.takeoff_pitch = 0.772748771199;
    msg.custom.assign("JWAELQELFNUYUNTWHYJBZIMTUVHBHZAACMAXYZESGQLRQWIVJQDQOTKJXDCNKZGGXEWRSSXPRQANHKVBNMPYLUDQTUASOTOHPXTFQJNPVGYDITCTKLVMSAHLOLOGJXOXRRQERPFHAKIRUIUHDYFXSZCWWZILFFYGDHKZRJBSGPMPBYNLISEJSHRITCPZDWAWZFVTMMFEQMBCJSOEBCWYBXDCMYUIFZBCRAKUNNFEOVGVUJLKKNXMWD");

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
    msg.setTimeStamp(0.0604381881432);
    msg.setSource(8766U);
    msg.setSourceEntity(224U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.986146871451;
    msg.lon = 0.0660274990933;
    msg.z = 0.0180161375403;
    msg.z_units = 65U;
    msg.speed = 0.422580096961;
    msg.speed_units = 26U;
    msg.takeoff_pitch = 0.4297442906;
    msg.custom.assign("FLYAKVBQPJZXEERVURXXQCPJLHGWSPEDMEKELQYUXLIUWOHMRGFGZHTETLEAFMZGFIAYDURNVKUXZYZJSDGCBWYGPOEUSRRIZMKOJPFWMSVXUHRAPOYBWFVSOQHAIAECN");

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
    msg.setTimeStamp(0.130016155687);
    msg.setSource(64601U);
    msg.setSourceEntity(227U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.243788803989;
    msg.lon = 0.13934011351;
    msg.z = 0.549902638455;
    msg.z_units = 168U;
    msg.speed = 0.659427358735;
    msg.speed_units = 146U;
    msg.abort_z = 0.206476690148;
    msg.bearing = 0.0698093165737;
    msg.glide_slope = 195U;
    msg.glide_slope_alt = 0.160289754478;
    msg.custom.assign("AZLKTLTCUVIOBLLYPAACHBMJSNLNBDDSYDEEJDXWEAGGSRQPKYSHZNEDZYGGHNUVBJIZLICWLQCQPZCMWGYTMBOXIWRRCAZCWDBFVYUTNDMHVZDYIUUPPWVFAVZXMBJVBXOXCZRYXASQPAHWBSWVFLTOMKJRWFNKFYMHTGMDIQKXOAQTEKFIHIJQXXVRCOLEHTGFESOESERRVPNNKKTKYGKFJRQNMPUOQFGIAPJHDIMLGCSSTF");

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
    msg.setTimeStamp(0.575753444368);
    msg.setSource(34608U);
    msg.setSourceEntity(147U);
    msg.setDestination(55192U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.207970979576;
    msg.lon = 0.328209094;
    msg.z = 0.202333794119;
    msg.z_units = 106U;
    msg.speed = 0.017050132989;
    msg.speed_units = 147U;
    msg.abort_z = 0.519715610828;
    msg.bearing = 0.745743233953;
    msg.glide_slope = 70U;
    msg.glide_slope_alt = 0.927340340614;
    msg.custom.assign("XLQWNRTCSASMUDBECVTTFJAHIREKBKOKMBZSKLPKWKUJUXZYRMJBMPVFDXJHAZCXAITSFNAAAUFMEAYWQPGIRSIKIZERNARJRRDUFNXGLMQDKLQLSJQDUQCPXOIHVHFOCPTIMQQEVEMBMZYPEJSJQXAZECVNOLDUBYSIN");

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
    msg.setTimeStamp(0.283702394507);
    msg.setSource(2026U);
    msg.setSourceEntity(112U);
    msg.setDestination(599U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.902027474306;
    msg.lon = 0.711772213253;
    msg.z = 0.0504576512877;
    msg.z_units = 60U;
    msg.speed = 0.669049632285;
    msg.speed_units = 55U;
    msg.abort_z = 0.390589739565;
    msg.bearing = 0.136315055454;
    msg.glide_slope = 247U;
    msg.glide_slope_alt = 0.78049639405;
    msg.custom.assign("YQPWWBJKXZDETELOMPRVCEXOBLVAUQRWYSDMNGCWMEUCYYYDNRNSJRAWRWVYPZQATIGKKWIZZHLJZKDDSBSMGLKHGXLEFSMIWQPNFSEQIVRUIGXPAWARKNEHMFTFJFJFUZXSUNOUMHXCIZ");

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
    msg.setTimeStamp(0.219541946281);
    msg.setSource(30791U);
    msg.setSourceEntity(20U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.956961668914;
    msg.lon = 0.77618358599;
    msg.speed = 0.0104493205243;
    msg.speed_units = 32U;
    msg.limits = 248U;
    msg.max_depth = 0.339506317676;
    msg.min_alt = 0.15103584278;
    msg.time_limit = 0.214532868442;
    msg.controller.assign("TWPKRDPZYLHAXTMSBFJYRMMQHAERNBLEKFRQUPMMIWZTOCQUPMDVAEEHCNRIBZFYSMGLLLGJJHONCNJXBTUEUQMHYTURRZJVYIWKQJPYTXTZTGDQKOZNQMFOOJBVSXPUXMGWPZINWJOOTSGKISPLVRWRNRBUCFYKDDXAGZQNIVS");
    msg.custom.assign("FBTWIREPDEWPPUIOGFNMYKVUNDBELBVLSWTZQDFIINYAPVSTLWWSIMMCKRYFMZHBAXOSYXOVYRRXGUPJCSKWBWLCVHDHLQBGBZKLEGDUG");

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
    msg.setTimeStamp(0.611043117413);
    msg.setSource(5635U);
    msg.setSourceEntity(91U);
    msg.setDestination(64921U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.801074624838;
    msg.lon = 0.805641415835;
    msg.speed = 0.956449278107;
    msg.speed_units = 182U;
    msg.limits = 118U;
    msg.max_depth = 0.490681008759;
    msg.min_alt = 0.257470562114;
    msg.time_limit = 0.598335117701;
    msg.controller.assign("PKZBFGCTGHPCMWCKONFVYDMM");
    msg.custom.assign("NETEXJUGRILULHLSYIQIZOUZTKZRVVAKWMSRWYWZUNJXHVYBFYYXCEUGNWZZLXNZGVLYCRKDGYJPVHANUYJWCAQIQUMVQXDWWIMVWDZALKUSPCOSBHPOWSPEJHCFRFRBFHJABELCTATBAFESMETUFQYLSNOENDARRQNCXHGKTAKIFBRYIBMTZMQIKWJCGCOOFADDEQDPXEVKMCOXPGV");

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
    msg.setTimeStamp(0.141778456063);
    msg.setSource(21206U);
    msg.setSourceEntity(122U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.536404745146;
    msg.lon = 0.796866121237;
    msg.speed = 0.275844872569;
    msg.speed_units = 65U;
    msg.limits = 129U;
    msg.max_depth = 0.206692260983;
    msg.min_alt = 0.462577899027;
    msg.time_limit = 0.424509357266;
    msg.controller.assign("QAFREOFKRJGQZLOLFGVSGMBIIERMOVAQZSEPQTBNSKMXCGSXRSPMXJHHFGAZFTYHGVTGONOAWMDXDASDPQAVTVIYYCIMMCIZYEHIWPIHXJZTUFKSONCBGAPUUKXWLKRQUDJHDJAWDCVWWVIFHWGJKEAPUXDQRLZBONXTZQAMSPMBBTDQJTYJGDOPNULUOCELWLNCXCOYFKKPENFSLHXUTVNSKLKEPUBHEUJQRYNBLYRZTIEFNVDZZC");
    msg.custom.assign("ZPEDOWHWLRYAYDROYQBVILGIZETKCIWHAXRFPWBWSJQV");

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
    msg.setTimeStamp(0.469587966576);
    msg.setSource(60225U);
    msg.setSourceEntity(175U);
    msg.setDestination(11873U);
    msg.setDestinationEntity(93U);
    msg.target.assign("NNFWPZFOPVGFPMVXWEZHSHJDLEANKQPJEPFWVOCZPIICMJGQXSLBQKOLTTRSHDXELQTHCKKCSJQWNCBUQLVDRVRIAYPUZGSXGLUBMXMJVSZZGUXRLLDXRXHNKVITTWYHJZM");
    msg.max_speed = 0.40889342636;
    msg.speed_units = 158U;
    msg.lat = 0.240336404218;
    msg.lon = 0.501878583635;
    msg.z = 0.167301459156;
    msg.z_units = 246U;
    msg.custom.assign("UICGMNNUTMUWLNXCAVZHFHAIOBWNOFMWLFRAKAEVISGTDXKEYGJIEAVVS");

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
    msg.setTimeStamp(0.881369318257);
    msg.setSource(21022U);
    msg.setSourceEntity(49U);
    msg.setDestination(46221U);
    msg.setDestinationEntity(73U);
    msg.target.assign("JOPLGLUCNMMJYFLDRYTPDSFNGCZIRFKMAVUHTSHSGLJCMAZSIWDMLPJRBPKCAJLEWZZWERQRWOZDRABRGOYVQIKFUGETOIIUWOXJHUYWNYGHKRINQYLHSQDITQGNAMHASUXBSQUKMXBOPMFWCGBC");
    msg.max_speed = 0.173945388272;
    msg.speed_units = 97U;
    msg.lat = 0.512255837561;
    msg.lon = 0.334793259407;
    msg.z = 0.104813754805;
    msg.z_units = 215U;
    msg.custom.assign("JETATXOIXPGMDYUPTRBOKZNNNQYJSAOLEHTHJGICWVYRDEUGSLQUXPXDQZBZMNKJWHCIBQQYOAFNPWUILSFNUCOKBBSQXUIASMZFCAEKSSTQLPTCCDYDVQBNIEDZTHLELKCXVTMZVNHIGFNLLTFXGFJCEKRKKXRYWMZGSWYVMVRAHIZTPADBVPLHGRNQMHXPJZKJVOKOMOFWRZDHYJVBU");

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
    msg.setTimeStamp(0.0382732611793);
    msg.setSource(34980U);
    msg.setSourceEntity(104U);
    msg.setDestination(818U);
    msg.setDestinationEntity(129U);
    msg.target.assign("XUEADCHXLCTJBOBGTBXWYMDYVQRUDKDVTCEFJAJZNWIEFPYQSCEKYJVSMNLHVMVBXMPABCIOTSRXUACKZSAXLLTKMSZVHHNDQUAUPJACYNCFWUZMQAMFWGBLYMAEQDDEVSMSUUDWNITRNENZMKWJHBLQXYGKPNFNBYVPIRKWZPWLSGHEFROGPSJDQFZEOYFJVUTNRCIDRLTAWZXHJORUG");
    msg.max_speed = 0.560005438533;
    msg.speed_units = 244U;
    msg.lat = 0.924239949564;
    msg.lon = 0.817378253834;
    msg.z = 0.0108858838917;
    msg.z_units = 130U;
    msg.custom.assign("EAARRVCNCUMPWVVLOUVOKHNQJYBIINRBKIQBUTGNSVAYLUFJIKEVXJAJXPXCPSQXLRWXYGQBQRGZHWDTZHENHUEIRQLNERDOSMGIEDMDXOBZGRZFTFHQHTUFZOOTDKNPAFCVYYJFQGJIACIXDPJWKUHKSEBFZTPVEBAHGBLKTNGTOJKFWIESDECJKMD");

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
    msg.setTimeStamp(0.591382221214);
    msg.setSource(6034U);
    msg.setSourceEntity(246U);
    msg.setDestination(32602U);
    msg.setDestinationEntity(54U);
    msg.timeout = 58968U;
    msg.lat = 0.370186350673;
    msg.lon = 0.916139656034;
    msg.speed = 0.116190148425;
    msg.speed_units = 101U;
    msg.custom.assign("BOSNJKVYFTKCGUHEEKHALMUHMTJKRIVCXQZTXSDYSZGUKFKQYULYVTGNIMFLEAWON");

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
    msg.setTimeStamp(0.8422934275);
    msg.setSource(24799U);
    msg.setSourceEntity(103U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(82U);
    msg.timeout = 52648U;
    msg.lat = 0.18852692621;
    msg.lon = 0.271037585827;
    msg.speed = 0.8011358924;
    msg.speed_units = 66U;
    msg.custom.assign("OQGADSLQALBDBHEIOFNOEYXWEVUXXNYLRTBRYMLL");

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
    msg.setTimeStamp(0.784018699166);
    msg.setSource(48042U);
    msg.setSourceEntity(38U);
    msg.setDestination(55536U);
    msg.setDestinationEntity(173U);
    msg.timeout = 3041U;
    msg.lat = 0.834171586189;
    msg.lon = 0.88354620221;
    msg.speed = 0.122078206137;
    msg.speed_units = 120U;
    msg.custom.assign("SVOKIRHGAQVDOLEBOUYKWSKTVNCMKTMJFSPXOYVCOTAUTISQVWSGBFCVDSLYSZDKTABERKOHILMHFUCMJQHPLRJRZWRAHXPGCXXOBMIWNGTIYLGGJWBINKJNQVYXLZEWPSORXUDCMZCHRIHBDJYEEEABAUDHDJFCPUZAQPRMQRXBNNHIDNBUUFPNCLXT");

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
    msg.setTimeStamp(0.741627276871);
    msg.setSource(41588U);
    msg.setSourceEntity(86U);
    msg.setDestination(7492U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.367514084037;
    msg.lon = 0.433780079703;
    msg.z = 0.373357250866;
    msg.z_units = 72U;
    msg.radius = 0.140937319941;
    msg.duration = 31036U;
    msg.speed = 0.0282527039837;
    msg.speed_units = 177U;
    msg.popup_period = 65379U;
    msg.popup_duration = 54113U;
    msg.flags = 92U;
    msg.custom.assign("WKLNJVOXZIKGYBM");

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
    msg.setTimeStamp(0.333691264767);
    msg.setSource(7703U);
    msg.setSourceEntity(93U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.805400814356;
    msg.lon = 0.00917542816184;
    msg.z = 0.31732665083;
    msg.z_units = 93U;
    msg.radius = 0.819592029708;
    msg.duration = 51498U;
    msg.speed = 0.960898134773;
    msg.speed_units = 67U;
    msg.popup_period = 10805U;
    msg.popup_duration = 50684U;
    msg.flags = 74U;
    msg.custom.assign("HQMZZOYMKBGFMBSRBROESFWDOLLMFDNQJHGKPERXYGTK");

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
    msg.setTimeStamp(0.372055797633);
    msg.setSource(21687U);
    msg.setSourceEntity(249U);
    msg.setDestination(15059U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.605358853099;
    msg.lon = 0.143983128582;
    msg.z = 0.338135302707;
    msg.z_units = 27U;
    msg.radius = 0.508424454328;
    msg.duration = 32867U;
    msg.speed = 0.265389992609;
    msg.speed_units = 44U;
    msg.popup_period = 57004U;
    msg.popup_duration = 24865U;
    msg.flags = 106U;
    msg.custom.assign("JHEXAMAKWYNDUYKAFEHQWOTPLMTZXGMRQHLVFMXFVXLXYDMYKEBCMZAKVGRBFNNESCIACRCTNJXUPIOGBWYPLPREZJYLQRHRQVZWJMTLTZEUWGYSEQYNHBHZDNCUPJAFODLRGQNTOJDFJOAJDSOTIACVDMGIAPVDGLSFLBPONDWOVQEFCHOSSKRZOJEBIZIB");

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
    msg.setTimeStamp(0.446529284452);
    msg.setSource(46193U);
    msg.setSourceEntity(127U);
    msg.setDestination(58262U);
    msg.setDestinationEntity(51U);
    msg.timeout = 52566U;
    msg.lat = 0.412654885728;
    msg.lon = 0.603709403159;
    msg.z = 0.186837199259;
    msg.z_units = 79U;
    msg.speed = 0.230669260093;
    msg.speed_units = 21U;
    msg.bearing = 0.697713434125;
    msg.width = 0.334894967007;
    msg.direction = 248U;
    msg.custom.assign("MSQBUTMXJAQQWGMEMVEFVYGBODMATHUCSNPSKERNNRNHDWIRWZAHHAFLZKYNCGROEFCYMWWLVNAJEWGFLOMGLVKBJPIOXCYJTKFTGIIRJKDUPRPAUEKLONCKGUMHICYSIAHSWXDQBTNIUJGZKBBFXXACWZZYXZROZJIVGJYPHELBOFRKHTIKPPQLDLSBXZSSTVJ");

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
    msg.setTimeStamp(0.283484947798);
    msg.setSource(104U);
    msg.setSourceEntity(63U);
    msg.setDestination(57077U);
    msg.setDestinationEntity(108U);
    msg.timeout = 60412U;
    msg.lat = 0.679720038219;
    msg.lon = 0.834883663414;
    msg.z = 0.0290014458672;
    msg.z_units = 204U;
    msg.speed = 0.409883191484;
    msg.speed_units = 71U;
    msg.bearing = 0.197605695533;
    msg.width = 0.464856403183;
    msg.direction = 83U;
    msg.custom.assign("BDAZJKYGODUCTIXOVWBMYMRJELHSEWVXJZDQZLNNTCQWISPFRGKTIHQOHAAFVYKFGTLPEDUPBFQEILVAAIHYDMJLMV");

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
    msg.setTimeStamp(0.556743291187);
    msg.setSource(871U);
    msg.setSourceEntity(88U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(60U);
    msg.timeout = 61756U;
    msg.lat = 0.416823954362;
    msg.lon = 0.112252984989;
    msg.z = 0.555870618124;
    msg.z_units = 167U;
    msg.speed = 0.850337355331;
    msg.speed_units = 145U;
    msg.bearing = 0.835597673044;
    msg.width = 0.668170084055;
    msg.direction = 62U;
    msg.custom.assign("GETKUIUGUPWECQFTAIVZSHJBQFPNNVFNUTWHMBBLRLESKNFZDNMPSYBVAHFUKIQDOOOPVQSFKHKELIYWGVADRUNVRZHCDQXLPGDPTYAISCQDHGHYICXJUS");

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
    msg.setTimeStamp(0.676551225672);
    msg.setSource(37819U);
    msg.setSourceEntity(191U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(226U);
    msg.op_mode = 150U;
    msg.error_count = 253U;
    msg.error_ents.assign("HLQTUGVLUSVCDYWKRNQXRLKFICQMJFPBSHNWDSEGCBZRLOIPFTGKOUNVTGTASAICBSJLHXBOKPJNEGVDTYDRCWYJERKDKZYZFKGLDFZZCVHGKXLINEBBKXHGYAMOSAS");
    msg.maneuver_type = 60858U;
    msg.maneuver_stime = 0.115251516928;
    msg.maneuver_eta = 35592U;
    msg.control_loops = 1720087580U;
    msg.flags = 114U;
    msg.last_error.assign("TXROMNKORTJYLTVHGDHAAQFKQPFHFBWGXFSCCKCZLIJKCMFVDPBGJHMCNCUULARXLQAOJJZNQRYFQRYBDKJAEDPXWUTONGMXANWZSOPMUBIRGRQEDHTEJIEZZGXZBEVVUTPEIWEAIWDRANANYWYPNMFDWSIGDYCQBHCUAOSMESMFGSIVVUHBPSQYSJTKPLVUYTWREJDI");
    msg.last_error_time = 0.307199985974;

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
    msg.setTimeStamp(0.589935073446);
    msg.setSource(55451U);
    msg.setSourceEntity(91U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(98U);
    msg.op_mode = 35U;
    msg.error_count = 153U;
    msg.error_ents.assign("TWMIFIKTLOFOAWSHVGCXXHUXKYEKFFBNYUCNBVTOLEKAMBBHIRDHPXNVMRIGGQTERMMRVKJEZYPNZLCJHTCDSPZDWMYQOWIJWXTVNTOP");
    msg.maneuver_type = 59537U;
    msg.maneuver_stime = 0.448798453089;
    msg.maneuver_eta = 39134U;
    msg.control_loops = 2676806977U;
    msg.flags = 164U;
    msg.last_error.assign("SPTGKDBVMEUEZAVKVYXZRGRNASDZZYJTLKWVXKCMRIQHCLRGBVASEALIIFRKXSJUCRWIPAMDOSOVKAXCYDFYRKGVUYLBUWNNDQOBDTVDCEFWIQPMQIUJMOUEFRPGMCJLBHIARUOFJP");
    msg.last_error_time = 0.145840678491;

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
    msg.setTimeStamp(0.139644688516);
    msg.setSource(54550U);
    msg.setSourceEntity(37U);
    msg.setDestination(47719U);
    msg.setDestinationEntity(68U);
    msg.op_mode = 20U;
    msg.error_count = 31U;
    msg.error_ents.assign("TESHHEIMMPUSQJHVLJTNCCBRMMLOJJSKPYEIQINRFEFUSOGIFECRWCQVMUWOQZGAIHBQNZALYOPHYCZXXLRJRSNUANEYODKFKRRWOTEWSBAPVQYFGK");
    msg.maneuver_type = 3235U;
    msg.maneuver_stime = 0.470020735795;
    msg.maneuver_eta = 56819U;
    msg.control_loops = 1054320707U;
    msg.flags = 142U;
    msg.last_error.assign("IGFIEOYYMMDMFD");
    msg.last_error_time = 0.777690175366;

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
    msg.setTimeStamp(0.00643139685001);
    msg.setSource(52747U);
    msg.setSourceEntity(165U);
    msg.setDestination(38526U);
    msg.setDestinationEntity(17U);
    msg.type = 143U;
    msg.request_id = 64056U;
    msg.command = 79U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.553327001991;
    tmp_msg_0.lon = 0.434403061325;
    tmp_msg_0.z = 0.880278514606;
    tmp_msg_0.z_units = 17U;
    tmp_msg_0.speed = 0.368922724737;
    tmp_msg_0.speed_units = 71U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.963879029056;
    tmp_tmp_msg_0_0.lon = 0.0883635301579;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OIRLXMITCLMQVMBRSUYDBVSWLUHCPYRBGOACUHVLLXPFHZSQFFZGAWGONWPBOHDUUYDWHOUKQSDDYQEOLVJIANRSFVKHNLCNRFBRQCFUIEYRXXKRNKW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55675U;
    msg.info.assign("GMVSFRTFTHLIDIAGNPGYVPKALHWYZODWTSNPENZXCXFBCQMSQCMTDUPEOEXBNDOKYYRLOBJUGSHCIAVKDLKTSSWJDWEFKNMSETQLFIRBAVIQAUFNHFRPIGZOZNXVKGPTAPBFAFKQOCEDGAGEHHYXRHHSRDZJICRXOGJPBKCONTWEGZOIZQBQIVVLKBVUIHENZHUR");

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
    msg.setTimeStamp(0.569191293662);
    msg.setSource(1215U);
    msg.setSourceEntity(118U);
    msg.setDestination(57799U);
    msg.setDestinationEntity(33U);
    msg.type = 64U;
    msg.request_id = 23473U;
    msg.command = 20U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 3393U;
    tmp_msg_0.rpm = 0.625244396312;
    tmp_msg_0.direction = 54U;
    tmp_msg_0.custom.assign("PHYPDILBLZDUXTHLIBZVSYJDFWBPKUTLXXKVRCPJOUSTBREZEHNKZEVSAWFHXGKHIQLHSVGTMDBEC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46844U;
    msg.info.assign("PDVCKUGCQPOFBIFXHDRAJNCWWGCWGSVOMRGLFNSITRLBMKNIPZXGJSSMLLMPXSFLJOVIIILMQJVFWBMJDWXIKAOBFPDTWEUZZPERUUBFYZQMACOYMCYJHJSXVTAVICQQECXKPHBHNTIEYWEYQRAOHYEURUXVSUFNRPLAGQOKVWGWYMSOLLDTE");

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
    msg.setTimeStamp(0.31802171796);
    msg.setSource(47830U);
    msg.setSourceEntity(105U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(135U);
    msg.type = 119U;
    msg.request_id = 30764U;
    msg.command = 251U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 62334U;
    tmp_msg_0.lat = 0.933925721476;
    tmp_msg_0.lon = 0.428209917057;
    tmp_msg_0.z = 0.118044981556;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.pitch = 0.00965610641214;
    tmp_msg_0.amplitude = 0.984131276069;
    tmp_msg_0.duration = 56779U;
    tmp_msg_0.speed = 0.42616715482;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.radius = 0.575983139581;
    tmp_msg_0.direction = 32U;
    tmp_msg_0.custom.assign("PUEVUXKOCEXKOZUZIYSYSXAARGNDHEFJIHYTRCQVMEYWHDJPBMZVYWALIVQZMOFCIPECDBNJRKDUQARHNVJRJMQWWTRKLYMHTMTFQQCONNVYHOZGWOFBGBOFAEDXFDEIATZAKGICDIXUBVDYYPTPDGV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12699U;
    msg.info.assign("DPCQIESVTUINQVXZGKSWNXKSECEOBLTQVJGUQEDHRSQEMVXNJWDGVEJKXSTKAQXLXYWZMQOPQQALBBYYBOMIVDJYNDIWXYJIEMLIUNDAFWWDSLVMCJYFFSSINGUSAZSBRJN");

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
    msg.setTimeStamp(0.503222673406);
    msg.setSource(18414U);
    msg.setSourceEntity(133U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(66U);
    msg.command = 244U;
    msg.entities.assign("SEFTODAURMYOCNIMWUIPGYRKBZMEXMEHKCAHFKTKGJQRSCLXUCXRMQSBJWGNGYGPZSUTUUKSKNZCVLVPYPQAKREQIMCVWSAIGHOMDHVCFLMTKXHQNAZPFLFRARAUTDWNHXZKXHJFGTOITNYBZZGTNJPPILPQCOUZAXSSHOQLFABCVBVOIHOCNWOWJVLDLBGYFYAMJID");

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
    msg.setTimeStamp(0.90149833883);
    msg.setSource(57828U);
    msg.setSourceEntity(78U);
    msg.setDestination(243U);
    msg.setDestinationEntity(175U);
    msg.command = 244U;
    msg.entities.assign("JNXXOFZLNGQKOCJURQYJZLKMOSDRFPWCVOFZZXKEDOKAMBEQZHEBBVHPGLGXNJFXLDTRFIKZLBCPRCOWI");

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
    msg.setTimeStamp(0.979538764298);
    msg.setSource(23305U);
    msg.setSourceEntity(63U);
    msg.setDestination(62282U);
    msg.setDestinationEntity(217U);
    msg.command = 208U;
    msg.entities.assign("DFIJORJAAMGLZXUJUTFLXQVIEQWBMDJDEEXXKQSBMFZTYLFNHVRUVBVMYWGQHNKZFWBXMT");

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
    msg.setTimeStamp(0.625956755955);
    msg.setSource(35714U);
    msg.setSourceEntity(43U);
    msg.setDestination(59640U);
    msg.setDestinationEntity(103U);
    msg.mcount = 0U;
    msg.mnames.assign("FZYOAKBIRMBQAKEBTRHLTVHACTHJCEJTZLURULEYUZDIUDLYZDHYEYVFMOMVXINXNRKGNOBWQBRPDTQOUPYTLNKLQKSFXNITFZTAZQJRGXUYASIDIIQDGCUHNYSMXWRQMHVMXHUFFIOFSAOAHGXOYCCSBFCSVPXVRG");
    msg.ecount = 137U;
    msg.enames.assign("UGJVHHNBGMADXZRSIQUZGSXAWZXOORWRDDIYSWRMZIIMVCBJFMKBFNFJGPQOVAQUKFVTDPMCDFBKDYYFOYMSTFQAKWVHGTNVKLJCWYEKDIEIEJUYEACJZXBOAFTK");
    msg.ccount = 5U;
    msg.cnames.assign("YCRJIFSGGOOMZVYIPCFMJVUTITAHWKDWQRWRTLGQHDVTUEZWB");
    msg.last_error.assign("FAEKHFQXKVLNEIJLCHAPZMRNBXDVTMTUIGSFSEFSRGJTCTCMZWNPBIEWSIXCVLGSBYIDLMZEOADXDKYDZDMUTSVTHJBLBRYASJGSRYTQOQPAUVIPCQJMPZAYKJKYKSJAWFOKNNCTDNTQOANBFIY");
    msg.last_error_time = 0.0677095150692;

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
    msg.setTimeStamp(0.480390277471);
    msg.setSource(35725U);
    msg.setSourceEntity(205U);
    msg.setDestination(983U);
    msg.setDestinationEntity(220U);
    msg.mcount = 96U;
    msg.mnames.assign("FBAAXGIFEIOZWKDDFVINSGEFVLJVQATFQVHDGCLRTHLZPDDYVWBONEWIYURPLAOMEXJMBFXYEZN");
    msg.ecount = 174U;
    msg.enames.assign("TIQOILBPWOZVQIBFOOKLCFBNWEGNZGTWHGSWRLLAITHSKESXRZRQBMZJBBURSDFFDPUDKWDYJUWROKGFYNQNJRGOPOPWEGPJWXAPDA");
    msg.ccount = 6U;
    msg.cnames.assign("LMILPLKHYGQCMHBAJSPCSBUJRRPSXIATJYRJEWGWQFLNCBANQXWOBGJQXKBZNBVDRHAVPVVHZZXZYCXKUUMYUFEPIYOCVSDULWAANULSTYTTFRQZCTMIKMEKEJXKWDOHHQVOJAZUDJEKFDUEGJELRDSXSVFFYSCOLIKMIWUPWNGUOVABWNBKAQTIMELHYGRTBHOKRTXTNFGR");
    msg.last_error.assign("PKGTYBZGHJZEPTWNHWTQDKJPFWAGAGLSECQXBUBINHMFLBMISRUFMYEXWQORMJDRNDSVOCJZYYDZJKQWOWKHANJHXBUYGCGINGNWLTXEHQYYYKUQZFAPQNXFBMORBPKUARHZSCAMYUBITFGSF");
    msg.last_error_time = 0.44984964936;

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
    msg.setTimeStamp(0.363533867867);
    msg.setSource(56977U);
    msg.setSourceEntity(89U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(231U);
    msg.mcount = 175U;
    msg.mnames.assign("EJMRUPWQKTONGXXHCEGWLVCKEQLJBKZWNPKYVLQLXVWISPJBGOQXAPHOMAJPSFEJCVFBUDMUSDAWTCEGMFTOOKCEAXNTNLUPSBBIOKZZFHRYTQHOTAYPLWIDUCNYMYNINSDHBSDAPDHZRKWSPZISOPHCAUJYQIBJGRZDWIYNAFFERKFXMXZRFGBSKYBCEVWMDHNRGXDMELYMQQBKZJNOXVVTRLVWOSEZVFITZUGLHULXU");
    msg.ecount = 92U;
    msg.enames.assign("EJYAOKTIXBICWDVOLCKRLXGPMUESICQKRUFZG");
    msg.ccount = 159U;
    msg.cnames.assign("YAYWBNQUVVCAIFOELEZROFWKXPHGJUETCUPCNKENSBTGJMLMQZZYRFSXESTH");
    msg.last_error.assign("PGNTYFFDXKLWAPHNICRUYTLKWTOOIIZHBUTWRPFVW");
    msg.last_error_time = 0.774821722797;

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
    msg.setTimeStamp(0.882065069133);
    msg.setSource(45191U);
    msg.setSourceEntity(62U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(144U);
    msg.mask = 80U;
    msg.max_depth = 0.395749939494;
    msg.min_altitude = 0.936264940796;
    msg.max_altitude = 0.358614437454;
    msg.min_speed = 0.456180885244;
    msg.max_speed = 0.237913060078;
    msg.max_vrate = 0.303482577623;
    msg.lat = 0.680636029551;
    msg.lon = 0.740258571323;
    msg.orientation = 0.0851369057701;
    msg.width = 0.708175959862;
    msg.length = 0.148793645131;

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
    msg.setTimeStamp(0.169634196597);
    msg.setSource(20092U);
    msg.setSourceEntity(58U);
    msg.setDestination(3362U);
    msg.setDestinationEntity(28U);
    msg.mask = 29U;
    msg.max_depth = 0.887113063349;
    msg.min_altitude = 0.686372573961;
    msg.max_altitude = 0.297119001464;
    msg.min_speed = 0.0524959056473;
    msg.max_speed = 0.775630595177;
    msg.max_vrate = 0.325677876305;
    msg.lat = 0.9586812046;
    msg.lon = 0.102025091193;
    msg.orientation = 0.665655556797;
    msg.width = 0.659329335695;
    msg.length = 0.491280574294;

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
    msg.setTimeStamp(0.204884596722);
    msg.setSource(41150U);
    msg.setSourceEntity(170U);
    msg.setDestination(32049U);
    msg.setDestinationEntity(32U);
    msg.mask = 159U;
    msg.max_depth = 0.581438354154;
    msg.min_altitude = 0.703488318233;
    msg.max_altitude = 0.539443350326;
    msg.min_speed = 0.504132032978;
    msg.max_speed = 0.355875059905;
    msg.max_vrate = 0.0623719407877;
    msg.lat = 0.799607324162;
    msg.lon = 0.602681099662;
    msg.orientation = 0.742466785241;
    msg.width = 0.164476850729;
    msg.length = 0.103939838921;

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
    msg.setTimeStamp(0.054931566589);
    msg.setSource(23556U);
    msg.setSourceEntity(201U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.792526765428);
    msg.setSource(23611U);
    msg.setSourceEntity(134U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.969425781016);
    msg.setSource(57805U);
    msg.setSourceEntity(99U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.0417226827124);
    msg.setSource(6752U);
    msg.setSourceEntity(244U);
    msg.setDestination(4301U);
    msg.setDestinationEntity(191U);
    msg.duration = 51327U;

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
    msg.setTimeStamp(0.718080484588);
    msg.setSource(15767U);
    msg.setSourceEntity(128U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(43U);
    msg.duration = 33975U;

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
    msg.setTimeStamp(0.911535960835);
    msg.setSource(36645U);
    msg.setSourceEntity(224U);
    msg.setDestination(53771U);
    msg.setDestinationEntity(23U);
    msg.duration = 30525U;

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
    msg.setTimeStamp(0.828399269174);
    msg.setSource(940U);
    msg.setSourceEntity(64U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(152U);
    msg.enable = 226U;
    msg.mask = 2152584818U;
    msg.scope_ref = 1445351037U;

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
    msg.setTimeStamp(0.708932934276);
    msg.setSource(26501U);
    msg.setSourceEntity(74U);
    msg.setDestination(20699U);
    msg.setDestinationEntity(11U);
    msg.enable = 111U;
    msg.mask = 3412582510U;
    msg.scope_ref = 257654285U;

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
    msg.setTimeStamp(0.676009694376);
    msg.setSource(8U);
    msg.setSourceEntity(28U);
    msg.setDestination(183U);
    msg.setDestinationEntity(106U);
    msg.enable = 34U;
    msg.mask = 1732644100U;
    msg.scope_ref = 1714178319U;

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
    msg.setTimeStamp(0.276338630359);
    msg.setSource(31093U);
    msg.setSourceEntity(140U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(218U);
    msg.medium = 233U;

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
    msg.setTimeStamp(0.458030970488);
    msg.setSource(34905U);
    msg.setSourceEntity(206U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(81U);
    msg.medium = 49U;

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
    msg.setTimeStamp(0.153804426027);
    msg.setSource(37681U);
    msg.setSourceEntity(241U);
    msg.setDestination(32218U);
    msg.setDestinationEntity(202U);
    msg.medium = 113U;

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
    msg.setTimeStamp(0.654701991351);
    msg.setSource(37892U);
    msg.setSourceEntity(93U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(180U);
    msg.value = 0.892738244722;
    msg.type = 195U;

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
    msg.setTimeStamp(0.275216144703);
    msg.setSource(6076U);
    msg.setSourceEntity(246U);
    msg.setDestination(4431U);
    msg.setDestinationEntity(193U);
    msg.value = 0.132319752055;
    msg.type = 4U;

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
    msg.setTimeStamp(0.443493787433);
    msg.setSource(64569U);
    msg.setSourceEntity(127U);
    msg.setDestination(21036U);
    msg.setDestinationEntity(28U);
    msg.value = 0.458137916516;
    msg.type = 199U;

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
    msg.setTimeStamp(0.0675585665505);
    msg.setSource(52509U);
    msg.setSourceEntity(80U);
    msg.setDestination(14842U);
    msg.setDestinationEntity(104U);
    msg.possimerr = 0.643705243938;
    msg.converg = 0.509864025392;
    msg.turbulence = 0.107288554029;
    msg.possimmon = 94U;
    msg.commmon = 46U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.119233062689);
    msg.setSource(36138U);
    msg.setSourceEntity(177U);
    msg.setDestination(46439U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.956346927572;
    msg.converg = 0.275850161996;
    msg.turbulence = 0.310185749253;
    msg.possimmon = 231U;
    msg.commmon = 180U;
    msg.convergmon = 30U;

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
    msg.setTimeStamp(0.51182029152);
    msg.setSource(46079U);
    msg.setSourceEntity(24U);
    msg.setDestination(51401U);
    msg.setDestinationEntity(202U);
    msg.possimerr = 0.226213157951;
    msg.converg = 0.709940032173;
    msg.turbulence = 0.122302848502;
    msg.possimmon = 205U;
    msg.commmon = 164U;
    msg.convergmon = 183U;

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
    msg.setTimeStamp(0.782036263785);
    msg.setSource(60882U);
    msg.setSourceEntity(86U);
    msg.setDestination(17970U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 34U;
    msg.mode.assign("BVZDHKPHYACRBYZZUIRZKXENKACSXXVWKQDHJQSFIHTAEIJRPULHIVTCYHVKXNAHALZGUVYVKUSJYFNMIUADDRJYMBMZNIYGCSLKFEXEQDSNPTGKBFTBWMWDTQGXDHFWOLEIXMFHGCEMMQDGPQQOISMVGNLUWDJPZACFEGJZSSRPOPRUOWCFXBKLJUTJUAVKBLNCBLHOWFRJOJRUOYXANBWYOTDMTVZRQPCPLZYLTRFOVENBIOENPSGQSMT");

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
    msg.setTimeStamp(0.427829077884);
    msg.setSource(61124U);
    msg.setSourceEntity(88U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(107U);
    msg.autonomy = 65U;
    msg.mode.assign("DEAGZMLFKCXQVBVQEMGAFAHPSOMYGMWOJOGYRHLUPAUWJKDGZTVIDVMOOPFHRHLKDHFQPBZJSZMAYUFFMFCCUTUWLNHPLLMKBUCGLWWGBKQBTIWCETADSTPKKSHEZFIXZNPWXCEXYNDKIQPSG");

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
    msg.setTimeStamp(0.206221121611);
    msg.setSource(7137U);
    msg.setSourceEntity(115U);
    msg.setDestination(17943U);
    msg.setDestinationEntity(134U);
    msg.autonomy = 155U;
    msg.mode.assign("YMTKZIBKMPWNZYRWOMRXPROSPGOIEUINIYWXTZSALVSTIFURIHBEBIPDOMDBTGZQLWCGWEKNXKFRCYNNABQHSVCYJYBJVOXWIDFUCUTJLJYRODALCLUXLQUFOHVPZAUDYSQPKZFHEPFJMNUQJRHGJZKWRUTGSENGOMNHCOGSAVHMRLSEIXKGCHLPFXKDUWVZSLVFTFGWPMQYXRLGTWJ");

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
    msg.setTimeStamp(0.641412321113);
    msg.setSource(30297U);
    msg.setSourceEntity(205U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(62U);
    msg.type = 106U;
    msg.op = 144U;
    msg.possimerr = 0.951754163534;
    msg.converg = 0.669317569507;
    msg.turbulence = 0.311893266855;
    msg.possimmon = 57U;
    msg.commmon = 123U;
    msg.convergmon = 83U;

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
    msg.setTimeStamp(0.934768864156);
    msg.setSource(64299U);
    msg.setSourceEntity(111U);
    msg.setDestination(31121U);
    msg.setDestinationEntity(230U);
    msg.type = 137U;
    msg.op = 49U;
    msg.possimerr = 0.337519016747;
    msg.converg = 0.655948501501;
    msg.turbulence = 0.714215520791;
    msg.possimmon = 238U;
    msg.commmon = 139U;
    msg.convergmon = 130U;

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
    msg.setTimeStamp(0.06643464109);
    msg.setSource(48009U);
    msg.setSourceEntity(20U);
    msg.setDestination(11713U);
    msg.setDestinationEntity(8U);
    msg.type = 239U;
    msg.op = 196U;
    msg.possimerr = 0.737635988565;
    msg.converg = 0.511868051972;
    msg.turbulence = 0.813540885548;
    msg.possimmon = 134U;
    msg.commmon = 69U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.804586965107);
    msg.setSource(14140U);
    msg.setSourceEntity(25U);
    msg.setDestination(35441U);
    msg.setDestinationEntity(161U);
    msg.op = 0U;
    msg.comm_interface = 204U;
    msg.period = 20178U;
    msg.sys_dst.assign("KHQSATIBANNKMQWBHKFXIGXPMUDWGUFPPWUQODEPIXRHCCMZRRUHPVIQYUUQCGJKIYWDFZCVXYAZGQZQJUSBJJTGXBMEMRCEDDTKOFEZZMVIMWMFCGLTWLEQRQPIBSYLCAXGOGEHEYYRXPDERLAVBGBJSWFAIDZOVYYKXUBB");

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
    msg.setTimeStamp(0.10735428255);
    msg.setSource(19070U);
    msg.setSourceEntity(250U);
    msg.setDestination(32851U);
    msg.setDestinationEntity(142U);
    msg.op = 146U;
    msg.comm_interface = 105U;
    msg.period = 39030U;
    msg.sys_dst.assign("DAHTQGMFKMEQT");

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
    msg.setTimeStamp(0.851594478826);
    msg.setSource(17308U);
    msg.setSourceEntity(208U);
    msg.setDestination(47398U);
    msg.setDestinationEntity(240U);
    msg.op = 16U;
    msg.comm_interface = 191U;
    msg.period = 46841U;
    msg.sys_dst.assign("PIRDSWHKCYEIVOIBCWGKYXYIXAOGKAFEASMQUVEBLTSP");

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
    msg.setTimeStamp(0.211002808467);
    msg.setSource(24021U);
    msg.setSourceEntity(157U);
    msg.setDestination(45759U);
    msg.setDestinationEntity(168U);
    msg.stime = 3903465859U;
    msg.latitude = 0.296054909743;
    msg.longitude = 0.970052962383;
    msg.altitude = 39350U;
    msg.depth = 14469U;
    msg.heading = 52619U;
    msg.speed = 1776;
    msg.fuel = -35;
    msg.exec_state = -77;
    msg.plan_checksum = 11518U;

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
    msg.setTimeStamp(0.138815380166);
    msg.setSource(3834U);
    msg.setSourceEntity(74U);
    msg.setDestination(3131U);
    msg.setDestinationEntity(199U);
    msg.stime = 632335310U;
    msg.latitude = 0.667150115717;
    msg.longitude = 0.0326194617726;
    msg.altitude = 33802U;
    msg.depth = 59723U;
    msg.heading = 26912U;
    msg.speed = 29316;
    msg.fuel = 103;
    msg.exec_state = -34;
    msg.plan_checksum = 63940U;

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
    msg.setTimeStamp(0.592935408134);
    msg.setSource(6151U);
    msg.setSourceEntity(5U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(70U);
    msg.stime = 1381209824U;
    msg.latitude = 0.698909655043;
    msg.longitude = 0.396091891998;
    msg.altitude = 35517U;
    msg.depth = 33178U;
    msg.heading = 561U;
    msg.speed = -31787;
    msg.fuel = -67;
    msg.exec_state = 70;
    msg.plan_checksum = 61838U;

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
    msg.setTimeStamp(0.888818147755);
    msg.setSource(52364U);
    msg.setSourceEntity(191U);
    msg.setDestination(26351U);
    msg.setDestinationEntity(36U);
    msg.req_id = 50256U;
    msg.comm_mean = 189U;
    msg.destination.assign("XAPDVQEVPDQAAPFNVKFCTVAHBHROSZZEOLLPYLUNNMIJJBMFCBUMQFOXRWNHSMXIZUWMTI");
    msg.deadline = 0.754315303865;
    msg.range = 0.675707160024;
    msg.data_mode = 26U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 46U;
    tmp_msg_0.text.assign("UMHNPLEGQNJPQEBZRGGTJONAELRUQIPYDUOKOOCMRYVHBVRADNWEDEFKESZYSKPJYNQWY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HLNQGXCMHVNEOJQIRYCXEIJDVVIZRDPQMNURBAWNBOAGZZNXHIGMPHDTKWJZYCSURJCYDBWBTMUFWEBRCXDDVTLYYPINGPAXULUWCCRABEIDXTFPDWCZZOEAFPSMVYSOPUBKNFSYZSIHWSQANMKKPSCTTUMOVHLEFXQFYJLSJIAHGGLKWSRHHZPRPLXQZGQTJFDUTOBXQEVKVANMEFXZMGQABSG");
    const char tmp_msg_1[] = {-93, -127, -96, 42, 49, -99, 106, -67, 31, 89, -23, 81, 68, 36, 51, -47, -107, -110, -56, -80, -38, -3, 18, 24, -5, 122, 37, 109, 73, -33, -60, -18, 80, 108, -120, 124, 12, -29, 73, 69, 31, -30, -24, -47, 113, 82, -119, -86, 23, -51, 117, 97, 106, -84, 25, 68, 72, -113, 22, -84, -69, 33, 53, 94, -80, 106, -90, 126, 33, 85, -45, 116, -125, -8, -89, 69, -39, 52, -45, -124, 22, 109, -44, -54, -45, 119, 122, -39, -33, 27, -102, 91, 32, -49, 3, 88, 119, 9, 24, -124, -47, -100, 16, 53, 25, -68, -79, -73, 21, -45, 70, 95, -75, -4, 1, -98, -120, 51, 38, 13, -79, 7, -119, 48, 63, 57, 25, 110, 55, 4, -128, 50, 102, 103, -67, -97, -1, 3, -89, -72, -121, 122, -112, 33, 57, 20, -74, 43, 105, 109, 18, 101, 110, 100, 4, 62, 90, -79, 33, -67, 91, 29, -113, 98, -57, 25, -47, -110, -90, 3, 9, 101, 31, -60, -48, -9, 8, 99, -30, 110, 30, -78, -97, 66, -38, -69, 53, -6, -41, 98, 61, 32, -77, 84, -26, 83, 20, 13, 45, -16, 42, 51, 124, -117, -39, 76, 107, 111, 124, 52, -70, 45, -112};
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
    msg.setTimeStamp(0.0956750461931);
    msg.setSource(53899U);
    msg.setSourceEntity(221U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(173U);
    msg.req_id = 20166U;
    msg.comm_mean = 107U;
    msg.destination.assign("SWKNWDPUJPUHJLIRQEUPCFQTPYBXMHMOE");
    msg.deadline = 0.0706798451446;
    msg.range = 0.378443201113;
    msg.data_mode = 128U;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 7623U;
    tmp_msg_0.destination = 9999U;
    tmp_msg_0.timeout = 0.332778111062;
    IMC::VehicleMedium tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.medium = 150U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GVXYODAUEYLDVZLJAMCTSNXDAFCKXZPURBJQWEPSKPNYBZEPTGLFGICLNRGYOMRAZPMCPBKQQGMLJWIASVRKHBZUSUDKUCPFWQYKMFWFYJZQHKMOWMHESIRHLMTINIDUQAOXTCVDXNOTIVWDEBWSZLERGFWYTGHMXETNHQVXBWGHRIC");
    const char tmp_msg_1[] = {119, 16, 44, -32, -8, -53, 61, 43, 94, 76, 78, -107, 78, -104, -27, 47, 92, 102, -103, 83, -35, 72, 108, 67, -10, -96, -89, -63, 84, -90, 46, 10, 72, 10, -33, -40, 49, 16, -85, -89, 49, 39, 19, -34, 10, 47, 31, 106, 21, -33, 116, 105, 126, -127, -31, 79, 16, 126, 105, 88, 77, 30, -40, -9, 104, 48, -1, -111, -50, -2, -21, 83, -106, -13, -1, -73, -25, -5, -13, 6, 108, 91, 79};
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
    msg.setTimeStamp(0.00913998876718);
    msg.setSource(4896U);
    msg.setSourceEntity(80U);
    msg.setDestination(17024U);
    msg.setDestinationEntity(53U);
    msg.req_id = 63521U;
    msg.comm_mean = 118U;
    msg.destination.assign("HZILSTFDFDYDPBHGPURUKJUWQDRVFSAYRUMKBXYDHOTAMYVZPMBUUMTQWRGEGHYSFCMCGNROCWIFRTRLELFXWKNDMGFAJXZJEVHUAHGXJLCOJQVPFZDTWYCDTZBKTVZNSSWVZGYXMGVSSYOTAPQIGSQNJHLLXRBEEIEWQMDOXCSJNNBECPUBHIOKZGLUICQQLWMDHQPEJHKOPEBPMJBXOCTIFKBNAEPAULVQCOKVYYLXTNJZAFVISWKAA");
    msg.deadline = 0.599923398377;
    msg.range = 0.86992838074;
    msg.data_mode = 4U;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("TPYUPLBLQUWKXGOTSMOCYJTJIWLBIAKADZDUEFSHACVYKLFGWLMZGKUHWSQXYRRRZKFXZJNKVVZAZMECHXXAUFWEBYCGZXPHSPGOCSPMTTDFFUJNJRNGVJWHIAERKRBAOTOBOR");
    const char tmp_tmp_msg_0_0[] = {-25, 49, 109, 50, 18, -25, 13, -90, -36, 31, -21, -45, -36, 93, 51, -114, 8, -73, -76, 54, -107, -17, -29, 97, -64, -29, 41, 75, -100, -10, -21, 81, 103, 67, 18, -71, -32, -33, -19, -73, -11, 96, -68, -114, -128, -27, 33, -68, 104, 86, -11, -65, 71, 59, 56, -128, 49, -68, -83, 28, 53, -101, -37, 2, 69, -32, 47, -2, 51, 61, 87, 63, -116, -42, 2, 70, -125, 117, -10, 97, 65, 89, -100, -88, -112, 46, -54, 50, -110, 61, 14, -120, -1, -120, -56, -117, -78, 113, 90, -104, -39, -91, 113, 91, 44, 124, 5, 92, -72, -1, -117, 10, 32, -59, -117, 33, -93, -47, -84, 0, 82, -124, -46, 66, -121, -29, 52, -73, 56, -40, -86, -94, 20, 27, 16, 12, 94, 60, -101, 3, -86, -29, -28, -57, 41, 6, -100, 101, -59, 123, 124, 121, 105, -10, 77, -119, 13, 3, 34, 104, -16, -102, 56, 99, 86, -51, 10, -44, 42, 68, 21, 12, 108, 12, 67, 108, 71, 117, 94, 1, 86, -110, -121, -92, 65, -51, -52, 84, -116, -97, -66, -13, -18, -117, 26, 6, -36, 1, -43, -14, -88, -96, 11, 27, -33, -3, -28, 40, 56, 90, 11, -88, 96, 67};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PFURYCPWBUOHYUSZDSJPTJMOZVETFQWLIHBEASCUGGPZQKBXZRWMAIVQAYWIDCRHQOIKVAWRFWEDJJLEYBUNHZMMNBBVTHPXGDDSMKOHFYKBPNBGUNIEKCAWGGDXXUQ");
    const char tmp_msg_1[] = {-108, 67, -36, 117, -58, -113, -124, 113, -116, -115, -28, -30, -105, 119, 53, -66, 49, -1, -54, -18, -4, -9, 59, 14, -32, 78, 72, -4, -39, -88, 79, 14, 31, -100, -55, 1, 53, 98, 111, -115, -119, -37, -110, 95, 32, 6, -20, 9, -93, -10, 104, -90, 67, 107, -50, 70, 37, 90, -26, 6, 13, -82, 68, -75, 63, -47, -102, -54, -64, 109, 66, 33, 97, -94, 1, -93, -67, 57, 71, 85, -46, 117, -16, -37, 78, 64, 78, -95, -39, -10, -34, 47, -58, 11, -24, 50, -66, 8, 20, -115, 120, 112, -113, 80, 107, -45, 47, 71, -2, -1, -37, -128, 9, -54, 94, 117, -80, 13, 97, 125, 41, 24, -101, -12, -32, -72, -76, -88, -119, -73, 24, 31};
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
    msg.setTimeStamp(0.225267549086);
    msg.setSource(53866U);
    msg.setSourceEntity(149U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(91U);
    msg.req_id = 13108U;
    msg.status = 196U;
    msg.range = 0.125192528939;
    msg.info.assign("DFLMYVXCLYLDZDKWQJCZNDRPCJDBVPRYUSVQNPPAWIHXURWAQIGERNFTHHSPTUWHKXDTJCBSEQAJQFCOHYVSKNLOXINEJMPABIV");

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
    msg.setTimeStamp(0.803868535983);
    msg.setSource(26693U);
    msg.setSourceEntity(187U);
    msg.setDestination(11805U);
    msg.setDestinationEntity(68U);
    msg.req_id = 60127U;
    msg.status = 113U;
    msg.range = 0.424677062903;
    msg.info.assign("WLTIIRBVIXRFTQXVSATRCTRJYIZXOFVECACFYPAZMKDYYAQIMGOHZDRKTWWDGAAEOABRWYGHLSWSLMFHVJURBKJTETAXKSGQFBOLTKCSCVZLYMHCNRIWKSJTHJUVPJBGYMVPUENEESKYUGNOBLZDHVPBSMCXFOORODSUJEHNEMDMUPVZUXHWDISHXXQGQFEQRDFZJDBUJUQCQQXVLQTFKNPOLZNPPY");

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
    msg.setTimeStamp(0.029401555365);
    msg.setSource(63892U);
    msg.setSourceEntity(89U);
    msg.setDestination(44371U);
    msg.setDestinationEntity(78U);
    msg.req_id = 48809U;
    msg.status = 16U;
    msg.range = 0.517817422978;
    msg.info.assign("KCOVMIRSGOOGZJUECBGNVQCNMHHECIEGDTELHRPZLOKLUASNVWIAPASGVNYZUXMRYXYYBFSJQOFKABFQBCXPRQDVCEZRLZRYHWPTKXEWWFXJXTPPIUHVRYNZFTPLTFWHCTIZWKJBSLXGDCIOUSDWV");

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
    msg.setTimeStamp(0.284628602077);
    msg.setSource(33156U);
    msg.setSourceEntity(63U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(232U);
    msg.req_id = 48441U;
    msg.destination.assign("GXQVJEGLQYTOZDXHIUCJCGLKEUBJPFCRNKJJSAFOJSOLUYLMPQMCBTMFDVBZJLWVHH");
    msg.timeout = 0.88268205931;
    msg.sms_text.assign("TOHDDGZVBYSVDZNVXDTFDRQWRQPEKKZSIHTUYFTYHAGQPHCIHGZLPZXY");

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
    msg.setTimeStamp(0.229168625033);
    msg.setSource(49128U);
    msg.setSourceEntity(110U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(129U);
    msg.req_id = 5247U;
    msg.destination.assign("HFEDAXFTYTRBMMKEBZXJBSCIILEYNOUCQVWUQTNZQNQFKGLJVWWRUNTIDSRQCDLZDZNJLWCPVRDYHNFIOBJYKXANMCOGDPWULALJGMQMAQUMTHLBH");
    msg.timeout = 0.381971808317;
    msg.sms_text.assign("AGGZVHNMSOXFLIYRDNTZOCNSHKAECHLOGJQMZVPMKSGEUIJRBSTWAJHLGMEDUDURYESHPBFXOLAKBTCUVEIOXQUMFRCTELMIHMKESQIOLEZNHLIZKTSYRYYLNZJUVDIYUFBJBAWTCKSQ");

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
    msg.setTimeStamp(0.484190811634);
    msg.setSource(16566U);
    msg.setSourceEntity(170U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(4U);
    msg.req_id = 38292U;
    msg.destination.assign("LMPGUBIGSZDUSGKSFLHTYSLACIEIEJCJX");
    msg.timeout = 0.0914366225358;
    msg.sms_text.assign("VJFIAUZNZRYXEXQKDBMLZIUPXWFOQUQLPDESNRBSYSJUZLELJGOATFSQVKZUGLJELKTQNYEBBJVBRORAZPXIKJIPGZALGVKCBDIQSHRYGNTFFJRVCNCBHRMFYNTODZIVIMVXSSIQPIXAWHREBREMJQGPOHWWCTRCFSEYOUGZTMHNDHYWLXNWYGHCHDAPKUXFPASWTVOUUGTCJALNOLAVYEODFKMMNXZFOHSKMIBACGWMPKTCBCDDMJPWUDQHV");

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
    msg.setTimeStamp(0.881891685645);
    msg.setSource(35876U);
    msg.setSourceEntity(189U);
    msg.setDestination(19336U);
    msg.setDestinationEntity(232U);
    msg.req_id = 5509U;
    msg.status = 87U;
    msg.info.assign("QXZOOSGGNNGLPUDIWEXBWREOXJLMBLKDZKTOSIXWHMRNPCLTOKDQEEJOFVKCKCSWADTMRLIHBKOMSZFFAXYEQGEYWDXDVBRBVBFNRWNBWVDUVIYLGPZHEILFODSQMMMPGXGXUTJHAQQLZHZQVYASUUFEUNKJSWHLUACOOZRMICHFTADVIBCGRAJV");

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
    msg.setTimeStamp(0.0492659402596);
    msg.setSource(57479U);
    msg.setSourceEntity(56U);
    msg.setDestination(52983U);
    msg.setDestinationEntity(115U);
    msg.req_id = 25416U;
    msg.status = 127U;
    msg.info.assign("AHOPBTZHUNWZRKJBNEXYFYZNTQARBMCNPQEDCGIRRTWIPUYCFSKVKBRSEPMVQFKIVCJPEVWAFURFCKDJEERQZSZNODZYQDGLULUHKIZYDGOQNLYYQCLRDAXDOXJFLWAHCUAGDGMUMEHXSMKBXTBQLNSHNSWSNKVIEHLMCXWNVORKJWJEBSXTZHAJFQIKVAVUHVZMMDBXGFJRPTTWOTOLFTXPSFWOLWLAOGIXPCIGYYJBIMZQHBJCMDG");

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
    msg.setTimeStamp(0.38277045321);
    msg.setSource(34541U);
    msg.setSourceEntity(99U);
    msg.setDestination(39600U);
    msg.setDestinationEntity(92U);
    msg.req_id = 30313U;
    msg.status = 2U;
    msg.info.assign("EPCCMFNAKMITPRGLNMBWUCBPPIHIMHLEWHB");

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
    msg.setTimeStamp(0.183820789605);
    msg.setSource(22043U);
    msg.setSourceEntity(149U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(60U);
    msg.state = 212U;

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
    msg.setTimeStamp(0.325399775589);
    msg.setSource(46869U);
    msg.setSourceEntity(222U);
    msg.setDestination(18416U);
    msg.setDestinationEntity(115U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.31790090014);
    msg.setSource(22202U);
    msg.setSourceEntity(29U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(250U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.710301825975);
    msg.setSource(32347U);
    msg.setSourceEntity(212U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(189U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.758923034107);
    msg.setSource(3595U);
    msg.setSourceEntity(85U);
    msg.setDestination(32012U);
    msg.setDestinationEntity(131U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.969095390083);
    msg.setSource(45592U);
    msg.setSourceEntity(213U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(42U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.313466547532);
    msg.setSource(31930U);
    msg.setSourceEntity(175U);
    msg.setDestination(5813U);
    msg.setDestinationEntity(129U);
    msg.req_id = 5482U;
    msg.destination.assign("WTLLFUJMDJQ");
    msg.timeout = 0.824996626039;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.940738384782;
    tmp_msg_0.reason = 182U;
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
    msg.setTimeStamp(0.983655034721);
    msg.setSource(34313U);
    msg.setSourceEntity(239U);
    msg.setDestination(42202U);
    msg.setDestinationEntity(40U);
    msg.req_id = 52880U;
    msg.destination.assign("YOTQTQLEKULEFVVLBFCGELDZUKYPKDFJIWDHXGGSAJNYDYNCHNOPASAQWQCIIXFHZUZCSQKVOKHWZEBKFJUUOSGCZPTREEDSYGIATBXTLONOGKBMJYAYVNS");
    msg.timeout = 0.845903511195;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -96;
    tmp_msg_0.value = 11030720;
    tmp_msg_0.gain = 192U;
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
    msg.setTimeStamp(0.992146605306);
    msg.setSource(41439U);
    msg.setSourceEntity(52U);
    msg.setDestination(5132U);
    msg.setDestinationEntity(72U);
    msg.req_id = 46405U;
    msg.destination.assign("JXSWGKSERKSMOEHDEYSBHRUQXZPVZLYFUSNOTKMWRMHZNEILLDQFCGJRUONAEACVKPIPKMUETAZPWQEPRISZXFINEBTDKZIHDKGDHFJGFXI");
    msg.timeout = 0.494227254231;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 47559U;
    tmp_msg_0.x = 0.276088929936;
    tmp_msg_0.y = 0.239087001968;
    tmp_msg_0.z = 0.386009172675;
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
    msg.setTimeStamp(0.827208587303);
    msg.setSource(37409U);
    msg.setSourceEntity(238U);
    msg.setDestination(11137U);
    msg.setDestinationEntity(193U);
    msg.req_id = 2467U;
    msg.status = 103U;
    msg.info.assign("CCRDDUULAMWPFHVUKPRZCUGHTTOHGETIWJZRAOADEQDYZXDXKQCEBSBQUBCPFNDHEWVVUZGHOMIFLWQPLRSLJWZBKFKANYDIYYOTVEVVNOFSMCLJJAMPCTYXPFLLFWIBSMURXYWKNSRKDOHDKYBXHDINJJXKYGOJIXBZBLHAFLAIMQRMYENSVNTZVUZPGBSWOIZEETQUWA");

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
    msg.setTimeStamp(0.742290640723);
    msg.setSource(62573U);
    msg.setSourceEntity(57U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(193U);
    msg.req_id = 3852U;
    msg.status = 222U;
    msg.info.assign("HTCGPAIDDGSBRHXXBAGWPUECOJVSBLEHKKLOKZAXSUWQSUVZIXAMSJWKKAJEFZPGSGFBNEKTNRZPCXDWLACXMYBWEYNFNVMWTSONYECZTHRQWNGEZVQUPTAJKTKFTINNFDPEURXLMRJLZHVHRLWZCOVDQKAZXPRCMFQYCRTAFOUFUPBVIUMFDQQCQRTYHHBQMIUJMV");

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
    msg.setTimeStamp(0.325370873066);
    msg.setSource(61472U);
    msg.setSourceEntity(184U);
    msg.setDestination(27474U);
    msg.setDestinationEntity(37U);
    msg.req_id = 40678U;
    msg.status = 84U;
    msg.info.assign("QXIGCJTTJYYVXRGSPQXKEUVLWYGZYEORQUMGEQIZXNAEFWWIKJSVBDMSFVHHPSVDCJKUMANPVSHZHIBHMSIBYLNOXDIBVLAWTTJHQRHCNKGRUNXRWJCADDWENMLFSUJFEITGTNAODGPBPBOUNLFKRNXSOWTXJIUAVWPKCMAW");

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
    msg.setTimeStamp(0.668575984609);
    msg.setSource(41503U);
    msg.setSourceEntity(242U);
    msg.setDestination(4376U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.201326815912);
    msg.setSource(30324U);
    msg.setSourceEntity(102U);
    msg.setDestination(35678U);
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
    msg.setTimeStamp(0.453115910725);
    msg.setSource(2125U);
    msg.setSourceEntity(99U);
    msg.setDestination(34639U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.923673086613);
    msg.setSource(38366U);
    msg.setSourceEntity(229U);
    msg.setDestination(52783U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("INSPHYMLJSUFWQKFGRSTKNAGUAPJEDTGWDMHOXGHJTYRSAMBHFIDYVZJAGQTLDCWXQEMQKWIGFDKRZIERGQLUAJRDDIXBZENVNCZUEIISTOAUNTRCWHODLXWVOXHFBRTJOHJEYLBFOWVJORMIVPCMKURZYGMHALSUKKEZKTWZSYUXXQXHHCVPBYCVMTIPAYEPYCZMFCXVVNFNAQLYJQWAUEBZDGMDSPOLOPQQKWUFLB");
    msg.description.assign("XODTNLXPJEQJNGQAXUILCSIHMAUAQMHGZE");
    msg.vnamespace.assign("DJVJPOVQGCAPRFBKWNDCTQELJGMNCBHTBXBIMJYHJYUXNPMJPUNCYSFWMWEVTKWOFIIFAAIICYKRZHOXTEZFOIJGNZMGXDBGWUAWTJAVQCLRHKTXTUZZRCDKJSOCEWGPHRNBDDNZTQXZSLEOYQOSQUJIQKLFOLYSKXFUOHFSTDEVXVBGEGBULPRUWYYLZAPMMFDSULXPQZESDIUSQPIAYRPXSKVRLZWYRVMWKHEBRLQNTVEFNMCOAVANKAMHG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZMRDCKUUCDNNUOWGYDXNAGFXOXTKGOOVCCRHZJRAULSODWZFJMEVLKFNWTMKTJCYZCZVMWBKTHPRSGNXEZWWLAGSMHDKACFROQHQPXJUZIWRKTJKICRALIFJLMFNESKPTPAYKCRYOMBZIXN");
    tmp_msg_0.value.assign("EGKSOLQBBEDPTESHKCKQUCIZVNRWWOLMBZEZLCXNCJXPNQJXZZXHRLWZOJAEFZMDABVGIXBWEMTMXBSYGRNSSOUKRSVHQSRWLFAYLYSYAYEVDMFKTUDNOFDCYCYPRQXIRUWPHSIJKAFZHGCTYLHTRTBWJWQVPOGEEZYMGUDFFIKUXZJFTODJUPJGQGAWQKIADVDIUNAIOCMTV");
    tmp_msg_0.type = 147U;
    tmp_msg_0.access = 230U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HSMKLBITTJFYMCQIDTMTBJFYG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BDAWJRFAXEYVIGGMR");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 46654U;
    tmp_tmp_msg_1_0.lat = 0.149566145094;
    tmp_tmp_msg_1_0.lon = 0.385933195156;
    tmp_tmp_msg_1_0.z = 0.838487085958;
    tmp_tmp_msg_1_0.z_units = 64U;
    tmp_tmp_msg_1_0.speed = 0.0236722391661;
    tmp_tmp_msg_1_0.speed_units = 130U;
    tmp_tmp_msg_1_0.roll = 0.622556080068;
    tmp_tmp_msg_1_0.pitch = 0.418748303427;
    tmp_tmp_msg_1_0.yaw = 0.544105688699;
    tmp_tmp_msg_1_0.custom.assign("SDXDYTSUTVRMUJVURLVCIYABEARTWTQKMBGZPUGQMDOXJSEWJYHLTUFNTAPXIJHFNPMPS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CompressedHistory tmp_msg_2;
    tmp_msg_2.base_lat = 0.930330787904;
    tmp_msg_2.base_lon = 0.38848886527;
    tmp_msg_2.base_time = 0.414687711364;
    const char tmp_tmp_msg_2_0[] = {-71, 44, 33, -74, -44, -82, -29, 114, 77, 12, 52, -32, 21, 109, 116, -10, 45, -26};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LeakSimulation tmp_msg_3;
    tmp_msg_3.op = 230U;
    tmp_msg_3.entities.assign("RCTLUWHUXPBBPEEMVWCSEVGJUNQZDXYLSKLFCFZPIIAQHSRYRBBMTUGTNIAGLTLXHDVTRNIZOOGWYVQPHDXCNTOVROXBOQTVFEFCBRLGYTPTKNXVPGZAVFXONKHJALUFASHWAIRDXTLCSMEMFUEPGMMMHKZAFUDRBZEHLJUWSQAKIWJJOBCNQUJJUWDVCQORKWHAXWCWLQNKEIJQKSPFOPSBYKDIESGNRYNC");
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
    msg.setTimeStamp(0.501788453921);
    msg.setSource(27569U);
    msg.setSourceEntity(78U);
    msg.setDestination(15597U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("XKCZHJDJTKVIPGEQFADLXLDOIFUNWBZZXQDYPGFEUVAPWMFCITOMUZVBKWIARKVYQSXOFRZFG");
    msg.description.assign("NUTHBFWHAZVAQICUZUSTBKFSCPZDCUGQSLJIYNHYTQPYQKWVLHASFEKLUXYVRNGEDDBRJDBSKOBFRSXFPVGTVLUADKSDMXKOEMICXKBLDUFFQXIRRMNOBAQEWMAWUXHMSNPYTZAGSPOIFL");
    msg.vnamespace.assign("NEOBWGOIMJWBGYVEBZNHSRFXLDYVDOFZKSOQIWIVCINXMUTWSDMIURBNQKMYRMIBWUGRYQNUWAPCIWKWFUEPPHZSXHXSY");
    msg.start_man_id.assign("FOZCHLLZGUNUZUJBWYRECIYKPYRWQJYGKOPJSPLMHBPFBBAOEDICTZPCVVTMLCIWHLFLPEUWJGGIXFOKSKRDQFDLGTHCNEXJJTPAUEUQGMNCTVMEQUOHMGVJ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("CORAKEDBAGBCHFWGKDZRDXZSHQSBBPITMUCGVJEVAIFAXKLQUODOMWETYFBMYUKJJYXQMGYZMPC");
    tmp_msg_0.dest_man.assign("CUAMEKCJFZOWBDOHFBRYNAZPHTKSSZBDYLENAONBMPRKZSNYRGQQTZAQMGPJFIGVJGCUZWTHDXYKVWAHBHZNXVCULJKDXSIEUDOAHSLETUGQJMECFDDOYEPIOUYFFLUQUWBLWVTXJLNOTWSGWMIFIOPUHNVGQGCCBEZRYQCDKXFYMSXXSTNWQRVQILYXVCKVB");
    tmp_msg_0.conditions.assign("ZOBBMQHLBQLKMATJAEUHJLIDTWGCPXGUKSQKAIESVHKDOZLOYWFCRYCDFOXCSHNFLNYCNOXLWZRQVZVINYBJTSFPHRADMKEOHLDHAGTCPJAECTMMLSJWUZMBGFLSKZRRCCRTJIBDMKSUTPNDUGWBEMNWUKWIPWHGQQEEOXOZTPVFIFGTKSZIVAABNAPYXBIJAMWVVJ");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Phycocyanin tmp_msg_1;
    tmp_msg_1.value = 0.538764602808;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0545791847839);
    msg.setSource(6130U);
    msg.setSourceEntity(127U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("INIMLFHKFENZCRFUZNKHRADKYTPXEUYWIZPVFPWVJSHTUBCXHCUAQTXDSGQAXBICQQRJLMGHRPSFRJIKLOTLEHAUVEPPNEBQMEECMYWQLCRMBRTKZZNMQKYCDNORMJQZOUWTLUASSFGGLVDPGYPKNTJBHZVLXYDBDFKVINXTHVEISGBCWAWQBVJLVYGUJIQYGBXORSJFSWOFZHWGZJMNXDAMIPRCGELHUFZDUDVKBSNYYPTOMSOXXOWTA");
    msg.description.assign("EDPEPEMLKNJNBQYMEVSFKSGIQSZQGYAQRPMQQOLWUNHXDPCEWDLFOQVTVIFKFOSBGGYWNHZFKMBWIEHSNXCLUGXVFRAJHQKZRKTNGWXARE");
    msg.vnamespace.assign("UVAANCBLIQO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SZRPYAAMZUTQQWJPMQUXAQMHNGJYAQYUGCBFLCIRVYAAJMHFLBIOZXUNMBRSFPUMGZVOSSFONOWMYVFRAXIHFZNDKIHKYYJOUWDENCLTTDVTMWAWTTWKPZIOCWLNYKCENEFQDXVWNUIEREEBIRJIBOFPPBSJLUGUPRSIXDLGNGHJLDKTSKMJDLCPAZRGVOJQVHKQ");
    tmp_msg_0.value.assign("HKOIRTWIEJHVFIBVJIVTBQTUDNKHZCQMFJUAPTQWLMGAHGJVWQKXZSJGOPYFAJMRADOYINIOMXCZPFJHZQSPGQPWTNBEORJTNMCVLUFSZYKHGHKMWDURIRRFYSEXTPDULAVO");
    tmp_msg_0.type = 235U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RXEVOZUMTRQNRCSMIEVSCOJPFYIMYHLLSKDIYADJPUHBOTNHQXHPSYZDNLHLXONTTYZOJKCORIPKDDGWKGDUVUVPJBGHZNWIQWUKEAIPSBZHVGZFQZBXGXHFQAWTXMBGVFIAKWJDTNDGQLAJOUCCXNRRJFFUFIPBEASNBVISWBCOKTQEHAYAVFMGDLYFMJXTCOATUBGSUEYVEXMWWLZREAVYBDZCQRMTROPCFGSLEHMI");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PUINOQTZVMRGLBEMMRNGGPXJKYUCFUSZJEUUBCRZSAIOOSWZXAVLNAYGVFLOTFTQRFZMTZCKMQAEY");
    tmp_msg_1.dest_man.assign("JYPBKZPTBQIAECAHVPQFWFBXSDSQWQZUNSJDCXNBRCEDIVRAJNIHVYMAUFJKTBDLMJGLFIXVCQXFCPLPBWEOJTTSRESZMAMVMWEOORLOHZPCNLYXHCQDIWIWAYRSKBQWKYPDMAGRISKGVTBVGUUOOZFAEVCDOBYGHZUUGAUJDSSMUB");
    tmp_msg_1.conditions.assign("KRVJSTQEXEBEMRWIJHZFPFUZGZQXVMJCVNIFXJCDECXTFCRBBIFONDRUUWSNCLAVDSYNYLQPTBOMHMJQVBA");
    IMC::GetOperationalLimits tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::UsblModem tmp_msg_2;
    tmp_msg_2.name.assign("XLQZVGDOAHBIIGLXDKXSCUBVPPAWMYUWAHRCTABGJZKTZNCVDSLHOJERYIQNLLYFBTHEBVFSCSJKGGCMYKJDFSAJDUOKJNBABMGTKWRPNPVNTROTHQCGZLXISSZXNNZQWELWVFFRKWURJEUAUQWUUHCFWMDPERLSTYTQRDLOZUTJNEQXMFNIYCPYJKKVNTIBIXOPXMHAXZFLYDDVYIEZGRDWHMGQBIOYMZPSVFEMUGRAWQFJHXSAOHVPBQCPC");
    tmp_msg_2.lat = 0.776248660574;
    tmp_msg_2.lon = 0.149538148044;
    tmp_msg_2.z = 0.678775233482;
    tmp_msg_2.z_units = 90U;
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
    msg.setTimeStamp(0.873516485399);
    msg.setSource(46664U);
    msg.setSourceEntity(84U);
    msg.setDestination(6264U);
    msg.setDestinationEntity(195U);
    msg.maneuver_id.assign("DVEVJPXGCLGUTKSMIUXONLERDUBBYRVSXYDVHYNUKKZBHLPRBQBCPLZAZWSOIKJSKVHRSXTAEAPSUBSYAOIODMQHGECNHOCKWXYCOMEWSQTBOVEJPJMWLPMHXFPNSNFAGZUGYFPFXJXLPKMWDJJAQMGWTUHTCGLIIOBYCDZDFYTNQUJNLRRWIRKZDAZMCIXZTYNHQRQSWAGFZVR");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 25890U;
    tmp_msg_0.lat = 0.130210050393;
    tmp_msg_0.lon = 0.917016173724;
    tmp_msg_0.z = 0.383342248529;
    tmp_msg_0.z_units = 135U;
    tmp_msg_0.speed = 0.399515855798;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.custom.assign("FHHGBUECYHGWAPZILHQBCJAORXD");
    msg.data.set(tmp_msg_0);
    IMC::HomePosition tmp_msg_1;
    tmp_msg_1.op = 135U;
    tmp_msg_1.lat = 0.886162455958;
    tmp_msg_1.lon = 0.78581401001;
    tmp_msg_1.height = 0.570339356488;
    tmp_msg_1.depth = 0.321966967569;
    tmp_msg_1.alt = 0.02836129229;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionKeepAlive tmp_msg_2;
    tmp_msg_2.sessid = 4126049340U;
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
    msg.setTimeStamp(0.145841422045);
    msg.setSource(48849U);
    msg.setSourceEntity(202U);
    msg.setDestination(12002U);
    msg.setDestinationEntity(175U);
    msg.maneuver_id.assign("OAKKLNGIKAFNJMLZSUNVRHLZGJFKWEYMHKGPILBZWEYXDBKFCPGTULNTQAAVXWWOWBWXOUJDEPYTFPAQXKQVBFBUDZFKRBTUFEJSMHEOMYRNTGPTLVOOWWQPGXKTIMLHDLXVCCMDZMAAOJMSCIHYA");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.270886970483;
    tmp_msg_0.lon = 0.726941177189;
    tmp_msg_0.z = 0.92349797952;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.radius = 0.683004559118;
    tmp_msg_0.duration = 7421U;
    tmp_msg_0.speed = 0.278034074664;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.custom.assign("ETOIUQJVULCQUAXXGRRXHGPMBAGSUEMMUMCBOLQVMBTPGJNQDCSWJGYCYAKTDODLUVOXWIHFYYEQKBVLKCYBPOZTAAPKEKFSQQPIUHFYHFMNSBICNZJJPGDCLMSHZDLBXRZEWGEZYDCHSDCKOONFDWDTYWABYPEVBRUQWVJBIPNXK");
    msg.data.set(tmp_msg_0);
    IMC::VerticalProfile tmp_msg_1;
    tmp_msg_1.parameter = 48U;
    tmp_msg_1.numsamples = 249U;
    tmp_msg_1.lat = 0.651470843135;
    tmp_msg_1.lon = 0.651651985243;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CacheControl tmp_msg_2;
    tmp_msg_2.op = 179U;
    tmp_msg_2.snapshot.assign("ZJJKMPMNSYPPTAAMRGLWNRFQWVUZDNBKRAWMMSNKPDUVJXRLHOHTECBBIXKFXNTVQJEYCEKIOKPCZGNYZRYNJDHFBTASOMMLQBZALUISDKAUEHMXWQWBQALSTOFUNDLJPWRDMXEZPJGPJSGPXCA");
    IMC::NavigationData tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.bias_psi = 0.278501471757;
    tmp_tmp_msg_2_0.bias_r = 0.476814706728;
    tmp_tmp_msg_2_0.cog = 0.229608653124;
    tmp_tmp_msg_2_0.cyaw = 0.324692022431;
    tmp_tmp_msg_2_0.lbl_rej_level = 0.479289682765;
    tmp_tmp_msg_2_0.gps_rej_level = 0.83212253319;
    tmp_tmp_msg_2_0.custom_x = 0.130745002255;
    tmp_tmp_msg_2_0.custom_y = 0.995232813125;
    tmp_tmp_msg_2_0.custom_z = 0.841643674514;
    tmp_msg_2.message.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.319386312489);
    msg.setSource(64281U);
    msg.setSourceEntity(104U);
    msg.setDestination(7458U);
    msg.setDestinationEntity(112U);
    msg.maneuver_id.assign("XCPFMBZAXFNVKJXQHIQUIHVAGFIFUDZYUCNJMTGHZPAJBXUWYBESNVXEGXKHJMNZGBOQWMQFZIONLVBOAVOCZMHOCCTBYNWITGZKJMSZCDDEZNRJTJTICTITLLSUTAASOOWPRULUMJXAIRYKGDVPNWPLSBUSINV");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("UWTVUNMGTXWFOKZCUWUWBKZSDTUMJBBAEAHQJVGLYAGGORBWFCESAUAHDXKLLZPYWSLZGEYKQEDJLZCBYMJYXBTXKQRMPQHFENKNNMODEHTDOXCTGFMMVVPHJOBL");
    tmp_msg_0.max_speed = 0.998957986068;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.lat = 0.462219341859;
    tmp_msg_0.lon = 0.504064054474;
    tmp_msg_0.z = 0.894514505404;
    tmp_msg_0.z_units = 133U;
    tmp_msg_0.custom.assign("TGYXQBRWJDQEODRUQBUTTISRJUZNVMYMGTEZEFKLCTNFSUPLCNCBWBEIMKQUGGDQCEOVMHAWHUYERJHRLAJNZFKGLKCLWHOITRYOXRQNGSWIHQDBUZJHAKPXPXWJLVFUIOCOY");
    msg.data.set(tmp_msg_0);
    IMC::DevDataText tmp_msg_1;
    tmp_msg_1.value.assign("WOHRLEZUMGJML");
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
    msg.setTimeStamp(0.605941795209);
    msg.setSource(4858U);
    msg.setSourceEntity(195U);
    msg.setDestination(28738U);
    msg.setDestinationEntity(207U);
    msg.source_man.assign("NIHKJIYSVYKGITAYMALRDUKKSVWDQOTFIVCNPFVSHEJEEBKVYEWPPNWBZJRBAOUQXRWMLCPIPTMHTXOHFSQXKIJGHUMWVFLCABOYJHEQKFZPZWOGSMVXAAEKGMIDCALUNDYRMUZLQMBLTQCSRNJ");
    msg.dest_man.assign("NJVANOILSGGCRMRLTAHNSXKZLVDOUEDJSEGQBQWPCOFXBKGQEIKRWGDZEBHVNYWBMRWZWZAZFCPEBPTWIFLJNVPKCDGKJGDDZEQWIHFBIERHMNMUUQAPBVREOPSYTQAIPMAWJDBAVKFTLUOVAPHRKMZJYTGTUGCUKXSETWNDOUHABNTHMZANPYGSLRMLQPFLSIIFTXCYXVMYKFLQIYYMEWXOZJIJJXOOZXQFUJ");
    msg.conditions.assign("GGSNVVZLKWCKNMKAFWSVYHQSNTXYBOUETNIEPVGJLSQMTNDEPVNUOPIZNODJLTXEZYUALOAXSGZFGDJERQELIAHQBOFRBMYAQZSAUEQMBCRTOJCIMIBOPMPYLFBFXQHADCWEHXSJDHRDQSCGNHQDNUTPWPYRIWJYYTYRFTK");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.551223321;
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
    msg.setTimeStamp(0.857218875825);
    msg.setSource(36526U);
    msg.setSourceEntity(162U);
    msg.setDestination(9977U);
    msg.setDestinationEntity(119U);
    msg.source_man.assign("WPLFJWKYFGYZSJXWZBXGMSJQMZGBFNINTEBSGULZXVSQIWOCHAKAVKHVRHJZRTSKGPLDLQELAPAJMFRQPXOACPPZCKXSXYDRBZLRAKGPQFFPBZWCEHRFHTWPJDLIHVUMBBSOOAEUQANSA");
    msg.dest_man.assign("HZDYYMWBXQCQGOJRWQKHQIPNXKPRZDGQHLVBAKPZGBJNMJNHEPIBCKNTEAMRXWPVKLCXAOSXIUWTQQGCVTLUZLFOAAABREYUOYRDAXSLIFGFKWYJWFEM");
    msg.conditions.assign("IHZVPYBBEJDRPPGFLUILAMHJ");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.request_id = 15425U;
    tmp_msg_0.command = 31U;
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.270220409251;
    tmp_tmp_msg_0_0.lon = 0.903536297278;
    tmp_tmp_msg_0_0.z = 0.957342253487;
    tmp_tmp_msg_0_0.z_units = 172U;
    tmp_tmp_msg_0_0.speed = 0.500203516646;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_tmp_msg_0_0.abort_z = 0.0429501868418;
    tmp_tmp_msg_0_0.bearing = 0.532876180368;
    tmp_tmp_msg_0_0.glide_slope = 33U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.714532847741;
    tmp_tmp_msg_0_0.custom.assign("YLPUTDNZCOYYDGCTXWQQCKLXHFDBAKSKOIXHLTAYXGMBZWRSVJSURKRVTJQSPSPOVXXQUAUZWIRYAMGJFLURORGHOINOEGZFEGTTEEQEQMFVRJYHMUWJDUXNFDBGEEMAWKCSZFVKDVDBBAVASKNZWTZMWTEROQDAFYLQNCFOWYNTFXPHLIOECYUAQNVHDPCPUWIHZAVSOIRBBWHPIJSXP");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 13323U;
    tmp_msg_0.info.assign("DMKXQRRSIXZDWJSTSCCKPMBWRCQUYNQXENO");
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
    msg.setTimeStamp(0.738878888877);
    msg.setSource(7450U);
    msg.setSourceEntity(180U);
    msg.setDestination(29547U);
    msg.setDestinationEntity(79U);
    msg.source_man.assign("CLLSPUJKCWRHOPBLHRHSFZEMWLLQGUNIPNAYBLKUXYUGOQTRWXZDSGDCJHHZXLBNOMRJGMEIAACNAIGNMTQVKVDJKCMXIFQXEZWIQVAYCMBRDDMTXXZMOQHE");
    msg.dest_man.assign("MHCPVHLSTNARBKEILIEQUVWMDCQCHXSLXIFBLZTKESSMFVZGKBCNHMBJUEFKTZBZQDMXQTAFTDUUMYNOGAOPLYAUTGHYKGUHLJNPJCYRBIUHGDGTVPEYOOTFEXAIDOYNHWNDEELHXPJWJWURPYKWLBGSFVGWFAWSYAMBHVCZZ");
    msg.conditions.assign("QJKKHICBDKFPRCSLKEXKHSYWYTEAATMVHFNHWROCFGQDIPOEAUOCCVGWJGKHCPOTIYXWRAUPZXYLNISMMAEM");

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
    msg.setTimeStamp(0.705586577903);
    msg.setSource(60346U);
    msg.setSourceEntity(42U);
    msg.setDestination(20382U);
    msg.setDestinationEntity(110U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KUFDWDGBTCFZSYVWCKRBOUFWTTEVROZUVPYKSKOOYGNNPQBLKAOMNLVEJNYJCCSJGWZYZNWMCXNPDQSMYFVZKIUMTUJQOQWWDQLAMXATWULKNQJFBEXFRDPMAHSTPMAGZQXGVHRSOHIDRZCPTCCEKXJBUVHRAHQ");
    tmp_msg_0.description.assign("BZIAUPLBCAFVZZMTWPUHTOINKYOVALMNGNHEXVNCTKXSYSVVCJJOFFVJLTVYECAHRMPRMMXUHJWWAOYUKEFTRKGBTICKQNGZFSILPNKIJZUOFEEKWKDFMWIQLJWHRPYJUKDQDIEWWMBQXUGDGPFCAETSGWLBPXRDHJXUYEAMNDWHZFQOLSYDSIYSAQXLBA");
    tmp_msg_0.vnamespace.assign("CNNQZLOHYIXMIKSMFYIVSGDUKDBOGRTWTTZWCERTFUVYRQYRIWICMAQPAEBBNWOTPCAUYYZQNBDLWOFZGQULAUMNXHBLKKQOTLEJQHXXHHWDQSWENBBRPWPXFFJUXRCNLIVUPIPZEFVJOEARLPRHGHGCJUTAJQMUEVZDYEGHDSXYDPXSHOGXLCKPMFSSWATZUIJYOXNARZLVBJCGMDMFOSKZWVCNFESATKH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OFBDQNZCKBWCBCIFKJIGTZSTWDQXFRVYOPYWSKLOCVTESHOPGIBTTTEQIQETPZHLVEEQFJUQBIBYQSVHIWJLXYSUKSXNCVTJFYNLEPMPZNZODCUVIDWNQHAAVRWXXHKLRAPJMVGVZNJDKRMLFMWUGQHEJDZJLFHRRRROTKWGZPADMWIFEYRSEUNHGXMULSKTYNHPDXKDKEBPGZUCXUXNMSFCOGAAAUO");
    tmp_tmp_msg_0_0.value.assign("ESDBALLKBOMIUJZCXONQWCGNAKWUBIFGNZIZSZOMJYHMIDEJRCRKCUUJIPYZYXQADYLVFGLCVZFJOPQKLRAWNQKDRQSFHOWOMAFLACDFDNAWOHQSHNFTIPFSYRAAMZVVWJMPBHVDJDMXGYKGTONBTPZXUOPREARFMNHBQULLTHCPGHLVOVWQQYHTVKDRRSSEZJSKWTYXTCUESLGMCG");
    tmp_tmp_msg_0_0.type = 213U;
    tmp_tmp_msg_0_0.access = 6U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TPKKRBJICXKQJAQGEBITRTHNZARDEMQDZIFZTDAFVWSSTOSRNAPMTULUJCKYMZYUKSRTURTNVJOPJFLPEBYUHYMVPCMJCWZXHOIBXZFWGLWUQWCHLLMXDGBEBDFFASFPPSYGCLYSIINGDORIHCRHDENMOEOXIQLSCUCMTVJJCHVVZUYADKWLVWPFBNJP");
    IMC::CompressedImage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.frameid = 200U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-100, 47, -122, -14, -14, -40, -72, -57, -8, 69, -13, 83, 72, 83, 108, -65, 33, 46, 7, -20, -70, -100, 53, 9, 26, 113, 114, -44, 68, 45, -120, -20, -82, -116, -62, -25, -102, -96, 125, 31, 8, 75, -31, -47, 25, -30, 37, -125, -128, -100, 63, 72, -26, 67, 37, -52, 100, 22, 12, 23, -36, 68, 83, 56, 105, -42, -4, -37, -20, 52, 0, -102, -121, 115, -28, 62, 68, 42, 66, -62, 43, 23, 107, -95, 26, -65, -22, -37, 45, -33, -91, 53, -106, -1, -117, 0, 71, -87, 101, 25, -43, -94, -18, 80, -99, 89, 46, 31, -62, -80, -86, 43, -34, -113, -33, -64, -23, 61, -74, 31, 120};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LblRange tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 184U;
    tmp_tmp_msg_0_2.range = 0.273123572012;
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
    msg.setTimeStamp(0.0224166554369);
    msg.setSource(40935U);
    msg.setSourceEntity(126U);
    msg.setDestination(23046U);
    msg.setDestinationEntity(94U);
    msg.command = 4U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VSIEAKYBDTGDRKSEHWJIUEHXAQAORZNSINZOGFKILBOXFYTCPTLPHMJZDOOEKEYASNYLNFOQGMCMBCTGZDCILVDUQXBMQRJZIDRSWBSPEWQWXWESAXVXSCDMDQRPYTVGLAGCMHBBTLJGSYNBUYWAIYLHEGNFKOTANPKQEEXIQDHROBHFCUPKZRDVMUVUZKUXZJFNMHM");
    tmp_msg_0.description.assign("TVSLHWMQJXIYFPOAVBMIJKKFYIDZVBDUZZLWOVTMZYGBCVTYMRSHCRIQWYXPMCZLNQJGGKNMPASXHJ");
    tmp_msg_0.vnamespace.assign("JXATXJQRHDAPAQVRUWMPOLWBQVDNICPOWETNUYMFCNKCYTOWCPWSHUZUWWVTDMJQXRLGUFHOFIWDCOSUGYSLUPNFNBVXAEZJCOPJISGVYVOFHEALWNTJUNYAZGBXNZRHVBRHBICHABEAZLBGGSLYZOLQIEWKGDRMGCADPJJEJFMIRLROHXDXOARGRPFXNYKZYBKLEIEF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KVGXPINORRDNDVZHRJZXWGKILBSKLSJDZWMLP");
    tmp_tmp_msg_0_0.value.assign("ATXBEABVQZFMECRFLWOKPNJUSBUMGUSICLZOYSRMZAFKEQIWXIIHKKDDLJFESMKHKRHMSXMTJERVHNLJKBMOTQWUZCZVWPNWDRNLETNAVODIYLTWWBJGDYDJHQAKJZYOAPFRRBQIUYBGGQXJPHXPBSDEPYCANTZHTMGFPNXCBPWVZHKXXBYVQSLOARUPUNOGFEOYLGGACCLSQZUNVOJFXGXVHAITQFWWDSIQOD");
    tmp_tmp_msg_0_0.type = 198U;
    tmp_tmp_msg_0_0.access = 104U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DLAWCUTLCJSJEXBBQOOGYKMHZFGBPQYMCSXUWBN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RVZLFMQWYGBODUVRVNGUEINMOHQGAKJBXAPMTEUKFCPSTUSXITFOGZAULEREETCIAKQIZHOCLTNYUPAYHRNWQYPBNRUMCDQJIROZLIJSK");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CCRGNOTYUOJUWBRKRBOYBMVZOUFFTKQHWNELOVTDDNGLSGBIMXAWQINFCQRRYVEBORSPHPASMCMY");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Depth tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.337743365392;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("VWFROMSENVIDIIGLASWWLKFZQDWIRQRMUCSSEOJPZCWLQIUVRSQQMBCZNOKODAPFXGNCGPGYJHOVGHEWNDUQUFJUBTHXUVZBATKLGRHPNPVYMXQACOGMPSMSOYYUXXJCJITAXBSKQ");
    tmp_tmp_msg_0_2.dest_man.assign("CRYZUTYSVPHAJGEJVDBWFZXWSSJOMEILQMFALDUAONRGBYXXMFOIYLXQOKJGZFDFD");
    tmp_tmp_msg_0_2.conditions.assign("PCQOKHFQFINGWBDLJOXFGYZHTDJWRAZSFVEXSIPPWLQDDHZUYSTQILFKBINYKOVJGUENNGVIPRTTHZELI");
    IMC::StopManeuver tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DissolvedOxygen tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.0247022965964;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.093072029888);
    msg.setSource(42459U);
    msg.setSourceEntity(252U);
    msg.setDestination(50175U);
    msg.setDestinationEntity(236U);
    msg.command = 73U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DYHPTXEJUDXADTOEWQJUAVHXIPGRFZNGCIJWQMYLJVXBXAKLYGHOBHBLFQZCSIPCAMMHOQWDKPSMGDGTBEVECWWQJRLIMZGXKTPFNEQMLDOORFGUNFNQLTUPOPATBRZCSZJXWBVAVWKGEAKOHXSMSRTLFYCYMVSEPLUHIRYHRBUTUVRFWNDNCSHNNEZDCBKAIICOAQENJFSDZKWVYWZVUQUFMPBK");
    tmp_msg_0.description.assign("IQWNPMCHOGSIUJYCFZREDTRDWPTEQRXOSNWPTSEHGSUEVZVRHPBSZFBEWFFUIUMCKONLLYZFMGVHOCIDDYHYKPJLWRKUCMJXRZNVIMGMMWPBLVKXAFNPVODNEJBZQLC");
    tmp_msg_0.vnamespace.assign("HGZLUREJRCXSDHOLWBXXJQJMXIMRVTYQPVPNPEIBLYLATPVKPTGOCBSOBJKWHXYKVQCOTMNWEWIYWBJRHRFHNITZEIWKJCCUDAGFVVPEQADSCLRXAGLDAKDRNYCOLNUYXNUNYVDOGFCBKOAEFOVJEHIJQEHWAGYMABHCQHSJRNFVKMOBDSTMQDAIZDIZTGGWQNBSUZLNLKFVODJSPMSTIWZXTWCSHBRZPPIUYKFUMM");
    tmp_msg_0.start_man_id.assign("GGQLCSXIRLBLHLVHQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZYAOQQUWVUKOMIVLZCEUVMJZGYTAMCTKPBCTTGYRVHIVHGROAUSNXQV");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("TDTLKXPCKZYJDRWHLVBKPKQERYGHNFSYBLRAJXPDOHITODOMIMJXOWIKAZMXNHFGIAGITCGKAFQQVWBURBMGJSJQMGLACOJEEECVBQVYFVKLIGTJFPVDYXATPMRMPUBBVQDCECNHFZJDXUVXQGECZSCTZWSHSSWJSQNSXYWEETNDRKRZYWUULHNIZLKIBZEVRHCPAGHKTZFOULPYFQAPZBHYAMUJMRXOCGILIA");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.729836294748;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 210U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.145550640211;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.217553165976;
    tmp_tmp_tmp_msg_0_0_0.z = 0.985543973949;
    tmp_tmp_tmp_msg_0_0_0.z_units = 191U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AYNCIQNMLONTDDBWKEOYOVKEXUPPCZBHZXPSPMPEKMHJDDSHBVSOFUTWHFSCTGJONCYWRWKQPVDCGJPIOOGGLKUEKKSXOVOVSAXXUBAJZVUYJGHZXYIIHQNSRUEPTORELRNLVELIUKCYNNRUCRNTBHTMFXBFAPFXTVCDMZLHQQAIJZYDCEIHLGGZCMAKVJYXITLYQBBLWR");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ImageTracking tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DNQQLTVXRHMARPSRRCKTJZHTLCYGAILGVOBWFFOYKAINMDUAIZXUEEQGKCSMHICJVKQNTOYXPNBCVPTGCBRZRISBIMCFMJDHKVWW");
    tmp_tmp_msg_0_1.dest_man.assign("PUNHDIXIGABWQFEGWNVBMISDQOSVYGOMHDWHDEAFPWMOUWPZ");
    tmp_tmp_msg_0_1.conditions.assign("WCWXVGPGYTEHLWFZLZFMBLXGRAMZCYXONZQXSRTTLEHTQIHULOOJIIUMYUVRJDWJOBYQRVIHAWZEDEHMEMSKDFSEHUWINKJMEHGXLCFKXDLFTPQMDBNOTUCAVENWDVEYAPVGFIQYOTPAVKGYRSONUBQBEOOUPDICGVWTHQXMYSZCUWCKQPIUSZFJVNCSNICHSAPYFXRNJKJGVLZNDNBKAP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsTx tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 2051240864U;
    tmp_tmp_msg_0_2.destination.assign("TMPTSERQKKVESZGEVDBOBQOCEQXBZANHTJJEYHVEDNGAPUKJZMWYGPCUFYYFCRVQTSUIWKMNGUBGQOKCIGFUMHLEIXOOLBMRWJTXFJXKNLHDAETRSTOJOTTNSDRMPYZBYFQARHQXHPVTLPCVIHHWNVAXIN");
    tmp_tmp_msg_0_2.timeout = 5771U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {126, 15, -29, 72, 76, -56, 58, 56, 57, -49, -71, -31, 33, -8, 102, -2, 69, 91, 108, 49, 28, -19, 31, -93, 52, -29, 114, -102, -12, 52, -110, 119, -66, -24, 47, -56, 120, 29, -81, 116, -82, -62, 126, -19, -30, -73, 102, 81, -55, -18, 96, -58, 87, 67, -78, -57, -112, -78, -84, 18, 40, -104, -47, 15, -103, -50, 120, 97, 7, -115, 101, 9, -65, 91, 37, 120, -86, 112, 121, 0, -76, -50, 16, -65, 60, 116, 45, -89, 111, 11, 45, -51, -107, 64, -90, 112, -127, -53, 87, 125, 26, 23, -98, -16, -18, -100, 6, -71, 26, -112, -58, 70, -9, -61, 62, 49, -33, 60, -90, 113, 95, 116, 124, -104, -80, 76, 120, 8, -103, 124, -80, 51, -60, 29, -66, 69, -79, 62, 46, 54, 63, 105, -61, -111, -46, -91, 80, -28, 108, -89, 98, -123, -14, 112, -58, -49, -100, 76, -106, -83, -127, -45, 21, -37, 70, -59, -8, -115, 119, 72, 22, 61, 5, 14, -63, 9, 56, 29, 56, 74, 6, 13, 113, 56, 65, 89, -92, 6, -114, -119, -81, 52, -109, -69, -5, -7, -102, 33, 79, 13, -61, -60, 81, -20, -50, 120, 126, -16, -115, 36, 41, -56, 65, -105, -23, -91, 89, 7, -36, -89, -56};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
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
    msg.setTimeStamp(0.567426155443);
    msg.setSource(18640U);
    msg.setSourceEntity(200U);
    msg.setDestination(23246U);
    msg.setDestinationEntity(66U);
    msg.state = 215U;
    msg.plan_id.assign("LFQQHTYCPKLDDUCAUDMCNBOHXLUNOOZAVOXWLVYRKALETUHCUEINXUJSAJUYLDAPIKROBGZICCBMMMAWBYJOQZSMYBQHFWRMSHXBTZPYGDONOIDKJNRMGOESMJKTWFSPGABWFUJIVQBFYNEENMAQWXTZEWFUJTQWRVFGZHXXVPTXIQULLKBTDPOZYQEDGVQXINGSTR");
    msg.comm_level = 14U;

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
    msg.setTimeStamp(0.256539324068);
    msg.setSource(54622U);
    msg.setSourceEntity(81U);
    msg.setDestination(42168U);
    msg.setDestinationEntity(217U);
    msg.state = 71U;
    msg.plan_id.assign("ZRNQRHDQZYTBFXLNOCPBFXNRXNKHEPEEDYSMSOCWKJKJXVVFA");
    msg.comm_level = 235U;

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
    msg.setTimeStamp(0.113161198605);
    msg.setSource(3213U);
    msg.setSourceEntity(202U);
    msg.setDestination(13168U);
    msg.setDestinationEntity(51U);
    msg.state = 51U;
    msg.plan_id.assign("XYNKOACOHFAFPYSFCOBCGPQKDJNZOEYHBXQHJCKTITTJLNTGWUFRRCXVLTECUWZRVRSBVLTPQXWMZDJQUGBEIKHLZXOONAVRONASDIIYLNEKQUHSEGMKJKJBYFMSOLH");
    msg.comm_level = 227U;

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
    msg.setTimeStamp(0.918924089834);
    msg.setSource(53111U);
    msg.setSourceEntity(175U);
    msg.setDestination(42981U);
    msg.setDestinationEntity(152U);
    msg.type = 15U;
    msg.op = 205U;
    msg.request_id = 21708U;
    msg.plan_id.assign("XZBRGEHJTPODSJXQOAIBZMGUYOQVFBHPXNZJZSRMIESPDDPQQFMTFVKWVAFPGXAFVZOCGJTXVDOSHGVOLEKAWDYAHPKKNLCNGMUFUXTSIPNNCJHYDWKWISZRIHJBGTHCBDESRRJMPZENWGRUCQNBERVVCLJIWYLUXIWAATXVPWSM");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 50857U;
    tmp_msg_0.type = 173U;
    tmp_msg_0.utc_year = 27340U;
    tmp_msg_0.utc_month = 17U;
    tmp_msg_0.utc_day = 169U;
    tmp_msg_0.utc_time = 0.842180057725;
    tmp_msg_0.lat = 0.728054468921;
    tmp_msg_0.lon = 0.387567353222;
    tmp_msg_0.height = 0.76976447282;
    tmp_msg_0.satellites = 116U;
    tmp_msg_0.cog = 0.474655258313;
    tmp_msg_0.sog = 0.869383019594;
    tmp_msg_0.hdop = 0.868908328335;
    tmp_msg_0.vdop = 0.45182421424;
    tmp_msg_0.hacc = 0.0106797434676;
    tmp_msg_0.vacc = 0.383009636099;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HVFRPHUNMQSGHVFVYHASRXFILDFAMPEKZLWZGRXLONXGCOMLSJLUSTEQIWVFTQHUAZDJTAXTZFXTBUISKDHOCGVWMBOHENKAYADBTUAHSNQPRQJYMDJEYBACINREMUEWVALCPEDNLFZBGMGGJKZJUPBINURXXBYRGIMKOYWNURGIHOJ");

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
    msg.setTimeStamp(0.468189735109);
    msg.setSource(4363U);
    msg.setSourceEntity(2U);
    msg.setDestination(49353U);
    msg.setDestinationEntity(254U);
    msg.type = 121U;
    msg.op = 181U;
    msg.request_id = 7065U;
    msg.plan_id.assign("BJGDMQEMMZIAEYIAYRRIHSSFTZRZFVZRMKELMHZHNBKBKKXCFOULHRBIIBYNHUOWIPHEXWOEJPBJAAJICQZLOUWTMSLKDVBAOFTNICMNFRSPQYPLLSJDRJXRTOYPUXUIUYUVMTP");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.546640157536;
    tmp_msg_0.i = 0.344865710314;
    tmp_msg_0.d = 0.026016750734;
    tmp_msg_0.a = 0.328679301472;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CXAJKQBRQEGOWUGLTAMTNPOYASIXWECGJHPOVNOJJBWWFQRJBCMYFJNNHRITUIKODBXZPCPKZKGJFSDIIHMBIZOKPWSGXBAXHDHNSJRQTOQWVWBCLFRQXUAMPCCYJLSOKPISZSXYASVTTVQNUUIDULEVYHKY");

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
    msg.setTimeStamp(0.813499498517);
    msg.setSource(40731U);
    msg.setSourceEntity(249U);
    msg.setDestination(21182U);
    msg.setDestinationEntity(114U);
    msg.type = 65U;
    msg.op = 34U;
    msg.request_id = 10460U;
    msg.plan_id.assign("APXVVGHJCREXSHMGGQCQDDDHYXSHMXZNWUWEFXVFVHQIKRKHUJSGXTKIUJFLPTNEAXVCEPRFDKUKOCZVPXRUTRHKFHKORYNNAABOLQEPTLGUJNJJWOAVQGYIZDLTBBBTDAQZRMWNZDFVISKWMGSPZRFBMIMLWXDGTKUAIJMARDYCFTFIFKVEQRAEOSM");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.frequency = 1225248034U;
    tmp_msg_0.min_range = 19353U;
    tmp_msg_0.max_range = 32166U;
    tmp_msg_0.bits_per_point = 212U;
    tmp_msg_0.scale_factor = 0.963243025984;
    const char tmp_tmp_msg_0_0[] = {-16, 121, 50, 55, -97, -20, 30, 82, 15, -93, 21, 24, -16, -72, -73, -22, 47, 19, -40, -96, -48, 83, 32, 57, -79, -120, 108, 84, 19, 125, 108, 40, 89, 72, 31, 31, 125, 16, -128, 33, -6, -106, -90, -106, -30, 92, 61, 2, -119, -83, 75, 55, -121, -40, -96, -23, 124, -77, -71, 46, -81, -113, -32, -72, -92, -20, 96, -10, -54, -75, 86, -6, -109, 120, 67, 110, -42, 64, 16, 56, -25, 48, 14, -30, 8, 117, -113, 102, 118, -42, 58, 51, 30, -87, -123, -89, 92, -55, -110, -68, -124, -55, -78, 3, -23, -73, 88};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QXIBQYWRZVOABHYJXBRTPMBEIUMWKHNONVVGIXTCBWTUMBNAKORDXDATPKVTKHXLOHGTBYQRLTLCSEIVCIMYSYJZDRSUWBSVLQFPZDCDE");

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
    msg.setTimeStamp(0.729602480698);
    msg.setSource(8330U);
    msg.setSourceEntity(216U);
    msg.setDestination(33871U);
    msg.setDestinationEntity(24U);
    msg.plan_count = 12730U;
    msg.plan_size = 2548631491U;
    msg.change_time = 0.834518962595;
    msg.change_sid = 48735U;
    msg.change_sname.assign("GGQCVLCFQACLWWWBFYOMEJEKRZBEBITACDYRJCVXVWGUVXYHMIERLRJTCZKTYYFRKHSTLVQAQEXPPZLONW");
    const char tmp_msg_0[] = {-7, -30, -51, 55, -120, -68, -128, -76, 112, 84, 74, -8, -92, 88, 6, 85, -53, -69, 110, -45, 52, -52, 65, -80, 49, 70, -56, -107, -43, 53, -31, -110, 32, 24, 24, -108, -1, 104, 67, -13, 95, -41, -74, -111, 47, -80, 88, -88, 75, 62, 45, 116, 59, 52, 48, -16, 117, 81, -82, -97, 86, -25, 102, -55, -37, 109, -62, 118, -53, 80, -124, 83, -72, 59, 3, -35, -93, -3, 93, -17, -60, -97, 89, 85, -109, -109, 98, -56, -89, 6, -45, 72, -9, 16, -100, -41, 84, -18, -96, -61, -77, -18, -77, -10, -9, 35, -17, -41, -73, -90, -22, -113, 21, 25, 97, -102, 84, -59, 23, 118, -91, -124, -125, 67, -113, -105, -81, 106, 70, -70, 115, -72, 82, 113, 109, -110, 97, -36, 108, -72, -11, -93, -4, 48, -41, -62, 61, 18, -32, 63, 67, 101, -111, -123, 72, -27, 84, -9, -93, -108, -22, -121, 124, -121, 18, -46, -123, -80, 25, 103, 4, -81, -64, 45, 57, -41, -68, 93, -47, 95, -12, -82, 118, 122, -27, 125, 100, 125, 113, 89, 33, -26, 39, 32, -81, 32, -69, -93, -109, -3, 29, -104, -115, 112, 62, 124, -14, -18, 40, 3, -124, -108, 26, -73, -1, -27, 122, -2, -50, 93, -86, 17, 77, -115, -109, 77, -84, 34, -83, -83, -52, 25, 54, -127, -8, 61, 103, 118, -107, -124};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QBNNLTAULCMVHJGQNAJWMGYPLXSEQXCOXRCPWLNUXZUPYYFYPMCEIZBAOFPIHNBEGIWSYDBKCDSIYCMVUHIEDRZJFYRQVVQMKGUVLHESKZGLQDOLBWTMOFWZZADKJXFFRVJNSZTJHGFMQLMKKHNRTBXRWTFWESCAHRJXBFEVKMSWTJICANQSLWKIKRNHJBVE");
    tmp_msg_1.plan_size = 49872U;
    tmp_msg_1.change_time = 0.497187235849;
    tmp_msg_1.change_sid = 32083U;
    tmp_msg_1.change_sname.assign("UAJMJNYGYYJXSHZZQHKTKXGPWDOLYQQCALKUWSQVODMXZGZFHPZNNDUWAIOQRZFNRMTLTWFGGUQPTWQEWTAXDKIZIYOBMQKHXBCEFCTDZVFHFZKNTHJHUDSHKOKQ");
    const char tmp_tmp_msg_1_0[] = {-44, -88, 99, -114, 85, -126, -122, 22, 67, -127, 38, -81, 20, -14, -26, 13, 19, 126, -6, -84, 116, -97, -32, 2, 20, -33, -107, 125, 88, -37, 103, 3, 48, -102, -89, -10, -86, 122, -84, 4, 88, 118, 50, 113, -66, -117, 8, -93, 47, -72, 102, -3, 31, -110, -65, -45, -21, -27, 71, 53, 51, -79, -10, -59, -68, -52, -54, 52, -76, 39, -59, -19, 22, -51, -76, 44, 4, 97, -86, 96, 71, 89, 48, -35, 56, -86, -116, -76, 102, 116, 62, 110, -123, -101, 121, -88, -36, 16, -49, -39, -22, -63, 41, -67, -117, -108, 12, -91, 15, -33, 68, -64, -68, -128, -118, 109, -6, 110, 97, -116, -82, 52, -2, -128, 34, -10, -128, -4, -71, -7, 119, 4, 84, 25, -65, 58, 68, 42, -56};
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
    msg.setTimeStamp(0.418682992041);
    msg.setSource(16657U);
    msg.setSourceEntity(109U);
    msg.setDestination(6065U);
    msg.setDestinationEntity(159U);
    msg.plan_count = 41367U;
    msg.plan_size = 1886519162U;
    msg.change_time = 0.967565311224;
    msg.change_sid = 10337U;
    msg.change_sname.assign("XUBYGBIKAMWVUJPQUFBICBKYKTZCNZNRIELVSQHDEIPEFDPMNYDMACIKPNY");
    const char tmp_msg_0[] = {30, 41, -2, 77, -19, -31, -7, -116, 102, 101, 126, 124, 69, -34, -11, 47, 115, -58, 27, -60, 82, -82, -91, 11, -29, -60, 101, -83, 100, 34, -32, 5, -61, -126, 76, -101, 7, -26, 41, -12, -94, 85, 58, -93, -34, -128, 91, -120, 94, -113, -105, -22, 110, -117, 101, 36, 87, 60, -82, -41, 27, 64, 76, -113, -36, -40, -64, 77, -31, -118, 102, 39, -49, -97, -19, -97, 108, 64, -115, -2, -102, 37, -32, 87, -10, -31, -72, 10, 66, -76, 98, 4, 60, -48, 121, -122, -83, 97, 15, -61, -87, 116, -95, -124, -47, -107, 10, -30, -108, -76, 83, 28, -67, 37, -94, -85, -119, -9, -6, -109, -16, 0, -92, 83, -73, -17, 109, -7, 37, -79, 2, 94, -62, 87, -89, 46, 15, 41, -81, 111, -116, 24, -40, -20, -5, 81, 100, 21, 42, -89, 31, 86, -14, 22, -91, -26, 30, 125, -128, -37, 11, -26, 44, 87, 107, -119, 75, 64, -49, -38, 39, -128, -12, 19, -41, -23, -122, -14, 45, -128, 116, 114, -122, 47, -97, 107, -61, 119, 63, 87, 48, 116, -12, 94, -36, -103, 106, -121, 10, 40, 0, -77, 114, -121, -37, 109, -98, 126, 30, 84, -115, -60, 42, -14, -34, -101, -20, -31, -11, 72, 22, -128, 35, -9, -64, -83, -58, -76, 79, -85, -11, 88, 51, -56, 17, -60, 90};
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
    msg.setTimeStamp(0.92592055422);
    msg.setSource(26359U);
    msg.setSourceEntity(106U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 30947U;
    msg.plan_size = 3444901310U;
    msg.change_time = 0.741633710723;
    msg.change_sid = 10308U;
    msg.change_sname.assign("WFMVJJRGCYWHMNVTJWEGBFAEUWTWPDVWLLNFBAHGQLKSUKDXJMYHNPWEHIIKAXHEXSLDOCRENTMAXETCCGTISHZRSHUFJINGWSASYESCYZUVZLWBQRYSYFBOFMOBDHPADLZQEXZVLVAUBCVZQUFDIJW");
    const char tmp_msg_0[] = {46, -100, 49, -67, -24, 79, 55, 104, 30, -55, -53, 74, -2, -55, 107, 35, -67, 60, 106, -65, 125, 47, 59, 42, 70, 63, 16, 125, -98, 21, -51, 98, 99, 23, -124, -113, 95, 42, -89, -50, -59, -94, -25, -45, -72, 81, -43, 89, -84, -65, -116, -88, 113, -57, -62, -117, 116, 10, -30, 100, -39, -117, 51, 8, -18, 121, -32, 54, -72, 31, 62, 14, -6, -66, 101, -21, -81, -45, -4, 120, 84, 67, 113, -127, 35, 6, -80, -59, 95, 26, -23, -103, -89, -35, 86, -110, 26, 22, -23, -119, -2, 2, 118, -8, 66, -75, -62, 6, -43, -72, -69, -114, -94, 23, -5, -43, -120, -103, -102, 9, 62, 76, -34, -21, -86, 109, 94, -127, -93, -35, -109, 123, 61, 5, -30, -27, 75, 97, 71, 18, -39, 72, -86, -124, 25, -38, 59, 92, -25, 49, 65, -19, 28, 5, 80, -51, 4, 79, 22, -21, 35, -90, -96, -45, 78, 4, 105, -8, -71, 34, 15, 111, 74, -49, -108, -125, -32, 60, 109, 32, 100, -122, 88, 14, -96, -59, -63, 60, -111, 77, 125, -61, 94, 48, -93, 51, -8, 94, -43, -47, -97, -92, -95, 91, 27, -76, 94, 124, 83, 69, 12, 6, 111, -44, -82, -28, 44, -4, 84, -94, -99, -23, -11, -20, -61, 85, -10, -66, 78, -35, -100, -45, 42, -58, -54, 113, 61, 93, -1, 123};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("THCAVIFTQGADEEROCQMWSIQVOAZFLLLWMSNXJCEQBAKFIVUETWWDNZOBTKHFAFYTDXKGOEDSMUJERPRQENRDMYJXZFQXCRGTLEVVSPUIEPZOHCPNALJXUZGOBHDIOGYQABCCHRLAYPFSMXTXSKLLOCVBVMBXDQCZKYCZQSBGYILZZNFDETGDJBUUGPBNFUIIRNDMGKHWIPWJUPKJJYWKVPBHYJMNYNHIKMRAMFOSANYSTUOKXHXPRGR");
    tmp_msg_1.plan_size = 45422U;
    tmp_msg_1.change_time = 0.711265492693;
    tmp_msg_1.change_sid = 28172U;
    tmp_msg_1.change_sname.assign("EQYGXIFKPEOEJCORAPIZDFCUSFDPZFUGRKJYKHVCOZMKJILJFSFYDMBUBSGJVROWULNOEZEPTHYHZPMGQHJWYIMAUKOTLVUS");
    const char tmp_tmp_msg_1_0[] = {-112, 80, 14, 97, 34, -37, 38, -54, 4, 77, 35, 48, 87, -38, 22, 118};
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
    msg.setTimeStamp(0.307151483321);
    msg.setSource(3315U);
    msg.setSourceEntity(163U);
    msg.setDestination(36432U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("SLJGTVMASQEXDGPLHVWAAWZJIKTZDGMTAIOZWZSZCEQFVHZHWFEBYBXDWVEJTRENYHNNKLVNNYJVCEENIDFDKHQBGISUCBFZCYEPXSLMAHBQGREQLQOAFCMUCHRVLJGSWTLURXOOSYPDKETNYIUZGJMNKJDXRMWJOKOBGYMSULPMXVFHXAHSIDPOYARMRGZBKCFDPNKYQQLOSARACHJIQUDUITUFVPC");
    msg.plan_size = 44404U;
    msg.change_time = 0.841067063596;
    msg.change_sid = 39496U;
    msg.change_sname.assign("SATXODXASMDNEFCWQZKVPNQCRXORCTMLAFPDYYMWOHVIQVOQFJMWHZMKIUSWMECYOBRTPHEKELWOHMYBVLISLHZUEHBUYWTWKNIDFFRFYPDQDSTGTQNFIONMTFQZBJJNQNKRLVLULJCKCPSSUENEMBJKCCHBVDPSURZBTQJNRJBRYGKBMGGPCJBGPJUHHAINAXZPXGDKWFEISXUTYVSARZZOAXXHIAPFUGOWVGQWGXGUZLTLEVJYC");
    const char tmp_msg_0[] = {-108, -12, -67, 126, -102, -30, -32, -86, -10, 92, 46, 24, -54, -70, -48, 66, 26, 43, 12, 65, -119, -73, -108, -104, -6, 26, 6, -106, 109, -128, -25, -46, 108, -110, 117, -31, -60, -70, 85, 65, -35, 88, -44, 65, 115, 32, -59, -122, 74, -122, -60, 6, -117, -60, -36, 27, -48, -110, -122, 53, -111, 47, -14, -100, 107, -113, 104, -53, -108, 93, -17, -47, 85, -121, 20, -115, -77, -8, -64, 72, -17, 93, 9, -52, -124, -40, 119, -45, -6, -20, -47, 8, 26, 18, -89, 37, -10, 106, 100, -97, 59, -53, -44, -17, 115, 9, -65, 28, 58, 37, 78, 40, 67, 40, 120, 60, -111, 118, 44, 67, 74, 78, -88, 27, -114, 10, 34, -32, 92, -98, -124, 47, 69, -10, -11, 90, -8, -61, -118, -30, 87, -80, -57, -68, 51, 54, -18, 126, -27, -55, 112, 113, 99, -1, 42, 120, -98, -108, -116, -15, -103, 62, -80, 21, -102, 78, 125, 44, -9, 87, -71, 62, 6, 95, 2};
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
    msg.setTimeStamp(0.209939923889);
    msg.setSource(28602U);
    msg.setSourceEntity(104U);
    msg.setDestination(62606U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("FQYTJDOXKHYOZJYTLTMKJRWLZBKEANJNLDJGCOPHIFYQFBCMJVZDUTEIUXOPXBKULWAKOIAXWSTMQKIFSSJFBNZUQNLGRMCURKCGBBJHJVPVQUAREZKWL");
    msg.plan_size = 22596U;
    msg.change_time = 0.908529801846;
    msg.change_sid = 60039U;
    msg.change_sname.assign("IQQIPQRBFSENCMWJLPPXDUNWBJMNZWYACUMLYJHUFDFVCKGLWYXBZSMVZQ");
    const char tmp_msg_0[] = {31, 87, -15, -108, 62, -128, 77, 59, -67, -112, 42, 50, -2, -98, 121, 67, -93, 2, 91, 34, 31, -24, -40, -21, 3, -64, 26, -121, 81, -34, 99, -4, 21, -88, 71, -19, 89, 24, -111, 90, 46, 126, 111, -104, -79, -108, 56, 48, -59, -125, 104, 17, 80, 8, 122, 58, 62, 4, 22, -102, -100, -71, -61, 43, -121, -104, 90, -68, 16, 86, -65, -57, -40, -108, -114, 77, -115, 72, 76, -56, 78, 26, -32, 26, 8, 123, 118, -108, -19, 81, 46, -73, -85, -33, -124, 61, -9, 57, 98, 69, 21, 76, -113, -37, 114, -23, 43, -9, -2, -63, 38, -121, -48, -122, 122, -27, 2, 78, -17, -57, -1, 28, 46, 51, 36, 12, -70, 119, 87, -102, -3, -113, -19, -62, -5, 46, -16, -57, -44, 9, -73, -7, 45, -41, -21, -82, 125, -32, -56, -115, -96, 92, -28, -117, -98, -116, -19};
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
    msg.setTimeStamp(0.512145028331);
    msg.setSource(57535U);
    msg.setSourceEntity(38U);
    msg.setDestination(17323U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("GVFZJFPVNEHLHISPSJOLWUNZLZFRCFBBGDDKKRTOYRSJXSUUVEKGXGJLIDBUZMFZLLHINHUUURYTCDYPAQNQEBCKQFMCCJQEXPWKSVFWOBKBTORANIYEJEPKCRGOTEDCVIDXAIMYCBPXJEAGRH");
    msg.plan_size = 55678U;
    msg.change_time = 0.732109175372;
    msg.change_sid = 8649U;
    msg.change_sname.assign("PTJQBHYJNNOICNJLHNRVEZHRXTVRVBMECGJJKFRBUJKWQRFMVISVTZUUDKDXESQXODAYOUIGBNNJYRNWDAMXPDAHGIGFGYPVLEZQNOYSEGPWHKFUYXCWXMIOBOUZKBTROTZCEVGONPBQHWDKKCTXIADCLCPZBZUKOQFXFPFWKCARPVYJGMYVAAHBLODAQRFCZISJVZRUZIIFTPEUILHGQA");
    const char tmp_msg_0[] = {27, 9, 65, -111, -100, -50, 100, -88, -79, -25, -20, 105, 8, -58, -18, 14, -72, 98, 60, 80, -108, -97, 29, -60, 23, 17, -22, -90, 48, 9, 40, 95, -27, 68, -9, 10, -2, -73, 120, -121, 76, 89, -57, -57, 108, 107, -94, 2, 120, 37, 5, -115, 24, -79, -75, 63, 63, 104, 103, -124, -15, 95, -29, 13, -110, 41, 86, -9, 70, 87, -127, 67, -6, 63, 17, 88, -33, -41, -75, -71, 64, -84, -118, 77, -38, -100, -107, 30, -12, 107, -2, 120, 7, -68, 13, -107, -101, 1, 65, -45, -13, 29, -48, 53, -17, -36, 120, -91, 22, -74, 118, 73, -98, 54, -125, -100, 116, -17, 5, -121, -112, -10, -99, -24, 100, -89, -112, 104, -37, 48, -89, -76, 98, -91, 9, 95, -100, -68, -54, -102, -99, 21, -66, 8, -103, 110, 42, -95, 15, 31, 46, 26, -27, -110, 125, -58, -100, -63, 102, -104, 94, -74, -77, -39, 68, -27, -49, 19, -120, -91, 57, 68, 103, -72, -103};
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
    msg.setTimeStamp(0.388222429748);
    msg.setSource(43229U);
    msg.setSourceEntity(201U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(175U);
    msg.type = 96U;
    msg.op = 182U;
    msg.request_id = 24432U;
    msg.plan_id.assign("HMQBFTLXNJBWXUHPKBPLSZDDOWDJVQARMLHIC");
    msg.flags = 17878U;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.414027930807;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LEKKUDLSSXBDMJZQHBCAOGAWAWTXBGPFWREIIFKAOBJRMWIUHPEQAIBDMJCTMVNTDMVWWFCMZDQIVXLTLFGDZHZRMBHXJPKPGZGQHCVWNRFKYXIWZIDROEYOCZXPKHWUOAUOYPNF");

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
    msg.setTimeStamp(0.0604476313088);
    msg.setSource(57526U);
    msg.setSourceEntity(114U);
    msg.setDestination(24365U);
    msg.setDestinationEntity(109U);
    msg.type = 170U;
    msg.op = 92U;
    msg.request_id = 32289U;
    msg.plan_id.assign("XJCIYWNFIWMPMROLXPCOAKLWAAEHLDBPMXHQTDHYGDNSJGBTRYRTBKYFLSGOIZRDZPLQYNCKZCXXVJRNSHEJIJODBOFGGRKKNYVFVUABWMBYMJULDNBVIOOFKGCXWJKFGOAXZFZCTAORXKFNEUJDWNVGGMLTBUAZLRPHUDYFQS");
    msg.flags = 5171U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 7666U;
    tmp_msg_0.lat = 0.0211610447921;
    tmp_msg_0.lon = 0.553467757624;
    tmp_msg_0.z = 0.398842245181;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.speed = 0.989025265934;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.custom.assign("WCUTYAZSDJFIJMIVOAGNCLZORGHPSOWOQFDFZKLYRPLKRLHDLPLHRGZOLKQIBDSBJSEGXKOZTFQAVSEBMTPIVYJEMRGHXAUYSATSZKGCXYVYSKWPDKAHJPEWEFUNOBKBHZXCQBXXDTQDLOBQJVDCSLYJTQMVMHICKGUXQPUI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KGYLOWSPIQVODLZIKAMVFDAKCRHBWTZWZNMDDTSRBFOVERTKCGNUMKWJBZAEWIDDXLPGECFVQGZIHHOUSGSPNYCASUHBLJGZANNRTFXZRBHIRJSXBCAJFXQPILBMQBWRXYWIPAZYMDWNUUGZSJDMFKAGLOXEYBOYCLMLOEVQUWHUN");

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
    msg.setTimeStamp(0.921449529872);
    msg.setSource(30115U);
    msg.setSourceEntity(1U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(106U);
    msg.type = 209U;
    msg.op = 242U;
    msg.request_id = 4414U;
    msg.plan_id.assign("COOPOLLDJACNZJNHIMCXDJDCXZNUWKIBZGXLMIVTARTFSVQNLVECYJSXSLCRJXZLBUKDYEJKATFKPQOBYUINSGL");
    msg.flags = 56137U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("XRZDPDEXUNUAFTBWRCSRVWMXWFDSYMIVNTPFHYUSWWDEHYUZZTELGOUDSMVRUOFJOYBJQOBKLPEACMWKTVLYIYXZOTQKLKYKFNQNEQNBCVYFQIQLAJNVSKKGIPGRIXLSNLEAJXSBHUNWPOBJGIMXNWBTAQCHJUAYYZJHBBRMUPWVFMPXXZDDZCGGACCOIADROLS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YXEMXQAVUKFKPQWDXYGOJYXEKZEMVOTVZWZJLCABFYJPSFFMAGSFEZMRGQOGDPWYWPELPJWCLXNLIBZHTRZBCGISQBFCPRLGHRPLAAHMYGQANTXDJBKANTGIMIXLPDBMAOBRADCDHNHDEQTCCNHBYSRRIYKRGOOUURYVWLWCNPMOITTFESUWESFVQTFWFDIHT");

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
    msg.setTimeStamp(0.255403294644);
    msg.setSource(27946U);
    msg.setSourceEntity(219U);
    msg.setDestination(61776U);
    msg.setDestinationEntity(108U);
    msg.state = 122U;
    msg.plan_id.assign("ZTIOURLNHCUKJOEHYADVTGLXGBZFTC");
    msg.plan_eta = -400152037;
    msg.plan_progress = 0.693646864415;
    msg.man_id.assign("OSMBQQXQCYLZYGSYNPFBIRILQZK");
    msg.man_type = 59318U;
    msg.man_eta = 1384272739;
    msg.last_outcome = 48U;

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
    msg.setTimeStamp(0.193019714242);
    msg.setSource(55597U);
    msg.setSourceEntity(41U);
    msg.setDestination(57834U);
    msg.setDestinationEntity(108U);
    msg.state = 215U;
    msg.plan_id.assign("CYOTLAFGLIMACEWEZAYDLKASRPROVIUIGGKWSDXRJDIUXOSVXXNBQZYKPMUPZVQUFQLKJZABFTCJUSGMIVWVLOYBULGRAOKQBHISDCCHGSEEVO");
    msg.plan_eta = 1334918730;
    msg.plan_progress = 0.435342037176;
    msg.man_id.assign("BEONKZUEWREMJWOMKOGRULRNDMQIFDDFMPXCKDZRZSBXFTTTHIZADMWUBYPKEYTKQIVHKTKRCFDPZYQQPVCSWKPBPJCLNBEYAZZAYYHLCOQPUNIHRIFHFSSCVGMQVLWRAUNVPWFMSIMPUCJVHIZASOXUVDDJXDECZAFTRLGGWGOBJNSVSFWGO");
    msg.man_type = 61996U;
    msg.man_eta = 793361659;
    msg.last_outcome = 189U;

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
    msg.setTimeStamp(0.979941642579);
    msg.setSource(50600U);
    msg.setSourceEntity(127U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(12U);
    msg.state = 111U;
    msg.plan_id.assign("KSJLTPUNKXAFMDDWCOXRIJJB");
    msg.plan_eta = -30528826;
    msg.plan_progress = 0.471388043428;
    msg.man_id.assign("XCDKYMHPKGHPAJPROJPBKMVWGLLCUZBJLRFOUOYZPKUTOFHCOKRNCRVFIUHIASFBBDHESPJVFCIDSXNSWKYZUCCAODIS");
    msg.man_type = 16647U;
    msg.man_eta = 865695548;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.60555086739);
    msg.setSource(45813U);
    msg.setSourceEntity(21U);
    msg.setDestination(44775U);
    msg.setDestinationEntity(93U);
    msg.name.assign("OZAEEJHXNKDNBQRTXIPDCMBYBVOTHVWDCLOUGUIRGDMTAAFMHZLGCSHGDLELEKMWOBYAJBXGMCTNXWRFMKDCXFJUOWRFYAVCKNQZQPUOBEAVHNJXGLXPNSDYTOKYDESPLFNTZZPKZ");
    msg.value.assign("SRVNBHIDIMIEYWGUDEHUGVLHRAQNDYPKYCUPDTHSLDOQWESZDBVKFTSHUIWFEQLFJBCMFPHMTIPYKMRSGJTWEUIUOYNKZKNQXSGOJKNWLGJNLEPQZSCLUQCQGAOPFYRPFAIUTATVJVCXZJXRVQJCND");
    msg.type = 162U;
    msg.access = 114U;

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
    msg.setTimeStamp(0.416559774918);
    msg.setSource(53550U);
    msg.setSourceEntity(138U);
    msg.setDestination(1060U);
    msg.setDestinationEntity(101U);
    msg.name.assign("NBIRONWAEHPDSTSKBSEWKOXGCFZSIWCKVIHOGCBXWPNRIBIFSZEBUNR");
    msg.value.assign("VCLANTDVWQHADIQFWQPKIFZLPHZIBXKNXOSRLBEGFPEPOUAFPMIBQADGDDJXUCDQNRWIPGYCLKTXXSMIZLHBZTLZOAJJPGSBCZHURANLONSMVSRENXZBUREWNUAGZHFRJRKQGVWXYNSDAIKCITCWUDKESMRPCLYBOEHFYQPGKMTXDWOZKMAFWVTFMRTRYALOPYGTYBQFXUVJFVGVSDCCWTJB");
    msg.type = 236U;
    msg.access = 130U;

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
    msg.setTimeStamp(0.289018609131);
    msg.setSource(48274U);
    msg.setSourceEntity(198U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(10U);
    msg.name.assign("UEWWJOIWHNMKZMNYSXCRGGQDOYDTYGHETKZLZJAHMPTWWRNQRTLGWVILZRTASUSMTXQOYEABETCCIVFADEFUZTLFVHKSGDECHLPCDNFQZZRGOPJXFUAIMVPSFKHFGBMNDOUMCSBEKYXAKAHXBDPVJOCPKXVYQDRUEVJWQIYNLBTIFZFBLTMXNHNGNOZYKYMVXCCUKPPBXYGIPADCVSKBMJO");
    msg.value.assign("JRVOQZWNYKKLEFMOZRUBVBQASHYFBXNWBNIIUREQXYJEFEZAQUHGHJGDQ");
    msg.type = 190U;
    msg.access = 95U;

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
    msg.setTimeStamp(0.997806329087);
    msg.setSource(50059U);
    msg.setSourceEntity(181U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(29U);
    msg.cmd = 223U;
    msg.op = 224U;
    msg.plan_id.assign("TZLMDRPVHKUUVDZSFHAPYDWIXRRQZQZKFGXTMPMPSSAESQRFYJFLJZMIPROKHRIYWVXBSLMKVHIVFASEHLCEEDKELGCNMWDCSBDKWQWBCRRSREPWKAITGBXJYTGVSFJUDHOZZINTDIXIUYOOXY");
    msg.params.assign("EHMHKRUTXBCVXEGAWINSQFNWZKSLBMEPBIPAZXSBSHXEFNPUNLWCVINJICMAFCCMYYGJULXMSMQYEWIGCNHWOYDRTOICJLFPPTMOPUQXMUVWHRZVEKHHKTGF");

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
    msg.setTimeStamp(0.295285717636);
    msg.setSource(33729U);
    msg.setSourceEntity(90U);
    msg.setDestination(64299U);
    msg.setDestinationEntity(56U);
    msg.cmd = 209U;
    msg.op = 75U;
    msg.plan_id.assign("ODHEMUJVQPWXWSHSIWLDMHFBETKJOKNDGIVIHUYBDZWXWLBAXXOAZVPJJELIVIDATDETPLBBWHDMDAYDJFTPFAGONQMFABTMYKRYLURGIXHRRCQWKFQNZSPUGCALFKEVTGPFOQYBURKCQNFCBCCSOAPUQFGISWVMEQSRYUNSGG");
    msg.params.assign("TPWNPVEWZUGVTZGLXEAHNNNPIHTWUIKCWUATTDKNPHCMQTZISVJRABUIUXFKYBVJSYTLZFNQDJIYNSALIWJGVJCXUWUBQQNUADRMTEQVQHLSVRJRSDGA");

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
    msg.setTimeStamp(0.316341568493);
    msg.setSource(35567U);
    msg.setSourceEntity(117U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(42U);
    msg.cmd = 227U;
    msg.op = 107U;
    msg.plan_id.assign("XAQTNADFULYXSLNHRPXPYSIMBDLGHYGPAOCFJCBEANAZCGKDTKEUOYCFCTSX");
    msg.params.assign("BCALIYSUDXKJFADKHIHDXVCIPOMTXNRVCAMCVNSPTIBPBLYCRQUDJOQNZEWYYWEGWMTPHASDIZEEQTRSGOMJBGMOUTKRZOIBOJYDDJULAGJWROKGFSTGSNMKQRBHPJVNPLAWGEPAWFPVQPOLWFBZUNYKVIQFMIMUNCLUMJXFEZZTVNXVURHMHAFJCHRSISAGHLFAZXFHVOXTZCNQDVDHWLUQNSBKOTRRGCXLYEXBEDZKQ");

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
    msg.setTimeStamp(0.1709055632);
    msg.setSource(33164U);
    msg.setSourceEntity(165U);
    msg.setDestination(61700U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("CPLOQTXUEGSUXGQMYKUHDYSNGTCWEEKWZFFSVIKVSHHRLTTAKDUTAVJKUPPCYFYXRFAMHEYGUFDICBRZWDWVBUQZVAZUQKNPNTTPHNLHMDPDBYCYOWSNCUXIELRQGCRTOBNDOLDFPLUIWMMSSFHOTRCRJCXMYJXCFJBIKWJGVIAIPAVQSNMZXZHYRBMWWBXLJZHVJK");
    msg.op = 239U;
    msg.lat = 0.57470239436;
    msg.lon = 0.992805678464;
    msg.height = 0.835514869789;
    msg.x = 0.960394089505;
    msg.y = 0.792096320005;
    msg.z = 0.577094842289;
    msg.phi = 0.193542484435;
    msg.theta = 0.681913681986;
    msg.psi = 0.311646830825;
    msg.vx = 0.376743645957;
    msg.vy = 0.342710634377;
    msg.vz = 0.395935906796;
    msg.p = 0.89403639217;
    msg.q = 0.290393392295;
    msg.r = 0.282259510871;
    msg.svx = 0.622223856652;
    msg.svy = 0.771295518131;
    msg.svz = 0.7037759153;

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
    msg.setTimeStamp(0.909140786211);
    msg.setSource(63491U);
    msg.setSourceEntity(198U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("ZDIBOXLZMYITCSRIUTHWFBFJJXJHTZBTMGNXEPNMOYDDIGGVKLPVUXAZPFYYUKBVQIPKBDUOEHPNYCMABVBXCHEXXUENYAYU");
    msg.op = 226U;
    msg.lat = 0.774796348035;
    msg.lon = 0.857517519323;
    msg.height = 0.908271598022;
    msg.x = 0.0360707786996;
    msg.y = 0.831285471082;
    msg.z = 0.343345853635;
    msg.phi = 0.0500334881312;
    msg.theta = 0.214764140032;
    msg.psi = 0.496138525323;
    msg.vx = 0.602717549671;
    msg.vy = 0.057039403298;
    msg.vz = 0.389375925092;
    msg.p = 0.73058776226;
    msg.q = 0.661433021327;
    msg.r = 0.21583710025;
    msg.svx = 0.378357698942;
    msg.svy = 0.502693533282;
    msg.svz = 0.430862438422;

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
    msg.setTimeStamp(0.335986162504);
    msg.setSource(21795U);
    msg.setSourceEntity(139U);
    msg.setDestination(31115U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("BYGZSRVLIPFIJTWITDQMSCNGTUESKAOPAEVTWRFRDMHEBIMCWNZLWEQGOWUMLVKXSXQZRIOEKFOOSKVZVBMBEEOYLBXSJWTZAPNCEOXACMFZAELDCTHYFJEDKUBXOFVJPVDISNZFFDVPUVLWCZGYXMTJMHJNPXQBGCHBNUMGWAQYRXPLNKWLHIZPQYQRXGYBASAHRQAHLNCYJIDUUOBQHTYUVKFGPCWYNIMDDJKNKTUHCRZKUSFTRSDGJ");
    msg.op = 31U;
    msg.lat = 0.269862642755;
    msg.lon = 0.766126219711;
    msg.height = 0.747649385746;
    msg.x = 0.331422634005;
    msg.y = 0.19571333935;
    msg.z = 0.134385965441;
    msg.phi = 0.277247651099;
    msg.theta = 0.337533940045;
    msg.psi = 0.40356964707;
    msg.vx = 0.70988104345;
    msg.vy = 0.762379025624;
    msg.vz = 0.246816438934;
    msg.p = 0.957448284602;
    msg.q = 0.0870265382202;
    msg.r = 0.624580735546;
    msg.svx = 0.65441131493;
    msg.svy = 0.404783867181;
    msg.svz = 0.823859599734;

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
    msg.setTimeStamp(0.786928644997);
    msg.setSource(58712U);
    msg.setSourceEntity(29U);
    msg.setDestination(52053U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("TNMOBSNOBTLBAGVFQLQBVUJGKSXUPZQHHHYZMZXJJFVLFHUCTPYWWCNGADVDMKHURWNMWGRUGRHXLZEEFRHAEOTLATLDSRQTAUZYKPYYRTYOWOU");
    msg.type = 188U;
    msg.properties = 238U;
    msg.durations.assign("DYIJSYSPYTIBZCRCMGVSIATIGYXFLCIHEFCCBNXJNEBOHWLWVEEVDABOQPOGWOMMWHZMXQBZJP");
    msg.distances.assign("YKRPDUMCYHUBNBUWOGSTFLYZRMPYHGDXGGOYFKEIQPHJPTFEZDZXKKNXGJOJCTWBE");
    msg.actions.assign("ZMPOKRDOTWSQULUPBLPIYYEAGVBZISIACLLRVZJQWZMLCBRHUNHIDECMIPDJIKATHTCFUWRRUSWGLFXTKHVAYQEXWGSXWXBEOMNMYVIJRXEBDXKHKLUPNLUELZDNCGDHYNQORIJYCUNSEERCZKSOTTNJMVNTDGQWQAPA");
    msg.fuel.assign("ATXDGQNAXGXTYMURJLNVZKBMOEVLSIGBXOJHNEVHHMVPURVJWGJLMOZUJCTAXPSSNMYDOFBAWRIYVJFUDAGAQIEKZTWDPI");

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
    msg.setTimeStamp(0.955132439339);
    msg.setSource(56133U);
    msg.setSourceEntity(19U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("WTULEDPDOXVKJDWCLJVBAHLTQGHINDG");
    msg.type = 145U;
    msg.properties = 136U;
    msg.durations.assign("HKLIBWFBZMVTEOYHWHXFXMZEYSACVWDCNSKYEAFUUHJIRLBVNCNQLSOXLKGIBUHPTKNSHMVDHEWAJZGGOLTLWLZFEBQSLZYMIVTHPEPLUCNWIA");
    msg.distances.assign("YHPCBJXIXSBPLICRVTRDIDYQPNDKHWQRJAFOUAANMFAZCQLUQTYHPJQGOSMMPNIKGVPMNLKWTHCCVIZJDGZCLPZYBOGQWLIZYZXZFGASMPMGQGYUUMNVWQNORYUEXVSJHCRLDCSABSANFFNRAVDLIEJKKJWVMBKOEFEDKTTXEKUGLLJSSJMWBEYTTZWFTODVNAYDXQRF");
    msg.actions.assign("RGBTCYTXTQWYAVXMHWQCFJAUDFWQGUNDVZSJWSOBKHSIMQOTHNUVNLOYFIVDWXYRCBGAUIVHFIXALBEELRKNPEQYOVGJXPNUDYNTBOPEQLNANLVUZHXJAEKFELKICINHORHZIIDRPUWMABTHOAAQWORDSTZMSCLMMZSZM");
    msg.fuel.assign("YVPXCLBINVZAYQAOVLRCNHQZPAPFXRCGZOBBVZGAWARTBVYNUWSLPJMXYDKLUJEIGZCHTFOFIBOWCSHRMKXPTXWEJDCKTRMBGS");

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
    msg.setTimeStamp(0.806586731612);
    msg.setSource(36609U);
    msg.setSourceEntity(30U);
    msg.setDestination(36332U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("JJAQEXGGCOYWZRWEVVLVSEKOTIIJRGKZKNPVWCJUQJLXYTYVRIXZILOKSMREOHNTNNJUNRHKTFYMYGEUMBSYDAFUJSZODFPDIWIVHLCICHXXQDFLFKWQBBHCNNGZWGCZHRUTSELTFOUWYLMCESADMEZOTCUKKPWNXQLAKPNMTTAGHBRASBSR");
    msg.type = 235U;
    msg.properties = 142U;
    msg.durations.assign("TFXSIRHEDBFSRCIOBEQDUBWNMEGPWOZSFWWYJATGBOXZPKKXWDYOXKBAJQGZKEOVPHIOYBQJPYCTATJPENPHSUWMWLJQLACUYZNOANVRFOXTTDUAGBTTZFINZEIRNUCVPVEYCMVPWCSYCAFMKNJQSNAGZHIDMZFJELGHHDTVKSHLYLMJXHYWCLURZDPGBGURFRVALPWIILGQRBLEUCTDHNXZMNHGQXDAUXSOVVFLQKIKFRS");
    msg.distances.assign("HQWFSNTUHXXPUIUDCBOTSJQNMGAVUKHMZGAOZEZHXRCVFLLCNAAWIOZHCXJVXPNQOZWBSFIXXCYQBPGI");
    msg.actions.assign("JVRQRUKROCTON");
    msg.fuel.assign("HUNWPQFIBCDCFMGCDJYZYFKGIYRQSLBZYYHEBIXALQOJKOXSDQLRHKKJNWKVTJHCDCUIJQGMHARUNCWGBJJWIBWEGROBZTHCVCFLTQWKDNVLPFVZDYMATPNQKVOSZXALSHPCUIWMEZPTRBEQNMIWIUKRFLFPGOADPGJPEMHOGFYMRVSMXAJSXTENYYKUSXZUDRBVEZMYFOOQEGNBLXMTRHUOPXAISG");

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
    msg.setTimeStamp(0.58535407653);
    msg.setSource(51905U);
    msg.setSourceEntity(132U);
    msg.setDestination(57241U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.0141869992187;
    msg.lon = 0.482253700143;
    msg.depth = 0.550006833612;
    msg.roll = 0.138851575105;
    msg.pitch = 0.307733155815;
    msg.yaw = 0.0159335815268;
    msg.rcp_time = 0.614276038597;
    msg.sid.assign("QYHJUFHVETCNSRITPPPXQRQTWDWMBGLWQYTLYNULIQZNHZZOVAVRFMZZZADHCDWUQHIMKSEDNJSASEXWPJVBEIQZRMFFCULPKYJYGEIWQJPNQFBDRWYXLVMYARMRGNZPKRFVOUAFEHHYKXLPVBBBMLCUWNCXZJKGNYRDDMAFBTUKGESLGKPCDLOGTIAJQSOLKTOVZWOPJXOVKDOFGABFXIMWIOEJOTIJBGXVBTUSSMGCUNHKEACD");
    msg.s_type = 141U;

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
    msg.setTimeStamp(0.814299828856);
    msg.setSource(19066U);
    msg.setSourceEntity(187U);
    msg.setDestination(39439U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.659661698397;
    msg.lon = 0.396639243887;
    msg.depth = 0.0383299504665;
    msg.roll = 0.742549357927;
    msg.pitch = 0.351954504678;
    msg.yaw = 0.917978512108;
    msg.rcp_time = 0.108905775209;
    msg.sid.assign("EWPKITBIWIZKYUVEQAMBUNMDUVVSGLOVKNMKIJDSMFJUDZAHNZJEQVLTWPPRKAQMYMQXXEUPVHQYWIUXEKAFGMKDLIEUOHAGSHVRXRHQPLYOVGDHXGAIBHFFBKZXBFOXFJOCRHKMUBBNYDDNNONJQCNBEGYJRCZWGXRCTPTFSSMTJWUXSYSJYSJBTLGUCWRERLLCFTAGKDZIHVFPRAAPOXWDZHLML");
    msg.s_type = 197U;

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
    msg.setTimeStamp(0.285853712349);
    msg.setSource(20274U);
    msg.setSourceEntity(36U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.198569732831;
    msg.lon = 0.740675265178;
    msg.depth = 0.362819295226;
    msg.roll = 0.0038108093105;
    msg.pitch = 0.288569212845;
    msg.yaw = 0.417593367216;
    msg.rcp_time = 0.809224383473;
    msg.sid.assign("MWZYRPSNGYXFDILBOOONJANBBFTISNDKWPSQLEVSZWTOEYRDSGVJHANPTGUDHORCLYRMCMDJEVQXUZTCIDXPQQLXKEXIZDIXHHRFLIJMLDOTOUPKWSYBF");
    msg.s_type = 15U;

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
    msg.setTimeStamp(0.290291884606);
    msg.setSource(49340U);
    msg.setSourceEntity(27U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(164U);
    msg.id.assign("GKBUOEXFTINJSHGBJLYLZDTYSFMJKVBQDKYRUULCCLQBYGVXWGPGKLSLUZRJVWVKNNPIULCPOOFHNFHJMZWLGKSQQPAHF");
    msg.sensor_class.assign("KRETXLJMZHNAFJKVGCZSPHUEMPKQXLGEMYYNZTGOCRVQBPYMPYVIXRSUIHTWWSKWIRYBLPRZFQCOUZLTVJAWFFTYYQDDQQDAURUZEGENONZQBCINUTDXJMZCQKEBBLFQROJCHKWFNBSFIDDMWWSEEYRSVUJOMJGPPVGLGCHCMNTYTCEHCIPWHBANGNBZXIISDFBUHXZYHXQAIA");
    msg.lat = 0.0314965230938;
    msg.lon = 0.605913342558;
    msg.alt = 0.0503826626542;
    msg.heading = 0.163570856356;
    msg.data.assign("ESMTYWRUFPHNXMVSKANLCPTFUANPQCGJKUJCZLPGJVQULWGLARSELMOOPEGLRTCKKMIYXHGBZSSTZVCWNIFGUTYITRDFDPLOZTPDAEEHYLVBMW");

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
    msg.setTimeStamp(0.936756337588);
    msg.setSource(1258U);
    msg.setSourceEntity(217U);
    msg.setDestination(29011U);
    msg.setDestinationEntity(250U);
    msg.id.assign("RHKJIIIFQWXOQPGPEKGMRBOAILLSMQCNTWNWYHZYOUPGMGOFAXJSDOGNBAMOCWTXQIFBIBZZKKQOUTUUUTRRAKVHRJJEWNQOYIYLJJDYWVMPUQDSKYTBPUMJGFDXTNHKGCJATQBDZ");
    msg.sensor_class.assign("VXAMOHSGTVNWKYYRZOZBEOMEAWLIBTVFKNXQNQACERNCDNLBAZHWTFGLHKKQDIAUVMKUYCCNXRXGLOAVSCYVCFQUMJQXXTJTLQUDMRSIBRQVSPKVAONTYEMZIVSCZVJOUPTEKDSZXGHNEHHFLNWWQQWMYNAGZJSDECPFSBPJUHRTRTLQDDFFBKKUBZKDPSJMRULWJWUOGOOSWPMGBHD");
    msg.lat = 0.897386690834;
    msg.lon = 0.293289392198;
    msg.alt = 0.741808605447;
    msg.heading = 0.747046326698;
    msg.data.assign("UGBCQFTOMSESKOQWAAMUUDYXKGEMMAZWJWIIZMOM");

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
    msg.setTimeStamp(0.773523360831);
    msg.setSource(25662U);
    msg.setSourceEntity(170U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(144U);
    msg.id.assign("PMJGWAERMUYJZBFGFJHQUSDRWUVGSHQWEZOUNRZNNJYUVATMEPGGQHHPLHKUTBJAFKTVRSDLKBICRZERYNKPNDUQ");
    msg.sensor_class.assign("QNJWFDMSSCVANUIPQYGJFXLJCZIYWLNMOQAPQJTIHHSIZESIRVDZMBGFDXBPAJWQVVLJILOGFPLDFCEMJLNBWHVJMEVKZKFEMRTOAEGSXUTEAUBZFXKPHKINAKGHKBVBSYIXOFWLDUOCVUVPPRENANAOXRECRRMTZGQGYWWRUGNQREVZQMAGJK");
    msg.lat = 0.192110322851;
    msg.lon = 0.534515104668;
    msg.alt = 0.379010238086;
    msg.heading = 0.148102317793;
    msg.data.assign("XYQPYISMLNXHBGUQNKWEFOZHTWXEBKALHZDCIJEPTLIALFMGVGCSRTGBVWMBDUAYQNLOJQEAIWDZVJQPBWANJGHOKIWIRQSFOJNZFPTMJDKMMOYTELEUFCKEEMUYPZKVAVSCVVDPBKRCQXDYOULVZFMDSRWAVINUSUIXUJBMPWPGXGXDYQFHJQNBTWTSHYOMIZNLJIKEACXCBFGFCXSFNOTZDOYGRKSQAPERVJUTUH");

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
    msg.setTimeStamp(0.051255280404);
    msg.setSource(51131U);
    msg.setSourceEntity(46U);
    msg.setDestination(32406U);
    msg.setDestinationEntity(90U);
    msg.id.assign("XFPIOFVVXLWA");

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
    msg.setTimeStamp(0.303607191515);
    msg.setSource(3266U);
    msg.setSourceEntity(153U);
    msg.setDestination(19655U);
    msg.setDestinationEntity(62U);
    msg.id.assign("TYAIEIOXUGXIJWNPBBRHSOMWITSDUJJDCZBQRUEVJMQCLGVORWYERTNSRCWOXFUKGCBUNMRPXULBSQATNPHZJFCCYDUDSFGPZGKDZFYVVYBVKSKQIINQFGCSQKILXJNFDCITEMZAHMTMPLBWBEQMAHJEJHXDHZYTPCXWNHFALJME");

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
    msg.setTimeStamp(0.989975438143);
    msg.setSource(63164U);
    msg.setSourceEntity(254U);
    msg.setDestination(28537U);
    msg.setDestinationEntity(101U);
    msg.id.assign("VEPGTFQKILYECDMNVWROQFYKWHHVTFWRNCMJMBKEQHNBPUILAPYFKLYHKFDS");

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
    msg.setTimeStamp(0.712125050036);
    msg.setSource(42874U);
    msg.setSourceEntity(102U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(155U);
    msg.id.assign("KNIRUQTJHR");
    msg.feature_type = 15U;
    msg.rgb_red = 107U;
    msg.rgb_green = 193U;
    msg.rgb_blue = 59U;

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
    msg.setTimeStamp(0.00884846413011);
    msg.setSource(34727U);
    msg.setSourceEntity(84U);
    msg.setDestination(30323U);
    msg.setDestinationEntity(105U);
    msg.id.assign("BQUALRQUEJDLJQHPGBLIMFRFFKCFPFIMNGYZLCPEFSIPLBWMREAXSNTDASOYCXXZRCYUHIHWALDAZCSUPUBJSVOEWAVNNKOYOXJZVWAISUBRITKKQJCITXSMRJXUHGHVGVFKWHEAYWBQGOTZJENVWYDSHZVKAOWNHRQNJEUEIWTBIBQZGH");
    msg.feature_type = 47U;
    msg.rgb_red = 217U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 176U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.29552634573;
    tmp_msg_0.lon = 0.659389382919;
    tmp_msg_0.alt = 0.666178016662;
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
    msg.setTimeStamp(0.0469789361951);
    msg.setSource(62919U);
    msg.setSourceEntity(167U);
    msg.setDestination(15917U);
    msg.setDestinationEntity(246U);
    msg.id.assign("EMQRWJSZFHQSQHBODRTIHCUIBVZTFUNIBKYUFDYGELPSAUTIVZOXHKNCPQDXXGCIZWNCFENICKGIRUJAOYDUGUVYUHSCHCFVJTFOVNBUROAAKECAMBKEASRWFTEOVFXEHOJZBRXGZJMJVMJVRHKWLSCPQANBDJNQDOEVUWIKTYGKYMSYWRMWXDMRNFJTAZDDPMSXLPKAXOPLGQPDEYXLTATTNMHLKMLCFZWZYGYLEPBVBXLLJISQPWGP");
    msg.feature_type = 51U;
    msg.rgb_red = 191U;
    msg.rgb_green = 34U;
    msg.rgb_blue = 154U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.394136619163;
    tmp_msg_0.lon = 0.216186157581;
    tmp_msg_0.alt = 0.0285122509465;
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
    msg.setTimeStamp(0.720448385304);
    msg.setSource(50019U);
    msg.setSourceEntity(143U);
    msg.setDestination(34845U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.668278076955;
    msg.lon = 0.50256174217;
    msg.alt = 0.238852658991;

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
    msg.setTimeStamp(0.83977979472);
    msg.setSource(32061U);
    msg.setSourceEntity(15U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.830387249805;
    msg.lon = 0.151484681043;
    msg.alt = 0.803256430651;

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
    msg.setTimeStamp(0.433098915688);
    msg.setSource(50519U);
    msg.setSourceEntity(104U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.934944399546;
    msg.lon = 0.68413591965;
    msg.alt = 0.163802993826;

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
    msg.setTimeStamp(0.44278455929);
    msg.setSource(30060U);
    msg.setSourceEntity(96U);
    msg.setDestination(32339U);
    msg.setDestinationEntity(99U);
    msg.type = 57U;
    msg.id.assign("RNCMLHNZIXOWTJOOTTETDYNHNGPARBZMMNSGWJLRHDUKYUKLJZAHGBVJFLCDTTIVPQAVCSQRACCEFFEGIDLKDKQMHRGQOEIDHVVWJVCFWDULRYEYXIZCXOFUUMHYQTBPMRPWFXAGJWOBKVAFZBSHQZULCXNSPZUNYIIOAXGGMPUEI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43566U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.52233437729;
    tmp_tmp_msg_0_0.lon = 0.480329858404;
    tmp_tmp_msg_0_0.eta = 3898501202U;
    tmp_tmp_msg_0_0.duration = 11312U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.364049378353);
    msg.setSource(32973U);
    msg.setSourceEntity(94U);
    msg.setDestination(31982U);
    msg.setDestinationEntity(75U);
    msg.type = 64U;
    msg.id.assign("ZPICTOLVVDGREJXMNRLHYEXZCUENPSFKQTSUVNGPWWBIGDHEVMIBOBZWRMLOBLAUNNCNMNFZLNGBZLBHVDZQCVAJUQSMHRASWPABMDSEKSMDFOFWVPHVHISCAVTHZWHCMOUUHTKOKSBERXKXYRDFXCF");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.101064065704;
    tmp_msg_0.y = 0.982841160017;
    tmp_msg_0.z = 0.416967316594;
    tmp_msg_0.k = 0.632407804494;
    tmp_msg_0.m = 0.0704528815359;
    tmp_msg_0.n = 0.152041908576;
    tmp_msg_0.flags = 67U;
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
    msg.setTimeStamp(0.117885978668);
    msg.setSource(64206U);
    msg.setSourceEntity(7U);
    msg.setDestination(63421U);
    msg.setDestinationEntity(111U);
    msg.type = 218U;
    msg.id.assign("FWBQMSADREERNUQKDZEDPIFFPJLTXIQUTKUVZBHPLBRDHVQCGATSYLRGEUJOXYTIGWCYZIZGOGATJIRNDBOHICCMVHXXJSXKAPQWBOBLQBESPEOVECPXOOYQJHWAFWPUMRSGTLSAFBMQODWHVICLUWHZLZCKNRZFFLMXDGHQOYUYDEVLNFMEYXNCSDMAVTJPNKVRKMUUTNUCFANMISHASWKPJWT");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.reason = 20U;
    tmp_msg_0.value = 0.63395223659;
    tmp_msg_0.timestep = 0.714771602691;
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
    msg.setTimeStamp(0.654245587211);
    msg.setSource(29522U);
    msg.setSourceEntity(202U);
    msg.setDestination(9242U);
    msg.setDestinationEntity(142U);
    msg.localname.assign("HJWBGFKNVNMCKVFXKIFLHIERGVJQGEBJYUXOYDKUMXGXGPNMXUYCCSYHXRFSZDYAQRPZOHSZKZMETETEQUQUYDZTTINFCWSMLDSLLQNMRKOBLTMTWQBSAPKFSUWJDNMACLHLNVYDVWKSVLERAAIFSJGUORRVZPRXADIABPVTHEEDHCOZITJMXEQPTAHNJBCIOWBYPWYUFDCAPAGZQOZHFJRNBIKJOXPJUKNBCGGOQLODFQLW");

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
    msg.setTimeStamp(0.397664821752);
    msg.setSource(11957U);
    msg.setSourceEntity(164U);
    msg.setDestination(2494U);
    msg.setDestinationEntity(241U);
    msg.localname.assign("CHGYOIFHGLTDKEUIUZQTXLRBOJYQDBZPCBDCBZZTIONGGEWNAYAURXUFUMSNCFZMMGHEXOXPOMFHVQVRMXBPLAKAVXUOKYITQMPJKUURZAMSHJFWRPOKRSBIDNRAFXLLZPTXSOFVVCOFZEKNNIHAYQSBVBRSPDEKIWNQCJPLFXGLCTDHHSQWEDIGCYTZKVFMNJGWVRQA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XNGIAAJWYIDDOMQXPBGMFWTRQDOKIADHFWCVXLTWEWRVQIUZCPYGYYFOJTPPHXTAWEHKNKFHYKWGUBZIKZZECMJGPUUAXUBRIANOTNSBSYBJGLTFMHSXQBLVFLQZENRYDMJITVEIWCSLZPMDOOPCOCSYBPQLAMUQ");
    tmp_msg_0.sys_type = 176U;
    tmp_msg_0.owner = 25105U;
    tmp_msg_0.lat = 0.93565944184;
    tmp_msg_0.lon = 0.14558470803;
    tmp_msg_0.height = 0.197255956639;
    tmp_msg_0.services.assign("GEZTGOEUVLBUWR");
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
    msg.setTimeStamp(0.620630618388);
    msg.setSource(64838U);
    msg.setSourceEntity(21U);
    msg.setDestination(31898U);
    msg.setDestinationEntity(200U);
    msg.localname.assign("EXFJQBAVIGLAFZHGZDVYNNPOJCMQTWNPQVPOTLCTDEPGTQJTROGPXDOLSSVKHLMWTRJLXLXOGVXVWSCZBJNTDAFEQDNMTAFQXAJMWZPFYSMUSRXDPZEZDRRMKIQWCTWGHBHPLBRYCFBHWARZYYVHQBLUJXWBPUKOAITEXIYEZGCWPNKHCJCUBEKREFKJMYMNUVEZZHLRG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VCUDLTJMQYCAOLBMLOFHKVEKYZKHBWUORABIVESKLPVNLRGCJAADUKVFMRZSQMVLQUSXBWQPYRLNIBFNCLEKSQQJTPXTCYPBZHWXPWD");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 64037U;
    tmp_msg_0.lat = 0.530144364457;
    tmp_msg_0.lon = 0.821044538473;
    tmp_msg_0.height = 0.305344139799;
    tmp_msg_0.services.assign("YAVWWSLMQZTXRHQBPOIBYRXLEMKZEMCRXPGYYNNSDEGSMLNTVGOFPLPZQVVRFRKITDKXJKIYEAJYGFSKEHHIDDTUJVOHTHXEZUKMIUHZJFAMKVT");
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
    msg.setTimeStamp(0.477844522566);
    msg.setSource(3473U);
    msg.setSourceEntity(74U);
    msg.setDestination(40523U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("FAUAOAKNSLDPJQXOPZQLETRPNDJETNRAURHFFNBYKMBENNFKYCWSPMEOUPWUHAVNGZXIIGFXCPYUXSLEWTZVIDWEBZBHKGVHGCOZGBDGKDZHDPWKYTOCMCBIFPKQKRFSZLJPDBCNQBSOPINEDXLQUUTYYYNZYQUHTHCZYYTCOJSXVKO");
    msg.predicate.assign("WLWLPQZXLNCAHUADHYIPLFZHJEJWVUBNMTTTOSUVWUHNZMZGJLVQBGRFTMITBYSRJKDBIWKZMRNAIIGFTYJFMHYGOTXHGKB");
    msg.attributes.assign("SVZNBCPOUWOLLUAGQUSAWSVXDRQBQJJHYLZKMOOESIYIOMDKBWSR");

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
    msg.setTimeStamp(0.266439539458);
    msg.setSource(29U);
    msg.setSourceEntity(36U);
    msg.setDestination(49789U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("GUXJDQUVKYPESUCZQSKGFHRBWFGURRJHKPXYLHWBXLOZKEVAZOGSN");
    msg.predicate.assign("GRHDFWRTCAJUCLQSTVNMRHSWDAHKYQDMZUKPEZISTEXZKPXBGPXQWUCOLOBIVIVZYQGVOUKVIOFDTACHZIPFNPUNWDTMIGRPLKXDLLIZF");
    msg.attributes.assign("SDTIPPRUOHYLELMBZJYBNJIHKSITZMLIHABVCXGYWOXJZLMDQPWULLEEFHYTGKNIVQFESKCALLHGAZUOBUZMATMBSXHDXDSYPOMVAQDKQGFFJKYEFSCQHBTPPKEWJPDRIUQJXKVFNCDNTCEGRJNHEUNUCWIRCFCMARDRGGSCXNOTVLOURIMGBYUWZJVWBNATVHWOKOHP");

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
    msg.setTimeStamp(0.658344360291);
    msg.setSource(64916U);
    msg.setSourceEntity(185U);
    msg.setDestination(10361U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("SBTUQFABEKSVZCRKIWHKPYAGSUXJLZJOVWBOQRWJPMKHCEIFDUIZCZJVTICHCNTS");
    msg.predicate.assign("AYVGXVWSISHZWJKBCQFKVRFCDWSVBSFHCUDKYJAMJKYSUOJUEDQFRTDZKMRFUGLQTZCYXHBGZQLNGXRNPNXXQYBHGNUOPXDKHXJCRKMWCPJYONPDXEILWIIAEPUSJCAKQYWQYTLDOPTIQPCWEBLJDDXRMCWAQSZZAENLUWDRLEZJSLUMYIIMTVZEKVGETIGVSATMIBTJMHFHLBXV");
    msg.attributes.assign("JLQCSDVLMBCDOSQMTVFUORULFSAAOFKJARBWAOUHPDLMYGZNIVYPHUSCTONONVSICSAYSPLTXKYFIKJAFCLWMTGVRDCVFCOHWEKPNXQYKZZHBORYGWXGXCBNQLFRMVGGSOYVJEUJGDJTZXGQKMEIAYKIWJMWNUERZIYCHECREDTWTZIYXQMTPKHDGQNDIOHEFPTPJLVJXZQNPBAZSXZBRPABQPUKNDQXJWBUMIHZKRXHLWLMFETBAVHRUBSGEI");

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
    msg.setTimeStamp(0.994627682232);
    msg.setSource(15648U);
    msg.setSourceEntity(58U);
    msg.setDestination(38194U);
    msg.setDestinationEntity(30U);
    msg.command = 104U;
    msg.goal_id.assign("GDHAPYIOQHYIJBNKNBIKTZORVBSKOWFCKPPUOQBHQXSQCIRGWUAHRMVYCJNK");
    msg.goal_xml.assign("HGFMCTZRPKQQ");

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
    msg.setTimeStamp(0.20596680008);
    msg.setSource(22930U);
    msg.setSourceEntity(156U);
    msg.setDestination(9944U);
    msg.setDestinationEntity(15U);
    msg.command = 83U;
    msg.goal_id.assign("IPOTBUGELZKMXNZGRLHYCNTKLUNBVFUCUXQDEQZPGVCHQWNIJWZABCQFGBBGQEARUMYNTZINYUDAPHAHISTBMYDYEGJLLIXHXRIYSUYFWMODNRQGTSEPJSHLOCUHKHECMWBJYNUYRQQAVFKPTLRPDOFOMBNIMZVGOKEVOPCLWBQFJCYDOESFWXMLMACLWTKFQZXJZJGVWVIIKREPXPSXXABZWRTPDMSSGFVDRKFIDTVZ");
    msg.goal_xml.assign("LJNBIWHQLRXBREWILSFHJTKIOPWPEJSFFJETUAYAPHXGTCIMEXANZVNCWKTZYCZUZRMSVKAPOLMKIAQHNAZPYCQFHJDSTWPAYMZIGZGVZXRNTSAHLRSR");

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
    msg.setTimeStamp(0.660491179318);
    msg.setSource(4034U);
    msg.setSourceEntity(92U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(224U);
    msg.command = 94U;
    msg.goal_id.assign("WZQWLEIFFMCHLBWSMSZOVEWPIFPHEJDQRKGBXRGLQDYYRYSRYPKSNPQPJDERYUDPFTWTJXGYCSYAQCCIQHNBTTWDNIOHRUKLDCXYXFZJWVVXRPYEONUGBRTGXZTKIJQIGMHKNBBIMPFGWEHZMCMZOJTKVUENUIBOXIZJCHBTAEAGSUJUXNOAGSFWVCLQVNLVPKFSLFHOMAXDAZNMCKLT");
    msg.goal_xml.assign("ASSLIBYPPDEOWWKZDHPSCCIOTAUKGXIMOHQDFQWRJMTFYFJBKJURIEJNAYOJHLVYYCQZKYGQUBUGZVSBJMWXXVDPXGRSUJFNQEFNBNYKWBXVIBZOJALLPIFKZJMCCOBLGFQWRCDZRHGUEXTXHADHVLOYAEHUPNZNLCQWMKASGOZWDZUICNTGMITUSYEQKEEGOVKNHORTJRPYCRPTDFXVIIWTEXDWVSMSGDEQCAHALRSFTLNAZ");

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
    msg.setTimeStamp(0.876871265278);
    msg.setSource(4287U);
    msg.setSourceEntity(18U);
    msg.setDestination(1122U);
    msg.setDestinationEntity(150U);
    msg.op = 85U;
    msg.goal_id.assign("LVHUNISYWYHGLBDRSIABLHYGEPMJFPIJVTMQFODMBENRRXVLQSOHXWHOYUMQNZFAGNJAJXSNDWAAYIXIOYERYBGPZKEWRKJHKDIJCCOVBVGGRJQAKFTQQAVRDDPKLCBGFCCZLDXFZGTDKOHKSFEWVYQDPRMSHEZYSZEXWWCSEAZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ATXQYFBPCTAVZHNFGWUPXRZOWGBKMFXAKYKSXMMWQRYWUTYEDVCDEFROYUXAUPORUQELTJKWCSZIPJXWZJUAZJVSRGGHLQJHINEWPSFSTIMKQKOEVKEMJEGBNAMNISDXHNFMZLUNQQZLBYLZSRMPEGGIKTTNZVDHQNBDMJSFVCFJCBXCQZXPIOBVCGCYVVJIHUDLLAIOGTOAOKHEHUBRALAFBGV");
    tmp_msg_0.predicate.assign("TEORDGACTHUIXNTRIZEGXXWSLS");
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
    msg.setTimeStamp(0.279036471253);
    msg.setSource(26695U);
    msg.setSourceEntity(63U);
    msg.setDestination(9362U);
    msg.setDestinationEntity(160U);
    msg.op = 142U;
    msg.goal_id.assign("SMFXXRQMEPNHJCTZGPEFGDAZNQHMWHWATPJDGODYGXEEOPSEKXVORYQXIQWCDAMFITEYYQLMRJUGHHHEAXKXIRFPHUVMLMHPTINOKRGWZLTDNJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SPRGDYPNBROV");
    tmp_msg_0.predicate.assign("PQNLODZSUYDLAKHROZUURYJUPDKITDHWEKIKMBMPSYLWCWIOXGDLNRBZCEHCVMAJMLZQGOGRSTWTZLQYTRASAUGSFENIFNIAMPYNNMPSMTZWESUCPKAHBLWBCOHPGINTCJJVUQHFARHIWTYTVCDJOCQMJXWFQDSBOXWBFGVFJUEPVYJNZKIVTAMVQEIXUQEYEGOHKZINXSFCXRKRYFYBXOFJESXH");
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
    msg.setTimeStamp(0.649880772467);
    msg.setSource(57504U);
    msg.setSourceEntity(86U);
    msg.setDestination(12217U);
    msg.setDestinationEntity(234U);
    msg.op = 48U;
    msg.goal_id.assign("HQTUNDJOEBGXJCXVWMIBFJXORVBNRODGSALPMAAYTVRIAUOAFZRNXCCGCTKERUFWWBMZQMAPJRYFIMVARHMUDTQMUQYEGWILDVPSSOCLHRQGTVWSXMMHGHZCUZJOBPTGFILYXONJBHECSQISOFEIZSFWBTYYXBQHHFLHNCPZJTCGDBUBAFKAHYWOENOLUKEZEKKTQINGXZJLWLJZYU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XWFJCGITQOWRAIHVSUKRONZDPRSNKVEQVSDHDCNDQNXTIVZGOWNWMBALKUPUI");
    tmp_msg_0.predicate.assign("JVJAIZKZOXOFTTHGVGAUUJUEFPGPRYOYUJMNFVAVRLOEMCKDXYDKNSSBRPUSFASNYTDAHCGBQCSZONMHIPZDJQDMDNVIJDTLTNGRCBIBUFODGAXDIWQIQTULGRNXXFBFBOTRVYATOUNKJRPJBYOXPJGMXMIEMSFHJZBTIQLHQKUCWPMYCCWLHVORFGNWVRWXTIYAXQSYXSLAPQB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EGGNJXKZOMFQOQROCODWTJLFBBKNHFFFJRVCJTPSEBTIOWZFULIKTRAISUJNNINMUGWEULUCXKHYYVTGNZHHJZJEGFUOUDCQAKMZIWYQDCPWWDQKCGRNROMBDEACFOEJMMPMFKQDHCYU");
    tmp_tmp_msg_0_0.attr_type = 249U;
    tmp_tmp_msg_0_0.min.assign("ZLHXFZVJQEZYQVLCOQIBUFNHDMMXPHUFVADMWZGWLJ");
    tmp_tmp_msg_0_0.max.assign("FSEGAEHJDRITHEWPGVGOWXIUJDKCTLCKXNBMRSSHARCEJCMZALUEARQJOXMYDIOBMGTHOXRVHWBELNQLQSXZUIKODIWZQPZQCYITGEOFDZNCSBAFJGPTFJNKYSHATZFXUDKPALYDOQSYPUSXIQZFAETGRLYNPJJVBRRHMMARONIOXCLLCWTJKNW");
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
    msg.setTimeStamp(0.69739951232);
    msg.setSource(57953U);
    msg.setSourceEntity(234U);
    msg.setDestination(44589U);
    msg.setDestinationEntity(100U);
    msg.name.assign("NNMDTIQFZLAYCAIQDBAOJIJYBZQDLHRYNOBKTOCBUZQOAPIBPZJGNESELQRBCCFSJJOELTWXWXDPSNAFYTFPZYSADFUPUVPT");
    msg.attr_type = 146U;
    msg.min.assign("XNCHRTNDASUVXNPTBLQODVENQDBPFTEQIQSYYATUATUGXEGNSJBOMQKSKGIOFWKDFPRDMHVTXMWILQABJRSFCNRDWHFCUQSFPKAIRKGBJYCZRVUDUJAWYCOUWLMGAZSGNREXGVZWMXEBDHIILLVTVQEAHITLWO");
    msg.max.assign("NMEQKCPXCBETYWUUNRJGHLIZGLRFDXIIIBJSVAQTXDHOXXTSNNMCLETKGTRULCDQKZRMZSFPREQYHWPBUMIOSQHZTWSTJFOHKRJGLFKAWFVWBQYCAXKCTYQOCVGVZNEMZUDJLSXAQUMPMOFKUOUAJDVNOLVVUDAZEMMYYFISPNAHHBWKNRYFVBYXIPIDXKADVUGORGQSSEA");

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
    msg.setTimeStamp(0.30013116387);
    msg.setSource(45181U);
    msg.setSourceEntity(24U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(239U);
    msg.name.assign("TQWVQCLQODKANJABTJJVTNUUHGFNMLYMZNYKIAEBPLCZGKJLLESXEPMBGVTACQTHOBOUFWIHDQHVPD");
    msg.attr_type = 209U;
    msg.min.assign("HDUWVCLIFFTXAASITXAXJJWZEVGVYEHGSEXZDDCNKOMPPQZKMYVBOQDGAJBJSWXAGBTHIP");
    msg.max.assign("HYGCHUSNDDWPXUVCQIRCEYRMDBYXLLHFIXFGWXRKGIKYENKQSAPUZZJBSORHWJPLAIFXLIGHQZNGABYVILZJUZTNSSATMPUKOVLRQPHYTMADUYLYQ");

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
    msg.setTimeStamp(0.738129245324);
    msg.setSource(61748U);
    msg.setSourceEntity(76U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(121U);
    msg.name.assign("OZWSYVPFGSLOVICJZPDAEGEWBLTKRLEYNNCBBYHCUIJAZRZGXKTOMHTQJIUDMWEDWMEVYLPEGNGCYPVAWQUDFFCDXTHESAHOIIITLOBYKQQLRZCGRJSCUYXBOEMVFUVDODKKRBTDEMBXIWGVSNQZKGTXQCDHAUXISJOUJWUMVTCIJKXFTJZPFOSYAN");
    msg.attr_type = 19U;
    msg.min.assign("RYSNKCYWSEITGUXJDROADXWWHTWYRANQCUZMHKBSIRFVBZESAPMCHQPOTQHJGGWZASWITGVEFFRCUOHQXXZGNWSGJGMQYEFFOUFMDFXQDKTBADOMDTDWNMJUUJT");
    msg.max.assign("ITIUJPBATYBCJWFTQQMYUBDOYCUBZRMTQZHWPRWNBSEEIIUCTJGVDRI");

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
    msg.setTimeStamp(0.0788850962812);
    msg.setSource(52816U);
    msg.setSourceEntity(178U);
    msg.setDestination(30290U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("UCIOVJYQKOIHVHSJGYFWGGQDADPOOKKRGFMTVSWPFNXYKUPLLPATFLMKIZARJBTVTLQPRUAOIZJGDQVKDSSFXYZVVSJZMTFWBKKRZLBEHGELHGYNKMDEIHMZQZRCLZZYVUQNXXTNUCSECXECEMDITGSHNHRYHQXSWBPWACQOMWPYYWFUQRDJJJIGSREVXCFTIBKOURMADJEHNOPPOLWBBEFARXHIMXUXDUPIDGJQ");
    msg.predicate.assign("MIQADOTTYHCQLQZCBSQRSLQOOJGQAOLUDVCTVJGLZAGNAZDYBGTLZQSDFKCSJKRRIMIVEXRARBKFOXFYNKWDPQAVXPIJEENAIPINFHLYGHNRPWJNYWPYWEBGUNYUCNXZNRELFQBMUKSEYKVEOWCDIQAWJHCFBPLOLZGVZSPKPOKHUFJJMTTVXILMASHUWHTWHDTGMIPVWSMECGBFWKYFDGROXCPSJRBCKXUIVAFMNBXTVHRUZMYTXHOUEZBUX");

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
    msg.setTimeStamp(0.060104524456);
    msg.setSource(23497U);
    msg.setSourceEntity(46U);
    msg.setDestination(25293U);
    msg.setDestinationEntity(28U);
    msg.timeline.assign("UXZSYONTQYCEQWPXMKQKXXYESTKDJQKWFWLFAWNYTBHXRMBOHAWYASTPEHGDMARTNUK");
    msg.predicate.assign("YVDJBADRLLEMZMWKMUIIXMLVCOLVPPDTAGHRLMQBRSHVUYDCRRQYAGCHDSHNDZCKGOTXBXUFEWLTQJATJIYQGBMJDPGSEPOPONJXZSGZQOAVMFFWUBNQOQYZCKYFDSIQAUEZNHQIOGHTPKUSPGIYPYFWHACV");

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
    msg.setTimeStamp(0.370044320539);
    msg.setSource(6350U);
    msg.setSourceEntity(87U);
    msg.setDestination(53940U);
    msg.setDestinationEntity(68U);
    msg.timeline.assign("BKRXFJISTIPJUCNOTKGDKMSKWNUXPUWKEWBLGFNYPZQACJAUIGNWSVCSVHRRGBYDTVQHAIJKUAJMZBWTFOGR");
    msg.predicate.assign("LQOHZMCWPETNJVXJDKVRGLKJNMIOVPNRYNSVIIZCNVKGAQQJUKFFDMDZPSHHBSHYQYHGQXZODHJXDXTYOJNBLYXGWORCTLBCUSDPWARUIGKEJFCPVBKMZKBSUZUSARAZUWBDGNTNEEVEMPPGIGNGIYOFEQJTMRYOORBUSRCALCAWMPD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CYOKVGFMVVXEXCPSBFZDZHURYRHUCRHJQECBZREGEZTWOSUPQJFNNLIGTDLAPVKIQZVXBMAVYVBJLQTKESEWHAGKJI");
    tmp_msg_0.attr_type = 220U;
    tmp_msg_0.min.assign("ASLDPVMCWMQOOLCJFRNKTTZETFQMWRUOSBDREZLTRMVYHGEFZEHCQLNIMPPUWNGJYJVKNPLUPORRJXBZCYKQXRTWSQJDBIALVDAKZZSSKQOOPHMUINPZUAYKBJMYXGBYLIWSGREOHPIAGFKVICGFNZBPANSCWQYZXUCLFSLEGVCHKXEGYDRWJOFOAITVCMZBAVINJJBBXSQ");
    tmp_msg_0.max.assign("RAKNOUCYATYWTYPPNEOPBLFOZUDYCKRCAWAJZVVGOCTZRXNZBABKZRRQUMOLNVWMXOFPVLPMQOHDNEXUWGJFPEBFGWKIFIQEGGYNGXWXQMWALIPNAGXVQYQIKSNBJSCNUNOVIYSFRQDQLRWVAJHJIYBJBURQFJFDMHHCVGDKZURICVDECASMHSURXEQMLLOTDDSZHE");
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
    msg.setTimeStamp(0.782161307167);
    msg.setSource(31750U);
    msg.setSourceEntity(239U);
    msg.setDestination(33321U);
    msg.setDestinationEntity(208U);
    msg.reactor.assign("BERSFGYXPGMZOTFZTZDWAJTMRHLSAYNGSDHSEFFDWTFUFLMGRJHPHAOIMUJLKLKZIEXAKOXSNYTPCJLRDJXGOLKYRWDQXCATNIXNHDBCFFCPBYEWVSENIJPUEDOWSTTVHOWZIJRJHUVBRVQRUCTVLPKTWSPNECDEHIUYIFGYLZWEMKZLZOVKMDXABQBMCP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ENGQEXCVQVRNIOHPJSOQSRVILKKQTELTYSYCITPNQDKUGKZWADWEBSOXGRCXAHJXRTUYUQUTCHPZGHAFFOCGVLOYTIYGLDAGGAJDKMPPAKDWYKPAFDMOBJULJLBNFCISSLRHLEQIPKBTNRUFJZNTQDEYJYAMMCYWRPZDWDFESBXVRXMBZHCGSVVWHMNZZKBUQZNGN");
    tmp_msg_0.predicate.assign("CTJJSWMECUCHVBHZYQHTTDJQQJWADHKPSXBUMBNNNVXMOWZEZUVDPZPYKGICFJVREZXSSEHRXKDCNIKGPIABSLZXZUNKAMDYARSYXGJPOGAKCEBVVBGRALDZWWRJUHCTYXUQTIHFOCPTPWIFLWNUXEBBJIQLOZGHKRFBOIQHTAYGUFDGNEL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WYDMPXFRHSTBTJAGDEQUQGLUHYTVJQNPOYFEEAOSJZKBJFMQCCPLYGIXPAPYNQOAVXWBUKLCVRXJORGFAPXTSYSHVANMQRZNEDWXBMOBTVJCINANSJAFRNZLGNUQDAL");
    tmp_tmp_msg_0_0.attr_type = 105U;
    tmp_tmp_msg_0_0.min.assign("QXJBBKHIIIDZFVWOBWWFTXJHLLQPRSUHNEMLHWSEOCBIXIPPGZPKPZKNFSVRQBNMZHJYGBYTQBAORPQEYKKVKTQODXUAOZAVWRAXRGAUYOUIOUOGVTDDABHOMCCZZNVSKNLZLZFGUCGTNPFVLAFSTFUMBCHIVWYRRJDPSIRJSJFCQWMCJGMFXCDBTNXDISPVORHYYKDSVXJLJGHSENGEKEMKF");
    tmp_tmp_msg_0_0.max.assign("LQIDQEFTBMYFHNYVBGEHZEJSTHFDLTTKZNXDPDUXUPGHDRXOGJQCEVWYZWAREUUVOSRYOVSBGKBBRZ");
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
    msg.setTimeStamp(0.405299240008);
    msg.setSource(35124U);
    msg.setSourceEntity(18U);
    msg.setDestination(52211U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("SXEAOGIVVUUJSECJQREVQLEFAMNMDNXLZLYKRQNPLOZFIAHJIKAOPGPHDIKFBJBRMHUIGARJWMIZWYHHJWNTO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VRKIQWGPBBQYVLZPFG");
    tmp_msg_0.predicate.assign("XUHBBFDDOXNWHIMIATHVSSOEJLXSASREWGVFERPLYWJACTAFGUIZGQWWNJVYVWTQBVOOSOZXWYTQUNGF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GYTVHNGMNALDVTDNWNSKHCQZGMIJITZMDWQPVWAVFDQKDXLSAPCJDAKGTFEEFRIBQROEJZEGRKN");
    tmp_tmp_msg_0_0.attr_type = 168U;
    tmp_tmp_msg_0_0.min.assign("TJHQVFKWAQGUWDUXLIEMTDCLJQFFNULMKZLLZZRTIHETJZNUERRUDQVPUNVQYRXIOSFKFFHGHKNJNZGGCJWYOPYPTERIFCAOTIIXIGNAABHZVARAMEXCZDSBHPYNCBGJEDIEESWKHPIKBPHSLR");
    tmp_tmp_msg_0_0.max.assign("CBEAAETIBQZIPZSWXIIMSEMTPHVWLNGCWZDMOFEFCXLSOKCUWSNTNXQFBDSRXIYXULLNPRQKOOGCGKOQMJDPPDVRBODTXXIPTTJJZLPTXGCYMVXREHGDBIC");
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
    msg.setTimeStamp(0.595939947887);
    msg.setSource(24240U);
    msg.setSourceEntity(101U);
    msg.setDestination(28463U);
    msg.setDestinationEntity(163U);
    msg.reactor.assign("RMEDBGQCNVILLZVUBLEVJABIDUNXWVNPIYPPLCXTLDTEIRBKOXIDGZRWCCQTQQWTOJDQKBZSQSRPKIUGPQKMRUAWEMGMQWARMNWCIXJLGHHZAAZRFYYBOCMRGROZFSUXJSSYZUAYGUDDFKEPJAWDERHSXZTCEPVABCTJXKUUSOFIFBSJTIGNXVNWFYOYQOTVMFHNHNXKQG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DGMNNPIJGTTTSVBUJSSKHUVAQTUBZZBMEPPCDEWFRMFICTCJRMCZXQHWZMAUWEFAVALXQAKUNZSIULRRQDYELGBPYLNREPFLQHGNXRPIVVOAIJOYYWYNXKGTJMUDOQXYKJSEXHSFHPPGNBICWPSOMWVTVXFKDKLWJIFZKOOXLSDBCGNILRUHARDBGCHJZRNKOTC");
    tmp_msg_0.predicate.assign("TAAALRORGJTCRCTOHBYWKIQNPVMHUYSCJOWNFTAJMNNNDMBCNDQITRIXDBHNKEQEEVPEXAHSKKMPGOFWYLCYUVWUWDMJDSLWFYXJHIRAOCDGYWVJGZEPSLTDOBIECKTLDHZLEXKMLVGEFXNQHVZHUCSQUAJHJTZBIMXBXSSUIPOGOUSJFZPWQPYRKLWMBVVIUABXYRLTFFQCVQDPXTGRKXNIFQSBOU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KYMGZJNDMHCLHGKVTJNTOEDBDRHIOSGSHWRGXYIXBOWGKRKTRVPTGUFHEAHNASND");
    tmp_tmp_msg_0_0.attr_type = 24U;
    tmp_tmp_msg_0_0.min.assign("LCQOTVVJIBMATWISZIRCZHWIILPHIJYSOAGFEIMMBCUDCGHHGUSNCMOCHALTZKLZBAYERLIRZAENUFYWYYSTBGQJKWWBTOUEXUATGSNZRKXAXPPQPEFBSUDOKEXUWRRNTZRBGNXDWNYTPVYWO");
    tmp_tmp_msg_0_0.max.assign("HXUYJTMBKEGIXOGMRUYVOYALAPOPPSCPVZVNBAQZHRDJOUPOVMDCFDTCSBITGIUUCRKYKHIQYFITWLVRNCJWITKXP");
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
    msg.setTimeStamp(0.495467222148);
    msg.setSource(35748U);
    msg.setSourceEntity(151U);
    msg.setDestination(27511U);
    msg.setDestinationEntity(139U);
    msg.topic.assign("AIZEITADQZAPSGBINRMJFBGJTUS");
    msg.data.assign("SLKADIBGWHZLCSTKULXVMAHEIQCLOYOHXEVGROKSEJUUYEDZMJTHGUKRBNEIMRTZIARIAYOIWSBWVBZFEHTOPQJLYESXPYMTUZCQKQFFDJQRBXNCTWDQJGEVJUZPSYAMKPPSTXPDPCIWQDYXGGNLHYOKVLWKGOUFBWQVJIODMMDNZCICCDHUWNNLKXGCMXBOKQTVFFRAIBNPR");

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
    msg.setTimeStamp(0.723293576096);
    msg.setSource(53190U);
    msg.setSourceEntity(142U);
    msg.setDestination(33429U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("LKSNLAYORBBZQGMALYSXKVVDDDHFYITJEGE");
    msg.data.assign("FSJZOKAHRDBMNPEDCZDCRYBQPRZJBKXYOPIGGVNZIYMWUMEXTEYBTTKSQULQQXBPFLXQGHZZGKLAUKYXARVYFNYCVOGNQOPSEGEAZDVTXINELJWUYHZRKWMQGVFDUHGTHAKSSMOMTQTOUILRPTNNNV");

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
    msg.setTimeStamp(0.14622475407);
    msg.setSource(10251U);
    msg.setSourceEntity(55U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(69U);
    msg.topic.assign("SUORSQUJGGOEAQKIKMFFCQDTHVRHJNNFAASRZLEPDRCZRFZXUCWDBAKJLBHGLPWAXWYYJBHMUIIIITPNDRSVGKJOHGSETTHXQYWFXBCIPPZAQ");
    msg.data.assign("QTJXDAKIVBYHMYOIRZYKXRVLNAONMOGJMLZQPOXIYVOFLBUKKSPDQAZEKVFLQRXRTCYXEBUFWMBSCFPKJOHADGQABXWAJKMCUOPTICQQFSWULRQVNZBFTLBDSBFGCWEMDTAJDCZRHWRHVSYMGIXLSCFI");

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
    msg.setTimeStamp(0.385592805491);
    msg.setSource(13349U);
    msg.setSourceEntity(9U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(150U);
    msg.frameid = 122U;
    const char tmp_msg_0[] = {116, 73, -96, 7, 63, -27, 11, 84, 37, -34, 73, 46, 2, -85, -60, 37, -78, 69, -2, 65, 79, -120, 34, 22, -36, -63, -47, -28, -91, -17, 38, 97, -48, 110, 71, -53, 115, 79, -40, 68, 103, -29, 82, 99, 41, -3, 47, -8, 46, -109, -9, -28, 31, 57, -101, 99, 55, 30, -26, -34, 8, -94, 101, -39, 17, -94, -54, 121, 21, 43, 96, -59, 39, 90, 107, 81, 91, 40, -117, -92, -44, 62, 48, 63, -72, -55, 15, 31, 42, 104, 79, 108, 36, 118, -6, 51, 14, -10, -124, 36, -57, 125, -33, 25, -122, 97, 52, -62, -8, 115, 98, 106};
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
    msg.setTimeStamp(0.200194211356);
    msg.setSource(20086U);
    msg.setSourceEntity(211U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(47U);
    msg.frameid = 253U;
    const char tmp_msg_0[] = {-16, -97, -127, 75, 78, -95, -128, -65, 15, 53, -28, -19, -34, -55, -87, -122, 112, -87, 55, -47, -60, 32, -3, -93, 67, -26, 11, 96, 119, -17, 111, -53, 28, 115, -77, -65, 118, -50, -104, -89, 80, -114, 41, -80, -44, 50, -21, 58, -111, -19, -49, -48, 102, 103, -59, 116, -103, -108, 81, 97, -43, -28, 112, 36, 3, 78, 69, -96, 124, 85, 11, 29, 30, 4, -69, 25, -4, -63, 21, -104, -68, -111, 48, 116, -42, -28, 93, -112, -102, -7, -115, 102, -64, 67, 83, -117, 77, 23, -118, 16, -54, 0, 110, 37, -104, -10, -95, 110, -115, -16, 64, -85, 23, 15, 78, -7, 17, 8, -23, -50, -109, 36, 63, 69, 80, -82, 10, 111, 87, -112, -8, 18, -121, 100, 49, 75, 1, -71, -57, 73, 114, 96, 101, -86, 34, 111, 117, -24, -82, 104, -73, 113, 70, -95, 59, -48, -70, 54, -14, -30, -96, 44, -92, 106, -64, -62, 21, -87, -80, 109, 23, -54, -23, 49, -36, -120, 69, 39, -126, 104, 41, -56, -42, 24, -33, 11, 36, 57, -79, -10, -92, 116, 73, -124, 1, 75, -100, 52, -122, 51, -93, 125, -55, 80, 79, 89, -33, -39, 15, 11, 76, 67, -4, 18, -22, -30, 12, -24, -116, -16, -73, 29, 7, 65, 72, -96, -72};
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
    msg.setTimeStamp(0.834268734451);
    msg.setSource(1118U);
    msg.setSourceEntity(59U);
    msg.setDestination(30648U);
    msg.setDestinationEntity(190U);
    msg.frameid = 62U;
    const char tmp_msg_0[] = {-13, -119, -110, 120, -106, -77, -27, 49, -95, 46, -34, -99, -62, -46, 49, -47, 56, 2, -126, -46, -94, 87, 55, 22, -111, -110, -110, -1, -19, -55, 46, 6, -124, -100, 31, 36, -23, 47, -108, -119, 103, 90, -19, 119, -27, -95, -12, -43, -2, 31, -73, 122, 12, -87, -27, -49, -25, -65, -95, 16, -51, 81, 67, -39, -54};
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
    msg.setTimeStamp(0.112774272029);
    msg.setSource(39288U);
    msg.setSourceEntity(219U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(183U);
    msg.fps = 67U;
    msg.quality = 178U;
    msg.reps = 81U;
    msg.tsize = 161U;

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
    msg.setTimeStamp(0.304584732491);
    msg.setSource(53237U);
    msg.setSourceEntity(248U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(107U);
    msg.fps = 72U;
    msg.quality = 84U;
    msg.reps = 194U;
    msg.tsize = 16U;

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
    msg.setTimeStamp(0.629678924119);
    msg.setSource(53160U);
    msg.setSourceEntity(136U);
    msg.setDestination(59895U);
    msg.setDestinationEntity(191U);
    msg.fps = 101U;
    msg.quality = 1U;
    msg.reps = 38U;
    msg.tsize = 53U;

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
    msg.setTimeStamp(0.983630293476);
    msg.setSource(24590U);
    msg.setSourceEntity(157U);
    msg.setDestination(12178U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.214306705734;
    msg.lon = 0.921290182456;
    msg.depth = 119U;
    msg.speed = 0.00732912957021;
    msg.psi = 0.138442857484;

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
    msg.setTimeStamp(0.428436036005);
    msg.setSource(24312U);
    msg.setSourceEntity(191U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.554152295539;
    msg.lon = 0.374050444368;
    msg.depth = 84U;
    msg.speed = 0.226606852996;
    msg.psi = 0.622044335214;

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
    msg.setTimeStamp(0.481542972938);
    msg.setSource(63946U);
    msg.setSourceEntity(125U);
    msg.setDestination(58694U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.685506134752;
    msg.lon = 0.518283661732;
    msg.depth = 54U;
    msg.speed = 0.593603000398;
    msg.psi = 0.132030936672;

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
    msg.setTimeStamp(0.741360886499);
    msg.setSource(36349U);
    msg.setSourceEntity(217U);
    msg.setDestination(64266U);
    msg.setDestinationEntity(217U);
    msg.label.assign("SAUHFBVQTBEBLDRFQHTGJWYGEADCMOMAIFYVDLFGPRPBODIUMZVHWKEXOXDUFTSSVEW");
    msg.lat = 0.0275657539041;
    msg.lon = 0.0215229629885;
    msg.z = 0.673745314207;
    msg.z_units = 111U;
    msg.cog = 0.14830974494;
    msg.sog = 0.58716491937;

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
    msg.setTimeStamp(0.444454906314);
    msg.setSource(51549U);
    msg.setSourceEntity(171U);
    msg.setDestination(3959U);
    msg.setDestinationEntity(220U);
    msg.label.assign("UQXINZZMGKD");
    msg.lat = 0.764915837997;
    msg.lon = 0.787117935774;
    msg.z = 0.692436663847;
    msg.z_units = 241U;
    msg.cog = 0.226270862039;
    msg.sog = 0.432891492727;

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
    msg.setTimeStamp(0.129026881827);
    msg.setSource(24210U);
    msg.setSourceEntity(69U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(149U);
    msg.label.assign("SZXPCDSNEREBNIOLXFPOVBHPSCUUITIBWTKAHGGJYNUHPWXRHHQVODMALZXAIDGIESUWTHENGZRFFASRTKZRCVMGRBUJUFTTCNZNAUCTFIAGDLQOMZNZWMTUNGIBLKDNJXIOOHACTYKFOLVYKYWNGFOZCIEYGXEJWRJMJWYCDMFEEMWCDQBOUJXLPUV");
    msg.lat = 0.420453535459;
    msg.lon = 0.231987539615;
    msg.z = 0.410329198302;
    msg.z_units = 81U;
    msg.cog = 0.600063917313;
    msg.sog = 0.454863840966;

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
    msg.setTimeStamp(0.783839741562);
    msg.setSource(4785U);
    msg.setSourceEntity(168U);
    msg.setDestination(11081U);
    msg.setDestinationEntity(85U);
    msg.name.assign("KRRJJNFLYJAIECOVRRVBECOWRIWDYBDLUDLSKHQHYFJCVSUNJALYCUMWGOWVTZYVFSXDUWHMCBXZOHSEMMUNREECIQYFEHZZMLTF");
    msg.value.assign("LYNKDFTZQXUTZPJGGAWWCNIXCWHJXNSKJLJQLIUVWHWMXDYGVQOBEZKZNRQXJIDXHFJUTOJIZIZOXHEMABIPSVPYWCRTMVZWKOEDYDCVAWQTVFKQCXFSORELMGMLARAVSSCWYJACVPMQXYBBTGUDAABGPIRLFPNNFSAQOKUUUHBRQNDCSBMHPFMKFKDGYTELNUWHYAMJEVGT");

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
    msg.setTimeStamp(0.825079084614);
    msg.setSource(19538U);
    msg.setSourceEntity(223U);
    msg.setDestination(9693U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KOMRHDTDCUCSAUFTUKMBQFLHNXVXGCDVOZVGTICCKZQWWFZVIPMCJBFQUWUTLXNELNWCYOGNEZAFLDHQBGRMOGXJTKPNASBZCYFDNBLPZWLIEGVMQMUJUIRPGJHNHEBOTFSKDMH");
    msg.value.assign("CNSXHEAITCNJCMYNRUBRZTMRNTDLUQCPIDJEHPVMLQYEIHAVGGZBGFTUIOOMZMKVSNKPHLCOGGCFRYAEUYBISPQKDBSKTJIYMSUKWLOVDAZOYCVMJPVLWGKMQHVQJXTODZOBCEVLXQXNEDSGIFANXQDFWYYWBJSKJSGBHQUFLADPPZKXCEWWKODVBBFOTEUSWZTFERAJWVQZRRYHNPCUIQUYFZPTWIMAJWAXXSDGLBOKX");

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
    msg.setTimeStamp(0.584896417308);
    msg.setSource(9554U);
    msg.setSourceEntity(67U);
    msg.setDestination(29538U);
    msg.setDestinationEntity(110U);
    msg.name.assign("MPDBICFUGQZVBMBDNMKFLIRMYCKTULNSOQHHAMSZYZJOXBDISIEZZPGQMVIDYIWOQNLEUGWJTGNZOFTJSJKRHFOVPTJRYUUNKPAQSENGFASIVCZADVQBWPIZAEJDBCY");
    msg.value.assign("EPBWDLLICBMZUZFBFWKUWMMWHPYICOVUPJFJGDITSAFOYDAM");

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
    msg.setTimeStamp(0.0644288692329);
    msg.setSource(62249U);
    msg.setSourceEntity(208U);
    msg.setDestination(6656U);
    msg.setDestinationEntity(250U);
    msg.name.assign("IYCBKTXMCEKHEZWRNDLQBFMQPRJPVPKAQUUKHYTJZCSFJDCSPVKATWWWUHNYEGIXZCXWFXJVKXTAIAMFPYENUCDIPDNCTKGYHQLDSJGIYBHXSESOYVHTYGOAVTWLWOENZSRDHKMATHMQAXZRIZXWQSRUCTITGBZGMANOVVGPSFQNWDIFJRCEDLMXLBAVRUNZREYMFBHGFBLOYIOUDRLPDWUAQJMIOFFELKZKE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZRGBADNAOCSKJNDZIYBBAYVNXNEJZUIZIAUZSSJECRIVGKBVGQWNFYICRGSPZRAKMXWLOMWVQWKPXRFPSZQVDYPIQPJMTAUJVOQGQFOSHHHVNLSHUPXWHXENWMIYUILTTQEGUOGCCYNHVFJDWJXBIBEBLTHYEMFTKJORPEMBYHOCDDXUPCNDXFKLINLYKZCUXAWQFOQMBKRSVHUPFMYRVLJMLPOTESFDTKXJLAWCDGGUQ");
    tmp_msg_0.value.assign("YWXSOLGRSWLSSOSAFDZXTBBVLESCUMCPRQAZBNKRPTHMINPROHHQKMQJGILGZPEOOFDTAYDPA");
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
    msg.setTimeStamp(0.709436446056);
    msg.setSource(47877U);
    msg.setSourceEntity(21U);
    msg.setDestination(43480U);
    msg.setDestinationEntity(152U);
    msg.name.assign("QJYUFRDLAOAXKGPQEOBEZZLSORBVLIKCTVRZTDAMVUCCVVSTWDDWFYJHWYIJSKVKRUKIWHQOTCHGEGDBWCJYXZOUWPONDLYRGFPMKHMEKRAFZYGSRVYJOXCMQAIBEDXPRNAPYBIMRDXMTGTSKQEWWYHZHBSBCELUPAVNBAXCNGGJUNHNSAIXWEENFSSF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QPHMVHXMTELKHWENFNSOZXMAKVSFQQCZUGBVAULGRWJHNOOUPSYTCRRVOWUPCSXOFFWFTXGDJHAATEROUBLTJNIWNRKPRSVBYVFNRSZYZJYDWFBEWTEKYJZGQVMFIBDXDXYIOIFPVCODJVLAXOCMTCALJUAWQQDNMJZEZPZEJFQCKRLKRPKICJHBYNBZMHGIGDHWQABVGPQHKMQGKUELUGMXUXYUBNYPTICISTHSADLIZDGSTXESML");
    tmp_msg_0.value.assign("BQEQPKCQWULFNQRPVVURLSVZRILASRFKRCMIPHUGOGZJQKSCMNWWRVSNBPKZJFDWICBFVKZTMAPBMLETBJSAEEUCSYIHFEGKWFYOXGJLPIMZEWUHUXTHHQQRPINNZGZADNXYJWFQNSANDSFTBYQTMKIZJYDLOGTMXWAJPYZGXCLEXUXYLLDKHDHIOAGCVOYVRQTUNTXFOSKBHGWVGAELVAPHRBD");
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
    msg.setTimeStamp(0.679386676366);
    msg.setSource(29642U);
    msg.setSourceEntity(140U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(223U);
    msg.name.assign("JHSMSBJCEJHTAAQHNKBYAJZVZYQCOLHLDGGAOVRPQIZUPAVLIULDWIZDXWUCVVGYFQDLFGKXOBQWNWKRMOHBYGXGMHZPHPIVDRUVNRLZKTQYCHBLTTBLFUDEUKWEOUSFWSGJ");

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
    msg.setTimeStamp(0.116807435959);
    msg.setSource(61798U);
    msg.setSourceEntity(212U);
    msg.setDestination(3783U);
    msg.setDestinationEntity(222U);
    msg.name.assign("BYFCZBNHENLYKHVROKQLTHWFQCERKDSIBOWEBZ");
    msg.visibility.assign("SHGZISNLENEHJXWBASXFQSMNEZNBHLGJQDGNYJOOBAFQPADYPWKUYDSLQPBLKGYRVCTEJCKPWDMFQGDVILUPIHZCMEJ");
    msg.scope.assign("WOEZKPMBUISHLFFIZAUXHLSXDYOEPUTWWJBPMRVJKGPDDGCRCXQLWKCOBTWALRSDEDMNPALVRZKMACZKSVUUEZWIQFITQJHNADIQQMCKIKGXITHNVBCWNSRJHOHHJTYFDJEOBUVYYGYCUNWBMXTJVUSMIAGEKFBIWLPNNVJEDTASZYQQVSHXZOEZLPWRYROFXLDPAGYBVZCKTNDMQSFAVZBQJFXJLEPHXOGONR");

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
    msg.setTimeStamp(0.407982397861);
    msg.setSource(45255U);
    msg.setSourceEntity(78U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(49U);
    msg.name.assign("RBQDNRGBIIDFZXFYSEAXPSIPZFYJWUCHVTUNCKELQLUADOMOPISGDPIVJFYIXVGSMMVJJXCZDGZRGXXCHSZLYTNEBJJRDZDXNEAHATJLDMTQRBW");
    msg.visibility.assign("CCSBADHYKXKELINQBBVVOADXWLCSRRRLJSEBKJPHTPFUZFRMKADZQTLVUDORDSMXNGWVWDVRHOXMNYWVGZYOGJRLQSPCFCDOFAUAHQQTHMIXZAZKQBYBRBWXGYARIKVEEJZMGZJEKWVNHPCSQBAPARTUCYJLPXTCOXGPTZKLQ");
    msg.scope.assign("BRRTXCYHIABVOHNUGFPBAUMHJLOEQJNMLSIDGTLCACLBKQYKKUWOPHAXQPNRRTKYWHUIJPDTGYCPQCTPFEVPEQYEJWMQGISYHWDZECNUKOJFNMUGJKCXVOTVHPJUFKLXXBIWFRBDZOYJGDKSYTKSARWDGZISRMONZ");

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
    msg.setTimeStamp(0.0877739350463);
    msg.setSource(15401U);
    msg.setSourceEntity(127U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(109U);
    msg.name.assign("XNIQGYQPDUTVRBUYZEYMIFKBSSNGIKSOYJDVPSQJEDLHJRYGOJZIZNSATTPLAKCAEHQJNDQPWHHBRNSQUCWCORAFGMCVLH");
    msg.visibility.assign("SVSOTIJPHGYZHCTYCPXYVXFAPICGNOHYZDGXIQIQWHTMKORTAXXDAINCGZGTQRYIWROCGILJUMZLBWMAPAVWIYJDPWABLZYSQSMKEDVRZJRHSYBLVFLMGFXUEUODYTOXOHFDAMCHWFBWHQ");
    msg.scope.assign("FULSACHPXDSIGGVWHCXAEQREBVUFVCMXXBTRDPDWGBNVGKUGJXFZBYHOXPHRILAFLJNXNTK");

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
    msg.setTimeStamp(0.605711018975);
    msg.setSource(58945U);
    msg.setSourceEntity(74U);
    msg.setDestination(16305U);
    msg.setDestinationEntity(34U);
    msg.name.assign("HSYOCUPGFFTOFQPDPUIUASZITXEYCIVJYNWEDRFOGWDDI");

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
    msg.setTimeStamp(0.954833043349);
    msg.setSource(8094U);
    msg.setSourceEntity(74U);
    msg.setDestination(58315U);
    msg.setDestinationEntity(209U);
    msg.name.assign("MIASGVYHWIGJLDWYDEUEBMEJWGIXAISHGUSZOXXWKYQVDAJSWTYMDCNNXUNYYOHXNXUZHTFRZEJILCTTNHAZOUMZUVRAVOSVCXKQYTVULTKATZDFCHMJPQPIBISNGOHGFSRTEBLOMKJGHJRFQBUFEKREAMHJWHISSQZDKPDDCAAMCQFJEUGVWETNRBQLMLDAMBQXOKECWFPCXZWPLJPRRFLQTOYXNROGPYPZWGKIYFVOLKSBNPQUBKLB");

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
    msg.setTimeStamp(0.361511896531);
    msg.setSource(9707U);
    msg.setSourceEntity(5U);
    msg.setDestination(45378U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FIGRLVAKBKADKVOWYZHKRIXPPIHDFMWMYZRSEGOQZEXMNAFHVJQNEEJKQURSVKDOPNBFXMLIVGZLNIUKTQAJHYOBRBTPJSDZYQAJRTAGOBGHTGNHADZMDBYCLTCKGTHMCNDQSGZHSSABYCRVFPCUPWEIWAKICOVETRBRTXZSCOFEPYDDXWTWWMLLCUTNNKLMCINZLUMSJSDVRFP");

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
    msg.setTimeStamp(0.483248586493);
    msg.setSource(63685U);
    msg.setSourceEntity(127U);
    msg.setDestination(4153U);
    msg.setDestinationEntity(171U);
    msg.name.assign("VEPSMDFPVZJHCNRDILKPSPUPBIXKBKYOKRZOJENWVHOT");

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
    msg.setTimeStamp(0.00941751512953);
    msg.setSource(62506U);
    msg.setSourceEntity(249U);
    msg.setDestination(56970U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RZKSSRZBLDLCKXQDTYWWCWPDRNTVDOHSGAFELHLVNATNKWYJFBTQLQBHKWFIYTYFZMHJPOUJOHIUMMGKCBQTUGVFAWPUEAGGFTMFBK");

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
    msg.setTimeStamp(0.743548636456);
    msg.setSource(13649U);
    msg.setSourceEntity(48U);
    msg.setDestination(15879U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ENBHAIHCOCRXRDAFAJVYYFOCZCZWOZSYJMRQQIXJKYVJRBTKYWRVRHKNDUSFSVOZNSDXSVBSLDWJDGDGPAIUPGXCISZVGRKKGPHMYPULXGXYHVJUCPXPGLPAWXIOVEQFIYTFOOKUJTGAFRVAFOUCPTJGNWMRDINHEPQPZMTAWTNQBHLZB");

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
    msg.setTimeStamp(0.922050216263);
    msg.setSource(15537U);
    msg.setSourceEntity(9U);
    msg.setDestination(36494U);
    msg.setDestinationEntity(84U);
    msg.timeout = 1489829863U;

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
    msg.setTimeStamp(0.18296617814);
    msg.setSource(7355U);
    msg.setSourceEntity(16U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(130U);
    msg.timeout = 1270057322U;

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
    msg.setTimeStamp(0.427732484185);
    msg.setSource(32174U);
    msg.setSourceEntity(88U);
    msg.setDestination(57327U);
    msg.setDestinationEntity(10U);
    msg.timeout = 3751850888U;

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
    msg.setTimeStamp(0.369511181957);
    msg.setSource(21126U);
    msg.setSourceEntity(24U);
    msg.setDestination(29443U);
    msg.setDestinationEntity(42U);
    msg.sessid = 2756351052U;

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
    msg.setTimeStamp(0.480412269605);
    msg.setSource(41237U);
    msg.setSourceEntity(1U);
    msg.setDestination(34165U);
    msg.setDestinationEntity(22U);
    msg.sessid = 108930355U;

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
    msg.setTimeStamp(0.015741449423);
    msg.setSource(64355U);
    msg.setSourceEntity(75U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(104U);
    msg.sessid = 3950578332U;

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
    msg.setTimeStamp(0.767119853056);
    msg.setSource(35818U);
    msg.setSourceEntity(114U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3824167646U;
    msg.messages.assign("QODEURWYSIPTFOYLJQXCJANCNRSEJUTMZJHKNLLOXSSUAFQQXBAORWBAADNTGVWBXTAEPJNWBMTIQWVMOZHXPIPOZLRVKQPGEIRDUWDQIDHQNTUBCMFIGSODKVOVMPZHJFYSYAVZYABFKHGMAUJRKUQPVRMLCHLCRGKCXDEIZLGJBNHKGENCPUDYGXLBVWYOZXMRXHFFWVDCSIKZGYLIOHZMQYJEUFWNXTKBSEWZVCLYBG");

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
    msg.setTimeStamp(0.511703791739);
    msg.setSource(38942U);
    msg.setSourceEntity(130U);
    msg.setDestination(8433U);
    msg.setDestinationEntity(121U);
    msg.sessid = 3139906879U;
    msg.messages.assign("YNELXLRAFXCWAKHGDMLKAFKWYDJAPWTPVBLFCVDOKOPKBTYXMEJSHEQCXBCUSHCUSAXHQQRCFEAIXPDVATUENUROBYEVJSNGVSOLRZLMKFMRDNZGNRBGQFKLPPPUFCWZSMKBHQDMSTTIEZGGJEIYJLNUMJKPNZ");

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
    msg.setTimeStamp(0.914088005678);
    msg.setSource(12930U);
    msg.setSourceEntity(178U);
    msg.setDestination(43126U);
    msg.setDestinationEntity(153U);
    msg.sessid = 4091265313U;
    msg.messages.assign("EOEKBUTLUXVSMXGHMVQFHFEJTKFDWDQKGGWICJCDYLREDAIGKCLPCRRKHVPIFSAFFWINGOQEGUSUBZEJZNVZGIPSPMWOOOPZHYRVBVKMWZOYCAIBSQKCHVMCFJVAXMMHKRJUCOALNXQQANXR");

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
    msg.setTimeStamp(0.400132675642);
    msg.setSource(5862U);
    msg.setSourceEntity(72U);
    msg.setDestination(39570U);
    msg.setDestinationEntity(80U);
    msg.sessid = 3888619712U;

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
    msg.setTimeStamp(0.164100905831);
    msg.setSource(41149U);
    msg.setSourceEntity(164U);
    msg.setDestination(27727U);
    msg.setDestinationEntity(168U);
    msg.sessid = 2051606457U;

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
    msg.setTimeStamp(0.834184789149);
    msg.setSource(38350U);
    msg.setSourceEntity(149U);
    msg.setDestination(63067U);
    msg.setDestinationEntity(250U);
    msg.sessid = 840631346U;

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
    msg.setTimeStamp(0.0802963504416);
    msg.setSource(48322U);
    msg.setSourceEntity(214U);
    msg.setDestination(20679U);
    msg.setDestinationEntity(97U);
    msg.sessid = 1294789235U;
    msg.status = 194U;

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
    msg.setTimeStamp(0.0705988585579);
    msg.setSource(14307U);
    msg.setSourceEntity(74U);
    msg.setDestination(51880U);
    msg.setDestinationEntity(61U);
    msg.sessid = 3034586549U;
    msg.status = 200U;

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
    msg.setTimeStamp(0.181632758415);
    msg.setSource(27744U);
    msg.setSourceEntity(80U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(83U);
    msg.sessid = 1172125342U;
    msg.status = 152U;

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
    msg.setTimeStamp(0.48017270632);
    msg.setSource(56988U);
    msg.setSourceEntity(212U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(250U);
    msg.name.assign("GVZENNLVVJPCYSJIRABOPIFTCQTMPWXHRAIKQNTCPOPEMWOGUOPGSWUUHDFBG");

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
    msg.setTimeStamp(0.0946940073786);
    msg.setSource(39515U);
    msg.setSourceEntity(3U);
    msg.setDestination(27303U);
    msg.setDestinationEntity(188U);
    msg.name.assign("TKQGTZIQKPCPDVZBANTWUTDDGLYGOJARDXDFADDUANCFWKNAACCMOOGMYAWGOVRBNHOOFEBQSQDUPSCYLWEKPHHCTSVXWXAEOGUMYKGRMJIMVRJCTENSLIWFUJQSYLRHWKFMBKNSCTFFIOXTRYYMRLEPCZZGOORILKJXUHAQSMJNCYSENHXVJIXSIZHHIKLDKBBZEUYLWZWIFZRMBEGSHVQGVPHQRFEBZFPYQTXVJ");

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
    msg.setTimeStamp(0.612983462951);
    msg.setSource(21962U);
    msg.setSourceEntity(197U);
    msg.setDestination(28908U);
    msg.setDestinationEntity(206U);
    msg.name.assign("MCQUJGPELDMNMV");

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
    msg.setTimeStamp(0.399203700669);
    msg.setSource(51320U);
    msg.setSourceEntity(78U);
    msg.setDestination(42520U);
    msg.setDestinationEntity(103U);
    msg.name.assign("LDFCLPODRRCWFICABQWCMZZUZRLHYIUYSTXKBCMGYKXFUSDIGNQYQP");

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
    msg.setTimeStamp(0.786115373676);
    msg.setSource(17239U);
    msg.setSourceEntity(224U);
    msg.setDestination(10698U);
    msg.setDestinationEntity(214U);
    msg.name.assign("WSZOAJHEEISTUGNIRHISNHLPUJNBXGQBVHTMPJQRLWFGOFUNXVOVYFHBCTLSKDGFDEHGWTQOBAAEJXYBCFYRQXMAECKCRDXNUKDZPHCAALFPWDZURYKGRKPEVZWMXLIRQWEVJLDTXQIGQNCQYWFKMIKTZDJBONNYMEFAKDIFUUCQWPMBVPNHZGVXTOJPBSETHGTAIHSJZSCDXBCLCYKVIPFKWZIYWYVMRMRSTUMNRGEBXVUA");

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
    msg.setTimeStamp(0.0808406026132);
    msg.setSource(17122U);
    msg.setSourceEntity(157U);
    msg.setDestination(15802U);
    msg.setDestinationEntity(204U);
    msg.name.assign("FBFQUHUSWJCFPFODCKNVVQMMHKGYGWZS");

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
    msg.setTimeStamp(0.826049521002);
    msg.setSource(33442U);
    msg.setSourceEntity(209U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(100U);
    msg.type = 210U;
    msg.error.assign("IOMHDBFRFOVXLNLXYWHSDUJZKHUGMEYXTPZZCPNVNWSCUVRRAZRVMBRCVNOMOJSHTZJJLYIQOMELTUSOIZZIAFEPBCWHNHWCKMNBIGBQKKQPMUSUEEOZUFGYLQXJEJIURMCDOTRPHAKFVSHFTQWCBHXOZRQUMXEJAUOGHKXVYWIPBANQIRPGLENBFBEVBDDKVYSMPKDAPGFSGCWLXCGIDY");

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
    msg.setTimeStamp(0.203909118726);
    msg.setSource(42689U);
    msg.setSourceEntity(27U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(242U);
    msg.type = 116U;
    msg.error.assign("VJYTKTKBJDBRSJJTXBMEBLOIFNVYANCGMZUSWMCISXEXNGYMWZYQPPSMSUNUDZRZHFFYHLOTNXKMQUSXLNJCIZFGULJCVEXUWJDYOETMDSSAZPERSBDZAFVCANSHOODKCAZWQVWWPBCMDWPDLWXJYALZIYDRMXQTOIKGILRJBRERNIFMEPACXHHFKOUTLOGTDVCFQPBONLUHQGG");

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
    msg.setTimeStamp(0.419432995656);
    msg.setSource(24351U);
    msg.setSourceEntity(237U);
    msg.setDestination(43002U);
    msg.setDestinationEntity(3U);
    msg.type = 178U;
    msg.error.assign("EJOZCZZLWCQJUIVDHOSRTWJOIQAAZHCPBMRRGJSNSUBEDHWYKBBTUNDZENOQITYYATYLRYPCULFRMQXGTVOOCRAHKBPQBYIKQXBXDVZOWHITVWAWPFXDJVEUXSEMDKF");

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
    msg.setTimeStamp(0.916363692117);
    msg.setSource(7906U);
    msg.setSourceEntity(52U);
    msg.setDestination(62458U);
    msg.setDestinationEntity(67U);
    msg.seq = 57863U;
    msg.sys_dst.assign("EFKNZQRYPZRFNSUAFHBHFOIDBCFQZAQZQSNYHWDMBWUFSCWWENGQDGYOIUSTOGRRQLGBPQEPHXHYOOEYJICPNCWBVDIZJXDEOTGICXCZPYMTKNUEHUAGWHWITLVLMJHPVAABVEUPKSBLCLEFFXSTRDDVGXSIXGNYMZQIJJMVRZZELLAUSBCXCAOFLKSVP");
    msg.flags = 18U;
    const char tmp_msg_0[] = {57, -86, 42, -87, 126, -16, 58, 46, 44, -113, -6, 87, 111, -39, -110, 73, -76, -116, 105, 59, 37, -43, 72, -35, 87, 22, 62, 10, -21, 36, -32, -36, 65, 92, 17, 48, 73, -25, -81, 45, 68, 53, -41, -89, -27, 38, 56, 63, 94, 63, 72, -91, -58, 39, -32, 99, -116, -22, 29, 71, -27, -15, 46, 22, 92, 0, 49, -100, 65, 117, 31, -107, 21, -9, -127, -42, 27, -63, -2, 45, -121, 10, -4, 19, 64, -90, 106, -78, -74, 48, -77, 54, 24, 53, -15, 94, -64, 60, 22, 122, 33, 62, -52, -24, -69, 15, -82, 21, -74};
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
    msg.setTimeStamp(0.0568401031625);
    msg.setSource(17111U);
    msg.setSourceEntity(47U);
    msg.setDestination(41239U);
    msg.setDestinationEntity(146U);
    msg.seq = 64072U;
    msg.sys_dst.assign("UZTOUHYPBFCMIHYMSOUIZNEZWWNZCSGGXUVYDUKZRWBLWFRQNEFNKKWPAKTCQWRDHMLSJY");
    msg.flags = 220U;
    const char tmp_msg_0[] = {86, -56, 43, 86, -113, 52, 62, -125, 29, 72, -102, -87, -54, 115, 11, -79, -25, -54, 68, 57, -83, -77, -22, 101, -54, -33, 116, 59, -65, 61, 81, -103, 19, -97, -90, 65, -50, -3, -90, -37, 73, 27, 16, 33, -29, 34, 113, 109, -68, -29, -87, 0, 17, -127, 100, -34, 53, 21, -127, -118, -86, 52, -13, -73, -128, 20, 80, 26, -5, -36};
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
    msg.setTimeStamp(0.060412426536);
    msg.setSource(14192U);
    msg.setSourceEntity(62U);
    msg.setDestination(11266U);
    msg.setDestinationEntity(121U);
    msg.seq = 62656U;
    msg.sys_dst.assign("HOSNIYDJRYCSZIMBKJWASLWEYVFIAELKMXMUKNSXHKCYSNDXXJVIKFQRQXGFHLMVJXOLNKBFOGMEHZZDIZUQSQAMTPHPUFNZVLVTABRVGKKARQPOOUWWTATZP");
    msg.flags = 247U;
    const char tmp_msg_0[] = {-76, -127, -39, 106, -13, -123, 98, -22, 94, -78, 39, -110, -81, -124, -102, 67, -31, 2, -102, -52, 30, -38, 49, -115, 8, -1, -84, 92, 42, -96, 116, -6, 43, -123, -9, -24, 44, -77, 17, -13, -42, -48, 107, 110, -10, 98, -56, 47, -54, -70, 69, 57, -114, -24, 5, 106, -76, 103, -65, 37, -10, 64, 54, -100, -9, 20, 64, 30, 44, -124, -122, 46, 4, -95, -12, -38, 57, -79, 38, 98, 70, -118, -13, 21, -37, 47, -101, -53, -18, -114, 38, -49, 2, -58, -33, -116, -99, 114, 14, -23, 63, 56, -55, -4, -116, -45, -61, 29, 49, 122, 5, 102, -29, 116, 68, 72, 81, 19, 103, 71, 40, -49, 57, 123, -40, 77, -110, -5, 86, -73, -37, 101, -58, 120, 120, -79, 44, -33, 57, 35, -79, -66, 115, -11, -51, -14, 79, 111, -111, -79, 82, -72, 22, 120, 37, -52, 19, 23, 48, 66, -72, -92, 30, 77, 48, 80, 51, -128, 43, 33, -49, -24, -10, -99, -43, -103, 46, 1, -99, -85, 13, -73, -47, 103, 117, -65, 21, -32, -86, -96, -94, -36, 66, -71, 62, 106, -3, -65, 67, -65, -25, -38, 43, -18, 52, -78, 35, -117, -34, 24, -125, -78, 107, 66, 104, -21, 109, 47};
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
    msg.setTimeStamp(0.657792613884);
    msg.setSource(15863U);
    msg.setSourceEntity(74U);
    msg.setDestination(46301U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("CIRMJSUNTSXQMQNVVUCYKVVYBKGUHAEYXVDZPNOFXFJHHNCIGDZHVUNROKEXAHEGPALVMNQTUJXWIMPIILSCBRERWLWFFKTSBEONQAEWOGJSFQBMEDFZZUCZGXKRCXRJSYBYCBFWOPTQSBYCEMGJPGNZOPRUBMHQPKAMZRHYQDYOWNVZGTALLZIXRWEQUMJKHIOITLHGKAHDQDUZDPTSTELADSRLKALGJFC");
    msg.sys_dst.assign("KQZYQMFRSMAAZQWZCRUBEYIDREZILBUSWOXZVJUMNLGKFNGOPIQZVCTQUYANQVPXJIBDSNACEPQLFHJIDQZNETSBWIWULUHJGGUSJKUMKKALITTHVTAVUCBYMQFSLEQSJWMLOXFHRTGXNGIRMBEYGITYSZTSDANGACGRSWHOKFXPCKHFFPDFAJWBLOEXWHPJDPXEKYCZYNJRWDVXWVDOOTHMXDRPKBVOXCNLNFGYUPBIVZCOBRDOECPHHRT");
    msg.flags = 29U;
    const char tmp_msg_0[] = {50, 73, -55, -114, -52, -8, -88, 6, -18, 124, -73, -1, 33, 111, -72, 78, -55, 39, 1, -96, 104, -36, 27, 84, 65, -95, -35, -62, -26, -19, -22, -35, 55, -4, -40, -98, -94, 45, -28, 42, 69, 117, 26, -102, 96, 37, 77, 12, -118, -55, -108, 126, 97, -55, 79, -115, -81, -111, -125, 53, -18, -99, -91, 72, -32, 104, 87, 125, 71, 79, -48, -11, -69, -63, 104, 19, -78, -121, -84, 23, -38, -74, 95, 72, 27, -97, -5, -46, -89, 65, -22, 75, 19, 123, -109, 40, -57, -67, 90, -95, 6, -102};
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
    msg.setTimeStamp(0.953281985934);
    msg.setSource(27110U);
    msg.setSourceEntity(144U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(234U);
    msg.sys_src.assign("BKDVSKHJVIUGDDGNTLTBYZEJPSKXBEQZYABFGMXXNRXOFGAIRPZQWEINCTIIULFWKENAXVOGWMCUUSUNSDTBWOXCDHMTXAXOOBJIWLBDWIKVLNNOULHEQAJNULQEYCQJJHCAPNDVRFWGQEYKLYMRRVEKHOXBDCZFQUGTHFKPAZQKHG");
    msg.sys_dst.assign("BWLSNWNTQFPGBATCHWRLTYCSVFUOGDODJVHSYSNZYCKKOAZEQDMIYNYVGUAZPDOSFBPQWOKOUMXEHQFVTLNBRDMEUPRQXPDFYTGWHPMBFDUVZIXCLXXBIEJUKT");
    msg.flags = 172U;
    const char tmp_msg_0[] = {57, 86, -124, 77, 41, 113, 4, 93, -56, -8, 123, -100, 108, 33, -105, -106, 87, 87, -2, -44, 87, -53, -55, 73, 83, -59, 9, -85, 76, -45, 77, 38, -104, -128, 100, 103, -67, 1, 63, -121, 69, 65, 27, -90, -51, -31, 118, -13, 74, 96, -53, -70, -59, 116, 46, 69, -67, 110, -25, -45, -89, -111, 13, 98, -53, -58, -4, -56, -30, -105, -48, -44, -14, 12, 126, 87, -85, 105, -53, 31, -2, -51, 122, 36, -126, 28, 1, 48, -44, 64, 121, 75, 47, -80, 10, 91, -109, -45, 15, -58, 35, -72, 52, 120, -38, 8, -102, -52, -86, 85, -17, 6, 21, -55, -70, 97, -84, -52, 123, -110, -122, 47, 12, 112, -19, -73, -42, -92, 112, 8, -81, 68, 99, -81, -112, 109, -128, -114, -95, -65, 92, -11, 67, -80, 12, 61, 104, -73, 98, -18, -75, 25, 19, -62, 72, -9, 112, 63, 97, -108, 17, -104, -81, -124, 48, 74, -96, 16, 7, 71, 24, 59, -7, -104, -111, 45, -29, -23, -28, -80, -87, 88, 2, 84, 29, 37, -114, -39, 104, 82, -110, -102, 22, -46, -98, 69, 56, -60, 35, 100, -81, -103, -48, 78, 77, -23, -93, -108, -98, -113, -84};
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
    msg.setTimeStamp(0.147209975869);
    msg.setSource(42179U);
    msg.setSourceEntity(127U);
    msg.setDestination(28122U);
    msg.setDestinationEntity(145U);
    msg.sys_src.assign("CTYUPLZBTVGVEDTPEJDTEDBOJUZPKYKLUXCWEMRYDMHIRNTWUKNLFRIQWSMUCJONQFFRSJUSLHFFWBOXPQHCXEGHIVSTOARUYOAVUXNHTJJKZBBZCCAEKEXYNAAGXLSWXFIMTNRLWVAAISIIBOYZSVMDEACOIRLVYLKKZNMSNXPHCF");
    msg.sys_dst.assign("UWGNTKFSWAPQICOZKQFHQFNMRTQCHKAEPGBHKCZXJNSOAWVHUSRUUDNTRDDYTLIOPKSFXWZXJIMEFRDEHSQPLDKZNJFYKVOXTSGALIPDQQSZVLCWCDBALYBMKURRVRLMAZBIWOCKIRIAGJTQBZSXNFXBPYYJQWXPNJOFPJVIC");
    msg.flags = 75U;
    const char tmp_msg_0[] = {-49, -96, -42, -4, 111, -57, -44, -62, 104, -97, 7, 46, 58, -70, 76, 58, -77, -4, -100, -42, 101, 77, 53, 73, -57, 49, -108, 44, -92, -10, 32, -8, -82, 74, -48, -98, 86, -105};
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
    msg.setTimeStamp(0.312308867575);
    msg.setSource(18228U);
    msg.setSourceEntity(2U);
    msg.setDestination(33951U);
    msg.setDestinationEntity(109U);
    msg.seq = 44402U;
    msg.value = 91U;
    msg.error.assign("DXKBKFPMERKWOEANBHYHXTRPORMBVGNJMKDVCRJSZANCGBBRQHZGEFPEAHPYIUCBDTLMMEEYSDPYXCELCFUQIXWAFIBLTXLOGHAJZPLSAQYNJJOLPGPQQQFWTFWFHQUCIHSWLWSVIFACBOIVLFSYKKTWESRTKEUBRXALIWOOMGVMEJRPCVJISCZ");

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
    msg.setTimeStamp(0.879499221526);
    msg.setSource(4279U);
    msg.setSourceEntity(68U);
    msg.setDestination(57741U);
    msg.setDestinationEntity(208U);
    msg.seq = 7359U;
    msg.value = 144U;
    msg.error.assign("KGNRRSMCMDRRPQQRPYCUQNSZIGAEBWQHHOJYPSMFZTVNNXEONGOSPGQTZAOIZMNJGHIRAMXKFWVCHRQDGTXNEXXUHEUTWXLSESPQCOSFFZMUWQMYVDXDLJO");

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
    msg.setTimeStamp(0.385143822192);
    msg.setSource(25019U);
    msg.setSourceEntity(147U);
    msg.setDestination(13134U);
    msg.setDestinationEntity(79U);
    msg.seq = 38304U;
    msg.value = 91U;
    msg.error.assign("CTZSMBXKDVHTALVVNECKTFRZIPSGAHPEOYDSRVDQINPEWXIAHLYTPOJVZROAWGZ");

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
    msg.setTimeStamp(0.352994950377);
    msg.setSource(43374U);
    msg.setSourceEntity(148U);
    msg.setDestination(3744U);
    msg.setDestinationEntity(74U);
    msg.seq = 52280U;
    msg.sys.assign("QJSZSTZCEFDXXFWPVOPMBHCHDLHSRDIBCRLNNJITSZDTPXMDWXIARGBQYIWJZHUPUORLCSKEDJZLUJMFJNGCFMDXPJIUZOVHLMWGEOYTLYQGTEZHRIJKMSXGCWAEVEZMNYLTKNSGDWUVUSHBANPEUKNWGYBAYFFJFASQKTHOUARZWTFBLBNPLHEGVIQFQOAYKNTBRSVCRVKANIKIQDIBEPRPFMBUAMCZQOGTYMXJ");
    msg.value = 0.163593648996;

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
    msg.setTimeStamp(0.900998722762);
    msg.setSource(955U);
    msg.setSourceEntity(152U);
    msg.setDestination(50701U);
    msg.setDestinationEntity(49U);
    msg.seq = 9866U;
    msg.sys.assign("SMPSJCVDJBXXEPJQGUPNEPKJUJKUYWIATZFQYZWXWBQPUSDDXEWQCMITVSPRMFUBMUFGGAEQRDIPBCHZFAHDVZZEIDGOEJGZATMJOCTVSTNLUWVEECHMLIUCBBIHHYZZKQUALKHVHGXTOFSGFICKIKRWOHAZLYDMILFKCPXYYJLLODJZRKRWXLMHBFAENDQIFLGTGTOOTSLUCNTYRXRXASOSKOPD");
    msg.value = 0.520751028067;

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
    msg.setTimeStamp(0.499985344124);
    msg.setSource(24220U);
    msg.setSourceEntity(73U);
    msg.setDestination(46342U);
    msg.setDestinationEntity(208U);
    msg.seq = 28021U;
    msg.sys.assign("NDNBRSTHEYMPBJLKJGBJSQJINSFWYYFQXTRGCYXURTIUERXKDECCUBMSEXDZTWYIPKYWOOURZQWHHCNGP");
    msg.value = 0.720622853038;

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
    msg.setTimeStamp(0.00605041753988);
    msg.setSource(48668U);
    msg.setSourceEntity(73U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(205U);
    msg.seq = 3597U;
    msg.sys_dst.assign("SXERAMKRKFWJSZCTGGIQQOGZDBIUYVMEXNPRIZTVOMPNAQTOEXCSUSJGUYITNALDHUULYVJBJHTWNJYVAQKXFFMRKXPLMCFFLVJWDXDGZNVRDUMAPNJCOSBUDFDKHHYWJOBAOUUSGZOYIBLLNIHGCMQRADFIWBBQCQOVEUGX");
    msg.timeout = 0.953415629172;

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
    msg.setTimeStamp(0.542367814023);
    msg.setSource(5955U);
    msg.setSourceEntity(36U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(45U);
    msg.seq = 29402U;
    msg.sys_dst.assign("LQTFZQMFTHUTGGEXKXEFFYQWJCXUBAQECCHKIIKSZSVUWWFFFVLIOKYJPMANMRTLSRLDMKQNSSWODVKEDUBVYGQZYNFMJMRSXYEJOHDITNMNYHFUKZZKQOPIAUOVSZCHLJBICTKVLDCUBHENPENDXD");
    msg.timeout = 0.163156718614;

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
    msg.setTimeStamp(0.347841542531);
    msg.setSource(6515U);
    msg.setSourceEntity(119U);
    msg.setDestination(59655U);
    msg.setDestinationEntity(95U);
    msg.seq = 27000U;
    msg.sys_dst.assign("BBWJXWRLNPMYWFSGBF");
    msg.timeout = 0.127569368396;

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
    msg.setTimeStamp(0.182874765789);
    msg.setSource(7719U);
    msg.setSourceEntity(135U);
    msg.setDestination(22740U);
    msg.setDestinationEntity(174U);
    msg.action = 221U;
    msg.longain = 0.738390333509;
    msg.latgain = 0.0175555920928;
    msg.bondthick = 1712376785U;
    msg.leadgain = 0.958022667732;
    msg.deconflgain = 0.884213120987;

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
    msg.setTimeStamp(0.809433796303);
    msg.setSource(45584U);
    msg.setSourceEntity(66U);
    msg.setDestination(45378U);
    msg.setDestinationEntity(73U);
    msg.action = 161U;
    msg.longain = 0.525097745755;
    msg.latgain = 0.064368438701;
    msg.bondthick = 3647675535U;
    msg.leadgain = 0.809647867562;
    msg.deconflgain = 0.0627886894158;

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
    msg.setTimeStamp(0.172815832338);
    msg.setSource(22426U);
    msg.setSourceEntity(134U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(185U);
    msg.action = 139U;
    msg.longain = 0.63323199344;
    msg.latgain = 0.555802814036;
    msg.bondthick = 2332934538U;
    msg.leadgain = 0.320812267561;
    msg.deconflgain = 0.982938388441;

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
    msg.setTimeStamp(0.709841779266);
    msg.setSource(41037U);
    msg.setSourceEntity(101U);
    msg.setDestination(59072U);
    msg.setDestinationEntity(131U);
    msg.err_mean = 0.850982026235;
    msg.dist_min_abs = 0.557184875135;
    msg.dist_min_mean = 0.632050023002;

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
    msg.setTimeStamp(0.543161186444);
    msg.setSource(4829U);
    msg.setSourceEntity(32U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(159U);
    msg.err_mean = 0.238037191372;
    msg.dist_min_abs = 0.0536029246253;
    msg.dist_min_mean = 0.0113344516686;

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
    msg.setTimeStamp(0.677019562393);
    msg.setSource(31922U);
    msg.setSourceEntity(13U);
    msg.setDestination(52569U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.969799126861;
    msg.dist_min_abs = 0.76417895509;
    msg.dist_min_mean = 0.35747959514;

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
    msg.setTimeStamp(0.0247024727647);
    msg.setSource(60311U);
    msg.setSourceEntity(194U);
    msg.setDestination(47792U);
    msg.setDestinationEntity(241U);
    msg.action = 150U;
    msg.lon_gain = 0.630925399595;
    msg.lat_gain = 0.405137824665;
    msg.bond_thick = 0.695662052314;
    msg.lead_gain = 0.271593195389;
    msg.deconfl_gain = 0.878561115959;
    msg.accel_switch_gain = 0.35599961964;
    msg.safe_dist = 0.293279483096;
    msg.deconflict_offset = 0.284518662484;
    msg.accel_safe_margin = 0.425641648821;
    msg.accel_lim_x = 0.236660337824;

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
    msg.setTimeStamp(0.538102738034);
    msg.setSource(53047U);
    msg.setSourceEntity(36U);
    msg.setDestination(17399U);
    msg.setDestinationEntity(26U);
    msg.action = 202U;
    msg.lon_gain = 0.154059159836;
    msg.lat_gain = 0.457036598381;
    msg.bond_thick = 0.199955038014;
    msg.lead_gain = 0.955359265984;
    msg.deconfl_gain = 0.35998558674;
    msg.accel_switch_gain = 0.657372497123;
    msg.safe_dist = 0.702630168307;
    msg.deconflict_offset = 0.334635840135;
    msg.accel_safe_margin = 0.699731928286;
    msg.accel_lim_x = 0.398953657983;

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
    msg.setTimeStamp(0.730468748202);
    msg.setSource(41894U);
    msg.setSourceEntity(171U);
    msg.setDestination(4576U);
    msg.setDestinationEntity(43U);
    msg.action = 243U;
    msg.lon_gain = 0.00246374512455;
    msg.lat_gain = 0.901047779946;
    msg.bond_thick = 0.0861813087538;
    msg.lead_gain = 0.834523109712;
    msg.deconfl_gain = 0.590728352383;
    msg.accel_switch_gain = 0.33021868106;
    msg.safe_dist = 0.0106310840709;
    msg.deconflict_offset = 0.211311503047;
    msg.accel_safe_margin = 0.597160895226;
    msg.accel_lim_x = 0.283856343001;

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
    msg.setTimeStamp(0.734247248714);
    msg.setSource(29996U);
    msg.setSourceEntity(44U);
    msg.setDestination(50868U);
    msg.setDestinationEntity(227U);
    msg.type = 124U;
    msg.op = 17U;
    msg.err_mean = 0.439699648273;
    msg.dist_min_abs = 0.915190197726;
    msg.dist_min_mean = 0.557727953657;
    msg.roll_rate_mean = 0.932341874522;
    msg.time = 0.677893639563;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 42U;
    tmp_msg_0.lon_gain = 0.293498135038;
    tmp_msg_0.lat_gain = 0.833096642689;
    tmp_msg_0.bond_thick = 0.627839344871;
    tmp_msg_0.lead_gain = 0.233034450939;
    tmp_msg_0.deconfl_gain = 0.810633115428;
    tmp_msg_0.accel_switch_gain = 0.952459619158;
    tmp_msg_0.safe_dist = 0.873129863447;
    tmp_msg_0.deconflict_offset = 0.62721823997;
    tmp_msg_0.accel_safe_margin = 0.210375673842;
    tmp_msg_0.accel_lim_x = 0.583597957755;
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
    msg.setTimeStamp(0.0534484048454);
    msg.setSource(58558U);
    msg.setSourceEntity(246U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(205U);
    msg.type = 167U;
    msg.op = 253U;
    msg.err_mean = 0.805182109231;
    msg.dist_min_abs = 0.6061407085;
    msg.dist_min_mean = 0.857791947251;
    msg.roll_rate_mean = 0.964310949789;
    msg.time = 0.113735106193;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 166U;
    tmp_msg_0.lon_gain = 0.27327086742;
    tmp_msg_0.lat_gain = 0.999482613859;
    tmp_msg_0.bond_thick = 0.259255536402;
    tmp_msg_0.lead_gain = 0.358309406472;
    tmp_msg_0.deconfl_gain = 0.904717823146;
    tmp_msg_0.accel_switch_gain = 0.115743548715;
    tmp_msg_0.safe_dist = 0.207359062709;
    tmp_msg_0.deconflict_offset = 0.0840366100056;
    tmp_msg_0.accel_safe_margin = 0.803708476044;
    tmp_msg_0.accel_lim_x = 0.661749734912;
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
    msg.setTimeStamp(0.813318644378);
    msg.setSource(25995U);
    msg.setSourceEntity(119U);
    msg.setDestination(23647U);
    msg.setDestinationEntity(219U);
    msg.type = 174U;
    msg.op = 146U;
    msg.err_mean = 0.427891343904;
    msg.dist_min_abs = 0.944126327622;
    msg.dist_min_mean = 0.897322128026;
    msg.roll_rate_mean = 0.7415095251;
    msg.time = 0.655221624854;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.623820574951;
    tmp_msg_0.lat_gain = 0.878275542051;
    tmp_msg_0.bond_thick = 0.167975110985;
    tmp_msg_0.lead_gain = 0.606698822624;
    tmp_msg_0.deconfl_gain = 0.494280636514;
    tmp_msg_0.accel_switch_gain = 0.96122790956;
    tmp_msg_0.safe_dist = 0.526275414906;
    tmp_msg_0.deconflict_offset = 0.615285344986;
    tmp_msg_0.accel_safe_margin = 0.650749944738;
    tmp_msg_0.accel_lim_x = 0.0357306739951;
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
    msg.setTimeStamp(0.937662001213);
    msg.setSource(28013U);
    msg.setSourceEntity(233U);
    msg.setDestination(7311U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.495599887575;
    msg.lon = 0.876730031057;
    msg.eta = 3191084181U;
    msg.duration = 56004U;

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
    msg.setTimeStamp(0.129705590867);
    msg.setSource(2520U);
    msg.setSourceEntity(5U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.00526138287063;
    msg.lon = 0.567393991594;
    msg.eta = 1204430802U;
    msg.duration = 15342U;

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
    msg.setTimeStamp(0.948144089519);
    msg.setSource(31264U);
    msg.setSourceEntity(5U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.123339529446;
    msg.lon = 0.309852311626;
    msg.eta = 1304174527U;
    msg.duration = 33341U;

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
    msg.setTimeStamp(0.36949884598);
    msg.setSource(21289U);
    msg.setSourceEntity(76U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(44U);
    msg.plan_id = 10719U;

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
    msg.setTimeStamp(0.879177916861);
    msg.setSource(58420U);
    msg.setSourceEntity(119U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(70U);
    msg.plan_id = 65444U;

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
    msg.setTimeStamp(0.145715671423);
    msg.setSource(44672U);
    msg.setSourceEntity(201U);
    msg.setDestination(25281U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 32975U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.781193153152;
    tmp_msg_0.lon = 0.800366499663;
    tmp_msg_0.eta = 3539287929U;
    tmp_msg_0.duration = 39266U;
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
    msg.setTimeStamp(0.096412378236);
    msg.setSource(1126U);
    msg.setSourceEntity(217U);
    msg.setDestination(48515U);
    msg.setDestinationEntity(215U);
    msg.type = 13U;
    msg.command = 86U;
    msg.settings.assign("YKBBWGBCQTRERJDWFYEXJPBDJNCCWPUFINJPVQZBPEQJTRDGBSSTEMTFMXPDDWJHBEDYSZYADKZVDQZTPSOJUZDAFNKSQSTXLGZAHXOWNSAGSLAHHFKOVRZLPTAXCWKUZZOMQCYDVMILROQTOBETKFKXENUMUCNRFRVALLRMGJIOVYYAUHINEFWJAIBWVVFHMQXLLEMLKIYRNQUGUNFUCW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 15356U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YUNQGHAKBPNOQMPULAXFTPYZAYYHTYDKUVJIJSDJRSSGJNMEIGCZDEEDSMFLHDRFVBTFOJUIKBHXPQQUZKAKDEOYGYMHDFUWRXHSWCXCYVSTXICYNLWCXOIQSUROVETLQWYFHEITBZLPEAAZNOBVQGKLRSOHZFFVVRALLVRDQJNSTUDZLXKBPRNZBUWGPOXOAGCTTHGRZMNZKJIXFCBAIFRWWMDJJSMAHMMVCJUPXECOWITEBGNCLBKMIV");

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
    msg.setTimeStamp(0.418425939381);
    msg.setSource(59280U);
    msg.setSourceEntity(115U);
    msg.setDestination(3862U);
    msg.setDestinationEntity(125U);
    msg.type = 210U;
    msg.command = 201U;
    msg.settings.assign("JHSDCIAVBTRJATNDCZUFSURFZGRNZMFYVVQPYYXZJEXHIQHBMJEJZVWCAKRNOOUHDQDGTDTQGPFVZYLBEVPCRFEWQSUPXYEOFIZREMMLDDLOCLHZGQIFNLUDQIZVWWFPIIUBFJTRYURYUATKBCTNSPCLHQEDBADCNYMEKPNWJLNWOPQJCKHGVYOWNOKJR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7875U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.63439667588;
    tmp_tmp_msg_0_0.lon = 0.250093798535;
    tmp_tmp_msg_0_0.eta = 4129379838U;
    tmp_tmp_msg_0_0.duration = 53124U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YKVQRNPLKPT");

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
    msg.setTimeStamp(0.642982502849);
    msg.setSource(21108U);
    msg.setSourceEntity(62U);
    msg.setDestination(29867U);
    msg.setDestinationEntity(98U);
    msg.type = 82U;
    msg.command = 15U;
    msg.settings.assign("JTMSOAZXUKOQPUBYCAJBNIKXTCOTYXHNGZMJHORGHHXSCQYPRXTWRMQJZUGBWKJNZCHEJERVCMCIYBQVPWRCSMWPHWQZIXMTIZTBQEESELDEAHMVKNLENEAAZYKPMUGFVUTLJAIEKZHBJVCDFGDKXBQYCISZLUTQGENXSBWJONNFYTVGRRISIXMLDVKASRPWOOHKALGFQRGNWKBVYUVAICAJHSUYNDOSI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56920U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZMBAGNNMNINOBHVMEUZDKAHIQSLUNZOTJKIQJPGSLETRRTTFFRFVAEYYGBWQCAEQVUHCRSSSOPMUGLALOQBTGMHPDGZKCFPCJETJBWFPMDNZLRKFLUOKXVFCIXETQWKUWPHVEVPUDNUDCJZMDYRQOYGSCAB");

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
    msg.setTimeStamp(0.893507288519);
    msg.setSource(58768U);
    msg.setSourceEntity(210U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(33U);
    msg.state = 68U;
    msg.plan_id = 38004U;
    msg.wpt_id = 205U;
    msg.settings_chk = 34364U;

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
    msg.setTimeStamp(0.311175283393);
    msg.setSource(10891U);
    msg.setSourceEntity(156U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(88U);
    msg.state = 202U;
    msg.plan_id = 16753U;
    msg.wpt_id = 110U;
    msg.settings_chk = 64852U;

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
    msg.setTimeStamp(0.555511996255);
    msg.setSource(35135U);
    msg.setSourceEntity(185U);
    msg.setDestination(52742U);
    msg.setDestinationEntity(92U);
    msg.state = 113U;
    msg.plan_id = 4134U;
    msg.wpt_id = 185U;
    msg.settings_chk = 14272U;

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
    msg.setTimeStamp(0.82988989617);
    msg.setSource(5504U);
    msg.setSourceEntity(248U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(225U);
    msg.uid = 123U;
    msg.frag_number = 142U;
    msg.num_frags = 16U;
    const char tmp_msg_0[] = {40, -47, 18, -2, -124, 92, 38, 53, -10, -59, 59, 83, -75, 119, 121, -84, -50, 76, -106, 124, 113, 9};
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
    msg.setTimeStamp(0.744184163902);
    msg.setSource(9476U);
    msg.setSourceEntity(151U);
    msg.setDestination(7320U);
    msg.setDestinationEntity(178U);
    msg.uid = 100U;
    msg.frag_number = 76U;
    msg.num_frags = 5U;
    const char tmp_msg_0[] = {31, 35, 0, -100, -16, 77, -77, -21, 52, 102, 35, -6, -32, 90, -64, 86, 30, 116, -106, 68, -117, -94, 56, -6, -80, -6, 60, 3, 39, 15, 93, 101, 108, -4, 66, 96, 109, -123, 111, 116, 71, -9, 95, 63, -76, -61, -53, -2, -112, -56, 74, 41, 88, 5, -101, -13, 116, 96, 48, 53, 93, -23, -42, 17, -36, -54, -86, -26, -128, -28, 111, 99, 52, -102, 23, 78, 102, -80, -65, -68, 78, -23, -17, -86, 48, -28, -30, 27, 54, 114, 2, -119, -108, 28, -61, -109, -92, -102, 86, -50, 111, -1, 118, 67, -112, 82, -35, 2, 112, -67, -45, -10, 6, -18, -50, -29, -123, 69, 10, 53, 46, -47, -101, 47, 90, 90, 31, 40, -117, 51, -93, -116, -23, 64, 15, -56, 115, 18, 119, -60, -117, -16, 112, 7, 35, 120, 81, -12, 47, 125, -108, 76, 52, 4, 18, -6, -112, 106, -73, 87, 74, -36, 15, 65, 69, 10, 45, -44, 66, -113, 55, -52, -45, -103, 126, -27, -82};
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
    msg.setTimeStamp(0.989013764122);
    msg.setSource(59264U);
    msg.setSourceEntity(56U);
    msg.setDestination(17451U);
    msg.setDestinationEntity(118U);
    msg.uid = 206U;
    msg.frag_number = 109U;
    msg.num_frags = 230U;
    const char tmp_msg_0[] = {64, -28, -115, -87, 88, -30, -41, -59, 97, 56, -12, -100, -100, 38, -84, -123, -115, -41, -68, -15, -110, 40, -88, 43, -21, -82, 60};
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
    msg.setTimeStamp(0.988603490525);
    msg.setSource(57160U);
    msg.setSourceEntity(197U);
    msg.setDestination(34173U);
    msg.setDestinationEntity(78U);
    msg.content_type.assign("FLPSIVUFLQZITFHHLCVEGHAGMUMPLOMSFPCTAOBAWLMZDQDYMXNXFZBNDZDBCRPVDZQTGIWVXGJCWHZOAMVUNWUNUHBDJ");
    const char tmp_msg_0[] = {92, 103, 90, -69, -83, 13, -73, 18, 116, 91, -11, 3, 13, -10, 83, -109, 112, 117, -102, 118, 38, 60, -124, 76, 52, -42, 117, -6, 119, -86, -121, -118, 63, -4, 57, -54, -126, 74, 97, 42, -35, 110, 88, 58, -105, 28, 26, -81, 125, -74, 32, 34, 79, -48, -10, -66, 68, 30, -69, -86, 114, 56, -23, -104, 1, -60, 26, 117, 97, 0, 19, -45, -80, 114, 53, -16, 12, -7, 65};
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
    msg.setTimeStamp(0.0986764595706);
    msg.setSource(10162U);
    msg.setSourceEntity(75U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(7U);
    msg.content_type.assign("TJTWQPNDFEFAPILHEWKSICVARAAUXQMHBFBOUSHQGHCVHATJZXNLMGFIKUWAGNCHYGXZIRKCEOHACDUVAXJEMXKHQYEQGBQOIISPBLDDNZGLJYUADTVBRKGZBTVMWMKGFVZVNEVMEIDDNBEPJYQKIXVRMPKCFOCNWRECRBOWDQCYRBZJPOYMFNGTDVYGLMLOSUJPJCTOFRUPSUNSZP");
    const char tmp_msg_0[] = {37, -127, -49, -42, 72, 26, 67, 82, 55, -35, 5, 28, 58, 16, -120, -78, -32, -37, 108, 102, 47, 99, -52, -12, -109, 90, 21, 97, 112, 101, 6, -127, 81, -99, -63, -124, -102, 125, -125, 54, 109, -102, 33, 50, 65, -97, 101, -57, -95, -55, -25, -124, 113, 25, -75, -73, 63, -8, -120, 58, -74, 96, 117, -12, -14, -60, 38, -124, 3, -43, -8, -62, 124, 31, 121, -69, -91, 42, 40, 126, 38, -38, 100, -12, -66, -2, 112, -128, 31, 76, 104, 39, 68, -31, 19, 52, -114, 21, 16, 25, -117, 80, 98, -43, 104, -121, -43, 61, -66, 37, -12, -24, 89, -121, -119, -64, 19, -57, 25, 36, -2, 60, 58, 111, 103, 37, 71, 63, 12, 111, 10, 24, -62, -46, -117, -44, 29, 61, 60, 70, -124, -18, 14, -113, 120, -56, -125, 41, 77, 50, -60, 71, -49, -109, 101, 31, 124, 45, 82, -114, 45, 65, -112, -10, -73, 113, 14, -57, -57, 43, 89, -122, 22, 32, 16, 126, -76, -9, -80, -104, 21, 30, -83, 77, -109, 71, 39, 26, -128, 10, -53, -20, 66, -46, -20, 73, 21, -101, 58, -127, 22, 33, 3, -23, 7, 65, 49, 20, -119, -71, 47, -67, 125, 18, -59, 75, -119, -87, -106, 57, 124, -119, -98, -65, 59, 19, 60, -108, 67, 48, 37, -120, 11, 99, 69, -31, -41, -105, -122, 58, 33, -32, 28, 80, 96, 104, -26, -10, -3, -117, 77};
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
    msg.setTimeStamp(0.17493035516);
    msg.setSource(20932U);
    msg.setSourceEntity(244U);
    msg.setDestination(25184U);
    msg.setDestinationEntity(7U);
    msg.content_type.assign("LBTMLFTRYPGPFVZWKJUQFSHYDFOKWGGQATOWNSHYRUTWLFODERKXRBUGBOHEDXJGUKVQGPZJI");
    const char tmp_msg_0[] = {42, -120, -104, -26, -11, -96, -49, -76, 22, 23, 92, 71, 110, 108, 76, 11, -60, 21, 89, -31, 51, 73, -20, -59, 37, 66, 102, 65, 9, -122, -86, 118, -108, -13, -8, -26, 97, -74, -104, 48, 119, 4, 55, -13, 121, 81, 71, 93, 86, 113, -15, -6, 106, -74, -31, -15, -80, 73, -122, -106, -93, 40, 37, -73, 105, -27, -97, 54, 54, 124, 112, -12, -124, 115, -24, 27, -91, -57, 28, 68, 65, -78, 90, 22, 8, -125, 28, -54, -58, -96, -68, -32, -60, 64, -39, -127, -73, -84, 84, 112, 10, 16, -37, 61, 18, 24, 20, 27, -49, 21, 26, -29, 72, -4, 48, 36, 67, -57, -103, -103, -97, -86, 123, -58, -12, 12, 91, 11, -13, -78, 72, 12, -47, -23, -109, 56, 32, -54, -28, 99, 27, -54, 88, 123, -14, 108, 96, -65, -63, 48, -79, -68, 80, -7, -78, 72, -12, 87, 84, -71, -67, 113, 53, -24, 12, -52, 56, 64, 66};
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
    msg.setTimeStamp(0.923331585295);
    msg.setSource(42604U);
    msg.setSourceEntity(20U);
    msg.setDestination(40345U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.676722662433);
    msg.setSource(43978U);
    msg.setSourceEntity(16U);
    msg.setDestination(45055U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.820399395748);
    msg.setSource(4657U);
    msg.setSourceEntity(170U);
    msg.setDestination(47534U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.805466120588);
    msg.setSource(63728U);
    msg.setSourceEntity(16U);
    msg.setDestination(43952U);
    msg.setDestinationEntity(2U);
    msg.target = 34526U;
    msg.bearing = 0.470463001995;
    msg.elevation = 0.557133003071;

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
    msg.setTimeStamp(0.427681625986);
    msg.setSource(24479U);
    msg.setSourceEntity(149U);
    msg.setDestination(21993U);
    msg.setDestinationEntity(216U);
    msg.target = 48416U;
    msg.bearing = 0.938523934175;
    msg.elevation = 0.182268140113;

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
    msg.setTimeStamp(0.382518998331);
    msg.setSource(50517U);
    msg.setSourceEntity(30U);
    msg.setDestination(12894U);
    msg.setDestinationEntity(192U);
    msg.target = 57261U;
    msg.bearing = 0.380879085308;
    msg.elevation = 0.87579614833;

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
    msg.setTimeStamp(0.583704409953);
    msg.setSource(3318U);
    msg.setSourceEntity(149U);
    msg.setDestination(30173U);
    msg.setDestinationEntity(83U);
    msg.target = 18380U;
    msg.x = 0.0533951019749;
    msg.y = 0.0246161304372;
    msg.z = 0.431079278286;

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
    msg.setTimeStamp(0.0938703694148);
    msg.setSource(39303U);
    msg.setSourceEntity(213U);
    msg.setDestination(24644U);
    msg.setDestinationEntity(9U);
    msg.target = 41697U;
    msg.x = 0.249711516082;
    msg.y = 0.913797350145;
    msg.z = 0.647878804827;

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
    msg.setTimeStamp(0.114708185883);
    msg.setSource(56846U);
    msg.setSourceEntity(221U);
    msg.setDestination(25484U);
    msg.setDestinationEntity(62U);
    msg.target = 14360U;
    msg.x = 0.806346123845;
    msg.y = 0.176362657338;
    msg.z = 0.730036326271;

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
    msg.setTimeStamp(0.201758323536);
    msg.setSource(34683U);
    msg.setSourceEntity(70U);
    msg.setDestination(35932U);
    msg.setDestinationEntity(154U);
    msg.target = 61499U;
    msg.lat = 0.164977169861;
    msg.lon = 0.610577590757;
    msg.z_units = 163U;
    msg.z = 0.291244033653;

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
    msg.setTimeStamp(0.328498135954);
    msg.setSource(5643U);
    msg.setSourceEntity(203U);
    msg.setDestination(60461U);
    msg.setDestinationEntity(25U);
    msg.target = 28562U;
    msg.lat = 0.289484043085;
    msg.lon = 0.447703447246;
    msg.z_units = 243U;
    msg.z = 0.332649340826;

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
    msg.setTimeStamp(0.867184160955);
    msg.setSource(12736U);
    msg.setSourceEntity(32U);
    msg.setDestination(14094U);
    msg.setDestinationEntity(20U);
    msg.target = 65012U;
    msg.lat = 0.0290286211113;
    msg.lon = 0.244384959948;
    msg.z_units = 137U;
    msg.z = 0.499646088025;

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
    msg.setTimeStamp(0.233217508991);
    msg.setSource(49937U);
    msg.setSourceEntity(74U);
    msg.setDestination(7431U);
    msg.setDestinationEntity(90U);
    msg.locale.assign("ONYWFRBPNTJIPHIUNCBEFNTGJZAIQJOLIYPCRDVMDJLDMSSKLWFMYDYHRIZAZSBOG");
    const char tmp_msg_0[] = {8, 99, -119, -11, 61, 30, -69, -13, 77, -99, -26, 42, -114, 83, 120, 120, -41, -38, 8, -87, -99, -8, 111, 18, 100, 99, -91, -98, -127, -118, -104, -74, -112, 102, 72, -17, -102, 111, -2, -27, 90, 42, 0, -25, 55, -128, 57, 125, -16, 117, 101, -11, -27, 69, -101, -57, -90, -126, 112, -84, 55, -3, 112, -26, 118};
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
    msg.setTimeStamp(0.0349607931841);
    msg.setSource(42596U);
    msg.setSourceEntity(51U);
    msg.setDestination(2770U);
    msg.setDestinationEntity(41U);
    msg.locale.assign("PEKQAIQAYUIZMALLHYMOVWEFCMECOGWMX");
    const char tmp_msg_0[] = {-94, 28, 20, -109, 109, 21, 111, 105, -38, 11, -73, 124, 31, -2, 1, -126, -108, -100, -86, 32, -38, -77, 57, 79, 10, 85, -96, -52, 19, -26, -18, 33, 23, -34, -33, 82, 60, -3, -41, -81, -33, 90, 67, 52, 86, 75, 51, -43, -7, -21, -54, -23, 64, -126, -67, -5, 1, 75, -63, -57, -91, -90, -95, 40, -1, -8, 87, 21, 74, -128, 114, -122, -93, 6, -103, -18, -31, 53, -79, -41, 88, 0, 92, -15, 35, 95, 13, -61, 44, -21, 111, 81, 18, 117, 13};
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
    msg.setTimeStamp(0.3582794019);
    msg.setSource(8573U);
    msg.setSourceEntity(47U);
    msg.setDestination(36295U);
    msg.setDestinationEntity(216U);
    msg.locale.assign("CXRIXPTSFLZUIKLIHJUTJBNWKRQSXXFMXGMBAOIUGODIQLOGSJBYZEYYUIKQOCYWSVZVMHKFJVHOSHCNCAOZNOZDPEASRPGLZSKBPAGLPRSMVRBOWRQRIPPHVAKKTQMNODDTJAYEWLYZENMPGRKMBCYSVFDADEHYZBNG");
    const char tmp_msg_0[] = {44, 32, 118, 58, -124, 71, 98, -77, 124, -36, 102, 82, 32, 6, -93, 105, -31, 21, 99, -50, 45, -31, 117, 97, -41, 83, -120, -32, -42, -59, 94, 113, -100, 116, -17, -111, 16, -123, -105, 29, -105, -102, 103, -14, 79, 86, 33, 63, -39, -118, 84, 119, 63, 124, 30, 8, 46, -44, -9, -47, -94, 110, 110, 11, -82, 35, 83, -127, -113, 3, -64, -68, 65, -75, 35, -16, 124, -55, 123, -26, 123, 44, -98, 18, 82, 100, 36, -4, -82, -99, 109, -55, 86, 27, 55, -44, -92, 94, 75, -120, 99, -54, -114, -62, -124, -127, -47, 78, -103, 14, 99, 11, 22, 78, -2, -86, 97, 19, -29, 11, 45, 97, -13, -125, 63, -38, -51, -18, -56, -40, -60, -42, 103, -105, 77, 77, -39, 41, -10, 16, -9, -43, 91, -52, -118, 97, 35, 89, 50, 30, -128, -36, -38, 91, -110, 53, 106, 22, -43, 83, 120, -68, -83, 100, 44, 64, -117, 89, 3, -119, -77, -128, -77, 39, -127, -44, 105, -125, 72, 123, 51, -119, 21, -76, 26, 40, 4, -38, 89, -92, 21, -104, -62, 84, -34, 105, 7, -110, 16, -24, -33, 60, 114, 61, 65, 46, -7, -23, 26, -20};
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
    msg.setTimeStamp(0.508732284768);
    msg.setSource(56788U);
    msg.setSourceEntity(94U);
    msg.setDestination(50272U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.547139333232);
    msg.setSource(23856U);
    msg.setSourceEntity(51U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.0712495130156);
    msg.setSource(21832U);
    msg.setSourceEntity(222U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.487861316906);
    msg.setSource(55379U);
    msg.setSourceEntity(213U);
    msg.setDestination(59989U);
    msg.setDestinationEntity(43U);
    msg.camid = 185U;
    msg.x = 24816U;
    msg.y = 53943U;

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
    msg.setTimeStamp(0.773897247746);
    msg.setSource(63599U);
    msg.setSourceEntity(131U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(75U);
    msg.camid = 230U;
    msg.x = 22070U;
    msg.y = 10240U;

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
    msg.setTimeStamp(0.330426124971);
    msg.setSource(3166U);
    msg.setSourceEntity(194U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(15U);
    msg.camid = 119U;
    msg.x = 10429U;
    msg.y = 46137U;

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
    msg.setTimeStamp(0.80096576864);
    msg.setSource(45628U);
    msg.setSourceEntity(121U);
    msg.setDestination(17917U);
    msg.setDestinationEntity(127U);
    msg.camid = 107U;
    msg.x = 64932U;
    msg.y = 25876U;

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
    msg.setTimeStamp(0.0774104212783);
    msg.setSource(37626U);
    msg.setSourceEntity(14U);
    msg.setDestination(63492U);
    msg.setDestinationEntity(194U);
    msg.camid = 29U;
    msg.x = 44612U;
    msg.y = 40562U;

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
    msg.setTimeStamp(0.0159731956026);
    msg.setSource(23546U);
    msg.setSourceEntity(109U);
    msg.setDestination(9511U);
    msg.setDestinationEntity(37U);
    msg.camid = 30U;
    msg.x = 48831U;
    msg.y = 16481U;

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
    msg.setTimeStamp(0.170402450615);
    msg.setSource(39485U);
    msg.setSourceEntity(126U);
    msg.setDestination(4485U);
    msg.setDestinationEntity(23U);
    msg.tracking = 85U;
    msg.lat = 0.681305249966;
    msg.lon = 0.0788259339936;
    msg.x = 0.576237521089;
    msg.y = 0.876079398135;
    msg.z = 0.99380294021;

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
    msg.setTimeStamp(0.147293391964);
    msg.setSource(43828U);
    msg.setSourceEntity(240U);
    msg.setDestination(30935U);
    msg.setDestinationEntity(98U);
    msg.tracking = 75U;
    msg.lat = 0.978772511981;
    msg.lon = 0.826715516755;
    msg.x = 0.0245596902723;
    msg.y = 0.802684300496;
    msg.z = 0.987150644097;

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
    msg.setTimeStamp(0.195861237825);
    msg.setSource(3425U);
    msg.setSourceEntity(171U);
    msg.setDestination(61239U);
    msg.setDestinationEntity(120U);
    msg.tracking = 179U;
    msg.lat = 0.418233216433;
    msg.lon = 0.174093771628;
    msg.x = 0.821872706807;
    msg.y = 0.217346455378;
    msg.z = 0.611900873016;

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
    msg.setTimeStamp(0.283440060378);
    msg.setSource(27553U);
    msg.setSourceEntity(36U);
    msg.setDestination(58807U);
    msg.setDestinationEntity(36U);
    msg.target.assign("ARRHVNRQPUDEVTXJFZFWVZFTDLFOTDEEWBDABSKZZQGXGQJGYMIFJYWNJUAMCRDMCOBFATOPHQYKBAWYELQHPEQLVBPBOWXRMFKPUAGTVGJZHDSTJUKPTSVDUMQYYMURIOGXCSCKGJOZAPKSSSICIKNNMXUDHKKAIEVLVMLNJUBECYNXDIIBTWMSPCBWCXBJZNTJFLILOSEFUYRRY");
    msg.lbearing = 0.406082290311;
    msg.lelevation = 0.264716629736;
    msg.bearing = 0.570526752866;
    msg.elevation = 0.91905964986;
    msg.phi = 0.534915598623;
    msg.theta = 0.869159598171;
    msg.psi = 0.877562302651;
    msg.accuracy = 0.845228469118;

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
    msg.setTimeStamp(0.45133687938);
    msg.setSource(64400U);
    msg.setSourceEntity(150U);
    msg.setDestination(49009U);
    msg.setDestinationEntity(186U);
    msg.target.assign("USFJZZEBQAZPNPAWYUBTYPCUVWLPNIEGJOXYCNWMFMCPSVUGJWXKPYMHLILNKSUZCZKDJKZGRNZRHOEORJFMIGJAQGLVRTSHBVVFULBREYETVOKCIXJWWXUHUQPNXFOYMQWQOTAIGKWBLLQIGHHDIVCCBMYQFBNUAFABPJAEKCLIQVXHDEWGMFKTIQJGZXASDGNCNHRUWOHRXBTCTJDHNSSATIODVDFZEKRDKXPMMMTPZSFAVTRXYLYSOD");
    msg.lbearing = 0.190053847845;
    msg.lelevation = 0.884236156565;
    msg.bearing = 0.00443178750954;
    msg.elevation = 0.668277020361;
    msg.phi = 0.0377295635681;
    msg.theta = 0.913894823725;
    msg.psi = 0.135448798955;
    msg.accuracy = 0.267156874497;

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
    msg.setTimeStamp(0.0872872613057);
    msg.setSource(40873U);
    msg.setSourceEntity(196U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(161U);
    msg.target.assign("NIFRVMEBTNWKKTLWXBOLEQK");
    msg.lbearing = 0.314524128272;
    msg.lelevation = 0.484699748725;
    msg.bearing = 0.650326278152;
    msg.elevation = 0.980074064324;
    msg.phi = 0.669010683491;
    msg.theta = 0.220075224866;
    msg.psi = 0.279086275813;
    msg.accuracy = 0.348258428981;

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
    msg.setTimeStamp(0.872019565617);
    msg.setSource(61808U);
    msg.setSourceEntity(225U);
    msg.setDestination(59611U);
    msg.setDestinationEntity(82U);
    msg.target.assign("HWJQMAMEPQHGYRXYEXKJFFSBOPLAPIMZOISHAYUUQZXWWZGZXFACDTBYWOHPFYQONILEMINCFV");
    msg.x = 0.652853051077;
    msg.y = 0.398453555612;
    msg.z = 0.0763663107496;
    msg.n = 0.379740755574;
    msg.e = 0.0407840035463;
    msg.d = 0.825091864952;
    msg.phi = 0.733795781138;
    msg.theta = 0.957970077086;
    msg.psi = 0.889048844116;
    msg.accuracy = 0.110582950206;

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
    msg.setTimeStamp(0.728825475852);
    msg.setSource(56735U);
    msg.setSourceEntity(187U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(36U);
    msg.target.assign("KBXTERYXGTOZJHCCGIJKSUSFNBPVJHNTLJEYFEEITUEQHFXVTWNFMWEONZZW");
    msg.x = 0.0710173571148;
    msg.y = 0.486722028862;
    msg.z = 0.795141888712;
    msg.n = 0.626629680721;
    msg.e = 0.939417837069;
    msg.d = 0.00671781591879;
    msg.phi = 0.614688053405;
    msg.theta = 0.394073112562;
    msg.psi = 0.43907642293;
    msg.accuracy = 0.92309224787;

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
    msg.setTimeStamp(0.610861146507);
    msg.setSource(45083U);
    msg.setSourceEntity(57U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(130U);
    msg.target.assign("FAIOQORRCWYVLJYIMUCKBIVZUYPSXSSHEQFTXANDAKMGBKKLIPAVYRCXURZWYNFDVXKEIUDEUQUPIVOCJFMJDFRSUAPVEYHZENEZFJHORYSKLMALQLYAATSDWLTWIFZJITTODMCTNGHJNNIEHWXMFKOPQCXXTGQKXTZBW");
    msg.x = 0.0532835652411;
    msg.y = 0.979646881167;
    msg.z = 0.685568425282;
    msg.n = 0.894602195031;
    msg.e = 0.43879014914;
    msg.d = 0.199567092729;
    msg.phi = 0.658115948834;
    msg.theta = 0.535308447881;
    msg.psi = 0.798031729047;
    msg.accuracy = 0.292554677784;

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
    msg.setTimeStamp(0.476231347798);
    msg.setSource(4704U);
    msg.setSourceEntity(249U);
    msg.setDestination(21226U);
    msg.setDestinationEntity(248U);
    msg.target.assign("ORJPHZNMAVBZEDBZTMDGUBACINQZKVSEIWWUQIDOMFJJAHTMXKLCCJGUTNTGIQFHOFNCPXXIADUZCQXWBYEHLFPQRBJMBXCIGMQKMEKTYOXSPRPUJPLNZLEWUWVCYXFSETYXGLHEOKDOVKKEGHZNMRMZ");
    msg.lat = 0.756054896918;
    msg.lon = 0.217315939578;
    msg.z_units = 241U;
    msg.z = 0.143424809186;
    msg.accuracy = 0.914761660755;

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
    msg.setTimeStamp(0.629045461227);
    msg.setSource(37060U);
    msg.setSourceEntity(63U);
    msg.setDestination(4479U);
    msg.setDestinationEntity(201U);
    msg.target.assign("QBFFZYVZMNSKQBVYKMWDZVIHCKBKCNKSHRAVUDFBPTVZQNQTCCGMU");
    msg.lat = 0.0123577192432;
    msg.lon = 0.750894688883;
    msg.z_units = 92U;
    msg.z = 0.858171432871;
    msg.accuracy = 0.710957136087;

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
    msg.setTimeStamp(0.233457522556);
    msg.setSource(22438U);
    msg.setSourceEntity(207U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(32U);
    msg.target.assign("HJSDFTUJQZUYSDATKIFPPRQCJOVEICGHRFNASKSIXYZHXSQLUMWTXMQUACCGKCVFPVLLSHNLBAVOBDESJINYCWERNANWJHYWVSKFAWGNXUTYHEXAHQOMMZIUVRZZLOHXMEDNUHPEOQROYBQCTOIPWLVZDYYGZ");
    msg.lat = 0.550274252263;
    msg.lon = 0.9084694491;
    msg.z_units = 82U;
    msg.z = 0.0706177112645;
    msg.accuracy = 0.189689938102;

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
    msg.setTimeStamp(0.723372287579);
    msg.setSource(40516U);
    msg.setSourceEntity(82U);
    msg.setDestination(34036U);
    msg.setDestinationEntity(120U);
    msg.name.assign("YVWUBZZDILEZXEHWHTMSGTAXHTTMEVDGBBVASZKQKBTQLZJCFWDNVROPHMKGRSEXICOQFGOYRTDIDBYVUFOSBHCLAFTPZXOJRPQOJRQCVTFLPGPDIXVXNKACIVYSXZTCNRCSIJMMNIQPYRDMLSEWEPINKFNKGXLSEUTQBWVOUZCWWZFNKYRDUAEBBAJQOJLFUDCYHYKMYDJQSJLMLFWEJGUPCKIMFMNWYWOA");
    msg.lat = 0.0901075662379;
    msg.lon = 0.273458011698;
    msg.z = 0.808831070589;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.529711763153);
    msg.setSource(15514U);
    msg.setSourceEntity(251U);
    msg.setDestination(36359U);
    msg.setDestinationEntity(35U);
    msg.name.assign("UQVNOAQYOWSMMYKLNVRAJXFLVXPGFMRMSTDPSUNIZWJGBYENPQYEUDXKMYFFLSNJRPWCRYQKGBZEOEVRWIKBSBICNHDSZBTHHPMCALEDLPTXHHCJCVGHPZSZJOMUOEWFVBAOWRPOEVKOZJRGBKCI");
    msg.lat = 0.381994690817;
    msg.lon = 0.658147463694;
    msg.z = 0.0223722262132;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.0317115959109);
    msg.setSource(1711U);
    msg.setSourceEntity(201U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(206U);
    msg.name.assign("PKORDRVVZXCUOLMZAPYLSNDVTRWCWQEWJJEQZFFUQIJVSMBKYAXZDYFVDCQOEKJQMDXASQXEHIXLYZHUFMCYXTIU");
    msg.lat = 0.0371759978199;
    msg.lon = 0.380043422157;
    msg.z = 0.132164451188;
    msg.z_units = 230U;

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
    msg.setTimeStamp(0.561301730699);
    msg.setSource(56604U);
    msg.setSourceEntity(6U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(215U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.536768136407);
    msg.setSource(22570U);
    msg.setSourceEntity(172U);
    msg.setDestination(6755U);
    msg.setDestinationEntity(149U);
    msg.op = 223U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZIWBYFJGZQMGNACOCTWRRBEZZSFWZCWJFNCTRAIQAFMOWYBUUAOPHYHEKUJQGBICSFLTLYKITSUMPIXHTKHPXSSFWYFAHXUZRJQUAVZSYED");
    tmp_msg_0.lat = 0.949164754315;
    tmp_msg_0.lon = 0.373055962447;
    tmp_msg_0.z = 0.178762902832;
    tmp_msg_0.z_units = 247U;
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
    msg.setTimeStamp(0.508260042573);
    msg.setSource(37343U);
    msg.setSourceEntity(24U);
    msg.setDestination(61214U);
    msg.setDestinationEntity(14U);
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
    msg.setTimeStamp(0.709986354271);
    msg.setSource(17053U);
    msg.setSourceEntity(120U);
    msg.setDestination(14618U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0937396405263;
    msg.type = 9U;

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
    msg.setTimeStamp(0.483965857314);
    msg.setSource(41121U);
    msg.setSourceEntity(193U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(240U);
    msg.value = 0.720209159478;
    msg.type = 87U;

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
    msg.setTimeStamp(0.143555526083);
    msg.setSource(256U);
    msg.setSourceEntity(216U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(164U);
    msg.value = 0.509620043049;
    msg.type = 125U;

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
    msg.setTimeStamp(0.116999448272);
    msg.setSource(7875U);
    msg.setSourceEntity(144U);
    msg.setDestination(13169U);
    msg.setDestinationEntity(41U);
    msg.value = 0.794955805136;

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
    msg.setTimeStamp(0.399146939347);
    msg.setSource(2219U);
    msg.setSourceEntity(228U);
    msg.setDestination(14060U);
    msg.setDestinationEntity(167U);
    msg.value = 0.357692642903;

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
    msg.setTimeStamp(0.492167860624);
    msg.setSource(37719U);
    msg.setSourceEntity(10U);
    msg.setDestination(10354U);
    msg.setDestinationEntity(42U);
    msg.value = 0.60467361336;

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
    msg.setTimeStamp(0.883734083405);
    msg.setSource(42323U);
    msg.setSourceEntity(146U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(251U);
    msg.timestamp_last_service = 0.343053731926;
    msg.time_next_service = 0.563333125133;
    msg.time_motor_next_service = 0.882289415353;
    msg.time_idle_ground = 0.608820525729;
    msg.time_idle_air = 0.430424564837;
    msg.time_idle_water = 0.0532021685932;
    msg.time_idle_underwater = 0.808146284901;
    msg.time_idle_unknown = 0.726530339744;
    msg.time_motor_ground = 0.147947229902;
    msg.time_motor_air = 0.0979148633247;
    msg.time_motor_water = 0.897583823713;
    msg.time_motor_underwater = 0.127944550586;
    msg.time_motor_unknown = 0.11451025797;
    msg.rpm_min = 20318;
    msg.rpm_max = -21442;
    msg.depth_max = 0.816407584251;

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
    msg.setTimeStamp(0.48563734273);
    msg.setSource(38008U);
    msg.setSourceEntity(200U);
    msg.setDestination(32212U);
    msg.setDestinationEntity(18U);
    msg.timestamp_last_service = 0.303722097165;
    msg.time_next_service = 0.457468327047;
    msg.time_motor_next_service = 0.542502898665;
    msg.time_idle_ground = 0.199660988747;
    msg.time_idle_air = 0.974643440473;
    msg.time_idle_water = 0.779285590635;
    msg.time_idle_underwater = 0.346576961284;
    msg.time_idle_unknown = 0.00570212631161;
    msg.time_motor_ground = 0.330634129123;
    msg.time_motor_air = 0.920090653229;
    msg.time_motor_water = 0.0979305996999;
    msg.time_motor_underwater = 0.414881743101;
    msg.time_motor_unknown = 0.262570125063;
    msg.rpm_min = 12358;
    msg.rpm_max = -28513;
    msg.depth_max = 0.0235023854253;

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
    msg.setTimeStamp(0.490195298672);
    msg.setSource(26819U);
    msg.setSourceEntity(96U);
    msg.setDestination(45304U);
    msg.setDestinationEntity(38U);
    msg.timestamp_last_service = 0.686286013678;
    msg.time_next_service = 0.734951841331;
    msg.time_motor_next_service = 0.0952021155346;
    msg.time_idle_ground = 0.156416173132;
    msg.time_idle_air = 0.112200854585;
    msg.time_idle_water = 0.037732281277;
    msg.time_idle_underwater = 0.742362461726;
    msg.time_idle_unknown = 0.579468362118;
    msg.time_motor_ground = 0.154220652412;
    msg.time_motor_air = 0.563015795574;
    msg.time_motor_water = 0.332975915086;
    msg.time_motor_underwater = 0.451067049256;
    msg.time_motor_unknown = 0.946778325728;
    msg.rpm_min = -4515;
    msg.rpm_max = -7828;
    msg.depth_max = 0.00233348587106;

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
    msg.setTimeStamp(0.589970879437);
    msg.setSource(22718U);
    msg.setSourceEntity(134U);
    msg.setDestination(5265U);
    msg.setDestinationEntity(126U);
    msg.severity = 152U;
    msg.text.assign("KYVNUWJLWGEBBSEWHYVHRMULTSZJMSYGDQSF");

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
    msg.setTimeStamp(0.136543701457);
    msg.setSource(61822U);
    msg.setSourceEntity(59U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(191U);
    msg.severity = 201U;
    msg.text.assign("CHHIMEBWYWNSPFARAMYQNHNVAEFBWABYGNIWXASZBUXZTGYQYQPDPHCTCHIZJJGSBFGPKVCXDIEZPGIITLMQNPTSGOZYSESQDVICKZQLJDPHQOCEMUOWNLWDNRPMV");

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
    msg.setTimeStamp(0.141469381356);
    msg.setSource(27393U);
    msg.setSourceEntity(145U);
    msg.setDestination(9332U);
    msg.setDestinationEntity(12U);
    msg.severity = 178U;
    msg.text.assign("HDYXDEQBLMREMGYMOKUCRUOEGPYFYEVGQSKOVFIMLREMKCPPNTWLFTCIVIXOFUZXPZUPYQJAGLJIAPINZYHAUBHN");

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
    msg.setTimeStamp(0.167943007429);
    msg.setSource(26031U);
    msg.setSourceEntity(65U);
    msg.setDestination(51415U);
    msg.setDestinationEntity(247U);
    msg.channel = 61;
    msg.value = -821497276;
    msg.gain = 65U;

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
    msg.setTimeStamp(0.0789248228487);
    msg.setSource(42619U);
    msg.setSourceEntity(20U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(156U);
    msg.channel = 35;
    msg.value = 870601617;
    msg.gain = 91U;

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
    msg.setTimeStamp(0.541336612351);
    msg.setSource(44502U);
    msg.setSourceEntity(253U);
    msg.setDestination(8596U);
    msg.setDestinationEntity(35U);
    msg.channel = -101;
    msg.value = -2085726046;
    msg.gain = 199U;

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
    msg.setTimeStamp(0.207952814575);
    msg.setSource(23211U);
    msg.setSourceEntity(39U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(216U);
    msg.ch01 = 0.755076126228;
    msg.ch02 = 0.890130126389;
    msg.ch03 = 0.600412007426;
    msg.ch04 = 0.44818979714;
    msg.ch05 = 0.744427088473;
    msg.ch06 = 0.239944041769;
    msg.ch07 = 0.843652156101;
    msg.ch08 = 0.741659145479;
    msg.ch09 = 0.566659623921;
    msg.ch10 = 0.878736971711;
    msg.ch11 = 0.776195323256;
    msg.ch12 = 0.872501884525;
    msg.ch13 = 0.753406450958;
    msg.ch14 = 0.264888362489;
    msg.ch15 = 0.335541732482;
    msg.ch16 = 0.534284647822;

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
    msg.setTimeStamp(0.823643865068);
    msg.setSource(23043U);
    msg.setSourceEntity(43U);
    msg.setDestination(53551U);
    msg.setDestinationEntity(224U);
    msg.ch01 = 0.603387196404;
    msg.ch02 = 0.669762835344;
    msg.ch03 = 0.533820601684;
    msg.ch04 = 0.222510296185;
    msg.ch05 = 0.194853904826;
    msg.ch06 = 0.675426824565;
    msg.ch07 = 0.213151078151;
    msg.ch08 = 0.273516757328;
    msg.ch09 = 0.365440896139;
    msg.ch10 = 0.021076274265;
    msg.ch11 = 0.247968109576;
    msg.ch12 = 0.747279481684;
    msg.ch13 = 0.944160693107;
    msg.ch14 = 0.391420226844;
    msg.ch15 = 0.699417153182;
    msg.ch16 = 0.473349114681;

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
    msg.setTimeStamp(0.820952668945);
    msg.setSource(63129U);
    msg.setSourceEntity(45U);
    msg.setDestination(20536U);
    msg.setDestinationEntity(28U);
    msg.ch01 = 0.623989211012;
    msg.ch02 = 0.413269324464;
    msg.ch03 = 0.185667977075;
    msg.ch04 = 0.19680118765;
    msg.ch05 = 0.763205220567;
    msg.ch06 = 0.289603323656;
    msg.ch07 = 0.309684437329;
    msg.ch08 = 0.845745264528;
    msg.ch09 = 0.0556159332025;
    msg.ch10 = 0.0621169251345;
    msg.ch11 = 0.720995416934;
    msg.ch12 = 0.0784219870911;
    msg.ch13 = 0.0335297796726;
    msg.ch14 = 0.0934638650831;
    msg.ch15 = 0.0110524673593;
    msg.ch16 = 0.840712103199;

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
    msg.setTimeStamp(0.00532915013517);
    msg.setSource(22537U);
    msg.setSourceEntity(192U);
    msg.setDestination(36989U);
    msg.setDestinationEntity(96U);
    msg.value = 0.395612964067;

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
    msg.setTimeStamp(0.334737585137);
    msg.setSource(21067U);
    msg.setSourceEntity(131U);
    msg.setDestination(32458U);
    msg.setDestinationEntity(104U);
    msg.value = 0.161563491922;

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
    msg.setTimeStamp(0.0703015963803);
    msg.setSource(2844U);
    msg.setSourceEntity(207U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(43U);
    msg.value = 0.302052320682;

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
    IMC::HomePosition msg;
    msg.setTimeStamp(0.602381938207);
    msg.setSource(60054U);
    msg.setSourceEntity(228U);
    msg.setDestination(5426U);
    msg.setDestinationEntity(209U);
    msg.op = 185U;
    msg.lat = 0.671878057587;
    msg.lon = 0.670020182294;
    msg.height = 0.373651614986;
    msg.depth = 0.396577832739;
    msg.alt = 0.223369296095;

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
    msg.setTimeStamp(0.745060154057);
    msg.setSource(46099U);
    msg.setSourceEntity(144U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(93U);
    msg.op = 98U;
    msg.lat = 0.266028270261;
    msg.lon = 0.662514951276;
    msg.height = 0.153586658382;
    msg.depth = 0.634182011221;
    msg.alt = 0.1302656077;

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
    msg.setTimeStamp(0.585967837264);
    msg.setSource(10480U);
    msg.setSourceEntity(186U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(21U);
    msg.op = 166U;
    msg.lat = 0.795608841114;
    msg.lon = 0.0630447600837;
    msg.height = 0.173974590645;
    msg.depth = 0.587817358469;
    msg.alt = 0.400496925068;

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

  return test.getReturnValue();
}
