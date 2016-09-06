//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: efc51e0c6215e7c476d850d0af78ae0f                            *
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
    msg.setTimeStamp(0.9983828313824225);
    msg.setSource(64259U);
    msg.setSourceEntity(251U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(36U);
    msg.state = 117U;
    msg.flags = 159U;
    msg.description.assign("JJDHXAIWSJNPXBOGPMRVSXLUAOJURAQAHIDNCJBL");

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
    msg.setTimeStamp(0.428554277983201);
    msg.setSource(48543U);
    msg.setSourceEntity(146U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(126U);
    msg.state = 93U;
    msg.flags = 28U;
    msg.description.assign("IYRSWUSJRNVHRGKKBGWWUJMPWPA");

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
    msg.setTimeStamp(0.652787442265293);
    msg.setSource(10431U);
    msg.setSourceEntity(139U);
    msg.setDestination(42396U);
    msg.setDestinationEntity(58U);
    msg.state = 157U;
    msg.flags = 28U;
    msg.description.assign("SUKGPKMGFJRVGETQMDRXZUEOGIRBLEEVAOIYMPRNZDTVVDAPNZDMGOXCNRAVMVNGPAPDIHHVLXLLITCCZYVON");

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
    msg.setTimeStamp(0.7142694757018795);
    msg.setSource(28306U);
    msg.setSourceEntity(13U);
    msg.setDestination(18061U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.4705729696293287);
    msg.setSource(59077U);
    msg.setSourceEntity(174U);
    msg.setDestination(38279U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.47005468485561686);
    msg.setSource(39510U);
    msg.setSourceEntity(91U);
    msg.setDestination(2486U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.5107875389840723);
    msg.setSource(12202U);
    msg.setSourceEntity(12U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(92U);
    msg.id = 118U;
    msg.label.assign("JRVBPDEPTDRNOHGBGQNUMOMLSUXCBUXCIIBAAHLNSKGFJBCPVIXWSEOTDGRQHRHYOMRTZSRWZUASQGJZDWUSMAUDT");
    msg.component.assign("XOSBGITNDJGMRKAQVMPFHWAEBULHVVWKHZUJSFNPMCCJQAEBDXOCDDTOSRQRILCKRGYUPITXKPYCVMWKAANDLXOQPLPOWKZHYBFIXWG");
    msg.act_time = 39017U;
    msg.deact_time = 9550U;

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
    msg.setTimeStamp(0.7105903400565511);
    msg.setSource(31992U);
    msg.setSourceEntity(129U);
    msg.setDestination(62270U);
    msg.setDestinationEntity(144U);
    msg.id = 169U;
    msg.label.assign("IOTRHDEJSBUESQQGULXGEXBBNUXCNFKEVHGUWQCMAGGLALBSHPTNVJDSTJTCMBWCTNRXOFYMV");
    msg.component.assign("DMGIQCPUZXDRFALFDPBPEVABHJJKSXUCBIYHDEUQGDHMOVBOLDOKYRXZEREGSVQKPIIBXTLXYZN");
    msg.act_time = 20657U;
    msg.deact_time = 2116U;

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
    msg.setTimeStamp(0.8918104773992294);
    msg.setSource(38871U);
    msg.setSourceEntity(218U);
    msg.setDestination(19810U);
    msg.setDestinationEntity(4U);
    msg.id = 188U;
    msg.label.assign("GUVJCWRPDGBQJARBPUDEESIPMYJWVVHFLBZYF");
    msg.component.assign("VLCFZKDUYNXJXDWBSZEPSKMCTBHEGFYAGTTDMBZPELZCZEQGMDWSIVVZXZELRTKCZNPNRDPDUCNCHMNYMCJDXISIJYNISEPJTOWJATRQRRAHVPAGWEEWYSNWFAVIQLKSWHKAFTQYDKWPLDLCMYFSMIMXQXPQZMLJXLYFRGQHKIDBAOBOLJSUCRQBAOIN");
    msg.act_time = 10432U;
    msg.deact_time = 31109U;

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
    msg.setTimeStamp(0.29210482476680066);
    msg.setSource(31002U);
    msg.setSourceEntity(170U);
    msg.setDestination(19216U);
    msg.setDestinationEntity(173U);
    msg.id = 126U;

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
    msg.setTimeStamp(0.2901797471059543);
    msg.setSource(34991U);
    msg.setSourceEntity(198U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(42U);
    msg.id = 254U;

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
    msg.setTimeStamp(0.637933416641705);
    msg.setSource(23861U);
    msg.setSourceEntity(132U);
    msg.setDestination(9453U);
    msg.setDestinationEntity(59U);
    msg.id = 51U;

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
    msg.setTimeStamp(0.0796231539819896);
    msg.setSource(52772U);
    msg.setSourceEntity(202U);
    msg.setDestination(49311U);
    msg.setDestinationEntity(91U);
    msg.op = 60U;
    msg.list.assign("OSTDWRYWLFVHPEEFZGEZOXVKRDUBGBCKGZWDKLUTUKGITRUDIPGZEAFNNUKPITMUZSFDEXOMXUOXNYMSCTRSVALQQWTLFFHXGTWQUYYCQDRRVBZXVNEMQATRJVXAUVEHJWEWOQSMMSHHLTGVRKJIKBKDDMBNBCLIWZAYLSKHJRWJOPAPFDPYWILNFXJAOSHRCVTCZDQPFXCZQPGHEHHMNVOPCIUAMJLOLJCPIZXGSMBQQCNJIFGBEYOS");

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
    msg.setTimeStamp(0.4247792145891134);
    msg.setSource(30330U);
    msg.setSourceEntity(35U);
    msg.setDestination(11540U);
    msg.setDestinationEntity(93U);
    msg.op = 193U;
    msg.list.assign("HHOVEERZTLZZEXXI");

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
    msg.setTimeStamp(0.6018684442250454);
    msg.setSource(46586U);
    msg.setSourceEntity(218U);
    msg.setDestination(60911U);
    msg.setDestinationEntity(159U);
    msg.op = 19U;
    msg.list.assign("IBWMQPELJXEHGXWFNKYDEKMCDWARTAMRSHVJJBXVTDCOZBCCAHWLKQQXWWLMBWEOVTZDTOZISSINJKUPKRZPGUGTHZQFNXYSUFYMMTJYEQBQPBJDV");

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
    msg.setTimeStamp(0.011321051723189757);
    msg.setSource(44013U);
    msg.setSourceEntity(246U);
    msg.setDestination(59130U);
    msg.setDestinationEntity(229U);
    msg.value = 150U;

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
    msg.setTimeStamp(0.3774474846910001);
    msg.setSource(45574U);
    msg.setSourceEntity(84U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(35U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.9787176547113392);
    msg.setSource(25998U);
    msg.setSourceEntity(195U);
    msg.setDestination(36171U);
    msg.setDestinationEntity(134U);
    msg.value = 228U;

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
    msg.setTimeStamp(0.5302242693215463);
    msg.setSource(33126U);
    msg.setSourceEntity(191U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(192U);
    msg.consumer.assign("ZIQJSEWKIPQKDLUTSTKKLNUPGRMXCJUYOHTMGPZTGRLFLWTOMMDEVTVJYFFIRLOTNQAVETEWYJZICQNOWOOAIKCXJMNPHXDPNSJKRRHQKUAAJRVBMEYTPCVFDFYAOHZFSXNZSXLLHFAWWBHUMQCNEKPPJODNDGWUYKUAJVRSPYMG");
    msg.message_id = 25525U;

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
    msg.setTimeStamp(0.9453274831838255);
    msg.setSource(62913U);
    msg.setSourceEntity(159U);
    msg.setDestination(60069U);
    msg.setDestinationEntity(208U);
    msg.consumer.assign("PLFMQSMLHXEMWBVIKQYCAHWCUNFGXEKMGULFUKVJQKRGYNHASTCEJPEWQQRJMPRVKGJYXBGIRNIIAEBJQDAOJKFOHHUGDCRFWQWXIRPYZOUASYTCIBVZCHOKYDXDTILZOYRBPTAGHJDTSUZENLZVINBLGDINCTKEVRWFTJLVUOULMZWWSVFUPZXVZWPXZREXS");
    msg.message_id = 50174U;

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
    msg.setTimeStamp(0.2110587131258912);
    msg.setSource(64724U);
    msg.setSourceEntity(166U);
    msg.setDestination(27592U);
    msg.setDestinationEntity(137U);
    msg.consumer.assign("GNJVIJPRXPBIEMAUWUSYRFTKWGOVBTNEGQAO");
    msg.message_id = 17553U;

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
    msg.setTimeStamp(0.5662749685859316);
    msg.setSource(52758U);
    msg.setSourceEntity(115U);
    msg.setDestination(15041U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.5039306905243625);
    msg.setSource(59870U);
    msg.setSourceEntity(254U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.7496623420384794);
    msg.setSource(844U);
    msg.setSourceEntity(95U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.5461930716831302);
    msg.setSource(24603U);
    msg.setSourceEntity(136U);
    msg.setDestination(55220U);
    msg.setDestinationEntity(12U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.7917500930461705);
    msg.setSource(12066U);
    msg.setSourceEntity(36U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(74U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.7512304713851554);
    msg.setSource(10203U);
    msg.setSourceEntity(137U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(248U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.3440455450947235);
    msg.setSource(11396U);
    msg.setSourceEntity(118U);
    msg.setDestination(41292U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 23U;
    msg.step_number = 230U;
    msg.step.assign("MBRRCEBPWUDKWJEXGDDLRKAMVLOHFKIOOSUHDCTSUZVMGPHIZPCUNQTNZJPNYIHETIGTTETKUOZGCQYXJDPXPHNHZVJNVSYURAGVVTEHOYAA");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.379773146565084);
    msg.setSource(49081U);
    msg.setSourceEntity(30U);
    msg.setDestination(59703U);
    msg.setDestinationEntity(14U);
    msg.total_steps = 0U;
    msg.step_number = 107U;
    msg.step.assign("MLTNXKXNAILVMHYKZTIYCGPWMRGYIJCYNHNYEBBXRHERDWXZCQFBNTUQCEYCMRPUVMWKPWIHLPILZBVLXGAMDPCFWLISDSYTJNPYD");
    msg.flags = 152U;

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
    msg.setTimeStamp(0.9753636476728257);
    msg.setSource(53808U);
    msg.setSourceEntity(233U);
    msg.setDestination(30747U);
    msg.setDestinationEntity(147U);
    msg.total_steps = 199U;
    msg.step_number = 139U;
    msg.step.assign("VGKBRZIBCVKDJTOWOETHQVZUKTZARSANMEPZNTDILRUIZMMUMQGJQEWYHILSUXGYUVYRNUMVGDRHXQKGHCBBXAGCSMVHTWSOPEGILWLJKYLBINXPLFBLPTLDNXWNYYKZIAPFXSDMFFMCRTRSAVEFKVDWJJHFDAYJYDAACKQOSQOWQCXMBVBCHLPGOTEJCRSEERKQNHQEZSUWUNGYTH");
    msg.flags = 157U;

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
    msg.setTimeStamp(0.6770669695482853);
    msg.setSource(31058U);
    msg.setSourceEntity(183U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(41U);
    msg.state = 80U;
    msg.error.assign("BJULVKPYSKGSSDHTOHEEUCNWLUKFZCHUAZFCWVKTHLKCXNSBCJJNSQAJFIMFZGUFRIMTGKAIIURYYTWEHPEAQQWMVQRXVUWYVHCAVSIYWDBZDGOGOOZAEYSAXDVIFYJTQUGJELAKZIKNWTMXDJDQMTFRMIYJPZ");

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
    msg.setTimeStamp(0.613373361113095);
    msg.setSource(39758U);
    msg.setSourceEntity(188U);
    msg.setDestination(62958U);
    msg.setDestinationEntity(64U);
    msg.state = 154U;
    msg.error.assign("XMRBWRRRHMEADQFVFJCPLZQMSXHLECJNXVTQILLHCQCJYHIZDEOLKSGRTUMEWVYW");

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
    msg.setTimeStamp(0.3459681265264405);
    msg.setSource(61760U);
    msg.setSourceEntity(165U);
    msg.setDestination(34385U);
    msg.setDestinationEntity(106U);
    msg.state = 104U;
    msg.error.assign("YIDTUQFXOMJVGOCYWPFMGTNKYALLJELEWEBNNYHJDOFRCBLWDICUIOSFOHVISQFQQEMZJGPRUDWZVTWCVYAEAMNPOBIMZPTXJDTUGWFCSTSALAPVDHUAAFYKKDISB");

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
    msg.setTimeStamp(0.20460633828445463);
    msg.setSource(53060U);
    msg.setSourceEntity(57U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.5930596390604842);
    msg.setSource(57440U);
    msg.setSourceEntity(103U);
    msg.setDestination(51208U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.6078549879085502);
    msg.setSource(37112U);
    msg.setSourceEntity(186U);
    msg.setDestination(8164U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.913787848726066);
    msg.setSource(48347U);
    msg.setSourceEntity(17U);
    msg.setDestination(62729U);
    msg.setDestinationEntity(224U);
    msg.op = 64U;
    msg.speed_min = 0.9811330523603339;
    msg.speed_max = 0.77527449107083;
    msg.long_accel = 0.48596275651478194;
    msg.alt_max_msl = 0.2947696021276257;
    msg.dive_fraction_max = 0.7503253348494908;
    msg.climb_fraction_max = 0.2151249546631746;
    msg.bank_max = 0.7326972107368525;
    msg.p_max = 0.28118359577975804;
    msg.pitch_min = 0.3881872694118408;
    msg.pitch_max = 0.5072860418326259;
    msg.q_max = 0.1757063333684935;
    msg.g_min = 0.8409786104243702;
    msg.g_max = 0.44814882982069615;
    msg.g_lat_max = 0.6802062213600721;
    msg.rpm_min = 0.7281639475879128;
    msg.rpm_max = 0.4102821995426843;
    msg.rpm_rate_max = 0.5247183103839016;

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
    msg.setTimeStamp(0.015342566087281906);
    msg.setSource(33522U);
    msg.setSourceEntity(88U);
    msg.setDestination(853U);
    msg.setDestinationEntity(210U);
    msg.op = 125U;
    msg.speed_min = 0.9515557548454459;
    msg.speed_max = 0.5962807865077282;
    msg.long_accel = 0.36290668037530216;
    msg.alt_max_msl = 0.03245029367059726;
    msg.dive_fraction_max = 0.2735283445112573;
    msg.climb_fraction_max = 0.7334751871638492;
    msg.bank_max = 0.22508806272894222;
    msg.p_max = 0.8679157508265806;
    msg.pitch_min = 0.3772133576626624;
    msg.pitch_max = 0.10988350429264271;
    msg.q_max = 0.46135740377109724;
    msg.g_min = 0.023188492898927993;
    msg.g_max = 0.44228224552058126;
    msg.g_lat_max = 0.6286102325321902;
    msg.rpm_min = 0.5972830609260926;
    msg.rpm_max = 0.338208180461698;
    msg.rpm_rate_max = 0.3226425171040378;

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
    msg.setTimeStamp(0.8192846113199321);
    msg.setSource(54828U);
    msg.setSourceEntity(27U);
    msg.setDestination(51528U);
    msg.setDestinationEntity(26U);
    msg.op = 7U;
    msg.speed_min = 0.15103408561294185;
    msg.speed_max = 0.12264948418584598;
    msg.long_accel = 0.7910746571503587;
    msg.alt_max_msl = 0.017144417059884343;
    msg.dive_fraction_max = 0.8426447845986492;
    msg.climb_fraction_max = 0.7016945352441593;
    msg.bank_max = 0.3059680928373191;
    msg.p_max = 0.1553992959672078;
    msg.pitch_min = 0.4650114152351874;
    msg.pitch_max = 0.6359765532260767;
    msg.q_max = 0.5460105946525443;
    msg.g_min = 0.9906297408357913;
    msg.g_max = 0.1696288872732532;
    msg.g_lat_max = 0.16047117248659137;
    msg.rpm_min = 0.899550919832695;
    msg.rpm_max = 0.09710759819682413;
    msg.rpm_rate_max = 0.1341675965941186;

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
    msg.setTimeStamp(0.18240858779239144);
    msg.setSource(4915U);
    msg.setSourceEntity(194U);
    msg.setDestination(51265U);
    msg.setDestinationEntity(7U);
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 172U;
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
    msg.setTimeStamp(0.9858045007370132);
    msg.setSource(19347U);
    msg.setSourceEntity(168U);
    msg.setDestination(19545U);
    msg.setDestinationEntity(160U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.6206649192832724;
    tmp_msg_0.y = 0.34111865981571465;
    tmp_msg_0.z = 0.8263944638196056;
    tmp_msg_0.vx = 0.4120275764291955;
    tmp_msg_0.vy = 0.3055171247990809;
    tmp_msg_0.vz = 0.08310884221004589;
    tmp_msg_0.ax = 0.17199282080516887;
    tmp_msg_0.ay = 0.35398106454085954;
    tmp_msg_0.az = 0.23390153094943422;
    tmp_msg_0.flags = 53109U;
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
    msg.setTimeStamp(0.7601378675436822);
    msg.setSource(38765U);
    msg.setSourceEntity(107U);
    msg.setDestination(36818U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.4344791655357586);
    msg.setSource(6820U);
    msg.setSourceEntity(85U);
    msg.setDestination(1142U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.9225884824150588;
    msg.lon = 0.6316653245406821;
    msg.height = 0.7986325185028986;
    msg.x = 0.9440969355467462;
    msg.y = 0.23042565492404765;
    msg.z = 0.7382430556819162;
    msg.phi = 0.6697458070125304;
    msg.theta = 0.7647186182748371;
    msg.psi = 0.9744535890784747;
    msg.u = 0.17375305504583616;
    msg.v = 0.07902953804109258;
    msg.w = 0.2673702625839315;
    msg.p = 0.9305248880668607;
    msg.q = 0.8696298123803728;
    msg.r = 0.960381353535972;
    msg.svx = 0.7547597211124324;
    msg.svy = 0.5883019855496879;
    msg.svz = 0.6733056765180888;

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
    msg.setTimeStamp(0.9779801476040201);
    msg.setSource(63095U);
    msg.setSourceEntity(38U);
    msg.setDestination(25776U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.21329131433167736;
    msg.lon = 0.9361160258529743;
    msg.height = 0.32887788413296937;
    msg.x = 0.5060149964044137;
    msg.y = 0.6124723211871236;
    msg.z = 0.319899089600418;
    msg.phi = 0.5928381297968959;
    msg.theta = 0.01850827885771056;
    msg.psi = 0.5061133771551879;
    msg.u = 0.06275808328904486;
    msg.v = 0.4970953900272078;
    msg.w = 0.16345698024372368;
    msg.p = 0.5109243925460354;
    msg.q = 0.5597258940769524;
    msg.r = 0.7347703836500711;
    msg.svx = 0.7493882654792208;
    msg.svy = 0.003819855507530945;
    msg.svz = 0.940297298133257;

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
    msg.setTimeStamp(0.8889580685646662);
    msg.setSource(37895U);
    msg.setSourceEntity(55U);
    msg.setDestination(17669U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.6654809987636078;
    msg.lon = 0.589251392266092;
    msg.height = 0.8306132425291461;
    msg.x = 0.53920939055814;
    msg.y = 0.6380024935705674;
    msg.z = 0.5070802913606411;
    msg.phi = 0.42895243740145506;
    msg.theta = 0.35272351314591366;
    msg.psi = 0.052452811356214935;
    msg.u = 0.055961414620481986;
    msg.v = 0.19293690469318237;
    msg.w = 0.005934567757227005;
    msg.p = 0.5656086359671941;
    msg.q = 0.31709536537095373;
    msg.r = 0.02042480745153452;
    msg.svx = 0.6294980396748784;
    msg.svy = 0.17202813770629977;
    msg.svz = 0.1254836713031411;

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
    msg.setTimeStamp(0.977245537241619);
    msg.setSource(15363U);
    msg.setSourceEntity(208U);
    msg.setDestination(6550U);
    msg.setDestinationEntity(211U);
    msg.op = 40U;
    msg.entities.assign("BDCVQTOLMRQWZFPHONWDAESLJMWGDNECSTFCISZHEFSFXVOVNBKJXL");

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
    msg.setTimeStamp(0.4479231706715965);
    msg.setSource(14621U);
    msg.setSourceEntity(47U);
    msg.setDestination(3107U);
    msg.setDestinationEntity(12U);
    msg.op = 103U;
    msg.entities.assign("CSMCTMKWGPXWACNBDXRPMKOGQEMXTQCENOCCARTZDIZWRHQWKDBSTUWLFTHHLKNNUDGQAOGYO");

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
    msg.setTimeStamp(0.24991304760530386);
    msg.setSource(30350U);
    msg.setSourceEntity(78U);
    msg.setDestination(58441U);
    msg.setDestinationEntity(236U);
    msg.op = 102U;
    msg.entities.assign("MPZKBAFGQECORAJRLJVCIBPTQNTJDCZMTNOMQKJFBLVUJDTGKNLSIVDWYYXRAFYGVPMCWIAEUEDISMSSGAYAXLJEVYWOMEYPBSWARJZQNXZNZKUTYIFLGXOZWOXYKHPSCRVNVSKIGRAEUQZOEFIRWCHQWMLKLNCBUHBBZRSGSDBDCZUTIILHDPLJDVAUJPWKHLQXYKV");

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
    msg.setTimeStamp(0.3083347492042673);
    msg.setSource(16668U);
    msg.setSourceEntity(5U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(176U);
    msg.type = 142U;
    msg.speed = 14364U;
    const char tmp_msg_0[] = {24, 21, -77, -34, 42, 71, -83, -35, -85, -19, 2, -123, 39, -37, 13, 81, 55, 101, 48, 96, 25, 107, -127, -7, 15, 95, -1, -91, 42, -85, -43, 88, -7, -62, 32, -107, 2, -6, -45, -75, -29, -15, -66, -55, -33, 11, -100, 94, -125, 93, 53, -31, 78, 59, 30, -101, 79, -21, -106, 71, 29, 50, 112, -21, 73, 9, -41, 25, 28, 39, -128, 62, 32, 76, 51, 67, 2, -66, 64, -43, -31, -11, 100, 70, -57, 92, 106, 41, -64, 23, 14, 43, 68, 2, -112, 93, -53, 58, 86, 114, 90, 113, -46, -121, -79, -45, -47, 24, 27, 1, 57, 1, -99, -93, -13, -79, -117, 69, 38, -29, -51, 51, -98, 117, -17, 27, 33, 23, 77, 14, -8, 7, -87, 54, -86, 16, 45, -116, 44, -45, -124, -69, 100, 97, -18, 102, -24, 5, -51, -96, -73, 110, 55, -50, -15, -121, 91, 15, -24, 71, -68, -16, 121, 71, 74, -85, -43, -40, 56, -81, -99, 122, -128, 91, -118, 122, -36, -11, -20, -40, -1, -54, -96, -113, 67};
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
    msg.setTimeStamp(0.1678219272004733);
    msg.setSource(20909U);
    msg.setSourceEntity(78U);
    msg.setDestination(16883U);
    msg.setDestinationEntity(220U);
    msg.type = 233U;
    msg.speed = 3404U;
    const char tmp_msg_0[] = {71, -18, -27, -42, 1, 79, -48, -52, 51, -104, -58, 3, 45, -49, 92, -31, 111, 101, -3};
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
    msg.setTimeStamp(0.7153815252532417);
    msg.setSource(5185U);
    msg.setSourceEntity(158U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(104U);
    msg.type = 128U;
    msg.speed = 30157U;
    const char tmp_msg_0[] = {-10, 45, -75, -25, -47, 72, -118, 11, -91, 81, 111, 117, 67, 83, 41, 63, -72, -55, -118, 32, 101, -48, 53, -94, -31, -19, 43, 68, -50, -15, 108, -61, 77, -81, 124, 122, 106, -18, 61, -36, 113, 100, 41, 62, 2, 33, 56, 14, 49, 35, 84, -90, -69, -51, -11, -33, -65, -116, -19, -60, -58, -128, 105, 22, -52, -22, -79, -65, 32, 55, -91, 101, 48, 79, 95, 84, 87, 33, -34, 37, 89, -34, 4, 5, 0, -70, -63, -69, 37, 27, -74, 66, -56, 108, 91, -55, 82, 113, -78, 62, 103, -95, -54, -76, -95, 70, -29, 114, 83, 69, 102, 97, 47, 44, 113, -56, -75, 126, 25, -28, -51, -69, -110, 14, -69, 44, 118, 115, 17, -105, -31, -7, 67, 28, 38, -10, -3, 26, 81, -26, -59, 69, 113, 76, 125, -91, 100, 107, 61, -42, 24, 26};
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
    msg.setTimeStamp(0.6299915307159577);
    msg.setSource(63587U);
    msg.setSourceEntity(197U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(53U);
    msg.op = 150U;
    msg.tas2acc_pgain = 0.19025814635551908;
    msg.bank2p_pgain = 0.9514285411064948;

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
    msg.setTimeStamp(0.9148352082855712);
    msg.setSource(16775U);
    msg.setSourceEntity(110U);
    msg.setDestination(16430U);
    msg.setDestinationEntity(152U);
    msg.op = 196U;
    msg.tas2acc_pgain = 0.7931692661648605;
    msg.bank2p_pgain = 0.8635121264431023;

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
    msg.setTimeStamp(0.7702453580700858);
    msg.setSource(49540U);
    msg.setSourceEntity(97U);
    msg.setDestination(15536U);
    msg.setDestinationEntity(28U);
    msg.op = 219U;
    msg.tas2acc_pgain = 0.5138171315776149;
    msg.bank2p_pgain = 0.12409688034261557;

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
    msg.setTimeStamp(0.5873730313265452);
    msg.setSource(37514U);
    msg.setSourceEntity(80U);
    msg.setDestination(36836U);
    msg.setDestinationEntity(9U);
    msg.available = 2956506268U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.19848335892216495);
    msg.setSource(15349U);
    msg.setSourceEntity(128U);
    msg.setDestination(29487U);
    msg.setDestinationEntity(184U);
    msg.available = 725887355U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.9360304128913942);
    msg.setSource(61767U);
    msg.setSourceEntity(41U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(185U);
    msg.available = 70777417U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.6833732077311393);
    msg.setSource(55816U);
    msg.setSourceEntity(188U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(40U);
    msg.op = 14U;
    msg.snapshot.assign("WOAMFTASRZUHVLBQELAEGBPAIZDGWIPDWYCNRXMOUKNHLNPOKKCOVISWUOPOTYXRFTXMHBNTGGREPKWKRTBEEJDCHDCWSEEHEGOZUYJVJCYTQUGIZYCFMBGJTHFSVNNUPLRRUSDLEKHVQFPNLKJHPTQIXVHEKCQTXUJIVRZJSAWPBFIBSYGZA");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.26988355985847867;
    tmp_msg_0.speed = 0.87048887526726;
    tmp_msg_0.turbulence = 0.2963251621255083;
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
    msg.setTimeStamp(0.3096321477220644);
    msg.setSource(56506U);
    msg.setSourceEntity(82U);
    msg.setDestination(11547U);
    msg.setDestinationEntity(137U);
    msg.op = 28U;
    msg.snapshot.assign("GQEXNYCIEAXHBBNOUPVQRFOYYZIFWSNYKDPFVIBNOPMVITCIJZMJHLWZSQTSWJXKEWPZGJTPUTYINIMSCDGZJBQYGBPYHUJOCDYTDXTCBGUPKHFCXZFNURLXXHSZF");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 85U;
    tmp_msg_0.value = 0.1820104702206342;
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
    msg.setTimeStamp(0.9688469774339356);
    msg.setSource(27953U);
    msg.setSourceEntity(42U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(18U);
    msg.op = 239U;
    msg.snapshot.assign("VCTYBZXIXHLYVUZGJMYSQIPOKGFOAYMFL");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 97U;
    tmp_msg_0.entities.assign("ZYSODZUNPOQLCXFAZPPDRXXVTBXGCMIJJALKMEMEZADAENIYZIDHYQVRUW");
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
    msg.setTimeStamp(0.8321895780897282);
    msg.setSource(54653U);
    msg.setSourceEntity(32U);
    msg.setDestination(37267U);
    msg.setDestinationEntity(160U);
    msg.op = 165U;
    msg.name.assign("FQOTFGNXIMWSAUFCYNDHUHGBINSKDHNMTLQQPZTRHEIYTEQEAFLLPDBSEPOGOVMBOBSZESXXGXVUSGPYYVVCIDTVDKTFYIKHOXXKJWOFWAJSHJFQAANJURCUKZSNNKUDPJIJBNJGOCOQWPZ");

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
    msg.setTimeStamp(0.3406889293025678);
    msg.setSource(64758U);
    msg.setSourceEntity(94U);
    msg.setDestination(56756U);
    msg.setDestinationEntity(42U);
    msg.op = 70U;
    msg.name.assign("OUCXIIAFHMVWNAIXJKRFMZUQTXKHAWWSRDCQNCSSVLWLQFLGVXAQTBLAUCOVKNODKKBQPNDJHWVECHUYPNIMBFPZAC");

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
    msg.setTimeStamp(0.4530102760193564);
    msg.setSource(12554U);
    msg.setSourceEntity(5U);
    msg.setDestination(44530U);
    msg.setDestinationEntity(250U);
    msg.op = 187U;
    msg.name.assign("LQVMDDLVHRSGAUUIYPBWIKAGRXLMSSLBJHAOINGJPVYGIOTPKKYOAOYJBZUFXWQXOXNUIJCSPZMGZKLMAUGQRDDNVVBKYZWTHTYQYFNHJMZUJETZWJMZRCCDWVUCPFVCCXNTZDFSFUFLTDBUYNKOPOIEUZESALOWLBLEQLNXRPETSOJEPJMQICKHOIHGMFASKDDKFSACAQQTXXXVAEWBWRSFJCYRCXEHTBBGQPGMVBQTWHHRNRDYEVZEWRINN");

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
    msg.setTimeStamp(0.42523379634581093);
    msg.setSource(8936U);
    msg.setSourceEntity(52U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(218U);
    msg.type = 168U;
    msg.htime = 0.06296717361534254;
    msg.context.assign("YERGGOILUHTLGFCLBZFSVNRKOAHKSIZSEQMIHXMOLSVNQBEBGQBZYPCWDUADXUCNDTKZMFBDCRSEGOOVPFYJBKAXINDWPNKDDRVCKLGLECOPSXIPQYAZOLZHSTEDVYFBJHKGMQTPCZYKIXWDJPFVYPUNYFHWBEHJRDVUPMWSEKNFRHVQEASZWWIRIJXNLFSVTACMQUQPAIVA");
    msg.text.assign("HYUPKBSUIEDQKBQJQXVXDZBITYCYBMZRZKNNPCJIMZDRMFRYMXAPIMNCFRJJTXIDNJHWLLATHFLYWFTFQTNHUGGXWDBUERJXQQJKSVDXFNGOFTWIFLTOXVAQZGSDXNZPTEKHOOCPU");

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
    msg.setTimeStamp(0.22783361756360887);
    msg.setSource(47949U);
    msg.setSourceEntity(143U);
    msg.setDestination(54528U);
    msg.setDestinationEntity(244U);
    msg.type = 200U;
    msg.htime = 0.6240827988656658;
    msg.context.assign("CEMTOLYKYWYYUZVNAJPXHFOVMSJIJOAGQKDHEDLGXKCVLKOTBYUJPGDPZGDBZRJBFEOFVTSBNSLLWTECBUNZEFLIHFPQKMMWMUISIURZYTPZSSVDJPNFUUGKNCBDGCGFQABQHTSWQRC");
    msg.text.assign("KWAXZTDIWSOPCYXETOOFZFLDHEGNMWXHFTZJORLDJRJIAZILZFIAFVRLLDQNFVHHYDGKVUHGJNXMTASKGQXCOYUSUJKXMFKFQENEUBTSYWFIXLDAROZPAVGAEIJSTJGBBHH");

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
    msg.setTimeStamp(0.11447609166145956);
    msg.setSource(47645U);
    msg.setSourceEntity(207U);
    msg.setDestination(22739U);
    msg.setDestinationEntity(116U);
    msg.type = 131U;
    msg.htime = 0.394610516510459;
    msg.context.assign("JPWEWOXRQZLMEFTSFTQBOYQFRKAMOSESMVVAFBGZWWZCIZZVVKGTZNIHHRZFZNDKLWTQXIORGNYSGOLEWCRBNKUCAPSBGLCDVWJJLHFPMHKDUIIDAVUYTNTSWPB");
    msg.text.assign("JTKOTFOBSMROXQDBUPAUEIDSBSLKYHCKADXDOEWMUEYIZGFIYLPMNSZYUBQMFCAFQFWIXJCORJIRSYJQOICNJCJJOJXFSVIYFOGCZCFZENADTQZTPEBQGLOZTUFOXDRRUEHRCXNCHLQULRAVLUYLQNYPHBNNSVFPRNKZDXIVCAKWLSGNQGKMDWGHJDWHPEKTAMKLWLVZPHASVJBNKZUAXPATMGHBQTYXW");

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
    msg.setTimeStamp(0.8870650465555318);
    msg.setSource(31653U);
    msg.setSourceEntity(96U);
    msg.setDestination(7253U);
    msg.setDestinationEntity(108U);
    msg.command = 253U;
    msg.htime = 0.01244031120489364;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 191U;
    tmp_msg_0.htime = 0.3565506986649096;
    tmp_msg_0.context.assign("YOBZPSUZGLXDYTCNZHGQZNPBLWRDJCBGFJYSXJIOAFSUAXTVWUTKQOHRSIJWPXWGNUBQAAHNRYSSTUPZBDNPUCBIFAJHYHDXCHIEFXVYIFHQYZWVOMPPJVLVHKKERMZWALDFRN");
    tmp_msg_0.text.assign("PGAWLUQUXYHUSQVTREGBKXDZORRIPBEFLEVSJOSBVHDGPJNFXLSAAGCZPJILPORETFQWPUWTIXGB");
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
    msg.setTimeStamp(0.9858090094873196);
    msg.setSource(54135U);
    msg.setSourceEntity(47U);
    msg.setDestination(39940U);
    msg.setDestinationEntity(244U);
    msg.command = 43U;
    msg.htime = 0.5528436227000205;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 231U;
    tmp_msg_0.htime = 0.6425033380597052;
    tmp_msg_0.context.assign("ZQDNIHMLSEVMLKBVXGXCLOJTATAGLZBDVQMFJHFUEKUHMUUYIQPQBNSUTOLBPQXMLQXARYHSENWHPKRVJ");
    tmp_msg_0.text.assign("ZNMWVQCRXVUGBEXYJZPDCAHQFPSKSRMJULAFCYGYNPFRSBRQIJJGLVWGBVEIYFAOWIJYTOQNNDOQKWRMYXKHAZVCHLQHDBCZIXHRN");
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
    msg.setTimeStamp(0.4431176982114018);
    msg.setSource(29012U);
    msg.setSourceEntity(112U);
    msg.setDestination(21581U);
    msg.setDestinationEntity(73U);
    msg.command = 155U;
    msg.htime = 0.46059015634502387;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 117U;
    tmp_msg_0.htime = 0.5829963162163987;
    tmp_msg_0.context.assign("DHGJLNIVOAUDAXOTQXBDSSKSWAKSCDMFEBCGPLHVQRZYMFIZTJVMHLBIFSYGKLXBENLIEWQMTFRHIXYQQRSXWNEGTKUJAVXFJ");
    tmp_msg_0.text.assign("YJMTZNNEFBXNNFKVOPBIFFLALCKBFJIBLMCZCMMQTOGCIRJCVIAMQEAPAKZUMRRHLBDJJSXCXVSOQQPUQVYMGOZPMERWORDFWOZDKOUEXKUAENEGXZAPWHVCUYNXUGWRTFVHGAVXADUHJWWETYPHJPNIGDWCPQHUOMILZHGNG");
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
    msg.setTimeStamp(0.44137775750635855);
    msg.setSource(55304U);
    msg.setSourceEntity(64U);
    msg.setDestination(33827U);
    msg.setDestinationEntity(172U);
    msg.op = 93U;
    msg.file.assign("GTKGSCUDUBDPOTQNFFJVRAVSPVNOOCPYQNABYDTJLEVUTYTLENIMMLRRUXIOSPZQPGZYGJQYKVSDGXCOEWFHXEKYMVMYWYJNGSPASFTDFUQFXHZWXSTLNITRTJBPPSIXFDIQZKGZBURKUNIMWKCFDIGDBRRIDKAQBVJAEQHHZAK");

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
    msg.setTimeStamp(0.22000819070471622);
    msg.setSource(58013U);
    msg.setSourceEntity(92U);
    msg.setDestination(14167U);
    msg.setDestinationEntity(205U);
    msg.op = 53U;
    msg.file.assign("VYBAFLSABTSBAPVWWCAMIJHXPMGFDYRNMRXRHNVUUTPKSQKYBZZPXTQIUHMAZIZWELEYNTZUILWTTJPCFFNRSRQWISGGX");

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
    msg.setTimeStamp(0.2386427491177776);
    msg.setSource(8817U);
    msg.setSourceEntity(132U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(3U);
    msg.op = 70U;
    msg.file.assign("VXLBIWMICSWOTZFFLUZLRVDUF");

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
    msg.setTimeStamp(0.7100762512314321);
    msg.setSource(60309U);
    msg.setSourceEntity(195U);
    msg.setDestination(61462U);
    msg.setDestinationEntity(76U);
    msg.op = 89U;
    msg.clock = 0.08261829690653077;
    msg.tz = -18;

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
    msg.setTimeStamp(0.19680409998044535);
    msg.setSource(44641U);
    msg.setSourceEntity(222U);
    msg.setDestination(46145U);
    msg.setDestinationEntity(213U);
    msg.op = 230U;
    msg.clock = 0.5637110445369539;
    msg.tz = 100;

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
    msg.setTimeStamp(0.17773877970317586);
    msg.setSource(54045U);
    msg.setSourceEntity(58U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(36U);
    msg.op = 84U;
    msg.clock = 0.32426635236482326;
    msg.tz = -88;

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
    msg.setTimeStamp(0.5142541629021166);
    msg.setSource(41726U);
    msg.setSourceEntity(40U);
    msg.setDestination(41267U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.27205526374348465;
    msg.temperature = 0.5697862507753446;
    msg.depth = 0.9999700342842942;

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
    msg.setTimeStamp(0.2543256907134944);
    msg.setSource(43577U);
    msg.setSourceEntity(0U);
    msg.setDestination(50485U);
    msg.setDestinationEntity(75U);
    msg.conductivity = 0.9024204039365563;
    msg.temperature = 0.7742481053562326;
    msg.depth = 0.9655321795493526;

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
    msg.setTimeStamp(0.25862060314381585);
    msg.setSource(62437U);
    msg.setSourceEntity(224U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(137U);
    msg.conductivity = 0.038779005167955516;
    msg.temperature = 0.36386948483050463;
    msg.depth = 0.21141553293309356;

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
    msg.setTimeStamp(0.3169463888447821);
    msg.setSource(53759U);
    msg.setSourceEntity(156U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(137U);
    msg.altitude = 0.9080814806005135;
    msg.roll = 53364U;
    msg.pitch = 22020U;
    msg.yaw = 25462U;
    msg.speed = -26847;

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
    msg.setTimeStamp(0.2518736414877921);
    msg.setSource(53520U);
    msg.setSourceEntity(202U);
    msg.setDestination(65499U);
    msg.setDestinationEntity(104U);
    msg.altitude = 0.5021101022739395;
    msg.roll = 58339U;
    msg.pitch = 4324U;
    msg.yaw = 8942U;
    msg.speed = -7996;

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
    msg.setTimeStamp(0.07706769816064318);
    msg.setSource(43460U);
    msg.setSourceEntity(143U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(123U);
    msg.altitude = 0.9192205871586999;
    msg.roll = 64913U;
    msg.pitch = 11049U;
    msg.yaw = 41901U;
    msg.speed = -6687;

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
    msg.setTimeStamp(0.9429115533300364);
    msg.setSource(54372U);
    msg.setSourceEntity(129U);
    msg.setDestination(24825U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.7993053949603574;
    msg.width = 0.8958723118936824;
    msg.length = 0.9650392067015431;
    msg.bearing = 0.2856433675563007;
    msg.pxl = -32176;
    msg.encoding = 207U;
    const char tmp_msg_0[] = {37, 34, -3, 81, -74, 123, 14, 25, -77, -34, 45, 44, 37, -20, 26, 124, -13, 7, 58, 11, 113, 76, 83, 120, 104, 97, 15, -34, 55, -41, -35, -87, 123, 102, 76, 93, 4, -68, -87, -116, 15, -69, 116, 75, 77, -7, -3, -86, 40, -110, 103, 104, -51, -61, 59, -87, 108, 46, -73, 80, 25, 114, -16, 87, 106, 34, 50, 109, -82, 83, 10, 18, -76, 76, 79, -92, 30, 63, -119, -2, 19, 40, 77, -16, 44, 107, -91, 123, -109, -118, 124, -115, -41, -125, 21, -118, -113, -91, 71, -10, 91, 112, -90, 2, 102, 120, 40, 13, -24, -116, 10, 105, 41, -70, 14, 10, 38, -18, -89, -63, -27, 52, 58, 99, 32, 42, -12, -77, 99, -116, -3, 113, 71, -8, -6, 97, 29, -51, -60, 38, 35, 44, 95, -75, -33, 12, -39, 119, 17, 27, -25, 62, -77, 126, 40, -73, -102, -93, -17, -53, -108, -30, 48, -57, 74, -11, 84, 74, 97, -93, -83, -21, -115, 24, -97, -128, 15, -101, 9, -86, -23, 73, 49, 62, 98, -88, -11, -68, 124, 4, -57, 71, 116, -118, 13, -10, 8, -41, -53, 33, -94, -2, -72, 18, -34, 48, 69, -118, 76, 31, -56, 94, -44};
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
    msg.setTimeStamp(0.7540358533421638);
    msg.setSource(29830U);
    msg.setSourceEntity(119U);
    msg.setDestination(34548U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.37189951180709213;
    msg.width = 0.23585457718698621;
    msg.length = 0.9136640894451554;
    msg.bearing = 0.8085233912940709;
    msg.pxl = 26266;
    msg.encoding = 69U;
    const char tmp_msg_0[] = {51, -23, 17, 56, -97, -42, 93, -125, 44, -30, 81, 52, 64, -44, -13, 69, 54, -26, 63, -47, -101, -53, 87, 56, -50, 15, 77, -99, 11, -41, -13, -48, 117, -20, 47, 105, 43, -57, 113, -24, -14, 2, -114, 11, 75, 68, -127, 69, -67, -47, -124, -53, 67, 113, -74, -99, -16, -5, 62, -22, -60, 3, -15, -99, 0, -51, 113, -122, 107, -35, -77, 69, 11, -12, -18, 87, -59, -73, -24, 37, 113, 85, -110};
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
    msg.setTimeStamp(0.8642753847394338);
    msg.setSource(9603U);
    msg.setSourceEntity(214U);
    msg.setDestination(17543U);
    msg.setDestinationEntity(213U);
    msg.altitude = 0.6099047263029737;
    msg.width = 0.5682286309447901;
    msg.length = 0.10520819245502677;
    msg.bearing = 0.47427170924729534;
    msg.pxl = 30350;
    msg.encoding = 141U;
    const char tmp_msg_0[] = {67, -112, -111, 1, 40, 4, -25, -78, -102, -70, 11, 126, -77, -75, 42, -11, 18, -46, 25, 95, 85, 109, 26, 105, 39, 114, -79, -90, 74, 118, 73, -96, 91, 50, -94, 59, -68, -28, 77, -27, -20, 99, -101, 110, -123, 23, -118, 5, -45, 33, 123, -107, 114, 70, -115, 97, 35, -118, -40, -100, 64, 95, -117, 124, -67, -44, 114, 102, -119, -26, -106, -28, -52, 35, 5, 86, 93, -108, -32, -9, 1, -102, -86, 78, -39, -10, 21, 19, 32, 118, -36, -26, 107, -16, 49, 124, -109, -86, -44, -5, -30, 83, -32, 50, 99, -95, -49, -88, 13, 29, -84, -79, 21, 27, 123, -89, -79, -103, -60, -79, 86, 98, -33, 90, -50, 115, 19, -121, 53, -21, 37, -99, 72, 39, 4, -43, 5, 115, -13, 9, -24, 115, 111, -4, -8, -92, -17, 47, 117, 103, -110, -78, 34, -70, 89, 3, -103, -111, -73, -58, -2, -15, -32, 7, 72, 16, -3, -15, 35, -114, -77, -7, -69, -45, -41, -77, -93, -107, -10, -112, -91};
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
    msg.setTimeStamp(0.04266654188346286);
    msg.setSource(47398U);
    msg.setSourceEntity(199U);
    msg.setDestination(15735U);
    msg.setDestinationEntity(95U);
    msg.text.assign("JRKMKCHNSTFVHSFGKLKOXOPEOWIVCGPKBQEYIBYKRMIZZPTPMEFZAKDLRPYNONKXHOBYBNDWVQNROHVODHJQYWSGPJZDXRJQCHZUVXZCDMQGGHCABLTSJUIQORISSECPSUULPWUYZYYPATTXVNDKFKEOSYHXJGUMLBGLMCSXFLQEATZUDMQBHRVVEGJXSNAIRJRL");
    msg.type = 68U;

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
    msg.setTimeStamp(0.33437782250516457);
    msg.setSource(54757U);
    msg.setSourceEntity(232U);
    msg.setDestination(48179U);
    msg.setDestinationEntity(158U);
    msg.text.assign("YYSPCWAVLUYYOLZOOVBKREOXTZBMCGLAQLDIUWEWILTWKZEGLUJPHFIZQMLHZHYUSYISRUJHJTSZUKWJFGTPXEAYARQTAWJFMVRDYEGOQWWZUJPBHSNBBKCJYZOJZXIWPHXNRDNENBNRSXEPCDIGNQGSIMMTKLCMPODGXLCFVANVQVTDNXNCMVRPEBMRGCCUKPFVQQDTHFH");
    msg.type = 67U;

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
    msg.setTimeStamp(0.9475024180424699);
    msg.setSource(9339U);
    msg.setSourceEntity(116U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(192U);
    msg.text.assign("OLJTQENKNYMJWVWBPLAZCVPTNXQFEMXDRULAWSIDBCPPKGHYFRBURGOGTTURTQAYZPGVSAHOKMFDVWSUXIAGGPTIRCVQRMHHJVJXOJJMJRFDELXDKCMNYHZEGQXSCXE");
    msg.type = 135U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.8990769371688697);
    msg.setSource(29029U);
    msg.setSourceEntity(46U);
    msg.setDestination(11311U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6159751634756608);
    msg.setSource(59124U);
    msg.setSourceEntity(135U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.22397892528687735);
    msg.setSource(17629U);
    msg.setSourceEntity(38U);
    msg.setDestination(31102U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.05239667415695626);
    msg.setSource(32241U);
    msg.setSourceEntity(2U);
    msg.setDestination(40154U);
    msg.setDestinationEntity(21U);
    msg.sys_name.assign("VBQDJZIATIGPGRFBCNYRZWAMFYQPTYJFFWVKDSLIWSXQNCUVJOVETKMAEQLHOKAAHYHIDGNXJMJSTKZOKHHIUMSWPAJRQMUDUWWSJOARQTHVECFVZLVLGFNCJBEIXBOSOEOUZYGQWABIUNMBCTJCRPUDFGZUVTNSXHARL");
    msg.sys_type = 34U;
    msg.owner = 41997U;
    msg.lat = 0.9251277634950716;
    msg.lon = 0.736338963998052;
    msg.height = 0.013740738564792743;
    msg.services.assign("FDZMSXZHCTEEDGKFVQAQDANPUVVOZYHHWOCSLARQGCDVRYNUZBJPABKWWWOINOSOXUIMXPFCVRGVSPWUTJQLIWZBMYMDMWJKQFJBTKELKIUVXOMFPJUAAJVWEAYRMGFICRYLTCKXQSDNJYELTJONZGASCPKZHGHBDUTLUEBIFLFENUUGJRYZRXBNEFWMXM");

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
    msg.setTimeStamp(0.7936461049759496);
    msg.setSource(16497U);
    msg.setSourceEntity(225U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(176U);
    msg.sys_name.assign("YOPONGWQETNNRDDSIZGZRAWHIETNMISWPYGNCDCBBGFWYCWAWLEQVLJXXNDKLTGYZRDTTKMBXQHFHJXERKYUDCLTBJSBVZIJZHTAVXYXJMEUAGIDRDDAMNYEKQAVIZJLSVRBWCSVQNPWBKCCYVTLNXSVOMYTBCPFPKMGZCJBEFFMUCVQUAUFRIHXH");
    msg.sys_type = 49U;
    msg.owner = 35604U;
    msg.lat = 0.2703075885484957;
    msg.lon = 0.2797673110193758;
    msg.height = 0.8681876936469609;
    msg.services.assign("XXCOWLQHWYSZFANYECHORKNURYLTHQSXIYJUQMGZOCZSPVLNFRKJOYFMYSXZVGYNHIJTPICLIGUXQJNBILIJDWUCWKOWFZSHSVXKMKBBDBKFMQJPBTVAELLMZDAAQHGUZWBUDJXJPOTFRHIYERCYAZKEVKVXBL");

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
    msg.setTimeStamp(0.8229390227927897);
    msg.setSource(30356U);
    msg.setSourceEntity(124U);
    msg.setDestination(40674U);
    msg.setDestinationEntity(215U);
    msg.sys_name.assign("BMCPMICDCVLHXRQKTARPDUYFKOYAHLBDZTTHKQADPEKLGNVUKYRWPJAIFROKLSNLZXSRHNGSSLTBVVZPULMASJGWBJIWVYWDOLAZEGMCBJYBNYDVJZQTTSPXZPCYQHMHQDMEVDFRFUZNDIETAURGWE");
    msg.sys_type = 249U;
    msg.owner = 30542U;
    msg.lat = 0.6252350550292943;
    msg.lon = 0.2500758734834362;
    msg.height = 0.1493491325848877;
    msg.services.assign("BIWSNNOZQDANIVDVOKYPBOAWHEFSESOHCBYFAAXPQTIRMSEGYCULMMTMJQVUWOXGBTEWVZFKLTBNYNUHYPHQEXRSKCZJGFAZATCRTHCWWJGIGSZUQWYVOSDRUXRJXOFECMHXLKHZXIILJCUKVGNMWPTNDHNDNQKDQVSXBW");

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
    msg.setTimeStamp(0.33566818819651434);
    msg.setSource(31715U);
    msg.setSourceEntity(25U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(120U);
    msg.service.assign("SBDIWRNGDKQLRKOHQNHCVILDNHPGSFHOGOJTQFCAJYWWNCKPKXDJVFPPKEANXFHHWMRIDTPLIDTJZUMVYRBQIZZVXRHKATTUCKXSJIUAEYWLKYLLVCDXDIBOCQNBVZDRFMZMRJIVEGBLPSQJUAKZFEMNQPSGELBAYJAADGXZWMZCKOMBYHRYYTFMWTMUUSWE");
    msg.service_type = 23U;

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
    msg.setTimeStamp(0.7516528786798896);
    msg.setSource(52750U);
    msg.setSourceEntity(83U);
    msg.setDestination(1909U);
    msg.setDestinationEntity(29U);
    msg.service.assign("VEQATHFBRPCLMSVAXPBAPIOPLDTFRUHVTGNOZBLXIHYYMGOQRAUNMJOVECIQXQFPEDYXNEXSXDBFNDFUMAFRMWGBJLTNZLPWEKUBSPVTIYZJYYXFP");
    msg.service_type = 241U;

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
    msg.setTimeStamp(0.34156823055294605);
    msg.setSource(46717U);
    msg.setSourceEntity(195U);
    msg.setDestination(46770U);
    msg.setDestinationEntity(35U);
    msg.service.assign("ZJEXWDEQEIVUHSLMXVJMWTWSICWBQONEJVUQXOKOKLGHKGNYATKCURDUZGAXQKXFUAWWSALAJMQKDQRDBSIRFRFJZWYBKGZIWHKPVZNCRDAKMFPUMCQGLJVJIRGTYVBPDVGELZGQWMSTRHJMVBNLLYHYE");
    msg.service_type = 159U;

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
    msg.setTimeStamp(0.08884393391964751);
    msg.setSource(36680U);
    msg.setSourceEntity(173U);
    msg.setDestination(57966U);
    msg.setDestinationEntity(77U);
    msg.value = 0.20028732253549053;

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
    msg.setTimeStamp(0.9752308269161347);
    msg.setSource(61136U);
    msg.setSourceEntity(121U);
    msg.setDestination(39638U);
    msg.setDestinationEntity(154U);
    msg.value = 0.15440120360573006;

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
    msg.setTimeStamp(0.06921616869300651);
    msg.setSource(17340U);
    msg.setSourceEntity(20U);
    msg.setDestination(19337U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5939616627384761;

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
    msg.setTimeStamp(0.844282623367114);
    msg.setSource(6229U);
    msg.setSourceEntity(183U);
    msg.setDestination(473U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8635456241122509;

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
    msg.setTimeStamp(0.9108606349032504);
    msg.setSource(33523U);
    msg.setSourceEntity(157U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(4U);
    msg.value = 0.8568499018478567;

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
    msg.setTimeStamp(0.31638473207449813);
    msg.setSource(18939U);
    msg.setSourceEntity(254U);
    msg.setDestination(42998U);
    msg.setDestinationEntity(92U);
    msg.value = 0.5599922804771892;

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
    msg.setTimeStamp(0.409642204201459);
    msg.setSource(5475U);
    msg.setSourceEntity(196U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(161U);
    msg.value = 0.4894207933495833;

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
    msg.setTimeStamp(0.5698538993293855);
    msg.setSource(55823U);
    msg.setSourceEntity(65U);
    msg.setDestination(39976U);
    msg.setDestinationEntity(32U);
    msg.value = 0.09294088204499029;

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
    msg.setTimeStamp(0.526682554688288);
    msg.setSource(55338U);
    msg.setSourceEntity(28U);
    msg.setDestination(36251U);
    msg.setDestinationEntity(53U);
    msg.value = 0.49773150347884476;

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
    msg.setTimeStamp(0.5856277135039897);
    msg.setSource(56443U);
    msg.setSourceEntity(65U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(184U);
    msg.number.assign("QBIJLDLOAHAYNMFSHQOPVFGOYDAETMSYIVTLAWAFCBSXTFWVDPYJHNIMTUEPCLNNSWMCQDZLKHJTUHHDXBRSJXIMUOKZKDRECYISTWULBBCALTGTGWSWJCWJRPUUXZQLBNNURZOTVGAYXNVJZK");
    msg.timeout = 54990U;
    msg.contents.assign("EQQTZYSDCBNLRIKDQXXLAMYSNACJHVHOTWCATBRRCQDKGOALWYXAGIBFMLZALJSEGEUZVCCXXUIXZKWRAHNRWNYJBZZUTFFGPSXMLHWOQDNYPIHCVOYWGQTCJTWRPNVYPFTBKQIBJCUEGKWKJDIOOEKYBZSEXGPDRHLQRCHWJMGAGDIPFSFEKAQLBGOJTWVIHUPOXKSZMDIKUVVMLEUHFSNYJBUMTDF");

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
    msg.setTimeStamp(0.06811756559877513);
    msg.setSource(28560U);
    msg.setSourceEntity(60U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(116U);
    msg.number.assign("WXLYGIEJVGNIOMRXJGZXUMOJXZUGGAPDBRTQKYSNXTQOVUMBFSIMKGEPWNVDJRRQJSBYICTMFHKWCOLHLPYDFQDBZJHVBJWBTFTPUIDFANIYNAWYQNOEUZIXETAOKXAGEHU");
    msg.timeout = 51948U;
    msg.contents.assign("BSVJDONTMNXJVMSZTBJFWGUQPKYVPJLPKTUHCIOIQJULOQISMRWNPTAFOPAFNCGUSBXYFFIFADADLRYVLILVXYCDEJHLQIHVFVTXNQGBNMPQRCLQNCMLMUDAFOZJIYQSCZRZABEYZAWLYKSBAEGWDWXFCKWSEKMPGOZGAVXIBLXWRYCUHJTUGQBHDOZPZNKONETSTEPE");

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
    msg.setTimeStamp(0.5542975589768127);
    msg.setSource(51497U);
    msg.setSourceEntity(248U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(222U);
    msg.number.assign("SURWDJVMDVKMJMEGYWBQZQKZMXYBNKZLSCZCPNEDAQILOTVIAAAIJBPIPEZJMHESFOUOJCTRUPEOIUQHBKMVUSLGVSOEQWKSAPTCIDUTRJFBWSUXWRQQRBAYDKHIXCVJXSXFZCQ");
    msg.timeout = 22682U;
    msg.contents.assign("HDCAYTBWOJMVXBGFVDSKYOQECSQUOENNWUHBAVTIMGBFNONKWZYWKAGGSKINEQBLQZLXKRDHGVGUWDJHQMMWQMIACOTDVJTNUTSJXUWIYUYYTEUFFVMFRJEAUVBXMITCFSPMZAEBWYEBCJVOMDFSQJNPKXPXQXVYLZIYWNWULTNIZHTPKCOEGJPRFPZRUOPGDLHKCREQAQDMHYOLDTPRHHZNSAHGKFRXZRZRBIDXSXLOLV");

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
    msg.setTimeStamp(0.18073115075424473);
    msg.setSource(29026U);
    msg.setSourceEntity(78U);
    msg.setDestination(6321U);
    msg.setDestinationEntity(29U);
    msg.seq = 820470214U;
    msg.destination.assign("GYGJPCHJVYUOVOAWLNKDZUIGCMCVJMSHIWZIOOXCRUELFUPTBBMIHVTIGJUNJKEAZBWVSRAEKAHHYCBN");
    msg.timeout = 38465U;
    const char tmp_msg_0[] = {15, -28, -9, 11, 99, 20, 53, 48, 22, 26, -109, -17, 45, -125, 28, 70, 17, -116, 15, 94, -53, 1, -52, 77, 82, -103, 108, -12, 41, 43, 17, -80, -40, 2, -31, 10, -29, 89, 89, -116, -3, 15, 124, 81, 88, 113, 20, -63, 25, 58, -7, -70, 43, 76, 97, -63, 118, 8, -83, -8, -32, -45, 60, 74, -8, -94, -64, 61, -38, 33, 17, 112, 118, 9, 25, -87, 105, 111, 28, -4, 29, -50, 125, -31, 21, -63, -54, -8, -52, -70, 85, 12, -108, 121, -19, -73, 42, 124, -12, 79, 10, 122, 66, 124, 58, -18, 77, 85, 91, 2, 22, -112, -80, -55, -5, 49, 108, 66, -7, -18, 108, -102, -75, 8, 90, 54, -98, -85, -5, -13, -71, -93, -120, 26, 110, -80, 11, 87, -109, 54, 8, -61, 73, -57, 98, -19, 4, -44, 83, -51, -25, 0, -8, 67, -48, -54, -46, 83, -100, 10, 83, -117, 87, -120, -6, -42, -107, 9, -100, -62, 100, 117, -25, 94, -119, 125, 55, -103, -88, 49, -102, 122, 2, 12, -93, -44, 50, -101, 34, -24, -72, -74, -50, -20, 16, -49, -17, -10, -4, 45, -86, -90, -33, -2, -7, 96};
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
    msg.setTimeStamp(0.17044623269824144);
    msg.setSource(35617U);
    msg.setSourceEntity(161U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(170U);
    msg.seq = 716476483U;
    msg.destination.assign("CYHSVFAIORQXZVMWGCSCVCUCDZSFUBZKZTGHIAZLLVGJLRFKXWVAWMEVJIYKRQLZOTJUTRYBXONWHQFANBGUSQMAQAEODDBREGYPQNJDMOPWYPBKIMGXGNWFMW");
    msg.timeout = 9484U;
    const char tmp_msg_0[] = {-33, -15, 94, 93, -87, -81, 110, -4, -76, 11, -115, 30, 116, 49, -116, 90, -23, -46, 110, -18, 38, -84, 66, 44, 38, 14, 122, 114, -68, 44, -32, -28, 77, 24, 42, 123, -20, 64, -67, 42, -89, -88, 50, -104, 15, -36, 40, 48, 100, -60, 120, 82, 75, -27, 12, -61, -2, -64, -107, -7, -116, -39, -101, -40, 17, 56, -108, 115, -26, 8, -115, -71, -63, 75, -121, -6, -16, -16, -94, 82, 74, -94, -113};
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
    msg.setTimeStamp(0.25612756328374153);
    msg.setSource(884U);
    msg.setSourceEntity(18U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(229U);
    msg.seq = 3234688742U;
    msg.destination.assign("SSOFAROAZRDGRYQJZMUEZNPSWNMYVUOPITTWDBRXLKJAXYKADSCULPIEWHIOJQHHXOAIMKESEELBGMRHSBDBTXQYALVVZQHCUDUVCBMQHPJKEFYVJLKEFFWVBCMSYCJUGXZNZWQJDEEWFGA");
    msg.timeout = 55997U;
    const char tmp_msg_0[] = {-42, 74, 124, -47, -32, -20, 45, 27, -37, 57, 43, 19, -64, 116, 1, -57, 22};
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
    msg.setTimeStamp(0.4841728278845697);
    msg.setSource(58337U);
    msg.setSourceEntity(228U);
    msg.setDestination(52520U);
    msg.setDestinationEntity(72U);
    msg.source.assign("FJYQVWIBMQCGHTJMDVOHSNEPTJHSBYWOMEAZDAKZYSDOTUEXZSXVRQXWPSGZXQLTYGGUQLPCQHYRWBNRICDFERVSAKWPUYCMYDOWOSOJFKCAZAVCMXCMPRKFNKWSDTUALQBNFIJGUBAOYIZJQWJPGGLLBTIWCKTHHYLRPTATBZKGEURMUXKJVMXDEAROONSFMZRNKXVIQINVHZBFIMLOSHQBTPLBVIGJFFLGCPNNXNRH");
    const char tmp_msg_0[] = {-87, -68, 103, -86, 82, 27, -70, 79, -47, 126, 2, -44, 58, 91, -53, -62, 121, 113, 105, -63, -6, -75, -8, -31, -127, -21, -45, -120, -104, -13, -87, 95};
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
    msg.setTimeStamp(0.42248521760275637);
    msg.setSource(58024U);
    msg.setSourceEntity(149U);
    msg.setDestination(20603U);
    msg.setDestinationEntity(38U);
    msg.source.assign("SOBFBOPXWHVAHORZMWVJDSMUOCWNSDKLYFGZEDAMZIPSFSBSMMORFLOTFAU");
    const char tmp_msg_0[] = {-28, -97, -57, 14, -85, -46, -111, -119, -124, -22, 46, -4, 122, -115, -81, -64, -80, -115, 14, -8, -83, -26, -100, -110, -79, 106, 106, 107, -85, -8, 37, -54, 50, -84, -108, 91, 122, -127, 111, -68, -116, -79, 21, -105, 27, 17, 46, 29, 103, -107, -87, 118, -98, 22, -110, -111, 27, 56, -94, 36, 86, 122, 96, -71, -92, -123, 87, 61, 100, -43, -113, -67, -107, -103, -15, 68, 114, -20, -99, -18, -111, 93, -68, 39, 0, -98, -48, -89, 7, 39, 63, -19, 67, 95, 17, 77, -59, -61, -62, -115, -4, 100, 59, 63, 73, -40, 38, -79, 7, -107, 74, 67, 95, 82, -118, -13, -56, 107, -53, 55, -108, -124, -18, 88, -39, -56, -111, -66, -53, -98, -27, -15, 39, -74, -75, -33, -126, -128, -98, 11, 9, 90, 115, -25, 70, -124, 25, -123, 82, -31, -37, -31, 102, -124, -26, 17, 43, -59, -3, -92, 30, 111, 33, 52, 85, -30, 53, 50, 75, 72, -86, 42, -41, 13, 76, 92, -66, 82, 73, -18, -62, -27, 31, 5, -25, -27, 12, 8, 92};
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
    msg.setTimeStamp(0.3297671870750861);
    msg.setSource(27312U);
    msg.setSourceEntity(84U);
    msg.setDestination(44604U);
    msg.setDestinationEntity(248U);
    msg.source.assign("OTBZXADATFVGNYNICIGOBHFPFVISOZEOLSSOOJKARNREGYEHLZZKFAABJJWBMUPAOLCCHQTPVHVKIMKIHFNOIPGNKDDSGJHZTUTJJNCNERRL");
    const char tmp_msg_0[] = {-46, -46, -103, -124, -27, 86, 41, -59, 52, 5, 4, -88, 88, 62, 1, -67, 73, -5, -57, 13, -35, -16, 50, -85, -25, -66, 18, -108, -78, -34, -41, 33, -109, -38, -57, 64, -92, -27, 50, 21, 53, -64, 81, -61, 85, -23, 5, 8, 3, 47, -123, -68, -108, 48, 12, -44};
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
    msg.setTimeStamp(0.8711104133273454);
    msg.setSource(23385U);
    msg.setSourceEntity(124U);
    msg.setDestination(30823U);
    msg.setDestinationEntity(196U);
    msg.seq = 3315684833U;
    msg.state = 237U;
    msg.error.assign("EOPTRZWNYBMEIAIQLVXMDMFQVDIDVCLRRRLEXFUDXULGYZJXLBHGQPUVETWIBRACGTYXQYSYFTSFFIA");

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
    msg.setTimeStamp(0.4755624791238686);
    msg.setSource(32175U);
    msg.setSourceEntity(210U);
    msg.setDestination(61375U);
    msg.setDestinationEntity(17U);
    msg.seq = 2193185296U;
    msg.state = 232U;
    msg.error.assign("JZFHBOSXZPQLJTARYQMSKBQRDIPPFICNHNKHPDSPSXFQSXRPXOCWIOVAPGEUHDAKZJBLOAJTOMMBELGZBYUURWCTITUNTDRDTOZLYVRJWDCGPGFCVKJSUWFZYSKYHVLDCLMGUKHBZGG");

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
    msg.setTimeStamp(0.26427257473492394);
    msg.setSource(46401U);
    msg.setSourceEntity(238U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(162U);
    msg.seq = 2081522438U;
    msg.state = 94U;
    msg.error.assign("BCLWDGPQNTJEIFDXPVGMLEDMUITNXMQPPRSJNPCSDCHJAWVEPKTBCL");

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
    msg.setTimeStamp(0.38611214894473844);
    msg.setSource(49720U);
    msg.setSourceEntity(142U);
    msg.setDestination(26165U);
    msg.setDestinationEntity(165U);
    msg.origin.assign("EOPNLGKIKVZOOMPQUTAXHVPQJLHUFLGBRPBSTQYBURVDSBTXEJXNEMDXKWPFMWHGOWCVOFKICIGCQAMZKDXRTXTFGKCPOQVYELGDQTBGTYNUYUKSEZWAJYUSADHXLRTHNJEAOEYMICHCCJLWJFPNAPIZVWRZBSMJWMFAYAWPLDMQIGZIYHNLXGMKLYZONF");
    msg.text.assign("FEJCRDFSOJMTBMWZHGZHVQSOCWKU");

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
    msg.setTimeStamp(0.021519422070311434);
    msg.setSource(33422U);
    msg.setSourceEntity(130U);
    msg.setDestination(13945U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("MIHVDDGQYWNJZPFLOJQHWOPNLDCIIMA");
    msg.text.assign("KBAJEPIVTSGWMTNRYSRRQDLHHGXRBLFMVEJBIFOEZMDSWLYOCSTREOMDCVG");

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
    msg.setTimeStamp(0.7831743512204673);
    msg.setSource(48994U);
    msg.setSourceEntity(124U);
    msg.setDestination(30579U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("HOBKGKXPGIRHSCXDVHDFVLFARQNFFVQFADNWUMIUMVEGOPMSGXNIE");
    msg.text.assign("ZQVYUMGJORXTTZLLHYPDWWUPBRQXWMRWNBKUZZXOYKDKCEKJUJEPRELNGNGCVZDYKUPCDNUNCNPRQJLZHEHLFLRBDAWDOXIGFCPAEYITVJRJQIBMUHVATJBHTWUCIFSLMPIFATSMAJHGTJLG");

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
    msg.setTimeStamp(0.7333603357138347);
    msg.setSource(65204U);
    msg.setSourceEntity(205U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("IGYTBCUBPMZPWXBDTIZWAAEEWAAOVYXLMDCCNPDFZPFLNNNBSWJVQTLVMEOVUMHBOHGIKYVSTTFTPYOSFEDUIYOFQWQHCZXKBEQUZVCDAFQKTPQYOALHWNMJHNIVFXEDUBIIRUDHSSLSBSLHRRXEJRACQBWRRUCCSJKLCVWKIUMTGGYLDRTYXXQUMVTRDFEMCZRXNJFOSKOZHPAZVQIPQXGGGWKKBJGHGRLAISMYZE");
    msg.htime = 0.022737441600657826;
    msg.lat = 0.6905195450771315;
    msg.lon = 0.4925034941642278;
    const char tmp_msg_0[] = {44, 4, 100, -56, -85, -82, 105, 110, 108, 8, 100, -10, 111, 95, -6, -115, 35, -45, -117, 79, -87, -60, 8, -22, -104, -37, -24, -97, -125, -85, -97, -116, 28, 90, -100, -74, 41, -10, -89, 106, 112, 101, -88, -17};
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
    msg.setTimeStamp(0.19926048885810932);
    msg.setSource(2854U);
    msg.setSourceEntity(4U);
    msg.setDestination(32211U);
    msg.setDestinationEntity(179U);
    msg.origin.assign("XKKILOJERDJEZNLNXKFRRCWWPGSMHIZQXVSDHMQQZUPZAMTTFFBAMUWRNLPILZASWAQQFKSPBIDGFOJFBJNKWGXJRNMDPVKTJKRHHZXKSVOSNITVCDLYVUCGIYEMNHHHTG");
    msg.htime = 0.5955826942475336;
    msg.lat = 0.15499199899646499;
    msg.lon = 0.18213263264165447;
    const char tmp_msg_0[] = {-126, 82, -2, -96, 42, 58, -110, 31, 116, 82, -90, 119, 123, 71, 12, 23, 62, 119, -98, 33, 89, 91, -63, -35, -24, 40, 99, -116, -16, -66, -71, 9, 18, -122, 39, 21, 101, -122, -56, 30, 55, -124, -117, -87, 51, 69, -78, 67, 47, -101, 33, -63, 64, 13, -81, 73, -21, -73, 75, 14, 117, -57, -125, 70, -72, 101, 72, -50, -112, 13, 116, -7, -43, -58, 96, -24, -115, -52, 32, -20, 63, 63, -45, -20, -69, 38, 50, 100, -59, 7, 76, -109, -97, -11, -38, -11, -28, 13, 110, 34, 121, 58, 58, 109, -97, -71, -94, -84, -25, -49, 8, 82, 96, 86, -124, -110, 46, 32, 46, -40, 19, -123, -82, -122, -17, -31, -98, -13, 80, -93, -112, -109, 29, -40, 47, 3, 91, -40, 24, -100, -40, -21, -123, 34, 33, -105, 4, 90, -122, -109, -85, -71, -37, 51, -125, 114, -52, 106, 80, -86, -32, 56, 94, -3, 60, 80, -94, 10, 67, 114, -5, 22, -52, 10, 121, 68, 40, 108, 115, -5, -118, 4, 85, 101, 77, 118, -63, 79, 16, -76, -81, -106, 46, 15, 33, -20, 24, 34, -106, 53, 8, -121, 38, -107, -126, 93, 2, 66, -1, 111, -96, 9, -107, 90, 50, -71, -74, -58, 6, -37, -51, 43, -114, 59, 120, -107, -120, -10, 16, 28, 53, -70, -93, 41, -128, -27};
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
    msg.setTimeStamp(0.023391714658458906);
    msg.setSource(43898U);
    msg.setSourceEntity(11U);
    msg.setDestination(43664U);
    msg.setDestinationEntity(199U);
    msg.origin.assign("XGHXKINIUUVBAEXJJZLXRGCZJMKMXPWBVCWJBYFYFESQVQROYGTGUSZJ");
    msg.htime = 0.9534468086599696;
    msg.lat = 0.9830319641583821;
    msg.lon = 0.1768596172892265;
    const char tmp_msg_0[] = {111, -28, 17, -122, 22, -63, -61, 79, 98, -114, -91, 99, 1, 110, 76, -69, -37, -10, -55, -26, 53, -8, 123, -78, -35, -18, 2, 107, -86, -119, -56, 41, -128, -93, -70, 115, 99, -90, 104, 108, -70, -71, 51, 92, -33, -1, -74, -90, -100, 8, 93, 88, 57, 113, 112, 54, 89};
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
    msg.setTimeStamp(0.5379785755628906);
    msg.setSource(45612U);
    msg.setSourceEntity(106U);
    msg.setDestination(52227U);
    msg.setDestinationEntity(194U);
    msg.req_id = 21750U;
    msg.ttl = 46139U;
    msg.destination.assign("EQNBBOMVNBLGSQHDJWKACGLIYUUDWHZNUBIFIVMUAEGGXJWBVVFRRTHSYLITDPCCTTOOPCXCMPTSTYEEGVNDZAZGPAVJGDXMBNJQPEHQANSBZLSUNAAIELOHUBVXDYCWOLFSETRPBZWXKEARXCNFSIHIXPIZYWDFQZFUDCWWVJRI");
    const char tmp_msg_0[] = {-73, 103, 118, -56, 104, 72, -111, -87, -117, -127, -65, 29, -80, -36, -4, -28, 124, -20, -40, -100, -55, -5, -64, 68, -85, 93, -27, 78, 86, 38, 53, -50, -40, -118, -114, 1, 89, -22, -110, 99, -115, -58, -56, 63, 80, 113, 1, -46, -28, -50, -71, 65, 51, -85, 78, 19, -7, 37, -126, -82, -95, -5, 58, 15, -66, -87, -118, -112, 119, -44, -41, 122, 43, -127, 100, 21, -64, 104, 111, 17, -58, 44, -30, -15, -3, 38, -26, -104, 112, -112, -69, 41, 42, -12, -48, 106, -56, 112, 7, 3, 71, 88};
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
    msg.setTimeStamp(0.3314212361440706);
    msg.setSource(21430U);
    msg.setSourceEntity(130U);
    msg.setDestination(8633U);
    msg.setDestinationEntity(19U);
    msg.req_id = 24836U;
    msg.ttl = 11609U;
    msg.destination.assign("QWAAEBJUVXDVEXPOOPXKEIOHGQKLJCBIFLKKOUMABMTQQBWLK");
    const char tmp_msg_0[] = {-122, 3, -17, -52, 62, 8, -35, 51, -25, -99, -70, 11, 80, -7, 70, -91, -44, 26, 77, 0, -125, 20, 101, -58, -99, -83, -41, -41, -19, 98, 37, 119, 21, -11, 54, 29, -17, 14, -120, -60, 104, 124, -17, -123, -32, -105, -110, 75, 67, 91, -112, -119, 6, 54, -28, -27, 63, -4, -62, 33, -111, -33, -82, -57, -2, -111};
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
    msg.setTimeStamp(0.8378142049750411);
    msg.setSource(24971U);
    msg.setSourceEntity(150U);
    msg.setDestination(44904U);
    msg.setDestinationEntity(131U);
    msg.req_id = 59822U;
    msg.ttl = 36847U;
    msg.destination.assign("JBKPWCJQTHZODLPHDEBOIWVZJPUEANXDOTWCZIPEOZMTFTAIDWJGETEMVXPUSUEZYNSFWOYMTEKPZLMFKKAZAQHYNGILPCOXIMRBLAVYOUIZCFDICJFQTHVBHWJKSSCSCLLWTRVWXTJIMNZMRSTQJSHDQSGLWCQVUVDEOEHUFYKUYDORKEUXLRKSBHRABYJPVYLRHSCKRXFBCZWPBXFIPNGNXBNKDBRQXDLVNHGGMG");
    const char tmp_msg_0[] = {80, 103, -15, 63, -22, 72, 33, 61, 59, 38, 3, -104, 12, 108, 121, -2, -84, 43, 49, -2, 49, -7, -80, 43, -2, 47, -12, -104, -124, 86, 71, -124, -113, 93, 99, 92, -99, 95, 27, -64, -68, 68, -67, -35, -100, -41, -60, -92, 110, 49, 36, 46, -25, 81, -95, 0, 69, 45, 1, -89, 116, 73, -71, -50, 84, -103, 44, 115, 36, -48, -89, 19, -67, -101, 98, 111, -65, -95, -10, 68, -108, 5, -3, 23, -128, 74, -42, -118, -117, 119, 63, 13, 4, -73, -127, -81, 22, -12, -86, -65, 18, -124, -128, -127, 45, 58, 117, 46, -8, 72, -36, -118, 113, -8, 121, 16, 123, 67, -86, 22, 4, -34, -121, 71, -46, -89, 107, 49, 85, 123, -110, -27, -27, -28, 37, -112, -61, 11, 37, 119, -70, 125, -109, 47, -58, 100, -126, -35, 61, -35, 17, 98, -36, 72, -14, -4, -110, -83, -66, 1, 2, -87, 10, 52, -43, -39, -28, 20, 78, 86, -73, -58, -120, 36, 5, -89, 72, -65, 12, -35, -93, -61, 66, -54, -85, -107, -88, 87, -84, -110, 84, 86, 39, -52, 32, -70, -80, 99, 51, -76, -71, 29, 87, -32, -97, 40, 8, 88, -92, -106};
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
    msg.setTimeStamp(0.1527267923513711);
    msg.setSource(37326U);
    msg.setSourceEntity(233U);
    msg.setDestination(43677U);
    msg.setDestinationEntity(51U);
    msg.req_id = 62900U;
    msg.status = 79U;
    msg.text.assign("MWFCIVKTOQDSZNRTGJBUBCXZSFFFNUFVDPMYKPAMQQSELOCWAAFVSLUPDJHBSDUETRPAJDPIBNCXCOJIKCBSPGTXHMNUMEXYLHPVSQFOSLNVOVDKEABOYCLVVGITNUEJRRGYAGRVQZAINJHXTAWOTMKFLTROYAWBSRPSDQHMFVTBZHMLEQFRWWXQALZOENCMJPIPEGIHCTGKZWYURGOYWHYXEKCDBNXJE");

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
    msg.setTimeStamp(0.7136599130807469);
    msg.setSource(60947U);
    msg.setSourceEntity(30U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(86U);
    msg.req_id = 45668U;
    msg.status = 170U;
    msg.text.assign("YCMVGYHKTLMNOENUKIAZZSULTHNKNETZQGXMQRKOHFRSTXZIJCOJFQMJFWJNRSSDNPXATABAYEWBGCQPGXKBUWTZHECOAFIICWOTWDDVDJLRXVLHSQYCYVMDNUUD");

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
    msg.setTimeStamp(0.2683592161922983);
    msg.setSource(37048U);
    msg.setSourceEntity(154U);
    msg.setDestination(64767U);
    msg.setDestinationEntity(46U);
    msg.req_id = 7763U;
    msg.status = 179U;
    msg.text.assign("XZDBNXUDXJPJPDYNEEGCJEETCZJAVRTINFIIPLYRZYMAGIGFOWCHRMACCARBYNQREFWFUC");

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
    msg.setTimeStamp(0.7114559579610229);
    msg.setSource(3414U);
    msg.setSourceEntity(94U);
    msg.setDestination(35908U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("FGOCLCGFAJKNOQDWPHYCBJDFNSTNFWEOIKWXXTMFRURVVMXXXOVZTBYJDLPMVCGVTRUTDKAAZMEDMKWPRSYZZLEMBGJGSTMUICYCBZILOASAWVEQSYQMZDIBIIKRURCNWPZGICEGUZPVTLBX");
    msg.links = 2909752493U;

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
    msg.setTimeStamp(0.010682391288023507);
    msg.setSource(10479U);
    msg.setSourceEntity(150U);
    msg.setDestination(29600U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("RZVJOBPIMDKUHTZTDAVCEPQXPBMELUQHPFFZHSYZMVANLYGIDNICHAYCDQVOKYFTKOVKXBRZMKABKBJVWYPNIFBJMXDQFSYULFWOWHSTGSJFSCUQYIB");
    msg.links = 4082309534U;

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
    msg.setTimeStamp(0.4205577267643259);
    msg.setSource(53038U);
    msg.setSourceEntity(239U);
    msg.setDestination(21398U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("BXUXBDLUPLNAOECLSBSRVFFKJFQHZKPVDHRNYYJEZGCFJKKTNCROIEIHBTJUWNER");
    msg.links = 2403633591U;

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
    msg.setTimeStamp(0.7732375306099116);
    msg.setSource(60268U);
    msg.setSourceEntity(107U);
    msg.setDestination(43267U);
    msg.setDestinationEntity(236U);
    msg.groupname.assign("CQILQKWBKQFMPXZKKVAXCCTBVYLHRPRZVEDWEREMGGZOKVVKPOETTFVBWUSXHJANSOOFCMGDSIBFSEOBJLRABUHSYIEJXVIHIJAARZMFYDIZNSYIKTCGDEMPOGPRTLRXJDFQFULAHVKDTUCQCQMNFYGJXMHYQASWNRLSJWOFNUQPXSHIUNFZBCDIWDMUTYER");
    msg.action = 224U;
    msg.grouplist.assign("JIFYXEHALRGTDUJLSVWEZSRCNCKRWBIFJLRQJIDBSA");

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
    msg.setTimeStamp(0.8067762685980162);
    msg.setSource(20000U);
    msg.setSourceEntity(175U);
    msg.setDestination(54415U);
    msg.setDestinationEntity(88U);
    msg.groupname.assign("UJCANWYFCXDJFKUJZMPZXSOSXSOFLRWJDFALRQRYEQIRMMGSZHEYJMNDXHSAPICKDALGNQAOODKYSAOKQFKUIHHLNZGNNLBLLEWCJDGFCIBHKWKGFVLQ");
    msg.action = 29U;
    msg.grouplist.assign("UQPDCNJHFRTGRNEQBHDKTBUFMVXSJFFTEEXHWUHDQRXOOZQGQHZDDNVUCJPTPSCUKAZA");

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
    msg.setTimeStamp(0.6907393430049229);
    msg.setSource(51035U);
    msg.setSourceEntity(16U);
    msg.setDestination(48269U);
    msg.setDestinationEntity(133U);
    msg.groupname.assign("MYNGCOXHNCCWOVQVFMTAWXS");
    msg.action = 203U;
    msg.grouplist.assign("FWWLKVNQVPCTGUVPUZRSXHSACINQYHSEUEZHGNPAJPUHCFJRZTSGKJRZKHCGWUEQYIA");

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
    msg.setTimeStamp(0.42945990365548714);
    msg.setSource(20441U);
    msg.setSourceEntity(239U);
    msg.setDestination(1666U);
    msg.setDestinationEntity(106U);
    msg.value = 0.4529615454181821;
    msg.sys_src = 46527U;

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
    msg.setTimeStamp(0.8863012836727842);
    msg.setSource(18173U);
    msg.setSourceEntity(133U);
    msg.setDestination(23816U);
    msg.setDestinationEntity(136U);
    msg.value = 0.636034192357702;
    msg.sys_src = 24281U;

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
    msg.setTimeStamp(0.14831586288867982);
    msg.setSource(56892U);
    msg.setSourceEntity(173U);
    msg.setDestination(14251U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7503265084516823;
    msg.sys_src = 27950U;

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
    msg.setTimeStamp(0.5414981514429593);
    msg.setSource(17484U);
    msg.setSourceEntity(80U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(244U);
    msg.value = 0.20149283143195584;
    msg.units = 156U;

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
    msg.setTimeStamp(0.1743700910154754);
    msg.setSource(54473U);
    msg.setSourceEntity(151U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(8U);
    msg.value = 0.043104162787489075;
    msg.units = 128U;

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
    msg.setTimeStamp(0.3887858607475414);
    msg.setSource(21501U);
    msg.setSourceEntity(231U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8690952602998139;
    msg.units = 76U;

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
    msg.setTimeStamp(0.4241503294621626);
    msg.setSource(29258U);
    msg.setSourceEntity(147U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(103U);
    msg.base_lat = 0.8070485909712611;
    msg.base_lon = 0.8014476681873687;
    msg.base_time = 0.5281054458239485;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 36239U;
    tmp_msg_0.destination = 53479U;
    tmp_msg_0.timeout = 0.16041445327288506;
    IMC::SetLedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NXCZUIDVJYFCSJJ");
    tmp_tmp_msg_0_0.value = 162U;
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
    msg.setTimeStamp(0.8801325656712108);
    msg.setSource(62988U);
    msg.setSourceEntity(11U);
    msg.setDestination(63932U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.43286372393389194;
    msg.base_lon = 0.4118668114384718;
    msg.base_time = 0.7090122562636778;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18456U;
    tmp_msg_0.priority = -106;
    tmp_msg_0.x = 17408;
    tmp_msg_0.y = 20240;
    tmp_msg_0.z = -29683;
    tmp_msg_0.t = -15424;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("IIJVBEVNMJLYBWAWITVCDFTUDAPCQZSTCPKJTYBARHLRNKQVALPBYOHZGRGKDXUFXRDLUVQPGBNAGWFXYVVIGEZDRDLPBMIHUGXICAZXFCJQPETXINNCYDPRWMCEXKQO");
    tmp_tmp_msg_0_0.description.assign("THGICVRMWORGEIELQKVJINMQDNSFAONYHYMAPTQZIRFCCZLQKLRSOKXBLBUTPWXXDNVBKWAVZUAEUALAVDGZJQIEUEYPBYMPNYMBPSNXCMZFKDBFSFODNKIPVOIQDXNTZOKGTQF");
    tmp_tmp_msg_0_0.vnamespace.assign("YKGABGEXRUIESUJTSGFJAOBLOYBCCHMKEFWMAVFZCYPQUXSHKVVNATHSUWDZXWRMONCTANYUPCRLKXSBYLFENRFTROIFBVMBOWOUQDTVLLYTBOIXJKEQQDVNLLTNMMVKQKLJASRMG");
    tmp_tmp_msg_0_0.start_man_id.assign("LVXCKCGQDWBLTDSNIYQSNRJRJBSVYLXNRBVATYHLCEEFJJHGQQWPIPBXZHKXTNIEXFXKTSUUL");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("VHSIMDUESHDWKCQZBSPHYZSEGPTXJFWSFDHEIKACEUOZBJPXKCGBCSIJFTHWEXFSFKXJLVEHFQDWNBGVPQCLAWIOBADJWVOURLXCSSZPXIATZNQUBUJDJAHLRNHKIYZZNC");
    IMC::VehicleFormation tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.3794531947036517;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.3456492950081994;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.8183646435995579;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 46U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.4317935921403354;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 180U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_time = 0.20151358942462472;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("BWOVQZPPZTSPKNDTLZUEGJO");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::Heartbeat tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    IMC::PlanControlState tmp_tmp_tmp_tmp_msg_0_0_0_2;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.state = 174U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.plan_id.assign("MOASLGYFTSCJRRMYVIWKJMAZXSMLKVTKFRBORNZXCYQDVGBRTWFPRQXFZTBMHVKQJWOPBSEGGEQLVANYPMETKOQLAGHTIZIBBUYRIFOHKZSCJEYRFXNPUEXOGCNEBEZLFBNSMQJUVV");
    tmp_tmp_tmp_tmp_msg_0_0_0_2.plan_eta = 1382994504;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.plan_progress = 0.6847457717134626;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.man_id.assign("MSINNQNYZDGRFGQAQLDNNAWEKUTHVOUAMUZVVZVMDXHDVRISTQCRZEGWGYRITMWKJHAUXXRQRFCBEFUHGSSAAQAJHWPZIEOAGNJUBJMMMYJLXKXTEKNMMZVBIPCTDRDWZFPLYPOTCPXNWXEECSSPEDFCGKHQXOTLBFWRJUJLRVOVFKOGQSFBLGKWKFYMLBAOJIWUBBLDYBTHICHBUPVSOOLTSORHQHYXFPWPGZYCPKCJYAZKIEEIJYIZTDL");
    tmp_tmp_tmp_tmp_msg_0_0_0_2.man_type = 54135U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.man_eta = -2140817519;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.last_outcome = 242U;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_2);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::ReportedState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.2325081547390503;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.5036715901188734;
    tmp_tmp_tmp_msg_0_0_1.depth = 0.7911204748829033;
    tmp_tmp_tmp_msg_0_0_1.roll = 0.30021936385660575;
    tmp_tmp_tmp_msg_0_0_1.pitch = 0.6123495372525235;
    tmp_tmp_tmp_msg_0_0_1.yaw = 0.7446064684312802;
    tmp_tmp_tmp_msg_0_0_1.rcp_time = 0.6328630409333036;
    tmp_tmp_tmp_msg_0_0_1.sid.assign("TNSIKGGSOXZJJVVIHOJWXITQEBFTYIBFZXHNMTJKJGWCAEACKASCNBCHCDC");
    tmp_tmp_tmp_msg_0_0_1.s_type = 146U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
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
    msg.setTimeStamp(0.899134864912645);
    msg.setSource(20980U);
    msg.setSourceEntity(189U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(110U);
    msg.base_lat = 0.6409663888943671;
    msg.base_lon = 0.6475750170894369;
    msg.base_time = 0.3713784772004819;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 27692U;
    tmp_msg_0.destination = 65437U;
    tmp_msg_0.timeout = 0.6272644859465576;
    IMC::UamRxFrame tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_src.assign("EQOEWQTNBTEGBK");
    tmp_tmp_msg_0_0.sys_dst.assign("UCLRVENPUFWELTBFLOROSNOHPLOZZZZILMQQTOHMEEXQVARJLIXHFYWACGUHOGCXIYXXYGQMNUKGPKAFXPEYNTHATWKTJSSPTECLMKGKSW");
    tmp_tmp_msg_0_0.flags = 55U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-43, -35, 35, 79, -72, 25, -63, -22, 22, -72, -14, -42, -74, 112, -100, 18, -57, 92, 80, -69, 55, 68, 101, -54, -47, 10, 100, -82, 118, 100, -75, 98, -91, -118, 13, -23, 105, 55, 100, -100, 69, -2, 43, -17, 104, 40, 124, -73, 30, -38, 118, -94, -111, -9, -115, 86, -123, -57, -22, 39, 11, -69, -19, 29, -56, -12, 13, -21, 46, 84, -73, 55, -13, 84, 52, 85, -32, 31};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.9156800417190084);
    msg.setSource(8997U);
    msg.setSourceEntity(142U);
    msg.setDestination(39665U);
    msg.setDestinationEntity(3U);
    msg.base_lat = 0.6315696438148727;
    msg.base_lon = 0.8458645337162968;
    msg.base_time = 0.1462307823679928;
    const char tmp_msg_0[] = {-13, -31, -78, 14, 21, -105, -93, -7, 36, 70, -27, -101, -121, 28, 107, 64, -94, -19, 98, -51, -9, 34, -74, 121, 3, -102, -55, -21, 77, -3, 111, -77, 97, -45, 19, 10, -79, -60, -72, -72, 65, 110, -56, -64, -100, 43, 4, -40, -19, 1, -27, -13, 66, 72, -90, 88, 15, 2, 106, 35, -120, 111, -78, -55, -8, 38, 36, 3, 39, -90, 112, 119, 46, -99, -19, 77, -14, 17, -20, -110, -4, 86, -25, -91, -121, 52, 52, 10, -2, -105, -31, 93, -123, 112, 85, 47, 78, -42, 43, 119, -95, 100, 83, 46, 121, 52, 8, -85, -82, 6, -105, -41, -127, -78, 73, 19, -14, 79, 29, 38, 54, 58, 35, 64, -127};
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
    msg.setTimeStamp(0.527853505756871);
    msg.setSource(1962U);
    msg.setSourceEntity(36U);
    msg.setDestination(49650U);
    msg.setDestinationEntity(141U);
    msg.base_lat = 0.4486968153599772;
    msg.base_lon = 0.5516712654491432;
    msg.base_time = 0.14110015477285653;
    const char tmp_msg_0[] = {33, -34, -119, 16, 77, -84, -79, -21, -31, 114, 41, -73, 97, -100, 93, -29, -96, -57, -21, -102, 21, -121, -96, 84, -57, 113, -9, -119, 43, 52, -121, -31, -4, -117, -38, 68, 120, 80, 0, 65, -89, -80, 82, 26, -26, 40, 7, -67, 51, -127, -128, 83, 58, 83, -114, -26, -15, -88, 73, -19, -33, -17, 47, 54, 20, 17, -64, 70, 4, 72, 48, -32, -126, 124, -108, 118, 40, 40, -91, -59, 101, -109, 90, -15, -24, 79, -66, -105, 89, -112, -40, -91, -64, -44, 74, -123, -82, 75, 74, -27, 97, 120, 106, 110, 39, -80, -14, -102, -117, -108, 55, -81, 35, 70, -126, 72, 15, -85, -15, -58, -79, -88, 56, -72, 95, -109, -77, -21, -18, 0, 41, 33, 22, -42, 123, 121, 61, -27, 47, -103, -19, 95, -82, 67, 97, 23, 58, -125, 5, -119};
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
    msg.setTimeStamp(0.9040113765104051);
    msg.setSource(62945U);
    msg.setSourceEntity(23U);
    msg.setDestination(40827U);
    msg.setDestinationEntity(224U);
    msg.base_lat = 0.6639764672526887;
    msg.base_lon = 0.38395196361043493;
    msg.base_time = 0.3254987570620008;
    const char tmp_msg_0[] = {-44, 35, 41, 16, 120, 15, -82, -102, 62, 88, 104, 64, 43, 93, -26, 18, 25};
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
    msg.setTimeStamp(0.7371112958096963);
    msg.setSource(30233U);
    msg.setSourceEntity(49U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(73U);
    msg.sys_id = 57818U;
    msg.priority = -15;
    msg.x = -27092;
    msg.y = -22568;
    msg.z = 30832;
    msg.t = 5228;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.6422714841814026;
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
    msg.setTimeStamp(0.5824242882859807);
    msg.setSource(44211U);
    msg.setSourceEntity(86U);
    msg.setDestination(43273U);
    msg.setDestinationEntity(239U);
    msg.sys_id = 49044U;
    msg.priority = -93;
    msg.x = 14372;
    msg.y = -3972;
    msg.z = 15818;
    msg.t = -5778;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7215324175008997;
    tmp_msg_0.lon = 0.956460986416371;
    tmp_msg_0.height = 0.30584931578757735;
    tmp_msg_0.x = 0.6974201205552117;
    tmp_msg_0.y = 0.9564420281860144;
    tmp_msg_0.z = 0.6872736681931703;
    tmp_msg_0.phi = 0.8657979868220365;
    tmp_msg_0.theta = 0.20189030837706834;
    tmp_msg_0.psi = 0.4226564403754597;
    tmp_msg_0.u = 0.2272626118342309;
    tmp_msg_0.v = 0.5532377325003356;
    tmp_msg_0.w = 0.8075703987910232;
    tmp_msg_0.p = 0.23348283291308458;
    tmp_msg_0.q = 0.24923043447991022;
    tmp_msg_0.r = 0.17904568551584688;
    tmp_msg_0.svx = 0.7932930241458628;
    tmp_msg_0.svy = 0.3187610871117762;
    tmp_msg_0.svz = 0.26913096493181365;
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
    msg.setTimeStamp(0.6806447262126463);
    msg.setSource(37239U);
    msg.setSourceEntity(133U);
    msg.setDestination(42920U);
    msg.setDestinationEntity(169U);
    msg.sys_id = 2569U;
    msg.priority = 58;
    msg.x = 28037;
    msg.y = -9580;
    msg.z = 24271;
    msg.t = -8863;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.7201136196096133;
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
    msg.setTimeStamp(0.8687466431538801);
    msg.setSource(26039U);
    msg.setSourceEntity(97U);
    msg.setDestination(5853U);
    msg.setDestinationEntity(22U);
    msg.req_id = 25470U;
    msg.type = 131U;
    msg.max_size = 17391U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9335189203775021;
    tmp_msg_0.base_lon = 0.5943783012673476;
    tmp_msg_0.base_time = 0.589832580546399;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 22891U;
    tmp_tmp_msg_0_0.priority = -56;
    tmp_tmp_msg_0_0.x = -7524;
    tmp_tmp_msg_0_0.y = -23390;
    tmp_tmp_msg_0_0.z = -1328;
    tmp_tmp_msg_0_0.t = -19131;
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.5683619546424962;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5967094925487249;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8101628151356801;
    tmp_tmp_tmp_msg_0_0_0.z_units = 65U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5858500573992192;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 90U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.4055209148345339;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.7513424234650379;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FQJCRBMGLTBKJSFAEVJYSDVXCZVKFJPHDSGNUYYWICAYMWINKDBNNXMPNENZVTZKBTGADHPXSHWKET");
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
    msg.setTimeStamp(0.7214232399130408);
    msg.setSource(28053U);
    msg.setSourceEntity(111U);
    msg.setDestination(36575U);
    msg.setDestinationEntity(244U);
    msg.req_id = 16779U;
    msg.type = 142U;
    msg.max_size = 4332U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7711211421545814;
    tmp_msg_0.base_lon = 0.4301325467136077;
    tmp_msg_0.base_time = 0.6220798160760393;
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
    msg.setTimeStamp(0.6690253571268437);
    msg.setSource(25830U);
    msg.setSourceEntity(206U);
    msg.setDestination(42332U);
    msg.setDestinationEntity(248U);
    msg.req_id = 2079U;
    msg.type = 211U;
    msg.max_size = 6756U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.43949586965344356;
    tmp_msg_0.base_lon = 0.9094120629277127;
    tmp_msg_0.base_time = 0.21660454437774235;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 22947U;
    tmp_tmp_msg_0_0.priority = -5;
    tmp_tmp_msg_0_0.x = 8390;
    tmp_tmp_msg_0_0.y = -4774;
    tmp_tmp_msg_0_0.z = 11037;
    tmp_tmp_msg_0_0.t = -20203;
    IMC::AirSaturation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7838720355344937;
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
    msg.setTimeStamp(0.1473454475134245);
    msg.setSource(24129U);
    msg.setSourceEntity(56U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(205U);
    msg.original_source = 23036U;
    msg.destination = 34759U;
    msg.timeout = 0.3775232664455924;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 63U;
    tmp_msg_0.tas2acc_pgain = 0.2970697192532167;
    tmp_msg_0.bank2p_pgain = 0.39985007643994797;
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
    msg.setTimeStamp(0.22849947790291836);
    msg.setSource(43576U);
    msg.setSourceEntity(196U);
    msg.setDestination(31876U);
    msg.setDestinationEntity(232U);
    msg.original_source = 63892U;
    msg.destination = 3013U;
    msg.timeout = 0.42162111667168733;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 183U;
    tmp_msg_0.period = 473199744U;
    tmp_msg_0.duty_cycle = 3060924845U;
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
    msg.setTimeStamp(0.7976674974342952);
    msg.setSource(53336U);
    msg.setSourceEntity(75U);
    msg.setDestination(60013U);
    msg.setDestinationEntity(8U);
    msg.original_source = 10380U;
    msg.destination = 43412U;
    msg.timeout = 0.22529421291560647;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 30410U;
    tmp_msg_0.priority = -59;
    tmp_msg_0.x = 18835;
    tmp_msg_0.y = -32086;
    tmp_msg_0.z = 31082;
    tmp_msg_0.t = 16311;
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("VCHEQOIJCNKPJSOOHPMWCCIKFLPLKRSBADBYWLOKHJIVBGAZZSSLXDEJGUPCRPXYTONNKCGKBVZDRFF");
    tmp_tmp_msg_0_0.dest_man.assign("PMZWTZIFGMNMLIDGVAMKCGIFSVHKKFWDESUEECYNXQOMPTJLPQXBJBDVUVMJHMUB");
    tmp_tmp_msg_0_0.conditions.assign("WPKLKIMFMATGPLRGXNOVROLLVUKHJRTBSXXCWTQMDJBNYQBMPJLEUCAGVJGUXHRHLKMDENOTITQUFYIZXAFOOTARAPUNFFAOCSYIYDTTUJBEJMWQEIZFCWAYYCZYHWNKCDQ");
    IMC::PathControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 916162510U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.9879571576610627;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.7830560380180313;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.43482887728978925;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 109U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.5839225957226366;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.72878678620896;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.30485356347948844;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 36U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.07652378265727866;
    tmp_tmp_tmp_msg_0_0_0.flags = 96U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.38677729964398355;
    tmp_tmp_tmp_msg_0_0_0.y = 0.9977256403397109;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7309976326453987;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.6804598036140299;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.38833723361501993;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.3569965124532277;
    tmp_tmp_tmp_msg_0_0_0.course_error = 0.4878472214729057;
    tmp_tmp_tmp_msg_0_0_0.eta = 57730U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.2515038502526039);
    msg.setSource(53363U);
    msg.setSourceEntity(210U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(213U);
    msg.id = 64U;
    msg.range = 0.9441411438619601;

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
    msg.setTimeStamp(0.16692681322523006);
    msg.setSource(28778U);
    msg.setSourceEntity(161U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(34U);
    msg.id = 142U;
    msg.range = 0.17497826609763445;

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
    msg.setTimeStamp(0.9232435128857658);
    msg.setSource(24372U);
    msg.setSourceEntity(91U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(170U);
    msg.id = 132U;
    msg.range = 0.2069765159350644;

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
    msg.setTimeStamp(0.6790297385417393);
    msg.setSource(11654U);
    msg.setSourceEntity(211U);
    msg.setDestination(53720U);
    msg.setDestinationEntity(36U);
    msg.beacon.assign("EMPBWGMNVBSJXIGRUHICAEJPVFBMZLXTFSDWARLTFJGERWFHGQFVEHLAMXYKWOOSUICCLPPOZNZIMUNYEWTNVHUPDDQJNBYZOPIJANYCTDFQAOXTYXRCBYQQUPJSKZLDEOEDTBPUIBH");
    msg.lat = 0.21190069182094295;
    msg.lon = 0.20432274339423462;
    msg.depth = 0.00559725636201136;
    msg.query_channel = 200U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 204U;

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
    msg.setTimeStamp(0.7142133699867026);
    msg.setSource(57248U);
    msg.setSourceEntity(84U);
    msg.setDestination(54507U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("UHHMJETNZHKMQZPYNGUOFEJCQCTATYJDVQCGPWDFBFFHXMZQQVOWZLVFILWLDSVIEPNRISBYWYGBJCAKLNPHCXLFIUYLGCUGUVSKMTBQLWVPMVHTMOAADQLODWJDZOFRXQXJSYMLQXSRVFZYKNCKSVJPRLMOGDKRTGBXU");
    msg.lat = 0.492444428234721;
    msg.lon = 0.34318312607604007;
    msg.depth = 0.1229910606828456;
    msg.query_channel = 242U;
    msg.reply_channel = 3U;
    msg.transponder_delay = 26U;

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
    msg.setTimeStamp(0.5810781463714);
    msg.setSource(64030U);
    msg.setSourceEntity(88U);
    msg.setDestination(58337U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("ZNAITHPFSLCSDHIKVTJRMIICZYPOWNRWCSSTONVNBBOOKVJKABETLKWQELSYHBIAWNIGKQHZPSKMNEZLKXKCPGGFYODQTEEZHZRSGMLZEHDHWUCDDLRJQZMDOMWFBUBGBJXTWFUVHENJLLDVPHAIYAUPTJMFCAXCSVXQJUDUTRYSYOEGYKNIDJMEYTAVXHBXFIJQO");
    msg.lat = 0.38840532127719896;
    msg.lon = 0.6501499755043769;
    msg.depth = 0.6959161475770673;
    msg.query_channel = 133U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 253U;

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
    msg.setTimeStamp(0.014051175131611249);
    msg.setSource(13815U);
    msg.setSourceEntity(121U);
    msg.setDestination(52765U);
    msg.setDestinationEntity(198U);
    msg.op = 192U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PJQOFLMARVHFUAYRDUNNJWBLDUNX");
    tmp_msg_0.lat = 0.22338930373000154;
    tmp_msg_0.lon = 0.6258316037716256;
    tmp_msg_0.depth = 0.030791348419866638;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 131U;
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
    msg.setTimeStamp(0.3731682181042759);
    msg.setSource(21909U);
    msg.setSourceEntity(47U);
    msg.setDestination(61849U);
    msg.setDestinationEntity(82U);
    msg.op = 3U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CHVOABNSMCHBBIWKPPESQTIGYOSOMFCDHCCPKRDRLLGOPCTWVBEJMGFNYLUCYYTLMAFZBJIFYXUIWKSBXLKEJKYJJVNZVHAZUEQPPWURLPSZADRANIABARRQVHVGTNQVXHTLQMQYJCUDDCEKFPJSGWHFJWZKSOSZYQNIIKODQUFDTLKRUIWTMFTSVNBJXVDRMFIMXUGXZKQP");
    tmp_msg_0.lat = 0.9944678193293964;
    tmp_msg_0.lon = 0.5684002391068148;
    tmp_msg_0.depth = 0.37183434402601867;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 40U;
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
    msg.setTimeStamp(0.1539357704873604);
    msg.setSource(49302U);
    msg.setSourceEntity(99U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(102U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.6924923898607321);
    msg.setSource(63355U);
    msg.setSourceEntity(193U);
    msg.setDestination(13566U);
    msg.setDestinationEntity(98U);
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
    msg.setTimeStamp(0.39600071905099554);
    msg.setSource(23831U);
    msg.setSourceEntity(123U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(169U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("WYLZUDSCJDYIFKMRANPZEUKIHGMRLAJJMSOYFCHTIQDWUIZAMWXREYIDROHQMXQKXVZSVBUBSGSDDFTNQVVPEUBKPPNYYAPXHYZCZESUKBETTCBVDFKXZHVSOQUABRDMJOXPKALGQGBTAKTHBJE");
    tmp_msg_0.text.assign("RCTGDZFQFFVANWDKZNZYKLADYZKGBNTMESBVFOVOMQXCNIESJDWYEATYWYYSHUPVJZVNSRYKTUWLREUJVWNEKNFOXPXUAIHPPGGOGHMQDLSOPQLXLSUMYIMWHITQDWTFJKBJBPESLPHBJSGNAAQQGGAJOUWPUHEFLIV");
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
    msg.setTimeStamp(0.5430014237381151);
    msg.setSource(48594U);
    msg.setSourceEntity(139U);
    msg.setDestination(26993U);
    msg.setDestinationEntity(76U);
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("GYZLEFTOTOCQYLNXALETXFKMFOCRDFISLZUYPVKFPMWAYGLPHTMTAZEIPHXDNKVFBQCVNRGVXYXSWHMEEHJCIVOPPCOJEUNBFBUGDAXTCRJSZNBIRSYRUDKLKJQNMYUTMDLKFDLRISCYUQHSJTASSJAUZIDDRBUOVZZNHBQHKQPQOBIHMKOXGJPIWWCEEECGXOVXG");
    tmp_msg_0.op = 168U;
    tmp_msg_0.lat = 0.10173910334843295;
    tmp_msg_0.lon = 0.8384448891075725;
    tmp_msg_0.height = 0.04423116396877602;
    tmp_msg_0.x = 0.6889965066146951;
    tmp_msg_0.y = 0.05379272033994631;
    tmp_msg_0.z = 0.5115557539685744;
    tmp_msg_0.phi = 0.8201934501688548;
    tmp_msg_0.theta = 0.06506800898435361;
    tmp_msg_0.psi = 0.6097943364648841;
    tmp_msg_0.vx = 0.10961752486547138;
    tmp_msg_0.vy = 0.8218998186260841;
    tmp_msg_0.vz = 0.9583594218100332;
    tmp_msg_0.p = 0.12799680883465048;
    tmp_msg_0.q = 0.5333599931295097;
    tmp_msg_0.r = 0.35239022945490417;
    tmp_msg_0.svx = 0.008438202547111917;
    tmp_msg_0.svy = 0.07493914285049441;
    tmp_msg_0.svz = 0.44400163230324574;
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
    msg.setTimeStamp(0.40605772268956075);
    msg.setSource(29092U);
    msg.setSourceEntity(149U);
    msg.setDestination(11313U);
    msg.setDestinationEntity(19U);
    msg.op = 80U;
    msg.system.assign("XSURTJICYZTCWAJZTPWLZTRFPNPCMOQEVJVBTPHUJDOTXSQWJQCXNHABUAOEUAESKVBGVYBTCZOP");
    msg.range = 0.9424553684985382;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 73U;
    tmp_msg_0.system.assign("SKLWDITNSHJLDMTKARGVPSPHPSUVOIFMZSDCPJGHAJNOXHANCAAMONLBZCINLLIDJCPARCBUVLDWILZLYLIFVERFDUQJVPAOSEFGDEMNJEGTEMVURNGUTBUGKXPFXJRQXXQUERBKQTWBWUGHCTITIVWLKHWPZCRPQJYYYBUKVQABHZWNESNMVYODOQFAIOGDOTIRXRYBQSAEPZXFHBYRH");
    tmp_msg_0.range = 0.6930825108933446;
    IMC::PlanDBInformation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("QXUNDSZLNXBFRIWVPNUYMFSERLZICVRODETYACPYIYJOHBBEIGIPGNTJDTPFNMANRDJBEXUHMIPAUVUIGZMMHJGPNYLYZQMYSKCSKBIDNQCDXZXHWJZLQJSXLGVASJWCPTQJHYASAPFFNKVVQOZPWCKCHGQCQPFFYOZFDXRHHBHOMUUBSIGRBETVO");
    tmp_tmp_msg_0_0.plan_size = 3222U;
    tmp_tmp_msg_0_0.change_time = 0.8207156087181494;
    tmp_tmp_msg_0_0.change_sid = 24886U;
    tmp_tmp_msg_0_0.change_sname.assign("HCUOOQMUBGPIFPCPEEXNOSABERDOIBINTFRIMLDIVVNGVSVPCTLKTPAEMMJYBJKSGTQNZLLKGHVNWBMAUXHUC");
    const char tmp_tmp_tmp_msg_0_0_0[] = {-115, -75, -98, -55, 31, 114, 44, 57, -100, 56, 85, -10, -60, 18, -72, 64, -91, 56, 32, -74, 63, 51, -71, 105, 122, 16, 75, 54, 96, 17, 40, 10, 73, -30, 5, -49, -27, 64, -8, -74, -128, 123, 32, 30, -47, -39, 91, -97, 46, -59, 33, 92, 88, 37, 15, 36, -30, 26, -84, 120, -31, 90, -20, 104, -88, -2, 16, 111, 11, 65, 122, -70, 52, -43, 29, 28, 69, 58, 119, -103, -35, -58, 6, -72, -3, 26, -83, 82, -79, 2, 85, 89, 74, 113, -94, -10, -22, 13, -118, -23, -54, 107, -102, -25, 24, -15, 41, -118, -29, -70, -16, 84, 71, -59, 61, 91, 32, 4, -114, -58, -14, 47, -93, -122, 50, 49, -6, 39, -13, -58};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4051712393315753);
    msg.setSource(17743U);
    msg.setSourceEntity(179U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(12U);
    msg.op = 204U;
    msg.system.assign("ZYKUOJHTIUVRGLCVPUEASNGAPNQBCTYBZKQGPYTNLSBSMFTHJXOGVXEJVOVDEYGRUBWEWZIBOHIBZLFHAJCQMFHVKORCLIMMJTYJDKYLAYVXCXOZWDDKPALFKVIHSHMSSQQTWBAANTZRMBPFFCWPWKESDQMTYGZIRRFXBETQILUMPDHCRZJCCAEXFVFAGWNU");
    msg.range = 0.4267953090469355;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.7990947029166261;
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
    msg.setTimeStamp(0.7674492510016825);
    msg.setSource(19290U);
    msg.setSourceEntity(231U);
    msg.setDestination(38790U);
    msg.setDestinationEntity(135U);
    msg.op = 120U;
    msg.system.assign("GJPLLVCRRNHSDMZXAQBZKWGOJAEEOGUDPUXKHXTTCLFMWZVGAOIYYQRNYQLLMJIIZBNIBDPODMYNDNWKRROYFZFJHXEQJXSVVUBBAXIHAFWHKKMDVEBVKETPVQCKYZSEZHQRVWGIUREPVIGACQYIPOKANJGJFEVXFEOHL");
    msg.range = 0.8679905388363768;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("FDLDIDQHDNVWRUWGNPLYKVHPOTXVASECHJXATPGRTTNIXNTZFESQBTARJXUFMQBETSBBGBUDCQCSJVIJLNYQVKZLMNZZFZS");
    tmp_tmp_msg_0_0.lat = 0.009543326632287852;
    tmp_tmp_msg_0_0.lon = 0.2019706545982921;
    tmp_tmp_msg_0_0.depth = 0.48626150219074193;
    tmp_tmp_msg_0_0.query_channel = 240U;
    tmp_tmp_msg_0_0.reply_channel = 19U;
    tmp_tmp_msg_0_0.transponder_delay = 204U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.559390528712853;
    tmp_msg_0.y = 0.9029193079021579;
    tmp_msg_0.var_x = 0.33269644312419566;
    tmp_msg_0.var_y = 0.49816933274690645;
    tmp_msg_0.distance = 0.7498120526711392;
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
    msg.setTimeStamp(0.2520862300344513);
    msg.setSource(50715U);
    msg.setSourceEntity(183U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.42168679577513435);
    msg.setSource(18947U);
    msg.setSourceEntity(246U);
    msg.setDestination(13969U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.2640132329574756);
    msg.setSource(1009U);
    msg.setSourceEntity(137U);
    msg.setDestination(51950U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.26953133291189213);
    msg.setSource(46080U);
    msg.setSourceEntity(199U);
    msg.setDestination(11221U);
    msg.setDestinationEntity(62U);
    msg.list.assign("YCGOKKDYIFZRMEKLXRWIUVTWYEYRJMINPLTKVCRYZAYRZIEUPZVCEXLPDYFUMVPSMUEESCFIFTDTFWAEGQZWVAEKFWZSWKRHONBOBQIAQHVJSMXKUKKHHEJXNFUOIFPNGPEGBQIMWMOSORVSLOGUBILLQJHCPHHDRYAQGZTSNDWVSJFNADNTGBADXXYCQYCAJBRMLNBTFOVAPXLJOHTJNJZRQXUPCUZV");

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
    msg.setTimeStamp(0.12735920967875503);
    msg.setSource(6016U);
    msg.setSourceEntity(40U);
    msg.setDestination(28138U);
    msg.setDestinationEntity(201U);
    msg.list.assign("FZYHYDBOCKZLUWCSMVWPHMTNZMDOSGFOEQNDROEHOEJVNZRLJUXQDKWSKCZLHZPCLFYKSPTWITHPNHYAMRWPSNNHSHPVOPYRIKAJEZBTJUXSRFXGXHZGKBJRABLQIIBAMELMBQCDZTDXVEYGMNEBSGCAOLRDUTXDJGFUCKYAXYQMZCENQRXFCFGVYSWMARRINVTTOJKNTVBAIGADEICUESYIWBMVULGBI");

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
    msg.setTimeStamp(0.7536767489201015);
    msg.setSource(8863U);
    msg.setSourceEntity(153U);
    msg.setDestination(5710U);
    msg.setDestinationEntity(202U);
    msg.list.assign("TKXHYYBRIUDFANGKBVLAKVVUKXHSGXRCQJLUWRBWNTJYJTHFFICRYGLUARUQHOVAQZTAJPRBVH");

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
    msg.setTimeStamp(0.46453273997913624);
    msg.setSource(63456U);
    msg.setSourceEntity(178U);
    msg.setDestination(31285U);
    msg.setDestinationEntity(191U);
    msg.peer.assign("RUAQISWHFOZKKVQKIRCBQKCFESOAGZNDLJQPMDVJQLLLGORYUWPHCOGDISLCKNTOYLGJBAEJNFPEXRNNWPDUJWXJMWZEGQOJCVRXRYUTIMTU");
    msg.rssi = 0.7466222146370648;
    msg.integrity = 30437U;

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
    msg.setTimeStamp(0.4712549503751742);
    msg.setSource(42037U);
    msg.setSourceEntity(240U);
    msg.setDestination(18834U);
    msg.setDestinationEntity(94U);
    msg.peer.assign("AABVYHQKBHOPGYWKRUFWUEZBUKMRPJJFQVFRXVPMHNPJUGDCOIONGFNIPBQILVJQNLGEGSHCLANUFSZZUBSEOXFINLBPERWWYKTHVMCZKISREVLZDLAKDUDXKHEIXCMDHECHKPNFW");
    msg.rssi = 0.31273665059972533;
    msg.integrity = 2042U;

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
    msg.setTimeStamp(0.8964962442943699);
    msg.setSource(56831U);
    msg.setSourceEntity(57U);
    msg.setDestination(15119U);
    msg.setDestinationEntity(92U);
    msg.peer.assign("XFMAWIBSQBVKEOOGVXSEDFNTQNXOFMTQSATJKVTMSMJDDHEGYHEZHRRBFDADCTOZESNUIGUZLDDCUTEPEYOKOLBIQSRVTDKBYYACRIWAFNMUQPNXRVGFKBMCHPKQWGNSIVBTKWXLJNLXCHEXZUPRYFMYBRQLPJZVIYWJCEDXWCIQJGWPZOOKSCHVBKTWJSRYVZOIZMZUNMYPRZMJUFKJILLUAHGNTWCFAGQHHGILB");
    msg.rssi = 0.6065972185994517;
    msg.integrity = 26557U;

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
    msg.setTimeStamp(0.7698689458129079);
    msg.setSource(33223U);
    msg.setSourceEntity(164U);
    msg.setDestination(37371U);
    msg.setDestinationEntity(110U);
    msg.value = 7388;

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
    msg.setTimeStamp(0.6605990982646466);
    msg.setSource(31429U);
    msg.setSourceEntity(193U);
    msg.setDestination(65416U);
    msg.setDestinationEntity(95U);
    msg.value = -24007;

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
    msg.setTimeStamp(0.8086860421269977);
    msg.setSource(53333U);
    msg.setSourceEntity(242U);
    msg.setDestination(19896U);
    msg.setDestinationEntity(52U);
    msg.value = -29904;

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
    msg.setTimeStamp(0.5190855571961207);
    msg.setSource(20207U);
    msg.setSourceEntity(178U);
    msg.setDestination(26059U);
    msg.setDestinationEntity(252U);
    msg.value = 0.4390371578228085;

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
    msg.setTimeStamp(0.22424994119250596);
    msg.setSource(23737U);
    msg.setSourceEntity(164U);
    msg.setDestination(21449U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5403582715050287;

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
    msg.setTimeStamp(0.05010545652989584);
    msg.setSource(29838U);
    msg.setSourceEntity(228U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(62U);
    msg.value = 0.6490936237430276;

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
    msg.setTimeStamp(0.12212004149907196);
    msg.setSource(22991U);
    msg.setSourceEntity(236U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(43U);
    msg.value = 0.16870006630440182;

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
    msg.setTimeStamp(0.06518687872446505);
    msg.setSource(4797U);
    msg.setSourceEntity(74U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(193U);
    msg.value = 0.42279318015294065;

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
    msg.setTimeStamp(0.6815893218621496);
    msg.setSource(926U);
    msg.setSourceEntity(61U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5014575364639272;

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
    msg.setTimeStamp(0.06804650846508042);
    msg.setSource(3699U);
    msg.setSourceEntity(137U);
    msg.setDestination(65499U);
    msg.setDestinationEntity(67U);
    msg.validity = 65249U;
    msg.type = 97U;
    msg.utc_year = 33079U;
    msg.utc_month = 219U;
    msg.utc_day = 107U;
    msg.utc_time = 0.8826069062039695;
    msg.lat = 0.8606960376104745;
    msg.lon = 0.20802530386947948;
    msg.height = 0.9958218356336016;
    msg.satellites = 183U;
    msg.cog = 0.7312683824832757;
    msg.sog = 0.2474579476548292;
    msg.hdop = 0.9294459428687866;
    msg.vdop = 0.6628253077315545;
    msg.hacc = 0.0034814030378113037;
    msg.vacc = 0.09070198484579994;

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
    msg.setTimeStamp(0.9269544633134782);
    msg.setSource(28134U);
    msg.setSourceEntity(171U);
    msg.setDestination(8347U);
    msg.setDestinationEntity(6U);
    msg.validity = 41751U;
    msg.type = 94U;
    msg.utc_year = 3634U;
    msg.utc_month = 228U;
    msg.utc_day = 129U;
    msg.utc_time = 0.6412777326838321;
    msg.lat = 0.7931641001511868;
    msg.lon = 0.617637321739805;
    msg.height = 0.028113840361061904;
    msg.satellites = 57U;
    msg.cog = 0.29747963785377884;
    msg.sog = 0.023856120637807177;
    msg.hdop = 0.7480022516692039;
    msg.vdop = 0.8781001360407237;
    msg.hacc = 0.3399717664849986;
    msg.vacc = 0.39988398104624867;

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
    msg.setTimeStamp(0.591457558582602);
    msg.setSource(53921U);
    msg.setSourceEntity(213U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(112U);
    msg.validity = 61162U;
    msg.type = 91U;
    msg.utc_year = 59471U;
    msg.utc_month = 92U;
    msg.utc_day = 52U;
    msg.utc_time = 0.8081234378250357;
    msg.lat = 0.8347829322969635;
    msg.lon = 0.44149097648979063;
    msg.height = 0.935935836202;
    msg.satellites = 50U;
    msg.cog = 0.21536235124517855;
    msg.sog = 0.11860893593384225;
    msg.hdop = 0.6979756032084329;
    msg.vdop = 0.5580919634256364;
    msg.hacc = 0.6540355438592373;
    msg.vacc = 0.918738165081143;

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
    msg.setTimeStamp(0.3265074343778078);
    msg.setSource(19101U);
    msg.setSourceEntity(118U);
    msg.setDestination(19196U);
    msg.setDestinationEntity(212U);
    msg.time = 0.17092033290218345;
    msg.phi = 0.6526151164323453;
    msg.theta = 0.7845135563681976;
    msg.psi = 0.33850740126685763;
    msg.psi_magnetic = 0.4969897506779061;

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
    msg.setTimeStamp(0.9808859269920019);
    msg.setSource(45774U);
    msg.setSourceEntity(226U);
    msg.setDestination(59099U);
    msg.setDestinationEntity(185U);
    msg.time = 0.7593756375839936;
    msg.phi = 0.7894887176585532;
    msg.theta = 0.5766469331000047;
    msg.psi = 0.12524743303057517;
    msg.psi_magnetic = 0.6243222873453097;

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
    msg.setTimeStamp(0.04602972390500737);
    msg.setSource(17519U);
    msg.setSourceEntity(178U);
    msg.setDestination(25499U);
    msg.setDestinationEntity(113U);
    msg.time = 0.031518496937692264;
    msg.phi = 0.6189189767534048;
    msg.theta = 0.2623022819915277;
    msg.psi = 0.28663874060558336;
    msg.psi_magnetic = 0.32650703512590906;

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
    msg.setTimeStamp(0.48775031941570934);
    msg.setSource(601U);
    msg.setSourceEntity(11U);
    msg.setDestination(65080U);
    msg.setDestinationEntity(159U);
    msg.time = 0.1487502198979297;
    msg.x = 0.19595723091259487;
    msg.y = 0.8585432905218535;
    msg.z = 0.30621634482926685;
    msg.timestep = 0.03612289498063337;

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
    msg.setTimeStamp(0.15626630550962317);
    msg.setSource(39857U);
    msg.setSourceEntity(236U);
    msg.setDestination(61327U);
    msg.setDestinationEntity(232U);
    msg.time = 0.8002485896620279;
    msg.x = 0.9811347180667308;
    msg.y = 0.933438486022908;
    msg.z = 0.0376419692981832;
    msg.timestep = 0.23310139963832022;

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
    msg.setTimeStamp(0.7882345617514783);
    msg.setSource(42290U);
    msg.setSourceEntity(45U);
    msg.setDestination(9544U);
    msg.setDestinationEntity(155U);
    msg.time = 0.006128009260746081;
    msg.x = 0.31508740768287047;
    msg.y = 0.9588086013722108;
    msg.z = 0.9609151311152908;
    msg.timestep = 0.3358186811053995;

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
    msg.setTimeStamp(0.48157015735524045);
    msg.setSource(57372U);
    msg.setSourceEntity(235U);
    msg.setDestination(34728U);
    msg.setDestinationEntity(237U);
    msg.time = 0.9367559086138714;
    msg.x = 0.6188760682482578;
    msg.y = 0.7522473486345699;
    msg.z = 0.7490766748715314;

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
    msg.setTimeStamp(0.04887654851241596);
    msg.setSource(10960U);
    msg.setSourceEntity(196U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(168U);
    msg.time = 0.9532650756297282;
    msg.x = 0.7887792486535022;
    msg.y = 0.8862199862898635;
    msg.z = 0.26152305999314374;

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
    msg.setTimeStamp(0.16155978915364333);
    msg.setSource(37080U);
    msg.setSourceEntity(143U);
    msg.setDestination(5462U);
    msg.setDestinationEntity(125U);
    msg.time = 0.9413751245984542;
    msg.x = 0.0649622823671544;
    msg.y = 0.09464127784323739;
    msg.z = 0.430285983930462;

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
    msg.setTimeStamp(0.6594541092991234);
    msg.setSource(39803U);
    msg.setSourceEntity(222U);
    msg.setDestination(34066U);
    msg.setDestinationEntity(64U);
    msg.time = 0.47730852652208133;
    msg.x = 0.46919686281684325;
    msg.y = 0.03395990917939096;
    msg.z = 0.11675908575318317;

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
    msg.setTimeStamp(0.8030617162814881);
    msg.setSource(48868U);
    msg.setSourceEntity(240U);
    msg.setDestination(7954U);
    msg.setDestinationEntity(251U);
    msg.time = 0.03306961356893945;
    msg.x = 0.11530779450813144;
    msg.y = 0.4708185946940737;
    msg.z = 0.5354495524681736;

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
    msg.setTimeStamp(0.6209691597924129);
    msg.setSource(16130U);
    msg.setSourceEntity(166U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(113U);
    msg.time = 0.5532756471351379;
    msg.x = 0.918475727104157;
    msg.y = 0.5761288386509333;
    msg.z = 0.008885138296257589;

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
    msg.setTimeStamp(0.44624842602043535);
    msg.setSource(26619U);
    msg.setSourceEntity(203U);
    msg.setDestination(28155U);
    msg.setDestinationEntity(226U);
    msg.time = 0.11748463115873209;
    msg.x = 0.38689142349625816;
    msg.y = 0.3865865614565932;
    msg.z = 0.9948063142032338;

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
    msg.setTimeStamp(0.41569650512749445);
    msg.setSource(48578U);
    msg.setSourceEntity(141U);
    msg.setDestination(44427U);
    msg.setDestinationEntity(247U);
    msg.time = 0.5559973165931265;
    msg.x = 0.6676830779410277;
    msg.y = 0.387912589985829;
    msg.z = 0.9235504910344444;

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
    msg.setTimeStamp(0.4669361772753);
    msg.setSource(2294U);
    msg.setSourceEntity(229U);
    msg.setDestination(8292U);
    msg.setDestinationEntity(202U);
    msg.time = 0.45756841692584904;
    msg.x = 0.7188562231287544;
    msg.y = 0.47657070817234326;
    msg.z = 0.8993233870053043;

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
    msg.setTimeStamp(0.5554879714049973);
    msg.setSource(8909U);
    msg.setSourceEntity(101U);
    msg.setDestination(6401U);
    msg.setDestinationEntity(135U);
    msg.validity = 85U;
    msg.x = 0.1444423958137837;
    msg.y = 0.7803289692816286;
    msg.z = 0.7577811752762347;

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
    msg.setTimeStamp(0.5774494001700492);
    msg.setSource(34911U);
    msg.setSourceEntity(241U);
    msg.setDestination(41609U);
    msg.setDestinationEntity(209U);
    msg.validity = 76U;
    msg.x = 0.5595415672301295;
    msg.y = 0.07625516182244396;
    msg.z = 0.029528293679991102;

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
    msg.setTimeStamp(0.07544725591093271);
    msg.setSource(24744U);
    msg.setSourceEntity(244U);
    msg.setDestination(20761U);
    msg.setDestinationEntity(219U);
    msg.validity = 37U;
    msg.x = 0.12570118268003405;
    msg.y = 0.5203716409027499;
    msg.z = 0.8794862534632183;

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
    msg.setTimeStamp(0.9988578418767418);
    msg.setSource(53655U);
    msg.setSourceEntity(6U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(78U);
    msg.validity = 178U;
    msg.x = 0.8303932334825196;
    msg.y = 0.34696390565738533;
    msg.z = 0.027962418624634777;

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
    msg.setTimeStamp(0.9801425480863568);
    msg.setSource(106U);
    msg.setSourceEntity(27U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(184U);
    msg.validity = 185U;
    msg.x = 0.9315499932034116;
    msg.y = 0.2838240794981217;
    msg.z = 0.6110170980283591;

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
    msg.setTimeStamp(0.0740296895414928);
    msg.setSource(4666U);
    msg.setSourceEntity(96U);
    msg.setDestination(18556U);
    msg.setDestinationEntity(97U);
    msg.validity = 164U;
    msg.x = 0.5933410986153291;
    msg.y = 0.8095894799306675;
    msg.z = 0.9319134075793106;

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
    msg.setTimeStamp(0.9596921017504332);
    msg.setSource(3960U);
    msg.setSourceEntity(16U);
    msg.setDestination(42321U);
    msg.setDestinationEntity(88U);
    msg.time = 0.8493605468365991;
    msg.x = 0.6646477551931547;
    msg.y = 0.3879928300817944;
    msg.z = 0.8542063541121847;

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
    msg.setTimeStamp(0.4559824927228644);
    msg.setSource(43411U);
    msg.setSourceEntity(91U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(217U);
    msg.time = 0.8966853733750529;
    msg.x = 0.5288984628591339;
    msg.y = 0.30924456206909545;
    msg.z = 0.6561840661249952;

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
    msg.setTimeStamp(0.366673748875457);
    msg.setSource(48374U);
    msg.setSourceEntity(244U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(148U);
    msg.time = 0.1877978615393595;
    msg.x = 0.7265295774269873;
    msg.y = 0.6956584716045335;
    msg.z = 0.6707704986221494;

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
    msg.setTimeStamp(0.21929170937326614);
    msg.setSource(22115U);
    msg.setSourceEntity(160U);
    msg.setDestination(25277U);
    msg.setDestinationEntity(41U);
    msg.validity = 163U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.22895785330217744;
    tmp_msg_0.beam_height = 0.27203403889281863;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.16488474045882695;

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
    msg.setTimeStamp(0.5052260821713895);
    msg.setSource(49826U);
    msg.setSourceEntity(15U);
    msg.setDestination(63255U);
    msg.setDestinationEntity(240U);
    msg.validity = 161U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3324499217134217;
    tmp_msg_0.beam_height = 0.9471389909266653;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9576908630197306;

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
    msg.setTimeStamp(0.6173566104165824);
    msg.setSource(56939U);
    msg.setSourceEntity(178U);
    msg.setDestination(64786U);
    msg.setDestinationEntity(135U);
    msg.validity = 188U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.44481742833277926;
    tmp_msg_0.y = 0.6550369862850732;
    tmp_msg_0.z = 0.9449545025445686;
    tmp_msg_0.phi = 0.9643112520210632;
    tmp_msg_0.theta = 0.6064926922936336;
    tmp_msg_0.psi = 0.9067508710587382;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5521686954407935;

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
    msg.setTimeStamp(0.2632100230498656);
    msg.setSource(22318U);
    msg.setSourceEntity(185U);
    msg.setDestination(27390U);
    msg.setDestinationEntity(163U);
    msg.value = 0.9037586759454264;

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
    msg.setTimeStamp(0.2238657793276887);
    msg.setSource(33593U);
    msg.setSourceEntity(52U);
    msg.setDestination(47086U);
    msg.setDestinationEntity(176U);
    msg.value = 0.19049433305863628;

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
    msg.setTimeStamp(0.4738736672558278);
    msg.setSource(49205U);
    msg.setSourceEntity(203U);
    msg.setDestination(16423U);
    msg.setDestinationEntity(88U);
    msg.value = 0.608643871939003;

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
    msg.setTimeStamp(0.9538023158948219);
    msg.setSource(62280U);
    msg.setSourceEntity(41U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(100U);
    msg.value = 0.031528674604854534;

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
    msg.setTimeStamp(0.2506241546392771);
    msg.setSource(34970U);
    msg.setSourceEntity(233U);
    msg.setDestination(19556U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9517026714294103;

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
    msg.setTimeStamp(0.5372020927346499);
    msg.setSource(20496U);
    msg.setSourceEntity(100U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5384516519243353;

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
    msg.setTimeStamp(0.7181189096190119);
    msg.setSource(65307U);
    msg.setSourceEntity(190U);
    msg.setDestination(7700U);
    msg.setDestinationEntity(230U);
    msg.value = 0.14825153649599765;

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
    msg.setTimeStamp(0.012919835057437323);
    msg.setSource(63957U);
    msg.setSourceEntity(11U);
    msg.setDestination(13792U);
    msg.setDestinationEntity(131U);
    msg.value = 0.10275714704351657;

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
    msg.setTimeStamp(0.586904701059907);
    msg.setSource(54328U);
    msg.setSourceEntity(11U);
    msg.setDestination(52075U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9241067396450412;

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
    msg.setTimeStamp(0.1447036548332371);
    msg.setSource(6133U);
    msg.setSourceEntity(8U);
    msg.setDestination(3617U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6667776872454589;

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
    msg.setTimeStamp(0.8046685905827926);
    msg.setSource(55247U);
    msg.setSourceEntity(19U);
    msg.setDestination(9103U);
    msg.setDestinationEntity(245U);
    msg.value = 0.46589799449357394;

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
    msg.setTimeStamp(0.29884655011581773);
    msg.setSource(48683U);
    msg.setSourceEntity(203U);
    msg.setDestination(45414U);
    msg.setDestinationEntity(118U);
    msg.value = 0.9669531299141837;

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
    msg.setTimeStamp(0.1423015917278816);
    msg.setSource(58511U);
    msg.setSourceEntity(238U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9851065804525135;

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
    msg.setTimeStamp(0.8321548903858769);
    msg.setSource(63825U);
    msg.setSourceEntity(186U);
    msg.setDestination(3025U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6812683668877422;

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
    msg.setTimeStamp(0.8935659157050064);
    msg.setSource(39278U);
    msg.setSourceEntity(94U);
    msg.setDestination(23869U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7513963391850152;

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
    msg.setTimeStamp(0.4856912965769671);
    msg.setSource(3077U);
    msg.setSourceEntity(46U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(107U);
    msg.value = 0.5791975619653509;

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
    msg.setTimeStamp(0.47891415519527636);
    msg.setSource(63361U);
    msg.setSourceEntity(248U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(65U);
    msg.value = 0.7786935516659359;

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
    msg.setTimeStamp(0.007743742783136276);
    msg.setSource(20736U);
    msg.setSourceEntity(9U);
    msg.setDestination(33945U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8004680484579764;

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
    msg.setTimeStamp(0.11793297146095183);
    msg.setSource(36270U);
    msg.setSourceEntity(128U);
    msg.setDestination(38612U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8153641752878914;

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
    msg.setTimeStamp(0.8598979207775729);
    msg.setSource(48532U);
    msg.setSourceEntity(246U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(243U);
    msg.value = 0.10804121882397555;

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
    msg.setTimeStamp(0.6962294458451078);
    msg.setSource(14475U);
    msg.setSourceEntity(130U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(121U);
    msg.value = 0.07952022407257009;

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
    msg.setTimeStamp(0.7654067843316988);
    msg.setSource(44471U);
    msg.setSourceEntity(161U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(146U);
    msg.value = 0.216848862026079;

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
    msg.setTimeStamp(0.010478539896573436);
    msg.setSource(22060U);
    msg.setSourceEntity(253U);
    msg.setDestination(64187U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9866094022096177;

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
    msg.setTimeStamp(0.3228348084285818);
    msg.setSource(26062U);
    msg.setSourceEntity(113U);
    msg.setDestination(58762U);
    msg.setDestinationEntity(0U);
    msg.value = 0.6852915604899493;

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
    msg.setTimeStamp(0.06972833296641379);
    msg.setSource(38103U);
    msg.setSourceEntity(100U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(105U);
    msg.direction = 0.9620811548546636;
    msg.speed = 0.3464728042871179;
    msg.turbulence = 0.06599305579991555;

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
    msg.setTimeStamp(0.9807027975070215);
    msg.setSource(47102U);
    msg.setSourceEntity(38U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(85U);
    msg.direction = 0.8748441794981311;
    msg.speed = 0.4422736812668703;
    msg.turbulence = 0.8465816724804683;

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
    msg.setTimeStamp(0.38601782412937224);
    msg.setSource(35452U);
    msg.setSourceEntity(151U);
    msg.setDestination(9583U);
    msg.setDestinationEntity(169U);
    msg.direction = 0.10957390609861906;
    msg.speed = 0.9552130429919903;
    msg.turbulence = 0.34861134046338016;

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
    msg.setTimeStamp(0.34409194974334445);
    msg.setSource(3519U);
    msg.setSourceEntity(37U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5923526224319995;

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
    msg.setTimeStamp(0.15947017698117105);
    msg.setSource(62546U);
    msg.setSourceEntity(146U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6883938835195201;

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
    msg.setTimeStamp(0.5390666219071687);
    msg.setSource(51497U);
    msg.setSourceEntity(108U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(86U);
    msg.value = 0.7874757988863178;

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
    msg.setTimeStamp(0.24062142519351615);
    msg.setSource(8145U);
    msg.setSourceEntity(79U);
    msg.setDestination(60051U);
    msg.setDestinationEntity(195U);
    msg.value.assign("IANHESQSRGKEOABECFFPKUOBXWCPLUMIGEVDIHQLZDPCJHVNPWSANAWAHFQIGCXFAKVJRIOSFVSWKXCDSXLPHGTPEFLJRAQQYGPTGDTYGUUUXMQDMABBRNQZINYJTICWJJCSKQOTMZUMVWEZHHRAUUNJMZLOEKXLLNWJMNPMTXNHF");

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
    msg.setTimeStamp(0.7156703983893825);
    msg.setSource(15934U);
    msg.setSourceEntity(147U);
    msg.setDestination(49875U);
    msg.setDestinationEntity(3U);
    msg.value.assign("MJIKQKDAUADQHBZYHEJREXVFUZSDXORQMXUJQWKOWOTPINYBEKYOBBXCHJUHLGTMPODAFIKEZQNCZITWWXURJHRRNWGRFTPSOLDDBYDSGTNBLQCLIERZMUHYPLGLJAVVDVTRAYPCJCALUCFZRBHWXNDADBMTPHGJHGFVHIOMBXEEMIVGQQCGCWMEWGIUSRLISXUGFNCXSYVVYVKSWLSKPUJNTAEZOZQXYNNSNAATFEMSPFZTMPKVWLOPJ");

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
    msg.setTimeStamp(0.6589008664342085);
    msg.setSource(56184U);
    msg.setSourceEntity(142U);
    msg.setDestination(24223U);
    msg.setDestinationEntity(51U);
    msg.value.assign("OKKCHHVNLIVUQALDWAFGYRBDGPVWLUBMOJPEGTDVXSGIOLOUMQRKLYHZTPBUFITKKNKSCSJYESTCIJMIGHWUFNVYWJMJEDGNMCQIITVKPDHZEZJBYARBFODFHTICKMWXVSJJWMEPGFTUGEUB");

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
    msg.setTimeStamp(0.9967620153214792);
    msg.setSource(35035U);
    msg.setSourceEntity(174U);
    msg.setDestination(31543U);
    msg.setDestinationEntity(218U);
    const char tmp_msg_0[] = {22, -53, 3, 67, 77, 23, 51, 19, 84, 57, -60, -21, 53, 36, -104, 62, -7, 53, 9, -80, -114, -1, 43, 11, 83, -128, 88, -113, -44, -63, 36, -33, 26, -33, -125, -121, -72, -96, 21, -121, -78, -56, 114, 62, -34, -36, -95, -66, 39, 100, -94, 71, -55, 74, 6, -93, -43, -18, -109, -1, -68, -32, 34, -37, 10, 90, 5, 57, -19, -128, 125, -9, -32, -117, 62, -23, -94, 107, 117, -97, 103, 113, 102, 12, 60, -94, -94, 102, 50, -20, 116, 50, -120, -119, -83, 6, -12, 35, 16, 85, 74, 20, 23, 44, 121, 5, -112, -112, -6, -92, -46, -29, 105, -121, 110, -98, -105, 31, 32, 75, 51, 8, 100, -108, 116, 93, 50, -50, 98};
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
    msg.setTimeStamp(0.5535910300548503);
    msg.setSource(12518U);
    msg.setSourceEntity(106U);
    msg.setDestination(21164U);
    msg.setDestinationEntity(75U);
    const char tmp_msg_0[] = {-24, 126, -86, 111, 111, 16, 124, -61, 45, 4, 38, -35, 47, 45, -111, 41, 96, 8, -89, -83, -33, 41, 57, 30, -74, 88, 50, -46, 82, -58, -103, -70, 24, -6, 50, -1, -111, 92, 119, -69, -6, -119, -35, 21, 48, -82, -118, 51, -50, 57, -116, 24, -77, 24, -126, -73, -50, 61, -27, 101, 21, -61, 23, 77, 33, -70, -96, -77, 42, -84, 53, -20, 13, 105, 100, 70, 58, -43, -70, -67, 94, 16, 26, 120, 113, 117, 4, 54, 35, -17, 105, -1, 63, 27, 4, 8, -49, -51, 53, -122, -91, -54, -107, 11, -89, 63, -127, 86, -38, -73, 2, -17, 3, 57, 74, -49, -10, -20, -32, 59, 104, 47, -120, -53};
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
    msg.setTimeStamp(0.0531964692002066);
    msg.setSource(15995U);
    msg.setSourceEntity(125U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(126U);
    const char tmp_msg_0[] = {103, -2, 103, -76, -117, -20, 92, -4, -78, -121, 120, 73, -101, 76, -114, -14, -92, -39, 90, -71, -104, 88, -52, -90, -54, -6, 56, 31, 41, 102, -126, -116, 74, 124, 43, -118, -113, 32, -120, -127, 17, -85, -28, -69, -109, -37, -69, 124, -9, -113, -39, -3, 63, 119, -6, 1, -102, -65, 54, 35, -21, 70, 18, -1, -34, -115, -94, -18, 73, 21, -24, 79, 55, 105, 34, -91, 20, 101, -101, -119, -87, 110, -32, 108, 35, -65, 49, -14, 56, 30, 44, -106, 60, -17, 70, 79, 2, 15, -14, -2, -116, -19, 71, -120, -28, -75, 25, 66, -20, 59, 37, 19, -91, -13, -107, 26, 14, -55, -96, -17, -85, 29, 45, 107, -100, 107, -116, -23, 34, 15, 82, -31, 31, -30, 109, 19, -82, -128, -54, -39, -87, 3, -57, -117, 6, 59, 123, -48, 0, -41, 123, 19, -48, -53, 77, -18, 25, -91, 113, 22, -91, -106, 41, -120, 4, -110, 16, 116, -42, 113, -88, 4, 53, 102, 95, -117, -117};
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
    msg.setTimeStamp(0.02112923458446947);
    msg.setSource(3197U);
    msg.setSourceEntity(210U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(122U);
    msg.type = 9U;
    msg.frequency = 3562503971U;
    msg.min_range = 41278U;
    msg.max_range = 28134U;
    msg.bits_per_point = 202U;
    msg.scale_factor = 0.42143214239046634;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.37557186729070346;
    tmp_msg_0.beam_height = 0.5829223375610288;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {60, 97, 66, -75, -28, 64, -17, -73, 102, -103, -30, 37, 2, 13, 111, 117, 95, -41, -56, 17, -16, -84, -13, -106, 124, -23, -1, -81};
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
    msg.setTimeStamp(0.665013858335728);
    msg.setSource(22329U);
    msg.setSourceEntity(149U);
    msg.setDestination(56607U);
    msg.setDestinationEntity(135U);
    msg.type = 27U;
    msg.frequency = 2257936787U;
    msg.min_range = 38007U;
    msg.max_range = 55786U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.5972595892917103;
    const char tmp_msg_0[] = {-41, 18, 21, 19, 1, -72, -94, 113, -40, -67, -84, -99, -29, -31, -115, -14, 14, 70, -122, 79, -89, -5, -30, 16, 75, 13, -49, -107, -3, -97, 31, 85, -46, -5, -67, 40, 9, -68, 87, 82, -124, 112, 35, 16, 98, -75, 11, -122, 52, -83, 40, 66, -11, -27, 96, 112, 73, 116, -89, -114, 105, 104, -118, 124, -35, 102, 62, -20, -76, -103, -5, -111, 37, -58, 106, 4, 22, 121, -111, 76, 66, 109, 93, -94, -82, 92, -66, 18, 2, 3, 96, 71, -51, 59, 4, 15, 86, -108, -70, 15, -86, 125, 58, -33, 5, 109, 28, -81, -15, -26, 40, -81, -108, -78, -14, 108, -114, -8, 77, -71, -96, -57, -116, 75, -75, -86, 91, -113, -10, 27, -36, -89, -41, 98, 40, 93, -68, -103, 1, -107, 63, -17, -114, 97, 82, -35, -46, 28, 97, 113, -110, 28, 99, 61, -46, -95, 2};
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
    msg.setTimeStamp(0.027744002696642456);
    msg.setSource(32111U);
    msg.setSourceEntity(218U);
    msg.setDestination(56986U);
    msg.setDestinationEntity(88U);
    msg.type = 164U;
    msg.frequency = 1261273563U;
    msg.min_range = 24506U;
    msg.max_range = 14738U;
    msg.bits_per_point = 249U;
    msg.scale_factor = 0.8589295268242844;
    const char tmp_msg_0[] = {-56, -96, 103, -90, -35, -103, -121, 29, 3, 110, 24, 85, 39, -31, -25, -18, 59, 47, 38, -48, -35, -31, -18, -96, 18, -11, -38, 53, 105, 99, 98, -32, -116, 28, 78, -116, 67, -5, -18, 116, -111, 81, 31, 101, 54, 73, -68, 87, 27, 30, -36, -86, 37, -62, 29, 36, 75, -51, -6, 56, 68, -39, 120, 30, -53, -59, -107, 10, 30, -20, 18, -17, -89, -2, 10, 76, 33, -42, 87, 53, -16, -89, -34, 119, -29, 97, -79, -104, 93, -105, -17, 47, 68, -103, -76, 57, 57, -28, 89, 72, -107, -22, 53, -26, 107, -18, -11, -17, 120, -127, -93, -119, -86, -71, 106, -59, 126, 107, 41, 35, -123, -112, -66, -80, 82, -44, -37, 71, 86, 124, -26, 93, 4, 79, -121, 51, 110, -6, 11, -18, 104, 84, -56, -71, 107, -125, 84, 106, 36, 104, 8, 4, -6, -106, 56, 126, 13, -5, -127, 86, 24, -84, 59, -99, 9, 103, 26, -77, 77, 123, -60, -51, -22, 83, -72, 66, -69, -3, 59, -2, 109, 9, 91, -33, 89, -74, -121, -128, -99, -37, -62, -85, 86, 20, 76, -94, -123, -52, 101, 42, -32, -26, 38, 121};
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
    msg.setTimeStamp(0.2065133597519081);
    msg.setSource(65184U);
    msg.setSourceEntity(119U);
    msg.setDestination(32141U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.8909807624559604);
    msg.setSource(15809U);
    msg.setSourceEntity(33U);
    msg.setDestination(20354U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.6039934964166932);
    msg.setSource(309U);
    msg.setSourceEntity(148U);
    msg.setDestination(60451U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.25458835274094205);
    msg.setSource(60893U);
    msg.setSourceEntity(194U);
    msg.setDestination(43520U);
    msg.setDestinationEntity(46U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.9408733606055951);
    msg.setSource(54337U);
    msg.setSourceEntity(169U);
    msg.setDestination(39615U);
    msg.setDestinationEntity(1U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.12673052262462325);
    msg.setSource(26762U);
    msg.setSourceEntity(134U);
    msg.setDestination(20194U);
    msg.setDestinationEntity(31U);
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
    msg.setTimeStamp(0.9808384820605687);
    msg.setSource(6331U);
    msg.setSourceEntity(129U);
    msg.setDestination(62765U);
    msg.setDestinationEntity(203U);
    msg.value = 0.10640390261815302;
    msg.confidence = 0.756041005095613;
    msg.opmodes.assign("MSEHVVGSALMFOGRRWHFNXOMZZUBOCDHOXJUSCMGEMQBQDXFJEOSZCJEEDHKSFHNPDISVYMETWGIRGUGOVNPIYIYYXVTXSWJBVHKOZEWTSTXILANQXZNRYYBDZEQYNFJBFVETHTMYPJQQZFUCACFKRKUTKCLPTRURTLNPKOUIQVQGXVKGXHTDWAVKWMAEA");

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
    msg.setTimeStamp(0.35040124072431633);
    msg.setSource(6380U);
    msg.setSourceEntity(168U);
    msg.setDestination(35883U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6371310838139096;
    msg.confidence = 0.7426237617959743;
    msg.opmodes.assign("OJTKTVZLWQ");

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
    msg.setTimeStamp(0.28903739897899516);
    msg.setSource(44762U);
    msg.setSourceEntity(110U);
    msg.setDestination(35981U);
    msg.setDestinationEntity(242U);
    msg.value = 0.14200782117880784;
    msg.confidence = 0.5223396874169501;
    msg.opmodes.assign("OHEINLHXTUIYRYLAGBTCSQKRBRVQWUYNGCVIFTGFWGWVRKDWATDYOFVEGUZKDGMNVJVPBICAZLFLMKASUNSEDHPKRMEJRICJWEFSTCRXFDOKIFQCAYPOZWLFONWEQGBBAPYMJEFZXUOZUOZVXZVQWRVAWPANRCKHOBODHOSHBWDQPNNLAXLGLQYUKXPPSYJHJSMPZSPBLMGDERNDXBKIBMCIQTJLTSSXTMTY");

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
    msg.setTimeStamp(0.05906949793328631);
    msg.setSource(7004U);
    msg.setSourceEntity(168U);
    msg.setDestination(1618U);
    msg.setDestinationEntity(145U);
    msg.itow = 475393461U;
    msg.lat = 0.6469333459147035;
    msg.lon = 0.5810011250863107;
    msg.height_ell = 0.8210264464890806;
    msg.height_sea = 0.3434336650155303;
    msg.hacc = 0.6355071522246807;
    msg.vacc = 0.34557321338934943;
    msg.vel_n = 0.03922866784887169;
    msg.vel_e = 0.46859553362692585;
    msg.vel_d = 0.445454227024903;
    msg.speed = 0.5660133117923278;
    msg.gspeed = 0.3556098210068004;
    msg.heading = 0.5556847115145879;
    msg.sacc = 0.33044594808332683;
    msg.cacc = 0.008113686563675393;

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
    msg.setTimeStamp(0.4328854039720439);
    msg.setSource(45745U);
    msg.setSourceEntity(164U);
    msg.setDestination(43772U);
    msg.setDestinationEntity(75U);
    msg.itow = 3968257617U;
    msg.lat = 0.5014714246780667;
    msg.lon = 0.8312811161035208;
    msg.height_ell = 0.9449321766176136;
    msg.height_sea = 0.08937005015389532;
    msg.hacc = 0.8765317249157641;
    msg.vacc = 0.9958456666022379;
    msg.vel_n = 0.8621940550229344;
    msg.vel_e = 0.5034933450382721;
    msg.vel_d = 0.32277177113018374;
    msg.speed = 0.3842797636958736;
    msg.gspeed = 0.05705032960829959;
    msg.heading = 0.828529415823476;
    msg.sacc = 0.19464776510892912;
    msg.cacc = 0.44339492907936573;

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
    msg.setTimeStamp(0.011571612248430951);
    msg.setSource(9310U);
    msg.setSourceEntity(66U);
    msg.setDestination(26133U);
    msg.setDestinationEntity(254U);
    msg.itow = 864649892U;
    msg.lat = 0.4866205306377588;
    msg.lon = 0.8737273624372068;
    msg.height_ell = 0.3053168404416472;
    msg.height_sea = 0.9941325480175943;
    msg.hacc = 0.927780941380759;
    msg.vacc = 0.8480045054546632;
    msg.vel_n = 0.6146824325586908;
    msg.vel_e = 0.9140497276548023;
    msg.vel_d = 0.4079182732646548;
    msg.speed = 0.26213971851793894;
    msg.gspeed = 0.2760572480737925;
    msg.heading = 0.8043170934258485;
    msg.sacc = 0.21155965581305158;
    msg.cacc = 0.3592923259097306;

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
    msg.setTimeStamp(0.6743975872885506);
    msg.setSource(21956U);
    msg.setSourceEntity(87U);
    msg.setDestination(3297U);
    msg.setDestinationEntity(94U);
    msg.id = 179U;
    msg.value = 0.8967165549903151;

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
    msg.setTimeStamp(0.6276692171929185);
    msg.setSource(1344U);
    msg.setSourceEntity(104U);
    msg.setDestination(31588U);
    msg.setDestinationEntity(88U);
    msg.id = 77U;
    msg.value = 0.34555262167079914;

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
    msg.setTimeStamp(0.9765736493240762);
    msg.setSource(47881U);
    msg.setSourceEntity(253U);
    msg.setDestination(39805U);
    msg.setDestinationEntity(95U);
    msg.id = 34U;
    msg.value = 0.695539998296585;

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
    msg.setTimeStamp(0.018705846377996327);
    msg.setSource(53142U);
    msg.setSourceEntity(48U);
    msg.setDestination(35547U);
    msg.setDestinationEntity(173U);
    msg.x = 0.5509895970311018;
    msg.y = 0.302656126606652;
    msg.z = 0.8091640341862358;
    msg.phi = 0.6392594178091952;
    msg.theta = 0.013247256257460926;
    msg.psi = 0.6613178105459293;

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
    msg.setTimeStamp(0.7781878634757005);
    msg.setSource(3402U);
    msg.setSourceEntity(50U);
    msg.setDestination(35402U);
    msg.setDestinationEntity(133U);
    msg.x = 0.07738826184791436;
    msg.y = 0.6660296018298764;
    msg.z = 0.7658078844931616;
    msg.phi = 0.7012735303093034;
    msg.theta = 0.821634718699366;
    msg.psi = 0.41763797073500086;

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
    msg.setTimeStamp(0.9883227016258592);
    msg.setSource(49169U);
    msg.setSourceEntity(145U);
    msg.setDestination(30778U);
    msg.setDestinationEntity(70U);
    msg.x = 0.6038996136475051;
    msg.y = 0.5231823840896277;
    msg.z = 0.15470771228674174;
    msg.phi = 0.10478032352382971;
    msg.theta = 0.7788104828547304;
    msg.psi = 0.06517721450991665;

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
    msg.setTimeStamp(0.6884409820799652);
    msg.setSource(16677U);
    msg.setSourceEntity(159U);
    msg.setDestination(61585U);
    msg.setDestinationEntity(51U);
    msg.beam_width = 0.9615493805202663;
    msg.beam_height = 0.1916766480647042;

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
    msg.setTimeStamp(0.022966436870802687);
    msg.setSource(43146U);
    msg.setSourceEntity(97U);
    msg.setDestination(30746U);
    msg.setDestinationEntity(40U);
    msg.beam_width = 0.602957902984416;
    msg.beam_height = 0.7468383810129356;

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
    msg.setTimeStamp(0.5160816001394489);
    msg.setSource(36525U);
    msg.setSourceEntity(195U);
    msg.setDestination(50734U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.019342253473412896;
    msg.beam_height = 0.8587320172606498;

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
    msg.setTimeStamp(0.29473185545241);
    msg.setSource(58610U);
    msg.setSourceEntity(167U);
    msg.setDestination(32966U);
    msg.setDestinationEntity(189U);
    msg.sane = 87U;

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
    msg.setTimeStamp(0.26890154074207073);
    msg.setSource(34624U);
    msg.setSourceEntity(233U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(89U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.8704790452960784);
    msg.setSource(23463U);
    msg.setSourceEntity(137U);
    msg.setDestination(14258U);
    msg.setDestinationEntity(221U);
    msg.sane = 186U;

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
    msg.setTimeStamp(0.7792463785876959);
    msg.setSource(422U);
    msg.setSourceEntity(112U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6184502462150429;

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
    msg.setTimeStamp(0.18929301438645774);
    msg.setSource(12679U);
    msg.setSourceEntity(217U);
    msg.setDestination(54215U);
    msg.setDestinationEntity(119U);
    msg.value = 0.48445541457759234;

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
    msg.setTimeStamp(0.4404904958278639);
    msg.setSource(2438U);
    msg.setSourceEntity(209U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(94U);
    msg.value = 0.2941097398613943;

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
    msg.setTimeStamp(0.33044103138725445);
    msg.setSource(12879U);
    msg.setSourceEntity(225U);
    msg.setDestination(46698U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9249782713993036;

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
    msg.setTimeStamp(0.1365855825824136);
    msg.setSource(1786U);
    msg.setSourceEntity(195U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(88U);
    msg.value = 0.845032090719427;

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
    msg.setTimeStamp(0.03155164689971457);
    msg.setSource(35743U);
    msg.setSourceEntity(18U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6475752993339482;

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
    msg.setTimeStamp(0.31062733155715194);
    msg.setSource(20395U);
    msg.setSourceEntity(232U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(198U);
    msg.value = 0.8722808288497231;

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
    msg.setTimeStamp(0.8740400114412462);
    msg.setSource(14523U);
    msg.setSourceEntity(215U);
    msg.setDestination(15865U);
    msg.setDestinationEntity(20U);
    msg.value = 0.8226107335267456;

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
    msg.setTimeStamp(0.7048844818050223);
    msg.setSource(41806U);
    msg.setSourceEntity(22U);
    msg.setDestination(13164U);
    msg.setDestinationEntity(35U);
    msg.value = 0.08518164257497163;

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
    msg.setTimeStamp(0.48860290040603305);
    msg.setSource(60308U);
    msg.setSourceEntity(126U);
    msg.setDestination(3374U);
    msg.setDestinationEntity(35U);
    msg.value = 0.2961891484485345;

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
    msg.setTimeStamp(0.5092648189266621);
    msg.setSource(35200U);
    msg.setSourceEntity(64U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(54U);
    msg.value = 0.23634009157052227;

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
    msg.setTimeStamp(0.4908571982436536);
    msg.setSource(43925U);
    msg.setSourceEntity(127U);
    msg.setDestination(14272U);
    msg.setDestinationEntity(46U);
    msg.value = 0.4687526158064532;

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
    msg.setTimeStamp(0.300339697359883);
    msg.setSource(24558U);
    msg.setSourceEntity(83U);
    msg.setDestination(43033U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5951793482166212;

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
    msg.setTimeStamp(0.5486529487194715);
    msg.setSource(22124U);
    msg.setSourceEntity(191U);
    msg.setDestination(25688U);
    msg.setDestinationEntity(115U);
    msg.value = 0.765147225644672;

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
    msg.setTimeStamp(0.16213725507996557);
    msg.setSource(31823U);
    msg.setSourceEntity(79U);
    msg.setDestination(5789U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8038524469165802;

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
    msg.setTimeStamp(0.748390134821135);
    msg.setSource(7797U);
    msg.setSourceEntity(202U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9369390805379878;

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
    msg.setTimeStamp(0.0930892443109882);
    msg.setSource(38826U);
    msg.setSourceEntity(63U);
    msg.setDestination(6922U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9066444579469849;

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
    msg.setTimeStamp(0.5532705480634158);
    msg.setSource(59187U);
    msg.setSourceEntity(140U);
    msg.setDestination(2035U);
    msg.setDestinationEntity(252U);
    msg.value = 0.13903924358540742;

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
    msg.setTimeStamp(0.9537043069335824);
    msg.setSource(59178U);
    msg.setSourceEntity(195U);
    msg.setDestination(40219U);
    msg.setDestinationEntity(61U);
    msg.value = 0.20191052913032814;

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
    msg.setTimeStamp(0.010736024869018146);
    msg.setSource(56538U);
    msg.setSourceEntity(28U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(116U);
    msg.value = 0.17305952824149284;

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
    msg.setTimeStamp(0.39072946692141497);
    msg.setSource(57645U);
    msg.setSourceEntity(37U);
    msg.setDestination(29770U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6807073113340464;

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
    msg.setTimeStamp(0.5970265333943185);
    msg.setSource(13851U);
    msg.setSourceEntity(199U);
    msg.setDestination(53809U);
    msg.setDestinationEntity(246U);
    msg.value = 0.24521772797834618;

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
    msg.setTimeStamp(0.02023692914543196);
    msg.setSource(36797U);
    msg.setSourceEntity(192U);
    msg.setDestination(16384U);
    msg.setDestinationEntity(41U);
    msg.value = 0.37497405480463597;

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
    msg.setTimeStamp(0.9816596856146301);
    msg.setSource(27171U);
    msg.setSourceEntity(47U);
    msg.setDestination(44128U);
    msg.setDestinationEntity(108U);
    msg.value = 0.25002526770233946;

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
    msg.setTimeStamp(0.9839736263669774);
    msg.setSource(4545U);
    msg.setSourceEntity(3U);
    msg.setDestination(7422U);
    msg.setDestinationEntity(85U);
    msg.validity = 45075U;
    msg.type = 225U;
    msg.tow = 4130130886U;
    msg.base_lat = 0.6075241235134802;
    msg.base_lon = 0.6215496986964741;
    msg.base_height = 0.6428365410735655;
    msg.n = 0.5795136834095443;
    msg.e = 0.9583234454076381;
    msg.d = 0.5789064280424856;
    msg.v_n = 0.8253083480701737;
    msg.v_e = 0.6219580359514801;
    msg.v_d = 0.6944279190992019;
    msg.satellites = 124U;
    msg.iar_hyp = 9536U;
    msg.iar_ratio = 0.42333823976364504;

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
    msg.setTimeStamp(0.3458924522639133);
    msg.setSource(55661U);
    msg.setSourceEntity(217U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(5U);
    msg.validity = 2586U;
    msg.type = 230U;
    msg.tow = 2331116928U;
    msg.base_lat = 0.5274372708149326;
    msg.base_lon = 0.3694950219296538;
    msg.base_height = 0.3439298118391848;
    msg.n = 0.6647825355380678;
    msg.e = 0.8416858071902553;
    msg.d = 0.1843695841561943;
    msg.v_n = 0.15669143424322807;
    msg.v_e = 0.04310529087377579;
    msg.v_d = 0.33610964700501356;
    msg.satellites = 149U;
    msg.iar_hyp = 52067U;
    msg.iar_ratio = 0.2833650611483588;

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
    msg.setTimeStamp(0.8617716789716634);
    msg.setSource(8786U);
    msg.setSourceEntity(40U);
    msg.setDestination(33492U);
    msg.setDestinationEntity(92U);
    msg.validity = 26021U;
    msg.type = 147U;
    msg.tow = 1312892365U;
    msg.base_lat = 0.9874645878905466;
    msg.base_lon = 0.15829831071444822;
    msg.base_height = 0.4909869782277261;
    msg.n = 0.4680501292988173;
    msg.e = 0.6769663024716335;
    msg.d = 0.5462444493089471;
    msg.v_n = 0.1973593664716078;
    msg.v_e = 0.8425632832445958;
    msg.v_d = 0.6926418183716241;
    msg.satellites = 83U;
    msg.iar_hyp = 52511U;
    msg.iar_ratio = 0.022404522028339646;

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
    msg.setTimeStamp(0.28213987581422906);
    msg.setSource(64309U);
    msg.setSourceEntity(241U);
    msg.setDestination(18094U);
    msg.setDestinationEntity(124U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6079210435068775;
    tmp_msg_0.lon = 0.29238309004477825;
    tmp_msg_0.height = 0.580007860370755;
    tmp_msg_0.x = 0.1726093139534992;
    tmp_msg_0.y = 0.9476476180210107;
    tmp_msg_0.z = 0.9109930883391916;
    tmp_msg_0.phi = 0.57286620255304;
    tmp_msg_0.theta = 0.9114173766293502;
    tmp_msg_0.psi = 0.2143021447624679;
    tmp_msg_0.u = 0.34179500372586646;
    tmp_msg_0.v = 0.3022853972442533;
    tmp_msg_0.w = 0.39567922867886696;
    tmp_msg_0.vx = 0.43330934717785174;
    tmp_msg_0.vy = 0.17206243900061624;
    tmp_msg_0.vz = 0.8784814168869901;
    tmp_msg_0.p = 0.5252366777926665;
    tmp_msg_0.q = 0.5806881205345963;
    tmp_msg_0.r = 0.19806937413384884;
    tmp_msg_0.depth = 0.8748837510489258;
    tmp_msg_0.alt = 0.6576998553701695;
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
    msg.setTimeStamp(0.7950172338422842);
    msg.setSource(35549U);
    msg.setSourceEntity(26U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(64U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.397622579572924;
    tmp_msg_0.lon = 0.4629301996772217;
    tmp_msg_0.height = 0.729746215257872;
    tmp_msg_0.x = 0.7350027128527586;
    tmp_msg_0.y = 0.25546236848390824;
    tmp_msg_0.z = 0.7368245415084647;
    tmp_msg_0.phi = 0.08830056410759468;
    tmp_msg_0.theta = 0.569620654393165;
    tmp_msg_0.psi = 0.3527221133074667;
    tmp_msg_0.u = 0.08918575280829866;
    tmp_msg_0.v = 0.08940962476384895;
    tmp_msg_0.w = 0.7401071368979695;
    tmp_msg_0.vx = 0.7487343828742308;
    tmp_msg_0.vy = 0.2220501457007672;
    tmp_msg_0.vz = 0.37665080548123375;
    tmp_msg_0.p = 0.5840137336058501;
    tmp_msg_0.q = 0.7166209297469581;
    tmp_msg_0.r = 0.5363737591186692;
    tmp_msg_0.depth = 0.7472624109054751;
    tmp_msg_0.alt = 0.7519236427563564;
    msg.state.set(tmp_msg_0);
    msg.type = 74U;

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
    msg.setTimeStamp(0.6822626409471275);
    msg.setSource(63409U);
    msg.setSourceEntity(18U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(241U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.46031732574802375;
    tmp_msg_0.lon = 0.0188169313250528;
    tmp_msg_0.height = 0.9347181859353391;
    tmp_msg_0.x = 0.5204534915762659;
    tmp_msg_0.y = 0.3099745598591078;
    tmp_msg_0.z = 0.1387941198095164;
    tmp_msg_0.phi = 0.2204087639678609;
    tmp_msg_0.theta = 0.41696043519837644;
    tmp_msg_0.psi = 0.2562816432022309;
    tmp_msg_0.u = 0.5713178731232051;
    tmp_msg_0.v = 0.6149953779865296;
    tmp_msg_0.w = 0.06236477768603488;
    tmp_msg_0.vx = 0.5946893567781817;
    tmp_msg_0.vy = 0.7443121819275088;
    tmp_msg_0.vz = 0.8837228954041632;
    tmp_msg_0.p = 0.9021691774675046;
    tmp_msg_0.q = 0.9823183520737795;
    tmp_msg_0.r = 0.25975421039479174;
    tmp_msg_0.depth = 0.878111060935352;
    tmp_msg_0.alt = 0.3249562416174524;
    msg.state.set(tmp_msg_0);
    msg.type = 96U;

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
    msg.setTimeStamp(0.162511718097598);
    msg.setSource(7802U);
    msg.setSourceEntity(17U);
    msg.setDestination(58118U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9136286771803126;

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
    msg.setTimeStamp(0.45146717989743235);
    msg.setSource(51247U);
    msg.setSourceEntity(202U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(20U);
    msg.value = 0.3605359446227704;

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
    msg.setTimeStamp(0.1950006334362756);
    msg.setSource(61119U);
    msg.setSourceEntity(65U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7814901312717817;

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
    msg.setTimeStamp(0.7315512318552618);
    msg.setSource(49406U);
    msg.setSourceEntity(157U);
    msg.setDestination(53716U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4478636510731051;

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
    msg.setTimeStamp(0.06556904780350581);
    msg.setSource(24347U);
    msg.setSourceEntity(192U);
    msg.setDestination(43371U);
    msg.setDestinationEntity(120U);
    msg.value = 0.7351010084196293;

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
    msg.setTimeStamp(0.8454409700950622);
    msg.setSource(20882U);
    msg.setSourceEntity(221U);
    msg.setDestination(47792U);
    msg.setDestinationEntity(202U);
    msg.value = 0.5206856403140896;

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
    msg.setTimeStamp(0.5675012477392366);
    msg.setSource(23504U);
    msg.setSourceEntity(20U);
    msg.setDestination(57137U);
    msg.setDestinationEntity(66U);
    msg.value = 0.4069421242602823;

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
    msg.setTimeStamp(0.4214681343370218);
    msg.setSource(7019U);
    msg.setSourceEntity(21U);
    msg.setDestination(7370U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7973195303535436;

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
    msg.setTimeStamp(0.9107339880126795);
    msg.setSource(17036U);
    msg.setSourceEntity(7U);
    msg.setDestination(61644U);
    msg.setDestinationEntity(80U);
    msg.value = 0.633023115801314;

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
    msg.setTimeStamp(0.2842168681593291);
    msg.setSource(56325U);
    msg.setSourceEntity(230U);
    msg.setDestination(36275U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4339082465978026;

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
    msg.setTimeStamp(0.019818176928249387);
    msg.setSource(64482U);
    msg.setSourceEntity(81U);
    msg.setDestination(23338U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9206448207475036;

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
    msg.setTimeStamp(0.0787372167143584);
    msg.setSource(33369U);
    msg.setSourceEntity(131U);
    msg.setDestination(63426U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8996587915967945;

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
    msg.setTimeStamp(0.3286165312027104);
    msg.setSource(46949U);
    msg.setSourceEntity(63U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(236U);
    msg.value = 0.7452840344273939;

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
    msg.setTimeStamp(0.36776451248069697);
    msg.setSource(62208U);
    msg.setSourceEntity(152U);
    msg.setDestination(42091U);
    msg.setDestinationEntity(208U);
    msg.value = 0.2795683844554373;

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
    msg.setTimeStamp(0.8559111427949864);
    msg.setSource(27748U);
    msg.setSourceEntity(8U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5766486036883409;

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
    msg.setTimeStamp(0.28252830370628557);
    msg.setSource(30120U);
    msg.setSourceEntity(77U);
    msg.setDestination(29722U);
    msg.setDestinationEntity(95U);
    msg.id = 43U;
    msg.zoom = 56U;
    msg.action = 11U;

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
    msg.setTimeStamp(0.2587390836643777);
    msg.setSource(1413U);
    msg.setSourceEntity(57U);
    msg.setDestination(15623U);
    msg.setDestinationEntity(210U);
    msg.id = 80U;
    msg.zoom = 107U;
    msg.action = 47U;

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
    msg.setTimeStamp(0.4861668597598986);
    msg.setSource(16626U);
    msg.setSourceEntity(63U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(184U);
    msg.id = 179U;
    msg.zoom = 115U;
    msg.action = 33U;

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
    msg.setTimeStamp(0.7850425182496413);
    msg.setSource(56862U);
    msg.setSourceEntity(239U);
    msg.setDestination(409U);
    msg.setDestinationEntity(19U);
    msg.id = 187U;
    msg.value = 0.6265485778730269;

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
    msg.setTimeStamp(0.8402037708008131);
    msg.setSource(59488U);
    msg.setSourceEntity(30U);
    msg.setDestination(47614U);
    msg.setDestinationEntity(64U);
    msg.id = 101U;
    msg.value = 0.1649364391368604;

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
    msg.setTimeStamp(0.13199401557825752);
    msg.setSource(14553U);
    msg.setSourceEntity(31U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(223U);
    msg.id = 32U;
    msg.value = 0.021174799298117497;

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
    msg.setTimeStamp(0.8669641566409757);
    msg.setSource(50882U);
    msg.setSourceEntity(45U);
    msg.setDestination(60142U);
    msg.setDestinationEntity(105U);
    msg.id = 91U;
    msg.value = 0.8728363395526532;

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
    msg.setTimeStamp(0.862490120027925);
    msg.setSource(41903U);
    msg.setSourceEntity(130U);
    msg.setDestination(10850U);
    msg.setDestinationEntity(95U);
    msg.id = 66U;
    msg.value = 0.622751159172712;

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
    msg.setTimeStamp(0.9187888436156093);
    msg.setSource(30459U);
    msg.setSourceEntity(20U);
    msg.setDestination(61471U);
    msg.setDestinationEntity(112U);
    msg.id = 99U;
    msg.value = 0.12727847800881686;

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
    msg.setTimeStamp(0.41251949138519417);
    msg.setSource(27043U);
    msg.setSourceEntity(252U);
    msg.setDestination(32932U);
    msg.setDestinationEntity(143U);
    msg.id = 91U;
    msg.angle = 0.5222190380500376;

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
    msg.setTimeStamp(0.7822717298590282);
    msg.setSource(3397U);
    msg.setSourceEntity(25U);
    msg.setDestination(3954U);
    msg.setDestinationEntity(84U);
    msg.id = 237U;
    msg.angle = 0.914738402345724;

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
    msg.setTimeStamp(0.11862187855423834);
    msg.setSource(61630U);
    msg.setSourceEntity(199U);
    msg.setDestination(55120U);
    msg.setDestinationEntity(108U);
    msg.id = 20U;
    msg.angle = 0.9179538368927751;

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
    msg.setTimeStamp(0.750668221447366);
    msg.setSource(56109U);
    msg.setSourceEntity(224U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(244U);
    msg.op = 102U;
    msg.actions.assign("ZATYLRQCKJCAZREEWUPFKEAABDQSUSQD");

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
    msg.setTimeStamp(0.11747706992495122);
    msg.setSource(29029U);
    msg.setSourceEntity(54U);
    msg.setDestination(48513U);
    msg.setDestinationEntity(105U);
    msg.op = 107U;
    msg.actions.assign("YDMFHVEBHUTMQLQTQOZFCGCBJQVRDHESPUEUOWLWYYXDQUOWKFKKWMVHFHHPJTESNKLACRGOLHEXHNZZGCYAYCDTCANIIWJMGXGLUELPVQGDSRJZITIOVVAEMJDP");

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
    msg.setTimeStamp(0.039607285885467025);
    msg.setSource(35032U);
    msg.setSourceEntity(109U);
    msg.setDestination(38597U);
    msg.setDestinationEntity(230U);
    msg.op = 18U;
    msg.actions.assign("EUUXDSWHIQZCJXYRIPEAXMLBSFVORZOL");

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
    msg.setTimeStamp(0.7313118686869875);
    msg.setSource(36950U);
    msg.setSourceEntity(125U);
    msg.setDestination(22348U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("GOCWKYHHMZVARSZXFUVOSQLYWOZXBISPPNSFVNBRRSYPBDHICUMOYKQWBWDATTJUYWQGUEHUJMUWCENPQDTXNCWEZNOGGXHXEBGLZIQZTEZGPAUESNTABHKIYIKJRDGBIVWCFKDLJYODTLUZGFAMNXQOLEJDWEVRDNIJROUOBMMTFXARQSTDTFVKCZVHMEICSQRVLHYPPKIMTGKEDCFGPIJNXFLMBKARFA");

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
    msg.setTimeStamp(0.8502915952826307);
    msg.setSource(40965U);
    msg.setSourceEntity(163U);
    msg.setDestination(13410U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("GLTDRSJQWUBAXCRJYRNQZWNPARVYCXZJSXSVHSYPKQOZKEZKQEMYXGTKTVJWANPVHNLLOANTUAHJSGOCXA");

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
    msg.setTimeStamp(0.6570814961068188);
    msg.setSource(17798U);
    msg.setSourceEntity(45U);
    msg.setDestination(9352U);
    msg.setDestinationEntity(39U);
    msg.actions.assign("QBYMWLIZEQORQIQSCAFJMJ");

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
    msg.setTimeStamp(0.11329053026896774);
    msg.setSource(9844U);
    msg.setSourceEntity(169U);
    msg.setDestination(33746U);
    msg.setDestinationEntity(1U);
    msg.button = 182U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.3994196029095547);
    msg.setSource(25668U);
    msg.setSourceEntity(233U);
    msg.setDestination(42785U);
    msg.setDestinationEntity(80U);
    msg.button = 25U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.6420023780309378);
    msg.setSource(57708U);
    msg.setSourceEntity(139U);
    msg.setDestination(37279U);
    msg.setDestinationEntity(15U);
    msg.button = 233U;
    msg.value = 191U;

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
    msg.setTimeStamp(0.10244043383182777);
    msg.setSource(34287U);
    msg.setSourceEntity(15U);
    msg.setDestination(23179U);
    msg.setDestinationEntity(50U);
    msg.op = 117U;
    msg.text.assign("ZCJKNKIZPAKJWEMLDAOXRWCAVXNWHUTQACUPMGWGICIVREEYUUFGHPCVPTSGLMKRQFQQJRBXYFTSDLDHTMS");

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
    msg.setTimeStamp(0.6551503636404027);
    msg.setSource(27078U);
    msg.setSourceEntity(231U);
    msg.setDestination(26189U);
    msg.setDestinationEntity(162U);
    msg.op = 216U;
    msg.text.assign("SQLNGWCJRNEKXVIBFZRMWPUYBLJAYVAVWQLMDDSHGKTPYBGQVNFGHNVKHRY");

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
    msg.setTimeStamp(0.038350133137761255);
    msg.setSource(35603U);
    msg.setSourceEntity(79U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(76U);
    msg.op = 117U;
    msg.text.assign("OLTPGZTUVLNMWSUSBQCIPUBVCBZKYNBPJPVXVIFHEGPLADSJGYQOOERTUDXHLDRAAPJGVFWVDAJZIVAWYERFJFUPWXEKRQTOXMSGHFJCIKUANDYZKDQLFGRJQMOICMDAUNRKZLOMKAXWRTLIRZZEVHCNURXJHXODDPKLDKLSQKMHMWCQBWQIUGF");

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
    msg.setTimeStamp(0.9012299905016877);
    msg.setSource(49451U);
    msg.setSourceEntity(106U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(191U);
    msg.op = 86U;
    msg.time_remain = 0.44515609788408317;
    msg.sched_time = 0.5039502683293281;

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
    msg.setTimeStamp(0.6460620591531631);
    msg.setSource(38328U);
    msg.setSourceEntity(137U);
    msg.setDestination(9521U);
    msg.setDestinationEntity(53U);
    msg.op = 35U;
    msg.time_remain = 0.33900294550932486;
    msg.sched_time = 0.42125410689703635;

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
    msg.setTimeStamp(0.19220974604913477);
    msg.setSource(62181U);
    msg.setSourceEntity(57U);
    msg.setDestination(19087U);
    msg.setDestinationEntity(176U);
    msg.op = 220U;
    msg.time_remain = 0.28365992242804194;
    msg.sched_time = 0.9474473023532267;

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
    msg.setTimeStamp(0.9214801629746434);
    msg.setSource(10295U);
    msg.setSourceEntity(240U);
    msg.setDestination(50155U);
    msg.setDestinationEntity(194U);
    msg.name.assign("MBCIRAAPCVJXOTMZNIYAMZDIEKZHXUAOUUWEANKMMIKRWTJQVPVILJKAGOJXTLBT");
    msg.op = 9U;
    msg.sched_time = 0.8775525281208758;

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
    msg.setTimeStamp(0.9018426206348962);
    msg.setSource(39512U);
    msg.setSourceEntity(227U);
    msg.setDestination(64513U);
    msg.setDestinationEntity(193U);
    msg.name.assign("HHCNMDBAEYTLMOPIDLFEZZDOLRPLZYQMGEIFVGGOBHDXTPWUZNCKZGKTLMBAHNUDQSQAXWVRUFVQTGPZKVQOCUVM");
    msg.op = 208U;
    msg.sched_time = 0.7919907874438027;

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
    msg.setTimeStamp(0.546290120205115);
    msg.setSource(3178U);
    msg.setSourceEntity(91U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(118U);
    msg.name.assign("WTDPOYUXNXTKILRUGMYRQNODLQZCEVCNBNQMUBAWDKLOIDZHPXVTCUPHQVOWGFKXPGUGSFKYOTPUBPRALREGDLMXWFJTXHFREHPJTNSRMWICUZCCFLESNSA");
    msg.op = 38U;
    msg.sched_time = 0.16246676663209048;

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
    msg.setTimeStamp(0.6530850302908062);
    msg.setSource(2734U);
    msg.setSourceEntity(32U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.7697740849878715);
    msg.setSource(42318U);
    msg.setSourceEntity(208U);
    msg.setDestination(12322U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7788445523753377);
    msg.setSource(29821U);
    msg.setSourceEntity(45U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.7458292868704163);
    msg.setSource(24405U);
    msg.setSourceEntity(170U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(161U);
    msg.name.assign("OWDPKTUFIEIAXVLLSRXIHNFRAFTMDYZJKEXYPNWOUEVOBEIQHORJFXYGCAGLROKTRIOEIFMUBTGSKLQJWAMMHZFCLBHOBCMWDSMEWNZSNTXOQQQNMTBAKKNPYLDCHEZTYDUUJR");
    msg.state = 222U;

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
    msg.setTimeStamp(0.6586889357466676);
    msg.setSource(47044U);
    msg.setSourceEntity(99U);
    msg.setDestination(44328U);
    msg.setDestinationEntity(197U);
    msg.name.assign("ZUSXYNEYPYLCZSXPRVJTHNGUFJFIJVUBMOBTSLXLNZFBJOIGBVDMWYPRZWUVUQXVBOYNGICZGRGDFOPDETBMUDPIRMWZMMQEZEHYKKMBMKTJQUQWTNQJLLXLIIRHAVAPPEVYTXILCOSS");
    msg.state = 218U;

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
    msg.setTimeStamp(0.504132926950788);
    msg.setSource(2460U);
    msg.setSourceEntity(93U);
    msg.setDestination(14371U);
    msg.setDestinationEntity(143U);
    msg.name.assign("RKCITOSGOSEVWPBJUZHWNEVUFLLXSWPKHMDSHRGMMTQGFCOCSBIYUZRYJHKDEY");
    msg.state = 188U;

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
    msg.setTimeStamp(0.08878942563263048);
    msg.setSource(31397U);
    msg.setSourceEntity(121U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(201U);
    msg.name.assign("ASACTPMPCIZCCUDKYXOLHJMOGHPEWOLSGJNXRIXLSGPUFODNQOPIXZKJZG");
    msg.value = 141U;

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
    msg.setTimeStamp(0.6941929627336808);
    msg.setSource(5074U);
    msg.setSourceEntity(111U);
    msg.setDestination(37477U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BVQCVSVDFFDOZDOHUKZZBOJWLFALDXMNBKGPMUTDSCNMNYVCDDFEQIXYRUTMPWUWHFZOEOOGPHVECQQMIJMLWPSDTQEXIKKLJMRNFMGHPELSWHNEOXWVKFEJVXHUCGYUWXTRZVPYGNOSCKZGBILCRYSIXQHASIGNDFRNYSRZAFLZGIJIAERPRACOWUZUEYLTTSVJUBACJILRCMXJQRNQ");
    msg.value = 223U;

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
    msg.setTimeStamp(0.9561150648192366);
    msg.setSource(384U);
    msg.setSourceEntity(66U);
    msg.setDestination(59339U);
    msg.setDestinationEntity(5U);
    msg.name.assign("VDFNAJHGXMXGWXVEUJODDUJFZMPIHOQWSMCIIZZQHGOHJWCHTZAXFMCRFRIYV");
    msg.value = 190U;

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
    msg.setTimeStamp(0.48806650627756665);
    msg.setSource(61623U);
    msg.setSourceEntity(143U);
    msg.setDestination(58693U);
    msg.setDestinationEntity(181U);
    msg.name.assign("MVDFRBUJSZDBLYYRYCYQQEFHVCYHHJMQPKJPENWTSDUAGXZWVDUIXXKSUVOOXNSXLDKHPZYFEVYEWGGWIZWGOIGTUDVBLJJRENPZZUHOHDTFDSZFAIICQSJLSKEZSWCAKLUMNCRTLPYKLBPIXMAECNHRIAPEJQWJNFBQUGAUVXG");

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
    msg.setTimeStamp(0.7172455893350914);
    msg.setSource(61596U);
    msg.setSourceEntity(124U);
    msg.setDestination(24799U);
    msg.setDestinationEntity(68U);
    msg.name.assign("OLVGAKZIJAURZXJIGXIBOVKRBJQGPCWWJSOLHDEFFSIYGTQQASDJQEUXORTMASZYATHSYWDZPEJTBLWQQDTICMCGSBGBRIRLXTFZBGNUDNOMLTYKIGOZSFMPZMHTUVDXGEKRXPCWNLOCUVBAMMHLMEGANCVKDVOELPYKQZDNHWOPOACJFYRSQBVJWQZQBUAFKZKCIENURIUIJLVNAFNTRVNMHCLWHVW");

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
    msg.setTimeStamp(0.9707841348801994);
    msg.setSource(31328U);
    msg.setSourceEntity(70U);
    msg.setDestination(50485U);
    msg.setDestinationEntity(27U);
    msg.name.assign("LEKIXUMABBORHXVHRXTUFS");

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
    msg.setTimeStamp(0.8681835069412097);
    msg.setSource(6497U);
    msg.setSourceEntity(163U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(229U);
    msg.name.assign("NMJPKFIWMEOXKATLPDXHUPDZWSEGWVUHIPHFYDHCYYPRYSLBCBEDVCQQEZLLTSZOOASHCYQGIHMUCQGGBDLRAKNSGAAIUZWLNBLUURTNOLCJIZGGQUFKTRHYEESXWPMHKRTWSXDAIEQECTKVLNVRKYZZMGOVCXFGJZFPXSHIUBVMWUVBMTQBWLGMWVJNIFUYYAITDJTXSOJRNOIPDRNJKSXBVQRMOJNQDFXEFBEMAHOZAN");
    msg.value = 98U;

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
    msg.setTimeStamp(0.8966180150895272);
    msg.setSource(40916U);
    msg.setSourceEntity(161U);
    msg.setDestination(3342U);
    msg.setDestinationEntity(107U);
    msg.name.assign("CRRWLQPEEUMNSSLXTBFKCOPPUAAOODFLOPNRHNHNRURFWWTQXLCUQQMGJFCSVNH");
    msg.value = 27U;

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
    msg.setTimeStamp(0.32592681446801);
    msg.setSource(60822U);
    msg.setSourceEntity(59U);
    msg.setDestination(838U);
    msg.setDestinationEntity(253U);
    msg.name.assign("QTFSSLTAXCOTRLGRBKDCXJADZZMZAWFNBFHFKOHGFUVZEFIAKMJO");
    msg.value = 223U;

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
    msg.setTimeStamp(0.22998718249811245);
    msg.setSource(27586U);
    msg.setSourceEntity(35U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(187U);
    msg.id = 11U;
    msg.period = 2144984572U;
    msg.duty_cycle = 2681914248U;

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
    msg.setTimeStamp(0.11517980616131862);
    msg.setSource(34877U);
    msg.setSourceEntity(170U);
    msg.setDestination(61987U);
    msg.setDestinationEntity(43U);
    msg.id = 29U;
    msg.period = 3482445698U;
    msg.duty_cycle = 1118091690U;

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
    msg.setTimeStamp(0.9898124746762361);
    msg.setSource(32488U);
    msg.setSourceEntity(158U);
    msg.setDestination(21623U);
    msg.setDestinationEntity(168U);
    msg.id = 33U;
    msg.period = 2262807449U;
    msg.duty_cycle = 797527160U;

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
    msg.setTimeStamp(0.9176852205430013);
    msg.setSource(20495U);
    msg.setSourceEntity(124U);
    msg.setDestination(59886U);
    msg.setDestinationEntity(237U);
    msg.id = 59U;
    msg.period = 1281650628U;
    msg.duty_cycle = 3024744643U;

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
    msg.setTimeStamp(0.05559173096546466);
    msg.setSource(59266U);
    msg.setSourceEntity(224U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(101U);
    msg.id = 107U;
    msg.period = 3237376330U;
    msg.duty_cycle = 27555923U;

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
    msg.setTimeStamp(0.9223030377463737);
    msg.setSource(32353U);
    msg.setSourceEntity(86U);
    msg.setDestination(44085U);
    msg.setDestinationEntity(28U);
    msg.id = 147U;
    msg.period = 3193705124U;
    msg.duty_cycle = 594726720U;

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
    msg.setTimeStamp(0.499338619473625);
    msg.setSource(28086U);
    msg.setSourceEntity(60U);
    msg.setDestination(39963U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.9700853599569483;
    msg.lon = 0.46120185367455513;
    msg.height = 0.9811475000215355;
    msg.x = 0.6518386341052674;
    msg.y = 0.23338118678979924;
    msg.z = 0.9956463063069101;
    msg.phi = 0.21441958002740424;
    msg.theta = 0.5663711070037362;
    msg.psi = 0.954632733102451;
    msg.u = 0.774930289870246;
    msg.v = 0.9784195239984951;
    msg.w = 0.23369100131319553;
    msg.vx = 0.9826395554112776;
    msg.vy = 0.37798279072475294;
    msg.vz = 0.2980659310854874;
    msg.p = 0.3120734227924583;
    msg.q = 0.2135008479638657;
    msg.r = 0.4787749413491118;
    msg.depth = 0.3357638894645406;
    msg.alt = 0.6888590229048307;

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
    msg.setTimeStamp(0.47985403376095037);
    msg.setSource(11631U);
    msg.setSourceEntity(197U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.18528020391122002;
    msg.lon = 0.3018478393951445;
    msg.height = 0.9516440735208687;
    msg.x = 0.054417359424096645;
    msg.y = 0.7279325534836933;
    msg.z = 0.5524377416248334;
    msg.phi = 0.9800097876950374;
    msg.theta = 0.9899106713214331;
    msg.psi = 0.5490509822009926;
    msg.u = 0.11668409573946814;
    msg.v = 0.380737574534617;
    msg.w = 0.26105902987666973;
    msg.vx = 0.9529931355744508;
    msg.vy = 0.5007555979119206;
    msg.vz = 0.8635314789483672;
    msg.p = 0.6820575320376769;
    msg.q = 0.6724897841159592;
    msg.r = 0.03582656712788779;
    msg.depth = 0.9875985710860475;
    msg.alt = 0.8427834581395487;

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
    msg.setTimeStamp(0.5910851376383253);
    msg.setSource(53496U);
    msg.setSourceEntity(205U);
    msg.setDestination(49932U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.3602445806080611;
    msg.lon = 0.8691844636765916;
    msg.height = 0.7256940949312305;
    msg.x = 0.921135071139522;
    msg.y = 0.21850452869632053;
    msg.z = 0.3209672968803454;
    msg.phi = 0.24365397918900078;
    msg.theta = 0.11947310440948566;
    msg.psi = 0.31087043976998097;
    msg.u = 0.8618650728611962;
    msg.v = 0.45423240442757806;
    msg.w = 0.24447025420340718;
    msg.vx = 0.7857938686957556;
    msg.vy = 0.866465412094256;
    msg.vz = 0.07208402984095685;
    msg.p = 0.33689492519628206;
    msg.q = 0.12949610185727456;
    msg.r = 0.27620928962035307;
    msg.depth = 0.296370551751478;
    msg.alt = 0.2186244256465001;

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
    msg.setTimeStamp(0.6335023310938148);
    msg.setSource(11808U);
    msg.setSourceEntity(103U);
    msg.setDestination(31811U);
    msg.setDestinationEntity(167U);
    msg.x = 0.0595001534982994;
    msg.y = 0.7474992822830563;
    msg.z = 0.8920274413689502;

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
    msg.setTimeStamp(0.616730791387902);
    msg.setSource(28647U);
    msg.setSourceEntity(81U);
    msg.setDestination(4251U);
    msg.setDestinationEntity(157U);
    msg.x = 0.9850365973857425;
    msg.y = 0.43386823919873396;
    msg.z = 0.1837850880339511;

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
    msg.setTimeStamp(0.1476374530065402);
    msg.setSource(40022U);
    msg.setSourceEntity(101U);
    msg.setDestination(29374U);
    msg.setDestinationEntity(216U);
    msg.x = 0.27998919057512384;
    msg.y = 0.20127318920740533;
    msg.z = 0.031011403177956143;

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
    msg.setTimeStamp(0.2744310149667012);
    msg.setSource(28556U);
    msg.setSourceEntity(220U);
    msg.setDestination(6978U);
    msg.setDestinationEntity(3U);
    msg.value = 0.4383886382274893;

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
    msg.setTimeStamp(0.5623214551207244);
    msg.setSource(53792U);
    msg.setSourceEntity(77U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(178U);
    msg.value = 0.8400167444120753;

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
    msg.setTimeStamp(0.7012800506069328);
    msg.setSource(983U);
    msg.setSourceEntity(217U);
    msg.setDestination(30438U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5905034699639666;

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
    msg.setTimeStamp(0.26187016241752614);
    msg.setSource(38622U);
    msg.setSourceEntity(211U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(137U);
    msg.value = 0.9802734083496142;

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
    msg.setTimeStamp(0.07409325705033554);
    msg.setSource(10081U);
    msg.setSourceEntity(200U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5226444927684032;

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
    msg.setTimeStamp(0.27557216160198195);
    msg.setSource(19071U);
    msg.setSourceEntity(125U);
    msg.setDestination(12022U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8487994314342757;

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
    msg.setTimeStamp(0.3379000730355337);
    msg.setSource(22104U);
    msg.setSourceEntity(78U);
    msg.setDestination(11392U);
    msg.setDestinationEntity(54U);
    msg.x = 0.3922156457817064;
    msg.y = 0.46718417173451443;
    msg.z = 0.623969647314994;
    msg.phi = 0.3570320819217917;
    msg.theta = 0.5166260827212433;
    msg.psi = 0.02205672359424693;
    msg.p = 0.47946321304527584;
    msg.q = 0.13550907253443567;
    msg.r = 0.37747734808475253;
    msg.u = 0.4079348515394533;
    msg.v = 0.8487520869670326;
    msg.w = 0.7926340845839347;
    msg.bias_psi = 0.056522861049532525;
    msg.bias_r = 0.38991306749296306;

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
    msg.setTimeStamp(0.9103890083033435);
    msg.setSource(14069U);
    msg.setSourceEntity(48U);
    msg.setDestination(27722U);
    msg.setDestinationEntity(138U);
    msg.x = 0.3420828340873949;
    msg.y = 0.8051896171352428;
    msg.z = 0.4711896279828457;
    msg.phi = 0.5450956241278945;
    msg.theta = 0.14864976967228427;
    msg.psi = 0.24323104642348603;
    msg.p = 0.5878227794195267;
    msg.q = 0.6679233574540442;
    msg.r = 0.07604808689944986;
    msg.u = 0.2377890540962072;
    msg.v = 0.31637137796120984;
    msg.w = 0.06098027284872187;
    msg.bias_psi = 0.4093487759609187;
    msg.bias_r = 0.7309662435014457;

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
    msg.setTimeStamp(0.7065965933641155);
    msg.setSource(37034U);
    msg.setSourceEntity(225U);
    msg.setDestination(21946U);
    msg.setDestinationEntity(71U);
    msg.x = 0.3334661298334718;
    msg.y = 0.5897823391793947;
    msg.z = 0.8839462390581276;
    msg.phi = 0.4288934322778296;
    msg.theta = 0.004337460796111858;
    msg.psi = 0.0627154442671628;
    msg.p = 0.5408621708224496;
    msg.q = 0.29320186490045685;
    msg.r = 0.40347491802615854;
    msg.u = 0.8579835435499901;
    msg.v = 0.004887401763741361;
    msg.w = 0.8093981506804213;
    msg.bias_psi = 0.17976704528614196;
    msg.bias_r = 0.37072446134389503;

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
    msg.setTimeStamp(0.3964158872261815);
    msg.setSource(1192U);
    msg.setSourceEntity(68U);
    msg.setDestination(20648U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.6954843691576411;
    msg.bias_r = 0.8532374301178898;
    msg.cog = 0.20992257244301515;
    msg.cyaw = 0.31647100793434024;
    msg.lbl_rej_level = 0.9257864380980846;
    msg.gps_rej_level = 0.6259135190435774;
    msg.custom_x = 0.8431427801276984;
    msg.custom_y = 0.5534431942157071;
    msg.custom_z = 0.6120850910510799;

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
    msg.setTimeStamp(0.8230266743314131);
    msg.setSource(1086U);
    msg.setSourceEntity(201U);
    msg.setDestination(25400U);
    msg.setDestinationEntity(181U);
    msg.bias_psi = 0.7365282417686915;
    msg.bias_r = 0.1344042185221418;
    msg.cog = 0.9924502949231346;
    msg.cyaw = 0.948945144005535;
    msg.lbl_rej_level = 0.23445722806890912;
    msg.gps_rej_level = 0.3007333096162049;
    msg.custom_x = 0.3968243794185078;
    msg.custom_y = 0.8999197599601562;
    msg.custom_z = 0.22576042108484395;

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
    msg.setTimeStamp(0.28344467491965775);
    msg.setSource(14123U);
    msg.setSourceEntity(101U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(43U);
    msg.bias_psi = 0.19266475863476606;
    msg.bias_r = 0.15921656516752192;
    msg.cog = 0.8675731884040008;
    msg.cyaw = 0.29562245596124404;
    msg.lbl_rej_level = 0.8102171154837421;
    msg.gps_rej_level = 0.18945823166672215;
    msg.custom_x = 0.9565496049339373;
    msg.custom_y = 0.20697804128452357;
    msg.custom_z = 0.7260467714480406;

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
    msg.setTimeStamp(0.6619522975400957);
    msg.setSource(15041U);
    msg.setSourceEntity(60U);
    msg.setDestination(28671U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.7416445266740127;
    msg.reason = 91U;

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
    msg.setTimeStamp(0.8032946172294356);
    msg.setSource(33142U);
    msg.setSourceEntity(61U);
    msg.setDestination(36158U);
    msg.setDestinationEntity(95U);
    msg.utc_time = 0.5249978342881283;
    msg.reason = 39U;

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
    msg.setTimeStamp(0.7922459882703499);
    msg.setSource(47768U);
    msg.setSourceEntity(48U);
    msg.setDestination(19483U);
    msg.setDestinationEntity(53U);
    msg.utc_time = 0.8310228486448271;
    msg.reason = 131U;

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
    msg.setTimeStamp(0.030272926496299313);
    msg.setSource(26083U);
    msg.setSourceEntity(96U);
    msg.setDestination(18100U);
    msg.setDestinationEntity(127U);
    msg.id = 235U;
    msg.range = 0.47024049589079076;
    msg.acceptance = 220U;

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
    msg.setTimeStamp(0.7362642548598183);
    msg.setSource(58083U);
    msg.setSourceEntity(118U);
    msg.setDestination(30602U);
    msg.setDestinationEntity(41U);
    msg.id = 229U;
    msg.range = 0.7324801338016088;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.6434408407391051);
    msg.setSource(37625U);
    msg.setSourceEntity(32U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(119U);
    msg.id = 136U;
    msg.range = 0.6598028843389335;
    msg.acceptance = 169U;

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
    msg.setTimeStamp(0.2254435811519101);
    msg.setSource(27194U);
    msg.setSourceEntity(164U);
    msg.setDestination(12190U);
    msg.setDestinationEntity(150U);
    msg.type = 70U;
    msg.reason = 217U;
    msg.value = 0.6255647159568999;
    msg.timestep = 0.07012135252780027;

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
    msg.setTimeStamp(0.608225224839581);
    msg.setSource(53171U);
    msg.setSourceEntity(205U);
    msg.setDestination(51182U);
    msg.setDestinationEntity(77U);
    msg.type = 79U;
    msg.reason = 247U;
    msg.value = 0.9541333141699876;
    msg.timestep = 0.4041273402830733;

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
    msg.setTimeStamp(0.08976147618626806);
    msg.setSource(18483U);
    msg.setSourceEntity(28U);
    msg.setDestination(49108U);
    msg.setDestinationEntity(119U);
    msg.type = 105U;
    msg.reason = 150U;
    msg.value = 0.9964214923342322;
    msg.timestep = 0.5507999699299859;

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
    msg.setTimeStamp(0.6533600506245854);
    msg.setSource(41549U);
    msg.setSourceEntity(68U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(246U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GKBHEVYUCJCWNBMXVINAVLEASHDOTKZSZEMUJTACPQPLFYIQFEXTRPAUKEVVEGFSRBMFNVGHTUNBHIXPIXWRJBGLPSIVGAQNKLOMRDGRIFFDAQKSBECEWCXFWKASCJKTHSDQTPYNJIFLPOLTQNBJMUVVTPRCQQMHTZYJBHYXD");
    tmp_msg_0.lat = 0.7627517841746259;
    tmp_msg_0.lon = 0.17234909870297122;
    tmp_msg_0.depth = 0.15745578684146433;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 62U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6685221253367393;
    msg.y = 0.19791068027570002;
    msg.var_x = 0.2097006264976332;
    msg.var_y = 0.8377965978722539;
    msg.distance = 0.12500926836044923;

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
    msg.setTimeStamp(0.6612936818365284);
    msg.setSource(20866U);
    msg.setSourceEntity(134U);
    msg.setDestination(59673U);
    msg.setDestinationEntity(40U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XDBSXPNCFIGMHZFJESWQUVDBGOLAAUCZTMOQZYXUVHLJTJRHGUCCEUFLJSKHOOBHWDTMTTRAKLVSAFTKEVCVMUPCKPIPZXYMLYKXLTWWKKIEOQUVMSJMEIUXSXVINREOIDOWNYNZVPMWJSGNAHSPWNUCOZTDQYEPQFBWYRPY");
    tmp_msg_0.lat = 0.8373272792792366;
    tmp_msg_0.lon = 0.04229553030157296;
    tmp_msg_0.depth = 0.770996016063708;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 72U;
    tmp_msg_0.transponder_delay = 78U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7635293658016796;
    msg.y = 0.612854305815012;
    msg.var_x = 0.608730829274947;
    msg.var_y = 0.41815105148975895;
    msg.distance = 0.7885276211228993;

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
    msg.setTimeStamp(0.9978314515218794);
    msg.setSource(50011U);
    msg.setSourceEntity(104U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(64U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("STSVDHYIVYDVJZZNHATLAJSRNFBFUFAP");
    tmp_msg_0.lat = 0.4444750326073399;
    tmp_msg_0.lon = 0.07362792600969292;
    tmp_msg_0.depth = 0.9987019182987188;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 165U;
    tmp_msg_0.transponder_delay = 235U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5433036017511687;
    msg.y = 0.9388662425880491;
    msg.var_x = 0.4793633292851899;
    msg.var_y = 0.12447949414607662;
    msg.distance = 0.24888184115290313;

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
    msg.setTimeStamp(0.591577736439587);
    msg.setSource(27300U);
    msg.setSourceEntity(229U);
    msg.setDestination(30802U);
    msg.setDestinationEntity(151U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.7453991473964117);
    msg.setSource(24450U);
    msg.setSourceEntity(129U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(209U);
    msg.state = 254U;

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
    msg.setTimeStamp(0.8599474874636505);
    msg.setSource(26337U);
    msg.setSourceEntity(223U);
    msg.setDestination(7157U);
    msg.setDestinationEntity(176U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.8674706306145037);
    msg.setSource(9876U);
    msg.setSourceEntity(48U);
    msg.setDestination(56570U);
    msg.setDestinationEntity(196U);
    msg.x = 0.6756501001228034;
    msg.y = 0.4347938012265832;
    msg.z = 0.8224721513523746;

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
    msg.setTimeStamp(0.7188602521368849);
    msg.setSource(23735U);
    msg.setSourceEntity(90U);
    msg.setDestination(4939U);
    msg.setDestinationEntity(188U);
    msg.x = 0.393573621809448;
    msg.y = 0.3015391652218842;
    msg.z = 0.7034427323114515;

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
    msg.setTimeStamp(0.7930820972680652);
    msg.setSource(18963U);
    msg.setSourceEntity(39U);
    msg.setDestination(7085U);
    msg.setDestinationEntity(228U);
    msg.x = 0.5773221701037735;
    msg.y = 0.1168045384961387;
    msg.z = 0.0520920640294007;

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
    msg.setTimeStamp(0.28377641583191826);
    msg.setSource(54577U);
    msg.setSourceEntity(18U);
    msg.setDestination(47579U);
    msg.setDestinationEntity(162U);
    msg.va = 0.6964533132742904;
    msg.aoa = 0.5691736458516867;
    msg.ssa = 0.433597686532481;

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
    msg.setTimeStamp(0.9317667291064924);
    msg.setSource(2357U);
    msg.setSourceEntity(10U);
    msg.setDestination(31609U);
    msg.setDestinationEntity(157U);
    msg.va = 0.9124542117710678;
    msg.aoa = 0.7102880475340938;
    msg.ssa = 0.44435131471543177;

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
    msg.setTimeStamp(0.21925585824448168);
    msg.setSource(56824U);
    msg.setSourceEntity(140U);
    msg.setDestination(38605U);
    msg.setDestinationEntity(195U);
    msg.va = 0.7367699889073317;
    msg.aoa = 0.9788451916115248;
    msg.ssa = 0.9242732797538844;

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
    msg.setTimeStamp(0.7618261204738995);
    msg.setSource(34560U);
    msg.setSourceEntity(135U);
    msg.setDestination(10448U);
    msg.setDestinationEntity(0U);
    msg.value = 0.3765309054405056;

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
    msg.setTimeStamp(0.3451529245835898);
    msg.setSource(31376U);
    msg.setSourceEntity(229U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(164U);
    msg.value = 0.12048781713065182;

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
    msg.setTimeStamp(0.6020862546400949);
    msg.setSource(62582U);
    msg.setSourceEntity(252U);
    msg.setDestination(41099U);
    msg.setDestinationEntity(75U);
    msg.value = 0.44897964398780243;

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
    msg.setTimeStamp(0.7408168993779614);
    msg.setSource(37923U);
    msg.setSourceEntity(214U);
    msg.setDestination(45318U);
    msg.setDestinationEntity(203U);
    msg.value = 0.4540617022978649;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.5593715260277518);
    msg.setSource(29933U);
    msg.setSourceEntity(35U);
    msg.setDestination(15026U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7079983483906592;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.5798030463140795);
    msg.setSource(58978U);
    msg.setSourceEntity(246U);
    msg.setDestination(7556U);
    msg.setDestinationEntity(122U);
    msg.value = 0.23719840274012016;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.9670857547264605);
    msg.setSource(11215U);
    msg.setSourceEntity(138U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7057448409474787;
    msg.speed_units = 37U;

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
    msg.setTimeStamp(0.0515311850480582);
    msg.setSource(27060U);
    msg.setSourceEntity(74U);
    msg.setDestination(16289U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0677994647917819;
    msg.speed_units = 54U;

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
    msg.setTimeStamp(0.5563512532714923);
    msg.setSource(49102U);
    msg.setSourceEntity(194U);
    msg.setDestination(55128U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3936330793616709;
    msg.speed_units = 34U;

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
    msg.setTimeStamp(0.4033924877801396);
    msg.setSource(47944U);
    msg.setSourceEntity(17U);
    msg.setDestination(43626U);
    msg.setDestinationEntity(234U);
    msg.value = 0.7063980811406858;

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
    msg.setTimeStamp(0.5065953233770695);
    msg.setSource(5955U);
    msg.setSourceEntity(217U);
    msg.setDestination(46678U);
    msg.setDestinationEntity(191U);
    msg.value = 0.08619890213765913;

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
    msg.setTimeStamp(0.12748486345117016);
    msg.setSource(29367U);
    msg.setSourceEntity(192U);
    msg.setDestination(26238U);
    msg.setDestinationEntity(30U);
    msg.value = 0.3489033281154681;

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
    msg.setTimeStamp(0.4920076074635986);
    msg.setSource(5534U);
    msg.setSourceEntity(138U);
    msg.setDestination(32585U);
    msg.setDestinationEntity(96U);
    msg.value = 0.41589619653524235;

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
    msg.setTimeStamp(0.8666134265282421);
    msg.setSource(54738U);
    msg.setSourceEntity(104U);
    msg.setDestination(7307U);
    msg.setDestinationEntity(147U);
    msg.value = 0.7843863971212414;

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
    msg.setTimeStamp(0.1842558650609457);
    msg.setSource(54600U);
    msg.setSourceEntity(204U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7158758999428849;

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
    msg.setTimeStamp(0.366936679741515);
    msg.setSource(26157U);
    msg.setSourceEntity(252U);
    msg.setDestination(5857U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9362942127387524;

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
    msg.setTimeStamp(0.4658352114626453);
    msg.setSource(35748U);
    msg.setSourceEntity(28U);
    msg.setDestination(51975U);
    msg.setDestinationEntity(162U);
    msg.value = 0.059703281414421605;

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
    msg.setTimeStamp(0.6188816101609919);
    msg.setSource(58681U);
    msg.setSourceEntity(147U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5620467179289033;

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
    msg.setTimeStamp(0.3646480690979853);
    msg.setSource(42268U);
    msg.setSourceEntity(190U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 1433820619U;
    msg.start_lat = 0.8778416823024598;
    msg.start_lon = 0.84947545778295;
    msg.start_z = 0.46866589269005976;
    msg.start_z_units = 2U;
    msg.end_lat = 0.4032181225892941;
    msg.end_lon = 0.6734734338311221;
    msg.end_z = 0.7098519557069487;
    msg.end_z_units = 177U;
    msg.speed = 0.6712483557966511;
    msg.speed_units = 247U;
    msg.lradius = 0.7184575444646143;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.18500051192953026);
    msg.setSource(24845U);
    msg.setSourceEntity(68U);
    msg.setDestination(27946U);
    msg.setDestinationEntity(123U);
    msg.path_ref = 3936285295U;
    msg.start_lat = 0.3273936072658352;
    msg.start_lon = 0.3468809995528558;
    msg.start_z = 0.9848525117425582;
    msg.start_z_units = 201U;
    msg.end_lat = 0.8981434740623498;
    msg.end_lon = 0.1490673059844445;
    msg.end_z = 0.5077145457695333;
    msg.end_z_units = 97U;
    msg.speed = 0.09502410482736878;
    msg.speed_units = 100U;
    msg.lradius = 0.8254455913201212;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.08048155017902714);
    msg.setSource(37656U);
    msg.setSourceEntity(163U);
    msg.setDestination(5602U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 468783822U;
    msg.start_lat = 0.8836205039134349;
    msg.start_lon = 0.5535448426446073;
    msg.start_z = 0.20345860564913487;
    msg.start_z_units = 165U;
    msg.end_lat = 0.9485233708738908;
    msg.end_lon = 0.4986826766575203;
    msg.end_z = 0.8180217432988824;
    msg.end_z_units = 81U;
    msg.speed = 0.46256525609940247;
    msg.speed_units = 121U;
    msg.lradius = 0.8082986160288342;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.7243729737541479);
    msg.setSource(22136U);
    msg.setSourceEntity(138U);
    msg.setDestination(22417U);
    msg.setDestinationEntity(67U);
    msg.x = 0.06555954428571176;
    msg.y = 0.6863692806837453;
    msg.z = 0.9600099995309456;
    msg.k = 0.05180816647657205;
    msg.m = 0.1813359272615771;
    msg.n = 0.34973211021347383;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.056376218582964155);
    msg.setSource(18896U);
    msg.setSourceEntity(119U);
    msg.setDestination(36100U);
    msg.setDestinationEntity(145U);
    msg.x = 0.3957787867053688;
    msg.y = 0.504366969039034;
    msg.z = 0.43719661887737893;
    msg.k = 0.47356327206026816;
    msg.m = 0.16061195676472095;
    msg.n = 0.5280235941512529;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.73118054647866);
    msg.setSource(38225U);
    msg.setSourceEntity(63U);
    msg.setDestination(57120U);
    msg.setDestinationEntity(162U);
    msg.x = 0.20007452180579022;
    msg.y = 0.9068794363552078;
    msg.z = 0.15654488100541142;
    msg.k = 0.297953826389711;
    msg.m = 0.5295047581809025;
    msg.n = 0.3372323809997537;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.23524844475862583);
    msg.setSource(26704U);
    msg.setSourceEntity(89U);
    msg.setDestination(2716U);
    msg.setDestinationEntity(102U);
    msg.value = 0.14215711841735656;

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
    msg.setTimeStamp(0.3687304995485753);
    msg.setSource(52555U);
    msg.setSourceEntity(148U);
    msg.setDestination(9426U);
    msg.setDestinationEntity(67U);
    msg.value = 0.13593254347470463;

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
    msg.setTimeStamp(0.5636198887607858);
    msg.setSource(54058U);
    msg.setSourceEntity(229U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(169U);
    msg.value = 0.16100009309954888;

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
    msg.setTimeStamp(0.3578711070139612);
    msg.setSource(17476U);
    msg.setSourceEntity(159U);
    msg.setDestination(41346U);
    msg.setDestinationEntity(136U);
    msg.u = 0.14560952515730674;
    msg.v = 0.26669408661340566;
    msg.w = 0.4999228865889668;
    msg.p = 0.9814422662838458;
    msg.q = 0.5137332596026387;
    msg.r = 0.27544075830887715;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.741229226793001);
    msg.setSource(22447U);
    msg.setSourceEntity(6U);
    msg.setDestination(37442U);
    msg.setDestinationEntity(187U);
    msg.u = 0.3041247478748528;
    msg.v = 0.9396289511835918;
    msg.w = 0.6071575541360102;
    msg.p = 0.8011348919963747;
    msg.q = 0.06346357930588675;
    msg.r = 0.4904089503185083;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.1963652927844034);
    msg.setSource(26421U);
    msg.setSourceEntity(82U);
    msg.setDestination(64854U);
    msg.setDestinationEntity(42U);
    msg.u = 0.9925844830849644;
    msg.v = 0.9754185312202647;
    msg.w = 0.5450290928428448;
    msg.p = 0.6693057207286157;
    msg.q = 0.29927755981240123;
    msg.r = 0.7306407214028632;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.4502016184380364);
    msg.setSource(48232U);
    msg.setSourceEntity(38U);
    msg.setDestination(58501U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 4235490550U;
    msg.start_lat = 0.46253010396825467;
    msg.start_lon = 0.2405281512314953;
    msg.start_z = 0.22221650484628308;
    msg.start_z_units = 132U;
    msg.end_lat = 0.14429610764652612;
    msg.end_lon = 0.9965621611230658;
    msg.end_z = 0.6915272967784061;
    msg.end_z_units = 248U;
    msg.lradius = 0.17777347497645601;
    msg.flags = 37U;
    msg.x = 0.4239851545868065;
    msg.y = 0.584214899984025;
    msg.z = 0.3174030089692038;
    msg.vx = 0.21620408019191917;
    msg.vy = 0.9994007584975844;
    msg.vz = 0.41301378456752913;
    msg.course_error = 0.5781509225371476;
    msg.eta = 4674U;

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
    msg.setTimeStamp(0.2785937115990701);
    msg.setSource(25249U);
    msg.setSourceEntity(96U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(22U);
    msg.path_ref = 3748027901U;
    msg.start_lat = 0.7401062134028759;
    msg.start_lon = 0.6797333480125735;
    msg.start_z = 0.12089252843395981;
    msg.start_z_units = 61U;
    msg.end_lat = 0.15368072475315497;
    msg.end_lon = 0.716621788111659;
    msg.end_z = 0.3614220830045659;
    msg.end_z_units = 157U;
    msg.lradius = 0.12995368610150637;
    msg.flags = 208U;
    msg.x = 0.22198328551829694;
    msg.y = 0.2569999920169196;
    msg.z = 0.12902257210308232;
    msg.vx = 0.6632275312231177;
    msg.vy = 0.35647306203665163;
    msg.vz = 0.04272881322407529;
    msg.course_error = 0.5215587215327073;
    msg.eta = 49564U;

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
    msg.setTimeStamp(0.46157623987890295);
    msg.setSource(39696U);
    msg.setSourceEntity(168U);
    msg.setDestination(1177U);
    msg.setDestinationEntity(234U);
    msg.path_ref = 841090039U;
    msg.start_lat = 0.6533590250696076;
    msg.start_lon = 0.9075207606513904;
    msg.start_z = 0.1905435826484002;
    msg.start_z_units = 179U;
    msg.end_lat = 0.1552546280114484;
    msg.end_lon = 0.28083772785880745;
    msg.end_z = 0.3990296246453614;
    msg.end_z_units = 95U;
    msg.lradius = 0.10453401548003372;
    msg.flags = 56U;
    msg.x = 0.8294373874294934;
    msg.y = 0.9913575768966676;
    msg.z = 0.44481454563780654;
    msg.vx = 0.0027578667976372317;
    msg.vy = 0.9996261761503171;
    msg.vz = 0.5014929943484224;
    msg.course_error = 0.553785270662151;
    msg.eta = 9678U;

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
    msg.setTimeStamp(0.9686649103774362);
    msg.setSource(61270U);
    msg.setSourceEntity(21U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(156U);
    msg.k = 0.5211066941050585;
    msg.m = 0.584890208219724;
    msg.n = 0.026864364544698427;

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
    msg.setTimeStamp(0.4464777827588736);
    msg.setSource(65149U);
    msg.setSourceEntity(110U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(232U);
    msg.k = 0.014394469692029843;
    msg.m = 0.19875262647697645;
    msg.n = 0.9142360581980968;

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
    msg.setTimeStamp(0.24305080847002902);
    msg.setSource(6119U);
    msg.setSourceEntity(151U);
    msg.setDestination(27093U);
    msg.setDestinationEntity(82U);
    msg.k = 0.3904351198066325;
    msg.m = 0.4974164081948972;
    msg.n = 0.06796898254219985;

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
    msg.setTimeStamp(0.8819053801701157);
    msg.setSource(28818U);
    msg.setSourceEntity(45U);
    msg.setDestination(14357U);
    msg.setDestinationEntity(192U);
    msg.p = 0.6411210009567644;
    msg.i = 0.6701827467612314;
    msg.d = 0.3451012219491524;
    msg.a = 0.16264286253144544;

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
    msg.setTimeStamp(0.305702582600477);
    msg.setSource(31881U);
    msg.setSourceEntity(40U);
    msg.setDestination(36376U);
    msg.setDestinationEntity(77U);
    msg.p = 0.5144183213154487;
    msg.i = 0.13786758282495393;
    msg.d = 0.1739812418538048;
    msg.a = 0.6783549328378777;

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
    msg.setTimeStamp(0.3859895798052374);
    msg.setSource(12882U);
    msg.setSourceEntity(164U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(150U);
    msg.p = 0.37998601001895604;
    msg.i = 0.39544360602621886;
    msg.d = 0.2821782461757476;
    msg.a = 0.4484879603809073;

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
    msg.setTimeStamp(0.6630600362668289);
    msg.setSource(38706U);
    msg.setSourceEntity(252U);
    msg.setDestination(38726U);
    msg.setDestinationEntity(240U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.4598743840287578);
    msg.setSource(6365U);
    msg.setSourceEntity(99U);
    msg.setDestination(16900U);
    msg.setDestinationEntity(68U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.5707559370111563);
    msg.setSource(28679U);
    msg.setSourceEntity(190U);
    msg.setDestination(39448U);
    msg.setDestinationEntity(241U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.38030955603796446);
    msg.setSource(28660U);
    msg.setSourceEntity(19U);
    msg.setDestination(47614U);
    msg.setDestinationEntity(6U);
    msg.x = 0.6720018884003323;
    msg.y = 0.0414480489916732;
    msg.z = 0.8274849153354927;
    msg.vx = 0.9689492206785938;
    msg.vy = 0.6974040154587787;
    msg.vz = 0.1223118844357497;
    msg.ax = 0.05473734407903941;
    msg.ay = 0.6150289191234166;
    msg.az = 0.443080538291857;
    msg.flags = 41352U;

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
    msg.setTimeStamp(0.5699268098952873);
    msg.setSource(63878U);
    msg.setSourceEntity(94U);
    msg.setDestination(7890U);
    msg.setDestinationEntity(247U);
    msg.x = 0.0691702672679918;
    msg.y = 0.19113577644724278;
    msg.z = 0.05650285814125178;
    msg.vx = 0.5112494411752458;
    msg.vy = 0.46470779014728025;
    msg.vz = 0.8279760341975113;
    msg.ax = 0.5480199915885159;
    msg.ay = 0.24843736038366482;
    msg.az = 0.32422415098535595;
    msg.flags = 42759U;

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
    msg.setTimeStamp(0.5715165132044813);
    msg.setSource(23803U);
    msg.setSourceEntity(230U);
    msg.setDestination(7612U);
    msg.setDestinationEntity(198U);
    msg.x = 0.9612537961799644;
    msg.y = 0.3562737808103781;
    msg.z = 0.5290945400691601;
    msg.vx = 0.09167429631493185;
    msg.vy = 0.45449584149458666;
    msg.vz = 0.334692046971116;
    msg.ax = 0.5393125133183592;
    msg.ay = 0.6329827557555906;
    msg.az = 0.0835471459949878;
    msg.flags = 47313U;

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
    msg.setTimeStamp(0.036588525130735405);
    msg.setSource(1362U);
    msg.setSourceEntity(225U);
    msg.setDestination(5717U);
    msg.setDestinationEntity(37U);
    msg.value = 0.056939167883842234;

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
    msg.setTimeStamp(0.5413414404689741);
    msg.setSource(55796U);
    msg.setSourceEntity(90U);
    msg.setDestination(52071U);
    msg.setDestinationEntity(91U);
    msg.value = 0.553026348936534;

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
    msg.setTimeStamp(0.135216074874417);
    msg.setSource(11029U);
    msg.setSourceEntity(17U);
    msg.setDestination(49064U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5350830980140445;

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
    msg.setTimeStamp(0.6403935096015255);
    msg.setSource(52512U);
    msg.setSourceEntity(144U);
    msg.setDestination(43240U);
    msg.setDestinationEntity(88U);
    msg.timeout = 4511U;
    msg.lat = 0.11269627947156369;
    msg.lon = 0.8716722294179583;
    msg.z = 0.7905925477434382;
    msg.z_units = 45U;
    msg.speed = 0.01839221166162297;
    msg.speed_units = 110U;
    msg.roll = 0.8342724437676386;
    msg.pitch = 0.686268915550646;
    msg.yaw = 0.3101630922697036;
    msg.custom.assign("YJFLNIQZJEHKUIKKUYAIYGMKIOEXNVXWADSGSLRKHXWYPDSLRTKDXEXSLNGDCLSKV");

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
    msg.setTimeStamp(0.222467192978689);
    msg.setSource(33833U);
    msg.setSourceEntity(168U);
    msg.setDestination(42541U);
    msg.setDestinationEntity(157U);
    msg.timeout = 12062U;
    msg.lat = 0.13814371301079176;
    msg.lon = 0.5238833193200102;
    msg.z = 0.9227559155429522;
    msg.z_units = 224U;
    msg.speed = 0.36440619092556037;
    msg.speed_units = 37U;
    msg.roll = 0.5207562913497604;
    msg.pitch = 0.008458727179613157;
    msg.yaw = 0.8526812804347176;
    msg.custom.assign("SNXTYAXIHTG");

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
    msg.setTimeStamp(0.11077337630162032);
    msg.setSource(513U);
    msg.setSourceEntity(195U);
    msg.setDestination(4014U);
    msg.setDestinationEntity(226U);
    msg.timeout = 8888U;
    msg.lat = 0.5319716112333359;
    msg.lon = 0.8411979154990262;
    msg.z = 0.3240081257199168;
    msg.z_units = 170U;
    msg.speed = 0.9512769859343337;
    msg.speed_units = 220U;
    msg.roll = 0.7549756385438665;
    msg.pitch = 0.8750151526989727;
    msg.yaw = 0.8845343618152561;
    msg.custom.assign("GHYPGZRBVGSNXHQVFHICYKWJVIXMBPXZJDUIDXGTASGTQFZXJHAEKWMVRWHUWNJCTZKDUNKSRJPIHECJABQJHMTWDROQTVEUUSABWGOLVLIEKCCZRPFMNCCODNOKFLNGMOBAUGLFSYAFVZEFPYYBLNAXEJZAHVIHPYWQRNMOTZGUYLSRVYUUTTDWBIQNHBESXEERGLWOKSBFSPYWLMBITFYAPK");

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
    msg.setTimeStamp(0.9170205357779704);
    msg.setSource(10711U);
    msg.setSourceEntity(63U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(73U);
    msg.timeout = 1730U;
    msg.lat = 0.33480051767670316;
    msg.lon = 0.9112035589466407;
    msg.z = 0.5003552048084887;
    msg.z_units = 54U;
    msg.speed = 0.0023802378801253132;
    msg.speed_units = 195U;
    msg.duration = 28639U;
    msg.radius = 0.7214442738164415;
    msg.flags = 146U;
    msg.custom.assign("UUUJGDCRNUHWFHAWHZAN");

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
    msg.setTimeStamp(0.4415700562461675);
    msg.setSource(23723U);
    msg.setSourceEntity(158U);
    msg.setDestination(57242U);
    msg.setDestinationEntity(136U);
    msg.timeout = 21602U;
    msg.lat = 0.6896165158732838;
    msg.lon = 0.14254805422876504;
    msg.z = 0.26110061850670896;
    msg.z_units = 38U;
    msg.speed = 0.1824197307995713;
    msg.speed_units = 152U;
    msg.duration = 12561U;
    msg.radius = 0.8265216529234489;
    msg.flags = 126U;
    msg.custom.assign("WCRUVORUWXRYCAXNWOORGWHNYBVBLBKIAGHFODHMVSRELJJOHFSNUVAHBAEMPJLPQXNFZRSVKUMWDMUKZTEMTFOPMPOQIETTGRREKYZUDYCBILAQMCDCXSGCJYEJXQAGFMPZFYLVZQLCBVXPALQRHZXITBDZEYVXIGBCBSCOVNHQBNYUOTDTSFUAKWRLW");

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
    msg.setTimeStamp(0.4969287184520841);
    msg.setSource(60213U);
    msg.setSourceEntity(160U);
    msg.setDestination(9667U);
    msg.setDestinationEntity(27U);
    msg.timeout = 39929U;
    msg.lat = 0.5653031576684642;
    msg.lon = 0.005034670874028202;
    msg.z = 0.11515459813081186;
    msg.z_units = 215U;
    msg.speed = 0.2752319657851935;
    msg.speed_units = 124U;
    msg.duration = 17559U;
    msg.radius = 0.7683439793672246;
    msg.flags = 221U;
    msg.custom.assign("ROOPNXPTXIGWNVIZBNYJNYCGOOILOSPYXODMMQXJKCMBFYZHHLIDSUQUPEUFYAFQSUVTKRKAEFGWTSWYQQZQWKWHIXBCUJOSEIYQCVMKADCIAYIZDMHLPRLXAQBVVTGEORBPJXXHYFEKRLFGDAGIPTFWDHCX");

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
    msg.setTimeStamp(0.6293355678287649);
    msg.setSource(38366U);
    msg.setSourceEntity(54U);
    msg.setDestination(24641U);
    msg.setDestinationEntity(13U);
    msg.custom.assign("VOVWQVXHIJTOJSCKYNNAVGQKJCGCGCXJIXQSPCVTIUZIZYFLQHJBWUMAMRWBBHLVJGERAPXQVOYUPNNDSKMBLLWUAIMDGEETSLGIMLYTGCRNLODQZAWDMXSW");

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
    msg.setTimeStamp(0.33882791221047304);
    msg.setSource(56851U);
    msg.setSourceEntity(161U);
    msg.setDestination(26609U);
    msg.setDestinationEntity(92U);
    msg.custom.assign("CJRYVKQGSYJVZLMTQFXHFUDMDCKGQAWMMZMICNPVLTSTZFZOAABLVBSPOMJEKXNCGQZNQWDABQQVGUXNBLMBZSNYFDKGBDRQHPRNFAUODDJKYEBYKHRWSBASGCZOZWYIHWLXPYKUQBXSOOTTFBC");

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
    msg.setTimeStamp(0.14647276724628044);
    msg.setSource(45845U);
    msg.setSourceEntity(190U);
    msg.setDestination(48319U);
    msg.setDestinationEntity(74U);
    msg.custom.assign("FYXAOCXEBGJYGKQEAASMLLXFWRNTJHNYWKQBREKOTNGNBTCZMDFDNHNCJBCJUIHYDSHNRKKPMZWWTQUEPIECDKBLQDUOZQXQVOUFZHIXMZREILUHPNFVPZJBSRFWVAVZIBMGIAFLEYPQEPNEVTXZWCUJTLTLDWDXNGRMSOPUUSGVCRAAGYXZYAQ");

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
    msg.setTimeStamp(0.5401257963295618);
    msg.setSource(23278U);
    msg.setSourceEntity(214U);
    msg.setDestination(51035U);
    msg.setDestinationEntity(65U);
    msg.timeout = 3806U;
    msg.lat = 0.6828195575496177;
    msg.lon = 0.09132258184213748;
    msg.z = 0.5249098873200363;
    msg.z_units = 141U;
    msg.duration = 43590U;
    msg.speed = 0.779763630666735;
    msg.speed_units = 92U;
    msg.type = 122U;
    msg.radius = 0.922210069331667;
    msg.length = 0.930703877025381;
    msg.bearing = 0.18849701974416133;
    msg.direction = 7U;
    msg.custom.assign("UICBNRTUKLWOASDAUCBEMHJPXOQFNOARQIDUJJUZWLBOXOVRZIGSQTSCLXVDPJKTYETTKMHBVXFCKJLDLGEPBQIAAPRXYWZNIWSUXEROHPLMOBVEHKMQMWVZNWPQFOPAAGAPESTNYEZMZAYTIJLBCRZBIURJO");

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
    msg.setTimeStamp(0.561611310403246);
    msg.setSource(46097U);
    msg.setSourceEntity(137U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(54U);
    msg.timeout = 3168U;
    msg.lat = 0.9667401666813323;
    msg.lon = 0.7092384755984051;
    msg.z = 0.04358959430562903;
    msg.z_units = 22U;
    msg.duration = 11988U;
    msg.speed = 0.7854759204828583;
    msg.speed_units = 40U;
    msg.type = 159U;
    msg.radius = 0.6932492163821683;
    msg.length = 0.42940635940963134;
    msg.bearing = 0.39495983591997175;
    msg.direction = 1U;
    msg.custom.assign("QACUGZBCUPPEDNHHEKIRIYFCGZXSLZUOVYUSNOBWGXFPHIYWHLKHCKVNGDELZNXDVBVKUBJGIQTRBTUVZDFORQQYXNRRMMAKAAIAEHKBVCLLOFFTSZQXWGBDQWSRLIADWKPWMEWRFYGVLIDJXZJVCSCCGTDYCKNOEPQKORMJBPEEKTMLMJUOPYNYOHQUFNAWSSAJLTJCTYJAMPJZPI");

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
    msg.setTimeStamp(0.9405069366892844);
    msg.setSource(58990U);
    msg.setSourceEntity(15U);
    msg.setDestination(42614U);
    msg.setDestinationEntity(111U);
    msg.timeout = 691U;
    msg.lat = 0.5759111947874364;
    msg.lon = 0.4027955199438229;
    msg.z = 0.749866162831862;
    msg.z_units = 34U;
    msg.duration = 47747U;
    msg.speed = 0.9115039593720061;
    msg.speed_units = 205U;
    msg.type = 130U;
    msg.radius = 0.7033238909435924;
    msg.length = 0.2735783054963543;
    msg.bearing = 0.592192195098139;
    msg.direction = 112U;
    msg.custom.assign("DXTQIEQICLEOOIYFUDJSXRK");

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
    msg.setTimeStamp(0.3446770497712227);
    msg.setSource(27009U);
    msg.setSourceEntity(230U);
    msg.setDestination(32641U);
    msg.setDestinationEntity(48U);
    msg.duration = 59529U;
    msg.custom.assign("PBEQUWIEOJKTQYBSRGGLHLOZTWSDLHYJBOAHYMZMRTMQQAIZAEWCDLWBBNHOEVCFFXJTQTUTPRJTFWKDVACEXJXDSXPGSMEGGIQN");

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
    msg.setTimeStamp(0.8951656181230672);
    msg.setSource(55632U);
    msg.setSourceEntity(175U);
    msg.setDestination(3915U);
    msg.setDestinationEntity(236U);
    msg.duration = 10660U;
    msg.custom.assign("RDMVJCLWJZGQEQPTJOCHXFDMUKMBVVITOOWXRPOCWMRCPSRBZWEGQSPYBLOLUJYCSVLDLRUXDIOUODJYWCAKNBSMYVZRISFZMKEVBFMHYXSEQESCHCHIYZBNQXVXTGYHLQGGAENRHHAGYXQFGWFAJKWIFKHJBDNOMZDTDFASCYAIKFNBANGTUEIRTQROTHLLLVKDUHNTIBMVPPSPUZFUZAWQFIEEJBLVIU");

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
    msg.setTimeStamp(0.5472929613705823);
    msg.setSource(1938U);
    msg.setSourceEntity(147U);
    msg.setDestination(1038U);
    msg.setDestinationEntity(102U);
    msg.duration = 57771U;
    msg.custom.assign("EBVNDVBACMIPEWCPGRRCRFXREKVFDDGRUDHBZKGJXDHUFUEZLXMPHGFJDVPHAVIYAOUGWQSYEGOIPJOXDWHKNNLEXXYEPQAZPTNYRTOKSAQHMWZMJCVBLSCJCXWQJZFAQXSRWUBGILFTNOKEVAUITSZOMNRQWMGNABAYHRCLKEU");

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
    msg.setTimeStamp(0.8437349436655052);
    msg.setSource(40529U);
    msg.setSourceEntity(77U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(67U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5568743922156396;
    tmp_msg_0.z_units = 92U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12985U;
    msg.custom.assign("UJUSTTEFDEURLGAXYRLQRYPNSTCHCIHGOGDZZAKMTMLAWQKZENHTNLAJVMLCEETKL");

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
    msg.setTimeStamp(0.5538312978015028);
    msg.setSource(49220U);
    msg.setSourceEntity(236U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(248U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.01125529325967145;
    tmp_msg_0.speed_units = 98U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55888U;
    msg.custom.assign("OQTYWWPPFMODIJFPPZHCEXFUJNOLKBWZMFTEWBICZRAPRECXJYDXAKIBHUMMWIQTDTHRXPEMUNKJXCFZYOBHUKPTCSHQUNGSRKJVRTWSQDTGEVSDMCKRQGJGNRGGSAGSCAPKDJAJYYCCFYOCUEDDXNIVNXSRBYLLBAHLIWTGTZEDHZRKXONEGNREZXXOBLVKVDQZEASOJQKVAAQAWGMIWJPSVLZYYVSPHUOTMUONHLQQBMIMULYBHLFWFFNUIV");

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
    msg.setTimeStamp(0.4006241381662329);
    msg.setSource(20078U);
    msg.setSourceEntity(63U);
    msg.setDestination(38407U);
    msg.setDestinationEntity(33U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9673514646806439;
    tmp_msg_0.speed_units = 56U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11746U;
    msg.custom.assign("WHPOTABUMIYJUCRMGIDCCJYZQCFHPEWJRGHOCYNAUDSIJLPIFXATZVQYKSSGBONJMTZUJAI");

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
    msg.setTimeStamp(0.8034543786445514);
    msg.setSource(3478U);
    msg.setSourceEntity(89U);
    msg.setDestination(10755U);
    msg.setDestinationEntity(128U);
    msg.timeout = 44081U;
    msg.lat = 0.8701020690676411;
    msg.lon = 0.547752395749265;
    msg.z = 0.5439672512274392;
    msg.z_units = 201U;
    msg.speed = 0.18448502654539978;
    msg.speed_units = 8U;
    msg.bearing = 0.7261731633750417;
    msg.cross_angle = 0.6735427769428503;
    msg.width = 0.18532480636481585;
    msg.length = 0.4170084910600904;
    msg.hstep = 0.8808943739891271;
    msg.coff = 2U;
    msg.alternation = 215U;
    msg.flags = 83U;
    msg.custom.assign("OGEHMYDUEOUSPHUVIGZGXWVZLKGASYRGPTWOCVAMYUODDXFJBRVIXNCLMXHMRABRZJWWLZKQTJIOANCXWNTEVKDVNEXYFMYKFKXKRARLBEOBCNBDBTPDDSYYEJFZLRBVTJQWGPKHIJUACVAQAYTNTUUTQZIF");

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
    msg.setTimeStamp(0.4589168177373184);
    msg.setSource(12366U);
    msg.setSourceEntity(225U);
    msg.setDestination(37492U);
    msg.setDestinationEntity(95U);
    msg.timeout = 13812U;
    msg.lat = 0.5498817803990939;
    msg.lon = 0.8972965940800461;
    msg.z = 0.4266777026388524;
    msg.z_units = 127U;
    msg.speed = 0.2753920391771413;
    msg.speed_units = 162U;
    msg.bearing = 0.11300427737060026;
    msg.cross_angle = 0.6059875301658245;
    msg.width = 0.7212973857966781;
    msg.length = 0.7364031807412382;
    msg.hstep = 0.7381745148016822;
    msg.coff = 206U;
    msg.alternation = 202U;
    msg.flags = 171U;
    msg.custom.assign("OIWDWYCUMKFMBPLHXMCJRLVDAERKTDDAERUKXLFXIBKWFWQTHGCDNYWOVYUSBBHTGXRUGZBMBRSUGNWLUXRFOKRQRZESLNY");

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
    msg.setTimeStamp(0.2321649458408528);
    msg.setSource(63933U);
    msg.setSourceEntity(234U);
    msg.setDestination(12838U);
    msg.setDestinationEntity(100U);
    msg.timeout = 25310U;
    msg.lat = 0.012117391406393896;
    msg.lon = 0.8713670156307659;
    msg.z = 0.41882285885757997;
    msg.z_units = 31U;
    msg.speed = 0.6044550720909838;
    msg.speed_units = 66U;
    msg.bearing = 0.7098836019667754;
    msg.cross_angle = 0.6662135934247639;
    msg.width = 0.5458576087102683;
    msg.length = 0.08279273951338506;
    msg.hstep = 0.859228551192986;
    msg.coff = 126U;
    msg.alternation = 102U;
    msg.flags = 26U;
    msg.custom.assign("FWISIWWXJUTQGZZPHRYGKACQDOGIZXJVCLZDHBJAEDKNHDMMTJWUJJXULVTPLK");

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
    msg.setTimeStamp(0.2469069302395105);
    msg.setSource(18035U);
    msg.setSourceEntity(99U);
    msg.setDestination(33492U);
    msg.setDestinationEntity(155U);
    msg.timeout = 12252U;
    msg.lat = 0.9358174468509725;
    msg.lon = 0.5734111196066373;
    msg.z = 0.8563703393804957;
    msg.z_units = 220U;
    msg.speed = 0.5242411456055212;
    msg.speed_units = 40U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.12545782179057718;
    tmp_msg_0.y = 0.8679935493298658;
    tmp_msg_0.z = 0.5961829024712927;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DVOXMVEQDLSYZRRLKUBKACSLDGDQKHERYEOYMITNPSJDECJLWFXBCFKQAFGPJGEAKEVAMQFCNEISKWHTHCRKTMFWZCTWHVEGFKQZIWRBUZPAISSBOSIFLEYOJHFBGMJHIXRTHQKBUNGHNMAZWOICTMAIBMBUJENZPYQ");

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
    msg.setTimeStamp(0.6635093783823978);
    msg.setSource(11128U);
    msg.setSourceEntity(88U);
    msg.setDestination(22018U);
    msg.setDestinationEntity(154U);
    msg.timeout = 31032U;
    msg.lat = 0.4075247503983661;
    msg.lon = 0.30833090209493275;
    msg.z = 0.3405071691758972;
    msg.z_units = 206U;
    msg.speed = 0.07882252596223027;
    msg.speed_units = 46U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6923401706796436;
    tmp_msg_0.y = 0.6269684779725707;
    tmp_msg_0.z = 0.5585790436040314;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RNNMKHILQQQQTIOSEYVBLLHCMWSSETDFRVIJRAQJCQJPNZMTMWMTEPBERXUCTZHGO");

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
    msg.setTimeStamp(0.8845197272903128);
    msg.setSource(15907U);
    msg.setSourceEntity(163U);
    msg.setDestination(47946U);
    msg.setDestinationEntity(46U);
    msg.timeout = 52034U;
    msg.lat = 0.8549918642621839;
    msg.lon = 0.657476805472356;
    msg.z = 0.465908639182806;
    msg.z_units = 65U;
    msg.speed = 0.05925508325728901;
    msg.speed_units = 33U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.08667196474192285;
    tmp_msg_0.y = 0.3070674690428905;
    tmp_msg_0.z = 0.7526007815193052;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SRZLHUFNKTXIINZLTAKJTAGMYLFFFPWUXGTTBCUJZQYAPEXBOCDCDTQZTHBUECAYMVUSJXMNASVYHWGRIECQMBZQKVRVXXRHUTLWFCOODZNKCYDQZAIGXCLAXPQPJSBKRLBBJUSRZMNESMNDVODCIPMFEIFKHGVDKBDGJZWIGOKOWMTFVKHUHGDMUEQOEIJOGEYPEPSWAPNNWSYJHXY");

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
    msg.setTimeStamp(0.1322977378624549);
    msg.setSource(42362U);
    msg.setSourceEntity(143U);
    msg.setDestination(48883U);
    msg.setDestinationEntity(49U);
    msg.x = 0.7655995588956924;
    msg.y = 0.6612441451758507;
    msg.z = 0.6081400406113907;

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
    msg.setTimeStamp(0.910964835912993);
    msg.setSource(59998U);
    msg.setSourceEntity(227U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(172U);
    msg.x = 0.5770485207471581;
    msg.y = 0.37399341988384116;
    msg.z = 0.5451148383851631;

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
    msg.setTimeStamp(0.49330792107851085);
    msg.setSource(57441U);
    msg.setSourceEntity(121U);
    msg.setDestination(56430U);
    msg.setDestinationEntity(202U);
    msg.x = 0.6538274617096939;
    msg.y = 0.8110014936460747;
    msg.z = 0.30128472194885214;

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
    msg.setTimeStamp(0.8902290018820221);
    msg.setSource(61447U);
    msg.setSourceEntity(197U);
    msg.setDestination(54298U);
    msg.setDestinationEntity(111U);
    msg.timeout = 9639U;
    msg.lat = 0.2736480802014907;
    msg.lon = 0.30278650137998253;
    msg.z = 0.882212310796556;
    msg.z_units = 127U;
    msg.amplitude = 0.18038604185848905;
    msg.pitch = 0.8000297390076583;
    msg.speed = 0.48807441098828985;
    msg.speed_units = 181U;
    msg.custom.assign("IYQAJJJNXEGIUPTTOMSDMHCTFGYWVFUDIXONRNDQNTXGSSCGNSTWFHFFPEFTEGFQBMINFLTPCXLDLQVAZWSPNRLEOHPVHAAKHCWYKZRADQVEGBUBZKIJUKAPYEGVLVYSNCUOHYBCSLEAQJQBOJLCDPQZNMSWBPMYUKARMZIARRBNQKEBWKIMRXRPUZJYAMHUXMDEGOODW");

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
    msg.setTimeStamp(0.39549267127291243);
    msg.setSource(30103U);
    msg.setSourceEntity(96U);
    msg.setDestination(5808U);
    msg.setDestinationEntity(26U);
    msg.timeout = 61309U;
    msg.lat = 0.48489704854855575;
    msg.lon = 0.276613709425536;
    msg.z = 0.7157751183184154;
    msg.z_units = 189U;
    msg.amplitude = 0.70687031824844;
    msg.pitch = 0.4468528625120931;
    msg.speed = 0.02121940032769931;
    msg.speed_units = 250U;
    msg.custom.assign("HWJWEHUTLZERBKDFQZRJZVXXANLSBZRMAHECQKHSXHZYYACEMNDEEWWNTINQRVFFPJIONCBVOYKLPURVQIMU");

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
    msg.setTimeStamp(0.27265415079037014);
    msg.setSource(12626U);
    msg.setSourceEntity(145U);
    msg.setDestination(47620U);
    msg.setDestinationEntity(148U);
    msg.timeout = 54500U;
    msg.lat = 0.4262121912432062;
    msg.lon = 0.6898042016445823;
    msg.z = 0.12962662722373985;
    msg.z_units = 154U;
    msg.amplitude = 0.8839296604492699;
    msg.pitch = 0.8559538798865319;
    msg.speed = 0.04211195212764318;
    msg.speed_units = 152U;
    msg.custom.assign("DBVFUOUJDB");

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
    msg.setTimeStamp(0.18625335841774948);
    msg.setSource(29763U);
    msg.setSourceEntity(177U);
    msg.setDestination(52116U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.7465436268568041);
    msg.setSource(33868U);
    msg.setSourceEntity(183U);
    msg.setDestination(51104U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.5688298029044522);
    msg.setSource(64953U);
    msg.setSourceEntity(78U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.8157157797622684);
    msg.setSource(4365U);
    msg.setSourceEntity(104U);
    msg.setDestination(895U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.04858285369580584;
    msg.lon = 0.6747583443075255;
    msg.z = 0.5559816154772796;
    msg.z_units = 146U;
    msg.radius = 0.3520087200473849;
    msg.duration = 50347U;
    msg.speed = 0.9890326083029178;
    msg.speed_units = 88U;
    msg.custom.assign("YGWKKRFIBGNCPXAAVVBBOREWSVNINMIQDCHUENQUPYJSBSRKJTUWSOUGQMURRWDQORQIFZTJAFCZJYTDFXNAZRLCTLZAFJGOLSXMGDXHUPSFVBIEJK");

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
    msg.setTimeStamp(0.3613465944159271);
    msg.setSource(10298U);
    msg.setSourceEntity(192U);
    msg.setDestination(7595U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.487488192074751;
    msg.lon = 0.7018549709891491;
    msg.z = 0.30187487035323235;
    msg.z_units = 184U;
    msg.radius = 0.031888699418563315;
    msg.duration = 57519U;
    msg.speed = 0.410525592118434;
    msg.speed_units = 213U;
    msg.custom.assign("ZGBVBDQUUSKBIVUYUITSJVOWCRJVXTUZKXDESYONPXGWXDBSFPYKYXBEJWGRHAOMMZLPRQLFZNLIKRIYVUQANWCZJGJIYOADCHFTHFTCILHENNNH");

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
    msg.setTimeStamp(0.4255928409417399);
    msg.setSource(16149U);
    msg.setSourceEntity(74U);
    msg.setDestination(50267U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.5999851064957701;
    msg.lon = 0.5251763960028241;
    msg.z = 0.6070921396391122;
    msg.z_units = 178U;
    msg.radius = 0.08018792576504674;
    msg.duration = 41469U;
    msg.speed = 0.699232322954091;
    msg.speed_units = 93U;
    msg.custom.assign("YCSKBMGXVTQHXQGEKTFFKBVV");

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
    msg.setTimeStamp(0.9368587960877623);
    msg.setSource(64651U);
    msg.setSourceEntity(13U);
    msg.setDestination(23094U);
    msg.setDestinationEntity(44U);
    msg.timeout = 36111U;
    msg.flags = 238U;
    msg.lat = 0.5847155449022523;
    msg.lon = 0.04415627785228693;
    msg.start_z = 0.23754829785578646;
    msg.start_z_units = 76U;
    msg.end_z = 0.9141574584509321;
    msg.end_z_units = 113U;
    msg.radius = 0.7468573736639087;
    msg.speed = 0.039707541011334224;
    msg.speed_units = 137U;
    msg.custom.assign("DHXEZDNDKSTOOYAHBFCQZLNDEHJFINIVPUMKEHFRSLMYZKEAQVMRVXBYFGSAZZLCFPLWGWCXXIRBYJLOGUPHRUIPKBLLTRGGOAFBV");

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
    msg.setTimeStamp(0.6206654512713539);
    msg.setSource(44934U);
    msg.setSourceEntity(106U);
    msg.setDestination(2792U);
    msg.setDestinationEntity(120U);
    msg.timeout = 38809U;
    msg.flags = 98U;
    msg.lat = 0.35470888074796825;
    msg.lon = 0.15287010794980216;
    msg.start_z = 0.04888533358815539;
    msg.start_z_units = 138U;
    msg.end_z = 0.3558363849798627;
    msg.end_z_units = 124U;
    msg.radius = 0.3050257324426151;
    msg.speed = 0.8827727868985583;
    msg.speed_units = 2U;
    msg.custom.assign("KAUFEYLCUHZBSYEHFXSNOTOVJMSLVRHNBYDJBTJCICUMDUNTXLKKIRPJAVTYYKXDVIXQDXKWFWVLMGPQTWEJQPSINESDROITGDLIVIJNHVRDSGQVNGBOAUXALCZCRMFEDCGEXBCFFVOERKIPXCCPTSQOFOWMZRKYNQVGLNZYFWWLZWOBMNRHJJBQJZAIZFWHUQMHPWKBIAU");

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
    msg.setTimeStamp(0.8817309065732016);
    msg.setSource(26737U);
    msg.setSourceEntity(36U);
    msg.setDestination(41841U);
    msg.setDestinationEntity(153U);
    msg.timeout = 45857U;
    msg.flags = 104U;
    msg.lat = 0.3209665637523751;
    msg.lon = 0.7384584188205551;
    msg.start_z = 0.19945579784403966;
    msg.start_z_units = 130U;
    msg.end_z = 0.13765446346607124;
    msg.end_z_units = 70U;
    msg.radius = 0.36522363523189993;
    msg.speed = 0.8628832401790443;
    msg.speed_units = 115U;
    msg.custom.assign("RTEOFGNDJMYFOVKVMUJEVVRTRFBWFXPPMCMZOKYYAUNHZEXDUSOBZQVRZGMQNMUSTZKZPKTLWBWHARZVLSBVQMLMPCAIR");

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
    msg.setTimeStamp(0.5099406463676041);
    msg.setSource(5920U);
    msg.setSourceEntity(75U);
    msg.setDestination(22164U);
    msg.setDestinationEntity(187U);
    msg.timeout = 34737U;
    msg.lat = 0.9568650773261798;
    msg.lon = 0.9350048497362501;
    msg.z = 0.2102978669782194;
    msg.z_units = 148U;
    msg.speed = 0.9705962069819121;
    msg.speed_units = 118U;
    msg.custom.assign("GZDFTTOOCGPKXHAQRBDZUMGGTIDNIZQQWJITEMXLBTYZCTHYKKRPZVHLNSBUQLCFJFIUMBDJNBNJWSMUWCTYTUDRLVBWYUJ");

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
    msg.setTimeStamp(0.09773728463077491);
    msg.setSource(874U);
    msg.setSourceEntity(0U);
    msg.setDestination(3522U);
    msg.setDestinationEntity(58U);
    msg.timeout = 40114U;
    msg.lat = 0.23911770049712244;
    msg.lon = 0.34613669292598637;
    msg.z = 0.04304555967410839;
    msg.z_units = 157U;
    msg.speed = 0.5606324685737593;
    msg.speed_units = 224U;
    msg.custom.assign("HLLCHXUUOBEZRSDCMNGNZIFSKCFPLXHPTLJCALEQLZOGWKMWRABXETVJOFGCRVWYBITRDHPMTYGIELJXRKXTQURESIILRQGKMMHBBGDNQKAZOAKPPIXSIZMCDEPIYJEIVHODTGOVTNWVYYFMMFBQPJHOUFWUPONVYWYUXT");

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
    msg.setTimeStamp(0.7561848979703916);
    msg.setSource(19129U);
    msg.setSourceEntity(192U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(183U);
    msg.timeout = 50811U;
    msg.lat = 0.8662072396736684;
    msg.lon = 0.8026723981527093;
    msg.z = 0.13860788179621608;
    msg.z_units = 225U;
    msg.speed = 0.4210953271521366;
    msg.speed_units = 19U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0911496206025103;
    tmp_msg_0.y = 0.8744458611410372;
    tmp_msg_0.z = 0.24756611765562886;
    tmp_msg_0.t = 0.6377642090486573;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GQRSOVTWBPXQCAVTMXWQQFIKYVEPY");

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
    msg.setTimeStamp(0.7405798780869426);
    msg.setSource(28953U);
    msg.setSourceEntity(134U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(135U);
    msg.x = 0.29147358947090607;
    msg.y = 0.25266490867844726;
    msg.z = 0.9319964650073725;
    msg.t = 0.34263785448061645;

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
    msg.setTimeStamp(0.2939760866899471);
    msg.setSource(19086U);
    msg.setSourceEntity(129U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(135U);
    msg.x = 0.43918599781426215;
    msg.y = 0.7926811737779381;
    msg.z = 0.5872628737560743;
    msg.t = 0.9824726861483647;

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
    msg.setTimeStamp(0.627029977667934);
    msg.setSource(46484U);
    msg.setSourceEntity(250U);
    msg.setDestination(17594U);
    msg.setDestinationEntity(121U);
    msg.x = 0.036269842020479004;
    msg.y = 0.16331437956921135;
    msg.z = 0.12419843810222586;
    msg.t = 0.09407747494927765;

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
    msg.setTimeStamp(0.9486446057783507);
    msg.setSource(29789U);
    msg.setSourceEntity(207U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(51U);
    msg.timeout = 5785U;
    msg.name.assign("CHZGCFAHPPFWWPTRSGFLGKYHBYDYDHTRCVTJOMUPYCQCQFEQFAJOUJLEEXIMJXPZF");
    msg.custom.assign("STTHHGCGAVJFSSKFCTFUMJKAMFHTUOMYGRKNLYJQHOVIDFIOJCMVEMZJENFVXVFWVATDNCQFLLINPBPVQZUYEKYPLGAWAPRAPXLHEODMMJVQGKPZQBTUYXEPMDBCZNMUSICRGWX");

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
    msg.setTimeStamp(0.44518875627424936);
    msg.setSource(8202U);
    msg.setSourceEntity(115U);
    msg.setDestination(53896U);
    msg.setDestinationEntity(143U);
    msg.timeout = 29887U;
    msg.name.assign("AVDANJUVMHFMZAGBTWJYFFPOXBVCDEVPWOZNHQKBIUEPSVUTLIRLBKHGOESWHAAOXBEIEZSRPGVDTSNKT");
    msg.custom.assign("PPIRBUDJMTLZLUOFEGMZPWXOSAFITCVLATQDVDBDAVDQTUEEQICKJJ");

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
    msg.setTimeStamp(0.1493723102233624);
    msg.setSource(40124U);
    msg.setSourceEntity(24U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(29U);
    msg.timeout = 1278U;
    msg.name.assign("CZZZRUGKDPSCZJEGFGGCAFBIGTXWFMBAPTWFSAGLUOLWNWJLEMMNHREWNREUHKSCZRJZPNPGIYLCXRMNTBBJMKUQDDWHBLCPNYQAOWBQJHFA");
    msg.custom.assign("LUSCXKPLKNLMBJXYPDLRNABENGMEYTLVZCSWGZYFIPJRREKKULZBUWUOOWAMZAPWELMJDFLOGAHFOTETGUEIMTBRWHCBUGRSKNTAQKCSBIPZEMVCWLOXZXFRAUUWXOODRXHATEYPVDJCQCAVQSDIONRZJYBQFYWQHVNIXX");

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
    msg.setTimeStamp(0.9474012902338086);
    msg.setSource(16322U);
    msg.setSourceEntity(144U);
    msg.setDestination(19782U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.5652916551406517;
    msg.lon = 0.04350786285861674;
    msg.z = 0.7305729671715622;
    msg.z_units = 101U;
    msg.speed = 0.7740449789816239;
    msg.speed_units = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2991U;
    tmp_msg_0.off_x = 0.8294087989759962;
    tmp_msg_0.off_y = 0.9905062049107611;
    tmp_msg_0.off_z = 0.46912941777102757;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4079402728531669;
    msg.custom.assign("CTNXYKRTQTFFFWKUVIFRGMGNJTKKPXCCNJMNWWLCALQSDXPWVYMXLQGIRIZTHQVEPZA");

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
    msg.setTimeStamp(0.557045705078881);
    msg.setSource(29264U);
    msg.setSourceEntity(135U);
    msg.setDestination(55785U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.17872031601814797;
    msg.lon = 0.2366762514465649;
    msg.z = 0.15774235034616413;
    msg.z_units = 173U;
    msg.speed = 0.08640316286707173;
    msg.speed_units = 228U;
    msg.start_time = 0.5934081233235576;
    msg.custom.assign("TSMJXBXCOKZPPXTPIXJOCRYRHPDDPMLZWQWSILHEIXNGPQKORJLIMYQAAPQJOFOPSYLWWWQTAYFBJEFJVVUJVWMZSDEKAKXRSIRMHDEAADEWFXIBOWYGNVGBFJYZZHEMBZQTKBUKIBZCTQNAIVBUJAVWXDHXRTGCLDCPGDASUGIRWXEJZFCFUMVDCKHZNNOTZVBYVHRTFOCHLSNGKNKL");

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
    msg.setTimeStamp(0.3956692904093879);
    msg.setSource(26957U);
    msg.setSourceEntity(36U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.9132047908750373;
    msg.lon = 0.011769846469832701;
    msg.z = 0.6929027698522799;
    msg.z_units = 16U;
    msg.speed = 0.4291447778741224;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7859859274169344;
    tmp_msg_0.y = 0.49821878466321934;
    tmp_msg_0.z = 0.1720735212059532;
    tmp_msg_0.t = 0.6342302623747197;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 53413U;
    tmp_msg_1.off_x = 0.3297545886294756;
    tmp_msg_1.off_y = 0.8633438401311144;
    tmp_msg_1.off_z = 0.5688358354793207;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4173108362563779;
    msg.custom.assign("OQDEDEYTSTHAZCELCGJOTCYRSHSCYTEOAXKYDMGXIUOPQFBFE");

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
    msg.setTimeStamp(0.27810703236114065);
    msg.setSource(31824U);
    msg.setSourceEntity(244U);
    msg.setDestination(2424U);
    msg.setDestinationEntity(245U);
    msg.vid = 22803U;
    msg.off_x = 0.0033190172263924955;
    msg.off_y = 0.6126984816663421;
    msg.off_z = 0.9153656597345665;

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
    msg.setTimeStamp(0.3730417501471277);
    msg.setSource(6755U);
    msg.setSourceEntity(201U);
    msg.setDestination(13500U);
    msg.setDestinationEntity(101U);
    msg.vid = 21057U;
    msg.off_x = 0.01811464793079809;
    msg.off_y = 0.06521962812617799;
    msg.off_z = 0.10983919450293156;

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
    msg.setTimeStamp(0.6778817967857068);
    msg.setSource(45745U);
    msg.setSourceEntity(220U);
    msg.setDestination(44216U);
    msg.setDestinationEntity(11U);
    msg.vid = 23804U;
    msg.off_x = 0.29007254950243455;
    msg.off_y = 0.4989738734116478;
    msg.off_z = 0.7476994148415936;

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
    msg.setTimeStamp(0.16293544527815773);
    msg.setSource(25049U);
    msg.setSourceEntity(159U);
    msg.setDestination(39460U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.6420769298809028);
    msg.setSource(52347U);
    msg.setSourceEntity(153U);
    msg.setDestination(64696U);
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
    msg.setTimeStamp(0.9585122153541027);
    msg.setSource(8951U);
    msg.setSourceEntity(193U);
    msg.setDestination(29955U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.32245094553621645);
    msg.setSource(7545U);
    msg.setSourceEntity(104U);
    msg.setDestination(62236U);
    msg.setDestinationEntity(77U);
    msg.mid = 43581U;

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
    msg.setTimeStamp(0.7986594599171234);
    msg.setSource(49357U);
    msg.setSourceEntity(93U);
    msg.setDestination(49138U);
    msg.setDestinationEntity(24U);
    msg.mid = 41124U;

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
    msg.setTimeStamp(0.2863809734019708);
    msg.setSource(26481U);
    msg.setSourceEntity(84U);
    msg.setDestination(6420U);
    msg.setDestinationEntity(0U);
    msg.mid = 41918U;

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
    msg.setTimeStamp(0.17381696118305012);
    msg.setSource(4368U);
    msg.setSourceEntity(192U);
    msg.setDestination(43078U);
    msg.setDestinationEntity(16U);
    msg.state = 240U;
    msg.eta = 54309U;
    msg.info.assign("XULUCNDDPMGCCRLBJYEPTMXKWNOXJOFTDMLPNKTUOCPZZUXNNQ");

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
    msg.setTimeStamp(0.2573429510667101);
    msg.setSource(48308U);
    msg.setSourceEntity(203U);
    msg.setDestination(25278U);
    msg.setDestinationEntity(65U);
    msg.state = 22U;
    msg.eta = 6485U;
    msg.info.assign("CVRLMXGAOKPPMGUTWCCBOFNELBCPRIXBRTEKBUQMQVYOZJKCPVNEGBJFDVSNXAAHFEOTRSYRLFQEVGYDZALAPKEDSDYHSBNZ");

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
    msg.setTimeStamp(0.8644340423437965);
    msg.setSource(46492U);
    msg.setSourceEntity(57U);
    msg.setDestination(59895U);
    msg.setDestinationEntity(217U);
    msg.state = 67U;
    msg.eta = 63371U;
    msg.info.assign("WARTZKXFHFKTJRHWHUIVLSBJNCPRHTWOZSOFQDNDCYUKWGRHZUWKLJMSKOYBMYADRUMZJKNDCCWLAQEPZOUQXOFM");

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
    msg.setTimeStamp(0.7021103311138096);
    msg.setSource(64029U);
    msg.setSourceEntity(170U);
    msg.setDestination(65370U);
    msg.setDestinationEntity(129U);
    msg.system = 28333U;
    msg.duration = 23145U;
    msg.speed = 0.9505081676021491;
    msg.speed_units = 246U;
    msg.x = 0.3390546986170969;
    msg.y = 0.1727048819133441;
    msg.z = 0.00894618445813522;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.5620122539620191);
    msg.setSource(16129U);
    msg.setSourceEntity(184U);
    msg.setDestination(46009U);
    msg.setDestinationEntity(61U);
    msg.system = 3903U;
    msg.duration = 28862U;
    msg.speed = 0.0757235864648732;
    msg.speed_units = 24U;
    msg.x = 0.7531616516447047;
    msg.y = 0.9177669477430521;
    msg.z = 0.5978919521186438;
    msg.z_units = 82U;

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
    msg.setTimeStamp(0.795210548135866);
    msg.setSource(12453U);
    msg.setSourceEntity(213U);
    msg.setDestination(45133U);
    msg.setDestinationEntity(129U);
    msg.system = 42395U;
    msg.duration = 4669U;
    msg.speed = 0.022002205450909806;
    msg.speed_units = 192U;
    msg.x = 0.966787480294739;
    msg.y = 0.5291412517951564;
    msg.z = 0.16413061934638407;
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
    msg.setTimeStamp(0.024935531800460153);
    msg.setSource(38698U);
    msg.setSourceEntity(194U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.11657232613272117;
    msg.lon = 0.6768625594261295;
    msg.speed = 0.21648658875668925;
    msg.speed_units = 25U;
    msg.duration = 28979U;
    msg.sys_a = 8663U;
    msg.sys_b = 58540U;
    msg.move_threshold = 0.5425874579548582;

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
    msg.setTimeStamp(0.8176705575306786);
    msg.setSource(15244U);
    msg.setSourceEntity(238U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.7280152438477698;
    msg.lon = 0.3763432611190344;
    msg.speed = 0.24977277857455427;
    msg.speed_units = 163U;
    msg.duration = 31291U;
    msg.sys_a = 48272U;
    msg.sys_b = 52176U;
    msg.move_threshold = 0.47076461749628795;

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
    msg.setTimeStamp(0.18368165475892828);
    msg.setSource(64923U);
    msg.setSourceEntity(14U);
    msg.setDestination(57609U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.34343213405512474;
    msg.lon = 0.22797428800050767;
    msg.speed = 0.6788533641199026;
    msg.speed_units = 132U;
    msg.duration = 24821U;
    msg.sys_a = 19035U;
    msg.sys_b = 30385U;
    msg.move_threshold = 0.9114339369095984;

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
    msg.setTimeStamp(0.8225128829912268);
    msg.setSource(9193U);
    msg.setSourceEntity(212U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.611006764077168;
    msg.lon = 0.1738339980462349;
    msg.z = 0.18338521260643048;
    msg.z_units = 201U;
    msg.speed = 0.762885084625315;
    msg.speed_units = 189U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6548047803668898;
    tmp_msg_0.lon = 0.0012628724707661743;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FXOCPKAMSTHPTJLAQKUZSUZAVFQRURWGXSYQXICSBGSHBKZNRVLKXLLRTGNSBKPOKFPGQSWCTXDUMKTGRRIMOAAEJEAGJLMQCKKDHSOUWLCBYXWLGTYXNTIWBLPVNZBIIEMAHJQOADJFGFCZWYFVDXHCDPPFJPGEPFMNHHHEXCJQZYTDNMXBBJZQQOFMTUSNMWZMUHBEZSOPVYRYEWDYRADEOVTUNEYIGWLUJIJFAILEOZVVOV");

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
    msg.setTimeStamp(0.0039611341786872645);
    msg.setSource(28138U);
    msg.setSourceEntity(197U);
    msg.setDestination(22301U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.05349137335827869;
    msg.lon = 0.060292443337824575;
    msg.z = 0.4755055637882366;
    msg.z_units = 20U;
    msg.speed = 0.6900028304595082;
    msg.speed_units = 233U;
    msg.custom.assign("WQAJJHVVKQQNZWAAURQRCFRRVUOJMGERHKYZAZBIJNLLFXEWYBNSIHCKSBXKUDFAOPHXFOUNYIXDUVBJOIBYJKSILEPDLQDCTCROHOXLZXJNPWRUD");

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
    msg.setTimeStamp(0.4642375926705139);
    msg.setSource(40651U);
    msg.setSourceEntity(133U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.5594082923234993;
    msg.lon = 0.18099997200816376;
    msg.z = 0.08795317756401155;
    msg.z_units = 220U;
    msg.speed = 0.41908184752475086;
    msg.speed_units = 54U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3594946166273948;
    tmp_msg_0.lon = 0.840033336375678;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CFAQVJZITNLHUSTHIUMVSQUSKIKKNPCUOELUYIA");

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
    msg.setTimeStamp(0.5540363986582975);
    msg.setSource(22777U);
    msg.setSourceEntity(163U);
    msg.setDestination(25188U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.288719483875882;
    msg.lon = 0.05845780474669815;

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
    msg.setTimeStamp(0.7824560461512364);
    msg.setSource(51609U);
    msg.setSourceEntity(193U);
    msg.setDestination(18282U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.6581717110672775;
    msg.lon = 0.5315285157882917;

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
    msg.setTimeStamp(0.28146357395165533);
    msg.setSource(33190U);
    msg.setSourceEntity(124U);
    msg.setDestination(2698U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.9664146043486034;
    msg.lon = 0.9165498508086756;

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
    msg.setTimeStamp(0.8394388940043347);
    msg.setSource(10463U);
    msg.setSourceEntity(175U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(134U);
    msg.timeout = 47948U;
    msg.lat = 0.4448871104810638;
    msg.lon = 0.3227723173517869;
    msg.z = 0.9322609939449358;
    msg.z_units = 42U;
    msg.pitch = 0.14568466591248275;
    msg.amplitude = 0.7304178829838625;
    msg.duration = 61014U;
    msg.speed = 0.7898428290872815;
    msg.speed_units = 200U;
    msg.radius = 0.21910817708896468;
    msg.direction = 199U;
    msg.custom.assign("ZPGJCIVAOELWGAURFMWJCXKTDCJGWVNOWEXMVGEDNUIMQKHHOBIUYKDYFJESZAVNZAHDNXQFLXNARDJ");

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
    msg.setTimeStamp(0.9446354923905682);
    msg.setSource(19127U);
    msg.setSourceEntity(18U);
    msg.setDestination(21775U);
    msg.setDestinationEntity(246U);
    msg.timeout = 11384U;
    msg.lat = 0.3734801867128841;
    msg.lon = 0.032040287329167416;
    msg.z = 0.7181945965756323;
    msg.z_units = 84U;
    msg.pitch = 0.5040194317089123;
    msg.amplitude = 0.0001382474232297648;
    msg.duration = 10215U;
    msg.speed = 0.025664012261727875;
    msg.speed_units = 79U;
    msg.radius = 0.9216915693349339;
    msg.direction = 114U;
    msg.custom.assign("NGXZIGDIFHQZIKOLJNFNKGVFLSIFRYEDIJBKUSGZTHHXAEFAXZHZQXDIAXQSDUMFNVETOF");

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
    msg.setTimeStamp(0.09965372900156066);
    msg.setSource(40746U);
    msg.setSourceEntity(228U);
    msg.setDestination(59122U);
    msg.setDestinationEntity(134U);
    msg.timeout = 40860U;
    msg.lat = 0.9477411673113367;
    msg.lon = 0.05863151787782794;
    msg.z = 0.36472144184968214;
    msg.z_units = 7U;
    msg.pitch = 0.09675679397873893;
    msg.amplitude = 0.7737283254992646;
    msg.duration = 54256U;
    msg.speed = 0.597353756555019;
    msg.speed_units = 48U;
    msg.radius = 0.1594768472631719;
    msg.direction = 181U;
    msg.custom.assign("WHDSMVXAJTWUAQODYVLUQULBRZHDPMUGVWEAYIMEUMVRQAFJPSGVCGGKBCSVERSRJFLONMZDXWMZYDEWFEIBXQNB");

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
    msg.setTimeStamp(0.22646128275881106);
    msg.setSource(4636U);
    msg.setSourceEntity(10U);
    msg.setDestination(21283U);
    msg.setDestinationEntity(28U);
    msg.formation_name.assign("WKIDLDATEVJOYJHAAWVUSKQSNQJXSZITGTLTHJODRVYYYHFQOFJEMVQYDNZCHAKREZEIRPHGEVOSRTPRPMIIZUTMFBFGBIOQFHQGCFMMTXFNUCJVFLXBBBAWWBASNCHRKNPJORGLUKCKPOQBXXDHEESXUDRWEZNWYXGALPWZTVNBCUTSVGD");
    msg.reference_frame = 208U;
    msg.custom.assign("IGWVIJYGTUWHRQMSLOPZHBJYENQMGGVIDNNIRSSTMWMKUHIWDKFQYMDLSIDBLXPFUNIAZTKZTWJNODPTFBE");

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
    msg.setTimeStamp(0.15055245159737152);
    msg.setSource(52873U);
    msg.setSourceEntity(84U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("RRBSPSHSFGFCWITSLUOHDHSQQEUUYPOUNZYKPOQDJQESNZPRTBMNIZVUXINOYADEFYWJXFBHNVVUWOQACKQWCUBOHLGTAOCAAMRBZKILGYVKQLTDJAXCLYSOVXXTMFTVGINLBTPIDUSFPMJLLHQBRHVPWRZRSECNTGIOVMFRZDWYEXHGKIWEAIXTATZNKAMIJEMMZDGRVDDCRHPFBXEQOFGJUKCGWPGWKZZAVJEUNYJLM");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44452U;
    tmp_msg_0.off_x = 0.7814404438140015;
    tmp_msg_0.off_y = 0.09490994960664167;
    tmp_msg_0.off_z = 0.11925672403549292;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DGRMNHDWZAGNIGUXQYZGSJHJIRZBWFBIQPORCJUHLATMBQJFGNFERUQUKFJMZWCINELMYVISOHLTGDPNVZFYEYXYJREKHDYVLAMTPGJSVLOWWDLFCNNAUOJUMDPVRALMZGLJEHEPWFRAHUOHCOBLEKQOOQUVIXKVFZCVZRCCXEMPUSIRVFXNITYTWMSGYDJSNPDYZRTTUASYECDXEHZCB");

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
    msg.setTimeStamp(0.7924692661868806);
    msg.setSource(20225U);
    msg.setSourceEntity(183U);
    msg.setDestination(38156U);
    msg.setDestinationEntity(73U);
    msg.formation_name.assign("JLSKDBVZFYFJIPVYHKEO");
    msg.reference_frame = 236U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37919U;
    tmp_msg_0.off_x = 0.969552220194904;
    tmp_msg_0.off_y = 0.429655471223393;
    tmp_msg_0.off_z = 0.7313269840575466;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YGPWRKRMRRALSJYQGOEEEDXTYIYXSVZTLMMSSIPYHZVQ");

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
    msg.setTimeStamp(0.5805327957384414);
    msg.setSource(60283U);
    msg.setSourceEntity(21U);
    msg.setDestination(56592U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("SPLAWLRZJBEXZQRUFXXTGPBOHOTIWCIDZOOXJBACRYPSJIVGDNOTATHCANSCQUGWBHBYJKXRMVAQWKMFVEUAH");
    msg.formation_name.assign("SIITHNCGLYXPKORBBKLLQSCJVKRSQKNNAEOPDPIJJROCWQQWHTOHGOIFWXIVZAMDTCXBBGEMVURJNWJYEGWDZXMIQEOFQIBWVFFQIACYVSLYEQLXFXMNSSRATOZGCYTFAMEUMPAHCOYKXZTDMIPBMSUCUVAJGMYDEHFUADQKUGKWVYURSRDBZ");
    msg.plan_id.assign("LGYNSQXDJKJQGHZPFOHHXUAGEHKK");
    msg.description.assign("WOMRPYLKDHNUGFBSWSFPCTMEYPFWTSWSFGXXIYZJKJJEEVGJFQAFPIANPTKWHCGRILNQLXODLPVJEJESCBHIAERWAHOFVAQPDVQBQVVMHIWQK");
    msg.leader_speed = 0.2698394967644908;
    msg.leader_bank_lim = 0.8039041701935384;
    msg.pos_sim_err_lim = 0.8269759480540507;
    msg.pos_sim_err_wrn = 0.9435288724518381;
    msg.pos_sim_err_timeout = 29482U;
    msg.converg_max = 0.30362483481663893;
    msg.converg_timeout = 30778U;
    msg.comms_timeout = 41460U;
    msg.turb_lim = 0.004761921349721976;
    msg.custom.assign("DQCYFLLQFVGHJOHIUWAKDEAIDUATVVJZSFCTNTQDSNZAPXXSHXVQDSJDBWRWELNCO");

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
    msg.setTimeStamp(0.4678664419809895);
    msg.setSource(64553U);
    msg.setSourceEntity(147U);
    msg.setDestination(59217U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("TIDRALHJYAJJLFT");
    msg.formation_name.assign("ZCKUERQJOXNHPWBKBOAERKUELYWTOOLEFIRUHCX");
    msg.plan_id.assign("WNBMZSYWNXCXWIITCQLJRBVSJKNNJGVEVMZFWGPINDFZLXYOOHWDOTLFGWRACHZMIFSGXEUMREZGQUAAQDKUFPEKDZJIKUGCBRBHKOKVZIGSEYNPJXODHEHVDTDJAACZHNWPPTYPMLMIOVDTIXMBLGLALQCRESYJHRVBALYWCVSUHWQXWUPZTVNLMFKVBTTS");
    msg.description.assign("EDZJULKHYSBHKEBTHLFETNXTKTYKCNBAISEWMJGDKQXGMYWAPCZTOJPYTACQKCOPXQIEWJPYNCIATGUBBXDFUCFPZNFARLPSWVCOCJBKEBJJIQUYKXMNKREDDEILZLOAPWDKIMPQGZJCRUMSEYLJAUN");
    msg.leader_speed = 0.5049814321663224;
    msg.leader_bank_lim = 0.6948300294864035;
    msg.pos_sim_err_lim = 0.34317850005674844;
    msg.pos_sim_err_wrn = 0.32996683787197045;
    msg.pos_sim_err_timeout = 12273U;
    msg.converg_max = 0.3391126392552245;
    msg.converg_timeout = 25169U;
    msg.comms_timeout = 48287U;
    msg.turb_lim = 0.31138136171578423;
    msg.custom.assign("CSBATZZXWDMBBDKTNOEDPYRIRIDQTKXUMMOZVVIWPLYWURCOOFPZHENKMEXJPQRWMKLTQVIPHGVDZUBVTLKAJENRJYPYDMSNCWEMCPNYQLAJCDDJJVBSXIGCAYCJIMSAEKUARSIVCSYOHOIHULOIGZZQUFZFLQXYHBCRFXBFAHTLXBXNKSXYZDFOV");

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
    msg.setTimeStamp(0.3764291229450507);
    msg.setSource(64211U);
    msg.setSourceEntity(174U);
    msg.setDestination(30438U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("IBKKRAWZPCZJGSPQXLESYEBNDWKOLWYEIVXODQGWATFECIBZUKLMRESZIWCSDTXFDGQGCFMPRTILURVKNCPTYIUFJMDVYHUMCLPBAFUDQZHSNZFLMBFTLYIMFQUHXIHHHFIJYXUNEGORSEZKOOWNQBXHVSOTGLJERYJNVCDTVWNALXMGGWVZNCWADGJQPRUDBRRBXABXXSEZHKKTKJYIAEQUJOFAQMUOABCVDGLTCJOYM");
    msg.formation_name.assign("MHDPQFKIIBIJJVWJNHBYTGLZCGZZIXBQWJOIEHOGPIEACUXDNFXJYBFYREZTDLOVBHKATTACZGTRHZMWMXCSINFADHWUXDNVUNUXGGRECKVEMYVMOUHDJFGMHOOQPJWAXXWSOIZDPSKDNHSZBUUKXRXMZWBPBLPYKMSPSUTUYGJNRCAKQAFRYQZCMVFTQQUDKTHWSTEQNGLLPSRFOYCJEQFILV");
    msg.plan_id.assign("QKPVIACJKDSQGEEUNX");
    msg.description.assign("WFUFOXAFNUNHDMGVRXLCEMEJLWCFIHZSKGQUWLLQRCSKZYOMZQENEJAJYSKDKIHYBTDRRVYQTNBYIGAZFTAOIWJXBQOPHAPPXOECDJHNLVVHDBKRSEMRHPVGHVPOVYSZSKUZQPEFCFOHBBLIDNCBNDAEHOSKIEPKXBUNMGPGTCWYQWLQXJSDTKRCSRPLUZRXRQWTZMWJGFAINOEMULUXTGVMYWMGFSZTYXWIB");
    msg.leader_speed = 0.011235276931191085;
    msg.leader_bank_lim = 0.728657935428315;
    msg.pos_sim_err_lim = 0.7594822904993681;
    msg.pos_sim_err_wrn = 0.5712269972831197;
    msg.pos_sim_err_timeout = 25179U;
    msg.converg_max = 0.8034853538248771;
    msg.converg_timeout = 34237U;
    msg.comms_timeout = 55030U;
    msg.turb_lim = 0.5565424577047712;
    msg.custom.assign("QCDKJAHGBJYLNWYSJVESTQWSRUAISZTGMPBXZHGLCOFYCSCXOYNKXXEIQDOSBJYKMFADUPALQUDOUKWPWFGNKIMJUDIXGZQILJRMVNEZJXWLU");

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
    msg.setTimeStamp(0.4162392519563807);
    msg.setSource(42397U);
    msg.setSourceEntity(126U);
    msg.setDestination(63162U);
    msg.setDestinationEntity(253U);
    msg.control_src = 26331U;
    msg.control_ent = 32U;
    msg.timeout = 0.684124724416874;
    msg.loiter_radius = 0.46545751113395617;
    msg.altitude_interval = 0.8695715643124359;

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
    msg.setTimeStamp(0.010911951938874731);
    msg.setSource(49406U);
    msg.setSourceEntity(198U);
    msg.setDestination(16746U);
    msg.setDestinationEntity(90U);
    msg.control_src = 29533U;
    msg.control_ent = 155U;
    msg.timeout = 0.7875802785991418;
    msg.loiter_radius = 0.7713074337290549;
    msg.altitude_interval = 0.3509596430204067;

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
    msg.setTimeStamp(0.14703823790613868);
    msg.setSource(21451U);
    msg.setSourceEntity(206U);
    msg.setDestination(13185U);
    msg.setDestinationEntity(90U);
    msg.control_src = 10580U;
    msg.control_ent = 130U;
    msg.timeout = 0.6962366918557681;
    msg.loiter_radius = 0.04641900175523128;
    msg.altitude_interval = 0.18321602624654354;

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
    msg.setTimeStamp(0.28884771675457555);
    msg.setSource(11952U);
    msg.setSourceEntity(165U);
    msg.setDestination(34792U);
    msg.setDestinationEntity(91U);
    msg.flags = 231U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8323386340943376;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.45517356913397955;
    tmp_msg_1.z_units = 195U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19172050874451407;
    msg.lon = 0.9087714518762039;
    msg.radius = 0.8765266972476303;

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
    msg.setTimeStamp(0.08330361179319956);
    msg.setSource(38423U);
    msg.setSourceEntity(92U);
    msg.setDestination(35870U);
    msg.setDestinationEntity(189U);
    msg.flags = 243U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9040134901530044;
    tmp_msg_0.speed_units = 41U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17294325382793352;
    tmp_msg_1.z_units = 149U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.32208529035427813;
    msg.lon = 0.6237143403025703;
    msg.radius = 0.7200812073452242;

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
    msg.setTimeStamp(0.08074313004760536);
    msg.setSource(7135U);
    msg.setSourceEntity(251U);
    msg.setDestination(58892U);
    msg.setDestinationEntity(232U);
    msg.flags = 107U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5480338897334428;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9383190655685308;
    tmp_msg_1.z_units = 111U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9658427398856131;
    msg.lon = 0.13010084694158164;
    msg.radius = 0.6186194303493818;

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
    msg.setTimeStamp(0.4906347395373051);
    msg.setSource(63670U);
    msg.setSourceEntity(45U);
    msg.setDestination(59188U);
    msg.setDestinationEntity(155U);
    msg.control_src = 8675U;
    msg.control_ent = 181U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 193U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.19836121216761082;
    tmp_tmp_msg_0_0.speed_units = 12U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.06700721718204594;
    tmp_tmp_msg_0_1.z_units = 253U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.32619711255607464;
    tmp_msg_0.lon = 0.500547038358395;
    tmp_msg_0.radius = 0.30137789510255386;
    msg.reference.set(tmp_msg_0);
    msg.state = 133U;
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
    msg.setTimeStamp(0.08341559991463376);
    msg.setSource(41413U);
    msg.setSourceEntity(193U);
    msg.setDestination(58691U);
    msg.setDestinationEntity(84U);
    msg.control_src = 29254U;
    msg.control_ent = 236U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1078201757522651;
    tmp_tmp_msg_0_0.speed_units = 54U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8337561487929324;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.03567869967895765;
    tmp_msg_0.lon = 0.06967262528119345;
    tmp_msg_0.radius = 0.8077475173718844;
    msg.reference.set(tmp_msg_0);
    msg.state = 39U;
    msg.proximity = 209U;

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
    msg.setTimeStamp(0.9620420808302135);
    msg.setSource(49261U);
    msg.setSourceEntity(25U);
    msg.setDestination(61707U);
    msg.setDestinationEntity(172U);
    msg.control_src = 30077U;
    msg.control_ent = 75U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 92U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4702506371511541;
    tmp_tmp_msg_0_0.speed_units = 57U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4645294153820728;
    tmp_tmp_msg_0_1.z_units = 114U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3587911942269608;
    tmp_msg_0.lon = 0.9259755620903746;
    tmp_msg_0.radius = 0.024488862399517863;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 228U;

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
    msg.setTimeStamp(0.9613191731082306);
    msg.setSource(32306U);
    msg.setSourceEntity(103U);
    msg.setDestination(4535U);
    msg.setDestinationEntity(47U);
    msg.ax_cmd = 0.4869685772004372;
    msg.ay_cmd = 0.20078198338447195;
    msg.az_cmd = 0.8103575362386543;
    msg.ax_des = 0.07806105939195851;
    msg.ay_des = 0.7503987775773816;
    msg.az_des = 0.32192549911793356;
    msg.virt_err_x = 0.7717534911130557;
    msg.virt_err_y = 0.45368093425807754;
    msg.virt_err_z = 0.04892401708071836;
    msg.surf_fdbk_x = 0.5889631426024826;
    msg.surf_fdbk_y = 0.8879192519163172;
    msg.surf_fdbk_z = 0.8481901652481401;
    msg.surf_unkn_x = 0.15770852682601078;
    msg.surf_unkn_y = 0.35516312240239145;
    msg.surf_unkn_z = 0.8645083302555873;
    msg.ss_x = 0.8103181924822606;
    msg.ss_y = 0.8730909774602795;
    msg.ss_z = 0.4900471721063703;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QOVEVHJTSAYYKFUHCQXNDCUILPMPSAOWPNSBMHZLGAXZSUVHEOGBNEXMHFZQJZIUHRDMUURQHTNAAQZKSCCYCLJ");
    tmp_msg_0.dist = 0.11901225320759301;
    tmp_msg_0.err = 0.156472081561831;
    tmp_msg_0.ctrl_imp = 0.08488530711643172;
    tmp_msg_0.rel_dir_x = 0.3005921127646338;
    tmp_msg_0.rel_dir_y = 0.1430231265299584;
    tmp_msg_0.rel_dir_z = 0.3943752424185113;
    tmp_msg_0.err_x = 0.35414506804588575;
    tmp_msg_0.err_y = 0.68102187082052;
    tmp_msg_0.err_z = 0.5183941277933277;
    tmp_msg_0.rf_err_x = 0.9406554363863927;
    tmp_msg_0.rf_err_y = 0.5601557329001797;
    tmp_msg_0.rf_err_z = 0.7202258488131557;
    tmp_msg_0.rf_err_vx = 0.13975387703750286;
    tmp_msg_0.rf_err_vy = 0.6363804788846337;
    tmp_msg_0.rf_err_vz = 0.7049081149032107;
    tmp_msg_0.ss_x = 0.8951177260802067;
    tmp_msg_0.ss_y = 0.7781725148248737;
    tmp_msg_0.ss_z = 0.4813819483993965;
    tmp_msg_0.virt_err_x = 0.3917868552770126;
    tmp_msg_0.virt_err_y = 0.5810422182599827;
    tmp_msg_0.virt_err_z = 0.3494934209695335;
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
    msg.setTimeStamp(0.050807767102009516);
    msg.setSource(55577U);
    msg.setSourceEntity(185U);
    msg.setDestination(28062U);
    msg.setDestinationEntity(10U);
    msg.ax_cmd = 0.5334739818763808;
    msg.ay_cmd = 0.4187121402245466;
    msg.az_cmd = 0.34863800068334283;
    msg.ax_des = 0.3736160113345285;
    msg.ay_des = 0.05494632372739294;
    msg.az_des = 0.6016891049666644;
    msg.virt_err_x = 0.9493544612450292;
    msg.virt_err_y = 0.055235774351503064;
    msg.virt_err_z = 0.4220167088701787;
    msg.surf_fdbk_x = 0.6067700976786422;
    msg.surf_fdbk_y = 0.602769433440512;
    msg.surf_fdbk_z = 0.41154678981278836;
    msg.surf_unkn_x = 0.09332668743970685;
    msg.surf_unkn_y = 0.8890141296926447;
    msg.surf_unkn_z = 0.33085313558769514;
    msg.ss_x = 0.6400510677869964;
    msg.ss_y = 0.38772163469112464;
    msg.ss_z = 0.692921646065216;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EZJKECSVIGSZJBQTGCFQOPNKKMEHOXHTDMVLQYIAVPEELKLKOOQQNBFCCINDFINTBGPIVPTYYRDWAYEUHERPQPLBMEAJCHQWMUHRRUTHRPQZLTVGFRFZQPVWXFMBSNKSWNRSCNHJXLZKBAXAAUFCDGPUBSGWDLYNUTJWYSXXEWVUIAZGMGMZVXSVGIYUVDWLONTEZZLTJWXSWKJDMMYHLNTAOYKBDF");
    tmp_msg_0.dist = 0.9922770482297852;
    tmp_msg_0.err = 0.1293514403652184;
    tmp_msg_0.ctrl_imp = 0.25759559412307875;
    tmp_msg_0.rel_dir_x = 0.6501411492856972;
    tmp_msg_0.rel_dir_y = 0.5856187748526082;
    tmp_msg_0.rel_dir_z = 0.4575792166236434;
    tmp_msg_0.err_x = 0.5399205524666546;
    tmp_msg_0.err_y = 0.7765849463608095;
    tmp_msg_0.err_z = 0.18846159292396547;
    tmp_msg_0.rf_err_x = 0.44051687377104043;
    tmp_msg_0.rf_err_y = 0.71385301765403;
    tmp_msg_0.rf_err_z = 0.6348415203582861;
    tmp_msg_0.rf_err_vx = 0.43979860321689646;
    tmp_msg_0.rf_err_vy = 0.10714809111449064;
    tmp_msg_0.rf_err_vz = 0.1989403359024352;
    tmp_msg_0.ss_x = 0.16308820137221358;
    tmp_msg_0.ss_y = 0.26642538938438465;
    tmp_msg_0.ss_z = 0.7628675785808862;
    tmp_msg_0.virt_err_x = 0.656074142151183;
    tmp_msg_0.virt_err_y = 0.9280634559986262;
    tmp_msg_0.virt_err_z = 0.6712007680222181;
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
    msg.setTimeStamp(0.5267367697453947);
    msg.setSource(51758U);
    msg.setSourceEntity(8U);
    msg.setDestination(48336U);
    msg.setDestinationEntity(115U);
    msg.ax_cmd = 0.4997843189310227;
    msg.ay_cmd = 0.9425231227314023;
    msg.az_cmd = 0.896930307582695;
    msg.ax_des = 0.04811907421252293;
    msg.ay_des = 0.4413975148864412;
    msg.az_des = 0.4435180343227989;
    msg.virt_err_x = 0.018623796147091864;
    msg.virt_err_y = 0.5894205037817938;
    msg.virt_err_z = 0.4236773871906263;
    msg.surf_fdbk_x = 0.36577964865448775;
    msg.surf_fdbk_y = 0.3934224181530016;
    msg.surf_fdbk_z = 0.7844052087819929;
    msg.surf_unkn_x = 0.9636797405788543;
    msg.surf_unkn_y = 0.062404642581772474;
    msg.surf_unkn_z = 0.12966939511759634;
    msg.ss_x = 0.03883094277514598;
    msg.ss_y = 0.07214920568148764;
    msg.ss_z = 0.14789256508086013;

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
    msg.setTimeStamp(0.9073824001353769);
    msg.setSource(7791U);
    msg.setSourceEntity(50U);
    msg.setDestination(32565U);
    msg.setDestinationEntity(29U);
    msg.s_id.assign("WVTPBHVRYIWCCLNKJAQGLJBRTOZXIUVLRKJGNQXWHGFDBSWNYP");
    msg.dist = 0.094368520177457;
    msg.err = 0.6722999067164879;
    msg.ctrl_imp = 0.267027145904025;
    msg.rel_dir_x = 0.7643813331379552;
    msg.rel_dir_y = 0.35429381628955514;
    msg.rel_dir_z = 0.29942894559526423;
    msg.err_x = 0.7258268515642223;
    msg.err_y = 0.3416067895899517;
    msg.err_z = 0.514970540565694;
    msg.rf_err_x = 0.7403249989034706;
    msg.rf_err_y = 0.8529265950500455;
    msg.rf_err_z = 0.4026877788351144;
    msg.rf_err_vx = 0.7222420631334906;
    msg.rf_err_vy = 0.1706408065086561;
    msg.rf_err_vz = 0.49935326848825845;
    msg.ss_x = 0.7191130330534699;
    msg.ss_y = 0.8574335700400688;
    msg.ss_z = 0.6123418372669086;
    msg.virt_err_x = 0.3479387863474199;
    msg.virt_err_y = 0.8692203736023703;
    msg.virt_err_z = 0.14516779475120245;

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
    msg.setTimeStamp(0.9676646259826346);
    msg.setSource(7955U);
    msg.setSourceEntity(105U);
    msg.setDestination(29430U);
    msg.setDestinationEntity(196U);
    msg.s_id.assign("UIHVWMFQQNCVRONAFONXYULHTYXVIMSICWSZKGISWATEUDLEMPEGPCXJUQCNXMDUPVHUVAHTAYIENLTAYBOOD");
    msg.dist = 0.2841401399670793;
    msg.err = 0.19132542259488616;
    msg.ctrl_imp = 0.37248151538646257;
    msg.rel_dir_x = 0.3645616803646442;
    msg.rel_dir_y = 0.9620476227049765;
    msg.rel_dir_z = 0.5198099922157022;
    msg.err_x = 0.7053705587956505;
    msg.err_y = 0.7668800952193654;
    msg.err_z = 0.8941386540883159;
    msg.rf_err_x = 0.7572752458344496;
    msg.rf_err_y = 0.7702534875717059;
    msg.rf_err_z = 0.10546637427774741;
    msg.rf_err_vx = 0.6291656196712299;
    msg.rf_err_vy = 0.29225979894382703;
    msg.rf_err_vz = 0.38830990576351754;
    msg.ss_x = 0.38059593495447397;
    msg.ss_y = 0.2950549988407646;
    msg.ss_z = 0.4512062623041817;
    msg.virt_err_x = 0.7591294018741326;
    msg.virt_err_y = 0.29310831248937685;
    msg.virt_err_z = 0.6073831273723252;

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
    msg.setTimeStamp(0.041112231048670456);
    msg.setSource(23143U);
    msg.setSourceEntity(148U);
    msg.setDestination(21989U);
    msg.setDestinationEntity(132U);
    msg.s_id.assign("UMYKPJJZBVVXBLXSVOEBPWOXUVNQKCPRIOGZZOXLEYSJMIAWYGVPGSUMVPFDMDUKTBHBHKRYNCKFHHHQJXNLBGBQNNNTGLJACKWKJIHBYGJSWZMITILQBUUCTDYVYTZTHDOLMWTRBIRHOGAHFPOXKQJDCPQFFZAASEMCFQQPZNEUSLZZRIKOUITIWNELPMWEGEFXDMCJALZFVRRAYCCUOXKSXWFPEWNSGARRNVT");
    msg.dist = 0.5934545833007262;
    msg.err = 0.9663476072031397;
    msg.ctrl_imp = 0.9458544872787022;
    msg.rel_dir_x = 0.8553001515683524;
    msg.rel_dir_y = 0.3638127093362281;
    msg.rel_dir_z = 0.307206341574075;
    msg.err_x = 0.0666241609677859;
    msg.err_y = 0.5661513994464916;
    msg.err_z = 0.4660841562230771;
    msg.rf_err_x = 0.5428362172161716;
    msg.rf_err_y = 0.2823084669171101;
    msg.rf_err_z = 0.8753794306517432;
    msg.rf_err_vx = 0.628629152530613;
    msg.rf_err_vy = 0.9370895696869329;
    msg.rf_err_vz = 0.5912318304152643;
    msg.ss_x = 0.09483330799330503;
    msg.ss_y = 0.5880026761254408;
    msg.ss_z = 0.5205210914396908;
    msg.virt_err_x = 0.12573563430261392;
    msg.virt_err_y = 0.12679903797753556;
    msg.virt_err_z = 0.7322493739614913;

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
    msg.setTimeStamp(0.5414653490724779);
    msg.setSource(18780U);
    msg.setSourceEntity(42U);
    msg.setDestination(24664U);
    msg.setDestinationEntity(131U);
    msg.timeout = 580U;
    msg.rpm = 0.34790774684616477;
    msg.direction = 219U;
    msg.custom.assign("OCZZRXFMBLGXAROIRWYRYMVZTJIQTWWUDPXUKRKFKTBIEMJFKI");

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
    msg.setTimeStamp(0.2754758998943161);
    msg.setSource(14142U);
    msg.setSourceEntity(122U);
    msg.setDestination(11861U);
    msg.setDestinationEntity(141U);
    msg.timeout = 22791U;
    msg.rpm = 0.5301624174110839;
    msg.direction = 175U;
    msg.custom.assign("GGNMSBSOXHABKRSMIPZLQNLMKCJBZWBXVDPLUALFSHMRWXMTXRLOTGYGEPVDPRMRNRVITKHCBWOTPSACYFHNGZENATRTJODAXWEXQZBXQHLAGUPHVYONVQYONHICNEFRBKAJFQMD");

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
    msg.setTimeStamp(0.2507101230235297);
    msg.setSource(44655U);
    msg.setSourceEntity(56U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(106U);
    msg.timeout = 29967U;
    msg.rpm = 0.21304903004987907;
    msg.direction = 241U;
    msg.custom.assign("KGXDDXJQHELZLTIQMRSULNEQAOJUVRJDDTEMSQPGASXEMNSANZAZIKGKXONXADQMEGFGITTURYGHLNRYCWGHWPTOPAWATWDYRUSAHFERYJBIHUUTNVS");

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
    msg.setTimeStamp(0.14392842002277006);
    msg.setSource(5424U);
    msg.setSourceEntity(85U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("IVUOQZCTFCSQRVWRRDBSOAJHWSTBJ");
    msg.type = 42U;
    msg.op = 174U;
    msg.group_name.assign("CNDUDHOLHVHFWCKSXNZPGWLMGSFLWPFCDHUJXRYAZEYXHWDTUMPYALNABKYVJKNIVPJKWMRVDEWTGMKQELNKBIOMBEZEYMDJSLKEGYVOJRNMTJIKUGPTAHOUWBSISEUPVCQEFYJSXUZOZCBWDEJXRAFVLFEOXRXFAVOAIQKHWPQCJIXOPDDYKTOUGPOBZSTLZVUBTTQBMRJA");
    msg.plan_id.assign("ROIYFXKCAXIDYLBIHSIUHZZKQWPGAIYIFQMEKNXAMPVTADKDYHJSWFUJIMZBJNMCGTEEFEJUPMGYUQOVHTVFWXQTRCKJSGIGHZSBRMCBHBSPNCENHUBBGLHZRQWVLRZUXASIQNLXJKUXFNCPGLGNWQJKYKDEYPIVVBGEOWLFWXDTDVSFDZATCHXTLWUALNAWONL");
    msg.description.assign("CNWCPIWTQWZMIEPXHFGIRGECURAELKIBYEJHDHXUYXWRZWAAZBPPTINQPHUTFHTLSDLDAQKCBIVFNFUHSRGAXUKYBRCGZODAIQDNVPPGZNMGQISYJMMXCNZSMRBSJLQLETOYYRNFOWKKGOYEJULOVOSFZMTUMCGBQALQXWMBCVEZJVXWHKKWCZASRWJAYVPSDHYV");
    msg.reference_frame = 215U;
    msg.leader_bank_lim = 0.02127590462662321;
    msg.leader_speed_min = 0.46868918070783794;
    msg.leader_speed_max = 0.24581790281078253;
    msg.leader_alt_min = 0.3997506608286444;
    msg.leader_alt_max = 0.29059322890270023;
    msg.pos_sim_err_lim = 0.7570169758299301;
    msg.pos_sim_err_wrn = 0.18413855692477354;
    msg.pos_sim_err_timeout = 17382U;
    msg.converg_max = 0.8002322979135271;
    msg.converg_timeout = 41872U;
    msg.comms_timeout = 48774U;
    msg.turb_lim = 0.44314023664317637;
    msg.custom.assign("MRQIEHTAXFFVGCRIPDEDVMDFIMQPJDMYAJEUZEFCWNWZZGHKFLECULVVYZMFXLKOHYSGVBOOAQTAPEQCDVLJPKBSGVVPUSGDBHHBIGPJZUSOIUUINUTEOUHRRXHPXITTBMWKCKBQZOLFEZLPRZEBWHGEVUAFSYAFKXIXJRSIWTYQRJNOVYMSYNHWCQPWKWQGSQOCGMWCMDNLDMRRBGKXCYDJONTJLBRONLTBAXXZLZTNFQ");

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
    msg.setTimeStamp(0.17970467572325222);
    msg.setSource(22938U);
    msg.setSourceEntity(218U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(238U);
    msg.formation_name.assign("DRLUOVGNKBWXWLVKTBOGZSPBYWOXKFDZDSJPOGNGQAVANMWOFWQVKLRMMPZNGXWCQLSXWESDNJAVCZHNHQHDXIXPRWAIZYDIUUITBIISXFHAKYARCOOBAEJEQRUJLAFTAKSBSJEFCYZKQGXSTEPRFTMSYJGKUOLV");
    msg.type = 50U;
    msg.op = 89U;
    msg.group_name.assign("QFRUFNXFPUOGNUAFLSBOGRSTGGZJLIYTBLOJWACMNKXHEDCFZEVIHNKPZLHRKBXECAYKXMWRRVRARTKE");
    msg.plan_id.assign("OUYXGCXSPYOTADUVHNLNSGEVFXWHPTECZYTOCNQTZQEXXRYMODJEQMMZLHHWFNCDSWVCTOSARWQIEKOIARMIHYWMFMQPEBCHFGAGBURKUOQMEDREJNINBVDBZHICPQNOGYJCBASL");
    msg.description.assign("AHOWGNPIKCULUFNMJZMYFGZHRANSMCQOXTNNBTPIYBXROAVMSVSQWHSWGMBUUKEUMCPNQQJBRFOGDYTSVKCLLJTLEERKEMGYYDTSIYDQHHCPPUIBZGDXNHARRPXBLKIFWICAVDEAOQICKQAZIOUFEAUUMILNDKKVLZEZXJADHOGVRFPTUFVZEVBFBJSIWKMKPHLQLONYHEXZXJZXWFPQLSHNSJORC");
    msg.reference_frame = 65U;
    msg.leader_bank_lim = 0.6951561619064446;
    msg.leader_speed_min = 0.8165735389458053;
    msg.leader_speed_max = 0.38452459970726494;
    msg.leader_alt_min = 0.25460285948013006;
    msg.leader_alt_max = 0.7563708951604676;
    msg.pos_sim_err_lim = 0.3188865587716271;
    msg.pos_sim_err_wrn = 0.12433400581150444;
    msg.pos_sim_err_timeout = 61849U;
    msg.converg_max = 0.5470260656229731;
    msg.converg_timeout = 2665U;
    msg.comms_timeout = 38007U;
    msg.turb_lim = 0.8689210509442095;
    msg.custom.assign("ILFDOGSWZXMYFAPLOPVZSQK");

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
    msg.setTimeStamp(0.6293200275713399);
    msg.setSource(63543U);
    msg.setSourceEntity(32U);
    msg.setDestination(18543U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("PCWDTLNYHUBFLPJOTWGYNBOELHJLZCYHOMKKEAHXVMFXESFHSQLJTUAJBFGFUOPOXHZFRCDUGXVXNJSSA");
    msg.type = 202U;
    msg.op = 218U;
    msg.group_name.assign("BKFSXHPEVTRBKTTDPMKIVSVTLTJDCEJDBBOBHLLMWZVOLNZCNAGIGGEOQP");
    msg.plan_id.assign("CZAATYMRDPGOXZVOMLAJGMNSSLGGDSLMKMHYLNZKMQMRTUTEPXAIEUOWRFBPEJMEVGLGOZFYCDFYIVWQJQLEQPKKKCLIXYUFCAVNZTTFYZTPNBXAVRRPHPIVFNTXWKIXBFEEWUFOLSYOUMBSWEVDZCGBXBKFIQOTUVABQLCZ");
    msg.description.assign("KIVDYBLIKTQNUVDHAOVZLHTXVYLPZUJRFDRSFMVCRLSBYZZYJUDTADWBPMRMDQHCOHXYYASGVRHKMLBEZJCBATUIAERGMGOUAPCKTYGKEUCPOXSYBFFVGDAPMINRPXRITNSWXFPUIICWXOUSLKSMEOAJKHWDEVPJBJAHCXZBQPZWMFATNKJNKEGOSEHQILHWGGXMFSXREONCBSKMNQBTUWFLOOWTPIWXCIUQHEZRNC");
    msg.reference_frame = 28U;
    msg.leader_bank_lim = 0.1748899049394188;
    msg.leader_speed_min = 0.1777597800886549;
    msg.leader_speed_max = 0.5368697113271997;
    msg.leader_alt_min = 0.5405095807709953;
    msg.leader_alt_max = 0.43848328476276377;
    msg.pos_sim_err_lim = 0.06383096565207325;
    msg.pos_sim_err_wrn = 0.8231615003588983;
    msg.pos_sim_err_timeout = 1820U;
    msg.converg_max = 0.4108574922772651;
    msg.converg_timeout = 18133U;
    msg.comms_timeout = 1838U;
    msg.turb_lim = 0.0010095385482584707;
    msg.custom.assign("QTEHYEFLWFCZZTIIDENIBOENSVAYPMLQFGIYNSGQNOGBXRMCJANLXCMMDAEOUCJTFTUYADTHK");

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
    msg.setTimeStamp(0.766257273289234);
    msg.setSource(23501U);
    msg.setSourceEntity(248U);
    msg.setDestination(59203U);
    msg.setDestinationEntity(156U);
    msg.timeout = 48113U;
    msg.lat = 0.5074654100695393;
    msg.lon = 0.43114878363209663;
    msg.z = 0.8301998223644778;
    msg.z_units = 115U;
    msg.speed = 0.6650766864985939;
    msg.speed_units = 27U;
    msg.custom.assign("DQOGJJIUDJWZJQTMIOCTCAEZHGIIFTYHRWIVSXXCCYODXQNDBZFKUVNPRTMUUUDKXWNNDKSLDYRALFVMGKEVUGJMLPCPJABILOEMDGNHXFFJHPRUGXWYSEPJTDSLQDMYHQXNVCGUZECFLBIZTA");

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
    msg.setTimeStamp(0.603643474246621);
    msg.setSource(7807U);
    msg.setSourceEntity(229U);
    msg.setDestination(33028U);
    msg.setDestinationEntity(5U);
    msg.timeout = 40792U;
    msg.lat = 0.5261014252665965;
    msg.lon = 0.331739590237607;
    msg.z = 0.7759341094199127;
    msg.z_units = 179U;
    msg.speed = 0.03860263979545153;
    msg.speed_units = 82U;
    msg.custom.assign("EJJUXZVCYOMGBIHEXBGTFURPKYROINKOZIPUZOZKKGWDRWRCZEKVDMQDOYDMAFDCMAEOJTQVKXWHUQGPXKDLQCTIXHVMBNJVZOTLSRNMIVJPXKXGGLNBSFSCDGABGLTFAWOVHYIQQBLYYFTUYDSDZFTIQNJTQICWESHNAYHFTQMH");

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
    msg.setTimeStamp(0.9427717995380771);
    msg.setSource(12419U);
    msg.setSourceEntity(142U);
    msg.setDestination(32284U);
    msg.setDestinationEntity(107U);
    msg.timeout = 28310U;
    msg.lat = 0.8549777427863519;
    msg.lon = 0.526757639887882;
    msg.z = 0.22537577822242194;
    msg.z_units = 209U;
    msg.speed = 0.8887958433967692;
    msg.speed_units = 147U;
    msg.custom.assign("QTDBLJDPONTVGGALBQQSMLEYMXDHFHEXLLZDNUAHUPVGEYXNNUXFFYFFFEBQXVWHICMUOYGDKAMXPPXGJACYDZNTPCIWZVJNJJHBZIHSRKVCHOPOSKZJSLNJHKSRJEBZRECUBDTARSQWYL");

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
    msg.setTimeStamp(0.9327846725004988);
    msg.setSource(23508U);
    msg.setSourceEntity(66U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(105U);
    msg.timeout = 18717U;
    msg.lat = 0.04630198613530223;
    msg.lon = 0.5414248748579956;
    msg.z = 0.31202684929037117;
    msg.z_units = 127U;
    msg.speed = 0.9679494377505412;
    msg.speed_units = 64U;
    msg.custom.assign("DRNWBSSUEYBRJACCAWIGDHUBMIQIVTXJPDMFWPSTEGEDMXGZPBAWXYXSBYGUAHLYAUUISTXRKXLKNVCCTM");

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
    msg.setTimeStamp(0.22569053623513713);
    msg.setSource(39332U);
    msg.setSourceEntity(83U);
    msg.setDestination(15517U);
    msg.setDestinationEntity(30U);
    msg.timeout = 40866U;
    msg.lat = 0.31837752243554807;
    msg.lon = 0.24722071080077135;
    msg.z = 0.8476947383502272;
    msg.z_units = 114U;
    msg.speed = 0.8546296253091237;
    msg.speed_units = 54U;
    msg.custom.assign("GEIHNZTYBAOKBLUZIEEUHBPEAOIFLWYMTFLDJKRQDTXKADIZUWCDUZNQFCMGRGOEEDQQQUABWUZPNXPCKOKXARRRVOOWJQNEMYVWSYYRNLQJSGDTAOWJFEVCISRCZANIIDGSMTVTW");

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
    msg.setTimeStamp(0.8368908070851869);
    msg.setSource(38697U);
    msg.setSourceEntity(198U);
    msg.setDestination(24876U);
    msg.setDestinationEntity(109U);
    msg.timeout = 11322U;
    msg.lat = 0.6842570033063456;
    msg.lon = 0.8911393331032821;
    msg.z = 0.6783539270689414;
    msg.z_units = 238U;
    msg.speed = 0.29402648554542987;
    msg.speed_units = 218U;
    msg.custom.assign("HKMDVJWPIWNIWRXYJKWJLAHJMAVOJEUYYWNJHRVAALMAUFGKFBBAPAGTFIOHEMIKZJZPSPTVXHZMISRSMXDOCFNGBHNMGYLOUISCEUQYWGVUDUIAGBKJNJCLPSC");

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
    msg.setTimeStamp(0.5570579745776921);
    msg.setSource(34022U);
    msg.setSourceEntity(14U);
    msg.setDestination(35727U);
    msg.setDestinationEntity(162U);
    msg.arrival_time = 0.8769568152437803;
    msg.lat = 0.21237130177307983;
    msg.lon = 0.725412413054947;
    msg.z = 0.7846860682117055;
    msg.z_units = 143U;
    msg.travel_z = 0.9305380909743644;
    msg.travel_z_units = 112U;
    msg.delayed = 110U;

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
    msg.setTimeStamp(0.9897734395956851);
    msg.setSource(9784U);
    msg.setSourceEntity(85U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(56U);
    msg.arrival_time = 0.70730360885717;
    msg.lat = 0.1757870237801955;
    msg.lon = 0.5144435471045982;
    msg.z = 0.5666324385899385;
    msg.z_units = 254U;
    msg.travel_z = 0.7275106127405141;
    msg.travel_z_units = 95U;
    msg.delayed = 240U;

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
    msg.setTimeStamp(0.6008650121457407);
    msg.setSource(28865U);
    msg.setSourceEntity(120U);
    msg.setDestination(37754U);
    msg.setDestinationEntity(219U);
    msg.arrival_time = 0.1494497492610326;
    msg.lat = 0.2353535511841699;
    msg.lon = 0.9574246777173288;
    msg.z = 0.1760514269128819;
    msg.z_units = 177U;
    msg.travel_z = 0.8217306898011765;
    msg.travel_z_units = 32U;
    msg.delayed = 50U;

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
    msg.setTimeStamp(0.3671830773781284);
    msg.setSource(11354U);
    msg.setSourceEntity(206U);
    msg.setDestination(6785U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.25224196216641115;
    msg.lon = 0.42858372800435773;
    msg.z = 0.616395417806692;
    msg.z_units = 175U;
    msg.speed = 0.010397714503934119;
    msg.speed_units = 191U;
    msg.bearing = 0.9485335608946441;
    msg.cross_angle = 0.10224524587218375;
    msg.width = 0.20395443225562548;
    msg.length = 0.717483796416164;
    msg.coff = 162U;
    msg.angaperture = 0.4637282733131919;
    msg.range = 50491U;
    msg.overlap = 139U;
    msg.flags = 128U;
    msg.custom.assign("YKWVCAZRNCKWRJYMJFUUILCNDIXBFAAJXKRLYNTVQZUTOBRDBPSUNMWNGRVIJIGAVMEPFYDDQXOLFHCTIHWJTQVFTEOIXOZDUZHMBYXHMOGKZOYZCQNPDLKOASRPRLVXGMGDDEVKKPVPUZESIWANJRTLSUAZIATESGGWQNXWRMSUDJSHXCSHPQBJFIUWWZGTOYLHMFJQBLHYMAPOXWEFTLCTKPCZXNIMEHPHNBEASEUGCGCKEBRQDJQ");

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
    msg.setTimeStamp(0.20209288925214564);
    msg.setSource(26586U);
    msg.setSourceEntity(43U);
    msg.setDestination(23439U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.7954570152804454;
    msg.lon = 0.03679752318958507;
    msg.z = 0.3729283172506507;
    msg.z_units = 145U;
    msg.speed = 0.6998738990546062;
    msg.speed_units = 178U;
    msg.bearing = 0.1347252496440885;
    msg.cross_angle = 0.8139124615826041;
    msg.width = 0.011081788523976233;
    msg.length = 0.8019057533226371;
    msg.coff = 89U;
    msg.angaperture = 0.33950134437218715;
    msg.range = 11550U;
    msg.overlap = 174U;
    msg.flags = 110U;
    msg.custom.assign("OGTFOOEAEWVBXDZARKLERMPLKAHWLXVOGBHKUXJOAURIRMVZZBKSMUVNTXEBGHSHQOCWLBBFZDGPJPQJPLIDXNWJKBIKZSNENFJJSZINGIXIQBWIVFSMRYAZUXMDHPDUFRCDQQZMUYYDCQEMMDCDUXQVNOULJJGLYYRPTXAQTLVGILSREPCYW");

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
    msg.setTimeStamp(0.40243921966644214);
    msg.setSource(27302U);
    msg.setSourceEntity(221U);
    msg.setDestination(16209U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.9111284377992475;
    msg.lon = 0.6224149402599504;
    msg.z = 0.784499207757563;
    msg.z_units = 133U;
    msg.speed = 0.2557559914795945;
    msg.speed_units = 13U;
    msg.bearing = 0.6238845744577062;
    msg.cross_angle = 0.05569059618170147;
    msg.width = 0.17823721464306874;
    msg.length = 0.10172451292044826;
    msg.coff = 220U;
    msg.angaperture = 0.38953115182678744;
    msg.range = 11382U;
    msg.overlap = 101U;
    msg.flags = 185U;
    msg.custom.assign("TITBBKGUPXKDJMBNQXSEBHHGWECEEPYFUCYIMLXODPXSFVDQSHIMQEUNGXBALSOTPZCLTBRGNVLVGMKZPDSYVUAKQMHRVUYYUBNNZHIIWRSTHZXFQNRKDANOCZVCQROHJJWWKXUEFAUVLJZXQSQMEAAKWYCWDBYJPVHOPGFTTCNDGYAWOSSXBVJOTPFSIRZIADKMYLREMDLREPUQZGLIZWNJYBFIFJRCOUAGLPDTRHKVGMI");

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
    msg.setTimeStamp(0.761767373970573);
    msg.setSource(16830U);
    msg.setSourceEntity(63U);
    msg.setDestination(40523U);
    msg.setDestinationEntity(12U);
    msg.timeout = 21709U;
    msg.lat = 0.5426756547060572;
    msg.lon = 0.8268869476497346;
    msg.z = 0.31931197400434974;
    msg.z_units = 178U;
    msg.speed = 0.6183218111212456;
    msg.speed_units = 118U;
    msg.syringe0 = 182U;
    msg.syringe1 = 191U;
    msg.syringe2 = 164U;
    msg.custom.assign("LFWWJRLPHXUWVSZUKDWLTHLLYPGEYEPBHDUJIGILTOAIDZMOGJKSRKUQECAYPJIDAGRRXFTPGNXXNZCHSXFNLAXIBUKVMQRYFLVCGFSWCFMFTNCWXHDAKROZCYOYBETEDVRCNKAERAHPEGGJONBNCVSWUZEHHYKBUADFPYJ");

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
    msg.setTimeStamp(0.2056732658422089);
    msg.setSource(45153U);
    msg.setSourceEntity(19U);
    msg.setDestination(39138U);
    msg.setDestinationEntity(201U);
    msg.timeout = 22878U;
    msg.lat = 0.287399428924883;
    msg.lon = 0.08315626547876143;
    msg.z = 0.9697756535229187;
    msg.z_units = 91U;
    msg.speed = 0.5336910339285895;
    msg.speed_units = 63U;
    msg.syringe0 = 137U;
    msg.syringe1 = 110U;
    msg.syringe2 = 235U;
    msg.custom.assign("MQZEHTLKYYYQVOOAMWNFKCNTPRJNBHIBSAAQKRULQGGBIWTTXZEBHFQCDUGFNACFSYEPIPSPKCRTNHVDGAXONMXYNLOXGCZJXWVLUVXSNEAJRVDANVUDQBLYYPD");

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
    msg.setTimeStamp(0.8963597417859568);
    msg.setSource(26697U);
    msg.setSourceEntity(80U);
    msg.setDestination(3031U);
    msg.setDestinationEntity(136U);
    msg.timeout = 3103U;
    msg.lat = 0.46802457029526734;
    msg.lon = 0.7497866104259051;
    msg.z = 0.6962500503635899;
    msg.z_units = 33U;
    msg.speed = 0.4692123795504092;
    msg.speed_units = 47U;
    msg.syringe0 = 70U;
    msg.syringe1 = 237U;
    msg.syringe2 = 107U;
    msg.custom.assign("PBKVRJCMXYANNAWJZROLQFXZJUAWLPUGYEGDNGCSBISHFZIYPUGMUABHGMQXBXMJFBKPVZCETAGXQTLREKNRLAULILCDUCLFQTEXQOOPSNBYEQXYZGPUVEEHVHYWQWBXKCMDFNMONTJUMZLEFEOIYRAWJSPIHZSADJLZMDXSFDIDNGNDIJFVBYWKTQFH");

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
    msg.setTimeStamp(0.6893132555995808);
    msg.setSource(12685U);
    msg.setSourceEntity(151U);
    msg.setDestination(22577U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.2871513529047639);
    msg.setSource(6461U);
    msg.setSourceEntity(22U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.8926275551672663);
    msg.setSource(21975U);
    msg.setSourceEntity(83U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.13494856510279474);
    msg.setSource(32834U);
    msg.setSourceEntity(214U);
    msg.setDestination(11454U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.06843613788049552;
    msg.lon = 0.49596184161800383;
    msg.z = 0.7801231552423057;
    msg.z_units = 247U;
    msg.speed = 0.2557973715456422;
    msg.speed_units = 7U;
    msg.takeoff_pitch = 0.9640052051918087;
    msg.custom.assign("IZRTCJBSLYOCRPSQRAOEEIVIZMABCBFNMJVWHPNXSOWGLSJIRJVRZERNFYEWVIKZQHIFNGMYLAUOWOGZXIFQKTAQEXCCLDXCGRYLTBOQXWBLAFNBWFMCQNSKVMHXZETUBONKSWOTJYUBQCAQUXQEOMHULNGPDMGFNCHUKIDHRJXVDKVPFHKSFVCTMGKOELUZDITVAJASJHTTNMUYDPF");

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
    msg.setTimeStamp(0.6530504972493072);
    msg.setSource(46228U);
    msg.setSourceEntity(157U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.7151417257477777;
    msg.lon = 0.2706827570216971;
    msg.z = 0.1734024839863677;
    msg.z_units = 13U;
    msg.speed = 0.8486346664784628;
    msg.speed_units = 164U;
    msg.takeoff_pitch = 0.1821007608721239;
    msg.custom.assign("MQNCWEXDDNHLVMZRLFZYDQSZQGNEURZMBBWOYDTFPYCPKDOTGEEZWIBAOMVITFUCAQBDVDJNQJKSPRTWUHEQLMRMYUGYLNENIBOXHVBPZIJBVRPGUGWPIRATPAXZVDUYAKTRMAXVKJAOWCHSEDXFEYBZMVFKHIKTKSGNNOFLXOAMLYACJWXXWCVTXIHCFWJFYGTQQUHRLSSYZVSIXGRIEKKFJSSQHEINPJPWUCPQGT");

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
    msg.setTimeStamp(0.6323927144466502);
    msg.setSource(710U);
    msg.setSourceEntity(168U);
    msg.setDestination(3358U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.8866190017969449;
    msg.lon = 0.9371955327097493;
    msg.z = 0.8280972927156445;
    msg.z_units = 172U;
    msg.speed = 0.4931920124688415;
    msg.speed_units = 245U;
    msg.takeoff_pitch = 0.6436839459999071;
    msg.custom.assign("SIMJVTMZITSLVKSVPFMAQZQAASUBQRJMZQZYTZEAXETHW");

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
    msg.setTimeStamp(0.3681565543903379);
    msg.setSource(38466U);
    msg.setSourceEntity(50U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.14017364802034427;
    msg.lon = 0.13050869649402908;
    msg.z = 0.6711750223061168;
    msg.z_units = 16U;
    msg.speed = 0.8857457614704772;
    msg.speed_units = 161U;
    msg.abort_z = 0.7585641725672059;
    msg.bearing = 0.03488196125820531;
    msg.glide_slope = 63U;
    msg.glide_slope_alt = 0.3773449251633495;
    msg.custom.assign("FCTEDADVDCEWIASMNUUFNWPFUMXTNHCUYVRONTZGGGGKICSWY");

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
    msg.setTimeStamp(0.5341239617628724);
    msg.setSource(40235U);
    msg.setSourceEntity(70U);
    msg.setDestination(42585U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.7480922643911577;
    msg.lon = 0.7703322685719718;
    msg.z = 0.11763221444695326;
    msg.z_units = 227U;
    msg.speed = 0.8974830872223724;
    msg.speed_units = 231U;
    msg.abort_z = 0.08587613062317101;
    msg.bearing = 0.20478870442633124;
    msg.glide_slope = 102U;
    msg.glide_slope_alt = 0.615375978565996;
    msg.custom.assign("MLCTAVAYGKHFNOCTNYXQYGIGCQVNXMUBEJYKYZHDZLPPONFDERVYTJUUKHDBWUCUQVECQPQFRKZNEPJJSKNJTNYFDROAZRQVXJOTGPCVBOGNUEXIRCUAIMCBMREHXSOJVCQIAVXAQWRLWHTJTCWIDJLKY");

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
    msg.setTimeStamp(0.6566263275759504);
    msg.setSource(34262U);
    msg.setSourceEntity(254U);
    msg.setDestination(4591U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.6346643800249859;
    msg.lon = 0.3900063495048036;
    msg.z = 0.3965426800230184;
    msg.z_units = 72U;
    msg.speed = 0.6483966783981907;
    msg.speed_units = 136U;
    msg.abort_z = 0.8210710781172832;
    msg.bearing = 0.9353064208435874;
    msg.glide_slope = 205U;
    msg.glide_slope_alt = 0.13670658086447562;
    msg.custom.assign("MGYBZXUWCZIANOSZGYMLSNGOAJSETMVOFZQCDLWXVAFARVUDRZPYTLKPJETMEDBQHKBLRXQVVDWVIPAAGHHCBISBTOIAQKNFRBHQKPLMNIZFQHZCLXFHKPNYIBVGMUDNJQDSDUJXYTOIWYVMRUSJMGSEZCSL");

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
    msg.setTimeStamp(0.7953610249716249);
    msg.setSource(29580U);
    msg.setSourceEntity(196U);
    msg.setDestination(45643U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.3944835407483759;
    msg.lon = 0.5042073616198302;
    msg.speed = 0.5551236874754686;
    msg.speed_units = 145U;
    msg.limits = 125U;
    msg.max_depth = 0.588052670759198;
    msg.min_alt = 0.38711127845609494;
    msg.time_limit = 0.6423318140242891;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9986707876780717;
    tmp_msg_0.lon = 0.22486588320165313;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MUSPKYBLTPIUCLOQHXPLOPESOHIOGYOKUQROJXSQCTACKZMJFEDNEVDLNOUYTDLYEOJZDDCMDRTJFSTXBABYIQPCBHGUBYMVEKPARPFXSYINEQBRLFCPZFZIRGQSNHSLGTHNNGNVQXTVKUCKAFJMZZEPFWVHRHXFJVMGRMLMVG");
    msg.custom.assign("JGVSAZHDPXYJMJFLAFRJAPUJZRMWVXVLMINQAOAKRXHDCYREOBGSADQPGZPDYNKWYXUYSFPUGYYNWPIRCHUWKLINPOWHOMSZTBNDTDXCKRGKBGYSKBRAEVBEPTTPEXBGWXCCHAFUU");

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
    msg.setTimeStamp(0.881842994979403);
    msg.setSource(42926U);
    msg.setSourceEntity(6U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.7758371709607378;
    msg.lon = 0.34642088247415614;
    msg.speed = 0.23752224616554096;
    msg.speed_units = 180U;
    msg.limits = 162U;
    msg.max_depth = 0.5997389262524734;
    msg.min_alt = 0.13078383075493738;
    msg.time_limit = 0.7767484407621175;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.565000273303346;
    tmp_msg_0.lon = 0.5111200832844792;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JKSVJMEXQSJVGMIUPFINFVOJWRJATYXFVIDPTELZEATXVZFXQJHGMXHWZIZJQACRUEIPQTOHTURLOARGUJALBRJYYZNGSRWFSVUAYOGKRHMDZEANKQPYQJECLKWAVHCETONMIXRZQNWUZSNVQKHBHCBOKNULUYWKITCOHGVLIHLMTRYDPKBSFDMXQDKZFPOVKYUAFTUFZYDNDFCPEXMCWSGBSXMDPEPAWWGBCBIBGS");
    msg.custom.assign("ZQNFHNCNZIHLFDIKXXMUUYYRDEPHPKMTADWQPFMLBHFUUEUNWJZYZNJHSCZTGLIZASVVCBJLLU");

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
    msg.setTimeStamp(0.8900704595855217);
    msg.setSource(10694U);
    msg.setSourceEntity(7U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.20836713187570344;
    msg.lon = 0.7841173678767759;
    msg.speed = 0.3389493059258646;
    msg.speed_units = 112U;
    msg.limits = 0U;
    msg.max_depth = 0.7592176670013985;
    msg.min_alt = 0.6038993981541926;
    msg.time_limit = 0.7212368819065035;
    msg.controller.assign("BJUUZOUKSFIXDMDDTHFHLBUBQEQLMTAJNWBMHBZFRZYPVGUMZCFQEVRNYYPPXWVAPZTULXCMHHWCJAKZTKRSGXODEROESBDWHIWOQGIUVIGFTICPSIANWQXFPZCAFJKDVXQLQEBXBOTJONNELVPKNSMILUGKUSWRIJDYMKDFRCASZKN");
    msg.custom.assign("FPCRKGSGDGFQSHMNKCJNZXJJMXSUOIXLSPEVZJ");

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
    msg.setTimeStamp(0.8777673353118233);
    msg.setSource(36117U);
    msg.setSourceEntity(65U);
    msg.setDestination(20759U);
    msg.setDestinationEntity(39U);
    msg.target.assign("VGRSTYANQEAAGUPWCQSPZREALFOMWINYYJRLJTXLPTVLYUQUDKHIKHCSVERCEQSHIOBCPWISPUSJPORZZCZLVCYENFAKJKYEEXYBQEBMAGYTVKNVTBHZZWSDNKSFRRQBOZDVBKNGCWJMRWBMLMGXTCJHIDXCHPGFGMOUJCITBOGWVGLXLKONSWUGBZDIOJIUEXAAWASP");
    msg.max_speed = 0.7168799990332554;
    msg.speed_units = 163U;
    msg.lat = 0.892338945250894;
    msg.lon = 0.9243417153709811;
    msg.z = 0.840719098278197;
    msg.z_units = 174U;
    msg.custom.assign("QGTYHIRZOWPTAUTGYADBMZSLATLVJBNGNKNSQDCUDWOOBWMMLFSHGXDQFYQYWCMIXZXPYPRCURUIQWXNXLFEABTRUCDKKBZ");

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
    msg.setTimeStamp(0.22874182229447404);
    msg.setSource(15584U);
    msg.setSourceEntity(37U);
    msg.setDestination(60998U);
    msg.setDestinationEntity(108U);
    msg.target.assign("MVOKUGYMNQGMODWACYTPLNPRVEZKWZSWVBWRWQXIAGRDIEHFVKBJCYXALAEGARZZTJIHUPHWLUVNQTQCPHOJWQICOXDBQEEZUKKFXFCKLJFGYJEXDLDSWUXEZALSXKUJUNGHTQMIMIY");
    msg.max_speed = 0.6896286340186221;
    msg.speed_units = 63U;
    msg.lat = 0.32667559429800974;
    msg.lon = 0.591242189898433;
    msg.z = 0.866140536294809;
    msg.z_units = 80U;
    msg.custom.assign("QNZSPZHVLEBTPFAOEMTMYXGPCKCYJRSUHQYAYKJSCCUDOFVDILIRQESZZBBPFJXUAMYMYQVTPTNOWCSEGEBNNKJMOKCWWOFSAWDQVFZFLXOARTIJENZFIDEHIRNWRGHBHLBOTCJDIUFAYAWYCSESHOEBUVXRGTXEWUIVZHILWFXIVTNHZIOJXGQQZLJHMLKZKAFLOQQGUYBBKXDPDMKRSLJVYUXJW");

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
    msg.setTimeStamp(0.9158011361525616);
    msg.setSource(18244U);
    msg.setSourceEntity(32U);
    msg.setDestination(41309U);
    msg.setDestinationEntity(181U);
    msg.target.assign("CQFTQRFGZNBRYGGLYUMFDTBZCYESXYNGXMNWNQGARIIIEYNKRKLJAYBAUWBVWPJUXTOHUPGESIKCZLMDEOFUSBCMEVRNUFBJTBDSVDRLGOJCVKSDQKOPZJZLJOFMVCEMHPAKOMZHFXUNDOMUZWUTEOQVIOIDHQFMDVBKSLQJJIRBQFLRWFXSJPVQAH");
    msg.max_speed = 0.25096892850264474;
    msg.speed_units = 240U;
    msg.lat = 0.90923907614998;
    msg.lon = 0.7540589760278347;
    msg.z = 0.07259437515415612;
    msg.z_units = 113U;
    msg.custom.assign("BPDNAFEFUHCXBDDAOUGMFBVOZKSFXGJPIXFMTGQUCSMBWMKDSEAJJINGXYHCXRGYXPJSNNJVMSOCIHJXDFDNTHMLNRHTHYSYLFFLQOLBAGVEUIQOANXZNRRAUUOTJQRCPZGTBVSZEEQZQOCHBQLTGTCPDKJARYWUPIWXRQWFPMGBWYTWSKWTXYWEOFZDRKJULAWRZVSQJVLVLDVACNAZEOYQKSLPHMCIEHV");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.4613138731438534);
    msg.setSource(15409U);
    msg.setSourceEntity(57U);
    msg.setDestination(63813U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 224U;
    msg.error_count = 72U;
    msg.error_ents.assign("TELXBJVDBUBDIOJPOWXBCVAOXIRDUVVOPFNSABV");
    msg.maneuver_type = 49016U;
    msg.maneuver_stime = 0.21472491689082052;
    msg.maneuver_eta = 15765U;
    msg.control_loops = 4225224697U;
    msg.flags = 247U;
    msg.last_error.assign("WBZNZMYPZEHKMGKTVZEILMFQEKRNPTTUNTUYVYCMPZOHRXRTEVJUQNPVFYHHNWSLDGRESFOPGOYQROIGKAEWCOC");
    msg.last_error_time = 0.6497772403818812;

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
    msg.setTimeStamp(0.020842184124711838);
    msg.setSource(48032U);
    msg.setSourceEntity(105U);
    msg.setDestination(33796U);
    msg.setDestinationEntity(9U);
    msg.op_mode = 70U;
    msg.error_count = 171U;
    msg.error_ents.assign("NBDUQLUAOAEYCZUIVKGBBSTDUAQSKQXFJHXOYPRNVTTNTBIMZDOUVBYMPBCQVDEUSILLJOFZNWAQZNAFUEAIRKSGXORLTNQQVUGAYO");
    msg.maneuver_type = 13646U;
    msg.maneuver_stime = 0.6555957145000374;
    msg.maneuver_eta = 50360U;
    msg.control_loops = 1466297876U;
    msg.flags = 92U;
    msg.last_error.assign("INANRRZYSLPROXCWRXCPOQJQDYVJTBKTYFBMXALLLTSBECPTYDNZYQUFLZDWITSORKVGPOHYFSPLAJJKCEKKZBBLNNQHFZUMTHFEEXHAWJUDGGRHAMUNWVXRCXQEWBKQAJ");
    msg.last_error_time = 0.6051163637954509;

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
    msg.setTimeStamp(0.5782972878034721);
    msg.setSource(43826U);
    msg.setSourceEntity(239U);
    msg.setDestination(8027U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 25U;
    msg.error_count = 166U;
    msg.error_ents.assign("TEDTQNWXQVIZETED");
    msg.maneuver_type = 37393U;
    msg.maneuver_stime = 0.4610331930219732;
    msg.maneuver_eta = 15104U;
    msg.control_loops = 4130038519U;
    msg.flags = 83U;
    msg.last_error.assign("NRNXJRMGEGZDOSSRLAVJULOWPCUKKYXZVPVXMMOZYRO");
    msg.last_error_time = 0.7182385676943827;

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
    msg.setTimeStamp(0.18423940021254293);
    msg.setSource(24612U);
    msg.setSourceEntity(88U);
    msg.setDestination(40726U);
    msg.setDestinationEntity(166U);
    msg.type = 206U;
    msg.request_id = 54366U;
    msg.command = 59U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.19168300559723672;
    tmp_msg_0.lon = 0.11457961128211802;
    tmp_msg_0.z = 0.025935086274661567;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.9513188512894524;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.abort_z = 0.47771825277158475;
    tmp_msg_0.bearing = 0.5881964371423292;
    tmp_msg_0.glide_slope = 155U;
    tmp_msg_0.glide_slope_alt = 0.4559606989519719;
    tmp_msg_0.custom.assign("YLBOCXYSGMUZAO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41377U;
    msg.info.assign("LOLQHVHOEGSNCVIFLCVFODHCDZNAMWYQLUAIGXQNRLHCEFRTIWHTNUMXGCGUMDRFWBLPXVKHCDXVZBJTABGNEDWRVHTVCBEEOKUIUKFKOPBJRTIMRQUWKFYJXSPWLEPTAYJYZQRLSQZYSMQAJ");

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
    msg.setTimeStamp(0.44659244742969517);
    msg.setSource(34761U);
    msg.setSourceEntity(34U);
    msg.setDestination(46550U);
    msg.setDestinationEntity(10U);
    msg.type = 223U;
    msg.request_id = 5699U;
    msg.command = 111U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47180U;
    tmp_msg_0.lat = 0.014342788887735325;
    tmp_msg_0.lon = 0.1396139129508316;
    tmp_msg_0.z = 0.15564288857302933;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.speed = 0.6748496185950916;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.roll = 0.9426797997739677;
    tmp_msg_0.pitch = 0.09593038748052363;
    tmp_msg_0.yaw = 0.5039227570277961;
    tmp_msg_0.custom.assign("YGUQEXIOFDVSQFUBLNIBLBPKQSFBIEFOYRFAMOBSMXPJPQTEWQNCREROJRCJGKVTLBTNWAPJBHLFNHVCWAJWQXCXTUITGHKRVYNGIUGSLSHNFOKZWDVIGUKXJZDDNNTUAWMPGLFIQSUOFHJTJYYCJZOHEARESCCARGAYQWLKPEGRDHYQUAUITXVXZTZPXZDRNCODEYXJMQDUKPBGV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42040U;
    msg.info.assign("ANEXPFCKXFQOIJWBCRREGMVNITZVWGBBRLXYRYAMADTNLJKDQZEENUZWFAVKJTZGSSXFXOWTOTFIQMISONUUMYOYKDWYAVGMCWEZLPAOXVCHTVELPRVNHJLMDYWIJPRMMSLRQXCMNDLBDFYBZWVBATCZCRTAJPLOFWJECGPGSSFUQSYECNNHHQP");

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
    msg.setTimeStamp(0.878603966658912);
    msg.setSource(27571U);
    msg.setSourceEntity(57U);
    msg.setDestination(54740U);
    msg.setDestinationEntity(234U);
    msg.type = 197U;
    msg.request_id = 62327U;
    msg.command = 239U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 32318U;
    tmp_msg_0.lat = 0.5408181735374367;
    tmp_msg_0.lon = 0.9627892333735643;
    tmp_msg_0.z = 0.18297932278937445;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.7916786076938719;
    tmp_msg_0.speed_units = 120U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5134944322753401;
    tmp_tmp_msg_0_0.y = 0.7257989639096735;
    tmp_tmp_msg_0_0.z = 0.4676119286825787;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("JHUYXNFPPRCBDFLVMBJEA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58669U;
    msg.info.assign("JGKKKVSRZRVJXIYBKDUDCEIBYZYSEMYNGBBIRKWHFLKRICNPTQNCCCDHZWWOLXIOPPMERGOLZTMDPJDPBWSQAZYIQJSSJUYUVMQEQTLHOTQOXCLUARTTSIMWXEJJSKUZTKYEPFVTGFRGHHMHOMYCNKJPIZQZRXCESPMFAHUFMVWBBVZNQGGOVDXNWLHSDTBVXINAYFORRGHPCNUACSFAUTWNQKOB");

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
    msg.setTimeStamp(0.7430817586111453);
    msg.setSource(3209U);
    msg.setSourceEntity(43U);
    msg.setDestination(12011U);
    msg.setDestinationEntity(113U);
    msg.command = 183U;
    msg.entities.assign("SQUTMNTYZGPQYPGNOIGBDNWZCOHNVVMWJREOVAEGXJXXSLOPJUWFCUQDSMKIOTKVABIAGKBVPVKJLORZRPDUAIMZLRCJHADQKEBHLAZQHFCJAQMYEZOTNOSGFLETDTPVTTUSHVY");

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
    msg.setTimeStamp(0.6942217774621551);
    msg.setSource(45236U);
    msg.setSourceEntity(117U);
    msg.setDestination(11432U);
    msg.setDestinationEntity(232U);
    msg.command = 173U;
    msg.entities.assign("IUSKCSRGSFVZLEYWHHZMULWKDGRZZKKHMYIACPVKSNYWIHITLWEOQLEXHUEUMQHYXKVJIDMRGRPCMRTHMUSOAAVJPAT");

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
    msg.setTimeStamp(0.7984940848170111);
    msg.setSource(29026U);
    msg.setSourceEntity(56U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(40U);
    msg.command = 187U;
    msg.entities.assign("SJUZSIBEWGMFFUITLLCZSLTCKIHAAQORXACKRPNKJGDPCURYEXYMBYGPVBEMTOBRRWIMCOKILUDHTCXSVQEXZGDOGQLATQMSTEJXMLKEQVOYUXWSQVNK");

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
    msg.setTimeStamp(0.5705830698716976);
    msg.setSource(19540U);
    msg.setSourceEntity(178U);
    msg.setDestination(29859U);
    msg.setDestinationEntity(110U);
    msg.mcount = 48U;
    msg.mnames.assign("BZYQQZOVGCHZNJJWDIBZZPNTBPNTTVFIHOMVQLLCHLTLSUKBRFSKDWITZUCEPGCIXSPLMFBQXEFUIPUBPLJSMRCGVRELFQVTEPAECDUVDYRQWJGLUMCJHYZAXAAUXKXRHHYJZOPSRAKFCOKYHVWNOSKONMWBIIKWTDLAUXBXNVJOKDSSESDQSTODOKZGRQMMGZYXPBJGIHDMTIEHNTWYYJDGAGOWRECGEKCYRFAXQPRQXYNLME");
    msg.ecount = 145U;
    msg.enames.assign("MDWXFZJMRRKPUZNWWUQRRETHSMULVMQACHXBNEQGFNVJCVKCOZKGHDPOOEYHIUQJVQDTYNFYVZEAGZXJPNIKTJJWMLWOQUPAGJHGJKXBDHSCEXCIFDIKULFKADOGMLNFZUMMXKOENCWPULSOLRGSHWSBTEYTAYPWTXJHYYHJKRMHYBZBDBZXGSZPTWFLVTOFUWSBXPICVAOIVNNEOMEBTQARYVXQAAQICRAPRB");
    msg.ccount = 34U;
    msg.cnames.assign("DUKUZUXTAPRHJKYOZROCHBLMHEXDWNJJDCXPYQMWOVAMKZOXLJYTBWGAJTATGAGWKUBEAKEBSVNEMNKXQIORHLWUUIEXYIGGZCSPCIUFGLBFF");
    msg.last_error.assign("VVOJSMKWCGIEZPOTIQUSFMAKK");
    msg.last_error_time = 0.8370871693500057;

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
    msg.setTimeStamp(0.6987876921987619);
    msg.setSource(7913U);
    msg.setSourceEntity(87U);
    msg.setDestination(12437U);
    msg.setDestinationEntity(199U);
    msg.mcount = 161U;
    msg.mnames.assign("JWGSSRCCLEMENFDXBFGBFH");
    msg.ecount = 146U;
    msg.enames.assign("LILGGZQRPITVPNEWRATVJGQOEBACWUGVTXJFJRUXBUBMOSUDVSLRZGQESVWOWXWKBIPBHCRZPLORHYBQQEYKVNFAGJMDKCRPKWZEBNEDDCPFKPZFBCACCVPURFCFAXMHTBMFZQHUYHDWSGMZTFLIZJDMDYFQJSUTALDFXP");
    msg.ccount = 76U;
    msg.cnames.assign("PLRGDGMXMAIGEYKCAWJOHOXFTEYGPUSDORMVOKRZALLHDJIEJJIGHUJENQTHXWUTQYPWTUZKDVYBPUOEILJLOCHQRPMGCJ");
    msg.last_error.assign("SWTNAUPKSHYUBKKGTEXNDTKBPVHWRQPGZTQMAEQCEMCMRCWZNFVTPOLSBREHXHGONSXPKWIDAWJPSIRAHIYENPOVKWYCWEQWITKNGYBEFLUNZIFDBJMUGIDLHMFZBBXGJFQGXDAJAZC");
    msg.last_error_time = 0.34122884631570605;

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
    msg.setTimeStamp(0.7299666178266969);
    msg.setSource(63983U);
    msg.setSourceEntity(75U);
    msg.setDestination(20365U);
    msg.setDestinationEntity(33U);
    msg.mcount = 139U;
    msg.mnames.assign("NHTIWPKBNCCWTFDJGIEPZOTANAQBX");
    msg.ecount = 37U;
    msg.enames.assign("JHVVKYATGINBMMUUXJYENXNQASZWHIDUBRPWRYUXUGDLCWVWJSNKTFYAIEITBHFLFQSJXKIMCUHPGVELKYCFGPSIWJPREPALMXQLTSHXGFSBTLFHEYLIJPDEEGDOSBONLCBQ");
    msg.ccount = 181U;
    msg.cnames.assign("DWCFJFQMSWREANFXHMNKFKQKPCDVXVJXWSDDHSYEURXZTXGYOMQHSDNVJYNPUGLWFRSZVJJHNCKHGQHARQEIAPWRXUEAIHVPBWLUGYPRKNIEYCBAO");
    msg.last_error.assign("DUWTEGFLJWGAKZDCLDGHRQEMEVBRNRYNXEONKOGRVJQNSRAMEMXMQQPLDPUCXADBSQHSQUCMLKXMMZRLZTDUCHLWNZSLOGEDBHZAFGITHKNQYPABUJFPWYVNOCDSBJCGVBTPIEVWIJKMZSYPFATNMUTTWZLSAFTPTPOQSJLVUYBRBKOVUYXYXRZIMOKUQFJYIEIBADARTWZJNZRICWXHFHCXVHJBYLYDVVIHGPAIPFKSKQIUFWOOCXOGNF");
    msg.last_error_time = 0.5000197520341033;

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
    msg.setTimeStamp(0.8286986313688925);
    msg.setSource(8783U);
    msg.setSourceEntity(20U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(173U);
    msg.mask = 143U;
    msg.max_depth = 0.8342576713593656;
    msg.min_altitude = 0.7061992250728506;
    msg.max_altitude = 0.04112407940374174;
    msg.min_speed = 0.27521565510263013;
    msg.max_speed = 0.23291505845370997;
    msg.max_vrate = 0.39138092267893154;
    msg.lat = 0.6908492991194367;
    msg.lon = 0.4686742809753398;
    msg.orientation = 0.2801526808801521;
    msg.width = 0.010984969261812139;
    msg.length = 0.7961066173085428;

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
    msg.setTimeStamp(0.7275240101841753);
    msg.setSource(14402U);
    msg.setSourceEntity(191U);
    msg.setDestination(26864U);
    msg.setDestinationEntity(50U);
    msg.mask = 155U;
    msg.max_depth = 0.3069516537415119;
    msg.min_altitude = 0.8123411472599964;
    msg.max_altitude = 0.515129573831414;
    msg.min_speed = 0.6328577054108835;
    msg.max_speed = 0.7095929282485645;
    msg.max_vrate = 0.5220340480290766;
    msg.lat = 0.014302681559203112;
    msg.lon = 0.5028235148938839;
    msg.orientation = 0.11022636052201795;
    msg.width = 0.5115273009418105;
    msg.length = 0.6135545773164243;

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
    msg.setTimeStamp(0.665643576713773);
    msg.setSource(18238U);
    msg.setSourceEntity(30U);
    msg.setDestination(40213U);
    msg.setDestinationEntity(30U);
    msg.mask = 40U;
    msg.max_depth = 0.1493074061013604;
    msg.min_altitude = 0.5926042236961007;
    msg.max_altitude = 0.2948899466436523;
    msg.min_speed = 0.012313534874711873;
    msg.max_speed = 0.14014257857083623;
    msg.max_vrate = 0.03901175693024295;
    msg.lat = 0.07173539641285476;
    msg.lon = 0.9860665656055557;
    msg.orientation = 0.9398693081449134;
    msg.width = 0.08153107649453484;
    msg.length = 0.9194251771297647;

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
    msg.setTimeStamp(0.6032148036112377);
    msg.setSource(10959U);
    msg.setSourceEntity(140U);
    msg.setDestination(16750U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.6363909540183519);
    msg.setSource(8206U);
    msg.setSourceEntity(80U);
    msg.setDestination(7425U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.4418492848632324);
    msg.setSource(35723U);
    msg.setSourceEntity(205U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.4006698038391472);
    msg.setSource(49274U);
    msg.setSourceEntity(35U);
    msg.setDestination(29550U);
    msg.setDestinationEntity(99U);
    msg.duration = 50491U;

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
    msg.setTimeStamp(0.2886473647294818);
    msg.setSource(32322U);
    msg.setSourceEntity(168U);
    msg.setDestination(64631U);
    msg.setDestinationEntity(142U);
    msg.duration = 14305U;

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
    msg.setTimeStamp(0.2884315660740998);
    msg.setSource(22842U);
    msg.setSourceEntity(45U);
    msg.setDestination(26694U);
    msg.setDestinationEntity(233U);
    msg.duration = 2902U;

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
    msg.setTimeStamp(0.259954322357569);
    msg.setSource(45869U);
    msg.setSourceEntity(227U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(194U);
    msg.enable = 78U;
    msg.mask = 1173891262U;
    msg.scope_ref = 3588910359U;

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
    msg.setTimeStamp(0.6924943080436962);
    msg.setSource(55848U);
    msg.setSourceEntity(180U);
    msg.setDestination(21438U);
    msg.setDestinationEntity(67U);
    msg.enable = 218U;
    msg.mask = 2300012760U;
    msg.scope_ref = 371166992U;

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
    msg.setTimeStamp(0.9855616672969182);
    msg.setSource(57823U);
    msg.setSourceEntity(135U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(218U);
    msg.enable = 56U;
    msg.mask = 936972992U;
    msg.scope_ref = 618170137U;

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
    msg.setTimeStamp(0.3957852629243185);
    msg.setSource(59038U);
    msg.setSourceEntity(8U);
    msg.setDestination(9293U);
    msg.setDestinationEntity(216U);
    msg.medium = 214U;

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
    msg.setTimeStamp(0.9385150923417809);
    msg.setSource(63615U);
    msg.setSourceEntity(253U);
    msg.setDestination(65096U);
    msg.setDestinationEntity(180U);
    msg.medium = 118U;

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
    msg.setTimeStamp(0.23416093034853924);
    msg.setSource(31196U);
    msg.setSourceEntity(35U);
    msg.setDestination(22092U);
    msg.setDestinationEntity(186U);
    msg.medium = 225U;

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
    msg.setTimeStamp(0.3934591620930995);
    msg.setSource(21709U);
    msg.setSourceEntity(169U);
    msg.setDestination(24150U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5643908316103363;
    msg.type = 238U;

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
    msg.setTimeStamp(0.4953714850853007);
    msg.setSource(32843U);
    msg.setSourceEntity(73U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7039875828831134;
    msg.type = 175U;

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
    msg.setTimeStamp(0.9681376318966375);
    msg.setSource(61952U);
    msg.setSourceEntity(119U);
    msg.setDestination(14081U);
    msg.setDestinationEntity(250U);
    msg.value = 0.10128225262640811;
    msg.type = 123U;

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
    msg.setTimeStamp(0.45877463717839084);
    msg.setSource(23655U);
    msg.setSourceEntity(14U);
    msg.setDestination(1275U);
    msg.setDestinationEntity(17U);
    msg.possimerr = 0.3447997834389499;
    msg.converg = 0.675183652891187;
    msg.turbulence = 0.8300841834708821;
    msg.possimmon = 200U;
    msg.commmon = 214U;
    msg.convergmon = 146U;

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
    msg.setTimeStamp(0.5701871169464472);
    msg.setSource(58917U);
    msg.setSourceEntity(126U);
    msg.setDestination(7914U);
    msg.setDestinationEntity(38U);
    msg.possimerr = 0.4945006769633463;
    msg.converg = 0.8799944968823326;
    msg.turbulence = 0.35691319456792503;
    msg.possimmon = 7U;
    msg.commmon = 249U;
    msg.convergmon = 54U;

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
    msg.setTimeStamp(0.14682853130273332);
    msg.setSource(60668U);
    msg.setSourceEntity(89U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(62U);
    msg.possimerr = 0.6386664278318772;
    msg.converg = 0.8951541392168973;
    msg.turbulence = 0.10832158561110916;
    msg.possimmon = 55U;
    msg.commmon = 39U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.6539216196953244);
    msg.setSource(33463U);
    msg.setSourceEntity(196U);
    msg.setDestination(26145U);
    msg.setDestinationEntity(3U);
    msg.autonomy = 97U;
    msg.mode.assign("VFOOAHWCFEK");

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
    msg.setTimeStamp(0.0373394573407424);
    msg.setSource(40823U);
    msg.setSourceEntity(92U);
    msg.setDestination(48686U);
    msg.setDestinationEntity(4U);
    msg.autonomy = 210U;
    msg.mode.assign("KJDSOCOMDYRHFNXVNGXTVLMTKXBRYLMEBCCBTWVSGBQGUKATAJAZROVCPMGESATNGWOVAEPLCYLRYEUAENII");

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
    msg.setTimeStamp(0.9434672197202062);
    msg.setSource(7832U);
    msg.setSourceEntity(172U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(128U);
    msg.autonomy = 68U;
    msg.mode.assign("DCVTFBNQUDTQWUBVIRPNURVNIBIWYKSDEGLDPEQBTQIAKIDSRBPTQNVCZXGZAQPLGYPSLWOOMCAJAJAAFSDWEUZPYEXCTBZVFNEVSQOLPBLXFCCYMMZKLZRXHCLKHIYGMYY");

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
    msg.setTimeStamp(0.7046359549201334);
    msg.setSource(40563U);
    msg.setSourceEntity(41U);
    msg.setDestination(19194U);
    msg.setDestinationEntity(29U);
    msg.type = 162U;
    msg.op = 165U;
    msg.possimerr = 0.29475391684205476;
    msg.converg = 0.172335523037921;
    msg.turbulence = 0.021242693537099067;
    msg.possimmon = 213U;
    msg.commmon = 146U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.7789950798686764);
    msg.setSource(47510U);
    msg.setSourceEntity(72U);
    msg.setDestination(22128U);
    msg.setDestinationEntity(231U);
    msg.type = 110U;
    msg.op = 211U;
    msg.possimerr = 0.6648420618537846;
    msg.converg = 0.5734022974597937;
    msg.turbulence = 0.39042653288956375;
    msg.possimmon = 40U;
    msg.commmon = 83U;
    msg.convergmon = 221U;

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
    msg.setTimeStamp(0.33407675706873163);
    msg.setSource(42649U);
    msg.setSourceEntity(196U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(65U);
    msg.type = 3U;
    msg.op = 32U;
    msg.possimerr = 0.6140020600660959;
    msg.converg = 0.6459944294600343;
    msg.turbulence = 0.2976536139725272;
    msg.possimmon = 99U;
    msg.commmon = 153U;
    msg.convergmon = 183U;

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
    msg.setTimeStamp(0.6820689908964336);
    msg.setSource(43887U);
    msg.setSourceEntity(173U);
    msg.setDestination(64837U);
    msg.setDestinationEntity(121U);
    msg.op = 168U;
    msg.comm_interface = 63U;
    msg.period = 26384U;
    msg.sys_dst.assign("FZXPMZHNCOCFLOHDCGKZJPOGFSBLYDJFXFBFNHNHXLURLWANKAIBVZVVPVHHIPLDTQRAODYYNTPXNCUXSIOTBQQUJWHYKGZWLEDKHYWYOGMCKTAUYSNORFXUCCUEVKXOPRWCULURIMLHBJQJG");

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
    msg.setTimeStamp(0.9281877291969765);
    msg.setSource(54018U);
    msg.setSourceEntity(148U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(128U);
    msg.op = 212U;
    msg.comm_interface = 250U;
    msg.period = 6724U;
    msg.sys_dst.assign("AWUMNWZNEDHYKFHNIVLH");

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
    msg.setTimeStamp(0.3966967411346567);
    msg.setSource(24203U);
    msg.setSourceEntity(194U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(244U);
    msg.op = 146U;
    msg.comm_interface = 162U;
    msg.period = 49590U;
    msg.sys_dst.assign("QKSUJPQTNIYIFZJCFDZODTUGVVONRMZTEHVWFHNAYAOYNXCNMFVXIHDCVBFHKSZNLPQORCZAUIMPATFXJMPLICZZXRXAPBEJGELQZHBQLWWHOXNRKOYHAIENKVEYVNSMETQFTDLUJGJJGAVGDFWEJLBUAWSRDIXLCLMZXMOSCXBMSKWDUHYVPDUKWT");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.05538705039364633);
    msg.setSource(17792U);
    msg.setSourceEntity(32U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.7498044148145961);
    msg.setSource(11264U);
    msg.setSourceEntity(244U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.2653697141472856);
    msg.setSource(61133U);
    msg.setSourceEntity(199U);
    msg.setDestination(52941U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.23842676821931963);
    msg.setSource(46342U);
    msg.setSourceEntity(1U);
    msg.setDestination(64191U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("KNSHTCLFRNGWSDVVEEPZXSYRWQLBCHXHDCMMISVMBJHAEOEBRZGFAQPAYSILEWVYHMJYMWHVOAZAIKGPZKXDFBHJGBSHTJWUBCTONEJZCJXITJPJPFPENXAPYXXULSMXUECRLDGTNNWULQQAUGDBKCFTRIHTNIKKGNOLVANQSSVMMZRBBCHVDRZFQLYPKWBLXQA");
    msg.description.assign("NPZMNLGBSCXQKAMWYOUFDHNHWLDTFRYAS");
    msg.vnamespace.assign("MNQWCTOSDELUOEPNIGQZTZWLBRJAHMJFCRQFXDPKBPNHHFCSOWEWESFZCJIOTKRVJMNJPKUYECDNJAPWUYHUEYAVIHASLVNGXGZOKYREWTRNWGC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BOLWOHYWWGBIXSXFALSIVPUHEQLWSSCMOEWHOKEMIDMNPCJFVAFDCFXNETKIBTTLHXBQHQGOJMDFHXRVOBNAPRWSUVKQLNNDUZRMPTGJRZPAMYSBJGHLCDEICVEQPZRKKKZZENAIPOFHPEDOJZNAROYDTCGEDIUAVJBJX");
    tmp_msg_0.value.assign("GLCEKDQYXEWIUNDNSPXAHIJRS");
    tmp_msg_0.type = 195U;
    tmp_msg_0.access = 169U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AWSTQHCNKXUTKBFEVWRROOYDPXTRHGMKGKSQGDNRGHJBIYDZQBMFSNLVNMQVEDDMMUIJZJXBXDJTFPLQKVALUFQIDXGZHGNEPLGZZBVCLXIROYUITLPYSEPJUZUYDFTHNSILLWRBKNZTAIWSM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VRNNEAOJRGVXDDCTKDJYTACBNGYHPUZFHGWECWPCVTAMMUPIXCFZZEUOLLRIMIGSJXQRSDTLHUESULWSGEHNMQFEBOHCFN");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 4460U;
    tmp_tmp_msg_1_0.lat = 0.34977206562036567;
    tmp_tmp_msg_1_0.lon = 0.783910002147758;
    tmp_tmp_msg_1_0.z = 0.8293444345877785;
    tmp_tmp_msg_1_0.z_units = 144U;
    tmp_tmp_msg_1_0.duration = 14415U;
    tmp_tmp_msg_1_0.speed = 0.5542900092271172;
    tmp_tmp_msg_1_0.speed_units = 10U;
    tmp_tmp_msg_1_0.type = 119U;
    tmp_tmp_msg_1_0.radius = 0.9819610570889393;
    tmp_tmp_msg_1_0.length = 0.1858126555875741;
    tmp_tmp_msg_1_0.bearing = 0.41497775833393324;
    tmp_tmp_msg_1_0.direction = 248U;
    tmp_tmp_msg_1_0.custom.assign("ZRKSQUUJVZRLJLHUIXQAFJHUDFEZWCVFPBQMTXXLEPPGXMVPUAHNHRGNNFWYIVKPIBSBLYWEABJCTVKIFFCCLSNPJNGXJPWEZMCKTQHTOKSFKWIJISODABDYTMTEHJQGMOAGYCYGBXOQSUAWCVNFSMRALTHEAASMOWFCJKDNKVDQDWCKWPXTDQTRVXLGHRBOYAXQIKVGOJQUZGVUMMBRCNDEOEEMSIBW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FollowPath tmp_msg_2;
    tmp_msg_2.timeout = 50079U;
    tmp_msg_2.lat = 0.7935772525554587;
    tmp_msg_2.lon = 0.30641337234500465;
    tmp_msg_2.z = 0.40639264529810293;
    tmp_msg_2.z_units = 143U;
    tmp_msg_2.speed = 0.6518539018100967;
    tmp_msg_2.speed_units = 68U;
    tmp_msg_2.custom.assign("QUETOZCFWUXJAURESXWJIYDLTMZUADHNEPGHKUZITFXTOCPLKUHIZNJIBKIBHTKURKIKHXMBKCXXSGGSBEORWAVJPYGDARLOXZQD");
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
    msg.setTimeStamp(0.7278252821046456);
    msg.setSource(21493U);
    msg.setSourceEntity(203U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("HJUQLXXMHIIVSSAOPISBDAFQVIZMCLQVTKCBGIOCYFKGCENTYPKLPZGTFSYCDEHTPUSTPJTTFUMIJBDBJXLMMYKWBPRSSMXNQKQVJBSGYRXDOIRALPENAEOQJRHVMAZNGZBUUDJPXNDSBTOVUZLWPCFIJCAYGAZUNOJSPWZZROLWEGJQWW");
    msg.description.assign("AUEAGOCVOSAJVFIQEPKWFKVZSLZCINOLHBOHACKDMTWBMKTEXQHILQWVFNHQYKNDCPCYGSWSSNZFYEPICRPHFXIKDTPJWESUZOADVRQLDWSJVJRGCIBNOAGIAMTVKFPYHTIZUUJMUOGESFSNBMZGBZHRGAXLPXZLUFOYJIAJEOWLDMZYBLRJQXODFHMHSCGEDVQBLNRBWPLTBCVJTCM");
    msg.vnamespace.assign("VDGTJGGPWZNPWFFWLVKYULUMPHAOCPHIFVBWKFCGWYLHJRLMENZDDOEBSL");
    msg.start_man_id.assign("XYZWEWBEIBPMCAJAYTGDVKGVJGAJPIJXQIYVHYISTOWZPETTFGIHWHLZIFWXNGTUGSXTRNX");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("EZJQRFJVDPPQLHZYCELRWWJHEFTEEUUYNBCIIGIGSLYPWDRUGANSRKIVUDFPWSCVOSTJDWHSUVLIBIXEQNLPQOVBMTZSTLKZDODAHCGUZCULSKXZREZZFMVGNJMQHVKTPRSUHQVWWONYBBAXXHCMLKOMITWYUTOGFZPPXZQWOVTXNHFKOJFMGMNYXFYCEGOYWFRANYNSNTKCBMQECDMJTBQKAACIHXJARQGABPIEKDOBXHRIUGVYLAS");
    tmp_msg_0.dest_man.assign("GFABNMCKYOSBVVBKHYPQILCTTPWTLMGRSVMHDHVMMKSKRMRUJRGNCPYDH");
    tmp_msg_0.conditions.assign("VAAVRKDMZJDWONXIPZHMTSBJGIXUOBZCTIOTMHSSJF");
    IMC::GpsFixRtk tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 43558U;
    tmp_tmp_msg_0_0.type = 47U;
    tmp_tmp_msg_0_0.tow = 3246919856U;
    tmp_tmp_msg_0_0.base_lat = 0.8784830050605212;
    tmp_tmp_msg_0_0.base_lon = 0.9975998651422731;
    tmp_tmp_msg_0_0.base_height = 0.35323200220753215;
    tmp_tmp_msg_0_0.n = 0.4581963837524299;
    tmp_tmp_msg_0_0.e = 0.13773098390917515;
    tmp_tmp_msg_0_0.d = 0.9881893653505919;
    tmp_tmp_msg_0_0.v_n = 0.007937657686961752;
    tmp_tmp_msg_0_0.v_e = 0.4030821603213326;
    tmp_tmp_msg_0_0.v_d = 0.9672081236435607;
    tmp_tmp_msg_0_0.satellites = 11U;
    tmp_tmp_msg_0_0.iar_hyp = 12133U;
    tmp_tmp_msg_0_0.iar_ratio = 0.590940927164784;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::SystemGroup tmp_msg_1;
    tmp_msg_1.groupname.assign("UKRSMAVOUCUWIUWYCONXVRPYBYIEQXIDYO");
    tmp_msg_1.action = 32U;
    tmp_msg_1.grouplist.assign("ZGDAEOAONCWTGPNUBLWYQDUILEMPYHYWLZZRGRNZUDCCPYXMRWTDJMADWXVTIRPZRSQKKVIOOVLNPIQJSMOJCRDVZLILSFTHPYV");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Chlorophyll tmp_msg_2;
    tmp_msg_2.value = 0.3492491073448255;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4030742884422791);
    msg.setSource(46234U);
    msg.setSourceEntity(137U);
    msg.setDestination(43089U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("LHXGPLCAFZFZEJXAYKTSRJHQDVCJMAPYVUGSCGJH");
    msg.description.assign("TDITOEGOHKRZGZLJIHUVNVHWVQQKXKTPCKYFYDSDTPUCBZWHSJDSLJNMPVXJREMAPSLGHNWEICQFZZPBMADNYTF");
    msg.vnamespace.assign("ZUCNYAZNKKDHDRYZAIGQRSLBREWQKEEUIUARHSSXICWXPMXSGEBVWZXYSMTCWXNYNYMZPEECMCWGCUJQLMOKRJJMUAWXZJOGFVYSDQDUZMKLCKVAHFIKLVOEVDXMXFILHBQXQNTFNHGRAZGLWI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DNIRBDWMDUL");
    tmp_msg_0.value.assign("NGKVMGJXPRWDHYVTOUHCAQFQQJQHCOSCXAB");
    tmp_msg_0.type = 195U;
    tmp_msg_0.access = 225U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JLPBBYZEFZPJFLSOOIJXCNIOSINEJDWDDLAFKQSMVEUGYWHYARAOAWOTHKHZJDKUTRCMUNVDVIXODFCSHUQGKORSZKQLEGLMYRCYUUNTUSNW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZABMWENLDSHNFKPVFZYIYMRJQCZIPMNJEHUMTFAKGSUFKWKKTHAJAZOJUUYNPBQPQQDBVBYUIPOTFLCTBKOWCNJLOLKODIEGFNSPATHXZOEISKMWCXNLVI");
    tmp_msg_1.dest_man.assign("RAATPZQGWCVBNIVSPTPWVZAIFWXFEVGFOIXHKTBYMBHRLPPUSXCSTTLUZQSBJHGGWHBGZNRUDHTZZEQELKBBQNXNGQKWJFMRFCNSKXMDHFFH");
    tmp_msg_1.conditions.assign("KPXLZPVUKMOHJHRCKVPMUWENTDQROYBQUNTAIULEEOZUGGQDPNJBGNIOSYFVPC");
    msg.transitions.push_back(tmp_msg_1);
    IMC::MessagePart tmp_msg_2;
    tmp_msg_2.uid = 67U;
    tmp_msg_2.frag_number = 67U;
    tmp_msg_2.num_frags = 54U;
    const char tmp_tmp_msg_2_0[] = {62, -22, 1, 45, -63, 51, -3, -21, 44, -109, -69, 43, 12, 54, -52, -114, -12, -68, 67, -110, 42, 59, -77, 94, -106, -5, 71, -123, 118, -28, 117, -67, 99, 91, -64, 34, 89, 41, -31, -85, -115, -91, 8, -79, -60, 27, 54, -100, -64, 47, 65, 44, 89, 96, -59, -4, 84, 21, -78, -4, 65, 34, 2, -19, 70, 29, 58, -81, -78, -123, -66, -32, 63, -120, -88, 113, 10, -57, 21, -60, -76, -65, -125, -31, -42, -106, 119, 90, -36, -68, -64, -94, -18, 41, -93, 56, 23, -97, -108, -13, -110, -16, 36, -32, 1, 11, 77, -37, 61, 20, 116, -6, -66, 122, 68, 49, 24, -96, -93, -21, -45, 30, 25, -111, 80, -20, -34, -52, 5, -119, -27, 77, -50, 68, 76, -64, -50, 44, 77, -42, 120, 91, 47, -51, 122, -31, 69, -31, 65, -15, 121, 125, 79, 109, -98, -94, 111, 14, -40, 105, 32, -100, -54, 121, -125, -122, -32, 99, -54, -84, 10};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DevDataBinary tmp_msg_3;
    const char tmp_tmp_msg_3_0[] = {-116, -44, 117, -73, 108, -9, -24, 71, -48, -41, -4, -67, 47, -47, 35, 48, -48, 94, 30, -12, 74, -93, 116, -42, -42, -2, -127, -102, 61, 89, 81, 112, -56, -122, 123, 63, -30, 23, -56, -19, -13, -63, 89, -41, -50, 35, -127, -64, -78};
    tmp_msg_3.value.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.4509684400556693);
    msg.setSource(47445U);
    msg.setSourceEntity(222U);
    msg.setDestination(10990U);
    msg.setDestinationEntity(25U);
    msg.maneuver_id.assign("TPCYCXKTGNECUGSWOXUBHMJXYSWFKMMJPJFUI");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("NXQQFAQXZLAKFHEUSZPKGBIPGPPDHYDHVFOEIFYOUPIYUKGFOOACMJZKNLIVHSZNBBSWKRWALWWMVDKQBJLBQNGRNXEJIZUSLSVPTCYEFVGTFPTYSWMICDAKOXDJLFYCTLJQQDHLWOTDZHQCHNRBINXMVCDRAUOHZXTUBRRZWCIGVDN");
    tmp_msg_0.formation_name.assign("DHOUSCGLLKIXJODZYXJGUNIOKMBVDOMHEAHHFCTNZNHGATSDJJYKVWSPSNJWWUDFBBVGVGELQTTPHJWGVVEFMWNCAKBAWBXTLAMYUIQRSOORUKQHOUBTKPIYL");
    tmp_msg_0.plan_id.assign("QRPNLZKBXXLRG");
    tmp_msg_0.description.assign("XPVLBJVDOOIZKZGSHIVISEKZWRGHECUVRLTQUJLDVCRLSBWPUGFRICUTLSKXSBRCZKEYEPAXGOCUMHWEHLNLONLNMBTMXEZBOQPXFWWMTEINMWRYJ");
    tmp_msg_0.leader_speed = 0.08343678399605392;
    tmp_msg_0.leader_bank_lim = 0.2756077701096219;
    tmp_msg_0.pos_sim_err_lim = 0.30003093263668235;
    tmp_msg_0.pos_sim_err_wrn = 0.6990588028066095;
    tmp_msg_0.pos_sim_err_timeout = 21965U;
    tmp_msg_0.converg_max = 0.1281784526449078;
    tmp_msg_0.converg_timeout = 58237U;
    tmp_msg_0.comms_timeout = 14429U;
    tmp_msg_0.turb_lim = 0.32461671111799195;
    tmp_msg_0.custom.assign("PGRUHTIXLRUZGXMTGLOCFLNUPDYNDVBVLOZPLBCYSLBRCFSPAJANPGIZOZDKHIZOIFJSKWIOHNXWXWJQZFACBDWIBGUKNDAUSGMLXGS");
    msg.data.set(tmp_msg_0);
    IMC::Voltage tmp_msg_1;
    tmp_msg_1.value = 0.3061280259993774;
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
    msg.setTimeStamp(0.5796284234450109);
    msg.setSource(16471U);
    msg.setSourceEntity(106U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("VADOQELLNIYRKKHSLKRVLEUCBDHYPUJYOCYFHLOVIFFHNTONDWPMNRDZHDXVFGKXHRJNPGPGPLTCJXDZRSKCWEAAXUGZXSBBVNIVTLJWPKSGFZAJXCMAZDWNBCYZIUIUTSEDIELOQBWTPRJMUVULWGMEYFFXIRXCAJILTCSRGOAYABWTSSJIUZIOHTXKMGWHKPJYQTMMMETGHZYNENPYXKQFVRQMWAEQDWVUBBSCGQBVZCOQSZBHOD");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 10393U;
    tmp_msg_0.flags = 211U;
    tmp_msg_0.lat = 0.8789570420535368;
    tmp_msg_0.lon = 0.7845284381295283;
    tmp_msg_0.start_z = 0.950361472854466;
    tmp_msg_0.start_z_units = 176U;
    tmp_msg_0.end_z = 0.3500284613669168;
    tmp_msg_0.end_z_units = 221U;
    tmp_msg_0.radius = 0.46392633917479;
    tmp_msg_0.speed = 0.9471554097808687;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.custom.assign("FOQUBBIEGVGJQNBJFRSNVTOCXWZUVLTIYPQIFAEERCMCKDSMTGKRDJEQLWNMBUJAJURIKBRCHFONHMDDFXEXTVINASUZLENTTNJSCWEIPZJPZSDJYRASQDGYAKYRDUJWOTQVXI");
    msg.data.set(tmp_msg_0);
    IMC::FormationEvaluation tmp_msg_1;
    tmp_msg_1.type = 243U;
    tmp_msg_1.op = 113U;
    tmp_msg_1.err_mean = 0.3178861726781782;
    tmp_msg_1.dist_min_abs = 0.1048785874060878;
    tmp_msg_1.dist_min_mean = 0.7866047380170255;
    tmp_msg_1.roll_rate_mean = 0.337490804012306;
    tmp_msg_1.time = 0.9422876777745284;
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 219U;
    tmp_tmp_msg_1_0.lon_gain = 0.5776177488940412;
    tmp_tmp_msg_1_0.lat_gain = 0.2158218451997842;
    tmp_tmp_msg_1_0.bond_thick = 0.18372580914385617;
    tmp_tmp_msg_1_0.lead_gain = 0.9229744435616296;
    tmp_tmp_msg_1_0.deconfl_gain = 0.7010234986658335;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.9380331984858828;
    tmp_tmp_msg_1_0.safe_dist = 0.14028314371761286;
    tmp_tmp_msg_1_0.deconflict_offset = 0.4453921520503298;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.5984542632213335;
    tmp_tmp_msg_1_0.accel_lim_x = 0.8525725251783022;
    tmp_msg_1.controlparams.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.8375971760041283);
    msg.setSource(32540U);
    msg.setSourceEntity(202U);
    msg.setDestination(27827U);
    msg.setDestinationEntity(88U);
    msg.maneuver_id.assign("ASJMZCNHFTWQBBBICTPIEVOJZZRFGFIVHJCFTIHDHGBLXPGLFTJPYFWRAURYTBNJPDCHGURSWAELEOUROXBTYYNKWGMGMOVHQCOZCDMUM");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.1309401552594618;
    tmp_msg_0.lon = 0.6286967124147798;
    tmp_msg_0.z = 0.3775788303294272;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.19903607221610764;
    tmp_msg_0.speed_units = 202U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 30729U;
    tmp_tmp_msg_0_0.off_x = 0.6639679084745642;
    tmp_tmp_msg_0_0.off_y = 0.860736960451845;
    tmp_tmp_msg_0_0.off_z = 0.47442412234812226;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.23340277067587345;
    tmp_msg_0.custom.assign("SBNWECGGDOOUNUHKOSJVMTKYUJXZTXRQGOEIHLHLFVDYBFEPDSTZIKLKCTIRQVVSSIXJRNRGTBFAEYTLTIMHDZYCNWUWADZFPYGHVFEJHCAPXZGIYIBAATAUEPJPAPQQCOMXJWJEZYIVXVWVETUPLMFKEGQGHWKXRMKASDRLZHMRU");
    msg.data.set(tmp_msg_0);
    IMC::SimulatedState tmp_msg_1;
    tmp_msg_1.lat = 0.3296265659308195;
    tmp_msg_1.lon = 0.40741415296840156;
    tmp_msg_1.height = 0.5258462564226491;
    tmp_msg_1.x = 0.10639774689621118;
    tmp_msg_1.y = 0.9126039553318028;
    tmp_msg_1.z = 0.42313426419369427;
    tmp_msg_1.phi = 0.4987808396021235;
    tmp_msg_1.theta = 0.5801315312868227;
    tmp_msg_1.psi = 0.7421428580638182;
    tmp_msg_1.u = 0.628878178423136;
    tmp_msg_1.v = 0.6775002676829104;
    tmp_msg_1.w = 0.511656385008683;
    tmp_msg_1.p = 0.7734492581386925;
    tmp_msg_1.q = 0.10464816762172868;
    tmp_msg_1.r = 0.44557709657213285;
    tmp_msg_1.svx = 0.5564976837550766;
    tmp_msg_1.svy = 0.2196037738408223;
    tmp_msg_1.svz = 0.06892957947941003;
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
    msg.setTimeStamp(0.20008843638785123);
    msg.setSource(63473U);
    msg.setSourceEntity(151U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(248U);
    msg.source_man.assign("YGCWXPXSULQGLJM");
    msg.dest_man.assign("NLCENDOOFURXHZITTTLK");
    msg.conditions.assign("UVDOWDGETSHCSWLNYUBMDCYQOVFUMLPHLPRAXKNCHNJUEVMIHOADAGXOJXBFJPCYYOATSWVKUPYGRFSXSRFXNOINZWMHOJUMTVYONDRIGFALKMEIHGAVZPKJYASFMKOOEIBIHJXBPKEEHYSVLFULKFAPYTBBATZEQSNIQDBGXRZEVKRQPWNQITCGMZKDIMTHLQCTCGWZSXWLTHQN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NTNFZHERRZDVEFKLCHEBWZNNNWQFJKFJNBLVRKEMBXRLWSOHRXAYDMGHIGPQEPTFBVQUDASYCMWXFLHQPCTTCOYCKDCXURIMTPUPYFLQSCQUBJIXEKMKEDPNVGYJOSEBZCJPAPJSTNYVRLIALIZTYOZODMWYUKLJNAGWQJGXJHXGMPIAGESKXFDKHAEZWATOSFUBVBHIGLOFJDUQVBMIQIDVTVXKWARDAXLOUZIGVC");
    tmp_msg_0.predicate.assign("LFEVTWUYLSUHXOWQIRCEPPZYWMQMJBHSWTYFLKAKIOOJIPKCNXBZCMAIGGLGYAZZHYJGUOJLLZSTASRXUYSTJJKETPEBTABENATGVARR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LNTJGNKLTODGBXMTJJJL");
    tmp_tmp_msg_0_0.attr_type = 128U;
    tmp_tmp_msg_0_0.min.assign("YXGYHAOSDRDRLEYWPYKQONBWJXNBZKVVUGPTJLAULOZIEHBVSTVFKSOFMUSVDKWWJKHRIHQACPIMIJCETCJBCOQQPEXTYEGASXLRTYJZJZPRHOKROVSFNSVYKEFIGMZOXOXJADWXNABGEVRBXEHFDFUCBWWGKTVDMBSCZYQEIZCFQULLMDTDPFZJGPAIXOKNCMTRYDNYUB");
    tmp_tmp_msg_0_0.max.assign("NFXPXAKOJCGTQPVFVYYLMMRMLDROIGEKWTTJWAWTKQFEDBREGSXALHOTKARNQRYYOBTNATUSLRUSJGTKXDQSCKDZRIXGNJPCMLRHEFAFBWWUPFTMSKQOARMZLJGHJZXYDEQNAPXZUNZHBJHJODCLZKVEFWRUIPBPPSOWNWYGQQLLPOIFLQSYCGUUESWBBVDHIGIKFHPTEEDUXIHBYMIUEZXBMZHJOC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.30629921937604965);
    msg.setSource(63414U);
    msg.setSourceEntity(175U);
    msg.setDestination(20575U);
    msg.setDestinationEntity(160U);
    msg.source_man.assign("IQUUAIFMZNQYKGFRQDFRPSAZJQXDNPGCENTVXYYUETHRLWFOCLLXKOQOOUCCMOLYLXODINXUHMASBEOJNEKBDXPGVZKBUGBSHZNTJDWJUSPQSMQTVMRHMIWBWTGWLYK");
    msg.dest_man.assign("SXVHFXGYAHWYEMKFGRKYSERZPVQOPALSNIVYQCEATDZFVICMLDCHKMZUKTSKZJOVJWSESNPVODQFTUFIWTVHBUYUBQGGUGPRQWXFPNYJHECLBLZXIYZLTBNDZWNCLAANTNEQZQQMBMOIYKLUUJWGDFKAJUMCPNRKVEXUXJWHRENPTZEJBBXSBURDDPLOSJGHYKSHDQGOOTCXLIGIIWPWYXWLSMRDOEKCRDRJCXNPCHBAFRM");
    msg.conditions.assign("CHHGEUBHWPXPPJONAWICWLURAKTFEQRBYXAEH");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.4390215436335603;
    tmp_msg_0.phi = 0.48504132107612097;
    tmp_msg_0.theta = 0.9861571371218567;
    tmp_msg_0.psi = 0.7548199875921062;
    tmp_msg_0.psi_magnetic = 0.5514969837035661;
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
    msg.setTimeStamp(0.7573658582598839);
    msg.setSource(42276U);
    msg.setSourceEntity(94U);
    msg.setDestination(61305U);
    msg.setDestinationEntity(15U);
    msg.source_man.assign("JUKRSDCXLRAKGGUELLIQMUKZDSSMCHXFNIREAGNVIWQJMGJHOTMUSUSZMFDLVIGNNQYANAAEWYKPKJVGDGJJFFCTPYZOTSQCECRYQQGBIRDLTJDFCHXFWUEWVKWXBMEWAHLNBUDHCTOHDRTPQPYZIYBR");
    msg.dest_man.assign("KPRXBJDAWGFKWQMANJPGABKPXCGAXQFVTNTOHCRGIOPBGTYNFEDLHOVUXRMDJAV");
    msg.conditions.assign("JDQKOMNJAZRDYNGZPRUFFCKSRPTGVNTANDFPABAWGZSHHOXEVNHYDGKZIVMVLSOEWRIXJOIXBLJTSUGNMQEFPVKQGTTHPJZRPQZXKYWXCEEIWJCTOGEDACNKFYYLLKIMVXDMFSSYUNMWZPMQBJOORVMUTADEVZXUCHUFLBWOPSJRYHPKNYYCQXUEGBUHWBXKSESOWLATJLKRVNAJBCIMBSLTDBRLHWFDRICQUIAEBIQAXWYFCHQIMC");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QIEFAEQMHSGFRVGKFPPJPOYZXYBDXOOFZIWDGHVWNFMLLSZGHDJLCRPFTWTYKBNYTYWMIQOOHKPTQLKHQ");
    tmp_msg_0.lat = 0.3714321098716188;
    tmp_msg_0.lon = 0.6058431034997761;
    tmp_msg_0.depth = 0.599209269725621;
    tmp_msg_0.query_channel = 193U;
    tmp_msg_0.reply_channel = 39U;
    tmp_msg_0.transponder_delay = 17U;
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
    msg.setTimeStamp(0.0650050668918406);
    msg.setSource(2848U);
    msg.setSourceEntity(185U);
    msg.setDestination(13241U);
    msg.setDestinationEntity(162U);
    msg.command = 118U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PSQGJKKDGYCHAAHBHGBTXVNEKCAUGXOSDDGZKQKLZOSHTDHAYEVYBYTBAIZVMSJUOWQRBZSUPCQFVMUCUDFPLYM");
    tmp_msg_0.description.assign("CSFGYAESXWHVDSRCLMHDAYHMRVEJYSBVTOYSOCWGLOEPWTNLFZNDKUMEYNTQOLMKHOPCBVAYUBBQITKHFBATIMFPGQZZZXYEJVHABDWPQMZLUNUGVLRPXJLNAWGRBDXHEYTICEWGSQAV");
    tmp_msg_0.vnamespace.assign("FWBGWHPGJMDIZVLISTNOWBQUFFVAUAPJELDUIEYSXURIBYAJMHCBKKHCZTWZSRGSENBXAYZWUKCIZQPYFXRHXARGHLGFWGTTYFROOTZLVBAJBIEBNDGIWWGJKRHQMFHZDZMPNSJEBQLOKU");
    tmp_msg_0.start_man_id.assign("LCCMZUVUZDEGVBAOTRQOOCBOQDWVFKMMQZKSUOTXYSUTPPWMEKPSKEXJPAWSISEZRHGPNLJGNIJYYGPKGNQGWALMKMRQYEPHOWNBWJFSNLDNZJWUJLPZXFECAIHDCHIVHQIJCSENLRGVNRTMOTXDRFUERSFSACXMKMLOYTBKWLTKBUBFQJXSBFICXYHRFEXWCU");
    IMC::SmsState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 1388766320U;
    tmp_tmp_msg_0_0.state = 219U;
    tmp_tmp_msg_0_0.error.assign("VWYBDESVYPXCZMGPFPGCJJXVULPDHFNHJXRXSTCWPSLOAPFOBJVINOATUZWAMYBVAS");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.18938516554747997);
    msg.setSource(17478U);
    msg.setSourceEntity(73U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(175U);
    msg.command = 144U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TDKSJKACQUJTWDFEWCOMDMHRDTOKOGMYBSUNAOHXUHBLEBNJSXWAGZRMTSYPJNWVFGSFWLOLRXYJTKHGCZTDMAKXUQLZOIWF");
    tmp_msg_0.description.assign("YEAFFTJGWCVKOKBBADKUOWUOANVQNWKDGJVMKWRGZSLFXPUTIVMCZKBVACEOQQVAEGPWHUZTYESPLOCFNJDYHLJBTGGWPLDRNBLUDXXCBTXEKMWZDZTXXXBOXQRSICMQUZRBTYIBIHJARMFJRAFYQLPOIFADZIHWNULVNDG");
    tmp_msg_0.vnamespace.assign("IOCKVEXQTGPNTMFTNLCUADUXZRDDEWTQDGAMMEJZFLIYNJQTBXWRMCSEUAOQLNVBYULWMATXKNVHNWFPEBATIGSBFMQDEVYUFLJMAZBOHYZRZIAGFEEPZVRVZDSVLHROJTSQDIQLUXSCWQHIUOKJBCRWVJRHSCWARLKWNIPOCFCUMNKBZYAQPXUXDYJODHHPBJOFYKPFGVXNKMUIHAYGQPGYOCRIL");
    tmp_msg_0.start_man_id.assign("KLJGOGGLITBQTFZGMNQIMRFHKZWVSJJAICMPMZXICQAPVDDZVTFYLUZDHDQAKTOWOCDAETZKBTXZLAJJLSOHBWQEMCMYSEVINFUKXTSCCVGPACUPZSBULQPMQNGCBGFCUKGRWYKQVERKFX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("EXBHQBYWMRNCPISPSAATTYGZIHKJLQMMMEFHKHICSGRPRQXDYOPVPCTYNVNSZVIFXQFGWOJCWEOJLYPZ");
    tmp_tmp_msg_0_0.dest_man.assign("VQKLBBXINFAGYVIQQSQJGZIZMCHYGRMENTQDPJXMSUHYCXENSNJGGZPHIGGLALLNEIZRIFVHHGHRZRIMPXTYABGLBFCPDPDHXTMSAKPFJKCTKCJCMSICWEQYBSTFATOFKZEOHBFRUUSODTRPXJVAUDWRIFRDXEJWANUQOUVLOMLCXQNVWTHYALYVHARLWWFWBBFTMQWPOUZJMNZBKDVEDEKONSZEXUEKSSRPUUQXOCWOPVCKZOJDDKJLTB");
    tmp_tmp_msg_0_0.conditions.assign("PUZKZBCWRDODQESSQHXLDMAFDCDTFPXAJEZCPBXIHCATHUOZWEHEWZMPPCGLRKBOFFM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::HistoricTelemetry tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.altitude = 0.2954075806313715;
    tmp_tmp_msg_0_1.roll = 25678U;
    tmp_tmp_msg_0_1.pitch = 16202U;
    tmp_tmp_msg_0_1.yaw = 36932U;
    tmp_tmp_msg_0_1.speed = -32362;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.k = 0.418187630077562;
    tmp_tmp_msg_0_2.m = 0.3883056238602429;
    tmp_tmp_msg_0_2.n = 0.7332219535996346;
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
    msg.setTimeStamp(0.883468212417922);
    msg.setSource(29621U);
    msg.setSourceEntity(136U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(29U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IACTXKKHBFLQSUCAXJKRMZYVCMATEUVRETHDYQULFLJWKTUSRDOXMDQUPINCWRMOEGSEBHEQLWICEABCG");
    tmp_msg_0.description.assign("DZKPPAIPLHHLKOMRPEUOOYYVLAWWFIFSPDVZGUDSTFQENORENSMVYIZHFRUDAZSEHTWHJCFGZJIAPUJJMMCXKFNSNGDAMHKBLRPBINUJPWQMLCBKMCHJZRTRKDVCNYBYALGSUVJBYRVDBTGQNKUVKNXIHZWAXIDGOQWKZQTEIHOWTYTVUQIDRZCVPJZBXEVQNBYRABTFAGOCXXOEQLSCXERCFN");
    tmp_msg_0.vnamespace.assign("XHKEKZFSAPJVFSVNSGTFFFJYWPZLWPDIOSGHCTMQYVELAKMQYDDOY");
    tmp_msg_0.start_man_id.assign("JHGIPUVIISLALVSEUOGFBPREAUDTLYFAWFHLTHQNBHUBDNQVDYAOPNUGYWDWAGEXRMZXKVDSTQQBBUSFCVIMFCYHFAWYU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NUYJYNWSEGLUQKDCTXJZMZURYNBVKOEZCATZOQHRUBDALEBFVFKFLMVWRNNOILRRWJHPIDAGWQPGASFXSVQASKSLYXNSALJVIJZPCPEIPJDMCGSQYOCINVOIPDQSMQLTUZUTPBYTKECOOUFJCNGEXHQWOFOHBMJZWBWMGTKHLPTNJ");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 48972U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("JLMEQRNIDYVGYZQSZWUIWVVGKRBVCHDSHQMMSRBIYPPOVLZURLHELMHPAMIWYJIDTXOCBLCFIRPIDCDMBTSDQFZQACUXGVLTTLPDASGIKUXVVJAWTIUVTENAVOZJNCXYJZHCAU");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DACKFMZKMTUDOOHYBOECKYORYEEIXXFUIJMVYFZENYVRHIBBBZAJXMQQTBCXMZPDNZEHXNPRJDRGJZDSWJKQKBVRVYAPYGUNMSXMRIMICJLGSKETEOWOQYCZFSXNJCAYZVOFISFWVHCTSKMGCJJKWWWDUHMNYDSGIEZVSUBFGDNSLLVPXUAHKNWNIOVBTPQCTQEAAVQSUDFAGPALWARHFLILFPTRGBTPQNLJDELHPUXQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.3637733324578212;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.5195752769857672;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RXLCTOAREBANUNIUTSSDTETQBEMZCEUKUCPOWJUVZQDFDFLYISPYWQPGVBCRVTUBHWERROGMBHEDQJFZEJHPZDUUIXNMZZJMOXCMFYQFGSHTYCFVLYXHPIRBJOMLKIQYVHXAPMKZSVI");
    tmp_tmp_msg_0_1.dest_man.assign("DUUQFSLVVEAHCEQFALLZCQZDQNFYRPGUJTGZVORZIPEAPOYPYWYEDKHXMQYXOIVIGAFVSNCNRMEZSKDJTBQWKWFWOIPLBKMMMFBZCARLJEOWLCRNFWMJIBYJSRHVSDUNQZBPHHERLHDCCGXPLGZMIPFIJXTXAGBBEULWLURTANOUNYIAUDCXWSXKDJJKBVCSVBFOGRAEBFHTUGNKSXVHGMYHINWYHQRTTGDQXQTAXNMO");
    tmp_tmp_msg_0_1.conditions.assign("OUZGMXTUWBVKGYSDPVCJJASMYNAEXOUWABBHQFXJGULIMWEAICXCLRQVVKTFGSBWKMLTGESWVQEVEYLONFEFBDOYLRKRNAQQWZLAMQBDCDZDCHKZQVLZBCI");
    IMC::SetPWM tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 87U;
    tmp_tmp_tmp_msg_0_1_0.period = 3457747597U;
    tmp_tmp_tmp_msg_0_1_0.duty_cycle = 3644042670U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UsblAngles tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target = 12539U;
    tmp_tmp_msg_0_2.bearing = 0.6190033058915377;
    tmp_tmp_msg_0_2.elevation = 0.13782559957650364;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::NavigationUncertainty tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.x = 0.2488106354925267;
    tmp_tmp_msg_0_3.y = 0.7801842260776443;
    tmp_tmp_msg_0_3.z = 0.5966307466785744;
    tmp_tmp_msg_0_3.phi = 0.5100455812531558;
    tmp_tmp_msg_0_3.theta = 0.6779758597734353;
    tmp_tmp_msg_0_3.psi = 0.0429739239627418;
    tmp_tmp_msg_0_3.p = 0.39709444797853555;
    tmp_tmp_msg_0_3.q = 0.6481768217847379;
    tmp_tmp_msg_0_3.r = 0.3486447088557152;
    tmp_tmp_msg_0_3.u = 0.579800978625883;
    tmp_tmp_msg_0_3.v = 0.8755897025600414;
    tmp_tmp_msg_0_3.w = 0.5059139168684847;
    tmp_tmp_msg_0_3.bias_psi = 0.6438120917590726;
    tmp_tmp_msg_0_3.bias_r = 0.36960117207095367;
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
    msg.setTimeStamp(0.6604428812227991);
    msg.setSource(6413U);
    msg.setSourceEntity(28U);
    msg.setDestination(24564U);
    msg.setDestinationEntity(178U);
    msg.state = 64U;
    msg.plan_id.assign("AGILEGPFMWYGPLVBTBAWCADIMWXRWEIPJKDWMQZSZHMYBJGKPMCAAEUJCJFZYSDXFEBODIXRETTFHSAQSMBQEPJHUCAQZLALYZSQPSEVFOAVPOQPUIUKJXNKZLHCYGLNCGGDHDSBUOCXTZZOMVYKEMUOWGTFYCRRNVLKWNRUYTDOUQPSXVE");
    msg.comm_level = 97U;

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
    msg.setTimeStamp(0.3260275786985034);
    msg.setSource(19111U);
    msg.setSourceEntity(4U);
    msg.setDestination(277U);
    msg.setDestinationEntity(105U);
    msg.state = 137U;
    msg.plan_id.assign("CHWOGZKAHEMBUXMIYLWOLNZPAFXBEJMCHOFJSDQZZEBSWQUAAWEBLPBSZVJTGBVKEWCBJYDRZVHW");
    msg.comm_level = 57U;

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
    msg.setTimeStamp(0.18873608592993185);
    msg.setSource(39003U);
    msg.setSourceEntity(159U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(221U);
    msg.state = 97U;
    msg.plan_id.assign("LUKABYVXOHWITMPQUOSRIJMUQKFNWMGRBZRKNZMPMSTAKATJE");
    msg.comm_level = 223U;

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
    msg.setTimeStamp(0.33240151062548484);
    msg.setSource(12820U);
    msg.setSourceEntity(140U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(232U);
    msg.type = 135U;
    msg.op = 177U;
    msg.request_id = 41735U;
    msg.plan_id.assign("ERTUYWMNCJFAKAGGMRFAQLDLRSYEMSCZZWCEQUZIHDYZHRGBXWOOAXUPTQFEOMSCAIELIXSLTWJWJXGMKCQTEMHZBKMOAX");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("VVHXLLSWQCSPVQBCONSQQKKD");
    tmp_msg_0.action = 152U;
    tmp_msg_0.grouplist.assign("ABGZBGXTKXHTNUGFBQXBMSUMRQTGMUGVZVOPKKQCBTDNFCHZAYDPVDQVYELKDXGJYLIFLHUDGPRQRIEZYCSWSSGIMIQFTOKCJEHJZIJKVUXANLROBMJEUHECMYNJXAOLRJGZBLTOVEWOKPNFNWENLLFHBACUPIZVVJWBZUWSYQXEHADQHOWOAFRFUIFZDCRDWSULXOCWWSKSMTVHNHFZVC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YXLVCTHRITKVLYYLUFKZWJNKKZEDQPZBWTAEFBPSGZYUQBFJVQVXBTDUIQNNCYZJKOXVUHMQMNLGPMNGJQHEJTMBLEIIDXZSBGAWQIZDYNTWRNWFWOMOJEDMTKAWGMVRKAHLJIUCRRITJEHLNCOAYNYPSUOFZHG");

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
    msg.setTimeStamp(0.8776638645846346);
    msg.setSource(33495U);
    msg.setSourceEntity(180U);
    msg.setDestination(47857U);
    msg.setDestinationEntity(60U);
    msg.type = 231U;
    msg.op = 177U;
    msg.request_id = 7659U;
    msg.plan_id.assign("BJRPTSOZUXNWXENCPBSEVKLBJHEVVDNEFNPRWZHYVFHHOJAHSAHIDJQLOOEBKRMAQYQGYCDKOQKWWWEBSGPMDUUXKIRQBHTOHCPVMVCASRQIZZYUFVJZZQUWOWBTGCDZXZDCKNYYNPLMZBYXXVJOQT");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5408197726033174;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JOKHXCBMXCRBFDCJSDELSBKCXVAVIBJQIMOXTHGCUIYGISELIHDZUNBJDBDEXTYNWFDNQWPGFFKEAYUNILVIKUJEPVWULSMZOPJTGDMZWCSGCWMOBFDWPFLFMKYZYQPBYFVEEN");

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
    msg.setTimeStamp(0.9619985532151477);
    msg.setSource(38409U);
    msg.setSourceEntity(93U);
    msg.setDestination(31866U);
    msg.setDestinationEntity(232U);
    msg.type = 35U;
    msg.op = 114U;
    msg.request_id = 24604U;
    msg.plan_id.assign("BGQUBWHMZXPEUVLDHXSOSVWKTZLJBUTPENSYJCRMPPZAONMVFHAHOQOIBRWLPQDUVAEOKSFRZPITRYXFEMJRHWHKXBBYKFQCSQPFJFBIQDRJMEHPIFKYJWEZJYGCDLNADUAFYDRCOWOWYOOREUNQEL");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("RGZOEITMSHFVTGDFXKYVSFDVZGNQIBLQUHQFLBOJKVCECQMBGQIVERPXUGKSMPWYCVLNSRVDFUAMLFZTHHEUMWAEIZWHONTTVCZBGCXZZRJYMFBDMRHIYABIJUBXMAKPNPGAKAWNAPOUFJQJXAOFAWRJEKMGZQJEKPHPQTKWDRNCQHJLCOITRSLSEKQXOYPCWVZOAHKIOJTTMSULDDYCSXHXDXBNFNIL");
    tmp_msg_0.plan_size = 31127U;
    tmp_msg_0.change_time = 0.6811789170191607;
    tmp_msg_0.change_sid = 54273U;
    tmp_msg_0.change_sname.assign("JNLVPZUHXGGFOKUUVHOBANVXYHVXOWKMOANOALEDETECTCFBNHQYJGKSKMFCHFUBHFPZCAZT");
    const char tmp_tmp_msg_0_0[] = {-77, -99, -14, -94, 47, -27, 72, -59, 79, -58, 18, 26, -36, -94, 88, -28, 15, 57, 26, 31, -121, 5, 72, -106, -7, -121, -68, -24, 75, -121, -53, -21, -45, -36, 7, -17, -11, 95, 126, -93, -79, 115, -104, 48, -1, 102, -94, 67, 6, -48, -107, 91, 25, -10, -69, 68, -125, 76, 93, 9, -89, 44, 29, 112, 1, 56, -16, 51, -101, -117};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HIYUOCMNGBSFOPJUUBMFEOSTHEPSWMDGVJXPYWVLKUNRFUPXCFAWGMWNCTGPAZBTIKQZJVORRYANIGIWOSFINIKRDBCNEFBYSTAFXWBBZZJVNOJURVCEBSAXJAYEAMGCAYIDKODZSTHXHKVMBNELTIKREJKDKZAGDMWWEFHMXPYRGSTPZJGQXTVEQCHQHJVXXDLYQCHDURLLIQLZ");

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
    msg.setTimeStamp(0.3773486071272002);
    msg.setSource(37982U);
    msg.setSourceEntity(249U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(246U);
    msg.plan_count = 4061U;
    msg.plan_size = 2041723731U;
    msg.change_time = 0.9559176284640316;
    msg.change_sid = 6943U;
    msg.change_sname.assign("MFGOFFMXWSSEIBDGQLUHDMZKWJZROYSELEGNOFTLSDPCKBXUONVEYSYNKXZQZWHLKBONMTUWWECFCAOIKQEGGDJUVMDAIXLPSHBVIJFMYKORJB");
    const char tmp_msg_0[] = {95, 57, 14, -22, -12, -113, 89, -44, 31, -80, -62, 44, 125, -15, -120, -50, 44, -97, 63, 104, 73, -91, 111, 53, 85, 23, 39, -11, -5, 119, 60, -81, -83, 21, 94, -55, -20, 86, -121, 45, 29, 105, 70, 125, 45, 30, -2, 2, -10, -21, 125, -16, -74, -27, -114, -126, -7, -45, -111, -25, 21, 118, -26, -15, 69, -59, -78, -36, -62, -48, -44, -55, 73, -26, -93, 30, -10, 48, -119, -123, 37, -13, 82, -25, -88, -49, 40, 62, -16, -70, 24, -116, 113, 41, 24, 119, 25, 65, 3, -89, 126, 113, 66, -27, -35, -80, 106, -114, -4, -32, 85, -52, 38, -5, 56, 16, -83, -123, 43, -9, -93, 55, -127, -67, -110, -50, 105, 63, -64, 21, -120, -102, -109, 1, -109, 96, 65, 4, 55, -65, 40, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JSDFUEWXWHTAOTVDKPHPUKBGOBVPEXNPBXFRVAOXLLKIGYEMCAGSOPYJKMEYZITMHRMJICDSOOSEWYCSGYIEAQWBLHHLBCSLOWIRQMNFRQPWZQCHETDJYBGROUKAXUDFJWJNF");
    tmp_msg_1.plan_size = 29120U;
    tmp_msg_1.change_time = 0.8328740066676931;
    tmp_msg_1.change_sid = 21301U;
    tmp_msg_1.change_sname.assign("AHQLBFEWTRUQIGMFXMLHOVGEVWAKLEPZDCNNRXYYYKJKRGUSJAWSPLWBHOOTYDSZLYWCYKAAUBQTAEXSCLIBFWRQITUFLFUVHZSWIRTBPBUIEDKUAXLVEGJIHZ");
    const char tmp_tmp_msg_1_0[] = {-86, 82, -122, -61, -59, 114, 36, 47, 30, 121, 50, 111, -118, 94, 121, -16, 88, -13, 125, 44, -127, 105, -79, -56, 92, 52, 88, 104, -43, 24, 55, -38, -60, 125, 2, 37, -46, -89, 86, 110, 99, 69, 71, -118, -85, -2, -14, 118, 81, 49, 21, -8, 120, 37, 125, 3, -53, 11, -9, -9, -74, -115, 73, 124, 107, 75, -51, -114, -34, 91, -28, 3, -116, 25, 115, -90, -79, 16, 89, -8, 38, 110, 39, -36, 116, 118, 108, -123, -110, -91, 83, -108, 60, -119, 15, -71, -71, -6, -120, -118, -52, 35, 16, 101, -4, 41, 11, -97, 63, 68, -54, 119, 82, -100, -64, 99, 63, 52, 41, 86, -103, -47, -44, -58, 109, -89, 60, 123, 18, -41, 77, -35, 39, -70, 59, 116, 22, 4, -24, 96, 112};
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
    msg.setTimeStamp(0.3751475745957731);
    msg.setSource(47214U);
    msg.setSourceEntity(211U);
    msg.setDestination(31741U);
    msg.setDestinationEntity(251U);
    msg.plan_count = 46089U;
    msg.plan_size = 374113855U;
    msg.change_time = 0.38462482747764004;
    msg.change_sid = 51236U;
    msg.change_sname.assign("MUETTFMKCWOVGZHOQASNPJNZZJPQPSKWBWPIYYSALNFYOJXUHLTBRUYFEXGYLSMVBQIEMTUBKVDEUBARFCRRBPWCRZLTQNNAFBQFZPEMKLQNUIYGKVROCVBSQ");
    const char tmp_msg_0[] = {93, -26, -42, -66, -9, -81, 116, -28, -117, -71, -93, -115, 95, -26, 25, 21, -121, 3, 88, -30, -84, -64, 116, -67, -78, 115, 79, -32, 126, -19, -42, -79, 42, 1, 0, -45, 31, 48, -101, -32, 32, -89, 5, 84, -33, 30, 81, 120, -109, 52, -101, -18, 67, -125, -70, 42, 86, -49, 98, -62, 100, 2, 91, -80, 5, -27, 4, -85, 51, -17, -4, 25, -118, 21, -92, -1, 4, -111, -26, -2, -51, -59, 5, -15, -15, -94, 86, 45, 0, 8, -39, -77, 70, 69, -51, 1, 119, -105, 74, 102, -56, 77, 83, 19, 21, -103, -83, -67, 100, -94, -21, 12, 22, -61, -35, -100, -90, 6, -74, -2, 123, -37, 97, 23, -18, -108, 23, 50, -96, 109, 5, 39, 40, 58, -35, -24, 26, 7, -50, -29, 1, 0, -59, -125, -92, -72, 78, -43, -70, 84, -9, -71, 76, -6, -119, -103, 110, -89, 22, 16, 107, 99, 32, -96, 18, 22, 79, -19, -80, -112, 75, 59, 63, -12, -49, 73, 27, -46, -3, -24, 10, -77, 122, -124, -115, 9, -78, -104, -55, 93, -96, 78, 65, -37, -42, 75, 48, 40, -111, -118, -84, 6, -41, 72, 71, -126, -24, -53, -68, -14, 9, 116, -60, 125, -33, -103, 30, 26, 10, 123, 95, -90, 39, -86, -4, 56, 97, 14, -106, 100, 78, 78, 36, 49, -73, 32, -113, 113, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DPNHYJWIMVLTBWCKOCACTUEZJLMRPOZXZFSIFGGWSE");
    tmp_msg_1.plan_size = 4228U;
    tmp_msg_1.change_time = 0.5787571360693387;
    tmp_msg_1.change_sid = 53202U;
    tmp_msg_1.change_sname.assign("FTSZMACUPBMIBZVSYSXTPAQRVMYLWDDRDITTVEGQAGXTXEMLNPJIHWDMMMMFQEZIFRPWURELOKBRUQJSAWWVMKOKWTYJUOPSEBPSXIJBSKZCQAFNOZGRHGIIUTAQOLADWNYRUKLZHODJPCXCSCGOFVYUUXNXQVDEHCOBJBJJKLHTDGZABHEHPZHVFAFZK");
    const char tmp_tmp_msg_1_0[] = {-66, -79, -34, -57, -66, -49, -91, -111, -40, -88, 44, -14, 79, -79, -108, 44, -96, -23, 65, -43, -91, -96, -66, -39, -108, -90, 113, -96, -20, 8, 51, 104, -44, -9, -102, 119, -82, 41, -67, -106, -83, -90, 6, -82, -37, -96, -63, 8, -53, 97, -50, -68, 47, 47, 55, 17, 93, 92, 42, -80, 111, 25, 55, -116, -124, -54, 51, -102, 86, -45, -87, 34, -60, -28, 13, 79, 47, -50, 76, 119, 30, -73, 60, -42, 124, 116};
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
    msg.setTimeStamp(0.0623174913283745);
    msg.setSource(47429U);
    msg.setSourceEntity(95U);
    msg.setDestination(55477U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 12412U;
    msg.plan_size = 837597053U;
    msg.change_time = 0.9357134499615961;
    msg.change_sid = 59644U;
    msg.change_sname.assign("LUBYRAIPDTHITHTYQKVBJFVTDYUMJNFAXDDGWBCGWKUDVZBHUEZCALRFSMLWTIPZSEKVCSMNLNPAVBEHFAPSIVAQWWFDNCOZEAFJGRQOOZDHAGZMLICGZIMNRBTQDMWMYOJXUELMZNGJQKFHEQYJPXMIJNXSRRDCXVXGZOPOSWKOVHOPB");
    const char tmp_msg_0[] = {95, -16, 39, 33, 52, 48, -17, 105, -71, 96, 87, -101, 38, -116, 110, 14, 9, -57, 82, 38, 2, 42, -40, 29, -122, -92, 27, -15, 102, -125, -42, 107, -75, -91, 91, -103, 48, 56, 89, -60, 7, 75, -118, 46, 1, 17, -14, 43, -77, -3, -76, 96, -67, -58, -30, 98, -67, 87, 11, -96, 38, -60, 36, -53, 122, 31, -123, 21, -118, 59, -43, -109, 62, -55, 89, 105, -99, 13, 13, 4, 115, 71, -67, 88, -19, 43, -44, -66, -105, -5, 34, -28, 83, -33, 43, -75, -112, 33, -39, -33, 52, -46, 68, 52, 11, -124, -103, -25, 73, 117, -33, -33, -117, 57, -1, 32, 38, -20, -38, -116, -31, 18, 29, 68, -8, -78, -71, 74, 3, 83, 51, 12, 109, -64, 110, -29, -42, -53, -21, -110, 23, -80, 27, 94, 84, -104, 1, -79, 110, -116, 58, 16, 59, -38, -54, -83, -42, 99, 39, -76, 87, -62, -10, 35, 21, -65, -111, 58, -63};
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
    msg.setTimeStamp(0.13739059238559848);
    msg.setSource(34608U);
    msg.setSourceEntity(161U);
    msg.setDestination(23867U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("AQOOXRDJVGUWILPXGQEMNAYTBKNGZJUHWUSATYVMQRPQVALYBLZYKPXIJQGJMCWGLFDOQ");
    msg.plan_size = 13749U;
    msg.change_time = 0.4047901009570819;
    msg.change_sid = 36044U;
    msg.change_sname.assign("NPVQFHTSTJTKONWHWJTHZRQUGLPAXMNKVJCQCEHFNOJSTLEKUFINGHOUSCWJMFYMGSIFFDMGGLQPUJYVVSCRKCFOATBPZCRHU");
    const char tmp_msg_0[] = {-68, -27, 94, 118, 79, -1, 69, -29, -96, -46, -82, -123, 16, -34, -16, -66, 40, 49, -121, -73, -76, -101, 8, 118, 41, 21, -34, -91, 70, -35, 92, -76, 26, 108, -46, -116, 27, -103, 123, 16, 53, -34, -12, 1, -51, 108, -63, 84, 36, 85, 12, -25, -27, -88, -76, -86, 2, -49, -36, 4, -127, -119, 48, 65, -51, -120, 88, -77, 63, -90, 5, 92, -60, -20, -96, -116, 113, 126, 118, 64, -65, -58, -77, 14, 95, 70, -34, -64, -76, -44, -102, -34, -99, -96, 0, 116, -22, -123, 28, 58, -54, 82, -107, 36, 91, 66, 9, -28, -97, 37, 49, 70, -31, 32, -39, -29, 30, -39, 84, -77, 48, 74, 89, -25, 18, -8, -41, 28, 99, 94, 81, -93, 108, -42};
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
    msg.setTimeStamp(0.7877631500229515);
    msg.setSource(22364U);
    msg.setSourceEntity(167U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("UVZIGLCWSAUTWBGXDIRRJSCZPZGIJVBXEEKFTHEUWMEUXJXQLWEDKIHQILMXGABLJJSPKCOAEYNCNFQOAGPVDSJAAIPLAWPHYRWFBROUYMHPJXJRHVWDDCMNUZJPIHNFYVKLHNONQUFKSRDGNWXFOMZYCDBMPNTYGOBHKFTTPZXWQOVZYBLPNELVDZLQRBRDHQBFBOGIGXDYKWIXTTVQZFHKUEGVNVIAUCYFQRE");
    msg.plan_size = 53064U;
    msg.change_time = 0.32964268290078047;
    msg.change_sid = 3745U;
    msg.change_sname.assign("INVZWXJOYRFYUHPUDNLDBE");
    const char tmp_msg_0[] = {54, -40, -67, -81, -120, 116, 16, 18, 93, -110, -101, -35, 53, 57, 66, -49, -86, -116, 105, -24, -80, -58, 101, 73, 66, -110, 94, 105, -6, 93, 72, -57, 57, -93, -95, -114, -8, 5, 37, 98, -102, 44, 18, -55, -9, 74, 52, 58, -117, 119, 30, 1, -96, -89, -68, -71, 94, -77, -31, -37, -78, -126, 81, -65, -16, -44, 57, 43, 65, 105, 32, -2, -128, -81, 107, 121, 23, -19, -89, 63, 0, 53, -105, -84, 105, -99, 19, 48, -65, 29, 107, -97, -45, -112, 41, -97, 2, -4, -66, 30, -67, 17, 100};
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
    msg.setTimeStamp(0.32963731745959635);
    msg.setSource(23510U);
    msg.setSourceEntity(180U);
    msg.setDestination(30807U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("GGPAQCLSCJ");
    msg.plan_size = 40493U;
    msg.change_time = 0.6277304047807337;
    msg.change_sid = 61725U;
    msg.change_sname.assign("SZQSVKAZRFCUHSAWOIDMRJFRNGHPITHEBWIYQPBEEFJNBWNYTDQWXVCXLRAAGFSGLTDMKHOYURBTXNPSQXCCEKWJP");
    const char tmp_msg_0[] = {-94, 38, 4, 12, 83, 81, 124, -37, 98, -43, -111, -18, 74, 7, -72, -77, 68, -18, -97, -113, 6, -107, 30, 114, 99, -113, 60, 113, 49, -59, -88, 60, 81, 93, 72, -121, 86, -98, -109, -22, 105, 92, -4, -123, -94, 55, 16, 31, 90, -40, -57, -117, -71, 53, 72, -75, -68, -119, 19, -84, -97, -101, 26, 103, -12, -85, -106, -2, -39, 29, 102};
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
    msg.setTimeStamp(0.06644336388699534);
    msg.setSource(2864U);
    msg.setSourceEntity(195U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(109U);
    msg.type = 185U;
    msg.op = 111U;
    msg.request_id = 49766U;
    msg.plan_id.assign("PWJDTIZSZOGAJUTYISEVNLLFMDKBCKZDPVDMKXKIEHFIFXEVMQPUJFHQABYOIBTQIRGXEAARNPOTJRUMKTQPYUMGMOBDBPWTKXHLCXCZZMSSFXNQVQQFDYELMHAGGPOCADIITLLZJSVSTPJDMRSJVSUWPURZLEGEYKDICGXNXQXLQHCHAWCNCWR");
    msg.flags = 2926U;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {96, -17, -80, 68, 15, -46, 57, 70, -88, -81, -80, 116, -87, 111, -29, -93, -70, 108, -83, -1, -36, -30, 77, 87, -92, -55, -34, -101, 21, 55, 106, 49, 113, 69, 64, -31, -72, -60, -103, 99, -67, 73, 78, -5, 93, 104, 87, 14, -38, 4, -92, 8, 1, 115, 4, 115, -48};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JSKGEQLAMSUFSTTSONBHBYYQFVRKWWCWGMYJUVTMHTKGZAYHTNOO");

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
    msg.setTimeStamp(0.7016764838056596);
    msg.setSource(39279U);
    msg.setSourceEntity(162U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(71U);
    msg.type = 187U;
    msg.op = 125U;
    msg.request_id = 21344U;
    msg.plan_id.assign("KIFZXZTBLCVRJLRSGJKHNFRCTHNZTWQXNANRIJWSCOIWPHCKW");
    msg.flags = 58409U;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 86U;
    tmp_msg_0.entities.assign("IHOLQHWMALNNLITAWQTMGSKVQNFBFYMEHCUOUEEQELVOYSADWUBMDSOOZWXUEWALWKPHFNCYKLHWUUZUYMIIJGHCIIJQPHKFXZZTJSZGTNGUEDFUHIDSCMSRWCJRC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NIGCHERAJVPKVIXKBNDNMTDIHQWWPBLGFQQHELAZZLVZPJUMTF");

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
    msg.setTimeStamp(0.5802202908664471);
    msg.setSource(37017U);
    msg.setSourceEntity(135U);
    msg.setDestination(30823U);
    msg.setDestinationEntity(91U);
    msg.type = 96U;
    msg.op = 126U;
    msg.request_id = 42520U;
    msg.plan_id.assign("PUSTURITFZKVSPHZKJFKGLCRTZANTNESYOYDYKOYKZSUUIXBIRGRRCKEIHQHMBVDEXBTDXFVOZGDTRVSDMVACTMQCDHQLQNBHQTOPFAWEMZQEFMLHGZXCHNUEROVJCFOWASGRJJWXHSOLFZVWAPULGNGHEZVUXYTIUXLSSVRIFBPYDAALIYKPAPNXWKGJMQTXECCDQNIJPJLBCBQMGEJCWEOYNRNINMLGUKDFOWJMJSB");
    msg.flags = 21666U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.24971862679402146;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZYUFXABYBRZWXHPXBBCHBGPZVKPRJIHPMDPKWKKRAHUHFOQNSSWRQRAZATMZLLHEGUGAVXYVSSZNLCKCULBMWLQDVMTFAGSOTJUSUSXJTNTMGEYDOLEFJMWEFCXIUENPJTSHIAODP");

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
    msg.setTimeStamp(0.9738692385405613);
    msg.setSource(22540U);
    msg.setSourceEntity(158U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(76U);
    msg.state = 181U;
    msg.plan_id.assign("DMJDIVGSOJXPKYXTXBNOGOGHKDCUTXXAEOVKTFUVNDPWYIFLELAOZCKHDZ");
    msg.plan_eta = 1137131973;
    msg.plan_progress = 0.9426973146717551;
    msg.man_id.assign("NKPAAKXGJVUHFJLGWLGBDIFSHEODAZLNZLDDQWYUTQCCPXJHYPGETKWELPWLMHDSWMQFMGIEYEGCGESYOVZJWWQNIHPVIUAVSEOVXHCKTICNFMWGBUXYAAGARMRTUJZXUAJPCNFRWRXQREFLPUODIOLHLJDAQIVQHTVEBCGNIMNFVJPAKSMBYONEMMRKPKXKPBSOBHXZSYSRIJLQFBKXZCHYCOTOD");
    msg.man_type = 22103U;
    msg.man_eta = 1016224460;
    msg.last_outcome = 115U;

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
    msg.setTimeStamp(0.24613510712022824);
    msg.setSource(32094U);
    msg.setSourceEntity(71U);
    msg.setDestination(61650U);
    msg.setDestinationEntity(126U);
    msg.state = 98U;
    msg.plan_id.assign("OTOYKVWMHMZNWGKTJXLIEPGDDNLZDSBKYMVGEMWZKODMYUWFBJBUYLSXHAKPDDRTRRXVEFVWMDNRHXEFULMQQEJKT");
    msg.plan_eta = -1192782623;
    msg.plan_progress = 0.36458850666980447;
    msg.man_id.assign("SLJSCTXUWUVJVAXHAKHUMSWJLOZEVGQBLKARJYRHZOLAAUTXEAMVNWGBPCPDEJUCMVIMFQFDVVGBHIOSPAEJUBINUPTZKXHTRODPCNB");
    msg.man_type = 24027U;
    msg.man_eta = 1638108510;
    msg.last_outcome = 11U;

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
    msg.setTimeStamp(0.9059984981838517);
    msg.setSource(20121U);
    msg.setSourceEntity(24U);
    msg.setDestination(18200U);
    msg.setDestinationEntity(67U);
    msg.state = 216U;
    msg.plan_id.assign("PMIZIKJYWELOFJXCVIOVUJPUMMZDVHNULFQQZQLXKHFIWSQDTPCOASRUSCHHNYBTLDTQVCESYIFDTFSJURPOPNHJIYEPRADZEMIODFGFZLWRDNOBGIXKBT");
    msg.plan_eta = 1048994486;
    msg.plan_progress = 0.8145010217722592;
    msg.man_id.assign("YVKNCFSLUSMEWNBGLEDUKMJCMXPOJYVPKKNRFYFMDGSLWNDVAWLPQMTBLZQYWYHQAZUZORGIRHCZSJWQOXKRPHUEDDTIQWIGXVKICBZUMCGABEFJBFJYGEPFAUTQTIAAWLVXKPCDWGDZPIAVQSBBH");
    msg.man_type = 44705U;
    msg.man_eta = 686665526;
    msg.last_outcome = 214U;

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
    msg.setTimeStamp(0.31285868359760016);
    msg.setSource(14891U);
    msg.setSourceEntity(48U);
    msg.setDestination(29241U);
    msg.setDestinationEntity(230U);
    msg.name.assign("BSYSJGCDEMAOLUWMBOHKKJQYOVGVMLWIBPWCBFZLBZOAUOXKIWLQPKPSONWRCVJRNYVJJRZCYTCEDMFXWQDWDTRFNPAVWZHHQVLMNKMQLJOKNZXSZPEXTCIDRLBBOGEQYSQYSSEJHNXDGKRRSXDFGTTQBTJCGEIJUTARIGEILCTBP");
    msg.value.assign("ZENDOUVUYTDCYK");
    msg.type = 117U;
    msg.access = 143U;

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
    msg.setTimeStamp(0.32055915034902216);
    msg.setSource(41587U);
    msg.setSourceEntity(69U);
    msg.setDestination(39235U);
    msg.setDestinationEntity(178U);
    msg.name.assign("OSGBYNRYSPZEWBKDQNRSJSIQWUWTBYZVGYIMPRUDMFLYDVPBJUICISCOPKYVAVIMTGOFAAREQFVHIWLEEDXSLMTHRAUOJRHJIQDJWAMYQ");
    msg.value.assign("FHPJUNAECGTXYZMSSTRNDZKCIEFMVMFPWEEAAPZIVKQWHOVMRDYLCKHTZUWJLDGSSFIGBRKVJPZCCONFDBRUTAPUJNUJQZTDOYLONQMWXSIIKANLIVQYEHXZCTLBFPKQBXEYRHYXRWPGBHZYLLNIMYGBWKSZDUQOJECMRMGXIKTVIXXJMOYLDVPGU");
    msg.type = 181U;
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
    msg.setTimeStamp(0.5163231839199687);
    msg.setSource(54514U);
    msg.setSourceEntity(144U);
    msg.setDestination(51705U);
    msg.setDestinationEntity(30U);
    msg.name.assign("HPWSEKWMJGNBCJIVBLCKRWYPCTMRQSZIQGSPMCVXATKYAKLWPQATYETAPFFZIXMWGOSEDUOKFOTWKRKYZSJHDNCQSELGFNEUXHXFMLXMU");
    msg.value.assign("HCPZFSQYYGQBWHMOOTVAGPBVGUVMOIBEYGKQHZCUWAWKJEDBXRETPEMTUFPUZEOATCVHBLVNWXJPIXRQTLHNYBDZQGILFCRDJNSUUBRXSIMCQJNKSYQRUQYNJKNKFBGIWGIYEDAZSXFVWDRIPNFQADPXORDMRKDAMTCZYTTWIIEUVCAWIDCHJMALJVNLRYLOPCSZWXXCZXGVJKOMGLAXUJKNDKFBUHSMSFFSL");
    msg.type = 90U;
    msg.access = 172U;

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
    msg.setTimeStamp(0.9691913914215605);
    msg.setSource(52110U);
    msg.setSourceEntity(28U);
    msg.setDestination(1677U);
    msg.setDestinationEntity(132U);
    msg.cmd = 230U;
    msg.op = 53U;
    msg.plan_id.assign("QKEHCGDGFILNOQBJVYTHFRNMUDOXZMFCZKWVXMEURLIYRYJAVLAXEMLMRZOKWWFEACIARBZIIUJMJTPTAOSOWHCLISWUDPMGJQEOANVHJCCZHPNTVYGHDODVBHYQTLEAOBBCAPBZNKALUWPZXWCEPRFQJNRSWGBVZSZERBITMNUUPGFEGFGNYMUDELKDXTQXXXVFKXLHDUWPISKTZGCYCOROMTXQASFKLWUS");
    msg.params.assign("AQEBSJYMRRKIFMRGZLBXSFLLQWXBCAMFNXSRMTUDQBIVOJIOGLVHNCCDCTJUUSKJWYVUTUIYZZXZCBVINOXTALFIPYIHUHMAPUYGJAWZRZANCZDW");

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
    msg.setTimeStamp(0.5476790944303552);
    msg.setSource(19266U);
    msg.setSourceEntity(124U);
    msg.setDestination(61946U);
    msg.setDestinationEntity(25U);
    msg.cmd = 232U;
    msg.op = 107U;
    msg.plan_id.assign("VDNPDQIOJJFMRNVXJ");
    msg.params.assign("AODLZXKPKHGJQEPWAGJIFTYIOEFROWIWHUNZCURAAJLWDWZKBEIGNGDPLSBJUQ");

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
    msg.setTimeStamp(0.3704969596117381);
    msg.setSource(57245U);
    msg.setSourceEntity(78U);
    msg.setDestination(27860U);
    msg.setDestinationEntity(201U);
    msg.cmd = 62U;
    msg.op = 240U;
    msg.plan_id.assign("FQPCOJTOQYRNEM");
    msg.params.assign("VDFSLBNGNSHCHHSUWFNEFLHZETJYYXQBSYXZWIROOBP");

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
    msg.setTimeStamp(0.13322619576848627);
    msg.setSource(5428U);
    msg.setSourceEntity(49U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("UYRHIIIDIFPZDKWBKYHERNLSKYJHESUAOLQXTCINSWBSZCWUOJPYCGLLZXRSNXHGPMWBNFYSAONAGMAJVKBFKTMYEBYAPOUOKEFNSQUUZPPCOBBWMQMBHAOXXMVDHPBWIRWGDKLHTVJTDGFCDSMFFAJZSVVMGTCTZAIJLUGTNVYMXXHASITWJHRNGPJJPEEKVQIPHCMUGTLLDDTFXOAUWWOQYBKRQQZNXOVCRFVQZELQRKUZCEEDRID");
    msg.op = 39U;
    msg.lat = 0.9915958510890867;
    msg.lon = 0.42850879528731367;
    msg.height = 0.17214842183714751;
    msg.x = 0.46770804086099493;
    msg.y = 0.17068431270064344;
    msg.z = 0.21777723401497728;
    msg.phi = 0.15450917469679526;
    msg.theta = 0.31132077571014605;
    msg.psi = 0.9035752597737792;
    msg.vx = 0.26269360409007203;
    msg.vy = 0.7737979693912377;
    msg.vz = 0.5337616454685451;
    msg.p = 0.9302408918228359;
    msg.q = 0.44596402725324447;
    msg.r = 0.06810033251822001;
    msg.svx = 0.176521564499443;
    msg.svy = 0.6126579634075379;
    msg.svz = 0.5618401063092994;

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
    msg.setTimeStamp(0.6826213757415213);
    msg.setSource(21388U);
    msg.setSourceEntity(63U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("AEFXIICMNICBVKQZEPALYIAOBVLXCVKSWAQXGYDCJUMXDCFMPXTBJGZZOMQRYXCNZPRZAJJHJRHTYQJPMBEMWZZQKOGDNXEFGRQMBKYHOSKYHSGSUOCWYMPSAKFJTBNDSVMWRLTIVQFGBHFDIRFEWGOJUDPYEARTUJVWDOUGKDYKOVITVEXKDPKLUEURCBNEWFHQXHLAUSBQGLLOTFNJY");
    msg.op = 79U;
    msg.lat = 0.29192120193753934;
    msg.lon = 0.5183128590713223;
    msg.height = 0.32831977856029626;
    msg.x = 0.9420060604142511;
    msg.y = 0.4641839180784364;
    msg.z = 0.5471682796990078;
    msg.phi = 0.6813436271149806;
    msg.theta = 0.2673828883814042;
    msg.psi = 0.7120465787404118;
    msg.vx = 0.8723720684412644;
    msg.vy = 0.7069938902227992;
    msg.vz = 0.45667593314007604;
    msg.p = 0.15541980983600767;
    msg.q = 0.5299491522319527;
    msg.r = 0.696820732042693;
    msg.svx = 0.7838043254419854;
    msg.svy = 0.3207830008412863;
    msg.svz = 0.8393967793055775;

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
    msg.setTimeStamp(0.7948280100868133);
    msg.setSource(9320U);
    msg.setSourceEntity(5U);
    msg.setDestination(1341U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("IJPHKSXLNTDARSRXUTSSYBHDGUYOWQQLVUJYMHXNNWTAXJCCXWBXTNVCGAVTLZMBKFLDEEOGZKXRLMLDYIUVKJCJKMZCCRXKPYOMAUMQRZJALQVENINJGFZWOEDWFWLPUAOQHBDTNMVZIBHGSUKOSPPEQPFGWINERVYCBHYLVN");
    msg.op = 231U;
    msg.lat = 0.5604876648666752;
    msg.lon = 0.008323635830662424;
    msg.height = 0.8993347671251337;
    msg.x = 0.0006490620279913095;
    msg.y = 0.9543716711673201;
    msg.z = 0.362465381551732;
    msg.phi = 0.9322871810611161;
    msg.theta = 0.9693390417657427;
    msg.psi = 0.2183151886850505;
    msg.vx = 0.14840918791716717;
    msg.vy = 0.3077471234957817;
    msg.vz = 0.6591490292587323;
    msg.p = 0.4180659994543071;
    msg.q = 0.5121083214394324;
    msg.r = 0.9217419776209334;
    msg.svx = 0.5035741597243485;
    msg.svy = 0.536299803598577;
    msg.svz = 0.9538721313812679;

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
    msg.setTimeStamp(0.2291732625577554);
    msg.setSource(27066U);
    msg.setSourceEntity(132U);
    msg.setDestination(10627U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("TQFEETBKHUGLDUISQDCBZEEBQJHAPAJPXPHVWVHDOJMRYRZISSBYTNGHVFAOGJUYVBUQYXTLOHWSTMMEJWVPRDQRSITJRTDLHFNXSSTRMBVGWXMQIXDKRMPTOUDDJQNBWIILECIWAAHZFPAUIDFAKQHYKXENLCYESDOLZNKLXN");
    msg.type = 28U;
    msg.properties = 230U;
    msg.durations.assign("HNAFEGTYICIBQMTYZXYSFWVIFXRANGDPMJGXSLBOGUNXPXGQWZVHLDGOSCJKKJQMZOUIFQEGKYUWLOUEPDIYFXBIMBCTPMIBANTYRUPZLCHEJNAWSRAVPTEHBKOQCCBGTWWDBRJOLQZBQXLOYHTFSEZJSEUKOWYQKRKHVZSRGWARTPAJSXPEVARSDVIHXNKMVDUUCNUEFUQFSVYVNATWWPCOCXJDYDDJEMORLLHLMMKVCMZNFFDBNPHTLZZRQ");
    msg.distances.assign("WIBPFVQXBTVEKOOZQGNCCYLDPGWNHXRWDAZPFDOGGVIEQJINQWGOFNVSDFYWKMLHSAQBHJQUDMYSNPORQEWPWZEVHHIIXJKVKBIRLAMYCPFCARMLGAROCLQDUPACJTJTVK");
    msg.actions.assign("UFBGKLHCTQXFNSWFEJHBFCBWVMFAMROPRZDYDQGOFAERTCETSPMRATSOEGHRONOIOWDGPXFUKPRBYSMJJMOXVOYAPPNLKDLQAVMGFKQCSCNQQQLPPRTYSSAEADUWMZBYVNBGUWATXZMEKWDNGACVLNZFIZABXKYHETMXNJBHCZHYJULVDQUIPVXHYBJSOXZDVHJXEDJIQKNIICFK");
    msg.fuel.assign("CSNHTHTUEGIIVUANARKKVTVHVJJNZBUJUCHORRSXWHLGJRKYXTWRLMHGZIVNTNGPONXUDKWAZZYIIVOCVLWEIHIFBUXMXHSMKCCWELGDJAISBAQFSQGYTFKTNXP");

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
    msg.setTimeStamp(0.8850010414856043);
    msg.setSource(8470U);
    msg.setSourceEntity(93U);
    msg.setDestination(14786U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("VHQAWSSXODAIZCLNPBEWQCUHYLHWKCBYUDMVEWZGJBHBRKLPOIECPBZKBUTJNOCVQDKPXVIMVKLFTTSDZFRJAIRXOSGEWZFYOUVJDWWMAXBQSBXNHKUXXNXTZRMOQCGYGFAAACJVKLPQUVUADOGSYZIZIHNCLHCGBPBIIMNGLHZMKLOAYJOMSUFZESUNPE");
    msg.type = 89U;
    msg.properties = 250U;
    msg.durations.assign("IPXVLFFBADYCCYNVBFPDVLVRUOFVAIZEOPDDBQHTRKUQIIWEKPURRYESYMSHGARKAMJCQTZEFODGLOPBSQNSFBILWVECZDGTMJQCRTQXGKYKZXDKCWYXBMTRNBBZYKTQEZOGMESNIPJIFURTPMWJOXGZBLGHDSAWHUCLLRNUYSYW");
    msg.distances.assign("LAZWYISPUSIRQNMJPXEKZHBGDNDRVSVKPZVSAKPCEUWCSHCBXEINVOOZRQQYTQBISIOLAJVFCTVGHPQTBJLBUCAZOKNWEFTNOYZUOLOYBJBKAHXDGWAFFRQRTUWYCJMYHMGDPXGJDCTMPDIQWTKZXTUNWNUCXBZSEFEUBJVXYZYGMGRHGFVQJIWWDOBAE");
    msg.actions.assign("NXRMMODCGGYBVBCYSKUCYQXPOWLTWMXPRKEHMMFVUFOEDKTFGJGXFPITMZFUQLPMQUVAYBWJGJGLFYFXXKABFALVOGQTCQVYO");
    msg.fuel.assign("GMCZDWGKRKDWQSAKNIIXBLVWECRLTBIEFFRHKSFLCFKPHJRWBJPWZDSEAHIIZWAJPSULUAKORNGUFTHOWZOLYBVEWOBBHDCJDSFUNRSDQVZVTPMAGXGMVXZMQTVZXNKFQPMBVFOUSUCAUHGVMICYXNKNJEERX");

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
    msg.setTimeStamp(0.8857832668122217);
    msg.setSource(47072U);
    msg.setSourceEntity(38U);
    msg.setDestination(64174U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("MECUKPLUXZDUHHZXNYERHMJNFDAEFSLFXUCQTABATKADHLHNZKMCPYODYPURKONQMEIVVWBSJCXROZRUTRHVEVZRIJJQICAHMEJSTQVSKWEPQTTYRKEKGIVIGJDOKFDRLCMAWCZWWBCTWYONHGZJYZGPJNDTBTWFXYFCGJEILLAPESQVSMYPSOBQBFYDNSFRWZWXSNBGKDGZQBPMITOFAUYJLXUXOMOSVMXOGBGD");
    msg.type = 122U;
    msg.properties = 97U;
    msg.durations.assign("PJCNHTIVDMCGDKWFUBDRJRYVFWTUCIZMBRHXGHOVOTFXKQZWWOAQOFOBUNYKPLZHFKCUYKYLHGDVQUPQMPWJJNCQNGIZKHWRZKVPRNTGBSSEDPWADOXCSBEQJPWZGKBROOLBIEUWFAJLGCDGXUNXJYVVIXMLCMHUVAXAELUYXSABPAIJQMRIFNDAWBOZLAXLQFRTESNREETXSNBATVI");
    msg.distances.assign("LWETBITMGCRDYISGLMZKPWHBRRZSHXQKNKOKAGONMPZWTITDFXHTXEIVKLIUDRZDUXUVDJQFLBFHNJOBEDQGGTJSECRCNMICOLJWARJRA");
    msg.actions.assign("NDLEQHOXNSDQTTDUUZWBHVOGISPYXGYILXMRWCDGHCBTNPKRTVOJHBAAXHYENMAVZOWPJUGMFKUWYDVLNOCGLGDTKFRUJFNIYNVXYEEZFNVQQSLQAYSOYLIITEKKTUCGHLFSAUJZEDHXLUCBQBX");
    msg.fuel.assign("WXPSHXGDSZCPABDRYMRELSJCKASWRTIJEILRNVWRKOGSXNQOAEFPMFEHHUBNVJTRGUZEPOTDHBVXWVCSZAYPBKBZFNSCTPCMLKZRBUJNUMXFIEVTSQPUTYYLGIIZDOMIQEKHTFTAYUGZMASAKFX");

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
    msg.setTimeStamp(0.5345212101805711);
    msg.setSource(63133U);
    msg.setSourceEntity(13U);
    msg.setDestination(16364U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.44996498232733895;
    msg.lon = 0.38291386169960584;
    msg.depth = 0.9660864297242409;
    msg.roll = 0.3477320730001019;
    msg.pitch = 0.4093388196273897;
    msg.yaw = 0.8684776162681739;
    msg.rcp_time = 0.23227589910502056;
    msg.sid.assign("LOPDDKEWJATCGSYRWPVMPOGUZIWYVVZHYLABTMCMABHOOMZXUSVARJNTBICBXXVSQPQEHVTJELAFRJXDGLIJIWUMKXEENBLESPNRSDWGGIYBQNGDWHQDFTDQAPYQUYSHKRVDCWRNPZZBQZTFHHIWCAFJIUFBNIMFOOCHZXKEJYSBSREDVSRXMTQYXCICOBPL");
    msg.s_type = 81U;

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
    msg.setTimeStamp(0.14451825585129274);
    msg.setSource(10906U);
    msg.setSourceEntity(218U);
    msg.setDestination(26706U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.9524147554780671;
    msg.lon = 0.7718843501023888;
    msg.depth = 0.15069617599330254;
    msg.roll = 0.2147918449813736;
    msg.pitch = 0.3263382730795733;
    msg.yaw = 0.756894353272566;
    msg.rcp_time = 0.7718664837769466;
    msg.sid.assign("GCRBBJDLGPAALVJOPTMRNZAUNTPAFNCGUOEZHPYXDGEASMIVBUWGPCTWDRFSUKIJOMHTGRVXBSUVFTJZLKXEBVHQZMCJHSNPIDSQAVIWSTSQMIKBXILYJEQXIGWYTFOFZBTRXKQNEGESCCNXWNVPLQORIVOQYADQFZTEPCINKHURRCJYXHWHUQR");
    msg.s_type = 101U;

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
    msg.setTimeStamp(0.24949489903050737);
    msg.setSource(38581U);
    msg.setSourceEntity(38U);
    msg.setDestination(24922U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.14997504887684077;
    msg.lon = 0.5608159913018926;
    msg.depth = 0.4024728551103689;
    msg.roll = 0.984812980081023;
    msg.pitch = 0.16004252321326917;
    msg.yaw = 0.8730503635270224;
    msg.rcp_time = 0.6702169788326136;
    msg.sid.assign("NDCUNXWKPMINJLZRTPZZBUELMKOFBEYQAOLGHAHWPBCGDVPRNAPXGJBYNEIMNSRYHLDBFNRTSFFJCIZVLLNJOYADQWMSXGLEVZUVXPHUBBFHWMQDTZAWYVWTQXQURPYFWGBMRISJVYFGJKTGIEPFGDMESCXQRLQESCXCOATOFQUXHJISGPOYZSQNKTZJTC");
    msg.s_type = 160U;

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
    msg.setTimeStamp(0.09785401912260927);
    msg.setSource(24881U);
    msg.setSourceEntity(119U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(253U);
    msg.id.assign("BZHOCPSEQJQNXKNCGDFCKXYWFBZJFCMEPHGCPRMGIMXATUFWRNBYJCEOEHIMVFOJDLBEIMUUDLIXYBPRAJLFSESHSO");
    msg.sensor_class.assign("BXLSFHXPHTBJAYPIPXJTSHMRQWCNBSYTPRQWSIARPYZ");
    msg.lat = 0.8444924763060494;
    msg.lon = 0.9364925172476837;
    msg.alt = 0.5576156094103566;
    msg.heading = 0.28259034902168767;
    msg.data.assign("CPOGYLQMYHNAKFPLZMLDAFXHCLAOWPFQJIRXDCNQIHPMRUYTISQCYUYIZWQZLBQFBHSMSAK");

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
    msg.setTimeStamp(0.20838794509000125);
    msg.setSource(50571U);
    msg.setSourceEntity(135U);
    msg.setDestination(30144U);
    msg.setDestinationEntity(63U);
    msg.id.assign("FJNVFFULDTMSFQYSYQHUCCISWVTTMYZNAUAWGKLVQKXJWXEGEXILPLAHZBPRBWGKHSNPJRNTJFJDVQRPCUOYRBJXJKIENOCCTBKLDAGDEWMNOYRHLVPJSEIM");
    msg.sensor_class.assign("DWHKKNBIEFBLVVPMGBIXLSZQULULOOSVMMWQKFEYRXRSOINAUCZZJAPZOMMFXTRISLGYRWQTYHHJGDVSMJTSYAABLNUEVTTKOPOMXFADIHCPTVPGVKFRLCWUJGEIEOXBEJNRQIHXIBGXQEMTFWNEUQYYGNQGIDOVHJDJKLTMPLZYBSFTMHCZFURUHWZZENRHEWYUPHLXWJSKCAWFDNGOZOBVDFATQA");
    msg.lat = 0.4044137615573149;
    msg.lon = 0.6684397099672892;
    msg.alt = 0.38749816420426764;
    msg.heading = 0.4483030747805342;
    msg.data.assign("KFWLSLLRNWHHIPQ");

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
    msg.setTimeStamp(0.40435066175865175);
    msg.setSource(59563U);
    msg.setSourceEntity(129U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(68U);
    msg.id.assign("OVQLJTINRXLVQCXJGOMHFZWARBLALRKEWYZPBPRSDYTDCXJMWYFXKQAVQLRIUYIBQCMBOGBWHMEZQKUBWNKCLKWKYCE");
    msg.sensor_class.assign("VPKFGCMKRTJKBBRFQJTYAHTATXYXSNMDKUQCLHCASVX");
    msg.lat = 0.8626377542894703;
    msg.lon = 0.8303350557646815;
    msg.alt = 0.4490299743951406;
    msg.heading = 0.9389624963434706;
    msg.data.assign("EKHJDAQBJQCQFSSGOTISCXMIOJAALOLHZFFBJUNYESZJBFHGLOLRZFBYKJMDOPTNMWALYWSSELOVXLQZHIQOOTUWDPIKMWPNWNVSUTWIPDSVYRRXXJPLUPDNVDQSMTCRBEXRRKBAPGB");

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
    msg.setTimeStamp(0.7357608026479245);
    msg.setSource(49708U);
    msg.setSourceEntity(28U);
    msg.setDestination(62739U);
    msg.setDestinationEntity(36U);
    msg.id.assign("MQWYBECLFUKFYVYRJKRNOPUYNDVTEIXXAZWLDSFJAHYWZMLCXHWUREKTVMJQSEMUEWBSFYKYFSYRRIMJCTDNNOVIBOHTOLABQIGESCWQMBKCGRJOMBKAWIGXYUPOWUQZVPZXIFQTURDEQHMNTMTPNUZDAAWMLNXVPTHBXZCIVDBVODSXAWGKLOZTUISOUGEZRKILLABTNNIAFYEPOBPDCKZHXGQSDSJAJQRCGCNEGGVPVJKFJHZSJPHPC");

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
    msg.setTimeStamp(0.8545845998374922);
    msg.setSource(10764U);
    msg.setSourceEntity(21U);
    msg.setDestination(1700U);
    msg.setDestinationEntity(237U);
    msg.id.assign("KZAQILJWFDTVNMQGUSWRXDZXPOJGJCXWLKLLMXEGJVOYBFYOKYMTGKMSWGUXRPRRDLBFTSRHPFDOEJESBYHECHBJVQIINWMCVLVGQRPKBGLAGSKSWNNZCKBPCAWGLDZNVUDODYSHOPSIUEZOKTZTNQUVXNZTHTTFOSAWLCXEYUKEYIHITYUNPFQKUZYJUWZOHMFMBCCGBPAHQVOAATBIDRALANZRFPYVQDEIQCFRQMHEFUEXJRDSAIIJXBJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SDXDFATPDEIOEDHOGWFHRTCVER");
    tmp_msg_0.feature_type = 14U;
    tmp_msg_0.rgb_red = 55U;
    tmp_msg_0.rgb_green = 113U;
    tmp_msg_0.rgb_blue = 68U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.06442257121050399;
    tmp_tmp_msg_0_0.lon = 0.19236765339105588;
    tmp_tmp_msg_0_0.alt = 0.3284133890517835;
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
    msg.setTimeStamp(0.49623320801215276);
    msg.setSource(46977U);
    msg.setSourceEntity(35U);
    msg.setDestination(53444U);
    msg.setDestinationEntity(100U);
    msg.id.assign("VLRVCDQVIBOSMJMYOFFNNKDHGJJCTIRDRBCOAQKWMNSXSHOFNUSAORTRZDMFVDAYKWQJXITGCGBCJGEPXQXUXPCFAMMTYSLNNYMWCLCCIMTJZYUAWHJEXKWDEKEGVQLWTWIKOLQRHTZQHKFRFVDOIATUPBHAZZVQVXLVOIFOEEPHZAXIZGCURLYAPWNJSERLYLIHBG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AISYUIMSBPHNLWKC");
    tmp_msg_0.feature_type = 148U;
    tmp_msg_0.rgb_red = 204U;
    tmp_msg_0.rgb_green = 120U;
    tmp_msg_0.rgb_blue = 31U;
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
    msg.setTimeStamp(0.4537310529755204);
    msg.setSource(51681U);
    msg.setSourceEntity(121U);
    msg.setDestination(39068U);
    msg.setDestinationEntity(71U);
    msg.id.assign("XBRGCABABJFCMKONSFHGUOQFVRJGCBMUMYCDYYQLCYHOGWTDKAIPIWQXZWAWELNGNBLVUKWMALFMEMEAXWPITZUQOJRIBEQDPPGBKLYFNFTCVJAUWEHCJXSNRWJKBFDZKWNSQZOOZESWPEPVZUXKEIZSGORHKGVVATMXOSMLORPFIPBUCIAJYJRSMYPRONQHIDJIDLVGYTFLUUZVYTTDXNBLNUVLGNRHAHDJ");
    msg.feature_type = 170U;
    msg.rgb_red = 205U;
    msg.rgb_green = 90U;
    msg.rgb_blue = 15U;

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
    msg.setTimeStamp(0.29341780156433506);
    msg.setSource(28619U);
    msg.setSourceEntity(30U);
    msg.setDestination(47301U);
    msg.setDestinationEntity(157U);
    msg.id.assign("UGKQZVDBMQPVIHCKFNANJPEXSZYLHQGDTXTFOCJYZTEJAKYBSTZQSFYZLJOMICPCCELYXNGJOQDARXYAOXWNHRVDUIDJZHFUVHBCDWLGONFKVJNRLXSSDWKNMAHWMQWUSRVFXGAICRTYWIMRPAYOHRTBTGQIFEWTYGLZEQKEFUSPABQCIENXMWVOULBMBIW");
    msg.feature_type = 23U;
    msg.rgb_red = 217U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 237U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1354184110110377;
    tmp_msg_0.lon = 0.560570734301994;
    tmp_msg_0.alt = 0.08169772949011489;
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
    msg.setTimeStamp(0.007636105368139856);
    msg.setSource(34163U);
    msg.setSourceEntity(156U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(204U);
    msg.id.assign("TQXBRTQVQPMOBXSKILNJPAIIBZTHCAHUTDGPZSSKUOYRSRAMVREBPQZVVGYJGVWUBEXELNLOXRIFIFBDOYOJUYQZUGYYZHZFDSCBQCZIYTLXKYKBAYDJTQFIFWWPLQDVPEGIGCXCFBTDQNNHWAFRSEFKGZTDBMNUJLOVXCSNOPMIOMELJMUZHPHEXCPVYICOJDFEGRCMLMGHSJRGASLQCNUWJHEPZNDAHXLJKKDWWFAVK");
    msg.feature_type = 210U;
    msg.rgb_red = 46U;
    msg.rgb_green = 0U;
    msg.rgb_blue = 219U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7678503176449555;
    tmp_msg_0.lon = 0.976070168365013;
    tmp_msg_0.alt = 0.8933668585579692;
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
    msg.setTimeStamp(0.17458030089432608);
    msg.setSource(61952U);
    msg.setSourceEntity(221U);
    msg.setDestination(47691U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.9844291301990821;
    msg.lon = 0.6985216283883924;
    msg.alt = 0.8480566618618838;

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
    msg.setTimeStamp(0.8473172779142323);
    msg.setSource(54505U);
    msg.setSourceEntity(33U);
    msg.setDestination(40689U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.9699007678224484;
    msg.lon = 0.31749441283860014;
    msg.alt = 0.023066515078103422;

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
    msg.setTimeStamp(0.4461515862936193);
    msg.setSource(24204U);
    msg.setSourceEntity(26U);
    msg.setDestination(8127U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.9637192573433487;
    msg.lon = 0.4488763446971097;
    msg.alt = 0.24174070506527567;

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
    msg.setTimeStamp(0.8126275841273566);
    msg.setSource(50823U);
    msg.setSourceEntity(215U);
    msg.setDestination(18573U);
    msg.setDestinationEntity(197U);
    msg.type = 128U;
    msg.id.assign("LYMZKVMJADEPRJEADOALTLFSEZANMKBAQLWRVWKGWLQWCOHBYPQXPHNTGJUYRLVGNVXOIYUCPZRRXLMXFTTCHEZNPIHZTPMBBBAQFDRMTRGOSVIUUNODGSSTXFIDKCPRIZAXRBUNNAZCYBFFKFYWZKOBTPEFQNJBZHIQUXMJFDHEQKTXZSHLSAUEVOWHGDOKSYJXVXUVUHALCWRKGMC");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 9U;
    tmp_msg_0.value = 0.5479389606984199;
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
    msg.setTimeStamp(0.7223826360277463);
    msg.setSource(23228U);
    msg.setSourceEntity(0U);
    msg.setDestination(37094U);
    msg.setDestinationEntity(173U);
    msg.type = 57U;
    msg.id.assign("HAFLLEPFCXELCBRQIUWGTH");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 45268U;
    tmp_msg_0.flags = 230U;
    tmp_msg_0.lat = 0.71551229175394;
    tmp_msg_0.lon = 0.3938717012012406;
    tmp_msg_0.start_z = 0.1487874939021907;
    tmp_msg_0.start_z_units = 215U;
    tmp_msg_0.end_z = 0.19638650875729957;
    tmp_msg_0.end_z_units = 2U;
    tmp_msg_0.radius = 0.8362293639946228;
    tmp_msg_0.speed = 0.4331825384222664;
    tmp_msg_0.speed_units = 42U;
    tmp_msg_0.custom.assign("IQTKWBGCFJRUFEAMIV");
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
    msg.setTimeStamp(0.37277388801574873);
    msg.setSource(3712U);
    msg.setSourceEntity(171U);
    msg.setDestination(18072U);
    msg.setDestinationEntity(220U);
    msg.type = 90U;
    msg.id.assign("HCOFJTCXXFCRDEVKAHNBSXRMSXNTZZDYRIZXAMBJRBDPQIVTBVWFHLTJJFUUDCWHUPPOEDSXCAHRTRKJUCJPUKBKIIUONSCGBYWQKFAPPSCBUSIRKDGGMHIRMFJNPNQYWGYYPEFKDGETIFAUGESEVVWYHHVTQQMMMWKYIVNROXLLYBA");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 143U;
    tmp_msg_0.entities.assign("VLWCFXVTAXRCSOQGEJYYENIBBAGFTIMTCLGDSUXGCKYWXHYHLLRQHUPMNQMDPHVHAMPUUNQZJJNEJYZBCVYVESDMTEDQKJZBLFJSFZEWXOXKBFBZKFGHCLZSBTPRVSBPHQGJCDUPNYSVGHKBIXPQRKFNLAEMRVUXWPQ");
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
    msg.setTimeStamp(0.2946727710443071);
    msg.setSource(57181U);
    msg.setSourceEntity(234U);
    msg.setDestination(22877U);
    msg.setDestinationEntity(42U);
    msg.localname.assign("DDLFDSHTHMDWNZJWONANMVBBEJVWMWYMTHMPIZGDCVLJGYINUTBTTZPWNKWVSU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LUIFZBRZYRVAOLNQMBWIBBFUSONAKFWOFDFIQISMTBYWUSDTDIJLWQQSAEFYSTJYLGVOVTGDJNPSUQOKWCREJQLZNXPZKZEMXNLCWMSTSQKXHJCMUUHTVHUOREYKDILRNPEYCACSWGNQBGVXXPWVMVZOEGAGIXNAHMRLAGXJOBRPVKRJWFPPJHZEEYMEHJDKDZPOBDYQCNPPVSQ");
    tmp_msg_0.sys_type = 197U;
    tmp_msg_0.owner = 5816U;
    tmp_msg_0.lat = 0.5432499963263638;
    tmp_msg_0.lon = 0.5766207932732982;
    tmp_msg_0.height = 0.6496107147539675;
    tmp_msg_0.services.assign("RIJVIEWBZEQSIUGNMQSCGUZIAKNPOXDHOBKFXXJAYJSYVGDWHLKMNFEEDDIZBFVGYXAEMJLQBSOGQTRLCGJYRCTDXMF");
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
    msg.setTimeStamp(0.1558070637560145);
    msg.setSource(28718U);
    msg.setSourceEntity(67U);
    msg.setDestination(20464U);
    msg.setDestinationEntity(30U);
    msg.localname.assign("XIGTVFDRGCEAETGGMNKNSIFOXOCEMDFBLDQPJHARANISRSVTACSKSQHWHJFHUWHLMFQXJQITAHWGMRBQBEXJZTCISBLHUUZPPDMERZBNRKKLXLFYGZPYMQKDYSYROHHLZDYZHFWBBZRWZCEPVMVITZCCUKCWGLSEALVWYUPKYAVQBWJNBVUXENJDOBJAUYPSKNDYGVXXUTLPJIOEVWS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KEXONGKXKRXNRXZCPCARKAPFENIPFMUUTHTBCLFGJZLYDZBYGUYBWFJCPZIYSULTWQFTJBGADWKMJUKDJYJJLDVXLVNCSTIAEXJLAQVFEMTNRQNNJGSAAFBHXEHOHTIXLSUDFYKQWEMSHVASMDRAGZZO");
    tmp_msg_0.sys_type = 223U;
    tmp_msg_0.owner = 12162U;
    tmp_msg_0.lat = 0.992790817821842;
    tmp_msg_0.lon = 0.3161812105617555;
    tmp_msg_0.height = 0.20553567311361587;
    tmp_msg_0.services.assign("AKHTQWDJDGIZVHZNCZKWKQPTLLESTFACJNAQHQPZPDCKDWMXCZJYKQTOETSUFSVWDYCIYPVRFDBVOJLHDBGMWJGRPUXQVHRXLWRGEHUXRRZNSDOGISPAUU");
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
    msg.setTimeStamp(0.2956192691933055);
    msg.setSource(57096U);
    msg.setSourceEntity(83U);
    msg.setDestination(56127U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("HMFKLNBGODWTUHFYEGLHPECCEDEVAZNRGSAFXTJGBQVPZOOQIMOWIKIJWMXMYKUMAVGBV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FOATTSPYSHCXTWYVIZNEXOSDCUXWUJLTPHIPPJOZYXBHZGTMRMZONICSLRHVAFPVSXRNIGZXADIXJIGRQWYQSAPWQCDLYRTUOHZAHOLLZWRBEEMGTEUVIVTGDMWWUKLOCAJYFKETBQJSLGKBQQZJUYYBRVQLMDJFHKDLQRNGEOCCVRUIFBSJZKDYGLVAXBYSSAFWMMPJQ");
    tmp_msg_0.sys_type = 49U;
    tmp_msg_0.owner = 34947U;
    tmp_msg_0.lat = 0.4305295764803039;
    tmp_msg_0.lon = 0.9937425186940788;
    tmp_msg_0.height = 0.1368288544697518;
    tmp_msg_0.services.assign("IQSYWZZUJUMHSBYTDDERAOKHXFSOGHIMVQIVVEJKIHAZLFGWUTRNYRTLHGZHEUCRFDSWUHEAYOXWMZTRCOGLDVXSWLS");
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
    msg.setTimeStamp(0.7250465460873823);
    msg.setSource(52376U);
    msg.setSourceEntity(205U);
    msg.setDestination(37436U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("YGOQWYZNVTHEZHNCEKPKIAGRBHFFJGRYLPVHOYGJKDPWYVTHUHMNGTJOQZBBRJQXCDIVEVMELZFHVSBCTXWFBJRTUYTBFBIRIN");
    msg.predicate.assign("VCBBBNLBNBQPOUCQJWVLDTIPUP");
    msg.attributes.assign("XOJRXTZAVBZRIBGAWFNBBWCMLFPKFAEHUJAIVVGUGZVCCTCIEOWDBFJNGEZBDHRDPUJQJRLLYMSWETDKPWQWYQXMDGBWWNYPKRJQTHDHGOTGNHPASABLZELQZEKCIXFSXVHVUZOISUVSIOYPUMXCUKIOAFZQMPESLOLOOUFHLYUNRDSDACXRDQGCLTPJTSF");

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
    msg.setTimeStamp(0.6304179517578619);
    msg.setSource(30973U);
    msg.setSourceEntity(125U);
    msg.setDestination(65060U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("RMOFQEGNEKGFIEXTVKVYHDPLSTBEAUYMZPJLWOWZCOWITG");
    msg.predicate.assign("YGQNKYFGACDTUXJBONTDOHJVNYZRMMIREFNL");
    msg.attributes.assign("SQBFHUSELBOYULBALPCCQCYRQU");

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
    msg.setTimeStamp(0.8536898981461153);
    msg.setSource(56218U);
    msg.setSourceEntity(72U);
    msg.setDestination(25203U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("YWNJOYYSGHXOELKIIRZDNPNPKVPREAWYXMSBVXZTROFSOTJFEUKMYHZZFYY");
    msg.predicate.assign("VXJZQDOABEQXPLRFQNNENWFCJPCTBCUWXWKHOCUHGDVEHHGROUJGOQXTJIZRHTYNAPDVEAUXACUGXKYELWNKMIQDZEHWKR");
    msg.attributes.assign("GZUEOQWMKSWWYXKFNYIZTEDPRBASDHGKTOFGUETVXDMNZZPATQWYZSGJDCLHXFOLJPAUYMCATLTECUBIJHFXXXUXLONVHEHXLZLAVJOINAMRPIVBBSCXMZLOQDZUGWNOSAFYLWFCYSLKKCLRJYFBESI");

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
    msg.setTimeStamp(0.8402523123136636);
    msg.setSource(9112U);
    msg.setSourceEntity(10U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(42U);
    msg.command = 143U;
    msg.goal_id.assign("SWWJNASPBZBZFRBFVOTPSVLFTSUGMJGPCNMEAYOAVPNKSRKUUBNVKLSCYDHUARHXZGXO");
    msg.goal_xml.assign("QGVXKBJBPVFGIANHOIHUJSJHMKKDMJRAJGAVBRETVVISWIFELFKTPBSJICFKLGPNPZXURDTZWAATVRHDCZRUFJBPMKKURILWTXKOMFNLNUYWTKGGFHQLRDCYBESGKECQYMHUQUOVLDCUNVYXRLEBCHIBYTGMCMFDOOWVYOWWQYSCVCTDQJIZOAMXTRFLXAUOG");

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
    msg.setTimeStamp(0.570574703271777);
    msg.setSource(26280U);
    msg.setSourceEntity(254U);
    msg.setDestination(48827U);
    msg.setDestinationEntity(58U);
    msg.command = 141U;
    msg.goal_id.assign("UEBTRCGYUDNRRTXJECJMKBHQHOYXHEXKAHTDZWFGQSMGZBQKRYAJPWJPSWSTISNZFSSAPYYYHWIHFSRZQONXYQTTKLKBI");
    msg.goal_xml.assign("NGUECXZRPBNSWBBOYKMLDDYFQFFFJLQPPECNIEDFEALHTYUTDUAIVOYMBOEWMTEBAFYNLVQJVAMWZHJIPPEKFMMTNUVOGJHVIPDDLYVHTIZQZQMIZQRSZEAJGWHBVOPWGQXWUXKYKCQRRKTSIAAJZRBDCCUWUPXQLMPOTRKBHBGTVGCBUJYCTTHXAMSVUWAJSKKFZXGHNLJXSPHWSXECDDWAECUNZSYKILRGGNSFSOGROHXMCDLJIZO");

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
    msg.setTimeStamp(0.7387853178575231);
    msg.setSource(39609U);
    msg.setSourceEntity(201U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(116U);
    msg.command = 181U;
    msg.goal_id.assign("FFYXPLPXITLAXVZGCPPGTLNLMEDMMUBAVVOHRGZGTAVDAXYBGOJVUIBHCHFJXDWWTCCUNDUTOIBPNJPIJAWNKNZGSERFMFWRZMKUMYIWGIJRPMIOZXYLQRWWQVSZEEJWTZTRUFXSRVLFABDQZHFTLDOATNUISVWROZIAYHSPEKYKSYXKPSKHXJKCSY");
    msg.goal_xml.assign("WVZCQPBDSUQHETFUNLWAYDTTNUPOZIWYPSOJULKHASAAPDEHWFKBHCBVSVCRSOHCSIRHOVKTEFFBEDIECXXVYBJVMGVTKNQTJKBMRWIXMNYAGRGVNCDGXOHXYFESNZLQFMHQFLJAMCTZWAVPUDODOZKXTHKZJWGIMOHDBLGBTRJJKRLZZIRQXUYLFERWNALOJBWCPWXKIOLUUMXRPBX");

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
    msg.setTimeStamp(0.8210286636393002);
    msg.setSource(23030U);
    msg.setSourceEntity(187U);
    msg.setDestination(17653U);
    msg.setDestinationEntity(133U);
    msg.op = 42U;
    msg.goal_id.assign("NLRYATXOMXGDYLPPRBZWOLSJHDSMGSWTVNOLBVLTKJDEGA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CVYKTPCQTUKMKQWXBTMOGEDRAKISJQVFAPBBQXHOZKZJZJRPSSBKGLCVVEEEAGJMWJISVMVHQGLSYTFXCNXXYLBPEBTAZONZNDMJIWYZJOOLDHBFQEHCNQJCPMBUUHRLISKXOSSHAALEDNMWE");
    tmp_msg_0.predicate.assign("VQGTFHSDCBDMIGORFKVMIHPNFWCILHRHOEWRDOESLGLTBNUEAODJRUFGQ");
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
    msg.setTimeStamp(0.3271253704473578);
    msg.setSource(51075U);
    msg.setSourceEntity(23U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(6U);
    msg.op = 181U;
    msg.goal_id.assign("OADEMLRECJKXEBYTHVURCIGFLAMQGILLTBHNGJNDXKLWIEJITTKYAGQGDVPDJUGRWDMTCMLJXMXIHSHPPYTUOEWXZSGPRDDQRBOWYXTIFQLNUVKHBFLKGOFYCSHIICMRWZNKYWCJSYOAEOFUQXPFLTNVVMNJKBTMZZBPIUNYENSLJBSVZSWAYHQZPBHWSGQREXJQCNVCVCJXBROXARUUZSMU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PMLZACLSNYNXJVSWLOSYMOTQFARDXDDPQOSQALUMPUMSWWQGNUFORGENJOZLOIVAOCEJCDPUTYCFYUXGPPUHSIGZRUBUGLZVYZNAKSQFIFHHHBOEQVRZXIEMQONKEWRTDLKLZGMZTXFTDTKKBAJLYDXWBGKVCFRNNHR");
    tmp_msg_0.predicate.assign("UCNKZPLEAKGYZIKQHALMVSHKRWYQNVDVYQEYJSIYRQTFTOPDWCEOUVFVEHXOPKTSOICOC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PCMIJCFEKUEQRWBOOTILJJDZUKAMZCUTOAAMQTGYBAOWYSJEHCCTZVNLPVAOTYHYNYKQVDTAGZGFHUBPHDQXTSLSPKNHSXMUIRDNBQPKIUGEEKOWRKIHMCNGRCSZFKTWMGNZFZWEVROHTIYVEHQXPYWUPBXJXFBDLODWAMWAUSVVIGLYBJSHFXEGRLEZJWLHTYOPADLR");
    tmp_tmp_msg_0_0.attr_type = 221U;
    tmp_tmp_msg_0_0.min.assign("MAGVYVPKGELZOXMRWAGYETHSPCHOVFTAGCHLSAJIKZRAPYQBQQAFIIAOVRSZDWDLBUQMGKTGXZCNBRVOSUXZBPDFGEJFJPKCXHJC");
    tmp_tmp_msg_0_0.max.assign("MWDBBHJKCUAFNVFEZRCSDZQWTGHMWEGIUNXLAJNERNVDHQDRMSFIIPRVONDTXMZDJPEEINKKIYWZCWGVAGWXXNSWMUTXEGPTBZVEXORYLQJVMYFSZPTVBMBTXHTPADLICLFOEKRBLULEKASMYSCOHOZHFHBAMTWXTPSQUDIUWOGYV");
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
    msg.setTimeStamp(0.8520953158242026);
    msg.setSource(24746U);
    msg.setSourceEntity(151U);
    msg.setDestination(58140U);
    msg.setDestinationEntity(127U);
    msg.op = 89U;
    msg.goal_id.assign("LJPPMREKNTDRCO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XQVNGYSERNBEILDTKDANLHGDATHZHFUQRGKULYUTVDUOOXQCQOXAYTSAKYIWVYBPLZOWGQXWODTEBZDMPBWVPGFPAJKJNRRVSDFEZPZMOKVAWYNLEGLDTYNFKJGEGCWCSIAMTUSXMEQGEFFZJJZHZHDUEPVAJKDGYJVEXQBRTLMWZM");
    tmp_msg_0.predicate.assign("FAPWVLOZPGNMN");
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
    msg.setTimeStamp(0.5381591295730865);
    msg.setSource(18414U);
    msg.setSourceEntity(104U);
    msg.setDestination(15838U);
    msg.setDestinationEntity(27U);
    msg.name.assign("ANQHYANTGCXAPYYFILRNCMEALDSCHGUJBJEIGGFRQFLUEZQFXTRQCJFWDINLGKTRHLPDXDRBTYZALVCTBDNZLOEBQGKMQAWIBXKTODCHJGCYNANTHUHHVFXROZWBCGVMRKNAQAWWXUSURZPSJGTIEOXPGJTEOBPOEWMEDQXPFHIPYPORUZIMKUEZJSY");
    msg.attr_type = 62U;
    msg.min.assign("XPDSPFDKCDWHYETOOOWZJZTAQVKPATPMBKBADPWRAUIYZFLXTFUKWHBLTTRCVSWEIMLLTJHGISBJMNOZYAUWKNKDWQVRLGYVMYGNDINGDZARGSZFLXBJCUVQAARESSXHDJFCDSJTZMSEMWOKCDYNVHEXOUGFQTLWEQEGIEUBGQRCHXIRTQSQXZCBZUEORPJNIAVCPYPSYVLGCFPH");
    msg.max.assign("OTEDETZJIVCOCHMQDZSFZXBUVIFATGXKRYFZSSJUSGWZYROYXSYJUPYARRIJISMRLAXJNBAPZJFLSFEFFSVQWDODHPXPJLMQDYVHAUAIUZKOMMUOUSLBRTQVJWSMPLPMKYQEKCONKMVIQLIBGFMIABEHIHIXGCFGVDVNNWOYYRCONEQQELXBRXGGCHDGPKZELWQQCDKFTVNBVTWWUHWYH");

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
    msg.setTimeStamp(0.35738631406215116);
    msg.setSource(52116U);
    msg.setSourceEntity(129U);
    msg.setDestination(8641U);
    msg.setDestinationEntity(166U);
    msg.name.assign("KXXGCOCUVTDPRLOLRDTAWRGUDHVBVMHSTLPIPUDMODHBMRKFIAQKRIHLUWZVECWCNGZZBVROYMWXXBSJNFASKQGLTEWZSBCNFDLPXONKCJGIWFHEQXWQ");
    msg.attr_type = 96U;
    msg.min.assign("RAUYLDRFANSLQSOXQMWJPZGTFVDTUHTBBZLZWWKAKIIPNPHXNIMUSHFZALOUGDYTIPXUCDKHCANUFECPEQEHMDHEWSIEBBOBTUUNSOBHQGCQCJMOR");
    msg.max.assign("QRPRZUYDDTXTICDSZRHKBEAYMLSUHLLMAGYIWYVWDWQZMOCBFXGHNNKENMGUTLTQZESBNPGBQLOIPJQNZEEKLWPSYZCNWRMUVOODMAMTWAJGGVYZRYUDATTJKFH");

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
    msg.setTimeStamp(0.924546843020195);
    msg.setSource(9334U);
    msg.setSourceEntity(228U);
    msg.setDestination(22676U);
    msg.setDestinationEntity(91U);
    msg.name.assign("EMWEKNWBJAJPSHV");
    msg.attr_type = 249U;
    msg.min.assign("GLQPVXXAGFKUJHXJLSBLUJDUPNNAMKTOGJSFIJOYHQXABCZLTMEPBBEEU");
    msg.max.assign("HXJJEEZKFAEINDGHKSCZMHYKEGEXUKPMZJTBCASQQVYMDGAUJBKHCNQXREYIGAPOVWJATWSBBMZQCJKGEFXIOAXOMKXUYAMDOWCLDOMIXFUZKIMUINKBWFVBYMZRYTGPLOOOJHCTTDCSSWUFWHPQLAUNJLLPFCYDVZWANRRNMBFFZVSTBTY");

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
    msg.setTimeStamp(0.8722336560853431);
    msg.setSource(10803U);
    msg.setSourceEntity(187U);
    msg.setDestination(1834U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("GXNKENCBHJXMJIRHFGMGFGATWQCZYSTITIAUDNSQKMSLTXDTIAEDLYKXDDSUYTDCGMOXVPJYMVUERWLINRUZRTARPVHPAKZXZYWBYNZWHOOQSUFPFYTNLPSPVZOLZHHKLSJRGQAQHWSWCCCURRIVKKBNGUIEOXULEWPLMFZKAVQCSHFWCENDQYFJFPDQKEJB");
    msg.predicate.assign("RCRSSGAXDKXXNBMWBGUYZGXGKWUFJHOENDCEPFVJGNWKHJEQOCLVPCPIKOJTBSRDIUIJT");

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
    msg.setTimeStamp(0.6503503942257403);
    msg.setSource(32780U);
    msg.setSourceEntity(163U);
    msg.setDestination(385U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("QQOKWBYTLCYVTYWAXSIDYPOAGYNSVCZDG");
    msg.predicate.assign("XLPHCUYFELGOFOPCKXIMPRPABRLSPGNVVHMSDTNCWSTCPMQZMMPIIFEMZWRHZTBMCEBGFGWPKXAAPXOGDOGJQYWOEQKAPKLTMIULVWAUERVNBMVRHUEDJULGRSULCJIHJKFYATNSTNBYSKRBWTCSQWOZNKJQIMIQJLXC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PAOKMFSTDPQMEOFUXPOVRBIQILPHGBIYGFBVSONVCMOBBKXUVTBTDQOIKNEQNJSKGZXHTCMCZMCXLCMUXESFIWKEHUTZOXSLAHXMQJAFDWPPAXDKYJCGFJBSEZQTLNZSKTEWKL");
    tmp_msg_0.attr_type = 149U;
    tmp_msg_0.min.assign("XGXJKKHCYPH");
    tmp_msg_0.max.assign("GTOPYGNIEMGXCBJNFVMTRVAQKJDVGAWRSUIQHSEQPTBJLJAXDTPSWDUGCQVVKSRHUGFACZRBVTDCYNPQCCCZTYPDIYQZQVLUHOEJIOAIDUEVOWENNAVJXXHUHWMDBZGJTNKHLFKYNSWEAWFXWFPBATCOMITWBLPNIZRRNMEJYROUDCKPZREGBQ");
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
    msg.setTimeStamp(0.9174665792347253);
    msg.setSource(2928U);
    msg.setSourceEntity(41U);
    msg.setDestination(32333U);
    msg.setDestinationEntity(238U);
    msg.timeline.assign("CPSVJKEFJRDHJPGOTJGCZSKTBLUZFJO");
    msg.predicate.assign("NLNLEKDVZUEMLQYGMUYTMYMKSIODAEGOHWUURZTQAPGTMJFBOXMSZGAEBIXGSMTPBWSEVHWWLNECMKLORNAYKXGJIJSAQ");

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
    msg.setTimeStamp(0.12344773572109036);
    msg.setSource(9311U);
    msg.setSourceEntity(37U);
    msg.setDestination(17832U);
    msg.setDestinationEntity(78U);
    msg.reactor.assign("KIJIJMSBYYTOVHIQUBMZAZSIZMNUVTIGHXLSXTWBHWXVDSKMFHZFOPFVWELEUMEICNPYFBXSDOQTJPOAUHIUZXGWHEWKTZNVGZFBRAFSPSWDCRRCRBQTONMYCRCTGHKWAVLGJHKLFDOCVQDOWMCHRZWYXUJSXEJKSAIKYFAUDPA");

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
    msg.setTimeStamp(0.5508638607950799);
    msg.setSource(54672U);
    msg.setSourceEntity(249U);
    msg.setDestination(53914U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("CGFRAQWGNWEAIFYMYTBSVYOYIKJLUUUENOHNIZHPTKFDAWWCTKBQUXU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GDMLMHXCIHXWFJUTVLOWRGTPJVIJPQNRNCKSEP");
    tmp_msg_0.predicate.assign("LEVMEDIDRPKWTJSFNUCZKBQNUUZMVIAQPOQCFZVMSALBBIVSWXDUZDPMRHNGVIVFJTHEXWCAVSM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UQTETXSDOXDXHCYQKMKSMTVHZJHEIOQDVJGLSUMDRWQHMYBZREVZPCRRNGREIFPDZELNIZYZWE");
    tmp_tmp_msg_0_0.attr_type = 22U;
    tmp_tmp_msg_0_0.min.assign("HEWFJPMQGUFIMNJDREGCNODZCDQESNZSPPEYFCYVMDQTWVFHLSANGFUIDTTRUXLPALATBLNJEXOBUKFIRMGSZAXSDXPWWYSNJYZRVFJWQTHQBTZKCKVOWJKEGGCHJQ");
    tmp_tmp_msg_0_0.max.assign("NVRWSSBHIEDOTVNIJONXAIPQKLPNFIPIHYHUDXDXHUURHSALIMBTAFYVGGIWZDWZHBKARRMPWWEQRLHYPYGAFDLVPNCAJLEOAMULWBOSPZWTCIOXMSFITDMJMSCFQJEJNCEPJUANOICOVQXRGUWPYZKQSOHSDKJBVGDQEFZXLEXHAWMJ");
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
    msg.setTimeStamp(0.16941820533298801);
    msg.setSource(5784U);
    msg.setSourceEntity(133U);
    msg.setDestination(24179U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("UWKUFULTWFYLBBUOZFAXVBRESTLQFVTPJKAQXMNVEWZCHHSYYMEAIFQRPQRJMXHPAGX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODIXORVVSXPYUQICREKBSSQNTTMMSSVGNCMOEOYKBXQFVGEUDFSWATYWBZQCIJAAFZHRVZIHTBIWWFIVFRCRLDYKGSBMDW");
    tmp_msg_0.predicate.assign("PYZLOWWHQQLBOAMJVVESYNCSIYFXYOONXKDOGXPVWWXJECCRFLVRDYHXZUNZRIXGGPMIINAKRUUI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SNJJLUHEWQJGCMCYDOORSAXXINRUNZKDHWJSHQMXGVXLGZAXPLJRTNFBBMBAXMGBNTSKDOZIRVTMOZWQXNTJSKAIEEUCAGYMUCOZKEVGSVRLVYOFKCBPNKLWROVVKHFHKTPBWCNLQUBSYCMTIPRXJYDFUIWHVBZSASLYAGTJLEEDIPQGJFHIZLFYHPNYIQTEXEWTDHUCBZFAMPQOCDGDKOJKPNQYWRAWYU");
    tmp_tmp_msg_0_0.attr_type = 146U;
    tmp_tmp_msg_0_0.min.assign("ZMPLYLWWXBKHWGACMVDQTVRIVEJKSXWLKAHSF");
    tmp_tmp_msg_0_0.max.assign("QKKCZFGGLGEISOZBITTWGKMCURJRPAHBWCQJLBSVPSYLWGMXJVHZXTFCSJDKZKMWKRDSEPNJUOLGXBFAFOKWPVDCENKYX");
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
    msg.setTimeStamp(0.3614582598165035);
    msg.setSource(2801U);
    msg.setSourceEntity(117U);
    msg.setDestination(24415U);
    msg.setDestinationEntity(58U);
    msg.topic.assign("VGBDFRNAIHRAEJRSMSWKKWHPWZFTAYCGIHTSGXMXOCPXZEWGVCUXPOZJOYXMDCYUMYULXOFHIUWFPPZGREYNDKYVWFZTCNUFXPCNODEVHBUELVKLLFJQVSFGSTHJNANTASKDD");
    msg.data.assign("YAUNVSBNIMPWNPYIGMUYTWGDNQHXSBSHUOTAPWKEDBGMVFHBROAHZWRHNUYIZVZONPTUUXJFTVLNGGYRAXQUHMEQOULIMBKEDSPIGILTWVKPDAVQKFXCHBR");

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
    msg.setTimeStamp(0.3621878150113075);
    msg.setSource(61715U);
    msg.setSourceEntity(120U);
    msg.setDestination(59144U);
    msg.setDestinationEntity(73U);
    msg.topic.assign("BUIBVFRBTQSCYEMMEXNJCSLJSEJYGDCWTQHMNLXKBHHQRRWGQHFIAKXCOEAQPNCKFAODRWIIXPOQBXMVCZFPDUUJTAYSYEFCD");
    msg.data.assign("QQECMFRWYUZCQHYZNJDOVNJGMKTYEOXCENWWQKMPPNFCJARKSXRGAHIAUNTHMSFWOZWDPQPIYJLNQNVZVTDSYNLLBYGDHMHGDXRUIFTINBJMOWLHRIWXQPCICFEHSOGKEMQBWTPACSQTLAZGTKHFZSJFOCTRKGPZVVSN");

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
    msg.setTimeStamp(0.6299364443393498);
    msg.setSource(14386U);
    msg.setSourceEntity(181U);
    msg.setDestination(40175U);
    msg.setDestinationEntity(27U);
    msg.topic.assign("ETWXTQUKLQKGLAOPRXLDUBSKRRZCYCKFGFTPBGFUPADHGCZQVMTFKMISDRLEEFSJQXMZJNUAORCHTYKBDFXXOYXHPNSWNVNEVHBVGKJJLOURYFGZBYDIPCDASXDZURJWHJCRWJNEGCOAGTPPKWEXSUQDSYNTIBSMIWMNSGXPQFVCOJCIKGOJZLOMEIQYUTODLVBVDTZFHMLRJEZYAISBX");
    msg.data.assign("EOUVGTFFUIJSBDHEYQCONIFZKJAZUULEPFYKANBJTREJNYXLNWCTBSMXOPZQVGLALVEGRLAVMDJHJMWBRXRDTBOTHNTBASPYHXWSQZDBLSQIZZIEUWJLGQOYXIMMSKRVPCUAUDUFORZAKGKDKVINFUOYDWHTNDLQIJJXGPNHPWLSZDAMVRYHPCIPVMEMBBTCRWHSXEHPQGBQZKFIQGNXEYTKCMCADZJUVAQCTWSFOYGMEN");

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
    msg.setTimeStamp(0.31123060791958324);
    msg.setSource(20452U);
    msg.setSourceEntity(105U);
    msg.setDestination(20150U);
    msg.setDestinationEntity(73U);
    msg.frameid = 166U;
    const char tmp_msg_0[] = {76, 56, -5, -15, -36, -17, -35, -8, 55, -32, 92, 7, 95, -50, 60, 72, -46, 109, -18, -108, -89, 65, -30, -25, -18, 80, -40, -50, 110, 61, 20, 99, -97, -108, 87, 56, 39, -95, -104, -79, -60, -18, -41, -118, -13, 23, -50, -34, 59, -69, 16, 113, -43, 118, 44, -125, -79, 15, 21, 66, -2, 89, -59, -72, -102, 20, 34, -83, 75, -26, -20, 70, -107, 109, 28, -54, -67, 11, -67, 103, -123, -8, -77, -11, -108, -122, 60, 22, -110, -71, -109, 11, -42, 69, 3, -32, 99, -53, 37, -12, 82, 49, 101, 54, -29, 51, 3, -119, 96, 53, 120, 55, 14, -67, -78, -118, 23, -22, -53, -31, 38, 2, 23, -68, 57, 82, -97, 26, 75, -54, 73, 40, -70, -19, -34, -68, 37, 48, 59, 107, 81, -109, -111, 94, -114, -114, -118, 1, -126, -111, -13, -126, 7, -87, 49, -65, 107, 103, -31, 79, -116, 42, 37, 108, 24, 6, 59, -32, 39, 124, 42, -114, 6, -113, 110, 91, -48, 91, 110, 95, 66, 11, 63};
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
    msg.setTimeStamp(0.7766549539628548);
    msg.setSource(37068U);
    msg.setSourceEntity(64U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(181U);
    msg.frameid = 170U;
    const char tmp_msg_0[] = {-60, 110, 122, 96, -55, 33, 34, -123, -41, -115, -100, 24, -56, 112, 122, -58, -11, -15, 79, 56, -67, -119, -27, 100, -127, -40, 103, -51, -5, -80, 112, 105, 19, 70, 48, -52, -127, 121, -10, 114, 47, -95, -27, -127, -67, 74, -97, -78, 81, 15, 65, -23, -88, 64, 60, -1, 21, 101, 58, 100, -71, -103, 78, 54, -91, -58, -28, 77, -46, -68, 39, -25, -117, 22, 52, 117, -118, 105, -2, 54, -117, 95, -42, 121, 54, 68, 117, 80, 15, -13, 71, -83, 0, 74, 33, 115, 91, 13, -115, -120, 105, 2, -35, -96, 63, -12, -51, -30, 125, 79, 104, 42, -16, 103, 41, -116, 34, 0, -5, -68, 41, 28, -43, 54, 38, -92, -39, 85, 90, 9, 55, 116, 92, -36, -114, 111, 25};
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
    msg.setTimeStamp(0.06387608072988071);
    msg.setSource(60864U);
    msg.setSourceEntity(155U);
    msg.setDestination(16580U);
    msg.setDestinationEntity(125U);
    msg.frameid = 161U;
    const char tmp_msg_0[] = {-87, -98, 27, -94, 83, 89, 98, -45, -60, 12, 115, 77, -106, -20, -76, -70, -35, 46, -15, 25, 27, -83, 110, 92, 89, -10, -76, 22, 11, -20, -79, -20, 107, -10, -16, -55, 6, -9, -63, 41, -15, 9, 79, 19, 58, 122, -79, 66, -80, 3, -117, 125, -77, 32, -53, -58, 32};
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
    msg.setTimeStamp(0.3303056487880768);
    msg.setSource(55009U);
    msg.setSourceEntity(202U);
    msg.setDestination(13323U);
    msg.setDestinationEntity(78U);
    msg.fps = 110U;
    msg.quality = 175U;
    msg.reps = 45U;
    msg.tsize = 143U;

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
    msg.setTimeStamp(0.7674945784513159);
    msg.setSource(39270U);
    msg.setSourceEntity(199U);
    msg.setDestination(57281U);
    msg.setDestinationEntity(93U);
    msg.fps = 22U;
    msg.quality = 80U;
    msg.reps = 222U;
    msg.tsize = 58U;

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
    msg.setTimeStamp(0.2319764844758776);
    msg.setSource(50897U);
    msg.setSourceEntity(170U);
    msg.setDestination(60001U);
    msg.setDestinationEntity(102U);
    msg.fps = 129U;
    msg.quality = 81U;
    msg.reps = 99U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.0070404069384201184);
    msg.setSource(27765U);
    msg.setSourceEntity(206U);
    msg.setDestination(49063U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.8368801563045106;
    msg.lon = 0.005889886287412827;
    msg.depth = 88U;
    msg.speed = 0.575083048923334;
    msg.psi = 0.8489571078031483;

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
    msg.setTimeStamp(0.5214216850572995);
    msg.setSource(33389U);
    msg.setSourceEntity(197U);
    msg.setDestination(16880U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.051881447079955456;
    msg.lon = 0.1890407649050755;
    msg.depth = 221U;
    msg.speed = 0.36878835075448835;
    msg.psi = 0.398091635769234;

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
    msg.setTimeStamp(0.32491988917694303);
    msg.setSource(62848U);
    msg.setSourceEntity(242U);
    msg.setDestination(11430U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.7114023866326193;
    msg.lon = 0.8353434181893229;
    msg.depth = 45U;
    msg.speed = 0.519037288038157;
    msg.psi = 0.6357923247334237;

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
    msg.setTimeStamp(0.6298882989897022);
    msg.setSource(26379U);
    msg.setSourceEntity(123U);
    msg.setDestination(16401U);
    msg.setDestinationEntity(112U);
    msg.label.assign("QILYLYWXENTALBIWIVVPFIBXMCEUDKCRGIFBMFPLSSLIAFRNMXBCKFXKPHDXJRGOJVAEPWDDODUTXMMJMKWURTEVKHRDHPJRTCZCBZWUMSRRFQYGXQOLGKLZWZOAPEYFQXGHCOKQDJTRDTJWCJTEBPPNBNTCSZAYLVHCVZXYHQGJGADJMNMCIUBRSVHSAVEJQAWUEHHTQSNPSZKZPIYOFLFYIYUWHAGNDUUWUOTQEOQNMKBZEBIZVYAFV");
    msg.lat = 0.13657662325850217;
    msg.lon = 0.5269760303204694;
    msg.z = 0.8718305984115342;
    msg.z_units = 37U;
    msg.cog = 0.15578726027736756;
    msg.sog = 0.19204738609948768;

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
    msg.setTimeStamp(0.05961710169225076);
    msg.setSource(10684U);
    msg.setSourceEntity(193U);
    msg.setDestination(24027U);
    msg.setDestinationEntity(193U);
    msg.label.assign("BGPIOOIUWCWUCPBJORUQHLXXLHKANSVUTPJRSQCDVEETARTODYZXITFRIQOQAEXFDOGWWBGNGYPHYXCRPNNIMRELIGWZJWEQSVZKHYBVTAPBHBQMOUZEOQSMCJBWRVKFSTUGSNWGYGDMYDCLWKCQHRFFINCCBXNBYMKFUHZQLCSDNTKFLODHDYTVEMULJXKFLGUXODJIMEVMHKXZAFVSHQAZEINZJLSSJRJDYIKPANZGTUPXPAL");
    msg.lat = 0.014343393958302864;
    msg.lon = 0.8881291033747891;
    msg.z = 0.6079450321790738;
    msg.z_units = 4U;
    msg.cog = 0.42488996131322954;
    msg.sog = 0.5857223028268224;

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
    msg.setTimeStamp(0.25632985127376273);
    msg.setSource(33591U);
    msg.setSourceEntity(8U);
    msg.setDestination(36129U);
    msg.setDestinationEntity(209U);
    msg.label.assign("GFVRFZUQRKVLBLOKAKMCLONTZOBNYUTRDXQSWHJFGINVNRCRQCIIHWFXYRIHNJDPTVNEZHFYHYXZUGEFGILZHXVQWRTKFTTAIRCNL");
    msg.lat = 0.2506555450292328;
    msg.lon = 0.7769311190167824;
    msg.z = 0.14694356320523105;
    msg.z_units = 101U;
    msg.cog = 0.12286113442979651;
    msg.sog = 0.5192826077510637;

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
    msg.setTimeStamp(0.826404640178388);
    msg.setSource(10194U);
    msg.setSourceEntity(3U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(25U);
    msg.name.assign("XARNNBDCWBFQNZNUFIZAWOLFNZCBTNJBHHQGOHYPSTDMXRZWDLAMMYISAWRQUO");
    msg.value.assign("FDNXWPVPMXGKPWGCWYCUKLUOJDYGJLZCJBBHJNAVVVERLRCNWBUWFSUGHIUXNMRFPKAXEJBALXQYSSZWVHEPPXZIVJEMEDDQPEOUGAXMWKIN");

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
    msg.setTimeStamp(0.26913201965052536);
    msg.setSource(11316U);
    msg.setSourceEntity(44U);
    msg.setDestination(10681U);
    msg.setDestinationEntity(17U);
    msg.name.assign("VUAUIHKMWCIOXBGKPQKGRZTVQIXEJKLQYRBDTDURXOACFHIFFMYMUNNXYPPHAPCNJWSVIQKMLUBFJSXUZHRSFNEBVODOONJGSWBPTWQYNOQLOXLWEBS");
    msg.value.assign("NQKKBZACUTBEDBPCEOSSUVPIZRWMNWWYAHNMWLSNWTTCZBNGKIXAJSKHA");

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
    msg.setTimeStamp(0.48806150177955154);
    msg.setSource(21837U);
    msg.setSourceEntity(27U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(219U);
    msg.name.assign("FQDJXGMQULEDKUADYUGQRJMWLTFWKKECHTYIBYEUJLJPPXLZHGHXJLNKY");
    msg.value.assign("IEOBKOLKSECFXTPCYBPCATVFERWTKRKFL");

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
    msg.setTimeStamp(0.35427448191561184);
    msg.setSource(30277U);
    msg.setSourceEntity(223U);
    msg.setDestination(36251U);
    msg.setDestinationEntity(137U);
    msg.name.assign("AVICKPWGNPYHQECIABTRGFDFQCQRBDMCWXPKEYMPTVVYHYDIEAMLFOCJDVOEZWTYQDMWTYYRDLCSNJPGGDXLHMKUVHOXOWZJSBWTAVVHANXERLHZYJULKQLGKIVRDQGOMSBMBNBYUSRIUJFGWGOJKFKSUJRPNVREGXOOZCZHTUIKFCLMFOJACWYQISITULFABZZHBQNMBSFIWLHEBXJUREE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GDKTOUKCPFUBAIGZHWBMIDEBXSVAIKOSUOMFJUAYPEIHVJXYTGVPANGGWHHPSAFYXEUWSYWGRIRFFKJUOSJOMMZVYYBQFWITZQPACXCKNQCLCSHLTHZFHLCOKVBRBKMMGLAWNMPV");
    tmp_msg_0.value.assign("BWMYHNSQYXCOXUCFPQKSHBLNIIOQRMIAWUCJCIDKTRKUDJADVSZFDVKUINJJHSXMCANAGIBZMROGIIGOTMAU");
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
    msg.setTimeStamp(0.5870003266494755);
    msg.setSource(58413U);
    msg.setSourceEntity(254U);
    msg.setDestination(22752U);
    msg.setDestinationEntity(87U);
    msg.name.assign("TEVPSLYKBUHPMLTGEFPVXDHUUQISNXWBMXABHZYGXNKKNABRIKNAUECILMCYCGZCYQKIPFVVAJSGHWHXNGMSLEUGGKOADIUMABOHAAMNULDJQYJPKFIWIOTSNPERDFWRRNYKXWQHEWBRVBZXKECOCGJFCYHTTZYIFSPTXEBOARXJ");

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
    msg.setTimeStamp(0.3300544111699787);
    msg.setSource(62448U);
    msg.setSourceEntity(5U);
    msg.setDestination(33U);
    msg.setDestinationEntity(42U);
    msg.name.assign("FQLPMKSOMTXSEPZNHPZUFGXIXXYIBVLVHENZWYUADZWFNPZDRGRQHUBNDBPWLAOBOPXAOJV");

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
    msg.setTimeStamp(0.9138929476878594);
    msg.setSource(39669U);
    msg.setSourceEntity(147U);
    msg.setDestination(59312U);
    msg.setDestinationEntity(241U);
    msg.name.assign("HOQPHQBKCMOKIULWMXVGUCEGBVEDGMKJNJTKLCMZTH");
    msg.visibility.assign("TXWEPTJLAFHBMGHVDFSVMOLZKCYNKUJVLJNFESOQQLEIORPESXYUJXAEZHHQLRLOSGAERDSRGZSUCDVYVLPRDYTWBBPVXNGHPNHDTKMTUCDBSJJVYIOZKOWCIXMDGTQSZRENUEMUAYDLIHJKAXMHIMXRHAQBFWWNZFWVZDTOIWARYJRPFPJVGZIFCGYJMFYCNLXUQFQQCOVMQXPCNDHUNEGWTLKRMYCTIIGZXSPWPAOZBQKNACEIO");
    msg.scope.assign("QWMWWQZJLVIEQNLBOREAOPDFKVHFLSKPIIANVWVUDXQGSUGMRXRTADAANSMMQPHUMEATSARYNTTUDQBS");

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
    msg.setTimeStamp(0.11812726530008544);
    msg.setSource(16653U);
    msg.setSourceEntity(210U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(113U);
    msg.name.assign("VYXZXDWZKFRFTMQQCSVPYDZUIFXWKQEKOJQLGGDBMDHELPTBKMLMVRSPUOZBNSXNFECJUNDIRAHLNHZCSSOLKAOOBPMMYALAACNVPLTHVNRIPSDJKGUFBLAHWWZTSHEZFOUPEMURNCJYREEBJVQUSBJMVTIIKTDPHWMAGZDIWVOLHGQTDEXXRBWUCALYGXKTYWEOJFJMCIDGGAPNCVIXQTIRYPZSGWQTIREXXBYCQYFUZVAOKHHWQU");
    msg.visibility.assign("TOEORFPQHCKSQWUHXQUXNNLCADKQSVKBPSYZSDUSXYJOQHLGLOFTMGSWOCYMBMJGIJHNZWMVZIZSMDJOHRCXPZIBKVPERWTVKSYAJSESUIUBLHNDZAEERKOGUXYNXBTUFLQWNQPNYBVVJILBVRKPLFAUTLKEGZZKTYQADHHZWHEWAFHVCERDATDLCYMQRTODWPCKLTJMJCFXYPQUYIXMZ");
    msg.scope.assign("KUBDZOGIMXMVIXEKEWNVBVWREEICUEVPCDSYOJWHBVCNTSYGNRAGYEYOUHKRFYVDFUFSLAMSNZCDJZSDCOWDJRXSTJLPQPRDBQRTLCIQXOKIUMHSRWNBCGDYHHKCXNOYADOZFPYQLQQQHGWXSKUBSQWZBCFNOPLJPNTZTWVAJTYHRJPXUMIVOJLGAQIAUEKZABMWGXLXUHESXFKLGMTAYLAVZINRMFMQFNPROWFPEBTITE");

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
    msg.setTimeStamp(0.7850309756004911);
    msg.setSource(33366U);
    msg.setSourceEntity(1U);
    msg.setDestination(11773U);
    msg.setDestinationEntity(85U);
    msg.name.assign("THKIHHKDWTNQGYJXRSFTOYMCEDLRHAJZCAUGLOSQWGQAZSFVABXIMMORGYISJVNFIMDFVTWYRZMNRUXLKGZGHRDSLJQEETZKVRXQWPEIOYSXUGPJDWZCPLRNTPVWBSUNVSDOHMXFKFEWVUFPCTGYXAYPLPHCIOOIQMREIQMFWKKHBECDBXDGVBYQAAJZNNLUTLNJEYUXNWGUYWQUZTVOIBPCMLXFAB");
    msg.visibility.assign("HWZJMQNBJGYHVWCSFDWQEMQFABZUMPWTLPZNNUAYFWIOAVDYUZBUMMJNIKGMHWBOFSKLWVXOHSVUXBGTIIZUFPVLNOKAXYPEEDHCGGHYSZLUQRIPNTJXBDKXCLJQCPONEFMBIRRFHSF");
    msg.scope.assign("YRKWSYLQGAXQBYSZLRGXWGEZXWZGOEBMDQHKVHYQKMXDTEIUQEYZIAAFEKAJLCTCRZVSXOHSFCAXSZIANSUBIUXJMUVNLSDFBHXQUQCIDPWIRCWRPOGJVJIADRNHBTEYFPBZSEHFONLJWFLPMNFPFKHJBBVBDYRATKYXTVCWUUDBGWMKOJRSMLAJDUOAKZPLSFJFYDUTIGRPLNCEVYONOCCJQWIIMXMTNOE");

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
    msg.setTimeStamp(0.25116235596899605);
    msg.setSource(23683U);
    msg.setSourceEntity(148U);
    msg.setDestination(20848U);
    msg.setDestinationEntity(124U);
    msg.name.assign("MTPOAOFDKPLS");

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
    msg.setTimeStamp(0.8667400326128151);
    msg.setSource(20400U);
    msg.setSourceEntity(95U);
    msg.setDestination(61163U);
    msg.setDestinationEntity(26U);
    msg.name.assign("XTESVWFLQSCOXXK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IVQBVQNCZSWYLOMIGCBOXFWMHGBJDKQGRLKOARICTNOTQQJEKQIDKFBWGUOXPKIQBMZWTSERULNVAVUIVSAJZOEFSYAAYZHHZXBUDQXCLHUEPCLDUPENGNHRMFKTJKMQDFDWEYFOKRCEG");
    tmp_msg_0.value.assign("GPFGERBWKNDGPIHBSBHOYDMVHUBWAFDHTWSWPMQEXYZGHSOLLBWWDVUSFLKTGXONFHRKNQLDOXLGARZJCOF");
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
    msg.setTimeStamp(0.4368980135495423);
    msg.setSource(40385U);
    msg.setSourceEntity(116U);
    msg.setDestination(29129U);
    msg.setDestinationEntity(183U);
    msg.name.assign("CHYAPMLBVZKEMCEHBZXOHQFQTIQNUUJKKIYWVWGKZCFMUXWYUXGBIUIEYFXRXZSWTFMOEGDOERDLZYOYPXROXHHPTDKGVJTHSCQSHFIWPBUWCUTMDCEZVKRQSPHHLMBGJPKJRBVZAUNXJDQGKTFGOHYWQAXTUYJLEMTYFAPISZEMLFIJWWNFFZCTQBD");

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
    msg.setTimeStamp(0.5308942543395639);
    msg.setSource(61647U);
    msg.setSourceEntity(156U);
    msg.setDestination(840U);
    msg.setDestinationEntity(192U);
    msg.name.assign("BLFOINDWDZHIOYKAVABTBZYQJGMPIVWICQADPXQKYZSKSIVZJRHSDXLUCJCBSZORCTAFHKVUJYZKXYFIEUPNTUFYNUKJHFMVCCNOMOTVAUGRAXAXHMYRGWTELTEWHJJRWPRQMPIHFZWCGEUNUMBNASCEBUCRSRASPKIDLMXGQLTYTDUXOSTRGKDLQVEQGXVOBWPDQYLPTBPOREFGDQHWVIEVOJMWSFNLHMDOCZYBEJAGSEKNHNKGLMWPFL");

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
    msg.setTimeStamp(0.4736289409135708);
    msg.setSource(46916U);
    msg.setSourceEntity(181U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(148U);
    msg.name.assign("EZQBQAMAYKXBULOBSVPKIWBCIBTUACYFACNOQLZLVRFGRSDVOYYLSEVINHFLNPJKUDPCRQBPEKDKPCSROUQZXABILDPPVZTLUTJEXXJFMWSVWHZDIHOMZXPNWOHAHGINKQABAIXHJUYGCAENQRVOMGTVNFMNNTHMCTCBRAYEMQLFVYYJRJETGRXFJMZOYGWHEZGGSLQGBSFWRFZZEGPHUSWMCIOJCTSESJHM");

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
    msg.setTimeStamp(0.122637157725481);
    msg.setSource(63657U);
    msg.setSourceEntity(57U);
    msg.setDestination(26887U);
    msg.setDestinationEntity(226U);
    msg.name.assign("SJBGVIUALKALUMRZQJUTWVHRKTRDFAPYNDEUSVVRXTWYXOIYKRKIUYXIWIMGPUROGTAGOPCNQTSUBPF");

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
    msg.setTimeStamp(0.024746975577005115);
    msg.setSource(43156U);
    msg.setSourceEntity(130U);
    msg.setDestination(47458U);
    msg.setDestinationEntity(227U);
    msg.timeout = 4101529454U;

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
    msg.setTimeStamp(0.23745898171094726);
    msg.setSource(39370U);
    msg.setSourceEntity(172U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(172U);
    msg.timeout = 1573787967U;

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
    msg.setTimeStamp(0.16742304477249126);
    msg.setSource(36635U);
    msg.setSourceEntity(153U);
    msg.setDestination(52391U);
    msg.setDestinationEntity(201U);
    msg.timeout = 739586663U;

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
    msg.setTimeStamp(0.28112883027022817);
    msg.setSource(52642U);
    msg.setSourceEntity(60U);
    msg.setDestination(55010U);
    msg.setDestinationEntity(175U);
    msg.sessid = 4268907642U;

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
    msg.setTimeStamp(0.04175713591400809);
    msg.setSource(13353U);
    msg.setSourceEntity(186U);
    msg.setDestination(8273U);
    msg.setDestinationEntity(90U);
    msg.sessid = 2026987172U;

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
    msg.setTimeStamp(0.03419224112215702);
    msg.setSource(12535U);
    msg.setSourceEntity(231U);
    msg.setDestination(22827U);
    msg.setDestinationEntity(45U);
    msg.sessid = 2765897444U;

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
    msg.setTimeStamp(0.6246663014397943);
    msg.setSource(55969U);
    msg.setSourceEntity(208U);
    msg.setDestination(11305U);
    msg.setDestinationEntity(60U);
    msg.sessid = 1986124951U;
    msg.messages.assign("BWELZCKLLQPFJQEPNGJITFFOBUWLHUZCISZUJMLBHIBMHAGIAYDZFJGQXVNPPCGDXHNMIHXPKYSVRROLDCLMQKNNZGOYWEAGSDCFNOYCREGOGVEMBWUURYBVPOFOANHATADXKCJSL");

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
    msg.setTimeStamp(0.6181419508709591);
    msg.setSource(50182U);
    msg.setSourceEntity(130U);
    msg.setDestination(12289U);
    msg.setDestinationEntity(132U);
    msg.sessid = 572316352U;
    msg.messages.assign("AOLVYKGWHHALZMCTSPSEVIXVHQPTCSGWVZHWJPTHNGWGUYEWECZDKROWXCYZKIMVKHRCAZRNQJHMAKQOXDKLDOAMOPZWRITFLRHNYTIYRLDGPWYPDFBMNZVAPCKHTGFQU");

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
    msg.setTimeStamp(0.8547238298718985);
    msg.setSource(56951U);
    msg.setSourceEntity(91U);
    msg.setDestination(57546U);
    msg.setDestinationEntity(46U);
    msg.sessid = 869638352U;
    msg.messages.assign("CYEZUXMCQGLGSACXSQQRKYD");

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
    msg.setTimeStamp(0.5628875200125091);
    msg.setSource(34970U);
    msg.setSourceEntity(147U);
    msg.setDestination(6195U);
    msg.setDestinationEntity(240U);
    msg.sessid = 3323260610U;

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
    msg.setTimeStamp(0.8066901656527209);
    msg.setSource(16540U);
    msg.setSourceEntity(44U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(13U);
    msg.sessid = 4050729263U;

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
    msg.setTimeStamp(0.04318734114182121);
    msg.setSource(28248U);
    msg.setSourceEntity(156U);
    msg.setDestination(44450U);
    msg.setDestinationEntity(146U);
    msg.sessid = 1045455336U;

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
    msg.setTimeStamp(0.12078717680928608);
    msg.setSource(42296U);
    msg.setSourceEntity(109U);
    msg.setDestination(31823U);
    msg.setDestinationEntity(235U);
    msg.sessid = 718144702U;
    msg.status = 40U;

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
    msg.setTimeStamp(0.9231684339731779);
    msg.setSource(4035U);
    msg.setSourceEntity(153U);
    msg.setDestination(17282U);
    msg.setDestinationEntity(225U);
    msg.sessid = 3014149415U;
    msg.status = 176U;

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
    msg.setTimeStamp(0.18492580075060183);
    msg.setSource(54112U);
    msg.setSourceEntity(218U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(128U);
    msg.sessid = 2288625989U;
    msg.status = 99U;

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
    msg.setTimeStamp(0.06882672166766568);
    msg.setSource(15146U);
    msg.setSourceEntity(169U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(198U);
    msg.name.assign("KWAVGMHSILDDUAYMZQEHGLKBMKZGROQVAOVEBJRYNLXCCISATVADKTEWPYNWHLGCWOHPVBAIJOYZFQFVWUBYQHSRIPALKNRIFINTT");

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
    msg.setTimeStamp(0.46027086512690085);
    msg.setSource(30614U);
    msg.setSourceEntity(97U);
    msg.setDestination(37069U);
    msg.setDestinationEntity(248U);
    msg.name.assign("MVJZDUBRYBXSCCIFPKASCZPYTVAJZWJWZNTPQQRDYHEHXRGVQJRHAOXGHVWMKBKLZNVBGCYCQXIBDXHYKKTAQUFGJJENVTLMPEUVYIOFRFOSXST");

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
    msg.setTimeStamp(0.12397857795449829);
    msg.setSource(19365U);
    msg.setSourceEntity(189U);
    msg.setDestination(18898U);
    msg.setDestinationEntity(151U);
    msg.name.assign("UQWOVJQTLUHBQHUKYXEXCEUDLELXZAZUUWNXURACTQCKJSFTHGHMBCGNOOLOSSIFABOFLHNKGQRPFZSDJIGDSSPJWPOIEDPEZQKYHCTVXXWRBIIBMBXYFKJVKVYLWZSZHPLEFFYDETMCYKRQIFIRDUWRPQBEVJOXHRGANOYNGUDYSDVGRCLRTKFDQIAZVTQKVNXYASEOIWPBDMLWBMANNXTGMKNJGMYSIRZVCPALPHGPEOWTCCMTMFANVJAWZ");

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
    msg.setTimeStamp(0.06806847189546594);
    msg.setSource(18529U);
    msg.setSourceEntity(180U);
    msg.setDestination(58003U);
    msg.setDestinationEntity(24U);
    msg.name.assign("PUDDVUUCNTYSFIOGZPWUYVOLALKMCATTNWSPSHIDKOZPHWAXRLCEUWGFISZDVWQELNHVVIYYJYHFFGGUFBGQ");

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
    msg.setTimeStamp(0.0933438177762933);
    msg.setSource(11341U);
    msg.setSourceEntity(122U);
    msg.setDestination(52413U);
    msg.setDestinationEntity(51U);
    msg.name.assign("RBSYAOCRDTLTLIJAXOVCBERIXEQKUAJANAKIWHCXPOCZOFGFOHIUWXEBEFLYGCNTYPLWWMYVWNYSKFMGGJZKLZTGQCZXNYIQGPXTDQHIDPYPYSKXIDBBWGYVGARTFUZKJFHRNLCQSMUOXVHPMUCRWDFNMJPKINSPDEBNEVBRRSVSHSKQKEMPMU");

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
    msg.setTimeStamp(0.7532156364049696);
    msg.setSource(46357U);
    msg.setSourceEntity(219U);
    msg.setDestination(8402U);
    msg.setDestinationEntity(242U);
    msg.name.assign("KOGOZBHFWRJFHCRDKCGVMMQINL");

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
    msg.setTimeStamp(0.888208830514917);
    msg.setSource(51274U);
    msg.setSourceEntity(129U);
    msg.setDestination(32621U);
    msg.setDestinationEntity(152U);
    msg.type = 170U;
    msg.error.assign("UINBYXVXIUMZIDDOOHCFHLTBCBLKNGGLGOYQPEGFPACIGNMSFVARZTYDNDSETXNHOAUBRHQFSWPJDYWGSHQFSRRIQZEYUTRODEEIDASZKSUVWDFKCEZTNPHGVHKOSTVJHCMUQFKQVCJZUIITMTSWUANNPSNJXKRWROZYMVAJJROEEXPGPKPMAULPLKRBCLUQCXLAWFYBXAXTMIJCMEN");

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
    msg.setTimeStamp(0.259111154819346);
    msg.setSource(38012U);
    msg.setSourceEntity(189U);
    msg.setDestination(6486U);
    msg.setDestinationEntity(245U);
    msg.type = 48U;
    msg.error.assign("LBOBGUECOWJOOJXZLLVVYTTMLRNKDSQDHAIBIDKVZNDWMAZUGBVATOJKXPTHZRPDBWPIFYAOUFGUMKPLIFKJZGSRIQAFLVCGLIYTHSQPPQDBTJUUYEVMKAFEXQM");

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
    msg.setTimeStamp(0.8326417855835664);
    msg.setSource(18395U);
    msg.setSourceEntity(253U);
    msg.setDestination(52039U);
    msg.setDestinationEntity(192U);
    msg.type = 121U;
    msg.error.assign("DKPBBPFVZNYQNQXYPSMHZDLTOIWYKSTCXVEYLFYITEFHCXAXABCVCELSNVLDBWLJDCRYHPWMUQMCFAHRPQRIVGVUAARKDOGRIRTGHSNJHBCZQIEOHONAJFIVPLQQ");

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
    msg.setTimeStamp(0.3892790527422576);
    msg.setSource(50089U);
    msg.setSourceEntity(27U);
    msg.setDestination(30699U);
    msg.setDestinationEntity(11U);
    msg.seq = 4745U;
    msg.sys_dst.assign("BJYSKJOAGQCMYJHOUXEOXQBLDAZNPZNTYYUFUADTOERJUUJNUPCGIAUIHVXCZQPEFJWGLSFPYAALEMBHKCHDHUCZDTQRKCTBVBGYMLPKHVLMBFDESFZXBSLQOWETBZFDDLWTNPRNDICSAIVYZDGQHUPSLQKJOMSXFTOSRVZQGBZWYUNEAXGSOXWTRRJZXKSIQQDHMCVJHWVINONTFKPIGAYCRKMGMIRJEFWWYLWGAOEXXHFVW");
    msg.flags = 77U;
    const char tmp_msg_0[] = {82, -55, -86, -72, -97, 12, -62, 36, -45, 24, 5, 71, -120, -76, -97, -38, 64, -1, -46, 41, 108, -92, -62, -105, 70, -43, -116, 36, -110, 9, 54, -108, 78, -99, 68, 37, -4, 74, 13, -10, -66, -114, 13, 36, -57, 27, -33, -14, 107, -49, 108, 73, -26, 31, 47, 102, 91, 122, 47, 26, -56, -96, 125, -68, -69, 58, -56, -89, -107, 108, 79, 56, 43, -41, 74, -46, 2, 98, 99, -116, -61, -55, -39, 49, 102, 64, -30, 101, -93, -23, 36, 42, 72, -36, 51, -37, 83, -67, -48, -25, 118, 105, -79, -125, -61, 2, -106, -65, -116, 7, 119, -99, -59, 8, -32, -78, -124, 71, 80};
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
    msg.setTimeStamp(0.4474044884131554);
    msg.setSource(62468U);
    msg.setSourceEntity(214U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(249U);
    msg.seq = 44211U;
    msg.sys_dst.assign("WOOIEZESQWRRHPNDQHBACIHKKUVGEHIBNFCNNXIEOKGMVLUSXMBUZZTPSFUSFJZJJZGBAYIFIHKWFDCSOBGUWUXYGVMLDZZXKUXYZ");
    msg.flags = 7U;
    const char tmp_msg_0[] = {117, 41, 5, 40, 124, 29, -97, -127, 56, 68, 10, -121, 28, 1, 29, -72, 63, 63, -53, -82, -37, -77, -11, 42, 113, 23, -60, 104, 16, 22, -12, 92, -117, -90, 81, 36, 16, -128, 99, -16, 116};
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
    msg.setTimeStamp(0.31986083157675715);
    msg.setSource(39482U);
    msg.setSourceEntity(149U);
    msg.setDestination(44463U);
    msg.setDestinationEntity(13U);
    msg.seq = 33095U;
    msg.sys_dst.assign("YFYDTCQBHKFGFGUERWVSCMIPNMTOIUDVEWNVNTWRYWFZFQKTSLVBCXHGBPBKDRZZRSCUZHOGIAJZLTWRAEZFAYPDQPLHJIHLQKPTFMQLDTUCXNUVGVAVCRRMUIYMJXNNPQSHKAZEQXSCDOUGOXGVJIKJOLAXYIUDECLEZNQIAMTZEOSAPBEPGSWXXBFHOWBKRKFPH");
    msg.flags = 97U;
    const char tmp_msg_0[] = {-95, -72, -116, 42, 47, 39, 28, -40, -16, 84, -47, 26, -109, -89};
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
    msg.setTimeStamp(0.014748876704746894);
    msg.setSource(21198U);
    msg.setSourceEntity(214U);
    msg.setDestination(10206U);
    msg.setDestinationEntity(27U);
    msg.sys_src.assign("QIPGCSCGBJUBRAMWPOGTYUDWEPBRZCZMFEXMYGQEQAYYIIDIXAZBKYCWFTLKMXJCGMVMLPSRAGNBJLPDAEXJHNJHTZZLBOIHLINTTQKFHETZFHFSQGKEBNVS");
    msg.sys_dst.assign("NUJYGHCGAMGLTLXJVDPLMQHSSFJCKXBTWYTAMMJWDPBYIIAQXLRSRPKFRQSJNZDNFLCZNFJHSDLWDIRGEIKXQTBMKOPUBEHYDZVRVOQKOZUWDWYCXABVMSGOBQUTUKFLOPONJXVPAALJHYZVCHDXQREIGHFTGNSHJGNUEEPXIZUANOQREYNVMUDHMSREZXTIBZOIOKWTFYRBCXVYBSYASVNKQDUELKMTWUIOCWPQCRICAVPABHCJZEFMWEKZF");
    msg.flags = 137U;
    const char tmp_msg_0[] = {-2, 39, 64, 52, -110, 96, -77, -93, -10, 8, 43, -28, 50, 72, 50, -47, -7, 49, -41, 4, 0, 92, -15, 37, 12, -110, 82, -5, 28, 80, -28, 79, 47, -50, 75, 36, 37, -2, 97, 106, 108, -28, 56, -23, -62, 18, 62, -16, 54, 15, 106, 33, -97, -63, 75, 81, 63, 49, -106, 20, -99, -98, -106, -48, 36, 36, 56, 49, 64, 107, -59, -111, 95, 40, 83, 100, -74, -88, 87, 83, -78, -1, -78, -5, -114, -119, 109, -86, 88, 125, -105, -27, 45, 13, -67, -64, -17, 44, 89, 112, -16, -121, -119, 22, 106, 113, -56, -22, 9, 107, -125, 73, -71, -26, 77, -70, -95, -80, -33, -29, -127, 62, 104, -120, -82, -44, -47, 125, 109, 65, 21, 112, 119, 59, 70, 75, 86, 21, 2, -1, -43, 125, 65, 126, 74, 120, 98, 108, 17, 109, -55, -30, 54, 34, -124, -118, -43, -94, -14, 12, 98, 0, -15, 96, -23, 85, 79, 37, 116, 116, 69, -48, -115, 9, -85, 5, 72, 100, 11, 82, 31, 53, 119, 106, -107, -1, -57, 90, 0, -83, -65, -34, 34, 64, 78, 119, 56, 53, -7, 71, 58, -73, 96, -64, 22, -43, 114, 62, 22, 101, -128, 77};
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
    msg.setTimeStamp(0.9070866396158146);
    msg.setSource(23691U);
    msg.setSourceEntity(123U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("WIOEBMEUCDCKERCZAESTGBKFHJGSJQOPSJC");
    msg.sys_dst.assign("AFIFJNHOCFSPTCQBJIRFYUQHFEGHBHORBNLWFXZMVADQBJWSUIHANUFNSZCAUIGTEZGRKSATVWRVMFYDRTFTXNCZWYEQKXJYMTDECPPEVK");
    msg.flags = 238U;
    const char tmp_msg_0[] = {99, 10, -37, -120, 24, 25, -108, 35, 116, 44, -38, -58, 108, 31, 72, -102, -120, -21, 40, -8, -43, -75, 105, 15, -74, -45, 53, -19, -79, 108, -91, -73, 61, 41, -95, 6, 35, 30, 29, 52, -81, -14, 28, 53, -4, 66, 59, 12, 100, 77, -93, -48, -52, 74, 55, 103, -19, 66, -6, -119, -71, 59, 17, -64, 117, 19, 48, 53, 121, -42, -93, 95, -28, 125, 102, -76, 86, -47, 110, 90, 111, 11, 56, 3, 76, 123, 22, 72, -94, -43, 9, 55, 56, 5, -73, 79, -96, 77, 108, -93, -4, 42, 86, 3, 115, 118, 117, 40, -39, 28, 10, 34, 118, -104, -82, 90, -118, 115, 32, -95, 10, -90, 121, 86, -89, 70, -75, -32, 64, -43, 72, -67, 22, 64, 49, 77, -79, -3, 88, 41, 85, 92, -37, -24, 71, 22, -31, -46, 91, -125, -49, -53, -8, 123, -94, 17, -114, -84, 122, -47, -73, 93, 75, -90, -32, 23, 102, 67, -44, -36, -45, -96, -127, -87, -125, 61, 62, -70, 80, -87, 75, -101, -112, -19, -52, -95, -106, 120, -20, -89, -49};
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
    msg.setTimeStamp(0.6393858510333313);
    msg.setSource(24742U);
    msg.setSourceEntity(204U);
    msg.setDestination(50342U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("LFRMBQCLLIMMHWKAZBVEDDOSYYSDLHVNAEQOPQWGRHCSRAPTWMIRPWXPPVTNNIJBZSVDBHVJUSKRFEGQRAJNJIMUDOZVVXJIXYWOQSMZQYOSNIZKFZBRAMUZFLTYOGIGETNNNFEWPGYACYTBDOCKP");
    msg.sys_dst.assign("ZKVJDYOMHFTMXPNJSZJOYFXWBBSGOFSCOSXPEFSMYHYGTIORHXNAGQSDWKEHLCZXKRZNLJIDKCTUHPMURQUVFBDBDPKMMMWQGAENCOBTDIQWULZ");
    msg.flags = 110U;
    const char tmp_msg_0[] = {89, 28, 12, -49, -41, -61, -90, 46, -22, -47, 9, 56, -85, -32, -26, -91, 112, 6, -119, -29, 5, 57, -102, -64, -103, 11, 40, 55, 41, 17, -66, 62, -120, -107, -15, 31, -126, -63, -61, -123, 7, 102, -8, 89, -53, -61, -64, -11, -122, -44, -83, -13, 42, -64, 51, -8, -71, 107, -27, 55, 44, -46, 33, 56, 99, 0, 54, -15, -62, 102, -107, -128, -108, 16, 99, -35, -56, 91, 22, -64, -48, -56, -28, -97, 97, -92, -99, 52, -119, 73, 14, -118, -78, 123, 83, 65, -94, -69, -12, -1, -58, -42, -93, 46, -64, 121, 110, -54, -98, 113, -21, -48, 99, -34, -22, -119, -81, -36, 53, -55, 37, 17, 32, 74, 42, -2, 64, -34, -28, -123, -46, 110, -52, -111, 44, 113, 31, -92, 106, -105, -109, 7, -14, -100, 3, -72, -28, 100, -68, 48, -66, -34, -17, 119, 98, 15, 37, -122, 72, 41, -32, 24, -22, -51, 108, 9, 12, -14, -93, -9, 6, -14, 38, 102, 109, -75, -67, -46, 88, 55, 106, -55, 108, -41, -108, 99, -116, -54, -117, 27, 13, 58, 14, -84, 119, -28, 113, 5, -91, 64};
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
    msg.setTimeStamp(0.577504161617677);
    msg.setSource(18707U);
    msg.setSourceEntity(85U);
    msg.setDestination(62324U);
    msg.setDestinationEntity(123U);
    msg.seq = 32298U;
    msg.value = 67U;
    msg.error.assign("HXKAGQPIDGASSNWZIRIXVOCLOUUQZCPOWQCITMHYPUFULDLXEOEURMXRTGAQXLVGCFVXFBDPFMTUHBR");

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
    msg.setTimeStamp(0.023366066224530746);
    msg.setSource(14878U);
    msg.setSourceEntity(23U);
    msg.setDestination(43566U);
    msg.setDestinationEntity(64U);
    msg.seq = 16321U;
    msg.value = 67U;
    msg.error.assign("GLLENBRKNXLDBRUDBOHMYGMLFNUTDHZUWHKFQQXQJXFOIJEXYYSCJKDIMHUYSQSRXTVMIGPLMXOFBCOZNATIWJ");

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
    msg.setTimeStamp(0.7965953406115036);
    msg.setSource(21824U);
    msg.setSourceEntity(218U);
    msg.setDestination(17766U);
    msg.setDestinationEntity(23U);
    msg.seq = 36956U;
    msg.value = 190U;
    msg.error.assign("QNPZNNIWEUHQFZVWDIEWMMQTCWZYUBXNASLKHSIOUWHEYGBGDJWCBOTAAAOYICKCLTQGTPYHOHORUVCPRRRGJQSHZKAFSFNBLUIYXGHQIDUQSRDFMZREVPDUBTLBEJNWYQOZXCZZLYFDJBPQBAOXRNKVRPEPHDFCIOFMELABWPXXODQVXSFJIHYGNSTLMAYMGUIHNVVGJVGZTNCBTMRMFOTVEXCAWVFRAJXKSSIUKTWZLSEEPDJLDKMLYKXKG");

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
    msg.setTimeStamp(0.06463492812456795);
    msg.setSource(46867U);
    msg.setSourceEntity(160U);
    msg.setDestination(62523U);
    msg.setDestinationEntity(16U);
    msg.seq = 60868U;
    msg.sys.assign("HPGZFVBFHMENBXXLEGAHQOYSCFVVEWDYQONSYHSDFULBJHQDTAEOLGATVTMLUAYUPIXLMUOGLIQQBVDRPFPIFXAKWKXCIBKAJRKZFAPXWMBPPFCHDZQPIEXIROGYKDSCKRMPCMTCTRHFJCJTISGJZSMSNUJJKAHUNWUKYROFSWNWBVOXCGVZVQONLLVUCZNWWCEOXONXGZGHQBDDMKEBSIEYRLZ");
    msg.value = 0.6456156288441243;

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
    msg.setTimeStamp(0.15795220882489502);
    msg.setSource(40585U);
    msg.setSourceEntity(201U);
    msg.setDestination(6613U);
    msg.setDestinationEntity(228U);
    msg.seq = 59784U;
    msg.sys.assign("FSIMMQUCJXHWVPANERELYBALVHDVIERDGWNMORTYHTJSALKWVQKWLYAPRQDIMMNZYGCGPSPUCMXQFRCIRBAZEQARZZNCPNHZAPKGPKXOHITSBJIDWRQOITDOXMHLTOFKDUYGARKFXKPGKOVETHQQSGUFEJHXSTWPZYPLOLYYMFGSUSVZIUNVIUBZBZUNBTCBEBJVXJDBFWEZJEOOHQLYDQMXJTKVFDXSUJLHRUVKNEJNWXCAFYBICFCDOG");
    msg.value = 0.09510071836018053;

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
    msg.setTimeStamp(0.3886632288217774);
    msg.setSource(230U);
    msg.setSourceEntity(14U);
    msg.setDestination(3862U);
    msg.setDestinationEntity(141U);
    msg.seq = 4663U;
    msg.sys.assign("LIHRQXEVFDYUDGXPNOCCWPGBOHGEPQGCRKACTQZTTJMNWONGSVWELMIRFDQRYGFRVMWYWFWOECZKJITJJRMBNTQTKLEVXSASGIIIAZSDKBZBUQNNLYMLZQJMOHCKFBPSQVXAZSHAYOFHACGSFEYLGATYSMRFVNPLKDRXWPKVXUEMFLIPHQZRJDMUYHWEHWSUPUJUIVVK");
    msg.value = 0.3547583675319259;

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
    msg.setTimeStamp(0.548983006536115);
    msg.setSource(56667U);
    msg.setSourceEntity(12U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(67U);
    msg.action = 148U;
    msg.longain = 0.5381461897028516;
    msg.latgain = 0.24898031818235766;
    msg.bondthick = 1919899079U;
    msg.leadgain = 0.7383275448584492;
    msg.deconflgain = 0.9183816989884166;

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
    msg.setTimeStamp(0.78854502248994);
    msg.setSource(32742U);
    msg.setSourceEntity(31U);
    msg.setDestination(5503U);
    msg.setDestinationEntity(71U);
    msg.action = 160U;
    msg.longain = 0.951314914104912;
    msg.latgain = 0.22927973421837144;
    msg.bondthick = 405942234U;
    msg.leadgain = 0.8810408692474488;
    msg.deconflgain = 0.7738984977812047;

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
    msg.setTimeStamp(0.1906035858393461);
    msg.setSource(15265U);
    msg.setSourceEntity(93U);
    msg.setDestination(57511U);
    msg.setDestinationEntity(117U);
    msg.action = 165U;
    msg.longain = 0.46031699310801755;
    msg.latgain = 0.06737270651584648;
    msg.bondthick = 4200181073U;
    msg.leadgain = 0.8369306316346397;
    msg.deconflgain = 0.11619599408092929;

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
    msg.setTimeStamp(0.12106016846636725);
    msg.setSource(43884U);
    msg.setSourceEntity(162U);
    msg.setDestination(10526U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.41502672179021916;
    msg.dist_min_abs = 0.22466634893947646;
    msg.dist_min_mean = 0.9893799161752389;

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
    msg.setTimeStamp(0.5034305110523406);
    msg.setSource(20930U);
    msg.setSourceEntity(165U);
    msg.setDestination(1622U);
    msg.setDestinationEntity(220U);
    msg.err_mean = 0.5330335571851752;
    msg.dist_min_abs = 0.18426287874804526;
    msg.dist_min_mean = 0.5732741955509124;

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
    msg.setTimeStamp(0.5037488466406362);
    msg.setSource(15039U);
    msg.setSourceEntity(164U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(206U);
    msg.err_mean = 0.042948487042909655;
    msg.dist_min_abs = 0.8364761736851732;
    msg.dist_min_mean = 0.16465778198460534;

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
    msg.setTimeStamp(0.9496181133373665);
    msg.setSource(39311U);
    msg.setSourceEntity(96U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(119U);
    msg.action = 239U;
    msg.lon_gain = 0.04958353074748478;
    msg.lat_gain = 0.7188518530542914;
    msg.bond_thick = 0.9689565158619019;
    msg.lead_gain = 0.9920052633421949;
    msg.deconfl_gain = 0.026302048424567626;
    msg.accel_switch_gain = 0.6710295093670052;
    msg.safe_dist = 0.9193023366530712;
    msg.deconflict_offset = 0.05610759852503133;
    msg.accel_safe_margin = 0.7811020616311606;
    msg.accel_lim_x = 0.48979404682510963;

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
    msg.setTimeStamp(0.18616239419485492);
    msg.setSource(59133U);
    msg.setSourceEntity(54U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(39U);
    msg.action = 68U;
    msg.lon_gain = 0.9649528623439044;
    msg.lat_gain = 0.7439690798814209;
    msg.bond_thick = 0.3629527593156281;
    msg.lead_gain = 0.02985936533169431;
    msg.deconfl_gain = 0.47205692187406434;
    msg.accel_switch_gain = 0.9184472275377363;
    msg.safe_dist = 0.6646481023040376;
    msg.deconflict_offset = 0.06891415946541135;
    msg.accel_safe_margin = 0.26229328831804466;
    msg.accel_lim_x = 0.03919544995548574;

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
    msg.setTimeStamp(0.6091004915813123);
    msg.setSource(37393U);
    msg.setSourceEntity(47U);
    msg.setDestination(10655U);
    msg.setDestinationEntity(15U);
    msg.action = 105U;
    msg.lon_gain = 0.2721107560007233;
    msg.lat_gain = 0.7528476250265661;
    msg.bond_thick = 0.8942240840857167;
    msg.lead_gain = 0.16320448463578396;
    msg.deconfl_gain = 0.20059421950521117;
    msg.accel_switch_gain = 0.19055487098403068;
    msg.safe_dist = 0.8671943328450957;
    msg.deconflict_offset = 0.505121950308849;
    msg.accel_safe_margin = 0.9044889427464745;
    msg.accel_lim_x = 0.8485547096245958;

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
    msg.setTimeStamp(0.5130896764641246);
    msg.setSource(26633U);
    msg.setSourceEntity(63U);
    msg.setDestination(15120U);
    msg.setDestinationEntity(43U);
    msg.type = 158U;
    msg.op = 155U;
    msg.err_mean = 0.6711011258689814;
    msg.dist_min_abs = 0.0808943513759004;
    msg.dist_min_mean = 0.25285600561370325;
    msg.roll_rate_mean = 0.14103429662047873;
    msg.time = 0.5142322478699206;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 199U;
    tmp_msg_0.lon_gain = 0.5759184712845142;
    tmp_msg_0.lat_gain = 0.5099813672976604;
    tmp_msg_0.bond_thick = 0.7739920960008086;
    tmp_msg_0.lead_gain = 0.006209248250088839;
    tmp_msg_0.deconfl_gain = 0.37055383721377566;
    tmp_msg_0.accel_switch_gain = 0.9815312608071091;
    tmp_msg_0.safe_dist = 0.6788234200666636;
    tmp_msg_0.deconflict_offset = 0.9093986132964526;
    tmp_msg_0.accel_safe_margin = 0.1807700853553469;
    tmp_msg_0.accel_lim_x = 0.0690007656525995;
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
    msg.setTimeStamp(0.7871357253134464);
    msg.setSource(21510U);
    msg.setSourceEntity(12U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(232U);
    msg.type = 238U;
    msg.op = 14U;
    msg.err_mean = 0.5940562226368418;
    msg.dist_min_abs = 0.3998944073398367;
    msg.dist_min_mean = 0.7496047892275215;
    msg.roll_rate_mean = 0.9574886080589593;
    msg.time = 0.9725369929724933;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 22U;
    tmp_msg_0.lon_gain = 0.993752128279141;
    tmp_msg_0.lat_gain = 0.9635940161570721;
    tmp_msg_0.bond_thick = 0.4847075447794884;
    tmp_msg_0.lead_gain = 0.14868137209463506;
    tmp_msg_0.deconfl_gain = 0.18048378604335902;
    tmp_msg_0.accel_switch_gain = 0.029023769291089185;
    tmp_msg_0.safe_dist = 0.7712534366651544;
    tmp_msg_0.deconflict_offset = 0.676996444478315;
    tmp_msg_0.accel_safe_margin = 0.32709995839042627;
    tmp_msg_0.accel_lim_x = 0.9091453116310618;
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
    msg.setTimeStamp(0.08584465110686423);
    msg.setSource(15329U);
    msg.setSourceEntity(234U);
    msg.setDestination(52038U);
    msg.setDestinationEntity(135U);
    msg.type = 57U;
    msg.op = 54U;
    msg.err_mean = 0.021011268549876894;
    msg.dist_min_abs = 0.12332909358299815;
    msg.dist_min_mean = 0.6525980658849856;
    msg.roll_rate_mean = 0.7428968865571464;
    msg.time = 0.6621784122319953;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 73U;
    tmp_msg_0.lon_gain = 0.07019830956075901;
    tmp_msg_0.lat_gain = 0.8213335603137932;
    tmp_msg_0.bond_thick = 0.9340622340524536;
    tmp_msg_0.lead_gain = 0.5737165392646645;
    tmp_msg_0.deconfl_gain = 0.7541234787142358;
    tmp_msg_0.accel_switch_gain = 0.6026121240074802;
    tmp_msg_0.safe_dist = 0.9853587780085116;
    tmp_msg_0.deconflict_offset = 0.5639868201504922;
    tmp_msg_0.accel_safe_margin = 0.18506350222600743;
    tmp_msg_0.accel_lim_x = 0.11953670651242332;
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
    msg.setTimeStamp(0.3127815580046107);
    msg.setSource(42227U);
    msg.setSourceEntity(195U);
    msg.setDestination(8090U);
    msg.setDestinationEntity(189U);
    msg.uid = 70U;
    msg.frag_number = 53U;
    msg.num_frags = 44U;
    const char tmp_msg_0[] = {18, 98, 20, 5, 56, 90, -65, -15, 76, 52, 54, 110, 75, -99, -6, -31, -126, 54, 94, -44, 92, 24, -70, -57, 57, 105, -37, 97, 56, 81, 21, -106, 74, 35, 111, -116, 15, -105, -34, -114, -26, 124, 89, 20, -11, -92, 69, 60, -49, 35, 30, 67, -31, -21, 45};
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
    msg.setTimeStamp(0.855736569150608);
    msg.setSource(33462U);
    msg.setSourceEntity(212U);
    msg.setDestination(2653U);
    msg.setDestinationEntity(5U);
    msg.uid = 22U;
    msg.frag_number = 147U;
    msg.num_frags = 227U;
    const char tmp_msg_0[] = {62, -38, 59, 72, 101, 39, 22, 120, -17, 69, -32, 84, -106, 50, -91, 92, 81, 87, -36, -49, -41, 0, 74, 14, 98, -99, 77, 104, 115, -7, -8, -74, 36, 114, 114, -115, -14, 115, 96, -94, -68, -56, -94, -40, -62, 46, -17, 93, 106, 93, -26, -65, 33, -85, 69, 118, -116, -71, -57, 74, 15, 104, 23, 65, 1, 28, 86, -94, -48, 55, 14};
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
    msg.setTimeStamp(0.09851038754623664);
    msg.setSource(27198U);
    msg.setSourceEntity(2U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(201U);
    msg.uid = 133U;
    msg.frag_number = 225U;
    msg.num_frags = 80U;
    const char tmp_msg_0[] = {113, 77, -71, 6, 58, 35, 91, 16, 93, 86, -68, 38, 119, -97, 50, -86, 60, -17, -45, -108, 63, -69, -7, -30, -35, 91, -41, 97, 62, 65, 19, 42, -35, 109, -109, -84, -10, 72, -7, -61, -52, 98, -50, 50, 98, 21, -97, 41, -41, 90, 96, -89, -83, -113, -2, -122, -42, -11, 25, 8, 59, 107, -4, -36, 45, -121, 77, 0, -84, 92, -60, 73, -3, -50, 46, -50, -32, -60, 78, 7, 28, 12, -3, -18, -81, 89, -67, 55, -26, -90, -118, -49, -54, -15, -92, -15, 21, -33, 93, -19, -27, -80, 39, 110, -10, -16, -78, 76, -120, 46, 43, -27, -14, 29, 70, -8, -44, -82, 67, -75, -119, 8, 11, -22, -87, -76, 37, 57, -63, -126, -52, -21, 21, -8, -80, 100, 23, 14, -126, -3, -62, -84, -74, -103, 95, -118, -48, 44, 83, 8, -39, -114, -47, 60, -123, 94, 80, -68, -52, -112, -57, -47, 14, -128, -35, -93, 52, 24, -47, -108, 2, -83, -66, 36, 84, -36, 71, 116, 38, 126, -108, -84, -125, -78, 6, 80, -72, 37, -25, 82, -6, -88, 65, 62, -44, -97, -46, 123, 83, 27, 68, -13, -11, -6, -121, 116, -98, -45, 103, -88, 5, -27, -47, 51, 120, 29, -28, 57, -84, -96, 67, -90, 5, -87, -37, -109, 101, -17, 44, -119, -63, -110, -88, -109, -126, -1, -95, -102, -119, -33, 54, -7, 97, 64, -76, 119, 70, 65};
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
    msg.setTimeStamp(0.3564007401810829);
    msg.setSource(43939U);
    msg.setSourceEntity(86U);
    msg.setDestination(10945U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("LRLBWLWGTNIUOFQCAKKYWFFSHLHPEHYFJCOJIRTYZTNUFNWOKKRCBREZBJCYIHAYCPNORTGMFQIVEGVNOZBEAVABJOVOFXIIHJGYFEZDHPPZPHWUIFVU");
    const char tmp_msg_0[] = {103, -86, -24, 25, 92, -97, 109, -11, 34, 54, -105, -86, 30, 30, -112, -127, -45, -108, -77, 19, -48, -127, 16, -28, 97, -29, 54, -105, 16, -30, -52, 1, 77, -89, 35, 94, -101, -21, -51, 84, 89, 51, 85, -42, 114, -18, -95, -19, -99, 62, 42, -127, 108, -40, -59, 81, 54, -75, -95, -12, 60, -36, -121, -18, 73, -106, 111, -57, -83, -33, -77, -7, 83, -66, -31, 91, -1, 60, 84, 11, 44, -13, 29, -15, 8, -68, 93, -24, 23, -21, 59, 91, 110, 11, -111, 102, -124, 6, -82, -11, -21, 25, -85, -46, -43, -120, 24, 29, 36, -75, 35, -69, 22, 111, -34, 89, -92, -10, -2, 74, -43, 2, -114, -72, -109, -86, -43, 80, -95};
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
    msg.setTimeStamp(0.44512734869106296);
    msg.setSource(63395U);
    msg.setSourceEntity(67U);
    msg.setDestination(52987U);
    msg.setDestinationEntity(48U);
    msg.content_type.assign("PQTEQWMBSJUXZNRPQEONABDOLWAMJNZTRYYQHDNPWPHHTGBUZFSXDCVWJXSSTBUZVEGNJWISZWNRCAOTUOKNQJYPTHFCCYGMEBCEQPFBYDHCXIKLYLHQQWYBJIISEYGOFDUHUMPEGDBSXLHBVAZZFRKFMZUP");
    const char tmp_msg_0[] = {11, -107, -41, -111, 30, 11, -7, 106, 77, 117, -6, 90, 105, -105, -37, -26, -117, -94, 63, -91, -10, 48, 123, 37, -65, -26, -117, 10, 57, -18, -124, -32, 41, -60, -116, -28, 98, 92, -128, -81, -33, -89, 90, -16, -72, -105, -127, -5, 63, -119, -120, -75, -85, -78, 125, -120, -60, -108, -17, 57, 63, 103, 97, -15, 68, 19, 32, 121, 10, -124, 60, -102, 95, -61, -82, 59, 125, 63, -11, -104, 33, 50, -102, 96, -41, 122, -116, -96, 54, -9, 40, -27, -49, 84, 72, 81, -63, -49, -125, 56, -54, -110, 89, -74, 40, -14, -111, -78, -61, -24, -14, 44, -39, -123, 78, 97, -15, -4, 121, -103, -105, 105, -22, 7, 114, -96, -26, 124, -88, 108, 92, -56, 32, 15, -95, -64, 22, 70, 97, -117, 28, 22, -9, -1, -106, 44, -113, 107, 69, -112, 67, 38, 29, 82, -6, 57, -31, -55, -104, 25, 61, -15, -6, 112, -19, 58, -126, -41, 120, -35, 20, 14, 25, 11, 9, -63, 62, 48, 55, -118, -81, -92, -24, 10, 112, -9, 70, -120, -76, -103, 82, 13, -46, -110, 46, 70, 26, -114, -117, -128, 93, -66, 32, 14};
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
    msg.setTimeStamp(0.14764991501435532);
    msg.setSource(24139U);
    msg.setSourceEntity(0U);
    msg.setDestination(11059U);
    msg.setDestinationEntity(160U);
    msg.content_type.assign("CWVECMAIVNETBRNHXGGFMDLSUSYHHOWOVVMKCIMWLTPTGOXVHNIJZQSCWNXSPYKDEOPQRUIZKXGWZLGNFMDBZN");
    const char tmp_msg_0[] = {-106, -103, 20, -93, 8, -89, 64, -99, -74, -51, 8, 57, 33, 36, 42, -64, -78, 74, 89, -69, 121, -46, 73, 0, 39, -81, 71, 80, -46, 77, -125, 41, 92, 70, 79, 58, -118, -114, 34, 38, 57, -35, 113, 18, 95, 96, -46, -42, -19, 86, -22, 84, 1, 31, -52, 106, 35, -83, -90, 64, 70, 50, 113, 83, -124, -75, 26, 52, -14, -107, -114, -27, -24, 119, 55, 34, 106, 3, -97, -32, -63, 67, 80, -81, -39, 99, -87, -72, -22, -120, 123, 10, -12, 65, 38, 19, 9, -22, 37, -70, -62, 0, 102, -122, 50, 87, -121, -39, -15, 39, 79, -17, 36, 119, 44, 0, -54, 97, -59, -27, 56, 24, 35, -74, -97, -20, 32, 39, 8, 15, 68, -77, -44, -22, -11, 58, -64, 53, -31, -101, 98, -115, 119, -82, -87, -104, -55, 20, 113, 11, 5, -76, 61, -4, -39, -126, 50, 69, -20, -42, -75, -5, -74, 112, 111, -91, 31, 93, -2, -101, -106, -79, 99, 73, -65, 76, 48, -107, 32, -88, 44, 118, 72, 91, 122, -113, 52, -121, 40, 79, 11, -69, -52, -100, 5, -95, 102, 104, 47, 93, -73, -102, -41, -75, -97, 91, 0, -30, 23, 110, 49, -103, 76, 54, 55, 21, -73, 74, 9, 10, -100, -78, -99, 46, 101, -54, -112, 126};
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
    msg.setTimeStamp(0.0927863479564427);
    msg.setSource(14015U);
    msg.setSourceEntity(156U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.9086347717568607);
    msg.setSource(41279U);
    msg.setSourceEntity(233U);
    msg.setDestination(28602U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.9561699020408337);
    msg.setSource(38710U);
    msg.setSourceEntity(58U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.8871745306527434);
    msg.setSource(50086U);
    msg.setSourceEntity(175U);
    msg.setDestination(60192U);
    msg.setDestinationEntity(110U);
    msg.target = 59567U;
    msg.bearing = 0.31020209482687844;
    msg.elevation = 0.323595644698062;

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
    msg.setTimeStamp(0.37408700913207504);
    msg.setSource(50357U);
    msg.setSourceEntity(6U);
    msg.setDestination(62057U);
    msg.setDestinationEntity(209U);
    msg.target = 33323U;
    msg.bearing = 0.461367055359291;
    msg.elevation = 0.31157850611488846;

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
    msg.setTimeStamp(0.5870186373476713);
    msg.setSource(16677U);
    msg.setSourceEntity(131U);
    msg.setDestination(62546U);
    msg.setDestinationEntity(68U);
    msg.target = 35032U;
    msg.bearing = 0.3735361361140993;
    msg.elevation = 0.01512237321157861;

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
    msg.setTimeStamp(0.29783684220479645);
    msg.setSource(43494U);
    msg.setSourceEntity(226U);
    msg.setDestination(20162U);
    msg.setDestinationEntity(77U);
    msg.target = 64476U;
    msg.x = 0.22169379996498373;
    msg.y = 0.22591730153599787;
    msg.z = 0.25316334481863456;

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
    msg.setTimeStamp(0.5909341862288418);
    msg.setSource(36650U);
    msg.setSourceEntity(196U);
    msg.setDestination(17966U);
    msg.setDestinationEntity(95U);
    msg.target = 25417U;
    msg.x = 0.7775128881690055;
    msg.y = 0.8867283761844604;
    msg.z = 0.11005456343898035;

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
    msg.setTimeStamp(0.9455273299577797);
    msg.setSource(7672U);
    msg.setSourceEntity(253U);
    msg.setDestination(41934U);
    msg.setDestinationEntity(135U);
    msg.target = 8477U;
    msg.x = 0.7743698352721664;
    msg.y = 0.8252666513594623;
    msg.z = 0.4471875121240213;

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
    msg.setTimeStamp(0.11855293202721084);
    msg.setSource(53024U);
    msg.setSourceEntity(62U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(36U);
    msg.target = 49281U;
    msg.lat = 0.9095975247936882;
    msg.lon = 0.6462856193644857;
    msg.z_units = 118U;
    msg.z = 0.9656002616161433;

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
    msg.setTimeStamp(0.49636531811762175);
    msg.setSource(51455U);
    msg.setSourceEntity(98U);
    msg.setDestination(28341U);
    msg.setDestinationEntity(24U);
    msg.target = 31412U;
    msg.lat = 0.721847953148534;
    msg.lon = 0.8514170999391886;
    msg.z_units = 84U;
    msg.z = 0.5216829156511542;

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
    msg.setTimeStamp(0.4522187189177722);
    msg.setSource(38388U);
    msg.setSourceEntity(78U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(43U);
    msg.target = 55350U;
    msg.lat = 0.3576122653993439;
    msg.lon = 0.10097400948984903;
    msg.z_units = 211U;
    msg.z = 0.5981069766129418;

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
    msg.setTimeStamp(0.09146726175559361);
    msg.setSource(59926U);
    msg.setSourceEntity(29U);
    msg.setDestination(40816U);
    msg.setDestinationEntity(230U);
    msg.locale.assign("VEAJRMFRZNURWVWIAPHNJGCKHHNHEYGNXLANLEYTBGOVXKZLFMSIOHVCDKEQCDDFCHKBJRFMVEQQUKTPKJZWLOYXBNGILVVXHKGNZCWLFJYREZDTXFBEPEOESDAMXTBHUSQMUUSVBYKWIPUBMSRTQXTLROZOSPBUGWFZSJHILQRDVYZYYMCLAZTXPDTXUQSGITACJNMQUJGRPZIBFINUOKLJAWCQPSFOYDNC");
    const char tmp_msg_0[] = {-95, 114, 102, 110, -17, 33, 116, 69, -21, 123, 40, -68, -106, 26, -1, -68, -9, 51, -126, 78, 7, -56, 6, -3, 61, 107, -46, 18, -111, 5, -5, -9, -21, 103, -27, -61, -89, -88, -11, 124, -46, -2, 48, 33, -61, -30, -111, 95, -67, -47, -5, 96, -19, 77, -28, -93, 107, -56, 41, 67, 90, 35, 39, -106, 19, -22, -61, 89, -67, 62, -50, 87, -11, 63, -21, 71, 106, -19, -28, -10, 9, -11, -97, -53, -98, 26, -59, 63, 12, 118, -114, 30, -50, -122, -128, -127, -7, -101, -109, 44, -13, -81, -86, -106, -1, -26, 22, -70, -22, -36, 120, -118, -47, 65, 69, -124, 1, -26, 82, -111, 58, 74, -117, -47, -46, -51, 99, 119, 83, -99, 119, -67, -58, -126, 44, -39, 16, 64, -82, 68, -20, -82, 35, 55, 22, 110, -9, 122, -26, 65, -28, -128, 110, 50, 79, 110, -7, 24, 16, 25, 50, 28, 8, -9, -37, 2, -105, 58, 47, 19, -1, -28, 0, 5, 67, 119, 63, -106, -10, 87, 109, 92, -62, -61, -67, -6, -63, -15, 28, -84, 1, -39, 4, -13, -49, 105, 30, -114, 109, -40, 55, 30, -109, -103, 111, 92, -92, 106};
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
    msg.setTimeStamp(0.9753911719613926);
    msg.setSource(37250U);
    msg.setSourceEntity(39U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(144U);
    msg.locale.assign("NHBKEPUOFMZYMNSBHZSOVXSMEQDOQNHGCIZGWGASUVHJPBOFOKNYHJGTSLQKQNUMXDARRWXXBPAWPMQKOXJTHITSCKJ");
    const char tmp_msg_0[] = {6, -32, 105, 5, -55, 0, -63, -50, 37, -88, -46, 49, -11, 125, -1, -92, -128, 1, -44, -21, -120, -42, -121, -56, -100, -69, -92, 71, 30, -91, -87, 29, 29, 93, -96, -19, -67, 80, -88, 100, 105, 5, -110, 26, -76, 65, 86, 113, -74, -115, -16, -106, -33, -29, -40, -78, 76, 22, 60, 71, -98, -25, 94, 20, -29, 18, 103, 126, 89, 88, 112, 68, 79, 0, -21, -50, 26, 119, 93, -77, -83, -34, -36, -40, 45, -39, -102, 106, -65, 13, 114, -71, 51, -110, 91, 74, -57, -89, -17, 76, 24, 106, 41, -89, 51, 12, -117, -87, 11, -77, 18, -78, 98, 66, -105, 65, 107, 53, 109, 27, -68, 64};
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
    msg.setTimeStamp(0.2909852241586316);
    msg.setSource(18842U);
    msg.setSourceEntity(106U);
    msg.setDestination(43512U);
    msg.setDestinationEntity(128U);
    msg.locale.assign("YFTLRWOMREVHBPAEQCBOSKYENCAPDWUGVYBBQXALFOFWPNMPNKAAMXZLWZDWZUVBJDLCDUBLVGEUGJQSEFEJQNVOOQMNZTJPIWQFHDALUMCBAIDRCCFBTJYPZUKRGYNTQJRIJVAKVDDDYXTVHTUCQRZGGJX");
    const char tmp_msg_0[] = {-2, -26, 66, 57, 49, 74, -108, -81, -20, 92, -29, -18, 64, -75, -127, -61, 91, 22, -51, -65, 75, 24, -2, 53, -42, -80, 0, 29, 96, -112, 50, 48, 68, -122, -62, -29, -126, 98, 113, 10, -39, 51, 98, 0, 122, 38, -9, -121, 31, 18, 106, 39, 42, -108, -70, -9, -16, 101, -100, -69, 63, -9, 104, -109, 43, 18, 109, -119, 110, -118, -49, -94, 84, 78, -88, 17, 38, 73, 94, -51, -62, -124, -84, -77, -43, -39, 5, 80, 97, -75, -67, 114, -12, 89, 68, -60, -37, 57, -4, -81, 98, 67, 34, -113, -6, 84, -77, -125, -57, 89, -9, 82, -59, -67, -15, 101, 38, 122, -68, 12, -70, -7, 9, 6, 120, -110, -91, -76, 79, 9, 111, 65, 122, -39, 59, 4, 99, 68, -80, 94, -48, -38, 82, -117, -16, 54, 54, 26, 100, -90, 88, -68, -81, -124, 63, 56, -55, -91, 73, 116, -70, 81, 29, 20, 53, -69, 4, 17, 125, 3, -128, -21, 22, 108, -34, 64, -42, -84, -114, 1, 110, 5, -22, -65, -94, 10, 102, 62, -80, 92, 112, 46, 34, 117, -125, 31, -113, -76, 30, 91, -96, 60, 48, -35, -56, 54, -123, 62, 41, -69, 89, 40, -65, 11, 42, -82, -81, -34, 111, -81, 75, -35, 84, 44, -79, 36, -77, -74, 4, -64, 114, 53, 94, -110};
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
    msg.setTimeStamp(0.4304116424533866);
    msg.setSource(24651U);
    msg.setSourceEntity(99U);
    msg.setDestination(36580U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.317704089160158);
    msg.setSource(38912U);
    msg.setSourceEntity(68U);
    msg.setDestination(53457U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.8431073046301738);
    msg.setSource(46033U);
    msg.setSourceEntity(47U);
    msg.setDestination(42270U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.26306787138903254);
    msg.setSource(52851U);
    msg.setSourceEntity(68U);
    msg.setDestination(27031U);
    msg.setDestinationEntity(222U);
    msg.camid = 52U;
    msg.x = 40950U;
    msg.y = 60460U;

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
    msg.setTimeStamp(0.37023973613504835);
    msg.setSource(7061U);
    msg.setSourceEntity(171U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(157U);
    msg.camid = 72U;
    msg.x = 9437U;
    msg.y = 43373U;

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
    msg.setTimeStamp(0.5880642956264327);
    msg.setSource(62792U);
    msg.setSourceEntity(235U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(127U);
    msg.camid = 109U;
    msg.x = 44873U;
    msg.y = 33997U;

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
    msg.setTimeStamp(0.174215745975153);
    msg.setSource(25139U);
    msg.setSourceEntity(96U);
    msg.setDestination(26981U);
    msg.setDestinationEntity(85U);
    msg.camid = 55U;
    msg.x = 32091U;
    msg.y = 5161U;

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
    msg.setTimeStamp(0.3136768020555796);
    msg.setSource(46289U);
    msg.setSourceEntity(202U);
    msg.setDestination(11285U);
    msg.setDestinationEntity(35U);
    msg.camid = 137U;
    msg.x = 18265U;
    msg.y = 42293U;

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
    msg.setTimeStamp(0.9556711683698417);
    msg.setSource(17682U);
    msg.setSourceEntity(164U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(183U);
    msg.camid = 72U;
    msg.x = 59080U;
    msg.y = 19726U;

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
    msg.setTimeStamp(0.08221107317940135);
    msg.setSource(21895U);
    msg.setSourceEntity(186U);
    msg.setDestination(16261U);
    msg.setDestinationEntity(199U);
    msg.tracking = 178U;
    msg.lat = 0.5368892837884255;
    msg.lon = 0.24759280593583977;
    msg.x = 0.777808753760961;
    msg.y = 0.7346082471722675;
    msg.z = 0.58481729168665;

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
    msg.setTimeStamp(0.8883017497582923);
    msg.setSource(49388U);
    msg.setSourceEntity(81U);
    msg.setDestination(58156U);
    msg.setDestinationEntity(171U);
    msg.tracking = 197U;
    msg.lat = 0.3576404010086579;
    msg.lon = 0.9964342576390071;
    msg.x = 0.525739191653415;
    msg.y = 0.5732560407418658;
    msg.z = 0.3446445478849105;

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
    msg.setTimeStamp(0.9149448110420918);
    msg.setSource(37312U);
    msg.setSourceEntity(54U);
    msg.setDestination(50481U);
    msg.setDestinationEntity(60U);
    msg.tracking = 12U;
    msg.lat = 0.2931946463128834;
    msg.lon = 0.11266450510216863;
    msg.x = 0.727043345818196;
    msg.y = 0.5555555906593548;
    msg.z = 0.5340642788691339;

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
    msg.setTimeStamp(0.8170013322088601);
    msg.setSource(34340U);
    msg.setSourceEntity(130U);
    msg.setDestination(51590U);
    msg.setDestinationEntity(22U);
    msg.target.assign("AIHUHVOAXNKMIIXMATDJOXXKQUBXRTRRWSLQQUTDKWEYNJPQSOOPIFPCHDUJBJGWNSGIMCCRHQSGYDUJMZCVQFBCIGDHTVUWAOAHRTOLEYPDGPYYXPWQJBHVBJEPSLEANBELTAIJSKLNYVZSSFEGPHBGZTLCQDKLTBGIQCUVTRKEFIEAVINDKVNTMKHHKQPCFNCXZOKNZUYMRWCFLZMPZXOYEVOFAGXFYWMWMFMBLUWLXENRJJUSGZR");
    msg.lbearing = 0.29355576655015225;
    msg.lelevation = 0.8649885458904908;
    msg.bearing = 0.20224325777785357;
    msg.elevation = 0.20893430538148916;
    msg.phi = 0.7033048102032086;
    msg.theta = 0.21240353521458066;
    msg.psi = 0.0017853647716951082;
    msg.accuracy = 0.9774682998369251;

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
    msg.setTimeStamp(0.0025425054556779125);
    msg.setSource(49607U);
    msg.setSourceEntity(60U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(68U);
    msg.target.assign("XJFIMLLNBGOWHEEDHJKQRXWSUATHDGXIZKXPMJKYKIYBNNRLGVPZCCNNVSYIOGJDFPEABACLXCRGDURXFRPAEOV");
    msg.lbearing = 0.7691971171149451;
    msg.lelevation = 0.40756186630917;
    msg.bearing = 0.02715487462045718;
    msg.elevation = 0.10624580740009926;
    msg.phi = 0.20457701059623434;
    msg.theta = 0.9413596746843349;
    msg.psi = 0.5002364694382094;
    msg.accuracy = 0.7926741607923409;

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
    msg.setTimeStamp(0.5426946723100505);
    msg.setSource(36870U);
    msg.setSourceEntity(18U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(112U);
    msg.target.assign("FXNZQTUQDWHOUZBWVPBKEWZMSXBRWFZDVGUJIAQPRGCSADEGDPXENKGSTTBINMGHGAZLNTVNXLTOTHUXNRJVDFCUZWQESTAYTKCOFHOMMHRYVNMIIGOFKORRIMLBVGMJIYYSLUCTOJNXEOHDAUCJXBKBASQUWVSLCKBHIWEQFDPH");
    msg.lbearing = 0.033165927925922434;
    msg.lelevation = 0.4457065523085314;
    msg.bearing = 0.23936824843810178;
    msg.elevation = 0.8131935095495316;
    msg.phi = 0.05077341176183603;
    msg.theta = 0.4404256602155968;
    msg.psi = 0.631199333621876;
    msg.accuracy = 0.1342693260054314;

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
    msg.setTimeStamp(0.6713914321097817);
    msg.setSource(10165U);
    msg.setSourceEntity(58U);
    msg.setDestination(16919U);
    msg.setDestinationEntity(37U);
    msg.target.assign("RDCHNYWVTFHNSTZQPDMOJZVIENNYWRYJKNJAISITATHNITQBIRTAUPGWHCCIEFFEGUV");
    msg.x = 0.4197981082259249;
    msg.y = 0.046053014201089315;
    msg.z = 0.10304055827566816;
    msg.n = 0.7861329783711667;
    msg.e = 0.7322717445828152;
    msg.d = 0.3966597535570183;
    msg.phi = 0.49068805456049935;
    msg.theta = 0.3959749884516296;
    msg.psi = 0.9080540318922896;
    msg.accuracy = 0.6916285376104512;

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
    msg.setTimeStamp(0.9194198482539361);
    msg.setSource(21243U);
    msg.setSourceEntity(112U);
    msg.setDestination(46185U);
    msg.setDestinationEntity(146U);
    msg.target.assign("MYRNUQJSCZUNJCUBODYUSBZAOKEQATISBADHVHRQWYJQYZULJEBMXXGGBVJIUEALGXHVCZPERAZLJKEPCTWLMNPSUWNYZOGURTQXEXBQETQAHOYNCMSNQFVXIWKCRLIOZKXWOGRXPEWPFIQDRLXURCYZPTDSGSAHWTKFYIQLPYNFBBIDFFMGRKDSEV");
    msg.x = 0.7437652007170952;
    msg.y = 0.5649472079167129;
    msg.z = 0.6898128332211896;
    msg.n = 0.607273005065707;
    msg.e = 0.20378661604593495;
    msg.d = 0.4707278441983954;
    msg.phi = 0.35016432799288644;
    msg.theta = 0.7146257475621367;
    msg.psi = 0.7766815327749792;
    msg.accuracy = 0.32194406407261467;

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
    msg.setTimeStamp(0.15629430101233766);
    msg.setSource(53158U);
    msg.setSourceEntity(181U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(248U);
    msg.target.assign("XXPYNEQDIBYRZLQILNUPKDVIHQVPYDMOTLGPRXJWBNPZRREOYDNGLJJBKWEFPBOIXNYKHOAKWSMX");
    msg.x = 0.056801341535908656;
    msg.y = 0.6394036567743646;
    msg.z = 0.44602246674175594;
    msg.n = 0.6673943840695172;
    msg.e = 0.5105744993685356;
    msg.d = 0.665347479002802;
    msg.phi = 0.2123689309691088;
    msg.theta = 0.20555279032902274;
    msg.psi = 0.6458983062489387;
    msg.accuracy = 0.34948455309692994;

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
    msg.setTimeStamp(0.40947784080773897);
    msg.setSource(12692U);
    msg.setSourceEntity(186U);
    msg.setDestination(15279U);
    msg.setDestinationEntity(195U);
    msg.target.assign("ALQNFOBSQRKLBFCTWPPEILAVMVUSHNTSFSTTUYEMRJLGLATOKOWNXCYPXOGGMMKDKLSUHVLDXQAIEJDEXHFZJ");
    msg.lat = 0.2872961929846505;
    msg.lon = 0.3703797210972892;
    msg.z_units = 34U;
    msg.z = 0.7139661960036752;
    msg.accuracy = 0.19012329974322206;

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
    msg.setTimeStamp(0.5466023344267411);
    msg.setSource(62480U);
    msg.setSourceEntity(137U);
    msg.setDestination(62985U);
    msg.setDestinationEntity(50U);
    msg.target.assign("VFURALHAJZZIGDCXZBWDYLELSYNKAIGJNXBCYOBEBRPJZZMQTRBSUUHQAWJNOHOOLGATFFPCPVCJFXSKVZYWPTGODLDQEHCPYPSCXJERLEOLGOCWKMSIPRMWEJSHDBCVUGNQIKOSUARWMBBYQVTSGQOTQZZOUTJHIRDWFTWBHAEMYKSRQILXWFMIYAVQGNZMXFGRFXDIPJTYKRDTXMLHCUEPNYWEUNCVMDQLGPIHVNKVJKEVS");
    msg.lat = 0.7998990527540093;
    msg.lon = 0.8599525139920072;
    msg.z_units = 174U;
    msg.z = 0.4713865074196618;
    msg.accuracy = 0.4329193688514891;

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
    msg.setTimeStamp(0.8486175070973093);
    msg.setSource(15805U);
    msg.setSourceEntity(89U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(236U);
    msg.target.assign("MHSVALGWULGONJYHXHALUFBZBZOIELZWTBEHLKFKTJQDXKJBEDPCDPATFPCNABEXBAUGYWSWTUDJOJHTWFQ");
    msg.lat = 0.5048594284061415;
    msg.lon = 0.015805115329889263;
    msg.z_units = 230U;
    msg.z = 0.5486072928921902;
    msg.accuracy = 0.1411387024984947;

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
    msg.setTimeStamp(0.9620820610899256);
    msg.setSource(445U);
    msg.setSourceEntity(156U);
    msg.setDestination(9661U);
    msg.setDestinationEntity(124U);
    msg.name.assign("SXPFQKOAKQEIV");
    msg.lat = 0.4737144753587721;
    msg.lon = 0.8471413702278128;
    msg.z = 0.5298968838480316;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.08058738709276525);
    msg.setSource(9892U);
    msg.setSourceEntity(234U);
    msg.setDestination(14733U);
    msg.setDestinationEntity(142U);
    msg.name.assign("SIGEMUAHFBEIQEVUESBIMUBSZPWAFOBWWMYWS");
    msg.lat = 0.4797978831571603;
    msg.lon = 0.6172182099796585;
    msg.z = 0.4995452279668484;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.8847749618581826);
    msg.setSource(28350U);
    msg.setSourceEntity(245U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(125U);
    msg.name.assign("SLSEYKGUJHYHDPBZIMCHNWHMRXPFHEBCZKAQNGBNURFWAODBCYOMSMHACSFNUATQCKQJXCYXWXXRUMTWNRYOPKIJEWYUDDAPVAIWGOHPHDRAQTIMFFEGWILQJTTLRTKPLIDDXKWBZBUTNVAZICFVIXOJJXMQEOVLSNJRGOKESQVSWGTBELZEUDYCZFYMIZVTRONXYPKQHNSENDTMGCJROPKVMB");
    msg.lat = 0.8566733922113907;
    msg.lon = 0.01844752556019469;
    msg.z = 0.9187987531162487;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.30971872016374036);
    msg.setSource(61589U);
    msg.setSourceEntity(18U);
    msg.setDestination(41074U);
    msg.setDestinationEntity(197U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.9164415546856267);
    msg.setSource(13563U);
    msg.setSourceEntity(160U);
    msg.setDestination(12071U);
    msg.setDestinationEntity(226U);
    msg.op = 191U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VRBBNREWNTCREXJODKFMXTKMVNDBWLWKYQHEQEAFUVGVGKZYPADOPFRXQGSLZXYBVCYLIWZEIWCKMAYOCPIQFTIIAKLNRFLJGTBYIJULCLCHFMZOSONHBVMWXOIVGUHEMMXUUTVQZIWRYZNTWXSQRJREPGFSJUKADSTSMZPJJAHEPOWCNHEBCHLUUJDLGXFGZEQVIWRAZDZQSNAKJNTAXFMDBLPYVXPQNGUSQIDTYAMKDRYFBPC");
    tmp_msg_0.lat = 0.6717689589453506;
    tmp_msg_0.lon = 0.8185037746743961;
    tmp_msg_0.z = 0.3085445731330986;
    tmp_msg_0.z_units = 97U;
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
    msg.setTimeStamp(0.959362234943172);
    msg.setSource(49261U);
    msg.setSourceEntity(201U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(50U);
    msg.op = 198U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("AGZIEGBCOEXSJTTIJLGAGPUYKCOQLOCCARGNWMXZOQGBDWKWBCETKLKXSRUBUNPOEDKCJIVZ");
    tmp_msg_0.lat = 0.9332419245786931;
    tmp_msg_0.lon = 0.551313940859916;
    tmp_msg_0.z = 0.0072785780569673;
    tmp_msg_0.z_units = 241U;
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
    msg.setTimeStamp(0.9728337174142155);
    msg.setSource(55816U);
    msg.setSourceEntity(179U);
    msg.setDestination(26175U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5271397926340857;
    msg.type = 53U;

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
    msg.setTimeStamp(0.3860417076865492);
    msg.setSource(55150U);
    msg.setSourceEntity(20U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8411261295882346;
    msg.type = 92U;

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
    msg.setTimeStamp(0.7457381342718019);
    msg.setSource(46588U);
    msg.setSourceEntity(55U);
    msg.setDestination(2615U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8542203820286225;
    msg.type = 19U;

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
    msg.setTimeStamp(0.7261003351706747);
    msg.setSource(60717U);
    msg.setSourceEntity(140U);
    msg.setDestination(57296U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8544326667353185;

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
    msg.setTimeStamp(0.7683074666264321);
    msg.setSource(43038U);
    msg.setSourceEntity(46U);
    msg.setDestination(35744U);
    msg.setDestinationEntity(120U);
    msg.value = 0.3101488978057336;

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
    msg.setTimeStamp(0.8382511045490018);
    msg.setSource(34977U);
    msg.setSourceEntity(205U);
    msg.setDestination(59115U);
    msg.setDestinationEntity(162U);
    msg.value = 0.13013005602173966;

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
    msg.setTimeStamp(0.5261246495925745);
    msg.setSource(12659U);
    msg.setSourceEntity(232U);
    msg.setDestination(42899U);
    msg.setDestinationEntity(250U);
    msg.timestamp_last_service = 0.05269689853758597;
    msg.time_next_service = 0.9353515707615639;
    msg.time_motor_next_service = 0.6686062838817359;
    msg.time_idle_ground = 0.45878530097404335;
    msg.time_idle_air = 0.8418892827094571;
    msg.time_idle_water = 0.7386525462202785;
    msg.time_idle_underwater = 0.8158992172077164;
    msg.time_idle_unknown = 0.7059622965139983;
    msg.time_motor_ground = 0.7012503650381493;
    msg.time_motor_air = 0.4496476398657441;
    msg.time_motor_water = 0.23395628560452286;
    msg.time_motor_underwater = 0.019890511852742043;
    msg.time_motor_unknown = 0.9041762578122816;
    msg.rpm_min = -7567;
    msg.rpm_max = -3894;
    msg.depth_max = 0.4087548547367611;

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
    msg.setTimeStamp(0.5246062746340759);
    msg.setSource(29758U);
    msg.setSourceEntity(23U);
    msg.setDestination(13519U);
    msg.setDestinationEntity(153U);
    msg.timestamp_last_service = 0.10047186984242718;
    msg.time_next_service = 0.42901671759508864;
    msg.time_motor_next_service = 0.3754687486214282;
    msg.time_idle_ground = 0.36194918648300467;
    msg.time_idle_air = 0.20967296414051884;
    msg.time_idle_water = 0.9758690126103742;
    msg.time_idle_underwater = 0.7416535464468786;
    msg.time_idle_unknown = 0.32586270788546656;
    msg.time_motor_ground = 0.4985393274909845;
    msg.time_motor_air = 0.6179638721732624;
    msg.time_motor_water = 0.6008093611872058;
    msg.time_motor_underwater = 0.5960395249941826;
    msg.time_motor_unknown = 0.5561493470252584;
    msg.rpm_min = 8060;
    msg.rpm_max = -18201;
    msg.depth_max = 0.07622054269022482;

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
    msg.setTimeStamp(0.07753195723426898);
    msg.setSource(10196U);
    msg.setSourceEntity(125U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(84U);
    msg.timestamp_last_service = 0.3337453713881062;
    msg.time_next_service = 0.4657017911498367;
    msg.time_motor_next_service = 0.36422481359401226;
    msg.time_idle_ground = 0.5138215550341747;
    msg.time_idle_air = 0.9073402300009343;
    msg.time_idle_water = 0.6940724512353962;
    msg.time_idle_underwater = 0.9591883352355156;
    msg.time_idle_unknown = 0.229207674913394;
    msg.time_motor_ground = 0.042243693454894204;
    msg.time_motor_air = 0.12199140430971567;
    msg.time_motor_water = 0.38324047065704037;
    msg.time_motor_underwater = 0.9001452743627526;
    msg.time_motor_unknown = 0.6944877180025982;
    msg.rpm_min = -26327;
    msg.rpm_max = 12045;
    msg.depth_max = 0.8779089287630821;

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

  return test.getReturnValue();
}
