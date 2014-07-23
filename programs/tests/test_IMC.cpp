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
    msg.setTimeStamp(0.593204507469);
    msg.setSource(59210U);
    msg.setSourceEntity(190U);
    msg.setDestination(6502U);
    msg.setDestinationEntity(240U);
    msg.state = 240U;
    msg.flags = 65U;
    msg.description.assign("GIEWDBBCUNDBQKQQTAEPXAOKCJGNLHRATCCLZKLHLPEFAPKCMVGGSGNHMKPNPMEFUTVYVDGRHXUOQZVQJKBURFYFFOIBH");

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
    msg.setTimeStamp(0.191143128739);
    msg.setSource(59032U);
    msg.setSourceEntity(64U);
    msg.setDestination(23274U);
    msg.setDestinationEntity(164U);
    msg.state = 220U;
    msg.flags = 231U;
    msg.description.assign("IMNXPFYYHODYX");

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
    msg.setTimeStamp(0.0279483937547);
    msg.setSource(40963U);
    msg.setSourceEntity(49U);
    msg.setDestination(25762U);
    msg.setDestinationEntity(0U);
    msg.state = 92U;
    msg.flags = 52U;
    msg.description.assign("WWFSXRUDMGAFNFEQFDBDZEHCISBTXXTBBUMKSPPJGFOKZLGSXVXDXUBCOLKZSWICUYIXHKTVOKNXQFNMJACSWTPBYEIGOOHPDGMCUZGRLLBHTHRM");

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
    msg.setTimeStamp(0.601646630122);
    msg.setSource(37838U);
    msg.setSourceEntity(160U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.769195157307);
    msg.setSource(26550U);
    msg.setSourceEntity(218U);
    msg.setDestination(26291U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.0927062446665);
    msg.setSource(60676U);
    msg.setSourceEntity(179U);
    msg.setDestination(13239U);
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
    msg.setTimeStamp(0.487945489878);
    msg.setSource(25916U);
    msg.setSourceEntity(236U);
    msg.setDestination(48731U);
    msg.setDestinationEntity(85U);
    msg.id = 154U;
    msg.label.assign("HQDPLMVONKRXWHZKWAAGLJDIMGMIMVVTOTSRKQBZURGALBLYDKAXJONLBHPOWBFIAXYGOBVBGURZCYJFPHZNNQTUCJXIPNSXOCLTROADTRPQUKEYYNSIKEXEQQAHPPZIAVJCJGVKCYYSNDIBFNHNSVHBIJXACGJYIGSE");
    msg.component.assign("DTQEVQUXOEXRQKFJLXGHPBFGZKRDYESMYIROBXDDSVSLJSBXQFADOREHLJECLYUOIPLHFQQNVTEJGMZRZDKEWUZAZPBHDHTKWOWCXYSSTQESMVLYOYUNGFUXPWIRSIOKNAZSMBFVKRCIALAAEWYAZPKVHXVTYNCIUCKQVMDUJBPXZ");
    msg.act_time = 36042U;
    msg.deact_time = 64391U;

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
    msg.setTimeStamp(0.71556761104);
    msg.setSource(45463U);
    msg.setSourceEntity(185U);
    msg.setDestination(32950U);
    msg.setDestinationEntity(0U);
    msg.id = 142U;
    msg.label.assign("TIJOFEQFBFSVMUNFIRUZLPVUQKEHQTOYNACHSADPROINGMYOEBHGJGLLTSGJFNXNNTHCZDBLOXQMEAWXSYITSCWKLWHPJKVXWMCCKDPPBDHHUMUEELXGCAIUAPTRCLJMVMLZRIXSNUKALPFHMTHVFVXNBRLBQYQMQYDWBONOVYRZDWKECFWXAKISGVJMFBWJOPZDAZYCPFURAJWDPSRZZRTYVRSKXGOQXTGDCDZQTOVYHQZG");
    msg.component.assign("VLURJWZYLPPNSYUWXZMQ");
    msg.act_time = 33967U;
    msg.deact_time = 19753U;

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
    msg.setTimeStamp(0.963876493359);
    msg.setSource(8900U);
    msg.setSourceEntity(74U);
    msg.setDestination(9065U);
    msg.setDestinationEntity(60U);
    msg.id = 10U;
    msg.label.assign("OIDLEKEHQRFVQLOATYWUCD");
    msg.component.assign("DBIQRFCWZEZXDGZGVWIJSZNLEOHCBZSTNCVCPSHBMXPPHTDDNDWXOOIBKESHQXAOFVTQFSCLYYCRHFQYXLOWNJYLFCIQIDKJWXXZXQWQUZMMAXQMKKMPNKCLVIA");
    msg.act_time = 59570U;
    msg.deact_time = 18609U;

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
    msg.setTimeStamp(0.218658804694);
    msg.setSource(10952U);
    msg.setSourceEntity(99U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(91U);
    msg.id = 248U;

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
    msg.setTimeStamp(0.141834608547);
    msg.setSource(50032U);
    msg.setSourceEntity(221U);
    msg.setDestination(36734U);
    msg.setDestinationEntity(18U);
    msg.id = 6U;

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
    msg.setTimeStamp(0.814556782023);
    msg.setSource(2957U);
    msg.setSourceEntity(232U);
    msg.setDestination(1373U);
    msg.setDestinationEntity(130U);
    msg.id = 176U;

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
    msg.setTimeStamp(0.70347009591);
    msg.setSource(37169U);
    msg.setSourceEntity(82U);
    msg.setDestination(56412U);
    msg.setDestinationEntity(188U);
    msg.op = 112U;
    msg.list.assign("EIGCDSSHRXOFHGJHXSTSXWTDFQNPKWZMVTWDUEBMIYLHWHZCPVFEMLMBXIRANFKVTGBZDMZIJCUYVGPHLFKJGCDSOEMOJWARNRGKITRCKAQPTUFDCOZKPSFKERXLPZWBUUPGONEMJHEOVIQJLIMQNWVTPYDKCVDLSCVAYWZOVUKWQJNUJBOMQJHHRLDUQCNHLTSIAGASPEKLAXJEURYZPXGYBBXWMAYNRLXYBARNINFIQYZQYSZFOETDB");

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
    msg.setTimeStamp(0.174882907765);
    msg.setSource(20557U);
    msg.setSourceEntity(152U);
    msg.setDestination(43728U);
    msg.setDestinationEntity(155U);
    msg.op = 228U;
    msg.list.assign("IXHLZECCAIWUBXLKRXPNAQEYVDBIRJUQURKAZUZTHMKMYSICMKTWGBXPBUTJPVEXWBMPFIQGKWOYCFWPQOZZHHRXZBDWEIVXSYZHVCRPYDGNWTIHEJDMSOTNHDWFBXURINYGPRDOKAASPYFCYVQIBQRKCXNLFLQEASCYETTJVMVMSUEFNDULRNLNLGAQMQSEZOVUKOOMAOZPDSABJFLGPSKUWWHKJJAXVDNT");

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
    msg.setTimeStamp(0.202037885949);
    msg.setSource(20918U);
    msg.setSourceEntity(240U);
    msg.setDestination(27027U);
    msg.setDestinationEntity(137U);
    msg.op = 18U;
    msg.list.assign("XOHIRZNITDEGASESCZEJFUZMJYJGEMIDRJCXGDYNYVCBEQMBKKWAAUCNTLUYBNIABOOIGZVRZOSGWIPPGMONNFOKSRTCBTPFZXSUHFKJWXADHBVPSCHPVVJSFLKOSORQFOMQXWCTMABUKBPK");

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
    msg.setTimeStamp(0.924001374152);
    msg.setSource(29901U);
    msg.setSourceEntity(33U);
    msg.setDestination(29391U);
    msg.setDestinationEntity(180U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.623216541315);
    msg.setSource(37731U);
    msg.setSourceEntity(141U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(115U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.147477192896);
    msg.setSource(28158U);
    msg.setSourceEntity(252U);
    msg.setDestination(1255U);
    msg.setDestinationEntity(189U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.80232840491);
    msg.setSource(41785U);
    msg.setSourceEntity(92U);
    msg.setDestination(21672U);
    msg.setDestinationEntity(54U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.11563538457);
    msg.setSource(61957U);
    msg.setSourceEntity(129U);
    msg.setDestination(56411U);
    msg.setDestinationEntity(137U);
    msg.value = 41U;

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
    msg.setTimeStamp(0.534950405691);
    msg.setSource(24513U);
    msg.setSourceEntity(127U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(150U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.623150650227);
    msg.setSource(48633U);
    msg.setSourceEntity(175U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(75U);
    msg.consumer.assign("SZKCKWGOXEJSEMDTYUAYKKHNGEDWRCSLRZTUETAEBRMDYDD");
    msg.message_id = 49639U;

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
    msg.setTimeStamp(0.358261873502);
    msg.setSource(14025U);
    msg.setSourceEntity(131U);
    msg.setDestination(11834U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("RWXHTIWVZEDLVMTTAFHKRJYZUKJLRHRRPPBUPRFYOOQNDJPKLSEFXAPBPSSMLUVKNRIBHCNSWWWHULUYOBRAGBWYAELMAWLFKBNZFMCZCAVCNZOSLVANKTOQZBFSCRQDQOGYDMDXXWKYGTIUNIDUQT");
    msg.message_id = 38792U;

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
    msg.setTimeStamp(0.973992478356);
    msg.setSource(3755U);
    msg.setSourceEntity(235U);
    msg.setDestination(27207U);
    msg.setDestinationEntity(175U);
    msg.consumer.assign("GUWJXQURLDJRRBCCZEAONKXYSILQIEJOJELYCDQRIBIZUUZUYKLLFKKDAVJYFGFJLIUNRZBNTPTKSKMDIXWQWIOQPCVFRJZPNWISOEDWVFBOPVCAUMDSHPDXEABSBVOYHBPCZIKMYBETFGXFHGGDRGPRPASNBQJDYPKNCFGGRUMJQFTVCHXYNSAHXOTHAQMOANMTVS");
    msg.message_id = 40368U;

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
    msg.setTimeStamp(0.0925248524761);
    msg.setSource(34996U);
    msg.setSourceEntity(100U);
    msg.setDestination(65339U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.414768213746);
    msg.setSource(32598U);
    msg.setSourceEntity(120U);
    msg.setDestination(59425U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.995140860532);
    msg.setSource(62334U);
    msg.setSourceEntity(120U);
    msg.setDestination(25395U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.000373054500162);
    msg.setSource(42483U);
    msg.setSourceEntity(234U);
    msg.setDestination(43093U);
    msg.setDestinationEntity(158U);
    msg.section.assign("HRJDUGAUMHZPIUVZDYNJSWSWEMDICJAOYZEWXFEITACABGPJELQZVLCQPENXFGFPJVFBNKZVFYLIOYSCCCRBEROFSPXZWWMVBQJEHSXIHTNIXDGQTUXHTHKHKMYQLSGIRHKDYKZLNBMVJJTATGNCEFBQSYDEELHUDPNJ");
    msg.param.assign("JKJEQRYXUGFYVQMTEFTMIZVVJMWZXIWPYQJLOHEEPPZSWWLPBCJSUGCVIVUFAQMEDXOKGLKBCGEARXBRHNYGJAITLHCWFZVDOAZZXEDZLCYMBWIHJYKKGAFOEKIHALUNQLTOVQVOOSYNTQRXIKXSAZ");
    msg.value.assign("BUFADMRSBTRDBAOIBHOLMUTVKQUZYQGUDEKUSMJOEEPWMVNIMPELMERJTEILYSQJLXW");

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
    msg.setTimeStamp(0.586446862615);
    msg.setSource(39949U);
    msg.setSourceEntity(178U);
    msg.setDestination(15893U);
    msg.setDestinationEntity(134U);
    msg.section.assign("NUMVOUYLOLKTVZLBREWGOWERAFPGJCGGRJFIRJCMPJCAAVAXCZHSMBSJSPNPCBILPSSSIZJODRNFGYEAIRAKNVRXZYQDEQNYDVSZCYOTDRVIAKTFOBQTCXMKHHTPXXMYQNGBEH");
    msg.param.assign("VRBWJSLHAHYLULLSSXPTDMAURMYMPUPXMCAFMLJDNGLMAVWDVICGXF");
    msg.value.assign("ZLUOBAPCWLJCPDEISXGZSWCINDCMWBUGDNSUYHSSKZPSWJOEZFKPRDSMQYVHWUIMZBGXBEOKABTQD");

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
    msg.setTimeStamp(0.0472305481053);
    msg.setSource(46377U);
    msg.setSourceEntity(112U);
    msg.setDestination(32623U);
    msg.setDestinationEntity(101U);
    msg.section.assign("NDGDDXMWNYRWBRXHSDJPJTVJTSRBHEQKFEPXOXPLJVTRTGZKWBUXGMACTLLGJ");
    msg.param.assign("OEHBPAHYZIANYOBTNYOKRHGFEPZSKAAIWGXRJUEXIFCDPQVXBYBAVOWBKRGXRVAHMD");
    msg.value.assign("VRKLHJTYNPPSBVONYRFGGXJHXEPHGIGZRULGVWDQDHQAHQURNTCDARIPCLEUOTJUMFECPUVGXRRDMBIICXBPZVDGGIYFAADWWUMVKKMBNHBCMOTFTOISPFQJTQIQAZRXSL");

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
    msg.setTimeStamp(0.80907181658);
    msg.setSource(51663U);
    msg.setSourceEntity(170U);
    msg.setDestination(26351U);
    msg.setDestinationEntity(212U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.4575431658);
    msg.setSource(6158U);
    msg.setSourceEntity(114U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(251U);
    msg.op = 172U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("JQFQTKROEUNHTWDHIHPZISNMBFRPFQOXAIQZGWIVRPCFHMWGNRNWLLFBYUDWNTIMYSMVCRZVUGNOPSOILLZQBJELCHUXCLZOZSIJIVCGATYGQPPDKSHPWNSZMDXNSUSXCZJWVEDBTCDGMXKVAMAKKTMXKYLEDYFDZLUJYFXHYEFRBYEEWBUKWYAVCKONH");
    tmp_msg_0.param.assign("LEDVCZIURFCZZWTGNXYRMUEZVBTMHGKE");
    tmp_msg_0.value.assign("DTDBNJLPFGAJNLKCVHOTKFJAJMDUWRIPKYYWRBJODAMILUJIQZNEYMSXEGTCNIRZRPUCPDCAGSRENVOPBHONZKDKJRAVUQWXWWBFRKERAGUDEVHEOGEVLUJOGKYZJLFLYZXWMOQQUNISMQKZTQLVHLIRFPNSCJXYMZSABFTWYXBIVXSUDFAFSCWXLPSXQYFGRXGPAGNGBCMKETUMOQAOVEMTEHISHCISBYPCHTHZMODIVUFDLPWHBKBCW");
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
    msg.setTimeStamp(0.986854512393);
    msg.setSource(39310U);
    msg.setSourceEntity(4U);
    msg.setDestination(61343U);
    msg.setDestinationEntity(7U);
    msg.op = 214U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IDTWJPTXRZDYXAQVASMUBFBWKSCYPLMDUHPPRWDEHXHEFMYROSPWAGJXEJMOKUATUYLIGHJWBQQOXBVXHNOMFFAZTLIJWQBDHGMAHCYYGPKRYMLMNUOBNVPJEKQEISUVYSDILMFIDUZSQVQNAOMLUBNWSRNOFZXCKCEZBDKTLEKPYLJABKQIHYKVJPHZGFTZGGORHRDEZCROTXJTNLCZOLVIFVTCSISQUGDFINBACERKWSQPZGNGUXEVWNCXJ");
    tmp_msg_0.param.assign("PKFKIOHZDVDLZRASOEDJYBIPBQGZGTPKYRFAMGUNYACHKFGIEXRQSIPUPNTUTRJWRNRCNGHKQJWCFJVEBBINTEFZSXYZYZDBIUZVISUPJOEVXUVFMMGWVNYOHIHVRMTXJPLJSPEPFOCNUAAWJAXBMRFKOCVLNUWUSQKMLTWLXGVM");
    tmp_msg_0.value.assign("GAZZBWLZXXFTDQNPHDAIFEHPNICEJTVREMXEJSLLTXEIYNCMJGNYQDBKGFGQPLU");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.360768726465);
    msg.setSource(3648U);
    msg.setSourceEntity(169U);
    msg.setDestination(43960U);
    msg.setDestinationEntity(47U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.81648436794);
    msg.setSource(48090U);
    msg.setSourceEntity(207U);
    msg.setDestination(55658U);
    msg.setDestinationEntity(141U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.962570429483);
    msg.setSource(30856U);
    msg.setSourceEntity(213U);
    msg.setDestination(42348U);
    msg.setDestinationEntity(95U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.320953329499);
    msg.setSource(41909U);
    msg.setSourceEntity(197U);
    msg.setDestination(1006U);
    msg.setDestinationEntity(83U);
    msg.total_steps = 57U;
    msg.step_number = 107U;
    msg.step.assign("HNFVZMHJUBQLDLKXVNJSHCGDJNWZAXTAHQZYUFYPFFRURRPGLQEGMVZPXVMRSKOVTQOYECCYGDHXIBZLCITAWDISKJKXMKHBYNBISJWJPFTBTVAOLQAANBMIGNNRLMKEFGZMCVJVATBCYMOTXZHICNDWSXRDKPTUIKCWIBQVJSML");
    msg.flags = 33U;

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
    msg.setTimeStamp(0.279425585394);
    msg.setSource(7732U);
    msg.setSourceEntity(198U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(8U);
    msg.total_steps = 205U;
    msg.step_number = 34U;
    msg.step.assign("ILAEFQWICFPPHXXEPYVRQGUCSGXDEAUKYZNIDSOWFRTNIFKXATZJMUMRXMBDQVCBLTRANWDGPJKLXGNFMHWZVWWUZUQKRYEZPBULFMHBDVSNEQPIHSPZXKMDJWFSAHMQRTVLHCBKZKGBLORTVPHHUIVNEDDYULMNZWXETCIATTNFUYBMACYOJTECISYPIQEVSAW");
    msg.flags = 77U;

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
    msg.setTimeStamp(0.765742750431);
    msg.setSource(54348U);
    msg.setSourceEntity(207U);
    msg.setDestination(57037U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 191U;
    msg.step_number = 238U;
    msg.step.assign("LNBIKTFKYBSLBWZNLZLFZSLVUARX");
    msg.flags = 8U;

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
    msg.setTimeStamp(0.314186543487);
    msg.setSource(53779U);
    msg.setSourceEntity(56U);
    msg.setDestination(15933U);
    msg.setDestinationEntity(45U);
    msg.state = 5U;
    msg.error.assign("JCQLUUSFWDSXZXLKFCVMTQCSPCOGUMQOWQHOJHJOSRVHHPZVIGUBPUKMBTCKIRWFCWJIIDJQETAKYAVZAJGZIUKHNRCEGEFNAYXLWPGIENXPYBJOYALSFURCBCQSRLTTBQNLTEODSESMKFMIEIMGNKNKEGPLGGDHFFIXAMJQTMUQIBEW");

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
    msg.setTimeStamp(0.0532900405874);
    msg.setSource(57870U);
    msg.setSourceEntity(203U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(183U);
    msg.state = 1U;
    msg.error.assign("LNFFQEIDSSIAJQTWTPYHVHGPVUUNRPPSOVNJCBOYBYOXEZUHYBQDKAWGUZMIBWPIFAJTEUJLFDCOXVMJLBXICGWOKWDCBIVNQEERPXQMPZFARVVGYOASUCQRUJSYSTKFWFPKCDYGBRZC");

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
    msg.setTimeStamp(0.508290600667);
    msg.setSource(26036U);
    msg.setSourceEntity(192U);
    msg.setDestination(22150U);
    msg.setDestinationEntity(113U);
    msg.state = 196U;
    msg.error.assign("TRXETSYNSMEJWGCCRTAEVAYMBEKQINSCYBZVCCLTZXXKKWHJOWAWEWBSZFQDCCAKMLEKWIFENZVOHMRSLFYLDDHYVBNRDJPLNWVQKXZGMQAGLHCYILJXIOQTTYTHIQCDTUROMQUWKUFG");

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
    msg.setTimeStamp(0.107152315092);
    msg.setSource(64928U);
    msg.setSourceEntity(95U);
    msg.setDestination(57516U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.175302183888);
    msg.setSource(8692U);
    msg.setSourceEntity(125U);
    msg.setDestination(32247U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.101966324773);
    msg.setSource(28889U);
    msg.setSourceEntity(215U);
    msg.setDestination(57088U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.432676130159);
    msg.setSource(32304U);
    msg.setSourceEntity(214U);
    msg.setDestination(25451U);
    msg.setDestinationEntity(59U);
    msg.op = 11U;
    msg.speed_min = 0.294475063137;
    msg.speed_max = 0.130098580442;
    msg.long_accel = 0.259582490342;
    msg.alt_max_msl = 0.515182977013;
    msg.dive_fraction_max = 0.638883430062;
    msg.climb_fraction_max = 0.7959556708;
    msg.bank_max = 0.698267365485;
    msg.p_max = 0.966500111392;
    msg.pitch_min = 0.243527253226;
    msg.pitch_max = 0.923354902552;
    msg.q_max = 0.0748024376981;
    msg.g_min = 0.509820269307;
    msg.g_max = 0.940485489544;
    msg.g_lat_max = 0.174947050752;
    msg.rpm_min = 0.356910560435;
    msg.rpm_max = 0.978542259942;
    msg.rpm_rate_max = 0.392576555145;

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
    msg.setTimeStamp(0.782146378303);
    msg.setSource(31486U);
    msg.setSourceEntity(39U);
    msg.setDestination(8413U);
    msg.setDestinationEntity(247U);
    msg.op = 115U;
    msg.speed_min = 0.163731227533;
    msg.speed_max = 0.333855363952;
    msg.long_accel = 0.716354367112;
    msg.alt_max_msl = 0.961418804481;
    msg.dive_fraction_max = 0.417972468295;
    msg.climb_fraction_max = 0.330370976696;
    msg.bank_max = 0.136033927682;
    msg.p_max = 0.532524219045;
    msg.pitch_min = 0.603802562021;
    msg.pitch_max = 0.00433436569365;
    msg.q_max = 0.87444451151;
    msg.g_min = 0.357252227829;
    msg.g_max = 0.981216052505;
    msg.g_lat_max = 0.513017596505;
    msg.rpm_min = 0.391961334242;
    msg.rpm_max = 0.180718802829;
    msg.rpm_rate_max = 0.727983208954;

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
    msg.setTimeStamp(0.38266549531);
    msg.setSource(47068U);
    msg.setSourceEntity(63U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(91U);
    msg.op = 183U;
    msg.speed_min = 0.643651979837;
    msg.speed_max = 0.465906501385;
    msg.long_accel = 0.763659509378;
    msg.alt_max_msl = 0.43188086404;
    msg.dive_fraction_max = 0.506341064488;
    msg.climb_fraction_max = 0.895563431281;
    msg.bank_max = 0.978074460047;
    msg.p_max = 0.47773581992;
    msg.pitch_min = 0.895455392687;
    msg.pitch_max = 0.0176823299265;
    msg.q_max = 0.957102672488;
    msg.g_min = 0.259876336756;
    msg.g_max = 0.862352846663;
    msg.g_lat_max = 0.578604338133;
    msg.rpm_min = 0.667540422539;
    msg.rpm_max = 0.526685327181;
    msg.rpm_rate_max = 0.321740409069;

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
    msg.setTimeStamp(0.10835856802);
    msg.setSource(45860U);
    msg.setSourceEntity(86U);
    msg.setDestination(14082U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.857525312349);
    msg.setSource(32435U);
    msg.setSourceEntity(214U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(20U);
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 34U;
    tmp_msg_0.plan_id.assign("YJWUGQUUOYOTQVRKJPZILYPRKSHLSNQKTEHHXCPFYFXCWQNXOGXKVXVNKKRHODSRNFFEJCUYPIGQPGMNMWYJRSNUUZIXHXWLXIZGVBEDIRRFAKVOFCLJOPJDHMMDTEWTTAMYUCMUIEQBOOEBDEUZQFVUMKVPZHFZMXWBQCAWL");
    tmp_msg_0.plan_eta = -419945195;
    tmp_msg_0.plan_progress = 0.691069516446;
    tmp_msg_0.man_id.assign("PKHUWAGFLKGVBFZ");
    tmp_msg_0.man_type = 58113U;
    tmp_msg_0.man_eta = -1390497735;
    tmp_msg_0.last_outcome = 102U;
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
    msg.setTimeStamp(0.411801429163);
    msg.setSource(59964U);
    msg.setSourceEntity(60U);
    msg.setDestination(32343U);
    msg.setDestinationEntity(141U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.244555351018;
    tmp_msg_0.speed_units = 93U;
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
    msg.setTimeStamp(0.161283577457);
    msg.setSource(18806U);
    msg.setSourceEntity(92U);
    msg.setDestination(20815U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.390935515173;
    msg.lon = 0.591754011725;
    msg.height = 0.585987458042;
    msg.x = 0.721720811657;
    msg.y = 0.325748913702;
    msg.z = 0.959699489121;
    msg.phi = 0.3063442516;
    msg.theta = 0.911304070573;
    msg.psi = 0.154318750498;
    msg.u = 0.620443765664;
    msg.v = 0.747508706631;
    msg.w = 0.0899677324879;
    msg.p = 0.433416517781;
    msg.q = 0.484298653649;
    msg.r = 0.0618303644752;
    msg.svx = 0.836732397974;
    msg.svy = 0.845752598192;
    msg.svz = 0.860409687298;

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
    msg.setTimeStamp(0.152853951208);
    msg.setSource(37265U);
    msg.setSourceEntity(46U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.510904788027;
    msg.lon = 0.652693276936;
    msg.height = 0.193360711825;
    msg.x = 0.532641065571;
    msg.y = 0.17429128863;
    msg.z = 0.802855495649;
    msg.phi = 0.851703524578;
    msg.theta = 0.298056270325;
    msg.psi = 0.0900358911425;
    msg.u = 0.425105759357;
    msg.v = 0.802552748714;
    msg.w = 0.173179672276;
    msg.p = 0.671647720814;
    msg.q = 0.50460329574;
    msg.r = 0.458754838364;
    msg.svx = 0.698776118266;
    msg.svy = 0.436323567877;
    msg.svz = 0.187562743409;

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
    msg.setTimeStamp(0.326310370131);
    msg.setSource(61793U);
    msg.setSourceEntity(156U);
    msg.setDestination(22339U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.748510963922;
    msg.lon = 0.107031766124;
    msg.height = 0.524363558967;
    msg.x = 0.313629364477;
    msg.y = 0.83715965086;
    msg.z = 0.479227049677;
    msg.phi = 0.364594239992;
    msg.theta = 0.42178364968;
    msg.psi = 0.294162185157;
    msg.u = 0.922897868999;
    msg.v = 0.222138803382;
    msg.w = 0.488292128671;
    msg.p = 0.848090819443;
    msg.q = 0.0299286259462;
    msg.r = 0.0873952315936;
    msg.svx = 0.00844801575498;
    msg.svy = 0.0830205490224;
    msg.svz = 0.849300929871;

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
    msg.setTimeStamp(0.851719423006);
    msg.setSource(26748U);
    msg.setSourceEntity(163U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(214U);
    msg.op = 182U;
    msg.entities.assign("DTGCYSYRSTFNIVUXQTNKZBHXFDECHFOFAOUTASGVGPLWIXBCOYEEJPHMRJVQNNZMIUZCRSUBLTDGDLGIKWDOKQIJPSUXQPZWRCSPDPKCIVZNIWFBIEXVTYCPWFNXOLUNLALNAGHZYOVBUSBZRBIWTMREQZQUKVJSVLDVMXWWTSDVEAQWFTRPKXQATGBPALSJZOHHYMJJDARLPKEIOEXYMOFGRCJMKMJQHEGDUKWCBRAHBX");

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
    msg.setTimeStamp(0.890858256577);
    msg.setSource(57141U);
    msg.setSourceEntity(103U);
    msg.setDestination(45086U);
    msg.setDestinationEntity(165U);
    msg.op = 166U;
    msg.entities.assign("BWENACZQNAWLUPLFZIKPOWCFSDLOJACJMRBTSKCKGBNBUZVHFXMSROQHSPPYYTGWA");

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
    msg.setTimeStamp(0.823800688865);
    msg.setSource(58378U);
    msg.setSourceEntity(182U);
    msg.setDestination(2469U);
    msg.setDestinationEntity(56U);
    msg.op = 84U;
    msg.entities.assign("HKGXGOIQXFWAMYDIZLUVNELXZOPKQBZBVZTUSGXTJLTCPACTSBSXKVQFHAPKAMDKXLKZFCCYSRCAGFMRAIDNHTVXINMOHCPZJYWBIFJIVTQAWEPPWEPKOXNVIFTOGOVPJCGDQAMOUMRXZUKTZZAYYQIEVNDJFEDRELFSYTHSCEOYHLRLKYWRWGWHUEOCVNDNBFQNBLTCSJJGQHBRRMDPFLPUIWSXQHYGQNISOMBRDLEMJBJMASNWUUZUJREVW");

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
    msg.setTimeStamp(0.702309584096);
    msg.setSource(44065U);
    msg.setSourceEntity(85U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(198U);
    msg.type = 239U;
    msg.speed = 22389U;
    const char tmp_msg_0[] = {-121, -45, 57, -33, -40, -65, -114, -73, 25, 48, 70, 100, -85, -94, -43, 106, 7, -46, 90, -3, 42, 33, -108, 100, -116, -64, -60, -82, -105, 24, 68, 15, 100, -42, -65, -27, 25, 32, -22, -113, -9, 76, -60, 66, -6, -58, 12, 91, 59, -108, -94, 29, 96, -78, -5, 51, -3, -124, -79, -53, -36, -105, 36, -48, 57, -40, 6, 66, 30, -35, 6, -123, 52, -74, 98, 96, -61, 70, 117, -56, 61, -63, 27, -23, -14, -59, 64, 71, 104, 69, 64, -16, 112, -86, 38, -23, 4, 6, 73, -8, -100, -95, -10, -92};
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
    msg.setTimeStamp(0.172497018623);
    msg.setSource(44651U);
    msg.setSourceEntity(208U);
    msg.setDestination(24431U);
    msg.setDestinationEntity(248U);
    msg.type = 43U;
    msg.speed = 47232U;
    const char tmp_msg_0[] = {-35, 93, 79, -46, -90, -41, 52, 46, -46, 78, 22, -37, -5, -27, 42, 57, -22, 38, -89, -96, 71, 13, -68, 100, -61, 71, 69, 115, 7, -72, -36, -120, 38, -7, -54, -41, -37, 67, 74, -55, -18, 46, -38, 39, -89, 36, 2, 25, -16, 25, 32, -24, 89, 117, 117, -32, -75, -48, -82, -7, 60, -48, -78, -95, -101, 28, 0, -98, 62, 11, -26, -47, 11, -41, -33, 80, -58, 108, -33};
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
    msg.setTimeStamp(0.00795055894337);
    msg.setSource(16383U);
    msg.setSourceEntity(145U);
    msg.setDestination(39673U);
    msg.setDestinationEntity(43U);
    msg.type = 130U;
    msg.speed = 21433U;
    const char tmp_msg_0[] = {-125, 73, 30, -11, -55, 45, -104, 15, 94, 54, 73, 33, 80, -64, -91, 73, 6, -5, -3, -106, 28, -33, 7, -100, -21, 43, 22, -45, -82, -72, 119, -38, 91, -44, -15, 103, -9, -23, 40, 80, 73, 48, -34, -120, -26, 123, 96, 68, -21, 126, 15, -7, -40, -99, 21, -29, 118, 59, 95, 4, 91, -106, 17, 0, -11, -5, -27, -118, -117, -45, 60, -45, 73, 38, 12, 124, -125, 117, 97, 33, 52, -28, 0, 71, -90, 54, -118, -70, -72, -74, -116, 81, -92, -26, -110, -122, 73, 38, 33, -122, -47, 31, -24, -45, -106, 6, -68, 103, 106, -38, -115, -90, -126, -127, -105, 6, -75, -83, -9, -48, -40, 18, 105, 78, -90, -3, 38, -121, -54, 28, 36, -126, -118, 31, -96, 78, 81, -98, -31, -22, -25, 29, -26, 107, 39, 47, 74, -37, -29, -50, -7, 72, 74, 62, 119, -88, -99, -118, 85, -120, 94, 102, -92, -90, -23, -127, -111, -71, -2, 6, -89, -21, 42, -74, -87, -80, 26, 126, -73, 66, 33, -75, -23, 77, -51, 22, 9, -28, 25, -42, 55, -61, 20, 94, 6, -96, -7, -18, -118, 125, 117, 14, 19, 1, 34, -112, 112, 64, 2, -19, -31, 7, 72, 56, -73, 32, 69, 102, -21};
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
    msg.setTimeStamp(0.850753004799);
    msg.setSource(5643U);
    msg.setSourceEntity(160U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(206U);
    msg.op = 231U;
    msg.tas2acc_pgain = 0.823894907381;
    msg.bank2p_pgain = 0.776018239089;

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
    msg.setTimeStamp(0.73414271159);
    msg.setSource(23259U);
    msg.setSourceEntity(119U);
    msg.setDestination(32104U);
    msg.setDestinationEntity(207U);
    msg.op = 30U;
    msg.tas2acc_pgain = 0.169674764818;
    msg.bank2p_pgain = 0.828581639883;

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
    msg.setTimeStamp(0.592530002562);
    msg.setSource(34612U);
    msg.setSourceEntity(29U);
    msg.setDestination(20414U);
    msg.setDestinationEntity(136U);
    msg.op = 121U;
    msg.tas2acc_pgain = 0.128224120066;
    msg.bank2p_pgain = 0.580566821589;

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
    msg.setTimeStamp(0.729373974227);
    msg.setSource(42730U);
    msg.setSourceEntity(165U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(77U);
    msg.available = 248221418U;
    msg.value = 212U;

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
    msg.setTimeStamp(0.581633651448);
    msg.setSource(44124U);
    msg.setSourceEntity(141U);
    msg.setDestination(23252U);
    msg.setDestinationEntity(36U);
    msg.available = 2161856045U;
    msg.value = 89U;

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
    msg.setTimeStamp(0.575247496963);
    msg.setSource(14530U);
    msg.setSourceEntity(156U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(62U);
    msg.available = 3567036376U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.787010036736);
    msg.setSource(53776U);
    msg.setSourceEntity(251U);
    msg.setDestination(39438U);
    msg.setDestinationEntity(194U);
    msg.op = 244U;
    msg.snapshot.assign("RYJUAKAFZKIKMCDUIKVFXXOJTNYXPCGOHVZTNCPKSFTXBBPLJEMQQBMOWLIMJNZBJIAPEBNNWQLANWGXLUAFZSIJMYKUDEGASRGKC");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.523872298497;
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
    msg.setTimeStamp(0.480809592697);
    msg.setSource(17318U);
    msg.setSourceEntity(55U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(2U);
    msg.op = 103U;
    msg.snapshot.assign("DOHRXXWKCSPALBSSOIUVQCRNFHBEWQWOFPSYOZQEBIP");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 42U;
    tmp_msg_0.tas2acc_pgain = 0.197499847072;
    tmp_msg_0.bank2p_pgain = 0.770652114824;
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
    msg.setTimeStamp(0.25131624911);
    msg.setSource(19009U);
    msg.setSourceEntity(90U);
    msg.setDestination(7011U);
    msg.setDestinationEntity(146U);
    msg.op = 197U;
    msg.snapshot.assign("OHVLNVPXSTWLTTPWTLXXCKHOYUHJGCEDMZEJSUIYFRPKUKXPAEUCSJNATMWXDTQFKSDXRGPUNCLIHPQZAHAVRGRXFMZVTUFUQDLEAUEZRXMIGTYBGQRNYZVQCEGKVCSBDJLVPSKPJNRHHGZVIWSKLMZACEJODOTFNYSMNIEHR");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("KGDMBNBVWWVODSIVQQJNYZSQZSILRJYRJQFEYGJZNZPIORDKEWTRHWIGSHGTODQOASVWXDDGDIZCRNNRPTSFCJBPFBLHMAHXBETZFIFLVVFGEOWWGSEZYQXACUYJKKPCDQTHLUFTHXIPSCLOXYXBWTOUSNKRTYZSXJGHNGUGVUABLMEJKZMYWPMHDDVCLAWCVFBXPNCFTCIEXYAUVOJLUZNAJKYKPALTMBNKEQ");
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
    msg.setTimeStamp(0.248665308616);
    msg.setSource(11389U);
    msg.setSourceEntity(250U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(175U);
    msg.op = 243U;
    msg.name.assign("VEHFFSMGKSYJWSQJNCVJXXQXVARWSKZNACHHM");

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
    msg.setTimeStamp(0.856643844774);
    msg.setSource(94U);
    msg.setSourceEntity(178U);
    msg.setDestination(58546U);
    msg.setDestinationEntity(242U);
    msg.op = 177U;
    msg.name.assign("ULNZAKFSJVQWYCJRDCFTMFAUTSPAEQZAQXSVOBGKO");

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
    msg.setTimeStamp(0.882950082552);
    msg.setSource(38560U);
    msg.setSourceEntity(86U);
    msg.setDestination(16327U);
    msg.setDestinationEntity(98U);
    msg.op = 53U;
    msg.name.assign("VYTXDHJPPJKKYTUMUDHKORXZFANNDVZLPTARYHAUXWE");

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
    msg.setTimeStamp(0.645491122666);
    msg.setSource(1515U);
    msg.setSourceEntity(164U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(90U);
    msg.type = 57U;
    msg.htime = 0.50907349472;
    msg.context.assign("ITZPQUFGDHMUGFTJYGRLBDPKAVANVZWBOPTJKAFYYPSPMHTLKLZVVWNXLYVZKWIIFRPCLCVEZYHGIGRJEEXOLYXSGOQWUABHHJVUHNEWERGLDRCFJVDWYPNICMMQNOUHGUCFTIVWCSTGDFJFACAYKYSGOPRVMZIJQNLTZNKQSUFXXBPNQTEIYHECOQXUXWSSM");
    msg.text.assign("PTIHXPMSFIYAWORJFGBOQUOJBTXBNTZYNBSALYIDEEXIDLFKVNKGVBRGHCEGFEAMQNVYGEDPZYWVTYAZTJNNUYWOKYBUFFGUERQLWDCVKJCHADKXTJRMGRQFSZUGMACIKECSPHWINWXSUXRPFAVMKQFPDHQVHTRJTMDNIPPCJSTIOUFAYRAMUMWDZUWOSWVQXKHLLMCZQOZRIBLEBSEXOGOHJGCVEQPBMNZ");

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
    msg.setTimeStamp(0.745133573312);
    msg.setSource(43577U);
    msg.setSourceEntity(220U);
    msg.setDestination(40644U);
    msg.setDestinationEntity(180U);
    msg.type = 218U;
    msg.htime = 0.445905231822;
    msg.context.assign("BKBMKCUCQSBIOOVNADVUXHCECLTWPXVXQQTUHEATNGSDUYBOORKZLVYWHABJMKRZYIHNXPLRSDQVGWALWRITYRCSIFJECMFCMNEUMUFPZFUWGTGLQVQNJEPKWHFSZITBKZXSAMDQCKWAYPYQNAEHQOGFRKZFTMVDYMYPSLKIOIBONNGOENJYTSTGDLWEEJJTAJDOYPVURXWKXBGHXFRSPMSUJRDLN");
    msg.text.assign("EIKNYEMQBLKNQVNFZTCYYNQONAGCMXUTPAEVIPDPOCFKJAEKRGSVGLNCIYQSWYSNODQLHVBMUKXPTOBTUAIDOGSTFDUVGHZZKZYAXVNSLMJDKAYHGMKDEGUWRXYHMMJAJEFRYIEFVHOQSATOXPWIBFZLZUH");

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
    msg.setTimeStamp(0.388721838755);
    msg.setSource(28609U);
    msg.setSourceEntity(192U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(198U);
    msg.type = 6U;
    msg.htime = 0.547448442674;
    msg.context.assign("SHUZTGYBYIKYECAJDKPHWMOVAVGKBRETBOKGWWSZQJMFIRHLAADANQCPAVXDAHDQYZFTJSLMJZNIWHXOYAFPUFARXPUCMBMIPZBXQXEKKYSRCKHUCFNVWWRGGWRLOFITSTZHXTYGUTCNWWXMMMVKXMYOQRFDNSXIJYDLZKYFPIDSNUSOTC");
    msg.text.assign("MDQADETYRBHWHPXXMSXWFBNKTPPSQDFEIOYUNFKJBEJGGLLNAZQAJFPGRDUJXEAGGVZMCLWRXMBMBNZRWEOGQUTCFCBCVZPFIWFNOAWTRYYJZRHLYPSNCRLRCUU");

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
    msg.setTimeStamp(0.0374807492833);
    msg.setSource(52244U);
    msg.setSourceEntity(205U);
    msg.setDestination(5003U);
    msg.setDestinationEntity(199U);
    msg.command = 114U;
    msg.htime = 0.82431318223;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 75U;
    tmp_msg_0.htime = 0.547073833497;
    tmp_msg_0.context.assign("EQNHQHTWKDLZWLCXHFATPXANSCILEYUCWSYGJXMVJDVVRCVHPCDTQDXSHGDIUYIOZNUHFUJCT");
    tmp_msg_0.text.assign("OIAROVMXNZPIXMZTXIPEJIULNTHPDOPLTCULKKJCKRPDDRPHYMIQSJNGWUHVHCAHWABCWREBIXHQXEAEVUCPLLLPZNSJBWXACOYCYZCSBSEWHIDQGYFDRMVIQTZUGLZMUFESBNHGDTVFZDOYOQZYHDNSFTQKFJNJFOKJCRUHXFGWYEIAQVNTGIVMLQRDSUOJERGSRMXNBASKCXMJWMGYT");
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
    msg.setTimeStamp(0.00118766920502);
    msg.setSource(11939U);
    msg.setSourceEntity(83U);
    msg.setDestination(48775U);
    msg.setDestinationEntity(113U);
    msg.command = 14U;
    msg.htime = 0.537275463647;

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
    msg.setTimeStamp(0.508629602222);
    msg.setSource(29398U);
    msg.setSourceEntity(64U);
    msg.setDestination(7702U);
    msg.setDestinationEntity(211U);
    msg.command = 20U;
    msg.htime = 0.118899059947;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 184U;
    tmp_msg_0.htime = 0.912293252336;
    tmp_msg_0.context.assign("LVESZMQBKBYWQVYQIZVOQXNWVOTUQLKMAUXAEPBODPEPUUIWLKRGNUVBOPMVCDIDZGKDMCLKXZYUBILBPDTEHROQONLERYRXWWYSSTCPIETHCFCQTENFHPQLZMOYJLXVKEWGDAODEHNZMIBWFKRKDNTSZJPUKZAMAZGFAHREFTRMYAJGWHXRJGGBGSIIIAZHVTQQRXCNVJJTCDMOYNTHYFPDKYSFWA");
    tmp_msg_0.text.assign("CHWYOPSFILZWQNRZGHTRTLXRDNKQHXGXEOXBSGQVBIOWAJCFLXCEYBZNTVMKBUZHMYPQSAJLNYMFQXUELOGWYAVW");
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
    msg.setTimeStamp(0.585090054696);
    msg.setSource(8264U);
    msg.setSourceEntity(3U);
    msg.setDestination(44066U);
    msg.setDestinationEntity(1U);
    msg.op = 129U;
    msg.file.assign("PUYQLNRXEZWVBMOPNODBHDCQSFVXLXDKSELFNDVKWHZHIMNEXPKQUPYUAVCOVWPJGJQLLSKZOWSTHVLGSXM");

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
    msg.setTimeStamp(0.482313007099);
    msg.setSource(28213U);
    msg.setSourceEntity(83U);
    msg.setDestination(18429U);
    msg.setDestinationEntity(68U);
    msg.op = 111U;
    msg.file.assign("YVOMQVFETOHDKHLWDFNOISMKZMFVSOQDYNPXLAMIUHTRPZKEZUSUJFMBGLGBETCWSMBFURRJOPZQOF");

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
    msg.setTimeStamp(0.824934557622);
    msg.setSource(663U);
    msg.setSourceEntity(252U);
    msg.setDestination(13478U);
    msg.setDestinationEntity(45U);
    msg.op = 45U;
    msg.file.assign("RFMVJSPULEURZHRCEPTJSRIQIIQGYIUOXNBVWXNWMXB");

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
    msg.setTimeStamp(0.966708119952);
    msg.setSource(38690U);
    msg.setSourceEntity(210U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(163U);
    msg.op = 125U;
    msg.clock = 0.855487278851;
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
    msg.setTimeStamp(0.55723878943);
    msg.setSource(7889U);
    msg.setSourceEntity(227U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(240U);
    msg.op = 98U;
    msg.clock = 0.159939889123;
    msg.tz = -115;

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
    msg.setTimeStamp(0.888098804882);
    msg.setSource(55154U);
    msg.setSourceEntity(198U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(73U);
    msg.op = 242U;
    msg.clock = 0.909992269394;
    msg.tz = -40;

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
    msg.setTimeStamp(0.0279525695608);
    msg.setSource(23861U);
    msg.setSourceEntity(86U);
    msg.setDestination(15U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.539305565592);
    msg.setSource(53574U);
    msg.setSourceEntity(134U);
    msg.setDestination(12758U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.468288351993);
    msg.setSource(65307U);
    msg.setSourceEntity(73U);
    msg.setDestination(17348U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.793848559869);
    msg.setSource(46840U);
    msg.setSourceEntity(19U);
    msg.setDestination(4941U);
    msg.setDestinationEntity(234U);
    msg.sys_name.assign("CHOGTHUUEHBZQWIBEMBAJDYKVGPJDRVSEIXSTCASVYDHPZPYXGJQVOAUOXHLYEWNUTNCBVSXMEICUHEYZHXO");
    msg.sys_type = 155U;
    msg.owner = 1571U;
    msg.lat = 0.752523865503;
    msg.lon = 0.588001829712;
    msg.height = 0.22249246159;
    msg.services.assign("SZRWGGQHPXHICKLJXMOZCBAABIJLLPQEBIVZDFESZRZMUQAXVWZNQBMTZSENVJFZMVOSRQGEFL");

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
    msg.setTimeStamp(0.333420842806);
    msg.setSource(52401U);
    msg.setSourceEntity(186U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(214U);
    msg.sys_name.assign("LNYNSCEOCYLJDLQAWVVGWCSXSMHSGQHZYFQMRREUWODHNJIZMQSHVCYXCPOIVAAXFRVEGAXFHMXCBAPATWDPUWHXUESPQNGFQCFUQYTTMPEUCTRNRRZMHRZTKBFSYZNPQHZSJBDBBNXHFOCYMARNJGTDKDJVL");
    msg.sys_type = 30U;
    msg.owner = 48019U;
    msg.lat = 0.274339666453;
    msg.lon = 0.904128884062;
    msg.height = 0.714191258454;
    msg.services.assign("YQKJBQRLCEMZDLADODNYDXGVMBFRSMWHDBHXFXCFQVIBDWCPQFIJWIAENDAUDBAMTLRCHEHIGANTGVPYQJANCXTHELSLUZLJZJXYWUTSILKGPQYCFMTJWXPVGVCBUFOVJCVZUOVDZWSKPISOFZHCHMYTWMQSPZRMYIUTNYXMSWKALKAWCZNPNFARBGUOENOAJXUGZRLIREPEVNJSXGBGYIFKXKDYGQSRMTLBFQT");

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
    msg.setTimeStamp(0.975689107117);
    msg.setSource(63839U);
    msg.setSourceEntity(108U);
    msg.setDestination(34341U);
    msg.setDestinationEntity(168U);
    msg.sys_name.assign("JLHSASMDZLINTBBRUXZTROKGUHEBCGLJRZCPWYMLKDFXGKBLPNBFABADBJBIKFJWSKJOCQVELDDXMQCOYQUGTXFIJHUZSGOYTCWHWFDYUIFDZATABPTQYGURQMWOVEZXCNMAKWCEOEIFWTWQCNVGLSGXKMCJVEERUKVSDWYKMFSJIGAYAXOIOK");
    msg.sys_type = 131U;
    msg.owner = 12260U;
    msg.lat = 0.243612435703;
    msg.lon = 0.120179059574;
    msg.height = 0.696615373486;
    msg.services.assign("GKNLWSCWZCDULSYBUYYWLSONXPSGCEJXTKYKPIAANDCLCBVNVJAQMSDMVTXLMGXTDGKPJLSPNHREDBHRRHXZBQXIORTLMQMUKEGPFFAYZOPOIGBCQIUELUJBNMIEKMQKOPWFBZKHVQUCWXIATNJS");

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
    msg.setTimeStamp(0.744057876845);
    msg.setSource(33363U);
    msg.setSourceEntity(0U);
    msg.setDestination(35081U);
    msg.setDestinationEntity(180U);
    msg.service.assign("EXPJADXDEVCROTQYYKKPVKVSOTLWVICXHUTQYRZCHWXIOREQDQDORBSWJFTELLWWSJTQASHLOFRZGIBAZRCNYABSLPBUVGWCINPFNDWEWOEERJUMIDBPNTAZPPHZZGKSUMVHDEMUAYMZNMQTGSHEQYJVDCMKKPJFVCDQKHEIOLTADMJCLNBYBUVSBRTKNHIYXGUSC");
    msg.service_type = 88U;

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
    msg.setTimeStamp(0.174567290193);
    msg.setSource(28245U);
    msg.setSourceEntity(232U);
    msg.setDestination(65059U);
    msg.setDestinationEntity(186U);
    msg.service.assign("NGLMHNVLAMTKVZLQDAHRWWEZRIFYNJNQHBWFAYOIETPSDUDSDUJINGHACHYVYBJKNVUXJPKWQQCZLIRHSCGKMKZRPXMBWGCVVQUTPOBETPJGYKYMXBGUJYLABABKMRKREZZIGRVCFTQYUXTOAXCRIAPTYSJWFPUXZCHXNDEOUOHCTLBDFNESBSWIOCZVVQHESPMMXTXNLFUOAGEEDIWFDJPVLRTUSKBGLCSMSNAQGLOYMDHKFOQEOIJWWIZQPD");
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
    msg.setTimeStamp(0.0922129149776);
    msg.setSource(46534U);
    msg.setSourceEntity(21U);
    msg.setDestination(43021U);
    msg.setDestinationEntity(139U);
    msg.service.assign("HDXADPKIIEFOPHQNPAOMYMZQUYGEXMCVYRWWUYBJISZCIKJBHSTEPEGSWLRXGRYPGCKVEIXGQBWOLQWOLQFPLSFIVRTKPDUJQCHKUTJUZSZSREFWISATHGFFGGBDXMGOARVIEOXMORNNASJJCRUMHZBNBKLLLDEFKUHAOWQFZTYQONFKZNQMATEUAJDZZPLDJXPCVKVYJOLCBYCPNSGMXRNTZXAWYKLNEFHUCBDVMYNTDVVSRTXC");
    msg.service_type = 169U;

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
    msg.setTimeStamp(0.169234963217);
    msg.setSource(19513U);
    msg.setSourceEntity(236U);
    msg.setDestination(59683U);
    msg.setDestinationEntity(124U);
    msg.value = 0.877288399809;

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
    msg.setTimeStamp(0.471849075933);
    msg.setSource(41728U);
    msg.setSourceEntity(192U);
    msg.setDestination(9455U);
    msg.setDestinationEntity(215U);
    msg.value = 0.126649178073;

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
    msg.setTimeStamp(0.94035187408);
    msg.setSource(63906U);
    msg.setSourceEntity(244U);
    msg.setDestination(46131U);
    msg.setDestinationEntity(112U);
    msg.value = 0.825708269047;

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
    msg.setTimeStamp(0.499832582155);
    msg.setSource(653U);
    msg.setSourceEntity(90U);
    msg.setDestination(64630U);
    msg.setDestinationEntity(149U);
    msg.value = 0.92398933217;

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
    msg.setTimeStamp(0.531124697516);
    msg.setSource(3478U);
    msg.setSourceEntity(58U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(122U);
    msg.value = 0.476315101554;

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
    msg.setTimeStamp(0.872234552566);
    msg.setSource(15293U);
    msg.setSourceEntity(175U);
    msg.setDestination(39513U);
    msg.setDestinationEntity(86U);
    msg.value = 0.113601123356;

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
    msg.setTimeStamp(0.442762306826);
    msg.setSource(51769U);
    msg.setSourceEntity(34U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(3U);
    msg.value = 0.303592623371;

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
    msg.setTimeStamp(0.0753167756876);
    msg.setSource(42205U);
    msg.setSourceEntity(231U);
    msg.setDestination(23486U);
    msg.setDestinationEntity(85U);
    msg.value = 0.124620936203;

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
    msg.setTimeStamp(0.0538649587866);
    msg.setSource(45117U);
    msg.setSourceEntity(47U);
    msg.setDestination(34160U);
    msg.setDestinationEntity(62U);
    msg.value = 0.136991465402;

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
    msg.setTimeStamp(0.740763289556);
    msg.setSource(36439U);
    msg.setSourceEntity(2U);
    msg.setDestination(3454U);
    msg.setDestinationEntity(190U);
    msg.number.assign("PHSYKZPGWXQCOTBQSDLNBELACUEITAQRIBKBVDFUJSTHJGNICDVRGOUULGFCSYSXCPEKZFIWYUCFZZIJGLVNZUAQUXFIVUPYOJFJVPRHVIOSRNXKRWXEPHOMIKEAHGPBPJNKRWLXKWBTYNOLNAMATDCDEASVYOHHLXTCTLAERQIQZSMQMTWMJJJUVVZBHMZDDAMILWRWXTXBYYFEFPMOFYELOKPOCNXZHWDSMDHQQTESNGAUGWNQ");
    msg.timeout = 35194U;
    msg.contents.assign("IIQUWFLDNINWYUMIRKCWUUAGWYTLIBGAAPFOUAITGTXXJRLFLQHZJELFSORECNYQOMDPLEWTXSDTGKMKHGKCIQDYVHHXOVWVRNMETURNNKYHQBBIPVAZAICOMTGLZCQRSKOZOXJQVKELCCRUFTXQBKXPSFSZOJSXWHIESFDHSCOVBEBSRNEYJRXPQAUBFHBMLQVJZUPOCDVPAZMGYYDJYMBT");

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
    msg.setTimeStamp(0.832090057338);
    msg.setSource(24520U);
    msg.setSourceEntity(250U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(165U);
    msg.number.assign("NQGECZRGLFOXDUYCYULEOKOQHJUDKCJHOUYVNZFYACMOEAJAGVFJCKHKYJEIFWIMIXZQUNJNPFEAJWQQGRUZHLAVSTTFHKURVWZSZWVSQLBOYTBVMDXBMJMOTRQYBMSXMTTUGKINOMHPHPNBVBPLJXR");
    msg.timeout = 49021U;
    msg.contents.assign("WRTVVOIMJTDZSAHMFIK");

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
    msg.setTimeStamp(0.800107290995);
    msg.setSource(16834U);
    msg.setSourceEntity(114U);
    msg.setDestination(47538U);
    msg.setDestinationEntity(125U);
    msg.number.assign("AZAOQBSNASBTMWEIJXTRDIPQNYEKDULLPWYUYKGCNBCZRWEOTDIRONZJHMAJEBHOLJQHAPJPQSMMRWLUWPKIYCAVUGFKHUVZNGKCNXYIFPSKRIHKGCQCVPZXEVSUFVTEXAJYFJHBQVNSBDSCVWIHSZIDPAIMFDJGMQYQZGORFZWEAITMLDVHDNOFOMDZUWQUGMSGUWXLECBDLLXTXYCSBTUTNPRPHKYVBOEGRMJFTWTNBCZHKOARFRJGVX");
    msg.timeout = 34756U;
    msg.contents.assign("JYUXSEWRNXSETWKYATEFEUAFZTYIAMQHGTRMKBKLUOQYMRCWJGATZPFRAOSSBGRXVIDXOIIYYFADRQDEBBPPPQZYIVM");

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
    msg.setTimeStamp(0.432162778223);
    msg.setSource(26829U);
    msg.setSourceEntity(153U);
    msg.setDestination(11286U);
    msg.setDestinationEntity(146U);
    msg.seq = 2134342615U;
    msg.destination.assign("EVEDIEZINSDLCQXZPSBFOCXPSSOUUENBHQTDNQCBSMWTSCHMGANMWRIRKOGSBOPRUOPJEJMUHHMCWRMWJGDJNWKVNNQNDIDKPYOEHVMOFTGMSKOCTAGLBZIVXUKUQYVLTICTWHEWVGEVVXDRPKKYNYAJQGABAILCUYFITYGOCTWFPXZHDRXITZAYSZADAJLNPLQLOTRXLURJSFEGUGLHDCZXFQWXHBYZRYEBF");
    msg.timeout = 52094U;
    const char tmp_msg_0[] = {-97, 45, -101, -123, -37, 84, 104, -36, 120, -54, 47, -114, -52, 47, 103, 27, 44, 12, -74, 56, -54, 92, -69, -41, -23, -55, -18, 121, 49, 30, 110, -31, -116, 80, 97, 43, 52, -63, -70, 10, -18, 13, -16, 56, -128, -18, -113, -44, 117, 106, -124, -88, 118, 72, 120, 51, -109, 36, 113, -29, 97, 6, -124, -68, 125, -70, 99, 12, 79, -49, 49, -107, -111, -117, -112, -55, -93, 70, -55, -68, 117, -110, -32, -39, -61, 99, -126, -9, 66, -77, -84, 103, -3, -22, 80, 24, -40, 69, 33, 13, 51, -65, -115, -22, -78, -39, -5, -111, 76, 28, 89, 35, -71, 94, -88, 54, -70, 37, -43, 16, -20, 33, 44, -24, -59, 60, 55, 97, 110, 8, -54, 11, 33, -28, 65, -51, -50, -65, 57, -7, -118, 43, -103, 77, 7, 111, 64, 117, 3, -117, -20, 111, -94, -121, -124, -16, -90, 45, 58, 89, -27, -105, -89, -10, -109, 88, -27, -56, 4, 105, -4, 100, -99, 108, -62, 59, 10, -74, 126, -120, -20, -6, 65, -84, -96, 17, 122, -119, 30, -118, 3, -49, 57, -4, -70, 11, -84, 3, -24, 125, 117, 59, -87, 123, 66, 0, 83, 58, 123, -116, 31, -113};
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
    msg.setTimeStamp(0.681217863572);
    msg.setSource(32060U);
    msg.setSourceEntity(134U);
    msg.setDestination(40649U);
    msg.setDestinationEntity(45U);
    msg.seq = 332287201U;
    msg.destination.assign("MQKHOBWJVOKGVZTKCPIOXXRGTWOJTXBOMLFZCREMDGFGWBYJDATAKXZSQKBSQCOPWCLEAILUPWLIWJYXKKOLTUJQAFPIALCFEDXTHRKVRLJZLXMMXIYNQTJGGMDJZUQDSZFSWVNVUVNLCENNMHBBRPWEQFIZAMDGFRNNDVLPFSYZPUFQSAE");
    msg.timeout = 33371U;
    const char tmp_msg_0[] = {-47, -38, -77, -114, 102, -8, -120, 53, -13, 34, -43, 122, 19, -117, 10, -22, -85, 12, -65, -21, -6, 113, -65, -42, 93, -76, -18, 58, 69, -22, 30, 39, 1, -15, 119, 11, 80, -2, -55, -111, -3, 78, 80, 40, -45, -95, 106, -116, -111, -47, -11, 115, 87, 34, -38, -69, -40, -80, -116, -23, 68, 17, 31, 78, -124, 90, -4, 1, 35, -109, -59, 71, 2, 113, 46, 9, 78, -85, -95, 111, 71, -47, 123, -87, -53, 94, 100, 107, 116, 104, -80, 81, 51, 40, -34, -36, -48, -19, -92, -11, -50, 20, 61, 109, -47, -103, 126, 52, -52, 70, 1, -114, 0};
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
    msg.setTimeStamp(0.360091398811);
    msg.setSource(61693U);
    msg.setSourceEntity(254U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(253U);
    msg.seq = 1415881512U;
    msg.destination.assign("RTSDGKEGFMQPOSWBHFGQKTWJIREEMUTOQTRQDJDRNUKYMDZAYZIBUZMTXQPHVNRVBONAKSJYEMKLGNPYXHIVZOAEHLIDJSYCZHOKFTUAJKCZDXQGYDDHDVQGJLKMLYJFZJLGVBECAEPMUWMWFBPXNLRVLBRMZNIVBRBUNFXQGHWMCACALSV");
    msg.timeout = 65150U;
    const char tmp_msg_0[] = {-93, 126, -49, -58, -109, -81, -123, -10, -19, -29, -32, 51, 71, -101, 4, -99, 50, -57, 32, -116, -70, 14, 36, -47, 56, 110, 108, -29, -77, -26, 74, 90, 63, -11, 122, 107, 30, 0, -105, -22, -83, 61, -32, 5, 48, 100, 109, -69, 66, -21, 62, 69, -47, 64, -9, -83, -36, -100, -114, -79, -87, -4, 64, 125, 12, -54, 61, 88, -25, -77, -59, 27, 7, -14, -126, -3, 84, 9, 104, 120, 88, -84, -12, 12, 83, -66, 14, -43, -92, -73, -118, 17, -17, 21, -105, 119, -96, 17, 53, 118, -92, 23, -85, -1, -112, -48, -18, 17, -76, -29, -127, -14, -61, 61, -118, -78, 97, 56, -11, 95, 24, 62, 107, 4, -80, -2, 110, 10, -39, 120, -125, 39, 36, -81, 72, -93, -8, -11, -15, -99, -50, -40, -1, 60, 112, -98, -65, 43, 13, 72, 126, 99, -40, 0, -45, -95, 22, -128, -89, 48, 1, -113, 86, 3, 4, 126, -69, 16, -126, -68, -77, 75, -61, 103, 97, 105, 75, -66, 80, 18, -10, -57, 72, -125, 76, 125, -97, 50, -120};
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
    msg.setTimeStamp(0.231718020457);
    msg.setSource(42356U);
    msg.setSourceEntity(84U);
    msg.setDestination(8950U);
    msg.setDestinationEntity(27U);
    msg.source.assign("LGCXSNRECLKO");
    const char tmp_msg_0[] = {-7, -98, 63, -21, -92, -106, 85, 10, 89, 96, 66, -88, 96, -28, 85, -87, -117, 64, -106, 15, 108, 34, -52, -58, 88, -47, -23, -5, -16, 1, 118, 2, -107, -81, -21, -8, -85, -10, 78, 91, -41, -28, 7, 94, 82, 36, -125, 100, 29, -76, 18, -32, -84, -60, -118, 105, -17, 55, 87, -1, 69, 62, 3, -5, 47, 124, 76, 92, 108, 39, -83, 72, -56, 6, -46, -97, -58, 106, 46};
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
    msg.setTimeStamp(0.557959286695);
    msg.setSource(57483U);
    msg.setSourceEntity(213U);
    msg.setDestination(58880U);
    msg.setDestinationEntity(119U);
    msg.source.assign("EFVZFUHUVPOLYIUMEHXVXMKUAUJKEAIHADODKZZNGWNWRVXSLBBWYURFIAAJRVSQWZXJEMENQTPACKZOIFPJBTJBNMJMGHTYZKZEGQUDPRPPLIQFJMMDCFILRSFGJESCYSABYDWXVMQKYTDLODZTHZSFLRXIMCYAHCTVHUZXPRDCBYKRNOXLVEPEQOQNLANBGWHWYMJFQKIBWGUBJBHGLOITXIWTPKDQ");
    const char tmp_msg_0[] = {102, -2, 62, -36, -81, 7, 65, 106, 49, 31, -75, 48, -105, -36, 82, 120, -50, -29, -47, -11, -126, 70, -21, 76, -38, 109, 5, 108, 120, -78, -71, 97, -10, -59, 11, -67, -2, -29, 57, -99, -120, -127, 30, 107, 93, 13, 60, -128, -119, 47, -19, -108, 97, 119, -1, -102, -72, -92, -78, -48, 34, -57, -20, 106, -37, 113, 27, -74, -23, -73, 51, 0, 79, 27, 115, 40, 94, -96, 121, 58, -64, 36, -49, -64, 95, -99, -7};
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
    msg.setTimeStamp(0.695887811044);
    msg.setSource(60515U);
    msg.setSourceEntity(202U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(165U);
    msg.source.assign("OKOXLUTPAPXEMYRHQFPBWWIWFSSTODLOLHAGYPHGFSNUDGMEVTRJPBBULHXGDVBEYHKMGDSPMOMECVKKIXBKFBIRVFSHJLOGSJQKEOCJQNHPZMKUZCWULAALLXJDJRGDJKZIZNFYGHUQVEQQMVARPCZBOWVNEORNFTNCSCIHWIYRWESSRIDXWDRWXTRLNMHNIOBFEMTYWDZAAZMJXYEZKVUYPFATGFUVCNQZANYXA");
    const char tmp_msg_0[] = {-54, -92, -91, -54, 55, 107, -81, -114, 59, -18, 110, -26, -124, -100, -24, -90, 10, 4, 80, -37, 39, 46, 47, -92, 74, 12, 58, 57, -26, -83, 65, 49, 27, -76, -96, -93, -100, -34, -94, 101, 3, -25, -34, -100, -80, 6, 115, -34, 52, 121, -121, -120, -55, -9, 36, 10, -110, -30, -4, 101, 84, -39, -6, -98, 11, 111, -12, -30, 26, -77, -100, -62, -9, 101, 101, -8, 3, -89, -128, -110, 40, -45, -51, -88, -11, -58, 123, -97, -80, -22, -53, 115, 48, 111, -6, -19, 70, -100, -37, -112, 38, -78, -29, 52, 50, -14, 68, -74, 93, 15, -103, -57, -83, 27, 76, 102, -88, 9, -42, -96, 105, 115, 67, -123, -13, 49, 57, -108, -90, 50, -39};
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
    msg.setTimeStamp(0.701402607827);
    msg.setSource(26819U);
    msg.setSourceEntity(135U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(195U);
    msg.seq = 1398131157U;
    msg.state = 68U;
    msg.error.assign("EAJYPEFEHWZMXUALNDVARXJGDYNBEIDIEFZGDKMJJRTPZWNIHCNSAWBTWYCDWGUXSHMXCISUOCITLDZFFQBVMAGBHFVCMDMOPGMNZTPKUXYJGZGTOFFMWWPBJFVNLXPCSOSBQXWLSMHQ");

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
    msg.setTimeStamp(0.770605923086);
    msg.setSource(3263U);
    msg.setSourceEntity(14U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(200U);
    msg.seq = 4275236964U;
    msg.state = 6U;
    msg.error.assign("QJNYDRRUKZMUHKIPLO");

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
    msg.setTimeStamp(0.102174414667);
    msg.setSource(29040U);
    msg.setSourceEntity(58U);
    msg.setDestination(38583U);
    msg.setDestinationEntity(213U);
    msg.seq = 3323134573U;
    msg.state = 84U;
    msg.error.assign("LIZWOGPYYMDMOJJRXNHTMLUKKJHXCQNSLSHIOAGQYLORVPHCUBUYPGMDMCGEYWFDO");

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
    msg.setTimeStamp(0.899088772321);
    msg.setSource(8577U);
    msg.setSourceEntity(74U);
    msg.setDestination(37361U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("RALZEOPRIMYZCNG");
    msg.text.assign("FORXEOYXLQSITUAKOMUKTGOXMHRBZIMYWOJXRBXOACBVLLXSRGRVFFRNZYLDQHMLA");

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
    msg.setTimeStamp(0.965519134965);
    msg.setSource(37134U);
    msg.setSourceEntity(192U);
    msg.setDestination(34690U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("HEORAWNMTZREXSSHUZGOWLVYIFYLPYHIUMEKONVECOPVCMMLJYSRKREVBFFTEXEUPZPBRAMKHZNLAXVADDPBFJXNNDBNZEXJYNGCCDIHHJEMQUBJHYXSYNJDXWCWQIQAIHOHTRLSGJZWFBXWVDZRAOODRFQFOQTRCIYMGLEAHIVOULCLLKAXIAGSMZUDVKC");
    msg.text.assign("JVHAKSIPTUKLKHNCQGSDCMIEOSJAEPRGQYTPFKXQYNAXGMLHNQLEAEFQXXNXZICBGYYEGWMVQZVCLJHOYUJZWMPWTZBVDAEWVQFTEQPITSVNGRUVZMTDBOIRNLDUGVOWCCNHOTEMLJWIOSMSPTYBAKKZCLIIOPWODBRBOARXQDJPTKSLYVIURGDEKGCGUATIRANBXHZFUZDSRRLNPVKEMW");

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
    msg.setTimeStamp(0.581077468436);
    msg.setSource(3023U);
    msg.setSourceEntity(79U);
    msg.setDestination(28701U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("IDLUHGJCRADMLCDKPODAIYIOKSCEFTTWMLYKZFWEOCFGGOKIBKARLUGBGHQLFRSRCXRQVSFMIAXZZTECHBUHAPLGIPRNYYSMPHWNWESBJMMIVADJXCYQGUDTQNYIRGXAEVPLZSJNVPSHXOKDPZXZVWSXNQINOVBOJXZAZEJOOXCFKVUFNJLKXRIHRFTQMUBPVUYMFSNJEJPDUGNTJZBQCFAVCLVBQWHWPBWQZLYDMEYMUTEYNEHQG");
    msg.text.assign("QPNRFNOEWWVKXHHFJSSEJBMXWTYBYVQBCMTUNPLXZODZLOTKIRISCTYLBUQUODORFIPCHTEXPSEJETBCYSNMOPQEMXIAESNYMKVLJUPKRKLDFGQABQREMDHCXCIZKJTKXNFOIEGJRGVBOHVC");

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
    msg.setTimeStamp(0.743374078717);
    msg.setSource(35194U);
    msg.setSourceEntity(35U);
    msg.setDestination(47328U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("ZNUESXMKFRETJPCVEZKLCPWFUHIKYCXABFIEUNGLNOXCVOJMF");
    msg.htime = 0.275312574713;
    msg.lat = 0.835849613195;
    msg.lon = 0.764723031403;
    const char tmp_msg_0[] = {-95, 95, 36, 103, -30, -83, -28, -32, -23, -9, 101, -88, 119, -82, -103, -22, -85, 108, -99, 13, -107, -7, 66, 9, -68, 121, 104, -122, -33, 37, -16, 57, -38, 11, -38, -119, -128, 38, 48, 63, 53, -96, 103, 14, -36, 60, 93, -79, 122, -21, 37, 42, -78, -128, -1, 115, 17, -57, 116, 4, 125, -38, -17, 94, 15, 66, -8, 60, 121, 107, -46, -103, -102, -116, -81, -4, 52, 126, -4};
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
    msg.setTimeStamp(0.928874489892);
    msg.setSource(7204U);
    msg.setSourceEntity(111U);
    msg.setDestination(26192U);
    msg.setDestinationEntity(39U);
    msg.origin.assign("PJCERFKAWGIOJZWQUNPRSITLRHTTND");
    msg.htime = 0.083732673609;
    msg.lat = 0.55339795627;
    msg.lon = 0.461346529934;
    const char tmp_msg_0[] = {60, -99, 39, -18, 31, -76, -99, 5, 73, -31, -33, -91, -9, 16, -60, -75, 8, -111, 102, -37, 74, -69, 74, -124, -42, -126, -103, 5, -92, 50, -123, -12, -123, 74, 4, -48, -51, -80, -15, -73, 60, -100, 109, 14, 114, -27, -112, -54, -104, 71, 102, -68, -101, -41, 91, -29, -47, -5, 29, -49, 101, 85, -91, 122, -4, 15, -93, 58, -111, -31, 26, 63, -101, 108, 35, -26, 102, 94, 3, 85, 31, -17, -59, -50, -93, -63, -74, -10, 65, 62, 94, -72, -86, -26, -84, 27, 75, 47, 37, 50, -22, 64, 76, -84, -111, -60, -62, 87, -115, 84, 107, -18, 78, -3, 81, -79, 42, 65, 109, 28, -27, -40, -31, -115, -119, -113, 43, -122, -118, 43, -30, 64, -91, 98, 2, -16, -101, -1, -125, 46, -54, -94, 124, 7, -76, -69, 56, -83, 73, -7, -76, 50, -15, -60, -4, 98, 78, -17, 2, 17, 44, 50, 49, -7, 7, -3, -87, -65, 52, 118, -120, 23, 126, 107, -110, 102, -67, 105, 124, 88, -26, 99, 49, -109, 10, -35, 31, 45, -46, -120, -56, 78, -113, -127, -101, 114, -69, -13, 85, 126, 120, -91, -37, -24, -125, 112, -87, -42, -52, -108, -113, 69, -70, 89, -32, -88, -36, 96, 125, 14, 54, 88, 15, 12, 108, 44, 110, 22, -5};
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
    msg.setTimeStamp(0.654949723338);
    msg.setSource(6425U);
    msg.setSourceEntity(145U);
    msg.setDestination(57470U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("WOPNSNJZTGHUOFDCQKUAOYVXMEWDBJIMQZBDTFASRASGRVZAXYLUXHXDRQYMKYACLKCNLFBUVWSGWNJFAVEZMCULNPPTUEZNUBHKPGHEOOWGCUKCVMZXVMAXWSWGTCTGQNWQLMGNIXYBSTRXIYLRHJRFXTIHOPJEVE");
    msg.htime = 0.509058345205;
    msg.lat = 0.26261009268;
    msg.lon = 0.777917577186;
    const char tmp_msg_0[] = {-64, -47, -20, 17, -81, -123, 11, 19, 118, 94, 33, 9, -4, -61, -16, 107, 26, -126, 79, -61, 103, -123, -111, -61, -84, -36, -47, -33, 52, -94, -101, -41, 110, -54, -6, -4, 70, 123, 123, 52, -6, 115, -46, 76, 94, -18, -116, 50, 31, 116, -65, -72, 49, 21, 67, 119, -59, 16, -125, 99, -23, 8, 114, 57, 73, -118, 11, -115, -45, 48, 92, 9, 123, 111, 76, -115, 7, -9, 85, -18, 54, 8, 31, -99, 118, -22, -57, 113, -118, -106, 4, -35, 5, 90, -89, -119, -45, 34, -119, -30, -50, -13, -121, -51, 118, -15, -48, -43, -22, 123, 26, -30, 102, -44, 64, 66, 126, -96, -58, 121, -49, 74, 49, -112, 60, -64, -84, 125, 27, -104, -86, 77, 37, -20, 47, 58, -75, -91, -30, -56, -56, -99, 118, -108, -65};
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
    msg.setTimeStamp(0.55099556178);
    msg.setSource(32319U);
    msg.setSourceEntity(40U);
    msg.setDestination(65048U);
    msg.setDestinationEntity(128U);
    msg.req_id = 28348U;
    msg.ttl = 40710U;
    msg.destination.assign("RZGQQVBZOYRRDKOMTWKSQTRNESKMICHJFPRLBNTQUISTGAOHJWHYCBYGVHFBSPUFMCVAGOAJUXVIPBILBJRPYFDTFNRISXDIJXIDUGYNPNPZHURTGKTSAQAKYTXOQEAPNLOCZGIDLWREMENVEUGHXDLYIVBFNMVAKSXDMUDEVMMJESWMKQYUGNQCWJOCXZZLOXJYBKTKFWZQTEEWLZNQHCIWARAFLCKFPUWOASGVCWFLEDJX");
    const char tmp_msg_0[] = {-31, 65, 31, -42, -39, 122, 73, -18, 19, 28, -53, 39, 63, -69, 35, 1, -24, -49, 26, -60, 69, 116, 58, -86, -83, -37, 105, 28, 88, 55, 18, 111, -53, -124, -72, 116, -76, 110, 30, 119, -66, 115, -45, -46, -11, -15, -111, 121, 48, 31, -37, -93, 86, 64, -36, -84, -9, 41, -16, -122, 10, 49, 26, -105, 69, -48, -72, 74, -66, -74, -52, 21, -1, -56, -9, 107, 119, 43, -69, -27, 80, 96, 79, 31, 114, -70, -12, -124, 72, -12, -119, -51, -61, -11, 25, 90, 58, 23, 30, 38, -85, -63, 28, 72, -89, 92, -15, 39, 104, 39, 46, 105, -123, -72, -105, -83, 33, -9, -51, -68, -37, 113, -36, 110, -107, 25, 71, 119, 67, 124, -7, -89, -100, 121, 38, 92, 96, -49, 40, 50, -97, -20, 62, 92, -61, -64, 124, -84, -4, -63, -22, 63, -103, 114, 13, 125, -40, 70, -3, 14, -49, -5, 63, 103, -82, 115, -60, -37, 109, 82, 81, -128, 22, -36, 16, -105, -30, -34, -57, -116, -81, 24, 57, -10, -99, -57, -69, 94, 118};
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
    msg.setTimeStamp(0.946301844302);
    msg.setSource(46827U);
    msg.setSourceEntity(102U);
    msg.setDestination(33184U);
    msg.setDestinationEntity(30U);
    msg.req_id = 49665U;
    msg.ttl = 24362U;
    msg.destination.assign("HPQPSLLUESHLOWODPZZFRSQFLQOJDGMEQGXJARRXKSVISVUKGJMYARYFVHHIPEJYZKUVWOJRFNCCPNYZGREVTCODXMLBGUTQAFFTWTCXKSQXZTXVBDNAOLFIYMSNMGZEZTEUEZVUORFLNVUWTJWSEGINUAPMVAMPCXDAJIWPIKPXCUGIHBWRITGMNKNGRHAUHDQOECODKQKJQJBDSDEZWWOXBBLIWFMJBCKB");
    const char tmp_msg_0[] = {-8, -33, -88, -110, 37, 83, 20, -89, -55, -54, -114, 72, -113, 124, -127, 37, -75, 77, -67, 13, -30, -16, -90, -14, 69, -8, 63, 89, -96, -46, -68, 2, -79, -47, -23, -126, -107, 113, -41, -93, 88, 10, -94, -68, -111, -94, 83, 104, -57, 49, 102, -85, 62, -19, 10, -53, -22, -95, 2, 125, 123, 55, -47, -105, -25, -86, -63, 110, -15, -110, 33, 90, 14, -95, 33, 64, 26, -35, 67, -14, -126, 58, -108, -84, 95, 103, -13, 39, 119, 67, 43, -6, -46, 117, 89, -64, 55, -62, 51, 9, 47, -9, -55, 71, 9, -13, -82, -4, 8, -36, -18, 97, -97, -53, -25, -41, 2, 26, -54, 124, -54, -30, 62, -57, 104, -86, -83, 4, 63, 81, -61, -88, 46, 45, -125, -8, 69, -113, 63, 111, 50, 126, -28, 79, 120, -3, 99, -113, -20, 49, -21, 75, -82, -93, 19, 74, 71, -57, 57, 89, -94, 73, 106, 67, 7, -114, -19, 8, -54, 48, -56, -17, 16, 70, 51, -109, 7, -99, -124, -86, 65, -93, 62, 87, -103, -23, 104, -3, 110, 42, -85, 43, 120, 99, -38, -107, 56, 122, 62, -100, -69, -125, 123, -3, -103, 22, -65, 78, -18, 29, -9, -113, -80, -82, 38, 94, 107, 101, 115, 44, 19, 66, 31, 91, -113, -127, -65, 68, 40, -122, -65, -128, 64, -10, 11, -108, 39, -91, -97, -11, -9, -113, 90, -36, -120, 62, -9, 71, 31, -86, -117, -1, -108, 58};
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
    msg.setTimeStamp(0.84949282979);
    msg.setSource(7609U);
    msg.setSourceEntity(137U);
    msg.setDestination(14613U);
    msg.setDestinationEntity(40U);
    msg.req_id = 60656U;
    msg.ttl = 23654U;
    msg.destination.assign("KYFPVQXONSZPOCOQLGYAHYYAWMOECPUUQANMWJWMRPSIFWOOHGZVZUJISSGXXBIAXQNHCMZOGKRBNEPKOFWDJGMKUKZOHFVIYLLNSQSHFLXLFUZDBSYBJMUECDTPTENEVGVFWATTCAXTPJDRCNIYHYNRZOASLEVDFHMARCGTUIFK");
    const char tmp_msg_0[] = {-45, -35, 32, 126, 30, -17, 24, -77, 7, -32, -128, -89, 104, -28, -23, 35, 8, -60, 27, -12, -53, -44, -38, -40, 0, 13, 85, 71, 101, -96, -10, -37, 63, -116, 49, -20, -34, 102, -123, -64, -18, -35, -39, -65, 118, 38, 6, -108, -95, 39, 56, -120, -1, -112, 9, -95, 30, -3, 35, 52, 88, 49, -124, -128, 94, 58, -63, 88, 15, -26, 62, -89, -98, -67, -24, -127, 8, 112, 6, 50, 23, 82, 99, 15, -52, 57, 79, 116, 113, 125, 18, 18, -102, -83, -111, 58, 84, 100, -105, 35, 115, 17, -11, 118, 39, 50, 3, -110, -79, -41, 59, 125, 100, -84, 18, 85, 60, -109, 9, 3, 7, -42, 79, -84, 54, -111, -42, 102, -115, 65, -62, -89, -34, 55, -1, -83, 82, 68, -24, -126};
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
    msg.setTimeStamp(0.53854130333);
    msg.setSource(23986U);
    msg.setSourceEntity(135U);
    msg.setDestination(59144U);
    msg.setDestinationEntity(236U);
    msg.req_id = 46655U;
    msg.status = 44U;
    msg.text.assign("OJFQDQDGPIZKSRISVTGWVNZYOAZKBJGLHUTNDFCAWFWEAUCRMUUZKMRPBLXRYCQXWSAPFUJXESBKYJ");

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
    msg.setTimeStamp(0.190740572939);
    msg.setSource(36263U);
    msg.setSourceEntity(195U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(67U);
    msg.req_id = 48770U;
    msg.status = 28U;
    msg.text.assign("GGZDDYKYXFGMUUYEBFVBPSXNBFKSKCWBXTYNROKCMNTA");

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
    msg.setTimeStamp(0.428331391736);
    msg.setSource(8946U);
    msg.setSourceEntity(238U);
    msg.setDestination(27284U);
    msg.setDestinationEntity(29U);
    msg.req_id = 34336U;
    msg.status = 78U;
    msg.text.assign("LPOJQOFETESJLBTWNGXDOOUFXZQUDTTSSNYXMUQCQYPVAYARPUILCLJCRQSYZHPFMFWJGKRONSCINNSEGUGKDSIRKZZBPYQEGNVZMQKAFUCBJYZWHEPBPBGOQTHWBGIVAVUWJRCEVDOHMYXLJIZRTIXWAXFLTHBKUFNCBWZJIVOIYLXMYLQPKZNHCYITEDJXKGRKPBLDEFAMBGWRAMACPW");

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
    msg.setTimeStamp(0.434892793501);
    msg.setSource(60062U);
    msg.setSourceEntity(215U);
    msg.setDestination(62311U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("QQTSVIZPAICXPGJQTANYFJENRJDHBTGMOSIAMVCBORIEGKYOLPACYOSLSUVIGCRCCZDXVHMBTSEWUTJQXCPDEYGXQBIVVNDYPNEGVTLEDRZXJASWLHEEJTPZXFJYF");
    msg.links = 2910210631U;

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
    msg.setTimeStamp(0.623614206154);
    msg.setSource(19843U);
    msg.setSourceEntity(219U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("ITTBDBLMYEAKONEKNWPSKJIRAQDDOLPHRHVCIGKRLSMNBDZFHUXNSXWIBWSBXAEWQBHFJLXETMDHHQWLOAIRMKLTDMAWHMIECVPUEGZQXVANVWHYMTAO");
    msg.links = 4109704743U;

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
    msg.setTimeStamp(0.598650477069);
    msg.setSource(22502U);
    msg.setSourceEntity(161U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("YHYNEFPVZGCQINEMKANJC");
    msg.links = 877554991U;

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
    msg.setTimeStamp(0.407653754157);
    msg.setSource(8845U);
    msg.setSourceEntity(44U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("IHLUNYYOMLRDBPJOYNSTGPGWFMRNDHOVIQYHLSOQBFUKBICAYSVLSTARDEGAQYMLPRQPKDAXTHYEJEPUEAANSDGLTRRUEGVZZPEAOINUSOYBXWCFOVLQKRGIFRVTXSHNDDKTJQFZGWMJZFFXAWKVB");
    msg.action = 69U;
    msg.grouplist.assign("EUGXFWSLNXZHFEIQGSZCZRGIILIIULCPZDVAOSKHRMBCVANYYOQRNGBHTJMKHGTFJZPNGQZPIWGZOJFJLMGXCWLNHAOHCGEWOLAVXBYWWJSEJMKRYUMJVTWUCXNYMIOTUFQLVOWPWCATYRYJOSFPQDQDAQTJZMPRSPYENOENFRXKGSNOUHVLMVCQUYHRKCBMZBTBBIXBTVSMAPSINYADWKKEIDAAPFSZXEUTQDKEUXRVUJXVDEBF");

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
    msg.setTimeStamp(0.555476582182);
    msg.setSource(27764U);
    msg.setSourceEntity(130U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(254U);
    msg.groupname.assign("AMZWNYLQYJISJXTQIWRPHVBBLCTAUJYUFCDLNVRAOLMNGVIFCZDBHSAVWIKFQAZHSMGGWEHIPCDPEOYHNTEFWCVBTTWPQNZXDCMTFZAXLORBJDKFXKBROKFZNDSJPYNVHFOSKIXEUAZUOIROCGGNPYZISKXILEXPKUVD");
    msg.action = 183U;
    msg.grouplist.assign("RWXKJJBLRUXFNIQWVHZDWJCJNEWKLCTMLVVKQQJDXXSPZKIGFLYBGUKCOMJJXYSHDPYECOGLKYAPGYVSRVGJFDGMLHGNUIVNGTBJGBYBUSDMBZOAFAHJBELALWCTZIYFQRDLZAZPBWQONQPFMZYKXNFE");

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
    msg.setTimeStamp(0.021545513444);
    msg.setSource(39377U);
    msg.setSourceEntity(151U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(174U);
    msg.groupname.assign("SVHZQXSTEJPYAJGSRZCGMQVTIACPKDDOYWHWVRNNQYMYKXRFBTTJLXYZGPSIGXMNGAODFYDJRLKIFRGDQRFDJZLZVXRWKBXBMPOGABCYQEWWOLIPBYPVKQUILVSRCEQQUFUESHHDBODXEOWCWTOOCAWTZNMUEEIXTXNBUWAQBUEHMTJFWKZKHYUVDHNUCE");
    msg.action = 34U;
    msg.grouplist.assign("OUAQYRKVACRBQNIKLDUNXVVRROEELIAUOPOGKRATBSKWQHSSUCDENNWWXZJIYCOZLWOXDFLMYRTGPBJABZVJUCHMKMQUMKJPZLKYYTAOGQSJZVBPALFTVPHZQATPPGVFRYWDFREDSUABZCJNGFWKKTMILXERJEGMXCDGWTTDNGUBXDEEAHXFPIOGMHSCVOSHJLBXUQXSZOIYHJDLIIFUCQCBTNWTLNNCYIGHFVF");

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
    msg.setTimeStamp(0.584466950913);
    msg.setSource(28786U);
    msg.setSourceEntity(233U);
    msg.setDestination(51800U);
    msg.setDestinationEntity(115U);
    msg.id = 199U;
    msg.range = 0.385472570532;

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
    msg.setTimeStamp(0.400492714509);
    msg.setSource(19748U);
    msg.setSourceEntity(90U);
    msg.setDestination(40521U);
    msg.setDestinationEntity(48U);
    msg.id = 182U;
    msg.range = 0.612535761682;

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
    msg.setTimeStamp(0.761411308848);
    msg.setSource(5590U);
    msg.setSourceEntity(10U);
    msg.setDestination(2709U);
    msg.setDestinationEntity(81U);
    msg.id = 96U;
    msg.range = 0.45889593251;

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
    msg.setTimeStamp(0.41911951405);
    msg.setSource(13184U);
    msg.setSourceEntity(225U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(61U);
    msg.tx = 152U;
    msg.channel = 89U;
    msg.timer = 56435U;

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
    msg.setTimeStamp(0.000576699966629);
    msg.setSource(63322U);
    msg.setSourceEntity(252U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(122U);
    msg.tx = 149U;
    msg.channel = 174U;
    msg.timer = 35468U;

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
    msg.setTimeStamp(0.0366070417249);
    msg.setSource(21552U);
    msg.setSourceEntity(8U);
    msg.setDestination(4383U);
    msg.setDestinationEntity(138U);
    msg.tx = 95U;
    msg.channel = 96U;
    msg.timer = 38415U;

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
    msg.setTimeStamp(0.582505099331);
    msg.setSource(44148U);
    msg.setSourceEntity(143U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("JJUBOYZDWTXQZWYREXKDNJXPVWTISPBFJRDJFHFAUWSCSBIGRUYZUUGFKTIEESZRLMSNDVWDBEJNWEVQAMPJAOCPMTAIDSORMYALVBONEYCSLRKDLKFUGISWOIVCKGLJOOBQFMFQOVEZADVJIYXBPHXHATGM");
    msg.lat = 0.702661678552;
    msg.lon = 0.814280348826;
    msg.depth = 0.615260319251;
    msg.query_channel = 134U;
    msg.reply_channel = 75U;
    msg.transponder_delay = 163U;

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
    msg.setTimeStamp(0.794244363953);
    msg.setSource(16333U);
    msg.setSourceEntity(52U);
    msg.setDestination(35469U);
    msg.setDestinationEntity(63U);
    msg.beacon.assign("LYBAAEBTVCFYEOUUXTIRBZXFHRSIXCHKQEUERYGXBUWLVDEPYEMVXZMTKVIMTJCPGNQKJUFWCCBRAQHHHXZKE");
    msg.lat = 0.496766913728;
    msg.lon = 0.654962083582;
    msg.depth = 0.804040000142;
    msg.query_channel = 168U;
    msg.reply_channel = 81U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.575181674811);
    msg.setSource(38958U);
    msg.setSourceEntity(161U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(27U);
    msg.beacon.assign("ZJWEDYLOUQKZFMXEEIIHIGNWWAPPGSKWQALKRSUSDFWZLSLDRFGUMHBOGXOWDCJZOTJYNARJIWDHNGOQSMDOLYZPMKFMJZUIKVXPFXVGSAQRZHFFRWVNKEQNRRHCVAQAQYCKLRUGRXIZVXTMBVTQAUGTWMTEZOYKHRDZO");
    msg.lat = 0.605191005856;
    msg.lon = 0.506036607099;
    msg.depth = 0.501394321625;
    msg.query_channel = 68U;
    msg.reply_channel = 245U;
    msg.transponder_delay = 29U;

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
    msg.setTimeStamp(0.398081646624);
    msg.setSource(52727U);
    msg.setSourceEntity(109U);
    msg.setDestination(33304U);
    msg.setDestinationEntity(237U);
    msg.op = 82U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MGREXSWBAJMJGXKILUCLYZBXOYISKXHSGCBPPJBWQDDOMCVUJRRLMPTPCDDGSZFNTJBPXFYUYYLKSDRIWIWNHXQQEEVZLSZJONVFUEPZIJNABBMVZNUZQPSTLKDHXKREUZOJRQNVLMIRERGGOT");
    tmp_msg_0.lat = 0.86296924369;
    tmp_msg_0.lon = 0.105801633175;
    tmp_msg_0.depth = 0.100735684227;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 50U;
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
    msg.setTimeStamp(0.747406436821);
    msg.setSource(10380U);
    msg.setSourceEntity(119U);
    msg.setDestination(26736U);
    msg.setDestinationEntity(167U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.851290318483);
    msg.setSource(63170U);
    msg.setSourceEntity(189U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(59U);
    msg.op = 71U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WKZGBFUSMKPXRMAWYJTDAMHPHYQUEKHXPWSYMGUNJPISDTHLVZDOXKBFQBVKHJLQPFLCCEWYJDBTZJEYYCETGTREPRYSNLGIDNZKBDNOZRZTUHPWLFBHCQSGWDGBIUEJFCJNDSODIUVBFMWQFXVXEXMEVTRNTNMOXKGG");
    tmp_msg_0.lat = 0.157254073494;
    tmp_msg_0.lon = 0.237488368373;
    tmp_msg_0.depth = 0.00111285971767;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 83U;
    tmp_msg_0.transponder_delay = 169U;
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
    msg.setTimeStamp(0.743051161644);
    msg.setSource(63441U);
    msg.setSourceEntity(107U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(126U);
    msg.address = 205U;

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
    msg.setTimeStamp(0.317453184412);
    msg.setSource(12920U);
    msg.setSourceEntity(192U);
    msg.setDestination(1001U);
    msg.setDestinationEntity(172U);
    msg.address = 12U;

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
    msg.setTimeStamp(0.595371485375);
    msg.setSource(24918U);
    msg.setSourceEntity(132U);
    msg.setDestination(2818U);
    msg.setDestinationEntity(97U);
    msg.address = 110U;

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
    msg.setTimeStamp(0.0429803618009);
    msg.setSource(23757U);
    msg.setSourceEntity(38U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(107U);
    msg.address = 181U;
    msg.status = 207U;
    msg.range = 0.763919287051;

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
    msg.setTimeStamp(0.0603088350668);
    msg.setSource(1583U);
    msg.setSourceEntity(7U);
    msg.setDestination(32482U);
    msg.setDestinationEntity(158U);
    msg.address = 199U;
    msg.status = 101U;
    msg.range = 0.106088498948;

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
    msg.setTimeStamp(0.496477202296);
    msg.setSource(29977U);
    msg.setSourceEntity(2U);
    msg.setDestination(25064U);
    msg.setDestinationEntity(62U);
    msg.address = 183U;
    msg.status = 79U;
    msg.range = 0.338829201512;

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
    msg.setTimeStamp(0.959917488392);
    msg.setSource(37745U);
    msg.setSourceEntity(138U);
    msg.setDestination(20200U);
    msg.setDestinationEntity(44U);
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 14U;
    tmp_msg_0.entities.assign("LRHDEUAQOYGGMAZCGCHCRHIRUZXNCSWTPBPVGPMEYQWZUOQFHGSDQZWJKTWKNMXNFAVFPVPKMJIIOYRKRNRXGXZWCTLIGYBYGHOIESQNONDRVFL");
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
    msg.setTimeStamp(0.0127205021986);
    msg.setSource(46065U);
    msg.setSourceEntity(33U);
    msg.setDestination(2494U);
    msg.setDestinationEntity(244U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.688853032472;
    tmp_msg_0.reason = 247U;
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
    msg.setTimeStamp(0.440096579818);
    msg.setSource(12357U);
    msg.setSourceEntity(104U);
    msg.setDestination(36015U);
    msg.setDestinationEntity(43U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("IUNLHNDUTSHWBGSXYUZBVYCNEDRJPEOQFFPMUAJJUWKDVZFXMXTIIZQZWCYFCVBQHNAMFNGOPRPKIEMQSEOGMDVOHUGORENNHGPRSFMKZTGIAOSIEHJALPLSHVTTKQWLKDZTJ");
    tmp_msg_0.reference_frame = 71U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 41683U;
    tmp_tmp_msg_0_0.off_x = 0.657094705756;
    tmp_tmp_msg_0_0.off_y = 0.604143229064;
    tmp_tmp_msg_0_0.off_z = 0.0300685785037;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PZUMTZCMQTDJYGCEXEGZINCOALMPPQQXOYSUSPPWZDWJUFOMYGEQCYRPDNVEIVGNWZIKYPDDJBFZRGHTTHFIAWENTIGXVSGDSARNDVMRYYULJPCUHXTUJXASLBPSKXTKTJOGWYIVPHAECOILQBFHZIGDHBSFBQBJOIRVQNKRBBTJCMFKEYBXVUUCOLWWE");
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
    msg.setTimeStamp(0.290571915542);
    msg.setSource(27841U);
    msg.setSourceEntity(170U);
    msg.setDestination(28176U);
    msg.setDestinationEntity(195U);
    msg.enable = 103U;

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
    msg.setTimeStamp(0.885182477675);
    msg.setSource(63772U);
    msg.setSourceEntity(62U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(75U);
    msg.enable = 112U;

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
    msg.setTimeStamp(0.656189794647);
    msg.setSource(19630U);
    msg.setSourceEntity(211U);
    msg.setDestination(54792U);
    msg.setDestinationEntity(18U);
    msg.enable = 225U;

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
    msg.setTimeStamp(0.238017536743);
    msg.setSource(25476U);
    msg.setSourceEntity(73U);
    msg.setDestination(40686U);
    msg.setDestinationEntity(59U);
    msg.summary = 45U;
    msg.level = 15U;

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
    msg.setTimeStamp(0.523370790922);
    msg.setSource(57624U);
    msg.setSourceEntity(252U);
    msg.setDestination(40981U);
    msg.setDestinationEntity(9U);
    msg.summary = 43U;
    msg.level = 185U;

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
    msg.setTimeStamp(0.447110701454);
    msg.setSource(17528U);
    msg.setSourceEntity(89U);
    msg.setDestination(35374U);
    msg.setDestinationEntity(62U);
    msg.summary = 54U;
    msg.level = 243U;

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
    msg.setTimeStamp(0.0121212451333);
    msg.setSource(58418U);
    msg.setSourceEntity(33U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.45237048017);
    msg.setSource(20138U);
    msg.setSourceEntity(239U);
    msg.setDestination(26923U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.965898514644);
    msg.setSource(41343U);
    msg.setSourceEntity(6U);
    msg.setDestination(14656U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.951260653762);
    msg.setSource(20616U);
    msg.setSourceEntity(177U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.483876110723);
    msg.setSource(60831U);
    msg.setSourceEntity(41U);
    msg.setDestination(24517U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.0994566979793);
    msg.setSource(18438U);
    msg.setSourceEntity(147U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.342292092653);
    msg.setSource(57094U);
    msg.setSourceEntity(153U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(206U);
    msg.op = 169U;
    msg.system.assign("GZPXNNIRUFCTCDMXSWHXKMJTIUNDWKOHEHDZZFZJECOLOKASHGLWTFKPUGVSTRKIUDQPGVGDNBQQPEZRRMHBVQSQXHTMBCGHFXOKVJNEPIYVWKLCMTTNLEDWLYDOYTRYWPBOLBUOMVJBLAXYHJSUEOLQKXRLJR");
    msg.range = 0.339719659819;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 89U;
    tmp_msg_0.name.assign("NRNUQCFSDZPMKQGBNSTHAYKWWEBGRSMCVWCVOWVMKYDLNXJLCKTKTZWCNCSSJBIAELAGMMWFKMZJEQLNTYDYHCXXUMUEJDOTVGNRVYXFEDJEAIIDHOUOIORHFKDWPHXBUHLPYGZSNFJSSOIXTFYJHDBDUSFZXVQZQGRICMRMLCBRORKMVOANWZAJHDBOPUHEZBGYOGACLQEPRPTXGYIBUFIVJGSAYLVUQXUQNFLJXZPQTWERPAFELIQKV");
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
    msg.setTimeStamp(0.597621599684);
    msg.setSource(44086U);
    msg.setSourceEntity(177U);
    msg.setDestination(55776U);
    msg.setDestinationEntity(124U);
    msg.op = 211U;
    msg.system.assign("CENEHHENOTVZKKKKOYUUVIYYJEXQGTAIDQCNVJUMPSTISPERUVBCPJLPMZNPRXTSWLXMLYFVAHWOYTXLZUZRNCIGNDDUMRCQXGEZTPJQRAIHFYFAINGHPT");
    msg.range = 0.552235676766;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.653651654933);
    msg.setSource(42666U);
    msg.setSourceEntity(90U);
    msg.setDestination(46714U);
    msg.setDestinationEntity(68U);
    msg.op = 200U;
    msg.system.assign("CBYEFVGMXGTYHIXNNJOVPIOQSQNTOFIQNRMEWORXDJLCLUSWOSYVSRLHNTJGXNMZXEGTHPWNSAARZDTMFKULEYGJUYTBPUXFDVPVUHHUAVRUNGQFNBBJXZGUDWZMOISCMKMWPKWJCDIEIKHDPSAZBRMWDHQHVELCYDDCLYPIIJHMKTATEGZGCFXXBMSKRKLUXK");
    msg.range = 0.787950955059;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 214U;
    tmp_msg_0.flags = 0U;
    tmp_msg_0.description.assign("PBZPEAFNSEBPKYSVGTIUQBBIHCPXVFZNBRQYDGYAXQNU");
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
    msg.setTimeStamp(0.392198592742);
    msg.setSource(35229U);
    msg.setSourceEntity(240U);
    msg.setDestination(54915U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0147603801148);
    msg.setSource(12306U);
    msg.setSourceEntity(71U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.243871622159);
    msg.setSource(3377U);
    msg.setSourceEntity(185U);
    msg.setDestination(37643U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.0305259396114);
    msg.setSource(32558U);
    msg.setSourceEntity(197U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(15U);
    msg.list.assign("BIEYYXWLODETQZYBYLPUSDZVTHHWLNDOKJSQDJBKDVCUUMXSNMVFTMUVBHJSWKLMFGOUYAVIWCUCNQWQYYPWWSZYKTRTHJZOG");

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
    msg.setTimeStamp(0.256120689947);
    msg.setSource(57043U);
    msg.setSourceEntity(167U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(192U);
    msg.list.assign("TBODNHJAKDXRAGVBGXMIBFUOPQIFKRJTTDWJVXUWSUSYFOUYTFAKNTLAGGL");

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
    msg.setTimeStamp(0.835986172673);
    msg.setSource(41035U);
    msg.setSourceEntity(13U);
    msg.setDestination(10751U);
    msg.setDestinationEntity(120U);
    msg.list.assign("VOQTNEKZRLCUKXQEMDXV");

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
    msg.setTimeStamp(0.711192429084);
    msg.setSource(22618U);
    msg.setSourceEntity(175U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(157U);
    msg.value = -13370;

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
    msg.setTimeStamp(0.177453858959);
    msg.setSource(19523U);
    msg.setSourceEntity(238U);
    msg.setDestination(38110U);
    msg.setDestinationEntity(211U);
    msg.value = 25236;

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
    msg.setTimeStamp(0.358127750484);
    msg.setSource(2606U);
    msg.setSourceEntity(8U);
    msg.setDestination(21669U);
    msg.setDestinationEntity(24U);
    msg.value = -30571;

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
    msg.setTimeStamp(0.643612207264);
    msg.setSource(23496U);
    msg.setSourceEntity(236U);
    msg.setDestination(29044U);
    msg.setDestinationEntity(253U);
    msg.value = 0.108862191198;

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
    msg.setTimeStamp(0.505286806032);
    msg.setSource(14773U);
    msg.setSourceEntity(27U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(85U);
    msg.value = 0.0563566446129;

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
    msg.setTimeStamp(0.572305327414);
    msg.setSource(47065U);
    msg.setSourceEntity(13U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(193U);
    msg.value = 0.0401037266227;

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
    msg.setTimeStamp(0.217909846458);
    msg.setSource(62686U);
    msg.setSourceEntity(104U);
    msg.setDestination(43513U);
    msg.setDestinationEntity(123U);
    msg.value = 0.877832208756;

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
    msg.setTimeStamp(0.900801434128);
    msg.setSource(3581U);
    msg.setSourceEntity(45U);
    msg.setDestination(21450U);
    msg.setDestinationEntity(240U);
    msg.value = 0.178041343285;

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
    msg.setTimeStamp(0.602860021004);
    msg.setSource(54252U);
    msg.setSourceEntity(134U);
    msg.setDestination(4088U);
    msg.setDestinationEntity(64U);
    msg.value = 0.874503724359;

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
    msg.setTimeStamp(0.236920945617);
    msg.setSource(58251U);
    msg.setSourceEntity(73U);
    msg.setDestination(9476U);
    msg.setDestinationEntity(178U);
    msg.validity = 40670U;
    msg.type = 9U;
    msg.utc_year = 39287U;
    msg.utc_month = 78U;
    msg.utc_day = 113U;
    msg.utc_time = 0.132242830801;
    msg.lat = 0.908178168287;
    msg.lon = 0.370904653495;
    msg.height = 0.491563886886;
    msg.satellites = 251U;
    msg.cog = 0.525533450222;
    msg.sog = 0.565585798066;
    msg.hdop = 0.140398670845;
    msg.vdop = 0.23650528162;
    msg.hacc = 0.73977643608;
    msg.vacc = 0.138962497116;

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
    msg.setTimeStamp(0.267194634726);
    msg.setSource(62375U);
    msg.setSourceEntity(55U);
    msg.setDestination(44075U);
    msg.setDestinationEntity(223U);
    msg.validity = 63255U;
    msg.type = 204U;
    msg.utc_year = 37005U;
    msg.utc_month = 147U;
    msg.utc_day = 32U;
    msg.utc_time = 0.701835855132;
    msg.lat = 0.918001375352;
    msg.lon = 0.281872965024;
    msg.height = 0.422736400762;
    msg.satellites = 42U;
    msg.cog = 0.719533648986;
    msg.sog = 0.653418182536;
    msg.hdop = 0.858863800646;
    msg.vdop = 0.681078026398;
    msg.hacc = 0.187597442484;
    msg.vacc = 0.113906200764;

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
    msg.setTimeStamp(0.668823284194);
    msg.setSource(59541U);
    msg.setSourceEntity(19U);
    msg.setDestination(15028U);
    msg.setDestinationEntity(107U);
    msg.validity = 2705U;
    msg.type = 244U;
    msg.utc_year = 12708U;
    msg.utc_month = 22U;
    msg.utc_day = 130U;
    msg.utc_time = 0.674179521133;
    msg.lat = 0.750167145297;
    msg.lon = 0.876559657346;
    msg.height = 0.0183143318752;
    msg.satellites = 19U;
    msg.cog = 0.285868365166;
    msg.sog = 0.462822177006;
    msg.hdop = 0.955359075667;
    msg.vdop = 0.494416128306;
    msg.hacc = 0.421537729469;
    msg.vacc = 0.0694165255964;

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
    msg.setTimeStamp(0.399333640086);
    msg.setSource(28637U);
    msg.setSourceEntity(7U);
    msg.setDestination(61978U);
    msg.setDestinationEntity(205U);
    msg.time = 0.0564561847806;
    msg.phi = 0.0618311549346;
    msg.theta = 0.75040742903;
    msg.psi = 0.985659634922;
    msg.psi_magnetic = 0.284627839513;

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
    msg.setTimeStamp(0.246775934931);
    msg.setSource(34117U);
    msg.setSourceEntity(79U);
    msg.setDestination(18690U);
    msg.setDestinationEntity(151U);
    msg.time = 0.693110192431;
    msg.phi = 0.451248761222;
    msg.theta = 0.0738557764439;
    msg.psi = 0.802716247051;
    msg.psi_magnetic = 0.952486316864;

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
    msg.setTimeStamp(0.580616604131);
    msg.setSource(5339U);
    msg.setSourceEntity(173U);
    msg.setDestination(12326U);
    msg.setDestinationEntity(204U);
    msg.time = 0.418299089567;
    msg.phi = 0.982753484613;
    msg.theta = 0.717444033902;
    msg.psi = 0.281880703331;
    msg.psi_magnetic = 0.319917923978;

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
    msg.setTimeStamp(0.141507493643);
    msg.setSource(13849U);
    msg.setSourceEntity(245U);
    msg.setDestination(34675U);
    msg.setDestinationEntity(103U);
    msg.time = 0.685450267471;
    msg.x = 0.490217663763;
    msg.y = 0.178328519712;
    msg.z = 0.574143250366;
    msg.timestep = 0.709692647001;

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
    msg.setTimeStamp(0.978652532617);
    msg.setSource(49415U);
    msg.setSourceEntity(144U);
    msg.setDestination(51970U);
    msg.setDestinationEntity(235U);
    msg.time = 0.955338045449;
    msg.x = 0.137785574311;
    msg.y = 0.633039783267;
    msg.z = 0.756325800534;
    msg.timestep = 0.498628121516;

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
    msg.setTimeStamp(0.549778688504);
    msg.setSource(1206U);
    msg.setSourceEntity(63U);
    msg.setDestination(31930U);
    msg.setDestinationEntity(156U);
    msg.time = 0.930750067905;
    msg.x = 0.456246515592;
    msg.y = 0.18359482927;
    msg.z = 0.860203813883;
    msg.timestep = 0.462457078555;

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
    msg.setTimeStamp(0.0257357161682);
    msg.setSource(56364U);
    msg.setSourceEntity(132U);
    msg.setDestination(5592U);
    msg.setDestinationEntity(97U);
    msg.time = 0.97529132109;
    msg.x = 0.200456409113;
    msg.y = 0.498119563623;
    msg.z = 0.834287455827;

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
    msg.setTimeStamp(0.396825890195);
    msg.setSource(10216U);
    msg.setSourceEntity(146U);
    msg.setDestination(25925U);
    msg.setDestinationEntity(12U);
    msg.time = 0.454635626244;
    msg.x = 0.485303409462;
    msg.y = 0.424008207882;
    msg.z = 0.0961919525541;

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
    msg.setTimeStamp(0.081213343505);
    msg.setSource(50859U);
    msg.setSourceEntity(51U);
    msg.setDestination(57802U);
    msg.setDestinationEntity(220U);
    msg.time = 0.588089090225;
    msg.x = 0.280246776774;
    msg.y = 0.577429986907;
    msg.z = 0.203959761579;

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
    msg.setTimeStamp(0.587977860963);
    msg.setSource(35311U);
    msg.setSourceEntity(62U);
    msg.setDestination(33174U);
    msg.setDestinationEntity(220U);
    msg.time = 0.42946031407;
    msg.x = 0.09547164875;
    msg.y = 0.0433962263998;
    msg.z = 0.786620725368;

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
    msg.setTimeStamp(0.0835645772239);
    msg.setSource(45285U);
    msg.setSourceEntity(98U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(7U);
    msg.time = 0.546023915705;
    msg.x = 0.831413357807;
    msg.y = 0.000120746113887;
    msg.z = 0.539833048066;

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
    msg.setTimeStamp(0.226854333445);
    msg.setSource(42846U);
    msg.setSourceEntity(66U);
    msg.setDestination(7708U);
    msg.setDestinationEntity(63U);
    msg.time = 0.694144617723;
    msg.x = 0.240155497454;
    msg.y = 0.554227903961;
    msg.z = 0.509939493913;

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
    msg.setTimeStamp(0.548465791874);
    msg.setSource(64825U);
    msg.setSourceEntity(4U);
    msg.setDestination(21839U);
    msg.setDestinationEntity(234U);
    msg.time = 0.761995797916;
    msg.x = 0.929551954833;
    msg.y = 0.709748980503;
    msg.z = 0.428728831308;

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
    msg.setTimeStamp(0.617947584608);
    msg.setSource(22851U);
    msg.setSourceEntity(36U);
    msg.setDestination(47504U);
    msg.setDestinationEntity(48U);
    msg.time = 0.250194378799;
    msg.x = 0.644335046801;
    msg.y = 0.300222971264;
    msg.z = 0.801125462881;

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
    msg.setTimeStamp(0.673610765787);
    msg.setSource(38460U);
    msg.setSourceEntity(155U);
    msg.setDestination(1524U);
    msg.setDestinationEntity(160U);
    msg.time = 0.0216516382887;
    msg.x = 0.928248436056;
    msg.y = 0.947468743687;
    msg.z = 0.84309226366;

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
    msg.setTimeStamp(0.485035590594);
    msg.setSource(65352U);
    msg.setSourceEntity(58U);
    msg.setDestination(6059U);
    msg.setDestinationEntity(225U);
    msg.validity = 225U;
    msg.x = 0.0207971627767;
    msg.y = 0.432497917726;
    msg.z = 0.577030988398;

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
    msg.setTimeStamp(0.887472732598);
    msg.setSource(32892U);
    msg.setSourceEntity(188U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(75U);
    msg.validity = 189U;
    msg.x = 0.387878409446;
    msg.y = 0.849141293287;
    msg.z = 0.984411079274;

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
    msg.setTimeStamp(0.29413148755);
    msg.setSource(19157U);
    msg.setSourceEntity(81U);
    msg.setDestination(23800U);
    msg.setDestinationEntity(170U);
    msg.validity = 110U;
    msg.x = 0.416901547966;
    msg.y = 0.731181718096;
    msg.z = 0.0330522057161;

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
    msg.setTimeStamp(0.181948935122);
    msg.setSource(10338U);
    msg.setSourceEntity(94U);
    msg.setDestination(11557U);
    msg.setDestinationEntity(165U);
    msg.validity = 16U;
    msg.x = 0.981184694924;
    msg.y = 0.824358507758;
    msg.z = 0.651512246909;

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
    msg.setTimeStamp(0.741043362416);
    msg.setSource(3098U);
    msg.setSourceEntity(11U);
    msg.setDestination(58287U);
    msg.setDestinationEntity(56U);
    msg.validity = 66U;
    msg.x = 0.388496063107;
    msg.y = 0.976885148176;
    msg.z = 0.224857768718;

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
    msg.setTimeStamp(0.19511003646);
    msg.setSource(38754U);
    msg.setSourceEntity(201U);
    msg.setDestination(4257U);
    msg.setDestinationEntity(184U);
    msg.validity = 124U;
    msg.x = 0.0428097699021;
    msg.y = 0.0927313539591;
    msg.z = 0.142971852171;

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
    msg.setTimeStamp(0.0578740437664);
    msg.setSource(12430U);
    msg.setSourceEntity(23U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(90U);
    msg.time = 0.70078612332;
    msg.x = 0.0234486203989;
    msg.y = 0.0335277170205;
    msg.z = 0.115340660405;

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
    msg.setTimeStamp(0.40119310773);
    msg.setSource(44166U);
    msg.setSourceEntity(4U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(188U);
    msg.time = 0.987380474836;
    msg.x = 0.992095193397;
    msg.y = 0.560520635225;
    msg.z = 0.421479631339;

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
    msg.setTimeStamp(0.643110168082);
    msg.setSource(31672U);
    msg.setSourceEntity(53U);
    msg.setDestination(485U);
    msg.setDestinationEntity(46U);
    msg.time = 0.576588473822;
    msg.x = 0.844376418207;
    msg.y = 0.00042651954684;
    msg.z = 0.768667686235;

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
    msg.setTimeStamp(0.168451406917);
    msg.setSource(32437U);
    msg.setSourceEntity(54U);
    msg.setDestination(55335U);
    msg.setDestinationEntity(28U);
    msg.validity = 158U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.178515349944;
    tmp_msg_0.y = 0.958627212753;
    tmp_msg_0.z = 0.0954692494544;
    tmp_msg_0.phi = 0.29263050581;
    tmp_msg_0.theta = 0.532284610771;
    tmp_msg_0.psi = 0.840678136682;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.737459727371;

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
    msg.setTimeStamp(0.652565612842);
    msg.setSource(13759U);
    msg.setSourceEntity(200U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(172U);
    msg.validity = 247U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.255103222624;
    tmp_msg_0.beam_height = 0.0174182714893;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.51365402562;

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
    msg.setTimeStamp(0.774780676861);
    msg.setSource(1519U);
    msg.setSourceEntity(17U);
    msg.setDestination(16436U);
    msg.setDestinationEntity(172U);
    msg.validity = 95U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.694249770014;
    tmp_msg_0.y = 0.0246101696953;
    tmp_msg_0.z = 0.859261811629;
    tmp_msg_0.phi = 0.184504151955;
    tmp_msg_0.theta = 0.960588151019;
    tmp_msg_0.psi = 0.138833418134;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.347509380771;

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
    msg.setTimeStamp(0.043043274877);
    msg.setSource(12091U);
    msg.setSourceEntity(199U);
    msg.setDestination(37812U);
    msg.setDestinationEntity(204U);
    msg.value = 0.777523041458;

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
    msg.setTimeStamp(0.962882005552);
    msg.setSource(43334U);
    msg.setSourceEntity(40U);
    msg.setDestination(60556U);
    msg.setDestinationEntity(15U);
    msg.value = 0.65245285953;

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
    msg.setTimeStamp(0.224438182305);
    msg.setSource(9095U);
    msg.setSourceEntity(205U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(231U);
    msg.value = 0.249402303408;

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
    msg.setTimeStamp(0.912639325649);
    msg.setSource(24445U);
    msg.setSourceEntity(184U);
    msg.setDestination(38775U);
    msg.setDestinationEntity(47U);
    msg.value = 0.366042192836;

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
    msg.setTimeStamp(0.822001565829);
    msg.setSource(33914U);
    msg.setSourceEntity(69U);
    msg.setDestination(40969U);
    msg.setDestinationEntity(179U);
    msg.value = 0.903515423996;

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
    msg.setTimeStamp(0.497709835609);
    msg.setSource(3940U);
    msg.setSourceEntity(144U);
    msg.setDestination(29451U);
    msg.setDestinationEntity(183U);
    msg.value = 0.893930744592;

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
    msg.setTimeStamp(0.288835487328);
    msg.setSource(12625U);
    msg.setSourceEntity(156U);
    msg.setDestination(51032U);
    msg.setDestinationEntity(177U);
    msg.value = 0.0100801356206;

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
    msg.setTimeStamp(0.923631809868);
    msg.setSource(4695U);
    msg.setSourceEntity(59U);
    msg.setDestination(41791U);
    msg.setDestinationEntity(138U);
    msg.value = 0.526106408379;

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
    msg.setTimeStamp(0.301072596804);
    msg.setSource(52821U);
    msg.setSourceEntity(135U);
    msg.setDestination(26746U);
    msg.setDestinationEntity(40U);
    msg.value = 0.0989738843258;

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
    msg.setTimeStamp(0.91123932111);
    msg.setSource(51099U);
    msg.setSourceEntity(58U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(236U);
    msg.value = 0.495564134837;

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
    msg.setTimeStamp(0.919280133739);
    msg.setSource(45137U);
    msg.setSourceEntity(7U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(220U);
    msg.value = 0.152967394264;

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
    msg.setTimeStamp(0.855969408686);
    msg.setSource(2558U);
    msg.setSourceEntity(183U);
    msg.setDestination(10015U);
    msg.setDestinationEntity(111U);
    msg.value = 0.8200170136;

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
    msg.setTimeStamp(0.682096499219);
    msg.setSource(57747U);
    msg.setSourceEntity(8U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(111U);
    msg.value = 0.528421104116;

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
    msg.setTimeStamp(0.170858781632);
    msg.setSource(29517U);
    msg.setSourceEntity(104U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0460028069621;

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
    msg.setTimeStamp(0.649611655649);
    msg.setSource(22795U);
    msg.setSourceEntity(68U);
    msg.setDestination(23712U);
    msg.setDestinationEntity(148U);
    msg.value = 0.276634696081;

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
    msg.setTimeStamp(0.639588713516);
    msg.setSource(25989U);
    msg.setSourceEntity(183U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(126U);
    msg.value = 0.506479494246;

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
    msg.setTimeStamp(0.881499529631);
    msg.setSource(44528U);
    msg.setSourceEntity(15U);
    msg.setDestination(62125U);
    msg.setDestinationEntity(146U);
    msg.value = 0.818304387245;

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
    msg.setTimeStamp(0.186556098611);
    msg.setSource(60350U);
    msg.setSourceEntity(76U);
    msg.setDestination(49150U);
    msg.setDestinationEntity(134U);
    msg.value = 0.135486636338;

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
    msg.setTimeStamp(0.246406373192);
    msg.setSource(44376U);
    msg.setSourceEntity(23U);
    msg.setDestination(32099U);
    msg.setDestinationEntity(191U);
    msg.value = 0.191030925555;

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
    msg.setTimeStamp(0.352376011313);
    msg.setSource(46422U);
    msg.setSourceEntity(10U);
    msg.setDestination(8499U);
    msg.setDestinationEntity(44U);
    msg.value = 0.580134970996;

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
    msg.setTimeStamp(0.898770696604);
    msg.setSource(3661U);
    msg.setSourceEntity(10U);
    msg.setDestination(63016U);
    msg.setDestinationEntity(72U);
    msg.value = 0.402741671902;

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
    msg.setTimeStamp(0.637478485045);
    msg.setSource(2595U);
    msg.setSourceEntity(42U);
    msg.setDestination(49882U);
    msg.setDestinationEntity(13U);
    msg.value = 0.907581318233;

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
    msg.setTimeStamp(0.986419911236);
    msg.setSource(9362U);
    msg.setSourceEntity(73U);
    msg.setDestination(3570U);
    msg.setDestinationEntity(59U);
    msg.value = 0.0399993373226;

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
    msg.setTimeStamp(0.289908345823);
    msg.setSource(84U);
    msg.setSourceEntity(142U);
    msg.setDestination(11969U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0256159106724;

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
    msg.setTimeStamp(0.599593237875);
    msg.setSource(31202U);
    msg.setSourceEntity(110U);
    msg.setDestination(63221U);
    msg.setDestinationEntity(91U);
    msg.direction = 0.398734629378;
    msg.speed = 0.112348944187;
    msg.turbulence = 0.195781808983;

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
    msg.setTimeStamp(0.758348626793);
    msg.setSource(11168U);
    msg.setSourceEntity(69U);
    msg.setDestination(62699U);
    msg.setDestinationEntity(209U);
    msg.direction = 0.240954959963;
    msg.speed = 0.316574454176;
    msg.turbulence = 0.767171187414;

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
    msg.setTimeStamp(0.948557666981);
    msg.setSource(34218U);
    msg.setSourceEntity(222U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(145U);
    msg.direction = 0.125634413748;
    msg.speed = 0.0173559848739;
    msg.turbulence = 0.649767891852;

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
    msg.setTimeStamp(0.538657373832);
    msg.setSource(14515U);
    msg.setSourceEntity(71U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(29U);
    msg.value = 0.754676214387;

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
    msg.setTimeStamp(0.279320183281);
    msg.setSource(1692U);
    msg.setSourceEntity(52U);
    msg.setDestination(64864U);
    msg.setDestinationEntity(182U);
    msg.value = 0.724670557852;

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
    msg.setTimeStamp(0.410019549299);
    msg.setSource(48149U);
    msg.setSourceEntity(219U);
    msg.setDestination(8734U);
    msg.setDestinationEntity(203U);
    msg.value = 0.300186787847;

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
    msg.setTimeStamp(0.326854753983);
    msg.setSource(19042U);
    msg.setSourceEntity(251U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(219U);
    msg.value.assign("GPPXEQJHTCGSHCPQRWRDHAWWSBVYRZUKRUNWJVNOJXWEEZHYRIMTTTZNJ");

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
    msg.setTimeStamp(0.0619925551632);
    msg.setSource(9770U);
    msg.setSourceEntity(175U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(133U);
    msg.value.assign("VRBBHOOUTIULWRHFEJEOFXTKTILXAOEJIGWAARGOREPMUDNTNQRCWLWPHXEMHNUEZINZSMFFSYQAIGYDSHWFGSCBORIEGNCJQMTIOACYQSONUZNKYZGCSLNUBJZLDXQUFHSTXMVHYBTKRXKISNZZPVBZGMBKCBLVWJJJFEPIHYDMDLJZRAKELPAVQQXXMDGRPDKGXJKRGFMHF");

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
    msg.setTimeStamp(0.844139369133);
    msg.setSource(56517U);
    msg.setSourceEntity(68U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(22U);
    msg.value.assign("OBBWOIROUDVQQPZTPAMNLYBRGGHURPAVGHXZTYLLVXFHBTMFPESKUCEVCMOSYFATIENWWBCUIZGUGPTUWREWUZXRZGCKIJJQLLLLNDVWFKMHMSMTYAAVWFJFIQJUJLSUWTIXRWNMVGASSZTYVCCBPHNJTEUQXQTBOKIMRSLIPEQOYKDCONHKHONGGDXIJRXBEQEREZFLDASKABFZXMKZJHNZJXKFXCWEPSQIYDVKNHONVYAPMACJOH");

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
    msg.setTimeStamp(0.859704985174);
    msg.setSource(54532U);
    msg.setSourceEntity(33U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(95U);
    const char tmp_msg_0[] = {62, -112, -33, -68, -109, -123, 29, 119, -12, 121, -82, -114, 77, -4, -51, 115, 122, -34, 97, -62, -39, -21, 29, -62, -75, 88, 80, -32, -62, -99, 28, -88, -119, -123, 92, 104, 41, -98, 49, 64, -25, 56, 22, -18, -64, 101, 119, -28, 38, -96, 67, 68, 87, -48, 88, 25, -105, 111, 89, -90, 20};
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
    msg.setTimeStamp(0.0706001398509);
    msg.setSource(19780U);
    msg.setSourceEntity(222U);
    msg.setDestination(47948U);
    msg.setDestinationEntity(109U);
    const char tmp_msg_0[] = {101, 69, 56, -19, -37, -60, -109, 64, -12, -80, -108, -117, -119, -115, 84, 88, -112, -59, 72, -118, -66, -12, 113, 20, 90, 22, 48, 0, -30, 115, 89, -54, 111, 53, -57, 53, -66, -99, 69, 118, 89, -2, -4, 71, -105, 121, -54, -38, 66, 39, 47, -109, 70, 12, -44, 102, 77, 68, 3, -83, 73, -121, -102, 34, 116, -53, 118, -73, 10, 6, 40, -38, -72, 2, 10, -29, 59, -2, 63, -118, 10, 84, 57, -108, 21, 19, 84, 115, -101, -89, -63, 80, -18, 12, -96, -93, 90, -124, -6, 35, -36, -122, 105, -104, -65, 52, 87, 97, 49, -2, 27, 72, -39, -116, 108, 81, -48, 94, 15, 18, 105, 17, -26, -117, -61, 114, -68, 20, 108, -78, -97, 17, 18, -125, 113, 79, -85, 42, 44, 55, 86, 37, -128, -89, 88, 40, 110, -59, -100, -117, -19, -96, 9, 42, 60, 115, 83, 36, -119, -105, 6, 58, -123, 19, -65, 125, -56, -112, -15, 116, -47, 41, -70, -127, -23, -104, 64, 86, 111, 13, 121, 44, -60, -5, -16, -61, -96, -63, 100, 92, 51, 18, 104, 91, 104, 13, 115, 29, -82, 120, 99, 88, -126, 7, 67, -117, -15, -28, -123, -36};
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
    msg.setTimeStamp(0.22602818081);
    msg.setSource(46716U);
    msg.setSourceEntity(248U);
    msg.setDestination(51529U);
    msg.setDestinationEntity(204U);
    const char tmp_msg_0[] = {-73, -37, -118, -73, 13, 118, 106, -70, -29, 30, 119, 17, -50, 20, -107, -42, 126, 75, 69, -59, -26, 73, -59, 96, 16, 86, -58, 61, 117, -113, 26, -34, -12, -82, 55, 118, -33, -4, 57, -62, 35, -113, -8, 67, 7, 9, -40, -3, -23, 105, -16, -116, 114, -28, 34, 30, -105, -92, 93, -108, 107, -58, 112, -122, -35, -96, 61, 88, -19, -120, 26, 48, 18, 58, -90, -20, -93, -46, 16, -19, -55, 61, -14, -120, -64, -2, -86, -29, -98, 111, 35, 86, 14, -35, -1, -51, 103, -128, 11, -2, -98, -119, 82, 85, -11, 15, 11, 77, 63, -98, -106, 111, -3, 51, 113, -27, 55, 89, 25, -34, 104, 24, -56, 19, 62, -48, 1, 22, -24, -51, 46, -98, 123, 33, -76, 47, 77, 75, 18, 87, 66, 81, 38, 32, -17, -29, -37};
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
    msg.setTimeStamp(0.152823956108);
    msg.setSource(16942U);
    msg.setSourceEntity(91U);
    msg.setDestination(55264U);
    msg.setDestinationEntity(243U);
    msg.frequency = 1471922449U;
    msg.min_range = 15864U;
    msg.max_range = 45306U;

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
    msg.setTimeStamp(0.988950921772);
    msg.setSource(5268U);
    msg.setSourceEntity(108U);
    msg.setDestination(58515U);
    msg.setDestinationEntity(42U);
    msg.frequency = 2134943230U;
    msg.min_range = 48048U;
    msg.max_range = 7471U;

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
    msg.setTimeStamp(0.914750044225);
    msg.setSource(33036U);
    msg.setSourceEntity(139U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(242U);
    msg.frequency = 1185997543U;
    msg.min_range = 45849U;
    msg.max_range = 14317U;

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
    msg.setTimeStamp(0.148555706905);
    msg.setSource(9410U);
    msg.setSourceEntity(23U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(13U);
    msg.type = 233U;
    msg.frequency = 3690810724U;
    msg.min_range = 32713U;
    msg.max_range = 62321U;
    msg.bits_per_point = 81U;
    msg.scale_factor = 0.722917066442;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.500487396043;
    tmp_msg_0.beam_height = 0.512282457172;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-67, -4, -109, 94, -6, 25, -91, 19, -112, -3, -71, -122, -18, 24, 77, -97, 85, 0, 64, -25, -22, -113, -56, -78, -67, 1, -103, -61, -38, -4, 65, 21, 75, -122, -11, 54, -76, 92, -125, -29, -50, -24, 11, 76, 27, -64, -39, -62, -45, -16, -3, 23, -11, 21, -61, 96, 121, 29, 87, -58, 52, 4, 32, -77, 62, -48, 9, -12, 114, -57, 81, -110, 116, -126, -81, -79, 73, 69, 101, -64, -114, -8, -29, 18, -5, 105, -42, 113, -32, 5, 91, 25, -122, 50, -74, -118, 123, -27, -69, 68, 5, -60, 54, 73, -94, 43, -115, -32, 67, 6, 102, -21, 51, -72, 12, 111, 89, 108, -6, 86, -96, 79, 117, 111, 57, -102, -40, 87};
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
    msg.setTimeStamp(0.856551254349);
    msg.setSource(49893U);
    msg.setSourceEntity(165U);
    msg.setDestination(59100U);
    msg.setDestinationEntity(63U);
    msg.type = 21U;
    msg.frequency = 9928505U;
    msg.min_range = 28047U;
    msg.max_range = 17663U;
    msg.bits_per_point = 78U;
    msg.scale_factor = 0.599338410024;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.17535406816;
    tmp_msg_0.beam_height = 0.843768444331;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-20, -75, -13, -38, -12, 14, 82, -65, -118, 73, -62, 40, 36, 54, -16, 112, 11, -120, -95, -48, 32, 85, 41, -100, -126, -23, 15, 5, 108, -79, 118, -24, -44, -12, 82, 1, -21, -102, -24, -103, 69, 48, -7, -5, 36, -80, -113, -6, 0, 49, 119, 76, -113, 12, -111, -46, 121, -18, 65, -69, 68, -73, 106, -47, 123, -103, -25, 97, 52, 97, -78, 53, 9, -49, 74, -75, 80, -38, -123, 79, -109, -63, -90, -41, -104, 118, -109, -109, -60, 24, 82, -65, -121, -120, 59, -104, -77, 69, 30, -26, -62, -15, -29, -18, -80, 94, 23, 89, 1, -34};
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
    msg.setTimeStamp(0.614194951963);
    msg.setSource(39078U);
    msg.setSourceEntity(32U);
    msg.setDestination(26190U);
    msg.setDestinationEntity(114U);
    msg.type = 239U;
    msg.frequency = 4201608762U;
    msg.min_range = 29353U;
    msg.max_range = 5107U;
    msg.bits_per_point = 189U;
    msg.scale_factor = 0.651488162914;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.685494770744;
    tmp_msg_0.beam_height = 0.856489101359;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-64, 36, 28, -52, 26, 41, -93, 65, -125, 58, 107, -69, 97, 80, -34, 86, -120, 70, -49, 9, -66, 31, -10, 30, 45, 92, -93, -76, -66, 125, -41, 49, 2, -42, 54, 74, -9, -74, -15, 26, 0, -72, 43, -12, 125, 101, -73, -114, -37, -86, 63, -28, -114, -71, 60, 34, 85, -43, 108, 78, 68, -39, -37, 24, -106, 5, 94, -72, 51, 117, 77, -77, -67, 4, 120, -52, -50, 4, -8, -21, -94, -73, -28, 5, -9, -123, 94, 61, 11, 124, 29, 105, 81, 84, -100, 30, 84, 66, -3, 102, 58, -75, -128, -3, 87, -20, 69, 7, 88, 55, -52, -114, -64, -50, 53, 7, -68, -125, 90, -28, 1, -65, -128, 68, -100, -63, -75, 91, -54, -65, 114, -83, 58, -9, -96, 119, 20, 31, -44, 3, -84, 84};
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
    msg.setTimeStamp(0.418027868729);
    msg.setSource(34813U);
    msg.setSourceEntity(79U);
    msg.setDestination(57374U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.892750078313);
    msg.setSource(52233U);
    msg.setSourceEntity(207U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.01587024727);
    msg.setSource(64598U);
    msg.setSourceEntity(17U);
    msg.setDestination(64339U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.941233447699);
    msg.setSource(42997U);
    msg.setSourceEntity(40U);
    msg.setDestination(51044U);
    msg.setDestinationEntity(243U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.190293835584);
    msg.setSource(35545U);
    msg.setSourceEntity(96U);
    msg.setDestination(64694U);
    msg.setDestinationEntity(73U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.793942435011);
    msg.setSource(9682U);
    msg.setSourceEntity(247U);
    msg.setDestination(5549U);
    msg.setDestinationEntity(108U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.0355875667618);
    msg.setSource(1003U);
    msg.setSourceEntity(76U);
    msg.setDestination(33742U);
    msg.setDestinationEntity(68U);
    msg.value = 0.579961889028;
    msg.confidence = 0.34882810715;
    msg.opmodes.assign("DVUXTWGZCRIRMMXNSETFMEMXVCVASKASOEPFQKTDLSIDXBLJUQZNDYBUXIYJSASCCYKZASWPOYLOTZEJUABDOUHPCHAHGLRFBKLNKLQVJKWVNKGIYAMSPVGWMLQVVUGKYFOGJAWKBTUGWYRPRHGENZPKOQNCBRCNBJTYDPDTDTEWJEMNFZIZBGYERQLLFIQJIRXVUQPIAI");

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
    msg.setTimeStamp(0.585427943702);
    msg.setSource(52216U);
    msg.setSourceEntity(122U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(136U);
    msg.value = 0.537823036625;
    msg.confidence = 0.462084932357;
    msg.opmodes.assign("OKAJILETHHELVNMYZHTXWHZJFLPYWODPNIWYCQUDJFS");

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
    msg.setTimeStamp(0.521478361595);
    msg.setSource(25408U);
    msg.setSourceEntity(20U);
    msg.setDestination(43081U);
    msg.setDestinationEntity(50U);
    msg.value = 0.459694945626;
    msg.confidence = 0.383659931947;
    msg.opmodes.assign("BDZSKXJUPFIEPJLKRVCYOJGGBRMVMUSKBGJENBXWOVDDGEDLVVUUJWXJDTILYCTDITAENOIAWFJPUDQRNKZNZXHIZQPZYDZHKPCRJBWPLGQMRBVHOFOTATUGEIYHANQRLEUSHQWRAPFSMEKG");

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
    msg.setTimeStamp(0.938259275319);
    msg.setSource(23409U);
    msg.setSourceEntity(191U);
    msg.setDestination(63835U);
    msg.setDestinationEntity(247U);
    msg.itow = 1501642088U;
    msg.lat = 0.438424501107;
    msg.lon = 0.0478998180265;
    msg.height_ell = 0.199410207355;
    msg.height_sea = 0.210311408957;
    msg.hacc = 0.583258206835;
    msg.vacc = 0.104111332967;
    msg.vel_n = 0.354601855825;
    msg.vel_e = 0.34674321845;
    msg.vel_d = 0.921428742256;
    msg.speed = 0.879306358092;
    msg.gspeed = 0.168682373805;
    msg.heading = 0.255056474744;
    msg.sacc = 0.765062780054;
    msg.cacc = 0.635473161843;

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
    msg.setTimeStamp(0.185827302489);
    msg.setSource(64989U);
    msg.setSourceEntity(176U);
    msg.setDestination(38930U);
    msg.setDestinationEntity(137U);
    msg.itow = 2864789982U;
    msg.lat = 0.722639586945;
    msg.lon = 0.422751858827;
    msg.height_ell = 0.305100467279;
    msg.height_sea = 0.548208999752;
    msg.hacc = 0.441276117999;
    msg.vacc = 0.441745970251;
    msg.vel_n = 0.681677894662;
    msg.vel_e = 0.0619242316219;
    msg.vel_d = 0.691897269326;
    msg.speed = 0.499896519972;
    msg.gspeed = 0.762446800584;
    msg.heading = 0.106582757407;
    msg.sacc = 0.0728473709895;
    msg.cacc = 0.353977047772;

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
    msg.setTimeStamp(0.348280776929);
    msg.setSource(6090U);
    msg.setSourceEntity(190U);
    msg.setDestination(8587U);
    msg.setDestinationEntity(185U);
    msg.itow = 2589335713U;
    msg.lat = 0.188570510924;
    msg.lon = 0.00424372431964;
    msg.height_ell = 0.961163553146;
    msg.height_sea = 0.0710386448784;
    msg.hacc = 0.566698910134;
    msg.vacc = 0.643513120027;
    msg.vel_n = 0.693865746835;
    msg.vel_e = 0.316760721132;
    msg.vel_d = 0.161076596229;
    msg.speed = 0.27239456912;
    msg.gspeed = 0.736580133267;
    msg.heading = 0.48852980944;
    msg.sacc = 0.468425403321;
    msg.cacc = 0.381831147919;

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
    msg.setTimeStamp(0.798691085414);
    msg.setSource(54003U);
    msg.setSourceEntity(94U);
    msg.setDestination(21151U);
    msg.setDestinationEntity(204U);
    msg.id = 167U;
    msg.value = 0.941817891903;

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
    msg.setTimeStamp(0.183109237858);
    msg.setSource(24285U);
    msg.setSourceEntity(76U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(40U);
    msg.id = 223U;
    msg.value = 0.442933009673;

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
    msg.setTimeStamp(0.230966957817);
    msg.setSource(36104U);
    msg.setSourceEntity(87U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(190U);
    msg.id = 131U;
    msg.value = 0.782236221054;

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
    msg.setTimeStamp(0.538425193436);
    msg.setSource(55147U);
    msg.setSourceEntity(211U);
    msg.setDestination(27253U);
    msg.setDestinationEntity(246U);
    msg.x = 0.147400098928;
    msg.y = 0.280805935007;
    msg.z = 0.527319401749;
    msg.phi = 0.957237342214;
    msg.theta = 0.436000374471;
    msg.psi = 0.669637001126;

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
    msg.setTimeStamp(0.529474580301);
    msg.setSource(24575U);
    msg.setSourceEntity(126U);
    msg.setDestination(41893U);
    msg.setDestinationEntity(49U);
    msg.x = 0.07129304591;
    msg.y = 0.572087248958;
    msg.z = 0.626454991136;
    msg.phi = 0.00224544100125;
    msg.theta = 0.977800188148;
    msg.psi = 0.279729831769;

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
    msg.setTimeStamp(0.331412060364);
    msg.setSource(54370U);
    msg.setSourceEntity(247U);
    msg.setDestination(35516U);
    msg.setDestinationEntity(185U);
    msg.x = 0.505979949238;
    msg.y = 0.500260097563;
    msg.z = 0.574642839132;
    msg.phi = 0.401725637754;
    msg.theta = 0.188095316441;
    msg.psi = 0.602859465022;

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
    msg.setTimeStamp(0.747154911167);
    msg.setSource(56669U);
    msg.setSourceEntity(182U);
    msg.setDestination(59173U);
    msg.setDestinationEntity(170U);
    msg.beam_width = 0.435858849203;
    msg.beam_height = 0.666872314311;

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
    msg.setTimeStamp(0.212571177696);
    msg.setSource(38665U);
    msg.setSourceEntity(101U);
    msg.setDestination(36362U);
    msg.setDestinationEntity(37U);
    msg.beam_width = 0.0957282850001;
    msg.beam_height = 0.86645602666;

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
    msg.setTimeStamp(0.0115950956757);
    msg.setSource(24828U);
    msg.setSourceEntity(42U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(250U);
    msg.beam_width = 0.436579421457;
    msg.beam_height = 0.37527092368;

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
    msg.setTimeStamp(0.564022738255);
    msg.setSource(62694U);
    msg.setSourceEntity(112U);
    msg.setDestination(45200U);
    msg.setDestinationEntity(169U);
    msg.sane = 131U;

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
    msg.setTimeStamp(0.300984744188);
    msg.setSource(48364U);
    msg.setSourceEntity(28U);
    msg.setDestination(6548U);
    msg.setDestinationEntity(240U);
    msg.sane = 74U;

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
    msg.setTimeStamp(0.0345514469872);
    msg.setSource(7163U);
    msg.setSourceEntity(29U);
    msg.setDestination(35267U);
    msg.setDestinationEntity(216U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.0506547438636);
    msg.setSource(38246U);
    msg.setSourceEntity(110U);
    msg.setDestination(26986U);
    msg.setDestinationEntity(121U);
    msg.id = 30U;
    msg.zoom = 35U;
    msg.action = 107U;

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
    msg.setTimeStamp(0.773545785124);
    msg.setSource(62935U);
    msg.setSourceEntity(114U);
    msg.setDestination(51416U);
    msg.setDestinationEntity(61U);
    msg.id = 174U;
    msg.zoom = 26U;
    msg.action = 249U;

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
    msg.setTimeStamp(0.182817632925);
    msg.setSource(34831U);
    msg.setSourceEntity(254U);
    msg.setDestination(28869U);
    msg.setDestinationEntity(16U);
    msg.id = 108U;
    msg.zoom = 146U;
    msg.action = 172U;

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
    msg.setTimeStamp(0.441813926521);
    msg.setSource(52567U);
    msg.setSourceEntity(17U);
    msg.setDestination(62667U);
    msg.setDestinationEntity(150U);
    msg.id = 101U;
    msg.value = 0.285771980482;

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
    msg.setTimeStamp(0.917321365262);
    msg.setSource(31095U);
    msg.setSourceEntity(160U);
    msg.setDestination(8505U);
    msg.setDestinationEntity(120U);
    msg.id = 3U;
    msg.value = 0.684404935422;

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
    msg.setTimeStamp(0.782136908502);
    msg.setSource(10429U);
    msg.setSourceEntity(114U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(251U);
    msg.id = 96U;
    msg.value = 0.0435890401903;

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
    msg.setTimeStamp(0.298457812466);
    msg.setSource(33354U);
    msg.setSourceEntity(101U);
    msg.setDestination(39756U);
    msg.setDestinationEntity(222U);
    msg.id = 30U;
    msg.value = 0.292721087326;

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
    msg.setTimeStamp(0.658729198077);
    msg.setSource(10631U);
    msg.setSourceEntity(33U);
    msg.setDestination(2918U);
    msg.setDestinationEntity(76U);
    msg.id = 121U;
    msg.value = 0.547761176062;

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
    msg.setTimeStamp(0.822575791365);
    msg.setSource(25425U);
    msg.setSourceEntity(50U);
    msg.setDestination(17235U);
    msg.setDestinationEntity(234U);
    msg.id = 213U;
    msg.value = 0.225925726552;

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
    msg.setTimeStamp(0.40609910833);
    msg.setSource(17840U);
    msg.setSourceEntity(242U);
    msg.setDestination(20743U);
    msg.setDestinationEntity(12U);
    msg.id = 133U;
    msg.angle = 0.764019451803;

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
    msg.setTimeStamp(0.340346440604);
    msg.setSource(43824U);
    msg.setSourceEntity(193U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(215U);
    msg.id = 177U;
    msg.angle = 0.648038916108;

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
    msg.setTimeStamp(0.522837433851);
    msg.setSource(19264U);
    msg.setSourceEntity(5U);
    msg.setDestination(16405U);
    msg.setDestinationEntity(76U);
    msg.id = 119U;
    msg.angle = 0.319038273965;

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
    msg.setTimeStamp(0.945231538996);
    msg.setSource(58638U);
    msg.setSourceEntity(76U);
    msg.setDestination(12346U);
    msg.setDestinationEntity(4U);
    msg.op = 186U;
    msg.actions.assign("IGBTIMYRQDHCFCKPDNLADKEMVSMWEINLEOXVFSYGEWRORWVVJAAVBNXNQTQDMVUM");

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
    msg.setTimeStamp(0.480811523192);
    msg.setSource(61223U);
    msg.setSourceEntity(25U);
    msg.setDestination(14792U);
    msg.setDestinationEntity(8U);
    msg.op = 172U;
    msg.actions.assign("DECMNXOJMRMAHBGKPHKG");

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
    msg.setTimeStamp(0.058615046808);
    msg.setSource(36517U);
    msg.setSourceEntity(1U);
    msg.setDestination(17802U);
    msg.setDestinationEntity(172U);
    msg.op = 6U;
    msg.actions.assign("BYEQCDLIMJTFASXPSXLFRWQRFVRYFBZGSFWMWTVOAAUOJGNGQZZLSTTKYNPXKABHNAHFPQMTNEDYVQERABQWMOGKDEEVYIIHEIUDKVDNIUFGMQRTGWIAWGCBPBNBUADBVOHKZFRDPEXKMLGIPDYCQZOHWFNLKKCHZBAUVCEMPCTQEYBUJWSCJUCISJNGZQSJCGHMMNEPUTFLU");

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
    msg.setTimeStamp(0.372925092372);
    msg.setSource(12295U);
    msg.setSourceEntity(57U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(196U);
    msg.actions.assign("EVDSUHKYLTLZUJNLFGOWKRFFADRXCYYCHYBTUHSAFCPOJVFMUDBVXUOLQNBGARKHITWXWJQZDSCOIVIJQUIFHQKWMWMLMCGUUDZBKVIZWIYPEBTHVDSVSPKXZIALTKHNDVBSWOLWFOPZLRCGZRFQQACCYNJMIOMVWPHBZYTMCXMHIYLYEAXCG");

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
    msg.setTimeStamp(0.211088491438);
    msg.setSource(36721U);
    msg.setSourceEntity(132U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(244U);
    msg.actions.assign("DOBDXZSVJYQZAQQIFKJGTXDSAYZSAKWRELUFRFLSCVMHWXRVRRRJHDPMBKTVNEMSIUHXHSVPIAZUNNNGJWTNOYCIEFAFAAHGPTDNLTDOIILSOGZEHQCQTDFZHPEAETOCCANKCQWRPBSUDOYWGLS");

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
    msg.setTimeStamp(0.94029979126);
    msg.setSource(22557U);
    msg.setSourceEntity(78U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(249U);
    msg.actions.assign("VYVPLZZFIVGELVIJXGMBWLQGSGGDQWATDSLSVCKCDWWJEABAMVFEFKDTGYWRNAIEGYSNLUOODKFCBUCZQGFYMIPOSJDYJRXZJMJTHUFAYUHUVIBBWIWNPINFCOSUIZZPSRZWUPHHQXZFAPMKVMY");

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
    msg.setTimeStamp(0.0396836562112);
    msg.setSource(52737U);
    msg.setSourceEntity(94U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(63U);
    msg.button = 236U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.933751796458);
    msg.setSource(48920U);
    msg.setSourceEntity(3U);
    msg.setDestination(39929U);
    msg.setDestinationEntity(109U);
    msg.button = 88U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.77991994678);
    msg.setSource(38643U);
    msg.setSourceEntity(195U);
    msg.setDestination(30278U);
    msg.setDestinationEntity(37U);
    msg.button = 49U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.882694842226);
    msg.setSource(21149U);
    msg.setSourceEntity(122U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(73U);
    msg.op = 253U;
    msg.text.assign("LQLXHSSSIFFAPGZKANRRYOEGMBJSDHRUOGLNCLEDKIPFVCFJELCVEGUYZSCFKAQPMZBGOLRHDTRGTTYVEVWHNRNJACYQZXYASNNUMVDPFIATVZOBWRUBXAUMEHDLZHBIJMMJKXIKIMDPCBZIJUQ");

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
    msg.setTimeStamp(0.0330138464851);
    msg.setSource(45164U);
    msg.setSourceEntity(82U);
    msg.setDestination(17087U);
    msg.setDestinationEntity(49U);
    msg.op = 70U;
    msg.text.assign("YZNIODIIYTLRDQXFJMAMMTHBKMAPWBDMLZXEVJOENQWZLKTLYSNQAZFAISCKHSYQFCKZVFWTIDSTGRYRPOWBJUHEVQUBWCBITQKANKEHFEEWOGTZADBWYLUXBLXAVSKFGTJPYJCZRGCAURSWCIXUPKVGMPSTINXQVYZOESZEHDFMDXJKHZXFUMGRFRSDE");

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
    msg.setTimeStamp(0.789224350644);
    msg.setSource(296U);
    msg.setSourceEntity(168U);
    msg.setDestination(6127U);
    msg.setDestinationEntity(201U);
    msg.op = 132U;
    msg.text.assign("RBEIZMDDIFZSTQBLJTIMHHGTASXLDXQCPPGLGEYPNWNJQRRBRNCMENUIYARYZYNTWNLKWJCVWLWYCPIIIAVFMSTDUQSAYIXUBMSUSJLNZ");

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
    msg.setTimeStamp(0.718568793058);
    msg.setSource(21149U);
    msg.setSourceEntity(10U);
    msg.setDestination(62805U);
    msg.setDestinationEntity(186U);
    msg.op = 207U;
    msg.time_remain = 0.471901352227;
    msg.sched_time = 0.659862074711;

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
    msg.setTimeStamp(0.72647737677);
    msg.setSource(50759U);
    msg.setSourceEntity(186U);
    msg.setDestination(189U);
    msg.setDestinationEntity(180U);
    msg.op = 223U;
    msg.time_remain = 0.0377677903362;
    msg.sched_time = 0.207520901571;

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
    msg.setTimeStamp(0.884932557932);
    msg.setSource(51730U);
    msg.setSourceEntity(80U);
    msg.setDestination(20100U);
    msg.setDestinationEntity(214U);
    msg.op = 37U;
    msg.time_remain = 0.200175909551;
    msg.sched_time = 0.0658873102142;

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
    msg.setTimeStamp(0.514174373053);
    msg.setSource(64489U);
    msg.setSourceEntity(127U);
    msg.setDestination(65447U);
    msg.setDestinationEntity(143U);
    msg.name.assign("HUXLMXWZBJLUWTNABWMARXRLTLNRPWEDHFXGQGXARUJCLSAWJJLNEYEKPKOYDTWGBRNZIJBMPPVIDKIVFYFCZQTMJGLZRDHWNTPMIOGDHXPBPHPHUOJGQDYVVZCIKWQSVJZBSGNXKM");
    msg.op = 124U;
    msg.sched_time = 0.543502266092;

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
    msg.setTimeStamp(0.264780731084);
    msg.setSource(1313U);
    msg.setSourceEntity(74U);
    msg.setDestination(28035U);
    msg.setDestinationEntity(182U);
    msg.name.assign("HAHJLUKSPETNPJUZRZESOMCUYNJCPMAJOPVODAKMREZRLZGFNHIPABRGVNNCRRYAIAJTLUYXSXCFLTOKVOMKKNDMAOVGBMK");
    msg.op = 121U;
    msg.sched_time = 0.816195302738;

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
    msg.setTimeStamp(0.0933950580165);
    msg.setSource(15329U);
    msg.setSourceEntity(147U);
    msg.setDestination(37016U);
    msg.setDestinationEntity(253U);
    msg.name.assign("DFCBQYFCORIDVZTHNUFUBRTWIXXCJTBTNBVRNBEKKQASNVJTSGVEDJHFGFPZIJUTEMHSXUCFZPDWQSKXLQVLKDPOSIYFHTEDPMVVGGZZIQRILMTUYXCDUIOKCJCOSYFSYXRCOPFILOQRJWJXMJZTWYAYLWZIOILWDUZM");
    msg.op = 200U;
    msg.sched_time = 0.0663509940353;

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
    msg.setTimeStamp(0.626119619077);
    msg.setSource(414U);
    msg.setSourceEntity(140U);
    msg.setDestination(1460U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.715352691779);
    msg.setSource(57885U);
    msg.setSourceEntity(1U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.554359963519);
    msg.setSource(38141U);
    msg.setSourceEntity(5U);
    msg.setDestination(49005U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.00786593923968);
    msg.setSource(60991U);
    msg.setSourceEntity(119U);
    msg.setDestination(48721U);
    msg.setDestinationEntity(253U);
    msg.name.assign("GIHYBANCRDBPFDGBOIOJZUBWSMJJYWFC");
    msg.state = 228U;

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
    msg.setTimeStamp(0.366807596142);
    msg.setSource(52393U);
    msg.setSourceEntity(93U);
    msg.setDestination(37651U);
    msg.setDestinationEntity(172U);
    msg.name.assign("IQVLNOTZCTYOKZLFFLGVCBPASXTSNECPZJIBIPDWRVXMZJGDMBEWZDHHUSHOAYBNDADLYSCJELHQIJKLPWWNKEWCNZXYRSCFNVTFYNDZSQEBCHQGLLSJEPAZXDGDJUJVUGVFOTXPKMRNUFHXDAOGJ");
    msg.state = 213U;

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
    msg.setTimeStamp(0.775085145278);
    msg.setSource(24833U);
    msg.setSourceEntity(188U);
    msg.setDestination(38917U);
    msg.setDestinationEntity(248U);
    msg.name.assign("SDAATKZKNXUKNE");
    msg.state = 25U;

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
    msg.setTimeStamp(0.394913524903);
    msg.setSource(16646U);
    msg.setSourceEntity(150U);
    msg.setDestination(46618U);
    msg.setDestinationEntity(149U);
    msg.name.assign("PRRMAXKEWMKOQMCFJKYXPQBAQMIUWSSWNWITYZAAETFZKZFNEOUFZDAAGZHBRMHOBCCGWRIYSYACWKWYHSQPXVNVFQKMFDEBTVTZSNSRMFISXGHUEJHTXELMXNRHMPRXMUREJVHTPVLVRGRIGDXEPBIDZLBCGFLYVJDLJUOPQOSNBIGDPNJBPWUDEFLHGLUOVBUYOPOLCDBVNGWTXWTUYSLICUNGKDJYKQVZSZCQTXIC");
    msg.value = 222U;

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
    msg.setTimeStamp(0.345510798921);
    msg.setSource(27440U);
    msg.setSourceEntity(129U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(57U);
    msg.name.assign("KKHNXDFGDWSVDDZBKVWPKJYZNSSFPWXSRRXEAOITEFKAMRZSFECAVC");
    msg.value = 200U;

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
    msg.setTimeStamp(0.175867372259);
    msg.setSource(46809U);
    msg.setSourceEntity(240U);
    msg.setDestination(55042U);
    msg.setDestinationEntity(251U);
    msg.name.assign("LKONCIJBABZBCWXRCCOPMTJZMVJEVZHADDWZGNIKLKOEKOVNMVHKILAIPZLUVTHBSLQSNNGAJUGEEMCNLGCJRGUCQTJDPLRRIOYTOFLUKKPFYAXMPWPXGANIUYPWSEWAFBJHPRPWWQAT");
    msg.value = 107U;

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
    msg.setTimeStamp(0.568037249914);
    msg.setSource(22501U);
    msg.setSourceEntity(7U);
    msg.setDestination(44155U);
    msg.setDestinationEntity(111U);
    msg.name.assign("VBLTIYHNEJRCODFYTDUTMOXFHVSBUFEEUWOQRBELQGFVCTKINDHBAXFGCHWEMOTZWNWPPQNUSWPJXU");

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
    msg.setTimeStamp(0.434569915598);
    msg.setSource(1380U);
    msg.setSourceEntity(226U);
    msg.setDestination(62438U);
    msg.setDestinationEntity(199U);
    msg.name.assign("SPIMWUKLOXBTVGIECPQRPKHBOWKZXPMFROQKVZNUHGEVILTCLYMNEUHUBICFXJEMPJYSSXTROJMVOUXYCQYHNHXYNWJJRMTLILLHABIRGFHC");

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
    msg.setTimeStamp(0.175479754037);
    msg.setSource(33247U);
    msg.setSourceEntity(238U);
    msg.setDestination(13067U);
    msg.setDestinationEntity(145U);
    msg.name.assign("ZSTACPSRPSEAZVADIKVMBLFOERSGQEBNWNZXPHUCKGIRAYCUHKWFXERBABQHQGNZTGUGSJJUWLUXMCIXNOBTJWCAHMLECVFYTOWOZSYNOTWUEMFXRGZXNSGQIHFOONTRVKEAUXMDMAGAKH");

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
    msg.setTimeStamp(0.572054151263);
    msg.setSource(10665U);
    msg.setSourceEntity(94U);
    msg.setDestination(61414U);
    msg.setDestinationEntity(84U);
    msg.name.assign("UUUVMMIZBSEAZPKKGXGHEKCQKZOPUTASWKQAJCFZXGXGKPTVVSNVUVOILQAHALZLMAFUUICFJDJCCCIXVFGDWZRGXVNGOGBWXIBEHQQGHLFQHBEPNYTYTYDHCMKTWUOQORHMLSATDVKIINEPMFAQJFAEDPJVTLPMYYRKRISNVRJMYPDELCAMHZSDQZDGPKBNIMBCZRUHWRJLYO");
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
    msg.setTimeStamp(0.911776397084);
    msg.setSource(31962U);
    msg.setSourceEntity(115U);
    msg.setDestination(57259U);
    msg.setDestinationEntity(140U);
    msg.name.assign("FTNMIJZVRQVLFERANAGWFTDWMHDKSZBBKTRLHTECYKWQBQGDDKZOZKOSTDGKFUEEXVATPOQYGBUPWVSISRSHXXJLWNWGLHAZVNVCXIDDPXUUFQGMOBPUBYUPNGVEOWRATKSKZKCYCLLPCXVEIRYMQVJTZIXHWEIXSCOBNINMHBPORXBQJJIQHMZFAAMAQJEGSFYTZYEATUOOI");
    msg.value = 138U;

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
    msg.setTimeStamp(0.283111521735);
    msg.setSource(49423U);
    msg.setSourceEntity(200U);
    msg.setDestination(14396U);
    msg.setDestinationEntity(194U);
    msg.name.assign("FNQOILSQLQFI");
    msg.value = 42U;

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
    msg.setTimeStamp(0.124000382777);
    msg.setSource(61388U);
    msg.setSourceEntity(45U);
    msg.setDestination(23090U);
    msg.setDestinationEntity(236U);
    msg.id = 26U;
    msg.period = 644901374U;
    msg.duty_cycle = 3290714407U;

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
    msg.setTimeStamp(0.456982176797);
    msg.setSource(62831U);
    msg.setSourceEntity(60U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(124U);
    msg.id = 81U;
    msg.period = 2273061686U;
    msg.duty_cycle = 270680447U;

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
    msg.setTimeStamp(0.609141455239);
    msg.setSource(41387U);
    msg.setSourceEntity(96U);
    msg.setDestination(20515U);
    msg.setDestinationEntity(103U);
    msg.id = 93U;
    msg.period = 3655962955U;
    msg.duty_cycle = 827218227U;

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
    msg.setTimeStamp(0.630607402686);
    msg.setSource(55918U);
    msg.setSourceEntity(97U);
    msg.setDestination(17530U);
    msg.setDestinationEntity(62U);
    msg.id = 162U;
    msg.period = 2758554303U;
    msg.duty_cycle = 2348492494U;

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
    msg.setTimeStamp(0.0860220450507);
    msg.setSource(42149U);
    msg.setSourceEntity(168U);
    msg.setDestination(35662U);
    msg.setDestinationEntity(243U);
    msg.id = 233U;
    msg.period = 1756869326U;
    msg.duty_cycle = 2646902152U;

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
    msg.setTimeStamp(0.165801280619);
    msg.setSource(20366U);
    msg.setSourceEntity(39U);
    msg.setDestination(25676U);
    msg.setDestinationEntity(172U);
    msg.id = 195U;
    msg.period = 981233531U;
    msg.duty_cycle = 488389300U;

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
    msg.setTimeStamp(0.0616497145217);
    msg.setSource(18648U);
    msg.setSourceEntity(99U);
    msg.setDestination(56063U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.640219118124;
    msg.lon = 0.284367749506;
    msg.height = 0.0360617661342;
    msg.x = 0.993472835766;
    msg.y = 0.750454269631;
    msg.z = 0.358008906121;
    msg.phi = 0.588336301418;
    msg.theta = 0.96271721008;
    msg.psi = 0.374487615407;
    msg.u = 0.594427152923;
    msg.v = 0.507002345245;
    msg.w = 0.340900404088;
    msg.vx = 0.748248187982;
    msg.vy = 0.375839073809;
    msg.vz = 0.437867623276;
    msg.p = 0.42584084706;
    msg.q = 0.804035263807;
    msg.r = 0.838857253875;
    msg.depth = 0.777550195516;
    msg.alt = 0.317300090675;

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
    msg.setTimeStamp(0.947081258759);
    msg.setSource(357U);
    msg.setSourceEntity(50U);
    msg.setDestination(25039U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.51184404066;
    msg.lon = 0.578867681824;
    msg.height = 0.968981274393;
    msg.x = 0.43848172044;
    msg.y = 0.623087785808;
    msg.z = 0.312266990996;
    msg.phi = 0.711534496675;
    msg.theta = 0.579703545251;
    msg.psi = 0.63956767669;
    msg.u = 0.114020483822;
    msg.v = 0.0621148578686;
    msg.w = 0.637445336481;
    msg.vx = 0.426515681316;
    msg.vy = 0.156949175725;
    msg.vz = 0.604247571678;
    msg.p = 0.602149850115;
    msg.q = 0.170234092254;
    msg.r = 0.5260772524;
    msg.depth = 0.508841362989;
    msg.alt = 0.023219973329;

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
    msg.setTimeStamp(0.935485792415);
    msg.setSource(16671U);
    msg.setSourceEntity(28U);
    msg.setDestination(12800U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.110206530815;
    msg.lon = 0.927434083738;
    msg.height = 0.868846627994;
    msg.x = 0.361510764047;
    msg.y = 0.363175241377;
    msg.z = 0.738024492578;
    msg.phi = 0.456463708532;
    msg.theta = 0.419246848877;
    msg.psi = 0.0803448788569;
    msg.u = 0.83455654669;
    msg.v = 0.495974304281;
    msg.w = 0.566698158478;
    msg.vx = 0.116679314379;
    msg.vy = 0.49269499999;
    msg.vz = 0.728471787698;
    msg.p = 0.793051231014;
    msg.q = 0.73592588807;
    msg.r = 0.98040438733;
    msg.depth = 0.00945355205302;
    msg.alt = 0.170823827988;

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
    msg.setTimeStamp(0.377227554957);
    msg.setSource(40483U);
    msg.setSourceEntity(61U);
    msg.setDestination(55709U);
    msg.setDestinationEntity(34U);
    msg.x = 0.881901273468;
    msg.y = 0.410586491719;
    msg.z = 0.448724357673;

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
    msg.setTimeStamp(0.704722310082);
    msg.setSource(16363U);
    msg.setSourceEntity(126U);
    msg.setDestination(50390U);
    msg.setDestinationEntity(184U);
    msg.x = 0.766598076182;
    msg.y = 0.544764036183;
    msg.z = 0.523407216527;

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
    msg.setTimeStamp(0.785632437205);
    msg.setSource(41271U);
    msg.setSourceEntity(164U);
    msg.setDestination(43291U);
    msg.setDestinationEntity(160U);
    msg.x = 0.779154786754;
    msg.y = 0.797952885461;
    msg.z = 0.545658313809;

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
    msg.setTimeStamp(0.169490953721);
    msg.setSource(8340U);
    msg.setSourceEntity(168U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(146U);
    msg.value = 0.613437419055;

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
    msg.setTimeStamp(0.833638834514);
    msg.setSource(25835U);
    msg.setSourceEntity(66U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(72U);
    msg.value = 0.065681300334;

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
    msg.setTimeStamp(0.184518604938);
    msg.setSource(63336U);
    msg.setSourceEntity(183U);
    msg.setDestination(44278U);
    msg.setDestinationEntity(76U);
    msg.value = 0.449838641854;

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
    msg.setTimeStamp(0.913485440532);
    msg.setSource(51541U);
    msg.setSourceEntity(194U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(52U);
    msg.value = 0.530097145906;

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
    msg.setTimeStamp(0.717353550887);
    msg.setSource(26016U);
    msg.setSourceEntity(4U);
    msg.setDestination(34248U);
    msg.setDestinationEntity(211U);
    msg.value = 0.948550557174;

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
    msg.setTimeStamp(0.498093453232);
    msg.setSource(61689U);
    msg.setSourceEntity(138U);
    msg.setDestination(63161U);
    msg.setDestinationEntity(147U);
    msg.value = 0.774521262326;

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
    msg.setTimeStamp(0.0334354617423);
    msg.setSource(21756U);
    msg.setSourceEntity(127U);
    msg.setDestination(22474U);
    msg.setDestinationEntity(204U);
    msg.x = 0.790159896695;
    msg.y = 0.982118853738;
    msg.z = 0.257114681921;
    msg.phi = 0.496139532862;
    msg.theta = 0.246356974011;
    msg.psi = 0.268115725665;
    msg.p = 0.00728604199925;
    msg.q = 0.514886894301;
    msg.r = 0.962540747089;
    msg.u = 0.636871538681;
    msg.v = 0.499641063381;
    msg.w = 0.424628237814;
    msg.bias_psi = 0.606105227334;
    msg.bias_r = 0.21051510157;

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
    msg.setTimeStamp(0.188644581389);
    msg.setSource(44981U);
    msg.setSourceEntity(157U);
    msg.setDestination(25089U);
    msg.setDestinationEntity(216U);
    msg.x = 0.825392412169;
    msg.y = 0.710995868328;
    msg.z = 0.228536219904;
    msg.phi = 0.607216677497;
    msg.theta = 0.429630598925;
    msg.psi = 0.0355911055536;
    msg.p = 0.104481543388;
    msg.q = 0.280769758442;
    msg.r = 0.0838531645543;
    msg.u = 0.092916874376;
    msg.v = 0.805252280441;
    msg.w = 0.391353982219;
    msg.bias_psi = 0.61661787506;
    msg.bias_r = 0.845337320286;

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
    msg.setTimeStamp(0.970443966758);
    msg.setSource(58346U);
    msg.setSourceEntity(210U);
    msg.setDestination(25279U);
    msg.setDestinationEntity(194U);
    msg.x = 0.435037330318;
    msg.y = 0.395417462026;
    msg.z = 0.818967227741;
    msg.phi = 0.359540102605;
    msg.theta = 0.566146589334;
    msg.psi = 0.247485196134;
    msg.p = 0.271245021733;
    msg.q = 0.541527239476;
    msg.r = 0.829145400137;
    msg.u = 0.0955797918601;
    msg.v = 0.00786239745329;
    msg.w = 0.60047558091;
    msg.bias_psi = 0.906595981659;
    msg.bias_r = 0.695967769709;

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
    msg.setTimeStamp(0.0666423560274);
    msg.setSource(63787U);
    msg.setSourceEntity(217U);
    msg.setDestination(29740U);
    msg.setDestinationEntity(110U);
    msg.bias_psi = 0.435159740437;
    msg.bias_r = 0.618946023325;
    msg.cog = 0.0712155075842;
    msg.cyaw = 0.88084599586;
    msg.lbl_rej_level = 0.0927373302346;
    msg.gps_rej_level = 0.647686208467;
    msg.custom_x = 0.175037854695;
    msg.custom_y = 0.0127766382794;
    msg.custom_z = 0.132459326426;

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
    msg.setTimeStamp(0.807677633349);
    msg.setSource(57095U);
    msg.setSourceEntity(80U);
    msg.setDestination(44297U);
    msg.setDestinationEntity(251U);
    msg.bias_psi = 0.303425785474;
    msg.bias_r = 0.784033293187;
    msg.cog = 0.553662973253;
    msg.cyaw = 0.0457139700547;
    msg.lbl_rej_level = 0.245733716895;
    msg.gps_rej_level = 0.136245540722;
    msg.custom_x = 0.597553816843;
    msg.custom_y = 0.627000018726;
    msg.custom_z = 0.0448322235718;

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
    msg.setTimeStamp(0.235481920605);
    msg.setSource(30206U);
    msg.setSourceEntity(186U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.162760394957;
    msg.bias_r = 0.723083344188;
    msg.cog = 0.409287797214;
    msg.cyaw = 0.375251512326;
    msg.lbl_rej_level = 0.109082359406;
    msg.gps_rej_level = 0.309449150357;
    msg.custom_x = 0.262950732444;
    msg.custom_y = 0.191087036608;
    msg.custom_z = 0.688790362618;

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
    msg.setTimeStamp(0.660508022599);
    msg.setSource(58214U);
    msg.setSourceEntity(89U);
    msg.setDestination(63841U);
    msg.setDestinationEntity(128U);
    msg.utc_time = 0.235801929362;
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
    msg.setTimeStamp(0.170407761495);
    msg.setSource(1072U);
    msg.setSourceEntity(52U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(28U);
    msg.utc_time = 0.362633642284;
    msg.reason = 227U;

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
    msg.setTimeStamp(0.93129717213);
    msg.setSource(28571U);
    msg.setSourceEntity(136U);
    msg.setDestination(10948U);
    msg.setDestinationEntity(203U);
    msg.utc_time = 0.445270136062;
    msg.reason = 114U;

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
    msg.setTimeStamp(0.204998865171);
    msg.setSource(47824U);
    msg.setSourceEntity(139U);
    msg.setDestination(5139U);
    msg.setDestinationEntity(102U);
    msg.id = 165U;
    msg.range = 0.861044898979;
    msg.acceptance = 39U;

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
    msg.setTimeStamp(0.885088963881);
    msg.setSource(2173U);
    msg.setSourceEntity(131U);
    msg.setDestination(61876U);
    msg.setDestinationEntity(246U);
    msg.id = 172U;
    msg.range = 0.499503191931;
    msg.acceptance = 225U;

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
    msg.setTimeStamp(0.0892592860194);
    msg.setSource(64988U);
    msg.setSourceEntity(225U);
    msg.setDestination(13565U);
    msg.setDestinationEntity(234U);
    msg.id = 228U;
    msg.range = 0.700512185468;
    msg.acceptance = 28U;

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
    msg.setTimeStamp(0.95859763568);
    msg.setSource(42148U);
    msg.setSourceEntity(178U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(203U);
    msg.type = 62U;
    msg.reason = 75U;
    msg.value = 0.963037563896;
    msg.timestep = 0.827243766295;

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
    msg.setTimeStamp(0.918379921428);
    msg.setSource(6130U);
    msg.setSourceEntity(33U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(123U);
    msg.type = 157U;
    msg.reason = 104U;
    msg.value = 0.286618488948;
    msg.timestep = 0.260998110692;

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
    msg.setTimeStamp(0.22737131048);
    msg.setSource(52385U);
    msg.setSourceEntity(86U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(227U);
    msg.type = 231U;
    msg.reason = 221U;
    msg.value = 0.98706723012;
    msg.timestep = 0.519715321984;

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
    msg.setTimeStamp(0.840597108779);
    msg.setSource(42747U);
    msg.setSourceEntity(40U);
    msg.setDestination(3450U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.549229284984);
    msg.setSource(61911U);
    msg.setSourceEntity(103U);
    msg.setDestination(42875U);
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
    msg.setTimeStamp(0.769448120629);
    msg.setSource(20774U);
    msg.setSourceEntity(9U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.723468140993);
    msg.setSource(23902U);
    msg.setSourceEntity(114U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(73U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KSRPNOUTYQCSWTTHMFQVHGAPQXFOJPLKBFOWLLCVZEEBPKIEESNHARQJRBLWOEIAWHCVCGIKLJIRXYCRZJMRNVYDPRXPNADHGTSFAMYCEPHEMZHNY");
    tmp_msg_0.lat = 0.609141207696;
    tmp_msg_0.lon = 0.390646150491;
    tmp_msg_0.depth = 0.322354504563;
    tmp_msg_0.query_channel = 113U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 103U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.803641585456;
    msg.y = 0.643210699684;
    msg.var_x = 0.653100288473;
    msg.var_y = 0.272772882467;
    msg.distance = 0.899685024353;

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
    msg.setTimeStamp(0.242850183529);
    msg.setSource(58992U);
    msg.setSourceEntity(217U);
    msg.setDestination(54576U);
    msg.setDestinationEntity(80U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DKMGFDVSSDPWOHEZZABRWRCPCYIRZHLLUIILFVPMBNAWDHVYBTECXTFRCRZLGPAVKQIEMVIBFROHHQKWHLUMXPOVSJJQMQKBPFZYLTUAFQQPJJZVUXPJGKAH");
    tmp_msg_0.lat = 0.571750482362;
    tmp_msg_0.lon = 0.414340498734;
    tmp_msg_0.depth = 0.146519839473;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 135U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.347518979085;
    msg.y = 0.0970357992631;
    msg.var_x = 0.485556100491;
    msg.var_y = 0.172113567883;
    msg.distance = 0.0355024182933;

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
    msg.setTimeStamp(0.36893686308);
    msg.setSource(28803U);
    msg.setSourceEntity(211U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(169U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FCWTSMNHEANCTLHYWNGYEKJVNIDUGTXQLUYPSMBRFNYAZRCQWHVUHFDGFUUEKCTHQAUIRNPWTBCESWGFOKOJUTUSVQBUSSQLRUFHHWBWVEVAMODRTPZCOBTSDKDEDBCXHKXASQRTLKDZHOFVNJAQMGZRPXGDYZZPCQICYRKEGEWDWMCIJEBGOILBKYRNLSIYESJOGVZPIANRKJHYXMMTXLXOIMMXLGVZQBWY");
    tmp_msg_0.lat = 0.361309603715;
    tmp_msg_0.lon = 0.0965075061302;
    tmp_msg_0.depth = 0.736778496504;
    tmp_msg_0.query_channel = 58U;
    tmp_msg_0.reply_channel = 201U;
    tmp_msg_0.transponder_delay = 73U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.58361044248;
    msg.y = 0.768110450034;
    msg.var_x = 0.63466270151;
    msg.var_y = 0.399200297296;
    msg.distance = 0.180176091177;

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
    msg.setTimeStamp(0.811162984305);
    msg.setSource(14598U);
    msg.setSourceEntity(91U);
    msg.setDestination(25284U);
    msg.setDestinationEntity(18U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.797953684608);
    msg.setSource(9028U);
    msg.setSourceEntity(55U);
    msg.setDestination(51993U);
    msg.setDestinationEntity(58U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.895596407539);
    msg.setSource(17610U);
    msg.setSourceEntity(35U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(159U);
    msg.state = 90U;

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
    msg.setTimeStamp(0.973963372877);
    msg.setSource(27317U);
    msg.setSourceEntity(59U);
    msg.setDestination(60251U);
    msg.setDestinationEntity(243U);
    msg.x = 0.5930980683;
    msg.y = 0.774295806941;
    msg.z = 0.682060904167;

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
    msg.setTimeStamp(0.613653172248);
    msg.setSource(40958U);
    msg.setSourceEntity(158U);
    msg.setDestination(5605U);
    msg.setDestinationEntity(52U);
    msg.x = 0.338416146609;
    msg.y = 0.513868099786;
    msg.z = 0.703159746433;

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
    msg.setTimeStamp(0.51194325524);
    msg.setSource(40433U);
    msg.setSourceEntity(76U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(169U);
    msg.x = 0.735669266024;
    msg.y = 0.770194358609;
    msg.z = 0.297222794354;

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
    msg.setTimeStamp(0.597060542488);
    msg.setSource(7873U);
    msg.setSourceEntity(82U);
    msg.setDestination(47431U);
    msg.setDestinationEntity(104U);
    msg.value = 0.748439806287;

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
    msg.setTimeStamp(0.735137514856);
    msg.setSource(11894U);
    msg.setSourceEntity(169U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(35U);
    msg.value = 0.00237907361504;

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
    msg.setTimeStamp(0.609230429395);
    msg.setSource(39384U);
    msg.setSourceEntity(15U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(81U);
    msg.value = 0.218685650215;

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
    msg.setTimeStamp(0.675537480659);
    msg.setSource(62608U);
    msg.setSourceEntity(54U);
    msg.setDestination(51918U);
    msg.setDestinationEntity(43U);
    msg.value = 0.158051215101;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.172416422617);
    msg.setSource(10092U);
    msg.setSourceEntity(34U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(223U);
    msg.value = 0.471725735453;
    msg.z_units = 141U;

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
    msg.setTimeStamp(0.491730225875);
    msg.setSource(62487U);
    msg.setSourceEntity(200U);
    msg.setDestination(1048U);
    msg.setDestinationEntity(65U);
    msg.value = 0.242160558189;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.350173671164);
    msg.setSource(15327U);
    msg.setSourceEntity(68U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(125U);
    msg.value = 0.52949110721;
    msg.speed_units = 124U;

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
    msg.setTimeStamp(0.564757247574);
    msg.setSource(41846U);
    msg.setSourceEntity(3U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(66U);
    msg.value = 0.364601344267;
    msg.speed_units = 22U;

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
    msg.setTimeStamp(0.991655095713);
    msg.setSource(48980U);
    msg.setSourceEntity(4U);
    msg.setDestination(46657U);
    msg.setDestinationEntity(202U);
    msg.value = 0.195967021398;
    msg.speed_units = 20U;

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
    msg.setTimeStamp(0.558693819241);
    msg.setSource(27446U);
    msg.setSourceEntity(254U);
    msg.setDestination(12271U);
    msg.setDestinationEntity(35U);
    msg.value = 0.889422617986;

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
    msg.setTimeStamp(0.72784955084);
    msg.setSource(55272U);
    msg.setSourceEntity(192U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(218U);
    msg.value = 0.480106043124;

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
    msg.setTimeStamp(0.263533661576);
    msg.setSource(57395U);
    msg.setSourceEntity(75U);
    msg.setDestination(21914U);
    msg.setDestinationEntity(114U);
    msg.value = 0.763872111489;

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
    msg.setTimeStamp(0.170819353556);
    msg.setSource(10503U);
    msg.setSourceEntity(252U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(235U);
    msg.value = 0.667769075115;

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
    msg.setTimeStamp(0.385040522527);
    msg.setSource(21791U);
    msg.setSourceEntity(233U);
    msg.setDestination(25572U);
    msg.setDestinationEntity(180U);
    msg.value = 0.905997674394;

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
    msg.setTimeStamp(0.163963618264);
    msg.setSource(33022U);
    msg.setSourceEntity(133U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(128U);
    msg.value = 0.333944102077;

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
    msg.setTimeStamp(0.0296011650851);
    msg.setSource(10699U);
    msg.setSourceEntity(185U);
    msg.setDestination(52000U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5286437222;

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
    msg.setTimeStamp(0.882256761643);
    msg.setSource(13411U);
    msg.setSourceEntity(197U);
    msg.setDestination(16378U);
    msg.setDestinationEntity(110U);
    msg.value = 0.388311892925;

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
    msg.setTimeStamp(0.81763193121);
    msg.setSource(42287U);
    msg.setSourceEntity(188U);
    msg.setDestination(42755U);
    msg.setDestinationEntity(204U);
    msg.value = 0.620395206942;

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
    msg.setTimeStamp(0.382582976892);
    msg.setSource(731U);
    msg.setSourceEntity(1U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(6U);
    msg.start_lat = 0.317645058081;
    msg.start_lon = 0.397146067092;
    msg.start_z = 0.818079393408;
    msg.start_z_units = 214U;
    msg.end_lat = 0.226916603833;
    msg.end_lon = 0.0866117817869;
    msg.end_z = 0.535549865743;
    msg.end_z_units = 111U;
    msg.speed = 0.78056231055;
    msg.speed_units = 206U;
    msg.lradius = 0.140607402219;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.656717644146);
    msg.setSource(32618U);
    msg.setSourceEntity(209U);
    msg.setDestination(51703U);
    msg.setDestinationEntity(37U);
    msg.start_lat = 0.575107299741;
    msg.start_lon = 0.866057012711;
    msg.start_z = 0.00245483954025;
    msg.start_z_units = 95U;
    msg.end_lat = 0.465187757904;
    msg.end_lon = 0.669464126187;
    msg.end_z = 0.669561616466;
    msg.end_z_units = 210U;
    msg.speed = 0.146830749633;
    msg.speed_units = 16U;
    msg.lradius = 0.177168439924;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.492280024521);
    msg.setSource(303U);
    msg.setSourceEntity(191U);
    msg.setDestination(2403U);
    msg.setDestinationEntity(236U);
    msg.start_lat = 0.317328617003;
    msg.start_lon = 0.255717165645;
    msg.start_z = 0.993331709924;
    msg.start_z_units = 110U;
    msg.end_lat = 0.662919849937;
    msg.end_lon = 0.0736007562665;
    msg.end_z = 0.9534048088;
    msg.end_z_units = 93U;
    msg.speed = 0.833292522321;
    msg.speed_units = 16U;
    msg.lradius = 0.62074271078;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.163989593343);
    msg.setSource(10080U);
    msg.setSourceEntity(94U);
    msg.setDestination(5199U);
    msg.setDestinationEntity(2U);
    msg.x = 0.6115970226;
    msg.y = 0.692000564221;
    msg.z = 0.661094624985;
    msg.k = 0.811463829236;
    msg.m = 0.138745722442;
    msg.n = 0.0430154927776;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.346390174722);
    msg.setSource(41502U);
    msg.setSourceEntity(228U);
    msg.setDestination(24608U);
    msg.setDestinationEntity(225U);
    msg.x = 0.885568985563;
    msg.y = 0.263069566473;
    msg.z = 0.194321193414;
    msg.k = 0.0391978609499;
    msg.m = 0.101692743716;
    msg.n = 0.256981334901;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.255195616026);
    msg.setSource(44820U);
    msg.setSourceEntity(105U);
    msg.setDestination(63364U);
    msg.setDestinationEntity(177U);
    msg.x = 0.517840126552;
    msg.y = 0.383774762063;
    msg.z = 0.447989308872;
    msg.k = 0.559300386842;
    msg.m = 0.288774524326;
    msg.n = 0.20819107289;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.0355160225194);
    msg.setSource(14156U);
    msg.setSourceEntity(109U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0960326059996;

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
    msg.setTimeStamp(0.0960022582258);
    msg.setSource(16709U);
    msg.setSourceEntity(75U);
    msg.setDestination(14783U);
    msg.setDestinationEntity(146U);
    msg.value = 0.39905441045;

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
    msg.setTimeStamp(0.483448789533);
    msg.setSource(45290U);
    msg.setSourceEntity(115U);
    msg.setDestination(3171U);
    msg.setDestinationEntity(249U);
    msg.value = 0.52344008294;

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
    msg.setTimeStamp(0.590121227045);
    msg.setSource(41063U);
    msg.setSourceEntity(128U);
    msg.setDestination(41106U);
    msg.setDestinationEntity(247U);
    msg.u = 0.703593664616;
    msg.v = 0.309451797815;
    msg.w = 0.570393437516;
    msg.p = 0.326013604361;
    msg.q = 0.807267819438;
    msg.r = 0.121531693885;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.134337707487);
    msg.setSource(35645U);
    msg.setSourceEntity(253U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(5U);
    msg.u = 0.75455457737;
    msg.v = 0.139052310237;
    msg.w = 0.57440543037;
    msg.p = 0.457551885721;
    msg.q = 0.771023641008;
    msg.r = 0.00624942944771;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.670719870028);
    msg.setSource(20147U);
    msg.setSourceEntity(95U);
    msg.setDestination(14543U);
    msg.setDestinationEntity(214U);
    msg.u = 0.65860830215;
    msg.v = 0.0660408053867;
    msg.w = 0.846788077785;
    msg.p = 0.579396091971;
    msg.q = 0.569697123923;
    msg.r = 0.875606778337;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.35362646488);
    msg.setSource(13866U);
    msg.setSourceEntity(132U);
    msg.setDestination(7172U);
    msg.setDestinationEntity(249U);
    msg.start_lat = 0.748722042528;
    msg.start_lon = 0.245185086603;
    msg.start_z = 0.241184591574;
    msg.start_z_units = 86U;
    msg.end_lat = 0.416475389961;
    msg.end_lon = 0.73942457594;
    msg.end_z = 0.861089829413;
    msg.end_z_units = 12U;
    msg.lradius = 0.284569729139;
    msg.flags = 193U;
    msg.x = 0.128660765196;
    msg.y = 0.161684653561;
    msg.z = 0.479443326736;
    msg.vx = 0.577725583665;
    msg.vy = 0.562153103856;
    msg.vz = 0.848803953682;
    msg.course_error = 0.830855406414;
    msg.eta = 51819U;

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
    msg.setTimeStamp(0.196672326077);
    msg.setSource(25452U);
    msg.setSourceEntity(153U);
    msg.setDestination(33090U);
    msg.setDestinationEntity(102U);
    msg.start_lat = 0.676993031427;
    msg.start_lon = 0.23954496436;
    msg.start_z = 0.060683195949;
    msg.start_z_units = 160U;
    msg.end_lat = 0.534059492768;
    msg.end_lon = 0.40366470016;
    msg.end_z = 0.753078824739;
    msg.end_z_units = 73U;
    msg.lradius = 0.913920466123;
    msg.flags = 5U;
    msg.x = 0.371972716822;
    msg.y = 0.331997619289;
    msg.z = 0.483861449105;
    msg.vx = 0.803294859259;
    msg.vy = 0.826254815881;
    msg.vz = 0.982209156942;
    msg.course_error = 0.293800692554;
    msg.eta = 25199U;

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
    msg.setTimeStamp(0.0714715956114);
    msg.setSource(54946U);
    msg.setSourceEntity(102U);
    msg.setDestination(45171U);
    msg.setDestinationEntity(109U);
    msg.start_lat = 0.304833414936;
    msg.start_lon = 0.0220472738441;
    msg.start_z = 0.370657174503;
    msg.start_z_units = 197U;
    msg.end_lat = 0.862861724558;
    msg.end_lon = 0.379998566845;
    msg.end_z = 0.418565796011;
    msg.end_z_units = 9U;
    msg.lradius = 0.831970892356;
    msg.flags = 136U;
    msg.x = 0.31257858214;
    msg.y = 0.386055318426;
    msg.z = 0.16609032036;
    msg.vx = 0.842070621842;
    msg.vy = 0.610750041492;
    msg.vz = 0.334888826874;
    msg.course_error = 0.141086895632;
    msg.eta = 4509U;

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
    msg.setTimeStamp(0.500912065826);
    msg.setSource(60182U);
    msg.setSourceEntity(205U);
    msg.setDestination(56962U);
    msg.setDestinationEntity(134U);
    msg.k = 0.646385331823;
    msg.m = 0.438123834461;
    msg.n = 0.948777307997;

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
    msg.setTimeStamp(0.880216793482);
    msg.setSource(36071U);
    msg.setSourceEntity(15U);
    msg.setDestination(43780U);
    msg.setDestinationEntity(144U);
    msg.k = 0.395286511211;
    msg.m = 0.607466316932;
    msg.n = 0.0455960053984;

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
    msg.setTimeStamp(0.270618547254);
    msg.setSource(15674U);
    msg.setSourceEntity(47U);
    msg.setDestination(18606U);
    msg.setDestinationEntity(120U);
    msg.k = 0.400211747139;
    msg.m = 0.825536262736;
    msg.n = 0.125340118426;

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
    msg.setTimeStamp(0.0347330465225);
    msg.setSource(5471U);
    msg.setSourceEntity(166U);
    msg.setDestination(52736U);
    msg.setDestinationEntity(182U);
    msg.p = 0.985272983333;
    msg.i = 0.599993588914;
    msg.d = 0.889331599109;
    msg.a = 0.795126311291;

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
    msg.setTimeStamp(0.155117920522);
    msg.setSource(5714U);
    msg.setSourceEntity(118U);
    msg.setDestination(40385U);
    msg.setDestinationEntity(177U);
    msg.p = 0.0943649128553;
    msg.i = 0.0146365362117;
    msg.d = 0.477052988959;
    msg.a = 0.000575028073688;

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
    msg.setTimeStamp(0.192266070499);
    msg.setSource(36556U);
    msg.setSourceEntity(153U);
    msg.setDestination(2328U);
    msg.setDestinationEntity(76U);
    msg.p = 0.772898891606;
    msg.i = 0.874779184642;
    msg.d = 0.340273251416;
    msg.a = 0.85383344696;

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
    msg.setTimeStamp(0.755865356676);
    msg.setSource(22222U);
    msg.setSourceEntity(66U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(217U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.15505256556);
    msg.setSource(54842U);
    msg.setSourceEntity(234U);
    msg.setDestination(48557U);
    msg.setDestinationEntity(188U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.751417000714);
    msg.setSource(9825U);
    msg.setSourceEntity(2U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(17U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.838602327979);
    msg.setSource(50974U);
    msg.setSourceEntity(82U);
    msg.setDestination(43806U);
    msg.setDestinationEntity(100U);
    msg.timeout = 38371U;
    msg.lat = 0.627363022634;
    msg.lon = 0.0147178142093;
    msg.z = 0.0732176662068;
    msg.z_units = 239U;
    msg.speed = 0.56616384387;
    msg.speed_units = 231U;
    msg.roll = 0.177277192588;
    msg.pitch = 0.776878372521;
    msg.yaw = 0.189537910146;
    msg.custom.assign("NDRKVZBMSNKYPTAWOOJGSASPYCAEAXBMBDXSPGBCZBVMPIDFGVAVQRORNWHLYCUDNOYXFDDSKLQQLJILDGGHLAWWHICJQSVWTREFSKEJHFHCRRBZIFTGGXFUHDAPAIEBPTWCLJEFFRZMQXQUTXFBLOSATJZCMMNEIPXVUURGMSWQKKXEUIBGZYBOCLOTUWKQDTGWSYIRMEUEQJZPCOKNKZTJJ");

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
    msg.setTimeStamp(0.393108417361);
    msg.setSource(36194U);
    msg.setSourceEntity(3U);
    msg.setDestination(46365U);
    msg.setDestinationEntity(222U);
    msg.timeout = 28852U;
    msg.lat = 0.772778354063;
    msg.lon = 0.454429604785;
    msg.z = 0.461962011808;
    msg.z_units = 148U;
    msg.speed = 0.977019089155;
    msg.speed_units = 251U;
    msg.roll = 0.453989150674;
    msg.pitch = 0.139321363049;
    msg.yaw = 0.822653727891;
    msg.custom.assign("FILELDZYBPRJBRHIRSKXOUTZIAZHQEPUIERPNVQQRJSOOZUPHXBQKAETYBNQOEYWJZNCAVYLYLIWFRSWNGBXL");

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
    msg.setTimeStamp(0.547101373291);
    msg.setSource(23304U);
    msg.setSourceEntity(141U);
    msg.setDestination(49237U);
    msg.setDestinationEntity(158U);
    msg.timeout = 23950U;
    msg.lat = 0.136870466267;
    msg.lon = 0.454529863365;
    msg.z = 0.385926507405;
    msg.z_units = 226U;
    msg.speed = 0.00464287432142;
    msg.speed_units = 46U;
    msg.roll = 0.575456586872;
    msg.pitch = 0.825950177076;
    msg.yaw = 0.617492561009;
    msg.custom.assign("TVKCPILLSGTREZICITOSJHJFKEWKWRBJCNXNGBTHROUGWPDCKSJQORJEVFQCMOIRISNFUPEEBDZBSZGHKWYXNXJLATOICBYKM");

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
    msg.setTimeStamp(0.762104756104);
    msg.setSource(33281U);
    msg.setSourceEntity(166U);
    msg.setDestination(52273U);
    msg.setDestinationEntity(17U);
    msg.timeout = 51933U;
    msg.lat = 0.368007523153;
    msg.lon = 0.793784021396;
    msg.z = 0.0261635187752;
    msg.z_units = 166U;
    msg.speed = 0.193593770367;
    msg.speed_units = 254U;
    msg.duration = 35059U;
    msg.radius = 0.0259806355416;
    msg.flags = 120U;
    msg.custom.assign("MUNSFUFYADERWOYXXUZHVPKQKLCXZTGSKSUJYDOQMLWXBPLOFNCSWJEOJTSNYHCCUDLJFMQMNHOKYHJIGKZVLXNXPNTPAIMSZTVBWVHABBAPXESNITEKFDQEVTWYLACZGUQDORDOIFFPXOSIMEAHXQUIGUYBGEGUJBNGRLQCFBEKPKYMQRVUOSNDFDKWLCGTWWQIRWGJQRZ");

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
    msg.setTimeStamp(0.643112342363);
    msg.setSource(18947U);
    msg.setSourceEntity(179U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(241U);
    msg.timeout = 20001U;
    msg.lat = 0.244011522647;
    msg.lon = 0.119134263284;
    msg.z = 0.0886095535474;
    msg.z_units = 251U;
    msg.speed = 0.75624621789;
    msg.speed_units = 231U;
    msg.duration = 18201U;
    msg.radius = 0.200479032533;
    msg.flags = 9U;
    msg.custom.assign("DGZEMFBVHNSSMJNHXTMBSCBHOJBNEMATOFFKXLFULVRAZBIJQKUPSXMETTXJPYSPIGDWSWTRDYQLBKFMBHJOEQPDUNDYMZPHXGTCLVBCCVKMIAEJHGQWPIVJVKRMLAVODUNWIEDOOFWVZSHDGSSGWE");

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
    msg.setTimeStamp(0.187064706811);
    msg.setSource(20563U);
    msg.setSourceEntity(159U);
    msg.setDestination(40497U);
    msg.setDestinationEntity(130U);
    msg.timeout = 54311U;
    msg.lat = 0.402858273395;
    msg.lon = 0.501672358576;
    msg.z = 0.911554675535;
    msg.z_units = 112U;
    msg.speed = 0.583106547252;
    msg.speed_units = 151U;
    msg.duration = 39560U;
    msg.radius = 0.224398952878;
    msg.flags = 147U;
    msg.custom.assign("LCTWDSPWRTPDBCHQQUJEGCMYVEBHIQSURFTQIAZZQDFIMKVLSKXPEMKHGPVXBNGOICRJFKSAWFGFRCZJFKOEHNXYYPHWIWLVTKLLBJYETBPPPQHSLBMOUSSTFUVMTOBGQLDOMAUUUCFXQSYUOJJVNWJKZIKGLZWIJNNWYXGORW");

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
    msg.setTimeStamp(0.0817342835075);
    msg.setSource(18613U);
    msg.setSourceEntity(225U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(55U);
    msg.custom.assign("AYFUGSICLULVHGIDFXQTMUHNVBBRMKUDKPRJRWHWQAESDHSSJWTYJSGMOCZXCKFHQGPUMSRKQAMAFVADFYZSPASZIUFNNYLWJVOONQRMGIXJWCFOUNXCCCEANZHKGGTOWVDUBDLTJQVBLWMQEZFCIXRDODPHNMPZEAXVJXSTDXOPGUTSEFAICYZUCMQHJYYTEZEKKOBQTPYGBYRTWPBGKRPL");

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
    msg.setTimeStamp(0.883185367441);
    msg.setSource(28531U);
    msg.setSourceEntity(152U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(232U);
    msg.custom.assign("MCRKZBETSQLVBYFAFGTLEVNCCXOAGDPAXXHXCNMRHOMAQOSBHHHDJZBXYZVBHKHISDNTXAREYENMSCMYVKQAIWFKIGFPSEHHGOYTWWOTUWPGUBZGQBYUYOUDHUWDNLNZSBPTICDZQSKITKOTMTCJBAGLMZVLTPFVCJ");

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
    msg.setTimeStamp(0.12732408479);
    msg.setSource(19923U);
    msg.setSourceEntity(12U);
    msg.setDestination(60670U);
    msg.setDestinationEntity(245U);
    msg.custom.assign("HNHPKQYOQWDXWBTFVUZWAEGMGAKKHRFICTWGLBFCEVTTSYCJYBORQLGWOACTJ");

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
    msg.setTimeStamp(0.449741981679);
    msg.setSource(18149U);
    msg.setSourceEntity(15U);
    msg.setDestination(143U);
    msg.setDestinationEntity(215U);
    msg.timeout = 44586U;
    msg.lat = 0.407577172004;
    msg.lon = 0.268832246866;
    msg.z = 0.191505882852;
    msg.z_units = 195U;
    msg.duration = 26750U;
    msg.speed = 0.382539080808;
    msg.speed_units = 101U;
    msg.type = 239U;
    msg.radius = 0.100876516659;
    msg.length = 0.771336165031;
    msg.bearing = 0.267640323338;
    msg.direction = 62U;
    msg.custom.assign("FTKLCAQEAPOYMSNCWZILUDLNOQFVGOHAVCKXFZXGCQVDVDTVRDRHGGUBZTWCOYWNQMUMWAIREDTISNUYMZMEFDZWPIXAUVVDZXHXLTQRGYUPZIBXTQHJXCPWVSTEAFQWFSQHKPCPTNEPHRBVIDLUYVKHSGJJMLJLSKNYTINBREANGFXYDOIUJGZLSBITBQKJCZXXLJYKYBRPLBREWBJOCNKOEMRKEMRMSFPKOWSQA");

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
    msg.setTimeStamp(0.686041033525);
    msg.setSource(17868U);
    msg.setSourceEntity(128U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(13U);
    msg.timeout = 30250U;
    msg.lat = 0.014931843949;
    msg.lon = 0.360496586438;
    msg.z = 0.951398321158;
    msg.z_units = 193U;
    msg.duration = 21898U;
    msg.speed = 0.254379980255;
    msg.speed_units = 221U;
    msg.type = 44U;
    msg.radius = 0.989753059402;
    msg.length = 0.65274943276;
    msg.bearing = 0.628248552386;
    msg.direction = 70U;
    msg.custom.assign("PIMITBAKDKWPGOIKCZXFSJPPVAMUVVDJOZWNHLURUQEYTCFXJYFONIOEJFUCSZGXEH");

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
    msg.setTimeStamp(0.221392158126);
    msg.setSource(1210U);
    msg.setSourceEntity(233U);
    msg.setDestination(16679U);
    msg.setDestinationEntity(58U);
    msg.timeout = 2836U;
    msg.lat = 0.895996970665;
    msg.lon = 0.521300351121;
    msg.z = 0.16117687111;
    msg.z_units = 198U;
    msg.duration = 36699U;
    msg.speed = 0.426352489676;
    msg.speed_units = 149U;
    msg.type = 79U;
    msg.radius = 0.480088223553;
    msg.length = 0.18814183785;
    msg.bearing = 0.350846039612;
    msg.direction = 207U;
    msg.custom.assign("JRXIKDDHYDWEVKRDPVLMQKCGVPIVRDQOXUUHMJYBHBFLEYEYZTASFWHLWNJWNWRDHVLUCLXZPTOGFIMMPTTSIOBZAWLQEJYMONSOEXSEFHUIKUXPUISRBEXLMRNMQKFSVOIKZSTHJCKBXZHDQGWBAULASMVPSWIQOCFZTBYCGRQNMVAPDQTBEUFGARQZCX");

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
    msg.setTimeStamp(0.577448030905);
    msg.setSource(9551U);
    msg.setSourceEntity(221U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(214U);
    msg.duration = 20682U;
    msg.custom.assign("DOHAEVATDGIMYFFNLXLWFSGXBKJKPEHYOMGWNZCEKJSKAHTXFXPNGZRXUCQMCWYUIZGYIJWUBGDERTYWVSAJFVUOFKBHDQVPSKXWOUCECRTBQSQRWZIPZCNDSSOQXUNPKEMIBTFHRDY");

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
    msg.setTimeStamp(0.401990982022);
    msg.setSource(22412U);
    msg.setSourceEntity(115U);
    msg.setDestination(3638U);
    msg.setDestinationEntity(9U);
    msg.duration = 41657U;
    msg.custom.assign("FXYPMQFKCXLWBIQUYKNNAEMTVCSYPOBCUORVPMLWMTVKENWUAHMSHZDQQWIYZLTXPOCF");

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
    msg.setTimeStamp(0.281207389779);
    msg.setSource(8035U);
    msg.setSourceEntity(24U);
    msg.setDestination(33818U);
    msg.setDestinationEntity(119U);
    msg.duration = 8451U;
    msg.custom.assign("POAHOZNMEAGPFUYNJDLLNIISBQOKNPVWLWQJMJXUXSFVHYGUMFLXRREMM");

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
    msg.setTimeStamp(0.309253209452);
    msg.setSource(9161U);
    msg.setSourceEntity(175U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(43U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.732320315094;
    msg.control.set(tmp_msg_0);
    msg.duration = 52313U;
    msg.custom.assign("CZMWYPEHEQKLURUAINWJHUVXBFSJTLQJGOXWPYXGAEAGEQXSNOYDDYVKSLIWFKJVZPZMHHSSTPWQGWMONVNFNVBFLRURTQAMBXQGFFRPVMHTZSUPRCIFHEWIDPYUBGTUALTQTKXPVLNRADCSJJLMVDYUNCVQHXLHWBAOKUABIJVGMOEOZKYDFNIZAEJBMBBZBLQRIDUKSWCOHIKRXOCPEORTIEFYGCZSMPZGYFLSDTXJGJ");

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
    msg.setTimeStamp(0.81554166165);
    msg.setSource(16879U);
    msg.setSourceEntity(31U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(239U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.225210918406;
    msg.control.set(tmp_msg_0);
    msg.duration = 39337U;
    msg.custom.assign("HJWKLWKSNUZOOJKGDZDDOSBEUMTEXARQXQIMPHIVGHJIASATH");

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
    msg.setTimeStamp(0.97629049756);
    msg.setSource(49665U);
    msg.setSourceEntity(72U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(118U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.221933282293;
    tmp_msg_0.z_units = 57U;
    msg.control.set(tmp_msg_0);
    msg.duration = 27066U;
    msg.custom.assign("JFPULOEETMZQGFYYNQXDYXLZHAIBMBOMGTSJJPSWBZWMXMZWUVDSUCACXLIKHODWKGICXVPJRSLTKCBRPHJXSRVOUWQQMOFPCHOMFZQKQREGIGSLCZJCQHHOWEIBFUVS");

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
    msg.setTimeStamp(0.475988824466);
    msg.setSource(42793U);
    msg.setSourceEntity(161U);
    msg.setDestination(58883U);
    msg.setDestinationEntity(160U);
    msg.timeout = 30160U;
    msg.lat = 0.916568921502;
    msg.lon = 0.956055929263;
    msg.z = 0.360362885834;
    msg.z_units = 202U;
    msg.speed = 0.240460390552;
    msg.speed_units = 119U;
    msg.bearing = 0.881423928456;
    msg.cross_angle = 0.00225988443247;
    msg.width = 0.875401907998;
    msg.length = 0.0617078342873;
    msg.hstep = 0.967238587624;
    msg.coff = 147U;
    msg.alternation = 191U;
    msg.flags = 131U;
    msg.custom.assign("LJEIHGEQRMSUPPZAXYPPBFBGYZFOFJYHZLWUCTCNPYJKZFDGOSOCTCLFATNKZKBSVVJIEAZCYMZGXWCVQVDWJFLPOXQHMEXEYETMLRIAUPKQU");

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
    msg.setTimeStamp(0.573659483704);
    msg.setSource(28529U);
    msg.setSourceEntity(36U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(1U);
    msg.timeout = 211U;
    msg.lat = 0.949874767561;
    msg.lon = 0.833308047825;
    msg.z = 0.291368055178;
    msg.z_units = 6U;
    msg.speed = 0.234325239988;
    msg.speed_units = 121U;
    msg.bearing = 0.17563842307;
    msg.cross_angle = 0.242686757314;
    msg.width = 0.599867082965;
    msg.length = 0.355567981908;
    msg.hstep = 0.849537430673;
    msg.coff = 236U;
    msg.alternation = 142U;
    msg.flags = 227U;
    msg.custom.assign("ZGIRZUNOLGJWNTKQDNLFEYAGROSOSIVJMUVLMOFUUQAHOVWDALCVVLOQWESSRNIYXGDWGRBBVMOHMGRYEBHCMAYPTCLSKJJSTKZIZGZXTWYLUXBQWCAJVDKETLURBFPWPDGYXCNUBSCAQOJYSDO");

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
    msg.setTimeStamp(0.157669305544);
    msg.setSource(52975U);
    msg.setSourceEntity(4U);
    msg.setDestination(28669U);
    msg.setDestinationEntity(90U);
    msg.timeout = 13670U;
    msg.lat = 0.890116290583;
    msg.lon = 0.228806211122;
    msg.z = 0.626860459406;
    msg.z_units = 106U;
    msg.speed = 0.64422941932;
    msg.speed_units = 85U;
    msg.bearing = 0.469139495675;
    msg.cross_angle = 0.16618796911;
    msg.width = 0.720749689218;
    msg.length = 0.750031479211;
    msg.hstep = 0.181232263814;
    msg.coff = 215U;
    msg.alternation = 56U;
    msg.flags = 172U;
    msg.custom.assign("GBPPZRRBCBBPTDLESPPEBVNYYAGJZDGBWURGILDWZXIQDHNGMUCHQWSNUIVTHWADEJJXUZHFXMOPREREIVOJCDFWORCKNZHAKULMLOZTVQMZXIDPVOZXNBUJNAOJWDYKXKMUJKHPLSLFGKTTNLEJBWDSAYQOTFGHINNGSRTBZXFOKAIKCIPZCVPHWMKTUQXLFWCEFYJIGYUQHSRGXRFCVKYOBAQTXAFCYFEVJWIMYYQQLALMVEAVMDSRHQCNS");

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
    msg.setTimeStamp(0.497511589585);
    msg.setSource(47720U);
    msg.setSourceEntity(27U);
    msg.setDestination(45696U);
    msg.setDestinationEntity(216U);
    msg.timeout = 31549U;
    msg.lat = 0.119031610485;
    msg.lon = 0.975990310509;
    msg.z = 0.222272665665;
    msg.z_units = 109U;
    msg.speed = 0.8639852224;
    msg.speed_units = 34U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.979368512105;
    tmp_msg_0.y = 0.757490510569;
    tmp_msg_0.z = 0.438831605228;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DVVPRCIVMZTAQJDLLLTSTSZNJCTUAYSRINMLPDGHBFJAXSJQDIKGAISXKIUWMIGKBNNQYZOTPQGHTWXMVEXQPQGNBPVFTLTVYUFLCBIMJZMGHJPPJROFYBZTYIVMGWCQUWYHKZYVNFSEHZJJUUUEWPCRQOWEVFQAOKOALHOYSPSMKEYCAGFRXDELMCZDWBXGYNIOORFURLAHWRHBBHBNEDNIJSRFKZLXXKEQKZXDKDVEWOPRUCDXSMTBEUAWG");

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
    msg.setTimeStamp(0.846238944952);
    msg.setSource(33042U);
    msg.setSourceEntity(126U);
    msg.setDestination(58188U);
    msg.setDestinationEntity(55U);
    msg.timeout = 38768U;
    msg.lat = 0.798804940279;
    msg.lon = 0.516242766347;
    msg.z = 0.404616967082;
    msg.z_units = 121U;
    msg.speed = 0.127781348314;
    msg.speed_units = 32U;
    msg.custom.assign("KVLZKRFACDAYZANDKHQJNWELUVEVEHAWGQZHNGCSMXOCOBVDJAFGZRCMLXGJSFXSSJYCZNKUEMDVLNMPXNCQEHCXBOLBXEMWRPOOIEYWRPQMUXHYODFZFGTPBKXGIRYBPLYVBNDAHBTMGTCDRPKLQSAVTJFLTUSOAMDKGJQPORQQSB");

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
    msg.setTimeStamp(0.955854675176);
    msg.setSource(36904U);
    msg.setSourceEntity(93U);
    msg.setDestination(55774U);
    msg.setDestinationEntity(204U);
    msg.timeout = 44263U;
    msg.lat = 0.510307413205;
    msg.lon = 0.747074788057;
    msg.z = 0.475665339496;
    msg.z_units = 191U;
    msg.speed = 0.0075189960187;
    msg.speed_units = 209U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.576518131163;
    tmp_msg_0.y = 0.921466290019;
    tmp_msg_0.z = 0.917255419335;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SBJOIOMVEQDBWPEXTJIKFRFHQKJZAOUHBICQCBTOSVHIHMZPEIJACHFUZTNFGPGFDTIZXRPMZRDYQTLWVTUBWYNVPXIPXFAMNECNDSEKW");

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
    msg.setTimeStamp(0.944084192933);
    msg.setSource(7160U);
    msg.setSourceEntity(208U);
    msg.setDestination(18317U);
    msg.setDestinationEntity(70U);
    msg.x = 0.202448767649;
    msg.y = 0.573511436282;
    msg.z = 0.216587177456;

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
    msg.setTimeStamp(0.284637527986);
    msg.setSource(14298U);
    msg.setSourceEntity(200U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(236U);
    msg.x = 0.461202123338;
    msg.y = 0.135625044909;
    msg.z = 0.305574376574;

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
    msg.setTimeStamp(0.171496672994);
    msg.setSource(49827U);
    msg.setSourceEntity(108U);
    msg.setDestination(38038U);
    msg.setDestinationEntity(242U);
    msg.x = 0.534461198618;
    msg.y = 0.424613001207;
    msg.z = 0.167316166593;

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
    msg.setTimeStamp(0.666016994263);
    msg.setSource(6624U);
    msg.setSourceEntity(22U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(7U);
    msg.timeout = 8377U;
    msg.lat = 0.819142287677;
    msg.lon = 0.314689688627;
    msg.z = 0.721128442793;
    msg.z_units = 217U;
    msg.amplitude = 0.0676524447723;
    msg.pitch = 0.572684283206;
    msg.speed = 0.888359364976;
    msg.speed_units = 225U;
    msg.custom.assign("TOVILXPWALYCWTSRFXOAPPTQKJFPNIQ");

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
    msg.setTimeStamp(0.55593351928);
    msg.setSource(57550U);
    msg.setSourceEntity(48U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(65U);
    msg.timeout = 11051U;
    msg.lat = 0.262411023344;
    msg.lon = 0.933657091552;
    msg.z = 0.209032562759;
    msg.z_units = 101U;
    msg.amplitude = 0.85312260193;
    msg.pitch = 0.210838917852;
    msg.speed = 0.0340257481637;
    msg.speed_units = 146U;
    msg.custom.assign("VWNLMDHYPQFDCILPMNRWJMLYDWKUZXZJUQLPUYBBJGDQYWXKQFCANRCCZSZWSRBFFEOBLNMZVFMGMVUTKODILUIAYKGHEVNLQSPCNSOWLXOODFUTIHYSVTOTRFLVWVKJTZYSJKRDBHGDHCPEEBUEBJ");

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
    msg.setTimeStamp(0.968712525237);
    msg.setSource(1889U);
    msg.setSourceEntity(135U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(121U);
    msg.timeout = 12840U;
    msg.lat = 0.252687516589;
    msg.lon = 0.512886252761;
    msg.z = 0.238941507905;
    msg.z_units = 3U;
    msg.amplitude = 0.320012074586;
    msg.pitch = 0.261843790708;
    msg.speed = 0.960956297308;
    msg.speed_units = 242U;
    msg.custom.assign("TDJUKOVEDCTXMGMFTEFYWKMDIFEGTLIHBVWJSHZQXQEQBVYPHEZBKRUHTZGWZRKPNZENUIHDWEJEHJGHUFYCLCQUOTTAILCCFAWIWQPKALROJJSNPDRFAQWNXFYCNLJOWGHUSMBSVXIXLVANBEAPGJIKC");

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
    msg.setTimeStamp(0.658416195382);
    msg.setSource(33516U);
    msg.setSourceEntity(242U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.819273229701);
    msg.setSource(42786U);
    msg.setSourceEntity(119U);
    msg.setDestination(37931U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.204902577191);
    msg.setSource(41512U);
    msg.setSourceEntity(59U);
    msg.setDestination(14350U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.893052952391);
    msg.setSource(35668U);
    msg.setSourceEntity(236U);
    msg.setDestination(62625U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.594183906386;
    msg.lon = 0.836275747614;
    msg.z = 0.925489527978;
    msg.z_units = 233U;
    msg.radius = 0.737555897719;
    msg.duration = 41127U;
    msg.speed = 0.496191114105;
    msg.speed_units = 233U;
    msg.custom.assign("KKESXRTGNPBDVZTRAUCXWEHLIYBPVCJXOIRSIQDCJBHEHAITYJDJNPTNYZBAOQQCEXCYINYQPYXYMLLWZDZVZTUUZOZDOBLOVSKADWAFIARFAPNNMOUCHXGPENWLRRAPEGMSCYJLGGHTFXGMPLUJXFOWGXPBVKCNTSFLWUSZFHIXHTBMHCCW");

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
    msg.setTimeStamp(0.137129636243);
    msg.setSource(62827U);
    msg.setSourceEntity(12U);
    msg.setDestination(14718U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.284502907826;
    msg.lon = 0.0442418767049;
    msg.z = 0.77512155849;
    msg.z_units = 149U;
    msg.radius = 0.188166590904;
    msg.duration = 17358U;
    msg.speed = 0.694351379967;
    msg.speed_units = 113U;
    msg.custom.assign("RUOCVJPURTYXSUMSUEFNSKFQFUWDYZUWSADWLHHGCMSZOBWYZBOLWIFLBYKDIOTYYTPCMWNHZIOTGHDJQUJGZXFJQEXEYDPRINZBTUTMRKPVLLIXJGHWNZOUSATTODLKXEVMMLABWFCAKNOJBBYXFNIGRZZXHNFICSRKAQCLKEBMKSVGIPARSQGCHQWPFMATDDEHVKNQDBJTREWVXPJJPGXDAKNIPCGEVAHIXGVMCEUQRBMOOQ");

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
    msg.setTimeStamp(0.148419880413);
    msg.setSource(19455U);
    msg.setSourceEntity(91U);
    msg.setDestination(11146U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.927347468045;
    msg.lon = 0.694712155207;
    msg.z = 0.10400817497;
    msg.z_units = 125U;
    msg.radius = 0.638556659842;
    msg.duration = 34393U;
    msg.speed = 0.918431005074;
    msg.speed_units = 85U;
    msg.custom.assign("UMLRVTYXTUHPXPMQFEZHFWJQBIOUBCEDAICAHTBVQTFLOAFPSEYVNHUKITEJXKWTCIBQMLCOTIVONKBFNXFMRMAKSALRGDYLJPKMYFYUEQNIYESAIQGLCWSSWHNZXTFWOVHNEHDYSXXJBEEYWFJDSDRJJUUHPGQCNOGIZQUVKSXBARFJNQVGWNVDMRPZOOLNMSZHOBIDVXSGIWXBKGL");

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
    msg.setTimeStamp(0.871215358612);
    msg.setSource(35096U);
    msg.setSourceEntity(83U);
    msg.setDestination(17302U);
    msg.setDestinationEntity(158U);
    msg.timeout = 53864U;
    msg.flags = 223U;
    msg.lat = 0.776160243992;
    msg.lon = 0.324671771052;
    msg.start_z = 0.347474469594;
    msg.start_z_units = 214U;
    msg.end_z = 0.774774074145;
    msg.end_z_units = 105U;
    msg.radius = 0.217672257213;
    msg.speed = 0.232531707533;
    msg.speed_units = 41U;
    msg.custom.assign("CWRQCOWNYSIXFRHYCKBQPCMFXNSDMKKXBLUWXDDHHRETLNTJYRMTZZWRTDAUTSBGMISAMMJDDLXYRELNSGKOEFVGWGGVCMIIOPKOGZLJXQYMCPRTIHOWNPQHEZSLVWEFYJTEKDHUHAOVKAGDNNVAAJUQZPUAHIRPKUPNHYXBBBSAAPJKYFFCZQYQVQTEUNLJJXOSGWFXZV");

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
    msg.setTimeStamp(0.0746743931772);
    msg.setSource(31192U);
    msg.setSourceEntity(15U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(152U);
    msg.timeout = 5737U;
    msg.flags = 89U;
    msg.lat = 0.843025156841;
    msg.lon = 0.469772555201;
    msg.start_z = 0.635956795602;
    msg.start_z_units = 222U;
    msg.end_z = 0.967401354345;
    msg.end_z_units = 122U;
    msg.radius = 0.284444089739;
    msg.speed = 0.193624383742;
    msg.speed_units = 73U;
    msg.custom.assign("ONXIWSNPDOHPYMDVJOREZJWTDHGPOBHALJDUMLNSQELTMWQLMEPLYRKXNEGMAVGFUFQRCWNFAJJZXCBIDNCBUKKYFAUDWQIYDIOXYEXTCFSPRLZBECSAGSG");

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
    msg.setTimeStamp(0.469285575587);
    msg.setSource(24029U);
    msg.setSourceEntity(11U);
    msg.setDestination(55939U);
    msg.setDestinationEntity(253U);
    msg.timeout = 12023U;
    msg.flags = 161U;
    msg.lat = 0.798379042817;
    msg.lon = 0.365892247499;
    msg.start_z = 0.792381360697;
    msg.start_z_units = 214U;
    msg.end_z = 0.667115932593;
    msg.end_z_units = 158U;
    msg.radius = 0.0447403849589;
    msg.speed = 0.544862107255;
    msg.speed_units = 164U;
    msg.custom.assign("QMESAXVLENMOHUFFKBRBYPCSTYREUKNU");

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
    msg.setTimeStamp(0.588202159313);
    msg.setSource(14786U);
    msg.setSourceEntity(227U);
    msg.setDestination(53845U);
    msg.setDestinationEntity(12U);
    msg.timeout = 11506U;
    msg.lat = 0.592763537862;
    msg.lon = 0.44027701048;
    msg.z = 0.90951840455;
    msg.z_units = 11U;
    msg.speed = 0.591870571838;
    msg.speed_units = 242U;
    msg.custom.assign("VNAQBPWKHBSGJHMRBMQYMSHCWLOFIVEVHULRQRRPOUXPQRWZSVPJDAFLAPORFTIYTMNSRMTIXQHPHOYHDBFZGAKVFREAQVBXNYBILNBQSVFZJQVEPXIZKECSEUFMXUJNBLKIKJQYNCTYIVTWGEBVUCFILYBYWEWMLXANGJZCDKGDLCJYMDSCNTXSMGWDKUIZNTKXUDHAJCDHOUOQXEK");

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
    msg.setTimeStamp(0.287804870189);
    msg.setSource(34708U);
    msg.setSourceEntity(247U);
    msg.setDestination(54714U);
    msg.setDestinationEntity(73U);
    msg.timeout = 64835U;
    msg.lat = 0.651952221772;
    msg.lon = 0.417632928269;
    msg.z = 0.532036969473;
    msg.z_units = 229U;
    msg.speed = 0.985729210353;
    msg.speed_units = 225U;
    msg.custom.assign("TXLQAVVEDVYUJTGQODEIPZLSEJWCPPVCWARKMKYLUIR");

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
    msg.setTimeStamp(0.455734466304);
    msg.setSource(23022U);
    msg.setSourceEntity(200U);
    msg.setDestination(767U);
    msg.setDestinationEntity(144U);
    msg.timeout = 40685U;
    msg.lat = 0.780304979699;
    msg.lon = 0.729056193712;
    msg.z = 0.834680317322;
    msg.z_units = 157U;
    msg.speed = 0.755404895622;
    msg.speed_units = 192U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0550105869756;
    tmp_msg_0.y = 0.534111448115;
    tmp_msg_0.z = 0.317567465417;
    tmp_msg_0.t = 0.042340444005;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DEVYUHRDQJTJCHAYPOZUMAGHDLIVBTJELYVLMTOXWPYWQXU");

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
    msg.setTimeStamp(0.114522176393);
    msg.setSource(42308U);
    msg.setSourceEntity(145U);
    msg.setDestination(21077U);
    msg.setDestinationEntity(0U);
    msg.x = 0.0406160642159;
    msg.y = 0.153489446224;
    msg.z = 0.753260205109;
    msg.t = 0.340124841666;

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
    msg.setTimeStamp(0.168726765439);
    msg.setSource(43226U);
    msg.setSourceEntity(22U);
    msg.setDestination(47049U);
    msg.setDestinationEntity(68U);
    msg.x = 0.726455420073;
    msg.y = 0.293932104805;
    msg.z = 0.97798188436;
    msg.t = 0.899524201161;

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
    msg.setTimeStamp(0.779255118203);
    msg.setSource(19257U);
    msg.setSourceEntity(6U);
    msg.setDestination(22977U);
    msg.setDestinationEntity(47U);
    msg.x = 0.467896225207;
    msg.y = 0.835578432832;
    msg.z = 0.988815845109;
    msg.t = 0.575191490398;

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
    msg.setTimeStamp(0.555273951127);
    msg.setSource(11152U);
    msg.setSourceEntity(184U);
    msg.setDestination(39290U);
    msg.setDestinationEntity(86U);
    msg.timeout = 30630U;
    msg.name.assign("NDGZMZLWBMLIKKFSEPIOVOESXFPHDSIEWTLCIPOLFGSGFAKKRTERJXTASKMPVHHACQNHIPCJJFUQQOEKBBZAZCGDKFVWVBOKNSBZPYOZVCXJWZJXPJTORQYOJYLFKDTDUXCUCLYLUTIXXMIHHEASRYRQGZBWTCYNYZUAROCRIJQMMFEHYPBPEESHRCILQMLTNW");
    msg.custom.assign("ODKUNVOXTBGABKUKLMCHRGXTUNKPKUCTXTAEDQEGLWQSNNFADYCUIOXPDTOIIMFSBARWDAFEIIBMOVRTQYHCYTXPWLLBMQIEWOGGXWQLBWRJBJSZCHEYJFLICJWCYIRGRQUREJKOEXTDELSYGDFVXSWNVSWUKEHHZKTHZMNOPZGZZLUISRHQVP");

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
    msg.setTimeStamp(0.0465425244791);
    msg.setSource(55169U);
    msg.setSourceEntity(168U);
    msg.setDestination(3867U);
    msg.setDestinationEntity(99U);
    msg.timeout = 58624U;
    msg.name.assign("KFVIXGRWHTBYAIJDBYCPSIYJII");
    msg.custom.assign("QBVWAQQDRKGHAGALEYOHPSRZMOIGFLDMIEGXCOIUOPKRBQVYJGQLCOULZFMTEQUMCQBBUTPXHDPGRXWSNDLNINANMJCXWPJ");

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
    msg.setTimeStamp(0.742255366263);
    msg.setSource(35585U);
    msg.setSourceEntity(105U);
    msg.setDestination(46928U);
    msg.setDestinationEntity(199U);
    msg.timeout = 32119U;
    msg.name.assign("ZCIZOWKUNTUDZSYAMWMIZSJHGNTIJQIACDNZWWHLFRWZEXYABV");
    msg.custom.assign("MPRLTZBZDEDWILVDUVFQRDOZSUYZQXMJAVLZAYFASDTCLRCV");

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
    msg.setTimeStamp(0.434835230307);
    msg.setSource(63347U);
    msg.setSourceEntity(155U);
    msg.setDestination(20271U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.274849475634;
    msg.lon = 0.567663751032;
    msg.z = 0.737718586088;
    msg.z_units = 122U;
    msg.speed = 0.750993555031;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.576711655232;
    tmp_msg_0.y = 0.0377061677058;
    tmp_msg_0.z = 0.403860379059;
    tmp_msg_0.t = 0.577556098622;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61169U;
    tmp_msg_1.off_x = 0.619660654545;
    tmp_msg_1.off_y = 0.246503983381;
    tmp_msg_1.off_z = 0.82164964053;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.744451410266;
    msg.custom.assign("XVFYPEBQWCNAAKULQCGTGXKJERPUVTCPFECKGNCEXPSLVKTRETKZUGSHOISUSZGALQQLZPTEHZNWACEBWLBYUXGQIWVPFIEJNHUUHDUIDSQUVYIRWWMLMZFMMDDTGPFRSPMXXMDJOHYVQRWFCJLKFHHJONNLDAVHBMDPCHNOYNBHOBYKROABEKKMBORBGTQGVZJYUZIYGTXAWZIF");

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
    msg.setTimeStamp(0.650422756237);
    msg.setSource(11975U);
    msg.setSourceEntity(129U);
    msg.setDestination(60233U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.290339104973;
    msg.lon = 0.890438402974;
    msg.z = 0.334493924755;
    msg.z_units = 177U;
    msg.speed = 0.591142889342;
    msg.speed_units = 46U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.615129197194;
    tmp_msg_0.y = 0.0835195067806;
    tmp_msg_0.z = 0.306312327042;
    tmp_msg_0.t = 0.975443956962;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 21770U;
    tmp_msg_1.off_x = 0.89626055492;
    tmp_msg_1.off_y = 0.895990582864;
    tmp_msg_1.off_z = 0.252030908703;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0552208183878;
    msg.custom.assign("APTRYTQPXZDWHAZQKSFIXMCBJZJMVIVGGXIGSXDKSHNRRPFEWXWUGSSBHAKLVGSPONLCHJWTIHJRGFUPMUJWFRUFDKNWZGCBXXZYQZUEKHLBNCIYJQZPYKDEFLCWDXPBWNFKBRASTIBUYQBOKUIODSMYTTCMNOTVJOSJNPOVPHIMOHQCROEQJLOTTMNCCMYYRVGSXAHDAEVFAOGKFZNCZUEIAD");

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
    msg.setTimeStamp(0.035553792029);
    msg.setSource(47298U);
    msg.setSourceEntity(187U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.266648112852;
    msg.lon = 0.64055936086;
    msg.z = 0.491707478642;
    msg.z_units = 142U;
    msg.speed = 0.439519019136;
    msg.speed_units = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58489U;
    tmp_msg_0.off_x = 0.192237599062;
    tmp_msg_0.off_y = 0.613414832927;
    tmp_msg_0.off_z = 0.48162569829;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.879417693738;
    msg.custom.assign("KLUNVQVHWHCZDQRYAFSGRQJZSHRYXBWCSZSIUDYZMNYYHGWIMXBIKEX");

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
    msg.setTimeStamp(0.709415032256);
    msg.setSource(45250U);
    msg.setSourceEntity(56U);
    msg.setDestination(27675U);
    msg.setDestinationEntity(49U);
    msg.vid = 52178U;
    msg.off_x = 0.627514048693;
    msg.off_y = 0.0552563225504;
    msg.off_z = 0.415136706515;

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
    msg.setTimeStamp(0.849377180155);
    msg.setSource(55746U);
    msg.setSourceEntity(249U);
    msg.setDestination(57347U);
    msg.setDestinationEntity(244U);
    msg.vid = 19283U;
    msg.off_x = 0.828995043858;
    msg.off_y = 0.960509756181;
    msg.off_z = 0.200885400367;

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
    msg.setTimeStamp(0.975596309837);
    msg.setSource(4283U);
    msg.setSourceEntity(137U);
    msg.setDestination(589U);
    msg.setDestinationEntity(237U);
    msg.vid = 32801U;
    msg.off_x = 0.202523243383;
    msg.off_y = 0.324183329248;
    msg.off_z = 0.946178415539;

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
    msg.setTimeStamp(0.148993814292);
    msg.setSource(53358U);
    msg.setSourceEntity(172U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.727448114854);
    msg.setSource(50500U);
    msg.setSourceEntity(101U);
    msg.setDestination(24827U);
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
    msg.setTimeStamp(0.401587809634);
    msg.setSource(22542U);
    msg.setSourceEntity(0U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.185850723714);
    msg.setSource(4948U);
    msg.setSourceEntity(4U);
    msg.setDestination(20624U);
    msg.setDestinationEntity(134U);
    msg.mid = 2648U;

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
    msg.setTimeStamp(0.197423560291);
    msg.setSource(56485U);
    msg.setSourceEntity(254U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(240U);
    msg.mid = 38837U;

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
    msg.setTimeStamp(0.581874944002);
    msg.setSource(57587U);
    msg.setSourceEntity(156U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(201U);
    msg.mid = 3104U;

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
    msg.setTimeStamp(0.358982906444);
    msg.setSource(56910U);
    msg.setSourceEntity(244U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(187U);
    msg.state = 164U;
    msg.eta = 44842U;
    msg.info.assign("HMFWYIGNPBOQTIMDLLBPLNWBXYGVTQUBVAXHSFIRTPKJXCGYVVUDXUZRTSCFIFJTAWISXEHWMBRZDTVHNEOZPDGLCLQRKKBTGDJVEEJPRMEHSCEFBOFTUOKQCYSIIZNVQNMYFOXGOFNGVHTACXGPJYUDCEZNHOZSNAMLCQAEWKMDSKELNNVHZHQLMTXRKPDJZJMJKSZFSDYMHYWASQOUPIEGULV");

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
    msg.setTimeStamp(0.597388502336);
    msg.setSource(55089U);
    msg.setSourceEntity(143U);
    msg.setDestination(28349U);
    msg.setDestinationEntity(112U);
    msg.state = 157U;
    msg.eta = 3743U;
    msg.info.assign("XKORKQGWPFYPQAJHFNYHRFKYMUZGLTHTKRUNDEGZRAGICSDICOIPQDXVSZIIJULBHVBTWLSGKDNOFJCYBUPMQEYMZSQVLAEEJUNTKNNVDPBRJXRJCHGZUMOPDVSQZIMCIUVFDOBGTVJCNBYNWFWVYIALTGGNPWFAOKLDMXKOCEWQZOAACSEMPXETYXHFWKVXZHVDITMUSBAEHUMYJGWZLCFSIAOFLPQJLSNR");

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
    msg.setTimeStamp(0.608718474741);
    msg.setSource(57129U);
    msg.setSourceEntity(167U);
    msg.setDestination(11338U);
    msg.setDestinationEntity(43U);
    msg.state = 54U;
    msg.eta = 12689U;
    msg.info.assign("VLFDPVOJHMCZVPLBQXXTECGEOZPPAYBHEYFYSWNWCJLPHBHJUDBVEOKSFIQCOCPGVEBASQRCEAIWYWEVJNLHWEZRRKSUDNXKZJTHGOZFZIHRAGTWVEZTXZRXIQUSYKBFKAIODWAKGHMESROKXJYDCALJQFZFWDTPRIOMBKTJRMIIILTLXKHMOVQGNWTRTJGLMUPUGSFYAPVDBSCDZRYPOCNMUUNND");

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
    msg.setTimeStamp(0.699182312617);
    msg.setSource(60651U);
    msg.setSourceEntity(240U);
    msg.setDestination(62216U);
    msg.setDestinationEntity(66U);
    msg.system = 15297U;
    msg.duration = 12436U;
    msg.speed = 0.505447717836;
    msg.speed_units = 126U;
    msg.x = 0.203683880625;
    msg.y = 0.188562484944;
    msg.z = 0.202974619185;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.507799468897);
    msg.setSource(54029U);
    msg.setSourceEntity(102U);
    msg.setDestination(58049U);
    msg.setDestinationEntity(216U);
    msg.system = 25932U;
    msg.duration = 34098U;
    msg.speed = 0.0414158240851;
    msg.speed_units = 195U;
    msg.x = 0.290956015054;
    msg.y = 0.625720562723;
    msg.z = 0.774055716712;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.629898894935);
    msg.setSource(41103U);
    msg.setSourceEntity(202U);
    msg.setDestination(15809U);
    msg.setDestinationEntity(147U);
    msg.system = 46848U;
    msg.duration = 31450U;
    msg.speed = 0.131613583948;
    msg.speed_units = 150U;
    msg.x = 0.387621951806;
    msg.y = 0.441475277726;
    msg.z = 0.793288819917;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.916030047459);
    msg.setSource(29309U);
    msg.setSourceEntity(0U);
    msg.setDestination(44811U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.804779030517;
    msg.lon = 0.556511316345;
    msg.speed = 0.421282503891;
    msg.speed_units = 98U;
    msg.duration = 15009U;
    msg.sys_a = 381U;
    msg.sys_b = 26934U;
    msg.move_threshold = 0.999418697388;

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
    msg.setTimeStamp(0.325569619899);
    msg.setSource(60190U);
    msg.setSourceEntity(181U);
    msg.setDestination(21654U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.510189033462;
    msg.lon = 0.701476056924;
    msg.speed = 0.321740741704;
    msg.speed_units = 71U;
    msg.duration = 61087U;
    msg.sys_a = 6370U;
    msg.sys_b = 26523U;
    msg.move_threshold = 0.355647384824;

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
    msg.setTimeStamp(0.0172068659553);
    msg.setSource(44498U);
    msg.setSourceEntity(166U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.970626585034;
    msg.lon = 0.807388714844;
    msg.speed = 0.233703793675;
    msg.speed_units = 195U;
    msg.duration = 6701U;
    msg.sys_a = 18991U;
    msg.sys_b = 41333U;
    msg.move_threshold = 0.348159912653;

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
    msg.setTimeStamp(0.278552166567);
    msg.setSource(2708U);
    msg.setSourceEntity(224U);
    msg.setDestination(20229U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.101098199905;
    msg.lon = 0.459011517549;
    msg.z = 0.84636215607;
    msg.z_units = 138U;
    msg.speed = 0.718269167209;
    msg.speed_units = 140U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.403101081713;
    tmp_msg_0.lon = 0.672852216648;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YYLQNMREVCSUJNOGYEGEUCTIBQTQIVEFTUXMITNFFPJYUZNALEVLHGYGCKSWSPOMALWHBGVHNDUZPZTXVPNVJGT");

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
    msg.setTimeStamp(0.464934998136);
    msg.setSource(43805U);
    msg.setSourceEntity(21U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.7685042961;
    msg.lon = 0.585463969712;
    msg.z = 0.717271006754;
    msg.z_units = 28U;
    msg.speed = 0.757922521954;
    msg.speed_units = 189U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0725062000077;
    tmp_msg_0.lon = 0.0823956258065;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LAZQOJBDGQUIMSNPEVQXSCSCELEBASBAPFGGENKDPDMWDVTOIKKBCOFZSPYQOWPYVAQHWHVRCZFKFBRGCJUDGEJUMSWTYKYAWNVJHNJUWXMBJXQCDBEHCQFUHRBSFYODMNHXNIMNIOLSTEFLOKRKQHHJPWPTXXGIIKZUBZYZUIOSYLJTDLPKZTTYMZLWURGVZRACIPTNUVVXBAYESXQECTAAFREIVGVHMJFDJLAUGNO");

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
    msg.setTimeStamp(0.992400422923);
    msg.setSource(22358U);
    msg.setSourceEntity(65U);
    msg.setDestination(21238U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.732352145896;
    msg.lon = 0.249875782856;
    msg.z = 0.107759711283;
    msg.z_units = 135U;
    msg.speed = 0.460954144056;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.992797816141;
    tmp_msg_0.lon = 0.61075329744;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GPSBRMJQUCBZRWVBWFHLQOMQBAXXROGGFLSHREFDOXCRMADWMNSLGMJGBILVSPQQOTEKXAAYFEDKYESFIYEZHLCLOQKAGDYYTJOKJDPJLYWNHZUHAPPKJECOWPLKSV");

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
    msg.setTimeStamp(0.5518666106);
    msg.setSource(10004U);
    msg.setSourceEntity(157U);
    msg.setDestination(23520U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.444916345712;
    msg.lon = 0.812183527443;

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
    msg.setTimeStamp(0.566158757322);
    msg.setSource(8669U);
    msg.setSourceEntity(240U);
    msg.setDestination(29310U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.0450970419613;
    msg.lon = 0.906754014825;

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
    msg.setTimeStamp(0.101701768326);
    msg.setSource(37309U);
    msg.setSourceEntity(73U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.45422651005;
    msg.lon = 0.737351209623;

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
    msg.setTimeStamp(0.760833812096);
    msg.setSource(36661U);
    msg.setSourceEntity(1U);
    msg.setDestination(5654U);
    msg.setDestinationEntity(213U);
    msg.timeout = 8093U;
    msg.lat = 0.190628849327;
    msg.lon = 0.452052317029;
    msg.z = 0.485791079005;
    msg.z_units = 233U;
    msg.pitch = 0.955772076816;
    msg.amplitude = 0.381128272657;
    msg.duration = 38691U;
    msg.speed = 0.910422054925;
    msg.speed_units = 118U;
    msg.radius = 0.890457839145;
    msg.direction = 148U;
    msg.custom.assign("GJOTVUWUNXSUWEYIBYTYACCPMAVXLOM");

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
    msg.setTimeStamp(0.481537541282);
    msg.setSource(23372U);
    msg.setSourceEntity(35U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(68U);
    msg.timeout = 54454U;
    msg.lat = 0.775748826001;
    msg.lon = 0.57244672108;
    msg.z = 0.490702372959;
    msg.z_units = 176U;
    msg.pitch = 0.958573134213;
    msg.amplitude = 0.371330607239;
    msg.duration = 5733U;
    msg.speed = 0.145122479886;
    msg.speed_units = 69U;
    msg.radius = 0.587029038785;
    msg.direction = 60U;
    msg.custom.assign("MTTEPNEJGFBUJBPXAKOFABWXXLUSBPHBPIGIYKNCJQNSOPNPGVFNCOUWCTEZGQDZBYDWLWRDDOFORHXVNHOKPJHNYKCJVIMRUYZRNIACUSYVGDJAQEMEMGDLSPXQOEIIFMKAHOGCUYJ");

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
    msg.setTimeStamp(0.175170192274);
    msg.setSource(41755U);
    msg.setSourceEntity(126U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(205U);
    msg.timeout = 63105U;
    msg.lat = 0.888075037057;
    msg.lon = 0.687479489556;
    msg.z = 0.460698436017;
    msg.z_units = 56U;
    msg.pitch = 0.737161273718;
    msg.amplitude = 0.605537955232;
    msg.duration = 52074U;
    msg.speed = 0.988681406021;
    msg.speed_units = 250U;
    msg.radius = 0.62627235507;
    msg.direction = 250U;
    msg.custom.assign("FHTMPWUCFWUHWGTYVTOGCRSXNQMXSMIGFDFLYVCXPJAZXHBVCSKPURIUEUZHWXTER");

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
    msg.setTimeStamp(0.316089691284);
    msg.setSource(46809U);
    msg.setSourceEntity(113U);
    msg.setDestination(7338U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("HXVRSWFOFAKRPXCYBKHNHJDVUTODXBHBLJXTWGLMPDPRJZMGYCAXJCBFFEZEUIATVIDKIPRMAWMJLZDZLBRVFQTXLEVPOPXYGZCHWY");
    msg.reference_frame = 159U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2888U;
    tmp_msg_0.off_x = 0.78478492439;
    tmp_msg_0.off_y = 0.843636910958;
    tmp_msg_0.off_z = 0.32787479455;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ACDPILNPOCVWWJJWMTHPSCEEASVDCQTW");

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
    msg.setTimeStamp(0.350936776742);
    msg.setSource(61853U);
    msg.setSourceEntity(137U);
    msg.setDestination(14313U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("NGDKAMDPJWJCOXUQHYJFBXLWVIMGOVAYJERYSVONUCKMVHGVSBCBMLMAHMQKFRCTOYTENBLZRQKLNZHDXZFNHFVEJMLEXUEGJQESCXDNSJUAAMPBP");
    msg.reference_frame = 41U;
    msg.custom.assign("DUGRVILKJXNQMEBFTAYNSQAZSYBMMARYXWKYWSAYZYVDQHPNAZIEEIZLREFSSVNVDCSMNBGDJXDVRMZDSSWOOCCKTNRFOSPJNAMFTUQLPICBRVVGPETQBFUOTDCTHDXVGMJHWCUPNBRKBGKMXBPKHERUXCAWHGHIHPUTJLZJEOPOQIMFWCGDQULIHVPBDUKSWYXYTUAZTEXLJWHZILXCRJHZLVWQOYROLBGKMCQGZTEFOA");

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
    msg.setTimeStamp(0.769662758453);
    msg.setSource(43471U);
    msg.setSourceEntity(67U);
    msg.setDestination(62993U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("BDLMXZNGXBTRISENKULHTEOHDKAGHVEATNGHXDLGCXQANAJIJAVJZBJKFJJWHRSAIUZQSYTZLUVOVVWIYOYNPCTYZRYCEHKFCDXAEMZZQIRQWHTYYXWVDYKCPGLROGFNEUSBYMUVXESZQILOSNAVZBONFPKRILWPMIFONPBBOKAMHUICCSHGWQL");
    msg.reference_frame = 247U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42519U;
    tmp_msg_0.off_x = 0.100821254089;
    tmp_msg_0.off_y = 0.937738571167;
    tmp_msg_0.off_z = 0.637095295155;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NKGEGRMVQNMOFEIVYSRJKCJLCTKPVQKLYPQISSGLFYZZYECJIVXXFPCSCGIRYSFDMPHNDUJAKUHQFEFVADOXOIRITCOPJGDQYESPKROOIUJUOUBMHNQU");

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
    msg.setTimeStamp(0.471684361608);
    msg.setSource(50103U);
    msg.setSourceEntity(175U);
    msg.setDestination(64657U);
    msg.setDestinationEntity(164U);
    msg.group_name.assign("LMRYSAWDQSCRLNNJMLWSAKBPZODKJKQRFAIFDLTVSVGMLJXKJVHXGXASOHQSBOKXEUEYOETIBCPVSWYIWPRLDOPFUHSMHPHGDTUJFYGPIXEVZYITTHBMICZJCELGKNDOLQWQUAUSZNCRFIDVPCQXZBMHOACWECCYFQOUJZY");
    msg.formation_name.assign("WGASJZPTVPKXMNFRCHEUVHZDUABYDXKOBQGNUCODLKETSDGKFMUKFKVHYNXAIULFYLLFFVORNMVKPVARLXVCEWOQYUPHQFDJCXJUITBXDNDCQMSLIHNWGSEWLDEFTUKNHXABNRYNMZMSLGPYQJOMIARSKEDHTQWWDWESZQRCBBBBMJIPCUFGSTGQGOYTAZWJVJJJQTQGCXAREPJOBOT");
    msg.plan_id.assign("DQOBMJZJTCQQSVWFCDTECJYIQPGHZVASPIRTPQNJSQIJBJNKHJNORRSHEMTQETGZZEODLGJWZHGWVKPFDNLBHOBQNISEGOJVLORUCLWNUNZKSHFLYRWHBPDKYIUFXUDVMPIEWOWEKSBLZFQAFKWWUXTIJKTTAOPXXSVMYUBDVXRMALLRTLRTXFVYUZUFUXHHMEASXVOCGRAXZDGCBEYNDACBAFWODHSMGAIMLBKPGYCEINMACYKYQKPCUR");
    msg.description.assign("ONTTBCXJHRZDCWQQTNRDWQFDTOKRMLGBNIRPVQSQVKHXFALLGTVBZFAILVVDCUEIQWFGZCYSNPXRUPWJJOODONEHGLYYJAMSSXBNULWZJXZVVURUBYJUKKCOEYHYJYOZTJMANAJNYUDRFTRGLHSEEGWLSBEDHKKFIKXPMCWXQYLJXFQAMHZIMTPIKV");
    msg.leader_speed = 0.659466932588;
    msg.leader_bank_lim = 0.884361198025;
    msg.pos_sim_err_lim = 0.0456726109587;
    msg.pos_sim_err_wrn = 0.292874797402;
    msg.pos_sim_err_timeout = 62385U;
    msg.converg_max = 0.219618071123;
    msg.converg_timeout = 24572U;
    msg.comms_timeout = 64353U;
    msg.turb_lim = 0.379912569617;
    msg.custom.assign("NBOJDUICZEBXICLQQUUQXWFAAJSXKZYDYJHWYAERONQWCOJMYZJEFQIVLTCTRPGVLGOWBMCAAJUSARHKDYOWPWZCRAEQUDXRM");

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
    msg.setTimeStamp(0.239349274012);
    msg.setSource(30168U);
    msg.setSourceEntity(49U);
    msg.setDestination(63029U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("YQCYKNSGAONTJESOJUURVNYFKAHZIFOUADLPSOGWDGRRWVRJNKQDCSEYGDOZFHNHSUAEPIFQYMHFVFGHLQTYDVLJVLWMQMJFUNIEWKZZNLGEMAGBBORHZMHXVAOBPBXEIBZNSTDMAWMUNCKPKSBLRFGBOKCFYTBPCTVCWTQCDAQEKJZWPFXRUIYBTROQVJCVSKTWPSAZIPMLDLRIBEWNXTVSMJPRLCPX");
    msg.formation_name.assign("CLDUOWBCYSJZKRAHCZRHOJTDPQLVWVIVBHBZBWZNSTUBUEFBDTAOGQCLXOEKHONXSXSSRMPKCOSXPYCFDWJXEALUKLGEKMGTCTAJSEQKPVFAIGJTQUEPTIYUQNMMYZQAUEHNHZUNNECKOUIGKYJQLGNSVSJJIFVUNEPFOGQIHMFBILIRJAYDTMWOHRXYWWZMFMGPWPOHWCRFSGVDVALXRPNDVGPZXXAYJEBRFAIQVLBZNRCKQHDDBXRK");
    msg.plan_id.assign("GYHJXETBUGXYHWXLFLBDFEWPHBTGFDKQJWFQSBGGVZRQLQTILJDRKUJXPAIDWGWFMZIKJMIIRYEJBXPCNXXFVPCYKICBOUYKOTRZB");
    msg.description.assign("XVGAENEZRGZWMEIWFZPREJOTNHNXADBAVLIEUHTYCAVPCMPMKPBUGWIGWYLFRYGQFPTBFUTCHRSQBEVYRBBWLZBKSLCPNUOJENDSDDIAYHFDMXZJZDEXROIOGXUSICTHWFVQXPPIYCUYIVLMGWNCGIBWLOHCIKVZQXCR");
    msg.leader_speed = 0.820766129227;
    msg.leader_bank_lim = 0.275444399845;
    msg.pos_sim_err_lim = 0.167459990993;
    msg.pos_sim_err_wrn = 0.800313759431;
    msg.pos_sim_err_timeout = 20723U;
    msg.converg_max = 0.128147380096;
    msg.converg_timeout = 27386U;
    msg.comms_timeout = 32427U;
    msg.turb_lim = 0.16390409245;
    msg.custom.assign("FNBKFDQBNBHEYHSHDRU");

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
    msg.setTimeStamp(0.00288194592841);
    msg.setSource(6758U);
    msg.setSourceEntity(54U);
    msg.setDestination(44272U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("QZWTNPJKGSMZGWFCVYFVZFXAISMYLFXFAWGOZNNKFLOSZMWMNODIZKEEAGGSRULRQDOGSBYHOSTUXFZLJKLATFUDRIMUTASXUGAWPIHWQHBKQCQJCIHCCKPTRKPAGMEJQUAPYIBFBROULQCRMXEJTHYEPQTTEDVOVENBNJGSICBZXHIRSMCNIN");
    msg.formation_name.assign("VFTOBKUPNHLTFENYZZAALBKBYIITVMXPXXADHDRDBZUQLPMQGFRYGSNQGUOAXIAAGMLRWCBDDJKKHJOJFMOEOEKMXJIMFTVSCCFTLYDSEMWREJQPRGCIVSSCQRZMPHQUWRGVRXYQD");
    msg.plan_id.assign("SBMAVNQWUWBLQRHLBJDYREOHQQITZJTUFYVRGGOYCXTZLFZCAVHUPMGADWKLDFDTIQTGNUMICGTRUXWVTMWQMUCPMLODEKKBYXYICFZKJZMXLFIXISJXZTUWOZPFXVYQKSMBDFQWDBMELAOHROLAIDZPEOZWHOYKACBRKSNIFARJPHVRLAYEPLQOVCBGRESNNHQGWDPDSJCIKNXCRNVHHGABJPHYGFPIEUNBOSUJYSKUKTWSZCJE");
    msg.description.assign("IUZIDXGBQOJVRJVBANHXHOPJRQINUZXPNVQNAFPMFJDNKWNUDKQTTESMNIJTKMIAJIJMEYWCGZUQUVYZZXWZYPC");
    msg.leader_speed = 0.493274909627;
    msg.leader_bank_lim = 0.884498234454;
    msg.pos_sim_err_lim = 0.560160357567;
    msg.pos_sim_err_wrn = 0.229059950813;
    msg.pos_sim_err_timeout = 30631U;
    msg.converg_max = 0.426195733938;
    msg.converg_timeout = 46038U;
    msg.comms_timeout = 22480U;
    msg.turb_lim = 0.528300633827;
    msg.custom.assign("ZOVBUITNDAVHSJLWDPGZEWKHDCUQSFOQOUCBRMZSPXFXGWFMOVTZDEXAUYTMACMUHGIHPLHEJKLMQROFBMTUZGRFPOFOLTVSDXHNDECKWNBIYYIHQVPJEGUCXRSKAIVMQTKZOZYCKNEJ");

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
    msg.setTimeStamp(0.77576716863);
    msg.setSource(23716U);
    msg.setSourceEntity(34U);
    msg.setDestination(48815U);
    msg.setDestinationEntity(162U);
    msg.control_src = 13264U;
    msg.control_ent = 47U;
    msg.timeout = 0.810031565487;
    msg.loiter_radius = 0.742794171418;
    msg.altitude_interval = 0.736315228273;

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
    msg.setTimeStamp(0.673220012881);
    msg.setSource(9036U);
    msg.setSourceEntity(3U);
    msg.setDestination(23272U);
    msg.setDestinationEntity(62U);
    msg.control_src = 14940U;
    msg.control_ent = 84U;
    msg.timeout = 0.950315793868;
    msg.loiter_radius = 0.322329943759;
    msg.altitude_interval = 0.724296539182;

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
    msg.setTimeStamp(0.7326711214);
    msg.setSource(3968U);
    msg.setSourceEntity(78U);
    msg.setDestination(34566U);
    msg.setDestinationEntity(121U);
    msg.control_src = 22983U;
    msg.control_ent = 203U;
    msg.timeout = 0.347584799319;
    msg.loiter_radius = 0.17724430186;
    msg.altitude_interval = 0.869495369745;

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
    msg.setTimeStamp(0.213127202019);
    msg.setSource(22426U);
    msg.setSourceEntity(92U);
    msg.setDestination(50634U);
    msg.setDestinationEntity(163U);
    msg.flags = 101U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0794441363685;
    tmp_msg_0.speed_units = 223U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.66121353867;
    tmp_msg_1.z_units = 213U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.128115078905;
    msg.lon = 0.0471298646312;
    msg.radius = 0.983644435889;

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
    msg.setTimeStamp(0.064074664242);
    msg.setSource(23936U);
    msg.setSourceEntity(55U);
    msg.setDestination(3818U);
    msg.setDestinationEntity(153U);
    msg.flags = 185U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.10306061457;
    tmp_msg_0.speed_units = 74U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17347146302;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0325032609502;
    msg.lon = 0.975033584029;
    msg.radius = 0.0118897334682;

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
    msg.setTimeStamp(0.218926162403);
    msg.setSource(1179U);
    msg.setSourceEntity(61U);
    msg.setDestination(19594U);
    msg.setDestinationEntity(153U);
    msg.flags = 78U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.557370597458;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.419750719981;
    tmp_msg_1.z_units = 225U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.327995704381;
    msg.lon = 0.197848614659;
    msg.radius = 0.216252893693;

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
    msg.setTimeStamp(0.930618711611);
    msg.setSource(63871U);
    msg.setSourceEntity(143U);
    msg.setDestination(44567U);
    msg.setDestinationEntity(18U);
    msg.control_src = 62566U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 30U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.148255304043;
    tmp_tmp_msg_0_0.speed_units = 62U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.263358512412;
    tmp_tmp_msg_0_1.z_units = 245U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.403998884112;
    tmp_msg_0.lon = 0.0771413552602;
    tmp_msg_0.radius = 0.680852700014;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
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
    msg.setTimeStamp(0.608822329185);
    msg.setSource(16769U);
    msg.setSourceEntity(120U);
    msg.setDestination(52342U);
    msg.setDestinationEntity(150U);
    msg.control_src = 13669U;
    msg.control_ent = 152U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.381003395766;
    tmp_tmp_msg_0_0.speed_units = 146U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.595233906218;
    tmp_tmp_msg_0_1.z_units = 191U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0807558450822;
    tmp_msg_0.lon = 0.66819041946;
    tmp_msg_0.radius = 0.539386558828;
    msg.reference.set(tmp_msg_0);
    msg.state = 47U;
    msg.proximity = 140U;

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
    msg.setTimeStamp(0.21870499887);
    msg.setSource(50187U);
    msg.setSourceEntity(166U);
    msg.setDestination(35108U);
    msg.setDestinationEntity(180U);
    msg.control_src = 23990U;
    msg.control_ent = 190U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 146U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.623672479046;
    tmp_tmp_msg_0_0.speed_units = 241U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0471309407189;
    tmp_tmp_msg_0_1.z_units = 145U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.741723600477;
    tmp_msg_0.lon = 0.653570911128;
    tmp_msg_0.radius = 0.71386915025;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 225U;

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
    msg.setTimeStamp(0.594958555955);
    msg.setSource(5854U);
    msg.setSourceEntity(121U);
    msg.setDestination(63296U);
    msg.setDestinationEntity(82U);
    msg.ax_cmd = 0.291648335847;
    msg.ay_cmd = 0.250084169594;
    msg.az_cmd = 0.608853331799;
    msg.ax_des = 0.0150193931691;
    msg.ay_des = 0.413777985112;
    msg.az_des = 0.223155721097;
    msg.virt_err_x = 0.687944428932;
    msg.virt_err_y = 0.785923173006;
    msg.virt_err_z = 0.387371683499;
    msg.surf_fdbk_x = 0.99497406758;
    msg.surf_fdbk_y = 0.0947241258011;
    msg.surf_fdbk_z = 0.380577520141;
    msg.surf_unkn_x = 0.919596144924;
    msg.surf_unkn_y = 0.153885821552;
    msg.surf_unkn_z = 0.822593595553;
    msg.ss_x = 0.799101815986;
    msg.ss_y = 0.111292236994;
    msg.ss_z = 0.724319984707;

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
    msg.setTimeStamp(0.720813790244);
    msg.setSource(5813U);
    msg.setSourceEntity(129U);
    msg.setDestination(22548U);
    msg.setDestinationEntity(162U);
    msg.ax_cmd = 0.866762756085;
    msg.ay_cmd = 0.706096009997;
    msg.az_cmd = 0.646729788916;
    msg.ax_des = 0.360684650985;
    msg.ay_des = 0.776823323985;
    msg.az_des = 0.736018215784;
    msg.virt_err_x = 0.920595507055;
    msg.virt_err_y = 0.409557679378;
    msg.virt_err_z = 0.893406618137;
    msg.surf_fdbk_x = 0.688985496311;
    msg.surf_fdbk_y = 0.167843719023;
    msg.surf_fdbk_z = 0.941233780586;
    msg.surf_unkn_x = 0.420429940018;
    msg.surf_unkn_y = 0.715634243802;
    msg.surf_unkn_z = 0.284204480996;
    msg.ss_x = 0.816598421493;
    msg.ss_y = 0.828421150169;
    msg.ss_z = 0.045043530276;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HUSGBCJRWXEYGXEGKTYZJWKJLKPNDUKHYNWJNTLIQNTMTELFLAROFJVTVZSQXGUOTCWEFYOZPGNLEBPYQNBERYPMSJMIATYNESZBUDXVWAJOUUOMXDQAUCCUZ");
    tmp_msg_0.dist = 0.809273694642;
    tmp_msg_0.err = 0.861840897161;
    tmp_msg_0.ctrl_imp = 0.115118567952;
    tmp_msg_0.rel_dir_x = 0.129854067007;
    tmp_msg_0.rel_dir_y = 0.00776626857181;
    tmp_msg_0.rel_dir_z = 0.0182865637262;
    tmp_msg_0.err_x = 0.450415398108;
    tmp_msg_0.err_y = 0.315925718712;
    tmp_msg_0.err_z = 0.730016614735;
    tmp_msg_0.rf_err_x = 0.69999098343;
    tmp_msg_0.rf_err_y = 0.171039630967;
    tmp_msg_0.rf_err_z = 0.501678991867;
    tmp_msg_0.rf_err_vx = 0.00252391468488;
    tmp_msg_0.rf_err_vy = 0.627989262787;
    tmp_msg_0.rf_err_vz = 0.260830307909;
    tmp_msg_0.ss_x = 0.722313000648;
    tmp_msg_0.ss_y = 0.856284131166;
    tmp_msg_0.ss_z = 0.356642464291;
    tmp_msg_0.virt_err_x = 0.0291264747752;
    tmp_msg_0.virt_err_y = 0.2048972617;
    tmp_msg_0.virt_err_z = 0.090053083038;
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
    msg.setTimeStamp(0.982030286114);
    msg.setSource(20055U);
    msg.setSourceEntity(125U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(92U);
    msg.ax_cmd = 0.357660615489;
    msg.ay_cmd = 0.558155033168;
    msg.az_cmd = 0.862823053691;
    msg.ax_des = 0.177733193122;
    msg.ay_des = 0.883275492475;
    msg.az_des = 0.647266762892;
    msg.virt_err_x = 0.239750535819;
    msg.virt_err_y = 0.979047393396;
    msg.virt_err_z = 0.116182074896;
    msg.surf_fdbk_x = 0.375959754962;
    msg.surf_fdbk_y = 0.993937659173;
    msg.surf_fdbk_z = 0.247041279226;
    msg.surf_unkn_x = 0.804065678085;
    msg.surf_unkn_y = 0.83071634841;
    msg.surf_unkn_z = 0.675153740272;
    msg.ss_x = 0.955020597497;
    msg.ss_y = 0.998656917768;
    msg.ss_z = 0.126299604238;

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
    msg.setTimeStamp(0.450582537462);
    msg.setSource(28523U);
    msg.setSourceEntity(29U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(46U);
    msg.s_id.assign("BTWDDIFDUUVTBLRONKWWCXFJZSUGETEERHVNDGFMETMBKQHTIYIKGGXWYUSWFEBHNKWNSDQFRNJPCZLEAZERKGYMEXNHDMNQXQAJOBLPCAYZCYVYWFFNHLBHSPDWJCRKRVXFDIGXGVMGJEUKTZDBTGITQOPAJLNVQZPMSAPMHACLCLJXQSSRDKOJUTRQPKVOIQXOBCZHVAPVUIHZIAMUGUCPWCXN");
    msg.dist = 0.630730174126;
    msg.err = 0.452692787778;
    msg.ctrl_imp = 0.306672282652;
    msg.rel_dir_x = 0.554671416037;
    msg.rel_dir_y = 0.232210610853;
    msg.rel_dir_z = 0.30982205882;
    msg.err_x = 0.673146337259;
    msg.err_y = 0.2922961797;
    msg.err_z = 0.48624761785;
    msg.rf_err_x = 0.864356216581;
    msg.rf_err_y = 0.334246747616;
    msg.rf_err_z = 0.69293091824;
    msg.rf_err_vx = 0.5192441887;
    msg.rf_err_vy = 0.00228394423507;
    msg.rf_err_vz = 0.448201849416;
    msg.ss_x = 0.30101673515;
    msg.ss_y = 0.579845242784;
    msg.ss_z = 0.296468320281;
    msg.virt_err_x = 0.897746598158;
    msg.virt_err_y = 0.549471742869;
    msg.virt_err_z = 0.461412331648;

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
    msg.setTimeStamp(0.806370069022);
    msg.setSource(17819U);
    msg.setSourceEntity(167U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("UPNJWIXBPKELBCRNRUITVFZQGEEVFXVMCMTTLOWTTEHDOMSXASEKQWPRHIJCLTXLPPBYCCNOYGQYDYKEOOVICZQDHSJYLUPCPVHJFJRMSAIWXTUXHSAKEGGDIANIDUASAVQYHIBKRYNRQAGFBLHUSFZOCDTYROTVPWNRZKGVBQXLVKFDBJJKCXZURQFGSALNWKZBA");
    msg.dist = 0.909536943519;
    msg.err = 0.71267246984;
    msg.ctrl_imp = 0.39824686154;
    msg.rel_dir_x = 0.895949536553;
    msg.rel_dir_y = 0.43534834634;
    msg.rel_dir_z = 0.0500281206883;
    msg.err_x = 0.0873854713027;
    msg.err_y = 0.882898488391;
    msg.err_z = 0.0568836871712;
    msg.rf_err_x = 0.937032209721;
    msg.rf_err_y = 0.822206714569;
    msg.rf_err_z = 0.590684465611;
    msg.rf_err_vx = 0.317232198142;
    msg.rf_err_vy = 0.350963958256;
    msg.rf_err_vz = 0.829629809686;
    msg.ss_x = 0.414521184396;
    msg.ss_y = 0.591588422526;
    msg.ss_z = 0.112478425754;
    msg.virt_err_x = 0.197919922233;
    msg.virt_err_y = 0.106009818581;
    msg.virt_err_z = 0.311490195662;

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
    msg.setTimeStamp(0.98788045011);
    msg.setSource(26095U);
    msg.setSourceEntity(82U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("TEPHLVLRDAJQOGFEBUVMVIOBYNNSONYSCRYGJKGWCLWHDQJWQAK");
    msg.dist = 0.551851491082;
    msg.err = 0.0588310001949;
    msg.ctrl_imp = 0.656899779346;
    msg.rel_dir_x = 0.494742571613;
    msg.rel_dir_y = 0.995293890003;
    msg.rel_dir_z = 0.286430401456;
    msg.err_x = 0.218983104475;
    msg.err_y = 0.974226727453;
    msg.err_z = 0.763074924347;
    msg.rf_err_x = 0.393931605226;
    msg.rf_err_y = 0.978394225903;
    msg.rf_err_z = 0.614201504134;
    msg.rf_err_vx = 0.854600773379;
    msg.rf_err_vy = 0.536559305799;
    msg.rf_err_vz = 0.574741743271;
    msg.ss_x = 0.235330677439;
    msg.ss_y = 0.517191510645;
    msg.ss_z = 0.29056163256;
    msg.virt_err_x = 0.699040994276;
    msg.virt_err_y = 0.24075905735;
    msg.virt_err_z = 0.820424566413;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.79838829566);
    msg.setSource(15889U);
    msg.setSourceEntity(192U);
    msg.setDestination(43424U);
    msg.setDestinationEntity(17U);
    msg.op_mode = 143U;
    msg.error_count = 13U;
    msg.error_ents.assign("VHGKCLBZQFVFZTDQQLMYHBDOJLZVPZXGEQOJQYLNDIXLAAZUVCVSGSGNLWLAHESDBCNOIYYZTJVNWCRDBTUFNWHQRKWOSFMWDTAWCEDTHPDUFKIJUXKEAGVAEFUPZYMGMADNKUJQEHNHPIEDXOYRMGBKCFNSOSKXTVWXEJXBKAUWKALRBFRPOXOTSJMNPVZBIMYACJXXSRMEMJRNYUPHYMTPOZKJFRWRSTEIGLQBI");
    msg.maneuver_type = 41998U;
    msg.maneuver_stime = 0.00464617427792;
    msg.maneuver_eta = 28697U;
    msg.control_loops = 1115490594U;
    msg.flags = 93U;
    msg.last_error.assign("IHWVGNDULLQ");
    msg.last_error_time = 0.978303442107;

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
    msg.setTimeStamp(0.91361795184);
    msg.setSource(21962U);
    msg.setSourceEntity(19U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(114U);
    msg.op_mode = 201U;
    msg.error_count = 76U;
    msg.error_ents.assign("QBKMGRMGMMWFOJSNZPBFREXRXGFINPVCBBCTEUWTRRQZOCGBF");
    msg.maneuver_type = 22468U;
    msg.maneuver_stime = 0.629836479183;
    msg.maneuver_eta = 18921U;
    msg.control_loops = 502319184U;
    msg.flags = 203U;
    msg.last_error.assign("NCKCWMXQXLXGWBFIJLJQOA");
    msg.last_error_time = 0.575177704968;

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
    msg.setTimeStamp(0.738825043103);
    msg.setSource(1010U);
    msg.setSourceEntity(174U);
    msg.setDestination(22236U);
    msg.setDestinationEntity(7U);
    msg.op_mode = 52U;
    msg.error_count = 176U;
    msg.error_ents.assign("WHLSUXVPMAYYMLGIFUTSCWBQTRXVXRJUAFANIXIHVAGBXWUKVOHGSGSBYCQKNXJUNTBRAPFMRIUQJZDSOQRIPHOKQEJXBZDLDXSHVSWLKZUWFUYFEKRPPQDTTPVMZFKJOWGYZYF");
    msg.maneuver_type = 11518U;
    msg.maneuver_stime = 0.441360585789;
    msg.maneuver_eta = 2922U;
    msg.control_loops = 156337794U;
    msg.flags = 78U;
    msg.last_error.assign("MLFXHUGMKWUODLCOSISYDYCNPGYZ");
    msg.last_error_time = 0.943001346922;

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
    msg.setTimeStamp(0.251517747905);
    msg.setSource(51716U);
    msg.setSourceEntity(16U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(162U);
    msg.type = 47U;
    msg.request_id = 46308U;
    msg.command = 94U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51704U;
    tmp_msg_0.lat = 0.869151352506;
    tmp_msg_0.lon = 0.898107178405;
    tmp_msg_0.z = 0.810942724997;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.339528073501;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.custom.assign("IIUCFYHDYCBNGHPOGNMMBWBECXZORKLQMPKQUVNTKTOVZKOFRFFRKHNXWAXBVNW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3196U;
    msg.info.assign("GWBCWIAHCBXOFKDSLMKWGNTTFKIVF");

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
    msg.setTimeStamp(0.813396216649);
    msg.setSource(26919U);
    msg.setSourceEntity(63U);
    msg.setDestination(14438U);
    msg.setDestinationEntity(171U);
    msg.type = 48U;
    msg.request_id = 47435U;
    msg.command = 98U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 44695U;
    tmp_msg_0.lat = 0.988543351908;
    tmp_msg_0.lon = 0.628346227905;
    tmp_msg_0.z = 0.514765291989;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.58662692348;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.roll = 0.657092475732;
    tmp_msg_0.pitch = 0.226629035623;
    tmp_msg_0.yaw = 0.250040730432;
    tmp_msg_0.custom.assign("KGIOJTVNRQDHSHTDAEPQADMTSYULIQCUCFCYXLGWOSVSKYCNKPRHAELIULZXMKSETQSBWVEANGWQHHXWBXIPSNXEIBOLYGJQMZZSCPMKJPWLDFREY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24647U;
    msg.info.assign("ZLNPQSKPSULCGXCNTHPYYDQSBBZSDEKR");

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
    msg.setTimeStamp(0.897444295105);
    msg.setSource(50431U);
    msg.setSourceEntity(209U);
    msg.setDestination(55977U);
    msg.setDestinationEntity(15U);
    msg.type = 227U;
    msg.request_id = 63151U;
    msg.command = 190U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.617855561418;
    tmp_msg_0.lon = 0.395657406809;
    tmp_msg_0.z = 0.397149778801;
    tmp_msg_0.z_units = 244U;
    tmp_msg_0.speed = 0.716944632512;
    tmp_msg_0.speed_units = 254U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 11387U;
    tmp_tmp_msg_0_0.off_x = 0.730947277141;
    tmp_tmp_msg_0_0.off_y = 0.142342765127;
    tmp_tmp_msg_0_0.off_z = 0.504236785791;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.236384545392;
    tmp_msg_0.custom.assign("HPCEFNJNHJLYIJEKVZKSHKFGJGKDVEASZOJRSMCFQMVJMVKCRMPNOUDKPODCPKVZXLJIBOFBMPVCYEVNZCEDZXXLZIYORIHBUMHOXOHLKXRAQLCAFSGBKNSIT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52003U;
    msg.info.assign("BJNYLPQQUMCHMBJ");

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
    msg.setTimeStamp(0.213689773075);
    msg.setSource(11986U);
    msg.setSourceEntity(244U);
    msg.setDestination(25188U);
    msg.setDestinationEntity(11U);
    msg.command = 150U;
    msg.entities.assign("UIXKZWRXTGAHMBLJBEZNQRRBQEPFFKGNIFMOMZRTTQFLXCNADOXVGPQDGHLICOBLYUKMOBDACXVUNJYOLQRISXYDOSSEOXTPWEFCFNTIHITMRHUZEHRCQWPLZNSWKDAEKXKZWLBTJCEYVTGICXJLGMQNYDSMVEYCGAFKZPSABIADJBAWNK");

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
    msg.setTimeStamp(0.458469626218);
    msg.setSource(17992U);
    msg.setSourceEntity(195U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(19U);
    msg.command = 154U;
    msg.entities.assign("LRRZROJMEHOPMXCIDEDNUJIZEXVRIGWWTPDDSFVHTLNLQZTRCQTWXPCNRCKKBLXHEVSBYLEFZMHOKRQMDPVGQLMJEJPZNQTTLQMWURSEOYWKIUCXXQHEPGMLSCIZNHKDYVAKLSOGUKAYTUMEXJGXVCYA");

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
    msg.setTimeStamp(0.922820179287);
    msg.setSource(15765U);
    msg.setSourceEntity(236U);
    msg.setDestination(26817U);
    msg.setDestinationEntity(248U);
    msg.command = 107U;
    msg.entities.assign("IUCSUQXKYAJZFPLLXAZWNBCNZFSFVNKSDRZXATUKRKHPOZDWZQKZGQAIHHGJMBOLKMIUVXXHYPDNBPTCBLYVTTYVEOVUMHADUPONPKRMDIYYSPRSXYTRYYCNOXOZQWBFONBQQAKOAGTJLIAIDJPSXVKUEBMBUMEBFCJWCELHRJGJSMTGLEGVKLMYGH");

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
    msg.setTimeStamp(0.680230271647);
    msg.setSource(24984U);
    msg.setSourceEntity(29U);
    msg.setDestination(46495U);
    msg.setDestinationEntity(209U);
    msg.mcount = 116U;
    msg.mnames.assign("LNCYRUDKIFOJKLBETCWAKVHFKUPRLDOCHILBVAXMBRHFSPTVMMDROBQRJKEGNWNQUOZAHSLSXCOIXEZGZVGQE");
    msg.ecount = 30U;
    msg.enames.assign("NVHSEXQYKWGTBBYDVVWJVKKYAFGUILTJGGCNAGHADTJCCJZKETVYPWZCRYSOPSTIWCMHGFMRKPQHZHHXMDRTLUDTMIGFXJUPOQSRIGMUBSKHLEADIMNLWOJTQDVPIDONPTFVBFZYWZBSOJKXUSUAMPONWZXJIOOZVAFCRLHZHEFDXIBQKSEZPJKQUXIXDAQENBNNYWREEBWRQVCCTAQOKYSVXXFGZRCB");
    msg.ccount = 235U;
    msg.cnames.assign("ACRPJVNBSVLZCQPCNICDFBLHJOCWDUTQICEFAQUASHTFDYYVWIBVATMDWMHITQJGFUPFMEEKPLXNFMEZJXTPREQMTOCBKHELTSFQTKIRLPIBOGQVPCXJFOGQGCHKGEHDYWUNYBJHLNESROSRHXGTEQKDTWWPMYSIQVGXYRDROZNOCORMRBKBPUWZSZHVLXKMAGZBNMUDEMOFYWOSZVZVWVAJILUGUKX");
    msg.last_error.assign("EBFZQJVWLWYNHPQFUHZVMWGSXWYYZKFFDHJULRDPBLBAXVRVUQ");
    msg.last_error_time = 0.63666960757;

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
    msg.setTimeStamp(0.151891825531);
    msg.setSource(35498U);
    msg.setSourceEntity(155U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(193U);
    msg.mcount = 105U;
    msg.mnames.assign("BPHECVSAVALMQTHPGDDTDXSEDFIZQTPMHXNWPGFVNRHPOIFJQQUAAYCYPITIEOENRVGPITLYLHCKAQJKIZNGOJDYLJUBQEREKRCVUGOWVKFLHJFCTZSAASEHMNJNINPNKGTYORSMSFWEIMXRAXWSXZYWZBZKTLFUKBZBOEYRWO");
    msg.ecount = 142U;
    msg.enames.assign("YIDZFVINXZKEHTYKVISNFZNWMPSRCRS");
    msg.ccount = 133U;
    msg.cnames.assign("RWNKINABSCZBRCXZADLIBATQOLTJXQITNUCWUEVXBYICILCIAZNGMGOPWQDSUXZUSWKOYWBODUWJUVPZAWOGJUZQEBMXPFSVKXPBWJSZSIEKCYEHQXMTYGSQYTXOTFHYGROBLRHHNJKNMVDTKMMEPGGKRQKJNEFDDZXSHDQHJFBEVHLRLDJPVLRMCUUHGWAMYHFVZAFP");
    msg.last_error.assign("LNVKLEQOTQSN");
    msg.last_error_time = 0.764110073114;

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
    msg.setTimeStamp(0.195079285433);
    msg.setSource(34949U);
    msg.setSourceEntity(231U);
    msg.setDestination(39738U);
    msg.setDestinationEntity(138U);
    msg.mcount = 71U;
    msg.mnames.assign("WDGCAGRJLRECMUAATUVHHHJGICYCHEKCMXIORIDBKRNXJLYBCKCYIDTNWZPEHUEZTJNCBHGZVYVTQFKSPZRDBBWDKCOPIIORKSKGRNOTYAEFSWPZDLGFLWUKSSIMIUOVBCUXLKNSYZZBVUPJLDLWQRBBOMPAZZJWJGDRQJNNAGDULXQKMOWMYSOEEQTPWHXFNFAUQJN");
    msg.ecount = 151U;
    msg.enames.assign("TCNREOIQXDITCXJWLOAUMAHFFCGQSEHGSQHGCOMKBTNTLFBPJRZGUIJIRUKBWPNTAKBMPALVYSNHETBANRUQLAQWHJNDRKIZTYFKJWSDP");
    msg.ccount = 19U;
    msg.cnames.assign("KMGCIUMZGODTWRDRCFRVTFSIFTNWSXHBPYYFQKBV");
    msg.last_error.assign("OVBURITIUXYSVPACIHQGNIVQDZ");
    msg.last_error_time = 0.855846481286;

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
    msg.setTimeStamp(0.518755323243);
    msg.setSource(51315U);
    msg.setSourceEntity(156U);
    msg.setDestination(18135U);
    msg.setDestinationEntity(239U);
    msg.mask = 86U;
    msg.max_depth = 0.443509226316;
    msg.min_altitude = 0.259655589124;
    msg.max_altitude = 0.938552810694;
    msg.min_speed = 0.647896747795;
    msg.max_speed = 0.83168030216;
    msg.max_vrate = 0.858709167589;
    msg.lat = 0.821876273628;
    msg.lon = 0.954387717428;
    msg.orientation = 0.457067555622;
    msg.width = 0.210659622694;
    msg.length = 0.874672263275;

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
    msg.setTimeStamp(0.0675034766942);
    msg.setSource(6259U);
    msg.setSourceEntity(165U);
    msg.setDestination(7482U);
    msg.setDestinationEntity(192U);
    msg.mask = 14U;
    msg.max_depth = 0.195525689929;
    msg.min_altitude = 0.136249451659;
    msg.max_altitude = 0.159856215569;
    msg.min_speed = 0.502271200914;
    msg.max_speed = 0.606004186049;
    msg.max_vrate = 0.300160992065;
    msg.lat = 0.88622460429;
    msg.lon = 0.0327698580876;
    msg.orientation = 0.842347532553;
    msg.width = 0.508295323432;
    msg.length = 0.305458314489;

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
    msg.setTimeStamp(0.454508972513);
    msg.setSource(53460U);
    msg.setSourceEntity(94U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(120U);
    msg.mask = 174U;
    msg.max_depth = 0.48871736749;
    msg.min_altitude = 0.278107649081;
    msg.max_altitude = 0.177342865782;
    msg.min_speed = 0.701909328843;
    msg.max_speed = 0.23605463715;
    msg.max_vrate = 0.374459430489;
    msg.lat = 0.463206915479;
    msg.lon = 0.142251672542;
    msg.orientation = 0.762244068927;
    msg.width = 0.00766640552119;
    msg.length = 0.0512152393511;

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
    msg.setTimeStamp(0.96325546185);
    msg.setSource(65417U);
    msg.setSourceEntity(21U);
    msg.setDestination(53916U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.710876251236);
    msg.setSource(11159U);
    msg.setSourceEntity(42U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.401315557777);
    msg.setSource(1117U);
    msg.setSourceEntity(219U);
    msg.setDestination(22816U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.637802086374);
    msg.setSource(56956U);
    msg.setSourceEntity(33U);
    msg.setDestination(34338U);
    msg.setDestinationEntity(47U);
    msg.duration = 35719U;

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
    msg.setTimeStamp(0.766553890114);
    msg.setSource(10973U);
    msg.setSourceEntity(158U);
    msg.setDestination(20828U);
    msg.setDestinationEntity(188U);
    msg.duration = 15340U;

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
    msg.setTimeStamp(0.319980618196);
    msg.setSource(9598U);
    msg.setSourceEntity(248U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(183U);
    msg.duration = 63723U;

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
    msg.setTimeStamp(0.834270258228);
    msg.setSource(15009U);
    msg.setSourceEntity(84U);
    msg.setDestination(58054U);
    msg.setDestinationEntity(126U);
    msg.enable = 214U;
    msg.mask = 530406973U;
    msg.scope_ref = 3994701486U;

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
    msg.setTimeStamp(0.926633047182);
    msg.setSource(18206U);
    msg.setSourceEntity(218U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(218U);
    msg.enable = 83U;
    msg.mask = 2735093858U;
    msg.scope_ref = 4137210698U;

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
    msg.setTimeStamp(0.718524751216);
    msg.setSource(29601U);
    msg.setSourceEntity(109U);
    msg.setDestination(52490U);
    msg.setDestinationEntity(132U);
    msg.enable = 73U;
    msg.mask = 1831049247U;
    msg.scope_ref = 796652728U;

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
    msg.setTimeStamp(0.377234330663);
    msg.setSource(49719U);
    msg.setSourceEntity(85U);
    msg.setDestination(2796U);
    msg.setDestinationEntity(50U);
    msg.medium = 0U;

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
    msg.setTimeStamp(0.997205531703);
    msg.setSource(25482U);
    msg.setSourceEntity(104U);
    msg.setDestination(35740U);
    msg.setDestinationEntity(229U);
    msg.medium = 31U;

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
    msg.setTimeStamp(0.711326789267);
    msg.setSource(14577U);
    msg.setSourceEntity(130U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(70U);
    msg.medium = 42U;

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
    msg.setTimeStamp(0.471614276281);
    msg.setSource(39646U);
    msg.setSourceEntity(100U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(183U);
    msg.value = 0.456793192662;
    msg.type = 63U;

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
    msg.setTimeStamp(0.546344571032);
    msg.setSource(56971U);
    msg.setSourceEntity(194U);
    msg.setDestination(59073U);
    msg.setDestinationEntity(173U);
    msg.value = 0.862843776769;
    msg.type = 187U;

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
    msg.setTimeStamp(0.883533845891);
    msg.setSource(1569U);
    msg.setSourceEntity(119U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(18U);
    msg.value = 0.483437667124;
    msg.type = 242U;

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
    msg.setTimeStamp(0.108982814052);
    msg.setSource(16316U);
    msg.setSourceEntity(163U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.176916723373;
    msg.converg = 0.547257702808;
    msg.turbulence = 0.262751975081;
    msg.possimmon = 148U;
    msg.commmon = 104U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.840426877428);
    msg.setSource(59406U);
    msg.setSourceEntity(27U);
    msg.setDestination(28904U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.162269406844;
    msg.converg = 0.720578063634;
    msg.turbulence = 0.557787506216;
    msg.possimmon = 98U;
    msg.commmon = 128U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.505003222716);
    msg.setSource(51932U);
    msg.setSourceEntity(109U);
    msg.setDestination(41560U);
    msg.setDestinationEntity(249U);
    msg.possimerr = 0.158118420573;
    msg.converg = 0.451585632458;
    msg.turbulence = 0.472261916348;
    msg.possimmon = 82U;
    msg.commmon = 35U;
    msg.convergmon = 118U;

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
    msg.setTimeStamp(0.663062933267);
    msg.setSource(40134U);
    msg.setSourceEntity(199U);
    msg.setDestination(11665U);
    msg.setDestinationEntity(154U);
    msg.autonomy = 106U;
    msg.mode.assign("EUZOAYCRJPRXJMFOEMFNKAYLYLIWBKGLDRLCKOEKTGQGJVGVFFYGMBCPLVWAJJPIUVNGATHREIHASOXGYASQUWDPQZEZBNDWYMMQIXXDPUCOSZJBWSFOPHNSQEBYLGTPKIGIHDCBDRZELIIMBZOAGXKZQKBDRUUTXTNZTWFARWTMSYDPQTDPUSCJPSZSONHHTFRCEHJNFCEHONEKIMKCFVJFVUVKVLWJMUXXLORYDCHBYBSRI");

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
    msg.setTimeStamp(0.788014558986);
    msg.setSource(53291U);
    msg.setSourceEntity(133U);
    msg.setDestination(16311U);
    msg.setDestinationEntity(43U);
    msg.autonomy = 148U;
    msg.mode.assign("UADEODPVFIYDWTAAQNUVKBCLTYUNYHMEPFPVDSGVZHXPLSGEGUJINDPQENITCNSRUQNVZRMQQZNCWRMQVEGHAYIWVQZROECUXUUWFKTPTOJJJPXHFETWKKPXALYIJJEFXSLCTMYOOTK");

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
    msg.setTimeStamp(0.864830047471);
    msg.setSource(19025U);
    msg.setSourceEntity(19U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(184U);
    msg.autonomy = 252U;
    msg.mode.assign("ZWUGNDFFRLRRQMMOHVEXIEEUFR");

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
    msg.setTimeStamp(0.0872390144042);
    msg.setSource(26943U);
    msg.setSourceEntity(213U);
    msg.setDestination(23520U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.337418269823);
    msg.setSource(18234U);
    msg.setSourceEntity(218U);
    msg.setDestination(46338U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.669326485613);
    msg.setSource(53866U);
    msg.setSourceEntity(157U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.707777029843);
    msg.setSource(4242U);
    msg.setSourceEntity(42U);
    msg.setDestination(18682U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("WJDGJGQNVCCRRZMMAMAHTTLPDPKLJZVQXBDZKMADNFWVXGZKUAMKKDXPIOFBQGPYWGTWRFFWKMJYPQUEBLYIJNTDBLTOMSPPIBOUPNIEGFBEIXSQGHXIVVCZHDDPIXZXN");
    msg.description.assign("GOJHMDRBGYRCFUHVKLQMGWNRBAJBFDFEAMMVSSGOQCBJDRLEUXYTTRNVKVWQYCZEEISYGYKQCZWQUJTMQAUBAJKOWVWFTCYBEYPAOLNKUA");
    msg.vnamespace.assign("KPQYJLYCKFUJSXPNLMNMFLGSDFKNIXTWLXDDSPZQDMRGQGOADFXPKISAXTKYNRCVPHSYMOWOPEMZSJXFYUYAALHQZGBRFVXOOUZEVMBEVGMTCORTXWMABBQTXNACVWTHOCVCQURFCAVBUYBBMLIHVACQPEDWJLGNTZKITJCGANNIKWWREVBGUJJNSMRULFWEGDYCLNPZZWREOSIASUOSYVKIXDHDULEKJZK");
    msg.start_man_id.assign("QESWZMMPPDWCNTOWVUBEFQIJFXJBOBABEAYIXFTRYKUDOCLCDXYVHWGZKQHSGIISJCDDZUPVPEKAHJUZHYMDNHFFQSTAKVMQFRZFVGLRLROVCLFSVUAILENGEPZZAGCZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZGSRTWOEVOBDWEPQCKQXBMPYMCKJEHILTJFVXHPMYHYOP");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.978163946153;
    tmp_tmp_msg_0_0.lon = 0.675000101875;
    tmp_tmp_msg_0_0.z = 0.771967942141;
    tmp_tmp_msg_0_0.z_units = 37U;
    tmp_tmp_msg_0_0.speed = 0.587204701713;
    tmp_tmp_msg_0_0.speed_units = 35U;
    tmp_tmp_msg_0_0.custom.assign("DCRETHWAENNDGEAISYRSVDXWUAOGJQTPSGVKNOLPPLNWLWEYBJQWEAKCIBVXKWJFMSNOZTZUZLWYQMSRCZFKIXRIABOUKRALTSMOUNWENFRVCIUXPDGOJJZPCHSICRDCQPYAVHYGHCFTCUFALPHDUZIHQXBXBYDQAYBE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SetEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("WPGAOIJZYOXCVTPUADUUULXSTFLTQHWTDGPSCXTNHGBOHOQXYJRDFECAFUHCCTIWBEDNRBKQVHZAWFFPCFRYBQPTCISBNVQCABQSFLGCLJHYNSKLKXUVOLPVKMZRAWJSEZWKOZAFMABDXXHMCDSIGNRMHTWGYGDKBNMFPEQNQHGXOHYWAYLYDODIJIQWBYUELDJZJVQRENXMZUKMIMWKPVRRAGJSGZTLTIZKIRVZPIMEN");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("FVHSNBWELNERSBGYODQFPGKTYIBNWCOQWXV");
    tmp_tmp_msg_1_0.value.assign("SALWEOFCRRJQSBCVHNLUWTIDCHHSEFIXAVGLNDWQRQABOZODOCKPGLTAHKGSZFKFBHUZGMNYHVOFMJUJVXQFPLZJIRRBYWREQPPZPNGGKEIMMIIKISEXLPSSTDTKNRAWCBMWIAEPLCXSNUJDKNVUEXMJXRZSDSPYZYWNVVDJOCJYFVYCHHUYFLEUONWDAGTYOXMEXQQEATKWMMAGHZJDXOZVBFDYRWVOTGRGBATCJPQUPZBQBIKYTN");
    tmp_msg_1.params.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.454850188486);
    msg.setSource(6476U);
    msg.setSourceEntity(10U);
    msg.setDestination(63427U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("VNFGUGCDRFNFCSFODHUUQMMDRHSYIPRHMJUWRKQD");
    msg.description.assign("SHQTIYKPOHLNJDHZGYJBJIVWWIMNVFRPELPJRRJKDSNBHGYKILHLXYGIMCHQMXTTVZQXGREXJFZUGDSZUWNCCWAUDSETMVFNYSLSWWVNWFRT");
    msg.vnamespace.assign("CGQLLPWKEDRQVMRBEKGPGCUPLUEUHXDEBQTANZEWKMKVRZXMDUCWZZBJXRKQWROMFTPAPSLBISOKFCHIZAYZYGTQPJBIJKRSJMXPLCFCRDGVQKCSHUAYQXNSLFLOQRTNTJAFVWTYZHIYPFNOTQFBOECXRGVGXIZUDNMXNSHJDWEKKUJWGVBAOFPAIEUNDLCZECZYHLYG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DTSOVQOWIXFVXVBLZFDIROHJKCQVJUJTDZZCUYFZDBYTDUXFPVRUSABU");
    tmp_msg_0.value.assign("GOZWIHAZNVYTUYUXYLRRIKMBMWMURMGCZCVLIBEHXLPDRXYFTOROJLJEHFNTODUTBAYOEBJSEUVQIXODHOCFUYINTBNJQHRUDTMUOAJSIVSMVWSFWYBOIWKKYXVQMHKSQPBWZCJZCETQVJALZHZAJVTSHNFCKZRRKSPYDGCQ");
    tmp_msg_0.type = 239U;
    tmp_msg_0.access = 6U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RGZRDIOYCJHMKPLCUKLJDHSZKUGLDNXPROIHYSXHFYPWVVBIQVNRLIPGLYRNTLHCLFTHAGIPNAUMXDFTSYCYKNUUHPMMXKSTSIZWWGWVQLUDMBVKUFAXJFADEQSQGWWRQVJBTMIYQJPGTBSYBKMYCWADRABDASMSFOETICEHBMCNUJNTWQICOUOHXWEXEJBS");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OPSWNKWQHLPDRFOOKPYJBWIXLGIJCEDNJYAFTJHEWJCRXIEDVLPUGKETDZAOPUTXZRBCVMQBPDMJYYRETXQNFCGPZSHTCNTZEIAITNBVQDUFKCXXODHABXNCYLWREMGJUGU");
    tmp_msg_1.dest_man.assign("BSHGMLHKAVRHCMTGNRANHXGZXYLNMBVZNXWREQDCWSTBTHXYBKZQLAUHKVWLKQZNGMXFJVDVZOAPDPEQGXUSDXFMUYULRSZPYQZVYQIFAWKKDYJMPRHNJSCRLJOGVEZWLPWDZCJOFPGDSEGXVVKIDIILWOBBECBGQQZTWEBNFESOYFQSAUIJIEDMT");
    tmp_msg_1.conditions.assign("XXBVHGCZQMFMBGHBEDVXOJFZKLVZLCPCPGKYRZGDCLRNBXCOBJAMJZ");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 4186U;
    tmp_tmp_msg_1_0.lat = 0.502060662728;
    tmp_tmp_msg_1_0.lon = 0.568373747033;
    tmp_tmp_msg_1_0.z = 0.779895921967;
    tmp_tmp_msg_1_0.z_units = 196U;
    tmp_tmp_msg_1_0.speed = 0.928122129893;
    tmp_tmp_msg_1_0.speed_units = 73U;
    tmp_tmp_msg_1_0.roll = 0.597623474101;
    tmp_tmp_msg_1_0.pitch = 0.932732684583;
    tmp_tmp_msg_1_0.yaw = 0.830492312287;
    tmp_tmp_msg_1_0.custom.assign("QVYKGSRMPVQMFGMJRQALMERBAWMSFXJHPFHUIEDSRHIXZJZQOAQXDGFXMQQOBDGKPKXVTKMVLDWKOTBTFOBBZXJLULIDDNSFBKCTXOVCXHDHIZXLEDVEEPWISFTVNLZZUULTHPEBNQPEVUWJEYXBWUEGODSMISRNHWCVRK");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Heartbeat tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.246915362896);
    msg.setSource(56403U);
    msg.setSourceEntity(23U);
    msg.setDestination(49866U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("NNDVVEZTLYQRDIGQSZQYANYQVIKUXKWKTHJSFHPWAWEEGOLLXQLFJQSFSTTGZBOTVNHMNFOIMLHURKHOYXRJEXEWNHDCEXAMYXEXVQQZTODIDTCPPDHZXKIYAQURZCSIPMUNSKUGUJPBGVLTWJFPEOJDQMMCCRBGHAXDULPRVCB");
    msg.description.assign("FBDVXKOMFUGEVQIFUSUZAPWAMLPKWITBDXTMQJVFGAHHUMQNPCJLLSPVZQCFSAEJHKQUFOHYYRLWQUKNQGWGYDOSMRWEKHXWTKKSYPYNASEUUVCZNCYFHGEFXGYOCBBYIQWULHIDFZSEPCQXLLOWWTMSGPRRZVESXXKOIVRAOUVHYMOREGCIQJHOJDJNBRNTDRTBCZPPZILVTBA");
    msg.vnamespace.assign("JZLWFQRACBVWGOQBKRYQTPEJFQHXSWQYVZXPUZORVYCZELEUIMGUGYGNAENEAMRCTPDEANN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AFQMPVAFCTXCPJQGUYEIJLODCQSNZZSRCLXHIHYRSUNQQQTKERHLTOQTMLDXNUXCEUBIRGZQFHHRPJROKXLPZHEWHAEBRCMCAISVFABVWGLWVSWJJGYPFPZSTJTCLKNDVXNMABPJWGDVOXUJEYWSZGTZKOMTRXAFUKZW");
    tmp_msg_0.value.assign("BVOVPZKDOEJWBCPJYESOKGGTQNCXREPQQSMHJHKAWPTLGXQUYSS");
    tmp_msg_0.type = 9U;
    tmp_msg_0.access = 219U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GNDJRSJHACTJKFZQHFBUZOAROCMGOQBANTCDRQPBXALFDDRQEYEZDCXIBVWMFDHKEPRKGXPEBCLNIIHUASYMSUHLMRZKKEZQQLZBSTKINGBIYWMCVOYEQFEWZQWJEXGYKBASQKFYAGRNNYVIWEJGXTTWTUNZXZHDHLVGONNIIXHLGUSTVOUVPWPYMIJVDNCDXGOOPFSPCPQHFTSBVJRC");
    IMC::DynamicsSimParam tmp_msg_1;
    tmp_msg_1.op = 105U;
    tmp_msg_1.tas2acc_pgain = 0.756277126599;
    tmp_msg_1.bank2p_pgain = 0.641126148598;
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
    msg.setTimeStamp(0.945914047649);
    msg.setSource(15858U);
    msg.setSourceEntity(101U);
    msg.setDestination(12434U);
    msg.setDestinationEntity(34U);
    msg.maneuver_id.assign("XMHPBVVVWQTXHMVFGAPXBIFZLDYWECAVUNYYTKZNMBTKXDDCEOFBNIMVUVRCPYZWAFLHBLFTPDJMSRDBYXEYOGUMLJWEUVLVJSQJRZBFFSCILSYKJPOCRNQSINNHLKELDKUOGHGMWMOHWUEXHKEMEZZJCQRNXKBUTQIGNZPSWIAPMRYIDWOWDKIQHIAPSGBSZQKFFAHBNPOKLZQ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 61681U;
    tmp_msg_0.lat = 0.396212164783;
    tmp_msg_0.lon = 0.157985974779;
    tmp_msg_0.z = 0.591254851732;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.speed = 0.346230204562;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.custom.assign("OMAQBRTRQWUAJGOKZPJKLYTQNEYMMDYBIRAPEWLUXPMCOQSHWMJJXTUAHOJCWXXHYWCPVRGIIZLRYLIKWFJLAQEVZQGTTCIOVFDVVYOCCDYWLPKZDWH");
    msg.data.set(tmp_msg_0);
    IMC::PathPoint tmp_msg_1;
    tmp_msg_1.x = 0.0240930678839;
    tmp_msg_1.y = 0.0115034112233;
    tmp_msg_1.z = 0.238966833643;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ControlParcel tmp_msg_2;
    tmp_msg_2.p = 0.788273444349;
    tmp_msg_2.i = 0.0350619815291;
    tmp_msg_2.d = 0.51130225057;
    tmp_msg_2.a = 0.430380611894;
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
    msg.setTimeStamp(0.340599716119);
    msg.setSource(2693U);
    msg.setSourceEntity(50U);
    msg.setDestination(8029U);
    msg.setDestinationEntity(225U);
    msg.maneuver_id.assign("IJHARLZGCWZZFNLMVAPAWMHYYYTFSQQAJBWEANNKKPRHGLBSBMSSJLVDZZZNKMXXBDQHGXWPARUUJRDCSUSMYORCQGWOCXJBVOTMNTKEPYVIDWAYUOBZFNFQFHTBCAUKUFYARSRFZICPEWEWNQBOXHPJGVIIILWJGVDQLGLKATCIGJQFEKZINMJIUIHSCOLSOEWPQCKBRXPEG");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 60316U;
    tmp_msg_0.lat = 0.00262123227425;
    tmp_msg_0.lon = 0.85556063079;
    tmp_msg_0.z = 0.944381401933;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.speed = 0.840806284467;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.custom.assign("XHNPYPECCTPSNBIYTXYRMPFQELZGOXTKDASCHQFDZHRFMVXMFIXGOWUAWXEFSPYVZWSPHLQWUNUVMKWQODAVXBDVUBSJQRLGEVHAIRGNZIKIUFLGZODJDAVJNQAHSQOCJRQUUJHR");
    msg.data.set(tmp_msg_0);
    IMC::SetThrusterActuation tmp_msg_1;
    tmp_msg_1.id = 106U;
    tmp_msg_1.value = 0.932729984099;
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
    msg.setTimeStamp(0.213649525967);
    msg.setSource(4950U);
    msg.setSourceEntity(206U);
    msg.setDestination(46825U);
    msg.setDestinationEntity(181U);
    msg.maneuver_id.assign("WCZEIAEOJUAVUGBZDMGCHDDBPXKCQBQBKPAQORTYHKRNGPKUXAAQMLKUEFVYDXILZISNAWHEBQEDRBNGXNARTEYKTDEQOWGQFQHLXCHMOKPYVHJSJUOCOEZCVGLPTMW");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.472818756596;
    tmp_msg_0.lon = 0.0250183613484;
    tmp_msg_0.speed = 0.862693354582;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.duration = 49126U;
    tmp_msg_0.sys_a = 38985U;
    tmp_msg_0.sys_b = 9407U;
    tmp_msg_0.move_threshold = 0.560562564721;
    msg.data.set(tmp_msg_0);
    IMC::LblEstimate tmp_msg_1;
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("QVNZARAERYSVVAZRGKXCGSRXUTWPVKFHWD");
    tmp_tmp_msg_1_0.lat = 0.0116323646358;
    tmp_tmp_msg_1_0.lon = 0.778743498341;
    tmp_tmp_msg_1_0.depth = 0.835504799909;
    tmp_tmp_msg_1_0.query_channel = 35U;
    tmp_tmp_msg_1_0.reply_channel = 238U;
    tmp_tmp_msg_1_0.transponder_delay = 121U;
    tmp_msg_1.beacon.set(tmp_tmp_msg_1_0);
    tmp_msg_1.x = 0.661932680451;
    tmp_msg_1.y = 0.870279896707;
    tmp_msg_1.var_x = 0.48494562695;
    tmp_msg_1.var_y = 0.740811321467;
    tmp_msg_1.distance = 0.894351137852;
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
    msg.setTimeStamp(0.282988037436);
    msg.setSource(53813U);
    msg.setSourceEntity(211U);
    msg.setDestination(30036U);
    msg.setDestinationEntity(219U);
    msg.source_man.assign("LWKRRRCLHCNIQXKGTKAROBEWLUVKZZOGHIUVIXGLBWXZCWLDPFDEUGHZYZQWBBGJHYHFEDQCSHDUDVIFWF");
    msg.dest_man.assign("XPAHQVDNNAXIIVAOFRWGJZQIKZWSFYREJIZFRYWGNSFI");
    msg.conditions.assign("QUUDARVSOZLBFQNBPNSDFOXOJITHBZMOUKFYSSWWEBQLEOKCWFGWBEAKTXGUVOUJPZVHPRFZLXNVSXNOKZMBKKAKULYJRVGHLRHQZSEDTXQCGAY");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 36696U;
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
    msg.setTimeStamp(0.712320141816);
    msg.setSource(16070U);
    msg.setSourceEntity(62U);
    msg.setDestination(37138U);
    msg.setDestinationEntity(179U);
    msg.source_man.assign("LBLNUVVLQMENKCUXJFYCPZVWCGZRKIYEAWYEJEMVDDTOLFHCGLTQWPMOMIKFBSHTVYJDRRNAKLWGXWLMUOPETOTUOEVMIQCOGSIPVKIIHISPZYDDDRCQQPBUCVATEHTXFIFBJNYYBNUUOYRYFUJDTCFFEPNJGZ");
    msg.dest_man.assign("VCTSAOEMKUBQNECBZWTHLOOMPRGLOSRICDFHAHPEXMLZWAWYDUOWIFQOVAKPZBNKYGDTXKGPYTRROQFSXQYGHGZPBLRMFNTSTXZAJFVIEHINAGNIPFUNEJJYSSJPHMYEORRUQBVUXZETXXBJZQPOKYHDVQQHJWVDJYKEIMVKAUCLJLCFTLZGWTCNIHDKEWGBNSRVZUSBYAWTNKWUZCFADMCQNQCDLBDLEDVXR");
    msg.conditions.assign("CNSDXDEZXMCLXMCSZUXTBWDAHVMMWIQCHGUJRSGQXHWUFBNTIGIQXDOBNURCVNTXYQAPTBKAYVTWEFFVTORPYEYCDHBNCHUJFJZVHRREOIETAQLVAZSKHLIGMZFWZLTKFOEGQLQGPXNBXJEKQSPRKBKIGCADWUK");

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
    msg.setTimeStamp(0.528004748522);
    msg.setSource(7493U);
    msg.setSourceEntity(119U);
    msg.setDestination(28022U);
    msg.setDestinationEntity(171U);
    msg.source_man.assign("DVLRVLQLTADAVNAWCTUDFCDOVEPFNWIAIGUADPSNWWEQJEGAYWMMXIGESBAINGVKBIWOJB");
    msg.dest_man.assign("QCTSXHNKYWUSVPMGBJRFKELQGUFJHXCEVXVOAANUAFYNZRKGZKZSIYBFBMOGHUDQISIZWAWZNZEEGNAJGMEVRHTUMBCGIFCENDWHDMMWSLQPEXEAOYDCQJYKZLOFHTSJSQLTVSTPIBSMPXFUYRVNKQQCPPKZPLQALNIUWUODVWBNMAZTYXXCFWRIBZUHGCKWAWLPOPLMXJUREONODYRJHILRSVQJYDAVFICOBDFJOHMKHDLXRYTKTJEBTGRDV");
    msg.conditions.assign("SDPZQTMJVEWXUPRYUDRGDDWIWAEVFQCQGDENNJNMHNRZRGBSKYYNZQEHLKKMPOHMWEAIUASKIKXROOHEIOTDJLZPBFPDUFBMKWUJVGKLQSEKTCGIXNPNRJMAXAVUTZXPGIMWHPGYZFCWVJYHLOJADMQXUOBRFUGWKVWLLFBZLRVENQMFMEETRDSKBISBQIYSPTXTCCZBGIUQRTZTCAXXVSLZG");

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
    msg.setTimeStamp(0.676581086305);
    msg.setSource(12169U);
    msg.setSourceEntity(86U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(126U);
    msg.command = 38U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DHTTOWNQRLPYRWXWNKTOIFGUEGDJSSEGUVS");
    tmp_msg_0.description.assign("ACVYANLVUWFHFQYUSAR");
    tmp_msg_0.vnamespace.assign("KGWEDZZJVJVEGPGMFRMTPBMWYCDDVKEIAYMHCBHVQGLOZYOSZTBTKLEXLJLOCLO");
    tmp_msg_0.start_man_id.assign("BFZNANQRCYGRTLVQSWPIRRSKFRMAISEQHN");
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.294421413018;
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
    msg.setTimeStamp(0.509048375144);
    msg.setSource(23924U);
    msg.setSourceEntity(147U);
    msg.setDestination(44726U);
    msg.setDestinationEntity(6U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZOCTDOWZAUGCRJZMTKYWDRNCPQVYKSBPVHPWYEENGNSISQELDCXNBHVIVUDHTOQXDKWVZZBOAQZJSVGOXZP");
    tmp_msg_0.description.assign("GJFNQECXMXNYGQXQBWYBMKFLPGJCIJWEOEPAPGFGQLDJDYNHCAAZKIYBXRBKRSGQKRTOLESPCCRADNJVOVHBBZGFITXFFWL");
    tmp_msg_0.vnamespace.assign("YOKNMRUHLVWNYKNTTKVGSOYYKWCRIVXFMVWFXMRIDLDNATXDCKZNFCZRKVUDLATGVSLWHZQUGIQAFJKEKTBXOIZRWJVMSQNYZEUUJAEFHWEAFZEIBLCHB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GNGBLGJRXFINYEBVWMXHYQFIKOCVCBBGPAZXZMSNNNGZLXWPPRQ");
    tmp_tmp_msg_0_0.value.assign("FADQCTBTBFAVZFLEXQWGMXVJQZOKMBVSSLDHDFJYEMQTJKWIJACFCWWWVBUGBBVYEINIZPPKAXHJLRRHOEQVKZDWSNYZDRCPAERBEKYPOJOMUGZXGCZCBTSWHCATUWSUQIYUXHALSSYKHLNFUFLQNIJIXTCAFUAGNIOPMMJGALDRDEEJNDMDKQPNVGMLPNGSYG");
    tmp_tmp_msg_0_0.type = 216U;
    tmp_tmp_msg_0_0.access = 193U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DSBOSAVXQBDQIKHYWYCPFUCTVUANPXLTLJZKEYCM");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SGWOLDNEIBPLMLWALFTQBSVUHJVFEDKMYOJVGUMNAOMDJXIGNONBTJWSWJRUXRZLVFCQYPAZIDGNHIQNWNEXPSRHXFOIZPCDEZJANNOGFMUAIYPSX");
    tmp_tmp_msg_0_1.dest_man.assign("ICNLEGKUZAEHLXIPBLQYOPTSBQFXCJGOKWBKTTBVUTABEWMCKFAHFAQDUOPXKJCRWRIUUERZOHAPNKYKLCMSONAVWGVJMSCNHCPFWBYUVPA");
    tmp_tmp_msg_0_1.conditions.assign("PCKATWQFDAMBLENIZRRPMZCIHWGJLIKPVYHWUXNSFTXZLGMJMBKVFCRDMLQGCONLUKNWOSAEQXDOERSKTXNOHTPVUBASZFPOWHZATSUEDSGKULBCNVTFEBMNIRWHNLRXWZHFQCAKXTOLQWIAESCCHP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::VSWR tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.160879816904;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.934858422334);
    msg.setSource(29055U);
    msg.setSourceEntity(225U);
    msg.setDestination(9153U);
    msg.setDestinationEntity(252U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RMUEIBPALDWKPMDQMBBEMWTGUTYIZMYMUQZRJROQAPHEXFVIBDSVVCZLXQXPNOVVUEWZEOPWYRHYHSIUZEFKKWHNDWQJNDETUFKQACTRFAIIKYSENTSRKGBSXAEJRAGUZLJFLJCEAQCCWGRYXBDVOZWHGQABCTNTNZTJDJGQSXFNMOYFJKOCGBUVGLYOOPLIIJPIPJNYOWLXN");
    tmp_msg_0.description.assign("ZASMDRGLUAKLVFMSGUWXWRVYFLKYDQNESBRAMNPDZYXFGOEELRJTBTFEDAMQYOQWUEWHVXIHCGLKFZKLJOSTYKXHIHUACTKTGOSIUXNTESRNJWEMDWXIQLTWFVYNDRQBPPLTXPPDFTIECGGZYYCZJJSUAKGMYZAUKVROBRMMHJIHAWOJOXIIBCWEHZKU");
    tmp_msg_0.vnamespace.assign("SIYNCVRLKAPHIWEVSJJMABYOCCEWHGNXNBWAQZFGHDLWSZNKNAHTQVH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IRLTXYFDGLWWCSQEQMPJESQYPVG");
    tmp_tmp_msg_0_0.value.assign("FHGJGPYCXEBNFNXZDMXUUMOHDYZKUWJVRMSLPVJZMHRGVUPSPAZSNLHNNAVQBZKWSFIDOWVWQCPSETDRFCBABRDXIBIDYALACIRZTBTHKTIELHKDPLONJXGJOUKFUEIKSXLCTAAYYPRKEQGWLNHUCHMVZGIAPOP");
    tmp_tmp_msg_0_0.type = 49U;
    tmp_tmp_msg_0_0.access = 192U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LHECSDDRTTGBIAAQYJEAEAEJEJHGOWEINKREFSOQUOZQVWUOQXYXIZLAFRKCSYUXNEFJRLCNXODGPHMIHWUKKJZTPUGSSIYLAHPGXAGBMYSYVPMDHYJLJIQLXTTDPMLRVLFGPQMMTKTMSCGNVQPKTXSUPVXTLCWRKBNOZCHNJIFUBZWHIFEHEIDBCWNFQXIWBBVKKUVBM");
    IMC::PathControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.start_lat = 0.350964721265;
    tmp_tmp_msg_0_1.start_lon = 0.914625303553;
    tmp_tmp_msg_0_1.start_z = 0.372349599349;
    tmp_tmp_msg_0_1.start_z_units = 18U;
    tmp_tmp_msg_0_1.end_lat = 0.286288877944;
    tmp_tmp_msg_0_1.end_lon = 0.849853509195;
    tmp_tmp_msg_0_1.end_z = 0.297384704771;
    tmp_tmp_msg_0_1.end_z_units = 80U;
    tmp_tmp_msg_0_1.lradius = 0.0267927400476;
    tmp_tmp_msg_0_1.flags = 99U;
    tmp_tmp_msg_0_1.x = 0.628937938675;
    tmp_tmp_msg_0_1.y = 0.473690617109;
    tmp_tmp_msg_0_1.z = 0.616222791262;
    tmp_tmp_msg_0_1.vx = 0.670302012709;
    tmp_tmp_msg_0_1.vy = 0.172699767749;
    tmp_tmp_msg_0_1.vz = 0.144943299119;
    tmp_tmp_msg_0_1.course_error = 0.421540460672;
    tmp_tmp_msg_0_1.eta = 27917U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::IndicatedSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.0275133908209;
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
    msg.setTimeStamp(0.114482892419);
    msg.setSource(12815U);
    msg.setSourceEntity(249U);
    msg.setDestination(54415U);
    msg.setDestinationEntity(46U);
    msg.state = 197U;
    msg.plan_id.assign("UFGSFBPUBIULWNTYDWJYFHHNMKOUJZNUXROAIXTQEZAWYHVZBOCIKPTRKJDJNHEPDLCNAGMGWBYV");
    msg.comm_level = 141U;

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
    msg.setTimeStamp(0.181387761012);
    msg.setSource(51235U);
    msg.setSourceEntity(188U);
    msg.setDestination(48600U);
    msg.setDestinationEntity(170U);
    msg.state = 236U;
    msg.plan_id.assign("JDIBEGOKKHWCEZRDTIBKRFOBBWTNVQNLQRSKMIXMMNXQROBGVREXFZKKONQWCBQSJGNGZALEHNELRAFGQACAPLIEVKYBSCWJPSDBZOBYDRFOYVYLRCJJGUGCSDMLKXYRMONVTFWHQTTUYUFKVTNWIZPYZLUISGUAL");
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
    msg.setTimeStamp(0.883286042336);
    msg.setSource(33729U);
    msg.setSourceEntity(180U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(47U);
    msg.state = 142U;
    msg.plan_id.assign("SLVGRYQXSZKDYMKXEKSFUCODTGRJNVUEANHBVQECOWWADCCLUJWLLYBHPJTQCNNVSWOURQXOMGKDYNZFVQDYWCTVPTGJNIGGRZJUGTFBLNSZUIBNKQBIFVAAZOJRPXQKEUBHMUAPFVYJMYHOUIHWKAMEHPLRTVDAYZJMLCLSDWLRQYGMKPZCGCOIYIEFFXQTIHSBBRAQEORBMJKWAZZHXHCNHNGMSTTLSXUDKSXAWIJIBOEX");
    msg.comm_level = 183U;

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
    msg.setTimeStamp(0.962009780911);
    msg.setSource(17572U);
    msg.setSourceEntity(244U);
    msg.setDestination(57965U);
    msg.setDestinationEntity(152U);
    msg.type = 9U;
    msg.op = 209U;
    msg.request_id = 20892U;
    msg.plan_id.assign("JFAXDPRDBUSYNMCAGKCEWOTMAWVSZMFZIOVBDTTVQXNNFXUKPVMLXATJDJPMWFSERWUIAFNUUMRPHQBOZLKGYJBJHNBUOPYYBITRTKVKLBLWZCQLGGRYEFKYBJSCZWEJPNALXEWIHVMQNOJSQVGR");
    IMC::ParameterControl tmp_msg_0;
    tmp_msg_0.op = 254U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MISJMVPHHPYLTCKGFPFXJTKOEQMLOWOKBYAYNSWHGEXBRQLGDGDDDYLZOKBDJIVCEGVXRWOQEPQAPIYESLAJXXHSXIQOVOTRMFNFKWCUYAIXVXNSHUAMEQEKRFNVRIDZZZNIMAPIHBJPWIHDBHCKEQITXRSECGHRYCTKYMWVSGTZOEDAWUKS");

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
    msg.setTimeStamp(0.614014839596);
    msg.setSource(19785U);
    msg.setSourceEntity(148U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(124U);
    msg.type = 102U;
    msg.op = 41U;
    msg.request_id = 7672U;
    msg.plan_id.assign("ABRFELTRZPWMXNVCKRYOEVQVHXKCIMHOORWFSZIJKIHELIUWGSKGWNTIOSGJYLPRDXUIQQSMMGZQAOSYVZIMBCFXTQWIHOKTNKADBXSFAAYQNHBCLMYFDADCMUVNQZEHXUFDXEWEDJULDTTSVC");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 45U;
    tmp_msg_0.goal_id.assign("ZJIWCMQPVUXSWORQZNHWQFPEIWRPJHRVITWRUYAMYRZMBZCYXECUTBSPNGMLSKFDFAHOVNSYEHJZDLUVSNAXGDJBLOJDPPGHAHPNAULXJEXRFFOGJCFDCROTAOKUKWBVIDQLQZSHEPEBOCKCJQOEUNWMRNMZ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("GKXRZKLPNJVEKDFXRNDRYHIXPJEYGBWAETAORMCBOEALPYZRMXNKEXGUTJDCYIFRZDLQSSBTAMMCNJVBVDYAUSHAQQXBWJRAZHRLSBWYFEVOPFOVWJKKLRSPTGOTLMXHLILYKZLADSIYPMWCYKIVQXCTQSYFWOCHHASFCZDUEOUUBFDTKBJNTVWJUVVDNNHMIMWMXUPKUPUCAZVDECLQUTGMHIOZINHEIIBTWFEGCQPNOOXSQGJFSQ");
    tmp_tmp_msg_0_0.predicate.assign("FCLMWFOJBZDXZOXLZEQBGQJOALGCVXTAURFHBHDLMHYAFXEJQSKRGXHXXBPMRVJDZKTALWQNPJKVTHPSVUSODUCFYOECCUULDBYRIOIJNHFFVZDRIGRZRLNTEKCAHZWWFMETDSJIYPWJCOVNJWGINKUBQIRESESHYHBGTUNQLNMIQMKCUADMLVTYWTBNPHMWVYQQNXKLDUWDOBGSNKQRFVGPOGWPPZYSYUIEFOXSBPCXGZTEACI");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ENIKQSZYVBYRJSLYI");

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
    msg.setTimeStamp(0.967709494512);
    msg.setSource(64921U);
    msg.setSourceEntity(115U);
    msg.setDestination(27198U);
    msg.setDestinationEntity(137U);
    msg.type = 105U;
    msg.op = 80U;
    msg.request_id = 7848U;
    msg.plan_id.assign("EKKFHRZNANSGYUHMQCDNCOEMMSFIZXBXKNVOUVETNLRCMTSSKNWHHJAVOZPQOXLYPUXKRANMGXAPAWRPJTGFYTTZRLVDDVGPLWLVZQDQEOQW");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 30423U;
    tmp_msg_0.value = 85U;
    tmp_msg_0.error.assign("CZLMNBHZWAWRSZIGCXDGFDBZFPDNQBJOKVATUVNOPJRBOLSBGVVFVQSZQJNDGLYXJNZYWKDKMEQWVLZHLAKEHGBJOMKAPSOOFMGCIUITWHRYJETLPQIRQTHPDVCKFCFSRPDFACAMNXLIIRYRNGHUBNJYSJINRYKEXESNMQUHJPMWRUXSYAKPEIQBWWAXTUCLRZEZIXSPUCGBEFCZJQPCKMULLDKTGHWIOSMVWHEYU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CBIPNAIJSXDFAUCFYHRKG");

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
    msg.setTimeStamp(0.460374580767);
    msg.setSource(3952U);
    msg.setSourceEntity(174U);
    msg.setDestination(42205U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 63265U;
    msg.plan_size = 1126177049U;
    msg.change_time = 0.867103229655;
    msg.change_sid = 30928U;
    msg.change_sname.assign("PDNFREJBGXBWPRLJVODDCWONKLAUCLWEENTD");
    const char tmp_msg_0[] = {-22, 97, 22, -84, 48, 55, 5, -33, -27, 70, -95, -69, 57, 4, -98, -55, 123, -65, -39, 62, -87, 68, -48, 10, 97, -78, 13, 112, 2, 61, -6, -56, 104, 60, -77, 36, -98, -111, 34, 79, -120, 107, 82, 70, 73, 44, 21, -97, 9, -22, -55, -71, 84, -31, 70, -116, -75, 83, 64, -93, -26, 72, -118, -95, 77, -44, 124, 94, 5, 83, -122, -81, 40, 104, -33, -104, 123, -50, 55, -47, 111, 115, 49, -97, -5, -40, 43, -85, 102, 114, 62, 25, -4, -45, -110, 10, -67, 85, -59, -6, -48, -106, 29, 41, -20, 70, -46, -110, -71, 106, -36, 81, -26, -80, 67, -28, -99, -55, -11, 88, -70, 30, 58, 70, -61, -86, -126, 41, 89, 7, 103, 31, -54, 80, -126, -1, 1, 82, 54, -111, 36, -1, -52, 105, -84, 71, 44, 73, 5, -64, -79, 71, 43, 34, -93, 117, 85, 94, 23, -126, 21, -80, 116, 12, 3, 27, 46, -82, 125, -55, 104, 19, -67, 25, 6, 3, 87, -117, 63, 109, -11, 9, -76, 103, -2, -83, 116, -121, 98, 126, 0, 103, -42, -95, 99, -88, 67};
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
    msg.setTimeStamp(0.638402810758);
    msg.setSource(24909U);
    msg.setSourceEntity(164U);
    msg.setDestination(5941U);
    msg.setDestinationEntity(166U);
    msg.plan_count = 31818U;
    msg.plan_size = 4134015789U;
    msg.change_time = 0.151336879982;
    msg.change_sid = 11090U;
    msg.change_sname.assign("MSQGZETYUVIYTMCFGLGUUNMLWOOSKCSHEELXLYTQFCNISXTHDQMJHBJDNZWWVBOIQNBFGXHSUXJDUFVPMYTCAZLSBFDSCNCTQAPXSPXOYZBHRJDXRSXJCNZLJWAUEDBEGCWMEKNIXYYGEJKRRYZFVDRXKKJNBJPTLLAVKCTZWBRGPZVQKHYJWAFVLHIQWNPI");
    const char tmp_msg_0[] = {-80, -70, -72, 26, -97, 51, 24, -16, -2, 112, 52, -36, 81, 20, -126, 46, -69, 120, -60, 117, 12, -12, -121, -73, 44, 118, 69, 66, -43, 43, -127, -36, 41, -119, -71, -117, -109, -82, -22, 85, -107, 84, 46, 42, -10, 99, -104, -56, 46, 96, -54, 12, -29, 126, 74, 10, 94, -13, 34, 5, 30, -107, 118, 71, -73, -81, -22, 17, -127, -76, -22, 58, -105, 20, 35, -69, -60, 11, -72, 105, 88, 93, -116, 48, -85, -3, -24, 20, 48, -35, -89, -75, -53, -121, 92, 89, 46, -59, 4, 63, -18, -110, -86, 13, 75, 31, -84, 45, 18, -5, 96, -12, 10, -125, 92, 8, 105, 6, -5, 78, 117, -107, -81, 33, -52, 19, -109, 19};
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
    msg.setTimeStamp(0.334999208906);
    msg.setSource(12990U);
    msg.setSourceEntity(3U);
    msg.setDestination(6952U);
    msg.setDestinationEntity(244U);
    msg.plan_count = 58464U;
    msg.plan_size = 787675028U;
    msg.change_time = 0.13131188791;
    msg.change_sid = 47551U;
    msg.change_sname.assign("XSUBIBLGEHXVSBZWIEEBIBLURMVKNFHUZXLOYPCAQICRZVVWRVRCKPWELGPDAXOMCVPMCDPJDZEOTBYXKGQHMFGKHKNZ");
    const char tmp_msg_0[] = {-63, -122, 24, -113, -127, -6, -41, -92, -105, 100, -34, -124, -63, 12, -59, 24, -50, -112, 125, -121, -16, -106, -9, -109, 17, 124, 93, -124, -10, 67, 120, -116, 15, 46, -88, -77, 40, -7, -102, 110, 39, 43, -88, 121, 43, 105, 66, 99, 0, 53, -108, 98, 57, -114, -118, 14, -35, -8, -12, 99, 12, -73, 91, -114, 6, 25, 25, -52, -29, -79, -127, -12, -19, -73, 68, -100, -93, -110, -50, -32, -118, -52, 108, -12, -65, 61, 88, 13, -80, 83, 55, 70, 37, -57, -42, 109, 8, -123, -63, 10, -49, 117, 52, -41, 119, 83, 89, -85, 97, -120, -34, 55, 9, 19, -124, -93, -115, 88, -1, -7, -106, -16, 92, -39, -72, 125, -125, -63, 36, -94, -76, 17, 79, 35, 46, -34, -41, -93, 115, -128, 100, 69, -37, -128, 94, -66, 74, -32, -37, 89, 73, 32, -114, 119, 39, 0, 45, 87, 69, -104, -37, -95, 20, -26, 96, 75, 106, 63, 88, 25, -23};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OZBDJKPWODBUJPZDXHTWIKEBBIYUHELRNKLBEDOUXWEHKUXTTF");
    tmp_msg_1.plan_size = 21142U;
    tmp_msg_1.change_time = 0.472992569689;
    tmp_msg_1.change_sid = 57127U;
    tmp_msg_1.change_sname.assign("PNAHPOFFTABEKMYTXOJER");
    const char tmp_tmp_msg_1_0[] = {-126, 44, -21, 28, 118, -86, 73, 70, 19, -44, 72, -54, 123, 2, 42, -116, 66, 6, -3, 103, -23, 66, 99, 28, -13, 78, -106, -106, 125, 42, 100, 101, -5, -114, -46, 92, 124, 111, -98, -119, 106, -13, -128, -46, 55, -81, -73, 82, -114, 124, 125, 69, 89, 118, -107, 26, -94, -114, -105, 28, 125, 29, 5, -102, 17, 101, 21, -107, -121, 19, -36, 31, 20, -113, -88, 85, 102, 85, 17, 48, -65, 74, 65, -20, -4, 87, 74, 112, -81, -98, -113, 44, 112, -81, 101, 44, -113, 101, -26, -66, 44, 12, -77, 117, -82, 19, 102, -117, 20, 78, -50, -87, 31, 46, -116, -31, -29, -95, -52, 123, 50, -58, 78, -114, 0, -105, -100, -56, -112, 97, -108, 56, -125, 90, -34, -48, -54, -47, -11, 28, 28, 102, 40, 36, -92, 125, 17, -6, -118, 81, -118, -103, 91, -4, -47, 14, 48, -32, 94, 60, 115, -7, 87, 40, 74, 64, -90, 73, 49, -123, -28, -88, -99, -83, 73, -39, -56, -101, -22, 100, -37, 28, 4, -99, 82, 48, -28, -8, -24, -102, 24, 42, -127, 97, 69, -74, 14, -47, -3, -126, -1, -3, 22, -49, -41, -125, -63, 18, 30, -10, -111, 67, 0, 42, 117, -60, -49, -3, 115, -79};
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
    msg.setTimeStamp(0.63770835087);
    msg.setSource(18200U);
    msg.setSourceEntity(124U);
    msg.setDestination(53464U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("HHJFUJVPFADVDOSBKFRPAJDQFBANEHYJXKZAQCVGLROWKXIWQNNSUYYLXMUCPGSOXBQWCKHDZ");
    msg.plan_size = 26393U;
    msg.change_time = 0.91446398556;
    msg.change_sid = 56231U;
    msg.change_sname.assign("GLEIDIBJCVRJKAAAZNMDPXHKRYOQEBRFWPREGSIYCTXNWQDCSKBGKIVAZSLZCWQONXKBSOEZQKYVTGDBSYXFFAMGQZWUHWNKNUIIBRMYVOM");
    const char tmp_msg_0[] = {-65, -103, 67, -12, -70, 81, 121, -54, 65, 0, 48, 6, -9, -3, -7, -18, -80, 61, -92, -15, -21, 37, -53, 49, -65, -126, -59, 95, -94, 105, -103, 107, -106, -62, -77, -15, -78, 63, 77, 26, -65, 68, -29, -100, 33, -71, -25, 62, 103, -35, -50, 93, -40, 32, -119, -29, 121, -107, 25, -6, -69, -113, 16, -103, -90, 57, -113, 60, 96, 68, -78, 16, -91, -12, 52, 94, 74, 0, -78, -22, -37, 39, 125, 71, 95, -122, 57, -7, -87, -25, 59, -84, 37, 9, 72, 126, -65, -109, 19, 114, 34, -78, -74, -88, -58, -22, -25, -120, 117, -30, -74, 49, -15, -5, 113, -98, 117, 10, 44, 61, -15, 55, -105, -128, -76, -118, -66, -70, 122, 20, -47, 8, 48, 97, 113, 15, 103, -103, 68, 76, 18, 79, 87, 85, 72, -33, -22, -14, 70, -31, 114, 74, 25, -53, 38, 91, -93, -74, 96, -104, -86, -95, -47, -6, -121, 58};
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
    msg.setTimeStamp(0.50771477813);
    msg.setSource(45604U);
    msg.setSourceEntity(32U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("SMNJSEPFMDCDKPFGFNACEMXOEONDUTSOKULWBHKSUTWVBGNWGHJYIURYTZTKQGQCYJRARFONKHLLIIQJZDLKLHQW");
    msg.plan_size = 38479U;
    msg.change_time = 0.929191376599;
    msg.change_sid = 37687U;
    msg.change_sname.assign("HSAQXYEITMTABATYCFRNPUFLFPZFNCRKG");
    const char tmp_msg_0[] = {-45, 72, -80, 76, -118, 35, -18, -106, -95, -126, -10, 83, 79, -7, 43, -49, -67, 85, 98, -80, -13, 18, -66, -116, 34, -79, -80, -54, -74, -3, 91, 58, 112, -48, 34, -40, -58, 90, 1, -123, -102, 75, 17, 5, 44, -32, 78, -36, -29, 53, -3, -3, 2};
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
    msg.setTimeStamp(0.416197235322);
    msg.setSource(63636U);
    msg.setSourceEntity(99U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("FGPOLLEZXEHNPVTYGEEDXMWJCFSCNJAIFCUEURSARNAOQUTLOZFFGRMSKQTPCANNMCCLZBRLWYNMUJOWBDWPAXUGLVJBFSMJEWZTEOVFDWJJRKSTICSKXZCYXUPHKHYXQBROWVVLQVHQJGKDMSAPVDDHIGNKIZMSYJWWVVVCLNAIB");
    msg.plan_size = 56437U;
    msg.change_time = 0.845277211132;
    msg.change_sid = 31247U;
    msg.change_sname.assign("VGMDZIAOLAQNCQVHAKIEVYSTNZUQFYBMBHCRTTCASOXPQXDJELARMTKRGSCREPLJUNLOHQACQYZJMKTMIMJMYWGQZYWIBQWGHBOSLX");
    const char tmp_msg_0[] = {77, 79, 35, -95, -63, 108, 67, -63, -26, -28, 1, 8, -125, -91, -111, 98, 101, 115, 124, 25, 97, -55, -108, -24, 4, 12, -47, 85, -56, -34, -2, -42, 114, 61, -93, -14, 21, 116, 9, -120, -46, -87, 19, -71, -20, -62};
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
    msg.setTimeStamp(0.032135279169);
    msg.setSource(52337U);
    msg.setSourceEntity(24U);
    msg.setDestination(48550U);
    msg.setDestinationEntity(186U);
    msg.type = 66U;
    msg.op = 247U;
    msg.request_id = 39624U;
    msg.plan_id.assign("FXYRQVTCBLREMUBHPPALOBJKZUSCB");
    msg.flags = 40968U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.893784730864;
    tmp_msg_0.y = 0.306026780588;
    tmp_msg_0.z = 0.961948617064;
    tmp_msg_0.phi = 0.445917581954;
    tmp_msg_0.theta = 0.41711393781;
    tmp_msg_0.psi = 0.058459174853;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BGETOWPJDUZPOLAVXYJBHWYWKJYSCOBDPPKLCCKQFDQSGVXNFUKHRJJFKDEKKUPNRSCHFTGCPFMQUZHRRFVQIQZHGTIWGRSVCBOEIMBRIAGJUQDHWXVMZXNQMWAMDUWTBYZEYCIWARRSUJTIXX");

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
    msg.setTimeStamp(0.99118975375);
    msg.setSource(42266U);
    msg.setSourceEntity(169U);
    msg.setDestination(8792U);
    msg.setDestinationEntity(30U);
    msg.type = 8U;
    msg.op = 216U;
    msg.request_id = 30135U;
    msg.plan_id.assign("MOLCWGAYRUWXQAQNARRTFFVXOHBWCGHMIZVZELECBDLPIQBAIMCSBJEJCYGHNRUAXDVNGNMOYYJMCJPZDTOWDCOVIFTSBGKEVHKPUEWGMIEDGISVYHKVXBQLORYAPTYKNLOMWWBQDZQVEUZTDOBJQAPQXJJFKNSMGYITRFLIEKPJLDSUQIBSXDTKUSRHVASPUZSBVUFHMXWGJNOEUFZRXSNLCZHRZJYFFYCTEPOXIRWKL");
    msg.flags = 29820U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.99073122033;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GDPFONXCZSSSPQTSUWHFIOBCSJJPUMRBZAEIIOTVWYFGLUULXIJQZXQMRDZDZIEJTNNAHZXZDXJBDXKHPIRVSUGTMABYQJAGNHBOUWAVJAOEFEKUJGRQAYKLKWOTDINZWVPERYXTPCQFVRYUZNGICPHGATYWOQERPYMKSJBULWLCPUATCFIWFOBXLZTAOFDDCCMHINQBVHRYFBTBRPVNLMKERVQGDCYEKMSLGGKSHMKJCHYLMXKWNFLD");

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
    msg.setTimeStamp(0.389149229734);
    msg.setSource(3020U);
    msg.setSourceEntity(42U);
    msg.setDestination(55247U);
    msg.setDestinationEntity(226U);
    msg.type = 131U;
    msg.op = 23U;
    msg.request_id = 50375U;
    msg.plan_id.assign("NFROJJXMFSVEZOVRPJYLWBUVZAVFRDHHYKCPCKDQPCBNTSUFOTTZIVBFODGAVONHLXKQEQXNYLYNKRFENOYIOHQIRXGHJIGYYWDMAUAGLJNJDJSVBIWKZWUHCGZMMMMZPWX");
    msg.flags = 55111U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 567U;
    tmp_msg_0.lat = 0.778573954806;
    tmp_msg_0.lon = 0.0334352320543;
    tmp_msg_0.z = 0.797521109234;
    tmp_msg_0.z_units = 174U;
    tmp_msg_0.speed = 0.85715852806;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.bearing = 0.381622867387;
    tmp_msg_0.cross_angle = 0.994485098556;
    tmp_msg_0.width = 0.610513539205;
    tmp_msg_0.length = 0.167288235206;
    tmp_msg_0.hstep = 0.671228403398;
    tmp_msg_0.coff = 168U;
    tmp_msg_0.alternation = 163U;
    tmp_msg_0.flags = 47U;
    tmp_msg_0.custom.assign("UDXKVMBGCNEDPZCAOXIDBSSJGRVKTCFFJKMYHWXSQWNFURQHGNOIQINCWJFVYYREMSLKRGLVSTVPIHMDXJCZVWVKWTIJFL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBWQQHDRLAZVRDQDJQTYVHPZGDFHWXVKDNJOLGIKBIUDEYJFPZHGUCHWQENUVQRAKEBJFIZNGTPNPYIBNAEXMMMZMLOONVZYFJBAEBCEJWXTNUOLVPDHNLRUFPWUHSPOQIGWUCISVFEVYGMEOFDYZFIUPTVQQAAXMAMWHYHYAXMTSPLDAFKEXBCOYHPQVTJRYMZOXRSSKLWKSGCDTBCCSKISTTKELBCSAUZULWRGKJRNBXJXFJCOOITMLW");

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
    msg.setTimeStamp(0.183522139);
    msg.setSource(22449U);
    msg.setSourceEntity(2U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(128U);
    msg.state = 142U;
    msg.plan_id.assign("VXAMRQRCUWCXDPNOJXTAESAWPIRFKOHBJXHGUZKESEZVVMILOFPZJKFURWMCOGIEUBWURAJTUNHFQXKTMDZFVMCLYSYNNFVQCRNMFTIBTRDBIQABKQOQVDBXWPADKYQRXIOSHINPGVEMRGODFZPPDKWYBYAHLJJKZYBVKNKJTUAESQWISLGXJJBTU");
    msg.plan_eta = 453084644;
    msg.plan_progress = 0.287719154862;
    msg.man_id.assign("UPLXVACOFOZQKQSEIVZEMDZRTDCJTYVLPRSOAUJRPZEWKZCGKJWMLXIFRPZVQTQGHINQUAGOIEXIYBCCRLUWHGLQPUMIAVAMSGAONPHXDBRCYEONNDKISJXSYCTAJNMLXYKMTWBIKQOILJTRFCDHGESRDSDFJUPOYFEBAFNNQRKBWOPNULQCLURGXMTDFLHHDHVVUWAKZZQBWVTKYSCEAMVNBDX");
    msg.man_type = 63347U;
    msg.man_eta = 675641220;
    msg.last_outcome = 4U;

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
    msg.setTimeStamp(0.106352334033);
    msg.setSource(57060U);
    msg.setSourceEntity(94U);
    msg.setDestination(55640U);
    msg.setDestinationEntity(52U);
    msg.state = 69U;
    msg.plan_id.assign("OJCARVMEWFEVPZDBOOITKQUBFJSONEYGZJWVJFIBSIROKBMXXIWXWNUEVQNCIGSLGPPMNZGDCDLGZHTDDZWKXCTMKXUCFXNMNRFPLSYWA");
    msg.plan_eta = 463336827;
    msg.plan_progress = 0.629289448339;
    msg.man_id.assign("LILIORDAJPPQOEPH");
    msg.man_type = 30365U;
    msg.man_eta = -1258953644;
    msg.last_outcome = 97U;

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
    msg.setTimeStamp(0.141500465807);
    msg.setSource(43642U);
    msg.setSourceEntity(80U);
    msg.setDestination(27811U);
    msg.setDestinationEntity(162U);
    msg.state = 232U;
    msg.plan_id.assign("UDGOSLXZUOBYWXGPVNT");
    msg.plan_eta = 1696072240;
    msg.plan_progress = 0.117713638528;
    msg.man_id.assign("JLIXUZMAIISNJEQNQMKBRZTFFGHFXYBAJVKVFVQEHWGWPYTFOZYZOESZTSCMRXLNWPRSSO");
    msg.man_type = 48822U;
    msg.man_eta = -1978125837;
    msg.last_outcome = 152U;

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
    msg.setTimeStamp(0.44596971146);
    msg.setSource(60687U);
    msg.setSourceEntity(182U);
    msg.setDestination(7791U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PJJGHPCAAGVAQXDXZGMOZOJFXZYHPMUYHAVNSGJERQWRIYHAVFVXUMTPOWLIRTSDHSOCDEMDGAQSJTDVHPQJDAFIUFMWQCBRGOXRBLKTFNEIAXXGLMWGIDBPY");
    msg.value.assign("HSYILQERGISCTFDWZQCQAPUWJGVNHOFRSKAKGKDBJSKFRZRTRPCGIVKDVJVCQNWUBCYZGRDWSJLXALFUCDCXBOLRAMZSWAXDUTLWD");
    msg.type = 206U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.527747527142);
    msg.setSource(27566U);
    msg.setSourceEntity(73U);
    msg.setDestination(7140U);
    msg.setDestinationEntity(95U);
    msg.name.assign("TGSVYQRNRGPPRXHFKAWCRJQONZFZDKYNTKOLNAFTCMRUWIVIDCZHMCEIVSILCPXYXGWWBUOFBMTHBDFMHHXBWPXNFDZMCNKHSNOQKZHKEXWUGHBPJOALQYSXRGJYKIVIAFCQPOVBMSZNDGVPS");
    msg.value.assign("GHGBMFQRKPAJUFOQPBHIGDDONBXGLQGEMUOHFMYPJMLPPLKNKFYTRXTRYLFKQVEJTBSPAHUZNXVSAQLPCVBMDMYSPLIUMYCAINGBJCVPXYEWVRORSFKSZHLDECYFSAOAHBOZNISEATMIHWFVXVXJEINZJCVXHCUSNNFUJTYWXCTLNMOYDRDETDRQHXJESUZRJWTDUQWICSNTOILWGAQDLQIKEKW");
    msg.type = 137U;
    msg.access = 244U;

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
    msg.setTimeStamp(0.46651149559);
    msg.setSource(46333U);
    msg.setSourceEntity(47U);
    msg.setDestination(46083U);
    msg.setDestinationEntity(51U);
    msg.name.assign("AZFCMWGCVVGPQVEHGIHEKAJRXHDPKSAKVAULWYBQMCUFWADRJAHMJOEXJJ");
    msg.value.assign("EPXDAQIKMKJRQPWPUBJDWHIYFOJRBOFZPREGSDPEGWSHMRPVKAVTNGOOAZBFBNCANCYVMMGLHUBYWDTUTBKCUQWZIUKGVXOUTFMLJDIGAXAYHCWEQCIQLHDASELQSIILMVYTUYYWSBHAQMKTLVCRCERBKZNNNLHZZLUFDJBIQTHRUEZXPKDTNCXOAENXVFSDTGJROLHXFJYO");
    msg.type = 79U;
    msg.access = 152U;

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
    msg.setTimeStamp(0.21584020071);
    msg.setSource(58233U);
    msg.setSourceEntity(198U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(173U);
    msg.cmd = 224U;
    msg.op = 181U;
    msg.plan_id.assign("LUEIHKITXCMWOJNEKSRVPFTWOEAZIJDMYSZPFHJUVDRBNRNLE");
    msg.params.assign("VBRWEZMXXNQGTOMRNSSKUKGR");

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
    msg.setTimeStamp(0.883848904458);
    msg.setSource(1106U);
    msg.setSourceEntity(58U);
    msg.setDestination(43897U);
    msg.setDestinationEntity(21U);
    msg.cmd = 247U;
    msg.op = 57U;
    msg.plan_id.assign("MPMBNEHOZLFCTVKMPFZITGNCQQIQFLTZTFXSOFEOZCHFVWFRWGEZMOHSEHUMOPRCNYDJUKOJJEGBULAQAXGSADTJPWNDIPTWJRGDIQER");
    msg.params.assign("BBNWNKECYJXDJD");

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
    msg.setTimeStamp(0.618808027615);
    msg.setSource(57882U);
    msg.setSourceEntity(79U);
    msg.setDestination(40958U);
    msg.setDestinationEntity(80U);
    msg.cmd = 136U;
    msg.op = 206U;
    msg.plan_id.assign("NXZDBPOQJMVUBQCIRCCXOIZUKELNPQAYBWAVFOEHRNMTSTIJLHOEQGCDUYMQWMCDNFKHAZHFTTFIVAKAKIPKRQJXRGDDIDTXNTBGBAQTWAJWZFHJYYVJVSDVCLUBPMCZLUCFGVQJZGNUCJWEGUYNWZESPOTIKRHYQLPM");
    msg.params.assign("JPQKRWMLTLBSPBFRLZXOULLKCFLTYIKDTZUYDYJWOSSEUHUKYOMDAVEPDIDENHMKNRTBWMCMSBFWBCAXKQQFPIPLSNARURRWGIFDVAENZVJWTEOTYOODOKXCTNDHUZJKMBXTRUJZJDFZBCZWUPJZGHQYBITQIFKXGHCXIPAOAYQJWZJINCPVQNZMHNEMVUABHVLUEXSCATE");

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
    msg.setTimeStamp(0.0606674366142);
    msg.setSource(36065U);
    msg.setSourceEntity(133U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("GCVWEFYYQBIQJJLROSUMGIBBIVAHBEZHX");
    msg.op = 83U;
    msg.lat = 0.59716254017;
    msg.lon = 0.833428226789;
    msg.height = 0.0675553476312;
    msg.x = 0.7188888018;
    msg.y = 0.877393155994;
    msg.z = 0.260710735677;
    msg.phi = 0.84750522763;
    msg.theta = 0.485499542683;
    msg.psi = 0.240470432405;
    msg.vx = 0.418666745745;
    msg.vy = 0.662667682227;
    msg.vz = 0.258254204121;
    msg.p = 0.764478615368;
    msg.q = 0.65527685537;
    msg.r = 0.421852622071;
    msg.svx = 0.231243926491;
    msg.svy = 0.0713145739241;
    msg.svz = 0.835827813189;

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
    msg.setTimeStamp(0.278283502364);
    msg.setSource(52237U);
    msg.setSourceEntity(30U);
    msg.setDestination(8868U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("SKEXAWDSJWZYKHUNIXLLYKIHLJGZRJZMAPVPDVMOUJVMNGUELZ");
    msg.op = 48U;
    msg.lat = 0.64946944106;
    msg.lon = 0.00908285880201;
    msg.height = 0.221550265232;
    msg.x = 0.233478973295;
    msg.y = 0.762136384092;
    msg.z = 0.484532599796;
    msg.phi = 0.53912805323;
    msg.theta = 0.566582234385;
    msg.psi = 0.612619873863;
    msg.vx = 0.728772585562;
    msg.vy = 0.125801047802;
    msg.vz = 0.391405334872;
    msg.p = 0.817355650843;
    msg.q = 0.66814002252;
    msg.r = 0.378196546015;
    msg.svx = 0.451343705803;
    msg.svy = 0.183757746389;
    msg.svz = 0.0367019098705;

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
    msg.setTimeStamp(0.650989568584);
    msg.setSource(21233U);
    msg.setSourceEntity(0U);
    msg.setDestination(17790U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("RKNSKJOYIETFMQCLPIMWGDXBWKBMQANAELMCSZHLMLBGHJTGQQHFSBVOXZGFIQHCUBFJUPPXCIERRJOWZKKARIYUCBNSRYOJS");
    msg.op = 0U;
    msg.lat = 0.563397037431;
    msg.lon = 0.616815902022;
    msg.height = 0.745501601446;
    msg.x = 0.417969440067;
    msg.y = 0.243198093358;
    msg.z = 0.313991642708;
    msg.phi = 0.360267173672;
    msg.theta = 0.782163603162;
    msg.psi = 0.706087442058;
    msg.vx = 0.300775675891;
    msg.vy = 0.0463189796343;
    msg.vz = 0.492678629914;
    msg.p = 0.0253286904838;
    msg.q = 0.206356190298;
    msg.r = 0.682604404962;
    msg.svx = 0.741562589147;
    msg.svy = 0.655738695669;
    msg.svz = 0.526615090391;

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
    msg.setTimeStamp(0.887166869289);
    msg.setSource(37022U);
    msg.setSourceEntity(215U);
    msg.setDestination(6799U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.828575662182;
    msg.lon = 0.709377478713;
    msg.depth = 0.533903378191;
    msg.roll = 0.337387525342;
    msg.pitch = 0.293261025104;
    msg.yaw = 0.458436635373;
    msg.rcp_time = 0.761347886689;
    msg.sid.assign("IGUBWEXSGMEHFPFUTYJICORAFHFUYGULDAPSXQRRYUKNWVTMEUOHXPKKAUKTWBECQIVTPAYIF");
    msg.s_type = 72U;

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
    msg.setTimeStamp(0.86902065222);
    msg.setSource(8625U);
    msg.setSourceEntity(228U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.296722451568;
    msg.lon = 0.277357082311;
    msg.depth = 0.207561466856;
    msg.roll = 0.57419368103;
    msg.pitch = 0.915360302681;
    msg.yaw = 0.697672336918;
    msg.rcp_time = 0.233471777343;
    msg.sid.assign("EABKGFAXBKKWCWGLKFYLGEBQRBJXCKRHYPWUPALVRSLANLWFILSOQVZVMWSKETXKCGGHOXNZPCUMYVFIMMIMDNHHLPLJMISEHDZNTTXISNURZEGUZUSFDYDOQDPDTGBDFIJZYXUCXCNOVGMVFXLIPZLJUFYJGOQMUVKWNOMKDWRMEHYEIUTWCAITHHTOPARYHIYTGBSBCKNYXEVDZWBNRZBVOOCCUREQDVQWJTPFQQNJOJASSP");
    msg.s_type = 238U;

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
    msg.setTimeStamp(0.383101886466);
    msg.setSource(3695U);
    msg.setSourceEntity(81U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.458201828731;
    msg.lon = 0.682246681151;
    msg.depth = 0.254604832191;
    msg.roll = 0.477030933495;
    msg.pitch = 0.293904304578;
    msg.yaw = 0.042578383142;
    msg.rcp_time = 0.770872650092;
    msg.sid.assign("UGYXBEDYEGGQLXMFQFWKPAJMCVEYTGBZAUGIMQWLSBZVNEHUCJHXABYKAWXGKQFUUJOFPURIVFWDDONZWCHACLELMMUWKXVTFDZVSHOCCGUHSROTAXPOQNFBFVCTLPZMUILNKOHATSYOCCWIRRHIJNNISQXKRPZRZZAQGEXDABHSKOLURYQPSQRFMNWBNXWNTZQDGDBVOBYMTZEOJVIDBKRVRPIEYHJJWKPPFLACDTXIV");
    msg.s_type = 179U;

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
    msg.setTimeStamp(0.774404730806);
    msg.setSource(62281U);
    msg.setSourceEntity(226U);
    msg.setDestination(9459U);
    msg.setDestinationEntity(189U);
    msg.id.assign("UFMPDJZRUPOCTHCKAYEYNBCMT");
    msg.sensor_class.assign("FPKMEVDAEEIQRQBATQM");
    msg.lat = 0.579603858529;
    msg.lon = 0.529354914111;
    msg.alt = 0.0173005446018;
    msg.heading = 0.729934202628;
    msg.data.assign("JXXRAFBIKTKMAJCBCFVAQLPWBVLQNFSCXDSWGNYHGNTJFPGLAPDOOQULSQDWDVKUDWJJCXBRARSYACLHFTILOKHHTYGYZPAJGOSSLDNJYTGTXXJAIVEREHNGCPUIONIBFHEQHZQPNYRVWLXGXYZZRQDMEGRWRDNVETBHBVMEUFUCCSKEYFXBWWLYKPOEZKKIPMLBSGTPZFMVBDIAOKAEIXTCWQODZ");

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
    msg.setTimeStamp(0.803206205672);
    msg.setSource(22537U);
    msg.setSourceEntity(85U);
    msg.setDestination(37479U);
    msg.setDestinationEntity(70U);
    msg.id.assign("OGLKZVNWJHPWHIOPNCVQDUTJRSMXDJMEVPCPAGWAUHWJGSVSFZBVRWKEIANATVAFDZUXYJAXRJOAZTCFFDDNTQKVKNOGYRUCCYUWYRBBOFTMSTBQZUZJHXZJON");
    msg.sensor_class.assign("FCQISOBKXDYVCUGMPGLZDFCJKIPCHZBGGUXLLHZHSGSSRPMHJSMBDDZPMJDXWFALAUOTFHZSHOWXILGCOSFDPUJETAFNRWDNMSVRQJLRQOJBOIBMVCGACIPZWQTBNEDOPUNTOINREHWGGLWXFDNKSFTARYZSXYEPQNYCLBTJQXYTOECJRUAINRUYOBUKLQNLEKRZVAJEEIUNHTVZKIAMKAMKTUVPHYHWMXXKBAJCV");
    msg.lat = 0.903539496924;
    msg.lon = 0.715969582572;
    msg.alt = 0.83482018656;
    msg.heading = 0.502462341601;
    msg.data.assign("EGKOKJANCQSYPTZYAPKYLNJHVMUFLMORFHRGBLYZNCTXCWPAATNYYWEQIPVZZBTYIARVTDDSEGHXFQGPYEOXPDRT");

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
    msg.setTimeStamp(0.406346832468);
    msg.setSource(51222U);
    msg.setSourceEntity(244U);
    msg.setDestination(40978U);
    msg.setDestinationEntity(248U);
    msg.id.assign("JOQHGFKZKQWHGULZYJESFLWEBLNFJZFVMWQNWXKBJSRDSNHYMIPGNPFCTMXAHRUTPMUOWGVXCRCXJVTFXBOGBZMRGILEQMUUJZJNXWEEAHFSWR");
    msg.sensor_class.assign("OHASYOVWBZVBGQPCTJZGYUVAUWIRQNYWKTZSOFWVPLSYDKCDGIMKCWFNHDDYPIPNTIVXOEUCVWFNIKSJALPGFBSZEGGZLZQFQRMHUOTOIGTPQHUKBQXZRSSMFDQEXOMJBZCATJLXMEAJXLRHAUIJOBACPBXKYKKSYBMHOCTNQQFMPJTKQUXURFDXBLNRX");
    msg.lat = 0.484695305438;
    msg.lon = 0.650299056168;
    msg.alt = 0.960687777461;
    msg.heading = 0.791600394688;
    msg.data.assign("GMYOXRMLLLKUZETLGCWNOARJJVVSVDOXLENCLXQFZIEBWOKEGOCKYBWITDDCBDIBI");

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
    msg.setTimeStamp(0.182944793187);
    msg.setSource(15265U);
    msg.setSourceEntity(29U);
    msg.setDestination(18033U);
    msg.setDestinationEntity(10U);
    msg.id.assign("HBJTSOFWDSJDQCRZICDAYQOTLKXPZIHVIJOETFQLXYFEWGJCSFZBEXRCWMNYG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CHIKZLFQFMMEVUMYDQVLWPCGJSQTOXJLNUSZZYDOIBOPCBLVZNVVRNLJXRTIMCGSQERBXHPRZYPYQKSRSYYTOPKIJWVWXCCHEVRWBRSTATK");
    tmp_msg_0.feature_type = 11U;
    tmp_msg_0.rgb_red = 40U;
    tmp_msg_0.rgb_green = 254U;
    tmp_msg_0.rgb_blue = 99U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.818723519402;
    tmp_tmp_msg_0_0.lon = 0.901846077885;
    tmp_tmp_msg_0_0.alt = 0.962469414047;
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
    msg.setTimeStamp(0.93360707063);
    msg.setSource(19728U);
    msg.setSourceEntity(169U);
    msg.setDestination(26351U);
    msg.setDestinationEntity(155U);
    msg.id.assign("SUYUJOXXPXAHTKRESMENHMDZIICKYDUHQDEUNGJAPWMGYJCDYUZALQHBMUJVVXGMGRFVPNZIODEURFZRKQLMENXBKLSIBGWQGFAQXTSWL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MOYGXCRMUXPBYQRWAQVAVDJKHUDLKLSFZEXHIVNTOPEBPAJJJAVRHLLHOUPCDCQQTDPDJVMLBPSGOAWAYEASCVWQF");
    tmp_msg_0.feature_type = 22U;
    tmp_msg_0.rgb_red = 153U;
    tmp_msg_0.rgb_green = 179U;
    tmp_msg_0.rgb_blue = 93U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.992328842291;
    tmp_tmp_msg_0_0.lon = 0.133524145053;
    tmp_tmp_msg_0_0.alt = 0.780870170643;
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
    msg.setTimeStamp(0.988427023752);
    msg.setSource(49707U);
    msg.setSourceEntity(164U);
    msg.setDestination(29516U);
    msg.setDestinationEntity(100U);
    msg.id.assign("XZMGFCUNNVWWAHHXQSOTQMSGGLNNCXMVXGQHPUYFIZU");

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
    msg.setTimeStamp(0.32318177511);
    msg.setSource(27870U);
    msg.setSourceEntity(54U);
    msg.setDestination(6094U);
    msg.setDestinationEntity(50U);
    msg.id.assign("KJANWGZASMJTFFMBPFRP");
    msg.feature_type = 222U;
    msg.rgb_red = 75U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 39U;

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
    msg.setTimeStamp(0.530756877275);
    msg.setSource(15842U);
    msg.setSourceEntity(55U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(165U);
    msg.id.assign("ZDHSHTOYICOMMNRNADLGCUAMVBKJKIMSXQKVDDBWUGZGMBRCUEQCLXIHEALBLSWCFLWUOBSWSQNDQUAZJAKTOCECMRGXFJHDFVYOTBTLYQOVRQICIEVPFPWITXTVYJJKAKDWKDQBEDIVIFMJOYOSDUARUPUQPQCGRXHFEGNZUWMVEGU");
    msg.feature_type = 193U;
    msg.rgb_red = 147U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 56U;

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
    msg.setTimeStamp(0.895142390498);
    msg.setSource(10706U);
    msg.setSourceEntity(154U);
    msg.setDestination(36228U);
    msg.setDestinationEntity(165U);
    msg.id.assign("RVAHMOCAMIGMHWZNXQLVHYMVBQLXLQHBEAOINJNKBANQJYGJJTMJUOLVSJOORWLCITHKBZWAERTWDFFDJGKRFFHPDPXZUCVDSVCAXRPVPHBNNLTXNIWBCYABLEFIYUSIDQCKVUZWZASGYGT");
    msg.feature_type = 108U;
    msg.rgb_red = 50U;
    msg.rgb_green = 8U;
    msg.rgb_blue = 128U;

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
    msg.setTimeStamp(0.0665683771584);
    msg.setSource(62716U);
    msg.setSourceEntity(22U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.669999962;
    msg.lon = 0.365502910795;
    msg.alt = 0.914802313919;

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
    msg.setTimeStamp(0.956962428677);
    msg.setSource(6550U);
    msg.setSourceEntity(201U);
    msg.setDestination(2686U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.122782173755;
    msg.lon = 0.226441317081;
    msg.alt = 0.0802657862732;

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
    msg.setTimeStamp(0.374374840979);
    msg.setSource(28762U);
    msg.setSourceEntity(26U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.88097793054;
    msg.lon = 0.0884356254556;
    msg.alt = 0.866451666899;

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
    msg.setTimeStamp(0.343873503844);
    msg.setSource(25207U);
    msg.setSourceEntity(195U);
    msg.setDestination(8867U);
    msg.setDestinationEntity(224U);
    msg.type = 159U;
    msg.id.assign("AZUJDHCBZKVREWJWJCFWDMJYSJSQPTYEUJEAYHPBAIXRVFLKVLJNJQOMSVXPWIEAJBGVGTPZNGBSTEOGTDCQKYGXQSHOEQHDIKRQYXWFOVFRPCDTNLGNMBULBPRBDTTYUKPVLYERMNGBAQOUHZAWWLFONYRFCJFIDMHCIMRUDICVOOHNHMAXKHOLVHZYTSXARZL");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 137U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("WJHUYPVJDBWAROWXWHTZJHFIFOSPIZIFZVGURMSCCTVMMWQISTOLQQQDTDFMXQDIXFSYBPJLUVEOVBWSIWMCGFGCAXPZUTYLLMO");
    tmp_tmp_msg_0_0.description.assign("ZULUNEVBSBYFVQHHHVIRWIERLNS");
    tmp_tmp_msg_0_0.vnamespace.assign("WNXBIRWQWFRYINWOQJOKGUECAQWHZVGLJAJIVOEBDXLWOTKHESHPNMFOHTSJKFCVPZXSVWSEVYDPQTUSBPIBLLQMFZRZXPEETRZBCITGXMYRJQZAYRAOOKSUMTKAARYRDIAAJZBUYZKMSNUQLANFHGDWLDJMECVPNFVZKIQXBYDGAUOMGGPSXHDONCRVDZGCFKINUYTCUEFHLQKVPJCLQBHIOD");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TBAIYZRNMXTXSSHDCAXQQNDPOLYBCURFHYRPGAWFGTKIBZHXDUBFEAMSLOGUMPJNVDNLDMCTBASHIWZEPFDPYEMNCVEWBFCOJSVJQYRPYLMLIKYLJGHVCOHEKPQZMBGAVGKHSLXMUHSSYLRFCHNOEFOPRKGYZWNQSWXVBXWFIWOJZVZEURKADXSXMJNUKAURFZWGWIJUOLIQTVQHIKCDDOIMCJRQVTCGWEIXNU");
    tmp_tmp_tmp_msg_0_0_0.value.assign("JLCNYRJHKIRNKMCQUFAABPNGRDSCOYDUXPRMVLQIFSZRXFPKATREMANJPLPCWISKDSJHAOATUSAGEQIWCKYCSWTXVGSTDUMKQKEEECBQVHLMZNSZLBBFOUKXZYZUBWYJSXDSGVNMYZUBHOJZFOHLREHEFDZJUBXBPWOCOGVGKWXWTGRQIPRVBDMGFMIIQLBJYVJVPHTFDTQYHPNVQFNIMAOEXRWMEXZHUYXOLCEHZGYTVGQFWAN");
    tmp_tmp_tmp_msg_0_0_0.type = 34U;
    tmp_tmp_tmp_msg_0_0_0.access = 135U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("MAYFSGVBNKGHKSBPYZYYUPFDWOEOEMKZGQGMMEKNDMCFAADYRZHLWTLMOEXWGBZNYSUIGVFOCDDPDCPONJOLFJIPCRQWJECHERUBMCILAKTMYRBKINHXWLJCLFTTAKXTQFNWVAQUVCUOWVSBXYZMUQJVTURTQXXUKZKODVPXGFRSUAFGCEXAKPAPTBNIRISDIIHFPWYOJZERCVOGEHLDZJDJLSWBTYQTNSJQHNXHZNSRLXHSZIQB");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("QLJZTHJGREWMTJNKGNMSHWQBLXKWGCKIUDFBSAYYMVUZGBOILAAZVXVHLJACIDIEZBVTCRJZHPSEPTUQDVXJJWUGXLUPYYFSSVUYQQKZZDRMSFXHXNWCJEDMRHQNZZSRWKLNVYOQUGENQFCTTHMGMCEAYXYDJ");
    IMC::VehicleFormation tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.688149853989;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.771355562642;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.0527818550542;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 111U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.248036927025;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 229U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.x = 0.999160244794;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.y = 0.903128819008;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.z = 0.499798527088;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.t = 0.788010199592;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.points.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_1.vid = 18238U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_1.off_x = 0.918710067156;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_1.off_y = 0.136226653299;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_1.off_z = 0.301412912322;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.participants.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_1);
    tmp_tmp_tmp_tmp_msg_0_0_1_0.start_time = 0.603180673773;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("RQCQTAAVKQQDTZTLZORLCBWRETFXKDFQJGOBBSVHUNAFZCZHNBCPMBVUKIHJNEVYXPUCXJTJNADYGDMFWXFRNKJFZYJSQDPKTHBOEV");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    IMC::DvlRejection tmp_tmp_tmp_tmp_msg_0_0_1_1;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.type = 198U;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.reason = 220U;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.value = 0.10779386169;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.timestep = 0.712867044311;
    tmp_tmp_tmp_msg_0_0_1.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::VehicleState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op_mode = 248U;
    tmp_tmp_tmp_msg_0_0_2.error_count = 212U;
    tmp_tmp_tmp_msg_0_0_2.error_ents.assign("BSSMPRNZOPARXRCWKBWUVJWZJWJRKKPJMSVUBSOKGNJRWZDEWOANVUSVKXPNSGHAWPVZJAURHNHLGXQHBK");
    tmp_tmp_tmp_msg_0_0_2.maneuver_type = 14321U;
    tmp_tmp_tmp_msg_0_0_2.maneuver_stime = 0.502687805078;
    tmp_tmp_tmp_msg_0_0_2.maneuver_eta = 30453U;
    tmp_tmp_tmp_msg_0_0_2.control_loops = 1098596734U;
    tmp_tmp_tmp_msg_0_0_2.flags = 209U;
    tmp_tmp_tmp_msg_0_0_2.last_error.assign("JSXEJRWIVWONZNGCFLDOUYPPZGHZHGBHLXERHJAEZZQMBAOHYCJZJBPHJEQUJDIUCSWS");
    tmp_tmp_tmp_msg_0_0_2.last_error_time = 0.0848841408358;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.29051770552);
    msg.setSource(15821U);
    msg.setSourceEntity(222U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(6U);
    msg.type = 213U;
    msg.id.assign("WAOTZIUGIFDYLLDPUFCHDQAVZSQSGBWDCXAPOZXZHPTBAAJTJDWXIUFNZDCXGWBVCXNKGKPPIQCCRIWGMIRHVTRJNTKGPHUZZVOZLGMMJFKDTMSAMJYMVQUEMRWCYTXBSNVIHZZHBHJASWELEMKTEWLPKRDVOBNAUFLELFFVHRESOPSLDEIXWROSXNJJKJUPKQUNYQFYGYEQYRALHDQYQCONUBJMTWIBXYQAKTLFMSFG");
    IMC::RawImage tmp_msg_0;
    tmp_msg_0.width = 18051U;
    tmp_msg_0.height = 5356U;
    tmp_msg_0.channels = 145U;
    tmp_msg_0.depth = 30U;
    const char tmp_tmp_msg_0_0[] = {-77, 23, -10, -75, 81, -89, -38, 77, 22, -13, 79, -81, 17, -16, -88, -21, -76, 63, 74, 90, 11, -21, -52, -45, -93, 43, 49, 28, 99, -119, 39, 99, -40, -114, 66, 73, -9, -112, 68, 29, 83, 38, 73, -78, 65, 97, -29, 26, 76, -40, 37, 69, 109, 2, 7, 114, 2, -46, 3, -66, 19, -7, -101, 106, 52, -11, 108, 11, 117, -43, -5, -5, -86, 27, -72, 2, 98, 16, 110, 80, 24, -45, 88, -21, 30, -14, -79, -30, -55, 35, -86, -7, -31, -74, -21, -61, 81, 27, -82, 80, -51, 21, -62, -122, -69, -30, 3, 49, 104, -103, 71, -10, -112, -82, 28, 41, -36, 71, 21, -112, 22, 115, -49, 79, -52, -116, 17, -30, 0, -62, 17, 37, 100, -58, 106, 109, 44, 18, -97, -48, -65, 70, 63, -120, 40, 46, 67, 10, 100, 33, -18, -60, 28, -94, -16, -102, -50, 83, -56, -104, -125, 1, 41, 105, -47, -35, 14, 111, -40, -75, -87, -2, -89, 4, -33, 85, 78, 13, -53, -46, -108, -14, -73, 81, -113, 102, 74, 76, 81, -80, 118, 42, -30, 103, 99, 52, -6, 68, 118, -57, 126, 117, -121, -66, 42, 91, 28, 88, 30, -59, -74, -30, 88, 40, -61, 2, 92, 57, 63, 68, 38, 40};
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
    msg.setTimeStamp(0.00685334101467);
    msg.setSource(23591U);
    msg.setSourceEntity(250U);
    msg.setDestination(10963U);
    msg.setDestinationEntity(201U);
    msg.type = 14U;
    msg.id.assign("TRAFKSOENSFYOTRMDKSPCVJLVOSXYSFYLZVDRAPSZUDWVGRCUTBDOLTQILZRETZGXFDYXINGBMESJEPRUJLUNZNUVXKKHHKTZUOHAMMHGCXWJIVYPUGEOEYVBCQIAXRABOBEGPQISODPONFNQFDZCACWBDMEWWYVZNAGWBALYXDLIMRBJAFOVUQZNQJRQLHFHGWZQMGMIXIWQTKHMWWSYXYUKKMBTILRLFXICFPBKJKNSVCD");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 3084166395U;
    tmp_msg_0.status = 160U;
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
    msg.setTimeStamp(0.477741664005);
    msg.setSource(7736U);
    msg.setSourceEntity(224U);
    msg.setDestination(5663U);
    msg.setDestinationEntity(82U);
    msg.localname.assign("XTJJFSKWTDQIJUOZFGGTUDAYWAYQQBENPHRPYVVTATBCFIMAPUMRYUMJFPUURINNFGCFIMGHLXCYELINSDAYAWCRIDUXLUZMEEZKBDGWHJQYNCMZPLOJMPXRWLETOGJRWXCQKSNMZWRPPAHTXUOHSZBLJKFOXWFVMEZEJQTZGKAOBNAEQOTNICRLSVDKKYBY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GHYDBMCKYQEIJIPNQOZKDJQULXHRDGZXXBSNTFVBOFOPILVGCOUJWVMYTCYFYROHYWTHNYCGQGBRNSPXUNGEQGWWXKJZVZEAPJTMZUTIPHRAXFVUPOSQBJEXLANMCOFCDTARFZPTQCKVLWIFAVIVIXGJYDRLCHHDEURXEBMSUUJFKBSAEHQRLTTRDWAS");
    tmp_msg_0.sys_type = 129U;
    tmp_msg_0.owner = 31090U;
    tmp_msg_0.lat = 0.362525195827;
    tmp_msg_0.lon = 0.0341825365983;
    tmp_msg_0.height = 0.338097551962;
    tmp_msg_0.services.assign("QRBYZJGFJCLCDLUNVGTXVQWWBNCGWPOFQOBEMPSRTYXQVTVDNEVSXQCOGCKHFBHMNIMRQMNSGMRUKQQ");
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
    msg.setTimeStamp(0.0276274666427);
    msg.setSource(10820U);
    msg.setSourceEntity(182U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("USZVNVWWTDQGFFCNHLUBDSXAEREQHWKDPMMOOXZM");

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
    msg.setTimeStamp(0.381127428114);
    msg.setSource(52186U);
    msg.setSourceEntity(200U);
    msg.setDestination(33678U);
    msg.setDestinationEntity(62U);
    msg.localname.assign("TKHZJRJTXLACIQWDXFJQKMGCEWFMAYKVMUVY");

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
    msg.setTimeStamp(0.581880464549);
    msg.setSource(6878U);
    msg.setSourceEntity(218U);
    msg.setDestination(21420U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("JZBYMAZRTYNKUJ");
    msg.predicate.assign("EZHLSSBISHGYWZQUTANSWAMMOXXJKAVTAKTYDQHULFYEIHRHEUDHSMQXVSKMMQELKMPRNOFGTCQEMNURQRKTNOLLTHAUELOBJBVKCPKDSORTILCREZFSDYNGUIQJOMIQRNPNKWRGXUWJVIEDCFHFIYBLPXWIDNVTJFCEGVBXRUZBZPHBCFTZOJWAAEBSYWLVCROJGPNJGUCXOTUCYGMPPVSZ");
    msg.attributes.assign("GKAVQVYYKFFJJFAQXOGYCLVMNSMMIPCOMSTAEFRFCSZOPXBHNYIQNNHYMPWGCDUVVWURZDNZGWYCLTLPQOHBKHELFHEEHOWARLVOGDLLEUMEIHKBNJDTJXVTZVWMNESSIIXSIZEXQLFBZBGCRGBBYPWIIGPJRPABITYSJFOUUUENXKO");

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
    msg.setTimeStamp(0.220862681561);
    msg.setSource(17620U);
    msg.setSourceEntity(42U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("QONFJBLLNTUDROCNRUKBEXQFIPPSNSAMCJXKLOFIUEUSOSRKZKGPBDMARDHGPAYJCPARJ");
    msg.predicate.assign("JQHTRAXPCGJRSAGIAFQNTUCTDAYHIXWHXVRGJFWZEUFKHYSRUCNCWEJEFQULLKNLAEHNSUUCKCZUMMRFZWPIDGM");
    msg.attributes.assign("SEMYSNMRCWAQPVVCKHIMOPTQCGILBPBMLWOBIKGUWORYSJAOIRBUOXVJBNBKJKQUXQIURDCHLFKYQQOLEDIUJRFSJULWZFKJOZUYVMSCNERHFBOFMAGNORXTGRFZNJTCKEVVWIDGDXPYVUVAAQPYWYXSIGAHUGHEMLLZXAJCZSGMDRXFHEVEQNIBJPLTVGAZDMZDAHPZZKTTLXFNICHSTYDNTFAEWFWSNW");

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
    msg.setTimeStamp(0.214332002814);
    msg.setSource(1498U);
    msg.setSourceEntity(21U);
    msg.setDestination(42073U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("XSWDPWDFVBGRXWL");
    msg.predicate.assign("HHLJIFZZVJUBWZBNTSUDDCGYZOMZOWXISMEWTEWXKVNLCVVDAFNCXMEBVSCJIWMJQPZKRXKIPXMLKXMOKWGMSPECQNDFGJSJYSYARTHPAPVUZHSDRHBKHGGWVCPKYNFUCVYGPXAOYOIKYRNBHTNTAQZQFCROSFRLEHQERORZFBAFUTLVWADIDNBXLXCNFQDLQEILYLQAUQHSVOMFIRCTJHGUX");
    msg.attributes.assign("HUXZOVYJGULQFFZSXKPNGGQ");

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
    msg.setTimeStamp(0.690070564595);
    msg.setSource(38243U);
    msg.setSourceEntity(202U);
    msg.setDestination(2804U);
    msg.setDestinationEntity(56U);
    msg.command = 12U;
    msg.goal_id.assign("XQFVWXUHUCHYXSLFEQPUFKKHPDBMNCKIYIJUKVOTD");
    msg.goal_xml.assign("DLZCJEEMGDSRTWNPTEIVYUIPXSZTGHOOS");

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
    msg.setTimeStamp(0.860109949307);
    msg.setSource(30803U);
    msg.setSourceEntity(122U);
    msg.setDestination(45653U);
    msg.setDestinationEntity(194U);
    msg.command = 210U;
    msg.goal_id.assign("NTXJXNVOMCDSHZPQAVATUGRSIGBEABLSBJSGDHWEWXGWBFYLUSYNCCBYUVB");
    msg.goal_xml.assign("NDTHFHIPQAIJIBDQVSUIXABGXRSMWYZNXLAOARIPSYEDVOBCPJAMZOSBPZCVCUYFQCFVYUXWFBHPQFGGQFMLUMWPKDMTSWUNLILENZTKKFTMICHRB");

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
    msg.setTimeStamp(0.909751695225);
    msg.setSource(6999U);
    msg.setSourceEntity(2U);
    msg.setDestination(13779U);
    msg.setDestinationEntity(203U);
    msg.command = 199U;
    msg.goal_id.assign("ZXBOPAFCONXUAITQETLXPFUDQSRGGXPKOSSBDDJGNULKMVZANXJYJCZXRBLPIYERUXGKVYWDPVKCAMFHYWMJQWQQNSQAQZHUPWWJYGSETHVMFMLWRVLIKHOFGBDECHWKPBFTURZVXJGEEAMHTEVQYCOBAHGRKLRFMJQB");
    msg.goal_xml.assign("DHVITZKKOMTNPSLJTQAILIWXHKDMHRWWIEZVXNAGVRDZDDXSLR");

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
    msg.setTimeStamp(0.925840904562);
    msg.setSource(41600U);
    msg.setSourceEntity(33U);
    msg.setDestination(51640U);
    msg.setDestinationEntity(88U);
    msg.op = 201U;
    msg.goal_id.assign("TNFADZXPBEYMFRWPBBGIEQAHYMSRNIZBOBIXZTHFEJITGDJXHXSUCTAMGSBLZLFWUPHMKCR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WXTQNBYIJUDWNDTSOCZXOUKPAWHZALMOPLPSMTAQPRPDROUJKMGOACZTEGKFYPROYFZNBXVAOLNDVETHJWESCNCHITNUAAPLJRIIVKHEXPCUHEGZCGNPGJJEPRBXWRRKLQDWMJVHQVFULSXRZQGIXWTBFDXLFFUMBWEJYOLLWDYFCNMYKCSMBYKIUHASVXCBTDGHVKIDICESEFSBHIVTQGNSUTFJYWVNXRYSUALMAZGI");
    tmp_msg_0.predicate.assign("KUNVCPFDFLYWKJTHAVKKGLQBZZQFTTDJHJOMZQNVRWOAGVGOGIODKIVXPBUEFQLUACACNMKFMKCFTAOBESNTAIRQYWRFEEPGHEJVSTIYVRQDNPBQAQFHXRYAWIXEZYXZBMSERTCWNBYSMLEZPLFOAXBJMONBXJEMTD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IGECIWYGVHQANKSDBOLTQQLQHRYNIDCKRQXXYGKVEUTIOPCNRDBRI");
    tmp_tmp_msg_0_0.attr_type = 83U;
    tmp_tmp_msg_0_0.min.assign("GKGDQTGOAVIFCGSJQFCLNCLTUBDHYJXLJZOEPBRBCNZILIOTFKCENXUIASYMFHOYMATRVPXVFZFWD");
    tmp_tmp_msg_0_0.max.assign("DERBCOHRYDTUPBMDKZTZWJFTOKFDNJMDLASUCIMPMFTOQTDGWVTRUCVIQYSKPZMCQZOXICNVNEUFVIHOLUEEVMXRQVH");
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
    msg.setTimeStamp(0.763691983773);
    msg.setSource(53246U);
    msg.setSourceEntity(58U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(170U);
    msg.op = 111U;
    msg.goal_id.assign("KRPTEEOPWSXNTPFQMBZPGSAHRGHLHLRKJVHOOXJQGYCMVSKZGYQJABQINPDZZXQYSMZBYDJZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EJBKEUNHIGBQRCRWOLQLEDDCSDTQHDIPRALPLCQYCXFZAPBQBVMJSEZJAJYURFSQPNRVYKADFRRKJMZSQYZNYOXMCNIGLJTZBUSGDTZHGWGLXAOCGKDOWUQVPNVTNMSONMIVHRFLTXIXCNAUJTWSCZPDJTFYSBTTXNCUWIEOIHWA");
    tmp_msg_0.predicate.assign("ZJLXYTBCWKURUECRPPERTZJVSKUIMHASAXYAWUDIERXZKDKTAIKQVJNDAVFTOAWQTXIBBBAWGGZICYJCOFILUMEPCNAPVGUAEIRHIZQQFLXHDOSAFBQNQOCQCKGVHHJMEHWWUMULRTGMRDJYFLDFZGUJOFDPONZWXKHNYSJPCYSFKDNMTOIYOYKBMTSJKXBLHNZXBVQLCNCPVZLPMBNGVVGOPXSSFQRGYITTLWJEQBLESMSD");
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
    msg.setTimeStamp(0.23003770856);
    msg.setSource(63602U);
    msg.setSourceEntity(58U);
    msg.setDestination(38324U);
    msg.setDestinationEntity(20U);
    msg.op = 63U;
    msg.goal_id.assign("HUCYPLUVSLQDMXWGXKIXVOYKLGANMQTEIFVAHHHITYMCJNSSDCOWTKCBCDYZOZRLVWFHXZBPJLODUSFXXBJIDTMPVIBFQWAJVAGYFFNEKMGOZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GCKEGGKOPKZZNCJGOYQABUBRYMXFJMVKFICEIIDPEITNHPDBJVAKBHMJQGPHXZWGWLOWRANISHGHQVTAPLIKSYBVUNHPIBDUMDYNRJCZOXKAVKFYPNZWBLBHNBAGMUOUWWIMIMFCEHAONTFETYXCYMQSSQERTUYS");
    tmp_msg_0.predicate.assign("JRHODITFEZYPFOPQLOKGNZMUXLOUXQBXXJQXT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IYZOTWHOQAXSSFFOBZRNTSEZAKKSCMBLVPHCIFFNX");
    tmp_tmp_msg_0_0.attr_type = 92U;
    tmp_tmp_msg_0_0.min.assign("BCKNWENYUGBVCCLVZTPGKSYREWCLHGKCSDAIVBTJJRQSOHNFZHNPEWYHYXUJHRYZBYJZNJLAXNTIUUPEUSVEUMMKOMAFQMRFFXTURDLABQEXGFWHYWCMZGFACAEJZROQLEWIAOVMAIQUTSDGZOGSN");
    tmp_tmp_msg_0_0.max.assign("VMFTCYHLCOBJRVXAJSKDYDAZMDJHJKFZHYFHAUPESFVTEKFUVHVTLKWHLNDATXGSLDARXAKEIHPNCKDQFEVKXLCWGVOQWHETJCWZGSJPFUTFGTJZRQUBRLUNB");
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
    msg.setTimeStamp(0.160455319041);
    msg.setSource(51961U);
    msg.setSourceEntity(216U);
    msg.setDestination(44740U);
    msg.setDestinationEntity(196U);
    msg.name.assign("QQKLVEZCFIPNODXPDGIOTWLQSSWXOKHMBZRBNSCWISJYKVYSPMJYMVCHTRTIYOVOIJYKKKMTDUHJIPAXPZAV");
    msg.attr_type = 66U;
    msg.min.assign("HPPLXXXZEGFNUVRGRSKICXEHMBOPHSXPANZMASJBCCMQAMDYVLOYXUKKGBTYFLWWAZHZJGBDBJNWVNXKTWUWYPOFELMVDKMIROARHCYHAOQZINNBOFJWLSBUEYDKILDGSVRLYAEHLOIUUZRFTGLVUMJQTYHEWJPZMGAKSJCNAKPFCFPEERQQDHQRIYN");
    msg.max.assign("UAIDZZREMSP");

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
    msg.setTimeStamp(0.203295160783);
    msg.setSource(41269U);
    msg.setSourceEntity(52U);
    msg.setDestination(4109U);
    msg.setDestinationEntity(67U);
    msg.name.assign("DBEUMBFLDIPEFFLUGCUWZIRTXVGEKTIGJIVNLKWTYKLVFQKSNOMHPJCZLZLWPHBTHZOKUXVVTSXWWHRFMCXQJAAWQSOQRKOTURNYQPJDHJUOQKSYLNPKKDHWEIVQUZRZBZUYBZYBBXCARZZJXEMECRASCWDPLFMVFSMNDGO");
    msg.attr_type = 36U;
    msg.min.assign("IOMGIJLOUBXRHDUDUTANVVAMFAGGZVYXIFLLEWBRBYQZOULTKVHWWXGKSJOIHFKGRNFCZIDZSUSSUYJTDVSWMNFZUYYQMLDRXZRZVDXQPQAXLHHUKVJBNOKIVTAHFBTNIGYRPYIMLCHMTZCJWOPBEQXECNNWWV");
    msg.max.assign("IWVWIANPTFPZXMRQWKQKUSYWIVHMOARNMFFFGNNORKHAKSNAQSSDEIGUHYCSYLBEHGODSRMAXVBKYICRLXCIUZTTMEOTOGEDAROBISJDTCEMHMJWKGKUBVQPYFTJVRZR");

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
    msg.setTimeStamp(0.0361852920483);
    msg.setSource(14801U);
    msg.setSourceEntity(230U);
    msg.setDestination(25332U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KPXQIOKXTFOHJXGOEIOGTRCWGFDXBJYHJMVYRFVXUAZBGTSHMUVWQYNVWXNTGMRDSWFMJTOAUCATBKGNEEARMEBPILUFPBKLXOWSAYMLLXXHXRFTAJLZYJYPZTHIQQZCDTQJCNICVLDRBKQYOCVHSACFMPULOYEDUKPBMZKSNOWFGJIUEPQRDBMLZZJTVLRQPRCZREAWVCWWNDQNKDNPNKM");
    msg.attr_type = 152U;
    msg.min.assign("UCUWBDYAEARJTFWZLXKDGRFR");
    msg.max.assign("KAPKIUSWICKQJQVDUNCOAAUHWZMBYIXLSCDOZ");

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
    msg.setTimeStamp(0.461434380791);
    msg.setSource(1329U);
    msg.setSourceEntity(200U);
    msg.setDestination(23000U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("JDWXFJEQQTGWGDOBDXDHYVXEZAYPSMMYNLIGROZBAYDPLOIWLHDJLFNZPAAVGLQRALBURZPTFGOQBBTFGM");
    msg.predicate.assign("RWQCMCAKQXJTVVJOGCTLODYFWGSQLTSRKBCMNVJBMNQRFRNLNGCKTELOYHDULKPDYREYIYFGFSHMMZTYAUTP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LHBVDWLOSLYRFRXSYDJFCZCBDXGVGQGTTABXLEUNGIKKQDZFPOKPUPXUGZTBOSGZJVILXXCKABALIWKPDVYIECTTMPIDAMNHXVNTMYAHTYFWULEUTKLJFSGOJREDWQSJDEUOSEICJGVKJWHRQYQYRWJOFLNOUCKCCDAGZBYMEMHJPWIJVMOZFTPMWFOHOYSSVP");
    tmp_msg_0.attr_type = 102U;
    tmp_msg_0.min.assign("FOBCSBGVYDUEKQUCRHCFELXOLDYLCHKRTESKRLPOTKWPGOJZHGQLHJNQSUNLAGHHSINPNVZVLKQYEDFLIWQFJAPJQQZNHIFMAGMJNWPBVBWYIBVIOUGWXRDNGSCXXRAGXPOFONTEPITWJMINURSPDQWIWUVUFDHHZYUCDLBXNSSTJJKAMQTDLEBZEMMMAUXBXTKIYXVVGYQKAFFTHMRAUZPSA");
    tmp_msg_0.max.assign("YORTAETQPFPUTDLBUNYZTSQXKZDPFZDDMOYVQWVSFANGG");
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
    msg.setTimeStamp(0.456756167753);
    msg.setSource(12337U);
    msg.setSourceEntity(159U);
    msg.setDestination(36551U);
    msg.setDestinationEntity(132U);
    msg.timeline.assign("QARKARURYEQHRITUBMATUGQPQEPCIVHZPVYHVNWVXXLMQIIJFSGMZFCDYMIVEVHPDQBTQMGIYFNLOETZQDIBCCHWJBWKJCEUSMPCFGLEJFBXBOJDKHARMAJFZLOGPPYGWZNIUZRJTHKWDHAFKSYRUWSOXUWXJPBDLCEICHUUANDRAYSUKRVNMVSLWGSKLCRNELXMAXITNVKNOZYZXDBNXFNJPOTOOMEYQWBZJADGVSLGBCWEFZYDOOTKTPSFGL");
    msg.predicate.assign("XZHBPZNEVWBTLRUEAMAEAMSTNLGJTEILQBMZCLCLYOOQILJYKMHGCVQGZTDJBWYRXEYDIITOZRCDBNUZSUNRHLXFGZSTGYTTLHRDKJCKFQBDUWHQNPVYMOOBFWNXSOWDEFENPCCEMMDUKCOQKPUXQZFKDELGBHSYWJUAPAONSVXLZHQXIAVRJUBYAVRKMXUVGYVJAEYG");

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
    msg.setTimeStamp(0.631978296525);
    msg.setSource(50374U);
    msg.setSourceEntity(229U);
    msg.setDestination(20283U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("DXPQXQVRZUJAMYLIJPYZRUXEIMSPOFRMTNVUEAJ");
    msg.predicate.assign("RJGELFWLSHXKCCVAPEWAEQZKEFAVCCUJXJBUANMFBJUQXDBOEIYSSGCVHKTLEJKQHTHSUMTNKZAPZGJY");

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
    msg.setTimeStamp(0.605353521786);
    msg.setSource(55391U);
    msg.setSourceEntity(30U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(186U);
    msg.reactor.assign("DSZZTDMXACKSFRCDBKXBHUURQBGHAUFQEFYKLPQUOQHXLWEJKIPDGWTSBXZQNEXMNKOBYAHMUIJRBU");

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
    msg.setTimeStamp(0.0251071308823);
    msg.setSource(2628U);
    msg.setSourceEntity(41U);
    msg.setDestination(45691U);
    msg.setDestinationEntity(230U);
    msg.reactor.assign("KJGWFFJJVOESSRDIQWHNYOKJMTJITSXOVWBTEFRUZEJJVRQQBLBUCBAILRLJFZLYDNQQQDLUPFVVCGBPNWOZGHMTAHLNBPASWKMOZFLOIPCVHQGCRTEMQNLNYXRHMZYYLJTKAKASFDOT");

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
    msg.setTimeStamp(0.372681557231);
    msg.setSource(58394U);
    msg.setSourceEntity(33U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(212U);
    msg.reactor.assign("MXJXTKZLRTUEOFIUTYPOROWMMVJXPUKHOIZSSEZIYGVQYPAZBGBANJVSIBWHSCIWDLPNYNAORCQEBUQNVAZOOHLOLMYJHNRVXDMNTAUOQRLYITDBHVCVCJELAPRICBFQKUQGCVGCQDLQMUSYGXMNPPXLCFMJSAXHRAEHBZKCEAEDTTVFMKPWNKJRWGGTJDGZFQRIWFZKDS");

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
    msg.setTimeStamp(0.694183613037);
    msg.setSource(9171U);
    msg.setSourceEntity(27U);
    msg.setDestination(8637U);
    msg.setDestinationEntity(136U);
    msg.id = 106U;
    msg.width = 5583U;
    msg.height = 59752U;
    msg.widthstep = 45909U;
    msg.channels = 187U;
    msg.depth = 122U;
    msg.finaldata = 121U;
    const char tmp_msg_0[] = {-102, 82, -55, -86, -81, -73, -127, 10, -113, 6, -70, 35, -59, -121, -94, 62, -10, 119, -38, 122, 15, 5, 40, 73, 92, 69, 10, -61, 84, 100, -119, 88, -43, 71, -121, -82, -51, -76, 66, -44, -35, 119, 14, 52, -16, -119, -2, -82, 9, 41, -16, -3, -89, -128, 73, 45, -71, 81, 14, -118, -31, -95, -49, -43, -33, 15, 36, 112, 95, 104, -70, -128, -22, -76, -110, -19, -31, 93, -29, 113, 64, 116, -57, -43, 112};
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
    msg.setTimeStamp(0.583728495005);
    msg.setSource(48124U);
    msg.setSourceEntity(169U);
    msg.setDestination(64581U);
    msg.setDestinationEntity(103U);
    msg.id = 181U;
    msg.width = 9183U;
    msg.height = 11106U;
    msg.widthstep = 25057U;
    msg.channels = 102U;
    msg.depth = 25U;
    msg.finaldata = 83U;
    const char tmp_msg_0[] = {3, -66, 75, -31, 50, -44, -68, -44, -111, 17, -122, 82, 101, 9, 35, -71, -56, -92, 33, 85, -26, 4, 114, -69, 119, 50, -84, 3, 52, -85, 116, -119, 47, -72, 15, -76, -35, -94, 45, -121, -48, -121, -106, 59, -51, 12, -56, 37, -118, -92, 84, -13, 16, -42, -8, -13, 94, 105, 1, 34, -103, 115, -79, -28, -21, -60, -23, 117, -88, 104, 109, -96, -37, -69, 40, 10, 39, 65, 23, -99, 66, 85, -57, -27, 23, -9, -3, 46, -59, 29, -16, -109, -21, -12, 72, 20, -39, 2, 62, -73, 56, 78, -100, -19, -65, -103, 12, 102, -44, -25, -124, -128, -76};
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
    msg.setTimeStamp(0.615808513269);
    msg.setSource(62625U);
    msg.setSourceEntity(56U);
    msg.setDestination(38644U);
    msg.setDestinationEntity(230U);
    msg.id = 213U;
    msg.width = 2308U;
    msg.height = 55808U;
    msg.widthstep = 31300U;
    msg.channels = 53U;
    msg.depth = 116U;
    msg.finaldata = 222U;
    const char tmp_msg_0[] = {-128, -73, -87, 19, 16, 102, 2, 5, -31, -120, 13, -23, 31, 50, -11, -56, -81, 98, -60, -97, 76, -121, -92, -70, -120, -121, 52, -43, -57, -107, 54, 9, 122, 53, -74, -30, 67, 102, 105, 97, 36, 29, -46, 105, -78, -95, -83, 45, 93, 120, -49, 91, 101, 10, -52, 21, 48, -121, 24, 106, -122, -63, 65, 38, 1, 29, -37, 43, 43, -54, -40, 86, -34, 89, -66, 33, -79, -71, -16, -20, -108, -97, -55, -85, 63, 116, 76, -6};
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
    msg.setTimeStamp(0.256044636281);
    msg.setSource(48903U);
    msg.setSourceEntity(236U);
    msg.setDestination(54215U);
    msg.setDestinationEntity(94U);
    msg.width = 13390U;
    msg.height = 10404U;
    msg.channels = 37U;
    msg.depth = 197U;
    const char tmp_msg_0[] = {22, -112, -67, -8, 77, -20, 54, 49, 86, 9, 42, -86, 77, -91, 49, 8, -94, -15, 72, -89, 74, -80, -75, -52, 71, 63, -101, 122, 103, 97, 52, 85, -1, 42, 110, -54, 77, 42, -3, 98, 95, 54, -107, 7, -97, -26, -95, 64, 92, -124, 97, 12, 95, 6, 116, 118, 87, -105, 43, -14};
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
    msg.setTimeStamp(0.765689405151);
    msg.setSource(22494U);
    msg.setSourceEntity(76U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(60U);
    msg.width = 26934U;
    msg.height = 7946U;
    msg.channels = 8U;
    msg.depth = 155U;
    const char tmp_msg_0[] = {8, 74, -85, 117, 45, -88, -13, -34, -84, -99, 69, -122, 70, -96, -54, 19, -24, -97, -111, 74, -7, 70, -20, 28, 81, -50, 73, -105, 87, -6, -77, 32, 17, 74, 120, -73, -12, 106, -53, 73, 92, 56, -107, -49, -128, 18, 71, 20, -8, 55, -40, -121, 26, 105, 33, -84, 79, -52, -111, -83, 59, -63, -79, 41, 97, 124, -39, -52, 56, -110, -34, -66, -121, -26, 13, -114, 94, -9, 33, 83, 117, 77, 114, -84, 120, -37, -121, 42, 51, -41, 36, 99, -105, 35, -31, -61, -27, 72, 64, -50, 7, -113, -87, -47, -108, -43, 113, 9, 119, -24, -13, -21, -20, 15, 82, 80, -33, 48, 116, -101, 115, -94, 3, 34, 30, -58, -59, 86, 96, -93, 32, -95, -36, 22, 78, 71, 23, 72, 121, 114, 124, 38, 87, 12, 29, 81, 54, -35, -2, 111, -64, -21, -78, 15, 88, -66};
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
    msg.setTimeStamp(0.36819752222);
    msg.setSource(21729U);
    msg.setSourceEntity(145U);
    msg.setDestination(37750U);
    msg.setDestinationEntity(17U);
    msg.width = 62596U;
    msg.height = 38208U;
    msg.channels = 242U;
    msg.depth = 115U;
    const char tmp_msg_0[] = {52, -67, -29, 1, 15, -116, 90, 97, 119, 0, -103, -19, -35, -94, -118, -33, -36, 51, -90, 76, -118, 82, 118, -67, 58, -2, 16, 105, -34, 22, 122, -90, -97, 18, -3, 23, -123, 84, 92, 71, -54, -88, -127, -28, -57, 65, -47, 84, 39, -26, 87, 17, -105, -128, 30, -100, 59, -108, 94, 47, -110, 46, 113, -56, 79, 118, 55, -101, 3, -57, -46, -58, 80, -102, 47, 12, 119, -3, 65, -95, -57, -114, 65, -24, -56, 8, 21, -118, 66, 119, -27, 124, 51, -2, 23, -55, 100, -81, -32, 43, 0, -78, 102, -75, -46, -50, -13, 52, 68, -14, 29, 67, 48, 85, 116, -114, -51, -58, -34, -34, -69, 61, 125, -13, 14, 121, 88, 122, -73, -127, -55, 1, -21, -100, 105, -71, -100, 0, -109, 29, 75, -65, -72, 119, -41, 30, -47, -5, 123, -52, 95, -52, 101, 108, 119, -70, -121, -48, 73, -82, 85, -22, -74, -51, -74, 43, -104, -74, 45, 41, -57, -65, 56, -15, -89, -120, -39, -61, 21, 46, 93, 93, -90, -48, 93, -20, -16, -118, -108, -7, 88, -18, -30, -49, 117, 74, 95, -58, 52, -83, 111, -122, 71, -92, -110, -121, -33, -96, -5, -62, -17, -67, 110, -85, 92, 102, 27, 118, 123, 9, 116, -30, -71, 48, 75, 122, 96, -87, 76, -81, 126, 91, -62, -31, 62};
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
    msg.setTimeStamp(0.851933673908);
    msg.setSource(18057U);
    msg.setSourceEntity(88U);
    msg.setDestination(19835U);
    msg.setDestinationEntity(68U);
    msg.frameid = 1U;
    const char tmp_msg_0[] = {-27, -101, -106, -81, -64, 13, 74, -2, -33, 86, -1, -79, -118, -92, 44, 5, -97, -88, -24, 58, 0, -30, -95, 0, -3, -69, -82, -104, 108, -60, 66, -117, 74, 35, -114, 73, -3, 69, 5, -2, 23, 2, 74, 102, -63, 53, 113, 49, 2, -118, -118, 54, 37, 66, -55, -45, 62, -86, -70, 118, 24, 39, -126, -70, -105, -32, -104, 121, 39, 123, -124, -95, -84, -20, -44, -5, 125, 42, -50, 79, 84, -4, -53, -51, 82, 102, -110, 68, 113, -50, -4, -104, 39, -12, -13, -122, 48, -12, -12, 5, -40, -98, 26, 12, 100, -95, -27, 70, -113, 125, -12, -20, -118, -61, 123, -22, -8, -16, 38, -9, -123, 46, -65, 120, -7, 9, 31, -13, -54, 1, 94, -7, 12, 55, -71, -93, 110, 72, 26, -14, 121, 101, 68, -68, 86, 112, -30, 11, -111, -25, -21, -11, 64, -122, -4, -34, -21, -73, 95, 96, -17, 103, -125, -52, 125, 126, 103, 84, -103, -110, 9, 74, 8, -110, 23, 102, -60, 60, 55, 80, 14, 10, 86, 47, -102, -72, 59, 122, -106, 97, -97, -89, -31, 21, -10, 98, -52, -25, 45, 13, -19, -118, 30, -26, -8, 120, 107, -10, -95, 95, 97, -57, -23, -76, -68, 80, 60, 0, -88, 46, 74, 49, -54, -34, 87, -111, 126, -77, 63, -61, -5, 96, -107, 73};
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
    msg.setTimeStamp(0.443217196676);
    msg.setSource(54704U);
    msg.setSourceEntity(94U);
    msg.setDestination(39003U);
    msg.setDestinationEntity(97U);
    msg.frameid = 137U;
    const char tmp_msg_0[] = {92, -84, 101, -66, 43, -32, -123, 106, -25, -103, -98, 125, -16, -38, 103, 17, 19, -120, -23, -64, 88, -66, 79, -35, -50, 124, -48, -99, 64, -101, -59, -50, 98, -99, -26, 114, 41, 39, 120, 44, 51, 87, -107, -72, 104, -58, 76, 19, 77, 123, -26, -114, -43, -111, -38, -109, -109, 29, 66, -45, 95, -78, -95, 82, -90, -22, 85, 96, 119, 52, 119, 27, 95, 4, -89, 44, -12, -67, -33, 101, -39, -107, 39, 111, -66, 124, -1, -2, 96, -32, -12, 74, 5, -37, 0, -104, 72, -81, -40, 75, -126, -13, -1, -27, 0, -39, 61, -71, -128, -29, -53, 3, 85, -74, -56, 62, -31, -115, -84, 61, -106, 43, 102, 107, 94, -117, 84, 18, -126, 17, 63, -31, -119, -37, 15, -103, -15, -97, 65, 115, 48, 99, -20, 86, -60, 74, -113, -45, 79, -91, -25, -87, -67, -51, 51, 73, -101, 111, 21, -39, 85, 53, 58, 27, 99, -73, -67, 56, 36, -43, 64, -115, 90, -15, -22, 49, 46, -80, -16, -55, -21, 23, -48, -2, 16, -75, 24, -83, -62, 108, -111, 50, -111, -5, 112, -47, 46, -106, 53, -100, 93, -91, -82, -42, -34, 82, -95, 59, 99, -105, 115, 100, 29, 80, 46, 4, 48, 8, -99, -31, 120, -64, -23, -63, 57, 1, -46, 43, -22, 38, -121};
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
    msg.setTimeStamp(0.753528865395);
    msg.setSource(29630U);
    msg.setSourceEntity(40U);
    msg.setDestination(29002U);
    msg.setDestinationEntity(24U);
    msg.frameid = 66U;
    const char tmp_msg_0[] = {-106, -67, 41, 68, 114, -5, -99, -84, -121, -17, 79, -83, -20, 67, 36, -68, 39, 101, -72, 29, -72, 72, 114, -61, -34, 48, -95, 60, 119, -65, -68, 81, 68, 25, -90, 39, 22, 54, -11, 54, -43, -11, 113, -58, -33, 57, -14, -89, -86, -125, 39, 6, -38, -9, 53, -101, 97, -50, 5, 18, -101, -123, -76, -52, 87, -111, -17, 48, 57, -90, 115, -106, 54, 9, -59, -39, -41, 84, 100, -62, 76, 100, 21, 53, 77, -64, -115, 70, -82, 53, -35, -11, 71, 111, -62, 85, 78, 6, -75, 88, 48, -113, -43, 8, 59, -1, -127, -47, -88, 84, 63, -118, -110, -92, -2, 43, 46, -92, -56, -23, 67, -89, -121, -5, -78, -100, 27, 112, -39, -2, -94, -68, -34, -112, -114, -69, -112, -90, -49, -5, 101, -43, -102, 63, 92, 126, 110, -20, 103, 109, 8, -52, -93, 11, -15, 35, 13, 5, 4, -88};
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
    msg.setTimeStamp(0.0872644794032);
    msg.setSource(13106U);
    msg.setSourceEntity(223U);
    msg.setDestination(15684U);
    msg.setDestinationEntity(211U);
    msg.fps = 21U;
    msg.quality = 126U;
    msg.reps = 149U;
    msg.tsize = 41U;

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
    msg.setTimeStamp(0.581565228394);
    msg.setSource(17032U);
    msg.setSourceEntity(66U);
    msg.setDestination(12999U);
    msg.setDestinationEntity(253U);
    msg.fps = 85U;
    msg.quality = 63U;
    msg.reps = 10U;
    msg.tsize = 224U;

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
    msg.setTimeStamp(0.749028214868);
    msg.setSource(26134U);
    msg.setSourceEntity(163U);
    msg.setDestination(44297U);
    msg.setDestinationEntity(237U);
    msg.fps = 202U;
    msg.quality = 233U;
    msg.reps = 55U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.487841553115);
    msg.setSource(54798U);
    msg.setSourceEntity(191U);
    msg.setDestination(52389U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.544083599931;
    msg.lon = 0.516026883199;
    msg.depth = 252U;
    msg.speed = 0.178805819145;
    msg.psi = 0.961515660951;

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
    msg.setTimeStamp(0.879522072015);
    msg.setSource(51649U);
    msg.setSourceEntity(58U);
    msg.setDestination(51618U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.810206260731;
    msg.lon = 0.798587791567;
    msg.depth = 175U;
    msg.speed = 0.378980263248;
    msg.psi = 0.740525746602;

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
    msg.setTimeStamp(0.418581539123);
    msg.setSource(33526U);
    msg.setSourceEntity(128U);
    msg.setDestination(35425U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.469992383003;
    msg.lon = 0.977641705133;
    msg.depth = 229U;
    msg.speed = 0.651982291579;
    msg.psi = 0.980929853669;

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
    msg.setTimeStamp(0.350805481945);
    msg.setSource(46484U);
    msg.setSourceEntity(172U);
    msg.setDestination(10162U);
    msg.setDestinationEntity(158U);
    msg.label.assign("INRNGJHFVDUDXGYGSGBKNYAMGJQNZRAUXEVUVZJVXIJSJYGOTHQXULCMUFXBNCNZNBBCUMSVQYPTAEFHZZPKWWKJCDHBERELWIQR");
    msg.lat = 0.38125309703;
    msg.lon = 0.950660428583;
    msg.z = 0.522638059866;
    msg.z_units = 103U;
    msg.cog = 0.870097714549;
    msg.sog = 0.829846299377;

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
    msg.setTimeStamp(0.954085387174);
    msg.setSource(44821U);
    msg.setSourceEntity(235U);
    msg.setDestination(60206U);
    msg.setDestinationEntity(185U);
    msg.label.assign("PDAXKTOZSVDNCFYMUZJOGTGHUAFQODIVEJHZLHQKYEZKZOHSYILSJNXSMHTAFIGCJOSZMRALFBWRZWIKTUXXVTPJVABZPJSORRXBJHSDYIVSIIPWJLGYUPWCYNMNCLKFTWDPWDYMADMZAXUIEBDHYVCUMMFXAKVEWGGPKUOKUHBDRAMRQFSILBRWPNQFKCERUXCQEROTBPEBEBXGLGEQVNENPWHFLSQZUTJALMRWOCDI");
    msg.lat = 0.254656062357;
    msg.lon = 0.344423783595;
    msg.z = 0.661070353266;
    msg.z_units = 62U;
    msg.cog = 0.505873309031;
    msg.sog = 0.511093959834;

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
    msg.setTimeStamp(0.495587405644);
    msg.setSource(44245U);
    msg.setSourceEntity(245U);
    msg.setDestination(55911U);
    msg.setDestinationEntity(77U);
    msg.label.assign("YZNENMAPOSBWTSDMIAENCVSBLLQJLVXOVBVCLJSNITVMHZAGECZIPGTOQKRMNWKURIRVIIEDXMWWPIPRFYYAGCXUZRJQQSDHSKGKDC");
    msg.lat = 0.43923549785;
    msg.lon = 0.969992982342;
    msg.z = 0.614286966632;
    msg.z_units = 108U;
    msg.cog = 0.585796826647;
    msg.sog = 0.0813839988383;

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
    msg.setTimeStamp(0.629986835812);
    msg.setSource(39436U);
    msg.setSourceEntity(185U);
    msg.setDestination(42194U);
    msg.setDestinationEntity(50U);
    msg.name.assign("OYBQJBCSIBOONKCQZGZSHKZNHIIJJLYYCGEIVSSCNWGDNUXNFWZNFLHQRPZEVNFOFDJWRKQPYLSBQAWUXULKGDUWWYATJETUOVAVGNENFQAHQRCKWPGMSLOVTLWTRDSFHJXTZEDCBRLHSXTPAGFRKSBBYPREYJXOPXIBHMUPVMUWKXNCMBUDWHXJDX");
    msg.value.assign("AATLDTLRUSDOYAWFARKPJWZIZQLJQTCBJAUCRBKGGLYDXSWGBYKZAQCGWAOJIVJHLVHDUJGIIWNYQKDCQXFOMLVHPIVTBVZFAXDCWQPMVHDMTSMXISSWNFYRFCLPGIHPYBNNZMHYUBHRZKBRQMUGGBSVEHJXLWYTNUIMEUKEEUQOOPKHZGFPHNKESXFJBVOELNVEYSEWEXZNCCZSKQTEUDPINYOAXMRVJUFTNFCTMRLGRJIKXRZCPMODOA");

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
    msg.setTimeStamp(0.359061689181);
    msg.setSource(37700U);
    msg.setSourceEntity(10U);
    msg.setDestination(32206U);
    msg.setDestinationEntity(240U);
    msg.name.assign("RLUVLCGTTKJKZNCFXMREPNJMBWBISUNZBCKOWYTBKYWWXCLIPTLYYJOGVTTYURIJAUAHWVGQRPLRDFETKKWLNMEFEDFPXENVIFRFAXQBDVWJIIEDAZJSHCUDFIMGGZDBUHMNDHAZGYOCQOSYHNTRXDOAKHQTCGVQSBZQPOQHWIONPWJG");
    msg.value.assign("HXSCBNRRMGADJYKKZWAXFEALYIEIIWOWZEXVSZUKUYQFELOLPGMQAUIJUONRRGXNTAHDOMQRVSPIGUORVMEEZPCWVBALPYOVQNNXCBABDHYWDWXSNSPJETTTXFHMSCODCZGIZCSNQHLDBUHVTZMTRFGRTFPUBTMHJJJZFJPXBWQAVLNKXJLOQFYZXZLGKKUDWMDEUQLWG");

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
    msg.setTimeStamp(0.127844966295);
    msg.setSource(35823U);
    msg.setSourceEntity(26U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(59U);
    msg.name.assign("HGQQCDUJCRLDHSEEFIUHGOILKTMPFIMCHFZQHQSRNOZAAXSEUZUEMPVZDLXLCSCPWCVOWFNXRMBLZAXSUDKAJYLJNOBPWLSGITQKNBRWVAFVQSBPRVAJSEDQCITFDNJXENDQPIWYHYYBGHYVHXOUZMXRNCEEHXWHZBFMKASLVKUAVITAJPGYRMJUJYEDOOGUGMYAKFGWDVIILJYTXODPBNRPFWXSKTYWMCBI");
    msg.value.assign("SSTLERKNMYDLJVEIUBHXGNIQBCAIBGKTMWIMTZZXUCELTXHRFXMLKHQZHKVNUMDJNYPMTXBPSYQSAOEDRJSXSJXMEPGQQKQCVZCYZTJLEWBDTDLUVFAODWAIGDJGVGW");

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
    msg.setTimeStamp(0.788791776278);
    msg.setSource(53543U);
    msg.setSourceEntity(53U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(125U);
    msg.name.assign("JHFYNGUEBZNKDGSOLFEIGPQWGWXCQIBQMTSCKWOEYEWUSEKDVMCVOAHFLRWTUOJNPRLLEZZUITXPQYDISMTGZVCYKVHZRBFRXUBTYPRYBSXFBBWYLYVNPCQSRTPKTYPQAANDQZGAHAMJLRMLMZXICEJIGRNGZJTENXVAODGIFSRUSQXCDNXUHLSAXOIIKKHMSFTBGBWBJNTOJUKAZNEPOFDMJVAFHQVJCHWMWDLLDDRCIOK");

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
    msg.setTimeStamp(0.154710038601);
    msg.setSource(14710U);
    msg.setSourceEntity(86U);
    msg.setDestination(36351U);
    msg.setDestinationEntity(36U);
    msg.name.assign("OSSYZVIVGTKKISUJMRTUNOXYEYZJFZXJSLBMPCCDLKJXAFGODNFFOJZBCEEUHCATHGPKCXZCDMHJJCXMFTFENRSPGYEQXCWWGJXLNGBVYNZIQTARKKCPETUEBWHOAZYIFDJRAHUNKSIVWEUTDLXOJQFPQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DMECXWXNUZJVGVBRKHUBEGSWNMIIDZLYBIEXLZKLXXUHBLUZOGTNRKIEFTDNHUGJAPIOAMDTVOJKBFEMLPQSHYCQHJHGIOATIY");
    tmp_msg_0.value.assign("PQDYQSGRWAGANMGBKDBLNNUFCBXIZOXVTANOQSQUYYVOCFZFPSDWCRFBPSCEILVRTJPJGRVWBXSRTLXRWQOWLNTYMWMPBMHWPKHNCVAIKALZIZTJESFVHKULIMAGKD");
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
    msg.setTimeStamp(0.917295179838);
    msg.setSource(28464U);
    msg.setSourceEntity(7U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(23U);
    msg.name.assign("PDUYAQLMAEJDBYITFZTHSQYHABSDWUFDENUJFYOSQSJKEFWZBNFOPNTAXRQRWLUVWZYIVFNHAOLUXLYMPIRCFRRWIZUHHIOCSATTNXQNVKACTCSQUBMCIJZVXGBPSGPNXOMILGGPYQBZKUJXESOJDACCEVDANREWKHTOMNVIYKMBGWLYLPHFVDEXGCDQKLPCKCMUFJIWRMZGKNEPDRXHOZBBFREBWGXUDQKLWPRQTZXSAJYVJMOSGVTE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DFDZMKUZDJTETQWOYIGUSMSVUOZTPYDKRMZXGILUZUKCNKIUMGQDVFGJINDWSCYQVJEAWAHFLCPCHKXOOXPFGRYVOBIDHLPVSFXJGPEQERUIAKDVMDLNWRHOCZUYWIEWUIZMXOHNEKBJBNXTI");
    tmp_msg_0.value.assign("XMFLGKTCXWIGUHMIWGHVEEDNZFSEOXZUCKHQMLTVTSVQNYGKURPBJCUBNKCBROCNPUWGKVRMRHRBGISCXUVPRWLGSCKZVKBNDJMEXHNUDSJAJLQDZGAOMSUADVJBLHYPGRHMDYRCZDQXACTBRDZHLAZEOYSWOYTE");
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
    msg.setTimeStamp(0.0779686604066);
    msg.setSource(56215U);
    msg.setSourceEntity(115U);
    msg.setDestination(31313U);
    msg.setDestinationEntity(187U);
    msg.name.assign("DDUESASMROCYGLIZWMOYHFZCROGPOSRSKWNSKVUIPHWBOUNUCCAJXZTEQHRKDSJYXAQMIHPFYNHDIJBZXYVOWZCVGVLWDLKXXNXJSXVBFMTRGTKYNAQSIEJQGWJCBXLLPFUYEHFWKIAAAHVGCFTLBRYRTBICPTFLZQEJEUIZUUIO");
    msg.visibility.assign("BRLXEYRYZKQFDMFQYOUKYRTUZIKVMCQIACFINWXMNNDYOBHSVPILTSVYJSHJTWIWSPQJGLOBGEALWIZLOJNVWJTJUCKKMCKWWDHIQHCYAMDVPLTQDBAHUZBCXZAETNQIGMTJNQXBFGEG");
    msg.scope.assign("HUHTNTSHPCVYJWFLCRDBZTPOQFRMCVHCDZYQHDJJOPBGYCIVYOKZBDKORLQMZBOURXZCQMXTXUMAEBGSPUNPCQWRYQEU");

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
    msg.setTimeStamp(0.271344714204);
    msg.setSource(54922U);
    msg.setSourceEntity(183U);
    msg.setDestination(54843U);
    msg.setDestinationEntity(189U);
    msg.name.assign("UUCYAMNZTPGVIUKXEEHFCSORBEGRLTXQGBYHKDBRWFTSZHZHIPZZGFEKNEJGDHESLSTAYOQMJBDMQUXUFOGYYBSTJPURTOLNPOKHLZDWAHKFNNORZXADKIBTYIVEJEXRAQNFXCJQWDLHMMRBJYJSFJLWPWIWVFBIYDIKPPAWWVZYCPOBEUVQOEMCULOMXHNMSGKCAZGKBIASTICNRUSKHQNDRWQMGXPSFLMODGQVVFINXVRCTJQJCL");
    msg.visibility.assign("SURDIEHBQVPJZSFEAVLXRDLMMDQSYJUYOXBMDSANYOCLIPZUJZKHJPTWTNKMLGIXNHMPKGVZWWZNLRKXSAUEVXXSAZLMIAQFKZEHFXQQJOUCOBKDLDKUXESVQHRQMNOYGEGYVQPRWGCCAKHFIIZWHSPGTK");
    msg.scope.assign("MYVSUFAXPOJZEXUKTZNWGLTKWDQCZKMLDJKVSVYGLPKUARCPJJBTZWSCMXJETCPQYIFESQNQYQNYIHRUTVAURLZNNNODZILILEDIORXOXNQAXDTCVIXDPFHHTHAPHBVOTCYAUTRCXKQARISGIBOHSVGVHS");

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
    msg.setTimeStamp(0.988921701715);
    msg.setSource(46590U);
    msg.setSourceEntity(104U);
    msg.setDestination(23643U);
    msg.setDestinationEntity(227U);
    msg.name.assign("XIHUXEOJUDKCPOTIYHDQUIMZVEMNYUJHCRFCFBQKFZMDQTANTQHQSSQYWCDKHABPHZEIRIWNSPRISXCHEMRDGSMVOTCXCBJAGHHSFELOGIYATZPVRLVCGPJNNLKMSUOUJXLRKRKZYGILANBFTUKSHZFXRYDJEUOVEFZKJQJGCVPBAFWDAJDWUDNYVLOVNXXMAODVBFTBGMGPPIGQBL");
    msg.visibility.assign("APLLZMVYFGOPHYIAFTVPUCEMDHCHTZZDIFLQLXDTNVECMWRYJAEQPNJTLORJBWJMNKUIBBOXUJSNOQMOHVZZDHTCPRQFSJRTDPSDVHDCQUHBYWNPG");
    msg.scope.assign("KAHSDVCZUKEXBWGTROGCVQCENSDAQKHHICMADDMCPMYOQMIVOBKDIILFDRHJLUBFXWZMLOZWRGNJSGRTEOIFSNJWWTNHTHAPWNLBUXUSNZPLJIONWKQTOUBGJRKBCYFYKLTLGSJFIVOAEESMAEMRXUILJYIFRNKDTSTZVAXEQYKZBPTVTUMEXXAEMVFRXWDGWPFZBXZCYVHHJYKPFYDUQXHGQSHUMDGCJAPLCIBGRORQJLPBENZQYC");

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
    msg.setTimeStamp(0.625652313416);
    msg.setSource(6905U);
    msg.setSourceEntity(4U);
    msg.setDestination(9074U);
    msg.setDestinationEntity(188U);
    msg.name.assign("SOKYMIVSDSQPTRXNUJHOFYVGIZYMRKSNASOBJUQFESHRCHJAEDSIDEZZWNLEKCRUWXVACTELCZTEPQHWULGEFJDGCXSAJKMAQBJN");

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
    msg.setTimeStamp(0.565395451917);
    msg.setSource(56232U);
    msg.setSourceEntity(148U);
    msg.setDestination(25256U);
    msg.setDestinationEntity(73U);
    msg.name.assign("KADLQAEZPHWEHISTFZZRAANAZQNRCFGSJYBDWXKNVSBRNPXVXRPPLCYLQMFJOUAYVQLMRHUNWZDFETFOVHSQHFOIZABUVKPWQNCQJPEMSXFFCMEE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EYDPHSNMMQJHGQJRIZYCCPBFWSRQTWMNVYJFLOHMVHLLBJCRJTVTWIAMSSWVUGUVXEBKZPYUZQTDWDXKLFXZETYQBKUURU");
    tmp_msg_0.value.assign("GBHDMQPKFNSNUJJBYTSEKEBUUPHXVIVNQQVZEIRZOGDJBVVTDXSADDGKVPANEZAPDBFVRNAEWMNGSWYHQFYRAUJQNZRNZQTMMUOQYGATIVOYHHETCGLRSTDDUFXGOMFFZYSYOPMRXFECAQRHBCUYKSUJTHTHOXSPDJKMKLWJLKGHXWOSBMIGNCEZXLLCSZBWTXERCLFKCUWO");
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
    msg.setTimeStamp(0.259155355052);
    msg.setSource(43724U);
    msg.setSourceEntity(71U);
    msg.setDestination(858U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RRGWTMMVNOFTUXAZDTJDRYJKYUGAQQFOXJGECYQORRTWZWQDVPUACHNHPLLBPOYSKWVPCPYMXAGGFQVOQQNKSMALDSNMIAHYZQMGBUCSSEVDWQNDOPOLYVXIPRFFGVUNONKEDMXIYEHJHEJLVUWGSCYTRKACFEWISFYANLTFTZRLUJTEKUEM");

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
    msg.setTimeStamp(0.819787716117);
    msg.setSource(56345U);
    msg.setSourceEntity(128U);
    msg.setDestination(35279U);
    msg.setDestinationEntity(253U);
    msg.name.assign("SXURJUARHSMDXEJONHAWHLYCZIEBJQWMZFPWIQUDQJLNNBTCVOBWUELTOZPVUVEGDYIDRJPXGFPHEOCTWXQLQFUJOYMMYMKLNRYXKSDMUVXUYZAWWBGCZEGTZHMRGEVFDOANPLGOBISJPUQZKIHWBTCHRMSGRCKACYAVKOTBFEFVFLDHNFZGAIFVZPRCJNKXBTARPWN");

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
    msg.setTimeStamp(0.264910666987);
    msg.setSource(53076U);
    msg.setSourceEntity(109U);
    msg.setDestination(45926U);
    msg.setDestinationEntity(189U);
    msg.name.assign("PREYVYUWCAJZZRJIDMFDTSTHCRIGRDVPDFZBQEUFUPRXPMCVJQKUDOLFAMSPQLQIQGSNULOOBFYCLCWUHIWZVAPTEZDGAIWHOJMVKNPVAGXUKADKKXZLTIATVMNGIJHFHGQMLYWNBRHNNAOIZMEWYBZTONGSWQFOITZNTKWKE");

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
    msg.setTimeStamp(0.264858174567);
    msg.setSource(49710U);
    msg.setSourceEntity(214U);
    msg.setDestination(45902U);
    msg.setDestinationEntity(217U);
    msg.name.assign("UAFWXYHKGQIOWLJQDUMSRYCORRDZETOSHOJEEKZCJJILFGOZCNDPBZXVJVELYPEMATMJSNPSUTPQPXYBHFILBVHDMQVEIFDTCFUBOWQVJZORRCIJZAUBVFSBXXDWGSKYNGSPHJNJAAACPAGIKHHCIRITSRXODGDYGYLLTBUHMCPKZKVKDYEXTAIXNYMLRBEKBYLFN");

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
    msg.setTimeStamp(0.513170867652);
    msg.setSource(43082U);
    msg.setSourceEntity(191U);
    msg.setDestination(40848U);
    msg.setDestinationEntity(87U);
    msg.timeout = 165449663U;

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
    msg.setTimeStamp(0.373343960583);
    msg.setSource(5512U);
    msg.setSourceEntity(230U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(158U);
    msg.timeout = 3483157584U;

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
    msg.setTimeStamp(0.639455672655);
    msg.setSource(47254U);
    msg.setSourceEntity(164U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(237U);
    msg.timeout = 2106132739U;

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
    msg.setTimeStamp(0.578180789894);
    msg.setSource(22894U);
    msg.setSourceEntity(155U);
    msg.setDestination(12917U);
    msg.setDestinationEntity(186U);
    msg.sessid = 4216360096U;

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
    msg.setTimeStamp(0.641973684756);
    msg.setSource(33173U);
    msg.setSourceEntity(250U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(92U);
    msg.sessid = 2245296721U;

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
    msg.setTimeStamp(0.72850587974);
    msg.setSource(59160U);
    msg.setSourceEntity(160U);
    msg.setDestination(6170U);
    msg.setDestinationEntity(144U);
    msg.sessid = 3988358726U;

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
    msg.setTimeStamp(0.753371343677);
    msg.setSource(37533U);
    msg.setSourceEntity(203U);
    msg.setDestination(24760U);
    msg.setDestinationEntity(227U);
    msg.sessid = 3647349583U;
    msg.messages.assign("XSKYMNGUSSMTI");

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
    msg.setTimeStamp(0.505010343349);
    msg.setSource(35547U);
    msg.setSourceEntity(0U);
    msg.setDestination(54970U);
    msg.setDestinationEntity(71U);
    msg.sessid = 3986143613U;
    msg.messages.assign("VLQQCPBXQAGBXNMSRYGPLZOHGYCFYNURCMBSJFHHDERJTXXTRGPUBJVJGZIIXAANMI");

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
    msg.setTimeStamp(0.861070420611);
    msg.setSource(11206U);
    msg.setSourceEntity(250U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(174U);
    msg.sessid = 3665642668U;
    msg.messages.assign("QEFCTQOQIDMWNNZXZIJETWCTWUGEJECUSXKYTYVDJOKRNAHTBLWURXQNZKLRBVRGJBJPPUHBGZUPLMSHWZEDCIKFCXIJNCJTHCJAEFPFRLDXLGAQAGVMZCBSKNSLHUKQOIMJFPKLKSYCAKMCGOZELUJHBIDDTNOQNOWYXFMNVPGVSZPOSHHDESYFGY");

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
    msg.setTimeStamp(0.767621842681);
    msg.setSource(35401U);
    msg.setSourceEntity(90U);
    msg.setDestination(12970U);
    msg.setDestinationEntity(62U);
    msg.sessid = 2579734468U;

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
    msg.setTimeStamp(0.964769661713);
    msg.setSource(14889U);
    msg.setSourceEntity(113U);
    msg.setDestination(19111U);
    msg.setDestinationEntity(134U);
    msg.sessid = 1215915167U;

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
    msg.setTimeStamp(0.851564995556);
    msg.setSource(43442U);
    msg.setSourceEntity(86U);
    msg.setDestination(64399U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3286812671U;

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
    msg.setTimeStamp(0.994302348161);
    msg.setSource(6831U);
    msg.setSourceEntity(62U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1548715984U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.973880712731);
    msg.setSource(28447U);
    msg.setSourceEntity(249U);
    msg.setDestination(41514U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1093173080U;
    msg.status = 235U;

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
    msg.setTimeStamp(0.354542062995);
    msg.setSource(50581U);
    msg.setSourceEntity(189U);
    msg.setDestination(20077U);
    msg.setDestinationEntity(93U);
    msg.sessid = 3185543693U;
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
    msg.setTimeStamp(0.743467122272);
    msg.setSource(24254U);
    msg.setSourceEntity(210U);
    msg.setDestination(35582U);
    msg.setDestinationEntity(218U);
    msg.name.assign("PWQQWFIHBVXOTHSZREWTVBVTYAAUDBJTGBLDHMEYJWEAXCMLPDYQIONTWEJAZDKILGNRCKSQLYQMZUYPFREXRJSMIOGZMTDDWJFGUQAXWRZSBXAQMOMZUCKRNONHZSDVPVXNFCOOESZLVHYJTMNSVIZUKPLILGFJBSRXGYHWRLKKHLDFIPENDWGJDETBCUTMKPRQSUFUIVOIMCOQAPXUNJTPWFZFKK");

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
    msg.setTimeStamp(0.863850044447);
    msg.setSource(34656U);
    msg.setSourceEntity(83U);
    msg.setDestination(24285U);
    msg.setDestinationEntity(152U);
    msg.name.assign("DLGISBEDJQIYNJJCQSPTBMIRKWLHCSPFJSCHKREMAMPZLDQXMCPMJIIHGUXQFWTBNWMNAMRNVUZOSJOHTBPVCHRGEGLKGBKRAEVAODZYQXVYANHLZIZRBCYCXRVATWXIDUZZGWTQNTULNTPWUKJDFVY");

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
    msg.setTimeStamp(0.271213568887);
    msg.setSource(39385U);
    msg.setSourceEntity(160U);
    msg.setDestination(1487U);
    msg.setDestinationEntity(237U);
    msg.name.assign("BXJDROKKVNHZPAKRBYUYOSWVXWUKSFCOMLSRHYYGAFHPBRNWAVYDZPGMHLYMBXSTANLJIYSWFQFCUUDCDPEUZIVAUOIGNEFTNQYVDIWHHMPMQPSTPHBXTMLGXERVJPJVRAXRWSWZKXNVZYDGGBEBIQEZTCFNFDFIQNWVDEAESNUQALSZGCHEXCHESMROGIOLJJRQXCKJPQTBMRLQFNXMMZAU");

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
    msg.setTimeStamp(0.328798649605);
    msg.setSource(29147U);
    msg.setSourceEntity(173U);
    msg.setDestination(22741U);
    msg.setDestinationEntity(91U);
    msg.name.assign("WXOMKWBNTJNUBYCGNVKBNNWDLCPBAOBRYQBCMSSZPMAJRAEABLJTSEDVSHHFCETYFJKUSBVEVKOFVLXRQQAJSOGUUYMTRLCLDHLGFKPWSVIZKOZZDDMHKBTVTRIRIMCTGUOEIGUOPQYRMLWIHGEBPZAM");

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
    msg.setTimeStamp(0.9732648869);
    msg.setSource(7417U);
    msg.setSourceEntity(206U);
    msg.setDestination(14971U);
    msg.setDestinationEntity(138U);
    msg.name.assign("ZTPBLCZUMZGQGWYMXVGELILKXJJDSFSERQRSKLEVSXVDTOWCQTAMLDNBPLLVRGOPKYKOXQQBIVLXSGNUEZYMTQIJJQRCHLO");

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
    msg.setTimeStamp(0.498200807326);
    msg.setSource(27940U);
    msg.setSourceEntity(170U);
    msg.setDestination(2925U);
    msg.setDestinationEntity(234U);
    msg.name.assign("LBKKKBFHANRHEYMXXJCLSHLRQKUWYEHUVKWRAUTXAOBIYZCVDPJFMGVQIIQGMMWQFZSDDLSZJHPAZMJTITCPOVVSPUGNBXIENYFTTHHWIYVIRCEVUNCSI");

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
    msg.setTimeStamp(0.633104720898);
    msg.setSource(283U);
    msg.setSourceEntity(140U);
    msg.setDestination(1516U);
    msg.setDestinationEntity(217U);
    msg.type = 5U;
    msg.error.assign("JPZYTRMMMCIZJPXKWUPKELCAZUSPWKKRYJJYGHLQJSBFLZQHRFDZRVOFRPXGQKQUOPDUUWYMJNFGTGVRMVENBQHOYFAYUCDBQILKOFETEBIDWNTTLOIXXIGVSVHUCXPGHYHXDQKVKAETZSEXVQCSAWCLZBEFILWNTYANLNJWPIBBEGRERQLXFCJIPPDWSBUCLSSVDRXHMANUBDKJUKSVJTATCTEBMDWACXHGOWNNNZ");

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
    msg.setTimeStamp(0.181263983829);
    msg.setSource(47591U);
    msg.setSourceEntity(217U);
    msg.setDestination(33278U);
    msg.setDestinationEntity(136U);
    msg.type = 156U;
    msg.error.assign("QMPVPRBFZNPGTUEYVETQAFBACZADPGDKOUXINIRTWYIOTWXLKYJMDKAFXHSWFCIJUWFWQFVHXXKOOBNEHGOQKQNRYYDGYRHTKEOPUECQAMYGXOLBFBXXWKNLHHHQIHDIFZJWTHSJIRBPKVSZNEBRGTMCEJGVOLEMBQRUDAKZLBQSVRQMGHSSEVPACUCDDAJWLVWLUSJNCAU");

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
    msg.setTimeStamp(0.34881827904);
    msg.setSource(30123U);
    msg.setSourceEntity(13U);
    msg.setDestination(58958U);
    msg.setDestinationEntity(28U);
    msg.type = 254U;
    msg.error.assign("DBMVZJVKUIZQGULYWJFKQCJSVBDTBYGHWNEBSOIWULVDLSGMLOCBQXPOGZBZQAHVTXTMAUOOFWPYCANRDHKVCCLSLUFFSIUREWRERCVCSGRXP");

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
    msg.setTimeStamp(0.623332518384);
    msg.setSource(46184U);
    msg.setSourceEntity(187U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(131U);
    msg.seq = 7692U;
    msg.sys_dst.assign("SPWZJLEBFBFTGMDWDZZKVRPKUXXVGPCFFACAHPAVOCUVWUDTDTHPQMZOLZSKHQKGCOBTHIZIPPILECKRLMVIPEFXAFJLNAJESUNTCTZSBWRJQEMRIJGBAQVDYXJECHKVGSNUDDFRHNIEGDRQMAXFHWMPUGWSILXHHZITXMNPSRYJQZUYWGTNMNMENVOLFXYOIOYGBURJSBCZCNOOWCEQYRJKLSOTKYXUWVYGTYMYAAJISUKDALBFQDBBNX");
    msg.flags = 126U;
    const char tmp_msg_0[] = {-67, -22, -70, -4, -58, -93, 9, 98, 47, 82, 86, 44, 9, 88, -109, 97, 70, -86, 107, -120, -47, 4, 6, 44, 68, -12, 5, 16, -124, 122, 102, -54, 85, 53, 74, -53, -52, -103, 59, -37, 122, 59, -64, -23, -33, 118, 91, 4, 46, -112, -19, -67, -120, -21, -114, 12, 76};
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
    msg.setTimeStamp(0.304333353339);
    msg.setSource(15134U);
    msg.setSourceEntity(74U);
    msg.setDestination(1124U);
    msg.setDestinationEntity(215U);
    msg.seq = 52988U;
    msg.sys_dst.assign("TMQLVOQMGXWRNKPOHMOWMBHIAMSDCROYYLIBC");
    msg.flags = 240U;
    const char tmp_msg_0[] = {-105, -93, 62, 26, 42, -72, 124, 43, -84, 8, -79, 120, 105, 86, -119, -90, -46, 121, -116, -73, -36, -78, -6, 86, 86, -35, 85, -24, 85, 50, -76, 51, -83, 7, 50, 67, 34, 13, -57, 110, 95, -71, 8, -47, 115, -66, 12, -10, 83, -88, 58, -9, 13, -102, 98, -72, -61, 37, 16, 104, -108, -39, 81, -68, -70, -50, 103, 21, -70, 2, 98, 10, 65, -50, 94, -63, 25, 42, -61, -28, -50, -62, -20, -20, 88, 52, -63, -14, -33, -21, -72, 38, 4, 118, 64, 62, -124, -10, 112, -39, 80, 70, 88, 119, -28, 64, -115, 102, 77, 54, -51, -59, -127, 46, 69, -101, -67, -65, 38, 68, 108, 38, 107, 93, -17, -124, -21, 33, -81, 102, 30, 79, -2, 32, -56, -54, 86, -32, -84, -83, -21, 109, -83, 49, 8, 1, 63, 75, 35, -2, -75, 36, 124, -87, 35, -104, 51, -73, 58, -6, 75, 41, -19, -52, 95, -61, 70, 92, -115, 83, -121, -39, 4, -113, 107, -44, 1, 19, 115, 106, 32, -80, 90, -36, 102, 5, -46, 39, -41, -109, -39, 2, -19, 58, 82, 22, 121, -49, -102, 19, 124, 61, -119, 45, -37, -96, 59, 42, 52, -26, -50, 62, 52, 113, 124, -9, -6, 23, -108, -94, -51, -125, 119, 103, -100, -35, 68, 77, -32, 120, 123, 22, -1, 41, 28, -116, 125, 15, 9, -9, -62, 7, 106, -80, -44};
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
    msg.setTimeStamp(0.103816330655);
    msg.setSource(43805U);
    msg.setSourceEntity(94U);
    msg.setDestination(26625U);
    msg.setDestinationEntity(35U);
    msg.seq = 49686U;
    msg.sys_dst.assign("UTSDDDREMAFNQVIXHLWDNJRLPYHTKQCZRQOPWKSAENMTGKIMQARNGMRPSTDQCEXIQLEULYVACCLYUETWRIYTDZZVDLPWDXUIKCPYLOWEMJJQBWFXHZCMCUSIGJFRKBLWYNBMKJBJXUPAJZFMIZIOYHRSUOVDIGNYAKJZNPVCBLGKXPNBFMSEHXMUTABTOYOFKQSYOATUVGVQROWHDZPBWZJOVNXKFOFUCEAGGISBVQVHHST");
    msg.flags = 139U;
    const char tmp_msg_0[] = {-110, -92, -87, 62, 76, -127, -101, -48, 98, -71, 12, 49, -94, 58, 45, 114, -65, -93, 8, -124, -119, 17, -78, 13, -117, -69, -74, -107, 46, -105, 25, 71, -14, -37, 85, 91, -65, -64, -127, 26, 37, -122, 75, 16, 108, -1, -34, 122, -63, -87, -79, 97, -14, 43, 107, 36, 57, -47, -89, -95, -34, 42, 22, 55, -10, 100, 101, 37, 86, -37, -101, 65, 87, -128, -22, -40, -31, 90, 57, 39, 3, -63, -127, 7, -73, 109, 19, 71, 110, -18, -9, -110, -68, -102, 57, -126, 28, 2, 36, 100, -112, -9, 118, 30, -28, -104, -6, -57, 99, 63, -22, -26, 63, -16, 126, -1, 117, -43, 90, -18, -19, 20, -57, -116, -55, -93, -63, -67, 81, -32, -100, 38, 40, -125, -92};
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
    msg.setTimeStamp(0.347934295608);
    msg.setSource(16076U);
    msg.setSourceEntity(6U);
    msg.setDestination(45940U);
    msg.setDestinationEntity(143U);
    msg.sys_src.assign("DTVWOHUBKKQQKUHFLNPOIXFLHZDJIQXDMBFHIKFJZYDBSWTTIYLDSSPRWREVFLXYYMHVCEFCUAOWGJOVZMPRKCASGTAUNZYNPMIMONPGWTNGLCXRMSKPZOYBUEURJRVFQOKGJAWDXTSBCZZZOGIVMYJZUYVCWBWEKVLPTECQDBXCSPJWWXKLYSMGJEGJETJRN");
    msg.sys_dst.assign("WGMGBSHBUREPIDUJTJTOHYKWRHKGWNDCWJUORVKRLNVGZPILEDXSXGIRXKARNWVBAAMTXWTFPVZFYTXYVQTMENUTPKJRAUBIYOLUSMBJUKPQDPQHZAFCCGJSNEAESRQQFODGGHNBCFEIMAEBFHLWMST");
    msg.flags = 89U;
    const char tmp_msg_0[] = {57, 28, 24, -86, 97, 96, -4, 14, -105, -64, 85, -97, -103, 84, -123, 125, 102, 75, -96, -73, 95, -9, -52, -5, -12, 72, -91, 49, 70, 78, -4, 118, -30, -73, 9, 71, 119, -114, -7, 82, 121, 31, -27, 11, 96, 123, 103, 88, -97, -55};
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
    msg.setTimeStamp(0.685335814632);
    msg.setSource(58954U);
    msg.setSourceEntity(144U);
    msg.setDestination(58587U);
    msg.setDestinationEntity(183U);
    msg.sys_src.assign("RRCYPEQNBCJJUTGBUAQRFSHDOUEMLIMCLNERKGWRXMLXJALKNTOCOWQRPSDMUEQUNFXVQZMNUGODTOFVWYXHSFLYIKCQHRJSBHZKRUJSGVYYTZCHVZXOQWHVDOSKXYMZZPAZDFWCYAWOSUKCTAQPXDMIFGVSAUFTBBCHMGOTVMIY");
    msg.sys_dst.assign("QZRJTGYARKXCSVPBCMQCDEISEYKOOBDZEPUKAFBNGWCKRQPHTGIJJUBQCZHMBKNNIPTOFHYVAVZLGCORNPGAVSXIGJLVXBESAXHJOTDYEUITLOCEHFFZYWLTROWTHQJGXQZWYALWJNVXIDXJWFHMUXYZKPVPNUBMPLDULTESMSSISEEHQLYGKMKCUWFQOHKARSCKXRRDQZABMDZNIFCPRNBLNMODYWINUDLZWGPHVWMAJFMQUYBRXEOTSV");
    msg.flags = 188U;
    const char tmp_msg_0[] = {-59, 126, -12, -73, -85, -77, 25, 118, -55, 75, 48, -45, 81, -61, 35, -57, -19, 75, -54, 35, 74, 41, 73, -27, -24, -80, 55, 108, 111, -61, -119, 66, -96, -63, -34, 11, -3, 66, -40, 118, -38, 58, 106, -38, 68, 33, -67, -59, -58, -3, 45, 19, -103, -15, 42, 9, -22, 70, 29, -61, 41, -42, -8, 71, 15, 109, 54, -108, 36, -80, -57, 101, -94, 17, 30, 12, 88, 15, -125, -18, 2, -43, -105, -49, 59, 18, 124, 75, -123, 86};
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
    msg.setTimeStamp(0.855042487889);
    msg.setSource(29381U);
    msg.setSourceEntity(103U);
    msg.setDestination(8114U);
    msg.setDestinationEntity(105U);
    msg.sys_src.assign("RUJRZWFFABUGHCKVKPSFF");
    msg.sys_dst.assign("ODVOVZHVDBZIVHZJHFSWOUOKQPMFHCXRQRNZLFEBNILUIZRFCPYMCUSGJUXPWIJVGSOLYXAWBEBCWQMWGJMUGRWSHMDNVTBYXQJIXCZTMOLWJBVFPHETNVJIKMSEMPSFAYDFNNWDYXCXZRYYPIOAIGOIVQGKBZLGTKRBPEX");
    msg.flags = 38U;
    const char tmp_msg_0[] = {-38, 72, 104, 35, 84, -58, -57, 52, -5, 20, -101, 49, -89, 77, 48, -91, 68, -70, 85, -63, 5, -120, -102, 118, -77, 0, 45, 110, 51, 43, 30, -126, -7, 123, -91, 9, 78, -87, -70, -9, 98, 111, -40, -61, 10, -60, -14, -63, 68, -55, -51, 0, -13, 77, -100, -80, -78, -26, -84, 1, 7, 97, 8, 27, 112, -89, 66, 25, -96, 73, -80, -125, 39, -89, -34, 48, -67, 58, -109, 6, -56, 60, 17, -38, 83, 35, 35, -119, -84, -55, -42, -37, -105, 68, -85, 80};
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
    msg.setTimeStamp(0.0611612857575);
    msg.setSource(58569U);
    msg.setSourceEntity(17U);
    msg.setDestination(39307U);
    msg.setDestinationEntity(207U);
    msg.seq = 41957U;
    msg.value = 250U;
    msg.error.assign("VWHYMZTEIBTNCTRKECCNFQWQOPDGGKMTJEQZFEVZLPJMKVGARFFZFHNPQBHYVESIBZJHUNLTGBWUMWHOPPGZZYSMDEYDLHRTRPXITCNECTJVAIYBBSASKWVQJJKMYOLVFRVDNDILARCJAQICDWMOWNVMHUWULZFSGHXSIIWCKLUULANDRKEJWUAXAPXFQRSDOUYLKEGBGPOOUZQVDTKXYMHBGLYOXBKNSXBAPDZXXJIGQUCSJ");

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
    msg.setTimeStamp(0.164603256465);
    msg.setSource(3526U);
    msg.setSourceEntity(216U);
    msg.setDestination(44472U);
    msg.setDestinationEntity(218U);
    msg.seq = 41662U;
    msg.value = 195U;
    msg.error.assign("TDFBXIRFSSUVXSVZUGTAJKSPAMQJUXPHKVHXBQTYEHECFHRHGEIRTNMDPAPKPBPEEQLSWQFMGMUDPBTSVA");

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
    msg.setTimeStamp(0.426624986273);
    msg.setSource(20593U);
    msg.setSourceEntity(206U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(150U);
    msg.seq = 30843U;
    msg.value = 206U;
    msg.error.assign("LKBJWOZPSYICBGUOWNOMCAKEFAFNEQLIAWULSCHWL");

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
    msg.setTimeStamp(0.498630545376);
    msg.setSource(59086U);
    msg.setSourceEntity(132U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(209U);
    msg.seq = 11356U;
    msg.sys.assign("LJPVXLSDGLIANXOYTQPKCQWSNLIVACUSROKVOTQSGDCVNYZJXEZPBVGJDHBRXEHAJRUMHCKEDJMOXMAHPEDUQKALWSUGLFCZUOQCMQMBGNAIRTAKBJJNCIVZWMDPXLQPWNWRBEOEKRTYVQVFIJYAFFBRZPFPXSVMMZRYZ");
    msg.value = 0.708328050032;

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
    msg.setTimeStamp(0.207750119443);
    msg.setSource(8643U);
    msg.setSourceEntity(182U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(206U);
    msg.seq = 25246U;
    msg.sys.assign("HQTZHAULBGGCLDMFHJJBXDIKTWNUAKPLHZTSTDCODRAJMMEXGEPBIAJQMRIBOVMJLRYKWKUJOBALFSFKZRXEASAEQSWEHLKVEVDCZFRITPHQIPYHFVNFCNFQNDULSZOYBYXVCDOXUBKRZNLWZP");
    msg.value = 0.0965964337816;

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
    msg.setTimeStamp(0.491522903923);
    msg.setSource(51020U);
    msg.setSourceEntity(27U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(6U);
    msg.seq = 30151U;
    msg.sys.assign("TOBGVYNSHLSKRPKIQRKZZJTVQKURGAAZD");
    msg.value = 0.848974896153;

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
    msg.setTimeStamp(0.673924871019);
    msg.setSource(6605U);
    msg.setSourceEntity(9U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.280710572964);
    msg.setSource(37147U);
    msg.setSourceEntity(32U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.4332031198);
    msg.setSource(29456U);
    msg.setSourceEntity(83U);
    msg.setDestination(56198U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.885193311044);
    msg.setSource(35075U);
    msg.setSourceEntity(97U);
    msg.setDestination(7290U);
    msg.setDestinationEntity(18U);
    msg.action = 244U;
    msg.longain = 0.900236590749;
    msg.latgain = 0.180147030217;
    msg.bondthick = 3316470588U;
    msg.leadgain = 0.652225615963;
    msg.deconflgain = 0.401980518337;

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
    msg.setTimeStamp(0.455495588409);
    msg.setSource(63340U);
    msg.setSourceEntity(79U);
    msg.setDestination(9545U);
    msg.setDestinationEntity(135U);
    msg.action = 249U;
    msg.longain = 0.231746235713;
    msg.latgain = 0.569856275054;
    msg.bondthick = 3630792648U;
    msg.leadgain = 0.394361320434;
    msg.deconflgain = 0.169810940516;

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
    msg.setTimeStamp(0.313047823997);
    msg.setSource(15876U);
    msg.setSourceEntity(87U);
    msg.setDestination(45727U);
    msg.setDestinationEntity(54U);
    msg.action = 98U;
    msg.longain = 0.301730248526;
    msg.latgain = 0.458350269016;
    msg.bondthick = 4190288235U;
    msg.leadgain = 0.822272732058;
    msg.deconflgain = 0.442779753113;

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
    msg.setTimeStamp(0.358494531312);
    msg.setSource(56731U);
    msg.setSourceEntity(217U);
    msg.setDestination(33678U);
    msg.setDestinationEntity(130U);
    msg.err_mean = 0.0175635629054;
    msg.dist_min_abs = 0.686231634443;
    msg.dist_min_mean = 0.947051485303;

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
    msg.setTimeStamp(0.9273375062);
    msg.setSource(7680U);
    msg.setSourceEntity(14U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(18U);
    msg.err_mean = 0.911743818911;
    msg.dist_min_abs = 0.154970576254;
    msg.dist_min_mean = 0.732431914214;

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
    msg.setTimeStamp(0.0322490609237);
    msg.setSource(6750U);
    msg.setSourceEntity(211U);
    msg.setDestination(19793U);
    msg.setDestinationEntity(85U);
    msg.err_mean = 0.439460718089;
    msg.dist_min_abs = 0.572646880553;
    msg.dist_min_mean = 0.280396960699;

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
    msg.setTimeStamp(0.465430864469);
    msg.setSource(14354U);
    msg.setSourceEntity(179U);
    msg.setDestination(20363U);
    msg.setDestinationEntity(231U);
    msg.uid = 209U;
    msg.frag_number = 4U;
    msg.num_frags = 120U;
    const char tmp_msg_0[] = {86, 40, -54, -56, -64, 11, 106, -108, -40, -110, -61, 7, 82, 18, 55, -127, 74, 25, -91, 51, -22, 20, -90, 120, -2, 34, 124, 107, 16, -49, 42, 123, 100, -14, 61, 114, 95, -90, 14, -4, 52, 24, 61, -47, 72, 31, 105, -125, 17, -71, 15, -43, -27, -61, -87, -14, 73, -73, 34, 39, 122, 29, 23, -87, 84, -97, -54, -70, -13, -37, 99, 96, 112, -16, 5, 74, 24, 107, -40, -50, -7, 119, -105, 1, -83, 39, 88, 53, -6, -104, 64, -112, -41, -55, 104, -21, -43, -18, 57, -69, -42, -64, 48, 70, -23, -36, -55, 113, -7, -69, -118, -111, -68, -115, 3, 27, -76, -38, -58, 12, 31};
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
    msg.setTimeStamp(0.904317527121);
    msg.setSource(34489U);
    msg.setSourceEntity(25U);
    msg.setDestination(11793U);
    msg.setDestinationEntity(208U);
    msg.uid = 54U;
    msg.frag_number = 203U;
    msg.num_frags = 138U;
    const char tmp_msg_0[] = {6, -55, -124, -14, 90, -22, 71, 122, -14, -86, -53, -78, 56, 4, -116, 74, 92, 114, -49, 80, -86, 110, -87, 40, -100, -127, -79, -127, -67, -122, -15, -99, 72, 26, 81, -26, 4, 84, -82, 101, -8, -75, -36, 6, 87, 63, 58, -111, 14, -116, -67, -37, 33, -36, -80, 105, -72, 100, 109, -117, 8, 44, -27, 21, -38, 36, -48, -50, -110, 77, 44, -61, -108, -31, -41, 93, -82, -29, -117, 79, 7, -82, 48, 113, -97, -32, -83, 31, -103, 64, -98, -106, -113, 40, -93, 59, -87, -2, 105, 97, 111, 107, 34, -107, -104, 27, 13, 115, -61, -9, 121, -120, -119, 31, -128, 124, -70, -28, -93, -127, 61, 25, -70, 38, 78, -40, -28, 24, 76, -113, 7, -19, 92, 32, 26, -91, 1, -53, 77, 14, -122, 68, 72, -66, 109, -77, -11, -75, -51, -3, 27, -6, -52, -38, 112, 77, -100, -19, -43, -2, -111, 42, 38, 67, -103, -122, -77, 7, -88, 8, -120, -1, 23, -52, 12, 88, -94};
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
    msg.setTimeStamp(0.144894032391);
    msg.setSource(40524U);
    msg.setSourceEntity(188U);
    msg.setDestination(44885U);
    msg.setDestinationEntity(228U);
    msg.uid = 76U;
    msg.frag_number = 57U;
    msg.num_frags = 245U;
    const char tmp_msg_0[] = {47, 23, -64, -74, -94, 13, -43, -117, 64, 120, 43, -115, -44, -86, -87, 83, 84, -79, 93, -128, 43, 118, -30, -54, -60, 31, 10, -119, -123, -55, -36, 15, 91, 59, 19, 92, 42, 116, 124, -98, 42, -117, -117, 33, -17, 32, -51, 29, -110, 13, -51, -11, -13, 40, -8, 52, 66, -58, -64, -67, -100, -114, 105, 91, 79, -44, 37, -8, 59, -127, 107, -93, -58, -80, -119, 69, -30, -92, -63, -2, -21, 110, -12, -111, -111, 111, -103, 103, -7, 65, -85, 95, -68, 79, 20, 62, -100, 105, 5, -119, 125, 26, 34, 116, 79, 76, 4, -93, -71, 68, 112, 101, 113, -20, -42, -102, 60, 40, 51, -86, 14, 44, -98, -89, 79, 19, 106, 94, 42, 38, 115, -42, 17, 12, -76, -98, -67, -99, 91, -22, -49, 89, 120, -77, 104, -3};
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
    msg.setTimeStamp(0.419042309624);
    msg.setSource(15807U);
    msg.setSourceEntity(2U);
    msg.setDestination(11927U);
    msg.setDestinationEntity(65U);
    msg.content_type.assign("BDYBZSICCWVULPRIPCBWSAHTWHQPLLFPUKOKIGVEUJOZMZECKPKHLZNLPJENJCXNDONYRTBFSQWZUSAFOMJNSQGMDUKMROQGMUPNFXYARLKLWTKRGOUUWDRMRYDSJHOAEXTHVZTJQS");
    const char tmp_msg_0[] = {64, 39, -1, 62, -57, 80, -3, 28, 114, -98, -102, -92, -45, -74, 104, 68, 64, -98, -60, 102, -26, 116, 24, 111, 107, 33, 4, -4, 26, -46, -55, 8, 53, -57, 122, 60, -63};
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
    msg.setTimeStamp(0.597544714848);
    msg.setSource(19378U);
    msg.setSourceEntity(91U);
    msg.setDestination(53535U);
    msg.setDestinationEntity(167U);
    msg.content_type.assign("WIUGGCRTWNQTKQHHCQBTHPFFGWYMCHDWEVNNKLBTAPJCOOWPWXADDODDZUFAXRYXJEHIPVZVRHIOKOETOAGRZFUSRKBABTEGFQIJGLEPHBTCQKIPMNKMYVNMISAVPYGVUFORZIEKJFKUVLCIYTSNOUCLDBQMUYEZNMSVLEWP");
    const char tmp_msg_0[] = {5, 87, -118, -95, 67, -41, -106, -90, 83, -117, 4, -123, -44, -35, -29, -22, 1, 26, 51, 107, 17, 105, 105, -127, 104, 43, 1, 35, -125, 84, -101, 115, -93, 108, 49, 84, 6, 77, 126, 66, -80, -128, -65, 62, -57, 104, -105, -85, 89, 95, -121, -3, -5, 27, -99, -21, -12, -84, -86, -4, 58, 101, 55, 32, 29, -55, 105, -4, -23, -72, 33, -55, -104, -94, 59, 9, -24, 83, 84, -35, -78, -64, 28, -44, -117, 10, -40, -112, 72, 54, -27, 30, 99, 16, 67, -121, -8, -31, 54, -110, 54, 83, 18, -37, -21, 50, -63, 32, 5, -82, -111, 124, -106, 38, -25, -126, 42, 114, -47, -2, 49, 119, 62, 34, 21, -74, 93, -70, -36, -32, 88, 37, -81, 54, 94, -35, 3, -111, 120, 84, 24, -122, 79, -102, -72, -27, 35, 23, -51, -46, 44, 59, 5, -127, -38, -5, -125, -60, 1, 97, 68, 14, -44, 9, -1, 33, 86, -14, 15, -95, 126, -118, 13, 99, 37, 11, -83, 72, -81, 118, -91, -99, -2, -14, 124, 90, 3, -97, -11, -113, -91, -23, 27, -11, 97, -99, 49, 4, -123, 11, 35, 14, 100, -97, -68, 49, 64, 90, -71, 114, 77, -112, -54, 106, -89, 32, -119, 65, 104, -60, -44, -70};
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
    msg.setTimeStamp(0.429655580758);
    msg.setSource(64910U);
    msg.setSourceEntity(219U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("GHTEZDIDTPNHTIGSERJWHUKUZHNBFPFJAAVDWTM");
    const char tmp_msg_0[] = {-76, 120, 5, -111, 70, -58, -68, -89, -111, 8, 6, -46, 45, -115, -127, -64, -17, -6, 85, 115, -68, -91, -100, 5, -47, 80, -97, 68, -66, 125, -46, -63, 57, 79, -26, 21, 96, 99, -112, 20, -94, -64, 3, 108, 97, -123, -55, 43, 76, -69, -113, 42, 78, 47, 61, -101, -67, 73, -123, 96, 57, -44, 48, -2, -61, 13, -81, 101, 7, -65, -77, -26, 65, 22, 69, 35, 123, 71, -67, 3, -106, -91, 115, -72, 13, -59, 37, 71, 73, -121, 12, 71, -84, -107, 51, -97, 15, -62, -51, -53, -1, 35, 21, 111, 64, 56, -45, 88, 42, -98, -108, -63, -86, -67, -46, -47, 56, 6, 55, 69, 95, 112, -121, -32, 6, -67, 112, 89, 111, 101, -7, 24, -28, -107, 68, 19, -68, 54, 14, 76, -24, -20, 52, -89, -71, 46, -96, 119, -47, 124, 123, -128, 2, -122, 51, -112, -68, -72, -72, -15, -50, 101, 60, 46, 8, -127, -69, -116, -30, -46, -36, -50, -83, 40, -55, -99, -95, -106, 69, -75, -34, -9, 88, -18, 34, 6, -115, 19, -77, 4, -121, -18};
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

  return test.getReturnValue();
}
