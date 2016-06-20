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
// IMC XML MD5: c2f889e53b9d70fdd28a9f839289af4a                            *
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
    msg.setTimeStamp(0.963670473755);
    msg.setSource(58392U);
    msg.setSourceEntity(66U);
    msg.setDestination(65333U);
    msg.setDestinationEntity(94U);
    msg.state = 194U;
    msg.flags = 114U;
    msg.description.assign("EQZBSRKFEGYNGVBNSSUWPPATHUOFXOTQHQZXXYUEOXJLAQNMHJGSDXXQGAQOUMYYIFJXVYSWEBBURYLRKDRCUCJZMMCYARULMTJVNGVMGKEJSZYQZJRZTHBHOJICSKLTBZUTDCDZRCPNSMIKQLATVPQFZKLOGWIBRJDIIUHFTKLPAFPHMVFTGMOXWDKKEFPLPVATBHVCXLRMDWESIIWRNGCACLDHOFPDSZDEOYWNYAPNIOWFW");

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
    msg.setTimeStamp(0.210158488359);
    msg.setSource(29268U);
    msg.setSourceEntity(207U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(44U);
    msg.state = 141U;
    msg.flags = 65U;
    msg.description.assign("MXUQHYRHRRFVJCSMZLDYIPWHIYCFXMEBVUQYSIXTRPLQTWXAKUKBEISRJQCVMLCPZGNKTGFQEGTZQFOZAJNOAPOAMIHURYGAETISNAGCYWSLPIZOTBXOAOUHBNCHLYGOPVDNJWKALDZNEXJIEKGCDBAIVJGNJQKTHMXSLSTZBMYHCPMGMCXWKDYCUFKOXJRJSADXVURWRWD");

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
    msg.setTimeStamp(0.04710322284);
    msg.setSource(9089U);
    msg.setSourceEntity(41U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(86U);
    msg.state = 181U;
    msg.flags = 159U;
    msg.description.assign("XZKEXDVYLSAILCRMOCFMHVOKOYHZGMEUGVXGOYWHVVBMUGCM");

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
    msg.setTimeStamp(0.57150106575);
    msg.setSource(25103U);
    msg.setSourceEntity(163U);
    msg.setDestination(49513U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.430126608188);
    msg.setSource(35763U);
    msg.setSourceEntity(166U);
    msg.setDestination(41484U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.259085416851);
    msg.setSource(41435U);
    msg.setSourceEntity(172U);
    msg.setDestination(44308U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.0719026519944);
    msg.setSource(19953U);
    msg.setSourceEntity(172U);
    msg.setDestination(56643U);
    msg.setDestinationEntity(225U);
    msg.id = 88U;
    msg.label.assign("GHWGYXUOEIWSJGSYCVFSAOBIMIEQGEULPVKEZLWGQHFQDOARZQFGUUXNMYNBLDCCRY");
    msg.component.assign("BKXWIBKBHSTPZEQUKVMYXJYVDSUPCNRUNZA");
    msg.act_time = 57482U;
    msg.deact_time = 63581U;

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
    msg.setTimeStamp(0.817776375743);
    msg.setSource(53621U);
    msg.setSourceEntity(205U);
    msg.setDestination(59906U);
    msg.setDestinationEntity(121U);
    msg.id = 33U;
    msg.label.assign("EUCDDCVXLEHDNYWEJIXCGXZNLAMWCDSKCPNKABWOMDUOYJNHJEGLHMYKTAHPCTNFINERCFITQWUVCQPLBQYRFKQUKAONEDBAXEYTBRDNGQXQKZZTOQSLYWBFBHOZPGDSGVFFPAEMXTUFDRFHAZIOFNMEDQAGKMBLTWPGOVUVJISPNCGUMQRILRVYGWSJIARZKPOKUHIMXRVBJSPVHBVRHIZOWEZ");
    msg.component.assign("AENZRIDMIVWMBYAOVFCVHBEHLCMGQALKKAANXETIYRXPTTVXCNCVRPZDDFBZFCOUEUVYWFLJWRJRFAOSAYYILQJBMGPZYYEJLXMQWUEUGK");
    msg.act_time = 65427U;
    msg.deact_time = 25483U;

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
    msg.setTimeStamp(0.516047247002);
    msg.setSource(54886U);
    msg.setSourceEntity(208U);
    msg.setDestination(27319U);
    msg.setDestinationEntity(65U);
    msg.id = 140U;
    msg.label.assign("GDYTRIKPBNHFSGLQEGJCAPOXATFTJJJDXWAQKEFXQHZYAKNSCYZAGIYROIMFUEIWZBOETRHAGSSDDNYRHGSCVEEEVMPJZIRDHBYTWGVXFNUMWLTHBCNUVOVABQMCCKXMHFHCMPXDXDUEPFTTQLWZOBWKZFYLZIZIDVRFQTVAIWSKOWSGOPKXPUECKODJLBHQELOOASCLWUUPNSVVGQXIBRPVHNZSJDZ");
    msg.component.assign("DPZQREDKYBUVVGREOXBPINRDOLYLVLIIXPPIGQGOVCCNQFFIMFGHEXASMBXNLVWEJYKUBLPLQRFARQXUHVTTEGANQHTDHJVQJWQTAKMAPDFJCHZSQRKARAJJWPIGDTELSUHXGIDFMCNXZYJOOOZZYWEJNKJ");
    msg.act_time = 44530U;
    msg.deact_time = 52911U;

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
    msg.setTimeStamp(0.231334982258);
    msg.setSource(54741U);
    msg.setSourceEntity(103U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(222U);
    msg.id = 18U;

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
    msg.setTimeStamp(0.0921676648009);
    msg.setSource(25461U);
    msg.setSourceEntity(238U);
    msg.setDestination(175U);
    msg.setDestinationEntity(114U);
    msg.id = 42U;

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
    msg.setTimeStamp(0.574445654048);
    msg.setSource(46615U);
    msg.setSourceEntity(151U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(21U);
    msg.id = 167U;

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
    msg.setTimeStamp(0.531147833906);
    msg.setSource(9474U);
    msg.setSourceEntity(103U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(212U);
    msg.op = 32U;
    msg.list.assign("KMDOVTONIOFKCMKEECONLTNMCHCUFRGADJQSPGFDSTHSNXPDLZQIRMGZRHGNMAWNIDUMFISWVAULDHWXPJTAEXLYYTHNISBLPKLGRMAHUVSWNGPKZBJIAIJQYTXQQLCYQMCWXJYXPVUOVZDVRREDBQRBDTWHFBQHRVIEZKOBKBNZHGJGSFJPEPPWQYGEMWCLOXUZYDXKLQJSWILGUAOZBAFORVHXBWACTYYCZMYPV");

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
    msg.setTimeStamp(0.510252693458);
    msg.setSource(41861U);
    msg.setSourceEntity(150U);
    msg.setDestination(120U);
    msg.setDestinationEntity(244U);
    msg.op = 144U;
    msg.list.assign("UIDENLBMUDIYGJXNOHXJSCYBMLGAYOORKDIFQZTDJYNKBPHRXQPHJUYGQTSFLCWYLODUAWDTUYASMRXTSPHACQYCIQMCTJKPMVRADTAZXUWH");

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
    msg.setTimeStamp(0.602795663324);
    msg.setSource(38335U);
    msg.setSourceEntity(229U);
    msg.setDestination(7307U);
    msg.setDestinationEntity(156U);
    msg.op = 52U;
    msg.list.assign("ZRNBPHQFPIMXZVZYFYNDSTFUASHLMHPEJQBWISZWDMLIBKDBAFNCERFTZKCLWLSJUGAEKMYZLGBWMUILHDEZXHUPESKCCHQLGTXONYKRJOVEQCBTTKRGFNIAPIDGSAJXPTAHPVICNYNMRVDGUGDXSK");

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
    msg.setTimeStamp(0.260880174878);
    msg.setSource(49857U);
    msg.setSourceEntity(76U);
    msg.setDestination(46327U);
    msg.setDestinationEntity(241U);
    msg.value = 168U;

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
    msg.setTimeStamp(0.537668001135);
    msg.setSource(55382U);
    msg.setSourceEntity(29U);
    msg.setDestination(57033U);
    msg.setDestinationEntity(17U);
    msg.value = 207U;

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
    msg.setTimeStamp(0.347896032949);
    msg.setSource(29016U);
    msg.setSourceEntity(60U);
    msg.setDestination(62558U);
    msg.setDestinationEntity(14U);
    msg.value = 29U;

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
    msg.setTimeStamp(0.984917510299);
    msg.setSource(21529U);
    msg.setSourceEntity(67U);
    msg.setDestination(29499U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("RTHYMSRNWFOVQWQZKJWAQFLPHXAAXQPEIKJECUMOFTUJEBILSRNVCNKUOJFOEWENBHJPQNVBWPOCNHCQTPRGZLGABIZNAAPI");
    msg.message_id = 28037U;

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
    msg.setTimeStamp(0.322636509964);
    msg.setSource(40370U);
    msg.setSourceEntity(28U);
    msg.setDestination(61306U);
    msg.setDestinationEntity(79U);
    msg.consumer.assign("YNYMWECXANMPFJXNZINPBMGQUEHBFCTLACABTSSSCJIDOIVYXRIQHVAHKKKVGDEFHPJDCNIVQMGQILGNOFJSLYYSEWULAFXORVTFEDLNTWCUGYRDYUPURGVOSOKQRXLASPILXLFAZERSMZQYZFBQWNIWIYQUFKEVFHPMMDRAZCCW");
    msg.message_id = 22188U;

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
    msg.setTimeStamp(0.99953882653);
    msg.setSource(57969U);
    msg.setSourceEntity(19U);
    msg.setDestination(19411U);
    msg.setDestinationEntity(6U);
    msg.consumer.assign("OGHGSTPQCYBJUUGBSFIJIVTQOCXOSNTMJYLVUSTAWZUEGBHMQDCYADAZWMLXXZORBSNPPAKJQGIYLPJNKKUFTFFJWVAWIOHJZKFNLIAWCNSOBMKDYUZKJDDSJWRMPXRLGRCZHCXWFRKYEEPR");
    msg.message_id = 498U;

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
    msg.setTimeStamp(0.45538218905);
    msg.setSource(1932U);
    msg.setSourceEntity(236U);
    msg.setDestination(53203U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.209729071736);
    msg.setSource(36950U);
    msg.setSourceEntity(27U);
    msg.setDestination(39906U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.0164169979555);
    msg.setSource(36045U);
    msg.setSourceEntity(34U);
    msg.setDestination(26293U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.370961289804);
    msg.setSource(7738U);
    msg.setSourceEntity(140U);
    msg.setDestination(33753U);
    msg.setDestinationEntity(113U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.334288627079);
    msg.setSource(3405U);
    msg.setSourceEntity(228U);
    msg.setDestination(9083U);
    msg.setDestinationEntity(189U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.977441592984);
    msg.setSource(35923U);
    msg.setSourceEntity(52U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(100U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.5726659484);
    msg.setSource(37583U);
    msg.setSourceEntity(127U);
    msg.setDestination(13298U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 93U;
    msg.step_number = 96U;
    msg.step.assign("LLYBVGULCDGJHZWKAKCRUNXOLEEUHUAOWLEZFWNIUOA");
    msg.flags = 133U;

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
    msg.setTimeStamp(0.968751815261);
    msg.setSource(31941U);
    msg.setSourceEntity(91U);
    msg.setDestination(14563U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 1U;
    msg.step_number = 54U;
    msg.step.assign("GWGKJVERRPQLUMKAAWHOJBWJEZOFRSDKKJCHBYKNJHESDFQRJYZRPZNGWXILSHKVUGHWRYCOIZSBOUWDDIAOALOWGJIQTABOYYDFFLIKMUFNULPMIBFSSUMMBNFEXTQDJVLWCBXGIZXNVCDBTMGFDTAXPIHCHPHTALOUTQXZNBEVPEOPVCQXKRHLTMTCQKYFXOQEWCINCZBPPAVGTETZQSFMJMZX");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.728840891378);
    msg.setSource(38957U);
    msg.setSourceEntity(72U);
    msg.setDestination(18443U);
    msg.setDestinationEntity(95U);
    msg.total_steps = 57U;
    msg.step_number = 209U;
    msg.step.assign("SRQBDZNYSCLIWUGEGVHIZOCXCQTKEXJOOQKEKWTSGZW");
    msg.flags = 188U;

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
    msg.setTimeStamp(0.112994278928);
    msg.setSource(13565U);
    msg.setSourceEntity(60U);
    msg.setDestination(50633U);
    msg.setDestinationEntity(39U);
    msg.state = 31U;
    msg.error.assign("YPMAGYDZXCCJBFBWOKOIJRUJAUUHBQRYRPNMTUPUYIFEDHYXOATECBISNKFWIWDCXEOKRKVYDWSFCH");

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
    msg.setTimeStamp(0.688331863605);
    msg.setSource(22251U);
    msg.setSourceEntity(202U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(152U);
    msg.state = 34U;
    msg.error.assign("WTMDVYYUEPHFWZRWRYFQJOO");

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
    msg.setTimeStamp(0.924898859253);
    msg.setSource(46986U);
    msg.setSourceEntity(30U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(247U);
    msg.state = 39U;
    msg.error.assign("GNTDTOISBXNIGBCYZVEMDWURFUUHVZCWNGJSYPSHPPDWVLDDLNPZTKJZRKWNMLLQONOMIBYFMOWRNAMECFQAYWTLCEKMVQDKFHSMYIQTIKXKZUJCNUPJPQOMXEUAGLVXDZITQHRYRNW");

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
    msg.setTimeStamp(0.637115169837);
    msg.setSource(49233U);
    msg.setSourceEntity(132U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.982628559564);
    msg.setSource(15304U);
    msg.setSourceEntity(137U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.105007772444);
    msg.setSource(9732U);
    msg.setSourceEntity(49U);
    msg.setDestination(57529U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.774472427678);
    msg.setSource(49709U);
    msg.setSourceEntity(139U);
    msg.setDestination(39882U);
    msg.setDestinationEntity(192U);
    msg.op = 136U;
    msg.speed_min = 0.436626328786;
    msg.speed_max = 0.387353984404;
    msg.long_accel = 0.00306216839726;
    msg.alt_max_msl = 0.818375431573;
    msg.dive_fraction_max = 0.633454794379;
    msg.climb_fraction_max = 0.649495200135;
    msg.bank_max = 0.793682595128;
    msg.p_max = 0.850331484033;
    msg.pitch_min = 0.170581927219;
    msg.pitch_max = 0.194253892194;
    msg.q_max = 0.971050511215;
    msg.g_min = 0.681475248721;
    msg.g_max = 0.879243942725;
    msg.g_lat_max = 0.0404104896419;
    msg.rpm_min = 0.548737445666;
    msg.rpm_max = 0.268018171292;
    msg.rpm_rate_max = 0.558206836845;

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
    msg.setTimeStamp(0.756737508828);
    msg.setSource(16384U);
    msg.setSourceEntity(249U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(64U);
    msg.op = 47U;
    msg.speed_min = 0.419299753103;
    msg.speed_max = 0.505342925388;
    msg.long_accel = 0.440286559954;
    msg.alt_max_msl = 0.574265219952;
    msg.dive_fraction_max = 0.869888267735;
    msg.climb_fraction_max = 0.368354768965;
    msg.bank_max = 0.0573878779616;
    msg.p_max = 0.179507781276;
    msg.pitch_min = 0.37299696683;
    msg.pitch_max = 0.329074462009;
    msg.q_max = 0.486527349011;
    msg.g_min = 0.358433312382;
    msg.g_max = 0.00484965393884;
    msg.g_lat_max = 0.94018316088;
    msg.rpm_min = 0.274032335314;
    msg.rpm_max = 0.903377842125;
    msg.rpm_rate_max = 0.76201417384;

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
    msg.setTimeStamp(0.9880493957);
    msg.setSource(11244U);
    msg.setSourceEntity(97U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(57U);
    msg.op = 21U;
    msg.speed_min = 0.679749668401;
    msg.speed_max = 0.634576896621;
    msg.long_accel = 0.993936882875;
    msg.alt_max_msl = 0.85995059611;
    msg.dive_fraction_max = 0.475370655479;
    msg.climb_fraction_max = 0.0148874855255;
    msg.bank_max = 0.202827992477;
    msg.p_max = 0.185691860202;
    msg.pitch_min = 0.973449620684;
    msg.pitch_max = 0.906074207174;
    msg.q_max = 0.419062785074;
    msg.g_min = 0.889463214631;
    msg.g_max = 0.671839801726;
    msg.g_lat_max = 0.916896405924;
    msg.rpm_min = 0.0778546266318;
    msg.rpm_max = 0.229652289178;
    msg.rpm_rate_max = 0.159287340924;

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
    msg.setTimeStamp(0.684466597427);
    msg.setSource(60606U);
    msg.setSourceEntity(78U);
    msg.setDestination(65182U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.342018746969);
    msg.setSource(13491U);
    msg.setSourceEntity(102U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.0390165535242);
    msg.setSource(53207U);
    msg.setSourceEntity(168U);
    msg.setDestination(29054U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.734407690689);
    msg.setSource(15707U);
    msg.setSourceEntity(226U);
    msg.setDestination(26807U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.968592530148;
    msg.lon = 0.797868859758;
    msg.height = 0.782947895108;
    msg.x = 0.501365128616;
    msg.y = 0.214771174582;
    msg.z = 0.893438802427;
    msg.phi = 0.752118697318;
    msg.theta = 0.175479954294;
    msg.psi = 0.301096171363;
    msg.u = 0.328873981158;
    msg.v = 0.243940932355;
    msg.w = 0.162242143622;
    msg.p = 0.826652717966;
    msg.q = 0.253810628694;
    msg.r = 0.398034488479;
    msg.svx = 0.652833005008;
    msg.svy = 0.919399952278;
    msg.svz = 0.301027380304;

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
    msg.setTimeStamp(0.436561036757);
    msg.setSource(39181U);
    msg.setSourceEntity(83U);
    msg.setDestination(46162U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.088142784762;
    msg.lon = 0.486147225224;
    msg.height = 0.695462696753;
    msg.x = 0.863266918511;
    msg.y = 0.988184492635;
    msg.z = 0.523086991162;
    msg.phi = 0.728353120027;
    msg.theta = 0.295163861069;
    msg.psi = 0.36832598343;
    msg.u = 0.640035635161;
    msg.v = 0.890313655877;
    msg.w = 0.526129931153;
    msg.p = 0.356598430867;
    msg.q = 0.0974058783185;
    msg.r = 0.704528752561;
    msg.svx = 0.340916327281;
    msg.svy = 0.298722577153;
    msg.svz = 0.424304144419;

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
    msg.setTimeStamp(0.912708811521);
    msg.setSource(23544U);
    msg.setSourceEntity(196U);
    msg.setDestination(54027U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.664241346983;
    msg.lon = 0.782318673455;
    msg.height = 0.542189306312;
    msg.x = 0.126169872838;
    msg.y = 0.457641125297;
    msg.z = 0.0117367267825;
    msg.phi = 0.711144722317;
    msg.theta = 0.639918140568;
    msg.psi = 0.108429382815;
    msg.u = 0.607537930891;
    msg.v = 0.0537222190275;
    msg.w = 0.464055414588;
    msg.p = 0.455790263802;
    msg.q = 0.712142386015;
    msg.r = 0.35654470435;
    msg.svx = 0.705177220019;
    msg.svy = 0.523025008229;
    msg.svz = 0.352339686293;

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
    msg.setTimeStamp(0.475251280246);
    msg.setSource(65485U);
    msg.setSourceEntity(237U);
    msg.setDestination(52139U);
    msg.setDestinationEntity(19U);
    msg.op = 197U;
    msg.entities.assign("JRDXNGPTXLMQEUXIVYQILUWCHHXPNIDOKWSEAXDPRYGGMLWOIFUKNWOYBVHWJAEMUIZAHLRPBXWPBOCSSELCHGRYEVJFWIJKBZHHJHKLNGZQQPTYKSLJXFZSODLTGGBFXCTEYDBONOTCYMNSBODNBAYSRIUEKHZRJWTSOFKXCVUIOUSQWMVZGUMIPJMQACZMPVQKEPAUDBCMLZSCFTZXVGQMRFAWAQKLZTNCVRVUIERYDPNFBD");

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
    msg.setTimeStamp(0.175517076426);
    msg.setSource(51399U);
    msg.setSourceEntity(80U);
    msg.setDestination(51936U);
    msg.setDestinationEntity(55U);
    msg.op = 4U;
    msg.entities.assign("TAPMHNUSUFHAXWIOYRUIISACEIYPGVBNFCBTXDPQWIDVXDRAPNQEJOUVWYZNKCRSEBFJDIFRJTACUAHBBJKKVLACCRRPNWYQCAZOHKLCGLZOLOJUIZWGLEXISUTNPFVAVQFSTGLQUGKLGYNMXWOSQXTHLJXBZYKYMQKCFBPDBOXZLRFFMORTBTWZNCQPSUKHEXSQTJKNSIWQVUEG");

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
    msg.setTimeStamp(0.754646183372);
    msg.setSource(22552U);
    msg.setSourceEntity(230U);
    msg.setDestination(39896U);
    msg.setDestinationEntity(10U);
    msg.op = 23U;
    msg.entities.assign("EXUROCBPJDLCUUJVHQSXQCGIPQGYXYLSLTIEPCPAAEQOMBCTCASFONKUNJBFIIOOXWZRKZFNESHINIURMFJUIXWJXHXWHWEBGYHKYEHGKEGNRZTQHYVMZKZLTHYOJMKFFQVTMLG");

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
    msg.setTimeStamp(0.965184979984);
    msg.setSource(6837U);
    msg.setSourceEntity(91U);
    msg.setDestination(30402U);
    msg.setDestinationEntity(98U);
    msg.type = 118U;
    msg.speed = 4573U;
    const char tmp_msg_0[] = {-106, 52, -103, 37, 36, 80, -101, -26, 5, -120, 17, 106, -61, -6, -77, 54, -120, -48, -16, -13, 111, 53, 81, -74, 103, 35, 78, 91, 90, -70, 16, 23, -90, 117, 7, 90, -48, -93, 90, -11, -99, 126, 43, 59, -69, 87, -106, -119, 34, 91, -71, 54, -38, 102, -77, -27, 39, -55, -67, 28, 111, 5, -78, 119, 34, -107, -101, 98, 48, 10, 60, 3, 53, -62, -10, -13, -23, 5, 28, -15, 40, -44, 62, -93, -119, 74, 112, 11, -4, -94, 96, -36, 12, 64, -49, 4, -13, 25, 83, -22, 34, 62, 121, 114, 108, -12, 67, -110, 119, 4, 33, -38, -110, -96, -23, -97, -22, 110, 115, -77, 62, 15, 42, 111, -126, -56, 45, -65, 8, -115, -125, 117, 104, -15, -35, -118, -127, -117, -86, 102, 57, 56, -69, -56, -117, 37, 46, 30, -123, -22, -45, -12, 109, 85, 78, -113, -55, 102, 20, 68, -15, -12, -34, 108, -122, 36, 96, 49, 87, 81, 101, 61, 92, -33, 18, 17, 118, 28, -125, -87, 93, 73, -27, -41, 125, 96, -23, 105, -26, -116, 16, 6, -47, 76, -58, 39, 115, 38, 122, 16, 102, 122, -92, 71, -47, -3, -128, 104, -9, 98, 84, 2, 70, 1, 115, -23, -47, 96, -82, 54, -26, -11, -3, 34, -123, 83, -69, 101, 25, -40, -125, 112, 64};
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
    msg.setTimeStamp(0.189354267694);
    msg.setSource(64836U);
    msg.setSourceEntity(126U);
    msg.setDestination(29528U);
    msg.setDestinationEntity(122U);
    msg.type = 57U;
    msg.speed = 21472U;
    const char tmp_msg_0[] = {78, 122, 94, -117, -5, 17, 93, 119, 16, -51, 66, 63, 20, -62, 98, -34, 43, -120, 50, 26, -119, 63};
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
    msg.setTimeStamp(0.425279808635);
    msg.setSource(32443U);
    msg.setSourceEntity(90U);
    msg.setDestination(41807U);
    msg.setDestinationEntity(152U);
    msg.type = 249U;
    msg.speed = 27549U;
    const char tmp_msg_0[] = {59, -63, 53, 5, -57, -128, -51, -29, -54, -8, 119, -114, -14, 40, -10, 60, 123, -51, 70, -62, 62, 77, -42, 74, -50, 59, -1, 126, 126, 43, -41, 9, -47, 124, 108, 123, 105, 86, 19, 87, 37, -49, -50, -32, 96, -92, 51, 92, 118, -14, 12, 87, 37, -11, -75, 67, 14, -123, 101, -56, 100, -86, -128, -5, -81, 27, 8, 65, 78, -41, 109, -94, 91, 74, -88, 49, -30};
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
    msg.setTimeStamp(0.25500237853);
    msg.setSource(62400U);
    msg.setSourceEntity(252U);
    msg.setDestination(57171U);
    msg.setDestinationEntity(18U);
    msg.op = 38U;
    msg.tas2acc_pgain = 0.346989192032;
    msg.bank2p_pgain = 0.859184526552;

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
    msg.setTimeStamp(0.13589412682);
    msg.setSource(7275U);
    msg.setSourceEntity(176U);
    msg.setDestination(5202U);
    msg.setDestinationEntity(21U);
    msg.op = 108U;
    msg.tas2acc_pgain = 0.00356145097589;
    msg.bank2p_pgain = 0.992057893463;

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
    msg.setTimeStamp(0.495058326338);
    msg.setSource(39809U);
    msg.setSourceEntity(151U);
    msg.setDestination(16781U);
    msg.setDestinationEntity(208U);
    msg.op = 165U;
    msg.tas2acc_pgain = 0.0791667706219;
    msg.bank2p_pgain = 0.786910044765;

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
    msg.setTimeStamp(0.458095674476);
    msg.setSource(26694U);
    msg.setSourceEntity(185U);
    msg.setDestination(63594U);
    msg.setDestinationEntity(13U);
    msg.available = 2825991085U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.626559572006);
    msg.setSource(39837U);
    msg.setSourceEntity(208U);
    msg.setDestination(37921U);
    msg.setDestinationEntity(194U);
    msg.available = 2609836530U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.922530530736);
    msg.setSource(48281U);
    msg.setSourceEntity(215U);
    msg.setDestination(57512U);
    msg.setDestinationEntity(112U);
    msg.available = 588912133U;
    msg.value = 179U;

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
    msg.setTimeStamp(0.797160978559);
    msg.setSource(48770U);
    msg.setSourceEntity(15U);
    msg.setDestination(43195U);
    msg.setDestinationEntity(96U);
    msg.op = 127U;
    msg.snapshot.assign("XDFXEOXXITXVFMETR");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.634732397062);
    msg.setSource(34442U);
    msg.setSourceEntity(92U);
    msg.setDestination(26345U);
    msg.setDestinationEntity(25U);
    msg.op = 119U;
    msg.snapshot.assign("UBXJQXKAVLLCJITFAIQCCUWSYLDJEULIEITTAVXYFYPNPOUICFQVNIKKTOGRYCWHWKMREJRQQDXMRKMSECSBWJJXEDAZRZBZPPPJFMMPBMRTXEJEXSVBBLNMDBNOUOHPZMGAVKHRIUTFVCFOHADIQYHFNHUGKHONESTOYOYAXIMGBOCRSUOKJJFNZYKLW");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("NHUCGKUTCFQVKPFHDSOMZUSZXHLOQPWANBAYVPBDKXCNBPROTVJAMEGYZRMKZGXZRJSYQTNJJXYJHVXPLYLINXIHPSNVBSQCKWYETGHUOUMVHFDECAIOWYJTMTMQGBRZJEPVQWVEBOKYAFEKEYEUIVAWHSDBCLKEGWQBDFWIPRLOHFINGUAMXMLXWSJNTNPNKOULEBXAIDUFTGPZCT");
    tmp_msg_0.lat = 0.213812273052;
    tmp_msg_0.lon = 0.580910351936;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.z = 0.889342730608;
    tmp_msg_0.accuracy = 0.966188556556;
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
    msg.setTimeStamp(0.396125478786);
    msg.setSource(50109U);
    msg.setSourceEntity(126U);
    msg.setDestination(10920U);
    msg.setDestinationEntity(247U);
    msg.op = 127U;
    msg.snapshot.assign("XFNOIAJIRBWWYQZVKZIFAWZTESCTPOVQXFOJCCEUMZPAARNGYCSOAGHVWKSF");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 59511820U;
    tmp_msg_0.start_lat = 0.040325737142;
    tmp_msg_0.start_lon = 0.569772678437;
    tmp_msg_0.start_z = 0.832228293085;
    tmp_msg_0.start_z_units = 88U;
    tmp_msg_0.end_lat = 0.498797403928;
    tmp_msg_0.end_lon = 0.426174399447;
    tmp_msg_0.end_z = 0.858398751955;
    tmp_msg_0.end_z_units = 147U;
    tmp_msg_0.speed = 0.829476455847;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.lradius = 0.801677602453;
    tmp_msg_0.flags = 213U;
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
    msg.setTimeStamp(0.990304036297);
    msg.setSource(7014U);
    msg.setSourceEntity(228U);
    msg.setDestination(58247U);
    msg.setDestinationEntity(136U);
    msg.op = 81U;
    msg.name.assign("RVGRQUPSWHZFYWHINTLXBZLRGYBRABMHXQPWAJ");

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
    msg.setTimeStamp(0.0109879117921);
    msg.setSource(22142U);
    msg.setSourceEntity(31U);
    msg.setDestination(54439U);
    msg.setDestinationEntity(2U);
    msg.op = 215U;
    msg.name.assign("RGASRSMMOOICVXKWSIYCBFCZBPFTZJSXUIIIRKHEEDEQJIRIHVXNYHFLAWQDKGKOCTJAZBSMFDYP");

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
    msg.setTimeStamp(0.345741909612);
    msg.setSource(22597U);
    msg.setSourceEntity(18U);
    msg.setDestination(30135U);
    msg.setDestinationEntity(11U);
    msg.op = 99U;
    msg.name.assign("THVDOLZCXVAZBWAAIMHXIRFFPCQTIHJTXBAVBRFOZGEVDJEYOKGJOJJITJPMORBHKYZGWVMRPTQRVUSCDXUAZNKGLIOAMWKIELYDPJLPUSZWJCLREVDFZFNEGYOATGWWXHBNMUQRBYIFZYWRSHGTHOYSHVKBBPSUYCPCNKQEIOAUWQUZZETSYVCXGGJN");

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
    msg.setTimeStamp(0.2703517876);
    msg.setSource(44411U);
    msg.setSourceEntity(89U);
    msg.setDestination(52568U);
    msg.setDestinationEntity(74U);
    msg.type = 184U;
    msg.htime = 0.709187264391;
    msg.context.assign("OGWQXNOBZZLOEDSYLXYWCQIXDVTRJQRBLTDGCDJRAUREHLYIBKHPVNCBTLAKUSCYZVCVSQNMGPRYEYTODJHUHXUXSBGIEBPLFXTZZKJSQXCJIWRDTPURVJCTEWLTYABVPFMFHAIJGKOLMVINWSODL");
    msg.text.assign("KWEWYFRPZAMMCLVHTSGYFNFTQRAGKCSJUZXGHXCLYQYRNWCUBZVIHHXJDVHTKOLOSVMVLLBCIHFWRMAQSTBJJHKRDUUONPKMEMEGGVRRHDFXTSPRXGUBBAPNQI");

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
    msg.setTimeStamp(0.403120798453);
    msg.setSource(37816U);
    msg.setSourceEntity(37U);
    msg.setDestination(6748U);
    msg.setDestinationEntity(252U);
    msg.type = 250U;
    msg.htime = 0.450786688441;
    msg.context.assign("TMKAPIIXZNLRPJBSKZCOPHQWZWIKGRNSVXTNDGWIHBZCZULJFPZUYCJDIMOOQCVLAAHYAESKMSHXTGJEUZTNKLFNUUQFMCWLQJPJWEVFIRCURNHFWCBBPUMZNDKPYETVG");
    msg.text.assign("LYVUXPMHKVNHTEHJRCCFNABJIMBDIUQPONLUDXGUJNDWJQLWZXFWXIKEZADQYJOQGNBUZNUKKOZYTTLOPQSDGBWVWGJLP");

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
    msg.setTimeStamp(0.982243924438);
    msg.setSource(3493U);
    msg.setSourceEntity(161U);
    msg.setDestination(54590U);
    msg.setDestinationEntity(112U);
    msg.type = 150U;
    msg.htime = 0.0801102840868;
    msg.context.assign("HBFEURWYYCPITGKXQQLICYLHBZSMBADNNWGPENYJJYKKGVJMBOQASDAPZFPZTRUGRPOSLYYDSJSQPT");
    msg.text.assign("NAHTPLHTIRCSFZAIFLZXEKBBPDESWQOEZVPJRFFEEHESTQDPRXURTJQQFYGOMNVTWVUFDSFTHQWJCCDLYNBKOSJDMPZQHWJXUCVSEKOLKACBDFYAJJUMHWROZIRMFIWOCRREZMAIITWLUABVNHWMZXNYVIJVWNKQXGLFM");

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
    msg.setTimeStamp(0.0470601320376);
    msg.setSource(13759U);
    msg.setSourceEntity(18U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(181U);
    msg.command = 143U;
    msg.htime = 0.533272201132;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 240U;
    tmp_msg_0.htime = 0.860119523224;
    tmp_msg_0.context.assign("KAMJMDCSBLZXUWLRQVXLENJNDGGNFZZBSIAMSSVOBBOTPEFOLBUNLWRSYCQ");
    tmp_msg_0.text.assign("LOPGZLKNRHZECTGXVWLQKWBLTWJPOEVCODTXDGWDZYSBKPYVYOFWIJKLFACZUMISPAHVBXMJKQDXDYZUETCFDDJESDYNESFXQIMGPCKSNOXMYPIRYKAVGOSWTUERLQVJXUABSNSOSAANRLPRBOWF");
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
    msg.setTimeStamp(0.646963174665);
    msg.setSource(37842U);
    msg.setSourceEntity(253U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(229U);
    msg.command = 242U;
    msg.htime = 0.51242103058;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 204U;
    tmp_msg_0.htime = 0.652037139372;
    tmp_msg_0.context.assign("DGXYVAELVHBRVTDXOHRHANJYNGRYMKDJOEFYMPDQTQGADYQUIPSKMKHIWXBCZMURZIEVYVWJWGROCRQSJBDSZEWAOVAMPLLULOZEIBWXZHSDMVTQYCVJCXKRUXYJHFXJSOFDSNXNZDLGWONGHUIIENUBMBFOFXCQLAUTVGIPIMFFHRAGOYPZGWFCQBKZBEUPHZKEJPTTGNKSKQCNBKFIZQTWPUPBMDTQSXLHCAT");
    tmp_msg_0.text.assign("VMYNPXZXYMKXCRXHHIOEHMHNTDBXCEZSBDLDRIUMCSJTLESOGNUMLJRNCIKEETXAQWOSPRMWQNGECSFKGHSWWPKIZUQLIPFBPUMEVDTPGARKLSJOFAGULJKCI");
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
    msg.setTimeStamp(0.856474766359);
    msg.setSource(17752U);
    msg.setSourceEntity(197U);
    msg.setDestination(55658U);
    msg.setDestinationEntity(128U);
    msg.command = 251U;
    msg.htime = 0.385062112159;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 27U;
    tmp_msg_0.htime = 0.664470340237;
    tmp_msg_0.context.assign("RPLKMTELRWYUAMR");
    tmp_msg_0.text.assign("DYMCVWOWZGXPCROSILWBQZXTJOOCPJUCPGTTTIFUHSEHVFZNAHXWNPKROAFTQJTBNGUPJQZRPLYFGVMKYWBPVGORHYQNTDHGWQMDYFACNSBDAEYSBDJAYDLTUVIEVMSMPHCICGIKWINNDSJXOLJMSC");
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
    msg.setTimeStamp(0.232419439155);
    msg.setSource(41623U);
    msg.setSourceEntity(12U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(134U);
    msg.op = 70U;
    msg.file.assign("MGCICKVBIXTFXRQNIDK");

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
    msg.setTimeStamp(0.30838453188);
    msg.setSource(37173U);
    msg.setSourceEntity(105U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(138U);
    msg.op = 152U;
    msg.file.assign("QZYJVGPYNCSAMYALXNJXDUFTPRFGBCBNKLYLGRLKZHTEKAXYDGOJATOKZOXZGAPIJYACFDSWVPFRMKPBSZNETFHSRJHITMHKZXHPYNOGPZTHAQWESWRCSHUZQQZOUOOLDNIIPSWQLVNKOIUCNMRPWXOISEWBUEQVBDIQFNZGBEGTWDSKVUMUQXEBIUIJHJMDXLCADMBMVYVRFDGFNKFMCSEQLWYGBBECTV");

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
    msg.setTimeStamp(0.0835051799154);
    msg.setSource(48092U);
    msg.setSourceEntity(4U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(7U);
    msg.op = 101U;
    msg.file.assign("TJZAOSDIRDLCHNJIDTTAPXFROLROHWVTBBKYRERBRCSBOHRUAYYEPCRLXDESEUKMZEFBLTIFTHMJJANNXFPLOGXWHJRQICYDSTVTAEKIOFKZOGLKWDWYXBJCCQGUPINPMNUKMZKNLRXZSJDXQIJGDVFKQBPWWHQMUGYPZKMEDOHEOGXVVBVVMTWNXJHPGUXJAGZLIZOMSWSPQDVCFICEKYQMASAFHYUUEFNMNBQHFAGUSIBVQ");

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
    msg.setTimeStamp(0.537325173046);
    msg.setSource(24544U);
    msg.setSourceEntity(137U);
    msg.setDestination(38481U);
    msg.setDestinationEntity(49U);
    msg.op = 146U;
    msg.clock = 0.88649310065;
    msg.tz = -89;

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
    msg.setTimeStamp(0.942331158293);
    msg.setSource(29821U);
    msg.setSourceEntity(95U);
    msg.setDestination(54207U);
    msg.setDestinationEntity(47U);
    msg.op = 168U;
    msg.clock = 0.243579268272;
    msg.tz = -89;

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
    msg.setTimeStamp(0.182102739242);
    msg.setSource(27414U);
    msg.setSourceEntity(194U);
    msg.setDestination(28750U);
    msg.setDestinationEntity(145U);
    msg.op = 93U;
    msg.clock = 0.819619399192;
    msg.tz = 76;

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
    msg.setTimeStamp(0.332917361424);
    msg.setSource(16195U);
    msg.setSourceEntity(170U);
    msg.setDestination(2608U);
    msg.setDestinationEntity(243U);
    msg.conductivity = 0.919671335628;
    msg.temperature = 0.111684628218;
    msg.depth = 0.905518810876;

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
    msg.setTimeStamp(0.593102126415);
    msg.setSource(51244U);
    msg.setSourceEntity(51U);
    msg.setDestination(5103U);
    msg.setDestinationEntity(0U);
    msg.conductivity = 0.40753883335;
    msg.temperature = 0.89243468144;
    msg.depth = 0.524186779928;

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
    msg.setTimeStamp(0.685141652378);
    msg.setSource(15570U);
    msg.setSourceEntity(191U);
    msg.setDestination(43055U);
    msg.setDestinationEntity(86U);
    msg.conductivity = 0.0203642381881;
    msg.temperature = 0.0371823151962;
    msg.depth = 0.877705907148;

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
    msg.setTimeStamp(0.35380554234);
    msg.setSource(18287U);
    msg.setSourceEntity(183U);
    msg.setDestination(58291U);
    msg.setDestinationEntity(154U);
    msg.altitude = 0.950326383915;
    msg.roll = 52799U;
    msg.pitch = 32936U;
    msg.yaw = 53077U;
    msg.speed = -16996;

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
    msg.setTimeStamp(0.85689500215);
    msg.setSource(62819U);
    msg.setSourceEntity(187U);
    msg.setDestination(25493U);
    msg.setDestinationEntity(231U);
    msg.altitude = 0.806597702305;
    msg.roll = 18389U;
    msg.pitch = 48590U;
    msg.yaw = 55245U;
    msg.speed = 1904;

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
    msg.setTimeStamp(0.706493214104);
    msg.setSource(62017U);
    msg.setSourceEntity(106U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(68U);
    msg.altitude = 0.0147309713509;
    msg.roll = 59269U;
    msg.pitch = 28560U;
    msg.yaw = 15599U;
    msg.speed = 1209;

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
    msg.setTimeStamp(0.182721151559);
    msg.setSource(47189U);
    msg.setSourceEntity(180U);
    msg.setDestination(58893U);
    msg.setDestinationEntity(138U);
    msg.altitude = 0.46127834777;
    msg.width = 0.205978231344;
    msg.length = 0.359275975597;
    msg.bearing = 0.289353650402;
    msg.pxl = -8102;
    msg.encoding = 208U;
    const char tmp_msg_0[] = {97, 49, -23, 68, -98, 76, -121, -22, 1, -7, 72, 103, -64, 21, 103, -80, -44, -29, -25, -110, 67, -52, 57, -100, 51, 60, -78, 90, -85, 71, -34, -38, 112, -3, 56, -39, 55, -70, 17, 7, -39, -41, -37, 66, 13, -2, 109, -41, -42, -44, -26, 48, 4, 126, -99, -3, -102, -116, 77, 63, -15, -43, -96, 38, -46, -77, 125, -66, 70, -125, 45, 0, 8, 38, -101, 71, 21, 109, -90, 44, -106, 55, 47, -8, -21, 107, -115, -12, 33, -70, 121, -16, -53, 114, -17, 51, -25, -5, 67, -23, -109, -45, 104, -7, -79, 84, -121, 55, -51, 104, 76, -84, -53, 111, -58, 96, -78, -42, 102, -100, 123, 13, 41, 12, -36, 111, 23, 62, 34, 82, 98, -38, 42, -75, -105, -15, 73, -30, -92, -108, -76, -12, -50, -57, -29, 102, -122, -51, -73, 123, -63, -114, -73, 110, 103, -87, 97, -91, -124, -40, 83, -52, 71, -23, -122, 68, 5, 22, -39, 51, -78, 60, -128, 18, 37, 105, -46, -38, -93, -75, -112, 124, -120, -95, -31, -91, -70, 14, -71, 11, -121, 79, 28, -32, 44, -12, 23, -117, 102, -38, 23, 21, 107, -93, 39, 29, -26, -62, 58, 17, -66, 118, 83, -61, 91, 103, -33, 67, 74, -41, 94, 106, -70, -17, 82, 34, -4, -98, 10, 61, 55, -18, -35, 28, 78, -43, 71};
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
    msg.setTimeStamp(0.553493109026);
    msg.setSource(47093U);
    msg.setSourceEntity(240U);
    msg.setDestination(27856U);
    msg.setDestinationEntity(29U);
    msg.altitude = 0.769493582225;
    msg.width = 0.0096953486981;
    msg.length = 0.457307644671;
    msg.bearing = 0.476198944354;
    msg.pxl = -16178;
    msg.encoding = 196U;
    const char tmp_msg_0[] = {26, -118, 20, 72, 13, -101, 50, -119, 118, 91, 106, -107, -59, -82, 13, -80, 24, 10, 125, 27, 99, -77, -83, 116, -44, 69, -109, -11, 70, -119, 21, 55, -76, -83, -37, -34, 88, -98, 91, -115, -95, 48, 112, 14, 109, -6, 46, -105, -56, 37, 30, 3, 48, -79, -37, 83, 70, -101, -128, -30, -18, 115, -90, 23, -113, 123, -110, 38, -34, 44, 105, -60, 100, -75, 48, 15, 50, 89, -107, -111, -10, -15, 55, 40, -94, -21, -74, 20, 62, 89, 112, 84, 83, 17, 33, 14, -61, -124, 2, -61, 118, 56, 27, 4, 48, 3, 123, 116, 55, 40, -87, 11, -74, 35, -109, 68, -98, -19, 27, 101, -119, -10, -55, 22, -69, 17, -34, -3, 56, -2, -110, -59, -61, 13, 99, -83, -8, 43, -103, -34, 121, -53, -56, -94, -104, -116, -44, 22, -28, 30, -107, 80, -21, 16, -116, -82, 123, -87, -10, -92, 59, -120, 81, -114, 76, -59};
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
    msg.setTimeStamp(0.818781010815);
    msg.setSource(26564U);
    msg.setSourceEntity(206U);
    msg.setDestination(22599U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.076756407566;
    msg.width = 0.454731074582;
    msg.length = 0.253616265132;
    msg.bearing = 0.406360305546;
    msg.pxl = -30253;
    msg.encoding = 112U;
    const char tmp_msg_0[] = {102, -20, -99, -4, -91, 74, -57, 70, -95, 86, -34, 106, -50, -14, -110, 103, -110, 23, 78, -90, -14, 84, -30, 24, -90, 112, -65, -92, 78, -23, -117, 126, -116, 123, 63, 92, 89, 45, 25, -27, 60, 83, 61, -66, -20, 32, -39, 75, 79, -30, 95, -46, -34, -111, 11, 71, -118, -20, 23, -34, -2, -35, 88, 37, 33, 8, -76, 80, 105, -37, 110, -3, -79, 36, -30, -41, 124, 102, 59, 86, 76, -107, -10, -5, 50, 83, 17, -6, 90, -100, -37, -5, -82, 123, -94, 13, -53, -88, -74, 89, 84, -111, 42, -63, 55, 59, -19, 49, 67, -42, -121, 2, 54, -18, 60, -62, -45, -72, 75, -3, 90, 88, -39, -37, -30, 27, 6, 50, 22, -26, -18, 112, -25, -83, 124, -16, 122, 108, 40, 78, -49, 21, 86, -99, -73, -53, -107, 98, -117, 25, 1, -14, -98, 3, -74, 60, -101, -67, -116, 73, 105, -94, -113, 104, -90, 61, -128, 79, -32, -21, -42, 12, 63, -125, -108, -29, 45, -75, 80, -108, -3, 101, -38, 67, -88, 6, 60, 91, 91, 24, 100, 42, -84, 28, 46, -20, -93, -94, 32, 115, -86, -43, 13, -6, -49, -11, 42, 43, -13, -56, -76, 32, 20, 90, -86, 6, 28, -27, -98, -111, 51, -15, -115, -51, 115, -4, -31, 9, 94, 61, 61, -67, -70, 101, -42, 58, 12, 0, 36, -38, -27, -31, 94};
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
    msg.setTimeStamp(0.234148178705);
    msg.setSource(55300U);
    msg.setSourceEntity(84U);
    msg.setDestination(52138U);
    msg.setDestinationEntity(37U);
    msg.text.assign("KSTVOSTQCFVTAQMOMQIPGCKQOYDBZFBBOTEXFRWCJGKWHUBHDCTDZTYYRBFRWGHMVKCHALWQAIJNKRDFMASIOPGOISTLDFETMUKDBXFUP");
    msg.type = 246U;

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
    msg.setTimeStamp(0.227165283316);
    msg.setSource(60561U);
    msg.setSourceEntity(222U);
    msg.setDestination(10199U);
    msg.setDestinationEntity(184U);
    msg.text.assign("ODZSKMNTVFYQKWHHSMUGIQKEMFLXKCETIUZNNNDIGQDZFCUQZYGAJCIXXTCZQYONWDUBXUFWCLY");
    msg.type = 54U;

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
    msg.setTimeStamp(0.84782728989);
    msg.setSource(27206U);
    msg.setSourceEntity(154U);
    msg.setDestination(48079U);
    msg.setDestinationEntity(33U);
    msg.text.assign("NIOHQZUWODKCNBYVTBOWXEULPYTKKTPORLOARLRUGUSGOXYDPHLXXRAYASHDFJFEBQISZCZBEZWLXJVVMCFJCIBOXMNMUCQAWOYCXYRDISWELQXUSEJIOPQWWZSBJCPLEZEDGBIPWHZJK");
    msg.type = 17U;

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
    msg.setTimeStamp(0.0447229030466);
    msg.setSource(31343U);
    msg.setSourceEntity(246U);
    msg.setDestination(51291U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.840429214994);
    msg.setSource(44273U);
    msg.setSourceEntity(212U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.413487223101);
    msg.setSource(9556U);
    msg.setSourceEntity(137U);
    msg.setDestination(46062U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.436174380917);
    msg.setSource(27980U);
    msg.setSourceEntity(218U);
    msg.setDestination(12353U);
    msg.setDestinationEntity(96U);
    msg.sys_name.assign("ISQATAKNMEFVBULJYISGCAMAUFJRQUXMDKDMJIRXLPEWFYSGEHMMMXLYBUYWCTJRXIHUHQJLTXETTRFQGKKV");
    msg.sys_type = 19U;
    msg.owner = 18609U;
    msg.lat = 0.890772521579;
    msg.lon = 0.40575870691;
    msg.height = 0.458615233672;
    msg.services.assign("XEEKRNTWBI");

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
    msg.setTimeStamp(0.96881572897);
    msg.setSource(14943U);
    msg.setSourceEntity(203U);
    msg.setDestination(32538U);
    msg.setDestinationEntity(221U);
    msg.sys_name.assign("UDCEGFHTMTASAEPZEXSEZWLVDZXFJRWDGDNKUWENXPMVIPKCBVBAAYERKQQUXFXKJQSSHDYUQYZOCYGMMMCZHHBQBRGGFEGGFFILTNUMTAOKLLPVLFSODZBDPXCPCCGRKUWFTNQXHWUYVIJHJWTD");
    msg.sys_type = 14U;
    msg.owner = 28145U;
    msg.lat = 0.657048094178;
    msg.lon = 0.703706667918;
    msg.height = 0.667439133085;
    msg.services.assign("EETWEYPERQEGLFKPUDXVOFNCDHLXMDNFYSOCWXEOOIABATNXAWISDPZBQTVHTJPBRZWUHQBHBZQBJOLWFZZCGSTIQRGYXDKLJPOSJSWUFNCTUIANNURCBDRJLLGMGWJHZMPFFJIIXVMVXQMUKUQMVRSHKPXYPETKQAUSNNECGAJSRAVGFWHFZNCBVZARHNZOAIAQLWPHKPOVMJLYYKXVDDLEYZLTWKRTRGECFYHIJMTUYVGICBMDUCDKOSXKBI");

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
    msg.setTimeStamp(0.310960483123);
    msg.setSource(48878U);
    msg.setSourceEntity(194U);
    msg.setDestination(18816U);
    msg.setDestinationEntity(111U);
    msg.sys_name.assign("ITBSQZJRNYTXZKQRMDHLAXHGRKQOHZTCSQAVILULDPBZRTJOGGYBPEXTHBUKQRGPIIOSELDXBEESLAGRVOFGYTMOZORHPLDONSUGRWBFFYETNKCFUAJCNICSMWQUAKOVZL");
    msg.sys_type = 240U;
    msg.owner = 20130U;
    msg.lat = 0.516773333916;
    msg.lon = 0.0374577175076;
    msg.height = 0.00567373860137;
    msg.services.assign("QTGTBFVWXNWCNOELZEVHKWMVJXRYFDRLWFICRVPKWNQZNKAWRYAKRSZJZITZEAOPJTXNFOXFRMKUGFHSGWPXLOBZDJEIQ");

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
    msg.setTimeStamp(0.52596489359);
    msg.setSource(19511U);
    msg.setSourceEntity(157U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(169U);
    msg.service.assign("DORJRKKUTVOIDSRGRDYOGBAEZZIUTYKFXCIZZTYFSRNYDVW");
    msg.service_type = 25U;

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
    msg.setTimeStamp(0.781459006398);
    msg.setSource(55179U);
    msg.setSourceEntity(24U);
    msg.setDestination(12760U);
    msg.setDestinationEntity(193U);
    msg.service.assign("GVXSAIVXFRFYIMUOZPFBQUSCLEBFZBRTWHYQORTOOKWCBPDAMMFKUOAAWEPXRWSSFAGXOJUTTITLKGQHHCKIBXZVKMYFS");
    msg.service_type = 68U;

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
    msg.setTimeStamp(0.472946542992);
    msg.setSource(38390U);
    msg.setSourceEntity(177U);
    msg.setDestination(43924U);
    msg.setDestinationEntity(19U);
    msg.service.assign("LWIMTMPOJRET");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.305704004253);
    msg.setSource(60334U);
    msg.setSourceEntity(233U);
    msg.setDestination(32693U);
    msg.setDestinationEntity(249U);
    msg.value = 0.478885275642;

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
    msg.setTimeStamp(0.921712235383);
    msg.setSource(52361U);
    msg.setSourceEntity(13U);
    msg.setDestination(46436U);
    msg.setDestinationEntity(235U);
    msg.value = 0.897774632529;

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
    msg.setTimeStamp(0.900396946616);
    msg.setSource(13159U);
    msg.setSourceEntity(5U);
    msg.setDestination(47134U);
    msg.setDestinationEntity(0U);
    msg.value = 0.139852506573;

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
    msg.setTimeStamp(0.992765520796);
    msg.setSource(53664U);
    msg.setSourceEntity(71U);
    msg.setDestination(41156U);
    msg.setDestinationEntity(130U);
    msg.value = 0.950797267054;

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
    msg.setTimeStamp(0.656239145299);
    msg.setSource(51230U);
    msg.setSourceEntity(154U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(111U);
    msg.value = 0.912555910773;

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
    msg.setTimeStamp(0.909607918329);
    msg.setSource(52022U);
    msg.setSourceEntity(26U);
    msg.setDestination(2771U);
    msg.setDestinationEntity(107U);
    msg.value = 0.397413182355;

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
    msg.setTimeStamp(0.502040104956);
    msg.setSource(28250U);
    msg.setSourceEntity(115U);
    msg.setDestination(17416U);
    msg.setDestinationEntity(77U);
    msg.value = 0.107253077626;

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
    msg.setTimeStamp(0.938696085563);
    msg.setSource(12959U);
    msg.setSourceEntity(171U);
    msg.setDestination(29642U);
    msg.setDestinationEntity(113U);
    msg.value = 0.364701741501;

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
    msg.setTimeStamp(0.43490325438);
    msg.setSource(13515U);
    msg.setSourceEntity(243U);
    msg.setDestination(40544U);
    msg.setDestinationEntity(195U);
    msg.value = 0.642445726206;

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
    msg.setTimeStamp(0.347073934633);
    msg.setSource(41648U);
    msg.setSourceEntity(248U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(228U);
    msg.number.assign("IACKFRPKRKBKWDJSPAEXQINEKQIHEHPJHCJVGTPPORZOUMGCUSSVXZUPVCRMXFSCARFUIVDWXYTTIQLFTQSNRGHNDNOHPZQAYASPHRNLCIEAJDWPGXWZFOOKKUVMYWBVINGELC");
    msg.timeout = 9328U;
    msg.contents.assign("QZCRCPPQHMYUBIMTUSBVMUCGIXVPSOUAMYNOLXUWNDCNWCFEOFGUESEWJDNXXQLOFIWHDYRRLEQVLPGUDQJGWNITKVOHXLFZTIBRKCMQONZQXBWKFENVBJEWZSTIOEYUADRSYKPTANNLXVVVYGZDHZVGKPXUZKJBSHYGHCIFP");

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
    msg.setTimeStamp(0.953295191061);
    msg.setSource(58955U);
    msg.setSourceEntity(80U);
    msg.setDestination(54185U);
    msg.setDestinationEntity(129U);
    msg.number.assign("GQEQEBXUDGBBXDLWTUNBYYKWMGIZJYDHPWEVIYZNEHMFMWDDRHTJGFWHIRROTCCOUPSOSWTLZJAMLGOIYCBMZBQLTCKSWRMJAAFEFMFJBPVSVACMSNEXOBBEWQUKNZZOTVVNXJPYXM");
    msg.timeout = 36646U;
    msg.contents.assign("VFVDYKUZXVSNDODKMONZUWUWRDJVHDIKHXESQIFGGCTTRXMVQKPMIWVABRTSJYKSTOYZMRXNBICFOSIIOFWZUYRFCEJ");

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
    msg.setTimeStamp(0.314102732722);
    msg.setSource(46937U);
    msg.setSourceEntity(156U);
    msg.setDestination(56782U);
    msg.setDestinationEntity(232U);
    msg.number.assign("QCCIZHPWXYFCWEMTSHBTQWKHIZXBQJEUARHJDHNNCKLRRZGATUFLPDBLEXJFJLZCUVYFVVSYONFQIEBDMNTJSNDUIZHLWXLLEUEDZJSRQPESBOYYQQGTARGFWDZPKNUDEOAYTDDRSOPVZRGFKUCHKVRTHOMOENIBGVOIBHAUSPPJJFKDXQGAWXAXVRJ");
    msg.timeout = 12293U;
    msg.contents.assign("RBLDTBYUFJNLUMKROWSQTXVCLKGSFWVVZPXXIKPVGNQSJHUYTMZOKNXIXRAPBZOIIGAATULDMQWWCIDDDBNSEWIUQKHEOAUHEWVSLYCWNBSGFPGCGYBLUEUOFTHYCITJDDLXLYUYTHJLVKI");

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
    msg.setTimeStamp(0.628078552722);
    msg.setSource(25845U);
    msg.setSourceEntity(114U);
    msg.setDestination(13341U);
    msg.setDestinationEntity(135U);
    msg.seq = 461833734U;
    msg.destination.assign("ZSBDDBTVYELNFYGHCGQFUQWWPQWSKVXLWBVRXDPJEOFVMVCUKTCDJQJTJNAHHXYROOMXBKVPJKISNOUFLJFWVKZCZNAQJQCTLLKAMXJYUMKWVUGMQAINPNWUSHYRHXZCSRIGBQOGNITDZTKDPHNEWLWSBELTUNAWZTSASHFRZRESROLDHTGGIMDCMBEEIARMCCUNBOOQFPKDOXYZYFIYGVPZVIZPGKBT");
    msg.timeout = 29433U;
    const char tmp_msg_0[] = {-40, 123, -10, -28, -121, 120, 19, -66, -26, -45, 28, 94, -69, -79, -41, -3, -19, 47, -6, -42, -64, -124, 18, -44, 17, -41, -12, -38, -10, -106, 28, 59, 51, 111, -48, -48, -22, -112, -41, -2, 61, -55, 74, -27, -119, 80, 120, 53, -91, -111, -81, -73, 18, 114, -76, 98, -125, -4, -14, -4, 119, -117, 56, -46, -112, -127, -55, -52, 92, 89, 39, 68, -98, 43, 97, 112, 71, 81, 32, -122, -85, -70, 67, -16, -123, -33, 56, 15, -61, 122, -23, 79, -109, -70, -39, 61, -42, 20, 100, -18, 102, 31, 30, -96, -115, -46, 20, 10, 59, -83, -43, 5, 37, -48, 113, 40, 49, 93, -105, -34, 111, -46, 11, 70, -92, -86, -3, 16, -31, 4, 89, -82, -53, 103, 44, 0, -44, -38, -49, -2, 72, 15, 74, -16, -79, 19, -128, 107, -66, -66, 14, -64, -43, 93, -15, -84, 58, 74, -45, 34, 44, 16, 109, -93, -55, -73, -9, -104, -31, 53, -24, 111, -18, 89, 49, 55, 93, 40, 98, 86, 32, 11, -28, -74, 43, -53, 13, 69, -45, 110, 94, -29, -87, -127, -80, 93, 22, 20, 87, 67, -75, -45, 62, 8, -80, 65, 106, 20, -122, -14, 84, 24, 5, 57, -43, 32, -18, -19, -41, 57, 57, -123, -121, -22, 95, 17, 108};
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
    msg.setTimeStamp(0.840606364314);
    msg.setSource(50904U);
    msg.setSourceEntity(168U);
    msg.setDestination(54435U);
    msg.setDestinationEntity(83U);
    msg.seq = 3085651996U;
    msg.destination.assign("MKTQKOKGFQRMTQHZTYBMIFPTNWRPVBRRBOJYGWLXVZRVXYZMHUUFZCFPEWJNYSWKKLOXGTTKURDVSSDCIZNVXQPCQVHDGGHISWYXIXCAUOSDIDFUVJLZJOWKPVEUBMZUHWMXSUCPEONALSQLRXYFATFONGEZBAIJBTLHDDMLYFHEZNNESHYGQEJJVOQEPPCFCIEADTIWLBMHNZYXJPGIPRJADBCAWTBMYRNHAGAAOOCSCSKUWQRBILE");
    msg.timeout = 20299U;
    const char tmp_msg_0[] = {100, 7, 99, 92, 97, 111, -124, 32, 126, 120, -119, -10, -54, -117};
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
    msg.setTimeStamp(0.815347846081);
    msg.setSource(47202U);
    msg.setSourceEntity(7U);
    msg.setDestination(63318U);
    msg.setDestinationEntity(2U);
    msg.seq = 2138130148U;
    msg.destination.assign("MXGSWWIKVJSTKLMSKEQXUTBEEYVFZGJCPWGLYQXHHGATWOTBAHCQUMENDYZIWLXOGOAUBNPIAXHAHYXTZBFEWIVOTJPTPIKBGUZJLY");
    msg.timeout = 30721U;
    const char tmp_msg_0[] = {33, 86, 39, -81, 3, -103, -120, -123, -122, 85, -70, -2, -68, -63, -69, -78, -100, -124, -96, 59, 103, 18, -94, -49, -71, -78, -15, -124, 56, -119, -56, 15, -104, -75, 78, -26, -46, 96, -25, 83, -35, -24, -55, 94, -35, -86, -85, -27, 92, 115, -70, 14, -46, 35, -52, 106, 18, 60, 104, -89, -112, -14, 63, 87, -67, -15, -99, 70, 40, -100, -125, -5, 93, -47, -45, -38, -68, 31, -2, 37, -15, -1, -121, -121, 61, 118, -43, -28, -67, 13, -82, -98, -52, 119, -37, 16, 80, 7, -108, -39, -113, 82, -29, -78, -42, 84, 104, -52, 111, 35, 45, 43, -50, 47, 10, -121, 83, -41, 48, 14, -46, 88, -35, 101, 104, -12, -64, 115, -61, -56, 51, 98, -122, 24, 96, -90, -25, -44, -67, 25, -7, -74, -70, 75, -25, 19, -76, -111, -36, 98, -12, 67, 13, -36, 86, 100, 115, 111, 65, 68, -36, 11, -125, 97, -53, 4, 123, -19, 73, -26, 17, -103, 102, -39, 64, 80, -120, 107, -50, 125, 23, 39, -125, 9, -44, -126, -105, 24, 106, 1, -102, -84, 115, 106, 69, 95, 62, -99, -119, -106, 110, -90, 110, 121, 37, -56, -90, 45, 38, -57, -13, -95, 21, 85, 50, -101, -17, -77, -84, 117, -86, 10, 19, -107, 50, -98, 30, 48, -98, -43, -13, -76, -65, -65, 125, 9, 72, -89, -4, 124, -109, 31, -127};
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
    msg.setTimeStamp(0.236964882732);
    msg.setSource(17728U);
    msg.setSourceEntity(221U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(253U);
    msg.source.assign("WZEIHTFMSMFBNOLMUKUTOTGFGTCOZSANQOYHRKERMYSTNPAWXBGLYKWPHXJRZGLWXTYQLMZMMWUFXDQXEPVQXCWVRZWHWJVHUWXQDAKIOHLRXATKKCIORLEZCNZOVHVDIDDTFRBJJJFYGPZPEKYRDOADEMGBSFSQIJSNEPSQPXQUMUBNITAJJPOSSRJAGYBBB");
    const char tmp_msg_0[] = {-76, -64, -57, 16, -70, -57, -51, 126, -40, 120, -5, 39, -60, 43, 90, 78, -25, -94, 45, 100, 108, 74, -90, 89, -55, -125, -81, 12, -80, 105, 75, -48, 11, -86, 110, 14, 90, 47, 117, 31, -78, -28, 120, -25, 98, 52, 123, 109, 21, -90, 101, 38, 44, 23, 107, 84, -100, 26, 23, -37, -28, 125, 29, 31, 94, -101, -104, 14, -51, 109, -79, -64, 63, 85, 99, 8, -92, -23, 120, 116, -5, -65, -88, -100, 4, -87, 74, -18, -18, -29};
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
    msg.setTimeStamp(0.648533130662);
    msg.setSource(689U);
    msg.setSourceEntity(112U);
    msg.setDestination(51620U);
    msg.setDestinationEntity(38U);
    msg.source.assign("ZCYVBTSCTSNLDIEDHSKLNEMIIXXZTDANQDILUUJWBWHCEWPFDKPBOBNAPJCOFEXHKBGA");
    const char tmp_msg_0[] = {-23, 44, 20, 12, 95, -16, -28, 34, 104, 64, -53, 116, 85, -70, 24, 30, 112, -49, -48, -125, -85, -48, -65, -46, -120, -93, 103, -105, -18, 100, 40, -19, 40, -46, 74, -34, 97, -20, 83, 41, -76, -37, 54, 91, -49, -99, 62, 84, 69, -102, -12, 95, -122, 0, -80, 105, -16, -100, -4, -1, 83, -74, 63, -111, -12, -64, 33, 95, -110, 111, -98, -15, -85, 51, -36, -17, -49, -72, -106, -82, 76, -45, -45, -41, 9, -96, 22, 33, -114, 75, -3, -60, 65};
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
    msg.setTimeStamp(0.682040426955);
    msg.setSource(65430U);
    msg.setSourceEntity(22U);
    msg.setDestination(5047U);
    msg.setDestinationEntity(33U);
    msg.source.assign("BDSMQMQHDNRGGSLHXSPETTRZNKFHLETXMGFMUSCIDVAQTBUWTOOPJZPXLNDWTXKPRAGYTIJJAKBMNACJANEZWIXIKQDAVVJGYYJMDNSALGBUEOI");
    const char tmp_msg_0[] = {-104, 23, 21, -127, 102, 8, -83, 18, 81, -83, 3, 110, -86, -12, 52, -14, 23, -58, -120, 98, 119, 13, -114, 6, -48, 35, -69, 89, 104, 31, 83, -25, -56, 69, 32, -91, 123, -6, 6, -93, -79, 5, -81, -40, 6, 106, -60, 28, -71, 78, 105, 48, -92, 91, -47};
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
    msg.setTimeStamp(0.180070894675);
    msg.setSource(38202U);
    msg.setSourceEntity(200U);
    msg.setDestination(35358U);
    msg.setDestinationEntity(0U);
    msg.seq = 2096574257U;
    msg.state = 217U;
    msg.error.assign("UNBEKNEAAOMKRXRLAIPMWIYGTNENLMODCGUMUBXLVPMPXCPXHGCHQATFRDQJTCWKZFMYJZHTTKNOIPUXTSYZXKXJESCULAMNTVVRYUQMYPQQHVHZVPSEILIROJGEDVWIOJEISBQCLDTNJHAIFUYLE");

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
    msg.setTimeStamp(0.473360184511);
    msg.setSource(56090U);
    msg.setSourceEntity(199U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(28U);
    msg.seq = 1928808662U;
    msg.state = 90U;
    msg.error.assign("INBUDUUIIVRGWNWSXMRMRKXYQVOXDTESDHJMIZZQXRTMPQRBPKNOQNHQILGXKVZDOVAYVWAYPZFBMMVDRBULZFHXYWWNGWKSJ");

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
    msg.setTimeStamp(0.165554495043);
    msg.setSource(12586U);
    msg.setSourceEntity(126U);
    msg.setDestination(22418U);
    msg.setDestinationEntity(8U);
    msg.seq = 2261612658U;
    msg.state = 105U;
    msg.error.assign("KHCEPNJASVZBNQJCVWJDNVXOWMVGPKEIXNMDKRQORQAUJYSTLDLQVWFACZSTLRGUJM");

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
    msg.setTimeStamp(0.667123438426);
    msg.setSource(24452U);
    msg.setSourceEntity(248U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("EZIZYLJVOHQUSCSIQJPFTIDTEOYPABHVCBOSBKAQIGUXNASCPRQUZQKLTILXTNBBQYUSRWVUWTITMNFGOJVFFVQGPRPKHNRQTYYXWJXBBFWFEUXSCDBNMHJJQPLIMHGWLSIUVUNJGKZLFXMKYJUCYORYYWHHKVEEMNNJCNQJMCDOLOLGMGKWSGWDHWFNKEGKZASRXZTIAYRUHIARKMBCHVRTMFDZDSEADMXTOLFCDOGXAALPX");
    msg.text.assign("JRMLZPYYCMBBNGIYCQXZDQTNGLNMEABFWRMZNPIXYWGFDUSYPXGRBAUVSUAGKHWUBZJTSTXEFVQJVSPCIDPDXPPOLCSGFPERTTOCMBKFSOWQHBPCRMRAAOEFPGEAQJMOVGTQEOFDAIHLJYZVNKGAHIXQOVFYVXHJAZCDFTHLNHWLKNXTLVIUXDVJZSWCDSMIINIJSRGSEJQKMTDANYLLHQBOILZ");

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
    msg.setTimeStamp(0.55980872613);
    msg.setSource(39538U);
    msg.setSourceEntity(207U);
    msg.setDestination(37936U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("CMSEGODRTTHUIFGLSUHWTRCDWLLQYDGVHXYPWCFPVCWDTQPOZIKGVAUWRNYFEWGAQNTHKZKKHPXIXOSFOOMKJQFALDURGLXHQNBQ");
    msg.text.assign("HFQNMPSLBRSUCCJXBAWHADZIJMABWLEHEOSYKMBKTVVBTGNGYYUSNLUZUZACIFINIUKMOJTLJQLLXMHJOVRWHXCCQXMWOJMTDYDIU");

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
    msg.setTimeStamp(0.785799498473);
    msg.setSource(34085U);
    msg.setSourceEntity(10U);
    msg.setDestination(28383U);
    msg.setDestinationEntity(201U);
    msg.origin.assign("SZJRUVJQOSGTQGXAIPLBBYWYYEMCCAJIIVMCJGIULOQJSCFLYRGRXAZNRSNCSKOEKHPFQFWAPKJLIDTFTXGKHUYDFKZNMENZESAAQCDZREPVEBWBJWDOLVOHMYHZDIH");
    msg.text.assign("SHTPFAOABGJNDQEYMXDHCRSWJBOAAEACFVRDWNNBJIXZUEVGYTMTKSDGNJTPXIKTARXWQKSZBLFIZEDCCFUPZAKYRPZNFULCUNFHTEJHRSUYGCWQEYVBZVLJKCTEXVJKQSITSRFGRBPOUAIIBPPGXGRYRVQLIFQDBPDMOLYHWIVXPQODKZEWHMFGRPYLLHLOHMTJEWZJLMUXYMSWXVJVOWZOECUAHKOGLNNK");

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
    msg.setTimeStamp(0.993621395869);
    msg.setSource(35620U);
    msg.setSourceEntity(82U);
    msg.setDestination(19408U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("BZWDUHABNSEQNFPKLRVHFKXQAGIGWREUHUDMGTIEIYOBWJRARQVGHQTCEAWAAAJZLUWKRNOCVFRJHAXKSVHXJMUGAPPFIQZKDCSGETKHIDJYCPUMYXMXOJTZZNWPOBETMQYEZQHRRUDOTNHTYONDJRBDQLZPEXBWUMTNCFPEMQYTOTJPMNXAOUCHBMVFMUDLYLXGY");
    msg.htime = 0.199583546875;
    msg.lat = 0.425228534696;
    msg.lon = 0.860165617039;
    const char tmp_msg_0[] = {73, -2, -39, -68, 122, 49, 3, 0, 0, 38, 11, 77, 8, -20, -123, 30, 100, 80, -78, 30, -57, -7, -69, -52, 7, -104, 109, -63, -57, -21, 67, -38, 58, 41, 59, -102, 108, 112, -56, -5, 19, 103, 4, -23, 53, -122, 77, -28, 70, 75, -61, -15, -33, 48, -71, 121, -51, -106, 14, -35, 56, -104, 108, -42, -33, -92, 51, 96, 66, -42, -100, 95, -66, 71, -56, 118, -103, -124, -70, -67, 4, 98, 17, 27, -111, -93, -70, -55, -60, 55, 42, 60, -121, 87, 45, -20, -2, 5, 109, 19, 105, -72, 116, 69, -122, -75, -94, -36, 87, -7, 88, -81, 84, 76, -67, -127, -128, 104, -105, 32, 52, 63, -62, 6, -103, -111, -96, 93, 82, 42, 18, -114, -120, 22, -93};
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
    msg.setTimeStamp(0.875632825888);
    msg.setSource(21398U);
    msg.setSourceEntity(100U);
    msg.setDestination(14412U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("TACOJFPERQELUKIPURQPBQKCFDWCPEHPRKZASMJKWVDEUXUZLPJPYGVAXUITIVHLYZHVLDYNJSJMBNSZKRFQTIKORVAMBCEWGPNOJLREVDXINOYUSEITQBCTPGZLYUXEILFTRVQJVMMVXKDHCYKHAYKHINGMOXQADJUFNBFWFWQFRSWOHKZJRVNUFCQWSTOITDJANTYULXZCTLHCXDCYWWBG");
    msg.htime = 0.569524885263;
    msg.lat = 0.855948453015;
    msg.lon = 0.679312635862;
    const char tmp_msg_0[] = {91, -72, -94, 74, 123, 89, -49, -103, -22, 110, -58, -47, -38, 93, 47, 112, -99, -26, 5, 118, 70, -76, -71, 55, -103, -41, 107, -63, 86, 60, -54, -105, 41, -26, 114, 91, 80, -25, -33, 10, -5, -58, 67, 67, -101, -9, 45, -122, -22, 111, -46, 125, -122, -63, 7, -99, -42, -105, -5, -73, -111};
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
    msg.setTimeStamp(0.551568168061);
    msg.setSource(1668U);
    msg.setSourceEntity(7U);
    msg.setDestination(25722U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("CLUBMHLUQSYFFSJJZXZTDZVZPWRHXFMTHJRINTXNDWZRQNXKORFFUKUTPLTAFOYRAWAWDIXPNEBQSVWXOEYMNYIKTMKPUV");
    msg.htime = 0.612709241863;
    msg.lat = 0.645623898896;
    msg.lon = 0.937111015618;
    const char tmp_msg_0[] = {-66, -3, 123, 20, -13, 85, -109, -68, 91, -105, 121, 69, 99, 39, 76, -59, 87, -9, -3, 2, 54, 13, -26, -43, 115, -82, -119, 22, -29, -53, 90, -43, -42, -111, 78, 114, -69, -60, -25, -104, -109, 83, 102, 72, -70, -97, -115, 95, 40, 98, -117, 110, 32, 103, -47, -57, 81, -20, -43, -54, -121, -80, -23, -39, -34, -27, 82, 101, 68, -111, -67, 85, 122, 115, -102, -84, 39, -88, 101, 8, -59, 90, 30, 75, 6, -42, -17, 104, 36, -3, -85, -10, -92, 5, -100, -119};
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
    msg.setTimeStamp(0.983141745264);
    msg.setSource(50558U);
    msg.setSourceEntity(36U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(155U);
    msg.req_id = 39050U;
    msg.ttl = 56111U;
    msg.destination.assign("CUAPEJOWJPCKYDFALA");
    const char tmp_msg_0[] = {50, 86, -63, 27, 110, -59, 100, -5, 121, -1, 83, 100, 71, -122, -49, -87, 118, 60, -120, -120, 82, -104, -91, -104, 62, -75, 38, -50, 90, 77, -113, 19, 14, -30, -61, 67, 25, -39, 2, -109, 30, 63, 124, 93, -73, -6, -116, 115, 0, 66, -118, 109, -23, -60, -86, 18, -120, -115, 32, -102, -2, 32, -47, -30, -35, 102, 119, -38, 113, -104, 1, 5, -85, -65, 26, 3, 43, -74, 31, 39, -63, -11, -86, -6, -6, 26, 24, 94, -59, 35, 60, -101, -50, -74, -7, 85, -114, -91, 18, -58, -17, 43, -71, -77, 24, 104, -64, -69, -6, 64, -5, 78, -76, 58, -30, -64, -127, -39, 120, -58, -112, -29, 74, 48, 84, -67, 0, 122, 107, 80, -18, -60, -36, -82, 122, -93, -66, 38, 24, -105, 116, 108, 100, 100, 1, -15, -80, -69, -15, 60, 47, 78, 39, 36, 66, -83, 95, 16, -61, -64, 121, -28, -15, -13, 101, 109, -80, -48, 80, -114, -94, 9, -83, -74, -64, 54, -95, -78, -89, 14, 85, -10, 50};
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
    msg.setTimeStamp(0.842804212819);
    msg.setSource(32440U);
    msg.setSourceEntity(107U);
    msg.setDestination(63971U);
    msg.setDestinationEntity(190U);
    msg.req_id = 34150U;
    msg.ttl = 41635U;
    msg.destination.assign("EZBNGWWMORCDFGFYCSZTHYMVQJRLDHSCNXBRKQYNIDSSPEMT");
    const char tmp_msg_0[] = {-43, 92, -78, -38, -30, 112, -91, 124, 2, -72, -62, -88, -2, 123, -50, 102, -9, 109, 24, -1, -113, 98};
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
    msg.setTimeStamp(0.50931346191);
    msg.setSource(8741U);
    msg.setSourceEntity(31U);
    msg.setDestination(25065U);
    msg.setDestinationEntity(69U);
    msg.req_id = 4914U;
    msg.ttl = 1421U;
    msg.destination.assign("IMYLJGEBAZKYNPWDQEAOMGMSDDTXGJFRGOIAXPLFHHJGXQWKTAVUNTRAGRRQBRYKB");
    const char tmp_msg_0[] = {-35, -69, -112, 64, -105, -19, 63, 36, 95, -74, -13, -4, 9, 77, 108, -55, 38, 13, -45, -87, -41, -18, 12, -101, 76, 61, 43, -116, -120, -65, -126, -20, 12, 116, -115, -74, 97, 59, -80, 40, -59, -109, -18, -108, -126, 61, -113, 108, 118, 27, -65, -23, -19, -61, 93, -74, 35, -116, 45, 63, -55, -15, -55, -57, -35, 41, -87, -105, -118, 66, -1, 92, 117, 16, 95, 30, -126, -118, 75, 55, 54, 11, -32, -74, 19, -125, 94, -50, 46, 25, 121, -110, -126, -103, 95, -83, -72, -114, -89, -120, -104, 67, 64, -58, -121, 5, -57, -56, 62, 50, 81, 126, -12, 58, -83, -88, -19, 53, -23, 18, -74, -94, -114, -85, 18, -26, -62, 124, -127, 5, -38, -44, 110, -31, -33, 17, 59, 67, 47, 110, -103, 70, -107, 54, 9, 47, -31, 110, 78, -17, 61, -101, -39, 72, -76, 9, -78};
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
    msg.setTimeStamp(0.769596813232);
    msg.setSource(23239U);
    msg.setSourceEntity(93U);
    msg.setDestination(27684U);
    msg.setDestinationEntity(199U);
    msg.req_id = 63110U;
    msg.status = 101U;
    msg.text.assign("QLESXWJRDNVJZBBGTRFFCYZAQVMKXTJRUWASTUTFPYGXAPEAXLFFWISHMTGBOPXUPYSUOYWVPRVKJKFPNMYCHWGYSNACZBDGLBROIKASIRQXNMAJFUEDRIZQYNYNTCPEKQOTKQZO");

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
    msg.setTimeStamp(0.199957277373);
    msg.setSource(15901U);
    msg.setSourceEntity(206U);
    msg.setDestination(2673U);
    msg.setDestinationEntity(2U);
    msg.req_id = 27617U;
    msg.status = 140U;
    msg.text.assign("JYVWZLCRRZBQWRQTTBEJADIMMBSXVKSZNYDJYNWXPWWEUZTDIQNKGSXSDPBTZAYESPEOQYXWHUZLFLULFIHXBPOOOK");

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
    msg.setTimeStamp(0.743778576395);
    msg.setSource(30508U);
    msg.setSourceEntity(154U);
    msg.setDestination(60555U);
    msg.setDestinationEntity(5U);
    msg.req_id = 41411U;
    msg.status = 169U;
    msg.text.assign("VIWGUTCLGWZQQXKICAMXQHVCFRAXHAMILNPXDINYDWBEMEYLTULELVLRMPJXNGYAQODRJICAEQQY");

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
    msg.setTimeStamp(0.849337930491);
    msg.setSource(13870U);
    msg.setSourceEntity(11U);
    msg.setDestination(53080U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("RPMTKAIFNMJJFLEOBWCYNQHCPLPGXXBOSGMQRBTRVQNCMZOZYAWYXAGQGRJDWYJKPALAQFCUQDOOSXPAIBXTLDPUZHKHZTEQFKAUEXFLWBVGJQDLRZTAICOSSIMOVWZQTCMQUHSHWIDIXJJDMFLHOBYGUTUKYWCWXL");
    msg.links = 2176948568U;

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
    msg.setTimeStamp(0.723468803034);
    msg.setSource(28151U);
    msg.setSourceEntity(66U);
    msg.setDestination(3671U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("XQWTWGPFLLXZKCRRJTTRWUZUIZWBJCXDEIGKOXCFTYVVENZHAQVHYSDSLBMYDSNGNFOBDWXGWJOHQXMRWAKBUJQUBUOAWLCFBHWGSFBRHXEJGTONWRFIMPNKAUEVQEAEAZYKKOPLQIJDJMYFSOVPQJKYBTMXULKUYCMITHQSTC");
    msg.links = 2104399082U;

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
    msg.setTimeStamp(0.425716462076);
    msg.setSource(47191U);
    msg.setSourceEntity(76U);
    msg.setDestination(55895U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("HIOXZITMREJXQRAXPGGJQIMPLHUNBHBLFJCBDJAOFZCXTGGRQZBZSFWKKWNCXEVDMWDYSWQSJEUPLHOAYXOHDGKWGUCHNEUSWHRQDCIYWRTOYIWKVYEXUAGOSKQBNOMMCQKESLSZJQIRALPUTBLXVVWGJVTVMIFTT");
    msg.links = 812835360U;

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
    msg.setTimeStamp(0.801528680715);
    msg.setSource(51679U);
    msg.setSourceEntity(201U);
    msg.setDestination(28535U);
    msg.setDestinationEntity(109U);
    msg.groupname.assign("BUIJBFDGOELOXGWXGVJMLJTBTBYLQHLKATHZSGQZNEQIDFLAKO");
    msg.action = 144U;
    msg.grouplist.assign("KIWMNZUNDEHJYDPGDMHKBIHBDTN");

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
    msg.setTimeStamp(0.292000539816);
    msg.setSource(22281U);
    msg.setSourceEntity(10U);
    msg.setDestination(37459U);
    msg.setDestinationEntity(177U);
    msg.groupname.assign("UCQDZDUGLEYFXFSAZGOJRCVCJDSWTMEXBCQNUKLBOHQLMNABLBWYJIMCCCYGVBPEFZGHIHAPRWQQAKNYDMLNGFIJTHIOAQEQAGOWNFZWEHMGRNYUZTNHZGLHNJBVDUGVMHFRTCUMAOARXFWIEDTDEECREPIIAWPUYFVVNJYSXQMZTKKWOSSSFPQXLAKGJVTRTPFXLMJKLOHUSJDWRXKVPYHSQUTPXJITBSDWUPOKRPOCEK");
    msg.action = 212U;
    msg.grouplist.assign("KJAHPWFILORFQQZUOEBUWUZPNTCOIJTYGOHDBYKDSDVXUSIJNTOHYPJFLLQPZGDEADCVNFXYUDNWNJSNSWMJOSELMOYEOCMXTNSTCMUCUFFBKCSKGHCLMHQBIXQGVMKPEVWGUIQLRXLIHVHPZIPSHYVUQCBRLHBDYNJWWANGZQELRJWXRADNKDKVWKLMXARBXXXIKGTAMECZEMRBIGAFTFBYVPPWTAJOUHRMPRDZGYEGVBSARFKSAJC");

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
    msg.setTimeStamp(0.463194280011);
    msg.setSource(58199U);
    msg.setSourceEntity(206U);
    msg.setDestination(37503U);
    msg.setDestinationEntity(143U);
    msg.groupname.assign("PPVAELTHMDHWUAOQLRHDXNTUXHDOEFNPPRUSDXKJCSPJRJQYYVNCBSZWOGIMJSZTBVAWQVNSNFOTZEHLNSHTUUOAACZTHWMKVZWUKGJLELCZVFINEAQGHIJCBQUKZGSBKUNYMICFIXWDRXIXOMQBKNODOCLLPTVLRBDBCEAEPZYJYUHFCZLANMKRRAFSMRYTLGSWFQXYWQSK");
    msg.action = 201U;
    msg.grouplist.assign("SDFTKWAZAEOGTSFTFUZJXLGCPASBRYGISPYAMCWIRKDBYBCAGGPJQ");

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
    msg.setTimeStamp(0.138300716228);
    msg.setSource(12079U);
    msg.setSourceEntity(189U);
    msg.setDestination(21311U);
    msg.setDestinationEntity(244U);
    msg.value = 0.803102206742;
    msg.sys_src = 10609U;

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
    msg.setTimeStamp(0.0208295264589);
    msg.setSource(28191U);
    msg.setSourceEntity(150U);
    msg.setDestination(30071U);
    msg.setDestinationEntity(90U);
    msg.value = 0.31342472698;
    msg.sys_src = 46931U;

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
    msg.setTimeStamp(0.789213175922);
    msg.setSource(9993U);
    msg.setSourceEntity(242U);
    msg.setDestination(17854U);
    msg.setDestinationEntity(130U);
    msg.value = 0.47217770786;
    msg.sys_src = 27883U;

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
    msg.setTimeStamp(0.767951643097);
    msg.setSource(27205U);
    msg.setSourceEntity(11U);
    msg.setDestination(1271U);
    msg.setDestinationEntity(135U);
    msg.value = 0.748847968699;
    msg.units = 75U;

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
    msg.setTimeStamp(0.4365107065);
    msg.setSource(32453U);
    msg.setSourceEntity(2U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(193U);
    msg.value = 0.113980874914;
    msg.units = 185U;

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
    msg.setTimeStamp(0.389667114419);
    msg.setSource(24446U);
    msg.setSourceEntity(252U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0454172674451;
    msg.units = 8U;

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
    msg.setTimeStamp(0.826333688378);
    msg.setSource(22848U);
    msg.setSourceEntity(151U);
    msg.setDestination(36394U);
    msg.setDestinationEntity(191U);
    msg.base_lat = 0.135456230326;
    msg.base_lon = 0.713907574586;
    msg.base_time = 0.729567365192;

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
    msg.setTimeStamp(0.819525392295);
    msg.setSource(56682U);
    msg.setSourceEntity(122U);
    msg.setDestination(8801U);
    msg.setDestinationEntity(137U);
    msg.base_lat = 0.985499765525;
    msg.base_lon = 0.631385614319;
    msg.base_time = 0.498112490012;

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
    msg.setTimeStamp(0.832142852927);
    msg.setSource(1883U);
    msg.setSourceEntity(29U);
    msg.setDestination(10670U);
    msg.setDestinationEntity(219U);
    msg.base_lat = 0.697077871343;
    msg.base_lon = 0.504494852192;
    msg.base_time = 0.489441960976;

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
    msg.setTimeStamp(0.37002822574);
    msg.setSource(12362U);
    msg.setSourceEntity(226U);
    msg.setDestination(14694U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.0117387838742;
    msg.base_lon = 0.0999102714998;
    msg.base_time = 0.759798143018;
    const char tmp_msg_0[] = {-120, 61, 79, 27, 53, 39, -36, 4, 80, 79, 84, 91, 64, 115, -121, -118, -96, 29, 55, -113, 93, 91, -93, -7, 69, 112, 91, -78, -80, -54, -72, 72, 71, -47, -50, -58, -8, 122, -43, -51, -80, 77, -80, 67, 94, -11, 18, 124, -55, -80, 93, 27, 119, 83, 42, 105, 53, -69, -113, 39, -80, -67, -44, -15, -9, 70, 1, 67, 101, -120, -77, -66, -86, -116, -110, 72, -79, 110, 28, 102, 78, 0, 123, 76, 2, -42, -71, -19, 13, 80, -91, -128, 42, 64, 40, -105, 22, 67, 38, 123, 36, 85, -128, 86, -112, -116, -42, 8, 48, -122, 79, 50, -127, -93, -5, -102, 8, 12, 82, -102};
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
    msg.setTimeStamp(0.41078627859);
    msg.setSource(23323U);
    msg.setSourceEntity(162U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.571117840366;
    msg.base_lon = 0.536975100966;
    msg.base_time = 0.861477651424;
    const char tmp_msg_0[] = {-82, -36, -100, -75, -58, 34, 10, -83, -34, 109, -31, -64, 94, -128, -10, 81, 121, 76, 126, -110, -61, -63, -95, 101, 1, -113, 74, -22, -85, 88, -74, 8, 68, -108, 111, -37, -71, -78, -84, 57, -72, 95, -108, -93, 74, -37, -3, -72, -45, -94, -24, 10, -50, 32, -98, 61, 7, 80, -85, -15, 51, 69, -98, 33, -122, -44, -84, 56, -118, 71, 85, 12, -120, 20, 55, -69, 94, 71, -38, -15, 11, -67, -45, 125, -102, -5, -5, -17, 7, -17, -68, 51};
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
    msg.setTimeStamp(0.218176416021);
    msg.setSource(51336U);
    msg.setSourceEntity(24U);
    msg.setDestination(25865U);
    msg.setDestinationEntity(125U);
    msg.base_lat = 0.288931985285;
    msg.base_lon = 0.280239764139;
    msg.base_time = 0.113862531214;
    const char tmp_msg_0[] = {-41, -10, -88, -97, -6, 123, -39, 54, 3, -32, 36, -46, -14, 96, 21, -97, 59, -7, -11, 126, 90, 8, 103, 23, 115, 0, -68, -93, 95, 8, 125, -12, 1, -65, -28, 67, 106, 7, -73, 79, 110, -47, 119, -52, 7, 98, 11, 103, -45, 47, 8, 58, 37, 27, -40, -9, 69, 30, 125, 81, -106, -85, 77, -50, -75, -116, 85, 99, 74, 0, -56, -84, -113, -22, 43, -70, -70, -46, 77, 124, 19, -38, -59, 105, -123, 12, 52, -19, 19, -39, -83, -99, 33, 25, -119, 5, 74, 22, 82, -62, 91, -47, -23, -111, -89, 85, 50, 85, -11, 67, 5, 53, -49, 119, 98, -18, 125, -5, 25, 55, 8, -60, -76, 19, 97, -12, -82, -121, -38, -53, 4, -50, 63, 35, -13, 38, 26, 11, 34, 9, -15, 62, -76, 29, -61, 114, -67, 34, -28, -128, -2, 15, 110, 53, -20, 86, -114, -6, -105, 9, -83, 31, 82, 55, 122, 35, -90, 49, -41, 119, -125, 11, 114, -38, 67, -9, 24, -119, 8, -11, -62, -121, -92, 67, -34, -84, -4, 120, 54, 66, 24, -109, 27, 92, 93, 20, -9, -68, 91, 31, 92, -96, -88, 22, 48, -70, 120, 119, -26, 43, 91, -13, -98, 126, 14, -99, 91, -120, 45, -103, 31, -57, 94, -85, 121, 0, 78, -99, -27, -86, -110, -75, -27, 109, -76, 90, -87, -56, 48, 12, -122, 115};
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
    msg.setTimeStamp(0.340728741869);
    msg.setSource(8278U);
    msg.setSourceEntity(44U);
    msg.setDestination(32007U);
    msg.setDestinationEntity(215U);
    msg.sys_id = 59476U;
    msg.priority = 29;
    msg.x = -12087;
    msg.y = 25091;
    msg.z = 24682;
    msg.t = 32311;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 137U;
    tmp_msg_0.x = 50739U;
    tmp_msg_0.y = 27769U;
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
    msg.setTimeStamp(0.620042198179);
    msg.setSource(45505U);
    msg.setSourceEntity(228U);
    msg.setDestination(37208U);
    msg.setDestinationEntity(192U);
    msg.sys_id = 32766U;
    msg.priority = 45;
    msg.x = -22235;
    msg.y = 27474;
    msg.z = 21716;
    msg.t = -13137;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 130U;
    tmp_msg_0.period = 3354757531U;
    tmp_msg_0.duty_cycle = 1447398097U;
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
    msg.setTimeStamp(0.739008396889);
    msg.setSource(3391U);
    msg.setSourceEntity(33U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(64U);
    msg.sys_id = 64189U;
    msg.priority = -44;
    msg.x = -5039;
    msg.y = -4457;
    msg.z = 27272;
    msg.t = 24679;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.883670832164;
    tmp_msg_0.i = 0.102875174551;
    tmp_msg_0.d = 0.840051351816;
    tmp_msg_0.a = 0.702997631215;
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
    msg.setTimeStamp(0.819337681223);
    msg.setSource(64875U);
    msg.setSourceEntity(52U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(17U);
    msg.req_id = 40539U;
    msg.type = 216U;
    msg.max_size = 55643U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.974222760639;
    tmp_msg_0.base_lon = 0.305476214209;
    tmp_msg_0.base_time = 0.318026918796;
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
    msg.setTimeStamp(0.0854350131839);
    msg.setSource(14370U);
    msg.setSourceEntity(95U);
    msg.setDestination(64720U);
    msg.setDestinationEntity(21U);
    msg.req_id = 55379U;
    msg.type = 59U;
    msg.max_size = 53252U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.502205852918;
    tmp_msg_0.base_lon = 0.574223607608;
    tmp_msg_0.base_time = 0.586053113778;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 16409U;
    tmp_tmp_msg_0_0.destination = 11126U;
    tmp_tmp_msg_0_0.timeout = 0.928833144768;
    IMC::TrexOperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 249U;
    tmp_tmp_tmp_msg_0_0_0.goal_id.assign("YGKTTLFFTNSFACNQGAMTHEOTEMWRRGGILFTNUBCOAWENAJKYQUSYCKBUVSGIFDKBBOSXXNMMOQPIRQPYISBZNQXPZKHEILWCPWZVYAKYGHE");
    IMC::TrexToken tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeline.assign("JWLVLRMTPWIISUEAGRWREKOHDGAVFYYNMFHMUGYYFEFLNJONUKLATJXMZOHVXUNOSUVQTYRFDLIWKDBSHEZNHRDXUEXKBMZGRZXWGWSAANUPIMIPWZBCNQVCPIMHEPQBQDUSOWJQJSMTCGBJNDBXIBYQCRIAKZPGCAHKBKEPLDTVEZEOAZFWYTQUAILJYSCOOTBZCFCGRBPMHQLQMVVKNKSDWGTGXIOXVRHLXACCYHLQUPETDVPFOZJTFNSYJR");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.predicate.assign("SERHYAWZUFBEAIECTOFPEORMIHVVSNVGXVKYTLSOJMMBKAGYKOYYHPTLXJTTVHCWHHNBMNREXIXQSTHQQNUJVLIXSZTOANJZPJQUFGSIMXJMWHBJGFELOKFUDLMSDOCGBLPATGWVNBSJUIKRRECYLDYGKTQZSHDCZHNUWFEZQGBYOZAAMWDPOFXRADNNPETKFIXCXMQRPRCDYPJDZVRWPZCFIBUJDL");
    tmp_tmp_tmp_msg_0_0_0.token.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.678969757174);
    msg.setSource(55367U);
    msg.setSourceEntity(4U);
    msg.setDestination(47342U);
    msg.setDestinationEntity(239U);
    msg.req_id = 14429U;
    msg.type = 191U;
    msg.max_size = 4829U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.696836003739;
    tmp_msg_0.base_lon = 0.13163357482;
    tmp_msg_0.base_time = 0.55316481762;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44725U;
    tmp_tmp_msg_0_0.destination = 22505U;
    tmp_tmp_msg_0_0.timeout = 0.328990331544;
    IMC::VehicleLinks tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.localname.assign("YOAQVREGEKISNRNRJVFNPMXHWUGPZZRABIEAAXZONACBMVSSMYSKOMIPCUJXQTUVAJWUPMKZBICXBUHWKHIPMGZDRSYDURYFLZKJNHIXLLQCTTWMWSKHDZTNUHVIPWOEEGJKAGJXUBWQTLVICKBQYAERLFPSHNIBMSYBLNY");
    IMC::Announce tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sys_name.assign("UTEFGYOIZOXDMEWWTTSRGWCRORFRRBQQBUIXFLAPLMSUYSPVKVCTHFHJGWFQBXCPRYHKRZAVVFUPDBDXKITNVFSVHGDDRVJGZMJQQGBWAONPQSNZHPAYWAHYLNBJOYFSMDZ");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sys_type = 83U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.owner = 48529U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.135134440109;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.393430019831;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.height = 0.327597443061;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.services.assign("RONLKAFTHTVXKZPXAOUYAOWICMNMBFUQNPQJYOJLYDADDRMUGSGRTEVELFJEDLRRCRSJGYPGSJHWFVBYZRQHOVIJSZKXHLHOKVTXBMDKWWBESJICEWAZWPHXWKZCIFAAXKRNLHZTNRSQMTUEBMIBPJNMCVEUDSFXKIJQFQXJNLDSGBTC");
    tmp_tmp_tmp_msg_0_0_0.links.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.876720331416);
    msg.setSource(11806U);
    msg.setSourceEntity(233U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(178U);
    msg.original_source = 15513U;
    msg.destination = 63663U;
    msg.timeout = 0.649326518864;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FISNVBAJDBTZUWKYGAFOBJJHMPDSEMLOUTDQAAUTBNLWTJWIQBJVDYUZIONXCRCHREBJMOZNQJHDBQKCFLFOCTMOMBVPXIVYQVGKZZOQYHUODHTOTPKWDLWEGMEGIYQYTGYFJPLXZPVDVGQNXLYRVERXYHSXRJ");
    tmp_msg_0.feature_type = 7U;
    tmp_msg_0.rgb_red = 163U;
    tmp_msg_0.rgb_green = 148U;
    tmp_msg_0.rgb_blue = 60U;
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
    msg.setTimeStamp(0.75532928627);
    msg.setSource(63976U);
    msg.setSourceEntity(247U);
    msg.setDestination(58107U);
    msg.setDestinationEntity(62U);
    msg.original_source = 3055U;
    msg.destination = 19256U;
    msg.timeout = 0.845099826341;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.811976328584;
    tmp_msg_0.speed = 0.892747397653;
    tmp_msg_0.turbulence = 0.161942411265;
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
    msg.setTimeStamp(0.0923008079579);
    msg.setSource(24748U);
    msg.setSourceEntity(241U);
    msg.setDestination(65237U);
    msg.setDestinationEntity(49U);
    msg.original_source = 43584U;
    msg.destination = 9186U;
    msg.timeout = 0.744531137532;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.460651851053;
    tmp_msg_0.y = 0.171356443143;
    tmp_msg_0.z = 0.464405673267;
    tmp_msg_0.phi = 0.0400416185238;
    tmp_msg_0.theta = 0.923271202965;
    tmp_msg_0.psi = 0.559710042048;
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
    msg.setTimeStamp(0.721776932342);
    msg.setSource(13334U);
    msg.setSourceEntity(219U);
    msg.setDestination(20055U);
    msg.setDestinationEntity(108U);
    msg.id = 147U;
    msg.range = 0.0950890207421;

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
    msg.setTimeStamp(0.225807586668);
    msg.setSource(5091U);
    msg.setSourceEntity(116U);
    msg.setDestination(3196U);
    msg.setDestinationEntity(58U);
    msg.id = 184U;
    msg.range = 0.25267469463;

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
    msg.setTimeStamp(0.100013706664);
    msg.setSource(38709U);
    msg.setSourceEntity(237U);
    msg.setDestination(59972U);
    msg.setDestinationEntity(156U);
    msg.id = 20U;
    msg.range = 0.60658967604;

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
    msg.setTimeStamp(0.0859504203333);
    msg.setSource(13771U);
    msg.setSourceEntity(205U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("RAYQPWDKFFASTRQXWBLSJCSLDAIJPMCRU");
    msg.lat = 0.783861777834;
    msg.lon = 0.813991048644;
    msg.depth = 0.317766805591;
    msg.query_channel = 38U;
    msg.reply_channel = 234U;
    msg.transponder_delay = 28U;

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
    msg.setTimeStamp(0.556892014281);
    msg.setSource(60833U);
    msg.setSourceEntity(108U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(201U);
    msg.beacon.assign("BFVMQGKMTOAIVUXQNARSMZSMPJFYFTQFUDNGCXYHTSGVXOBWHDNITFSTMNYWIDOCZUBKDKBDPAFMRJLEHEJWNUFKGUJLHPEWTJPLYGUZGPBRPBGZLQSFYYCQRJRACORHHGORIADOBJWFYNHLPEIAVRZDOURWKEZFPDAVCLGNSESJHXMS");
    msg.lat = 0.764729697425;
    msg.lon = 0.203429124755;
    msg.depth = 0.294522642701;
    msg.query_channel = 181U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 153U;

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
    msg.setTimeStamp(0.00374681089936);
    msg.setSource(33968U);
    msg.setSourceEntity(142U);
    msg.setDestination(39051U);
    msg.setDestinationEntity(126U);
    msg.beacon.assign("TNBOHRYHLKDUXZKEXCHZHRVLGEIHVHRNAURUUASMTSKDOZMAIJSCFLQECGFYPCDGMKHMBTDIFQBBQFNER");
    msg.lat = 0.2964375096;
    msg.lon = 0.838442482534;
    msg.depth = 0.0929849755516;
    msg.query_channel = 200U;
    msg.reply_channel = 244U;
    msg.transponder_delay = 42U;

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
    msg.setTimeStamp(0.789208575137);
    msg.setSource(17489U);
    msg.setSourceEntity(13U);
    msg.setDestination(11718U);
    msg.setDestinationEntity(8U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.477914097986);
    msg.setSource(31431U);
    msg.setSourceEntity(136U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(67U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.243170715917);
    msg.setSource(44698U);
    msg.setSourceEntity(142U);
    msg.setDestination(22133U);
    msg.setDestinationEntity(209U);
    msg.op = 140U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HYOTCRKKCDJAGKFXJZXXPBGAWHFOQXNFVOETUYNWOVPMSLGZGZDBUDTKRSBUXPYFLHZBUSBWMIBOXCRLLQHTWQZNNCZ");
    tmp_msg_0.lat = 0.573136557802;
    tmp_msg_0.lon = 0.400296421308;
    tmp_msg_0.depth = 0.96633114973;
    tmp_msg_0.query_channel = 175U;
    tmp_msg_0.reply_channel = 205U;
    tmp_msg_0.transponder_delay = 128U;
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
    msg.setTimeStamp(0.572524406662);
    msg.setSource(53274U);
    msg.setSourceEntity(102U);
    msg.setDestination(2659U);
    msg.setDestinationEntity(151U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 147U;
    tmp_msg_0.time_remain = 0.70578941325;
    tmp_msg_0.sched_time = 0.521520475569;
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
    msg.setTimeStamp(0.630475971716);
    msg.setSource(236U);
    msg.setSourceEntity(37U);
    msg.setDestination(15527U);
    msg.setDestinationEntity(129U);
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 15915U;
    tmp_msg_0.priority = 78;
    tmp_msg_0.x = 13444;
    tmp_msg_0.y = 4230;
    tmp_msg_0.z = 3980;
    tmp_msg_0.t = -11424;
    IMC::TransportBindings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.consumer.assign("YNYQPAJTUCMIJFNSDWDXICMPLKELJQTZTELGOSGFSXTAZGEJWHRXKEYLTUZJMSNSTGOUHYPKICMRVQWMQHIVFIKSNYBXTAUJTEMKRFRLYVGLHADGHJRBLRKSHUDACVFNXABBNCWTYEJMYEUPVXGDFEIAKOOFV");
    tmp_tmp_msg_0_0.message_id = 17344U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.460022351433);
    msg.setSource(44114U);
    msg.setSourceEntity(59U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(78U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 18162U;
    tmp_msg_0.lat = 0.664963525184;
    tmp_msg_0.lon = 0.634923804786;
    tmp_msg_0.z = 0.0629290838136;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.speed = 0.69329382946;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.bearing = 0.745075882631;
    tmp_msg_0.cross_angle = 0.0676070660936;
    tmp_msg_0.width = 0.519001016919;
    tmp_msg_0.length = 0.674115309955;
    tmp_msg_0.hstep = 0.174291456072;
    tmp_msg_0.coff = 56U;
    tmp_msg_0.alternation = 67U;
    tmp_msg_0.flags = 168U;
    tmp_msg_0.custom.assign("VEIJDOPTZMZAKONQXTUZCYPOWJRXWLNDLJYLWFPBRPVWSERBRCRMJQQZZTQMKMFGNIWTROHOQJNTBUEFJSMTHGYBCYRCBPDYNVIMHSSZVAXIELYQDMWFWKSOIKDPUUGUKHVBNOBIXEOXYEBXXACVSPZDYEJBGFVEHICAYQLMFKJULGSKRGDVOPYAJMFHUELQDHAWDCHNGSTUKAWKJGSWXXOCATRMZU");
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
    msg.setTimeStamp(0.651475034205);
    msg.setSource(27765U);
    msg.setSourceEntity(121U);
    msg.setDestination(43595U);
    msg.setDestinationEntity(43U);
    msg.op = 11U;
    msg.system.assign("PVFIDIQYYFMTNROXQXVHBSLPOCMLVXOCQABGDVRMTWDO");
    msg.range = 0.765894566014;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.359082197205;
    tmp_msg_0.y = 0.81243931794;
    tmp_msg_0.z = 0.67528738924;
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
    msg.setTimeStamp(0.781501047426);
    msg.setSource(41592U);
    msg.setSourceEntity(176U);
    msg.setDestination(38188U);
    msg.setDestinationEntity(152U);
    msg.op = 206U;
    msg.system.assign("SWQITNBOOWGKQKDRPQDODNGOGHGAJPGJEIUJZUYRFSYVXPKONQEALZFVVSVMFZGNAPJQTESVGAOYYQDXIPMTNULCIUICESZNRYHXPWTTEEVSDEJRSMXFXWMXFZSVQCDUITLJMBBELBEJKDLKXYBAKZJHGCDDCXUWOWKMGTYVNKMNXBKEQWLNQIAPIVHPFBWZVZMR");
    msg.range = 0.259040940404;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("SWIELFTQTUWYAKDVLMGFCUAQAUODBQVDCEKCAMSBEOJRYGYILYFNSVCMXIQRCBSFTITGHEAXXXIDOOLNYAWGMVWCYFAPTPZDBBPGCHMOTNHFKHZKTFEYHPXXWBQRJGPLWJHRRGMIZKLAMNZBKKCEZUIVLRJQGVXFZKGCHHVUYZUPXL");
    tmp_msg_0.plan_size = 9115U;
    tmp_msg_0.change_time = 0.282967005501;
    tmp_msg_0.change_sid = 53678U;
    tmp_msg_0.change_sname.assign("CWSZGLLCKBDQZLKVBAEDIEDBSBXSHMCEGKCHMZSHAQJXKGPRZBHVUPPDXGTFTMDLLYEIIOUXZNJRFYNOGBPGVQRCUNYHUKBSDNEUUIKTDEFMWOYYPFIQFGZVNRSQWSOWPQRPKRSY");
    const char tmp_tmp_msg_0_0[] = {115, -123, -114, 9, 27, 19, 50, -12, 38, 61, 68, 59, -83, -27, -65, 103, -87};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.297453635237);
    msg.setSource(53030U);
    msg.setSourceEntity(67U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(223U);
    msg.op = 89U;
    msg.system.assign("MWSDHXAVRFZEHCASQMDRLXOGKYWTBMPWBVSJPSKHGXICGCFOGUPOWTIMWODYUEANLQIFUBCHAVLUDPLBFKDYIAJFMJKOKNBZ");
    msg.range = 0.649474564235;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 134167076U;
    tmp_msg_0.start_lat = 0.0745064437397;
    tmp_msg_0.start_lon = 0.455674748735;
    tmp_msg_0.start_z = 0.591338021855;
    tmp_msg_0.start_z_units = 254U;
    tmp_msg_0.end_lat = 0.361890299527;
    tmp_msg_0.end_lon = 0.695801610087;
    tmp_msg_0.end_z = 0.557140985668;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.speed = 0.58643105278;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.lradius = 0.687461211687;
    tmp_msg_0.flags = 228U;
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
    msg.setTimeStamp(0.67612994015);
    msg.setSource(32233U);
    msg.setSourceEntity(197U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.691800111079);
    msg.setSource(56769U);
    msg.setSourceEntity(35U);
    msg.setDestination(49738U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.95281871161);
    msg.setSource(23861U);
    msg.setSourceEntity(220U);
    msg.setDestination(57336U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.438909261425);
    msg.setSource(8328U);
    msg.setSourceEntity(103U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(2U);
    msg.list.assign("QGIENFKQJIFHEDPKXJYDATXPWKZDEGLWVNNZPHUSOKUQEKWBYUHGCDPATAEFNQZHTCKLFLQLCHOMRJRWTRRWWMGDRGPQZTCMSUWQUQYLXRIHVZBTXWRJOPRUPSKXPSNCXJSVBBQSYXJDIGSEQUKIRZUHLXCXHWEAYDGEFHMCBNTICGVBDVVJYLWGSYNLTYIOMEIOTVYS");

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
    msg.setTimeStamp(0.015921251771);
    msg.setSource(44634U);
    msg.setSourceEntity(0U);
    msg.setDestination(47592U);
    msg.setDestinationEntity(225U);
    msg.list.assign("QUSEQPSCOZMZUNDYDFLDRFGGSEGPHJUZFQKDIUHTOUCPKKZTSMBWZIISLXNCUQVGTOFTYBMMEOUZGOJLGGVSHNYGJHYKOLORHAXDVEHBEVWVKXVVBTAJSMLWBABXDIKLAZEVNJOWKDCKAIBVRIYUCRYIEYBYILFDYSHFNTMQZXYCISQNFEACKAFMBRWCOXHDTCPWRRQFWGQLWJZPPGVQJTUXKJWTAMPEDPXBNMAXSUJXWZIQRRHENRHCPLA");

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
    msg.setTimeStamp(0.118734144003);
    msg.setSource(44617U);
    msg.setSourceEntity(195U);
    msg.setDestination(11602U);
    msg.setDestinationEntity(88U);
    msg.list.assign("TVXHDOADSTWUMQQJIJLEHFFSOSGQFGECAOHSQHYCDUXZIXPSDYWEHRJBKDEYZCUNZKLCMKWQCQEFQFZGNLVXRMUETQTCALVOBXSGVUHRUJBULYLORECRUAILNWIBTDCYIPWTXDMYSIMYZKSPXDTFOKHWIPKMYIPIPANENVGKBVFSDPZEHMWROYPVAMFZTNJXZSZTBCAXNZAPOWKOGNQJGUWK");

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
    msg.setTimeStamp(0.704824131384);
    msg.setSource(15206U);
    msg.setSourceEntity(36U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(132U);
    msg.peer.assign("LHMSFZCSFWXLFUDTUQLIHECKOZZMZXAZUJLECFMBGWRGHHEEYN");
    msg.rssi = 0.648495833534;
    msg.integrity = 39467U;

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
    msg.setTimeStamp(0.66403700972);
    msg.setSource(61191U);
    msg.setSourceEntity(247U);
    msg.setDestination(14982U);
    msg.setDestinationEntity(150U);
    msg.peer.assign("QJBZGLOVPT");
    msg.rssi = 0.0893364920096;
    msg.integrity = 53635U;

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
    msg.setTimeStamp(0.526338031167);
    msg.setSource(50781U);
    msg.setSourceEntity(242U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(25U);
    msg.peer.assign("DKWPJHGBNROUNBXASXOTBEHVSHIJQUSORTQGUQCN");
    msg.rssi = 0.795456135643;
    msg.integrity = 37338U;

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
    msg.setTimeStamp(0.314841047489);
    msg.setSource(42160U);
    msg.setSourceEntity(30U);
    msg.setDestination(34231U);
    msg.setDestinationEntity(110U);
    msg.value = -32277;

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
    msg.setTimeStamp(0.391831420673);
    msg.setSource(38762U);
    msg.setSourceEntity(198U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(106U);
    msg.value = -30014;

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
    msg.setTimeStamp(0.16290741157);
    msg.setSource(30842U);
    msg.setSourceEntity(51U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(60U);
    msg.value = 11471;

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
    msg.setTimeStamp(0.681453914916);
    msg.setSource(785U);
    msg.setSourceEntity(186U);
    msg.setDestination(50701U);
    msg.setDestinationEntity(56U);
    msg.value = 0.907296260295;

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
    msg.setTimeStamp(0.685366556305);
    msg.setSource(11695U);
    msg.setSourceEntity(86U);
    msg.setDestination(484U);
    msg.setDestinationEntity(191U);
    msg.value = 0.0266378204025;

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
    msg.setTimeStamp(0.657024788228);
    msg.setSource(32201U);
    msg.setSourceEntity(209U);
    msg.setDestination(11261U);
    msg.setDestinationEntity(174U);
    msg.value = 0.74170017297;

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
    msg.setTimeStamp(0.0912458633452);
    msg.setSource(12343U);
    msg.setSourceEntity(213U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(127U);
    msg.value = 0.416323149887;

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
    msg.setTimeStamp(0.533328792719);
    msg.setSource(48102U);
    msg.setSourceEntity(214U);
    msg.setDestination(62554U);
    msg.setDestinationEntity(22U);
    msg.value = 0.903452178165;

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
    msg.setTimeStamp(0.030257948685);
    msg.setSource(17709U);
    msg.setSourceEntity(157U);
    msg.setDestination(17943U);
    msg.setDestinationEntity(80U);
    msg.value = 0.38470154574;

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
    msg.setTimeStamp(0.412253831551);
    msg.setSource(6876U);
    msg.setSourceEntity(137U);
    msg.setDestination(27446U);
    msg.setDestinationEntity(33U);
    msg.validity = 49929U;
    msg.type = 56U;
    msg.utc_year = 10630U;
    msg.utc_month = 155U;
    msg.utc_day = 253U;
    msg.utc_time = 0.635128596467;
    msg.lat = 0.64877455414;
    msg.lon = 0.792031616689;
    msg.height = 0.438940523673;
    msg.satellites = 240U;
    msg.cog = 0.741546189753;
    msg.sog = 0.53663707189;
    msg.hdop = 0.44267476195;
    msg.vdop = 0.028224154675;
    msg.hacc = 0.126667311584;
    msg.vacc = 0.67913716566;

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
    msg.setTimeStamp(0.821156553239);
    msg.setSource(49082U);
    msg.setSourceEntity(5U);
    msg.setDestination(17480U);
    msg.setDestinationEntity(163U);
    msg.validity = 30247U;
    msg.type = 172U;
    msg.utc_year = 41545U;
    msg.utc_month = 103U;
    msg.utc_day = 244U;
    msg.utc_time = 0.538723459384;
    msg.lat = 0.29665482631;
    msg.lon = 0.180970028984;
    msg.height = 0.55360089108;
    msg.satellites = 148U;
    msg.cog = 0.811804672033;
    msg.sog = 0.602956365181;
    msg.hdop = 0.852484895074;
    msg.vdop = 0.4140987102;
    msg.hacc = 0.0830520112023;
    msg.vacc = 0.385515360804;

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
    msg.setTimeStamp(0.741919154506);
    msg.setSource(51036U);
    msg.setSourceEntity(133U);
    msg.setDestination(25453U);
    msg.setDestinationEntity(222U);
    msg.validity = 31161U;
    msg.type = 171U;
    msg.utc_year = 26721U;
    msg.utc_month = 31U;
    msg.utc_day = 29U;
    msg.utc_time = 0.904902494928;
    msg.lat = 0.873166081863;
    msg.lon = 0.991888975503;
    msg.height = 0.92896047133;
    msg.satellites = 135U;
    msg.cog = 0.0857069906151;
    msg.sog = 0.294057778956;
    msg.hdop = 0.759602954798;
    msg.vdop = 0.688360270685;
    msg.hacc = 0.447643903866;
    msg.vacc = 0.927338553085;

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
    msg.setTimeStamp(0.840152201214);
    msg.setSource(49573U);
    msg.setSourceEntity(215U);
    msg.setDestination(32428U);
    msg.setDestinationEntity(46U);
    msg.time = 0.338812716107;
    msg.phi = 0.0117093842582;
    msg.theta = 0.262171953925;
    msg.psi = 0.688821691036;
    msg.psi_magnetic = 0.743247762563;

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
    msg.setTimeStamp(0.378284808549);
    msg.setSource(39148U);
    msg.setSourceEntity(227U);
    msg.setDestination(24107U);
    msg.setDestinationEntity(112U);
    msg.time = 0.19589475379;
    msg.phi = 0.622760260776;
    msg.theta = 0.663498248973;
    msg.psi = 0.919795589959;
    msg.psi_magnetic = 0.769073708856;

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
    msg.setTimeStamp(0.162232790146);
    msg.setSource(26606U);
    msg.setSourceEntity(102U);
    msg.setDestination(9045U);
    msg.setDestinationEntity(78U);
    msg.time = 0.0924165537209;
    msg.phi = 0.409662767799;
    msg.theta = 0.598639107079;
    msg.psi = 0.0413192751163;
    msg.psi_magnetic = 0.445591046077;

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
    msg.setTimeStamp(0.533976731931);
    msg.setSource(36198U);
    msg.setSourceEntity(110U);
    msg.setDestination(35506U);
    msg.setDestinationEntity(27U);
    msg.time = 0.925519611615;
    msg.x = 0.504855322267;
    msg.y = 0.938764639384;
    msg.z = 0.0854230382546;
    msg.timestep = 0.289763074134;

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
    msg.setTimeStamp(0.167594228494);
    msg.setSource(35427U);
    msg.setSourceEntity(50U);
    msg.setDestination(45037U);
    msg.setDestinationEntity(228U);
    msg.time = 0.443610786385;
    msg.x = 0.0542858604749;
    msg.y = 0.278968460185;
    msg.z = 0.844901916429;
    msg.timestep = 0.652208745089;

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
    msg.setTimeStamp(0.550580953268);
    msg.setSource(54905U);
    msg.setSourceEntity(145U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(89U);
    msg.time = 0.640475846528;
    msg.x = 0.77480506492;
    msg.y = 0.81426627865;
    msg.z = 0.227961231575;
    msg.timestep = 0.999471086797;

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
    msg.setTimeStamp(0.824663439136);
    msg.setSource(60853U);
    msg.setSourceEntity(69U);
    msg.setDestination(17497U);
    msg.setDestinationEntity(11U);
    msg.time = 0.15041550585;
    msg.x = 0.630735788368;
    msg.y = 0.553976613411;
    msg.z = 0.192270308378;

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
    msg.setTimeStamp(0.832647515198);
    msg.setSource(45421U);
    msg.setSourceEntity(58U);
    msg.setDestination(8429U);
    msg.setDestinationEntity(113U);
    msg.time = 0.912757325725;
    msg.x = 0.726519321693;
    msg.y = 0.122041542821;
    msg.z = 0.618477514926;

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
    msg.setTimeStamp(0.427380966568);
    msg.setSource(47199U);
    msg.setSourceEntity(58U);
    msg.setDestination(39834U);
    msg.setDestinationEntity(156U);
    msg.time = 0.184148645095;
    msg.x = 0.176438936516;
    msg.y = 0.919497258848;
    msg.z = 0.0939886660166;

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
    msg.setTimeStamp(0.723389384635);
    msg.setSource(20443U);
    msg.setSourceEntity(136U);
    msg.setDestination(65511U);
    msg.setDestinationEntity(129U);
    msg.time = 0.110955018904;
    msg.x = 0.581427011447;
    msg.y = 0.698367113194;
    msg.z = 0.817715463405;

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
    msg.setTimeStamp(0.806150393482);
    msg.setSource(36885U);
    msg.setSourceEntity(194U);
    msg.setDestination(17608U);
    msg.setDestinationEntity(251U);
    msg.time = 0.12759309991;
    msg.x = 0.797548935485;
    msg.y = 0.326141853817;
    msg.z = 0.921639534255;

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
    msg.setTimeStamp(0.39744179738);
    msg.setSource(57030U);
    msg.setSourceEntity(23U);
    msg.setDestination(28387U);
    msg.setDestinationEntity(97U);
    msg.time = 0.282161406044;
    msg.x = 0.472343701762;
    msg.y = 0.870597004251;
    msg.z = 0.147895568991;

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
    msg.setTimeStamp(0.75716439222);
    msg.setSource(24116U);
    msg.setSourceEntity(207U);
    msg.setDestination(16674U);
    msg.setDestinationEntity(81U);
    msg.time = 0.0284601872208;
    msg.x = 0.444198586939;
    msg.y = 0.158234990749;
    msg.z = 0.772721326126;

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
    msg.setTimeStamp(0.415719021238);
    msg.setSource(24859U);
    msg.setSourceEntity(78U);
    msg.setDestination(37397U);
    msg.setDestinationEntity(68U);
    msg.time = 0.313235859803;
    msg.x = 0.708555266814;
    msg.y = 0.533783036828;
    msg.z = 0.260489551562;

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
    msg.setTimeStamp(0.582084551954);
    msg.setSource(2527U);
    msg.setSourceEntity(168U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(241U);
    msg.time = 0.452726731102;
    msg.x = 0.361226693742;
    msg.y = 0.0492830386898;
    msg.z = 0.32151644916;

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
    msg.setTimeStamp(0.18409206167);
    msg.setSource(8481U);
    msg.setSourceEntity(146U);
    msg.setDestination(1205U);
    msg.setDestinationEntity(84U);
    msg.validity = 82U;
    msg.x = 0.0598467699747;
    msg.y = 0.872725029449;
    msg.z = 0.381623352493;

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
    msg.setTimeStamp(0.551411501575);
    msg.setSource(6001U);
    msg.setSourceEntity(124U);
    msg.setDestination(23860U);
    msg.setDestinationEntity(65U);
    msg.validity = 232U;
    msg.x = 0.967159883349;
    msg.y = 0.648024927003;
    msg.z = 0.889770504063;

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
    msg.setTimeStamp(0.194262001363);
    msg.setSource(45759U);
    msg.setSourceEntity(168U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(180U);
    msg.validity = 91U;
    msg.x = 0.715413760618;
    msg.y = 0.701504862858;
    msg.z = 0.0149043710951;

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
    msg.setTimeStamp(0.0197513198697);
    msg.setSource(30038U);
    msg.setSourceEntity(2U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(96U);
    msg.validity = 88U;
    msg.x = 0.604744958393;
    msg.y = 0.186699003046;
    msg.z = 0.75471720219;

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
    msg.setTimeStamp(0.829521662592);
    msg.setSource(12770U);
    msg.setSourceEntity(173U);
    msg.setDestination(19801U);
    msg.setDestinationEntity(62U);
    msg.validity = 57U;
    msg.x = 0.710156797972;
    msg.y = 0.0638478431776;
    msg.z = 0.731297939083;

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
    msg.setTimeStamp(0.0789151539896);
    msg.setSource(40144U);
    msg.setSourceEntity(71U);
    msg.setDestination(35747U);
    msg.setDestinationEntity(8U);
    msg.validity = 234U;
    msg.x = 0.516545110502;
    msg.y = 0.267893954713;
    msg.z = 0.519087812807;

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
    msg.setTimeStamp(0.753961960527);
    msg.setSource(43481U);
    msg.setSourceEntity(109U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(238U);
    msg.time = 0.115747394304;
    msg.x = 0.645852026764;
    msg.y = 0.833435878764;
    msg.z = 0.78239381896;

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
    msg.setTimeStamp(0.722462291381);
    msg.setSource(49684U);
    msg.setSourceEntity(85U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(146U);
    msg.time = 0.776777778085;
    msg.x = 0.117759704395;
    msg.y = 0.185488195774;
    msg.z = 0.404215122342;

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
    msg.setTimeStamp(0.429862472424);
    msg.setSource(19483U);
    msg.setSourceEntity(235U);
    msg.setDestination(53807U);
    msg.setDestinationEntity(250U);
    msg.time = 0.712741410355;
    msg.x = 0.563788139703;
    msg.y = 0.929585666648;
    msg.z = 0.906456132306;

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
    msg.setTimeStamp(0.0532461672116);
    msg.setSource(9918U);
    msg.setSourceEntity(13U);
    msg.setDestination(57170U);
    msg.setDestinationEntity(155U);
    msg.validity = 28U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.229615134619;
    tmp_msg_0.beam_height = 0.0269409367562;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.50048936507;

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
    msg.setTimeStamp(0.385980860689);
    msg.setSource(23191U);
    msg.setSourceEntity(170U);
    msg.setDestination(54143U);
    msg.setDestinationEntity(165U);
    msg.validity = 186U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.550135718265;
    tmp_msg_0.beam_height = 0.103814649617;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.00664983432419;

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
    msg.setTimeStamp(0.777634402329);
    msg.setSource(63812U);
    msg.setSourceEntity(102U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(232U);
    msg.validity = 175U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.137977893261;
    tmp_msg_0.y = 0.480134658348;
    tmp_msg_0.z = 0.188208493398;
    tmp_msg_0.phi = 0.954540421353;
    tmp_msg_0.theta = 0.242570163545;
    tmp_msg_0.psi = 0.742969566222;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.699423630278;

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
    msg.setTimeStamp(0.952337384438);
    msg.setSource(57279U);
    msg.setSourceEntity(250U);
    msg.setDestination(21556U);
    msg.setDestinationEntity(152U);
    msg.value = 0.941900918672;

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
    msg.setTimeStamp(0.63881388331);
    msg.setSource(33679U);
    msg.setSourceEntity(249U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(192U);
    msg.value = 0.359688760426;

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
    msg.setTimeStamp(0.617074348619);
    msg.setSource(50615U);
    msg.setSourceEntity(244U);
    msg.setDestination(9423U);
    msg.setDestinationEntity(113U);
    msg.value = 0.640290819376;

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
    msg.setTimeStamp(0.000877822399145);
    msg.setSource(14547U);
    msg.setSourceEntity(32U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(227U);
    msg.value = 0.133086622426;

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
    msg.setTimeStamp(0.764182517928);
    msg.setSource(31103U);
    msg.setSourceEntity(222U);
    msg.setDestination(59750U);
    msg.setDestinationEntity(171U);
    msg.value = 0.971747653302;

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
    msg.setTimeStamp(0.739902820796);
    msg.setSource(30637U);
    msg.setSourceEntity(25U);
    msg.setDestination(33940U);
    msg.setDestinationEntity(245U);
    msg.value = 0.99300255803;

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
    msg.setTimeStamp(0.933927364252);
    msg.setSource(55808U);
    msg.setSourceEntity(10U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(73U);
    msg.value = 0.949361698068;

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
    msg.setTimeStamp(0.268774083245);
    msg.setSource(22583U);
    msg.setSourceEntity(243U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(175U);
    msg.value = 0.518865915948;

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
    msg.setTimeStamp(0.691607123594);
    msg.setSource(45416U);
    msg.setSourceEntity(124U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(230U);
    msg.value = 0.933590002451;

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
    msg.setTimeStamp(0.676499871988);
    msg.setSource(12090U);
    msg.setSourceEntity(78U);
    msg.setDestination(42958U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0616495282675;

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
    msg.setTimeStamp(0.682673599545);
    msg.setSource(49548U);
    msg.setSourceEntity(24U);
    msg.setDestination(56062U);
    msg.setDestinationEntity(211U);
    msg.value = 0.415526446008;

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
    msg.setTimeStamp(0.191975180216);
    msg.setSource(2941U);
    msg.setSourceEntity(93U);
    msg.setDestination(751U);
    msg.setDestinationEntity(244U);
    msg.value = 0.220970248563;

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
    msg.setTimeStamp(0.633961855774);
    msg.setSource(3865U);
    msg.setSourceEntity(11U);
    msg.setDestination(30702U);
    msg.setDestinationEntity(120U);
    msg.value = 0.887099112573;

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
    msg.setTimeStamp(0.0272398760443);
    msg.setSource(41509U);
    msg.setSourceEntity(180U);
    msg.setDestination(54752U);
    msg.setDestinationEntity(14U);
    msg.value = 0.35903006101;

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
    msg.setTimeStamp(0.90068972922);
    msg.setSource(53726U);
    msg.setSourceEntity(88U);
    msg.setDestination(45547U);
    msg.setDestinationEntity(233U);
    msg.value = 0.0130995958573;

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
    msg.setTimeStamp(0.88216654086);
    msg.setSource(51751U);
    msg.setSourceEntity(215U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(165U);
    msg.value = 0.520268191356;

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
    msg.setTimeStamp(0.512117452292);
    msg.setSource(30471U);
    msg.setSourceEntity(223U);
    msg.setDestination(15945U);
    msg.setDestinationEntity(188U);
    msg.value = 0.117415403587;

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
    msg.setTimeStamp(0.0324792155845);
    msg.setSource(42000U);
    msg.setSourceEntity(28U);
    msg.setDestination(22874U);
    msg.setDestinationEntity(66U);
    msg.value = 0.615138780179;

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
    msg.setTimeStamp(0.265031186567);
    msg.setSource(26756U);
    msg.setSourceEntity(154U);
    msg.setDestination(35482U);
    msg.setDestinationEntity(90U);
    msg.value = 0.831443477653;

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
    msg.setTimeStamp(0.974180265455);
    msg.setSource(12456U);
    msg.setSourceEntity(183U);
    msg.setDestination(59449U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0465061382077;

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
    msg.setTimeStamp(0.0626328853297);
    msg.setSource(25102U);
    msg.setSourceEntity(105U);
    msg.setDestination(49610U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0346447045119;

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
    msg.setTimeStamp(0.444953968624);
    msg.setSource(29893U);
    msg.setSourceEntity(60U);
    msg.setDestination(48157U);
    msg.setDestinationEntity(222U);
    msg.value = 0.307851498485;

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
    msg.setTimeStamp(0.168462004108);
    msg.setSource(49048U);
    msg.setSourceEntity(164U);
    msg.setDestination(41927U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0228920883193;

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
    msg.setTimeStamp(0.937315850491);
    msg.setSource(27410U);
    msg.setSourceEntity(10U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(122U);
    msg.value = 0.509338977887;

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
    msg.setTimeStamp(0.902675380927);
    msg.setSource(11564U);
    msg.setSourceEntity(142U);
    msg.setDestination(29258U);
    msg.setDestinationEntity(198U);
    msg.direction = 0.325676393947;
    msg.speed = 0.130905700486;
    msg.turbulence = 0.312403236201;

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
    msg.setTimeStamp(0.69594539766);
    msg.setSource(38255U);
    msg.setSourceEntity(187U);
    msg.setDestination(62968U);
    msg.setDestinationEntity(241U);
    msg.direction = 0.397005776972;
    msg.speed = 0.123820647144;
    msg.turbulence = 0.315433880406;

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
    msg.setTimeStamp(0.602101164959);
    msg.setSource(40823U);
    msg.setSourceEntity(243U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(117U);
    msg.direction = 0.862722075767;
    msg.speed = 0.204267935401;
    msg.turbulence = 0.224954792177;

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
    msg.setTimeStamp(0.652447841141);
    msg.setSource(7565U);
    msg.setSourceEntity(108U);
    msg.setDestination(14219U);
    msg.setDestinationEntity(169U);
    msg.value = 0.89934793605;

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
    msg.setTimeStamp(0.217861149267);
    msg.setSource(11673U);
    msg.setSourceEntity(123U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0146328738118;

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
    msg.setTimeStamp(0.501510797464);
    msg.setSource(64998U);
    msg.setSourceEntity(172U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0449544694063;

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
    msg.setTimeStamp(0.481851081203);
    msg.setSource(33756U);
    msg.setSourceEntity(46U);
    msg.setDestination(918U);
    msg.setDestinationEntity(49U);
    msg.value.assign("EBXFWCLQUWHMXTBSCSXUGJQTOAYNYQXHDNQCXUXIWUKDZNULBZFEVQCIWBZYYNWCHEMLRPIJROJHXNKGFRRGUA");

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
    msg.setTimeStamp(0.628490420182);
    msg.setSource(58376U);
    msg.setSourceEntity(49U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(37U);
    msg.value.assign("VQCOLXYSUZPJTPGFEHNPRUMIBGLRUPX");

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
    msg.setTimeStamp(0.637714916513);
    msg.setSource(33840U);
    msg.setSourceEntity(136U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(100U);
    msg.value.assign("GNBQPDFLLWOQTAHKKIYBFQWUUMZQHNFQQJUHJUMNCQXSMOVAQIWVWTTHYOHPYLLNCPVCATNKGPKPVYEJKLBAFYRSZUSHRMUCMRSRWYDOSSXBZTREGPKOMLJABDGXVEOJLUHZMWEVMUPZRAELDFXGWNEAREIGIZOGDXOSGQXEIFRJWJZCAITYXBBTSMENYTDZOBXJ");

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
    msg.setTimeStamp(0.952557436288);
    msg.setSource(16980U);
    msg.setSourceEntity(17U);
    msg.setDestination(19535U);
    msg.setDestinationEntity(142U);
    const char tmp_msg_0[] = {-99, -22, -6, 122, -118, -6, -104, 76, -113, 50, -57, 12, -7, -109, -96, -52, 58, 86, -17, 94, -77, -69, 103, -113, -56, -121, 36, 115, -65, 15, -54, 42, 63, 76, 54, 9, 112, 40, -17, -68, -77, -37, 49, -125, -114, -29, -116, 21, 74, -15, -82, -3, -125, -14, -39, -61, 41, 100, -28, 58, 115, 31, 63, -40, -10, 26, 98, -22, -61, -78, -104, 116, -121, -29, 78, 48, -65, 108, 35, 117, 45, -89, -113, -21, 30, -120, -80, -69, -108, 118, 62, -21, -31, 90, 58, -96, -14, -40, -113, -2, 108, -67, 18, 10, 11, -74, -100, 55, -51, 16, 106, -119, 120, -124, 75, 118, -66, -53, 67, 34, 79, -128, -18, -27, 116, -74, -91, 107, -27, 17, -78, 91, -94, 81, 98, -16, 8, -48, 113, -6, 35, 94, 19, -14, -30, 91, -14, 115, -127, -18, 103, 96, -74, -70};
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
    msg.setTimeStamp(0.75498630626);
    msg.setSource(6812U);
    msg.setSourceEntity(179U);
    msg.setDestination(62188U);
    msg.setDestinationEntity(224U);
    const char tmp_msg_0[] = {-46, -2, 1, -45, 3, 1, -4, 23, -27, 97, -82, -65, 68, -21, -28, 105, 87, -128, -11, -45, 126, 47, -13, 93, -44, -83, 74, 36, 103, 15, 78, 39, -108, 65, 79, 11, -70, -92, 83, -29, 85, 120, 86, -44, 33, -45, -54, 51, 62, -25, 6, -12, 11, -32, -73, 78, 35, 24, -65, 1, 118, -70, -26, 74, -3, 47, 79, 39, 54, -38, -23, -74, -88, -121, -123, -62, -99, -64, 4, -50, 67, 34, -96, 126, 66, -13, 48, -28, -125, -2, -101, -2, 57, 42, -58, -78, -113, -81, 47, -19, 11, -37, -39, 38, 45, 68, -20, -19, 25, -68, 22, 92, 91, 11, -75, 53, 8, -105, 25, 94, -115, -69, -25, -40, 50, 75, -16, 36, -126, 39, 87, -38, -109, 125, 40, -106, 82, -51, -84, 60, 123, 98, 84, 30, 21, 114, 10, -90, 49, 3, 22, -31, -116, 34, -57, 25, -97, -40, 94, -51, 79, -18, 43, -80, -70, 118, 33, 19, -29, 13, -39, 26, 2, -94, 91, -13, -108, -5, -2, 16, 26, 39, -124, -40, -44, 33, -84, 87, 112, -91, -86, -26, 13, -79, 21, -25, -109, -99, 88, 12, -98, -102, 24, -122, -12, -100, -110, 59, 102, 15};
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
    msg.setTimeStamp(0.734228587667);
    msg.setSource(29401U);
    msg.setSourceEntity(106U);
    msg.setDestination(26693U);
    msg.setDestinationEntity(92U);
    const char tmp_msg_0[] = {31, -98, -57, -67, -74, -113, 8, -94, -43, -111, -14, -51, -78, -11, -125, -24, -88, -84, -11, -66, -37, -62, -127, 35, 43, 8, 121, 60, 111, 101, -8, -41, 102, -25, -52, -48, 36, 7, -97, 50, 44, 87, -49, 104, -24, -106, 116, 104, 81, 17, -24, -40, 62, 51, -67, 81, -62, 20, -18, -74, -109, -122, -30, -95, -84, 122, -60, 77, -121, 25, -128, 35, 1, 52, 23, 16, 89, -57, 63, -65, 80, -2, 15, 10, 125, 18, -119, 123, 52, -115, 94, -80, 17, -123, 123, -122, -101, 100, 59, 55, -1, -116, -123, -105, 8, 123, 109, -123, 93, 4, 26, -120, 88, 111, -120, -46, 118, -35, -48, 78, -82, -62};
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
    msg.setTimeStamp(0.85733745815);
    msg.setSource(57573U);
    msg.setSourceEntity(191U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(179U);
    msg.type = 72U;
    msg.frequency = 3267795324U;
    msg.min_range = 1765U;
    msg.max_range = 42776U;
    msg.bits_per_point = 193U;
    msg.scale_factor = 0.189333164433;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.300370929149;
    tmp_msg_0.beam_height = 0.216253784763;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {124, 104, -109, 83, -74, -29, -44, 119, -123, 124, 30, 3, 106, -14, -15, -51, 54, 6, -42, -49, -19, -102, 33, -40, 94, 58, -91, 94, -65, -69, 102, 10, -90, -115, 90, -34, -121, -16, -13, 126, -112, -33, -103, -8, 7, -125, -71, -70, 104, -100, -42, 29, -127, -60, -82, -98, -48, 112, 58, -54, -85, 112, 25, 4, 69, 72, -72, 17, -68, -88, -92, 71, -83, 63, 68, 14, 110, -68, -74, 11, -26, -125, 1, -75, 111, -7, -127, -108, -114, -38, -34, 118, 42, -83, 2, 35, -117, -2, 57, 111, -43};
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
    msg.setTimeStamp(0.348787018693);
    msg.setSource(31768U);
    msg.setSourceEntity(36U);
    msg.setDestination(16339U);
    msg.setDestinationEntity(225U);
    msg.type = 202U;
    msg.frequency = 3855869607U;
    msg.min_range = 17556U;
    msg.max_range = 3899U;
    msg.bits_per_point = 104U;
    msg.scale_factor = 0.2716716499;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0911803330478;
    tmp_msg_0.beam_height = 0.731341247453;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {88, 98, 101, -125, -102, -55, 95, 50, 34, -5, 33, 79, 108, 33, -119, 115, -113, 0, -100, -30, -20, -6, -20, 102, -84, 85, 85, 104, -124, -110, 49, 122, 114, -91, -76, 77, -24, -22, -60, -53, -110, 82, 74, -30, 64, -39, -115, -12, 78, -126, -36, -91, 58, 61, 115, -45, 99, 123, -122, -1, -29, 70, -65, -55, -16, 124, -38, -117, -22, -115, 59, 75, -18, -115, 93, 60, -89, 29, 30, -75, 106, -70, -113, 3, 28, -117, 65, 71, -5, 46, -106, -30, 103, 89, 28, 125, -63, -17, -116, 119, 101, 62, 46, -89, -92, 31, 109, 61, -79, -100, 81, -36, -79, -109, 9, -119, 62, -69, -48, 17, 39, 2, 73, -65, -90, 34, -113, 2, -24, 45, -13, 17, -59, -95, 20, 26, 53, -86, 56, -110, 8, 99, 123, -81, 7, 120, -18, 77, -58, -48, -47, 43, 87, 122, -17, 76, 6, 35, 89, -93, 95, -43, -125, 103, 2, 10, 116, 66, 97, -35, 55, 74, 8, 35, -55, 8, 112, -110, -47, 122, 62, 95, -38, 90, 27, -66, 82, 22, -31, -61, 30, 11, -12, -39, 99, -25, -92, 96, 9, 114, -122, 69, -11, 8, 64, 119, 25, 18, -88, 18};
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
    msg.setTimeStamp(0.0131709921768);
    msg.setSource(23909U);
    msg.setSourceEntity(86U);
    msg.setDestination(43418U);
    msg.setDestinationEntity(32U);
    msg.type = 169U;
    msg.frequency = 4249921530U;
    msg.min_range = 32911U;
    msg.max_range = 9369U;
    msg.bits_per_point = 8U;
    msg.scale_factor = 0.933690855778;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.738681115525;
    tmp_msg_0.beam_height = 0.107234242153;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-66, 95, -29, 29, 43, -75, -32, -101, -8, 107, -78, 119, -90, -41, 78, -29, 2, -98, -32, 6, -71, 102, -106, -86, 123, -33, 53, -79, 7, -16, 94, -42, -51, -100, -93, -35, 85, 30, 61, -43, -84, -128, 60, -40, -76, 41, 77, 18, -126, -16, -24, -63, 26, 88, 53, 107, 49, -13, -18, 58, 58, 119, 63, -53, 110, -23, 75, -95, 56, 34, 34, 93, -49, -116, -23, -28, -81, -34, -86, 43, -52, 114, 19, -47, -111, -26, -35, 118, 119, 3, -119, -42, -36, 116, 38};
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
    msg.setTimeStamp(0.499845981457);
    msg.setSource(2841U);
    msg.setSourceEntity(159U);
    msg.setDestination(27900U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6043591602);
    msg.setSource(61000U);
    msg.setSourceEntity(244U);
    msg.setDestination(20853U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.802029908805);
    msg.setSource(11136U);
    msg.setSourceEntity(77U);
    msg.setDestination(40726U);
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
    msg.setTimeStamp(0.15425766798);
    msg.setSource(41823U);
    msg.setSourceEntity(204U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(176U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.31143674407);
    msg.setSource(13193U);
    msg.setSourceEntity(1U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(221U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.649695571666);
    msg.setSource(16330U);
    msg.setSourceEntity(248U);
    msg.setDestination(15080U);
    msg.setDestinationEntity(196U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.935157355821);
    msg.setSource(51579U);
    msg.setSourceEntity(160U);
    msg.setDestination(59568U);
    msg.setDestinationEntity(37U);
    msg.value = 0.907806683609;
    msg.confidence = 0.377605183294;
    msg.opmodes.assign("VIUXCSNNXESFGKGOVIPFLMAJTKLNZLABWIBXEBXVQUMKCXGOMGEWTOFLGUTVQVUHOPILNGBZHDCRHHIUVRRSTHRNDJRCNPAFXYSXSBGFHADBQZHDHSCSZJZWZCWAARWNZOYRVDEXUKFBSCQJSUOFAIQUGWTCDIQLLMVAFAEANZGFMDOK");

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
    msg.setTimeStamp(0.803354204336);
    msg.setSource(45661U);
    msg.setSourceEntity(209U);
    msg.setDestination(53394U);
    msg.setDestinationEntity(172U);
    msg.value = 0.568937110295;
    msg.confidence = 0.838477301861;
    msg.opmodes.assign("BTOYSYYJWZAFMQHUJZIWQWPZDEEGJHIYHHXNPVXPLLDXJCHQWRXOGSMBGVRSZMITPJAWNBCQCLPEB");

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
    msg.setTimeStamp(0.689510765968);
    msg.setSource(62039U);
    msg.setSourceEntity(36U);
    msg.setDestination(64104U);
    msg.setDestinationEntity(28U);
    msg.value = 0.863140444774;
    msg.confidence = 0.576017990659;
    msg.opmodes.assign("HXFDZLHILPMGWVHOZEJTVGXFKMNQSPXJCRPYELDDHNVIRPNULYRXBNEIRWBCQKHLRABBJUGJRJVVMOLZXTCU");

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
    msg.setTimeStamp(0.174100045967);
    msg.setSource(10426U);
    msg.setSourceEntity(87U);
    msg.setDestination(41327U);
    msg.setDestinationEntity(37U);
    msg.itow = 573594607U;
    msg.lat = 0.662062869465;
    msg.lon = 0.216295434567;
    msg.height_ell = 0.174694639471;
    msg.height_sea = 0.609630829148;
    msg.hacc = 0.496171005045;
    msg.vacc = 0.152941020208;
    msg.vel_n = 0.79594139631;
    msg.vel_e = 0.552584538378;
    msg.vel_d = 0.643265669904;
    msg.speed = 0.235454520189;
    msg.gspeed = 0.66816624191;
    msg.heading = 0.206874397312;
    msg.sacc = 0.679807557039;
    msg.cacc = 0.0497827126632;

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
    msg.setTimeStamp(0.415358176229);
    msg.setSource(25036U);
    msg.setSourceEntity(20U);
    msg.setDestination(57911U);
    msg.setDestinationEntity(144U);
    msg.itow = 3145157343U;
    msg.lat = 0.942469419983;
    msg.lon = 0.527848585857;
    msg.height_ell = 0.656103365917;
    msg.height_sea = 0.727934319078;
    msg.hacc = 0.543874055702;
    msg.vacc = 0.890212756071;
    msg.vel_n = 0.715202344239;
    msg.vel_e = 0.650167558074;
    msg.vel_d = 0.950755552719;
    msg.speed = 0.643388565725;
    msg.gspeed = 0.437899455975;
    msg.heading = 0.624915773799;
    msg.sacc = 0.0394860609255;
    msg.cacc = 0.39311629499;

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
    msg.setTimeStamp(0.22902261855);
    msg.setSource(44525U);
    msg.setSourceEntity(162U);
    msg.setDestination(49213U);
    msg.setDestinationEntity(58U);
    msg.itow = 1163521034U;
    msg.lat = 0.860234353871;
    msg.lon = 0.480198742753;
    msg.height_ell = 0.330724047476;
    msg.height_sea = 0.164538017249;
    msg.hacc = 0.186295665837;
    msg.vacc = 0.0909451261879;
    msg.vel_n = 0.971347525258;
    msg.vel_e = 0.555005165121;
    msg.vel_d = 0.83508466145;
    msg.speed = 0.358389328676;
    msg.gspeed = 0.518579362166;
    msg.heading = 0.803492244185;
    msg.sacc = 0.773354985599;
    msg.cacc = 0.412926769482;

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
    msg.setTimeStamp(0.579245899529);
    msg.setSource(36540U);
    msg.setSourceEntity(4U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(55U);
    msg.id = 143U;
    msg.value = 0.199253391834;

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
    msg.setTimeStamp(0.113357913681);
    msg.setSource(38414U);
    msg.setSourceEntity(5U);
    msg.setDestination(61328U);
    msg.setDestinationEntity(109U);
    msg.id = 204U;
    msg.value = 0.352910597214;

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
    msg.setTimeStamp(0.0671495645222);
    msg.setSource(3614U);
    msg.setSourceEntity(23U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(101U);
    msg.id = 201U;
    msg.value = 0.847095751349;

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
    msg.setTimeStamp(0.664566841548);
    msg.setSource(11861U);
    msg.setSourceEntity(152U);
    msg.setDestination(40469U);
    msg.setDestinationEntity(146U);
    msg.x = 0.742275169359;
    msg.y = 0.469303702276;
    msg.z = 0.953539554721;
    msg.phi = 0.521709633788;
    msg.theta = 0.204319880126;
    msg.psi = 0.715091799759;

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
    msg.setTimeStamp(0.587438649547);
    msg.setSource(21836U);
    msg.setSourceEntity(180U);
    msg.setDestination(22995U);
    msg.setDestinationEntity(14U);
    msg.x = 0.464544282036;
    msg.y = 0.0284606248015;
    msg.z = 0.875062056908;
    msg.phi = 0.866842392076;
    msg.theta = 0.484694022207;
    msg.psi = 0.486260086232;

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
    msg.setTimeStamp(0.218602154346);
    msg.setSource(14243U);
    msg.setSourceEntity(56U);
    msg.setDestination(14336U);
    msg.setDestinationEntity(204U);
    msg.x = 0.216052099395;
    msg.y = 0.104303849861;
    msg.z = 0.176178380327;
    msg.phi = 0.791341429152;
    msg.theta = 0.222476623142;
    msg.psi = 0.0187067333774;

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
    msg.setTimeStamp(0.467409448093);
    msg.setSource(22977U);
    msg.setSourceEntity(69U);
    msg.setDestination(60906U);
    msg.setDestinationEntity(145U);
    msg.beam_width = 0.739285034868;
    msg.beam_height = 0.154149518314;

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
    msg.setTimeStamp(0.645740185261);
    msg.setSource(36762U);
    msg.setSourceEntity(212U);
    msg.setDestination(15021U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.781390829583;
    msg.beam_height = 0.804798654399;

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
    msg.setTimeStamp(0.227006300644);
    msg.setSource(3124U);
    msg.setSourceEntity(92U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(189U);
    msg.beam_width = 0.288065635557;
    msg.beam_height = 0.157403809802;

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
    msg.setTimeStamp(0.132706095138);
    msg.setSource(25960U);
    msg.setSourceEntity(244U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(0U);
    msg.sane = 19U;

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
    msg.setTimeStamp(0.843974139002);
    msg.setSource(40906U);
    msg.setSourceEntity(186U);
    msg.setDestination(26508U);
    msg.setDestinationEntity(47U);
    msg.sane = 105U;

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
    msg.setTimeStamp(0.0787824144293);
    msg.setSource(4500U);
    msg.setSourceEntity(17U);
    msg.setDestination(20839U);
    msg.setDestinationEntity(202U);
    msg.sane = 196U;

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
    msg.setTimeStamp(0.633029869699);
    msg.setSource(46813U);
    msg.setSourceEntity(118U);
    msg.setDestination(50547U);
    msg.setDestinationEntity(179U);
    msg.value = 0.720603751009;

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
    msg.setTimeStamp(0.559162945635);
    msg.setSource(52701U);
    msg.setSourceEntity(55U);
    msg.setDestination(34285U);
    msg.setDestinationEntity(85U);
    msg.value = 0.947159830846;

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
    msg.setTimeStamp(0.757759934887);
    msg.setSource(40618U);
    msg.setSourceEntity(10U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(75U);
    msg.value = 0.590188327399;

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
    msg.setTimeStamp(0.876003967272);
    msg.setSource(36994U);
    msg.setSourceEntity(50U);
    msg.setDestination(49127U);
    msg.setDestinationEntity(15U);
    msg.value = 0.73226274449;

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
    msg.setTimeStamp(0.827523141026);
    msg.setSource(23036U);
    msg.setSourceEntity(110U);
    msg.setDestination(38279U);
    msg.setDestinationEntity(139U);
    msg.value = 0.589337979584;

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
    msg.setTimeStamp(0.9021159309);
    msg.setSource(57610U);
    msg.setSourceEntity(142U);
    msg.setDestination(12199U);
    msg.setDestinationEntity(178U);
    msg.value = 0.435641619083;

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
    msg.setTimeStamp(0.922816030169);
    msg.setSource(9301U);
    msg.setSourceEntity(253U);
    msg.setDestination(52845U);
    msg.setDestinationEntity(70U);
    msg.value = 0.624724173717;

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
    msg.setTimeStamp(0.538942213197);
    msg.setSource(42724U);
    msg.setSourceEntity(115U);
    msg.setDestination(47589U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6885482779;

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
    msg.setTimeStamp(0.203250750335);
    msg.setSource(18762U);
    msg.setSourceEntity(118U);
    msg.setDestination(16189U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0332127244486;

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
    msg.setTimeStamp(0.230563671143);
    msg.setSource(27987U);
    msg.setSourceEntity(96U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(85U);
    msg.value = 0.565726163117;

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
    msg.setTimeStamp(0.359435625048);
    msg.setSource(62240U);
    msg.setSourceEntity(132U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(117U);
    msg.value = 0.870836935872;

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
    msg.setTimeStamp(0.539492876281);
    msg.setSource(50813U);
    msg.setSourceEntity(226U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(108U);
    msg.value = 0.482233794389;

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
    msg.setTimeStamp(0.0631662109402);
    msg.setSource(16548U);
    msg.setSourceEntity(226U);
    msg.setDestination(31945U);
    msg.setDestinationEntity(197U);
    msg.value = 0.36814057278;

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
    msg.setTimeStamp(0.0578572432297);
    msg.setSource(45419U);
    msg.setSourceEntity(165U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(27U);
    msg.value = 0.681354951878;

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
    msg.setTimeStamp(0.431194762128);
    msg.setSource(63847U);
    msg.setSourceEntity(28U);
    msg.setDestination(26327U);
    msg.setDestinationEntity(250U);
    msg.value = 0.361541314752;

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
    msg.setTimeStamp(0.0482820108849);
    msg.setSource(45012U);
    msg.setSourceEntity(50U);
    msg.setDestination(14242U);
    msg.setDestinationEntity(145U);
    msg.value = 0.425881238814;

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
    msg.setTimeStamp(0.168414336148);
    msg.setSource(25552U);
    msg.setSourceEntity(85U);
    msg.setDestination(13862U);
    msg.setDestinationEntity(201U);
    msg.value = 0.82292959655;

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
    msg.setTimeStamp(0.0244005897373);
    msg.setSource(44034U);
    msg.setSourceEntity(123U);
    msg.setDestination(50999U);
    msg.setDestinationEntity(247U);
    msg.value = 0.49817742887;

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
    msg.setTimeStamp(0.747061620311);
    msg.setSource(56498U);
    msg.setSourceEntity(60U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(141U);
    msg.value = 0.688812619852;

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
    msg.setTimeStamp(0.516267348359);
    msg.setSource(35867U);
    msg.setSourceEntity(251U);
    msg.setDestination(3167U);
    msg.setDestinationEntity(180U);
    msg.value = 0.224518675449;

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
    msg.setTimeStamp(0.0932410063169);
    msg.setSource(6127U);
    msg.setSourceEntity(137U);
    msg.setDestination(12085U);
    msg.setDestinationEntity(211U);
    msg.value = 0.253879912551;

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
    msg.setTimeStamp(0.0491654803177);
    msg.setSource(50962U);
    msg.setSourceEntity(65U);
    msg.setDestination(25398U);
    msg.setDestinationEntity(40U);
    msg.value = 0.852300003475;

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
    msg.setTimeStamp(0.606702246435);
    msg.setSource(48052U);
    msg.setSourceEntity(240U);
    msg.setDestination(44879U);
    msg.setDestinationEntity(119U);
    msg.value = 0.173260444541;

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
    msg.setTimeStamp(0.876141961951);
    msg.setSource(14976U);
    msg.setSourceEntity(132U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(70U);
    msg.value = 0.645963867697;

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
    msg.setTimeStamp(0.622750038792);
    msg.setSource(14229U);
    msg.setSourceEntity(153U);
    msg.setDestination(16571U);
    msg.setDestinationEntity(9U);
    msg.validity = 21055U;
    msg.type = 17U;
    msg.tow = 4005572638U;
    msg.base_lat = 0.773651471364;
    msg.base_lon = 0.574834507886;
    msg.base_height = 0.561979423067;
    msg.n = 0.579615295141;
    msg.e = 0.290978829306;
    msg.d = 0.676224960915;
    msg.v_n = 0.255116031499;
    msg.v_e = 0.234401056372;
    msg.v_d = 0.0208104604885;
    msg.satellites = 160U;
    msg.iar_hyp = 56861U;
    msg.iar_ratio = 0.576079967664;

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
    msg.setTimeStamp(0.814378729864);
    msg.setSource(46250U);
    msg.setSourceEntity(102U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(207U);
    msg.validity = 43851U;
    msg.type = 176U;
    msg.tow = 837717578U;
    msg.base_lat = 0.0118667369033;
    msg.base_lon = 0.987232133116;
    msg.base_height = 0.0384483692652;
    msg.n = 0.0573338598498;
    msg.e = 0.309281071117;
    msg.d = 0.945358954402;
    msg.v_n = 0.238339156194;
    msg.v_e = 0.761195403747;
    msg.v_d = 0.0561003594758;
    msg.satellites = 70U;
    msg.iar_hyp = 13182U;
    msg.iar_ratio = 0.335848614431;

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
    msg.setTimeStamp(0.502500927088);
    msg.setSource(33647U);
    msg.setSourceEntity(103U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(97U);
    msg.validity = 52394U;
    msg.type = 43U;
    msg.tow = 1209422539U;
    msg.base_lat = 0.766877901395;
    msg.base_lon = 0.359145561226;
    msg.base_height = 0.21565450727;
    msg.n = 0.307585982196;
    msg.e = 0.0571683973828;
    msg.d = 0.575449276275;
    msg.v_n = 0.0513569935282;
    msg.v_e = 0.0344912517925;
    msg.v_d = 0.908840708091;
    msg.satellites = 143U;
    msg.iar_hyp = 55206U;
    msg.iar_ratio = 0.422006493865;

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
    msg.setTimeStamp(0.612104189087);
    msg.setSource(32736U);
    msg.setSourceEntity(96U);
    msg.setDestination(23312U);
    msg.setDestinationEntity(68U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.968206398052;
    tmp_msg_0.lon = 0.904634791928;
    tmp_msg_0.height = 0.0249808850974;
    tmp_msg_0.x = 0.562076670953;
    tmp_msg_0.y = 0.137420017899;
    tmp_msg_0.z = 0.717083637937;
    tmp_msg_0.phi = 0.505521249416;
    tmp_msg_0.theta = 0.924802288127;
    tmp_msg_0.psi = 0.45847548257;
    tmp_msg_0.u = 0.185197213391;
    tmp_msg_0.v = 0.660761228236;
    tmp_msg_0.w = 0.395865073078;
    tmp_msg_0.vx = 0.347020389879;
    tmp_msg_0.vy = 0.156410977939;
    tmp_msg_0.vz = 0.139081749574;
    tmp_msg_0.p = 0.947791096516;
    tmp_msg_0.q = 0.275877408318;
    tmp_msg_0.r = 0.270983952188;
    tmp_msg_0.depth = 0.900322489611;
    tmp_msg_0.alt = 0.428833268117;
    msg.state.set(tmp_msg_0);
    msg.type = 59U;

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
    msg.setTimeStamp(0.607182175745);
    msg.setSource(14395U);
    msg.setSourceEntity(92U);
    msg.setDestination(49725U);
    msg.setDestinationEntity(137U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.56635329114;
    tmp_msg_0.lon = 0.754718386235;
    tmp_msg_0.height = 0.818604667362;
    tmp_msg_0.x = 0.517879399696;
    tmp_msg_0.y = 0.16590031767;
    tmp_msg_0.z = 0.607427347912;
    tmp_msg_0.phi = 0.215494084304;
    tmp_msg_0.theta = 0.732921351355;
    tmp_msg_0.psi = 0.897472938559;
    tmp_msg_0.u = 0.691079013063;
    tmp_msg_0.v = 0.32943682104;
    tmp_msg_0.w = 0.763182945181;
    tmp_msg_0.vx = 0.991013646398;
    tmp_msg_0.vy = 0.326984720626;
    tmp_msg_0.vz = 0.212265533644;
    tmp_msg_0.p = 0.549924579762;
    tmp_msg_0.q = 0.528059056354;
    tmp_msg_0.r = 0.519953589331;
    tmp_msg_0.depth = 0.918456303395;
    tmp_msg_0.alt = 0.0284969006185;
    msg.state.set(tmp_msg_0);
    msg.type = 215U;

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
    msg.setTimeStamp(0.221310528312);
    msg.setSource(10038U);
    msg.setSourceEntity(94U);
    msg.setDestination(974U);
    msg.setDestinationEntity(250U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.963432691634;
    tmp_msg_0.lon = 0.313862755584;
    tmp_msg_0.height = 0.65357055339;
    tmp_msg_0.x = 0.1000217153;
    tmp_msg_0.y = 0.442981803654;
    tmp_msg_0.z = 0.00899306603482;
    tmp_msg_0.phi = 0.997237515671;
    tmp_msg_0.theta = 0.157248163971;
    tmp_msg_0.psi = 0.836878945211;
    tmp_msg_0.u = 0.939688852692;
    tmp_msg_0.v = 0.62725109818;
    tmp_msg_0.w = 0.475293347028;
    tmp_msg_0.vx = 0.281761005932;
    tmp_msg_0.vy = 0.794635101937;
    tmp_msg_0.vz = 0.0730805069403;
    tmp_msg_0.p = 0.198038620068;
    tmp_msg_0.q = 0.566847997308;
    tmp_msg_0.r = 0.861988878784;
    tmp_msg_0.depth = 0.760923831898;
    tmp_msg_0.alt = 0.1136752822;
    msg.state.set(tmp_msg_0);
    msg.type = 102U;

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
    msg.setTimeStamp(0.0552222127171);
    msg.setSource(22016U);
    msg.setSourceEntity(75U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(82U);
    msg.value = 0.674420097668;

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
    msg.setTimeStamp(0.311787701807);
    msg.setSource(27422U);
    msg.setSourceEntity(189U);
    msg.setDestination(59445U);
    msg.setDestinationEntity(136U);
    msg.value = 0.853358471204;

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
    msg.setTimeStamp(0.422324210406);
    msg.setSource(5796U);
    msg.setSourceEntity(190U);
    msg.setDestination(28712U);
    msg.setDestinationEntity(77U);
    msg.value = 0.062310492423;

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
    msg.setTimeStamp(0.21710841326);
    msg.setSource(32145U);
    msg.setSourceEntity(98U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(48U);
    msg.value = 0.119986815009;

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
    msg.setTimeStamp(0.808551362868);
    msg.setSource(5960U);
    msg.setSourceEntity(142U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(53U);
    msg.value = 0.817114798214;

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
    msg.setTimeStamp(0.0626111918924);
    msg.setSource(10275U);
    msg.setSourceEntity(243U);
    msg.setDestination(1837U);
    msg.setDestinationEntity(220U);
    msg.value = 0.526915834146;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.833628940862);
    msg.setSource(10352U);
    msg.setSourceEntity(47U);
    msg.setDestination(31877U);
    msg.setDestinationEntity(166U);
    msg.id = 137U;
    msg.zoom = 10U;
    msg.action = 31U;

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
    msg.setTimeStamp(0.415345225447);
    msg.setSource(37983U);
    msg.setSourceEntity(135U);
    msg.setDestination(42698U);
    msg.setDestinationEntity(52U);
    msg.id = 48U;
    msg.zoom = 95U;
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
    msg.setTimeStamp(0.46987150887);
    msg.setSource(35035U);
    msg.setSourceEntity(18U);
    msg.setDestination(54035U);
    msg.setDestinationEntity(9U);
    msg.id = 19U;
    msg.zoom = 74U;
    msg.action = 98U;

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
    msg.setTimeStamp(0.753555425591);
    msg.setSource(46565U);
    msg.setSourceEntity(61U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(29U);
    msg.id = 132U;
    msg.value = 0.941942340694;

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
    msg.setTimeStamp(0.85224808257);
    msg.setSource(24035U);
    msg.setSourceEntity(85U);
    msg.setDestination(13344U);
    msg.setDestinationEntity(246U);
    msg.id = 194U;
    msg.value = 0.578491375244;

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
    msg.setTimeStamp(0.684071698708);
    msg.setSource(37838U);
    msg.setSourceEntity(33U);
    msg.setDestination(43781U);
    msg.setDestinationEntity(56U);
    msg.id = 120U;
    msg.value = 0.816295880331;

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
    msg.setTimeStamp(0.883373813029);
    msg.setSource(47226U);
    msg.setSourceEntity(160U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(77U);
    msg.id = 19U;
    msg.value = 0.189610205613;

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
    msg.setTimeStamp(0.355408084167);
    msg.setSource(15764U);
    msg.setSourceEntity(125U);
    msg.setDestination(43077U);
    msg.setDestinationEntity(174U);
    msg.id = 119U;
    msg.value = 0.901132665021;

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
    msg.setTimeStamp(0.137098563865);
    msg.setSource(44008U);
    msg.setSourceEntity(5U);
    msg.setDestination(39701U);
    msg.setDestinationEntity(195U);
    msg.id = 180U;
    msg.value = 0.785351809569;

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
    msg.setTimeStamp(0.41050803082);
    msg.setSource(46199U);
    msg.setSourceEntity(183U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(129U);
    msg.id = 187U;
    msg.angle = 0.31506067892;

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
    msg.setTimeStamp(0.476633592899);
    msg.setSource(18192U);
    msg.setSourceEntity(212U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(225U);
    msg.id = 202U;
    msg.angle = 0.356408810508;

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
    msg.setTimeStamp(0.634613693811);
    msg.setSource(5882U);
    msg.setSourceEntity(213U);
    msg.setDestination(57013U);
    msg.setDestinationEntity(211U);
    msg.id = 236U;
    msg.angle = 0.163692106425;

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
    msg.setTimeStamp(0.921659671991);
    msg.setSource(10767U);
    msg.setSourceEntity(216U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(207U);
    msg.op = 128U;
    msg.actions.assign("KDQGLTJTNGBXNOAMFJZVWIQVYLFBAJOBNWRTKGOIUMVUKZYNQTHSHELNEUANTWUEAFKJQTZMUOZCTZFYTBDHKDQXGSWRQSVKLXCHBYYOAMOUFBDDHIBJHUQGQPJMHBOWPRMDBXULVIZZPSNREOXNYYSERGJTPHUDJNXIMRMWSQFYLDODGZTYICPCYSZRENIWKFIZVMOXSRVEGWLBESXAEPIRHMFGCDCXKWSUPAAKCAAJPK");

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
    msg.setTimeStamp(0.667149869914);
    msg.setSource(57971U);
    msg.setSourceEntity(86U);
    msg.setDestination(20698U);
    msg.setDestinationEntity(197U);
    msg.op = 85U;
    msg.actions.assign("GBLVQSCZOACZBIARJBZFBKCHYLNVCFDLKJDUCCXDSTDKXVALVVTTYCXRCIIWHPKYRHOMEBHWNIEMSUXOSOWGDZPAJJSZMO");

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
    msg.setTimeStamp(0.441041484695);
    msg.setSource(8862U);
    msg.setSourceEntity(62U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(1U);
    msg.op = 174U;
    msg.actions.assign("PQRVRJQOAMRSJLFWLDCUCIVBHFJZBITVMOYNZZLFIOKBSOHOBKSGUFHSPMRJZIGQITEFXHQVLTAIQAUCIXESMVNKYWIGJYUZVRPWPGQHDKZSVQLHHHXFAXDJBUX");

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
    msg.setTimeStamp(0.10663474598);
    msg.setSource(61837U);
    msg.setSourceEntity(187U);
    msg.setDestination(39179U);
    msg.setDestinationEntity(6U);
    msg.actions.assign("MHCNXTKSQKVCFBSUZZWHJWAKNNVLYFGERIWDWCURXGTBVYPAOQEWAUBSEDWIAVUWSPGSYPXHZUFYAPROLMGJOPQTQLCBCDGUXLBEMVRNNYBIOAJYEQYFDKYUYNEGFTBFUPMGMVZOGNPNRRNSHJZPCEGXTDHUAFJTQJYKLVXRLQTDPVJHCORWOMLKCBNHJJZIDPKHIKZFSMHXIWDTEMXMQS");

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
    msg.setTimeStamp(0.377724067403);
    msg.setSource(63366U);
    msg.setSourceEntity(33U);
    msg.setDestination(47595U);
    msg.setDestinationEntity(118U);
    msg.actions.assign("LAWDFMWLPSEZDNHYKRHWRURKAYNRTABBJJFVNBPMJMGGAXENZMAXSGRGLHXRICKVXCSQONFHIKTPTGWUVZXSSPWPVZGEYJKEYRHQEOZHQLQJKFWKYFCSSTLZFMQVEUTGPDUQBSWFJDBQIJIYOPVYBXUOYMGUVRDABCQCTUUMDKALHDDRNLDXTYIP");

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
    msg.setTimeStamp(0.739349163089);
    msg.setSource(58686U);
    msg.setSourceEntity(12U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(43U);
    msg.actions.assign("UVJVXTGLIPOPSEKCYOJYJOTIMJMAUTNZEXZHSVSQRZOYUDSLDXRAFKIHRJAMQTTEUDZOWGWBHXBKRPGATWANBYQWVLSPKNENHGSXMEWJKJDEXNRHEKMBQILRAVBDIGYQCZRLUJJFFQQMAZOXXLMKRUXAKCYCDCUHIBXSNUORFCOUTFLPNLZGQFYRSVZANWEUTHHIPCPVDWCFPFSIGYETVLDPHNKGEFPZZDCMQK");

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
    msg.setTimeStamp(0.51645817902);
    msg.setSource(61257U);
    msg.setSourceEntity(220U);
    msg.setDestination(15265U);
    msg.setDestinationEntity(223U);
    msg.button = 203U;
    msg.value = 192U;

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
    msg.setTimeStamp(7.97339607139e-05);
    msg.setSource(54323U);
    msg.setSourceEntity(1U);
    msg.setDestination(51025U);
    msg.setDestinationEntity(222U);
    msg.button = 229U;
    msg.value = 179U;

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
    msg.setTimeStamp(0.0298826216442);
    msg.setSource(65371U);
    msg.setSourceEntity(245U);
    msg.setDestination(49696U);
    msg.setDestinationEntity(82U);
    msg.button = 81U;
    msg.value = 84U;

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
    msg.setTimeStamp(0.854076427268);
    msg.setSource(48732U);
    msg.setSourceEntity(190U);
    msg.setDestination(65071U);
    msg.setDestinationEntity(248U);
    msg.op = 172U;
    msg.text.assign("KUGLIIWMGLHNAELYEFPELDAQZXJHOBAOHXAMHTJRVEOUY");

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
    msg.setTimeStamp(0.0952624940186);
    msg.setSource(3744U);
    msg.setSourceEntity(39U);
    msg.setDestination(20061U);
    msg.setDestinationEntity(245U);
    msg.op = 56U;
    msg.text.assign("VAVDQEPUCWQXARMBUVWETPJUEVRHVZXTWRSYGSUIOQYOUPBPNHYXMPKYALVPHMEYCNKOMADEXZDPAKJOUKTRXJSFWCLGDZEGLDTKBSCFLHRJOFSHIQJCF");

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
    msg.setTimeStamp(0.0383374477378);
    msg.setSource(19170U);
    msg.setSourceEntity(142U);
    msg.setDestination(45032U);
    msg.setDestinationEntity(110U);
    msg.op = 128U;
    msg.text.assign("IWAARDTBPWXVJZOYNDURKCMMEEUHVCZBXXCYVYUUZEMLIQFQBFNRTQWACFNZOLEINAVERSSFVCMKKWJWYIXYPJAJWTQKQIBIOPDJTJHZNAPQOLNMQTBRKRVSEXHFWSKKZFP");

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
    msg.setTimeStamp(0.829343844706);
    msg.setSource(45598U);
    msg.setSourceEntity(145U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(192U);
    msg.op = 130U;
    msg.time_remain = 0.633616848806;
    msg.sched_time = 0.854254114844;

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
    msg.setTimeStamp(0.511032568299);
    msg.setSource(13379U);
    msg.setSourceEntity(157U);
    msg.setDestination(7597U);
    msg.setDestinationEntity(202U);
    msg.op = 32U;
    msg.time_remain = 0.490176742763;
    msg.sched_time = 0.282990745454;

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
    msg.setTimeStamp(0.595813382331);
    msg.setSource(14998U);
    msg.setSourceEntity(86U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(240U);
    msg.op = 81U;
    msg.time_remain = 0.794538103689;
    msg.sched_time = 0.980979569702;

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
    msg.setTimeStamp(0.801427708443);
    msg.setSource(7940U);
    msg.setSourceEntity(21U);
    msg.setDestination(45030U);
    msg.setDestinationEntity(85U);
    msg.name.assign("PWGPZYTVKRQMQDLYNDBTAXJTKBHUJRLSRYISSBQWOOJKNQKYKQPPNUNOCOAPJDIUHWCEGGCMWMFRWBWTXYXZGXXOIJXUOWYDSYBHGANITAMTNFXYUYPUVLJREJ");
    msg.op = 187U;
    msg.sched_time = 0.803678423841;

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
    msg.setTimeStamp(0.690616718271);
    msg.setSource(36660U);
    msg.setSourceEntity(246U);
    msg.setDestination(33873U);
    msg.setDestinationEntity(77U);
    msg.name.assign("FJWRCHRFKLBARUIBCJVPCPINEBNMZTTHRLAFHTMSJQGTGOXWVTHSHNEMYMZVEPKYUMEQLBSFHKBTEIJQNCBQDCBXQZCTKUJQJXQFBAJHYOUUATWUMCDOYNSPNXYWBLDLDDQOELISFLXKPEGHJRMNUARGNWDJZFZCFGKIWWBYOSPTAYPDLYAUZIUMRVOEXGGOVMPCEOWHSPLDVNIXFZSVESYHKVAODKFKRIRGLZKAZQT");
    msg.op = 136U;
    msg.sched_time = 0.417770222385;

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
    msg.setTimeStamp(0.304498223001);
    msg.setSource(15829U);
    msg.setSourceEntity(59U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(47U);
    msg.name.assign("KBFDIKWUGNQCIPVMTFYRHYQBNYYAHEQNAZPAMCSRCSJOACHTGLXQHUNSZPKE");
    msg.op = 166U;
    msg.sched_time = 0.659812085767;

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
    msg.setTimeStamp(0.383375064538);
    msg.setSource(31985U);
    msg.setSourceEntity(7U);
    msg.setDestination(14677U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.210777942512);
    msg.setSource(27457U);
    msg.setSourceEntity(30U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.458998485308);
    msg.setSource(47835U);
    msg.setSourceEntity(209U);
    msg.setDestination(7123U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.312933733697);
    msg.setSource(3659U);
    msg.setSourceEntity(115U);
    msg.setDestination(45405U);
    msg.setDestinationEntity(108U);
    msg.name.assign("SWHRKJOVXHWLOPDUFSCGIMQBTMSRTPPRITZJYASEUZVIKLNPRGRLLHZLTLDTEBXBVYAHKAZDYXAXOKQHZRNPINGQGNJFIT");
    msg.state = 141U;

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
    msg.setTimeStamp(0.515997331422);
    msg.setSource(31627U);
    msg.setSourceEntity(222U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(221U);
    msg.name.assign("OYKWNWLGGXUTCNJXSULOTDECJKVFYYXUHTNKDNRZNEPARPBXXGTRCHPDJZWABOXQHEZBQKJVRMVNTQAKGSXYMBAZAFBQVBSIWESRVOZPEOPUFFGFFLEJSIVGDH");
    msg.state = 63U;

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
    msg.setTimeStamp(0.815715501154);
    msg.setSource(661U);
    msg.setSourceEntity(51U);
    msg.setDestination(25380U);
    msg.setDestinationEntity(30U);
    msg.name.assign("UBMWYHEAARKPIXOCTGDZXMSVYBGNCPWLWQSXGBDHEWPJSRIXZUQBSQLVQKNLRUCRVSHNPGFBFACIIMADUGZMEPETXQOFKVDIFFGUNXAKMTNWVDZJXJHTUPSYUKDTLYBWOKSNYHOOQSCQRYERFXMJOALDFMEIGMROQIETVHHZPTZKLICRVFALIYVSUPNZJFNGTCBROUFBHEKHCXLJVQDDARHAXJZVMWIGJWTJ");
    msg.state = 40U;

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
    msg.setTimeStamp(0.0527934532422);
    msg.setSource(13240U);
    msg.setSourceEntity(32U);
    msg.setDestination(58556U);
    msg.setDestinationEntity(126U);
    msg.name.assign("VSUBGLZEBNNESGJRCLXPADFBDNMVLZCFGFDZAZMLDGFKILKODYRSZCTHXJNSTNDVTYNTKZQEXMCKXOYPPRUUQRHZJNYXAYIGELQYDDFXVSYLKAWBBEMUAFRWFUUGAHHWPLAMCESNYVCOHZCTZJQBKDYMHMOSWUQUGVYRWOWXJMIIW");
    msg.value = 151U;

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
    msg.setTimeStamp(0.0224471470947);
    msg.setSource(61045U);
    msg.setSourceEntity(155U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(199U);
    msg.name.assign("XEJWEXTAGWNMUFVDMATNCRAOEXOTZHTKLMHUFHSHWICGIPRMLRQKHPSQSDTWXGYHRTFQGUYNVLYWYEQBPBXZRGQNFUMVYKLAGNGSEWBPBNPBIVYDLNEOB");
    msg.value = 213U;

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
    msg.setTimeStamp(0.750462526476);
    msg.setSource(52121U);
    msg.setSourceEntity(172U);
    msg.setDestination(7673U);
    msg.setDestinationEntity(179U);
    msg.name.assign("MTCQDTUVMPVPRSLVFEZQHYPJOFTNLVRQPGEBGXYRIHQMREXRHBBASPXMUVGKPZLSXWATKNDXJZWFBPOJIFLPSWATUMBAUKLQIGHEUUPJCFGTNAHLZWUXCQMCHLHTUOXNRRDQSKGEEEVVDKDYYN");
    msg.value = 250U;

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
    msg.setTimeStamp(0.0557516094465);
    msg.setSource(9416U);
    msg.setSourceEntity(180U);
    msg.setDestination(24556U);
    msg.setDestinationEntity(238U);
    msg.name.assign("QDYCQSBCXGKZXNDWZQRFUADLOSEWMPIOZWINVLJPAFAVJBRTEZSZXLSTMNRHDQFBYRMUNANVNDLHXLKNTBQFPBLCWFEGBAGVEWYYGGCORJJVKARRPWYZFHVJCYTTXNLOKDIUMUEJEOTAVOOQYLGQ");

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
    msg.setTimeStamp(0.0417029473352);
    msg.setSource(53443U);
    msg.setSourceEntity(188U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(72U);
    msg.name.assign("BWAKTVGKTCEGPXLDKWWOBSTNWRMHFYQUGXHZZRQTCFLEXEWSXGTJYGEZJIWFFAISFBAGFQXZYBDXQESVAIOJMSGCPNOENMWIBKLGUKPJPMRNSCUADGRNZDWRFBFHYZDRNHHMUUONCKTXSYVUSDVOIRIXKDNRDCHOJQSTYKBHLBILCZEJVJMLECHCYBQMOVIYQAEVXRBCDPAPAYMJMPVWHPFUZQDPRWONUUTYVVAILMKAEGOZJHLXKQNTSPLLT");

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
    msg.setTimeStamp(0.243325077343);
    msg.setSource(41839U);
    msg.setSourceEntity(120U);
    msg.setDestination(37264U);
    msg.setDestinationEntity(141U);
    msg.name.assign("STIKVAQUXSOFCWZOOUJLMAHJBICNKEUHQJTTRRCCNZAYOZZLJAFYSPALDKWNFQFMXCBDIHBLWRQYGAPQZKVTKPVOQJFFOCSCXMAHSGPLTAIMEPQUVTEGHCKWRVXLV");

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
    msg.setTimeStamp(0.901367042767);
    msg.setSource(60699U);
    msg.setSourceEntity(235U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(36U);
    msg.name.assign("CTXSTXYOVJIFLORJDHZWHZAZWGEXBFVPGIZMUWVOCENQEEISYNLLQFJMXEKKGLHEGMCJUWHQMAUAGWOPPBZCNSKUBXQVNPRMSIKFSPYNIDFECROTZWSCUBUPSZIYXPOFMLHGTILUTYMJPDDAEYGUJRDWHOYPFIFXDHSQYWQBLSODKGVZCXKVJMTQFQKYVRKBZNXXLKIJTLRV");
    msg.value = 108U;

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
    msg.setTimeStamp(0.470799688119);
    msg.setSource(31028U);
    msg.setSourceEntity(233U);
    msg.setDestination(31399U);
    msg.setDestinationEntity(199U);
    msg.name.assign("XDFUPNXWKHVUHQNUHVKOQOOIPGKRNHBULOYSIMCVESMDITBFSDHNCLYIFECZTGOPMEKJNWNYVVZEPAFHLJHURXFLIDBCWLOYWABXBRMOJXNEPSTQBDIJBLEWAYGQCPPVRIGBQXMZDXTJLJYSVNRJWPBZGGDTKYGZGKKJFMDFCLXSWCARUSTVAPKRDRYMFZASHUKGFHHLZQCTMXEASTQB");
    msg.value = 180U;

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
    msg.setTimeStamp(0.601522653981);
    msg.setSource(37939U);
    msg.setSourceEntity(212U);
    msg.setDestination(61790U);
    msg.setDestinationEntity(108U);
    msg.name.assign("WLJHAJTBQENWEOUPOAQDOXMMHZJFBUDMAPTYSPRNWAAVGZSOPEZJRISLKFKGJRZKHCUEZIRZ");
    msg.value = 244U;

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
    msg.setTimeStamp(0.701321601941);
    msg.setSource(36931U);
    msg.setSourceEntity(89U);
    msg.setDestination(30493U);
    msg.setDestinationEntity(239U);
    msg.id = 251U;
    msg.period = 551233919U;
    msg.duty_cycle = 2641325104U;

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
    msg.setTimeStamp(0.969556279513);
    msg.setSource(35934U);
    msg.setSourceEntity(155U);
    msg.setDestination(42485U);
    msg.setDestinationEntity(156U);
    msg.id = 196U;
    msg.period = 1253729539U;
    msg.duty_cycle = 295708416U;

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
    msg.setTimeStamp(0.497975935723);
    msg.setSource(44068U);
    msg.setSourceEntity(67U);
    msg.setDestination(57906U);
    msg.setDestinationEntity(120U);
    msg.id = 20U;
    msg.period = 200785841U;
    msg.duty_cycle = 1399935150U;

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
    msg.setTimeStamp(0.886959435291);
    msg.setSource(344U);
    msg.setSourceEntity(32U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(3U);
    msg.id = 43U;
    msg.period = 671208523U;
    msg.duty_cycle = 3527479917U;

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
    msg.setTimeStamp(0.614225091363);
    msg.setSource(6449U);
    msg.setSourceEntity(130U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(120U);
    msg.id = 78U;
    msg.period = 31793515U;
    msg.duty_cycle = 3540502231U;

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
    msg.setTimeStamp(0.579478633465);
    msg.setSource(54335U);
    msg.setSourceEntity(206U);
    msg.setDestination(22983U);
    msg.setDestinationEntity(51U);
    msg.id = 64U;
    msg.period = 819329503U;
    msg.duty_cycle = 3368016036U;

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
    msg.setTimeStamp(0.907816477532);
    msg.setSource(45818U);
    msg.setSourceEntity(0U);
    msg.setDestination(45976U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.552756771353;
    msg.lon = 0.232713356989;
    msg.height = 0.133279371847;
    msg.x = 0.985168347586;
    msg.y = 0.455825211974;
    msg.z = 0.553613805124;
    msg.phi = 0.51589300736;
    msg.theta = 0.453507152729;
    msg.psi = 0.760014127966;
    msg.u = 0.680653839204;
    msg.v = 0.932751779217;
    msg.w = 0.267333916909;
    msg.vx = 0.930432242411;
    msg.vy = 0.747276764346;
    msg.vz = 0.589721494428;
    msg.p = 0.855032427953;
    msg.q = 0.717551125642;
    msg.r = 0.543959369544;
    msg.depth = 0.582827752299;
    msg.alt = 0.640952874065;

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
    msg.setTimeStamp(0.853988696833);
    msg.setSource(52316U);
    msg.setSourceEntity(26U);
    msg.setDestination(49746U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.239733549156;
    msg.lon = 0.509508204027;
    msg.height = 0.528946349841;
    msg.x = 0.195685610546;
    msg.y = 0.373605157681;
    msg.z = 0.725092331832;
    msg.phi = 0.539035478497;
    msg.theta = 0.972265244866;
    msg.psi = 0.906778985279;
    msg.u = 0.493152770071;
    msg.v = 0.680573406682;
    msg.w = 0.634370028318;
    msg.vx = 0.130464687298;
    msg.vy = 0.688784979225;
    msg.vz = 0.651104870779;
    msg.p = 0.287253867939;
    msg.q = 0.896842487242;
    msg.r = 0.614937214948;
    msg.depth = 0.527583451746;
    msg.alt = 0.99662260082;

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
    msg.setTimeStamp(0.464351883526);
    msg.setSource(459U);
    msg.setSourceEntity(129U);
    msg.setDestination(63810U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.559211468646;
    msg.lon = 0.293490562389;
    msg.height = 0.124873654436;
    msg.x = 0.0141358404536;
    msg.y = 0.212630276988;
    msg.z = 0.342057295906;
    msg.phi = 0.464536980509;
    msg.theta = 0.0948431855777;
    msg.psi = 0.219744430377;
    msg.u = 0.40284055488;
    msg.v = 0.0883574977495;
    msg.w = 0.954659147334;
    msg.vx = 0.404569892976;
    msg.vy = 0.122239599574;
    msg.vz = 0.464861355684;
    msg.p = 0.155403103157;
    msg.q = 0.907756430331;
    msg.r = 0.358565013686;
    msg.depth = 0.0259922973797;
    msg.alt = 0.146918243494;

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
    msg.setTimeStamp(0.635357437661);
    msg.setSource(16097U);
    msg.setSourceEntity(249U);
    msg.setDestination(30059U);
    msg.setDestinationEntity(105U);
    msg.x = 0.957048907918;
    msg.y = 0.483364583017;
    msg.z = 0.0314354027821;

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
    msg.setTimeStamp(0.639063433359);
    msg.setSource(49547U);
    msg.setSourceEntity(143U);
    msg.setDestination(55159U);
    msg.setDestinationEntity(12U);
    msg.x = 0.727263459601;
    msg.y = 0.488486632025;
    msg.z = 0.47758618989;

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
    msg.setTimeStamp(0.0110000430611);
    msg.setSource(44840U);
    msg.setSourceEntity(158U);
    msg.setDestination(36111U);
    msg.setDestinationEntity(8U);
    msg.x = 0.165638783854;
    msg.y = 0.034392348395;
    msg.z = 0.806774800767;

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
    msg.setTimeStamp(0.872713953487);
    msg.setSource(18745U);
    msg.setSourceEntity(46U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(223U);
    msg.value = 0.861520002188;

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
    msg.setTimeStamp(0.767925098464);
    msg.setSource(31442U);
    msg.setSourceEntity(200U);
    msg.setDestination(59439U);
    msg.setDestinationEntity(83U);
    msg.value = 0.705093797755;

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
    msg.setTimeStamp(0.906989624739);
    msg.setSource(4861U);
    msg.setSourceEntity(134U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(217U);
    msg.value = 0.341140221251;

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
    msg.setTimeStamp(0.527745850044);
    msg.setSource(1311U);
    msg.setSourceEntity(69U);
    msg.setDestination(39922U);
    msg.setDestinationEntity(210U);
    msg.value = 0.572599104286;

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
    msg.setTimeStamp(0.82110366782);
    msg.setSource(46041U);
    msg.setSourceEntity(121U);
    msg.setDestination(43797U);
    msg.setDestinationEntity(240U);
    msg.value = 0.910471621756;

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
    msg.setTimeStamp(0.137962290064);
    msg.setSource(48662U);
    msg.setSourceEntity(121U);
    msg.setDestination(13831U);
    msg.setDestinationEntity(38U);
    msg.value = 0.836566811244;

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
    msg.setTimeStamp(0.320408204865);
    msg.setSource(56488U);
    msg.setSourceEntity(52U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(231U);
    msg.x = 0.0145172087284;
    msg.y = 0.826310421312;
    msg.z = 0.00761979412217;
    msg.phi = 0.919016932251;
    msg.theta = 0.689592280932;
    msg.psi = 0.557998323924;
    msg.p = 0.235794973728;
    msg.q = 0.89314464426;
    msg.r = 0.239973916006;
    msg.u = 0.15980177318;
    msg.v = 0.312050975276;
    msg.w = 0.88614921373;
    msg.bias_psi = 0.101239884536;
    msg.bias_r = 0.276966441077;

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
    msg.setTimeStamp(0.750694405135);
    msg.setSource(37169U);
    msg.setSourceEntity(199U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(241U);
    msg.x = 0.325096188701;
    msg.y = 0.555197687475;
    msg.z = 0.758615350186;
    msg.phi = 0.646034861421;
    msg.theta = 0.707853335596;
    msg.psi = 0.991255349673;
    msg.p = 0.467606920582;
    msg.q = 0.102291530314;
    msg.r = 0.219834854949;
    msg.u = 0.197883075639;
    msg.v = 0.509184221055;
    msg.w = 0.312657835496;
    msg.bias_psi = 0.308812459503;
    msg.bias_r = 0.113438398097;

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
    msg.setTimeStamp(0.232934921874);
    msg.setSource(95U);
    msg.setSourceEntity(222U);
    msg.setDestination(48999U);
    msg.setDestinationEntity(136U);
    msg.x = 0.934999654945;
    msg.y = 0.07847784111;
    msg.z = 0.520430776515;
    msg.phi = 0.310404348765;
    msg.theta = 0.176941101223;
    msg.psi = 0.588355846145;
    msg.p = 0.750145945832;
    msg.q = 0.320040122197;
    msg.r = 0.76403434342;
    msg.u = 0.204156838602;
    msg.v = 0.187124644273;
    msg.w = 0.995383075708;
    msg.bias_psi = 0.253124545129;
    msg.bias_r = 0.968573182147;

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
    msg.setTimeStamp(0.914749653423);
    msg.setSource(39756U);
    msg.setSourceEntity(155U);
    msg.setDestination(32570U);
    msg.setDestinationEntity(10U);
    msg.bias_psi = 0.717061875243;
    msg.bias_r = 0.392751827649;
    msg.cog = 0.395347757431;
    msg.cyaw = 0.648287294304;
    msg.lbl_rej_level = 0.882324995297;
    msg.gps_rej_level = 0.578106834665;
    msg.custom_x = 0.948719335596;
    msg.custom_y = 0.432566216343;
    msg.custom_z = 0.260450289591;

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
    msg.setTimeStamp(0.453252468098);
    msg.setSource(54673U);
    msg.setSourceEntity(232U);
    msg.setDestination(41715U);
    msg.setDestinationEntity(198U);
    msg.bias_psi = 0.77280702969;
    msg.bias_r = 0.956064119061;
    msg.cog = 0.564447804166;
    msg.cyaw = 0.40933289675;
    msg.lbl_rej_level = 0.161276338248;
    msg.gps_rej_level = 0.94426072149;
    msg.custom_x = 0.252218260158;
    msg.custom_y = 0.60225913414;
    msg.custom_z = 0.134824980405;

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
    msg.setTimeStamp(0.565770998391);
    msg.setSource(63254U);
    msg.setSourceEntity(88U);
    msg.setDestination(22431U);
    msg.setDestinationEntity(191U);
    msg.bias_psi = 0.125074728013;
    msg.bias_r = 0.920571839808;
    msg.cog = 0.820108381284;
    msg.cyaw = 0.03331862908;
    msg.lbl_rej_level = 0.743462407035;
    msg.gps_rej_level = 0.951435954158;
    msg.custom_x = 0.530505444077;
    msg.custom_y = 0.614234706056;
    msg.custom_z = 0.849090979751;

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
    msg.setTimeStamp(0.226810317475);
    msg.setSource(18500U);
    msg.setSourceEntity(174U);
    msg.setDestination(57217U);
    msg.setDestinationEntity(167U);
    msg.utc_time = 0.643202466239;
    msg.reason = 159U;

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
    msg.setTimeStamp(0.394868467496);
    msg.setSource(24891U);
    msg.setSourceEntity(243U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.924378944134;
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
    msg.setTimeStamp(0.159524290486);
    msg.setSource(30519U);
    msg.setSourceEntity(133U);
    msg.setDestination(42649U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.406500675973;
    msg.reason = 68U;

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
    msg.setTimeStamp(0.482074768266);
    msg.setSource(43287U);
    msg.setSourceEntity(25U);
    msg.setDestination(54226U);
    msg.setDestinationEntity(220U);
    msg.id = 136U;
    msg.range = 0.837797825563;
    msg.acceptance = 157U;

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
    msg.setTimeStamp(0.188701403791);
    msg.setSource(57448U);
    msg.setSourceEntity(206U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(195U);
    msg.id = 241U;
    msg.range = 0.0561439497714;
    msg.acceptance = 249U;

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
    msg.setTimeStamp(0.297066711136);
    msg.setSource(32205U);
    msg.setSourceEntity(176U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(172U);
    msg.id = 248U;
    msg.range = 0.863561706223;
    msg.acceptance = 195U;

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
    msg.setTimeStamp(0.730009040637);
    msg.setSource(7512U);
    msg.setSourceEntity(106U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(54U);
    msg.type = 182U;
    msg.reason = 205U;
    msg.value = 0.711540904852;
    msg.timestep = 0.89043550606;

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
    msg.setTimeStamp(0.525895102478);
    msg.setSource(12267U);
    msg.setSourceEntity(88U);
    msg.setDestination(31221U);
    msg.setDestinationEntity(110U);
    msg.type = 130U;
    msg.reason = 119U;
    msg.value = 0.92420669979;
    msg.timestep = 0.0120011684919;

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
    msg.setTimeStamp(0.31376860314);
    msg.setSource(9539U);
    msg.setSourceEntity(72U);
    msg.setDestination(42808U);
    msg.setDestinationEntity(139U);
    msg.type = 208U;
    msg.reason = 232U;
    msg.value = 0.511583779054;
    msg.timestep = 0.551016247549;

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
    msg.setTimeStamp(0.039639415117);
    msg.setSource(23258U);
    msg.setSourceEntity(213U);
    msg.setDestination(9188U);
    msg.setDestinationEntity(108U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CIUSCCISCJSIAOAHWGIPRLIWFRMQEHAEEXVAMKNSWHVIZLKYFTZQKXGVBQBRDYMBUMPVOXYQWMDSRETICSQNBADKITYQVMNHEYCWZVDSMNEOUXGPSUOHOGJQWTYJGKTDDCPDPHBRODLGSYHMZAFJCNZUYXFEBTQXWBPWNFBYCNVHEUXQKNOKKDB");
    tmp_msg_0.lat = 0.530941200619;
    tmp_msg_0.lon = 0.960854582121;
    tmp_msg_0.depth = 0.110024872934;
    tmp_msg_0.query_channel = 159U;
    tmp_msg_0.reply_channel = 107U;
    tmp_msg_0.transponder_delay = 106U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.283566621625;
    msg.y = 0.279286747484;
    msg.var_x = 0.565916948493;
    msg.var_y = 0.245808901175;
    msg.distance = 0.491234985791;

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
    msg.setTimeStamp(0.894483985132);
    msg.setSource(58238U);
    msg.setSourceEntity(122U);
    msg.setDestination(26403U);
    msg.setDestinationEntity(210U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GGIOKEPISRIWUVQYWWHSBBFOUQCARTONVTCIUWYGFMJSXAPPFHNQXZCUCLQBLSBBKECTRPMWKSALNTHEHWHJUEOOOMRVJSSEKCVYAADHQYLYPFEFMDDPTHFSODXLLHOAPJRPVZKCXT");
    tmp_msg_0.lat = 0.346470079069;
    tmp_msg_0.lon = 0.902103279931;
    tmp_msg_0.depth = 0.287115753315;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 220U;
    tmp_msg_0.transponder_delay = 208U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.335010532111;
    msg.y = 0.652027896536;
    msg.var_x = 0.861981216479;
    msg.var_y = 0.908684518536;
    msg.distance = 0.905799336547;

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
    msg.setTimeStamp(0.695425020477);
    msg.setSource(19828U);
    msg.setSourceEntity(66U);
    msg.setDestination(61592U);
    msg.setDestinationEntity(28U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YXEXGAACXMJIAJTGQTPJVEPCQXRZDTFHBZAGIGQRKMYYMUIVVWMJCTUHDRZACRUMLKBPSDLAUHKLOQNSOSOBKGLCFGVWWNIMCILLBFOVRWLNTNPUDFOZPUZYXXEVQPYBNAAPINKKJKWTJHSFXSELSHKHCWVDUSDGPPVYCPHTBZEFIWNGOTORZEUDQ");
    tmp_msg_0.lat = 0.763942792348;
    tmp_msg_0.lon = 0.52841708398;
    tmp_msg_0.depth = 0.0268821395349;
    tmp_msg_0.query_channel = 243U;
    tmp_msg_0.reply_channel = 150U;
    tmp_msg_0.transponder_delay = 7U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.999188709067;
    msg.y = 0.731261161133;
    msg.var_x = 0.213922477696;
    msg.var_y = 0.284476340548;
    msg.distance = 0.281035118148;

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
    msg.setTimeStamp(0.387455060612);
    msg.setSource(57819U);
    msg.setSourceEntity(193U);
    msg.setDestination(32410U);
    msg.setDestinationEntity(132U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.961423676341);
    msg.setSource(16077U);
    msg.setSourceEntity(11U);
    msg.setDestination(3425U);
    msg.setDestinationEntity(140U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.844661347701);
    msg.setSource(38590U);
    msg.setSourceEntity(171U);
    msg.setDestination(35214U);
    msg.setDestinationEntity(161U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.678298261515);
    msg.setSource(56414U);
    msg.setSourceEntity(209U);
    msg.setDestination(37454U);
    msg.setDestinationEntity(92U);
    msg.x = 0.433874301576;
    msg.y = 0.902473296408;
    msg.z = 0.518006829163;

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
    msg.setTimeStamp(0.598974189641);
    msg.setSource(30702U);
    msg.setSourceEntity(83U);
    msg.setDestination(4696U);
    msg.setDestinationEntity(23U);
    msg.x = 0.199006271961;
    msg.y = 0.887839800176;
    msg.z = 0.46577815619;

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
    msg.setTimeStamp(0.0480386801964);
    msg.setSource(47556U);
    msg.setSourceEntity(118U);
    msg.setDestination(7926U);
    msg.setDestinationEntity(104U);
    msg.x = 0.476759168155;
    msg.y = 0.176808918619;
    msg.z = 0.384619273155;

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
    msg.setTimeStamp(0.164739597524);
    msg.setSource(55486U);
    msg.setSourceEntity(235U);
    msg.setDestination(39665U);
    msg.setDestinationEntity(124U);
    msg.va = 0.379183442578;
    msg.aoa = 0.349799611163;
    msg.ssa = 0.616685681605;

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
    msg.setTimeStamp(0.589525317618);
    msg.setSource(36968U);
    msg.setSourceEntity(29U);
    msg.setDestination(13400U);
    msg.setDestinationEntity(86U);
    msg.va = 0.266454064546;
    msg.aoa = 0.160791530724;
    msg.ssa = 0.0599583146144;

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
    msg.setTimeStamp(0.818029378953);
    msg.setSource(57843U);
    msg.setSourceEntity(125U);
    msg.setDestination(65094U);
    msg.setDestinationEntity(231U);
    msg.va = 0.337362407671;
    msg.aoa = 0.387042395139;
    msg.ssa = 0.939224494395;

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
    msg.setTimeStamp(0.437159708527);
    msg.setSource(38834U);
    msg.setSourceEntity(196U);
    msg.setDestination(41744U);
    msg.setDestinationEntity(232U);
    msg.value = 0.248386322837;

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
    msg.setTimeStamp(0.559138488198);
    msg.setSource(27396U);
    msg.setSourceEntity(131U);
    msg.setDestination(26119U);
    msg.setDestinationEntity(236U);
    msg.value = 0.701053541047;

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
    msg.setTimeStamp(0.880692995008);
    msg.setSource(33768U);
    msg.setSourceEntity(247U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(49U);
    msg.value = 0.597975342765;

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
    msg.setTimeStamp(0.395271190402);
    msg.setSource(57364U);
    msg.setSourceEntity(129U);
    msg.setDestination(24923U);
    msg.setDestinationEntity(38U);
    msg.value = 0.943670874326;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.847597719528);
    msg.setSource(27479U);
    msg.setSourceEntity(88U);
    msg.setDestination(17612U);
    msg.setDestinationEntity(161U);
    msg.value = 0.371521374701;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.177598512568);
    msg.setSource(35790U);
    msg.setSourceEntity(155U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(67U);
    msg.value = 0.738324252856;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.912401631335);
    msg.setSource(49385U);
    msg.setSourceEntity(124U);
    msg.setDestination(25815U);
    msg.setDestinationEntity(137U);
    msg.value = 0.594680025032;
    msg.speed_units = 248U;

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
    msg.setTimeStamp(0.904041157281);
    msg.setSource(52679U);
    msg.setSourceEntity(212U);
    msg.setDestination(25827U);
    msg.setDestinationEntity(93U);
    msg.value = 0.406686412977;
    msg.speed_units = 195U;

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
    msg.setTimeStamp(0.736558006954);
    msg.setSource(48295U);
    msg.setSourceEntity(148U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(134U);
    msg.value = 0.707095438942;
    msg.speed_units = 161U;

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
    msg.setTimeStamp(0.234097263593);
    msg.setSource(25289U);
    msg.setSourceEntity(142U);
    msg.setDestination(24964U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0273997715949;

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
    msg.setTimeStamp(0.166449587063);
    msg.setSource(15963U);
    msg.setSourceEntity(208U);
    msg.setDestination(14929U);
    msg.setDestinationEntity(14U);
    msg.value = 0.523820752467;

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
    msg.setTimeStamp(0.818196523086);
    msg.setSource(5397U);
    msg.setSourceEntity(197U);
    msg.setDestination(61347U);
    msg.setDestinationEntity(2U);
    msg.value = 0.870157126302;

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
    msg.setTimeStamp(0.454355031057);
    msg.setSource(16374U);
    msg.setSourceEntity(188U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(131U);
    msg.value = 0.0747277620505;

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
    msg.setTimeStamp(0.623177905478);
    msg.setSource(7427U);
    msg.setSourceEntity(96U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(191U);
    msg.value = 0.10732673331;

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
    msg.setTimeStamp(0.589113974954);
    msg.setSource(9297U);
    msg.setSourceEntity(207U);
    msg.setDestination(15938U);
    msg.setDestinationEntity(94U);
    msg.value = 0.91238240133;

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
    msg.setTimeStamp(0.349042728582);
    msg.setSource(41179U);
    msg.setSourceEntity(111U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(60U);
    msg.value = 0.192331086161;

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
    msg.setTimeStamp(0.93929602707);
    msg.setSource(49416U);
    msg.setSourceEntity(187U);
    msg.setDestination(21050U);
    msg.setDestinationEntity(64U);
    msg.value = 0.257338576255;

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
    msg.setTimeStamp(0.614711222232);
    msg.setSource(8159U);
    msg.setSourceEntity(77U);
    msg.setDestination(5032U);
    msg.setDestinationEntity(160U);
    msg.value = 0.430618835712;

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
    msg.setTimeStamp(0.616339721738);
    msg.setSource(65485U);
    msg.setSourceEntity(206U);
    msg.setDestination(38131U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 1297580067U;
    msg.start_lat = 0.954412458147;
    msg.start_lon = 0.3634516403;
    msg.start_z = 0.671528370478;
    msg.start_z_units = 21U;
    msg.end_lat = 0.116162623498;
    msg.end_lon = 0.513401328325;
    msg.end_z = 0.873671409363;
    msg.end_z_units = 166U;
    msg.speed = 0.880599157199;
    msg.speed_units = 149U;
    msg.lradius = 0.660653933911;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.448014944345);
    msg.setSource(45424U);
    msg.setSourceEntity(165U);
    msg.setDestination(22938U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 43180394U;
    msg.start_lat = 0.232575361279;
    msg.start_lon = 0.527020575418;
    msg.start_z = 0.522485916584;
    msg.start_z_units = 172U;
    msg.end_lat = 0.355735733901;
    msg.end_lon = 0.645304967706;
    msg.end_z = 0.0405062073128;
    msg.end_z_units = 22U;
    msg.speed = 0.433001857925;
    msg.speed_units = 165U;
    msg.lradius = 0.753071375989;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.33473489268);
    msg.setSource(56674U);
    msg.setSourceEntity(87U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 2248249358U;
    msg.start_lat = 0.599464728124;
    msg.start_lon = 0.305902954237;
    msg.start_z = 0.256448481365;
    msg.start_z_units = 198U;
    msg.end_lat = 0.652139363172;
    msg.end_lon = 0.982269411931;
    msg.end_z = 0.186831311896;
    msg.end_z_units = 173U;
    msg.speed = 0.4709082665;
    msg.speed_units = 6U;
    msg.lradius = 0.585206926798;
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
    msg.setTimeStamp(0.839937466269);
    msg.setSource(64182U);
    msg.setSourceEntity(149U);
    msg.setDestination(17414U);
    msg.setDestinationEntity(156U);
    msg.x = 0.311723017088;
    msg.y = 0.307684380603;
    msg.z = 0.143378096943;
    msg.k = 0.297055324854;
    msg.m = 0.321122120505;
    msg.n = 0.725889181902;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.379372916094);
    msg.setSource(362U);
    msg.setSourceEntity(62U);
    msg.setDestination(22867U);
    msg.setDestinationEntity(72U);
    msg.x = 0.9424156997;
    msg.y = 0.441916957363;
    msg.z = 0.616187872454;
    msg.k = 0.0977872057324;
    msg.m = 0.774273395425;
    msg.n = 0.767764737921;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.011805509377);
    msg.setSource(47040U);
    msg.setSourceEntity(138U);
    msg.setDestination(44012U);
    msg.setDestinationEntity(121U);
    msg.x = 0.0193669263492;
    msg.y = 0.67938611073;
    msg.z = 0.716372402505;
    msg.k = 0.489252726887;
    msg.m = 0.060030668969;
    msg.n = 0.929233272671;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.881530915858);
    msg.setSource(14558U);
    msg.setSourceEntity(29U);
    msg.setDestination(47634U);
    msg.setDestinationEntity(23U);
    msg.value = 0.507678519086;

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
    msg.setTimeStamp(0.174238162951);
    msg.setSource(47407U);
    msg.setSourceEntity(124U);
    msg.setDestination(19671U);
    msg.setDestinationEntity(171U);
    msg.value = 0.176552874065;

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
    msg.setTimeStamp(0.789312271207);
    msg.setSource(22765U);
    msg.setSourceEntity(27U);
    msg.setDestination(11484U);
    msg.setDestinationEntity(42U);
    msg.value = 0.701215984449;

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
    msg.setTimeStamp(0.288140790021);
    msg.setSource(33710U);
    msg.setSourceEntity(249U);
    msg.setDestination(3167U);
    msg.setDestinationEntity(139U);
    msg.u = 0.0593623451791;
    msg.v = 0.853285442436;
    msg.w = 0.366217228543;
    msg.p = 0.893106725104;
    msg.q = 0.513954894333;
    msg.r = 0.183229914554;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.86352127694);
    msg.setSource(41035U);
    msg.setSourceEntity(236U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(49U);
    msg.u = 0.319745296282;
    msg.v = 0.160845499138;
    msg.w = 0.20880070148;
    msg.p = 0.0677724192437;
    msg.q = 0.873940328873;
    msg.r = 0.659609151583;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.405973256656);
    msg.setSource(49850U);
    msg.setSourceEntity(164U);
    msg.setDestination(25497U);
    msg.setDestinationEntity(194U);
    msg.u = 0.138596218303;
    msg.v = 0.320572750654;
    msg.w = 0.611965508466;
    msg.p = 0.346428428683;
    msg.q = 0.200247618689;
    msg.r = 0.276893563279;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.00683111080827);
    msg.setSource(14273U);
    msg.setSourceEntity(42U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(156U);
    msg.path_ref = 1072697696U;
    msg.start_lat = 0.404824892834;
    msg.start_lon = 0.333594559356;
    msg.start_z = 0.445259245505;
    msg.start_z_units = 239U;
    msg.end_lat = 0.867451157152;
    msg.end_lon = 0.12444862105;
    msg.end_z = 0.185696608834;
    msg.end_z_units = 219U;
    msg.lradius = 0.771517040038;
    msg.flags = 238U;
    msg.x = 0.90001331489;
    msg.y = 0.369981543148;
    msg.z = 0.0665969350952;
    msg.vx = 0.624160579771;
    msg.vy = 0.772782479301;
    msg.vz = 0.644592315889;
    msg.course_error = 0.845452856895;
    msg.eta = 9549U;

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
    msg.setTimeStamp(0.716546475717);
    msg.setSource(48653U);
    msg.setSourceEntity(81U);
    msg.setDestination(44882U);
    msg.setDestinationEntity(231U);
    msg.path_ref = 1167503235U;
    msg.start_lat = 0.0268712944846;
    msg.start_lon = 0.430658606695;
    msg.start_z = 0.893527063015;
    msg.start_z_units = 244U;
    msg.end_lat = 0.305858860938;
    msg.end_lon = 0.851276541781;
    msg.end_z = 0.634513116351;
    msg.end_z_units = 235U;
    msg.lradius = 0.710379527697;
    msg.flags = 96U;
    msg.x = 0.313100301722;
    msg.y = 0.208074034562;
    msg.z = 0.182454859059;
    msg.vx = 0.727358238311;
    msg.vy = 0.877104150074;
    msg.vz = 0.131249519903;
    msg.course_error = 0.567486641508;
    msg.eta = 34836U;

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
    msg.setTimeStamp(0.82774408103);
    msg.setSource(47428U);
    msg.setSourceEntity(242U);
    msg.setDestination(55437U);
    msg.setDestinationEntity(142U);
    msg.path_ref = 2598766235U;
    msg.start_lat = 0.526148780965;
    msg.start_lon = 0.930661031242;
    msg.start_z = 0.136982282854;
    msg.start_z_units = 80U;
    msg.end_lat = 0.975633054064;
    msg.end_lon = 0.236791901253;
    msg.end_z = 0.00211424705335;
    msg.end_z_units = 187U;
    msg.lradius = 0.742432240416;
    msg.flags = 218U;
    msg.x = 0.113517572925;
    msg.y = 0.546047425723;
    msg.z = 0.981345969159;
    msg.vx = 0.15891878437;
    msg.vy = 0.324161818626;
    msg.vz = 0.340323316552;
    msg.course_error = 0.0588838862411;
    msg.eta = 57988U;

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
    msg.setTimeStamp(0.691999583271);
    msg.setSource(32767U);
    msg.setSourceEntity(120U);
    msg.setDestination(21279U);
    msg.setDestinationEntity(102U);
    msg.k = 0.849464478065;
    msg.m = 0.871256170797;
    msg.n = 0.0540240558302;

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
    msg.setTimeStamp(0.00273448074592);
    msg.setSource(3533U);
    msg.setSourceEntity(61U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(224U);
    msg.k = 0.892207925219;
    msg.m = 0.0505976851459;
    msg.n = 0.166691433917;

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
    msg.setTimeStamp(0.893109338106);
    msg.setSource(35049U);
    msg.setSourceEntity(128U);
    msg.setDestination(13303U);
    msg.setDestinationEntity(17U);
    msg.k = 0.443901019623;
    msg.m = 0.270340721501;
    msg.n = 0.202829343051;

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
    msg.setTimeStamp(0.230923436483);
    msg.setSource(60311U);
    msg.setSourceEntity(152U);
    msg.setDestination(38506U);
    msg.setDestinationEntity(167U);
    msg.p = 0.0939349736829;
    msg.i = 0.477294984147;
    msg.d = 0.666093682994;
    msg.a = 0.267125975984;

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
    msg.setTimeStamp(0.287337819213);
    msg.setSource(44753U);
    msg.setSourceEntity(215U);
    msg.setDestination(10564U);
    msg.setDestinationEntity(182U);
    msg.p = 0.56008554789;
    msg.i = 0.344298326821;
    msg.d = 0.0887692261413;
    msg.a = 0.760972926722;

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
    msg.setTimeStamp(0.445283328378);
    msg.setSource(56569U);
    msg.setSourceEntity(197U);
    msg.setDestination(56220U);
    msg.setDestinationEntity(11U);
    msg.p = 0.850510467437;
    msg.i = 0.796561892528;
    msg.d = 0.585968601144;
    msg.a = 0.288967161132;

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
    msg.setTimeStamp(0.694106542113);
    msg.setSource(9738U);
    msg.setSourceEntity(103U);
    msg.setDestination(45660U);
    msg.setDestinationEntity(126U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.667692410055);
    msg.setSource(19039U);
    msg.setSourceEntity(70U);
    msg.setDestination(29572U);
    msg.setDestinationEntity(102U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.0314120130993);
    msg.setSource(44101U);
    msg.setSourceEntity(158U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(203U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.523002517614);
    msg.setSource(415U);
    msg.setSourceEntity(214U);
    msg.setDestination(34495U);
    msg.setDestinationEntity(188U);
    msg.x = 0.74739139147;
    msg.y = 0.38850240483;
    msg.z = 0.663095251727;
    msg.vx = 0.469120728338;
    msg.vy = 0.191615012726;
    msg.vz = 0.21582739715;
    msg.ax = 0.7636022623;
    msg.ay = 0.0469013704415;
    msg.az = 0.787241554964;
    msg.flags = 37030U;

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
    msg.setTimeStamp(0.203714614315);
    msg.setSource(56624U);
    msg.setSourceEntity(25U);
    msg.setDestination(28179U);
    msg.setDestinationEntity(127U);
    msg.x = 0.548779094399;
    msg.y = 0.0547757475391;
    msg.z = 0.456957756205;
    msg.vx = 0.0967687827342;
    msg.vy = 0.564107847422;
    msg.vz = 0.342919834048;
    msg.ax = 0.400065798769;
    msg.ay = 0.82515229144;
    msg.az = 0.36211892889;
    msg.flags = 35036U;

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
    msg.setTimeStamp(0.543275249088);
    msg.setSource(20291U);
    msg.setSourceEntity(167U);
    msg.setDestination(25275U);
    msg.setDestinationEntity(248U);
    msg.x = 0.763386495737;
    msg.y = 0.231842694671;
    msg.z = 0.123715477042;
    msg.vx = 0.142286231932;
    msg.vy = 0.623827301652;
    msg.vz = 0.879296093357;
    msg.ax = 0.59816596285;
    msg.ay = 0.706294926589;
    msg.az = 0.248859526199;
    msg.flags = 55698U;

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
    msg.setTimeStamp(0.126014452287);
    msg.setSource(33372U);
    msg.setSourceEntity(231U);
    msg.setDestination(14563U);
    msg.setDestinationEntity(168U);
    msg.value = 0.201304441344;

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
    msg.setTimeStamp(0.212945454133);
    msg.setSource(39157U);
    msg.setSourceEntity(235U);
    msg.setDestination(19008U);
    msg.setDestinationEntity(143U);
    msg.value = 0.838499825126;

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
    msg.setTimeStamp(0.162128651374);
    msg.setSource(14555U);
    msg.setSourceEntity(226U);
    msg.setDestination(32523U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0578508468413;

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
    msg.setTimeStamp(0.410948679819);
    msg.setSource(56531U);
    msg.setSourceEntity(126U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(133U);
    msg.timeout = 11373U;
    msg.lat = 0.279961920111;
    msg.lon = 0.500985734181;
    msg.z = 0.812398376446;
    msg.z_units = 81U;
    msg.speed = 0.669288541091;
    msg.speed_units = 199U;
    msg.roll = 0.0245024538818;
    msg.pitch = 0.955050482153;
    msg.yaw = 0.700239291456;
    msg.custom.assign("FAHNRYKXKQWGUJLVKMAKIYEITDYXROGHGOFUVFYQBSSVUPZUMMQZPXTHZBSYA");

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
    msg.setTimeStamp(0.19514170728);
    msg.setSource(34965U);
    msg.setSourceEntity(214U);
    msg.setDestination(44798U);
    msg.setDestinationEntity(24U);
    msg.timeout = 34919U;
    msg.lat = 0.0333393999355;
    msg.lon = 0.795126746623;
    msg.z = 0.451231292381;
    msg.z_units = 154U;
    msg.speed = 0.0117453190206;
    msg.speed_units = 26U;
    msg.roll = 0.538557298556;
    msg.pitch = 0.692889105021;
    msg.yaw = 0.763317787053;
    msg.custom.assign("GDTNVEGUMBUFDAKHQVUZYMFZETPMTEPFZXUGPEAJVEJRXSAPWNLHQCFXMKSQJVQWFWBEKJNUZISPYQAGYLKFDYREMKGZVZHAHIVXVFUVBUQHLE");

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
    msg.setTimeStamp(0.152206741746);
    msg.setSource(1911U);
    msg.setSourceEntity(93U);
    msg.setDestination(40046U);
    msg.setDestinationEntity(52U);
    msg.timeout = 52157U;
    msg.lat = 0.581646544424;
    msg.lon = 0.40716706361;
    msg.z = 0.027277320461;
    msg.z_units = 200U;
    msg.speed = 0.511210062089;
    msg.speed_units = 244U;
    msg.roll = 0.494844881448;
    msg.pitch = 0.289815249324;
    msg.yaw = 0.392777361083;
    msg.custom.assign("TMBGXSFWGTUFEEXEKYOKNCBPYVLDKWVPSHVOKCDDUIQFSYIXTMLPGCHCCDQVHVOISUMVMT");

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
    msg.setTimeStamp(0.127979665442);
    msg.setSource(42382U);
    msg.setSourceEntity(206U);
    msg.setDestination(16603U);
    msg.setDestinationEntity(157U);
    msg.timeout = 61485U;
    msg.lat = 0.415302065629;
    msg.lon = 0.268753389843;
    msg.z = 0.333714474258;
    msg.z_units = 86U;
    msg.speed = 0.256301948168;
    msg.speed_units = 151U;
    msg.duration = 51868U;
    msg.radius = 0.0615705728096;
    msg.flags = 104U;
    msg.custom.assign("UZIBJQHQYDWJIVXKWDNBCYTHKAAVNDDGEEIPUQXQBQTMRQGT");

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
    msg.setTimeStamp(0.647043803778);
    msg.setSource(51987U);
    msg.setSourceEntity(1U);
    msg.setDestination(63412U);
    msg.setDestinationEntity(179U);
    msg.timeout = 53453U;
    msg.lat = 0.140560613287;
    msg.lon = 0.496145750535;
    msg.z = 0.28418249736;
    msg.z_units = 117U;
    msg.speed = 0.414020340929;
    msg.speed_units = 224U;
    msg.duration = 6133U;
    msg.radius = 0.071618535392;
    msg.flags = 46U;
    msg.custom.assign("CKWXMTVYQAHGOJEAMDRQWTVEBNMVZEQBOHGGVGKNOYBEHDBJGZHOCXSVFLFYBWPXASXILKPKTMSS");

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
    msg.setTimeStamp(0.717675964944);
    msg.setSource(53678U);
    msg.setSourceEntity(91U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(40U);
    msg.timeout = 42424U;
    msg.lat = 0.104508636817;
    msg.lon = 0.0164646548507;
    msg.z = 0.593193017105;
    msg.z_units = 132U;
    msg.speed = 0.0270108297194;
    msg.speed_units = 238U;
    msg.duration = 44996U;
    msg.radius = 0.220944219637;
    msg.flags = 112U;
    msg.custom.assign("RIFCUHXEWEFXPGCIFRQGQABZAKGKDQPDLJSADNNMSCUPM");

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
    msg.setTimeStamp(0.742944131989);
    msg.setSource(29505U);
    msg.setSourceEntity(128U);
    msg.setDestination(46011U);
    msg.setDestinationEntity(147U);
    msg.custom.assign("IFHIQHHVNSJNSVIZBOSQXFNJFHIVEWMQBKZNZXTPQRAQNGRAJJXZZ");

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
    msg.setTimeStamp(0.574239309371);
    msg.setSource(26107U);
    msg.setSourceEntity(81U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(244U);
    msg.custom.assign("AVFXOCJCRXIHDQDSHXGXQKWBIDVNWZUNAEFRADGZVQIOLHNSCZZAJQRVBBHYELSLIKOXHIBRBPCRETSKRTMMCOAJLSCYKEMCYTZMUTYRYWFUHZMGUYGUMPDAXNVPQVOGEKNPHSNAMKIMFQMGLTYDWPAS");

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
    msg.setTimeStamp(0.261043050934);
    msg.setSource(46695U);
    msg.setSourceEntity(101U);
    msg.setDestination(2002U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("RMSKHMDDRQZIVRJODFXQJSESVKCHZZTTOFBFVLXFQXNROSADHTSRQONWUHCSBRLGICNZNKDHJYIMYKBBRMLZBUKYJHGEPKUEXEWBOYYWNPBPLCIUOTZENGBBCNUFPVELPQLXVSECHKBAAWIPKSXAQWAMEIVPYPTGOAJOTDFRVKZZQWQNIZEGKLMHVUGGQCSXXJ");

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
    msg.setTimeStamp(0.585149635749);
    msg.setSource(35796U);
    msg.setSourceEntity(226U);
    msg.setDestination(18291U);
    msg.setDestinationEntity(243U);
    msg.timeout = 62341U;
    msg.lat = 0.392837518134;
    msg.lon = 0.369558529935;
    msg.z = 0.842996246901;
    msg.z_units = 111U;
    msg.duration = 58357U;
    msg.speed = 0.445175441027;
    msg.speed_units = 149U;
    msg.type = 20U;
    msg.radius = 0.311836900305;
    msg.length = 0.596866423518;
    msg.bearing = 0.920322030474;
    msg.direction = 148U;
    msg.custom.assign("JUCKGQBPUHHDKJNJVJXZOTYJYPXOUGHPFUNDCZMXFCNKJSGODHRVRLUMQSEMIIIFEZKWOEVPW");

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
    msg.setTimeStamp(0.790543833065);
    msg.setSource(15962U);
    msg.setSourceEntity(150U);
    msg.setDestination(30521U);
    msg.setDestinationEntity(139U);
    msg.timeout = 32268U;
    msg.lat = 0.656668299774;
    msg.lon = 0.352031125178;
    msg.z = 0.720584452883;
    msg.z_units = 84U;
    msg.duration = 10679U;
    msg.speed = 0.805959680324;
    msg.speed_units = 115U;
    msg.type = 154U;
    msg.radius = 0.787184874258;
    msg.length = 0.292040244568;
    msg.bearing = 0.501072240101;
    msg.direction = 82U;
    msg.custom.assign("QPLICACYODVCRBPGKTDKIOUOYCDYAFVKQRXJVNOAYUDPYQXJWSZEIQBFGESGSXFZDWTVFPETEPPVVGJHVWYAUZRBKQMNMWKOPGKUJHSBLBXHITLDCRBLZDZRBSMFSGISEHTRWFJHMJTMEETHZNHYJYAWNPRFSLKFLAXJINASCMLKDZJXXBAVWQOOTLMIXQDGIOFGPFMUCQXBMQJXRZTGULWOKCAPZVHYK");

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
    msg.setTimeStamp(0.0235018569701);
    msg.setSource(9195U);
    msg.setSourceEntity(110U);
    msg.setDestination(37163U);
    msg.setDestinationEntity(65U);
    msg.timeout = 879U;
    msg.lat = 0.0158513084361;
    msg.lon = 0.990368665731;
    msg.z = 0.37835418548;
    msg.z_units = 182U;
    msg.duration = 17751U;
    msg.speed = 0.348145293514;
    msg.speed_units = 202U;
    msg.type = 188U;
    msg.radius = 0.212227988887;
    msg.length = 0.229659586159;
    msg.bearing = 0.0389615308186;
    msg.direction = 16U;
    msg.custom.assign("BFDFTAICSZEIPMVXQSKZMGPMVBCABPQDDFRWVHVTTSUAVYJPTMEGXOROTXFPWSZDMXINAVOTJDMMWEECKOFMCVXJTUWIYLBMLZYGBXGRCPAVELPRNZSFHFLBUGQLFNVKDZSKIG");

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
    msg.setTimeStamp(0.0199948474681);
    msg.setSource(17200U);
    msg.setSourceEntity(37U);
    msg.setDestination(52414U);
    msg.setDestinationEntity(162U);
    msg.duration = 12173U;
    msg.custom.assign("CHLPPVUUMXDNYEHCZSMZQNWVMOYDJQIRSDIYWPUNKNDLQXYXRPIUAAZJINXMIJFIQOAORRXLKPDSHHKGWSMCBKGVRQUOKRMNJYHPEGSDLVDRCWGPTKZPKIWVSUQVTAYBFFMXHKVTTUBFRWHHSKTLGWGUAGGSEHMFDJOEYGSXDNPORTHQZLOBOTXELQBNJJJLJWWECSKACXTVYBCEINOLBJCZZFQBRBVEFOZFTVIMAAF");

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
    msg.setTimeStamp(0.258641183402);
    msg.setSource(17400U);
    msg.setSourceEntity(141U);
    msg.setDestination(10420U);
    msg.setDestinationEntity(33U);
    msg.duration = 47393U;
    msg.custom.assign("PBOQVGVXRPUWFCQMVXGLZZRSHTHSYSYSTBOHTLASHDJJCCQIPWDNCTZZNDLAGIRTYKEPANUVRIWOSEMQWTBCMVANSWNUJ");

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
    msg.setTimeStamp(0.0887325072566);
    msg.setSource(61979U);
    msg.setSourceEntity(253U);
    msg.setDestination(47019U);
    msg.setDestinationEntity(112U);
    msg.duration = 50606U;
    msg.custom.assign("QPNDCKNXBUJWTYPDOKQCFHWZVHXSLABEBRXMUISKXSULWWJQLAAKIZFACQSXDTIWMMSZFYYNOHTJXCTEOGDBCAMPMWVQEMZYVYDVQJADXOILPCSURFAZBWBFEHBGKTHJHUTYXEKNNHNOJYAOJNVJCR");

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
    msg.setTimeStamp(0.66209913996);
    msg.setSource(42894U);
    msg.setSourceEntity(151U);
    msg.setDestination(32513U);
    msg.setDestinationEntity(145U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.146053111494;
    msg.control.set(tmp_msg_0);
    msg.duration = 27766U;
    msg.custom.assign("RXARKYKLQGEBTJWTBAJPJJEOAYGQVVMHSEAWUCYIDJKVEQHQCYSZWDGGJH");

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
    msg.setTimeStamp(0.962058670018);
    msg.setSource(19856U);
    msg.setSourceEntity(191U);
    msg.setDestination(39010U);
    msg.setDestinationEntity(245U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.568468039278;
    msg.control.set(tmp_msg_0);
    msg.duration = 20257U;
    msg.custom.assign("PUCKBYYXXNDGYWISUEGCEZRPCZHXLJDGAIRLXRNSPOUXLPKYQLKMHJWDSQFHZYTUJOXKRPECZHAEPUZBDOBQMXZCTLENJLQUADPKZNISDRXGJNIEMROAAMVVBWFDJHEIJVCNEY");

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
    msg.setTimeStamp(0.243061174858);
    msg.setSource(46915U);
    msg.setSourceEntity(155U);
    msg.setDestination(10120U);
    msg.setDestinationEntity(9U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.279069306733;
    msg.control.set(tmp_msg_0);
    msg.duration = 56501U;
    msg.custom.assign("FMJVAKLGUFZAGVKRYNRLHNDIFKQIZTLQSYRDSNIVWUFINVZFIRSCSBIXNXMAPBKJPXDHZWPFEBHSVHYMZPRPKFTCIVPRVBJKYFLXSWTBWEMQTMTDGEUAQYEGAVAPOYCOXDTWRTDPC");

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
    msg.setTimeStamp(0.497310841683);
    msg.setSource(58079U);
    msg.setSourceEntity(34U);
    msg.setDestination(43160U);
    msg.setDestinationEntity(162U);
    msg.timeout = 5370U;
    msg.lat = 0.623822492901;
    msg.lon = 0.496278359379;
    msg.z = 0.739219744031;
    msg.z_units = 24U;
    msg.speed = 0.428717721968;
    msg.speed_units = 69U;
    msg.bearing = 0.0274968866006;
    msg.cross_angle = 0.838192559235;
    msg.width = 0.972566784276;
    msg.length = 0.251048349276;
    msg.hstep = 0.176520523075;
    msg.coff = 99U;
    msg.alternation = 163U;
    msg.flags = 142U;
    msg.custom.assign("VJEMSWIDOQDURINBGLQJHWUZAVJXINKULHMQGCCKNPYNIKZNTAKTAMRDKJHLZYFVJCLTDCLAGQCPEVVEGPGVPQORZATURONSJTYQHAWUPDPEELPAJUOVQSFBBECFXRBWMRD");

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
    msg.setTimeStamp(0.960002533682);
    msg.setSource(12729U);
    msg.setSourceEntity(182U);
    msg.setDestination(54203U);
    msg.setDestinationEntity(135U);
    msg.timeout = 24480U;
    msg.lat = 0.00793252421059;
    msg.lon = 0.121374296562;
    msg.z = 0.282379283874;
    msg.z_units = 41U;
    msg.speed = 0.401525493218;
    msg.speed_units = 138U;
    msg.bearing = 0.51732960702;
    msg.cross_angle = 0.870928060155;
    msg.width = 0.170312952002;
    msg.length = 0.911733078997;
    msg.hstep = 0.677284336131;
    msg.coff = 150U;
    msg.alternation = 67U;
    msg.flags = 21U;
    msg.custom.assign("BLRAHIKQSGSPZOOJNNCTOTODNHYLVIEQTMQQYUYWUSILOOHWKUHTSMZSFFLLXKERKHJAHKCFKPPUCGBVDYJJOVYWBMHTFPZZDWUTSGMVAADCYNZKQFQXGAGSUEIMLURMNXPBRUXBWGDUFLFJKWXZRQEPDXBEVNRJKEYAVOHLFARCIJIZANPFETJGXGLDVYIZRIYCUQKMCPGYNJSAXQR");

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
    msg.setTimeStamp(0.861083356994);
    msg.setSource(25667U);
    msg.setSourceEntity(134U);
    msg.setDestination(51204U);
    msg.setDestinationEntity(67U);
    msg.timeout = 48102U;
    msg.lat = 0.65072966223;
    msg.lon = 0.746348326758;
    msg.z = 0.349304004921;
    msg.z_units = 226U;
    msg.speed = 0.350653324627;
    msg.speed_units = 238U;
    msg.bearing = 0.338287187605;
    msg.cross_angle = 0.820740252713;
    msg.width = 0.279922039202;
    msg.length = 0.963350060157;
    msg.hstep = 0.398448035791;
    msg.coff = 157U;
    msg.alternation = 35U;
    msg.flags = 253U;
    msg.custom.assign("TTFYQDYFLZMAEOUWSHEQKZDLKVVKAOXIBDHUJJCFGBQQLGFBAXNUDVQXZYCIBGZIPGMZLOSMFZYNKDDJCCMPRKHCPTTZEPFWVWVXZWHEFNQETYXHECUFUJOPVOIGOAZKNOKOBQGIRSMRNVTSELBNSXNHEBWCYHTS");

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
    msg.setTimeStamp(0.132558248708);
    msg.setSource(60740U);
    msg.setSourceEntity(99U);
    msg.setDestination(43089U);
    msg.setDestinationEntity(101U);
    msg.timeout = 12465U;
    msg.lat = 0.890204690211;
    msg.lon = 0.621878305899;
    msg.z = 0.497624367316;
    msg.z_units = 117U;
    msg.speed = 0.225122287264;
    msg.speed_units = 222U;
    msg.custom.assign("ROXIISPMCDZUMSURMXZQAKJACTASTYIQDWKUPQAYBEUUDFKSKJLSEBPONHHMXKIBLVCNVZKLFFSQUNWNMWIYDVWGJVHHINVGFIWJRYLQAXGOOYQVXPDJWJLRXBIEJASVXFKZGKYWQBLDQQSORTGCOIRSYHNYPGFNPGHFONURMZACNWZERBHQCHBYEKHTPUMXCLMARDTAPBEWTFTZJKLZOHDJEZRCGVPBLTFEAPOBX");

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
    msg.setTimeStamp(0.0552272024095);
    msg.setSource(27140U);
    msg.setSourceEntity(7U);
    msg.setDestination(39847U);
    msg.setDestinationEntity(238U);
    msg.timeout = 46839U;
    msg.lat = 0.716292657553;
    msg.lon = 0.45423656504;
    msg.z = 0.39349471139;
    msg.z_units = 9U;
    msg.speed = 0.0508142829995;
    msg.speed_units = 63U;
    msg.custom.assign("MJVQGFYDSGEWLHERDODIBSODIEAAAYJKHWKWQHVCQUONIISATPURMEUGDXRUSLEYUZDVKLYOSQPQHSFMBMKKBIDJDNNIMZGZCCHJSSBJVRPKJIGQAFHLOZLAHOXKOFSNMLNVWJYUQZUPZEHWYFPTYQUJVBHCWBPCYCYVGTTCATVLVKPCXUELBNRJC");

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
    msg.setTimeStamp(0.32213266845);
    msg.setSource(783U);
    msg.setSourceEntity(206U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(135U);
    msg.timeout = 51975U;
    msg.lat = 0.289118677286;
    msg.lon = 0.355198868345;
    msg.z = 0.800168973944;
    msg.z_units = 160U;
    msg.speed = 0.355061998681;
    msg.speed_units = 93U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.813847847613;
    tmp_msg_0.y = 0.933422395224;
    tmp_msg_0.z = 0.728507010059;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QVQNYVNPGNXACJBERUBFTBUQKIZUDSKSBRFVAMULSWOWOGCLKPHOJ");

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
    msg.setTimeStamp(0.739727180189);
    msg.setSource(50002U);
    msg.setSourceEntity(85U);
    msg.setDestination(43620U);
    msg.setDestinationEntity(192U);
    msg.x = 0.666030207987;
    msg.y = 0.876042327863;
    msg.z = 0.823450217145;

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
    msg.setTimeStamp(0.621566817627);
    msg.setSource(20897U);
    msg.setSourceEntity(228U);
    msg.setDestination(4480U);
    msg.setDestinationEntity(145U);
    msg.x = 0.176939096336;
    msg.y = 0.15143007377;
    msg.z = 0.363777085663;

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
    msg.setTimeStamp(0.0267837778058);
    msg.setSource(19722U);
    msg.setSourceEntity(165U);
    msg.setDestination(60761U);
    msg.setDestinationEntity(0U);
    msg.x = 0.309229182886;
    msg.y = 0.562376063501;
    msg.z = 0.715149092556;

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
    msg.setTimeStamp(0.181759825116);
    msg.setSource(38646U);
    msg.setSourceEntity(30U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(154U);
    msg.timeout = 27374U;
    msg.lat = 0.0274144223748;
    msg.lon = 0.321583009955;
    msg.z = 0.276969404853;
    msg.z_units = 19U;
    msg.amplitude = 0.178943079297;
    msg.pitch = 0.795070308973;
    msg.speed = 0.483506749457;
    msg.speed_units = 104U;
    msg.custom.assign("LXODPJCHLODDYIJHHSKXWYKQWILRWIKADCXJ");

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
    msg.setTimeStamp(0.813777654093);
    msg.setSource(39939U);
    msg.setSourceEntity(166U);
    msg.setDestination(55672U);
    msg.setDestinationEntity(110U);
    msg.timeout = 43253U;
    msg.lat = 0.646688012719;
    msg.lon = 0.341570348009;
    msg.z = 0.338759856571;
    msg.z_units = 138U;
    msg.amplitude = 0.650953529435;
    msg.pitch = 0.733520556969;
    msg.speed = 0.303039453533;
    msg.speed_units = 100U;
    msg.custom.assign("WVLITLCASXSFTVDJICFGZJDPRL");

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
    msg.setTimeStamp(0.712997251906);
    msg.setSource(29109U);
    msg.setSourceEntity(126U);
    msg.setDestination(57268U);
    msg.setDestinationEntity(150U);
    msg.timeout = 65406U;
    msg.lat = 0.264087802536;
    msg.lon = 0.975001112682;
    msg.z = 0.0452080976769;
    msg.z_units = 135U;
    msg.amplitude = 0.448005233885;
    msg.pitch = 0.347997509143;
    msg.speed = 0.728416761283;
    msg.speed_units = 171U;
    msg.custom.assign("OOLOSKDCFWBHRTUZARMZLSBYXVRRYTWNEDKGPSRDJKFIBDQZJXEWTUMBYAYFCKWVYHIISSQSMRDVOXFSPNZPAYGYZUEYMZUWPFNPQAVTMJRXBGUZFJFMOICYJWVFQAELKGVBTHDDHJXEODMNBERAQPTEGVOAHYWUPOILPQZCZJIXCVJCUBIWGIABLKLKOVKEFDQBWQDTXHUTRGMKOSTTLGIHXNUCSGZIFANQPNHJMNCLNKHHS");

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
    msg.setTimeStamp(0.169422015007);
    msg.setSource(55091U);
    msg.setSourceEntity(206U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.933303976602);
    msg.setSource(21128U);
    msg.setSourceEntity(97U);
    msg.setDestination(24093U);
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
    msg.setTimeStamp(0.150893118765);
    msg.setSource(65069U);
    msg.setSourceEntity(45U);
    msg.setDestination(48262U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.570036694375);
    msg.setSource(57465U);
    msg.setSourceEntity(20U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.664449805193;
    msg.lon = 0.300959494733;
    msg.z = 0.0885918442182;
    msg.z_units = 22U;
    msg.radius = 0.442084651116;
    msg.duration = 41769U;
    msg.speed = 0.423470056671;
    msg.speed_units = 227U;
    msg.custom.assign("FBQNZWVXYKEIJTKHBCMWWDMRSICODVNEBYCEQZBKHAONOVQSJVGOIXEQNKUESLBOJLJBASFWUNKRGMRBGOGDMJMEZKKFOUAIXUUMYALXCNTAFUPLMISEAHCWDTHWYVGUXHZJFWWLZRVGRCPPVVTELLAALMFJTTYWODHMZMNSDQCPDGZDHRVQFOYRBIBCTWSQQXRSLXOGJRTADAHJXDQPPRYLGEYZUQFSZPCBVPTTZ");

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
    msg.setTimeStamp(0.327090890777);
    msg.setSource(64004U);
    msg.setSourceEntity(4U);
    msg.setDestination(52832U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.943525453138;
    msg.lon = 0.189994382864;
    msg.z = 0.65499098419;
    msg.z_units = 29U;
    msg.radius = 0.997849706788;
    msg.duration = 34719U;
    msg.speed = 0.872112309457;
    msg.speed_units = 140U;
    msg.custom.assign("AUXILQQLIELKCARSZUNMTBAMLQPTETDHLXZEHCAJOYNYDUGJDAJDHTLVIZBCDAIUOOXUGVMIMQIUSXKXIKJJCPNIJDRYTOTYCVFGGFCEIQTMFDHKFZFFWDVLOPWWSRMNKYZSDSNCWJHGVHJNDBJXZMXWPRPSWXYSUBKMMRPPTKYZTLNAVEQUPVSWABBMY");

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
    msg.setTimeStamp(0.0575651542266);
    msg.setSource(21357U);
    msg.setSourceEntity(2U);
    msg.setDestination(63221U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.511386596084;
    msg.lon = 0.288755133105;
    msg.z = 0.297513107054;
    msg.z_units = 29U;
    msg.radius = 0.591484733809;
    msg.duration = 9268U;
    msg.speed = 0.537384875967;
    msg.speed_units = 29U;
    msg.custom.assign("YWFPQYFXGDRNEVYUYSURTAAJOBIIARHJHFHBQHJYZPHUCUMAXVXJQKSMOOZIEMDCUZMGBSBLTNIVZMRCFSPITZDBSGSGEZPCMKGKIQFANVVLRAXPGHARKCDGHHENUFVRNCNSCZEJUNOPKTFZXTLNXOUXDLIPWUYBQJIKEWJJSDPYOLASVRWGHQMTWDDJPFCOBEWOQTAMKLCXLEVRKZFLWKAGMDQVBYMTQYQT");

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
    msg.setTimeStamp(0.02311876002);
    msg.setSource(3739U);
    msg.setSourceEntity(83U);
    msg.setDestination(32783U);
    msg.setDestinationEntity(95U);
    msg.timeout = 18628U;
    msg.flags = 33U;
    msg.lat = 0.957177282244;
    msg.lon = 0.720661185249;
    msg.start_z = 0.427135713918;
    msg.start_z_units = 34U;
    msg.end_z = 0.754101063242;
    msg.end_z_units = 15U;
    msg.radius = 0.66918904424;
    msg.speed = 0.70574133293;
    msg.speed_units = 83U;
    msg.custom.assign("MKMUGTJFWQBZVKUWABSEDYLNXBGCPGLZFVABDDIFTWAOIQCYCNHHQIMASCRGOMLFLYREKIFATPIROKVNDSQX");

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
    msg.setTimeStamp(0.58334859902);
    msg.setSource(1825U);
    msg.setSourceEntity(192U);
    msg.setDestination(15015U);
    msg.setDestinationEntity(235U);
    msg.timeout = 60289U;
    msg.flags = 248U;
    msg.lat = 0.589051810151;
    msg.lon = 0.643865147737;
    msg.start_z = 0.940856613939;
    msg.start_z_units = 114U;
    msg.end_z = 0.702479688781;
    msg.end_z_units = 101U;
    msg.radius = 0.241637115993;
    msg.speed = 0.63106151459;
    msg.speed_units = 50U;
    msg.custom.assign("RUCTFWUUJXZOVQUJSXQZGZOBPYWMGQFMBIOJPXHAUAAYRDASNHWLXLOKACLRQGLMUWERJRXYXEIEFOIOZPCDDNTBMZBBQEYLJSCEJHLUWQACHCRMRPMNSFPAIRJEWEXBUTWDPJGZDGLNPFHNTKVFMUPBIJCOKMLWIFCLHNWSESUHZKNBVSIVDVMXOVRNKKYZHQONHEFRBYVLNYPTSHIGAGSFQCVYEKTVMIPXKZBTQD");

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
    msg.setTimeStamp(0.35288634981);
    msg.setSource(1633U);
    msg.setSourceEntity(182U);
    msg.setDestination(64584U);
    msg.setDestinationEntity(210U);
    msg.timeout = 58358U;
    msg.flags = 220U;
    msg.lat = 0.942680175133;
    msg.lon = 0.158690718945;
    msg.start_z = 0.432840816035;
    msg.start_z_units = 113U;
    msg.end_z = 0.38130074526;
    msg.end_z_units = 128U;
    msg.radius = 0.927174034916;
    msg.speed = 0.933955341913;
    msg.speed_units = 247U;
    msg.custom.assign("PYQGVFMVTVAUOWNLGTFLAVZCDZQJOVIIZTHAMSNVXQGYBRJOXJDFEPBZUHSDSCAKBNGPVBPBHJSLOICWMOICWBAERNNVSUKMWMWEMZTXUAKJCQNDFYHGNGZXFJMLTHETSLFYIUIUFXFOHXURAYBCTPTSBJWHQOPWDHERJOMKAMZODPWIGZCKSAKRPPXKCGLRTQKSTVLUXIFDCQKARXQEDENWULMGHDYJVNLZBYSYWR");

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
    msg.setTimeStamp(0.628731957598);
    msg.setSource(61627U);
    msg.setSourceEntity(127U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(12U);
    msg.timeout = 63349U;
    msg.lat = 0.662874639438;
    msg.lon = 0.324027766432;
    msg.z = 0.188802300892;
    msg.z_units = 4U;
    msg.speed = 0.310947029332;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.803519069116;
    tmp_msg_0.y = 0.868422253986;
    tmp_msg_0.z = 0.742384745759;
    tmp_msg_0.t = 0.505378931845;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PLFMAYSSXYZXXBHDTEEYUCBWQOPZIVFVCJGZIHFQEDVZHNDVCBUNCARDLJSNPNUIYTZLUGNCEIYKJJAZYX");

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
    msg.setTimeStamp(0.556714982679);
    msg.setSource(25115U);
    msg.setSourceEntity(21U);
    msg.setDestination(50306U);
    msg.setDestinationEntity(152U);
    msg.timeout = 10008U;
    msg.lat = 0.706565950229;
    msg.lon = 0.115467944496;
    msg.z = 0.468401380664;
    msg.z_units = 161U;
    msg.speed = 0.286961301281;
    msg.speed_units = 42U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.178830927807;
    tmp_msg_0.y = 0.878580859834;
    tmp_msg_0.z = 0.909731390336;
    tmp_msg_0.t = 0.909679984917;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HVPAYCULRDINSXSNGLLBOSVGFUETVFPCTOOJAOBKJRDUMQNOAPDECGIFOMAMFCSUGGRDHKTYDTWNSKZEUZLQRXIIQQPZTTHQKWGKYIFARHDUWUWHXJDJP");

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
    msg.setTimeStamp(0.722074740843);
    msg.setSource(65241U);
    msg.setSourceEntity(198U);
    msg.setDestination(60890U);
    msg.setDestinationEntity(254U);
    msg.timeout = 25940U;
    msg.lat = 0.752818112396;
    msg.lon = 0.160441829075;
    msg.z = 0.859141247542;
    msg.z_units = 163U;
    msg.speed = 0.947929783694;
    msg.speed_units = 176U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.690329958555;
    tmp_msg_0.y = 0.24935683601;
    tmp_msg_0.z = 0.630439763251;
    tmp_msg_0.t = 0.831026743613;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NHBFVCUJBVWWJBLXPZIIRYDYOERRVLBJMRXJSVOMVYLXVZRWQBNDUOYAAXQWIZYZMOTYWPVHOTCJSAWCNIMMMZIKZDPPGSHMAONLZTFEYGRDGGQUGIQQEXWKSKTPPUTAAXLSCQSBZHNTTSKBNKOIIFMRJKDLCTRGJZIKHQQFGWIJTFLUQFPAGEUHEOBCDSEFHZNJOREVNSFFCLGMFXHUUYACBDXAXWSUKMGPEPERUHXJHVLWTQD");

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
    msg.setTimeStamp(0.952100933872);
    msg.setSource(6315U);
    msg.setSourceEntity(224U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(103U);
    msg.x = 0.632290779625;
    msg.y = 0.448387694897;
    msg.z = 0.0236127511438;
    msg.t = 0.67135238917;

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
    msg.setTimeStamp(0.950092840826);
    msg.setSource(26536U);
    msg.setSourceEntity(9U);
    msg.setDestination(41547U);
    msg.setDestinationEntity(122U);
    msg.x = 0.263741169954;
    msg.y = 0.758797394523;
    msg.z = 0.148859334882;
    msg.t = 0.596679820566;

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
    msg.setTimeStamp(0.631750217263);
    msg.setSource(36446U);
    msg.setSourceEntity(162U);
    msg.setDestination(62868U);
    msg.setDestinationEntity(173U);
    msg.x = 0.00596911502329;
    msg.y = 0.385975187694;
    msg.z = 0.763063581896;
    msg.t = 0.846616866229;

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
    msg.setTimeStamp(0.708056348214);
    msg.setSource(57953U);
    msg.setSourceEntity(2U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(112U);
    msg.timeout = 2833U;
    msg.name.assign("NIVDDGJFLEXKRKRHPMUHTIXCEQRZZZMOWAAVLNTVYSRDOPAMTCNDNMCUZNWIGCVLGOXITWDUUYQOJOBXVEHIKEZLWXPYSWL");
    msg.custom.assign("QIGBCOEUEJOVAPOPIGYHOEYHOYDHEAUPRAXWJVSTXLGXOQNAPDKYNGBZCANSLKFVKRHSAGTPHESOKGZWKWMSGUWLLCACPWNNGCMYFBEBGIDUHPEFTODCUWTYCUUZMVOZBJLFVARQJFNXTLRRXDMMKSRQSXOIBDRWIVPYF");

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
    msg.setTimeStamp(0.292399081129);
    msg.setSource(33672U);
    msg.setSourceEntity(183U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(134U);
    msg.timeout = 48176U;
    msg.name.assign("XUHRZUARXHCDMNKFFOOTEHNNHXWRYBSOTUMDOETEKGIWQJBUQWOPLGNKTKANKTTPPOQXSLASETVZAMXESCCJUKFDAAUEYFZXBFRURSONQUHMNKCIIDZPYJJVPDGVJXGYNFLSYD");
    msg.custom.assign("MOEPSNQVPNKASYMNRUNYPTJRHFKOSRYEUJQCMQUUGBFUODGAPLOUP");

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
    msg.setTimeStamp(0.158690929656);
    msg.setSource(57744U);
    msg.setSourceEntity(124U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(245U);
    msg.timeout = 43339U;
    msg.name.assign("YPDYGPIOYNJQFZVXAMRVYZFDGJIJIZXNKGYIOLAKDLBEWWWOVTKECHLPRTRXBWKHHIKYIZVH");
    msg.custom.assign("BNGHQSAJYPEXOYDDRWTUEKNXLUJGTZISUAPRZORCIVQZHFMRUADLCYS");

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
    msg.setTimeStamp(0.960797281286);
    msg.setSource(14894U);
    msg.setSourceEntity(88U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.323177253766;
    msg.lon = 0.0267720594466;
    msg.z = 0.220465503127;
    msg.z_units = 28U;
    msg.speed = 0.376963664147;
    msg.speed_units = 201U;
    msg.start_time = 0.924851011742;
    msg.custom.assign("FGHBSCVJUKTRTYDWTMSAZUKLIDHIIUEACVTYXWISOHQFLHMQLJPPKBDWGYSVAXWSBJXUMODMAAXSBBNFUPGTJVBSMENNFDXVCAVEPAYJZQBVXVGWIAENHEMGDXFIQXWNCOPGJUERRGEKJDJOJSFLFGQOLTQADCLLIKYQMLZKZARRVZHNONISTMOOCGLXHR");

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
    msg.setTimeStamp(0.327327254432);
    msg.setSource(25330U);
    msg.setSourceEntity(160U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.276087043585;
    msg.lon = 0.429398663646;
    msg.z = 0.446036790744;
    msg.z_units = 171U;
    msg.speed = 0.613909226982;
    msg.speed_units = 133U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48339U;
    tmp_msg_0.off_x = 0.289611970795;
    tmp_msg_0.off_y = 0.226477437341;
    tmp_msg_0.off_z = 0.812797615786;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.859625336933;
    msg.custom.assign("ARHGWAWJWCKZHAKNNMOLAJDECCEOUFFYFYBSSXSSDWGIWIJUCUSYOZMQBBGUCOPTZIQPLWSMFJYXQEBHJGHDOHECNGPTXHIRXPCAVTGBOLOMXVYQSZMUZRSBBKQZYGIAWSJXKFAKJUGEEYEZYOTYVNRLUWDTUBXJHRBDLLUNKXBHJVEFRMXAEMFCSNQRGAODIVMZVULIPKZINIXPKHPMQKTTVKCILVLVT");

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
    msg.setTimeStamp(0.924792724282);
    msg.setSource(47271U);
    msg.setSourceEntity(69U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.767653184903;
    msg.lon = 0.540472817758;
    msg.z = 0.275092932834;
    msg.z_units = 213U;
    msg.speed = 0.898982328739;
    msg.speed_units = 192U;
    msg.start_time = 0.612861676405;
    msg.custom.assign("IMYXOQMHCZEQWWIZQUOKARRDESEAIROHRPGJRYWZGHEZSGOVFIKCJJUQGKNBMWWHMPUHKNZTJZIY");

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
    msg.setTimeStamp(0.252136053252);
    msg.setSource(4846U);
    msg.setSourceEntity(155U);
    msg.setDestination(56581U);
    msg.setDestinationEntity(202U);
    msg.vid = 47633U;
    msg.off_x = 0.489849147462;
    msg.off_y = 0.168044099543;
    msg.off_z = 0.156285886053;

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
    msg.setTimeStamp(0.0225234906113);
    msg.setSource(21896U);
    msg.setSourceEntity(96U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(188U);
    msg.vid = 58862U;
    msg.off_x = 0.574268530127;
    msg.off_y = 0.547119431411;
    msg.off_z = 0.909040132361;

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
    msg.setTimeStamp(0.888660125482);
    msg.setSource(64136U);
    msg.setSourceEntity(236U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(1U);
    msg.vid = 4300U;
    msg.off_x = 0.446110753292;
    msg.off_y = 0.731099326825;
    msg.off_z = 0.521800244478;

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
    msg.setTimeStamp(0.576360738966);
    msg.setSource(44570U);
    msg.setSourceEntity(54U);
    msg.setDestination(47364U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.91379751102);
    msg.setSource(7013U);
    msg.setSourceEntity(179U);
    msg.setDestination(60583U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.107666590975);
    msg.setSource(14965U);
    msg.setSourceEntity(148U);
    msg.setDestination(42408U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.167547423343);
    msg.setSource(14350U);
    msg.setSourceEntity(193U);
    msg.setDestination(19804U);
    msg.setDestinationEntity(204U);
    msg.mid = 38427U;

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
    msg.setTimeStamp(0.232881951013);
    msg.setSource(50347U);
    msg.setSourceEntity(191U);
    msg.setDestination(1475U);
    msg.setDestinationEntity(87U);
    msg.mid = 28300U;

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
    msg.setTimeStamp(0.59251852224);
    msg.setSource(51843U);
    msg.setSourceEntity(15U);
    msg.setDestination(13296U);
    msg.setDestinationEntity(200U);
    msg.mid = 15577U;

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
    msg.setTimeStamp(0.0617698870141);
    msg.setSource(57848U);
    msg.setSourceEntity(107U);
    msg.setDestination(32416U);
    msg.setDestinationEntity(105U);
    msg.state = 180U;
    msg.eta = 2221U;
    msg.info.assign("TYGZSEGYDUNQYHPVIXCCVVXESJRVBWDJQXSMHFSVCLW");

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
    msg.setTimeStamp(0.469834401118);
    msg.setSource(48199U);
    msg.setSourceEntity(88U);
    msg.setDestination(35558U);
    msg.setDestinationEntity(184U);
    msg.state = 56U;
    msg.eta = 29911U;
    msg.info.assign("PMASDVMJVEDNBWCIKRFURLBVYZWFCPMTGITOTEBGJAUEHGIXCYBPVODRQOXFZYFQRCHEBGANXWPTIPJKTODPMNUVVSOBIWQQNGCYWNICLWIZWTDSULZLOSWDSANYFHASEGXSXMNJZOZHRHEXWKFHTBQVVMGIVQFKGPDUQENOIXTKLRSUFHTZZCYOEDIUQRUCTDJHLNBLJRRKXMJQC");

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
    msg.setTimeStamp(0.0108283086046);
    msg.setSource(19551U);
    msg.setSourceEntity(101U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(64U);
    msg.state = 252U;
    msg.eta = 18456U;
    msg.info.assign("FAGBZRDPLQKILOONYUOJAKLAXSCFASIVBNUUJKMMGVQLAMAZDFKFOHUMVEDBJMDZETHHJGMBFQTYCSPGGPHJYADMCLZTVXNRIGBWEHGNGUREVILUQOXJPNRKJPYONJQGXBLZFPGZZREDKTWMINQSCDSTYRYSBIHQVWKFWKJYYT");

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
    msg.setTimeStamp(0.973742545945);
    msg.setSource(2513U);
    msg.setSourceEntity(144U);
    msg.setDestination(3209U);
    msg.setDestinationEntity(199U);
    msg.system = 30145U;
    msg.duration = 20380U;
    msg.speed = 0.436833671976;
    msg.speed_units = 248U;
    msg.x = 0.237934487878;
    msg.y = 0.00150884744247;
    msg.z = 0.384807625806;
    msg.z_units = 116U;

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
    msg.setTimeStamp(0.767436995336);
    msg.setSource(37326U);
    msg.setSourceEntity(26U);
    msg.setDestination(57080U);
    msg.setDestinationEntity(44U);
    msg.system = 58795U;
    msg.duration = 27718U;
    msg.speed = 0.950142608315;
    msg.speed_units = 40U;
    msg.x = 0.186352770766;
    msg.y = 0.182282592394;
    msg.z = 0.518598951156;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.946570773167);
    msg.setSource(20763U);
    msg.setSourceEntity(184U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(244U);
    msg.system = 55554U;
    msg.duration = 56054U;
    msg.speed = 0.990539444163;
    msg.speed_units = 161U;
    msg.x = 0.0646976216202;
    msg.y = 0.189507896439;
    msg.z = 0.362270292795;
    msg.z_units = 128U;

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
    msg.setTimeStamp(0.741487240434);
    msg.setSource(42009U);
    msg.setSourceEntity(35U);
    msg.setDestination(13154U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.0523501169212;
    msg.lon = 0.902678833446;
    msg.speed = 0.963177197049;
    msg.speed_units = 172U;
    msg.duration = 29821U;
    msg.sys_a = 47324U;
    msg.sys_b = 22921U;
    msg.move_threshold = 0.535477153058;

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
    msg.setTimeStamp(0.0560849027353);
    msg.setSource(38371U);
    msg.setSourceEntity(127U);
    msg.setDestination(43403U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.442239155367;
    msg.lon = 0.551330428764;
    msg.speed = 0.20944791512;
    msg.speed_units = 214U;
    msg.duration = 17301U;
    msg.sys_a = 53657U;
    msg.sys_b = 54929U;
    msg.move_threshold = 0.309521301683;

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
    msg.setTimeStamp(0.582739511995);
    msg.setSource(60072U);
    msg.setSourceEntity(20U);
    msg.setDestination(48961U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.202278908009;
    msg.lon = 0.14430932767;
    msg.speed = 0.199829660612;
    msg.speed_units = 64U;
    msg.duration = 35172U;
    msg.sys_a = 33704U;
    msg.sys_b = 7357U;
    msg.move_threshold = 0.231921229593;

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
    msg.setTimeStamp(0.0065219593972);
    msg.setSource(56797U);
    msg.setSourceEntity(33U);
    msg.setDestination(7953U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.369224429335;
    msg.lon = 0.852329936552;
    msg.z = 0.060482648259;
    msg.z_units = 50U;
    msg.speed = 0.307228894271;
    msg.speed_units = 41U;
    msg.custom.assign("IUZGSLYCLPZLQYAJTSWBHSXKYOCFUFZKDIFMSKWKBDVLAJZJCWOASLQNDTOFGXYHQBYZEGOPZQREUETCTTBBAROENWPETXBGSQMOKBMIJJNEIWJCATZSFNOHLUVRVOIRJGEVRHSKXMQNUXPOQLFFLFVJIIXYTXHAUKHPICSXRYEWAHPPWYGCDFLEKHFUHMNPBMQTIKMVZGZPWHYVUVTDODQRWWRDDBNZ");

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
    msg.setTimeStamp(0.125936271154);
    msg.setSource(62329U);
    msg.setSourceEntity(203U);
    msg.setDestination(878U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.218742037603;
    msg.lon = 0.796734604133;
    msg.z = 0.273064738114;
    msg.z_units = 192U;
    msg.speed = 0.780138463453;
    msg.speed_units = 67U;
    msg.custom.assign("KJMIBEIPTJKDRMTKGCPAFYBCRJILHOIAXPVLFZEGJZSBQWKQYVFZWJFXIHBPGGZUAVNCOQDXKURRVNOJHGMCULTXEAQPXQSDLTRVMNAACFIIITFMSUYHNPXSFXDOMEGWWZVJIEDW");

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
    msg.setTimeStamp(0.814526580103);
    msg.setSource(40145U);
    msg.setSourceEntity(142U);
    msg.setDestination(28959U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.549293863909;
    msg.lon = 0.413349784245;
    msg.z = 0.0431968388908;
    msg.z_units = 167U;
    msg.speed = 0.564497820448;
    msg.speed_units = 249U;
    msg.custom.assign("FBFXVNDGFWPQGLFVHWQIYBTUSNNOFTWAKGKLWNZRHJHTXNROIIESIHRJZIBQZCWBCQPXUCLLKPMVAEIZWJYXMBYVLVEKFYUWKGGULRUEDJOLQGPBPBZTEAFOCIFJMMVWDCFEVHKQCJEEVWCVASDAGSCYKDOBZSYSMMSXIOZYSPABTUJSBDQLYOTGAPFRUQRJKMXOCATUQHKHDJNNRGPCJKXYDHEX");

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
    msg.setTimeStamp(0.383905561697);
    msg.setSource(50045U);
    msg.setSourceEntity(219U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.947390228468;
    msg.lon = 0.647385548036;

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
    msg.setTimeStamp(0.190141343796);
    msg.setSource(28292U);
    msg.setSourceEntity(193U);
    msg.setDestination(28600U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.861281830278;
    msg.lon = 0.938515889339;

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
    msg.setTimeStamp(0.0596754537428);
    msg.setSource(35636U);
    msg.setSourceEntity(187U);
    msg.setDestination(20007U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.786954996732;
    msg.lon = 0.0712228132838;

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
    msg.setTimeStamp(0.526261775214);
    msg.setSource(49108U);
    msg.setSourceEntity(238U);
    msg.setDestination(511U);
    msg.setDestinationEntity(249U);
    msg.timeout = 27214U;
    msg.lat = 0.991383264157;
    msg.lon = 0.818430285533;
    msg.z = 0.0818548315192;
    msg.z_units = 252U;
    msg.pitch = 0.557019172348;
    msg.amplitude = 0.751202993237;
    msg.duration = 50343U;
    msg.speed = 0.452089697702;
    msg.speed_units = 92U;
    msg.radius = 0.967935913922;
    msg.direction = 215U;
    msg.custom.assign("JTHZNBEOQLRFSXWSCSRMVNSYDGMRKMIEWIDOIAXSYNGDKFZRVSCOBQXRHESSALWLXEMEWPUANCZSLNVXVQUMZZWGBKSPVOGJPPTEGZWFPYGBOZBNJZLMICYZB");

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
    msg.setTimeStamp(0.864154748737);
    msg.setSource(37998U);
    msg.setSourceEntity(164U);
    msg.setDestination(25774U);
    msg.setDestinationEntity(159U);
    msg.timeout = 50977U;
    msg.lat = 0.324082353427;
    msg.lon = 0.692665074426;
    msg.z = 0.876702530552;
    msg.z_units = 195U;
    msg.pitch = 0.950867826681;
    msg.amplitude = 0.759472903009;
    msg.duration = 10660U;
    msg.speed = 0.286202808093;
    msg.speed_units = 114U;
    msg.radius = 0.935135404592;
    msg.direction = 174U;
    msg.custom.assign("GFUNHYJCVFXPUBHBSJRRAZTVDPSVPKBHOYJWEVDGBLFLCGGHNLMIUGANXTAOVXMQIHIMLWGWDGOWFNPPTUUHTCEVTX");

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
    msg.setTimeStamp(0.591679239725);
    msg.setSource(51091U);
    msg.setSourceEntity(85U);
    msg.setDestination(13310U);
    msg.setDestinationEntity(251U);
    msg.timeout = 42103U;
    msg.lat = 0.0140451448488;
    msg.lon = 0.294213191485;
    msg.z = 0.725763254047;
    msg.z_units = 252U;
    msg.pitch = 0.970573286315;
    msg.amplitude = 0.967565328585;
    msg.duration = 31916U;
    msg.speed = 0.140124264071;
    msg.speed_units = 121U;
    msg.radius = 0.229055060355;
    msg.direction = 60U;
    msg.custom.assign("KOPMYAQEKQTBUPOKVOMFFXFAYVTBPZFIVEVEIUROFFEAYZCJMXFTEIPSLIACXLTGUSPJHCNAIVPXTEOXUNRBRINDVNBVHKNEHZWQCQUPAKDDTKYBOLUHMNDRUNLPGZL");

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
    msg.setTimeStamp(0.196617907973);
    msg.setSource(4720U);
    msg.setSourceEntity(174U);
    msg.setDestination(3551U);
    msg.setDestinationEntity(130U);
    msg.formation_name.assign("KCGHFIJJSBGWZSSKJZVBFVJYUENDTSQLBGFYXPEALPLUBJGNBKV");
    msg.reference_frame = 81U;
    msg.custom.assign("ENQRJWQGLTJOQZPYJMBXWKWEBVJRGSFVRSHJALLLZADZGVYBIFFBFIIGFUMZNUUPUHIXDRTSJAXGEILSAUWSWMZVLDWDKIVIPOCSISCNMMHNECYBSNXCOOWYRKFOLMPKYWTRNFTFVUMSHONVAUNKTAUCWVDOCQBZYTHALYMSQTB");

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
    msg.setTimeStamp(0.991425380716);
    msg.setSource(53936U);
    msg.setSourceEntity(22U);
    msg.setDestination(3160U);
    msg.setDestinationEntity(213U);
    msg.formation_name.assign("EANIJZRUBPBANMBMWOGPQDPUPDATOQFKLRPXGYZT");
    msg.reference_frame = 54U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18410U;
    tmp_msg_0.off_x = 0.2826398983;
    tmp_msg_0.off_y = 0.699401998769;
    tmp_msg_0.off_z = 0.791438923794;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UUGNAHQSKKEJRWIXFUOVLFYSMZYNBVYCZRBQDAMUFABKNKHOCETCTDVFOTHTTRZNJGLIBMANQMPDQIJPVSTIALXEBHSORGDCJPSLWGLDENXMBAPIDXTGPLEIOIZYHSBXQMTREMKNCMSJHXNVSXYPQJ");

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
    msg.setTimeStamp(0.655610557734);
    msg.setSource(8847U);
    msg.setSourceEntity(153U);
    msg.setDestination(53718U);
    msg.setDestinationEntity(130U);
    msg.formation_name.assign("MJBKBQZJNLCCQDLNPXCUIYHNETX");
    msg.reference_frame = 174U;
    msg.custom.assign("LOYXKVECQUFOUADLKNUJGXMADSKVGFDZEALBVQMRKKHUMDNSAHBBWPMSHWXELMBLHUTZFPFKYNRNNYOOPCSFYAPTLBOUCGSBNZSKFQECRUOXYCEIFVWYCGJMGQQESZGFNEJZHTDGVCDXSQWMDTELPQTIIGICARXOKBZ");

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
    msg.setTimeStamp(0.414987824836);
    msg.setSource(60746U);
    msg.setSourceEntity(57U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("DQKXKFZBPAOUFVLEHOSCWNKHTWOUSFYQVBEBIJJCDLUBADPJJBIDUNEGGFAOYYVDINRGELJMCANMOTUERCBCKYTGKOWBZYGFULJIOYPMUHAHVIIASORJRWQVZPMQSZQZQEWBDPNNGTFZGYCHHGEWFWCKXANFQMMLTVUHEZMZRNPTIOWCEKVRN");
    msg.formation_name.assign("WWWWLJSHKAANZKAZKPYXEDGTDCBNYNOBIBFSYFPNEHULOTZURVJTTZTDVJSNWTCJVLAAJMPLIIEMXQYQGWESXQCEPHMHYMHUPCYVNQBUBUTZYDBCLOKTOGVKJFKRUIGQSRRTWFPSZLKN");
    msg.plan_id.assign("USAVXXZGDZZSJAFCAKLRZYYTADPZYDHBBWQWRBQSXJOIGCTLKGEWYDMRPWBROTEECNRTKRVHOVFOQJHLATYMSXKUAPMVPWMEIUBKBKQNTRBP");
    msg.description.assign("JQHPPKERQCGWNDEQYPNBUHCRWVENALWMLKDAGQFXUEUJYRHFKAOCURYCYLDMFVJRL");
    msg.leader_speed = 0.00151996350482;
    msg.leader_bank_lim = 0.582548260502;
    msg.pos_sim_err_lim = 0.744781576491;
    msg.pos_sim_err_wrn = 0.878989637056;
    msg.pos_sim_err_timeout = 17146U;
    msg.converg_max = 0.422513275158;
    msg.converg_timeout = 18744U;
    msg.comms_timeout = 47774U;
    msg.turb_lim = 0.38632903657;
    msg.custom.assign("QATMDRVGIDWWKPWJBQWOIDKPABBTQJREUARSUKLZOYCZSYRCKKRXIUIOTUGBSNNLTGHTECDRDMZADYCEJFCFZJNYJOWJTUHWLEOVOBZCKJM");

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
    msg.setTimeStamp(0.29774527855);
    msg.setSource(21061U);
    msg.setSourceEntity(142U);
    msg.setDestination(9339U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("WFKVCZNLSRFIXRUUZTWPHJMDDCCSYYZJTKRMQIPAVUUBTJEBZPYRWQBOHESGVKIFYUJTGZCGKMHXCNZRGJIFVVCGDHIQEIJFRMNQ");
    msg.formation_name.assign("DTKZUPKFWXMVTEZJJIMUYYKAIRGKYNFSTDXPCAMEWVLBKIVXULXOUSYELFV");
    msg.plan_id.assign("IPHIYEAVIWWCQVRRDLSEZLRCWZLWNOBNQDNBKKKUUURZAXXIFAPVBHJFUSJYRYCWKWWLVZNSOTMPGLTSEOVDFPBKYQQNYIMROTKMJUYFQOBEPUFKTPJAISVYURGFPVSCMTRLBNJKGENSTDIORYUUAXTJETLZZGGTMVYXXBDKTFVZJSLJNAMWWEZJCPDIBQMFIOHWJGXPYOSLHHHDMGXFSXLCOEAAAGZ");
    msg.description.assign("PPGBBZJECLCYXXNHWYCFQJBACBKBMUMPZTQNZHZHMTKGOIYIEPUCZSKZBHMVEZXGKKXMYPFRNUAEXRLAJESLQDABEIVUSVYSMQSDALSAGENHIGWUTYAINKOLQVBXHJYKPODROZMURHTDJHXEKVVQLVUCFFLJJTFFOVWXLCAWWURCPNQQMCEAJYQWMPBOIKCRHIDDFALUTGSTNNYSXORBIXLNGQWDMETNWSUFGTVRVZHPYK");
    msg.leader_speed = 0.143839814251;
    msg.leader_bank_lim = 0.970790675575;
    msg.pos_sim_err_lim = 0.230326848924;
    msg.pos_sim_err_wrn = 0.61327621329;
    msg.pos_sim_err_timeout = 30710U;
    msg.converg_max = 0.29331740505;
    msg.converg_timeout = 50808U;
    msg.comms_timeout = 33502U;
    msg.turb_lim = 0.0354801143457;
    msg.custom.assign("VHMVPWITPSXZ");

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
    msg.setTimeStamp(0.891295974003);
    msg.setSource(42892U);
    msg.setSourceEntity(61U);
    msg.setDestination(17240U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("OJHGIYLMZKKTAAXPGUJPHTOCURGVUXQCPNLYNUFTEJRAMJDFSWQRNROWQYBYOHOJAWZYMBKDKBKKRAZVCQTBDWWIQGSYPWLVHFYGILGUNSBVSPTKJSWWFMNBREGDDGEXXECCFGPLMZNBADUIMXQTXVMUSGPJNBCJERFQPEUFCSPWZXDQHETXLIUJQSONBOLIEZZCTIHMVFBYVLPAIOIRDHLJXHZSEWQINSXFCNODAVUOTVARHKMFKZVDRL");
    msg.formation_name.assign("OKIZDVCRNMILUKUKUMXYHFAYSASCHLGFLBKQVTZLPQFWERMHTKSCGPBXMUVUDOUDBHDLVA");
    msg.plan_id.assign("XITPLQOWSIXUKDYYADVHZYVBHQLRQTVENGQNIGGIATAWSBVCGRGAHLMXQIJXMGWZCSXZEFKMJXHNBEBDBSJQCFLRWSHLCQTP");
    msg.description.assign("HOIJLPZKEHPONHCITUJAKBEMNSIIEXQUCLACHYGZQQDNQBCAAQHMFRBALETXJPCBXDNUBCUUMWVFHYDXLYXHGYSGOFERYLMRKYOJPDPSMLNUBNZSWDSRFLKWNVGUTPRQMKWPVCUMTLZTDBDHVKXXICLROBASROPKAJOPWBSIJZZRKMIQDEHAAQGTVBUFWGJSC");
    msg.leader_speed = 0.0953549135497;
    msg.leader_bank_lim = 0.858030266845;
    msg.pos_sim_err_lim = 0.169243700347;
    msg.pos_sim_err_wrn = 0.226062125221;
    msg.pos_sim_err_timeout = 35997U;
    msg.converg_max = 0.222287389761;
    msg.converg_timeout = 48987U;
    msg.comms_timeout = 17030U;
    msg.turb_lim = 0.204235517466;
    msg.custom.assign("FKTOWGPXGSKHJEIGWHZNABPPYJENXEUBXOXOSLDALCZTMYMRZHNPUQYIFHOXHWAHKJQXWQQIPTCNNMILEDTRZUSZYYKIPVBVEKSEJLRIHGSBZTAARRJDGUPZWSUMXXQTYTVJMCVLNDYRGCZOBKDUVOLQQALTGYFJIHRWJPVKWZDVULLBCXOWNFFGQVTAGDDRHEW");

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
    msg.setTimeStamp(0.683725999742);
    msg.setSource(42768U);
    msg.setSourceEntity(186U);
    msg.setDestination(56384U);
    msg.setDestinationEntity(69U);
    msg.control_src = 42365U;
    msg.control_ent = 207U;
    msg.timeout = 0.218644389833;
    msg.loiter_radius = 0.60538844548;
    msg.altitude_interval = 0.276453436419;

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
    msg.setTimeStamp(0.994411249074);
    msg.setSource(17630U);
    msg.setSourceEntity(231U);
    msg.setDestination(43356U);
    msg.setDestinationEntity(87U);
    msg.control_src = 17164U;
    msg.control_ent = 171U;
    msg.timeout = 0.0544228680216;
    msg.loiter_radius = 0.699597001083;
    msg.altitude_interval = 0.0444422575878;

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
    msg.setTimeStamp(0.0662172243409);
    msg.setSource(25897U);
    msg.setSourceEntity(0U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(214U);
    msg.control_src = 11822U;
    msg.control_ent = 247U;
    msg.timeout = 0.0201095241324;
    msg.loiter_radius = 0.0624464514826;
    msg.altitude_interval = 0.250157448635;

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
    msg.setTimeStamp(0.379108327333);
    msg.setSource(44552U);
    msg.setSourceEntity(33U);
    msg.setDestination(6912U);
    msg.setDestinationEntity(217U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.892555330117;
    tmp_msg_0.speed_units = 147U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.508758899589;
    tmp_msg_1.z_units = 85U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0389306303513;
    msg.lon = 0.306235378379;
    msg.radius = 0.434629575914;

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
    msg.setTimeStamp(0.235901536843);
    msg.setSource(31439U);
    msg.setSourceEntity(2U);
    msg.setDestination(14833U);
    msg.setDestinationEntity(30U);
    msg.flags = 207U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.379603866579;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.796471695323;
    tmp_msg_1.z_units = 217U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.265937761966;
    msg.lon = 0.499507873323;
    msg.radius = 0.923181583198;

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
    msg.setTimeStamp(0.534575078356);
    msg.setSource(17770U);
    msg.setSourceEntity(237U);
    msg.setDestination(28455U);
    msg.setDestinationEntity(161U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.729624029871;
    tmp_msg_0.speed_units = 5U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.161112375784;
    tmp_msg_1.z_units = 245U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.545388752484;
    msg.lon = 0.0907781231044;
    msg.radius = 0.00278192326119;

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
    msg.setTimeStamp(0.731398408564);
    msg.setSource(2559U);
    msg.setSourceEntity(55U);
    msg.setDestination(30489U);
    msg.setDestinationEntity(32U);
    msg.control_src = 64549U;
    msg.control_ent = 117U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.545151217392;
    tmp_tmp_msg_0_0.speed_units = 115U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.00183071596449;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.982781956532;
    tmp_msg_0.lon = 0.625030900214;
    tmp_msg_0.radius = 0.630664569057;
    msg.reference.set(tmp_msg_0);
    msg.state = 140U;
    msg.proximity = 226U;

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
    msg.setTimeStamp(0.383106694276);
    msg.setSource(44658U);
    msg.setSourceEntity(253U);
    msg.setDestination(11302U);
    msg.setDestinationEntity(220U);
    msg.control_src = 10756U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.651138821999;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.138035783177;
    tmp_tmp_msg_0_1.z_units = 221U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.49789893524;
    tmp_msg_0.lon = 0.058920056334;
    tmp_msg_0.radius = 0.638305055597;
    msg.reference.set(tmp_msg_0);
    msg.state = 182U;
    msg.proximity = 75U;

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
    msg.setTimeStamp(0.347430412958);
    msg.setSource(21816U);
    msg.setSourceEntity(163U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(61U);
    msg.control_src = 5629U;
    msg.control_ent = 214U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 121U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.736839193361;
    tmp_tmp_msg_0_0.speed_units = 143U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.725979125142;
    tmp_tmp_msg_0_1.z_units = 211U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.947080363686;
    tmp_msg_0.lon = 0.516140844589;
    tmp_msg_0.radius = 0.495071644504;
    msg.reference.set(tmp_msg_0);
    msg.state = 8U;
    msg.proximity = 191U;

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
    msg.setTimeStamp(0.996824465548);
    msg.setSource(48457U);
    msg.setSourceEntity(131U);
    msg.setDestination(3238U);
    msg.setDestinationEntity(58U);
    msg.ax_cmd = 0.852787501706;
    msg.ay_cmd = 0.739199152808;
    msg.az_cmd = 0.648868334433;
    msg.ax_des = 0.693731793635;
    msg.ay_des = 0.634860438367;
    msg.az_des = 0.866872209843;
    msg.virt_err_x = 0.605626050625;
    msg.virt_err_y = 0.187618672595;
    msg.virt_err_z = 0.732330854818;
    msg.surf_fdbk_x = 0.0480432188747;
    msg.surf_fdbk_y = 0.387580678714;
    msg.surf_fdbk_z = 0.55747070177;
    msg.surf_unkn_x = 0.196696775417;
    msg.surf_unkn_y = 0.878674355314;
    msg.surf_unkn_z = 0.956520667967;
    msg.ss_x = 0.901324874938;
    msg.ss_y = 0.846333973445;
    msg.ss_z = 0.105523845202;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KVMZWXKTIYOPLPDTVEHLGXJLVHRTPQJQNED");
    tmp_msg_0.dist = 0.953303770769;
    tmp_msg_0.err = 0.564690418355;
    tmp_msg_0.ctrl_imp = 0.991994527537;
    tmp_msg_0.rel_dir_x = 0.878021457795;
    tmp_msg_0.rel_dir_y = 0.732872390419;
    tmp_msg_0.rel_dir_z = 0.0541517374256;
    tmp_msg_0.err_x = 0.260793282235;
    tmp_msg_0.err_y = 0.510570861788;
    tmp_msg_0.err_z = 0.201034634228;
    tmp_msg_0.rf_err_x = 0.185027925919;
    tmp_msg_0.rf_err_y = 0.349333450794;
    tmp_msg_0.rf_err_z = 0.0179232992718;
    tmp_msg_0.rf_err_vx = 0.952559298723;
    tmp_msg_0.rf_err_vy = 0.0881138478975;
    tmp_msg_0.rf_err_vz = 0.569268015894;
    tmp_msg_0.ss_x = 0.559066783598;
    tmp_msg_0.ss_y = 0.244473676313;
    tmp_msg_0.ss_z = 0.65012324224;
    tmp_msg_0.virt_err_x = 0.391604082784;
    tmp_msg_0.virt_err_y = 0.53056134308;
    tmp_msg_0.virt_err_z = 0.691230398056;
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
    msg.setTimeStamp(0.171446360111);
    msg.setSource(47439U);
    msg.setSourceEntity(2U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(163U);
    msg.ax_cmd = 0.84866144218;
    msg.ay_cmd = 0.890014711598;
    msg.az_cmd = 0.483634395159;
    msg.ax_des = 0.826241214596;
    msg.ay_des = 0.556640656448;
    msg.az_des = 0.496394166805;
    msg.virt_err_x = 0.883619688128;
    msg.virt_err_y = 0.0157825624875;
    msg.virt_err_z = 0.979187319511;
    msg.surf_fdbk_x = 0.334070740637;
    msg.surf_fdbk_y = 0.511248281895;
    msg.surf_fdbk_z = 0.487483280704;
    msg.surf_unkn_x = 0.481123380286;
    msg.surf_unkn_y = 0.401288257237;
    msg.surf_unkn_z = 0.570357827166;
    msg.ss_x = 0.300659580289;
    msg.ss_y = 0.487625980772;
    msg.ss_z = 0.554313915603;

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
    msg.setTimeStamp(0.969625919621);
    msg.setSource(53854U);
    msg.setSourceEntity(204U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(111U);
    msg.ax_cmd = 0.50821409678;
    msg.ay_cmd = 0.465326975612;
    msg.az_cmd = 0.865214994032;
    msg.ax_des = 0.492402941447;
    msg.ay_des = 0.173696817407;
    msg.az_des = 0.849190857533;
    msg.virt_err_x = 0.321598958137;
    msg.virt_err_y = 0.3771302925;
    msg.virt_err_z = 0.137994813343;
    msg.surf_fdbk_x = 0.460396405466;
    msg.surf_fdbk_y = 0.688465559821;
    msg.surf_fdbk_z = 0.353232750788;
    msg.surf_unkn_x = 0.490487427026;
    msg.surf_unkn_y = 0.6195987243;
    msg.surf_unkn_z = 0.427283834932;
    msg.ss_x = 0.952566032609;
    msg.ss_y = 0.760204468032;
    msg.ss_z = 0.671567155976;

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
    msg.setTimeStamp(0.871556940791);
    msg.setSource(31665U);
    msg.setSourceEntity(84U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(90U);
    msg.s_id.assign("YDKHCFTBXOCIGRDHYWSIQWYOFSVURNWUCYMBPDHVUBJUIQO");
    msg.dist = 0.0699926570029;
    msg.err = 0.205596321996;
    msg.ctrl_imp = 0.339445257032;
    msg.rel_dir_x = 0.690898855787;
    msg.rel_dir_y = 0.400886763686;
    msg.rel_dir_z = 0.259856199759;
    msg.err_x = 0.607922303423;
    msg.err_y = 0.0320851711177;
    msg.err_z = 0.439296022107;
    msg.rf_err_x = 0.61107529431;
    msg.rf_err_y = 0.637921337425;
    msg.rf_err_z = 0.231049074468;
    msg.rf_err_vx = 0.969157649526;
    msg.rf_err_vy = 0.425194011765;
    msg.rf_err_vz = 0.614061804398;
    msg.ss_x = 0.387527170444;
    msg.ss_y = 0.697974558206;
    msg.ss_z = 0.87292953769;
    msg.virt_err_x = 0.432621230727;
    msg.virt_err_y = 0.13318765404;
    msg.virt_err_z = 0.753831948067;

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
    msg.setTimeStamp(0.276528499691);
    msg.setSource(20412U);
    msg.setSourceEntity(4U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(173U);
    msg.s_id.assign("NXAWPQXACGTHKIXNDRFWFPKVCUJUFIUOZHEMGHRNXUYWOFXXEMZOEMFFIMYQZUWHSAPNQGMKCLUNLTEOTLVQPSBOLEASUBONHWKLTHGTZFIRBWZPIG");
    msg.dist = 0.789997850053;
    msg.err = 0.78445045417;
    msg.ctrl_imp = 0.973393945945;
    msg.rel_dir_x = 0.226600709467;
    msg.rel_dir_y = 0.188854521515;
    msg.rel_dir_z = 0.170086424785;
    msg.err_x = 0.667171480821;
    msg.err_y = 0.356131699851;
    msg.err_z = 0.00219101138692;
    msg.rf_err_x = 0.995200123559;
    msg.rf_err_y = 0.695247854584;
    msg.rf_err_z = 0.639193676734;
    msg.rf_err_vx = 0.845848726338;
    msg.rf_err_vy = 0.642378195643;
    msg.rf_err_vz = 0.171584186391;
    msg.ss_x = 0.237015572745;
    msg.ss_y = 0.931440088482;
    msg.ss_z = 0.165490046275;
    msg.virt_err_x = 0.949812868565;
    msg.virt_err_y = 0.895415315746;
    msg.virt_err_z = 0.0770424807343;

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
    msg.setTimeStamp(0.776874347117);
    msg.setSource(40111U);
    msg.setSourceEntity(130U);
    msg.setDestination(8220U);
    msg.setDestinationEntity(212U);
    msg.s_id.assign("NBVNHUCMJMWBIHEGPFVIZVUTXJSFSCJKCUALJIVIGFWKSGQVAUHTYKSJTGLXLMJNSWFJPHATSACSFXEDBVHFJPTQMZYKU");
    msg.dist = 0.028134258135;
    msg.err = 0.350838236293;
    msg.ctrl_imp = 0.829661311562;
    msg.rel_dir_x = 0.641921042897;
    msg.rel_dir_y = 0.318349331642;
    msg.rel_dir_z = 0.664832304264;
    msg.err_x = 0.442995630928;
    msg.err_y = 0.754858283397;
    msg.err_z = 0.301955700802;
    msg.rf_err_x = 0.591870957324;
    msg.rf_err_y = 0.819795897675;
    msg.rf_err_z = 0.373621312657;
    msg.rf_err_vx = 0.0839206935098;
    msg.rf_err_vy = 0.909806372694;
    msg.rf_err_vz = 0.73674801161;
    msg.ss_x = 0.62851062876;
    msg.ss_y = 0.077265058;
    msg.ss_z = 0.508922632065;
    msg.virt_err_x = 0.741720388086;
    msg.virt_err_y = 0.832554889665;
    msg.virt_err_z = 0.76150062501;

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
    msg.setTimeStamp(0.0900748445564);
    msg.setSource(55218U);
    msg.setSourceEntity(224U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(213U);
    msg.timeout = 63309U;
    msg.rpm = 0.66695884244;
    msg.direction = 33U;
    msg.custom.assign("QODXTSFBFTKQURRQNWEOASERKDAGQMHLNNHZZNNRXRSCNXBHZYLKPLJIBFYSYIDGOSTDXBULJVHASYFRBCWVMVGTZWLCXLQFNTMUMRZODGOQAXJOCUEAIUXFULWVZRVBCHHNCDXAIWJEJDZPEEHQIMNSPUGQUTHFLTGYYGPOXPJGOKXBIDWTUFCPWIQZYHBSWKLI");

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
    msg.setTimeStamp(0.543567922116);
    msg.setSource(9489U);
    msg.setSourceEntity(90U);
    msg.setDestination(14687U);
    msg.setDestinationEntity(51U);
    msg.timeout = 8810U;
    msg.rpm = 0.425766575933;
    msg.direction = 30U;
    msg.custom.assign("ZUPDIISQWJYDTANDAGADVUVFOIILXSFPOTGIYCGGXMU");

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
    msg.setTimeStamp(0.864317776183);
    msg.setSource(47630U);
    msg.setSourceEntity(141U);
    msg.setDestination(62377U);
    msg.setDestinationEntity(77U);
    msg.timeout = 57564U;
    msg.rpm = 0.967959774869;
    msg.direction = 201U;
    msg.custom.assign("ZLUQVXSRDKXFFBTLQBFQIHGRUEAKDCPNBGJYBQTEHQRHLSMVTTXTMIKUUUZANYTSSYJBMXGPRIYFJHEOPOUWGAVQIADUZUOHTEPDELPNZCAIWWZPDNJNUEJZWYGIOBBVOKJVCVTOMZGMYUSGWIZVWVRVBFBEISHDZHFKLY");

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
    msg.setTimeStamp(0.79235629694);
    msg.setSource(12438U);
    msg.setSourceEntity(100U);
    msg.setDestination(5994U);
    msg.setDestinationEntity(223U);
    msg.formation_name.assign("UTFDWGLSAIVPQCZEXDDJKTQNZUQQESLMWVVTAAPYUODBZBFYRGQFGXMPPMIXZBBSITOODWSEMSNOGSRASBQRLQLUKJRHTW");
    msg.type = 148U;
    msg.op = 135U;
    msg.group_name.assign("PVXETIJGQBESHRRCIRGQAPLSKYDZNQK");
    msg.plan_id.assign("YIEXCJLRJUAEGTKFKLQWFCBPIXAOMOLLACNXROFUGNPUXXMOWBCGOLIHDGWAHRYQKVQDYIXISVEOCTTCZGAMTVBCZQSJWUALCYUNDEVBDEADYAKYVFFUFZQSKQSNDZCPWOKPJMBYRIXXFMZGSOXZPQHUHLWIYABORMMKZLSTPNJLFMHTVSBNGQVDSNMZEBFHQWZT");
    msg.description.assign("PGFLJYEJOZKRMKXSFKFYWGMTLFCPBUWUVMOVLKYBSTHMBVHEPJOEPDYHJIHBSYFDAVMFBARUKXRZLWKBKOMUIQAEFVWJGFIWJAMGGCICRZWLRAOCVQKXSNZDDQWQGEAIQEDTVMLAROCNMKNIGJIRNZODPHPJATDHYSHUNPWEYDGZNHCEISN");
    msg.reference_frame = 4U;
    msg.leader_bank_lim = 0.498963175598;
    msg.leader_speed_min = 0.312943573001;
    msg.leader_speed_max = 0.99914324467;
    msg.leader_alt_min = 0.194163934273;
    msg.leader_alt_max = 0.335515681507;
    msg.pos_sim_err_lim = 0.848939335534;
    msg.pos_sim_err_wrn = 0.329940115771;
    msg.pos_sim_err_timeout = 25708U;
    msg.converg_max = 0.586021015833;
    msg.converg_timeout = 60837U;
    msg.comms_timeout = 64628U;
    msg.turb_lim = 0.832232158216;
    msg.custom.assign("YSWMBAUTDDRJULGQCKAYFYDXALUOYLMIHMGXGKOVDZBSTTQLSDFXHSBKPHPUSTCNSFUPVRXIXEOQDJTIYZPPFQFLOAMHBVEWVGIYMXCBNQ");

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
    msg.setTimeStamp(0.855852955055);
    msg.setSource(52822U);
    msg.setSourceEntity(50U);
    msg.setDestination(5908U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("GPPZQANVJEFJCMUFBGYWDSUEZGYNWXVGKXWSEJYKRJXKKIDVIESXKESCPSNLSPQBJJNYQQKYBITRKHBCUAMHPCXWMMZDZBZLASMPOUODEXHCMXWOUOWMZQIBCLZHJIFARKMJBBPLFUHIQMOJNKVRSOVHDDGWZVANCCORALXRVUVOJFNTTTXLTDFGFOPDEWYGPTDLACYHWAGHTTTUYQZSLFQ");
    msg.type = 164U;
    msg.op = 211U;
    msg.group_name.assign("ORQWUYJOJSVIOMWHDYRBLUSSJEYYJHDPSNEWIWRFFEYTXKPMTZQHHAVV");
    msg.plan_id.assign("PKGAUKJSZM");
    msg.description.assign("VEZSRDJJPBZXNHGJCBKCAOATOVTKWXOONLZQSIMIXLLYCOQHFYIDFWUMLPUUPAAHGRASWYWUZUAMSDYTGLHVIDLPFASRROVSFIAOORCVWVEEMKBUQURSERMEKGNJCMSKJZQLGXQUPQZWIZXCVXYDCT");
    msg.reference_frame = 90U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29474U;
    tmp_msg_0.off_x = 0.598806564055;
    tmp_msg_0.off_y = 0.282040179287;
    tmp_msg_0.off_z = 0.974175478204;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.730730312916;
    msg.leader_speed_min = 0.503330542427;
    msg.leader_speed_max = 0.641245398884;
    msg.leader_alt_min = 0.0666874297521;
    msg.leader_alt_max = 0.570959760215;
    msg.pos_sim_err_lim = 0.0110912378169;
    msg.pos_sim_err_wrn = 0.221676392064;
    msg.pos_sim_err_timeout = 37370U;
    msg.converg_max = 0.84583443613;
    msg.converg_timeout = 53181U;
    msg.comms_timeout = 34637U;
    msg.turb_lim = 0.383523867561;
    msg.custom.assign("FZIOFMQYQEZOIEGJHYKHNKFVLQJRPPNEWGYCHFFDTBFSWNVDASUHRSWABAVCYHRAYPEOZSGOWIWOMTNCYUGTCXLGUGIRSMTWIDHJRSGWBNXUXQEJKXIHBXPAVCTAZKMVLBJQZTOQNABDDPQPAZUZDLUELTLVJRMMOERDDUAXTCCISVWBPEABOXKMR");

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
    msg.setTimeStamp(0.639330256273);
    msg.setSource(6789U);
    msg.setSourceEntity(196U);
    msg.setDestination(14824U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("VNHAHRGCTTYMGAPMYVMWCNUXXAVSXBEQJTTRCSYPHLUOBANRRMVACFIFMKKDYMPBOUEZYJGCWZFLUYYGWLQERSDEQGFZMAKJQP");
    msg.type = 62U;
    msg.op = 239U;
    msg.group_name.assign("ULSENDSIJLWOWGPYKSPUKREEYZYUVMJQQPQMFLVHHBNZULBGRIPZMBDSUBJFOQHBITSPMGHRWZFAZGICGALICQJKASSRHNNJSVUDUEAQXTXWZAFFAVTBBHRPVDPGCJOVYTVNTZDXALQNUUXXLWWGVMTQRMCCIKDLPRYMYAJRUTRBPLOYKAVQFDFARZLWSOIEKVECXKTEIOQHGHMGTHGZIXENXOFJMDMYNNIOCBSJJ");
    msg.plan_id.assign("DAVJABRQDJCHRWWILAAFZYGSZSBABNIUHKZTCQORTZYURXSOMEPEWVBCVRMFGCIDSGJVVHPTG");
    msg.description.assign("IREKTNWJCDHFYZPDOYIYJUDTQLXOQKDHYPOXUSIAZ");
    msg.reference_frame = 48U;
    msg.leader_bank_lim = 0.515858129815;
    msg.leader_speed_min = 0.565102183675;
    msg.leader_speed_max = 0.0687753671561;
    msg.leader_alt_min = 0.608675746621;
    msg.leader_alt_max = 0.740870439312;
    msg.pos_sim_err_lim = 0.876060569218;
    msg.pos_sim_err_wrn = 0.812111916633;
    msg.pos_sim_err_timeout = 21796U;
    msg.converg_max = 0.286148206917;
    msg.converg_timeout = 43804U;
    msg.comms_timeout = 14570U;
    msg.turb_lim = 0.129277546431;
    msg.custom.assign("DBMFEYPKSWNWSJAOYJKCLCBURMVAEEQSTSFKECROJTUIGIOVNOYWPQDLLKTOHARKBXLJPDBBQHHLUFKXRSKRBFLDLGOFYKEEQMWICKYIPAWFGAFFHSRXSWLQGNVWSVNGNLMDMZDUJKOCZYUCZXGDAXVYINHYHFJHARGEPHQMUCIDZJRZTNMNFOQAXBPGICPTB");

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
    msg.setTimeStamp(0.591230405348);
    msg.setSource(15449U);
    msg.setSourceEntity(34U);
    msg.setDestination(15382U);
    msg.setDestinationEntity(244U);
    msg.timeout = 7172U;
    msg.lat = 0.44590792548;
    msg.lon = 0.105434749275;
    msg.z = 0.0186964955498;
    msg.z_units = 197U;
    msg.speed = 0.177143361606;
    msg.speed_units = 159U;
    msg.custom.assign("MZNJGJWESIGKIOZTUVJGLKNNWAUDEBHFPONEJPJTMKVYEPKFHLXFVQSTGKPTFLOAMKWEOPGAQVJCOWCHIGULSPNGENFEHRUBHLNDPAWYRRHWYBSJYILCMRDRJHCNVQXIEXUSQQXPRQCROICXZEDZSAIMZKDBZTDYYIBAYIRRVOGCDYCOZDCXTTXWBLFTVMMOAUASFGNXBDTFLZKVMHAQPFPWDJZSLSQXEZ");

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
    msg.setTimeStamp(0.430167962364);
    msg.setSource(55470U);
    msg.setSourceEntity(53U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(100U);
    msg.timeout = 14333U;
    msg.lat = 0.365841111434;
    msg.lon = 0.01392937468;
    msg.z = 0.616813912616;
    msg.z_units = 8U;
    msg.speed = 0.14410885686;
    msg.speed_units = 60U;
    msg.custom.assign("AOBKRYIARDPIAHJRLUGMBJMDKPAXNCUULVNGZWUGEXDDQXXCLQSPYSZNJVRPQEIITYFHPJXTIEKFWOQYXFTIFGYRDQMZKV");

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
    msg.setTimeStamp(0.332509205748);
    msg.setSource(14562U);
    msg.setSourceEntity(29U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(235U);
    msg.timeout = 2968U;
    msg.lat = 0.214942312308;
    msg.lon = 0.600656363897;
    msg.z = 0.585171265313;
    msg.z_units = 214U;
    msg.speed = 0.291500117192;
    msg.speed_units = 200U;
    msg.custom.assign("AMTCBWZHZLAEYVPTKTGHFLUPCSPFDTRZVZHCGILXPQBYQJOAPSGKCQRKCWJRXNYIMTGQDPAAUBAOXIOOJIVRZVUAKGEN");

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
    msg.setTimeStamp(0.325069711751);
    msg.setSource(19779U);
    msg.setSourceEntity(114U);
    msg.setDestination(64492U);
    msg.setDestinationEntity(163U);
    msg.timeout = 8741U;
    msg.lat = 0.718961581434;
    msg.lon = 0.23222712382;
    msg.z = 0.144471251541;
    msg.z_units = 80U;
    msg.speed = 0.138540267949;
    msg.speed_units = 15U;
    msg.custom.assign("PMRZMTFCBRYSCGEYKYRBVSNWNMYHRJRVWVPFIMYSUSLLKXZWLJMSEQPEIDTUWIQKIWRVCLDZPGRHLCJVINQCMWXMQSJXRDEWDIDUYZJYWGTMLPDXRFODHKHKOTIEOGMBTAQFPGEOAVWBSZZQCSVHBXZAOAWTKMJPGBLVEI");

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
    msg.setTimeStamp(0.465682421663);
    msg.setSource(9223U);
    msg.setSourceEntity(103U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(210U);
    msg.timeout = 45282U;
    msg.lat = 0.854838881229;
    msg.lon = 0.869172502738;
    msg.z = 0.143292947334;
    msg.z_units = 67U;
    msg.speed = 0.91540975982;
    msg.speed_units = 51U;
    msg.custom.assign("MKYPUXYEJHTBHMFEIFPHOHXSTGONQRHPAHFWNPMLZINTJMSXOOKHGKM");

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
    msg.setTimeStamp(0.239482784339);
    msg.setSource(51325U);
    msg.setSourceEntity(63U);
    msg.setDestination(63110U);
    msg.setDestinationEntity(216U);
    msg.timeout = 37344U;
    msg.lat = 0.498501516064;
    msg.lon = 0.207636204642;
    msg.z = 0.921426583643;
    msg.z_units = 15U;
    msg.speed = 0.626710447211;
    msg.speed_units = 157U;
    msg.custom.assign("GBHMOXBZNAENUXRRCSRLGBJGDVZQSIQHBJYOFDEKUIGSZGCHLWODWKWZIWDZBIEFSADPQEYODCCQMNUZHQSXFTVIXWRWLOHFJLDTMP");

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
    msg.setTimeStamp(0.868886698246);
    msg.setSource(28285U);
    msg.setSourceEntity(59U);
    msg.setDestination(42385U);
    msg.setDestinationEntity(76U);
    msg.arrival_time = 0.228513331172;
    msg.lat = 0.434437445837;
    msg.lon = 0.749353916091;
    msg.z = 0.0184580676683;
    msg.z_units = 151U;
    msg.travel_z = 0.20549674764;
    msg.travel_z_units = 21U;
    msg.delayed = 49U;

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
    msg.setTimeStamp(0.121613572502);
    msg.setSource(51032U);
    msg.setSourceEntity(136U);
    msg.setDestination(60193U);
    msg.setDestinationEntity(173U);
    msg.arrival_time = 0.462011015551;
    msg.lat = 0.442135737179;
    msg.lon = 0.75998039315;
    msg.z = 0.444527771614;
    msg.z_units = 31U;
    msg.travel_z = 0.784544491399;
    msg.travel_z_units = 209U;
    msg.delayed = 60U;

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
    msg.setTimeStamp(0.11543478797);
    msg.setSource(57126U);
    msg.setSourceEntity(162U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(237U);
    msg.arrival_time = 0.741045723354;
    msg.lat = 0.974606508549;
    msg.lon = 0.315480221688;
    msg.z = 0.314043006948;
    msg.z_units = 68U;
    msg.travel_z = 0.97069675811;
    msg.travel_z_units = 218U;
    msg.delayed = 84U;

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
    msg.setTimeStamp(0.0485948638685);
    msg.setSource(13919U);
    msg.setSourceEntity(46U);
    msg.setDestination(38215U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.855975094028;
    msg.lon = 0.740686863212;
    msg.z = 0.387144275128;
    msg.z_units = 112U;
    msg.speed = 0.403850252342;
    msg.speed_units = 194U;
    msg.bearing = 0.639234691629;
    msg.cross_angle = 0.919287946701;
    msg.width = 0.119345204464;
    msg.length = 0.108687207243;
    msg.coff = 14U;
    msg.angaperture = 0.368658402532;
    msg.range = 33210U;
    msg.overlap = 188U;
    msg.flags = 244U;
    msg.custom.assign("APLQJTFXXNEIQDPBSLOTWKVDRES");

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
    msg.setTimeStamp(0.110796540968);
    msg.setSource(47743U);
    msg.setSourceEntity(248U);
    msg.setDestination(28452U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.741929902109;
    msg.lon = 0.456803650655;
    msg.z = 0.317855123993;
    msg.z_units = 112U;
    msg.speed = 0.0620809875952;
    msg.speed_units = 232U;
    msg.bearing = 0.611708397398;
    msg.cross_angle = 0.841420656606;
    msg.width = 0.817307579076;
    msg.length = 0.364224634727;
    msg.coff = 231U;
    msg.angaperture = 0.216022120788;
    msg.range = 56848U;
    msg.overlap = 253U;
    msg.flags = 47U;
    msg.custom.assign("ISAVOGMWKXZNUEBEHZYXXWJXDJOUDGDWAFLPCRSEIHYHBBMLTCKZTJRABJMNVIDPTPQVFBFTNDOPTXPRFNMQOSGNCJXKBJWDGTYOGPBHKIZQGHYGAHWZXREDIZAAECBXVNJOYQLSNQGUFOZTAQFRCIAKOEBCDWREVRVFKLTCLZSXLJJYSFPFEAWZVXNKYZYUOYHHRICHSQYUFNUMMKIRDPBEMULTIPLGCSDJUVGLQMHW");

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
    msg.setTimeStamp(0.12471751046);
    msg.setSource(51209U);
    msg.setSourceEntity(44U);
    msg.setDestination(29222U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.859850018933;
    msg.lon = 0.692821139167;
    msg.z = 0.420650281399;
    msg.z_units = 33U;
    msg.speed = 0.0307921599406;
    msg.speed_units = 172U;
    msg.bearing = 0.0805200896964;
    msg.cross_angle = 0.41212522438;
    msg.width = 0.432719421407;
    msg.length = 0.389560452922;
    msg.coff = 212U;
    msg.angaperture = 0.579789676623;
    msg.range = 22494U;
    msg.overlap = 162U;
    msg.flags = 249U;
    msg.custom.assign("WRREGFGPCAQOOSAQSUSTPXFDIIHOYGDSUCHZEEXPFMMLYBMJPKVYUTGFRQXJWQKDVDWIATLUHEYVRCSQANJVUPJWVTCHQUAZBUYXLBTIATHIJLHLWXDWZSKARHYXDJYZHVRSBGIAMKDAMPXZOKNIGNUVLGOONWQWNRFPPDIXCSEODSKMEEEGNPNQFREUBSHMMBDPCQNLWGLZFLFROFWGCNTYVKJY");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.769263242546);
    msg.setSource(1797U);
    msg.setSourceEntity(196U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(203U);
    msg.op_mode = 71U;
    msg.error_count = 74U;
    msg.error_ents.assign("XFPWTGOZVWFGWLCNVNGNBTVABDWZYSITEYCCUKXARDXYGRFJPPKTQORUVVXMILHYBEYWMMTSK");
    msg.maneuver_type = 48444U;
    msg.maneuver_stime = 0.249886397451;
    msg.maneuver_eta = 9194U;
    msg.control_loops = 2440676092U;
    msg.flags = 87U;
    msg.last_error.assign("WBQBUEPFLKVNEESGQNBGSOLARWXUUDUJYKXHDACXLWENPRDRTVWGBHDFJJAQJVJLKBLSOIILEPLUZCFJMCVQVIZBTFQCIGYTCWVFKFXBWOEOGGDWHCAWVT");
    msg.last_error_time = 0.75655449025;

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
    msg.setTimeStamp(0.412846877073);
    msg.setSource(27300U);
    msg.setSourceEntity(157U);
    msg.setDestination(54615U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 100U;
    msg.error_count = 94U;
    msg.error_ents.assign("YZMSDULPNDTXTNSPQAXDUFFHYWLEDWPFIGGLKZHOQYKXBVRVUJARXNJHFTXKJLDCCPXOGNSPYMNMZRBUOORBANFIAWPQMBXCBGHIHSBJUDBPJLUZVBRGAWMHBFWNWIMRRXEXETDIEQWJIJKSAOSVECHRILGFPTFDLULVAWRTDZKTAKAIDOQMJTSEHSNCIFCSYMRJVOTGUVOECU");
    msg.maneuver_type = 9382U;
    msg.maneuver_stime = 0.185535619463;
    msg.maneuver_eta = 2270U;
    msg.control_loops = 3239923033U;
    msg.flags = 74U;
    msg.last_error.assign("MJEUVHCPQDQDIWUGRXXCPVFMYZMQFLAFVXOFIXOMGIDWUUWPAJWKPUMNKFKCCEGJSYEYRAZRBVXIMICJCATJAHTLSFKDJMDJKGTALWOEGWQVZALAQRNKNSYRKZPUHQFSEVTYLZLZGOVPRVDEPHVXUTBHNRHCTUXCNEJIGOWOBWAOSLIRDKBYRSJHAGGSBNQGEINITZNCTOYKEQUOZYBPTYUFRXMQQDKVLDYPFBNOEWWSMSPDCZJHMIBSBHTHBL");
    msg.last_error_time = 0.59572562211;

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
    msg.setTimeStamp(0.213587566295);
    msg.setSource(41876U);
    msg.setSourceEntity(106U);
    msg.setDestination(11862U);
    msg.setDestinationEntity(114U);
    msg.op_mode = 1U;
    msg.error_count = 64U;
    msg.error_ents.assign("IOCAYSKBUVPKFQCZUWTWDQEQLMIDPLANNRXDQXSTNHJCTSZPFOJGATJSNGWOPBFVVSVKEEAWZSDKPHNKCNPBPTKZVZLDMVYFBHEHAYWYBKUOJDWEIZQEMXXMA");
    msg.maneuver_type = 3724U;
    msg.maneuver_stime = 0.910870356389;
    msg.maneuver_eta = 60311U;
    msg.control_loops = 3251943504U;
    msg.flags = 32U;
    msg.last_error.assign("UTEDEPSJOOKWGWBEOVMRNYJZOURLBFPUYXEA");
    msg.last_error_time = 0.167540704451;

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
    msg.setTimeStamp(0.846124532424);
    msg.setSource(40255U);
    msg.setSourceEntity(193U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(213U);
    msg.type = 130U;
    msg.request_id = 49074U;
    msg.command = 110U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 40187U;
    tmp_msg_0.lat = 0.717850932277;
    tmp_msg_0.lon = 0.465119288151;
    tmp_msg_0.z = 0.0818160910699;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.speed = 0.273119536857;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.custom.assign("DKWGQCGIHNHRZDZROIN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27914U;
    msg.info.assign("STPEWLFPPNZIBRSMZSYSLBXGWKUZHEFPDCRYBFQHJAGKGMEYQOKZZDPNLUSBAWIRLITDFDTFRCGNPQUHUEWEOCGLGXFSOHNWLNWMJEXYZLAAJVYIKTUUNQVSHKDYKKUIQIEUXAVFVNEMJNDMWCABBKQGXVRUQHAOQOIHDXYRIQNJWJMDJYQWCVXPLREZBRVZTXJRBOHRKCGIGOOTITAAVWFPSFDYGCJZFVNSDMXAVLBZCPOTM");

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
    msg.setTimeStamp(0.667007186127);
    msg.setSource(58089U);
    msg.setSourceEntity(81U);
    msg.setDestination(49739U);
    msg.setDestinationEntity(236U);
    msg.type = 117U;
    msg.request_id = 63205U;
    msg.command = 49U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.409369614804;
    tmp_msg_0.lon = 0.717708268999;
    tmp_msg_0.z = 0.81869306888;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.998338693779;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.start_time = 0.204625519316;
    tmp_msg_0.custom.assign("KGLVHJNIBJVRYAQFTJQGIKOFJOKYATSFZGKPMNSCUOPIALCVFUZQESCSNMNMXJVLQRVMLCFXTBOJWJZYFPGJWPKFGNXDDCGPSSANYFEORLEYEYOBODWLGHCUBJPKTADYDPURTZAAOREEEXXXWESRHBQTMVTDYLVZDONBEFUSQBZIZMIQXWHQMXWHCICZTZPYNUUIMNWTKLMPEHFWANLUKOULCDWHI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59137U;
    msg.info.assign("BFWWXQEGMYBBORVKEQWIIARNPZGJCOKEHJLVYQXWYCNBVFFUYZNIYLPCJX");

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
    msg.setTimeStamp(0.721387755555);
    msg.setSource(18961U);
    msg.setSourceEntity(197U);
    msg.setDestination(31145U);
    msg.setDestinationEntity(82U);
    msg.type = 206U;
    msg.request_id = 55595U;
    msg.command = 246U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 12553U;
    tmp_msg_0.lat = 0.0896333674102;
    tmp_msg_0.lon = 0.946261238497;
    tmp_msg_0.z = 0.701348719472;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.duration = 34584U;
    tmp_msg_0.speed = 0.217573080769;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.type = 2U;
    tmp_msg_0.radius = 0.699024303358;
    tmp_msg_0.length = 0.101266511051;
    tmp_msg_0.bearing = 0.486626750329;
    tmp_msg_0.direction = 66U;
    tmp_msg_0.custom.assign("ROAPWZWUWZTDOCWRJMKSMSCJCBCZPKBVTAAQXWGSIOEEZLFHYILIPQBHGHGTEQTFRKHEWUBGZVAW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27743U;
    msg.info.assign("VNLDPIQNXSTOLFMWUDQYKPUJGTEDTTCIQMXRAEHCZRHHDISIEFSWXRGIKNHDCEVDARMNQGVOHICKUDOUVXGQXZEYPYJAXZSKUSFKRZLGOSMYCXFMBTBJMPVFZ");

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
    msg.setTimeStamp(0.750557144129);
    msg.setSource(38472U);
    msg.setSourceEntity(86U);
    msg.setDestination(39433U);
    msg.setDestinationEntity(8U);
    msg.command = 18U;
    msg.entities.assign("GWKPRVGAXJDCZSXOWJPBITVRORQHUMCDKJFNUFIWFQXBHY");

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
    msg.setTimeStamp(0.734967688281);
    msg.setSource(37012U);
    msg.setSourceEntity(12U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(78U);
    msg.command = 80U;
    msg.entities.assign("XSNKFGZJJLXPBADMHHIZGKOKKIYNBAMFQ");

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
    msg.setTimeStamp(0.813587373536);
    msg.setSource(5354U);
    msg.setSourceEntity(99U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(134U);
    msg.command = 135U;
    msg.entities.assign("JBMXEQYMKDOWIIIHVAPYYPBFJRCRKUGYWLKWOGKQZLTQNEFX");

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
    msg.setTimeStamp(0.49779661352);
    msg.setSource(65192U);
    msg.setSourceEntity(175U);
    msg.setDestination(12114U);
    msg.setDestinationEntity(72U);
    msg.mcount = 127U;
    msg.mnames.assign("OLVZVCNACOGSALYBEFSEDDRAHVNRJUMTRIOYQWUOZJVXLUFBQXBFMPORLKEEHOAIZHTRBIASGUXHJZCBTXHEKBNGQKGOQMAJFFLTVTFGQRTXDJWUMPQAAPNQYZDOSZPXYUKOJWEARKZFFSPEGWNPUCBDGTTXWCIDJUZQYVKIMDDHLHVWCLDELXVTPYPO");
    msg.ecount = 148U;
    msg.enames.assign("ADIFPXHURRIUPJXWRSFKKMBDBKMIOYPYYSQCYEALNVTCSKOAFZIEVOWKTRLSKQAZPFCRJHGVWXHFXRZNZVUYMUAOHM");
    msg.ccount = 41U;
    msg.cnames.assign("XGDKVVIMPNHYFZKDPJJXARTXPUDMSEMJPFPDIPSLRIOOYLNIBOXETMZLWZFEKVDCGUDALOIFMIWVJVUKLACELYHSQYZFXRVGSNRDTOQTONMQEKCOGRJKAFSABJGHQCKFYPDLZS");
    msg.last_error.assign("MXEPXITNBJRODRNNYCEEDCVLJPUSALZASQTMGXDETNZUPWOYTAXMTFVPSKBCNIBIKZKNTWXFBOHPSXTJELYUGUQQGOLWQVHPSJGWCBVYBMLFBTDTDCLVZQKXDJQOUIMWEPZUAXMHIQWQSZESJIQHVHYUUROWRBMIAAFDGFKRDWUMYGAZOJAWNMRGRSOKCSHZLHLYCSGPRENBVIFYFLVXKCFVVFHDRCYJZBKOWPIZRCKKXHGFAQP");
    msg.last_error_time = 0.150713946298;

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
    msg.setTimeStamp(0.405498779424);
    msg.setSource(5856U);
    msg.setSourceEntity(19U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(86U);
    msg.mcount = 68U;
    msg.mnames.assign("LPQEZIILWGDJUFXGSZRTQHHSIGEEFXVAKMNJCBQEUMOIBAXMAZOAMXVO");
    msg.ecount = 81U;
    msg.enames.assign("WTTJXSCSOBVGMXKQZZZXFNVYQUTJLGWODOELBBGZCOVJNHFZISWXJTWFQWROBAYQDPGCCXHYPSHWNJAFFLTIXPRQAQACDEWYUPAERHRKJIOAFMEMBUXGXJTDENSYOHTYHHBLSKCGHKQYLFEDNKMVNKIUTAPQMKPBWRLICEPVUHMIAJPGVVSEPXGFXEZQTBURKLQBFICHZEORKKBTDNDINSOIYGLJZUODJSIFRNLSZUPVD");
    msg.ccount = 211U;
    msg.cnames.assign("WLCQXQICUCLEXAGSOBZLBOULRPFHTPRVDPYFQAEMFJXAMPUYPNRKIGUZZMISXWJHYZXTPTTBFHVKOIAUCRNMMDOSZANVNCJEWJRJMLAJWEFVXQOBEPLGSINDCDNJHHBFUOTTWKRODNCIOAYAAHMCRDSJSNDIZAHEOYTIEYKCHFZZBY");
    msg.last_error.assign("ERUPNRMUIGJNORKLTFGFVBQBAKBCHPFDVZTBXLGHVTCYVCKWJKXDHNLJFIUIBYAIZMORILTLTPXLJXPHDUMWEFMSJIVGREAKZQYLSEPMFCQWJKKGDQOQHCXUYRWCAOIPBSNCTHJPTFDCZWDGXZBEQONWVHBSWZSETXUYZNQCAFSUQLYMFMFV");
    msg.last_error_time = 0.811046655554;

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
    msg.setTimeStamp(0.258466470699);
    msg.setSource(55234U);
    msg.setSourceEntity(113U);
    msg.setDestination(6425U);
    msg.setDestinationEntity(161U);
    msg.mcount = 145U;
    msg.mnames.assign("HCEEWRRZBBYWRDKISWLLNLNGYECTNBQLFDKQZEDJJSUJFFAIYHEDSIFVDWUFANPPNTYTWQFQHXZNVCPWKQDWGGMJDLRXABLPRJZLVKOBUVEZUHFAOXBYJIMLGJJUYUSDQCVHIVKIAKHOSFKAUWZCPMRIABOOZUYSGSSMHGMGNVMSBCBGMQRQXOJ");
    msg.ecount = 135U;
    msg.enames.assign("IGHPTEIHPPXWZKDKJASACMFCVYJGJPYTKCRWXSXBCBHZTZZCLEBWARQYVGSWKAJMJUYGTXNJUVIYWQCUHFJLHQDFXXTPTQILLQLFGOUPWGIOCBHNTVIMEIOSDEBBAUHXXVOYGROYDLHRVJZLBRMCNARWIZRSTQHDNFQUFDDPFSEOTUKFKZMBDGNCOOVSNSYXROPDZEQKAWNWEKVJREEOMVFNMQBSMEHLSCAFAWNPAUULULMKI");
    msg.ccount = 41U;
    msg.cnames.assign("HPZHXGIASEZANJSRBPZGIQBMSGTTIIWOKHLDJIY");
    msg.last_error.assign("JUEDFNSBJENUSOQAZR");
    msg.last_error_time = 0.201572821188;

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
    msg.setTimeStamp(0.360940998862);
    msg.setSource(8842U);
    msg.setSourceEntity(135U);
    msg.setDestination(54190U);
    msg.setDestinationEntity(157U);
    msg.mask = 154U;
    msg.max_depth = 0.681646071575;
    msg.min_altitude = 0.692457865602;
    msg.max_altitude = 0.30114046282;
    msg.min_speed = 0.366607163846;
    msg.max_speed = 0.334409849288;
    msg.max_vrate = 0.466465995874;
    msg.lat = 0.657156146954;
    msg.lon = 0.383400580982;
    msg.orientation = 0.157633871391;
    msg.width = 0.52893648906;
    msg.length = 0.91842049484;

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
    msg.setTimeStamp(0.374953340034);
    msg.setSource(43959U);
    msg.setSourceEntity(10U);
    msg.setDestination(61792U);
    msg.setDestinationEntity(74U);
    msg.mask = 247U;
    msg.max_depth = 0.158180378105;
    msg.min_altitude = 0.765851167131;
    msg.max_altitude = 0.752524826085;
    msg.min_speed = 0.371269594506;
    msg.max_speed = 0.443480179901;
    msg.max_vrate = 0.238092456998;
    msg.lat = 0.828019100458;
    msg.lon = 0.392538911206;
    msg.orientation = 0.820612679227;
    msg.width = 0.277354602203;
    msg.length = 0.23918618509;

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
    msg.setTimeStamp(0.740794423537);
    msg.setSource(12097U);
    msg.setSourceEntity(197U);
    msg.setDestination(41662U);
    msg.setDestinationEntity(144U);
    msg.mask = 174U;
    msg.max_depth = 0.471158520071;
    msg.min_altitude = 0.30271289022;
    msg.max_altitude = 0.852983690202;
    msg.min_speed = 0.933866751799;
    msg.max_speed = 0.563622379093;
    msg.max_vrate = 0.257057886817;
    msg.lat = 0.885873105831;
    msg.lon = 0.481905157017;
    msg.orientation = 0.706560784743;
    msg.width = 0.0648182411255;
    msg.length = 0.276543554464;

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
    msg.setTimeStamp(0.509422940652);
    msg.setSource(22866U);
    msg.setSourceEntity(184U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.16507554215);
    msg.setSource(44998U);
    msg.setSourceEntity(95U);
    msg.setDestination(45485U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.695487200545);
    msg.setSource(42859U);
    msg.setSourceEntity(68U);
    msg.setDestination(51652U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.145364952051);
    msg.setSource(26920U);
    msg.setSourceEntity(191U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(226U);
    msg.duration = 51559U;

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
    msg.setTimeStamp(0.298627220745);
    msg.setSource(3460U);
    msg.setSourceEntity(12U);
    msg.setDestination(31472U);
    msg.setDestinationEntity(171U);
    msg.duration = 49501U;

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
    msg.setTimeStamp(0.899705237677);
    msg.setSource(11230U);
    msg.setSourceEntity(4U);
    msg.setDestination(23001U);
    msg.setDestinationEntity(48U);
    msg.duration = 28632U;

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
    msg.setTimeStamp(0.425595429287);
    msg.setSource(38825U);
    msg.setSourceEntity(247U);
    msg.setDestination(7115U);
    msg.setDestinationEntity(33U);
    msg.enable = 70U;
    msg.mask = 1132537353U;
    msg.scope_ref = 2021652697U;

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
    msg.setTimeStamp(0.478249111636);
    msg.setSource(63597U);
    msg.setSourceEntity(7U);
    msg.setDestination(45398U);
    msg.setDestinationEntity(27U);
    msg.enable = 101U;
    msg.mask = 1660743645U;
    msg.scope_ref = 213449838U;

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
    msg.setTimeStamp(0.563072598964);
    msg.setSource(46178U);
    msg.setSourceEntity(0U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(23U);
    msg.enable = 240U;
    msg.mask = 1976591123U;
    msg.scope_ref = 4259300466U;

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
    msg.setTimeStamp(0.199682142304);
    msg.setSource(25159U);
    msg.setSourceEntity(95U);
    msg.setDestination(60544U);
    msg.setDestinationEntity(215U);
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
    msg.setTimeStamp(0.875726877458);
    msg.setSource(29772U);
    msg.setSourceEntity(90U);
    msg.setDestination(65207U);
    msg.setDestinationEntity(111U);
    msg.medium = 90U;

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
    msg.setTimeStamp(0.140905877333);
    msg.setSource(11882U);
    msg.setSourceEntity(29U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(174U);
    msg.medium = 134U;

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
    msg.setTimeStamp(0.504239684785);
    msg.setSource(4359U);
    msg.setSourceEntity(20U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(200U);
    msg.value = 0.679448782338;
    msg.type = 95U;

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
    msg.setTimeStamp(0.0243876496527);
    msg.setSource(21191U);
    msg.setSourceEntity(150U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(92U);
    msg.value = 0.0715195796415;
    msg.type = 67U;

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
    msg.setTimeStamp(0.908027337833);
    msg.setSource(46351U);
    msg.setSourceEntity(165U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(209U);
    msg.value = 0.411393845405;
    msg.type = 23U;

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
    msg.setTimeStamp(0.340425384043);
    msg.setSource(2779U);
    msg.setSourceEntity(77U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(180U);
    msg.possimerr = 0.51801924261;
    msg.converg = 0.125934821809;
    msg.turbulence = 0.17210383643;
    msg.possimmon = 78U;
    msg.commmon = 99U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.338826047589);
    msg.setSource(38173U);
    msg.setSourceEntity(66U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(75U);
    msg.possimerr = 0.141887309887;
    msg.converg = 0.742800601991;
    msg.turbulence = 0.120971087025;
    msg.possimmon = 141U;
    msg.commmon = 11U;
    msg.convergmon = 29U;

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
    msg.setTimeStamp(0.362551286849);
    msg.setSource(26098U);
    msg.setSourceEntity(142U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(194U);
    msg.possimerr = 0.88108244428;
    msg.converg = 0.938521766935;
    msg.turbulence = 0.0261242702561;
    msg.possimmon = 23U;
    msg.commmon = 201U;
    msg.convergmon = 156U;

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
    msg.setTimeStamp(0.695466590899);
    msg.setSource(2861U);
    msg.setSourceEntity(197U);
    msg.setDestination(10328U);
    msg.setDestinationEntity(122U);
    msg.autonomy = 66U;
    msg.mode.assign("OFLIVUSPTSNGGTNOWSNKDRDBEABIDYEZPRSQUNYMEJYHLEDVFAZQOCLMYDNNRZ");

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
    msg.setTimeStamp(0.82763434534);
    msg.setSource(38522U);
    msg.setSourceEntity(176U);
    msg.setDestination(48202U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 180U;
    msg.mode.assign("LKBLFBRYKSHFXLQIMIWOOVSDCHTPFUIXWCNGAFZPBUMGNAPAZDQSVPMRIATVEHEUGKNXNPTPVGXRLMYUWLELOLOMMNOXTZARDJBIYMIHHQOQJTWAKQLYQVUDSJ");

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
    msg.setTimeStamp(0.59361275625);
    msg.setSource(28033U);
    msg.setSourceEntity(73U);
    msg.setDestination(876U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 204U;
    msg.mode.assign("WBLZLKTIETJLPIUYGPDHTMRMJYPNXPUABFHCPOREGGGOTLSUQJOMMEAKEAFYEXQMJBIZLXDNZSIEGZZAASUSAF");

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
    msg.setTimeStamp(0.611329433442);
    msg.setSource(51557U);
    msg.setSourceEntity(46U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(119U);
    msg.type = 216U;
    msg.op = 221U;
    msg.possimerr = 0.998465395992;
    msg.converg = 0.41397353507;
    msg.turbulence = 0.0473329059464;
    msg.possimmon = 197U;
    msg.commmon = 199U;
    msg.convergmon = 45U;

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
    msg.setTimeStamp(0.619583487253);
    msg.setSource(38683U);
    msg.setSourceEntity(4U);
    msg.setDestination(65388U);
    msg.setDestinationEntity(84U);
    msg.type = 238U;
    msg.op = 131U;
    msg.possimerr = 0.461898588047;
    msg.converg = 0.885689374868;
    msg.turbulence = 0.179344868403;
    msg.possimmon = 71U;
    msg.commmon = 246U;
    msg.convergmon = 17U;

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
    msg.setTimeStamp(0.728470302278);
    msg.setSource(21656U);
    msg.setSourceEntity(185U);
    msg.setDestination(25841U);
    msg.setDestinationEntity(193U);
    msg.type = 14U;
    msg.op = 110U;
    msg.possimerr = 0.927901630232;
    msg.converg = 0.697291053447;
    msg.turbulence = 0.154181064948;
    msg.possimmon = 153U;
    msg.commmon = 225U;
    msg.convergmon = 54U;

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
    msg.setTimeStamp(0.469209534141);
    msg.setSource(21365U);
    msg.setSourceEntity(3U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(181U);
    msg.op = 225U;
    msg.comm_interface = 15U;
    msg.period = 40986U;
    msg.sys_dst.assign("SBRNTTBEFLATVNDXYJBCBFQUVMREJKSMNRDCKVYFGBCKNLZBUNGFQKXAZPLGFUSYPOWAHSXNDOGAYEFIEVI");

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
    msg.setTimeStamp(0.653206139537);
    msg.setSource(12606U);
    msg.setSourceEntity(92U);
    msg.setDestination(43425U);
    msg.setDestinationEntity(52U);
    msg.op = 119U;
    msg.comm_interface = 58U;
    msg.period = 12623U;
    msg.sys_dst.assign("HGROYTYTQWOKVYVTXPBIMZEGAMQVKCABITGPPWNNCMEPVSWBHISTIMRPMXWBKKJBVJAFWSXYDKVIRWIEZIZNBNCSQIA");

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
    msg.setTimeStamp(0.202449437184);
    msg.setSource(685U);
    msg.setSourceEntity(242U);
    msg.setDestination(39431U);
    msg.setDestinationEntity(124U);
    msg.op = 245U;
    msg.comm_interface = 146U;
    msg.period = 7589U;
    msg.sys_dst.assign("REPKQVAXJNFWMCCHQQZTBRSTFJWBOJJSESGGEENPABDWLZYFBBFLKKGHKFOPWJVGUWDJPHWHCQXMGKTBOUKSXIIDTIMEFWZFIRZSIHAYRHZNFYRUPAEQQEDRCM");

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
    msg.setTimeStamp(0.117444413732);
    msg.setSource(9723U);
    msg.setSourceEntity(175U);
    msg.setDestination(53917U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.206246107289);
    msg.setSource(53742U);
    msg.setSourceEntity(128U);
    msg.setDestination(1056U);
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
    msg.setTimeStamp(0.805497004888);
    msg.setSource(8743U);
    msg.setSourceEntity(70U);
    msg.setDestination(22276U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.858145532063);
    msg.setSource(54689U);
    msg.setSourceEntity(149U);
    msg.setDestination(15999U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("AZCWQHASKNYCFEFRCVVEQHJOGWCXMAJSOIIMXZDRDZCDUZNGJKSLSVIUUVEBFPNOILQKMVYWLQIEZWARGJIPGLVDOFWCMAAVYXNBMSPWFFXYYEROLRHCJQLBHPSOHLYIVWKFWLTELVKMTTDGJULNBXUIDBOJXXEBUSISFGGDYSUZHNNTEDUTOXFCSGORAWKPQJMDTAKPPHPZHNBKZET");
    msg.description.assign("TAPKVSIAIOUUFUQDCXYQTIWGSJZOYMOFHTBIZNAQFWAZNNMGWMKWFTSPKQGAXUEOGNNZBROSTHPVHEGMKIWDHPHIBAZGNJEXZSQVWFEHJLRBWPELLLMETTRGLMYHOGIVVQXFIDKYXETMLZNFWSSJRCQRXZGTNBCQBJVAGABODYKLIQURCMKZMDJDDPMLXYUVJLYCOCKPFNZEOHASIDNDQRJVSECLPWCWFDJYH");
    msg.vnamespace.assign("SLUGWSGXNCRXYGVESGOKVOHUXSXEKBFURXHAKHUDZGQBZGDRPLPTTLUQPFDFFXTDZDYZBJFRNBSGCLPAAJPMAEGALPLRCOTABPMEJMMOZOTIZVCFQIJIWPLMYKQBNF");
    msg.start_man_id.assign("MWYMQGHZUJUSRGSJPPXGBLGCQMDONERWNBHVNHOVKYQZQILYPOFOXDFJBUIRRCNOISE");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("OMVIBLBQLZCXIUNEDIVRTXLNVHGUJRHLBBLTGMHUPSECUSOLXZETRQVPMWFJKMQHRFEHYNEIJYFOGCWKKVFXXRAPFAMHCYOSTJVEHRWCJRJFIOMQOOZIJHUUYRCWPGSEAGNSFTQMMAUAVIDZJPSD");
    tmp_msg_0.dest_man.assign("ZJJKGDRQGHOPXYDEZKITXFTHMSJXHYWZSCPECQDTQQWAHKNRJYLHWLADQZOVMORVBTUWILZIKBCIJZFPOCSWARRLNFCUEKABEVPFRMKXWBIOMYIAAVNPERDHBNTGJXSVOREBBUXPTCLBUUGTINQGDCZOOMSUELGWQBRKZMAIVWANKYXEYNLFUJGYGGM");
    tmp_msg_0.conditions.assign("ZHFJOMRUHKFEXEJTQAIVPNJCJFEIMNAJXBGSZUNINOCDLXVKYKBWYBQRLQRWOGOEMLGKQBPLICQFEYXKOFHKZFJYLTHTQMB");
    msg.transitions.push_back(tmp_msg_0);
    IMC::LoggingControl tmp_msg_1;
    tmp_msg_1.op = 22U;
    tmp_msg_1.name.assign("RPQTYNTCXHLSDDZXKIZZWVWLFVHSRCQQDLDLSMJQQVIILCCGFDBYGSPPNWDDNGFSSEFVGUOKWKMTRCYUKNGZUXPMVZPGBAUCILYBAZJGKJTYKLQGVPRMYXTKWIDWJZBNCOSBBHAILYUAFWTHZNGSOXAJRXMNYESATMEEJDNOCEUPYQBTMXIEFIRPHAPEJEBNKFMFTUPVKXMHHIBOBOOWCKERCZYUVQWZAEIFXHDHUMAHNJUFVLJGRXO");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Pressure tmp_msg_2;
    tmp_msg_2.value = 0.679292774097;
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
    msg.setTimeStamp(0.953896799938);
    msg.setSource(63100U);
    msg.setSourceEntity(90U);
    msg.setDestination(50852U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("KWXYAZCGCVRRZNNNFKMRPGYWQFETIZWLVBKJSPXHKVJLDY");
    msg.description.assign("UPCSVGZAPBGMENKCZJQNGINPAIXAOVANOQDTKRTEHTHOKALEOMVWBYQQKJETFJTUXTLBEZLKIBRVFCDYSRTWR");
    msg.vnamespace.assign("QVBRJDGXIQMQMWIJFKRSUINTALXYEYFYBVBOMNGFXLOORUBETUUVHDEDJZJWHAWHEXFLLLHDKCTRZNKNVOTFUNDTUPICBCUJWZRGMSWIQXQMPSJUKWZSCKLRKOVMOBCYZJIXOAYJLLWRUQQCXWVHVTVIFDAOI");
    msg.start_man_id.assign("JWUBYUTSIXEUJLWAZYYUPVIFHGRHWPFJIQPMUQNMNOVLQKHAEHMZHJTIRTRXCELAXCXVIXJGSJLFNYBFROYQPNNBSBTKROABYLQZMJDQALZGCZCRPGOPKPU");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SHFJFZLMRAWZWXBRCEKQASTESJUCFCAWBQUIB");
    tmp_msg_0.dest_man.assign("ZXKOQLAAEDDGHPLJGAERINZUMMHIYNRXYPYDGNLBSXZFCNQBMOJBPFLYIPXGTLYOKEBDDZCHJSRNINWXFTGDSMSQMJQWUHPPJUPQXJYJOWAJTCGEGGQWVULDZEWVNQXQVKLCUQXRXWMNIBOEHKKRSRWKZIWOKCJMDKXVC");
    tmp_msg_0.conditions.assign("JEMNJCZJYPNZQCBWNNDCFUGZOFTGTFLBBSUNXFVAQYFXRVXEIBJRRARUNGNTAPKIFSNWWVKVIPJITUIYJUOJPUGDWRKMDYNFDVWPKBGLOSILQPKXDZFGZEQDZHLTWIQMBBU");
    IMC::ServoPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 114U;
    tmp_tmp_msg_0_0.value = 0.520030771098;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::PowerChannelControl tmp_msg_1;
    tmp_msg_1.name.assign("JGJYWOHQDKVPUBKISOBYPPKALTDSYSZRWHUJYFYTZNMTCZJUKXVCDZWFVIUWAQANTAMBSKIATEMGLDGFJNLFLBFVPBCNPMGCHBWFYUEORGDZCWCEMWPUXEXXLJDKUVGNEQKISQREZPZOQUBBSBNEJHN");
    tmp_msg_1.op = 25U;
    tmp_msg_1.sched_time = 0.327411175644;
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
    msg.setTimeStamp(0.491734446837);
    msg.setSource(64249U);
    msg.setSourceEntity(207U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("JZMGWFRLJPKKTVYHSMSNCOVLIPMGSZBLPDHFJ");
    msg.description.assign("FYDVHRXRTUZMDJBUCUEVPVOSXDCYWZKWKQIAHAXWIBNOPNAZTWURVQDATJWFJPXWIYKXFOFCLLDSELFHASHXERKLTZOHSZQZQQEIPSKRNPLQBGHSQLDEYDWTEMHGDOBSKEJQDHGYXYNQSUGEJFXYIUUTXVJKTLJTY");
    msg.vnamespace.assign("KJOZQPOWQUXQFWJCIJOSRSSBERDQNAOLBMMQWTEDOAWFDOPRITRUYHWTMYXEUOHWNXNDEGSZUJFIZFGHHGQCEXADECNVMVYPMBEKYZVZQLIGTDVHONSAMTWSFTIHFLFJEXQFRCHAUYQBCGSNDBWVNKPHZRAYEVPABIPXAKHKKIO");
    msg.start_man_id.assign("UUCMGRLCHXSZMEJEMLBRMHEULXPMWGIAJOQANPHQSXABEUGSARDPKQCDGLYTSAOVLWDDBOEORAHXUBDRI");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BZCDALKHMWJWVZJPURPAZJEFKVIADCEETBWUFRRSWCG");
    tmp_msg_0.dest_man.assign("LDONAFKUQULOGYUMPCHAMLFYVMYHHNGWKMCUMKBRSEABZAQLDJBEIPLUIOSAFZSBKTQZGNKZNWFHPTUZAXBHRQIRPYFQJKIVYRDNCTLVWUZDWSXJXCJTTMFMIHERWZXJEGYDQED");
    tmp_msg_0.conditions.assign("NNGXPOXSUTTUZJXSCYIZMYGZPOYKVLODKJBFJCCARXCGBTNGKFVMLQGCDOTRVAAGIJJIWIIUNMEQMHEODZKHDDXSPTYCIRRURYOHAZTQKRIHFBRDFCCQKVUWTLDMRHQWVJZKJEQFXKTYXEEQXKABIFUFNJVHLNYOOWEZLPXOB");
    IMC::GetImageCoords tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.camid = 54U;
    tmp_tmp_msg_0_0.x = 47445U;
    tmp_tmp_msg_0_0.y = 57939U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::StationKeeping tmp_msg_1;
    tmp_msg_1.lat = 0.988815709092;
    tmp_msg_1.lon = 0.809875360537;
    tmp_msg_1.z = 0.184068080143;
    tmp_msg_1.z_units = 118U;
    tmp_msg_1.radius = 0.251011050854;
    tmp_msg_1.duration = 46117U;
    tmp_msg_1.speed = 0.656237395783;
    tmp_msg_1.speed_units = 181U;
    tmp_msg_1.custom.assign("DJUZMPRTCOGRPEVBBEUVXFXHQHRIU");
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
    msg.setTimeStamp(0.290859578089);
    msg.setSource(39009U);
    msg.setSourceEntity(214U);
    msg.setDestination(8705U);
    msg.setDestinationEntity(20U);
    msg.maneuver_id.assign("ZEKCMCXGCIYGDLBFBQFDUKRNZDXOEYBARTIROQRIKWISJTH");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.287584541454;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 28070U;
    tmp_msg_0.custom.assign("EQUEKZXKECSRIAMVZXZSEQAVSPOOGQTFQFXLNB");
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
    msg.setTimeStamp(0.0024604984626);
    msg.setSource(30817U);
    msg.setSourceEntity(215U);
    msg.setDestination(21843U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("FOIUTDQRLKREDJJFQFRAHVHFZGILUWJZPFBYHGANQTZMNMGKSYPZMRNXVZCGWDOWWRQSLGGFUYOOWVSNWOAUMOTBRIKBDLCHEHHNYVTPLEDWOCVDSOPYQE");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 11996U;
    tmp_msg_0.lat = 0.630624813067;
    tmp_msg_0.lon = 0.375758052151;
    tmp_msg_0.z = 0.48787414477;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.amplitude = 0.739471785029;
    tmp_msg_0.pitch = 0.749918517127;
    tmp_msg_0.speed = 0.269603941196;
    tmp_msg_0.speed_units = 36U;
    tmp_msg_0.custom.assign("YNASVMXWFROUVUFZHTDFCPEXUVRFTSPYNLBTKWQGKCBQHYGVSGKRLGAMEYECUSQPGXRFKALOJFIULLNMWCSAZIDDEJXYJKZRVDCSAYOFXMKTDRILTDGJMPUOQNBCQBIYQIHVRVAGODWNCJZ");
    msg.data.set(tmp_msg_0);
    IMC::Acceleration tmp_msg_1;
    tmp_msg_1.time = 0.703296355512;
    tmp_msg_1.x = 0.705088899897;
    tmp_msg_1.y = 0.381451236513;
    tmp_msg_1.z = 0.280013228588;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticSystems tmp_msg_2;
    tmp_msg_2.list.assign("CAYTXZOJCBPGYKTFKZSRVJUKWRICSVQHAULEPCLEVINFWBNIYZDZNPPGKONTEHLDNOHXXHQUDMRJHTZRMHTBOJWMZWKRS");
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
    msg.setTimeStamp(0.736889131437);
    msg.setSource(505U);
    msg.setSourceEntity(216U);
    msg.setDestination(50763U);
    msg.setDestinationEntity(112U);
    msg.maneuver_id.assign("ZBTITLRKMQZNMPPGUSRVSLCFVHXAJPIXUTNVKZCVFLTGNPYKZQGLMHLKOPWYMVYWOQUWYXIETCAMHFRLOQOABPDQCXEBSWZLMJEOGQWSBRVUDONBHYETICQZRNHJDRZXSLTJUTJBEKMSZHAY");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 33086U;
    tmp_msg_0.lat = 0.0717620245249;
    tmp_msg_0.lon = 0.461847880226;
    tmp_msg_0.z = 0.346225837121;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.speed = 0.621930061284;
    tmp_msg_0.speed_units = 239U;
    tmp_msg_0.duration = 45225U;
    tmp_msg_0.radius = 0.367283314478;
    tmp_msg_0.flags = 61U;
    tmp_msg_0.custom.assign("QIVSLXLDYBXUWHTCELIPWNNVPCMFVYHWZIWJCJYKGLAOJMEYMSNLENDVAEBLBIRLCGFJYNPOXTZJUTOIKCUQWTXSOUYZHRRBCGAFFBSZDMPBOISUXBQTSIEXEOMUIPAMVGAPMFSOFHVHFLWDTJWEKXWYUHGZRCBNEAP");
    msg.data.set(tmp_msg_0);
    IMC::UamTxStatus tmp_msg_1;
    tmp_msg_1.seq = 30506U;
    tmp_msg_1.value = 207U;
    tmp_msg_1.error.assign("IUWVMPSYMAUWRKIMCODYJIOSRESHZUXRNGCXHBXZAVDOJQRCBSFPZJZXEJLEZIXTPFYOSVYUFTGLJBDGDNKBRNXVEZXBUZFILEFZIBVGVGFLIQSHYVFDRSNLHFPDLOMPQBHUHCCMTDOXCBVJZCCWUPQUANWFNRWPJKRTLKMAHKUFNJKTHGAZPAQSCWQJEGKRNDGOSTBXQVGAWIWDPBQYTYLKMTHLIQYWAQOEOAEGYYKNNAIJMMR");
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
    msg.setTimeStamp(0.872258034584);
    msg.setSource(13252U);
    msg.setSourceEntity(165U);
    msg.setDestination(31399U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("YIYDRGYCVBVXZFJDRYLJDIORFHQJLCRSQYQIBLTJPCGZXZRNOYNPGGEGEMVUE");
    msg.dest_man.assign("SLXYUVHKKNVGUQTNZMLFSWNGKRTETDHBYPEFZFEQDXIACRQLDOBARNRXNFIMDAYNQYZSDCLLUBHVQJCHNSHMHOGIPBCGKOQAJDJYMBKTGIWALINWKTGSJTABYZMWOWFQEGUIMVVHEHIJYJPLESTOHEJRZKSBUYRPGXBRHKDXERIOQUDQZJWPSJI");
    msg.conditions.assign("LGPQCWOYSLLEXNZBNJNQWCVFEYKQIDUDUWGNFAPZXNFBRVRDERJQYJOZEZGSSKXGWUOFROBQEORHSKBEGOMLMWCTZFQVKRKRJQITQYHGYOZTZTMUHLBITPPXRMJTVMFAWCVIHXALSHPAHUYCOSAZ");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 38829U;
    tmp_msg_0.lat = 0.959787546827;
    tmp_msg_0.lon = 0.212389391066;
    tmp_msg_0.z = 0.11806640006;
    tmp_msg_0.z_units = 195U;
    tmp_msg_0.speed = 0.453019691021;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.custom.assign("YEQSGOJZGORBA");
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
    msg.setTimeStamp(0.40166181585);
    msg.setSource(4690U);
    msg.setSourceEntity(244U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(215U);
    msg.source_man.assign("ABYQGKPTFRMQBRYLVJYNVJVRAZLUKXIVKZ");
    msg.dest_man.assign("RCJMBQGDOMKZJQFWPKPUUGKST");
    msg.conditions.assign("VNNJBYACIPPNWHUBHDBHRHPRTF");

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
    msg.setTimeStamp(0.00794879685298);
    msg.setSource(45757U);
    msg.setSourceEntity(6U);
    msg.setDestination(31127U);
    msg.setDestinationEntity(235U);
    msg.source_man.assign("JDDMJBONHLSOEQVIFOJKFGUHJQKUAXLRJHVVCMSOYLYPN");
    msg.dest_man.assign("FLUJHOKXHBXBYTJYNQBPTINGHKYHNELWFLDMBXMYEYWOJSONVBXUGCKQEUIFZBVYSRCFDANHWTCMEOXRPEOQJRSHPTRDVIITZYFAAVRVDRJPQKPXCHHBLUPFAOOLPSSLIWKGVXTKCZNPEDH");
    msg.conditions.assign("QJQEXJMJUCRHFQSSHXVSAYZSOTJSOGJIZLYLCSZGZYFAFBJTIZ");

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
    msg.setTimeStamp(0.277283756095);
    msg.setSource(5498U);
    msg.setSourceEntity(211U);
    msg.setDestination(19613U);
    msg.setDestinationEntity(114U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QGXECVNDSUIBPUBQNDIVVFVGSYDQPCWWXZZEAJENLFGJRXMQNLZOXIJYTPNIHUINUYGNYTKUKQZTMSDRJZQVLXPBKAZZIWHHZNCBAOFAMFKGNYOBSCJWDIXATTRRZVGWTTSQUYAXNUTSAKVZYABRGPIROSWEDMCOLLLMLJBQBHQOKFXWDHCMEBPKFCYMGLAEOBESYYIGHPFODUXLOUVCRFHSHUTKAOWM");
    tmp_msg_0.description.assign("QEVOLFUTZVLJTPCZCHWFFBDMQREKMUHUTSQDBGMUPRQRSGOHHYZYNKVWNJJBTZBFGPEVWCMUVXGGEQNWYADRHYOTNMSCYPVWENFSDQDABIPDNIIX");
    tmp_msg_0.vnamespace.assign("MDQQSZIVMVYWCYVRIIQEZZVHENWUCHODEPBNMFETBZZIMHQUJSXHTKA");
    tmp_msg_0.start_man_id.assign("XLGYCANORNAKAJNWYUTOFBUGKVXZSGCNWROSNFIJCVOXBPLIUZSLTHCPOWYRNIQJZHMRENKXWVXKCACMDFVS");
    IMC::ReportedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.439227746451;
    tmp_tmp_msg_0_0.lon = 0.820143594053;
    tmp_tmp_msg_0_0.depth = 0.209862892072;
    tmp_tmp_msg_0_0.roll = 0.724060601517;
    tmp_tmp_msg_0_0.pitch = 0.518768284428;
    tmp_tmp_msg_0_0.yaw = 0.643052058143;
    tmp_tmp_msg_0_0.rcp_time = 0.809020860762;
    tmp_tmp_msg_0_0.sid.assign("SZYYNRMNIMLQLEUXMEAOSNLMVWVVPHZFBNDCJTVITYIIJHMTLCCFFL");
    tmp_tmp_msg_0_0.s_type = 38U;
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
    msg.setTimeStamp(0.305299297778);
    msg.setSource(44752U);
    msg.setSourceEntity(96U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(228U);
    msg.command = 168U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ROZOAXYXIOZYOUXVOSOMNYBPLPFWOGBMXWTVPSQXZNLBSCPEFAVYSNLPQFUUFJSVDYABLKUYKGVHBIEMQWDTPIMEFIKENMGFSRTMWKOTPWHXLDIVHWZRIDQYJTHJKUVPWTDSZETGVBCNZESTHAKAUGGCGMBDRLAZORWHIXBQUJNQPYULIWOAFAJZQSCHWMURYJDCFSGDXQHNMQTE");
    tmp_msg_0.description.assign("TJMSSJZIARNYHMFWMURSVJGKLCYQLFOPAWJWQTZSLZSDUKHKZRUALIQVHZPHDVTMWEEOCBXYYXMJHJZYWRJPPRXORCCWPOLIUEDCUDEGBXIPKZLZTXYCUGFPCIUGJZEBOGSVAQTKKBCREDNZVDHJXOWVFMYXBIBHTNEAOCQFNNMKSVIAAUMVBKLGAPYSXPBWUNNJRINSQIQEMETXOTTHYFGLABDTGFDNKFWGQHAFVUYND");
    tmp_msg_0.vnamespace.assign("ZRUVDMWCGNTETPTSVGIVEGWKZSGHMXULLAVOHCJWHAPJPQEBADDZTJRHQJNLNORTCMFSABHFXKSFGVJDBAHWVMWGTPIOAKMEDPWMWHYIOHLLISUMEFKZFFJBBWETEXDDOPLKYHBMRZZUNWIUIQUNGNFQLAHXRKLYNFXYIJKZNRQLIIJJFWRUCBKOYRVBOUGXEOZADOTGQZXCBCNSYTIONEJVKVQSPUUMMKAVPY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KITFUEOGCDZAFXCKWVZKZJLCEXLHIJOIHGHKDSWWY");
    tmp_tmp_msg_0_0.value.assign("GUIEQJPKWVILELVCXDOIHGJARDVOUDTLRIBSUVMCHBAGKZTOSLWTS");
    tmp_tmp_msg_0_0.type = 173U;
    tmp_tmp_msg_0_0.access = 109U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GQPBYFYRWCIIUKBDOSHLJNAWZBMKRZGJGTULFHNXVAPDIRKRTKEFDMDTULIRCAWGYTVMELR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZPVGZQEZMWUBNEREHFCZFKNUVYUPGWVGLPVPVOBMYILCHFSENRJFALRHDAQKXXBMJJXLZEOTKMQBJMHLADAEXJHZWISJPODFXWCZSTQIYCSPFODURTREGYFAQNDTBEUVJIDARDINMORVFKYWENUBSHIGCAMTWKGTXNXXBUGKEYONCYKLOPDIMKRWSWJRHFLUXQNQGQIGVUSHMJWAOU");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 1606U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.941009766651;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.909362930337;
    tmp_tmp_tmp_msg_0_1_0.z = 0.668550046118;
    tmp_tmp_tmp_msg_0_1_0.z_units = 211U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.574434189573;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 36U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.364627574855;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.842240050789;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.668937252964;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GDJUDFNBVQPHAEKFQUFWOSQJBATJXKJAYLJABWXGWMUYZCNEYISRLBHPPHOHMPPLYXSICDTEWBEVNLVKRSCAZOTNXLJTIWRHLYZLDMGAXECQICFZTXDIS");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Heartbeat tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("THHCBQTGVCILXYMWPWQJUQPXVBZZLVOMMGOQGDWEXSRLIFKFJYBDMTNGNOMFSXYHWHGNPUNGZTEXPCBTHRDFXAMXFK");
    tmp_tmp_msg_0_2.dest_man.assign("WGMDRSJXPCEGHDGAQZIKIFVBDQAMYIAFOQBVFCBVDXYMEHLLSUUSQRTWRPLGPIZDCBHWUPOLSVBIJNIPJEQEHIJYMWLZUFLCADMOVYUPVKWGMFNPMAHDYHUQSMNITLQLFWSJEHOCJTZTAYWXFZSNXEBARKBBTCCOOCEYDVOVKQGEKLXRDIDXMFNRJUKNCPPYMIATS");
    tmp_tmp_msg_0_2.conditions.assign("FTVUGYYDYJPBUISCGJZJZWMUZZQRQYROYPTWKHKPVXFHUZQLTTGZXCQUDMOQWIPNSMUMAEWO");
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.plan_id.assign("ILYKBUYXVBGNCECGKVKAZZZDQNCSWUQHCGAXOORDNDGOLRSNBFQEUUIXSAKEEWKBMJVGEOHHCAIXSGHLVXFDBPQJLQEJMQPZJCGFKVCIIOUJZXHVJNSTFSKFRMPFUTFWRMBCDZZDVTIBKTRLWTIIMHCFKGPZAPHXNOAXHLNSDMYORJXJWYPPLFMOBYTADKCAEYYQLUSGPZWEDLNOBWEUHURDSEMTRJWYTMWAQXWTJF");
    tmp_tmp_tmp_msg_0_2_0.description.assign("SXKSVWVYBVDDDRHKMIRCAKQPMTRMVWUFXZNPMCCZDKNCYHEQXQCQYGMEURBLCRPHQVGUPXEAWLYHBNEUZHTNBZXOWOIFXEGWAFZCIZSZFSSYKEVDOZGOPJVUWQJBGQRBTLTYIOADJAALAJFHNTOSRJRIJGDUVIYFPMLLKSTTCULTYDQGDKWTGPFHOCQS");
    tmp_tmp_tmp_msg_0_2_0.vnamespace.assign("PDIQSKGZZTNSFADQQPFMEISXMOGEOHPYVTZDTLUQTXSVWEBNHCYFUKEZHAIXCFRSQWPXVRQENBAAPGWNUBHKSGLIXLBCXVUJTOAMZJZPLODAAQTFVGEOQFNPYRUCXJRBYWMJDSYEKTLMNIBYRIRDJKFTGBBULQHVHMXDGESXSTUFUWYAOFCJKVCJDBEDYGLIZGIICFJJOCLXCRKWJEPBOHKVPWUQMVSYI");
    tmp_tmp_tmp_msg_0_2_0.start_man_id.assign("BRZYWPBITDDFNAXHRUCHZPNSSJZCEHETQNAFTXGYAPJCBEKXMWTPMNRBINJDHMYIPXGEVDLBCDWSANWUHQFTTJLLCYZNRQRSOXVVXFVAVDZUOKBWCMFNYMGZPBSEQLEHAHDZLKZQMFGXQMRTGIDTJAYSQLQKWHWRIELVOGVUHGSJGCMGVLLATBCP");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.maneuver_id.assign("OUHNFLWXSHLVNRDTSJEELZWAVBCFASOFLUGRDXSAMFHOVMXBKMTRWELEQWTHENQTJQLWQZPNKNAODGMIUWDCYKVNSPZKRPQHLMJIINVAAYFCJEFCZWXLPTCXZUPYFYEAROAOAPUIYYMCVXENKVMBJASJBFKXEVGOXTMRFUJTRTQWBWHKCNBQYZSONGYRXGHUYQLZTPIPHWEIQJLDZSUUCDSOKPUDCRGGMFDRKGSM");
    IMC::IdleManeuver tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.duration = 4180U;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.custom.assign("UXRVCYIXQBLONKLBU");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0);
    tmp_tmp_tmp_msg_0_2_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_2_0_1;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.source_man.assign("AQHSVSWIMHDUHPGBKLOUTTVGXBWROQYLBOLTNEUQHWSCMCREZURAWPVQKBLPGESIXOHFRLDIBZWFFCMVHATWFYQASABNDWMJIHPNOAXUNZDAGSUXFXLVPDJETEYFSOV");
    tmp_tmp_tmp_tmp_msg_0_2_0_1.dest_man.assign("SKBVDSLZTVGRFPI");
    tmp_tmp_tmp_tmp_msg_0_2_0_1.conditions.assign("WRGNXIQQSYULOJDKNLMRSHKEYVAJEDUHWYCPGJQXQZKJSBKVKGPJKAAUOSUTNCQVNHOLTUJDEDABIFQEYQPEDHMWCDXBOKCWMBBEKSOPFTLITWQCBFRPKJXPPWMORBOHNXHZXMZLXHBD");
    tmp_tmp_tmp_msg_0_2_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_1);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::GpsFixRtk tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.validity = 28982U;
    tmp_tmp_msg_0_3.type = 247U;
    tmp_tmp_msg_0_3.tow = 3504619359U;
    tmp_tmp_msg_0_3.base_lat = 0.78748529229;
    tmp_tmp_msg_0_3.base_lon = 0.876993525101;
    tmp_tmp_msg_0_3.base_height = 0.248981136538;
    tmp_tmp_msg_0_3.n = 0.905475572036;
    tmp_tmp_msg_0_3.e = 0.713004928049;
    tmp_tmp_msg_0_3.d = 0.45380866527;
    tmp_tmp_msg_0_3.v_n = 0.964394494602;
    tmp_tmp_msg_0_3.v_e = 0.231777441208;
    tmp_tmp_msg_0_3.v_d = 0.82867197952;
    tmp_tmp_msg_0_3.satellites = 86U;
    tmp_tmp_msg_0_3.iar_hyp = 30296U;
    tmp_tmp_msg_0_3.iar_ratio = 0.678679664079;
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
    msg.setTimeStamp(0.579142421429);
    msg.setSource(17154U);
    msg.setSourceEntity(246U);
    msg.setDestination(58959U);
    msg.setDestinationEntity(211U);
    msg.command = 87U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JOXMVXWYFKHMKARXBWTSLGQZPBXCTRACSFMDOIDWEZFRKURHCCIJGEUPNYKJFELTOGUTEHMVLDRORYWUSBEJPMDZOHBAVBTSGUEXISIXNZJQZIRWPQAHALTACNQOGLNMXMEFBQGNUNITCMXBNYOWJZXQYQYRWHZBGIMKQPLSFFFUTKEWYVVUDDWACISMKVPLDCDFZURJLHYISUAWNVPVHOXQKOVAIJPNBHRESYHQKTFDDOLPKGBJSGTPL");
    tmp_msg_0.description.assign("KNAWYVBHJOPRMTLTXKVVJKNDRVACKUDERRNPMYBVHBFLYTHIMINJCWAGTJMLMLTUFCXBZLQLSIQISTBNYJZWUAJBIHKVNYIVDGZJODOUIZLCSACXFXFYDJEMGSRLWOQSCEERVHRCOGGUTWGNMEGOXSDPHFTHNODAEWQEKZSHZVBU");
    tmp_msg_0.vnamespace.assign("KYIEFKWKSDVMOYLJPDSEETOKOABINRIOGNFWCNXJPWHAFOJBFHEYPXESROPFRHMNVUBGDXVJADQABWTNGUALZRQPZOQJXLDVYUXFZJSQTQNMLLNIFHTSVQPOKG");
    tmp_msg_0.start_man_id.assign("JKPUEUFXQRGMVPBYIKBXADIVNTRGRBECNYBPHBCNUXOTRAJQGYZTYTEGBLDKIQYZGDJOFSFRZHOQHQMXAJIPITQBGMUARPUQHJFSYVLZNYMVPYIHHSKFLJCXTGCMDWVFFWEWAFLEBJVNOLLBUAETLRMDPWZDNXZJMOZRVCPEAOLYCRSCCIXXXSS");
    IMC::TrexObservation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("UTRPVJSQADGKQOLEJQOSTYETIFMZZVZZKAYFZXUJWABCPBOLWIOJUQIONMONNCGHWEXYHEAFRQMFQHBUUHPILXDIRITAVPVKUTCITZRGHELMEDRKVASQTWYDQGNFWZVFMYYNPUWNDPXQYXKMGLSBQUBSBEERUIVOAMXYJBNGHNGMDZTKZKGYSSHDBVFRAHLCVRBHLSKPWKMWBRCJGJNWIDYLCCOCNKTJCJSOFDIXXPLF");
    tmp_tmp_msg_0_0.predicate.assign("SMFIRJXEFYYAEHUBYMXSNRBLUVZERIJANPCFYLANKGLSHQEPHCRTDXMDVQWNHUOACQXLAZFLNXYMCVNSKYGUQKGWDUFDBUWCJAQDVZIQFVKOMWIKSTSLNMVCJJUAEPWFDPPYAUPSZTVWPPKYEITVIZJXIDRSZTACFWGECB");
    tmp_tmp_msg_0_0.attributes.assign("GDJGXLWXGEYUDKPSYKDTPYUIPCCMRXJWDOQDHMJFVPRTBMKMDUEDRVNLJZSMZSVNHQWXANHYKUGQRTCXIHGLLVZTHJKMPAHSDRKDAASNEQWXFKALSUVESLTIBBABQBLMRZTEJOPUIOGZZYOPQCQLMQNIUWFHHCTQFWTXDVEQTXVCYOLRKPEKIYSFOGGCRNBCHNZGBSRKEZCNAHMOGWURMJB");
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
    msg.setTimeStamp(0.0601648024367);
    msg.setSource(22688U);
    msg.setSourceEntity(115U);
    msg.setDestination(2280U);
    msg.setDestinationEntity(166U);
    msg.state = 230U;
    msg.plan_id.assign("BUNSVQBBKPHXFTOWGKKPDYMVJKHAWHSOIIVIRKRANXDZZDIHPEINAIIOGXJHDYADFSMBESQKOGELMQZAZLLCFTJVPLQDDGWSJFIFRUETBUWCRREVVKCTXAQVGEOJPLNMRQVQSYGYCJGPPUBHYDWXJYEMSTYOFCAWRHQJXWVKLZOGWIESFTSRTCCZMNSHNYLQFLGAXMMUYKOXUZKXAUUNBMROTZ");
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
    msg.setTimeStamp(0.262872247823);
    msg.setSource(2106U);
    msg.setSourceEntity(83U);
    msg.setDestination(47256U);
    msg.setDestinationEntity(43U);
    msg.state = 34U;
    msg.plan_id.assign("XQYOTOWCCCKIAXLZGDBSBGHKHSKMKAEPJNOONPAKCQBUVIYKLNSGXGFMKUDGGLYTYXBTHWNOFKAHXMZSPNYWUJNTIUPLPZSEEETNJXMBEJFAXPYFRAZGWNOVUAGCPSSQLMZZJJRQBVEDZOQARWGTDHLRUCTSOCJWSIXELDFHVHHQFMWQMCMKRVBEFVUROEHDMJWWVDTODGRFTCJUSIQBHKL");
    msg.comm_level = 124U;

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
    msg.setTimeStamp(0.545488203663);
    msg.setSource(12593U);
    msg.setSourceEntity(240U);
    msg.setDestination(59907U);
    msg.setDestinationEntity(86U);
    msg.state = 22U;
    msg.plan_id.assign("ZSSLJVQPJFDQUUZIHIANRIHNNBAICVXXQEMGGRBQEVXNHCUTDRLOKBKLSPYTMHOCGNGYAHUEDANICWDOWIWXPALJTNYKLMUOFADKCYVWBYJYOZFZLICUKZNFDCUSPZSTJWXFF");
    msg.comm_level = 155U;

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
    msg.setTimeStamp(0.418910309875);
    msg.setSource(62238U);
    msg.setSourceEntity(98U);
    msg.setDestination(2172U);
    msg.setDestinationEntity(226U);
    msg.type = 105U;
    msg.op = 159U;
    msg.request_id = 44005U;
    msg.plan_id.assign("ANOCMGFJEQBKBCAMQEIELBSVFLMTSJUBUHMBDPLZXNEIJHVMBNASZPBTXQQSTRSBDQNAHJPXHFALVFVZRINYJYXLVPNZXVSVERUUPOIJMDSTIIKWBKURGOWEFEZCXAFRPGYAJWLVNZRXKDEMRZOBMTKIKDPGHZCHGDDQYIKFIFW");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.73368183875;
    tmp_msg_0.y = 0.932735503139;
    tmp_msg_0.z = 0.950569636712;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SKKGTRJHNKVASNRPICGPAYOKKIUTLOYZHDHAUABQYWEBUSCIMFXKGVBDMLRFHOEGMEEYNZOGEOACQLVVIZOXLQQIAVRVGXHDBWWJWZTWWMWSXZBTXHPDCQDZFNSYUYEZYUZEYDHYUSGEUNJGBFCUGPTNKLKAZOCWPXAOCUXDWHFOLFBMNR");

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
    msg.setTimeStamp(0.249168505489);
    msg.setSource(60647U);
    msg.setSourceEntity(181U);
    msg.setDestination(27245U);
    msg.setDestinationEntity(149U);
    msg.type = 152U;
    msg.op = 205U;
    msg.request_id = 37388U;
    msg.plan_id.assign("VWQRMSSCLPYEWISAHPEBBLMTCYXGAXGWTRFHCOGGZDPGUCTKKPHBPVIRDEXERDKFQLJ");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.817248380843;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HFSAKAJYKBFSYMGRMMOOVVNZEPXOQKIQ");

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
    msg.setTimeStamp(0.679857957714);
    msg.setSource(27163U);
    msg.setSourceEntity(229U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(91U);
    msg.type = 27U;
    msg.op = 135U;
    msg.request_id = 12237U;
    msg.plan_id.assign("QOZQAUFQNFZONYKKPYYMQTVHVZMVFRYGTYRAEZRPHJAJZJAMNKKWQQOHEYYJWUJAWNZUUOVQOGDOOBVEBIFVCWYVINLFXGADPT");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 20U;
    tmp_msg_0.value = 0.228468679837;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FRHMWYLTJVOZRZLSHPODEXFQHXMYDMMGBXHNVBQJTNPMYJWGBHDATCHIHFTLXVMBULSDFAHHYPYXMPDVRCYLEAKGWVALPMEQTEIXGZMEVKOYKLOQSJACZPOXIBGKXRKOUMQJBRCIRFEKYTBGGUGCKIJWPNCPUUIEWBIDJSZNUFJHSPTCWNZFLEADQCZWKSZUGFROOFWSADCZINKSWRNOSEXBJQDAXVYR");

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
    msg.setTimeStamp(0.994400512783);
    msg.setSource(31109U);
    msg.setSourceEntity(5U);
    msg.setDestination(12275U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 47400U;
    msg.plan_size = 2608192411U;
    msg.change_time = 0.134179497056;
    msg.change_sid = 25049U;
    msg.change_sname.assign("HOKRXTAWFSFCIURWGHTJHPFZUALRAJSPIMFQYCWCXUSCLOGNNPTUUFECOTBGDOPXSUGNBBQNRPKMELVAOZZZLYMIQDRGPSMODSKKBIHZHWFQCUVNZEMYNGRAYDWALRYTEHTAWXBVFCE");
    const char tmp_msg_0[] = {77, -90, 60, 13, 17, -123, -76, -121, -49, 111, 7, -10, -33, 48, 108, -37, -11, -71, -30, -80, -40, 32, 69, 104, 44, -9, -87, -60, -105, 110, 34, 60, -71, -117, -100, -13, 17, -118, -66, 50, -127, -53, 11, 32, 23, -98, 58, -42, -98, -86, -105, -103, 112, 75, -81, 68, -33, 115, 2, 7, -68, 41, -105, 20, -121, 106, -12, 92, -23, -40, -70, 79, 92, -27, 31, 96, -110, -68, -22, 103, 31, 60, -18, -77, 20, 91, 38, 123, -61, 90, -74, -75, 109, 48, 103, -35, -26, 47, -93, -34, -90, -62, -106, -51, -42, -128, 66, -107, -5, 107, -81, 27, -118, -121, 118, 32, 65, 53, 78, 37, 65, -81, 42, -37, 48, -23, -62, -62, -2, -120, 74, -21, 124, -113, -126, -32, 86, 46, 38, 63, 77, 33, 96, 1, -27, -63, -44, 113, -32, -52, -34, -100, 18, -21, -5, -97, 21, -74, 93, 97, -13, -79, -26, -82, -51, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VIRDKCVWZEQPHNYPOLTSTOOTBAOONYHMDRFWXJVXYYNMQPMLXUCRIKYLILCWSJFHUTFBUQLFVWADDGMACRXOGCBRSQGSTITUSSIFNXYYQXJKUKCOCOAUPGZUHVTQCVGEKFJKIKXQAAXRGWEBQSHZPXBUGEGQZMUEJXREZDREDPNTZCHRNVJSHYDAVFUINWNWFAPGMKLKLPEDZFVIGJBRPJBPLFOHEMCJLNTYNSIJMQWBVASKLHIDMZHWBTBAYD");
    tmp_msg_1.plan_size = 50106U;
    tmp_msg_1.change_time = 0.733795827173;
    tmp_msg_1.change_sid = 57855U;
    tmp_msg_1.change_sname.assign("SFLOSTWFXIVUAIXGZREHFZCSGJZEZKDAKJHHCOJOZTYANRTPEPDVTJYDCJFUFBVHNAPEBHGOUWYTUFPPMSSDQZRQISWECBQIJNMTBYRVLFTMTDNOSALRXNHHEGFDWJRYPGILSECKGBIGMTIKNGYWWV");
    const char tmp_tmp_msg_1_0[] = {9, 51, -119, 74, -27, 79, 120, 32, 122, 45, 86, -103, -16};
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
    msg.setTimeStamp(0.496766906367);
    msg.setSource(51437U);
    msg.setSourceEntity(176U);
    msg.setDestination(18730U);
    msg.setDestinationEntity(91U);
    msg.plan_count = 40169U;
    msg.plan_size = 1066208894U;
    msg.change_time = 0.154454917485;
    msg.change_sid = 40833U;
    msg.change_sname.assign("NNTVMURANVLXOTYNMWYWDRKQDGVJLMQQVIQQEOYDZSHCHZISKZPBOJZYMDAFQPZRCGVIOMORTRABHNBBSAATWGXHSCOTELWICKROHSPPLVXXKAJQMJDOGJBUPUTPLTMGXIQJCDFDPVHLFEGXGSBPVXIAWIKYTUIDHDFLRQRBAEBEFGYXNHLBAPZUAMCXKNBUWILECZZFYOEYSCIEWXMWNJFTWFUVGSKLNWZFTY");
    const char tmp_msg_0[] = {-63, 85, -33, 102, -86, 97, -121, -92, -69, -122, 8, -60, 110, -101, -88, -110, -57, 63, -13, 85, -55, -9, 69, 2, -43, 123, 3, 109, -3, -47, -4, -12, 26, -66, 66, 113, -1, -4, 53, -10, -128, -97, 41, -86, 99, 82, -98, -8, 113, 66, -77, 36, -122, 24, -12, 35, -115, 77, 49, 114, -39, -106, -75, -125, -4, 80, 63, 41, -111, 62, 17, 25, 103, -50, 91, -95};
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
    msg.setTimeStamp(0.088663140984);
    msg.setSource(45553U);
    msg.setSourceEntity(175U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 11759U;
    msg.plan_size = 470834173U;
    msg.change_time = 0.456440276247;
    msg.change_sid = 10382U;
    msg.change_sname.assign("RGICCYMFADEZRFYUNADSZGPWRKONFYQIBURLKOEFDOQAMHZGNEQGKJCQPSULXFTEWUBAFSFJTWQEBVNYVTPXZBAJQNOGCEHIAPPJOJRLXHYLLPTSQHJMMLXZVGDWTRBCSWYN");
    const char tmp_msg_0[] = {123, -104, -98, -39, -115, -126, -104, 4, -5, 13, -60, 51, -16, 53, 90, -69, 91, -38, -59, 48, 47, -120, -91, 37, 54, -19, 106, 75, 74, 9, -116, -56, -59, 69, 112, -124, 43, 29, -99, 66, -74, -94, -41, -26, 29, 70, -34, 86, -81, -42, 109, 11, 60, 110, -108, 115, 7, 104, -70, -24, 20, 90, -120, 13, 52, 58, -117, 16, 5, 81, 0, 16, -24, 30, -95, 29, -111, -79, -15, -23, -37, 56, -53, 126, -90, -46, -103, -8, 65, -107, -99, 57, 72, -60, 45, 72, -106, 108, -30, -69, 15, 44, -35, 55, -61, 115, -71, -108, -65, 25, 94, 58, 64, -98, 4, -105, 87, -53, 91, 122, -61, -34, -2, -102, 125, 90, 38, 54, 80, -76, 21, 80, 92, 42, 84, 3, -19, 65, -49, 1, 45, 116, 90, 79, -127, -3, 15, 89, -32, 84, 83, -53, 70, 57, 18, 112, -53, -106, -78, -70, -109, 15, 41, 32, -70, -40, -39, 2, 73, 34, 21, -12, -57, 15, 39, 75, 119, 50, -32, -76, -56, -56, 5, -39, -34, 29, 82, -79, 58, 12, -44, 14, 94, 83, 6, -12, 104, 78, 105, 75, -86, -99, -117, -25, 21, 48, 92};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UOGISUAWIGHEICUMOAWLGAYRZCLRXGIHDRNFJLMNJFFNWJTHCHJEKURQSZZKBCSYCPZBBMWBLTOEWOQAUVNSTHEHGISKMXYXBCVKEKVDKLBSPGQUIIQAOPBQEDDDSMFDFUHUGZRLEWKITVNVTZPXDTSPHQFETHXAYBMJKCWEUJBRDDRPWFFQQNAZXRPJYZPGGZOIRWXVQHSLMNYAUDXOXT");
    tmp_msg_1.plan_size = 23676U;
    tmp_msg_1.change_time = 0.649791348591;
    tmp_msg_1.change_sid = 12874U;
    tmp_msg_1.change_sname.assign("ZHMIREJLYNRBJJHSQPPVNFGIFCSKMEPRUADXVGVFDDLIQSQRXJKBGCWATXESYTKRUPYPCBRCSVNNZHLILRIUAUJNRBXYGDBEXXBFJTIKVKBMZTASKLTONVUTDWTYNOPZH");
    const char tmp_tmp_msg_1_0[] = {-26, 22, -101, -52, 47, 52, -21, 32, -87, -106, 38, 2, -127, -52, 53, 75, 8, -118, 118};
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
    msg.setTimeStamp(0.491589043159);
    msg.setSource(64691U);
    msg.setSourceEntity(93U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("FQIFNXIYECOLLDWMDYWWGCULAZALSAENRAFEVNAFKOVIITGVAGDUIPIBUTTLFJYXZRNRXSQNOSVABKSHRZBTKUZCVPHHFJWRXYNMZHYGDAWGDLYAOLRJLOQZRLJSJEKQBQGKCPSTMKCNPKXICBTSBBTPZEXJKKBDXVMJKYCVZQUECY");
    msg.plan_size = 35622U;
    msg.change_time = 0.0248735815883;
    msg.change_sid = 42295U;
    msg.change_sname.assign("BMUMPYZHXRJUCCMYUREILEYCMYRWWSCHCEOKOFDZBITMQEZPZTWRSJOSRFAYNAQHKPYCCZWTZPFNNWLNMFZCXHVP");
    const char tmp_msg_0[] = {-95, 108, -95, -42, 57, -4, 37, -32, -45, 92, -50, 5, 126, -68, 64, 58, -67, -46, 60, 31, 19, -66, -45, -55, -53, -86, 77, -117, -94, 84, -46, -121, 27, 11, -53, -100, -35, -23, 81, 81, -27, 49, 16, 28, 12, 52, 32, 26, -82, 58, 73, 25, 76, -10, 114, -97, -108, 105, -89, 110, 30, -110, 9, -97, -106, 89, 75, -30, -16, -22, 45, -56, 109, 58, 1, -8, 36, 94, 27, -37, -13, 54, -14, 2, 90, 62, 38, 66, 68, -47, -30, 27, -20, -121, -31, -15, -121, 98, -98, -124, -29, -3, -55, -15, 15, 52, -59, -12, 36, -113, 4, 16, 16, 59, 12, -100, -98, -111, -83, 117, -121, -13, 16, 123, 11, 120, -6, 54, -24, 84, 66, 58, 30, -39};
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
    msg.setTimeStamp(0.627913112759);
    msg.setSource(3194U);
    msg.setSourceEntity(114U);
    msg.setDestination(30398U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("YJZKZFXMWFAEQZDEYNLYWREDPCNLDWUOAFXDRPQETOMKJDPYUMSJSKQBVZOPZUSMXKQUHRUDCRLKSSTMIWNIPZHGFOKUHBXKDGBVZAONEXHZECXJAGBGJSNGCLCDZYLQSWAXCPUOBRVHPFGYFMRKHBRQNAZGQJJXAKBQJ");
    msg.plan_size = 11054U;
    msg.change_time = 0.832148563294;
    msg.change_sid = 54617U;
    msg.change_sname.assign("OZCDCVVYDFGAJDEJUWULCDLNHKXIIGRELLBYYIPISAPGQNJGLEJYVPJROMJSEFDBQRXRQJOKWNUAINVNBEXUAKMFSEGBCOKUIBGHOBSUNVMWAJLNCZXWHYIOMENBCWGJCDXZXQNFAEQTMTDYAFRXLPFECWRPKHJRTDVTYPQZHUUXIQWPTINGBBATRSZZTMPQFWKXU");
    const char tmp_msg_0[] = {51, -5, 64, 63, 27, 2, 90, -118, -4, 70, 49, -115, -91, 81, -122, -127, 4, -12, 75, -14, -73, -17, 70, -15, -16, -47, -44, -109, 64, 64, 55, 38, 41, 79, 105, 3, 28, -29, -23, 25, 66, 14, -75, 50, -93, 126, -117, 57, 122, 83, -87, 9, -82, -75, -2, 86, 22, 44, 61, 3, -108, -22, 60, 58, 103, 108, -94, -26, -100, -2, 7, -1, 79, -97, -52, 70, -60, 24, -110, 34, 107, -105, -100, 95, 23, -91, 98, -27, -33, -12, 100, -27, -100, -28, 19, -86, 52, 113, 6, -71, -80, -100, -27, -7, 92, -91, 104, 116, -16, 109, 23, -109, 96, -71, 1, 124, -18, -70, -60, 46, -97, 28, -96, -35, 114, -46, 8, 20, 11, 23, 53, -115, -107, 87, 97, -86, -87, -36, -81, -12, -2, 15, -4, 95, -8, -49, -51, 29, 98, 99, 37, 55, -50, 12, 123, 85, 91, -71, 112, -91, -70, -17, -87, -56, 23, 95, -83, -95, 118, 101, 101, -27, 109, -98, -74, -114, -119, -62, 39, 71, -41};
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
    msg.setTimeStamp(0.723223224595);
    msg.setSource(46137U);
    msg.setSourceEntity(60U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("AJCYOWYGWUUALITSZPGWOESUQBYMOODFAXFXBABPFKAVKCLKJUDY");
    msg.plan_size = 22359U;
    msg.change_time = 0.637075226754;
    msg.change_sid = 3038U;
    msg.change_sname.assign("QXQKVSHZKRSXPWIFLIMOLPNOZSCAWRTKXYXWFTJFMFCFDZBHNEVENTKGKEGWPLSRDDWYNJNBQEFBBCLHRRUTMDGFARKWYEIVJUFTGHDBGXDALD");
    const char tmp_msg_0[] = {61, 47, 49, -104, 115, -14, -124, 68, -101, 34, -42, -112, 13, 96, 25, 8, 73, 89, 39, -63, 118, -62, 101, 45, 117, 53, -7, 77, -79, 68, 8, -67, -112, 9, -20, 60, -6, 54, -28, -115, 115, -7, 125, -122, -7, -24, 102, -122, -51, -75, -22, 56, 74, -92, 53, 42, -24, -94, 52, -126, 32, -94, -92, 96, -21, -14, -33, -75, -62, 20, -126, -40, -65};
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
    msg.setTimeStamp(0.2210079454);
    msg.setSource(18518U);
    msg.setSourceEntity(145U);
    msg.setDestination(63235U);
    msg.setDestinationEntity(30U);
    msg.type = 147U;
    msg.op = 89U;
    msg.request_id = 3431U;
    msg.plan_id.assign("GNDGMRDYJPWCXAI");
    msg.flags = 61703U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 227U;
    tmp_msg_0.speed_min = 0.462150468884;
    tmp_msg_0.speed_max = 0.406532341709;
    tmp_msg_0.long_accel = 0.686885631715;
    tmp_msg_0.alt_max_msl = 0.471278172833;
    tmp_msg_0.dive_fraction_max = 0.826253706149;
    tmp_msg_0.climb_fraction_max = 0.515940876975;
    tmp_msg_0.bank_max = 0.858693709242;
    tmp_msg_0.p_max = 0.793867132691;
    tmp_msg_0.pitch_min = 0.816069833484;
    tmp_msg_0.pitch_max = 0.622916481164;
    tmp_msg_0.q_max = 0.0376200009187;
    tmp_msg_0.g_min = 0.123225277696;
    tmp_msg_0.g_max = 0.0805706966609;
    tmp_msg_0.g_lat_max = 0.222042292535;
    tmp_msg_0.rpm_min = 0.895033229599;
    tmp_msg_0.rpm_max = 0.997710748336;
    tmp_msg_0.rpm_rate_max = 0.586490799065;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VOJYASLITZHIHAVMLBSRWEVBWCDQRCWGSOAZAEQTVTNKBSRNODIISQXOOPFFRZADHMYMZNGQWPSKTUOFQEYFGPOZAYHKUXIUPPXUNCEEXMSSVFJJEEIWQWTWTLQSMYBAUMFIRBLYZVYAJNWLNXPUACXGFBCDVFDZRVKNDROCGYBWGT");

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
    msg.setTimeStamp(0.289457950084);
    msg.setSource(63995U);
    msg.setSourceEntity(155U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(185U);
    msg.type = 57U;
    msg.op = 193U;
    msg.request_id = 40068U;
    msg.plan_id.assign("LADDWSANAAJJCTGDKRZBUQQURVPJOSLGHHBTRCGYAJDLVKSPKNAZICMJMZWZGJDFJWKRLIFCDNIUVDOUGFPTVNWKDXJQIFMGYEBZFZWLYPOQOJZBTLTNRSQERRWUWKMETTHHYSYXXVGCAISGCNEXYUPBWCNEMHOQOFXPA");
    msg.flags = 46192U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("BSTUGTBGRWYKZYYEEYZPJALDXRJMGFXVWLCUEUWHFRROXENGGEFDFMQKUNFVGBXUEWTKPRUVPKAKIIDVIKFURDPARJJVJKNDCBCJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZLDVRYSTCITPGKEFUHPITNXIMEZCKROBTJORDDDTGDOLMQFNAASNRGCDYRUBIGCROHUBPMFMVAZFUFWLAALKRCHLPERIIBITWZQQRWBWLKXZVPUEQWHHPZLJXJBKVMDEQXYTMVKLYLPHZUTWINCQTMACUYXKONBEVUMBXZHGMGCUWSGWFPLDONCQFAWWZFJQIJEGSSAAGPNHKEYYSJUHDSN");

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
    msg.setTimeStamp(0.452242364613);
    msg.setSource(17715U);
    msg.setSourceEntity(143U);
    msg.setDestination(41833U);
    msg.setDestinationEntity(53U);
    msg.type = 142U;
    msg.op = 174U;
    msg.request_id = 55991U;
    msg.plan_id.assign("XCIOTMWJZHNCUNVRLEDYQDZLFYLTZTCKZSUWNFZZFUOBQOKENGGSTHXNGOMBMHCREPBPJSSGXYMQETADILABJTIKCEQFJSRARHHULQNIDIEIEUCJUXJYCTBTVPRCJKFXWFZQDYLZRQVOBYWRJSHCWOATARWXIFKVXJRIEYVJNSPMXBVMOZYYVQWXMLNHWHYKPHFGPTXLOVSMAAKLVBOADKUAHQPIEGKWWIDOVUUGZNFKDD");
    msg.flags = 35987U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 15682U;
    tmp_msg_0.status = 200U;
    tmp_msg_0.text.assign("HTPTQCCHTLZBHOMTGEJEOWKNHOTNFODICGMSVNZZWKWBPBVDOAYVXFYGRWHNAHIXPUBYZFQYWOGMDMXZPLCGHIKIFVRKFQPSGBYGXAJSEYDWFTBJDILTEKZQJAHAFNTVFQKCVXVJKZQEMLDTSYXMLWKLMSXISIPFQNWUUUASCRKMRJOPGPRKNEUAZDRCGRDNXUXTACA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UJQKWAAJSGOGPWYVQXOKHUTJJIXRENMHRXLLDYYECEKWINARCCZUPIDHFVFCMIQDSRVWPWAHNGMMIVZOMPYEQCVPBILPDBDLOEXPUAFMBLMLSRDOEBOJHAZVKOZTTTTYTYSSXNSWKAKSGQJFWMTRUFTRKQTEYLQCJXQBHKLIFBXTRDZSSBKCQDCAUEGECWUFGZPLZPXFAFIHUNFCONOGLKRXMWRDXZYWNBD");

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
    msg.setTimeStamp(0.25475554134);
    msg.setSource(36094U);
    msg.setSourceEntity(6U);
    msg.setDestination(1431U);
    msg.setDestinationEntity(78U);
    msg.state = 20U;
    msg.plan_id.assign("SGKWTIUXOWYUBBNJRNRIIZZXWDNLVGVZGEECGLMHDKSIWYXXTTPJNZRMRHFPJJVKZBLYQCCUVUCAZCUSCOCLEHSWDMKFMJYPQOEYNTHMK");
    msg.plan_eta = 1536693147;
    msg.plan_progress = 0.612775922048;
    msg.man_id.assign("OVBZBLFQQBOPDLFJRRLWGTGNHCHJJQWFMPDIHXIBQNMMOKVOYMRJUXVDNZQJREKWJSXBPUPHMVQSUCBDHPCLPHTKRJUSARBOKGMHEYIUEVXSYFXBIXETGKCAEPHKLAGZIQNSTCCMVCATROUKXZLIQSPYXBHAYORNZIDOUODJEKAJGDKZCGNDFAVUZTXZY");
    msg.man_type = 7067U;
    msg.man_eta = 1097297522;
    msg.last_outcome = 10U;

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
    msg.setTimeStamp(0.948813333206);
    msg.setSource(48075U);
    msg.setSourceEntity(197U);
    msg.setDestination(33419U);
    msg.setDestinationEntity(4U);
    msg.state = 0U;
    msg.plan_id.assign("NKDAFEJKQEYCDGFHLGOGQTSGEOZX");
    msg.plan_eta = -1395902742;
    msg.plan_progress = 0.355076420441;
    msg.man_id.assign("DUVJUTGJALGQWYNOSKDIZSVWCFIPHRHGGBCAWRZAECLNMUIKKJIGNOOEGPJMWYLQVHNMMQZEPNPAERXBBGFXVYOXWWRKZBQCHWHILGKNUOTTEXIDTSHZXZHPH");
    msg.man_type = 46495U;
    msg.man_eta = -1587122257;
    msg.last_outcome = 174U;

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
    msg.setTimeStamp(0.661122907836);
    msg.setSource(36359U);
    msg.setSourceEntity(64U);
    msg.setDestination(61918U);
    msg.setDestinationEntity(125U);
    msg.state = 250U;
    msg.plan_id.assign("LETXZPMFNOTAJIYPUFVEMEKOTYLECXEQSVLTALSGBKOYUIUNRBACWUFWAXRHPJOEFYVONXVTPWCIXAHJHBCSZMMULIEVVAKIEZLBTAHDZFKDJWPQDJVFSHPLQJPWPQQGTRDGAZZKBLFBSIILVSEGTNRNCDXMWBXQFHOGWRXSNCWKUGQ");
    msg.plan_eta = 934114880;
    msg.plan_progress = 0.330985868427;
    msg.man_id.assign("JFUCEZQKOQMRUVDBPDOQAXTJMVVXJNSMNWREEMHNLRTSQIVAHWUWDFQIQAAZMI");
    msg.man_type = 6886U;
    msg.man_eta = -1637868895;
    msg.last_outcome = 220U;

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
    msg.setTimeStamp(0.439212438861);
    msg.setSource(13782U);
    msg.setSourceEntity(123U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(240U);
    msg.name.assign("JODWKRQVRABBKNJPMMHWXETZKZIQXFNSGMPECLVQNJBQFMVBLURUEVFYHBWCZHTYTWPICCZPRSKTDVAEFBWGXAYUUVGKGLJYGIXRMZRNDPYKUTDZWICYHYJRILADNCEQQDSVHSEGNCEUNMZYUOFQFQKTDBNDRZJIRSXAIMKMOAASNHVXTHOLFTUOYJGCE");
    msg.value.assign("QHXDPMOOGCSQMSNIHCEUHCYWJWKSXPPOLYZGIULVIJJTTGRKEEWUYDKFCXRXAAPKFNRQESKAMEOQPAWLIZDGXODGVPVZRQTJPNSFFTCKJYFOMVPHISADUQBURIVVKWSMXNOPAEOZVBVBXMKHIWFOEGHLTDRDGTBBZLJONLRVCGSGIBBXDIEULQQMQJDYZAKYQYTFZTLBIHFUNNNCDT");
    msg.type = 157U;
    msg.access = 7U;

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
    msg.setTimeStamp(0.686545592839);
    msg.setSource(57209U);
    msg.setSourceEntity(205U);
    msg.setDestination(9729U);
    msg.setDestinationEntity(157U);
    msg.name.assign("YEWCHFPKUZBAYIWZSPSTWIXOQYDPAUVTNBOOROGDJHFOFYAIPDYXYCQULVWTDRSFANFCIFJZPZJWKCDKXXQHOQBTSORJQVGMVAPRNPNETEQMGWYZMUSHSJINWLQYCBEFHALDLLRVJMMUWRXGZVWWFGGUDLNTJTVTIACCMDEKVLRBMNFOJXAUXKGTHDLNSELHUYBS");
    msg.value.assign("AVXTONUGSSDQZWBWZBZHPSKDBUOQIZHXHWDVSEFQHNOUTQJCBLTVXTXXOLISPDNKSNKSSCWMIVGKXVCJDDFCVMENRSQAEWLAMDFXKGRKGJPCPABHLABMLRRUHGIPGQJZUYTAUBGMDVJHRJEGJGVTLEWLZMAPOFBFQXFHCQOKBAFDIXCTMQWCVTYRHZPNTKOCREBWZMSIEYVFHWRIYLPYUFZTIDPNIMLEUGYEXU");
    msg.type = 93U;
    msg.access = 247U;

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
    msg.setTimeStamp(0.204489052936);
    msg.setSource(48661U);
    msg.setSourceEntity(200U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(80U);
    msg.name.assign("HRLPLDVFRTUTYASGQYAPCRXMJZHSRZYGFFMJKUILEIULBUBLSVADTSCIORPPEKMIKZWQXNSIHQKMXVSPJWDLCUSMUKDWBDDVJJNCZKTYACKNNYNEBSEHQOJJTIYNGBPZNVZXOUOEJWPYDROML");
    msg.value.assign("NIBWCYPSCLUTROEPLBXMMKKISPARWXTEDWABOQSTLCMRMQHALMJWNZBLWNKVINOAYUWKFIRYGQKSUDQQNXVAQUXBTTJJVGOXIDZHSVCWEVRGGYXQWPXZYFCKMLLPTLSUMFDSVGQDYFLDBEFNRGOABPCHRZNDLDFTVMCKCRFAJAKPPPKHEKYAUDJOQIXBUZRYYOSWMZIJNNJEJHVJUAJUPEOCGXEHHZGMIZBSHQTGRYHDZIEHFFFZCVBS");
    msg.type = 186U;
    msg.access = 71U;

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
    msg.setTimeStamp(0.636103628585);
    msg.setSource(12306U);
    msg.setSourceEntity(176U);
    msg.setDestination(27968U);
    msg.setDestinationEntity(68U);
    msg.cmd = 106U;
    msg.op = 25U;
    msg.plan_id.assign("VSXKXOBPMNPDCFCOGIPXEQKTRVETMSBHSGGVFGAPJIOEDKWLSPJEQTWYQKTMHFYVZIYBMSHJAXFYOYUGLZVUDWPYCUGEPNALNNXAETQNVNEHRABBXWCXHYZRFYMIKJWLEKJDBCIAIQZZMEGJSDNZAQIYKXKCHRKJROPNLCPZ");
    msg.params.assign("IJLHWFKQHXUDUKUHBXYYQQHJZVLLEVGLQVCLEABMEMJYRRIFNXBSKPOJWBASJUDZBHSUWKSSKNHYQYACEWGZRHCPAOUMVCVRQIHCPQXLGVSIPKOCRSTDPUDAJFOUAWHPNCFJIWNVAXGDDMQOPRTZFGJNDTEEVSDMINFRYCMBXWFUOPHBFRTIDMYY");

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
    msg.setTimeStamp(0.449680592349);
    msg.setSource(37252U);
    msg.setSourceEntity(186U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(190U);
    msg.cmd = 82U;
    msg.op = 230U;
    msg.plan_id.assign("ETKDUMZECADRNRZIXJVPCVQRWWTSGJGPPOONUMMXULHXBMKAYHXIKJMFKTNWHFFFUNESRFYONKFPKXPVLXOVDMBSYDEACRJJEAKLCAARHPZIEJLHJOYGAMKYJZSEEAWMZPCCQSGNNZZFBWCIFGOLDTODXTWTDDQQQYHICRDKIUSIBDMWJBUUIBOZWRTBPCCPQQRZVYU");
    msg.params.assign("KHVHUCTCZTDYVGQXMMVMDPHYMTDRQMJPETZZWHGXMQYSIVCFFLFAEQYRTVNGNFRJNHZBKWEKBGZBBIHDWXDDEIBROLFUPTOQZSJEXIAKUEAWCKEVTXOXSGRJDYODCVGKOKYIWCCLNBJELORIKEWFVFTGJYCLHGKMSYVUACXLWUXFZXHUHPPSABPIYJQPYLJUDASRQHXMPLGJWOMRISKUUDLBOGSNZN");

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
    msg.setTimeStamp(0.600551472021);
    msg.setSource(9526U);
    msg.setSourceEntity(116U);
    msg.setDestination(31067U);
    msg.setDestinationEntity(225U);
    msg.cmd = 199U;
    msg.op = 203U;
    msg.plan_id.assign("KSPMMKIFDINAXCIFMQOQNNYQZWMPBMIWBLDVCUCTSNUDGVKXQORWASXVXBFEEYVBVHDWYPAQANHZAJARVUFTZKKTE");
    msg.params.assign("JIMTDLYTFTKYNJBDZITODSXPCHFJBLIQVCGEXGLEUNSYOOZTWEXQRWZXALWCHSGSFMWEUNYNQZIMZRQBYMLUMSGAPATDFRKRFHPMGKSVPIUKPOADTVABXGBOHIYDLZHVBWDOLLJCUCOAZ");

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
    msg.setTimeStamp(0.99270536438);
    msg.setSource(62782U);
    msg.setSourceEntity(222U);
    msg.setDestination(23076U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("FIFDTGYJOWJAAVVNCTEZVNXNLSOWLYJAHKHVFSFVOTPGHFFBNPDRWPQZBGXGCDUZPMIECEERNIMDAVKWJPCCZRYSNEKHJAXBSAGYUORRAOKJOJUSQHLKKUHFXMWMRMCMXVYZY");
    msg.op = 40U;
    msg.lat = 0.812956695132;
    msg.lon = 0.225643811821;
    msg.height = 0.226373453596;
    msg.x = 0.174988275149;
    msg.y = 0.43950674006;
    msg.z = 0.281079328974;
    msg.phi = 0.353581169523;
    msg.theta = 0.639615560165;
    msg.psi = 0.645217005783;
    msg.vx = 0.920141897399;
    msg.vy = 0.0671879935043;
    msg.vz = 0.157335923295;
    msg.p = 0.646530221583;
    msg.q = 0.73131811569;
    msg.r = 0.900487903159;
    msg.svx = 0.517621120554;
    msg.svy = 0.0391351296197;
    msg.svz = 0.970104246017;

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
    msg.setTimeStamp(0.158877382991);
    msg.setSource(59341U);
    msg.setSourceEntity(184U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("TFVRADDUUXNGXJELSCCTKVZXNCGPEVPDHGBUEALDJEOERBTHFMNLCLTSWPSDQKXFZCYMXKOJNMSYBYCBVBQA");
    msg.op = 197U;
    msg.lat = 0.383766246212;
    msg.lon = 0.510945167467;
    msg.height = 0.596468869009;
    msg.x = 0.33486699282;
    msg.y = 0.130473249661;
    msg.z = 0.233023800037;
    msg.phi = 0.75017149697;
    msg.theta = 0.888263315294;
    msg.psi = 0.649690444319;
    msg.vx = 0.991428124402;
    msg.vy = 0.576460101742;
    msg.vz = 0.400366317334;
    msg.p = 0.21709267821;
    msg.q = 0.726125463654;
    msg.r = 0.121342149051;
    msg.svx = 0.381326865581;
    msg.svy = 0.631491021114;
    msg.svz = 0.892823495559;

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
    msg.setTimeStamp(0.750514588196);
    msg.setSource(41217U);
    msg.setSourceEntity(173U);
    msg.setDestination(12293U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("HYCIFMVITPBBEIVXFSGXVGXHLRXCWHQBMHKOMQJDFKRDWATRHCHGXWWZKJGRNTCFHEOWFSXNOKFJSCAUIJHUGTLWWOYYTKWXTBBRGKQVPQALJOKPXQUNBQGRTZMAUJNCERPYNGBJANPBNOIIEKSSEMZNXRPVBKPZZVAMFDJUWYMAFEZULQQEGAOR");
    msg.op = 166U;
    msg.lat = 0.201432150711;
    msg.lon = 0.77796338694;
    msg.height = 0.847413608403;
    msg.x = 0.901227779499;
    msg.y = 0.89790507773;
    msg.z = 0.794528131089;
    msg.phi = 0.0341112058248;
    msg.theta = 0.889380774647;
    msg.psi = 0.960234328317;
    msg.vx = 0.803669277029;
    msg.vy = 0.24063443111;
    msg.vz = 0.567789953107;
    msg.p = 0.976099952241;
    msg.q = 0.137469921365;
    msg.r = 0.798468301044;
    msg.svx = 0.0662536417051;
    msg.svy = 0.981559174493;
    msg.svz = 0.756900794633;

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
    msg.setTimeStamp(0.497792373772);
    msg.setSource(4675U);
    msg.setSourceEntity(22U);
    msg.setDestination(39538U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("TIOHEWKRPMETPKGQPQPBVBVINOFFHMLYRIZRUNDTSYWAQNQQLCLEPJELBFJSHRTGEGFTVASCEODCAWCXWJIJGJJVUMTNRUZAZEKSKJIESZMCMJICCDOWYSZUXYJFOWTFLIVQAYTVWZCTHFGBZXZFVWXIRGEKVBOULZXHGXDBRDGYYUYLPBMDFNEO");
    msg.type = 152U;
    msg.properties = 140U;
    msg.durations.assign("JAEAAGBBMGOERJBXGCOUFOFIARZLLYTGPPRNEFMILDLDWLSODQMBSGOCDDXLKQZRNHBWQVJIBOULVXNDLTTWIDLFURPQNVLKUCIWJIKFIGQ");
    msg.distances.assign("FRCBNRDFEVLZJGYSUJPTRKJLFSNZJWJPNWNBBUACCLLNBWKGZEL");
    msg.actions.assign("USGEUOITDPGYPGWUMEFTFZ");
    msg.fuel.assign("ASZFEHSDZTVGTARIYRFZHZMNKXSJAQFXYQYTGWWIJZMJSHCDMXKLWZBPFBALHHYWSWNUBYMIMACAZJKEEUNQCJFJMNUBMRWGARFAVSPXNCUDIQRFKQTVFEGDHRXCLAEEBHWHIGKLLXTBRGPVCAJECKOHOPZIRLQVVSIPUVOBZEYDGKUOKNOWSTEHUDFJESDJLWQXTCFYYBYIDQ");

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
    msg.setTimeStamp(0.0891467251619);
    msg.setSource(56461U);
    msg.setSourceEntity(47U);
    msg.setDestination(41746U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("IYPZAYUXNSFRKSOWYIHAUUWBPAYMAUJDNMTIEQTBGINOZCKTNDKRZYHCSEUAMVGACBRFEXDNMMILUZYUNJXTDQGVQXLPEONDQGJPFKTVKVSTDWDHLYDWQXCMXNTSLICREHOEJMRJBZCCSCOEHEWWGPUFHFVVKPMKQWBGWRXZPAWILWJYX");
    msg.type = 22U;
    msg.properties = 173U;
    msg.durations.assign("PRHXTMLMBSSLCYYCGHZQNEPCRBPPIZMJRKPSYJWCFAKOMDEJKLYVWLDLKIWHIINXOYLMLDDIRSUHXJQPVMLNDQOJRHKBTYMLBAEMHWAIGS");
    msg.distances.assign("QLMXNRHJPSKXFEROFZKWMWUWNUIHIWXCYVTAFQIIANNXGHDFWJNCDREOSBLXPMDVAKDDZISLCAGHBPNZKMQFGHYJLGRYDRGRPTADMZVDZYXHIJGEFYRRGCOKCLOJBKPVUXJFTSIETOYZOFQEUCJVIUHSLZUJT");
    msg.actions.assign("VKBOHOTUXYPCIIFCGIXURNGKSSAHMIDRLRHPHDRZQUURSIGRQWGJXZUPYAXSTJBAXAZNJOFEPNJLBTWOPNLVTLDISJMSOMOEQGYLUWJNAOWKDEZDNVNVTEDQCSCA");
    msg.fuel.assign("ZLPIYATMLDAJQOIUYZQFTLCJBHQUDGYCDKWGBUYCKOXD");

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
    msg.setTimeStamp(0.60799212318);
    msg.setSource(11454U);
    msg.setSourceEntity(85U);
    msg.setDestination(358U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("JIDTBIALHVGYDGZANNJVJXAIJEHHSEYVGCRMHUDLNWIZZRBUSFYZMIRSJFNUDWCFFWDJATARFOVQTWDPCWUWSHFLWLBXPF");
    msg.type = 231U;
    msg.properties = 9U;
    msg.durations.assign("XSHYQAZAWDJTOWWSGUSIMTBJXUEQFENJXNQFK");
    msg.distances.assign("UYMKZMBKTXPRSMNOHBFMKWCZHRSYFCZQRRDKABKXHYAEXISDUOJSPONIQINIQTKBLTUE");
    msg.actions.assign("ZUJPVCRFSESMXYKUXNNBHPZNUBYTAGDKSGTGUQORRAHFIJSPEDBVBMACTJMNSMKJLGVTBBRWPPQPLGTVXNIGBHGTKEMDQZSDPLRHEBDWWJFFZK");
    msg.fuel.assign("JFMHPYWZKASWZTVGLJNBDHGQYBQUAGJZHFNFOQLNOIYZKVNKEFQXZIBCGLCAFIDOLZMSMCPLMHWTCVPPJJDJJARPYAUVGJMRZCWNUJBXPWASUHTNCSSSSAYHOHICRSANBSHVEKWWOUSNOGVQVITBDXOMJKMQFCT");

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
    msg.setTimeStamp(0.325806622857);
    msg.setSource(55919U);
    msg.setSourceEntity(91U);
    msg.setDestination(58768U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.873918901148;
    msg.lon = 0.977514218739;
    msg.depth = 0.724541867018;
    msg.roll = 0.0921684888816;
    msg.pitch = 0.594988364188;
    msg.yaw = 0.494693501776;
    msg.rcp_time = 0.743995135216;
    msg.sid.assign("IPFEKNRYVEOJPSITARQWTKQFINMDZTCRWJJQOJTHXVNKYFROPBGVEFEAPNBUPWHGGOHGBDLDYQUBMULSQOXWDNBHGUYZZWOQHAXKXCPFCAAYKRVIEFTQHCKTHSOBZZVCIMMAUBLGYLTCREUTLQKSEOAJFZIPYMBAJNLHSLMMYBJJUC");
    msg.s_type = 154U;

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
    msg.setTimeStamp(0.256959070781);
    msg.setSource(41004U);
    msg.setSourceEntity(206U);
    msg.setDestination(58483U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.783036522972;
    msg.lon = 0.183913370854;
    msg.depth = 0.808965953365;
    msg.roll = 0.413464412683;
    msg.pitch = 0.632458845783;
    msg.yaw = 0.712296160851;
    msg.rcp_time = 0.114457368814;
    msg.sid.assign("NHUACVFXOCJRDMWBHCALTEYBAQHEIMJLINVFTTWHZLWSJSSURBXUESAG");
    msg.s_type = 44U;

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
    msg.setTimeStamp(0.673102140928);
    msg.setSource(13939U);
    msg.setSourceEntity(18U);
    msg.setDestination(30188U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.556587053449;
    msg.lon = 0.5454165705;
    msg.depth = 0.439362442676;
    msg.roll = 0.976209628755;
    msg.pitch = 0.838094029075;
    msg.yaw = 0.276564154755;
    msg.rcp_time = 0.503885385662;
    msg.sid.assign("UVTTIKLLCVAWYIKGEHHZQDOZAXWXTPXIFQNWBEDWSAMLFGLHATCLMYDWJIUTLLWRKXPHFJRNUGHBAUYRMBDEWCMEFNWTMZPXQYXYMBENSODTKYVQEVTUGHORBGJUHQUMOCYJMGLKXQJMZSHSVBRLVIJXCCZR");
    msg.s_type = 26U;

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
    msg.setTimeStamp(0.539911024865);
    msg.setSource(15383U);
    msg.setSourceEntity(93U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(84U);
    msg.id.assign("YZCPYEKEMCQDIDJUFXENXHHFYOBLCTBZFRGUJQNYWPDFHUANHTDJKMOUMFJWIWXKWROWRTGLCCOJYSUNYATFWUISGBTBKKGABEHSAPKHBIIZC");
    msg.sensor_class.assign("EDBWKWVUJZOJLNMFRUVAEWGFBKBQUCAGSBGOVJJQBHXCFTTUMKNDDZLNRVYCPPKUNMGQRKPKFQWPYYUHPRTBIEJMQZNPSCEHWCHXQTLSUPFYMTOXGLDGCRGVALSIXVBIZWADEGRIJWXFIQACOSPFHSAFZOZCTKXXHDWLYO");
    msg.lat = 0.244258114262;
    msg.lon = 0.0239035658263;
    msg.alt = 0.185983031837;
    msg.heading = 0.242659715479;
    msg.data.assign("UJCVTKIWEWYOGLWMZHVEOFACQAWNICKZDVYLYWVKYSOQDWXRZOZSFALHBEXRDLGDVAIHGBCQDKOQOXHGYALLCTNFGJXOABUACQIEJHMFRSAUZUZGUEZCHBSPIJKMNRDQFNAMSGLXKGDREFLVHEYSICLHUWGDHMQUPJMSSNYYORQVQYSCIKIMXBBXVZUJOTMFMICUNXRKNVPJKFT");

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
    msg.setTimeStamp(0.102475361216);
    msg.setSource(22283U);
    msg.setSourceEntity(159U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(70U);
    msg.id.assign("QVZRUQKXDUXOHGVIBBSVRSJTRMWJTGKFHUDRTCHHCENCBTXDEEMVGRWSMMLMVTUPFFSCSNIGOEQVGFWFPSIUETBZDNYOMYZYBIQTDLWXZAIUSIGOYYNRVQZOYMWOCSDF");
    msg.sensor_class.assign("UYHTLOZGRFBJFFNPWIQHMQFKRDDVEXQKBMKOFYMAZROUYANDCXSISZGLBQHPYHCJMFLXTKKVUCORTXNEEYZQZTTXXRLDCIEUZVKGARYZMJPKTXRGBNPIWO");
    msg.lat = 0.369789019468;
    msg.lon = 0.679348884436;
    msg.alt = 0.974937704603;
    msg.heading = 0.318210435522;
    msg.data.assign("PLAKFBVVQHUEKLSAOWOXQXZZSRAKMQMIBDLZUWRLTXIKSLATRTIHRUGFNTBMIMVKNGBRBGBHWPQNHVEP");

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
    msg.setTimeStamp(0.11441474981);
    msg.setSource(44135U);
    msg.setSourceEntity(28U);
    msg.setDestination(55719U);
    msg.setDestinationEntity(254U);
    msg.id.assign("RFZUHQRMJCMDKUVJHYTUGUNVMPZEJUXPBLNRVABHPSVRLNZXNSIEUVGYMODZJUHAWJFOXTSHOEAQAEBWINXKXVFCOGYZCPADOCBWFLBPTKFNARMWGDGGYWHCCTOZPOBVQVEMHJDYZCRYHDIQFTESIKKQYIXCUXIXQSZTKLWJPOJWIDLDPMBSDIHQLKTJCRTTJISLNCKWGFWRVUIDKEFFQBBGNXMFQHLZNYROUXKBNEESAMRZ");
    msg.sensor_class.assign("NXZSSRKITSJMYQDXEGGTTKZEAOWTKDUQWYQLPEMBMSUZGGXRMVFASUOLSTJXPCELOJVZOEZIADETWIKVLJAJAQPXMFBNYBBZDAVPYAAVKWUTF");
    msg.lat = 0.939868873891;
    msg.lon = 0.909786021916;
    msg.alt = 0.736804850219;
    msg.heading = 0.53707535457;
    msg.data.assign("ANHWCCVOGOBDWDJSADKZEJMGUQEWJYYTKOERAZJUQALTYHPCEBKNBMLMMHMITRHMSEHPCPTSJWFXAFTCJNNEPTRVORXONUPWYSJGHKOAXYBZWTYQPHZLCBIXTPEZXHCVTJWBVM");

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
    msg.setTimeStamp(0.988523736321);
    msg.setSource(14974U);
    msg.setSourceEntity(180U);
    msg.setDestination(40291U);
    msg.setDestinationEntity(157U);
    msg.id.assign("WPLGFXLFYTUNQLKPUODJAPMBMCWOGZGWDDDLCPLABJPMFNOBMYRPJIGTGAHNWVZDLRFMNQCMXYYUJUYCNBLLKMYXQTZSIHCEKBXYRESTEIQVEIIUKRRAQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NPUQSWEJYUAVXJMALJHRTBSRFIJCOAZWYPLSOSKYNKRMBTDINGUEDXWJCUTEYBHWRWAMQOWXBYUKFTRFFPIVQCZPZXBHTPEETODRXLSCSQSRYMUEQUGLLJKUFZXJQGHMGPGGACJAHKKHRWXCILA");
    tmp_msg_0.feature_type = 81U;
    tmp_msg_0.rgb_red = 105U;
    tmp_msg_0.rgb_green = 79U;
    tmp_msg_0.rgb_blue = 114U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.123879694311;
    tmp_tmp_msg_0_0.lon = 0.616732033344;
    tmp_tmp_msg_0_0.alt = 0.536449595778;
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
    msg.setTimeStamp(0.476992681752);
    msg.setSource(33842U);
    msg.setSourceEntity(72U);
    msg.setDestination(20670U);
    msg.setDestinationEntity(225U);
    msg.id.assign("XFTDTSDZIBOERTYKHJWEZNSFOXEIDVGWPUALOIUBSPGAYYPNNVIBZQUDHCEEYSGTBKVIFLKZJOMUYJBUOYQODQHUCGHRBLFHFORIJFJUANSAQMLJMXBKTQJKGYIEWEPRUVTXRDX");

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
    msg.setTimeStamp(0.997152503075);
    msg.setSource(49731U);
    msg.setSourceEntity(5U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(224U);
    msg.id.assign("KNFSZNTLIBQZBFDJPDXWCKMGOADYOVBWJHBDGCYGGFTJWMLNBMDJLYUZPCGZWFBTIIUVIEVAEISCUGOQWICZRILULYZSMXVOCWUREYCTBCWGARTGMFERRNXQXESEEHJLSJU");

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
    msg.setTimeStamp(0.0872047070469);
    msg.setSource(16697U);
    msg.setSourceEntity(37U);
    msg.setDestination(48908U);
    msg.setDestinationEntity(156U);
    msg.id.assign("EJKMAUXZSQIPCOGMLDMSBHVYHOLCPIMLGWTWTLITEOOQOHKVCKDPMWZTOFZRZCWXBBREIYQXZNYCFXEAAQRRYXJGUWNPHNBZRGHLNZYGNODBQLWMWIGFVQDPUDLCTSDAWJTCJCJVSSMTUKJN");
    msg.feature_type = 192U;
    msg.rgb_red = 59U;
    msg.rgb_green = 165U;
    msg.rgb_blue = 71U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.620551362693;
    tmp_msg_0.lon = 0.147532259791;
    tmp_msg_0.alt = 0.128320480728;
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
    msg.setTimeStamp(0.817386065119);
    msg.setSource(41910U);
    msg.setSourceEntity(9U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(147U);
    msg.id.assign("SUMWAREMQYIPKWCZAQLVTDAFNOFFJQRDTEIFZHPLDKCSKXSJ");
    msg.feature_type = 201U;
    msg.rgb_red = 217U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 87U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00876384811345;
    tmp_msg_0.lon = 0.819344558137;
    tmp_msg_0.alt = 0.362190566684;
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
    msg.setTimeStamp(0.24665338183);
    msg.setSource(31895U);
    msg.setSourceEntity(153U);
    msg.setDestination(35221U);
    msg.setDestinationEntity(55U);
    msg.id.assign("CCCXYPFISVT");
    msg.feature_type = 100U;
    msg.rgb_red = 38U;
    msg.rgb_green = 53U;
    msg.rgb_blue = 16U;

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
    msg.setTimeStamp(0.190016187465);
    msg.setSource(2958U);
    msg.setSourceEntity(225U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.739458069834;
    msg.lon = 0.262002724544;
    msg.alt = 0.718232502201;

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
    msg.setTimeStamp(0.69497019758);
    msg.setSource(42664U);
    msg.setSourceEntity(172U);
    msg.setDestination(47967U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.17735275254;
    msg.lon = 0.772782403462;
    msg.alt = 0.839465164649;

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
    msg.setTimeStamp(0.391563530171);
    msg.setSource(17399U);
    msg.setSourceEntity(228U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.840533920863;
    msg.lon = 0.685370013711;
    msg.alt = 0.450939028554;

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
    msg.setTimeStamp(0.944612851906);
    msg.setSource(30215U);
    msg.setSourceEntity(58U);
    msg.setDestination(37874U);
    msg.setDestinationEntity(73U);
    msg.type = 245U;
    msg.id.assign("FSIVBCTMGLNXDHOOKIXTOLKIANDQYBEQIYFQSCRUZHOZGIZEWACTGQLQKNBDNELPAXVCDMIFVCVNSEXYFJGTBJ");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 99U;
    tmp_msg_0.mode.assign("TDZBXQNCGZNSEKRVSFTTSFWYWJGKEGRHPZHIXVBIHUGZADGZUAVMRMDDQASQLZXBWFUCUNNWRZTCLYPKMLLGOJ");
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
    msg.setTimeStamp(0.97637743805);
    msg.setSource(12924U);
    msg.setSourceEntity(110U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(12U);
    msg.type = 197U;
    msg.id.assign("GMBTBYLFHVEVMKIGAQICXMPOULBDHHCTTXQSWCMNKSYBCKXBNRYSAMDSLEWMHHEDAOXMJCTSQNDOJEDUEIGDPUCRMQOVAPKBUQCVPZXYFWEDSGMNTYHHLLURUVFCRAULTIMIHWT");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.895845004369;
    tmp_msg_0.x = 0.583693902816;
    tmp_msg_0.y = 0.337217082197;
    tmp_msg_0.z = 0.545935880621;
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
    msg.setTimeStamp(0.603674492601);
    msg.setSource(64370U);
    msg.setSourceEntity(59U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(220U);
    msg.type = 222U;
    msg.id.assign("GYRVWPVKORNQGCWPQQMWXFTUGODUZCKBVTAIJXNQFUZUXSFKKRVXBLXYKJMJGARLDVAMRYQPKWXSRFAGMYVHTBEQHNAZPNGUDESSHMCIOKTAFDVSPBDSILCLGENACDTLZRUR");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.987057581381);
    msg.setSource(5546U);
    msg.setSourceEntity(121U);
    msg.setDestination(30278U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("MPJYQHOWDOVBKKDCDDIYLBXZWXCEECXNCYTXNAGKVJGFTNOTNVNCQAMAZTCVBBLEEMZZWBSVZWBTPQVQZFNJYLSHXQMRZAURJLEZBGWAKTHFFFTPVGHISPUFCLCW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QYVZQRBPAOYJANFNIBURIXZEQBFCPTRRCBQOIBTSNGJGZBHWLXHTHDJIJONSJVFUODEGGKYLZUMKCDVTUPWGCTLWZMEZLVEFEAVNHAJTPYBAIZBXRGVKUWFDKVOJXYMASCARTHFUOD");
    tmp_msg_0.sys_type = 157U;
    tmp_msg_0.owner = 28056U;
    tmp_msg_0.lat = 0.949149908524;
    tmp_msg_0.lon = 0.221897284164;
    tmp_msg_0.height = 0.796396555319;
    tmp_msg_0.services.assign("CPORLYTXHCPMXIEYDMSOIUEDRDELJOLHADBKIFFGJOWGBANZLICRUQCJBFMGCMUMTQPYNWYWSCPNBVAXFESDDLSNSTGEAZUVVJWIONCFBVDQZWXXWHHQSUKMNUYAGKBXBYJKKRXRLMAMXSNVIQWKQDJGQXKHFUYVSDTBZSKJHNVZSQGOPIOVPFTZEFACTQRKRJEFYPILQUKI");
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
    msg.setTimeStamp(0.594801658617);
    msg.setSource(28984U);
    msg.setSourceEntity(8U);
    msg.setDestination(20008U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("CRCLYYWEFAVPDJXDBPOURIZNRNRTSBMGCBEKNKEQMVQDXBNPSZETVZNKUTARZDQRGOILJQMMUVIKOVQYARBPWDCQSCOEABUSSJZPDMMDEQXOHVEDAAUYYXFXWNITHGBOAMYITYZLFTSQLUSVEEMQUMYJHULGHCVFVIKHPGRORJNFYWCKJBRXIBXLHSHASPJCFWKABMLIZHYTPCNPOZGWTCIFWKP");

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
    msg.setTimeStamp(0.878292801349);
    msg.setSource(37444U);
    msg.setSourceEntity(55U);
    msg.setDestination(8749U);
    msg.setDestinationEntity(112U);
    msg.localname.assign("SKXVLWRNSHXAIDMAVWKMMUIKNMFXUKDJMGZTAPALJBOOFEBEXXMBBTVUCYSQCYFZJKCOSDQANGFCQEOHRWZPON");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SOZIHSTXJTGVAXEDDHOACBLDUDIXMGZCZ");
    tmp_msg_0.sys_type = 106U;
    tmp_msg_0.owner = 21223U;
    tmp_msg_0.lat = 0.641805106157;
    tmp_msg_0.lon = 0.128818561007;
    tmp_msg_0.height = 0.557933703006;
    tmp_msg_0.services.assign("LHSGDDSUKRAZPXSNMUQJPGVKAVCSUJEGHLPVTWHBANMUGBKPLMBYFYVOSDNYTRJYQCCCREUSQEKHUEOWWKSIZOMPZQNJTSHIZRCJYNBLNKXKELUQQQWRAQVJEDPIFAXRGZIFSWJCYDMZOPIKGTDIXAWGUFOQTPOBKD");
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
    msg.setTimeStamp(0.436475407484);
    msg.setSource(25086U);
    msg.setSourceEntity(157U);
    msg.setDestination(40129U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("CEOQHXHDILJPLCDTYIUNTBLSTAJKYLNKIYMHGXWUOMUGWIKFOWBLDFIYHLPLVJTIPAEZUFTCDEAIBEKOUHTFRXKVWRCECXGZWCHGSNYMPB");
    msg.predicate.assign("OATKKMUPHMICNRIRDYHGPUAOIA");
    msg.attributes.assign("WJLSFWBOHYZRHIKLNAFIOCNEPHESJGXLEVMBLDSNPRIQUFROZAMNGAUKWGYCPQTPMGCZVAXIGRIXBJCQTZARQTWQNSHHBDAPVKJCPYYTIWSYGBTEJZCPFUMMBGIFBGMGSLMKUZWFOZVDTDSTLLVKOXPQKLVCEUNXJTGXDMPFKESWOBNCDNTIYQVDXEVPEBDNNHFWUYRQAJJZKRILALDBOAQTUHFVMRRYOHFEOOWCDZUHRYYIAM");

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
    msg.setTimeStamp(0.299303783916);
    msg.setSource(52838U);
    msg.setSourceEntity(23U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("XPLBBSHWFBLKUBGVGQOOQOSMFIZCDLARKXCJBNTDARPGXPAYBNBTZIMTAEXXLHNVCQEWFSKJKZZGZJFJTRUEOETZDEVRQWOVIIBRQGHZKMJUTWZLUNVGPIDYSHHWJWEUZRQNPIXFRDPQFYERSVADMPQPKIUVSMHDHYGATFKMHUBKCUJOMQZT");
    msg.predicate.assign("QEVPYPMTZAFIHDEOASQRTRCZNPPBCBTGMDPOFPBUJBAOQFGVLWWQZGXWEKUWJKGPXCBYZTRMOQJUAGSDNEYJHHOGGSHIHOKDRAQQUEOPMLJYBOILNZICXXHZMBYNUMWFISVLAOSUWHVTDDQOBWSTHYKA");
    msg.attributes.assign("RVQPPOSATPIYAJNHOYKEZRBWVWLYEEVFMSSQAZEXXMYRLDDQRSBRRBNYVOCGVPGAPDIRHPFTBXGYUZCVLKYPJJBABWGUINBUDJDZZFHEDSLCMAGAKQOOSDZGRUIOOZNIPHSMGXWRJQK");

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
    msg.setTimeStamp(0.355746170231);
    msg.setSource(31215U);
    msg.setSourceEntity(235U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("EQDOOCDYQLABEZLUAESDNQMFNQWGZRNXWALACQNRKPIVECMIGVKJOXWUUJLBNIFYVRVLOUQRIHQSTCHSSNUWPGMMTBRKIWDZQRPDFQCRWOGUYZFCUEPLKGDFLXBPHWBYDHIXMXBXNDNRCSJOTMSMNQXXIPSHLUKOZKBMYNHHWPEPDGZSOZOKFRTELYIZTGHPHGJMTYCTGPGVJHWYTILKCXVWUSZFFAVBAJFEKYTJ");
    msg.predicate.assign("ZKUBYTDCHVEOCMILLYQTXEZZXZTDKKVOUBCMKTCFBHACJOSBCGRSDTNGHJNOLSEPFWMNRPMEFJVIQOJGILYXJUFLMKSHGDQLTBFUUWAMGIWYARHIMWVVYSCQLKAKHWZADUCUVHFIXSONPUIBOXRBZBYNIOZOWTSFJWTRKNQMTWPRLXAASZNJ");
    msg.attributes.assign("FUNTPUKAVAAAWWGRKIPPBGVAIFGXNJYYPJECWQEBWCRTUTRSOPBUZJBSYEDIRGXKNIFJMMEZFLOTPGRFQBGJSFNFWWPKOBCLMDCYZBCTVUYWXVEWMLFSPEEOOZXVOTIVQLAKMSTQIPERFCUKDLNAYCNZAIMLDUSKLRGNVFTEHHKMQNYPCQZTYDRODZGIJVSHCBDLJVQXLXCKXIOQEGVYIXHQUBNZMHAWJYHRQDSWTDSOSHORHNJJKUZ");

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
    msg.setTimeStamp(0.619703401087);
    msg.setSource(27510U);
    msg.setSourceEntity(14U);
    msg.setDestination(52070U);
    msg.setDestinationEntity(123U);
    msg.command = 90U;
    msg.goal_id.assign("BTBXSIVJWEJNQZJTIGLFTZUQGXDVGCRKIADOECWOUCORYPYYMSGZNKXHBDXBAKSPPHGIEWHLLPLMVGSNJDSMYSRHISZHIQPCEOHIGVUSQKQABKADBKYVXLDFWCNDYMFVXAXHZYWTKJGMMVTARKKWNJDACUIYF");
    msg.goal_xml.assign("ORSHCCULWQPBRSGRQONJWGOSKIMODLOIZEYTKKBSSEVZYWAWCDJHUWLEVVLEDLMRIMNNAXQRLAFTMYRWSSHCDBFEOTYNGHPIQXKTSPULKOFYDQPCIJSRDAYYBBUUOCJYVZRQHXJNAKETDGENYCLUASIIHZVIZMZVFIAHTWBZKA");

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
    msg.setTimeStamp(0.028897099687);
    msg.setSource(19189U);
    msg.setSourceEntity(27U);
    msg.setDestination(1033U);
    msg.setDestinationEntity(116U);
    msg.command = 127U;
    msg.goal_id.assign("OFRGUCQDNIQEVLCAAVJTTXCXOEGMRCUYYKEGVJHKXAGOHEXYHBGWLZOSBFDIVFNWSJIJETIHV");
    msg.goal_xml.assign("VDWDQNZOWKMWTFGJLXSTAKKGJGIDYZASCYBUPXKEOIBGTZTQFEFCUNCXKOMEIPHRBUARJMAGHPHNJCWNDYRSRKUCLFHXCMTJOBYTSFDVMBASLQJYGRZDZMCMLAXZYVPEEBXCPJBTPWNJPLBRNHFWOPRAANEIITDTLRKQFEZUFPILYHMIDTEOMYJZQAHBDZUFSUXQVGVHRZQVSWWLNOOQXGCKEVULXBSWHLPKVOGRYA");

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
    msg.setTimeStamp(0.860388990853);
    msg.setSource(41114U);
    msg.setSourceEntity(46U);
    msg.setDestination(5536U);
    msg.setDestinationEntity(4U);
    msg.command = 11U;
    msg.goal_id.assign("TPXSZJLTHSWPPOKCQQXPDUINARAJNQHMKVKETEIKRRCSDGQDFIPZMBCIHJFGXFOUM");
    msg.goal_xml.assign("KDKMVGPNVQOFNWSWSFTXLTBNGOMHCVLEQJZNPRHVEUPFDOAJOHRPSTPDHMZYWMLSQUWDHGJRLIXPPDYPXVZWIBHTKNEXSLCBDDLCEBGTFHCRNDSZGIJZJYQCSYFAVHYZMOCABYSKAEAKTTQERXYQXFRQ");

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
    msg.setTimeStamp(0.622050614313);
    msg.setSource(26971U);
    msg.setSourceEntity(23U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(113U);
    msg.op = 49U;
    msg.goal_id.assign("JISWVRXCCFNSSPOZWQJVRBIYMGWJGDRKKJAVQTVBSPQNYNTQYXLFEDDPMSNVQUVXSICDNAYIUGZGJECYKJO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HUXPDLFNSKCRHWQINFJEXODZWLVSADCBRJKPFFEGCKNVDJWKVKMTZHUMGUTUHYVGLWCTJEHOKPJMXSZSMWARHIBGBAAPOCNQELRPEOTDXFQKZPLPMNQDDTXSIDVUOZYIVGJWIYBZZPJTXAOCXETKNAUZJGEC");
    tmp_msg_0.predicate.assign("MEGTWQHRJOZJBTWCIFYJGNHUQUBAYLWKMXOXYSTQNFONCYDKUPJRRZQWNLVUUFFVDUJZNXYPQTFGSOVJDEHIWGXNDEKSXEGKMIOHKOEP");
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
    msg.setTimeStamp(0.485762634606);
    msg.setSource(64141U);
    msg.setSourceEntity(28U);
    msg.setDestination(33145U);
    msg.setDestinationEntity(47U);
    msg.op = 187U;
    msg.goal_id.assign("VUWICLJWNRVEKECQOSAKGXXFSPWBQTQSDEZDKYEFKGFZJELLJYFOOYXMVCMBTVBNDGMETZUAURNWQCMXGUCIIFFGZILVISJAEPHHTEGOMECQYQAPMIDLGCFLBZIRYJUGSEIPFQJNYRTBDRLOLTCPMYOAZQXNNQOFAWPYAGYUWURYKVKCMFAVOCKSMDKHRHHSSTNHLBRQPHOTPZDAXZDAUTKGLNRHWTSMIPJHVVXWSBWOZXUIDJUBJNDPX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XTAVRJKHMXCFEESLXAUKE");
    tmp_msg_0.predicate.assign("OTWNRTEXXFIHIUTNWPFJTUHDS");
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
    msg.setTimeStamp(0.548952359833);
    msg.setSource(35182U);
    msg.setSourceEntity(39U);
    msg.setDestination(32451U);
    msg.setDestinationEntity(169U);
    msg.op = 164U;
    msg.goal_id.assign("AGAZHFTQZBMKTKQKWVZKFGJAPUSRBIFQHPNIZERVJKDEGFGDISQIXXURYMOHWPCYGOHTIRLLTLHTXGZMFVWXVHYSDNSJSBQDHUFJDXLPREVYVZYDPSCJWUULIJNOZBVXPKOGAULOQLEZYKAHNIQCEANMBQSWANZRMWAJKGCGKMOUOCTPUQZOWFXKJCECTMDLHGYXMRNNBPFISXVIINWRYWRBFUJSETJEC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WVKZTPTDZTRHZJEDNXLDYXGZHQKZILRZTCOKNYWWVBPSGQMMYARBNQVUSJXBEBBEWHDMOCRHMACKUFNDTNLKXQSPFPUUCFWGNMOJUFDASRLFLOFESTDMEAQBUGKLIGZVMAQJWUHIKHHIACRWOLJCHISBPL");
    tmp_msg_0.predicate.assign("YXGYGWORJNRBFCMQGQKTMAVZSYQLKTKIZHEYCEOMVTVAYDUZLOBYFAXGJBNTNMMFUBCWMNTSGOQKHWZRBMSLJJCTVHYGBDXRRQOHAGWEENGTNXLQIBUVWZADPDHPEMMEUUSCFIAVHPSPPYIEUUZRWZQEWLRVGCLXOUIKXDSPIBIYFOASACUWFPDQIHJKXWBKKLTCIATHHQXVAYNLJVRRPFXTNFKDSGUZFDRLLOJZBOWIFXJ");
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
    msg.setTimeStamp(0.985585261865);
    msg.setSource(60878U);
    msg.setSourceEntity(58U);
    msg.setDestination(19760U);
    msg.setDestinationEntity(148U);
    msg.name.assign("GYGEXABDXMPHOUOACWBUSXCQYIVFSUZPAKUFMNAL");
    msg.attr_type = 175U;
    msg.min.assign("VOVKHKFZXHZRPCJNTVRRAQTVCGRASCDRNYWFOOJMLUXPWPSIYKDMUHMCOGFBQQFLMSGRTDXNKRWLDDTWLBGT");
    msg.max.assign("QKPCGRVBPVFZBIHZKAULXFBWXNDSWFXZQUGRECWLZNEQHIFIPBWAUTOWVYZWORXHYRSHAVYDNTUMIZJXXNZNEVEBWEKDRDJBKAUADFRCIMKAHESMFMMPBHQPQMCHGWXSVONTJMYASSSYBFORECSVBLERZJNFOAXIGKUXVJCQOMFYLGQQNZUSGKGKKEAWJRUVYTTGDTTHQJVKZOOLMOTIHDNJDLSGITGPPJBPX");

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
    msg.setTimeStamp(0.373110247497);
    msg.setSource(64433U);
    msg.setSourceEntity(204U);
    msg.setDestination(158U);
    msg.setDestinationEntity(175U);
    msg.name.assign("LVNZDTLPFGDAWFFUWZBEJWYGVOEPNGCRLGEJTEXKPUSEVPNMTOISRRXQUYQMNKVISBSNIDQYXOQQWDXFPIMQOVXPZGFMVGBJJLYSONYADUHHGBZWJBJRJTMLDXIDTIFIACVWXCURZ");
    msg.attr_type = 74U;
    msg.min.assign("TJTYDMNYKEQJNJLOSEOBGISWOECXFMQJHVRATWMDBPMUECWBSAWQGRKVVVCNWAXXLYODZKLEKOGCZCHIGQFFQCVRBMUAPNDKUFHRAZMPKUCMLEQJLSTNIUGGBMEOFIFUXWRFZZAMYLPDVLAGOENLQIKRTWLGHRYLXVHYYPHWKJPHKAICDAYXDEVSRFNQGZNBTBHRUGFJZFPSTWAUOCUSBMJZX");
    msg.max.assign("KAKJWFBVTTNIWZPY");

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
    msg.setTimeStamp(0.0748609409304);
    msg.setSource(13835U);
    msg.setSourceEntity(41U);
    msg.setDestination(20138U);
    msg.setDestinationEntity(78U);
    msg.name.assign("KDIRTGLKWAUUROWDBHMSHNCXGFPQKLPJQWRXAYLJXKVJNFBUHINTAIQYKFOSVIGLHAITKIQZOYXTGEBIKAOZVDLWDHVQRU");
    msg.attr_type = 152U;
    msg.min.assign("MQYOBNDUYESIKBYNIROELHLTUPPFJDYQLFQZRGJMWBMYQUBZ");
    msg.max.assign("VLYMRVWUOFWPLKWHNGWMKMDSKJXSAKXKNBVVPBNQNKJLIUYYMTCIEHSNJUBUOXKYZYPSVZMKTEEICGEOEHCAXRAXPECCFHQZ");

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
    msg.setTimeStamp(0.000375084081834);
    msg.setSource(57671U);
    msg.setSourceEntity(147U);
    msg.setDestination(56620U);
    msg.setDestinationEntity(21U);
    msg.timeline.assign("EZZTWKOUPOWCNXXXPXEDPMEMTLXMKYBSDJAVHFWRYBTTLVILGLRROYRTSFTBHGHCONFJINQXODXSJKTDGSCMKCQLFBJLZEWSJKFT");
    msg.predicate.assign("VYZAOSPGHKXIXKXQJBHWFTRVLWUSPDBPCJXSDDTVGZZNQIGKYXHZBIMMRIMGMAFIPOXRHPOTEKHHWUMYAEYVLWUFWTUFTRVMQALYVFBWLDZOCEDBWQWJCPKUUCPDQRKKDBHTIKSERZNAL");

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
    msg.setTimeStamp(0.989134525466);
    msg.setSource(35140U);
    msg.setSourceEntity(144U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("NVOVYSAAENEEIEUOJWKUXNLLKTOLPGWDKOZFGSBBNUMVQMYYOHMYPGOIXMCNKZXTARBUAXGBPLSXEVOVPSFQIWTMSADJJSGIIFZJSKXCRRAUCMUMBKGJRECCPGKDDMWPACDOFFDWZQDSALBXVPHNVROTNJXQHKFQSKYLCFQNZSWBPFJHLHUCIRQGHJVYENTZPRUWLRBHAWHYVGZIDTFDZBPEYQHURXQLLFTAUOWMZMBIRXEHQTGZKWNIITCEJT");
    msg.predicate.assign("YUUZLFSXHPPNMRCBKKAZHLJLZDOJHSHUAVRCKEJTOKEFEFDJVXTYFMKPRUHJCZCPXICBLWJTYUNZVNVBROSNKLSQEGPYDBGOMAETBH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QITNEYHVVDZYNLMFKMAGSMNMHMUKXBXTWRXZFLAXTWKBPBUWEOOMUOHKRMUEOGRFJTPBJGEKFCOIPELLDFQNHLSQSSZLRCQGERFXIJBTGEPGYZMWFUVYEDEWYGTCDRDQYKAREZCNINJKVINPTOXZCJSRZPIDZFPWVCCUCMDSQDSQAKSRGHNQDHOWILRCUJNWPFAWTYUIJNQPHY");
    tmp_msg_0.attr_type = 57U;
    tmp_msg_0.min.assign("LWXLVYQMVXUXOZYWKIHJWLCJAGQDCOLOXJHEHZJRKJNJTGUNGRMXAFWHOXIQBHFTQGOTHPSXUNRUAMHAUBIWZLKSLZCABEQZSKMDESUN");
    tmp_msg_0.max.assign("MRSXWRYIHNFAGVYOIGCSMULMTSBQYLWXDCIQMWKMDKHNTOAF");
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
    msg.setTimeStamp(0.265793416327);
    msg.setSource(26828U);
    msg.setSourceEntity(135U);
    msg.setDestination(38665U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("OCIKCRSFVCVLDJCLAKLKNNVZRMOSAFHRPJFYLNUYYPYHHSTNSVKLMCXSGKZBQENJMZWHMIYIAHXRXAKZRZFUEDGOEUZIIQJCVPELXBRGQZGUYUHCLYXXKZGDWLMFEBTWAEOCYTUJROQWPQNFFQAOZTEBLISDSEDABIKMSUTQCWBMIF");
    msg.predicate.assign("KIXOHSINXESRYINWKDZUYTBQCRFLTWJIKETBPFXCSVBEUSJLQMLZBHGMUGIBREBPUAVLPOKOUEHPYFFTKANGLZGODVQKFDXHWDRJFVDQUFOPJZSXFDMPZJWLNOWTYCZSUYAMGVFPKMGCRAAWGOFVCITVHHUEEYUYLNOCQJUJVEGAISZXZMHHQCEQOKDTPTJQRMNJIGRKTXPZABRACQASVXBLZDVIWWLMYMKHNCNISXBOXNDDHLWYWYMQPBN");

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
    msg.setTimeStamp(0.645903201688);
    msg.setSource(50332U);
    msg.setSourceEntity(222U);
    msg.setDestination(10873U);
    msg.setDestinationEntity(237U);
    msg.reactor.assign("TAVODVVHWFNWLSFXEXMOJBPHZJJQLDOVCCFHTVKAYPFXDGJEJPTZSQPUAZMIJVDLMCUILHDQUUHCVUDXXSXWFAFMHGWJQEP");

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
    msg.setTimeStamp(0.296075125563);
    msg.setSource(4941U);
    msg.setSourceEntity(111U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("MNTVAISQKBLQBBQSTWXDDVXREWCZRVQNWOFCDZSJSPNANEGJVRUNTJGFIQIKMZEIBFWCGBKYMKPLFOUWRAGEZJHAAAUPNLXTYOYRDRXXZHAXPROBQIDOPYCNXKZPDBUXSPJIODQYGUGTKLENPMVXOEUCFFIMHKRLYFEEHPBAJDFVUNHKTZUYEOMOQQWHLYC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ROUSUNEDCAC");
    tmp_msg_0.predicate.assign("ASMPJZFIXZKFSOHNWNMLFHROYASADRBOIJLXVIRVLRTTYWJYRDMNBBQOWODQHDATGROYEDHVUPXSUINYGIWYMWYBSVJKQWLFUFCNKILVBMSKSPHQCBUTEQVGELGDCUKNCFJZTBOKIXUCPKDBLGZDMRCGWURZCAEGYAHXTM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ECWJTVWDWUSPVUECJBOSPLITXPANDAQMYZULXLZABZLGAQZTBNPOJXVEYLCUHKOJKMSWOGDXFJKUPRWURQRZFTHUHHPIAZFRVKIYGCRMYTOKCZWHDIIAHNFOOQFBRXCTQKRJFYOLBVVIHEMSCQTWBDPOVXKSXJPYAGGFGNXMETGHLKIYDUAGBNIM");
    tmp_tmp_msg_0_0.attr_type = 81U;
    tmp_tmp_msg_0_0.min.assign("QACDJWRBKCQLLIHBBIFXVBBPPPVAOQJYESORQAIOABMXLQNHNOOCSQTNMIXHXUFQQMZHMLVLENLSGBWZZMVFAEDWXYZODCCGGKEKWOBVIFJLMPDLRKDAMWMVJSURVYYSYYHGPPKVHETT");
    tmp_tmp_msg_0_0.max.assign("AWIYRSGTEBWRALFXGVZSGICYPAHBZQQTLROVWYPXDHYWGUFXOTPOFTVQDRVQUWDLEOPBWQJVBKLHCWNQRYPJSSSBRPJBECXDDPHIUHJZAIQDVTVSMGEHSUMFAJXZVDHKGIZFBSZYFOMLFNGKAJRXCEKRYNHICXYUUUKKPNUGMXTNCMLDPCKVOOTRSXWKMWVJBEGNHAEAIBISUFEZBOTJLQT");
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
    msg.setTimeStamp(0.471733213768);
    msg.setSource(61350U);
    msg.setSourceEntity(0U);
    msg.setDestination(16248U);
    msg.setDestinationEntity(86U);
    msg.reactor.assign("LLWDKXWUTNXFBTZJNCFEQJPCXIRBIPMGJIKQVYCBDXQAIJSHRSYFJMYOELMUVZAWIZKZFHHUSOEISKRMKWOUXMOUQHYZRTIAYUNGBVPHOXDZPOWEYEYSVTHTFHWNWVTPKEKBNACAIWDREMISLGFHTUHKCU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HCCUIUETKEVAXDTGNWKKXVOOIYDJKQCWWPPUTGOKPAKCVMBSH");
    tmp_msg_0.predicate.assign("OVSEJYFUOYJGAAXMJFKWTZ");
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
    msg.setTimeStamp(0.325375849064);
    msg.setSource(45430U);
    msg.setSourceEntity(23U);
    msg.setDestination(42608U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("HUUYFARCIXSWOXJOKLOTOBTDUQWGRHEJGLCMZNXAQUHBPJBIMYEBVHAYNGHAZFZEHVIJXSLMATEQPVKDRFTDZHSDWKRBV");
    msg.data.assign("NUZHFOBNPYYGMYKUQVZMKMXGPARJVEYNFKTXVCLRCGDADIELLGFYSOKFSVMVZHLGAALSLHREYQOZQANNVMNUXBLRUHINWSSSDHKFJOWZIPOWXORKADCOBUWRFTDEBIYWISLEXPKIZTQUJCQNFXGWSPCDBURVTQQGPADTVEYOQFRDZMKMACVBLITTBHPARJIBHJWGXKRJOUPXHGTEV");

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
    msg.setTimeStamp(0.3188004143);
    msg.setSource(61698U);
    msg.setSourceEntity(132U);
    msg.setDestination(36746U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("LKUKPBSDVKGEYPEJPKYECRVSSZLMOFGXODQARHSANOTUMQDUVWUPCCMIMZXILMBWLJRVTQHWIACWGUJABEKYFZVUENDOERZ");
    msg.data.assign("AEIGMUGAMLYBMFRWAGNSPFCAVLBOLNMJYLZPGQLEWXPQIACJBQATWDTJUXXCFTFYHTLJNZBGDGZUWVSPZSNPZMKVAFUUXKXINBBDSZOUMODSYFVRREURRREWRKOKNFOEGWXZLIQBCWFBPUOMVIYKWVXSHXCZRJHYLIKMASBWHPCBDEPEZIKLOQFHIQQZDYCDTADSJECEINSDJQCXHSJQYPTJVJHYVMOWLMTGTHRKDGVIOKEHF");

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
    msg.setTimeStamp(0.672397777383);
    msg.setSource(64182U);
    msg.setSourceEntity(26U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(109U);
    msg.topic.assign("FZYPACLSGVPQMZIVCLBVEGNWDUHSCENCQYKPFSIMBLEWPBSGYHUVLFKVNKRFXMSDQIRFZLMQXMUIHRJJQK");
    msg.data.assign("GYRRNIUVSSJQZBHCXWIHYBJASJDWTNQAEYZYJSDLBRZFIVOQWUJENMUGNENDQFPTJTPUCEAGEFLDGOBQWXWLKHMXYNAFMKWXTFXHDGOZABBNAVUSIOAPTUCYAUKWZHQOY");

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
    msg.setTimeStamp(0.175854774317);
    msg.setSource(28616U);
    msg.setSourceEntity(80U);
    msg.setDestination(56154U);
    msg.setDestinationEntity(155U);
    msg.frameid = 236U;
    const char tmp_msg_0[] = {-5, -60, -75, -43, 88, 48, -39, -119, 101, 111, -51, 112, -116, 7, 19, -20, 24, 89, 60, 76, 103, 49, 40, 98, -9, -98, 38, 55, -64, -38, -25, -39, -52, 71, 102, 88, 31, 99, -90, 8, 20, 40, -88, -19, -83, 100, -2, -12, 1, 40, -107, -32, -80};
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
    msg.setTimeStamp(0.382520107608);
    msg.setSource(48914U);
    msg.setSourceEntity(70U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(132U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {-89, 108, -15, -30, -38, -14, 124, -116, -5, -118, 34, 30, -63, -7, -44, -126, 48, 52, 5, -105, 112, 64, 8, -65, -118, 86, -73, -95, -100, -110, 12, -100, -55, -4, 58, 112, 34, 107, 112, -127, 0, -7, 38, 17, 80, 11, 37, 86, -122, -86, 38, 71, -53, -120, -51, -121, 86, 91, -86, -97, -4, -98, 120, 73, 5, 36, 81, -124, 112, -19, 92, 108, 124, -117, -72, 122, -113, 62, 97, -65, 32, -27, 23, 121, 70, 13, 125, -93, 14, 103, 123, -76, 76, -69, -94, -67, -100, -89, -72, -6, 64, 62, -89, -7, -116, -47, -13, 63, 21, -101, 25, 41, 46, -70, 32, 47, 42, -92, -86, -27, 75, -26, 9, -118, -77, 30, -101, -63, -3, -20, -76, -123, -123, -100, -25, -123, 71, -86, 53, -55, -60, 67, -2, -4, 71, 36, -1, -108, 117, 54, -90, 12, 9, -83, -52, 95, 35, -76, -10, -85, 20, -52, -60, 45, 26, 99, -110, -42, -87, -97, 86, 37, 108, -5, 44, -77, 60, 78, -1, -99, 115, -31, -119, 118, -32, -44, -24, -96, -31, -49, -58, -128, 15, 106, -121, 49, 87, -67, 105, -105, -118, 3, -40, 53, 31, -70, 103, -87, 71, -7, 20, -93, -92, -106, 125, 32, 44, 69, 40, -21, 125, 49};
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
    msg.setTimeStamp(0.364152153129);
    msg.setSource(38419U);
    msg.setSourceEntity(175U);
    msg.setDestination(47141U);
    msg.setDestinationEntity(46U);
    msg.frameid = 113U;
    const char tmp_msg_0[] = {64, 89, 52, -121, -32, 79, -17, -46, -46, -33, 119, -104, 112, 97, 15, -27, -118, 112, -83, -101, -65, -79, -50, 40, -76, -107, -93, 26, -3, -14, -51, 43, 33, -83, -101, -70, 8, -65, 99, -83, 84, -19, 29, 106, 87, 80, -65, 110, -55, -70, -56, -6, 2, 109, 111, -122, 49, -21, 106, -87, 91, 111, 75, 46, 65, 89, 31, 49, 117, -72, 14, 14, 114, 18, 89, -80, 59, 63, 75, 124, -113, -52, -22, -66, -67, 66, 123, -59, -79, 125, -71, 12, -102, -68, -50, 125, -18, 124, 73, -97, 112, -34, 113, -46, -56, 36, 12, 46, 94, 123, -107, 105, 7, 57, -16, 7, -88, -128, -20, 32, -114, 29};
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
    msg.setTimeStamp(0.924901207319);
    msg.setSource(18945U);
    msg.setSourceEntity(57U);
    msg.setDestination(48948U);
    msg.setDestinationEntity(236U);
    msg.fps = 237U;
    msg.quality = 70U;
    msg.reps = 248U;
    msg.tsize = 95U;

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
    msg.setTimeStamp(0.641010179584);
    msg.setSource(23812U);
    msg.setSourceEntity(16U);
    msg.setDestination(58673U);
    msg.setDestinationEntity(93U);
    msg.fps = 53U;
    msg.quality = 32U;
    msg.reps = 66U;
    msg.tsize = 62U;

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
    msg.setTimeStamp(0.969755872343);
    msg.setSource(46182U);
    msg.setSourceEntity(134U);
    msg.setDestination(22684U);
    msg.setDestinationEntity(51U);
    msg.fps = 62U;
    msg.quality = 78U;
    msg.reps = 113U;
    msg.tsize = 48U;

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
    msg.setTimeStamp(0.77566971159);
    msg.setSource(39805U);
    msg.setSourceEntity(40U);
    msg.setDestination(22218U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.794486296653;
    msg.lon = 0.0897737192398;
    msg.depth = 183U;
    msg.speed = 0.230645721914;
    msg.psi = 0.960044354678;

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
    msg.setTimeStamp(0.775197487069);
    msg.setSource(63180U);
    msg.setSourceEntity(18U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.440028908759;
    msg.lon = 0.387396490822;
    msg.depth = 243U;
    msg.speed = 0.0521501886635;
    msg.psi = 0.164929608508;

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
    msg.setTimeStamp(0.0900558551926);
    msg.setSource(38137U);
    msg.setSourceEntity(31U);
    msg.setDestination(7805U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.255959818401;
    msg.lon = 0.242104811867;
    msg.depth = 76U;
    msg.speed = 0.011358720121;
    msg.psi = 0.854673484338;

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
    msg.setTimeStamp(0.784125429696);
    msg.setSource(22863U);
    msg.setSourceEntity(38U);
    msg.setDestination(34559U);
    msg.setDestinationEntity(37U);
    msg.label.assign("JXTIDTKQEZPACKRBFNZOEZGRYMYGEQMQZMDVGIOLZIHAVXUFDVLHCNNIZXAMMJLTVTURTTIMTKPHNMHLQBMAWEKOGCHGFJEHYHGRBRZPSDBOW");
    msg.lat = 0.94873188457;
    msg.lon = 0.542658104461;
    msg.z = 0.875607252221;
    msg.z_units = 160U;
    msg.cog = 0.182046899858;
    msg.sog = 0.0524247211794;

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
    msg.setTimeStamp(0.305253333106);
    msg.setSource(21684U);
    msg.setSourceEntity(174U);
    msg.setDestination(57112U);
    msg.setDestinationEntity(210U);
    msg.label.assign("AUUJYVCXHMDHMVEDILL");
    msg.lat = 0.728565049481;
    msg.lon = 0.977219367374;
    msg.z = 0.47228245929;
    msg.z_units = 76U;
    msg.cog = 0.505370206683;
    msg.sog = 0.0452960004508;

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
    msg.setTimeStamp(0.166743730328);
    msg.setSource(21642U);
    msg.setSourceEntity(123U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(193U);
    msg.label.assign("GFZYZAGFNZXJKRHGAXBNPKJHOYXVDXIWSACQTZRNLRTWIFYCJTZUCYHJRKZNMBEZNSWYDFFKTPHQDENCLEDUCVJNDTFGOIEMXQAOXYZYQURTBLSWLMJYSALFPUKQIEIIQSVAKLMDOXSQGCCPGLVSEPRGXTFNECUYSBQGOKOUVWBJYBAMMWPQAKWEJGBHBXZPCUIVMQKROHZIOBHUAWHVLPUXDVDTVBWGRWHKUHREPFJNRN");
    msg.lat = 0.306978170017;
    msg.lon = 0.50411234467;
    msg.z = 0.396154026529;
    msg.z_units = 50U;
    msg.cog = 0.826004859712;
    msg.sog = 0.363011406328;

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
    msg.setTimeStamp(0.748164482053);
    msg.setSource(24536U);
    msg.setSourceEntity(237U);
    msg.setDestination(46823U);
    msg.setDestinationEntity(199U);
    msg.name.assign("JDSMLYEAORCDMZECCOTCULRYGIEIGTKEXOBVOPQVZBHQMKSGOVOYAD");
    msg.value.assign("VDFTHNRYOYTUSHMOGQNYLVAKMKWQNEWCNGHULKTUJMCKHHCPRFJIHXIOZNWSOUSQIYSVTPAMYEQBWAVMQXSLCWGZNPPIVVECATZGFDNEGTLBYSVAGFWUFXXAQOQJQRZIEJRAZDKXROUAKJDPEQQWORID");

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
    msg.setTimeStamp(0.119602871187);
    msg.setSource(11804U);
    msg.setSourceEntity(27U);
    msg.setDestination(29662U);
    msg.setDestinationEntity(137U);
    msg.name.assign("ZUBLZYKJENDLQOQCVQIGHFTTSVFNKNCZOETFLURNHPZPWAUAIAPYBSDANWJLSFOASMDWKIBSQIOEZVVGDYSZQTDKUWNBPNKLJAZEEWMRXURMYMKPOGRRPVIXZKJRFVNXESTCMTDUYFGHJIBVRJOTMAKSPFGRMQLRQEBBHGUGIYWWXSHNOWGYCIWFJQXNCFCOHBDKGKITPEXLCXFHJMPYLXDQEOJOJHZLTVM");
    msg.value.assign("RZRWPPEXSMDNIDVPYQUHOLASIUQDIJNCXCSAITQOQHJFXDGMLRFFGUJPVZRBISMTJRWGOHPYMFGULZTMASOWPNZVYBOBPYYEWXEIAWSFLDJOVOBBLMTXUREVYEXDKXKZORAZZVYJMWSKGFCKQJUNFQDGBFDAJUQNA");

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
    msg.setTimeStamp(0.314502886211);
    msg.setSource(32368U);
    msg.setSourceEntity(60U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(42U);
    msg.name.assign("SWVHRKVRPKHPFMZKOLBCWAGJNWCDPGURFWPXMUTSEHOOZBNJODXODNPMDUFIEAELQVSACKHILVZBCFPWMKNDGRANTRSVYLKXLJJHEFJAXXYYBGIPIUQDRHZSNSTXNSUAOUHOTPWRTEUKSQUEZVDQWEIQMCXMKBGYKQYTLXTRZSJIVQQMSFVMAFEKCCLUVBJOEJNTOMHGITBTNCFJWBAOCFQEZZIBYRUYGFM");
    msg.value.assign("MHKPNGDBFOZZSZPGKXUQGFTQRJCULBPESDYMDLKCLDWSHLMNMOAEMXAPGCCFUTHZGIQRZQHVLVXVRVGRFXYTBPJ");

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
    msg.setTimeStamp(0.458385330733);
    msg.setSource(23948U);
    msg.setSourceEntity(167U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(90U);
    msg.name.assign("VKPFTIXBYLZNEMQEDTWEOQXRKWSUFGAIBIKRSIWNDUHZHSBLZHLUKPUTREFMVFSAUCJRCENSGVBZCKDVJPYJKHWLEMASVUDEYCUFDPNHJGOHWWXIPFTVKGYLPWAOCGZXTWJQSMTEYGZRBYVAASDYJJZGIPZGRWMIDQRFVUORHLQZXNCJQTDMYQNMKOLCNFBKMGHOVXIICXOVSBPPQLFBJDIAPMYCETCFKBDXAJRXM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WLBBTFTINMZIWDMITTTJUTBAUWDCDPFDFDCYIRLOAUSYPXURHGHCQVNXECOXPBPSUPQJCZHAIGDQRGFMZBYBELZECEHOFIEWMYVFBJPLIVQVGRMAKRNNSTZEKPSCHHAQYRVKGVMLMBCAJIQFNROYWZOXNTALWAYXQITWLDPFLGJOOPWORCJGKKUKJEESAMRTSGUAVYFK");
    tmp_msg_0.value.assign("ZYFASGZVQOWVJWFGEASCCRFWESOKUIRLNPBV");
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
    msg.setTimeStamp(0.71483196256);
    msg.setSource(21480U);
    msg.setSourceEntity(123U);
    msg.setDestination(61350U);
    msg.setDestinationEntity(243U);
    msg.name.assign("WCDHOBOFPJMEJWGZFTGQRFWGTLUJFBNWCOTKZMCRQPVLCLLBEULBNXIQAWCEZEZHVJIGXOQCSKRXMXRYAUDIGXXMKBFKAHNAH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YLVNHMDEDRBBDCOJMKTVXWLCBFHFOANLVZPBXKWYGDDLZFBAAVQFUWNZQFOVZRM");
    tmp_msg_0.value.assign("GMUUMWDTMZAVYBMNVEYCTESVPFCMKOMJQOSHIXJDQNPRNAGCFANGZKZKVZCPHNRYSPDEAUBTIJLADUFIBZGQICGVLIMDENZHJNLDQKXZPPXTJKGIKORMXPOSTIXQNHBQTYOYFWTAOEGRQUNDSZHTCFIGLWQOWPWDITCBJEWUTEXYLKQWLALCLDJCSEDMFKOWBJNIJBZYFHWBLUKPHASXEYRYKSXVGFSXRSAVXHUBQYVAFUJOHWBRCV");
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
    msg.setTimeStamp(0.755612993663);
    msg.setSource(48468U);
    msg.setSourceEntity(191U);
    msg.setDestination(10710U);
    msg.setDestinationEntity(176U);
    msg.name.assign("HVCIDDBYFS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZUEWDHCKIYNSWMEQPZAMTIJECJQQHDQKDGFNXDI");
    tmp_msg_0.value.assign("QQAVIYDEPGPSLMHIMYCYJMKOJRWVNISFMRSPKSLFXBCTKLJWFPIVQVEJUZVNQDFJZIEZCLBSG");
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
    msg.setTimeStamp(0.980191288623);
    msg.setSource(44162U);
    msg.setSourceEntity(129U);
    msg.setDestination(56951U);
    msg.setDestinationEntity(163U);
    msg.name.assign("BGOLIFMFZRMQIMHSBOWOZMSKULTRDXJUBPJCMMJGXITZVERYQXXAAQOKCVZBCCMYRGYZB");
    msg.visibility.assign("LKGRKMJJRQJONDHYTDQYVIPPFXUGZZECRIFFCIWLCTWBQLURZMZSZQDLXYKSXBXETAIBZAPSEBRCBWFGHSHNQMJQQZQPSAPKVNMZUXOVETFGTKJHEUOAMTFQSOVAUIZBCIDLNGXMQJZACYHRBVY");
    msg.scope.assign("FISZSRHSEETYIUUCKBRKVOZUEYRYMKTEWWUTZJVCKFJVKONVIXJGOYMDFXNTAOQHVXZHFBWGPUOBLUKZSZIEQHQXWOHMMGTQDEKGDNJBBCCRNRRPNZMKSPBIPYZZYFKMGMFHWAOQQMPSXIILNTADAJOHYWTPCPGBOXVLNSSTAASRDQUOPCEXJVHHCUCALQBFFAS");

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
    msg.setTimeStamp(0.136916764591);
    msg.setSource(32023U);
    msg.setSourceEntity(118U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ZMRPPCKRCVGOEUTOADXSZCXHNEHPUMSJJPSHLS");
    msg.visibility.assign("PELQNDKMTSNYNTVKLAEDJHUPCZFPPFZHRWOEXAIJCWQRLVVJ");
    msg.scope.assign("OFOXIGMFPPFTRBZZDJIBGOOTUKVCJJUMJWCCAHEQEYGFRFNKVBSSJVWQCNWAAFZDQJYVBZKYYOCCMIWAXXSGBQDQEYSOLHLQAKEORPNVZFPNTMNRMAXBPVHGDSNGYBAIEONCPRTEHXTIJDHVULQDURKZWZXIHZNCLUPRBUWRLTMVAFIDEKMTDMEHLHYWVIJXQIUVZXSJSSPMQLGBRXQKTWFAOBPNLLWSAPIXENKEODY");

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
    msg.setTimeStamp(0.308790807714);
    msg.setSource(28931U);
    msg.setSourceEntity(156U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(160U);
    msg.name.assign("MGRVAEKMCBNUAGSCMBWPJIWSWQMKFTTVYOAYVVDJAGQXMNDGPWJLEZLNMMXZBHVDZTHXVBPBXPSBIKWRTZCOLUREAJGRJUNSKIUSEBRMGKRIUSLCHJWOIVBJGZECCELDZCTDPNQCLWLXYWQFADFPZJCQIINTIOHJKXFXDHPWZM");
    msg.visibility.assign("HOVRUSRBZYVYCFPLNFBHQCFGTHJQYSKK");
    msg.scope.assign("SYWPWUOHUXKBMSSNGKZMAXNEOSIIMUUFYVRJLHCDMBVQAPIBRXNDFSJLJUHPZVCGEMVEHCXWDJYHIKAZLJCEHSKZNEWRKKBQXHYGDBOZGPZOXAWVSQNFNELFGONRNDKOFGZXHDMGUTTTAPGPYMSQBUWYORNFTJIIEJUACXPYCWCGZSQPXZTFYJVRWCOLKRVDKUEVQTPWEVBL");

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
    msg.setTimeStamp(0.135987483778);
    msg.setSource(56356U);
    msg.setSourceEntity(105U);
    msg.setDestination(18418U);
    msg.setDestinationEntity(215U);
    msg.name.assign("GCXGTFFISOSTRTCZSHYTGQKLIXBHIMZKDOOXBKZTGMUEORZOIGSPCXPQKFQFVE");

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
    msg.setTimeStamp(0.0609568095044);
    msg.setSource(51670U);
    msg.setSourceEntity(235U);
    msg.setDestination(51462U);
    msg.setDestinationEntity(45U);
    msg.name.assign("LVGFTTRXAQRRJAQOHMBXPWGBUIGEYNNLIGIFVTZMSRURIQHMDSDMSDVMOVHDOMNCAARLWEXFVXJSPICCRZKHXDVPWQOOEHKGOGNZAIGVQXZYLUNBWFJATBFATVKMPWKLDYOXFSKHCPCZFESEJBTUZOUFCRBBYXOYNTLBFZYXQIDJKSCBBEWJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QJETUBCXHTIUEVNBNFBXCDASKVRJUEHUWCFIZMOYYSCTIYDKKJOXHKJLERPVGYDFSSRKDVUWQTLXSPJGUOGKCIWWXVZEEQXHCPJIWYRQZFWRZPVWQSFZTGQXLHLMNMLVDPZIMCAYRFOFBAAGGLTOTZRIEMOXDLZGPBKNBYRZGPBQMPRAMTSQESQUFVAXWCTKHGKLLNNHOAFANNUBYIIWOXPDODYMAPD");
    tmp_msg_0.value.assign("NXHIXMQUERQUOBCOYSLEWRZGBAONMHDOQOUGIYIWPQHUYLCUYKOTWDFWJLSKTXYWAYLVZVIEVIAPMVPDLBUHXVKJXZAFTRDXPRIHQIBJOSSPKHKSEANEQQWXQSJNENCMBZDZZHSOZQCKNOLFJRAZJBHHGALBKBUHAWMFPPLYVFRXGRCTQTDEBETAVFKCRMCZFESFXGJGLN");
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
    msg.setTimeStamp(0.926711298517);
    msg.setSource(8683U);
    msg.setSourceEntity(66U);
    msg.setDestination(53619U);
    msg.setDestinationEntity(40U);
    msg.name.assign("IIISGMZKAPLVDQXAMXACNFDIWMMKILFTHZLKNRUDJXFHCFMQXWLNSPBWIINDCGKHRXQSVITOVKPFXQMABPUNSMUNJULHTQNWQHGQVKCYBDTORRVYNGAVFYKBRIJVOGTSOUZJYETBG");

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
    msg.setTimeStamp(0.134613103377);
    msg.setSource(23468U);
    msg.setSourceEntity(218U);
    msg.setDestination(37619U);
    msg.setDestinationEntity(225U);
    msg.name.assign("FWCRVCEOCMEWDWJVTWHRAROFBYFXBIZZZNJLXVXJAAVTKGSCEBNMSLRCAUDBDWMIRNSYZAJUPPBYFNRZLTUFHVXMQMTNULLPHBZPPOXWISKUGGXOLJHNATRPCXKSOCEQXMJNMAJIHXDYDEQFWJQQOLFFNYBZYVXZHPTGBRVPN");

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
    msg.setTimeStamp(0.40380625445);
    msg.setSource(50330U);
    msg.setSourceEntity(151U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(115U);
    msg.name.assign("FZXHCLQQIZPIPPYVXOVWJKTBWKNAIHZNLFTYDOBFZUJMPCXWFQPMEQGNTIRBZDCPWSUFRWJEEFMBAKHIBRYLCYSCOAGKLOWH");

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
    msg.setTimeStamp(0.231894272242);
    msg.setSource(32255U);
    msg.setSourceEntity(204U);
    msg.setDestination(16847U);
    msg.setDestinationEntity(52U);
    msg.name.assign("SDRWHMTFCGRCCHMQLJOHMGEBIJYZHJNPNKCYHJALHJOQUHPGDSSGDULGLBIMWTLFSCREOUAZEQANBABVBMOMWWTRFRZXQBIPWLDDWEWOVPWJTISSRKUNZUVDZPQKPLPRAAUJICTYTZFYTSFLOXHXWCOD");

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
    msg.setTimeStamp(0.494134464945);
    msg.setSource(33257U);
    msg.setSourceEntity(104U);
    msg.setDestination(64499U);
    msg.setDestinationEntity(192U);
    msg.timeout = 3682764409U;

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
    msg.setTimeStamp(0.951482823933);
    msg.setSource(14156U);
    msg.setSourceEntity(65U);
    msg.setDestination(63553U);
    msg.setDestinationEntity(36U);
    msg.timeout = 287977286U;

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
    msg.setTimeStamp(0.0504641714311);
    msg.setSource(61678U);
    msg.setSourceEntity(19U);
    msg.setDestination(30470U);
    msg.setDestinationEntity(137U);
    msg.timeout = 4089395846U;

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
    msg.setTimeStamp(0.865885086635);
    msg.setSource(22186U);
    msg.setSourceEntity(27U);
    msg.setDestination(53166U);
    msg.setDestinationEntity(7U);
    msg.sessid = 2544535805U;

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
    msg.setTimeStamp(0.988538782663);
    msg.setSource(5967U);
    msg.setSourceEntity(192U);
    msg.setDestination(15947U);
    msg.setDestinationEntity(94U);
    msg.sessid = 431553189U;

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
    msg.setTimeStamp(0.599199532656);
    msg.setSource(58204U);
    msg.setSourceEntity(141U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3295002928U;

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
    msg.setTimeStamp(0.813537333667);
    msg.setSource(57143U);
    msg.setSourceEntity(1U);
    msg.setDestination(31842U);
    msg.setDestinationEntity(205U);
    msg.sessid = 2580561930U;
    msg.messages.assign("EOVMVERIFGWGOAXCRBQERWOTJZJAQUKECVEANDNOZUKIUGAGCPWPVDZFJVYLORVSHKWFIIYFPRLUXNDPEBXMSXTTSIRCUWKNDDPGZTTVAXMUBLJAOQDJCLHETOGCNQOJGGMBHHIQKJPNJHDWBEKVHIACXLPQQHDQPFEVGBSBKHNQCFBMMSPYUHMYXALZLTSDUZYKCILSUEWTRVKQODKLNAXFYYFBOFBAGJWZYJIXSIFZHNXSZWRCMPTY");

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
    msg.setTimeStamp(0.379101207971);
    msg.setSource(2446U);
    msg.setSourceEntity(174U);
    msg.setDestination(63055U);
    msg.setDestinationEntity(198U);
    msg.sessid = 4274803031U;
    msg.messages.assign("VAYAEWBVWTBZLDYFXJLDLTGKFCKIRGIIBDLTPUCJEIPZKCDQSDHBNBFAXLRCJVQNPQXJYMBGSYZOPZJWHCMGFAUYJYTZNHRTQICICOZYNBYNSNDZGSGQTLAOOSUEEWVIOVUFKTHJPFOXKXXBTMNGASSKHOJQAJEXRUVMQAFEOUDXYUHLGKKDKRSIBHHMCICEWBGMSIVMNWPVWUZXRRHHWDDVALXTMNWZPVQEZGPJQUOAFFOCPTRR");

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
    msg.setTimeStamp(0.0547155259776);
    msg.setSource(27578U);
    msg.setSourceEntity(177U);
    msg.setDestination(34754U);
    msg.setDestinationEntity(89U);
    msg.sessid = 1347276016U;
    msg.messages.assign("VTQGFNTDAVMXWEXSOWTCHEBTYQMLXAFWJAB");

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
    msg.setTimeStamp(0.11835571909);
    msg.setSource(36390U);
    msg.setSourceEntity(62U);
    msg.setDestination(39983U);
    msg.setDestinationEntity(97U);
    msg.sessid = 3806556808U;

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
    msg.setTimeStamp(0.91118402054);
    msg.setSource(7326U);
    msg.setSourceEntity(14U);
    msg.setDestination(7167U);
    msg.setDestinationEntity(50U);
    msg.sessid = 1793806675U;

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
    msg.setTimeStamp(0.821956935683);
    msg.setSource(10058U);
    msg.setSourceEntity(112U);
    msg.setDestination(8417U);
    msg.setDestinationEntity(160U);
    msg.sessid = 2733997385U;

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
    msg.setTimeStamp(0.627695307531);
    msg.setSource(19074U);
    msg.setSourceEntity(41U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2868417079U;
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
    msg.setTimeStamp(0.682864031903);
    msg.setSource(2304U);
    msg.setSourceEntity(65U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(63U);
    msg.sessid = 3098468828U;
    msg.status = 26U;

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
    msg.setTimeStamp(0.710089719079);
    msg.setSource(47752U);
    msg.setSourceEntity(28U);
    msg.setDestination(1334U);
    msg.setDestinationEntity(204U);
    msg.sessid = 1424408535U;
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
    msg.setTimeStamp(0.343207862502);
    msg.setSource(37507U);
    msg.setSourceEntity(128U);
    msg.setDestination(48179U);
    msg.setDestinationEntity(107U);
    msg.name.assign("VPRELVMSROHNPNLPIEQZBMFQJZXXGKRVUDEOHVLMZCQAQPSZWLQXWRBSTAVKWRBWAZMKOCLOVTIUWRFBESAFGYXMPLKPFJYFVUYWTSJINCIDNFKNMRBVDQOGYGOJQWETEFUARFDZGLYMCOCNBZOZYWYAITPZFAHGTNHEMDTDHJJUQUAEODKS");

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
    msg.setTimeStamp(0.391905743203);
    msg.setSource(33699U);
    msg.setSourceEntity(248U);
    msg.setDestination(46024U);
    msg.setDestinationEntity(16U);
    msg.name.assign("YXEDUKSZJXXZDBGBEYBJSCPZMCOGKKNCYZEJFKFQQWVKNWWFIRPBQMVARGTURNIDQBWROOVGCKJFWZBGTAVIECMSDTTLAPPQYKBNWXXOSINJCHHFIAGFUAEZQIMVVMQYKUPXAFJNRILBCCRCJNHULNGSODWOQSYHJLMXUEKDILZCOODUGTZRXSPALVPPNEIHLBMFZIVHDWTNDLHGRHSQDHOLMZYRPXTYOHJFMYVGXUSVWFTTRYQAMEABWSKEU");

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
    msg.setTimeStamp(0.427276662447);
    msg.setSource(61163U);
    msg.setSourceEntity(40U);
    msg.setDestination(61735U);
    msg.setDestinationEntity(187U);
    msg.name.assign("OITSTRKJYHUBPSOFPHSRHUGAWJXDVTYWRERRXESILESGBQOWGVYHMFVQLUKALDRKBDINAEBELKZANZATUNCLXGIPICZZJHPYGEUCFNDVDWXZWBWAKIXLVYEEHKXHOTWQNJBDOVZCAFYAZLMGKSPXQKBICSJZCMGLMFIITJMYINM");

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
    msg.setTimeStamp(0.463190930766);
    msg.setSource(13913U);
    msg.setSourceEntity(159U);
    msg.setDestination(58037U);
    msg.setDestinationEntity(197U);
    msg.name.assign("WQYRGSONTCPXZGSLVEMQBMTQLNIPOFHTMBKGIZSKKWZKSGRORXLMCPYZTFYBORTWLNFAUBYAVJAQHVHIBCBGCWUGRNSHEEDBZEKBMCQIVEYKCQJYHDFTSPNAIDUXCQABMWFTOXXINJERGFXUNOMJLEPXPIMRRALVUWZOGFNJXSZRQNWMRYLJUFDEDJFZXKDCPNDKGHDWIHE");

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
    msg.setTimeStamp(0.969604714747);
    msg.setSource(46518U);
    msg.setSourceEntity(202U);
    msg.setDestination(28645U);
    msg.setDestinationEntity(242U);
    msg.name.assign("XOKIDWMNEFHLJNZAMVEOVVIAIIPHGMPLMWVFLQRIZHAHUTJYRCZRXJIGSPCVRALSTBDAZUWTEUDJZBOMPLWCQYNYCGLUZIQFPGYGBEJOCYKWUADV");

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
    msg.setTimeStamp(0.929630228193);
    msg.setSource(58889U);
    msg.setSourceEntity(126U);
    msg.setDestination(10278U);
    msg.setDestinationEntity(140U);
    msg.name.assign("JGJVTGWMQA");

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
    msg.setTimeStamp(0.934271977324);
    msg.setSource(46739U);
    msg.setSourceEntity(168U);
    msg.setDestination(4442U);
    msg.setDestinationEntity(116U);
    msg.type = 32U;
    msg.error.assign("HWJMTJXWLDMAKSNJYPXFTQYEHSYMZFUNXRPJOUWSNQCDXMKGFAGNAOOZVERQTOBCAMSOSCHXPKYSLDYOUVKNSLWPIVJDEUWQVEMIUNTBBSVEXIQLLVHCFRKDBM");

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
    msg.setTimeStamp(0.977423609185);
    msg.setSource(16186U);
    msg.setSourceEntity(185U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(209U);
    msg.type = 192U;
    msg.error.assign("JXRXDUXDBGZJOPEUQBHPQHQBODYANEMCATSTDGHLBWJKUPQCSTXYBPWNASVASOOLKCSZ");

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
    msg.setTimeStamp(0.327953696859);
    msg.setSource(48616U);
    msg.setSourceEntity(49U);
    msg.setDestination(24811U);
    msg.setDestinationEntity(148U);
    msg.type = 58U;
    msg.error.assign("TJSBZCQQAJNANWNELKHENNPYVTVAKEPGZPWBQWAMFTEHNMMRZCMGAUFISTIECHUZHKQIXJKJVVWGHDHLYYULZRUFMWGZDQIGKXXVJVEQDTFVJMYCCDNLSWVAIWMG");

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
    msg.setTimeStamp(0.605364676465);
    msg.setSource(41345U);
    msg.setSourceEntity(213U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(217U);
    msg.seq = 52291U;
    msg.sys_dst.assign("MTQWLUIYGJDRXBZFYUCCKVXVJHZSRCFWKAQVDZFLMIWLQNIOSZWBSLDQJPNGOEAAMRLIGQNRKTSTPFUR");
    msg.flags = 97U;
    const char tmp_msg_0[] = {24, -29, -109, 54, 4, 82, -9, 53, 55, 39, 109, -127, 85, 25, -117, 41, -75, -79, -37, 35, 41, -35, 22, -24, 12, -26, 71, -10, 64, 112, 7, -76, 126, -17, 80, -76, -37, -8, -59, -5, 4, 125, 98, -6, -72, -127, 118, -34, -81, 62, -99, -23, -127, -66, 102, -108, 56, 70, 126, -14, -37, 30, -5, -26, -88, -72, -28, 71, -74, 33, -37, -91, -12, -45, -52, -124, -88, -56, -56, 56, -23, 57, -110, -76, 29, -121, 89, -127, 64, 4, -21, -112, -34, -4, 26, -104, 107, -106, -104, -35, -98, -24, -48, -8, 33, -109, -120, 27, -83, 0, 111, -38, 105, -64, -10, -91, -95, -36, -86, -10, -46, 86, 9, 94, -116, -7, 66, -94, 36, -112, -112, 46, -77, -118, 110, 124, -27, 30, 31, 10, 118, -90, 72, -110, 102, -47, -73, -82, -4, 63, -24, 59, 80, -1, 2, 58, -39, -32, -121, -36, -84, -101, -34, -96, -6, -115, -47, 6, 18, 97, 107, 55, 43, 18, 5, -2, 44, -48, -110, 17, -122, 107, 90, 102, 31, 37, -111, 121, -125, 80, -2, -7, -43, -44, -26, -67, -78, -118, 96, 109, -2, 78, 100, 105, 119, 11, -42, 32, 81, -93, -73, -89, -31, 105, -100, -84, 117, -79, -54, 68, -106, 8, -88, -25, 51, 95, -105, -2, -15, -57, -50, 70, 76, 68, -84, -11, 62, -19, 22, -45, -69};
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
    msg.setTimeStamp(0.27508995963);
    msg.setSource(24023U);
    msg.setSourceEntity(88U);
    msg.setDestination(33916U);
    msg.setDestinationEntity(231U);
    msg.seq = 10766U;
    msg.sys_dst.assign("ZPPILRHHGLUOEXWOJHZKPWPMEEPSHGOHNCNJQCOTCMOSXBRWHDMNJWBXFNKXVQWLPUGUKTBKCSUPRREJFYTCARCUJQJVZNQOWGRSGVXAZSTXDYAYSOCYWXQYBVFUJXVLDBMRTIVNLFVMGAFUEQISST");
    msg.flags = 124U;
    const char tmp_msg_0[] = {22, 62, -109, -33, -34, -50, 94, -94, 39, 87, -124, -36, 66, -17, 1, -37, -71, 3, 44, -93, 41, -118, 35, 16, 27, -12, -25, 30, 116, -31, 121, 9, 26, 87, -60, -37, -121, -94, -54, -61, -91, -109, 27, -81, 110, -118, -15, 54, 27, -34, 12, 73, 36, -91, -48, -83, -80, -76, 8, 34, 113, 21, -6, -106, -56, 76, 93, -125, 47, 109, -30, -3, 50, 30, 97, 56, -28, 109, 90, 90, -56, 11, 80, 94, -9, 70, 64, -82, 48, 117, -98, -57, 100, 124, -47, -50, -119, -49, 44, 115, -32, -102};
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
    msg.setTimeStamp(0.998004660133);
    msg.setSource(12267U);
    msg.setSourceEntity(7U);
    msg.setDestination(37156U);
    msg.setDestinationEntity(167U);
    msg.seq = 39321U;
    msg.sys_dst.assign("BNYGILPCMWL");
    msg.flags = 223U;
    const char tmp_msg_0[] = {28, 70, 112, 74, 41, -82, 2, 49, 29, 49, 58, -68, -24, -26, -4, 16, 107, -108, -41, 64, -7, 43, -24, -14, -33, 119, -21, 34, 114, -111, 114, 10, -41, 99, 69, -12, -123, -50, 80, -82, -85, -63, 87, -36, 96, -9, -96, -63, -69, 2, -57, -58, 66, 64, -20, -9, 125, 76, 27, 0, 115, 100, 124, 39, 89, 92, -123, -63, -2, 6, 101, -125, -7, 69, -23, 53, 37, -90, -51, -112, -54, 46, -31, -10, -117, 3, -14, -1, -74, 26, -50, -124, 110, -16, -30, 28, 47, -97, 80, 95, 110, -92, 77, -58, 10, 95, 106, -100, 78, -56, 91, 0, 36, -121, -90, -67, -85, 72, -25, -119, -48, -109, 25, 5, -105, -78, -84, -5, 8, 102, -29, 76, -15, 82, 108, 34, 46, 75, -12, -26, -73, 8, -44, -33, 117, 94, -39, -1, -39, -128, 27, -26, -121, 46, 71, -93, 121, 112, 81, 121, 19, 27, -26, 92, 102, -82, 40, -116, -62, 111, -37, 36, 80, -42, -34, -96, 61, 75, 68, -118, 63, -43, -54, 91, 56, -103, -85, 10, -92, 104, -113, 94, -61, 65, -51, -88, -110, 122, 96, -111, 35, 112, 78, -80, 22, 97, -47, 62, 53, 64, 96, -10, 30, -20, 95, -2, -109, -74, -66, 40, -9, 57, -15};
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
    msg.setTimeStamp(0.917118199206);
    msg.setSource(45366U);
    msg.setSourceEntity(43U);
    msg.setDestination(31222U);
    msg.setDestinationEntity(219U);
    msg.sys_src.assign("UBZDGAQNXCNPZICEGLDJMTHVJPNIEOVNCDJFOXIEUWPRKSJLYZQZWKJMMSTBRGCEQQVDELRXRSKMVFFDWHPORPUGMILSUPTOMNHOYAWHNESYYHVZDYQRYPGKFWNOCRBYXTVWPDBCAIJBBPJHVSMSFQCIPCVUEQSTHVSFACUXOEKAZ");
    msg.sys_dst.assign("QUNITVDFWGECSIMYGKPPANGEDABZKZSPFUHSRKIPXBXGQMLDVL");
    msg.flags = 42U;
    const char tmp_msg_0[] = {44, 101, -47, 99, -46, 3, -34, 97, -115, -9, 33, 123, 40, -13, 121, 112, -4, 17, -36, -3, -31, 41, -17, 108, -104, -98, 114, 2, -82, -105};
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
    msg.setTimeStamp(0.891441285425);
    msg.setSource(58821U);
    msg.setSourceEntity(140U);
    msg.setDestination(60627U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("SBYZIOCSADHLRXNXFJUTJFZQIAYNVGYHVNNJRCPWZVRWOEWZFUQAXYEBXWLEUMZMQGTI");
    msg.sys_dst.assign("KMAZJMGYJHQXIXTUQCNIBQUQNNLPFXURCDQXQRJOTSHRDGVXRGPGEUPOXNDKFKFCKXZFNUHMBJYMBBSWIMUVOROWESZYERALMUTZPWAASSTWRSXKGZABIQGHDENAWNG");
    msg.flags = 156U;
    const char tmp_msg_0[] = {-6, 41, 29, 56, -14, 13, 72, -64, 61, -55, -31, -10, -71, -50, 1, 62, 125, -28, -56, 32, -109, -59, -121, -52, -56, 95, 21, -74, 99, 51, 34, 122, -74, 67, -112, 93, 63, 123, 124, 114, -76, 34, 115, -15, -63, -5, -121, -16, -40, -22, -46, -119, -48, -99, -68, 6, 113, 37, -16, -24, 31, 17, -17, 74, -55, 7, -104, 64, -65, 64, -88, -93, 93, 20, -44, -6, 36, -41, -117, -95, 23, -123, 52, -58, -124, -84, 50, 30, -88, 81, -43, -51, -100, -125, -11, 108, 87, -53, 28, 120, -11, -120, 79, -82, -72, 40, 26, -101, -15, 19, 114, 119, -32, -13, -34, -65, 33, 124, 13, 60, 95, 4, 52, -63, -61, 82, 49, -22, -7, -78, -114, 99, -107, -72, -93, 95, -112, 101, -119, 100, 22, -99, 105, 49, 20, 118, 50, 14, -123, 98, -101, 23, 105, 60, 117, 100, 57, -128, -98, 1, 8, 71, 95, -28, 110, 47, 48, 45, 59, -112};
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
    msg.setTimeStamp(0.483848562833);
    msg.setSource(20150U);
    msg.setSourceEntity(150U);
    msg.setDestination(59735U);
    msg.setDestinationEntity(154U);
    msg.sys_src.assign("HJTTVNHRFZGXBFWZUPWYPBAWPODLMXWRDJRCIBHDSSIUESSMFQYERIQZIBVRNLODLMVJKVJUXGUUVONFTJOTCAZELKUPXPIPMSRZUNRIGQQYUEVBNVCAWSZGPZDOGUDFQCNXTORISKNSBYMGABQKQXDYOPYHHBJKRTYLTUESHFCKWACWQBMKX");
    msg.sys_dst.assign("DMOBSNJLPHEKAWZWPNDNNMVSPTWRXLOIOXWKCAPKUIREUYCRRAXHKSKJYHGYBUFJDTNMVTKASEFEPREZPZDQZRIQWJUWACVUMIYVLTGFPVIGFYJWNXRBHUEJGKIZCWLRXVLBEXBHOKOTXZITHGCSBYYVDQCDDJGFQISBQXDFUCGCRLSBTYMXHQDVQMAIJCQNEMCNYGFOPSUVVGKTPOWDESXJOZES");
    msg.flags = 6U;
    const char tmp_msg_0[] = {58, 78, 61, 0, -42, -34, 52, 111, -46, 106, -17, 1, 102, -60, 81, -91, -90, 125, 88, 87, -75, 35, -20, -87, 1, -98, 18, 27, -57, 108, -104, -27, 41, 94, 29, 17, 63, 90, -97, -86, -31, 12, 92, 19, 77, -62, 52, 46, -1, 66, 61, 72, 38, 46, -28, 61, -118, 95, -32, -85, 59, -23, 19, 76, 97, 67, 29, 114, 59, 85, 119, -5, -103, -48, 102, 110, 11, 55, -76, 122, -31, 27, -29, -34, -18, 47, 47, -50, -51, 89, -12, -19, 34, 12, 63, 85, 116, -109, 70, -94, 119, 89, 44, 87, 63, -58, -98, 108, 91, 40, 105, 93, 85, -26, -114, 2, -93, -5, 59, -11, -59, 5, -96, -45, 64, 14, -43, -92, -20, -34, 70, -14, -27, -21, 115, -120, 106, -22, 120, 18, -68, -44, 95, -94, -7, -88, -15, -98, 44, -104, 23, 37, -24, 126, 18, -83, -46, -72, -14, 89, 103, -72, -32, -110, 113, 83, 9, -51, 83, 55, -33, -119, -53, 75, 86, 53, 110, -68, -78, -93};
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
    msg.setTimeStamp(0.387040953847);
    msg.setSource(49402U);
    msg.setSourceEntity(43U);
    msg.setDestination(5447U);
    msg.setDestinationEntity(194U);
    msg.seq = 56421U;
    msg.value = 135U;
    msg.error.assign("DPXWREGZWUHSFJHZTTVCPYHPWCQHBIOQWBQGQNRCTUMVHSUJSLZADBPEUDRXATXRBDZHYOHBATKBJXHTIVCVZBWNFYHKCUIVVIOEZDJPOKTFNKCRFFPJGKGLYZYWXGXUOENXMBLCNUSSFBEFQNIKKSSLPMLIQJQGEJVUQWPLGRVGOGIJMNLUYRYFZLETCSNXOAPNRFRVVLXKUWSDYKKROGSTDAFACWIJYCMJADOI");

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
    msg.setTimeStamp(0.521860153088);
    msg.setSource(50348U);
    msg.setSourceEntity(215U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(135U);
    msg.seq = 35880U;
    msg.value = 55U;
    msg.error.assign("WSZRKPNJZFEHASUSPLCNREEELIZXUVJDIVHWNQFGIKSHIPGUQYVPOWTGJUCRANBNRLXMYQBIFRCJDLCIUMWPYVHNOCAEMAHVMRZXYSRWRCWTDGFOYICHTUFUVNGZMHNIQTVJFJKXBPOCYSXLKFXUAEBBGADBMFSZYLJLDJEXMOHWOOOLKVTJEZMTPNJGTOANT");

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
    msg.setTimeStamp(0.560383332462);
    msg.setSource(24139U);
    msg.setSourceEntity(235U);
    msg.setDestination(34239U);
    msg.setDestinationEntity(135U);
    msg.seq = 9919U;
    msg.value = 29U;
    msg.error.assign("VCEDIMYPPJDTXIUPUSDEBVAQBZHWMSJJQFRZGIAIQZNTTRGGBUWHOKSFGVJGZUFZFCIKOOLPFTYTRYVLHCAQTMKTLNFGZLLDRYXBWDYGIOMFSMTDNKWSCRZPNPCNUNLDPASEOKDIVRGHTAELEQIXEYUDWOWBKRNORCSATAJBMQFLHJXMQSSPYXUMRFOXWV");

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
    msg.setTimeStamp(0.456885444006);
    msg.setSource(60478U);
    msg.setSourceEntity(35U);
    msg.setDestination(1914U);
    msg.setDestinationEntity(155U);
    msg.seq = 25566U;
    msg.sys.assign("SAXCOBNRBBGOCROHPNPSHFVQVGHHWGNUOMPAUVKEYIOQBFIOALLJNBTQSCRDFRTMUCAZJJXWSFGA");
    msg.value = 0.0275440933517;

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
    msg.setTimeStamp(0.206632393233);
    msg.setSource(13085U);
    msg.setSourceEntity(71U);
    msg.setDestination(1012U);
    msg.setDestinationEntity(111U);
    msg.seq = 36031U;
    msg.sys.assign("UCSUULGKURZQMJHJYXDOQBTUIKOMXVGINEEFCPBLGSELHZJSIHXBNJRTQDCEXL");
    msg.value = 0.414963955232;

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
    msg.setTimeStamp(0.0269102726897);
    msg.setSource(24949U);
    msg.setSourceEntity(11U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(193U);
    msg.seq = 20519U;
    msg.sys.assign("VILXPPKASVWGBHSRTKIVCXKKKKYMFGECNIAFXZZHIILIDILDNWFVAUPTRYKEOIGVYDEQLAGENPCVACGMDJWKHGMZASDXGHGBQXUJJLOVZNRWJHAY");
    msg.value = 0.824072316965;

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
    msg.setTimeStamp(0.20566635024);
    msg.setSource(52538U);
    msg.setSourceEntity(99U);
    msg.setDestination(30280U);
    msg.setDestinationEntity(254U);
    msg.action = 189U;
    msg.longain = 0.650347556599;
    msg.latgain = 0.0774561819299;
    msg.bondthick = 828526700U;
    msg.leadgain = 0.692976561896;
    msg.deconflgain = 0.312775180655;

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
    msg.setTimeStamp(0.260543221104);
    msg.setSource(40248U);
    msg.setSourceEntity(162U);
    msg.setDestination(3299U);
    msg.setDestinationEntity(99U);
    msg.action = 239U;
    msg.longain = 0.526915777642;
    msg.latgain = 0.462220715605;
    msg.bondthick = 3813298373U;
    msg.leadgain = 0.0780665121397;
    msg.deconflgain = 0.0489003312257;

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
    msg.setTimeStamp(0.19192966469);
    msg.setSource(7112U);
    msg.setSourceEntity(206U);
    msg.setDestination(54042U);
    msg.setDestinationEntity(170U);
    msg.action = 132U;
    msg.longain = 0.621550964323;
    msg.latgain = 0.735043507892;
    msg.bondthick = 473814658U;
    msg.leadgain = 0.193673068268;
    msg.deconflgain = 0.732015703849;

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
    msg.setTimeStamp(0.812437210072);
    msg.setSource(10177U);
    msg.setSourceEntity(179U);
    msg.setDestination(42779U);
    msg.setDestinationEntity(164U);
    msg.err_mean = 0.509731746424;
    msg.dist_min_abs = 0.718445520155;
    msg.dist_min_mean = 0.720846676283;

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
    msg.setTimeStamp(0.489420748774);
    msg.setSource(34260U);
    msg.setSourceEntity(187U);
    msg.setDestination(37452U);
    msg.setDestinationEntity(247U);
    msg.err_mean = 0.36814973561;
    msg.dist_min_abs = 0.830922790126;
    msg.dist_min_mean = 0.0761165358149;

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
    msg.setTimeStamp(0.73995070328);
    msg.setSource(35796U);
    msg.setSourceEntity(161U);
    msg.setDestination(11658U);
    msg.setDestinationEntity(243U);
    msg.err_mean = 0.592179944156;
    msg.dist_min_abs = 0.42785677787;
    msg.dist_min_mean = 0.332251297466;

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
    msg.setTimeStamp(0.649980535948);
    msg.setSource(43888U);
    msg.setSourceEntity(153U);
    msg.setDestination(13544U);
    msg.setDestinationEntity(178U);
    msg.action = 239U;
    msg.lon_gain = 0.746021377448;
    msg.lat_gain = 0.925641853402;
    msg.bond_thick = 0.507311996882;
    msg.lead_gain = 0.0482762117881;
    msg.deconfl_gain = 0.434263540795;
    msg.accel_switch_gain = 0.799959089589;
    msg.safe_dist = 0.210040062316;
    msg.deconflict_offset = 0.99521324707;
    msg.accel_safe_margin = 0.212666401223;
    msg.accel_lim_x = 0.654229445867;

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
    msg.setTimeStamp(0.445465831981);
    msg.setSource(14194U);
    msg.setSourceEntity(24U);
    msg.setDestination(16432U);
    msg.setDestinationEntity(75U);
    msg.action = 111U;
    msg.lon_gain = 0.0132747061036;
    msg.lat_gain = 0.0514337659448;
    msg.bond_thick = 0.803065382934;
    msg.lead_gain = 0.422677707561;
    msg.deconfl_gain = 0.851985320144;
    msg.accel_switch_gain = 0.266066536992;
    msg.safe_dist = 0.105920761535;
    msg.deconflict_offset = 0.780371188246;
    msg.accel_safe_margin = 0.64200500265;
    msg.accel_lim_x = 0.177434683118;

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
    msg.setTimeStamp(0.527014830936);
    msg.setSource(35479U);
    msg.setSourceEntity(94U);
    msg.setDestination(57101U);
    msg.setDestinationEntity(45U);
    msg.action = 235U;
    msg.lon_gain = 0.849053894732;
    msg.lat_gain = 0.678897291544;
    msg.bond_thick = 0.245338849442;
    msg.lead_gain = 0.974068867095;
    msg.deconfl_gain = 0.378020239222;
    msg.accel_switch_gain = 0.583468708543;
    msg.safe_dist = 0.381402501831;
    msg.deconflict_offset = 0.244433047252;
    msg.accel_safe_margin = 0.175819549892;
    msg.accel_lim_x = 0.964346310819;

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
    msg.setTimeStamp(0.117111697489);
    msg.setSource(26735U);
    msg.setSourceEntity(139U);
    msg.setDestination(18923U);
    msg.setDestinationEntity(109U);
    msg.type = 53U;
    msg.op = 85U;
    msg.err_mean = 0.0295241720969;
    msg.dist_min_abs = 0.774863736415;
    msg.dist_min_mean = 0.773311892284;
    msg.roll_rate_mean = 0.0635849624314;
    msg.time = 0.0539989971318;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 143U;
    tmp_msg_0.lon_gain = 0.665349560155;
    tmp_msg_0.lat_gain = 0.285004060626;
    tmp_msg_0.bond_thick = 0.667470606087;
    tmp_msg_0.lead_gain = 0.117556189956;
    tmp_msg_0.deconfl_gain = 0.786956370935;
    tmp_msg_0.accel_switch_gain = 0.0391894857407;
    tmp_msg_0.safe_dist = 0.132418224277;
    tmp_msg_0.deconflict_offset = 0.328739879259;
    tmp_msg_0.accel_safe_margin = 0.125310342085;
    tmp_msg_0.accel_lim_x = 0.811853822542;
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
    msg.setTimeStamp(0.978539318302);
    msg.setSource(29578U);
    msg.setSourceEntity(36U);
    msg.setDestination(43159U);
    msg.setDestinationEntity(155U);
    msg.type = 214U;
    msg.op = 57U;
    msg.err_mean = 0.898868932615;
    msg.dist_min_abs = 0.730839477654;
    msg.dist_min_mean = 0.581814028016;
    msg.roll_rate_mean = 0.112597377722;
    msg.time = 0.738322938501;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.456077172783;
    tmp_msg_0.lat_gain = 0.568538799701;
    tmp_msg_0.bond_thick = 0.834140973967;
    tmp_msg_0.lead_gain = 0.820662506516;
    tmp_msg_0.deconfl_gain = 0.704445533309;
    tmp_msg_0.accel_switch_gain = 0.37199363568;
    tmp_msg_0.safe_dist = 0.315224154108;
    tmp_msg_0.deconflict_offset = 0.799493753737;
    tmp_msg_0.accel_safe_margin = 0.506201183318;
    tmp_msg_0.accel_lim_x = 0.277858344218;
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
    msg.setTimeStamp(0.228517961578);
    msg.setSource(40199U);
    msg.setSourceEntity(18U);
    msg.setDestination(16132U);
    msg.setDestinationEntity(90U);
    msg.type = 70U;
    msg.op = 7U;
    msg.err_mean = 0.670057313994;
    msg.dist_min_abs = 0.803427110922;
    msg.dist_min_mean = 0.722026598351;
    msg.roll_rate_mean = 0.546042809354;
    msg.time = 0.202819910199;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 143U;
    tmp_msg_0.lon_gain = 0.69477103308;
    tmp_msg_0.lat_gain = 0.458387431149;
    tmp_msg_0.bond_thick = 0.442260845076;
    tmp_msg_0.lead_gain = 0.893480349363;
    tmp_msg_0.deconfl_gain = 0.371680560902;
    tmp_msg_0.accel_switch_gain = 0.0510411927801;
    tmp_msg_0.safe_dist = 0.131975529243;
    tmp_msg_0.deconflict_offset = 0.44677567207;
    tmp_msg_0.accel_safe_margin = 0.740252030158;
    tmp_msg_0.accel_lim_x = 0.493547868393;
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
    msg.setTimeStamp(0.335446965588);
    msg.setSource(60594U);
    msg.setSourceEntity(81U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(251U);
    msg.uid = 36U;
    msg.frag_number = 4U;
    msg.num_frags = 8U;
    const char tmp_msg_0[] = {81, 51, -43, -1, -117, 114, -10, 101, 87, -78, -71, 94, -18, -106, -50, 100, 21, -18, -32, 20, 59, 66, -122, 38, 66, 65, -113, -82, -105, 91, -15, 40, -52, 95, 9, 83, -36, -35, -75, 2, 80, -2, -119, 8, -10, -81, 101, 101, -6, 5, -10, -33, -101, 18, -10, 1, -112, -94, 107, 101, -8, 63, -108, -112, -83, 89, 69, -2};
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
    msg.setTimeStamp(0.26360617827);
    msg.setSource(8361U);
    msg.setSourceEntity(33U);
    msg.setDestination(43179U);
    msg.setDestinationEntity(112U);
    msg.uid = 27U;
    msg.frag_number = 111U;
    msg.num_frags = 81U;
    const char tmp_msg_0[] = {105, 14, -93, 120, 58, -128, -14, -72, -30, -8, 107, 100, 117, -42, 7, -27, -78, -39, -102, 121, 66, -118, -48, -55, 22, -78, -42, 62, 94, -115, -42, 5, 41, -32, -26, -31, -47, 31, 53, 6, -88, -16, -61, 87, 22, -85, 107, 72, 45, 92, 0, 116, -60, -108, 81, -107, -88, 107, -2, 59, 94, 42, -9, -5, -45, 101, 117, 75, -77, -88, 106, 45, 22, -127, -91, -97, 114, 21, -49, 20, 114, 19, 1, 53, 102, 63, 78, -24, 63, -28, 99, 38, 51, -21, -61, -118, 44, 111, -28, 121, -90, -87, -121, 40, -13, -109, 20, 54, 7, -8, 90, 25, 35, -54, -15, 1, 34, 19, -23, 47, -90, 71, -107, 72, -92, -70, 4, -80, 25, 98, -2, 30, 102, 94, -116, -27, -9, -9, 47, -100, -79, -118, -88, -104, -77, 58, -95, -96, -99, -52, 38, 120, 93, 75, 12, -71, 74, 68, 54, -109, -126, -4, 72, 7, -28, 60, 38, -32, -18, 28, 53, -66, 109, 95, 33, -103, 15, -124, 55, -26, -120, -58, -96, -104, 96, 87, 105, -91, -24, -51};
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
    msg.setTimeStamp(0.622396649715);
    msg.setSource(30566U);
    msg.setSourceEntity(108U);
    msg.setDestination(13721U);
    msg.setDestinationEntity(240U);
    msg.uid = 238U;
    msg.frag_number = 248U;
    msg.num_frags = 112U;
    const char tmp_msg_0[] = {-78, -40, -94, -38, 52, -84, -32, -59, 33, 105, 75, 121, -52, -14, -72, -82, -105, 88, 53, 32, -116, 119, 46, -18, -18, 82, 52, -125, -66, 110, 59, 6, 108, -103, 66, 107, 59, 14, 67, -3, 89, 113, 43, 23, -86, 2, -42, -19, 11, 64, 57, 66, -94, 114, -36, 120, -59, 4, 98, 120, -85, 77, 4, 66, 34, 123, -34, -30, -39, -83, -93, -123, 78, 17, 85, 40, 102, 41, -114, -37, 79, 92, -49, -109, -126, -88, -36, -27, 85, -97, 49, 117, -25, -103, -66, 27, 55, -72, -18, 66, -72, -97, -78, 114, 123, 24, 89, 17, -101, 6, 14, 101, 114, -52, 27, 43, 117, 78, 30, 66, 66};
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
    msg.setTimeStamp(0.571833255939);
    msg.setSource(41526U);
    msg.setSourceEntity(91U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(175U);
    msg.content_type.assign("KSMSBBTWNUDVMXNSIGWLSGBENNODTZCMPSDGFBFDROKICTLGCBQJVNRZYFLUDZRUYSDAFTMAHAWRMOKCYJQFYJBDVEISWWOARCXWC");
    const char tmp_msg_0[] = {-72, 111, -78, -87, -61, 74, 71, -10, 78, -96, 96, 83, 111, 4, -96, -119, 23, 72, 121, -58, 69, 82, 39, -46, -46, 26, 60, 15, 83, -108, -53, 124, -75, -16, -68, 107, -98, -14, 106, -92, 50, 45, -92, -107, 125, -20, -14, -3, -51, -42, -21, 107, 71, -87, -67, -125, -20, 2, -56, 12, -13, 108, -21, -37, -91, -36, 113, 43, -67, 71, -84, -79, -41, 6, 99, 116, 80, 100, -95, 13, 15, 102, 80, 72, 46, -94, 96, 25, -84, 99, -85, -110, 66, -76, -24, 19, 2, -27, 61, -35, 9, -55, 115, -26, -90, 26, -119, -53, -47, -47, 112, -90, -63, 50, -68, 1, 13, 60, -5, -73, -36, -70, -14, -118, 86, 95, 96, 101, 105, 22, 13, 31, -83, 8, -67, 64, 93, -79, -123, -11, 45, 45, -85, 42, 34, 49, 36, 69, -90, -20, 56, 98, -2, 33, 40, 47, -50, -108, -72, 20, -6, -34, 89, -85, -75, 77, -84, 16, 23, -47, -43, -40, 24, -92, -28, -67, 86, -118, -5, -31, 62, -45, -39, 34, -22, -61, -26, -11, -105, -102, 84, -128, -29, -43, 99};
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
    msg.setTimeStamp(0.553282598348);
    msg.setSource(9434U);
    msg.setSourceEntity(205U);
    msg.setDestination(2282U);
    msg.setDestinationEntity(158U);
    msg.content_type.assign("BNAWNZPOKQGDNMULLGOSBDTFXHHEPYVFLKOEXIDOCENZVURVFFCTVIFMQLJDYPKMMARGXFCIRUFQNFAJXVMWOKTBXWSNEUZSADCVDDTPRJXEIDYMLPJJHHLRGYAGQZIHUZRBKUKFWYMUEOSMSOGCTPIYDNCZYCPJYXNVVWRMBZEDPVCSIILEQREZZGAATBIOKRHYKGTSMLASGSJIBJUGWQHPOW");
    const char tmp_msg_0[] = {95, -63, 126, -18, 85, -19, -80, 34, 81, -37, 26, -95, -111, -18, 66, 64, -88, 125, -36, -37, -70, 19, -31, 19, 112, 8, 65, -92, -97, 109, -115, -53, -1, 86, -126, -65, 17, -5, 53, 45, 50, -67, -99, -85, 29, 35, -107, -120, -80, -90, -114, 9, 88, -97, 79, 33, -118, 65, 18, 19, -36, 11, 22, -71, 53, -40, 90, -94, 23, 95, 35, -32, 22, -58, -124, -9, 49, -2, 14, 28, 2, 12, 35, -10, 13, -98, -46, -53, 119, 122, -10, 113, 42, -28, 77, 122, -121, -54, 74, -65, 83, -6, 0, -104, -87, -105, 100, 41, -97, -57, -99, 56, -92, 87, -95, -87, -12, 37, 1, -88, -79, -19, -52, -73, 0, 78, 76, 105, 117, -8, -79, -114, -60, 42, 84, 69, -113, 122, 15, -53, 19, 35, 38, -100, -104, -94, 59, -32, 41, 70, -35, -28, 27, -84, 60, 116, -109, 58, -74, 32, 99, -93, -105, 0, 84, 33, -97, 43, 46, 118};
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
    msg.setTimeStamp(0.347193262606);
    msg.setSource(41310U);
    msg.setSourceEntity(176U);
    msg.setDestination(55550U);
    msg.setDestinationEntity(203U);
    msg.content_type.assign("VNINPYMGIARXBKRMGZXPSNDHGOXOFFIQYPTUMNJEBDENCKCBJAOGFEEKSWXVMLQBDZYZPYGLPZHXBSIGYKFBMWZTMPCDVEUZVTUIFUFXZIYDHALWUCMTKZAQFWMKRRVRANQBRQPMVGCLTKUOBXNPTAMJJXEBYWNAICUWHSCSJJNAHCEQEVNOKWDG");
    const char tmp_msg_0[] = {17, 31, 81, 55, 99, 0, -29, 120, 69, 111, -128, -122, -93, -21, 31, -55, -80, -41, 50, -1, -33, -24, 36, -92, 43, -77, -123, -69, 123, 61, -47, 65, 14, 45, -100, -94, 84, -119, -79, -59, -24, 28, -90, 52, -42, -104, -79, -71, 27, 44, -16, 119, -84, -41, 1, 1, 87, -47, -124, 30, 99, 110, 78, 65, 123, 60, 35, 67, 44, -73, 53, 27, -108, 81, -16, 10, 48, -119, 14, 66, 109, -118, -118, -38, 116, -12, -49, 117, -86, -63, -51, -7, 23, 32, -34, -78, 37, 13, 81, 93, -47, -79, 89, 18, -65, 46, -8, 24, 28, -49, -80, -50, 42, -123, -28, -84, -18, 54, -59, 72, 67, -18, 20, -36, -14, -33, 20, 58, -88, -96, -45, 122, -120, -122, 21, 47, 34, -113, -91, -1, -13, -113, -120, 19, 48, -7, 18, -59, 30, 42, -74, 54, -42, -46, -110, -92, 80, -30, 31, 36, 69, -6, -13, -51, -119, 12, 13, 53, 102, -72, -87, -35, 24, 17, 112, 65, 0, 89, -98, 55, -81, 103, -64, -35, 95, -36, -61, -50, -56, -45, -57, 41, 113, -54, 85, 87, -27, -83, 96, -72, -53, 62, 0, 55, 124, -70, 104, -75, 29, 33, -36, 112, -34, 54, -74, 87, -87, 111, 88, -86, -27, -4, 89, -101, 99, -80, -87, 47, 35, 75, 75, -11, 109, 74, -26, -75, -42, 58, 41, 95, -56, 68, -91, 56, 107, -47};
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
    msg.setTimeStamp(0.701387355873);
    msg.setSource(43238U);
    msg.setSourceEntity(25U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.622766334161);
    msg.setSource(45167U);
    msg.setSourceEntity(41U);
    msg.setDestination(60542U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.973240946878);
    msg.setSource(55682U);
    msg.setSourceEntity(95U);
    msg.setDestination(63038U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.684698122227);
    msg.setSource(34003U);
    msg.setSourceEntity(196U);
    msg.setDestination(9962U);
    msg.setDestinationEntity(35U);
    msg.target = 23026U;
    msg.bearing = 0.996802270244;
    msg.elevation = 0.512873402693;

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
    msg.setTimeStamp(0.906521575234);
    msg.setSource(26395U);
    msg.setSourceEntity(201U);
    msg.setDestination(5934U);
    msg.setDestinationEntity(162U);
    msg.target = 35859U;
    msg.bearing = 0.949272650953;
    msg.elevation = 0.84147444218;

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
    msg.setTimeStamp(0.826671122914);
    msg.setSource(45913U);
    msg.setSourceEntity(123U);
    msg.setDestination(56593U);
    msg.setDestinationEntity(55U);
    msg.target = 56808U;
    msg.bearing = 0.378679733621;
    msg.elevation = 0.432729560026;

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
    msg.setTimeStamp(0.663978692889);
    msg.setSource(19321U);
    msg.setSourceEntity(116U);
    msg.setDestination(14924U);
    msg.setDestinationEntity(219U);
    msg.target = 11959U;
    msg.x = 0.81253369813;
    msg.y = 0.864419798555;
    msg.z = 0.831511350483;

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
    msg.setTimeStamp(0.326562046783);
    msg.setSource(59519U);
    msg.setSourceEntity(51U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(36U);
    msg.target = 39219U;
    msg.x = 0.250571237928;
    msg.y = 0.312639415674;
    msg.z = 0.561560724526;

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
    msg.setTimeStamp(0.9750140117);
    msg.setSource(2154U);
    msg.setSourceEntity(154U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(16U);
    msg.target = 22140U;
    msg.x = 0.810389908897;
    msg.y = 0.750136904062;
    msg.z = 0.224434981857;

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
    msg.setTimeStamp(0.912056463277);
    msg.setSource(50307U);
    msg.setSourceEntity(71U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(44U);
    msg.target = 34021U;
    msg.lat = 0.325196409795;
    msg.lon = 0.742161972792;
    msg.z_units = 58U;
    msg.z = 0.440709417707;

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
    msg.setTimeStamp(0.31447949404);
    msg.setSource(31965U);
    msg.setSourceEntity(243U);
    msg.setDestination(42213U);
    msg.setDestinationEntity(63U);
    msg.target = 51752U;
    msg.lat = 0.488729712823;
    msg.lon = 0.0951567109233;
    msg.z_units = 97U;
    msg.z = 0.490905501974;

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
    msg.setTimeStamp(0.502963998258);
    msg.setSource(21358U);
    msg.setSourceEntity(164U);
    msg.setDestination(57003U);
    msg.setDestinationEntity(57U);
    msg.target = 62621U;
    msg.lat = 0.588837035976;
    msg.lon = 0.407457751014;
    msg.z_units = 225U;
    msg.z = 0.341592891308;

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
    msg.setTimeStamp(0.496314384414);
    msg.setSource(18712U);
    msg.setSourceEntity(65U);
    msg.setDestination(49645U);
    msg.setDestinationEntity(235U);
    msg.locale.assign("FPLXCACHUZQOUCVYVLYYBKKCEIQYVFWUQAWEEUGTOFQGFJPZAYRERDIUMMWZMPVILGSKRWQRNGERTELJQASKXKHUSNTGKEBGJIQHB");
    const char tmp_msg_0[] = {-100, -79, 30, 21, 33, 20, 63, -59, 41, -100, 10, -119, 103, -101, 96, 46, 2, -115, -63, 21, 93, 16, -87, -59, -96, 87, 118, -119, 19, -125, -87, -33, -108, 96, 17, 58, 17, 47, -14, 119, -57, -18, 95, -22, 108, -117, 9, 103, 102, 104, 62, -123, -92, -100, 34, -8, 85, 29, 82, -66, -103, 36, -89, -8, 101, 102, 105, -3, -117, 56, 59, 20, 41, -10, 68, -101, 59, 43, -49, -96, -123, 15, 10, 80, 79, -14, -111, 121, 89, -58, -55, 99, -102, -66, -29, -53, -15, -101, 41, -65, -34, -108, 112, 122, -53, -113, -121, 70, -54, 24, 28, -116, 94, -50, -15, -55, 49, 3, 63, -113, -31, 9, 121, -109, 96, 116, -28, 29, -61, 2, -50, 89, -35, 111, -86, -126, -73};
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
    msg.setTimeStamp(0.766934953342);
    msg.setSource(57149U);
    msg.setSourceEntity(198U);
    msg.setDestination(25577U);
    msg.setDestinationEntity(26U);
    msg.locale.assign("IMQXXJTSAXNKXPOAIRFTIJPQNEHCSZTQVGWUKSYWUZGPUBYFWJEUDYBDUJWMUINWZRERTFZODJZCQVNXRDELLSLXDCJQPFJTDYILNOHVOCYMUVCZRELMBRCFEYKZKCAVRNUNAGEQOOVFHXGTHNIHOBSPZEQEFBHR");
    const char tmp_msg_0[] = {-110, 15, 102, 110, -110, -15, -111, -27, -15, -38, 92, -125, -103, -57, 102, 115, -21, 6, 68, 1, -111, -87, 84, -88, 117, -93, -47, 55, 92, -55, -42, 109, -17, 43, 64, -28, 53, 83, -66, 33, 111, -1, -128, -107, 41, 1, -99, -72, 45, 23, 88, 71, 18, -8, 68, 49, -67, 19, -128, -121, -74, -40, -33, 110, -77, -1, -109, -118, 70, -2, -46, -126, 15, 16, -13, 86, -6, 5, 115, -97, -78, 40, -38, 33, -69, 114, 32, -122, -12, 94, -93, 113, 20, -26, 0, -89, -4, 95, 95, 30, -75, 66, -61, 108, 64, -48, -29, -22, -10, 20, 67, 13, -40, -82, 46, 73, 45, 116, 37, -95, -85, -86, -44, -95, 121, 43, -127, -104, -103, -62, -81, 71, -10, -66, -8, 41, -96, 16, -122, -87, 13, -65, 46, -113, 91, 84, -14, -115, 116, -37, -59, -79, -54, 56, 55, -85, -39, 3, 4, 46, 60, 30, 1, 109, 101, -93, 58, -49, -91, -92, -35, -45, -40, -116};
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
    msg.setTimeStamp(0.482106147312);
    msg.setSource(36437U);
    msg.setSourceEntity(166U);
    msg.setDestination(16188U);
    msg.setDestinationEntity(65U);
    msg.locale.assign("TEJRKVSHJHETDZNVQLEGOBIEBACMPVAQTPQIZRIITGVJSGZEFIGCCIOJLOFHWEYEASDRONLXYDFRRGNNURUMLPXBXGXMBWHUGMAJWLXQSMCDLCJNFKMAQC");
    const char tmp_msg_0[] = {84, -70, 82, -23, 74, 15, -36, -75, 16, 108, 86, -32, -75, 126, -17, -117, 30, -86, 25, 48, 69, 103, 37, 8, -123, 21, -85, 4, -26, -34, -50, 36, -58, 68, 92, -115, -69, -7, -90, 0, 6, 64, 1, -6, -120, -48, 26, 41, 40, -95, -57, 90, -25, -56, 105, -89, -16, 30, -100, 126, 90, -99, 84, -9, -26, 96, 13, -21, 48, 21, -101, -100, 20, -54, -13, -50, 8, -79, -44, 35, -81, -112, 100, -66, -5, -63, 104, -87, 104, 13, -46, -68, -95, 31, -25, 78, -43, 125, 91, 74, 106, -35, 15, 116, -37, -42, 33, -21, -53, 83, 56, -21, 71, -75, -80, -99, -76, 99, 102, -62, 60, 70, -28, 35, -103, -57, -79, 108, -66, -74, 68, -98, 26, 53, 52, 95, 3, 17, 109, -98, 76, 11, -122, 33, 119, 124, 122, -121, 51, -85, 38, -95, -113, -26, 94, -42, -14, 61, 1, -5, 121, 89, -107, 96, -83, 19, -120, 99, -47, -101, -76, -94, 15, 22, -93, -59, 17, 49, -58, -60, 66, 116, 29, -28, 82, 52, 56, 125, 47, 2, 109, 10, -42, -63, -13, -71, -23, -128, 72, -110, -62, -11, 117, -124, 88, 98, -101, 106};
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
    msg.setTimeStamp(0.443363454731);
    msg.setSource(25685U);
    msg.setSourceEntity(154U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.631309020349);
    msg.setSource(53847U);
    msg.setSourceEntity(118U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.299056605812);
    msg.setSource(14565U);
    msg.setSourceEntity(131U);
    msg.setDestination(49029U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.923881869979);
    msg.setSource(56630U);
    msg.setSourceEntity(93U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(70U);
    msg.camid = 85U;
    msg.x = 9359U;
    msg.y = 51187U;

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
    msg.setTimeStamp(0.786148338588);
    msg.setSource(39192U);
    msg.setSourceEntity(94U);
    msg.setDestination(49158U);
    msg.setDestinationEntity(118U);
    msg.camid = 220U;
    msg.x = 12953U;
    msg.y = 18889U;

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
    msg.setTimeStamp(0.55733114582);
    msg.setSource(23593U);
    msg.setSourceEntity(199U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(191U);
    msg.camid = 165U;
    msg.x = 42799U;
    msg.y = 1540U;

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
    msg.setTimeStamp(0.16449471982);
    msg.setSource(19440U);
    msg.setSourceEntity(84U);
    msg.setDestination(34777U);
    msg.setDestinationEntity(178U);
    msg.camid = 175U;
    msg.x = 54450U;
    msg.y = 2861U;

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
    msg.setTimeStamp(0.44780554292);
    msg.setSource(48397U);
    msg.setSourceEntity(134U);
    msg.setDestination(23293U);
    msg.setDestinationEntity(190U);
    msg.camid = 146U;
    msg.x = 44672U;
    msg.y = 7687U;

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
    msg.setTimeStamp(0.20855022026);
    msg.setSource(47048U);
    msg.setSourceEntity(182U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(234U);
    msg.camid = 9U;
    msg.x = 45717U;
    msg.y = 5967U;

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
    msg.setTimeStamp(0.345105745809);
    msg.setSource(45645U);
    msg.setSourceEntity(163U);
    msg.setDestination(48288U);
    msg.setDestinationEntity(2U);
    msg.tracking = 251U;
    msg.lat = 0.942948159815;
    msg.lon = 0.69198534456;
    msg.x = 0.664486924027;
    msg.y = 0.918280778842;
    msg.z = 0.727310102909;

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
    msg.setTimeStamp(0.181907638781);
    msg.setSource(28711U);
    msg.setSourceEntity(101U);
    msg.setDestination(15135U);
    msg.setDestinationEntity(68U);
    msg.tracking = 51U;
    msg.lat = 0.689654413536;
    msg.lon = 0.385872999413;
    msg.x = 0.0982337903204;
    msg.y = 0.0229342086156;
    msg.z = 0.464567988105;

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
    msg.setTimeStamp(0.181985775947);
    msg.setSource(24885U);
    msg.setSourceEntity(20U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(115U);
    msg.tracking = 159U;
    msg.lat = 0.227311551192;
    msg.lon = 0.572895201925;
    msg.x = 0.860596108234;
    msg.y = 0.25533744057;
    msg.z = 0.126016303312;

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
    msg.setTimeStamp(0.885973607648);
    msg.setSource(11151U);
    msg.setSourceEntity(124U);
    msg.setDestination(34609U);
    msg.setDestinationEntity(115U);
    msg.target.assign("DJQNXDKMQJGDRAJBFDIUHDXKMLFEBWXUPCEHASTRBUOARKNNOYLRYGEOVPQCWAWFXPLSYCBAIWBJOZEYSMGQLLYIVOVSNJNNTCTAJQSWLFGBSEQUCRGWAOUSPRAQDVKPZWKQGZKFROYGLXTRVDXUQIXDNVIDUEFESTWTSXHMEHOYBBHZYLZXIRYHIGCRXTHZCNDOGUULAPIAVMWHZYZFTPUIPVPEHTSFMOBPIHKC");
    msg.lbearing = 0.575197407974;
    msg.lelevation = 0.529438040212;
    msg.bearing = 0.670956780246;
    msg.elevation = 0.754642787408;
    msg.phi = 0.980992031033;
    msg.theta = 0.725887536938;
    msg.psi = 0.602298135317;
    msg.accuracy = 0.549052853266;

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
    msg.setTimeStamp(0.59667710832);
    msg.setSource(60733U);
    msg.setSourceEntity(116U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(174U);
    msg.target.assign("MLJQIYSXFKGYYQFOINEBNOKKKOXCFUGDVMMAEIGULUQETHCSXAVNTQDJBPTPSULPNGQRZWTCPGREBSWDFCVCOIYNKJYMXALIYWJAHEJXVKJVPUBHPPGQRFWENMZJDVZHYGBDHSXORKTYRWOSFFROMLEANXZJTVLRSFPBYUSSZKLUWICNKWM");
    msg.lbearing = 0.584312109782;
    msg.lelevation = 0.222752559581;
    msg.bearing = 0.181448225021;
    msg.elevation = 0.286398512179;
    msg.phi = 0.472032389871;
    msg.theta = 0.673381226583;
    msg.psi = 0.468782618449;
    msg.accuracy = 0.567846100384;

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
    msg.setTimeStamp(0.129225448233);
    msg.setSource(39439U);
    msg.setSourceEntity(223U);
    msg.setDestination(30656U);
    msg.setDestinationEntity(184U);
    msg.target.assign("ZUNHHSXEOAIEEMGBUFEMWQZZPOFIIFEJKBYUDLKFAXZSLRTQNPPCHIWSWJTTQQRVUIUTEPBSZGOTCKBYKIYNMOPBGXDGNLHQTVDNVBVWUSRAPLHEWJYXXEKVONQVJHWUAXLKJSQFVCRNHPBSDYTDGGEHYSDYFWQZRRFLAISXACNOZMDLJWIOLCLQAEFVJVRIYXCPLDXBVORKKSGGZGOACUHRXTMQYMKBJIWMTRMYUWDZKUBPAHJNZOGCCMJ");
    msg.lbearing = 0.460844940803;
    msg.lelevation = 0.0893758940431;
    msg.bearing = 0.98374966679;
    msg.elevation = 0.670890024608;
    msg.phi = 0.27634930531;
    msg.theta = 0.918865395545;
    msg.psi = 0.172889751454;
    msg.accuracy = 0.875310979041;

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
    msg.setTimeStamp(0.395799581478);
    msg.setSource(50779U);
    msg.setSourceEntity(180U);
    msg.setDestination(937U);
    msg.setDestinationEntity(214U);
    msg.target.assign("AHGWPHODZUXFLKJQGVPILRBSQIOIFAUXYNYMYAECYUFMFXNIVKGQXXPETATECJMBHQGUTUGOPZHDBNEHFASHERMZHZOYCVUEMMILBJXQJAFBNRJORINUSSFPZPBTNWKLTVYPBYNZIXCIDOWTBKBRMRGYVOCPDLKDVGUXDJVQOSNWQSWDLMCKLDSAGWLZEHKNACYQIIO");
    msg.x = 0.350247235934;
    msg.y = 0.214928759718;
    msg.z = 0.963854284202;
    msg.n = 0.465410105054;
    msg.e = 0.289610873993;
    msg.d = 0.493580779713;
    msg.phi = 0.564034994333;
    msg.theta = 0.0135451535532;
    msg.psi = 0.861924333024;
    msg.accuracy = 0.898724905214;

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
    msg.setTimeStamp(0.0611368836193);
    msg.setSource(23882U);
    msg.setSourceEntity(30U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(79U);
    msg.target.assign("VTJAGUXMUMHVFSEREQOSRLSQZAACCGBXVPPAIIZWHTFYUGOCRIHKYXKLYDLTBYJUZBXPVSJBIXNMUUOBPSAORCLMVRNIRBEUFVEPXNNEIPAFGRVSDUDLDPKKADJIOATFCZXJTCKJXDXVYBOAJSYFQJSZUGNGPJWFHOLRSCTICMBAMOZFEWYTMGFMFKDYTJKHZWEWLOQLQZPHHBWG");
    msg.x = 0.0389138903408;
    msg.y = 0.791285748729;
    msg.z = 0.856038202819;
    msg.n = 0.998196450511;
    msg.e = 0.0508127458405;
    msg.d = 0.0480854174184;
    msg.phi = 0.795691974628;
    msg.theta = 0.331032996843;
    msg.psi = 0.198674647266;
    msg.accuracy = 0.4903509511;

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
    msg.setTimeStamp(0.248523991015);
    msg.setSource(28454U);
    msg.setSourceEntity(59U);
    msg.setDestination(2586U);
    msg.setDestinationEntity(223U);
    msg.target.assign("SVRLDFWVICTXKQLJFRMESUVKGKSFXTEUCAHQNYQUYNVKDYVIWJDDVMLPWBWLFBQGUZBRHECUTCQLCUQVQEETWNWJZJORCOLTEYHRVUSSDGUBWDJMIBLLXOKHZZEZGFWBTYIFOVBUGUAIKCKZAJPHSOMTZDIYPNGNPRYPRLKGJWABPBPCNDYHCZANIXITFROXFPDRG");
    msg.x = 0.808659790667;
    msg.y = 0.912807080425;
    msg.z = 0.846808945123;
    msg.n = 0.0101788656652;
    msg.e = 0.900809497486;
    msg.d = 0.667747858911;
    msg.phi = 0.862977981607;
    msg.theta = 0.80248390854;
    msg.psi = 0.101737518693;
    msg.accuracy = 0.560226125407;

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
    msg.setTimeStamp(0.140108243985);
    msg.setSource(60123U);
    msg.setSourceEntity(38U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(30U);
    msg.target.assign("JSRNTXKEZVSMLCDZZGUV");
    msg.lat = 0.650092645447;
    msg.lon = 0.155817587336;
    msg.z_units = 25U;
    msg.z = 0.00392265620277;
    msg.accuracy = 0.00329999423474;

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
    msg.setTimeStamp(0.102897336705);
    msg.setSource(44430U);
    msg.setSourceEntity(200U);
    msg.setDestination(43615U);
    msg.setDestinationEntity(233U);
    msg.target.assign("ANITWNEZKBEDFVWSGCDTAJXSSGPUKNZRHQJTJJGJGOYTYZQKIKGBHQCUXFDXAPIJNPNZBLWLXOHHQVORXUQRAOCEBEOWMDBPRMYJVFVYIQVDTIHOIRBFUNNITOFQSWEEHXGWGZEWAEYCSYDPZMGWJHPVZSEXBQMKGZLNPHFCXPYNUPVLSOTKMVCBYAKZLRTQCMXWFFCDKLFDGKQHXSBAWCTMMADVYECUSJBRAIRLLNOMI");
    msg.lat = 0.627866745621;
    msg.lon = 0.428839877446;
    msg.z_units = 155U;
    msg.z = 0.92266617729;
    msg.accuracy = 0.681661352513;

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
    msg.setTimeStamp(0.724190067664);
    msg.setSource(30832U);
    msg.setSourceEntity(128U);
    msg.setDestination(21472U);
    msg.setDestinationEntity(209U);
    msg.target.assign("OTQZLHVCXROBIJNWIISXNYMDJGMGDTCMSIITGOFMPFEGWHUNTFMBGOOMSLRDZYFEHDCHIZAGNAUJFMXRLCVNGVKRDXFNEXEOCCZOXBRYUOSH");
    msg.lat = 0.275198436589;
    msg.lon = 0.743027927908;
    msg.z_units = 80U;
    msg.z = 0.0400725352393;
    msg.accuracy = 0.233791407455;

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

  return test.getReturnValue();
}
