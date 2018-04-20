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
// IMC XML MD5: 6ed42ce10f9e69cbd84b1fe2272a8a38                            *
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
    msg.setTimeStamp(0.524805669144);
    msg.setSource(54918U);
    msg.setSourceEntity(174U);
    msg.setDestination(47404U);
    msg.setDestinationEntity(162U);
    msg.state = 43U;
    msg.flags = 47U;
    msg.description.assign("RAPIUJWTWKFWOEPZUTVDVTDBLJMLPIMURAGZNJNORPGYFDYGLRRFZQNCJAUZWQDSEBMYCWYVICNAEEHATJEDMGLHBEDGLFZHTHHRSABSFMKWMRQTQ");

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
    msg.setTimeStamp(0.277237131248);
    msg.setSource(9259U);
    msg.setSourceEntity(206U);
    msg.setDestination(46068U);
    msg.setDestinationEntity(159U);
    msg.state = 117U;
    msg.flags = 73U;
    msg.description.assign("WLKBUVCLRBLVIVUYNSW");

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
    msg.setTimeStamp(0.790689003964);
    msg.setSource(32540U);
    msg.setSourceEntity(107U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(142U);
    msg.state = 24U;
    msg.flags = 94U;
    msg.description.assign("ICOZITCSBFMSSYLZPTIHZLFJKEYNRWFITORGDXNWIANWBDDHYIOZNXAKBCUOLKYEHKBKJCDVSCGALYMVZITU");

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
    msg.setTimeStamp(0.835984748941);
    msg.setSource(26460U);
    msg.setSourceEntity(38U);
    msg.setDestination(31907U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.0555066144925);
    msg.setSource(56827U);
    msg.setSourceEntity(227U);
    msg.setDestination(59585U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.334443507081);
    msg.setSource(21667U);
    msg.setSourceEntity(200U);
    msg.setDestination(21446U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.284762010291);
    msg.setSource(22403U);
    msg.setSourceEntity(72U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(180U);
    msg.id = 165U;
    msg.label.assign("FAYONHMWRTQSRVICHRASAFBQGFPRQQWWZZGOHKNBPGJBMRIUPSUAGTLVYEANUYBXDELZDBFRPLECORTSYXMGKBBTJQXQDJEAWLZDDZALCCVKWMYIYZTTNDUQFMOVXEJXLOONXWITZHPCGNVSTFZFLEPOTWIGVVFDSZJEDYMNUUUGXJHGURYSMVDVCILFTSCBQFMZGAHKKEWKPCPEBCVCONPALLYMKJSJAXINSDHWQIUOKRHHKNPQJIMIYKRUX");
    msg.component.assign("RBPBHKYPJFLAAEFHVPNWBJIZXTERWSPGFVGSLCOQZIASMZTNTMYEQMIBWOJQMGCVTELXTWXJCDPZEVGJLUITQJHPWBUHXRKUUIJKOKLGZXHO");
    msg.act_time = 15964U;
    msg.deact_time = 57460U;

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
    msg.setTimeStamp(0.219951120182);
    msg.setSource(9803U);
    msg.setSourceEntity(21U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(140U);
    msg.id = 241U;
    msg.label.assign("XLYPIJLJWBDIRYCEXVWCWXJTUZHHAMDMFBEBFIVBYQKSZPLDZKRHMASSNWTYKCQVIKYRJOOGBXZXZTZBWEBMOVJHIYVCQAIRZJQDFBLPTEOWJXNAFFUSNKTXDSJFOPLGTVAECMCXDLGHCNQGLRKKWNVWMTLZRWTMHEFMFEDDCPTKMGHASAVABGYUJPPLSUIOOGABPRQAXUEUPQXOINZKHGMOYP");
    msg.component.assign("XEEGFHRGIYNNVGWZEHQOROBZLXRPTNYGFLDTHNSBWVZJKPANBFDRWVAXRKJYDFCIJICMVCOSXAHGBADENUHLUVRLUXUUWPOOAYDWFGRFPGLMYCEOZBBQHZPUKWTPESILOJHTBJSMDODNTFZAEJUQWZILXSPSMTMQQLVFBPJLTVJZKQBFAMYUICMMSCEKMQNRHGIKASCKCWGYIYHYVMTQYTJENCWKUAOZKVJTIXPFIK");
    msg.act_time = 8971U;
    msg.deact_time = 48425U;

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
    msg.setTimeStamp(0.721255266017);
    msg.setSource(64812U);
    msg.setSourceEntity(84U);
    msg.setDestination(2860U);
    msg.setDestinationEntity(60U);
    msg.id = 213U;
    msg.label.assign("OKGQBUWVELMTKMLECXLPDMFCAHUDUGVTXWRAVPZCYLNTHVVOYQCAFUZLHSFEVUSIAOJWYJYIUUUIZRMMGJZJRWSEJDNATVSOPFKDLMAZIRRXGUIPXROFVTRNGKGDSCTSZGNXFPYDHT");
    msg.component.assign("QZSKIPROWLXUWYZHBXBGUNRDIUHDJTOJQRXDXBFUFAKSCHGPPRIUIZYHLWVVGDAFYWPVKQEAKWGFCTAMYYCELSRGNAPHTVMZSZKNEQJLS");
    msg.act_time = 29821U;
    msg.deact_time = 24947U;

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
    msg.setTimeStamp(0.512079491588);
    msg.setSource(30384U);
    msg.setSourceEntity(104U);
    msg.setDestination(17037U);
    msg.setDestinationEntity(186U);
    msg.id = 72U;

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
    msg.setTimeStamp(0.711270046601);
    msg.setSource(46724U);
    msg.setSourceEntity(221U);
    msg.setDestination(20796U);
    msg.setDestinationEntity(112U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.814743053324);
    msg.setSource(18647U);
    msg.setSourceEntity(147U);
    msg.setDestination(35888U);
    msg.setDestinationEntity(196U);
    msg.id = 253U;

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
    msg.setTimeStamp(0.89266416327);
    msg.setSource(25539U);
    msg.setSourceEntity(52U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(138U);
    msg.op = 5U;
    msg.list.assign("TSMAFXVYXYIDIIRXMGKFQEQHOKRGUDOPHPWNVWRRMMKMSPBCCEDKCHPXZOURTSTNQJTXCFIORCZUVNBLVGTOABBELJZLVULVYKPXKIJEWLHGFKNRZWDJUFNNGNXZCYLAJNXAEPXUIUVGMUIQHJA");

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
    msg.setTimeStamp(0.291966633744);
    msg.setSource(5977U);
    msg.setSourceEntity(148U);
    msg.setDestination(8825U);
    msg.setDestinationEntity(27U);
    msg.op = 182U;
    msg.list.assign("GODVYPAQLUXPNZKLCFWNJHEJBVNBTHIGJTSFQWOIXTJSVLMTCBHSPGHMGQOXCLDISCIGFXKBSFULMCHUYJKPTKRZGLLSVGVIQRNQQXFCNSFNKKXRZCVGSVRMDFBOWQPIEUARAFWGERZDDMAKEJKWCBVQMQUUBSRTHTGYOUZWYIUBSLDOLZWDIMHTY");

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
    msg.setTimeStamp(0.821360803196);
    msg.setSource(60232U);
    msg.setSourceEntity(199U);
    msg.setDestination(65338U);
    msg.setDestinationEntity(228U);
    msg.op = 46U;
    msg.list.assign("JDOCRMKOPKSSYGDFQEREHPQIPHRHUXUFLKWKIACPMUMMNRBWETQUFXDZTJCVAVNAXWMJLBGOAOAZHMAOEXGFTCNQXZWSGFFRCVRQUBYIAIYAYCQFAJDZNYOHZULMSSIPWIPRIZTATGBEPVIXLORCESHOGLUGMIZEWKMNUPBDLOJDKXVBQJQLHSMRVEQBFJJWCLWDDFKVGUINTYLGJNQHTWXHRZYSFTNXKPYO");

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
    msg.setTimeStamp(0.314943369896);
    msg.setSource(5244U);
    msg.setSourceEntity(72U);
    msg.setDestination(22547U);
    msg.setDestinationEntity(96U);
    msg.value = 180U;

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
    msg.setTimeStamp(0.430944688586);
    msg.setSource(22890U);
    msg.setSourceEntity(77U);
    msg.setDestination(44734U);
    msg.setDestinationEntity(38U);
    msg.value = 218U;

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
    msg.setTimeStamp(0.109157485348);
    msg.setSource(25298U);
    msg.setSourceEntity(207U);
    msg.setDestination(38054U);
    msg.setDestinationEntity(50U);
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
    msg.setTimeStamp(0.0388090020749);
    msg.setSource(1078U);
    msg.setSourceEntity(241U);
    msg.setDestination(45430U);
    msg.setDestinationEntity(10U);
    msg.consumer.assign("VFHKSLFFHKHDDNRWOF");
    msg.message_id = 57782U;

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
    msg.setTimeStamp(0.173658383807);
    msg.setSource(54097U);
    msg.setSourceEntity(244U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(219U);
    msg.consumer.assign("HJBLNTMRXDYPUGNAJXIDNOSMSLYUVEKTBEFZAOCXVKEWFYZZXKGMGHBEUPLVKRNXNBZWLGPWIPSLSUQOHVAMOZSGDCKPBFXIEQMHGOVPDSXFQDJRXZNFML");
    msg.message_id = 35853U;

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
    msg.setTimeStamp(0.497018295348);
    msg.setSource(54264U);
    msg.setSourceEntity(127U);
    msg.setDestination(2786U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("CFTSGNOLYTPZQJRYZRGCMKJUEXJRJFCDASFNPVSCMPABOIQOBRMEUWMZHDWIRDZUYJUJDHOZMKAHXXNHIVAKERESIKDHCKLXTNGQBFKVRCWITXQWXLTYABSZKFZWGOGGWHBNEBGIX");
    msg.message_id = 18181U;

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
    msg.setTimeStamp(0.800664660128);
    msg.setSource(35812U);
    msg.setSourceEntity(81U);
    msg.setDestination(45228U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.616388471754);
    msg.setSource(47184U);
    msg.setSourceEntity(103U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.710921170245);
    msg.setSource(44272U);
    msg.setSourceEntity(147U);
    msg.setDestination(51790U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.000703446641962);
    msg.setSource(32772U);
    msg.setSourceEntity(235U);
    msg.setDestination(49424U);
    msg.setDestinationEntity(209U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.700529472482);
    msg.setSource(37161U);
    msg.setSourceEntity(196U);
    msg.setDestination(29568U);
    msg.setDestinationEntity(59U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.706108246629);
    msg.setSource(24264U);
    msg.setSourceEntity(227U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(11U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.543995943417);
    msg.setSource(23286U);
    msg.setSourceEntity(199U);
    msg.setDestination(27876U);
    msg.setDestinationEntity(75U);
    msg.total_steps = 186U;
    msg.step_number = 210U;
    msg.step.assign("OQARTREHOXSLUFTADJATLHZYIEKHPTECJIUILPLZFUTSFNHPQOTZWBZYQIXPVBNVDDSNWYRWJMGFUQVOHXFPOXJDHALWIGMIVFDNCUMTURXBKGQKSKYHJOAAZPPPCVBAGMEEZYROHBUBGNSECJOCJOLHSYIRLTNFWBFVN");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.584904395078);
    msg.setSource(17511U);
    msg.setSourceEntity(20U);
    msg.setDestination(4946U);
    msg.setDestinationEntity(52U);
    msg.total_steps = 244U;
    msg.step_number = 17U;
    msg.step.assign("ZNSQIZKCUXFNDEJDNZMFHBLWBIZUMLYSPLETEYSWTRZDKIDGNOHGXOFBGUYAQZZJPUGASXFLYIAICC");
    msg.flags = 115U;

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
    msg.setTimeStamp(0.15897400749);
    msg.setSource(8079U);
    msg.setSourceEntity(84U);
    msg.setDestination(14789U);
    msg.setDestinationEntity(15U);
    msg.total_steps = 215U;
    msg.step_number = 110U;
    msg.step.assign("AZLEEMVVIKLFCSQDUCYAYUASXKXSPWOSJKTREKQVSKJGTIUORZEFPJQNLRXUDIGTCUBNOJBVUEIAQGLFHCBP");
    msg.flags = 141U;

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
    msg.setTimeStamp(0.54423551426);
    msg.setSource(3980U);
    msg.setSourceEntity(124U);
    msg.setDestination(63140U);
    msg.setDestinationEntity(111U);
    msg.state = 181U;
    msg.error.assign("FMUDHOYLWRCMRQZTBKTODAJKAVXANUKPXRJYKZWVEBSJDFBPWNJ");

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
    msg.setTimeStamp(0.687004966213);
    msg.setSource(43858U);
    msg.setSourceEntity(173U);
    msg.setDestination(52958U);
    msg.setDestinationEntity(133U);
    msg.state = 69U;
    msg.error.assign("DXRISRWVUTAJIYLDOVKFWCFFOTXIKRXZUZKZEGTCGSVISTTINPCNHZBAKEKWOBIXYVZBDLXQALUTWEY");

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
    msg.setTimeStamp(0.326525332645);
    msg.setSource(36310U);
    msg.setSourceEntity(149U);
    msg.setDestination(9116U);
    msg.setDestinationEntity(148U);
    msg.state = 158U;
    msg.error.assign("CAEWSWOVKEHXMOJNXELHUAMSNAFGTLFKCWCJICLGPUHTXUAQFHZIRPTJOHBRZTXRIAGTFLGYGVSYTQCQOYYWZNSRSBVQSABULTDPOEMTBVKNPFLAYWYVVIZMLXVKPMWFWFWDIKCAADJKBZTXZKEREWMMLLFVDTPNZVDUGPYMXXSCWIDYOYMPGBQUODLQXJZCOGZKEYRF");

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
    msg.setTimeStamp(0.839796074349);
    msg.setSource(52159U);
    msg.setSourceEntity(244U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.494697677014);
    msg.setSource(4582U);
    msg.setSourceEntity(199U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.927740878389);
    msg.setSource(12613U);
    msg.setSourceEntity(75U);
    msg.setDestination(2344U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.505746967438);
    msg.setSource(6786U);
    msg.setSourceEntity(136U);
    msg.setDestination(57636U);
    msg.setDestinationEntity(241U);
    msg.op = 31U;
    msg.speed_min = 0.360717476045;
    msg.speed_max = 0.972044422425;
    msg.long_accel = 0.317136066062;
    msg.alt_max_msl = 0.337526077787;
    msg.dive_fraction_max = 0.242084359685;
    msg.climb_fraction_max = 0.642918170882;
    msg.bank_max = 0.612259253632;
    msg.p_max = 0.654859357745;
    msg.pitch_min = 0.804500103444;
    msg.pitch_max = 0.997111336006;
    msg.q_max = 0.850278744076;
    msg.g_min = 0.369208428031;
    msg.g_max = 0.0941405218034;
    msg.g_lat_max = 0.561784182872;
    msg.rpm_min = 0.498245665779;
    msg.rpm_max = 0.862581644153;
    msg.rpm_rate_max = 0.727568676841;

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
    msg.setTimeStamp(0.0645167944214);
    msg.setSource(28054U);
    msg.setSourceEntity(152U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(15U);
    msg.op = 135U;
    msg.speed_min = 0.862819401535;
    msg.speed_max = 0.867740226335;
    msg.long_accel = 0.657452035786;
    msg.alt_max_msl = 0.477310146283;
    msg.dive_fraction_max = 0.856652966216;
    msg.climb_fraction_max = 0.510803205987;
    msg.bank_max = 0.309934788791;
    msg.p_max = 0.649673439181;
    msg.pitch_min = 0.0681252152709;
    msg.pitch_max = 0.808672692103;
    msg.q_max = 0.592352661788;
    msg.g_min = 0.348139548287;
    msg.g_max = 0.502796180027;
    msg.g_lat_max = 0.00362133666437;
    msg.rpm_min = 0.0693521100912;
    msg.rpm_max = 0.712310455901;
    msg.rpm_rate_max = 0.797037980169;

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
    msg.setTimeStamp(0.316721827189);
    msg.setSource(37650U);
    msg.setSourceEntity(230U);
    msg.setDestination(10511U);
    msg.setDestinationEntity(134U);
    msg.op = 213U;
    msg.speed_min = 0.418843901123;
    msg.speed_max = 0.681300046521;
    msg.long_accel = 0.203686381263;
    msg.alt_max_msl = 0.602520106573;
    msg.dive_fraction_max = 0.0953831039177;
    msg.climb_fraction_max = 0.995892610138;
    msg.bank_max = 0.148931213281;
    msg.p_max = 0.789492945435;
    msg.pitch_min = 0.963984968996;
    msg.pitch_max = 0.53915292507;
    msg.q_max = 0.212638293796;
    msg.g_min = 0.998810838675;
    msg.g_max = 0.544814670012;
    msg.g_lat_max = 0.57696988407;
    msg.rpm_min = 0.412430090129;
    msg.rpm_max = 0.00805477570851;
    msg.rpm_rate_max = 0.0521116240396;

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
    msg.setTimeStamp(0.866191073374);
    msg.setSource(35441U);
    msg.setSourceEntity(84U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(84U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 23672U;
    tmp_msg_0.type = 25U;
    tmp_msg_0.utc_year = 26657U;
    tmp_msg_0.utc_month = 194U;
    tmp_msg_0.utc_day = 206U;
    tmp_msg_0.utc_time = 0.961114269961;
    tmp_msg_0.lat = 0.0919648817074;
    tmp_msg_0.lon = 0.451838867095;
    tmp_msg_0.height = 0.932153575364;
    tmp_msg_0.satellites = 129U;
    tmp_msg_0.cog = 0.995347334739;
    tmp_msg_0.sog = 0.496297653665;
    tmp_msg_0.hdop = 0.93026638738;
    tmp_msg_0.vdop = 0.609762076643;
    tmp_msg_0.hacc = 0.730475695347;
    tmp_msg_0.vacc = 0.0607961320457;
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
    msg.setTimeStamp(0.691413752121);
    msg.setSource(26174U);
    msg.setSourceEntity(78U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(242U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 115U;
    tmp_msg_0.error.assign("DGUBJQVNEXFXVJZDDXBWLFUINLAXPNYMQMFYZOPHURAFKGC");
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
    msg.setTimeStamp(0.904571772917);
    msg.setSource(57021U);
    msg.setSourceEntity(129U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(249U);
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.991031449419;
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
    msg.setTimeStamp(0.721244019039);
    msg.setSource(20196U);
    msg.setSourceEntity(175U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.272998861037;
    msg.lon = 0.876759347945;
    msg.height = 0.939410241984;
    msg.x = 0.685288077197;
    msg.y = 0.379444083745;
    msg.z = 0.601537587699;
    msg.phi = 0.425463466694;
    msg.theta = 0.820199954347;
    msg.psi = 0.494593469217;
    msg.u = 0.941369741846;
    msg.v = 0.932417111154;
    msg.w = 0.912371923058;
    msg.p = 0.0862633797933;
    msg.q = 0.414853133512;
    msg.r = 0.780956046811;
    msg.svx = 0.498870650409;
    msg.svy = 0.830959568033;
    msg.svz = 0.0792440417135;

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
    msg.setTimeStamp(0.521059516451);
    msg.setSource(27133U);
    msg.setSourceEntity(252U);
    msg.setDestination(7159U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.716545789277;
    msg.lon = 0.355859666176;
    msg.height = 0.98990469093;
    msg.x = 0.106604013293;
    msg.y = 0.809707687151;
    msg.z = 0.918349713551;
    msg.phi = 0.409383515314;
    msg.theta = 0.534026457717;
    msg.psi = 0.0297367228148;
    msg.u = 0.471074622826;
    msg.v = 0.249091516494;
    msg.w = 0.12063012811;
    msg.p = 0.71248723889;
    msg.q = 0.0249476591731;
    msg.r = 0.452064754561;
    msg.svx = 0.831008554384;
    msg.svy = 0.793385694923;
    msg.svz = 0.530163324524;

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
    msg.setTimeStamp(0.660833406372);
    msg.setSource(52708U);
    msg.setSourceEntity(109U);
    msg.setDestination(3571U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.601408233777;
    msg.lon = 0.375373769163;
    msg.height = 0.590013373321;
    msg.x = 0.237941238163;
    msg.y = 0.0444114051767;
    msg.z = 0.248877827216;
    msg.phi = 0.940964066412;
    msg.theta = 0.246968482385;
    msg.psi = 0.573374100828;
    msg.u = 0.763703934564;
    msg.v = 0.452922963595;
    msg.w = 0.534606984673;
    msg.p = 0.526977611959;
    msg.q = 0.129063467628;
    msg.r = 0.0104804354948;
    msg.svx = 0.991272859181;
    msg.svy = 0.951947336158;
    msg.svz = 0.0130476857196;

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
    msg.setTimeStamp(0.0780977926736);
    msg.setSource(16000U);
    msg.setSourceEntity(25U);
    msg.setDestination(48946U);
    msg.setDestinationEntity(196U);
    msg.op = 3U;
    msg.entities.assign("HCPVWVSEQMLYWYPUMGJJIXMXMBASNAAYLBIUQXMBARUSSZHJFEVDPHNGBKBFFJDBIAKDATOLEZIEJRKPMOWCILDVUWHWQPTYNMCXJFVEYHGUTOVELSLTIOFKOZJHCDGSEPNFDPSXFHQBMNZEJIWCCFQRRALZNSSZQBOAVCRAWPVTKNQNTXUEJKIGQPGLZMYMDLSXHZOXURQHQRXAGLRNUHCGVPEOFY");

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
    msg.setTimeStamp(0.495331276435);
    msg.setSource(49438U);
    msg.setSourceEntity(157U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(141U);
    msg.op = 134U;
    msg.entities.assign("ZUNZJCJMSGCZOV");

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
    msg.setTimeStamp(0.507709448242);
    msg.setSource(21621U);
    msg.setSourceEntity(200U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(150U);
    msg.op = 191U;
    msg.entities.assign("KUNKBIWNLDVVSMJRONMXPPWSQMYNJBVRLDPIVSDOLYQAYUGWIFESOCRRIDRBWEPCEHUMELYRMTPVUBAHNXHKLGVSIVBFZOA");

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
    msg.setTimeStamp(0.442105315572);
    msg.setSource(32573U);
    msg.setSourceEntity(250U);
    msg.setDestination(4296U);
    msg.setDestinationEntity(112U);
    msg.type = 39U;
    msg.speed = 43848U;
    const char tmp_msg_0[] = {-69, -42, 11, -80, 84, 32, 2, -120, 42, 126, -52, -9, -22, 59, -97, 5, -53, 94, -14, -42, 114, 68, -115, 16, 72, 117, -48, 48, -105, 90, 48, 56, -12, -14, -9, 28, -73, -1, 93, 47, -45, -111, -33, 60, 74, -118, 117, 59, -111, -56, -121, 74, -42, -18, 48, 7, -121, -50, 116, 117, 67, 21, 77, -87, 0, 30, -83, -68, 108, 66, -53, 22, 99, 10, -127, -128, -55, 18, 93, -60, -52, -45, -31, -12, 59, -8, -40, -116, 46, -126, 71, 28, -68, -117, -37, 119, -63, -60, 22, 106, 63, -69, -38, -10, -64, 7, -35, 20, 72, 16, 111, -123, 84, -58};
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
    msg.setTimeStamp(0.294106320315);
    msg.setSource(6932U);
    msg.setSourceEntity(87U);
    msg.setDestination(64012U);
    msg.setDestinationEntity(192U);
    msg.type = 36U;
    msg.speed = 16361U;
    const char tmp_msg_0[] = {35, -108, -97, -22, 108, 25, -96, 28, 15, 108, 121, 34, 121, -21, 93, 23, -15, 105, -8, 122, 43, 19, -104, -112, 68, -82, -105, -49, -99, -66, 12, -7, 64, 34, 110, 34, -102, -47, -35, -90, -88, 107, -21, -96, -50, 34, -1, -13, -85, -49, 120, -116, 108, -84, 51, -36, 31, 27, -32, 43, 71, 45, -104, -17, -20, -7, -53, -22, -11, 0, 1, 28, -120, -13, -78, 38, 32, -65, 88, 71, 5, 58, 83, 111, 118, 25, -123, 90, -14, -6, 12, 38, -34, -98, -88, -27, 8, 113, 55, -64, -106, 91, -110, 93, -61, -61, 17, 126, 25, -11, 45, -42, -63, 48, -42, -44, -127, 65, -59, 53, -52, 61, 16, -40, 58, 54, -108, 94, -34, -29, -128, -128, -127, 113, -80};
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
    msg.setTimeStamp(0.373664687803);
    msg.setSource(30433U);
    msg.setSourceEntity(112U);
    msg.setDestination(62294U);
    msg.setDestinationEntity(37U);
    msg.type = 155U;
    msg.speed = 14247U;
    const char tmp_msg_0[] = {-80, 54, -46, -122, -64, -114, -42, 70, 79, 6, 78, -108, -84, 71, 7, -107, 58, -115, -97, 121, 112, -56, 8, 78, -43, -122, 58, -117, 80, -68, -14, -38, 0, 18, 35, 61, 14, -78, 101, 105, 43, -112, -120, 18, 70, 89, -114, -62, 19, 113, -62, 92, -125, 84, 38, 58, 79, 117, -100, 120, -4, 24, 54, 40, 73, 6, 36, 16, 84, 97, 22, 92, -32, 10, -81, -125, 101, -49, -125, -14, 50, -108, 61, 60, -81, 17, -88, 111, 30, -32, 46, 90, 86, -43, 101, 75, -104, 73, -107, 33, -84, 41, -11, 112, 83, -37, 19, -47, 33, 65, 16, 118, 10, 92, 5, -90, -68, -61, -84, -91, 112, -88, 26, -83, -27, -125, -60, -63, 65, -127, -107, -15, 1, -84, 80, 61, 88, -2, 98, -86, 12, -77, -115, -41, -80, -126, -46, 40, -71, -8};
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
    msg.setTimeStamp(0.509872042263);
    msg.setSource(30287U);
    msg.setSourceEntity(161U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(49U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.99898065281;
    msg.bank2p_pgain = 0.844462791654;

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
    msg.setTimeStamp(0.787390079459);
    msg.setSource(37847U);
    msg.setSourceEntity(178U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(103U);
    msg.op = 213U;
    msg.tas2acc_pgain = 0.162791871162;
    msg.bank2p_pgain = 0.260318203706;

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
    msg.setTimeStamp(0.28572345723);
    msg.setSource(2313U);
    msg.setSourceEntity(0U);
    msg.setDestination(2531U);
    msg.setDestinationEntity(4U);
    msg.op = 131U;
    msg.tas2acc_pgain = 0.728195708504;
    msg.bank2p_pgain = 0.306145227195;

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
    msg.setTimeStamp(0.0376234511553);
    msg.setSource(16816U);
    msg.setSourceEntity(106U);
    msg.setDestination(30339U);
    msg.setDestinationEntity(169U);
    msg.available = 3585580117U;
    msg.value = 230U;

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
    msg.setTimeStamp(0.876597754618);
    msg.setSource(6191U);
    msg.setSourceEntity(34U);
    msg.setDestination(49263U);
    msg.setDestinationEntity(10U);
    msg.available = 3074596703U;
    msg.value = 139U;

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
    msg.setTimeStamp(0.690445568958);
    msg.setSource(30115U);
    msg.setSourceEntity(91U);
    msg.setDestination(4026U);
    msg.setDestinationEntity(245U);
    msg.available = 2854549633U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.701826205574);
    msg.setSource(21024U);
    msg.setSourceEntity(230U);
    msg.setDestination(59491U);
    msg.setDestinationEntity(183U);
    msg.op = 89U;
    msg.snapshot.assign("SIRGLEYMGIRKQGBTVDCYYBWKXLSBSCNJAVHGATUXARVZBDCKPCERMFPZSHS");
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 58U;
    tmp_msg_0.x = 2745U;
    tmp_msg_0.y = 64184U;
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
    msg.setTimeStamp(0.553979534469);
    msg.setSource(60027U);
    msg.setSourceEntity(42U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(100U);
    msg.op = 37U;
    msg.snapshot.assign("MDPLEYZFRNCNEWUOFSCFRDXFKDZKAAMUAIGYJKYGDUAZEUOGNHDUU");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.861816620732;
    tmp_msg_0.lon = 0.0422166137491;
    tmp_msg_0.z = 0.407813197674;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.speed = 0.762172116357;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.custom.assign("WGAKZHRDCSTKKGOUHXQSXMBJWNZWYOYSFSAPEKZTTLSMUXNTHCIUPSEMXZCDGQNICMYCVFAAGEEKKODKBLYIVUMCEBOTOVYJRQZLNHXJBJRUPIIEGGWJAJJGEWQKQIDBVTRPLLVJMFAPEVHQWFIQRXYZCYUHWBPTDPVHYOPFNFPZW");
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
    msg.setTimeStamp(0.538937458442);
    msg.setSource(55146U);
    msg.setSourceEntity(106U);
    msg.setDestination(25535U);
    msg.setDestinationEntity(120U);
    msg.op = 132U;
    msg.snapshot.assign("ZSEQEFQOXDNALKNURENOTQQKJDWGEJIRTUYHLYOXJQWOBSKURLMZWLFE");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("YQHIGOZBVAEVVCFOYZSBMFIEKDGMGFFJHELRCTBAVCBLGDSTAUTDQZAWNWRLFCFKAJSQLYJYKLWHRIKZRBRSEBUFUZDBXILPJJHNXQXJQSFVKCTVCVKMUPNRTEUKXIQWGWYRGONZVDGZBJUEQCADANWMOLHMJDPSJGKROYHMSWMXKBXKPNPFFPMTOHIIXYESOQCNDCWYBWYHNPHZWIZDPEGQLZEC");
    tmp_msg_0.visibility.assign("IQSIFQSEYOFUSZNDSTXANOFRAZRQVUKPIGTRBFLHOLELSF");
    tmp_msg_0.scope.assign("LRZHTXFHHJRSHASQKZ");
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
    msg.setTimeStamp(0.270074476076);
    msg.setSource(34853U);
    msg.setSourceEntity(108U);
    msg.setDestination(48251U);
    msg.setDestinationEntity(252U);
    msg.op = 15U;
    msg.name.assign("XHBELRWOSLCZLBGEWVGQTODQJAFQHW");

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
    msg.setTimeStamp(0.144816359453);
    msg.setSource(65286U);
    msg.setSourceEntity(152U);
    msg.setDestination(26456U);
    msg.setDestinationEntity(187U);
    msg.op = 202U;
    msg.name.assign("MWCWIFAKTTKXOJBIMGBWQOHVTJSEYOXLBIIQMUSURSXPCTVCNYXJJSXXMOYCOJCDYZGWYVKZFALUANRCUWVHCQRVMFMRFOFGBZLVIULPCNYLFHDTDHAKBHZWEGEQBZIOJDDSPESOZWYEANNPKDGLFAXEIVVYGNSZVUNEXPJQJHCRJQUWQUNLVPEFUAHLWKGAGBREISLPYHRSUXDNFTMKODXNMRGBYZTKKBSHWMTKQLAFCGRHADZT");

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
    msg.setTimeStamp(0.414227922235);
    msg.setSource(3857U);
    msg.setSourceEntity(206U);
    msg.setDestination(59706U);
    msg.setDestinationEntity(40U);
    msg.op = 18U;
    msg.name.assign("YENROCBPBZUORUBKUCQXFWLPEAHXDSLGJXSIYDZTKUGFYPBWCOVDXDYZQSXHZPKLFFRJLWNBXKUMWGTYMAVGRIYLRMINLP");

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
    msg.setTimeStamp(0.666602339422);
    msg.setSource(31887U);
    msg.setSourceEntity(114U);
    msg.setDestination(22929U);
    msg.setDestinationEntity(235U);
    msg.type = 84U;
    msg.htime = 0.592676612851;
    msg.context.assign("FHQYVJUGMCJCAUFAWUHAMMPJLNTZNNKWKGJXUBVISITLXTBWBPZJSDEKARZEYPHCYFCOCVTGFZLDIIOYNDCFFNDBYDTNZZHGEFVKJHDXPTAEKCXNAZLNLYOIMHA");
    msg.text.assign("VXVJMIPBQJYZITFBXYEQLPQSTOAHJZWDNFULEQXMOSXFVDYTJYPNIFXTHRAXXXOZJUUOZAAGLEBEKXORKJCZGDRIOPOADCGESRZAOZUVGRBNGKWQCLMTJQIPDGHNRREDMAMMVSSSMZSYPBHBLYKWPLVCTRIFTDSUAHHKRKWEBKKPQQETFFSFGCRHBA");

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
    msg.setTimeStamp(0.0339432764387);
    msg.setSource(31599U);
    msg.setSourceEntity(188U);
    msg.setDestination(45848U);
    msg.setDestinationEntity(243U);
    msg.type = 153U;
    msg.htime = 0.529417471605;
    msg.context.assign("NWVDROLCXRGAERYNMDSVALPMZZMJBNXOUQVCUTFHCVZGBCGFSKXBEWAGXBPDRDNLCYJWGZOIRUXRVQIJWQLPVJSSKSRAKFLQIBDEBAIYNPDEPTNTHTKDUFCUKQZVSSOPOOPNJGUYCQMORGFURFOLWFBATQHMHIJZAAZFTMWHAVEPXXJZSLWLJHYTIKXZYYW");
    msg.text.assign("PMKREAKIUAQHZGVXZF");

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
    msg.setTimeStamp(0.919080170362);
    msg.setSource(8852U);
    msg.setSourceEntity(136U);
    msg.setDestination(58277U);
    msg.setDestinationEntity(232U);
    msg.type = 77U;
    msg.htime = 0.128518892079;
    msg.context.assign("PSWEDNFOGRRSMASMFJEZUZJYNWRWINKKMWLKUILGWOEANBVJQVPFIGPRGEPSODOJFPCKDAXQAGWZMXFBUXZJEZTHPAFYQWHKMZPYFSHCEBTSWBVUMLRLUGHINBY");
    msg.text.assign("CRBMSPRLVJOVRSAWOKKWITFVZLEAGRZVTMXEASHVXVFZAAXXCEUEMORYAJQXYPDEJZDECMYUDBWZXKJQJPOONLPBRBUTHUCIVGJHQLXSBYQMWYUGRIQPYIDFWMLQGWLJAFOCDFGCPSQZMTCNFZGHVHNEQLNXI");

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
    msg.setTimeStamp(0.145933699825);
    msg.setSource(27013U);
    msg.setSourceEntity(176U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(48U);
    msg.command = 7U;
    msg.htime = 0.337446146542;

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
    msg.setTimeStamp(0.758296026692);
    msg.setSource(21471U);
    msg.setSourceEntity(10U);
    msg.setDestination(4236U);
    msg.setDestinationEntity(154U);
    msg.command = 150U;
    msg.htime = 0.829629381755;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 157U;
    tmp_msg_0.htime = 0.573814170374;
    tmp_msg_0.context.assign("STLCSVOPQIJHXKCYZLJYXOECUHWPLBNXNKSCLJBXKZTAASPFSWFMVROCGHUHNZBBBSNLHUTWJMRQXNZQKZQHIYOZVARNUQZPAEOJSTSFWOUXIDHHEKGXDKODBLKUIGMQRFGURTBYKSMFTZNENPGJVIYPOWARZVIGLSWYWPIITRDAQMDFEGVOGUYGXCCOETIAKJFYXDTAVCMYQUXFJVL");
    tmp_msg_0.text.assign("EAFOKEQSLEUUTVGADSGJGPRXKHDRYTVBFESMJEVVLWBM");
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
    msg.setTimeStamp(0.400389491633);
    msg.setSource(5302U);
    msg.setSourceEntity(1U);
    msg.setDestination(17957U);
    msg.setDestinationEntity(98U);
    msg.command = 147U;
    msg.htime = 0.189708873281;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 38U;
    tmp_msg_0.htime = 0.44231367586;
    tmp_msg_0.context.assign("YHSHCQEDOUFWJUZTDOGCLUKMRNWWUWETZQIYSFPOXZVJZBHNDDLKRIQIDFQCNJYYGDPCNKXXMALBLJUGPJGLLTYJUOXWQRYQRTVCASEITQAFBSWHIVPDRZMOFAGNKVIVWOWMSEFSTADUMRELDOXBGKOGZIQCAGSJUVRKWKWEPBYHROQHKSEAQ");
    tmp_msg_0.text.assign("IPHZOZHNRHMYFFKVTDIFLHTWTVPANMMREESIPUJGWUYSEASLIZSRLMGZJKLWWFNFZUNITZXHPSXGJDTKYQCAROMGLASKQRGUUYWUWIXAEJQTBNMHSQDTBWVKLYPUPYYBESMFCIADRJOQ");
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
    msg.setTimeStamp(0.709337821292);
    msg.setSource(40457U);
    msg.setSourceEntity(244U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(14U);
    msg.op = 227U;
    msg.file.assign("UXQCTJPMUKLBJEHIWSHWAQWSKCRSYVPYIBMLOUDTQLPBTEUVRRTQKRLXYCJDBJFCVAANAAZHRAGTERYHMZOGFCVEWGISMEOKPPCYWJMLNHIVUJXGSGJLXMTZJRFUOGICDSASFSOXVUNCAYEXPNKIQHEQYFLHVFHWNZBKDQVDABMHREKZGIJECOYVPMTBKDFMPDODIUCPKRBIBWNSTFXZLGELXUOLWDJFWZGTIWXUNQROZYBXZDZYNMHVAS");

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
    msg.setTimeStamp(0.0431604647223);
    msg.setSource(51942U);
    msg.setSourceEntity(137U);
    msg.setDestination(14159U);
    msg.setDestinationEntity(198U);
    msg.op = 97U;
    msg.file.assign("PFRCZLUXVKOYVRFUPWTUHRVFBVTBVQMGYDEJHONPIYOULULJTBAXAFJXZJKMFA");

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
    msg.setTimeStamp(0.762098382212);
    msg.setSource(23688U);
    msg.setSourceEntity(68U);
    msg.setDestination(11859U);
    msg.setDestinationEntity(116U);
    msg.op = 89U;
    msg.file.assign("WXVRULIKSGDFKKASPGJYOIDZTPHYKTGVQWQDNKJOOQHKNXBORBIBFRYGNPORXBXZLCFKTCVCFIVDNWWFXATDLHIGZFLPQFOYZLXXMSIGTSHTEAAJNWXKYNCQPZEUEVVNUHDPOJEMERBSHUIGAH");

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
    msg.setTimeStamp(0.487798021572);
    msg.setSource(55516U);
    msg.setSourceEntity(85U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(220U);
    msg.op = 64U;
    msg.clock = 0.76063283273;
    msg.tz = -113;

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
    msg.setTimeStamp(0.629677641018);
    msg.setSource(28242U);
    msg.setSourceEntity(192U);
    msg.setDestination(48130U);
    msg.setDestinationEntity(52U);
    msg.op = 250U;
    msg.clock = 0.48608767774;
    msg.tz = 51;

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
    msg.setTimeStamp(0.668164839199);
    msg.setSource(11356U);
    msg.setSourceEntity(229U);
    msg.setDestination(38991U);
    msg.setDestinationEntity(178U);
    msg.op = 34U;
    msg.clock = 0.917343565472;
    msg.tz = -127;

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
    msg.setTimeStamp(0.414567456613);
    msg.setSource(8151U);
    msg.setSourceEntity(89U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(50U);
    msg.conductivity = 0.524883604613;
    msg.temperature = 0.534149225585;
    msg.depth = 0.742274530638;

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
    msg.setTimeStamp(0.271766463468);
    msg.setSource(28625U);
    msg.setSourceEntity(195U);
    msg.setDestination(43449U);
    msg.setDestinationEntity(63U);
    msg.conductivity = 0.349636375927;
    msg.temperature = 0.923957207999;
    msg.depth = 0.534805606559;

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
    msg.setTimeStamp(0.611587018243);
    msg.setSource(61169U);
    msg.setSourceEntity(85U);
    msg.setDestination(25105U);
    msg.setDestinationEntity(50U);
    msg.conductivity = 0.86617574349;
    msg.temperature = 0.529543722152;
    msg.depth = 0.111123053344;

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
    msg.setTimeStamp(0.0102726718262);
    msg.setSource(33484U);
    msg.setSourceEntity(15U);
    msg.setDestination(18442U);
    msg.setDestinationEntity(135U);
    msg.altitude = 0.532143760226;
    msg.roll = 37496U;
    msg.pitch = 19148U;
    msg.yaw = 27892U;
    msg.speed = -27422;

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
    msg.setTimeStamp(0.0313113094998);
    msg.setSource(9484U);
    msg.setSourceEntity(195U);
    msg.setDestination(32788U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.743360486447;
    msg.roll = 33791U;
    msg.pitch = 11733U;
    msg.yaw = 44190U;
    msg.speed = -16630;

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
    msg.setTimeStamp(0.246168994994);
    msg.setSource(16697U);
    msg.setSourceEntity(177U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.53509479411;
    msg.roll = 36601U;
    msg.pitch = 41090U;
    msg.yaw = 44020U;
    msg.speed = 32539;

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
    msg.setTimeStamp(0.017802919793);
    msg.setSource(26300U);
    msg.setSourceEntity(131U);
    msg.setDestination(30438U);
    msg.setDestinationEntity(143U);
    msg.altitude = 0.541420379899;
    msg.width = 0.539148890353;
    msg.length = 0.432235773914;
    msg.bearing = 0.883268891021;
    msg.pxl = 7043;
    msg.encoding = 16U;
    const char tmp_msg_0[] = {-93, 86, -44, -125, -37, -2, 30, -105, 33, -44, -54, 65, 55, 38, -18, -94, -51, 46, -83, 75, -4, 103, 61, 79, 29, -47, -104, -20, -4, -21, -95, 98, -111, 48, -20, 68, 15, -23, 95, -47, -52, 81, -30, 79, 45, 109, -79, -89, 8, -99, -76, 64, 53, -12, 11, 88, 71, -14, 8, 48, -121, 25, 94, -110, -30, -74, 59, 85, -51, 38, 52, -5, 81, 43, -93, 93, 41, -72, -71, -13, -24, -128, 101, -89, -20, 2, 38, 97, 23, 19, -46, 57, -36, 1, 97, 87, 18, -4, 122, 111, -93, 102, -119, 92, 44, 61, -87, 45, 92, 64, -10, -35, -47, 84, -80, 27, -19, 28, -75, 19, 114, -79, 24, -23, 121, -72, -121, -65, 106, 85, -41, 84, -4, -97, 89, -63, 50, -71, 0, 58, -83, 58, -5, -83, -7, 53, 97, -53, 86, -60, -32, -40, 81, 52, 17, 5, 72, 18, 95, 31, -46, 51, -85, 67, -73, -120, -104, 52, -99, 106, -13, -32, 117, 121, 24, 108, -102, 115, -82};
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
    msg.setTimeStamp(0.257272570806);
    msg.setSource(48315U);
    msg.setSourceEntity(83U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.229813768535;
    msg.width = 0.570093934522;
    msg.length = 0.811980393589;
    msg.bearing = 0.623253512991;
    msg.pxl = 24806;
    msg.encoding = 124U;
    const char tmp_msg_0[] = {111, -114, -76, 82, -76, 117, -59, 53, -50, 92, 99, 23, -27, -105, -106, -10, -43, 104, -22, 46, -115, 114, -62, -66, -11, 21, -121, -93, -16, 57, 114, -49, 98, -47, -6, -33, 111, 105, 3, 63, 100, 44, 8, -121, 37, -30, -9, -116, 94, 44, 64, -38, -83, -31, -118, 45, 95, 36, -96, 90, 75, -72, 53, 77, -96, -59, 72, 4, -48, 77, -39, 13, -113, -9, 97, -110, -34, 28, 121, 46, 59, -101, -113, 22, -114, -17, 18, 69, 98, 94, -86, -59, 70, 54, -51, 83, 71, 83, -2, 111, -102, 29, -64, -36, 27, -127, 94, -117, -61, 13, -107, 69, -40, 65, -97, 46, -105, -124, 53, -43, 114, 94, 115, -78, 28, -97, -10, -26, -115, -63, 100, 67, -46, -91, -66, 114, -12, -58, 45, 111, -24, 88, -106, 71, 47, -121, -53, -59, -124, -27, -28, -99, -14, -41, 63, -53, -106, -4, 44, 48, 47, 96, -117, 13, 16, 30, -114, 10, 124, -41, -114, 82, 54, -123, -9, 37, 25, 41, -117, 125, -96, -56};
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
    msg.setTimeStamp(0.63293060189);
    msg.setSource(15925U);
    msg.setSourceEntity(1U);
    msg.setDestination(10056U);
    msg.setDestinationEntity(253U);
    msg.altitude = 0.530038061787;
    msg.width = 0.812694357569;
    msg.length = 0.833569017688;
    msg.bearing = 0.577584378335;
    msg.pxl = 25175;
    msg.encoding = 234U;
    const char tmp_msg_0[] = {-127, 38, 50, 86, -34, -84, -20, 103, -29, 112, -95, 32, -98, 99, 104, 20, -27, -2, 66, -45, -6, 38, -57, 1, -109, 118, 10, -47, 27, -45, -43, -51, 42, -126, 73, 64, 78, 98, -4, 73, -69, 104, 45, -67, -6, -48, 20, -35, -75, 110, -60, 118, -121, -65, -62, 31, 90, -86, -36, -126, -1, 13, -46, 0, 31, 75, 7, -102, -50, -91, -99, -41, 98, -3, 121, 110, 88, -15, -124, 27};
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
    msg.setTimeStamp(0.351390812459);
    msg.setSource(59337U);
    msg.setSourceEntity(169U);
    msg.setDestination(28549U);
    msg.setDestinationEntity(133U);
    msg.text.assign("EYVFCHSAPRWGZBWOKTVIPGITCYAQNJTEPQWQRJANFRKEKCGYQXWGMMINBFNQVRKVDALSGIKJWDLLGMILBTZCSNFZDPMBLJEOIYRVUBADTFNZLLJCNMOCOQCPUMKAHYDQKMJESFLSLHMHOWZVXEYRXUQBPDNWUGICJJXJPFOKHSHXUXLPNVIXXRWVBGZBZAHEGPCSUTDKOTZVYHSSZH");
    msg.type = 8U;

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
    msg.setTimeStamp(0.153549537564);
    msg.setSource(43903U);
    msg.setSourceEntity(121U);
    msg.setDestination(45906U);
    msg.setDestinationEntity(13U);
    msg.text.assign("GAEPKHZNIZULCYDWMCWWNNKQXBZDVDEKPTTQMQZVXSGEAIBQZSGODEZMLTSSXYFFKJXHLUUTKEUPOAJLRNKIENABBAPVWXSGGQZDUJIREFTVYYXFIRYCFEQBRBFVMZYTLDHGJDGYPXAHVMNNJVCBXHTBRCOWIQFKSVNYORYSAUWHQRMOHKAPLWBPIJWLYKCVDUMGMOOCFHB");
    msg.type = 48U;

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
    msg.setTimeStamp(0.691255244016);
    msg.setSource(19742U);
    msg.setSourceEntity(236U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(247U);
    msg.text.assign("PEWWRRETINZUSKHYEJNHYMWPPKMSGBBKMXFUXEGICZOHBZPKALTCFWUTKONRRKYZFRBUJBPVDWLVPXETEDJBSAIJJICHURMWLQ");
    msg.type = 136U;

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
    msg.setTimeStamp(0.383016416423);
    msg.setSource(20312U);
    msg.setSourceEntity(195U);
    msg.setDestination(2331U);
    msg.setDestinationEntity(208U);
    msg.parameter = 70U;
    msg.numsamples = 57U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 20354U;
    tmp_msg_0.avg = 0.475495074479;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.685631768808;
    msg.lon = 0.943811501835;

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
    msg.setTimeStamp(0.368470191757);
    msg.setSource(26622U);
    msg.setSourceEntity(69U);
    msg.setDestination(43589U);
    msg.setDestinationEntity(16U);
    msg.parameter = 198U;
    msg.numsamples = 46U;
    msg.lat = 0.421714341758;
    msg.lon = 0.451721681632;

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
    msg.setTimeStamp(0.699819939825);
    msg.setSource(48799U);
    msg.setSourceEntity(213U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(188U);
    msg.parameter = 145U;
    msg.numsamples = 124U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 26544U;
    tmp_msg_0.avg = 0.898171324009;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.812654544163;
    msg.lon = 0.0402818083429;

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
    msg.setTimeStamp(0.0954042235268);
    msg.setSource(17929U);
    msg.setSourceEntity(40U);
    msg.setDestination(194U);
    msg.setDestinationEntity(18U);
    msg.depth = 11343U;
    msg.avg = 0.638658178105;

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
    msg.setTimeStamp(0.811336080602);
    msg.setSource(39610U);
    msg.setSourceEntity(173U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(147U);
    msg.depth = 32388U;
    msg.avg = 0.902012875623;

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
    msg.setTimeStamp(0.638499050004);
    msg.setSource(34617U);
    msg.setSourceEntity(203U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(197U);
    msg.depth = 15969U;
    msg.avg = 0.410915764958;

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
    msg.setTimeStamp(0.558798424352);
    msg.setSource(53223U);
    msg.setSourceEntity(158U);
    msg.setDestination(57802U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.788965996257);
    msg.setSource(65061U);
    msg.setSourceEntity(186U);
    msg.setDestination(46655U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.925872127098);
    msg.setSource(18507U);
    msg.setSourceEntity(199U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.71243347143);
    msg.setSource(7100U);
    msg.setSourceEntity(215U);
    msg.setDestination(36443U);
    msg.setDestinationEntity(123U);
    msg.sys_name.assign("MRIUBMJZDHAEUTVYLKXGCFGTDKIQBQIMMKLSQVNNOYHHFKDUYPGGPSCAADJPDCUOGIGUBLLNEQQNREHVUSBMNKPTSEHHZALXFJFTFXAPOCJLQHSXYRIOCRNWXTWOTKWBMWPLCKENIKZJTMNVBZOAWRRWEJIWGUFDKQFZEKTSSUXWSAXRTFURYDLFJYSZGIMRUEPHYNBVAGIYLXYEOVWEGQOBHXZVYC");
    msg.sys_type = 55U;
    msg.owner = 6171U;
    msg.lat = 0.534825707842;
    msg.lon = 0.438926138048;
    msg.height = 0.82131921985;
    msg.services.assign("HPTEOJRXJONSKPVCUPXVQYKLIMWFDAJEZYUJRDTMHKCAXOQCPGGQLYCDXSGDMFSKUOTHYZLEJRXZWZXVKQUVRQWYSKGBKBTGUNZQDEOEQSNVXDUOGANMTSEFREOWFINYBVJHQJIAKGWBSWRPUEPWENNCHVSMLPZZAIJPAGCHHOGOBI");

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
    msg.setTimeStamp(0.798781313884);
    msg.setSource(42614U);
    msg.setSourceEntity(249U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(126U);
    msg.sys_name.assign("YQLMKLFHGELHORVTRDPEYGHHJBPPJOQSRXWNVEWRDUJYCKAWCTVGVGTYMTIUKKNBFEENZNBMXAGLNPLB");
    msg.sys_type = 228U;
    msg.owner = 31067U;
    msg.lat = 0.582209210029;
    msg.lon = 0.71741607642;
    msg.height = 0.476670264067;
    msg.services.assign("YXTADGUEISAZFMIXCMWIGQPZOUEGBLRSZGNBWLVDUDNQDHJWRDNAJGREBPLIHBJMNFTPSXKFRNATTIXKXNIZTYHIOIMTTMVOJQHPGESUQTOIYRZK");

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
    msg.setTimeStamp(0.7848862477);
    msg.setSource(40869U);
    msg.setSourceEntity(245U);
    msg.setDestination(46049U);
    msg.setDestinationEntity(96U);
    msg.sys_name.assign("YJCCNGBRJPTJYGJQYRFMJLQIJDDPWWLMOXVKHSPGFRYAHAXPUCSUEZYCBDPFZHZJNNLOSEUHSWIHFUSYBFRYTRORJTYSZMNXVUFZOALIZPWIKLLMHQFVMDLTXTOMGEIY");
    msg.sys_type = 219U;
    msg.owner = 41911U;
    msg.lat = 0.53990650642;
    msg.lon = 0.457249625603;
    msg.height = 0.605177813062;
    msg.services.assign("XOJDKOBUEZHCFUAWFSALLZNKLGGUMGGLXRVYOCDEGJLTIBLEWMYXJCYWFLGOAUBISVUPEAAKGIHXWMRTPSWVZIBBJIQVDCNXDVOYCJYGNKNFRZEUBSEPC");

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
    msg.setTimeStamp(0.346437714677);
    msg.setSource(62258U);
    msg.setSourceEntity(58U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(207U);
    msg.service.assign("IURZRBGSNZLMBLHHKTUOAVDQHDKCTCWHVPMGVUBOGJSUFUTGBADIDSCKTMYPIOSEIYJXYZEKWWAITELJYKRJRFONGAELOJSJQGYRPXYSXBMUFFIDARQVLNBTLXVGNPZZTUSZYPMJCVEJBVNFVCKAPSGFMWQ");
    msg.service_type = 33U;

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
    msg.setTimeStamp(0.966363109493);
    msg.setSource(30858U);
    msg.setSourceEntity(217U);
    msg.setDestination(46998U);
    msg.setDestinationEntity(43U);
    msg.service.assign("QBBMEJGCJXKDXHFAUVPPNAOGODJYJMOHZHVZJMUCSATDVLXBVQDUNEKMMQLXXZWJNIBAJSEQVTTRSUGFVZATTNQETAVPCZYLRLHZPYQGOSCDTFTLHITCWSOWPAOENYANUUUPONEFLRYLPOULFYGWKRYIKBDKBUQBSBXCWIGIRPAIHZZGWEQWNDYZFMDMLOKEYUIEGXVDKFACRXEIPFQOJRPWMKS");
    msg.service_type = 233U;

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
    msg.setTimeStamp(0.570383909016);
    msg.setSource(55650U);
    msg.setSourceEntity(130U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(99U);
    msg.service.assign("FJTYMIGXRTYZKEBSRSBDPEASCEKDRSCPP");
    msg.service_type = 212U;

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
    msg.setTimeStamp(0.238113516536);
    msg.setSource(9555U);
    msg.setSourceEntity(180U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(160U);
    msg.value = 0.636541711412;

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
    msg.setTimeStamp(0.335424495505);
    msg.setSource(61789U);
    msg.setSourceEntity(226U);
    msg.setDestination(32388U);
    msg.setDestinationEntity(60U);
    msg.value = 0.129177318255;

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
    msg.setTimeStamp(0.576535797233);
    msg.setSource(27302U);
    msg.setSourceEntity(51U);
    msg.setDestination(57993U);
    msg.setDestinationEntity(145U);
    msg.value = 0.853871787506;

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
    msg.setTimeStamp(0.903104192534);
    msg.setSource(21788U);
    msg.setSourceEntity(237U);
    msg.setDestination(30354U);
    msg.setDestinationEntity(140U);
    msg.value = 0.928598886094;

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
    msg.setTimeStamp(0.593900445873);
    msg.setSource(37141U);
    msg.setSourceEntity(122U);
    msg.setDestination(60739U);
    msg.setDestinationEntity(83U);
    msg.value = 0.0126972479842;

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
    msg.setTimeStamp(0.163011002259);
    msg.setSource(25125U);
    msg.setSourceEntity(147U);
    msg.setDestination(19759U);
    msg.setDestinationEntity(183U);
    msg.value = 0.865066473588;

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
    msg.setTimeStamp(0.606100249472);
    msg.setSource(62312U);
    msg.setSourceEntity(75U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(140U);
    msg.value = 0.76739049233;

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
    msg.setTimeStamp(0.906099735013);
    msg.setSource(5087U);
    msg.setSourceEntity(67U);
    msg.setDestination(42474U);
    msg.setDestinationEntity(197U);
    msg.value = 0.0299922653361;

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
    msg.setTimeStamp(0.421658881238);
    msg.setSource(12184U);
    msg.setSourceEntity(172U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(235U);
    msg.value = 0.11143775638;

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
    msg.setTimeStamp(0.471838697399);
    msg.setSource(29286U);
    msg.setSourceEntity(86U);
    msg.setDestination(2945U);
    msg.setDestinationEntity(34U);
    msg.number.assign("KOFDVGSYVUWBLNHRCGBCUABHFPMGMZQIAHEFZKRJEPBCMCKYJHELNFIPTIUGISZAMXWIYTPDQJULRVAFHHHKLXVXTSOIASQGMAVWNLEMGRSSFNWCBICY");
    msg.timeout = 5821U;
    msg.contents.assign("YPURHCUGFOERJTQWT");

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
    msg.setTimeStamp(0.753227927665);
    msg.setSource(28743U);
    msg.setSourceEntity(131U);
    msg.setDestination(26807U);
    msg.setDestinationEntity(60U);
    msg.number.assign("FEHOOKYSSEXUJGMUQGSDPZWHGXPQZFTJWOZRMTABVIDBMCBSCKLNWBIRCDJJMXZORLZKBHVVCCLXPAILUGXEUKPAGONSXAJNTKYZCJIQTAZGSUHWSOBYFWDLZVFRDFWDFQWKVBBRVWLHACNFKQPEUSXEJOIKTENCNPVKHOIMNLPMAJFAYDRNORTADPBWMJEAVRDULFQBWQEEYHZIXUGYGDKMYTTJYUGXZL");
    msg.timeout = 41068U;
    msg.contents.assign("FABIYMVZKGFVXTTCLNTNLHBRIUQVVCEOHJRFQCVZKNUWGBMSKIDRYOYPSXOUKEBJLGLHMJANKEVILCSXNAXJWXTQATQRHPGUQJBRKJVWOQFWYPCHNRUSHDONSLCCPZQWYTPDWMHHGGLCUVFTQOEGEPPLOSXTUJPMMXXLAJTVEOYFSSBMNWYEZ");

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
    msg.setTimeStamp(0.956757862455);
    msg.setSource(53623U);
    msg.setSourceEntity(183U);
    msg.setDestination(25644U);
    msg.setDestinationEntity(49U);
    msg.number.assign("CXHJPFVYAFLUZTQERSIPWXJGUNWPRCGXVIVNDTZQLARZYXMPCWDNZYSFJHPBBWMDVEUZWEMORFUDQVZNYOEYTHZIGJGEXROXABKFCJBWQBAVKXSKZEUGXBTYHCSSORYPZCEULANIMFDTFGCBLAJLTXKADUEKZVYNYASNKITICODTRSNOVOMUNBMOJKKLASTHRFPUOQH");
    msg.timeout = 37660U;
    msg.contents.assign("QDVGTEAOGAURUZBNEXWNKVQKICDXRSYYIMKOMTHSOXQWCJW");

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
    msg.setTimeStamp(0.276910187365);
    msg.setSource(16338U);
    msg.setSourceEntity(4U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(239U);
    msg.seq = 674277368U;
    msg.destination.assign("IKHWGJGSXHVWONXPBOVJDPIRPYUQMWYGGHJXBCGTPQDCKWFVNDFHKSCASMIUIXZGEUEOIUBSPICAXXCKTVZTBACRZWDMFAAIGFLRRMAQAREROIXNEWXMSEVXKII");
    msg.timeout = 62752U;
    const char tmp_msg_0[] = {-127, -92, -72, 34, 41, -13, -74, 81, -28, -101, -57, -53, 49, -104, -75, -125, -70, 107, 75, 96, -84, -127, 36, -120, -49, -104, 56, 19, 120, 4, 30, -20, -16, -100, 124, 26, 36, 0, 85, -42, -127, 25, -120, -64, 106, -72, -8, 37, 56, 88, 117, -50, -105, 0, 53, 9, 24, -75, 71, -38, -20, -84, -91, 39, -9, 36, 100, 43, 108, 22, 89, 117, -100, -6, 78, 123, 2, -73, -108, 7, -95, -33, 118, -4, -2, 72, -110, 107, -7, -15, 96, 85, 10, -112, 30, -14, -73, -61, 88, -102, -89, -55, 89, 121, 78, -69, -5, -125, 7, -85, 120, -61, -5, 55, 32, -63, 32, 51, 86, -29, 86, 36, 38, -53, 9, 73, -45, 31, 26, -34, 37, 77, 63, 24, -8, -93, 66, -117, -70, 92, 64, 14, -50, -44, 83, 104, -77, -49, 47, -2, 29};
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
    msg.setTimeStamp(0.775181041166);
    msg.setSource(5002U);
    msg.setSourceEntity(232U);
    msg.setDestination(20284U);
    msg.setDestinationEntity(99U);
    msg.seq = 1453392491U;
    msg.destination.assign("USHXJPZGYEZYLJORYRJKWEBIRAYLDPSWHMGRSNATOS");
    msg.timeout = 10331U;
    const char tmp_msg_0[] = {-121, -83, -4, -74, -17, -26, -88, 24, 101, 36, -76, -82, -1, 12, 80, 53, -106, -67, 72, -22, 77, -49, -88, -13, 126, 108, -89, 52, -95, -38, -38, -75, -61, -127, -25, 2, -68, -73, 101, -79, -127, 60, -117, 116, -50, 57, -10, -111, 105, -89, 102, 16, -63, 79, -57, -46, 94, -61, -43, 112, 40, 61, 97, -40, -8, -58, -105, -70, -2, -113, 89, 41, -52, -29, -17, 86, -95, 45, -57, 62, -75, -109, 88, -89, 78, 46, 83, -102, -68, -30, -53, -62, 86, -22, -2, 14, 35, 105, 83, -68, -101, 18, -5, 66, 69, 83, 25, -85, 5, 8, 94, 58, -4, 97, 53, 4, -77, 38, 66, -88, -91, 46, 11, -96, -67, 21, -58, -36, -38, -103, 65, -90, 103, 119, 27, -120, 30, -5, 100, 114, 90, 68, 72, -54, -75, -91, -32, -111, 18, -96, 70, -25, -107, 37, -2, -27, 43, 123, 69, -21, -80, -39, 61, 85, -56, 95, -66, 123, 16, 28, -119, -75, 14, -22, -15, 109, 30, -50, 93, -19, -58, 50, -66, 14, -127, 109, 109, -81, -62, -88, 91, -124, 79, 38, -38, -98, -33, 75, 10, 98, 89, 57, -91, 34, -22, 17, -22, -43, 111, -35, 29, 23, 43, 86, -28, -69, -80, -43, -104, -99, -75, -84, 6, -1, -15, 62, -106, 34, -18, 63};
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
    msg.setTimeStamp(0.902818223642);
    msg.setSource(38727U);
    msg.setSourceEntity(43U);
    msg.setDestination(61680U);
    msg.setDestinationEntity(169U);
    msg.seq = 4143925777U;
    msg.destination.assign("DZXLJXCSGUPJIVYHXRAOEDUVCOUSATAOGPRMZFQLIZWIIVZNYXUHGIAKBYCDERCWKFKPMTOKNVJQRGJVQEERIWUAQMWHMBLIGHKNWEHFOXDQNYMYRSZLFQBSQQOLHVPASTSMUTTCENWJSXABOBRHXQVRMBIUT");
    msg.timeout = 10496U;
    const char tmp_msg_0[] = {-57, -121, 24, -53, -46, 61, 101, 0, 51, 113, 73, -19, 29, 111, 100, 93, 34, -47, 92, 100, -66, -34, -12, 28, 24, -97, -15, -8, -106, -46, 4, 73, 73, -22, 117, -7, 122, -127, 32, 4, 11, -13, 61, -10, -40, 58, 77, 52, -57, -99, 15, -127, 115, 44, -17, -73, 125, -70, 23, -42, 58, 47, -51, -50, 5, 60, -48, -52, 34, 41, 61, 100, 54, -60, -104, 93, -18, -66, -51, 33, 93, 64, -125, 96, 126, 58, 72, 14, -78, -102, -92, -116, -53, -84, 6, -5, -68, -64, 75, 98, -29, -6, 63, -98, -60, 40, 25, -64, 68, -14, -60, -114, 61, -33, -25, 3, 59, -6, 120, 33, -15, 44, 75, -36, 108, 47, -111, 120, 31, 105, 38, 27, -109, -78, 5, 123, 117, 95, -83, -47, 45, -18, -25, -47, 111, 23, 0, -74};
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
    msg.setTimeStamp(0.338433480429);
    msg.setSource(59517U);
    msg.setSourceEntity(119U);
    msg.setDestination(11863U);
    msg.setDestinationEntity(27U);
    msg.source.assign("GNNXXEVXJWMYDLSDKVRTKLHKQPGWSGBOFIFMCCHYLFCCXUPJQBCSZCLOOWNOXRXWQHLHFYOALLAEQCQPYQDQRYVWZWJXJXAHNJWTUE");
    const char tmp_msg_0[] = {44, 25, -124, 55, -51, 26, -31, 1, -8, 95, -112, -81, -87, 68, -112, 85, 105, -38, 67, -105, -63, -121, 44, -84, 26, 118, -83, -115, -49, 30, -30, 41, -114, -99, 61, 70, 91, 79, 31, -98, 104, -119, 64, 8, -2, -40, 18, 44, -55, -16, -111, -60, -95, -63, 90, 105, -66, -123, 61, 30, 32, -74, -117, -11, 38, -26, -76, 31, -114, -11, -84, 60, -123, -68, -49, -105, 115, 108, -88, -102, -40, -33, -40, -16, 7, 80, 125, -7, -10, -103, 51, 125, 72, 6, 24, -91, 9, -29, -123, 18, 77, -86, 82, 48, -101, 43, 88, -2, 18, 52, -81, -93, 31, -44, 25, -100, -54, -77, -40, -51, -119, -33, -39, -31, 116, -120, 62, 56, -83, 51, 5, -58, 12, 55, -29, -85, 72, 91, 84, -63, -32, -18, 23, -82, -47, -119, -3, 11, -88, 52, -81, 17, 102, 10, 74, 80, 115, 55, 109, -120, -86, -96, -3, 1, 107, -100, 21, 49, 31, 66, -17, -73, -26, 109, -4, -82, -54, -123, 28, 12, 110};
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
    msg.setTimeStamp(0.906358121648);
    msg.setSource(32807U);
    msg.setSourceEntity(66U);
    msg.setDestination(40040U);
    msg.setDestinationEntity(145U);
    msg.source.assign("DFRGYXNSKLAVSKBTXJROQEAZGDRQCCNQOVUSBQZWZHMRXPVCTKNFJ");
    const char tmp_msg_0[] = {78, -73, 39, 10, -8, -49, 21, -46, -74, 103, 83, 69, 51, -70, -59};
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
    msg.setTimeStamp(0.702008851312);
    msg.setSource(43270U);
    msg.setSourceEntity(21U);
    msg.setDestination(2331U);
    msg.setDestinationEntity(205U);
    msg.source.assign("PRAZJBPWJRJTIFRLFNYAAJUQUFKDEKXIVERPEUOIWXNVMGNDPROSOWDDJTNPYGHQIOQDELLGMCUJXMZLDSBCTLOMCXYWOIKWSBTGODKYSHQWZAKAFEVQCNDSCXEVZTOIUNVQIQKXYXHLRKZUAIMKZVFSAETPBYLECNTOTNLRDVFPFHSKZHJCQTHSTBRHWGMZFEGNXJPUBMBYICQMRBP");
    const char tmp_msg_0[] = {-66, -54, -73, 42, -108, 12, -103, -108, 114, 100, 66, 17, -19, 66, -8, 42, -67, -52, 2, 83, 58, 90, 3, -65, 17, 85, 1, 41, 23, 23, 4, -89, 9, -3, 38, 40, -95, 7, -77, 120, 115, 53, 71, 82, -97, -62, 114, 92, 32, -43, 121, 35, 68, 80, -110, -113, -77, -115, -61, 35, 75, -38, 110, 52, 98, -61, -90, 3, -114, -88, 62, 124, 71};
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
    msg.setTimeStamp(0.990444494551);
    msg.setSource(8982U);
    msg.setSourceEntity(61U);
    msg.setDestination(1582U);
    msg.setDestinationEntity(134U);
    msg.seq = 260362189U;
    msg.state = 2U;
    msg.error.assign("KRPTSVAQMWGRMPGBPIPMNAHDVCIYBXLRSPKCIUGWXTHSJMCBWFTLRCEWZZWFDGYJKVLKDWIHEOYYYOKLSZPOPIHPEMEXCUTBDJSDHFFRVHPXGKRXDVYUBQDTNI");

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
    msg.setTimeStamp(0.124956961642);
    msg.setSource(61019U);
    msg.setSourceEntity(62U);
    msg.setDestination(33929U);
    msg.setDestinationEntity(47U);
    msg.seq = 1706513359U;
    msg.state = 219U;
    msg.error.assign("VDOLINOFZWJGOAVBZTSKFYDXGXLGOTLDZGVHLVCMASMXGREJWTEESGXQPAAZRSG");

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
    msg.setTimeStamp(0.431036223268);
    msg.setSource(481U);
    msg.setSourceEntity(129U);
    msg.setDestination(13963U);
    msg.setDestinationEntity(243U);
    msg.seq = 3877503970U;
    msg.state = 69U;
    msg.error.assign("GICYDZPAGOMVRKLWGXDZXXMOIUZPZROWDTCYZUSGHHAEPWPWQJWOJKLCPLQBOHHQPNMUIRLCRPQFHUFTNDUODYJNOIYUXBFGAGESKJXVFYISNTSWFKWBVUBFXMLQJYBENTTBUYHFQPLQDGZDEAMTKSUJOZVBNECANTCMAXKHTVGOEAMBNXEJVDPSONPEKVRMVLSQYBRRWLVTGFIMTUFEXKQBAFZIISCRHMXRZ");

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
    msg.setTimeStamp(0.939622938159);
    msg.setSource(18255U);
    msg.setSourceEntity(126U);
    msg.setDestination(18902U);
    msg.setDestinationEntity(84U);
    msg.origin.assign("ACKVVHHTEGIXEQDTBZJRYJICIIRWFDKBCYOPJUPJAMXNZAEFWFLGIZUGBSHMQKULPQXPDTPYRXUDFLBUUNDAEVZIMCRPVMFEAAMOTCQPKSWBYXBVRCIIMOAZRELLXONOFCOYTXHFNBCZYABWFHTTJWJWJVHPQJTNDDHLGZSBDSUUNELOQZOLAMZTSQZWYNSVMYEUNKQGFIBMLCH");
    msg.text.assign("FPLNPOHKHQVBWUBERUVZR");

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
    msg.setTimeStamp(0.922236658545);
    msg.setSource(42139U);
    msg.setSourceEntity(201U);
    msg.setDestination(44162U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("ECLIZJJBMKAGXLMQWAEWFNUMAXYUYFBWAKOSKFERZGLTJVDALWXXWRSLNOPQCHJUAHIGEYHKSNOLOTEHIGTDKVCMRIJKYUFTRBWST");
    msg.text.assign("EHWUDZPYISKIFHBXDKIZYPVZCUGIHWGSVBUSWAUGQPTMGVXYSOTIVFFZNUEOKRBSSLDLNAJUOGOFHVYRQBG");

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
    msg.setTimeStamp(0.538437110376);
    msg.setSource(25938U);
    msg.setSourceEntity(184U);
    msg.setDestination(20363U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("UNKWHBIBDXQZKCLGQGCZJIBQCHCTLPXVUPBJEOMGUZHMXWAKIAIZPTKQEWJUTSDQPSEOHZYEMTW");
    msg.text.assign("QZWUIPMZNCHLHGTDCYWPSRSZNEOKCLHFMQKGAKSKESOZJUHSRNXJTDVGBYEQGHXAPKWXDAFOZOYURAALFJUSWZZTNCECTLUIBRXRQITVWMIBDDSQDMMFYNZCWOGEFXJTEWOVUDNEVHGPMIQIQURYBBFPNLVXCPARMAMDRQNLHABXVPBNYVXSGJWVVYHEEHEIRXSTLRMYBLAKTJFXIZUONPVJPGTUOIKLPYBBSWAMC");

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
    msg.setTimeStamp(0.138285539029);
    msg.setSource(32674U);
    msg.setSourceEntity(50U);
    msg.setDestination(11853U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("JBQGNOWRLSCZBFRADCBJQACRTNPLHFUZRTDNYNIZFIMDTVHLPWVBTOXXUJVZWNTMSQRGMVBKAHZAXALCJYCJCNHYGTYZLGAIWIWQMKMEJPOHERGQEUKKQQHTUDPPLFPJZXYNLOGXUBGFAUEEGWRCWOUSYEFBPJCQLXXUOF");
    msg.htime = 0.907033132577;
    msg.lat = 0.0192604937587;
    msg.lon = 0.817502752064;
    const char tmp_msg_0[] = {24, 47, 72, 18, -17, -65, 106, -93, 19, 34, -37, 78, 15, 66, -60, -97, -57, 98, -85, 91, 123, 13, -120, -72, -96, -59, -46, -64, -23, 75, -8, 106, 63, 68, 2, 2, 122, -43, -111, -44, -11, 79, -111, -12, -80, -68, -27, 83, -123, -18, -22, 12, -85, 86, -30, -123, -13, 75, 75, 18, 106, -120, 70, 56, -125, -117, 126, 27, 61, -95, 17, 93, 54, 71, -22, -102, 56, -82, 14, 120, -36, -69, 38, 99, -23, 28, -10, 116, -110, 23, 112, -51, -109, 5, -23, -21, 3, 77, -74, -28, -19, -119, -66, 18, 68, -38, -76, 115, -75, 19, -33, 61, 54, 98, -106, 26, -49, -49, 78, 35, -47};
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
    msg.setTimeStamp(0.738319487178);
    msg.setSource(20648U);
    msg.setSourceEntity(22U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(101U);
    msg.origin.assign("WRVBLJFHPVGBNZOJZPEWRCNYIIWLYKACJJOZIDQUXIYDLAYQSBSULWDUKWZNAQPAVNTEJOVTGSKCEKQJRHRIMWCRSJNMWKVFODISMBSYGCAEPHJRQMPHOLGDZQAPKEFRKCSBEXSAUHIPJBTNQWPXMNGMFHRDTBMTXOIXEVKQUXZFLBNHAXYVF");
    msg.htime = 0.253526454038;
    msg.lat = 0.687604613313;
    msg.lon = 0.960376894985;
    const char tmp_msg_0[] = {50, -128, -114, 54, -54, -34, -64, -124, 16, 113, 44, -17, -54, 102, -8, -28, 45, -105, -52, -126, -60, -124, -81, -93, -97, 29, -127, 71, -94, -53, 52, -20, -70, -117, 122, 13, 54, 66, 83, -52, -60, 19, 88, -9, 27, 83, -33, 45, -67, 43, 1, 56, -31, 48, 79, -122, -47, 79, -49, 92, -119, -79, -62, 61, 101, 68, -74, -62, 32, -53, 61, -21, 116, 48, -18, -82, -32, 73, 43, 111, 80, -68, -120, 101, 59, 94, 111, -94, 88, -108, -35, 42, -109, 58, -121, -41, -10, 105, 28, 93, -77, -109, 33, 41, -76, -121, -50, 23, -115, 23, -50, -15, 49, -5, -123, 80, 109, 96, -78, -77, 72, -60, 75, 86, -51, 37, -18, -40, 44, -116, 85, -6, -91, 59, -94, -43, -5, -78, -80, 18, 48, -30, 6, 27, -44, -54, -51, 90, -62, 8, -65, -42, -82, -48, 111, 23, 47, -75, 10, -15, -125, -32, 126, -42, -41, 28};
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
    msg.setTimeStamp(0.959486634888);
    msg.setSource(50093U);
    msg.setSourceEntity(158U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(241U);
    msg.origin.assign("XTSXIBYNHHZGRCMFSUBTMLCNQLYYQQARTVSZCZZJUEGERFJHILESNMXZQYTDSYUAMYIOPZJFRBJFNULATICOLONZLFVJQOGPHUVPGHBAGCKWFYBMKBVJBPXAJYNTHHYRPXOZRTGCRWEWSCRTFNFZJUOEPVSWCCKMUSDKS");
    msg.htime = 0.704415679978;
    msg.lat = 0.772414579339;
    msg.lon = 0.796943836342;
    const char tmp_msg_0[] = {-13, 39, -112, -93, 90, -16, 109, -28, 46, 40, 34, 40, 93, -35, -29, -68, 63, -95, 15, 68, -97, -123, 56, -77, -30, -26, -54, -8, 71, -28, 90, -117, -38, 116, -78, -15, -60, -105, 17, -19, 63, -74, 64, 74, 31, 7, -43, -117, 94, 69, 123, -41, -29, -105, -30, 36, 87, 48, -36, -92, -47, -108, 51, -111, 120, -86, -24, 25, 45, -55, -52, 119, 58, -41, 91, -84, -127, -95, -117, -71, 61, -69, 58, -55, -2, 93, 16, 90, -72, 30, -111, 114, -126, -11, 22, 102, -14, -117, -97, 103, 85, -21, 109, 61, 107, -37, 20, 69, -113, 34, 104, 73, 102, 8, 61, -98, 29, 23, 119, 104, 109, -44, -87, -124, 70, -44, 109, 81, -107, -87, -10, -84, 29, 92, 35, -94, -86, 105, -84, 85, 119, 76, -105, 94, 97, 5, -82, -98, 124, -123, 124, -9, -76, -72, 83, -86, 112, 113, -57, 21, 14, 67, 46, -32, -75, 59, -5, -74, -6, 40, 7, -108, -80, -75, 54, 110, -85, -75, 87, 87, -72, 52, 108};
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
    msg.setTimeStamp(0.0563767629229);
    msg.setSource(9374U);
    msg.setSourceEntity(55U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(13U);
    msg.req_id = 408U;
    msg.ttl = 48245U;
    msg.destination.assign("BNEYTXYIVMHVKYEUHSKWMAGAMQPBGRFQXSUAZTAVCDBWNWISJIFAPTHWKSWPFWNFIEVLNUQCZVXPCMLNJMGYJCUTHHNKRLXJNNXITNORIRSPQCROOLBDZKEVLUETYZSHRWDURJXDSDLGPVGQZAEI");
    const char tmp_msg_0[] = {-74, -22, -18, 71, -27, 54, -93, -126, 121, -20, -100, 16, -121, 99, -24, 89, -9, -46, -25, -85, -117, 38, -29, -105, 123, 80, -88, 89, 100, -60, 12, 60, -37, 123, -67, -23, -120, 105, -11, 103, -85, 107, 5, 107, 120, -3, -4, 16, 4, -59, 17, 40, -62, 0, 21, 35, -4, -56, 97, -122, -6, -4, -99, -40, -127, -79, 43, 20, -45, 36, -65, -32, 62, 62, -26};
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
    msg.setTimeStamp(0.463388388243);
    msg.setSource(41561U);
    msg.setSourceEntity(219U);
    msg.setDestination(4039U);
    msg.setDestinationEntity(122U);
    msg.req_id = 56802U;
    msg.ttl = 24762U;
    msg.destination.assign("ZNNPEPUXHYRNXKYCLRCXZRJBUVMTAVEOSSGATEDSUNIEFPAVJKCCEPBYYZYUVBKRTOYREXBVGSYFUWBRNOVJETSMPOGZWJEI");
    const char tmp_msg_0[] = {-108, -80, 1, -69, -2, -72, 77, -59, -104, 122, -95, -126, -91, 29, 78, 62, -67, -23, 70, -114, 40, 56, 65, -124};
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
    msg.setTimeStamp(0.157187177551);
    msg.setSource(26606U);
    msg.setSourceEntity(19U);
    msg.setDestination(1172U);
    msg.setDestinationEntity(67U);
    msg.req_id = 7868U;
    msg.ttl = 3729U;
    msg.destination.assign("GMMPJCTINWTYEXOXUIDCZGWESXQOPJTNONJSQCVZNRJDAEYCFEPBXOLXFVGSWHZWZIFZFXGPU");
    const char tmp_msg_0[] = {12, -96, 71, 73, 48, 89, -31, 55, -114, 118, -72, -80, -100, 25, 58, 123, 84, -107, 52, 49, -10, -75, 50, 69, -83, 106, 123, -66, 23, -68, -2, 68, 116, 108, -95, -69, 81, 116, -3, 12, -116, -80, -118, 58, -87, 24, 37, 25, -7, 44, -14, -107, -68, 77, -76, 93, -97, -35, 17, -89, 92, 66, -72, 100, 47, 51, -102, 22, -106, -104, 117, -64, -38, -97, -127, 23, 115, -111, 26, 44, -35, 107, -70, 107, 121, -96, -28, 28, 108, 122, -17, 100, -29, 36, -103, -113, -87, -49, -16, 30, 82, 53, 110, -102, -67, 113, -84, 46, 21, 12, -121, -119, -36, -74, -57, -78, 18, -13, 4, -86, -107, 17, -52, -76, 88, -59, -79, 86, -62, -37, 122, 99, 77, 75, -86, -12, 3, 3, -31, -58, -26, 122, -31, 72, -6, -60, 55, 70, -1, -35};
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
    msg.setTimeStamp(0.202601058312);
    msg.setSource(18177U);
    msg.setSourceEntity(42U);
    msg.setDestination(30660U);
    msg.setDestinationEntity(222U);
    msg.req_id = 5339U;
    msg.status = 238U;
    msg.text.assign("STEJGUMEBXJKAHFSNSOIZNRRMGYKCLJWLRRHHISVXDSDYEYWBOZIGWCMVOVOPEAPMYCMIIHBVCCCL");

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
    msg.setTimeStamp(0.265594797505);
    msg.setSource(49248U);
    msg.setSourceEntity(194U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(170U);
    msg.req_id = 21078U;
    msg.status = 67U;
    msg.text.assign("YQCTEDGSIFZCDRVCDLZDQJJOFMEOCALGVVSKHCQLBFPNZAVRAEUIHQRKNWQWFOGNARTYPYVECXDPNXFWYFLDIHNRPQTHZFPOUXKEMMZMXNBOESS");

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
    msg.setTimeStamp(0.470701680312);
    msg.setSource(44901U);
    msg.setSourceEntity(169U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(123U);
    msg.req_id = 1737U;
    msg.status = 117U;
    msg.text.assign("TCOJVLVRWSQSYNRLPTSFWPGEAEHTMFBIJZMBRUHGGJBAHBONRIUVNAFBTBKNYFIDYYTPIMUZXHDGZDSXVKPCUWIWLNQHAYZUCUXWPCNUIAARBLTEXXPYLETNHDSHQECFHFMQPRFDLKGDTWNFDVQKADBSYJUJAOAJONYKOOSTBQFACVIJEC");

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
    msg.setTimeStamp(0.414485246205);
    msg.setSource(49414U);
    msg.setSourceEntity(248U);
    msg.setDestination(16717U);
    msg.setDestinationEntity(47U);
    msg.group_name.assign("NTKIFFPYJHFPABZUKNOBIXABTZXEDXLCMUPZXPHKAHFIQUJIQHGSXQKRPXVTQSIWCLJRMS");
    msg.links = 633975858U;

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
    msg.setTimeStamp(0.0808947167936);
    msg.setSource(59654U);
    msg.setSourceEntity(193U);
    msg.setDestination(10143U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("HCBWBCWDTPIVMNDJZLBSAJIAARGTJEQDZHJLJVBPNYZXJMSKDZHTAGFNYDUPEQBOZOYGJNVEHGXO");
    msg.links = 2821673772U;

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
    msg.setTimeStamp(0.584695129406);
    msg.setSource(21089U);
    msg.setSourceEntity(99U);
    msg.setDestination(14246U);
    msg.setDestinationEntity(126U);
    msg.group_name.assign("EGRWYYYCFIWEPPCBFBLIEBGKEBQGQFLKCEDANXVQZRVDJGVCSXJLBSESXOTRBQMNWXPWRQNANJOTDSHPDPVDDISFUMFDWLUFJYHKVTXAHAUZBYPWKPVRYMHIHKFNWJNJHCAXGUPZMIUBXOETZBHINUQNXQGDZ");
    msg.links = 4052929339U;

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
    msg.setTimeStamp(0.159191438716);
    msg.setSource(31161U);
    msg.setSourceEntity(49U);
    msg.setDestination(31330U);
    msg.setDestinationEntity(234U);
    msg.groupname.assign("PMYBYUCFPYVDUJQBNGTJEJZZFIJQGSNWLMXJSWLIUGXGCFMOHXXADIUHTRTLKUQWMZLTQTEHZMRBGWQRVKUZRDUOXVQMDEATENZAOOEKMFEGFOACPMYSNTKZHXFWYWCDLZSJIOFWSUNTBCAJDCFSXQNRDTJIAVIXFIMEKIHIGGHCDKSQKAVHXRTHPUOBPPYXBQPDEYCPEURNKHVNHWYPBCJVSBZFVNVAWGVALOS");
    msg.action = 203U;
    msg.grouplist.assign("BCDHVKLVGHGZOAEXJXSLZYDPREQLYHDGBPFTUWVQKNXIIWKSBNNSQAPCSCXXYOJFAPXIWWQRGYKTFUSMSGLHOEMTMJMFNODNDBCFJPTTWKDORFQAILZSDHTPAMYQRONCBUILIPLIHZWKHDZCKIYJQZROBYSAZFJAAOFNXUWGAPXDVERTNMVNVWWVOBAXWKCUQCULHLUHVBIFKJMRUVZUQGGERTQNGKPSULJYIVMFTZYOESJBDMYERERZCGMJ");

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
    msg.setTimeStamp(0.523275194942);
    msg.setSource(25785U);
    msg.setSourceEntity(109U);
    msg.setDestination(8657U);
    msg.setDestinationEntity(241U);
    msg.groupname.assign("EBSBIOJQUSKWNJLYZMFWQKPGOUXKUHUYZVRIBBXFTF");
    msg.action = 176U;
    msg.grouplist.assign("EGJUJQETQRZOKBIGWHLXOSRQAGKVVTLHDOGXZLVYRRWGFNFXNKNJFIXEDRWTOHTSYHIVOBDAFQLRNICRESXUHMQIOWLRISPQVNLSBQDXPHYGYNBTPQYPUFMUMCKNIEPBMDYUCHABAABWOLDDVJHEUKOWSFCMDZVFMKSIJHLKXGRXZUWJETHTRATJAQXAILSZNZCYAZCGOVUA");

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
    msg.setTimeStamp(0.0302135547975);
    msg.setSource(64957U);
    msg.setSourceEntity(172U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(112U);
    msg.groupname.assign("PJRCNUDTXTEGXBDHNXEEJPTSYFGOSARANIJZISVRKUTDACRPKLQPONVSDNUHUYDQTCVFPLEIQKKYNAROBAZZPRNDFUNAMWCGZQPHUXODYJFXXXAZQWUVWMOCVYOHMRGBGFGEEZMCSREHELKXBWJMEYMQSVUKTCTVIJLSLMZUELWMGWQTXIBLZFWBWICCKFHHPKIYIWIOGJAFNABSOURNVMVDHDHRJFWBMOYJBKJSLGPGFAIYQTBOYVZLHCQ");
    msg.action = 243U;
    msg.grouplist.assign("DXYOQIJQEWKEPZYWJNDQYPXUPVGVITGVVWVXWBSRQUHSQLIIEYNFSSPOEVCBZYJZHKJYLTTNBBDBELTZLCRQMZEKECUFLLMTKXKGCNGNZFPJHPTJAREWMDCNLJUOVPPAUHAWZGRYEFVXQCBLVUAGCSXRRXMMUTMJOKSMHXDIZYIRDAXFOAHAPBNBRBXINIYOTDHHIWYWOQNOGKUFJWMSBCVSQCHMUEWJFAFGLHTLN");

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
    msg.setTimeStamp(0.912477944962);
    msg.setSource(32856U);
    msg.setSourceEntity(196U);
    msg.setDestination(8030U);
    msg.setDestinationEntity(136U);
    msg.value = 0.737191034283;
    msg.sys_src = 39164U;

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
    msg.setTimeStamp(0.172015707866);
    msg.setSource(45926U);
    msg.setSourceEntity(64U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(187U);
    msg.value = 0.198445462321;
    msg.sys_src = 43102U;

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
    msg.setTimeStamp(0.838146625101);
    msg.setSource(6476U);
    msg.setSourceEntity(111U);
    msg.setDestination(7292U);
    msg.setDestinationEntity(61U);
    msg.value = 0.115174649;
    msg.sys_src = 62066U;

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
    msg.setTimeStamp(0.0562166065891);
    msg.setSource(23310U);
    msg.setSourceEntity(227U);
    msg.setDestination(11981U);
    msg.setDestinationEntity(130U);
    msg.value = 0.449758193765;
    msg.units = 130U;

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
    msg.setTimeStamp(0.963764467123);
    msg.setSource(54401U);
    msg.setSourceEntity(21U);
    msg.setDestination(51820U);
    msg.setDestinationEntity(159U);
    msg.value = 0.869192235827;
    msg.units = 112U;

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
    msg.setTimeStamp(0.105361634246);
    msg.setSource(24138U);
    msg.setSourceEntity(42U);
    msg.setDestination(8897U);
    msg.setDestinationEntity(181U);
    msg.value = 0.16071222757;
    msg.units = 236U;

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
    msg.setTimeStamp(0.066497547067);
    msg.setSource(61087U);
    msg.setSourceEntity(3U);
    msg.setDestination(62066U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.0547133290309;
    msg.base_lon = 0.0544227577492;
    msg.base_time = 0.370291288848;

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
    msg.setTimeStamp(0.580532938216);
    msg.setSource(59289U);
    msg.setSourceEntity(124U);
    msg.setDestination(27145U);
    msg.setDestinationEntity(8U);
    msg.base_lat = 0.40171097391;
    msg.base_lon = 0.643363626985;
    msg.base_time = 0.174524002136;

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
    msg.setTimeStamp(0.564598580317);
    msg.setSource(15229U);
    msg.setSourceEntity(70U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.246779187521;
    msg.base_lon = 0.926133109345;
    msg.base_time = 0.366443949232;

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
    msg.setTimeStamp(0.0759885199416);
    msg.setSource(56555U);
    msg.setSourceEntity(19U);
    msg.setDestination(34129U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.217685895957;
    msg.base_lon = 0.0501008809278;
    msg.base_time = 0.554692835475;
    const char tmp_msg_0[] = {40, 70, 122, -60, 81, -109, 67, 91, 65, -62, 89, 29, -14, 85, 102, 48, 33, -113, 1, 63, -126, 76, -113, 1, 125, -90, 105, 92, 125, 110, 90, 105, -35, 30, 2, -51, 57, -96, -119, 31, -92, -6, -53, -63, 59, 14, -119, -108, -94, -54, 54, -43, -2, 40, 1, -93, 123, -27, -118, -77, -48, -53, -110, -112, 39, -99, -65, 119, 60, -14, 37, -63, -64, -63, -7, 15, -50, -80, 58, -124, 97, -90, -56, -51, 90, -37, -94, 58, 20, -98, 18, -101, -61, -61, -19, -113, -17};
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
    msg.setTimeStamp(0.3579167847);
    msg.setSource(42644U);
    msg.setSourceEntity(61U);
    msg.setDestination(16192U);
    msg.setDestinationEntity(18U);
    msg.base_lat = 0.486165195201;
    msg.base_lon = 0.151444923996;
    msg.base_time = 0.321399817402;
    const char tmp_msg_0[] = {85, 44, -70, -84, 53, 117, -45, -23, 1, 68, 124, -117, 91, -52, 16, 101, 36, -110, 44, -2, 93, 92, 74, 22, -34, -26, -110, -106, 35, 6, 61, -9, -120, 107, 47, 81, 45, -103, -32, 80, 11, -126, -97, 5, -90, -54, 9, 5, -2, -84, -118, 61, -72, 58, 2, 97, 58, -90, -76, -32, -53, 5, -107, 60, 60, 50, 55, 33, -11, 50, 59, 58, 80, -58, -95, 12, -67, 57, 8, -49, 107, -34, -114, 35, 122, 27, 110, -22, 110, -34, -92, 22, -12, -15, 124, -84, -125, -10, -111, -80, 61, 92, 45, -51, 101, 59, -97, -29, -11, 86, -18, -123, -48, -89, 18, -83, -78, 31, 28, -5, 52, -14, 7, -123, -79, -29, -26, 64, -42, 51, -49, 92, -77, -42, 125, 74, -60, -23, -71, -17, -60, 47, 50, 79, -61, -36, 58, -70, -15, -48, 81, 102, -112, -29, -33, 30, -65, -118, -95, -41, 64, -78, 15};
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
    msg.setTimeStamp(0.582598735051);
    msg.setSource(44663U);
    msg.setSourceEntity(102U);
    msg.setDestination(21073U);
    msg.setDestinationEntity(61U);
    msg.base_lat = 0.642840663798;
    msg.base_lon = 0.837171729166;
    msg.base_time = 0.757569204049;
    const char tmp_msg_0[] = {33, 2, 74, 124, -74, 0, -61, 33, 39, -57, 108, 96, -104, 35, -83, 122, -19, -116, -88, -93, -67, 91, -81, 39, 56, 78, -118, -32, -12, -86, 59, -45, -102, -33, -86, 9, 74, -92, 27, -107, 42, 102, -52, -86, 126, -37, -44, 75, -38, 6, -115, -87, -89, -90, -11, -78, 2, -59, -42, -70, 66, -15, 63, 27, -123, 40, -104, 2, 49, 32, -125, 125, 83, -72, -71, -51, -85, 109, -128, -25, -20, 39, 38, -100, -58, 48, 63, 117, 52, 31, 38, -5, -126, 69, 47, -118, -36, -8, -107, 76, 91, 108, 37, 68, 93, 83, -40, 44, -122, -53, -94, 109, 36, 22, 22, 7, 40, 99, -49, -26, 80, -49, -120, 59, -70, 71, 47, 88, -44, 126, 35, 77, -29, 59, 39, 96, -79};
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
    msg.setTimeStamp(0.069997059241);
    msg.setSource(63376U);
    msg.setSourceEntity(54U);
    msg.setDestination(57261U);
    msg.setDestinationEntity(4U);
    msg.sys_id = 26248U;
    msg.priority = -17;
    msg.x = -16314;
    msg.y = -4626;
    msg.z = 6051;
    msg.t = 8484;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.581592540335;
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
    msg.setTimeStamp(0.638837318355);
    msg.setSource(20599U);
    msg.setSourceEntity(236U);
    msg.setDestination(37105U);
    msg.setDestinationEntity(160U);
    msg.sys_id = 30380U;
    msg.priority = -117;
    msg.x = 16470;
    msg.y = 26418;
    msg.z = 10971;
    msg.t = -6410;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.599947850983;
    tmp_msg_0.v = 0.126794735594;
    tmp_msg_0.w = 0.516176658148;
    tmp_msg_0.p = 0.0410182739187;
    tmp_msg_0.q = 0.15116765466;
    tmp_msg_0.r = 0.203765885679;
    tmp_msg_0.flags = 136U;
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
    msg.setTimeStamp(0.724615381192);
    msg.setSource(4366U);
    msg.setSourceEntity(168U);
    msg.setDestination(33398U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 22803U;
    msg.priority = -75;
    msg.x = 18573;
    msg.y = 16547;
    msg.z = 10446;
    msg.t = 3940;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 25640U;
    tmp_msg_0.priority = 74;
    tmp_msg_0.x = 1255;
    tmp_msg_0.y = -32706;
    tmp_msg_0.z = 1894;
    tmp_msg_0.t = -5112;
    IMC::TextMessage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("HHDIVDLDNPZXZIYIAFGQVVAOFGPKIMLTRWKMDLLNTUDHSVWKHTHZYQOSMWPYEPFDFSZQMBBCUZUZESQEURBSYSJAHBUXGCPMBVXKVRHAFJEPS");
    tmp_tmp_msg_0_0.text.assign("QXRPOJVBNWUHCVUYSHBGRFWKQATHPVRLEYKFIYJNOGBCWUXFZOIYQFZHPBCUJLEGXBQKJQMWFECTACWPBTAEVWCXMIRMNOKOJTVNUYRZGMOAHKXDIAUDXVOGOTYYUDNSLHALPZLPSETJCXWICDXYZVHTGOARKAJMGWUZRCWKSFYLSLXTCKOAJNSKLFGYTKDNGQ");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.87161929568);
    msg.setSource(20817U);
    msg.setSourceEntity(65U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(55U);
    msg.req_id = 52427U;
    msg.type = 111U;
    msg.max_size = 41175U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.241082220964;
    tmp_msg_0.base_lon = 0.979993463435;
    tmp_msg_0.base_time = 0.110439379038;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 150U;
    tmp_tmp_msg_0_0.priority = 68;
    tmp_tmp_msg_0_0.x = -26185;
    tmp_tmp_msg_0_0.y = -3503;
    tmp_tmp_msg_0_0.z = -17780;
    tmp_tmp_msg_0_0.t = 3138;
    IMC::EntityList tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 165U;
    tmp_tmp_tmp_msg_0_0_0.list.assign("WGHZNXIAPVSLIKVWRSTPFYMPLXNHFAPNYRXDCFGCBFLMSNTIXVBHS");
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
    msg.setTimeStamp(0.159423860363);
    msg.setSource(43833U);
    msg.setSourceEntity(3U);
    msg.setDestination(14805U);
    msg.setDestinationEntity(245U);
    msg.req_id = 14176U;
    msg.type = 54U;
    msg.max_size = 34830U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.222352446166;
    tmp_msg_0.base_lon = 0.204836521771;
    tmp_msg_0.base_time = 0.0912216145621;
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
    msg.setTimeStamp(0.964822369588);
    msg.setSource(22422U);
    msg.setSourceEntity(245U);
    msg.setDestination(31755U);
    msg.setDestinationEntity(235U);
    msg.req_id = 62703U;
    msg.type = 60U;
    msg.max_size = 12689U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.533202803541;
    tmp_msg_0.base_lon = 0.454608912628;
    tmp_msg_0.base_time = 0.0712407151418;
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
    msg.setTimeStamp(0.260333152681);
    msg.setSource(36490U);
    msg.setSourceEntity(126U);
    msg.setDestination(48221U);
    msg.setDestinationEntity(60U);
    msg.original_source = 58325U;
    msg.destination = 11840U;
    msg.timeout = 0.943199443227;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.534729648795;
    tmp_msg_0.ay_cmd = 0.997676943617;
    tmp_msg_0.az_cmd = 0.474829450887;
    tmp_msg_0.ax_des = 0.842943625782;
    tmp_msg_0.ay_des = 0.529715361903;
    tmp_msg_0.az_des = 0.263274381772;
    tmp_msg_0.virt_err_x = 0.684387773647;
    tmp_msg_0.virt_err_y = 0.511864217851;
    tmp_msg_0.virt_err_z = 0.554382959988;
    tmp_msg_0.surf_fdbk_x = 0.31018380131;
    tmp_msg_0.surf_fdbk_y = 0.8938238335;
    tmp_msg_0.surf_fdbk_z = 0.511608261277;
    tmp_msg_0.surf_unkn_x = 0.973967605772;
    tmp_msg_0.surf_unkn_y = 0.927310127442;
    tmp_msg_0.surf_unkn_z = 0.413580607839;
    tmp_msg_0.ss_x = 0.203810280041;
    tmp_msg_0.ss_y = 0.324726179344;
    tmp_msg_0.ss_z = 0.446876613365;
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
    msg.setTimeStamp(0.0285203814443);
    msg.setSource(22947U);
    msg.setSourceEntity(84U);
    msg.setDestination(7804U);
    msg.setDestinationEntity(79U);
    msg.original_source = 51523U;
    msg.destination = 39573U;
    msg.timeout = 0.185961507092;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23809U;
    tmp_msg_0.off_x = 0.0869413479102;
    tmp_msg_0.off_y = 0.450349163375;
    tmp_msg_0.off_z = 0.690637649784;
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
    msg.setTimeStamp(0.309971821597);
    msg.setSource(15269U);
    msg.setSourceEntity(48U);
    msg.setDestination(63052U);
    msg.setDestinationEntity(253U);
    msg.original_source = 16819U;
    msg.destination = 59912U;
    msg.timeout = 0.151518258339;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.144941054415;
    tmp_msg_0.x = 0.314294398057;
    tmp_msg_0.y = 0.804745810089;
    tmp_msg_0.z = 0.214965635336;
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
    msg.setTimeStamp(0.855713408998);
    msg.setSource(38568U);
    msg.setSourceEntity(88U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(145U);
    msg.id = 67U;
    msg.range = 0.363836750574;

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
    msg.setTimeStamp(0.0455717641964);
    msg.setSource(31225U);
    msg.setSourceEntity(159U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(63U);
    msg.id = 85U;
    msg.range = 0.988157440668;

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
    msg.setTimeStamp(0.624065235735);
    msg.setSource(46325U);
    msg.setSourceEntity(68U);
    msg.setDestination(22869U);
    msg.setDestinationEntity(240U);
    msg.id = 213U;
    msg.range = 0.874841177271;

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
    msg.setTimeStamp(0.0745604805061);
    msg.setSource(52330U);
    msg.setSourceEntity(42U);
    msg.setDestination(18096U);
    msg.setDestinationEntity(49U);
    msg.beacon.assign("UOVJECPRJDHNGDSTXCZOJPTJIMHXELSFZMGNBMYQSNGQOYJQOXZYTHVEWHKPGDEYIUIIZKSQXWKTLBYFGQODBOJSUDSHRREIQRFLKHNAEZSWPILVOGJRSUJNLWYUQNARDFPPCAECBWXXPSSTXMEZVLGLPQVLKVIRTWAAZNXFNJTQCYFRCCBATIEHILTACABHMVFPKZXUBOWFUNXVKDRWCGFWMZMUVRMDCHKBWKOEMLIQZYUMTG");
    msg.lat = 0.928135585223;
    msg.lon = 0.755115542386;
    msg.depth = 0.586726240588;
    msg.query_channel = 47U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 177U;

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
    msg.setTimeStamp(0.329372359652);
    msg.setSource(37561U);
    msg.setSourceEntity(146U);
    msg.setDestination(14758U);
    msg.setDestinationEntity(248U);
    msg.beacon.assign("ALGBGBNQBDOFSDCNOHOUYIQSIGSXSPXVHLYDTLWVMKIVPTNUUNDHQADWKENXFVTIJZJNPOCPRWGZPFLFKNRQWHVQCYSWLLWCEODOSXV");
    msg.lat = 0.502677926198;
    msg.lon = 0.474304155489;
    msg.depth = 0.540352070091;
    msg.query_channel = 60U;
    msg.reply_channel = 205U;
    msg.transponder_delay = 110U;

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
    msg.setTimeStamp(0.955465886113);
    msg.setSource(20528U);
    msg.setSourceEntity(52U);
    msg.setDestination(2420U);
    msg.setDestinationEntity(132U);
    msg.beacon.assign("QWMQCHUSRMGQUOIZEJCIOUWZMXZGORYGJBNELPABEKHVEEEQYDXLBJTLDPNDXBIQNVBIGXKRCCCZNLQTVXXYYIDLXFRBPSCUABJOMOGEDIVWWFYPFLKEOQQKCRGFHNPSNHAUVSJPYTUHTZEDFJKXVYHAYNVIWTWMJKZRAAOUHZKQWFIRHFSPVS");
    msg.lat = 0.366583623844;
    msg.lon = 0.355774795439;
    msg.depth = 0.0252478148726;
    msg.query_channel = 43U;
    msg.reply_channel = 217U;
    msg.transponder_delay = 116U;

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
    msg.setTimeStamp(0.180799953068);
    msg.setSource(10342U);
    msg.setSourceEntity(97U);
    msg.setDestination(40530U);
    msg.setDestinationEntity(63U);
    msg.op = 94U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XLPMNFSDUQQSNFJWAPPAIQVFWMGKAKBLVGFHYEKWYSBWFUUVNIUDZXKMRNMERMDISBNSOKEAIYJVCYRHMPHVKTKLZEZKQSAGRPGZBACDJGHYMTSBYBBWBCTYOLCUMYCJHAHDWTGNHPCXNEXJSQYRVDRQOTXZOCAJOAUOVWTKMFGOLGLVKRCZZWUTCGNXEDTILLPZEPRPFFGNIIXQ");
    tmp_msg_0.lat = 0.6975397493;
    tmp_msg_0.lon = 0.0870124437491;
    tmp_msg_0.depth = 0.632494281042;
    tmp_msg_0.query_channel = 6U;
    tmp_msg_0.reply_channel = 202U;
    tmp_msg_0.transponder_delay = 16U;
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
    msg.setTimeStamp(0.92658934107);
    msg.setSource(60784U);
    msg.setSourceEntity(228U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(181U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.707586812167);
    msg.setSource(45562U);
    msg.setSourceEntity(247U);
    msg.setDestination(7659U);
    msg.setDestinationEntity(130U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.664228627321);
    msg.setSource(48409U);
    msg.setSourceEntity(55U);
    msg.setDestination(18170U);
    msg.setDestinationEntity(73U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 245U;
    tmp_msg_0.list.assign("AOLDCPUJFYRHMDISYTXBHXWGXBJHJFMNILLVZGEKTXGIAIHCPVGMYQOUWWYJNWRAVXNOAUSAWJSVHZKCWFMXBLUKHCEMJCYHFLTURAJPMKGEVNMOOTNEBKUWYNLRRFBCHSPSJVOZAAXKJSKQQNDVZOSBRQUGIXYPIBIMVXBYLXEDPUDOKRDPUFLZRBGOWNTGTFKGGQTNEQSWDQDIZCRQEZSYATJVZKQFLCOZMUMRSDTY");
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
    msg.setTimeStamp(0.803394764987);
    msg.setSource(22979U);
    msg.setSourceEntity(8U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(83U);
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 71U;
    tmp_msg_0.frequency = 2948565500U;
    tmp_msg_0.min_range = 11829U;
    tmp_msg_0.max_range = 16678U;
    tmp_msg_0.bits_per_point = 47U;
    tmp_msg_0.scale_factor = 0.884340874108;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.199727196935;
    tmp_tmp_msg_0_0.beam_height = 0.465336473561;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-2, -116, -42, 31, -81, 56, 44, 0, -48, 116, 52, -67, -67, -41, -65, 6, -62, -52, -96, -52, 20, -73, -92, 55, 63, -85, -29, -18, 123, 11, -12, -33, 72, 37, 102, 59, -41, -74, 50, -92, -13, -102, -25, 94, 8, -9, 86, 88, 116, -36, 94, 70, 67, -31, -61, 124, 30, -13, -76, -66, -66, -120, -55, 71, 110, 60, -17, 89, 42, 48, 69, -49, 106, -54, -74, 74, -33, -14, 37, 48, -86, 116, -12, -107, 0, -109, 104, 99, 125, 47, 9, -60, -60, -58, 80, -97, -69, -55, -122, -9, -33, 25, -16, 59, 106, -71, 100, 21, -90, 102, 85, -97, -42, -101, 90, -55, 76, -109, -20, 120, -68, 21, -16, 6, 64, 56, -44, -125, 0, 123, -9, -116, -74, -32, -63, -27, 1, 24, 38, 2, -66, 0, -34, 25, -105, 81, 53, -7, -107, -22, -91, -14, 19, -112, -126, 42, 107, 27, -12, -28};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.280636687304);
    msg.setSource(57074U);
    msg.setSourceEntity(155U);
    msg.setDestination(24198U);
    msg.setDestinationEntity(114U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 33004U;
    tmp_msg_0.lat = 0.0295885761338;
    tmp_msg_0.lon = 0.36204455212;
    tmp_msg_0.z = 0.0405645191243;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.duration = 47671U;
    tmp_msg_0.speed = 0.119076926501;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.type = 195U;
    tmp_msg_0.radius = 0.215502987455;
    tmp_msg_0.length = 0.319316954727;
    tmp_msg_0.bearing = 0.676783851861;
    tmp_msg_0.direction = 182U;
    tmp_msg_0.custom.assign("QLZVFLMGSIBPJMSERUASYXCISSPEPGXEOLBFJRAANDGZCMGRDTDYSEIICCAJXOWDNHAFYVPFXZROITTKTCETHKLBBQVBCPYAGTQU");
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
    msg.setTimeStamp(0.280829336965);
    msg.setSource(49627U);
    msg.setSourceEntity(138U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(4U);
    msg.op = 176U;
    msg.system.assign("FNUNMYTKYCAMGRCFPLEUBJCSPYIPUNFEDRVVGSRJRCXLOAHPWTNQZQXYGJQABMJTTFCNDWUAOWEOOXSWBMGJILCGRQCGYMXRQAPZHVPVLKUEDKSLLQHDTKCUDAZPXZLRFWNIZEOOHGBJBVSUIJXCAQOWKNRYMVDVNGQQYYJBXZTPOHIFASBWHBZVQZTVIWOFUECZXUFPBDMFOKGFGYEDYHKEMHSUTRIWIMKABWXKDRTHZVLHETLALXISMPN");
    msg.range = 0.767958163708;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 108U;
    tmp_msg_0.comm_interface = 40U;
    tmp_msg_0.period = 64054U;
    tmp_msg_0.sys_dst.assign("UYWHHLCKXIEUWKVZTJFYRDPICOCUFZGTFVNLXTFUMSGQLKYFMCQJQJPQOLZYFSTWNXYDMGDWLGERDPHSDPQMMOKRPNOVOSRABYSHQAQECDHVON");
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
    msg.setTimeStamp(0.518656112223);
    msg.setSource(29392U);
    msg.setSourceEntity(34U);
    msg.setDestination(1821U);
    msg.setDestinationEntity(152U);
    msg.op = 174U;
    msg.system.assign("JHZNVLYNDGYBRGSVIHIPRTOHQJFAXMQAPWWAFHEQLEBUKPIVOMXFSIEBEQAGBKCJXGVKOJHKJCOJCHJPQUSZPKLPVASUYTQZLGUSBYISZQXHANSEONWEOHLTGCYWSWYTYMOUPPVWHG");
    msg.range = 0.167042802102;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.432203915361;
    tmp_msg_0.phi = 0.267894189492;
    tmp_msg_0.theta = 0.127451470973;
    tmp_msg_0.psi = 0.37390444362;
    tmp_msg_0.psi_magnetic = 0.556040175158;
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
    msg.setTimeStamp(0.857801048929);
    msg.setSource(50798U);
    msg.setSourceEntity(79U);
    msg.setDestination(41148U);
    msg.setDestinationEntity(73U);
    msg.op = 244U;
    msg.system.assign("HEPTZUJRAASBDFCKIIBLQDKEGPVYIXBLLKYGZXEQLHBLFVAVWCOLLSEVUVUHXQQORJPYZFFUMO");
    msg.range = 0.550722312564;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 110U;
    tmp_msg_0.mask = 2655777000U;
    tmp_msg_0.scope_ref = 4029545776U;
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
    msg.setTimeStamp(0.731343670894);
    msg.setSource(47649U);
    msg.setSourceEntity(206U);
    msg.setDestination(26701U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.659376549048);
    msg.setSource(10771U);
    msg.setSourceEntity(119U);
    msg.setDestination(45365U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.296100630544);
    msg.setSource(51458U);
    msg.setSourceEntity(209U);
    msg.setDestination(3826U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.801427139324);
    msg.setSource(15972U);
    msg.setSourceEntity(38U);
    msg.setDestination(32221U);
    msg.setDestinationEntity(111U);
    msg.list.assign("MQKTSBQEJYGQUFESWOICDPLPKFZNBMIKCVWPEHOZIKXFATNLJXRWWTKIQVSXCEZDTCXMUCLQUKJSPVUYWYGAXILREUPABDVTAUQOMOJYGNEAEZXVCMXKHLXLHSJRHENSBVHAUFDWHGFZDJIJCHZGQKNGARCJTWYQBOFGAMDLUIZYRUDIHDDPOZJABKPGPNZO");

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
    msg.setTimeStamp(0.57419333113);
    msg.setSource(52149U);
    msg.setSourceEntity(41U);
    msg.setDestination(17621U);
    msg.setDestinationEntity(155U);
    msg.list.assign("RTAERFBMIFIRDNMZLXWQHOWEHPQTKCDBOMJEYQQVWEHYWVLRUHSUEAKVFKJZYZDQJBFPWKYECFKBQILXBQJWMJHHNKOFCUGZSZRSMCEMSDWPKNSUMSYJZODHCOBSLPZWQCDLDIVFNINGADUIPLKTEQCAMGVBJEGAFGLVMRRHOYJLTXSXKNSWOUUPTRUPWCRCIXVOUNAJLDONPATAMBYZYPJKXLVYVGOGTRAISCTIUQTVAZBYGDBXXTIXFNZHGX");

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
    msg.setTimeStamp(0.204614893672);
    msg.setSource(34207U);
    msg.setSourceEntity(107U);
    msg.setDestination(32565U);
    msg.setDestinationEntity(70U);
    msg.list.assign("LKAUNBKGDMAZAMHHGJYPEPNBDMRUIACHKJALGYUFLOTMRAVHKBIEHJDRCXCIMZEQTOPPLUFWQZNHCIBHFQNXPWSFTGNNENKZGZSCATVQKJD");

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
    msg.setTimeStamp(0.961338365158);
    msg.setSource(45814U);
    msg.setSourceEntity(88U);
    msg.setDestination(39481U);
    msg.setDestinationEntity(179U);
    msg.peer.assign("EXMBLEGZVYRNKTDUSEQHATTVCFWEHRUXBPEUQIPOOYYNGLPTDOKYHIYJLXGWBZOGTWIW");
    msg.rssi = 0.89538682826;
    msg.integrity = 27507U;

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
    msg.setTimeStamp(0.695506702088);
    msg.setSource(42348U);
    msg.setSourceEntity(37U);
    msg.setDestination(63834U);
    msg.setDestinationEntity(230U);
    msg.peer.assign("ANAJOYRLADYSXTPAWWVOAOFTPDVHEOYDJE");
    msg.rssi = 0.105383221059;
    msg.integrity = 31712U;

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
    msg.setTimeStamp(0.594747588493);
    msg.setSource(45935U);
    msg.setSourceEntity(161U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(243U);
    msg.peer.assign("GIDWVJQABDHOHSGCTCPZDAKDNURHYHXBWMZTVQEXLCNOYVXLEOUVMZQBRRARBMWZEFFHKVGKSSXPOXGAUWHKDJNAJTJRCGSVNICPUAGEWSFLKTHALZYJQMMOYVJZABZEYKEOTQNDCEBYBBQNHGUICLTFM");
    msg.rssi = 0.674585891645;
    msg.integrity = 46915U;

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
    msg.setTimeStamp(0.885577481028);
    msg.setSource(10752U);
    msg.setSourceEntity(154U);
    msg.setDestination(52842U);
    msg.setDestinationEntity(226U);
    msg.value = 28893;

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
    msg.setTimeStamp(0.249947383199);
    msg.setSource(37941U);
    msg.setSourceEntity(2U);
    msg.setDestination(10380U);
    msg.setDestinationEntity(61U);
    msg.value = 17357;

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
    msg.setTimeStamp(0.105647529619);
    msg.setSource(58770U);
    msg.setSourceEntity(77U);
    msg.setDestination(64360U);
    msg.setDestinationEntity(178U);
    msg.value = -28401;

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
    msg.setTimeStamp(0.213588626412);
    msg.setSource(65036U);
    msg.setSourceEntity(88U);
    msg.setDestination(57395U);
    msg.setDestinationEntity(205U);
    msg.value = 0.689419114706;

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
    msg.setTimeStamp(0.125593161011);
    msg.setSource(64202U);
    msg.setSourceEntity(227U);
    msg.setDestination(58712U);
    msg.setDestinationEntity(23U);
    msg.value = 0.401105050268;

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
    msg.setTimeStamp(0.491554819026);
    msg.setSource(61912U);
    msg.setSourceEntity(89U);
    msg.setDestination(39278U);
    msg.setDestinationEntity(171U);
    msg.value = 0.137513346336;

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
    msg.setTimeStamp(0.594080360537);
    msg.setSource(55283U);
    msg.setSourceEntity(6U);
    msg.setDestination(61504U);
    msg.setDestinationEntity(2U);
    msg.value = 0.566562873569;

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
    msg.setTimeStamp(0.87050391255);
    msg.setSource(44143U);
    msg.setSourceEntity(60U);
    msg.setDestination(29345U);
    msg.setDestinationEntity(102U);
    msg.value = 0.130830934284;

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
    msg.setTimeStamp(0.493126857989);
    msg.setSource(55736U);
    msg.setSourceEntity(84U);
    msg.setDestination(64998U);
    msg.setDestinationEntity(138U);
    msg.value = 0.809085302988;

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
    msg.setTimeStamp(0.71486444);
    msg.setSource(23573U);
    msg.setSourceEntity(169U);
    msg.setDestination(22432U);
    msg.setDestinationEntity(119U);
    msg.validity = 44401U;
    msg.type = 158U;
    msg.utc_year = 39289U;
    msg.utc_month = 12U;
    msg.utc_day = 126U;
    msg.utc_time = 0.698329047669;
    msg.lat = 0.864387779257;
    msg.lon = 0.647441294787;
    msg.height = 0.35131200464;
    msg.satellites = 99U;
    msg.cog = 0.0545094727551;
    msg.sog = 0.34370278413;
    msg.hdop = 0.157334636862;
    msg.vdop = 0.252200993605;
    msg.hacc = 0.566839494303;
    msg.vacc = 0.821287103396;

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
    msg.setTimeStamp(0.146378323806);
    msg.setSource(51440U);
    msg.setSourceEntity(95U);
    msg.setDestination(29388U);
    msg.setDestinationEntity(52U);
    msg.validity = 24605U;
    msg.type = 177U;
    msg.utc_year = 35975U;
    msg.utc_month = 142U;
    msg.utc_day = 105U;
    msg.utc_time = 0.246897095256;
    msg.lat = 0.477517194338;
    msg.lon = 0.478890252689;
    msg.height = 0.124432540657;
    msg.satellites = 71U;
    msg.cog = 0.623142901754;
    msg.sog = 0.227833744545;
    msg.hdop = 0.636560089818;
    msg.vdop = 0.737863431439;
    msg.hacc = 0.499810585902;
    msg.vacc = 0.357798565646;

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
    msg.setTimeStamp(0.713049500079);
    msg.setSource(10844U);
    msg.setSourceEntity(208U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(46U);
    msg.validity = 47799U;
    msg.type = 175U;
    msg.utc_year = 10876U;
    msg.utc_month = 129U;
    msg.utc_day = 70U;
    msg.utc_time = 0.175094657827;
    msg.lat = 0.763444672494;
    msg.lon = 0.673493668329;
    msg.height = 0.279079314228;
    msg.satellites = 64U;
    msg.cog = 0.21738536024;
    msg.sog = 0.542917574014;
    msg.hdop = 0.928266417424;
    msg.vdop = 0.150866473866;
    msg.hacc = 0.0786692211135;
    msg.vacc = 0.783574339557;

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
    msg.setTimeStamp(0.560017671346);
    msg.setSource(28904U);
    msg.setSourceEntity(115U);
    msg.setDestination(18182U);
    msg.setDestinationEntity(252U);
    msg.time = 0.397394633421;
    msg.phi = 0.803876757017;
    msg.theta = 0.776142391892;
    msg.psi = 0.796975279888;
    msg.psi_magnetic = 0.947222863697;

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
    msg.setTimeStamp(0.559564268197);
    msg.setSource(23927U);
    msg.setSourceEntity(231U);
    msg.setDestination(1134U);
    msg.setDestinationEntity(35U);
    msg.time = 0.726002071348;
    msg.phi = 0.928961907042;
    msg.theta = 0.20347068268;
    msg.psi = 0.785067650603;
    msg.psi_magnetic = 0.847643574354;

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
    msg.setTimeStamp(0.624446518921);
    msg.setSource(32931U);
    msg.setSourceEntity(83U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(228U);
    msg.time = 0.140687222902;
    msg.phi = 0.216020510758;
    msg.theta = 0.856331718291;
    msg.psi = 0.632579312659;
    msg.psi_magnetic = 0.408361257268;

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
    msg.setTimeStamp(0.470045401507);
    msg.setSource(27108U);
    msg.setSourceEntity(145U);
    msg.setDestination(7321U);
    msg.setDestinationEntity(54U);
    msg.time = 0.833503790475;
    msg.x = 0.244560211054;
    msg.y = 0.738567120889;
    msg.z = 0.832161290069;
    msg.timestep = 0.279567598626;

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
    msg.setTimeStamp(0.689032822148);
    msg.setSource(65105U);
    msg.setSourceEntity(37U);
    msg.setDestination(38461U);
    msg.setDestinationEntity(120U);
    msg.time = 0.573826021283;
    msg.x = 0.641834282426;
    msg.y = 0.710520794596;
    msg.z = 0.0461484650282;
    msg.timestep = 0.357066209929;

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
    msg.setTimeStamp(0.495619119728);
    msg.setSource(28821U);
    msg.setSourceEntity(101U);
    msg.setDestination(936U);
    msg.setDestinationEntity(5U);
    msg.time = 0.865068637077;
    msg.x = 0.238884145602;
    msg.y = 0.737499249615;
    msg.z = 0.764073605166;
    msg.timestep = 0.142346378162;

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
    msg.setTimeStamp(0.791703954243);
    msg.setSource(44166U);
    msg.setSourceEntity(90U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(164U);
    msg.time = 0.923437699035;
    msg.x = 0.904993942411;
    msg.y = 0.884121775755;
    msg.z = 0.638280237867;

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
    msg.setTimeStamp(0.480758562997);
    msg.setSource(58835U);
    msg.setSourceEntity(136U);
    msg.setDestination(10699U);
    msg.setDestinationEntity(40U);
    msg.time = 0.153079277493;
    msg.x = 0.169481487983;
    msg.y = 0.914419575502;
    msg.z = 0.867031470499;

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
    msg.setTimeStamp(0.0576891981766);
    msg.setSource(49909U);
    msg.setSourceEntity(125U);
    msg.setDestination(1U);
    msg.setDestinationEntity(207U);
    msg.time = 0.0194695231525;
    msg.x = 0.807572523064;
    msg.y = 0.441135106378;
    msg.z = 0.635096181676;

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
    msg.setTimeStamp(0.774847697002);
    msg.setSource(51968U);
    msg.setSourceEntity(252U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(184U);
    msg.time = 0.355419013906;
    msg.x = 0.561440297911;
    msg.y = 0.11368834118;
    msg.z = 0.0859324381406;

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
    msg.setTimeStamp(0.217596399234);
    msg.setSource(30774U);
    msg.setSourceEntity(51U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(168U);
    msg.time = 0.582371872161;
    msg.x = 0.691197637856;
    msg.y = 0.381043469057;
    msg.z = 0.252144305;

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
    msg.setTimeStamp(0.759549403378);
    msg.setSource(3851U);
    msg.setSourceEntity(71U);
    msg.setDestination(23646U);
    msg.setDestinationEntity(180U);
    msg.time = 0.798619019498;
    msg.x = 0.0624482586381;
    msg.y = 0.256115598132;
    msg.z = 0.668555887711;

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
    msg.setTimeStamp(0.988489703773);
    msg.setSource(48843U);
    msg.setSourceEntity(78U);
    msg.setDestination(58953U);
    msg.setDestinationEntity(48U);
    msg.time = 0.665988897258;
    msg.x = 0.451567508828;
    msg.y = 0.738987488213;
    msg.z = 0.896437120653;

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
    msg.setTimeStamp(0.681120289127);
    msg.setSource(62382U);
    msg.setSourceEntity(101U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(224U);
    msg.time = 0.431838949839;
    msg.x = 0.228429592919;
    msg.y = 0.479345497574;
    msg.z = 0.941997889664;

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
    msg.setTimeStamp(0.438457093809);
    msg.setSource(64768U);
    msg.setSourceEntity(171U);
    msg.setDestination(13665U);
    msg.setDestinationEntity(38U);
    msg.time = 0.6933719872;
    msg.x = 0.511690787072;
    msg.y = 0.121763470038;
    msg.z = 0.868872194453;

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
    msg.setTimeStamp(0.43617425566);
    msg.setSource(61791U);
    msg.setSourceEntity(115U);
    msg.setDestination(39155U);
    msg.setDestinationEntity(104U);
    msg.validity = 212U;
    msg.x = 0.334298816839;
    msg.y = 0.402384827436;
    msg.z = 0.0830929332045;

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
    msg.setTimeStamp(0.855728445915);
    msg.setSource(54926U);
    msg.setSourceEntity(172U);
    msg.setDestination(38287U);
    msg.setDestinationEntity(12U);
    msg.validity = 50U;
    msg.x = 0.631842405659;
    msg.y = 0.998556670755;
    msg.z = 0.777470660963;

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
    msg.setTimeStamp(0.10633543672);
    msg.setSource(40934U);
    msg.setSourceEntity(127U);
    msg.setDestination(15294U);
    msg.setDestinationEntity(45U);
    msg.validity = 190U;
    msg.x = 0.532260296168;
    msg.y = 0.61046563789;
    msg.z = 0.440196549037;

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
    msg.setTimeStamp(0.580576745265);
    msg.setSource(44446U);
    msg.setSourceEntity(40U);
    msg.setDestination(6067U);
    msg.setDestinationEntity(253U);
    msg.validity = 194U;
    msg.x = 0.339155227328;
    msg.y = 0.304988381034;
    msg.z = 0.751248064358;

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
    msg.setTimeStamp(0.236210079471);
    msg.setSource(24594U);
    msg.setSourceEntity(122U);
    msg.setDestination(47445U);
    msg.setDestinationEntity(189U);
    msg.validity = 127U;
    msg.x = 0.0836853070803;
    msg.y = 0.142220724152;
    msg.z = 0.794533266835;

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
    msg.setTimeStamp(0.155897489916);
    msg.setSource(63550U);
    msg.setSourceEntity(69U);
    msg.setDestination(65343U);
    msg.setDestinationEntity(107U);
    msg.validity = 49U;
    msg.x = 0.17746205871;
    msg.y = 0.252688963565;
    msg.z = 0.695319181614;

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
    msg.setTimeStamp(0.212538134418);
    msg.setSource(3787U);
    msg.setSourceEntity(49U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(180U);
    msg.time = 0.210451401115;
    msg.x = 0.39872009234;
    msg.y = 0.189469876062;
    msg.z = 0.372541062145;

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
    msg.setTimeStamp(0.23052320338);
    msg.setSource(62937U);
    msg.setSourceEntity(52U);
    msg.setDestination(48632U);
    msg.setDestinationEntity(247U);
    msg.time = 0.147904831749;
    msg.x = 0.912337287856;
    msg.y = 0.689772188446;
    msg.z = 0.610838192522;

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
    msg.setTimeStamp(0.0710449148974);
    msg.setSource(13253U);
    msg.setSourceEntity(79U);
    msg.setDestination(38399U);
    msg.setDestinationEntity(102U);
    msg.time = 0.468376550525;
    msg.x = 0.547693030885;
    msg.y = 0.468618121783;
    msg.z = 0.772169894166;

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
    msg.setTimeStamp(0.34229422973);
    msg.setSource(28626U);
    msg.setSourceEntity(170U);
    msg.setDestination(10806U);
    msg.setDestinationEntity(71U);
    msg.validity = 7U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.834063414199;
    tmp_msg_0.beam_height = 0.783581567349;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.932431068433;

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
    msg.setTimeStamp(0.862279016721);
    msg.setSource(51355U);
    msg.setSourceEntity(62U);
    msg.setDestination(26954U);
    msg.setDestinationEntity(13U);
    msg.validity = 136U;
    msg.value = 0.241103809771;

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
    msg.setTimeStamp(0.0895870117502);
    msg.setSource(27890U);
    msg.setSourceEntity(198U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(35U);
    msg.validity = 3U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.806173972405;
    tmp_msg_0.beam_height = 0.364833173782;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.565384883906;

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
    msg.setTimeStamp(0.348766385788);
    msg.setSource(18630U);
    msg.setSourceEntity(252U);
    msg.setDestination(14973U);
    msg.setDestinationEntity(175U);
    msg.value = 0.10895687605;

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
    msg.setTimeStamp(0.360273476851);
    msg.setSource(26469U);
    msg.setSourceEntity(254U);
    msg.setDestination(55724U);
    msg.setDestinationEntity(72U);
    msg.value = 0.19298908363;

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
    msg.setTimeStamp(0.680043510762);
    msg.setSource(39360U);
    msg.setSourceEntity(183U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(225U);
    msg.value = 0.155535838398;

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
    msg.setTimeStamp(0.976244618835);
    msg.setSource(15573U);
    msg.setSourceEntity(86U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(138U);
    msg.value = 0.320780794324;

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
    msg.setTimeStamp(0.38597602795);
    msg.setSource(63600U);
    msg.setSourceEntity(144U);
    msg.setDestination(42529U);
    msg.setDestinationEntity(181U);
    msg.value = 0.223092918461;

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
    msg.setTimeStamp(0.575901713619);
    msg.setSource(57284U);
    msg.setSourceEntity(28U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(79U);
    msg.value = 0.89577065642;

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
    msg.setTimeStamp(0.537394056124);
    msg.setSource(26303U);
    msg.setSourceEntity(163U);
    msg.setDestination(32112U);
    msg.setDestinationEntity(83U);
    msg.value = 0.919045769198;

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
    msg.setTimeStamp(0.636188015129);
    msg.setSource(258U);
    msg.setSourceEntity(144U);
    msg.setDestination(51838U);
    msg.setDestinationEntity(167U);
    msg.value = 0.408611221009;

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
    msg.setTimeStamp(0.749127641861);
    msg.setSource(36392U);
    msg.setSourceEntity(236U);
    msg.setDestination(38310U);
    msg.setDestinationEntity(125U);
    msg.value = 0.485199693323;

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
    msg.setTimeStamp(0.385847728468);
    msg.setSource(24478U);
    msg.setSourceEntity(90U);
    msg.setDestination(6980U);
    msg.setDestinationEntity(231U);
    msg.value = 0.80782759759;

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
    msg.setTimeStamp(0.0815481297666);
    msg.setSource(38337U);
    msg.setSourceEntity(118U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(222U);
    msg.value = 0.43692958793;

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
    msg.setTimeStamp(0.741594596552);
    msg.setSource(53778U);
    msg.setSourceEntity(96U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(85U);
    msg.value = 0.618765312982;

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
    msg.setTimeStamp(0.585884841205);
    msg.setSource(9110U);
    msg.setSourceEntity(59U);
    msg.setDestination(5126U);
    msg.setDestinationEntity(160U);
    msg.value = 0.447248211434;

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
    msg.setTimeStamp(0.0352980623819);
    msg.setSource(36745U);
    msg.setSourceEntity(167U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(204U);
    msg.value = 0.00587997469077;

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
    msg.setTimeStamp(0.000537896318607);
    msg.setSource(44939U);
    msg.setSourceEntity(211U);
    msg.setDestination(62075U);
    msg.setDestinationEntity(84U);
    msg.value = 0.28022348385;

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
    msg.setTimeStamp(0.413444781993);
    msg.setSource(56226U);
    msg.setSourceEntity(101U);
    msg.setDestination(29598U);
    msg.setDestinationEntity(194U);
    msg.value = 0.230407582552;

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
    msg.setTimeStamp(0.00381158942317);
    msg.setSource(60998U);
    msg.setSourceEntity(24U);
    msg.setDestination(47896U);
    msg.setDestinationEntity(207U);
    msg.value = 0.841795406303;

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
    msg.setTimeStamp(0.759688739679);
    msg.setSource(23485U);
    msg.setSourceEntity(31U);
    msg.setDestination(24464U);
    msg.setDestinationEntity(87U);
    msg.value = 0.711789995052;

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
    msg.setTimeStamp(0.337054468846);
    msg.setSource(3872U);
    msg.setSourceEntity(222U);
    msg.setDestination(62485U);
    msg.setDestinationEntity(72U);
    msg.value = 0.72082299791;

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
    msg.setTimeStamp(0.479683385496);
    msg.setSource(33158U);
    msg.setSourceEntity(53U);
    msg.setDestination(25167U);
    msg.setDestinationEntity(167U);
    msg.value = 0.201802328163;

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
    msg.setTimeStamp(0.9932642687);
    msg.setSource(55874U);
    msg.setSourceEntity(6U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(70U);
    msg.value = 0.857747410621;

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
    msg.setTimeStamp(0.36549358936);
    msg.setSource(57864U);
    msg.setSourceEntity(73U);
    msg.setDestination(47470U);
    msg.setDestinationEntity(99U);
    msg.value = 0.144872280976;

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
    msg.setTimeStamp(0.471897493098);
    msg.setSource(37550U);
    msg.setSourceEntity(215U);
    msg.setDestination(52581U);
    msg.setDestinationEntity(2U);
    msg.value = 0.221999856158;

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
    msg.setTimeStamp(0.740046191858);
    msg.setSource(3009U);
    msg.setSourceEntity(26U);
    msg.setDestination(42430U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0331117241147;

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
    msg.setTimeStamp(0.750736936641);
    msg.setSource(45647U);
    msg.setSourceEntity(159U);
    msg.setDestination(11866U);
    msg.setDestinationEntity(78U);
    msg.direction = 0.398748329741;
    msg.speed = 0.408308714902;
    msg.turbulence = 0.7478490977;

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
    msg.setTimeStamp(0.23429281265);
    msg.setSource(41123U);
    msg.setSourceEntity(37U);
    msg.setDestination(1328U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.680274754614;
    msg.speed = 0.258710076163;
    msg.turbulence = 0.946463046768;

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
    msg.setTimeStamp(0.557976641531);
    msg.setSource(54901U);
    msg.setSourceEntity(119U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(120U);
    msg.direction = 0.391793893173;
    msg.speed = 0.0789722591934;
    msg.turbulence = 0.177240678672;

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
    msg.setTimeStamp(0.435112533838);
    msg.setSource(49662U);
    msg.setSourceEntity(236U);
    msg.setDestination(4576U);
    msg.setDestinationEntity(253U);
    msg.value = 0.441315178483;

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
    msg.setTimeStamp(0.427250071508);
    msg.setSource(22370U);
    msg.setSourceEntity(145U);
    msg.setDestination(22967U);
    msg.setDestinationEntity(117U);
    msg.value = 0.455083182974;

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
    msg.setTimeStamp(0.402893859838);
    msg.setSource(1823U);
    msg.setSourceEntity(38U);
    msg.setDestination(23064U);
    msg.setDestinationEntity(17U);
    msg.value = 0.849028742379;

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
    msg.setTimeStamp(0.00996275462361);
    msg.setSource(20447U);
    msg.setSourceEntity(254U);
    msg.setDestination(55729U);
    msg.setDestinationEntity(7U);
    msg.value.assign("UMNHWRCHWMVWBPPRAAFCANREDCTTRMAFQFQPJYWKIENXMFKNZDUHZQAXSRMQGYSSZVON");

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
    msg.setTimeStamp(0.641951282593);
    msg.setSource(24598U);
    msg.setSourceEntity(30U);
    msg.setDestination(56528U);
    msg.setDestinationEntity(202U);
    msg.value.assign("PSWJIGHYAFMWHENNYNKRFVFXYTORKXHUAOIWCQVNZCMGRXMOLVFPOJMFGQBYXSUUALJAZEKYBTXYGCSHLOFLCWQBEPODDFVWJPRG");

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
    msg.setTimeStamp(0.0237059576008);
    msg.setSource(49966U);
    msg.setSourceEntity(190U);
    msg.setDestination(39874U);
    msg.setDestinationEntity(171U);
    msg.value.assign("FZCLWEKZRYDJVAMSQEYTDUZONLUNQRVYEKROBWXEWGOEEVMWNAYROZWPQULMOLVQMCIAYIKLICGRBAPFNFNGFGNFVXSTMHUZYJCXPDTBNUDJTHICTBFTGHJOVKUTHNPGULAXVMRPGIKWJSMTBOLKQQXA");

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
    msg.setTimeStamp(0.788430758133);
    msg.setSource(5500U);
    msg.setSourceEntity(33U);
    msg.setDestination(60835U);
    msg.setDestinationEntity(134U);
    const char tmp_msg_0[] = {-96, 39, 7, -92, 106, -70, -98, -64, -21, -94, -128, -11, 69, 24, -25, -67, 14, -82, 65, 37, 106, -73, 90, 60, 57, 92, 65, 83, 24, 105, -71, 32, -72, 89, 87, -113, 29, -125, 71, 107, -20, 24, 68, -4, 28, 61, 66, -12, -79, -118, -118, 120, -65, 5, 107, -16, -9, 70, 40, 92, -102, 112, 102, -39, -14, -103, -20, -24, -115, -49, -87, -77, -41, 52, 31, -40, -86, 60, 103, 42, -11, 94, 102, 32, 23, -113, 37, -66, 84, -83, -65, -23, -13, 66, 91, -18, 62, -47, 125, 69, -8, 46, 117, -38, -26, 32, 114, -50, 109, 94, -56, 10, -68, -55, -83, -6, -78, 22, -106, 48, -115, -90, -48, -73, -107, 35, 102, 94, -13, -53, 33, -29, 68, -72, -15, 51, -23, -121, 22, 77, -78, -2, -46, -63, 17, 83, -1, 0, -83, 13, -92, -59, -120, -19, -49, 67, -41, 99, -24, -58, 73, 70, 85, 0, 56, 78, 20, -121, 125, 80, -107, 20, 10, 97, -23, -47, 14, 1, 51, 57, -76, 105, -86, 31, -5, -37, -38, 3, -115, -92, -119, 72, 25, 0, -5, -108, 113, -62, 123, 24, 36, 68, 57, 78, 47, -106, 85, -10, 70, 51, -22, 111, -72, -78, -70, 90, -125, -10, 72, 15, 66, 16, 108, -113, -18, 93, -36, -31, 107, -111, 56, 70, -74, -123, 27, -86, 24, 48};
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
    msg.setTimeStamp(0.520861282434);
    msg.setSource(29732U);
    msg.setSourceEntity(188U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(12U);
    const char tmp_msg_0[] = {-13, -59, -79, 83, 39, -32, 48, -67, -105, -123, 50, 125, 79, -40, -104, -109, -87, -18, -120, -6, 54, -21, -79, -36, 118, -2, -88, -65, -111, -105, 87, 97, 105, 75, 92, 60, -97, 108, 2, -49, -52, 38, -77, 51, 125, -17, -105, 81, 104, 77, -17, 52, -14, 116, 20, -84, -28, 77, -35, 55, -110, 12, 32, -2, -71, 79, -34, 68, -5, 10, 45, -96, 28, -71, -123, -18, -48, 53, 58, -106, -30, -41, -105, -79, -120, 74, -22, 61, -98, -30, -84, 27, 2, -47, -73, 3, -6, -94, 56, -125, -102, 13, -69, -9, -31, -16, 113, 5, 21, 13, 12, -51, -120, -27, -44, -63, 45, -103, -94, 91, 74, -46, 55, -71, 87, 39, 76, 82, -40, -79, 79, -127, 121, -88, -74, 31, -74, -43, -3, 84, 0, 81, 37, -96, 67, -45, 9, 56, 76, 15, -112, -80, -114, -45, 65, 70, 0, -73, 67, 6, -92, 16, -119, -52, 5, 89, -28, -49, 94, 0, 70, -107, 73, -114, 89, 1, 126, 35, 9, -78, 78, 108, 23, -108, -118, 98, -20, -71, -105, 118, -77, 55, -26, 7, -108, 9, -18, -88, -61, 49, -110, 102, 58, -112, -81, 20, 69, 115, 93, 94, -125, -5, -106, -69, -111, 58, -105, -72, 15, 104, 2, -57, -22, 113, 38, 92, 30, 105, 68, 110, -68, 13, 122, 82, -88, 0, -37, -27, -30, 15, 20, -90, -56, -36, -33, 103, 4};
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
    msg.setTimeStamp(0.385471408115);
    msg.setSource(30460U);
    msg.setSourceEntity(26U);
    msg.setDestination(20794U);
    msg.setDestinationEntity(177U);
    const char tmp_msg_0[] = {11, 4, -62, 12, -23, 34, 113, -75, 45, 14, 106, -52, 31, 4, 45, 94, 76, -104, 78, -55, 105, 121, 58, -120, 0, -48, -40, 58, -8, 25, 14, -72, -115, 106, -16, 75, 53, -109, 30, -18, -20, 48, 81, 22, -114, 91, 92, -125, 81, 15, 37, 36, -64, 83, -56, 41, -85, 35, 46, 11, 12, 8, -118, 17, -50, 83, -49, -24, 75, -96, 36, -25, -87, 39, 15, 42, 90, 12, 90, 4, 104, 108, -94, -124, 120, 29, -50, 58, 43, 125, 34, 126, -108, -98, -60, -34, 53, -122, 11, -1, -108, -107, 115, 14, -89, -54, 85, 87, -7, 43, -60, 49, 12, -57, 10, -54, -96, 62, 31, -75, -66, 53, 88, 95, -79, -118, -92, -60, -27, -121, -66, 84, -65, -20, -2, 24, 83, -77, 22, 23, 40, -113, 72, 71, 125, -47, -77, 29, 11, 5, -114, 6, -105, 75, 44, 23, -14, 20, -33, -81, 99, -4, -83, 82, 93, 103, 67, 40, 23, 17, 47, -44, 75, -60, -95, -28, -112, -41, 0, 28, -87, 47};
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
    msg.setTimeStamp(0.644804576309);
    msg.setSource(41336U);
    msg.setSourceEntity(189U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(73U);
    msg.value = 0.827188220854;

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
    msg.setTimeStamp(0.839733278662);
    msg.setSource(51542U);
    msg.setSourceEntity(252U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(70U);
    msg.value = 0.599326440289;

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
    msg.setTimeStamp(0.735078818026);
    msg.setSource(19147U);
    msg.setSourceEntity(194U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(9U);
    msg.value = 0.178652789979;

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
    msg.setTimeStamp(0.298843581387);
    msg.setSource(46113U);
    msg.setSourceEntity(151U);
    msg.setDestination(33765U);
    msg.setDestinationEntity(254U);
    msg.type = 166U;
    msg.frequency = 2232932720U;
    msg.min_range = 8U;
    msg.max_range = 7895U;
    msg.bits_per_point = 20U;
    msg.scale_factor = 0.334840228022;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0809006766227;
    tmp_msg_0.beam_height = 0.316016312852;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-51, -75, 98, 4, -41, 78, -42, 14, 113, 68, -126, -24, -42, 3, 72, -49, -48, 24, 24, -121, -32, 75, -49, 13, -67, 36, -47, -109, -53, 114, -126, -31, -47, -108, -74, -20, -82, -78, 67, 77, 33, 39, 81, 105, -95, 120, -57, 90, -46, 84, -38, -88, 97, 81, -97, -76, -25, -99, 13, 95, -82, -121, 123, -56, 32, -121, 65, 2, -70, 66, 7, -90, -48, -95, -71, -101, 113, 56, 29, -46, -55, 36, 87, -84, -99, -3, -27, 51, 68, 115, 66, 75, -8, -24, -13, 81, 62, 5, -59, 28, -81, 26, 23, -125, -120, -39, -116, -78, 119, -8, 57, -118, 37, -63, -65, 118, -27, 7, 81, -61, 2, -120, 44, -24, -36, -108, -86, 105, 69, 115, 88};
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
    msg.setTimeStamp(0.889103054664);
    msg.setSource(34054U);
    msg.setSourceEntity(159U);
    msg.setDestination(16809U);
    msg.setDestinationEntity(18U);
    msg.type = 128U;
    msg.frequency = 252910234U;
    msg.min_range = 1739U;
    msg.max_range = 23088U;
    msg.bits_per_point = 13U;
    msg.scale_factor = 0.189969644048;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.803983423543;
    tmp_msg_0.beam_height = 0.777596992542;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-71, -24, -95, 45, -49, 68, 82, 63, 97, 30, 20, -124, -73, 30, 26, -8, -46, -6, -124, 110, -57, 53, -120, 17, 20, 59, -50, -40, 98, 109, 71, -25, 74, -100, -99, -118, -33, 58, 82, -127, -65, 122, -53, -81, -113, 68, 108, 40, 74, -116, -32, -29, -1, -8, -71, -120, -91, -75, -121, -3, 69};
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
    msg.setTimeStamp(0.810066436536);
    msg.setSource(39968U);
    msg.setSourceEntity(120U);
    msg.setDestination(61660U);
    msg.setDestinationEntity(61U);
    msg.type = 248U;
    msg.frequency = 3006187013U;
    msg.min_range = 63180U;
    msg.max_range = 10360U;
    msg.bits_per_point = 215U;
    msg.scale_factor = 0.689901082321;
    const char tmp_msg_0[] = {-82, 29, -88, 11, 78, -86, 98, 92, 95, -117, 32, -37, -66, 34, 16, 25, 18, -42, -4, 123, 42, -74, -82, 13, -50, -36, 37, 37, -2, -85, 55, -28, 95, -39, 69, 59, 120, -117, 33, 106, 113, -21, 85, -114, 66, -123, -60, 10, -107, 62, 121, -46, 126, -48, -40, -74, -124, -74, -86, 44, -32, -83, 122, -47, 101, 23, -55, -120, 54, -17, 104, -33, 76, 103, 33, 105, 5, 88, 9, 69, -62, -13, 16, -19, -107, -96, -39, 80, 1, 51, 122, 10, 52, 123, -120, -55, 55, 12, 107, 50, -25, 9, 54, -64, 70, -68, -75, -71, 13, -112, 80, -3, -91, 62, 89, 58, 123, -13, 68, -90, -23, -17, 77, 49, -58, -46, 35, -39, 80, 62, -50, 30, 84, -45, -3, -117, 45, -30, 23, 10, -56, 116, -72, -48, 108, 21, -125, 95, 84, -99, -61, -2, -87, 92, -5, 109, -82, -44, 38, 43, 103, -104, 62, 20, 21, 83, 122, 96, 7, -115, 89, 78, 40, -117, -69, 87, -126, -47, 50, 39, 103, 12, 64, 10, -119, -124, 20, -10, -53, 64, -71, -91, -93, -39, 69, -3, -68, -55, -109, -94, -66, -2, -28, -126, -23, 30, 44, -19, 87, 120, 56, -79, -10};
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
    msg.setTimeStamp(0.948311136606);
    msg.setSource(56016U);
    msg.setSourceEntity(99U);
    msg.setDestination(25908U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.523638258795);
    msg.setSource(51853U);
    msg.setSourceEntity(8U);
    msg.setDestination(43643U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.68009949782);
    msg.setSource(47295U);
    msg.setSourceEntity(248U);
    msg.setDestination(17111U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.906446213289);
    msg.setSource(38682U);
    msg.setSourceEntity(158U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(83U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.742991505326);
    msg.setSource(13474U);
    msg.setSourceEntity(120U);
    msg.setDestination(19652U);
    msg.setDestinationEntity(53U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.847728149309);
    msg.setSource(39655U);
    msg.setSourceEntity(64U);
    msg.setDestination(60228U);
    msg.setDestinationEntity(45U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.349962735828);
    msg.setSource(10775U);
    msg.setSourceEntity(116U);
    msg.setDestination(57555U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0321541922188;
    msg.confidence = 0.590182270909;
    msg.opmodes.assign("BUAWTONNPBNGPFOEFIKURHZBNZCBNVEJOAHKRUHZGCTLUYDXUALZACDWDEOIUUWAFDYIKGUKKMLNSEBECGLJFIIXZSYCRQQWYXEQEQXHRDQCFXIQHSSQPCJIVWKJXKAHEHVOPGDZADJKFXYVABYDUOBSDJMTQLVQEOPSJTTPVFMGBFTFRKVMLRJCROBYZGLOPG");

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
    msg.setTimeStamp(0.716815499222);
    msg.setSource(59884U);
    msg.setSourceEntity(50U);
    msg.setDestination(2121U);
    msg.setDestinationEntity(229U);
    msg.value = 0.607281401859;
    msg.confidence = 0.708766674723;
    msg.opmodes.assign("APLWXHPFDBEUTTSZOKFEOEWIXWIEIRMKQYGGZDNMZUUICRIUSOHNSTYCCUQGCMZOHHSXEFPNBVJBCFRZAXMWQOXMAFJ");

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
    msg.setTimeStamp(0.91036274928);
    msg.setSource(17047U);
    msg.setSourceEntity(144U);
    msg.setDestination(27929U);
    msg.setDestinationEntity(167U);
    msg.value = 0.212021670339;
    msg.confidence = 0.24221053241;
    msg.opmodes.assign("TNYEUHSBEQYNZUPTDLKOEHEQPBMYVVRQNFMXDNGKQOTFNNDQXXQBIYVKHBQFUTWIHPJRISYDTLAJTXBDWGFLOHIWXRZYJTLYCAQLHJARSROKSSRBYPQICJEMFLTLAMRINRZFXZLGUHUMCRVKWJWPOUMELCALMRVVHEOPCPCUJJVYUNWCAFWDZSBDZIATEGFWDSAIMTMCXZFCGUOVJXBQMOFOYZGJWZDENVHP");

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
    msg.setTimeStamp(0.949764413862);
    msg.setSource(33963U);
    msg.setSourceEntity(226U);
    msg.setDestination(41088U);
    msg.setDestinationEntity(252U);
    msg.itow = 224197197U;
    msg.lat = 0.89241882862;
    msg.lon = 0.67322678129;
    msg.height_ell = 0.279990010584;
    msg.height_sea = 0.313350171199;
    msg.hacc = 0.161804177502;
    msg.vacc = 0.306102862112;
    msg.vel_n = 0.504479992851;
    msg.vel_e = 0.489605182985;
    msg.vel_d = 0.112705066368;
    msg.speed = 0.0364687414137;
    msg.gspeed = 0.00135938383483;
    msg.heading = 0.768567668383;
    msg.sacc = 0.869804039818;
    msg.cacc = 0.79511361007;

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
    msg.setTimeStamp(0.433627659025);
    msg.setSource(45515U);
    msg.setSourceEntity(30U);
    msg.setDestination(41051U);
    msg.setDestinationEntity(116U);
    msg.itow = 763233151U;
    msg.lat = 0.698254953104;
    msg.lon = 0.0606728649321;
    msg.height_ell = 0.0791054210956;
    msg.height_sea = 0.133064634673;
    msg.hacc = 0.65581390261;
    msg.vacc = 0.174687421326;
    msg.vel_n = 0.0871154089628;
    msg.vel_e = 0.668423394698;
    msg.vel_d = 0.420995368245;
    msg.speed = 0.601638188529;
    msg.gspeed = 0.455304024436;
    msg.heading = 0.487410348008;
    msg.sacc = 0.0842075941324;
    msg.cacc = 0.191536664641;

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
    msg.setTimeStamp(0.496439436004);
    msg.setSource(59891U);
    msg.setSourceEntity(254U);
    msg.setDestination(12665U);
    msg.setDestinationEntity(211U);
    msg.itow = 982313902U;
    msg.lat = 0.732032546649;
    msg.lon = 0.921095069595;
    msg.height_ell = 0.450147209588;
    msg.height_sea = 0.688424029948;
    msg.hacc = 0.163191999503;
    msg.vacc = 0.70850911485;
    msg.vel_n = 0.00526316840564;
    msg.vel_e = 0.565707402302;
    msg.vel_d = 0.225562154307;
    msg.speed = 0.877564620935;
    msg.gspeed = 0.885932316676;
    msg.heading = 0.550151146165;
    msg.sacc = 0.289120444387;
    msg.cacc = 0.258709422545;

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
    msg.setTimeStamp(0.569678491694);
    msg.setSource(18856U);
    msg.setSourceEntity(73U);
    msg.setDestination(27198U);
    msg.setDestinationEntity(248U);
    msg.id = 101U;
    msg.value = 0.356300527074;

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
    msg.setTimeStamp(0.999900974981);
    msg.setSource(64894U);
    msg.setSourceEntity(120U);
    msg.setDestination(53010U);
    msg.setDestinationEntity(27U);
    msg.id = 177U;
    msg.value = 0.437510705265;

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
    msg.setTimeStamp(0.57056020237);
    msg.setSource(15146U);
    msg.setSourceEntity(117U);
    msg.setDestination(42865U);
    msg.setDestinationEntity(140U);
    msg.id = 20U;
    msg.value = 0.267800768953;

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
    msg.setTimeStamp(0.822669907109);
    msg.setSource(6614U);
    msg.setSourceEntity(205U);
    msg.setDestination(40236U);
    msg.setDestinationEntity(199U);
    msg.x = 0.535777521167;
    msg.y = 0.859742716086;
    msg.z = 0.0879719719598;
    msg.phi = 0.731184032412;
    msg.theta = 0.67623255817;
    msg.psi = 0.301088410175;

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
    msg.setTimeStamp(0.0528942438515);
    msg.setSource(35210U);
    msg.setSourceEntity(146U);
    msg.setDestination(62138U);
    msg.setDestinationEntity(205U);
    msg.x = 0.891165706304;
    msg.y = 0.108891006123;
    msg.z = 0.653627760038;
    msg.phi = 0.392967558394;
    msg.theta = 0.351469527469;
    msg.psi = 0.670137553537;

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
    msg.setTimeStamp(0.0388927616235);
    msg.setSource(3005U);
    msg.setSourceEntity(158U);
    msg.setDestination(8401U);
    msg.setDestinationEntity(157U);
    msg.x = 0.343984624517;
    msg.y = 0.0220294467788;
    msg.z = 0.186934473536;
    msg.phi = 0.308372438445;
    msg.theta = 0.152109182078;
    msg.psi = 0.799812667166;

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
    msg.setTimeStamp(0.96862082443);
    msg.setSource(57946U);
    msg.setSourceEntity(8U);
    msg.setDestination(63447U);
    msg.setDestinationEntity(235U);
    msg.beam_width = 0.0574635740534;
    msg.beam_height = 0.851005600175;

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
    msg.setTimeStamp(0.862538712152);
    msg.setSource(48437U);
    msg.setSourceEntity(131U);
    msg.setDestination(19050U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.422734776884;
    msg.beam_height = 0.705505616986;

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
    msg.setTimeStamp(0.13691214647);
    msg.setSource(62897U);
    msg.setSourceEntity(0U);
    msg.setDestination(2771U);
    msg.setDestinationEntity(140U);
    msg.beam_width = 0.252349918148;
    msg.beam_height = 0.87025781922;

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
    msg.setTimeStamp(0.0959142266608);
    msg.setSource(15994U);
    msg.setSourceEntity(44U);
    msg.setDestination(54140U);
    msg.setDestinationEntity(71U);
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
    msg.setTimeStamp(0.312903747512);
    msg.setSource(58043U);
    msg.setSourceEntity(124U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(253U);
    msg.sane = 126U;

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
    msg.setTimeStamp(0.727993668204);
    msg.setSource(60334U);
    msg.setSourceEntity(12U);
    msg.setDestination(40690U);
    msg.setDestinationEntity(67U);
    msg.sane = 252U;

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
    msg.setTimeStamp(0.87806576992);
    msg.setSource(41376U);
    msg.setSourceEntity(74U);
    msg.setDestination(44417U);
    msg.setDestinationEntity(214U);
    msg.value = 0.161498883428;

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
    msg.setTimeStamp(0.743446199065);
    msg.setSource(21703U);
    msg.setSourceEntity(136U);
    msg.setDestination(4373U);
    msg.setDestinationEntity(191U);
    msg.value = 0.956722814241;

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
    msg.setTimeStamp(0.912358062375);
    msg.setSource(21461U);
    msg.setSourceEntity(204U);
    msg.setDestination(45166U);
    msg.setDestinationEntity(192U);
    msg.value = 0.196716434278;

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
    msg.setTimeStamp(0.173118246305);
    msg.setSource(54903U);
    msg.setSourceEntity(92U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(105U);
    msg.value = 0.684716906288;

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
    msg.setTimeStamp(0.386726469255);
    msg.setSource(22027U);
    msg.setSourceEntity(79U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(44U);
    msg.value = 0.173920545229;

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
    msg.setTimeStamp(0.127988218033);
    msg.setSource(2131U);
    msg.setSourceEntity(113U);
    msg.setDestination(37348U);
    msg.setDestinationEntity(242U);
    msg.value = 0.683675739489;

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
    msg.setTimeStamp(0.259016087123);
    msg.setSource(35156U);
    msg.setSourceEntity(210U);
    msg.setDestination(62328U);
    msg.setDestinationEntity(193U);
    msg.value = 0.379515253944;

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
    msg.setTimeStamp(0.771349249578);
    msg.setSource(33368U);
    msg.setSourceEntity(129U);
    msg.setDestination(60178U);
    msg.setDestinationEntity(253U);
    msg.value = 0.551632227861;

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
    msg.setTimeStamp(0.933529387412);
    msg.setSource(28851U);
    msg.setSourceEntity(179U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(104U);
    msg.value = 0.933918388159;

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
    msg.setTimeStamp(0.555092786413);
    msg.setSource(11988U);
    msg.setSourceEntity(157U);
    msg.setDestination(51665U);
    msg.setDestinationEntity(203U);
    msg.value = 0.670941064526;

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
    msg.setTimeStamp(0.767599647669);
    msg.setSource(52953U);
    msg.setSourceEntity(239U);
    msg.setDestination(9635U);
    msg.setDestinationEntity(13U);
    msg.value = 0.866809990346;

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
    msg.setTimeStamp(0.430346601442);
    msg.setSource(39831U);
    msg.setSourceEntity(140U);
    msg.setDestination(45892U);
    msg.setDestinationEntity(22U);
    msg.value = 0.73064519521;

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
    msg.setTimeStamp(0.325702791408);
    msg.setSource(1448U);
    msg.setSourceEntity(232U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(78U);
    msg.value = 0.257891222791;

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
    msg.setTimeStamp(0.301863264472);
    msg.setSource(13242U);
    msg.setSourceEntity(171U);
    msg.setDestination(45456U);
    msg.setDestinationEntity(176U);
    msg.value = 0.657238236204;

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
    msg.setTimeStamp(0.779438918008);
    msg.setSource(40813U);
    msg.setSourceEntity(132U);
    msg.setDestination(7315U);
    msg.setDestinationEntity(47U);
    msg.value = 0.329549901302;

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
    msg.setTimeStamp(0.0742012849314);
    msg.setSource(43541U);
    msg.setSourceEntity(218U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(172U);
    msg.value = 0.478397223653;

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
    msg.setTimeStamp(0.418671739178);
    msg.setSource(20961U);
    msg.setSourceEntity(238U);
    msg.setDestination(59552U);
    msg.setDestinationEntity(74U);
    msg.value = 0.39996418002;

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
    msg.setTimeStamp(0.348619173002);
    msg.setSource(16004U);
    msg.setSourceEntity(174U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0752006144888;

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
    msg.setTimeStamp(0.366093179417);
    msg.setSource(42208U);
    msg.setSourceEntity(204U);
    msg.setDestination(62902U);
    msg.setDestinationEntity(87U);
    msg.value = 0.880818093419;

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
    msg.setTimeStamp(0.228542051423);
    msg.setSource(42293U);
    msg.setSourceEntity(107U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(146U);
    msg.value = 0.781821478316;

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
    msg.setTimeStamp(0.824778573538);
    msg.setSource(19660U);
    msg.setSourceEntity(148U);
    msg.setDestination(21301U);
    msg.setDestinationEntity(83U);
    msg.value = 0.361161766659;

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
    msg.setTimeStamp(0.436112496496);
    msg.setSource(10031U);
    msg.setSourceEntity(243U);
    msg.setDestination(560U);
    msg.setDestinationEntity(160U);
    msg.value = 0.932418386114;

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
    msg.setTimeStamp(0.141137028655);
    msg.setSource(41618U);
    msg.setSourceEntity(109U);
    msg.setDestination(3130U);
    msg.setDestinationEntity(98U);
    msg.value = 0.603070120645;

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
    msg.setTimeStamp(0.871160429213);
    msg.setSource(65036U);
    msg.setSourceEntity(62U);
    msg.setDestination(58590U);
    msg.setDestinationEntity(4U);
    msg.value = 0.827333222437;

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
    msg.setTimeStamp(0.213492315337);
    msg.setSource(3401U);
    msg.setSourceEntity(93U);
    msg.setDestination(9604U);
    msg.setDestinationEntity(21U);
    msg.validity = 54057U;
    msg.type = 245U;
    msg.tow = 3428678508U;
    msg.base_lat = 0.305381666196;
    msg.base_lon = 0.672875570247;
    msg.base_height = 0.582558480826;
    msg.n = 0.26997854019;
    msg.e = 0.26636868364;
    msg.d = 0.736406264827;
    msg.v_n = 0.315118692783;
    msg.v_e = 0.710854462224;
    msg.v_d = 0.567956807905;
    msg.satellites = 254U;
    msg.iar_hyp = 42011U;
    msg.iar_ratio = 0.130966623306;

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
    msg.setTimeStamp(0.477248841971);
    msg.setSource(42087U);
    msg.setSourceEntity(35U);
    msg.setDestination(27926U);
    msg.setDestinationEntity(168U);
    msg.validity = 13838U;
    msg.type = 208U;
    msg.tow = 2432923259U;
    msg.base_lat = 0.258516743725;
    msg.base_lon = 0.777242749073;
    msg.base_height = 0.686085732363;
    msg.n = 0.72261754626;
    msg.e = 0.0563870808065;
    msg.d = 0.93691078297;
    msg.v_n = 0.912144906714;
    msg.v_e = 0.136280121889;
    msg.v_d = 0.649803147221;
    msg.satellites = 199U;
    msg.iar_hyp = 35840U;
    msg.iar_ratio = 0.489628150492;

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
    msg.setTimeStamp(0.207458457181);
    msg.setSource(9607U);
    msg.setSourceEntity(99U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(219U);
    msg.validity = 2823U;
    msg.type = 55U;
    msg.tow = 3808510433U;
    msg.base_lat = 0.665690737928;
    msg.base_lon = 0.0538423143537;
    msg.base_height = 0.571856949486;
    msg.n = 0.701916133601;
    msg.e = 0.842277166624;
    msg.d = 0.929217760744;
    msg.v_n = 0.97799990413;
    msg.v_e = 0.648086586589;
    msg.v_d = 0.771925853041;
    msg.satellites = 157U;
    msg.iar_hyp = 44022U;
    msg.iar_ratio = 0.425508886904;

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
    msg.setTimeStamp(0.281263676741);
    msg.setSource(37480U);
    msg.setSourceEntity(176U);
    msg.setDestination(17131U);
    msg.setDestinationEntity(182U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.577854290633;
    tmp_msg_0.lon = 0.925460810614;
    tmp_msg_0.height = 0.813280126294;
    tmp_msg_0.x = 0.639819233993;
    tmp_msg_0.y = 0.132973531286;
    tmp_msg_0.z = 0.137550935332;
    tmp_msg_0.phi = 0.849445714784;
    tmp_msg_0.theta = 0.511059635981;
    tmp_msg_0.psi = 0.00628255683384;
    tmp_msg_0.u = 0.0148268677475;
    tmp_msg_0.v = 0.0913722014121;
    tmp_msg_0.w = 0.251034129647;
    tmp_msg_0.vx = 0.266015823452;
    tmp_msg_0.vy = 0.883888952831;
    tmp_msg_0.vz = 0.881100277447;
    tmp_msg_0.p = 0.120755760988;
    tmp_msg_0.q = 0.78039143683;
    tmp_msg_0.r = 0.132190311699;
    tmp_msg_0.depth = 0.203884693753;
    tmp_msg_0.alt = 0.18501074602;
    msg.state.set(tmp_msg_0);
    msg.type = 54U;

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
    msg.setTimeStamp(0.42989648553);
    msg.setSource(19651U);
    msg.setSourceEntity(157U);
    msg.setDestination(1467U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.170885291053;
    tmp_msg_0.lon = 0.630815066131;
    tmp_msg_0.height = 0.891438425858;
    tmp_msg_0.x = 0.916347746317;
    tmp_msg_0.y = 0.735822029373;
    tmp_msg_0.z = 0.415569242095;
    tmp_msg_0.phi = 0.885949044864;
    tmp_msg_0.theta = 0.268634162874;
    tmp_msg_0.psi = 0.492268930828;
    tmp_msg_0.u = 0.221988099177;
    tmp_msg_0.v = 0.0728202950379;
    tmp_msg_0.w = 0.517107356089;
    tmp_msg_0.vx = 0.0406004411469;
    tmp_msg_0.vy = 0.00878798273827;
    tmp_msg_0.vz = 0.2810337008;
    tmp_msg_0.p = 0.927974671811;
    tmp_msg_0.q = 0.228824216728;
    tmp_msg_0.r = 0.851117760192;
    tmp_msg_0.depth = 0.445649282586;
    tmp_msg_0.alt = 0.334374418533;
    msg.state.set(tmp_msg_0);
    msg.type = 110U;

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
    msg.setTimeStamp(0.33124321954);
    msg.setSource(41909U);
    msg.setSourceEntity(211U);
    msg.setDestination(28734U);
    msg.setDestinationEntity(114U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.570336956508;
    tmp_msg_0.lon = 0.772263477602;
    tmp_msg_0.height = 0.926844083968;
    tmp_msg_0.x = 0.882374751793;
    tmp_msg_0.y = 0.345228486576;
    tmp_msg_0.z = 0.532550888005;
    tmp_msg_0.phi = 0.815130333739;
    tmp_msg_0.theta = 0.671090213817;
    tmp_msg_0.psi = 0.622207551931;
    tmp_msg_0.u = 0.449493097079;
    tmp_msg_0.v = 0.854677214083;
    tmp_msg_0.w = 0.780485680634;
    tmp_msg_0.vx = 0.191070031407;
    tmp_msg_0.vy = 0.197688309203;
    tmp_msg_0.vz = 0.982971131803;
    tmp_msg_0.p = 0.469436362898;
    tmp_msg_0.q = 0.0474045587676;
    tmp_msg_0.r = 0.978500759027;
    tmp_msg_0.depth = 0.340834021041;
    tmp_msg_0.alt = 0.457734156384;
    msg.state.set(tmp_msg_0);
    msg.type = 40U;

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
    msg.setTimeStamp(0.952789189641);
    msg.setSource(50695U);
    msg.setSourceEntity(238U);
    msg.setDestination(55012U);
    msg.setDestinationEntity(123U);
    msg.value = 0.984202783021;

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
    msg.setTimeStamp(0.172546557589);
    msg.setSource(58142U);
    msg.setSourceEntity(134U);
    msg.setDestination(8911U);
    msg.setDestinationEntity(100U);
    msg.value = 0.832836460025;

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
    msg.setTimeStamp(0.360254028496);
    msg.setSource(46571U);
    msg.setSourceEntity(17U);
    msg.setDestination(39480U);
    msg.setDestinationEntity(66U);
    msg.value = 0.911964235145;

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
    msg.setTimeStamp(0.389086564428);
    msg.setSource(41019U);
    msg.setSourceEntity(246U);
    msg.setDestination(50535U);
    msg.setDestinationEntity(138U);
    msg.value = 0.377437773705;

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
    msg.setTimeStamp(0.62033861991);
    msg.setSource(416U);
    msg.setSourceEntity(84U);
    msg.setDestination(20191U);
    msg.setDestinationEntity(220U);
    msg.value = 0.795466518044;

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
    msg.setTimeStamp(0.579475150394);
    msg.setSource(49686U);
    msg.setSourceEntity(49U);
    msg.setDestination(39997U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0609815713194;

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
    msg.setTimeStamp(0.561584062116);
    msg.setSource(20411U);
    msg.setSourceEntity(108U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(20U);
    msg.value = 0.819571003142;

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
    msg.setTimeStamp(0.69455355317);
    msg.setSource(44262U);
    msg.setSourceEntity(94U);
    msg.setDestination(34454U);
    msg.setDestinationEntity(25U);
    msg.value = 0.985528725016;

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
    msg.setTimeStamp(0.00162652962728);
    msg.setSource(53132U);
    msg.setSourceEntity(146U);
    msg.setDestination(53307U);
    msg.setDestinationEntity(33U);
    msg.value = 0.208728880719;

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
    msg.setTimeStamp(0.644598376919);
    msg.setSource(58385U);
    msg.setSourceEntity(160U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(232U);
    msg.value = 0.406943712662;

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
    msg.setTimeStamp(0.253114768306);
    msg.setSource(8028U);
    msg.setSourceEntity(187U);
    msg.setDestination(59390U);
    msg.setDestinationEntity(164U);
    msg.value = 0.706458964736;

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
    msg.setTimeStamp(0.770615917566);
    msg.setSource(29542U);
    msg.setSourceEntity(225U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(234U);
    msg.value = 0.173960662121;

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
    msg.setTimeStamp(0.46364951853);
    msg.setSource(52913U);
    msg.setSourceEntity(16U);
    msg.setDestination(3676U);
    msg.setDestinationEntity(109U);
    msg.value = 0.176857662749;

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
    msg.setTimeStamp(0.758190430435);
    msg.setSource(48921U);
    msg.setSourceEntity(45U);
    msg.setDestination(46716U);
    msg.setDestinationEntity(180U);
    msg.value = 0.109370391094;

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
    msg.setTimeStamp(0.866946785738);
    msg.setSource(46987U);
    msg.setSourceEntity(193U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(219U);
    msg.value = 0.307806400247;

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
    msg.setTimeStamp(0.392847402711);
    msg.setSource(51996U);
    msg.setSourceEntity(197U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(221U);
    msg.id = 193U;
    msg.zoom = 171U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.339689436185);
    msg.setSource(37153U);
    msg.setSourceEntity(215U);
    msg.setDestination(51420U);
    msg.setDestinationEntity(146U);
    msg.id = 232U;
    msg.zoom = 168U;
    msg.action = 156U;

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
    msg.setTimeStamp(0.470560854037);
    msg.setSource(47034U);
    msg.setSourceEntity(2U);
    msg.setDestination(9039U);
    msg.setDestinationEntity(112U);
    msg.id = 179U;
    msg.zoom = 57U;
    msg.action = 155U;

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
    msg.setTimeStamp(0.106189752325);
    msg.setSource(4055U);
    msg.setSourceEntity(231U);
    msg.setDestination(35319U);
    msg.setDestinationEntity(62U);
    msg.id = 147U;
    msg.value = 0.683064163708;

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
    msg.setTimeStamp(0.1491259058);
    msg.setSource(22312U);
    msg.setSourceEntity(247U);
    msg.setDestination(60443U);
    msg.setDestinationEntity(26U);
    msg.id = 32U;
    msg.value = 0.235566262752;

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
    msg.setTimeStamp(0.925440953069);
    msg.setSource(18356U);
    msg.setSourceEntity(126U);
    msg.setDestination(15137U);
    msg.setDestinationEntity(252U);
    msg.id = 56U;
    msg.value = 0.639620031272;

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
    msg.setTimeStamp(0.991560168936);
    msg.setSource(5132U);
    msg.setSourceEntity(161U);
    msg.setDestination(61330U);
    msg.setDestinationEntity(161U);
    msg.id = 34U;
    msg.value = 0.835202984669;

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
    msg.setTimeStamp(0.554752316444);
    msg.setSource(56025U);
    msg.setSourceEntity(51U);
    msg.setDestination(32599U);
    msg.setDestinationEntity(45U);
    msg.id = 100U;
    msg.value = 0.589117436973;

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
    msg.setTimeStamp(0.394753497225);
    msg.setSource(37038U);
    msg.setSourceEntity(251U);
    msg.setDestination(21607U);
    msg.setDestinationEntity(216U);
    msg.id = 93U;
    msg.value = 0.65031178385;

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
    msg.setTimeStamp(0.818717775725);
    msg.setSource(33729U);
    msg.setSourceEntity(55U);
    msg.setDestination(43384U);
    msg.setDestinationEntity(195U);
    msg.id = 23U;
    msg.angle = 0.0691153622631;

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
    msg.setTimeStamp(0.621908592342);
    msg.setSource(33805U);
    msg.setSourceEntity(166U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(53U);
    msg.id = 13U;
    msg.angle = 0.718462010492;

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
    msg.setTimeStamp(0.487816370039);
    msg.setSource(60974U);
    msg.setSourceEntity(161U);
    msg.setDestination(34790U);
    msg.setDestinationEntity(31U);
    msg.id = 75U;
    msg.angle = 0.0545426620416;

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
    msg.setTimeStamp(0.964858124369);
    msg.setSource(10342U);
    msg.setSourceEntity(131U);
    msg.setDestination(36104U);
    msg.setDestinationEntity(94U);
    msg.op = 190U;
    msg.actions.assign("CCBISKZYBEWKDHYOJWFOODJSGICOITIEPQYRMOAIFPDGVAPKSRNNXTVSRUMHDHIRXYMBUVPVKMAOVTFLSZCNLHLKCQXFXWQTUCQEBHYVUMMHLMEAQUXGFOZUDWAPZPGKRJFFCXYZRTCIALWEGDZKNOZGRIGXTIEUFRTJLPTYLXOPOY");

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
    msg.setTimeStamp(0.0247156292953);
    msg.setSource(62296U);
    msg.setSourceEntity(10U);
    msg.setDestination(40281U);
    msg.setDestinationEntity(67U);
    msg.op = 31U;
    msg.actions.assign("ZJNJSIKSHDGIFGBCZVOOAELRNNAVPCSBSJTTZMEQNDXPWAZLYFTXLHFGDYFKNVDEKZRNKDKTADRFWSHBMYPUQKGUOVIUWDHGLMQ");

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
    msg.setTimeStamp(0.519510556652);
    msg.setSource(41448U);
    msg.setSourceEntity(202U);
    msg.setDestination(59808U);
    msg.setDestinationEntity(112U);
    msg.op = 66U;
    msg.actions.assign("ZHUUCXYFNOWMWCIJZGCDBOTLOMBYSDPMJXZBGSSEGMWZJNOAYXABQBIICVFVAOEMOLKLNPYRVSJCSCTSRIUKVCEMHFGZCWDHBOWMUYGNQDKDHIKVYQYEHUDXQRGRHGPLAPUEESEFLYUODTUKHMPIQFPNXRMJTVGTKXPF");

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
    msg.setTimeStamp(0.51040731674);
    msg.setSource(17953U);
    msg.setSourceEntity(117U);
    msg.setDestination(16167U);
    msg.setDestinationEntity(179U);
    msg.actions.assign("EPBOVVEMZWCSKMHBWSLGYTSAAXTFQUOPTLZ");

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
    msg.setTimeStamp(0.346127556956);
    msg.setSource(60934U);
    msg.setSourceEntity(83U);
    msg.setDestination(2733U);
    msg.setDestinationEntity(237U);
    msg.actions.assign("NIAZSMBMOYKABPNTVSHNFXHQBORSHIDCVCCGVRXIAROSVHPRLTPYKIJNLAOEXCCTFTOUGOPEBBHDORLIRDCYNZBLLZGZZANIDIOWVXSCKVZRQUENAJXJJKYFGTEXQYYAWHMVWUQKBUSTHWGGDDJVQKPFGJFZWZDSYTJHSLYIMJLCFUMDREOEQXSKYDTLQV");

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
    msg.setTimeStamp(0.585064574699);
    msg.setSource(64861U);
    msg.setSourceEntity(193U);
    msg.setDestination(35785U);
    msg.setDestinationEntity(161U);
    msg.actions.assign("HOUPCMZEVUPRNAINLHJVRDNVCHXYFHJFGZIKTYENIKDQNWQITHCUHGQYOOUJLWHWFOFKKZNVKQDEWTAJZGZSVOIRALMKBBXISGBZBZLFIXNSUJGTWMPMNHQGAPPYOBLDUXUXEMRTQGAWPYXTG");

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
    msg.setTimeStamp(0.0373143034989);
    msg.setSource(64296U);
    msg.setSourceEntity(158U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(216U);
    msg.button = 106U;
    msg.value = 7U;

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
    msg.setTimeStamp(0.279815233057);
    msg.setSource(25623U);
    msg.setSourceEntity(221U);
    msg.setDestination(11915U);
    msg.setDestinationEntity(1U);
    msg.button = 11U;
    msg.value = 238U;

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
    msg.setTimeStamp(0.98186313662);
    msg.setSource(65524U);
    msg.setSourceEntity(211U);
    msg.setDestination(21245U);
    msg.setDestinationEntity(128U);
    msg.button = 201U;
    msg.value = 19U;

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
    msg.setTimeStamp(0.148366134255);
    msg.setSource(55399U);
    msg.setSourceEntity(18U);
    msg.setDestination(57539U);
    msg.setDestinationEntity(171U);
    msg.op = 213U;
    msg.text.assign("KRTUSLATSNJUQXXFUGMBSMAJKWBLELRHXYJWYVLCIEFPPIOOJVFQHZYGRNVAUWNPKIDFTJBYTCDKNWEBBZQDJ");

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
    msg.setTimeStamp(0.972215849606);
    msg.setSource(13869U);
    msg.setSourceEntity(185U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(209U);
    msg.op = 116U;
    msg.text.assign("WOPJQWTYJDMWDTFSQATNWKQBREZRVMAVFOSORWTXEHIGQKMFYDXJDFSBLEPALHHPIBDBGEACREWGZCYZIFMCHZIVFQERNOVJASEDHDSCUCYWUYCIKGXMPZNGSJLMKUMRBTKCGIGIURVAGXJHVXUXGWZQQKDDHLLCVTSLBNXTFJQIUBACZXBMSZHUNNTUHVTXZYKWPHNYBBICQFKUGZ");

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
    msg.setTimeStamp(0.804924926581);
    msg.setSource(14245U);
    msg.setSourceEntity(108U);
    msg.setDestination(41054U);
    msg.setDestinationEntity(12U);
    msg.op = 205U;
    msg.text.assign("KBKXLCZORNXUGGKQOCSLUYMADZDBHLDJFTKQRXGXWAYLTVSQTTBQYFLJEVZJCBOYIZOYOUCFZUWYGKPUWPDEJIRHLHAPMUMXVRFLGSVEHBFOFMCIKGEFHKTQGGYMOFSDRRCSBUZPKVPPAYGPTZDWNUVMLINJNJDDHP");

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
    msg.setTimeStamp(0.484553002555);
    msg.setSource(21376U);
    msg.setSourceEntity(243U);
    msg.setDestination(65263U);
    msg.setDestinationEntity(102U);
    msg.op = 21U;
    msg.time_remain = 0.904636163514;
    msg.sched_time = 0.449175730931;

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
    msg.setTimeStamp(0.618932303243);
    msg.setSource(26982U);
    msg.setSourceEntity(223U);
    msg.setDestination(42569U);
    msg.setDestinationEntity(166U);
    msg.op = 148U;
    msg.time_remain = 0.524903104217;
    msg.sched_time = 0.243660314325;

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
    msg.setTimeStamp(0.24016881914);
    msg.setSource(52207U);
    msg.setSourceEntity(58U);
    msg.setDestination(20683U);
    msg.setDestinationEntity(9U);
    msg.op = 215U;
    msg.time_remain = 0.0271307096677;
    msg.sched_time = 0.507614674833;

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
    msg.setTimeStamp(0.384714021928);
    msg.setSource(39879U);
    msg.setSourceEntity(138U);
    msg.setDestination(24404U);
    msg.setDestinationEntity(96U);
    msg.name.assign("FSGFXXDEULLUDUXMKWGWIJAQZALEHHOYREAGMEMNUCUJSVASNAOTJHSLYMYZKYMTIRBWMSKCKUDIDQEQNAHPTZNFVHSDBSMJCEZUJTZYQFBPXGHTRVDONQBWKUPKPPXHTCWPVIBGZEKWVAOOQOQKFORLNRGZPJL");
    msg.op = 195U;
    msg.sched_time = 0.783285596207;

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
    msg.setTimeStamp(0.160838445064);
    msg.setSource(31389U);
    msg.setSourceEntity(221U);
    msg.setDestination(55387U);
    msg.setDestinationEntity(158U);
    msg.name.assign("NLLPCMVEMVXOLWSWYYWWFXCXNIXCEWKEBBJQUSJFTFIRQPTDFOGZNKRFVCKYBCGSGVSBURGRILJIPLYDEPYBSJMEKBOTUGLDPMOSTUHVQRVCIQZEWHFAKFBODGQKZDJIAXRMFYVYKTOIXHAJPHMXKWXMSAZEGWCSRZTQWHXYQUCRDYMNHMHHOJFLYOPN");
    msg.op = 191U;
    msg.sched_time = 0.286112818722;

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
    msg.setTimeStamp(0.169245198755);
    msg.setSource(30158U);
    msg.setSourceEntity(166U);
    msg.setDestination(8682U);
    msg.setDestinationEntity(122U);
    msg.name.assign("WOHDSDZTBXEDMKBGZJARSCWUZATCGWCUGKKKKEBMDIAHUFYZUZLOOVTIVMHDXBFTXXCYOFLXJMUJNCPITNZAQXAGNVREYYHLPSOKXGLCXYPNFSSETMWAQWNRSUT");
    msg.op = 161U;
    msg.sched_time = 0.251972752407;

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
    msg.setTimeStamp(0.239797739683);
    msg.setSource(38494U);
    msg.setSourceEntity(6U);
    msg.setDestination(42209U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.754244538726);
    msg.setSource(24818U);
    msg.setSourceEntity(173U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.978442092511);
    msg.setSource(25098U);
    msg.setSourceEntity(196U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.7556044145);
    msg.setSource(45555U);
    msg.setSourceEntity(252U);
    msg.setDestination(7702U);
    msg.setDestinationEntity(167U);
    msg.name.assign("GRVDSLNZZHTMQHHTTAOXIYKSNDXYEFKOENJKBHXGVKEQYGARFRVACNDPIFJXSCRIYVSWOIJZGCKYUADTCVUKUIFUDCLGDMGIPZEGFJWMHJBMPRNJSTOTLOBNYAAIZWQCRYTQQGKHDOKWLZJQFLXQCHWILJGJWUNMFZUWBDWMOOFZZPBAUVXFNMPKQCBEITHGUEJSPRHNYTEFWPNURPOBAUXSXEODIQWKADL");
    msg.state = 243U;

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
    msg.setTimeStamp(0.697271720243);
    msg.setSource(17287U);
    msg.setSourceEntity(186U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(39U);
    msg.name.assign("YXBNBPAETGMNCKGYESZAOPZNUXEQNA");
    msg.state = 212U;

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
    msg.setTimeStamp(0.495929114514);
    msg.setSource(10130U);
    msg.setSourceEntity(248U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ZWDNUUCWFLROIJIVNQLCHQPKURNFIJCERMDWCCAEYGNIKMEOTAMGWOTJEFVLOZCATMVWEMDDVNFXJBTSPMPZPYUYQ");
    msg.state = 243U;

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
    msg.setTimeStamp(0.878678601237);
    msg.setSource(29381U);
    msg.setSourceEntity(25U);
    msg.setDestination(28160U);
    msg.setDestinationEntity(28U);
    msg.name.assign("QFUHXHOSYVETIZJEGQROFFTHASIZUPZCXAPWNPWOMCKWVORZAJSMLPFGJWUYGLTELZCBEAAPHXXZDBEIQMQNXVKDDUMEPPBKYKOCOFRYMQCRXZNSCITAATNYNLSSHWXALCZDOKJGQBBIEVKBRVIVJWDDMFTHVPYRFIJLKDOXMRWTHGBVYFLMBHFRYEIFTBGAYQDJSPLRNXOTQIDUGBIHKGZAJKWDUNCVCUNUQGMKJVQYLENGCUZEMJSRPL");
    msg.value = 32U;

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
    msg.setTimeStamp(0.709155978822);
    msg.setSource(63061U);
    msg.setSourceEntity(123U);
    msg.setDestination(34934U);
    msg.setDestinationEntity(68U);
    msg.name.assign("VTSOYAXGFHZFNGRKDHCJTPBCBTMEINWPXZRXMDQKEESSSYHHMEHGAEVFJQWNPQWNGNWRTBJSLAQDYZTOFIWDKDLBBXVELUECFJQRJOLSKBFLZKMFRVBKAKHCOKTUUXOGEEOJFIQGTVOSLUKCMAVBGZLUYOJHNIRNXPRNQUHAZXDGSBIYJXDMSZEWVAXDYRVGUCYIIOWHIKNRAPRNF");
    msg.value = 101U;

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
    msg.setTimeStamp(0.0501701326245);
    msg.setSource(40082U);
    msg.setSourceEntity(87U);
    msg.setDestination(4959U);
    msg.setDestinationEntity(199U);
    msg.name.assign("SZCPUVWDKXVZYPULXYJHALBVXSUREGUEYPMCPJOLNMDQLVPMCMWSWTSGQIASKUEDZBWTBRBLMIWVLKOIWKGXYDINRMZBZQFFDGGMPELEJKQCKEABCDRSNODSANIYSVZIVHJKT");
    msg.value = 65U;

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
    msg.setTimeStamp(0.432937745335);
    msg.setSource(39128U);
    msg.setSourceEntity(81U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(134U);
    msg.name.assign("TXXWWCXQCCPIHAVNZLUISVFZ");

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
    msg.setTimeStamp(0.958402042274);
    msg.setSource(24773U);
    msg.setSourceEntity(186U);
    msg.setDestination(35418U);
    msg.setDestinationEntity(189U);
    msg.name.assign("DIWCPAFZZRQODQMUQIGZEPYAOPNRBRAHPYKNJBAWGTYTYVSUCKXMJKFDXXDWDVFDTMYLRBFFNXUHXJKJSDHIUTUGXTJIJYVBGIERZVOEBWTJCFJLKJWHGFPURCRNEINOAEMDMRMUQXCVOW");

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
    msg.setTimeStamp(0.154322791773);
    msg.setSource(33306U);
    msg.setSourceEntity(199U);
    msg.setDestination(39599U);
    msg.setDestinationEntity(194U);
    msg.name.assign("OZPXQVVGRJFLDMIGIBRPFCQBJVZROAWQDXDYMTKVZGMVIIWNJVEQKEWHDNFHTYVIVSDODPGEXDWMTTQRMPCSTOFAMLJJKVHGJUHMPWZJHLBCXGSJSUYUOUBWSLBSUECTKACDWLOGJEREKTBKUIAKNGZFXEBFRRSLFTQXPQAHURAOCADZMFNPLBQFNMNYGIESTLXHXUWYKXQYHWPASG");

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
    msg.setTimeStamp(0.706389995332);
    msg.setSource(25766U);
    msg.setSourceEntity(21U);
    msg.setDestination(55594U);
    msg.setDestinationEntity(139U);
    msg.name.assign("SVUELBOZTDOLHRNNDGZGKRPHIZLKMMMYGJLCOZDUSCAEFOGYAAKAMZIXHYQZZVMHPERWWBSGROSRANWQPRXDXMSMITGHKWUKUBOSUFDNICYGTIVRGJFZTFOSYFXQPECQOGDNSAZOEVJLQDIGHCJMVWKEJHHO");
    msg.value = 114U;

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
    msg.setTimeStamp(0.395450303784);
    msg.setSource(62963U);
    msg.setSourceEntity(130U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(98U);
    msg.name.assign("IZMUAKHTVAXDJNUCNGDGKTVLUYWAPPKZZGKQMPAXGSOYDLUQANOMYXZVCGSBDCXFCWSCRMEJUVHZTIEZFWAXPDXEJCVIZUQSRJENILWMVODKLRHFENQZBJPCBLHCWTLOGTBMGVGQSUVQXQWRMYTEWVIWSHUIXBEFF");
    msg.value = 6U;

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
    msg.setTimeStamp(0.0167363736633);
    msg.setSource(26448U);
    msg.setSourceEntity(114U);
    msg.setDestination(22567U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NFSUCWVSXCHMQEGPJQYQYYANGKDTWTAPIFRMBUBLNOQHIRZTPOYWNIOGNDIJLNBBVYLILFVVZZWQDJXSAYAKTWVJKMFXQXXTIRZJPUSIFCVZFKRQ");
    msg.value = 216U;

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
    msg.setTimeStamp(0.0998667996279);
    msg.setSource(44468U);
    msg.setSourceEntity(142U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(34U);
    msg.id = 27U;
    msg.period = 2903940838U;
    msg.duty_cycle = 1574134185U;

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
    msg.setTimeStamp(0.189393472017);
    msg.setSource(48023U);
    msg.setSourceEntity(70U);
    msg.setDestination(32626U);
    msg.setDestinationEntity(61U);
    msg.id = 114U;
    msg.period = 2072796524U;
    msg.duty_cycle = 2369899521U;

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
    msg.setTimeStamp(0.91132906372);
    msg.setSource(55878U);
    msg.setSourceEntity(207U);
    msg.setDestination(14262U);
    msg.setDestinationEntity(90U);
    msg.id = 99U;
    msg.period = 1923083078U;
    msg.duty_cycle = 2571277329U;

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
    msg.setTimeStamp(0.896828475543);
    msg.setSource(48819U);
    msg.setSourceEntity(222U);
    msg.setDestination(6785U);
    msg.setDestinationEntity(92U);
    msg.id = 209U;
    msg.period = 1282347928U;
    msg.duty_cycle = 4070919580U;

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
    msg.setTimeStamp(0.715194862123);
    msg.setSource(31640U);
    msg.setSourceEntity(212U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(251U);
    msg.id = 188U;
    msg.period = 520155091U;
    msg.duty_cycle = 1593319667U;

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
    msg.setTimeStamp(0.536574668549);
    msg.setSource(58174U);
    msg.setSourceEntity(181U);
    msg.setDestination(11287U);
    msg.setDestinationEntity(126U);
    msg.id = 157U;
    msg.period = 46300472U;
    msg.duty_cycle = 2565630040U;

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
    msg.setTimeStamp(0.28210409556);
    msg.setSource(35735U);
    msg.setSourceEntity(48U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.443557538304;
    msg.lon = 0.199256532699;
    msg.height = 0.563610296385;
    msg.x = 0.205470380156;
    msg.y = 0.647952365598;
    msg.z = 0.926594581393;
    msg.phi = 0.267763143133;
    msg.theta = 0.430685224569;
    msg.psi = 0.308296928247;
    msg.u = 0.811422703633;
    msg.v = 0.663242234587;
    msg.w = 0.969069604726;
    msg.vx = 0.0205683866339;
    msg.vy = 0.277733084832;
    msg.vz = 0.721753384168;
    msg.p = 0.0811141561241;
    msg.q = 0.565485513242;
    msg.r = 0.824964480288;
    msg.depth = 0.399630042602;
    msg.alt = 0.099339376267;

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
    msg.setTimeStamp(0.552887852624);
    msg.setSource(33092U);
    msg.setSourceEntity(12U);
    msg.setDestination(6294U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.954162203426;
    msg.lon = 0.329077170146;
    msg.height = 0.810491029778;
    msg.x = 0.270328762818;
    msg.y = 0.325655898974;
    msg.z = 0.607235973118;
    msg.phi = 0.780856863783;
    msg.theta = 0.958407601509;
    msg.psi = 0.814272315355;
    msg.u = 0.411813670277;
    msg.v = 0.137280206018;
    msg.w = 0.925912963853;
    msg.vx = 0.978081456534;
    msg.vy = 0.895499639611;
    msg.vz = 0.594011105224;
    msg.p = 0.320970148357;
    msg.q = 0.654810435692;
    msg.r = 0.0643262752258;
    msg.depth = 0.387026840315;
    msg.alt = 0.959321179817;

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
    msg.setTimeStamp(0.560876277135);
    msg.setSource(20603U);
    msg.setSourceEntity(59U);
    msg.setDestination(31789U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.704796786241;
    msg.lon = 0.496854171846;
    msg.height = 0.307863267554;
    msg.x = 0.481322996487;
    msg.y = 0.178218915409;
    msg.z = 0.729770298215;
    msg.phi = 0.551636556978;
    msg.theta = 0.929961680409;
    msg.psi = 0.188388522104;
    msg.u = 0.901148443879;
    msg.v = 0.717033204787;
    msg.w = 0.0954564619319;
    msg.vx = 0.878422035381;
    msg.vy = 0.793475925936;
    msg.vz = 0.104355869574;
    msg.p = 0.701781448786;
    msg.q = 0.287450151138;
    msg.r = 0.915503573517;
    msg.depth = 0.239006815748;
    msg.alt = 0.194161250809;

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
    msg.setTimeStamp(0.888416474669);
    msg.setSource(41061U);
    msg.setSourceEntity(211U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(1U);
    msg.x = 0.742915434831;
    msg.y = 0.441430997968;
    msg.z = 0.0187197783606;

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
    msg.setTimeStamp(0.205100380434);
    msg.setSource(7921U);
    msg.setSourceEntity(204U);
    msg.setDestination(24597U);
    msg.setDestinationEntity(214U);
    msg.x = 0.477712526786;
    msg.y = 0.0584786708035;
    msg.z = 0.208140737258;

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
    msg.setTimeStamp(0.546495178167);
    msg.setSource(31894U);
    msg.setSourceEntity(130U);
    msg.setDestination(3792U);
    msg.setDestinationEntity(237U);
    msg.x = 0.0931585769876;
    msg.y = 0.496001242026;
    msg.z = 0.471497295222;

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
    msg.setTimeStamp(0.0320380246509);
    msg.setSource(44719U);
    msg.setSourceEntity(54U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(87U);
    msg.value = 0.135463268546;

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
    msg.setTimeStamp(0.426972273501);
    msg.setSource(36434U);
    msg.setSourceEntity(55U);
    msg.setDestination(39184U);
    msg.setDestinationEntity(198U);
    msg.value = 0.466183230064;

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
    msg.setTimeStamp(0.939745079234);
    msg.setSource(3420U);
    msg.setSourceEntity(254U);
    msg.setDestination(62528U);
    msg.setDestinationEntity(202U);
    msg.value = 0.428938958057;

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
    msg.setTimeStamp(0.289709530746);
    msg.setSource(44742U);
    msg.setSourceEntity(146U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(163U);
    msg.value = 0.469356673381;

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
    msg.setTimeStamp(0.0794195392021);
    msg.setSource(2905U);
    msg.setSourceEntity(134U);
    msg.setDestination(1192U);
    msg.setDestinationEntity(186U);
    msg.value = 0.425864861035;

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
    msg.setTimeStamp(0.363794546022);
    msg.setSource(64284U);
    msg.setSourceEntity(153U);
    msg.setDestination(15211U);
    msg.setDestinationEntity(81U);
    msg.value = 0.737560913535;

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
    msg.setTimeStamp(0.420102824081);
    msg.setSource(56644U);
    msg.setSourceEntity(181U);
    msg.setDestination(63525U);
    msg.setDestinationEntity(245U);
    msg.x = 0.21538887656;
    msg.y = 0.40814748882;
    msg.z = 0.173438898081;
    msg.phi = 0.219958100142;
    msg.theta = 0.126686239858;
    msg.psi = 0.23433677951;
    msg.p = 0.78130185016;
    msg.q = 0.659422362502;
    msg.r = 0.88450972903;
    msg.u = 0.330430803066;
    msg.v = 0.0374382267842;
    msg.w = 0.218472818535;
    msg.bias_psi = 0.847263682911;
    msg.bias_r = 0.6662415008;

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
    msg.setTimeStamp(0.262352541354);
    msg.setSource(18073U);
    msg.setSourceEntity(233U);
    msg.setDestination(26206U);
    msg.setDestinationEntity(211U);
    msg.x = 0.314527703605;
    msg.y = 0.816900345704;
    msg.z = 0.839412567509;
    msg.phi = 0.86390595176;
    msg.theta = 0.105019872534;
    msg.psi = 0.290441108924;
    msg.p = 0.766801943396;
    msg.q = 0.0452983954189;
    msg.r = 0.167486504723;
    msg.u = 0.457117547391;
    msg.v = 0.39292886594;
    msg.w = 0.712914236937;
    msg.bias_psi = 0.619526360796;
    msg.bias_r = 0.182726388842;

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
    msg.setTimeStamp(0.70611870068);
    msg.setSource(9149U);
    msg.setSourceEntity(169U);
    msg.setDestination(682U);
    msg.setDestinationEntity(40U);
    msg.x = 0.373623045005;
    msg.y = 0.215273480848;
    msg.z = 0.995816694586;
    msg.phi = 0.515210348617;
    msg.theta = 0.282498424057;
    msg.psi = 0.437886186788;
    msg.p = 0.374998766482;
    msg.q = 0.176050139299;
    msg.r = 0.921195599534;
    msg.u = 0.8148719458;
    msg.v = 0.428562190281;
    msg.w = 0.308418324382;
    msg.bias_psi = 0.136097709676;
    msg.bias_r = 0.0211657939783;

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
    msg.setTimeStamp(0.469794040794);
    msg.setSource(4594U);
    msg.setSourceEntity(21U);
    msg.setDestination(674U);
    msg.setDestinationEntity(140U);
    msg.bias_psi = 0.00783953160301;
    msg.bias_r = 0.136922213109;
    msg.cog = 0.628073014138;
    msg.cyaw = 0.260915817216;
    msg.lbl_rej_level = 0.0386112508577;
    msg.gps_rej_level = 0.220433020481;
    msg.custom_x = 0.15872016296;
    msg.custom_y = 0.743447242005;
    msg.custom_z = 0.378863157658;

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
    msg.setTimeStamp(0.991862261351);
    msg.setSource(769U);
    msg.setSourceEntity(48U);
    msg.setDestination(26876U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.150632341973;
    msg.bias_r = 0.654210456697;
    msg.cog = 0.00642375541889;
    msg.cyaw = 0.72378119023;
    msg.lbl_rej_level = 0.65060456432;
    msg.gps_rej_level = 0.413449127575;
    msg.custom_x = 0.844988571826;
    msg.custom_y = 0.570332681564;
    msg.custom_z = 0.997919546052;

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
    msg.setTimeStamp(0.22991729111);
    msg.setSource(31354U);
    msg.setSourceEntity(213U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(228U);
    msg.bias_psi = 0.158855426294;
    msg.bias_r = 0.920275936803;
    msg.cog = 0.42505904419;
    msg.cyaw = 0.463857205485;
    msg.lbl_rej_level = 0.784256367974;
    msg.gps_rej_level = 0.173571821874;
    msg.custom_x = 0.92108653248;
    msg.custom_y = 0.186099405971;
    msg.custom_z = 0.662230800477;

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
    msg.setTimeStamp(0.693071198081);
    msg.setSource(44056U);
    msg.setSourceEntity(67U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(193U);
    msg.utc_time = 0.848600245616;
    msg.reason = 4U;

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
    msg.setTimeStamp(0.187419370482);
    msg.setSource(46839U);
    msg.setSourceEntity(186U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(63U);
    msg.utc_time = 0.0261839747544;
    msg.reason = 254U;

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
    msg.setTimeStamp(0.966181189021);
    msg.setSource(17868U);
    msg.setSourceEntity(121U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.754782191087;
    msg.reason = 193U;

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
    msg.setTimeStamp(0.557692451386);
    msg.setSource(883U);
    msg.setSourceEntity(104U);
    msg.setDestination(14209U);
    msg.setDestinationEntity(23U);
    msg.id = 120U;
    msg.range = 0.522318268324;
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
    msg.setTimeStamp(0.227636277889);
    msg.setSource(22987U);
    msg.setSourceEntity(162U);
    msg.setDestination(27948U);
    msg.setDestinationEntity(95U);
    msg.id = 250U;
    msg.range = 0.749859249145;
    msg.acceptance = 62U;

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
    msg.setTimeStamp(0.00876150666883);
    msg.setSource(29053U);
    msg.setSourceEntity(99U);
    msg.setDestination(46883U);
    msg.setDestinationEntity(224U);
    msg.id = 110U;
    msg.range = 0.66389995747;
    msg.acceptance = 6U;

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
    msg.setTimeStamp(0.669773573659);
    msg.setSource(6912U);
    msg.setSourceEntity(162U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(128U);
    msg.type = 150U;
    msg.reason = 220U;
    msg.value = 0.450459006674;
    msg.timestep = 0.393400284698;

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
    msg.setTimeStamp(0.412295497767);
    msg.setSource(9778U);
    msg.setSourceEntity(247U);
    msg.setDestination(58558U);
    msg.setDestinationEntity(1U);
    msg.type = 249U;
    msg.reason = 114U;
    msg.value = 0.110413424321;
    msg.timestep = 0.147539845528;

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
    msg.setTimeStamp(0.85615362778);
    msg.setSource(65341U);
    msg.setSourceEntity(203U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(33U);
    msg.type = 219U;
    msg.reason = 40U;
    msg.value = 0.576687111295;
    msg.timestep = 0.661267833677;

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
    msg.setTimeStamp(0.802059031277);
    msg.setSource(50415U);
    msg.setSourceEntity(247U);
    msg.setDestination(4461U);
    msg.setDestinationEntity(145U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QNIGSURMFPBZPUYFANNSHNODBEDIVOZQXTWUHPZHQIEJKKEAD");
    tmp_msg_0.lat = 0.13470839415;
    tmp_msg_0.lon = 0.334119708019;
    tmp_msg_0.depth = 0.537239861879;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 196U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.986140721127;
    msg.y = 0.658670121589;
    msg.var_x = 0.148927190267;
    msg.var_y = 0.272444679008;
    msg.distance = 0.654208421399;

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
    msg.setTimeStamp(0.797789969118);
    msg.setSource(36837U);
    msg.setSourceEntity(55U);
    msg.setDestination(40406U);
    msg.setDestinationEntity(224U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UDMZBWIFDRJYSQWDDWRUFJHCZXOKIUYIBDFWSITNBMTYFZRMMPGMVTELAOPEXNXCZPQJXIWWEZVUUIHLPQRVHEQOLKZKHVVKMFZUJHQWYKMFAZLLLQGJOJCRBPTNAYNHGYVSOEDFATHBNKEINOAGDTNOVSAKUCRXVIUVFIARQJFEBTANXSYOEYBLQRSUPCLWAOCGTXXJJUGDKVCRKNGSOGWSSGXAPNPEQYMTZEWCMDXQHZBJLHFG");
    tmp_msg_0.lat = 0.287637542603;
    tmp_msg_0.lon = 0.0011666898934;
    tmp_msg_0.depth = 0.674649287329;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 40U;
    tmp_msg_0.transponder_delay = 2U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.116378723033;
    msg.y = 0.144028139878;
    msg.var_x = 0.969474490085;
    msg.var_y = 0.595243554738;
    msg.distance = 0.142015272877;

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
    msg.setTimeStamp(0.846806543436);
    msg.setSource(38899U);
    msg.setSourceEntity(20U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(39U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PEYWFSMSPSQZFVLFLITYBGADVBSMFIYYHCABNNYXHJDUAYPMENDMKSUOUNTXOOQGJOKEQJAYFVZDNALTHGYVWUVSFXREKGBWKHSBRLDYIBTNVGNKQUFXPTRUGHCILULCURFRDWJOBERMTJOXZJLENTJQSMXKGTAXZEIVRZPAOPMBWZXNIMNQJDDBTZHIOPGDXC");
    tmp_msg_0.lat = 0.794352979249;
    tmp_msg_0.lon = 0.171723695532;
    tmp_msg_0.depth = 0.891266663703;
    tmp_msg_0.query_channel = 22U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 36U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.870887409491;
    msg.y = 0.381774551581;
    msg.var_x = 0.72400573447;
    msg.var_y = 0.50842677001;
    msg.distance = 0.689267724661;

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
    msg.setTimeStamp(0.492056266864);
    msg.setSource(40580U);
    msg.setSourceEntity(131U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(86U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.778177082496);
    msg.setSource(6147U);
    msg.setSourceEntity(172U);
    msg.setDestination(58257U);
    msg.setDestinationEntity(231U);
    msg.state = 11U;

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
    msg.setTimeStamp(0.775778110206);
    msg.setSource(44028U);
    msg.setSourceEntity(100U);
    msg.setDestination(42141U);
    msg.setDestinationEntity(156U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.0112801036474);
    msg.setSource(28709U);
    msg.setSourceEntity(82U);
    msg.setDestination(24619U);
    msg.setDestinationEntity(14U);
    msg.x = 0.482645862044;
    msg.y = 0.565830935434;
    msg.z = 0.674285849863;

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
    msg.setTimeStamp(0.698916246976);
    msg.setSource(35382U);
    msg.setSourceEntity(21U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(40U);
    msg.x = 0.601448286036;
    msg.y = 0.789254227856;
    msg.z = 0.509441917464;

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
    msg.setTimeStamp(0.364080560754);
    msg.setSource(18192U);
    msg.setSourceEntity(192U);
    msg.setDestination(14084U);
    msg.setDestinationEntity(19U);
    msg.x = 0.19800991518;
    msg.y = 0.612071073312;
    msg.z = 0.147784147035;

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
    msg.setTimeStamp(0.0704399410506);
    msg.setSource(28051U);
    msg.setSourceEntity(92U);
    msg.setDestination(53035U);
    msg.setDestinationEntity(125U);
    msg.va = 0.894582290036;
    msg.aoa = 0.765739496525;
    msg.ssa = 0.0317428345426;

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
    msg.setTimeStamp(0.37912700215);
    msg.setSource(44034U);
    msg.setSourceEntity(5U);
    msg.setDestination(31583U);
    msg.setDestinationEntity(162U);
    msg.va = 0.768801895834;
    msg.aoa = 0.178289857484;
    msg.ssa = 0.569666372429;

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
    msg.setTimeStamp(0.247667952408);
    msg.setSource(26419U);
    msg.setSourceEntity(74U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(152U);
    msg.va = 0.563309858036;
    msg.aoa = 0.474825411745;
    msg.ssa = 0.162593621317;

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
    msg.setTimeStamp(0.732460498128);
    msg.setSource(2491U);
    msg.setSourceEntity(101U);
    msg.setDestination(32927U);
    msg.setDestinationEntity(160U);
    msg.value = 0.899906739703;

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
    msg.setTimeStamp(0.882630248779);
    msg.setSource(49165U);
    msg.setSourceEntity(150U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(142U);
    msg.value = 0.696492373861;

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
    msg.setTimeStamp(0.918596440395);
    msg.setSource(8843U);
    msg.setSourceEntity(243U);
    msg.setDestination(56451U);
    msg.setDestinationEntity(95U);
    msg.value = 0.839129565266;

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
    msg.setTimeStamp(0.952731558243);
    msg.setSource(12341U);
    msg.setSourceEntity(137U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(107U);
    msg.value = 0.141521960181;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.510705990494);
    msg.setSource(40127U);
    msg.setSourceEntity(175U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(19U);
    msg.value = 0.816647546849;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.948447373827);
    msg.setSource(10485U);
    msg.setSourceEntity(7U);
    msg.setDestination(49870U);
    msg.setDestinationEntity(0U);
    msg.value = 0.640257598202;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.106865122705);
    msg.setSource(19315U);
    msg.setSourceEntity(133U);
    msg.setDestination(25272U);
    msg.setDestinationEntity(83U);
    msg.value = 0.743226420044;
    msg.speed_units = 69U;

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
    msg.setTimeStamp(0.845051345178);
    msg.setSource(38466U);
    msg.setSourceEntity(51U);
    msg.setDestination(41524U);
    msg.setDestinationEntity(107U);
    msg.value = 0.47610981508;
    msg.speed_units = 162U;

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
    msg.setTimeStamp(0.87923711595);
    msg.setSource(32713U);
    msg.setSourceEntity(198U);
    msg.setDestination(43195U);
    msg.setDestinationEntity(186U);
    msg.value = 0.383969903147;
    msg.speed_units = 155U;

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
    msg.setTimeStamp(0.00903082032411);
    msg.setSource(7210U);
    msg.setSourceEntity(56U);
    msg.setDestination(57724U);
    msg.setDestinationEntity(218U);
    msg.value = 0.535170066801;

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
    msg.setTimeStamp(0.135705482681);
    msg.setSource(28473U);
    msg.setSourceEntity(7U);
    msg.setDestination(13903U);
    msg.setDestinationEntity(10U);
    msg.value = 0.769177744202;

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
    msg.setTimeStamp(0.250468004551);
    msg.setSource(6717U);
    msg.setSourceEntity(122U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(194U);
    msg.value = 0.354143400143;

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
    msg.setTimeStamp(0.350570000488);
    msg.setSource(32551U);
    msg.setSourceEntity(52U);
    msg.setDestination(62662U);
    msg.setDestinationEntity(234U);
    msg.value = 0.832072088681;

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
    msg.setTimeStamp(0.205389436804);
    msg.setSource(52940U);
    msg.setSourceEntity(44U);
    msg.setDestination(7051U);
    msg.setDestinationEntity(33U);
    msg.value = 0.728374294004;

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
    msg.setTimeStamp(0.728051495963);
    msg.setSource(41854U);
    msg.setSourceEntity(134U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(138U);
    msg.value = 0.00558805491539;

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
    msg.setTimeStamp(0.394599503191);
    msg.setSource(37673U);
    msg.setSourceEntity(218U);
    msg.setDestination(24416U);
    msg.setDestinationEntity(162U);
    msg.value = 0.232574531746;

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
    msg.setTimeStamp(0.250472040854);
    msg.setSource(35222U);
    msg.setSourceEntity(168U);
    msg.setDestination(60704U);
    msg.setDestinationEntity(52U);
    msg.value = 0.163980386237;

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
    msg.setTimeStamp(0.6719879675);
    msg.setSource(61368U);
    msg.setSourceEntity(236U);
    msg.setDestination(62646U);
    msg.setDestinationEntity(241U);
    msg.value = 0.867940099405;

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
    msg.setTimeStamp(0.890185616883);
    msg.setSource(21425U);
    msg.setSourceEntity(66U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(251U);
    msg.path_ref = 3310306354U;
    msg.start_lat = 0.539608495083;
    msg.start_lon = 0.382646978238;
    msg.start_z = 0.255282168372;
    msg.start_z_units = 38U;
    msg.end_lat = 0.492543896327;
    msg.end_lon = 0.84376682068;
    msg.end_z = 0.225297906569;
    msg.end_z_units = 182U;
    msg.speed = 0.487905844372;
    msg.speed_units = 142U;
    msg.lradius = 0.621935829375;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.529942919825);
    msg.setSource(17481U);
    msg.setSourceEntity(82U);
    msg.setDestination(19679U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 3822569710U;
    msg.start_lat = 0.201934818138;
    msg.start_lon = 0.209190578984;
    msg.start_z = 0.425552669637;
    msg.start_z_units = 137U;
    msg.end_lat = 0.702165511204;
    msg.end_lon = 0.319099974178;
    msg.end_z = 0.844761514879;
    msg.end_z_units = 2U;
    msg.speed = 0.838490127251;
    msg.speed_units = 159U;
    msg.lradius = 0.422150029707;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.592239147772);
    msg.setSource(3806U);
    msg.setSourceEntity(131U);
    msg.setDestination(59391U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 1694518597U;
    msg.start_lat = 0.964384938973;
    msg.start_lon = 0.0202208490565;
    msg.start_z = 0.902027905094;
    msg.start_z_units = 91U;
    msg.end_lat = 0.401853282066;
    msg.end_lon = 0.800603823335;
    msg.end_z = 0.266654576912;
    msg.end_z_units = 38U;
    msg.speed = 0.22768047854;
    msg.speed_units = 55U;
    msg.lradius = 0.171395630534;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.512702896711);
    msg.setSource(53340U);
    msg.setSourceEntity(64U);
    msg.setDestination(26489U);
    msg.setDestinationEntity(230U);
    msg.x = 0.751224248098;
    msg.y = 0.317074762426;
    msg.z = 0.690125146068;
    msg.k = 0.777959277495;
    msg.m = 0.631282476601;
    msg.n = 0.655285700152;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.263180647285);
    msg.setSource(4381U);
    msg.setSourceEntity(140U);
    msg.setDestination(2870U);
    msg.setDestinationEntity(83U);
    msg.x = 0.713611278535;
    msg.y = 0.839518702881;
    msg.z = 0.129435503042;
    msg.k = 0.879896665616;
    msg.m = 0.505923262309;
    msg.n = 0.289778516098;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.322910038976);
    msg.setSource(48650U);
    msg.setSourceEntity(77U);
    msg.setDestination(26543U);
    msg.setDestinationEntity(123U);
    msg.x = 0.811080570461;
    msg.y = 0.491488813552;
    msg.z = 0.752170299076;
    msg.k = 0.981576266315;
    msg.m = 0.395250137417;
    msg.n = 0.601064329743;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.602053759089);
    msg.setSource(10409U);
    msg.setSourceEntity(58U);
    msg.setDestination(15328U);
    msg.setDestinationEntity(72U);
    msg.value = 0.383898038236;

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
    msg.setTimeStamp(0.377421453548);
    msg.setSource(41009U);
    msg.setSourceEntity(73U);
    msg.setDestination(19889U);
    msg.setDestinationEntity(235U);
    msg.value = 0.970300020019;

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
    msg.setTimeStamp(0.949741690095);
    msg.setSource(36036U);
    msg.setSourceEntity(252U);
    msg.setDestination(5890U);
    msg.setDestinationEntity(152U);
    msg.value = 0.516837689574;

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
    msg.setTimeStamp(0.643929712643);
    msg.setSource(34134U);
    msg.setSourceEntity(147U);
    msg.setDestination(36607U);
    msg.setDestinationEntity(233U);
    msg.u = 0.69953593165;
    msg.v = 0.590322666778;
    msg.w = 0.741308144175;
    msg.p = 0.750767642447;
    msg.q = 0.949225177887;
    msg.r = 0.0358724930651;
    msg.flags = 98U;

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
    msg.setTimeStamp(0.792324457388);
    msg.setSource(1837U);
    msg.setSourceEntity(236U);
    msg.setDestination(22515U);
    msg.setDestinationEntity(48U);
    msg.u = 0.454420139248;
    msg.v = 0.961332128656;
    msg.w = 0.673054945772;
    msg.p = 0.305613467104;
    msg.q = 0.47282514836;
    msg.r = 0.701880358391;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.631572767046);
    msg.setSource(8421U);
    msg.setSourceEntity(37U);
    msg.setDestination(8595U);
    msg.setDestinationEntity(175U);
    msg.u = 0.47312837656;
    msg.v = 0.145168246005;
    msg.w = 0.277631213321;
    msg.p = 0.754768030117;
    msg.q = 0.623077501224;
    msg.r = 0.521120391142;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.456039233785);
    msg.setSource(64302U);
    msg.setSourceEntity(85U);
    msg.setDestination(20360U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 1674345989U;
    msg.start_lat = 0.832206815216;
    msg.start_lon = 0.590105300146;
    msg.start_z = 0.469440643641;
    msg.start_z_units = 203U;
    msg.end_lat = 0.414227450576;
    msg.end_lon = 0.706669754843;
    msg.end_z = 0.311883447367;
    msg.end_z_units = 124U;
    msg.lradius = 0.0383483067885;
    msg.flags = 181U;
    msg.x = 0.872741267824;
    msg.y = 0.97029422269;
    msg.z = 0.839420983567;
    msg.vx = 0.223469569659;
    msg.vy = 0.606187103698;
    msg.vz = 0.45303194827;
    msg.course_error = 0.460422057189;
    msg.eta = 2103U;

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
    msg.setTimeStamp(0.352072779161);
    msg.setSource(22399U);
    msg.setSourceEntity(169U);
    msg.setDestination(37028U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 3025990923U;
    msg.start_lat = 0.112189079622;
    msg.start_lon = 0.776079411372;
    msg.start_z = 0.131275012495;
    msg.start_z_units = 153U;
    msg.end_lat = 0.77975180709;
    msg.end_lon = 0.210719370606;
    msg.end_z = 0.906897453862;
    msg.end_z_units = 233U;
    msg.lradius = 0.134285196694;
    msg.flags = 145U;
    msg.x = 0.200873842003;
    msg.y = 0.447003061955;
    msg.z = 0.208935481571;
    msg.vx = 0.830984243559;
    msg.vy = 0.0865562124963;
    msg.vz = 0.607888649342;
    msg.course_error = 0.179248551268;
    msg.eta = 27260U;

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
    msg.setTimeStamp(0.0357171893695);
    msg.setSource(29324U);
    msg.setSourceEntity(172U);
    msg.setDestination(58926U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 1062656473U;
    msg.start_lat = 0.267991563617;
    msg.start_lon = 0.251929009026;
    msg.start_z = 0.388867579672;
    msg.start_z_units = 38U;
    msg.end_lat = 0.614736500499;
    msg.end_lon = 0.638673540467;
    msg.end_z = 0.266399115893;
    msg.end_z_units = 70U;
    msg.lradius = 0.546816181908;
    msg.flags = 217U;
    msg.x = 0.00650719384252;
    msg.y = 0.643242862718;
    msg.z = 0.407624578777;
    msg.vx = 0.562162132217;
    msg.vy = 0.751094343561;
    msg.vz = 0.0980939974615;
    msg.course_error = 0.0128972608382;
    msg.eta = 61163U;

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
    msg.setTimeStamp(0.898471232929);
    msg.setSource(18826U);
    msg.setSourceEntity(74U);
    msg.setDestination(17755U);
    msg.setDestinationEntity(238U);
    msg.k = 0.34483140375;
    msg.m = 0.874265557246;
    msg.n = 0.80169222275;

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
    msg.setTimeStamp(0.210692603159);
    msg.setSource(22596U);
    msg.setSourceEntity(214U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(65U);
    msg.k = 0.60532979186;
    msg.m = 0.307894395811;
    msg.n = 0.212617162914;

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
    msg.setTimeStamp(0.402440282262);
    msg.setSource(17045U);
    msg.setSourceEntity(79U);
    msg.setDestination(9313U);
    msg.setDestinationEntity(210U);
    msg.k = 0.0334517851147;
    msg.m = 0.494335446459;
    msg.n = 0.220880771723;

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
    msg.setTimeStamp(0.790036034184);
    msg.setSource(34836U);
    msg.setSourceEntity(229U);
    msg.setDestination(18005U);
    msg.setDestinationEntity(214U);
    msg.p = 0.505353370156;
    msg.i = 0.0124918462046;
    msg.d = 0.635498499678;
    msg.a = 0.7222431826;

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
    msg.setTimeStamp(0.387483937144);
    msg.setSource(45371U);
    msg.setSourceEntity(240U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(151U);
    msg.p = 0.588504793135;
    msg.i = 0.811897221182;
    msg.d = 0.479760343065;
    msg.a = 0.58608371683;

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
    msg.setTimeStamp(0.423953205131);
    msg.setSource(41903U);
    msg.setSourceEntity(74U);
    msg.setDestination(53411U);
    msg.setDestinationEntity(225U);
    msg.p = 0.214138490427;
    msg.i = 0.103056033807;
    msg.d = 0.493653900014;
    msg.a = 0.740161399378;

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
    msg.setTimeStamp(0.268100153466);
    msg.setSource(12090U);
    msg.setSourceEntity(169U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(92U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.292064995208);
    msg.setSource(17615U);
    msg.setSourceEntity(92U);
    msg.setDestination(39584U);
    msg.setDestinationEntity(28U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.320215713031);
    msg.setSource(5669U);
    msg.setSourceEntity(106U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(129U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.0111724122583);
    msg.setSource(60738U);
    msg.setSourceEntity(16U);
    msg.setDestination(44122U);
    msg.setDestinationEntity(92U);
    msg.x = 0.547183158174;
    msg.y = 0.801638321342;
    msg.z = 0.811165296495;
    msg.vx = 0.898663469037;
    msg.vy = 0.00885443308362;
    msg.vz = 0.844903155216;
    msg.ax = 0.909215970038;
    msg.ay = 0.743801643694;
    msg.az = 0.0998775555083;
    msg.flags = 22383U;

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
    msg.setTimeStamp(0.840112184914);
    msg.setSource(65455U);
    msg.setSourceEntity(41U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(166U);
    msg.x = 0.729951390856;
    msg.y = 0.706516274189;
    msg.z = 0.0391237405635;
    msg.vx = 0.511729623026;
    msg.vy = 0.951383597488;
    msg.vz = 0.53834250518;
    msg.ax = 0.490720906892;
    msg.ay = 0.195565851566;
    msg.az = 0.321370016747;
    msg.flags = 61027U;

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
    msg.setTimeStamp(0.201428549984);
    msg.setSource(55754U);
    msg.setSourceEntity(183U);
    msg.setDestination(13769U);
    msg.setDestinationEntity(103U);
    msg.x = 0.996914146591;
    msg.y = 0.02886442064;
    msg.z = 0.600593665781;
    msg.vx = 0.318935383363;
    msg.vy = 0.318076099062;
    msg.vz = 0.358308962438;
    msg.ax = 0.922560422388;
    msg.ay = 0.739868698599;
    msg.az = 0.490168763069;
    msg.flags = 1426U;

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
    msg.setTimeStamp(0.728228682252);
    msg.setSource(49104U);
    msg.setSourceEntity(183U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(207U);
    msg.value = 0.717075427213;

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
    msg.setTimeStamp(0.322397614179);
    msg.setSource(61245U);
    msg.setSourceEntity(227U);
    msg.setDestination(15798U);
    msg.setDestinationEntity(214U);
    msg.value = 0.548283449777;

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
    msg.setTimeStamp(0.918198382302);
    msg.setSource(10795U);
    msg.setSourceEntity(207U);
    msg.setDestination(3646U);
    msg.setDestinationEntity(238U);
    msg.value = 0.902484536856;

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
    msg.setTimeStamp(0.94933712079);
    msg.setSource(16452U);
    msg.setSourceEntity(146U);
    msg.setDestination(38886U);
    msg.setDestinationEntity(97U);
    msg.timeout = 19178U;
    msg.lat = 0.504642401725;
    msg.lon = 0.490123424999;
    msg.z = 0.160095523396;
    msg.z_units = 158U;
    msg.speed = 0.774083386138;
    msg.speed_units = 216U;
    msg.roll = 0.0993588815253;
    msg.pitch = 0.760236240017;
    msg.yaw = 0.869726607098;
    msg.custom.assign("MAVTPWURNAPETRQBJWUZWPDHNYKAWXBGDCKJPVEETVESZSEOOQXBATJSSIFALLZOKHMTOHGPLRROMGKSNMAMUEFMINWWTMXCCYXSAKNTBNBFEDTLBXCKNDDHPCQVHQBTDQRAJEZCVONU");

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
    msg.setTimeStamp(0.636543857611);
    msg.setSource(41518U);
    msg.setSourceEntity(251U);
    msg.setDestination(59196U);
    msg.setDestinationEntity(183U);
    msg.timeout = 49314U;
    msg.lat = 0.885199592453;
    msg.lon = 0.823755121895;
    msg.z = 0.102207323475;
    msg.z_units = 52U;
    msg.speed = 0.522416856446;
    msg.speed_units = 21U;
    msg.roll = 0.434121836129;
    msg.pitch = 0.0012005251424;
    msg.yaw = 0.489838489984;
    msg.custom.assign("MVPETSGRTYDQSAYDWMXZBHAUEQZCHVLFJLKUFBYRTJMOJWJAGHINQJFOZCVWOYCUNDUFZPFBBEGCLNMUDSYFRNRYXAQJYHHIFOG");

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
    msg.setTimeStamp(0.799417545354);
    msg.setSource(44468U);
    msg.setSourceEntity(28U);
    msg.setDestination(14621U);
    msg.setDestinationEntity(165U);
    msg.timeout = 10036U;
    msg.lat = 0.75240947819;
    msg.lon = 0.713088113262;
    msg.z = 0.457119413946;
    msg.z_units = 166U;
    msg.speed = 0.735728861427;
    msg.speed_units = 97U;
    msg.roll = 0.28504133302;
    msg.pitch = 0.872399728261;
    msg.yaw = 0.781919604515;
    msg.custom.assign("GSBSTLHVOCFGNYNSJFFOJIEODLTEZOGALXEJEUSWZSNYTTVIQHABNMWFJJFQBSOGIDMNZPGHQUHINRQKUPTBLVPMKZAKSRYOXJNOHEXMWUMCOQBCIZTSHXMHRDOWIXRA");

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
    msg.setTimeStamp(0.660746336312);
    msg.setSource(16851U);
    msg.setSourceEntity(164U);
    msg.setDestination(49685U);
    msg.setDestinationEntity(1U);
    msg.timeout = 53527U;
    msg.lat = 0.563542731285;
    msg.lon = 0.0707994642191;
    msg.z = 0.610309652358;
    msg.z_units = 151U;
    msg.speed = 0.494396604919;
    msg.speed_units = 220U;
    msg.duration = 35040U;
    msg.radius = 0.507675235177;
    msg.flags = 84U;
    msg.custom.assign("MAQVAMNMLVVDBHBKDWECTRCLYYIWMWNWKABFLNJYNDIOURKSSJKZCCPXQWOWSBXLUQSTPZOQGJSTACPZBWORIERFZM");

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
    msg.setTimeStamp(0.912282177959);
    msg.setSource(30669U);
    msg.setSourceEntity(100U);
    msg.setDestination(60118U);
    msg.setDestinationEntity(35U);
    msg.timeout = 16121U;
    msg.lat = 0.547621698982;
    msg.lon = 0.116726207678;
    msg.z = 0.123090569544;
    msg.z_units = 109U;
    msg.speed = 0.831775451441;
    msg.speed_units = 188U;
    msg.duration = 16818U;
    msg.radius = 0.456336817435;
    msg.flags = 246U;
    msg.custom.assign("NBZDGOLFZXMQONOZPCAXZXTXNFLWYEXEFKZHUXSLLLAAMZBEHCXPQCFURCSNDQJTCBXWJKIUHVQRDUAUKCEBFHIVHHKYDWLEWOJJVWMAICERVRLPJLRYHKQJJIFYSSQVIALQTPOYVFSIIIB");

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
    msg.setTimeStamp(0.494926863376);
    msg.setSource(45017U);
    msg.setSourceEntity(189U);
    msg.setDestination(53599U);
    msg.setDestinationEntity(137U);
    msg.timeout = 54771U;
    msg.lat = 0.656458137009;
    msg.lon = 0.575131484553;
    msg.z = 0.640445896068;
    msg.z_units = 26U;
    msg.speed = 0.890667367254;
    msg.speed_units = 144U;
    msg.duration = 30126U;
    msg.radius = 0.755476390425;
    msg.flags = 33U;
    msg.custom.assign("SCSEUTDIDTEKBIMOLMNLYPBVZNWIXWITKNWXONARJDVVBMQZEELUCBJPZNKBLEQCRSKMOLHNQXZADEXMYDFRUIZJFRQOCMRDYZOFVRMNHOYASWJADVDNPKPXCOLUPQJYJZYQTFHQBAHSPOEGLYGAIXWFRH");

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
    msg.setTimeStamp(0.838007279689);
    msg.setSource(40060U);
    msg.setSourceEntity(156U);
    msg.setDestination(36909U);
    msg.setDestinationEntity(127U);
    msg.custom.assign("VZQNHNPJEUKHCWLFAPDMRXMGCCTLVOACLRMDPMGOLNSKTPYQNAWFQAZFQHDBBHCYIUOLUGHJTFJGMNYESVWBTSQNODSAIDJMXJVKDWRCW");

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
    msg.setTimeStamp(0.393779565277);
    msg.setSource(13388U);
    msg.setSourceEntity(125U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("SBGGHDSHDZAAMEHBXZEEJSGIQONXQYTORNZDMRCYFXVDMPUUFEHNFOSEISMYGAYLALLQWJNSHJSC");

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
    msg.setTimeStamp(0.464077026361);
    msg.setSource(6164U);
    msg.setSourceEntity(13U);
    msg.setDestination(31318U);
    msg.setDestinationEntity(234U);
    msg.custom.assign("GSXNBLBYKPHGTWRJNSMXXQLZIFXEQEHWWPYWZLAFAJGDMDYCMJWEROTFIYEOOZFFSAENZDDYRBKIETMLIMOFXAQBQSQCUTRTQWOUCBACKPHVYVCMWQBEURZKETBULCCFVZKPVPZHHABMPTDVWYRJLTHAKUCIJLLXBKGHPSNCIE");

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
    msg.setTimeStamp(0.245057034532);
    msg.setSource(12422U);
    msg.setSourceEntity(75U);
    msg.setDestination(20633U);
    msg.setDestinationEntity(94U);
    msg.timeout = 61501U;
    msg.lat = 0.23137382446;
    msg.lon = 0.467785393331;
    msg.z = 0.230593770554;
    msg.z_units = 60U;
    msg.duration = 35278U;
    msg.speed = 0.345589914411;
    msg.speed_units = 183U;
    msg.type = 19U;
    msg.radius = 0.480654125697;
    msg.length = 0.852313798401;
    msg.bearing = 0.28411701048;
    msg.direction = 86U;
    msg.custom.assign("IUUFKPLVMLRBJDRPMQUJOXWHUXWXWSETBGDNGLTHZUIOGSAGETLRRQIZDYQYDZUIRWBAAKKUHMLBQNRQHFTVALXBSYOCMEOJEDPMSHQAUJCUJCNRYJMLGEFCKJDEYBLHNOBICRPAQJFZMVIY");

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
    msg.setTimeStamp(0.362028398775);
    msg.setSource(49957U);
    msg.setSourceEntity(121U);
    msg.setDestination(8509U);
    msg.setDestinationEntity(95U);
    msg.timeout = 22020U;
    msg.lat = 0.597087858248;
    msg.lon = 0.456107588944;
    msg.z = 0.403775768887;
    msg.z_units = 229U;
    msg.duration = 39042U;
    msg.speed = 0.93514142817;
    msg.speed_units = 18U;
    msg.type = 122U;
    msg.radius = 0.920619247119;
    msg.length = 0.299110096147;
    msg.bearing = 0.340291989871;
    msg.direction = 166U;
    msg.custom.assign("BIQOVIPTDYGFCLGJRTQKKWFDQUHTTUANXGMQRDIPMSHJQLWPXYXIENZHJSDFBLZNHFQAYWVJLYCMUJFWBHSPZJZOFYRTVCGFKGMORMLCISFMSRIZOYKMVUUPCSVAQFGEHSNZVDVTCANU");

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
    msg.setTimeStamp(0.925453236148);
    msg.setSource(5969U);
    msg.setSourceEntity(108U);
    msg.setDestination(4676U);
    msg.setDestinationEntity(96U);
    msg.timeout = 36520U;
    msg.lat = 0.585405915347;
    msg.lon = 0.489224186049;
    msg.z = 0.209282430672;
    msg.z_units = 207U;
    msg.duration = 53526U;
    msg.speed = 0.11081709679;
    msg.speed_units = 43U;
    msg.type = 198U;
    msg.radius = 0.652975333176;
    msg.length = 0.776774039969;
    msg.bearing = 0.128315603629;
    msg.direction = 144U;
    msg.custom.assign("QJFSABRUHLFGKJINDJUITKXDNTIWSEAQUMANNBJJAAWIZWNPHYKUQHUXZPOTCRXMJOOTZUIPYXZXHNGVSOYKVLCYKE");

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
    msg.setTimeStamp(0.417904767664);
    msg.setSource(46727U);
    msg.setSourceEntity(93U);
    msg.setDestination(20683U);
    msg.setDestinationEntity(12U);
    msg.duration = 23018U;
    msg.custom.assign("RFEZHYZLGOBDSZMCAVXWSJGYLYWZLIRNXUTOPHJAWFRHEQPUTYRKQXSZWSDQQNTLXYMNNJNJZXZHAROJOQFAZRKCSKHKXSAGOIGDTKNBCPKIEFZVGNTWDGVUFPLEUKAFAMDPVIECCWEFDVYPMVLNIHPWOJEXMMTNSSIYWVBNRJZTCBJSIRABIQDXKQFWRPDUALQGGTCEBHKDMVHCJHXOYYSAQBMPMVPBBLFVQ");

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
    msg.setTimeStamp(0.653927878035);
    msg.setSource(61269U);
    msg.setSourceEntity(39U);
    msg.setDestination(29188U);
    msg.setDestinationEntity(198U);
    msg.duration = 4562U;
    msg.custom.assign("QITYHPFPYCZNCEIMXPKDDAFLOHFCWSRWBBQECRTZTOBSMRSVHERLKZHQBZAXKBGJUWRFPNZUYTRETFDNUCOTXXMRPOTHEPVCQKEXRXVSAUVUNJVISYGWHLFPGJUGKWQRIMUJPKNIXYSDENOWEIYHDGJNSWUAXQDMUJSBYSADFVLTMUFEZMHOCQGIOIZYAIMEYK");

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
    msg.setTimeStamp(0.54904861601);
    msg.setSource(15910U);
    msg.setSourceEntity(105U);
    msg.setDestination(65328U);
    msg.setDestinationEntity(164U);
    msg.duration = 32258U;
    msg.custom.assign("ZFVQTBBKNYOUKSMMTMCYZVGLJTCTZGPYWDLAVNHKZPRJYYCCGKGOKTRGDHMJIWXAABATFAMIPSUDOEPKHCQHOCHSNELZHIBDQBRVGIIGSEIDDAUSGDCQFEPXNRYWSSFLHBWQESJLHKANFIUKQWEPVEZVVUNLQTNYRLTEBWPGJYIMZIBXWXWEZRRUNQUAKTBSOXOELRVGADYFNFMLCAZUTPROWNXVOVXPLSWIXQDJOJ");

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
    msg.setTimeStamp(0.383556572045);
    msg.setSource(5056U);
    msg.setSourceEntity(71U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(196U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0230920403394;
    msg.control.set(tmp_msg_0);
    msg.duration = 21554U;
    msg.custom.assign("FEIVCJDDAVKXAZPMSIJQQPDHABOFPULEXCVJCWRZBIQQTGNRYFRGEHUFNCRWMOYEZIWCDRUGZKHYYWVMNIMWHKAIGINBFWUNUBSWAAGDQQNLTJYKUMRQSXIZECXVRJNLLQCJYRYKAQJNUJGOVDSVMTTTBPSSKPHBNPAOZXTMVXO");

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
    msg.setTimeStamp(0.788356031424);
    msg.setSource(1755U);
    msg.setSourceEntity(79U);
    msg.setDestination(43890U);
    msg.setDestinationEntity(192U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.286109455013;
    msg.control.set(tmp_msg_0);
    msg.duration = 55886U;
    msg.custom.assign("ETZMIXOHIJDZHVBSRLVHXVSAWJUWWDTHYFNWLSIKXFOOJAMRBRQGTVBGRSMJVXZJYIJRIYFLGTGLDQA");

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
    msg.setTimeStamp(0.722151568236);
    msg.setSource(28117U);
    msg.setSourceEntity(203U);
    msg.setDestination(3906U);
    msg.setDestinationEntity(164U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.497970087357;
    tmp_msg_0.speed_units = 225U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12116U;
    msg.custom.assign("HAQPHKKZFXSPQLLDAQSWMMMGIFQNGXZYOFKICSKPLNCBEGLCFBMEXCYNCPBLFIEBPAZCVLHEWVUFXEBITCRSADYYOQWRBEEOZDBVHZITUDJBTGKEKZXDWKDI");

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
    msg.setTimeStamp(0.0412640735359);
    msg.setSource(29359U);
    msg.setSourceEntity(26U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(14U);
    msg.timeout = 36424U;
    msg.lat = 0.868632123523;
    msg.lon = 0.767959799269;
    msg.z = 0.206222112916;
    msg.z_units = 229U;
    msg.speed = 0.85215595672;
    msg.speed_units = 69U;
    msg.bearing = 0.301475107937;
    msg.cross_angle = 0.812237594729;
    msg.width = 0.132108868715;
    msg.length = 0.744652252249;
    msg.hstep = 0.414240036776;
    msg.coff = 231U;
    msg.alternation = 5U;
    msg.flags = 13U;
    msg.custom.assign("UPOEJLYFTKATBMXHBSOEQWFACYPJEGTWHVMZFRMFVYQKBDTP");

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
    msg.setTimeStamp(0.434895891862);
    msg.setSource(35906U);
    msg.setSourceEntity(1U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(183U);
    msg.timeout = 10562U;
    msg.lat = 0.533301910745;
    msg.lon = 0.12934258446;
    msg.z = 0.864105429993;
    msg.z_units = 77U;
    msg.speed = 0.644886490846;
    msg.speed_units = 118U;
    msg.bearing = 0.431911251745;
    msg.cross_angle = 0.55980617204;
    msg.width = 0.741973814738;
    msg.length = 0.728772912723;
    msg.hstep = 0.801161665251;
    msg.coff = 235U;
    msg.alternation = 197U;
    msg.flags = 190U;
    msg.custom.assign("XVHWBXZWMGQPTFBQDEJFAYIJVUNTMWSKPVLFGAGRIKPJHPWPMAICMXGHLUHIPGWKIZWLDVDONGBNDSJJOESIPHILBUYMILLKBUVUDMXQEZGALXQQFBLFSETKFWOIQRZZTBCRNKCLCKZCTKXJCOXPPAFRWRJGEZTEYCDLZGBFHSTQAXYNZRUP");

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
    msg.setTimeStamp(0.715274397279);
    msg.setSource(33111U);
    msg.setSourceEntity(229U);
    msg.setDestination(55234U);
    msg.setDestinationEntity(219U);
    msg.timeout = 15226U;
    msg.lat = 0.624167630031;
    msg.lon = 0.19927354614;
    msg.z = 0.943985890646;
    msg.z_units = 67U;
    msg.speed = 0.0890451452182;
    msg.speed_units = 152U;
    msg.bearing = 0.907991001139;
    msg.cross_angle = 0.748911813692;
    msg.width = 0.358378670104;
    msg.length = 0.893844318124;
    msg.hstep = 0.670940586947;
    msg.coff = 88U;
    msg.alternation = 25U;
    msg.flags = 167U;
    msg.custom.assign("CIYQHCCFZRHYDYWSYPRGJBHSDCHPYLJBKCSDPLJNXTXJDQWEWPSAVLZDUOZFANFRJKEMKJESYMTXUHGKEXAXRIKZOCVHUGZTKZCYWIOLLOGATXZXUEOCGZEWNYDBOQMRLVVYMAVUGOFMRPSRWQQBQIBWUBIOXGLVJONUVWRFTTAPZELPFNDJKFEHKDSIGH");

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
    msg.setTimeStamp(0.577315206363);
    msg.setSource(21926U);
    msg.setSourceEntity(203U);
    msg.setDestination(39651U);
    msg.setDestinationEntity(6U);
    msg.timeout = 37491U;
    msg.lat = 0.174718776386;
    msg.lon = 0.24030204394;
    msg.z = 0.445376570885;
    msg.z_units = 171U;
    msg.speed = 0.188688202842;
    msg.speed_units = 104U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.474153931362;
    tmp_msg_0.y = 0.964437187539;
    tmp_msg_0.z = 0.625137721701;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GVHXIOFCUMTWRPHKROSJBGSCQWIKJAEKQJVULOJAYIDNXOLVFGEJNALDUWRMPQMXXDYKAVIVFLTIQMCKNLAHRHBU");

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
    msg.setTimeStamp(0.910554031935);
    msg.setSource(46319U);
    msg.setSourceEntity(107U);
    msg.setDestination(31718U);
    msg.setDestinationEntity(250U);
    msg.timeout = 56550U;
    msg.lat = 0.385919546874;
    msg.lon = 0.891191168494;
    msg.z = 0.343854795188;
    msg.z_units = 66U;
    msg.speed = 0.836634702918;
    msg.speed_units = 176U;
    msg.custom.assign("WUXIQYPSOUGZGGEGNRLECKOVWBXEXDORPPPNYGUNTXORCKBPOQUAKRNMSCIJIMJFRJJQZJGGCZULQEQSNCMJWTSNQCFFZYGDWZWSLRHXCNLHAUKLUWMRIVBHCIFDWDLSRXBKRTJBWZSFHVRDLETYLTUYVHVAHNXITYAYMAFLKHEATKGWDQQMFHIBNAETMBKTOIECEFJQDNDPYPMESTXHXJZYMVCOBDKDZAQOPAKUOPZFZMVLIJSFWHVSVX");

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
    msg.setTimeStamp(0.766021470168);
    msg.setSource(115U);
    msg.setSourceEntity(106U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(95U);
    msg.timeout = 38863U;
    msg.lat = 0.986300052878;
    msg.lon = 0.603693399535;
    msg.z = 0.976289634788;
    msg.z_units = 44U;
    msg.speed = 0.214425740235;
    msg.speed_units = 211U;
    msg.custom.assign("BELEWDKLCCEGGWYWLPJONKPYTLNDCSFPKRWUSQSOBVSMTCXVPXKPXKREWZTARRMONXBMDTTAGATFSQWIZGFDZOROFSHKDMWUMRRPOINMGVQGIJLYPWKHMUJIDNLYNJGYTBXMO");

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
    msg.setTimeStamp(0.750553765327);
    msg.setSource(23785U);
    msg.setSourceEntity(174U);
    msg.setDestination(39709U);
    msg.setDestinationEntity(197U);
    msg.x = 0.495718993822;
    msg.y = 0.413529839326;
    msg.z = 0.979101820298;

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
    msg.setTimeStamp(0.130634114121);
    msg.setSource(28806U);
    msg.setSourceEntity(85U);
    msg.setDestination(1349U);
    msg.setDestinationEntity(40U);
    msg.x = 0.895638872614;
    msg.y = 0.0723383420412;
    msg.z = 0.458770722428;

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
    msg.setTimeStamp(0.429669655854);
    msg.setSource(41628U);
    msg.setSourceEntity(96U);
    msg.setDestination(63393U);
    msg.setDestinationEntity(66U);
    msg.x = 0.231287842541;
    msg.y = 0.764326797235;
    msg.z = 0.313866861682;

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
    msg.setTimeStamp(0.244924591024);
    msg.setSource(9562U);
    msg.setSourceEntity(85U);
    msg.setDestination(26748U);
    msg.setDestinationEntity(38U);
    msg.timeout = 6215U;
    msg.lat = 0.279288622612;
    msg.lon = 0.702823896741;
    msg.z = 0.272914675279;
    msg.z_units = 165U;
    msg.amplitude = 0.280607291921;
    msg.pitch = 0.926797412814;
    msg.speed = 0.238116019586;
    msg.speed_units = 69U;
    msg.custom.assign("GENBETJPSYZYMVQAYHQTUWANGXHSRQXMXM");

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
    msg.setTimeStamp(0.302177293005);
    msg.setSource(31306U);
    msg.setSourceEntity(7U);
    msg.setDestination(63105U);
    msg.setDestinationEntity(169U);
    msg.timeout = 59977U;
    msg.lat = 0.812227602848;
    msg.lon = 0.874332620777;
    msg.z = 0.873912373;
    msg.z_units = 19U;
    msg.amplitude = 0.534114004524;
    msg.pitch = 0.375074942093;
    msg.speed = 0.795890252067;
    msg.speed_units = 52U;
    msg.custom.assign("QCVEVJGQADDGJYNUBWWLVRMDQAQMOTQJZOYMRNKIZCYCXRRGEPLBSGQXPANTONPCIFLTSEYRSTPHIFMUFUJLMTWGZASBUPWNZIYJNSJIKWWDSEQZCSHFMACDNPPKXMEXNVEXHRRAIRDATGJDUVBQXFHCOIZSXFGYTCVCAKYLHSILWCWLLJQFUVKDBFGOYMHRRTMXKVKOETK");

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
    msg.setTimeStamp(0.835738828113);
    msg.setSource(1621U);
    msg.setSourceEntity(247U);
    msg.setDestination(28716U);
    msg.setDestinationEntity(125U);
    msg.timeout = 48996U;
    msg.lat = 0.578654334763;
    msg.lon = 0.433269379507;
    msg.z = 0.174287844009;
    msg.z_units = 129U;
    msg.amplitude = 0.861574693752;
    msg.pitch = 0.793671512221;
    msg.speed = 0.721371579795;
    msg.speed_units = 133U;
    msg.custom.assign("RHCZVEKJBOGZGQWANFUNARPSBAFLBDEIHDDYHTPGUQIPOHRYJCKFQLTPCUCTRAEMQDDVFQEFBXKZFMGLLWCHIREAOABKLXQAGSJDHKOUBVYUYNFZXMBTIJXZQJDRSKSUBYYTVEEOWJIRLYVYOVMEOGCVIUXRJNXDPWTUMMK");

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
    msg.setTimeStamp(0.401370450741);
    msg.setSource(62346U);
    msg.setSourceEntity(58U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.332111818015);
    msg.setSource(1857U);
    msg.setSourceEntity(60U);
    msg.setDestination(4098U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.866704529026);
    msg.setSource(1214U);
    msg.setSourceEntity(116U);
    msg.setDestination(37011U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.946936712495);
    msg.setSource(61545U);
    msg.setSourceEntity(139U);
    msg.setDestination(42414U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.105016593369;
    msg.lon = 0.416772332713;
    msg.z = 0.487847364622;
    msg.z_units = 3U;
    msg.radius = 0.588603629739;
    msg.duration = 64887U;
    msg.speed = 0.422193454626;
    msg.speed_units = 122U;
    msg.custom.assign("JAQAYECWRDDBXLMPPIPXZPZLFILWCNZQFIAFVBDBAKXZEIVOWEYKUHQMJDPVTRGGEHRLUGNMJBHJMWCZHROEOTSRR");

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
    msg.setTimeStamp(0.0433840674621);
    msg.setSource(14185U);
    msg.setSourceEntity(209U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.474616566746;
    msg.lon = 0.663104039506;
    msg.z = 0.725457283563;
    msg.z_units = 142U;
    msg.radius = 0.170526452634;
    msg.duration = 30216U;
    msg.speed = 0.713896547118;
    msg.speed_units = 14U;
    msg.custom.assign("DRZROTXZHELQAMOBTEYMMFZYJSHRMSIRKBKIMINTAKMLJDRFNOXGCXAOKXBRHWNIGDZDNQYWCDQOCOULASCJIWS");

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
    msg.setTimeStamp(0.0596580946039);
    msg.setSource(63907U);
    msg.setSourceEntity(36U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.427206620509;
    msg.lon = 0.799710080781;
    msg.z = 0.125303662015;
    msg.z_units = 177U;
    msg.radius = 0.220720459398;
    msg.duration = 19162U;
    msg.speed = 0.899316558034;
    msg.speed_units = 149U;
    msg.custom.assign("YEIDFORWZRCIZACDUGLBWNCQXKEZVVLASLTFYWHOLKYLJANODYGLLMPBAWDBKRCQDHOWJZRMLKZIXNQDFPXJWPNNPBIDNCGMFGRVOISWTSYVOXIBMIIWQAFCTXKWPMVXHCG");

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
    msg.setTimeStamp(0.74611273215);
    msg.setSource(12824U);
    msg.setSourceEntity(80U);
    msg.setDestination(2946U);
    msg.setDestinationEntity(18U);
    msg.timeout = 54219U;
    msg.flags = 45U;
    msg.lat = 0.671299988957;
    msg.lon = 0.38377321413;
    msg.start_z = 0.499941878965;
    msg.start_z_units = 118U;
    msg.end_z = 0.742431085515;
    msg.end_z_units = 250U;
    msg.radius = 0.188324339781;
    msg.speed = 0.525446268149;
    msg.speed_units = 46U;
    msg.custom.assign("JOUXONOTJBAMUDSKYAYTKBY");

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
    msg.setTimeStamp(0.0209983676869);
    msg.setSource(38094U);
    msg.setSourceEntity(29U);
    msg.setDestination(53319U);
    msg.setDestinationEntity(79U);
    msg.timeout = 39666U;
    msg.flags = 100U;
    msg.lat = 0.364258895718;
    msg.lon = 0.20240210471;
    msg.start_z = 0.330196407847;
    msg.start_z_units = 173U;
    msg.end_z = 0.724837794243;
    msg.end_z_units = 74U;
    msg.radius = 0.443455836135;
    msg.speed = 0.654345153474;
    msg.speed_units = 4U;
    msg.custom.assign("RULMPSUOCPPGVMBFHUEKZSKQAYDYZMBJMPHJKNFIUOECLTEUAQRZRWZVDVLIDTRNHCYISDXCXDVDOUEXFKAYOTSNAZTRGVFRLFUFIBIEBYBQKOKGLQZABVHDAKMWO");

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
    msg.setTimeStamp(0.233763215848);
    msg.setSource(42394U);
    msg.setSourceEntity(218U);
    msg.setDestination(9076U);
    msg.setDestinationEntity(89U);
    msg.timeout = 6507U;
    msg.flags = 52U;
    msg.lat = 0.275225700373;
    msg.lon = 0.089748304357;
    msg.start_z = 0.752452668403;
    msg.start_z_units = 79U;
    msg.end_z = 0.907109036351;
    msg.end_z_units = 143U;
    msg.radius = 0.27817260108;
    msg.speed = 0.979713136977;
    msg.speed_units = 171U;
    msg.custom.assign("OXJXJWNKGFIMRIPDVNUZCCEUREGYGTSJZUBLVHVZLEWWPMYEHJAVIDJTLOFMLEOWZKNRBQEXAWFMCFURHWXIBAPDPXTQHUNZMEODJYUPHTJNBMISGMMDLOCONULJJUEKCKOKGYNQGPTSFZBUDVJEYKYHATS");

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
    msg.setTimeStamp(0.859807920395);
    msg.setSource(42257U);
    msg.setSourceEntity(138U);
    msg.setDestination(11411U);
    msg.setDestinationEntity(154U);
    msg.timeout = 46110U;
    msg.lat = 0.449769365319;
    msg.lon = 0.593192335101;
    msg.z = 0.227718810506;
    msg.z_units = 43U;
    msg.speed = 0.0170777494022;
    msg.speed_units = 117U;
    msg.custom.assign("FPRQCGOOWAXKISHIVKKGGWLFPXOMSDULTQWOYRKSBSEZP");

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
    msg.setTimeStamp(0.57897516369);
    msg.setSource(27782U);
    msg.setSourceEntity(168U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(245U);
    msg.timeout = 56227U;
    msg.lat = 0.435947698431;
    msg.lon = 0.383383381159;
    msg.z = 0.375881986447;
    msg.z_units = 40U;
    msg.speed = 0.439661715942;
    msg.speed_units = 191U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.465010049713;
    tmp_msg_0.y = 0.689629778339;
    tmp_msg_0.z = 0.429232426982;
    tmp_msg_0.t = 0.0530301126913;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MPBBMJOWRSVXPAOEUCEYGVYLJNQ");

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
    msg.setTimeStamp(0.857252056362);
    msg.setSource(28140U);
    msg.setSourceEntity(234U);
    msg.setDestination(63245U);
    msg.setDestinationEntity(87U);
    msg.timeout = 45819U;
    msg.lat = 0.316290342009;
    msg.lon = 0.277583768678;
    msg.z = 0.877026858529;
    msg.z_units = 36U;
    msg.speed = 0.988722357901;
    msg.speed_units = 82U;
    msg.custom.assign("JXCQHMBVKAPNFRHGMJTGQCSBIISABFZSWUBHEFDMSDTVAMOOEDLBQVCEJIYYLOCBKNQVNVGAIENHBICFQWXVXACWWPDVZXALSNNUGOZYJLVDXJOPQOLNMLYOCHISTASGFVSTFYIRYDKQWQZCBNGLXEKJBPRPKUKDRTHHJRHMUGBPUKKYEFEJRTUPNPDNIQYWGSZUWYGMKEFFOTGAXRLZPTMXZZXWSDFRPQTXHRLMOICAJE");

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
    msg.setTimeStamp(0.884009080804);
    msg.setSource(6559U);
    msg.setSourceEntity(121U);
    msg.setDestination(40965U);
    msg.setDestinationEntity(152U);
    msg.x = 0.317669663331;
    msg.y = 0.499067651898;
    msg.z = 0.849146414686;
    msg.t = 0.658912219879;

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
    msg.setTimeStamp(0.919801164755);
    msg.setSource(51508U);
    msg.setSourceEntity(41U);
    msg.setDestination(27156U);
    msg.setDestinationEntity(93U);
    msg.x = 0.872683120656;
    msg.y = 0.198552738153;
    msg.z = 0.204935767159;
    msg.t = 0.947483018194;

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
    msg.setTimeStamp(0.158526557201);
    msg.setSource(41855U);
    msg.setSourceEntity(32U);
    msg.setDestination(65219U);
    msg.setDestinationEntity(111U);
    msg.x = 0.36202918237;
    msg.y = 0.402224826936;
    msg.z = 0.254095033293;
    msg.t = 0.669287930966;

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
    msg.setTimeStamp(0.317352578094);
    msg.setSource(31354U);
    msg.setSourceEntity(130U);
    msg.setDestination(17654U);
    msg.setDestinationEntity(208U);
    msg.timeout = 59464U;
    msg.name.assign("WPCSGDAGNRCQQNJEPDPEHMIAXZIHDISVTJWAZUSCMMIGOEKBNCIMRENBLZLJSZWPGPXFCVZMGRPPOLSWHBTRCKNUDIHVCJEBZKBVWJ");
    msg.custom.assign("DMCQVMQZYZWOGVBRFBIBZPJEWGWKUSKJXNTGXQTSAUEANNONYKUPTYDPPNFFLFMVGXXGVGKPEOEXYBUNDOWYHTPTSHCJRWZKLONVDGUDBEZAQWQPGLUUMARHULHFXHDFNBOUIHLFHSKWZIZE");

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
    msg.setTimeStamp(0.0708645837991);
    msg.setSource(45597U);
    msg.setSourceEntity(140U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(230U);
    msg.timeout = 6234U;
    msg.name.assign("UNPQASEICZTFC");
    msg.custom.assign("QZCMHYXKUNXCRHZSHGVCNTXTMZJHEXYJQITPBUUDRSCIPVSKCYWUEAYMPBFZSWCOJOWLJSWNFPOUNBEWTTWEPFEYPLREAMUDQKABNLMRLTRMQGIBQFBIHETBCHFJHDDVFYBPRDIXOLOGUWZTWLKVOXNAPHVYGSGJKQKGADUJLIBGETODAKJLXQXA");

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
    msg.setTimeStamp(0.256943973242);
    msg.setSource(47894U);
    msg.setSourceEntity(176U);
    msg.setDestination(27759U);
    msg.setDestinationEntity(207U);
    msg.timeout = 59479U;
    msg.name.assign("GETPEYLYATVMCLITVJGAYCDAWBXVJPZQBLXZFPOOMTNZENOPNYIWDFSADUSPQBYXJTYTWRXYCRVAODSAKSMHBMNVCZMJUYLPKTNNJONIOTYGHFUBCQLVRXQCSNDESWGZOMHQPAZRGWJFNO");
    msg.custom.assign("BRQFEFLPSGCUZXRQNKTGQGBXQLBCESKJZHODFPPXNSUVZGKTDLPPANWDDBXOSMFVJKBWYMFLEMAZLFEQDCKMBUWSYUUOBNJKNSFVHDHLZRVTZAHUPJHOSDWHJQEGIHXZCURBTRJIUXOWYDNXIMWMNCBYOCMUPVOALFVIYLYPCEIIJSEPTOJAXUYAALHQHQVAMOVTJREBZESZMEIANCTDLGIXWRFKYRGWPVOKJZKF");

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
    msg.setTimeStamp(0.274720371236);
    msg.setSource(40030U);
    msg.setSourceEntity(128U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.019669175159;
    msg.lon = 0.343536592309;
    msg.z = 0.657482333669;
    msg.z_units = 148U;
    msg.speed = 0.320613526993;
    msg.speed_units = 200U;
    msg.start_time = 0.424356459069;
    msg.custom.assign("DRLUCTYFRZZDXDCERNVMEAOJTNUORPLVWNSHHARKG");

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
    msg.setTimeStamp(0.491334092566);
    msg.setSource(44227U);
    msg.setSourceEntity(74U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.630203109065;
    msg.lon = 0.809703914304;
    msg.z = 0.658593727502;
    msg.z_units = 91U;
    msg.speed = 0.69518606315;
    msg.speed_units = 68U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.75887104219;
    tmp_msg_0.y = 0.630483078954;
    tmp_msg_0.z = 0.799019583291;
    tmp_msg_0.t = 0.397641422723;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 54957U;
    tmp_msg_1.off_x = 0.814704749;
    tmp_msg_1.off_y = 0.181753269391;
    tmp_msg_1.off_z = 0.188374311846;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.572978818013;
    msg.custom.assign("QYBKIEOQABTTSIFNWJTRYPUSCYUVQCCAISNNQPXHNZRNMKYHTJJMEQFRLHEBTZSXPUOERBPGCOZPWWIVXBJIDDKKTZAZLZODLUVWDOIKDRSQEPTCGLMVVSYGVEGEZZSCXBDGKOFKKKOOVQXHDQRHMYYIGWMMYJDXAXFSCMMJGBBVJLPUXPGRAWAQIRNABHVSXCDHJFZULEFWWUQJMGGNVTIKALFFBYNLJ");

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
    msg.setTimeStamp(0.133918398968);
    msg.setSource(51428U);
    msg.setSourceEntity(133U);
    msg.setDestination(55434U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.199691439797;
    msg.lon = 0.53141347952;
    msg.z = 0.192318951893;
    msg.z_units = 21U;
    msg.speed = 0.317154513768;
    msg.speed_units = 204U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.909574638625;
    tmp_msg_0.y = 0.102974779193;
    tmp_msg_0.z = 0.55952180624;
    tmp_msg_0.t = 0.454359386517;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.318195100107;
    msg.custom.assign("TPGKZUDQFJOEGQNVXEXTTIQTIVQZYLZWHHEJBSEJMAAAIKVZPOMELPZPJICRANREILHLWUXFWNBQXONCKSBJOONZSTILVBMLVFMKZPDHMHOJYBWCWGXYKPYELGRLJRTDMHQHDBDNZDYUZZYLAHOKCIFMRXRENCJTQUYPYRIJGFFWUKUPVBQNBJNOIWOEYXSUFAGTRKSLSDAANCPFDWGVDABBSVWGFDVPSEMUQUTHKRXYHKQCCSIMCVFCAGU");

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
    msg.setTimeStamp(0.492588561472);
    msg.setSource(18968U);
    msg.setSourceEntity(219U);
    msg.setDestination(26266U);
    msg.setDestinationEntity(153U);
    msg.vid = 29694U;
    msg.off_x = 0.940834898344;
    msg.off_y = 0.308508646718;
    msg.off_z = 0.10071227265;

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
    msg.setTimeStamp(0.717592421807);
    msg.setSource(10184U);
    msg.setSourceEntity(100U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(174U);
    msg.vid = 4175U;
    msg.off_x = 0.865766173359;
    msg.off_y = 0.0569198599988;
    msg.off_z = 0.625607499289;

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
    msg.setTimeStamp(0.941699153477);
    msg.setSource(3383U);
    msg.setSourceEntity(41U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(86U);
    msg.vid = 30689U;
    msg.off_x = 0.712487873723;
    msg.off_y = 0.071540984847;
    msg.off_z = 0.964311489415;

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
    msg.setTimeStamp(0.137670997436);
    msg.setSource(10305U);
    msg.setSourceEntity(246U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.848153714097);
    msg.setSource(60847U);
    msg.setSourceEntity(216U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.854970373055);
    msg.setSource(23854U);
    msg.setSourceEntity(245U);
    msg.setDestination(30402U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.227236331514);
    msg.setSource(25199U);
    msg.setSourceEntity(124U);
    msg.setDestination(1998U);
    msg.setDestinationEntity(14U);
    msg.mid = 31265U;

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
    msg.setTimeStamp(0.495290706605);
    msg.setSource(37901U);
    msg.setSourceEntity(216U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(76U);
    msg.mid = 20974U;

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
    msg.setTimeStamp(0.38326186615);
    msg.setSource(28581U);
    msg.setSourceEntity(228U);
    msg.setDestination(24061U);
    msg.setDestinationEntity(223U);
    msg.mid = 44262U;

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
    msg.setTimeStamp(0.945236206585);
    msg.setSource(40359U);
    msg.setSourceEntity(202U);
    msg.setDestination(16633U);
    msg.setDestinationEntity(17U);
    msg.state = 183U;
    msg.eta = 26783U;
    msg.info.assign("WKNWOVYRUWUKRHAAEIILXNKQIRHTUWUEVQOQDOFUZYEZKPTPULNTUSNSBEBYXMJZCREAUGDVDCGXWADMVWFDBGJPYBLBVLZXFENMHSLTMCFJAYBDGFNOSQWVNKECPGTRQQBMYCULTNBPAYPAFJCREKGZVMZHYJDIJQFJQMILHAVLVONYZOCMAKGNSDQXHOQJEZGXMGZJPRHXULXBHSPW");

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
    msg.setTimeStamp(0.606624026964);
    msg.setSource(33242U);
    msg.setSourceEntity(199U);
    msg.setDestination(26272U);
    msg.setDestinationEntity(163U);
    msg.state = 252U;
    msg.eta = 11476U;
    msg.info.assign("DEBFAURJZLBNWOMMVGANLPQDVHFXHT");

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
    msg.setTimeStamp(0.505067966648);
    msg.setSource(36042U);
    msg.setSourceEntity(167U);
    msg.setDestination(51250U);
    msg.setDestinationEntity(244U);
    msg.state = 139U;
    msg.eta = 45789U;
    msg.info.assign("ODYEGNHUTJYASNOZXWYBAZJQFGGLGCGTHXEJNYSHEGRCDOYKUPKIKIBMTKHABHGXOVORNOXLVFE");

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
    msg.setTimeStamp(0.850461906867);
    msg.setSource(7029U);
    msg.setSourceEntity(122U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(97U);
    msg.system = 23913U;
    msg.duration = 39636U;
    msg.speed = 0.885332979623;
    msg.speed_units = 51U;
    msg.x = 0.885927675319;
    msg.y = 0.117282283605;
    msg.z = 0.0870936722889;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.98906300087);
    msg.setSource(37619U);
    msg.setSourceEntity(156U);
    msg.setDestination(60266U);
    msg.setDestinationEntity(20U);
    msg.system = 54819U;
    msg.duration = 56157U;
    msg.speed = 0.867787228537;
    msg.speed_units = 244U;
    msg.x = 0.0454021597298;
    msg.y = 0.731455450431;
    msg.z = 0.757880936175;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.12869392315);
    msg.setSource(22674U);
    msg.setSourceEntity(57U);
    msg.setDestination(58844U);
    msg.setDestinationEntity(102U);
    msg.system = 1624U;
    msg.duration = 54748U;
    msg.speed = 0.362103864045;
    msg.speed_units = 48U;
    msg.x = 0.819467151257;
    msg.y = 0.453351052537;
    msg.z = 0.878791383347;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.865637921384);
    msg.setSource(17317U);
    msg.setSourceEntity(198U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.165605301372;
    msg.lon = 0.503467157783;
    msg.speed = 0.347293960594;
    msg.speed_units = 57U;
    msg.duration = 36790U;
    msg.sys_a = 30493U;
    msg.sys_b = 64424U;
    msg.move_threshold = 0.956508734223;

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
    msg.setTimeStamp(0.931671141662);
    msg.setSource(29726U);
    msg.setSourceEntity(119U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.981117144907;
    msg.lon = 0.455330025087;
    msg.speed = 0.682973302291;
    msg.speed_units = 239U;
    msg.duration = 20891U;
    msg.sys_a = 45656U;
    msg.sys_b = 6074U;
    msg.move_threshold = 0.416322351149;

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
    msg.setTimeStamp(0.676647481226);
    msg.setSource(56158U);
    msg.setSourceEntity(16U);
    msg.setDestination(56553U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.82847226041;
    msg.lon = 0.127638066697;
    msg.speed = 0.678712844089;
    msg.speed_units = 180U;
    msg.duration = 49123U;
    msg.sys_a = 43344U;
    msg.sys_b = 28436U;
    msg.move_threshold = 0.230251212523;

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
    msg.setTimeStamp(0.265145753198);
    msg.setSource(15737U);
    msg.setSourceEntity(7U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.894361725893;
    msg.lon = 0.374774956961;
    msg.z = 0.109917349188;
    msg.z_units = 10U;
    msg.speed = 0.83666848214;
    msg.speed_units = 183U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.136675875033;
    tmp_msg_0.lon = 0.456273939111;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TSRAWHIQXYGMEITXXUOFVRXAPWRELSYIAWHBGPNCEDRFNAUGVBLIBZWVAXJOJPEVNJXISZHKGXFFNCBHVJOWDKGWZBAMRSTSZDEUDLTEHMGDQBNUOVHNFAQOWEUSIICXZJMUGCKODJLQYZQUYGLRVKIBNCWKDUCYYKTEDENMHFFHIIQLLWPOAYRTKATZPDBJMUGMPFMEKMTBFXZTWRJQKORPCJLTSKSQVRLPZSZAQGYUVSNCFMYNOJLOXCD");

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
    msg.setTimeStamp(0.215305759037);
    msg.setSource(14134U);
    msg.setSourceEntity(36U);
    msg.setDestination(63052U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.413594873391;
    msg.lon = 0.997365927604;
    msg.z = 0.289817060038;
    msg.z_units = 39U;
    msg.speed = 0.890842247162;
    msg.speed_units = 183U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0895394506796;
    tmp_msg_0.lon = 0.00703819206797;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NEAZVHXCZSVGFBPNSGCGYRCIRGXOANEFHTKDICDGTBEAJZQPNIFYIYMLIZREUXVVGWESQOOBQSJCYWZ");

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
    msg.setTimeStamp(0.405037525112);
    msg.setSource(43833U);
    msg.setSourceEntity(253U);
    msg.setDestination(56153U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.987913092713;
    msg.lon = 0.813652680023;
    msg.z = 0.0291557816566;
    msg.z_units = 214U;
    msg.speed = 0.805880255781;
    msg.speed_units = 86U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.569886217658;
    tmp_msg_0.lon = 0.705185471262;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SBTFIMZDBHOKXQKONERABXCKXAIYJEJUBSGXNJVKVYZRJJPKPLONNOUTCLNPQACZYNBQPMRLWFXPZVFNEDRGDBCFYCMFVRQNKUSSREKAGTLROAOWIHHJXOELWWHAKJPHREEGVDPZDIIGHALFFEWGTTMULYPVPWIENYOXIBCZZUKUNBSZBGYGAGSSSVOHTKMAUHQCXUJTFPMCZBSDJWWUSWZDMXFQLIOAXCRIVEVJIQQTHTLDRQMLW");

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
    msg.setTimeStamp(0.856747336049);
    msg.setSource(53523U);
    msg.setSourceEntity(227U);
    msg.setDestination(26161U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.848982581242;
    msg.lon = 0.522887949692;

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
    msg.setTimeStamp(0.681105123551);
    msg.setSource(28152U);
    msg.setSourceEntity(88U);
    msg.setDestination(53958U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.522393339544;
    msg.lon = 0.0255822907067;

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
    msg.setTimeStamp(0.405783256099);
    msg.setSource(5582U);
    msg.setSourceEntity(225U);
    msg.setDestination(12146U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.1581492743;
    msg.lon = 0.531239012948;

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
    msg.setTimeStamp(0.448879884965);
    msg.setSource(4377U);
    msg.setSourceEntity(56U);
    msg.setDestination(50282U);
    msg.setDestinationEntity(149U);
    msg.timeout = 10434U;
    msg.lat = 0.37444726747;
    msg.lon = 0.0161188051426;
    msg.z = 0.797656454565;
    msg.z_units = 147U;
    msg.pitch = 0.887287875877;
    msg.amplitude = 0.00889679296692;
    msg.duration = 60643U;
    msg.speed = 0.00781766258837;
    msg.speed_units = 119U;
    msg.radius = 0.188586464268;
    msg.direction = 134U;
    msg.custom.assign("VKKPBEJLLXVNOBMJTMLFEHQKISVYOKRQSTJASHSEOPHHIFJUVZWMEXCSACLGRVQJPBPCIDWUYXNUGDPCYSFYAAAUICOLZCDDPKTYYNRGWJFPQZQJDPHNBFTRDLAZBJTDGXLMBMXMHQRYRTGSKIWGLHWCWVXRTBUNCHBNKUWVGYILRAMXSPNNGIJKXZOBFUQQDCHRUSONZZTEEVICFUAQWZXLGEWZWIIZQYMPBKXKOMAJ");

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
    msg.setTimeStamp(0.0485262288092);
    msg.setSource(60970U);
    msg.setSourceEntity(220U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(189U);
    msg.timeout = 16237U;
    msg.lat = 0.923650876462;
    msg.lon = 0.348615580808;
    msg.z = 0.202204848634;
    msg.z_units = 10U;
    msg.pitch = 0.331066418491;
    msg.amplitude = 0.461796472688;
    msg.duration = 19452U;
    msg.speed = 0.354807965614;
    msg.speed_units = 187U;
    msg.radius = 0.916225898705;
    msg.direction = 218U;
    msg.custom.assign("FKWCPALRBXBJRGQNZSKUEBURGYAWAESKYHIOVQAVWXXFFXIFLRSAPHOGGLKITIJYPRMCHUQDMMARKPHWWTMEAFCMZUOVZPJIQALUOTDUNHZXHHCTONTGCWJVKNYRQDZGFYXBFKMIZKYRCTYNPIATBNPSKDEYFSWHNSQVELSXPEPQEIJFDSB");

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
    msg.setTimeStamp(0.646569567538);
    msg.setSource(7192U);
    msg.setSourceEntity(230U);
    msg.setDestination(43596U);
    msg.setDestinationEntity(61U);
    msg.timeout = 23826U;
    msg.lat = 0.147182619021;
    msg.lon = 0.913316580417;
    msg.z = 0.185925081128;
    msg.z_units = 221U;
    msg.pitch = 0.614701926676;
    msg.amplitude = 0.324717124195;
    msg.duration = 37803U;
    msg.speed = 0.363147637931;
    msg.speed_units = 209U;
    msg.radius = 0.114109859517;
    msg.direction = 27U;
    msg.custom.assign("XCQWZERIFBVAHNTPEHSAXPXRSWIOJJBMEHDHWDCAWMDHWZHDORZPNDHXFQQUOIAUHIBSUKYCUAWGWTMIMMBONLSLMDZGECSEACTQFKKRBFJDLIARWKUCYNBPXOPOKETTOYKMPZPHLHIMATJYMQYYXCDVQTGRKDUZCSXQPLYIGBXOIKFJFWGSVNQZFAVWBVRFUPML");

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
    msg.setTimeStamp(0.759589397993);
    msg.setSource(41878U);
    msg.setSourceEntity(118U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(166U);
    msg.formation_name.assign("PRGVDPPULTQNVDUVBVOOECWIVWTDSZLAXQJLZCJESQYIRWPYSXRIFVBGMWITQFAHYLIZAWNBZXAAABEKBKMEGCSCGRVNPHHLRLUWKLEXCTIJCJMOYUYQNIERPEOKRADUYDAFKCBWTPURGXUIFHNRWSQXESDGXHYJYPRYBTGTIFJUNUNCCFIMZBXSNNAMMGQWNVSJXJYZGZHPDWGOEBHFQPFOMVLEQZLHZKZLHOMDJTKTOXAJSSHCDKKBD");
    msg.reference_frame = 241U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49783U;
    tmp_msg_0.off_x = 0.262417780042;
    tmp_msg_0.off_y = 0.234938315373;
    tmp_msg_0.off_z = 0.921950157653;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AIVSTMUUYLMIOXRSRHCDDYFKWBQBWNMXHCAFGQHQRDGCZZOWTDNXESFKOJZUJOUPLFEABEZJNRPWPDJPFQXQR");

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
    msg.setTimeStamp(0.923854493674);
    msg.setSource(57008U);
    msg.setSourceEntity(242U);
    msg.setDestination(14776U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("VALJUIMQFGUPWMQPFUBKVIPFAGALSLZOLQDTDYIDDNFCHLHLPNEYRNH");
    msg.reference_frame = 176U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62031U;
    tmp_msg_0.off_x = 0.938757179178;
    tmp_msg_0.off_y = 0.148066585404;
    tmp_msg_0.off_z = 0.850197270914;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZKUSHDMANUTMYRYZEQEELCKIBWTCTKGVZXFRYFKQSPEVWBSNXDPKGNOHDLUNXANZCWOFCAFTTHGHREEVSHHPOYLXCGGDSMURBQJJPKAJVDPSTBPLVDCXTVLGSWDMJBVYTCQWOYLRIFZVROGDAEJMESIIHAROACZJQIKPGJLLFWCXNRUMBGMWYZSQNOAKJXMWINWJOYLBWYKIMQTOPOZEDC");

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
    msg.setTimeStamp(0.428225019032);
    msg.setSource(363U);
    msg.setSourceEntity(240U);
    msg.setDestination(18742U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("XZUHPVLUUSTRYMVICVGWHAHKBZDYFDHYXMMQVCCUZHDNPNPQPSNTGAQBEDGPOFKTABOTMXJSCSFBJAPGQXUALOPAKRFXRFDQIBFMGFUOZQEVSWCEXHFSLDTUYMYWLRKKDRBNZWIIOAJVAOUEMTWWSNRXFLXYMEKOGECIKYPTNJOJEKHRPTCIKEGWQAZGUXJDLWIGOXHCVJSNHOKFMPIWSNLRHBRCYJILL");
    msg.reference_frame = 201U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31464U;
    tmp_msg_0.off_x = 0.202970063095;
    tmp_msg_0.off_y = 0.28843140969;
    tmp_msg_0.off_z = 0.59617912845;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IPRBHDKYNUBIVIPFQREYRFHBXCPQBTJMQDRSFSFLERLGEWEIZGCOHXCNDXKDPWLNWUQGGSLZCILCHIMQJSYVCUSTBUJQOBGTTRLXQEGMXVLZIEWTIPWOFSUODYSMWPQWFMAMXAQJIJUHWBLZ");

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
    msg.setTimeStamp(0.360356539854);
    msg.setSource(59256U);
    msg.setSourceEntity(74U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("YJXJFGHIAPETZOPVHQYWEJYLVGYPVTMUUXTLIJTPCTTLKKNQJMTMJYIFSZJRVFHVHGRCHVKY");
    msg.formation_name.assign("OTSWLYSTHQUNUMUQFJUZAWIFXWZNBPIUKFXGTKSDPXKNSQYDCZMMVRGOCYBVLHNKJVTTVMWAMZERRHEUTRLAFRBBJXLCRYTAAGEZKXDEMTEWXIPADTVHCDPAOWICVYNVGKDJGSTBMGQNQBNEFJRNERQSHASIDGIHFYLZBFSPLWSWGQYMDIDLXOMICLFBYZMUUIHUXHJYPJVORCJVBJIH");
    msg.plan_id.assign("AYWLWZOARTIGPIPIGHVLJAHRIEUFSOTGKCRMKZHQSHVFWTCBKLMDXAZJVQQS");
    msg.description.assign("FZDWFRGQGKIPCVCGVXPTFEMBDRBYGJPHKWAZWXFYDLVAZNPQNAPHOCHBTLXQRTDSUGUJEUUBYSMIWUHSSRKKQVZXBXPPVUAOKCWYNESFZHKNRAGTHJQMNHNARDHYBXRKDPENKQXMYIEZUEORGZGOWWIDAPEOULOZFIQACLJWJFQNOMTOIMXOHRCDVCVHIQTICMSNTMBICJYMLYG");
    msg.leader_speed = 0.895186771729;
    msg.leader_bank_lim = 0.935281513454;
    msg.pos_sim_err_lim = 0.444078971419;
    msg.pos_sim_err_wrn = 0.183771924393;
    msg.pos_sim_err_timeout = 42951U;
    msg.converg_max = 0.075521711406;
    msg.converg_timeout = 34241U;
    msg.comms_timeout = 4689U;
    msg.turb_lim = 0.410469913064;
    msg.custom.assign("WMVOEVYYLYEYMURAIOUHXQDMKYPEJZLAVUAXSVZSIRRYL");

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
    msg.setTimeStamp(0.800006663638);
    msg.setSource(7841U);
    msg.setSourceEntity(178U);
    msg.setDestination(2005U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("GBRVVRXZQYTDWLOYPVRKESLRIFMVIALCBUYHMSUINEJIKHPWSCDQAFMHLBUFGJZTURLSBEJXGCWYGFQOEQADJVFOLWSEWGUIDNAYRRDJOZXPKASKQHXACGZQWAXIGXJBAPKMXHFNBHPUQOBNPTERBKPNTBNMWFHEHV");
    msg.formation_name.assign("UEJFLNLTGNILEMKNYSJKXPUDJMMLSCJODIBPCQQNFUBWICBCBHNYMRXRPWKLKDKZSVAGKVMQTTCUIAOUWRQQAJMHWDOJVBTPZGUUXUXBAEZTGHFILWLYXTYJAFYVVQOGLXPDHHIJCWBARVBUQYPRWREQRIEBDQSPAOOSSAIFKPKEPVOMAGONXUOZCWETFZCVRXGEZHYYDXMYF");
    msg.plan_id.assign("KBXSODMDLLEUALURSZDRUJRRGCRBNMHNQTFPZNKMWRCHAUQKQBBMTPZTFESBFNCCPVSLJNFFHVTKTANMASJIEYPVQXUMJELYHDYBDWMYRXIQZDGOJKXOVGZOQCNWXGSCXWGHIZVJBQJWJVPYTFYRERFIJOXFPYXYDAIETPAAZCUTHHQWZSSOBPIJTGYSYWEWUPOLZGDBWVCCKHKPMRHXGNMLXAUDCQSDTNE");
    msg.description.assign("AQQFJBKSXHQSQWJXFDFLIX");
    msg.leader_speed = 0.850571185717;
    msg.leader_bank_lim = 0.518361580189;
    msg.pos_sim_err_lim = 0.585190665219;
    msg.pos_sim_err_wrn = 0.581400359137;
    msg.pos_sim_err_timeout = 52565U;
    msg.converg_max = 0.860988230295;
    msg.converg_timeout = 54381U;
    msg.comms_timeout = 14506U;
    msg.turb_lim = 0.238513514416;
    msg.custom.assign("GKFLOSDFJTYYPIWNMHCUXJQFLNTZPNIWYPSSOFSBNDOPEEOJWDORTAZWBBXZWDEJSUDLAMXTVVUNCMNYQRZDHZRWAEBGHRVEDAVCJZRKGHZVQVKJIXGMHSIONJEMDCQVRCOLHBUAZVRIXWHVFCYTBPETGTFALUGQAOFXSJKCQFWXHUOEMWENYMMIWUIBTISGDRTB");

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
    msg.setTimeStamp(0.482895699059);
    msg.setSource(61957U);
    msg.setSourceEntity(67U);
    msg.setDestination(63908U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("YRCXPDSLODWAIDCRUJZNORQDSDOWFYRKCBWABWTTNZGUYLNEWVNJFDXJKUIRNRPJZITYAWBSFVIYCRQWGYYWYUMSLUGEFJMEPMGSVHFZWKNRQCFQXMFTEOXK");
    msg.formation_name.assign("CVKLHELDKTBSJJIGHHGWSRZKFFKNDSQGQJAV");
    msg.plan_id.assign("MCWPAPNUXZELBAAGCLTVOEGCABZIEDWNBTQUTAMROHZJXIMDMNBSZGSJPDNVQKYOLHHDLWWGGUFGOKIVCQTZJHVM");
    msg.description.assign("BDMFSTFTGTJPWLUBDVJEGXLIIKOJKCOUCIRTYFBVWTQSVTTHKJXGXADKRWJNBVGKAJJJDWQZIKYFONWHVZSUAJVHQKEBYGUWHPNXTYVQVLUDFGCFGFFIRYNUX");
    msg.leader_speed = 0.133817532195;
    msg.leader_bank_lim = 0.316277572278;
    msg.pos_sim_err_lim = 0.46398831785;
    msg.pos_sim_err_wrn = 0.361284849467;
    msg.pos_sim_err_timeout = 47913U;
    msg.converg_max = 0.532186289012;
    msg.converg_timeout = 20156U;
    msg.comms_timeout = 59525U;
    msg.turb_lim = 0.515964772294;
    msg.custom.assign("XVFHHIPOMUWIYPGAFPHSHFYFPDBBCUQSNBRMAYCCMXXMLKEBXNDWINWGLFGEILVHJJERPCUXOGKNFQKNTEOAOXSWTXVRDKAAJLRMGUODRIDXIKWIQSTQMJVCJCBTZWPJEMHFJGGNPILOZOHSSWRYFRCKEMBZYYRJZBTMTFKZIVBQXAZJSQOSKTLRGQNHUDLZVATEYELDFCAUQZIRUDVCCTJYLZUDWUNPQBEOSOXMWNYGYEBADTQVPPKVGUHKHZ");

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
    msg.setTimeStamp(0.302197090895);
    msg.setSource(51183U);
    msg.setSourceEntity(94U);
    msg.setDestination(42934U);
    msg.setDestinationEntity(153U);
    msg.control_src = 35121U;
    msg.control_ent = 122U;
    msg.timeout = 0.839350920241;
    msg.loiter_radius = 0.602678368478;
    msg.altitude_interval = 0.153901878586;

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
    msg.setTimeStamp(0.300989352919);
    msg.setSource(26977U);
    msg.setSourceEntity(137U);
    msg.setDestination(16491U);
    msg.setDestinationEntity(40U);
    msg.control_src = 8235U;
    msg.control_ent = 155U;
    msg.timeout = 0.979955358008;
    msg.loiter_radius = 0.0272238017947;
    msg.altitude_interval = 0.0256737599393;

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
    msg.setTimeStamp(0.534109004387);
    msg.setSource(43267U);
    msg.setSourceEntity(2U);
    msg.setDestination(31333U);
    msg.setDestinationEntity(31U);
    msg.control_src = 56158U;
    msg.control_ent = 27U;
    msg.timeout = 0.0699189986231;
    msg.loiter_radius = 0.881859571178;
    msg.altitude_interval = 0.525243424819;

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
    msg.setTimeStamp(0.891495736554);
    msg.setSource(49318U);
    msg.setSourceEntity(80U);
    msg.setDestination(11725U);
    msg.setDestinationEntity(80U);
    msg.flags = 187U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.505720668346;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.671226846323;
    tmp_msg_1.z_units = 65U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.332661583225;
    msg.lon = 0.608920300258;
    msg.radius = 0.982627768165;

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
    msg.setTimeStamp(0.445860742025);
    msg.setSource(50032U);
    msg.setSourceEntity(19U);
    msg.setDestination(2506U);
    msg.setDestinationEntity(201U);
    msg.flags = 97U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.667280697368;
    tmp_msg_0.speed_units = 145U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.56180694656;
    tmp_msg_1.z_units = 92U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.868747522399;
    msg.lon = 0.738125565089;
    msg.radius = 0.788908358102;

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
    msg.setTimeStamp(0.945538779001);
    msg.setSource(14746U);
    msg.setSourceEntity(62U);
    msg.setDestination(52267U);
    msg.setDestinationEntity(16U);
    msg.flags = 27U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.975660067804;
    tmp_msg_0.speed_units = 199U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.677658311266;
    tmp_msg_1.z_units = 166U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.887561973652;
    msg.lon = 0.223956492204;
    msg.radius = 0.525558869502;

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
    msg.setTimeStamp(0.831900098104);
    msg.setSource(31513U);
    msg.setSourceEntity(217U);
    msg.setDestination(59384U);
    msg.setDestinationEntity(231U);
    msg.control_src = 31918U;
    msg.control_ent = 155U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 1U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0550926112962;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.950593649706;
    tmp_tmp_msg_0_1.z_units = 72U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.00583805503115;
    tmp_msg_0.lon = 0.651582217401;
    tmp_msg_0.radius = 0.706935476154;
    msg.reference.set(tmp_msg_0);
    msg.state = 217U;
    msg.proximity = 79U;

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
    msg.setTimeStamp(0.0328598845842);
    msg.setSource(53594U);
    msg.setSourceEntity(168U);
    msg.setDestination(39908U);
    msg.setDestinationEntity(57U);
    msg.control_src = 28406U;
    msg.control_ent = 168U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 253U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.378577624956;
    tmp_tmp_msg_0_0.speed_units = 229U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.731279598079;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.918964539272;
    tmp_msg_0.lon = 0.0104123979248;
    tmp_msg_0.radius = 0.833133753226;
    msg.reference.set(tmp_msg_0);
    msg.state = 155U;
    msg.proximity = 62U;

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
    msg.setTimeStamp(0.395372472781);
    msg.setSource(26298U);
    msg.setSourceEntity(107U);
    msg.setDestination(5454U);
    msg.setDestinationEntity(254U);
    msg.control_src = 49818U;
    msg.control_ent = 121U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 0U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.274957970345;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.912509232841;
    tmp_tmp_msg_0_1.z_units = 17U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.596576241606;
    tmp_msg_0.lon = 0.575077055902;
    tmp_msg_0.radius = 0.00724348014395;
    msg.reference.set(tmp_msg_0);
    msg.state = 164U;
    msg.proximity = 125U;

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
    msg.setTimeStamp(0.771196801349);
    msg.setSource(21437U);
    msg.setSourceEntity(74U);
    msg.setDestination(12083U);
    msg.setDestinationEntity(91U);
    msg.ax_cmd = 0.0967229069736;
    msg.ay_cmd = 0.75317615859;
    msg.az_cmd = 0.962830090997;
    msg.ax_des = 0.26352879893;
    msg.ay_des = 0.841375135863;
    msg.az_des = 0.869056949022;
    msg.virt_err_x = 0.52325878284;
    msg.virt_err_y = 0.314149928316;
    msg.virt_err_z = 0.835187506574;
    msg.surf_fdbk_x = 0.339463303523;
    msg.surf_fdbk_y = 0.240718495598;
    msg.surf_fdbk_z = 0.155649491958;
    msg.surf_unkn_x = 0.702335882164;
    msg.surf_unkn_y = 0.493184342475;
    msg.surf_unkn_z = 0.152823873575;
    msg.ss_x = 0.401505656432;
    msg.ss_y = 0.690563862795;
    msg.ss_z = 0.964898817692;

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
    msg.setTimeStamp(0.734552621347);
    msg.setSource(33697U);
    msg.setSourceEntity(73U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(244U);
    msg.ax_cmd = 0.120893809017;
    msg.ay_cmd = 0.467299010784;
    msg.az_cmd = 0.354579327866;
    msg.ax_des = 0.293981856158;
    msg.ay_des = 0.0481456964733;
    msg.az_des = 0.153886324667;
    msg.virt_err_x = 0.786569932285;
    msg.virt_err_y = 0.088223340206;
    msg.virt_err_z = 0.331492522146;
    msg.surf_fdbk_x = 0.88563150345;
    msg.surf_fdbk_y = 0.255468334976;
    msg.surf_fdbk_z = 0.603381457519;
    msg.surf_unkn_x = 0.624057415792;
    msg.surf_unkn_y = 0.0657796867991;
    msg.surf_unkn_z = 0.178905641615;
    msg.ss_x = 0.905729171808;
    msg.ss_y = 0.595923936236;
    msg.ss_z = 0.215191294312;

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
    msg.setTimeStamp(0.696157161458);
    msg.setSource(2669U);
    msg.setSourceEntity(173U);
    msg.setDestination(9403U);
    msg.setDestinationEntity(243U);
    msg.ax_cmd = 0.956601202721;
    msg.ay_cmd = 0.465309852891;
    msg.az_cmd = 0.880975003881;
    msg.ax_des = 0.192333618818;
    msg.ay_des = 0.778525886863;
    msg.az_des = 0.826694543132;
    msg.virt_err_x = 0.450448101558;
    msg.virt_err_y = 0.329830245523;
    msg.virt_err_z = 0.11633463313;
    msg.surf_fdbk_x = 0.943780773586;
    msg.surf_fdbk_y = 0.17247022519;
    msg.surf_fdbk_z = 0.46563411127;
    msg.surf_unkn_x = 0.327174408604;
    msg.surf_unkn_y = 0.611029260417;
    msg.surf_unkn_z = 0.584011304249;
    msg.ss_x = 0.625843907721;
    msg.ss_y = 0.187785991816;
    msg.ss_z = 0.343641298722;

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
    msg.setTimeStamp(0.451063512361);
    msg.setSource(44237U);
    msg.setSourceEntity(61U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(190U);
    msg.s_id.assign("JQMHXFUKLAVIGDCLBFBLORNIVHTRTTUGRMRLIRDRUQSGKWYYPASBCNERLDPICHZXJREYYMXOTGZSTOIZZTWWFBNVFITCUFEAWZTCGBOBUHPJSXWJHDELVRGFKOSFBDNEOMPXPGAVNENPOEDCPBGVQKCILIDOZLKSCIJQESCHQUKXFXNVLDRWNTVMJJWKHVMKATXLFENQHUHJAYYO");
    msg.dist = 0.903426492873;
    msg.err = 0.397967289125;
    msg.ctrl_imp = 0.982197760618;
    msg.rel_dir_x = 0.240795480636;
    msg.rel_dir_y = 0.256706789837;
    msg.rel_dir_z = 0.779639834172;
    msg.err_x = 0.200829866873;
    msg.err_y = 0.346165549099;
    msg.err_z = 0.523405717466;
    msg.rf_err_x = 0.0821799927949;
    msg.rf_err_y = 0.64593961656;
    msg.rf_err_z = 0.196369628037;
    msg.rf_err_vx = 0.712222226083;
    msg.rf_err_vy = 0.0539656467677;
    msg.rf_err_vz = 0.410987978868;
    msg.ss_x = 0.591980572353;
    msg.ss_y = 0.72810192447;
    msg.ss_z = 0.0748220573924;
    msg.virt_err_x = 0.585190648932;
    msg.virt_err_y = 0.659813428259;
    msg.virt_err_z = 0.857320940512;

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
    msg.setTimeStamp(0.852530985399);
    msg.setSource(57362U);
    msg.setSourceEntity(65U);
    msg.setDestination(860U);
    msg.setDestinationEntity(207U);
    msg.s_id.assign("LVEKYEMIHZHBSQZEPSLPKHQDIUPHMKGRMIPRURIOJJETZAGZFHOMJNQUIBCYMGEXIZXRSHCTNIUNUYH");
    msg.dist = 0.385951397402;
    msg.err = 0.115854753401;
    msg.ctrl_imp = 0.556148398082;
    msg.rel_dir_x = 0.253559301835;
    msg.rel_dir_y = 0.181639614525;
    msg.rel_dir_z = 0.918872556681;
    msg.err_x = 0.205140427693;
    msg.err_y = 0.631550143069;
    msg.err_z = 0.40096222528;
    msg.rf_err_x = 0.68634177035;
    msg.rf_err_y = 0.826426669252;
    msg.rf_err_z = 0.223956901542;
    msg.rf_err_vx = 0.641057206271;
    msg.rf_err_vy = 0.705700486935;
    msg.rf_err_vz = 0.5824723008;
    msg.ss_x = 0.939280841785;
    msg.ss_y = 0.00137579682841;
    msg.ss_z = 0.285490699088;
    msg.virt_err_x = 0.23148083046;
    msg.virt_err_y = 0.428581995857;
    msg.virt_err_z = 0.24444089141;

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
    msg.setTimeStamp(0.992394585704);
    msg.setSource(25965U);
    msg.setSourceEntity(46U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(192U);
    msg.s_id.assign("DMYAUDWDOFWQICRKZHUYSLJCCWGASWMLBPOOBKRZNKEYXJDFKELQTWVPTFRGLNBQYLPFB");
    msg.dist = 0.419316292511;
    msg.err = 0.350919257012;
    msg.ctrl_imp = 0.0490352489015;
    msg.rel_dir_x = 0.588866239939;
    msg.rel_dir_y = 0.128660884879;
    msg.rel_dir_z = 0.66056590878;
    msg.err_x = 0.0364114049935;
    msg.err_y = 0.332467854049;
    msg.err_z = 0.333090718048;
    msg.rf_err_x = 0.431926094169;
    msg.rf_err_y = 0.430333369479;
    msg.rf_err_z = 0.797841777803;
    msg.rf_err_vx = 0.513723694099;
    msg.rf_err_vy = 0.298924942672;
    msg.rf_err_vz = 0.0584960422097;
    msg.ss_x = 0.480075528715;
    msg.ss_y = 0.575067367807;
    msg.ss_z = 0.847229706034;
    msg.virt_err_x = 0.180276420972;
    msg.virt_err_y = 0.843670326486;
    msg.virt_err_z = 0.608412118532;

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
    msg.setTimeStamp(0.23945186585);
    msg.setSource(56678U);
    msg.setSourceEntity(109U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(126U);
    msg.timeout = 46691U;
    msg.rpm = 0.598881695254;
    msg.direction = 157U;
    msg.custom.assign("VFQIANJTHWSYRMHZWNGUADZGTXPEGPTBVLGCQVMHTILMDZCOFJEIIOQHYKVLKCLSXXYASBRKSSDCJSDKDGUWZRQADQMVXGPOLQIJWEEXHNLJOWUZVKFMAGNKFLIPENBAOQBUUMHCGUHKTYVFCFXKHYFBPRITWLWLOWFDVYXUHRQYLGCZKRROHYBZNWEACBPPVSUNOBZZFRNAAPJYJOROEDNTETPFMUNXXSXPCMVQR");

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
    msg.setTimeStamp(0.608482158242);
    msg.setSource(27554U);
    msg.setSourceEntity(141U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(46U);
    msg.timeout = 12717U;
    msg.rpm = 0.774661905481;
    msg.direction = 106U;
    msg.custom.assign("LUXBOIJGWTWFYGNCIDHKWCANCFYDVJXATRFLUOLTPWUKZBTHQHHIYFOYTNOHQNWWRGKASGRNZYKMDJOJOFLDYCGNDNUSJZVRWAFGCQXOZSCNZCAXBICXEIXHSBQREHYLATGEDGEAUINOXSTKADPUKFTPODVLZBNMBPJKJ");

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
    msg.setTimeStamp(0.954317351918);
    msg.setSource(48299U);
    msg.setSourceEntity(65U);
    msg.setDestination(2545U);
    msg.setDestinationEntity(107U);
    msg.timeout = 23568U;
    msg.rpm = 0.119893370006;
    msg.direction = 125U;
    msg.custom.assign("FHJWBECPNYTEFLMXESUNSOKCKTMUZUOIGKGPVVZRUYNIDDUAATOTMFWINDJFDYSMBHEEZOBJPXBYGAWVTHZPGEFUPYTMDMGUSWVAOQHQCQLMTCBTODJSMQLQVJINZEUOQGJWDANKCWWLAIBQRHEUAOWOXUHJLRZZTYNKXIYGBRPCLFRGPMHRYARIDVHQPWSLSNHYWLXR");

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
    msg.setTimeStamp(0.117423773492);
    msg.setSource(56504U);
    msg.setSourceEntity(145U);
    msg.setDestination(39144U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("HNFPMRQFEBRIPKKNFDDWCRAWUHEKRYEVXADGZFYOCNZFKJMLGBWUQDXXOAJWDCZRGQGKHAXTJVUMACQLLSHVYOKHDERV");
    msg.type = 239U;
    msg.op = 229U;
    msg.group_name.assign("NDUJIXYLZOKBPPQWVIOWJTOCAGYSWM");
    msg.plan_id.assign("CXIMZRHWTOXGSLEKSRKPXRJPSENLZXAVYWIYEBBZYWYDTMTIBADVPDUATIMJHPREQXPTPBCAHVSKCWREYQWBHQMMIXPTEBHELEUPLZTFAJCOGCCRCGOYJNTBJUFFKNWGBAUNQPHMNNFLWVYMTMODDKAIOCQAKUDDNGGIUXKVJWZKURJDNVRIQLZQNBOQCRXGHNKFMMPSJUGCDOZKTLZILSLOX");
    msg.description.assign("UTUQWHMVTVHHTEFXCYPVGTODELEEYGTEYHJDPMOCJIRBTJBYXJCHDGCCSFIQXSISVSILUMYFBBEZNZFZODZQNALIXPLXZGOZYPNAXKDIVRHCELAASCUZZMUOYBHAKNSKAMKWOVGMDVPFNLRLYFLZWKNAKOENDQKPWSCSWXJBRHNATQSCROKSIMQBPVJNBDMUJUUCBGWGXHFOKYRORWTPRKRIGYVLWUAMQXLM");
    msg.reference_frame = 39U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10146U;
    tmp_msg_0.off_x = 0.748730731978;
    tmp_msg_0.off_y = 0.746537958709;
    tmp_msg_0.off_z = 0.312139637047;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.381756419405;
    msg.leader_speed_min = 0.725350724422;
    msg.leader_speed_max = 0.843162467967;
    msg.leader_alt_min = 0.13285841069;
    msg.leader_alt_max = 0.953521566141;
    msg.pos_sim_err_lim = 0.684596749897;
    msg.pos_sim_err_wrn = 0.970119947786;
    msg.pos_sim_err_timeout = 56260U;
    msg.converg_max = 0.812178878262;
    msg.converg_timeout = 29831U;
    msg.comms_timeout = 13102U;
    msg.turb_lim = 0.4101046302;
    msg.custom.assign("VWPKFMHDRJJQZBEUURAOMJBLRNEENJGBEHCVMCVZGTPSXGCQQBMUOLBAWPGFG");

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
    msg.setTimeStamp(0.987641851237);
    msg.setSource(43111U);
    msg.setSourceEntity(191U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("PWRLUEWMNKAFICIALQPAHSMVZCSJQCEBSGCLMFCAPPGHXXPWGYSTONPWHQVKLYJBEFCFIFBRDENYFJLDFKEEXAQOYZVMVHURVZGNYHTIGMLWRYNMERBDCVKCOMJXHWLTYUBZMKBTFJXVXUXMUOOFTUTUXS");
    msg.type = 64U;
    msg.op = 161U;
    msg.group_name.assign("RALNDMKNYHCMIUMBKHSXRSSDYNIFOTYRBAGZTWGHGVJAQQVPAYJOERXDITLHCPAKQWYCPPEEJDFUOGQXWCBRJSQNBJGLYJELTOJVRFIIDVTGZRUVYTSTVEEHSAUWUXZJGBGHKKWWVBOKLHUCEFGMXHNGDPQNKDQCYWALZMZEMNLFZLICPUQWWIDHBXNNUVTBHUPOZKABVSZDM");
    msg.plan_id.assign("LZJAKQBIHFEYIOEZXZLCFIYHHKRLSBJMEOAKJUYOWIVKXLDST");
    msg.description.assign("ERASLDQYCSSREODPROZBGHKYAHHWTUJFJLZPVDC");
    msg.reference_frame = 100U;
    msg.leader_bank_lim = 0.865889406079;
    msg.leader_speed_min = 0.0725421900717;
    msg.leader_speed_max = 0.95494867546;
    msg.leader_alt_min = 0.236362103287;
    msg.leader_alt_max = 0.951367313881;
    msg.pos_sim_err_lim = 0.117678763124;
    msg.pos_sim_err_wrn = 0.781301094214;
    msg.pos_sim_err_timeout = 65235U;
    msg.converg_max = 0.380757857094;
    msg.converg_timeout = 32339U;
    msg.comms_timeout = 40546U;
    msg.turb_lim = 0.922674447584;
    msg.custom.assign("KYITRCGUUVRKEOJAMFZFYKVAWVIGKGLEZSCZPTEZUDZTXFNBHAMUHLMTTBSUTXMUPGLOVGNATZJURRHGFKLYDIBNCBPWABQUIREJKTLYOTQLJFQYSROVSCODJQMPQDVPQBWZPNUFWIVQLMWKNFMKLKXCRSYYLDZQHCHBVIMWPWPXAYBDCSAMHVO");

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
    msg.setTimeStamp(0.0394956834508);
    msg.setSource(40180U);
    msg.setSourceEntity(211U);
    msg.setDestination(10181U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("SUTYUHAUIEPWCOPJLVCWXBV");
    msg.type = 81U;
    msg.op = 50U;
    msg.group_name.assign("ATINCMDBUOUCSXVRLBZSOIHONBWHXREHEYQUQXOCGNEKHZMYLRXGQVFVULGUWPRKUEEQALRRHIJCNJVDIAFBLKYSIUOSZHJNIDVWBOKGKTCLAMWITPPQWTKTGSCZOQFBGYMRVAUXASCEGVYXPPNAZVLKYFFMZMQKSJDGAMCQDXVWYFXEBNLTRXHEFZSKNJBWZRJITZTPMXEJ");
    msg.plan_id.assign("LQVCDTFGJDNLOFFSHNDYIQGMJMOMYGYOKDCRIXUFNZDOQWUZKRYMDXFEOYESTASCCYRDPQM");
    msg.description.assign("BJVBCQZFNXIEFFTAWBLPTTGNWJAUUKASULDMZMZFITHSLMKCQCGAQRWMPRUWEKHSERNGHHTMZAQPAYIAOSBJVHEFUGJCL");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38425U;
    tmp_msg_0.off_x = 0.866884856125;
    tmp_msg_0.off_y = 0.788574883439;
    tmp_msg_0.off_z = 0.246624375194;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.99977865708;
    msg.leader_speed_min = 0.0827386952984;
    msg.leader_speed_max = 0.260275179947;
    msg.leader_alt_min = 0.406119951991;
    msg.leader_alt_max = 0.155111343355;
    msg.pos_sim_err_lim = 0.788270919829;
    msg.pos_sim_err_wrn = 0.822680984945;
    msg.pos_sim_err_timeout = 23101U;
    msg.converg_max = 0.834910733684;
    msg.converg_timeout = 13507U;
    msg.comms_timeout = 2258U;
    msg.turb_lim = 0.818196069403;
    msg.custom.assign("VBTRGTKRITNBYUYAOFCJPZYKRZWESPVAFLLPGBHCZUSOIYXRIAKFAXNPOXSGUZF");

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
    msg.setTimeStamp(0.14406858715);
    msg.setSource(44809U);
    msg.setSourceEntity(243U);
    msg.setDestination(44381U);
    msg.setDestinationEntity(83U);
    msg.timeout = 46897U;
    msg.lat = 0.169644092461;
    msg.lon = 0.750669444172;
    msg.z = 0.258755150217;
    msg.z_units = 57U;
    msg.speed = 0.0664875954968;
    msg.speed_units = 177U;
    msg.custom.assign("MKESXMBYGBAENZWIAKMNXJRQTPPOOHICUDGJRQVENQWXCAZVAZBJWSPBYVFHRMDETEHITBMZUGL");

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
    msg.setTimeStamp(0.234543221213);
    msg.setSource(19872U);
    msg.setSourceEntity(202U);
    msg.setDestination(18025U);
    msg.setDestinationEntity(63U);
    msg.timeout = 50577U;
    msg.lat = 0.678356116432;
    msg.lon = 0.0894756440614;
    msg.z = 0.588419958625;
    msg.z_units = 92U;
    msg.speed = 0.266982660624;
    msg.speed_units = 163U;
    msg.custom.assign("XNDLRKFQCSASZASWHDJMYNGPEODRJDAPODYGCEVIZIATWPLORTNHGQOAVIUKMTTRQWNEFFBKQXFHQCPJNHUIBGXBYGQEHMLDHGYZMRIWWXTUNZOWGBQAUQAHLYEJSSVAUNOQUVMCHCCBGNZSXJBXZNUUPCEKFFKXAMIYSJRNZRDMMPILXSHHJMVYWADUKOTOFZWIKEWLDRTPUSVK");

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
    msg.setTimeStamp(0.435350233103);
    msg.setSource(58998U);
    msg.setSourceEntity(87U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(196U);
    msg.timeout = 8345U;
    msg.lat = 0.2232212211;
    msg.lon = 0.870772297322;
    msg.z = 0.672518918188;
    msg.z_units = 120U;
    msg.speed = 0.988152280049;
    msg.speed_units = 168U;
    msg.custom.assign("ARFUXSHIHXTYJQLBRIUVYUNLDGOALNPJUATQTMTKCVJUJFBPMMMSVNVAWEOETXQPDCMFWTHQSZYPXITKCFHYZWWZDDVQWIMJVIQMXEHLVSAULPNGEEUZCGYWDUYDWOEFQTTROQIOTCBSKDCACIACJYXECYJFNXGBGIAWJXNFBGXOOWOLRGLRIWEPBGZVPEXRYFAUISKSJCKMKBRZVAHFVRMKLHBBMZKPDDLNHRQOJZYDBZNN");

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
    msg.setTimeStamp(0.139186688566);
    msg.setSource(38564U);
    msg.setSourceEntity(212U);
    msg.setDestination(35235U);
    msg.setDestinationEntity(193U);
    msg.timeout = 40845U;
    msg.lat = 0.0188306154106;
    msg.lon = 0.853257930041;
    msg.z = 0.507341779371;
    msg.z_units = 35U;
    msg.speed = 0.057290306241;
    msg.speed_units = 66U;
    msg.custom.assign("NCXTAZIDMKMBIHNFWUVMVGPQHOBCYIOZVFJOEWCLTVJRYUEEVNVDBJQARIHGWDNCTVNYEDMDWBFBPSLXQMHPHNAYZFKNWZHZMCQTFCRD");

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
    msg.setTimeStamp(0.571246557128);
    msg.setSource(50041U);
    msg.setSourceEntity(118U);
    msg.setDestination(39498U);
    msg.setDestinationEntity(213U);
    msg.timeout = 5999U;
    msg.lat = 0.0768288108533;
    msg.lon = 0.000362448083046;
    msg.z = 0.78416740191;
    msg.z_units = 115U;
    msg.speed = 0.120635199141;
    msg.speed_units = 214U;
    msg.custom.assign("HYHCNIGPLDZRGBTE");

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
    msg.setTimeStamp(0.702672698798);
    msg.setSource(1133U);
    msg.setSourceEntity(48U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(244U);
    msg.timeout = 59207U;
    msg.lat = 0.56071417205;
    msg.lon = 0.435740663626;
    msg.z = 0.0570786069097;
    msg.z_units = 160U;
    msg.speed = 0.972161147646;
    msg.speed_units = 159U;
    msg.custom.assign("DZXUHOVDTTOKPZGCJQMPNNHOHKBWCLASEYZIJSLNCSERUUDANNLNCCWWDFVGKDTKXNIRKTJGHPJQMRHPLFNJZKTAWCBZRMXFTMXSVSJLHIMUTTWQXYDSZGLZWZRBMRBFLGOAXFOKFPIMODFPUYQUIDTHGOACCNGBAPBOFJRVJHGZDSIYTHGEEBBQQBRJEUPIVKNYMVRUCVAEXLYQZRWKSL");

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
    msg.setTimeStamp(0.2337519238);
    msg.setSource(11161U);
    msg.setSourceEntity(242U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(153U);
    msg.arrival_time = 0.910364842345;
    msg.lat = 0.82621186751;
    msg.lon = 0.317422801385;
    msg.z = 0.720804970802;
    msg.z_units = 192U;
    msg.travel_z = 0.362125326297;
    msg.travel_z_units = 202U;
    msg.delayed = 130U;

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
    msg.setTimeStamp(0.883419725927);
    msg.setSource(16046U);
    msg.setSourceEntity(57U);
    msg.setDestination(46329U);
    msg.setDestinationEntity(216U);
    msg.arrival_time = 0.58829673265;
    msg.lat = 0.376033481834;
    msg.lon = 0.980608350949;
    msg.z = 0.0218035767086;
    msg.z_units = 28U;
    msg.travel_z = 0.962029409843;
    msg.travel_z_units = 182U;
    msg.delayed = 215U;

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
    msg.setTimeStamp(0.00491888788325);
    msg.setSource(60958U);
    msg.setSourceEntity(137U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(73U);
    msg.arrival_time = 0.265251939001;
    msg.lat = 0.93060104799;
    msg.lon = 0.738680960302;
    msg.z = 0.57712026653;
    msg.z_units = 58U;
    msg.travel_z = 0.121161722992;
    msg.travel_z_units = 83U;
    msg.delayed = 20U;

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
    msg.setTimeStamp(0.599984525236);
    msg.setSource(44862U);
    msg.setSourceEntity(176U);
    msg.setDestination(60829U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.8082233152;
    msg.lon = 0.205779970793;
    msg.z = 0.346957484518;
    msg.z_units = 85U;
    msg.speed = 0.348144455002;
    msg.speed_units = 238U;
    msg.bearing = 0.724146752133;
    msg.cross_angle = 0.732871316716;
    msg.width = 0.762938417312;
    msg.length = 0.97140904528;
    msg.coff = 235U;
    msg.angaperture = 0.770429398699;
    msg.range = 32964U;
    msg.overlap = 112U;
    msg.flags = 8U;
    msg.custom.assign("IMEVTMPUMRCZDWFIUPGQTDHJTGAIHMTGNDRVZBTTTOCOJJZLEABMQFSYDUAVCPJGZJBNZYSCXDHSJEHEKZRHQWR");

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
    msg.setTimeStamp(0.10463446906);
    msg.setSource(2277U);
    msg.setSourceEntity(57U);
    msg.setDestination(26810U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.282844491914;
    msg.lon = 0.459511590143;
    msg.z = 0.0848308811658;
    msg.z_units = 175U;
    msg.speed = 0.686116789812;
    msg.speed_units = 77U;
    msg.bearing = 0.371494663309;
    msg.cross_angle = 0.154436474195;
    msg.width = 0.136818164915;
    msg.length = 0.825115286449;
    msg.coff = 172U;
    msg.angaperture = 0.171517675426;
    msg.range = 39273U;
    msg.overlap = 29U;
    msg.flags = 111U;
    msg.custom.assign("RTJOIIWYCOKHNHCMKREUBPQMOFWHAIGMPHSHLQSYEBATWONWOGIAYZBQDTPGYUCIFVQKBFDPWOPZJLJGDQXCJNDCYKRFRIKTLMYPSGKOXLTNOPUROWFWNSYJXGGMWHVDZYUDUAAZQVBGUXIRGMMBZLXVNZATXPSJIYTVMFAECUTFQZE");

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
    msg.setTimeStamp(0.748501512976);
    msg.setSource(48179U);
    msg.setSourceEntity(46U);
    msg.setDestination(29382U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.716092047059;
    msg.lon = 0.725322945004;
    msg.z = 0.316369531704;
    msg.z_units = 214U;
    msg.speed = 0.349587993292;
    msg.speed_units = 134U;
    msg.bearing = 0.0323355490778;
    msg.cross_angle = 0.824577602177;
    msg.width = 0.88640897587;
    msg.length = 0.586835111673;
    msg.coff = 182U;
    msg.angaperture = 0.734346885415;
    msg.range = 19258U;
    msg.overlap = 69U;
    msg.flags = 202U;
    msg.custom.assign("WBCWGMTIDYCUDBDERSKBESAWMSKVGAHLTXWOOYHGCRIAYSPVGKRTFNPNIXCRCEFJQKUBRXMRHZQKDYJAVVOOITMASIJKRSNJIJNLWTCTSDOFPUPVXNDHYELMOINBKLJJXEUGFRFUFTVQQBXZYKEPDCOQOATNYPACLNILHPOFBSKFHJHOPBSULWMZUUDHCWEFDMRXVQAMNZXATHUSAKXNYQZPGYWGL");

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
    msg.setTimeStamp(0.65487410528);
    msg.setSource(29621U);
    msg.setSourceEntity(78U);
    msg.setDestination(1731U);
    msg.setDestinationEntity(36U);
    msg.timeout = 57361U;
    msg.lat = 0.759521459953;
    msg.lon = 0.0836893714105;
    msg.z = 0.31343502956;
    msg.z_units = 173U;
    msg.speed = 0.469126434263;
    msg.speed_units = 234U;
    msg.syringe0 = 25U;
    msg.syringe1 = 213U;
    msg.syringe2 = 200U;
    msg.custom.assign("SVRUZKYKDSFJPRTKYZKFPHYDLIQBUQHMAHWZJPLQ");

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
    msg.setTimeStamp(0.13497099695);
    msg.setSource(48893U);
    msg.setSourceEntity(14U);
    msg.setDestination(13150U);
    msg.setDestinationEntity(85U);
    msg.timeout = 23189U;
    msg.lat = 0.198028068001;
    msg.lon = 0.729813279171;
    msg.z = 0.724545984836;
    msg.z_units = 87U;
    msg.speed = 0.314597074771;
    msg.speed_units = 126U;
    msg.syringe0 = 5U;
    msg.syringe1 = 241U;
    msg.syringe2 = 243U;
    msg.custom.assign("TFQSCBIXZFQUEULZNPHGMPAETAMGNZNWGVNIZINPGBAGVCDGFOUJRWKHAHVFJLERPVFIVUEIUMVDNQXYOJLZLBKALRZNLIYLKEPRCHSTQYHDKTTJRCKRNMTPDOVYOIXWCKDAJFINTWWCJXAQKZDSJYGJKMABMEVEPPGOGSWITBLSWURRHQSFMOYQXUHZFWJNZBAPBDQEXUOTKADQROQMBSVDLYLOSGYHUSOYJMCFCDEBXXRHXBYWTWSVICMZC");

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
    msg.setTimeStamp(0.861981078823);
    msg.setSource(48966U);
    msg.setSourceEntity(4U);
    msg.setDestination(15576U);
    msg.setDestinationEntity(83U);
    msg.timeout = 14184U;
    msg.lat = 0.215006820503;
    msg.lon = 0.979302667127;
    msg.z = 0.828527459008;
    msg.z_units = 103U;
    msg.speed = 0.906713311954;
    msg.speed_units = 43U;
    msg.syringe0 = 104U;
    msg.syringe1 = 226U;
    msg.syringe2 = 222U;
    msg.custom.assign("IQOPXHYXKIXBEMEPWZVIUPYOGOFMALEETPHJCCLOSBIGECYVMSSXUFKPZSDRPXYFMZRXVKZTNJBSOTTZMGYGMWRLWSLGNXJSUXQHLKDJAHBZHAQINFWRKVFLOJVOADHRZDETDBPTWDMVRGEJLVDZQCWRJULQHKAIYTIXVLANJMTKH");

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
    msg.setTimeStamp(0.634660300608);
    msg.setSource(4334U);
    msg.setSourceEntity(209U);
    msg.setDestination(18752U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.124407188072);
    msg.setSource(48081U);
    msg.setSourceEntity(78U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.950029757114);
    msg.setSource(5585U);
    msg.setSourceEntity(37U);
    msg.setDestination(10577U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.523391083892);
    msg.setSource(22095U);
    msg.setSourceEntity(133U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.192947763619;
    msg.lon = 0.979385189757;
    msg.z = 0.0997362404837;
    msg.z_units = 145U;
    msg.speed = 0.302025588048;
    msg.speed_units = 111U;
    msg.takeoff_pitch = 0.2185936338;
    msg.custom.assign("KOXNLJIWPHUMGVFRXICIGGUBCJKAQSNMYNQDYNMDAAESEFSOAADXNMPKOQLBSYIYHQDKFGBRBWJLVJJJYIDEMIFNTWZICNNHWOEJZNPMFRWGZRWMB");

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
    msg.setTimeStamp(0.909675114478);
    msg.setSource(25288U);
    msg.setSourceEntity(91U);
    msg.setDestination(16087U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.145172701701;
    msg.lon = 0.297204890922;
    msg.z = 0.796438558532;
    msg.z_units = 223U;
    msg.speed = 0.067884010188;
    msg.speed_units = 41U;
    msg.takeoff_pitch = 0.552759696474;
    msg.custom.assign("HAHSVABPXMRIRFFYRLWWZMAQHGYJFKICBGUKDEWKNTTVOQHHIXHAMLGJOYDEZAIDQNBSJJRQERGKDJTCXVEHOWJYANGKWOGTQIMNPDFQFUMDBQWFWAWTBCVMLXCHHV");

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
    msg.setTimeStamp(0.0653478401579);
    msg.setSource(56243U);
    msg.setSourceEntity(215U);
    msg.setDestination(17733U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.139161453696;
    msg.lon = 0.4848995371;
    msg.z = 0.0768184134488;
    msg.z_units = 197U;
    msg.speed = 0.0534438358559;
    msg.speed_units = 50U;
    msg.takeoff_pitch = 0.909286172676;
    msg.custom.assign("WIOTCQDWQDSSYGRPTDAYPXCOBDIOARWHMJLNCXURHMMKSYULHCIXOHOQKBNZVPWUZYJWYPPEBAUIEWYNJTRIFOBKJXCUICGMGBJXRIDNSCXZLVKAWDFGSFEAVTWHXFJLHOVNSPQQANPHMBTIFRSB");

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
    msg.setTimeStamp(0.433309756033);
    msg.setSource(1102U);
    msg.setSourceEntity(21U);
    msg.setDestination(50528U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.677719975071;
    msg.lon = 0.582664090566;
    msg.z = 0.180648497667;
    msg.z_units = 89U;
    msg.speed = 0.472450904796;
    msg.speed_units = 63U;
    msg.abort_z = 0.642678744103;
    msg.bearing = 0.964463074319;
    msg.glide_slope = 249U;
    msg.glide_slope_alt = 0.727094126138;
    msg.custom.assign("DAYXTTDRICCSNNSLYJUQAQXSFFTBTEIWDNMCRNZZWTKXJABLABHQAYFPDDUXXPEKFIXURPZWZMHWGVMCNCKHWOBADHJATLLBGLNLBCRRZPRJPOLFSGOVMRQLQGXVISZGZEJQCAMRGBJYDAVOSIIARZIEBMXKWXGFFHFCMNBEVNMROPTUUEHFVYKP");

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
    msg.setTimeStamp(0.639817902417);
    msg.setSource(40233U);
    msg.setSourceEntity(160U);
    msg.setDestination(4363U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.358145127747;
    msg.lon = 0.699353036838;
    msg.z = 0.397687128944;
    msg.z_units = 144U;
    msg.speed = 0.174535266536;
    msg.speed_units = 111U;
    msg.abort_z = 0.45698439664;
    msg.bearing = 0.228972388609;
    msg.glide_slope = 40U;
    msg.glide_slope_alt = 0.225864163601;
    msg.custom.assign("SHUHDZNYKNPYTTDZATCVLGQUOXZMUERBASMKWCOFMDSTJHRAFHLKLJDWRZOGLFCVSLMEPZCGPIPBQHVMGAHOUQPOEIXNSRTQXMAJYKXFGUWBKFOOKPVMVNUZSRTGL");

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
    msg.setTimeStamp(0.741951158241);
    msg.setSource(24922U);
    msg.setSourceEntity(211U);
    msg.setDestination(41866U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.695985267194;
    msg.lon = 0.803352831429;
    msg.z = 0.802497650213;
    msg.z_units = 129U;
    msg.speed = 0.919728004569;
    msg.speed_units = 157U;
    msg.abort_z = 0.973772504581;
    msg.bearing = 0.431586306892;
    msg.glide_slope = 32U;
    msg.glide_slope_alt = 0.950974924959;
    msg.custom.assign("HJINSEEQAAURLGVUYRBPNWWELHNDMZNOJLQHVBKCGTIDIUXUMTKIZGZAPCYYVAQZLYPRHQMLKQJPCALIBKQWYBFFKZNUIMOEJAZZCUCWRTRSKFBHGRAXWHJMIZVSJRDVVEOLOBWRMCTIF");

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
    msg.setTimeStamp(0.366673677096);
    msg.setSource(37138U);
    msg.setSourceEntity(12U);
    msg.setDestination(65068U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.100514842633;
    msg.lon = 0.752160047797;
    msg.speed = 0.412157418813;
    msg.speed_units = 238U;
    msg.limits = 241U;
    msg.max_depth = 0.579099880338;
    msg.min_alt = 0.751488030549;
    msg.time_limit = 0.738874239423;
    msg.controller.assign("IQORRFMRDVESWOSYZFMUDKHHZJXEROYFJAQOQUQHQVQEVAUVZBIVEEGBTMBWPWMDORWEVIZJHFWCLXRMNCJBNTXMKMLIYSGFQWHPHELXZUZOPKBBLHPKGSNBPAHWFABQRLKUDFXSBTZIUFXHIPALUAGKIVTRVDUEKSNDTQYPAWMJCOFPUTTLCNNV");
    msg.custom.assign("NXSZLIJDKHOYKLHPILFGBYDHYQUFADFYRPKBCMHY");

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
    msg.setTimeStamp(0.644329045435);
    msg.setSource(37221U);
    msg.setSourceEntity(207U);
    msg.setDestination(64917U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.629781333595;
    msg.lon = 0.128768709174;
    msg.speed = 0.539556333695;
    msg.speed_units = 4U;
    msg.limits = 157U;
    msg.max_depth = 0.610425395605;
    msg.min_alt = 0.988599408456;
    msg.time_limit = 0.382047982641;
    msg.controller.assign("SFBLQIHXYIXACYKFSDBHOQNWCIWPZCBTRNMQOHXMRBPHSBKQFPYDZMTYYWESQJOKGGNNSPXAIPAVZEGERBUEYDOZHFZIKVQSFXNKKUNEMPOHYVCGGEFMMHZWVJOTVJSMGWUDKHROJWMTUXDCIQBHRMFEIOVIHNUJLNURLXZVLAALFCJZNCIDTEWVCPEMBUSPSOTCBBXDULLAWYXTVJPXQADJPKUZRGJQVCFFAKNYLWD");
    msg.custom.assign("RYKBVLPWSKKEOCBUS");

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
    msg.setTimeStamp(0.843646014469);
    msg.setSource(58971U);
    msg.setSourceEntity(224U);
    msg.setDestination(49298U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.388245100819;
    msg.lon = 0.399877831919;
    msg.speed = 0.778779595874;
    msg.speed_units = 164U;
    msg.limits = 104U;
    msg.max_depth = 0.592983897555;
    msg.min_alt = 0.802976482536;
    msg.time_limit = 0.0989538198442;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.604026618724;
    tmp_msg_0.lon = 0.50724727749;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ASBARGGRLVTCFF");
    msg.custom.assign("YBJZWNKFGUSJLIASAZMSIMHASGGMTCLZDD");

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
    msg.setTimeStamp(0.152104602307);
    msg.setSource(29642U);
    msg.setSourceEntity(216U);
    msg.setDestination(9771U);
    msg.setDestinationEntity(244U);
    msg.target.assign("PUKKHYUGSVCUEFENQLBWCJFBAFENSKN");
    msg.max_speed = 0.423436019499;
    msg.speed_units = 47U;
    msg.lat = 0.608417043612;
    msg.lon = 0.684531643851;
    msg.z = 0.987182963738;
    msg.z_units = 13U;
    msg.custom.assign("ZNPEEUVVRUZUIXXROLKMATLAQCAUKUQBKCOTYUZCFMGJWWXOHNLMYGLHDEXDTUSPGCLLYBQMNBYYPFEJWKBDFTZJOYGDBIPHSKPGAJVRAJTVSRTRHEWSPNBEKZFGGWSWWESSHTKXWNZCQCMN");

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
    msg.setTimeStamp(0.585655040538);
    msg.setSource(12681U);
    msg.setSourceEntity(61U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(123U);
    msg.target.assign("QZSCHYTOPLFKKMFBWASNYEQMBQSZEVHSNDQSUOYPFRUDGPPJFCY");
    msg.max_speed = 0.290939749701;
    msg.speed_units = 68U;
    msg.lat = 0.0236318214312;
    msg.lon = 0.74751643115;
    msg.z = 0.63383782801;
    msg.z_units = 116U;
    msg.custom.assign("PCTXWQSMPLSJKEKHDOIVCYRFNGAYSDZUNGUUEQOHIAGBECWITOMONRBARCJVKQWWBGRZJVURUHSIEMDFFNDUMYQWIIOTSRBQX");

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
    msg.setTimeStamp(0.0380343020682);
    msg.setSource(12813U);
    msg.setSourceEntity(251U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(136U);
    msg.target.assign("SUIZCJTVVAXWRFVCAGQRPHWUPY");
    msg.max_speed = 0.632874273566;
    msg.speed_units = 203U;
    msg.lat = 0.0454258647965;
    msg.lon = 0.35702018081;
    msg.z = 0.161946876887;
    msg.z_units = 75U;
    msg.custom.assign("TKDTIFWGQABVVXIOLFLRPKSNDBGZOKVFNXUJBBRYUNKGXLSSJGOAGCNKEDXACMGDJCHWDMOAMFMOHXMVVKNMVOCQGEYCOCJYKNDYNPUOARFZWWRNGSHEUYTLXCLSYIMRTEDXXGPQWAEDVZAUVQIUJYFLEVJRAQQWZNWPUEZCPSITERZLDPEPKIXJHPTFPFIGDLHHWOKL");

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
    msg.setTimeStamp(0.165099519338);
    msg.setSource(16732U);
    msg.setSourceEntity(135U);
    msg.setDestination(30182U);
    msg.setDestinationEntity(221U);
    msg.timeout = 39507U;
    msg.lat = 0.268390552824;
    msg.lon = 0.226724152662;
    msg.speed = 0.87599993911;
    msg.speed_units = 145U;
    msg.custom.assign("GNWYBOOGNJUJKBMKDGAOTMVCSBPSFCVNSKEIFIYOIXUFQHEXULIEZLHRLUTCVJXVSAYAKIHLQLHW");

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
    msg.setTimeStamp(0.178661252715);
    msg.setSource(53605U);
    msg.setSourceEntity(132U);
    msg.setDestination(42898U);
    msg.setDestinationEntity(140U);
    msg.timeout = 6439U;
    msg.lat = 0.165521778168;
    msg.lon = 0.0589607272859;
    msg.speed = 0.426688404337;
    msg.speed_units = 222U;
    msg.custom.assign("CEKARNYNZQQFGUYFKRHNXOELPJGCJIXYALBUZWSGJFHUTIQICNFPTLPJQTCLEBOMWDMJLERGXIHCVOKOMEVXJXOMBOENSHKBKWTQDDZXFUQPTKCWSKNSRLYCYZDUTHP");

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
    msg.setTimeStamp(0.371273974332);
    msg.setSource(23939U);
    msg.setSourceEntity(180U);
    msg.setDestination(23633U);
    msg.setDestinationEntity(201U);
    msg.timeout = 10733U;
    msg.lat = 0.252809681942;
    msg.lon = 0.972608373858;
    msg.speed = 0.36018923354;
    msg.speed_units = 223U;
    msg.custom.assign("JEKJJBCIKTMGIVYTDGGHBXHIRVNUYVPTSFIXSWULZIKOTKYMJMKYLBERDAFVUNSVDIQTBMNZWXYZTUJYBFPLRGGLPUOQMCLSHJUIATLAEGSYOKT");

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
    msg.setTimeStamp(0.651053751069);
    msg.setSource(59812U);
    msg.setSourceEntity(94U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.564651181424;
    msg.lon = 0.00842611593384;
    msg.z = 0.198889571589;
    msg.z_units = 45U;
    msg.radius = 0.409909154826;
    msg.duration = 40460U;
    msg.speed = 0.973379151477;
    msg.speed_units = 158U;
    msg.popup_period = 18942U;
    msg.popup_duration = 29080U;
    msg.flags = 201U;
    msg.custom.assign("BNNLMYRBSZEHKWHYDHYGLBHFDRGBECPVVEYVATNSFEMUVHNVDCDZZGCJSJYTSUUQUSKIAQGQMPCUDNYWGSKCOZBTODPMMPLYARYBVCULLEFYJEVSDBFVCZDATQETWJGEJXHQINWROKQMXGBASIROPPJXLOZQQUZLJAGELMKXOXFAPVLPKDTOMNTSQLOFR");

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
    msg.setTimeStamp(0.402636627421);
    msg.setSource(32348U);
    msg.setSourceEntity(102U);
    msg.setDestination(6237U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.185133038955;
    msg.lon = 0.481495567728;
    msg.z = 0.587197820194;
    msg.z_units = 74U;
    msg.radius = 0.226788867071;
    msg.duration = 54423U;
    msg.speed = 0.895704135141;
    msg.speed_units = 199U;
    msg.popup_period = 44189U;
    msg.popup_duration = 50094U;
    msg.flags = 193U;
    msg.custom.assign("QUHHKGPDDACTXOVQLEUICCFFXQEXBDGSYERSGDMQWD");

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
    msg.setTimeStamp(0.805441937138);
    msg.setSource(23489U);
    msg.setSourceEntity(160U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.0356844180264;
    msg.lon = 0.881653379965;
    msg.z = 0.741134733473;
    msg.z_units = 26U;
    msg.radius = 0.676719108175;
    msg.duration = 48420U;
    msg.speed = 0.676562989934;
    msg.speed_units = 21U;
    msg.popup_period = 5991U;
    msg.popup_duration = 51296U;
    msg.flags = 45U;
    msg.custom.assign("FLAUSPERVYGZVIMHTDUIXWLEEEXRLWQMAQLTBYGUIDOLWPQTGHUYUQZRIUXNNGFDAFQGGXOTRWVUMWZFFBTPDJHNLPKXSAJJINRYDRCHHIFMDBBRKAWMRGBOVNPCLBVOYLWJBCEDPLCOMMHRZKDJGCPRNATCAKXQSCSZIYKKYPZUFSSJQVKOAJOGSEEBDSOMGMYIXHJHQKLHIPTZWOQCBSTXWCTYBCV");

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
    msg.setTimeStamp(0.83557749514);
    msg.setSource(8263U);
    msg.setSourceEntity(133U);
    msg.setDestination(22842U);
    msg.setDestinationEntity(145U);
    msg.op_mode = 73U;
    msg.error_count = 3U;
    msg.error_ents.assign("UZFNQUAMAPIPMYIRUIOSZPPOBIOALRMYKXIOSGDYSVZHTMURZWEPMVEJCJBAFJQZTYPPFQXKCRLXIWWMAGKMPXWTPKSFDKXARKGXYLFRZCQDAQHGLUEBUBVLVOIYEPVNVSOLYJHEXBQJIQDUEYRXJGFLCFKQFYAKSGUKDLDGWWXETIBZANGQGVTGOCSQCWJDEHHNHUWZZSNEHVDXREOJLTBMCJDTSHRVCDFBWH");
    msg.maneuver_type = 49287U;
    msg.maneuver_stime = 0.274031385447;
    msg.maneuver_eta = 17349U;
    msg.control_loops = 2127073628U;
    msg.flags = 197U;
    msg.last_error.assign("WNYIZKZPMQSYNGFVMDJKFZAPMXHMUZOCZIZALHJAIWRFJYKODTSZWITOGECONJVOASBEDWXLQCFGTPHIFELLWXUYFNITVGZKLCOTCXQUNTJSXUPJNUZGEXRHVKAEMNLTIQYWYBDPYTERNCJBESWAKKGLMWDBJLMBEVMSXJPAHXKS");
    msg.last_error_time = 0.83047105837;

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
    msg.setTimeStamp(0.28854490376);
    msg.setSource(17347U);
    msg.setSourceEntity(164U);
    msg.setDestination(45155U);
    msg.setDestinationEntity(220U);
    msg.op_mode = 0U;
    msg.error_count = 17U;
    msg.error_ents.assign("KIFOSFWDKYTRQNLGTVMACRQUVJRCSFHPWPCOTZDNLBOODQXVFJESCIJJLYEBDJIPXZLISMBNIPEUFXGCTNYFTQMRQXGQEYBRSQZAZOGLYOAVRHUROSTLHJKCUSXMULETZWWFNCITAVOOKKILLNXDTVXBCYWKCEBZUNBMFFDAXNSYGZMGYYJUKWKJABOA");
    msg.maneuver_type = 44875U;
    msg.maneuver_stime = 0.281906530799;
    msg.maneuver_eta = 43899U;
    msg.control_loops = 264267166U;
    msg.flags = 165U;
    msg.last_error.assign("AYXWDZALIRUJVWTTVKSXCIDZOQBJNEZXIMCPISLBGIKDDCHSEBFMPTRIKHDOPNZTFBGJNVXIIGODOFMPJJQHDHFYTCMWGEYFYZTYDAQSNS");
    msg.last_error_time = 0.274487731296;

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
    msg.setTimeStamp(0.744474130164);
    msg.setSource(6430U);
    msg.setSourceEntity(68U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(155U);
    msg.op_mode = 168U;
    msg.error_count = 203U;
    msg.error_ents.assign("ZCABHJMXQOPRSHKXGADDDSCRJTTXOTBVTSIWDSSYXYYAYILKUMZVQEEJPUCKAPHLUKNDSWONUDNKGBCVBWMTFWPIEATVKXCIYUSHWOXBYPAGNGINIDRQLIGWVMLOLWWFQO");
    msg.maneuver_type = 26728U;
    msg.maneuver_stime = 0.119834858035;
    msg.maneuver_eta = 57210U;
    msg.control_loops = 1960951619U;
    msg.flags = 130U;
    msg.last_error.assign("IFTXYQZTJBKNLFHURVKYFZGWNMKPTTPJZQDYJZETVKEDLNXCFX");
    msg.last_error_time = 0.673553401838;

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
    msg.setTimeStamp(0.825950728085);
    msg.setSource(31341U);
    msg.setSourceEntity(126U);
    msg.setDestination(40620U);
    msg.setDestinationEntity(250U);
    msg.type = 16U;
    msg.request_id = 59697U;
    msg.command = 146U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 22662U;
    tmp_msg_0.lat = 0.208009022399;
    tmp_msg_0.lon = 0.576712641541;
    tmp_msg_0.z = 0.956447225337;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.312900998644;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.roll = 0.00356537335036;
    tmp_msg_0.pitch = 0.327266439763;
    tmp_msg_0.yaw = 0.38484986189;
    tmp_msg_0.custom.assign("CWNBKCIGATUDOVUSPBLOREMWHKRRULXFQNQBDQCIWVKTPGLLEWZSKYPPQFWEOVBRKNLZVADXUCGMOFNCRWZLQFPIPBKRVIHUEQOPEXQMILWTNBMOKFDWJTSXSGSDYKHNOVGGZDMBKTGGHJVUEIMDXFSCMBFYXOSRBYZSCUTL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31841U;
    msg.info.assign("DMEVFPAMIKDXZVNRFHULEJDHUSKDFNBMYNEVOQIJYSHUAFBAJATPKGZJFIYZUTLFIYPVSKSSD");

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
    msg.setTimeStamp(0.669345990324);
    msg.setSource(25496U);
    msg.setSourceEntity(127U);
    msg.setDestination(36732U);
    msg.setDestinationEntity(29U);
    msg.type = 207U;
    msg.request_id = 14223U;
    msg.command = 38U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.934976838787;
    tmp_msg_0.lon = 0.174690308495;
    tmp_msg_0.z = 0.793120531972;
    tmp_msg_0.z_units = 61U;
    tmp_msg_0.speed = 0.875835495787;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.abort_z = 0.288676085202;
    tmp_msg_0.bearing = 0.471820922036;
    tmp_msg_0.glide_slope = 135U;
    tmp_msg_0.glide_slope_alt = 0.74685930764;
    tmp_msg_0.custom.assign("OBQKKPYNTOXIWZXFEJY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24512U;
    msg.info.assign("VELDODXWUNSCQFXVMODSAYUIZMTAVLOEOWPIGBNEQEVSVBQTSJCDIBHXLICFIBSTECMZTHNCJAWNJAOHWDGKBFRANVBDLJKFGGMPQVDIYRACMYQYRSUXPUKNQRZQJHKPTUQYEGDRMBRMIFMBSIMYQYGPWVYKWGZNCZKBYSGWHAWEAXSFZYHDKLXFHMOJUZVLLLCRHKPPVBNJCFUXFEONUTIOCQFATT");

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
    msg.setTimeStamp(0.403974558946);
    msg.setSource(23295U);
    msg.setSourceEntity(182U);
    msg.setDestination(60882U);
    msg.setDestinationEntity(130U);
    msg.type = 70U;
    msg.request_id = 35643U;
    msg.command = 146U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 11961U;
    tmp_msg_0.lat = 0.530921612354;
    tmp_msg_0.lon = 0.936586534334;
    tmp_msg_0.z = 0.978222205573;
    tmp_msg_0.z_units = 156U;
    tmp_msg_0.speed = 0.958562927414;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.roll = 0.708044591505;
    tmp_msg_0.pitch = 0.980015417299;
    tmp_msg_0.yaw = 0.573269465756;
    tmp_msg_0.custom.assign("LOJDQBIFZNXVYKTQEQDTIICZEFVXAPBRBYZVXGQLPLKZQAMAYOZJQQCMCYQIDIASOJVUNSUPMNWSWMDEPUGSFYEIBWTHKAFCPRVKMOKSJGBJTRBEKXDDRHUUAUOPFVRQZSGZJRNACSGLHCHQYAPVZJGEOUOEEJSTAZA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5447U;
    msg.info.assign("QAIEKYHBCUNAAONMEZFTELCLLHFGHXIQCGAXIDMTHZMSGWPMYMTAURXJFYKBMVOFSCVPJIELKUWIBXCCOFQNDXIBOUJO");

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
    msg.setTimeStamp(0.406498381254);
    msg.setSource(44834U);
    msg.setSourceEntity(42U);
    msg.setDestination(58548U);
    msg.setDestinationEntity(162U);
    msg.command = 171U;
    msg.entities.assign("IYZPPXPPGBCOWSCFPYPQOMRXJEWWSSPLMDFFUDAJKLVZWWKFSNURTQJSMFEIUKVVIRYUJADHQLQDOUNIBRVMTEHEJJIWHPZOKTIVDKEPAVAZTVQNYALZQNXKGBURYNQODFNZLGGOTCGXC");

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
    msg.setTimeStamp(0.729027741763);
    msg.setSource(34148U);
    msg.setSourceEntity(100U);
    msg.setDestination(2108U);
    msg.setDestinationEntity(248U);
    msg.command = 208U;
    msg.entities.assign("ZOFVSYDSKERBUDHKHDATQUBMNEVPGNPYDEENXSDYDVXAZGYVDIIKSUZYQFDIQQQWXGHOACPALTHALTHDRTJUCKOSMKEVMZFNSFBGBWBSLVVJPGCQAMUVFVUYMAWCWTNIWYNYGAUXCJHQCCZGXSWNGMLLBOLPFOROPBJFJWX");

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
    msg.setTimeStamp(0.365857408646);
    msg.setSource(35187U);
    msg.setSourceEntity(46U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(207U);
    msg.command = 28U;
    msg.entities.assign("GIWCRCUBBZUVKCTHAOODRDLDSCALRJQLKWNELKJWHBMPIRYHMXRYXYVUNQFZVZPMFSGWVETHNLBVTLAVKQAHFPGOADZWRJXGAIGEKNIGPMFYOZEOKNQTWZKWBMQNYTXSATJUPBKIBJDOSTLTRFXEJWAXZJTSSMSCHXNZXULHIPQEHRCIXYFQAPI");

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
    msg.setTimeStamp(0.899151966176);
    msg.setSource(8400U);
    msg.setSourceEntity(166U);
    msg.setDestination(58771U);
    msg.setDestinationEntity(250U);
    msg.mcount = 179U;
    msg.mnames.assign("OOMPVMVKDVBIFQPGTWVTEYCSKVLWRTPKNYDBXXVXNTWJJUUWEPWAPPQESBDTMXDNSBZFGGBFLMKLOZURZCWTAMRZOIK");
    msg.ecount = 211U;
    msg.enames.assign("BZTWMHTFOPAGQRXGIN");
    msg.ccount = 210U;
    msg.cnames.assign("ZJYKLAYZLXLOJLD");
    msg.last_error.assign("DUZUQRLRMFCGKBDFJQVHVBSZDYHLKVYBLGCSXRTZUMYYMTNBULFXEMZENGHCKDLXJNCIFOIREUCYTWPGLTXFZSXJABXKZYQXAMHFDYHCPVPYVYPAWQXEQWXBVTJRWONKSCDYSPGRAMFGKRQXRDMGUUSVIBVTIEGETO");
    msg.last_error_time = 0.877892714087;

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
    msg.setTimeStamp(0.472747340122);
    msg.setSource(337U);
    msg.setSourceEntity(242U);
    msg.setDestination(2512U);
    msg.setDestinationEntity(78U);
    msg.mcount = 53U;
    msg.mnames.assign("ZEPMMSNVEPHAXWNDAKFZXMHKELDTSRWOKQDRPGSGSLTXJSBBRSMTOYEYNUTAFOYCY");
    msg.ecount = 156U;
    msg.enames.assign("WIHZXSDSFJKZWZZTFAOVCPRAKYZPAANDQGLIKTCPYNIEDWQBIMAGRCKRVRYJJYIHGXEUUEVULFONQYBIBCYBPSVGRXYOWTJGLRDQDXUFTECMTBZOGHJOGLVFRHKHVYDMOOUPXAQUQWVJXSXQ");
    msg.ccount = 218U;
    msg.cnames.assign("QKIJUUOSVMQKZYHSXCYUXMVKGYIXHAQMLNOT");
    msg.last_error.assign("XPBBXJQBUNCGYBIOLWEPCQJPZKPRETFOFANMTZEQXHLNMYIAAKOJWBGJVTWQVXCHWIYFDSAZIAOVYAOHBFKJMWVZOWREDMHUFDHVRACZMODXRUAVTVQYKAOTRWFCIHBSXXDCNQSLYXILTXGAMMTQROBNKEKIGFFKCJWVUSYEBJKYMCJGIFPEKDSSKGQGEGHZPWDPUZMEHPLLFBZINCNPLRUDVTISUUGLNUWGJHCDQTVY");
    msg.last_error_time = 0.569250161953;

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
    msg.setTimeStamp(0.0409017691727);
    msg.setSource(5985U);
    msg.setSourceEntity(225U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(92U);
    msg.mcount = 35U;
    msg.mnames.assign("EEDVBPMOLRAEHFFRJOHKKZPDRUHCEJITMUYOFBJPZDCMBHRYKCTJLBAKCENARDGTZPLLIVEIMOVQSCFSFVOWZFTEHWSIAYGXTZESDLOQYUPHJWQNHPMNULZGQIBCDKCPRGWJPQUBTSBYBGSCBCGKZGXMTIYFRGMVWXSWXUFAUNKTAJERYUMRUHVUNIJQKXNPW");
    msg.ecount = 174U;
    msg.enames.assign("MTSRIBQNDCBYXQIVJJQQTSSKUNXMURYZEBNXSZLABMBONNHZQPOUKLDTCTVAGOCKBVCZWALJWETYXNDWACDIUBDCXRAJCHERFLFAXBTHZPEDBIAWSLHFKMLCPGBWJFAWQZUMLQOTVUWENPYJJHHGOQGYQEXFHPMGWNRRIDTOTYPKOEGRVHFYYVSAMHUXSKPM");
    msg.ccount = 245U;
    msg.cnames.assign("UMWDJWHQXOIVJFDMOXAGRZSYYZXYWOBZQOJRLWQZQELTWHFNNJXAVJNAYSIBRTYHUQEWRKPPBVQPBTRZSJMSEDMWCIYIXZSEEKJFMCUDPAHETFGYHLVCLGCINPANOUVOCVZSBSZRXBORRVVQSLGSMNPIQDGNKAMSBADTGFXYAHEQWLTFGRYUBETCQPWDTFYILMKTZZGINIOOGU");
    msg.last_error.assign("ZHLMZNYHLJHFBFHAINROACRYCDEVRTFUUDRWSJIQTUUPGFXJNSQBQKBIIZMOASPHJXBLXENNYWVCUAFOAEMISETSOCGLSGGZNLBMMYR");
    msg.last_error_time = 0.623025317409;

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
    msg.setTimeStamp(0.867114912042);
    msg.setSource(38239U);
    msg.setSourceEntity(211U);
    msg.setDestination(52860U);
    msg.setDestinationEntity(91U);
    msg.mask = 135U;
    msg.max_depth = 0.054322130129;
    msg.min_altitude = 0.811775284914;
    msg.max_altitude = 0.823495001245;
    msg.min_speed = 0.796951737965;
    msg.max_speed = 0.260219128412;
    msg.max_vrate = 0.0521601136192;
    msg.lat = 0.647020573781;
    msg.lon = 0.903631648489;
    msg.orientation = 0.680842079795;
    msg.width = 0.266174592815;
    msg.length = 0.0954519356003;

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
    msg.setTimeStamp(0.487261678445);
    msg.setSource(11821U);
    msg.setSourceEntity(37U);
    msg.setDestination(42523U);
    msg.setDestinationEntity(33U);
    msg.mask = 58U;
    msg.max_depth = 0.599043952107;
    msg.min_altitude = 0.0599170804974;
    msg.max_altitude = 0.811538660765;
    msg.min_speed = 0.891257302861;
    msg.max_speed = 0.509548218221;
    msg.max_vrate = 0.133790282811;
    msg.lat = 0.595078745813;
    msg.lon = 0.147943517724;
    msg.orientation = 0.46888405555;
    msg.width = 0.46879030405;
    msg.length = 0.799821099814;

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
    msg.setTimeStamp(0.616204879803);
    msg.setSource(59841U);
    msg.setSourceEntity(34U);
    msg.setDestination(16153U);
    msg.setDestinationEntity(146U);
    msg.mask = 170U;
    msg.max_depth = 0.418459358752;
    msg.min_altitude = 0.176880833836;
    msg.max_altitude = 0.81053427713;
    msg.min_speed = 0.795138505715;
    msg.max_speed = 0.825972775779;
    msg.max_vrate = 0.483235020643;
    msg.lat = 0.871362273839;
    msg.lon = 0.322598552298;
    msg.orientation = 0.418180579317;
    msg.width = 0.519677103972;
    msg.length = 0.734565234319;

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
    msg.setTimeStamp(0.597076896512);
    msg.setSource(24499U);
    msg.setSourceEntity(51U);
    msg.setDestination(56244U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.323158379527);
    msg.setSource(51968U);
    msg.setSourceEntity(16U);
    msg.setDestination(14173U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.937360173967);
    msg.setSource(58190U);
    msg.setSourceEntity(252U);
    msg.setDestination(53086U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.47544508563);
    msg.setSource(31286U);
    msg.setSourceEntity(85U);
    msg.setDestination(32282U);
    msg.setDestinationEntity(193U);
    msg.duration = 10252U;

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
    msg.setTimeStamp(0.406338606167);
    msg.setSource(37997U);
    msg.setSourceEntity(137U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(158U);
    msg.duration = 27377U;

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
    msg.setTimeStamp(0.583433588209);
    msg.setSource(11255U);
    msg.setSourceEntity(1U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(125U);
    msg.duration = 36884U;

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
    msg.setTimeStamp(0.515648475931);
    msg.setSource(45300U);
    msg.setSourceEntity(249U);
    msg.setDestination(57163U);
    msg.setDestinationEntity(17U);
    msg.enable = 18U;
    msg.mask = 3573850526U;
    msg.scope_ref = 1771200562U;

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
    msg.setTimeStamp(0.069109449209);
    msg.setSource(20944U);
    msg.setSourceEntity(177U);
    msg.setDestination(5742U);
    msg.setDestinationEntity(219U);
    msg.enable = 148U;
    msg.mask = 4150476631U;
    msg.scope_ref = 1341147636U;

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
    msg.setTimeStamp(0.308076109339);
    msg.setSource(38117U);
    msg.setSourceEntity(183U);
    msg.setDestination(26736U);
    msg.setDestinationEntity(153U);
    msg.enable = 169U;
    msg.mask = 3957651863U;
    msg.scope_ref = 2495679917U;

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
    msg.setTimeStamp(0.469376722035);
    msg.setSource(59721U);
    msg.setSourceEntity(47U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(216U);
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
    msg.setTimeStamp(0.944183000352);
    msg.setSource(47483U);
    msg.setSourceEntity(108U);
    msg.setDestination(44973U);
    msg.setDestinationEntity(191U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.77207437743);
    msg.setSource(56571U);
    msg.setSourceEntity(91U);
    msg.setDestination(6011U);
    msg.setDestinationEntity(154U);
    msg.medium = 26U;

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
    msg.setTimeStamp(0.149206671968);
    msg.setSource(52065U);
    msg.setSourceEntity(105U);
    msg.setDestination(42056U);
    msg.setDestinationEntity(33U);
    msg.value = 0.889020851021;
    msg.type = 201U;

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
    msg.setTimeStamp(0.325724480709);
    msg.setSource(21454U);
    msg.setSourceEntity(147U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(140U);
    msg.value = 0.803680960559;
    msg.type = 123U;

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
    msg.setTimeStamp(0.769777774044);
    msg.setSource(51755U);
    msg.setSourceEntity(98U);
    msg.setDestination(45202U);
    msg.setDestinationEntity(134U);
    msg.value = 0.919198176111;
    msg.type = 20U;

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
    msg.setTimeStamp(0.0975951091371);
    msg.setSource(39081U);
    msg.setSourceEntity(89U);
    msg.setDestination(18820U);
    msg.setDestinationEntity(221U);
    msg.possimerr = 0.865649229651;
    msg.converg = 0.365163949444;
    msg.turbulence = 0.0059307450793;
    msg.possimmon = 104U;
    msg.commmon = 217U;
    msg.convergmon = 132U;

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
    msg.setTimeStamp(0.49805004871);
    msg.setSource(2101U);
    msg.setSourceEntity(76U);
    msg.setDestination(5397U);
    msg.setDestinationEntity(38U);
    msg.possimerr = 0.00911855279335;
    msg.converg = 0.0210545381501;
    msg.turbulence = 0.504582523566;
    msg.possimmon = 60U;
    msg.commmon = 96U;
    msg.convergmon = 180U;

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
    msg.setTimeStamp(0.00570622366871);
    msg.setSource(36744U);
    msg.setSourceEntity(87U);
    msg.setDestination(8630U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.102190565083;
    msg.converg = 0.542589449022;
    msg.turbulence = 0.744956156155;
    msg.possimmon = 140U;
    msg.commmon = 184U;
    msg.convergmon = 161U;

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
    msg.setTimeStamp(0.993498961774);
    msg.setSource(51495U);
    msg.setSourceEntity(41U);
    msg.setDestination(18778U);
    msg.setDestinationEntity(138U);
    msg.autonomy = 169U;
    msg.mode.assign("HHBVRDQTCGLJUZVQEUKFPVXIPVHXCCLOHDFXAXKPRWKIJMZXBORJWUFCENBZBGPULIXCYYYSCTHWYNKCADEMNEQBGJLWCFVRDYTUMFUZNKUMXFXQHYKGRYIWL");

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
    msg.setTimeStamp(0.168734993627);
    msg.setSource(48907U);
    msg.setSourceEntity(134U);
    msg.setDestination(61239U);
    msg.setDestinationEntity(180U);
    msg.autonomy = 143U;
    msg.mode.assign("GRWOTIQDUZKKHMLXIVFAO");

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
    msg.setTimeStamp(0.25632009689);
    msg.setSource(44888U);
    msg.setSourceEntity(220U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(195U);
    msg.autonomy = 62U;
    msg.mode.assign("WHQJGXZVCQWIKSOYKIDFOFQEEYWDFUXTNQWFCGFLPCQGZAAFSMAIJUJOKOVCMSTAEUCYUDYIZJOXTNEHENJLVYIDIEZNSUQKZTNGBLPYPSNHSWWRSBNDZKRBQKVPMXSHLXACQYNJYIXPPLMJWMLOIBGQNHFCABBKTTZLGDFAUYKBXKWKWLUOXHREATMSZRLDZTDGRMTVBVPUSQMEHPJUGITFFCLGVZOMWYORRGVXRBVDAICOUHPCMPAEBH");

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
    msg.setTimeStamp(0.90904054696);
    msg.setSource(4558U);
    msg.setSourceEntity(52U);
    msg.setDestination(54181U);
    msg.setDestinationEntity(172U);
    msg.type = 70U;
    msg.op = 103U;
    msg.possimerr = 0.502832730042;
    msg.converg = 0.578393213734;
    msg.turbulence = 0.656726305401;
    msg.possimmon = 247U;
    msg.commmon = 182U;
    msg.convergmon = 228U;

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
    msg.setTimeStamp(0.831656683);
    msg.setSource(43118U);
    msg.setSourceEntity(234U);
    msg.setDestination(18574U);
    msg.setDestinationEntity(72U);
    msg.type = 142U;
    msg.op = 94U;
    msg.possimerr = 0.544829506138;
    msg.converg = 0.388971007761;
    msg.turbulence = 0.576958468108;
    msg.possimmon = 57U;
    msg.commmon = 51U;
    msg.convergmon = 234U;

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
    msg.setTimeStamp(0.828616902063);
    msg.setSource(56397U);
    msg.setSourceEntity(86U);
    msg.setDestination(62906U);
    msg.setDestinationEntity(107U);
    msg.type = 104U;
    msg.op = 73U;
    msg.possimerr = 0.523233396132;
    msg.converg = 0.619145742468;
    msg.turbulence = 0.213262129902;
    msg.possimmon = 61U;
    msg.commmon = 56U;
    msg.convergmon = 82U;

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
    msg.setTimeStamp(0.416757334024);
    msg.setSource(19868U);
    msg.setSourceEntity(249U);
    msg.setDestination(30632U);
    msg.setDestinationEntity(112U);
    msg.op = 1U;
    msg.comm_interface = 123U;
    msg.period = 2820U;
    msg.sys_dst.assign("QXIIPJXDXGZKZEQD");

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
    msg.setTimeStamp(0.386854239362);
    msg.setSource(37749U);
    msg.setSourceEntity(34U);
    msg.setDestination(58240U);
    msg.setDestinationEntity(206U);
    msg.op = 29U;
    msg.comm_interface = 42U;
    msg.period = 41565U;
    msg.sys_dst.assign("XJTXNJUZEBARTBZKTROIPJGACXNTVWCLZTJBKMBXIMBWPGNCIACODUREFJEAZRKKWFTYXSGEDIETRFLIJBHSOHSAJFXDWRLCTQYVQLZKLMEBFDIPHXDZXUOK");

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
    msg.setTimeStamp(0.852205029091);
    msg.setSource(43773U);
    msg.setSourceEntity(136U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(44U);
    msg.op = 196U;
    msg.comm_interface = 215U;
    msg.period = 49868U;
    msg.sys_dst.assign("VYHYZKBAOPCGGUUHQROPUCMWKDLEDTIMJYDAERKYPEYNLGIMQKOLMPOXCNQPTDICNJULSVFLAWYBFLCEVWCXQFYNXCSTTOOSVXBHIVHUPJALYPSKMBRADRRHOGZQFC");

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
    msg.setTimeStamp(0.656691368652);
    msg.setSource(63807U);
    msg.setSourceEntity(248U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(39U);
    msg.stime = 1224771841U;
    msg.latitude = 0.864472207146;
    msg.longitude = 0.508057630676;
    msg.altitude = 11383U;
    msg.depth = 64734U;
    msg.heading = 34606U;
    msg.speed = -31050;
    msg.fuel = -74;
    msg.exec_state = 94;
    msg.plan_checksum = 10114U;

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
    msg.setTimeStamp(0.654889530336);
    msg.setSource(39794U);
    msg.setSourceEntity(57U);
    msg.setDestination(10393U);
    msg.setDestinationEntity(20U);
    msg.stime = 3375148968U;
    msg.latitude = 0.902637266029;
    msg.longitude = 0.744771989012;
    msg.altitude = 56351U;
    msg.depth = 57404U;
    msg.heading = 56999U;
    msg.speed = -28849;
    msg.fuel = -14;
    msg.exec_state = -15;
    msg.plan_checksum = 32928U;

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
    msg.setTimeStamp(0.139788228656);
    msg.setSource(15549U);
    msg.setSourceEntity(154U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(11U);
    msg.stime = 3606833426U;
    msg.latitude = 0.828338959556;
    msg.longitude = 0.362998709623;
    msg.altitude = 253U;
    msg.depth = 44644U;
    msg.heading = 26867U;
    msg.speed = 16673;
    msg.fuel = -84;
    msg.exec_state = -26;
    msg.plan_checksum = 45209U;

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
    msg.setTimeStamp(0.689962109352);
    msg.setSource(22876U);
    msg.setSourceEntity(26U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(221U);
    msg.req_id = 38287U;
    msg.comm_mean = 106U;
    msg.destination.assign("WQFBVGJAQIMXYWINZKDTCBWEJHULGCVOKADVNZAYSESUYDMGVTWUXRMVHYXLMERBLVSHKNOCLKVNREOQUZYIXPLGONQEQNWVHAJQHORYBGOYNDMXWAKKASUOALCPBCDFJVKSDZBTVKQPLDAKZAGRPJFUEJQZ");
    msg.deadline = 0.357847753097;
    msg.data_mode = 1U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 219U;
    tmp_msg_0.clock = 0.373930612599;
    tmp_msg_0.tz = 80;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RCILHTLQLNTLQTBDYJXBTTPESOMJIWKDJCFKUAAFYXMMZJGPISDUAQKDVHSRIOOTFORY");
    const char tmp_msg_1[] = {-31, -16, -127, -62, -101, -40, -4, 1, 6, -117, 79, 92, 11, -58, 67, -69, -96, 96, 21, 93, -84, -80, -46, -87, -45, -74, 55, 107, -31, 54, -37, -52, 113, 19, -63, 119, 113, -7, 38, -111, 56, -99, -97, -113, -27, 20, -60, -107, 70, -105, -40, 11, -49, 31, -63, -59, 87, -38, 105, 84, 30, 78, -59, -8, -119, -93, -101, -53, 18, 102, -2, 50, -99, 75, 26, 15, 58, 64, -60, -61, 68, -104, 114, 107, -82, 119, 53, 36, 62, 111, 126, -46, 106, -24, -43, 64, -112, 18, 111, -29, -61, -21, -54, -68, -118, 69, -35, 36, 50, -124, 93, -43, -13, 40, -24, -99, -12, 44, 101, -54, -48, -95, -38, -66};
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
    msg.setTimeStamp(0.47560233402);
    msg.setSource(4464U);
    msg.setSourceEntity(25U);
    msg.setDestination(3675U);
    msg.setDestinationEntity(218U);
    msg.req_id = 24025U;
    msg.comm_mean = 152U;
    msg.destination.assign("QTPYWBSMEUMSXAWU");
    msg.deadline = 0.0616936712826;
    msg.data_mode = 222U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.755753575827;
    tmp_msg_0.temperature = 0.87653167878;
    tmp_msg_0.depth = 0.208301060567;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EQOIGNUFGMHKPYNAPUVJHKQNOLEMRLBZUKDWVIATYGJCTQCHIKVGCYQTWMEYDEVSH");
    const char tmp_msg_1[] = {42, -58, -113, 126, 114, -74, -108, -28, 10, 65, -76, 68};
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
    msg.setTimeStamp(0.514375849369);
    msg.setSource(10983U);
    msg.setSourceEntity(22U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(193U);
    msg.req_id = 51562U;
    msg.comm_mean = 199U;
    msg.destination.assign("IKNZDJETKDBTMUSUKP");
    msg.deadline = 0.234093251009;
    msg.data_mode = 65U;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("TAFHJWLNPKOPQVIMNAJUUQFZXAIKTLPFJZASROJYQDKEFULZGTJIVYDMWMHAXCMCRPRSHIWVPWHBZBXRXSXJFTKZEDXHNMSNGVLCHQOBDIBYBYTEDMIGZCPWENRSYANIVCQDAACXDCVMBISFMLRUWLZPXOJSELOBUDPUR");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GYOJFDNSDQIKZZHIRTGUBHPEEGSAUYUJKALEOLBUMVSWRUIRNLXOGXHWCXPKETGVFBIIWTQMBXIDHLWSPNTNEKZAHVXOTBDRIPLRLDPMTMQKXMWVAFABKOJMCAYFGDRQZBSKFNSOAZQKBLETSKQWDEWIMOKFWDDCCIPXWORVCJJNMJYDGQCHPVMRPRYHHLUAXFYRPASYVSQVNBZZZ");
    const char tmp_msg_1[] = {86, -12, -93, 75, 28, -111, 57, -36, -112, 17, -64, 59, -13, 73, -9, -93, -7, 40, -28, 30, 86, -111, 89, 72, 10, -14, -60, 60, -93, -56, -74, 6, 111, 41, -125, 86, 89, -53, 52, 120, 15, 92, -99, -4, -28, -67};
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
    msg.setTimeStamp(0.370459907403);
    msg.setSource(46267U);
    msg.setSourceEntity(168U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(97U);
    msg.req_id = 21365U;
    msg.status = 96U;
    msg.info.assign("OALZUBREETTBENIVDGGZZFCUCKOKQHILMGXGBQEIGULRQZHQNVJTHAULRYXNDQNKMOPE");

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
    msg.setTimeStamp(0.201861086452);
    msg.setSource(62289U);
    msg.setSourceEntity(200U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(246U);
    msg.req_id = 9197U;
    msg.status = 56U;
    msg.info.assign("KVTHVIWYYZHZCSEOTNHIRVJFJLALIWCYQDRHHIIZLXOKYBEFSQNNVPFLRWJOOMXZMHZZGHPKFUTAEHAXDNQDBQMDNJPEGTKIGQKGYIMAMJDCOJKLQXOJGKTSQPQNSASCURGSZOOWNDRIWEVLQRWXFGVTCYWNKUGKBBQGPNMXSVTBERUFFBBJDAUVYDPOUSPUVFXJRWXBAUCEELBSXLFEMTPAZATDCHCHUKMWESTFBLANMYZPVRY");

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
    msg.setTimeStamp(0.24921640429);
    msg.setSource(55828U);
    msg.setSourceEntity(6U);
    msg.setDestination(29792U);
    msg.setDestinationEntity(31U);
    msg.req_id = 60768U;
    msg.status = 135U;
    msg.info.assign("NXVAWETVZNCYQZBAPJXDKRXXJURHDTTWFSYURRTWSOLLSECKJZNGASUZHATJDUFKESYHBXGFUGEURYOVDQDZRGGHTMKBOLIFDSXTOCIPVQBVQTJMMCEQPCXJBCKW");

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
    msg.setTimeStamp(0.872255888986);
    msg.setSource(31637U);
    msg.setSourceEntity(224U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(125U);
    msg.req_id = 49273U;
    msg.destination.assign("SZBWAUQMIHZYWOJFNYUUKWYWNWRWRUQHHIBSMJVCDPWEKCZCINAYMVYQICCXQAHFVYMULQFJPEHUSNDUMURTGGKHPAXXLMMLCLJWSFZCADPFGRDETQDIJPPKFZPXKYISXDGWTGIOSNOKFRZZASGOBVENBZMFXLOHGJEZKLCVFXBQQARJALECNEMKTPJRBTHVDTLOPGMERQSBTTKCVUGURJDXXYSHO");
    msg.timeout = 0.723306431788;
    msg.sms_text.assign("CFQOTHCPCHSLPPRRMYVCOTUIATSKCCHEPNCBKHFHZUJUYIVGVBOUUZDJOTAJTQMBLMTXYMQUREGRBSBZFXXDXQJPXYAAVYGGWBCGRGZLZIENUIJZTJMHNAGQDNDZMSLMUWODGIRUBFBMKRLADKLWSELEPAWOFZITQH");

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
    msg.setTimeStamp(0.586462748515);
    msg.setSource(32427U);
    msg.setSourceEntity(144U);
    msg.setDestination(32480U);
    msg.setDestinationEntity(200U);
    msg.req_id = 53298U;
    msg.destination.assign("QKFWVHYYICNSUDPHJOTUVSHLCGEWSEATMKZDSXGMNAIFWMRYPRBDZCFLXUEKGOSAXSXZJKDBGABKVZTADVNIVDTLOJGW");
    msg.timeout = 0.25010008823;
    msg.sms_text.assign("IJFFQNPKZELBATXBCPVJFEKXRBCAEXVZSOVGAQRJUGMPIDSJVHVDXYTJMTSEJYEDYRYDZHBBBIWWPIACNQLPHRAZYFOURFVXWXSFWDZNXXAPJUGHRLELYDBTZWVODSHGWAJWAOGACMKLNGWKYOFXKUQAUQIYIEMQSLCNNGKGBQLVUMCEVLVKRBFJQTTHQFJNUIPHNMMWRPPZISFKCTUQHZXGDMLGLIPEBMRKMYCHZCWRTUOYONDZK");

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
    msg.setTimeStamp(0.33543974718);
    msg.setSource(59429U);
    msg.setSourceEntity(6U);
    msg.setDestination(54220U);
    msg.setDestinationEntity(137U);
    msg.req_id = 45519U;
    msg.destination.assign("SCNTGKNZJDRQSVMQOWAFJDWOZOTBUMREDPECZTZIXFQANEPAMEURTWIBPXZKAJYVGPCZHFTLIGQYHBKHJZWPMSGKRTJMYKHIOARGDJMOYQQPLFUOSP");
    msg.timeout = 0.361865808298;
    msg.sms_text.assign("QZYKECPIUZVWBEZBXTMJLR");

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
    msg.setTimeStamp(0.362372017427);
    msg.setSource(10148U);
    msg.setSourceEntity(196U);
    msg.setDestination(22449U);
    msg.setDestinationEntity(140U);
    msg.req_id = 11135U;
    msg.status = 89U;
    msg.info.assign("QQNFPGGOMOFIJRIGJDBAKSJISOBTXIUYSPLDAKAVYDABKTHSEKOUGPXWKGMUOKGRUUQRZLRSNPZEARHFDDBVXIPNWMFJETVYHUDFGITOFICTJHLKELTNVSJXHHDOPQVJCLXXIZQFQFDMCNXBCXCXTQADCVYGVLORPXMPAZYVJCHVAGNTOYEERIBFKJDZLRUUPQWR");

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
    msg.setTimeStamp(0.357590769833);
    msg.setSource(9448U);
    msg.setSourceEntity(140U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(228U);
    msg.req_id = 56734U;
    msg.status = 156U;
    msg.info.assign("XDKSDOARCSYKXNBBUNACYNVMGWIUYJTYIPMDZZNJLUHXQLDXDFTJYLPROBQXBCPSQJZRRGIYFGQQHQKUOAHQXURFLCGLNLQVFHPGHAYZTFKJDUGWMOTMIASKMSUIPQKFONOOWSDBSYIHV");

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
    msg.setTimeStamp(0.986121623117);
    msg.setSource(30883U);
    msg.setSourceEntity(174U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(132U);
    msg.req_id = 2357U;
    msg.status = 229U;
    msg.info.assign("WUKUDQERDRQAPWJFZAIPFILWVAGNNUGUFSDOISECBSPWSHUZJWWHJGHEACJVREUTBSPVHLYDJDXCECYSKDBKFVHRBSGKSIAZMFNHCYXWDRCGLSQATAEPCEEJQFXPQGPRCRTUBZPBZKWIFZQXFQTOAXBELMUMZXT");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.0955383227918);
    msg.setSource(3896U);
    msg.setSourceEntity(226U);
    msg.setDestination(43982U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.436643909713);
    msg.setSource(28512U);
    msg.setSourceEntity(164U);
    msg.setDestination(26534U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.23549896495);
    msg.setSource(43101U);
    msg.setSourceEntity(98U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.048685035252);
    msg.setSource(40157U);
    msg.setSourceEntity(75U);
    msg.setDestination(39909U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("FEZTMIVOWVFHEDRVKNOOILYHQPQAGZLLTBLNPIXYHKJMPSBFYXIIRUCYUTJPJUASYREZDHVFLZJKTEGBBFSUAYWBCSLWHCHANPIVXFQNFMARWIPPAWQDWGGDGMXFUCLBWHTQOPYMASSTJORAGDCMBDVBWTZBODSIOZRVKCEVJZTZYVHMNXNZOESQTXRKOCWDFQQRSEKXBYCEJJKXUNOGMXKK");
    msg.description.assign("FZTUTOVCUPXGHJHHRKKWMWJOMVYNDECQCNJVLCIVTHYYKXJGEOENKRALRLZZCEZMSGBNJHCDBTUAVXUWEAWYQWEFISQMLPEMKHHRCMOIOADDOFQKKATFDNZXJOMKYLUMGHLFTTNPAJYGILGFNGDCJXQQQRWVPHORGAEBPVPSTDMSSAZNLJRIBBEZAOBDXPPDZX");
    msg.vnamespace.assign("WISZAATHURZQAUCSUNWVMNEXFDJVZGQVQGJUFZVLTHDSSCZIETOADAGOQQWKOBXADMAIEPUCBGFESIYRJDJOTXATJFGBPXILLBPHHIFNGTULESYFQZMDZHCRLFBWPEPQCPFBKVSLFWCOIGVUYVBNGIZMBYEXVCMHZJDSOHILVLYWKOYDTPJLORAOYMRMCEKEJKHAURX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BOZZPTOGEJLFJEOAHPSVKWXAMOQVHDFKADOFXWHZTYCMKBVERIQRGSUDLAFINBTBDXZBKCUWJQEPTXOHXBPFCLOJBGMDDSUKNJLCSUOTIQLPNYDMJLRQTYIGGZFHNUWVLJCLQGYYINTPZZFENNFWKYMQLRHCPHEMBFCXWHSBNGAJVVMYADACKNISVUNRJPKU");
    tmp_msg_0.value.assign("XHKXNGUYIARAYARBQFVOIDTIOQSPNKRVSZEHLNEMQGMHESBVLNCWLPRSVGDCFLXVVJKYHZFINKLFMSYLVGONMSLIRUGLDUPBJKBTUJEKNXHMBGTDQHLEOOMBUZZRCDGEHODFPWKWVIOZTTWQB");
    tmp_msg_0.type = 53U;
    tmp_msg_0.access = 240U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FUSKRRDXPWSLQJDOZICEFIIVVJXVPJGLDTDYCHKDTXCGANVICGGYAVIOJDURBCOFLZZSCCKYGJNMMYSEAFINAQGULQKOJATZPWBINUHOUZRVQCLMXMYGOEEHAINHSXXOTNMRMTTAVCDFDBEFKKOBVSWNMEQHZWWJBEJQQGXPUCQHWURRNHWW");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ECQODXBNLNQDHNVGLM");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 14981U;
    tmp_tmp_msg_1_0.lat = 0.400015086622;
    tmp_tmp_msg_1_0.lon = 0.653687969252;
    tmp_tmp_msg_1_0.z = 0.802064240624;
    tmp_tmp_msg_1_0.z_units = 29U;
    tmp_tmp_msg_1_0.speed = 0.257627863908;
    tmp_tmp_msg_1_0.speed_units = 175U;
    tmp_tmp_msg_1_0.roll = 0.756135821282;
    tmp_tmp_msg_1_0.pitch = 0.781090541438;
    tmp_tmp_msg_1_0.yaw = 0.909353222028;
    tmp_tmp_msg_1_0.custom.assign("JQDYPSRDLVERESTIKIJUVKUDBYAKOPJHGNOIJGQEWJPUPAEZSEMHVZWBAODAZMMWBAWQYADOIHYNQOXAMLPFBCVRVHOIFTFTRVYIZDCMCHSNHZLRDDKYGXEUUIKKFADVJXZKNTBYTQBOGRGFIWMJFORUAGLTFWSXKSWILCNXCOEZJUESPSICNQYULFNGRCLYTBQSGXHHRCBTECPAXMOQHWVBRVLX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::GpsFixRtk tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.validity = 57268U;
    tmp_tmp_msg_1_1.type = 116U;
    tmp_tmp_msg_1_1.tow = 3624012344U;
    tmp_tmp_msg_1_1.base_lat = 0.221676283641;
    tmp_tmp_msg_1_1.base_lon = 0.558508548734;
    tmp_tmp_msg_1_1.base_height = 0.789303082938;
    tmp_tmp_msg_1_1.n = 0.744060833173;
    tmp_tmp_msg_1_1.e = 0.429806063987;
    tmp_tmp_msg_1_1.d = 0.188451283482;
    tmp_tmp_msg_1_1.v_n = 0.531471153709;
    tmp_tmp_msg_1_1.v_e = 0.236042076434;
    tmp_tmp_msg_1_1.v_d = 0.900020513809;
    tmp_tmp_msg_1_1.satellites = 50U;
    tmp_tmp_msg_1_1.iar_hyp = 29332U;
    tmp_tmp_msg_1_1.iar_ratio = 0.251080532326;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::FormationState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.type = 179U;
    tmp_tmp_msg_1_2.op = 112U;
    tmp_tmp_msg_1_2.possimerr = 0.323593939599;
    tmp_tmp_msg_1_2.converg = 0.905317362877;
    tmp_tmp_msg_1_2.turbulence = 0.0762208257338;
    tmp_tmp_msg_1_2.possimmon = 119U;
    tmp_tmp_msg_1_2.commmon = 224U;
    tmp_tmp_msg_1_2.convergmon = 174U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QCYLFTDHCHLJNONQUOUTHKNKIEYCJKRQVYTPPUWQAMQVOLGAWCSWIXFEGGPCXEBAEFRXSTUGABOAAG");
    tmp_msg_2.dest_man.assign("KUHVUATULXUKKRZRPBOFCIGRSGQCAOXONKXPPULURHDZWWGUXJZOOYPGWSCNNWEMCQCHKCPEDXEQQWSBDIDXVNRUUSOPLNDISQJLQAKMHKAFWYAVEHNQBQAEBMRTKEYTYVZXGWOTIDZLWMHVKVLBXTBJGWFPTGJLSSMYICJIJHDVGCXDLHOMKHTMRFYJYVIWUEGVRTSPHOYAQNNMEXDOZIPFNYMYAQIJZMDZFTZJC");
    tmp_msg_2.conditions.assign("QQMBTKPJRLDFBRHZCJ");
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
    msg.setTimeStamp(0.381513217867);
    msg.setSource(52443U);
    msg.setSourceEntity(137U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("TAHCOHFLXSXRCDLKNUPZDNNIUAHWBDPVSQUGQQJMLXHTW");
    msg.description.assign("COZQSZLWOVFIVGTSQWZYGTNAIFQALQLMBRJZPJVGMDXFYQNUOUFZHCJFSUVYRUMWEVUYXGIKNAHHSJOYIRNRBVURMNRJCDXDPHGJKWQITQHSELBPVGHOQXFXZWWHWGPUZCELBAABVEJCKAKHSTGDOYTDURFGUAOYNONMHCTLGDESXCCJKYVXZKSKBECWYMPPDQFEOEBPMLQIJEJLFBPZAKXPTBWFIKITZRXXINATRDSVIKUMBCR");
    msg.vnamespace.assign("UDNMWOGZJKTLNVTNLXBXAWCJMMYQFGQOXSDTPGYVAZECJDZLLYYKFEREPWRTCXQBKGNWOUALQWYQTUKJURBSPFGIAZPVTHULYBESQKLVMBZBUVSIBQUOCHCXDYSIDFOLHELAQRXPHVOJEIPYCSHUJRMCYHRTSZFWIAXPAAIUAXITKVGOEMPNETZSQDNPYFJRZISDOCGGAVBWHTIOFRJVNKKEPMFKMDQRWDOWNMZJHW");
    msg.start_man_id.assign("DWGOEUPGQWNSNUEXYOFYJQOJUEAYNVNILXZDLLP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TEPXQDWNUNI");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0369831853457;
    tmp_tmp_msg_0_0.lon = 0.05359300426;
    tmp_tmp_msg_0_0.z = 0.852015553994;
    tmp_tmp_msg_0_0.z_units = 26U;
    tmp_tmp_msg_0_0.radius = 0.266038065439;
    tmp_tmp_msg_0_0.duration = 10953U;
    tmp_tmp_msg_0_0.speed = 0.859087397948;
    tmp_tmp_msg_0_0.speed_units = 204U;
    tmp_tmp_msg_0_0.popup_period = 3339U;
    tmp_tmp_msg_0_0.popup_duration = 9132U;
    tmp_tmp_msg_0_0.flags = 123U;
    tmp_tmp_msg_0_0.custom.assign("YPBXWRHDSEOHLKMJNSFSMPPQBDHEUQFLKCQNZDMQSORZGZVANLVXCMNPBYNBXBOAAHDZCQGFWJVRLIPETXOAYSMGDTHYIGFTSQZDISACNZINQEOPTFXKDIYJHWUGEEF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::MessagePart tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.uid = 33U;
    tmp_tmp_msg_0_1.frag_number = 196U;
    tmp_tmp_msg_0_1.num_frags = 215U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-62, -59, 58, 84, 39, -42, 126, -84, 101, -15, -4, 101, -105, 44, -76, -89, -85, -60, 66, 90, -90, -12, 47, 78, -49, -40, -60, 22, 58, -3, -78, -42, -64, 92, 121, -13, 19, -127, -16, -128, -116, 91, -43, -48, 96, -78, -34, 58, 17, -65, 15, -23, -67, 47, -42, 56, -64, 18, 39, -55, -84};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::HistoricData tmp_msg_1;
    tmp_msg_1.base_lat = 0.784265411455;
    tmp_msg_1.base_lon = 0.1159359648;
    tmp_msg_1.base_time = 0.667886826928;
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
    msg.setTimeStamp(0.173619615769);
    msg.setSource(44653U);
    msg.setSourceEntity(127U);
    msg.setDestination(49134U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("EBUNOAIPKETDOTBBRXYJBYBZTAKNXIPDEAFPFJSWFXZUBOAYIFXSRRCGMCODHZMYHPNBLKYMXTPHCAQVWLKCIHERLDNYXUQKFTURVWAZTGMDVZVDEXYQHRQXGUEZFPOWGVZUMVFPABLIXWHABSYSP");
    msg.description.assign("FBGVREEZSUFPHOITJDBIEGVMHYMMMSOLRBCZHEVDFBGACUNGUNOEXKCXIZTZOLLWRNORFRXVNNFYQTQUTNVFADYVCUWBYKJPPVGXUPIJAAYJRWZGNTJAPZPJPZJWBLQQSHZLCMQLEYAFBMMDOSWE");
    msg.vnamespace.assign("STPUMTRJZOPKXIFOHTOSKESHYJHWARGRZOYSCZLQBQAAMEIKRDDJWDHQFSTWYYKPMGNQADNAKWOZYJQNAGISHVSYSCDXRVBELPPFVTBQYGTROCWEZXPWLECDBPPBNBELTTAWDJNMIGNUJAOTMKSLJJPKZCIRUFMKLBUBYMQVDTEK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZDNDTRFTAZAHGPIVZKVMBWERKNYGUGRHWNXYKMWCYQJDIYOGREMEXJXFJPVLE");
    tmp_msg_0.value.assign("ZBGUXFCEQZKIZYRJUMMGQHQPQCWURXYZJHYTEJOTGGDIXIKKQYMRWHIBFCQAVZDAXSDIIZNRNJMTPKLNPKYHMVPXCBEPYOVDYNHNWFVBEVJUAVLKFMHRBBRDXOIFG");
    tmp_msg_0.type = 28U;
    tmp_msg_0.access = 75U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CNWOHLCNCBQCMAODJAAAPDFYAFQOLHYGZKJLKLJVANXIHGXV");
    IMC::RemoteSensorInfo tmp_msg_1;
    tmp_msg_1.id.assign("TYJTHZLMYBIZPQVKRPOYUDOOZBKFDBTCCPCMRMFLUKIRMPCAXRWLGINEWCHOLJHDN");
    tmp_msg_1.sensor_class.assign("LHJBMIXBYJDRBAZPOZOBIGOFNBHEKMVCNRASEKUEOFVCXCQUBYPAMTOFQTKQWZXADBTDRZICTSLKFGZLKIHMTFMJNPDEMAVVYUKXSXRHWMYXFDQGGWJFZIWIQFZCQFKDGATQIWTCNQSZHLYVCBWPPQMWTPEPREJNYAKEWNLQJSAUHIUVDYUORJDZUWLLJGASTPJHSRECDXYGCLRLNXNOE");
    tmp_msg_1.lat = 0.428565932006;
    tmp_msg_1.lon = 0.939804408145;
    tmp_msg_1.alt = 0.54334786685;
    tmp_msg_1.heading = 0.242960863242;
    tmp_msg_1.data.assign("PLKHMDKBCVPBDQBZPWTAJXROUCBCZYKTHPGIEZFRYQNANGLCSKSJIWNWM");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.93099705774);
    msg.setSource(10378U);
    msg.setSourceEntity(237U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("CNVNACTALDPHTMORJDGYGYCIXTDPLIHAOMJLXGPEFYMSZINVZAZTONTXHUYMZXANOLEYQTSZPLOQINVRQKZCQCXVSAGBLYAQZFNCEQRGVVCWBUZVJEGKQMWNKDAGOHFYUDKDXTHHWJMIHSVIBBPFFILJZWUESMEPBFBJGMUEFHNWKSCGZSIERCTBSQRGUXDAXPWWJJUPISLETJVRREDYDNJKHTXWKWPFIFYROUBOUMBOSKRWMQPU");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.747630636433;
    tmp_msg_0.lon = 0.258650573033;
    tmp_msg_0.z = 0.61633553343;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.speed = 0.031975287312;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.bearing = 0.396963057329;
    tmp_msg_0.cross_angle = 0.797015373768;
    tmp_msg_0.width = 0.369112042875;
    tmp_msg_0.length = 0.827256585158;
    tmp_msg_0.coff = 90U;
    tmp_msg_0.angaperture = 0.975758886734;
    tmp_msg_0.range = 62410U;
    tmp_msg_0.overlap = 204U;
    tmp_msg_0.flags = 161U;
    tmp_msg_0.custom.assign("YQXBLZJKOLYVQMFQWMFWPMWHSVBULZOBFVMDIJOCQHHBVJIZPCAGXVNCIJCG");
    msg.data.set(tmp_msg_0);
    IMC::LeakSimulation tmp_msg_1;
    tmp_msg_1.op = 35U;
    tmp_msg_1.entities.assign("WHTKZEYXKPWOBAHBSRCTSXLMKGTQXEAGGWNQFUSKLESSAWBILPIPVJYUJNCCEJBXYUCGCYMTXMNRYZMZPNVQWGKYNXSWZQEELZRMENRFIWFDUJVCVHSVTHIEGIGPWFEPUWQAMPJTEFXA");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanControlState tmp_msg_2;
    tmp_msg_2.state = 195U;
    tmp_msg_2.plan_id.assign("JOTNTZANTDYRLQFIGPGADALVMJUOMAIGUJQLQASCCRQYJYGRMLQIYWFAGPTWCOKRONVUFMKQH");
    tmp_msg_2.plan_eta = 949102179;
    tmp_msg_2.plan_progress = 0.609669074657;
    tmp_msg_2.man_id.assign("NPNDCVEJZNFPIBAWCMPXTZCOMWSLPOZKQBKQLXFLFAYPZAVWJBJHWIKNDVGGTMFQNCDQZHUHXQZGSPKARNOYFEWGRAVIFEYVOCORLUADGXLZJUEBUTMRN");
    tmp_msg_2.man_type = 3259U;
    tmp_msg_2.man_eta = 459885622;
    tmp_msg_2.last_outcome = 79U;
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
    msg.setTimeStamp(0.851876057242);
    msg.setSource(44554U);
    msg.setSourceEntity(50U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(197U);
    msg.maneuver_id.assign("VQXMKHCFQONWOAWUVDNRIQNVFXEKEIRSHTOEGKMEDIBIZLYBACVXMFPANSVHCYYHWDPOZYWABJFGVPFLURYWHINQTLPPIXKISDJCMTXTOKESTGZJDMCWZSYEJQYLFSCSOISIMUXRCCXZGBJWBBQTQZPHHZTDGKGNRGURDLYSAKOPQXJLABWULJOZTYYRENTLFFRTWVFKZEWUUJJBBPQHCHZGNONPUUDXMKECVQLMFG");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.69121759368;
    tmp_msg_0.lon = 0.175222641893;
    tmp_msg_0.z = 0.20556548129;
    tmp_msg_0.z_units = 235U;
    tmp_msg_0.speed = 0.31598185884;
    tmp_msg_0.speed_units = 44U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.847683101222;
    tmp_tmp_msg_0_0.y = 0.711294769395;
    tmp_tmp_msg_0_0.z = 0.592792124114;
    tmp_tmp_msg_0_0.t = 0.747975010513;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.577937135752;
    tmp_msg_0.custom.assign("PJDXQDUSEVUOAOSCLBDDJBZEXGGBHLKXNZYADFPZSFQTWPHGKFLZYEVKQNKLZHWKTSGJNHGRXSQYIXIWUZPTICOWVTKYMKJGXGHLNWTJHCV");
    msg.data.set(tmp_msg_0);
    IMC::CompressedHistory tmp_msg_1;
    tmp_msg_1.base_lat = 0.0323651242398;
    tmp_msg_1.base_lon = 0.935972813905;
    tmp_msg_1.base_time = 0.806345844775;
    const char tmp_tmp_msg_1_0[] = {-70, 110, -107, -69, 93, 75, 101, 26, 120, 53, -97, 89, 66, 61, 118, 46, -78, 59, 1, 41, 24, -72, -117, -64, -60, -61, -97, 35, -5, -58, 15, 103, 100, -15, -125, -8, 37, 4, 111, -44, -12, -7, -47, -45, -16, 125, -99, -105, -25, -108, -121, -51, -10, -28, 31, -61, 39, 37, -48, -5, 105, -121, 70, -127, -33, 69, -89, 69, -126, 118, -12, 101, -112, -43, -16, -43, 94, 105, -15, -46, 65, 118, -35, 90, -80, -70, 7, 65, -20, 117, -83, 124, 19, 118, 42, -20, 112, 37, 93, -87, 69, 41, 64, -2, 67, -57, -15, 126, 24, -54, 10, -80, -37, -51, 83, 2, -99, 35, -99, 39, -72, 93, -97, 100, -117, -58, -68, 0, -82, -33, -73, 73, -115, 92, -26, 89, -116, -93, 83, 65, -31, -39, -43, -7, 19, 115, 7, 95, -101, 41, -3, 126, 54, -7, -69, -24, 12, -21, -1, -110, -14, -82, -101, 22, 9, -37, 38, -17, -79, 42, 49, -28, 31, 64, 113, 31, -78, -99, -105, -99, -12, 101, 43, 29, 79, -108, 58, -120, -80, 29, 67, -55, 85, 55, 4, -126, -103, -34, 115, -95, -79, -82, 96, 65, -48, -125, -121, -96, -29, 47, 58, 80, -99, 40};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.899054280272);
    msg.setSource(8915U);
    msg.setSourceEntity(3U);
    msg.setDestination(43643U);
    msg.setDestinationEntity(50U);
    msg.maneuver_id.assign("MBFXAMYJVHGXCKICJNQALMTGLZMFYTBDPZNZCRPZPBBYAXGLXGICZDAWKTUZJZATAFIGXOKVHASWBGHHISQGMXJSUKDPEABDDPDMEWJPWICCMRKQTVUUVHNOEJLXFYHRVJFZPCOQYNYUXJWFSRJUFSHZQREDROUTVVGDGAFEAELVBYBVHWKLRZWYP");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 28193U;
    tmp_msg_0.rpm = 0.683882836724;
    tmp_msg_0.direction = 45U;
    tmp_msg_0.custom.assign("SIVHTMPDNUZNVJSULFUJ");
    msg.data.set(tmp_msg_0);
    IMC::Land tmp_msg_1;
    tmp_msg_1.lat = 0.606551869624;
    tmp_msg_1.lon = 0.952858898297;
    tmp_msg_1.z = 0.988027487903;
    tmp_msg_1.z_units = 146U;
    tmp_msg_1.speed = 0.111154780209;
    tmp_msg_1.speed_units = 151U;
    tmp_msg_1.abort_z = 0.229172850956;
    tmp_msg_1.bearing = 0.631570869971;
    tmp_msg_1.glide_slope = 120U;
    tmp_msg_1.glide_slope_alt = 0.243777216524;
    tmp_msg_1.custom.assign("QVYTCXMADYNEJXVAAGYWHRBQHMDVLFIOHVXPHVEAPJCDGWCQWFZXQXJSXIFRAQVSMAXHVRANRLGFMPTOJPRJTCWMMKXYXDWBZPDVYEBFGOKFIPHLNCFKBYHLNEHTWRLDMBQNVYKNTCNGMQUOPRIOZSSIQKTUVXGAESOEIBCPUNZULOOGWSIEQDBZMBONHUDKLTUWEZBIJZHEWSKTTKPCRB");
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
    msg.setTimeStamp(0.741859868755);
    msg.setSource(5372U);
    msg.setSourceEntity(149U);
    msg.setDestination(42678U);
    msg.setDestinationEntity(42U);
    msg.source_man.assign("FFOODYKDJMLNCJIEEGJJGQMFIHKSYEZLEYOBCIAQWNLSILYADKURMMWEESHCUVTNCNRDHNVHRSCCBMOBHYZLSAULMPYJGHXUCDRWPKFFNAGEPTIDBKWJXQFZRRDWIVPXYZYUSMXS");
    msg.dest_man.assign("NZIKOKEWSZSPTOMBAOUQGHONEHCNFYISKVCWABZEJVDIDFZMLIZHHWLFRGIFXBBGBELQPCQNFOQXYERXITAGUPUMYTLIMLYNCKMZYEQGKYJPIJXUECGAFRFOXDCDMMLWCOGSGHBSJSABDOIUKAYKVDFHTCQHXOUSGSPFBLJDCQAERQZRVUSDJOWYALKZVJYRQWKLWZXPHANPSXNRHVFJQMJMHVBGDNWNUTTRPWIPU");
    msg.conditions.assign("CXUQKCYZRERFWHGOZUABLOPAFCGWRTITIDLEOYRKXGFPYISBNQLOIAMHRZQYXCJYHDTHQUYGPWSQBLWKDCBMNKZRMWIWIKSPEBVWFALMVHPFXRHEZJIQBPSQMYFTAGXJKNNSEPFVJORTXSFDDCPPHVTLSTULZAXODSKJIBUUOHEYGAMOPKGJHLJXVDWKAVNNKWXYZQVZFOXSCGAYUJDFSVTNREBGLDBUIMINDEZ");

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
    msg.setTimeStamp(0.793201522589);
    msg.setSource(24987U);
    msg.setSourceEntity(122U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(22U);
    msg.source_man.assign("MYMYAIPZQLZENTAMMNEHWSMLQSGFOQLGAKKJDAEFDFCZPEJKSSXTPSJOJSCHODZCWLUKCMUNKGAELHNHVOXBJQHYFODPJBDHGERMBISLWYWOFBSEZWNLXVVDMRBVRGDBRJGOQUWOWBINTGVCB");
    msg.dest_man.assign("LSLOXWELGEWIDGXPFHLTZDIDZELFZHQIFIJAAFQMXDOKABJKQJFFCRZNYKRJIUXUNHICRSKFMTHTCVMVRUYPBIBSUSARMXTQBKKCBPZBGNMOQZVJSOTYJCXZPGYHIATUUTDMEODLZINPBEYHRCEEIAJRJNPESJMBYSPYOPJSVHQAWNPVUTUOGHOWXVQXFYAGBWSCRNWWDKXGZRCDBTFLXVNORVWGEEKMGWCADYLVS");
    msg.conditions.assign("YKXOCHDBRFFDOAGYNZRERJCCOPXHFNQZUMQZZDTKTAAPSCKMSPKEWUQDMPINKMGUPMJVOXRBANLLRRYCFAILFZCGFVSQAVDSTHIXGXWOXISWWHSTFIPPBYBYJGTSTPHQUJNXQGTUQDTCYYXVPNKJSJWDOCVITEVEE");

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
    msg.setTimeStamp(0.674301709985);
    msg.setSource(57887U);
    msg.setSourceEntity(183U);
    msg.setDestination(48615U);
    msg.setDestinationEntity(31U);
    msg.source_man.assign("HFZPVSOUXBHWBHYJRIBPCXHKCGYBMYQLDOUNZITQEZTKDGUTAUUUZNNKLOXOWATOZQVVGVNRMGUCEHZWGLFDOGXRVXLDWYSXMCALRQMVCQFGJSXZPYKTBRHKMULDWSLJPIFDSNHGTLBVJPCIZPSBVKBXYWNFT");
    msg.dest_man.assign("PUGUATJICLDPRF");
    msg.conditions.assign("NQTTPEZBLDBGVRZJYEJTRKXORWSZOCRVPKONVLABDMIVUGOQZDSELPFPVMWUJROIYHAIJVUWEAMGDMACXSTDPCWUUJCHIODOQDIEQPYVHRFUKSQBMFGICVVWLYITNLLBHNKGCNYQWCASESJUQUAEQPPG");

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
    msg.setTimeStamp(0.855770030965);
    msg.setSource(51007U);
    msg.setSourceEntity(209U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(16U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EXEGFUOCJCIKOXNUJODSVMALXXWWPYYETSZCPKQUQWEFZOQFCDBPKFOZCGHEACMBBRDWMELGIGEHMKUWQDHFRVVNKAMNRNJYWVLWGNYSJRRFFWOUKDDUJQAAKSSIVPPYJAUHTQMZLMPTCXRHFRJYITJYBIBXTLYHOKAZLDSSIRPNXFANQXBAHVCGKNTZZ");
    tmp_msg_0.description.assign("HPOPBCTJETZQRLISLQVBHITWMVDWQSDIHFIKTEHEGEFEAMSYEUNVYAPQWQFZSJZUWCIPVMVUGDRAXCJBJHJMQJCOZFCSYYOKUNBRFIDGZZAYDAPRKUMNKWJHIZNVKPRIHLIBYUEXKAWXHTOBCLPFMLUVFKXBNYQAETDBXAGZFLXWJDLZOQQJMIUOBJ");
    tmp_msg_0.vnamespace.assign("GWMVOPPYWMIKKYNAHFLMPNOXOJRTGPFJTDQMBWHTIRFQARTXXQXKOLATRLYOZYDEFMBQUPABQDUVNINIZLCKVTOSGJGSHLCLNJRDMHKIESXHXUMNGFBVXMLKYDCNK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CYFRBZNUZIBKWXYYWOSDAYKLKWDAGRIOQJRFTVQAMERHULWEPMNKHFJOZYASVVPHUUWJNPOLDXVANBXBZQOISPR");
    tmp_tmp_msg_0_0.value.assign("ROQXPNSFWUPMVZMKBXOJKHQRHEOUNVSCJLDLXKMFPEVRFHEYRBHPIZKPQTFNECFPZJGWTYQCJRSKLOAOPC");
    tmp_tmp_msg_0_0.type = 101U;
    tmp_tmp_msg_0_0.access = 208U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VJZAGSMPGFOOPPUGOSYVXATSVHDFOKRGDNCYDJFCCDGUYKKUMOIHOUFGEAMIHLTLOBKYLQEHWVEJEVNCFWYOMZQZXNFMIVBSHGCHBBQYRAQKMEBTCKRDYNWQUSPPWGHRXYQUFJZVJLQXQXZXTORE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YKGXGGMVOZBEYGTXKSLFGLUFUXDFTDZINTKZWJRCBSSLVRUAXLWEMQJMADVPLWEBKPQJTBPVHNDQHZFTHAIPPNGICFX");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.906205583364;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.359340272275;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.742445124369;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 231U;
    tmp_tmp_tmp_msg_0_1_0.limits = 165U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.454397008086;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.549822233876;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.948466039079;
    tmp_tmp_tmp_msg_0_1_0.controller.assign("ITWMQEGYAGPGOUTYZBUYRPWTGXFNPLURBKQAGJUUTHIMOLTAULVJANDVSFMDIAMZPFOYVWQPHXPAXQNZWNTJWQCZOZJMQODPWGENZBARSRHVQVPXFSYIXIPLYRKIIYESWCKMDINHEEVDLE");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("RRFLCSDOGMYUGBKRJNUEUREXQHOT");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FollowSystem tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.system = 7926U;
    tmp_tmp_tmp_msg_0_1_1.duration = 10007U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.927228240711;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 188U;
    tmp_tmp_tmp_msg_0_1_1.x = 0.813187602902;
    tmp_tmp_tmp_msg_0_1_1.y = 0.682907700944;
    tmp_tmp_tmp_msg_0_1_1.z = 0.410058141353;
    tmp_tmp_tmp_msg_0_1_1.z_units = 68U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Turbidity tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.489133852537;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::AirSaturation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.449794072355;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SmsTx tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.seq = 3231234493U;
    tmp_tmp_msg_0_3.destination.assign("BZTOXUMQYMAGRSXNWELHSPXDUXWHNGXWUJQOLVOBPMMROTHXNGTSBTCWZHSTAYISSQBTBLSWUIKGDVZLQMEYGELHDGJJAKPDOPFVSBDUCLPJZIOCJEKYJVCFMIRRFOWQCVTXRWFLKMAFBFGENDYVAYRNNPXQGMDCZCNYYJEAZBKEOAYRNPNCGVAQXZVYLAVTVAHFPFTIBNQLMIHJHFXJIDCGOOIWUHHZTDRIUQWBU");
    tmp_tmp_msg_0_3.timeout = 45634U;
    const char tmp_tmp_tmp_msg_0_3_0[] = {48, 122, 15, 16, 23, 93, -25, -57, 90, -7, -8, 107, 39, 56, 22, -81, -114, -59, -29, -79, -85, 113, -18, -8, -43, -124, 57, -3, 49, -72, 43, -126, 28, 11, 15, 102, -40, -17, 104, -67, 7, -67, 17, 55, 93, 71, 41, 73, 104, -111, -82, 105, -24, -47, -52, -62, -59, -50, 102, 33, -116, 122, 101, 120, -48, -44, -49, 55, -38, 40, -117, -97, 6, 16, 49, 83, -89, -79, 44, 57, -121, -76, 58, -99, 32, 54, -128, 50, 37, -96, 6, 98, -55, 2, -6, -26, -97, 125, -54, 8, 6, -63, 56, 86, 54, 29, 24, 108, 116, -92, 92, 92, -102, -55, -58, 99, 64, 42, -91, -53, -98, 8, 50, -88, -123, -5, 14, 101, 28, 91, -118, -5, -55, 18, 100, 99, 96, -103, 106, -35, -127, 116, -61, 119, -128, 48, 88, -48, -57, 96, -97, -9, 10, -70, -67, 119, -22, -50, -53, -51, 0, -101, 123, 10, -34, -98, 25, 116, -127, 7, 45, 33, 65, -26, -56, 68, -70, -69, 1, -83, 67, -68, 33, -54, 36, 102, 74, 105, 49, -46, 74, 5, 99, -41, 49, -109, -90, 124, 67, -10, 39, -35, 43, -62, -122, 75, -65, -99, -11, -69, 75, 69, 44, 67, -94, 65, -79, -104, -119, -15, 27, 99, -23, -12, -64, -100, 68, -69, -8, -40, -34, -118, -13, 54, -51, -56, -7, -66, 4, -37, -56, -42, -95, -111};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.235953138406);
    msg.setSource(32003U);
    msg.setSourceEntity(63U);
    msg.setDestination(22198U);
    msg.setDestinationEntity(216U);
    msg.command = 126U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WMHFWHUZOOYFBGSJIXGVRKGMTRAXNAOORBTVVUHXAHZCVZIJEYSDFNDRPEYODFVKDVJQVQLDCUHYMLMEEKVTPXCPGLNTINQSDGBWWQISJICBYTXTYTKS");
    tmp_msg_0.description.assign("CVVDOVXCWMMERYHORJNNYFXITWTRPRFCN");
    tmp_msg_0.vnamespace.assign("ZCUIKRDRHPTEZBLJAAGYKMFKIUYSJXDPGVSZUBHIMQCEPKQDGYRMNZYAKZXNZIWQMULCIABGOZCOXQJRTAJWDEIAYFTHLCOOLUTQNFFZVWBUCJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PXQUMEPRPEECZKKMLUAAOTAPUGHTAKINJXFILQORZVPSFMCLSZNWVEFRWBAFCPDDXOSULSJVSDGYLJCHNXDQAHYHMMTHLYLDOZRBNHTXXUQCVXSFWYJURDMNVZKLZQDSELOBEITQANZVBZMIHRGRUJVOFZTRBMOORWFKQSFPGELWOYACBCKIQAYUWWHTXMEQFPTIBXSNGCNGNJBZXCVISOUKKGYUGJYRBFJIBYE");
    tmp_tmp_msg_0_0.value.assign("IUHGAGSNRYBURXQSCCJQUBDWZGMXARJXKNVIMMEDLAQWCONRBSZRNGYILWMBXPBXSGVRJAFVTBYZFHKCGMMOEAKUJNZFJTEQQLTCBVNPDAMLZQJKEHWPEVLCWGHZDVETSJDROICWHBNLLBOLMKUHPURNWCSYTSURPMVPOKWGZIFITVSKVAHYEQTLSOCPPEQYP");
    tmp_tmp_msg_0_0.type = 189U;
    tmp_tmp_msg_0_0.access = 224U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YRUUTOJKIGRSJKNYNZPHGOAWHBFTRJHWEPTGLGSCQBVPAKJUKKZECMEYWRYVDTDCCDTCVWPIJQPZVFUSMOBPTKEAERDYVIGPMQSCZBLNMFAVSXQJLBWKIMQJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MKAJZQZMOQUNRYTAFISPUOSCSIJNFIXIVWYFUGSUAIISTHNAJXQCWPGPKDLIPKRCELQWFUGVKWZEBRPJRHCJOCTKKCMLACEKXKWYBBMOGQBHDRCDNHOWEVPTLUOFXZADUUMOLOGJHBARDCPDAMGTFDYAHUGXLNZFMYWMPWNBVSUODZIQEFEYQLNNHRAPPGQBZFNTBVET");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 42202U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0455130533991;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.862212470189;
    tmp_tmp_tmp_msg_0_1_0.z = 0.307563421135;
    tmp_tmp_tmp_msg_0_1_0.z_units = 70U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.253431923773;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 120U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GLYKNSAEYEIWITHMITRGUWXZVUEXTKNHCBFKOXRXWPOGDXCJURMQEKQQNVAMCVHGWCUUDPUHOPPHJUJEFHSYCRNOXCOVBIQTDZPZAWORLJMQAQCLPGVZIBDDBNGZXYEQLJBEBMRKMGFYGATNAIDTWZSJPSLBDNATKRFUTKZUPFHZSOVXYKLMHHMFLUBYSBCYSJAKZADMSQPVNAIJCJPFHQFIWGEEFVXDOWTVNERSTGQWXKBV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_1_1;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.beacon.assign("ILUZJFMGANJKRNJQLWQRASEWQUHFRNWFKMCZSPKYQAULLNPBZJYXWRHMDMNXKVOOGXYYVEKTBQTHFABKPBBMLIDGFITVFLRIHPNEQXOCAEIESUPUAVWSCVNLDRGPAHZJPMZCDMVUTKLHWTSHFDPBMJDNVXAKOHPOCCNFOJTRFAESOBTCEQCUIXEZUWGIGRVIOQSTMINHSOXMYXKYGYB");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.0142130695508;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.307312446484;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.depth = 0.953998942237;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.query_channel = 40U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.reply_channel = 70U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.transponder_delay = 200U;
    tmp_tmp_tmp_msg_0_1_1.beacon.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.x = 0.437060615029;
    tmp_tmp_tmp_msg_0_1_1.y = 0.341550562597;
    tmp_tmp_tmp_msg_0_1_1.var_x = 0.339357484538;
    tmp_tmp_tmp_msg_0_1_1.var_y = 0.160028578778;
    tmp_tmp_tmp_msg_0_1_1.distance = 0.299822193614;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::VSWR tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.613243432356;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxFrame tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 41044U;
    tmp_tmp_msg_0_2.sys_dst.assign("TGKIYHFDUEFOUCBLICWFJZQKIOZMPBIWNHZJVFQJBYXSNYYWEUKKPYDKSXZAPOVZEBGCCHGMVLDEISFAUHWJGQQTXONUMOWFKCOQCRNMWATUGSFHNVDJFITMBKAIJDJRHEUYPPQX");
    tmp_tmp_msg_0_2.flags = 164U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {31, -109, -21, 120, 15, -8, -74, -59, -104, -114, 68, -52, 79, -115, 84, -6, -66, -16, 116, 2, -108, -15, 115, -104, 47, -2, -23, -17, -100, 88, 7, -66, 8, 35, 83, -88, 38, -75, -88, 54, 84, -51, -109, 31, -17, -128, -109, -50, -11, -11, 36, 62, -68, -58, 107, -107, -102, -16, 23, 27, -64, -28, 47, 18, 88, -101, -109, 99, 123, -77, -111, -18, 58, 111, 24, 68, -51, -6, 43, 120, 81, 65, -21, 68, 93, 75, 58, -127, -48, 91, 20, 88, -70, -124, -98, 103, -104, 49, -7, 24, -14, 1, 123, -79, 51, -31, 94, -67, 44, -8, 118, -39, 82, -25, -24, 23, -52, -108, 6, -11, 57, 13, -26, -13, 12, 18, -35, 71, 9, -49, -51, -64, 91, 108, -29, 67, 75, 32, 23, -78, -100, -127, -68, 108, -70, 15, 9, 25, 117};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
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
    msg.setTimeStamp(0.603656600035);
    msg.setSource(49576U);
    msg.setSourceEntity(75U);
    msg.setDestination(41468U);
    msg.setDestinationEntity(205U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SSSTRNMWVQGHGKZTEVKZDPGDHYZTCQDFKVYWGTQPTBHDNTVEYFPFBAIIEJORJWIBSUVDBKKGJMRYDOWXPKLQNUEHOVEELYCVKMAMVBTPUIIJFAMZXAAYJMRGPWIRNFZBHNOFZHJWCALIODUXFUGSXRHSGAHEPQFVKWWOIXLLSWVUJCQLICNUDQXBWCYALLXUMZCJSLPHJFRCJGUAXL");
    tmp_msg_0.description.assign("EIAHDQGUOBISXRBDNUOXVXQMHEHRJGGPVYWKZNIDJNOSPZRAVMCRZFTUWDICSLEQKLNHHDZFFTZSJCRVBVJ");
    tmp_msg_0.vnamespace.assign("XRZWRXSZIICVZXKLBYTCRPLQFOWVTKNMYJNJLVDUBOTAOJDUMXTXGQFMF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RCLUXIBDHPOKSLMEAUGSWYPNQWYTCYU");
    tmp_tmp_msg_0_0.value.assign("MUYZYBYYNHGEJLHXGQSXUUNRXNQFNPTOSLMNPAPEMYBAOVJRSFKMRFZKVSACNZYDDWQGRXAMCCHUUAUBC");
    tmp_tmp_msg_0_0.type = 178U;
    tmp_tmp_msg_0_0.access = 195U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HRDYWZELLFBAXZAWMXQWSQYMCOLJYZWSWHAOLCHGUPGBXFBEOEIVDOMKDBDFRVHMWKTFZCVVUMCSMEMFYHIEOBSPDHLEGECPVJDJQDTLQROKWXUIRRYQJPPVJHGXLMRAKVNWTFGNSTTSIYDTLWRGJUDTKUQSIBYPOXFTXNOKQAFGYIMXHCONTNMNZGZWFSUIIPJZUCVRCVAJAZLAPRXJSYAKBCUHRPZLYEFXKQEH");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZTZUNYUXXHQBSAQATRCAVKNTHPQJSSPCLMBVXMWHGOJYDRLHSWSFEWBEQEGRUBU");
    tmp_tmp_msg_0_1.dest_man.assign("MRUHELIPVOQOULHOGXAPIYBQCBKBFRWMWXVWWLRQNJDKHWNPAGRSONZELVBAYGMZNUNZOINOJYJVTHIRXMFGACEEJPOSMLHIZCQVOARBITSDDPYDCZEVQQJYUCZRAAHDEHKLBGBTSFXEDFWYGFTWXFIXOVEYDSIDMSYMMAGTPXJDUW");
    tmp_tmp_msg_0_1.conditions.assign("RGBZAHTYPHKCYFSKMCMEQWMVJGBJNCSTCVPXORUVAAIYQAIJXENMOMNLBBFIQDURFANBHTEOWY");
    IMC::DesiredControl tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.58687510755;
    tmp_tmp_tmp_msg_0_1_0.y = 0.895100209035;
    tmp_tmp_tmp_msg_0_1_0.z = 0.109557829931;
    tmp_tmp_tmp_msg_0_1_0.k = 0.90958402116;
    tmp_tmp_tmp_msg_0_1_0.m = 0.295927475681;
    tmp_tmp_tmp_msg_0_1_0.n = 0.443714217683;
    tmp_tmp_tmp_msg_0_1_0.flags = 249U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LcdControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 70U;
    tmp_tmp_msg_0_2.text.assign("YXRUFZTZGKQSEJRHTPOQJSYXIKISRPQAZZNKMHXRWAUDNOHMDPXFALYSUTUTVLATMDUKIIIHLLHWIACAEJKNOVB");
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
    msg.setTimeStamp(0.980399960373);
    msg.setSource(2284U);
    msg.setSourceEntity(240U);
    msg.setDestination(52432U);
    msg.setDestinationEntity(71U);
    msg.state = 197U;
    msg.plan_id.assign("LXEGBYEGVKVTJRISADGNNMJOBCTEVQHYFFFGWDDWQZHOZCUJPJBLFPYRXZMXLCSGQHIIQDVPKSOUGBMZATPIWFVTKS");
    msg.comm_level = 11U;

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
    msg.setTimeStamp(0.567330928892);
    msg.setSource(48499U);
    msg.setSourceEntity(43U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(134U);
    msg.state = 176U;
    msg.plan_id.assign("QAXBCUOLKUTFSEWNMZSPNHUOTHAJUUE");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.187599728191);
    msg.setSource(23820U);
    msg.setSourceEntity(166U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(202U);
    msg.state = 130U;
    msg.plan_id.assign("ZKYMNPFAMBNSSLKGMTRIOFXTUJGMPBNDPRGFIMRYXKFGDNBYJVYGFKUQVADMOVVARCZCCGMTIJWQIDZTQDOEUNALXTQRPUXWWFGNCSSTGPKWSBSZZQHHAZVYLQMVFANBJQWJGEURQSHIUPPHXEJYYPDBLRXCLWTQVMCFJIJOYTHAXKMLOPEVUNZJCWHONYLKJEOSSIXWPCHKWEEHGZLWXF");
    msg.comm_level = 244U;

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
    msg.setTimeStamp(0.341806611959);
    msg.setSource(58770U);
    msg.setSourceEntity(78U);
    msg.setDestination(27080U);
    msg.setDestinationEntity(109U);
    msg.type = 108U;
    msg.op = 38U;
    msg.request_id = 51647U;
    msg.plan_id.assign("AQXBRMUHHAISCQRIMXFEZTCSZSZKNCGNAIGVMUZORDBKBPVHEJWCPBAYVLMDZGEVLPUFISNIRAZLWRBNJXLRUFMXOHYFCTTAGQSYIWSMRCENRBJQSLELOMQLY");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 108U;
    tmp_msg_0.numsamples = 4U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 48083U;
    tmp_tmp_msg_0_0.avg = 0.190247276187;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.243713449045;
    tmp_msg_0.lon = 0.464111056775;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RGAPYMZGLGOCYGEOXHZDHSGBUHWIVPPBVHKJMLOIWQDCVDNDHFDRVPVBYMXCDXPKPYCMFWRVBRITWEYHYIKQPZPZAWMAREYIUNIYLAOAHPWLEYTKFZESNQUJQCEGJBW");

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
    msg.setTimeStamp(0.981646674576);
    msg.setSource(42768U);
    msg.setSourceEntity(134U);
    msg.setDestination(6656U);
    msg.setDestinationEntity(25U);
    msg.type = 152U;
    msg.op = 175U;
    msg.request_id = 20133U;
    msg.plan_id.assign("IOVNZPGPHGUWWAYHUNTNDHHXREIKTWZFEPYGIQFYCQERPHRDFOAKXEJYIBMUGBMHFJMFQDNNPVYCWTLZEAWJSSTGYGLNXGSVRVKYRZCXKXTZRWROLDALUBEHFMCSUPCRBIVVLCTWSUHAETAIVLCAORSZBLQABNIJX");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 178U;
    tmp_msg_0.value = 0.506080091925;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TXVNOYMEKNKVTOLPZDSGDYXJIHFLAJFMHZGPPRKFZOWZJBBSVGUSAMQCWYHERSHCCFKTGBZODARCTVWZ");

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
    msg.setTimeStamp(0.796667165214);
    msg.setSource(5726U);
    msg.setSourceEntity(223U);
    msg.setDestination(9041U);
    msg.setDestinationEntity(29U);
    msg.type = 180U;
    msg.op = 144U;
    msg.request_id = 38477U;
    msg.plan_id.assign("EBEJLTITHOMBXU");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 248U;
    tmp_msg_0.htime = 0.402425262758;
    tmp_msg_0.context.assign("BVJJDLUCHWFIZIUYDOCWMQFSMXXOWIALLCYTNOXMLWOQPBLCPRXCHHEMHSSKVYQGTIDLBLEHBLQZTIYZKRFDZBNFOGKRWQZAXIEVKM");
    tmp_msg_0.text.assign("YDUNQJQHUHVCERUKZIWHOSEGHTSNACZAWGCLIOOSGXEJPFAXONXBEBDYWZFYVJHIERJVKTMTFENQWBRWZABNGKCDNYFOWXAOUZGBPKGQSXVYCQPMCFRTVVAUFLCRERKJHROTKFZSLXCXTPIMRAKBKMQSYUMRLLKXPPOZIDIUSPWBNCHUGPTWCMMVWGNAHATDRDSLMMJBUNMIOZQBJQYJDQIZKTFVXIYYSNFLJALLXQWDEBJHE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PIYLWZCCFMDZDTNDCOYHKDDASGOGJJSCGURPMAZMETBKTBHOCKFVXJZNPXYQSXJTNLXTCKIWROKNDXMFOCFCPUGBBTVJIXJTSVUUSTWOLWHWLVEPBFMJPPAJDEKUIQRMNQYUBIDNLBEY");

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
    msg.setTimeStamp(0.662122619864);
    msg.setSource(19209U);
    msg.setSourceEntity(55U);
    msg.setDestination(39776U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 38868U;
    msg.plan_size = 3913491063U;
    msg.change_time = 0.277943536639;
    msg.change_sid = 27346U;
    msg.change_sname.assign("OYDUAHTZDGHSERYHWSSDPUDXJZRJTVYNTMVAXASQSEMEJEAOWIPWENZQABSLBXCXMIULYZXVWYCYNNKTNPDUOKIBXFKKROWDKJWBIOFEDIVXYBXTCOHROCTALLKRRPNMJSGFWRQMQVWFOULCHSXAIEXKLKJFIYNCMZUQSQUGJHHBBMFQZVYMOURNGTUNDBG");
    const char tmp_msg_0[] = {-90, -93, -46, 97, 109, 66, -65, 118, -50, -41, 100, 73, 44, 124, 122, 113, -113, 27, 120, -86, 79, -88, 57, 29, -40, -11, -99, -20, 110, 98, -29, -52, -16, 114, -15, -34, 27, 112, -62, 12, 50, 37, -68, 10, -117, -14, -7, 17, -75, -68, -103, 80, 31, -50, 101, -33, 115, 34, 54, -87, 6, 82, 25, -2, -58, 87, 88, -98, 25, 40, -63, -28, 79, -105, 33, 61, -102, -112, 59, 79, 0, -101, 0, -23, -88, 57, -36, 79, -32, -14, 115, -64, -41, 3, 81, 20, -89, -35, -56, -114, 65, 72, 69, 58, -117, 28, 39, 62, -36, -120, -64, -68, -104, -40, 21, -38, -71, -81, -86, -50, 53, -46, 66, -119, -20, 105, 50, -19, -89, 67, -101, -80, -123, 45, 63, 102, 115, 7, -28, -15, 98, -21, -55, 64, -117, -55, -127, -44, 67, -47, -59, 65, -70, 112, -42, -45, -103, 22, 117, 22, 113, -49, -42, 119, -21, -3, 84, 126, -62, 27, 90, 111, -113, -62, -87, -83, -52, -27, 101, 41, 48, 118, 77, 29, -44, 29, 92, 115, 7, -31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VUXTHXWFAQFPU");
    tmp_msg_1.plan_size = 14591U;
    tmp_msg_1.change_time = 0.577305116093;
    tmp_msg_1.change_sid = 41489U;
    tmp_msg_1.change_sname.assign("JOXDEMUPREVMNNEGFVKYLZPUURTQQMWAKEUQROYNAXUGAGQTNBYJWKWTBLYGCEJZLLDWABTKVBKDIRXJDXTMNAJHYURSHGMSCMDANFKLOJRVBFQXNSOJHZFFZHCXWASNHVIKVBIUGGFAPQRSHPXMCDDNZHJQTIEWIJTAPZKUXCFOTNYYXZBCHQVPVTBEYLDMPIKRYHSOSWRWLSICVCZCLQGLAOJWIOBPYEURMCPFPGHUIKXFOFSMZD");
    const char tmp_tmp_msg_1_0[] = {-37, -79, 66, 62, 50, -17, 33, -28, 34, 104, -91, -119, 82, -67, 22, -19, 59, -68, -24, 58, -35, 36, 124, -53, 50, 82, -27, 108, 57, 35, -116, -91, 56, 22, -84, -114, 106, 8, 79, -93, -89, 113, -26, 62, -20, -9, -111, -99, 81, -28, 28, 110, -69, 125, -42, 31, -127, -115, -98, -59, 70, -27, 15, -80, 29, -7, 22, -37, -54, 86, -37, 0, -88, -55, 52, 118, -67, -34, -10, -108, -60, -117, -105, 86, -70, 52, -77, -73, 69, 113, 11, -32, -108, 19, 96, -123, 27, 46, -8, -107, -28, 93, -18, -109, -78, 94, 107, 50, 101, -51, 18, -104, -78, -28, 34, -76, 111, 122, 16, 56, -82, 117, -8, -126, 97, -116, 54, -121, 38, -94, -90, -95, -24, -127, -42, -79, 64, 90};
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
    msg.setTimeStamp(0.32412448162);
    msg.setSource(37492U);
    msg.setSourceEntity(92U);
    msg.setDestination(1237U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 63888U;
    msg.plan_size = 815211829U;
    msg.change_time = 0.399754480411;
    msg.change_sid = 21268U;
    msg.change_sname.assign("XSIORENYXCVJNRRJAXBDCVFJESDEAGVSZSXFDLDQZNIXJUTTREYNEMRPEAWQIMBHWBRMCDULNNANPGPFXNMQV");
    const char tmp_msg_0[] = {59, 76, 72, 115, -56, -98, -75, -1, 66, -97, -86, 48, -27, -49, 93, 100, 19, -56, 101, 103, -99, -4, 5, 80, 13, 18, 53, -93, 34, -12, -7, 101, 95, 103, 83, -118, -103, 55, -122, -44, -127, -58, 4, -32, -97, -22, -107, 21, 68, 103, -30, -69, -8, -47, 26, -88, 70, 122, -95, 93, 69, 77, 49, -9, -81, 70, -37, -99, -14, 107, -51, -54, 40, 23, -85, -13, 9, 89, -28, 40, 102, -71, -34, -106, 91, 73, 51, -28, 122, -118, 89, 108, -68, 10, 7, -3, 97, 76, 28, -125, -24, 85, -11, 103, -94, -14, 102, -86, 121, 15, -72, 24, -101, -80, -41, -20, 1, 13, 83, -113, -54, 108, 79, -97, -7, -74, 26, 121, 75, 101, -94, 100, -12, 40, -14, 113, -86, -5, 62, -45, 71, 25, -12, -58, 63, -98, 41, -37, -63, 92, -122, -82, 121, -107, -68, 21, 79, -93, 31, 4, -52, 70, -83, 25, -85, 29, 79, -115, -49, -42, 60, -86, 52, -27, 6, 106, -79, 88, 34, -5, 23, 42, 115, 28, -108, -5, -104, -68, 119, -2, 36, -77, 71, 73, 4};
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
    msg.setTimeStamp(0.468483713085);
    msg.setSource(18948U);
    msg.setSourceEntity(252U);
    msg.setDestination(7381U);
    msg.setDestinationEntity(195U);
    msg.plan_count = 39649U;
    msg.plan_size = 3261783192U;
    msg.change_time = 0.632198444317;
    msg.change_sid = 45759U;
    msg.change_sname.assign("TNMNCRYHGFZOBSCGUEUSZHUSVASCVINIAJDX");
    const char tmp_msg_0[] = {-81, -29, 93, -8, 66, 89, -81, 120, -24, 76, -75, -88, 71, 41, 54, -40, 123, 93, 21, 120, -19, -14, -65, 81, 125, 32, -76, 61, 9, -44, -1, 115, 70, 121, -111, 109, 109, -111, 125, 82, 28, -41, -118, -118, 57, -35, 24, -90, -97, 74, -43, 20, 35, 41, 53, 58, -29, -51, 4, 54, 102, 121, -78, 11, -95, -106, 32, -97, -108, 40, -31, -105, 92, 50, 82, -77, -69, 42, -43, 40, -94, -76, -122, -58, -70, 93, 125, -80, 70, -65, 113, -15, 8, 86, -76, -20, 15, -74, 82, -13, 3, -9, -36, -8, -5, 69, -77, 50, 69, 90, -40, 68, -84, -24, 117, 71, 91, -66, 112, 18, -123, 115, -105, -93, -113, 21, -123, 25, -34, -32, -74, -42, -101, -85, 107, 29, -11, -18, 70, 119, -112, -118, -31, 11, 52, -11, -124, 67, 10, 102, 126, 13, 105, 118, 64, -45, -69, 80, 9, 126, 27, -8, 8, 24, -61, 79, -112, 103, -87, 11, 62, 79, -64, 38, 51, 21, 104, -40, 91, -125, -19, 9, 111, 88, -128, -22, -9, -26, 33, -50, 72, -56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GBCWPRQZWZ");
    tmp_msg_1.plan_size = 64268U;
    tmp_msg_1.change_time = 0.0136767288621;
    tmp_msg_1.change_sid = 6369U;
    tmp_msg_1.change_sname.assign("JDBYJVAXHWYELYKOWEDZEPMKBNSEKPIAZXHQAJEHPISKKWUAXTVLFYNAIOLAOMRRMEVTCCDKCMRYWHGSHOGISKNUXGWVJNCFYUYNCIGAMSYX");
    const char tmp_tmp_msg_1_0[] = {119, -10, 46, 120, 30, -119, -16, 63, 98, 46, -100, -12, -125, 12, 119, 84, -88, 126, 4, 37, -103, -88, 64, -53, 61, -86, -101, -91, 55, 28, -51, -24, -51, -8, -101, -69, 74, 109, -115, -66, 22, 4, -74, 68, -50, -16, 108, 24, 90, -128, -45, -10, -1, -81, 116, 98, 26, 120, -1, -48, 88, -55, -42, -44, -21, -51, -84, 44, -109, -62, 101, -95, 28, -49, 104, 52, 94, 102, 82, -33, 56, -87, 96, -39, -29, -76, -106, 19, 46, -4, -3, -13, 94, 83, -52, 74, 59, 86, -59, 6, -36, 121, 69, -36, -43, 22, 18, 82, -101, 16, 95, 27, -7, 12, 37, -14, -37, 71, 103, -58, 42, -19, 63, 40, -107, -79, 100, 68, -117, 16, 115};
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
    msg.setTimeStamp(0.0738587524824);
    msg.setSource(46790U);
    msg.setSourceEntity(144U);
    msg.setDestination(9960U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("ZMEFYCXWQJHCROSLCLOEALJQHUNAYRABGOFJPYJKZGFZVCPYEIXQURKANOVNQIHPFFDUDK");
    msg.plan_size = 26833U;
    msg.change_time = 0.586315868219;
    msg.change_sid = 55622U;
    msg.change_sname.assign("JCJQAGJQXLNEHYAUUKWTEKQTKINVIDPZSNJZLSRCONFXVCDJNWFTCOBWSLBVPFMHAAFBPKJUHIUPVIXLOUYBCPVTALRGQHLCLHGAFFEPBIVJGNPYEZUZSCIGAFQBHAANZMXHMYGRIZYFOIMIQGPZY");
    const char tmp_msg_0[] = {99, -37, 55, -65, -65, -100, 98, 88, -25, 19, 51, 71, 105, -101, -115, -57, -59, 31, 122, 11, -1, 120, 2, -23, -19, 92, -108, -18, 73, -20, 25, 75, 105, 7, -126, -36, 47, 7, 100, 107, 54, 48, 83, 83, 93, 112, 112, 26, 111, -105, 77, 109, -40, -12, 60, -49, -21, 103, 106, -35, -110, 81, -85, 80, 65, 107, -39, -19, -30, 69, -4, 69, -87, 54, 91, 16, 1, 22, 75, 46, 27, -98, -97, -22, 39, 77, -13, -73, 29, 30, -40, -33, -89, 14, -110, 92, -110, -7, -75, -23, 11, -39, -96, 41, -91, -60, -122, 114, -75, -116, -14, -45, -99, 85, -100, -93, 24, 94, -25, -116, -112, -7, 106, -52, -51, 9, -84, 37, -44, 111, -27, 33, -5, 41, 65, 100, -52, 58, 74, 82, -66, 100, 44, -15, 65, -61, -25, -125, 80, 72, -60, -62, -31, 106, 30, 2, -64, -57, 117, 99, 93, 79, -30, 60, -79, 124, -99, -89, -113, -1, -84, 96, 13, 7, 37, 15, -91, 65, 68, -126, -62, 18, 10, -118, -99, -29, 1, -110, -37, -83, 29, -52, -115, 6, -103, 31, -124, -80, -7, -64, -23, 21, 49, -26, -53, 46, -91, 105, -12, 83, 91, 41, -16, -80, -18, -39, -18, -86, 84, -47, 48, 112, -63, -31, 53, -53, -91, -113, 6};
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
    msg.setTimeStamp(0.603329389616);
    msg.setSource(7065U);
    msg.setSourceEntity(209U);
    msg.setDestination(58878U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("RJACLTBBNVDZIGWPXPQZGMSAABSOEPQKCHOORGUOYZUXKQTLZYEYOTWTDLBETJXBWBXKZIVBUFYAUFTQWJYNQIIIXRHNATZIVLWSLKNMFUPKEQSIGDPFPEHFACDWVQGUDUVNEUREGVYUKBFKWKCYTAZXDXJTJGPMTMCDHBYDQCRSPVRGMQVV");
    msg.plan_size = 26757U;
    msg.change_time = 0.602341111543;
    msg.change_sid = 50212U;
    msg.change_sname.assign("FCETIOXGRIYVJEQVYCKNHZCMIEMMMZBYPXCJPXVQTDLAWCTNWEGDVAKWSRTLILEQKGUGFRPMHNWMOXUC");
    const char tmp_msg_0[] = {15, 27, -30, -88, -93, 40, 0, -30, -25, 96, -74, 29, -127, 48, 69, -27, 124, -15, 76, -55, 107, -116, 35, 92, 26, -61, -116, 51, 16, 122, -98, 22, -66, 119, -37, -7, 36, 87, 40, 63, -59, 90, 29, -72, -27, 24, 42, -52, -51, 5, -3, -112, -69, 80, 52, 43, -37, 8, -48, 18, 125, 64, -74, 42, -97, -25, 63, -62, -97, -26, 34, -15, -5, -128, -65, -30, -61, -102, 27, 21, -8, -27, 114, -19, -24, 23, -38, -76, 75, 94, -26, 32, 95, -66, -119, 104, -121, 7, -89, -69, 75, 5, -18, -64, -126, 112, -116, -109, -44, -67, 115, 31, 1, 73, -64, -116, -2, 123, 98, 1, -50, -118, 47, 66, -50, -10, 93, -76, 96, 29, -67, -52, -109, 102, 88, -48, -62, -54, 44, 45, 86, 66, 83, -83, 19, -11, -110, -65, 97, -44, -70, -111, -58, 59, -15, 74, -6, -102, 119, 6, -58, 60, -54, 1, -109, 75, 49, -117, -5, 71, -70, 79, 95, -80, 100, 13, 86, 88, -33, 19, 55, 108, 111, 32, 107, -107, -100, 1, 104, 7, 118, 94, 95, -98, -31, -8, 73, -117, 13, 62, -76, -76, -50, -117, -59, -13, 15, -117, -56};
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
    msg.setTimeStamp(0.598077599543);
    msg.setSource(61728U);
    msg.setSourceEntity(133U);
    msg.setDestination(17444U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("RLDXMCYCLEXWBQBSSPEBTJTJUUUAYVJZBQTWWUCNCOXFSMWWYIGQBVTHRYDPLNKZDDVKVFSLLOJURXTJIIFUISZVSYBKBNPEKEAALHNMMQGENQGEJOMLMP");
    msg.plan_size = 30928U;
    msg.change_time = 0.474496898624;
    msg.change_sid = 16717U;
    msg.change_sname.assign("UKLYYSDNTSJVLTOXWDUIGXQYPAQTBDLBNFWWNCLFPENERQJTUGJZNPBKTODSMHXDVMGWD");
    const char tmp_msg_0[] = {56, 85, -82, -102, 107, -79, 52, 60, -12, 121, 88, 92, -44, 96, 60, 8, -29, -35, -84, 102, 10, -28, 120, -92, -95, -122, 54, 105, 44};
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
    msg.setTimeStamp(0.70343317375);
    msg.setSource(43827U);
    msg.setSourceEntity(61U);
    msg.setDestination(10651U);
    msg.setDestinationEntity(223U);
    msg.type = 236U;
    msg.op = 6U;
    msg.request_id = 18943U;
    msg.plan_id.assign("JSPONQGCMHTQNTOZEAREHXRXSFMPUMLWURGJZCCALZTEGQDKYDGDIPUAECIINSSEWELBVVINVWASZBCWTQGFYMBNZBWPAVGRPWRMJOJBLHROXVKOFZHOYVSMYIUTOKMEKKLOQLFWXIKIWQFUXVURLJYCCOIHAVXBEREUFYDDSXABGGPQEP");
    msg.flags = 57549U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.169863839537;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LANDQNZUZQOSDRDFWUBORFPUAMXJDPVSLVTIQCXHKLIIPLVEJXWLCSLNTVIJNIEGZARFIMHHBCMUTWBIUDBBAERJUQVPSAESGAFWFPXTSUOPLZEVOKCYQOTHBGKGZEKQZXWHPFOONMCBWEKUELCRGCYDCDQIGVPSTABDTYNYRXNIQRWHCSJULDOKZWXYMOFXQBSCTYADJHHFMFVHKVYV");

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
    msg.setTimeStamp(0.198630579078);
    msg.setSource(5559U);
    msg.setSourceEntity(6U);
    msg.setDestination(49348U);
    msg.setDestinationEntity(143U);
    msg.type = 164U;
    msg.op = 19U;
    msg.request_id = 11346U;
    msg.plan_id.assign("GYKYCMNDUIGOZICFIHATAXDFFJSQKAZQFQRHAKVJENPHBCTGJSPNLPYDDIWCPBMQEXNBNKFUIREUSGRGPVYHYZCUADYQUPRMPZWONCCEKBRLHEXFQPXKAVLEFIJVXWJLBXKDILXH");
    msg.flags = 40879U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.596637554695;
    tmp_msg_0.lat = 0.394588819876;
    tmp_msg_0.lon = 0.544005716035;
    tmp_msg_0.z = 0.782933910995;
    tmp_msg_0.z_units = 195U;
    tmp_msg_0.travel_z = 0.683334325734;
    tmp_msg_0.travel_z_units = 128U;
    tmp_msg_0.delayed = 12U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SHMDUHNTGRB");

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
    msg.setTimeStamp(0.959878030594);
    msg.setSource(57558U);
    msg.setSourceEntity(172U);
    msg.setDestination(56932U);
    msg.setDestinationEntity(118U);
    msg.type = 148U;
    msg.op = 80U;
    msg.request_id = 32901U;
    msg.plan_id.assign("YGNIFBJIOOUTYMGG");
    msg.flags = 10076U;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.54291859854;
    tmp_msg_0.bias_r = 0.537580468552;
    tmp_msg_0.cog = 0.787278820686;
    tmp_msg_0.cyaw = 0.719454364866;
    tmp_msg_0.lbl_rej_level = 0.622920539356;
    tmp_msg_0.gps_rej_level = 0.909208358227;
    tmp_msg_0.custom_x = 0.368899575805;
    tmp_msg_0.custom_y = 0.339013525137;
    tmp_msg_0.custom_z = 0.871175004184;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JAMREKJGTSVMOCLFFWXIAQNHHIPBNCMONBAHQCTSKQPOFZXFGPLH");

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
    msg.setTimeStamp(0.0313044812228);
    msg.setSource(53350U);
    msg.setSourceEntity(193U);
    msg.setDestination(57679U);
    msg.setDestinationEntity(106U);
    msg.state = 79U;
    msg.plan_id.assign("OXMAGGGMANTIAGLFQEMWADLIFEEFXOGBJBGQVSEZOAQDOMEVCFYSZCPNECNCKYBMAWSIJJNRPUNFNVFHIZZUBMLJEOTLPPTFGFORZXHWWMBGTLURVRNKSDHGYCDFRPOYFXHBDWVZQJYTKHGDSKACHYIITKKEILAEUBWHDVSNPELCVNTJXDVTDUQQRUQZOUWSMBRSHRJSBJPPAMYJIKUNLWMVVXLHKBCXQKKYXRSYXZOHZQIJOWUCPTTZACRLQ");
    msg.plan_eta = 540579398;
    msg.plan_progress = 0.0315044103303;
    msg.man_id.assign("GXXKQERSUBNDICSLVIWVYNPHZWXODLWOCOSGVMLQJGKRVCGAVLMMYLFKXFULGREPCYJREAOTRJXZPKTGIHBDCJKJZGCFMWHNAYUY");
    msg.man_type = 47873U;
    msg.man_eta = 1802412077;
    msg.last_outcome = 31U;

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
    msg.setTimeStamp(0.248992539229);
    msg.setSource(57132U);
    msg.setSourceEntity(49U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(200U);
    msg.state = 148U;
    msg.plan_id.assign("MAJBADNDJHQMIHCCIJNXPRYVHMQUOWJEVGQZEGMTBKNSSBKQQSMLMGWTKWNSGZJNYVIKDZHZSATBLEPYCBQBCUUKVVFCWCXWAZSXIRUWYPYOPRFAUURTKJYQTDNMLXZOOTNCBUNEGARUYAIHIIDLCDTSFRFYZPPPRSDGOOUDXXXUMHBJKDEXHOKWHFEGAMKLLWRLJVZRGZPBNHYOIM");
    msg.plan_eta = 1209399244;
    msg.plan_progress = 0.965396265324;
    msg.man_id.assign("IJUCEWEFKXLYBTKFVKELLASZEEHCVLFZMNDYTTLWPZSDRRVSPASTGGJHAQJRRDZQDPWURGNIMXUKDXCUNXSVKFZYACNFJQCOFNNUMXCPJARZAJZOXSHXJDUWVNVJQDJWSUTOIUGATGGBDDGMPMPOOEYP");
    msg.man_type = 38609U;
    msg.man_eta = 1413765534;
    msg.last_outcome = 134U;

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
    msg.setTimeStamp(0.622512256977);
    msg.setSource(10702U);
    msg.setSourceEntity(0U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(70U);
    msg.state = 33U;
    msg.plan_id.assign("SWGSAHZFKHPDSAMODNEYXVOQZQAWJQWRJHALHUKLSERXGICEOJRHEUAVXLRCYMCYMPWPJWLKLNZDUQFPUOGAPFYCTFMATVYTMKPCVUIRCTICSCJXVPQSVQBZGOEDMHNIIOFOKDNHDMPZRGTLJLZFKWENRVZCOZRUGBTIBMQHDTTEVRBUYXXYSFLJLGDOZKXWWEQKY");
    msg.plan_eta = -975865119;
    msg.plan_progress = 0.904748911874;
    msg.man_id.assign("TSLRRVZGELOGKIVYONOBFRQQTWZCCTCKF");
    msg.man_type = 1291U;
    msg.man_eta = -328116348;
    msg.last_outcome = 150U;

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
    msg.setTimeStamp(0.0986371720619);
    msg.setSource(7231U);
    msg.setSourceEntity(132U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(59U);
    msg.name.assign("RZZNWTNVAXFOXODIRDWMGORFKJRTFHCZJZECRDPGMDLQJJNTFGUTABUHFKQIEWSCGWMVWKYYHCGWLTIFDXGGINDCUYDESLAZDMQNHZHALUSASMPIICJUQROBQLRDVVQIDTEHTYMBBFHVUGQKZBBMIAANVALKPFWXGMKOEYLXTCWBVPYELKVESKTJYYPLNJACEBXPVPSZWUJFHHRXUFQICPOWTLRH");
    msg.value.assign("DISJOKXCVOFDIGIDOXESKGCPFSPKHHFCHWYZLMEUEGEYYWZDPZFAMGYJYBOWWPBNLFFOPQQVVCENYSESUMQFJBPFYRCWAGAVHW");
    msg.type = 183U;
    msg.access = 57U;

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
    msg.setTimeStamp(0.424450487748);
    msg.setSource(27220U);
    msg.setSourceEntity(187U);
    msg.setDestination(29839U);
    msg.setDestinationEntity(125U);
    msg.name.assign("EJSHGGNRVAEYTNQYPWNHOQDIGMHZFEXFGKHLLBBCYRISRCIXXGGFHPFTMKTUHXIOKXZNJBIMPNSSVGULAUZYORTLAWODZAPSCCKRIQWZKTMWCDWOFZPBLPCKQVSUZOMEJAPYVVUVVVNUESDYYAJQVMUJRLBBCBQENLWFQJAFWCHWJNS");
    msg.value.assign("YXIGNRQITLHOSVKFGVUEJIPMAOPICLEBOUAGCRDFATFYDOTLBNKVRKDKYXAKGJDCTQQNUPLNCIDZKEWAAQYUCHHMHJORSWGPDLVNLVMNMRXPXWSIUBWNQZUFUKUWEPLCQXWFMKAIIRNNEJPOXUGPTSDJVGLQXBIFEWDKZJXLZRCJBMWZTQYROBYEGOZCVYVDZVHFYOWSHIMBYSQZMACGZRVHOA");
    msg.type = 145U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.588941720187);
    msg.setSource(16575U);
    msg.setSourceEntity(80U);
    msg.setDestination(8676U);
    msg.setDestinationEntity(97U);
    msg.name.assign("WDHXPPTNDRGYACKTNEM");
    msg.value.assign("WNQOHGWIDMFRVDOSRUCBSKOSFDAYZJMNVNKHWTEJNOBZMDYGKWRREPXLPVUCZGIYLCAYJPFLIEFRBROXGFHUPGXFNZIVAGTJCSGXMPLILMJYND");
    msg.type = 37U;
    msg.access = 18U;

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
    msg.setTimeStamp(0.0124567906361);
    msg.setSource(38741U);
    msg.setSourceEntity(172U);
    msg.setDestination(40209U);
    msg.setDestinationEntity(119U);
    msg.cmd = 200U;
    msg.op = 8U;
    msg.plan_id.assign("ZKQMLSRMEXUMNAATBNGYLNFGRBDUQNJWOVIPJHXMCVYQOUHMOAJZBOWTJZVCCGLCNREPSPZMNQJGNEYHPHXDJBDSZVPPKHACIGVKZROIATMNVTXZBCUFMHYJFHLWVYGUAFBTIYJGXODNVEWSKLPXYURITFOPUFDGCEESAFDJQCHBWRDXKFZARHUQGYLWSEAPDBJFTZSLMULEKKPUDT");
    msg.params.assign("OZXFWKXDRDLKR");

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
    msg.setTimeStamp(0.180678975445);
    msg.setSource(4785U);
    msg.setSourceEntity(217U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(87U);
    msg.cmd = 120U;
    msg.op = 242U;
    msg.plan_id.assign("OWUERLEOYVYJQIYCJGKGDNHZHFSZBGSMYAIEONTLRJSDTJXPTQVEALOMACVRIWLVUIPJCKIHEZAODRPKFYTRYQTJGCNZTXCGWIYBDILMQXBKXJKXFMNMO");
    msg.params.assign("NPPROUDINDFVWAXNYMWUVPILP");

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
    msg.setTimeStamp(0.966156834914);
    msg.setSource(24849U);
    msg.setSourceEntity(159U);
    msg.setDestination(49638U);
    msg.setDestinationEntity(100U);
    msg.cmd = 185U;
    msg.op = 136U;
    msg.plan_id.assign("PYWWGBRXGFGZHYEPAFLECHDZBERSMEJXLQPNKQYHDIPBOZFHDCVOJRTANDXWVDGDYOYNYCLJLCTSMGUWDOJGVUXRLSJSFMGVIUYBONFOAYMCKVSPLPUNRMITMXEIMLWNGAXKNKFWESTEAHCUJLB");
    msg.params.assign("QPKHMZYTPFHFTIEVWGOEEUPRZLEDKFVCYBREXZWCXIWPBQLFSGXAJOEQSGDKCRQDPADGTUVMGLNJVBSFQJPXKNZGCXWTAWFREWAXSFJILJDBVAQNJXUTWORDLXHKSEXVMGOIFPQOTZLGTGIUSJWASZUCOZREYHDHJUUTZ");

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
    msg.setTimeStamp(0.663586317848);
    msg.setSource(15196U);
    msg.setSourceEntity(120U);
    msg.setDestination(57693U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("XQGZTBBLXXIOSUZOJCAWQIFKUZTPCUIYJTXVCUOFGTSNPMAXXQLCYETAOAUGYMPNJBQHKATDYJQSWVYAEHIARFHLWWGHDBRKDVLBYQPWEJRJHSIPODBLINJWSKVZQCYYBKMDKOVMELWNDDRXWGXHXHZFZDMRBPVHKTDGNUYSTHUUKJORENQCMAMWOGFZH");
    msg.op = 54U;
    msg.lat = 0.373438441559;
    msg.lon = 0.0477409541033;
    msg.height = 0.0506178990547;
    msg.x = 0.490340820031;
    msg.y = 0.557431751607;
    msg.z = 0.736969073781;
    msg.phi = 0.440796387011;
    msg.theta = 0.621275095531;
    msg.psi = 0.257728620991;
    msg.vx = 0.89899926309;
    msg.vy = 0.392957355259;
    msg.vz = 0.570799435179;
    msg.p = 0.89584657904;
    msg.q = 0.690361549738;
    msg.r = 0.79656078615;
    msg.svx = 0.0481173255337;
    msg.svy = 0.0174410694043;
    msg.svz = 0.882063052641;

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
    msg.setTimeStamp(0.655250127966);
    msg.setSource(56119U);
    msg.setSourceEntity(128U);
    msg.setDestination(63816U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("OQQCGBKOHUANXVDNYIVAICXTEHWBGHPDXMDWGGQUCAYJNTEIPRSKCWNXOAYVSYQVBIKOFRFPOBQXWTWZSCAU");
    msg.op = 81U;
    msg.lat = 0.141660811756;
    msg.lon = 0.973230822913;
    msg.height = 0.554471522592;
    msg.x = 0.198001562718;
    msg.y = 0.645298848227;
    msg.z = 0.383261699026;
    msg.phi = 0.293632127331;
    msg.theta = 0.855433932705;
    msg.psi = 0.557088941974;
    msg.vx = 0.645509538352;
    msg.vy = 0.216031843791;
    msg.vz = 0.882912853102;
    msg.p = 0.136906080764;
    msg.q = 0.449791105671;
    msg.r = 0.538535533597;
    msg.svx = 0.0850377275691;
    msg.svy = 0.438340252778;
    msg.svz = 0.752946281823;

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
    msg.setTimeStamp(0.988545305048);
    msg.setSource(32039U);
    msg.setSourceEntity(21U);
    msg.setDestination(4849U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("VIVALPBIOPUXAORICVJ");
    msg.op = 181U;
    msg.lat = 0.727287171578;
    msg.lon = 0.80152697016;
    msg.height = 0.190060297541;
    msg.x = 0.834964846194;
    msg.y = 0.35505299906;
    msg.z = 0.834882469136;
    msg.phi = 0.478646385479;
    msg.theta = 0.901220034614;
    msg.psi = 0.875978775143;
    msg.vx = 0.843902396241;
    msg.vy = 0.723716857815;
    msg.vz = 0.25044955402;
    msg.p = 0.269072453461;
    msg.q = 0.725227870843;
    msg.r = 0.540479890615;
    msg.svx = 0.35101196126;
    msg.svy = 0.522890845293;
    msg.svz = 0.552094361322;

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
    msg.setTimeStamp(0.848193424921);
    msg.setSource(46260U);
    msg.setSourceEntity(37U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("VRGKCHCULJGRSFSNWPFOLXYTNWNFGGAIQMEWEIQPSCKWRIAHXLSTRQRTJOBFNKXCRZZXWMVKCHGBOIVNHZYSGKFJEPBVRHJDTSUCCBYUFVJHDCLVSEGPLAQBUGECMZEPXDFDCPJU");
    msg.type = 106U;
    msg.properties = 80U;
    msg.durations.assign("TSENBXIDHNLOHWOMTSSVTKSBYCJKMASJFCUARDWGRQPPYEZKFEBHOJCKVWXSRMJRYFGRVJZBZJRYKL");
    msg.distances.assign("UGEBSRQOOFOXIJHVKVZFWYTPYIIADXRKYLUESCQJNWZOGYYNGCPANQGFQAHZFXSDVTTLCAXHKSTTLQYHFSUHBMMKAJEPXZTJDBMULUWNKWNKOLRMZXEIOMPPHZIIWBICGWRUJVPOZEAWDILUUSOLYDJBSKWYCCRNGETQJFBVNLXREDMFXZKGDJCAVHPWP");
    msg.actions.assign("XWNIFCWSQZFADTBIIWINZEJOFTGLWJEXVRZTXHYMDVXRJUDCVNWHSPSNLKKGBQULHASIXZDBSPGSFQBCXYUMAEPPWYJKRYAGEYMZRWRXBTCMFJOFBUVXQKVYOMIZARGHQZNCZCUALMKUTUSPGUHDNSLQQJPAMGZULBYFETKCCKLMBYAHPFFRDIMGLTJGXDDKNDCWORYPILQSWZHHHUNTNCHBEVDBMJVOVXSROVEQLKPIJAVWN");
    msg.fuel.assign("AMQOSZBKNMJDNNREFGBWXWRLLFDVGZLRLTPGJGGQGSVBDUTVCDXDTHIHIQFWYV");

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
    msg.setTimeStamp(0.7491574836);
    msg.setSource(2369U);
    msg.setSourceEntity(219U);
    msg.setDestination(57458U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("VGNVOJUXABZ");
    msg.type = 228U;
    msg.properties = 156U;
    msg.durations.assign("WUOYUDXVVADBIWFEJJYFMRTPSEWWMDKZNSWTNZTLPLFKXEVFACQKKZPROEO");
    msg.distances.assign("HBUHERSWTZEXCHNOGGTBVJW");
    msg.actions.assign("KLAKHVNSJZQTCIWLGEAXGNITTVDXYRXCSDWFPVIYZCXHNRTSUUAIHYMBXQPBQHRVONGJZOCACJB");
    msg.fuel.assign("HYMVNWMMYTOXKCVITGFIRTRFHZTWCSXSVPNFEREUCZJUKYGGPEIGCFLNPYWSCILBZQSQDWVQDEZUGDUPCHZYPKSJUGZAWITOBXGZYIOLDRQOQRRLLGXVJNHTNLTALAWBUQARKMMMWOXJPHKVIWRASKEDPXJFRSMKDMDQL");

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
    msg.setTimeStamp(0.785145186571);
    msg.setSource(50623U);
    msg.setSourceEntity(234U);
    msg.setDestination(955U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("VMGHRBQCLPOTEZWTVUFBOFTHGPWNXRFPLNBHKRJHLPCUWYAWEBODRNAOAFNEQCMSWBEAAVYHUNQRWCGJLUAMXOGPTASEMCPECRQYFSJZPXLVJFIXYYDKVGVJIXHHIJEOKNAUNILDSDDQGGLIMCVHWIMIEIQQTZRRKJHZBKNVVUSJHFMCGZDIIMNMQYEJFBCKWWYGTPQUDTKQZOZKBXXKRLLUSOOZYJEXSSXFPNPXTCBZVKUZMBDDOGYTUAWFSA");
    msg.type = 30U;
    msg.properties = 18U;
    msg.durations.assign("HXACIUQJSSGIVDEUALXYJZRIKUXLFOZHUJLAVEVPDNBOHETZELGCEDQIQTSLHPWTBCFFCICZDWPSDPYDQAWDOBKHPBTIYAGLZCHIEKBPJYWTUXBKFPQUMFNBLMSQWTRMKHIECYXVNRGSJSZCFNUNWMCTMTYGSOORQHEYSKYQWFFJKRHG");
    msg.distances.assign("EEYCFBIAHGVMHFVEVNWWQAZTYLQEHPFQOPJBLOSKPRFEZKVMYJVUGWNYNXRGYKPCNLUISDOYKMPTCCPJVISSQGVIDUXZZBUTKMAPHAZCAURQGMMNMYMZRI");
    msg.actions.assign("FVSNUHFGIVDWUWAJSGRFZLTMXZDMLBJNYKSUIQRQYZGMOYFWWRDXYGHGMXINKDEEMLSWINTOVTSDWUBIYACAOUNIUVBGBQFURLPQDVPQDNQPEJBKHNOLRHWDCAAJCZRJCYOIQUTGFRBBPZAAUCSLAGKTVKJXLJBCBVAZLREBVPZLJDTTZMTXSEOOKEGXSHSGVEMHXPITTCYIHYHHUXZCNJCOESOZAELMQPRWRKD");
    msg.fuel.assign("BSTDRXNMUPHWXXJZOCDEKCTQQGROFCWOOHWSEZLRZMOLRCMPEBTTIEGSVKYYYPQMTLXSIFACGCOFUDGDWNTHKBVBEIYIWIZXDCMAQRYEVXQHU");

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
    msg.setTimeStamp(0.558572992555);
    msg.setSource(5205U);
    msg.setSourceEntity(187U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.301405720845;
    msg.lon = 0.800357790373;
    msg.depth = 0.750187754987;
    msg.roll = 0.153602047003;
    msg.pitch = 0.657596357817;
    msg.yaw = 0.119612439346;
    msg.rcp_time = 0.0113684927895;
    msg.sid.assign("FKEAXVDETIAOFTTAQZCDRGMSIYIEOOTEGNSFWKPTLXSELXLGVDJGVXWXOZURCHINZMFHOYVMGECHRSNJGJNEXRAMMLBJNJMKFBTUPJWPLEBPZTZXQQHKZFOGXYPVSSJPWVLCDUZAMBADQUNCMIWKGYIRLPNSUBJBDGUCZHBPCW");
    msg.s_type = 127U;

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
    msg.setTimeStamp(0.248558791666);
    msg.setSource(54398U);
    msg.setSourceEntity(175U);
    msg.setDestination(59475U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.331818037265;
    msg.lon = 0.224839172636;
    msg.depth = 0.368662681861;
    msg.roll = 0.660872023978;
    msg.pitch = 0.159060717649;
    msg.yaw = 0.864075606384;
    msg.rcp_time = 0.292159842904;
    msg.sid.assign("RDFPWXKSZOIUFXBQJKHYPJBDTCPSCBCREQOAPIGEORAWMXSEUPWRNSUQIVFCGPROKLWVAELXMJKOAYTHJWUZNLSIYLQZVFNQGHYHDMWIKOSEFAXTVZHVRKBTSMAXQFBGIGZCCNVQYRFPEGHYOCUCMDHWAFBBAVSIJHDEPTXDDLBRVGNWIUWERNGCVSFHKYYKKL");
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
    msg.setTimeStamp(0.192572450046);
    msg.setSource(11169U);
    msg.setSourceEntity(246U);
    msg.setDestination(35655U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.237543009738;
    msg.lon = 0.736133348309;
    msg.depth = 0.967019952026;
    msg.roll = 0.69103008012;
    msg.pitch = 0.507391726079;
    msg.yaw = 0.206141955897;
    msg.rcp_time = 0.564308729734;
    msg.sid.assign("ZTIEEEPMPLZJVFKGBKWUMDVPOFVCAQUFKGMIYMSOKJKCSWKHDHPAEFUBYSFTAGSRGACYBADUPMRHDNQCJVZXOYGDOLBHTWIRYLEKHCXLVPRCQIHONZYRAPZIXWLZUIOGFHMY");
    msg.s_type = 205U;

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
    msg.setTimeStamp(0.450292295678);
    msg.setSource(23906U);
    msg.setSourceEntity(54U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(19U);
    msg.id.assign("QMDDBYEQQJWRTZNEPSXMYDL");
    msg.sensor_class.assign("KQYDYQAPICGYFEQVORVAYRMRPKQVFBPTBTWEYAEHBANEVWQTWYDILFBXGAVNSCWKETGHLLGRBHUMWKMZTCSMDJPOJOBPSL");
    msg.lat = 0.808727954541;
    msg.lon = 0.41608353097;
    msg.alt = 0.197176844853;
    msg.heading = 0.617068667684;
    msg.data.assign("XHDTAQZBCJUBBGHZMXCSVTMYZMDDUGSXTIFTUBKEOEXDXYJSQBJACUQLKEEPPTGVVILQTVNVNUKVFTLWULKAAAJNWGYBGI");

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
    msg.setTimeStamp(0.972543313138);
    msg.setSource(62556U);
    msg.setSourceEntity(169U);
    msg.setDestination(570U);
    msg.setDestinationEntity(11U);
    msg.id.assign("HDBSOOPEPNAVLQFJXPBFIACJKXBTEWHDSPUPIUUDRNPZSMOTFUDTYIYHEWAADCOPWBIMCONKMELBQRSFLXSYSOGKGYXALJWRWCFIAWGSVFNFQQTPZUKGRMVHWKHECWENBX");
    msg.sensor_class.assign("CQCDRQPGRJRMFOTWNSELEHUIMHKXJJAROWXOSTCGAULSXNTLWMLTAYKOLNSPDKNJXNLIINVWPSKBJMEZKMTBIYPQNBKPYUDVGVGHBGVAPUWGSZHQYUHBINVYDYFAIQWYEXIHRXDQEHQVDQOHVRDSIKAFBGQGRMRZHCTFGMRSUCDTRNXLJHEKJACL");
    msg.lat = 0.257105054366;
    msg.lon = 0.477827448738;
    msg.alt = 0.960017020297;
    msg.heading = 0.241105553647;
    msg.data.assign("FJLAUXIZGDCZJACQMDMPKHBSMVOBKDIEDQYHIMUYXIPFAIEOKOHEICXXEQYB");

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
    msg.setTimeStamp(0.0397427513457);
    msg.setSource(7733U);
    msg.setSourceEntity(15U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(24U);
    msg.id.assign("HPGEONDXBKVUXEYQMCTVZYKDEFJIROMEPLWJSONQCHUALHFGMGTJJBKBTT");
    msg.sensor_class.assign("CPYIZMFCHTANYARQSRFOXIXAALDLLSUGTBQFBWDVLZZWZEBGFDKOATGRCXIMJERXHWYJEFJBMPQVYNHYRNLNSSKQDFRTUBPHUKFVISIUMBUONRJTGGDOYGAJGBJDSYHGZHQR");
    msg.lat = 0.385572539697;
    msg.lon = 0.516418536409;
    msg.alt = 0.334866913818;
    msg.heading = 0.822719692148;
    msg.data.assign("OPHBGRBQKZFBUKDPIWGYQUJSPWAWIDVRMMALEPEFYCUNYHSURWVIRASCBQRXOWUJPRWFYZHGRDHKBDWDTXEOKCFSVVIDVTOZNEJJCBTXBREQYUGTIHSCIAJEJYPTWIGEVFKTMXEUGDMPWOPNVZBLAMSTHNBQKSAJBXCVRHSYNRLOQJUZSLLMZGMILNZAFLGOOJLQNNDIFAGXWTYCXHCVFPYMZXHMQCAUTHXALELOXVFKFIJZDSZDQTKKGOU");

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
    msg.setTimeStamp(0.244146151183);
    msg.setSource(41023U);
    msg.setSourceEntity(234U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(106U);
    msg.id.assign("WUJMWBSVCVTRHPUWBTFOKVRJUYCQIPTRCORUKUDZBKFXHRYDBYIVYAJEFELMNWRLMSJDXCFTPNQIWCBZBQXSPYNKAHHLAGLQXIEZTZOGWJXQHCRAIEFICVDMUCALNHDZKNNDVRPAVMSHWXZBMPNSKKJESHJPBMIGTNZTWSGEQVXOUMFVRGOEAY");

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
    msg.setTimeStamp(0.706881826685);
    msg.setSource(40442U);
    msg.setSourceEntity(80U);
    msg.setDestination(38210U);
    msg.setDestinationEntity(222U);
    msg.id.assign("WEYVLPMMRQKQRWYJTTVUZTMWASAPDLJYDYHPFXQ");

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
    msg.setTimeStamp(0.554343852842);
    msg.setSource(11106U);
    msg.setSourceEntity(201U);
    msg.setDestination(9192U);
    msg.setDestinationEntity(15U);
    msg.id.assign("MRRGEPQPLDB");

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
    msg.setTimeStamp(0.0130322158872);
    msg.setSource(52855U);
    msg.setSourceEntity(85U);
    msg.setDestination(14896U);
    msg.setDestinationEntity(87U);
    msg.id.assign("JTHNONLTODZJKJPEIHKWMAWIRZGCIDLZJRDBRMIYYBIGCCHGGAXSSRPNZQLCUNZHBFQEAFEEXROBLVLCQJMYQLMGTQSCDEBYAUBYPFZADHFOTUUOOTHYVYUQPNVEEGDCRWIDSMZROAIKQUOAGWPRVTPHTJKVSKXUM");
    msg.feature_type = 243U;
    msg.rgb_red = 157U;
    msg.rgb_green = 233U;
    msg.rgb_blue = 226U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.265084646617;
    tmp_msg_0.lon = 0.605924111251;
    tmp_msg_0.alt = 0.94615507566;
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
    msg.setTimeStamp(0.0138832971684);
    msg.setSource(36740U);
    msg.setSourceEntity(5U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(198U);
    msg.id.assign("RGEGUUELAXOTZVQAVBXGKHHPNPJWRGYJXGVUTEYPJGWIZSMUZVFMUXFOHZFHKXPXIRWCGZVVAEXNS");
    msg.feature_type = 138U;
    msg.rgb_red = 241U;
    msg.rgb_green = 74U;
    msg.rgb_blue = 108U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.138862597347;
    tmp_msg_0.lon = 0.563973626459;
    tmp_msg_0.alt = 0.472076246722;
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
    msg.setTimeStamp(0.444654649812);
    msg.setSource(58388U);
    msg.setSourceEntity(95U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(202U);
    msg.id.assign("JAICWAYRRQWVXXH");
    msg.feature_type = 158U;
    msg.rgb_red = 87U;
    msg.rgb_green = 233U;
    msg.rgb_blue = 51U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.366325397929;
    tmp_msg_0.lon = 0.32785624663;
    tmp_msg_0.alt = 0.876834913764;
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
    msg.setTimeStamp(0.17526079605);
    msg.setSource(45311U);
    msg.setSourceEntity(181U);
    msg.setDestination(23123U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.728913872328;
    msg.lon = 0.12924267595;
    msg.alt = 0.739301503366;

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
    msg.setTimeStamp(0.404014037743);
    msg.setSource(2147U);
    msg.setSourceEntity(104U);
    msg.setDestination(18178U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.448411234034;
    msg.lon = 0.894000104299;
    msg.alt = 0.567960074771;

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
    msg.setTimeStamp(0.600136696098);
    msg.setSource(39906U);
    msg.setSourceEntity(141U);
    msg.setDestination(53412U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.981567075953;
    msg.lon = 0.145195892964;
    msg.alt = 0.331675257626;

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
    msg.setTimeStamp(0.345827946373);
    msg.setSource(62501U);
    msg.setSourceEntity(156U);
    msg.setDestination(10086U);
    msg.setDestinationEntity(158U);
    msg.type = 32U;
    msg.id.assign("SPFAIYUSYLGVMIGGGNRPKIOTEZXHJBQTRZDVCJTMXUCIONDFYTTVXEHUFYLDAJEXHQIUZPUPCKDLRYVEFQJKSOGYLSVLPHAOQLDPRPTPACJMROJBJXAKAWHUUSMNQXIWTOKDABZGKBQEDHOQZKWFNRZMOJXWXTFYIMIHTWRHCANCKLEMCRQBRCUWJTNPEMJSBVSBCMYKAQFUBZWZOYHVIZLVDXDEAFSBKWWSEVZFGYNQCXBUNNSDPWLEGFNHGG");
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 85U;
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
    msg.setTimeStamp(0.905388897367);
    msg.setSource(48269U);
    msg.setSourceEntity(228U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(48U);
    msg.type = 163U;
    msg.id.assign("HHBQNDBHCU");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 155U;
    tmp_msg_0.goal_id.assign("RJPFVEFBTLWLBGEDOHRAKI");
    tmp_msg_0.goal_xml.assign("PSUNJDOLLYUSAKWKTUYJLBRLBKMDSAMBZXNNEHLSNHSNAWALLZPVIJKIKDRJKOOZYJIUZZJIGZAYIDGVPBDTHWNMVTEFJMBPRGVQZFEQRAXAOBBZTEGCLTARZQHFNINDSLQVCEMRWPJJTTYBKCERGHQOYSEMKBNUQ");
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
    msg.setTimeStamp(0.37746156339);
    msg.setSource(23620U);
    msg.setSourceEntity(24U);
    msg.setDestination(25207U);
    msg.setDestinationEntity(15U);
    msg.type = 27U;
    msg.id.assign("RKSOWZEXPXSBKRQEYMCUAAIMPSVUZLNMJCNWYYZEJSECQJBGFOTFRBITNLUVKEBHVAVAHGWDRZPJEREXGHRXBMHYEPNKLKGSDKDPBAZYSMXJEFWFDMCHCGAHVMLILQALPZXTFQWRTSWFHCVFIUADIWFUQANOTKBQYRMDZTVQOXNCTSLMZTGCIUTPUIUOBIMGNCBKLOXKCVPOZEGKHQUISVSDDJDXNWJ");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PAFYUXNAPSBPWUXVIOEJIYFISANZNBVEGSBPZVIGIRBPKGJUVXTLMUTHJONMZFACMEJPCOXZMRGSUQQK");
    tmp_msg_0.value = 207U;
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
    msg.setTimeStamp(0.820652731214);
    msg.setSource(63013U);
    msg.setSourceEntity(83U);
    msg.setDestination(53670U);
    msg.setDestinationEntity(187U);
    msg.localname.assign("FMUHZCPFDDHUSTDUDNXFTZJMVEGPWDCNZKQAYFRCXBQZMWDTAYBSNFMQMQZGTTDJREBAFROCCQAPSLKWVOFSHAUBEUXIOWMXOQTHYNDNVTNGMKMWRYHTHKFVPLELYOLVEGYZBJKKISGKRPUXBLXXHPVUJINKIPL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QVRZFJHYAEKCIMEBOKXNTLKTTHYKJEXCM");
    tmp_msg_0.sys_type = 229U;
    tmp_msg_0.owner = 50922U;
    tmp_msg_0.lat = 0.703404243374;
    tmp_msg_0.lon = 0.629484235444;
    tmp_msg_0.height = 0.700813113064;
    tmp_msg_0.services.assign("OHDXXBFQLESZSGJUZRHIKRHZSJTFLAPANCIXGASQWQLFEMDFRGESKQPZUYJXIXMTGGZKJBACFTFOOTECHNFLANIMGQFUJOBYLBQXWDAWXKRFXZEOPRVQYQHAWTJ");
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
    msg.setTimeStamp(0.0755191208936);
    msg.setSource(19543U);
    msg.setSourceEntity(85U);
    msg.setDestination(22616U);
    msg.setDestinationEntity(243U);
    msg.localname.assign("JOYWCIWJBPJFUYLVRQURKZBMDHARLJLSKSVKGVQBTBMNIHCBXCPXXEWLAAMQJITBKPMEGRQNSKCIYFGYCBDAAVALYSXVNNZIWFCPGXHRPKVMEPNUDSYQOMSTNVHJTWGFHOLNFCYRUNIHOEVPCQIUSTFUKZVFGCNTMROEWHSBZBGWWXERLGJOPDBRFQXFTELUUZADZSCEOITNZJRDXLGEKOOMYIAWHKUZPXLKMTXJAUEYQAVDDZOTSYHJDHF");

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
    msg.setTimeStamp(0.681571946129);
    msg.setSource(35776U);
    msg.setSourceEntity(37U);
    msg.setDestination(62695U);
    msg.setDestinationEntity(108U);
    msg.localname.assign("JMZDRDPQFLLRGBOZLNTOHLAUPMFTBOWVIMJEVAFSHWQNJACRHNMHQIVAYSKYKROXZUY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RYEASQNVJNTMRMMADWDAKDLWFEYAWVGJSMZSIJVFIKSVHPIQHTVXO");
    tmp_msg_0.sys_type = 92U;
    tmp_msg_0.owner = 40881U;
    tmp_msg_0.lat = 0.729295295183;
    tmp_msg_0.lon = 0.291274961468;
    tmp_msg_0.height = 0.955878248063;
    tmp_msg_0.services.assign("LOZQSOCOVLRKXPBZZDPKRIZDGQSZHQVIMXNLJYSJMUYJNPFEWYFMLNLQNRRWDRTXNZXIBMZILNOGJTFWTHEEVICTTUUBSGBXQZAUAWUSGCQXQUBKMJWRPKFWKVAB");
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
    msg.setTimeStamp(0.438447059051);
    msg.setSource(23728U);
    msg.setSourceEntity(113U);
    msg.setDestination(12334U);
    msg.setDestinationEntity(18U);
    msg.timeline.assign("ATBUDECXOHFIGNXKTJRVPZSMRKQKDVPUAKTSWXLMPXYKRORSAWEIAKDVDOOJUTBYJPCWFEAKVGZZNQHJSXWCJRVBPPXJLQQCBYYUJZWPEKIQFAORQLCBPNTHUEHKZQPWYYTWHAVMJGYWVDISBLBKTXUCBNCLNAGOXQIZFNISV");
    msg.predicate.assign("UBKYYVDQKSPNLUSAFNEYWMPTJPRFWTQAOBYHGEFGJHCETKSJARXGIYLJELACXMNUZMHDSGTMLQOKCGJSPZKNROOBD");
    msg.attributes.assign("GZVGYQJHNSQAQIZFHNOSYDSTYKVDVBDXZAAVPSIMHPEOTSNOLOWPBHWBVPFISBVOAEKKDMPUJPFONMNUAKRAQBUYGTHLQFEZRIAIHNRTMQQLJNKQGWLEPSDURUWCBMGDACETJYOWJXOXYTLHAZFFKZCHWICPDAPWBHXKEULTNTEJYCRVMUWCBCIPBXWSTDRKMGRXOFWEHURNSMSLJEGRXEYYIXMDBFGNVVZVJTGLUGQCCMIKOXXZC");

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
    msg.setTimeStamp(0.810476121714);
    msg.setSource(28562U);
    msg.setSourceEntity(197U);
    msg.setDestination(38275U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("YSPIBURUWTNIRVERJGSSUGAWCXVLWZOXYWSYYQEKKANZBJGIBZQWCSDTHBNHLVIQNFYTWPCSLGSOFKVJLMOMCEHILMXXDMBZDIBQBOCFGKGWNKZBOJGAOGEDEQSHNUAALRZULFXMYJVLPCMENQFYOTPDPZLJJZCNVGIDXIDUMOHVNTHRFKFREXRZGWXTECFMQTTBBYARDUHEZVMQVXAHKRAJCTQWHTJ");
    msg.predicate.assign("DDWOZBGETRMVSUNIVTQWVIOQWWKPENNIJPMTCKCUOHNKAFJEKAXGTSYEIZDWHRBDEUSFEFEWIEJDTNAJRUNWVZOPRBTFQJZGSLKYGAMTLGZQPZNLRWCMVICHLSPBLDUTHAYNYARCFJCJIUXNQQOFYFDAMUTMSGAHBYHCYVXIOMUKLTHOPXSNKLPPMQAOPSGXXBYXDGFJLXOVVMBZHVULECQRBKVQQEDFBJZSRZJXYOPALCICGF");
    msg.attributes.assign("FVZFEKTCDUSVDMMUJBXOVWDLXICTXCZZFQMRGUOJNPJYFASMGULDSHRLGEZCSTQMBQQJSCIWKNCRSUNLWIXQWIYORPYPTPANZMBZFEUQGPXRAXTKKUDYUBMCYHFBXJJVSRRGQPGKOGRDNOPZKEZBAWVVFELMBHWQLJOAWFBZMXIKNOEQIOALVIHHBW");

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
    msg.setTimeStamp(0.940655042535);
    msg.setSource(52594U);
    msg.setSourceEntity(210U);
    msg.setDestination(27354U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("DQWPFTBYCXUUBUSXRQWWBRWPGGZVIITCBELPQTCBPIEZYAYNARPOZVMOCCLFPOCWOSJROFHTGOKIURFEJHHYNMRCCEEHLDYVMDNNAYKTEAXOTQGFOQPMJNNBADMSWLVWTGQSYDTLOZRLSJCIEFKSARXSYKCNEUXMJUQKZDQUBABNVIGVYJNZIMWQPGFAHUXXLGVULAJVPDZVMNZ");
    msg.predicate.assign("AKCJPOEWQBFVGDHUKJXZLFGKCKMXJOEWVMHRHCYTT");
    msg.attributes.assign("BPBONTISHTIOIZNAPWFDWQLTSNWSSNBDIFLKRVBXWUXDVGLTCUGDJMOZPEGPZUYOTUYXBDVHKQDIDGCGZYCOOAWOFYXZEHQCLCRDLSMHLJQPMQFCIBAZVBHNPZVBJRXETCFYLJLSEAETJZQGFBWKYKHFGRISPYEWAXUPCJTCTVEAUKZERUKSKGHJYADYKOEKNYUHXBSCIMQVVVQGNOALUXNPDREQAMFMSJ");

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
    msg.setTimeStamp(0.459486326436);
    msg.setSource(1595U);
    msg.setSourceEntity(150U);
    msg.setDestination(35618U);
    msg.setDestinationEntity(64U);
    msg.command = 64U;
    msg.goal_id.assign("SFMKCKHOPBHZDDRDEBGPJOOQHWQIHMLEEDWCPDTGWAOFJGPJGIYZAHHFQPYNHWFZVAGHCVRCCNVMICWAIMJHYAAUELZMFUVXRQYNTVDAAKTTXQBDXQBMWJUKXJNNZGMR");
    msg.goal_xml.assign("NGYTAJGYGAWLWVJPYOOWPEQNFULOJSDXZCXHJBPLYVBEKDIPLKXKNEULG");

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
    msg.setTimeStamp(0.279315937306);
    msg.setSource(14679U);
    msg.setSourceEntity(103U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(25U);
    msg.command = 8U;
    msg.goal_id.assign("IFMMZYARLSPTZXYHJRRXTVKKLKNSXLNBJKVWPNICJOYZPBPYLLIFQWBWHQDERQNUMQWFDFACGNFAOENZURGAULNVCNVEBJOPC");
    msg.goal_xml.assign("FJWIXYBODCTMWODLXMUOTIDU");

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
    msg.setTimeStamp(0.518639501967);
    msg.setSource(39534U);
    msg.setSourceEntity(184U);
    msg.setDestination(62618U);
    msg.setDestinationEntity(226U);
    msg.command = 168U;
    msg.goal_id.assign("PLDHCQTCAECBLSBGOWMHPKGWIBRMAXRWEB");
    msg.goal_xml.assign("ESBVTLPBBLRANCQGZTBBYQGNDHEXYFOPCVMKOQUVVORYNSUXTNYF");

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
    msg.setTimeStamp(0.209140622444);
    msg.setSource(5769U);
    msg.setSourceEntity(8U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(118U);
    msg.op = 254U;
    msg.goal_id.assign("IKUDUYMRSLQPQIDGKJBTHVLGXUMQALBDIPQRXEUYCSSKIMWXZKRCSBLKTIEFEANSVXFCAY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YWAWQSMUFMMNKVGKEVWIAHGEYQNTLXYZXIBUSUAAHDTWFNJOJTIOULCDSWUOWRKDSWJBPFNCDHZETPFJIPTPZKANBHMPQ");
    tmp_msg_0.predicate.assign("ZGLLFHLCXCYOYTLYCZRNSRMZWJOPEAVMGPKZANICEVGESFOXUDYZZEOIFWIBKKGGADSDUMLTPRDWNYRRLAQLUHKWIQTXJWVHJBKCLZGDDOUMSIMQIJPESBQYNECLNHVACVBQTWTWAYUHPFOCJEXBBPQFQOTCVSWGNJFXMZWPOKSVTGIDDFFJXDEUSNRUHAPRALHFFWT");
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
    msg.setTimeStamp(0.69228997612);
    msg.setSource(59414U);
    msg.setSourceEntity(239U);
    msg.setDestination(64663U);
    msg.setDestinationEntity(221U);
    msg.op = 110U;
    msg.goal_id.assign("TMIQEPNIAIYJEPMDDIVRXJVLQWNWHHSRHICARMSPHUUVTJPSHFERGGYGBEGZDUZY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QGTVXZHOCBAMIJUMJISLWSWFFNQRVQJXLEDKIZQZFAFSCYBPOEMCXWDXLGNWXNSEWNDXKHKQODVYYOOZHDI");
    tmp_msg_0.predicate.assign("ZTFKAXRZHIEOJWWVVNHZKNNRQKALLEPSIMSEZVCRJPWNGGTCMJNRSVUQEJMOYRDDILZZNUXIDSWNUKCBHEDQBRODEHBVNOEGUIXQUQPFUPJLRBEOFZSXCFDWCGJIHOLKIKMKBKYQHQPYASJUAPVGLDXHFQLTVJVIGQBAXMXSMMMMYFEHGULDUIZXLWKJI");
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
    msg.setTimeStamp(0.468052713277);
    msg.setSource(29435U);
    msg.setSourceEntity(7U);
    msg.setDestination(28183U);
    msg.setDestinationEntity(22U);
    msg.op = 66U;
    msg.goal_id.assign("VZETIUCJMULLPAKNCQXHVQFFVCFXBZPJMDZTYDRYNXSHVUXLOYRHFQYXMSJBPPEIBQSIRBNQGNDOEKMUDDRBLPXHXZRAZJAZZDAAM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RPJNMWKUOHQRNERYWPHBAUTRTIBADJSIRYBSJUSHDBOPMIGAXVDDMFXZGYPDTCZGGLSFDWXZJPJKEPTJAUVVKBDQFNOHKQRHFRVMYSBHJHCLCMPSUAIKWKLIPTZCCDVFLVABJGZTCJGGNJEWHEWUVLBEQZFOLQFYSXUYYIHSISVTCTBGUAX");
    tmp_msg_0.predicate.assign("PYLDJEHXHCWUUOQC");
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
    msg.setTimeStamp(0.291357249875);
    msg.setSource(14011U);
    msg.setSourceEntity(34U);
    msg.setDestination(31361U);
    msg.setDestinationEntity(188U);
    msg.name.assign("QEBILLRBMUEMBHKDANZQGJSGRNDRQOFRTMUCKALSUGOELPXTGLVZNUDFVDBVFUCNVZPGQLZJXRRIZIMQZFSTDPEJSGCEWYHWPJEMWATTHANAJYLKZJHXBAIYRRRCQTQYHOECXKYEFICIIGHLPMSEJKN");
    msg.attr_type = 43U;
    msg.min.assign("NCEBIGSDPN");
    msg.max.assign("CWYLANFPPCBBONPVKKCGTDZCXNUQWAFOHLTIUYUUZEJJIOICVUPTDOFIKXEGRDFRBHGWHCJERKZRLEAHTIVKUFQMSSRTFZGHVJQJNRXWKSTQRDKMVUAIYQKIVMWWYHJPBXBPXCKNYRSLAILM");

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
    msg.setTimeStamp(0.130809309595);
    msg.setSource(4177U);
    msg.setSourceEntity(146U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(182U);
    msg.name.assign("JEMJYIIWKDDFHLJXUULPKRGRJFMDQLMXWZSFAOBGHATVHOTCDLTYOECGSHSHNZPLJZVKZCDHHRKYTAZHNQOXPTZQOTQRCEGGKOUQQZXAOEVMANEQBBRYVMXDPYTEPLQHDVVVCTNXXACGOKPRIBGWIBNSZBBGLTJGQESWKWUBWWMFTKASWGYVIDMLUFDUPIRICDOSKFSJUZNEPPFRYBANYFUYMXIAMSJCNOFCNJIRMHUX");
    msg.attr_type = 40U;
    msg.min.assign("NERAHZLRQYXAHLLBQFGMXNZGFAEWPAXIBABLYUDJNMHKPJCPKMLKRTOMBCCHWAMXOIEFVWUJYFUQGKJEUKVXDGZRXMXQSBAZCQEZGNOGFJADZYOWECZKKUTSSXWFLUYMVGIMQGIFTEHPPOALITVDJSQVNWVQEDLHRKUSBQBJ");
    msg.max.assign("UYEVRQPCISXPATKYKUUVPNZVGMMWRNFNROYRXPSEHTDFXZIZQUMXLGBVYNMNTYEBZQICPMZASLEXECFWJXJBCFJEBIXPLGKUCTINDHPHZYWMIAOUQQKOWCGBJTZEQWQNJTHDZTLGBRHWLJLOTPDRHFITVPIVJJHAGCMZUIKSUBA");

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
    msg.setTimeStamp(0.939293136855);
    msg.setSource(39303U);
    msg.setSourceEntity(95U);
    msg.setDestination(40404U);
    msg.setDestinationEntity(37U);
    msg.name.assign("MGXCWVQQHHSVIAXYRLAKQUJHMORYKUDSMHMRRQETJFKSVXTQDZVTZVMCBLKZILACHDUDPUJACDOUE");
    msg.attr_type = 15U;
    msg.min.assign("TAHAFKEXHDQMUZRPSJZCZNUDFOQSCPPLYOIMUECFJYRLSASJEXENYNSEXNUYGKCWGXNITHHOYZRBUJHWOVAFTOJIODRPZHWHAYGBYLRBTKSWWZVWRLNGAPOGJ");
    msg.max.assign("SBPCSEVSCXUVKNFXQUXIGQTIECGWDAQUYGOPKJTOHBSWEBIWAUEGHKTTICANWWMMEJVFAHGZXKEZCQLRYYMCCTRJRMBCYULVRVPVDUBHLKDLHOOJUQGSQDPEWGTLHBUZZIOKBMJBKIDYVLMZJMDYPODAAFNPOYNKWWRGJHHAORNAQISXZ");

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
    msg.setTimeStamp(0.82535996632);
    msg.setSource(37810U);
    msg.setSourceEntity(254U);
    msg.setDestination(22108U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("LEKSUMVHLMEUHCAJQOJVZSKJNOJTQBZFBSHSJCNQDZLXGOKOF");
    msg.predicate.assign("HHOYBPVZTRXCOBUBKJOOJGMBKNAMMIDYSGPCJNDTMYENARLCRQQILQKEZEDTBQSOFVBVXFYHWFAAAHBQQLDPXXEYIFTDHIIEFAANSXTYKMZUQRFPWEVZXBFNSUKOUBKYGSWPTWEVDTIWSI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QZLLZSWJBZFJWEBVTBMMMDSHICVFJSADNMFGXWGWNUAJLUHXGFJOMYELFIGYHYBXKVHEIYTCBQHCPOGHDFRPFVQEPYMBOOIOUKDEWMFOSTVAFGOAHXKNLGTUCYUZJACGXZJRSVVAYNAKNYADDRODWRCQXRTYVOJIIQSPTWNSPQXJPSEADVNBEFZCRPNZKHQEHCZKWUZLLMIIECQXYNWKIPQVTXORCRUUPLBAKUH");
    tmp_msg_0.attr_type = 62U;
    tmp_msg_0.min.assign("NAHTMSLCGBOAVPYHNIKOHONYGZJBDPFQBGWPGXXFGYXIMJPPFORQZJHCBWQOFUUALERCMHVBIIVBZVMFKMROKQSGUURAYOXPCATDRLCOBKIMOIQWSDQDJTOIQDUNSFELKXSEVEJYWJGRPDCEEHVJPIGEHJEUZNFZWSWIXTYRNWBUHKFLVFXBENUMYK");
    tmp_msg_0.max.assign("GQMPJIBHWJUPWKXQZQQOATVIYNIXMIVEFJKFUIPMOGFCWKPTIYOPBNZHHSRFCLNNSRZZLMXVXUGJJCRIBHLNAVHKGUNROOQKAJTDOGFFYEZBYLLJERYMZHDFLYHWRKHSBYBCGOEPHGSIVRKUXFZZTBYPABSKODXEQWEOVSVXM");
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
    msg.setTimeStamp(0.880086496223);
    msg.setSource(46618U);
    msg.setSourceEntity(90U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("QAYKZHEURBLQJZYMYDIBSHBONWHHUZRRZNROYFAUKDFZDHQCNRINEMZVVEGAQ");
    msg.predicate.assign("EVAHKGPHIAYLRQMJOCHGCSFXNNQMLUGAFLRZSCOIXISFVGJTBGHLWKCETTFZDWDQJLCUBNAW");

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
    msg.setTimeStamp(0.741678220384);
    msg.setSource(38174U);
    msg.setSourceEntity(145U);
    msg.setDestination(43264U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("TSIWZJFIIGHXEOIJXDIHGTDECZOMZTSEYAQFSFGIDGQNGGTJDEPPWSBUBFHMNLVBRRREKQSTWTFQVNVEHETUEIZQQVWECNQMYSCRZDFCCURTURXJMCYIKHMHXNDMGLXLRWYZNNNMWFAHBKYJQPJMVSWOKFCBPFXVDUUAYOXBZLOZBUOSNBWKGVJOLAYEPLAODVBKWHJSTUJAQACYPAKAGYXMIZVXXUIYHPQLL");
    msg.predicate.assign("SQSBOVVMXRZZISQWGGDTBBGZKQFEGUTOPJURJJOHNVMVVPHGRHAPJCEDINLPEHVSRNGDKETHDYTETLHHSWNBUOMFYABLWWGEFMWVPMPCDYTARQUNLUYXMWMJXJHJXVMZNPKVUQBEQCFTQCIROILZFYVIUIQNLANFAEECOHOWXEOGNYDKBTXGXLUXWUIAYBFMWCLDKTXLRDFMRKDXKCBYIQLSZHAIBCRPJKYZKTAAGOPZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TSZNFRVIIVEOJNYIXQFDTGQLYUQMIYHPEUCSNBWLYVS");
    tmp_msg_0.attr_type = 247U;
    tmp_msg_0.min.assign("TVEBQSEDJEXMFYXQHTFBGEXOZHIHLHKUORFLXUGKFNICUMLFPDNAFOWICNLVDWKHWYOEXDWDJBLAKEHUZPMQONXPZEOHTVT");
    tmp_msg_0.max.assign("EPUVRMOOYTORVWUIRQWCMVYIKLHOBKYNRCBOUJHATFFSQGCUPSRZSUEQICJMTAJLCPQNPIDINHPDXQUKMSHYUGWPXYBCSNNPUGTVVZWNZCMLHYHXJRPEIADBJZZELGKWEGJ");
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
    msg.setTimeStamp(0.26507674735);
    msg.setSource(59024U);
    msg.setSourceEntity(29U);
    msg.setDestination(61637U);
    msg.setDestinationEntity(208U);
    msg.reactor.assign("XPQIOPPPHOIWOUHVKRTBSWTLBUDSOKYYDFSMWAPSSEJYZJXECWCNUXNJANMLDIEOLJNVDMMCFDICQGHGQUZYYGKIPARCCIZCRNELGKZMPVXZGISEELOJRNCBVPHGTTQLRTXWIBXQIEOOTROWJUYJRWJWBVFTBEEGJOXNAQLTJKVHZTNEUQVMRDFXSWMDKQFMAHQRSKBBZAXFMANRUNPSYYZVUVBQYFCFL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SAVJTRWDXKXNWSVCFUJPFRRTCXBKIEQTMOZFEVHG");
    tmp_msg_0.predicate.assign("YDFDQEYDQOMBVIWFNPKHOAZBBOGRSPYSHMHTRENEXIIEULWWCJCDSWRJGRMKIGNBYGDJXKARCNHCUTPOWFXHZUXLHDNJAIJFDCNSYJTIGFRUYSCKVMVVKTORLPTZYN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VZIXMLLMEOACRNMZDTIFPVKTHNBRSIQHNLTYNZPSYXLVKVCDQTQYIFORFXPXWWVJHCDZDHFSHJKRSOCQGLAALUUGWAZBTYE");
    tmp_tmp_msg_0_0.attr_type = 15U;
    tmp_tmp_msg_0_0.min.assign("GVZLHLWAASPHYSKQXOGDBEQBHQKEYZQPPYDOQH");
    tmp_tmp_msg_0_0.max.assign("GWFDRKHUNBSFSHPPAEZRPCMVSKCPNVODOEFGLXTUBZBCKQXOTEEGREKNQACNJDIXHVFZIRTXMMQMBFMLYVCSTGDCGHWYVHCZJDXGHLRGZKBDDNLFTAMNMNIDASKBAAJNUMOXIJLDCQBYWTLEUAOVKRZNGMSASUWWXEZJYFWJYTRRLOIBYJOPEQPYVHQMFVUZSPQCJTUQLFJIOJYOKRLGDITTHQSWFKVAIEZERGXUWKYXBUVHQ");
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
    msg.setTimeStamp(0.876654426541);
    msg.setSource(15682U);
    msg.setSourceEntity(241U);
    msg.setDestination(7363U);
    msg.setDestinationEntity(205U);
    msg.reactor.assign("XODHPHORLGZDMGCHTGUTCOKDGKCEATNVWVRHOPIQBYFZMDFCPCTLXHDCHXBQUZJZFSEPTRFXUJVGPSDFDHINPGSN");

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
    msg.setTimeStamp(0.825745362582);
    msg.setSource(37181U);
    msg.setSourceEntity(79U);
    msg.setDestination(8031U);
    msg.setDestinationEntity(56U);
    msg.reactor.assign("NIFSIMKADTNIPIURHJEUXORHNRGCRVAYTJHBQTVLNEGMZPSGVSJUCKKUGBJXZSTOLSJMRDUCGSUQBBKSYTQZQQYUCWHRQLFDANGGZZROJLSF");

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
    msg.setTimeStamp(0.996629054717);
    msg.setSource(24934U);
    msg.setSourceEntity(69U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(237U);
    msg.topic.assign("OCMICVICWSHQQWOZFSQ");
    msg.data.assign("WIXQRREZQANUQTDREXYVSQOBKZSKICUDVGCUSUINJATZFCKYSPMJFDSUOECVICALWEPKWMLWMIMAEOFONOEYVYJNGKZYHRTHEFXVRBXXBSGXGCPDTEQIAJRQ");

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
    msg.setTimeStamp(0.887731647068);
    msg.setSource(5358U);
    msg.setSourceEntity(81U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("OHAHOZAKJV");
    msg.data.assign("REHAIZJBECYQJDKSKOYMIDAKGHUULNNZCKMPPXDPFIVNALDMFJLTEJYNDTVZGLEWQUVETVMESAZHKOYWKTSBRGZUHUXGITIWFEBFWOCSMQECDJRTBRZGVPBDRHYXQDYOVMVQEJRYTZCIXLKAQFZQJLLNFXCNGILOAQZHPBAKWVWIGAGZOXPSMONWTOTCCEFKQQGVRFXMGTYAUDPBWWHRPUONWXXRNSH");

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
    msg.setTimeStamp(0.34320641868);
    msg.setSource(4665U);
    msg.setSourceEntity(237U);
    msg.setDestination(20395U);
    msg.setDestinationEntity(117U);
    msg.topic.assign("ZRPPQNOJIPLRHJBGILWXTISRCGABVZXXOLCQEVHDNZ");
    msg.data.assign("DBFYRUIFUDYXJITTBBBMGCHXNBRUKQFLXMCYSDAKMPASQLXRLPJTDQFUFATVJSNAZASBDSRIXXEZKKHALBCXRFGMZGEYXVYRRQHHTWQCVDBUNGICSFMCZPJHEKOUJZGRNSWNPDCLQVNTGWWYJFLCLWXVPLOZHJXOTYEIJJZKHKUVIMNM");

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
    msg.setTimeStamp(0.397823924722);
    msg.setSource(39476U);
    msg.setSourceEntity(225U);
    msg.setDestination(58429U);
    msg.setDestinationEntity(180U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {20, 57, -10, -121, -85, 46, 56, 102, -36, 87, -2, -11, -104, 32, -31, 79, -19, 12, 79, -6, -65, 108, -10, -17, 56, 7, -96, -56, 30, 120, 77, -86, 31, -45, 41, 42, -60, -21, -19, 123, -113, 103, -4, 46, -42, -85, -8, -28, 111, 25, -93, 19, -11, 105, 81, -74, 103, 89, 115, 98, -23, 35, 58, -128, 69, 57, -106, -122, -70, -20, 31, 7, 15, -62, -92, -102, -75, -123, -80, 72, -99, -19, -86, -49, -22, -75, 39, 21, 58, 98, 11, 44, 120, 11, 48, -37, 33, 91, 59, -63, 124, -9, 55, -38, 115, -49, -24, 55, 48, -28, -99, 92, 15, -12, 84, 16, -40, 19, -93, 93, -124, -113, 60, -116, -81, 24, 55, 6, -128, -121, 20, -98, -116, -1, -4, 89, -67, -32, -86, 57, 52, -86, -101, 4, -7, 56, 5, -20, -51, 95, 73, -52, -9, 9, -111, 106, 69, 71, 76, 79, 4, 86, -63, -128, -111, -125, -20, 21, 115, -35, 60, 81, 70, -32, 110, 26, -13, -93, -29, -8, -68, -14, -120, 5, 45, 32, 44, -59, 83, -51, 102, 33};
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
    msg.setTimeStamp(0.914415355066);
    msg.setSource(43779U);
    msg.setSourceEntity(16U);
    msg.setDestination(50216U);
    msg.setDestinationEntity(89U);
    msg.frameid = 250U;
    const char tmp_msg_0[] = {-8, -114, 46, 27, 23, -50, 24, 48, -31, 72, -9, -70, -31, 85, -78, 66, 36, -64, -79, 97, -63, -97, -86, -75, -88, 62, 10, -124, 53, -101, -90, -18, 25, 119, 20, 4, 16, -84, 11, -29, 64, -10, 42, 5, 121, -43, -17, -74, -15, 49, -125, -3, -45, -41, 36, -101, -66, -77, 14, 29, -83, -64, -45, 72, 107, 20, 40, -125, -121, 14, -86, -122, -72, -65, -6, 63, -41, -48, -79, 67, -27, -15, 64, 12, 92, -2, 105, -112, 1, 78, 26, -61, 62, 75, 120, -104, -114, -120, 126, -68, -51, -76, 48, -102, 93, 61, -88, -4, 26, -84, 17, 62, -73, -22, -112, 68, 90, 84, 105, 117, 124, 50, -112, 125, 106, 109, 75, -20, 53, -16, 88, 76, -27, -80, -100, -70, -57, 104, -85, 39, 24, -60, -29, 7, -66, 6, 28, 97, -76, 81, 108, 2, 41, -109, 45, 85, 86, 32, -85, -26, 126, -67, -118, -91, -64, 17, 33, -101, -115, 69, 98, 40, -24, -33, 63, -65, 97, -22, 78, -18, -86, -50, 24, -30, -99, 21, 5, 115, -19, 93, 71, 60, -35, -128, -25, -26, 62, -43, -40, -54, 38, -56, -114, 17, 45, 57, 121, -41, -18, -28, -94, -100, 126, 29, -111, 7, 60, -82, 107, -72, -57, -38};
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
    msg.setTimeStamp(0.564894029466);
    msg.setSource(41167U);
    msg.setSourceEntity(142U);
    msg.setDestination(43269U);
    msg.setDestinationEntity(23U);
    msg.frameid = 14U;
    const char tmp_msg_0[] = {-40, -79, -102, 70, 32, -4, -119, 25, 125, -75, -110, -20, 31, -47, 56, 76, -99, -115, -30, 106, -7, 66, -88, 84, 15, 10, -6, -94, 72, -63, -15, 104, -96, 106, 114, -102};
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
    msg.setTimeStamp(0.00543763393068);
    msg.setSource(56126U);
    msg.setSourceEntity(171U);
    msg.setDestination(44979U);
    msg.setDestinationEntity(158U);
    msg.fps = 161U;
    msg.quality = 184U;
    msg.reps = 23U;
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
    msg.setTimeStamp(0.630178678616);
    msg.setSource(43964U);
    msg.setSourceEntity(56U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(115U);
    msg.fps = 218U;
    msg.quality = 37U;
    msg.reps = 29U;
    msg.tsize = 17U;

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
    msg.setTimeStamp(0.800298681732);
    msg.setSource(26044U);
    msg.setSourceEntity(221U);
    msg.setDestination(3373U);
    msg.setDestinationEntity(230U);
    msg.fps = 153U;
    msg.quality = 85U;
    msg.reps = 229U;
    msg.tsize = 197U;

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
    msg.setTimeStamp(0.610960982062);
    msg.setSource(12934U);
    msg.setSourceEntity(55U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.274140441582;
    msg.lon = 0.949858952376;
    msg.depth = 198U;
    msg.speed = 0.218609339827;
    msg.psi = 0.776199930497;

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
    msg.setTimeStamp(0.664572235636);
    msg.setSource(11320U);
    msg.setSourceEntity(168U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.897889040666;
    msg.lon = 0.274977127077;
    msg.depth = 44U;
    msg.speed = 0.0170029315521;
    msg.psi = 0.543962225794;

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
    msg.setTimeStamp(0.398810351693);
    msg.setSource(8588U);
    msg.setSourceEntity(152U);
    msg.setDestination(31795U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.547458521954;
    msg.lon = 0.397675848846;
    msg.depth = 9U;
    msg.speed = 0.484179539365;
    msg.psi = 0.45236909184;

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
    msg.setTimeStamp(0.0852863049898);
    msg.setSource(15766U);
    msg.setSourceEntity(138U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(18U);
    msg.label.assign("PCZTHBVQXYYXYGOVLZXDVZSCUSHYRJSQUPBSWDREGFOTVDXXPMWPAYZVHRTWPZLTOJSDRCPOAQJOMEFGWOJZDKKDQAVFLKXTBXJHZYMJGRUAQLHLQKKIJFISBUUPYHVWEQOFILOPIIGTEAWIUMDUBSA");
    msg.lat = 0.195133123023;
    msg.lon = 0.107586098122;
    msg.z = 0.523351854224;
    msg.z_units = 228U;
    msg.cog = 0.101133451359;
    msg.sog = 0.634086170294;

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
    msg.setTimeStamp(0.773214016895);
    msg.setSource(9005U);
    msg.setSourceEntity(131U);
    msg.setDestination(9237U);
    msg.setDestinationEntity(20U);
    msg.label.assign("KHTOSIERSVXZEIUXGOFMJMIPASQMAEQUJDLPISKBJTMIRZDAFXYDWGCNCYRXYTPQTITVRFMVOPGVKEDPBFRNXPATOBWBSSEZELZUFRUJNUKMWNPLCQUWWDJOYVJYZCWJQVPIHYXIHRUDCCQRUJLNDHDMIFLLVZIKT");
    msg.lat = 0.869074863095;
    msg.lon = 0.254214288787;
    msg.z = 0.514120105088;
    msg.z_units = 55U;
    msg.cog = 0.864551694581;
    msg.sog = 0.991283197741;

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
    msg.setTimeStamp(0.0552518119068);
    msg.setSource(20157U);
    msg.setSourceEntity(2U);
    msg.setDestination(15680U);
    msg.setDestinationEntity(131U);
    msg.label.assign("NCIYPPJDOUGWYURJSFEIUBXQWBVXBTDKQMEAGZJIDTXKLLLNXRVSMIMCGXQXGQ");
    msg.lat = 0.241481738566;
    msg.lon = 0.235848666734;
    msg.z = 0.273494393312;
    msg.z_units = 168U;
    msg.cog = 0.832084156724;
    msg.sog = 0.735162094437;

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
    msg.setTimeStamp(0.962027444767);
    msg.setSource(46722U);
    msg.setSourceEntity(5U);
    msg.setDestination(56568U);
    msg.setDestinationEntity(55U);
    msg.name.assign("XYFKJKZKCSKLIJLPCVNALJROODXWRUOCYTFAYKPYVWMWDRRCIJIBFMPQOUYSHTFWHULGFZEEPLSGFWZAMZGZJVTNTWMRQHGOPVECBSBGLWVJOLFHIKMCNPNSLQTGWBVNMANNRZBCDTYHRVIKNEKISRPDALSQUUIYOQYUVDVDBYVQMHOCEHG");
    msg.value.assign("TFLYNDFHSRVNSUWTQVHOOFWEVUHYBHPGMJKWSDYGMGIHUXBUCEJPVND");

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
    msg.setTimeStamp(0.54874222557);
    msg.setSource(46805U);
    msg.setSourceEntity(84U);
    msg.setDestination(46493U);
    msg.setDestinationEntity(239U);
    msg.name.assign("XRKGCDOAKLFRFBIPGTCWCRASFCLZKOCYKGYJMRMHJTZCVJFIKZSFBOZWWLWBQFRYFWDVWHFNLZILAUPZOUXXMNASQVBHEKNNPYTLVBUXPUDRAWQAKBTPOPSAXMTDMUJBEEFCVMBKCXDUDKGXLYZHUEVHTGXAIJEGL");
    msg.value.assign("LETZHEBXPGZDMQZOEVOLLCTKUULAPZHBFASFBYAQ");

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
    msg.setTimeStamp(0.618751376735);
    msg.setSource(44968U);
    msg.setSourceEntity(119U);
    msg.setDestination(62622U);
    msg.setDestinationEntity(1U);
    msg.name.assign("EXHYYUHMWOQWFCOCPADVZEELDXLGSUXHFKRRKAFOETFCSZILHLIOEBDDVLYWVXNBOJYWQXPYDKJHVGPGJRJCLCFDKUNLRJAJAUIHKVNKSKHTUIQCGBHAEIMYRSOMJPJSBSPQVIMXZPBOZZRPZMDRNAFEQIINCTMLZMFAUYJYTXUVANCTPGGMSNTLTQVBBJEWMDSGUHQZNUBFOO");
    msg.value.assign("PETOKVZOMHLYHYNNMRGHSQBKBDKABLOFSSTEXNJJZILHUFUFMWPRCHXRRVXVBCMCKIIWDURPXWQGQWZVGUYTACIIDCTZPEWFYEBIDQWXPVZQSMWUAUYJTTEZBFZPEZTBRAYALFIOKMRYZNRLJSDBFCQ");

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
    msg.setTimeStamp(0.366933297735);
    msg.setSource(41875U);
    msg.setSourceEntity(150U);
    msg.setDestination(24605U);
    msg.setDestinationEntity(198U);
    msg.name.assign("PMWIDTWOMGIDCCFSVESZBPQABNSSPCTVSGPDGVWXZRFRTLTMINOZMHLJBSYEVJOYIGCBGEUPVXVPAFRMMYCOIFLULHUJXSNZEYJBKCUEZTZKXQLOEQRWQHIMHECPYYFIEMZDQRYHKXVQAJWWUDIOZLYSKAL");

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
    msg.setTimeStamp(0.408677997814);
    msg.setSource(21016U);
    msg.setSourceEntity(252U);
    msg.setDestination(28680U);
    msg.setDestinationEntity(99U);
    msg.name.assign("PRIIJILGNKWPLPZMVLFEZWWUQQWGDZREECBJDFJPCNLUHQL");

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
    msg.setTimeStamp(0.342809514409);
    msg.setSource(51968U);
    msg.setSourceEntity(220U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(169U);
    msg.name.assign("JQDYLCJURKACVHNIXTXKBWM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KICZYZXDQDSWKHOKETPTBXMIXJFZBEEXEVRYKIZCXNUUIM");
    tmp_msg_0.value.assign("VDWDLOSBKGRNYZFOPQRVMUCEBIMFIPJ");
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
    msg.setTimeStamp(0.0409002322168);
    msg.setSource(37822U);
    msg.setSourceEntity(18U);
    msg.setDestination(19692U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WTCMVHMUEBEOEHJHIRITHDCIQEGPMSZGEKHSNKGTFBQOIJMLLGKADNYVLNWFAYUMRCIAYRDMQPRPWQDTIZDSYEXJDNEPVOFCYBTJILOTNNSGFCIYBPURJLKJWOQWVELQCMUHZJTHGKOYSFUOXHCUQWUZRDNSGVQTYXUXU");
    msg.visibility.assign("KYYDEAGHXYCUOOFQTESRMZJEEDZNVNXLJCEOOPWPLLDQEKRLIZUSRMSVJGFKWMTWTXPRAFQWGVGNKIHQNDVHDXF");
    msg.scope.assign("IAMHDXUVDNTYGTTOGIAOTQUPHAQKLIRQECWJSYZTYCPXNBMOKPMQZAUYMYQSYXRBMFKJAWIISBWXYUGMLQKFBRDCNCEEVHLVTHKJOUDYBNHLJEEJBEVFDMWTVGPHORBEKVZGPLPADLZSDBFPHNFOGLMRZIJASZXNWASDXVCXFAJZUAKRFISCUIPQJQTLRUBOGKOFXYFPVYODMBSNHWJRSCHXWWMINQL");

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
    msg.setTimeStamp(0.854393040095);
    msg.setSource(13781U);
    msg.setSourceEntity(182U);
    msg.setDestination(663U);
    msg.setDestinationEntity(132U);
    msg.name.assign("LJSQQYJHIGITIKAVZAPMDHNEBAYBLAIUCVVDQXSJLFLDACHUWKGCMWTXCWNMLVPZTFMUGDIESKEMAGFXVZFSBYOIBTFVBDZNRRWWCEUNKSVYRNHWWUQZBKPZFCYZIDBXTGDRKKOJPNDHBQMIFORWSMHGTNGYCCYOAAGOOEORQVKXFUYPKBPPDUFEERTUOQMRHWRCLXJSHQBOJEJQRIPMSGTAJLLU");
    msg.visibility.assign("BAAEUVRYQRCOGUQGSYIEXFKACNRFMGZQIXKXXWWHNTOAELAYTKMFNSDHANOBUYVLHPXIAJLIXKFOXFIZEQGDRUWZOCIJPPOGITFYDQZXDVUSGXQVFQTMKDWSVRCHDHQBCCUXZGBNISKDEJHASBFHCUYYJNQLBTTZERTKPNJHNHISJJAUSGSETC");
    msg.scope.assign("YVGHYFUQHMZDRXFYOKSVZCJLPBLQLHELHZSDITMIJUXKORGOWKEETKEYCTWQKDHSNGBAHWVXOJJQRGFCQAYSPPTDNUDPUWAHLFGCJZNROPFYWIMXNAVWKUVAPAQEWHFBILMGTJBTKICYBNEKDJATQMOSRFVULAZNCZOGXEMOBIVSSMCDAYZCFDMBTHBUZDXPZRTGSEJZFIWN");

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
    msg.setTimeStamp(0.701550571315);
    msg.setSource(43525U);
    msg.setSourceEntity(71U);
    msg.setDestination(48696U);
    msg.setDestinationEntity(131U);
    msg.name.assign("NPUXESBXZSKJZNUBORNYUZRYKUEJTYTYHBVUMSFSGGIWTAJFWFQPXIEPNPXLMYKEJLCTPRAQA");
    msg.visibility.assign("HCYASQTEYIMCWUDHBQVDPTAFNPZMIEVDXNKSHWTPYYUIRTSFQLOIUDPEDKGMRGBAVYCRDBJNKVHJTIIBEAFIKWRVAMCIAVFLFQSOJLHJDBAJOFKUCQBPGTGYWZWEHQWHMNTZGODQJXCEZTXKGSOHGSKJYNHNUXSFDLKNMJSBOKTPRJSXWVZMRQP");
    msg.scope.assign("EFNDQRRLWEAJQIEHVPXIRMYHCKCVOCRBBEYIYUWYWGYADOSUEBCZIAMKHPPNUHDUDHZKQMRORPIZXSXCJEKCYIPOLYP");

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
    msg.setTimeStamp(0.449841696115);
    msg.setSource(43093U);
    msg.setSourceEntity(190U);
    msg.setDestination(65239U);
    msg.setDestinationEntity(145U);
    msg.name.assign("QBMNTXDIBPLQRFQXSWTTPRDGKCBEQVONMGVCNVGFJMUPQKOVICIHNCLZQHWEJNXHWNNEOOGJCUFMDRUTYIBSEPCKRDGWNHUBKYSAYODQXAWOLEZVSOYOAUFJJVZXKMEBKLIKYNMAEQLIRXKGZBSAUFCZSTCXHQMPIPLLUXIEBSRLORNFZAJRAGTGCMVJLPEOPTRJVHHJLWIUESWHUWYGSXDBMT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RHHMJVDCRVEPMWEZBHLIWBHQXZSVFRPVAFBEAREVZGNIXSGIJCJTQRFDLKOSIEGJGBMIOPLDUFPWMONYQHEGDFAQOYDQVOAYXTYULHGXCRXZCAJEZNNHYRWAAIUWDLKDIEBYKUSXPHEELICZNKVXGCMJKMHBCUBGBANTJMWOLINXDZLDTOMQTSVWLGXJBUNQNSZKRQSOASKMAYFXQKNTPF");
    tmp_msg_0.value.assign("DJOPXTDHLJSQPZSRMAXJPRVRLSEOZDCUBZRXQRWVFGTHUKJKMCXOTZWVSFMYBYGEPBRIYMOQQNYCVYPGBNZKALFBAUHHO");
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
    msg.setTimeStamp(0.31220468841);
    msg.setSource(20812U);
    msg.setSourceEntity(57U);
    msg.setDestination(1437U);
    msg.setDestinationEntity(61U);
    msg.name.assign("VZNDREHSGPIITGFMPNEKOAFNWTGTVTJUIFNUHWUFXSXKBRJIJGTSSBDJKTZROYDQSRBBYMHYETDBFUKNQEQFYCYUJVWAWORVXOZOGTXDQHBIGRBKLEPFYUDPDEJV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DAKNWTGUPWHZJNLLTFVJERXKMJMSCQLMKD");
    tmp_msg_0.value.assign("IDTVJCRGRPONENFCCURVKTEQGQTVVXDSDRNLUJGJOTAMZEKODTFWFODBCFFQBWGBZYSYOTXGIPSLCAMLGKVACBXFSIVWKYKUYBQVEDJHJWWRHDJMOKMMHUUPIWMAXVRMZSBQJSPXUZTPAYQJNPUFCQRWXZISMYFJFATXIDKNSHOEGGMAPBPUZYYZZDUZIYPEBWRLHBFLWIIBCXTJKRC");
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
    msg.setTimeStamp(0.717891643035);
    msg.setSource(42433U);
    msg.setSourceEntity(127U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(109U);
    msg.name.assign("BBFANEBZGUJOPLTPKZFEJRCDDCLOVFAXIWNYABDZSFYJXKTLYZDYLXMWCTFKXHKQTOBIKZCYIHWURAZSUATSBOPRUEKIQKXYTVBUVWEQZDCCNWKNMJGDNOLPLEWESGDUMXMEFXZWSWGPDMRPVUGUZVYXSIPGERHMIRDHLHENVRBLGGA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FNKTZJKXGUQIBIMQUHIHYDHIFBUDDCAUDLPCGOKJJZEPMGRZTITUCDSGQRQVIFCTTOYCVNLUQXWZUBABXEWPCZJ");
    tmp_msg_0.value.assign("MOGIFTXLBZZBMFYXMHERUDWYWCMCCAZOLJTFDPAKSSIOKDWVUVOAQBHNNTSHFLDPVDVJ");
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
    msg.setTimeStamp(0.839148619211);
    msg.setSource(47318U);
    msg.setSourceEntity(199U);
    msg.setDestination(5623U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NYFVACMMVOPBDNCNKDEAUTMVLQTHMUPCSVYOYQBWZRDXKCZXHLVFRYPKUBQWBXECECNTNSOSLIEMWTSJWPMOLDADZSPZEHGUCJRQMYHZDCUFZITXNIHARXWIJHURIRKYYHRKWPFCMNSYPOGWXQMORJKDTKQBYKGAGTIAFLVIJNAPTGCDAFTZUVRGPLQEUJXKIXJZFBNOEDSHPGFOHMBXUSLVAZGFDAYVJSGGXORWESKLZJUIIFWWBQT");

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
    msg.setTimeStamp(0.608300714062);
    msg.setSource(57134U);
    msg.setSourceEntity(247U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ISAWTWJPEWQQZNHOTPPDEUDOTK");

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
    msg.setTimeStamp(0.722818959555);
    msg.setSource(4405U);
    msg.setSourceEntity(0U);
    msg.setDestination(22562U);
    msg.setDestinationEntity(83U);
    msg.name.assign("ZMZBTZOAIFHXWGQAKISCBORTZDMQIYEEMBANLFWLUUNXAASQHXBGOCOCNFIEBKQPMJPHKEVKYJVAGLPWRFFDPSRUNTJBMKEMZ");

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
    msg.setTimeStamp(0.934635937207);
    msg.setSource(30026U);
    msg.setSourceEntity(245U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(238U);
    msg.timeout = 3468607006U;

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
    msg.setTimeStamp(0.147051518845);
    msg.setSource(64653U);
    msg.setSourceEntity(219U);
    msg.setDestination(16157U);
    msg.setDestinationEntity(233U);
    msg.timeout = 3119950105U;

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
    msg.setTimeStamp(0.869292561404);
    msg.setSource(7107U);
    msg.setSourceEntity(197U);
    msg.setDestination(42999U);
    msg.setDestinationEntity(67U);
    msg.timeout = 2083038719U;

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
    msg.setTimeStamp(0.144558676722);
    msg.setSource(43363U);
    msg.setSourceEntity(38U);
    msg.setDestination(63851U);
    msg.setDestinationEntity(89U);
    msg.sessid = 3801417012U;

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
    msg.setTimeStamp(0.861646826585);
    msg.setSource(37445U);
    msg.setSourceEntity(159U);
    msg.setDestination(24925U);
    msg.setDestinationEntity(24U);
    msg.sessid = 1607177568U;

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
    msg.setTimeStamp(0.0173095620629);
    msg.setSource(12722U);
    msg.setSourceEntity(202U);
    msg.setDestination(35184U);
    msg.setDestinationEntity(0U);
    msg.sessid = 1414137814U;

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
    msg.setTimeStamp(0.385783772491);
    msg.setSource(54963U);
    msg.setSourceEntity(153U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(121U);
    msg.sessid = 192906120U;
    msg.messages.assign("UQTQADLZHVVQGSAXEKZIEPPAKGCQRVLNSWRRHKZBVKUAXPGAPOLHONXZXPWBHMFBJXEDKENDBIMCZQWMQYVIISTSJDFWCFDWLR");

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
    msg.setTimeStamp(0.261506150245);
    msg.setSource(38847U);
    msg.setSourceEntity(105U);
    msg.setDestination(43599U);
    msg.setDestinationEntity(17U);
    msg.sessid = 997241943U;
    msg.messages.assign("WAJFPKURNHVLUIZKAZWBMGXCIWERQSZRTMVRPPZPWQLACVIBCSFBKIDCQSGECHVCXDUCDQVJCZPNQFQFKJMWNOFAHAEFBGYFOYUDITOCOWMLHGESDYBQYOMKBGFMYSNQNRGRENITHKIGKPUXVTSDKLTTYPCLLBXKXAZQIWPOASMHFSPUEJUYVGLXGTKXPHUXERJAEHZHUDSAMTT");

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
    msg.setTimeStamp(0.816673035786);
    msg.setSource(39296U);
    msg.setSourceEntity(217U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(236U);
    msg.sessid = 771119723U;
    msg.messages.assign("QQDFNOGTSLUOOBRYSIJITKNKNCDRVTJNKBCHOCUHJVTMEVQNHWWOYAVDVEHZEWLUCZUNZKULBHSHEMXVFRSYMUXYEPAQFTMCYRYOFUFDENGCBDHCWOGGANNDDKYJQNGPGPLUERLZSPRXVZJVBTZQYUIRQSKLSPZGBMBMZWAZQLQIOXWXBSPRIKZSVMWMFBKFUPGDIHTAFPHBGFITIJRDWYHTOPVOKAGAJILEC");

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
    msg.setTimeStamp(0.0708924612368);
    msg.setSource(6123U);
    msg.setSourceEntity(112U);
    msg.setDestination(52335U);
    msg.setDestinationEntity(179U);
    msg.sessid = 3675966258U;

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
    msg.setTimeStamp(0.9673735016);
    msg.setSource(13852U);
    msg.setSourceEntity(138U);
    msg.setDestination(28225U);
    msg.setDestinationEntity(147U);
    msg.sessid = 1461090229U;

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
    msg.setTimeStamp(0.257698195357);
    msg.setSource(11490U);
    msg.setSourceEntity(190U);
    msg.setDestination(20729U);
    msg.setDestinationEntity(150U);
    msg.sessid = 2285898795U;

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
    msg.setTimeStamp(0.353156644622);
    msg.setSource(36601U);
    msg.setSourceEntity(37U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(240U);
    msg.sessid = 2703653227U;
    msg.status = 242U;

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
    msg.setTimeStamp(0.811513295361);
    msg.setSource(34981U);
    msg.setSourceEntity(59U);
    msg.setDestination(54006U);
    msg.setDestinationEntity(205U);
    msg.sessid = 115627547U;
    msg.status = 98U;

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
    msg.setTimeStamp(0.610933663064);
    msg.setSource(16100U);
    msg.setSourceEntity(54U);
    msg.setDestination(16155U);
    msg.setDestinationEntity(32U);
    msg.sessid = 2191519108U;
    msg.status = 193U;

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
    msg.setTimeStamp(0.6639818733);
    msg.setSource(33203U);
    msg.setSourceEntity(101U);
    msg.setDestination(30266U);
    msg.setDestinationEntity(224U);
    msg.name.assign("CRMWNSXCDEICNVMUKWTCOPPHRZAZDFKJAZUKVTLOGWXJZULGIYFMKKVYBZFMXGELBJYTIPTVUSTQHDRCLZBEANMKGEFTOQYJQUKROBRXSDRPNJJXFWZGDILCQWOSOSYHFIXOUAZQLUTXMPESWBMBMIQICONKHXEXTEYARVJWUYFEEAVJBODJUNRDYMUYBPDHPYWIPWGGHSLKQNDFZQSSCTA");

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
    msg.setTimeStamp(0.695120114573);
    msg.setSource(15549U);
    msg.setSourceEntity(11U);
    msg.setDestination(9521U);
    msg.setDestinationEntity(126U);
    msg.name.assign("BZGGQBGPDMFPCXHXQQMHEVQNGEGBIUHQMVLRUOXHHRHBINMSALTJMXWRGRQBZWTIHYXWAYODBMYLOZLAJJFTNKLZCX");

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
    msg.setTimeStamp(0.612335323414);
    msg.setSource(50530U);
    msg.setSourceEntity(250U);
    msg.setDestination(59971U);
    msg.setDestinationEntity(243U);
    msg.name.assign("FOPPEDXMCQWU");

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
    msg.setTimeStamp(0.153236481487);
    msg.setSource(31170U);
    msg.setSourceEntity(222U);
    msg.setDestination(12365U);
    msg.setDestinationEntity(246U);
    msg.name.assign("VLSPVCXHQBIHBIVYBHHSCBULOPDEJLPUENEAOFJZWRAZEOWNVKGMFOUQFZTIEPGWAQYOXBQVSDYLQQXSZGGKPWLVLUATWVMGRYJQOCMYNKTTIOKAZEEKVQISWDUGDZACWYKXXSHKSEZBAJGUVLVGDYJRJRZTGXFTBYJRPFHNXELXMNIGFWMTUCEMDWULHMHCMZSABHN");

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
    msg.setTimeStamp(0.407956604219);
    msg.setSource(35883U);
    msg.setSourceEntity(112U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(147U);
    msg.name.assign("MXXVUNBFPQOPPNUTJEZSJIBIHPGYRBVMYKKOJQXQJMIRVLLBTTFYHERVZEIW");

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
    msg.setTimeStamp(0.541764616227);
    msg.setSource(29626U);
    msg.setSourceEntity(104U);
    msg.setDestination(32091U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ABOYXNDWBSEDNBNPJWULULJBUJXFLMPUSEKRGEJCIGLVHAHBOXJSHMEIOPLTVPBNIHOGMNHQHDLFFCEKDCATCPAUFYYMZNSHKMRVQIUVCCRWGKSOPPSIWVXZNRQFZTJWOBKTTLKWNVDZYEHUDBFKBIMZCLSJXWKQMAOVZSPJYYUFOQJWUWEGZLPDAJYEIQEMXDVAXMKMVSGGORGYOTYLARBZQWYRQHND");

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
    msg.setTimeStamp(0.728551071835);
    msg.setSource(56756U);
    msg.setSourceEntity(85U);
    msg.setDestination(32454U);
    msg.setDestinationEntity(152U);
    msg.type = 26U;
    msg.error.assign("TRLDKICBVSYGCHXNHXBGFEZNDOVTUCKJWZGRZRCKOBKAP");

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
    msg.setTimeStamp(0.532989627704);
    msg.setSource(35558U);
    msg.setSourceEntity(175U);
    msg.setDestination(63504U);
    msg.setDestinationEntity(111U);
    msg.type = 7U;
    msg.error.assign("HMLHKULJEJYEHDEBNGBZRKNXJDSZEJDKSZFJYYREGSJGAQFZPLPYQQIKUAWRGWIRROTMSWVNXFVASFTRMGZCXIHYOOBGOXFVLKBDVCEJINQNQPDWCKEMTVKMJPHTBMEGKNMFZAVBLNIUKDQJPZANVPYYBWPN");

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
    msg.setTimeStamp(0.292994538363);
    msg.setSource(29594U);
    msg.setSourceEntity(165U);
    msg.setDestination(9039U);
    msg.setDestinationEntity(224U);
    msg.type = 40U;
    msg.error.assign("VIEKMMCGKHWXDJMFIDTDKBGVRJCTYZYUGDUPVEPWLAYEBFDHBYIBVPMNJHYUIG");

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
    msg.setTimeStamp(0.711461066956);
    msg.setSource(4653U);
    msg.setSourceEntity(85U);
    msg.setDestination(10079U);
    msg.setDestinationEntity(68U);
    msg.seq = 825U;
    msg.sys_dst.assign("TFAZKFYAXPLEOKHVLQAVYXEPBXFDIFEECAEPCNDTNPPGORWDSHYZAQGHKILCMOWLVIBYNDIJBGQMZQLFMVJVTHGJHBXRSQOJVIXKKRGBAGATBNEYOUGFZEBISNNMUAZQMKZVIXTCOWYWVVYBBSIZSUCJWDVMMSRUOE");
    msg.flags = 233U;
    const char tmp_msg_0[] = {-113, -31, -28, -36, 66, -38, 50, -16, 17, -63, -71, -108, 4, -103, 43, 50, 19, -49, 78, 25, -22, 108, 22, -118, 87, -70, -68, 74, 113, 52, -62, -66, -117};
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
    msg.setTimeStamp(0.613815873433);
    msg.setSource(23457U);
    msg.setSourceEntity(139U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(17U);
    msg.seq = 52189U;
    msg.sys_dst.assign("NFYFHRRKVYEZISGZVEDFSGCZPRMRQPIEBPMRQFMNUHLOEGSMXDJWEQVOELALTDDBHDJCQWSSQXULGJJQBJOWOAEUXCOUALKBVKEMTLZWBSRXZSXNYSFTKJWIHURUKYBCWBNPLDYHBWKLAJYCXMRQDFIVZIHNOYWODHMTMYXGCRJNAALQOPFYPBHKTJDGPFEVAVGAJCUSXOZTIIGTKIFUUTCWWIYHSPKVPLVCNMNMHPZZQZRXENOGGANXTQ");
    msg.flags = 135U;
    const char tmp_msg_0[] = {62, -117, -50, 5, 55, 93, -68, -11, 119, -24, 73, -69, -7, -73, -33, 49, -41, -60, -49, -83, 64, -75, 63, 101, 23, 32, 37, 95, 23, -78, -13, -94, -9, -46, -37, -106, -43, 109, -115, -36, 45, 74, -106, -111, -106, 71, -53, -30, 37, -128, -123, -58, 113, 108, 43, -14, 36, 49, -3, -2, 7, -50, 51, 21, 63, -113, 84, 110, -60, -123, 95, 66, 71, -27, 44, -44, 4, 116, 31, -49, 9, -42, 62, 39, -56, -38, 90, 102, -27, -41, -91, 123, -91, 41, -24, 2, -73, -39, -12, -47, -14, 34, -27, -123, -128, -36, 70, -14, -104, -42, -38, 34, 91, -78, -56, 119, 76, 1, -103, -63, 105, -53, -111, -94, 2, -16, -120, 101, 109, -87, -120, 89, -32, -79, -88, -67, -123, 108, -71, -21, -15, 85, 106, -57, -28, 75, 55, 51, -97, -97, -29, 81, 124, -94, 122, -8, -21, -7, 95, 45, -19, 116, -15, -13, -87, 84, 126, 104, -77, -11, -12, -6, 82, -18, 8, 102, -5, 60, -81, 8, -89, 108, 11, 119, 105, 12, 88, 26, -37, 116, -12, 28, -59, 88, -50, 107, 72, 50, 64, 112, -17, -83, 43, -32, -63, -125, 77, 121, -10, 69, 89, 99, 77, -66, 36, 125, 36, -80, -85, -52, 36};
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
    msg.setTimeStamp(0.122178124922);
    msg.setSource(23705U);
    msg.setSourceEntity(241U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(5U);
    msg.seq = 62218U;
    msg.sys_dst.assign("VRAZCUZBJFIYSRAQGIMGXEJQXHDGCFBMDLQOKOPQWOKSHNCOXLTDHZFYQITIZYOGXKWINDROLWCNVMLLNZHFLJEEHPZCMYTQDBZIYGKFWMZYJFYFTVRVNKOWQHERCVXAGVDJJNWVUPSJLHJKMNXEBCRBPIAYBGNEUISFUUFAAUQTXTTTBNESCMQRKVJLQXPRWOISSKPOZRSTKNHAUSWZPEADDBDOCPJE");
    msg.flags = 217U;
    const char tmp_msg_0[] = {-59, 28, 104, -120, 81, 45, 77, 64, 32, 105, -80, -104, 65, -10, 36, -42, -109, -106, -22, -17, 80, -46, -73, 45, 21, 55, -117, -83, 44, 63, -77, -97, 80, 61, 1, 14, 24, 19};
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
    msg.setTimeStamp(0.892639492431);
    msg.setSource(42563U);
    msg.setSourceEntity(110U);
    msg.setDestination(21386U);
    msg.setDestinationEntity(249U);
    msg.sys_src.assign("JSTZZXVZLKPFRRHDVWAVSMQNBMDFVFRJNGLVLLGGEZYBJGCAWPLALSUCBOUKJY");
    msg.sys_dst.assign("LIMBTPCEVYEPTZIPSAKYCIY");
    msg.flags = 238U;
    const char tmp_msg_0[] = {-118, 108, -128, -53, -101, -31, 79, -60, 111, 40, 0, 15, -50, 71, -62, -66, -73, 28};
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
    msg.setTimeStamp(0.199472336156);
    msg.setSource(5356U);
    msg.setSourceEntity(13U);
    msg.setDestination(38454U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("RAHYOVVXRFDGZZBPGIBVAHMPZCXEDHHNYNRASNRJPPREGNUKITYBZMIKWYLXAFFBBOFQDEGNWYDKHUOLLWUVKIVKUSJXHLDE");
    msg.sys_dst.assign("QWTRZEYFUNEFMKQVCNSJSKRJIGDQNVYYCXLBXBXDLPAMTWKCPGHWVULUWITEOBEVSKAZMBIVHDHJECYGX");
    msg.flags = 107U;
    const char tmp_msg_0[] = {103, -84, 78, -79, 37, 27, 91, -87, 21, 82, -40, 96, -98, -42, 43, -46, -8, 102, -36, 29, 5, -126, -24, -72, -33, 83, 48, 72, 103, -64, 72, -121, 55, -22, -46, 108, -26, 25, -121, 89, -22, 9, 18, 75, 99, 93, -23, -40, 103, 125, -126, 101, 25, -92, 20, -102, 82, -27, -10, -118, -32, 17, -117, 56};
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
    msg.setTimeStamp(0.490790282436);
    msg.setSource(1013U);
    msg.setSourceEntity(47U);
    msg.setDestination(50589U);
    msg.setDestinationEntity(247U);
    msg.sys_src.assign("FMOOBLDNCMYXAAVELWLJLCMQGYEQMEMVVNNWUFCPYZBKESMKIECSDNOVGZMVNHTLUPDTBUKOFPVAWFCPVMCEUTWIYLJBAEPTRDDXCRHJRKWKYXTAYSOYTZRWLVFUSUHXEBGIGRGQFNJUSNCBRBOOKVXHIJQGGQXMSWGZFKDNAYAXRRJBPSTXAEZBIWZSFKBCTUHIIUPEISFZJTO");
    msg.sys_dst.assign("HAKOJRPMESWFYDCKSDGRYCIVUUKTQPIOKTSHVOIXIBLPQUXGAYNSKDZPVHHBYRNSZCXYYZCSUPPWTUQIAVJOJVLHWWUBNBYTMOFVBCNYFBIG");
    msg.flags = 155U;
    const char tmp_msg_0[] = {32, 74, -4, 40, 30, 118, 74, 111, -88, -102, -100, 56, 83, -106, -57, 27, -15, -109, 1, 88, 80, -127, 59, 24, -128, 14, 52, 73, 52, 80, 47, 61, 91, -118, 116, -55, -8, 70, 64, -54, 68, -68, 72, 126, 75, 77, -88, -25, -105, -34, -85, 62, -4, 94, 67, -114, -1, 42, 100, 16, 99, 92, 71, -93, 74, 8, 115, -96, 33, -104, -55, 85, -81, 49, 68, 1, -32, 107, -44, -121, -118, 15, -13, 95, 43, 109, 20, 53, 81, 22, -80, -73, -42, 32, 47, -111, 82, 94, -11, -35, 8, 117, -40, -88, 20, 13, -68, 109, -97, -21, -67, -62, 125, 64, -40, -16, -72, 118, 45, -116, -36, -44, -117};
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
    msg.setTimeStamp(0.318736572715);
    msg.setSource(33980U);
    msg.setSourceEntity(3U);
    msg.setDestination(63395U);
    msg.setDestinationEntity(62U);
    msg.seq = 9628U;
    msg.value = 229U;
    msg.error.assign("LCKRTNUGCJFVYAFIUYIDUXRZNCDFEPKMJJGRYQVGQYRQZHASTFBFBVKDELUHJXYTQFOXEMSPMTKSBAQNWIEWHTLMBKRWFXNSPOMYPJLPYVHWMNDSNJVDJXGRPBVBZPWHWUDJXAGCCTKFAMAPQCOZZHXZLKJVETOUDEDHWLOBZPMSVGSVLLRWKGGZUNXQIMLNYPBDYEXQHRUWKRDIOAWTIIFTECYANLX");

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
    msg.setTimeStamp(0.0202023627233);
    msg.setSource(34905U);
    msg.setSourceEntity(69U);
    msg.setDestination(35389U);
    msg.setDestinationEntity(121U);
    msg.seq = 4744U;
    msg.value = 242U;
    msg.error.assign("NNGQXDBDAIZYRHPWNNQFBJJACGYQSNHVQGBGAQEYHDEXHAZJMBQOTSYMOFEWEFUPHDEWRPXLXAWOQGIBSJWSXFRGY");

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
    msg.setTimeStamp(0.737947252814);
    msg.setSource(55814U);
    msg.setSourceEntity(48U);
    msg.setDestination(3808U);
    msg.setDestinationEntity(73U);
    msg.seq = 28064U;
    msg.value = 84U;
    msg.error.assign("PJBGMRSVDFQXLRSNPJBUSIVNIVICGNFEJNZHWFDSCMQFHPDUTBDMNJZOLKSJGIDGNHZCDVWLYQXOETIOTMPXXOGMQKQSKFXUXAUJYXHNAYPRSAJYUZGAFEDQROEFBIMPAXYJKIVOPSLQKKKABCKWLNYHULOYTATXLPWLRCERGYWDVLIBZNHTRRFCENCBMGILSZO");

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
    msg.setTimeStamp(0.398054471966);
    msg.setSource(30840U);
    msg.setSourceEntity(165U);
    msg.setDestination(34647U);
    msg.setDestinationEntity(195U);
    msg.seq = 40896U;
    msg.sys.assign("LSIDJCUZJKRDBYMEYVRGQZJVKSEEGTRBWQTEDITVYULSZSJRMOKXQSSUZJPTGENEWQOBNLMERWPUWNIPNEKLPOXIDAXOOWFQGLGOKMXVLLFRSCNYCMTJHZLGPMKQXKDCADZFZNCAIHMIBGFRFCTJADFMAXMKDJHHKBUXHGTZVUBSPOYFRCOARYHBGENZYMDWFWIUXHQJWQRITYXWUOCCWLAZPAXHBYQTBVHACQKNSIP");
    msg.value = 0.0822981375711;

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
    msg.setTimeStamp(0.866884061199);
    msg.setSource(61668U);
    msg.setSourceEntity(74U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(0U);
    msg.seq = 29989U;
    msg.sys.assign("QYEAKTHIZUNFKDDGOOQGJQRZRNXMGMDCKOVDUVBZVRXWVZDLWDAOYRPEFBDRFUMTQHKIJNCFBFBWSPPXPCOBAJVFQCALSIBZWXJZUMRBHJTTOSAUNKPPARELYSSRYEYOPJGPYHKWIZIAQWIMHQJNLUNTXIDNBXHWCVIBQTNYT");
    msg.value = 0.930272031802;

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
    msg.setTimeStamp(0.600339247613);
    msg.setSource(7069U);
    msg.setSourceEntity(148U);
    msg.setDestination(29225U);
    msg.setDestinationEntity(241U);
    msg.seq = 28045U;
    msg.sys.assign("TCVVYOGGZGJAZLVZNQHHAZNLJVCGLOZRQRAJKHOWMVFCYYTCMXWQKRBGOEMULNFFKKUMJJFLZ");
    msg.value = 0.683848388031;

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
    msg.setTimeStamp(0.684663753883);
    msg.setSource(55694U);
    msg.setSourceEntity(225U);
    msg.setDestination(10968U);
    msg.setDestinationEntity(219U);
    msg.action = 160U;
    msg.longain = 0.261052247025;
    msg.latgain = 0.00770781440981;
    msg.bondthick = 858676492U;
    msg.leadgain = 0.44455923612;
    msg.deconflgain = 0.851434757645;

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
    msg.setTimeStamp(0.694446829928);
    msg.setSource(1646U);
    msg.setSourceEntity(108U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(140U);
    msg.action = 207U;
    msg.longain = 0.801800440617;
    msg.latgain = 0.860760506942;
    msg.bondthick = 1977009443U;
    msg.leadgain = 0.363876430054;
    msg.deconflgain = 0.781306500087;

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
    msg.setTimeStamp(0.540691402632);
    msg.setSource(23427U);
    msg.setSourceEntity(100U);
    msg.setDestination(193U);
    msg.setDestinationEntity(157U);
    msg.action = 66U;
    msg.longain = 0.209277152093;
    msg.latgain = 0.422991501099;
    msg.bondthick = 97474260U;
    msg.leadgain = 0.0205950522109;
    msg.deconflgain = 0.712637185107;

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
    msg.setTimeStamp(0.672823119803);
    msg.setSource(34508U);
    msg.setSourceEntity(21U);
    msg.setDestination(50880U);
    msg.setDestinationEntity(228U);
    msg.err_mean = 0.72707926479;
    msg.dist_min_abs = 0.286880017541;
    msg.dist_min_mean = 0.500724808893;

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
    msg.setTimeStamp(0.201779745691);
    msg.setSource(41956U);
    msg.setSourceEntity(73U);
    msg.setDestination(37876U);
    msg.setDestinationEntity(39U);
    msg.err_mean = 0.330930132258;
    msg.dist_min_abs = 0.616965498774;
    msg.dist_min_mean = 0.0115013834359;

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
    msg.setTimeStamp(0.537163923728);
    msg.setSource(37010U);
    msg.setSourceEntity(43U);
    msg.setDestination(12792U);
    msg.setDestinationEntity(110U);
    msg.err_mean = 0.64608487309;
    msg.dist_min_abs = 0.452006582305;
    msg.dist_min_mean = 0.0246554998588;

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
    msg.setTimeStamp(0.605657020539);
    msg.setSource(17062U);
    msg.setSourceEntity(219U);
    msg.setDestination(30805U);
    msg.setDestinationEntity(79U);
    msg.action = 224U;
    msg.lon_gain = 0.042229395422;
    msg.lat_gain = 0.0264415745829;
    msg.bond_thick = 0.383593297423;
    msg.lead_gain = 0.922131395486;
    msg.deconfl_gain = 0.32546170983;
    msg.accel_switch_gain = 0.503980654065;
    msg.safe_dist = 0.502074081393;
    msg.deconflict_offset = 0.308394860462;
    msg.accel_safe_margin = 0.962112280313;
    msg.accel_lim_x = 0.871663943147;

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
    msg.setTimeStamp(0.650526837733);
    msg.setSource(1394U);
    msg.setSourceEntity(158U);
    msg.setDestination(35502U);
    msg.setDestinationEntity(178U);
    msg.action = 70U;
    msg.lon_gain = 0.646075580611;
    msg.lat_gain = 0.516859672479;
    msg.bond_thick = 0.1135156598;
    msg.lead_gain = 0.569370060824;
    msg.deconfl_gain = 0.825583449617;
    msg.accel_switch_gain = 0.591153668718;
    msg.safe_dist = 0.215927728209;
    msg.deconflict_offset = 0.331873481516;
    msg.accel_safe_margin = 0.271569461744;
    msg.accel_lim_x = 0.980322731045;

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
    msg.setTimeStamp(0.587764317069);
    msg.setSource(53953U);
    msg.setSourceEntity(0U);
    msg.setDestination(57464U);
    msg.setDestinationEntity(31U);
    msg.action = 136U;
    msg.lon_gain = 0.223971721016;
    msg.lat_gain = 0.670216823365;
    msg.bond_thick = 0.126603584203;
    msg.lead_gain = 0.668519746876;
    msg.deconfl_gain = 0.059752925956;
    msg.accel_switch_gain = 0.525702649391;
    msg.safe_dist = 0.794572291572;
    msg.deconflict_offset = 0.165065049354;
    msg.accel_safe_margin = 0.387712673264;
    msg.accel_lim_x = 0.340146446152;

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
    msg.setTimeStamp(0.885451991321);
    msg.setSource(20057U);
    msg.setSourceEntity(27U);
    msg.setDestination(32562U);
    msg.setDestinationEntity(66U);
    msg.type = 20U;
    msg.op = 147U;
    msg.err_mean = 0.385273712595;
    msg.dist_min_abs = 0.502150212779;
    msg.dist_min_mean = 0.146280496758;
    msg.roll_rate_mean = 0.253979373868;
    msg.time = 0.865226215263;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 147U;
    tmp_msg_0.lon_gain = 0.0505663819523;
    tmp_msg_0.lat_gain = 0.263038672738;
    tmp_msg_0.bond_thick = 0.915618935215;
    tmp_msg_0.lead_gain = 0.848451422193;
    tmp_msg_0.deconfl_gain = 0.713862142552;
    tmp_msg_0.accel_switch_gain = 0.995489303297;
    tmp_msg_0.safe_dist = 0.459219349879;
    tmp_msg_0.deconflict_offset = 0.588524729951;
    tmp_msg_0.accel_safe_margin = 0.154924465448;
    tmp_msg_0.accel_lim_x = 0.336457293879;
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
    msg.setTimeStamp(0.806213442253);
    msg.setSource(11465U);
    msg.setSourceEntity(69U);
    msg.setDestination(42929U);
    msg.setDestinationEntity(136U);
    msg.type = 57U;
    msg.op = 59U;
    msg.err_mean = 0.526161964732;
    msg.dist_min_abs = 0.874677427211;
    msg.dist_min_mean = 0.187592512137;
    msg.roll_rate_mean = 0.391342481578;
    msg.time = 0.162754236372;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 136U;
    tmp_msg_0.lon_gain = 0.574167304135;
    tmp_msg_0.lat_gain = 0.398579105929;
    tmp_msg_0.bond_thick = 0.45884199656;
    tmp_msg_0.lead_gain = 0.644921388325;
    tmp_msg_0.deconfl_gain = 0.184589622291;
    tmp_msg_0.accel_switch_gain = 0.735868982371;
    tmp_msg_0.safe_dist = 0.853939578062;
    tmp_msg_0.deconflict_offset = 0.223802575164;
    tmp_msg_0.accel_safe_margin = 0.807244657835;
    tmp_msg_0.accel_lim_x = 0.567409922329;
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
    msg.setTimeStamp(0.398672554824);
    msg.setSource(35112U);
    msg.setSourceEntity(227U);
    msg.setDestination(27285U);
    msg.setDestinationEntity(107U);
    msg.type = 126U;
    msg.op = 55U;
    msg.err_mean = 0.728025457488;
    msg.dist_min_abs = 0.381622907915;
    msg.dist_min_mean = 0.082035443725;
    msg.roll_rate_mean = 0.230951011196;
    msg.time = 0.320009638635;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 70U;
    tmp_msg_0.lon_gain = 0.879249855294;
    tmp_msg_0.lat_gain = 0.116444383376;
    tmp_msg_0.bond_thick = 0.668252799334;
    tmp_msg_0.lead_gain = 0.853892123002;
    tmp_msg_0.deconfl_gain = 0.839716435067;
    tmp_msg_0.accel_switch_gain = 0.675117943836;
    tmp_msg_0.safe_dist = 0.267036209838;
    tmp_msg_0.deconflict_offset = 0.440605026457;
    tmp_msg_0.accel_safe_margin = 0.231807190459;
    tmp_msg_0.accel_lim_x = 0.435793221586;
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
    msg.setTimeStamp(0.410448522118);
    msg.setSource(38578U);
    msg.setSourceEntity(46U);
    msg.setDestination(63002U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.108366945477;
    msg.lon = 0.1851168904;
    msg.eta = 2963644163U;
    msg.duration = 56256U;

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
    msg.setTimeStamp(0.571743397559);
    msg.setSource(58291U);
    msg.setSourceEntity(133U);
    msg.setDestination(23003U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.7453272484;
    msg.lon = 0.431291964317;
    msg.eta = 802164158U;
    msg.duration = 51040U;

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
    msg.setTimeStamp(0.190938286812);
    msg.setSource(53458U);
    msg.setSourceEntity(36U);
    msg.setDestination(62314U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.485197677884;
    msg.lon = 0.769875781309;
    msg.eta = 1647812146U;
    msg.duration = 25439U;

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
    msg.setTimeStamp(0.0062120155068);
    msg.setSource(16800U);
    msg.setSourceEntity(138U);
    msg.setDestination(63774U);
    msg.setDestinationEntity(119U);
    msg.plan_id = 14780U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.488317399576;
    tmp_msg_0.lon = 0.203318762955;
    tmp_msg_0.eta = 224218379U;
    tmp_msg_0.duration = 5125U;
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
    msg.setTimeStamp(0.195209103958);
    msg.setSource(8290U);
    msg.setSourceEntity(206U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(73U);
    msg.plan_id = 47368U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.16314647045;
    tmp_msg_0.lon = 0.350164624712;
    tmp_msg_0.eta = 164156141U;
    tmp_msg_0.duration = 22314U;
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
    msg.setTimeStamp(0.395427925695);
    msg.setSource(15375U);
    msg.setSourceEntity(225U);
    msg.setDestination(11942U);
    msg.setDestinationEntity(36U);
    msg.plan_id = 2408U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.00111958873319;
    tmp_msg_0.lon = 0.28973495919;
    tmp_msg_0.eta = 4103209396U;
    tmp_msg_0.duration = 39781U;
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
    msg.setTimeStamp(0.129606443228);
    msg.setSource(34209U);
    msg.setSourceEntity(36U);
    msg.setDestination(43367U);
    msg.setDestinationEntity(176U);
    msg.type = 227U;
    msg.command = 102U;
    msg.settings.assign("FGQOBRWJFOAVDTWZHIYXPGOKMOTBBAZDZGWJLHNQXLXBFKSNUGFAQIDFTVGDPGKLCERVRHC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30196U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JLLQXAGTIFQEZIHEMUTCVCVUBPITTKOYCYADBILHRUIXPHLZOIQKEJFHVWHNXRLRFAYZCBBOPBJOYJWVXNKWCGMTXAVPMRQMNFOPDDSGBMYWNXLJQHVOUGIUJSGMFVDMEXTCXNSNKCVDTONNAEUPADTGZKSIHSAERDFUUUGIOQWUBYRSBOPYJLQJVRMKMEGMZELTAZZNQDKRWKHSZDFPWACYXPHFKNEOQCVKYPFB");

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
    msg.setTimeStamp(0.27810655309);
    msg.setSource(63953U);
    msg.setSourceEntity(55U);
    msg.setDestination(19531U);
    msg.setDestinationEntity(76U);
    msg.type = 125U;
    msg.command = 130U;
    msg.settings.assign("OERVXQQTJFZEMRMJDSZIDLWKMVQAI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65319U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.124336822105;
    tmp_tmp_msg_0_0.lon = 0.438289427701;
    tmp_tmp_msg_0_0.eta = 2968628414U;
    tmp_tmp_msg_0_0.duration = 60659U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FWQYGFCAZPJLPJSUHQJKKHZTSOIELDCWIFZLEOXGGHSFTGILZNIODCRDINPWTPAUWMGEMVCPNTDVJZAXNYWEEXUMUKOCLJARLGHPYVEHRQPSZRRMAADMYIXTHVSTOXXWAQEPNTYVBCGVXRQSCBGJLKUAZJFLNUHBPDCEKGOUARTQDVNNBIBUTVXFFVKJQRSDKHWOYZ");

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
    msg.setTimeStamp(0.366177119798);
    msg.setSource(45396U);
    msg.setSourceEntity(192U);
    msg.setDestination(8591U);
    msg.setDestinationEntity(7U);
    msg.type = 89U;
    msg.command = 98U;
    msg.settings.assign("JUKFYUNIOTAOAJXECBVILDPLZOTKQBYUUCWGFYJQXLPCMATKNOZBCPRXMRKUUVTZWSLHFVLVSHEGEATILNBKYJLGFMVTFSFUGFSAEEVRRPSTMQRIIBZZJKPYDYCRCNOVRPEWHWVDHDDN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41674U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.783018946903;
    tmp_tmp_msg_0_0.lon = 0.527819180739;
    tmp_tmp_msg_0_0.eta = 609832520U;
    tmp_tmp_msg_0_0.duration = 37601U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NZIXEPFYTVUKEWAKBBYIGNUNFEJHXGXVRGHTIWDKYTXOHUEELSQLYUNKWQPCZSMPMZXLGSZMFLLDJAZBRYHTH");

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
    msg.setTimeStamp(0.941664874182);
    msg.setSource(14555U);
    msg.setSourceEntity(3U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(55U);
    msg.state = 56U;
    msg.plan_id = 36307U;
    msg.wpt_id = 141U;
    msg.settings_chk = 40849U;

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
    msg.setTimeStamp(0.911533606154);
    msg.setSource(9027U);
    msg.setSourceEntity(239U);
    msg.setDestination(5032U);
    msg.setDestinationEntity(188U);
    msg.state = 185U;
    msg.plan_id = 43996U;
    msg.wpt_id = 182U;
    msg.settings_chk = 55769U;

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
    msg.setTimeStamp(0.738776362048);
    msg.setSource(7244U);
    msg.setSourceEntity(45U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(1U);
    msg.state = 41U;
    msg.plan_id = 23791U;
    msg.wpt_id = 184U;
    msg.settings_chk = 56741U;

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
    msg.setTimeStamp(0.104506309937);
    msg.setSource(37077U);
    msg.setSourceEntity(198U);
    msg.setDestination(41752U);
    msg.setDestinationEntity(216U);
    msg.uid = 87U;
    msg.frag_number = 175U;
    msg.num_frags = 56U;
    const char tmp_msg_0[] = {5, 27, -18, 31, -50, -44, 114, -31, 29, 34, 5, 59, 24, 73, -98, 63, 15, -51, 103, -76, 36, -113, -56, 49, -28, -16, 80, -98, 14, -57, -34, -52, -63, -125, 113, 106, -92, 29, 110, -20, -51, -119, -39, -58, 6, 62, -77, -50, -24, 33, -92, -123, -122, 17, 66, -105, 29, -110, -77, 50, -97, -14, -26, 86, 96, 29, -83, 102, 31, 63, 3, 103, 103, 26, 11, -88, -39, 70, 88, -1, 56, -8, 7, 111, -28, -86, 23, -32, -47, 110, -61, -8, -104, 23, -33, 62, -54};
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
    msg.setTimeStamp(0.217417673089);
    msg.setSource(59072U);
    msg.setSourceEntity(119U);
    msg.setDestination(16064U);
    msg.setDestinationEntity(234U);
    msg.uid = 155U;
    msg.frag_number = 178U;
    msg.num_frags = 116U;
    const char tmp_msg_0[] = {1, -66, -34, -75, -83, 118, 121, -74, 17, 109, -97, 115, -74, -75, -67, -43, 8, 122, -3, 88, 54, -100, 53, 13, -69, 59, 103, -19, 68, 24, -27, 66, -4, 38, -100, 46, 4, 125, -25, -15, -95, -94, 50};
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
    msg.setTimeStamp(0.218889250088);
    msg.setSource(18278U);
    msg.setSourceEntity(103U);
    msg.setDestination(55354U);
    msg.setDestinationEntity(149U);
    msg.uid = 161U;
    msg.frag_number = 132U;
    msg.num_frags = 175U;
    const char tmp_msg_0[] = {-6, 109, 109, 116, 121, -106, -6, 78, -98, -78, 100, 30, 67, 104, 73, 86, 62, -101, -90, 89, -58, 53, 112, 27, -102, 4, -92, -86, -32, -113, -116, 23, -82, -69, -19, 19, 51, 13, -29, 96, -123, -66, -51, 116, -85, -46, -37, -81, -75, 123, -21, -75, -118, 85, -30, 24, 11, 125, -30, -49, -114, 34, -56, -11, -92, 89, 94, -2, -102, -55, 24, 86, 24, 62, -95, 98, 124, 17, -107, -121, -104, 82, 75, -44, 7, -6, 41, 44, 25, 63, -4, -107, -2, -18, -14, -16, 81, 126, -73, 100, 54, 45, -82, -19, 35, 6, -22, 51};
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
    msg.setTimeStamp(0.828777531737);
    msg.setSource(8739U);
    msg.setSourceEntity(104U);
    msg.setDestination(1406U);
    msg.setDestinationEntity(132U);
    msg.content_type.assign("IYAXWONDREZFLDBWBMEFGTYXYVMHTBNRWCGJGXOWRIMUSTBAXACWHBCJFAOXJHMRGMFVJODVPVQNUCSP");
    const char tmp_msg_0[] = {81, 88, -28, 78, -61, 110, -120, -37, 115, -71, -4, 63, -101, 125};
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
    msg.setTimeStamp(0.193494159571);
    msg.setSource(11803U);
    msg.setSourceEntity(185U);
    msg.setDestination(31663U);
    msg.setDestinationEntity(91U);
    msg.content_type.assign("CGYTPUCZTSUMPWPZIGKECBXNLRXNJOHWCPGZNAMAKLSNEVFYVFBXOXSJQBAWQWQCKVQYIJUENLZHGBSNLPXHTHMOSVSJEO");
    const char tmp_msg_0[] = {-23, 90, -31, -90, -34, 48, 3, 54, -7, 102, -71, -106, -120, 81, 4, -70, 94, -10, -115, -65, 123, -60, -64, -106, -46, 16, -12, 77, -121, -78, 75, -26, -46, -111, -99, 80, -84, 120, 29, 15, -5, -21, -110, -5, 64, 53, 2, -45, -4, 76, -37, 88, -76, -102, 8, 46, 125, 38, 49, 122, 61, -56, 13, 106, 111, -92, -86, 22, 44, 118, 25, -82, 117, 97, -117, -2, -117, 96, -11, 22, -17, -34, 54, -119, -100, -76, 81, -79, -29, -15, -127, 91, 61, -111, 55, -59, -89, -87, -64, -64, 45, 116, 46, 65, 89, 110, 65, 14, 8, 61, -50, -89, 35, -52, -43, -100, 51, 39};
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
    msg.setTimeStamp(0.850906272987);
    msg.setSource(32097U);
    msg.setSourceEntity(182U);
    msg.setDestination(1745U);
    msg.setDestinationEntity(244U);
    msg.content_type.assign("EMPCVMVUSBYYQSLFDPTKTWZIFRESUOEOUAUUZSQQHOIWAQKPZWXASDDMMBDRHISTHRHYJFDGWKWAYDWAJLUAYIZXVJUFUNIBWKOYMTWBGFQX");
    const char tmp_msg_0[] = {103, -118, -120, 62, 86, -11, 4, -40, 58, 45, 22, -44, -66, -71, -80, -81, 83, -97, -115, 83, 62, 102, 90, 31, 37, 86, 100, -120, 58, -7, 86, 57, 97, 58, 20, -45, -116, -16, 39, -39, 95, -71, -118, -55, 90, -6, -48, -120, 100, 113, -30, 97, -28, 36, 28, -73, -56, -118, 15, -9, 6, 37, 12, -80, 105, -84, 116, 68, 6, 85, -90, 45, 60, -3, -90, -78, 108, -2, 123, 8, -126, 86, -1, 109, 10, 98, 0, -70, -68, -15, 122, -33, 105, -70, 42, 114, -14, 21, -75, 40, -109, 90, -111, -123, 26, -91, 49, -67, 70, -41, 123, 96, -68, -19, -5, 87, 93, -2, -55, -23, -128, -27, -126, -126, 89, 72, -51, -9, -57, 86, -117, 55, 18, 58, 77, -29, 4, 125, -80, 57, 33, 105, 1, 113, -16, -78, 65, -111, 117, -4, -127, -82, 111, 86, -57, 52, -65, -43, 50, 3, -64, 19, -30, 14, 15, 95, -62, 26, 113, -99, -63, -3, 75, 117, 114, -42, 68, -19, 89, -37, -32, 9, 38, -95, 55, 76, -11, 52, 87, -65, -109, -122, 75, -28, -91, -41, -117, 4, 9, 86, 69, 10, 115, -52, -15, 88, 98, -20, 116, 113, -52, -66, 71, -74, -1, 69, -108, 51, 84, -93, 26, -71, 74, -23, 30, -65, -64, -45, 87, 95, 125, 111, -56, 31, 69, 28, -105, -78, -5, 41};
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
    msg.setTimeStamp(0.693877686384);
    msg.setSource(19961U);
    msg.setSourceEntity(12U);
    msg.setDestination(8302U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.60915443257);
    msg.setSource(38726U);
    msg.setSourceEntity(140U);
    msg.setDestination(7876U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.440570214222);
    msg.setSource(41956U);
    msg.setSourceEntity(79U);
    msg.setDestination(50439U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.327467333638);
    msg.setSource(54799U);
    msg.setSourceEntity(115U);
    msg.setDestination(454U);
    msg.setDestinationEntity(63U);
    msg.target = 52009U;
    msg.bearing = 0.673772536581;
    msg.elevation = 0.923751328645;

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
    msg.setTimeStamp(0.9732651789);
    msg.setSource(52505U);
    msg.setSourceEntity(165U);
    msg.setDestination(37121U);
    msg.setDestinationEntity(70U);
    msg.target = 31981U;
    msg.bearing = 0.294197490541;
    msg.elevation = 0.241456312371;

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
    msg.setTimeStamp(0.472522004257);
    msg.setSource(9385U);
    msg.setSourceEntity(26U);
    msg.setDestination(28719U);
    msg.setDestinationEntity(130U);
    msg.target = 6533U;
    msg.bearing = 0.437002467406;
    msg.elevation = 0.293663460532;

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
    msg.setTimeStamp(0.180258270944);
    msg.setSource(44597U);
    msg.setSourceEntity(3U);
    msg.setDestination(22075U);
    msg.setDestinationEntity(77U);
    msg.target = 13938U;
    msg.x = 0.782850579853;
    msg.y = 0.119930304887;
    msg.z = 0.319335526098;

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
    msg.setTimeStamp(0.416462834424);
    msg.setSource(45102U);
    msg.setSourceEntity(136U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(196U);
    msg.target = 41347U;
    msg.x = 0.363936465614;
    msg.y = 0.102006953966;
    msg.z = 0.96953680944;

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
    msg.setTimeStamp(0.456374481395);
    msg.setSource(20058U);
    msg.setSourceEntity(172U);
    msg.setDestination(48199U);
    msg.setDestinationEntity(26U);
    msg.target = 37470U;
    msg.x = 0.822071099642;
    msg.y = 0.35181735613;
    msg.z = 0.919925191869;

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
    msg.setTimeStamp(0.480043178622);
    msg.setSource(19311U);
    msg.setSourceEntity(83U);
    msg.setDestination(22347U);
    msg.setDestinationEntity(20U);
    msg.target = 30908U;
    msg.lat = 0.370727621073;
    msg.lon = 0.844087853521;
    msg.z_units = 12U;
    msg.z = 0.232856213411;

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
    msg.setTimeStamp(0.97327540142);
    msg.setSource(61910U);
    msg.setSourceEntity(24U);
    msg.setDestination(879U);
    msg.setDestinationEntity(237U);
    msg.target = 60376U;
    msg.lat = 0.10404582506;
    msg.lon = 0.222060570883;
    msg.z_units = 208U;
    msg.z = 0.928451600032;

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
    msg.setTimeStamp(0.81109965511);
    msg.setSource(17155U);
    msg.setSourceEntity(212U);
    msg.setDestination(61425U);
    msg.setDestinationEntity(26U);
    msg.target = 64356U;
    msg.lat = 0.663318069911;
    msg.lon = 0.667846563423;
    msg.z_units = 117U;
    msg.z = 0.941529664881;

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
    msg.setTimeStamp(0.580057977499);
    msg.setSource(8442U);
    msg.setSourceEntity(143U);
    msg.setDestination(12044U);
    msg.setDestinationEntity(27U);
    msg.locale.assign("IQHCBHRRCFCOXZJWYNRIARHRYIECLUGGHXMSXMSFUPAGETBVZMEIKBHBDNSGGUPFRZYBCDPVFVATVWCIWPMXVGOLWHGCLVSJBLJIELAMSUSXDQKNBIXCKIHZONBSS");
    const char tmp_msg_0[] = {88, 124, -44, -96, 25, -90, -54, -124, -78, -46, 27, 37, -16, 55, -84, -70, 76, -123, -106, -100, 82, 120, -5, 116, -36, 17, -117, 119, -2, -66, -94, -127, 110, 38, 102, 28, 49, 96, 24, -13, -127, 16, 38, -42, -53, 122, -73, 66, 95, 8, -44, -52, -121, -128, -68, -62, 21, 78, 28, -126, -121, 122, -124, -20, -55, -45, 64, -42, -90, -48, 35, 11, 0, -26, -102, 1, 20, -121, 121, -45, 124, 94, 103, 28, 39, 78, 95, 80, 118, -40, 53, -125, 74, -117, 116, 13, -74, -127, 14, 49, -125, -99, 119, -35, -72, 55, 47, -56, 92, -84, 59, -120, 78, -27, 110, -57, -31, 0, 26, 114, -6, -122, 96, -73, -75, 90, -19, -27, -63, 33, -15, -71, -60, -55, -89, 61};
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
    msg.setTimeStamp(0.383762788455);
    msg.setSource(1228U);
    msg.setSourceEntity(167U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(115U);
    msg.locale.assign("TOCUFZMDOZGMTYQAHZQBLBDFYYJEVLWRFPVIVQZYXLAXUQGHDAC");
    const char tmp_msg_0[] = {-69, -90, 4, -2, 102, 70, -103, -118, 113, 39, -8, 93, 110, 52, 87, -88, -81, 106, 37, 40, -107, 5, 111, -90, 56, -31, -65, 48, -93, -104, -1, -91, 38, -54, 37, 81, 15, -56, -57, -24, -5, 50, 29, 111, -72, 60, -38, -33, -27, -69, -11, 92, -8, 106, 76, 106, -25, 126, -108, -103, -25, -58, -32, -40, 11, 93, -26, 87, -105, -69, 122, -27, -88, -76, 97, -101, 109, -123, 26, -16, -27, -128, -52, -64, -53, 20, 52};
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
    msg.setTimeStamp(0.0249721135895);
    msg.setSource(14498U);
    msg.setSourceEntity(196U);
    msg.setDestination(20227U);
    msg.setDestinationEntity(163U);
    msg.locale.assign("JLJGDYDJZPSEHBVLMSADANTSTNNHWDLZQWZXCKKJFZPIODVATU");
    const char tmp_msg_0[] = {-111, -109, -73, -59, 56, -86, -105, -18, 86, -86, -37, 14, -41, 7, -118, -16, 103, -118, 43, -127, 75, 14, -23, 121, 84, -118, 14, 84, 44, -63, 107, -102, 79, -7, -59, 77, -66, -31, 119, 99, 106, 46, 2, 107, -4, 55, 115, 123, -35, -39, 109, 54, -13, 120, -6, 23, 14, -121, -51, 51, 90, 87, -5, -90, -85, 72, -83, 61, -23, -102, -85, -84, 89, 28, 56, 124, 76, -85, 3, 107, -53, 84};
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
    msg.setTimeStamp(0.28779911727);
    msg.setSource(49014U);
    msg.setSourceEntity(232U);
    msg.setDestination(21930U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.706540843958);
    msg.setSource(39744U);
    msg.setSourceEntity(16U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.285779124889);
    msg.setSource(10700U);
    msg.setSourceEntity(107U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.048913844005);
    msg.setSource(24646U);
    msg.setSourceEntity(231U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(106U);
    msg.camid = 12U;
    msg.x = 23341U;
    msg.y = 32322U;

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
    msg.setTimeStamp(0.344447319132);
    msg.setSource(27921U);
    msg.setSourceEntity(68U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(126U);
    msg.camid = 241U;
    msg.x = 55371U;
    msg.y = 58032U;

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
    msg.setTimeStamp(0.928361541734);
    msg.setSource(11654U);
    msg.setSourceEntity(226U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(5U);
    msg.camid = 148U;
    msg.x = 53373U;
    msg.y = 48056U;

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
    msg.setTimeStamp(0.713671552);
    msg.setSource(22049U);
    msg.setSourceEntity(77U);
    msg.setDestination(61100U);
    msg.setDestinationEntity(165U);
    msg.camid = 203U;
    msg.x = 35742U;
    msg.y = 50520U;

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
    msg.setTimeStamp(0.472926918572);
    msg.setSource(53355U);
    msg.setSourceEntity(19U);
    msg.setDestination(56710U);
    msg.setDestinationEntity(184U);
    msg.camid = 16U;
    msg.x = 25697U;
    msg.y = 28612U;

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
    msg.setTimeStamp(0.914447888829);
    msg.setSource(9967U);
    msg.setSourceEntity(177U);
    msg.setDestination(8443U);
    msg.setDestinationEntity(115U);
    msg.camid = 76U;
    msg.x = 34362U;
    msg.y = 39666U;

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
    msg.setTimeStamp(0.228026834162);
    msg.setSource(33042U);
    msg.setSourceEntity(9U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(195U);
    msg.tracking = 181U;
    msg.lat = 0.754301101192;
    msg.lon = 0.794057700401;
    msg.x = 0.0873715019443;
    msg.y = 0.515690386592;
    msg.z = 0.939601177514;

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
    msg.setTimeStamp(0.429922128649);
    msg.setSource(45498U);
    msg.setSourceEntity(33U);
    msg.setDestination(10213U);
    msg.setDestinationEntity(151U);
    msg.tracking = 137U;
    msg.lat = 0.429459543633;
    msg.lon = 0.399705314759;
    msg.x = 0.84475726656;
    msg.y = 0.714687758942;
    msg.z = 0.565173597275;

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
    msg.setTimeStamp(0.410576212344);
    msg.setSource(24363U);
    msg.setSourceEntity(211U);
    msg.setDestination(5686U);
    msg.setDestinationEntity(177U);
    msg.tracking = 2U;
    msg.lat = 0.0714302794463;
    msg.lon = 0.993923455748;
    msg.x = 0.622851075265;
    msg.y = 0.845232090066;
    msg.z = 0.396911814343;

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
    msg.setTimeStamp(0.317293375849);
    msg.setSource(40540U);
    msg.setSourceEntity(170U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(36U);
    msg.target.assign("NXWMKRCDFTTKJBEYMNYIEJVXACXPENAICZEATLOGUVATTEJDSTEBRVRWZNAZJASSIQHSQXBDKFMAOL");
    msg.lbearing = 0.588500323731;
    msg.lelevation = 0.241220364209;
    msg.bearing = 0.0459750343633;
    msg.elevation = 0.429924380082;
    msg.phi = 0.27496482095;
    msg.theta = 0.65553101338;
    msg.psi = 0.576910099199;
    msg.accuracy = 0.0280096525579;

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
    msg.setTimeStamp(0.333493319727);
    msg.setSource(34477U);
    msg.setSourceEntity(54U);
    msg.setDestination(2995U);
    msg.setDestinationEntity(108U);
    msg.target.assign("THIADBQHNBYQWHKNLTHMIHAKJCZZHKSEQTDAKSPCQCMUORSVMLYJFGRDQFQFRILVFFNWHBLOOZFOPJAZJDEUZJRNXSFNPUUKBHPLNJOGGCWBRGXDDWARRGBUOGQPEBKVMZNXWCQWXZJXOXQAUMXKPHFANVFECIYTTUGRVTUZXNIYOG");
    msg.lbearing = 0.820885792014;
    msg.lelevation = 0.461132260184;
    msg.bearing = 0.0612634932951;
    msg.elevation = 0.274092466693;
    msg.phi = 0.184398695591;
    msg.theta = 0.0370822986371;
    msg.psi = 0.282161074171;
    msg.accuracy = 0.655760934372;

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
    msg.setTimeStamp(0.717467983093);
    msg.setSource(16965U);
    msg.setSourceEntity(157U);
    msg.setDestination(42565U);
    msg.setDestinationEntity(74U);
    msg.target.assign("AGPRVBLAVMZGFUTUMLYFBCBSMREJFSHCVGXEGLICJT");
    msg.lbearing = 0.674437102839;
    msg.lelevation = 0.583900048308;
    msg.bearing = 0.334237130091;
    msg.elevation = 0.677772051678;
    msg.phi = 0.122089480173;
    msg.theta = 0.673713465608;
    msg.psi = 0.19513329561;
    msg.accuracy = 0.781934506998;

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
    msg.setTimeStamp(0.829846294008);
    msg.setSource(52538U);
    msg.setSourceEntity(244U);
    msg.setDestination(3094U);
    msg.setDestinationEntity(95U);
    msg.target.assign("XVYLKJZGHYBYYZCFFBJRZFASLVIPVSJAJKMKKJXBFHKHHJMKKBKHHNVWIOMCUUTCGPVQPWNYBSVPUSMVSWTDWDZFCKMRERLFNPMLYCUNCITKDQGEYWSIGTRQXBZGPGQLEGURYPAXDRIWFAWXDGNELQRSSQEJUVBITONBLTSVUFAXIEAJCZHFRXNYMAWBTMHEJOWZCRWVEHPXYXAMUCOZ");
    msg.x = 0.895519810501;
    msg.y = 0.595545881427;
    msg.z = 0.538158307046;
    msg.n = 0.148494112811;
    msg.e = 0.589929827451;
    msg.d = 0.695510269763;
    msg.phi = 0.147341969456;
    msg.theta = 0.988317856295;
    msg.psi = 0.784867728614;
    msg.accuracy = 0.90556037216;

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
    msg.setTimeStamp(0.819059843926);
    msg.setSource(6401U);
    msg.setSourceEntity(115U);
    msg.setDestination(22508U);
    msg.setDestinationEntity(159U);
    msg.target.assign("MHEQWITFPEXADNQDDBWOYWWNJGRKWWPIZCRSDEZXXTTNCVCJNCZCJOLKKQLMXVDQGLLZKBWBIASJKQFLFGOVIRXUNUMTSFAAUDZOHAOYAMYYJ");
    msg.x = 0.290604437445;
    msg.y = 0.176872369296;
    msg.z = 0.531225600699;
    msg.n = 0.0271005056236;
    msg.e = 0.825827587105;
    msg.d = 0.675666061341;
    msg.phi = 0.215984481354;
    msg.theta = 0.416547955762;
    msg.psi = 0.628910855317;
    msg.accuracy = 0.770808938289;

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
    msg.setTimeStamp(0.84401708105);
    msg.setSource(42598U);
    msg.setSourceEntity(126U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(59U);
    msg.target.assign("RPVJQKGJAITXOZMWZSKAK");
    msg.x = 0.501635130689;
    msg.y = 0.890082526851;
    msg.z = 0.489983052708;
    msg.n = 0.796647274388;
    msg.e = 0.118512687715;
    msg.d = 0.822779954413;
    msg.phi = 0.942302100037;
    msg.theta = 0.898668786545;
    msg.psi = 0.304511536662;
    msg.accuracy = 0.549365124533;

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
    msg.setTimeStamp(0.165621507908);
    msg.setSource(60183U);
    msg.setSourceEntity(26U);
    msg.setDestination(513U);
    msg.setDestinationEntity(188U);
    msg.target.assign("DPBEVGJIHWMYILDAABBKSTWGHURLXAUWRBHFKNAXTAXLIRFJXYTOATSKMTNCCIOMAUTKMPZSYHARQCCDPSBHNLKZQZLFYVQZZPZJREMHHLSLK");
    msg.lat = 0.959155151266;
    msg.lon = 0.217140663071;
    msg.z_units = 172U;
    msg.z = 0.481496262345;
    msg.accuracy = 0.929176095765;

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
    msg.setTimeStamp(0.526445898778);
    msg.setSource(61149U);
    msg.setSourceEntity(213U);
    msg.setDestination(16121U);
    msg.setDestinationEntity(83U);
    msg.target.assign("QGYDFLQBDARDOMMKAJAJHJFXCEAPUEZZSHUVXJWTVWMETOJKBFQKNNAYUFQVFAGKEXRYFTGLYGXXDOCRNTXCEPZWGJOFBRPNCAZGBEYTFDVVWHNWQKTPOIQRILIRPUGNQGEISLKDNUSBDBTAYXSPIHM");
    msg.lat = 0.837607458389;
    msg.lon = 0.719084880391;
    msg.z_units = 221U;
    msg.z = 0.785578825637;
    msg.accuracy = 0.651981995258;

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
    msg.setTimeStamp(0.714184500637);
    msg.setSource(55037U);
    msg.setSourceEntity(37U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(225U);
    msg.target.assign("QYXMSFNTDPPNKILRYLXZGWFCJCMBFCGZGGOQLJJVYIHUOANEXEBNMJHHQEKFR");
    msg.lat = 0.303271517519;
    msg.lon = 0.124771722218;
    msg.z_units = 132U;
    msg.z = 0.838127459658;
    msg.accuracy = 0.37094488601;

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
    msg.setTimeStamp(0.0171326959895);
    msg.setSource(4986U);
    msg.setSourceEntity(30U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(250U);
    msg.name.assign("XSBOCDERXQUOY");
    msg.lat = 0.584406086159;
    msg.lon = 0.797658349237;
    msg.z = 0.454225044755;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.133740013688);
    msg.setSource(37046U);
    msg.setSourceEntity(99U);
    msg.setDestination(25051U);
    msg.setDestinationEntity(30U);
    msg.name.assign("BQSONGYSTQLAIOJUDADIXAPVGRSFOWCTGJULDTFZMVKOHDLGXIWNTYIDRHFWQWUEAABBGKPCWCXFRNHSNIFUIEMUUUVCYZXHKFPXBXXPPSDEPUWDAJLXWJQMBNRDVTLTVRZSYFRQTBEIMMROCIVPDFSEVLFWJKGBZIHZWQVNBHIMNEQOEGKXFUMHYNCHVAJPMYNKTHROAWTKZCOZYNJMBDJCJKCYGKYVQHLZPZQOLZGSESPLKQEU");
    msg.lat = 0.455341750458;
    msg.lon = 0.196280589813;
    msg.z = 0.808868071569;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.355094317636);
    msg.setSource(11741U);
    msg.setSourceEntity(191U);
    msg.setDestination(56598U);
    msg.setDestinationEntity(60U);
    msg.name.assign("YEMTYAEUTVJRXZNVHGSAMFXGIZKIGTSSRNULWWXDYDGTCTPUUHSCDHFEHMQKCPEUWVZMLHSUWVPXOKFMQOV");
    msg.lat = 0.418817738202;
    msg.lon = 0.638744739486;
    msg.z = 0.489154577831;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.215467333097);
    msg.setSource(41787U);
    msg.setSourceEntity(200U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(30U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.264112565206);
    msg.setSource(54712U);
    msg.setSourceEntity(185U);
    msg.setDestination(28770U);
    msg.setDestinationEntity(89U);
    msg.op = 56U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZOCGOZOSGUQODYLRJUVUMKWOKHXGWQGMQPNLDPEARRQHBVYZEPEDHEREVRBIQOSGIMMXJKGLURBNIDPBUPSXECAKCPBEOMEPWLTZXATHKQOHHXJTTTYHCWVUYYXDZVLJHWSVCIZRAUFXFJDUPNAJKVNTFKGOYNBWLFKDLCGSSVWQJUPQ");
    tmp_msg_0.lat = 0.529261053204;
    tmp_msg_0.lon = 0.80248807744;
    tmp_msg_0.z = 0.397407049579;
    tmp_msg_0.z_units = 206U;
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
    msg.setTimeStamp(0.229383199892);
    msg.setSource(26148U);
    msg.setSourceEntity(226U);
    msg.setDestination(39880U);
    msg.setDestinationEntity(174U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.660981828237);
    msg.setSource(58882U);
    msg.setSourceEntity(231U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(40U);
    msg.value = 0.1023472385;
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
    msg.setTimeStamp(0.937236274769);
    msg.setSource(52806U);
    msg.setSourceEntity(54U);
    msg.setDestination(5842U);
    msg.setDestinationEntity(104U);
    msg.value = 0.284730545221;
    msg.type = 89U;

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
    msg.setTimeStamp(0.897708615831);
    msg.setSource(64018U);
    msg.setSourceEntity(57U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(82U);
    msg.value = 0.690120423872;
    msg.type = 17U;

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
    msg.setTimeStamp(0.439431380904);
    msg.setSource(36960U);
    msg.setSourceEntity(215U);
    msg.setDestination(51261U);
    msg.setDestinationEntity(194U);
    msg.value = 0.309375856649;

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
    msg.setTimeStamp(0.795657904264);
    msg.setSource(12116U);
    msg.setSourceEntity(150U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(246U);
    msg.value = 0.188673241278;

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
    msg.setTimeStamp(0.891371131446);
    msg.setSource(433U);
    msg.setSourceEntity(26U);
    msg.setDestination(30824U);
    msg.setDestinationEntity(38U);
    msg.value = 0.399272813147;

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
    msg.setTimeStamp(0.768453046303);
    msg.setSource(28405U);
    msg.setSourceEntity(170U);
    msg.setDestination(29973U);
    msg.setDestinationEntity(95U);
    msg.timestamp_last_service = 0.182317061392;
    msg.time_next_service = 0.0256925164432;
    msg.time_motor_next_service = 0.538104520527;
    msg.time_idle_ground = 0.61382037439;
    msg.time_idle_air = 0.492112279595;
    msg.time_idle_water = 0.527141023503;
    msg.time_idle_underwater = 0.723343866842;
    msg.time_idle_unknown = 0.528062473542;
    msg.time_motor_ground = 0.469777668167;
    msg.time_motor_air = 0.585194401593;
    msg.time_motor_water = 0.223684043762;
    msg.time_motor_underwater = 0.729781573868;
    msg.time_motor_unknown = 0.856965554515;
    msg.rpm_min = 2612;
    msg.rpm_max = 31884;
    msg.depth_max = 0.237789108297;

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
    msg.setTimeStamp(0.343777136254);
    msg.setSource(5468U);
    msg.setSourceEntity(153U);
    msg.setDestination(32803U);
    msg.setDestinationEntity(252U);
    msg.timestamp_last_service = 0.307825164746;
    msg.time_next_service = 0.238591556186;
    msg.time_motor_next_service = 0.79006613618;
    msg.time_idle_ground = 0.0666838780202;
    msg.time_idle_air = 0.572119113699;
    msg.time_idle_water = 0.433774995567;
    msg.time_idle_underwater = 0.271511710289;
    msg.time_idle_unknown = 0.632661177406;
    msg.time_motor_ground = 0.727300394678;
    msg.time_motor_air = 0.03834069662;
    msg.time_motor_water = 0.0980102267247;
    msg.time_motor_underwater = 0.369879994897;
    msg.time_motor_unknown = 0.661779495067;
    msg.rpm_min = 5709;
    msg.rpm_max = -19088;
    msg.depth_max = 0.440114422298;

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
    msg.setTimeStamp(0.0769168477078);
    msg.setSource(6344U);
    msg.setSourceEntity(208U);
    msg.setDestination(62734U);
    msg.setDestinationEntity(106U);
    msg.timestamp_last_service = 0.493377699993;
    msg.time_next_service = 0.290440056811;
    msg.time_motor_next_service = 0.5230402093;
    msg.time_idle_ground = 0.0309790036455;
    msg.time_idle_air = 0.504724089781;
    msg.time_idle_water = 0.459088779934;
    msg.time_idle_underwater = 0.0599611522758;
    msg.time_idle_unknown = 0.946183008884;
    msg.time_motor_ground = 0.547620003278;
    msg.time_motor_air = 0.524526519481;
    msg.time_motor_water = 0.388975373001;
    msg.time_motor_underwater = 0.938747138297;
    msg.time_motor_unknown = 0.992374007143;
    msg.rpm_min = 26635;
    msg.rpm_max = 32275;
    msg.depth_max = 0.979663282452;

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
    msg.setTimeStamp(0.766358205661);
    msg.setSource(28049U);
    msg.setSourceEntity(177U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(164U);
    msg.severity = 110U;
    msg.text.assign("OBASOXLFPVJYUOBRJSWQTIGKGGENWXODIUJRXHLKJLRRRUQYMXXOCZKJDUMWNMHDHQSZZEVGZIJJVQOZLVDMSSKRXEPAPXTURFCBDWAFAELQHTAVWJFEZXZQGEUIWIFVDTNYFABYYNVFTCAKIHQSOFKMPUKBTCLCXMDKLSLHHPUBWHUZTDWPNYHOEVHAMY");

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
    msg.setTimeStamp(0.828919265274);
    msg.setSource(63242U);
    msg.setSourceEntity(187U);
    msg.setDestination(21288U);
    msg.setDestinationEntity(169U);
    msg.severity = 238U;
    msg.text.assign("WBIHMDFSPRWKAHSJPTBJFZMOKKLXSLIEVXMUWYWPRGBJNAWINAABNIKNIJSPWHTUXPGMPPMEZANWZQBLQMHAONGVCLJABVVRTLPUHNIDSJND");

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
    msg.setTimeStamp(0.751893330079);
    msg.setSource(63717U);
    msg.setSourceEntity(72U);
    msg.setDestination(21041U);
    msg.setDestinationEntity(1U);
    msg.severity = 20U;
    msg.text.assign("VJGXLKRLZUADVCQSNBNY");

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
    msg.setTimeStamp(0.14155365896);
    msg.setSource(54478U);
    msg.setSourceEntity(95U);
    msg.setDestination(11809U);
    msg.setDestinationEntity(35U);
    msg.channel = 112;
    msg.value = -284915178;
    msg.gain = 210U;

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
    msg.setTimeStamp(0.468995182211);
    msg.setSource(12320U);
    msg.setSourceEntity(1U);
    msg.setDestination(17475U);
    msg.setDestinationEntity(45U);
    msg.channel = 82;
    msg.value = -1052560195;
    msg.gain = 15U;

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
    msg.setTimeStamp(0.864149440401);
    msg.setSource(64926U);
    msg.setSourceEntity(120U);
    msg.setDestination(30088U);
    msg.setDestinationEntity(129U);
    msg.channel = 66;
    msg.value = 2088253702;
    msg.gain = 37U;

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

  return test.getReturnValue();
}
