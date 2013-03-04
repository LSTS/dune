//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
    msg.setTimeStamp(0.998508348725);
    msg.setSource(61753U);
    msg.setSourceEntity(184U);
    msg.setDestination(49335U);
    msg.setDestinationEntity(88U);
    msg.state = 91U;
    msg.flags = 219U;
    msg.description.assign("JGZHJCHWAHJVENZVQVRMZSNAYIYSEHXTGWZTDK");

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
    msg.setTimeStamp(0.50721473826);
    msg.setSource(48396U);
    msg.setSourceEntity(74U);
    msg.setDestination(47053U);
    msg.setDestinationEntity(168U);
    msg.state = 80U;
    msg.flags = 176U;
    msg.description.assign("DJZMHWZGQKCYKSDYKJXARUNOLVNJVFHHQPKFRJFGYSZEWZTATKTBSOGHMASBGRUNYUTIJUQMCRTFLTFRCZUKSRIUGPBAOQSCYHLECMZNMPWOONAUMCSRKHZWIFCIHIEYRNPAHBJUD");

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
    msg.setTimeStamp(0.209611403143);
    msg.setSource(3877U);
    msg.setSourceEntity(102U);
    msg.setDestination(27335U);
    msg.setDestinationEntity(224U);
    msg.state = 228U;
    msg.flags = 220U;
    msg.description.assign("EWTWNICVNBLLETITKWOZNPOXEMWONDRIJSZFJVEYBVSNKQUALNDTTTSEZHNVAIITRWDXMEAPMBGGSGPEEAQZBMQJOHYGIPODBRFTXYHSRZCMJHQYWFLYAIFXHBILPOQYIKJCTKOBJCDEGAWFHOZFFSUPFSJOCWYCDHURBKGGCNAFMJ");

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
    msg.setTimeStamp(0.596451090337);
    msg.setSource(21627U);
    msg.setSourceEntity(14U);
    msg.setDestination(14695U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.542092596566);
    msg.setSource(30932U);
    msg.setSourceEntity(63U);
    msg.setDestination(26845U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.0612305998188);
    msg.setSource(39865U);
    msg.setSourceEntity(29U);
    msg.setDestination(11490U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.597824891487);
    msg.setSource(59110U);
    msg.setSourceEntity(185U);
    msg.setDestination(65349U);
    msg.setDestinationEntity(248U);
    msg.id = 26U;
    msg.label.assign("WZHBTPMSEWKTETYCORSDXJCNTVDAHDJXRIZJNNQGCLZYWRAOOXSPLFDVZMJQEEQB");
    msg.component.assign("RFPHNIATUPSGLCTVAKJPSGIXUBLFJURKXKQGQLWQQLEOSFWJYKHYKBWHACJMLOPFXQJFBEFVVJJDAIZL");

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
    msg.setTimeStamp(0.325611654176);
    msg.setSource(35553U);
    msg.setSourceEntity(136U);
    msg.setDestination(60809U);
    msg.setDestinationEntity(91U);
    msg.id = 43U;
    msg.label.assign("YZUIBOWQPOSREXHOTKYVULGDWZNXQXRGWLITDRUPMVSDWFHEIIOSDGEKPKRNRCQJZUVXQZMJQOFY");
    msg.component.assign("PCSQCGHAHADMOLSIXHGPCSOPHQHXNSNWVNLNXGVOIPOAJJVQLEZOWCYKRSYEIFBJKYPWLZGFKPBTVIJHBXFOCTXEMITZQKSRUAYOIFYDWBZFGLNEUVCAPLFJSKMRTDZSIQJWRWJVUQSVIPN");

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
    msg.setTimeStamp(0.616651029703);
    msg.setSource(50341U);
    msg.setSourceEntity(214U);
    msg.setDestination(43239U);
    msg.setDestinationEntity(103U);
    msg.id = 8U;
    msg.label.assign("LXFQTDNKOGFFYYWCZKJLBIPAMCYWEBAXEYVIBZCBDUVCAMDOTPVWQKJASPAVEKVQNLFKIDPGBLQSPMVBFROJXQDXQFHUTXPRLUADMNCFVCMWTCGBROSNCISKGJTQGSSXUAXHTZZFSAONBKEIUOHCTUGZDOGMZMQETNYPII");
    msg.component.assign("VRKAOJZMHDDSUMXLIMKBFUUXMNWOUENXBUOXGMGNPWYGOFETBKSQWTDIQMBQBVZJFYTVJERRLDPQCSAWTAREJIIVGYWYNZPCUNPPTEICKULYSXRTKJZJOQHBGTYNDALBVOTGKQHFBUWRFPHJLCCZTCI");

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
    msg.setTimeStamp(0.81098272204);
    msg.setSource(51185U);
    msg.setSourceEntity(67U);
    msg.setDestination(15130U);
    msg.setDestinationEntity(82U);
    msg.id = 32U;

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
    msg.setTimeStamp(0.046148623176);
    msg.setSource(6242U);
    msg.setSourceEntity(95U);
    msg.setDestination(37428U);
    msg.setDestinationEntity(93U);
    msg.id = 12U;

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
    msg.setTimeStamp(0.920296373134);
    msg.setSource(6299U);
    msg.setSourceEntity(152U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(16U);
    msg.id = 29U;

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
    msg.setTimeStamp(0.535448681286);
    msg.setSource(28808U);
    msg.setSourceEntity(125U);
    msg.setDestination(25124U);
    msg.setDestinationEntity(218U);
    msg.op = 126U;
    msg.list.assign("DTHRNJJRMPCIDZYQXXYITTNNJUOJGRUVUTWUAQBEYSSVFIAHXFDTHONVZBVCBLWWWEYHIAEDSKKLSKIXULCRNZOZJBKFZXMYGBAXHGSMLOESFEXCXBCMTJIKWCEAQVZKETCDKUHV");

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
    msg.setTimeStamp(0.0516403191961);
    msg.setSource(13122U);
    msg.setSourceEntity(18U);
    msg.setDestination(3620U);
    msg.setDestinationEntity(244U);
    msg.op = 169U;
    msg.list.assign("VWAXMJSFPYLZFOFFRAENAFMKLSRHNBEAASBDJNIUBIDDDWTHDVXDWOGREQKTWIVHEDGETJILTQPCWXPPXYKQTCXNSSLDJFCXBZYCNEMOYOAEYDLGZLVKHUISRCMUIUHIQIWZMSWWVBGEE");

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
    msg.setTimeStamp(0.121283940679);
    msg.setSource(29964U);
    msg.setSourceEntity(13U);
    msg.setDestination(35571U);
    msg.setDestinationEntity(205U);
    msg.op = 224U;
    msg.list.assign("POZCQZOBNURYJSRWKRLPVTCBTMPGYGGIGPMECKYTOOBWKWAKJACWAWVSVAEQBXYEAXNHMBJSOJEAJFIXTHNNVWZVKMSUOLVHCELQEDKPIUMYMFIBJPQIFMVHCCMNQDZPEZZUGDATABFFFNQIJZCRVER");

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
    msg.setTimeStamp(0.245924630752);
    msg.setSource(37872U);
    msg.setSourceEntity(111U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(196U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.23922183498);
    msg.setSource(29700U);
    msg.setSourceEntity(71U);
    msg.setDestination(9355U);
    msg.setDestinationEntity(172U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.052857802495);
    msg.setSource(1081U);
    msg.setSourceEntity(159U);
    msg.setDestination(15182U);
    msg.setDestinationEntity(2U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.427578031102);
    msg.setSource(30728U);
    msg.setSourceEntity(247U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(19U);
    msg.value = 138U;

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
    msg.setTimeStamp(0.0745456483461);
    msg.setSource(58893U);
    msg.setSourceEntity(182U);
    msg.setDestination(1192U);
    msg.setDestinationEntity(220U);
    msg.value = 231U;

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
    msg.setTimeStamp(0.965240159163);
    msg.setSource(62429U);
    msg.setSourceEntity(68U);
    msg.setDestination(50917U);
    msg.setDestinationEntity(198U);
    msg.value = 236U;

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
    msg.setTimeStamp(0.959794547319);
    msg.setSource(30148U);
    msg.setSourceEntity(247U);
    msg.setDestination(26006U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("UEVZRAGTUWQSBTHHXTSSZUPDAWWIJAQBRDGDMCNJHEVJPHEFWOJDEGAYAMIYZQZMQUCMOZNGVKNJSERKCIPOVMVLKGBTSSNZ");
    msg.message_id = 35613U;

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
    msg.setTimeStamp(0.326450217939);
    msg.setSource(34167U);
    msg.setSourceEntity(219U);
    msg.setDestination(36967U);
    msg.setDestinationEntity(179U);
    msg.consumer.assign("WKXEPPFPRKQRPXJYJCYWXJMGSEHFYCAOEVZHVJCHBGDSQKKTMJAGYKYVCDUSPJKR");
    msg.message_id = 16338U;

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
    msg.setTimeStamp(0.721448932195);
    msg.setSource(51279U);
    msg.setSourceEntity(9U);
    msg.setDestination(50104U);
    msg.setDestinationEntity(170U);
    msg.consumer.assign("NZTJSULSMUEXCKNQIEOFLHBUXVOTZVHGVWFGADAKKIDPPJRQBAFEYVEXFRJQKRWYPTOAETFZTHBQKOLHNJQPMQULDCCZLZFWZUPNITTAYBLDEXGZPMWIMPWXXRJZSGNUWKJSPYWGMKN");
    msg.message_id = 35827U;

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
    msg.setTimeStamp(0.483045979128);
    msg.setSource(39399U);
    msg.setSourceEntity(190U);
    msg.setDestination(53U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.418457753502);
    msg.setSource(7865U);
    msg.setSourceEntity(227U);
    msg.setDestination(36920U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.294030922218);
    msg.setSource(11222U);
    msg.setSourceEntity(178U);
    msg.setDestination(47515U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.115274826679);
    msg.setSource(26736U);
    msg.setSourceEntity(176U);
    msg.setDestination(41285U);
    msg.setDestinationEntity(49U);
    msg.section.assign("JMXUIZWVJXNHYUCHRVMIPMAOUKPCYLHCLSAYDTRAXGVPYPDGWMBWVNDRYYCJFDDYOXALHHLRGLGSLVHQJTTCKBEUOALSHCBFEEEHZBUTI");
    msg.param.assign("TLPPMUZONELLRQVVNFYJUUXOVFVYHSGAWORQDSYOOLZKXSPUPGNEQHTHSZCIY");
    msg.value.assign("EOUGPSBZROFXDEXYLNZSSMVYVZGJDDDKDCFSRWSMPKHEUGHYKLVKAFGQB");

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
    msg.setTimeStamp(0.422249169095);
    msg.setSource(5736U);
    msg.setSourceEntity(63U);
    msg.setDestination(39516U);
    msg.setDestinationEntity(157U);
    msg.section.assign("FVUQMNGYEXPFLHVCLAWIRIQMEONSCATWKVPDZUXASJFNQLTGAJRYKPZZGUEKLLFEKGPQBDVXSADSBWUBBHRICSWRSDNUPZQBLZLKNHSYFJWFZRPUONGPQDDADVYHHFRMMPGDRHSJACWRCGQVAWEVOOJYNAIOQTQPMOYLXXGQBWCTUORTFVWCEZZDYKKZMUWMFNCULXTOJBITMZIGOKMIRPBVHJATXEI");
    msg.param.assign("PTGZWQOWWBFAWKDPEBWGJILAYBKCHSUJSSIYENRGHPQTQEXHBBFXSPIMQIBYECDSRLTSMVMTOQOJYGSCVNXQCVUJUOAXBJWCGYAFPIULXYCPVFJZBRAGTWLRYQGDRSKVCDVMFKGYIZXUSCMNAKFICYOXKBOKEU");
    msg.value.assign("WUDNLJNCEARZMHFTSJAOPY");

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
    msg.setTimeStamp(0.0657562633863);
    msg.setSource(39079U);
    msg.setSourceEntity(155U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(72U);
    msg.section.assign("PNLXFDYVZPXPYMDBDMLSUTGBGZWTLXCYENMOPLSPDGAHFMVJXBJWCE");
    msg.param.assign("ODJIZGLYMKZXUOIABUWTUGMSERPPZJAPWMCGCWKSJUXAHEPOVONNOKWDEQZRABTBTLPWBTAFGIPYDPZAEZHFTYXCQHFAJTH");
    msg.value.assign("GAPFRXFWRZYFQNSOFHLYUGYEB");

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
    msg.setTimeStamp(0.79211377726);
    msg.setSource(54971U);
    msg.setSourceEntity(66U);
    msg.setDestination(13127U);
    msg.setDestinationEntity(225U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.724228842695);
    msg.setSource(49463U);
    msg.setSourceEntity(242U);
    msg.setDestination(6199U);
    msg.setDestinationEntity(133U);
    msg.op = 205U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QVEUILAZFEIGRNDLXVRBVMHYWKPEAFSFMPFBCOTRXEOFQSOXHYKAZLPTAUERDLPTFFMJCCDZAQYGZMTORRNRWJXNJVGRUGSBHBHKWQFWXCYMDLGWKKNVYDXPFZJWPCMJDSJTLUSTVHQKYIVXNOCHWLFECAAKGWNMXIPBYLUEZHZPXS");
    tmp_msg_0.param.assign("RLTTVEYKTCDTZMJRRKPUZXSMPDULEKVNJEEXAFGIDCIWOAECIKHRUZEFNXTTFIBJDYISYJIYNJZHZCPNBBIWQQWGNSKYNXXGHUQDDMDHPPTTWPQMKOHUSABDOWYBHJMXSUAGJLHSLVGVNGVKTRGZQEBKRZQNOEQFBXMWMFGSBMLOORCHCVAZEAVJFOGLCFQVYVHZ");
    tmp_msg_0.value.assign("WBCWESOWIFJPGAQMWBRGHJDUVKLQRDTEKINSMPGAICOMWMCYMJFJOICUFVKBZXNDDXQPIERULSPJJQEUCQRLGDNUIEZJAVXVXXZURLCDLUSHMRKAMIOBTLPQHKCZIVKWZTFWPBLOMWUIZB");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.624350234434);
    msg.setSource(26576U);
    msg.setSourceEntity(123U);
    msg.setDestination(35281U);
    msg.setDestinationEntity(124U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.545578509077);
    msg.setSource(63887U);
    msg.setSourceEntity(35U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(248U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.751513975958);
    msg.setSource(51553U);
    msg.setSourceEntity(196U);
    msg.setDestination(5793U);
    msg.setDestinationEntity(189U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.190999827222);
    msg.setSource(10076U);
    msg.setSourceEntity(163U);
    msg.setDestination(61487U);
    msg.setDestinationEntity(180U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.00873508388564);
    msg.setSource(33606U);
    msg.setSourceEntity(166U);
    msg.setDestination(10962U);
    msg.setDestinationEntity(161U);
    msg.total_steps = 118U;
    msg.step_number = 88U;
    msg.step.assign("APSHCKHEPTEKAFPKTYMQNPCRRUJTNWKQOUYEHVDXZJURNVTAFSCWMBBHGEXYMJYURDVAYNMKRWOVEQILTXDFUZBYBDUGEWBZHNSLQSQZJBVOPGFOIRPFANIMIXFJGITLXQRKCBJHZNAMSXSHQGWZJDDVNMRLXXGKJIBBSWHPWCIEWTCQPOQYLTUDPA");
    msg.flags = 176U;

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
    msg.setTimeStamp(0.403591836006);
    msg.setSource(7618U);
    msg.setSourceEntity(206U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(160U);
    msg.total_steps = 31U;
    msg.step_number = 130U;
    msg.step.assign("EZGBGDMHAAJITTUBBIIWOMKZINLBCVPLZKEBQLMWHDFANQYOYHMYVSWXIXAGNOMFESHKGOTLLKIPJLNBBMMENUPKFZDMXWVRCZYWYYENRFQGRQODUEQCHFDSGSFOAFAWKTHJKPYGXVIVETPQSVPNCCTTPFOSGUBSZYAWHRRNCCQRK");
    msg.flags = 177U;

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
    msg.setTimeStamp(0.811643522858);
    msg.setSource(16560U);
    msg.setSourceEntity(101U);
    msg.setDestination(2169U);
    msg.setDestinationEntity(96U);
    msg.total_steps = 238U;
    msg.step_number = 168U;
    msg.step.assign("UBROFVUGVBQEADCWKASNDKAEUHLPJFIX");
    msg.flags = 167U;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.419990461824);
    msg.setSource(37619U);
    msg.setSourceEntity(135U);
    msg.setDestination(19814U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.830262867889;
    msg.lon = 0.670324047379;
    msg.height = 0.343556993296;
    msg.x = 0.0864296311974;
    msg.y = 0.759930269395;
    msg.z = 0.548520747819;
    msg.phi = 0.0266870517821;
    msg.theta = 0.884552518951;
    msg.psi = 0.835060253379;
    msg.u = 0.0793393533393;
    msg.v = 0.950148576184;
    msg.w = 0.508034713147;
    msg.p = 0.154804801256;
    msg.q = 0.458520856105;
    msg.r = 0.482392371983;
    msg.svx = 0.0497421452424;
    msg.svy = 0.676588850563;
    msg.svz = 0.400598655574;

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
    msg.setTimeStamp(0.564181161298);
    msg.setSource(54758U);
    msg.setSourceEntity(85U);
    msg.setDestination(49250U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.219355604508;
    msg.lon = 0.877032611266;
    msg.height = 0.0708634447429;
    msg.x = 0.28221133365;
    msg.y = 0.172476573829;
    msg.z = 0.986752892672;
    msg.phi = 0.451950163696;
    msg.theta = 0.047304083047;
    msg.psi = 0.762266905404;
    msg.u = 0.705224325223;
    msg.v = 0.110278095817;
    msg.w = 0.464493447129;
    msg.p = 0.479696142043;
    msg.q = 0.0615557436753;
    msg.r = 0.0765575340218;
    msg.svx = 0.0296416958453;
    msg.svy = 0.820179309975;
    msg.svz = 0.59961088271;

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
    msg.setTimeStamp(0.827919248323);
    msg.setSource(51130U);
    msg.setSourceEntity(98U);
    msg.setDestination(28760U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.0383194159554;
    msg.lon = 0.76027736207;
    msg.height = 0.324376626575;
    msg.x = 0.0990486568912;
    msg.y = 0.518617010023;
    msg.z = 0.262080154534;
    msg.phi = 0.610486647788;
    msg.theta = 0.198398023072;
    msg.psi = 0.703008535399;
    msg.u = 0.82893791385;
    msg.v = 0.407327731061;
    msg.w = 0.566681277377;
    msg.p = 0.540916848214;
    msg.q = 0.567903878177;
    msg.r = 0.488666385654;
    msg.svx = 0.00588710652756;
    msg.svy = 0.221600472331;
    msg.svz = 0.295628009576;

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
    msg.setTimeStamp(0.317998150535);
    msg.setSource(27624U);
    msg.setSourceEntity(43U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(102U);
    msg.op = 223U;
    msg.entities.assign("NSNDOXRJVWKHJHDOYZGPYQXFEUSSXPQYDNOCTTVIEYNTGPISKCEIFPCWCUBMKFELOICABAGVWAXEYBYIOZNINDZENCQJFPW");

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
    msg.setTimeStamp(0.890794417459);
    msg.setSource(3664U);
    msg.setSourceEntity(5U);
    msg.setDestination(34239U);
    msg.setDestinationEntity(16U);
    msg.op = 181U;
    msg.entities.assign("PTOSSGXWKVFLSGERHNQGPIAHOMJFJFOEJCBLYMRHAKRXDUGTJQBCCAUCWIARLRMXVSZOWUSJMZTJFEYQHLE");

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
    msg.setTimeStamp(0.765348438666);
    msg.setSource(4213U);
    msg.setSourceEntity(6U);
    msg.setDestination(33647U);
    msg.setDestinationEntity(44U);
    msg.op = 5U;
    msg.entities.assign("JSNMMPVIXTLWGNJHJYBFXCQDOZQURJOAFMKDHEYMDCSBIMGZBUZBEXMDNFZOHATNTVFIYPBGLLSQKFOLXRTKHWUZGNMPPEFEVBGPVUHTXEUMPXWOCRQSOANVLWVPJMOFZJYCHLASKQKIZLECYQRUKDW");

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
    msg.setTimeStamp(0.339777563716);
    msg.setSource(21615U);
    msg.setSourceEntity(157U);
    msg.setDestination(28591U);
    msg.setDestinationEntity(117U);
    msg.type = 44U;
    msg.speed = 58795U;
    const char tmp_msg_0[] = {29, -119, 119, -60, 114, 84, -64, 1, 32, -126, -88, 100, 8, -114, -121, 116, 107, -15, -29, -32, -98, -20, -49, -86, 103, -109, 23, 39, -22, -97, -4, 88, 20, -60, -78, 13, -110, -18, -55, -35, -82, -115, -74, 109, 123, -26, -22, 76, 52, 5, -40, 15, 31, 70, -43, 27, 3, -111, 99, -124, -90, -11, -28, 66, -35, -52, 64, -105, -51, 44, -26, 10, -65, 15, 44, 68, 89, 90, 104, 106, -52, -54, 7, -114, 43, 115, 15, 99, -25, 14, -47, 13, -28, 39, -58, 94, 13, 76, 41, 14, 121, 106, -43, -18, -123, 67, 6, -63, -9, 84, -80, -22, -49, 62, -65, -126, 32, -104, 77, -88, 15, -32, 37, -21, 57, 118, 9, -22, -98, 69, 119, 70, 36, 30, -82, 7, -31, -99, 12, -58, -102, 93, 73, 12, 41, -74, 101, 76, 114, 114, 28, -82, 122, -127, 126, 11, 97, 125, -43, 52, -83, -125, -70, -24, -66, 126, -83, -34, -101, 25, 30, -98, 118, -8, -105, -16, -70, 118, 46, -23, 33, 36, -46, -67, -73, -41, 96, -101, -46};
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
    msg.setTimeStamp(0.160556154397);
    msg.setSource(51836U);
    msg.setSourceEntity(216U);
    msg.setDestination(52916U);
    msg.setDestinationEntity(133U);
    msg.type = 249U;
    msg.speed = 47261U;
    const char tmp_msg_0[] = {89, 126, 59, -31, -100, 68, 105, -116, 32, 83, -113, 37, -107, 51, 23, -27, 73, 88, 96, 121, 121, -82, 80, -14, -7, 93, -94, -73, -19, 123, -36, 93, 106, -69, -117, -49, 51, -67, -53, -111, 109, 37, 66, -118, 89, 25, 41, -117, -50, -50, 51, 51, 62, 112, 75, 80, 55, 46, -16, -63, -108, 57, -109, 21, -125, -60, -43, 81, -105, 61, -74, -112, 57, 30, -103, 84, -39, 62, 71, -25, -9, 97, 25, -78, -112, -25, 116, -38, 122, 99, 67, 123, -86, -53, -8, -67, -32, -77, 26, 9, -14, -115, -102, -13, 7, 63, -6, 82, -30, 120, -66, -86, -95, 67, -87, 54, -56, 85, 30, -85, 44, -77, -33, -14, -39, 102, 96, -3, 80, 25, -118, -83, -102, 99, 122, -3, 100, -101, 113, -52, -16, 116, -58, -100, -8, 55, -62, -26, 4, -98, 116, 19, 86, -58, 69, 46, 92};
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
    msg.setTimeStamp(0.553301053517);
    msg.setSource(8991U);
    msg.setSourceEntity(218U);
    msg.setDestination(60682U);
    msg.setDestinationEntity(133U);
    msg.type = 143U;
    msg.speed = 33846U;
    const char tmp_msg_0[] = {-53, 33, -35, -124, -60, -10, 42, -50, -128, 17, 22, -52, 72, 114, -99, 30, -101, -18, -15, -116, -112, 52, 117, -46, -89, 89, -20, -50, -127, -74, 120, -109, -73, 14, 76, 74, 44, -66, 27, 120, 80, -78, -35, -113, -22, 30, 76, -99, -87, 98, 31, -101, 25, -89, -71, -123, 55, 2, -28, -9, 16, -107, 7, 77, 35, 66, 116, -1, 81, -34, -82, -56, -78, 8, -49, -97, -110, -53, -82, -50, 30, -43, -44, 71, 100, 84, -71, 41, 75, 89, 98, 28, -89, -67, 6, -81, 87, 48, 93, -91, 4, -102, -31, -71, 27, -96, 19, -67, 92, -97, 100, 21, -43, 22, 62, -110, -95, 43, -123, -116, 43, -108, 65, -36, 60, -65, 8, 126, -42, -43, -55, 34, -5, -10, 31, 115, 19, -52, 120, -58, 84, -1, 64, 38, -104, 26, 0, 65, 21, 7, -114, -30, -96, -32, 52, 64, 37, 58, 114, 31, 120, 82, -15, 2, -21, -106, 80, -41, 37, -125, -95, 92, 79, -126, 125, 66, 104, -123, 74, -95, 47, -14, 62, -125, 21, 46, -3, 70, 87, -49, -102, -79, 109, -57, -64, 70, -60, 7, 74, 121, 62, -15, 60, 3, -54, -41, 97, 50, 99, -75, 88, 2, -4, 63, 37, 65, -73};
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
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.559130955079);
    msg.setSource(31717U);
    msg.setSourceEntity(177U);
    msg.setDestination(53519U);
    msg.setDestinationEntity(213U);
    msg.available = 3368451500U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.828650161152);
    msg.setSource(37227U);
    msg.setSourceEntity(157U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(166U);
    msg.available = 2782874225U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.701771724512);
    msg.setSource(43461U);
    msg.setSourceEntity(28U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(182U);
    msg.available = 3695582485U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.776424789936);
    msg.setSource(53035U);
    msg.setSourceEntity(254U);
    msg.setDestination(63445U);
    msg.setDestinationEntity(122U);
    msg.op = 173U;
    msg.snapshot.assign("JNBOOLBHXJCWEDSIQIMLQRHJZUZNOWIBQKBJSXGOXVFPWIAGJLIGGFTLWZNTXGXHUSKHJSESUVNRYLWTQHQALFUVQOYNSTBVKTNGGRASMMLTCRHVQFCRZCMFXUQEYXPOWATMEHTRVHGIAPDPWHXLOBYKZSCRJJERPEYDPYQKDXIBWOVMGZHUYEV");
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 66U;
    tmp_msg_0.level = 162U;
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
    msg.setTimeStamp(0.263218342672);
    msg.setSource(61246U);
    msg.setSourceEntity(160U);
    msg.setDestination(29798U);
    msg.setDestinationEntity(187U);
    msg.op = 165U;
    msg.snapshot.assign("YVAPKQTIVGMFUQDCYSYRCRZBFYHQKDTREGVUDOBLLZLIJHIIIDFGTEGYNSVBMLAUPIABJPNEFLGVFUQVZWFTUOVMDLJDTNYRIHQXBPXNKLUPUATCSAYZHRRBKLBPHMGFXXKECOQJDWWJMMCQWZEBTWVIJSSAANGLCZSOTKWXZTQWNWZYEWBNYOCCOEUXPJFFXHJSBHIGDSJQZCRPXESHNMKOKNMKRJERH");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 59U;
    tmp_msg_0.time_remain = 0.0489487864649;
    tmp_msg_0.sched_time = 0.485636842646;
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
    msg.setTimeStamp(0.284525500531);
    msg.setSource(19850U);
    msg.setSourceEntity(219U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(10U);
    msg.op = 80U;
    msg.snapshot.assign("CFCIHVLAONLLGIWAODKWNRBHSGUBTKSAXEJVIWGUGANHWFVQVLKZNKZJBZXUAXEIRAXRZBTYFUXVEMWXHEQBQKYUOXVSNLSCUDQKYSGZJJGOBQTNTOGIGPMWBSMDSZFWVTPBAHEISUDFQQJNEPPIXKUCVGHDCLQDRHGZNFJMKIPUECOXWNJRSDEBWAZQYLYT");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.765076996766;
    tmp_msg_0.confidence = 0.964161594658;
    tmp_msg_0.opmodes.assign("EGEZWCETHMWYGFSNSUWWLECFFSWQZBCHPKGDWKIKHUFHNTZFXPOMBBVSTRAXRZGNSCPBUKTQNAWIMOUNNFETUQBDXVVQVRLOPSIDBDGHLURYEUIOLZNUPGLYARAICJOVHBGYTSYLPYDLHLXMPJAFQYOEJXVMCJPKJP");
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
    msg.setTimeStamp(0.72210106486);
    msg.setSource(35361U);
    msg.setSourceEntity(142U);
    msg.setDestination(50386U);
    msg.setDestinationEntity(182U);
    msg.op = 233U;
    msg.name.assign("GIKXJMNHGEGWGPGPVGOJUDIZDHRNOYKOTHNAIMVPQJXXVUNRPUELBAIFDJUHEUOPQIAZNFBEYYTJCCSBBXUKQVCQLLMYSQDZBHJKTUFCLCFZTKWKXFPWIIXBAIJNQRPZZRTODXSRDQJZEOFFWXVKDGRSWTBKWKNZTNJHWUYTYXIHWCPIPRAMLRLAUYPYXGUFOBMYVKEDSVZCCMBAQNMWSSDMEHSESEYQHEORVW");

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
    msg.setTimeStamp(0.0676013734522);
    msg.setSource(24115U);
    msg.setSourceEntity(49U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(110U);
    msg.op = 247U;
    msg.name.assign("SOZMCAVUHXRQCSGLRXWGWBLCKMAJXUEDVAATTHY");

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
    msg.setTimeStamp(0.752473959663);
    msg.setSource(37048U);
    msg.setSourceEntity(16U);
    msg.setDestination(14705U);
    msg.setDestinationEntity(135U);
    msg.op = 56U;
    msg.name.assign("TFTZXDKVWAKPOQYJFMDFABEXLMAJDJZDSELZZKKOOPVUYOIUTHLIYSJCJZESUXXWWJYGEOMRROAVLWCIMCPAEVEBPFNEFDHXGEPWBQNTUIDHKIGISYMTSIBJXUTZSBGQWXUCLRHNHNCDLFOBWJMAEPCVRYSCTRBVNWMEQO");

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
    msg.setTimeStamp(0.666437461078);
    msg.setSource(8591U);
    msg.setSourceEntity(36U);
    msg.setDestination(43186U);
    msg.setDestinationEntity(49U);
    msg.type = 115U;
    msg.htime = 0.751683365433;
    msg.context.assign("YCXWYATFSWDHNYWMTZIZMTUTGUHXIXEVEMJITAKYEBINKHOUVLXFGJMBIQUFCNZLANSQLKBXBSRNKJJQKFLRICRSFIIJHSSGQVOFALOPFMZCCMLWTEUHWPYUDRBOODWXLZDEZYVRPKXFYMPOLDBPLEUBEPJJQGGZNGQTVERXRFGKZYVUUOXCSKMRPHKVAPCDKAGTHVHLYNGTMSOPQWAXFBIHJZNAYOWCRASNHQE");
    msg.text.assign("RDTSURKJGTKWTKDVARWMVEUQKRVSYTZHWSHZDMRCEQVJXDBNOWJHIBASEBZIDKXYEAYBFPMYGFAJRVUS");

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
    msg.setTimeStamp(0.959041599145);
    msg.setSource(21864U);
    msg.setSourceEntity(77U);
    msg.setDestination(12882U);
    msg.setDestinationEntity(252U);
    msg.type = 180U;
    msg.htime = 0.544534079841;
    msg.context.assign("OGZBLMWOTUVYJKPAZCUZSVYCFZCKBEJPRYTTQMWUPOKWKSZBOFROMTQLIJUWEWNKNBGQJWTFPLUFHPVGIJZITHUQMVNYUXWHBMQLWMFXADLKAHNSCPTHLBEGSTSFNRGKNGIEXRJBSLFGREMAIZCRZQDOSHNJPUXAZXXEMQJCVCEBPBDQWDAGIZDGVVMKSQXVIVDPJXRNJAAHPSDHRDUEYGOFRYYC");
    msg.text.assign("HQQKZIMPICEOKYWVNRSZRBYATOSBWFFSDPYNAHHNZYVKSRRTIWERVDOEUUZLCAXFFLBJAYZIBEHHEGDIWDETRAKVLFWNUHVYWXWFQGIVDKZQBLCQNJUZAAOGRETDJXDTDOSCJFPTMLTUHXSMLUJYYXJVSPCBGUZTSMHNDCPOQSKWMIPDIFVXXLPJBAKMLPTGXCFPLJVFBUCHNOQQRKQARZOMEGPAJCXVNBWYCTWMSJGXUHMRIEB");

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
    msg.setTimeStamp(0.254325414834);
    msg.setSource(7176U);
    msg.setSourceEntity(208U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(103U);
    msg.type = 77U;
    msg.htime = 0.0208428306588;
    msg.context.assign("GUPZPHFNILLJEZPXOBXSBSRCUTRNKAKKIVFRIRMFCTWWIGPJUZERIZSOWMOXKVDUNCHWELEGZNPBRARQTLLTCKODFGMUBQTCKNNDTRAYFDXMHYEZXWDQEHTSUWWGZYLBJSBTAQBLHJVHOVMSOGTGPYQVPHJSMEUHYFJYSOKIOWAZTLBDZXYXOPCQMUMQYGJAGNWEDKOMIEYNDPURUQAPCQXAJLBHJVBLKDXHAISYZARIWEXSJCFFNKMCVDQ");
    msg.text.assign("DIBEQXGQGNNENJYIQSQYIOOWBZVMXFRXPYJPDJZRSFKQAYIUPOPKYGURMZOVGNAUSLCLIGKKCSMCQKEFMLBDUCHJTPLWYMIFMXUOLLWHUTHGDYBUOXFVCCFHXHEYSPJJLQAHNEBTLADXITIBMVZJGYCVLVHGUXBHKWWPAVDURGJPEKATBVORQDTDNTWD");

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
    msg.setTimeStamp(0.961704439078);
    msg.setSource(60538U);
    msg.setSourceEntity(28U);
    msg.setDestination(16572U);
    msg.setDestinationEntity(75U);
    msg.command = 193U;
    msg.htime = 0.921292597122;

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
    msg.setTimeStamp(0.561588279268);
    msg.setSource(22143U);
    msg.setSourceEntity(194U);
    msg.setDestination(12884U);
    msg.setDestinationEntity(220U);
    msg.command = 82U;
    msg.htime = 0.170073641033;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 20U;
    tmp_msg_0.htime = 0.119489659935;
    tmp_msg_0.context.assign("HSZPOFIBFIYVBCKKQSNYYOVFAGTMIPCUOVFUJIHQLMKNIYWTZYSVKPTKQLRRAHTSKGGNKJGWVJFKZRQHLNYOJYCKWCDDDLAFWAMCPNHOBEU");
    tmp_msg_0.text.assign("BOYKBYSCOAHPLGMWLKKDQTWXECFGJNPGTDNGNEOXBJJVSGSMLECZBJABUAGQFZUPDCXQILVVQYFVYYHFDFOYHYLJBPTVZTSLWEJATXJDEAVQDOCPXMUNWIZUQTHMIBNSBVURVWIDLEMOHHQORCKSVW");
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
    msg.setTimeStamp(0.25562261231);
    msg.setSource(57501U);
    msg.setSourceEntity(121U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(30U);
    msg.command = 237U;
    msg.htime = 0.32501998801;

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
    msg.setTimeStamp(0.353166500337);
    msg.setSource(38114U);
    msg.setSourceEntity(92U);
    msg.setDestination(28623U);
    msg.setDestinationEntity(252U);
    msg.op = 239U;
    msg.file.assign("WVULXAHOOYRAJDNXVISVQPVHBSKORJPPGYHMSUFIPJJKIJOSPXBOKXGNDFMQCLGKTDCBKHHTIAYPEGIWLDLKWJJVHVXXSEYUTQYCMAAYMTIRODGKERMFPYPPZKUUTEWZLAENENQTFHHCLZQDDQUE");

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
    msg.setTimeStamp(0.416937143775);
    msg.setSource(6815U);
    msg.setSourceEntity(69U);
    msg.setDestination(42925U);
    msg.setDestinationEntity(207U);
    msg.op = 124U;
    msg.file.assign("OTJCOYAAIMQIQWSYCDLYZZBZTRKQZMOTIBFFELKALLEQYDYYHREGXQLSARZAGMODFFXQNGJVMJLLAHWPJRJEILJOYJFMJUGPBDWYXIYDMKBOVRNUHIIILTABNXGFHRFVQPZNKPXUBWECBBKWTSURVXDSSSXQJNGNT");

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
    msg.setTimeStamp(0.446333132595);
    msg.setSource(28923U);
    msg.setSourceEntity(139U);
    msg.setDestination(35193U);
    msg.setDestinationEntity(165U);
    msg.op = 3U;
    msg.file.assign("YJHHQTBGHLCLSMLPCOWCOMNKIKRDALOXCOEAFTAXGJFQZXBYZDXOQSICGRJDBTPKEMHAUGSWJNTQJJBUNEUYUYVAPJSFQOFAZPHWNLZYEEECMUROOGKQVVRCBOOFNYEBURNUPALWVGFPXTUFTMJVAQWVUXVCVISZYSIQILDDIFCMPRYTCEZBFWGWEHPLBHTKDGVWQGXPRT");

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
    msg.setTimeStamp(0.092349621593);
    msg.setSource(56108U);
    msg.setSourceEntity(86U);
    msg.setDestination(31294U);
    msg.setDestinationEntity(181U);
    msg.op = 240U;
    msg.clock = 0.245846552775;
    msg.tz = 113;

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
    msg.setTimeStamp(0.0152820425694);
    msg.setSource(32064U);
    msg.setSourceEntity(106U);
    msg.setDestination(30783U);
    msg.setDestinationEntity(39U);
    msg.op = 125U;
    msg.clock = 0.492433505416;
    msg.tz = -106;

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
    msg.setTimeStamp(0.898620463573);
    msg.setSource(36511U);
    msg.setSourceEntity(80U);
    msg.setDestination(38757U);
    msg.setDestinationEntity(238U);
    msg.op = 139U;
    msg.clock = 0.791012612064;
    msg.tz = -86;

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
    msg.setTimeStamp(0.495392766047);
    msg.setSource(5602U);
    msg.setSourceEntity(43U);
    msg.setDestination(24830U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.709324605219);
    msg.setSource(37052U);
    msg.setSourceEntity(171U);
    msg.setDestination(54437U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.414247395513);
    msg.setSource(15446U);
    msg.setSourceEntity(221U);
    msg.setDestination(25570U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.802448182314);
    msg.setSource(26187U);
    msg.setSourceEntity(171U);
    msg.setDestination(31834U);
    msg.setDestinationEntity(14U);
    msg.sys_name.assign("SAYGRITDCTMZOSGUCCBZSLJLKEFDEDQYMAWIXJXLGMSNQJMVRBNIOUYLNQHHWMIRKCREETYZMWKYDTAXEFIHSYAXYLXNUWVFUQWKGGDMOPKYQYNGFPOTNWRFUHUJTOZAJJZKNEXFSUREBHPANCRXFQKWHZABXLACBJIJTADBOPHKJZNSVUSGVTIUQQLPEWGBWLBPPMFKLEBS");
    msg.sys_type = 121U;
    msg.owner = 21605U;
    msg.lat = 0.479623726316;
    msg.lon = 0.544805141593;
    msg.height = 0.754224572064;
    msg.services.assign("YCNMKILVSMUPHMDAEMBDOOYTCQTLJHPNFRMTBILSTYLQBOHZKSAZOHVVWPWUFZIKXETELBRHTKJXIAVGHHFEBWUZCFKXNBETIBHYZQMFKJEQMKPDYGZQZUBOQSANPXQIWCJRJFCAXSRRPWZGIICFXYMUYGTNPVGEOYCWTJXUENQRNLEDSJCOLOGYNFPQSRGSWFANVWSUOTMIKJXCDUNYCDFVGSGAADPXJ");

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
    msg.setTimeStamp(0.0532638617277);
    msg.setSource(32016U);
    msg.setSourceEntity(135U);
    msg.setDestination(975U);
    msg.setDestinationEntity(180U);
    msg.sys_name.assign("OJQXPGVUKQTBINEBVAQQUNFVXEITBCDDGHZGEDUVMGBGNXYGZHKENCNBTSVIOISLMWFWPGYUNRDFWIQDFDACZMZBMRJIW");
    msg.sys_type = 205U;
    msg.owner = 42245U;
    msg.lat = 0.0634239219262;
    msg.lon = 0.221591871671;
    msg.height = 0.308587725451;
    msg.services.assign("HCYNCZHWQLQMKMTHCXIGVPSPR");

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
    msg.setTimeStamp(0.816210470921);
    msg.setSource(7111U);
    msg.setSourceEntity(205U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(113U);
    msg.sys_name.assign("KMUSTRALXTCBS");
    msg.sys_type = 110U;
    msg.owner = 29062U;
    msg.lat = 0.668950047206;
    msg.lon = 0.295094969764;
    msg.height = 0.256757492676;
    msg.services.assign("NMFBRLZUWWYDBLZUJDBIANTPAOOPXRPDWEJWVUKKIARJBGHMCMJLLFBFYXGZVUYPALKHWCQQPWVCBTPRVWDOLZTTEGXZCXGOEVXSKYMFEYRAN");

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
    msg.setTimeStamp(0.697173079187);
    msg.setSource(51666U);
    msg.setSourceEntity(65U);
    msg.setDestination(45102U);
    msg.setDestinationEntity(16U);
    msg.service.assign("COZXJSQRSXPJEDUEYNTAPMQPJRDHHSWIDIMBVTLURGGFSTBODYWDZTRVSBHAFFOIVGSVZUQVSZGJQCZIOCFJFEDYANGFBXYBPAHFBVZPRZI");
    msg.service_type = 79U;

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
    msg.setTimeStamp(0.226401877107);
    msg.setSource(9209U);
    msg.setSourceEntity(165U);
    msg.setDestination(36825U);
    msg.setDestinationEntity(148U);
    msg.service.assign("SIHHRWOIXBKPHIQVSMELVWCBATCDFVANZVZDLDWJRRBXUKOCYWPGKBETSZXWSOLLKAIFMIJZMLDHQNUEDPNJMOZTCLAZQQBQQIBVJM");
    msg.service_type = 253U;

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
    msg.setTimeStamp(0.521203872691);
    msg.setSource(5451U);
    msg.setSourceEntity(95U);
    msg.setDestination(6976U);
    msg.setDestinationEntity(142U);
    msg.service.assign("LHADSOQGGAECAVJYEORLHEJYFLWJLVWXBMOBTGTSWYXIBRKVPQBDESCZPCLNKMJVNNGKDXRZVAMMJNSJNJOHLNMSCXFLQFSUZFPAZRIRODPUFIWQOOKWHAXCHTJIFZCUVNR");
    msg.service_type = 112U;

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
    msg.setTimeStamp(0.708813636201);
    msg.setSource(14119U);
    msg.setSourceEntity(174U);
    msg.setDestination(33821U);
    msg.setDestinationEntity(153U);
    msg.value = 0.16185407591;

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
    msg.setTimeStamp(0.555560504353);
    msg.setSource(51112U);
    msg.setSourceEntity(209U);
    msg.setDestination(22101U);
    msg.setDestinationEntity(52U);
    msg.value = 0.757991206715;

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
    msg.setTimeStamp(0.738853933732);
    msg.setSource(36911U);
    msg.setSourceEntity(145U);
    msg.setDestination(744U);
    msg.setDestinationEntity(133U);
    msg.value = 0.0473927178348;

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
    msg.setTimeStamp(0.982968724855);
    msg.setSource(58587U);
    msg.setSourceEntity(60U);
    msg.setDestination(52530U);
    msg.setDestinationEntity(228U);
    msg.value = 0.774493427093;

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
    msg.setTimeStamp(0.656212846307);
    msg.setSource(5955U);
    msg.setSourceEntity(105U);
    msg.setDestination(19853U);
    msg.setDestinationEntity(54U);
    msg.value = 0.434188290558;

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
    msg.setTimeStamp(0.90374775881);
    msg.setSource(505U);
    msg.setSourceEntity(215U);
    msg.setDestination(7126U);
    msg.setDestinationEntity(243U);
    msg.value = 0.275961991844;

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
    msg.setTimeStamp(0.195564606236);
    msg.setSource(55754U);
    msg.setSourceEntity(147U);
    msg.setDestination(60488U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0860987494776;

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
    msg.setTimeStamp(0.788288021484);
    msg.setSource(5694U);
    msg.setSourceEntity(11U);
    msg.setDestination(59451U);
    msg.setDestinationEntity(213U);
    msg.value = 0.712696535467;

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
    msg.setTimeStamp(0.804895009441);
    msg.setSource(32821U);
    msg.setSourceEntity(200U);
    msg.setDestination(63878U);
    msg.setDestinationEntity(62U);
    msg.value = 0.259232706395;

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
    msg.setTimeStamp(0.326493500587);
    msg.setSource(47814U);
    msg.setSourceEntity(78U);
    msg.setDestination(10312U);
    msg.setDestinationEntity(206U);
    msg.number.assign("PVAAGQURYANVSOXLCUVCJJMTYEJJWCPCIMFBX");
    msg.timeout = 7692U;
    msg.contents.assign("JSRWRTGWEDRKTPQYODSKVPJZIMWVNFYEJRSQHUGVWOGRVJDFTVCJXAUDMGJKQPQEDQZJPDTAZLPXMXMSLXAFEKWCCWFBPSBNKEBDYHCZITLPEFCRNBVDGMRACTBRXVOQKTLGLOZYCXHXXJAUYTMOOFPUFXUIRAKUNXLNT");

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
    msg.setTimeStamp(0.679792862612);
    msg.setSource(54421U);
    msg.setSourceEntity(246U);
    msg.setDestination(37504U);
    msg.setDestinationEntity(158U);
    msg.number.assign("LTYGCTFURRQMEACCEDVHAMXZSMDSPKKDDPVSJWBHPLRMRNHWNQCMHGPIWA");
    msg.timeout = 23835U;
    msg.contents.assign("TALZKBFOLQCIZHZSLIMAPEALMFJOTELEKCNGGSUQNEKBHMVKXZWLRVLOYRZIRTDBCQPPPZWLIUDWYKKBSOBOHGHFUHASSIPMCGPSMFCFEAHVBAGDRAWQMGJFBJCTNDEYRUVNYNNNXEXSOCZVWAUOFJNUXXJJHYMKUJFPDXTQYBKMOXSUZWRBIYCKRGSCUQ");

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
    msg.setTimeStamp(0.273346425834);
    msg.setSource(19497U);
    msg.setSourceEntity(151U);
    msg.setDestination(25391U);
    msg.setDestinationEntity(122U);
    msg.number.assign("VPWEZTHCEPSBVXSTGXJPFIYHJSXNIQVYGLAURNWQURLQKNMFWFCERTORDKCOSAQQZTUJJQUQLUEDWZKONGFDJQVHAHNSALDPIIWKCQYWTOYYMSOFMYEGVTHMOUMGFZGJBDUPTARJWXENXWADNBADIZCXBDICVXBRVUNLUSZAIDGFZXNBGLIWLCYGKVHPYJPRBNLEMOCOGSKFBCYEEMDRTXZAXLWRRMKJHTLPSV");
    msg.timeout = 31761U;
    msg.contents.assign("MAJBOXXRAOWPBFIKZUMDGTXIVFXZPNWJDPDFPTPYMZYHSUBHTKSASTCRLUDIJZNUBGBWMOSODCQUWTSVVOBSQLQYOAJEMYDUFNEVOKYWFW");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.493362189029);
    msg.setSource(29065U);
    msg.setSourceEntity(149U);
    msg.setDestination(51080U);
    msg.setDestinationEntity(10U);
    msg.id = 77U;
    msg.range = 0.487790800626;

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
    msg.setTimeStamp(0.116556933428);
    msg.setSource(14828U);
    msg.setSourceEntity(196U);
    msg.setDestination(63954U);
    msg.setDestinationEntity(229U);
    msg.id = 15U;
    msg.range = 0.493175672898;

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
    msg.setTimeStamp(0.114189831525);
    msg.setSource(8068U);
    msg.setSourceEntity(153U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(3U);
    msg.id = 64U;
    msg.range = 0.275135547362;

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
    msg.setTimeStamp(0.0461701182544);
    msg.setSource(22583U);
    msg.setSourceEntity(89U);
    msg.setDestination(64415U);
    msg.setDestinationEntity(55U);
    msg.tx = 16U;
    msg.channel = 59U;
    msg.timer = 47245U;

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
    msg.setTimeStamp(0.712868415333);
    msg.setSource(41163U);
    msg.setSourceEntity(133U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(127U);
    msg.tx = 76U;
    msg.channel = 205U;
    msg.timer = 50215U;

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
    msg.setTimeStamp(0.281765051721);
    msg.setSource(63592U);
    msg.setSourceEntity(170U);
    msg.setDestination(31605U);
    msg.setDestinationEntity(178U);
    msg.tx = 178U;
    msg.channel = 195U;
    msg.timer = 62142U;

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
    msg.setTimeStamp(0.796751039138);
    msg.setSource(63842U);
    msg.setSourceEntity(60U);
    msg.setDestination(48848U);
    msg.setDestinationEntity(136U);
    msg.beacon.assign("UATBEJFKRVLPLKEGNNPZWYOFORHNTQSKTSIHCEVXNAWXNBKUIPBDHAGHSLLWBD");
    msg.lat = 0.579657875456;
    msg.lon = 0.922142723342;
    msg.depth = 0.213096660767;
    msg.query_channel = 213U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 24U;

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
    msg.setTimeStamp(0.327972334059);
    msg.setSource(63491U);
    msg.setSourceEntity(230U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(40U);
    msg.beacon.assign("KLPKOFOBEMHVPWPGSVAFAKXBYGNTIBJZWSQBLNQNJPLPFWAPELUQOHIFEKXHYDMXCSNGPGDFERSYEESAXUDPOZJIUKTRXCKJAKRQOHVMSTQNMJBMVHLWWUMNVAQRCXMYQYXTWVETSABKLRWXUDIBWOFSDARGCGCGGNUOIEVPYLJBJNFYQBCLDZNDRIKYIOQZXZRUFPINHDTTBRGOVEHTJYLYVFICUJZCQWLHCDZTAHCFJSHZTGWMU");
    msg.lat = 0.527332761163;
    msg.lon = 0.0562856310595;
    msg.depth = 0.971678064519;
    msg.query_channel = 107U;
    msg.reply_channel = 118U;
    msg.transponder_delay = 140U;

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
    msg.setTimeStamp(0.610083448093);
    msg.setSource(4979U);
    msg.setSourceEntity(234U);
    msg.setDestination(30861U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("BZHPETIGQWTXPZYYZMKIWSXGQZERIQIFMBXUCMRNRFWDYMKUBEDLJJPJWAZXYEVXSHGATFYIRZHWFEADCWOCHCXQLAWWGEZFCFYQOPTPLECBPVMBYVYODLOENBOHEACDGLRGRDHFBKKKDTJGVOQLMUNKNQBNELMKVRTUDMUSSVTAUMPAAJWHYHAVFTLZNQ");
    msg.lat = 0.913078818525;
    msg.lon = 0.23609739804;
    msg.depth = 0.862375371278;
    msg.query_channel = 130U;
    msg.reply_channel = 178U;
    msg.transponder_delay = 67U;

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
    msg.setTimeStamp(0.30170181285);
    msg.setSource(51880U);
    msg.setSourceEntity(102U);
    msg.setDestination(9631U);
    msg.setDestinationEntity(241U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.488708540159);
    msg.setSource(51288U);
    msg.setSourceEntity(172U);
    msg.setDestination(46767U);
    msg.setDestinationEntity(20U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.146686070202);
    msg.setSource(20700U);
    msg.setSourceEntity(27U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(211U);
    msg.op = 40U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CDSGBRKFWGNSJEBMOIXMSQEWJWJUIYPMPSZHICKFBDWQJZRFUTGHSCRAOYDWXPPFJWVJLDINGDMXLUNYJGQHGOULCGKDNCKITTIXGFQJMELHTUJLXFASHDRGKBSBVLAUVMDRPDTCSYBXZQTLTCRYNNYCOPNMTAWPSAYRKSBNIMIYXW");
    tmp_msg_0.lat = 0.213991103297;
    tmp_msg_0.lon = 0.586894900263;
    tmp_msg_0.depth = 0.118072157433;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 170U;
    tmp_msg_0.transponder_delay = 164U;
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
    msg.setTimeStamp(0.97525708863);
    msg.setSource(31358U);
    msg.setSourceEntity(171U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(60U);
    msg.address = 90U;

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
    msg.setTimeStamp(0.148447536256);
    msg.setSource(25280U);
    msg.setSourceEntity(14U);
    msg.setDestination(52438U);
    msg.setDestinationEntity(138U);
    msg.address = 225U;

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
    msg.setTimeStamp(0.539960556794);
    msg.setSource(1670U);
    msg.setSourceEntity(246U);
    msg.setDestination(9167U);
    msg.setDestinationEntity(143U);
    msg.address = 172U;

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
    msg.setTimeStamp(0.390001812039);
    msg.setSource(41219U);
    msg.setSourceEntity(161U);
    msg.setDestination(28041U);
    msg.setDestinationEntity(244U);
    msg.address = 15U;
    msg.status = 56U;
    msg.range = 0.36063654647;

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
    msg.setTimeStamp(0.535312123701);
    msg.setSource(37729U);
    msg.setSourceEntity(176U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(251U);
    msg.address = 251U;
    msg.status = 59U;
    msg.range = 0.560297252991;

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
    msg.setTimeStamp(0.614450807671);
    msg.setSource(52587U);
    msg.setSourceEntity(250U);
    msg.setDestination(63801U);
    msg.setDestinationEntity(11U);
    msg.address = 42U;
    msg.status = 162U;
    msg.range = 0.635311996528;

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
    msg.setTimeStamp(0.753030142641);
    msg.setSource(37985U);
    msg.setSourceEntity(132U);
    msg.setDestination(50108U);
    msg.setDestinationEntity(201U);
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.456036568153);
    msg.setSource(41804U);
    msg.setSourceEntity(202U);
    msg.setDestination(63105U);
    msg.setDestinationEntity(18U);
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OIXQJXXLFMXYTQWUJSGCWXSKKAFOCBGGHTHFPPWUHDXSBTEXYONLDNFILNGIWZHORRLHKIJEQMJYVBOPQLGFWRPIAMEASLCDBZEBHZZTAVYBIZPGQDSYYQHYEWFSFVTCSMVBQNMLTRQETGKUXPYECUPNDBQMTMCVOCVPHGJIDFOPLADQRWBFYZVEGVLFJDZUNSEUJWRNENKZJKWOKHMNJKIRTOUYSRPAIGRCAUWLAVX");
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
    msg.setTimeStamp(0.897379405458);
    msg.setSource(5972U);
    msg.setSourceEntity(196U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(35U);
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59705U;
    tmp_msg_0.off_x = 0.049230172435;
    tmp_msg_0.off_y = 0.490954750758;
    tmp_msg_0.off_z = 0.189677464906;
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
    msg.setTimeStamp(0.295676059778);
    msg.setSource(38274U);
    msg.setSourceEntity(33U);
    msg.setDestination(9735U);
    msg.setDestinationEntity(37U);
    msg.enable = 163U;

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
    msg.setTimeStamp(0.323959241943);
    msg.setSource(60293U);
    msg.setSourceEntity(240U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(165U);
    msg.enable = 210U;

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
    msg.setTimeStamp(0.512708864771);
    msg.setSource(57117U);
    msg.setSourceEntity(178U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(91U);
    msg.enable = 111U;

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
    msg.setTimeStamp(0.903808743264);
    msg.setSource(8276U);
    msg.setSourceEntity(81U);
    msg.setDestination(27836U);
    msg.setDestinationEntity(161U);
    msg.summary = 97U;
    msg.level = 26U;

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
    msg.setTimeStamp(0.707244904612);
    msg.setSource(60365U);
    msg.setSourceEntity(35U);
    msg.setDestination(50662U);
    msg.setDestinationEntity(5U);
    msg.summary = 18U;
    msg.level = 66U;

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
    msg.setTimeStamp(0.945729228902);
    msg.setSource(48619U);
    msg.setSourceEntity(192U);
    msg.setDestination(45593U);
    msg.setDestinationEntity(6U);
    msg.summary = 129U;
    msg.level = 77U;

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
    msg.setTimeStamp(0.835120168827);
    msg.setSource(23249U);
    msg.setSourceEntity(7U);
    msg.setDestination(52237U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.495821263233);
    msg.setSource(13213U);
    msg.setSourceEntity(191U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.904008200363);
    msg.setSource(51121U);
    msg.setSourceEntity(111U);
    msg.setDestination(39801U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.56005414621);
    msg.setSource(50953U);
    msg.setSourceEntity(43U);
    msg.setDestination(50016U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.0160632123062);
    msg.setSource(57921U);
    msg.setSourceEntity(163U);
    msg.setDestination(50240U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.589767199087);
    msg.setSource(31012U);
    msg.setSourceEntity(162U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.357124131574);
    msg.setSource(49384U);
    msg.setSourceEntity(212U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(167U);
    msg.op = 84U;
    msg.system.assign("WCEQDETVGJSGYASWSRZJKPKHMYAYLGUFOXGVTYTRNNKQMULASVBXPLEYWINORBSSUYUQTVIOQOMQPWGZFLFYVLTFMOWGFUMBZFQJIAHRLVTORBACDRECCXLNPGEANZFUFLKYHPZHZRDVLWXKBAMIHYKPIFPOVCCNIDCXNEQTJHQAPGBKWRPAO");
    msg.range = 0.732562626051;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.975001516082;
    tmp_msg_0.x = 0.342748998265;
    tmp_msg_0.y = 0.0346633518701;
    tmp_msg_0.z = 0.298524953612;
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
    msg.setTimeStamp(0.051313372331);
    msg.setSource(48742U);
    msg.setSourceEntity(105U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(125U);
    msg.op = 176U;
    msg.system.assign("ZWHBJWPXBHNGTJDDIWVFQNMMJQHLONFQKHCEXURTWLVJWAHMEHYNCCSLTBEWYCPPLISSXUFJURXYISOVROHDMXAJONDECLAACQSKZENSPVUPMFPVETUBFRKVCNTTEEODFBZFHBPZIGOIKGPYUEZBKEXUXAQRBIDYDKDYVTTAYMORIWGUDLOBYPLSNKNCVAUQNKSCLVFOWGFQGGIIRBRDRQPXOLRSHHMLGZGIAWMTKZCZUFM");
    msg.range = 0.844983506176;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 191U;
    tmp_msg_0.plan_id.assign("NMMRNIRJVSYLWBFMCFXVHOIPGZXYIJJQKPIZUZKVWSYYQWXYXCGDYTRZHRLVTXMTCPUGMGBTUTOHKODYQBQBRJZDBHPTBBKEYEOISTWHSNMMOLZULKEMKOGAQNRPCCSMAIIKQJXDNOVREUQFKHWJSQHSUHPPAINDCWIAOAELGTWBKONBPLCLEZAOHZVBJZUFXSYJLYTSDPQXJNXZGKNFUMDAGVREGANECFDUFVWGCAFEFUJQLLADCTPI");
    tmp_msg_0.plan_eta = -982433990;
    tmp_msg_0.plan_progress = 0.0310318819712;
    tmp_msg_0.man_id.assign("JKLCCUGDFWGGINWZHWEJAEGOHHNRFBAAGRUAVLMYTTDZIDODZKUIMVPJNROJRXUVYSXFNDOXWVPDJHZOPSRGRKUSDLMOESTLLFYPVSGISEHGCVXNCBVPPYNCQUMZTJBQARZXXVOQJWDYEYD");
    tmp_msg_0.man_type = 37652U;
    tmp_msg_0.man_eta = 243815112;
    tmp_msg_0.last_outcome = 63U;
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
    msg.setTimeStamp(0.782926632358);
    msg.setSource(63897U);
    msg.setSourceEntity(115U);
    msg.setDestination(63854U);
    msg.setDestinationEntity(38U);
    msg.op = 137U;
    msg.system.assign("ZFRVXPECKUAMTARRNQLWXWAQAGOIMFGURWCXBXZEROENZBKEQDZFITELVWMPIQOSUFUXMEHPCHPOCCASTKVEYNLZWMIBOZRGGFLYDLBVGTVBNJQXOTDCPRBWFYGXPHDINBINUQJLJBNHKSNCSQSHBWSPAGKJOITIZQUVXRKEOJYLDZWPDKFMNSURTQGRC");
    msg.range = 0.514730741265;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.request_id = 36582U;
    tmp_msg_0.command = 119U;
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.228475033082;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.934886609024;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.319968342375;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.234962114698;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.166181187873;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.848835631958;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 81U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.509719990348;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 37U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.926212398676;
    tmp_tmp_tmp_msg_0_0_0.flags = 85U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 57015U;
    tmp_tmp_msg_0_0.custom.assign("MULVXENELMADWCTQBCEFZCOTBSDUBDVQKMOVFCEFVNZNWWMJULUSMKYZVQXJSJFDKIFTGNODGCBRZEIORPFDHZFGYULGGEJHLYTXQPXXZFNMICGQOKPAMGPVUHPMOIKIPBAJABWLKALGUZIFOWTKCNBYVRVWAIEBDSSXHRRWEPUOQKWLPSHQHRLYCGPZTMJXQ");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("LQWIQGBTSDPQCFYITJMKZGKUNMTPOGKSCJPZRJRJMHINZOADVGYOBZFHWLYWPOZNDUETGXXONVQSWBW");
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
    msg.setTimeStamp(0.481040113008);
    msg.setSource(42681U);
    msg.setSourceEntity(3U);
    msg.setDestination(13231U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0655847774199);
    msg.setSource(32974U);
    msg.setSourceEntity(55U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.0469473342195);
    msg.setSource(30057U);
    msg.setSourceEntity(126U);
    msg.setDestination(25440U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.0321830645139);
    msg.setSource(18751U);
    msg.setSourceEntity(31U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(152U);
    msg.list.assign("UJBOYHYFLHUTVXMKKFQGEKASCOMNWSTCKYXDBTIPPLLBEDCPAFRIPHNPTGHFSJBBRSNRWDDXFTGOAHVWOKRIERVDAZUGSSQACGENKIWZVNOLHWZZNZGIJPHJFDQYGXZLSECCUMRMECFMULYVPXFWPMTBHNSAXRUZPNYJATLWFUVDREBYDWLLUBQRNJOKJQWVXZACRLHIUEAKZWDNJCVEZVQOOQGSTSXEOGYCMABMUXIGF");

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
    msg.setTimeStamp(0.90275578833);
    msg.setSource(59379U);
    msg.setSourceEntity(215U);
    msg.setDestination(32722U);
    msg.setDestinationEntity(48U);
    msg.list.assign("TGMRMORJODRLQIJDUWEZVHTZDIQHCOUANGYGQBJMSRCHOYKKNOWAGPIIZLFBQXLPFIFYCKDDKVPKHPMELTMNNTHSLXUEQYSUVWQZTYTMYINXDYDEVCFSPOPOQVUFWAWSZABPLNWKAWJBVFGDSSZGKSNPDGLOHAUHZRBGIVNTJXTECBG");

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
    msg.setTimeStamp(0.953105580427);
    msg.setSource(32490U);
    msg.setSourceEntity(29U);
    msg.setDestination(52460U);
    msg.setDestinationEntity(200U);
    msg.list.assign("TPBKRVMDMIRHSKIDRZQAZLHDYAFXIXNCTQEVGUHUOFVKZBPIJNHCOYFRAJESLMPIKGWRAZRDOOGNZLOTACZNHJDXFPBNFJNDWUBQXFGYDBGLCTUSUXWUCXJUIBEFSHMCLZKAXLSEVIPQVCEHENCKOJBVWVVSTBWAAGCFKNFIHWPXEUYISZIOJNPOMOQKRKOEYRJQWTWMQEBGTMHFJULNVWPWGPLRUGY");

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
    msg.setTimeStamp(0.0236248869908);
    msg.setSource(12873U);
    msg.setSourceEntity(234U);
    msg.setDestination(18850U);
    msg.setDestinationEntity(49U);
    msg.value = -22678;

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
    msg.setTimeStamp(0.889622865772);
    msg.setSource(55417U);
    msg.setSourceEntity(244U);
    msg.setDestination(7429U);
    msg.setDestinationEntity(61U);
    msg.value = -25773;

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
    msg.setTimeStamp(0.502246191446);
    msg.setSource(31038U);
    msg.setSourceEntity(252U);
    msg.setDestination(59522U);
    msg.setDestinationEntity(141U);
    msg.value = -15457;

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
    msg.setTimeStamp(0.717223327804);
    msg.setSource(45097U);
    msg.setSourceEntity(197U);
    msg.setDestination(64222U);
    msg.setDestinationEntity(127U);
    msg.value = 0.305669119417;

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
    msg.setTimeStamp(0.1017604195);
    msg.setSource(9963U);
    msg.setSourceEntity(109U);
    msg.setDestination(53691U);
    msg.setDestinationEntity(143U);
    msg.value = 0.547440452079;

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
    msg.setTimeStamp(0.142512540176);
    msg.setSource(31285U);
    msg.setSourceEntity(31U);
    msg.setDestination(17406U);
    msg.setDestinationEntity(98U);
    msg.value = 0.466968492363;

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
    msg.setTimeStamp(0.452613307631);
    msg.setSource(41599U);
    msg.setSourceEntity(31U);
    msg.setDestination(61315U);
    msg.setDestinationEntity(31U);
    msg.value = 0.739895606034;

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
    msg.setTimeStamp(0.581471787987);
    msg.setSource(26127U);
    msg.setSourceEntity(9U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(47U);
    msg.value = 0.772548032266;

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
    msg.setTimeStamp(0.0495571689486);
    msg.setSource(57260U);
    msg.setSourceEntity(9U);
    msg.setDestination(2513U);
    msg.setDestinationEntity(69U);
    msg.value = 0.664745893565;

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
    msg.setTimeStamp(0.720874501445);
    msg.setSource(12190U);
    msg.setSourceEntity(21U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(218U);
    msg.validity = 547U;
    msg.type = 252U;
    msg.utc_year = 51678U;
    msg.utc_month = 87U;
    msg.utc_day = 94U;
    msg.utc_time = 0.694891090431;
    msg.lat = 0.286579368156;
    msg.lon = 0.552603687427;
    msg.height = 0.320479982704;
    msg.satellites = 101U;
    msg.cog = 0.00898231397936;
    msg.sog = 0.403595529229;
    msg.hdop = 0.884500856858;
    msg.vdop = 0.0445852038566;
    msg.hacc = 0.523067503507;
    msg.vacc = 0.527456057053;

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
    msg.setTimeStamp(0.0846885381431);
    msg.setSource(24912U);
    msg.setSourceEntity(2U);
    msg.setDestination(10212U);
    msg.setDestinationEntity(163U);
    msg.validity = 16808U;
    msg.type = 68U;
    msg.utc_year = 35660U;
    msg.utc_month = 117U;
    msg.utc_day = 56U;
    msg.utc_time = 0.835397030286;
    msg.lat = 0.717973586417;
    msg.lon = 0.0495402701475;
    msg.height = 0.423849231296;
    msg.satellites = 156U;
    msg.cog = 0.905965389448;
    msg.sog = 0.76984037095;
    msg.hdop = 0.635810701988;
    msg.vdop = 0.446993371602;
    msg.hacc = 0.0756634293282;
    msg.vacc = 0.459234894942;

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
    msg.setTimeStamp(0.440403455252);
    msg.setSource(55046U);
    msg.setSourceEntity(162U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(124U);
    msg.validity = 6028U;
    msg.type = 231U;
    msg.utc_year = 9723U;
    msg.utc_month = 210U;
    msg.utc_day = 224U;
    msg.utc_time = 0.434308661653;
    msg.lat = 0.841461340118;
    msg.lon = 0.778260295886;
    msg.height = 0.204104541257;
    msg.satellites = 210U;
    msg.cog = 0.91863156441;
    msg.sog = 0.0173931258534;
    msg.hdop = 0.883808175021;
    msg.vdop = 0.550608454268;
    msg.hacc = 0.930632403467;
    msg.vacc = 0.688178371039;

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
    msg.setTimeStamp(0.468712530104);
    msg.setSource(39636U);
    msg.setSourceEntity(77U);
    msg.setDestination(24536U);
    msg.setDestinationEntity(47U);
    msg.time = 0.98357812966;
    msg.phi = 0.793300710633;
    msg.theta = 0.827315040625;
    msg.psi = 0.540307258246;
    msg.psi_magnetic = 0.227906271855;

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
    msg.setTimeStamp(0.514060435087);
    msg.setSource(17821U);
    msg.setSourceEntity(204U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(232U);
    msg.time = 0.612667425674;
    msg.phi = 0.842829118473;
    msg.theta = 0.559436141867;
    msg.psi = 0.108170868569;
    msg.psi_magnetic = 0.301397346402;

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
    msg.setTimeStamp(0.810882193966);
    msg.setSource(3113U);
    msg.setSourceEntity(12U);
    msg.setDestination(2028U);
    msg.setDestinationEntity(58U);
    msg.time = 0.721907384482;
    msg.phi = 0.921141790362;
    msg.theta = 0.689182889745;
    msg.psi = 0.624302754292;
    msg.psi_magnetic = 0.112234793819;

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
    msg.setTimeStamp(0.088656641915);
    msg.setSource(419U);
    msg.setSourceEntity(24U);
    msg.setDestination(33851U);
    msg.setDestinationEntity(121U);
    msg.time = 0.0117684707753;
    msg.x = 0.877030651894;
    msg.y = 0.955708214788;
    msg.z = 0.461354879392;
    msg.timestep = 0.423274749564;

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
    msg.setTimeStamp(0.205235265763);
    msg.setSource(25477U);
    msg.setSourceEntity(233U);
    msg.setDestination(16421U);
    msg.setDestinationEntity(19U);
    msg.time = 0.887774904024;
    msg.x = 0.375330830175;
    msg.y = 0.610049493073;
    msg.z = 0.14138500259;
    msg.timestep = 0.46555427805;

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
    msg.setTimeStamp(0.551638872657);
    msg.setSource(12416U);
    msg.setSourceEntity(210U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(70U);
    msg.time = 0.558828381598;
    msg.x = 0.297527035834;
    msg.y = 0.95249004407;
    msg.z = 0.748291277133;
    msg.timestep = 0.560385482275;

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
    msg.setTimeStamp(0.312420939915);
    msg.setSource(30233U);
    msg.setSourceEntity(141U);
    msg.setDestination(63925U);
    msg.setDestinationEntity(16U);
    msg.time = 0.855012743856;
    msg.x = 0.942899188467;
    msg.y = 0.0589893028859;
    msg.z = 0.70020848829;

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
    msg.setTimeStamp(0.405272125446);
    msg.setSource(41337U);
    msg.setSourceEntity(117U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(182U);
    msg.time = 0.0809064092668;
    msg.x = 0.00174115699215;
    msg.y = 0.756441377705;
    msg.z = 0.275871064181;

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
    msg.setTimeStamp(0.0993925953987);
    msg.setSource(21188U);
    msg.setSourceEntity(20U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(244U);
    msg.time = 0.314144956287;
    msg.x = 0.560789295227;
    msg.y = 0.846183296782;
    msg.z = 0.681628969282;

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
    msg.setTimeStamp(0.969214006186);
    msg.setSource(43474U);
    msg.setSourceEntity(163U);
    msg.setDestination(2332U);
    msg.setDestinationEntity(184U);
    msg.time = 0.304736041262;
    msg.x = 0.830842923266;
    msg.y = 0.14371430006;
    msg.z = 0.330858287393;

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
    msg.setTimeStamp(0.748455166752);
    msg.setSource(59033U);
    msg.setSourceEntity(34U);
    msg.setDestination(60083U);
    msg.setDestinationEntity(21U);
    msg.time = 0.950988722388;
    msg.x = 0.810421512243;
    msg.y = 0.0982381517512;
    msg.z = 0.534554421599;

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
    msg.setTimeStamp(0.214447471761);
    msg.setSource(54956U);
    msg.setSourceEntity(217U);
    msg.setDestination(5127U);
    msg.setDestinationEntity(174U);
    msg.time = 0.692406801715;
    msg.x = 0.342947389494;
    msg.y = 0.0813512656369;
    msg.z = 0.0617223925957;

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
    msg.setTimeStamp(0.4631030894);
    msg.setSource(54455U);
    msg.setSourceEntity(185U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(159U);
    msg.time = 0.879772061612;
    msg.x = 0.649461199724;
    msg.y = 0.271899941077;
    msg.z = 0.657551345518;

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
    msg.setTimeStamp(0.456091822225);
    msg.setSource(10228U);
    msg.setSourceEntity(162U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(2U);
    msg.time = 0.43510602522;
    msg.x = 0.813561645245;
    msg.y = 0.845465062589;
    msg.z = 0.219078850341;

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
    msg.setTimeStamp(0.361486737698);
    msg.setSource(59228U);
    msg.setSourceEntity(185U);
    msg.setDestination(40582U);
    msg.setDestinationEntity(129U);
    msg.time = 0.624294370448;
    msg.x = 0.771537030744;
    msg.y = 0.0533654659702;
    msg.z = 0.973552602721;

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
    msg.setTimeStamp(0.843658777288);
    msg.setSource(62930U);
    msg.setSourceEntity(252U);
    msg.setDestination(2148U);
    msg.setDestinationEntity(174U);
    msg.validity = 198U;
    msg.x = 0.473673199513;
    msg.y = 0.891299861572;
    msg.z = 0.972627370785;

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
    msg.setTimeStamp(0.284118664219);
    msg.setSource(20380U);
    msg.setSourceEntity(60U);
    msg.setDestination(19965U);
    msg.setDestinationEntity(196U);
    msg.validity = 146U;
    msg.x = 0.364894803613;
    msg.y = 0.184456181347;
    msg.z = 0.981371362733;

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
    msg.setTimeStamp(0.600018606324);
    msg.setSource(53530U);
    msg.setSourceEntity(222U);
    msg.setDestination(34114U);
    msg.setDestinationEntity(170U);
    msg.validity = 238U;
    msg.x = 0.854086183851;
    msg.y = 0.54056581799;
    msg.z = 0.619191663824;

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
    msg.setTimeStamp(0.420119414638);
    msg.setSource(54013U);
    msg.setSourceEntity(172U);
    msg.setDestination(13996U);
    msg.setDestinationEntity(122U);
    msg.validity = 82U;
    msg.x = 0.899989307883;
    msg.y = 0.843612868264;
    msg.z = 0.40671540349;

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
    msg.setTimeStamp(0.655432249497);
    msg.setSource(28706U);
    msg.setSourceEntity(173U);
    msg.setDestination(14156U);
    msg.setDestinationEntity(166U);
    msg.validity = 123U;
    msg.x = 0.113911818681;
    msg.y = 0.146406228382;
    msg.z = 0.622544761491;

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
    msg.setTimeStamp(0.124396193673);
    msg.setSource(43099U);
    msg.setSourceEntity(140U);
    msg.setDestination(40629U);
    msg.setDestinationEntity(56U);
    msg.validity = 214U;
    msg.x = 0.140181608807;
    msg.y = 0.796480232772;
    msg.z = 0.962187878925;

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
    msg.setTimeStamp(0.411588457192);
    msg.setSource(4808U);
    msg.setSourceEntity(190U);
    msg.setDestination(6446U);
    msg.setDestinationEntity(58U);
    msg.time = 0.849749165835;
    msg.x = 0.897412656998;
    msg.y = 0.655947413142;
    msg.z = 0.883030813104;

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
    msg.setTimeStamp(0.968139137405);
    msg.setSource(53609U);
    msg.setSourceEntity(105U);
    msg.setDestination(41062U);
    msg.setDestinationEntity(150U);
    msg.time = 0.806264005296;
    msg.x = 0.885787236447;
    msg.y = 0.872694027815;
    msg.z = 0.301908891338;

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
    msg.setTimeStamp(0.520821130851);
    msg.setSource(23135U);
    msg.setSourceEntity(67U);
    msg.setDestination(1138U);
    msg.setDestinationEntity(62U);
    msg.time = 0.424791180354;
    msg.x = 0.173815682894;
    msg.y = 0.189993485036;
    msg.z = 0.658419178544;

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
    msg.setTimeStamp(0.886661439084);
    msg.setSource(16043U);
    msg.setSourceEntity(234U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(145U);
    msg.validity = 113U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.202524589376;
    tmp_msg_0.y = 0.329254512091;
    tmp_msg_0.z = 0.0435795358137;
    tmp_msg_0.phi = 0.74627993659;
    tmp_msg_0.theta = 0.000153024232072;
    tmp_msg_0.psi = 0.422493281673;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.813344848907;

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
    msg.setTimeStamp(0.982811213514);
    msg.setSource(56937U);
    msg.setSourceEntity(127U);
    msg.setDestination(7324U);
    msg.setDestinationEntity(159U);
    msg.validity = 119U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.564988155047;
    tmp_msg_0.y = 0.277111204742;
    tmp_msg_0.z = 0.961017458548;
    tmp_msg_0.phi = 0.399641991621;
    tmp_msg_0.theta = 0.366001135338;
    tmp_msg_0.psi = 0.289311330224;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.540015690265;

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
    msg.setTimeStamp(0.720975067906);
    msg.setSource(50658U);
    msg.setSourceEntity(213U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(49U);
    msg.validity = 38U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.091631993538;
    tmp_msg_0.beam_height = 0.233074028031;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.398469837811;

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
    msg.setTimeStamp(0.90653770732);
    msg.setSource(31559U);
    msg.setSourceEntity(218U);
    msg.setDestination(3765U);
    msg.setDestinationEntity(63U);
    msg.value = 0.00665075466353;

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
    msg.setTimeStamp(0.556362280478);
    msg.setSource(50937U);
    msg.setSourceEntity(22U);
    msg.setDestination(20613U);
    msg.setDestinationEntity(21U);
    msg.value = 0.592705384388;

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
    msg.setTimeStamp(0.391023741661);
    msg.setSource(59330U);
    msg.setSourceEntity(189U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(128U);
    msg.value = 0.64169813569;

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
    msg.setTimeStamp(0.939132630243);
    msg.setSource(4076U);
    msg.setSourceEntity(176U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(178U);
    msg.value = 0.98162358231;

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
    msg.setTimeStamp(0.958153572399);
    msg.setSource(33692U);
    msg.setSourceEntity(147U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(234U);
    msg.value = 0.181720071213;

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
    msg.setTimeStamp(0.977826646156);
    msg.setSource(20401U);
    msg.setSourceEntity(125U);
    msg.setDestination(60948U);
    msg.setDestinationEntity(7U);
    msg.value = 0.677858732063;

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
    msg.setTimeStamp(0.690934559906);
    msg.setSource(9786U);
    msg.setSourceEntity(20U);
    msg.setDestination(47387U);
    msg.setDestinationEntity(63U);
    msg.value = 0.482196152535;

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
    msg.setTimeStamp(0.0632409136136);
    msg.setSource(9346U);
    msg.setSourceEntity(104U);
    msg.setDestination(39703U);
    msg.setDestinationEntity(81U);
    msg.value = 0.788213968245;

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
    msg.setTimeStamp(0.903776188041);
    msg.setSource(62412U);
    msg.setSourceEntity(8U);
    msg.setDestination(49439U);
    msg.setDestinationEntity(110U);
    msg.value = 0.833604017952;

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
    msg.setTimeStamp(0.670330217852);
    msg.setSource(34383U);
    msg.setSourceEntity(37U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(94U);
    msg.value = 0.727997657567;

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
    msg.setTimeStamp(0.465535527786);
    msg.setSource(42299U);
    msg.setSourceEntity(86U);
    msg.setDestination(17855U);
    msg.setDestinationEntity(122U);
    msg.value = 0.0948953372813;

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
    msg.setTimeStamp(0.201029527311);
    msg.setSource(19492U);
    msg.setSourceEntity(144U);
    msg.setDestination(64637U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0759033679982;

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
    msg.setTimeStamp(0.461211144521);
    msg.setSource(34804U);
    msg.setSourceEntity(162U);
    msg.setDestination(4236U);
    msg.setDestinationEntity(108U);
    msg.value = 0.111137675377;

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
    msg.setTimeStamp(0.280680301407);
    msg.setSource(10136U);
    msg.setSourceEntity(59U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0702066571035;

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
    msg.setTimeStamp(0.0480850105597);
    msg.setSource(1255U);
    msg.setSourceEntity(15U);
    msg.setDestination(47623U);
    msg.setDestinationEntity(11U);
    msg.value = 0.898458149052;

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
    msg.setTimeStamp(0.791382874299);
    msg.setSource(13082U);
    msg.setSourceEntity(4U);
    msg.setDestination(7837U);
    msg.setDestinationEntity(31U);
    msg.value = 0.284680614654;

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
    msg.setTimeStamp(0.42248684687);
    msg.setSource(8037U);
    msg.setSourceEntity(144U);
    msg.setDestination(42941U);
    msg.setDestinationEntity(163U);
    msg.value = 0.176523205802;

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
    msg.setTimeStamp(0.186044486414);
    msg.setSource(24479U);
    msg.setSourceEntity(236U);
    msg.setDestination(63728U);
    msg.setDestinationEntity(244U);
    msg.value = 0.399094202924;

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
    msg.setTimeStamp(0.673331398738);
    msg.setSource(23665U);
    msg.setSourceEntity(252U);
    msg.setDestination(62336U);
    msg.setDestinationEntity(93U);
    msg.value = 0.608178980487;

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
    msg.setTimeStamp(0.888008081671);
    msg.setSource(57885U);
    msg.setSourceEntity(95U);
    msg.setDestination(54467U);
    msg.setDestinationEntity(201U);
    msg.value = 0.500252721953;

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
    msg.setTimeStamp(0.823991327275);
    msg.setSource(49211U);
    msg.setSourceEntity(136U);
    msg.setDestination(58999U);
    msg.setDestinationEntity(125U);
    msg.value = 0.0553766217909;

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
    msg.setTimeStamp(0.896660922731);
    msg.setSource(49557U);
    msg.setSourceEntity(186U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(85U);
    msg.value = 0.13392839547;

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
    msg.setTimeStamp(0.495658721435);
    msg.setSource(16183U);
    msg.setSourceEntity(20U);
    msg.setDestination(31522U);
    msg.setDestinationEntity(44U);
    msg.value = 0.950996467079;

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
    msg.setTimeStamp(0.886048645533);
    msg.setSource(15237U);
    msg.setSourceEntity(29U);
    msg.setDestination(12568U);
    msg.setDestinationEntity(32U);
    msg.value = 0.473559781637;

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
    msg.setTimeStamp(0.162576589323);
    msg.setSource(52542U);
    msg.setSourceEntity(21U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(118U);
    msg.direction = 0.62967879286;
    msg.speed = 0.443677865639;

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
    msg.setTimeStamp(0.967802233591);
    msg.setSource(59881U);
    msg.setSourceEntity(122U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(68U);
    msg.direction = 0.45377181429;
    msg.speed = 0.189729810047;

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
    msg.setTimeStamp(0.235229127508);
    msg.setSource(55672U);
    msg.setSourceEntity(104U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(41U);
    msg.direction = 0.559757714471;
    msg.speed = 0.620074959667;

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
    msg.setTimeStamp(0.509691785654);
    msg.setSource(34386U);
    msg.setSourceEntity(194U);
    msg.setDestination(35239U);
    msg.setDestinationEntity(216U);
    msg.value = 0.984217636674;

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
    msg.setTimeStamp(0.833414038583);
    msg.setSource(56853U);
    msg.setSourceEntity(68U);
    msg.setDestination(40837U);
    msg.setDestinationEntity(38U);
    msg.value = 0.0608427843291;

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
    msg.setTimeStamp(0.438088841394);
    msg.setSource(6799U);
    msg.setSourceEntity(81U);
    msg.setDestination(51180U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0960095950862;

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
    msg.setTimeStamp(0.291892902418);
    msg.setSource(41870U);
    msg.setSourceEntity(115U);
    msg.setDestination(1619U);
    msg.setDestinationEntity(150U);
    msg.value.assign("NUMMSFCWVKTCCGVXCQWMVVGIQKPASHGQNRMBUPVPLYMOFJHNKLKTHQIBYSTSIFOPYBJFCALWCCLVKNRJLWOTUASXNTTMQBBDWJCGTLWTJTQUVHHKZEPEBXAS");

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
    msg.setTimeStamp(0.815975899955);
    msg.setSource(28768U);
    msg.setSourceEntity(88U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(210U);
    msg.value.assign("VXSSDUIJQCEWGTQFOXUZEMNINAARLFZKWBCKPKVSJUPQMXNJOTQCHHRFVFIODNSMRMMOQIRPIBOXDCRHWYQNMBUSLTSIAZZFAEBCPETLGMPTYOASXUBKWLVLWNCHQFGBWYUEINDVYJJPTPQUAVIDZVOHRWGFWGGLMGCCQBUYWZZDNNOELHVZRQJFUJISADGTLDYYSESGKFEPABUPYJCDYKVCLXZZNWVKKXJ");

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
    msg.setTimeStamp(0.470782067485);
    msg.setSource(21458U);
    msg.setSourceEntity(88U);
    msg.setDestination(65398U);
    msg.setDestinationEntity(96U);
    msg.value.assign("EIAGRCOLGUJYAUMRDMWQUUICRQTBBVISWOSXTEFTMXFJYQYUULYDLYDOLOYCUCAOCHFFFJLSQAHYWZQNIGHADAUXVWLNVXFJPFRDUKZVJZGLVZPPXKBBIHKYGMWPWLMWORBOVAQHJGZNRSJSRCSKHHEZTTZIVCXZIMNPKOHNEPSAIANDTGRQVLD");

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
    msg.setTimeStamp(0.269111258027);
    msg.setSource(16263U);
    msg.setSourceEntity(100U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(152U);
    const char tmp_msg_0[] = {62, 95, 117, 116, 106, -119, -63, -107, 126, -20, -37, 27, -116, 111, 24, 55, 25, 126, -85, 75, 24, -115, 39, -121, -43, -18, -108, 78, -55, 12, -114, -33, -59, -55, -78, -12, 116, 41, 20, -125, 126, -104, 83, -121, 8, -27, 85, -81, 21, -127, -2, 64, 33, 38, 62, -40, -2, 61, 15, 11, 60, 45, 2, 114, 2, -17, 15, 78, 111, 3, -94, 102, -48, 41, 7, 77, 126, -74, 13, 106, -12, 126, -127, 55, -5, -87, 38, 54, -27, -112, 45, -41, -99, -119, -6, -75, -6, -16, -36, 110, -89, -118, -29, 13, -90, 77, 109, 54, 80, -76, 38, 60, -78, -70, -22, 72, -9, 36, 100, -100, 74, 123, 36, -15, -105, -85, 84, -49, -51, 125, 42, -112, -127, -120, -56, -108, 96, -58, -43, -30, 12, -59, 119, -50, -111, -20, 21, -119, 104, 5, -27, 123, 102, 123, -87, -46, -60, -13, 7, 52, 125, 27, 113, 27, -47, -86, 102, -74, -1, -114, 53, -59, 101, -52, -112, -78, 32, -101, 75, -22, -117, -86, 115, 95, -120, -51, 46, -43, -57, -126, -32, -6, -104, -14, 85, -126, -28, -117, -93, -20, -21, 5, 87, -119, 28, 30, -92, -91, 59, 65, -68, -106, -6, -109, -42, -17, 91, 95, -3, -32, 50, 112, -16, 126, -97, 33, -15, 117, -64, -26, 31, 83, -29, -128};
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
    msg.setTimeStamp(0.279018196556);
    msg.setSource(36649U);
    msg.setSourceEntity(233U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(77U);
    const char tmp_msg_0[] = {37, 57, 49, 18, 106, 35, 4, 92, 6, -75, -80, -2, 0, -78, 28, -97, -101, -75, -76, -95, -60, 42, -55, 117, -125, 86, 83, 54, -122, 83, 85, -62, -124, 95, -34, 76, 73, 97, -13, -75, 85, -20, -14, -60, 97, -27, 107, 26, -4, 35, 57, 27, -49, -80, -8, 12, 55, -22, 50, -23, 72, -79, 23, 125, -73, -59, 15, -48, -59, -125, 92, 31, -112, 14, -64, -103, 92, -51, -117, -21, 72, -54, -115, 87, 28, 87, 110, 51, -29, 69, 25, -15, 17, 11, 68, 12, 32, 116, -35, 2, -97, -79, 115, -77, 84, -25, 60, -31, 57, 100, -41, -95, -121, -30, -33, 5, 70, -43, -121, 113, -90, 125, 13, -3, -5, 35, -8, -83, -68, 26, 90, -41, -47, 3, 16, 21, -124, 40, 118, -70, 69, 7, 118, 101, 114, -31, -114, -32, 109, 76, 61, 94, -61, -78, 43, -99, 91, -64, 80, -82, -66, -107, -5, -93, 80, 79, 42, 78, 75, 72, -26, -14, 14, 99, 32, -73, -127, -118, -25, -21, -128, -64, -35, 108, 68, 84, -80, 66, 18, 22, 103, 50, -77, -107, -68, -15, -61, 22, 71};
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
    msg.setTimeStamp(0.216317035744);
    msg.setSource(53165U);
    msg.setSourceEntity(217U);
    msg.setDestination(27798U);
    msg.setDestinationEntity(203U);
    const char tmp_msg_0[] = {-54, 117, 17, -58, -122, 11, -121, -33, 2, -44, -63, 112, -52, -25, 36, 109, 0, 51, 44, 119, -107, -78, -114, 26, -68, -123, -61, -46, 86, -52, -74, 18, 106, 55, 41, -125, 56, -47, -13, -126, 13, -3, 55, 27, 101, 58, 5, -97, -28, 101, -69, 69, -92, 77, 60, -34, -100, -3, -25, -47, -115, 113, -70, 21, -5, -116, -106, -42, -5, 121, -125, -60, 99, 92, -42, -24, 83, -75, 69, -104, -115, 74, -4, 25, 96, 10, 52, -102, -70, -123, -47, 86, 27, 49, -58, -1, 1, 10, -35, 99, 54, -9, -25, 123, 116, 65, 42, -76, 32, 82, -89, -45, -85, -93, 88, -112, -121, -116, 116, 112, 122, -23, -92, -97, -27, -64, -49, 10, 6, -70, 88, 45, -96, 125, -50, -14, 72, 112, -107, 47, -127, -87, 109, 25, 124, -126, 95, 83, 44, 117, 41, 106, -101, -48, -23, 15, -33, -97, 54, 73, -54, 92, -23, 69, 30, 66, 80, 12, -87, -62, 90, -37, 99, -17, 118, 101, -3, 37, 110, -112, -65, 72, -17, -70, -66, 59, -81, 29, 102, 67, 106, -60, -73, -122};
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
    msg.setTimeStamp(0.498796476176);
    msg.setSource(10609U);
    msg.setSourceEntity(102U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(41U);
    msg.frequency = 2521594398U;
    msg.min_range = 12682U;
    msg.max_range = 28180U;

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
    msg.setTimeStamp(0.307265674649);
    msg.setSource(34971U);
    msg.setSourceEntity(17U);
    msg.setDestination(11009U);
    msg.setDestinationEntity(61U);
    msg.frequency = 245538707U;
    msg.min_range = 34593U;
    msg.max_range = 12946U;

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
    msg.setTimeStamp(0.20416878936);
    msg.setSource(57853U);
    msg.setSourceEntity(153U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(232U);
    msg.frequency = 995126899U;
    msg.min_range = 53221U;
    msg.max_range = 6723U;

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
    msg.setTimeStamp(0.79072340161);
    msg.setSource(31465U);
    msg.setSourceEntity(88U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(210U);
    msg.type = 85U;
    msg.frequency = 3863742232U;
    msg.min_range = 31011U;
    msg.max_range = 32142U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.624203211883;
    const char tmp_msg_0[] = {-28, -126, 82, 55, -11, 123, 18, -99, -44, -19, 106, 85, 102, -42, -76, 47, 24, -40, -41, -75, -20, 88, -74, -32, 79, 116, 13, 78, 67, -27, 60, -123, -121, 11};
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
    msg.setTimeStamp(0.763882743643);
    msg.setSource(12846U);
    msg.setSourceEntity(136U);
    msg.setDestination(42451U);
    msg.setDestinationEntity(188U);
    msg.type = 184U;
    msg.frequency = 3254355766U;
    msg.min_range = 52699U;
    msg.max_range = 14005U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.906708941222;
    const char tmp_msg_0[] = {79, 68, -30, 71, 110, -92, 97, -78, -12, -111, -126, -37, -110, -27, -120, 91, 115, 21, 28, -68, -112, -26, -116, 84, -2, -9, 22, 84, -9, -28, 80, 55, -22, 88, 40, -80, 80, 34, 124, -67, -96, -26, 40, 124, 44, -42, 89, -120, 40, -66, -80, -40, 11, -54, -119, 51, 20, -111, -93, 65, -93, -122, 99, 95, 116, -55, 66, -27, 57, 55, -24, -117, -9, -112, 36, -74, -31, 34, -93, -40, 22, 53, 126, -39, -1, 91, -125, 76, -76, 106, -78, -67, -97, -95, 72, -89, -98, 42, 3, -71, 104, 91, 110, -82, -43, -35, -126, 14, -31, 112, -33, -64, 12, -81, -96, 59, 29, 126, 74, -42, -24, -86, 36, -97, 21, -44, -101, 69, 90, 73, -61, -24, 88, 55, -33, 85, 86, 118, -105, -31, -57, -76, 25, 61, 109, 1, -18, 5, -124, -78, 82, -38, 97, 9, 87, 81, -83, 6, 72, -23, -100, 60, -44, -112, 48, 56, -25, 80, -22, -67, 118, -41, -5, 19, 95, -65, -54, -90, 0, -90, 103, 50, 117, 56, -122, 35, -92, 70, 14, 4, -30, 85, -18, -91, 108, -33, 104, 75, -16};
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
    msg.setTimeStamp(0.786886825766);
    msg.setSource(35777U);
    msg.setSourceEntity(150U);
    msg.setDestination(37354U);
    msg.setDestinationEntity(93U);
    msg.type = 32U;
    msg.frequency = 3686932937U;
    msg.min_range = 38933U;
    msg.max_range = 35293U;
    msg.bits_per_point = 62U;
    msg.scale_factor = 0.705552665585;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.902591777764;
    tmp_msg_0.beam_height = 0.658123723034;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-91, -16, 53, 82, 72, 69, 82, -93, 34, -76, -116, 55, -35, -73, 54, 22, 60, 86, 80, 43, -80, -109, -78, 52, 36, 121, 22, -91, 23, 9, 67, 58, 63, -66, -58, 7, -70, 73, -11, 2, -115, -128, -56, -125, -53, -33, -13, 110, -58, -62, 81, -17, -48, 25, -125, 109, -9, -105, -41, 5, -46, 81, -121, -14, 45, 16, 36, 13, 94, -107, -51, 58, -81, -36, -54, -57, 74, -112, -75, -86, 116, 117, -2, -49, 25, -97, 2, -97, -74, 75, 99, -13, -84, 83, -72, -67, -28, 90, 53, 77, -13, -73, 36, 121, -127, 28, 68, 28, 10, -127, -58, -125, 60, -66, -17, -107, -96, 121, 61, 123, -52, 29, 90, 7, -36, 81, -33, -56, 87, 53, -55, -97, -64, -48, -31, -59, 76, 62, 27, -25, 8, -121, 72, -63, -112, -73, 19, 12, -67, -89, 87, 123, 72, -50, 18, 67, -5, -101, -41, 99, 8, -94, 21, -33, 59, 111, 92, 58, -80, -104, -91, -11, -21, 26, 106, 23, -125, 14, 99, 87, 67};
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
    msg.setTimeStamp(0.190717633918);
    msg.setSource(64418U);
    msg.setSourceEntity(3U);
    msg.setDestination(20027U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.169129354031);
    msg.setSource(60990U);
    msg.setSourceEntity(227U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.305961061087);
    msg.setSource(16091U);
    msg.setSourceEntity(30U);
    msg.setDestination(4173U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.0360328516584);
    msg.setSource(40046U);
    msg.setSourceEntity(3U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(96U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.676398626726);
    msg.setSource(38579U);
    msg.setSourceEntity(243U);
    msg.setDestination(18657U);
    msg.setDestinationEntity(212U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.927468678609);
    msg.setSource(37194U);
    msg.setSourceEntity(96U);
    msg.setDestination(22500U);
    msg.setDestinationEntity(112U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.336237885435);
    msg.setSource(18039U);
    msg.setSourceEntity(242U);
    msg.setDestination(54582U);
    msg.setDestinationEntity(30U);
    msg.value = 0.983391602256;
    msg.confidence = 0.289391572863;
    msg.opmodes.assign("AQEUJVFXLIVNTIVZCMAYGMVFFMLSBOKPPOSSKPUMIWDKUHEVJIMYUZAKHCJEDYJQPCIRLEQYEFXDTJTBUKAGPTBRRDOCPRIQAMRHNLTOUXWRMJYHFBEZQDEGRVORIBDEEMFWWZIQAVBQXCAYTGNDJYFVNMGJZSNCMKCYWBCUWTHZSSQZXWHJXCSBRDBUGEIRDPLL");

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
    msg.setTimeStamp(0.425594616528);
    msg.setSource(29830U);
    msg.setSourceEntity(235U);
    msg.setDestination(10977U);
    msg.setDestinationEntity(1U);
    msg.value = 0.0220457899756;
    msg.confidence = 0.451361489449;
    msg.opmodes.assign("OBAZOOIUNPQHMQLFTYLAJBGVQXPKOERUKALUFXDBQGHSLSZWUABENYMRCEIAZRDNLDOGBAHFVBSIZF");

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
    msg.setTimeStamp(0.179496966455);
    msg.setSource(46734U);
    msg.setSourceEntity(147U);
    msg.setDestination(59263U);
    msg.setDestinationEntity(9U);
    msg.value = 0.835955252665;
    msg.confidence = 0.596678530466;
    msg.opmodes.assign("PSYDVXOIJVTPZYFMPORWGZGEBJUSNSOCHQHHHUJTAVITDSREIGCDJLCDEWHQKPKVLYKMFOFNSLIBHIEXYEMNXBMLZSKBFZGKDNPKBRJQQQBRIPYRTTDCYHCEMZQOWOXWNIUIFGAEDRGALKUOJPNZKMQEWHZVTVVQYBJSDJAXMUNGRNLULXTZIVPNHSCVZWXMWYAU");

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
    msg.setTimeStamp(0.592938915855);
    msg.setSource(45835U);
    msg.setSourceEntity(79U);
    msg.setDestination(1586U);
    msg.setDestinationEntity(33U);
    msg.itow = 690524481U;
    msg.lat = 0.766270891296;
    msg.lon = 0.443808492832;
    msg.height_ell = 0.725684393133;
    msg.height_sea = 0.311977285192;
    msg.hacc = 0.561878187794;
    msg.vacc = 0.0747106594819;
    msg.vel_n = 0.688381581146;
    msg.vel_e = 0.711473179501;
    msg.vel_d = 0.0244804254844;
    msg.speed = 0.0915514267682;
    msg.gspeed = 0.753810328194;
    msg.heading = 0.939876676567;
    msg.sacc = 0.86327796806;
    msg.cacc = 0.931499422186;

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
    msg.setTimeStamp(0.306330808321);
    msg.setSource(26766U);
    msg.setSourceEntity(96U);
    msg.setDestination(51221U);
    msg.setDestinationEntity(206U);
    msg.itow = 1430727986U;
    msg.lat = 0.809688664384;
    msg.lon = 0.164762736611;
    msg.height_ell = 0.173575019392;
    msg.height_sea = 0.1454974528;
    msg.hacc = 0.625845308401;
    msg.vacc = 0.282813635544;
    msg.vel_n = 0.592602038095;
    msg.vel_e = 0.14126148196;
    msg.vel_d = 0.526628181169;
    msg.speed = 0.648151862266;
    msg.gspeed = 0.449049286518;
    msg.heading = 0.574315772539;
    msg.sacc = 0.959270967937;
    msg.cacc = 0.406757528685;

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
    msg.setTimeStamp(0.36070714392);
    msg.setSource(46338U);
    msg.setSourceEntity(169U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(135U);
    msg.itow = 778059632U;
    msg.lat = 0.68136539777;
    msg.lon = 0.307057339294;
    msg.height_ell = 0.595644398722;
    msg.height_sea = 0.284803589381;
    msg.hacc = 0.723595687253;
    msg.vacc = 0.647745890994;
    msg.vel_n = 0.278817098266;
    msg.vel_e = 0.891082677187;
    msg.vel_d = 0.474524987055;
    msg.speed = 0.940816947086;
    msg.gspeed = 0.943696153514;
    msg.heading = 0.488635323033;
    msg.sacc = 0.755283082574;
    msg.cacc = 0.425683277542;

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
    msg.setTimeStamp(0.180343548891);
    msg.setSource(22537U);
    msg.setSourceEntity(31U);
    msg.setDestination(2656U);
    msg.setDestinationEntity(90U);
    msg.id = 244U;
    msg.value = 0.193014990198;

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
    msg.setTimeStamp(0.636357597548);
    msg.setSource(61855U);
    msg.setSourceEntity(253U);
    msg.setDestination(54306U);
    msg.setDestinationEntity(44U);
    msg.id = 104U;
    msg.value = 0.0244602789206;

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
    msg.setTimeStamp(0.14157751632);
    msg.setSource(50208U);
    msg.setSourceEntity(140U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(57U);
    msg.id = 108U;
    msg.value = 0.408213004469;

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
    msg.setTimeStamp(0.899856043857);
    msg.setSource(54958U);
    msg.setSourceEntity(63U);
    msg.setDestination(17585U);
    msg.setDestinationEntity(254U);
    msg.x = 0.704629902958;
    msg.y = 0.689661470866;
    msg.z = 0.32219247895;
    msg.phi = 0.329144865924;
    msg.theta = 0.952317537859;
    msg.psi = 0.222896705739;

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
    msg.setTimeStamp(0.0377863838445);
    msg.setSource(27461U);
    msg.setSourceEntity(77U);
    msg.setDestination(1771U);
    msg.setDestinationEntity(35U);
    msg.x = 0.543578117493;
    msg.y = 0.872266057826;
    msg.z = 0.492388119297;
    msg.phi = 0.0413802105466;
    msg.theta = 0.872329431425;
    msg.psi = 0.490015783455;

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
    msg.setTimeStamp(0.762109049352);
    msg.setSource(38609U);
    msg.setSourceEntity(117U);
    msg.setDestination(30511U);
    msg.setDestinationEntity(244U);
    msg.x = 0.10492647994;
    msg.y = 0.267687655283;
    msg.z = 0.579011040995;
    msg.phi = 0.439912788925;
    msg.theta = 0.606758368799;
    msg.psi = 0.120013616277;

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
    msg.setTimeStamp(0.786806038744);
    msg.setSource(5350U);
    msg.setSourceEntity(130U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(211U);
    msg.beam_width = 0.735689153183;
    msg.beam_height = 0.358106627616;

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
    msg.setTimeStamp(0.78389221576);
    msg.setSource(54392U);
    msg.setSourceEntity(88U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.943725110119;
    msg.beam_height = 0.283991550785;

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
    msg.setTimeStamp(0.545901655327);
    msg.setSource(30281U);
    msg.setSourceEntity(226U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(223U);
    msg.beam_width = 0.958796573174;
    msg.beam_height = 0.133042632376;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.519488931113);
    msg.setSource(62203U);
    msg.setSourceEntity(92U);
    msg.setDestination(37254U);
    msg.setDestinationEntity(227U);
    msg.id = 253U;
    msg.zoom = 153U;
    msg.action = 126U;

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
    msg.setTimeStamp(0.660059517574);
    msg.setSource(3531U);
    msg.setSourceEntity(56U);
    msg.setDestination(4909U);
    msg.setDestinationEntity(6U);
    msg.id = 157U;
    msg.zoom = 205U;
    msg.action = 220U;

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
    msg.setTimeStamp(0.390388489646);
    msg.setSource(15592U);
    msg.setSourceEntity(188U);
    msg.setDestination(38668U);
    msg.setDestinationEntity(104U);
    msg.id = 101U;
    msg.zoom = 47U;
    msg.action = 111U;

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
    msg.setTimeStamp(0.620625424757);
    msg.setSource(21109U);
    msg.setSourceEntity(233U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(169U);
    msg.id = 69U;
    msg.value = 0.349496433032;

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
    msg.setTimeStamp(0.451853008);
    msg.setSource(44776U);
    msg.setSourceEntity(49U);
    msg.setDestination(37637U);
    msg.setDestinationEntity(13U);
    msg.id = 152U;
    msg.value = 0.0729649990689;

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
    msg.setTimeStamp(0.332589633005);
    msg.setSource(57324U);
    msg.setSourceEntity(192U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(50U);
    msg.id = 37U;
    msg.value = 0.772188313802;

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
    msg.setTimeStamp(0.0856047224641);
    msg.setSource(2857U);
    msg.setSourceEntity(66U);
    msg.setDestination(23939U);
    msg.setDestinationEntity(14U);
    msg.id = 29U;
    msg.value = 0.336405319096;

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
    msg.setTimeStamp(0.977958699644);
    msg.setSource(24461U);
    msg.setSourceEntity(69U);
    msg.setDestination(59885U);
    msg.setDestinationEntity(129U);
    msg.id = 174U;
    msg.value = 0.818401059432;

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
    msg.setTimeStamp(0.0404285327852);
    msg.setSource(492U);
    msg.setSourceEntity(164U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(155U);
    msg.id = 75U;
    msg.value = 0.413141224988;

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
    msg.setTimeStamp(0.292585893101);
    msg.setSource(38094U);
    msg.setSourceEntity(112U);
    msg.setDestination(51527U);
    msg.setDestinationEntity(216U);
    msg.id = 219U;
    msg.angle = 0.00722218636593;

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
    msg.setTimeStamp(0.843433529383);
    msg.setSource(52661U);
    msg.setSourceEntity(77U);
    msg.setDestination(20841U);
    msg.setDestinationEntity(227U);
    msg.id = 242U;
    msg.angle = 0.736762784809;

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
    msg.setTimeStamp(0.272443244219);
    msg.setSource(17530U);
    msg.setSourceEntity(180U);
    msg.setDestination(30700U);
    msg.setDestinationEntity(128U);
    msg.id = 192U;
    msg.angle = 0.299759948159;

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
    msg.setTimeStamp(0.0942107878991);
    msg.setSource(26010U);
    msg.setSourceEntity(150U);
    msg.setDestination(56848U);
    msg.setDestinationEntity(21U);
    msg.op = 236U;
    msg.actions.assign("TACTDATZIGPJOKMTZYRJZLQKFMNSFEWWPNOFVMXSWYOKDHJMRUQWZJMDVZRNHFEHRIVRMRTXDGNUHKXSQFJTVLGCSBSENDIACHPITIANXXWNXYOUEGYGLFNVYKBFNKECEODVGNHGULPXAKI");

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
    msg.setTimeStamp(0.857829421766);
    msg.setSource(64434U);
    msg.setSourceEntity(96U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(58U);
    msg.op = 137U;
    msg.actions.assign("CFXSOISDZAHHLEBUDBMPZVRAEGQADGITRBZVJQJKULAZZMWGNEDBYCCSHWQACYVWAFWMDDKJROYEQKKZOUURVUDIZTTYGIGJFSYELYLKJRLIBKLFUYXGMHVWQFRUXTFIDITLXYUOXPSPVOJRKAOHNNPBCC");

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
    msg.setTimeStamp(0.0166112520428);
    msg.setSource(7573U);
    msg.setSourceEntity(207U);
    msg.setDestination(31979U);
    msg.setDestinationEntity(233U);
    msg.op = 182U;
    msg.actions.assign("EBGTLAYBWJYFUXIFZBVLJKCCUTQIALWYJXMEOTHKRNNGTY");

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
    msg.setTimeStamp(0.361568807893);
    msg.setSource(31751U);
    msg.setSourceEntity(140U);
    msg.setDestination(64784U);
    msg.setDestinationEntity(11U);
    msg.actions.assign("XEPLSMVZWNYMHIIITHAJVOWVDPLKAOAUOEOBDGBSPSUNCZFTERKAMAMKTILVJGNTUGTBHLOPAGDWXOZLDKRQGRSLXRZIUHJUKADLXDVPXSSQWWBNPGFRLEFNYTYXCXBPUKUHEGUYVVNTFHVEIPDBQXIMJKJFWEOYKZZXHBRYOAYCBTJHQRQMBBJLQQFCHZZDOJHRFDSCYNSQLTQYNPCNZESDOQEZNJKXFMMAUVIGGWFEWYVCRPUMWW");

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
    msg.setTimeStamp(0.791100218898);
    msg.setSource(56427U);
    msg.setSourceEntity(27U);
    msg.setDestination(32705U);
    msg.setDestinationEntity(222U);
    msg.actions.assign("AAEQJIZDMNZKJLMSCQPSWPFLBADZUZLRJIGFBIIGJXGFRVCXJOFFBRIGNAGKATHUBYWTYWLESTTXPFGSLHWKPWZKAUXUSJ");

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
    msg.setTimeStamp(0.0330119255494);
    msg.setSource(60890U);
    msg.setSourceEntity(187U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(226U);
    msg.actions.assign("HHHWQZCIZQQEEZPVZFGLYVWZPRCENYXSWPFDLJUMTUWWDWAAGKAOGQRITXELJMNXTVSUKMUHRJRNDCCUTGKALEZNDSQHSDVMOZCIYJKBVRYDXMJSUVVVLHDHAJCCASHPUBRXYFOYQRFDSVFQBSIQJRGTMSYKGUIELZONLLWXBGQYBBLVUFDPTXDNOMGBKNWFEFPRFEIC");

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
    msg.setTimeStamp(0.144571363169);
    msg.setSource(48726U);
    msg.setSourceEntity(238U);
    msg.setDestination(33326U);
    msg.setDestinationEntity(30U);
    msg.button = 173U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.920183022295);
    msg.setSource(6170U);
    msg.setSourceEntity(244U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(196U);
    msg.button = 96U;
    msg.value = 137U;

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
    msg.setTimeStamp(0.509539483869);
    msg.setSource(44190U);
    msg.setSourceEntity(254U);
    msg.setDestination(56860U);
    msg.setDestinationEntity(205U);
    msg.button = 229U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.0878878963438);
    msg.setSource(43129U);
    msg.setSourceEntity(90U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(114U);
    msg.op = 147U;
    msg.text.assign("HFGXGEXPMDBLNBBYGCMPBBIKXXKTLOJABAEWWLUSZZREOPOEXTQGDXSZUUJSSUFBTYVCPAUNKUCWNMURFWTXEJRPFWIVLNXQDHKPZEFYOWIHCJYOZCCQQLAJHPGQMARRIRDFWMNLPYDWFUIJHXQRZNAVTFSSDGEKFNHWHEKYDMLCOIRUWHNVMRSXNBOGIAJQMEZYZMJYST");

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
    msg.setTimeStamp(0.99950347122);
    msg.setSource(7336U);
    msg.setSourceEntity(93U);
    msg.setDestination(52978U);
    msg.setDestinationEntity(72U);
    msg.op = 219U;
    msg.text.assign("GWGPMXJYPEHBQKAGWVQYOKGIZQVLYKDWO");

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
    msg.setTimeStamp(0.241684114941);
    msg.setSource(9090U);
    msg.setSourceEntity(54U);
    msg.setDestination(44214U);
    msg.setDestinationEntity(36U);
    msg.op = 200U;
    msg.text.assign("UWBLSNMGOEMVQRIZAXRCAAWXMAQKETQCJPATLTAMSHRGBVHPWFRLNKVYLUUTZUHUGBJQIJHSJHBDBQJENVJXTEVNDGOOFYXIUMLWIEUNXXJODIGZJMYWKWIZLZTYUZVLBICTEQOKJVXFLAUEOKSFMQTMQKFHKFPODBZWNOACFAPIQDBHNDTPIYGRUYFMSAFGDHRSYRJZCSKPCRXDOEWXGNDTQPVCVBWLLSCFDSKOB");

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
    msg.setTimeStamp(0.00203532596712);
    msg.setSource(4380U);
    msg.setSourceEntity(226U);
    msg.setDestination(50785U);
    msg.setDestinationEntity(124U);
    msg.op = 175U;
    msg.time_remain = 0.424778477555;
    msg.sched_time = 0.0826411068345;

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
    msg.setTimeStamp(0.770814030732);
    msg.setSource(29227U);
    msg.setSourceEntity(161U);
    msg.setDestination(9974U);
    msg.setDestinationEntity(179U);
    msg.op = 134U;
    msg.time_remain = 0.958900713855;
    msg.sched_time = 0.316475239294;

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
    msg.setTimeStamp(0.363165578912);
    msg.setSource(20840U);
    msg.setSourceEntity(134U);
    msg.setDestination(60706U);
    msg.setDestinationEntity(147U);
    msg.op = 25U;
    msg.time_remain = 0.628221331321;
    msg.sched_time = 0.892271339101;

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
    msg.setTimeStamp(0.0618451223321);
    msg.setSource(26697U);
    msg.setSourceEntity(117U);
    msg.setDestination(19789U);
    msg.setDestinationEntity(14U);
    msg.id = 185U;
    msg.op = 133U;
    msg.sched_time = 0.360865004389;

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
    msg.setTimeStamp(0.911435274124);
    msg.setSource(8379U);
    msg.setSourceEntity(8U);
    msg.setDestination(39281U);
    msg.setDestinationEntity(243U);
    msg.id = 32U;
    msg.op = 135U;
    msg.sched_time = 0.728837496723;

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
    msg.setTimeStamp(0.367537116753);
    msg.setSource(25254U);
    msg.setSourceEntity(112U);
    msg.setDestination(3U);
    msg.setDestinationEntity(21U);
    msg.id = 202U;
    msg.op = 9U;
    msg.sched_time = 0.0478340078204;

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
    msg.setTimeStamp(0.48376737831);
    msg.setSource(29376U);
    msg.setSourceEntity(109U);
    msg.setDestination(28870U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.64275296527);
    msg.setSource(34932U);
    msg.setSourceEntity(90U);
    msg.setDestination(42002U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.178906080974);
    msg.setSource(53232U);
    msg.setSourceEntity(110U);
    msg.setDestination(23072U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.801500564698);
    msg.setSource(14053U);
    msg.setSourceEntity(172U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(139U);
    msg.id = 28U;
    msg.label.assign("CMDSMKVWDABCMALEBPAZESOOYDYBPHZJYPBATWAERKOYJMFCSKGCGIYUZSMBLRPLZTAXCAVVWVTMVLITCPIUXEHTZSIQFMUEOLZNVRGQWSYLPXUUTTTIJSDPGOXLIHNRCGFKQCXZGXMVIZEUEJKKCLNRKPGDWEURDBMMQSZJNWQQOVKAEJNOUYBXEUWGXNDRSIRPBFKNHCQWSYHZIHKJXFVLAHLQF");
    msg.state = 11U;

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
    msg.setTimeStamp(0.0981312660189);
    msg.setSource(64004U);
    msg.setSourceEntity(233U);
    msg.setDestination(50032U);
    msg.setDestinationEntity(58U);
    msg.id = 68U;
    msg.label.assign("CQRHXCJCRZMFBOUBSULOZHWZLJYGQNBRHDGVZNAFVEODYYIBKWPSGSQEAMLIKKUFXBWDISOHMZUOCMAST");
    msg.state = 56U;

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
    msg.setTimeStamp(0.935636277646);
    msg.setSource(21026U);
    msg.setSourceEntity(174U);
    msg.setDestination(32925U);
    msg.setDestinationEntity(85U);
    msg.id = 108U;
    msg.label.assign("QJMQYSGGTIKTWMCIHDEEJBZBIMSTGPPADCZWYZTMEFSNJYFSUXBFFVNJOBDRTIQZFMJOUXSZRCFGGGPQHIXAKEONAKMCYRKLVYFAULNLCMBVYYXVXQXYAAWKLTGAJQKHXLRXSSEPVLTTIVHLZPVQKHEMDNPUTEJVCVAHNHEUZCWKIPUPNESBQQBMAWYWWRUUUHTRRORHWZEOLDXNBKOGOYORF");
    msg.state = 203U;

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
    IMC::LedControl msg;
    msg.setTimeStamp(0.496451635993);
    msg.setSource(63442U);
    msg.setSourceEntity(132U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(181U);
    msg.id = 96U;
    msg.op = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.226288019054);
    msg.setSource(5272U);
    msg.setSourceEntity(144U);
    msg.setDestination(8383U);
    msg.setDestinationEntity(85U);
    msg.id = 17U;
    msg.op = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.0181732334144);
    msg.setSource(55612U);
    msg.setSourceEntity(94U);
    msg.setDestination(35284U);
    msg.setDestinationEntity(215U);
    msg.id = 198U;
    msg.op = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.560189520326);
    msg.setSource(27918U);
    msg.setSourceEntity(81U);
    msg.setDestination(23551U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.571242927842;
    msg.lon = 0.304660533311;
    msg.height = 0.467103593334;
    msg.x = 0.9410052524;
    msg.y = 0.334392165686;
    msg.z = 0.550607895543;
    msg.phi = 0.816006221884;
    msg.theta = 0.220433845598;
    msg.psi = 0.494774550994;
    msg.u = 0.643180290544;
    msg.v = 0.5579589253;
    msg.w = 0.551142120696;
    msg.vx = 0.0267971537926;
    msg.vy = 0.425425948619;
    msg.vz = 0.672917549447;
    msg.p = 0.211005482541;
    msg.q = 0.278953624078;
    msg.r = 0.519378993413;
    msg.depth = 0.932505178232;
    msg.alt = 0.533572136505;

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
    msg.setTimeStamp(0.743562717028);
    msg.setSource(40066U);
    msg.setSourceEntity(164U);
    msg.setDestination(6954U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.22609927865;
    msg.lon = 0.968798516018;
    msg.height = 0.994442892245;
    msg.x = 0.928020867287;
    msg.y = 0.97037234148;
    msg.z = 0.870206136857;
    msg.phi = 0.423992148132;
    msg.theta = 0.435146734431;
    msg.psi = 0.0329611688207;
    msg.u = 0.634498685745;
    msg.v = 0.356877383884;
    msg.w = 0.261742219905;
    msg.vx = 0.147539339638;
    msg.vy = 0.945304150765;
    msg.vz = 0.66154666733;
    msg.p = 0.883182967481;
    msg.q = 0.412281186947;
    msg.r = 0.851751100997;
    msg.depth = 0.942583687644;
    msg.alt = 0.670444997066;

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
    msg.setTimeStamp(0.54003257996);
    msg.setSource(35536U);
    msg.setSourceEntity(10U);
    msg.setDestination(55423U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.828956032936;
    msg.lon = 0.568465920945;
    msg.height = 0.80468492495;
    msg.x = 0.084074665324;
    msg.y = 0.58920426123;
    msg.z = 0.448181941024;
    msg.phi = 0.730106982314;
    msg.theta = 0.450214362107;
    msg.psi = 0.753302376908;
    msg.u = 0.218484127966;
    msg.v = 0.375833811205;
    msg.w = 0.0839921294046;
    msg.vx = 0.328764368605;
    msg.vy = 0.121457975913;
    msg.vz = 0.787602184098;
    msg.p = 0.204192289281;
    msg.q = 0.163175784263;
    msg.r = 0.951203045422;
    msg.depth = 0.236879191855;
    msg.alt = 0.559992897808;

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
    msg.setTimeStamp(0.562239401304);
    msg.setSource(18056U);
    msg.setSourceEntity(50U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(196U);
    msg.x = 0.280824739736;
    msg.y = 0.584172125562;
    msg.z = 0.938508390816;

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
    msg.setTimeStamp(0.67141622407);
    msg.setSource(6195U);
    msg.setSourceEntity(65U);
    msg.setDestination(3269U);
    msg.setDestinationEntity(177U);
    msg.x = 0.966630689608;
    msg.y = 0.493623237994;
    msg.z = 0.584119145424;

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
    msg.setTimeStamp(0.338013287923);
    msg.setSource(61585U);
    msg.setSourceEntity(97U);
    msg.setDestination(58151U);
    msg.setDestinationEntity(124U);
    msg.x = 0.196385870489;
    msg.y = 0.528737916506;
    msg.z = 0.934688054181;

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
    msg.setTimeStamp(0.557580119652);
    msg.setSource(17532U);
    msg.setSourceEntity(92U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(194U);
    msg.value = 0.458600617997;

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
    msg.setTimeStamp(0.144379265068);
    msg.setSource(57878U);
    msg.setSourceEntity(74U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(242U);
    msg.value = 0.624365967561;

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
    msg.setTimeStamp(0.741409129645);
    msg.setSource(24562U);
    msg.setSourceEntity(223U);
    msg.setDestination(12113U);
    msg.setDestinationEntity(234U);
    msg.value = 0.167943423577;

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
    msg.setTimeStamp(0.986956333573);
    msg.setSource(33120U);
    msg.setSourceEntity(229U);
    msg.setDestination(52367U);
    msg.setDestinationEntity(45U);
    msg.value = 0.396132458334;

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
    msg.setTimeStamp(0.953923428833);
    msg.setSource(2027U);
    msg.setSourceEntity(235U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(73U);
    msg.value = 0.529770657691;

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
    msg.setTimeStamp(0.677255578823);
    msg.setSource(39759U);
    msg.setSourceEntity(44U);
    msg.setDestination(20746U);
    msg.setDestinationEntity(225U);
    msg.value = 0.520708824344;

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
    msg.setTimeStamp(0.269992673542);
    msg.setSource(51000U);
    msg.setSourceEntity(56U);
    msg.setDestination(30148U);
    msg.setDestinationEntity(4U);
    msg.x = 0.51444250819;
    msg.y = 0.481979450326;
    msg.z = 0.267178831047;
    msg.phi = 0.409486951233;
    msg.theta = 0.420789179563;
    msg.psi = 0.632973443302;
    msg.p = 0.115857410157;
    msg.q = 0.858624289682;
    msg.r = 0.974942213041;
    msg.u = 0.960091607191;
    msg.v = 0.0292359172451;
    msg.w = 0.515875974113;
    msg.bias_psi = 0.820942535638;
    msg.bias_r = 0.453537192883;

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
    msg.setTimeStamp(0.955603758835);
    msg.setSource(8693U);
    msg.setSourceEntity(229U);
    msg.setDestination(52555U);
    msg.setDestinationEntity(157U);
    msg.x = 0.86167528745;
    msg.y = 0.921358268047;
    msg.z = 0.799249027198;
    msg.phi = 0.292781190169;
    msg.theta = 0.782920090941;
    msg.psi = 0.0156061724815;
    msg.p = 0.212333789249;
    msg.q = 0.499132343774;
    msg.r = 0.361036887615;
    msg.u = 0.973816849165;
    msg.v = 0.00629591855322;
    msg.w = 0.0129029398373;
    msg.bias_psi = 0.112054072956;
    msg.bias_r = 0.298021760533;

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
    msg.setTimeStamp(0.157826193736);
    msg.setSource(12350U);
    msg.setSourceEntity(51U);
    msg.setDestination(25808U);
    msg.setDestinationEntity(103U);
    msg.x = 0.409813548829;
    msg.y = 0.498764565756;
    msg.z = 0.780493114558;
    msg.phi = 0.780644394851;
    msg.theta = 0.0860756928728;
    msg.psi = 0.500354564015;
    msg.p = 0.782432250363;
    msg.q = 0.405366425585;
    msg.r = 0.66496427053;
    msg.u = 0.687391225556;
    msg.v = 0.132724522124;
    msg.w = 0.06217139242;
    msg.bias_psi = 0.901337837234;
    msg.bias_r = 0.703972735169;

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
    msg.setTimeStamp(0.964625608292);
    msg.setSource(4700U);
    msg.setSourceEntity(113U);
    msg.setDestination(40309U);
    msg.setDestinationEntity(59U);
    msg.bias_psi = 0.0728855151918;
    msg.bias_r = 0.179325636293;
    msg.cog = 0.996449926244;
    msg.cyaw = 0.984817867017;
    msg.lbl_rej_level = 0.597216329116;
    msg.gps_rej_level = 0.445678448889;
    msg.custom_x = 0.95370337767;
    msg.custom_y = 0.310376039217;
    msg.custom_z = 0.579983227645;

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
    msg.setTimeStamp(0.997666793643);
    msg.setSource(42318U);
    msg.setSourceEntity(74U);
    msg.setDestination(27548U);
    msg.setDestinationEntity(120U);
    msg.bias_psi = 0.837170069924;
    msg.bias_r = 0.873150667487;
    msg.cog = 0.797931970428;
    msg.cyaw = 0.668965484797;
    msg.lbl_rej_level = 0.408680943383;
    msg.gps_rej_level = 0.22554409412;
    msg.custom_x = 0.534235496357;
    msg.custom_y = 0.164330170225;
    msg.custom_z = 0.852891348567;

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
    msg.setTimeStamp(0.793388372174);
    msg.setSource(8614U);
    msg.setSourceEntity(226U);
    msg.setDestination(49039U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.786199446277;
    msg.bias_r = 0.327413491025;
    msg.cog = 0.881759221036;
    msg.cyaw = 0.788889436233;
    msg.lbl_rej_level = 0.817922966246;
    msg.gps_rej_level = 0.461817066926;
    msg.custom_x = 0.70611255889;
    msg.custom_y = 0.330475819103;
    msg.custom_z = 0.656283847275;

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
    msg.setTimeStamp(0.403240715885);
    msg.setSource(35318U);
    msg.setSourceEntity(199U);
    msg.setDestination(43876U);
    msg.setDestinationEntity(252U);
    msg.utc_time = 0.206566544308;
    msg.reason = 0U;

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
    msg.setTimeStamp(0.113048710973);
    msg.setSource(19973U);
    msg.setSourceEntity(130U);
    msg.setDestination(15163U);
    msg.setDestinationEntity(251U);
    msg.utc_time = 0.310364372152;
    msg.reason = 210U;

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
    msg.setTimeStamp(0.583417999743);
    msg.setSource(53982U);
    msg.setSourceEntity(30U);
    msg.setDestination(54198U);
    msg.setDestinationEntity(145U);
    msg.utc_time = 0.673037876662;
    msg.reason = 61U;

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
    msg.setTimeStamp(0.859850547083);
    msg.setSource(21736U);
    msg.setSourceEntity(198U);
    msg.setDestination(29056U);
    msg.setDestinationEntity(162U);
    msg.id = 165U;
    msg.range = 0.512310008535;
    msg.acceptance = 124U;

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
    msg.setTimeStamp(0.69232477003);
    msg.setSource(26011U);
    msg.setSourceEntity(244U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(141U);
    msg.id = 170U;
    msg.range = 0.832530594588;
    msg.acceptance = 148U;

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
    msg.setTimeStamp(0.177873834851);
    msg.setSource(64464U);
    msg.setSourceEntity(235U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(160U);
    msg.id = 71U;
    msg.range = 0.272625440517;
    msg.acceptance = 236U;

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
    msg.setTimeStamp(0.916213046993);
    msg.setSource(28800U);
    msg.setSourceEntity(97U);
    msg.setDestination(5242U);
    msg.setDestinationEntity(222U);
    msg.type = 173U;
    msg.reason = 167U;
    msg.value = 0.273683220298;
    msg.timestep = 0.277215895458;

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
    msg.setTimeStamp(0.692212517285);
    msg.setSource(3304U);
    msg.setSourceEntity(179U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(63U);
    msg.type = 136U;
    msg.reason = 11U;
    msg.value = 0.55427622359;
    msg.timestep = 0.618202632442;

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
    msg.setTimeStamp(0.231082988345);
    msg.setSource(20522U);
    msg.setSourceEntity(20U);
    msg.setDestination(47622U);
    msg.setDestinationEntity(96U);
    msg.type = 230U;
    msg.reason = 130U;
    msg.value = 0.416365060152;
    msg.timestep = 0.0111210282158;

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
    msg.setTimeStamp(0.31437716084);
    msg.setSource(5016U);
    msg.setSourceEntity(157U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.599404669394);
    msg.setSource(21431U);
    msg.setSourceEntity(200U);
    msg.setDestination(30714U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.510783903506);
    msg.setSource(62630U);
    msg.setSourceEntity(205U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.490244211392);
    msg.setSource(43389U);
    msg.setSourceEntity(73U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(73U);
    msg.beacon.assign("AGVBUKTZSIOHWMALCXUOLCTRNWTOEHOKXVGCVDHXOEYTHOKLBJYKHASBNDLJDHYWEJXOUGREYDSIWAWSAKNHRUPZRVZGXJEEUYUJFPPPFIZUXBFDFCJAKSIY");
    msg.x = 0.902464574783;
    msg.y = 0.366375991885;
    msg.depth = 0.439299136166;
    msg.var_x = 0.141278225466;
    msg.var_y = 0.0678746354329;

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
    msg.setTimeStamp(0.979158373004);
    msg.setSource(25353U);
    msg.setSourceEntity(1U);
    msg.setDestination(25070U);
    msg.setDestinationEntity(173U);
    msg.beacon.assign("IIAVEPAFCQPDWXRFTIECGGJATTHXUWBYQBSGGAAXMXPYVKLSFSZJFMLAMBMQWQRCNHADUMCDUOINVINHGCYDETPYVECSSJHKNPQKZZHPLEWOZRRTPJUVROKTLHGBVNNJODUBLIMAOQDTCYVX");
    msg.x = 0.599275902387;
    msg.y = 0.852370769136;
    msg.depth = 0.474507989724;
    msg.var_x = 0.21896439835;
    msg.var_y = 0.00684623053677;

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
    msg.setTimeStamp(0.900507849471);
    msg.setSource(35389U);
    msg.setSourceEntity(146U);
    msg.setDestination(16816U);
    msg.setDestinationEntity(49U);
    msg.beacon.assign("XNNIBQQMCOREFHLRZIMMYBQOPBXXTTHBYQINKMGXZAQJZSUCWCYCKFNJTADCVLSHJCMCFCPTTNIOFUGKDVERIYASE");
    msg.x = 0.383652025202;
    msg.y = 0.906550118115;
    msg.depth = 0.36668934715;
    msg.var_x = 0.636205062582;
    msg.var_y = 0.961545519868;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.980872220875);
    msg.setSource(64018U);
    msg.setSourceEntity(45U);
    msg.setDestination(33267U);
    msg.setDestinationEntity(152U);
    msg.value = 0.173520137217;

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
    msg.setTimeStamp(0.619563409053);
    msg.setSource(9458U);
    msg.setSourceEntity(43U);
    msg.setDestination(15109U);
    msg.setDestinationEntity(35U);
    msg.value = 0.326669422336;

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
    msg.setTimeStamp(0.312733919284);
    msg.setSource(25118U);
    msg.setSourceEntity(176U);
    msg.setDestination(20556U);
    msg.setDestinationEntity(222U);
    msg.value = 0.533907903039;

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
    msg.setTimeStamp(0.681268889336);
    msg.setSource(4657U);
    msg.setSourceEntity(95U);
    msg.setDestination(62206U);
    msg.setDestinationEntity(218U);
    msg.value = 0.136817981614;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.578729382962);
    msg.setSource(36540U);
    msg.setSourceEntity(44U);
    msg.setDestination(33663U);
    msg.setDestinationEntity(6U);
    msg.value = 0.94118870794;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.514830527048);
    msg.setSource(17466U);
    msg.setSourceEntity(142U);
    msg.setDestination(53150U);
    msg.setDestinationEntity(140U);
    msg.value = 0.284936716947;
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
    msg.setTimeStamp(0.34470520813);
    msg.setSource(7018U);
    msg.setSourceEntity(209U);
    msg.setDestination(19452U);
    msg.setDestinationEntity(0U);
    msg.value = 0.572501385966;
    msg.speed_units = 11U;

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
    msg.setTimeStamp(0.201527728061);
    msg.setSource(32220U);
    msg.setSourceEntity(138U);
    msg.setDestination(16236U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0881031567397;
    msg.speed_units = 209U;

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
    msg.setTimeStamp(0.405903687002);
    msg.setSource(43040U);
    msg.setSourceEntity(188U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(33U);
    msg.value = 0.806168014236;
    msg.speed_units = 7U;

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
    msg.setTimeStamp(0.897483193856);
    msg.setSource(32117U);
    msg.setSourceEntity(150U);
    msg.setDestination(36083U);
    msg.setDestinationEntity(232U);
    msg.value = 0.952749025569;

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
    msg.setTimeStamp(0.873395805273);
    msg.setSource(40403U);
    msg.setSourceEntity(152U);
    msg.setDestination(16081U);
    msg.setDestinationEntity(203U);
    msg.value = 0.363268752215;

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
    msg.setTimeStamp(0.692265395974);
    msg.setSource(64072U);
    msg.setSourceEntity(117U);
    msg.setDestination(54010U);
    msg.setDestinationEntity(35U);
    msg.value = 0.873998587079;

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
    msg.setTimeStamp(0.940636010869);
    msg.setSource(12946U);
    msg.setSourceEntity(109U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(219U);
    msg.value = 0.558093315672;

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
    msg.setTimeStamp(0.191511681661);
    msg.setSource(60064U);
    msg.setSourceEntity(157U);
    msg.setDestination(47981U);
    msg.setDestinationEntity(183U);
    msg.value = 0.559218213711;

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
    msg.setTimeStamp(0.870543842881);
    msg.setSource(63709U);
    msg.setSourceEntity(90U);
    msg.setDestination(8397U);
    msg.setDestinationEntity(8U);
    msg.value = 0.525841154795;

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
    msg.setTimeStamp(0.833934634784);
    msg.setSource(46515U);
    msg.setSourceEntity(58U);
    msg.setDestination(22650U);
    msg.setDestinationEntity(165U);
    msg.value = 0.861296043387;

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
    msg.setTimeStamp(0.754359555567);
    msg.setSource(51402U);
    msg.setSourceEntity(40U);
    msg.setDestination(27236U);
    msg.setDestinationEntity(67U);
    msg.value = 0.868003336071;

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
    msg.setTimeStamp(0.655379973216);
    msg.setSource(63892U);
    msg.setSourceEntity(184U);
    msg.setDestination(21728U);
    msg.setDestinationEntity(79U);
    msg.value = 0.792117698923;

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
    msg.setTimeStamp(0.222434037151);
    msg.setSource(49657U);
    msg.setSourceEntity(108U);
    msg.setDestination(48452U);
    msg.setDestinationEntity(226U);
    msg.start_lat = 0.0513767387325;
    msg.start_lon = 0.140267772771;
    msg.start_z = 0.944881650095;
    msg.start_z_units = 156U;
    msg.end_lat = 0.880835345229;
    msg.end_lon = 0.609703311994;
    msg.end_z = 0.51927653828;
    msg.end_z_units = 162U;
    msg.speed = 0.271560421176;
    msg.speed_units = 233U;
    msg.lradius = 0.0711783373434;
    msg.flags = 112U;

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
    msg.setTimeStamp(0.762235866784);
    msg.setSource(18936U);
    msg.setSourceEntity(160U);
    msg.setDestination(34788U);
    msg.setDestinationEntity(155U);
    msg.start_lat = 0.400276536386;
    msg.start_lon = 0.0179322960139;
    msg.start_z = 0.512678463572;
    msg.start_z_units = 70U;
    msg.end_lat = 0.00154690879719;
    msg.end_lon = 0.963639053555;
    msg.end_z = 0.720724673617;
    msg.end_z_units = 10U;
    msg.speed = 0.0938737161899;
    msg.speed_units = 31U;
    msg.lradius = 0.0696098802438;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.629287152628);
    msg.setSource(59127U);
    msg.setSourceEntity(140U);
    msg.setDestination(23122U);
    msg.setDestinationEntity(127U);
    msg.start_lat = 0.486192782281;
    msg.start_lon = 0.522074163994;
    msg.start_z = 0.0951627748338;
    msg.start_z_units = 31U;
    msg.end_lat = 0.202182836645;
    msg.end_lon = 0.832747463092;
    msg.end_z = 0.0283851794886;
    msg.end_z_units = 18U;
    msg.speed = 0.636653953561;
    msg.speed_units = 7U;
    msg.lradius = 0.609434469224;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.796121968539);
    msg.setSource(17252U);
    msg.setSourceEntity(97U);
    msg.setDestination(59237U);
    msg.setDestinationEntity(139U);
    msg.x = 0.531096779803;
    msg.y = 0.756992878432;
    msg.z = 0.703694647825;
    msg.k = 0.158686515968;
    msg.m = 0.427919533013;
    msg.n = 0.761991780663;
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
    msg.setTimeStamp(0.390867056996);
    msg.setSource(25161U);
    msg.setSourceEntity(157U);
    msg.setDestination(10052U);
    msg.setDestinationEntity(7U);
    msg.x = 0.041090548323;
    msg.y = 0.0812609806313;
    msg.z = 0.202272381839;
    msg.k = 0.744836010072;
    msg.m = 0.89841186154;
    msg.n = 0.849614867066;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.33675954189);
    msg.setSource(35058U);
    msg.setSourceEntity(107U);
    msg.setDestination(61851U);
    msg.setDestinationEntity(111U);
    msg.x = 0.496806655548;
    msg.y = 0.291361468428;
    msg.z = 0.728449984035;
    msg.k = 0.408715739536;
    msg.m = 0.336151285663;
    msg.n = 0.397345480733;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.266815897062);
    msg.setSource(20718U);
    msg.setSourceEntity(141U);
    msg.setDestination(21454U);
    msg.setDestinationEntity(190U);
    msg.value = 0.159784753877;

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
    msg.setTimeStamp(0.978178789476);
    msg.setSource(1713U);
    msg.setSourceEntity(56U);
    msg.setDestination(47481U);
    msg.setDestinationEntity(160U);
    msg.value = 0.455031213171;

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
    msg.setTimeStamp(0.602799218278);
    msg.setSource(42716U);
    msg.setSourceEntity(226U);
    msg.setDestination(16825U);
    msg.setDestinationEntity(93U);
    msg.value = 0.472942560326;

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
    msg.setTimeStamp(0.810110624775);
    msg.setSource(28788U);
    msg.setSourceEntity(45U);
    msg.setDestination(7776U);
    msg.setDestinationEntity(80U);
    msg.u = 0.652075748642;
    msg.v = 0.277962921137;
    msg.w = 0.257646577618;
    msg.p = 0.647579599505;
    msg.q = 0.602325352785;
    msg.r = 0.111649103102;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.551175632019);
    msg.setSource(43657U);
    msg.setSourceEntity(84U);
    msg.setDestination(42938U);
    msg.setDestinationEntity(72U);
    msg.u = 0.650509332445;
    msg.v = 0.884263937138;
    msg.w = 0.24568129997;
    msg.p = 0.87865520684;
    msg.q = 0.191989251086;
    msg.r = 0.163481358765;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.610746897778);
    msg.setSource(15694U);
    msg.setSourceEntity(250U);
    msg.setDestination(41705U);
    msg.setDestinationEntity(19U);
    msg.u = 0.388650865706;
    msg.v = 0.224316974433;
    msg.w = 0.679075679645;
    msg.p = 0.80791243286;
    msg.q = 0.874667532862;
    msg.r = 0.95537428177;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.0691079977199);
    msg.setSource(6310U);
    msg.setSourceEntity(106U);
    msg.setDestination(6686U);
    msg.setDestinationEntity(69U);
    msg.start_lat = 0.127363322296;
    msg.start_lon = 0.676648776231;
    msg.start_z = 0.880284778305;
    msg.start_z_units = 55U;
    msg.end_lat = 0.311825700622;
    msg.end_lon = 0.61178837453;
    msg.end_z = 0.43407024147;
    msg.end_z_units = 182U;
    msg.lradius = 0.364148664533;
    msg.flags = 153U;
    msg.x = 0.783807701028;
    msg.y = 0.514480577532;
    msg.z = 0.381063775334;
    msg.vx = 0.431019740706;
    msg.vy = 0.521551261742;
    msg.vz = 0.634925700323;
    msg.course_error = 0.786486701542;
    msg.eta = 39266U;

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
    msg.setTimeStamp(0.529659789901);
    msg.setSource(30898U);
    msg.setSourceEntity(209U);
    msg.setDestination(62117U);
    msg.setDestinationEntity(209U);
    msg.start_lat = 0.381397806007;
    msg.start_lon = 0.431955746672;
    msg.start_z = 0.675015396991;
    msg.start_z_units = 214U;
    msg.end_lat = 0.956256675654;
    msg.end_lon = 0.756779251558;
    msg.end_z = 0.469435903467;
    msg.end_z_units = 68U;
    msg.lradius = 0.0426080363202;
    msg.flags = 239U;
    msg.x = 0.66249536806;
    msg.y = 0.915734608172;
    msg.z = 0.98001293938;
    msg.vx = 0.651892436212;
    msg.vy = 0.579945776351;
    msg.vz = 0.520141260017;
    msg.course_error = 0.0213444944426;
    msg.eta = 46734U;

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
    msg.setTimeStamp(0.0150733374428);
    msg.setSource(64335U);
    msg.setSourceEntity(70U);
    msg.setDestination(42333U);
    msg.setDestinationEntity(237U);
    msg.start_lat = 0.935097368093;
    msg.start_lon = 0.576844255092;
    msg.start_z = 0.0496484672601;
    msg.start_z_units = 250U;
    msg.end_lat = 0.0680926080471;
    msg.end_lon = 0.839619524868;
    msg.end_z = 0.215458253272;
    msg.end_z_units = 13U;
    msg.lradius = 0.816319343693;
    msg.flags = 31U;
    msg.x = 0.747531809743;
    msg.y = 0.643440077345;
    msg.z = 0.395844623577;
    msg.vx = 0.381919210789;
    msg.vy = 0.191178903006;
    msg.vz = 0.690140370808;
    msg.course_error = 0.899585175545;
    msg.eta = 15938U;

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
    msg.setTimeStamp(0.26939198668);
    msg.setSource(17304U);
    msg.setSourceEntity(31U);
    msg.setDestination(12216U);
    msg.setDestinationEntity(250U);
    msg.k = 0.724561023469;
    msg.m = 0.481191427903;
    msg.n = 0.964781277176;

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
    msg.setTimeStamp(0.715809176385);
    msg.setSource(26645U);
    msg.setSourceEntity(99U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(159U);
    msg.k = 0.69759264434;
    msg.m = 0.841099023333;
    msg.n = 0.583700473578;

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
    msg.setTimeStamp(0.64573206047);
    msg.setSource(26167U);
    msg.setSourceEntity(65U);
    msg.setDestination(40314U);
    msg.setDestinationEntity(203U);
    msg.k = 0.99347663627;
    msg.m = 0.520132452983;
    msg.n = 0.992530572053;

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
    msg.setTimeStamp(0.869366328309);
    msg.setSource(152U);
    msg.setSourceEntity(28U);
    msg.setDestination(38742U);
    msg.setDestinationEntity(92U);
    msg.p = 0.190012820307;
    msg.i = 0.66690611278;
    msg.d = 0.427842887665;
    msg.a = 0.00661552387507;

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
    msg.setTimeStamp(0.953373017391);
    msg.setSource(39283U);
    msg.setSourceEntity(161U);
    msg.setDestination(51179U);
    msg.setDestinationEntity(172U);
    msg.p = 0.750765745252;
    msg.i = 0.0941501702345;
    msg.d = 0.123254336436;
    msg.a = 0.733338998341;

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
    msg.setTimeStamp(0.374571232208);
    msg.setSource(17962U);
    msg.setSourceEntity(140U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(101U);
    msg.p = 0.306425328655;
    msg.i = 0.296063048128;
    msg.d = 0.209935212119;
    msg.a = 0.354262663673;

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
    msg.setTimeStamp(0.71543915651);
    msg.setSource(13820U);
    msg.setSourceEntity(166U);
    msg.setDestination(21710U);
    msg.setDestinationEntity(143U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.45199758394);
    msg.setSource(5484U);
    msg.setSourceEntity(197U);
    msg.setDestination(8718U);
    msg.setDestinationEntity(225U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.623517871333);
    msg.setSource(52999U);
    msg.setSourceEntity(247U);
    msg.setDestination(60071U);
    msg.setDestinationEntity(99U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.122407649434);
    msg.setSource(15333U);
    msg.setSourceEntity(87U);
    msg.setDestination(8944U);
    msg.setDestinationEntity(247U);
    msg.timeout = 21142U;
    msg.lat = 0.215404318533;
    msg.lon = 0.182954482893;
    msg.z = 0.739871089459;
    msg.z_units = 191U;
    msg.speed = 0.0987046556453;
    msg.speed_units = 38U;
    msg.roll = 0.50754810298;
    msg.pitch = 0.954038126321;
    msg.yaw = 0.0374766427546;
    msg.custom.assign("OPYYTQUWLVHESTIKGAFLKSYWUYOZIPKDOECDTVQZJNNJJZBHEQNLRMRSSPYXUUOXYAMKILUIPVXWWVWLTGYDVBLXCHGRDXDCOIJANSOITJZFFRPPJSKWKHBOKNCGDPOZBFSSDCLZ");

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
    msg.setTimeStamp(0.238530675995);
    msg.setSource(32440U);
    msg.setSourceEntity(72U);
    msg.setDestination(58049U);
    msg.setDestinationEntity(119U);
    msg.timeout = 49167U;
    msg.lat = 0.599508089413;
    msg.lon = 0.550725214895;
    msg.z = 0.579520131393;
    msg.z_units = 103U;
    msg.speed = 0.583237655551;
    msg.speed_units = 155U;
    msg.roll = 0.744666205654;
    msg.pitch = 0.829935861261;
    msg.yaw = 0.493493987751;
    msg.custom.assign("AXIUGYALZRTTDCHRNAAGJXLGIBGEKOQWYHAPESYZFFNRDEIYMQIHJZIVUUHUVNQVWYQGSFOLHORTPTUXEDKGGZWWJZ");

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
    msg.setTimeStamp(0.609302065887);
    msg.setSource(13704U);
    msg.setSourceEntity(177U);
    msg.setDestination(30848U);
    msg.setDestinationEntity(180U);
    msg.timeout = 32030U;
    msg.lat = 0.449611907422;
    msg.lon = 0.878874077527;
    msg.z = 0.928039005712;
    msg.z_units = 38U;
    msg.speed = 0.0146988678462;
    msg.speed_units = 17U;
    msg.roll = 0.464736508467;
    msg.pitch = 0.0368794225008;
    msg.yaw = 0.585016413234;
    msg.custom.assign("WYNVEAULAHTYDFWFABZIFRPPCAQPTASFSXNLZHKHTFJFBUOMKYCIWBDSIBGVRKGWHJOMGECEKEDSKTYBICCADYNNDHEFVVYXDQFIGFGLJONTCHNLJWTUQOZTUEZAPXCOZOLVMQBJBCRJSIJRDEKKMPGCYPCWDNTOMIBZVIZGUJYMREPUWMGKQAXRNFQXLZSSQ");

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
    msg.setTimeStamp(0.282291286955);
    msg.setSource(39808U);
    msg.setSourceEntity(245U);
    msg.setDestination(3282U);
    msg.setDestinationEntity(20U);
    msg.timeout = 32832U;
    msg.lat = 0.80870484767;
    msg.lon = 0.164414661104;
    msg.z = 0.411652419782;
    msg.z_units = 223U;
    msg.speed = 0.932019245166;
    msg.speed_units = 245U;
    msg.duration = 8317U;
    msg.radius = 0.255055607726;
    msg.flags = 225U;
    msg.custom.assign("VKAYGRACLJGHCNFQLKWBZZJYQUIHABZZAULVEPRTAIPTBQLEBYDHMMEFGFQJILSRJXSXHKRJXTDJWV");

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
    msg.setTimeStamp(0.487300627989);
    msg.setSource(43232U);
    msg.setSourceEntity(169U);
    msg.setDestination(35918U);
    msg.setDestinationEntity(216U);
    msg.timeout = 24796U;
    msg.lat = 0.111510000454;
    msg.lon = 0.682056586333;
    msg.z = 0.276133516062;
    msg.z_units = 117U;
    msg.speed = 0.279011189252;
    msg.speed_units = 145U;
    msg.duration = 36982U;
    msg.radius = 0.80457790694;
    msg.flags = 50U;
    msg.custom.assign("DVRSRJKKKPNQFLIZYJFRPMHWPTTSJUZWYRXPBJKBWBTXGHVALOHWFVMGUNHPAJIGOLZXQRLMSUAXUWTVXQYMEEXSIKILMGIQSOPVZBKMULRHUDEFFFYKQFVCIBTTESNCUFHNCSWOHYANLZECWCNQAQZVOEYHSACSKOFINXRAYWJJZTKMEIWCBDXYZNVLJFPICKNMXOHABGDYTVRDQEAGJUTVPBLCDGRZUQISYZCMGD");

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
    msg.setTimeStamp(0.013090725053);
    msg.setSource(22495U);
    msg.setSourceEntity(239U);
    msg.setDestination(45089U);
    msg.setDestinationEntity(167U);
    msg.timeout = 19333U;
    msg.lat = 0.208395996028;
    msg.lon = 0.418866798888;
    msg.z = 0.901351579269;
    msg.z_units = 121U;
    msg.speed = 0.846693188276;
    msg.speed_units = 191U;
    msg.duration = 40956U;
    msg.radius = 0.219883753226;
    msg.flags = 104U;
    msg.custom.assign("PQLMWUOJNEXLDNGUCFVHIPELAMXNVPWGIHJZLZAMRYSQFYSJXQWXNZCRFJCTDPLZOKUVJNSPLHDSPVRCNWPGKRALFVIMTFOYHKPQJQZNTUZKZWYAMRTBLMISOBTUDREXGKSXDJMZARKTCAAAXOIGNDJDWEGJBIUQZEKDCUYYIEHLBRHNEQSAKFMHQXVVTFNGSWXDQSGOZFWPFTWBCXELHVMCUUYBVFBUI");

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
    msg.setTimeStamp(0.0708382323377);
    msg.setSource(43377U);
    msg.setSourceEntity(250U);
    msg.setDestination(57655U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("ZGHHEYLFPDIREZKIUDGIMPQUJFPUNEOUFDPCCWRTQIFJVZHCKOUOTOXMJOHSJXJSAOQXDSVTUXFGAUBCFIQSWH");

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
    msg.setTimeStamp(0.947366283848);
    msg.setSource(16607U);
    msg.setSourceEntity(73U);
    msg.setDestination(63679U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("GYVRXXSBTQVXNPGFTYWGKVOAFETXHRCDLKAOFYGNMINPPYEOCSYLDLMHQNBXFOESBUMQOHBHTZNUZVWQBJHCFPGAMACCGIDRKOWIREBPFTXUVLJBMRVCWFWYKOTQSXAOSNWIMCZNBHJPGKMEEMEZMDTJLNKZL");

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
    msg.setTimeStamp(0.458936344722);
    msg.setSource(51670U);
    msg.setSourceEntity(238U);
    msg.setDestination(46544U);
    msg.setDestinationEntity(227U);
    msg.custom.assign("TFHGZNCMZDYTSAIVNTDETDBHFPARIIDQKOGUCMIHJPUZDWVOZJQWMVNEMXSWAUNZXQQBTYOJIJFPGGTZQXMGWUVNLLJNXVIERZDSKCBRLVDSKAFFHYXUUCMPLCWOPNEHDRPRHUBSYBOPGMLEBCKLWWQBJDERNJP");

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
    msg.setTimeStamp(0.187946731924);
    msg.setSource(65525U);
    msg.setSourceEntity(141U);
    msg.setDestination(51552U);
    msg.setDestinationEntity(197U);
    msg.timeout = 48607U;
    msg.lat = 0.368340132073;
    msg.lon = 0.464901914678;
    msg.z = 0.110929855119;
    msg.z_units = 59U;
    msg.duration = 32451U;
    msg.speed = 0.735220484639;
    msg.speed_units = 73U;
    msg.type = 223U;
    msg.radius = 0.790936820108;
    msg.length = 0.590747045988;
    msg.bearing = 0.600173479577;
    msg.direction = 115U;
    msg.custom.assign("XADSRRUVZLNTSUQFXZJOICIYVEQBRSDCEMFVIJDWOYNSWPCUYGYTEPYDTJOKBFCYEJMQAJNHHYZQOMYFANSPKIUPTLOKZKDRHKUUKBMKTABEPILETSVXECMUMYXUPGLGRBARRLZJLGCCBDAUDSHOLXVPMQHZSXRBWHGELAEBGFKHKGGDINVACWXTXVWFCNFZNINWEWSAFBWAXGCSQTZUTPJQDTWVHZNRVP");

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
    msg.setTimeStamp(0.269938411823);
    msg.setSource(43251U);
    msg.setSourceEntity(45U);
    msg.setDestination(32702U);
    msg.setDestinationEntity(61U);
    msg.timeout = 6316U;
    msg.lat = 0.671048507097;
    msg.lon = 0.489147492108;
    msg.z = 0.297241229968;
    msg.z_units = 200U;
    msg.duration = 11455U;
    msg.speed = 0.520142232144;
    msg.speed_units = 28U;
    msg.type = 107U;
    msg.radius = 0.539792777108;
    msg.length = 0.70639175367;
    msg.bearing = 0.573628410385;
    msg.direction = 203U;
    msg.custom.assign("AFETQFIQUBWYRIFSGXGCOZJNHHSSVDQOPCICODDHIYVKEKXHUTUMKXGPTKDTGCRCR");

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
    msg.setTimeStamp(0.746566630619);
    msg.setSource(44060U);
    msg.setSourceEntity(208U);
    msg.setDestination(54084U);
    msg.setDestinationEntity(237U);
    msg.timeout = 49183U;
    msg.lat = 0.0456401484366;
    msg.lon = 0.644415028275;
    msg.z = 0.651716557412;
    msg.z_units = 5U;
    msg.duration = 53324U;
    msg.speed = 0.00270041431249;
    msg.speed_units = 111U;
    msg.type = 55U;
    msg.radius = 0.911198227419;
    msg.length = 0.753371154359;
    msg.bearing = 0.718046066111;
    msg.direction = 235U;
    msg.custom.assign("QQWQKREXWPYYLTWYUBATQJMBABLIRLOOEOHIRJJOXNIQMWADMJGEUPUHHZXPCSRDTGWOEBMFZSIKCGCKBVOJBSZPVFLYLVGM");

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
    msg.setTimeStamp(0.793290810845);
    msg.setSource(39753U);
    msg.setSourceEntity(28U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(94U);
    msg.duration = 24308U;
    msg.custom.assign("WFYDJCTGBRQDKLMITSXLAPARNTSCEJPHWPCADPSACNCALZKWPQTXMQHLOSFGRKZDXQEWWUGSWVRCRMFPNFDIEWPGIJEYUMKRBXWRQODUOVBOUTHYZZHMZGALJIAQSHIGXTFLQPMKDVFJWQ");

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
    msg.setTimeStamp(0.115303726817);
    msg.setSource(4120U);
    msg.setSourceEntity(49U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(101U);
    msg.duration = 7941U;
    msg.custom.assign("ZNYZWSWRFYBBQ");

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
    msg.setTimeStamp(0.538248197534);
    msg.setSource(36724U);
    msg.setSourceEntity(171U);
    msg.setDestination(44665U);
    msg.setDestinationEntity(2U);
    msg.duration = 61448U;
    msg.custom.assign("HKCEVDRPMPIKTGXHTFXOJCRNGMHBSYEOVDFOYJIQHRLETKKOWUJUCBGRMKIGZZHHXWKWAEAWCFJBVAXXMSZDGGZIEYBWNZMDQBYSPGVHZQIWPQWSDHOVQUARJTNCNYMMDPGLLLKAJZPTPXVRTRQSKGOWYCFTOEIVQAREZUBUUWOFLFPJIAMFCNJQVNTSDSFQEU");

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
    msg.setTimeStamp(0.549597806967);
    msg.setSource(61185U);
    msg.setSourceEntity(132U);
    msg.setDestination(28997U);
    msg.setDestinationEntity(156U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.474660138652;
    msg.control.set(tmp_msg_0);
    msg.duration = 64319U;
    msg.custom.assign("MVBLENACPWDEIYRYUWIBYQGEHJKFVJSSPLXSNHYGAACNXQTCSXFWFIDZFDRIPEMTLIAHOKRVEXARNOHDZNTXZWSGQYBYKPFIIWFRTOPQVQBVEUWGGYZVCUDMEIRIOBKJJCHALMQORGZUEYZZLJTTEJCVKXHBPWWNVGGN");

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
    msg.setTimeStamp(0.224186804873);
    msg.setSource(63901U);
    msg.setSourceEntity(174U);
    msg.setDestination(62539U);
    msg.setDestinationEntity(64U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.21270885819;
    tmp_msg_0.speed_units = 221U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50580U;
    msg.custom.assign("DDVZSYHZGXSWWCTJSVHYDCSMOJNAQAIVUYOOQYQWNAGYVKTWJKKHOKTKLGBUMDFHQSWPNKSLCIZANCJZBUBOTYA");

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
    msg.setTimeStamp(0.508712240689);
    msg.setSource(41511U);
    msg.setSourceEntity(74U);
    msg.setDestination(9403U);
    msg.setDestinationEntity(5U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.439506661147;
    msg.control.set(tmp_msg_0);
    msg.duration = 29637U;
    msg.custom.assign("GJUUPMJLWDURUXQCRGZUJHFCRKVQMCKDLQKYUYVGNTKJXHKTAFLSTVIISWAHFMAEXSPBSBUSZDENAWGGTODPKRZECGOQSBVOMIFLOSTRE");

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
    msg.setTimeStamp(0.103802225598);
    msg.setSource(33113U);
    msg.setSourceEntity(21U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(72U);
    msg.timeout = 56546U;
    msg.lat = 0.570300794168;
    msg.lon = 0.211424391279;
    msg.z = 0.288361207959;
    msg.z_units = 125U;
    msg.speed = 0.0722488655339;
    msg.speed_units = 219U;
    msg.bearing = 0.955723490596;
    msg.cross_angle = 0.819651683495;
    msg.width = 0.516700485207;
    msg.length = 0.197489348398;
    msg.hstep = 0.677319207374;
    msg.coff = 150U;
    msg.alternation = 121U;
    msg.flags = 169U;
    msg.custom.assign("UNLLFJZMYMNHLSYCDELJSBCERBCYDEGEMZZUEYSBMCRGRFBYGXXIVWTYVSFATBCXYJYOFCQWIAZXXZQRZWQSSVGZPGPDTDKCXIEEAVJMGHELLWZWVOTOMHKRBGDVYJPHKOAWACDGUIVSFNWGKVTHOKKAICLYQSTVZPAEOJNTKXJKUQSOJRRFGWZPNOPHRKNIBDMQMW");

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
    msg.setTimeStamp(0.992431296475);
    msg.setSource(25205U);
    msg.setSourceEntity(235U);
    msg.setDestination(29961U);
    msg.setDestinationEntity(231U);
    msg.timeout = 59605U;
    msg.lat = 0.183241583493;
    msg.lon = 0.191760101787;
    msg.z = 0.698429852657;
    msg.z_units = 243U;
    msg.speed = 0.0346775765875;
    msg.speed_units = 176U;
    msg.bearing = 0.948831641738;
    msg.cross_angle = 0.759398967943;
    msg.width = 0.592595867101;
    msg.length = 0.207452933185;
    msg.hstep = 0.0368898819293;
    msg.coff = 82U;
    msg.alternation = 244U;
    msg.flags = 59U;
    msg.custom.assign("XCLFSFJHLDCZLPAANXLEOBQHNPHYPMEGEWBSCJYQWSQOOPTIXAMNKMZZASUNELVZUOJNKEKQESIGMRPGVOFTGERNMJXUKFSYGJAMNZHFDERLEBVKYDZAMWLETIRDYZCTVQFCLRTQWGKJVBBRBKITRTJTQHCUYDVXDNB");

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
    msg.setTimeStamp(0.64229585274);
    msg.setSource(32199U);
    msg.setSourceEntity(15U);
    msg.setDestination(21436U);
    msg.setDestinationEntity(37U);
    msg.timeout = 8252U;
    msg.lat = 0.0499768263354;
    msg.lon = 0.791996440635;
    msg.z = 0.55964399453;
    msg.z_units = 136U;
    msg.speed = 0.68775476854;
    msg.speed_units = 135U;
    msg.bearing = 0.855558385707;
    msg.cross_angle = 0.819078318147;
    msg.width = 0.553172238672;
    msg.length = 0.144788888251;
    msg.hstep = 0.831038409375;
    msg.coff = 109U;
    msg.alternation = 199U;
    msg.flags = 23U;
    msg.custom.assign("SMVVNMPGUIRIAZHHGHJBUDFBOHPOTEWAAMXQTCXOEPNIHHOILKBSBTJDAOMZJZRGZIBUEGGYAZFZDUUOTDFTOCKFKQNZTDDBYQWVJDARELSOEKQTYQIBWESRYHMWVMFWSQMILPCRL");

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
    msg.setTimeStamp(0.418221509755);
    msg.setSource(45322U);
    msg.setSourceEntity(120U);
    msg.setDestination(46819U);
    msg.setDestinationEntity(172U);
    msg.timeout = 4136U;
    msg.lat = 0.813263266836;
    msg.lon = 0.0892357276194;
    msg.z = 0.251051817595;
    msg.z_units = 98U;
    msg.speed = 0.041416554512;
    msg.speed_units = 188U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.333300131708;
    tmp_msg_0.y = 0.487187103979;
    tmp_msg_0.z = 0.406358985718;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AUIJSRJPIEWPWOREVMYMHVWFDSXYJDNTLYFYGDGCULLPZKGEQNJMODQNQYGAZSXRJUIFUMMYBFPUSNXKLXGFCRBVNKKOEVALLWSSIOSQEFBUGSZINRVIHUBJCWAASRTTHLGKDJZXCOZPKQRLQSZFWNQEZCTXOUBHGMXTCHDDWYBNUEGOKTOHPRFAAWPYMEXTBTVXMXDVLERADYVNZQBAGJCTYKHKPVTAHWNIMHEJROBOPICLIP");

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
    msg.setTimeStamp(0.597464613353);
    msg.setSource(54747U);
    msg.setSourceEntity(83U);
    msg.setDestination(37763U);
    msg.setDestinationEntity(108U);
    msg.timeout = 56113U;
    msg.lat = 0.514007587443;
    msg.lon = 0.762916926508;
    msg.z = 0.184471949538;
    msg.z_units = 30U;
    msg.speed = 0.292089575336;
    msg.speed_units = 215U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.581264780962;
    tmp_msg_0.y = 0.802664827501;
    tmp_msg_0.z = 0.799554543961;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QJNZLKXDJMBERDSBBHUSLQJDSJDXABCZVHJDOQBTUWTVJXOWGIQNAMRKDUOIEYIZMWCWHNUZEHITHLBEHSWKZPWASRXDARPFEPIMVAPFNLPMKUOGFORVEFOFTCFBNCHPMUYQCICLYWGUXOTUGGPFSSCOS");

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
    msg.setTimeStamp(0.91002034615);
    msg.setSource(44093U);
    msg.setSourceEntity(178U);
    msg.setDestination(43837U);
    msg.setDestinationEntity(39U);
    msg.timeout = 65146U;
    msg.lat = 0.811189366616;
    msg.lon = 0.912128000977;
    msg.z = 0.599311090795;
    msg.z_units = 90U;
    msg.speed = 0.79855925206;
    msg.speed_units = 222U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.431563662762;
    tmp_msg_0.y = 0.449455283673;
    tmp_msg_0.z = 0.0938035630655;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TSPYIWJCTVCNSELCGQLIZHIQECTYHDCFSROWABVWXMDJFADSOBXEONNLVLZJHCUADXVOUUS");

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
    msg.setTimeStamp(0.12737557449);
    msg.setSource(40444U);
    msg.setSourceEntity(85U);
    msg.setDestination(6173U);
    msg.setDestinationEntity(120U);
    msg.x = 0.447291957948;
    msg.y = 0.619661655706;
    msg.z = 0.101834056458;

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
    msg.setTimeStamp(0.0720689713535);
    msg.setSource(30861U);
    msg.setSourceEntity(221U);
    msg.setDestination(56463U);
    msg.setDestinationEntity(251U);
    msg.x = 0.941129679266;
    msg.y = 0.189504279017;
    msg.z = 0.929012393272;

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
    msg.setTimeStamp(0.421525905648);
    msg.setSource(56633U);
    msg.setSourceEntity(176U);
    msg.setDestination(43246U);
    msg.setDestinationEntity(52U);
    msg.x = 0.0978174380763;
    msg.y = 0.590961055832;
    msg.z = 0.57387296155;

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
    msg.setTimeStamp(0.461520185135);
    msg.setSource(21916U);
    msg.setSourceEntity(244U);
    msg.setDestination(62986U);
    msg.setDestinationEntity(66U);
    msg.timeout = 5361U;
    msg.lat = 0.0540427561105;
    msg.lon = 0.352296600942;
    msg.z = 0.21528816908;
    msg.z_units = 6U;
    msg.amplitude = 0.330932915801;
    msg.pitch = 0.900023404125;
    msg.speed = 0.275210140606;
    msg.speed_units = 141U;
    msg.custom.assign("JDAALTWHNXDWELZLKAQWCSKDFNIIJLKTIXWCCOEQGIFSCENMTUVMLSGUNXCOBPIWVXRNGFBHLJPKEOEFADHKYMQYZYRMENPOJLWUGQBJIVEOUXPXDFOCSAHPXPRDHPSJZYIXVRFHHQS");

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
    msg.setTimeStamp(0.357383114986);
    msg.setSource(37957U);
    msg.setSourceEntity(111U);
    msg.setDestination(38870U);
    msg.setDestinationEntity(159U);
    msg.timeout = 30473U;
    msg.lat = 0.152779093907;
    msg.lon = 0.994023428967;
    msg.z = 0.468825295685;
    msg.z_units = 105U;
    msg.amplitude = 0.221028960228;
    msg.pitch = 0.247169517995;
    msg.speed = 0.401083534509;
    msg.speed_units = 80U;
    msg.custom.assign("GSOZHDRAMJTGFDBNDPLPEQPSTCYOEHRENVCHMUKRKLSBXTAORFWSNLIZTHMTWNICBVZXQKZLCMYXADSSOEYANLHMARXUS");

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
    msg.setTimeStamp(0.696649039373);
    msg.setSource(63315U);
    msg.setSourceEntity(129U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(208U);
    msg.timeout = 35283U;
    msg.lat = 0.481079215718;
    msg.lon = 0.433155975226;
    msg.z = 0.558318301156;
    msg.z_units = 110U;
    msg.amplitude = 0.649851505616;
    msg.pitch = 0.590502120451;
    msg.speed = 0.721522179305;
    msg.speed_units = 52U;
    msg.custom.assign("QODYVQCHBLOSWCXCRREPXXUGSWHJFTZCSGLYB");

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
    msg.setTimeStamp(0.0157706542308);
    msg.setSource(17103U);
    msg.setSourceEntity(183U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.0367173382412);
    msg.setSource(25409U);
    msg.setSourceEntity(133U);
    msg.setDestination(62626U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.432522862014);
    msg.setSource(10836U);
    msg.setSourceEntity(23U);
    msg.setDestination(59189U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.374807354871);
    msg.setSource(24132U);
    msg.setSourceEntity(41U);
    msg.setDestination(70U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.0761036232821;
    msg.lon = 0.750323783775;
    msg.z = 0.964815903254;
    msg.z_units = 101U;
    msg.radius = 0.939078280095;
    msg.duration = 28562U;
    msg.speed = 0.578589930922;
    msg.speed_units = 94U;
    msg.custom.assign("RZDJFGSLOAJNYVAZUVSTNKEKJXZUQYBQJFJDGYPWRVSSMAUDQRGZBCBTKCOIJDSWNOEZMWFYFKOJ");

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
    msg.setTimeStamp(0.108021993348);
    msg.setSource(41588U);
    msg.setSourceEntity(103U);
    msg.setDestination(3958U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.0422430707723;
    msg.lon = 0.25521186634;
    msg.z = 0.594602203169;
    msg.z_units = 59U;
    msg.radius = 0.366786522724;
    msg.duration = 4767U;
    msg.speed = 0.864179541988;
    msg.speed_units = 169U;
    msg.custom.assign("LWUOGDQBVHKCIQKXGNISSFLCSXFXAOEHJYVDTYM");

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
    msg.setTimeStamp(0.146975391535);
    msg.setSource(30769U);
    msg.setSourceEntity(229U);
    msg.setDestination(24020U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.561893313682;
    msg.lon = 0.0161005476492;
    msg.z = 0.227214327203;
    msg.z_units = 131U;
    msg.radius = 0.726870571973;
    msg.duration = 34749U;
    msg.speed = 0.20851457828;
    msg.speed_units = 152U;
    msg.custom.assign("SBNUYNEIJTDYMTDJMRMUIEENNPKITSJANWTWFXGKISQJXYGVPHJUUHIEZDUJEHXWYBRBVCMLUTWJMDXJHZGSVOZRLVCZCXFFPDFDKABOCFQEKSRBYATEGJGNTGAOKPCOZKVHZYOZLSYQRQLDVHLBCYWIUMCZIAIHCVMVGYWQFUMJZXZQDXMAWNEHLPBAFQOBWRXIQKWIHXNGTBPAARXFMCSOFQ");

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
    msg.setTimeStamp(0.407569244011);
    msg.setSource(64612U);
    msg.setSourceEntity(152U);
    msg.setDestination(59322U);
    msg.setDestinationEntity(235U);
    msg.timeout = 45264U;
    msg.flags = 241U;
    msg.lat = 0.791198693849;
    msg.lon = 0.171425739944;
    msg.start_z = 0.419215874968;
    msg.start_z_units = 161U;
    msg.end_z = 0.514265775817;
    msg.end_z_units = 114U;
    msg.radius = 0.275789265356;
    msg.speed = 0.822986201991;
    msg.speed_units = 129U;
    msg.custom.assign("QFIHOEOFJGAZPAFGKIECPRAIBIVUUXDMRGVFFTBCPTBRDDSNIMESWDJJKBVYLZQCQCWJGHAPVIQWXFSRVRNGCKYWVXWSZLKALYQIBBSAMFQTUHNUHZLFGZODUJHSPYTWSBOWLYLZRCNUTOTLTULXHK");

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
    msg.setTimeStamp(0.44161601159);
    msg.setSource(51116U);
    msg.setSourceEntity(97U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(175U);
    msg.timeout = 7559U;
    msg.flags = 51U;
    msg.lat = 0.662881679908;
    msg.lon = 0.563843358585;
    msg.start_z = 0.797080527605;
    msg.start_z_units = 205U;
    msg.end_z = 0.41462126603;
    msg.end_z_units = 223U;
    msg.radius = 0.132246628399;
    msg.speed = 0.649590504956;
    msg.speed_units = 100U;
    msg.custom.assign("CKPEPBJMDZMZIWCDQOUWFXKCXTRBCKSZNVGTNVSZNMZECENMHPMSIBXDWQVFLTNLPQABOZPLFEDZEHDWWLUIHAYWQGVTSVJRPJEPTRULGXJBTOIKBFYKHNPWXGVUBIKSFJAMCVHQOYLACQJMMORXVXECLCFAUUGOEKRAMIHSGNFUQGSLNYIYXACKTF");

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
    msg.setTimeStamp(0.13032938843);
    msg.setSource(52887U);
    msg.setSourceEntity(117U);
    msg.setDestination(49850U);
    msg.setDestinationEntity(250U);
    msg.timeout = 8126U;
    msg.flags = 18U;
    msg.lat = 0.397029474328;
    msg.lon = 0.370136341098;
    msg.start_z = 0.180502070614;
    msg.start_z_units = 190U;
    msg.end_z = 0.713983195788;
    msg.end_z_units = 107U;
    msg.radius = 0.474962293807;
    msg.speed = 0.0420188756995;
    msg.speed_units = 41U;
    msg.custom.assign("ZRAFSBTUJWNFAFVKNQEDPDLVWYCUOAKSIMQAFLHFYALENDKGQYBVPCG");

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
    msg.setTimeStamp(0.433547174125);
    msg.setSource(31680U);
    msg.setSourceEntity(173U);
    msg.setDestination(56303U);
    msg.setDestinationEntity(180U);
    msg.timeout = 37708U;
    msg.lat = 0.477070007076;
    msg.lon = 0.232477627265;
    msg.z = 0.77480811336;
    msg.z_units = 57U;
    msg.speed = 0.0609627888275;
    msg.speed_units = 204U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.252000059461;
    tmp_msg_0.y = 0.780739772391;
    tmp_msg_0.z = 0.723818319152;
    tmp_msg_0.t = 0.532881835598;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OEGQRTMXKLOAMHTLINBHQMBEWPWBBTTISXCJYQTSLQQHKFSIRPHUAECRKKXPYTRVOIOZQCLFYZAPFZRGWLRIXIGGPIUJUEZHHNSNOQ");

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
    msg.setTimeStamp(0.0280962078783);
    msg.setSource(37394U);
    msg.setSourceEntity(90U);
    msg.setDestination(38124U);
    msg.setDestinationEntity(209U);
    msg.timeout = 3849U;
    msg.lat = 0.235642124224;
    msg.lon = 0.414922712345;
    msg.z = 0.257973289742;
    msg.z_units = 211U;
    msg.speed = 0.536213223023;
    msg.speed_units = 146U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.237577176849;
    tmp_msg_0.y = 0.587144856608;
    tmp_msg_0.z = 0.206626142335;
    tmp_msg_0.t = 0.854967009816;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BEVOVFUXQGIMRZATWEPAIIDJGWACHTIHXJSNIQUZZNKAEHYZRNAMOVWLYR");

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
    msg.setTimeStamp(0.750755803573);
    msg.setSource(2380U);
    msg.setSourceEntity(154U);
    msg.setDestination(38677U);
    msg.setDestinationEntity(94U);
    msg.timeout = 3349U;
    msg.lat = 0.906622061519;
    msg.lon = 0.100773948325;
    msg.z = 0.912550916469;
    msg.z_units = 28U;
    msg.speed = 0.434762148541;
    msg.speed_units = 244U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0880336178101;
    tmp_msg_0.y = 0.420139268518;
    tmp_msg_0.z = 0.889871457812;
    tmp_msg_0.t = 0.955797298763;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EAEWKADRZEGDTYIOIBMXWYWECUEBZHSKDWJWBVJJMOEXNCVUUESCRPVQSKXDXYM");

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
    msg.setTimeStamp(0.258927759322);
    msg.setSource(40483U);
    msg.setSourceEntity(130U);
    msg.setDestination(12595U);
    msg.setDestinationEntity(78U);
    msg.x = 0.617187179967;
    msg.y = 0.311605672278;
    msg.z = 0.116810832273;
    msg.t = 0.179582282207;

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
    msg.setTimeStamp(0.177531998034);
    msg.setSource(31650U);
    msg.setSourceEntity(99U);
    msg.setDestination(63308U);
    msg.setDestinationEntity(47U);
    msg.x = 0.601411998203;
    msg.y = 0.626247566517;
    msg.z = 0.463123981498;
    msg.t = 0.50250048701;

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
    msg.setTimeStamp(0.361555072398);
    msg.setSource(9477U);
    msg.setSourceEntity(251U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(110U);
    msg.x = 0.795461176384;
    msg.y = 0.929394597862;
    msg.z = 0.600494267029;
    msg.t = 0.807368838704;

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
    msg.setTimeStamp(0.614866657392);
    msg.setSource(1159U);
    msg.setSourceEntity(248U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(187U);
    msg.timeout = 27154U;
    msg.name.assign("JVOEBTLFGDBDIIKLHCMORBHCO");
    msg.custom.assign("WENHPAXEQUPYVJROKZHCPZWFTCXHZTECFYBVIXUXOSBHUBGMRUBWVEPSSRDVWYKQLMPJBTXNYQGGCFLNA");

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
    msg.setTimeStamp(0.182547608835);
    msg.setSource(64391U);
    msg.setSourceEntity(175U);
    msg.setDestination(58472U);
    msg.setDestinationEntity(205U);
    msg.timeout = 47447U;
    msg.name.assign("LECDLJUFOBZWSYJOISPPYZXNERIZDNFYXYFWCUANDWRLBNZEEMSSRGGGMIZVBSYEMVOHLJHXSAUCJNIGVQMUKATAPCIOOLJSOPNOQKKZIMIWCTTUNWBKUCDALETWSBZTJKVVHMTHARQBLJGERAFEMGDZXUFUDHIFFJVWXQYWGCQVVTKDQQLFCOXTOMUDASYRECAXWXOLDGPHHBZGKZNPJXKB");
    msg.custom.assign("ZXZJJDAYPRRDONZBNVFXICOCWZZQUYIYXYFWTMRHJFOZPCNAFNCEDLHHJXYGGSSXQLZAUTBWDTIKBPGQDWMQWKCFVCANSYABKRIAMMMKKGMQXFXELQTOONQWAPRURHTEGQSPPXACEYNLYUVHPKGBOWZLPVBSOIDSZ");

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
    msg.setTimeStamp(0.409806679182);
    msg.setSource(10588U);
    msg.setSourceEntity(96U);
    msg.setDestination(11343U);
    msg.setDestinationEntity(229U);
    msg.timeout = 59459U;
    msg.name.assign("DQQABZAIAADTGKKVCXWAMUYFZCCOHHAUWDMEWLTGOPJOLFOBHMEIHOKRSVTOQGXIRPQENJENXKYBCPWUBBLWGSYVZVCQRQMXRZVWJXRVNOIGJRLWMCKPJBALVVDGXBSFKUURICHNJYXJDPGMZEUTDZZDKOTXCRMJDXIOWISZLWPZRRQFXTJSFUOEPQMLHDTDKEYCENYPHAZK");
    msg.custom.assign("NTQLLOZDYWZISHOTESDWCOTAIJGOHHALXUDGPPRKBHILVEDRPGWMKGGHNJBMQENYYFWGZNNYXQPNWCOYMORZDNFZABZWNSNUEXOBQDEZVTCLHQSADSJBVLXBDUACYLRFJIHRRMFXEKFUFLBHZKAGICRQPAFAVZYSXKXMLABWMJXRTVVPTGPUHMIOUCGAKESTIXUSTFS");

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
    msg.setTimeStamp(0.840488491707);
    msg.setSource(50393U);
    msg.setSourceEntity(207U);
    msg.setDestination(54366U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.129687379345;
    msg.lon = 0.188324897909;
    msg.z = 0.709232433452;
    msg.z_units = 37U;
    msg.speed = 0.556840244722;
    msg.speed_units = 229U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.511743957244;
    tmp_msg_0.y = 0.786273267739;
    tmp_msg_0.z = 0.263483268996;
    tmp_msg_0.t = 0.698871716804;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 723U;
    tmp_msg_1.off_x = 0.601253041813;
    tmp_msg_1.off_y = 0.205034764413;
    tmp_msg_1.off_z = 0.686729101565;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.764451609918;
    msg.custom.assign("MYBJRZMVVKEFZALQQSNLBBJOTTUGHLGIXQPGTMMJDRO");

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
    msg.setTimeStamp(0.905219381446);
    msg.setSource(49704U);
    msg.setSourceEntity(85U);
    msg.setDestination(31812U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.443295208195;
    msg.lon = 0.757582838139;
    msg.z = 0.86206031384;
    msg.z_units = 243U;
    msg.speed = 0.597788261511;
    msg.speed_units = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56045U;
    tmp_msg_0.off_x = 0.600340520204;
    tmp_msg_0.off_y = 0.523381709981;
    tmp_msg_0.off_z = 0.996633974835;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.225488331821;
    msg.custom.assign("VHMZOWDPFQOUPQXXSMHCVGRKSBAQDQXCDWWJYSOJZMITOOZGGDTXNFLGLOAJKIYJLAXYRBQXIUDSFLRNAMQTFLRJKVWYOPMTWAECWYWSIZYQDNZHCRBIRCKIAUNDYARHZHCXNAABETYRWRTLMYPIVFPQPZKFGTGKXEVQINIENVDZWLZXNTBMETAEMCP");

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
    msg.setTimeStamp(0.371090972811);
    msg.setSource(39001U);
    msg.setSourceEntity(180U);
    msg.setDestination(17999U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.959900017156;
    msg.lon = 0.716701151482;
    msg.z = 0.131508551647;
    msg.z_units = 100U;
    msg.speed = 0.439010707496;
    msg.speed_units = 242U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.555681380154;
    tmp_msg_0.y = 0.00199434834716;
    tmp_msg_0.z = 0.125144192346;
    tmp_msg_0.t = 0.336552253052;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 4485U;
    tmp_msg_1.off_x = 0.921128631036;
    tmp_msg_1.off_y = 0.906575229389;
    tmp_msg_1.off_z = 0.294145696095;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0562103423032;
    msg.custom.assign("WFHJZKVOACZGKXFLGMRDOROKWKLHTGNSWHBEDTTVIWUPTK");

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
    msg.setTimeStamp(0.148703783265);
    msg.setSource(10653U);
    msg.setSourceEntity(155U);
    msg.setDestination(1280U);
    msg.setDestinationEntity(110U);
    msg.vid = 61564U;
    msg.off_x = 0.646661066879;
    msg.off_y = 0.861032442056;
    msg.off_z = 0.313061783355;

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
    msg.setTimeStamp(0.369178135769);
    msg.setSource(11506U);
    msg.setSourceEntity(28U);
    msg.setDestination(14376U);
    msg.setDestinationEntity(99U);
    msg.vid = 4526U;
    msg.off_x = 0.0298823778574;
    msg.off_y = 0.55888046385;
    msg.off_z = 0.167468807372;

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
    msg.setTimeStamp(0.176001790875);
    msg.setSource(20515U);
    msg.setSourceEntity(233U);
    msg.setDestination(48806U);
    msg.setDestinationEntity(61U);
    msg.vid = 43416U;
    msg.off_x = 0.0892139737497;
    msg.off_y = 0.952637855392;
    msg.off_z = 0.0368194645743;

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
    msg.setTimeStamp(0.139803772657);
    msg.setSource(53574U);
    msg.setSourceEntity(82U);
    msg.setDestination(60569U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.408043387913);
    msg.setSource(5747U);
    msg.setSourceEntity(107U);
    msg.setDestination(63872U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.967358895879);
    msg.setSource(18978U);
    msg.setSourceEntity(183U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.975324424049);
    msg.setSource(997U);
    msg.setSourceEntity(230U);
    msg.setDestination(62931U);
    msg.setDestinationEntity(148U);
    msg.mid = 54944U;

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
    msg.setTimeStamp(0.275822235524);
    msg.setSource(53956U);
    msg.setSourceEntity(30U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(37U);
    msg.mid = 6719U;

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
    msg.setTimeStamp(0.592654847863);
    msg.setSource(23517U);
    msg.setSourceEntity(209U);
    msg.setDestination(63536U);
    msg.setDestinationEntity(10U);
    msg.mid = 22044U;

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
    msg.setTimeStamp(0.790365836546);
    msg.setSource(55071U);
    msg.setSourceEntity(83U);
    msg.setDestination(16129U);
    msg.setDestinationEntity(102U);
    msg.state = 91U;
    msg.eta = 11536U;
    msg.info.assign("QPNTKSVRKZEPUPYTSCPQXDUFSIGTAAUBLBJQTRLQGINEGLFPBQKEQNXUBZYOIXUXXVMJFVHYUNRPZSMBSRBCDSFIGPHLFYNCGYTALCWSVWVONREFLBNYJFIDKITJOTOUCRMOVJRUIRXOMEYVAXMZBRPHKVGHLCOHQWQLQPJWJMBRDMTMNWDGDHXGV");

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
    msg.setTimeStamp(0.324334512805);
    msg.setSource(48953U);
    msg.setSourceEntity(177U);
    msg.setDestination(35419U);
    msg.setDestinationEntity(214U);
    msg.state = 3U;
    msg.eta = 2304U;
    msg.info.assign("YLLDIOPBQBTRBYLBEZPDDKINSDVVNHIPTXLCZGUQNVUBGWCTCFJVEPFOMKSXEVRLRMOFDNAVWFZZMUCTXKNADCJYUVSTLXWOQMJEUQNSUUEQBRWYFFKJQTKGPTXGLDBTAFHEJLKIOSYAHRYHFGUPZTRKICHHZUQIAMWOZCFQAVXHWMKXQZFVPOEXLWWIONEZNGANPAPCISIGDJBYNGSGBWZCRGJRJMVHXYKOJYIASY");

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
    msg.setTimeStamp(0.90586151324);
    msg.setSource(27333U);
    msg.setSourceEntity(142U);
    msg.setDestination(39193U);
    msg.setDestinationEntity(50U);
    msg.state = 236U;
    msg.eta = 36251U;
    msg.info.assign("NFLXNMPFSLJOZZXUCIBWZLJHRTJIFIUPIGKERQBNJFJBWWBUSRLXWMXTCMWQVIQRMHPDORDJEUZKANSDFVVNLTTEEEYAMYGCVPHMKSZAROWNAVLGESUVXACIBSNTDGLOUFYLHAQAAKVFCCOTXPQIMAROCSCMEQCBKXBPIFHBGTOPTRUWEZHLDYDDWTHJJWGFEHLGMXZKZVRXQBUXZOHSNQJMGPEUYKJKQUGWGYKYTHFIPVPDDKSYVYN");

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
    msg.setTimeStamp(0.531121579371);
    msg.setSource(24178U);
    msg.setSourceEntity(237U);
    msg.setDestination(36091U);
    msg.setDestinationEntity(163U);
    msg.system = 23808U;
    msg.duration = 55080U;
    msg.speed = 0.882460504382;
    msg.speed_units = 150U;
    msg.x = 0.919037611522;
    msg.y = 0.241503643795;
    msg.z = 0.00293991805024;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.57090881897);
    msg.setSource(49116U);
    msg.setSourceEntity(114U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(23U);
    msg.system = 12188U;
    msg.duration = 25827U;
    msg.speed = 0.704492318812;
    msg.speed_units = 135U;
    msg.x = 0.682543967505;
    msg.y = 0.353550253613;
    msg.z = 0.402236438253;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.632761197985);
    msg.setSource(24029U);
    msg.setSourceEntity(32U);
    msg.setDestination(30243U);
    msg.setDestinationEntity(122U);
    msg.system = 61199U;
    msg.duration = 46002U;
    msg.speed = 0.727832011559;
    msg.speed_units = 186U;
    msg.x = 0.706069295017;
    msg.y = 0.780273357573;
    msg.z = 0.342807937553;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.143758325352);
    msg.setSource(55032U);
    msg.setSourceEntity(112U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.850146008771;
    msg.lon = 0.636434873246;
    msg.speed = 0.244960894198;
    msg.speed_units = 138U;
    msg.duration = 44187U;
    msg.sys_a = 45813U;
    msg.sys_b = 61301U;
    msg.move_threshold = 0.990020354248;

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
    msg.setTimeStamp(0.967632333652);
    msg.setSource(24988U);
    msg.setSourceEntity(217U);
    msg.setDestination(52256U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.462515354209;
    msg.lon = 0.384524258705;
    msg.speed = 0.352900853528;
    msg.speed_units = 0U;
    msg.duration = 28036U;
    msg.sys_a = 29666U;
    msg.sys_b = 47652U;
    msg.move_threshold = 0.462526594055;

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
    msg.setTimeStamp(0.493427941096);
    msg.setSource(59872U);
    msg.setSourceEntity(244U);
    msg.setDestination(17676U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.104762859106;
    msg.lon = 0.0831325274752;
    msg.speed = 0.446260710631;
    msg.speed_units = 16U;
    msg.duration = 34403U;
    msg.sys_a = 8640U;
    msg.sys_b = 26637U;
    msg.move_threshold = 0.295082561859;

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
    msg.setTimeStamp(0.361560797594);
    msg.setSource(56730U);
    msg.setSourceEntity(61U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.247078792462;
    msg.lon = 0.911241230095;
    msg.z = 0.513895028599;
    msg.z_units = 21U;
    msg.speed = 0.810062753686;
    msg.speed_units = 135U;
    msg.custom.assign("MGSPMFZJLNWVHXRAAVPJGBESBHBFIDVNZXHVEDUOTJVZWITDTBYBQUDQDBWXJYTLFBCLAYYCWUIPGRKUWJCHNMGGFFEDKHZATWSKHVHAQICAOTPSWGVPGLXRFSPLAZLLMDYQJERXMPQOWIMSPFEOKYZGLADBWRSRKKUQVVTJTYFUMXICMYMHGQZORASCKKIJELNZCXSDOCAQRDFJHCWYLNGIUNMQCNQIYHTNRKJK");

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
    msg.setTimeStamp(0.166508412746);
    msg.setSource(1429U);
    msg.setSourceEntity(69U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.262822803088;
    msg.lon = 0.591631942766;
    msg.z = 0.777028269994;
    msg.z_units = 191U;
    msg.speed = 0.335539449551;
    msg.speed_units = 245U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.657291430455;
    tmp_msg_0.lon = 0.0460358186989;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TSEWKNTVAZQUTJIGOTIYVHPDFFNGJSEOPGWRTEFDFLUCBHYLBRVYSXQJAENSZHALCOQUSESYAQIZCRZIIJFMKPEWNMKFLTXSTMO");

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
    msg.setTimeStamp(0.875274292727);
    msg.setSource(33937U);
    msg.setSourceEntity(59U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.801508557782;
    msg.lon = 0.0742040430896;
    msg.z = 0.355339799048;
    msg.z_units = 222U;
    msg.speed = 0.701006694133;
    msg.speed_units = 42U;
    msg.custom.assign("ZGXDUTSBSLMQEGHEVIHEATRUTQFOUDVLHIIHYMVAHRLQKWVWZCZVLFPPAGWGVHQNAJIUQRHLSNSRJTFIGXRTKJBFLCXWIOZWJZYJKXDKBSDEKGTGCELTXGKRGOOPMJB");

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
    msg.setTimeStamp(0.11362127465);
    msg.setSource(34791U);
    msg.setSourceEntity(35U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.410203752709;
    msg.lon = 0.915167337568;

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
    msg.setTimeStamp(0.96711093464);
    msg.setSource(27520U);
    msg.setSourceEntity(198U);
    msg.setDestination(38268U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.543668545;
    msg.lon = 0.373901844111;

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
    msg.setTimeStamp(0.794981902919);
    msg.setSource(15515U);
    msg.setSourceEntity(236U);
    msg.setDestination(47427U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.178259493011;
    msg.lon = 0.360991754613;

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
    msg.setTimeStamp(0.613222171251);
    msg.setSource(62990U);
    msg.setSourceEntity(142U);
    msg.setDestination(6793U);
    msg.setDestinationEntity(161U);
    msg.timeout = 16235U;
    msg.lat = 0.884687039733;
    msg.lon = 0.147740274151;
    msg.z = 0.801570316373;
    msg.z_units = 251U;
    msg.pitch = 0.953905580573;
    msg.amplitude = 0.69280489538;
    msg.duration = 44090U;
    msg.speed = 0.204365834217;
    msg.speed_units = 123U;
    msg.radius = 0.0815369863424;
    msg.direction = 87U;
    msg.custom.assign("HHUTRSYIJTYYSTJXBZCNYLZZOCTWSQZJOXXFPRHFAKZLFGSIWHLVYFOVDNAJCHAVBXAKIFGRFMIMEGGTCNKEOUNSCEDPSSUXMAOVBXKQPWUDCVJDOYUDNMUKKMGDEEGAIETNVIFFMMBBUPIVBKSPTWVCFYJOCDJCVIMENHXHOPOTOAAWLKGPLLLGFMLAZQRWZ");

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
    msg.setTimeStamp(0.0759678359148);
    msg.setSource(37699U);
    msg.setSourceEntity(5U);
    msg.setDestination(10632U);
    msg.setDestinationEntity(79U);
    msg.timeout = 49588U;
    msg.lat = 0.501552983647;
    msg.lon = 0.0118909261071;
    msg.z = 0.430862015131;
    msg.z_units = 32U;
    msg.pitch = 0.411348951113;
    msg.amplitude = 0.0234374356218;
    msg.duration = 51589U;
    msg.speed = 0.487740850683;
    msg.speed_units = 250U;
    msg.radius = 0.921612882265;
    msg.direction = 97U;
    msg.custom.assign("HSWLZRUSBJIPEZYTBEGEJOPRMFELDUMXKWVXBVTJQRDAHXGIIQILFVAGLOOYWQIWTZVEGCXFSGMWMQFV");

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
    msg.setTimeStamp(0.136623422174);
    msg.setSource(46861U);
    msg.setSourceEntity(231U);
    msg.setDestination(5549U);
    msg.setDestinationEntity(13U);
    msg.timeout = 39601U;
    msg.lat = 0.696752519189;
    msg.lon = 0.247573273357;
    msg.z = 0.413665154788;
    msg.z_units = 152U;
    msg.pitch = 0.0981072580591;
    msg.amplitude = 0.371422678488;
    msg.duration = 54113U;
    msg.speed = 0.158738161017;
    msg.speed_units = 136U;
    msg.radius = 0.372845242817;
    msg.direction = 122U;
    msg.custom.assign("AYWSFBMHHHMFZKPILPBYQFOIAKGFIQPVGKCZIEISRRNBTDUQFFLKTOCBNDNKIVEYGALOMAJIHWZL");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.637349665629);
    msg.setSource(3141U);
    msg.setSourceEntity(196U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(109U);
    msg.control_src = 8995U;
    msg.control_ent = 248U;
    msg.timeout = 0.641619191136;
    msg.loiter_radius = 0.704591051094;
    msg.altitude_interval = 0.585508283054;

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
    msg.setTimeStamp(0.202362126634);
    msg.setSource(40595U);
    msg.setSourceEntity(132U);
    msg.setDestination(31124U);
    msg.setDestinationEntity(109U);
    msg.control_src = 52552U;
    msg.control_ent = 47U;
    msg.timeout = 0.0548235613081;
    msg.loiter_radius = 0.574158441417;
    msg.altitude_interval = 0.54656108882;

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
    msg.setTimeStamp(0.781364803053);
    msg.setSource(19020U);
    msg.setSourceEntity(132U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(170U);
    msg.control_src = 33324U;
    msg.control_ent = 56U;
    msg.timeout = 0.94366395146;
    msg.loiter_radius = 0.417702848425;
    msg.altitude_interval = 0.88284348127;

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
    msg.setTimeStamp(0.652926429914);
    msg.setSource(36230U);
    msg.setSourceEntity(81U);
    msg.setDestination(24639U);
    msg.setDestinationEntity(164U);
    msg.flags = 113U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.938358790598;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.497446112124;
    tmp_msg_1.z_units = 139U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.59118317717;
    msg.lon = 0.415759230602;

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
    msg.setTimeStamp(0.0599624674517);
    msg.setSource(61034U);
    msg.setSourceEntity(198U);
    msg.setDestination(20010U);
    msg.setDestinationEntity(145U);
    msg.flags = 33U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.643000916025;
    tmp_msg_0.speed_units = 58U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.326805190718;
    tmp_msg_1.z_units = 199U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.587596608366;
    msg.lon = 0.841110616048;

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
    msg.setTimeStamp(0.838038470148);
    msg.setSource(37300U);
    msg.setSourceEntity(77U);
    msg.setDestination(13648U);
    msg.setDestinationEntity(192U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.713705818227;
    tmp_msg_0.speed_units = 72U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.123843730743;
    tmp_msg_1.z_units = 186U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.73122804549;
    msg.lon = 0.572228875949;

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
    msg.setTimeStamp(0.698699837498);
    msg.setSource(12689U);
    msg.setSourceEntity(224U);
    msg.setDestination(33924U);
    msg.setDestinationEntity(148U);
    msg.control_src = 58683U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 162U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.282023771287;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.51398089672;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.611854816292;
    tmp_msg_0.lon = 0.459893958914;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
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
    msg.setTimeStamp(0.354999849843);
    msg.setSource(26539U);
    msg.setSourceEntity(108U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(113U);
    msg.control_src = 47427U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 66U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.148221919044;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.797822959412;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0675808058545;
    tmp_msg_0.lon = 0.505355155705;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 125U;

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
    msg.setTimeStamp(0.781839302101);
    msg.setSource(4551U);
    msg.setSourceEntity(20U);
    msg.setDestination(39308U);
    msg.setDestinationEntity(108U);
    msg.control_src = 54729U;
    msg.control_ent = 103U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 191U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0752828042074;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.175266844066;
    tmp_tmp_msg_0_1.z_units = 131U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.530791749347;
    tmp_msg_0.lon = 0.435135406247;
    msg.reference.set(tmp_msg_0);
    msg.state = 18U;
    msg.proximity = 147U;

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
    msg.setTimeStamp(0.789199499751);
    msg.setSource(18894U);
    msg.setSourceEntity(219U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(28U);
    msg.op_mode = 194U;
    msg.error_count = 164U;
    msg.error_ents.assign("LDLXTHAOZCFLKEJRPOGMULAUGLUZJKVSTJXALN");
    msg.maneuver_type = 48268U;
    msg.maneuver_stime = 0.602595604925;
    msg.maneuver_eta = 53526U;
    msg.control_loops = 4018434543U;
    msg.flags = 43U;
    msg.last_error.assign("IBJRTNMWFHDFLMUQBZYTHYXEIHOZZJVDPTNBHAOHUWFVHMFHABOMUJSXTFSRABHQSEWGGTGETBJQDYHITMVVVBCXCTQOYWXKSNZOMYQLKTYAKOSPZGGCCDWVAXZVRLBGLPIPZOPMLCJFQUIRZFQBDUEMVNADXFHBGRJVYJNKEOCYECNWAWCXWIZNN");
    msg.last_error_time = 0.494125448628;

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
    msg.setTimeStamp(0.231306398326);
    msg.setSource(34901U);
    msg.setSourceEntity(22U);
    msg.setDestination(36712U);
    msg.setDestinationEntity(114U);
    msg.op_mode = 54U;
    msg.error_count = 98U;
    msg.error_ents.assign("DFOWKFGWPCKRKEUIGQKGKGWXZAEQBFLKTTECDBVJQSRNNPTOAXBIUVNVHHBBVJDKFYJUOQTLD");
    msg.maneuver_type = 374U;
    msg.maneuver_stime = 0.972907458566;
    msg.maneuver_eta = 12568U;
    msg.control_loops = 1869599598U;
    msg.flags = 74U;
    msg.last_error.assign("NMGCPYCZDEMRHDXPXNKOVQNGWMHIDQBKWHJXUFOYCHAEAYYJCYFPFVANTISKGJJHMWLYLERTOIKNTFLKWOSLWAIKTIWBPCBFSBIXIPNHJTPECMLZQHLSGSYMUSJTEADWWERYDFSWOOQHSRHERFULQDBJKPCVQQQMRBVUGXDVZF");
    msg.last_error_time = 0.283172244718;

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
    msg.setTimeStamp(0.629044781813);
    msg.setSource(54733U);
    msg.setSourceEntity(148U);
    msg.setDestination(37382U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 167U;
    msg.error_count = 28U;
    msg.error_ents.assign("XFSVRTTGAFWSPYCZAVDZHBDLTEAUCFHTJOSEBXFJRCMOMPDDIAYKXXXCQNDVOQURBZMCKZSKVARRUZFTXAHBZFCRPXIWYINENWQLFIBJLKVUQGUBSTVWOEPGZJMKKBPPGQDHLGPRFDOQGLOHAPSVMDTMXCJYILLKPMJTJC");
    msg.maneuver_type = 14767U;
    msg.maneuver_stime = 0.574128033999;
    msg.maneuver_eta = 23504U;
    msg.control_loops = 1143079226U;
    msg.flags = 112U;
    msg.last_error.assign("ITTJIGLNJBTTWWIPADBRFLZTIFRVDUJRDHVNZBMUXHAOWCUWZKXEMCRPQHWSVATAFLUULXWOLWZEHLOIPCSXPONFNPOHJOQGYHZBNLSEBJ");
    msg.last_error_time = 0.591620944958;

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
    msg.setTimeStamp(0.872141945909);
    msg.setSource(12819U);
    msg.setSourceEntity(164U);
    msg.setDestination(24830U);
    msg.setDestinationEntity(226U);
    msg.type = 25U;
    msg.request_id = 34637U;
    msg.command = 102U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 47000U;
    tmp_msg_0.control_ent = 97U;
    tmp_msg_0.timeout = 0.801015076403;
    tmp_msg_0.loiter_radius = 0.429602901757;
    tmp_msg_0.altitude_interval = 0.254548707002;
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("RLXWRRXEEOKFDHXQEPFICGFJHLXKQKYUWVMTKIBKLBFDHRVCJGVASNLFUAWHOOYSAZNXBWIGDKZOURMFCFPAKQ");

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
    msg.setTimeStamp(0.306819319109);
    msg.setSource(55368U);
    msg.setSourceEntity(153U);
    msg.setDestination(40219U);
    msg.setDestinationEntity(128U);
    msg.type = 54U;
    msg.request_id = 20150U;
    msg.command = 203U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.585502852282;
    tmp_msg_0.lon = 0.0377763682055;
    tmp_msg_0.z = 0.589861300102;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.radius = 0.0695540478082;
    tmp_msg_0.duration = 27705U;
    tmp_msg_0.speed = 0.694018822815;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.custom.assign("CUCJVDMSVTJRNIMGPYPIUZCQSGRJKOAAXXTTSFORJABRWYPEKFEPWTGRPTQFGUZDXZVTD");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("RKUVELLNBBWLXESQSMVDLQOEBFDHYHMDRGPMAQWMYMJGBXEPOVNZLCNGFARTTJXAMIUVLEKTBXFYAXFNKXEVISRJCTSSWPPKMCUWQIGHPAKHONWPYKZGWJXCLPRUFLVRTCKZAVRXFTDAFTXSHUGBUPCNSLIFKOQRBXTWYNVZSDGDQZJMPIWGBJWZCAFOZAVQIIUYHBJKOKDTOINIHHJDNTMAYDNEOO");

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
    msg.setTimeStamp(0.191539873433);
    msg.setSource(65353U);
    msg.setSourceEntity(31U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(74U);
    msg.type = 223U;
    msg.request_id = 47041U;
    msg.command = 123U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.806513338029;
    tmp_msg_0.lon = 0.493121489851;
    tmp_msg_0.z = 0.233899178875;
    tmp_msg_0.z_units = 138U;
    tmp_msg_0.radius = 0.103420033945;
    tmp_msg_0.duration = 23795U;
    tmp_msg_0.speed = 0.927721015548;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.custom.assign("ILJVNJUASHIKVESQNQXSHEKZGYGDDFCRNOXDFLDZTHKAYVRAZGWZGCLWEHQGRAPPKLPNVITRWLKZEMPYHUHZQCYSMSSDGCAQUOXKDCURDWIBGHUTCFKVMOVKPMHQREIAEXRYSESPBBCFXMWXUXMYQPBCWGWOLJQZDMTBCFUIIOATNLAMVWXGPFUVIPOGQHZVWSFNKQWKTFJAYZOLDOJIOLRTPBYRBOFEHIMBNBMJZTTXYAVNJCXNE");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("QALNFWPICJMCCLUMKUSKOZGPCOTYLEDZIXDTYVDMZVYKFBUJALBHJILIUNSKVJWDINEGWNDQSQKGUYTXNHRBJPEZBCGTVZUYBOWOZVSAFJRPWZIIEGRRTPQDXQWRSTSKXHTHFPWQVVHEWKOLGVDGULBALIQPDEERJBKJOBLNSNGAWPFECSZZYNUXMASDMXAOVRMVONTMBIORWHYTGAPJIYXUFQQRGXFFMUZCCAMYTFYJL");

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
    msg.setTimeStamp(0.919633274145);
    msg.setSource(11106U);
    msg.setSourceEntity(7U);
    msg.setDestination(49509U);
    msg.setDestinationEntity(161U);
    msg.command = 129U;
    msg.entities.assign("XNBEOLJVRZFEIYJEZXSMFFHBOUQMRNUKNVXJNURWWVAXWRRFDSLAEYKSCLQLVLWDZQOKPEWTJGYMTIOCTITBJQYZNIBKKPYPGNODMLBQFZFR");

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
    msg.setTimeStamp(0.0216296202547);
    msg.setSource(38646U);
    msg.setSourceEntity(200U);
    msg.setDestination(53567U);
    msg.setDestinationEntity(175U);
    msg.command = 80U;
    msg.entities.assign("TXNACGIHYWYZUNDRMVGBTEJKGYYBVFTWXLKSIZMFZBNKVQONPLHHETFXQPMLZUYOROGASQGVIUKLEPABEGPZUFBNWUWJMZUMNEJKHEISTRDXDFCNLOVGBFNOROHFHZDDTDJULDSJYWPDXJLRKBYCVECLIOGUCMAPRHQGKCPAZZVRKAOFTQIOSQWZLIYDVQQBYJAFXUAIXWHM");

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
    msg.setTimeStamp(0.699099035102);
    msg.setSource(64685U);
    msg.setSourceEntity(242U);
    msg.setDestination(19215U);
    msg.setDestinationEntity(32U);
    msg.command = 165U;
    msg.entities.assign("WOEKZRLMPIWIKCJSWLTCWNYGSHICTRSOZNZVODEYVYKHYEBMZRRVDCMXCBPZDYQDIYZQDCYHTOMBDCUJIVVFEEWYCJLJFZHDXXUBDNTLOJNMUWPUANQPSBFVBMAXOETDTOFJHXFKTZKNSPSFHFWWJPBDUJKSLLQCILRPBWGUMGAXGXHJGSNOEXWNHLEBIMGZRSTRUOKVGHLZIFMGMVUGRYHQFNATUKJRNVQFEQKPXQAULAPBQPAI");

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
    msg.setTimeStamp(0.111156623987);
    msg.setSource(37773U);
    msg.setSourceEntity(146U);
    msg.setDestination(33238U);
    msg.setDestinationEntity(236U);
    msg.mcount = 248U;
    msg.mnames.assign("JVSIDPMPUVNBDCMLOSYPRRKCZIJFIUFEKFAZZDCONNQFXKTITJLRVRHBUEOYBAWUENPUWAPCZSRWKZTQSPOSDKSOKAPNGYTYCORLDVKFUIEPDQKFVHSLJHEZQQEGUSNDGMMTXBTWGPYFFQCEVXWJSLJATWCNFGLMRVDNWZYISO");
    msg.ecount = 144U;
    msg.enames.assign("CBWCDHQFJRGKHFKXPGYPZNOV");
    msg.ccount = 221U;
    msg.cnames.assign("XTGVCUBOMNNTYRPNENSBLYPJF");
    msg.last_error.assign("PRHIWGAAJHEVOEUNJNLUYLYBHOJSLVCPZMPDAZGSRWFNXDNGMWWTESOWYGFDQXJYEAATXFIEPXGIQBVBVDCKOPUTCLXIKZXRYKODBNDUKIMZSCLYGJLNRRMJAN");
    msg.last_error_time = 0.814580164722;

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
    msg.setTimeStamp(0.669694316938);
    msg.setSource(17583U);
    msg.setSourceEntity(151U);
    msg.setDestination(22511U);
    msg.setDestinationEntity(168U);
    msg.mcount = 13U;
    msg.mnames.assign("HQLVQFGHQMYNGDTPCEEYVREIFOPMCSCKUSNFTXNUWKFOALVNJPKZQDZAJXDKXWIDCFSLBDWCWBGAGRZUQZYXRYHVTRMQVURUVLNMDTNOAABZBIWBOCSSILCTWIOMJKKVVLCUQEBSHJEPXJOUREDTEVULYQXRZZGHSTZGORDDISAMKINTJOPAKFEWXUWHONJYKAHBEILFFTFRIBGCITOPMDYALGNMGSXGYUPJCMBHBPJMXAH");
    msg.ecount = 80U;
    msg.enames.assign("YNXBFVPWAJVKZTOZXTAHU");
    msg.ccount = 194U;
    msg.cnames.assign("THAOKNHVHLAZCIZZEOYQYSCWPXKAMWMFJUDSBIDRDJXHMYBWMLBVNAPJLYJQBYCQKJOTCRAIWGSGLBTFVKDEGQDDNUPHMCCFSIBRGWVEKKGFZEGVZJPWBTGUFRTXYIVWXQUURUUHLQOGNIDBVHZTWLZRSNGJOSXIVYAFUNDYYJOPEWESNOCMRPZFPHTCXQAOLEFGQJP");
    msg.last_error.assign("IXWEEOLRHEWGLSCFRTCDSAUGLOJWAJIQIQDMPFGXDLYYHUDTHSPROSIEXLJLYMQBJYPACJAWSKLPPNHAORBJXEJIMNQRXUGIUUVSFXVBVMSPNKZBTNCPGOQ");
    msg.last_error_time = 0.453618724474;

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
    msg.setTimeStamp(0.394478295771);
    msg.setSource(16944U);
    msg.setSourceEntity(203U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(30U);
    msg.mcount = 14U;
    msg.mnames.assign("SQMKKAFMDRHFSVIXUEECXSCOPKWZFWAJWTADHROPCFUMWABKVOHIVITIJSGKLCPGMSYCMHCEHRQLJNSBJWAGBUUDKEOUYEHYAUAGJJQJDBKWPCBHONNERQWDZAVLLZUXYJMOYGOEUBKKNMTUSMEYLHPILGQGJEBSALXDZZPYGLHQUTEZTWBRFVTPIVDITFWCMXZXCQOYXVCYRTORPFMQQXKVFTSGIXNNZLFIRVVD");
    msg.ecount = 70U;
    msg.enames.assign("AHLNCUJXWEPGIGPOVEGMXONEBMXIUWLHQRPTCWNFJBURLQBQSTKFAUZIJWWMZYXUNJCQPADHBOYDMLCXYNPHWM");
    msg.ccount = 144U;
    msg.cnames.assign("GZBMDEYRKESZXQQILZOZVJZMJTDQKPRPJNWBHAUJLEMVFHXPGKJLTRHVZUHYAADMVBLEGXWNJUVSOVCAWTJHHLSCTFAWMCRKKDQPXGODOIIYPZHIDFMNXUBBVXRMYITDBVRMTCUPPRIFTSFASHNWENNNDYCBTWVLNIYAVPZKOLIKAKFOEZLCGDOIGYOSEBTMIOCPQQEOAYBWWAJWUMBTUFYGWHDQXJUXK");
    msg.last_error.assign("TUGWHASKORPCSUSPNCJUOCVINGWXGVWOSKYZXGEMBJCHUEMNNHETZFXTDGABPOWMYNCVEQXDDQYQSUFPWNZKLFMCIZXFBYJSKVPLXMYNKLUCWZEFLZTQASQMREGVKSWDGABRAZERUIQEYCQBYRVJRPCBDSIYOFMXOUIHFOJTPACOIITFRNDDATETLMJKTHNNHWKLRRJILAAYQIVPHUOBJPHEMALLDJVDOLZQBWZRZXJGGWSKXD");
    msg.last_error_time = 0.770993135342;

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
    msg.setTimeStamp(0.395855174303);
    msg.setSource(18285U);
    msg.setSourceEntity(18U);
    msg.setDestination(22639U);
    msg.setDestinationEntity(36U);
    msg.mask = 124U;
    msg.max_depth = 0.0836953944639;
    msg.min_altitude = 0.698643011571;
    msg.max_altitude = 0.95943291824;
    msg.min_speed = 0.923120020334;
    msg.max_speed = 0.0211016464232;
    msg.max_vrate = 0.421113531226;
    msg.lat = 0.161203026811;
    msg.lon = 0.753957003353;
    msg.orientation = 0.592154697846;
    msg.width = 0.961065649187;
    msg.length = 0.955804278193;

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
    msg.setTimeStamp(0.685129482611);
    msg.setSource(63412U);
    msg.setSourceEntity(170U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(5U);
    msg.mask = 9U;
    msg.max_depth = 0.0961402274723;
    msg.min_altitude = 0.0876661316239;
    msg.max_altitude = 0.356555928074;
    msg.min_speed = 0.611932365734;
    msg.max_speed = 0.358116157949;
    msg.max_vrate = 0.384807926008;
    msg.lat = 0.819663332523;
    msg.lon = 0.779299025796;
    msg.orientation = 0.814185857582;
    msg.width = 0.820404163135;
    msg.length = 0.0466575773622;

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
    msg.setTimeStamp(0.233266797079);
    msg.setSource(34703U);
    msg.setSourceEntity(37U);
    msg.setDestination(53840U);
    msg.setDestinationEntity(165U);
    msg.mask = 224U;
    msg.max_depth = 0.139215290714;
    msg.min_altitude = 0.277258607903;
    msg.max_altitude = 0.679929123869;
    msg.min_speed = 0.765114000204;
    msg.max_speed = 0.627112152641;
    msg.max_vrate = 0.324299542012;
    msg.lat = 0.254231836602;
    msg.lon = 0.0868021241298;
    msg.orientation = 0.776005635438;
    msg.width = 0.32376435136;
    msg.length = 0.960190087932;

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
    msg.setTimeStamp(0.330493713351);
    msg.setSource(44974U);
    msg.setSourceEntity(51U);
    msg.setDestination(17957U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.921570080361);
    msg.setSource(34402U);
    msg.setSourceEntity(249U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.465160253341);
    msg.setSource(22330U);
    msg.setSourceEntity(95U);
    msg.setDestination(31334U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.452738190863);
    msg.setSource(7606U);
    msg.setSourceEntity(206U);
    msg.setDestination(45005U);
    msg.setDestinationEntity(237U);
    msg.duration = 1858U;

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
    msg.setTimeStamp(0.32494919938);
    msg.setSource(2962U);
    msg.setSourceEntity(70U);
    msg.setDestination(49463U);
    msg.setDestinationEntity(106U);
    msg.duration = 4924U;

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
    msg.setTimeStamp(0.773572743096);
    msg.setSource(56458U);
    msg.setSourceEntity(207U);
    msg.setDestination(4477U);
    msg.setDestinationEntity(149U);
    msg.duration = 50123U;

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
    msg.setTimeStamp(0.645380254629);
    msg.setSource(60527U);
    msg.setSourceEntity(237U);
    msg.setDestination(13902U);
    msg.setDestinationEntity(138U);
    msg.enable = 149U;
    msg.mask = 839296404U;

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
    msg.setTimeStamp(0.0463279229852);
    msg.setSource(22037U);
    msg.setSourceEntity(200U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(198U);
    msg.enable = 169U;
    msg.mask = 1151563115U;

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
    msg.setTimeStamp(0.254786374661);
    msg.setSource(15115U);
    msg.setSourceEntity(119U);
    msg.setDestination(21264U);
    msg.setDestinationEntity(214U);
    msg.enable = 239U;
    msg.mask = 2957758301U;

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
    msg.setTimeStamp(0.0475701877716);
    msg.setSource(12294U);
    msg.setSourceEntity(53U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(201U);
    msg.medium = 234U;

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
    msg.setTimeStamp(0.443548581765);
    msg.setSource(49304U);
    msg.setSourceEntity(189U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(55U);
    msg.medium = 110U;

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
    msg.setTimeStamp(0.940510191559);
    msg.setSource(16148U);
    msg.setSourceEntity(18U);
    msg.setDestination(14250U);
    msg.setDestinationEntity(119U);
    msg.medium = 2U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.479935134733);
    msg.setSource(65211U);
    msg.setSourceEntity(136U);
    msg.setDestination(44157U);
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
    msg.setTimeStamp(0.18185914716);
    msg.setSource(51249U);
    msg.setSourceEntity(1U);
    msg.setDestination(58126U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.787002994997);
    msg.setSource(53398U);
    msg.setSourceEntity(247U);
    msg.setDestination(46328U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.0591069303579);
    msg.setSource(27553U);
    msg.setSourceEntity(47U);
    msg.setDestination(51983U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("LLAVEHCGAUJOODLFIUPGCAMXFGIDASIAERNELQUSLEPZQOVHJNDSZRRDKOFMFNFPFDIBYKNBKHUECHWDSQHYGVIXHCSBXKABJWNIVGYPOVQJJJUIFEPBTLMTWYTCWZYTTDZEBNDWCQDXHKBXBTINKXWHLNALRMRJTUXPISAVMOG");
    msg.description.assign("MQMLXSUZGEWFODTCRTTJKCIZIPYQKWDHVPLVTWJLAPSWBQPDXJHGWZWOHDKAJKWCRIUFNUYXBLZYFBRMNFOXUAGSGBNTBFLFRBHOANKDVJXENUPKIQGMHWIWUIECDQYZPDPEBGQCRASYGEMSXFMEFXDUCVYNIETSJMLSHDTZCKHAMCYQIVLGCHVKBBPAYOGNYUFUYVAVELRWZOAETAXZXRFQXKI");
    msg.vnamespace.assign("ILFJCXGVAKYVVSIXGPSFATWOJFPTRYMHFCBJHRHZLYQFEJODZIAQYJDTETCEH");
    msg.start_man_id.assign("IRALBFMCTPXKDSWVKGOFVHOUTODF");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YKMZLIOQZMIQLZQGWPFPVOFRZMBINCJMKZBMZNOIPIQEMSFUUDIGJBU");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("JKJEIMDPZLFDZRSIBKACGYOYJWNLIDZGEEYMGOFHHYYNHXIGAKYPWWG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DvlRejection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 161U;
    tmp_tmp_msg_0_1.reason = 186U;
    tmp_tmp_msg_0_1.value = 0.217963017361;
    tmp_tmp_msg_0_1.timestep = 0.454645003014;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::WaterVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 106U;
    tmp_tmp_msg_0_2.x = 0.613721918909;
    tmp_tmp_msg_0_2.y = 0.576904521227;
    tmp_tmp_msg_0_2.z = 0.820727630146;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KRPPDSPVHNGGY");
    tmp_msg_1.dest_man.assign("ZUVHNGIZSKAJQMBKXMABQMMOHHJKNXRZVYISKLJNCFJUMIWWGSEOZXQAMDUUDPTGMDCBNTGXEOQXTLAPZDPZTFAGWHHTWIPIRPIEYJYDRLHVBXCSPVXBSFOBOOUORYKJNALRQCVMYWBZLSJDTDSFJRUFLHYNEAWAWVELYICGPQEMXZEFNUROLCUDKECHAITCDHEOKTFPFSKSCNXAMUFOGRTVVPVQXWEYGSVYBHRLCZJJTNWKWUR");
    tmp_msg_1.conditions.assign("XUXREGVRKEOWSIQAJHFMMHUPKIKMRMLUGXISANHAUDVEWIGBZYOWQFZXHYJAQLBQZTYCVTJATDTUFONTGYXFDYRKJDELULJLMBAVEPDKZETVSPIRCVSIGPMNQZGMZNFXOCLIZPBSWJQKEVDJUOXFHSWUCJRJBWDTTAHYDPTFGEXOEWYFAWUOWKCMZQGRJYTORQLRCBCNXUGP");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.788252134162);
    msg.setSource(47258U);
    msg.setSourceEntity(189U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("VEDYUWCELBMPJFJBZFPOZKHBDPGZFKRBTHFSIRHKQANASXXTCCHBIGYPTWQWDZBOELWNDCEILZGLBAFGCIMQOKUXZQUSVGXWHYYMDFLRVJYMIKIIVRDMLIAPWTHJXSVDJRNX");
    msg.description.assign("YNTMQDSCLWAQUZXHBLKSFVYIN");
    msg.vnamespace.assign("HBQNTUYQYDWUQXEOPZGNOIXOERKXTZWUFRRILHCGGFRGDSHLOVUBZXDSRBWNUSBLETEVEMPZHPCDTRMVOTHVAZLIOEWHTNSLKAOHQHKYJLRQYZNTBAKMYHAIWEIKSNRJGUMCFJBTNUJEVMSGHAVGYKNFFKSQIBGTCSDZKNPO");
    msg.start_man_id.assign("KWTXAZAQWNJQXFFUJEWVPMNUXPUCDFJYLYSMFRJGRFBYXXTHYTFZAKQYXHJSGJYRHEVLHDCGQMSSTPRLVCEQAUBIKGIPHLCCHEIHPCQUDUJMNRYTEDTNGIKLZDGLAURUIZPSSF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BWFNNUQDSRKELNDXGZSTIPIOUGPRTNLTWRUIMUNB");
    tmp_msg_0.dest_man.assign("DVHABNOTGHPUZVDYRFEWOGWYWDBBQRWJNPZIPPTMIRX");
    tmp_msg_0.conditions.assign("JYQKBZTHMOKXTHLYWWLFSZQHDHNIXXPYDZSAYOJQTEQRFDDURJGCKGQUUNGTJLBLIAEICEZDNABDGDQUJ");
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.867307954178;
    tmp_tmp_msg_0_0.y = 0.949925515139;
    tmp_tmp_msg_0_0.z = 0.602084667402;
    tmp_tmp_msg_0_0.phi = 0.446499616024;
    tmp_tmp_msg_0_0.theta = 0.179549222364;
    tmp_tmp_msg_0_0.psi = 0.504146505179;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::StorageUsage tmp_msg_1;
    tmp_msg_1.available = 3036589339U;
    tmp_msg_1.value = 50U;
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
    msg.setTimeStamp(0.857184212699);
    msg.setSource(60001U);
    msg.setSourceEntity(98U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("WREQNQWCWUXTIMCAXYVDZSLKTFNHJKWDYQAESAAZSMAXKYCMZFMJCXKOGHZLUMBMRLNBCRWZUHAVBPAPPIHOUPTGZVICOXUWQPOBRNSNFIVHSTQGFJAPSUYFYDJATRETGBYFTVGQNNGZBNLTPZVEHXDSQZTSPYVMIBKWGBJOOHHFRXHTLAJICPLLZKRJCMQEGFNIMYLEUDRWUSLSJCIDLXVDKOYJOFYKMNIUDBWEEXORJICQ");
    msg.description.assign("FPTUKVLGYJZIQOHMHNVJMZGRHCJFQNZNRVJYBOENIGWKMNPQEBVIMWXDIXLEKHHSCLJWDBIUKORLETAGZAKTBMWLOVDYYJQOPKMWTDUEQQRRHPWVCCVEGDUYSQCBVVMPRYJCNFXYTOIUPXRIDTXZFDUQTELFARAYLJSHXXPZTGBID");
    msg.vnamespace.assign("CSIKONQFNCEHMERNHJHOMJEBMJBUUBIZVSLJBQMBZVYGZKJYFFSVKVSXTJJMMFZWBYJDPQOMWYOMUHYTELAELKDDCWTYNNOVFXCMXLVPAPGRWSXITPHXBLKCIKRHHCBUARYDKVEGNSRN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PDHAGCULOJUNTHPVVDEAPCIFREKJIGCKQVZZBDVZXTBIDYZFARXPJDJGHONZDEWCLIFSERQBFQYIVYEAYJGEMNHVRVOZAYCXOZMZDQTKXUKFRLZPKUNQEYJAAGGMMSWOLTXPLKNPEMEOFWNUTLFWQLOYXQHTYXUABJIOWBHJCWNVKBBKCW");
    tmp_msg_0.value.assign("YUSJDJEIQAQPPZXDYKVDYZRZTQKWJUQKLOTRKLIFLNWKXYIOWINRDCGAOSQDIWMLUZBCLWSFOJVIGXYZPPXRGOGBIERBVJSV");
    tmp_msg_0.type = 213U;
    tmp_msg_0.access = 193U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZUQDBZIJTVZZRZMVXEDIWWSLMWGIBLCDXYPSWFCRF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XPCMAFVPZGKLXENTGBEPKJMHOQDLBLTJUGPZFPSWPMYIARKFOJTTSTOCXJUJIXGKAITWJYQAHIUHXMJVSCKZWNGEWNITFELLQQRSZNMTNKFDRPBHMJCEVCFDNFCUBQNWYIUCEUHEVBODWRYCRWHODWSILWBHCBULXRNOZHVYPMOAQLNBYLOQFSKAQHDEGMJQRYTDDFRORVIXVLQASPTSGDIBZBEX");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0957410737192;
    tmp_tmp_msg_1_0.lon = 0.746366503722;
    tmp_tmp_msg_1_0.z = 0.0663679587988;
    tmp_tmp_msg_1_0.z_units = 203U;
    tmp_tmp_msg_1_0.speed = 0.508769809555;
    tmp_tmp_msg_1_0.speed_units = 1U;
    tmp_tmp_msg_1_0.start_time = 0.560973472137;
    tmp_tmp_msg_1_0.custom.assign("JSFXZWRFYWHSVAEWWNRNMGGYDEXYQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityInfo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 9U;
    tmp_tmp_msg_1_1.label.assign("WUKKMYYKMEWIDEJSTXLSMRIWBHEHSMBVIBVHBEDKFPIQKGZMNVIGCNULJORRFDPXOPKARXUQF");
    tmp_tmp_msg_1_1.component.assign("EYICPHNUQAXZDZLJXSBSGOEFNAPIAQDNFARJWEKCTWQUZWCRHMHKGOYMYOZYRTBBVMNHFQSROAQEWSQIGRYBMSMBHZVVGPRIMJJXGKVFSSUFQCRVMZDNZLKPTRPIMXFTPUKAWPEZDLELEQYJZOWJKBTAJCTSGVUHBDCMLUEVREGOFIHTXFGNJSFULGPDUCCYLUMASHTUFYXYQWEIKXTNONXJPOWODXDALJHIGBBCLWKVP");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FollowTrajectory tmp_msg_2;
    tmp_msg_2.timeout = 32548U;
    tmp_msg_2.lat = 0.181694156699;
    tmp_msg_2.lon = 0.904442250961;
    tmp_msg_2.z = 0.309999620321;
    tmp_msg_2.z_units = 44U;
    tmp_msg_2.speed = 0.667450706301;
    tmp_msg_2.speed_units = 241U;
    IMC::TrajectoryPoint tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.246455276292;
    tmp_tmp_msg_2_0.y = 0.593362580283;
    tmp_tmp_msg_2_0.z = 0.473952439755;
    tmp_tmp_msg_2_0.t = 0.339427459382;
    tmp_msg_2.points.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("YMDOXAJTHFJQYFHZEVDWNLJTOADELRGJHMBITDNKISCHXXWXZWBKPUAJSQXSBVTOVKYURLJXRIKNKSWNFUDKDEZXMTMVNBGDIPSCWURZEIJMRHIILABBGZQTUWLLSQZOLEPZVABDYGOTSAGIAZWOVNYGEJEKMNRNJ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::QueryEntityParameters tmp_msg_3;
    tmp_msg_3.name.assign("HJQDAKEUXMGKOQADROXLGFFWZJMEHJUYBHOMOGSPEVFNRCIFCTXWOVZIZRSPVIGYEFWOBTZJSRLPLBDLJNSBAITW");
    tmp_msg_3.visibility.assign("GVKQLXHWZBCQETDDYQQWXAEPQTKWSZNJOCPRSLKTFPBRKFUNBHXVJYAGIDDUXYOEFMPMIMKBFUXDRYLMKZJCRYCLATVBCPLSPKFIOSAKZFNHAXXTHMJBWVWWGDJGUQNRBAOZHMUZAAIWMJQSUSTDZPSTAYKGWTHRXVJSGCHFXOVJNBMOUHBCPYQLVUJGLTIIGFECNQVZOAWIGRMDORNITIERNHELR");
    tmp_msg_3.scope.assign("MQODATEHKJHGQFTNZUWKRFWLEPYBOKCADLIHRCGYVZGRSXFMVSFBIAGJPVZYGISNQCKOIXJRVSRCFMTZMICGAVTBXYLODIFDLAFPQMUTPJVI");
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
    msg.setTimeStamp(0.32197961227);
    msg.setSource(44045U);
    msg.setSourceEntity(215U);
    msg.setDestination(56534U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("ZJYVMSATKFQREO");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 65514U;
    tmp_msg_0.flags = 92U;
    tmp_msg_0.lat = 0.805028208907;
    tmp_msg_0.lon = 0.943791088804;
    tmp_msg_0.start_z = 0.0412744030921;
    tmp_msg_0.start_z_units = 170U;
    tmp_msg_0.end_z = 0.333694698885;
    tmp_msg_0.end_z_units = 7U;
    tmp_msg_0.radius = 0.599740035211;
    tmp_msg_0.speed = 0.655611814457;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.custom.assign("VLIVXOUSAGNJWEEKKLAUOJSXJCUWVTBPMPHBREUPDIQESHGINLLEKKIMMNWIHFWQTUEVNBOYTRELXCOQXLZHDLQYNHFOTGXBZWDLXAZVABNGKMGWUPACPFJBNSRHHMNPPYHQSJCVFUDWRFMYGTQ");
    msg.data.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 224U;
    tmp_msg_1.frequency = 3819130315U;
    tmp_msg_1.min_range = 64253U;
    tmp_msg_1.max_range = 22602U;
    tmp_msg_1.bits_per_point = 234U;
    tmp_msg_1.scale_factor = 0.245132523565;
    IMC::BeamConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beam_width = 0.962984733628;
    tmp_tmp_msg_1_0.beam_height = 0.745179244431;
    tmp_msg_1.beam_config.push_back(tmp_tmp_msg_1_0);
    const char tmp_tmp_msg_1_1[] = {48, -29, 28, 114, 118, 36, 3, -123, -109, -16, -80, -15, 24, -105, 4, 2, -88, -108, -74, -31, -7, 70, 26, -37, 69, 78, -104, -48, 55, -44, -119, -72, -8, -71, 33, -25, -47, 26, -65, 9, -53, 80, 71, -115, -23, -71, -97, -49, -85, -108, -112, 100, -66, -108, -50, -10, 60, 104, -119, -57, -49, 106, 3, 109, -127, -55, -4, -33, 35, 56, 30, 74, 25, 11, -43, -88, -17, -108, -79, 12, 100, -97, 24, -46, -20, -112, 97, -60, 98, -22, -41, 53, -84, 77, -94, -119, 7, -44, -6, 38, -64, -112, 55, 84, -114, -127, 96, -63, 58, -110, 23, 10, -80, 56, -82, -109, -11, 45, 57, 119, 3, -54, -9, -34, -13, 15, -93, -95, 123, -70, -67, 77, 52, -29, -71, 47, 106, -122, 59, -20, -37, -46, 106, -23, -115, -119, 123, 111, 109, 54, -16, 25, 35, 10, 121, -47, -123, -32, -94, -118, -55, -75, -17, -87, 76, 81, -11, 5, 1, 51, -13, -112, 83, -37, 84, 62, 14, 70, -117, 36, 99, 58, 46, -121, 32, 38, -9, 81, -66, 56, -96, 96, 43, -9, 67, -54, -71, -18, 81, 65, -107, 110, -23, -108, -56, -9, 119, 63};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_1, tmp_tmp_msg_1_1 + sizeof(tmp_tmp_msg_1_1));
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
    msg.setTimeStamp(0.865538100348);
    msg.setSource(26775U);
    msg.setSourceEntity(48U);
    msg.setDestination(30595U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("FXUFEKJWYBFEBTKSLOYIUKRVMSVQLRAOGVSXUQOWUZIFALZCPFZELLPMPJVRBGVLYIXZOQZRFPBNETJCTNGXMEBOKUNAICDDNZQJIZAJMSVAQJULWIDKQRMWGWYFRIGSZMIBLBTATAKHWLTGYPQ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.412985785853;
    tmp_msg_0.lon = 0.635962660213;
    tmp_msg_0.z = 0.531536297734;
    tmp_msg_0.z_units = 5U;
    tmp_msg_0.radius = 0.981162061012;
    tmp_msg_0.duration = 39676U;
    tmp_msg_0.speed = 0.294034989711;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.custom.assign("LXSDHLHMBWVIPCYEZBPYDMNBEMGZXJAOIMIVFXONSURKUXVQJRJAMJLHCAUKUWWWVLUEJMXMRJKAIVPCZRIDXP");
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
    msg.setTimeStamp(0.481404667342);
    msg.setSource(12615U);
    msg.setSourceEntity(83U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(31U);
    msg.maneuver_id.assign("ZRJKBNCATMREGPTNWQQXFLPBDEMZKUTVQLKWYGMRQDHHGELAELXPCXRTPWCFSXGLEEVWFBHAPLVGJKXAWHNKZKIDEUMBWYWMJAPHROQDDNIHOVSCCASOUAOUSTOYNGYDILQZAXKBSDLYPZWXZGCMJINMJXVIOVJVZAPOETFVNZFVISPRHIKZMHCKWFFXRGUTHTJDRCONWSQOYYBNMENUEJSLQFVRPDBQJYDUFRQIUTAHFXJYUTK");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 21705U;
    tmp_msg_0.lat = 0.0192085500431;
    tmp_msg_0.lon = 0.100729891447;
    tmp_msg_0.z = 0.0792279028465;
    tmp_msg_0.z_units = 49U;
    tmp_msg_0.speed = 0.940164889055;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.duration = 20899U;
    tmp_msg_0.radius = 0.416155446657;
    tmp_msg_0.flags = 211U;
    tmp_msg_0.custom.assign("JVGEUNBDBVFVPWJUZHLJJVYOFAHOKXSNFPRFFWCIMRPPWQFRAEOJJGURAPEXIQOACYTHSKPIBNXMZVKWXGZZSMLPOKWIQFUGRBGHMSHYLMAMTBWNZUEDAWPSTCCSL");
    msg.data.set(tmp_msg_0);
    IMC::Teleoperation tmp_msg_1;
    tmp_msg_1.custom.assign("UOECQHYEEBINXAOKCYTOENNCJYURUZMHUYCSFWXMIBECZAMWFJSTLHVCQUJTSOUOUIOWRWDRGRJEDZNWUSBDYAQNJJKMGADKQYIQYGUHKOFVTEFCZMCKTWARIABXNLIBQPPSAVTTXMAIHIRZKGPVPBVVEBVYUSZBHMFPSNDTZRGFLXWCFPEXGAJGYNBRKLORPLSKLHFHDKL");
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
    msg.setTimeStamp(0.0956084516369);
    msg.setSource(41674U);
    msg.setSourceEntity(160U);
    msg.setDestination(22354U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("CRVLUFTCOMXWHRHPBXGDGHKTOAPCXLNHTECRYNPYBUKVAETTUKRIKKQZSTNFFNUYRLDGBTMHJXCQGMEWDUZSOINPWUKPVVSFRIOLGINOIGLDVPSFBWDDWHHHWOEFCOMQFONWQTBZJVYSJMQODZQLOJZAUSXC");
    msg.dest_man.assign("XWUTIWQYKTMMXOUXZYGPQBCRVKDAGPXWUJWVKJU");
    msg.conditions.assign("TURKLOPYVJEDXADBUXDDLXJRCYZSMCZXY");

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
    msg.setTimeStamp(0.259794743574);
    msg.setSource(17911U);
    msg.setSourceEntity(88U);
    msg.setDestination(28585U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("OFUXBGALTPGNQIDLTZQCIXGFAGDCKKUHFVDWKFHXTFZNGJVMRDHMTXAOYXBATDIMSUBMBYUQYWMWOBKVJNNPOOGSLHUCSRZFKEVVZXRIPNYZNRQPWLCQPKPRLLSDJQYEYUGOOEWHZIMAKELIDCGOCIFUPSJXDHJVGDWQQWOIQBVUEAZEKSMPBOLDBRJSUVXGX");
    msg.dest_man.assign("EPIJICFRYKQQTCUNCTHQFKFEZQTAKWWBDGXHHZGAVXMHVOEOFGFMMDSNRUYWQMUPOJOJHQOMBALZCNWIEOLFVQRZSYPCVHAATTROELJQAWEESYLYIXTRSUPPDLIY");
    msg.conditions.assign("CRAUISHDXXCKRASGOBCXVOEMAXNPLKVNLCOQGYAQPFZIBTBZWWWNZMFGXMXPHTZSJSZMFRKQHUDFGSFAIYUWDYTXOKCYSMNVZRNBFMDABIKOQEVTJYISGVXRCWJULQOWGFHQJUZ");

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
    msg.setTimeStamp(0.77742237536);
    msg.setSource(60120U);
    msg.setSourceEntity(25U);
    msg.setDestination(12278U);
    msg.setDestinationEntity(110U);
    msg.source_man.assign("JNFVFBKNSBELXMPOPVNUBWWDFGESWOTXQMKVNDKZDEJCLPFLKZGUMMTCYSYNZGUGHGWEAVRVYCRBXQWTWATRXDCNASPMPQKRJSEETIHAIDXXUQFLAWLXHVVJHZJGIMCBFOHPZRNZCBHDPRVUIOXKJTBGRLCWHU");
    msg.dest_man.assign("LFPGBRGMRQONOJWQREAITJHIUHEFXREHPKLDAQBVGSATINXTRDZQRYELPCAYAOYXLQNUATPLWFUJUOHSIEEIKDMANWXYKQSJWXGPHGTODHJDAMBRN");
    msg.conditions.assign("LEBKEASWMJXBVDIRZZLEUBYZZTKYHPARCZHDUFZPZWAWVTPOBFHTEZRQADVNTOCHXIWYJGUKSRJTHXQDNPONIEKFMEDUYGMGNPOTJMQWFNLSNMRVKCGRXSVLGITOQJNLYQRKSDOXBYOBEHMFEWCCJUGEJDASRFJRCISDSSLGBIO");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 238U;
    tmp_msg_0.goal_id.assign("ELLEFGSXTOKIZYMXBUIOXPUPMUSTEXRULWNLACHVBNQSQXFHUFORJZQDYLWPUZWZQKDXADRDJLGENBQQEKUVAULLCPIBKOYTIMTSVFAXWAC");
    tmp_msg_0.goal_xml.assign("AVSEWYQDAYIFQSEMHJQIHGEZYIXVDZWIDUFCHPDEELEEJZRMGGKXFTGHUNUDERTDMGBNHNKPXXWBHBSALDCMVAEUHPKZJZQTIVBFJZSVHJTSPPLNXQILLZHKXWPGAWIIMUXBKGZUJGOTYLNQFKOMCPSFZAODYVDRFTEUSRNBKAHZRCRYOCRLOJGTKJYLVCWBXXBBPNQQFITUQWVLYOKTOPUWMXDFN");
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
    msg.setTimeStamp(0.66480743733);
    msg.setSource(34762U);
    msg.setSourceEntity(60U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(97U);
    msg.command = 109U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BKPYRHJDBFSVGSGZLMWQDMXAPIHMYCKAOQJAAQDAPVCJSAZMMWVBPYDCORLHKXWVFZZIBENTUWFSIBULXFGLAUFERALUDUKNCKKGYLKLLOTUTVWECYQBVIGQRNEMAEVMSQNXDXFZFBZ");
    tmp_msg_0.description.assign("LEGSFQKZUWKABABZLMEFMIORQLITMQJIGJRPHYJJKVEWFUQUMLNDTNHXFRRVOIGGQTUEIGZYXAEVKOXHLBVQSJELCPDEUDCCJOONJNCWNVSGTSACDCQPU");
    tmp_msg_0.vnamespace.assign("EZURNMJHPSGDZKQPPTBBPCSROMJNIEMNKYRFQOREEVPFLDDHHBEHRROXVPUAHIGDTAIONGKDCUYIARLVPYCGLXGXVBRGMIWIMTQNGHT");
    tmp_msg_0.start_man_id.assign("EVMNGVYRIEXXZFJMBSOABWKYHWMJSEDKLWDBYZFKFZCVIYZCUCMVIDFDPEZXMANRBRMLQTVQATYNAFOSCEURNQETNAYNZKVDNGYQPZXQGUTTHLNVHJHPJOSUSWTHREULDGMRF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DVXMTIILXIFTZBNTRWEQJMDLLBKNBRYXOUHXFRPLHRFJSLTOYQQWWXRHESWRABHYZQDYIQWJLPEZOGGKKPOSXGBCRQDMRBBYZHAMORUGFD");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 33967U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.841015930546;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.43979985036;
    tmp_tmp_tmp_msg_0_0_0.z = 0.577749191512;
    tmp_tmp_tmp_msg_0_0_0.z_units = 250U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.381030659523;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 174U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.847293078555;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.599319587528;
    tmp_tmp_tmp_msg_0_0_0.width = 0.163229259366;
    tmp_tmp_tmp_msg_0_0_0.length = 0.982903047691;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.454561704197;
    tmp_tmp_tmp_msg_0_0_0.coff = 167U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 75U;
    tmp_tmp_tmp_msg_0_0_0.flags = 82U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YUVKZGOGACGVKNDZKIKBMPIMTZEZNSGAPY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::RSSI tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.749093163365;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IREIHTXROFSFHKAPBVYODXISRAXINCSTCWUWHINQTCMTTIUYOVNNOBYWNPZQDNILKPOGHESMQJELAYSMFSWMEVGWS");
    tmp_tmp_msg_0_1.dest_man.assign("ETHRZXNDGANAPPMJFFXUIYGSSXZNJGLYVRIVNEWFKOXMUTKYFWNWRSCSVUQOGCXKFHPQXIFIPMDWBVCZVUJDCHCESAVIYHEWKPBPHDUTMWLAQPZJKGOLKQOKEGRCSUGOFMAFQOHGXIDXQBJBXGFBIRFCWAWLNIHTVGVDHOVZQTHNADTZJKEYCLIKVOCWLEAUZYLTQEBDDELMTRZEOSZLSSPRNJPQYYMWOPMUYKTAJITSJBBXNQNUJMRAUHDLMB");
    tmp_tmp_msg_0_1.conditions.assign("PHFGBNMVNGGYXDVQRDMYQETDTUEAVENWYOQXZMRYUNJDEWSIBOIOSPATIJVQUEVBRCOGIPUBGSPLTZWKUFARRYNSGTWFFAUSLHYSKPYNEHUWVOBTPCLAGCGAWXMXLIZSHTSTMWLPHQICVLOKXLADRKCKYYBRJDWZZIFTC");
    IMC::WindSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.direction = 0.906139201748;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.175401388363;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("MYELVOMRKESPWNVZUTMSWQOFWFHGQGXRMPGOMQLZFDVIKBYETLXXMALKUCHHLAAWABKURECAXSICBNBYDJNIXZKNCUDNHAWYISWEPHB");
    tmp_tmp_msg_0_2.visibility.assign("JUWNJEMLJBEFFUPYWHKYQJBZFIRZCCKVIOGBTKWNDBGSSBPLGJOYENVXDAJQFNQNYAWJILOKBTLYCFRGTOPVDIBHURCEJYEPUWXSAHLSHCDHFPXZQJQGOQSOOXQZLSAPKASVOWAYVLNEMQWFWRGXNMFYUIKCIHDXVXMQZDRNNRZQYPPTXRTBHGVISTWEUSAMMONVDUEMCKKXVCUMF");
    tmp_tmp_msg_0_2.scope.assign("LUUUIDBMJRZYJZHCYRTSFJSHZXNSVHGUVKVTNFLPKDFQISLPLKBGCDCPMDYNYDUZLOXCRPEDAWCAGOTHOPSBOSOKGWKTIAHKBLUTRYGBQPWCIEVFJENNSZNOOFSEPPUFWMKTNCVJAYHZYLKMWQXYFMAMPCGIHFGNVDYHRJAVLAUQKIEJDQRIZRECOXTDUGLMKWWHLBMSAMTYOBAANJ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::CameraZoom tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 237U;
    tmp_tmp_msg_0_3.zoom = 78U;
    tmp_tmp_msg_0_3.action = 177U;
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
    msg.setTimeStamp(0.992639665131);
    msg.setSource(65399U);
    msg.setSourceEntity(228U);
    msg.setDestination(21728U);
    msg.setDestinationEntity(104U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TNDWSACMJFDPXRGYM");
    tmp_msg_0.description.assign("ADOEJWFKEZYUSWHFBDATQBDRIHSAACUXUHTPEJGJQNGITXOWZVJLMSRPHSWQUULMTBFBONGJWWEVPIJVKLHCQJKQRLNELKQPKMBFDQBKYGFVZAWPNFTROJBYMGDXTHIFKNILFMRLADUYPQWNWHZMBEECKRBRJNKM");
    tmp_msg_0.vnamespace.assign("BSYBYPYXVYOMJNJGMZDULIIGZXHDJKGHBPADBSJHNEXFNUFWCHUFTJSZPFOQQVAQZIRKVQWUUZEABQHXGAIVZXDHPMPHLWNQRVABGHUFVPSUWQAXJXUBQTIPNQMGDLWDMOXSEOTRERJULWYZICODCYFBGIELRMJKOFAYCKYOHTRSARKZROUHVCNNZQJSLARMTTEOARNBEFEKSLXMFMCPLCGPKKXODWTWYBEZITVIYSWDCCT");
    tmp_msg_0.start_man_id.assign("DFKDPZRPKJAGXMJZQCDMODGEPGKFSAOIKSUQLTUTKMFTAVEXPBBULHJSHKQYNNJCMGAKWMNTYGTSJLAWYXBRUUVUISEKCOZDFNROHCAHUVQJMEZITPCJDRTHUCPWGBVEYYDXZDGWHLLVENQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RMVLULEYOCLASXSSRWZBQIVNORJTUOZNDUDVERKABKAHOILMFSMIEXOAHKULCJUQTPXMDFWTNXZDYPTSJEMHJBZIKXZDPCXGGXISDYLWQVCFZHJYQQAAFRLVGOYFQWHLTYHGUFCTJWDMGAMUAPGPPNESJIIKQVSBYNKHVHBKNJNHPIEESOTFEXRSOGGDKMCRXPJTWWQOZTFX");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 50525U;
    tmp_tmp_tmp_msg_0_0_0.flags = 201U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.440836019703;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0588468821064;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.0232269359719;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 221U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.168960093772;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 161U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.0587793558976;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.221532859257;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 46U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JPOEVXBMKLDRWXOHBPXMRUWAWQOUADLFBVFAYTYVJNGCDEIDISRVSBUZOSUCVWPZAMQDGPBWEBHKZRPHULXOAAEICJLSNMGCRFUVJLVTHAOKXBNQZNVLKRJTKLCCBNGETSIISJDYHEUOVHYATXNMXMODMAGZQRHCPDQUPT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AnnounceService tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.service.assign("SDCMKINCINSQOUHIUNXZZJBMQPKGIHMOQTYEDTSCNGRBEAFSEYSOHZDOUWMNKYAHJNWNRRZVBDDOTXJCJFFAFXQBEZKZTRDQCAGZDSAWWVHAXJVPYEYUTYRVRYYFHFOULGLGVUFPLLKHEBSMBPVIUPOQPIMWKTSWMQLPNXAIGCAMWJJXHETJFBKRGLXCRDSYBTPCND");
    tmp_tmp_tmp_msg_0_0_1.service_type = 182U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YDUNQQXDMRRYNKRWGHYWSBOGOQVXDEJMXNLKISPKCYLGPVJEPFTRZDQNOIBEBQDRNCPJWRMTQVGJUQAESPKHZFZHPEDFZXCQCDWZWVZBQHCUAYC");
    tmp_tmp_msg_0_1.dest_man.assign("PELILUOBLGINNWJTSDTNHAPLVMMBBZIEUPYFXBJTHBTPXIELYXFHGSQMZOPFVSJOIUUKRQPDNBGDCEGWW");
    tmp_tmp_msg_0_1.conditions.assign("NPKDASOAUTBKEXAUDJPYITDCCRMLYFHPTCJYNSMFERDMNAYPLCQVUMHB");
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
    msg.setTimeStamp(0.972676552904);
    msg.setSource(43437U);
    msg.setSourceEntity(250U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(84U);
    msg.command = 42U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QPYPIFZCLVXEFHYGOPPUZRTLXNLWCJYHINAYIBOOQKEDRQJCHUGQSVGRRGLZOOFMWLXBTEFTRCKUTUKWYMSLSRHDENFYKYUGEWVZDADJJ");
    tmp_msg_0.description.assign("DTHWCGPOFSRNBWKGRBBAXISGANH");
    tmp_msg_0.vnamespace.assign("VXNAPJYGKSNLDUIQGXNTEVTFQWBCWUCRWAPTVPLWCCDUFNMSUWBAMVKLTILMHZHSYYCRDGRMQKILYSGSVHFSQZQRZISHUDVBYEEHIXTDGLGJZYZEUKMJDZAFLVOATKKJYNIOVTOZDQXJVPORXBPIWOFDSMQWNOCXYMZXAKRSVYIWNFELJBAEICG");
    tmp_msg_0.start_man_id.assign("FCCSFDIFSSIFWYJAEPWRBLJGUTXKCKPFYMIZWXZHBEHWOBNXDIKMCNBJUMEAJKQMGIKERHUTJOMAYIXECZAUYBFXALOBGQUAGOBVPTUOMTCSRWGJQTYUUTEQMGBQYLNHDGSQERWLRNNNFPIYDWNJIGQNTMRZHJZPKXCDHKCBMVOTLQQWAYOVCJVXJFQSVROVKDRSEUDKFEHZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NLPXMAOPMSZUXZPJKEOXERMSKUPAJPROTFPVHVTWRDYQLEWNUHHCSVNGANDHNTKGJBHJNBSOVSJFNSFSRFYJQSNRZDDCYVLVOVVUJQTRDYXQWIQPRFDRLXBIZTMHKWUKAFZFWEDCBHGMZUUSTYGMAGGVCYANEAAX");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.732590735734;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.167500838828;
    tmp_tmp_tmp_msg_0_0_0.z = 0.757591372174;
    tmp_tmp_tmp_msg_0_0_0.z_units = 41U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.245231340627;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 69U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TDRXBNUEPLFBMKIWDEJNALMNPRGGYQOCHAQASWIWBYGFPJBSEXLDKAKHAWHEIUINZRMNTBLOZNJLPFBYCGFFQVJACVRYQRXCENJWZHPMGQYOFHSWOIWHYVMUUVHTTAZGNDZTCOPGJFOZLEPYPZUPMSORCQUISWXUCZHIXTTLMDREZUIZDBHFOFYXTJN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ControlParcel tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.p = 0.115203109499;
    tmp_tmp_tmp_msg_0_0_1.i = 0.30859006236;
    tmp_tmp_tmp_msg_0_0_1.d = 0.549985743423;
    tmp_tmp_tmp_msg_0_0_1.a = 0.852757691227;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RYNJZVEKCSICIYTBXFKVBZUYEBAAHNLUHDXUQB");
    tmp_tmp_msg_0_1.dest_man.assign("HCQJXIQTITMKZNXEIPJBJWVWOPFBEMIMOYUDPMKDDZJTQHDTNWOEXYZSADOFQQFMUCCOAIKJSMSHPGCVOSXDMICLTLSWNBKWHXTDNGLCHLNFHYALZNARYKOPWVBPWGAXBGARXKZSVUQBHFHPDGVMQCRRLFSYFWYVVMKRCFZUUJBJFAUT");
    tmp_tmp_msg_0_1.conditions.assign("FAQASKLVDJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Salinity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.273639792994;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::IdleManeuver tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.duration = 20375U;
    tmp_tmp_msg_0_3.custom.assign("WLORMNYDTSAWZWZTNWJPVSYENIAEVCDECOPOFHFGIJCRONMYUJYHEUHIIDWVSTLJTSPUXBGBNALDVPPVQMRSRHXAFAXXZJM");
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
    msg.setTimeStamp(0.518882273407);
    msg.setSource(65252U);
    msg.setSourceEntity(22U);
    msg.setDestination(676U);
    msg.setDestinationEntity(145U);
    msg.state = 62U;
    msg.plan_id.assign("IZGCKACOMJZKUTVMVLAMGGCFJKUWXRPBRGZOUJELOFLMWIQPFTQSOFVXYDHQNUBMFYJYWMAKTKCSDSKZFRMOQPPZIUGDOCJNSGHHVNYQVSUFDYDDJDKLGGAAAOIPQEWWNHDSNBBCAHJNXREPHFBLQTVJXRMIBTOLWDTTJBZR");
    msg.comm_level = 20U;

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
    msg.setTimeStamp(0.859167925169);
    msg.setSource(45634U);
    msg.setSourceEntity(56U);
    msg.setDestination(5624U);
    msg.setDestinationEntity(108U);
    msg.state = 49U;
    msg.plan_id.assign("KURHKZSQKCJFIEPGVNTFMLMIURLNIAUYVZCWIZKOSTQ");
    msg.comm_level = 130U;

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
    msg.setTimeStamp(0.184810275913);
    msg.setSource(47110U);
    msg.setSourceEntity(83U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(32U);
    msg.state = 217U;
    msg.plan_id.assign("AOTPZYGRMPEUCOCCHCEJAABAYELRPSFTWRRGNEGXFWZYXOXITXDRNVZSMVLTORFBTHUZSDKSRIODDGAKXNVKKOXMMNVAYCAUTBJBIYSAWSMADMNWIFEUSKIPCJGWOXPIGHPWQBLVALFPLKLBMUNDXEVUZNLDRMJJQSNHKQQXKJSDILZYWWIOKHBWWEYBFYKJZPZTBDMREQFOIQFPLHGRPEHUJQUTHSJHCQCOGVEYQJYVLZUTGNC");
    msg.comm_level = 84U;

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
    msg.setTimeStamp(0.0172984543183);
    msg.setSource(49370U);
    msg.setSourceEntity(24U);
    msg.setDestination(47379U);
    msg.setDestinationEntity(32U);
    msg.type = 242U;
    msg.op = 168U;
    msg.request_id = 306U;
    msg.plan_id.assign("PZDQKDSUEOYWHWEOKZQGDGZXPREVGTRCSOHNDLJYKEOUKVEWIZCHFBPWNRASCAOMNUSMTTNNXLECZLVJKJABOMBPYACSYDHIWVMDLUCMIBETDEFVYXSNVSAQAOYZXNPIJQLIRJPKMOLBRWBGTIHULALHWFMIFCJKZIZFHEBRAUQWRJQIQFDXLVJHY");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.236419503038;
    tmp_msg_0.lon = 0.621210095997;
    tmp_msg_0.speed = 0.565087409117;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.duration = 14935U;
    tmp_msg_0.sys_a = 55195U;
    tmp_msg_0.sys_b = 23803U;
    tmp_msg_0.move_threshold = 0.992640181166;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BWWAFVBRHIACCXLFMPOPVNRMIZWIHYADLPYZJUTXBOUVHZOMOQDNQWBYVJDTFNJHYONSWUGHKAUCZECSSOPKKQEFSKXVICCSUKVHOSMXLSITMYQGTNNLBEDAGEWFGAEXUXZXRGDVVAYUQJQIYHHRRGWLAHFWJFKVKCWRJQDCQIT");

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
    msg.setTimeStamp(0.51603521396);
    msg.setSource(33888U);
    msg.setSourceEntity(197U);
    msg.setDestination(54823U);
    msg.setDestinationEntity(5U);
    msg.type = 104U;
    msg.op = 86U;
    msg.request_id = 19188U;
    msg.plan_id.assign("QSIVXJRWUDZFXHYCDAVCSASYKOANEDASBGMNVCRSCYBFZNLVEKQCEHFTIDLEIRNHQWUJQVTKQDOJNGLTMACXUZUXTVKFPYDJFWTJXOSYHLPVELTQRGIIIAMZNPCGYSTXAHECJUYCO");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 191U;
    tmp_msg_0.x = 0.155613741832;
    tmp_msg_0.y = 0.429122858914;
    tmp_msg_0.z = 0.841974777708;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NDIKNMYGSFGIISPQHDKMBYJPAQBEKJTFPXRVHWVHQBKFHRXWDJUSVKLFGUJAIZBXEPSBUPNUKCGQWKQSSWJZYMIVSHFPNDHEAWCAKMDZPMCORGIUIXULSZZCZFEIVATQGEVJNWU");

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
    msg.setTimeStamp(0.647537805266);
    msg.setSource(64437U);
    msg.setSourceEntity(14U);
    msg.setDestination(57570U);
    msg.setDestinationEntity(94U);
    msg.type = 59U;
    msg.op = 7U;
    msg.request_id = 49243U;
    msg.plan_id.assign("WLXJSQLTRSYOBAMTBGDSNEKCXBRZJUVVKAMSVYPIEJYDMIAAQMIUGAYGSGCR");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.143398160008;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UENOLWEXKEOFYOEUNWRQEYGSVJINLPYSAYSLGDRGCMHGRXXMOHHEXWBMBHVGAQPMMWKFGKZQQZUZTWDCCRAYLJNVHDIOJRHKFOJNPURSCMJQTPEYXLWQVKORUDDMEVU");

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
    msg.setTimeStamp(0.105562736491);
    msg.setSource(4109U);
    msg.setSourceEntity(238U);
    msg.setDestination(54631U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 34116U;
    msg.plan_size = 2702459486U;
    msg.change_time = 0.358047270339;
    msg.change_sid = 61217U;
    msg.change_sname.assign("KNRNDZZPXAYRCCHLBFAQHTEMRRGSYVWXEOKWJWKMEUGQGJUOOQHHRDUUSUIPEOVUZQTFFZZBAQMTPBSFLHUSNYYWECYLLQIVDOIJNLVOWTJLWKXJVKSSIZNCGCATBELZIBMIMBKHMTSDOURELHDHDCGQTWMN");
    const char tmp_msg_0[] = {57, -77, -117, 66, -67, 55, -70, -25, 55, 53, -70, -82, -93, -30, -31, 6, 121, 6, -110, -57, 116, -98, -32, 40, 39, 57, 46, 99, 13, -117, 40, 74, 16, -58, -38, 120, -120, -97, 57, -123, 17, -31, -50, 51, 5, 46, -39};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WDCIAHGNMPHKNNOXPLBEOZJFLPQUVIROBVNFJBADMBLCITRTCMFZMBNJUYEEHPGVUTNDURBTDCSSKAOHMDDBAVFXUKKDXJLTGNSEVICATGEHQRJXHGMBYMHQVZTCKKSERORYWQQIQYFTHXVHC");
    tmp_msg_1.plan_size = 43477U;
    tmp_msg_1.change_time = 0.0801669281258;
    tmp_msg_1.change_sid = 24751U;
    tmp_msg_1.change_sname.assign("UNRIFPCZSTHEZGQYLTJZXMIUVLXIDVQTBKUSLRIYPKBNBJFTUOPLIRBOBWMDFTGXCVXAKQCCTQKPAWLROKNLFPUTJGSFQJDCHFXWJBEUPIVMSMWBOIHBAESZFDJMDIERAFQHVGOOVYGSOLKOXMWWTIUEYGNGPSZBJVDXQHDWOPSNKMZTAUCKKJZCIAVEXLRARHQGZWLFR");
    const char tmp_tmp_msg_1_0[] = {99, -117, -17, 101, -118, 109, 106, -116, -105, 94, -44, 80, -107, 82, -8, 120, -57, -5, 101, -22, 125, -114, -61, -99, -126, -95, 58, -115, -62, 100, 55, 48, 63, -89, -83, -97, -45, -52, 82, 51, -125, 29, 25, 0, 46, -70, 117, -87, -11, -29, 117, -32, 125, 58, 71, 3, 71, 52, -50, -6, -65, 101, 118, -111, 107, 75, 49, -32, -103, 53, 19, -118, 58, -90, -125, 54, -64, -16, 124, 3, 78, -60, -46, -104, -96, -99, -60, 52, 39, 66, 115, -120, -14, -34, -117, 42, 71, 13, 84, 18, -62, 70, 56, 104, -5, 46, -79, -1, 120, -57, -55, -62, -100, 5, -64, 41, 51, 78, -76, 59, 42, 69, -55, -117, -74, 82, 0, 4, -116, 50, -116, 33, 77, 80, 58};
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
    msg.setTimeStamp(0.154348799959);
    msg.setSource(11812U);
    msg.setSourceEntity(67U);
    msg.setDestination(45487U);
    msg.setDestinationEntity(221U);
    msg.plan_count = 64514U;
    msg.plan_size = 2988828003U;
    msg.change_time = 0.352908277231;
    msg.change_sid = 25990U;
    msg.change_sname.assign("KERKMARHNCBHBUJNFYXPITJBGFHJDHVVGYWLIMKMSTLC");
    const char tmp_msg_0[] = {-23, -118, 104, 24, -112, -43, -72, 110, -58, -60, -64, -63, -70, -95, 79, -26, 85, 54, -49, 34, -1, -88, -102, 30, 86, 123, 119, -93, 4, 20, -68, 116, 71, -67, 7, 40, 48, 40, -126, 55, -3, -60, -69, -49, 2};
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
    msg.setTimeStamp(0.843458520696);
    msg.setSource(55284U);
    msg.setSourceEntity(149U);
    msg.setDestination(18212U);
    msg.setDestinationEntity(173U);
    msg.plan_count = 15U;
    msg.plan_size = 173463724U;
    msg.change_time = 0.127042907684;
    msg.change_sid = 5719U;
    msg.change_sname.assign("USFVWHXWHVIDVQAKAKIBSVPNSAFKXWBDDLZFSLETGTEKYOIPZM");
    const char tmp_msg_0[] = {-113, 85, 92, 56, -9, 16, -31, -44, -43, -86, -68, 104, -76, -119, -28, 107, -74, -56, -48, -106, -1, 36, -40, 55, 94, -54, 9, -107, -99, 47, -38, 5, -88, -76, -89, 66, 39, -125, -65, -54, -74, 98, -35, 96, -64, -127, 15, -66, 111, 47, -79, 36, -90, -66, -24, -67, -49, 51, -17, -80, 37, -6, -52, 5, -107, -58, 67, -71, -29, 38, -80, 14, -45, -61, -69, -90, 95, -123, 100, 36, -22, 114, -2, 29, 98, 44, 125, 110, -73, -55, -52, -64, 52, -64, -106, -41, -115, 22, -48, -25, -112, 98, 95, -16, -84, -40, 101, -74, -61, -51, 16, 100, 13, -111, 75, 90, 22, 48, 7, -14, -82, 97, -41, -108, 45, 8, -14, -11, 119, 44, -81, 32, -79, -19, 78, -17, 46, 98, 41, 89, -30, -83, -73, -32, 68, 95, 77, -7, -125, -94, 22, -27, -64, 121, 35, -64};
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
    msg.setTimeStamp(0.0760848661376);
    msg.setSource(19397U);
    msg.setSourceEntity(138U);
    msg.setDestination(33112U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("RYTSOKNSCMTXZKJQWQILARIETMZMGHKZFVBFNBOPRAYMHRTSVRXBSAJIEBVQPAGZFDSPKTMNFOELCICWUCXXCGZIUOAZHSYWUXHWDYHTKGUYQNPQMLTDYLFECPFJEQCJNPMISBIJLRMAPKANDJJXVRXGKUTIGDYLNGXDCDBMPSZQLOUZWUDOHPNBWWNVKZZB");
    msg.plan_size = 45015U;
    msg.change_time = 0.249419938217;
    msg.change_sid = 59940U;
    msg.change_sname.assign("PGJBDXQGLNOIPXIXZFWHZAAOPSSDBMTUGCWBEOOQCZDLLCBGFWDSIQLXPJJKKKEGANQJDVCYPRNKNRMANIEAASWRQSAVQEGLKYTVYZGOYMVOZYHHQJKUNTEFHNHWEZVBQJACUWTPRGCUHMMYCHLNNCPZBVVTVWGXOTTGJKWROTSLRFUSQTVFCEPLBUHFJFOEDXDONDMRACRKIYKUZWLFXXRIPIIJFZ");
    const char tmp_msg_0[] = {-80, 13, -114, -70, 51, -56, 122, -37, 64, 61, 97, -20, 93, -8, 14, 83, -117, -106, 63, -75, 12, -38, -78, 90, -122, 88, -92, 121, 42, -114, -128, 19, -113, 6, -77, 73, -19, -18};
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
    msg.setTimeStamp(0.836262912871);
    msg.setSource(63138U);
    msg.setSourceEntity(161U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("TQZLTAVKBORJFDSGAJAEQYWJVKOYTGCIHCPNGISNKEYLMBLKWYOPTJAJUVYNLMBLIOKMSDIQZZYWCOKIAVRAJWFZUXNQPHBQAQSTQNOOXMKVHMWXEPXPRZBPGGCTVRMJFIGEXMWHSEUMCEIPNCFZDXUGIBNHEWSPVLDSUBZ");
    msg.plan_size = 51659U;
    msg.change_time = 0.694726030524;
    msg.change_sid = 54353U;
    msg.change_sname.assign("TOVJXQQCXXQLIIMGHLKBNJKBGPQCIOPKKCHYTVHFHUPIDMHRZSZSCKXWVHIYPCTEKMZNTDJYDLHHMJRILSGPOXDOEAFUAWYERNBEFKBACUPCTBSGSGDOITROKXAPFOWDJGBEDTIRDZVHCJUMYZWMVFLBRTWRQQUWSFJOIRWFYBQDMZUUNWIEAYZSMWXNCRBAGTNXJAWFKYOZLXXAYYZUTVESGLNNFJQLUPALKVEVZMLNURVJSVCG");
    const char tmp_msg_0[] = {-19, -76, -41, -72, -25, 11, 71, -91, -67, -82, 107, -119, 2, -20, 14, 9, 103, 106, 17, -68, -90, -51, -76, -46, 93, -79, 69, 80, -51, -79, -19, 37, 67, -115, -54, 78, -26, 6, 39, 74, 95, -54, -94, -62, 50, 38, -59, 29, -25, 96, 61, 69, 101, 32, 8, 125, 93, -58, 121, -22, -99, -47, 90, -32, 116, 90, -4, 78, -68, -103, 28, -103, -23, -102, -54, -13, 50, 22, -52, 111, -102, 85, 49, 27, -84, -37, 65, -81, -28, -23, -54, 96, 75, 74, -74, 26, 59, -39, -3, -25, 105, 110, 89, -87, -11, 8, -124, -94, -72, -34, -71, -32, 113, 72, -12, 95, -32, 51, -11, -119, 4, -23, 50, -125, 75, -34, 78, 14, -86, -85, 91, -15, 72, -114, -117, -56, 9, 52, -126, -47, -27, 117, -28, -62, 75, 114, 2, 2, -39, 102, 115, -49, 8, 100, -92, -37, 74, -29, 82, 97, -124, 115, -12, 70, -71, 11, -95, 21, 66, -54, 45, -116, -78, -95, -45, -26, -53, -67, 92, -13, 60, 40, -113, 63, -124, -51, 37, 14, 21, -94, -25, 123, 40, -74, 74, -21, 46, -12, 115, 60, -74, -8, 62, -126, -79, 83, 71, 27, 55, 102, -15, -119, -112, 24, -76, 76, -122, -64, 85, -3, -124, -19, -124, 41, 32, -30, -33};
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
    msg.setTimeStamp(0.673648433163);
    msg.setSource(9962U);
    msg.setSourceEntity(10U);
    msg.setDestination(22134U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("VDOTRALZCXSLHDVZVGBAHJGKFIZLAWGDTMZCQBGIKDCAGHKCQPZUFECXIGKCBRWDTBMFPENRHOVEPFOYSGXWFFHOYWJTXHBWISESCSPJOXSWNCMEWOCRRXTLNSRZDIYBSRYMTLGQPTKMXM");
    msg.plan_size = 38813U;
    msg.change_time = 0.534318695765;
    msg.change_sid = 65107U;
    msg.change_sname.assign("LOSEYCHEUNOFQWUYJDPLVIWAAIRFXBRCTRXXRBSHCQXEGEEMVUOKAZCWSBE");
    const char tmp_msg_0[] = {-87, 78, -27, -118, -85, -63, 23, -22, -32, 115, 74, -125, 50, -81, 99, 35, -90, -67, 40, -80, 101, 55, -54, 106, 26, -111, -95, 70, 6, -102, 16, -97, -80, 84, 55, -48, -112, -127, -67, -36, -117, 64, -16, -57, -101, -99, -17, 81, -1, -104, 91, -4, -32, 34, 105, -80, 111, 117, -29, -59, 90, -91, -18, -52, 69, 97, 75, -39, 57, -3, -30, 98, 69, -111, -37, 2, 121, -55, 119, -34, -59, -53, 114, -14, -48, 101, -121, 31, -21, 115, -98, 113};
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
    msg.setTimeStamp(0.531777192958);
    msg.setSource(45508U);
    msg.setSourceEntity(21U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(174U);
    msg.type = 46U;
    msg.op = 44U;
    msg.request_id = 30827U;
    msg.plan_id.assign("WUKZUUIYOGCWLZSJEIKLSJBKLUSRVWKOBQSDDDTAHEQZFSBYVXESCXYQTOWPXVPQLBDCLJHMTIHJBRRYLGFMMAICOBIXHLAOAUGPYHHDNOORYEHNFQJZYZVFGEPJOZNKPIKTKXNIWRDZHERVKXWXRGAWMAYMPSIFAACWEHYPUFGQCZAEZBXGIURFYZTVMLJBVTCSNQVHAKRQTVUGTOMMSPFIJNJLUNOTQFBCNV");
    msg.flags = 46567U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 41346U;
    tmp_msg_0.custom.assign("PFZWARVVFCEQDHZXZQJQVDPWTXVFUBHJYPSIYOZBCGEOXKUFDDOREUAHCAPFMRHPPYAIOTBLDVS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XHVMSVYTNYOKJKUUCFLNCWFYIZGHZHDNYFVBHIIOQOQTGASFHFZRLNPBCJFOWXKRWWTTVZPSKVTWQAJECUXQMXWLFAULDHFOMXJLGMPNJZTXQCBVEAOCXI");

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
    msg.setTimeStamp(0.954782037453);
    msg.setSource(28022U);
    msg.setSourceEntity(135U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(22U);
    msg.type = 221U;
    msg.op = 116U;
    msg.request_id = 4077U;
    msg.plan_id.assign("IUFJXNAVFMTSLKLMHIRLCQDUPEOBCUUNOQQADSAHONUDHMDEYRFYBOLWQDLQIDZZZTFEZBOYXVAMXONSLYWLQNSDRHERYEGRYKOKNNKVQILKSYGPJAEMXFWPTWZJJNFTIHFHEHIJPPUDCLXGITRYHJBYEKZZGEVP");
    msg.flags = 7991U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0968388835358;
    tmp_msg_0.lon = 0.274846127162;
    tmp_msg_0.height = 0.093583163003;
    tmp_msg_0.x = 0.357971731892;
    tmp_msg_0.y = 0.232995557715;
    tmp_msg_0.z = 0.66134638646;
    tmp_msg_0.phi = 0.0239082157654;
    tmp_msg_0.theta = 0.0668966193403;
    tmp_msg_0.psi = 0.725898295577;
    tmp_msg_0.u = 0.906505669969;
    tmp_msg_0.v = 0.825971572495;
    tmp_msg_0.w = 0.486302560051;
    tmp_msg_0.p = 0.453877063369;
    tmp_msg_0.q = 0.689592933066;
    tmp_msg_0.r = 0.0756392210309;
    tmp_msg_0.svx = 0.302795404143;
    tmp_msg_0.svy = 0.891410630942;
    tmp_msg_0.svz = 0.850769877336;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SDOKWJYQXVORXESWIZXNXUZWDJEBZGSDRVFWZZXXXPVLKVPATCPELISMDVBLKAZYCEKIFTIUNKZYJNWHHHWHQXSSMNMBWWGTISNFUWHPEBXQOEIOUMJKGJTAOREYZOJQPGIJAHGTUNCUQRDKFUCVLBEFQKYOQHRBUQRPRTDGFFBDTPMYTILACSPQBMHNHLLBNVGKHDJKOTUMLDAFPUAINMSYQFVVOMEGTFCMLCBSYAECVGDRACXGZ");

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
    msg.setTimeStamp(0.833716193759);
    msg.setSource(29934U);
    msg.setSourceEntity(172U);
    msg.setDestination(11352U);
    msg.setDestinationEntity(146U);
    msg.type = 192U;
    msg.op = 191U;
    msg.request_id = 44202U;
    msg.plan_id.assign("DAWSCKOTFSIDDPEZEJSPQHGPEWZQYRNPPAIPNENCNDURJRZAEPHCNXGIMOZ");
    msg.flags = 43399U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 120U;
    tmp_msg_0.op = 157U;
    tmp_msg_0.plan_id.assign("DNLZELFDQHMXBRKBLVKMCMVUEUIJAKEQWKZGWZOTJMGTHBHKSRZMGUTQNYMPSVIHRYMLJBNLPNVOEWLHAAMRXWNNYWPTFJRSZALPFHBGBPSUJJICAOVDXSGJYKBRJKTCVE");
    tmp_msg_0.params.assign("OUNVSNWFARGJIRGAMBT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LSHRWDMWCCLKMWNPIQWIHKDSULVEPZERPUVOREOOYCALPBYMTEDEQFMNWVORDEUFVTLFVRNJRHDIYHWIDCBBOJBGKDMZKGGUZCTFOAFEZQFTMSJBGQHNHYREBAFLMAVOHNXQZGGVPUXSEZZKTAAXMPJBTTSJRUNKZLSDQCADOZDXVMQXARXIRIU");

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
    msg.setTimeStamp(0.140887756603);
    msg.setSource(26797U);
    msg.setSourceEntity(50U);
    msg.setDestination(22743U);
    msg.setDestinationEntity(113U);
    msg.state = 216U;
    msg.plan_id.assign("VTMSGBJSMXUPRCDDCTPZYTXWWAPHIKIANNFHAXXPDGOQUDMIKFTVVJRKUBMQTQLLILAZNOWWCKYDNZESOPNLBNOHOHFRJKEMAMHHBXMWFIVXTOCUUA");
    msg.plan_eta = -1911986889;
    msg.plan_progress = 0.271734819566;
    msg.man_id.assign("BHVBEZDZISMSVCCNQEYCFOUYKAKSWFNNEPRAVQUJQMAJASJQPEDCKVGIAXINKXSPJVFUQOEBHTZIUGRQCKQGZJDKIMJAACRZWMDHVMRTWAYXBUHFELULTNRZBXVFZSROZMYONYHNTHLRXSCMETSZOOHHXBXGODTQYLJMHFYDDGPNWBYYGBTRIWUUGY");
    msg.man_type = 56782U;
    msg.man_eta = 1103156963;
    msg.last_outcome = 94U;

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
    msg.setTimeStamp(0.696736258327);
    msg.setSource(15852U);
    msg.setSourceEntity(93U);
    msg.setDestination(17129U);
    msg.setDestinationEntity(225U);
    msg.state = 85U;
    msg.plan_id.assign("CPPFNKQLTFMMUNYCQTHULNRCIDBFMVGKEJYPZOXCLRHNGHCDUHRETSGIGAINSVYJJGWWKKCEMZHFFRQCWHVXIHTKUUIQJSWVOSBNHMVDWOLCEEKTIXPUULMSYBPHFBXZTFRINRXDJVJWTQOWUAKXGYJHEDLPEXEAOSVYPWBAZKQDYRAQZYTKMMFSDSGABLTWZMLULFJ");
    msg.plan_eta = -1571270734;
    msg.plan_progress = 0.998208524853;
    msg.man_id.assign("JLRYIIEODXLOOTKZPLNJQSNDGRIDCFFNGXVWHGWTQJNHERDNVJOIUWDUIEKTVVSTMONMQBCXDZZLMFKA");
    msg.man_type = 62669U;
    msg.man_eta = -1264664843;
    msg.last_outcome = 128U;

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
    msg.setTimeStamp(0.42005804588);
    msg.setSource(61853U);
    msg.setSourceEntity(181U);
    msg.setDestination(24550U);
    msg.setDestinationEntity(132U);
    msg.state = 233U;
    msg.plan_id.assign("LQPZVEZHDCOHDACSUAAYMTSFBLXNVIXXDULZVLHOEEZPOEITDZVLORCSFFYFEWTROWGDDMABNYVRJNEDIQLKRHFZSCWKAGUNXWGPINBAQGQYRJZTYPVKEMJMSDKFSVSWZTHN");
    msg.plan_eta = -1715339675;
    msg.plan_progress = 0.840528668694;
    msg.man_id.assign("SDQZCXMJSXQWYXEDRYVXOOEGXEKQNVDNKJQAGHVBVZWRERNOPGKIMAKPUOTWRFZTWASKSPCFNBBYWBCQMBSELKNVJNZQQYAIISPTZBMYEAYZBWWEWFQNMJRLAUGLHERXDHJIIFHCOCMVXEIQOYLGDRRNHGDJCYZZCIVFOXCLIJSKTGHPULUOVWUTDPKSXTMUMUVJGUFRDTPUAPLKLPYNKAIEIOSFGJHHNWDCVBLTUHAFFBOYTF");
    msg.man_type = 50265U;
    msg.man_eta = 1049432953;
    msg.last_outcome = 124U;

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
    msg.setTimeStamp(0.826148337079);
    msg.setSource(18828U);
    msg.setSourceEntity(172U);
    msg.setDestination(63838U);
    msg.setDestinationEntity(177U);
    msg.name.assign("QHVXJWXVSGIGIQTGPCMWNNDHSLEMZOOCNVMTKJNZEOQUSHEYNBHFFACZUSIIXMFKJVUCCLAAZ");
    msg.value.assign("CTUTBDOXJXWAZPFSXIRJOEAFIYORXFUYZGCMIQWCRMPVZVJKEPDYUYYDBDTLHXFESVJDD");
    msg.type = 155U;
    msg.access = 148U;

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
    msg.setTimeStamp(0.528557699744);
    msg.setSource(34459U);
    msg.setSourceEntity(205U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(212U);
    msg.name.assign("CBQDUOJURRWVYMRZCSEZEYVEFZNGWHGGHDBIRWYTJDCZYIKSNAKKNLWIGQRDLAABXYOGFPPYOMTKEIGYHCGXAHWMQVFBVITIXYJLAHJUMQKFJBMTPITLOVXAGFDJCVQJENEFFCBELMIPQKHXTOUCADKNJHKXDWLQQXRTNXNGXSOSMSAUEVKTXMWRMOECLSOSCJQPPLRUZUFHYJUASWO");
    msg.value.assign("RGJEPPSTKUMHBZHYDYZPFKWLAJFBVVSMWTRZXYPYRURUAIWNULDRWUDYPYNSHGZWLIVAFNTRNFMVXOZOXARKUIYOAXMXKLIZUHQWEKWUCNSIJEQPTPLJEXGCAZSTVQYDOKJLJOGMCEHLBPQRGSFQIEETJVDMVVXQNOQFGCDTYCMBFZMSQHAVNWRCAFGGGRDCMOMHTBQIUDFGNHXFSSIBYWOTWJJHNBLI");
    msg.type = 190U;
    msg.access = 171U;

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
    msg.setTimeStamp(0.97104994761);
    msg.setSource(62025U);
    msg.setSourceEntity(241U);
    msg.setDestination(4549U);
    msg.setDestinationEntity(199U);
    msg.name.assign("OTUEUVIWPXURPWBJEWLVMCPTHBAKUTXSFVBFMUYHEURBUZBZDMJMOZTSJAWOIUVHDAAGFLSVBOSWXTGJPFSNLSQOJAZCTDKVQQUMHLJABXKESSAOVHPYNAYECXHELUDGRYPJLZRVDWGVTMHKQOITMPCDYNWMTXENLTNQFDKFZCRYI");
    msg.value.assign("SVLFSADIJZBFPCKTGKVCZYBRSRZWCXPXJAQVAAQUARVCYHHNIYAKGPUJSFLBVQMQNTTQKBKMYULOXYZNDRVTNDGUSWGZOIOSHWYEWTCDWYBMWMZHOPZJWZHJRDUQBTESRLEROIMKGDZXYOLIKBWJOJISPRJMUENREFHPUYBIGEPFAQVMFXWTFEUDTKDOUYNCINENPFJHMPFHEXSNIZAHT");
    msg.type = 51U;
    msg.access = 138U;

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
    msg.setTimeStamp(0.796247511542);
    msg.setSource(22252U);
    msg.setSourceEntity(35U);
    msg.setDestination(41U);
    msg.setDestinationEntity(44U);
    msg.cmd = 146U;
    msg.op = 83U;
    msg.plan_id.assign("XWCSRZYZAPPGKVOHPXPPYMWTYYVQONISTGOPQAUTNQDEJBLVGOZSFCTLMWKQLJHDEZXMRXBHECAGNRHBMMRZYBNHWKSVNEUFLJQPEMCYOTWJXWB");
    msg.params.assign("MMHLHOIWNTHFBRXOZCIEUASGZEBRZAYZSJZEJXHMEQSDVFPSMGYPCSXDTCXXXVBIPJWRZLNPMIYKSYLOWGUPRJTDOJTVKWABQPLNYBCVIYNIDQVTTMPSNEXFFAUFUUHLDQUDDMNENRYMUQOMEAXNHVLNNOBLCQAGGHAPQGAQZJFWZIQVK");

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
    msg.setTimeStamp(0.0533779407378);
    msg.setSource(3943U);
    msg.setSourceEntity(231U);
    msg.setDestination(30804U);
    msg.setDestinationEntity(238U);
    msg.cmd = 250U;
    msg.op = 151U;
    msg.plan_id.assign("EOGZVXXDKNZAAUXWBWVISAZCSNOPQJ");
    msg.params.assign("AIZNPWZOCXKTIUQEEWFJFIBQDFZUYSGVHJRQXVHJYNOHEIYUHMAVKPXKOCXZGZLAYTKRHNIWMLKLMEWERFCMVHWTGTRDIHICTGCNSAJTQKLZPLEJBURD");

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
    msg.setTimeStamp(0.988571649604);
    msg.setSource(10201U);
    msg.setSourceEntity(227U);
    msg.setDestination(27316U);
    msg.setDestinationEntity(39U);
    msg.cmd = 62U;
    msg.op = 31U;
    msg.plan_id.assign("QAFRRBMTHUICWHCLNWXFWICJTRDKSPXNBVSLQKYDCKOREUUOTSZZTXLXBHGYPJXLOXNVNJRSZWHVPFULWQKEOVNYVBPPPHXTHJEJSWEWXGQDJOOIDMNMSGYODOBULCCCOQDUGSEYEBWGHCLIPQFRIKETILRBAVI");
    msg.params.assign("FPQDRUFLGDVELUNHPJDNRWNMQBFXOUCNWOZQJXOXKMEMMHNFGYWMIWRFSFGWJADZXVXIBFHCMTDRBWHYQZTTPPGAORQACLVBSYVKWBISEHFMFUUUHDCEZAMLCVAJDTSKEPTERNNTRJIBLYFYEAPWSRUAZULKKOBNHYDNTYJEKZDSCIVVOASWGIYMBOCSRDPXLKVSYGQJ");

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.427748825343);
    msg.setSource(26637U);
    msg.setSourceEntity(47U);
    msg.setDestination(64266U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.326521586609;
    msg.lon = 0.386707182745;
    msg.depth = 0.159329528061;
    msg.roll = 0.481626439361;
    msg.pitch = 0.121946403832;
    msg.yaw = 0.910267811252;
    msg.rcp_time = 0.678739889558;
    msg.sid.assign("DENTBMRKSIEMRYJQNVFRHAIHBHLKMYKGYAFQTBMNKFQHRPALEIGQGOXLIWSOSWLDUXAOIUVUSJNCZVWTMPSZFHBRNKBRPGMDWKXRYGUETSVFRLXTZWQAPZJDIINOVFLPMZWBPACZJFQEAJCPCRTTJJFMYIJIPWMBUGMUZVGQBULFNGZEQTDXTXOICKOSODEAXYKXEBVCSNQVUXHHUGNHFBSPCTDAAGJLYRQDOZOSZNOH");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.590500940338);
    msg.setSource(37908U);
    msg.setSourceEntity(239U);
    msg.setDestination(1292U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.904799061479;
    msg.lon = 0.14081833987;
    msg.depth = 0.71732968382;
    msg.roll = 0.718332385821;
    msg.pitch = 0.476871950577;
    msg.yaw = 0.212286789585;
    msg.rcp_time = 0.853764857182;
    msg.sid.assign("TSKFLRCYKKPRCXRHZDTQXDTUVCAGEJHTBFIHVFFTUCPISBWXAJPIWWQBXJYLQBEJSPOCUVGOEZXNDHHMIKMYYWHASAVDVUQFZJATNNZHRGIUGWNXLPAIFJUDGWZZGEJJRELTONBZAPSIMOMLFSSERBBOYNOTICEVMOHRNOYKDJGUNYBJTFLDAOHHFQIPQCYCUV");
    msg.s_type = 93U;

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
    msg.setTimeStamp(0.472671966378);
    msg.setSource(9790U);
    msg.setSourceEntity(201U);
    msg.setDestination(45034U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.861123614564;
    msg.lon = 0.74683741186;
    msg.depth = 0.295088188676;
    msg.roll = 0.505774418346;
    msg.pitch = 0.581865317451;
    msg.yaw = 0.306931663086;
    msg.rcp_time = 0.313692411897;
    msg.sid.assign("APNMVHDIPVJEUJBIBNJQXJRKJYCGCRQIYPOWJSOXOCMWYTNSUIREBZDRFVLMMQTQLUOCBWDQCBUACJFKZJMWDVFKOXLPA");
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
    msg.setTimeStamp(0.361954448487);
    msg.setSource(9990U);
    msg.setSourceEntity(185U);
    msg.setDestination(55888U);
    msg.setDestinationEntity(57U);
    msg.id.assign("CRJXETREIYKMUBXRLCCGBCHZBITHFDZAOHUWEHIGEVHXWMWUVMYKFTSVSAZYQEBPVPURPQFZALGUQLBHRDGSKVLIQOIKFYZQRONGZZMLTECKGKHPAYXONQYSOFUPJJPSIALSZFDOWJTKMEAVEPOXGAJDTNSNUINDWOOBRTKFGYMCMENDBQKFVCJSIOVYDNUPRYWLBFIVJPWXZFCXXDQAZQMJQLMGSWNNHWGATCBECTD");
    msg.sensor_class.assign("BMHOGZXYVCAEIEGQWKCSRIPZWVAHCABTMXUAVSYUZNBLLAEDUDHBSBKLNYDVBFTZGWEFHBYQACQDFTQMGEXKQWJTWOSERBKDGMIYWTLUEEZWSUGTBCKKOQUZVMZLVHESMCZJWUKXCJITMJOOAHFJWTGJRFFQNRXNXIPUCAPEXONRFNLIUHJDLYYZSTXGYPOMPSOKNGLHXQIPPRDMVLT");
    msg.lat = 0.064255151344;
    msg.lon = 0.9795233145;
    msg.alt = 0.123013919692;
    msg.heading = 0.00600758948113;
    msg.data.assign("BOODSUGNZLVACTFCGZHDKIIFRTDAWTKYRQQOEQGKJAGUMUTIEUNMEYHHORMTPXSPAZKRJSAXBXNSNTSPCGGWPBXYIEUSHPJGVELNOTBFRRIGMSCNPDQCXJSHTJIPIMZELMYPLFATHQYSXWOYKDMXGIHUWOLYDHBBZMQBBZKXQZAEJLRUVFHZPUYFBDERWZJXJRAVIRYMNYAMDKOVF");

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
    msg.setTimeStamp(0.644660071834);
    msg.setSource(30228U);
    msg.setSourceEntity(136U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(73U);
    msg.id.assign("CYARIMPTJUZTZACRPSOBJZEEJCQYPYMIHFUPAOVQBCKOUQATTYWXHXPGNGRKBVXMXUKGLFKCMNYDNLJVVOKKYQRFLBGTHGRUJPALHAESWZYPIXFHPSJGWSMBCODONLEHDXGHNXRKATPAJCBRALDSEWFYCSMFGNHQFMNSZIVKDZFHOZEGUNUBIJWOSPLRGYDIVLJDZDWMXHQTVIWXBJIMKSWVQXARZETQOBFRWTUNIB");
    msg.sensor_class.assign("SJFYMWWXOWFSJOLYYBRBCPMUMMSYYZEEGXAUVHHNJLPDVKVNIRKEHTOJEEXJVNUQQVDHHTMIWXKMDDXIATFVDCADZUOFFMXKXZAWQCVLSKZSJHQNADWNQRFZVITTYRZIWRLZKNUMFULTBIJJFXKLVBTGTQOLRGCIYHOHWNVLDAPPGSQOEZBIPFPUYWCOAPZQMCSTCFGAIUHGOUBXZNYCKPEGXRPSQ");
    msg.lat = 0.113368578961;
    msg.lon = 0.167232585357;
    msg.alt = 0.225521037204;
    msg.heading = 0.331164014015;
    msg.data.assign("TVMLAKGKQXEDWFIHZYVICPUHZPHCTEDMDLIBPKMSKCGGJBVKFJRYCQRQWWPHFUZJOZLBWMONYDQVLRDUYBAAJWYASUTXXRLFTNBPDUDCTIPHTJQGIVXHYZOVBOVHUYCRAEUYJWZXXRFMXKSM");

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
    msg.setTimeStamp(0.210593422624);
    msg.setSource(63256U);
    msg.setSourceEntity(189U);
    msg.setDestination(34955U);
    msg.setDestinationEntity(250U);
    msg.id.assign("TCHYFQZASMRKXOTCJLGNRVNPIJDFEUJSSDVMIZFXCZESCCHJIWOTJCLROIYGYZWATYIXQVNIPNDNXYAMBOSHTJAQYVUUSFZQPBJGGVQBDTHGKCWOUTMPHOWPOKBGNQRTGISZULYXARRKMFVUNRMMGJZZOEDMUWDPUKOYNDKHLNBTQLAAQHDEMZEEULFBFSRWKRPIEFVOTXEGDFBIUWJZVF");
    msg.sensor_class.assign("EXDDCWNAALPLGNYOZCHRIZHWFLEZSCDCKMJGHFAHHEXTDALHCRSPSPJOFRKIUNESUJLIUJWWJQNYNBQFCJJTYZVWKMTYOOQQDULPRUAMXBNIGVSGUHETMAOTBYFXYBSMHMUPOWBXLVZVBGQXB");
    msg.lat = 0.98261724358;
    msg.lon = 0.371866282649;
    msg.alt = 0.822131307596;
    msg.heading = 0.983092905343;
    msg.data.assign("KXMCFMVVHPQCXFPVHPULLOTYYJPAHJEMAJDGJFSUSRMVRBWNOORQNNFYWQDTHQGR");

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
    msg.setTimeStamp(0.973341225907);
    msg.setSource(56387U);
    msg.setSourceEntity(195U);
    msg.setDestination(63065U);
    msg.setDestinationEntity(47U);
    msg.id.assign("FWCGWGYZVHPVWFEDZCAHINEKNUOKZJBHGCPJQNPCIJSARJSVTGDWKOHMYPTGOVHDTONJGAOTXAHSMUITZKLFBURDEKFISDCYBMNMKAYLGETUENHQASFLOSYSP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RLRHGWCLODMVPDNPFSGNCKZBSOTFMAJLYLJKAQQWRSSRILTBHVZEUECMKVLHKZLBGCUWUMJOUCS");
    tmp_msg_0.feature_type = 238U;
    tmp_msg_0.rgb_red = 162U;
    tmp_msg_0.rgb_green = 46U;
    tmp_msg_0.rgb_blue = 163U;
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
    msg.setTimeStamp(0.596579140837);
    msg.setSource(55273U);
    msg.setSourceEntity(117U);
    msg.setDestination(22875U);
    msg.setDestinationEntity(79U);
    msg.id.assign("ZYOBUSNTBZFIAEMXTXXUXIEWYKSDLBNCHRSUCPARMQMJGWMTPTAHTALIB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YUBDCEZKRIPEAZPYAKYWEAOVQMDNTKIDJTFOMNNUULTUNASATECLKKYJAZYFJQYCRHVPCVERNKGAHSYZOCWUHFGWWAJCAQCDXHGBEDCHIRYUKPMMXVIJZTQMJDSGHRNKTFQWFLDSTOSVTFCEMGRUFYGEOIJLSIVUIBHPPOIDXOXMENDSHBFRXBFZNLQLQUTBSMLAOQLRISWKXRSXOKBIWXVQPCEUMGZHJTZGPJFZY");
    tmp_msg_0.feature_type = 26U;
    tmp_msg_0.rgb_red = 203U;
    tmp_msg_0.rgb_green = 210U;
    tmp_msg_0.rgb_blue = 152U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.574994303082;
    tmp_tmp_msg_0_0.lon = 0.905259240729;
    tmp_tmp_msg_0_0.alt = 0.819275128754;
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
    msg.setTimeStamp(0.192766951979);
    msg.setSource(9567U);
    msg.setSourceEntity(204U);
    msg.setDestination(29422U);
    msg.setDestinationEntity(167U);
    msg.id.assign("HJYTEWQGUNAEYTMFNPPCQGRUJGNCLEGWWJHQVUCKYOXOFFMIAKDSZTOODXMFMKBJXUSRHFHPGBUZHKLSWCSQJXVAZCYXGBFEJORKPLVVWQGNVCLLLFBXDSUDJMRUZHTAYMSUNYEBA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PRGYGUIKWXGFCHRVTIACEJGJJVZFEDRHOAUXPAHSVEIYPUWLDOQJCWMKWJDOJIONKZBTFVXKMBBNHCXKCYRSHZZHMNVMWFZNJUEIKWTKQECBBUAPDKQWCRDYBRKMSBAGDURODOTTZMENWQLASKEF");
    tmp_msg_0.feature_type = 56U;
    tmp_msg_0.rgb_red = 109U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 20U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.508101085397;
    tmp_tmp_msg_0_0.lon = 0.953649837266;
    tmp_tmp_msg_0_0.alt = 0.0509743376985;
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
    msg.setTimeStamp(0.75343594547);
    msg.setSource(6078U);
    msg.setSourceEntity(148U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(30U);
    msg.id.assign("CJLKASUHQLDDAKTPPTSOOEUPZPVCMUKKOUANZRCCGFZEGMAXEJJNIXNJIVXRQRLGPPYJFXBVBAUQRQCUHMDHQIBHCSC");
    msg.feature_type = 90U;
    msg.rgb_red = 154U;
    msg.rgb_green = 142U;
    msg.rgb_blue = 63U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.811301772159;
    tmp_msg_0.lon = 0.550648786412;
    tmp_msg_0.alt = 0.342758306865;
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
    msg.setTimeStamp(0.213861132608);
    msg.setSource(18479U);
    msg.setSourceEntity(81U);
    msg.setDestination(24233U);
    msg.setDestinationEntity(24U);
    msg.id.assign("FYGAORFYJUPSZFBVOVFUVFKFZXUHQBRBPBBTTKDICMGPEHNIKQRQSOUYMMOEGCXJRGWTHXBSOLJYYDOLEHBCJCGS");
    msg.feature_type = 192U;
    msg.rgb_red = 224U;
    msg.rgb_green = 193U;
    msg.rgb_blue = 100U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.30279885539;
    tmp_msg_0.lon = 0.604694779105;
    tmp_msg_0.alt = 0.155292223088;
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
    msg.setTimeStamp(0.742250544623);
    msg.setSource(12358U);
    msg.setSourceEntity(133U);
    msg.setDestination(31893U);
    msg.setDestinationEntity(105U);
    msg.id.assign("JJITTEVLJIFDQFCUVNNQGPHGAYFYOOMOYJIUFRRFLWSWJMCGOTJFBMZVGWULXLLUZNPEHDTYKXBCRBYJUQGASDSTFBNWOUWDBEKGPINFZOQXHHKARICSZCVTZIPGMKWXCNPFVUEPBVLJYDPODNQSRHXCAVIDMTALHUWGKXGKTNVRBXAMRLVGSDS");
    msg.feature_type = 82U;
    msg.rgb_red = 60U;
    msg.rgb_green = 170U;
    msg.rgb_blue = 89U;

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
    msg.setTimeStamp(0.833072571679);
    msg.setSource(46577U);
    msg.setSourceEntity(3U);
    msg.setDestination(6421U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.475833015306;
    msg.lon = 0.434088785405;
    msg.alt = 0.275260948365;

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
    msg.setTimeStamp(0.856832566686);
    msg.setSource(11892U);
    msg.setSourceEntity(89U);
    msg.setDestination(50369U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.353162047686;
    msg.lon = 0.596455561147;
    msg.alt = 0.496512831774;

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
    msg.setTimeStamp(0.842788789878);
    msg.setSource(57306U);
    msg.setSourceEntity(49U);
    msg.setDestination(9474U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.407944064802;
    msg.lon = 0.325928164341;
    msg.alt = 0.989426315602;

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
    msg.setTimeStamp(0.499952147253);
    msg.setSource(59397U);
    msg.setSourceEntity(55U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(72U);
    msg.type = 161U;
    msg.id.assign("ENLYBOVZSGNSMIVMAPHESBWKURTMXZYOAWIXWYZTVYLVWOYYFNLGGLERFEHRPZOENZJQCWMPKPMHGQZONN");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.115940076839);
    msg.setSource(41924U);
    msg.setSourceEntity(111U);
    msg.setDestination(23216U);
    msg.setDestinationEntity(110U);
    msg.type = 118U;
    msg.id.assign("SXBGCKDEODXVPSZXOLNNGSGHYEPLHPDZVYXLQBUQSSUIAAILBDWZRUFUTPRRDCGKUCCVPVMSELXMKNICIZMTYABZGKPYMP");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 22423U;
    tmp_msg_0.name.assign("PXGIPGDEZWOBNTESOQPNUSFSRYKSIYRMJROTRYVJWMATAVRUHMEXDVODSCHBCFRZBIGGANAXMTLHSQKBMENNWZUNZAKXQJYLSOIIEMRJCBYELQUGPPCXFKFXSDASDKNCBOWHJWMGUCAHWKJNATQHDFXZZKQNPZIQDBLUXIFYZPKQDFCTSLGJYTLWTQPHJLOXEGABD");
    tmp_msg_0.custom.assign("WKWIPLOYNPWEKBNBCRSPTPXSZWGLIZVOMLOZDZHIMQJAFJXOWTMAAPAVFZUTAHQAJESVUMQRMPGIITOVJEGGXUCROFGQKHEDKGMCJHVLODFBKVYWAJQYQWRWRXETFEAZEPNBGXRCQGUDIYXSEHODYNKBCIDMTKLHRKUHHSLCNCUN");
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
    msg.setTimeStamp(0.277506945009);
    msg.setSource(30646U);
    msg.setSourceEntity(250U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(237U);
    msg.type = 55U;
    msg.id.assign("YXKJRWHGGBWTVYAZUQNNPMHHVSUXZLCDLBOPIFQBIMO");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 1983459357U;
    tmp_msg_0.lat = 0.75358842093;
    tmp_msg_0.lon = 0.772669469897;
    tmp_msg_0.height_ell = 0.358516210197;
    tmp_msg_0.height_sea = 0.694398132395;
    tmp_msg_0.hacc = 0.395464377674;
    tmp_msg_0.vacc = 0.0932136913012;
    tmp_msg_0.vel_n = 0.404498432962;
    tmp_msg_0.vel_e = 0.606864116237;
    tmp_msg_0.vel_d = 0.396328775946;
    tmp_msg_0.speed = 0.539786296635;
    tmp_msg_0.gspeed = 0.0380587578384;
    tmp_msg_0.heading = 0.997191056029;
    tmp_msg_0.sacc = 0.892460981576;
    tmp_msg_0.cacc = 0.48185278934;
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
    msg.setTimeStamp(0.75696877072);
    msg.setSource(22690U);
    msg.setSourceEntity(156U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("UOAHNMIFKQRNGJAROAICCBFTZDITHLYEZSVUEUCNSBNLUYTXIUBXFNRYFCCPKIGMJSVFZHQEZDORWBYHLRVTMDEIMZOKAPBPCBFCLLXTPIUMJGQTDJGQFZAHKKQWLT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ILKYWGKPVUNKJIY");
    tmp_msg_0.sys_type = 159U;
    tmp_msg_0.owner = 23037U;
    tmp_msg_0.lat = 0.13569487845;
    tmp_msg_0.lon = 0.00265024875841;
    tmp_msg_0.height = 0.466593398202;
    tmp_msg_0.services.assign("NEIOSGYHVGRNPVNNZDZDJHRXKVRBOYEDCUZ");
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
    msg.setTimeStamp(0.333602001382);
    msg.setSource(41212U);
    msg.setSourceEntity(124U);
    msg.setDestination(8316U);
    msg.setDestinationEntity(197U);
    msg.localname.assign("KUWQJBMLHPCJDAHWFBPZYWUTSS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SDJKMELMWJBBIZTFFASAGKPUYSMCDXTFCZHXNMJFSOUWHWXCVPAAIOFCQHMHRCSXUJEZSOPGARRAT");
    tmp_msg_0.sys_type = 78U;
    tmp_msg_0.owner = 19259U;
    tmp_msg_0.lat = 0.492924451294;
    tmp_msg_0.lon = 0.772655955978;
    tmp_msg_0.height = 0.943939862058;
    tmp_msg_0.services.assign("XBDDGUOJNFPBLUWSJDTWAPHBSRBFRHNSTULYKYCNAFGIXMNGAHHQVTZRVDJYRDUOPPLELNPWYXEZMGVTEFORNYTCYQFHUHKBKPZJZTMVATISSMMXOJONKKKLYHCIPMOZXODBRBZDLCEMWVAFQNAAAEKOSSQXMHFDAZVQUSLXZBJ");
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
    msg.setTimeStamp(0.905970422091);
    msg.setSource(61069U);
    msg.setSourceEntity(228U);
    msg.setDestination(23158U);
    msg.setDestinationEntity(12U);
    msg.localname.assign("WZFQDRXNISIGQWSDKPVFOLSPPLFPAVGRRRROANPXLZZIZFOFZRTGJWOCQSVQDBUJTPHJLHWALIWQUIUHOMPMVTHUBYACMECAUUPZYIEULKXOFBMNCKBK");

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
    msg.setTimeStamp(0.296199558635);
    msg.setSource(2658U);
    msg.setSourceEntity(234U);
    msg.setDestination(31513U);
    msg.setDestinationEntity(21U);
    msg.timeline.assign("XAKTYYONDLRZBFJJGIKURHMSGHJAVRAVJAWDQQDWTPJPXYCYMJYJZPEUIQRVZCZEKHUOBIBYMUSSIPLXGEARVJGANCXUGODQQUXBKHGGTHUWKYSHFNXABGGDMDESRIPPNILNLFVETZSUBFHBUIEKTQEUWKZMZWWQLWMBPCIFOC");
    msg.predicate.assign("WXQWFELATIFUBRCGFOHCQBKQNFVMNCOHIJTEWVRJBNEONPRKPJOSMEAURDFZXRPYSUCPZDCYOPLJTYZOGGAGCHWURDECUWNHOSDVXLCHRCSPZKTLSYRBQKVKVGNYZFIDWWOAZLUDDVUYXCUBXVNBDEQDFXARGELAJJDYILYYUITQNKZAJREFMPIQTHSMBUGTPVETHIABTSOBJQGMZYBFWXPSMMMOVMVGISPHKM");
    msg.attributes.assign("KRDSQVSYEQQDUJSHBKHEALNNPNZFVJZWPJJVCGKZXNSFWYCAFGFLTLNECPPFCMDGVOYWQEDVUFXMRHGWAEBCKPTRCGHZOYRBYXSHXECKYTMAZUXMBA");

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
    msg.setTimeStamp(0.7010496395);
    msg.setSource(1583U);
    msg.setSourceEntity(212U);
    msg.setDestination(9261U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("WPTAUMEEJJBU");
    msg.predicate.assign("TWCWOOFXLLOSSBSBIAXSBLNUUMDKRERVWHPSPVSZCMAUTIWQDANJNSIBVEKYVJVKUYPRVJKKWZIXRMYABWYVRGFQ");
    msg.attributes.assign("TXTPWLOVWXZYANDHBNQRLMEAKPBTFQEQZFIKKZNBSAUIQAHNLZGXMVGVRSHUYEOUANUDNMEJKSLZWWKDCEZYJOENPZLWPPWWKTGRGLACQJWPSECNRYFXIPOVGQKSSYZHTSMXPGKITYJITVADDCVCUJRXXTEUFFRPZAOLZOVWFRJOMSBJTGQOMRCHHLUSJEIDBYCGVYMDCFRFNHFBMLSGQAYXUPDFTWULHBHCMIQIBVVAHUDBX");

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
    msg.setTimeStamp(0.113047918306);
    msg.setSource(3571U);
    msg.setSourceEntity(14U);
    msg.setDestination(30629U);
    msg.setDestinationEntity(91U);
    msg.timeline.assign("GXWEHIVLJNUGBZFMOMZJYGAWOERIAKSTVHMDZJF");
    msg.predicate.assign("BAZGDAOMSCGHPGXJZZEGSHLMSRFAFXZDXNNOGRCYRPRWVHRXKENCUJEHDTAZESAUFTMTBPFWBOBVRKITHVWGLDPWOBWDLYQ");
    msg.attributes.assign("RUFMOYVSZBHRHQUNDHDSSASMPBWDLTEXWVQNOJUUPGGRWRJIYUCNSEGLVZBYCQDABKPLBMTITVLPLKMMCKCQOIGRTMZEONKGJGYSXQVPMSQYFSIONTTBRJQFQKECFZCUTKKLVUSLYAADZXLTVYEVRWHAMIEBPONJDFC");

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
    msg.setTimeStamp(0.643526138861);
    msg.setSource(7256U);
    msg.setSourceEntity(197U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(39U);
    msg.command = 179U;
    msg.goal_id.assign("NIQRYXNVTOPXQSAQBSQWSQLWSLUUWJPAPCIDYJCHOIOETBHZN");
    msg.goal_xml.assign("YZDYQMFFFBYQGIBUMWPYAPACXMVUHKJGEBIMWDOSXETSSIDBUCMPITTXUAFCOEROBZSTMNVFZJFSLEDZQ");

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
    msg.setTimeStamp(0.784521779468);
    msg.setSource(20861U);
    msg.setSourceEntity(170U);
    msg.setDestination(62417U);
    msg.setDestinationEntity(71U);
    msg.command = 233U;
    msg.goal_id.assign("XVIEOSFXPNZTYERMBECLWBPIGJJIESRYKXQUKWVSMIJPQPLBMUOLQLYDOZJPUOKZBXTVKXCDMNTAOHKORSDGICYWYCANSDRIZFWYQREXCXAZTNARETTPTTVZQEPMUYONLKCVHYGJVFBFGZCJAMFGKHCHNBDJDNXGHGFAOFSPUYMNDZEBARERIYOTINCPAWUDGUQWVLSIEBKSHDSRAUQRCLNLMQHPVG");
    msg.goal_xml.assign("APVPAZYXRVYWMBKMUHAZLOCUBCHYBPKVSJOWLKEXTIJNCHRGKFUQTVORGDTWCUFZRGSMUQBVXJENIXEKLZAHLRQMBOWINVQSCKMADDHBTOLWUFMVVPXGPIAWSBBJTBAQSQNSUYGAOQZVFVCXYCZFGQBMTXCYHTJWWH");

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
    msg.setTimeStamp(0.482409392516);
    msg.setSource(13230U);
    msg.setSourceEntity(95U);
    msg.setDestination(46916U);
    msg.setDestinationEntity(195U);
    msg.command = 87U;
    msg.goal_id.assign("VOWRBVLLSSVDYBOTLQTTFIYAPPMOAHFIXUDXYQCGOKTWKLYMKRLDPJDNLMPUPUCKKWNKEGAWVQGKBZNNCNDVGTXJVETXWGBUBIXYORSXLCQQUEMAYFJMCLUDAEZOHBCUFMVRYHZHFICDJXNBUGGIGHMJKPSFSJVRRGFWHJYXRJJZZFVHZVXZSWNSYYTTEWKFQICPDXODBNHSPOCCNZALQEWFWQNZRDBJOMIKHAASAQRPEUGIAEU");
    msg.goal_xml.assign("ZWYKIDNZSIOI");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.290553951997);
    msg.setSource(17552U);
    msg.setSourceEntity(79U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(125U);
    msg.id = 184U;
    msg.width = 18088U;
    msg.height = 31741U;
    msg.widthstep = 27983U;
    msg.channels = 122U;
    msg.depth = 183U;
    msg.finaldata = 88U;
    const char tmp_msg_0[] = {-24, -65, 30, 79, -26, 84, -27, -10, -103, -50, 1, 47, 38, 59, -1, -35, -106, -113, -101, -38, 114, 86, -5, 110, -16, 60, -85, 49, -121, -70, 125, -85, -122, -2, 80, 47, 55, -38, -11, -128, 23, 64, 6, 19, 96, 122, -72, -41, 31, -32, -12, -65, 117, 97, 118, 126, 118, -18, 44, 73, -33, 1, 120, 23, -88, -27, -67, 71, 46, -79, -100, 38, 112, -65, 67, 107, 111, -69, 55, 2, 20, -93, -83, -89, 17, 97, -76, -15, 17, -2, 69, -123, -27, -112, 29, 28, -17, -95, -76, 107, -64, -97, -83, -87, -54, -25, -55, 79, 123, 107, -116, -26, 90, 95, -42, 11, -36, -128, 94, 4, 59, 116, -7, 54, 35, -71, 116, 46, 7, 59, -90, -124, 9, 117, 59, -36, -1, -41, -117, -71, -112, 49, -118, -7, 22, 32, 101, 38, 121, -63, -108, -89, 104, -108, -121, -120, 13, 40, 16, 125, -39, 99, -23, 121, 51, -28, 21, 54, -15, 112, 0, 52, 86, -109, 18, -98, -16, -5, 6, -96, -111, -66, -30, 36, 126, -8, 55, -83, 56, -4, 109, 93, -9, -128, -114, 96, 94, 2, 102, 32, 44, 109, 104, -72, 119, -1, -37, 53, 71, 108, 77, -102, 92, 124, 84, 3, -63, 1, -97, -68, 92, -98, 114, 64, -10, -61, 88, -50, 22, 87, 104, -27, 4, 8, -4, -57, -19, 35, 41, -70, 0, -62, 41, -12};
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
    msg.setTimeStamp(0.229664539773);
    msg.setSource(23302U);
    msg.setSourceEntity(67U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(83U);
    msg.id = 127U;
    msg.width = 6792U;
    msg.height = 14288U;
    msg.widthstep = 53261U;
    msg.channels = 173U;
    msg.depth = 237U;
    msg.finaldata = 10U;
    const char tmp_msg_0[] = {-16, -80, -71, 87, -124, -74, -4, 96, 24, -104, -2, 30, 37, -127, -11, -5, 52, -71, 65, 12, -20, 34, 29, -54, -48, -39, 7, 76, 88, -43, -82, -86, -68, -27, 91, -20, 25, -19, -34, 43, 1, -10, 59, 108, 68, -20, -111, -99, 18, -106, -55, 48, 13, -37, -36, -56, -25, -28, 113, -5, 14, -88, 103, -49, 41, 58, 60, 44, -37, 0, 1, -88, -120, -74, 87, -126, 86, 42, -66, -97, -7, -119, 50, -15, 24, 99, 58, 25, 68, 9, 98, 18, -88, 98, 18, 86, 87, -100, -102, 57, 26, 11, 75, 107, -98, -123, 73, 35, 64, 110, -62, -13, -43, -1, -20, -75, -91, -126, -45, -52, -76, -5, -102, -93, 104, 104, -17, 80, -85, -21, 66, 49, -12, 65, -47, 6, -96, -78, -124, 27, -10, 117, -10, 80, 98, -108, -87, 19, -14, 66, -36, 1, 75, -127, 44, 28, 60, -17, 42, -54, 72, -104, -50, 32, 72, 85, -17, 27, -92, 31, -2, 71, 60, -124, 37, 39, -116, -64, -120, 103, -113, -124, 118, -122, 43, -124, -92, -83, -24, -23, 91, -66, 46, 9, 70, -95, -28, -71, -29, 4, 122, -91, -41, -64, 94};
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
    msg.setTimeStamp(0.675906044161);
    msg.setSource(62631U);
    msg.setSourceEntity(126U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(66U);
    msg.id = 189U;
    msg.width = 38153U;
    msg.height = 41875U;
    msg.widthstep = 16148U;
    msg.channels = 233U;
    msg.depth = 163U;
    msg.finaldata = 175U;
    const char tmp_msg_0[] = {-18, -22, -124, 122, -82, -47, 95, -80, 122, 96, 5, -25, 46, 73, 16, 32, -69, -73, 88, 69, 21, 39, -87, -48, -71, -103, -77, 49, -125, -24, 46, 89, -65, -39, 1, 23, 3, 23, -105, -100, -64, -21, 14, -85, 73, -76, 47, 76, -19, -119, -117, 28, -45, -11, -58, -119, -115, 111, 65, -95, -85, 42, -41, -4, -116, 76, 18, -18, 77, 107, 98, 56, 46, -127, 81, -29, -64, -13, 69, -34, -58, 107, -42, -110, -11, -32, -66, -70, -99, 25, 61, 17, -50, 50, -38, 47, 38, -92, 30, 16, 14, 65, -38, 70, 4, 54, 100, -28, 123, -90, 50, -77, 12, 109, -75, 114, 43, 13, -112, 119, 66, -87, 60, 101, -77, -65, 41, 4, 21, -70, 94, 39, -62, 51, -109, 104, 4, -41, 126, 46, -73, 71};
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
    msg.setTimeStamp(0.0902461678867);
    msg.setSource(10210U);
    msg.setSourceEntity(75U);
    msg.setDestination(35073U);
    msg.setDestinationEntity(17U);
    msg.width = 51336U;
    msg.height = 62016U;
    msg.channels = 75U;
    msg.depth = 227U;
    const char tmp_msg_0[] = {85, 112, 112, 58, 35, -34, 52, 25, -17, -111, -57, 28, 115, -2, 115, -86, 28, 113, 59, -105, 84, -100, 64, -44, -43, 12, 121, -39, -47, -3, -14, 107, 42, -104, 32, -51, -108, -98, 90, 70, -109, 10, 2, -59, 25, 35, -68, 44, 66, -3, -106, -65, -60, 16, -7, 108, 11, -84, -31, 22, 10, -30, -116, -52, 94, 49, 25, -55, -51, -84, -35, -93, -125, 1, -48, -38, -52, -47, 77, 123, -17, 75, -99, 94, -23, 45, -70, -5, -29, -54, -26, 3, 77, -41, 122, 4, 52, 69, 53, 121, 41, -116, 54, -62, 126, 45, -62, 122, 48, 74, -7, -44, -52, 3, 60, -44, 2, 83, -4, -84, -50, -1, -19, -89, 62, -29, -72, -2, 99, -6, -23, -112, -112, 36, -12, -46, 59, 70, 57, -114, 95, -113, -111, -30, -126, 68, 70, -91, -1, 88, -32, -5, 79, 53, -11, 68, 44, 26, -110, -31, -109};
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
    msg.setTimeStamp(0.276225401668);
    msg.setSource(60981U);
    msg.setSourceEntity(121U);
    msg.setDestination(58267U);
    msg.setDestinationEntity(88U);
    msg.width = 45638U;
    msg.height = 21045U;
    msg.channels = 106U;
    msg.depth = 147U;
    const char tmp_msg_0[] = {113, 110, -12, -127, 49, -63, 58, -83, -86, 0, 30, 24, 34, -73, 46, -33, -7, -115, -85, -3, 64, -124, 46, -115, -27, 74, 46, 25, 1, 50, 34, -33, -95, -117, -34, 105, -21, -22, -75, -88, -118, -64, 66, 73, -112, 6, -95, -96, -97, 47, 54, -72, -105, 13, -109, 76, -56, 8, 111, -63, -7, 96, 105, 56, 50, 126, 80, 96, 80, 101, -75, 126, -111, -61, 89, 71, 108, 90, -112, -71, 72, -21, 96, -18, -112, 24, -77, -76, 55, 38, 91, 16, 58, -57, -88, 36, 110, -114, -50, 81, -94, 122, 75, -85, 8, -10, -92, -19, -45, -31, -98, 100, 5, -90, -83, 89, -125, 73, -73, -85, 27, 68, -100, -91, 70, -10, 120, -99, -113, 40, 100, -85, -81, 49, 51, -2, 64, -37, 118, -119, 93, -108, -26, 106, 22, 30, -61, 77, 39, 73, 70, 59, -118, -14, 5, -10, -84, -105, -90, -17, 95, -34, 57, 30, 22, -81, 91, -26, 79, -60, 13, -48, 62, 51, 60, -82, 124, 48, -2, 17, 39, -79, -123, 106, 96, 101, 104, 103, -128, -27, 116, 92, 24, 51, 27, -75, -49, 21, 120, 12, -91, 38, -54, -77, 126, -128, 109, -96, -97, -15};
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
    msg.setTimeStamp(0.463159461173);
    msg.setSource(26517U);
    msg.setSourceEntity(82U);
    msg.setDestination(35049U);
    msg.setDestinationEntity(127U);
    msg.width = 2590U;
    msg.height = 52588U;
    msg.channels = 44U;
    msg.depth = 40U;
    const char tmp_msg_0[] = {102, -23, 52, -58, 13, 99, -125, -71, 46, 2, 95, -85, -64, 96, 62, 103, -53, -70, 65, -4, -55, -115, -82, 26, 79, -71, -47, -13, -103, 113, 61, -118, 21, -54, 71, -106, -122, -80, -80, 42, 49, 110, -33, -118, 124, 44, 6, 11, -47, 108, -77, 2, -120, 58, 76, 121, -46, 31, 45, 68, -34, 61, -29, -38, 50, -18, -110, 1, -85, -111, 84, -98, 126, -83, 100, 14, 66, 61, 105, 17, 109, -48, 0, -124, 107, 17, 125, 16, -68, -27, 100, -95, 20, -84, 86, 3, -3, 7, 7, -122, 50, 78, 117, -105, 41, 123, 28, -10, -58, 45, -95, 62, -11, -5, -63, 95, 28, 120, -107, -58, 25, -86, -38, 2, 97, -47, -45, 7, 79, 93, 58, 15, 23, 3, 54, -34, 98, 84, -48, 48, 15, 90, 104, -47, -64, -89, -12, 125, 25, 113, 18, -5, 50, 9, 106, -65, 20, 7, -122, 65, 63, -78, -121, 12, -25, 42, -33, 62, -82, -29, -75, -41, 31, 51, 103, -16, -59, -84, 115, -86, 82, -3, -86, -128, 3, -101, -9, 103, 61, 22, 67, -1, -85, 34, 122, 65, 5, -51, 8, -1, -65, -93, -49, -74, -86, 54, 21, -66, -81, -10, -65, -23, -86, -114, -81, 34, -113};
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
    msg.setTimeStamp(0.139448771578);
    msg.setSource(8518U);
    msg.setSourceEntity(14U);
    msg.setDestination(37004U);
    msg.setDestinationEntity(1U);
    msg.frameid = 27U;
    const char tmp_msg_0[] = {68, 122, 121, -76, 14, -86, 63, -11, 73, 64, 33, 49, 72, 121, 20, 70, 74, -7, -45, 82, -98, 99, 29, -59, -13, -94, 89, 110, 33, 123, -115, 35, 62, -29, 73, 3, 37, -4, -102, -60, -22, -7, -75, -1, -32, -67, 83, 22, 40, -42, -62, 54, -4, -117, -81, 96, -74, 68, 21, -87, 54, -122, -17, -47, -115, -124, 36, 106, -1, -51, 113, 104, -115, 91, -34, 51, 120, -36, 79, -70, -26, 50, -35, -112, -76, 27, -5, 120, 10, 25, 10, 51, 73, -17, 65, -58, -66, -50, -12, -116, 109, 42, -121, -114, 87, -62, 98, -6, -94, -102, -19, -100, 120, -33, 74, -81, 44, -89, -27, 35, -65, -70, -55, 113, 70, -33, -112, 76, -106, 65, 58, 4, -31, 38, 11, 11, -10, -85, -64, -59, 69, -117, -117, -43, 25, -59, -21, -70};
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
    msg.setTimeStamp(0.964041361042);
    msg.setSource(7484U);
    msg.setSourceEntity(121U);
    msg.setDestination(28560U);
    msg.setDestinationEntity(156U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {57, 45, -16, -25, 60, 100, 100, -84, -85, -41, 95, 13, -72, 39, 121, 35, -40, -23, 103, -84, 4, 87, -33, -88, 26, -61, -16, -121, -72, 97, 87, -92, -115, 30, 92, 103, -63, -126, 61, 33, 25, 17, 95, 16, 22, 101, -83, 63, 17, -34, 82, 121, -115, -84, 71, -119, 111, -93, 27, -18, 122, -74, 5, 19, -9, 78, 120, 122, 45, 49, -61, 29, 50, -84, 28, 44, -71, 97, -14, 55, 0, -69, 119, 120, -44, 126, 69, 106, -58, -101, -64, 12, 100, 10, 9, -53, -102, 52, -87, 69, -123, 115, 88, 12, -97, 66, 69, -115, 75, -34, 2, -49, -20, -46, -67, -100, -15, 99, 63, 25, 31, 93, 36, -44, 56, -114, -56, -68, -126, -112, -35, -123, -65, -68, -93, 11, 82, 76, 96, 56, 21, -96, 94, 106, 89, -24, -29, 83, -36, 10, -64, -31, -113, 36, -31, 78, 62, -5, 53, 126, 119, -74, 2, 60, -55, -18, -28, -74, -46, 7, 28, -118, -95, -117, -85, -24, 31, -102, 79, 1, 117, -55, -46, 117, -102, -112, -22, 86, 85, 55, -81, 71, -49, -42, -98, -109, -76, 124, 70, -73, 116};
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
    msg.setTimeStamp(0.984936242878);
    msg.setSource(19001U);
    msg.setSourceEntity(223U);
    msg.setDestination(60759U);
    msg.setDestinationEntity(129U);
    msg.frameid = 25U;
    const char tmp_msg_0[] = {-6, -14, -84, -91, 2, 5, 125, -8, -113, -42, 50, -123, -106, -31, -85, -22, 98, 5, -50, 96, 88, 22, 0, -55, -66, -113, -49, -91, 126, -99, -41, 74, -63, -77, 65, 37, 65, -1, 96, 72, 115, 90, -75, -45, 126, -103, -40, 62, -60, -12, -38, -77, -126, -7, 3, -86, 46, 41, -75, 125, 22, 70, -56, -82, -128, 81, 59, 118, 5, -81, -107, -9, -46, 102, 99, 122, 71, 56, 111, 62, -62, -111, -37, 88, -33, -16, 87, -72, 1, 81, -59, -24, -1, -21, -38, -59, -24, -57, -106, 1, -48, -97, -64, -46, 44, -49, -79, 41, 18, 63, 104, 24, -54, 89, -78, 13, 103, 87, -119, 53, 115, -108, -86, 26, -75, 74, -23, 72, 107, -32, 22, 114, 71, -50, -27, -12, -20, -39, 82, -109, 82, 67, 107, -106, -87, 64, -73, 40, -73, 71, 57, -37, -80, 10, 55, 88, 19, 50, -57, 52, -127, 118, 29, 87, 86, -48, -114, -106, -50, -86, -114, 96, 88, -103, -1, 0, 76, -16, 56, -30, 24, -23, -25, -50, -1, 55, -94, -72, -20, -93, -55, -26, 81, 46, 53, 22, -88, 115, 117, -83, -123, 115, -126, -31, 123, 63, 52, 103, 60, -5, 20, 25, -70, 74, 51, 90, 82, 116, -126, -42, 123, 88, 13, -72, -23, 13, 111, -92, -65, -20, -125, 6, -26, -111, 103, -75, 3, -16, 37, -40, 109, -56, 53, -58, -10, 106, -33};
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
    msg.setTimeStamp(0.338145517584);
    msg.setSource(15747U);
    msg.setSourceEntity(57U);
    msg.setDestination(9003U);
    msg.setDestinationEntity(76U);
    msg.fps = 100U;
    msg.quality = 136U;
    msg.reps = 206U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.0491539134543);
    msg.setSource(6229U);
    msg.setSourceEntity(3U);
    msg.setDestination(16410U);
    msg.setDestinationEntity(41U);
    msg.fps = 74U;
    msg.quality = 124U;
    msg.reps = 251U;
    msg.tsize = 254U;

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
    msg.setTimeStamp(0.583088982007);
    msg.setSource(23935U);
    msg.setSourceEntity(159U);
    msg.setDestination(26112U);
    msg.setDestinationEntity(162U);
    msg.fps = 161U;
    msg.quality = 244U;
    msg.reps = 133U;
    msg.tsize = 221U;

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
    msg.setTimeStamp(0.151837752447);
    msg.setSource(44686U);
    msg.setSourceEntity(6U);
    msg.setDestination(14996U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.225723321107;
    msg.lon = 0.406038348901;
    msg.depth = 213U;
    msg.speed = 0.0858465999671;
    msg.psi = 0.583691078956;

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
    msg.setTimeStamp(0.40718808964);
    msg.setSource(51317U);
    msg.setSourceEntity(94U);
    msg.setDestination(39392U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.974359034252;
    msg.lon = 0.92222767035;
    msg.depth = 216U;
    msg.speed = 0.858862172003;
    msg.psi = 0.244399282677;

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
    msg.setTimeStamp(0.347443808828);
    msg.setSource(1446U);
    msg.setSourceEntity(160U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.966413463669;
    msg.lon = 0.768399681681;
    msg.depth = 134U;
    msg.speed = 0.796983845309;
    msg.psi = 0.803171515788;

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
    msg.setTimeStamp(0.0957915216516);
    msg.setSource(44616U);
    msg.setSourceEntity(99U);
    msg.setDestination(23677U);
    msg.setDestinationEntity(247U);
    msg.label.assign("UUDDGVTXQAJPQXHGZFSLJKBKFFJRJKEGEFNAHPQHCYNTMPZIGDXKKACFDFGEOIOQWIEAJZIHTPUSSCQMSZPROCQEWQWCYNSZSIFMUJKSYJCBOZHRRWQOBLXGGCWETOLHREVNVRXQKXHLUXNTAFDCMBVVNFTVCOT");
    msg.lat = 0.423195047111;
    msg.lon = 0.807575856228;
    msg.z = 0.388559834927;
    msg.z_units = 62U;
    msg.cog = 0.0374454796307;
    msg.sog = 0.74600383194;

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
    msg.setTimeStamp(0.537049586672);
    msg.setSource(59918U);
    msg.setSourceEntity(107U);
    msg.setDestination(31689U);
    msg.setDestinationEntity(133U);
    msg.label.assign("XPXHDGXSYOUNNXGWBCBXLASQFCXTQOIZONGPHWTRKHUATIZNAIUJXYAXBHZJPEHFAQDMNFQSPDEKBCVCQJBVFDIQSLOQLHURGAEROTUYEZIILKJMKYSFMSAGDHJKWONKSORCZKPAECKWVRBMZJHIWDVVMEMDCVTMMSVLRZRLOYVDPTRITMPFRBPLXWHKYUQSTELGONZYWZDOCCJKFBWPUZUBGIICNJJDVARJBQQEEL");
    msg.lat = 0.970075288092;
    msg.lon = 0.343079581251;
    msg.z = 0.359347380593;
    msg.z_units = 21U;
    msg.cog = 0.492497998259;
    msg.sog = 0.733842352594;

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
    msg.setTimeStamp(0.512498084338);
    msg.setSource(18846U);
    msg.setSourceEntity(129U);
    msg.setDestination(56519U);
    msg.setDestinationEntity(0U);
    msg.label.assign("PDKYYDQXYOLWZCIBUDZGYVLDJGEMPGQLRELJRWDSQKQAHXUONUWCDZJRIUGOWDJYZRHOLCYAOWNBWJWAMTMNJETTZLTBSCOYCILVHBRZRVPJYTAZWNXCPNLJHUDZLSNPSTFBERMBIKVDIRCVOAOFXQHSVHQBHKCQMVEBMZOVTUBIXPAGHTMR");
    msg.lat = 0.46536715665;
    msg.lon = 0.652401979751;
    msg.z = 0.665984104753;
    msg.z_units = 194U;
    msg.cog = 0.0964241764997;
    msg.sog = 0.973450212908;

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
    msg.setTimeStamp(0.587280586174);
    msg.setSource(40117U);
    msg.setSourceEntity(220U);
    msg.setDestination(59344U);
    msg.setDestinationEntity(61U);
    msg.name.assign("WSZYYPYLIDJMOKMKBOLGKYAVBQDGIWXHUQNUEQGWSNHKSUHJSFAOOSHLYWRMBNFBXUV");
    msg.value.assign("XZIDRKIYNFJICHHVAPUDTURXAKWXIWGNOSJLLFNMCHWKUOVLIPMVQVHSVLDKXVTOESBGKZWDGQGJEGBBRANZNFMLZHSRHNPRIHFNCQJZSPXJFFSNDKWBGCKEOJVIEAIZYEUYWLHJUOFAXBLXRYHTCAZOEJPTZRLZMTFJSLTOPVDWPPDNUVWUZIABKYJOXGYQFKYRGTQTMUCERHMXDGSAYASMEECMGBBDYTYPCUSDOA");

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
    msg.setTimeStamp(0.296161740969);
    msg.setSource(18424U);
    msg.setSourceEntity(198U);
    msg.setDestination(17832U);
    msg.setDestinationEntity(187U);
    msg.name.assign("VKLOCSXQYVFTZGWWRQQRRSQJZABDYXCAYMAPPMMWCXLXSEYPZYWNZTCJNEJBPGHVFJPFAPRJMWU");
    msg.value.assign("PEZFGYRQYCKDFICVNUIKEHDBVVHZUYMQOXZEJYPQWRHOBARQZJIUAFJNDXMIIWJJQZWXKOEDPTIUVFLUXMQPZZASA");

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
    msg.setTimeStamp(0.502089032717);
    msg.setSource(53119U);
    msg.setSourceEntity(106U);
    msg.setDestination(49964U);
    msg.setDestinationEntity(37U);
    msg.name.assign("KYVJSHZREAEWCGEZOAZXCQBKEYVGIHSJJFYYVFTFXDUHLOHACRJHZURKBR");
    msg.value.assign("HFHSDKHDZVNMRGTTTZTCFPJBCVNKEJVPHGBYZUIHWRAEUSZWKSTSJKYSXKNAYOWYSXWMUNGJNSEVYHUBLYLSGDALOHZGYXMQZFLCAZWLFPJENACL");

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
    msg.setTimeStamp(0.355244106516);
    msg.setSource(33147U);
    msg.setSourceEntity(95U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(41U);
    msg.name.assign("EGNTMPVOVAZEVRDAXYIARYKWNFIGWFWUTXODRUFHCQFEIUCBYBYSUBKTEAYJZSZAPRDJBKTYPIQNOHJDAHWDZJWIWRWZEQXSJMUCGVLTOLOFKITAZDAEBCHNKTQJQVCSQRCKHOGZXOVMLRDDZLGFFXBOYJXQYVUXTHMSWATCKSPGUUMEIXMMLVOIHJEDJSDGJLSGNQMRWXSPHKLBYBMCKPRWRNGHLZPKUUEINYQBGSPMBNPFNNHFAITX");

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
    msg.setTimeStamp(0.509988333318);
    msg.setSource(39382U);
    msg.setSourceEntity(0U);
    msg.setDestination(25159U);
    msg.setDestinationEntity(49U);
    msg.name.assign("TOXCPBNODGEMRSLBFLYDGWIMJHHBCRTSQKAAKNVIBRJLWDXDEFBEWOKVRFJCGBHQTCUFRJWINQZOQGUXNNZEIIQCHEPJZTJEKSIEEJODUVMKWBQDFVLUDTYMMKSYLCNHOKVZKDPSGULLPHIUZXFXNQMPYGVGWNPUPKVFHYZRAKXAYWPDMILYQINTNVWCXSZ");

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
    msg.setTimeStamp(0.312076046187);
    msg.setSource(30219U);
    msg.setSourceEntity(250U);
    msg.setDestination(27986U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RXLLNUKOQCTMPTBUZLSIUXVBEQLABMMGXXYWKAMSQAJZSEHEFDTVUVTEZFGIXPBFZDXUWQNRIVAQUIIJFXVPVPDMRZLHEYJCHJOPTCSOWEZICFSKEJVLRTNTWVKIJWSGGJAJZGVDBIGNOCDGHPCTWUKPZRNYESKHKYHPIDNABYJQMOCRUBDENVFGUADOLXYYYNXAFHQOSXEQYOADJWZAL");

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
    msg.setTimeStamp(0.617831442865);
    msg.setSource(50447U);
    msg.setSourceEntity(151U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(34U);
    msg.name.assign("DSIXLPDQDDBXLGHZSYXOOHQWMSZCTQUGOUYNRNAQHLDZNKMBMCVMBZCINUOIFNBEMQLBFGRAKPNPCMBVWWANDGSVPQJLPLWFZLXKTPIPHYORQFGERUFFDEXSEJGTHGEDEBIZXKUYPIKUQGATXIDXZMQYIITHRCGNRSSEEAHRTSVBWEAOVHWALWCHFYJVZWTVPINJKCFFVXCSMY");
    msg.visibility.assign("QQXLWTODGMT");
    msg.scope.assign("XRQSHIRZEZKNPVSKLJASTSNADUWLWKUBMMEHWCUEDNXAJHDQHGZNOOCGNRGCBYZAAPMNXCRFQBVBUFPUDUVKZIDFYGGTCIKSYRLPXCYQUVVYLRPRPIIEFDMZTSIWALAUAAYRITLPXGCJDJJJYCGMWIOYEIEUBS");

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
    msg.setTimeStamp(0.490234245583);
    msg.setSource(28623U);
    msg.setSourceEntity(40U);
    msg.setDestination(25019U);
    msg.setDestinationEntity(35U);
    msg.name.assign("HDIXJAKDMKXONMELAVKMBRRJYQEZOJGABSYSONYKGXOVFBWTMURUGPRVIZQVALOMUJWWQEIETJCZWRZWQMLMXFHOBOAOYVKURIMCKCNYUNENJTQTLXIZSDGUMCLHWDHSZCZETIHFSPYRTRLUYTPPAETFIG");
    msg.visibility.assign("VHAVTQQFIOPJEXKVRFJIAFOMKHCDPOQLVWMYBBYREDCFWCWHJQJ");
    msg.scope.assign("VBXBUOSZSVYCDVSLBCZTIRQTZVONXYBTGKPAUWRFZLEICODHXPKCGJWFMHFQHHSQWVNVYYBYJIBMFLMMHWVXASGYDONXWOEONUIZKETSDLUFFIDJARDCKQTYDDBLBCLRPFQEPSMRQNEXTPNJKSJUSCTEAPAEEMUIKDPCFGHXZGNXQJFWKXHMJKPOLZTAWRUQVRNMVYGOEIAZJGUNILALKWJQWCORMVXRTAMGNKLZASCUGTIGHQDBHHZFPIB");

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
    msg.setTimeStamp(0.792660667437);
    msg.setSource(39755U);
    msg.setSourceEntity(57U);
    msg.setDestination(21864U);
    msg.setDestinationEntity(36U);
    msg.name.assign("OBRHTBEIFAZDVXWQSEYMTKHPOHZSVIQRJOMFAYAEWIXPQMDFHHQJXNCBZLSSLZPOLORLKGRIVATYNKMRAKQWZJPPTBTDNFTVCYTWMQLAZNZJXSIUWKMDBGKLXGALIFGNEPUHEJHIJROHWKNUVJFVIHFSPGMYGWHOODYYUZGYQQNRKWVNRIJSJSGBFKCUSRUODESIXDXTLWCVQCEPFGAC");
    msg.visibility.assign("OXTJPENCFSTOBRQY");
    msg.scope.assign("MQMSANSZTBPRKBVRZYAWPSVEEPBHXJPMUOZW");

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
    msg.setTimeStamp(0.340937604821);
    msg.setSource(27617U);
    msg.setSourceEntity(201U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(72U);
    msg.name.assign("JCMBBMOGFUXTHEMAPYRXHKOHHMLRVZEMNTUTRVGITWLBYIBSKKSYYCLFXCEHIQWXKSYI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QOYYTPRTUPCMNLARKQHXUGRSNPKTPVXCWLLRRUDWEQKXZZS");
    tmp_msg_0.value.assign("NIOYBMQEGDVFZIXVRVIPNFYLHSWIDGSASPVZNIMKXWWUCAVFKNAJVPWCIFYRXFCDE");
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
    msg.setTimeStamp(0.259017345842);
    msg.setSource(50288U);
    msg.setSourceEntity(38U);
    msg.setDestination(41001U);
    msg.setDestinationEntity(49U);
    msg.name.assign("ITIALZKZOGYXSGBUCBXQIURFOLVWSEOSYKAZNJPELZGSJMJLILQPJDDQPEDSXPZCHUMXWHTPCOTKILKCZQGITFUNTQGGJHNMCCULAAMOEBJTFVKEXREXFVQURWISZMHHMHMCFDDRMZAPYRIAJJAHCYKCZBKXSXBPFKECTLVYFGODPEWVOZVYNNVIMWBKWYQFGRUTRSHEAYDJAFVRPDHGWJNMSYBINHEQAORUDLNOURDGTQXXWNWSBOU");

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
    msg.setTimeStamp(0.452714470532);
    msg.setSource(27212U);
    msg.setSourceEntity(169U);
    msg.setDestination(54907U);
    msg.setDestinationEntity(97U);
    msg.name.assign("YEFSFEPYSOEDJKZAZPDVPKDLRXOJPAAQCMUWIXXRMGIBWHJLBHJIRWUBSBQDHUPLNGSSIWPVWEJNZUKKNCEQYEDPSCSHYXGGZLFJMKDTXDGMQPVOVRXBHKTPJIMGHUHZIJWYLXZFNXZAKKIFRDNXAGYGGUWIHUWTCLZFVVMAOOYSBDKBLWBYMYAUORCVTMTQNFAGLCOANDUQQCETNOOHRLRJYKCFLVESWFU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CBDUBAMRFUHNLICGPFDKZWXPOVXXLAEWVMDRVDQEJGVTKHOPVUHNGMSIUELWJYSYUOEYQQVIKKTPANKOFNDIQIDEBJQBLFSBMGSWTHNXLPRX");
    tmp_msg_0.value.assign("UWELXQNTVQYXRIVVLPROOSLYPXUNGTSDNSEWFAJHQCOVEAHSUGLBUKZDZTDCATURWZLWWDNTTJYKXFOLWIBGBG");
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
    msg.setTimeStamp(0.513566767187);
    msg.setSource(53198U);
    msg.setSourceEntity(154U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(80U);
    msg.name.assign("ZLFVSBHNEUHUYLQJDISCFAMOQTDDHIOWHYUYAEWCPHFPKEBGZOMPBGXXQOJAGMVOKZZTCFFMVWRWVYPHNHXUSXEEZBPKRKRTXRIAZFUPIBGQILARURJSVXAJYVMTQFANRVZDISCQOOGEQRUEOGNSK");

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
    msg.setTimeStamp(0.39218155312);
    msg.setSource(21493U);
    msg.setSourceEntity(169U);
    msg.setDestination(707U);
    msg.setDestinationEntity(214U);
    msg.name.assign("EWMEESYBVFTXQMNZXWIRCORNNZZSQCAQRPPOGTIKITYUWMRLMKNTHHCEUHKWFEV");

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
    msg.setTimeStamp(0.233809780821);
    msg.setSource(64543U);
    msg.setSourceEntity(220U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(72U);
    msg.name.assign("AFETNPUUQGARXESYCXDTRIEDSWAOMGPMJFFTIKWRLIPGDRZEFAHCDARPSCNVCXPISBDXNXNZBJWCPMRUHWCCQNGSJZYNXEBJOAPMKUBHEKOKNUJVRKVNCPQOQQOSZQTAIBBLVWGHMEMABAOZMYXFBJWDUYLXKMRLSQDFAZWUMEGLGIXHKVSFWWVZBOISSVUEHVLZYYILDIWEOYTKIDJOQKKJGGHJNDZCXFOJPRTTTYQHVYGBPCUFUTFLV");

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
    msg.setTimeStamp(0.377244058652);
    msg.setSource(14888U);
    msg.setSourceEntity(84U);
    msg.setDestination(359U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1760298581U;

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
    msg.setTimeStamp(0.253597776793);
    msg.setSource(4668U);
    msg.setSourceEntity(170U);
    msg.setDestination(7334U);
    msg.setDestinationEntity(111U);
    msg.timeout = 202663578U;

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
    msg.setTimeStamp(0.775537662143);
    msg.setSource(40805U);
    msg.setSourceEntity(98U);
    msg.setDestination(30477U);
    msg.setDestinationEntity(141U);
    msg.timeout = 220387913U;

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
    msg.setTimeStamp(0.332227492156);
    msg.setSource(59584U);
    msg.setSourceEntity(81U);
    msg.setDestination(45857U);
    msg.setDestinationEntity(139U);
    msg.sessid = 2910530528U;

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
    msg.setTimeStamp(0.133327704078);
    msg.setSource(57928U);
    msg.setSourceEntity(194U);
    msg.setDestination(15724U);
    msg.setDestinationEntity(178U);
    msg.sessid = 637867874U;

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
    msg.setTimeStamp(0.149684436207);
    msg.setSource(36868U);
    msg.setSourceEntity(119U);
    msg.setDestination(58855U);
    msg.setDestinationEntity(84U);
    msg.sessid = 2198905554U;

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
    msg.setTimeStamp(0.261393158016);
    msg.setSource(58172U);
    msg.setSourceEntity(5U);
    msg.setDestination(38079U);
    msg.setDestinationEntity(66U);
    msg.sessid = 3895685161U;
    msg.messages.assign("XSVCQGNAZIHCHDRJRFIOCELNKRBIYBHNACALSNKYTTEHLHUNZPQKNPQEEUL");

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
    msg.setTimeStamp(0.27052148649);
    msg.setSource(2811U);
    msg.setSourceEntity(47U);
    msg.setDestination(50151U);
    msg.setDestinationEntity(85U);
    msg.sessid = 2700695156U;
    msg.messages.assign("DVERNIAYDGZXUKLEEHQAVTQIEKONWJHAVIICGWTPNYWKDDBORKYLYXRNJZOHQWTKBVCSBGGAFLZOHYBVSARCTLLULSIJJBFMZAAPHHRVYTZTKNNJNJ");

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
    msg.setTimeStamp(0.452854876658);
    msg.setSource(593U);
    msg.setSourceEntity(110U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(246U);
    msg.sessid = 876718547U;
    msg.messages.assign("REMMVSFUQQUCBCMVBISOIKNJQTJTDBOWDDBPXCQPAESLLLSMYUFGTNFSKCGOQMZYMZMYYPJRRUFUXTHLCVAGFUTFYJHODBNBMWEESKHQPFWTWKCXYRLRD");

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
    msg.setTimeStamp(0.523328499867);
    msg.setSource(2131U);
    msg.setSourceEntity(183U);
    msg.setDestination(25388U);
    msg.setDestinationEntity(208U);
    msg.sessid = 2935719067U;

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
    msg.setTimeStamp(0.66291258419);
    msg.setSource(44460U);
    msg.setSourceEntity(192U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(96U);
    msg.sessid = 3646797844U;

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
    msg.setTimeStamp(0.909284187896);
    msg.setSource(22044U);
    msg.setSourceEntity(45U);
    msg.setDestination(9481U);
    msg.setDestinationEntity(126U);
    msg.sessid = 3098604368U;

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
    msg.setTimeStamp(0.500671682754);
    msg.setSource(42764U);
    msg.setSourceEntity(169U);
    msg.setDestination(53281U);
    msg.setDestinationEntity(165U);
    msg.sessid = 3056595367U;
    msg.status = 37U;

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
    msg.setTimeStamp(0.506031177215);
    msg.setSource(41850U);
    msg.setSourceEntity(240U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(236U);
    msg.sessid = 4279840565U;
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
    msg.setTimeStamp(0.429042472919);
    msg.setSource(41702U);
    msg.setSourceEntity(197U);
    msg.setDestination(34273U);
    msg.setDestinationEntity(232U);
    msg.sessid = 526827205U;
    msg.status = 154U;

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

  return test.getReturnValue();
}
