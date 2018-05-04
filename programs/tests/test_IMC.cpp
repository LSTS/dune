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
// IMC XML MD5: a6ed4536c13d4a21e8e09bc8ef4da807                            *
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
    msg.setTimeStamp(0.607382306628);
    msg.setSource(7707U);
    msg.setSourceEntity(30U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(114U);
    msg.state = 113U;
    msg.flags = 206U;
    msg.description.assign("ULNSNTAJCGOEWMUIKIYXONMBNPISHDDELXZCQFXGRGHNNVFUEKOMYPCYHATGBUBTBSDFHLQKXRBIMFZYGIZYDMQAGVDLASXORHYEDGPIKZSZYIZVBC");

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
    msg.setTimeStamp(0.00152190394368);
    msg.setSource(556U);
    msg.setSourceEntity(46U);
    msg.setDestination(41900U);
    msg.setDestinationEntity(125U);
    msg.state = 223U;
    msg.flags = 185U;
    msg.description.assign("VSAGKMRHXHWYQAGWZQIISWAQIOTNPMFZDNVAQFPSNIOCSKGUPLSFTDMEDXLOHPYJSDBWTBTKUPIFCCMAQQBLCWCHZOXQYJSHEVRHEPXNKEFUGGGPTAQDDDYNXXTZJSVFBRUXTUOYYLNRJHUNNTOEHIDUGJMC");

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
    msg.setTimeStamp(0.451647489735);
    msg.setSource(9426U);
    msg.setSourceEntity(231U);
    msg.setDestination(3504U);
    msg.setDestinationEntity(118U);
    msg.state = 251U;
    msg.flags = 131U;
    msg.description.assign("ZSPMTRSEUSRCIQWAJLFGQERIHDBVNLUWGWSKOMGMILPLTRBZRPNFBOKZSCGEYZLIXHFPYZLOIEMIJZAYTWPZAJVFCZKFXQQHBDJQWQXARYUKVUEDBAWDRKDCNNVVXFYQTNPTKTEMPUIJTECKSAOEHWGBXVUFMOVWWGGLELJDTYNCPHIOCRWXXGJYUOVRCYGYAJKDUSSXMHKFXUNDDSXOHADISUBJMCLQHNAOLRGVMFEFZ");

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
    msg.setTimeStamp(0.410673379463);
    msg.setSource(23528U);
    msg.setSourceEntity(237U);
    msg.setDestination(8871U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.57509760039);
    msg.setSource(8294U);
    msg.setSourceEntity(32U);
    msg.setDestination(25779U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.522845646406);
    msg.setSource(26717U);
    msg.setSourceEntity(137U);
    msg.setDestination(29282U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.563376091255);
    msg.setSource(23792U);
    msg.setSourceEntity(203U);
    msg.setDestination(63963U);
    msg.setDestinationEntity(244U);
    msg.id = 136U;
    msg.label.assign("QTUACTZFUCMTBVLGCZOMSLLCUWZQWTVKQJRITFANBMWDDTSGIZKZEOKGBVHERMRGZPSFWRNHZCHAJJMXHGVIUFAMRYHJVXELHWJFDH");
    msg.component.assign("AITBUOPBJPLMCRYOUNFFXZTPLIGCABDXAESPOKYVHJDYRGKXVAXQCKSVNSADZFVZODMFEHJMM");
    msg.act_time = 6425U;
    msg.deact_time = 38106U;

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
    msg.setTimeStamp(0.190122184463);
    msg.setSource(50400U);
    msg.setSourceEntity(158U);
    msg.setDestination(15656U);
    msg.setDestinationEntity(196U);
    msg.id = 136U;
    msg.label.assign("UZZYNXWXKSCQVGQPFWOBKFEKUIBVEBTDPOSTOIQIYDCCCTOEEXLM");
    msg.component.assign("FIZCVLSUXWYEVUEUZJNCFT");
    msg.act_time = 25114U;
    msg.deact_time = 53709U;

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
    msg.setTimeStamp(0.257319111004);
    msg.setSource(28235U);
    msg.setSourceEntity(139U);
    msg.setDestination(33039U);
    msg.setDestinationEntity(189U);
    msg.id = 56U;
    msg.label.assign("FITVFCMZBQNPBNCOOXGJTXDGMODUEHBRQTEUBFRSZGWSJFCVKHXWCTIQXAKYIUYEKALPDTXPDKNERFVWATWNMXRMUHMZAGLYNCOFDASQCCLLGQRWJSQVRKEKXNRAYUTPQTODVWFRBZDYAALOWHQNUEPBUBLSMZPGYMRHTDUIJKTICVVEIYSZYGSWBGVEJNKGASXPHQFEXZMLXPVHI");
    msg.component.assign("BLKCQNAPFBGOTKJPXUDUYPEOPVBDEEMNGVQMEFISCOUNZYQGYMAHDABUVSZSWYRGAXFCPJGEWOOMXRZECN");
    msg.act_time = 9575U;
    msg.deact_time = 21321U;

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
    msg.setTimeStamp(0.410556647521);
    msg.setSource(35068U);
    msg.setSourceEntity(145U);
    msg.setDestination(50220U);
    msg.setDestinationEntity(144U);
    msg.id = 50U;

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
    msg.setTimeStamp(0.203397512992);
    msg.setSource(606U);
    msg.setSourceEntity(175U);
    msg.setDestination(26207U);
    msg.setDestinationEntity(151U);
    msg.id = 203U;

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
    msg.setTimeStamp(0.594524197459);
    msg.setSource(46132U);
    msg.setSourceEntity(9U);
    msg.setDestination(35192U);
    msg.setDestinationEntity(173U);
    msg.id = 65U;

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
    msg.setTimeStamp(0.398343416904);
    msg.setSource(10541U);
    msg.setSourceEntity(56U);
    msg.setDestination(1181U);
    msg.setDestinationEntity(236U);
    msg.op = 86U;
    msg.list.assign("WPBSMJHBUEWMJZLDC");

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
    msg.setTimeStamp(0.703264820794);
    msg.setSource(7539U);
    msg.setSourceEntity(83U);
    msg.setDestination(62670U);
    msg.setDestinationEntity(30U);
    msg.op = 118U;
    msg.list.assign("SIZHBSQGCNCLJPMGSWUQTXHGXRKFUDMENLUJMBRRTKBZZWIQOFNSHYELOYIDPSHEZPWJCWDGSMPXAFDLMNFHAXZKAQCIKVNRCTVCKZMJYZOTACWQWBYHSWMVTGSGGXIISFZQDAQKVRFPQPHYEQFUEWLHRTRFRETDYYZOVDLMOYGOJFVGRTPZNXSVPJNBEBLIJIJULDUKRKABMUWFHKJUXXECBBOAIJYNUOYOXDCBGENVI");

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
    msg.setTimeStamp(0.789455014127);
    msg.setSource(41133U);
    msg.setSourceEntity(239U);
    msg.setDestination(48233U);
    msg.setDestinationEntity(5U);
    msg.op = 61U;
    msg.list.assign("LHXTRADBAPKRFJAISMNZTCTTDUCTUBMVKUZFLEQBZHYKHBZPSMNATNRNJLWXGRWDRQNFAIOHWQYVVVNBVIPUJALHPKUBWCYOGIWQSDMXKJZZUIKCLYLXSJJLEYXEDLERMTQVGIVPOTMNLCBTINHEXOOQFFSEGIYDWBRSADDFGEKHRZFYOVWDIEPIJKWQVMECPUBXFMFENOY");

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
    msg.setTimeStamp(0.382558136949);
    msg.setSource(34487U);
    msg.setSourceEntity(134U);
    msg.setDestination(62622U);
    msg.setDestinationEntity(81U);
    msg.value = 88U;

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
    msg.setTimeStamp(0.670710927823);
    msg.setSource(62859U);
    msg.setSourceEntity(238U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(211U);
    msg.value = 172U;

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
    msg.setTimeStamp(0.453597719394);
    msg.setSource(16075U);
    msg.setSourceEntity(210U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(185U);
    msg.value = 55U;

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
    msg.setTimeStamp(0.788945742858);
    msg.setSource(26087U);
    msg.setSourceEntity(24U);
    msg.setDestination(49934U);
    msg.setDestinationEntity(211U);
    msg.consumer.assign("WTGXPYSWJZBVIKEEDEOYFKDRMP");
    msg.message_id = 1071U;

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
    msg.setTimeStamp(0.993723621902);
    msg.setSource(52319U);
    msg.setSourceEntity(182U);
    msg.setDestination(49680U);
    msg.setDestinationEntity(126U);
    msg.consumer.assign("EZVYTINSFBCDADOBCYTSKTQJLINHLQIVUADQFXTSFARQABEMPWSLKHXZDKTJNKWHFBEGLQCJMAMNQOSWMQUSFEQKXAPRFAXNERMWRRVUFBMGCWRETVPZUVWYADOURENEJZHCJPGGLCVYJOWXCHBBQNKZULXOTKREYNWXIEHLLPJHTDJGGPHIKYSOZDGPQZUMUNOUSLZGIBVIVDFOCDYANIOVYPXLHCXMKVUM");
    msg.message_id = 19179U;

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
    msg.setTimeStamp(0.45506062933);
    msg.setSource(29251U);
    msg.setSourceEntity(180U);
    msg.setDestination(14054U);
    msg.setDestinationEntity(75U);
    msg.consumer.assign("TNISTEKDIDRBVTNOAVLAAGVUGTZBUBJFEHEVOPKYCMMRMMGKZBXLPMRZEY");
    msg.message_id = 22187U;

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
    msg.setTimeStamp(0.841411514183);
    msg.setSource(8263U);
    msg.setSourceEntity(46U);
    msg.setDestination(45019U);
    msg.setDestinationEntity(167U);
    msg.type = 125U;

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
    msg.setTimeStamp(0.127472642301);
    msg.setSource(27902U);
    msg.setSourceEntity(189U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(11U);
    msg.type = 202U;

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
    msg.setTimeStamp(0.699023085886);
    msg.setSource(48098U);
    msg.setSourceEntity(143U);
    msg.setDestination(58507U);
    msg.setDestinationEntity(184U);
    msg.type = 109U;

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
    msg.setTimeStamp(0.785878277608);
    msg.setSource(14230U);
    msg.setSourceEntity(44U);
    msg.setDestination(5393U);
    msg.setDestinationEntity(230U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.420571709064);
    msg.setSource(49421U);
    msg.setSourceEntity(68U);
    msg.setDestination(9862U);
    msg.setDestinationEntity(125U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.390641386897);
    msg.setSource(31019U);
    msg.setSourceEntity(195U);
    msg.setDestination(7085U);
    msg.setDestinationEntity(140U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.808742243784);
    msg.setSource(45230U);
    msg.setSourceEntity(134U);
    msg.setDestination(32452U);
    msg.setDestinationEntity(161U);
    msg.total_steps = 174U;
    msg.step_number = 1U;
    msg.step.assign("VGJUSIMMRPXTPAGHMJEGWFBSKEKROVEYESMAPCXHKASXBYYDTWDRLLHMTDBEAYZDNNFAFINUYOZZBLMJHPIONGQLHNMVBNBLFQFULWJNECOQDJPKQICMSAZGEQHPKDJROCSFWWSRXOCSZRVPQIIVPQCTCNDRUWJHNUDQNMAIRVKACBWOAIZCJZCDBGFLTODWGFWYZKZFVTW");
    msg.flags = 145U;

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
    msg.setTimeStamp(0.451455020809);
    msg.setSource(43502U);
    msg.setSourceEntity(126U);
    msg.setDestination(30729U);
    msg.setDestinationEntity(120U);
    msg.total_steps = 222U;
    msg.step_number = 134U;
    msg.step.assign("CEJSAAXBZMLDDTRAWYAEBYUWLLRDECDMPHBOPHXAFHWRRJBFLCIEPXJUICIWPUIGGKYCXHQWCIAUGKFTZAAHSFBBAULGOKFYMSUDSXDBLJSBEKBRMNYGTCDMQRLHXIVUXKOYQIDVMPJJHQRZKZMLPTVIWNVVYCORUSJNEMQAWKQEYJNVKODIHOZXYWTLYMFUPEWWVRQZFSNOZKNGVOVSZOJRG");
    msg.flags = 42U;

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
    msg.setTimeStamp(0.810220267911);
    msg.setSource(16546U);
    msg.setSourceEntity(117U);
    msg.setDestination(8320U);
    msg.setDestinationEntity(159U);
    msg.total_steps = 185U;
    msg.step_number = 177U;
    msg.step.assign("DTGYJJNGCUJXHGDTBKKLTZIMJXXCHFNYYZFLXHFAVCNQRXUTMATKGEUQQMOFTIVZPIV");
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
    msg.setTimeStamp(0.592804851556);
    msg.setSource(36033U);
    msg.setSourceEntity(239U);
    msg.setDestination(27141U);
    msg.setDestinationEntity(12U);
    msg.state = 57U;
    msg.error.assign("VWGXZNQKZEYJIGUSUHEATYPBOYOPXFZQYLPLTHAVLTIQIDRTINP");

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
    msg.setTimeStamp(0.842058157739);
    msg.setSource(47518U);
    msg.setSourceEntity(139U);
    msg.setDestination(10848U);
    msg.setDestinationEntity(79U);
    msg.state = 2U;
    msg.error.assign("PLXIFSVRUQOZQJDSFZICJYYAYXOCGJDQZMAFJHBBVLIZTRNSRVKNBIXXKMJRFVJKTHVZMOUDRTSPMHOXSFJNKQCYEEMHUQEETTKWDVHBNCOBZWCKKKWUYALRWAIZOMZLUDMNETGUIUNCYMA");

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
    msg.setTimeStamp(0.158330515136);
    msg.setSource(27940U);
    msg.setSourceEntity(49U);
    msg.setDestination(14183U);
    msg.setDestinationEntity(237U);
    msg.state = 115U;
    msg.error.assign("KPPZHOVHEVXPVIU");

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
    msg.setTimeStamp(0.861456437955);
    msg.setSource(8346U);
    msg.setSourceEntity(53U);
    msg.setDestination(44552U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.190476145541);
    msg.setSource(53973U);
    msg.setSourceEntity(140U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.361513946741);
    msg.setSource(54777U);
    msg.setSourceEntity(44U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.453375429827);
    msg.setSource(40367U);
    msg.setSourceEntity(13U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(67U);
    msg.op = 69U;
    msg.speed_min = 0.89907448048;
    msg.speed_max = 0.471887608816;
    msg.long_accel = 0.518494907523;
    msg.alt_max_msl = 0.696250588515;
    msg.dive_fraction_max = 0.667702694805;
    msg.climb_fraction_max = 0.805106565759;
    msg.bank_max = 0.85375206516;
    msg.p_max = 0.223039600008;
    msg.pitch_min = 0.707054677931;
    msg.pitch_max = 0.400721203313;
    msg.q_max = 0.287369016292;
    msg.g_min = 0.0102379605071;
    msg.g_max = 0.436671443527;
    msg.g_lat_max = 0.719814471627;
    msg.rpm_min = 0.715142570056;
    msg.rpm_max = 0.19001558226;
    msg.rpm_rate_max = 0.0573518648159;

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
    msg.setTimeStamp(0.822945034294);
    msg.setSource(58050U);
    msg.setSourceEntity(244U);
    msg.setDestination(41540U);
    msg.setDestinationEntity(144U);
    msg.op = 51U;
    msg.speed_min = 0.0424105093234;
    msg.speed_max = 0.509880711408;
    msg.long_accel = 0.197113860659;
    msg.alt_max_msl = 0.848646437029;
    msg.dive_fraction_max = 0.24179454505;
    msg.climb_fraction_max = 0.954070260354;
    msg.bank_max = 0.953573146797;
    msg.p_max = 0.636010776256;
    msg.pitch_min = 0.955469401105;
    msg.pitch_max = 0.146562338027;
    msg.q_max = 0.247619321119;
    msg.g_min = 0.969899415415;
    msg.g_max = 0.95094024852;
    msg.g_lat_max = 0.367071141556;
    msg.rpm_min = 0.151240404108;
    msg.rpm_max = 0.415022781011;
    msg.rpm_rate_max = 0.465885094437;

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
    msg.setTimeStamp(0.341416468026);
    msg.setSource(13443U);
    msg.setSourceEntity(42U);
    msg.setDestination(46424U);
    msg.setDestinationEntity(144U);
    msg.op = 146U;
    msg.speed_min = 0.210374592102;
    msg.speed_max = 0.226063146244;
    msg.long_accel = 0.128543168416;
    msg.alt_max_msl = 0.188616563715;
    msg.dive_fraction_max = 0.173860699439;
    msg.climb_fraction_max = 0.255344395863;
    msg.bank_max = 0.599947150011;
    msg.p_max = 0.425176088996;
    msg.pitch_min = 0.773599468125;
    msg.pitch_max = 0.931121209781;
    msg.q_max = 0.208656756611;
    msg.g_min = 0.751656992524;
    msg.g_max = 0.128391869596;
    msg.g_lat_max = 0.660360171253;
    msg.rpm_min = 0.200716195183;
    msg.rpm_max = 0.47623487863;
    msg.rpm_rate_max = 0.241932783742;

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
    msg.setTimeStamp(0.911712706841);
    msg.setSource(44723U);
    msg.setSourceEntity(231U);
    msg.setDestination(62630U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.780259680246);
    msg.setSource(18330U);
    msg.setSourceEntity(201U);
    msg.setDestination(11720U);
    msg.setDestinationEntity(163U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 28344U;
    tmp_msg_0.lat = 0.468105784584;
    tmp_msg_0.lon = 0.545116268287;
    tmp_msg_0.z = 0.898125420202;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.0627938613666;
    tmp_msg_0.speed_units = 119U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.922920535499;
    tmp_tmp_msg_0_0.y = 0.2571375835;
    tmp_tmp_msg_0_0.z = 0.307423715025;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CQGMQPDEYLCROIHTEGMDFTLCAVBKNAJJSKCWUAFBFCUXULCDJPETMKNOAHZPSRCTZDQAZVNYHYUXJYZKNKHYLPVVIVZGTCWMURTOJVAPBMNRHOGJBUYWWCEBSHSLJWSKMHDDLSQOOXTVCINLJOUFLXXZRYMBQNPEGLRIRPXWRIUNBDMTRRMNFIQFUVMLOFJBKDOBGTGSZEZAKSEWOZXIPPAQVWSXENDKXVFFKIHJWYU");
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
    msg.setTimeStamp(0.911334595256);
    msg.setSource(58230U);
    msg.setSourceEntity(168U);
    msg.setDestination(22021U);
    msg.setDestinationEntity(176U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.806337586311;
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
    msg.setTimeStamp(0.69932508209);
    msg.setSource(22817U);
    msg.setSourceEntity(5U);
    msg.setDestination(21512U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.469599899496;
    msg.lon = 0.873997496647;
    msg.height = 0.517222525968;
    msg.x = 0.572256202856;
    msg.y = 0.567616172097;
    msg.z = 0.30850496583;
    msg.phi = 0.089773425334;
    msg.theta = 0.377955279881;
    msg.psi = 0.650551080866;
    msg.u = 0.75510010039;
    msg.v = 0.61116713846;
    msg.w = 0.232387473942;
    msg.p = 0.0257771659607;
    msg.q = 0.46837037384;
    msg.r = 0.862118600195;
    msg.svx = 0.774011013221;
    msg.svy = 0.399240236007;
    msg.svz = 0.602529955854;

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
    msg.setTimeStamp(0.469170261127);
    msg.setSource(41606U);
    msg.setSourceEntity(146U);
    msg.setDestination(13355U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0263172399585;
    msg.lon = 0.663993220037;
    msg.height = 0.394031140566;
    msg.x = 0.218921244003;
    msg.y = 0.204932782069;
    msg.z = 0.213417041574;
    msg.phi = 0.360588747051;
    msg.theta = 0.00947276303331;
    msg.psi = 0.225242532524;
    msg.u = 0.980935299136;
    msg.v = 0.857051374058;
    msg.w = 0.22248295758;
    msg.p = 0.313271700299;
    msg.q = 0.415357411602;
    msg.r = 0.411020559959;
    msg.svx = 0.879625448147;
    msg.svy = 0.259689223713;
    msg.svz = 0.152779277641;

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
    msg.setTimeStamp(0.97260389719);
    msg.setSource(29727U);
    msg.setSourceEntity(144U);
    msg.setDestination(3669U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.636339580771;
    msg.lon = 0.763841968769;
    msg.height = 0.831169746045;
    msg.x = 0.224109578766;
    msg.y = 0.591893448656;
    msg.z = 0.544805479769;
    msg.phi = 0.804476569531;
    msg.theta = 0.715677004818;
    msg.psi = 0.675950617991;
    msg.u = 0.850019260509;
    msg.v = 0.404033913188;
    msg.w = 0.556518877417;
    msg.p = 0.0693234534049;
    msg.q = 0.259490759147;
    msg.r = 0.231523146959;
    msg.svx = 0.667649808468;
    msg.svy = 0.476719799623;
    msg.svz = 0.327189803763;

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
    msg.setTimeStamp(0.645145853034);
    msg.setSource(35781U);
    msg.setSourceEntity(109U);
    msg.setDestination(25101U);
    msg.setDestinationEntity(12U);
    msg.op = 197U;
    msg.entities.assign("AOGIKBOHVXAMIRYLZUUJDLQMSUIMYMVWHUJOVQFNOZJTUBXPQKQQSSUKCPTKQTEINP");

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
    msg.setTimeStamp(0.654378527845);
    msg.setSource(53847U);
    msg.setSourceEntity(60U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(139U);
    msg.op = 104U;
    msg.entities.assign("FZSEWUCFRTCAYDXHUFTZRUYAHTIEYPNCPDFAVKFDYBGODWPKTJPNQPBBYPRMOWHXINIKVSGUMSQBILKOMEBARCMUGQEDXCGGCXQWVQXNVNHTNEOKSFLULZHTJORTFAWMVBLOZVZIPELQIVAXSCRSDHQUSYJVDJGXVRZCZOXWBBZDSHXGTAYVGPRYEUPEJUKGFOIQSDLKJLFNHFKJDZWMOS");

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
    msg.setTimeStamp(0.0708856913304);
    msg.setSource(55285U);
    msg.setSourceEntity(15U);
    msg.setDestination(55627U);
    msg.setDestinationEntity(149U);
    msg.op = 72U;
    msg.entities.assign("FLGDFYCVRAOHBFAPMDRXJHSLMTLYPSKVAGDSMEQLJYAWNLQBCNQNKYXERJQTSOONXMDCGQQXCLNXITDABGWSGUUDLFZLRNZZIDWCHHFBHNUPVUSEZWVPNKOWPEHMIKEOVQCRFYNJBTRZFWCRNUIJPTZBAUYPESXPXUKKYCDFEGAVZTMWZMVBBSKDEUZHQXFTEAVKRKMPMLHKRCSYUMZJOQGBVJLHGWEHWRJ");

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
    msg.setTimeStamp(0.0848362253152);
    msg.setSource(22796U);
    msg.setSourceEntity(161U);
    msg.setDestination(56484U);
    msg.setDestinationEntity(27U);
    msg.type = 209U;
    msg.speed = 38531U;
    const char tmp_msg_0[] = {-74, 86, 28, 112, 117, 48, 16, 25, 10, 26};
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
    msg.setTimeStamp(0.683670548804);
    msg.setSource(65335U);
    msg.setSourceEntity(96U);
    msg.setDestination(34392U);
    msg.setDestinationEntity(67U);
    msg.type = 66U;
    msg.speed = 46928U;
    const char tmp_msg_0[] = {-91, -35, 93, -123, 87, -3, -62, 41, -83, -105, 34, 9, -5, 1, 9, 39, -86, 52, 122, 100, -22, -50, -126, 22, -16, 61, 99, 115, 120, -102, 98, -88, 5, -26, -103, -34, 73, 109, -99, 32, 91, -47, 26, 53, -59, 74, -108, 29, 60, -96, 26, 92, 124, 11, -73, -11, 68, 82, -54, -29, 119, -102, -16, -50, 69, 17, -12, 100, 46, -89, -26, -24, -88, -121, -71, 30, 4, -116, 0, 91, -51, -116, -31, 64, 111, 105, 70, -29, 30, 66, 7, -61, -121};
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
    msg.setTimeStamp(0.315260585214);
    msg.setSource(21007U);
    msg.setSourceEntity(236U);
    msg.setDestination(55982U);
    msg.setDestinationEntity(175U);
    msg.type = 43U;
    msg.speed = 46361U;
    const char tmp_msg_0[] = {-44, -5, -106, -77, -79, 59, -126, 82, 118, 48, -90, 52, -68, -93, -91, 50, -117, 124, 82, -40, 74, 39, 32, 59, 57, 72, -111, 10, -92, 95, -79, 60, 17, 101, 42, 43, -103, -38, -74, 0, -115, 33, -92, -7, 91, -99, 2, 35, -1, -125, -4, 115, -64, 69, -54, 59, -55, -125, -40};
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
    msg.setTimeStamp(0.704210527072);
    msg.setSource(53382U);
    msg.setSourceEntity(104U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(218U);
    msg.op = 82U;
    msg.tas2acc_pgain = 0.19862562639;
    msg.bank2p_pgain = 0.445698820542;

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
    msg.setTimeStamp(0.844522134214);
    msg.setSource(32061U);
    msg.setSourceEntity(117U);
    msg.setDestination(36685U);
    msg.setDestinationEntity(115U);
    msg.op = 66U;
    msg.tas2acc_pgain = 0.404316049339;
    msg.bank2p_pgain = 0.476316808745;

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
    msg.setTimeStamp(0.0614454266107);
    msg.setSource(13984U);
    msg.setSourceEntity(231U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(243U);
    msg.op = 184U;
    msg.tas2acc_pgain = 0.0427243189254;
    msg.bank2p_pgain = 0.174102616513;

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
    msg.setTimeStamp(0.759697882447);
    msg.setSource(39487U);
    msg.setSourceEntity(226U);
    msg.setDestination(59108U);
    msg.setDestinationEntity(246U);
    msg.available = 2926764138U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.288362353274);
    msg.setSource(38411U);
    msg.setSourceEntity(52U);
    msg.setDestination(48625U);
    msg.setDestinationEntity(211U);
    msg.available = 626431750U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.712444500158);
    msg.setSource(35830U);
    msg.setSourceEntity(56U);
    msg.setDestination(20250U);
    msg.setDestinationEntity(166U);
    msg.available = 4149958701U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.789988752075);
    msg.setSource(14373U);
    msg.setSourceEntity(134U);
    msg.setDestination(55398U);
    msg.setDestinationEntity(67U);
    msg.op = 4U;
    msg.snapshot.assign("WJUIGLXVTNGFKQDJBHKUBELRHDHEKZIYLOXWISNEWPBPFABJAAKTRFORCLXAKMEBZKBVIHCZRMNU");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 118U;
    tmp_msg_0.text.assign("NHJHBSOYBLKKUIQRFJTKMHAPEEVPIMRQOSNCBSISDTHFRNVOLEQVBVUDAFNRVJKZDEMAZHKGPWNKAWMWIGGUGKXWRZRMQKNVIXTLCZUCXECZHZBJSIAAJKHWZEUMICPKVMPZYDJOCWYTJQTFDGLWOFTXXENQXRBJPHLYCGFVAAFLSRWAWGPOPESNCSFNRMYGXTYYMSGOBYZFPQWJZLEHNIGDHTUTJUXVBQDYDYRBDTCOSIEXV");
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
    msg.setTimeStamp(0.336427968733);
    msg.setSource(46775U);
    msg.setSourceEntity(198U);
    msg.setDestination(27792U);
    msg.setDestinationEntity(74U);
    msg.op = 16U;
    msg.snapshot.assign("CXLOTUTOFNFHZWDWIJLYCQXKQMZSIYYYVEGKJISLSOCNHULIUAUEBBWJQFFCHPHQ");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 46818U;
    tmp_msg_0.lat = 0.220011253607;
    tmp_msg_0.lon = 0.758423143895;
    tmp_msg_0.z = 0.782264857892;
    tmp_msg_0.z_units = 58U;
    tmp_msg_0.speed = 0.756582975315;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.syringe0 = 34U;
    tmp_msg_0.syringe1 = 30U;
    tmp_msg_0.syringe2 = 140U;
    tmp_msg_0.custom.assign("DKRLBOJXADXVZZPPGXITCGUGQKSZPJDHYSOTVZMUNCOCKQV");
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
    msg.setTimeStamp(0.95927167014);
    msg.setSource(18010U);
    msg.setSourceEntity(111U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(88U);
    msg.op = 50U;
    msg.snapshot.assign("GCXVBMHTWHJTHMVLRYPGHQKDOOLADCQNKBJCQLEITENGGPMFWWROVUQXYYQBZJIPCILGFTIFIDZBUYZANBZLYSKJTQSIPRWPKZHJRBIYSUJVEUGKYKSMVTVFYPRMMSTUBQCCUOLUEGRA");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 140U;
    tmp_msg_0.name.assign("LXBBSNMWICKPTMQKCQIBJENRLSXILFYHSWHIAXFRYZCGPGRMPNPSQFGRVDIJUDVAUTOWBZYWREMCZHHCVAOELNKJHOCPQAZFLMTZOXKKGLXNGRADBCNDKROVBKYFBWAAQDTZRICYXJMYVEOZNLHRCQESQLOTLJOUWJDUCESHFVDUUYOYVTJEZOQWWUTWPKGQKEVVSAMIGPTEUPRVFMIBFFITPNXENSUSBXJW");
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
    msg.setTimeStamp(0.199534144131);
    msg.setSource(47236U);
    msg.setSourceEntity(159U);
    msg.setDestination(1058U);
    msg.setDestinationEntity(166U);
    msg.op = 140U;
    msg.name.assign("UDQDXVBECEMDZJLGUNAIFQWAMPHKZHOZNYLQEPN");

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
    msg.setTimeStamp(0.507099552123);
    msg.setSource(632U);
    msg.setSourceEntity(191U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(116U);
    msg.op = 70U;
    msg.name.assign("MSGFBYNVZTAEPXNXDKYLZQJNHMJBICOOVHJQIPIMBWGJKSGGRUGPTSDLXSDWVAEXSZSDKUKABQUFHEEPRUGYBAWNLXPOOFFYQGQMMDJEOCNVSCCOGECHQLZFTOJRCAKRBTEMTQNFEJHQVJUZLHZEYYSLMMINFBIPRTDOXWGWUMRCVFCRUEOLWMKSLWHVAISQTVFCPYDLYXIBDVFKIZJVUHWYWNNKIPUAXAIZTWRDUGTZABPXH");

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
    msg.setTimeStamp(0.552539230287);
    msg.setSource(15965U);
    msg.setSourceEntity(73U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(184U);
    msg.op = 127U;
    msg.name.assign("OMGWGJDUCFLMJXWHKQCRDCXHZJFFPCFTYTNNUKVSLPIRECOTCBNBAJMIVGUUVTLEYZSWNTUAHNSCPQFQTHWSDYWNLDOVYBEAXAAPQVZMQVEKGRJGAHCDILPOMLSWBGYHQDDLVBBHBRDIPENXIZYKTIHUEOYQTILALOWCREXONKQOKVGBQN");

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
    msg.setTimeStamp(0.617114780375);
    msg.setSource(3880U);
    msg.setSourceEntity(234U);
    msg.setDestination(4311U);
    msg.setDestinationEntity(85U);
    msg.type = 155U;
    msg.htime = 0.0206676821697;
    msg.context.assign("ALKWDOQJKFFHVXHPNWELRHXWJNUAWOOZVFVPXLEYHWWQXUPGSRADEBZLVJXPMUOZXJZIZGEQWSLRXQNPVGFUPTCKZYLEMBUGCDJGMESZMGIKRCKRHPLBRPDNKOMANYOXZTFQINTXORHIDPSVHGCYRQBCGBEINYXSBD");
    msg.text.assign("BQOMAXXLSYACKOHBJQVZDGTOIJQIQCXZVPTVH");

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
    msg.setTimeStamp(0.292495471462);
    msg.setSource(2815U);
    msg.setSourceEntity(126U);
    msg.setDestination(4845U);
    msg.setDestinationEntity(143U);
    msg.type = 96U;
    msg.htime = 0.163261365873;
    msg.context.assign("LMPFAYIIHQOIWAMQJBHPKAPNQZCRCCGNTGYYSPXGMVFBHYEGJDEPNMUERFCRCRRPLAMXWJAWXYZFHYIFSMSTZIWMNPGBVOUKURWXRDMQOROHCNKUDPRGUDJQKHECJCALHQVOSXYTFGSLEVQPTLUVKJTHBZNZXIBSCTVVLSBI");
    msg.text.assign("BMGLZAONYXEMUGBYXRPMFCRZVRHYIDZPXLEHDWDVUJBZVYFCGOLPMQTNZOUAIKDTRRHHQMSYDPQXOKQIGEMXBBVGMTBNACENGJAYVWUFTNELPXAJFYTJBPOWKUDMZVXSM");

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
    msg.setTimeStamp(0.627062805354);
    msg.setSource(17597U);
    msg.setSourceEntity(226U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(44U);
    msg.type = 119U;
    msg.htime = 0.485023635601;
    msg.context.assign("COIPLPBNIOKWEWQTUKFIJDCSOTHZFVOKUHGVPQDWMLEZMUXJSJQRFDQLSYBEKKAPEADGJUICUNRTUKJWBRWTHFHYEAZEYUOPIWYX");
    msg.text.assign("NHECKWUCOPHIZKTPXKREAJUPSMODAEWCBSTXVVDTGHVCUTUIGGWJDWSOCMHIHAUZKBOYZPANSUNQCIEREFFJVUFGKRHTOVNOVPTKECWSKKTYVJZHLZOMKMBQFGERXLYZJVGNBIHJMHCWITFHLGDADQLLQMUIYQYRBQXYYDBQPACTMKAWXARGNOFOVJBWSDISQZLMXVRPFLULYZDFINADBSXWDXREXALNFLJTBGEYJPRNZEIXPQNSCMWBZJM");

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
    msg.setTimeStamp(0.0644400721793);
    msg.setSource(59882U);
    msg.setSourceEntity(138U);
    msg.setDestination(48436U);
    msg.setDestinationEntity(143U);
    msg.command = 151U;
    msg.htime = 0.600738461886;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 9U;
    tmp_msg_0.htime = 0.661449105639;
    tmp_msg_0.context.assign("UBHMKBDRJVVDTEZJMZQVCXFERIOCFURIQJYEXWRMLYRZNDIFUYHEPDSULIRLPTWPRPCSDOQIBWHRNKGHGMZGNPCFQCZWGDDPRSGGKYAOUEZFVBEBWJWELOUTYUNTLGFAXOLXEJZUWNSVNXOJKWMTZOIYTCBKHXKYUMIJPHYNNRPTSTGFMLJBQDCIFNSWLHZOTCQXA");
    tmp_msg_0.text.assign("ZDMTAGAOCMRVVFMMYNINWAOTFCRUPEEQSGLZBIMNAJFGWYLKTGTPRPXHVQKXWJJHRIFFOLGZFZQPPWQDSCKHUOJHVUTVESMJNBAYRLSSUHSYJZQOTLMPFNVIMNOXWOCTUDPRSMDDHQRTISQCDQDYHFUBUEKEZGILUCBZRAZHDXDBUOFCWBGIJXZEEXRLTCNSKXFCLBXUZKWPVYHYL");
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
    msg.setTimeStamp(0.491793228842);
    msg.setSource(17721U);
    msg.setSourceEntity(149U);
    msg.setDestination(26442U);
    msg.setDestinationEntity(248U);
    msg.command = 136U;
    msg.htime = 0.228650496703;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 167U;
    tmp_msg_0.htime = 0.949408562289;
    tmp_msg_0.context.assign("DFAIRIGWZHWJKPGKQZIXDMXPYOGRPYYQXMIRADMJXBONLEZCZUBZESGPUEJWVHFLYFXVQCYOAHSAROXEJWBNUMRWCHNZTGMQFKDLFTTLYISPTTIOGVBZMILFNPLAMQ");
    tmp_msg_0.text.assign("CWEQCLDSEKQCRMPYWHDXCOSEJHBYVKIHLHE");
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
    msg.setTimeStamp(0.315947588888);
    msg.setSource(29779U);
    msg.setSourceEntity(33U);
    msg.setDestination(3330U);
    msg.setDestinationEntity(7U);
    msg.command = 19U;
    msg.htime = 0.583631594359;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 75U;
    tmp_msg_0.htime = 0.854944980965;
    tmp_msg_0.context.assign("HPRVDLFMLZZUXARKOZSNGTNBGUZBUCQWJQNAGSXNIEXPPZJGEJQXYMHVCFXYYSACMHZXDFXOJZVFGXURMVHFYSXCAWFLEVHDOMVWIJAYQTJOSGQIWAGQFZWRMIKLBYQPMEKPGKPWMCCJBVVACZWNRDFPVYKAYHIERIRRDJTBVRMTOWPSNKLHSTIPCOTOJCQKLEIATDLUUDKLRDBEFLBNDKBIMUDYHSTNBTCEQHUUSLQ");
    tmp_msg_0.text.assign("TERXHEUUWFTRKMMAWZPZRILAEAFKXNSCHPEQZRSSIBSKNHIAMZAJARPGPSOQUKCHLOIDQZXNDUJHDLZMJFBBOBRTDINBMZNEXOCIGTIFQGOMKHVCBWEZDQAXPHGPSQCUZLYMSDJJKFJYRKDKGXVHLNHEBMHIVNSKLWDQYWATFIMLIXLSJYGXYGUQWUMCTBTOGRAYJXVFPFPEFVRZYUVTJCDVRPFOVNA");
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
    msg.setTimeStamp(0.317549151166);
    msg.setSource(60647U);
    msg.setSourceEntity(55U);
    msg.setDestination(39456U);
    msg.setDestinationEntity(146U);
    msg.op = 31U;
    msg.file.assign("GRNXHPJLTCEUOKOQSDHCKIFUWUZHYAJASPDHXLFJRUBBOGKOHCHFPQNJPFIGMASYEUCJINTBADFWYXPMWSFWFNLWWLINVTXLGJGAETNSDZMMPXGXUCSQCQAEISSTRHWQJVV");

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
    msg.setTimeStamp(0.887472068207);
    msg.setSource(191U);
    msg.setSourceEntity(48U);
    msg.setDestination(39525U);
    msg.setDestinationEntity(237U);
    msg.op = 46U;
    msg.file.assign("QSZGUOCRBMMBZFHHLOGTZTPHMQELFYIDXMFCBBNZEKSPPMEYLYZKZBKZXGUFOSCCRDYTBLNQVJUDYKVNSIWSIMFOOADXCKXAGCJSPGUQKLHGMTGGNBXBVEZRQRGICHSFEJRHVHVYPVIAINNAPFXSFPOZJWDVJWELEEVUQCRTJSGVOUHZA");

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
    msg.setTimeStamp(0.42234283368);
    msg.setSource(52641U);
    msg.setSourceEntity(125U);
    msg.setDestination(30034U);
    msg.setDestinationEntity(184U);
    msg.op = 35U;
    msg.file.assign("UPEYKNWVHDKTYIHOHQRGIZZDIVMPCUSDNKVRLRPGPVJNZYYQQIOUZNZXLIYCPFLUAOQCSIQXVELSSFHOOYYAGPDEKTFRQWBJNHAFJFZJGEXLFCUBG");

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
    msg.setTimeStamp(0.771783321711);
    msg.setSource(47681U);
    msg.setSourceEntity(100U);
    msg.setDestination(17575U);
    msg.setDestinationEntity(172U);
    msg.op = 102U;
    msg.clock = 0.49306530029;
    msg.tz = -26;

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
    msg.setTimeStamp(0.245326599451);
    msg.setSource(3389U);
    msg.setSourceEntity(170U);
    msg.setDestination(10341U);
    msg.setDestinationEntity(40U);
    msg.op = 196U;
    msg.clock = 0.873902555648;
    msg.tz = -95;

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
    msg.setTimeStamp(0.00576486410807);
    msg.setSource(37924U);
    msg.setSourceEntity(36U);
    msg.setDestination(49101U);
    msg.setDestinationEntity(189U);
    msg.op = 95U;
    msg.clock = 0.65997769419;
    msg.tz = 22;

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
    msg.setTimeStamp(0.341408601266);
    msg.setSource(27494U);
    msg.setSourceEntity(76U);
    msg.setDestination(36396U);
    msg.setDestinationEntity(53U);
    msg.conductivity = 0.0795005212197;
    msg.temperature = 0.232395437169;
    msg.depth = 0.475894649695;

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
    msg.setTimeStamp(0.0543241160382);
    msg.setSource(915U);
    msg.setSourceEntity(99U);
    msg.setDestination(64400U);
    msg.setDestinationEntity(200U);
    msg.conductivity = 0.476109968019;
    msg.temperature = 0.590167568053;
    msg.depth = 0.192636278933;

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
    msg.setTimeStamp(0.307540797137);
    msg.setSource(52283U);
    msg.setSourceEntity(232U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(238U);
    msg.conductivity = 0.907258652532;
    msg.temperature = 0.586192896872;
    msg.depth = 0.743242163295;

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
    msg.setTimeStamp(0.42798671639);
    msg.setSource(9623U);
    msg.setSourceEntity(122U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(53U);
    msg.altitude = 0.016313927407;
    msg.roll = 5782U;
    msg.pitch = 55069U;
    msg.yaw = 41276U;
    msg.speed = -4616;

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
    msg.setTimeStamp(0.35839492856);
    msg.setSource(22302U);
    msg.setSourceEntity(166U);
    msg.setDestination(53778U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.22940219806;
    msg.roll = 3761U;
    msg.pitch = 12926U;
    msg.yaw = 14714U;
    msg.speed = 13929;

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
    msg.setTimeStamp(0.152447447949);
    msg.setSource(1619U);
    msg.setSourceEntity(53U);
    msg.setDestination(51809U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.272467689101;
    msg.roll = 32925U;
    msg.pitch = 63315U;
    msg.yaw = 12342U;
    msg.speed = -6324;

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
    msg.setTimeStamp(0.472176233665);
    msg.setSource(10404U);
    msg.setSourceEntity(212U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(73U);
    msg.altitude = 0.0173356273501;
    msg.width = 0.252748434609;
    msg.length = 0.862535836548;
    msg.bearing = 0.759523629938;
    msg.pxl = 31544;
    msg.encoding = 37U;
    const char tmp_msg_0[] = {-87, 120, 58, -46, 113, 111, -48, 15, -25, -34, 94, 22, 34, -78, 7, -123, -95, 27, -29, 86, -57, 111, 74, -110, -50, -116, -8, 12, 97, -58, -89, -27, -125, -52, -24, -67, -88, -61, -13, 23, -48, 3, 125, -38, 59, 57, -3, 23, 98, 94, -100, -37, 0, -60, -126, -61, -7, 44, 12, -67, -108, -123, 118, -128, -64, 47, -34, 69, -8, 22, 33, 84, -14, 78, -99, 14, 107, 64, -109, 71, 84, -121, 17, 59, 115, 51, -36, 28, -1, -13, 108, 12, -2, -47, -98, -80, 76, 52, 19, -51, -47, -33, 62, -24, 99, 14, 105, -92, -12, -128, -11, -68, 29, -12, 99, 35, -12, -58, -45, -79, 38, 25, -22, -90, -3, 45, -115, 79, 114, 100, -56, -118, -100, -3, 85, 43, -110, -65, 89, 56, -67, 58, 35, -43, -68, -50, 19, 101, 122, 117, 31, 31, 28, 37, 98, 111, -56, 33, 64, 113, 95, -106, -34, -119, 104, 57, -73, -71, -47, 55, 37, -47, 117, -125, -64, -119, 26, 49, 107, 84, 64, -33, -43, -83, 99, 81, 48, -38, 32, -5, 97, 31, -12, -30, -112, -26, 117, 123, -13, -57, -124, 60, -126, 42, 92, 30, -20, 39, 125, 50, 67, -104, -57, 58, 47, 6, -78, -1, 104};
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
    msg.setTimeStamp(0.0515752879192);
    msg.setSource(40754U);
    msg.setSourceEntity(104U);
    msg.setDestination(29578U);
    msg.setDestinationEntity(135U);
    msg.altitude = 0.809897653397;
    msg.width = 0.134954629439;
    msg.length = 0.441008256492;
    msg.bearing = 0.42857194088;
    msg.pxl = 19083;
    msg.encoding = 190U;
    const char tmp_msg_0[] = {-82, -73, 8, -57, -121, 66, -122, -58, 74, 61, -36, 71, -69, 72, 88, 88, 36, -119, -34, -73, -102, 106, 90, 3, 24, -12, -28, -17, 86, -58, 50};
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
    msg.setTimeStamp(0.42943863985);
    msg.setSource(57156U);
    msg.setSourceEntity(151U);
    msg.setDestination(59308U);
    msg.setDestinationEntity(10U);
    msg.altitude = 0.0923283865562;
    msg.width = 0.252133233845;
    msg.length = 0.469028921078;
    msg.bearing = 0.4495017558;
    msg.pxl = 6982;
    msg.encoding = 62U;
    const char tmp_msg_0[] = {86, -6, -99, 64, -34, -84, 44, -9, 26, -12, 6, 8, 23, -25, -55, 31, 107, -127, 99, 111, -29, 124, -2};
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
    msg.setTimeStamp(0.802133178194);
    msg.setSource(59732U);
    msg.setSourceEntity(229U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(62U);
    msg.text.assign("QVEVWLMQOQZJXSZAZXHCCQPNOYJGZMNIUYHEBUFIPVBIFHDCSTILYSGTECGYETJPSWSHHNPCVMZQYASHNHZVDIYMVEWQGXTLRL");
    msg.type = 112U;

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
    msg.setTimeStamp(0.16746722983);
    msg.setSource(59666U);
    msg.setSourceEntity(241U);
    msg.setDestination(18115U);
    msg.setDestinationEntity(6U);
    msg.text.assign("BLBLAQMDKHVUSXONCOFWBMHIQMUJ");
    msg.type = 64U;

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
    msg.setTimeStamp(0.117488724041);
    msg.setSource(30322U);
    msg.setSourceEntity(117U);
    msg.setDestination(15176U);
    msg.setDestinationEntity(93U);
    msg.text.assign("TOAFXOLGTKESITSVMSYEOVOQZDDULNUEZUHFFMYYMGYOHCJI");
    msg.type = 131U;

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
    msg.setTimeStamp(0.294902474844);
    msg.setSource(42981U);
    msg.setSourceEntity(121U);
    msg.setDestination(56284U);
    msg.setDestinationEntity(220U);
    msg.parameter = 100U;
    msg.numsamples = 205U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 46308U;
    tmp_msg_0.avg = 0.357926400554;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.93350214897;
    msg.lon = 0.189575098122;

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
    msg.setTimeStamp(0.194775325016);
    msg.setSource(31262U);
    msg.setSourceEntity(253U);
    msg.setDestination(60281U);
    msg.setDestinationEntity(89U);
    msg.parameter = 34U;
    msg.numsamples = 142U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 53762U;
    tmp_msg_0.avg = 0.835878464779;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.635390244853;
    msg.lon = 0.969260178161;

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
    msg.setTimeStamp(0.0814850136367);
    msg.setSource(57040U);
    msg.setSourceEntity(98U);
    msg.setDestination(28509U);
    msg.setDestinationEntity(5U);
    msg.parameter = 186U;
    msg.numsamples = 154U;
    msg.lat = 0.920414053924;
    msg.lon = 0.439922617325;

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
    msg.setTimeStamp(0.932476855066);
    msg.setSource(37647U);
    msg.setSourceEntity(205U);
    msg.setDestination(61440U);
    msg.setDestinationEntity(20U);
    msg.depth = 12164U;
    msg.avg = 0.500018137093;

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
    msg.setTimeStamp(0.536878050695);
    msg.setSource(63701U);
    msg.setSourceEntity(60U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(84U);
    msg.depth = 50375U;
    msg.avg = 0.774520264608;

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
    msg.setTimeStamp(0.1405126181);
    msg.setSource(8706U);
    msg.setSourceEntity(63U);
    msg.setDestination(7221U);
    msg.setDestinationEntity(211U);
    msg.depth = 35489U;
    msg.avg = 0.0366738927073;

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
    msg.setTimeStamp(0.182692683256);
    msg.setSource(29262U);
    msg.setSourceEntity(89U);
    msg.setDestination(27411U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.573895003306);
    msg.setSource(1294U);
    msg.setSourceEntity(44U);
    msg.setDestination(1566U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.927152655658);
    msg.setSource(15365U);
    msg.setSourceEntity(168U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.458362995933);
    msg.setSource(1147U);
    msg.setSourceEntity(3U);
    msg.setDestination(46473U);
    msg.setDestinationEntity(232U);
    msg.sys_name.assign("VTNGWBYOFFNLKNIMCICWXNZOEIBLFYJTEPHSUIMPPTFDXDIVIFBXRUJPEGZYKWQYRXWHYCOEQNOOMJDEAPRZESRATPJRIHHRGTGVRLADQNDARGVFNLLTHVUQGNFVOPMGYKLCBKGMYECOXUIBKBCUUODAKHHSHULJDKAWSKBZWBWIJWFCJZKIVQPNSMMUSMTMYQQSVXXZOEZCQXSUDGSJJAVFYUPOENFPXGZXWQQ");
    msg.sys_type = 4U;
    msg.owner = 38923U;
    msg.lat = 0.0758685944565;
    msg.lon = 0.729093015425;
    msg.height = 0.0203473072693;
    msg.services.assign("INHNNWVQSAUAGBNXCCGHULNBRKDTZGSQMNFEKWZQICKTQJ");

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
    msg.setTimeStamp(0.679272047609);
    msg.setSource(65173U);
    msg.setSourceEntity(131U);
    msg.setDestination(27253U);
    msg.setDestinationEntity(77U);
    msg.sys_name.assign("HKVUSMHEFNSRWNSYYMNBJOGVJYDJKXAKTCLLKGBXGUEKXIJGUTPCKSZOJUQKLJMMVNSBHPBPDTTCXLOLFIIAIZAZELNJRGOPCUZQMTHDFXHNVIHSKEWDBCZRAIJCNK");
    msg.sys_type = 181U;
    msg.owner = 38954U;
    msg.lat = 0.862912406701;
    msg.lon = 0.942000314707;
    msg.height = 0.631200143967;
    msg.services.assign("OTWCVQJLEOEPKGMFBIHYSCUCEISGXIPOAQBTDSVDTXSAZQHALYAFFNGLQJMUYTHWPZXARPJNKJVQFVLBINDSJGEBCIWZDYQMIWUYMLFACVFDTWMGN");

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
    msg.setTimeStamp(0.52373699588);
    msg.setSource(37451U);
    msg.setSourceEntity(16U);
    msg.setDestination(18028U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("HGRIZXNFBLQWEYXWGNMPALOWQONXZRWCOQSTHVOFQAOCPPLEDYLGCOMAPSPQZKBUZWEMVGDTNDVKQRNWUEEIAURKQPLEBMITDZY");
    msg.sys_type = 158U;
    msg.owner = 55885U;
    msg.lat = 0.897971938157;
    msg.lon = 0.782873309031;
    msg.height = 0.752981887915;
    msg.services.assign("XKAFNHUPMRSVTSRANBRLDMFYWJWFUHPUJBDOVXZOYXP");

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
    msg.setTimeStamp(0.185714363179);
    msg.setSource(33237U);
    msg.setSourceEntity(241U);
    msg.setDestination(44254U);
    msg.setDestinationEntity(123U);
    msg.service.assign("WGAWGBJFUYWJRAQJEVJYZLYKLSWGODVAZWVMDQCHMHKYYSIXWICWFKLRCDSRNOXEXAMFMEUDQLONDEPPOBTZLCTZFKFIKWKEHFNUSEICEOZNEFAGJONZLATCCSBODDIYOTIPBROJTSZSXBCJHVNRXQAUYBHLCDMZNGBYLRRFAPTPHWAOSHDSMGMTRIXUMTJPKSZQHXFPIMXIHRGYDQVVQUGVKLBUPYQNNUWMPBCRUGUVIKTTHZXJALNJFPVK");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.299292709261);
    msg.setSource(1216U);
    msg.setSourceEntity(197U);
    msg.setDestination(52211U);
    msg.setDestinationEntity(146U);
    msg.service.assign("ANMBJWVTJHCTRZNFDWTFZKXUTGKPQQD");
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
    msg.setTimeStamp(0.0292794125756);
    msg.setSource(9124U);
    msg.setSourceEntity(194U);
    msg.setDestination(15359U);
    msg.setDestinationEntity(166U);
    msg.service.assign("GPKEPVTCBHXRWIFHJBJRIBHWQMZVLQEUNWKTOJGOLWVAIZUKBFEYCPDXHXLESPWAISXPLGMEQAMRDJUDQITFZLPIQYRYTLPKZMZSIETZNBJBAFEJTXVWKHAHXGQFKEVOCBYZBJZDNSUCFNNAHRVNIOMOPBJNCUUKGUYYSKXUJYGNOAWMCELWZUFLFLOOSRGASVATDQZDTNSGOQRXDVVDMIYRPSLJM");
    msg.service_type = 6U;

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
    msg.setTimeStamp(0.600581260338);
    msg.setSource(4016U);
    msg.setSourceEntity(143U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(75U);
    msg.value = 0.382404322704;

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
    msg.setTimeStamp(0.928832361587);
    msg.setSource(12970U);
    msg.setSourceEntity(21U);
    msg.setDestination(36661U);
    msg.setDestinationEntity(206U);
    msg.value = 0.792158073748;

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
    msg.setTimeStamp(0.572822824308);
    msg.setSource(4212U);
    msg.setSourceEntity(217U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(196U);
    msg.value = 0.470874018123;

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
    msg.setTimeStamp(0.975354472904);
    msg.setSource(14826U);
    msg.setSourceEntity(51U);
    msg.setDestination(39055U);
    msg.setDestinationEntity(85U);
    msg.value = 0.631957410701;

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
    msg.setTimeStamp(0.371412537978);
    msg.setSource(34518U);
    msg.setSourceEntity(232U);
    msg.setDestination(15430U);
    msg.setDestinationEntity(48U);
    msg.value = 0.688318298082;

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
    msg.setTimeStamp(0.665924977573);
    msg.setSource(43703U);
    msg.setSourceEntity(1U);
    msg.setDestination(60406U);
    msg.setDestinationEntity(56U);
    msg.value = 0.681904059417;

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
    msg.setTimeStamp(0.39611932363);
    msg.setSource(54650U);
    msg.setSourceEntity(181U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(43U);
    msg.value = 0.902140680493;

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
    msg.setTimeStamp(0.884504583627);
    msg.setSource(33391U);
    msg.setSourceEntity(145U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(51U);
    msg.value = 0.507504769547;

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
    msg.setTimeStamp(0.320813476492);
    msg.setSource(25559U);
    msg.setSourceEntity(167U);
    msg.setDestination(19105U);
    msg.setDestinationEntity(243U);
    msg.value = 0.455607637126;

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
    msg.setTimeStamp(0.710628309715);
    msg.setSource(1457U);
    msg.setSourceEntity(214U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(79U);
    msg.number.assign("LVPIKDOCWQAEHWQGZFMIVRRCYWIIPROVFWYOEHYHTEZJNHJBMDGFWSYRABCVTOAYWAHPPHEWZOOQFLQXIKPAXEUJYCPVVKDGNTZKJZOAPLTVRFWKUMAJNVWOLHMMHQFYBFXXLGAXDQEGBWISNMDPSENNLKRZKJDPJUSDYQIJURRFTBLYCJBMOFBGNQICDARZUIKCLYCEXTSZKLTSQUKMQIPBSMNXBXHMGTOREGVXCUGFCVDSS");
    msg.timeout = 18588U;
    msg.contents.assign("ZNJRPMMHIMAJETJUEUHZNYEGVBFKBTTOYCIDINCFMLMLHKMLFDALVWDVDYEYTSYHZUHIOTXREZHXDWSELNQAMNX");

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
    msg.setTimeStamp(0.017967952858);
    msg.setSource(20273U);
    msg.setSourceEntity(20U);
    msg.setDestination(55820U);
    msg.setDestinationEntity(56U);
    msg.number.assign("BIDDOEGFAKHKHYRYRYQEYUEHWAVWAQUWGWTOBPJRBPUGUOMQZRTMKNSMZSESCTHAHTZHQIRLUFMLQXTFJWXZNUKFKKSAIKQOPJCAIZRFIQRPTLJAXKIAGTVOYPLXPXSAAZNVNBSNOVDCMUSQDLGDBTZCBWDGSCYFGWJBVNYQNVJMIZKZVYFPO");
    msg.timeout = 3081U;
    msg.contents.assign("MCXSMJWQXEEJIBFXKEAQPBTZMEOMOEXGQDZGMHQJYPTFIPCFYFBKILGVPUWDBXVSDIDJHWTJNVYWIYLULDFTLPYLKTKGHMNRCFGSZURMPVINHAAWENKBPARGZTWBCCIJXXRPLYZFRDYZXQKEWCUGZJOIOLURNFUWLFWXVGXNCRYLDYPOUONPFN");

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
    msg.setTimeStamp(0.605271642916);
    msg.setSource(53578U);
    msg.setSourceEntity(13U);
    msg.setDestination(58792U);
    msg.setDestinationEntity(204U);
    msg.number.assign("EUXRCXGRLHYYEZCDJKPQSPKCJMOVPBORZPTNFXKTNFYHFABWZHUYSWARDOUKANSIPRGUAUQTYQAGFKGJWBNGACQDZAP");
    msg.timeout = 39490U;
    msg.contents.assign("NPIGYWVHPJSMOHLSLADOHYJYBXZHJVNPPACGXIARAKDUZBZQYOVBVIDSKHWKNIIHXVFOSTBXWUXRKQMREEYAKXFFIQCHNRVNZHOZFXJILTRMTDXBGCDBEBPQTPVFTWYJATSXNSTVKRJOPJYUBXPEGQFQLHSTLUUL");

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
    msg.setTimeStamp(0.635247753597);
    msg.setSource(63393U);
    msg.setSourceEntity(232U);
    msg.setDestination(45129U);
    msg.setDestinationEntity(186U);
    msg.seq = 1169698967U;
    msg.destination.assign("KJDBJXCFWCJWRZIBYIVTZAYYDDTINHECHSWIPWNFYPXQKFIFWFIPHLRSKSAEAHLRIMJTVCARLTHBEUNTXWLXYNMKGRMJWLOAISVDUGQBOMUSYMCYPGLTVMMRQKEPQULJOAJCRGQSNZLESOXZWCKFTZBE");
    msg.timeout = 60727U;
    const char tmp_msg_0[] = {24, -112, 101, -15, -43, 35, -74, 58, -43, -89, 103, -52, -38, -73, -62, -112, -20, 73, -86, -85, 29, -114, 96, -67, 112, -55, -62, 14, 75, 101, 48, 65, 55, -5, -78, -7, 125, 114, 21, 104, 95, -109, -65, -36, -110, 17, 31, 89, -10, -102, 62, -71, -21, -56, -11, 118, -10, 84, 124, 93, -91, -94, 27, -40, 18, 26, 53, -2, -72, 55, -68, 109, 109, 74, -43, 2, -113, -99, -118, -119, 57, 121};
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
    msg.setTimeStamp(0.625422669011);
    msg.setSource(23127U);
    msg.setSourceEntity(236U);
    msg.setDestination(18033U);
    msg.setDestinationEntity(62U);
    msg.seq = 67489485U;
    msg.destination.assign("ENAMUUCSCQALKKMOYALSXKTRYUJLJRKZKHFFUQVELQWVTYCDGLCBADOXQYIIILDBMDRY");
    msg.timeout = 49164U;
    const char tmp_msg_0[] = {72, 47, 58, 58, 114, 81, -55, 30, -41, -128, -71, -79, -70, 40, -31, 19, 85, 96, -83, -20, 65, 23, -62, 11, 84, 22, -35, -103, -54, -84, -45, 105, 99, -51, -25, -120, -15, 9, 30, -123, -27, 57, -46, -36, 82, 105, -87, -27, -48, 48, -36, -100, -112, 81, 52, -125, -22, 65, -50, 77, -23, -98, 103, -11, -109, -40, 92, 124, -97, -64, 10, -19, -115, -87, 41, 82, 77, -88, -107, 12, -11, 76, 9, -101, 70, 40, -39, -108, 21, 17, 48, 79, 100, -47, 98, -52, -34, 49, 126, -107, -95, 3, 82, 1, 9, 40, 24, -61};
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
    msg.setTimeStamp(0.584286074565);
    msg.setSource(49548U);
    msg.setSourceEntity(53U);
    msg.setDestination(7634U);
    msg.setDestinationEntity(57U);
    msg.seq = 1716408317U;
    msg.destination.assign("XRUVQPDQMNKELPILCSCOAERDUZGHEGNTKXFIWWCSPXFBFLVJOQJDMOANGUZSRRFAUYHBFWTBSJYDFOEJOLQOTQLKUMPIDQPGLZJPGEXXYKBTWMMPVPNTDXYWYCJEIRZDJQECLZZIDCLUIDHFAVDBAOTWFBAZYCNURLSXPVZKOEKHCASIHKBTQRXKNYPWVWHVUCRFLYTSVWTBSBHZKVZKBGICJIAGHSXNREQUTHNUGONGMEYMMAFGOQNMJI");
    msg.timeout = 20712U;
    const char tmp_msg_0[] = {18, -121, 116, -18, -106, 90, -6, -97, 19, -69, -22, 10, 56, 39, -30, 24, 36, 23, 108, -63, 18, 106, -52, -116, 117, -6, -65, -126, 109, -79, -14, -89, 126, -28, 108, -66, -40, 119, -76, -118, -57, 118, -34, -1, -110, 56, -6, -28, 80, 24, 75, -103, 30, -14, 105, -51, -128, -66, 63, -102, 85, -57, 84, -79, 113, 36, -4, -74, 57, 42, 31, 59, 2, 6, 22, 126, -43, -42, -114, -126, 28, 112, 40, -56, -56, -63, 8, 118, -46, -39, 10, -108, -77, -32, -111, 81, 8, 48, 110, -55, 25, -120, 7, -49, -67, 59, 82, 41, 40, 111, -119, 105, 106, 60, -80, -67, -111, 23, -72, 119, -36, -97, 54, 0, 36, -47, -6, -114, 2, -94, -97, -13, 123, -112, 15, -102, 46, -27, -12, -24, -98, -124, 51, 27, 48, 116, 57, -87, -113, 21, -57, -37, 25, 100, 119, -97, -124, -75, 116, -53, -13, 34, -115, 33, -122, 5, 5, 106, -46, 24, 80, -16, -96, -69, 23, 32, 105, -25, 113, 6, 126, -113, 11, 114, -33, -50, 30, -43, -14, -128, -128, 78, 61, 49, -81, 110, 22, 87, 46, 73, -75, -67, 42, 4, -24, 66, -51, 44, 107, 25, -68, -13, -11, 3, -61, -9, -113};
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
    msg.setTimeStamp(0.0715171102207);
    msg.setSource(33503U);
    msg.setSourceEntity(23U);
    msg.setDestination(25413U);
    msg.setDestinationEntity(176U);
    msg.source.assign("HUJIDKOCASVZJPPLDDSFJCTZKSTNDVALFUOFZY");
    const char tmp_msg_0[] = {-106, -100, -17, -108, 90, -14, -27, -30, -83, 22, -47, 96, -122, 4, -117, 35, 48, -101, 26, -7, 77, 39, -75, -9, -77, -125, 5, -41, -18, 53, 63, 68, 118, -36, -2, 31, -120, -10, -114, -44, -71, -33, 32, 53, -70, 83, 10, 126, -3, 63, 64, -7, 0, -70, 68, -19, 61, -54, -35, -103, -92, 49, -84, 105, 73, -4, -44, -60, 19, -29, 53, -104, 72, -41, 125, -125, 72, -89, 36, 57, -24, 22, -76, 30, -7, -4, -100, 92, -119, 41, -85, 64, 5, -50, -110, 102, 2, 120, 16, 126, 96, -43, 109, 82, 47, 118, -96, 70, 118, -70, 74, 124, 65, -76, -98, 65, 118, 100, -39, -75, 94, -110, -35, 97, -55, 5, 124, 116, 79, -1, -10, -63, -15, 84, -121, 122, -80, 21, -121, -31, -13, 123, -109, 26, -82, -115, -120, 93, -121, -82, 23, 37, 33, 37, -43, -117, 81, -12, -94, 52, -67, 26, 71, 51, 39, -111, -88, -33, -49, -50, 44, -73, -123, 29, 61, 123, -104, -50, -71, -7, 109, -4, 41, 25, -74, -48, 2, 27, -9, 104, -121, 93, 12, -14, 124, 46, -48, -14, 18, -106, -85, -125, -101, -111, 50, -22, -98, 76, -16, -36, 20, -26, -8, 12, 78, -100, -113, -104, -10, 5, -27, 62, -27, 37, 111, -6, 111, 13, -47, 119, -124, -97, -25, -57, -53, 4};
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
    msg.setTimeStamp(0.676266518724);
    msg.setSource(40161U);
    msg.setSourceEntity(252U);
    msg.setDestination(45773U);
    msg.setDestinationEntity(68U);
    msg.source.assign("HUNBSMHZCCEBWDEIRMUECLMIDGZFZSSDCVLTVUYKNOYSXXVWWRRESGPSNZMCFYAODHVQKFJMHUGNDOYFVYKPKGQUILBRJFVFJBBEONAPMZNHJXBSBDDUKJBTZRLFMKQPYPWQOFBZCFWQGIKYIMWANXLRYWTRWJTRNXSMZLSW");
    const char tmp_msg_0[] = {-59, -72, 22, -110, -112, -56, 37, 50, -85, -77, -28, -82, 99, -82, -89, -73, -75, -44, 42, -53, 37, -108, -106, 69, 93, 81, 10, -51, -70, -49, 34, -75, -32, 70, 18, -83, 72, -13, 41, 63, 124, -61, -128, 123, 11, 75, -63, -18, 23, -86, -105, 102, -7, 77, -37, -69, -84, 116, 113, 30, -20, 35, -31, -25, -1, 104, 124, 12, -48, -14, 119, -78, -27, -14, 57, -98, 17, -46, 98, -88, 114, 11, -33, -106, 41, 100, 41, 26, -64, 23, 21, -104, -39, -25, -81, -43, -98, 46, -58, -52, 122, 72, 83, -56, -17, 30, -58, -123, -12, 50, 34, 79, 72, -19, 38, 19, 110, -99, 93, -88, 8, -84, 7, -124, 5, 75, -127, 4, -86, -53, 51, 112, 1, -95, -98, 118, 11, 8, 12, 3, 78, 89, -52, 88, 16, 31, 15, 84, -32, -108, 91, 125, 94, -15, -36, 94, 22, 6, -84, -83, -82, 27, -111, 30, -47, 91};
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
    msg.setTimeStamp(0.787084376545);
    msg.setSource(53359U);
    msg.setSourceEntity(52U);
    msg.setDestination(44750U);
    msg.setDestinationEntity(116U);
    msg.source.assign("SCVRUARLBVLDZPNFSFTYJSLIVWHCOOVSYZMPIAFXFNGXIYCHGCKBDXWMXRTEOVJJZZQK");
    const char tmp_msg_0[] = {124, -46, 112, 45, 75, -100, -126, -65, 108, 38, -90, -14, 53, -96, 53, 18, 2, 28, -38, -69, -76, 57, -82, -50, 75, -127, -127, 125, 117, 53, -92, 7, 78, -124, 50, -4, -91, 66, -110, 28, -108, -11, -79, -78, -79, -101, -32, 84, 106, -112, -92, 73, 17, -105, 80, -105, 88, -52, -94, -96, 21, -88, -126, -83, 107, 122, -55, 53, 44, 45, 87, 36, -8, 25, -83, -91, 76, 99, 69, -85, 35, 102, -13, -69, -6, 107, 17, -93, -27, 115, 28, -115, -54, 72, -46, 47, 19, 29, 15, -102, 19, -63, 72, -107, 63, 95, 85, 55, 37, -86, 21};
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
    msg.setTimeStamp(0.980855661234);
    msg.setSource(62855U);
    msg.setSourceEntity(11U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(20U);
    msg.seq = 3016096992U;
    msg.state = 34U;
    msg.error.assign("KAGVJFIBWENJCKCLQZIXBQHSCICLSFXQRTTKITHEPBRUAPVORIRKJYINYUZOMVMMQGGLSD");

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
    msg.setTimeStamp(0.71181793661);
    msg.setSource(1788U);
    msg.setSourceEntity(0U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(41U);
    msg.seq = 2158894866U;
    msg.state = 200U;
    msg.error.assign("EPPBZXJHYKGHLOAFJVTBQFZKMGFNAACGNWMSRAYVZMDZTE");

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
    msg.setTimeStamp(0.0591654602305);
    msg.setSource(64903U);
    msg.setSourceEntity(127U);
    msg.setDestination(47959U);
    msg.setDestinationEntity(168U);
    msg.seq = 873009602U;
    msg.state = 234U;
    msg.error.assign("OPTGXZGIVCUCVJNSXVNQZCKAQXZMVBMXQPNLEFJARRBALOQAYAMKNLTSYOGGQPDFFWHSIUWRSPZPSEOUVDERMUGUKHKJVIDPFKXJZAVLLGQRDHKCIOQNNPYWWTOBBAYHMWTIPCOOZOVHGBTEHJLUTEEYDYKBYRRMBEJJMTXYLPVENIVDWSCNSWQHZUBXFLDXSHYEYLBCTFJQSXKCZRAFGJGTAMWKWUD");

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
    msg.setTimeStamp(0.907288337263);
    msg.setSource(179U);
    msg.setSourceEntity(251U);
    msg.setDestination(62408U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("OMGFYVLFOHFQVOVZGCKRZMDHIRDRFHTTIDXBRSWHDPINJETAF");
    msg.text.assign("WBZNZGFGYBAYHQGRPLSXIKDWKUFPEACETWONYPVPQSJPOHWQCQTPQUM");

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
    msg.setTimeStamp(0.41547974972);
    msg.setSource(50075U);
    msg.setSourceEntity(81U);
    msg.setDestination(55784U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("MVYVVFAPBOXIZLPZQKBEKPNRSXJMFDJCSARPMYNKUFWJYXOVSPFTBTDBOJYIOKDCGVISNRSEOLIBJRHMVRZMDULKAYNZEFOZZDCNUKJWTAINWYIALTWRXWNYHFDBTLGUWLOSCXMRLDFIGL");
    msg.text.assign("HRIWWVDDPFPNKNPKHFPQDJLYUIURZEWUVPFQOYJKSMWUNRAVNYLSNLXXRRVXABRMFGSA");

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
    msg.setTimeStamp(0.0216833829184);
    msg.setSource(58738U);
    msg.setSourceEntity(74U);
    msg.setDestination(45541U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("NNUZFDOOHAGVVIHDKIJIOLPTLAISMEOQTNNKWMXDWTSOJEHYRKTYKANPPWNRCERSSWSTSSWLBBVYUFPKTLXORLJCEXCGCQQRUBSFBZMFYGZDUVAMYJPUZWWCVLRNIDWKBLGACXHGXBRBQXTTTZUQCJXDOHRMEELYZGUIECFIKFVMPBKBMIOFUVWMHYGXRHGKLZEQAEPMCJZNYAIGKVRNVJAEQSP");
    msg.text.assign("HEURZRTLVSEGWKNUBJQJWNXTKJFXDOQZRSWFHVMWPMLYHOWLPDRXETHDNJIPNFNLAUMQIWFKSEKXWGQGQALIBFQSFOIVRXBTPKBZMXLSAVWODUPCABUGYATUTCHYSEULDJYBJTQYDMRMMZQGEIRNVHYCYENTAGBFFAZUKEWZSKOHPNPHZHSZLHLMREJBPLCPGMCQVSVIYXVOSXDIGPGOTFXDMUOIUJWGQATNDCBEIYFCVKVCZRJIOC");

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
    msg.setTimeStamp(0.841824085346);
    msg.setSource(30539U);
    msg.setSourceEntity(157U);
    msg.setDestination(49058U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("LWVNUUPNNCCLMVIABTFZJGBWIMZSKHEWGZFTCJYUQNRYHEJIMSRQSVMWSODRTHHCBZITTUXWXDBGVDGTKSNMEJEOWRKMLOPAFSVUGXNQRKDVFNFJEIEGJNTUZSOORAKLXWDZTIZBLPLCMVTQCBPKEYMYYPVEQBAFG");
    msg.htime = 0.507798692638;
    msg.lat = 0.978447247363;
    msg.lon = 0.414576455449;
    const char tmp_msg_0[] = {-34, -124, 18, 77, -94, -34, -86, -10, 104, 109, -15, -6, 60, 95, -52, -100, 103, 87, 68, -112, -120, 77, -61, -31, 68, -76, 32, -70, 66, 108, 24, -95, -68, -66, 16, -98, -76, 104, -92, 116, 60, 26, -15, -51, -37, -1, -94, -8, 12, -25, -119, 1, 98, -37, -30, 52, -103, 42, 62, -127, -30, -63, -2, 91, -48, -72, -117, 13, 51, 110, 1, -86, -79, 42, 26, -26, 82, -24, -28, 90, 67, -108, 60, 61, -111, 110, -99, -75, 68, -95, -48, 76, 105, -125, 44, 101, 75, -70, -118, 94, 70, -25, 1, 55, -66, 34, 82, -63, 96, -105, 101, -94, 25, -32, 11, 12, -30, 122, -63, -92, 55, 94, 38, 77, 92, -64, 46, 108, 35, -111, 52, 56, 7, -48, -65, -38, 122, 74, 84, -31, -22, 7, 117, -107};
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
    msg.setTimeStamp(0.295422074187);
    msg.setSource(12263U);
    msg.setSourceEntity(133U);
    msg.setDestination(32202U);
    msg.setDestinationEntity(106U);
    msg.origin.assign("AHKUJXQXPWSPIHEOTIUHWWDWUDXFFURORABVMTHIFXEFYXKLFFWMZFGIKVSMQVGOIAEBTVIBVQ");
    msg.htime = 0.988012988956;
    msg.lat = 0.0620463024516;
    msg.lon = 0.484288851346;
    const char tmp_msg_0[] = {-99, -94, 32, -121, -89, -31, 6, 1, 33, 2, -85, 111, -128, 4, -26, -101, -31, 109, -127, -71, 63, -32, 68, 64, -88, -11, -45, -52, 37, 93, -29, -16, -25, 113, 4, 41, 43, 54, 34, 4, 4, -98, 63, -60, 115, -100, -16, 30, -89, -56, 124, -100, -35, 0, 18, 73, -20, -70, -117, 125, -6, -94, 65, 32, -95, 30, 69, -105, -109, -66, 49, -95, -119, -6, -81, -17, 33, -49, -47, -18, 71, -82, 9, 9, -26, -14, 70, -79, 83, 98, 96, -93, -96, 40, -6, -19, -8, 90, -112, -95, 21, -115, -76, -17, 14, -70, 71, -116, 37, 8, 42, -54, 82, 116, 19, -80, 40, -24, 35, -103, 65, -39, -25, -25, 16, 83, 53, 109, 117, 92, -61, 88, -44, 82, -7, 82, -70, -119, -74, -60, 25, 85, 27, 7, 17, -38, -43, -5, -87, 60, 112, -76, 65, -10, 63, 55, -66, 4, -8, 14, 54, -26, -39, -5, -120, -73, -112, 37, -53, -105, 40, -23, -32, 50, -96, 16, -29, 102, -70, -55, 28, 11, -64, 8, -105, -31, -76, 27, 121, 94, -21, 100, 55, -56, -109, -13, -67, 67, 108, -102, -108, 38, -3};
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
    msg.setTimeStamp(0.323979148777);
    msg.setSource(22726U);
    msg.setSourceEntity(187U);
    msg.setDestination(64611U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("RQWKCEZTITIOHIKAPURUVGIKANLYWNTVSNJLRPMKLXMRFJSHKBEQOLAYMRJSXAXJPARWHEBGXUDMXUWEJWMZFIKDR");
    msg.htime = 0.0937490641703;
    msg.lat = 0.993545138774;
    msg.lon = 0.323178538526;
    const char tmp_msg_0[] = {-37, -35, -121, 110, -78, -27, -73, -42, -75, -60, 3, -69, 91, -75, -33, 109, 13, -13, 50, -119, 3, -58, 90, -31, 80, -52, 53, 108, -108, -67, 24, 119, 67, 40, 87, 51, 116, 59, -5, 74, -3, -11, -51, 24, -55, 59, -40, -30, -102, 20, 88, 62, 70, 9, -45, -77, 68, 100, 26, -55, -36, 34, 109, 108, 40, -8, 101, 32, 109, -78, -97, 96, -30, -7, 105, 39, 23, -56, 111, -40, -80, 30, -92, -124, 45, 29, 124, -105, 21, -83, 75, 97, -52, -19, -55, -24, -127, 112, -79, 83, -20, 108, 81, -8, -44, 78, 64, -117, 32, -127, -22, 80, 59, 124, 29, 106, 101, 76, 112, -13, -100, -37, -60, 9, 113, -121, -127, 38, -35, -77, 45, -75, 76, 83, 115, 99, 2, 10, 79, 82, 72, 13, 59, 105, -62, -43, 12, -25, 57, 43, -33, -79, -10, 101, -12, -34, 31, 76, 72};
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
    msg.setTimeStamp(0.718554707948);
    msg.setSource(53088U);
    msg.setSourceEntity(216U);
    msg.setDestination(2364U);
    msg.setDestinationEntity(1U);
    msg.req_id = 30693U;
    msg.ttl = 52249U;
    msg.destination.assign("TSOGKVAPUPAZDZFJRUELSSBAOJGIWRRTGFNNIOVXUZQSVXFDXKUBQFVHWDLZHVDZRVQTVRPZJHYDMYTEBAEHMGWODQGGYAKSDYOOQHVMWRAYJU");
    const char tmp_msg_0[] = {7, -63, 43, 10, -43, -67, -57, 84, 95, 45, -43, -3, 26, -108, 1, -22, 88, 13, -39, -59, 115, -44, -22, 72, -111, -18, -121, 71, 40, 68, 115, -7, 75, 71, 50, -79, 117, 111, -29, 80, 70, 43, 93, 106, 61, -127, -66, -45, -41, 114, -94, 7, -117, -55, -66, -46, -35, -98, -126, 3, -54, -7, -25, -63, -110, 54, -19};
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
    msg.setTimeStamp(0.542661396145);
    msg.setSource(47678U);
    msg.setSourceEntity(119U);
    msg.setDestination(43363U);
    msg.setDestinationEntity(205U);
    msg.req_id = 24003U;
    msg.ttl = 57340U;
    msg.destination.assign("KTHFCQOPKBMDJWFXLCFCTSYDBB");
    const char tmp_msg_0[] = {-19, -78, -76, 57, 58, -37, 24, 69, -83, -123, -59, -1, -40, -70, -70, -111, 90, 62, -71, 61, -109, -50, 92, -26, -82, 97, 124, -45, -100, -72, -102, -87, 114, -31, 123, -94, -94, -22, -19, -25, 86, -71, -113, -111, 109, 15, -48, 35, -58, 20, 0, -1, -70, -88, -118, -56, -57, 12, 23, -17, 21, 44, 74, 13, -118, 5, -124, 85, 61, -69, -119, -60, -14, -10, -50, -29, -113, -9, 118, -42, -94, -1, -64, -1, 50, -2, -72, 108, -34, -46, 77, -90, -5, -55, -104, -91, -23, 63, -37, 62, -41, -28, 22, -21, 45, -41, 21, 30, -53, 27, 77, -51, 88, 24, -17, 39, -25, -16, -73, 55, -63, -50, -10, 20, 42, -40, 116, -31, -124, 94, 44, 72, 74, 11, 3, 14, -10, -62, -126, 13, -93, -39, -4, -60, -66, 32, 94, -18, -108, -126, 35, -96, 82, -13, 50};
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
    msg.setTimeStamp(0.0412278836016);
    msg.setSource(25777U);
    msg.setSourceEntity(69U);
    msg.setDestination(46652U);
    msg.setDestinationEntity(151U);
    msg.req_id = 15980U;
    msg.ttl = 21254U;
    msg.destination.assign("UORNFRFXNCJKIVZDWHQBEPBPMIGZUCGEBYJQQACLBHLVRVOTIDIYAMOZURWMOAZAZAVMYSBPQFCAWSF");
    const char tmp_msg_0[] = {63, 71, -116, 16, -36, -24, 27, -66, 62, 100, -55, -43, -30, 45, -125, -93, 92, 88, 15, 49, -58, -30, 2, 116, -4, 73, 51, -113, 100, 62, -127, 36, 78, -49, 52, -16, -50, -15, -113, -51, 17, -1, -53, -29, 29, 55, 35, -16, -98, -71, 4, -3, -76, 14, -118, 105, 122, -29, -20, 11, -70, -81, -124, -110, 113, -18, 23, 7, 2, -120, 25, -126, -97, -87, 100, 126, -46, 35, -3, 59, -86, 121, 30, -104, 30, -126, 98, -88, -107, -55, 40, -95, -58, -87, -51, 79, 26, -102, -36, 97, -42, -81, 77, -93, 70, -67, 77, 72, 124, -123, 51, 73, 75, 94, -125, 80, 87, -77, 59, -66, 55, -83, -10, -10, 43, -100, -112, -66, 105, -88, -55, 7, 9, -78, 67, -15, 109, 46, -53, 93, 58, 105, 66, 112, -63, 64, -103, -13, 62, -120, 4, -106, 122, -94, -75, 34, -55, 51, 77, -86, 30, 37, -28, 28, 43, 104, -5, -34, 0, 51, 113, 97, 98, 37, 98, -128, -126, -124, -123, 13, 37, 28, 86, -11, -37, -95, -27, -66, 102, 26, -42, 58, 86, -64, -75, -39, -15, -43, -31, 21, -119, 5, 16, -21, 68, -31, 50, -41, 17, -84, -92, 69, -3, 78, 72, -55, -127, -12, -84, -34, -16, 2, 17, 42, 94};
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
    msg.setTimeStamp(0.298530780517);
    msg.setSource(21367U);
    msg.setSourceEntity(125U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(244U);
    msg.req_id = 55648U;
    msg.status = 0U;
    msg.text.assign("ZGHRWQIRBPPWVSZAQTTBGQCYINRXFIMGKPJDXFIVWREYVLQGIFLTYYPQTBOKBNDAAZGSENVWEGATOWKYCHHNUDXLQDLFKMRJIVANEMJEJJNUZOUAISDBTGLWKJFPHPKUAVZOKUBYNFQZOMRYKYBULPODPYUTLHBFKEHZCLMCMGCECTSWBZCVEWXCUHSULRCVEHTIFDXJRNMPGEOQXAMABQOO");

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
    msg.setTimeStamp(0.917255242464);
    msg.setSource(8719U);
    msg.setSourceEntity(36U);
    msg.setDestination(8837U);
    msg.setDestinationEntity(212U);
    msg.req_id = 34909U;
    msg.status = 208U;
    msg.text.assign("FTIBQBLICQSFVUVCAZGQDRCIWFGBWGWJWKIMLBJLGCTXIBJILCQOHMASIGTVDDOSLHPBSVYOEQEFWTUBAYCDYZUDIDVDLUPAQHKXAEVZZYKTCJLMCNHRIXNKCQRMEIPPFHFOYLHUGRZTJWY");

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
    msg.setTimeStamp(0.430340302252);
    msg.setSource(12290U);
    msg.setSourceEntity(22U);
    msg.setDestination(26132U);
    msg.setDestinationEntity(123U);
    msg.req_id = 25456U;
    msg.status = 218U;
    msg.text.assign("RZSUQXSKFIRCNLEESSHZFZGVOTHIWHRUBYZMZASTZEYDAUZOJZVMCMQKTAFTGVQKDBYTYRROSPRDPRPBYXPQAWHQVENIQQEZGLYUDWBELUTBPOMXILK");

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
    msg.setTimeStamp(0.480574480073);
    msg.setSource(31070U);
    msg.setSourceEntity(173U);
    msg.setDestination(13634U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("MDQMBFZDZBPOMEMFCQISCGTCVVZVRMAUOMTJGXASYXSMYEASELYSVNOHEHKUNRNYUIYJJKBOTIIWEILOAWWRXAIKUSNTELPNCQPVKTUXXBXXDGRFNIFTRTWFPA");
    msg.links = 2536244403U;

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
    msg.setTimeStamp(0.286387691582);
    msg.setSource(56354U);
    msg.setSourceEntity(85U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("BUSPHRXULJPBAPERJCHTUIVDMBWGYXBHFSKNBSDCDROXKNREXFKBQXBFFVZRKYDGRDMWLUIJYHIOLSSCNHZWSJGAQZKLGAXLIQNBYLUWYCXPIPKJLUPGS");
    msg.links = 3331617582U;

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
    msg.setTimeStamp(0.458958041114);
    msg.setSource(36921U);
    msg.setSourceEntity(19U);
    msg.setDestination(7202U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("HMDRLQKTYFXIXEUPWQRKUFTMYNANAIQBQOBSZGBVEKGVXTYQTNMEZHSBQHPAMDEJHPYETYCIGWOJJNWTCDVGFFUGHVHLTAICFLXPSBVYXCOYWCUFLZXJXEGJBVRWMIUMDKYNORDTVDRVQBGREVQLKMWDKSSFCMFPXGZRBLBZHYZAIHUXUDDPJNUSOGSKQQSZWJPAPOTHITUN");
    msg.links = 2484758830U;

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
    msg.setTimeStamp(0.663208714015);
    msg.setSource(4536U);
    msg.setSourceEntity(84U);
    msg.setDestination(19807U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("ERBJAITGTPLAXTOQCLWALWC");
    msg.action = 6U;
    msg.grouplist.assign("SMSZCJWKPOCJTWHCRCIJENWTSJRJLRPMRLYQXNZRWDTMWHKOCDYUNNCSAIPWLRSZFYJOXUZNGODHVKFREDLPOAVXFSFOHDQARDNXBMZBYTAFICGUYAFMCFPVUGUSGABUVUQVODIQKSXGP");

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
    msg.setTimeStamp(0.21000740607);
    msg.setSource(22686U);
    msg.setSourceEntity(93U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(202U);
    msg.groupname.assign("FZFZFXJLAKNWOBQTVYPIZOJEDEDMMAEWVLNKQULTSKUSYFICPTCYBONNHWOSEBUCGXRTKJWLEOBTNNSAKCIIVHQNMDCMSTPBSGIYOLRYVIJURABPXWVHUCUGVXTEHPKVJBLELPOSIQRGNZSDDWXHBDNGMOQPXFGQZBJFMADEZFORRJACCUEARFLWSPVLAUVGQJWJOMGVEGZFWQNGBIRZKWMXIHYSTUXYHFHTP");
    msg.action = 206U;
    msg.grouplist.assign("TKWSBVKZWKOJEKMWJOLFFFHFPAHLGJTMZGZFBROTABMZSJBIYEHHZEMGYALUQILLSQNSXHYQWSBHBJLCCUZEFQCWRWCPYVGPSWVMAVGOJHVSDAEPNIPQYAFZAPOGAVRHNDXVKYPMZULWCEUZUTXJGOTPOKYN");

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
    msg.setTimeStamp(0.340534927922);
    msg.setSource(38985U);
    msg.setSourceEntity(173U);
    msg.setDestination(11893U);
    msg.setDestinationEntity(45U);
    msg.groupname.assign("CLUJQBECBJNLRITXPMZEQSOBEDYZHEHMEQGOXVYFHOTOPEDKRKTNTUHMLPVMAWUWWYIPJQMGPSDZARAFHYDIARKVTRNOELSAMGURCJMYWFBCYBCWUHB");
    msg.action = 131U;
    msg.grouplist.assign("WVPJURBFTFEEWK");

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
    msg.setTimeStamp(0.411679668511);
    msg.setSource(55417U);
    msg.setSourceEntity(61U);
    msg.setDestination(41457U);
    msg.setDestinationEntity(139U);
    msg.value = 0.807087195102;
    msg.sys_src = 2694U;

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
    msg.setTimeStamp(0.385758929193);
    msg.setSource(57154U);
    msg.setSourceEntity(229U);
    msg.setDestination(35581U);
    msg.setDestinationEntity(48U);
    msg.value = 0.528699407535;
    msg.sys_src = 54335U;

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
    msg.setTimeStamp(0.672185024815);
    msg.setSource(11999U);
    msg.setSourceEntity(62U);
    msg.setDestination(43697U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0878933889486;
    msg.sys_src = 30826U;

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
    msg.setTimeStamp(0.813630682096);
    msg.setSource(56079U);
    msg.setSourceEntity(173U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(109U);
    msg.value = 0.757368783275;
    msg.units = 52U;

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
    msg.setTimeStamp(0.756248434127);
    msg.setSource(54984U);
    msg.setSourceEntity(137U);
    msg.setDestination(48221U);
    msg.setDestinationEntity(5U);
    msg.value = 0.332458127068;
    msg.units = 132U;

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
    msg.setTimeStamp(0.903187442284);
    msg.setSource(16022U);
    msg.setSourceEntity(1U);
    msg.setDestination(55589U);
    msg.setDestinationEntity(112U);
    msg.value = 0.186612265251;
    msg.units = 26U;

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
    msg.setTimeStamp(0.560801420807);
    msg.setSource(39230U);
    msg.setSourceEntity(109U);
    msg.setDestination(22013U);
    msg.setDestinationEntity(161U);
    msg.base_lat = 0.0829065427356;
    msg.base_lon = 0.918312507172;
    msg.base_time = 0.625687250794;

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
    msg.setTimeStamp(0.547569319375);
    msg.setSource(41320U);
    msg.setSourceEntity(76U);
    msg.setDestination(38374U);
    msg.setDestinationEntity(33U);
    msg.base_lat = 0.424860600298;
    msg.base_lon = 0.0672207410194;
    msg.base_time = 0.405467631474;

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
    msg.setTimeStamp(0.767692931924);
    msg.setSource(3762U);
    msg.setSourceEntity(171U);
    msg.setDestination(7207U);
    msg.setDestinationEntity(103U);
    msg.base_lat = 0.868256041014;
    msg.base_lon = 0.588969707528;
    msg.base_time = 0.0540647880835;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 41056U;
    tmp_msg_0.destination = 7137U;
    tmp_msg_0.timeout = 0.62725172844;
    IMC::AlignmentState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 79U;
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
    msg.setTimeStamp(0.0260834262353);
    msg.setSource(46681U);
    msg.setSourceEntity(72U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(2U);
    msg.base_lat = 0.867298198845;
    msg.base_lon = 0.674758718536;
    msg.base_time = 0.457922633294;
    const char tmp_msg_0[] = {-127, 123, 46, -50, -73, -12, -9, 81, -14, -116, -77, -90, 22, 125, -38, -51, -33, 110, -113, -36, -126, -100, -73, 115, -82, -81, 37, -70, -24, -76, 15, 41, 34, 31, -18, 74, 74, 71, -109, -35, -57, 116, 124, -109, 44, -52, -60, 28, -10, 89, 18, 118, 86, 50, 116, 76, 24, 0, 76, 51, -5, -27, 98, -98, -98, -26, 1, -71, 126, -24, -123, 106, 81, 1, -64, 125, -81, -99, -115, -119, 86, 71, -50, -24, -105, -127, -51, 52, 112, -77, -83, 14, -54, 41, -96, -43, -70, -127, 103, 111, 121, -38, -112, -27, -106, -39, -57, -31, -67, 50, 79, 55, -87, 8, -102, 105, -110, -97, -76, -31, 124, 87, -3, -59, -69, 29, 50, -51, -2, -102, 83, 8, -4, 74, 80, 111, -8, 1, -101, 0, -91, 58, 44, 3, -27, 58, -25, 12, -23, 71, -54, -66, 79, 126, 119, 63, -67, -29, 42, -62, 1, -54, -98, 99, -54, -44, 97, -47, 122, 3, -95, -7, -23, 21, -81, 120, -82, -112, -48, 92, -123, 107, -64, 113, 52, -3, -17, 86, 13, 92, 108, -64, -27, 72, -11, 63, -112, 59, -80, 53, -36, 55, 68, 29, 5, -106, -48, -35, -26, 104, -73, 123, -68, 21, 95, -60, -31, -117, 27, 36, 98, 17, -63, 8, 8, 106, -114, 58, -1, -119, 78, 2, 35, 122, -7, -87, -115, 110, 59, 70, -104, 103, -13, 20, 101, 112, 103, 77, -17, -98, 98, -27, -4};
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
    msg.setTimeStamp(0.936542950347);
    msg.setSource(55484U);
    msg.setSourceEntity(130U);
    msg.setDestination(30283U);
    msg.setDestinationEntity(177U);
    msg.base_lat = 0.962031989953;
    msg.base_lon = 0.544170660787;
    msg.base_time = 0.777225050518;
    const char tmp_msg_0[] = {114, 112, -30, -13, -122, 5, 40, 66, 75, -27, -26, 124, -22, -47, 99, -86, -94, -8, -98, -58, 16, -122, 0, 114, -124, 102, -81, -101, 2, 31, 124, -28, -104, 100, -30, 114, 114, 60, 5, 61, -85, -27, -8, 94, -70, -63, 113, 81, -50, 125, 77, -9, 56, 3, 10, 90, -60, -62, -97, 81, 78, -49, -15, 94, 119, -38, -30, 30, 61, 28, 2, 45, -54, -34, 69, 83, -116, -77, -113, -100, -124, 97, 59, -70, -111, 35, -29, 80, -52, 82, -35, -14, -44, -42, 2, 105, 1, -27, -66, -35, -1, 114, 16, 106, 99, -76, -98, 29, -122, -73, 70, 106, -80, 33, -32, -27, -118, 54, 86, -118, -30, -74, -90, 88, 106, -29, 103, -52, 54, 29, 74, 98, 8, -43, 87, 107, 96, -72, -71, -17, -49, -122, -22, 89, -104, -39, 39, 97, -2, 82, -100, -70, 89, -38, -40, -81, 50, 56, -36, -27, -41, 10, -81, -121, 73, -124, 51, 64, 14, 84, -71, -47, -91, -106, 117, -21, 96, -98, -12, 11, -110, -125, 82, -73, 47, -59, -68, -53, -55, 15, 120, -53, -39, 85, 5, -41, -6, 13, 63, 118, -57, 55, -117, 36, 62, -116, -19, -84, -52, 106, 27, -36, 112, -79, -107, -62};
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
    msg.setTimeStamp(0.175797179564);
    msg.setSource(40356U);
    msg.setSourceEntity(62U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(143U);
    msg.base_lat = 0.373900982383;
    msg.base_lon = 0.832978385086;
    msg.base_time = 0.139947282146;
    const char tmp_msg_0[] = {-53, 39, -79, 44, -116, -22, 1, 40, -53, -58, -99, 2, -84, 84, -33, -64, -49, -95, -103};
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
    msg.setTimeStamp(0.398496683375);
    msg.setSource(1606U);
    msg.setSourceEntity(61U);
    msg.setDestination(25838U);
    msg.setDestinationEntity(200U);
    msg.sys_id = 22100U;
    msg.priority = 66;
    msg.x = -238;
    msg.y = 28722;
    msg.z = 8774;
    msg.t = -20878;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 27518U;
    tmp_msg_0.lat = 0.464069477185;
    tmp_msg_0.lon = 0.880239982446;
    tmp_msg_0.z = 0.258414609772;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.254173325312;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.custom.assign("TMLHNLRSVZEOGRALVSNZHIBZSBGCQKNNUKWMKRYCJAGAAXIRTUBPRXDXEBNWXEOYODITNCJHQMIWMWCTHIMUHQNMWYKIFYHOCEDSJDEPZYDZWPSWOLBGKJZVJIYKZNVQDUVPEEVOHKOPFMPUJCZXIVLZGYXAQRPWRMATFTFQS");
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
    msg.setTimeStamp(0.0094313464125);
    msg.setSource(29831U);
    msg.setSourceEntity(220U);
    msg.setDestination(33647U);
    msg.setDestinationEntity(85U);
    msg.sys_id = 34558U;
    msg.priority = 114;
    msg.x = 17012;
    msg.y = -19581;
    msg.z = 27231;
    msg.t = -4472;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("NLYRFQJSLDZTQEDINZTTMJMILOSVSZSQPZFZJRLVFAGOSHJHBCHSWKPXADAPNNMUNVQAOJZXXCUDOUORTMZCPROCCYVICFKJOUKMXBMHMXVPWITDGGURSZZESLQVXQYCGQNCKFYJNEDDBXKOQVNU");
    tmp_msg_0.message_id = 65278U;
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
    msg.setTimeStamp(0.892796340337);
    msg.setSource(20364U);
    msg.setSourceEntity(203U);
    msg.setDestination(59950U);
    msg.setDestinationEntity(95U);
    msg.sys_id = 57226U;
    msg.priority = -53;
    msg.x = 8747;
    msg.y = -32761;
    msg.z = 18854;
    msg.t = -23121;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("NZVATFKIVAYKITRKQLATKDAXGJHVADXOUPE");
    tmp_msg_0.type = 65U;
    tmp_msg_0.properties = 2U;
    tmp_msg_0.durations.assign("EVDDCNXRARHGAOGTZVLVEBFUTPHVUELVBKIJNDCPZRZAVYIHJMHQGAZXMPHGLDUJNKKUZJZQWAXJMQPIMNOSBYLFMEPCFUQXXGOWGGTREDXQLEYLJSOVTWVRQPEFKCNRYISBJSFCUYIMBCYODHJUDBXMCORQPSYWINQGWLSKWWWVZVNRBIXDRWNTYJXHTATKOJUGSOCUKLDWXISPNKKTPYSEALTZAMBIQP");
    tmp_msg_0.distances.assign("ZPRIUQYFQZCADRBERFPWAMKIKMTLJUYBTVMBHEWVEDQNFMAKGMMXUIWLXOAKKDHUXPPSHIZNTKPIRX");
    tmp_msg_0.actions.assign("BTVAWMVZHEFHIANOICXVBLCSHNVBRZSBMMIXIKAGHQCNRYTUMFYPJMDRDOJBYRFOSFMAWZFXUCTIWZIUGQOMGBLHIGAGQTOYJEHKEWAVSHQGKPRWKGEREPXNQNEXIFXOEUDZBLWCUDXATKQZDSKLISIGJZBDYSHSAFXTWPKVZJTEDNRXWUJ");
    tmp_msg_0.fuel.assign("REVIDMATKJFJQFSFKKBYQVDFHWTFEPHLCAQJJXCFSWMZRDRKJZEVSDTTUMXRDPSBHUNMUQVGUYPNICBYRHOUWGASXTWGVKLHOEZWTCQZXLQOYJLZEBBCKYZGMTEGMGXQYEPMOGEUNUNABSKFLANIXNNUJZYZ");
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
    msg.setTimeStamp(0.884033507644);
    msg.setSource(20648U);
    msg.setSourceEntity(248U);
    msg.setDestination(18907U);
    msg.setDestinationEntity(30U);
    msg.req_id = 40712U;
    msg.type = 109U;
    msg.max_size = 41921U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.953153716449;
    tmp_msg_0.base_lon = 0.0212244173522;
    tmp_msg_0.base_time = 0.479064975121;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 61405U;
    tmp_tmp_msg_0_0.destination = 23917U;
    tmp_tmp_msg_0_0.timeout = 0.31093448189;
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.0775238596977);
    msg.setSource(1780U);
    msg.setSourceEntity(181U);
    msg.setDestination(31721U);
    msg.setDestinationEntity(82U);
    msg.req_id = 749U;
    msg.type = 216U;
    msg.max_size = 24657U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.908424808365;
    tmp_msg_0.base_lon = 0.530306980278;
    tmp_msg_0.base_time = 0.743173516737;
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
    msg.setTimeStamp(0.954005363934);
    msg.setSource(41950U);
    msg.setSourceEntity(192U);
    msg.setDestination(1047U);
    msg.setDestinationEntity(227U);
    msg.req_id = 16993U;
    msg.type = 209U;
    msg.max_size = 1236U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.299095527845;
    tmp_msg_0.base_lon = 0.131709843833;
    tmp_msg_0.base_time = 0.478711719112;
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
    msg.setTimeStamp(0.62425600799);
    msg.setSource(6724U);
    msg.setSourceEntity(22U);
    msg.setDestination(61417U);
    msg.setDestinationEntity(13U);
    msg.original_source = 56530U;
    msg.destination = 27170U;
    msg.timeout = 0.852112319438;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.995311062442;
    tmp_msg_0.lon = 0.840802365683;
    tmp_msg_0.z = 0.859199476274;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.speed = 0.734646075269;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.takeoff_pitch = 0.730374946395;
    tmp_msg_0.custom.assign("OIPZRHTIIWVKZZTAAMKSXXWCGGXVTUHAHACFHVPFNKAYXFXSSJTFOBLVWNZBADJPEQBBJCETCCWRTUHDSMZBOLJMTESVQAFURFLHWBOIPIUOYXPJMQYCUCZFLUIQB");
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
    msg.setTimeStamp(0.0382797040413);
    msg.setSource(24405U);
    msg.setSourceEntity(72U);
    msg.setDestination(28952U);
    msg.setDestinationEntity(0U);
    msg.original_source = 17153U;
    msg.destination = 37286U;
    msg.timeout = 0.643498653858;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.558740327108;
    tmp_msg_0.reason = 237U;
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
    msg.setTimeStamp(0.0490743468571);
    msg.setSource(59795U);
    msg.setSourceEntity(26U);
    msg.setDestination(23005U);
    msg.setDestinationEntity(123U);
    msg.original_source = 52053U;
    msg.destination = 15519U;
    msg.timeout = 0.109588495222;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 203U;
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
    msg.setTimeStamp(0.411492012629);
    msg.setSource(45200U);
    msg.setSourceEntity(70U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(249U);
    msg.id = 124U;
    msg.range = 0.0313828973629;

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
    msg.setTimeStamp(0.115499033492);
    msg.setSource(5613U);
    msg.setSourceEntity(42U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(93U);
    msg.id = 55U;
    msg.range = 0.333865346617;

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
    msg.setTimeStamp(0.634989133179);
    msg.setSource(18520U);
    msg.setSourceEntity(33U);
    msg.setDestination(65223U);
    msg.setDestinationEntity(129U);
    msg.id = 135U;
    msg.range = 0.405213366388;

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
    msg.setTimeStamp(0.104828439943);
    msg.setSource(21128U);
    msg.setSourceEntity(17U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("TFAEONIZDNJEYVZWEMXRPEKBQNGKLAMHODPCBIDEXCRSLFRTZHBEYTQLWNZJAHZTTCYMRSIIQECUEXABBNULAZMIYJFRXVRCXAKFDMUOZUWVHTVCKLBOFDSC");
    msg.lat = 0.0316512574569;
    msg.lon = 0.286847666757;
    msg.depth = 0.267419348397;
    msg.query_channel = 82U;
    msg.reply_channel = 207U;
    msg.transponder_delay = 30U;

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
    msg.setTimeStamp(0.839210918722);
    msg.setSource(24899U);
    msg.setSourceEntity(197U);
    msg.setDestination(7501U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("NSNDBZFTMWUVQSYKOBYLWWBAEWKJPHHAKEHJBFUZGDAKSTASEJRIMOXLBEETQNIB");
    msg.lat = 0.490950732673;
    msg.lon = 0.144483329152;
    msg.depth = 0.612546986654;
    msg.query_channel = 210U;
    msg.reply_channel = 163U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.166158532535);
    msg.setSource(19119U);
    msg.setSourceEntity(230U);
    msg.setDestination(33764U);
    msg.setDestinationEntity(34U);
    msg.beacon.assign("NBXSALXMXJUYLGOCAITZMKAODUFJWKRDJCPWOEFLRIGRVLKVRGNHFWRNZAWEANEJIJJHXQUHVUFOHOCOBAZHFPSPGECPXMYCVCETHWZCTSNPJFDDMYNWYKFDZHBGQZBSFDQQPYDZCEQPKMYSKSMWENISIOUDOJVBRIVVDOGTXMMXQHG");
    msg.lat = 0.533935163542;
    msg.lon = 0.889912260553;
    msg.depth = 0.469222737621;
    msg.query_channel = 240U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 241U;

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
    msg.setTimeStamp(0.070750159046);
    msg.setSource(64000U);
    msg.setSourceEntity(35U);
    msg.setDestination(3787U);
    msg.setDestinationEntity(154U);
    msg.op = 226U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MLVIYRBSUDZUWZFGCHTPXEHNDMQOXKAUNTSEKESRMQAOBTREWCKJQQYJYADEGMGOGBIJNUINWMUMTGOVRHYAHKJJZZOHWLQYUDSHBZPWWTLXRRCUVFLOVEMLXWCYVDFPCLIGMQAVBGKZDYTXECCAKUTYQHKKBNPEMSXXNZBPJLRVYTIQXNGOKUAACRIIPZYFOUSG");
    tmp_msg_0.lat = 0.162028459666;
    tmp_msg_0.lon = 0.133110490508;
    tmp_msg_0.depth = 0.723490582821;
    tmp_msg_0.query_channel = 80U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 181U;
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
    msg.setTimeStamp(0.936967651178);
    msg.setSource(53155U);
    msg.setSourceEntity(96U);
    msg.setDestination(27097U);
    msg.setDestinationEntity(77U);
    msg.op = 1U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZJGEXRREHHQYMLDRAGBKSZPEEDOKXZDXKPQCLLQJXRUXVIFNDTWTCPYCTLXVKYQSWNCDFIQGPEWEDAEQIJRZHGQ");
    tmp_msg_0.lat = 0.801549591305;
    tmp_msg_0.lon = 0.569096024018;
    tmp_msg_0.depth = 0.0328357700442;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 243U;
    tmp_msg_0.transponder_delay = 17U;
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
    msg.setTimeStamp(0.395531269287);
    msg.setSource(2382U);
    msg.setSourceEntity(33U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(198U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.595950149172);
    msg.setSource(36333U);
    msg.setSourceEntity(30U);
    msg.setDestination(22808U);
    msg.setDestinationEntity(9U);
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("CYQLZGCNHVXOHRLUWCZCDKPGKJKYJRRXQGUDPVAZRZFEGSBGFVMWJBRTCGRLPFZJDNUVIJUPCRETAEZGWWAFQSKXPMOIETLYDFQZJHTIXCYWUWYTKLFHHSFIRHMJKBJTVOLNUXOSHOAXNLMXZOCQAULSFSMJRYVEQGBVXYBAPADPCWDKFSINBBJUFW");
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
    msg.setTimeStamp(0.00966414458588);
    msg.setSource(35589U);
    msg.setSourceEntity(237U);
    msg.setDestination(46745U);
    msg.setDestinationEntity(131U);
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IMRYOUBEICCYKEMRBVDJTNZAEAWGRQENGQCJKFXMDGFFIODKRLQOGFYGQSLJHRVIPKHYFMGQZNWTXDUTUPAHVLIOHATTPXHEBTSDCOYKAQAWDIECPBSPLBHDEKNAUZBHNFOMMQQPTSLFALIDISVWMWKCWVSPOVROHZZQYPELMJCMXVSZFTOZCXJFKPAULHBJXXSINTQZWNCETDLNXZBXUJJHSUZNRNJRYEBYGPRAULVVKJCGYXWMDRG");
    tmp_msg_0.attr_type = 236U;
    tmp_msg_0.min.assign("AIUSATSPRQLGEZIMMXLOKQFYVOPRKKXUJRGNCHXAEVMNXVGSLGPNIWLOJDAQEOOFJYMGTALBGS");
    tmp_msg_0.max.assign("XZQBFGPEGNYARRJDSEXNCYAPAVFBTMKWOOPIJCAEMWQVJIXNZKKOHOYGMOTIGMHYWFXPMVDEQGUMHADIRQVWVABLSOXAJTIDQYUIUNROSGNMPFTQCKSTAVPGZKHIIJUYCTIRGWBBHAPFMTUDFUBNOQEDWREKJROCHLYHWSKDEQKXZMMHSZCCDEBFLFNCLTVVYXUWLTYFNSLSZVLE");
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
    msg.setTimeStamp(0.645072099513);
    msg.setSource(59250U);
    msg.setSourceEntity(53U);
    msg.setDestination(7510U);
    msg.setDestinationEntity(23U);
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 102U;
    tmp_msg_0.op = 37U;
    tmp_msg_0.possimerr = 0.156876908928;
    tmp_msg_0.converg = 0.498946665481;
    tmp_msg_0.turbulence = 0.566510219371;
    tmp_msg_0.possimmon = 254U;
    tmp_msg_0.commmon = 11U;
    tmp_msg_0.convergmon = 115U;
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
    msg.setTimeStamp(0.850074773075);
    msg.setSource(28542U);
    msg.setSourceEntity(11U);
    msg.setDestination(24416U);
    msg.setDestinationEntity(105U);
    msg.op = 172U;
    msg.system.assign("LOIOAMBZSXGLUGXLTHGR");
    msg.range = 0.27123930276;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1513828308U;
    tmp_msg_0.start_lat = 0.145321544575;
    tmp_msg_0.start_lon = 0.593473314882;
    tmp_msg_0.start_z = 0.910403444808;
    tmp_msg_0.start_z_units = 247U;
    tmp_msg_0.end_lat = 0.745032224694;
    tmp_msg_0.end_lon = 0.679408206818;
    tmp_msg_0.end_z = 0.798842009094;
    tmp_msg_0.end_z_units = 38U;
    tmp_msg_0.speed = 0.799036309759;
    tmp_msg_0.speed_units = 227U;
    tmp_msg_0.lradius = 0.602229826112;
    tmp_msg_0.flags = 201U;
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
    msg.setTimeStamp(0.455712283272);
    msg.setSource(14980U);
    msg.setSourceEntity(153U);
    msg.setDestination(25391U);
    msg.setDestinationEntity(184U);
    msg.op = 156U;
    msg.system.assign("EVIUDVKDVKNDAKXMGMPMJBTBTZASAJQCRSBRCBJYPHOIXXXFWOBFVQGANVXDMOTPZNZLEKFOWADP");
    msg.range = 0.650754720659;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 83U;
    tmp_msg_0.id.assign("GLIALPFOHXNXSPDABHJYFTRAIDCAJYAVBCTHOKMESFNXQEGSLSHZBLRDOCNVPYHUFJSHJCXJNLVQCGRCTKZUEPXYKGTIWMFQLOUOSEKIKWMUXYRZNWMWVJQEJKEHJNPZIISGRTOQHVAUVYCXBBIGVRJKHAZZONETMZKDCCLZDVDMGFOYBQMPPTKGVBDMNUWAKXBPUCTUDNRWZEWJQZMBREPFQDDF");
    IMC::EntityState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 209U;
    tmp_tmp_msg_0_0.flags = 190U;
    tmp_tmp_msg_0_0.description.assign("LMTNPFAPXHPESHTGMVJAVGPTQBMCTINQSGKGNHJQVPCHBQNLOSYBRVMZRQKEPZNQTJLTJALZRDSTVSSPKRZRCOGOJFKYOCCXHOBOYBCLWBBZGFIMFNBNQSZUMGRNIVEGAPWOEVYQITMHDXZWXRUODWRZKELYAEGCDLICJEXSOHXCLFIGUUJFLBXBUZPAJYDXCUFALIEKNTFUKAHSKDMVWYJIDAVRARYMMWKUXWIXSOHKUDDVEHF");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.568834502138);
    msg.setSource(45376U);
    msg.setSourceEntity(219U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(49U);
    msg.op = 94U;
    msg.system.assign("HMAQSAOZNLGLEAAVQDLCFDOPAYICUUZFBOUNSWRFSKTFFBIIWFZMGCQPCYAJURMTENLJYJXOJHOYGDINUIVTXVVGBXVBGLDCU");
    msg.range = 0.347336540209;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.6428169029);
    msg.setSource(35929U);
    msg.setSourceEntity(87U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.957507140832);
    msg.setSource(19649U);
    msg.setSourceEntity(169U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.482298117871);
    msg.setSource(33417U);
    msg.setSourceEntity(0U);
    msg.setDestination(20734U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.2118473598);
    msg.setSource(9290U);
    msg.setSourceEntity(159U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(220U);
    msg.list.assign("HKNPORAYTZXLGQJPQURVXZYRMBHTCKESOTPAVYPJRNYDULIMPMEGNEFUXCYWDTDCIEDALGAZOAXENIMOUIRXJWHZQJRZCRPBKWHNZTVQVCZFJXXWMCMNICVXLPQZLFPGVHOI");

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
    msg.setTimeStamp(0.699627950576);
    msg.setSource(18374U);
    msg.setSourceEntity(71U);
    msg.setDestination(460U);
    msg.setDestinationEntity(72U);
    msg.list.assign("ZNVLIYOAKVZCJNYSQXLRLGQIXWLNLJWBXDCPPSGTTEERBZWWTDYHAGFIIMXQ");

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
    msg.setTimeStamp(0.361770543153);
    msg.setSource(35441U);
    msg.setSourceEntity(42U);
    msg.setDestination(22374U);
    msg.setDestinationEntity(84U);
    msg.list.assign("CIEZFHVYNDVPMVVSKKNKRKKFLRNMCLHVVSCYHAYMTLDWDTINXXSTRSPWTTSPWUGHWPEPYLWBMOJJGGEURFSOYJRNKJJXUPVOCTIRBLIQCOIUOYELXXTDDAMMRBVYHDOLGYIDZGIUUFKZWNNJBFEDFSPJFHMDMNCRZESXCQAWUBJIECYXANEFWZQOTUREQBLHLUOWMQTVQHGJZAQCFXJTCAKRXGKGPZLMSV");

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
    msg.setTimeStamp(0.457785448905);
    msg.setSource(56259U);
    msg.setSourceEntity(203U);
    msg.setDestination(35866U);
    msg.setDestinationEntity(243U);
    msg.peer.assign("TNJCTCJAUPCXKJNWAVOAESMKDTFFBUZPZDRWZQOYXRWYUESENTGUVEYSXRMIDGETVQKAVLOL");
    msg.rssi = 0.682723110269;
    msg.integrity = 38929U;

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
    msg.setTimeStamp(0.0229770594329);
    msg.setSource(10529U);
    msg.setSourceEntity(157U);
    msg.setDestination(33457U);
    msg.setDestinationEntity(218U);
    msg.peer.assign("RSFVKFOFOTJRCQMPVAHYLMKKPSZBHCFZKNPDYUTIBRLNMOOXOEFXOLZXZYTXLZQTGSTSZFWPHARGDTHPFDBDDHNUCVGSWQZJ");
    msg.rssi = 0.717940620134;
    msg.integrity = 44002U;

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
    msg.setTimeStamp(0.221498073941);
    msg.setSource(4189U);
    msg.setSourceEntity(211U);
    msg.setDestination(10287U);
    msg.setDestinationEntity(35U);
    msg.peer.assign("LYSXFOUALAZBJMMSEJUSPITVYQICQNSEPKSMKDZUUENIHWJLLOEEANIKDEMUPUXGWUCPLHBEYDVRLSHLNURRVFCZKINMWFEHIIFNNHVICKKGZBXQDVWOGBOPOXRAJVJIJD");
    msg.rssi = 0.572706680081;
    msg.integrity = 7622U;

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
    msg.setTimeStamp(0.947554403458);
    msg.setSource(50830U);
    msg.setSourceEntity(25U);
    msg.setDestination(27154U);
    msg.setDestinationEntity(211U);
    msg.value = -11861;

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
    msg.setTimeStamp(0.88175058436);
    msg.setSource(46101U);
    msg.setSourceEntity(8U);
    msg.setDestination(20877U);
    msg.setDestinationEntity(146U);
    msg.value = 12013;

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
    msg.setTimeStamp(0.407879347314);
    msg.setSource(12553U);
    msg.setSourceEntity(113U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(30U);
    msg.value = -24873;

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
    msg.setTimeStamp(0.305069347934);
    msg.setSource(54193U);
    msg.setSourceEntity(152U);
    msg.setDestination(58186U);
    msg.setDestinationEntity(109U);
    msg.value = 0.818377017161;

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
    msg.setTimeStamp(0.176246129662);
    msg.setSource(49672U);
    msg.setSourceEntity(127U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(183U);
    msg.value = 0.733785896292;

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
    msg.setTimeStamp(0.985771100016);
    msg.setSource(22208U);
    msg.setSourceEntity(128U);
    msg.setDestination(60827U);
    msg.setDestinationEntity(64U);
    msg.value = 0.848358873917;

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
    msg.setTimeStamp(0.4187299884);
    msg.setSource(22555U);
    msg.setSourceEntity(140U);
    msg.setDestination(14249U);
    msg.setDestinationEntity(114U);
    msg.value = 0.0172753271608;

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
    msg.setTimeStamp(0.08744756476);
    msg.setSource(50912U);
    msg.setSourceEntity(144U);
    msg.setDestination(7713U);
    msg.setDestinationEntity(86U);
    msg.value = 0.745665839386;

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
    msg.setTimeStamp(0.0385790260064);
    msg.setSource(14592U);
    msg.setSourceEntity(157U);
    msg.setDestination(31350U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0858478921515;

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
    msg.setTimeStamp(0.140628019301);
    msg.setSource(26716U);
    msg.setSourceEntity(139U);
    msg.setDestination(15713U);
    msg.setDestinationEntity(189U);
    msg.validity = 2454U;
    msg.type = 31U;
    msg.utc_year = 48688U;
    msg.utc_month = 33U;
    msg.utc_day = 141U;
    msg.utc_time = 0.350922918845;
    msg.lat = 0.283221433161;
    msg.lon = 0.622971915528;
    msg.height = 0.247569283116;
    msg.satellites = 45U;
    msg.cog = 0.140114541563;
    msg.sog = 0.527911200628;
    msg.hdop = 0.675455594557;
    msg.vdop = 0.104199867251;
    msg.hacc = 0.157549462575;
    msg.vacc = 0.339178126992;

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
    msg.setTimeStamp(0.557660791739);
    msg.setSource(9425U);
    msg.setSourceEntity(210U);
    msg.setDestination(8089U);
    msg.setDestinationEntity(84U);
    msg.validity = 42602U;
    msg.type = 172U;
    msg.utc_year = 5582U;
    msg.utc_month = 82U;
    msg.utc_day = 217U;
    msg.utc_time = 0.520708360668;
    msg.lat = 0.774072530221;
    msg.lon = 0.447366740619;
    msg.height = 0.284609064853;
    msg.satellites = 168U;
    msg.cog = 0.759668844785;
    msg.sog = 0.548956206622;
    msg.hdop = 0.472053779016;
    msg.vdop = 0.898762436307;
    msg.hacc = 0.895645521488;
    msg.vacc = 0.166954285817;

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
    msg.setTimeStamp(0.172614779205);
    msg.setSource(29414U);
    msg.setSourceEntity(101U);
    msg.setDestination(62377U);
    msg.setDestinationEntity(55U);
    msg.validity = 9077U;
    msg.type = 208U;
    msg.utc_year = 31322U;
    msg.utc_month = 107U;
    msg.utc_day = 13U;
    msg.utc_time = 0.509725806666;
    msg.lat = 0.566970158269;
    msg.lon = 0.122568334166;
    msg.height = 0.175346552768;
    msg.satellites = 245U;
    msg.cog = 0.491118695413;
    msg.sog = 0.93856142498;
    msg.hdop = 0.915246763614;
    msg.vdop = 0.113789497021;
    msg.hacc = 0.930393834956;
    msg.vacc = 0.258082162313;

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
    msg.setTimeStamp(0.124638114179);
    msg.setSource(45320U);
    msg.setSourceEntity(211U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(88U);
    msg.time = 0.0257714439009;
    msg.phi = 0.757909456941;
    msg.theta = 0.665794021261;
    msg.psi = 0.25459399839;
    msg.psi_magnetic = 0.121709745128;

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
    msg.setTimeStamp(0.904267563212);
    msg.setSource(18522U);
    msg.setSourceEntity(102U);
    msg.setDestination(51812U);
    msg.setDestinationEntity(115U);
    msg.time = 0.891372420463;
    msg.phi = 0.8291879785;
    msg.theta = 0.313795287424;
    msg.psi = 0.12382052231;
    msg.psi_magnetic = 0.127158039363;

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
    msg.setTimeStamp(0.582870071597);
    msg.setSource(56468U);
    msg.setSourceEntity(99U);
    msg.setDestination(43650U);
    msg.setDestinationEntity(48U);
    msg.time = 0.721085821141;
    msg.phi = 0.672182622491;
    msg.theta = 0.551580045676;
    msg.psi = 0.548333072722;
    msg.psi_magnetic = 0.857739688081;

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
    msg.setTimeStamp(0.632428821161);
    msg.setSource(27921U);
    msg.setSourceEntity(250U);
    msg.setDestination(20182U);
    msg.setDestinationEntity(141U);
    msg.time = 0.310386887755;
    msg.x = 0.349542399765;
    msg.y = 0.871753980676;
    msg.z = 0.0812935921183;
    msg.timestep = 0.618330906746;

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
    msg.setTimeStamp(0.165563160674);
    msg.setSource(10360U);
    msg.setSourceEntity(238U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(163U);
    msg.time = 0.563033895298;
    msg.x = 0.585747474168;
    msg.y = 0.768758509046;
    msg.z = 0.0823624368416;
    msg.timestep = 0.821968026757;

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
    msg.setTimeStamp(0.234656313004);
    msg.setSource(49834U);
    msg.setSourceEntity(6U);
    msg.setDestination(59075U);
    msg.setDestinationEntity(215U);
    msg.time = 0.276818038349;
    msg.x = 0.624267269753;
    msg.y = 0.0458953374878;
    msg.z = 0.772024443206;
    msg.timestep = 0.463701925812;

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
    msg.setTimeStamp(0.864326310035);
    msg.setSource(12821U);
    msg.setSourceEntity(218U);
    msg.setDestination(3162U);
    msg.setDestinationEntity(107U);
    msg.time = 0.552052997644;
    msg.x = 0.902313365398;
    msg.y = 0.0587094799285;
    msg.z = 0.58951204165;

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
    msg.setTimeStamp(0.252985115073);
    msg.setSource(39456U);
    msg.setSourceEntity(180U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(225U);
    msg.time = 0.866986950615;
    msg.x = 0.155243674584;
    msg.y = 0.759609149814;
    msg.z = 0.403872293446;

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
    msg.setTimeStamp(0.254825255443);
    msg.setSource(50506U);
    msg.setSourceEntity(176U);
    msg.setDestination(3376U);
    msg.setDestinationEntity(82U);
    msg.time = 0.173534487504;
    msg.x = 0.128381487715;
    msg.y = 0.790518650762;
    msg.z = 0.605565923062;

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
    msg.setTimeStamp(0.533609086373);
    msg.setSource(28687U);
    msg.setSourceEntity(77U);
    msg.setDestination(9667U);
    msg.setDestinationEntity(27U);
    msg.time = 0.00175436209732;
    msg.x = 0.367683728947;
    msg.y = 0.0323988970669;
    msg.z = 0.817857798358;

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
    msg.setTimeStamp(0.522347915251);
    msg.setSource(4527U);
    msg.setSourceEntity(42U);
    msg.setDestination(5714U);
    msg.setDestinationEntity(240U);
    msg.time = 0.519247343647;
    msg.x = 0.756802031075;
    msg.y = 0.0937512166877;
    msg.z = 0.972925819255;

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
    msg.setTimeStamp(0.576973434824);
    msg.setSource(40797U);
    msg.setSourceEntity(52U);
    msg.setDestination(4863U);
    msg.setDestinationEntity(212U);
    msg.time = 0.241545512427;
    msg.x = 0.380001796567;
    msg.y = 0.385335569352;
    msg.z = 0.897199408591;

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
    msg.setTimeStamp(0.608066300225);
    msg.setSource(37404U);
    msg.setSourceEntity(140U);
    msg.setDestination(39182U);
    msg.setDestinationEntity(16U);
    msg.time = 0.881721750324;
    msg.x = 0.281355711667;
    msg.y = 0.83380138686;
    msg.z = 0.0297029386106;

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
    msg.setTimeStamp(0.752387133599);
    msg.setSource(38232U);
    msg.setSourceEntity(132U);
    msg.setDestination(13968U);
    msg.setDestinationEntity(98U);
    msg.time = 0.526195310656;
    msg.x = 0.946346258028;
    msg.y = 0.0258809724819;
    msg.z = 0.0393142360564;

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
    msg.setTimeStamp(0.813192015223);
    msg.setSource(49479U);
    msg.setSourceEntity(164U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(203U);
    msg.time = 0.69564219769;
    msg.x = 0.698674944973;
    msg.y = 0.51519262527;
    msg.z = 0.677454448683;

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
    msg.setTimeStamp(0.131043729271);
    msg.setSource(3009U);
    msg.setSourceEntity(11U);
    msg.setDestination(31415U);
    msg.setDestinationEntity(237U);
    msg.validity = 136U;
    msg.x = 0.797983735581;
    msg.y = 0.760369173091;
    msg.z = 0.720589382458;

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
    msg.setTimeStamp(0.965738751306);
    msg.setSource(29909U);
    msg.setSourceEntity(122U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(124U);
    msg.validity = 179U;
    msg.x = 0.0472244465083;
    msg.y = 0.912194454172;
    msg.z = 0.44739868122;

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
    msg.setTimeStamp(0.589533888793);
    msg.setSource(53181U);
    msg.setSourceEntity(145U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(20U);
    msg.validity = 72U;
    msg.x = 0.908050442446;
    msg.y = 0.00743442258708;
    msg.z = 0.148059979236;

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
    msg.setTimeStamp(0.482071679388);
    msg.setSource(2841U);
    msg.setSourceEntity(9U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(196U);
    msg.validity = 234U;
    msg.x = 0.848516505659;
    msg.y = 0.838936616864;
    msg.z = 0.531641122239;

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
    msg.setTimeStamp(0.141962377207);
    msg.setSource(39202U);
    msg.setSourceEntity(27U);
    msg.setDestination(32290U);
    msg.setDestinationEntity(254U);
    msg.validity = 220U;
    msg.x = 0.358690539763;
    msg.y = 0.214450059534;
    msg.z = 0.886670943961;

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
    msg.setTimeStamp(0.398832579949);
    msg.setSource(11026U);
    msg.setSourceEntity(165U);
    msg.setDestination(62959U);
    msg.setDestinationEntity(128U);
    msg.validity = 156U;
    msg.x = 0.589252056603;
    msg.y = 0.635412124068;
    msg.z = 0.198699464425;

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
    msg.setTimeStamp(0.195769058321);
    msg.setSource(58319U);
    msg.setSourceEntity(248U);
    msg.setDestination(38308U);
    msg.setDestinationEntity(176U);
    msg.time = 0.449543464167;
    msg.x = 0.114523852143;
    msg.y = 0.431795703993;
    msg.z = 0.564838723551;

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
    msg.setTimeStamp(0.971503384489);
    msg.setSource(48884U);
    msg.setSourceEntity(244U);
    msg.setDestination(35018U);
    msg.setDestinationEntity(101U);
    msg.time = 0.948182739016;
    msg.x = 0.846458455286;
    msg.y = 0.476661959996;
    msg.z = 0.263113744891;

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
    msg.setTimeStamp(0.0412094219258);
    msg.setSource(9209U);
    msg.setSourceEntity(106U);
    msg.setDestination(47900U);
    msg.setDestinationEntity(45U);
    msg.time = 0.748326135027;
    msg.x = 0.47157361779;
    msg.y = 0.0106508584801;
    msg.z = 0.859102991998;

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
    msg.setTimeStamp(0.971244068144);
    msg.setSource(17764U);
    msg.setSourceEntity(6U);
    msg.setDestination(52511U);
    msg.setDestinationEntity(254U);
    msg.validity = 155U;
    msg.value = 0.337583324103;

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
    msg.setTimeStamp(0.695766970869);
    msg.setSource(21946U);
    msg.setSourceEntity(18U);
    msg.setDestination(919U);
    msg.setDestinationEntity(64U);
    msg.validity = 23U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0822941469452;
    tmp_msg_0.y = 0.736615359244;
    tmp_msg_0.z = 0.323860565629;
    tmp_msg_0.phi = 0.865885575051;
    tmp_msg_0.theta = 0.256254831354;
    tmp_msg_0.psi = 0.832656764994;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.383170765246;
    tmp_msg_1.beam_height = 0.52923625758;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0803730919847;

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
    msg.setTimeStamp(0.98170722929);
    msg.setSource(13420U);
    msg.setSourceEntity(214U);
    msg.setDestination(14997U);
    msg.setDestinationEntity(112U);
    msg.validity = 51U;
    msg.value = 0.980853692978;

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
    msg.setTimeStamp(0.572062360247);
    msg.setSource(21625U);
    msg.setSourceEntity(15U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(216U);
    msg.value = 0.450158683203;

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
    msg.setTimeStamp(0.246636120002);
    msg.setSource(25241U);
    msg.setSourceEntity(229U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(220U);
    msg.value = 0.838018171496;

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
    msg.setTimeStamp(0.112190856496);
    msg.setSource(36677U);
    msg.setSourceEntity(193U);
    msg.setDestination(20784U);
    msg.setDestinationEntity(166U);
    msg.value = 0.717648545902;

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
    msg.setTimeStamp(0.742396555991);
    msg.setSource(14850U);
    msg.setSourceEntity(64U);
    msg.setDestination(33093U);
    msg.setDestinationEntity(240U);
    msg.value = 0.764023050398;

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
    msg.setTimeStamp(0.47606544827);
    msg.setSource(17161U);
    msg.setSourceEntity(9U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(172U);
    msg.value = 0.801468371492;

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
    msg.setTimeStamp(0.206729705966);
    msg.setSource(23338U);
    msg.setSourceEntity(144U);
    msg.setDestination(3U);
    msg.setDestinationEntity(22U);
    msg.value = 0.72806113385;

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
    msg.setTimeStamp(0.785203848685);
    msg.setSource(39242U);
    msg.setSourceEntity(105U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(200U);
    msg.value = 0.114038411344;

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
    msg.setTimeStamp(0.380404900227);
    msg.setSource(49550U);
    msg.setSourceEntity(72U);
    msg.setDestination(37796U);
    msg.setDestinationEntity(160U);
    msg.value = 0.833227423742;

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
    msg.setTimeStamp(0.960196562862);
    msg.setSource(56148U);
    msg.setSourceEntity(38U);
    msg.setDestination(60416U);
    msg.setDestinationEntity(19U);
    msg.value = 0.742292900533;

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
    msg.setTimeStamp(0.277012104648);
    msg.setSource(55727U);
    msg.setSourceEntity(154U);
    msg.setDestination(21505U);
    msg.setDestinationEntity(192U);
    msg.value = 0.887360917562;

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
    msg.setTimeStamp(0.0923905368944);
    msg.setSource(52528U);
    msg.setSourceEntity(244U);
    msg.setDestination(686U);
    msg.setDestinationEntity(127U);
    msg.value = 0.548478388208;

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
    msg.setTimeStamp(0.724439325489);
    msg.setSource(53862U);
    msg.setSourceEntity(130U);
    msg.setDestination(5796U);
    msg.setDestinationEntity(68U);
    msg.value = 0.459238036669;

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
    msg.setTimeStamp(0.313776095089);
    msg.setSource(24068U);
    msg.setSourceEntity(224U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(82U);
    msg.value = 0.718445178305;

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
    msg.setTimeStamp(0.0458418721982);
    msg.setSource(3616U);
    msg.setSourceEntity(166U);
    msg.setDestination(4615U);
    msg.setDestinationEntity(17U);
    msg.value = 0.765802419392;

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
    msg.setTimeStamp(0.572059547565);
    msg.setSource(13172U);
    msg.setSourceEntity(207U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(198U);
    msg.value = 0.97593048822;

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
    msg.setTimeStamp(0.993951712544);
    msg.setSource(64817U);
    msg.setSourceEntity(132U);
    msg.setDestination(51461U);
    msg.setDestinationEntity(234U);
    msg.value = 0.359735451089;

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
    msg.setTimeStamp(0.265500356736);
    msg.setSource(31734U);
    msg.setSourceEntity(247U);
    msg.setDestination(39447U);
    msg.setDestinationEntity(127U);
    msg.value = 0.480075102528;

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
    msg.setTimeStamp(0.758712910691);
    msg.setSource(5785U);
    msg.setSourceEntity(62U);
    msg.setDestination(17965U);
    msg.setDestinationEntity(195U);
    msg.value = 0.33913339665;

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
    msg.setTimeStamp(0.136375161637);
    msg.setSource(3105U);
    msg.setSourceEntity(230U);
    msg.setDestination(8761U);
    msg.setDestinationEntity(41U);
    msg.value = 0.837208062439;

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
    msg.setTimeStamp(0.988133618836);
    msg.setSource(13287U);
    msg.setSourceEntity(208U);
    msg.setDestination(39294U);
    msg.setDestinationEntity(226U);
    msg.value = 0.990270178359;

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
    msg.setTimeStamp(0.316620457471);
    msg.setSource(15812U);
    msg.setSourceEntity(118U);
    msg.setDestination(608U);
    msg.setDestinationEntity(127U);
    msg.value = 0.217435056338;

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
    msg.setTimeStamp(0.629456197146);
    msg.setSource(57727U);
    msg.setSourceEntity(206U);
    msg.setDestination(52783U);
    msg.setDestinationEntity(159U);
    msg.value = 0.764641495639;

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
    msg.setTimeStamp(0.704011954633);
    msg.setSource(2109U);
    msg.setSourceEntity(243U);
    msg.setDestination(4064U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0484817069172;

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
    msg.setTimeStamp(0.218314007081);
    msg.setSource(3989U);
    msg.setSourceEntity(42U);
    msg.setDestination(43331U);
    msg.setDestinationEntity(156U);
    msg.value = 0.454900428081;

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
    msg.setTimeStamp(0.0951537826381);
    msg.setSource(16060U);
    msg.setSourceEntity(126U);
    msg.setDestination(43555U);
    msg.setDestinationEntity(18U);
    msg.direction = 0.344262181783;
    msg.speed = 0.824268010694;
    msg.turbulence = 0.131927067218;

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
    msg.setTimeStamp(0.051897611889);
    msg.setSource(41500U);
    msg.setSourceEntity(206U);
    msg.setDestination(36116U);
    msg.setDestinationEntity(36U);
    msg.direction = 0.986553621196;
    msg.speed = 0.951228470399;
    msg.turbulence = 0.182800630156;

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
    msg.setTimeStamp(0.879368369416);
    msg.setSource(50458U);
    msg.setSourceEntity(93U);
    msg.setDestination(24747U);
    msg.setDestinationEntity(56U);
    msg.direction = 0.3796104707;
    msg.speed = 0.776973118206;
    msg.turbulence = 0.659655467623;

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
    msg.setTimeStamp(0.386157116037);
    msg.setSource(40737U);
    msg.setSourceEntity(23U);
    msg.setDestination(52994U);
    msg.setDestinationEntity(19U);
    msg.value = 0.167080342455;

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
    msg.setTimeStamp(0.218711924835);
    msg.setSource(40827U);
    msg.setSourceEntity(83U);
    msg.setDestination(18118U);
    msg.setDestinationEntity(149U);
    msg.value = 0.972877153474;

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
    msg.setTimeStamp(0.909220042905);
    msg.setSource(57437U);
    msg.setSourceEntity(180U);
    msg.setDestination(24039U);
    msg.setDestinationEntity(166U);
    msg.value = 0.983830464515;

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
    msg.setTimeStamp(0.735171674527);
    msg.setSource(61777U);
    msg.setSourceEntity(182U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(29U);
    msg.value.assign("BWWNMARGNQPYRDSENAEEPVLEKDZCDOXSPIEKOTBXJITBZGFFUCTYOSFCMGRMXYBOMALBOA");

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
    msg.setTimeStamp(0.340261947651);
    msg.setSource(25759U);
    msg.setSourceEntity(74U);
    msg.setDestination(57711U);
    msg.setDestinationEntity(251U);
    msg.value.assign("WMTEHRUBTQROFKZHJCRVUEOFKNQZATBQLUBYJCPZATVICHILOGMTGFHGPSUVSNSTADUXSVGYOPNHLDCQXMCWIZWANZJDFGTXRXNLIGODBKXKZJBUOKAXJSGFAXVYLQECMRAYJXRQXZGKFTUGJDRNMYMDMBVMCOH");

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
    msg.setTimeStamp(0.547761640144);
    msg.setSource(60552U);
    msg.setSourceEntity(104U);
    msg.setDestination(28555U);
    msg.setDestinationEntity(1U);
    msg.value.assign("KCZWEPVSFUUCLBBJBULHVCRBUVIFCTDOWCRGRLCFNVOSXOPEYOXWIEQMJCVWLXDRKQIIJEGZZSFXFQKEPTIWLSLVKMFJYTFHTJOJNPBJYAGHNGHNSQYZTRRSM");

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
    msg.setTimeStamp(0.334288954516);
    msg.setSource(54308U);
    msg.setSourceEntity(251U);
    msg.setDestination(11796U);
    msg.setDestinationEntity(72U);
    const char tmp_msg_0[] = {-20, -15, -75, -45, 20, -63, -56, 73, -45, -14, -22, 112, -34, -105, -61, -88, -39, -85, -29, 10, 94, 74, 71, -62, -113, 13, 65, -10, -86, -83, -105, -74, 114, 60, 49, 51, -123, -93, -31, -106, 36, -103, 122, 81, 17, 7, 29, -121, 31, -96, -8, 73, 60, 66, -81, -78, -86, 10, -76, -66, 106, -39, 97, -87, -113, -51, -56, -61, 34, -53, -90, -13, 17, 58, -95, 118, -45, -101, -107, 36, 88, 28, -97, -74, -91, 41, 89, -112, -117, -48, 24, -9, 32, 123, 42, 65, 91, 46, -125, 16, 87, 39, -90, -24, 14, -120, 117, -21, -64, -55, 23, -103, -102, 20, 16, 41, -54, -64, 124, 27, -16, 76, 95, 97, -34, -66, 115, -31, -49, 64, 68, 1, -99, -41, 124, 68, 3, 45, -72, 34, -43, 115, 41, -72, 21, -51, -50, 104, -110, -34, 47, -92, -78, -84, 88, -33, -71, -83, -31, -7, 39, -106, 57, 123, -29, 87, 108, -97, -26, -54, 76, -111, 7, -80, 110, -3, -119, -114, -94, 9, 82, -70, 7, -56, 77, 114, -108, -11, -47, -34, 46, -117, -55, -78, -80, 90, -50, -79, -56, -62, -57, -33, -59, 109, -89, -79, 5, -119, 91, 110, -92, -115, -53, -68, -40, -91, 123, -101, -99, 93, 20, 60, 123, -106, -126, 72, 85, -51, -98, -13};
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
    msg.setTimeStamp(0.747870810966);
    msg.setSource(12638U);
    msg.setSourceEntity(34U);
    msg.setDestination(47648U);
    msg.setDestinationEntity(158U);
    const char tmp_msg_0[] = {-47, 99, -121, 53, -119, 92, 50, 32, -115, 45, -57, 111, -67, 82, -105, 95, -15, 35, -117, -114, -87, 46, 22, 2, 53, 56, 25, -79, 61, 114, -94, 93, 11, 69, -14, 92, 24, 89, 72, -45, 126, 94, 86, 12, -43, -18, 34, -24, -62, 37, 61, -76, 58, -44, 48, 58, -111, 43};
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
    msg.setTimeStamp(0.845720460728);
    msg.setSource(46474U);
    msg.setSourceEntity(212U);
    msg.setDestination(6694U);
    msg.setDestinationEntity(239U);
    const char tmp_msg_0[] = {-6, 71, -44, -17, -38, -100, 11, 19, 78, 98, 72, 69, -93, 95, -113, -65, 70, 5, 94, 115, 118, 20, -67, 89, 94, 113, 88, -53, -25, -24, 101, -21, -57, 115, -25, 65, -89, 121, 87, -54, -126, 123, 54, 76, 21, -80, 77, -110, 62, -116, 92, 16, -40, 50, 62, -127, 116, -13, -99, -65, 108, -62, 8, -93, 58, -62, -115, 34, -110, 106, -69, 77, -125, 82, -124, 17, -113, 119, 33, -14, 83, -45, -99, -29, -58, -24, -21, -6, 15, -23, 101, 24, -47, 31, -11, -114, 17, 56, 113, 87, -13, -66, -98, 108, -47, 90, -62, 89};
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
    msg.setTimeStamp(0.261244292945);
    msg.setSource(51434U);
    msg.setSourceEntity(180U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(42U);
    msg.value = 0.930653750728;

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
    msg.setTimeStamp(0.665299726275);
    msg.setSource(23831U);
    msg.setSourceEntity(182U);
    msg.setDestination(42797U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0463660807779;

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
    msg.setTimeStamp(0.191244904821);
    msg.setSource(36535U);
    msg.setSourceEntity(38U);
    msg.setDestination(29711U);
    msg.setDestinationEntity(68U);
    msg.value = 0.638813877507;

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
    msg.setTimeStamp(0.185336438707);
    msg.setSource(50116U);
    msg.setSourceEntity(235U);
    msg.setDestination(13644U);
    msg.setDestinationEntity(8U);
    msg.type = 192U;
    msg.frequency = 3567463511U;
    msg.min_range = 49578U;
    msg.max_range = 28749U;
    msg.bits_per_point = 213U;
    msg.scale_factor = 0.184048449235;
    const char tmp_msg_0[] = {12, 106, -1, -6, -1, -38, 26, -20, 37, 104, -93, -27, -46, -57, -115, 8, 8, -100, -51, -116, -73, -53, -91, 126, 45, -4, 108, -43, 46, -84, 118, -120, 36, 10, -53, 93, -116, -68, -22, 33, -115, -32, -9, 112, 103, -124, -80, 104, -30, -118, 114, -17, -100, -4, 120, 41, 121, -16, 126, -103, 104, -29, 88, -93, 0, 12, -26, 4, -25, 58, 60, -91, -78, 10, 28, 11, 101, -70, -15, -40, -104, 62, -25, 47, 83, -65, 87, -87, -55, 37, -105, 50, -74, 38, 2, -1, -59, 106, 39, -81, 84, -111, -11, -62, 14, -85, -55, -37, 60, 96, -111, 98, 115, 69, -25};
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
    msg.setTimeStamp(0.81878413379);
    msg.setSource(20078U);
    msg.setSourceEntity(34U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(25U);
    msg.type = 141U;
    msg.frequency = 789685652U;
    msg.min_range = 30079U;
    msg.max_range = 29063U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.950393230514;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.279427544653;
    tmp_msg_0.beam_height = 0.12751781945;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {115, -40, 80, 96, -27, 88, 45, 85, 45, 3, -84, 30, 46, 1, -92, 116, 76, 10, -38, 104, -47, 40, 80, 0, 72, -64, -39, 78, 25, 93, -118, -74, 101, 74, 17, -57, -78, -58, 91, -2, 29, 6, -63, -70, -30};
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
    msg.setTimeStamp(0.449707807734);
    msg.setSource(45186U);
    msg.setSourceEntity(102U);
    msg.setDestination(41460U);
    msg.setDestinationEntity(220U);
    msg.type = 8U;
    msg.frequency = 2040207088U;
    msg.min_range = 27260U;
    msg.max_range = 22881U;
    msg.bits_per_point = 87U;
    msg.scale_factor = 0.639389164221;
    const char tmp_msg_0[] = {-21, 76, -5, -1, -45, -117, 78, 4, 102, 102, -79, 61, -104, -36, 50, 78, 41, 23, 12, -60, -86, -97, 35, -14, 125, 84, -83, -72, 97, 97, 126, -56, 42, -24, -45, 110, -3, 119, 14, 49, -122, -34, 93, -61, -2, -125, 26, -42, -105, 98};
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
    msg.setTimeStamp(0.880769231839);
    msg.setSource(55723U);
    msg.setSourceEntity(7U);
    msg.setDestination(64159U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.331832562384);
    msg.setSource(12323U);
    msg.setSourceEntity(104U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.162715453295);
    msg.setSource(20173U);
    msg.setSourceEntity(225U);
    msg.setDestination(19854U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.909364101294);
    msg.setSource(43866U);
    msg.setSourceEntity(249U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(191U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.860647604556);
    msg.setSource(62260U);
    msg.setSourceEntity(96U);
    msg.setDestination(7721U);
    msg.setDestinationEntity(3U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.540046272986);
    msg.setSource(45887U);
    msg.setSourceEntity(81U);
    msg.setDestination(20671U);
    msg.setDestinationEntity(18U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.77338611031);
    msg.setSource(60355U);
    msg.setSourceEntity(35U);
    msg.setDestination(58378U);
    msg.setDestinationEntity(202U);
    msg.value = 0.5039063881;
    msg.confidence = 0.260107607024;
    msg.opmodes.assign("INPANUBPTFTLDEMTJVATFSCHUCQRNFAGTWDWGGJSVIHDLIUNGMMEVXRDBDXGHBSQFDVSNKGFZENVVECHYXPTYADLLXSSBNWLSXMKIALARKZYSFMZOTZHYC");

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
    msg.setTimeStamp(0.848799273944);
    msg.setSource(8773U);
    msg.setSourceEntity(55U);
    msg.setDestination(18674U);
    msg.setDestinationEntity(130U);
    msg.value = 0.886856254457;
    msg.confidence = 0.777981322761;
    msg.opmodes.assign("MDEXQTVYFAYYIFPXEYBOPQLXOHLLGBOWFDOWWXNAGLHXKFWBSNTHIAZYFMIXVADQQDZONRZMRQUGRTFOIPJYSJCNGIHUYGFYSJMKKSMCMAVNIDPRAZIDPXKANMKVKCBSVXLJQPGTUHELVWTENBTXOHNDBZWLNSKCLHUKJEGLLSTRCJTITHIZYSCXWYOQZVCQJKFCBTHSVIRWZPPWEBVJDFUCQ");

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
    msg.setTimeStamp(0.718255454154);
    msg.setSource(41929U);
    msg.setSourceEntity(230U);
    msg.setDestination(32894U);
    msg.setDestinationEntity(69U);
    msg.value = 0.655901478184;
    msg.confidence = 0.810415750972;
    msg.opmodes.assign("YULSZYKDTVXLVFYVMCUKEIMECEDTHWPBXUFXFUXVGUVDILFMKRFBXKTSCYQHCSNGVOWSSAJNPGW");

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
    msg.setTimeStamp(0.852626834876);
    msg.setSource(48839U);
    msg.setSourceEntity(163U);
    msg.setDestination(22387U);
    msg.setDestinationEntity(189U);
    msg.itow = 1218818517U;
    msg.lat = 0.656817084023;
    msg.lon = 0.940362331996;
    msg.height_ell = 0.283496849775;
    msg.height_sea = 0.0554916236535;
    msg.hacc = 0.449852317236;
    msg.vacc = 0.414229388101;
    msg.vel_n = 0.78480933858;
    msg.vel_e = 0.904898635368;
    msg.vel_d = 0.816193144884;
    msg.speed = 0.23890456703;
    msg.gspeed = 0.158991573983;
    msg.heading = 0.384052204327;
    msg.sacc = 0.972613973943;
    msg.cacc = 0.766247158587;

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
    msg.setTimeStamp(0.284386099174);
    msg.setSource(5747U);
    msg.setSourceEntity(133U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(159U);
    msg.itow = 1274966623U;
    msg.lat = 0.374897402676;
    msg.lon = 0.569034288584;
    msg.height_ell = 0.260522765543;
    msg.height_sea = 0.499981180144;
    msg.hacc = 0.858022202908;
    msg.vacc = 0.944867559451;
    msg.vel_n = 0.328091982643;
    msg.vel_e = 0.772113923263;
    msg.vel_d = 0.543039616305;
    msg.speed = 0.663237160039;
    msg.gspeed = 0.23396229763;
    msg.heading = 0.704345769017;
    msg.sacc = 0.393471200136;
    msg.cacc = 0.932187953816;

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
    msg.setTimeStamp(0.916611817419);
    msg.setSource(9229U);
    msg.setSourceEntity(251U);
    msg.setDestination(60247U);
    msg.setDestinationEntity(13U);
    msg.itow = 3562467940U;
    msg.lat = 0.234603793796;
    msg.lon = 0.835053417843;
    msg.height_ell = 0.749674344543;
    msg.height_sea = 0.538363827422;
    msg.hacc = 0.705204041168;
    msg.vacc = 0.76943774396;
    msg.vel_n = 0.0279712750981;
    msg.vel_e = 0.791856493503;
    msg.vel_d = 0.257962907696;
    msg.speed = 0.349056125143;
    msg.gspeed = 0.0140171053325;
    msg.heading = 0.126666961052;
    msg.sacc = 0.503693840583;
    msg.cacc = 0.531554913214;

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
    msg.setTimeStamp(0.674974035158);
    msg.setSource(62233U);
    msg.setSourceEntity(88U);
    msg.setDestination(14232U);
    msg.setDestinationEntity(141U);
    msg.id = 234U;
    msg.value = 0.957405290436;

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
    msg.setTimeStamp(0.335960990033);
    msg.setSource(41929U);
    msg.setSourceEntity(195U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(233U);
    msg.id = 180U;
    msg.value = 0.0565676737513;

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
    msg.setTimeStamp(0.488852295216);
    msg.setSource(32821U);
    msg.setSourceEntity(172U);
    msg.setDestination(16554U);
    msg.setDestinationEntity(88U);
    msg.id = 192U;
    msg.value = 0.494696413262;

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
    msg.setTimeStamp(0.192437504862);
    msg.setSource(45695U);
    msg.setSourceEntity(141U);
    msg.setDestination(23507U);
    msg.setDestinationEntity(95U);
    msg.x = 0.299613741734;
    msg.y = 0.363435914276;
    msg.z = 0.332708428885;
    msg.phi = 0.30389529863;
    msg.theta = 0.279073721837;
    msg.psi = 0.0737994810063;

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
    msg.setTimeStamp(0.654822813434);
    msg.setSource(8865U);
    msg.setSourceEntity(140U);
    msg.setDestination(12792U);
    msg.setDestinationEntity(218U);
    msg.x = 0.546598114812;
    msg.y = 0.344997445357;
    msg.z = 0.713575617891;
    msg.phi = 0.0133990656756;
    msg.theta = 0.940328307935;
    msg.psi = 0.789775789195;

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
    msg.setTimeStamp(0.460021168454);
    msg.setSource(40052U);
    msg.setSourceEntity(93U);
    msg.setDestination(48008U);
    msg.setDestinationEntity(36U);
    msg.x = 0.233222257716;
    msg.y = 0.224210473896;
    msg.z = 0.782137265995;
    msg.phi = 0.973195390977;
    msg.theta = 0.0423996020305;
    msg.psi = 0.0365288503316;

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
    msg.setTimeStamp(0.0466573896211);
    msg.setSource(41249U);
    msg.setSourceEntity(97U);
    msg.setDestination(8106U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.776774984402;
    msg.beam_height = 0.970778629668;

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
    msg.setTimeStamp(0.959498301126);
    msg.setSource(43274U);
    msg.setSourceEntity(146U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(83U);
    msg.beam_width = 0.0234763537479;
    msg.beam_height = 0.465069483335;

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
    msg.setTimeStamp(0.15151037696);
    msg.setSource(52183U);
    msg.setSourceEntity(7U);
    msg.setDestination(50713U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.157882564799;
    msg.beam_height = 0.502090457272;

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
    msg.setTimeStamp(0.833138479959);
    msg.setSource(28204U);
    msg.setSourceEntity(1U);
    msg.setDestination(61635U);
    msg.setDestinationEntity(169U);
    msg.sane = 152U;

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
    msg.setTimeStamp(0.457475943049);
    msg.setSource(10918U);
    msg.setSourceEntity(104U);
    msg.setDestination(47658U);
    msg.setDestinationEntity(140U);
    msg.sane = 82U;

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
    msg.setTimeStamp(0.160309070529);
    msg.setSource(7108U);
    msg.setSourceEntity(3U);
    msg.setDestination(16599U);
    msg.setDestinationEntity(9U);
    msg.sane = 206U;

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
    msg.setTimeStamp(0.955776959551);
    msg.setSource(53647U);
    msg.setSourceEntity(33U);
    msg.setDestination(60399U);
    msg.setDestinationEntity(160U);
    msg.value = 0.407478843898;

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
    msg.setTimeStamp(0.834568078611);
    msg.setSource(26622U);
    msg.setSourceEntity(171U);
    msg.setDestination(32748U);
    msg.setDestinationEntity(50U);
    msg.value = 0.851637964878;

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
    msg.setTimeStamp(0.658311024844);
    msg.setSource(5606U);
    msg.setSourceEntity(30U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(13U);
    msg.value = 0.709906746315;

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
    msg.setTimeStamp(0.514388698153);
    msg.setSource(4561U);
    msg.setSourceEntity(186U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(59U);
    msg.value = 0.0219243699643;

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
    msg.setTimeStamp(0.357378498804);
    msg.setSource(14297U);
    msg.setSourceEntity(14U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(200U);
    msg.value = 0.588440898746;

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
    msg.setTimeStamp(0.766886927549);
    msg.setSource(49702U);
    msg.setSourceEntity(145U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(127U);
    msg.value = 0.989352687298;

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
    msg.setTimeStamp(0.780537253071);
    msg.setSource(16043U);
    msg.setSourceEntity(6U);
    msg.setDestination(15030U);
    msg.setDestinationEntity(193U);
    msg.value = 0.193984650426;

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
    msg.setTimeStamp(0.687996655103);
    msg.setSource(24987U);
    msg.setSourceEntity(62U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(81U);
    msg.value = 0.589507353328;

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
    msg.setTimeStamp(0.149126019318);
    msg.setSource(44516U);
    msg.setSourceEntity(43U);
    msg.setDestination(29025U);
    msg.setDestinationEntity(107U);
    msg.value = 0.849807753588;

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
    msg.setTimeStamp(0.92523202453);
    msg.setSource(21645U);
    msg.setSourceEntity(209U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(48U);
    msg.value = 0.253357529683;

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
    msg.setTimeStamp(0.501160180534);
    msg.setSource(37346U);
    msg.setSourceEntity(89U);
    msg.setDestination(27498U);
    msg.setDestinationEntity(14U);
    msg.value = 0.573586963125;

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
    msg.setTimeStamp(0.0820952533318);
    msg.setSource(1594U);
    msg.setSourceEntity(32U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(119U);
    msg.value = 0.241831775506;

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
    msg.setTimeStamp(0.256103267464);
    msg.setSource(55143U);
    msg.setSourceEntity(195U);
    msg.setDestination(56476U);
    msg.setDestinationEntity(214U);
    msg.value = 0.259823649976;

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
    msg.setTimeStamp(0.0810087458759);
    msg.setSource(25247U);
    msg.setSourceEntity(100U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(88U);
    msg.value = 0.74002961893;

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
    msg.setTimeStamp(0.3395533623);
    msg.setSource(63269U);
    msg.setSourceEntity(78U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(218U);
    msg.value = 0.882687802932;

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
    msg.setTimeStamp(0.276327010897);
    msg.setSource(59821U);
    msg.setSourceEntity(48U);
    msg.setDestination(55577U);
    msg.setDestinationEntity(111U);
    msg.value = 0.940428041424;

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
    msg.setTimeStamp(0.271661216319);
    msg.setSource(25267U);
    msg.setSourceEntity(242U);
    msg.setDestination(64223U);
    msg.setDestinationEntity(127U);
    msg.value = 0.181417235769;

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
    msg.setTimeStamp(0.842285344177);
    msg.setSource(24130U);
    msg.setSourceEntity(58U);
    msg.setDestination(44743U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0497972660198;

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
    msg.setTimeStamp(0.909699752262);
    msg.setSource(17169U);
    msg.setSourceEntity(170U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(82U);
    msg.value = 0.437111825967;

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
    msg.setTimeStamp(0.786771167394);
    msg.setSource(7332U);
    msg.setSourceEntity(211U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(230U);
    msg.value = 0.699638128649;

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
    msg.setTimeStamp(0.551849900535);
    msg.setSource(5416U);
    msg.setSourceEntity(173U);
    msg.setDestination(13942U);
    msg.setDestinationEntity(204U);
    msg.value = 0.530959176301;

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
    msg.setTimeStamp(0.763785832986);
    msg.setSource(33428U);
    msg.setSourceEntity(213U);
    msg.setDestination(32605U);
    msg.setDestinationEntity(250U);
    msg.value = 0.260254252367;

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
    msg.setTimeStamp(0.775259560942);
    msg.setSource(50266U);
    msg.setSourceEntity(101U);
    msg.setDestination(61246U);
    msg.setDestinationEntity(183U);
    msg.value = 0.128994261811;

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
    msg.setTimeStamp(0.741539514765);
    msg.setSource(8153U);
    msg.setSourceEntity(174U);
    msg.setDestination(53980U);
    msg.setDestinationEntity(94U);
    msg.value = 0.537398212193;

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
    msg.setTimeStamp(0.894036292871);
    msg.setSource(21506U);
    msg.setSourceEntity(254U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(8U);
    msg.validity = 21316U;
    msg.type = 150U;
    msg.tow = 117445828U;
    msg.base_lat = 0.365468733659;
    msg.base_lon = 0.402032936525;
    msg.base_height = 0.788343297377;
    msg.n = 0.624593580595;
    msg.e = 0.895176312388;
    msg.d = 0.674574445935;
    msg.v_n = 0.769424890846;
    msg.v_e = 0.89894983626;
    msg.v_d = 0.878148648784;
    msg.satellites = 43U;
    msg.iar_hyp = 22305U;
    msg.iar_ratio = 0.253158783603;

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
    msg.setTimeStamp(0.243455274837);
    msg.setSource(38816U);
    msg.setSourceEntity(136U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(155U);
    msg.validity = 4004U;
    msg.type = 45U;
    msg.tow = 3241606636U;
    msg.base_lat = 0.339519626338;
    msg.base_lon = 0.216445397091;
    msg.base_height = 0.350613046123;
    msg.n = 0.845572153127;
    msg.e = 0.444024746652;
    msg.d = 0.568691777711;
    msg.v_n = 0.016604011959;
    msg.v_e = 0.905198861654;
    msg.v_d = 0.16834453169;
    msg.satellites = 109U;
    msg.iar_hyp = 35508U;
    msg.iar_ratio = 0.751647079103;

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
    msg.setTimeStamp(0.615293582854);
    msg.setSource(27828U);
    msg.setSourceEntity(122U);
    msg.setDestination(48445U);
    msg.setDestinationEntity(185U);
    msg.validity = 27919U;
    msg.type = 73U;
    msg.tow = 1826764056U;
    msg.base_lat = 0.554551382337;
    msg.base_lon = 0.553592280505;
    msg.base_height = 0.359420910941;
    msg.n = 0.409059134455;
    msg.e = 0.408961640696;
    msg.d = 0.414940235258;
    msg.v_n = 0.179349747211;
    msg.v_e = 0.463516864371;
    msg.v_d = 0.943366012902;
    msg.satellites = 189U;
    msg.iar_hyp = 64514U;
    msg.iar_ratio = 0.339243851696;

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
    msg.setTimeStamp(0.880086748779);
    msg.setSource(3302U);
    msg.setSourceEntity(95U);
    msg.setDestination(40357U);
    msg.setDestinationEntity(111U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.581745452561;
    tmp_msg_0.lon = 0.334456995877;
    tmp_msg_0.height = 0.970438985449;
    tmp_msg_0.x = 0.670151915205;
    tmp_msg_0.y = 0.616188403328;
    tmp_msg_0.z = 0.597888857211;
    tmp_msg_0.phi = 0.893223692049;
    tmp_msg_0.theta = 0.634839345721;
    tmp_msg_0.psi = 0.998246700713;
    tmp_msg_0.u = 0.19595505517;
    tmp_msg_0.v = 0.0954713934971;
    tmp_msg_0.w = 0.0544482593851;
    tmp_msg_0.vx = 0.084200434678;
    tmp_msg_0.vy = 0.858205827421;
    tmp_msg_0.vz = 0.910320932708;
    tmp_msg_0.p = 0.902523240366;
    tmp_msg_0.q = 0.28837330783;
    tmp_msg_0.r = 0.998355165071;
    tmp_msg_0.depth = 0.268420355889;
    tmp_msg_0.alt = 0.599826606263;
    msg.state.set(tmp_msg_0);
    msg.type = 147U;

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
    msg.setTimeStamp(0.518390229279);
    msg.setSource(27309U);
    msg.setSourceEntity(28U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(127U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.767850335146;
    tmp_msg_0.lon = 0.322960179492;
    tmp_msg_0.height = 0.368528457799;
    tmp_msg_0.x = 0.132902674487;
    tmp_msg_0.y = 0.180779947884;
    tmp_msg_0.z = 0.485589911915;
    tmp_msg_0.phi = 0.819559759796;
    tmp_msg_0.theta = 0.530224656103;
    tmp_msg_0.psi = 0.818551172759;
    tmp_msg_0.u = 0.976983817078;
    tmp_msg_0.v = 0.567804419321;
    tmp_msg_0.w = 0.58840072894;
    tmp_msg_0.vx = 0.830449275589;
    tmp_msg_0.vy = 0.403730743575;
    tmp_msg_0.vz = 0.26057720946;
    tmp_msg_0.p = 0.45141572688;
    tmp_msg_0.q = 0.72805952797;
    tmp_msg_0.r = 0.792170084871;
    tmp_msg_0.depth = 0.928099877416;
    tmp_msg_0.alt = 0.496212275458;
    msg.state.set(tmp_msg_0);
    msg.type = 71U;

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
    msg.setTimeStamp(0.833224054319);
    msg.setSource(18813U);
    msg.setSourceEntity(58U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(176U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0929029834991;
    tmp_msg_0.lon = 0.12473829895;
    tmp_msg_0.height = 0.368033951041;
    tmp_msg_0.x = 0.0811482916952;
    tmp_msg_0.y = 0.816163841484;
    tmp_msg_0.z = 0.423386077366;
    tmp_msg_0.phi = 0.37185937311;
    tmp_msg_0.theta = 0.743721463025;
    tmp_msg_0.psi = 0.233646642435;
    tmp_msg_0.u = 0.300157192886;
    tmp_msg_0.v = 0.710217271734;
    tmp_msg_0.w = 0.767157515861;
    tmp_msg_0.vx = 0.463129038962;
    tmp_msg_0.vy = 0.308558560511;
    tmp_msg_0.vz = 0.26237261942;
    tmp_msg_0.p = 0.0381749879019;
    tmp_msg_0.q = 0.29505320454;
    tmp_msg_0.r = 0.872504442923;
    tmp_msg_0.depth = 0.270488202443;
    tmp_msg_0.alt = 0.19918714066;
    msg.state.set(tmp_msg_0);
    msg.type = 114U;

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
    msg.setTimeStamp(0.593406190185);
    msg.setSource(47240U);
    msg.setSourceEntity(43U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(5U);
    msg.value = 0.634594288764;

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
    msg.setTimeStamp(0.371900492573);
    msg.setSource(63448U);
    msg.setSourceEntity(33U);
    msg.setDestination(45918U);
    msg.setDestinationEntity(63U);
    msg.value = 0.168473621244;

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
    msg.setTimeStamp(0.587108840739);
    msg.setSource(15548U);
    msg.setSourceEntity(132U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(129U);
    msg.value = 0.577543280005;

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
    msg.setTimeStamp(0.363149847241);
    msg.setSource(22705U);
    msg.setSourceEntity(26U);
    msg.setDestination(50536U);
    msg.setDestinationEntity(108U);
    msg.value = 0.588492687927;

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
    msg.setTimeStamp(0.572568838517);
    msg.setSource(37474U);
    msg.setSourceEntity(248U);
    msg.setDestination(2725U);
    msg.setDestinationEntity(6U);
    msg.value = 0.296200781781;

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
    msg.setTimeStamp(0.237890946648);
    msg.setSource(30280U);
    msg.setSourceEntity(57U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(34U);
    msg.value = 0.615522220159;

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
    msg.setTimeStamp(0.696481198575);
    msg.setSource(29159U);
    msg.setSourceEntity(21U);
    msg.setDestination(60303U);
    msg.setDestinationEntity(214U);
    msg.value = 0.487089283514;

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
    msg.setTimeStamp(0.711823212313);
    msg.setSource(9990U);
    msg.setSourceEntity(25U);
    msg.setDestination(16644U);
    msg.setDestinationEntity(201U);
    msg.value = 0.274598599719;

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
    msg.setTimeStamp(0.541913282042);
    msg.setSource(53465U);
    msg.setSourceEntity(110U);
    msg.setDestination(52597U);
    msg.setDestinationEntity(213U);
    msg.value = 0.109695050625;

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
    msg.setTimeStamp(0.18046845821);
    msg.setSource(29207U);
    msg.setSourceEntity(208U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(252U);
    msg.value = 0.245760778882;

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
    msg.setTimeStamp(0.0452252766375);
    msg.setSource(9682U);
    msg.setSourceEntity(244U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(152U);
    msg.value = 0.586501477661;

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
    msg.setTimeStamp(0.972892056813);
    msg.setSource(2507U);
    msg.setSourceEntity(224U);
    msg.setDestination(14619U);
    msg.setDestinationEntity(182U);
    msg.value = 0.56853483971;

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
    msg.setTimeStamp(0.374482711407);
    msg.setSource(58816U);
    msg.setSourceEntity(183U);
    msg.setDestination(11262U);
    msg.setDestinationEntity(44U);
    msg.value = 0.465203715699;

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
    msg.setTimeStamp(0.642696037002);
    msg.setSource(24930U);
    msg.setSourceEntity(161U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(236U);
    msg.value = 0.0826107246932;

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
    msg.setTimeStamp(0.647284081843);
    msg.setSource(9091U);
    msg.setSourceEntity(82U);
    msg.setDestination(11037U);
    msg.setDestinationEntity(251U);
    msg.value = 0.970732078444;

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
    msg.setTimeStamp(0.631362334708);
    msg.setSource(13U);
    msg.setSourceEntity(233U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(240U);
    msg.id = 182U;
    msg.zoom = 9U;
    msg.action = 29U;

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
    msg.setTimeStamp(0.49817596498);
    msg.setSource(3781U);
    msg.setSourceEntity(50U);
    msg.setDestination(45239U);
    msg.setDestinationEntity(171U);
    msg.id = 209U;
    msg.zoom = 130U;
    msg.action = 16U;

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
    msg.setTimeStamp(0.588035959338);
    msg.setSource(55197U);
    msg.setSourceEntity(172U);
    msg.setDestination(28071U);
    msg.setDestinationEntity(48U);
    msg.id = 49U;
    msg.zoom = 236U;
    msg.action = 48U;

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
    msg.setTimeStamp(0.785489239366);
    msg.setSource(62480U);
    msg.setSourceEntity(35U);
    msg.setDestination(13861U);
    msg.setDestinationEntity(92U);
    msg.id = 218U;
    msg.value = 0.353394628771;

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
    msg.setTimeStamp(0.458928806703);
    msg.setSource(61979U);
    msg.setSourceEntity(106U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(203U);
    msg.id = 134U;
    msg.value = 0.960154553044;

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
    msg.setTimeStamp(0.792184961362);
    msg.setSource(48226U);
    msg.setSourceEntity(122U);
    msg.setDestination(32538U);
    msg.setDestinationEntity(121U);
    msg.id = 229U;
    msg.value = 0.563456533217;

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
    msg.setTimeStamp(0.0681682622809);
    msg.setSource(57569U);
    msg.setSourceEntity(106U);
    msg.setDestination(32904U);
    msg.setDestinationEntity(205U);
    msg.id = 104U;
    msg.value = 0.397798461655;

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
    msg.setTimeStamp(0.964801612051);
    msg.setSource(796U);
    msg.setSourceEntity(219U);
    msg.setDestination(47535U);
    msg.setDestinationEntity(118U);
    msg.id = 113U;
    msg.value = 0.089970896343;

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
    msg.setTimeStamp(0.76830625395);
    msg.setSource(25787U);
    msg.setSourceEntity(139U);
    msg.setDestination(45364U);
    msg.setDestinationEntity(34U);
    msg.id = 175U;
    msg.value = 0.875552008293;

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
    msg.setTimeStamp(0.713934626052);
    msg.setSource(11647U);
    msg.setSourceEntity(64U);
    msg.setDestination(46211U);
    msg.setDestinationEntity(6U);
    msg.id = 128U;
    msg.angle = 0.446393242429;

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
    msg.setTimeStamp(0.775537909561);
    msg.setSource(39893U);
    msg.setSourceEntity(167U);
    msg.setDestination(1602U);
    msg.setDestinationEntity(98U);
    msg.id = 101U;
    msg.angle = 0.747032426612;

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
    msg.setTimeStamp(0.251339781304);
    msg.setSource(30894U);
    msg.setSourceEntity(119U);
    msg.setDestination(48244U);
    msg.setDestinationEntity(73U);
    msg.id = 103U;
    msg.angle = 0.869109004168;

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
    msg.setTimeStamp(0.052558284253);
    msg.setSource(22852U);
    msg.setSourceEntity(216U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(227U);
    msg.op = 108U;
    msg.actions.assign("HUMQRYQSQLSAEDYFDFQBEEECEWNJLXAOVTCKPLNIQZVNBKXJXBEWGSVGOOWNZGBPTTPY");

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
    msg.setTimeStamp(0.309327669127);
    msg.setSource(54553U);
    msg.setSourceEntity(243U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(50U);
    msg.op = 128U;
    msg.actions.assign("BIWDKALLKCQ");

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
    msg.setTimeStamp(0.644289450778);
    msg.setSource(38828U);
    msg.setSourceEntity(211U);
    msg.setDestination(16870U);
    msg.setDestinationEntity(44U);
    msg.op = 213U;
    msg.actions.assign("IJKEFCIHHCBTLWUFOMFPMSLTKUDAMWBGMYOWXICZHQHAYLKKIMVBRGLSEOZORBEXXBJGTDYWFYQHKAC");

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
    msg.setTimeStamp(0.686061602951);
    msg.setSource(1640U);
    msg.setSourceEntity(235U);
    msg.setDestination(21082U);
    msg.setDestinationEntity(240U);
    msg.actions.assign("AWTWMNATGDGRKQWAQXHULVQTPTQJRLPXNUQRFDJFUZDFYBMYDJPJZVSOYXYWIKCIZJPWCJLFBXHQTOWLHZFZQNGKYSJEHSTONOOUBKXKQCDAOVLJAEFFUXHZCXFEINEOPHTGMHGLIDJRCDCSNKBCDGWWRKEILM");

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
    msg.setTimeStamp(0.282087417017);
    msg.setSource(65118U);
    msg.setSourceEntity(117U);
    msg.setDestination(53710U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("ZVINAIUHNEHUSQMQWGFSLPOXSLGQCTTXGXXJABKNYEUIZZWBIVMUZPDJBPIQBHLOYSOJEMNLETKFJBCYUQPCIRHKDWAAHYBKKDXRSFCMXAQOZREHKLNNTJOFADEAW");

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
    msg.setTimeStamp(0.0738501120372);
    msg.setSource(41629U);
    msg.setSourceEntity(234U);
    msg.setDestination(49131U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("BRXWSNLPBNUMOVULZKPSYFZAPKTZJGHCDRJKRFGBOVFMGHUVYGDHIEJUEAYOZLARHGWOBEMIYVEKULVRXWTEUJMJHKE");

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
    msg.setTimeStamp(0.439488359277);
    msg.setSource(46686U);
    msg.setSourceEntity(110U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(143U);
    msg.button = 241U;
    msg.value = 21U;

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
    msg.setTimeStamp(0.160337495853);
    msg.setSource(13539U);
    msg.setSourceEntity(33U);
    msg.setDestination(61812U);
    msg.setDestinationEntity(65U);
    msg.button = 90U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.0411366166907);
    msg.setSource(49805U);
    msg.setSourceEntity(212U);
    msg.setDestination(64802U);
    msg.setDestinationEntity(210U);
    msg.button = 90U;
    msg.value = 9U;

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
    msg.setTimeStamp(0.980447215425);
    msg.setSource(13390U);
    msg.setSourceEntity(44U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(16U);
    msg.op = 43U;
    msg.text.assign("LBUTDEWQBXKVIORXFQTRX");

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
    msg.setTimeStamp(0.00130594590238);
    msg.setSource(33870U);
    msg.setSourceEntity(243U);
    msg.setDestination(65367U);
    msg.setDestinationEntity(74U);
    msg.op = 204U;
    msg.text.assign("UNERDDUKVHBEEUCFRUBNTONOABDQJBZUKRQGBJCLVDLKOKEZZZYMJLOR");

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
    msg.setTimeStamp(0.114190109549);
    msg.setSource(64223U);
    msg.setSourceEntity(20U);
    msg.setDestination(64866U);
    msg.setDestinationEntity(181U);
    msg.op = 114U;
    msg.text.assign("STBVRYGKHIRCZBUGPWXGAXBONIXPNLQXHREKUJMIWGIYZCEAIFKGPRMXIJYKTMVCMBFZDJJAQTZRYKLNOGBKBDVATGTAPRGHDECUSSPLJMZXUIQEXELOCWARPOCGWBYDWFNSQMFOVJQZYYQRYAOUZNPPSSXQAGELPHVQCRTSVORKDWAJXKZKWDFOILMZLPOSEJZCIHLBVDELCONJUYNFNUWLWSKUTEMEUNHHHSDQADYQHXV");

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
    msg.setTimeStamp(0.70841525734);
    msg.setSource(63183U);
    msg.setSourceEntity(48U);
    msg.setDestination(40094U);
    msg.setDestinationEntity(120U);
    msg.op = 253U;
    msg.time_remain = 0.674475924997;
    msg.sched_time = 0.775585115691;

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
    msg.setTimeStamp(0.0978202520556);
    msg.setSource(30644U);
    msg.setSourceEntity(49U);
    msg.setDestination(41804U);
    msg.setDestinationEntity(36U);
    msg.op = 144U;
    msg.time_remain = 0.939033294993;
    msg.sched_time = 0.333758419535;

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
    msg.setTimeStamp(0.653923998601);
    msg.setSource(33510U);
    msg.setSourceEntity(53U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(114U);
    msg.op = 157U;
    msg.time_remain = 0.401830435255;
    msg.sched_time = 0.339884614721;

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
    msg.setTimeStamp(0.552075409235);
    msg.setSource(57897U);
    msg.setSourceEntity(59U);
    msg.setDestination(59897U);
    msg.setDestinationEntity(10U);
    msg.name.assign("ULAQYSBHRSUIPMRMKFNCBUJLGWOZDSYKJIGSKASOOCJVINPHDVRMEIEPZTYHZTAUDRVQBQMGHPTXKONGVKMIAFIUWLSIPXDJYSFWFCQPIGUPJQVTXKUYAUDDJABXEYKYTXVZCMSSVHOGNGZEQCTRUH");
    msg.op = 162U;
    msg.sched_time = 0.72129045878;

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
    msg.setTimeStamp(0.288014515227);
    msg.setSource(6726U);
    msg.setSourceEntity(208U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(187U);
    msg.name.assign("DHZTLLPVLSVJALWIDTXQLOVPEUMETUATWMRQAFXNGWEFEBZFFKKARWBMGJJOBGZWSPLOXSCKQGIODNXNUQLHPYMDALWDYBGNUBHRPUFPLISPBIRIRYEVISCQZQETXHYKFHRFXBABZMOAJMP");
    msg.op = 116U;
    msg.sched_time = 0.934678783882;

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
    msg.setTimeStamp(0.404749772853);
    msg.setSource(64460U);
    msg.setSourceEntity(96U);
    msg.setDestination(31693U);
    msg.setDestinationEntity(216U);
    msg.name.assign("VXJTLPOAIIGTLBXKLINGOTWSICBSQWAVZCNZKHGCXPUEMFAJXQCRKKCMOQPEQBIPYOHCREJEIHBWRMWEQUPYTYGSXJXBZEQUDPAVSNYRBJSSLALDAYIQPWZDXVGHNBRWUNFEHUHUAGUJKORMRXZKNCGZCTYYIROBMOBRIVAZMWAJLOEDMTNTVZEVPKKHNOWPUWIDVQHZDMSGTVGFFLJAQZLNOWUSKDKYJY");
    msg.op = 161U;
    msg.sched_time = 0.626407427043;

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
    msg.setTimeStamp(0.432797129051);
    msg.setSource(28272U);
    msg.setSourceEntity(31U);
    msg.setDestination(33910U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.540662367176);
    msg.setSource(31418U);
    msg.setSourceEntity(12U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.876783410951);
    msg.setSource(8929U);
    msg.setSourceEntity(151U);
    msg.setDestination(63656U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.0117428712263);
    msg.setSource(14858U);
    msg.setSourceEntity(253U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(189U);
    msg.name.assign("CQKQSDXGLWFEEGBDTSITYTFJCQFUHJDUQLSEGYASJELKMZBIDHRLKJAFCPRGTROBVYPIRHWIBZJJMHMAVGXIPMVCIBVEWDQGAOMVTUBYPBXVSNQLACHALDTRTBNYFYBSOQYOKEPHUFNZGMPISXVFXNZLDIRWEEFOLNFRGTCSPKANVYNKZRKHCZCUOTXPWPUJZBYGMMTKWDW");
    msg.state = 104U;

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
    msg.setTimeStamp(0.269562329373);
    msg.setSource(54924U);
    msg.setSourceEntity(31U);
    msg.setDestination(37149U);
    msg.setDestinationEntity(22U);
    msg.name.assign("IJOBNVHPKKKWSZZUQIVARGATVRXCTTOGBFPNPTUTJGMJWHISTKIMLMXNGHBJNZXRWAEZUBQGPLDWELHLFBBLVOSPIAQTQFGNSXQRCWF");
    msg.state = 67U;

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
    msg.setTimeStamp(0.0519629165465);
    msg.setSource(34292U);
    msg.setSourceEntity(66U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(127U);
    msg.name.assign("LYODMXFCJJNFSCVBUFLJRTWNKCVILBZCYKLHMGVYWNRKYKTEDVCERPXXRTXSOUIFZVZUGMSJOQPYCYEWVHUQBEYMNGWHATNFGQQXSQAZPWKKJOVXRNSUCKEOVLVEJSLWCJCATZTOHFHOYPGWIIIPIUJBICEYIAWBDTHALXJHZMZDWRRIBNGXMMPGBNKZEDFHOUZGMBDFNQULNQQXTJTLGXFAIQSHRDAYAHVZMSESADPLRWOKPG");
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
    msg.setTimeStamp(0.498365015777);
    msg.setSource(34711U);
    msg.setSourceEntity(117U);
    msg.setDestination(58733U);
    msg.setDestinationEntity(251U);
    msg.name.assign("JSRNAJBHXPBQBTKYUVMVCCTONKRFIXHOFNWNPEZRDUCSALDLHCSPBOQAGUIWEYTMJWBVZWZSHDRIQPBGMJLRRIAAEJBDCUZQFFGLCALFZEKTH");
    msg.value = 79U;

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
    msg.setTimeStamp(0.079170660297);
    msg.setSource(27798U);
    msg.setSourceEntity(5U);
    msg.setDestination(24828U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EZFMZIEKXZMXFUTRPDWFAWOTTNYODWGNUBLDKOOLAKGHATIYUBSLFBSAFAYPJJZUDLIANFDGONNSVOTWFDLPKLQKYHBCREXZWGKTQFWBDMQJHUIQNVZRXISHJCSTKCAEXCVHVTJSCTXGCFISOVEYJNHDZXVFLKXDMZDERXZQQGRLOJPNGEWMRJSERHIAKMHGU");
    msg.value = 243U;

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
    msg.setTimeStamp(0.239839531933);
    msg.setSource(31836U);
    msg.setSourceEntity(237U);
    msg.setDestination(46390U);
    msg.setDestinationEntity(237U);
    msg.name.assign("DFXUWJHLQCKTYSJBYPDWSEZYZFMXSMZNCURZFQSTPVUYCKWDBILXAHNKPIOKQCWCQHTRBCBGGSMDPDOOLQBOMTXDNPIROINQZVZIIWOSMKCMVERHXCAEFQHKKVNHAGYGBWAXOROEVLKXVFHEJY");
    msg.value = 94U;

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
    msg.setTimeStamp(0.982941282763);
    msg.setSource(27558U);
    msg.setSourceEntity(169U);
    msg.setDestination(63129U);
    msg.setDestinationEntity(171U);
    msg.name.assign("BBZAJWCPPDJTHLMGCLNHJHBETFATWCXWUEXMYVOIRTRZPXSOWSANBDQPQCSNKCXGLJUFDDHPYHUWGCYSMYUAAZSTGZVLDKESDFFOGENWKFMKHKGMYEUZRZDFAVWPGNQBCKTRIMUQIGRALNCBAITFMQOOVILOWXYDEHKJGJKZYHLEHXXAXLBUQTBLJQRJVMRMOMSPCBLZNEFCZRUKPSVBRHFZTNSONWJIJIDVQOAVYKYPVUVNQU");

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
    msg.setTimeStamp(0.793504365706);
    msg.setSource(23671U);
    msg.setSourceEntity(139U);
    msg.setDestination(23048U);
    msg.setDestinationEntity(73U);
    msg.name.assign("UTDCPZOSDWMEUJIHMLECWVWWSGJODKGDPOHAKW");

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
    msg.setTimeStamp(0.533146231662);
    msg.setSource(27141U);
    msg.setSourceEntity(163U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(224U);
    msg.name.assign("XPODNNZIWNYKBAIHRQSMZSTOUOGFEMQYBXKMWBIXFSFTLNEQVGBJQVZETHLYSSDAULFFVNWCHHDMEJJGYKKNCRZDGLXHAXCKBUGDFAOQFLBMKCMYKPHMPIRJVRZDURKPWZKTQEUOXVXLOJBCPGQEVTFIRYPNIEVLMHAPJNJDHTRZGAJVHWLODYSWLUOTVUAZSBROPWXCUJNOPLGX");

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
    msg.setTimeStamp(0.806455817899);
    msg.setSource(7946U);
    msg.setSourceEntity(226U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(12U);
    msg.name.assign("DROBHLYRKOESKYNCNNUMFLEABDTPPPCKDCSOWITTBXIIMPRIBBJFNZ");
    msg.value = 81U;

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
    msg.setTimeStamp(0.250509692578);
    msg.setSource(32359U);
    msg.setSourceEntity(228U);
    msg.setDestination(50419U);
    msg.setDestinationEntity(200U);
    msg.name.assign("ODYEYWDKXVPLUWFAUYICC");
    msg.value = 217U;

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
    msg.setTimeStamp(0.755729019227);
    msg.setSource(38640U);
    msg.setSourceEntity(73U);
    msg.setDestination(8147U);
    msg.setDestinationEntity(19U);
    msg.name.assign("MTLCKACUWRLEPXNIQCQZXAIEOFZCLXFYEZVJOKEFDIWOYIOBNQHBDMGAMHPJPSFTMTWCWSNULIPCTTNDUPKIKELZTSCGCSYXHDUDYSDMQWHDBEYEVFBWZGSUJESGFBLGNLRZTBCHAZWMXKBNZAHARMJLGOMLHBVAXUVENCJAOWFPNOKMTAUVLNJWQWDERQPGQRJUYHRVPZOFGXAS");
    msg.value = 18U;

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
    msg.setTimeStamp(0.650582973333);
    msg.setSource(5631U);
    msg.setSourceEntity(33U);
    msg.setDestination(38536U);
    msg.setDestinationEntity(161U);
    msg.id = 233U;
    msg.period = 712979267U;
    msg.duty_cycle = 1672318549U;

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
    msg.setTimeStamp(0.865238532624);
    msg.setSource(10083U);
    msg.setSourceEntity(79U);
    msg.setDestination(10069U);
    msg.setDestinationEntity(160U);
    msg.id = 119U;
    msg.period = 1969698041U;
    msg.duty_cycle = 2641649209U;

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
    msg.setTimeStamp(0.829795801702);
    msg.setSource(22047U);
    msg.setSourceEntity(53U);
    msg.setDestination(26620U);
    msg.setDestinationEntity(217U);
    msg.id = 248U;
    msg.period = 2977170060U;
    msg.duty_cycle = 4261021139U;

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
    msg.setTimeStamp(0.406233446511);
    msg.setSource(16651U);
    msg.setSourceEntity(83U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(32U);
    msg.id = 208U;
    msg.period = 1152679369U;
    msg.duty_cycle = 3061800326U;

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
    msg.setTimeStamp(0.775436474522);
    msg.setSource(22726U);
    msg.setSourceEntity(212U);
    msg.setDestination(5377U);
    msg.setDestinationEntity(220U);
    msg.id = 252U;
    msg.period = 1751653544U;
    msg.duty_cycle = 496669739U;

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
    msg.setTimeStamp(0.800468800946);
    msg.setSource(52291U);
    msg.setSourceEntity(99U);
    msg.setDestination(23038U);
    msg.setDestinationEntity(15U);
    msg.id = 107U;
    msg.period = 1797206902U;
    msg.duty_cycle = 1103928003U;

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
    msg.setTimeStamp(0.575670360021);
    msg.setSource(21354U);
    msg.setSourceEntity(122U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.564500586613;
    msg.lon = 0.101434871933;
    msg.height = 0.451940482012;
    msg.x = 0.00854457511869;
    msg.y = 0.757801902658;
    msg.z = 0.805284492409;
    msg.phi = 0.175644475203;
    msg.theta = 0.273487748459;
    msg.psi = 0.454629301518;
    msg.u = 0.713133581876;
    msg.v = 0.283715960884;
    msg.w = 0.167247698942;
    msg.vx = 0.540803336116;
    msg.vy = 0.89742528614;
    msg.vz = 0.0940394113478;
    msg.p = 0.767643976475;
    msg.q = 0.447809537163;
    msg.r = 0.619439552803;
    msg.depth = 0.674862052163;
    msg.alt = 0.841078126572;

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
    msg.setTimeStamp(0.0156340921058);
    msg.setSource(47069U);
    msg.setSourceEntity(179U);
    msg.setDestination(49194U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.106683588572;
    msg.lon = 0.573483091055;
    msg.height = 0.885518961634;
    msg.x = 0.587651148231;
    msg.y = 0.982456986105;
    msg.z = 0.47007451214;
    msg.phi = 0.864801866875;
    msg.theta = 0.274701731233;
    msg.psi = 0.642224622815;
    msg.u = 0.589151689035;
    msg.v = 0.309461110283;
    msg.w = 0.147581256941;
    msg.vx = 0.459383326447;
    msg.vy = 0.540065196155;
    msg.vz = 0.391746643064;
    msg.p = 0.57671946371;
    msg.q = 0.513734235087;
    msg.r = 0.19716454403;
    msg.depth = 0.969201844312;
    msg.alt = 0.00891597580823;

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
    msg.setTimeStamp(0.834391621449);
    msg.setSource(23269U);
    msg.setSourceEntity(201U);
    msg.setDestination(38541U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.39082934604;
    msg.lon = 0.0327468747289;
    msg.height = 0.389067473302;
    msg.x = 0.980725963253;
    msg.y = 0.546425153284;
    msg.z = 0.948320504704;
    msg.phi = 0.243507239345;
    msg.theta = 0.840660620597;
    msg.psi = 0.419893682576;
    msg.u = 0.133346181452;
    msg.v = 0.934783101961;
    msg.w = 0.783379622072;
    msg.vx = 0.35065691082;
    msg.vy = 0.0834860257182;
    msg.vz = 0.0410096443418;
    msg.p = 0.998400406774;
    msg.q = 0.554794897664;
    msg.r = 0.382223067653;
    msg.depth = 0.360376817105;
    msg.alt = 0.259546193714;

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
    msg.setTimeStamp(0.573488949672);
    msg.setSource(15536U);
    msg.setSourceEntity(189U);
    msg.setDestination(19627U);
    msg.setDestinationEntity(194U);
    msg.x = 0.059320401563;
    msg.y = 0.689420891682;
    msg.z = 0.135356219978;

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
    msg.setTimeStamp(0.498153634398);
    msg.setSource(19576U);
    msg.setSourceEntity(69U);
    msg.setDestination(6528U);
    msg.setDestinationEntity(224U);
    msg.x = 0.752760203137;
    msg.y = 0.920213156886;
    msg.z = 0.646412403288;

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
    msg.setTimeStamp(0.899393158516);
    msg.setSource(48958U);
    msg.setSourceEntity(222U);
    msg.setDestination(46650U);
    msg.setDestinationEntity(122U);
    msg.x = 0.844980284971;
    msg.y = 0.0939629809564;
    msg.z = 0.813714661335;

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
    msg.setTimeStamp(0.860181087677);
    msg.setSource(53791U);
    msg.setSourceEntity(59U);
    msg.setDestination(1181U);
    msg.setDestinationEntity(127U);
    msg.value = 0.819892652414;

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
    msg.setTimeStamp(0.920431313519);
    msg.setSource(57687U);
    msg.setSourceEntity(185U);
    msg.setDestination(46034U);
    msg.setDestinationEntity(138U);
    msg.value = 0.64487965118;

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
    msg.setTimeStamp(0.408738639553);
    msg.setSource(13304U);
    msg.setSourceEntity(133U);
    msg.setDestination(25600U);
    msg.setDestinationEntity(166U);
    msg.value = 0.757647934344;

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
    msg.setTimeStamp(0.063569589063);
    msg.setSource(35995U);
    msg.setSourceEntity(162U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(207U);
    msg.value = 0.740465223378;

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
    msg.setTimeStamp(0.419121619947);
    msg.setSource(3610U);
    msg.setSourceEntity(26U);
    msg.setDestination(43132U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0847040264343;

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
    msg.setTimeStamp(0.403580149717);
    msg.setSource(15888U);
    msg.setSourceEntity(249U);
    msg.setDestination(51445U);
    msg.setDestinationEntity(42U);
    msg.value = 0.244576341445;

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
    msg.setTimeStamp(0.391011579896);
    msg.setSource(64839U);
    msg.setSourceEntity(45U);
    msg.setDestination(43522U);
    msg.setDestinationEntity(99U);
    msg.x = 0.940033732022;
    msg.y = 0.133291750309;
    msg.z = 0.410734119551;
    msg.phi = 0.430880040367;
    msg.theta = 0.781193628554;
    msg.psi = 0.568676273068;
    msg.p = 0.498528106214;
    msg.q = 0.689580998169;
    msg.r = 0.950052767326;
    msg.u = 0.636450343967;
    msg.v = 0.14465818199;
    msg.w = 0.172436552143;
    msg.bias_psi = 0.464988172304;
    msg.bias_r = 0.616204401936;

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
    msg.setTimeStamp(0.160073785607);
    msg.setSource(26309U);
    msg.setSourceEntity(220U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(37U);
    msg.x = 0.963840237626;
    msg.y = 0.99319324691;
    msg.z = 0.415229481257;
    msg.phi = 0.112212841007;
    msg.theta = 0.436130314815;
    msg.psi = 0.503998917448;
    msg.p = 0.61358047235;
    msg.q = 0.570299714326;
    msg.r = 0.905172420558;
    msg.u = 0.367167225919;
    msg.v = 0.812552421091;
    msg.w = 0.256156298063;
    msg.bias_psi = 0.788896714752;
    msg.bias_r = 0.64007387601;

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
    msg.setTimeStamp(0.360858449757);
    msg.setSource(23580U);
    msg.setSourceEntity(164U);
    msg.setDestination(24158U);
    msg.setDestinationEntity(4U);
    msg.x = 0.24669871973;
    msg.y = 0.66922872904;
    msg.z = 0.860872399542;
    msg.phi = 0.257010491857;
    msg.theta = 0.859415925829;
    msg.psi = 0.929463438176;
    msg.p = 0.419588907815;
    msg.q = 0.214783279963;
    msg.r = 0.714533316354;
    msg.u = 0.589866281609;
    msg.v = 0.935451108484;
    msg.w = 0.904623623967;
    msg.bias_psi = 0.24643945836;
    msg.bias_r = 0.173563828944;

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
    msg.setTimeStamp(0.0380035514037);
    msg.setSource(17446U);
    msg.setSourceEntity(178U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(252U);
    msg.bias_psi = 0.345474698506;
    msg.bias_r = 0.334350556717;
    msg.cog = 0.772424033405;
    msg.cyaw = 0.987335997998;
    msg.lbl_rej_level = 0.598875922154;
    msg.gps_rej_level = 0.707225386117;
    msg.custom_x = 0.870843724718;
    msg.custom_y = 0.663432222665;
    msg.custom_z = 0.795285451559;

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
    msg.setTimeStamp(0.449953687637);
    msg.setSource(18043U);
    msg.setSourceEntity(76U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.199149340378;
    msg.bias_r = 0.211515686091;
    msg.cog = 0.95093595376;
    msg.cyaw = 0.263436250101;
    msg.lbl_rej_level = 0.132822525434;
    msg.gps_rej_level = 0.721165853923;
    msg.custom_x = 0.523944066032;
    msg.custom_y = 0.120527651365;
    msg.custom_z = 0.377196178316;

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
    msg.setTimeStamp(0.501860004732);
    msg.setSource(7251U);
    msg.setSourceEntity(1U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(230U);
    msg.bias_psi = 0.306002250573;
    msg.bias_r = 0.621301958277;
    msg.cog = 0.701241346754;
    msg.cyaw = 0.143761177942;
    msg.lbl_rej_level = 0.719801629577;
    msg.gps_rej_level = 0.77298445122;
    msg.custom_x = 0.910710930177;
    msg.custom_y = 0.10499872236;
    msg.custom_z = 0.415470255953;

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
    msg.setTimeStamp(0.0496178160749);
    msg.setSource(63232U);
    msg.setSourceEntity(40U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(69U);
    msg.utc_time = 0.98048595203;
    msg.reason = 206U;

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
    msg.setTimeStamp(0.0444962410193);
    msg.setSource(8000U);
    msg.setSourceEntity(35U);
    msg.setDestination(46654U);
    msg.setDestinationEntity(136U);
    msg.utc_time = 0.773004815192;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.673369845566);
    msg.setSource(39696U);
    msg.setSourceEntity(239U);
    msg.setDestination(34197U);
    msg.setDestinationEntity(250U);
    msg.utc_time = 0.836681474981;
    msg.reason = 15U;

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
    msg.setTimeStamp(0.905541695622);
    msg.setSource(50194U);
    msg.setSourceEntity(244U);
    msg.setDestination(27629U);
    msg.setDestinationEntity(207U);
    msg.id = 151U;
    msg.range = 0.283703595824;
    msg.acceptance = 221U;

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
    msg.setTimeStamp(0.440518569835);
    msg.setSource(6880U);
    msg.setSourceEntity(210U);
    msg.setDestination(56308U);
    msg.setDestinationEntity(243U);
    msg.id = 186U;
    msg.range = 0.20657860737;
    msg.acceptance = 240U;

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
    msg.setTimeStamp(0.267192669219);
    msg.setSource(22445U);
    msg.setSourceEntity(93U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(127U);
    msg.id = 101U;
    msg.range = 0.538292162735;
    msg.acceptance = 60U;

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
    msg.setTimeStamp(0.796162334878);
    msg.setSource(24340U);
    msg.setSourceEntity(183U);
    msg.setDestination(42292U);
    msg.setDestinationEntity(226U);
    msg.type = 83U;
    msg.reason = 146U;
    msg.value = 0.107446742491;
    msg.timestep = 0.445198421713;

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
    msg.setTimeStamp(0.138546040408);
    msg.setSource(64284U);
    msg.setSourceEntity(223U);
    msg.setDestination(53223U);
    msg.setDestinationEntity(203U);
    msg.type = 85U;
    msg.reason = 7U;
    msg.value = 0.140446799753;
    msg.timestep = 0.579969584226;

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
    msg.setTimeStamp(0.9621351158);
    msg.setSource(24133U);
    msg.setSourceEntity(24U);
    msg.setDestination(33870U);
    msg.setDestinationEntity(67U);
    msg.type = 73U;
    msg.reason = 73U;
    msg.value = 0.519103909595;
    msg.timestep = 0.16433082905;

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
    msg.setTimeStamp(0.640588027246);
    msg.setSource(53797U);
    msg.setSourceEntity(186U);
    msg.setDestination(23483U);
    msg.setDestinationEntity(205U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YDFPWLXIPGAFGHUKVTGSXOVOMVAPAUSCTNSTXJGMJYCETENEOJMSLCBWHEZPIBXNHTIVNOXFDUGRKQYVSPTBYUGPWNWDRUOVJIIHECSKCJOPNIZJQNOWMJSFUHMDLBFKQSBKQQEVQIMDTZQGLTWADJAKNLRHDIZANKFYRZYMDRHIFPTCEXRKXRA");
    tmp_msg_0.lat = 0.345425944263;
    tmp_msg_0.lon = 0.363729071547;
    tmp_msg_0.depth = 0.65965699083;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 198U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.239770563587;
    msg.y = 0.116222508142;
    msg.var_x = 0.514067021985;
    msg.var_y = 0.792090782124;
    msg.distance = 0.567739912413;

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
    msg.setTimeStamp(0.270876800034);
    msg.setSource(12165U);
    msg.setSourceEntity(23U);
    msg.setDestination(5764U);
    msg.setDestinationEntity(158U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QQQZGAFJHJZVALUPUIADMTCGOJRYWYCWFBPMUAUZKTQTMPMWUDILNNVVPBRKJDRHAXEDFIFGSVRHJYIGXPOBBQXATPQKPYVPFSOZCSHMFBFRCDQGQGCSVXUNRIHONRILNDJLTXPJLIXOVQEGBWEMCQKGHTYHFEEBNH");
    tmp_msg_0.lat = 0.884751065042;
    tmp_msg_0.lon = 0.244338390713;
    tmp_msg_0.depth = 0.277278472982;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 102U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.197879521649;
    msg.y = 0.348671536927;
    msg.var_x = 0.195639586039;
    msg.var_y = 0.336461263853;
    msg.distance = 0.995528719522;

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
    msg.setTimeStamp(0.729639593128);
    msg.setSource(4817U);
    msg.setSourceEntity(60U);
    msg.setDestination(61865U);
    msg.setDestinationEntity(56U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PZANZLCPKUQGVPYDGBVJSZKFKAWMNCULECCGGDQAWLTJLYBILMIRUPMIWJEKGHHAOWHSTBRSQPOIONIVHZDSPABQOYPMAAETBXCVVFVKZHEYYOJOPFTXDIFEHQGRTKFBTVKARCQUUJDRH");
    tmp_msg_0.lat = 0.440509687278;
    tmp_msg_0.lon = 0.956660385826;
    tmp_msg_0.depth = 0.0749163601698;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.337313161618;
    msg.y = 0.83544368749;
    msg.var_x = 0.137073836403;
    msg.var_y = 0.801002773594;
    msg.distance = 0.111193370692;

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
    msg.setTimeStamp(0.850158407449);
    msg.setSource(39414U);
    msg.setSourceEntity(252U);
    msg.setDestination(6331U);
    msg.setDestinationEntity(124U);
    msg.state = 52U;

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
    msg.setTimeStamp(0.83974175442);
    msg.setSource(53569U);
    msg.setSourceEntity(49U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(125U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.00779886840291);
    msg.setSource(15641U);
    msg.setSourceEntity(106U);
    msg.setDestination(51074U);
    msg.setDestinationEntity(78U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.556586645069);
    msg.setSource(97U);
    msg.setSourceEntity(223U);
    msg.setDestination(27055U);
    msg.setDestinationEntity(160U);
    msg.x = 0.0265952024818;
    msg.y = 0.101513956949;
    msg.z = 0.306776507242;

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
    msg.setTimeStamp(0.102080409423);
    msg.setSource(24733U);
    msg.setSourceEntity(157U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(88U);
    msg.x = 0.336092663884;
    msg.y = 0.387334707133;
    msg.z = 0.833108181514;

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
    msg.setTimeStamp(0.728770169935);
    msg.setSource(2245U);
    msg.setSourceEntity(101U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(231U);
    msg.x = 0.633703553121;
    msg.y = 0.493148245713;
    msg.z = 0.946581713695;

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
    msg.setTimeStamp(0.996986514386);
    msg.setSource(19426U);
    msg.setSourceEntity(245U);
    msg.setDestination(5966U);
    msg.setDestinationEntity(7U);
    msg.va = 0.83441569578;
    msg.aoa = 0.310175320219;
    msg.ssa = 0.72330084086;

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
    msg.setTimeStamp(0.951157433452);
    msg.setSource(9783U);
    msg.setSourceEntity(124U);
    msg.setDestination(12191U);
    msg.setDestinationEntity(227U);
    msg.va = 0.4797846563;
    msg.aoa = 0.61537340115;
    msg.ssa = 0.234541953147;

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
    msg.setTimeStamp(0.912467262417);
    msg.setSource(4842U);
    msg.setSourceEntity(219U);
    msg.setDestination(2379U);
    msg.setDestinationEntity(58U);
    msg.va = 0.839111267475;
    msg.aoa = 0.704126117325;
    msg.ssa = 0.266664076342;

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
    msg.setTimeStamp(0.290578827256);
    msg.setSource(33080U);
    msg.setSourceEntity(58U);
    msg.setDestination(42195U);
    msg.setDestinationEntity(48U);
    msg.value = 0.807043521958;

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
    msg.setTimeStamp(0.511041656653);
    msg.setSource(49055U);
    msg.setSourceEntity(210U);
    msg.setDestination(14509U);
    msg.setDestinationEntity(189U);
    msg.value = 0.571152095466;

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
    msg.setTimeStamp(0.385004566748);
    msg.setSource(22680U);
    msg.setSourceEntity(24U);
    msg.setDestination(55214U);
    msg.setDestinationEntity(111U);
    msg.value = 0.755634547385;

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
    msg.setTimeStamp(0.78064364859);
    msg.setSource(8125U);
    msg.setSourceEntity(102U);
    msg.setDestination(5524U);
    msg.setDestinationEntity(48U);
    msg.value = 0.926069393585;
    msg.z_units = 223U;

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
    msg.setTimeStamp(0.542003925243);
    msg.setSource(26851U);
    msg.setSourceEntity(161U);
    msg.setDestination(10926U);
    msg.setDestinationEntity(196U);
    msg.value = 0.453647248077;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.702639881947);
    msg.setSource(7044U);
    msg.setSourceEntity(93U);
    msg.setDestination(53747U);
    msg.setDestinationEntity(169U);
    msg.value = 0.422633522508;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.367875276913);
    msg.setSource(45342U);
    msg.setSourceEntity(179U);
    msg.setDestination(5824U);
    msg.setDestinationEntity(49U);
    msg.value = 0.414524674271;
    msg.speed_units = 189U;

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
    msg.setTimeStamp(0.334270540105);
    msg.setSource(63114U);
    msg.setSourceEntity(3U);
    msg.setDestination(43328U);
    msg.setDestinationEntity(24U);
    msg.value = 0.574141955976;
    msg.speed_units = 101U;

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
    msg.setTimeStamp(0.59722294352);
    msg.setSource(47071U);
    msg.setSourceEntity(165U);
    msg.setDestination(39634U);
    msg.setDestinationEntity(85U);
    msg.value = 0.388629066886;
    msg.speed_units = 194U;

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
    msg.setTimeStamp(0.84784623432);
    msg.setSource(58039U);
    msg.setSourceEntity(170U);
    msg.setDestination(15090U);
    msg.setDestinationEntity(33U);
    msg.value = 0.591149187941;

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
    msg.setTimeStamp(0.634062675688);
    msg.setSource(54215U);
    msg.setSourceEntity(25U);
    msg.setDestination(31919U);
    msg.setDestinationEntity(146U);
    msg.value = 0.903714410665;

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
    msg.setTimeStamp(0.754884574266);
    msg.setSource(48302U);
    msg.setSourceEntity(16U);
    msg.setDestination(15615U);
    msg.setDestinationEntity(22U);
    msg.value = 0.292929687005;

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
    msg.setTimeStamp(0.445972346654);
    msg.setSource(39884U);
    msg.setSourceEntity(67U);
    msg.setDestination(61867U);
    msg.setDestinationEntity(38U);
    msg.value = 0.366170709732;

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
    msg.setTimeStamp(0.015338432577);
    msg.setSource(39482U);
    msg.setSourceEntity(49U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0918695399344;

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
    msg.setTimeStamp(0.772192025172);
    msg.setSource(41557U);
    msg.setSourceEntity(178U);
    msg.setDestination(1633U);
    msg.setDestinationEntity(10U);
    msg.value = 0.443722112475;

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
    msg.setTimeStamp(0.849573821448);
    msg.setSource(62458U);
    msg.setSourceEntity(7U);
    msg.setDestination(20441U);
    msg.setDestinationEntity(100U);
    msg.value = 0.590702855543;

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
    msg.setTimeStamp(0.679372863221);
    msg.setSource(1656U);
    msg.setSourceEntity(171U);
    msg.setDestination(46382U);
    msg.setDestinationEntity(210U);
    msg.value = 0.979055202381;

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
    msg.setTimeStamp(0.389184488288);
    msg.setSource(52768U);
    msg.setSourceEntity(68U);
    msg.setDestination(31730U);
    msg.setDestinationEntity(236U);
    msg.value = 0.579261877773;

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
    msg.setTimeStamp(0.710354825808);
    msg.setSource(31505U);
    msg.setSourceEntity(58U);
    msg.setDestination(30313U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 2290048509U;
    msg.start_lat = 0.373888248942;
    msg.start_lon = 0.617192832638;
    msg.start_z = 0.487189737674;
    msg.start_z_units = 7U;
    msg.end_lat = 0.291013341381;
    msg.end_lon = 0.440744613775;
    msg.end_z = 0.545397789618;
    msg.end_z_units = 156U;
    msg.speed = 0.0128682495677;
    msg.speed_units = 94U;
    msg.lradius = 0.901382224643;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.307890311636);
    msg.setSource(8605U);
    msg.setSourceEntity(186U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 2812140885U;
    msg.start_lat = 0.758043341151;
    msg.start_lon = 0.607101136279;
    msg.start_z = 0.7596130994;
    msg.start_z_units = 131U;
    msg.end_lat = 0.927891670853;
    msg.end_lon = 0.747698381374;
    msg.end_z = 0.492284979654;
    msg.end_z_units = 3U;
    msg.speed = 0.294688681442;
    msg.speed_units = 87U;
    msg.lradius = 0.688522637712;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.0663171065394);
    msg.setSource(12659U);
    msg.setSourceEntity(106U);
    msg.setDestination(22606U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 1483813252U;
    msg.start_lat = 0.488752519878;
    msg.start_lon = 0.334918164547;
    msg.start_z = 0.502946462957;
    msg.start_z_units = 172U;
    msg.end_lat = 0.755392345879;
    msg.end_lon = 0.360654368096;
    msg.end_z = 0.585193170805;
    msg.end_z_units = 69U;
    msg.speed = 0.591379940987;
    msg.speed_units = 219U;
    msg.lradius = 0.483538819257;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.804050709272);
    msg.setSource(21357U);
    msg.setSourceEntity(41U);
    msg.setDestination(45718U);
    msg.setDestinationEntity(229U);
    msg.x = 0.817854670665;
    msg.y = 0.609104605179;
    msg.z = 0.6842700483;
    msg.k = 0.974977297431;
    msg.m = 0.21794298891;
    msg.n = 0.6293274987;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.243898405091);
    msg.setSource(947U);
    msg.setSourceEntity(131U);
    msg.setDestination(52143U);
    msg.setDestinationEntity(130U);
    msg.x = 0.232534445326;
    msg.y = 0.582401576387;
    msg.z = 0.513353990911;
    msg.k = 0.293219257153;
    msg.m = 0.608591241044;
    msg.n = 0.900372482014;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.802848973635);
    msg.setSource(25316U);
    msg.setSourceEntity(238U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(40U);
    msg.x = 0.555490484992;
    msg.y = 0.961216924382;
    msg.z = 0.895069560998;
    msg.k = 0.196169167048;
    msg.m = 0.184805327984;
    msg.n = 0.0827960447129;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.973444587355);
    msg.setSource(28219U);
    msg.setSourceEntity(5U);
    msg.setDestination(29107U);
    msg.setDestinationEntity(186U);
    msg.value = 0.778000281852;

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
    msg.setTimeStamp(0.969928406946);
    msg.setSource(39922U);
    msg.setSourceEntity(138U);
    msg.setDestination(61999U);
    msg.setDestinationEntity(202U);
    msg.value = 0.249024811701;

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
    msg.setTimeStamp(0.649425584908);
    msg.setSource(17183U);
    msg.setSourceEntity(163U);
    msg.setDestination(28889U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0637254796517;

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
    msg.setTimeStamp(0.0510212045907);
    msg.setSource(51877U);
    msg.setSourceEntity(62U);
    msg.setDestination(36303U);
    msg.setDestinationEntity(40U);
    msg.u = 0.13777720468;
    msg.v = 0.303618479574;
    msg.w = 0.865791614477;
    msg.p = 0.935367809056;
    msg.q = 0.606467267187;
    msg.r = 0.26648454641;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.708750637414);
    msg.setSource(29540U);
    msg.setSourceEntity(106U);
    msg.setDestination(41115U);
    msg.setDestinationEntity(126U);
    msg.u = 0.420881842052;
    msg.v = 0.850629362436;
    msg.w = 0.0664848794214;
    msg.p = 0.841181200658;
    msg.q = 0.771379017811;
    msg.r = 0.0313840422312;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.831914396244);
    msg.setSource(6674U);
    msg.setSourceEntity(113U);
    msg.setDestination(33723U);
    msg.setDestinationEntity(90U);
    msg.u = 0.885469729503;
    msg.v = 0.262406499303;
    msg.w = 0.162295919813;
    msg.p = 0.520894737707;
    msg.q = 0.597728929409;
    msg.r = 0.356236227877;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.150026729136);
    msg.setSource(41208U);
    msg.setSourceEntity(53U);
    msg.setDestination(58959U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 706467173U;
    msg.start_lat = 0.769507121863;
    msg.start_lon = 0.853353436944;
    msg.start_z = 0.0714740782842;
    msg.start_z_units = 203U;
    msg.end_lat = 0.817124653232;
    msg.end_lon = 0.615823505908;
    msg.end_z = 0.433228151401;
    msg.end_z_units = 96U;
    msg.lradius = 0.144921384331;
    msg.flags = 97U;
    msg.x = 0.0701750792862;
    msg.y = 0.873918529101;
    msg.z = 0.989536470239;
    msg.vx = 0.582420841479;
    msg.vy = 0.00103618398813;
    msg.vz = 0.540156933396;
    msg.course_error = 0.829234309532;
    msg.eta = 42750U;

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
    msg.setTimeStamp(0.811999293843);
    msg.setSource(1755U);
    msg.setSourceEntity(35U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(193U);
    msg.path_ref = 4050889052U;
    msg.start_lat = 0.416636796571;
    msg.start_lon = 0.631516436337;
    msg.start_z = 0.542956172213;
    msg.start_z_units = 137U;
    msg.end_lat = 0.11452334961;
    msg.end_lon = 0.23305289679;
    msg.end_z = 0.559103799058;
    msg.end_z_units = 180U;
    msg.lradius = 0.711642676534;
    msg.flags = 208U;
    msg.x = 0.146304891501;
    msg.y = 0.430975722423;
    msg.z = 0.511073884899;
    msg.vx = 0.969196202874;
    msg.vy = 0.231849136679;
    msg.vz = 0.859291218045;
    msg.course_error = 0.559303469278;
    msg.eta = 56812U;

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
    msg.setTimeStamp(0.0171282297779);
    msg.setSource(26772U);
    msg.setSourceEntity(30U);
    msg.setDestination(6638U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 3441140301U;
    msg.start_lat = 0.719006570592;
    msg.start_lon = 0.23285597951;
    msg.start_z = 0.161707409758;
    msg.start_z_units = 70U;
    msg.end_lat = 0.572229475364;
    msg.end_lon = 0.0979299007536;
    msg.end_z = 0.268082515271;
    msg.end_z_units = 131U;
    msg.lradius = 0.938374161819;
    msg.flags = 162U;
    msg.x = 0.631029733015;
    msg.y = 0.487843790773;
    msg.z = 0.941494581167;
    msg.vx = 0.902416668672;
    msg.vy = 0.668679446881;
    msg.vz = 0.901364339579;
    msg.course_error = 0.505527793262;
    msg.eta = 37809U;

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
    msg.setTimeStamp(0.422232124807);
    msg.setSource(22253U);
    msg.setSourceEntity(146U);
    msg.setDestination(36864U);
    msg.setDestinationEntity(2U);
    msg.k = 0.382917831895;
    msg.m = 0.842041537563;
    msg.n = 0.206303346574;

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
    msg.setTimeStamp(0.271025688338);
    msg.setSource(40631U);
    msg.setSourceEntity(115U);
    msg.setDestination(63569U);
    msg.setDestinationEntity(118U);
    msg.k = 0.835451324598;
    msg.m = 0.93516102925;
    msg.n = 0.514202279587;

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
    msg.setTimeStamp(0.432296104795);
    msg.setSource(27376U);
    msg.setSourceEntity(141U);
    msg.setDestination(56005U);
    msg.setDestinationEntity(239U);
    msg.k = 0.925844103646;
    msg.m = 0.502565470037;
    msg.n = 0.394463480193;

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
    msg.setTimeStamp(0.887885751071);
    msg.setSource(15828U);
    msg.setSourceEntity(45U);
    msg.setDestination(40594U);
    msg.setDestinationEntity(25U);
    msg.p = 0.439915140917;
    msg.i = 0.005720223536;
    msg.d = 0.451273142881;
    msg.a = 0.904145147053;

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
    msg.setTimeStamp(0.0412467921059);
    msg.setSource(58090U);
    msg.setSourceEntity(147U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(194U);
    msg.p = 0.32143159102;
    msg.i = 0.976011672328;
    msg.d = 0.121618110574;
    msg.a = 0.796738913283;

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
    msg.setTimeStamp(0.29741213877);
    msg.setSource(14625U);
    msg.setSourceEntity(59U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(90U);
    msg.p = 0.118299169098;
    msg.i = 0.481911871411;
    msg.d = 0.31693624982;
    msg.a = 0.859724814034;

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
    msg.setTimeStamp(0.972916709781);
    msg.setSource(26506U);
    msg.setSourceEntity(244U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(188U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.721843334454);
    msg.setSource(35171U);
    msg.setSourceEntity(62U);
    msg.setDestination(50640U);
    msg.setDestinationEntity(103U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.478380517129);
    msg.setSource(2487U);
    msg.setSourceEntity(19U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(62U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.651887151101);
    msg.setSource(41613U);
    msg.setSourceEntity(33U);
    msg.setDestination(51454U);
    msg.setDestinationEntity(153U);
    msg.x = 0.81706274778;
    msg.y = 0.916916046512;
    msg.z = 0.538920586256;
    msg.vx = 0.199877973277;
    msg.vy = 0.722326321712;
    msg.vz = 0.697046906006;
    msg.ax = 0.898315601248;
    msg.ay = 0.747970479468;
    msg.az = 0.396034049436;
    msg.flags = 54635U;

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
    msg.setTimeStamp(0.0946255960573);
    msg.setSource(9213U);
    msg.setSourceEntity(188U);
    msg.setDestination(52383U);
    msg.setDestinationEntity(143U);
    msg.x = 0.219309934814;
    msg.y = 0.519649292225;
    msg.z = 0.270773591579;
    msg.vx = 0.167162232583;
    msg.vy = 0.510920565754;
    msg.vz = 0.574932858658;
    msg.ax = 0.656078219786;
    msg.ay = 0.675911052212;
    msg.az = 0.00234612576525;
    msg.flags = 61906U;

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
    msg.setTimeStamp(0.198015508367);
    msg.setSource(20059U);
    msg.setSourceEntity(188U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(120U);
    msg.x = 0.950653159522;
    msg.y = 0.548795454919;
    msg.z = 0.652055469058;
    msg.vx = 0.121844483701;
    msg.vy = 0.81165876303;
    msg.vz = 0.113282880801;
    msg.ax = 0.656147812576;
    msg.ay = 0.289608771281;
    msg.az = 0.228584284531;
    msg.flags = 41196U;

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
    msg.setTimeStamp(0.380372898606);
    msg.setSource(59691U);
    msg.setSourceEntity(220U);
    msg.setDestination(60353U);
    msg.setDestinationEntity(194U);
    msg.value = 0.298401351883;

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
    msg.setTimeStamp(0.137625103667);
    msg.setSource(2587U);
    msg.setSourceEntity(238U);
    msg.setDestination(1086U);
    msg.setDestinationEntity(61U);
    msg.value = 0.568400967501;

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
    msg.setTimeStamp(0.500171394025);
    msg.setSource(27653U);
    msg.setSourceEntity(113U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(93U);
    msg.value = 0.39536841458;

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
    msg.setTimeStamp(0.501924184416);
    msg.setSource(52181U);
    msg.setSourceEntity(203U);
    msg.setDestination(36773U);
    msg.setDestinationEntity(234U);
    msg.timeout = 21058U;
    msg.lat = 0.404757034143;
    msg.lon = 0.706499907089;
    msg.z = 0.59484835266;
    msg.z_units = 225U;
    msg.speed = 0.588900461765;
    msg.speed_units = 20U;
    msg.roll = 0.0248531314846;
    msg.pitch = 0.744337324817;
    msg.yaw = 0.237641866707;
    msg.custom.assign("TXVHMBDSVUBXFLC");

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
    msg.setTimeStamp(0.413076142547);
    msg.setSource(41586U);
    msg.setSourceEntity(238U);
    msg.setDestination(44808U);
    msg.setDestinationEntity(132U);
    msg.timeout = 20173U;
    msg.lat = 0.530139100356;
    msg.lon = 0.126629538543;
    msg.z = 0.744419107471;
    msg.z_units = 214U;
    msg.speed = 0.522057537855;
    msg.speed_units = 35U;
    msg.roll = 0.0873743418919;
    msg.pitch = 0.871052819113;
    msg.yaw = 0.181485532356;
    msg.custom.assign("VNRZWDPPMLNLULBGZ");

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
    msg.setTimeStamp(0.575801906199);
    msg.setSource(42333U);
    msg.setSourceEntity(136U);
    msg.setDestination(626U);
    msg.setDestinationEntity(99U);
    msg.timeout = 18760U;
    msg.lat = 0.428780668309;
    msg.lon = 0.230715560274;
    msg.z = 0.710428634068;
    msg.z_units = 89U;
    msg.speed = 0.0663910870194;
    msg.speed_units = 128U;
    msg.roll = 0.18862525456;
    msg.pitch = 0.50910930022;
    msg.yaw = 0.824358960168;
    msg.custom.assign("POTLQYEQLSLSYWOWBSURVVDDNFMBVJCLHAGIIFXJCWPSPXZOTWAHSUCNWYXKEHQNXQVSTOPRRBEXHLKZJDPZIUYBFSMM");

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
    msg.setTimeStamp(0.120405776132);
    msg.setSource(5873U);
    msg.setSourceEntity(225U);
    msg.setDestination(12515U);
    msg.setDestinationEntity(67U);
    msg.timeout = 60048U;
    msg.lat = 0.019160632909;
    msg.lon = 0.945792100827;
    msg.z = 0.643293450376;
    msg.z_units = 65U;
    msg.speed = 0.997456312944;
    msg.speed_units = 90U;
    msg.duration = 21566U;
    msg.radius = 0.166622832654;
    msg.flags = 148U;
    msg.custom.assign("VTWSOTJRWCYAVIHMQGPWEDSPTGYNSES");

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
    msg.setTimeStamp(0.837456440572);
    msg.setSource(1646U);
    msg.setSourceEntity(243U);
    msg.setDestination(2943U);
    msg.setDestinationEntity(186U);
    msg.timeout = 22891U;
    msg.lat = 0.875821740947;
    msg.lon = 0.868917734066;
    msg.z = 0.0924919756857;
    msg.z_units = 203U;
    msg.speed = 0.945923907429;
    msg.speed_units = 65U;
    msg.duration = 61819U;
    msg.radius = 0.221239268524;
    msg.flags = 105U;
    msg.custom.assign("FCPQSXSUBQ");

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
    msg.setTimeStamp(0.854559899237);
    msg.setSource(9728U);
    msg.setSourceEntity(33U);
    msg.setDestination(39239U);
    msg.setDestinationEntity(237U);
    msg.timeout = 52781U;
    msg.lat = 0.443781481809;
    msg.lon = 0.214297340257;
    msg.z = 0.769316011762;
    msg.z_units = 156U;
    msg.speed = 0.740141077775;
    msg.speed_units = 70U;
    msg.duration = 30584U;
    msg.radius = 0.923797880149;
    msg.flags = 77U;
    msg.custom.assign("BPLSZDCLLWMTREPYXCAFWAHGNMDXDDIFJGVTRPPKBYIZYQBTZFIEARMN");

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
    msg.setTimeStamp(0.726130951481);
    msg.setSource(32178U);
    msg.setSourceEntity(187U);
    msg.setDestination(30039U);
    msg.setDestinationEntity(87U);
    msg.custom.assign("PHNQTVUVUZYIXLMUMURVHXRQNYEPWQMDZFYGGUKXYHZLLAMNYHCEUEIXEDLMYLZZCFYMOKMXEWCWFXGWFWBKDPRHCSTJAJTAGBEHRNXPFBCQQHDXTYVMELTHDYOPIOGKGHUCFPDOIACOLCALSGNNSGLMAPRPWBKZJLZACVZTDCRGVK");

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
    msg.setTimeStamp(0.335677373704);
    msg.setSource(9790U);
    msg.setSourceEntity(148U);
    msg.setDestination(21921U);
    msg.setDestinationEntity(94U);
    msg.custom.assign("GTVOFGLXDBXBGQCGJEPSBUKSTKHQMBITNSISJHMGKZLYSNVRFCHADVNUCGJNPHGNPPMMFQBSNFKETJQRCDQGYIBAXJKYYQKEUESIQTIIMXPEDAFJRZLUOINJPDIADQBLXCLYTRXKTJXYPKLEHYQROXGFHONYFDEUUMWRFPWERVMZTNZWHGZUZFZWZZWCORPAMH");

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
    msg.setTimeStamp(0.63728765538);
    msg.setSource(58792U);
    msg.setSourceEntity(107U);
    msg.setDestination(23017U);
    msg.setDestinationEntity(202U);
    msg.custom.assign("JIVLBMKUXMXQERMWESSFBZESMLHXFNPGLPMLBLXZYFSDNBODKWYDKDJPQZLWTZRMEKFFGQZTUQRKUBTGVYCHCJQCHDEQUPKVGIHDIMNACAFOIYIXXVHWLUIEAPLJOIWDUQOABTKXKSVWNBDRYTRVJPDQGTOXCCZMAGWROQJKWBDTVSUIXZCHICRSRNGPFMAFAPTKCOYYNMPJNBGTWRSTNUJESYZEHGYJEUOOSUQVXHWNFIAZOFEGZBRL");

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
    msg.setTimeStamp(0.324166211804);
    msg.setSource(47115U);
    msg.setSourceEntity(49U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(150U);
    msg.timeout = 11852U;
    msg.lat = 0.0227971920929;
    msg.lon = 0.24649565559;
    msg.z = 0.461336148414;
    msg.z_units = 33U;
    msg.duration = 52380U;
    msg.speed = 0.141372331117;
    msg.speed_units = 72U;
    msg.type = 85U;
    msg.radius = 0.707587106994;
    msg.length = 0.0917718039282;
    msg.bearing = 0.731649955165;
    msg.direction = 109U;
    msg.custom.assign("MNVMAGUASUADBJHRDUCCLNWXDTOXCNBRBAIXXMVVRHCLRVKIGZCMFPDKUJOKCLGFFBUTCFOYXPTXAMLPEARDRYGTUJPYWQNLEKIVTAZHFNJSKZIOBZWSNFMPEYQCJEGPMYQJXEFZTSOQYWETBDGAJBEEXRIIGALNBUUSHWBHPW");

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
    msg.setTimeStamp(0.457213017291);
    msg.setSource(53003U);
    msg.setSourceEntity(33U);
    msg.setDestination(43454U);
    msg.setDestinationEntity(145U);
    msg.timeout = 528U;
    msg.lat = 0.878052889281;
    msg.lon = 0.516614317428;
    msg.z = 0.235934527455;
    msg.z_units = 135U;
    msg.duration = 28387U;
    msg.speed = 0.135705530857;
    msg.speed_units = 104U;
    msg.type = 130U;
    msg.radius = 0.374480641623;
    msg.length = 0.081971757569;
    msg.bearing = 0.453519540599;
    msg.direction = 7U;
    msg.custom.assign("NXADFOYEBFYMUHFCHGPSFAVOSWIPFQRUSXLSPKZFLTCWEZVLJIMEBNDSZHDJJEGJQWORZYJCURWTKGTFLPUIZKAEAKSKJCWVZHYSRTCQQVEGHSHDFNNRNXLQYXARIZZYUYPMBKPCUMTEGAQVVJKBIJTYSOXABHJMQFRGVBRQRAXZMDITHAQXDLNOPSQOIPOPODVCWD");

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
    msg.setTimeStamp(0.657505073098);
    msg.setSource(14906U);
    msg.setSourceEntity(6U);
    msg.setDestination(50376U);
    msg.setDestinationEntity(84U);
    msg.timeout = 17074U;
    msg.lat = 0.167454782811;
    msg.lon = 0.543535102706;
    msg.z = 0.945894102023;
    msg.z_units = 228U;
    msg.duration = 13673U;
    msg.speed = 0.196523570227;
    msg.speed_units = 182U;
    msg.type = 245U;
    msg.radius = 0.399188247658;
    msg.length = 0.664197534854;
    msg.bearing = 0.900452597047;
    msg.direction = 48U;
    msg.custom.assign("TFFRUATEATGNYRARDFCLYSPFIGDZKUEBKLNMHCCUIQLYJORYXBOEJMZMBOSZXAPXMISPRUNCFWTGXNLNEAJUKGUCZCJOMMRCEPFJZEGVPQQLDIPVTJVEOXSYQKVHTTDBJNUNRGSYIEKUHVDVTBELZXJUGZSOXWVEBKHMZMWOWNWIWSDCRBDYDSDRHLOABDQ");

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
    msg.setTimeStamp(0.114461126103);
    msg.setSource(52787U);
    msg.setSourceEntity(42U);
    msg.setDestination(12965U);
    msg.setDestinationEntity(163U);
    msg.duration = 38017U;
    msg.custom.assign("DMOKKXYAUGBQZTGXPBMWULPDJOKJLUWXESVFUCSMOEZCQSFBNNZBLKLUSMRRWPQYLCVNEJOYCADSHABDVAHPWALDJPGSQWGMWFFUJPXVNHKAZHEXYNIYTXBNDKFLWYOKUSICPIMQWWUJJLWRLMGPAAVJZFUQZVRGETTGKOHPBOQZRJXSRTCYHTHDITOVGTNKDIZIXIVIBVMXVRPKAIDMFLZNJFEEGTZSYYQYBCRF");

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
    msg.setTimeStamp(0.138007489798);
    msg.setSource(29378U);
    msg.setSourceEntity(1U);
    msg.setDestination(24279U);
    msg.setDestinationEntity(129U);
    msg.duration = 32943U;
    msg.custom.assign("XTBMPZWYYSVSVLDXKLAEJFHIFUUUFVTHMJYXSAORDPTIPYNHLQWHIMCEOAROTREWBDGFSJIUOCWIFFABGRRWEPSUCMYRXMBNSZDUEZMLQCCXZIJVONZFEDGLKBXVDJWKSVRUQLABGTTDXYKGNFVPKEHQOKZCPWSOJHPECAXIAQNWGBGVPUUSPHGQYXCXZJGCKMLZEMUJNTHBLICRQDETHMDJNZ");

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
    msg.setTimeStamp(0.18126630978);
    msg.setSource(22602U);
    msg.setSourceEntity(53U);
    msg.setDestination(13592U);
    msg.setDestinationEntity(106U);
    msg.duration = 26803U;
    msg.custom.assign("SSEJTCXMGDTPABUYGFBREH");

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
    msg.setTimeStamp(0.101568366282);
    msg.setSource(6417U);
    msg.setSourceEntity(74U);
    msg.setDestination(64738U);
    msg.setDestinationEntity(188U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.120134209793;
    tmp_msg_0.speed_units = 188U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61767U;
    msg.custom.assign("KDCWPETQZTNOLCBDEPUGFHLSYZHYZFTHSOFGSYTKEVNCHWQLWMRZJBUNXSYRNLKJKEGATFSLOPFRAVMCEQWHWTIPCJJSRAEINPGONNUDPJXHVNIUNXPGWEUUPSDTIRWFRASONBBKEDQMOXKHJZWMWRVRPGVCS");

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
    msg.setTimeStamp(0.929132592419);
    msg.setSource(21249U);
    msg.setSourceEntity(111U);
    msg.setDestination(35623U);
    msg.setDestinationEntity(106U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.196992584434;
    msg.control.set(tmp_msg_0);
    msg.duration = 42428U;
    msg.custom.assign("WLQSWRCZTZLJKGRHEQMJKXRWFPKDNWUPCOUCEPYZOBFYWDQVATYGTPXDRCQBCTWRDBPASKFONQALEORUUKVOMGTHGCZJOEYIESGI");

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
    msg.setTimeStamp(0.881232721941);
    msg.setSource(20254U);
    msg.setSourceEntity(131U);
    msg.setDestination(60635U);
    msg.setDestinationEntity(205U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2186503302U;
    tmp_msg_0.start_lat = 0.801889416211;
    tmp_msg_0.start_lon = 0.976948729725;
    tmp_msg_0.start_z = 0.722914232715;
    tmp_msg_0.start_z_units = 36U;
    tmp_msg_0.end_lat = 0.568410745902;
    tmp_msg_0.end_lon = 0.739272208132;
    tmp_msg_0.end_z = 0.621295831645;
    tmp_msg_0.end_z_units = 207U;
    tmp_msg_0.speed = 0.0647408212329;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.lradius = 0.421918463154;
    tmp_msg_0.flags = 93U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61933U;
    msg.custom.assign("EBTYYURPOMIKTEQMAUWLRCIMYAVLQPHYOGQNWRDCZRZISVUHUKNOGKSPSOVDQCWHJYUZJFGKKMXSNPBTZFSFVNHGVHHRJSEGMASPAITOZXYEQQFCVXKELWWDRUYOSYDGJXFQAOLCIBBWJEFQDJUKRLU");

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
    msg.setTimeStamp(0.0877648951508);
    msg.setSource(21770U);
    msg.setSourceEntity(211U);
    msg.setDestination(10932U);
    msg.setDestinationEntity(201U);
    msg.timeout = 16953U;
    msg.lat = 0.841315374386;
    msg.lon = 0.58867852251;
    msg.z = 0.832738259611;
    msg.z_units = 29U;
    msg.speed = 0.582193797698;
    msg.speed_units = 151U;
    msg.bearing = 0.976494599069;
    msg.cross_angle = 0.750618044743;
    msg.width = 0.269885499095;
    msg.length = 0.880543798059;
    msg.hstep = 0.680723841962;
    msg.coff = 87U;
    msg.alternation = 224U;
    msg.flags = 97U;
    msg.custom.assign("MUPLGLMZOGHHFJFJNIO");

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
    msg.setTimeStamp(0.831175618661);
    msg.setSource(248U);
    msg.setSourceEntity(52U);
    msg.setDestination(50038U);
    msg.setDestinationEntity(59U);
    msg.timeout = 12353U;
    msg.lat = 0.915153823245;
    msg.lon = 0.267740561036;
    msg.z = 0.380844829239;
    msg.z_units = 227U;
    msg.speed = 0.342431484098;
    msg.speed_units = 38U;
    msg.bearing = 0.920110499476;
    msg.cross_angle = 0.707123021657;
    msg.width = 0.782456971747;
    msg.length = 0.864961722569;
    msg.hstep = 0.215060238561;
    msg.coff = 186U;
    msg.alternation = 80U;
    msg.flags = 12U;
    msg.custom.assign("MLGPWSCXYKBUGXBWUBPVVOYNDKBTPUMXMRAOZBOCIJDGTTYHBHKFNXONHLWASICXCXOJKCRDDLKRAIWLERKSDKCDIUWVBORNNFNWJAHFMZPBTZIDAGYMAFEEZZUPJGHSHWQPIRDWSYGLJRMFXSQOKYSMJQCCZQGPXYHEULESRMATNFJELEVNZBFJR");

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
    msg.setTimeStamp(0.190296940728);
    msg.setSource(33195U);
    msg.setSourceEntity(198U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(72U);
    msg.timeout = 41214U;
    msg.lat = 0.671969083534;
    msg.lon = 0.806582563677;
    msg.z = 0.411428652179;
    msg.z_units = 132U;
    msg.speed = 0.577998235561;
    msg.speed_units = 232U;
    msg.bearing = 0.228797660863;
    msg.cross_angle = 0.698213860142;
    msg.width = 0.970768633398;
    msg.length = 0.4947637627;
    msg.hstep = 0.727593578205;
    msg.coff = 167U;
    msg.alternation = 155U;
    msg.flags = 243U;
    msg.custom.assign("HRRXOLEKXXKKHRKICZQTMYQCLBDJBUHYILUPOGHBQHJHAAUPFWXLSNBVZXTTCJQLXHUWPOZWZASJVBSFKEOAQTUVGEHUYDNRRAWB");

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
    msg.setTimeStamp(0.558934681079);
    msg.setSource(54047U);
    msg.setSourceEntity(161U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(183U);
    msg.timeout = 42508U;
    msg.lat = 0.656651496312;
    msg.lon = 0.271641389948;
    msg.z = 0.459257320924;
    msg.z_units = 218U;
    msg.speed = 0.62014359432;
    msg.speed_units = 127U;
    msg.custom.assign("RVTWANNBXOMVVMZEMDXYYRXJGUVSZMMOSFUOPYZSPXGVNCVYPUCZFPCQEVNHKACHWPXSJPMTUJAIIKNOHSONQEGOHMBKTUYKAMRKFFUYDBLZSBQKZVOFDIKXFEALUCBLICAQXEDWESPBLNQKTYDXHZZKQLXTPERWBWESAOTAUTVGTGVJIBMBILJCWHGURYSTEQKIZGJFYHWDHFPWIG");

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
    msg.setTimeStamp(0.912787447816);
    msg.setSource(59341U);
    msg.setSourceEntity(207U);
    msg.setDestination(36161U);
    msg.setDestinationEntity(0U);
    msg.timeout = 47652U;
    msg.lat = 0.635014960554;
    msg.lon = 0.321546548505;
    msg.z = 0.0582591061207;
    msg.z_units = 10U;
    msg.speed = 0.689595881667;
    msg.speed_units = 50U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0670891704857;
    tmp_msg_0.y = 0.679619592332;
    tmp_msg_0.z = 0.125104534485;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QZIFPTYBCYEJPBEJJQGEINBFHGMVWNIKWRGTFZILAYOOQUDPZXONQFJTBVRSUFWSEQVJTHPVALGEXRVQBXZNQFFCLBADTWKCWYUVMLWNKCXGGCFIOAYUDHOAYFSRVNJZLEKVNHZCESMMHKDGSWCOQRSQMENIQMBFKIUJCLMRZZATTKYSLSXGLPKNMTBUVECWCPDHGXXDWPJADMYXMAPDI");

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
    msg.setTimeStamp(0.287651792705);
    msg.setSource(56780U);
    msg.setSourceEntity(239U);
    msg.setDestination(32679U);
    msg.setDestinationEntity(84U);
    msg.timeout = 52646U;
    msg.lat = 0.620583447117;
    msg.lon = 0.240910222161;
    msg.z = 0.469553593792;
    msg.z_units = 155U;
    msg.speed = 0.859335858396;
    msg.speed_units = 203U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.227211610645;
    tmp_msg_0.y = 0.875073257181;
    tmp_msg_0.z = 0.367618705997;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BGDIIYXIWVZQNWHNCGJWGAIPJRVZOBULVYKOZHETKUCJUUFLDYTT");

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
    msg.setTimeStamp(0.690179510342);
    msg.setSource(60500U);
    msg.setSourceEntity(68U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(250U);
    msg.x = 0.367734264679;
    msg.y = 0.865927748026;
    msg.z = 0.64327108506;

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
    msg.setTimeStamp(0.720113031657);
    msg.setSource(46975U);
    msg.setSourceEntity(189U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(62U);
    msg.x = 0.679777867462;
    msg.y = 0.298136246736;
    msg.z = 0.883370857502;

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
    msg.setTimeStamp(0.309778047766);
    msg.setSource(3900U);
    msg.setSourceEntity(35U);
    msg.setDestination(38462U);
    msg.setDestinationEntity(131U);
    msg.x = 0.864947681347;
    msg.y = 0.0962694350695;
    msg.z = 0.802486046718;

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
    msg.setTimeStamp(0.261754501115);
    msg.setSource(35588U);
    msg.setSourceEntity(206U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(94U);
    msg.timeout = 53344U;
    msg.lat = 0.109606835931;
    msg.lon = 0.867757488541;
    msg.z = 0.529215090249;
    msg.z_units = 156U;
    msg.amplitude = 0.373918913049;
    msg.pitch = 0.0437871801564;
    msg.speed = 0.771122608004;
    msg.speed_units = 127U;
    msg.custom.assign("XTKVDIQJCBMWETZHD");

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
    msg.setTimeStamp(0.157553422132);
    msg.setSource(45819U);
    msg.setSourceEntity(134U);
    msg.setDestination(60280U);
    msg.setDestinationEntity(80U);
    msg.timeout = 2277U;
    msg.lat = 0.918115412704;
    msg.lon = 0.914764077433;
    msg.z = 0.624926869132;
    msg.z_units = 1U;
    msg.amplitude = 0.273104586602;
    msg.pitch = 0.329800066751;
    msg.speed = 0.986943625588;
    msg.speed_units = 17U;
    msg.custom.assign("DHTMFVLMCDZPQEBNDUQHLZJRUEPPFBOMWWASVAAKRZRYGRQJSWTFCXIGXFNCHB");

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
    msg.setTimeStamp(0.556449347579);
    msg.setSource(2873U);
    msg.setSourceEntity(217U);
    msg.setDestination(58510U);
    msg.setDestinationEntity(186U);
    msg.timeout = 53962U;
    msg.lat = 0.561752815118;
    msg.lon = 0.117342889048;
    msg.z = 0.831832722318;
    msg.z_units = 81U;
    msg.amplitude = 0.675099899219;
    msg.pitch = 0.29236672845;
    msg.speed = 0.27740434114;
    msg.speed_units = 122U;
    msg.custom.assign("CHMAXVMKCZEOYDWJW");

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
    msg.setTimeStamp(0.0299878680055);
    msg.setSource(20825U);
    msg.setSourceEntity(87U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.918683819943);
    msg.setSource(49632U);
    msg.setSourceEntity(181U);
    msg.setDestination(16227U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.980108310232);
    msg.setSource(26564U);
    msg.setSourceEntity(122U);
    msg.setDestination(7525U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.715866125907);
    msg.setSource(16583U);
    msg.setSourceEntity(49U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.0586311679701;
    msg.lon = 0.814717525754;
    msg.z = 0.201172127256;
    msg.z_units = 143U;
    msg.radius = 0.483252776996;
    msg.duration = 36810U;
    msg.speed = 0.766419452785;
    msg.speed_units = 143U;
    msg.custom.assign("BMKNHPXPQLWKOGXGFYJPXXCFCUIGMZJKBXCIKNRKKBZOALNADHTHCLSVELDLDLGOUVEHFYMJCBCPZZUEYKDWXTSPENRRINSRWOPPSBKPPZILAVQAEIQLJOEWYMWTUSMIUJKSGDQ");

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
    msg.setTimeStamp(0.515209490203);
    msg.setSource(18215U);
    msg.setSourceEntity(152U);
    msg.setDestination(34103U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.834048454087;
    msg.lon = 0.840204741151;
    msg.z = 0.104332682157;
    msg.z_units = 46U;
    msg.radius = 0.23084189629;
    msg.duration = 11235U;
    msg.speed = 0.366698929127;
    msg.speed_units = 229U;
    msg.custom.assign("RHBETETHGAMHGNJGNOJRZLPLOMFWGSJVOYWVGUXZJFSEKKEDFISARBLPIYTBWB");

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
    msg.setTimeStamp(0.843003564664);
    msg.setSource(63041U);
    msg.setSourceEntity(130U);
    msg.setDestination(53916U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.464858378928;
    msg.lon = 0.949184219365;
    msg.z = 0.950693314003;
    msg.z_units = 201U;
    msg.radius = 0.865889033156;
    msg.duration = 12159U;
    msg.speed = 0.56242340979;
    msg.speed_units = 26U;
    msg.custom.assign("MFXHAFPBCNEKCIVSJIDTWVBVLRVPOEBSZQPYPRRWEXSJJQBNZIYQMEPXBODLKJNXFYIXSQNCERVBJNLKIRCFEIGCTGPCDDUVZNF");

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
    msg.setTimeStamp(0.71033577308);
    msg.setSource(21215U);
    msg.setSourceEntity(234U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(133U);
    msg.timeout = 26479U;
    msg.flags = 118U;
    msg.lat = 0.927031757908;
    msg.lon = 0.306429169798;
    msg.start_z = 0.948502734326;
    msg.start_z_units = 226U;
    msg.end_z = 0.491785537369;
    msg.end_z_units = 176U;
    msg.radius = 0.924652873353;
    msg.speed = 0.745686259834;
    msg.speed_units = 18U;
    msg.custom.assign("ZVMAJOFTFPHKSFNCGNSQBXBDRUZHYHDWZEOOQIIHWSEVYNHVASPMDJDCCNLKWSRTYPJSFWJEJEOPRLZURAYTHELGZVDHAQIUNLXDHDUYCIJFUETVTTBKFMJEJRBJYVGPKQHMSWQLUGIFUMALQQXCAPPWWONQFIGSMVWCR");

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
    msg.setTimeStamp(0.212072199623);
    msg.setSource(34735U);
    msg.setSourceEntity(141U);
    msg.setDestination(14678U);
    msg.setDestinationEntity(41U);
    msg.timeout = 33128U;
    msg.flags = 142U;
    msg.lat = 0.0405671367015;
    msg.lon = 0.988274861542;
    msg.start_z = 0.00070346630866;
    msg.start_z_units = 173U;
    msg.end_z = 0.558526714416;
    msg.end_z_units = 85U;
    msg.radius = 0.339923272679;
    msg.speed = 0.486061935195;
    msg.speed_units = 137U;
    msg.custom.assign("OTCAHCWXJNYFYMAEHIJDYDFVQVRFOGSTWRFKLDCLYDICUPLOZBPRUCRKIANEGGDHSLREBXQIVFHZOMQECISTOMQMOFZRBBBHRFSKRLDFUVFCYOTSCEQMHFVQQHSIUZZZVVTUXHTVXUZWGGKGQNYNBGMMXAPSDLLKGREPONUKUJWOBACPTZXZIMHWMVWLWJPBKCTNISSIJPAQLPTKGDUXJWKXYDPJNJJEWNEOIYKVJDASAAY");

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
    msg.setTimeStamp(0.140466082616);
    msg.setSource(56402U);
    msg.setSourceEntity(7U);
    msg.setDestination(12469U);
    msg.setDestinationEntity(2U);
    msg.timeout = 59880U;
    msg.flags = 251U;
    msg.lat = 0.362721352902;
    msg.lon = 0.661194256505;
    msg.start_z = 0.884932179802;
    msg.start_z_units = 120U;
    msg.end_z = 0.331167819795;
    msg.end_z_units = 43U;
    msg.radius = 0.837386030527;
    msg.speed = 0.275323213596;
    msg.speed_units = 26U;
    msg.custom.assign("CHLDKXANCYACUGAVRXQXDMZJVCRMTHERYRWQSBHCFQINWJOIHUHOGELJBVQVISIZPNRGYPUNQBLSNHTJIMBHMWAFCOMWDOZUEEJMPFIAISVGXGFOAWABRFTNTZXLPKLPTBSFCDEVTDKLKVWFKFVTLIZJFDDKZGEKUJIUEKYBZYBDJCPGSGJPYWTZSMLRQPYHHZGNSDUYRULOKLQACOSQQWIEBYNQTNPWCXAEEXVJVHMUFKZSNUXW");

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
    msg.setTimeStamp(0.846996760647);
    msg.setSource(13732U);
    msg.setSourceEntity(23U);
    msg.setDestination(27018U);
    msg.setDestinationEntity(219U);
    msg.timeout = 4215U;
    msg.lat = 0.242415458946;
    msg.lon = 0.367225296945;
    msg.z = 0.955968978121;
    msg.z_units = 225U;
    msg.speed = 0.740154204049;
    msg.speed_units = 229U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.236408142944;
    tmp_msg_0.y = 0.807665884605;
    tmp_msg_0.z = 0.515925328085;
    tmp_msg_0.t = 0.876919125284;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IHJUXNIQNUZOCOFHKBBUFBLOLDVHDRWYMARJGQEASHRIXCTHJRXHOTZWQLKTYOGCIRYEZVFKPVPDVJIZCMEGXKZTHONDIQXYLYSJLUNGECMTAHUMYDXSPFLGCJSWLWESVKPXQKNBKXIGVWCDMMRTPQOYBSLUSKOBVHWJMZAGBYPZGLBJJEAAPIEXVCSFSOIKRNQAPEUTOZVUWNGWFLWZM");

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
    msg.setTimeStamp(0.876938276967);
    msg.setSource(14764U);
    msg.setSourceEntity(71U);
    msg.setDestination(27813U);
    msg.setDestinationEntity(239U);
    msg.timeout = 33299U;
    msg.lat = 0.193957577288;
    msg.lon = 0.322335863008;
    msg.z = 0.544213887319;
    msg.z_units = 126U;
    msg.speed = 0.231774833221;
    msg.speed_units = 62U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.874982639678;
    tmp_msg_0.y = 0.447661222054;
    tmp_msg_0.z = 0.941713354577;
    tmp_msg_0.t = 0.56855548727;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IAHJYVRIQNMADWUAIWZSOFIFLXKTEOSOIIROMSMMRCGNHRTGVMGLUWSMNUZJHXOWAJHRZEJCDECKRFFQILNCSMDBUOWEOBVKVTDXJDEACGWGXGTPDYUVEKEFBGCQTFBYLSZIVTKONPCPNPCLXXBFKFLBFAQUYDS");

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
    msg.setTimeStamp(0.692538417796);
    msg.setSource(493U);
    msg.setSourceEntity(130U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(140U);
    msg.timeout = 64757U;
    msg.lat = 0.56998694032;
    msg.lon = 0.154814383718;
    msg.z = 0.542215566458;
    msg.z_units = 140U;
    msg.speed = 0.141746823326;
    msg.speed_units = 149U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.699005102749;
    tmp_msg_0.y = 0.475814111881;
    tmp_msg_0.z = 0.0495037385476;
    tmp_msg_0.t = 0.936269174701;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KSSHCRLFRLHTHBPZJPSIUDKGTTPGPFXPQTCZFMINBGADHKVYABXDWPHVVEIEEDAYCNPOUNNMCYCMJMGAZZHSPMFYEULNRYWLQUUYOJGVDESWVZCFOVTWVKNETKTQXDOAQKIBSACRXXMISUAYZTXWKLBQZQKRQRILGCDSDFVIWWZGJXQVUZWWSWZJTUFKGJFNPABRLA");

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
    msg.setTimeStamp(0.346611089437);
    msg.setSource(5104U);
    msg.setSourceEntity(78U);
    msg.setDestination(13386U);
    msg.setDestinationEntity(71U);
    msg.x = 0.728111952041;
    msg.y = 0.369078515301;
    msg.z = 0.51209322262;
    msg.t = 0.421878627197;

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
    msg.setTimeStamp(0.446914377243);
    msg.setSource(39655U);
    msg.setSourceEntity(162U);
    msg.setDestination(62331U);
    msg.setDestinationEntity(42U);
    msg.x = 0.98012986333;
    msg.y = 0.969329951765;
    msg.z = 0.0758524903296;
    msg.t = 0.40640961029;

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
    msg.setTimeStamp(0.301186296498);
    msg.setSource(64517U);
    msg.setSourceEntity(155U);
    msg.setDestination(49459U);
    msg.setDestinationEntity(75U);
    msg.x = 0.518804973759;
    msg.y = 0.798742915753;
    msg.z = 0.59664417727;
    msg.t = 0.0560111450207;

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
    msg.setTimeStamp(0.593383510796);
    msg.setSource(34301U);
    msg.setSourceEntity(233U);
    msg.setDestination(15575U);
    msg.setDestinationEntity(81U);
    msg.timeout = 61183U;
    msg.name.assign("OYBGNAWCCJLRFUPOEOPZSQITRNAXZTHQKPCLLJYMUKKLFPJMWIOSRDWCXTULFDJQXYLJIKRKIQD");
    msg.custom.assign("GVTTCGREXPVXVTMTSHDRPDFJHLSNEBFJQAGUELNLQFQFUXXPHSZNBGRLXEM");

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
    msg.setTimeStamp(0.741060693286);
    msg.setSource(61382U);
    msg.setSourceEntity(36U);
    msg.setDestination(61233U);
    msg.setDestinationEntity(162U);
    msg.timeout = 34838U;
    msg.name.assign("ARGSWJHVCUDTEKYBGPFFEMEGFZRJGQAGLVBEDFXEMFJ");
    msg.custom.assign("YHOTMMYOVJTSUCHMSFZLWYPITLJTZLOXPPISZDCNTQYHPWWMEYTOUHNFHYEZCIDDNBMQMBMDKOPVAUYCIOKSXWKFAFIEWNIZABXCKVJHBOWGLOVRCNDAUWJDNBSLURNBYCKQGXAGWZLFQUFFXPJHNESKADKGRPTLMQJRCTNQETRJSYWOGDOFCZVEVEEUQPGXIUVZE");

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
    msg.setTimeStamp(0.964557184966);
    msg.setSource(3038U);
    msg.setSourceEntity(253U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(55U);
    msg.timeout = 6116U;
    msg.name.assign("UTDZAFXLRQBSJOIEDGYTJAOXLJFNKERSEHJLBHJJRFAYCIOPGBXDFLLTJPYZJNBOMZEUFWPJXIDQPOCQSNVNKGBCIAPYZFCYNQOLIWRTSENCGOXMNIAZIRCFMQHAQSUXCXZRIHGVTTDUHXVEODCHMXBKKWNDTHSVSGULKPDMQKQWUTPKISUWVKZWPAJCMCWMLDVMHMEGVEWHOYFAQZGURWKWAPLVORNRBBBTVGVTFZREBMQLHUYIFSEYAYD");
    msg.custom.assign("CYPKBZDETWAWDOPJUCZUSODRGVYBDBHBNOOYFERTVHLDLLXQPEFUVDMASGJIZYVAOSVNYMFTZESZZJIUCIFEGHMSVSWNANIFXOMLZMJUQYRSYOYQWLXXQXRVJKHFPVQBQJRMQWTWTNYXCDXZGBFZGRONKWCIAHFMNENXKADBWSTPSKHO");

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
    msg.setTimeStamp(0.0738230676645);
    msg.setSource(37408U);
    msg.setSourceEntity(87U);
    msg.setDestination(54902U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.772729239197;
    msg.lon = 0.58529274366;
    msg.z = 0.975304563547;
    msg.z_units = 118U;
    msg.speed = 0.375864006808;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.899822883399;
    tmp_msg_0.y = 0.472597463021;
    tmp_msg_0.z = 0.00909865242349;
    tmp_msg_0.t = 0.595718087522;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 49518U;
    tmp_msg_1.off_x = 0.997552115172;
    tmp_msg_1.off_y = 0.357867687011;
    tmp_msg_1.off_z = 0.199886130812;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0142435300745;
    msg.custom.assign("JTCOUMIYQWJMFMWOZDXCDDGAREJHVZWVISWPAPTKBIDKKWAPKRNJHEBMX");

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
    msg.setTimeStamp(0.134062626225);
    msg.setSource(58248U);
    msg.setSourceEntity(77U);
    msg.setDestination(49169U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.859539195425;
    msg.lon = 0.989378217644;
    msg.z = 0.4184499574;
    msg.z_units = 37U;
    msg.speed = 0.0586336395686;
    msg.speed_units = 194U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33574U;
    tmp_msg_0.off_x = 0.154953455765;
    tmp_msg_0.off_y = 0.89067215223;
    tmp_msg_0.off_z = 0.501373911955;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.109449695351;
    msg.custom.assign("WZEKOYKOGPNZBQGOPUNOPGHGHIRUYCRKAAONTHDCSJBOQQBXUSBFGUFCFQAXCVLFSEFGNIAVCHSUXCJQZUMDICBRAPAAMYWSDBJTWQDDVJHFLIIPILRWDLTVCMNBYVUNXVSATZQNPILLXOXZKBTOBMRUEPHYDHIMZYKLUYLDWZRZHYTIPLTDVVRDXJGJPN");

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
    msg.setTimeStamp(0.145546453742);
    msg.setSource(44535U);
    msg.setSourceEntity(208U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.64746879729;
    msg.lon = 0.946146630972;
    msg.z = 0.707043472256;
    msg.z_units = 31U;
    msg.speed = 0.732441897156;
    msg.speed_units = 8U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.926560548091;
    tmp_msg_0.y = 0.841529773106;
    tmp_msg_0.z = 0.954032206846;
    tmp_msg_0.t = 0.442210693201;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.571009610434;
    msg.custom.assign("ZRCVAGKNFVXZZXBEISCNVBWLFBZXONGOKEYZPUTFZVQJJXRBJHDQZYOBTBLIDTNXKPJDCQQKKCQLUQPOGOCWWWICSVYIDNXKJTDLMSEADQLFHLMNTBINIIRDCWTISVZPPAJOJDMMXROCOPGKSFMSDEKYSITEKARGMMSHXJRXUFZGWHLNAJUMORGBXNHLCQVKITVEQGFVYFYWNMDCTHJLPFAREPPSFOUUZYYAEWBEQAGBWUWYRUHRAYEHAU");

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
    msg.setTimeStamp(0.808662879972);
    msg.setSource(25580U);
    msg.setSourceEntity(71U);
    msg.setDestination(62111U);
    msg.setDestinationEntity(123U);
    msg.vid = 26162U;
    msg.off_x = 0.0415939427381;
    msg.off_y = 0.52844625135;
    msg.off_z = 0.978422644165;

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
    msg.setTimeStamp(0.586577026914);
    msg.setSource(59675U);
    msg.setSourceEntity(125U);
    msg.setDestination(8421U);
    msg.setDestinationEntity(68U);
    msg.vid = 29042U;
    msg.off_x = 0.343380519923;
    msg.off_y = 0.250171832219;
    msg.off_z = 0.683314146667;

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
    msg.setTimeStamp(0.233247393687);
    msg.setSource(3350U);
    msg.setSourceEntity(140U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(212U);
    msg.vid = 17155U;
    msg.off_x = 0.619219718163;
    msg.off_y = 0.0712796847567;
    msg.off_z = 0.158531010303;

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
    msg.setTimeStamp(0.791436595931);
    msg.setSource(26045U);
    msg.setSourceEntity(200U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.133786748096);
    msg.setSource(19860U);
    msg.setSourceEntity(143U);
    msg.setDestination(59957U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.509360906115);
    msg.setSource(47846U);
    msg.setSourceEntity(39U);
    msg.setDestination(52228U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.706428160698);
    msg.setSource(63171U);
    msg.setSourceEntity(61U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(91U);
    msg.mid = 9201U;

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
    msg.setTimeStamp(0.879313500964);
    msg.setSource(38649U);
    msg.setSourceEntity(57U);
    msg.setDestination(52736U);
    msg.setDestinationEntity(253U);
    msg.mid = 13556U;

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
    msg.setTimeStamp(0.877128180952);
    msg.setSource(11970U);
    msg.setSourceEntity(19U);
    msg.setDestination(9867U);
    msg.setDestinationEntity(243U);
    msg.mid = 3401U;

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
    msg.setTimeStamp(0.815411448027);
    msg.setSource(60920U);
    msg.setSourceEntity(152U);
    msg.setDestination(23473U);
    msg.setDestinationEntity(228U);
    msg.state = 189U;
    msg.eta = 50457U;
    msg.info.assign("AGTDXBXUVRBBBORXUHQVWJEGNGLILBNADMJXIFFAROLYTDPXEJGCRAJVXYSJZXIBMIFKHQL");

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
    msg.setTimeStamp(0.293617050786);
    msg.setSource(18245U);
    msg.setSourceEntity(12U);
    msg.setDestination(21226U);
    msg.setDestinationEntity(198U);
    msg.state = 6U;
    msg.eta = 54712U;
    msg.info.assign("RVPMXQVXOGCNUDUNTPSBUGFWKBPBADOPOGSPAJEYJZUNSSFHXYOQVMQSNKGYR");

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
    msg.setTimeStamp(0.264379655224);
    msg.setSource(44711U);
    msg.setSourceEntity(58U);
    msg.setDestination(58593U);
    msg.setDestinationEntity(86U);
    msg.state = 168U;
    msg.eta = 14423U;
    msg.info.assign("NGBVYFSEOTHKZRDYLYBEGCXNKNKHRFVQCHHMSQECOLSJBJBJDXLWZBPFYAWNZWV");

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
    msg.setTimeStamp(0.65373958435);
    msg.setSource(54769U);
    msg.setSourceEntity(113U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(87U);
    msg.system = 11633U;
    msg.duration = 48709U;
    msg.speed = 0.629849016502;
    msg.speed_units = 208U;
    msg.x = 0.141990896694;
    msg.y = 0.528078971645;
    msg.z = 0.256996771452;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.808291104592);
    msg.setSource(60066U);
    msg.setSourceEntity(231U);
    msg.setDestination(35061U);
    msg.setDestinationEntity(75U);
    msg.system = 14203U;
    msg.duration = 28287U;
    msg.speed = 0.768111742704;
    msg.speed_units = 18U;
    msg.x = 0.512665826268;
    msg.y = 0.181835048016;
    msg.z = 0.994172052131;
    msg.z_units = 35U;

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
    msg.setTimeStamp(0.51766482597);
    msg.setSource(22176U);
    msg.setSourceEntity(143U);
    msg.setDestination(8433U);
    msg.setDestinationEntity(131U);
    msg.system = 8916U;
    msg.duration = 11815U;
    msg.speed = 0.00959052131671;
    msg.speed_units = 58U;
    msg.x = 0.381772862523;
    msg.y = 0.642738347235;
    msg.z = 0.0919172397542;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.191400379822);
    msg.setSource(47187U);
    msg.setSourceEntity(146U);
    msg.setDestination(43417U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.752950544449;
    msg.lon = 0.073864436663;
    msg.speed = 0.192251090121;
    msg.speed_units = 8U;
    msg.duration = 19145U;
    msg.sys_a = 13823U;
    msg.sys_b = 42722U;
    msg.move_threshold = 0.965059459258;

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
    msg.setTimeStamp(0.375489015822);
    msg.setSource(3942U);
    msg.setSourceEntity(75U);
    msg.setDestination(24332U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.467371728632;
    msg.lon = 0.757159457086;
    msg.speed = 0.0696712076262;
    msg.speed_units = 38U;
    msg.duration = 21523U;
    msg.sys_a = 17277U;
    msg.sys_b = 40375U;
    msg.move_threshold = 0.31257583401;

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
    msg.setTimeStamp(0.890635397804);
    msg.setSource(47073U);
    msg.setSourceEntity(206U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.401007624578;
    msg.lon = 0.880077010899;
    msg.speed = 0.799125235737;
    msg.speed_units = 169U;
    msg.duration = 7643U;
    msg.sys_a = 35123U;
    msg.sys_b = 43458U;
    msg.move_threshold = 0.715748371616;

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
    msg.setTimeStamp(0.532527814619);
    msg.setSource(36458U);
    msg.setSourceEntity(148U);
    msg.setDestination(4723U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.118352307007;
    msg.lon = 0.947722686941;
    msg.z = 0.897004752669;
    msg.z_units = 110U;
    msg.speed = 0.78030485863;
    msg.speed_units = 20U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.210040442073;
    tmp_msg_0.lon = 0.989643818275;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FDOZDAPSREBPSRPIGZSCFXCGEYLUNXKCPGQEKCSMODVXDAGEJZUXBVRDBADRKSNEUACVUHWQAIZJITMTYBNUIOHW");

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
    msg.setTimeStamp(0.232131825192);
    msg.setSource(45674U);
    msg.setSourceEntity(169U);
    msg.setDestination(27615U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.935464916253;
    msg.lon = 0.307328872327;
    msg.z = 0.898156239873;
    msg.z_units = 70U;
    msg.speed = 0.900034445094;
    msg.speed_units = 112U;
    msg.custom.assign("SGYELATZJNWECBGFMJMDATXRZTEFHDVYTLAJCCKQNAFUHHPZUYXCPGXCIPKPJOILWNCADIZXELMBTSQVXOYDMQWXBBVOGKJNHRQQEZKYMFHUHFAMLOKTPBWPZKQRSUUPLIYBKNMDERXPSSVTIUMJVDHLVBRWNYKWLAYOIUOCRQRIGCDZWYUHWWEFHRCBJZAXIFQFNMXRJEZXZSTDMUBOFUJNIRVKNCOGSKTENSBGLVQGP");

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
    msg.setTimeStamp(0.558893891513);
    msg.setSource(63731U);
    msg.setSourceEntity(178U);
    msg.setDestination(35277U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.0448298924989;
    msg.lon = 0.477411462275;
    msg.z = 0.211327402572;
    msg.z_units = 0U;
    msg.speed = 0.676784349485;
    msg.speed_units = 30U;
    msg.custom.assign("ZOERCVQKBBFQGVAWUMTSNYGWVHENDNINTQVGBXXSUVNYOMPIODLBUPMTODZXOBNANEQWGCOCILKHDRIVELJVIWJDGECSOJFUPLFTDHKKEJDQQIHD");

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
    msg.setTimeStamp(0.414539158392);
    msg.setSource(62058U);
    msg.setSourceEntity(63U);
    msg.setDestination(15286U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.456516307439;
    msg.lon = 0.513871796762;

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
    msg.setTimeStamp(0.389275425555);
    msg.setSource(45968U);
    msg.setSourceEntity(46U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.968546840161;
    msg.lon = 0.685601568272;

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
    msg.setTimeStamp(0.538434100248);
    msg.setSource(55503U);
    msg.setSourceEntity(126U);
    msg.setDestination(57902U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.63237938475;
    msg.lon = 0.103146921858;

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
    msg.setTimeStamp(0.610558709015);
    msg.setSource(43705U);
    msg.setSourceEntity(197U);
    msg.setDestination(11600U);
    msg.setDestinationEntity(143U);
    msg.timeout = 14616U;
    msg.lat = 0.0549911952082;
    msg.lon = 0.277986581784;
    msg.z = 0.74195404419;
    msg.z_units = 78U;
    msg.pitch = 0.753938550119;
    msg.amplitude = 0.121475850025;
    msg.duration = 26247U;
    msg.speed = 0.124083544253;
    msg.speed_units = 140U;
    msg.radius = 0.576619965291;
    msg.direction = 89U;
    msg.custom.assign("KHPTEJSKMZYNNWMPLXGRUCTXNFQNUUKLJRBAMOWTGBYABNLYFXIVBJJQEZVVILWHPJFUTMHPKFVZHFWIVTZQBGSNNZVSUJRFQVTAACPDWRIMC");

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
    msg.setTimeStamp(0.224001588234);
    msg.setSource(15920U);
    msg.setSourceEntity(246U);
    msg.setDestination(51737U);
    msg.setDestinationEntity(236U);
    msg.timeout = 15894U;
    msg.lat = 0.742002620084;
    msg.lon = 0.823593711334;
    msg.z = 0.25735183686;
    msg.z_units = 146U;
    msg.pitch = 0.55887306835;
    msg.amplitude = 0.901889163064;
    msg.duration = 10965U;
    msg.speed = 0.689370849948;
    msg.speed_units = 226U;
    msg.radius = 0.628951506406;
    msg.direction = 75U;
    msg.custom.assign("FTYVWKWAEOBXSQRIGQSLDJITUEMERQJBHIFKPTXTBOPEVYIRPXFONYBBUSZIJGUSMVWXDXYDKKXRZDMGSHWNCPACKDYPMGHLOBWPDUDJEMWSVWZLPXHCLCQLMQQBGFNPAZCNXABTQJUETOUOEHMMUNFKAVNOHLAN");

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
    msg.setTimeStamp(0.302542429822);
    msg.setSource(186U);
    msg.setSourceEntity(95U);
    msg.setDestination(30821U);
    msg.setDestinationEntity(153U);
    msg.timeout = 23148U;
    msg.lat = 0.00681102277024;
    msg.lon = 0.416734479456;
    msg.z = 0.34095939507;
    msg.z_units = 200U;
    msg.pitch = 0.512197048033;
    msg.amplitude = 0.42183882299;
    msg.duration = 13510U;
    msg.speed = 0.134284071673;
    msg.speed_units = 150U;
    msg.radius = 0.144543185819;
    msg.direction = 109U;
    msg.custom.assign("RITCHSZZKRRCLVAOJXWUFKNKHYEMHCEFVGACKWSSPOBWJSIIDBBDNAQBDHNOMSBMJZSQUQEGOSGDWLZKRAIPDDJDEKUGLAYPSCLGRXPNLUIIGTQTEUYBMWVBNFRONFUFGARRQFQETGTLMJREFPQMOZPYBHHECDGCDXPYVLCZWTXMUWLZJNFPCYITKUQOJTKEDHVYQOKPMOJWVZFZIBWNTHUZVP");

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
    msg.setTimeStamp(0.927999562985);
    msg.setSource(2606U);
    msg.setSourceEntity(42U);
    msg.setDestination(16625U);
    msg.setDestinationEntity(25U);
    msg.formation_name.assign("JQHWKLUCDBCWGEOLMGCYXXAMXYWFZVSZRXVQQDUKDKEKPETSNXZHFFUIOJRYQOSJHGUVQSUZZWHRTPNLNYWPILCPWCKIOFMZGHWYBWNLVETVMFIBRPMGMKAJIJRPSBIQYPLSGYRROPVBPAARNBXVUMTEDQABGDVJWOKJTYIXFAOFOHTJJQTMTVFSVBSZMZKDHONQTZCUDEDEIXCLXHAPIYNCEKLDSHJDXAIKUFNGFMGE");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23802U;
    tmp_msg_0.off_x = 0.269807916256;
    tmp_msg_0.off_y = 0.803864689832;
    tmp_msg_0.off_z = 0.893742980516;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WYZDOYTBUJAVLPEZVLQZOSFSGZHDEIWZNRWPJGRHHWEZEEEUYDWCAUJDHFGBJIUMCGOQMHWAZXGTFMVPKVGJKGYKTULRRSWUKLIRPDPVQYUNTFHPMNNCCRCHIAOTYYLHDADISIICTXARVXWHTDBBLFQZAPOPOEUJEXNABXJSNEBSARMKPTMNMVVWKBSQDZFLTELPXIQRQYGSGWTYXNIVBCXFCVFUKAFNMXJBYJGQLIUKDOJMMKXOO");

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
    msg.setTimeStamp(0.651315361733);
    msg.setSource(13936U);
    msg.setSourceEntity(88U);
    msg.setDestination(20432U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("YRQNUMGXQBUSIQTAEJOWAZTXUCGZWVIFOZPMHXJHDPOIDZIMZ");
    msg.reference_frame = 108U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2864U;
    tmp_msg_0.off_x = 0.172111789238;
    tmp_msg_0.off_y = 0.0414830320346;
    tmp_msg_0.off_z = 0.973938906836;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BICUJBUREZQZPYYBGPUPCOYTTIWSKGGRROHVRSTSPXWCTXYFKGVZUVGKODJTLSVXUYHBCPEOUYCAZCJFANNSNHMATWDDZFHWJZAFXEIJLIEMNHDMBYNXXOMMWKHUUODFKEZZNVAVATQOQKYZBNEMRQVPXCMKFUOPJDLTDLQHRCFYJIEHNLAJLDHWAQCQBQFPPRYVGLFLKXAUBSOAJHRRDSVVONXMTSWPKXIZQGIESW");

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
    msg.setTimeStamp(0.0873578614401);
    msg.setSource(59317U);
    msg.setSourceEntity(107U);
    msg.setDestination(24647U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("QWIRTYNWILOIVLHMTOGBFNDLAPQOKMSKJSDDWMXLQWFZRMDBGEQTXIQB");
    msg.reference_frame = 11U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44319U;
    tmp_msg_0.off_x = 0.839900479201;
    tmp_msg_0.off_y = 0.737314093968;
    tmp_msg_0.off_z = 0.800221699548;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CQYHXSJBBVKYGCHXMGZPRBQPHIOUVPNPCDWCJEITZKBJTUEWDUEYRPFLLGXHFKXLQOQNAZQESHJFKXVVRZJJEHTSRNAMVYTVAMXTMSVYYLKGYDQXLBRJDOUIGCSIJYBLIWPAFZAWGIKOIMJOWJLDWNYBBAWFUZZPALSRRAPCFOGVANKIUYPBWEMIREVZSTNXCTKTHQOFMGLNUISUZ");

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
    msg.setTimeStamp(0.77351189126);
    msg.setSource(48563U);
    msg.setSourceEntity(33U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("CKKOOBIRKRNXSUDKFUVJGLFDYOYYJWAAJBRIQLDRSUPDTNPJGEMVSFTFHYKXIUHPTNVZIHHKVDEMCVFEZBDQBFDQCSHFPLZXJXWROTVPBJQIJHCUHTYCOGLKSNSEZUYDNMJGMIWZTZMWGCSUR");
    msg.formation_name.assign("RGSNQAWMAVXCFGMNNEKYYKUEDATWRTZDMVIXPOQKPYZFGSAHYZMVZGGAFCSJFAYQDTRZBNKEBKML");
    msg.plan_id.assign("CJUMFHZVZRJMBLABGAEFJRTYYUPHAIXOOUIVHIKQKHBTDNNQJMHAFHJGDWLTLBDOIOYQW");
    msg.description.assign("CTDEYHVANUFOPGEDOMQNHRRASEKTBPGZXPNTPCYKLPVZQLUPGJIAZFCPDWAGIQOUINCEXIMDMPUKADSUWIXLVYJBRMSMEWZBOJCNTOBQYXRCKIGSVNDXTXUUORGJLMCWCHVMTJQULOHZKXROBKRBVOTBWLKEEEJFGLYLIHVRFZICYXDJWYVISAMFNNRSSBZ");
    msg.leader_speed = 0.77778087671;
    msg.leader_bank_lim = 0.0723922401195;
    msg.pos_sim_err_lim = 0.0646457678461;
    msg.pos_sim_err_wrn = 0.42667152914;
    msg.pos_sim_err_timeout = 179U;
    msg.converg_max = 0.738250345403;
    msg.converg_timeout = 53652U;
    msg.comms_timeout = 53849U;
    msg.turb_lim = 0.442465757827;
    msg.custom.assign("INYFSKFSLJTXPUTJJGLQAZORDUOKEQKERUFMTPVCBJBKUVGRQCJYQBYVGTSKYMGESKLFZVIGVWRUORTCMNWAGK");

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
    msg.setTimeStamp(0.237752931206);
    msg.setSource(5090U);
    msg.setSourceEntity(73U);
    msg.setDestination(48701U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("SFHMXGGDGULEPTYKWFBLSPJISVILEWBNVOGTXZUWDPPDKRIMCDEHYFONEUUHXCIXQJCNIJGNCRSDZDZJQBZPZLKIZQMYKFGODOXKPDNRRQVAEHRAAEDYFVFXGMLUNZATEKTLHRJMJPYCXXLFLLGYLCKMSJWFCNSOUNSIBBHDOSETIQPVRZMIUWTWAYBJNBOERTGAUZWBMVHCWAVCQJQHFNJPIVYGUMKA");
    msg.formation_name.assign("DXVWGCYMYBGOFDTGUFZOEBKHKNYNOZPFNBYYQFHKJHMNJZHE");
    msg.plan_id.assign("LLVAIZWUFTJUARMRQSMAKOCPBRHDVGEMWZRJDWJBGZAKSOEXUBEHHWTLMSIBUQJTFNBRYIISSFUQWSXDMWPVA");
    msg.description.assign("BVNUVSPHPTFKNFJESBUXXQWGFCGYRLCPDROONYSLUACKVYGVDKVPRXJMAIOHXTUVMWWZJRIQICRHZHEECYLVJBULVKFNYNJNBTRWUDYXLDHHOWILCDOXSQIAPHDEBAWUGBGFGATFQ");
    msg.leader_speed = 0.516436551671;
    msg.leader_bank_lim = 0.659753110325;
    msg.pos_sim_err_lim = 0.732173474421;
    msg.pos_sim_err_wrn = 0.508471361576;
    msg.pos_sim_err_timeout = 16903U;
    msg.converg_max = 0.346362300359;
    msg.converg_timeout = 52643U;
    msg.comms_timeout = 38349U;
    msg.turb_lim = 0.568126944322;
    msg.custom.assign("QZCNQQKRPVZJCOBQKSAFUZMHFOURYESCLFEGGAUPTPVIAUHBEDPRCPDIYQCMQNQVMPXXZNSBHIZFPQSNBEIGZUQCNGLUXSSTOVGMVKLXBEWJKBGDOWIPZNLYFKFUJPFOSECRRWAYSVCWLMDCUDBLNHDYKJVOEAMDNPRIAAATRIHZJEYFLKAGKXJYMTMHEVTEHIXAOKFJXROGWWWUXVHROWHTWBXMRJHLZGBTYNUDDTYKSVJFCYOS");

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
    msg.setTimeStamp(0.604303577895);
    msg.setSource(7725U);
    msg.setSourceEntity(174U);
    msg.setDestination(9178U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("PEPLHATYELTMSEKLOKBOHRWELWGNMINDRAWULTZFAMJZJMWWIUVERYDIHCBYHZTFZSMBOGQETVDBBJMGGUJNOPXIUPRJWMOWQDSSTULLVUSPLZDOGZLHGKZKICIKPEDCDZBRUVBABCAXUMFGKCAYHNRSNYFBHDAQXW");
    msg.formation_name.assign("DCPVZTFFWPOZWZEIDRKGILENMEVQZPTLATZWLPGOMHTPXILUASLGAJKDLNGTXBDEROCGQRAUFGHMPVSWSNYFXGVYOBHNCYMBEWPZHHVQQXEIWKQQYJFDYRSYPEUWIJJKRBNTRDMKUOPXFMUSCKLIZMYUUXSWRXFGSCCAOLSNOAFQPNRRUBYNLSCHKTHGVHKHET");
    msg.plan_id.assign("PNXQHXRDDBOWQCNEJEWLZHGPQGRMQCFOFRYPIPUVOGPGAZHLMZLBQKVBHFESMKNHOREOKWFKYWDUWCULGIBY");
    msg.description.assign("GTZVGHQIKZEXYZOTNVPSXXPNQSNGTKDDPMJRRAOPKBHWLXXZUEXRUOOKMWMWTYKBJEOKQSWTKCFQHRTUCFEJXOVIYNVFBLFDYAMWXVJRVFOECHFCQMCAYJNAUEAL");
    msg.leader_speed = 0.134172627596;
    msg.leader_bank_lim = 0.982619360462;
    msg.pos_sim_err_lim = 0.545188905921;
    msg.pos_sim_err_wrn = 0.264390871678;
    msg.pos_sim_err_timeout = 41018U;
    msg.converg_max = 0.535047993291;
    msg.converg_timeout = 25337U;
    msg.comms_timeout = 2146U;
    msg.turb_lim = 0.323699348804;
    msg.custom.assign("ZMRIBDOUBAMSLPQIJBFVHVFHCSTYWAUZGGQTQDZKTBOQDIVUQNERGESVJPNASFWETLIDFCIXDMFLGJWCLQAKZWHTFRIASQVKVUBHLAMRABFCLNXMUEJNPJWXXPBNCKKEKKONWOHDZDZPNWRJYGARSPJCGGHXCHTDCVXOASZQKMYEUZTMNGPUKEQOASXHHONGDEXMO");

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
    msg.setTimeStamp(0.746366696726);
    msg.setSource(28529U);
    msg.setSourceEntity(186U);
    msg.setDestination(54952U);
    msg.setDestinationEntity(61U);
    msg.control_src = 41608U;
    msg.control_ent = 44U;
    msg.timeout = 0.923152811372;
    msg.loiter_radius = 0.257606633135;
    msg.altitude_interval = 0.608446108567;

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
    msg.setTimeStamp(0.597742105934);
    msg.setSource(46356U);
    msg.setSourceEntity(117U);
    msg.setDestination(48367U);
    msg.setDestinationEntity(117U);
    msg.control_src = 44758U;
    msg.control_ent = 180U;
    msg.timeout = 0.979091603747;
    msg.loiter_radius = 0.303138956026;
    msg.altitude_interval = 0.456949783014;

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
    msg.setTimeStamp(0.572416264928);
    msg.setSource(23749U);
    msg.setSourceEntity(112U);
    msg.setDestination(13546U);
    msg.setDestinationEntity(158U);
    msg.control_src = 32724U;
    msg.control_ent = 18U;
    msg.timeout = 0.442945969183;
    msg.loiter_radius = 0.528102128055;
    msg.altitude_interval = 0.244323351749;

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
    msg.setTimeStamp(0.343330033866);
    msg.setSource(59190U);
    msg.setSourceEntity(85U);
    msg.setDestination(28266U);
    msg.setDestinationEntity(35U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.283137510627;
    tmp_msg_0.speed_units = 161U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.233103792448;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.465719332654;
    msg.lon = 0.471102293571;
    msg.radius = 0.0947258995293;

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
    msg.setTimeStamp(0.872597626698);
    msg.setSource(64263U);
    msg.setSourceEntity(48U);
    msg.setDestination(19439U);
    msg.setDestinationEntity(74U);
    msg.flags = 40U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.944113935658;
    tmp_msg_0.speed_units = 234U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.277383738369;
    tmp_msg_1.z_units = 15U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.033869183681;
    msg.lon = 0.0156481999892;
    msg.radius = 0.981089814697;

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
    msg.setTimeStamp(0.169200861908);
    msg.setSource(17750U);
    msg.setSourceEntity(235U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(49U);
    msg.flags = 143U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0011185663416;
    tmp_msg_0.speed_units = 247U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0546997613381;
    tmp_msg_1.z_units = 211U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.574349159493;
    msg.lon = 0.294320751717;
    msg.radius = 0.304221906056;

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
    msg.setTimeStamp(0.529865893704);
    msg.setSource(24224U);
    msg.setSourceEntity(64U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(243U);
    msg.control_src = 19744U;
    msg.control_ent = 98U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0450241407694;
    tmp_tmp_msg_0_0.speed_units = 233U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.509184283063;
    tmp_tmp_msg_0_1.z_units = 224U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.653573033039;
    tmp_msg_0.lon = 0.831779851395;
    tmp_msg_0.radius = 0.709171138958;
    msg.reference.set(tmp_msg_0);
    msg.state = 164U;
    msg.proximity = 152U;

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
    msg.setTimeStamp(0.350342507578);
    msg.setSource(11944U);
    msg.setSourceEntity(167U);
    msg.setDestination(58997U);
    msg.setDestinationEntity(29U);
    msg.control_src = 49316U;
    msg.control_ent = 174U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 15U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.278107244485;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.59391224579;
    tmp_tmp_msg_0_1.z_units = 85U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.957320236476;
    tmp_msg_0.lon = 0.104532664349;
    tmp_msg_0.radius = 0.266436539577;
    msg.reference.set(tmp_msg_0);
    msg.state = 23U;
    msg.proximity = 237U;

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
    msg.setTimeStamp(0.904706079994);
    msg.setSource(24268U);
    msg.setSourceEntity(248U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(118U);
    msg.control_src = 27253U;
    msg.control_ent = 129U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 136U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.824000641152;
    tmp_tmp_msg_0_0.speed_units = 82U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.205558151686;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.874851138971;
    tmp_msg_0.lon = 0.742246407264;
    tmp_msg_0.radius = 0.435248294691;
    msg.reference.set(tmp_msg_0);
    msg.state = 251U;
    msg.proximity = 218U;

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
    msg.setTimeStamp(0.138350190887);
    msg.setSource(21089U);
    msg.setSourceEntity(143U);
    msg.setDestination(55832U);
    msg.setDestinationEntity(8U);
    msg.ax_cmd = 0.196591892376;
    msg.ay_cmd = 0.839023196932;
    msg.az_cmd = 0.626583974254;
    msg.ax_des = 0.312469236654;
    msg.ay_des = 0.402938979506;
    msg.az_des = 0.207526697361;
    msg.virt_err_x = 0.14559409064;
    msg.virt_err_y = 0.709784915716;
    msg.virt_err_z = 0.29446965523;
    msg.surf_fdbk_x = 0.712777649435;
    msg.surf_fdbk_y = 0.618545010775;
    msg.surf_fdbk_z = 0.546802763784;
    msg.surf_unkn_x = 0.555234194726;
    msg.surf_unkn_y = 0.646584960148;
    msg.surf_unkn_z = 0.773132919902;
    msg.ss_x = 0.350083079686;
    msg.ss_y = 0.175478176449;
    msg.ss_z = 0.469664600119;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NFIHIWCSQXYZLFSCBREXWPJNMXWVWAWVXGHLXOVJGCOQNPKZZOMHBJNUSJQQIPUNIIUMBUMVRTEVNUGGSMXAKCYEQSUNPTEIWDJKWZHAEFJSYOTMOFTIAHOVKGELLCZCMDSULTOPCNNDLFIHTRHD");
    tmp_msg_0.dist = 0.809258615577;
    tmp_msg_0.err = 0.603086763167;
    tmp_msg_0.ctrl_imp = 0.311279901202;
    tmp_msg_0.rel_dir_x = 0.00548927950977;
    tmp_msg_0.rel_dir_y = 0.16588804916;
    tmp_msg_0.rel_dir_z = 0.502299933003;
    tmp_msg_0.err_x = 0.969451447852;
    tmp_msg_0.err_y = 0.0264323542998;
    tmp_msg_0.err_z = 0.152760527684;
    tmp_msg_0.rf_err_x = 0.257574000017;
    tmp_msg_0.rf_err_y = 0.957109702151;
    tmp_msg_0.rf_err_z = 0.273039731584;
    tmp_msg_0.rf_err_vx = 0.383393280434;
    tmp_msg_0.rf_err_vy = 0.589796236347;
    tmp_msg_0.rf_err_vz = 0.181558519352;
    tmp_msg_0.ss_x = 0.845612421681;
    tmp_msg_0.ss_y = 0.995034642397;
    tmp_msg_0.ss_z = 0.454824872152;
    tmp_msg_0.virt_err_x = 0.924250519159;
    tmp_msg_0.virt_err_y = 0.800998198393;
    tmp_msg_0.virt_err_z = 0.685303487017;
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
    msg.setTimeStamp(0.367653169737);
    msg.setSource(51684U);
    msg.setSourceEntity(25U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(52U);
    msg.ax_cmd = 0.461066567414;
    msg.ay_cmd = 0.977513499646;
    msg.az_cmd = 0.0404060600542;
    msg.ax_des = 0.67090823166;
    msg.ay_des = 0.501409375515;
    msg.az_des = 0.588234715008;
    msg.virt_err_x = 0.463559084634;
    msg.virt_err_y = 0.208598126421;
    msg.virt_err_z = 0.345485067003;
    msg.surf_fdbk_x = 0.808878030769;
    msg.surf_fdbk_y = 0.768421101764;
    msg.surf_fdbk_z = 0.11273655661;
    msg.surf_unkn_x = 0.752210297469;
    msg.surf_unkn_y = 0.051608433058;
    msg.surf_unkn_z = 0.453904462109;
    msg.ss_x = 0.953452662124;
    msg.ss_y = 0.755330936455;
    msg.ss_z = 0.484797413269;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VRYDGZYBQELKDTWQCGNQSVXZXRNRQZPADYLZUJORTFUDCGZLUVNVXBKEBJLMWWZOIIMSKJLRTYHBIIJGIDHODIPRVYYPWIAKASFZNYHOKKMEWFQSCBXOTKQIHTWLLDXNMXFSWEUPFLJHIYCNPZXCOZVWHVUAEUCLODWPGLTBFGSQFT");
    tmp_msg_0.dist = 0.0796655906922;
    tmp_msg_0.err = 0.788324020706;
    tmp_msg_0.ctrl_imp = 0.180707394915;
    tmp_msg_0.rel_dir_x = 0.982644480774;
    tmp_msg_0.rel_dir_y = 0.733833443191;
    tmp_msg_0.rel_dir_z = 0.231498641709;
    tmp_msg_0.err_x = 0.579292522818;
    tmp_msg_0.err_y = 0.444636422053;
    tmp_msg_0.err_z = 0.880020142593;
    tmp_msg_0.rf_err_x = 0.804742519358;
    tmp_msg_0.rf_err_y = 0.123617954383;
    tmp_msg_0.rf_err_z = 0.795870351135;
    tmp_msg_0.rf_err_vx = 0.143595337722;
    tmp_msg_0.rf_err_vy = 0.0980561411087;
    tmp_msg_0.rf_err_vz = 0.0651403134444;
    tmp_msg_0.ss_x = 0.378113499968;
    tmp_msg_0.ss_y = 0.396463338528;
    tmp_msg_0.ss_z = 0.391240587939;
    tmp_msg_0.virt_err_x = 0.802367989858;
    tmp_msg_0.virt_err_y = 0.900958411215;
    tmp_msg_0.virt_err_z = 0.0354002087064;
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
    msg.setTimeStamp(0.190137652101);
    msg.setSource(55415U);
    msg.setSourceEntity(17U);
    msg.setDestination(12211U);
    msg.setDestinationEntity(157U);
    msg.ax_cmd = 0.0969224614632;
    msg.ay_cmd = 0.999280593382;
    msg.az_cmd = 0.91573087431;
    msg.ax_des = 0.989904596038;
    msg.ay_des = 0.543632463686;
    msg.az_des = 0.645161943474;
    msg.virt_err_x = 0.452049024596;
    msg.virt_err_y = 0.983082209578;
    msg.virt_err_z = 0.633787777578;
    msg.surf_fdbk_x = 0.168010187144;
    msg.surf_fdbk_y = 0.722632954598;
    msg.surf_fdbk_z = 0.559780633903;
    msg.surf_unkn_x = 0.383957779478;
    msg.surf_unkn_y = 0.745894488812;
    msg.surf_unkn_z = 0.604565477442;
    msg.ss_x = 0.814490884321;
    msg.ss_y = 0.598501523038;
    msg.ss_z = 0.922960019188;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CCYEKNJQVSNOYNGQCTVERPTMFMMSRSEUPCDQJFXRUZBFBUEJHBVUYYRHBSKJUOJPKQTINPUXAIWGEDYZDPBEXLLJRBYKYIXNPVASGWGAVOICASHWDWMUHLLHHQTDCFSZOCQJIXKJXPXNEYJAMHVZZDIZGFPDELWEBKNKUZMAHRFZNTLABCTVMRDRJSVIRGWNMOKTLKAPDAGGZOSWSFXOQOLQQFCEBZGIHWDFULUFTXTMWYCTWAV");
    tmp_msg_0.dist = 0.64309795764;
    tmp_msg_0.err = 0.301939413678;
    tmp_msg_0.ctrl_imp = 0.315708382919;
    tmp_msg_0.rel_dir_x = 0.649523926475;
    tmp_msg_0.rel_dir_y = 0.171989444714;
    tmp_msg_0.rel_dir_z = 0.00834829538731;
    tmp_msg_0.err_x = 0.508571983758;
    tmp_msg_0.err_y = 0.857817974457;
    tmp_msg_0.err_z = 0.194669299651;
    tmp_msg_0.rf_err_x = 0.87023220696;
    tmp_msg_0.rf_err_y = 0.0500165509912;
    tmp_msg_0.rf_err_z = 0.960975203888;
    tmp_msg_0.rf_err_vx = 0.868575270989;
    tmp_msg_0.rf_err_vy = 0.974292082851;
    tmp_msg_0.rf_err_vz = 0.857808729093;
    tmp_msg_0.ss_x = 0.0190729641559;
    tmp_msg_0.ss_y = 0.124666864087;
    tmp_msg_0.ss_z = 0.459732880745;
    tmp_msg_0.virt_err_x = 0.241696270335;
    tmp_msg_0.virt_err_y = 0.404379847392;
    tmp_msg_0.virt_err_z = 0.650521856852;
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
    msg.setTimeStamp(0.651528198015);
    msg.setSource(62362U);
    msg.setSourceEntity(132U);
    msg.setDestination(16567U);
    msg.setDestinationEntity(28U);
    msg.s_id.assign("OWYDGWWVTODLCQNVVNJGHVBSGEXCLPZNMCEXTSKVNFBOJWXBIRFBWUYMDPLETEKGTYMDRVWOLBMHDJGHLTXTEIFQ");
    msg.dist = 0.422430389573;
    msg.err = 0.270784755421;
    msg.ctrl_imp = 0.16973519684;
    msg.rel_dir_x = 0.752297339545;
    msg.rel_dir_y = 0.235129718339;
    msg.rel_dir_z = 0.160507690979;
    msg.err_x = 0.754552805275;
    msg.err_y = 0.994419616881;
    msg.err_z = 0.66348107143;
    msg.rf_err_x = 0.513074645825;
    msg.rf_err_y = 0.8011026223;
    msg.rf_err_z = 0.966259563191;
    msg.rf_err_vx = 0.480442196031;
    msg.rf_err_vy = 0.549102861125;
    msg.rf_err_vz = 0.809184356683;
    msg.ss_x = 0.20353291756;
    msg.ss_y = 0.48363343901;
    msg.ss_z = 0.951420989301;
    msg.virt_err_x = 0.966914561876;
    msg.virt_err_y = 0.927406247632;
    msg.virt_err_z = 0.113391714139;

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
    msg.setTimeStamp(0.869454958172);
    msg.setSource(19372U);
    msg.setSourceEntity(47U);
    msg.setDestination(12988U);
    msg.setDestinationEntity(102U);
    msg.s_id.assign("KCMAVCSZXBASYRQXWOGSRJGHZRNAWFTYIJVTLPERPVMTJRGNIXXPUZCBNXLZEPVWSMKFAMQZCACHALWOHORYHWIAAZZLJLQMGQUYYTQIIRTWUBYNEIRNFYXSFTOLBODSKVJVLTKFVZJDQUPETCUXDFGBEPIYOUJFNSMELQVIEPQMLUOSXKQHDE");
    msg.dist = 0.103856146648;
    msg.err = 0.982785533264;
    msg.ctrl_imp = 0.82738776636;
    msg.rel_dir_x = 0.412711657689;
    msg.rel_dir_y = 0.530296298484;
    msg.rel_dir_z = 0.60445826043;
    msg.err_x = 0.253090941354;
    msg.err_y = 0.2032032665;
    msg.err_z = 0.685154623187;
    msg.rf_err_x = 0.0843310065674;
    msg.rf_err_y = 0.961016146396;
    msg.rf_err_z = 0.139639684764;
    msg.rf_err_vx = 0.59402149929;
    msg.rf_err_vy = 0.862190351545;
    msg.rf_err_vz = 0.56837466856;
    msg.ss_x = 0.600110460217;
    msg.ss_y = 0.782366288395;
    msg.ss_z = 0.694872786945;
    msg.virt_err_x = 0.975279284198;
    msg.virt_err_y = 0.477568754698;
    msg.virt_err_z = 0.583658319963;

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
    msg.setTimeStamp(0.591520696838);
    msg.setSource(51451U);
    msg.setSourceEntity(199U);
    msg.setDestination(49975U);
    msg.setDestinationEntity(216U);
    msg.s_id.assign("XUZODYSKYLVFXAQRZJGWCHFEJYLXBECIJDHKRNYJWXLURIMRKLVMXYTSXCKYNIOOTHFEJQALLMSGYZWAIAZFOUHIBRDSMKJECEZMSFHDSKWMBSLDDAMQRGDJNHAHSPPAVJ");
    msg.dist = 0.613959083586;
    msg.err = 0.965580008467;
    msg.ctrl_imp = 0.38306430833;
    msg.rel_dir_x = 0.276289760797;
    msg.rel_dir_y = 0.357147911128;
    msg.rel_dir_z = 0.920216845453;
    msg.err_x = 0.557029273096;
    msg.err_y = 0.00637435703236;
    msg.err_z = 0.0873801304089;
    msg.rf_err_x = 0.308449683238;
    msg.rf_err_y = 0.786587833298;
    msg.rf_err_z = 0.942369467427;
    msg.rf_err_vx = 0.310798329237;
    msg.rf_err_vy = 0.663563244313;
    msg.rf_err_vz = 0.257016469318;
    msg.ss_x = 0.161189369873;
    msg.ss_y = 0.231679291341;
    msg.ss_z = 0.442171750187;
    msg.virt_err_x = 0.00859674311051;
    msg.virt_err_y = 0.897800548782;
    msg.virt_err_z = 0.391744062398;

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
    msg.setTimeStamp(0.712983714875);
    msg.setSource(24049U);
    msg.setSourceEntity(108U);
    msg.setDestination(4567U);
    msg.setDestinationEntity(96U);
    msg.timeout = 60933U;
    msg.rpm = 0.983043260912;
    msg.direction = 35U;
    msg.custom.assign("GWJUCZOABLTSBPFKHSBPRSVDUCNXRNWEEBTUJCVBIHDMQGNULVAHBOGDTFFWMSCFHWXCOYWZUEBWANNZYPEGORRNGQYQLDZGLRMBJDIPXPOFVPVSWWRHYTORRJXUCEAKZRPTMNVQKUKTKPFXUJNZEAAYYYHQMAONZUTUJEOYXARHGICIITVXLQXMKHAFDIPTIZGHFKLSLDJS");

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
    msg.setTimeStamp(0.0475363254068);
    msg.setSource(43415U);
    msg.setSourceEntity(40U);
    msg.setDestination(6530U);
    msg.setDestinationEntity(140U);
    msg.timeout = 49989U;
    msg.rpm = 0.189955780244;
    msg.direction = 230U;
    msg.custom.assign("NMRCSEMPPYSMDLOLXWNZPDMWVHRYAHXYUIFRQRPOWTKSEJMLC");

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
    msg.setTimeStamp(0.97991357722);
    msg.setSource(3775U);
    msg.setSourceEntity(125U);
    msg.setDestination(46141U);
    msg.setDestinationEntity(141U);
    msg.timeout = 2935U;
    msg.rpm = 0.482322767244;
    msg.direction = 26U;
    msg.custom.assign("MSNNMJWLAZGAUWKKHVOINCBHDOMUIIKFJNRBGJJAACITBWPUDXSWRBKDTHHVXHVQIQIQIMFKNZXOSNPZYDKUBVJVWAEUZLJGIRXSGSOFUQZIFLGQFMQNLXROZKLYVTCXGZOJXMGFSTZPVTLCEWQDEBAMJXLERKTD");

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
    msg.setTimeStamp(0.566867894416);
    msg.setSource(39644U);
    msg.setSourceEntity(220U);
    msg.setDestination(60540U);
    msg.setDestinationEntity(206U);
    msg.formation_name.assign("YQRHYVJQKBLTINGHCPDSWHHBYTHFKLEPJOVBCHNTNRRTOIDHNXWXNGZBGPFVPXIAOYSAYYDKBZXKMIEDVAFMGDPCDWAFALUDATVAXISMVNRCWQNRUCOPRZCICPFJUSZYVGDNMFOMWVOXYNPFYJJGLZQZHLXTGQTQUMNWZJPJBEESKT");
    msg.type = 211U;
    msg.op = 118U;
    msg.group_name.assign("IRBTKYKRWCYJMNWPAJPNBONQBKNTHUVVECCZBPY");
    msg.plan_id.assign("PWULGMNOZHFTESCGUCOEBWMMFROZNRCIGZVIYZXASGEEQTXMTGBHBBTZWNULSIADXPBZPQGYGIVLYGKDFDKIGXYIJYVWJMJDQMDWRVYHQCRAAFBJSTFNVOTJPTDIYKHYZMUIAMEFELFNSRLECPJOJJMVAVAOTXBSQXLWLRDBNTDKKLFUSRPBHOLEPFVXUNKOLNQUEOVWFXAJRVDCHUKNZSSQUKHRNZMOHZWCECPCQCKSHJURI");
    msg.description.assign("NQKUKAVCDAFIVFNJPCHFWGUFSUPIHFKGXWAHVDQJAKSRYZNJDZMJUJKZSSEWNVNUHNJXVAIGMEWNSBKAOPPROYUEBPOTTEXKMDRXWRREXGZYMQHNDLLPFRPRKLITCUCDLHCPETZMSBPIFZAQTKNQYIRFYZMCBDSTDHYCGQFTQOVGVZSXMHZTCJWWYEHDUCQXNBLLIQEJCWRJOYVOGUOAUPYABQOML");
    msg.reference_frame = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64389U;
    tmp_msg_0.off_x = 0.574503791464;
    tmp_msg_0.off_y = 0.133818890605;
    tmp_msg_0.off_z = 0.243242523548;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.885887189046;
    msg.leader_speed_min = 0.927228646307;
    msg.leader_speed_max = 0.564087893578;
    msg.leader_alt_min = 0.807014025193;
    msg.leader_alt_max = 0.915523971063;
    msg.pos_sim_err_lim = 0.815565507483;
    msg.pos_sim_err_wrn = 0.793247529741;
    msg.pos_sim_err_timeout = 23869U;
    msg.converg_max = 0.179091108024;
    msg.converg_timeout = 49913U;
    msg.comms_timeout = 24070U;
    msg.turb_lim = 0.914405219749;
    msg.custom.assign("KQFRFUDLNKLSAUYAGIDNAFWSBDHYEDOJPMFOROTZHWWEDLFRDOTLXNIYRASKTBCNDICBGZVMAWMNQUEYXBKWVUCCPUFEVJOQ");

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
    msg.setTimeStamp(0.312510951596);
    msg.setSource(9510U);
    msg.setSourceEntity(118U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("ZDWEZDJUITFUY");
    msg.type = 48U;
    msg.op = 9U;
    msg.group_name.assign("VXWLUCTNCJRXYTEDIZGHMWHVWKMEIIIDHTERVKQFBUABQVQVOBLBKCKXNIAGLZXRQDOMLLWQHUASRJDYKGVXCTJNLSAVCFUUGADGFNEFNZNDAZISDZWPFKLTWPQZXTJSFHXGOUJRGFRYHXIAIISOOMYDHCUDNFQPTCENMJWOZIHGKSGQPUYBSJSVXLOKTSUYYMCYBUBC");
    msg.plan_id.assign("ILHDNSNRUCKXVXRFOPXJJGFV");
    msg.description.assign("WHQXLZIWLSIETCFLENATITADIGKZDNBCVGJDVSYMUXBAWUXOENOMYTUFMLADYNYIWXIUZEKMFRWUESKXVFZPSVOZYLZMGRZDLDKHTUJVHHYPENMPDFPAWSYWAYRUPGTHIBKTBRNPKHBLHCRQWKRFJGZQMNRRAKHFIPEOGYXTOCBWJTJLMBQCGUKMDOCCDVMQLNQHWIAQB");
    msg.reference_frame = 72U;
    msg.leader_bank_lim = 0.929649643912;
    msg.leader_speed_min = 0.297542844431;
    msg.leader_speed_max = 0.00288519592939;
    msg.leader_alt_min = 0.656240913397;
    msg.leader_alt_max = 0.940581706142;
    msg.pos_sim_err_lim = 0.440632819199;
    msg.pos_sim_err_wrn = 0.374619358613;
    msg.pos_sim_err_timeout = 29549U;
    msg.converg_max = 0.693463596588;
    msg.converg_timeout = 64216U;
    msg.comms_timeout = 6902U;
    msg.turb_lim = 0.109249218323;
    msg.custom.assign("NYYWVQNFKQISQCZXMIJZSRKKEOLQTREETJNYVVXLIPVIYEPTGJBAIGCTWNQTFDPXRBJOHDAUCGEXUHLVDVMWXLNCMGDRQFSNANKGSCKMZMALZTXCWP");

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
    msg.setTimeStamp(0.932052565647);
    msg.setSource(27474U);
    msg.setSourceEntity(42U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(57U);
    msg.formation_name.assign("AHEBHXKGBPRPDZHWZJAOJSSZACSBCBZVLQGOBIRJEHSATTQRLTZXMUEIOPLUXZMYCRHKSGDZMPPFXPGODMDDNEPIWVIQLVNYRVFUCKLZHVAUQFYOZNGVFWGYCXADTXBRLWNWKSXYFHAIFGQDNQHVUJVMORYIGQTFNTKSONCWJYTNYCUDAHUVQIYJWTSJEMLCTRYLCKXLDKJF");
    msg.type = 109U;
    msg.op = 119U;
    msg.group_name.assign("RFTJIDVUSEGZZCGDUHGEDMIELIMQGJQPBFZMKBHFQKJZWZNSOWCSTHACEQUBUULXCZNPQYIPTOGLXQWFGOMOWNDJMGMRBJQUNQPLOFKYHVLKEFMKTTJNJTDBQACCZVXHKIGNDJDZXRXPMLROXECBWAYKPKE");
    msg.plan_id.assign("DDXGLWJIFULUVIXZCSVAJBKBZMNEOIRHDIRWSHRFSSDZTNOCDCQSYPBKEJV");
    msg.description.assign("TGPOVNIRWNCXQWBKXUCXWSSOPVUVLAYFKUVKJZILDGHBPBRVLREZCLDTZEPXEHIMYEUCHGDIDHPFJDAWPMSBSYXDGNQTMUNJIVVRMVYIFVJEIPZFACYHETYQQHEJNCOKUBKTKTNBRKMIQYREQATZJQLHUCXKWSAJOGFOANUCCAYXZSVSXGFFDSEIUMLQZOWFRPYZXLZJPTBETQGHHSZJULMDBMCGNKQRRAOHOSMLKRXLFAWNWGOTFWWNDMPYJ");
    msg.reference_frame = 247U;
    msg.leader_bank_lim = 0.0261330411021;
    msg.leader_speed_min = 0.711599539253;
    msg.leader_speed_max = 0.571502063761;
    msg.leader_alt_min = 0.27641830955;
    msg.leader_alt_max = 0.165028587658;
    msg.pos_sim_err_lim = 0.495776777478;
    msg.pos_sim_err_wrn = 0.337456859265;
    msg.pos_sim_err_timeout = 12249U;
    msg.converg_max = 0.146487981503;
    msg.converg_timeout = 18559U;
    msg.comms_timeout = 44309U;
    msg.turb_lim = 0.249481235062;
    msg.custom.assign("AZSFIEKSUFXQRKTYKNDXOKIYTOFNMLCPUWBOAJGCFWJPUMJIHEVBSWLDNGDYCZEJLHRIQJMPCIKMRNZXBFTRWDSPFVBJQABXHGDTOXUPNUCSINRDMZQYERVXVBRPZYOAMWGXNQCLTSUWKRLPLASLYROQLYFUBGEDGTMNYUVSXLFHWQMMACXVOEMGSKOGWVIHTEGEKVZOTKJHSDIHLXHNPBCVCJQKRUJAVYIDCPTAQFBYAENEWZTAHUG");

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
    msg.setTimeStamp(0.418044162723);
    msg.setSource(54591U);
    msg.setSourceEntity(195U);
    msg.setDestination(8391U);
    msg.setDestinationEntity(163U);
    msg.timeout = 60777U;
    msg.lat = 0.814246906219;
    msg.lon = 0.188160795663;
    msg.z = 0.16765808038;
    msg.z_units = 160U;
    msg.speed = 0.653944207437;
    msg.speed_units = 141U;
    msg.custom.assign("DLVOTLYBIQMXIJPYACCYJQXAYGZWCPNRAHMXUIMTDFMPQMYRIBESWBHYGQUXIDCGRCWAAJZNLSOKEHOIPDLNUFPPATSSMFHZLLOVPERZDKDGUTVBKETLNOZUMGUNEBJPGTVHOVWKXSUHWUFLKNHBQDWUZPCZAZBCICTIQNRMFKFMGFJJVNXIVGZKVVSQQYWKLCJWIXGRBRXEUYR");

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
    msg.setTimeStamp(0.211329043763);
    msg.setSource(38470U);
    msg.setSourceEntity(199U);
    msg.setDestination(13164U);
    msg.setDestinationEntity(139U);
    msg.timeout = 38233U;
    msg.lat = 0.753226597167;
    msg.lon = 0.201093295449;
    msg.z = 0.281205113058;
    msg.z_units = 189U;
    msg.speed = 0.251210511549;
    msg.speed_units = 123U;
    msg.custom.assign("OOSRQXSLLAOTVROSUENUNZWUYAFUGHMFUVUENYOQVFP");

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
    msg.setTimeStamp(0.204499066341);
    msg.setSource(33641U);
    msg.setSourceEntity(11U);
    msg.setDestination(9007U);
    msg.setDestinationEntity(132U);
    msg.timeout = 29118U;
    msg.lat = 0.641010822058;
    msg.lon = 0.19773201629;
    msg.z = 0.482646339371;
    msg.z_units = 171U;
    msg.speed = 0.292841770378;
    msg.speed_units = 11U;
    msg.custom.assign("YRSOQDKSIBOXBPZVEVXXCGBVNPPCARXZJTZKTQKUNLGRUQVWMFOHDICVXAAHOMALXASNMXQWQASTPCGJNDXFBWYUUTVNKCILFQUGBSRROREGHZSMBEPHZVWLKRVLAPZECBJCOEYDFZKLFUGWOZLPJPENTTEWLJVYDDCASMIUIMMCQFUVDHHYWRWDAHHYJFBDTNNZUSJQIQJHKUTOKMQIKGNGIFBXSOHBNMYCDYYFKPWFMILPEYTATGJWX");

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
    msg.setTimeStamp(0.808330874695);
    msg.setSource(22371U);
    msg.setSourceEntity(213U);
    msg.setDestination(23172U);
    msg.setDestinationEntity(125U);
    msg.timeout = 14427U;
    msg.lat = 0.619585762806;
    msg.lon = 0.169716830117;
    msg.z = 0.629893586109;
    msg.z_units = 92U;
    msg.speed = 0.575563044761;
    msg.speed_units = 70U;
    msg.custom.assign("VZEAEZUIPUVDKLYFJZPKBUHDFYTLOWZQUCCTRSQNWLIMEIBQTRSVRAVDVOOBMFBHMKBKRWND");

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
    msg.setTimeStamp(0.375820507823);
    msg.setSource(43345U);
    msg.setSourceEntity(119U);
    msg.setDestination(34266U);
    msg.setDestinationEntity(153U);
    msg.timeout = 41629U;
    msg.lat = 0.273451991715;
    msg.lon = 0.760568121931;
    msg.z = 0.477264100616;
    msg.z_units = 253U;
    msg.speed = 0.979899461271;
    msg.speed_units = 199U;
    msg.custom.assign("MHUPKEHOTLCGGZAISDFJNOWJYYYVNDMATPNXORCLHMTIWGYUPDSSUGMYAIHEWBVKXIJVOZNQZERAQ");

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
    msg.setTimeStamp(0.4035109991);
    msg.setSource(28729U);
    msg.setSourceEntity(209U);
    msg.setDestination(12727U);
    msg.setDestinationEntity(51U);
    msg.timeout = 32394U;
    msg.lat = 0.218332818119;
    msg.lon = 0.92475461576;
    msg.z = 0.80976676463;
    msg.z_units = 127U;
    msg.speed = 0.0791300380236;
    msg.speed_units = 249U;
    msg.custom.assign("EISGVOXHPFCUPIHRVQOWXDUDOFANYPYFLHHRJUBSFAXZBQPWAZSIRMSSUASQJYHGYKMGQIAZPWKNCRCKAPGXZVTLMLSBCWHOQGQUKKFFVAXZEEPDZTWBNTTODDWNOOEYWRTCUNQQED");

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
    msg.setTimeStamp(0.145230513583);
    msg.setSource(5245U);
    msg.setSourceEntity(120U);
    msg.setDestination(21000U);
    msg.setDestinationEntity(156U);
    msg.arrival_time = 0.910226418926;
    msg.lat = 0.633417705885;
    msg.lon = 0.816963986989;
    msg.z = 0.537647486837;
    msg.z_units = 247U;
    msg.travel_z = 0.226373210138;
    msg.travel_z_units = 254U;
    msg.delayed = 69U;

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
    msg.setTimeStamp(0.665425119086);
    msg.setSource(19722U);
    msg.setSourceEntity(114U);
    msg.setDestination(64028U);
    msg.setDestinationEntity(225U);
    msg.arrival_time = 0.483187356931;
    msg.lat = 0.876096903786;
    msg.lon = 0.628835555491;
    msg.z = 0.990928084521;
    msg.z_units = 77U;
    msg.travel_z = 0.300820741172;
    msg.travel_z_units = 129U;
    msg.delayed = 66U;

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
    msg.setTimeStamp(0.422360587409);
    msg.setSource(51690U);
    msg.setSourceEntity(54U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(248U);
    msg.arrival_time = 0.201792652948;
    msg.lat = 0.916334703718;
    msg.lon = 0.0378262224731;
    msg.z = 0.703437459914;
    msg.z_units = 143U;
    msg.travel_z = 0.868919360641;
    msg.travel_z_units = 89U;
    msg.delayed = 185U;

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
    msg.setTimeStamp(0.54333253594);
    msg.setSource(5806U);
    msg.setSourceEntity(243U);
    msg.setDestination(37969U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.0498577795103;
    msg.lon = 0.82845994689;
    msg.z = 0.0812632002373;
    msg.z_units = 187U;
    msg.speed = 0.533772196244;
    msg.speed_units = 115U;
    msg.bearing = 0.660758187466;
    msg.cross_angle = 0.731237399931;
    msg.width = 0.681913088693;
    msg.length = 0.986807462145;
    msg.coff = 173U;
    msg.angaperture = 0.954931050109;
    msg.range = 39931U;
    msg.overlap = 181U;
    msg.flags = 48U;
    msg.custom.assign("FJUDBNNMMSAEWQCCLNJRWIKVFCEJLEUNAAXGIZYQKQOLEUOSUGRRVZYRYOIUQKMDYUOLJATMJXHYFSERAFHCTXHDQTZJHPQBFPXYPGNXUDKABBMBJIFWHQOTSPJCQPMCXCEBGTRYYITJPBYNZIVLGGRFFEGNDRVSIZRQXLPCWKIAVDOWIPELTLWCOTKXXVUWKBBMBGAPNZAZDUUXGIHWSTSZOVVAZVDZVQTMNMOKDLSFLHOYCKFHPJWGSSR");

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
    msg.setTimeStamp(0.611194733785);
    msg.setSource(45654U);
    msg.setSourceEntity(77U);
    msg.setDestination(27426U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.499501823358;
    msg.lon = 0.0730307388828;
    msg.z = 0.694466527254;
    msg.z_units = 140U;
    msg.speed = 0.980998235863;
    msg.speed_units = 153U;
    msg.bearing = 0.377752428933;
    msg.cross_angle = 0.262339940379;
    msg.width = 0.143589732186;
    msg.length = 0.732344038208;
    msg.coff = 200U;
    msg.angaperture = 0.991701040486;
    msg.range = 58072U;
    msg.overlap = 23U;
    msg.flags = 203U;
    msg.custom.assign("DQXZTZQNDQWVLFVUVKEUHJSHFSHKHQGDXLABERNTFPWYHURRAUBPIKSBGRNXSHJORMWTMLPDCVMLORZJMFMIUXLYHTAVCPGYZIBMJHXEVQGKTSWIXEWVFCZUDDEFQJ");

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
    msg.setTimeStamp(0.123329001538);
    msg.setSource(17233U);
    msg.setSourceEntity(25U);
    msg.setDestination(51278U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.627368427055;
    msg.lon = 0.631992137158;
    msg.z = 0.0495716000704;
    msg.z_units = 211U;
    msg.speed = 0.396822010634;
    msg.speed_units = 31U;
    msg.bearing = 0.91502110787;
    msg.cross_angle = 0.424243752645;
    msg.width = 0.5728941789;
    msg.length = 0.47533974441;
    msg.coff = 139U;
    msg.angaperture = 0.621009850303;
    msg.range = 18571U;
    msg.overlap = 38U;
    msg.flags = 6U;
    msg.custom.assign("WYIAREFKTXDVZIQKZCPBQOAYJNNSEWZITDLCMGMWJTDHPCLV");

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
    msg.setTimeStamp(0.391890358015);
    msg.setSource(36989U);
    msg.setSourceEntity(235U);
    msg.setDestination(23846U);
    msg.setDestinationEntity(204U);
    msg.timeout = 52052U;
    msg.lat = 0.433769403749;
    msg.lon = 0.873881882358;
    msg.z = 0.630818046297;
    msg.z_units = 14U;
    msg.speed = 0.171882364308;
    msg.speed_units = 7U;
    msg.syringe0 = 126U;
    msg.syringe1 = 222U;
    msg.syringe2 = 44U;
    msg.custom.assign("CRMVHMSIOPJMNPYUTXTKKXXYIEWVZYSPNWRDNJDUXLWDVWVRETKHMHTCWQWLXTMIMYCQQOINUXHKUESBTAPFPARFHGLQSNVAAWZDCOBGFJEYYXEPOSW");

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
    msg.setTimeStamp(0.752049126371);
    msg.setSource(40810U);
    msg.setSourceEntity(42U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(138U);
    msg.timeout = 11112U;
    msg.lat = 0.846118104913;
    msg.lon = 0.802750013533;
    msg.z = 0.76714628107;
    msg.z_units = 109U;
    msg.speed = 0.267941296369;
    msg.speed_units = 188U;
    msg.syringe0 = 127U;
    msg.syringe1 = 26U;
    msg.syringe2 = 86U;
    msg.custom.assign("FKWKVMVPFOSYCWZJHZLIXAA");

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
    msg.setTimeStamp(0.465739249146);
    msg.setSource(20232U);
    msg.setSourceEntity(29U);
    msg.setDestination(33070U);
    msg.setDestinationEntity(205U);
    msg.timeout = 17936U;
    msg.lat = 0.475460475536;
    msg.lon = 0.336213076635;
    msg.z = 0.402970998344;
    msg.z_units = 116U;
    msg.speed = 0.549865144664;
    msg.speed_units = 178U;
    msg.syringe0 = 11U;
    msg.syringe1 = 117U;
    msg.syringe2 = 34U;
    msg.custom.assign("GOYXEYBCJDVDXVIOQPPLYZWMFPNNUMVRTXNMSSGBTHEDTZAIQLPWEFJSPRDQVBKOFJFTSTCLOHJMYPUOZWFVKIQHSCAXSGHQMTJLPKIGNWHPVEYMRNEVQIUZEHWEXKABDFRLBQNIODYJYFVGDWDBUVBOLDYNZMKKAZRAUOPTGFZLKOUYLTZABKRQXXUCWMZSTAOSFKWIXIDKCN");

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
    msg.setTimeStamp(0.557076849133);
    msg.setSource(19066U);
    msg.setSourceEntity(89U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.0989508902447);
    msg.setSource(28923U);
    msg.setSourceEntity(123U);
    msg.setDestination(55226U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.06245247402);
    msg.setSource(37799U);
    msg.setSourceEntity(137U);
    msg.setDestination(15363U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.666243608047);
    msg.setSource(36458U);
    msg.setSourceEntity(48U);
    msg.setDestination(24098U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.177943599497;
    msg.lon = 0.498354372839;
    msg.z = 0.403895831168;
    msg.z_units = 253U;
    msg.speed = 0.875653221613;
    msg.speed_units = 31U;
    msg.takeoff_pitch = 0.291666456866;
    msg.custom.assign("RADTOISJHYZLHEYCNOEYQOSNTKESDHZALKTKNNEFLHBBVWXENQCZONUXTPRAJJLFYZCYWSMJZYAUTCYWQPUITMIBHDDRJHEUKDYUMMZAPKBWJGNRLGSXHGPKSKFCYSILUIJGWRMJWGVOXVUQLGXVPOVCJN");

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
    msg.setTimeStamp(0.830092349116);
    msg.setSource(21235U);
    msg.setSourceEntity(205U);
    msg.setDestination(20720U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.728296329806;
    msg.lon = 0.912221535314;
    msg.z = 0.998748606329;
    msg.z_units = 3U;
    msg.speed = 0.465578799475;
    msg.speed_units = 254U;
    msg.takeoff_pitch = 0.790587220939;
    msg.custom.assign("WHSKOBHHKTGSBYCTMMADZNVAEPPVCSJWMYVJGJHXZZRZJTCIPOBBQGGNKEESRCYKWLVSDSINSLUDKHNVTMMMGCUGFYEKLFXSUJPDCOOLQFIJNUZYIPQBRLJJDXLURXQFMKQTBIDXBFIAXCUZAOAXWEXGMFY");

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
    msg.setTimeStamp(0.176399227788);
    msg.setSource(51358U);
    msg.setSourceEntity(43U);
    msg.setDestination(30822U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.516743462008;
    msg.lon = 0.300086891092;
    msg.z = 0.920438580706;
    msg.z_units = 220U;
    msg.speed = 0.0861208402484;
    msg.speed_units = 79U;
    msg.takeoff_pitch = 0.89020593588;
    msg.custom.assign("NONDOBAVHJJQZYCSLHBMQUUBFNILZIICCVCYQKMTKXVIFFASPRHQWYAOFDDUPIIJZNTZSZYGRNKGVKZLMHWWXIGRDENMCHESWGVITOXVFBWXOXJGSJTBYSWLATMUNJRFEYXMERFWCGIVKQCGXLUFFXAEMPROOKLQPQYBUYBFLKLDQLHGYTPRKTDBAACYDTIRGWHMUPNJTWZQECKEESVSVQGNLPBZNOZWB");

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
    msg.setTimeStamp(0.02954610947);
    msg.setSource(10519U);
    msg.setSourceEntity(197U);
    msg.setDestination(57650U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.914049041115;
    msg.lon = 0.0373534897814;
    msg.z = 0.137266099855;
    msg.z_units = 85U;
    msg.speed = 0.0104470585526;
    msg.speed_units = 183U;
    msg.abort_z = 0.507345926999;
    msg.bearing = 0.179258175779;
    msg.glide_slope = 0U;
    msg.glide_slope_alt = 0.520196097794;
    msg.custom.assign("XHBGFRQQANPCPQAHWGKMIYHZUZXJPCBAZWIEYBHFGSDFDJXLSLEUJTSRUBHWDWYKLGKNYLAMPKVOWSOWGAZHWGJVVNDRPFRUKYHMSSZYLCHIZKCAPPPEDTMTUNKOINJBDLEQKGGVLDXXIBNTVHODQCZBBFSNFHRUPOWQMOZMIVBCJOKOOJVVVJ");

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
    msg.setTimeStamp(0.405675792017);
    msg.setSource(17465U);
    msg.setSourceEntity(177U);
    msg.setDestination(61857U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.718437305083;
    msg.lon = 0.810059170419;
    msg.z = 0.810986522916;
    msg.z_units = 77U;
    msg.speed = 0.994799910702;
    msg.speed_units = 238U;
    msg.abort_z = 0.0598580307719;
    msg.bearing = 0.987182196417;
    msg.glide_slope = 37U;
    msg.glide_slope_alt = 0.472414840086;
    msg.custom.assign("TUEGMBWGIZSHSMVKCZYIIXNPAZDZGVKVAWQEXHJOPROJFGBWHFDWQBEILGRKDQT");

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
    msg.setTimeStamp(0.618792786341);
    msg.setSource(21594U);
    msg.setSourceEntity(134U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.847347483345;
    msg.lon = 0.0630237475574;
    msg.z = 0.121640575263;
    msg.z_units = 136U;
    msg.speed = 0.73249045998;
    msg.speed_units = 117U;
    msg.abort_z = 0.203513573936;
    msg.bearing = 0.0343281622713;
    msg.glide_slope = 21U;
    msg.glide_slope_alt = 0.917428927148;
    msg.custom.assign("KKTNSGUGSVRDCJJUVGSASICHBAZDRHWESDGOSDGAPAKJZUDFMLXOMFPZDKWVDLLQKHUZTYYGVDYWUI");

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
    msg.setTimeStamp(0.00932946452699);
    msg.setSource(62229U);
    msg.setSourceEntity(160U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.654991050427;
    msg.lon = 0.917379512592;
    msg.speed = 0.0863937282847;
    msg.speed_units = 54U;
    msg.limits = 157U;
    msg.max_depth = 0.834004561188;
    msg.min_alt = 0.59737496672;
    msg.time_limit = 0.825159843552;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.393285414057;
    tmp_msg_0.lon = 0.252677630745;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ECHLRJUPCPDVNSHMHGUGUYQNMWFGJTSDSLYJTKOSFRIEOTNTPRZGGHKQUFNAIZGXRIJMGIWTLDYROBSTFRFXAKXSOFMAPCVJKPEOBQNAYZJCVGENQEFCANPHKVUUPMJAACTDTBKLOHXBWRQSHXLZTHBMVWWCSOFMOTBSZYIELNMQKDXJEPZVYGXMHDIBZRBYUFKQLPXVLDCIZQN");
    msg.custom.assign("WYHJIADWJTZZAEDIUKNIPTEKHSYBNNKHZBOJCCXWO");

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
    msg.setTimeStamp(0.404178457682);
    msg.setSource(19651U);
    msg.setSourceEntity(59U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.799629158811;
    msg.lon = 0.205545682515;
    msg.speed = 0.601284668966;
    msg.speed_units = 20U;
    msg.limits = 119U;
    msg.max_depth = 0.567031825312;
    msg.min_alt = 0.0021496878939;
    msg.time_limit = 0.892184198401;
    msg.controller.assign("YFCGOJQLZGYJUSSCBBMHCIWEWYSDALNBZAVPWEBGWNYDBLFUTVZPASVQMVKXSZIMPWOIJ");
    msg.custom.assign("FNYHSGBMKQLFUQXYVWIOCONEJZCDFEQSSNFVXXNKJKJDJRXGPTAGMCKIMJAPPQVDAQNYMUMQVDCQXSMLXWDGAUPVGMTPLQTVWLEECHANEOIXDUPOUHRJZVZKRMFICUABTHELTVEYXWNDIPBLUBRXSHPFEHTIGNLGZTOLTZKFANISBJZKLRLTWQECRHAJSPKBJYZWHOYKYVWJECGIMKUPMTBOYORQFZADORHXIUZAYNWGCFUBSWZGYWBFIBSR");

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
    msg.setTimeStamp(0.913546661505);
    msg.setSource(34475U);
    msg.setSourceEntity(251U);
    msg.setDestination(35479U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.505761039248;
    msg.lon = 0.564375796847;
    msg.speed = 0.0539714026413;
    msg.speed_units = 189U;
    msg.limits = 191U;
    msg.max_depth = 0.586901948301;
    msg.min_alt = 0.232209194328;
    msg.time_limit = 0.0941790639898;
    msg.controller.assign("BHTDEDDMQVWNVSRKWMOIYCUFAEKYMHRPTNLSZGTGXQNOZRLECZPXPFVMNQXXWKDHJB");
    msg.custom.assign("VOOQRNIZFQ");

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
    msg.setTimeStamp(0.385352855535);
    msg.setSource(32671U);
    msg.setSourceEntity(108U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(212U);
    msg.target.assign("NLAUWEMSQQBMHXYNFTNDZKDHDVMUELMITZOSAMHAXLVMGEJKZCS");
    msg.max_speed = 0.272094842285;
    msg.speed_units = 204U;
    msg.lat = 0.430526836708;
    msg.lon = 0.31743393466;
    msg.z = 0.0304360335821;
    msg.z_units = 241U;
    msg.custom.assign("FWBYJQARTIIMFXHWQVUSOMZNZSFYFKQUFFLQHKTNKUSODLYPCAQPIDIDXIMEVAMPNSZNTPSWMNSPEOAUGWCVGGPMDCKOZZEARRQYXSCCHXFDRXFGBBQXJBJOSGYEEWGJNCKROAEHBEIBUOWVPVACEXLEYTTNBKHWGYRXEHQJFCNGTVLLRIJLKDSBPWYVTDVALNKMLXIURLUZOJMBUMOTQCISTZTWDZHXZRIAHYKVPJ");

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
    msg.setTimeStamp(0.254394337615);
    msg.setSource(26126U);
    msg.setSourceEntity(139U);
    msg.setDestination(46488U);
    msg.setDestinationEntity(120U);
    msg.target.assign("BMKWPZQIZKXQRSQUMUPKYINRRTXBA");
    msg.max_speed = 0.786932160479;
    msg.speed_units = 27U;
    msg.lat = 0.756117513331;
    msg.lon = 0.141175509401;
    msg.z = 0.765451621904;
    msg.z_units = 76U;
    msg.custom.assign("SXMZEOVMPUNCAOYHSKTARYSFFMAMCOWRESMLISBRUIHNBHVEHKUNGVQHGTDOKDEHEFTQMUPXWQPARVYXZUIAFGUCBAXVERPFLZNYYD");

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
    msg.setTimeStamp(0.209920722203);
    msg.setSource(54920U);
    msg.setSourceEntity(16U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(198U);
    msg.target.assign("KKXJTJSYZKNDNFGTEPDSWLUOTLBHKRFADQFKPXORAMQWULGLPYQSGGNBBEFVPZNDYQHZKTOJXAHVSMZWXTCBVWGKCIKSFLAOMUYDUIZIJHANIHZGLEUTTSBGKWURIHORWQCVARRPBJXJCZN");
    msg.max_speed = 0.728910838125;
    msg.speed_units = 11U;
    msg.lat = 0.430011653482;
    msg.lon = 0.938861686207;
    msg.z = 0.732308415816;
    msg.z_units = 132U;
    msg.custom.assign("DGSCIRFJPWRLAURIQQVTHZPQDZFKPCGPJEDMGXMBTRTKMWGADFJMKLKSKPFEBLYZBURNJWYRDHONEXVGEMIUJNOTTZMTWSHPRSHJQCIQSOIZBUYXLQOWVHICENPLYEUHYSDTJTCYVINZICGDZALR");

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
    msg.setTimeStamp(0.156229446789);
    msg.setSource(44523U);
    msg.setSourceEntity(234U);
    msg.setDestination(60949U);
    msg.setDestinationEntity(244U);
    msg.timeout = 63027U;
    msg.lat = 0.722159919634;
    msg.lon = 0.277211386933;
    msg.speed = 0.470584944997;
    msg.speed_units = 60U;
    msg.custom.assign("NESJFWOXGWBLFYETAGGMRZDNYTGJMAWPMOJZHRHTSKXOIQUIQNDGBTDTTRUBFJ");

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
    msg.setTimeStamp(0.992642807911);
    msg.setSource(1582U);
    msg.setSourceEntity(249U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(93U);
    msg.timeout = 56467U;
    msg.lat = 0.216732558798;
    msg.lon = 0.587593902841;
    msg.speed = 0.778407940565;
    msg.speed_units = 174U;
    msg.custom.assign("LHWKRBAUBOSLMFRIJKAMTNMZNCELBJNDQVEGJKMZUXZWAATEZYKYWOHCMYJDACPEPMBGNOXLEBAKRPJQLEDQDPOLRYFOHFUIEFXUDFXVTHHKSYBMWZORQEUVAPFVGYTUGKJKIRCZLNFCGIBGNSH");

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
    msg.setTimeStamp(0.291833276573);
    msg.setSource(45630U);
    msg.setSourceEntity(128U);
    msg.setDestination(35149U);
    msg.setDestinationEntity(180U);
    msg.timeout = 47042U;
    msg.lat = 0.795119301408;
    msg.lon = 0.108645355029;
    msg.speed = 0.563692971171;
    msg.speed_units = 223U;
    msg.custom.assign("HKWTKUGIGJKYCMKMQCHNZGSIPMQVQMMVFYHCSIDPCKOOKRSRYOHAXNTWITTITRJVTIVEYFNSLPDSBWVCVJEBXMBFWCFXBRVLEVNUXMCFTWRPADXENYDEGNVGZNFMPRLJERASAYLWJSEYHUIHUBADRBLCFGHYDEJD");

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
    msg.setTimeStamp(0.615199235196);
    msg.setSource(15732U);
    msg.setSourceEntity(88U);
    msg.setDestination(43497U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.623912450402;
    msg.lon = 0.694127748907;
    msg.z = 0.967053443194;
    msg.z_units = 83U;
    msg.radius = 0.448986046321;
    msg.duration = 6959U;
    msg.speed = 0.809250797386;
    msg.speed_units = 38U;
    msg.popup_period = 38268U;
    msg.popup_duration = 34586U;
    msg.flags = 58U;
    msg.custom.assign("FYDPBRHIGARWPSRAFJUHKUAT");

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
    msg.setTimeStamp(0.717555806008);
    msg.setSource(37238U);
    msg.setSourceEntity(190U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.00160137212694;
    msg.lon = 0.0640319294077;
    msg.z = 0.0119332229221;
    msg.z_units = 95U;
    msg.radius = 0.868125040684;
    msg.duration = 8976U;
    msg.speed = 0.679174555927;
    msg.speed_units = 76U;
    msg.popup_period = 58080U;
    msg.popup_duration = 52997U;
    msg.flags = 210U;
    msg.custom.assign("MWRQFSNWWGVQQMADCPGPTPWQOYARUXCAZTBBRYOXVBPDDIKASEXORGGOQSYQXVRLTKVZIXNUEXZYRVNPTZUWVDWBHMBOWOUFIALQFYBDNGANSWDXYGLFJAFTFMPCCLEJNNVHNYQEKIPJJTMULZHBRLUHARLUXOFUSHKKWKZHIQCEMJKUPEHX");

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
    msg.setTimeStamp(0.145553260187);
    msg.setSource(55724U);
    msg.setSourceEntity(75U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.949113027873;
    msg.lon = 0.708274445319;
    msg.z = 0.876184917994;
    msg.z_units = 96U;
    msg.radius = 0.339579026986;
    msg.duration = 55889U;
    msg.speed = 0.629255733311;
    msg.speed_units = 92U;
    msg.popup_period = 36247U;
    msg.popup_duration = 51298U;
    msg.flags = 143U;
    msg.custom.assign("JGGTSYPLHVYVRJJYQEBUWIOUWVIKZIADUBRKGAFFIXFVVEDRCYSSIHTHHNOOZAGMEIBGOSHGKRETKOVXUQRZLXXBDXUHBBLVLADWSLFIPELQTQZFFAPVINYOCAMWDPRCCBDDMAGNKNKUXXTNZPFWHVXLSLKPDNBOLMVMCNCDDPGWTTNLCHJSHZGMEJSKUZWQTSEJGCRJROH");

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
    msg.setTimeStamp(0.528517697716);
    msg.setSource(32803U);
    msg.setSourceEntity(161U);
    msg.setDestination(10870U);
    msg.setDestinationEntity(77U);
    msg.op_mode = 27U;
    msg.error_count = 184U;
    msg.error_ents.assign("URWTWBUDCMSEZWULEVMKVIYOHPUVDGCMNWRUIPBRUTSPIYDFFQXIGYTHHMCSBBLXOQVMHUJGIOQLGNWTCVMQHZKAJNAFYEBYWSVRHKPSJYNODIIWXWMDEPLYGZYKCNASFBXHPIKRXPHECGNRBMOFMXALOXZDXTOJOEQVZKGTAFLGTEEARQBUDPIASDJTWFNHTAQKKDZJXUNJE");
    msg.maneuver_type = 47909U;
    msg.maneuver_stime = 0.589733721062;
    msg.maneuver_eta = 34264U;
    msg.control_loops = 3842702013U;
    msg.flags = 58U;
    msg.last_error.assign("ZLWWABPKEPQRXJHXABPFDNEPYZBNPERRYIOUFVBGTQSTHDZYABUXLASFTQHGQXWXYGUHEGWFTLMGVKKXJOWOLNVMRPF");
    msg.last_error_time = 0.88642408404;

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
    msg.setTimeStamp(0.720486761906);
    msg.setSource(36138U);
    msg.setSourceEntity(237U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(131U);
    msg.op_mode = 49U;
    msg.error_count = 184U;
    msg.error_ents.assign("LAUMYBFULSHFHZXBEZZDSFBURVNPRAPAQLHYWNWMTDPKKBIJMTTHUBNKZZWRMXYPBQUVGHZFIBDMOXEJDTKVYEXAJAMYIJFDLIIMUQZXRDCJYVRNVUOPNVISCSJKKIFSAFULXFZATCDSGDMCBUEFNKHSWTQDRYCOKOSCEAQQXPGJOTEWRZMIYBHTOIGRDPUWNALEYRHVMLVZGYPOWBGGLJEWCVOACKSJFPJWQQQSECPTCKXTXEG");
    msg.maneuver_type = 23229U;
    msg.maneuver_stime = 0.646400270322;
    msg.maneuver_eta = 29071U;
    msg.control_loops = 1797556498U;
    msg.flags = 52U;
    msg.last_error.assign("HACWNTLKFXFAOBQYLSZVMHRRZLVWPQCUAXMDTNVMZMAQECCMZHUHVZGZKWBHNSSHMDUNBYUIKJVRGQIXFABGUZJVKVJCRDULTOEIGNYJKFBQLOWFVXPMGPQJYIEKLUNNPTJTPHDG");
    msg.last_error_time = 0.127153569951;

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
    msg.setTimeStamp(0.113768572562);
    msg.setSource(32534U);
    msg.setSourceEntity(124U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(163U);
    msg.op_mode = 14U;
    msg.error_count = 43U;
    msg.error_ents.assign("DWAZWPBSTMEFAIXNVIY");
    msg.maneuver_type = 56646U;
    msg.maneuver_stime = 0.625089313177;
    msg.maneuver_eta = 28766U;
    msg.control_loops = 2726013508U;
    msg.flags = 119U;
    msg.last_error.assign("AXGYFRTEJOIOZSADHIFANBGJPJYRKGOLRCCWQJNXUSLZFLMYNBGSDWWPWQPRMNCMPLRQKDC");
    msg.last_error_time = 0.150405754144;

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
    msg.setTimeStamp(0.915024730576);
    msg.setSource(62144U);
    msg.setSourceEntity(136U);
    msg.setDestination(32871U);
    msg.setDestinationEntity(69U);
    msg.type = 38U;
    msg.request_id = 9567U;
    msg.command = 160U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 5983U;
    tmp_msg_0.flags = 252U;
    tmp_msg_0.lat = 0.229352401708;
    tmp_msg_0.lon = 0.943073047804;
    tmp_msg_0.start_z = 0.674346190874;
    tmp_msg_0.start_z_units = 224U;
    tmp_msg_0.end_z = 0.528275315534;
    tmp_msg_0.end_z_units = 120U;
    tmp_msg_0.radius = 0.550835973338;
    tmp_msg_0.speed = 0.8180860326;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.custom.assign("JBJPGNNAXPRZENWTQCQAYHXZIEDEDSOVXLXHTFGVKTIQDLBZILNWWUBWKMUGYRSZAMBWKLCCAFCFYVGRBDUKHDOIKLFWQOBPEEGRHHLKJYCSDROIBSPPFRTWXSZCXFUZYDOEJQWHFITVJQPTMIPCVVANSBJNPMQJGKSAUHFIXTVZBXOKVPVZZGQRAANXTOSGAOJQMMHWZLEXYCYETO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46047U;
    msg.info.assign("MCJHKGOAHJWOBORFFXKKWHXCALSRZXVWRJYBFCUCAPKGGMDSCHMJGMXQUSABVYTKRIMSXDENEIHKWWQZHHIUOPSGSABTLBINJESJVVRDEGJDNPZAPFQSZEBUVJGLQKAPDFDYKRDPTNCTGPYBXZTZIUFDNXDHNIEBQZOSLMEQPOXGFMVVFWIKLJTQBUOTLOGNZH");

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
    msg.setTimeStamp(0.624463776076);
    msg.setSource(5390U);
    msg.setSourceEntity(122U);
    msg.setDestination(39899U);
    msg.setDestinationEntity(8U);
    msg.type = 119U;
    msg.request_id = 55623U;
    msg.command = 223U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 29999U;
    tmp_msg_0.lat = 0.659355132674;
    tmp_msg_0.lon = 0.767372499762;
    tmp_msg_0.z = 0.39953257576;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.0412957043851;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.custom.assign("EYOCRWSYWJVWLXVLGFBBZNLBKFHMYJZPTIDYICEHYYHFTQCSNLDCJKHEEDDMGAVTWYFLYGVTVLOORFAXRXUQPNYVRWQHVUSSEKZGCZXKGXWHFSZMCIUBLISUHNWKCMREKAWIQBLXPUPXQWZAMBUATHOVDSGOJVFGTNQJSFACXOBGBSCPIAUIKGNHDINTRJOKQGLQJJNTKMUNZRE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21982U;
    msg.info.assign("ZWCCGMOKIIVPUBEOXGKLGMXNSCPSMWQQGZWHCJJEXFQLDTHAMDQEXZM");

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
    msg.setTimeStamp(0.646362007407);
    msg.setSource(65101U);
    msg.setSourceEntity(26U);
    msg.setDestination(45471U);
    msg.setDestinationEntity(251U);
    msg.type = 247U;
    msg.request_id = 10148U;
    msg.command = 56U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 36637U;
    tmp_msg_0.lat = 0.143932450621;
    tmp_msg_0.lon = 0.90505017953;
    tmp_msg_0.speed = 0.533340326217;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.custom.assign("QKZDNYGAPUIQGZDLBSZRBOFPXXCPZRWDJHREZVWACILEWMZCTQAKGRUSMAYCKQMEGHBTJNXGPKNWSHSJVLUDGLMFNMYSQFYYXSFYWHUTCSJBQPOKBVXQGECRIPAILCHOIOVONJKMHTKCYOLZJVDFFPWEKORNEYREBLAIMVAFIYMGRPDLWMKAQTSHWTGJUVUBXDTDDPURQNWAXVXF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52236U;
    msg.info.assign("TISORQAVRJOCXKTZFDBRYULSPCJDSHAAQQMMMIEXLNGHMOHGKMTVKHPFIJXO");

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
    msg.setTimeStamp(0.25060753729);
    msg.setSource(38543U);
    msg.setSourceEntity(160U);
    msg.setDestination(41297U);
    msg.setDestinationEntity(231U);
    msg.command = 98U;
    msg.entities.assign("SLUKIUVDRKEPJNRAUSTMDMYBYFMOWBOSEQPVDRJQMJSFUTFYICGSHGWZLULMVA");

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
    msg.setTimeStamp(0.285369433365);
    msg.setSource(52343U);
    msg.setSourceEntity(148U);
    msg.setDestination(15551U);
    msg.setDestinationEntity(169U);
    msg.command = 209U;
    msg.entities.assign("FTVKLGYMUCPWQCJBPYOVIYJJPENTXUQLBWGQHAGADFYZKIBACDOHRAVOEEQCLRDNSLDTVUXZLBAJXFVEFKZREVYFFLIGMDMBPEHKJMXDMIVTPXKUILODWZHVKAQRGIFSTKTMRCXHUINSVBLWZKSMXDNDNYBJGVERHRKDJFPH");

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
    msg.setTimeStamp(0.0817388131145);
    msg.setSource(55199U);
    msg.setSourceEntity(114U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(186U);
    msg.command = 243U;
    msg.entities.assign("VFYZLSNDWXRLKZTSMGIQASPPPUEEYKLZCMRDCDCXJRYXHRQBTABOEGOCMEUMOMQSJHEPIWPVZIEVBZFLGFZWELCJLWEVZKDUBKCOJVAYAJETPDWAGSYUWDNUOQHVRORTXUNXMDYMUVGCHZRPHKENSBCNHFAKVXMQAKOGJNMLXABLYAINTTWWISHWYFHHSUDQQGIKOTMBGBFV");

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
    msg.setTimeStamp(0.321492369154);
    msg.setSource(14129U);
    msg.setSourceEntity(236U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(131U);
    msg.mcount = 89U;
    msg.mnames.assign("FIZPEQKNMQBAWUPTESKHRYYJUQVXLZZFFOXRCCDMPDOWALPJTNYJOFRQPBCBVOTXSBOLIGLHTWXVIFFJAIYJTSLXLUGHWDDRFLUMQCMWDVKYPTFPQHDWVTAEZZSSNZENLPMAQXMXKGEHU");
    msg.ecount = 96U;
    msg.enames.assign("SNKHULZPMRBQKGQCQZQEOBDDVFFJPXREVEVXFJOGONCTTKIRKHFMTPITMZIUQNWMVB");
    msg.ccount = 204U;
    msg.cnames.assign("CZYNGVAXTYVKIBLQMRYOYVTUBFQBFRAZLOJSCDOOEXENJUHLGAKHKXMHRMVNYWUSNDCKQIOEWKWIBTBXZENLVIFFSAZPEXOABJXGITJMJNYJOLDGFVDIHMWDCSSKDPYFXFQKOIASRQGLJGBKHSCQFUIWWBQHXPVWGDUMMNZETDLPJBMUPUZPUPHQXCIHSAZYRTTPVRLHGACTXAUJNSTNWLOWCRADPEZFEZRQSWJ");
    msg.last_error.assign("ULWIICDZOANSEUINODLUGHRGDXBEEYZSLKGEEXHWOYJWVIEXJKJH");
    msg.last_error_time = 0.30938693565;

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
    msg.setTimeStamp(0.584888585873);
    msg.setSource(29874U);
    msg.setSourceEntity(54U);
    msg.setDestination(57838U);
    msg.setDestinationEntity(77U);
    msg.mcount = 17U;
    msg.mnames.assign("EBAGRNOTOELJLKGFYVUENSUCZMDCORCNZCRRVMADSZOJZTZAXVKPURYSQAYGFFUVSZKBXOTKXRYITGSPNJYFWDT");
    msg.ecount = 233U;
    msg.enames.assign("AKZLMKCMMXBCHJQIGEQZSILAMADYSXBNTPDUQMKLSHVQXITTHGMWLOGOTUYQKQMIXWDWQPHYZJVVVLSPERSLAPXNKBWYTOOFNBKNQTIONGWZYTEECCMRDDHOGVUUKRHOJWXINVIFHUGQWDPUANZZKNFRWEOYSPYCYECARZNUZIVFH");
    msg.ccount = 124U;
    msg.cnames.assign("AIXYLIUAKMIJKKYIUDGKDUGXABWZXLOFRADBJVBRXOMSEFGCXDCLRPZNMZGGQQJIUUJOH");
    msg.last_error.assign("JUMIFTUOHKBBAOGJLPXFJBPLZAQTWFNSUWCRBXZDDDDWQE");
    msg.last_error_time = 0.36459347559;

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
    msg.setTimeStamp(0.851262669421);
    msg.setSource(28363U);
    msg.setSourceEntity(231U);
    msg.setDestination(32675U);
    msg.setDestinationEntity(58U);
    msg.mcount = 13U;
    msg.mnames.assign("NZCOTEGTRQMYVUOFPEMGYMZHGKHYWNYAESRZRAXQRBEUKQCQUNUXAETOYCPZXUOOMLRVTIDMLUSMRPNQQ");
    msg.ecount = 75U;
    msg.enames.assign("WNGZCUZJDQKWQUYZRAGNUJCHGEQDYDJWNJPMMVRDOCZFIPXRKDYUNXFYFTLHKVHKHTAHZULKEFZLBVGXOBBIYSBNLRZIKNOLMXTVPVSEEUPCLBLDMABHIEBQGPHJPLFFFASHFWJRIHJZMVQQAWMQAYFUCTSCCVONWYEIAXDDRCSSRSMCXFGYIXVLXRUBXETWWQCINTMPODIZWS");
    msg.ccount = 112U;
    msg.cnames.assign("IPFHBEVKWQMBJZXEOCTDYZXCVNWEWVYGIRGOSCQLAKTFBTXZUJPHLPHSIPXCFXGNBXKTPMNZKEMLTJUIASKPQBWXRMTPKJILLRSWHZVVJKFNNVCAZQUSOWGQNRDD");
    msg.last_error.assign("SXETGAWBHJWZWUNPIKVJOMGOE");
    msg.last_error_time = 0.185496495397;

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
    msg.setTimeStamp(0.193237125234);
    msg.setSource(53501U);
    msg.setSourceEntity(108U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(193U);
    msg.mask = 144U;
    msg.max_depth = 0.858709324595;
    msg.min_altitude = 0.987523387559;
    msg.max_altitude = 0.0572661946431;
    msg.min_speed = 0.984654814143;
    msg.max_speed = 0.623106156549;
    msg.max_vrate = 0.296455206237;
    msg.lat = 0.425339993866;
    msg.lon = 0.0475911578102;
    msg.orientation = 0.593221514288;
    msg.width = 0.0837839114905;
    msg.length = 0.674291070087;

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
    msg.setTimeStamp(0.618189330861);
    msg.setSource(65308U);
    msg.setSourceEntity(136U);
    msg.setDestination(58241U);
    msg.setDestinationEntity(134U);
    msg.mask = 87U;
    msg.max_depth = 0.0113992940581;
    msg.min_altitude = 0.971066850807;
    msg.max_altitude = 0.704279633045;
    msg.min_speed = 0.346878934338;
    msg.max_speed = 0.442243001387;
    msg.max_vrate = 0.452766456191;
    msg.lat = 0.839503551268;
    msg.lon = 0.656323587163;
    msg.orientation = 0.655073463207;
    msg.width = 0.221399616654;
    msg.length = 0.910251218721;

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
    msg.setTimeStamp(0.659424981787);
    msg.setSource(42912U);
    msg.setSourceEntity(65U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(249U);
    msg.mask = 243U;
    msg.max_depth = 0.834685565363;
    msg.min_altitude = 0.80038059405;
    msg.max_altitude = 0.746773271838;
    msg.min_speed = 0.747108486169;
    msg.max_speed = 0.65684714229;
    msg.max_vrate = 0.269306000716;
    msg.lat = 0.19951033425;
    msg.lon = 0.88470933381;
    msg.orientation = 0.204308670072;
    msg.width = 0.222282833587;
    msg.length = 0.504890067694;

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
    msg.setTimeStamp(0.573944586425);
    msg.setSource(26348U);
    msg.setSourceEntity(143U);
    msg.setDestination(24757U);
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
    msg.setTimeStamp(0.860094934315);
    msg.setSource(21851U);
    msg.setSourceEntity(103U);
    msg.setDestination(56366U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.917915972697);
    msg.setSource(40842U);
    msg.setSourceEntity(118U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.489835279602);
    msg.setSource(17951U);
    msg.setSourceEntity(87U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(245U);
    msg.duration = 12282U;

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
    msg.setTimeStamp(0.572415881912);
    msg.setSource(51367U);
    msg.setSourceEntity(130U);
    msg.setDestination(2725U);
    msg.setDestinationEntity(149U);
    msg.duration = 6892U;

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
    msg.setTimeStamp(0.76415162847);
    msg.setSource(43293U);
    msg.setSourceEntity(70U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(90U);
    msg.duration = 42812U;

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
    msg.setTimeStamp(0.5278160854);
    msg.setSource(65256U);
    msg.setSourceEntity(181U);
    msg.setDestination(48200U);
    msg.setDestinationEntity(102U);
    msg.enable = 111U;
    msg.mask = 728751923U;
    msg.scope_ref = 3648407804U;

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
    msg.setTimeStamp(0.663256088799);
    msg.setSource(39728U);
    msg.setSourceEntity(240U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(195U);
    msg.enable = 118U;
    msg.mask = 802511217U;
    msg.scope_ref = 147891475U;

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
    msg.setTimeStamp(0.76993151629);
    msg.setSource(59304U);
    msg.setSourceEntity(138U);
    msg.setDestination(64556U);
    msg.setDestinationEntity(84U);
    msg.enable = 173U;
    msg.mask = 2328749990U;
    msg.scope_ref = 3219551295U;

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
    msg.setTimeStamp(0.691748862142);
    msg.setSource(55008U);
    msg.setSourceEntity(227U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(104U);
    msg.medium = 134U;

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
    msg.setTimeStamp(0.284763270448);
    msg.setSource(24069U);
    msg.setSourceEntity(58U);
    msg.setDestination(5268U);
    msg.setDestinationEntity(235U);
    msg.medium = 200U;

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
    msg.setTimeStamp(0.622427861225);
    msg.setSource(42664U);
    msg.setSourceEntity(54U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(191U);
    msg.medium = 86U;

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
    msg.setTimeStamp(0.614757206331);
    msg.setSource(31822U);
    msg.setSourceEntity(73U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(127U);
    msg.value = 0.523119258021;
    msg.type = 133U;

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
    msg.setTimeStamp(0.597933344953);
    msg.setSource(18637U);
    msg.setSourceEntity(183U);
    msg.setDestination(21088U);
    msg.setDestinationEntity(177U);
    msg.value = 0.343317136743;
    msg.type = 126U;

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
    msg.setTimeStamp(0.668959805107);
    msg.setSource(63177U);
    msg.setSourceEntity(49U);
    msg.setDestination(22883U);
    msg.setDestinationEntity(75U);
    msg.value = 0.758219179089;
    msg.type = 145U;

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
    msg.setTimeStamp(0.17328443339);
    msg.setSource(46821U);
    msg.setSourceEntity(13U);
    msg.setDestination(33733U);
    msg.setDestinationEntity(245U);
    msg.possimerr = 0.0426047715313;
    msg.converg = 0.473099542537;
    msg.turbulence = 0.94761963822;
    msg.possimmon = 123U;
    msg.commmon = 243U;
    msg.convergmon = 8U;

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
    msg.setTimeStamp(0.495103013331);
    msg.setSource(51473U);
    msg.setSourceEntity(122U);
    msg.setDestination(58583U);
    msg.setDestinationEntity(224U);
    msg.possimerr = 0.51158511263;
    msg.converg = 0.457804998998;
    msg.turbulence = 0.195681740691;
    msg.possimmon = 194U;
    msg.commmon = 165U;
    msg.convergmon = 193U;

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
    msg.setTimeStamp(0.409694527605);
    msg.setSource(19902U);
    msg.setSourceEntity(17U);
    msg.setDestination(11623U);
    msg.setDestinationEntity(232U);
    msg.possimerr = 0.934581047908;
    msg.converg = 0.706611226559;
    msg.turbulence = 0.772099144648;
    msg.possimmon = 51U;
    msg.commmon = 164U;
    msg.convergmon = 250U;

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
    msg.setTimeStamp(0.591590384455);
    msg.setSource(33317U);
    msg.setSourceEntity(14U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(87U);
    msg.autonomy = 166U;
    msg.mode.assign("BLFUWHEPBDMABULYWEXPGHBICTFEFOBXSQZVGQRRRKICIZIPJQXNXMHRQOCZXDRZNJSSVAETVZGZYGVWAAWLLPOMBVCKWOTNMVTFPGHTVYYWQJDKRSRTKJKC");

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
    msg.setTimeStamp(0.545425953301);
    msg.setSource(62473U);
    msg.setSourceEntity(93U);
    msg.setDestination(15288U);
    msg.setDestinationEntity(64U);
    msg.autonomy = 214U;
    msg.mode.assign("HSOIQUYGTMKPTGXSLJKUSHEGJHLUGCENPAKZOUYJMFWGAIDRTZBUEQFCMNOJFSLLDZPRQXMUJFHHKLSCLCTSWVYKEXNXZQMEASJWOLVWUVODVSNTNEXTJMJLPFARFXMJYRAWDKYVIWIEVVXPLOKMXZQGUQGOY");

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
    msg.setTimeStamp(0.929861815164);
    msg.setSource(60298U);
    msg.setSourceEntity(13U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(60U);
    msg.autonomy = 154U;
    msg.mode.assign("GRSSVQVPNWCMOLASW");

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
    msg.setTimeStamp(0.844638357154);
    msg.setSource(16931U);
    msg.setSourceEntity(14U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(112U);
    msg.type = 241U;
    msg.op = 107U;
    msg.possimerr = 0.752099707654;
    msg.converg = 0.717227815302;
    msg.turbulence = 0.487818405052;
    msg.possimmon = 30U;
    msg.commmon = 209U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.443892326972);
    msg.setSource(43381U);
    msg.setSourceEntity(224U);
    msg.setDestination(9269U);
    msg.setDestinationEntity(91U);
    msg.type = 46U;
    msg.op = 44U;
    msg.possimerr = 0.731825866848;
    msg.converg = 0.859640364446;
    msg.turbulence = 0.209775370664;
    msg.possimmon = 182U;
    msg.commmon = 202U;
    msg.convergmon = 248U;

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
    msg.setTimeStamp(0.526114963175);
    msg.setSource(31134U);
    msg.setSourceEntity(21U);
    msg.setDestination(36905U);
    msg.setDestinationEntity(120U);
    msg.type = 65U;
    msg.op = 174U;
    msg.possimerr = 0.0121238011465;
    msg.converg = 0.199394059058;
    msg.turbulence = 0.641209380804;
    msg.possimmon = 31U;
    msg.commmon = 217U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.529154866825);
    msg.setSource(55476U);
    msg.setSourceEntity(87U);
    msg.setDestination(1644U);
    msg.setDestinationEntity(130U);
    msg.op = 177U;
    msg.comm_interface = 11U;
    msg.period = 35185U;
    msg.sys_dst.assign("XEPXGAGQNSDFXXGOMEMZUULPPGNVDONRYWUMMUCKCVXLUNLCBYWSQHJQBWGVMB");

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
    msg.setTimeStamp(0.675525163334);
    msg.setSource(6966U);
    msg.setSourceEntity(67U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(124U);
    msg.op = 238U;
    msg.comm_interface = 12U;
    msg.period = 56867U;
    msg.sys_dst.assign("MCPYSDCYVXLOTMVDYCMRRFADKPLRNIUTTWOBNGJJRAFEBDTBXYLVBXXXKVYZGLWEIHSZNFRICALHCEHXQOBHOPBMAYKUDYYHPAAPRUWGSJNJQLMWRHHAGUSSVWJQKTDNWQNXUJCVDHXOPZIDQJWIWPPGFTHSVDQFCSWVAOBZZDYHCZGRESLKSMXYJJXOUGNQWIJEKTZPEKKTBUZZNAEOUZTFIOEEMNKLMILPICVQQLFICS");

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
    msg.setTimeStamp(0.831554873517);
    msg.setSource(47480U);
    msg.setSourceEntity(233U);
    msg.setDestination(35205U);
    msg.setDestinationEntity(228U);
    msg.op = 205U;
    msg.comm_interface = 71U;
    msg.period = 23854U;
    msg.sys_dst.assign("JKPZJEORPOZITBWPIRIPSYC");

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
    msg.setTimeStamp(0.0433251798851);
    msg.setSource(43420U);
    msg.setSourceEntity(43U);
    msg.setDestination(50710U);
    msg.setDestinationEntity(124U);
    msg.stime = 1172130126U;
    msg.latitude = 0.305409887005;
    msg.longitude = 0.247085215305;
    msg.altitude = 57711U;
    msg.depth = 16274U;
    msg.heading = 12092U;
    msg.speed = 28686;
    msg.fuel = 12;
    msg.exec_state = -71;
    msg.plan_checksum = 3802U;

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
    msg.setTimeStamp(0.544277123378);
    msg.setSource(54531U);
    msg.setSourceEntity(17U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(234U);
    msg.stime = 1134870610U;
    msg.latitude = 0.279520008727;
    msg.longitude = 0.990766996524;
    msg.altitude = 45995U;
    msg.depth = 64769U;
    msg.heading = 54600U;
    msg.speed = 2605;
    msg.fuel = 2;
    msg.exec_state = -76;
    msg.plan_checksum = 11169U;

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
    msg.setTimeStamp(0.629562763356);
    msg.setSource(49279U);
    msg.setSourceEntity(251U);
    msg.setDestination(47076U);
    msg.setDestinationEntity(175U);
    msg.stime = 1196391787U;
    msg.latitude = 0.73911501032;
    msg.longitude = 0.84082806112;
    msg.altitude = 34660U;
    msg.depth = 46128U;
    msg.heading = 31301U;
    msg.speed = -28081;
    msg.fuel = 62;
    msg.exec_state = -49;
    msg.plan_checksum = 60678U;

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
    msg.setTimeStamp(0.471704266853);
    msg.setSource(38135U);
    msg.setSourceEntity(142U);
    msg.setDestination(6416U);
    msg.setDestinationEntity(246U);
    msg.req_id = 3624U;
    msg.comm_mean = 156U;
    msg.destination.assign("JHONOSZZKTOMTCMZBSD");
    msg.deadline = 0.462012798999;
    msg.data_mode = 154U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.60429374632;
    tmp_msg_0.z_units = 42U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FVRHJWQQPEYIUMZNMJRGVKPPZLSZMOFBEUOWTCDSPKOMXCBNBQMGVIRSHXESRYQBUMAOBCCJTROQDUXMJAILYVGSAQDUJYLGGCZJMYDRWJXSUOHJIOUVUOABYYPDAVAEIWWWXZNYLKDECRRZDONNHFQUCGEEPPWVBFDTTXTZSPFKLXBPVRMCFFPNTXLNJIIVRKYGNAVIKZACG");
    const char tmp_msg_1[] = {43, 49, 30, -17, 21, -28, 62, 24, 79, -113, -81, 7, -96, 84, -121, 53, 78, -118, -123, 56, 126, 93, 24, -17, 103, -36, 0, 32, -80, -63, 100, 61, -100, 92, -11, -14, 108, -90, -127, 24, 30, -96, 69, 15, -86, 36, 67, 44, -13, 73, -49, 104, -46, 46, -60, 119, 73, -86, 121, -90, 7, 126, 31, 53, -17, 117, 39, -6, 124, 97, -87, 1, -10, -2, -44, 40, 94, 49, 114, -82, -28, 71, -64, -77, 48, -45, 103, 61, 38, 35, -4, 82, 105, -104, -102, -126, 84, 32, -55, -101, 85, 104, 121, 14, 76, 25, 26, 82, -45, -73, 124, 69, 27, 53, 23, 105, 28, -44, 37, -92, -85, -48, 117, 108, -32, 22, -15, -41, -13};
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
    msg.setTimeStamp(0.993809316545);
    msg.setSource(47380U);
    msg.setSourceEntity(213U);
    msg.setDestination(16354U);
    msg.setDestinationEntity(154U);
    msg.req_id = 54983U;
    msg.comm_mean = 130U;
    msg.destination.assign("LMKCJXXWUXKNXBLAIBAJYJUUATHDHEVHOLTUVMDOEMXRRMBQFSGGEUJRYOYNVEANQLLFTXDVWKWPAAPJOQIIBXBXHJAMRBEWGPOYEDTVEBKAXFNNCFPKCWISZBQINCGSTMOIHECBKSGOCCFFWTRK");
    msg.deadline = 0.229892846583;
    msg.data_mode = 32U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.422043812417;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UXTCVUHXIEUQYZKQVZNSLYGZYCRWSYFBQOANSPPNTVYDHZOIUMEDMUVMIBXEYOCHDPHTSFMWZIEGEFFHGYLAIHKNTCZYENHVCJUQBPORBLOEFGUJJKSLEFIVVMGXWCTVSRRONWYOEAGOSLXXIGRYPDNPKJZGGOQETJSXDUKQXXIPQPAK");
    const char tmp_msg_1[] = {114, 88, -31, 3, 57, -53, -108, 92, -35, 51, -34, 1, 36, -106, -59, -123, -52, 15, -43, 102, -103, -41, -6, -3, 64, -12, 6, 13, 104, -90, 45, -60, 56, 14, -35, -97, 110, 115, -125, -75, -65, 65, -123, 83, -45, 47, 116, -60, 108, -33, -72, 55, -95, 126, 94, -32, 75, -4, -42, -48, 102, -55, -43, 40, 20, -73, -79, -81, -1, -63, -29, 14, -75, -27, -42, -25, 34, 91, -53, -102, 36, -101, 116, -8, -55, -110, -59, 95, 112, 104, -14, -49, 11, -14, -108, 123, 28, 118, -125, 126, -76, 84, 95, -108, -83, 8, 66, 118, -45, 11, 116, -123, 85, -65, -12, -127, -103, -13, -46, 58, -34, 39, 61, -68, -55, 104, 58, 108, -117, -124, 5, 24, -79, 122, 24, 54, 112, -15, 28, -34, 95, -63, 56, 114, -116, -84, 48, 102, -50, 17, -74, 36, 71, 107, -21, 24, 7, -51, -70, -104, 83, -105, 82, -50, -44, 24, -7, 53, -29, 61, -14, -6, 52, -22, 63, -1, -95, 21, 82, -80, 91, -53, -10, -107, -1, -38, -22, -32, 9, -38, -23, -53, -70, 63, 46, -36, 35, 3, 43, 80};
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
    msg.setTimeStamp(0.367220810943);
    msg.setSource(42402U);
    msg.setSourceEntity(66U);
    msg.setDestination(50117U);
    msg.setDestinationEntity(200U);
    msg.req_id = 13327U;
    msg.comm_mean = 128U;
    msg.destination.assign("JVUONUEHQLHUJQDNPKXBQHEAEVJYBMPWYDAXNJVAJJYBRBPGWQWFLAEIZDYZLWWSOZZBLVXPJPBKROFHQXTCTEDFDHUUXIIMWYMYMSLGBXYACZONCGDAPKS");
    msg.deadline = 0.938798933151;
    msg.data_mode = 53U;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("JSYVTBNEOUBAUWETCGNTMXYFZWUFZMIDVPEAITDFJFCYWMLLCVXDDGFDAAJPVLNUQIHZMKPQGSUQRADZXTECWYQNYOXBTIAZW");
    tmp_msg_0.value = 86U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GJTUWHLAUNCXBWNOYBLLSRJTCGVEKTVEQTGCDKDDBYVTSIZPRFCXTSMJUCOWLAJEGTZCYWXHXIXLUPHXPFPVQYERAVYQSQEUQBDOPMCXWYACZIBFTJSYEIHJNWHHNKMOHSPEFWOKHEUNOAOKQJFUCIFNLYKLJWYTLBFGZVTQMNBILINUNVI");
    const char tmp_msg_1[] = {98, -77, 67, -97, -28, 7, 112, -66, 89, 110, 59, -127, 61, -59, -68, -16, 42, 123, -70, -21, 31, -13, -83, -56, -42, -13, 7, -113, -108, -57, 9, 110, 90, -118, 2, -89, 36, 26, -108, -81, 54, 36, 2, -44, -101, -109, 28, 72, -25, -30, -60, 23, -72, -30, -66, 105, -111, -107, -5, -22, -95, 35, 122, -28, 114, -119, 23, 22, 66, 40, -45, -105, 20, -91, 107, 9, -60, 1, -113, 81, 13, -32, -11, 91, -34, 10, 25, 1, -108, -32, -128, 102, 113, -2, -85, -121, 7, -105, 95, -23, 85, 50, 52, -48, 106, -59, -78, -29, 88, -123, -44, 32, 81, -41, -75, -92, 43, 108, 34, 21, 71, 89, 73, 40, -30, -125, -116, 75, 90, -44, -24, 124, 36, 107, -64, 61, 72, 27, -46, 13, 62, -113, -85, 89, -93, 65, 101, -52, 46, 74, -27, 28, -11, 30, -92, -35, -101, -55, 61, -23, -113, 61, -15, 107, -54, -24, -48, 17, -87, 41, -110, 123, 7, 106, -6, 116, -115, -26, 58, 26, 10, -108, -126, -81, -102, 30, 4, -82, 104, 120, 111, 92, 2, -27, 1, -24, 121, 15, 41, -72, 13, 66, 125, -97, 41, -18, -80, -79, 26, 53, 60, 32, 73, -121, 13, -3, -100, -4, -65, -58};
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
    msg.setTimeStamp(0.209461288833);
    msg.setSource(17577U);
    msg.setSourceEntity(168U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(158U);
    msg.req_id = 2977U;
    msg.status = 235U;
    msg.info.assign("ZVSKWXULYTNSFIVRHSGBOVFTRFDRQVTWWIBXNLFKUNKPVMSAYJIMBXLFONSKCPHOQYDMXLITGJDWZKRTZHMKFWPUENUDCJLXBGEFUZEBGCGRQCTGJTUAJAHNVCUUYDMLSVBAIGXNIWJYDHHIXALODAFQHPJOCMKP");

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
    msg.setTimeStamp(0.902738121045);
    msg.setSource(61172U);
    msg.setSourceEntity(42U);
    msg.setDestination(39291U);
    msg.setDestinationEntity(178U);
    msg.req_id = 20957U;
    msg.status = 17U;
    msg.info.assign("FMKEZMTDOQKNZOEYYCAOOQMPRGPZJZADSSIRZTGWFIDKKDRODJRVYQXOIYPPWWXAAOGPTPBUBEKFTRLNACLTGRPQBXFZTVCPJJQOEWQ");

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
    msg.setTimeStamp(0.770382740779);
    msg.setSource(2190U);
    msg.setSourceEntity(205U);
    msg.setDestination(36890U);
    msg.setDestinationEntity(21U);
    msg.req_id = 8765U;
    msg.status = 173U;
    msg.info.assign("HWSABVTKCEIYMIYLSHIXMCTUOMGPEOQCLIPWZEKMJJMHDFFYTNPUVZANYVZRZKNTXYVWWYQDGSTSBTZFFGNMOMALQFRLEXLEADJFKCKCFTPYUQNVGQCCSJTNGRZBSZRPASZKGEPSPKJUODEPGBJWHEWXOJPRHBVJSDHRRBBWHOBLQPNUGYHDAK");

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
    msg.setTimeStamp(0.136022757603);
    msg.setSource(50265U);
    msg.setSourceEntity(97U);
    msg.setDestination(29440U);
    msg.setDestinationEntity(31U);
    msg.req_id = 26829U;
    msg.destination.assign("FEMZWRUADEBSWQGEGOAKUZEHYZDURJGZHWNPXAXQKMYZIWVFIAYNWKMBGOSTKCCECCIJCUMKJOHNYBVWIGOTTLCFSSZVMVTNXFIMNKXRXXUGFJTFLVGEUZGJETQRBAWFOLUZKDPAVHNBMQDJHQLYPXXUAPLVSVQRHHAFSYDCWJTIPEDSIMBQNLRKAKPDPISTSFXPPQCHS");
    msg.timeout = 0.839418989546;
    msg.sms_text.assign("SHWTPCZPQPXCVZNAAAMPXKNBRBAJRNSJAFFTDYOIHCNL");

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
    msg.setTimeStamp(0.934312057996);
    msg.setSource(25809U);
    msg.setSourceEntity(19U);
    msg.setDestination(49661U);
    msg.setDestinationEntity(72U);
    msg.req_id = 61756U;
    msg.destination.assign("ZVCDANDVHRFPTNI");
    msg.timeout = 0.995305902185;
    msg.sms_text.assign("XXGBWEBYYQLJNGQIEGRVUZCEWPRIUYMTSZLHDCOTNDKPBTUYFEBUWJWFKDXGJIUGRBAHQTPQYLAVIWNBUMVJEVWM");

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
    msg.setTimeStamp(0.747089887455);
    msg.setSource(51874U);
    msg.setSourceEntity(205U);
    msg.setDestination(48201U);
    msg.setDestinationEntity(41U);
    msg.req_id = 13032U;
    msg.destination.assign("HADZXJKOKYPNHFWROIOSWYCXUIQWICMZCNLNYXFPHUXXDKGKTIFGQXEMHSKLJAKPDQEWMGNJNZMRBEYYPMSVLFUKZCBFHLNWAUTIUJEXBQMLZMTQZBKOMTLBHPHZAAIWARJJTWUBNCPLREUTUVOHFDJXOZHBTVAOMFBGVAGXOCRLWDFDNXUKQESZPDLINWNFD");
    msg.timeout = 0.173484667156;
    msg.sms_text.assign("MEECGPHENGZOFRAOGAHCGAJVMWTCDKBFIWQOCOHHBOQXEWNKGHULTZLVDTNVSMDPYZNJZFEQLXXDIUBWSWNYNRPRVPXBLZWOGCGJFFRYB");

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
    msg.setTimeStamp(0.0458701338744);
    msg.setSource(58220U);
    msg.setSourceEntity(76U);
    msg.setDestination(1674U);
    msg.setDestinationEntity(158U);
    msg.req_id = 36405U;
    msg.status = 2U;
    msg.info.assign("KEZSVKBHNPOIEMYBBPDZTYOJEKARKEUCWHABCFXFZIQRZGQQUANSKDCIPYVRCUSLHJYQTHHIGMAFCTWGABUFJVXLGLBDYUXWGBTJFGOEHNPMFDEGYOXECPPALXWJCSWSXWXBXZTORFFYCSITNRNSWJROLZOEUKFJHNQOLMDXSMDADNDWKUQZLVOIQPHDLBNZGMZ");

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
    msg.setTimeStamp(0.626075497552);
    msg.setSource(24776U);
    msg.setSourceEntity(189U);
    msg.setDestination(52030U);
    msg.setDestinationEntity(86U);
    msg.req_id = 19913U;
    msg.status = 234U;
    msg.info.assign("CNAAUIMZRSTCGZKLLKCXVNFXKEQNIUQSLYTADHESGGYSPCVJAZUQLHZCJHUJYITHRMOWTLMWETTZBJGUVKRNQZHBGQUXEVAQDRZNJNPDHRBIWBROPTNKBNODUQNCGPAPYPSKTECMYKDOCVQVHAFFZUDVOVXMYBJFPXXLEASYMWS");

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
    msg.setTimeStamp(0.299898343424);
    msg.setSource(2313U);
    msg.setSourceEntity(58U);
    msg.setDestination(40885U);
    msg.setDestinationEntity(205U);
    msg.req_id = 44911U;
    msg.status = 48U;
    msg.info.assign("HGYMPVWIPRGIZYJFHXQIWUSRSQFDNHURQBZWKWWUNDZKYBOTLVPSEUSTEQFOVNARHPMJZVLGSKAPPMYIUURZEOLNXLSFXXGXTGBROERZCQHMDBTJWHQCTARTOHKMHKHIEYMAEZFCXCSFPJTFGQKNLNNBLHUDFYYJEBTAVMUIGGFEELMAGSDMBTIXQAXTZUJLNRGWNPCCONKVIAVOVZLBJXMVDCBDDKEJOLZCPAYCOQV");

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
    msg.setTimeStamp(0.404442880546);
    msg.setSource(57194U);
    msg.setSourceEntity(172U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.773641075661);
    msg.setSource(38796U);
    msg.setSourceEntity(1U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.306936013178);
    msg.setSource(9770U);
    msg.setSourceEntity(23U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.349338830452);
    msg.setSource(49532U);
    msg.setSourceEntity(135U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("NNLOSWCUGRPTDPJJZJCMKHTVHRRTQPQDEVYDAKHXYLQUHZFBAZLDKBMLUCVJWFWGBFLXLVENVQUDTUBOTIUGFSWEKENPWDCSSTAEJBMERKPPBVXAJXPDISMSJEHZWHWMVCGWPKZXFGVLRHDJOFIHS");
    msg.description.assign("MTZWJTMHPJSVDGCRECWMUHIAOTGGOAEUOKWWOYMUHKZBQVQNLICIGIZCPUDPNSXBINWKLTBVDZGXJOASIV");
    msg.vnamespace.assign("AYHBISFZQWAKLESNCLSRNQHNZIGPCTMPJLVKNOUYTXGVEZPURDRCADVNWMMTAZLGEATVTHYJYCIDFTZGSPGCBXPQWGFUACIXNUTBLUWUKLSMT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LVTPSEYHNCSYSUNNLNW");
    tmp_msg_0.value.assign("SIFJEZPOTJTOLGITWVANWMXLYNVMVRMZONCHLJQTHS");
    tmp_msg_0.type = 57U;
    tmp_msg_0.access = 179U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WBJNEWITWSSNYLZQRPDFPBFSOOQGXGOORAXHHHEDZLEIBYVICVKGMBWYUPTUBHKGNYFGAMPMUTCIYBYDHCQIZRKRCMLTUTMYLEUQL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZANGZWLYBFAJTBBXISHITMRNQKJULMCFZLQUEDCPREEKBUXNVCCQUKWUXJILTSCMTAQQUVTHBAPSIOFFBDRHPCERXNZIRNHAPDMDKFOSEWICJYWTKDULSZMKZUNREVGJNFOGTUAHLNEHOVGIPUMXVDGQYJTSRDOYJNXLRYHRTBOBLQPKDPVWYXVVRGQMWIZFYSFAHQYKSWZPGOBJJLPTDOEMM");
    tmp_msg_1.dest_man.assign("GHTGMXPAUGUCKCRSKLIQTDNYWQSWWASNQKLPPLDCEGVZMVTTIUDOCDKZACMFOBPZXPNCWDIYKAYOZXWVZOXLJIMNHOGHTEBRRVHJEWOFXUUYMRVDJAHCMLIQSUHDINBIMJHLPQOFAKQBBFANRP");
    tmp_msg_1.conditions.assign("HKBAWQYGRCGYNQHHJLYBLSTLICRTQBYFOOWDYEYUVWPKMJHSAGFTLTCXNCPDXNDEMFSVCAKFFZIUNRPMTQCVEJJHYVGPBNLTIFVHBAHHCNKVXJAIGKWSSBSERQCADZJMLBPJTOERLN");
    IMC::PlanStatistics tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("ASZWCVDYQLUYXUKOYBYFMSCCDTHANJNOAZGYAQJTJXSMYKFHZDERJAKYQTEXFVSGIFFSCSBGGRULKNBJXVIMQAMQBVXN");
    tmp_tmp_msg_1_0.type = 172U;
    tmp_tmp_msg_1_0.properties = 153U;
    tmp_tmp_msg_1_0.durations.assign("TLZGCXDACVYTDNMVNEOLQTFFACZSXELCVKACVMLNHNTGKVOWWUXNHQLPOJJKRQZCNGMUZVMEGBCIPFGSZROZESYPXWRYBHLKNDQADQKPPUBIZXAMXDQMNJOPSDWKWCASLKWUQWIAWDJPIHRWEMYSRIEUBGSTVGCTBJUNEIDYMPHXIYFAJJHIYXBQEBTFLKFKGFR");
    tmp_tmp_msg_1_0.distances.assign("WPRVSLGGYDCBIBIWFAAHOZRFMVGLOZRNYQBOHGZSUCYNCVRGLZNIWQCFYYMPFKLFKPWATTCBUDYLDSIUQHTMITZFPQSKFTVHPOCEGDOZAEDAHCQXLLRVXQUVVHWXIXXITNRQBVSGPZDWDVQEBMYGFUJJWDJAYJYFRSOXCBHEHSMTMBJAWIZUYINZCQNWFLTGKGIAHDEMUXTNTMXKKPOOJEKPAVZJDOMKMNPRPKSER");
    tmp_tmp_msg_1_0.actions.assign("LFDYZAMJJUIKMBEVPVBMVMIS");
    tmp_tmp_msg_1_0.fuel.assign("QDWWXIRNHGITFSGIFXMUMHPJUVZLSGEAILPNUJHONDZTKFLISRQSEVVYRTBCZVLLCZAQBDJQGTPQQPFTLVBYTAGQLYCETWRXYAYENBVMUFDUCOHJUOAUHBVSMYFTKIUAJAMIBILRCSYHFGXAEDSQZ");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Teleoperation tmp_msg_2;
    tmp_msg_2.custom.assign("NHPJLLVNYJGJZEMEXOMDYYMMFYCSHYTQV");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Sample tmp_msg_3;
    tmp_msg_3.timeout = 8593U;
    tmp_msg_3.lat = 0.73105266212;
    tmp_msg_3.lon = 0.394266148968;
    tmp_msg_3.z = 0.945081351192;
    tmp_msg_3.z_units = 34U;
    tmp_msg_3.speed = 0.887885795819;
    tmp_msg_3.speed_units = 151U;
    tmp_msg_3.syringe0 = 49U;
    tmp_msg_3.syringe1 = 5U;
    tmp_msg_3.syringe2 = 198U;
    tmp_msg_3.custom.assign("OIUZTBBLMYOIIYJSVFSUKCPHGEKVU");
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
    msg.setTimeStamp(0.632896494542);
    msg.setSource(34451U);
    msg.setSourceEntity(200U);
    msg.setDestination(60975U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("GYNBNGIMJIMRBXETYHPBXORVNJYJQZWKSMCRSMWLOLADFUVEOXTAAEKZNFHFQYEXOFGTFPVMJJMABOTEUUVHINNPXUUAPGCWHAWSJAPXOJPKECKCKZDLSVDBSJRNPMAZZFIIWXMHWDHFGVUNUCSKZQOYZCPIUQESEEDLSYRLNRHQDRCKCGQZHRHLTUSVXQTDQXLDJQWTYIBZGF");
    msg.description.assign("UQSCMGSNRIVXFQRUTDDQGPBPXKPJHDZCFWJDEKKCPSMJWXOVQIGVQSLHNCHN");
    msg.vnamespace.assign("LVHUHBULTMXNJIGPKMMFKNVONAISAPJAEKJBSYTNAKSCWWRNMGKUTKYXSJEJWFSNWPHPTXOYDBAQUXCXHLMSET");
    msg.start_man_id.assign("YDKZDWAHHKYHBQRTRVYLQVGMHMJTUVYOJKSSRUGFHPBCMVUSXAVKOXZGFLAP");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("CVNLRINKDTHTYCIEPCDVHQREPQFUMGQXEMNNUXORMB");
    tmp_msg_0.dest_man.assign("BXPJTYAFILIKQLUIHYIHXQPWBOOGDJNXBWBSRUTVAEUFVCWSEVXSKKQRGNYIPVQWIVZFPMKMBWWLZIEHLUYCCBCYZDJZCKSLNZZIHKVNTAVPDZEEEGHRHATQOAEXWNHSDAHUYTSUCXWWRRDWCAGPRMRYMTFUSTOQPQBMVQTHJCQCRKUKDOLRNMPJKIMQLZLXBAJOYLJTOGG");
    tmp_msg_0.conditions.assign("AXOLXSWUMOHGSOOQTWDEATESIYEHHGOOFPBTIRCNARQWPLZYIYFVCVWCKZAQMXPFLZAW");
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 252U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::FormationState tmp_msg_1;
    tmp_msg_1.type = 153U;
    tmp_msg_1.op = 181U;
    tmp_msg_1.possimerr = 0.23089153638;
    tmp_msg_1.converg = 0.642187939137;
    tmp_msg_1.turbulence = 0.545716702256;
    tmp_msg_1.possimmon = 230U;
    tmp_msg_1.commmon = 102U;
    tmp_msg_1.convergmon = 130U;
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
    msg.setTimeStamp(0.733394046116);
    msg.setSource(56485U);
    msg.setSourceEntity(228U);
    msg.setDestination(36545U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("VLALOUTUPXSBFMPNDTVAHJVFODFAZPAMTOAEGMQUGLJZIKKTOSAQVEWNKHMIMFFFNBTQYWIIOBRSDSHXPRKGMVENKCWXYFWSIONHJVMINWLQEHAWXPDHYJCQBYJNLPRQCHWIYRKSBLMTBOZJJDGQMUDTOJZDPUXEDIUYACFYKOSKYBTAZZXBTTYDRZUERLQIMVRQGZSLDCRCVXUQBRHHZNXWPNWFLNGKOXAGEUX");
    msg.description.assign("IJKQCWLRAWDYLUMFRSFYEPDGTZVLPQLEGIXEKYMYSBIXUCHXSQACZHMNVZVRMOSHDWRAIG");
    msg.vnamespace.assign("FUZDTAWXLCQYGEQIJIYUPGPGZOKHNIOKPEMSZXIVTQQQCVSJXXNZMAYCXDCZFOTEOBIODPJKSRXCSEOAUPFWRRMWVBHCSGFYHDLDPWTOFNIZMFUHKERHUOYSJSEKHAS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BEAZDHFAFKLFTEMTISXEMRPETNQBNIHOLGFICTUNEOODOYWGJNSTCGNNAKMMVBRJOEHCYCJQQINMCBVZDSRPDYNXQWYRQXPJBCWZCLCJDDCDKVYLQPHMTXDUGMXWZLSSHQZAXZRUTROKAGWFJBZUKRPWHGVGFHGMLDWAKZALKSWVGI");
    tmp_msg_0.value.assign("NMRZFPJUVMWDLRHQAEHYDJVXBSTIXFIDIJYKYCZFYQQULKNRDQBLNEWMEFAGWPTPXTAASKCMFZMXLAPNRZPGSHYIVGNFXPLNADXOICEZGPEJSRUJMSDCZJUJSXMCSRDHHZWOKCUCTTTLGXTCWNHDAYIOQJAKYBFYPNGGWUBDYCSNOEVKQZQETHEOFHGFOOMVMZVFRPVGSQCIBHLUWRIULZW");
    tmp_msg_0.type = 174U;
    tmp_msg_0.access = 8U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JOXHWTLDWIBFXVOOVBNQAYILABNUGFDNEEZYOHBMWQWRCVNMSTUTIIEEMQOPYJBCTZTQMHZLOFZAYNMOULDKSZKCBXQTMUQSUSKYGDVTGWGMKPNPXWVLDAKVERKMZKQRINJEAOEPVAMUNYFCCNCGZBUTIVLLQHHFPPSGGFWARRNWLFQTR");
    IMC::TransmissionStatus tmp_msg_1;
    tmp_msg_1.req_id = 50715U;
    tmp_msg_1.status = 9U;
    tmp_msg_1.info.assign("KLEJVMQAOGDELDJVZXZWQXKUJWJJCEXUTHIBOTILYPCFAEQFGGVPUWHZLOFPATSZKBTIKIQSHABEBIKWNQXOSBUSSCCKGNODRVTUFIZYBFECBPIINYHRQVLLHMYADVOQJNLSWTLJXJYWAMB");
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
    msg.setTimeStamp(0.599422533483);
    msg.setSource(12664U);
    msg.setSourceEntity(170U);
    msg.setDestination(21611U);
    msg.setDestinationEntity(130U);
    msg.maneuver_id.assign("BNEEJHIXHONQJCOLSGEPCGHIBFQVQCGHVSLRXYZGHGYAQUCFOLOVIYDVRTSZXHHUEWYMNPABOPQVROXYRRLGQIADUTFLWSDXNMXWFCPNJVORTAEYLI");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 30890U;
    tmp_msg_0.lat = 0.838946851901;
    tmp_msg_0.lon = 0.400237430382;
    tmp_msg_0.z = 0.821158669931;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.754376138302;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.custom.assign("ISCPAAUYDRYCUOVFBHHWDKRSEJHHEFFRVBCASSYGMKVYEMUOLXIQB");
    msg.data.set(tmp_msg_0);
    IMC::FormationPlanExecution tmp_msg_1;
    tmp_msg_1.group_name.assign("AYZKNDATFXTNMKSACGRVOWSZYFWCCVXRVXLHFQBGLMVERAPOLOUUTELBUEAERLBQDPHKSJBQMDFNOOUIDJCWAJAVWERMNXRLWSPRNXZZQKDIIKETQYYMYRIFHJIVLFBFGHQFDTZLAUJOUOCRHPIYVZDUDOBWTNTWOSMHQCCFEYGPJAIPYUGGSVSGTNLJKHWGCHCDYISUNVMKBEPNIQUHGXPSXWZQPEZFLX");
    tmp_msg_1.formation_name.assign("MQQWOOJRQNDQZBLVHLHZLSWFSYIZVIJAFPBXXVURQYKBIBODVTLEPJMMHCJGIKFSTHEDRA");
    tmp_msg_1.plan_id.assign("AGGPHTEIEAPSQRZSVROORUYFYOWRPFKQUWQXQHYLGFLPXOKIFRHZURKCKLHFYAUNXTAZBYAMTTJYJIWQNALN");
    tmp_msg_1.description.assign("BSPLEZSQONZXHDEQLZRZUHEODJYZXOGZDGJKSVYJVSZFTGACVOOTYKMFTWAVKUPMSYIWLRQIUANBWLWJMHPTCKGPAFSBYKIMKRQCIMOXZAVGIEQUWOUAJGJPMBKXQDRYJHCUZDQVBEFRFNHQVMJYUHSBOUITBNTVCSPKELTNQXRGNKICFMKDGLDFAXOQOMXRWYTMYSZFJWGUXCLPAIHDUBLEIXBAD");
    tmp_msg_1.leader_speed = 0.165909404159;
    tmp_msg_1.leader_bank_lim = 0.95860963842;
    tmp_msg_1.pos_sim_err_lim = 0.821187905533;
    tmp_msg_1.pos_sim_err_wrn = 0.319190346024;
    tmp_msg_1.pos_sim_err_timeout = 27339U;
    tmp_msg_1.converg_max = 0.552710035541;
    tmp_msg_1.converg_timeout = 3421U;
    tmp_msg_1.comms_timeout = 58664U;
    tmp_msg_1.turb_lim = 0.821541995705;
    tmp_msg_1.custom.assign("NFDMKRMUPDTSPUQULANGHOZYKSBFXFLXIBMGFQGIJEUQVKCTNLCONHMWOLHUDMNTDWYAFTSVETIHUQESPJSZYPZPSZCBXZAHASITBRKODGJEUJOKOCYKIEIXSUOLBSCROBRTVJQWLHVRHGMLCXMERGBUZYQDEBZTSWGVOPWAXKKKAVCDVNGAVFQPFIKXNXWRNVQBRMDCIWIHTZWYO");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.222434726147);
    msg.setSource(55792U);
    msg.setSourceEntity(69U);
    msg.setDestination(12509U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("SCXJCVRVHFIOUZANNBHQKBRYTNGKCBLSEXKDTPWGWBGIKBOTYIAHFILOAMCSSMMHFVCSZQLPXALZWRLRXTUSGLODAEFIJZVBEOKGUOVNQJCREOZMLJKYDHXGWETHZTLWWUISFZQNHOBUSY");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 23667U;
    tmp_msg_0.lat = 0.40731578842;
    tmp_msg_0.lon = 0.234002213824;
    tmp_msg_0.z = 0.476550763522;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.speed = 0.0371468457745;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.custom.assign("XEUNVHMVSXJRWRYDTSAEPZEVSIUDRQNNSGHEASAIYGDYKKSKOFNNGKIFDUGJVDZLBCCOOZOPPTEATMJKJIQMCUUWELMCRAJMVHIUIERBSZTLIIJTXQYXDQQVXAHNAFMAMPFLWVLPGZYPRRBOBWYBBKLCJ");
    msg.data.set(tmp_msg_0);
    IMC::ManeuverControlState tmp_msg_1;
    tmp_msg_1.state = 224U;
    tmp_msg_1.eta = 19878U;
    tmp_msg_1.info.assign("TIEMOBNZPAIHKGCPFBDVALDRNDPBQUPCXJAIALKMXCEFBQYUNWUSMSGXZYYKFAYBDISELFHWKFOIDTSUMQNLJJOTUHZGMPQQIFGKEDSOZWHOEACCEMNNLKGGYUKVLJXRBSRVVRZASTTLOOOYMYIHRFHTVHXWKYADUPBAUWHTXRVZVVRKTQSJXIOWOZCZJ");
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
    msg.setTimeStamp(0.903942255652);
    msg.setSource(38664U);
    msg.setSourceEntity(244U);
    msg.setDestination(61095U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("JQNZBYZDQZIARAOQSUTONJVX");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.895502916107;
    tmp_msg_0.lon = 0.462791676256;
    tmp_msg_0.z = 0.91170805573;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.speed = 0.8747625794;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.takeoff_pitch = 0.118583726913;
    tmp_msg_0.custom.assign("QFDRCQJHTTRIJALKIFZYMXKXCRCEJVINBYNPZXYRYUOXGALVFAAPQWWOJQMNGCLPIEOQONNTWCZJQPJEYBSU");
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
    msg.setTimeStamp(0.984180311409);
    msg.setSource(26744U);
    msg.setSourceEntity(241U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(245U);
    msg.source_man.assign("KUIPDAFTLVZPIZZKJFDKQHKEDJNODKLQTITXXIBUAOWIUEYORJZEXJUWRXKBAYFOCRTIQJPPRAERGWFEDTCWVUNRPFQGVEWOXCVOTSEWUBMCXYJLBZHLVPOTBTCNMNYLSMVKVEZBGISSZPCCWTME");
    msg.dest_man.assign("KMGCDLTUTIPLDTAFIGTJBOMPCGRSIBZKNXAYDJWMWQHIZKXCPQEOZVHUKGTQBHRNVQPZGAUFPLESKUABEGRTFSXYMXIZTHSNUOQAQOGWCUMLTQODYDPZKJSMVY");
    msg.conditions.assign("UHJNZUJLPUJXBHPLFONROYYWYGMQPBXZRYUZICK");

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
    msg.setTimeStamp(0.999227354702);
    msg.setSource(56321U);
    msg.setSourceEntity(152U);
    msg.setDestination(55964U);
    msg.setDestinationEntity(129U);
    msg.source_man.assign("PXPOHVSXEDZTNKJYHSWRTVFQZEITNLRGJELWOWTUCJYKJBINWPQXGDBUULEMBBIKCBIIPACOYFCRVFRUGBRJMFZPDAWCTWEPMCZZGRGQGSRAMNFSAMTCJPSTNLCDZAGKYUAKNLLRFAZJIHHGMIYUHUYFCSXTMXVMXQTNMZJPBWBQGQFINSFXOQNUODVLZHEOEI");
    msg.dest_man.assign("CELIOHGJLJYZKTWGBIYIFLJMZDNWKVMWQHHGFHXBBWQTWTYSQEIYPMHJBHUOCCMZKTQXSKVGXRNUIZSDJWPGCLOCRQIMAJAELYHSSWOEIOMYZFXVARJFJGZVNIDGAOQNDSBHDCXEVANJXMVDUTPLUMCKINFBNGEVWAZXBZPELSLVPOTGARFTTLKBX");
    msg.conditions.assign("LEMMIJSMMBLAYOIXBFSHDVKCRLEIUWNMUTAIUVCTYPOYVHARWMGTYLUOCFAXIGAPAXQOGYJGWSSDRUT");

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
    msg.setTimeStamp(0.36495757705);
    msg.setSource(37850U);
    msg.setSourceEntity(108U);
    msg.setDestination(44151U);
    msg.setDestinationEntity(16U);
    msg.source_man.assign("UYPGSDCOPMHZNEWXHBWBFWDSMYKFPPVKUHQTTUBGOHSXPOKFQYQGEDSIQLYFGJYUQITOIWSKBCFOHDRUGFJXVZPNVCKXWXAELECXYYIUNRGAAMNXJZMIJLECLYRJADTSRKBAAHMZTCONLVROIANPEKQGMTIBFCLJXBKBXUVDGNRDGAHQYB");
    msg.dest_man.assign("QWSOWJOFPEHHW");
    msg.conditions.assign("DPRWZZYHLFUEDFKRWBPNIAWNSBWKKATLTXYQHRBIEUZVETLRCNNVPCBLCITIEIGAUSNXYPYHHNPGQLZUMUXEZZXXYKRTD");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("HAILVRQCRFLEZDHPGEUPFVSWHBXSJTYDBTZIUVWTBDRYXDARTELWVXKKKIYCQMFKPHSUSZJFDFGHMPBLNEBFJYZOMZVNDUQZXAQUBCJQHVYGPLAJGPTROHSIMTIFUCWNAILTNZBSSXADKUDSMPFVYQJREZOHOBSMKUCUYXDXNOMIBWJNAOCVEYXGCWWRPTZLQLNRTFLKQXKPWGIQNCHVO");
    tmp_msg_0.sys_dst.assign("WJJDRQHFDZADHONWZVUXXRRLBCZLMKHCKASKHANINEIPMHYWFIFTOLDEFYIELGBJFDPUXPCGMYSNJKETBMSYFNJGKLHCCDBSZOGDEBWSUGVNFRAYPIHYPJKJBAWUEUYMAPC");
    tmp_msg_0.flags = 26U;
    const char tmp_tmp_msg_0_0[] = {90, -32, -46, 32, 34, 38, -10, 111, -60, 30, -48, 108, 52, -3, 41, 33, 34, 113, -58, -53, -12, 122, 94, 92, -123, -41, 98, -95, 85, 97, -5, -105, -79, -109, 123, 81, -127, 91, 57, 74, 55, 50, -65, -115, -42, 111, -103, -62, -34, 109, 122, -55, -26, -20, 111, -124, -127, 49, 56, -35, 73, 72, 48, 65, -104, -125, 76, -123, 116, -62, 66, -128, -97, 100, 77, 40, 63, 69, 32, 34, 28, 19, 22, 116, 32, 113, 114, 93, 87, 29, 17, 7, -40, 59, 51, -95, -21, 82, 103, -52, 44, 69, -114, 82, 3, -100, -61, -72, 15, -44, -1, 12, -96, -103, -56, -62, -93, -98, -127, -110, -13, -112, 114, 12, -95, 40, 44, 55, 86, -17, 39, 101, 21, 1, 113, 64, 95, 37, 8, 9, 40, 29, 56, -17, -25, -90, 20, -122, 70, 54, -22, -98, -13, -102, 21, -2, -47, -52, 115, -83, -113, 93, 94, -9, 37, -83, 51, 43, -48, 57, -91, -28, -108, -10, 70, 78, 40, 108, -34, -61, -107, -10, 125, -109, 63, -80, -25, 94, 95, 12, -101};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.913564921687);
    msg.setSource(13475U);
    msg.setSourceEntity(137U);
    msg.setDestination(65430U);
    msg.setDestinationEntity(174U);
    msg.command = 104U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KIYIRRQTHFGPVYPLMRKVHBUGXIRXKTYCUQOENJKEGRQOSKDXVMYUYMPZGWAQTNXGJZZMIAESBJWNCFSRQXGMAACXQRKWAHUFBPCTRNOUDJECJQYSHVVIFXEZED");
    tmp_msg_0.description.assign("DECCQKYDOGQPHRDJGBREJGZROVKVCQXMMAHNKQSYDAJPTFGTSAAWHBYKLDLNNTYCNZVZTHMXYMFFJKPUZMXQNMOHLEOSXGVLHWZJTMTBQVTIPBDJGXZCBKNVSKAWYZMLCPURVVLONRETLEURSFULFFWWBBFKBRIIUCGHBUWUIODQQVYXYIZTPLPDPJZMOLDSPGHGTU");
    tmp_msg_0.vnamespace.assign("RBXJXCYSIJFKKBOTAAXSTEHLKUJKYGJDPZTIVIXPROVCKVWNCNJNXZZTIZENQFFIOPGVRZCUCNIQRTLVQMKJYMYFIEHUDRBJBWMKWZDSEOCAZFMUGDERLWMHUIRVMWIGAKLUSOGHGSHVPOPFMXBAVZWYZBPWBUJOEVQHFSWKARNRXCSPHODHSAGMTYMSXTYP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ALPUPAAVRWHQDKNJBDQZKGXWQZRTBBHVHHCEUYBXUYNMLFZVGJMFNROITQEEKZPBAEFQSPCVCQIDZDMQCLKOTZHPVOGYCKHXSGUUWOOZSJWQKOKFSBBOYVGXFCCMLKUSVPLOLLRXJLNGZTMJTYSITSAYJLUJJRYXDAHEMWNTRLYESHEUTIMIVWJQHFOEMACGFJXYPXCBQSBDKGMIFSDINIVKRUFPCTOWPUBNTNXI");
    tmp_tmp_msg_0_0.value.assign("DCZLZIPQHILGHOMQQDPTWNLEVWEOOFGCSVAYUIMKGPHRTONYFVRAHINFXDNQKEMLMLCFAYVLVXWORJYSFEXMVPZEGUHKQFPDDWMIJBYYVWWURSQABTJJAOXODNRNZUCZKKRRGJNIKKLJDJGFRIUDHUQJBABSBRAEUYTHVXXEIXNKEQCNZZUYSWGLCMFHMOIMVXLTST");
    tmp_tmp_msg_0_0.type = 42U;
    tmp_tmp_msg_0_0.access = 253U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QRPPJNYSEHQJNQZOEDGBLUCNVQLZWXZCZVNAUIALXWGWKBHDYNHGUTSJRXECKWICGMVDTQAMNZOUFEUMHYGKTBMOEWBUSQQRMPGFBIPWAAVAYEHGXEFSSTRVYUGKYSHZVPCZPYSXDTQOKLWVSAYFWDSXKZBCYUVBTMPDSVJRDIIZHOFFXBJDCCXID");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KZEZKAVSKJVCSBQGAPOETHEBFMRQVPMCULFXPAQWRQNJWVBQSELDGTWPRFNBHTNJRUOAMFPLBLFFGLTWIVXSBJLWGYXDTSHNXWQJDYCGQYRXIYOBMDYLYTWGOZEUTMSRKJVEQXOPMISZUCHIVFDNILVDCJXFKPMBHDRCLWDUOIETESKAZNCYNUSKKLHAMMPVFAOKJZBUHOJWFMAZOQYVAUXWNZEGCIACTKYOHIDIRJGBGXQN");
    IMC::Drop tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 5837U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8829484321;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.458228887447;
    tmp_tmp_tmp_msg_0_1_0.z = 0.84723808744;
    tmp_tmp_tmp_msg_0_1_0.z_units = 107U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.464641634196;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 218U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HJSNMJJHINNETIBKRPQLJBMTOZZSGBJKXPXXRJMASXQNYUZFTFCAGTKAUBNSORPWMBIUUHYFNPLICDWXYSXFIERMVUERYWQALOLMHWIXCVWBGKZRKSOQDBCFGZUIJKAWLRYENGHNZMIOWCBJEHTFTIAGSFUGDKVVQLMCIKJGXTZTTPTUCGGDYPEVRKPFA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::UsblAngles tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.target = 43652U;
    tmp_tmp_tmp_msg_0_1_1.bearing = 0.969843929365;
    tmp_tmp_tmp_msg_0_1_1.elevation = 0.325617956599;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::LeaderState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.group_name.assign("YLXQOJHZQUDMMMFAMOKPGSBTKUIDEABMCERJIDUVQUEIBOFLZTLDUZHRBRKCYPCRNQERPWIGSKGFORYHBPYWNSVXKWCZVEKPAHQPMRXKCVKSXUWWFJGHLEREANZVHGJBFHXJASTDIZCXT");
    tmp_tmp_msg_0_2.op = 236U;
    tmp_tmp_msg_0_2.lat = 0.147765641118;
    tmp_tmp_msg_0_2.lon = 0.546155133733;
    tmp_tmp_msg_0_2.height = 0.693922568948;
    tmp_tmp_msg_0_2.x = 0.792722993018;
    tmp_tmp_msg_0_2.y = 0.641068429572;
    tmp_tmp_msg_0_2.z = 0.577949681504;
    tmp_tmp_msg_0_2.phi = 0.00328308075412;
    tmp_tmp_msg_0_2.theta = 0.704854995665;
    tmp_tmp_msg_0_2.psi = 0.989317661882;
    tmp_tmp_msg_0_2.vx = 0.044094940464;
    tmp_tmp_msg_0_2.vy = 0.137875910721;
    tmp_tmp_msg_0_2.vz = 0.215933358745;
    tmp_tmp_msg_0_2.p = 0.328854991263;
    tmp_tmp_msg_0_2.q = 0.896234926356;
    tmp_tmp_msg_0_2.r = 0.564091255902;
    tmp_tmp_msg_0_2.svx = 0.212859055735;
    tmp_tmp_msg_0_2.svy = 0.972168722003;
    tmp_tmp_msg_0_2.svz = 0.930033360576;
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
    msg.setTimeStamp(0.362279362826);
    msg.setSource(57188U);
    msg.setSourceEntity(251U);
    msg.setDestination(31497U);
    msg.setDestinationEntity(159U);
    msg.command = 229U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FYGOPEHOHQKLAQRBSSNYYTTSJLHTZYBUIXUUMGRACWDEJFXRMKVIKRBMKEKMLMJJPEYIOHWFAVNHJ");
    tmp_msg_0.description.assign("SSCKRSAABEOVHBAFNXYGRIKBRBUDTXSVQXJHXFHZSVXOFYRXKHRMMHNLIBZATJTZWQGCPFTLPNPOEYNZLUUIOEGVQBEGJBCSKPTTYXRGUFJLZQGIEEBNTIWDAHGLTVHWGUHWSMLZQIOMFSUUQNPRMRIUWAJQOPKNDZCLFMNGWFXJEMBKFJHURDETOXEAPAVDKYSVCML");
    tmp_msg_0.vnamespace.assign("HJORWWCWQDVMURTSXPYKHPJKAWFIUCSFOERGHTDINRUAREYZXQKYDGCNXVTQHUTAQOSIGDOJOEBSKZAWJIFUVNCGTRBMPUUYUDSRQLLKUABKZTVZAMTWRFWWYFZDHNTCJSQCQOWEYOOFILCLMNNLMEMXKDGSKJRJJQJQETHHACCPFBYPLHLBZNXZBEKBIBXVZGJSVHOPSRVHOMXEPPLMEVVTKMFFDGGLBMANICIUVYIIGDYNDAF");
    tmp_msg_0.start_man_id.assign("QJAAQFKBRNDSPLPDNPKVSVGCETKXJFELUGWOOOJKVYCRHOZNGZCHQDYVIZTRARIAWONXZMQDMICSJSYYTAMZMBPXVFJAJTTZQODXZQABBJWFVSYEXEOUFKO");
    IMC::TrexCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 57U;
    tmp_tmp_msg_0_0.goal_id.assign("TRVNAXMOPHSKEUYLTFGAZJXUTARFOGUCOUXVSDTUIDDOECWJTEYCQKGQSWSDSXXTHJBBFZIWRZDILE");
    tmp_tmp_msg_0_0.goal_xml.assign("UJWGZMLMCIOWQLRHSXDVDBBTFANRHOFCTOASEFYFKRLWUMNHREAJEXDSFUDRUJLXCALYOSPQTFSLHLDWMHRUMICJVITXSWEGMPVEPOWHWPFDTAUGCTNZKNBKTAAVGEVKKBELPUSVRBOXZNPXYAKGBJCIBGXKEQSJP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.381329725411);
    msg.setSource(958U);
    msg.setSourceEntity(49U);
    msg.setDestination(15543U);
    msg.setDestinationEntity(42U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BKIFIGMJXUQOSWWFSSNENYYDVRZDYNSSTOWHUPGXLIKCRLOXBPYOKPMGQRRZQHMEAFGNCVALOVWZBHGRCUXFBRHCYZCZRQFXWJUQIASJNLQKCOVKIOKLXUHVCEKSXZUDADPLPTTUIMUSQHXPMHOHXWE");
    tmp_msg_0.description.assign("PEWGOZKXFOIHTPTVNQXCDAUVXSYLQLCGXRSRNLPWNIIZLFUCVYUYMZQMUFCYQVZFATAODJFHDJLVPSNZORPGMGOMCAFBHUHYLNMHHCYCSUDEIWQZWUYKNTINNWJKXFGRKONKITDHPDIUVJGRJXBABRSDLAPHTTALRRBWTKMVKPCBSSBKEMHPEQJKTBJYELHEAOAZQUQ");
    tmp_msg_0.vnamespace.assign("RYPKEHBIOKTZVHXQTMEUIOOGKPUBGIXLVIFXAZHYFVWPG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DKWUGVVVDXKSDZUDRUMZTJNTWGWTYQKRIHBLEMCTOSPOOHJKFEVBZNYGBMBYAMCBILVWKWPTGGXSPETAKMFMIYPUIWGYGHTANUJSJQVRCJHIZQRQYWYJQONDPRINREMSLXDNFBEPXXCDOFFZUVBLAXEPXNNFNQSB");
    tmp_tmp_msg_0_0.value.assign("XUZHQTQNWOUJCQMABJMDKRZBFOAJNAMLRSVPEXIWISTLDIXUIOJEKIODMPHPBAAFNOSOTYXBLLPGYRDVMCCXIJKCDDGXPLVRWJKMLIWODUOTISWYYPQFGERYHBZHNCABBJQCYJZNTVBNNVLFTCAJIGSSNQWTQYKEDPGUCPNEDBAE");
    tmp_tmp_msg_0_0.type = 242U;
    tmp_tmp_msg_0_0.access = 85U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BEQZICMTJRNSITOSESWDYPIKKMIKUHIVFPAQSZDLFNJPOLGOSOG");
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
    msg.setTimeStamp(0.920716857268);
    msg.setSource(35615U);
    msg.setSourceEntity(3U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(96U);
    msg.state = 10U;
    msg.plan_id.assign("YXUVYKAKPLHLVFRQRNFHCJMTKNCPVDIB");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.755346869637);
    msg.setSource(46353U);
    msg.setSourceEntity(124U);
    msg.setDestination(40799U);
    msg.setDestinationEntity(146U);
    msg.state = 211U;
    msg.plan_id.assign("DNRQYUMGEHGNFSQIRWHEMJNJTSOYPJUGJAPAMQSTVPWDDOXRHVKYYAFFVSACNRKZKMQF");
    msg.comm_level = 85U;

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
    msg.setTimeStamp(0.695941553974);
    msg.setSource(35178U);
    msg.setSourceEntity(50U);
    msg.setDestination(165U);
    msg.setDestinationEntity(138U);
    msg.state = 206U;
    msg.plan_id.assign("JBDNHBTMVHUIDZXKIACTKTAKHXYRVUVBIGOETPOWOYTWMMTTXCCDAUKWNQVFWGBKMURXKHOSBMIYXANFIEJGJQEVTCDRXHLHZON");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.362097444766);
    msg.setSource(15704U);
    msg.setSourceEntity(165U);
    msg.setDestination(3097U);
    msg.setDestinationEntity(227U);
    msg.type = 15U;
    msg.op = 72U;
    msg.request_id = 29789U;
    msg.plan_id.assign("JVQLZYFGXIKXWHMGALQHHKRKCQICJLIOZXVGJDNFDCCAIFKTWGEPBKREMCNBIJBTQRYNQZKFFVOMKDPZDSLMQ");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 135U;
    tmp_msg_0.time_remain = 0.721666316247;
    tmp_msg_0.sched_time = 0.346577898905;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DPGVTSRJKWADVGJFZBYPBICHDEALMXZPZKVLXEVMPPOXTIAFCDTHMLZHWCZBOSAGGYYLYNQOWVMSOERECLXJKINYTZUFYCIYKBRNOB");

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
    msg.setTimeStamp(0.662819376336);
    msg.setSource(9526U);
    msg.setSourceEntity(176U);
    msg.setDestination(29594U);
    msg.setDestinationEntity(139U);
    msg.type = 199U;
    msg.op = 247U;
    msg.request_id = 31392U;
    msg.plan_id.assign("GNCWLLOVFIDSQRLELMOZQJZPXPWOASHXXOFVMDWDVGSVAJIDRQSVAGEHNGNNPZLPHRZ");
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFBAFJLQSTPDADSHYQSHKKWWRLQLMYUIXSETZXGMLGYNLVQEZJBIVDQNNKSFJBHRNRQEBCBKMVTNXCRDLITPHAPCPYFRSFJNHYWOCFMIVMHQBTVNVDYAWZFJTZUHUIGTEJXMUUEAAGMPZVJAOPMGXUXDRSOWCSIUWTERGPOKVPTDKIDHOYUCXVOFCBBGDLWEZNJFUIOFAPAPBMVZIKLILWJYNOGLRZYCESCROCJKWB");

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
    msg.setTimeStamp(0.342438357063);
    msg.setSource(8947U);
    msg.setSourceEntity(247U);
    msg.setDestination(5666U);
    msg.setDestinationEntity(69U);
    msg.type = 82U;
    msg.op = 170U;
    msg.request_id = 59917U;
    msg.plan_id.assign("JQWCKLPXJLHKMHHSQWZQCBSXETXEWFUUQNTWAVNDAIVTFLXFWHDPPRRYPLJYDRDCPRVJMAVVGZEDLRLFUMKNNREPKKSWHFLYOYXURXFBWQOTVROEUZQMNKQWMJIJUTOBPIGAHTDBJASENTCXSZEFXVYYZTGAGQXCUESOTIYCIBBIOPGBMNYMBONSIRQZBAHGDEGHNJVLCWKYNKXVKPJKMAUGTQDFSYDF");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 108U;
    tmp_msg_0.step_number = 24U;
    tmp_msg_0.step.assign("UTXZNFVJPQKEMDJJWHBYUUOLGGLIWSBOXAPAN");
    tmp_msg_0.flags = 112U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OYPFWYYCMGVKBSPJIHLXIYSCZQGOEXDRDQZLBRFSATXUIDAYSADSZLGMVRLXLKFUOCEKYBFBDWWVVSJZCRMNRGQJVQEKHAUDIJPFCQKXJ");

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
    msg.setTimeStamp(0.503635839112);
    msg.setSource(65377U);
    msg.setSourceEntity(218U);
    msg.setDestination(28871U);
    msg.setDestinationEntity(28U);
    msg.plan_count = 64874U;
    msg.plan_size = 805618674U;
    msg.change_time = 0.802698310887;
    msg.change_sid = 1255U;
    msg.change_sname.assign("DZQPOGFXDRLOXWBDEFLNC");
    const char tmp_msg_0[] = {-27, -114, 106, -88, -27, -30, -52, 37, -57, -62, 107, -81, 22, -111, 36, 34, -126, -33, 88, -121, -74, 53, -73, 52, -120, 115, 68, -35, -93, 122, 84, -66, 19, 94, -85, 123, 106, 8, 43, -43, 101, 33, 122, 27, 72, -49, -42, -91, 109, 30, 24, -40, -104, 114, 56, 22, -74, 117, 67, 25, -25, 121, 31, 106, 37, 28, 105, -103, -63, -46, 95, -83, -103, -10, -33, -115, -28, -106, -35, 36, -53, 71, 46, 117, -19, -8, 108, 42, 114, -54, -112};
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
    msg.setTimeStamp(0.460967617965);
    msg.setSource(2645U);
    msg.setSourceEntity(4U);
    msg.setDestination(21748U);
    msg.setDestinationEntity(206U);
    msg.plan_count = 54195U;
    msg.plan_size = 1509616981U;
    msg.change_time = 0.788905552187;
    msg.change_sid = 42745U;
    msg.change_sname.assign("GUPWNBCEPXXUPYMSFBECVBOERPNIHSCOWGRFHTIZZJOEPFAQASAQTTQDLTQHLCRZHINXIGJDJFZSLZNNJPVGWRBIUWAVSPWUHMQRATFQNSJOLMXIIVWFLMFMDGWNDZYIQLAUKQMTBRJUDYHDMDRVZIZYGFPPDJKVBUPLMX");
    const char tmp_msg_0[] = {-64, -128, 100, 39, -27, 120, 70, 22, 65, 122, 71, 79, -67, 113, -9, -97, 26, -29, -110, 22, -32, 55, -123, -106, 48, -76, -5, 113, -28, 117, 94, -108, 49, 18, 11, -19, 118, -60, 18, 117, -88, -33, -127, 103, -64, 78, -67, 89, 72, 86, 16, -113, -2, 60, -14, -40, -52, -53, -121, 64, -128, 32, 97, -74, 122, 98, -9, -109, 11, 45, -23, -24, -27, -100, -112, -71, 69, 68, 98, 39, -8, -44, -79, -111, -45, 91, -121, -75, 109, -9, 84, 40, -68, 16, -83, 90, 11, -13, 75, -104, 5};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PQHGOHJCXGESKBIWAVTRMXRFERBWJNVUZYEFJKDCMDZSUCOWSYKFLMGTBSVKCFWPTJBFGNRXEDCDMQUKCZDFYKQUSHSYZWEDXZLBSUJAMSLJVEXZEIFDUQVPFIZPOQPDHCXGJQINBMOLSNIHOAHVWEWWIGVZKQZYGCYORRRNXRNPMONLBRAHYGIQIIKQCNNRTAUEDTUZBLOJAWOVKYASKYWUUPDNALJX");
    tmp_msg_1.plan_size = 11462U;
    tmp_msg_1.change_time = 0.101390324905;
    tmp_msg_1.change_sid = 38260U;
    tmp_msg_1.change_sname.assign("ZCUKRFATTFIDSBFLGHSYPXTTZRLWHTCVDHTQNAGVFDALXPRSVWNBKCXEYUHXEOLRYNJUAKIDMKDLHXQQMISCJBOQRYPMBVDORJUJTHFSD");
    const char tmp_tmp_msg_1_0[] = {-73, 8, -101, -94, -5, 30, 83, -12, -53, -4, -58, 113, -9, -46, 36, -71, -115, -14, 40, 64, 105, -45, 62, -73, 82, 88, 117, 109, 73, 6, 98, -53, 90, -125, -12, 90, -52, -29, -96, 96, -43, 52, 106, -48, -53, 87, 12, 103, -51, 1, 9, 114, 38, 120, 111, 70, 27, 125, -50, -38, 95, -88, -98, 101, -87, 12, 12, -51, -33, 63, 97, 62, 49, -90, 18, -113, -33};
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
    msg.setTimeStamp(0.0482335058909);
    msg.setSource(61290U);
    msg.setSourceEntity(32U);
    msg.setDestination(17392U);
    msg.setDestinationEntity(208U);
    msg.plan_count = 3559U;
    msg.plan_size = 1643363596U;
    msg.change_time = 0.91751677203;
    msg.change_sid = 45286U;
    msg.change_sname.assign("IEUXQCLDAQWVXGPJGITPREZTJIANSTHSHTHYAMEWUWFDJUVKNQCHGGBSOMWEVTWBBORMERDVTXVPOWYMPOAHPRSYQKODXGLXLJLMUSPRJROSFLDMBOKAFJCVRGYQNFGNEMKSVAWBTA");
    const char tmp_msg_0[] = {39, 66, 36, 60, -29, -40, 98, 60, 11, -84, -27, 60, 16, -33, 16, -118, -47};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DVYNXIMTGELUHUVCWLQJJAZYHRMPOWDFQPXEIISCBSQHMUGOWWROSTMLJDSDDKVFBYCZQWSLSCKLHQSU");
    tmp_msg_1.plan_size = 30897U;
    tmp_msg_1.change_time = 0.62538725107;
    tmp_msg_1.change_sid = 47414U;
    tmp_msg_1.change_sname.assign("XDLPFTINFKROFKBIWGIXKTPJXBLJGBOEUIOCVOQMWAKIKGBWSFYCIOSSRWMRVQJSZXJBHNXFNJTZFKBMNZEMDRUHQBLYLQVGOI");
    const char tmp_tmp_msg_1_0[] = {-97, 73, -110, 53, 75, 16, 55, 27, 116, -57, -15, -74, -106, -96, 15, -42, -114, 117, -48, -110, -58, -21, 76, -12, -98, 108, -57, 20, -43, -84, 116, 60, -18, 16, 67, -102, 24, 80, -5, 75, -50, -21, -50, 30, -24, 91, 12, 74, -64, 113, 77, -30, 96, -53, -12, 13, -41, 123, -74, -57, 114, -87, 113, 34, -45, -93, -119, -9, 112, -35, 103, 59, -31, -4, 43, -107, -16, 88, 93, 105, -25, -94, -56, -37, 67, 23, -114, -31, -4, 1, 100, -36, -56, 13, 110, 43, -32, 16, -32, 122, 114, 21, 17, 86, 76, -84, -71, 88, 85, -1, -109, 40, 109, 35, 64, -97, 15, -35, -18, 109, 52, 40, -84, 11, -123, 28, 38, -64, -12, -38, 23, -107, 65, -105, -18, 16, -111, -98, 17, 41, -37, -61, -98, -16, 18, 80, -7, 69, -71, -109, -22, 33};
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
    msg.setTimeStamp(0.85878835658);
    msg.setSource(23027U);
    msg.setSourceEntity(243U);
    msg.setDestination(26951U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("JUOVARPTOUMPWQPEUXYQZAGHAEUIYMDCLOTOLGE");
    msg.plan_size = 10263U;
    msg.change_time = 0.421320030068;
    msg.change_sid = 26151U;
    msg.change_sname.assign("JMYCSXKFYNPTPZXSUBNWPYMKRUJEFEGBFHGYPJZACAOEMWMOIQLKZDDIIFZKMHTRTCRFXWNUBLYWLJYFVMRONN");
    const char tmp_msg_0[] = {-99, -98, -3, 69, 30, -58, 14, 65, -61, 68, -92, -121, 90, -29, -60, -61, 102, -94, 60, 98, 1, -47, -54, 81, -95, -43, 16, 109, -1, -81, 46, -40, -82, 93, 31, 42, -116, -32, -84, 27, 18, -83, -27, 63, 12, 5, 21, 122, -122, 114, 66, 16, 114, -53, 75, 79, -56, -52, -112, -40, 86, 82, -16, -74, 56, 102, 90, 112, -84, 26, -58, -60, 82, 95, -91, -95, 1, 31, 32, 77, 30, 30, 47, -30, -85, -12, -31, 82, 26, -99, -37, -81, -120, 75, -89, -110, 93, -44, -115, -86, 74, 87, 11, -119, 82, -5, 23, 107, -25, 115, -49, 70, -20, 17, 79, -3, -96, 28, 30, -34, 30, 20, 0, 0, 53, 28, -86, 50, 68, -83, -48, -93, 119, 21, 24, -88, -19, -68, 19, -21, 92, 36, -105, -123, 111, 18, -52, 46, -5, 66, -87, 36, 6, -100, 113, -116, 19, 63, 116, -102, 114, -64, 93};
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
    msg.setTimeStamp(0.154661859492);
    msg.setSource(22371U);
    msg.setSourceEntity(246U);
    msg.setDestination(41847U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("QZFULKEQHDTDAKUVRHKJEUQKTQWKQSGWMWHQWYYVTVCCQZXQANIXNTBLIYBJRPOXOBLUEELAGDISIBGNHUNSMPOFZSMRJAMNJENJCPRNUZKZXMKF");
    msg.plan_size = 9168U;
    msg.change_time = 0.00798144792417;
    msg.change_sid = 36132U;
    msg.change_sname.assign("JBUYHEMDAHWUTIZTVQVKEPNZIEJMHGZIJEAPVQOLFRWSQSZS");
    const char tmp_msg_0[] = {-107, 41, -107, -127, 120, -22, -53, 117, 6, 71, 96, 6, 71, -23, -18, -90, 32, 20, 8, -116, 115, 4, -99, 38, 31, 56, -110, 55, -102, -46, -115, 20, -74, -18, 104, -98, -128, 109, -113, 26, -21, 81, -11, 76, 40, -31, -55, -122, 43, -16, 102, -103, -93, 40, 78, -28, 79, -73, -36, 114, 101, 40, 79, 34, 41, 75, -63, -21, -98, -67, -127, -126, 124, -30, -83, -110, -15, 122, -124, 119, 49, 125, -43, 62, -34, 13, -41, -85, -20, 47, -53, -101, -71, -13, -97, 93, -57, 39, 61, -122, -45, 77, 53, 5, -115, -2, -67, -58, 71, -120, 105, -114, 35, 62, 22, 93, -105, 12, -85, 18, 115, -88, 76, -121, -53, -37, 98, 110, 111, 36, -58, -13, 24, 48, -27, -91, -21, 31, 54, -119, -121, -117, 48, -74, -13, 61, -112, 98, 52, 54, 90, -31, -38, -55, -18, -11, -38, -29, -112, -103, -113, 16, 126, 53, 58, 71, 101, -43, -103, 9, 28, -72, 111, -65, -54, -105, -20, 86, 101, 9, 74, -12, -117, 112, -91, 4, 89, 66, 41, 49, -81, -37, 47, -38, -38, -65, -72, -84};
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
    msg.setTimeStamp(0.571988424857);
    msg.setSource(23638U);
    msg.setSourceEntity(27U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("YCESBPQARYZPXXVNSQEKGBHPVIWZGCMATMUCTWHYUSNGHLYWDMGGJRPQYFGMJHZRFJTZPBHMTRBLWSMWQWXOVQCIEOEXUJPIPAANZDHOKHIQXYBXPEKZACIVMVGIZULWRFNENSTUAACKBBWPFNINOEMGOU");
    msg.plan_size = 64573U;
    msg.change_time = 0.239915273049;
    msg.change_sid = 5246U;
    msg.change_sname.assign("DQGSHERWUPOFPIMUWFWNBXNPQQWSYOUTLVQKDYQGAFJOJPYGJNZAFJKJRZGWCSCBTMPKBAQBSVERYOSQMWDNKSJCBDQVYCDLOXCTKMIPBDXXNLMHLMBAPCJTNWHCILNJTBYXKOUMKNVIXNPTAZMYIFVEWQJIWAIELDRJNGFBXZAPZSKHRHDGWUZFHGVYRUXSUGVKZEUVETKUYCUZOTSOIGZZHLQTMEMLVAFHCIOCAFLYDEHFEI");
    const char tmp_msg_0[] = {96, -30, 22, 124, -49, -27, -93, 65, -76, -28, 106, 62, 42, 92, -106, -45, 2, 6, -6, 119, 25, -34, -73, 29, -37, -40, 7, 79, -124, 14, -128, -17, 55, -30, 60, 76, 56, 66, 57, 49, 4, -20, -19, -118, -80, -122, 67, 112, -63, 46, -13, 84, -126, 68, -72, 12, -84, 123, -41, -58, -103, 36, -21, 88, -42, 109, 37, -40, -84, 48, 24, -35, 6, 56, 99, -11, -58, -69, 67, 111, -119, 91, -49, 14, 87, -90, 49, 80, -95, -66, 85, 43, -52, 111, 106, 35, -13, -44, -56, -19, 83, -60, -83, 7, -14, -95, 83, 32, 52, 2, -125, 54, 30, -39, -64, 94, -49, -116, -126, 34, -22, -41, 23, -22, -9, 95, 63, -107, -123, -120, 40, -114, -23, 43, -94, 85, -84, -17, -107, -82, 7, -46, 36, -15, 63, -121, 22, -29, 14, -35, 66, -128, 42, 105, 63, -114, 51, -79, -91, -50, -2, -41, -84, 78, 59, 16, 41, -77, 73, 74, 82, 22, 78, 55, -88, -53, -51, -49, 4, -96, 125, -19, -66, 51, 25, -72, 43, 105, -25, 50, -21, 23, 94, 111, -85, -13, -46, 77, 21, -62, -92, 10, -4, 78, 17, 103, 41, -124, -56, 16, 95, 76, -35, -62, 80, -34, 82, -111, 51, 100, -123, 39, 71, 100, -82, 69, -112, 8, -6, 29, -75, 64, 48, 80, -92, -71, 76, -10, 108, 115, -73, 83, 5, 96, 11, 91, -14, -35, -115, -39, -104, -16, -107, -29};
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
    msg.setTimeStamp(0.578697162336);
    msg.setSource(25305U);
    msg.setSourceEntity(98U);
    msg.setDestination(52261U);
    msg.setDestinationEntity(44U);
    msg.type = 52U;
    msg.op = 121U;
    msg.request_id = 50907U;
    msg.plan_id.assign("EWUOWNCXDWQATFHGHVEBSRDUICHURSOWFRVMDLZYXOHOPSKFAXJEJQNOCGZIKQBAFUYSIYXYZGNODGUXLCOTQXBJZACQHRXSLCDMVUZTYTOCWNGFITQUJWPKLPHJURMIYIKYAFMZKKFHNSNUDVGQPKJHSNGYUKACKIWDIDWJQVEOSZLABLPPNMRALQGJWEVFLPDLGEM");
    msg.flags = 34012U;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PXAMFFPHNQKPGOPJCFDLJXSTLFSROYWKGADYKFBSRXBXOXTZUVCWNMBWLRVEHDUEQCNHNEIEVKLBVTRHSZDGJFKIKJZSGZGOANZTMRJJEUOYIACOMUPOZGJOLQCIUWRXJNHMTQRKJPZADIUOPGUCUWEWH");
    tmp_msg_0.attr_type = 50U;
    tmp_msg_0.min.assign("UKRIOKQTZBMFSDWMC");
    tmp_msg_0.max.assign("MLOJSOCXYKVDDNIJARQXPSBQFHQCVWGCBEG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDNJGWUEOIIRKHEFKSMOAHKAUQTRBRNTJVAAZZPSZEHTWDVOBIFEXJPWTMNWXYTQULHAZRWLZJBPOYLYMLSCFIWDCMHDMBOHCQKZQPEYLSAMBGTOLKMJNYBQAKGYGSPZMGJCBIVLUPNCFKVXQSFBGIELUQKXECYFVZCPUNLHVRRTVXAYIVGVXNBILZSDTZHOYDROTPUGQRRHEFUUNHXKQDDICRNVFD");

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
    msg.setTimeStamp(0.106861467583);
    msg.setSource(38049U);
    msg.setSourceEntity(128U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(69U);
    msg.type = 56U;
    msg.op = 80U;
    msg.request_id = 47854U;
    msg.plan_id.assign("CHXYSCEGFJTAYMSNXHNJHACTJSKGINRKRUQKAHEZOFLZNKGPHLLYGMRZFSBTKRKCLVEOMQHIKSBZWYDSHGOBPQEVTTRVEJ");
    msg.flags = 42217U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("FDNKRIBCVIUGZNRKLGQTDIKCSHMQUJWNSMKYNMQAOAAYUCGBWTEJAJLAHGJHFSFAXIRUTEWCGDCNVHTXEZUCQZYIHMMRCPGNVWZUVFRJHFJKSWZBGWXMEDAQTXVXODXQQV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MZHIYMUXNJFGFCQDSGQKEBSUZBUOGJASDOEVVXIRIGWFXYCHRHVIRNAUWPKSWBJGATANFPEHYXAGXQXSRPVULCWLJETNMWTPGNMXSPUSHZIDEJRLVETAZDBBAYKJQHPZSFNYXMDLQFONH");

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
    msg.setTimeStamp(0.0787633625605);
    msg.setSource(63399U);
    msg.setSourceEntity(235U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(194U);
    msg.type = 63U;
    msg.op = 2U;
    msg.request_id = 26516U;
    msg.plan_id.assign("CFYFRKJTBVGPHRMJULTQCLVQMTFAHZEFGBPOVQMVVNEGNSNGWCNROQPZMIBLHEXZWJXYRLILWAOYGHTGVXNXUVZDSPMGAFUVFOIKXSKPKIRBJIWMBCTCSUDKNEGYZLXQDMDYSWRIQWMYFOPVXPXWJADJZMMIPQIQOGAXYSDCGCHXSKNKLZIWPOJRDFULYNSUOBUBAE");
    msg.flags = 18965U;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GXBDAVAZTZNGFPANVKAHOQIKXSAFLZTSDFTIUZXCBVFNGNYJUEEJVYOYMYPIVINSFQRFTSIWDRQHYJEALYHJOPSGXWGMBNBWPCPLEDJIYWYKQRIBZKPBDGLXUZCPHWEVEWOACSRHRTLLGZJNCZTAZSJTKQDKHFMXMANUUBC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TBKIFIOSXGPRSKZRJPFHQCLGEMKZGWJRARHKULKMOSRACOVEZSYQVMQIWSBDRYNKHPLALCZJHPDEOJAJEUXUHHNGBTWXDZLP");

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
    msg.setTimeStamp(0.680875908475);
    msg.setSource(35821U);
    msg.setSourceEntity(103U);
    msg.setDestination(41426U);
    msg.setDestinationEntity(243U);
    msg.state = 176U;
    msg.plan_id.assign("HOOHLIGJRSJMYBIWLEFDTFKGMAJZPCMYTHMDGVGOXCDIMJZIKUKUSFCLRETKKOQPTJLDGVSTWYCEPXFINMLAQBUPCOZSSDAWARFBGUNZVQHGEFCPYDAYKXQOGYLVTZXAMFXSVBWTTRBUEQIBACLFRZADRNHLSYQIFNQSNHVJCCTTOEPUXJWNRVVWNCWBGIXKVRFHZNWRQBAYONYBUYHSPDMUMJU");
    msg.plan_eta = 1544194591;
    msg.plan_progress = 0.914821679156;
    msg.man_id.assign("HDNSOLGNOHWXUFAEHEJIRNAVGTMVQVFPCFHXJWNCMANOVMJPPCPVXMVAODKLASSXBEUOEBAZLSOKXGNHIEBVVJTIPGPZCUONKPOEOMZGFIJFXPUDQSLRMXHYURFATIYGCUQBEZYUILJBWWZWMGQXKALYGZYRKRQJYPJOKREDSBLUXQWNFMZBDTSGCLCUFYZRDRQAZTFBCKQJWWNIRMWKDITHQKLSK");
    msg.man_type = 11202U;
    msg.man_eta = -1856362391;
    msg.last_outcome = 194U;

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
    msg.setTimeStamp(0.711494689542);
    msg.setSource(14868U);
    msg.setSourceEntity(135U);
    msg.setDestination(28875U);
    msg.setDestinationEntity(243U);
    msg.state = 116U;
    msg.plan_id.assign("ABQVTHYVUFQMWVKAGBAVWJPRDLAHMGXFNRNDBPDNBIPZAUPNAGWEKGIYY");
    msg.plan_eta = 1221822392;
    msg.plan_progress = 0.665706623967;
    msg.man_id.assign("BQZSWDAWHJPUKQJMOMQMSMTORGUPINODNPULDJVYCBNYCMQHRHHCIWTKVJ");
    msg.man_type = 39849U;
    msg.man_eta = -2046265423;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.955045704962);
    msg.setSource(29478U);
    msg.setSourceEntity(156U);
    msg.setDestination(21920U);
    msg.setDestinationEntity(52U);
    msg.state = 234U;
    msg.plan_id.assign("PTCAKDRUDWPHHXZGUVOIOXHGNUYITZUOYFLROPJYUONMTCLNAGKCQPSOBBJDLZSERSFXLIFBMVWPFVZXQAZCKNKAVKIJRISIIYVGHQSCWVEQNNCUXVOSWTTHYLFAKASEYBAXXXJSWYLZIKMJZPAOUFBNHRLPCQEQQHVCIBBWTGWTGBAVBZKWZFRGNAXMEDRLTGOMTYYFUDFQTHSRLNMQJDPKHUBGPHPF");
    msg.plan_eta = -642869742;
    msg.plan_progress = 0.0728921533205;
    msg.man_id.assign("KYJTXTIZUYGFOTAGLFQNSGATCXZFSPKYECRDUKJKNWHIAPVWINYABWJRGEOJFWZSQLVKISHUQDYIYCLZQPRECFZQMNFLMHOVVVOAYFSPRDDLXGOETCJBJANBOEHSMRMWMJACCRVCMCXGIYZSXFBULQHMPDSOUSMNANBUJNDTKGWMEHXZUZDVYQ");
    msg.man_type = 24093U;
    msg.man_eta = 882927367;
    msg.last_outcome = 254U;

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
    msg.setTimeStamp(0.0926786205257);
    msg.setSource(20883U);
    msg.setSourceEntity(30U);
    msg.setDestination(57206U);
    msg.setDestinationEntity(200U);
    msg.name.assign("GOLCXSEWAXRKDKMQBEILFNHKOGNXNSORPKLWKZRHGZPEFHEWDTAOPLQJZGQDSNBLJHQDXUTXOUPYXVBMUYHOBZEWTADNIRNEORBTGCXMTYJWADMMQPLYVNFZUTFAFLPMVCIXWCVVLGSDKZICYOJIQOBFBXRGEKT");
    msg.value.assign("XFSGNMHENZELJCEWHOLJHWTZXWGSLVVCMIDLWPRNCYBXGTIAYVBMQKNJUDDVPYLQJMXMUWKKWTKLGFUKHXZERIROZSHKBGKTCEPTDZQJRIYTXYMDUPRTURZMKXHUGDGPHHJOPELGSJCGXGRBVR");
    msg.type = 218U;
    msg.access = 230U;

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
    msg.setTimeStamp(0.465831394444);
    msg.setSource(47055U);
    msg.setSourceEntity(148U);
    msg.setDestination(24510U);
    msg.setDestinationEntity(1U);
    msg.name.assign("JRZYVEIERLIIXQBVKMZKGMLKYGRYIGKHLKMPHWQLEOXAQSUJOTCXYEBUWARCWXUZDBNGUDNZVWBSILLRVXOJIQPXBWSJUOPXPZWRTMSCLCGLQNAPBXBPCUMIFUHAJGNXFUDVGRURQHTHJEVWZFSJVDPYWTZRKYNOSYYMCVETVFCTISDAHIPKDFZDSNASQOKOULZWHFVNHFQZMAMHXKCBYPDERHYEOAADKJMTSFTCTGQBJAJIEO");
    msg.value.assign("APMFNYKUFDFEREMJHQMPSSCVPVIWEBEQVDDLWPZHUTZBGAMNNDCDZVRTRKJVDXKKWWGIDWAAYFNYXZBFGJOPLOBGWSKRQXEUOIEFGCBMLRHVGCKVKOBRJDHALBVAGQYPTXTULDYNDUMMULZHIZXHPLTNKIGIZTYYSIQNCSFHWWCZTZNOKFTNBSTRZCOCLLPJBLCHESSGOHEQRQPJYMRFIIJWXXWXUMPRFMTXJAHQEN");
    msg.type = 115U;
    msg.access = 220U;

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
    msg.setTimeStamp(0.032144397451);
    msg.setSource(61693U);
    msg.setSourceEntity(243U);
    msg.setDestination(42400U);
    msg.setDestinationEntity(114U);
    msg.name.assign("WCKPTSKJZUTZYOSEJVJMOXCZBSJDOFVEOKDXBGGMYNZAFLQGBTRZHOODYHXWCDLZKPCPHAMJYICMMPFBMS");
    msg.value.assign("WJSWAIMMPOCRKZNUTTGIIAURJHNUEFOBNVOESSUEBQDYPPCKUQAGGBAICMZCZGJVKR");
    msg.type = 235U;
    msg.access = 121U;

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
    msg.setTimeStamp(0.813753088618);
    msg.setSource(15704U);
    msg.setSourceEntity(188U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(176U);
    msg.cmd = 145U;
    msg.op = 180U;
    msg.plan_id.assign("FWFQVZLQRSSROLUJTIXPQYAZBHFFIFCPMKDJZBUUTQVLSMXNISEOSTKHSEFDFVIDQYIYMXYIMOJBTCTRNTAKECHOIJCLEKEGYRSMVFCOVJQPICXYTZKAEUXRPPGMAQZPYOBHLPORLNDWNXNIXMVAWNAEGDUBHPUUNBWUZZWVQUNLBROGNRARXZLBHWTWKVGOGEAJWFKPUHKCKBFATHZSYQNBEXXDHYRKSDHMJEWVMDJDDY");
    msg.params.assign("DCHWOVGFMPOSSKSUITCXBRXJMHDMQCPPYWFAWEUOCUPZIZGRUMLFPWNBXEKYQKASROYTPBCDRBYBKGCUZNTEDZXWGFAUODHCPLGVVPQNFMNFXQELMQDRSISOCNURHALNUEJLJDBIXBQDJJKZXQAXWSPTFITUMTTILBVTJVAHKAVHSPTQNJHOAVRENZINMYOGHNCICKZWEDHLVZBLFZKTORYIJXWAUXVGBH");

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
    msg.setTimeStamp(0.672431071223);
    msg.setSource(10239U);
    msg.setSourceEntity(84U);
    msg.setDestination(27757U);
    msg.setDestinationEntity(168U);
    msg.cmd = 180U;
    msg.op = 218U;
    msg.plan_id.assign("ENNPPKSHJWCFYKJOHUTCSGNFJCZBXFROITEMLCAKPYRTURYMQPGSXRMROAJFVZLTAJLFNWYOKAVAFVZYUGCIUEHHKHNEZITRGLSLGYDYAQMLJBNFDB");
    msg.params.assign("BGHOLTALXMZQXCWWBEDRGXAVJHDZQVAMPOCFTGTKFGDLEWEMNFLEIPJWBMGTRFDVBMSVYONVUALSYQDRHALWWUGUSRIIPZHKPUBMNXDSO");

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
    msg.setTimeStamp(0.0529954386179);
    msg.setSource(64054U);
    msg.setSourceEntity(209U);
    msg.setDestination(24109U);
    msg.setDestinationEntity(56U);
    msg.cmd = 194U;
    msg.op = 13U;
    msg.plan_id.assign("KOJAWPDVQEGBUIBSJKSHCDBRPWYAWCYKOTTZFRAUCKYYFLRSEDHMXFROJPXOQGBJQVUIQEUWSAGHZQQSDEATIDCEXKRKBJMPQZAPPKOIZNRSXICHMPUBCOFPLFDKVGEZNNKXWVZGHZVVENZITBCZTMSL");
    msg.params.assign("OYNVFDEFBKYJJKEKDCKFDKOSIOTTSJMCBNIIQLXNTGMGUQPXPRJTRHNCONEBPTEGDBAHCJNABXFMMMQVLAULQFVCTVDWLHOXSRAWEQCUPFZVSFICWEEMGZDSVJJYQIENZOZDWJUNEACJAHLZYWWXMUUQFTVTOXLSBRYPVOBHARGPUIQKXQOHRAYXCRDTEUIKOWYLLNMSZPNPF");

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
    msg.setTimeStamp(0.566423186931);
    msg.setSource(24219U);
    msg.setSourceEntity(221U);
    msg.setDestination(1991U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("YEBFGYOFCERLERXHJCQWIPDQMLKNOHESDVZNNQHWXVL");
    msg.op = 1U;
    msg.lat = 0.168985890905;
    msg.lon = 0.775466012944;
    msg.height = 0.296060778033;
    msg.x = 0.181740052539;
    msg.y = 0.302526988528;
    msg.z = 0.594343585156;
    msg.phi = 0.0683523095869;
    msg.theta = 0.490030593262;
    msg.psi = 0.730614709695;
    msg.vx = 0.00148840814857;
    msg.vy = 0.186578140059;
    msg.vz = 0.844358077418;
    msg.p = 0.909401742052;
    msg.q = 0.380635033207;
    msg.r = 0.115434382397;
    msg.svx = 0.971360211879;
    msg.svy = 0.84084537618;
    msg.svz = 0.230973298621;

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
    msg.setTimeStamp(0.118995757422);
    msg.setSource(39478U);
    msg.setSourceEntity(21U);
    msg.setDestination(24456U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("HBCJFCOBJQNOWQZGBBQWIBKRDKEPMKLYJCHUIKISYANPIXCRRWTVUCAPGYFEZJRNJXYVBMDAJRYLPSYETXWRESHRAYMFZWZCHUVSZVPNZGZDHQEZKBCIFILBLXTUMGUKUXKJRMQXIMOMOPNMPESBLISEFVWFAUDLUFOFYZADNXWWUDGIXAKHOGTXNVQTWVCYSFSPZDQHGDTOTEVQTNMGSTLPVGGDBRPOLTYLJXCVIOMHEAQJDRJOAKNUKCHHQ");
    msg.op = 32U;
    msg.lat = 0.00172116391311;
    msg.lon = 0.0710557827453;
    msg.height = 0.639948266999;
    msg.x = 0.154467404131;
    msg.y = 0.71929419359;
    msg.z = 0.461314429721;
    msg.phi = 0.611304146905;
    msg.theta = 0.841823066473;
    msg.psi = 0.235623700275;
    msg.vx = 0.179768945975;
    msg.vy = 0.0707070464119;
    msg.vz = 0.810669223466;
    msg.p = 0.473190516386;
    msg.q = 0.675901415356;
    msg.r = 0.476180081751;
    msg.svx = 0.728376361652;
    msg.svy = 0.491797486485;
    msg.svz = 0.703773587515;

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
    msg.setTimeStamp(0.880847512003);
    msg.setSource(14950U);
    msg.setSourceEntity(238U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("BQYLTKOUXCHTEJDAWBQYGCMHWTZKONCMMBQMJIIMESROZSYMHSKFPJXISWYXOYAWJKGCHJLSNURTPJNGBGSNYLKKJUV");
    msg.op = 108U;
    msg.lat = 0.10120547454;
    msg.lon = 0.815780793222;
    msg.height = 0.152598945147;
    msg.x = 0.859557979236;
    msg.y = 0.119605583912;
    msg.z = 0.624622940174;
    msg.phi = 0.696057227131;
    msg.theta = 0.303224145606;
    msg.psi = 0.00530146768368;
    msg.vx = 0.150943704105;
    msg.vy = 0.400559178275;
    msg.vz = 0.333957330119;
    msg.p = 0.278074695792;
    msg.q = 0.0494067346301;
    msg.r = 0.585539261663;
    msg.svx = 0.890744756816;
    msg.svy = 0.409549380348;
    msg.svz = 0.641192645008;

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
    msg.setTimeStamp(0.0243376430111);
    msg.setSource(7116U);
    msg.setSourceEntity(204U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("LFYAGFTVOVOCVLPEQRHWPSWNLOFMRZBLCRMGURPZJVDIJQGPEQMGIJIZBOUKLUDNKDJQTBFHMLFIIXUNHVB");
    msg.type = 28U;
    msg.properties = 19U;
    msg.durations.assign("JYPUHVEGORALCYKQSFZZXLBOIZAAPUNFIIEHEEPTUXLMLRZHHQVIDVXVAUKJBSQYKNGOGEGFGADRIOYSDAYDHXFTCBWRKTNWXOGJKCPFVVQGLWMPSJHBTYWFCXKUQWYARIOGKUZGSLMPTCOLZCTKNJEHWFONIERSEHJNVHXQDJYAFDXBCWJPASVHMNIDKMVSYLTEPDRQLKZRJCTNNDZBDUPWBMISPUYQZFRBMQTUOWREXVAFQNCBMOUJ");
    msg.distances.assign("JWMIHSOFUIKGTYMMDAOKUADOREWTEVVKBIESJAWUFUHFQTVFLQQSMCQHPLCUEAXPBNOHIXRNXPAILDDMZOAGWTLWGNBRRJHZDNJUNWCQYYQRLHRRHCDCOSBIETKVQZZDTKSZLTBWCZDVCXYR");
    msg.actions.assign("LTPZHTRUVYQAHAXZWKQIFRHONDLBKAYBNMCIEDBXKJVSMJFTYWQEQJDPNRKVFNLGAODULOUQOVYPYCRFLOURUBQFWAJBGHPWQNRHAJGNZMLCZOAEMBYKSDXHJCLSREFEAWTCZEJLMAXGHSOKYZIXSWMIEPWVMUGYIWUNDZZZYJGHGIDTHSCIDJVEGFTDKPIJPVBECGMBLB");
    msg.fuel.assign("RSKQWVMRRMQCJHOVLEMQMOGIVAWEZIRQNMWBZPHUJPPZGEENJCANIFMZZSTDLHTJSHPIGJQSPPYAEZLKFIZMGGLLAWIQPGDJOTKQCFIGMXXKWUYLWCRITHZWEOVBYCUUYOFQXDKCNYFESBJUDSCATVZPOBAJAYEXXJDN");

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
    msg.setTimeStamp(0.267870055197);
    msg.setSource(62766U);
    msg.setSourceEntity(246U);
    msg.setDestination(52843U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("RJYKMTDVGTEDXPJUMFPTWUSVWNICQNBOXSOFFZERNDXNILJXNBMZMNVRNBXBNSSGTVKGAHAWQMLUWRLEOCJMRDHHSBSNOJMKOOHZFEPIAYKFLPHLCRKPLLGCLPEOSELIYAKEUZAVKPLEMKUQP");
    msg.type = 52U;
    msg.properties = 125U;
    msg.durations.assign("THOIPNHFVRSNZUOKMDDZHAABOMFWPBJUNUTRMKOYTQQBNVXLVHQIPRCUFBLDLAZBWUCTMXWEYUHSSWCWTEZNVZQUWQCVOGTSHFBGQXMNJFGYFYSAAOAYFYFOPGTDRSQBNKPJCOEXJAGLOMEEPLEWVPEIQWDHHJKDAGRSDUIVBUDYBHFKMIJGPYZFGLVXPVYORUTZIJNXXXIIEWKLNZPLASDGIATDQKXJTSMLMSGVCEKWXNLCRJKRR");
    msg.distances.assign("YWXOEDGUDSKBBZHOGDFQITAMLCJLJLSCHNEXTTDRZEDLWXXPKEYRASJMUXBUORUFAWVBHJIOVYACDFPXGFTIGNAJEYTCPTMNZGUQXSIUGWPBVCYYPBJSHAXWWPEWUFHIBHSKKETZOEESGCDDYGANWOZXMQITJMCSVKQVLIMDJUVWBVEPIQHCZPLNRRFCNZOPLSSKRNBQOKXPRMJLMFCOOYBQJLVQKNZATKNRNHADLVUFHQFVRQZZ");
    msg.actions.assign("OXQUZFYIALUHVNWUBTTXYOCYKBXWTEFPSHBSYNVIEMGLKXGYXIMOQTJGBWUZOYUEUGDNRMMBTXHOORGFIKDKADDRPAYWWOMHPCKJXXFZTNQVSJKCTZCZPMEQJFYCKXWPKEZLGSG");
    msg.fuel.assign("KTKZBGDKPAYYPSWXQOWHIGVBQOYCKSPNTHCJDNTJPTIDJXVKSJRTGKXNBUCMTWMPYHQUBLJIEVRJUHZOXLDWFEZOSMEPFQAWBRMVKDXOCLYKLAYYEGCZCDDAQCWBIXUJFYYLVGRJTRJMZFILLFNNYRENFOAWAMEOTNMEAIMIVHDSCWAMIQRXQDPRGINLTZXA");

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
    msg.setTimeStamp(0.92277121548);
    msg.setSource(34891U);
    msg.setSourceEntity(127U);
    msg.setDestination(41401U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("YWCPOJMWZNTPKGCFIQMGEICKBAFVWAALFRUWPYBKDSCWSNTJMZOUQDCHNJMLOXWXSBLFDXZTOEHMKDKCJJZJPUE");
    msg.type = 240U;
    msg.properties = 127U;
    msg.durations.assign("AJKRFCWUQWDZLEUDFHKNCMNJLBDXYWLVSXPCEOLZEZTMBDAPNOTWZGUWBHTIYFEQQFMVTPGMECOZZSKBOKKYIVXPWZADVJFECBVXICGBRYCSVOULZYMNOAEXRNLGNKSZNJWKQHFQXSLALEXDHUNIQIUYIRESDVHTJOEHKQGTSPCWSPFQJJQBRLNSKDXRVGYBOMPTCIVPHGUAYJPVYSRGOAUPUHKXRORHHDQNXTMBFBTWIJD");
    msg.distances.assign("STLLYFECEFWFDBAFFUQLQRNALLQJGZYXYFFOGMUJDTDXPTBQMSWBBMXEQZCWJNCTKRHZFZGIDOYVXHABGIHMPONKBMWHPDUXEHPGPNYQMMGICECDUROUWIOJJZOUDKYANEHFEVVXPPBEVNWNWSSPXAUSJLTRDDZHISIOUZRJCZYLPYGRYVBKNZZERCJNUYCWOVXDSPIRQAHQVXJQRKCILUSRSJOGHAQ");
    msg.actions.assign("YESMDQIOYLTAMPCBKHXHFJRROMVVFRNZCKTHPAUQTGMKVNNREBOLYGRSFHAIGTDJISXIGKEMQXZDAPRWSAVSJYKOEPTXUNDIOTQNAYKLKFEBUUTYFHMOXRWHLMVUEESWCGNUEXCIZHYVBSJTDCWJBVBPUASCIDYGELMFYKURCVLBJBBIHFJWVEHWQDNBZDJQPRCILUZMHZMNFXOGOXGYRFWTNOQSPDZJXZSWTKLQQXPOZNKUCGWCDAPAFJ");
    msg.fuel.assign("EJTIVOVKEULBZRHRQNHYBEYDSUAXIUAMIVOAOKAATROWKIFXIQUOTMLWENYEQLMQCXTAGLZJDMBNZDTPROSLECYMGZOPPEXNUDFYJRFMVE");

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
    msg.setTimeStamp(0.95816748724);
    msg.setSource(48778U);
    msg.setSourceEntity(187U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.397924836754;
    msg.lon = 0.965918203219;
    msg.depth = 0.591907397169;
    msg.roll = 0.143017932347;
    msg.pitch = 0.422937656902;
    msg.yaw = 0.502857221836;
    msg.rcp_time = 0.763261765941;
    msg.sid.assign("KPHJFTHCORSBUVUSYNQZZCTEJIPURGJLHYBGDCVTWJEMWNLCLCHGNTPLCJIUEASFWXQIQDVYLDKJZSTQOBXPFXYIEJHFDYGXCMCJYFOMLPWCOZNVWMBPQJMIQGXGFAJRODIGDHOAVPPTKAZOSWLYODPNBRFXYZREUSOEWNNCBDGQFQ");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.0574671733772);
    msg.setSource(56112U);
    msg.setSourceEntity(237U);
    msg.setDestination(63853U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.327452521957;
    msg.lon = 0.895180745898;
    msg.depth = 0.208484673385;
    msg.roll = 0.276246045193;
    msg.pitch = 0.418831598441;
    msg.yaw = 0.709921648221;
    msg.rcp_time = 0.490647936863;
    msg.sid.assign("CQNUMNWFDNUTUGCWWTHEDMQZODCNDTYEKBXGALRXMQAUXSVBMPSDQIKQNBRQPCYUURXBPSRNGHUTHWZWPABRIRLKAYBLOFAIPNKLNYDJEQKVHLPZTGOLDZGFJVFYZZITWYFZDVVE");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.247384811764);
    msg.setSource(10745U);
    msg.setSourceEntity(99U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.612498895276;
    msg.lon = 0.229370087892;
    msg.depth = 0.364413409472;
    msg.roll = 0.872181660052;
    msg.pitch = 0.437646970286;
    msg.yaw = 0.826835706259;
    msg.rcp_time = 0.273258253779;
    msg.sid.assign("GMIPQDHSODCRWRKMUJLIPHHATXWVIHWDVXRSGOUNYGNTSIQCOLUWTLJBDDEBSFJNPQQGCLPGVQYAOPKQYHQWGRXBMZGLFATTTONSJZE");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.500120556021);
    msg.setSource(4474U);
    msg.setSourceEntity(200U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(81U);
    msg.id.assign("YIHZIXIKWPTFNRMCAROVPBNDQGONBUSXCLWSUKTMIFMWBBYZOFGUFKKZPSACEQJITJAUG");
    msg.sensor_class.assign("HAKOCNXQQYVXIZQSWCADJCZRMSFGY");
    msg.lat = 0.807549740124;
    msg.lon = 0.835155444682;
    msg.alt = 0.232363988213;
    msg.heading = 0.789984204792;
    msg.data.assign("SGKPPXIHDKNELUPDKGEJEWCIZHMVNDMTAJZAACVFQTRYTQDKOABYNQWQFGZBPGANCSBOCDCMUVORTHIOSARKCMJTXUTWPLOFIJADGGNYEHHFJKCULBPXLTZGHNILRFXQXOXMEAXZVOMOPCYDNQYGWCWCTPRLRBUYWVETZBLABSOZVOJUFIWSVXIMLFPXHJXNSETRAHEFSKVQNUEMZWJDVBBMYUDFUIMQSFQKVJZHSSUPIYEKKQ");

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
    msg.setTimeStamp(0.265197212097);
    msg.setSource(10703U);
    msg.setSourceEntity(15U);
    msg.setDestination(12357U);
    msg.setDestinationEntity(64U);
    msg.id.assign("NMPGFGTKXYSATFSDDCEDPGJVJZUMKGAVZLYAHTLOYCQWHFDROPPAFQADFGMDLXAQMCRDYUAL");
    msg.sensor_class.assign("JSQKVTFVQIMZXTZHIUDCTADNMJKJDPWHPWZKRWGUFLLUVZVBXPIVMMNNPFFPQCGOMNGZMKTPQQZOCAEIARFNHRGTCJQAPIUYHDZCPVMDSMDTHWXEQTJSYOOVULYYICXNRBKUBKYGGETXEDYKSRSUEHGOXSCPLFHXRNBFBIBNLIOHWEGMSYBNXKZRAJAAAZWEUJVGYEZIVWWNROSQHLKXRLMSFIJYOAHLJGEBQJYLPDUBFCLRAVUFSBKOCWTDC");
    msg.lat = 0.187043186381;
    msg.lon = 0.489205244822;
    msg.alt = 0.838401068466;
    msg.heading = 0.741917306241;
    msg.data.assign("HIUJVZTCCDLIFSPHRCYIKBKGTFDHDNAHGJKWQOSZEFXKDZXZQOIQCVXMHXAVWZERXVIRRPJQQNLWZXABLCCPYGUUGUUMZPWYTNIPXTQLDMLGTWWMHEAVRRMRYYWSRFNWLHTKBAUKYSNEKJEBAPLEQEBAAWDBOZSOTTVQQRYFJMOVBCYGUSOIVPFCSJHM");

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
    msg.setTimeStamp(0.146105656253);
    msg.setSource(51760U);
    msg.setSourceEntity(10U);
    msg.setDestination(28667U);
    msg.setDestinationEntity(151U);
    msg.id.assign("QUMXVMXARKOCQBSJYIMPATLMSFJOFXJYTERQCQENCGPYKVEZTLFYNULWUOLGDCTNEDXICYFNADCTQWRJNKBOG");
    msg.sensor_class.assign("XOSIPVWXWGFOTMSVIAQFZWFNRKYGGIYJADRSCEGNWLODUXXBZMBTBCFEHYKTHESCJDPJXIHNSQCEPSWGUDTMFEOKQNBZZWOZSPVPZNMXKJUJCBYUEWNZPCLIWQUSJJVRHLULVYMSARVNVEKDYIWFATXFXGHXOWYLQQQTVDZJPEGUUBHRHDRV");
    msg.lat = 0.254422300272;
    msg.lon = 0.817683791012;
    msg.alt = 0.922900977194;
    msg.heading = 0.600880770417;
    msg.data.assign("HZTTGFSMBUHVTLKBRHOMHTMTVCUSBNOTHLKFAEVWAHAQNEGFDNMKLMOILKCJVBFCCNDJHRKZPRAEZQAPGADOUMRICYXBWUZWYTQXTEJNYDCUFDUXRGRCKOJGVWSMWBIAUWKZLNEYUEHVGXLMYOWEDEZJFIQIWSYJWQXRZYSQPLXZWJ");

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
    msg.setTimeStamp(0.749416771411);
    msg.setSource(30312U);
    msg.setSourceEntity(17U);
    msg.setDestination(50880U);
    msg.setDestinationEntity(6U);
    msg.id.assign("YIDXGFPOCFXHLEJEAVWTRFLEVJXUTOMGVLNZCVBBBFDAHFLPHDZMPTZYZYCEGZGTJACSGVNWMNTISONIRRZNGHVKXUVFNMJUAPHB");

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
    msg.setTimeStamp(0.508476969576);
    msg.setSource(38733U);
    msg.setSourceEntity(209U);
    msg.setDestination(59578U);
    msg.setDestinationEntity(98U);
    msg.id.assign("JJBMECDJIMKDRNRSIVLKYCKAZNUWTJFYTXRQCUFGKHXPMQBMUOGUMXKVMOZXVNILRCEUCGIXIKJQOHKQYGSBZLWYOCYFWOCVVZVDBYEQFNROLPHYUFTFOSANFGERPPMEBJAAZXIRDGLBWH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KGXVGQIQTJELWHUSAWIJZRBRHQJJICTDEZRSMUKMPXUPLOHHLSYTKKOCNNZNQFOOBQLWJROOGUQRBMGACVMCQYPIASUDHKQDKGWWCRSPAXDUHDFETFWNBLQDHGXDGFSTLLAVPLKEEVXANEYSOADNWAWVNYDPMPVXPXZAUQUMUWTFOMZNCTICYXJZGCSMBFVGJ");
    tmp_msg_0.feature_type = 34U;
    tmp_msg_0.rgb_red = 185U;
    tmp_msg_0.rgb_green = 246U;
    tmp_msg_0.rgb_blue = 248U;
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
    msg.setTimeStamp(0.39283827359);
    msg.setSource(17362U);
    msg.setSourceEntity(115U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(80U);
    msg.id.assign("HVLVIZWVLHKNKPTMRDLQVPVSBGXRLZSOAZLGHZZQJMPCUJBCVJWARXGPOTOSAXCKUSDPRLADSCWBFDVCWWGTMJDDQTUVEOXAQSUYIYQNCCNZHTIFZFIABXUKDDETXIOXUYHFMGGYWIOPHALEFTBRZQNYFDPJNJEDPKUNRWL");

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
    msg.setTimeStamp(0.185813542839);
    msg.setSource(29434U);
    msg.setSourceEntity(61U);
    msg.setDestination(11450U);
    msg.setDestinationEntity(35U);
    msg.id.assign("ZLBTRDDMEJVPAUFINERRXFQOJFLRATCFRKUSWHQSCAMNJDBOBXEYDLDXXOMWVSAWCHONIVCKXPTBAEJREAKYPBFAXOLNDXGGYQCQNZCHZAEVLVKHKNWQMYMHWBFFGQDZFJTHSFOUBRPWTJWUNQOYYSQEUKISZWZBJVISLQSETTCAHVLALLSVEGTMMYIVQZJPPRGKOBZGPCMNIDCHKEHZUDVGPNMRUNKPGLYXWDPUOJGY");
    msg.feature_type = 87U;
    msg.rgb_red = 252U;
    msg.rgb_green = 231U;
    msg.rgb_blue = 240U;

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
    msg.setTimeStamp(0.686720248731);
    msg.setSource(35159U);
    msg.setSourceEntity(203U);
    msg.setDestination(32017U);
    msg.setDestinationEntity(211U);
    msg.id.assign("QAVVXRZKZMDANZJKVSWUMOLNDJVGXTOWMMPPHRQVBPSLEWCCZFKLWXCCFYTGXPKUUDJNLAKPLCRRBVLPTFHMYQGRSPDUSMFDKAHWXTIFWMTQYRBCGZMLBOEOINBHZOEWSHSONVIKXIGIIUPGEWFGDTFRRYPLNEKIQJBCGCKFYGWWREQYOAEJSDVZEZOBNTAZQHSLQFVVQBTJ");
    msg.feature_type = 42U;
    msg.rgb_red = 141U;
    msg.rgb_green = 94U;
    msg.rgb_blue = 42U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.749870610259;
    tmp_msg_0.lon = 0.336897867135;
    tmp_msg_0.alt = 0.830517530598;
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
    msg.setTimeStamp(0.277538686714);
    msg.setSource(204U);
    msg.setSourceEntity(124U);
    msg.setDestination(46256U);
    msg.setDestinationEntity(90U);
    msg.id.assign("VYEZRYFBADPZJEOYWNEKAVTUBVXHLVYUFIFRCVJHWTJUCGRRHMMATZQTCADCGSSQJPGKPRJBFQRVEUNISZZZBUCWRDHYYWDHXADIBXQTWZNMIJQGLBVPMNNRWOAZBGEPXZKFERKFVLVLBEGUSLTDMNZELJWCMACXPXILKSKORQTINBLMGHKQNPYBUOKFWMFIASD");
    msg.feature_type = 86U;
    msg.rgb_red = 151U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 97U;

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
    msg.setTimeStamp(0.163358007924);
    msg.setSource(15658U);
    msg.setSourceEntity(23U);
    msg.setDestination(41797U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.00169534492525;
    msg.lon = 0.647410434439;
    msg.alt = 0.986219050554;

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
    msg.setTimeStamp(0.559468778351);
    msg.setSource(45412U);
    msg.setSourceEntity(178U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.607377564747;
    msg.lon = 0.966010725935;
    msg.alt = 0.725491833734;

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
    msg.setTimeStamp(0.804717626322);
    msg.setSource(12624U);
    msg.setSourceEntity(127U);
    msg.setDestination(40816U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.806675046948;
    msg.lon = 0.170994088623;
    msg.alt = 0.769988582953;

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
    msg.setTimeStamp(0.678710807551);
    msg.setSource(23505U);
    msg.setSourceEntity(221U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(137U);
    msg.type = 207U;
    msg.id.assign("ATSIQXPMETHMEVNYWAKOOSEZNOABPBSVLHHIGEMOMEFVGNZDYHYRSQWYJHYDBIKUYRBWZBLPCLZSLPRINZWXYGKTXOUHJLSNQCYXVVPMVKKDNCCUEJXJUTZCUEGIQTQDHDGVIISERTLABFIVZSR");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 27U;
    tmp_msg_0.x = 0.526048561798;
    tmp_msg_0.y = 0.171022233705;
    tmp_msg_0.z = 0.0371696131094;
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
    msg.setTimeStamp(0.970860526295);
    msg.setSource(31556U);
    msg.setSourceEntity(118U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(168U);
    msg.type = 122U;
    msg.id.assign("LTUGDKUSLXBQDSWORYGCUYRXLNQCBIKZPSDVBVSHGGTGMVXOOFVUBOETRCRBECODNXPQUWSKTHRMPJZBUWCETAJNNWNSMPIHWHHWRZMRXEJCZQVEFDASJHUPFJMYHEGMJCHWKUJZIKOSKYSQYTZDNFANSWYLLIBAIPTAPBVFJELDATIOXFDOFFZWNHKGNKQXLKXUPAQYEUVCMAKPIXJCDBREXVJ");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.673873041752;
    tmp_msg_0.speed = 0.876089432095;
    tmp_msg_0.turbulence = 0.400888469574;
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
    msg.setTimeStamp(0.0734645478171);
    msg.setSource(16537U);
    msg.setSourceEntity(89U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(219U);
    msg.type = 1U;
    msg.id.assign("UVRDEWJDBYXFFHXDQIMNKAXIPZEXSLRDVBLEQTSVXXFBGZWDCVMKRRXLVWAPBGONFHHLTYUBQHKZZTYNSPYKSGOMEWQTDISBZUSUNPDONAJWJIUEEQOMSCCCKICRROYFGTRURBKPOCUPLJYRTAHCEFISWJZZPJJMLJAIDYJMLECF");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 32016U;
    tmp_msg_0.x = 0.0753424862498;
    tmp_msg_0.y = 0.28353575501;
    tmp_msg_0.z = 0.258455501821;
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
    msg.setTimeStamp(0.499632322568);
    msg.setSource(14849U);
    msg.setSourceEntity(190U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(252U);
    msg.localname.assign("CIDWYTXTFPEDIKWXANFGNIGZZUDTUQSRVURHXFVBABVNJTUWTCCDRNLYAPDHYPWPYZAXESLCEDWUQSY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OUJOJYIBRGXMOZNFLKYHEDSEPJEBBFICJIACSQEBNRBBLFDPBFNRSLHJKXQQBCDMDOGJCUHSUZNQVINX");
    tmp_msg_0.sys_type = 154U;
    tmp_msg_0.owner = 54796U;
    tmp_msg_0.lat = 0.477808216885;
    tmp_msg_0.lon = 0.771870495263;
    tmp_msg_0.height = 0.00854796258417;
    tmp_msg_0.services.assign("FLTOTMXLUGYMETWDAVYAJGKTVHQIEQCZYBLJXKWQMIDOEFVXWHZZYERIOTLIIKUDTRQMIHPIXYDRZPPLAYEHQDEJXKZYYVJNKFOYFRGJXB");
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
    msg.setTimeStamp(0.496685533978);
    msg.setSource(63532U);
    msg.setSourceEntity(232U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(136U);
    msg.localname.assign("MXPIWFNEJQMKKJAEUTQVPFAUAMUZDRUVZLDVSMABWVCNUSKVFNQCULJZQIYYSDLDICTPGDRTGWXCHSXWBFTLXEEGIUKQUOMORPOBESISPKSVLZYMLMBZNATEFHFZXUXZXLDSCBEJNBTOKKNBPNLTAIQHBGVGASXYKROCIDISLZAQETCOVAERJPFMJNWGYFQWJKOLWCQIYCDZGTJFRBBFAMWHVYGHUWPOXHGIVHGRJDHO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QUJWHCWRZXAVPRZUPPVZMCUAVGETEFDEGAQPWNOUTIYHDG");
    tmp_msg_0.sys_type = 101U;
    tmp_msg_0.owner = 16314U;
    tmp_msg_0.lat = 0.526423107975;
    tmp_msg_0.lon = 0.351091344934;
    tmp_msg_0.height = 0.823166646761;
    tmp_msg_0.services.assign("MWTNDGDGRXQZWLGRIZUHPDUANLKFWROYBQEDRURCZNNYCJJHVTPBLBLBZXMBIDKKFFRCTOPYAEEAMNVOHPGURLFOJMVUTPDKVQQAVJ");
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
    msg.setTimeStamp(0.550318970301);
    msg.setSource(52336U);
    msg.setSourceEntity(187U);
    msg.setDestination(46407U);
    msg.setDestinationEntity(96U);
    msg.localname.assign("NXLVNDMAWPRZFJOYEUYIJANAJISVIECLKEWUDPHUQAKZVXALMZYASTKYJWGMTQGEXCBWHYPXQSFPTYAMRTWZIICGFGORSLRELDTOVBHCXZYDCTTSDXXDMDNNBUHNJYNYUUUVSAFGZVCLUPJWIQLICWDPONIGQZBTFSEHIHAHMKKTFOOQTZXRMZQFOJLHYIWXQQGMLBSDKENPGEJGXONUOBPKKEKFCSLBRZWHSVRHBAPQC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UILYTZVGIUNPYBSWXXDZFUDNBLAZRIOJQQRSUAKXNDUMSKISGQKTQKWHDDOBNSKIWMPYEHDACJOYIBROUKIFWUWFGJPEENVESRXJWLXHYQPJPYVWWAIEFW");
    tmp_msg_0.sys_type = 204U;
    tmp_msg_0.owner = 15113U;
    tmp_msg_0.lat = 0.546093963992;
    tmp_msg_0.lon = 0.482089188102;
    tmp_msg_0.height = 0.108803233988;
    tmp_msg_0.services.assign("VSMTRYUBBIGBXGDSVORISTNDBHUCMCVGCJHSEENBSWCYFPRXNNAKRDMYUPSAMSWOQTROAYLMKCRGZEHVUZPDLAIQLEBQXPVGCPMWIWUQOVTXLKFWAKAKXAADFHD");
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
    msg.setTimeStamp(0.156971277135);
    msg.setSource(57103U);
    msg.setSourceEntity(150U);
    msg.setDestination(14463U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("FPKIZZLIQTIBCUEQJAZXEDGJPUOXMWTBANGAJUSMRRQDQXMUIYITVWECTZZYCGDSOKAKWXPJAWMQHNODBCOPWLHKGNGYZKMYJLFBWLVLMVLAWKFXOECEFNTSUYDOPTUDHLCPFTHSOPIWIHCXWMHYQVCCGIIZVZFKLUTMGBBSNVXDXHQBERSBRKVFDVTNRINYJAKZ");
    msg.predicate.assign("WFNRQGMYUSFEXBYSOQPLNXVXSBQRABXQLGPUJVDCUUHHSKLSRCRAOJEGJEHPBWETTYNUMZWQBVHVOGRYJBCZBDXZTKGWNIO");
    msg.attributes.assign("XCTNTPTNWMJZFULFSYLFBGKIEOJKJOIISFZWPOLQDDTBIUURRVMNYDWWBSCGBTRFSCAJHHRCWGSFAROYUYSRPZFPGWDKRKLX");

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
    msg.setTimeStamp(0.108389454398);
    msg.setSource(43583U);
    msg.setSourceEntity(96U);
    msg.setDestination(63867U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("GVBKEGPPZIBNFQKSBRFONNXZJBNMDSOMEPXVWMTKCVRNYTAMKXPPXKUMAZHHX");
    msg.predicate.assign("USGIBNEITPZKBIJNTIVOGXGPCKLFJTYYMDIUSLYDFXKFQONQXNAFKCXOKTENGSLJHHTZULAUWBOMSYWNGZVVTAPELQUVRLPGQSMJWRCECMZCFBYFNCZMDSMIKFQBEVPIGBUWWPLTCOVQBUDADUXNZOCPJYSZRMDLDHVOYQRSHGLTSRHZCA");
    msg.attributes.assign("DTSHLUGAMFNXCYWKFMRRHWWVEZSHDUPTJBUUXNTRKFTDQBDGNTNMMQETPQOLLUNJBQJXYJCMVXZOXVMWT");

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
    msg.setTimeStamp(0.227070620559);
    msg.setSource(42506U);
    msg.setSourceEntity(39U);
    msg.setDestination(5960U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("CCYLAFVOBORCNMQARPPEZMJWEVVLIFKHNXNOTGZZNURXCRJUYPCQXSWKFWSXNKPUYGPGLOBDKBJGTEWMPPBMLXIJFHBDEXMILSQQGCADNTBEIVHSBLKERVGTRDQIJODBVDROWIQESKKQIKR");
    msg.predicate.assign("GNREYZANXOLHFFTXVJACZUTKKPZJRKYYGYNWEJGTFKGXLQVREUBLHAQCVMZSHATSXOLMILCJSIPIJKWQEMFRNYPIGLUCTDAOSSJQFWMYNDZPYCDDDMSZKUVPGLHUKUORGMMDBWZFCJVXCAVMTJTTUHBNZXACSPWIJVEIOGFBPOTLWDIUUYFBAZSQLFNW");
    msg.attributes.assign("NYISYWCIUNJMTPWUNSRPBUMLZGEUCEBLXWVRTWZIHKVEKZWDWESKFRPHYBUCSJZGBCJDKMHWAIYLVVFYZQEKSRBDAWYIXYAPGNQLLZTQCMENGBJYXVFKHQSCDXQIAGEOWCAAXLHUDFIHJJDNBOTAKFPPLLFHHERMZMPMRJMHOOTTSDGPJRVFBZXSVDV");

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
    msg.setTimeStamp(0.531779773666);
    msg.setSource(34450U);
    msg.setSourceEntity(2U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(51U);
    msg.command = 59U;
    msg.goal_id.assign("WFGNNTTCJLFBKAOPUICDTIZGRNHEEGWDAEHIRIENIRSEEBSSENZBZBFWCVXZKOAFFJOVGPUTGMFGWCQJAQAKCHRZQYCAKCPUMHSZNLYTUITKDJLVYTZENJHXFLSMBQSNFMGTFHLXYVVUPXAUSLXODFCYBQKEUQBBCKXZUNWBJAJIDTKUMYVLYVLVRRXBSAWLWTVHPGOYMJGLXXQHMIP");
    msg.goal_xml.assign("NQOAAIEJLHKWDUBULVHTNXPGDKEHDYJAJCKCIHVIGYCMBCCPYLRWPVVFQLKSQKQYPDICQNGGPTVTHDXRAOSNNWXM");

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
    msg.setTimeStamp(0.920362942852);
    msg.setSource(33347U);
    msg.setSourceEntity(171U);
    msg.setDestination(41513U);
    msg.setDestinationEntity(46U);
    msg.command = 176U;
    msg.goal_id.assign("UZUAQUMUIQJMSPYUSMVJTHMVVDEVOWKOJUIRZXWQLGWXUKAECZ");
    msg.goal_xml.assign("MUFBPDLMWWBLEHBZZRCUGFZKAULKWRVOKL");

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
    msg.setTimeStamp(0.506151389205);
    msg.setSource(47732U);
    msg.setSourceEntity(99U);
    msg.setDestination(21178U);
    msg.setDestinationEntity(184U);
    msg.command = 98U;
    msg.goal_id.assign("RWUVEJSGOOBDGMZRKKLOUANNMJJJUXGRJUCDZNUIAGIYIZBHBYYOQOFMGEBWZFDYWMTCZDRUVHPAADULBZNPZBSSOWXLSSSVIJVRJTLJWNPGKXHYUGRTINSQCTRKABKVVGPQMALHCOXZAYRKJYSRBLVZHNNIQWAFWFBMFEXQWEVFY");
    msg.goal_xml.assign("ALEPOLDVHOCGZRHGCZVSQPCIZEFNBAMOPUNHSFZHFQKBVKYXRSSSBAYWBYLRCTIPGRXIEQQUYNPEVAFMMSGTFLFQXZWWJKWTITRHZGUNCUGQUYPSCRVLNKJNXKAHLXJOREATXYIGQRJKBCWHEKTDBBLMRYWVKWXMKDNTOORQJBJGUUTNFE");

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
    msg.setTimeStamp(0.222438763058);
    msg.setSource(5802U);
    msg.setSourceEntity(231U);
    msg.setDestination(4456U);
    msg.setDestinationEntity(85U);
    msg.op = 62U;
    msg.goal_id.assign("MKUDCACRLDJVGNWUTXVUDCQHJHNHSCKEMWLYGASBEUUUODBNQBSPKRVYGFTPPRHVRQLERKMZIKWCZALGQYKYJTZSSXGFDWXXTEWIXRCIBAWBGMNJGAEAIAYVLSIPVGMPTCBRECOFETHPUPBYHQLKLNXNYUJMMVIEKFADUXNZPJRQIJGJLZXQZSI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YKRDOUGQUESRJCKYORNIAXWHHIWOEKLSATPYDLKHEQLTMIOIXGBIGUQHVAOJNUFVZDLLXXTQQIJBWDMCUCQJTGYEVLKDAUYTFCHKEUFBNILWXMTVFNLLYXRIZAMMDAZYWYAWDVVKXZPWTMNDJPGJVZERIYGFSYHHOPEFUOBMAKDUFBVCNCNQPESQSCRBGWRCJMSPTPXOJBNGPVHXBSCSRFJHZQBKTPECGZTFOAMNNHUVMIZZL");
    tmp_msg_0.predicate.assign("EPSZKYYLXYVDNEHWWVXHGCQIHVDRTWHBWNIJUAYTJZJEEUWKLZRPLCRYFKOMMCJUCQNNLWGQNBTYSEUVAIOKBFYVDAPBJPISRMNX");
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
    msg.setTimeStamp(0.306986320074);
    msg.setSource(65007U);
    msg.setSourceEntity(6U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(96U);
    msg.op = 96U;
    msg.goal_id.assign("GYWZEMZXULSJRVNSTDEZMAQLFJEXSQANJCMZIEDUOXLDHMCNYGFVTHCRZHCKMZUWSTEJBLDRPXAIWUJESK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GJBEQTKLOPCOQJNCQVWCHTPOHSLNGJXJYDYGEVJNBCNBJOHRILVGHULORQUKEDRFOMBWAEVCUKTZITHPYHQLZBDQFER");
    tmp_msg_0.predicate.assign("CUHOTPWITKMUJEQNPAXSJMUWBGMPB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CWSMUMGNLQTXYEYRHSOFDYDVZWVCDNRKUDXRUXUYOVVAOAVOTFWXIVZXUUNPLNKJYNRSNAEFIJFNUMGFBTZGPJLEYAAYXMHQDCBEJSTXMMJTHELYJILGOXCRRHPZPPAZKTKKAVJDRDHEPLSICZGLOWTMMYFQNPKZWGIEQBQTJXHLAGOPZNTHCDOIHVBHZGQWZKGABBIEQBALUK");
    tmp_tmp_msg_0_0.attr_type = 245U;
    tmp_tmp_msg_0_0.min.assign("YKZINAEHYAKIWBPQVPOOUHOVSMROMEHWCUJKTYVYREZFGUWISPZGABCKBYDSHTZOEKRJRJERSBFLOFMXUQPGXHSIEQCXELNQPISBKVQMMNYIIRXCXDFBHZVBLDVLNYLOLIFHUACNKZPCPTWRCGXLOVEZUIPAMDNHFTDKJMMDAUBTNJGVOQTEVFLTRJIVDPROSSWGDYTHMXAWJCXUQKGATTJZLAXGFKNWJCAFDJGW");
    tmp_tmp_msg_0_0.max.assign("YFYYDJKDBCWVPFFMZOMMGKIGQWMPPMHMKUFNUJCOBZVJTYWPAGCDUVNMTDLOAGVEHGVXQWBHLJBVXNBBJXRINDYEKSZDTIXOAQHPVLNXBRRTFRPJMFKJLQUUQZOSMTYCBSYOGUKDSAXCZJLUGAIDEQYSOFVEBLWLNZAVQEETSNIERTABRHZHCOZICHTFRKPPIWXPNSUPXSIWEGUJCRYIHZWFGCLTWNXRKKJUXYITSQQNHEHEGCAQOADMROSAZV");
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
    msg.setTimeStamp(0.602009679553);
    msg.setSource(17661U);
    msg.setSourceEntity(102U);
    msg.setDestination(6411U);
    msg.setDestinationEntity(231U);
    msg.op = 59U;
    msg.goal_id.assign("EAXDOSVMTHBGNWHMTFEWDYEIDOAGVHBGTDOPBHKECIL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SHUOQBZROAIRKKIWBBUXCJKFINCDJBXACDRAYWBGUCHTWZVKRZQLDERJODNFVREPPMEDLLQEWHVFFNHQJWKSSZZYLFTSZHRTDQNOMUWZXFSPUEIFXREAGDNEHHJJXMBGVQKUSOBYXJWNTFDTQNCW");
    tmp_msg_0.predicate.assign("LGJCSJJEBXEHQZECFEFVIEFWPBFBZUOLUKMQUHDOIUIXVATGJCRSPDORBSYRDNAVWTCGTMSDDKMRHZMFYGJVCIXJGYQIENQZHBPBOLASZWIDYWNXPWNSVMUKPPLRHHTFGEBGXTMZJAIWWYMZMXPHCAVKDYDNSGXJZYCKLRYOQWNTSEHQFFNRGCKVAXAHNANLOKCFNBUKIZOFIRIZPVUKHLOTULWMVBVTQQLQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SPQUNCQGOYGJRMGSGRAPHVMOUEJQJMSFXFIJIWBYVZEYNEDFWDYIWLBVLHPTLBDOHGTWXBIKBEFIHNKHXANPXIMACBPMRBHIJYEZXLXTCRHLGFAUTALJTSAWDLKDOAPKWOEUEEZGARTCPVFQFBOBULDNIMMPKFCKOYPMGSICLOACDOQ");
    tmp_tmp_msg_0_0.attr_type = 244U;
    tmp_tmp_msg_0_0.min.assign("TDKCAXMNJSKPGESJDBOCROIZYCVJVBMLJWNVGDGARNQGGQOQMHLN");
    tmp_tmp_msg_0_0.max.assign("EHKXMWULGUFNLEKCCWQRJZUIXZETJDYSAHKSWBAIDIUIHIGSIPWECLAXGFYFASXOMVZBNWOTROXVLLSFOGTFQHPPLTKQDRMOERPAKESZYGBPJOGLAODHIJUKXNQVJPNVNWYVZLHADMCRDCJVFTFTQYJBMMDKBZE");
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
    msg.setTimeStamp(0.929611958835);
    msg.setSource(12508U);
    msg.setSourceEntity(216U);
    msg.setDestination(2645U);
    msg.setDestinationEntity(30U);
    msg.name.assign("FLFXVOHNIBJLRLPQBTLOUMIUMVUWWBDMXJFSCQRGITQXEPKLEPWCYPMIVBKOVYQUZFNDLSDGJFQAKWHRTNEXHYSUQNAASEEJTYWIKYWLMCPDPASHISKVIGFOFYDZYAKOGGOQJDTKXTZBDVGGINDHGREORPNAAZAQRPQSXKBUAYZBDRNGSZJOJLEVCEPNEWCZMWUFMSZJBDOMRXNCYHCEYACNZZKHRJVTK");
    msg.attr_type = 124U;
    msg.min.assign("UAIHLGZXUKNENQAVHEIATMZFBOXXCVGDBDLTESOMHXHIPBDSTYUBQFXGXSHLFJFKEKJSLZSWOXWTDCPGQGRMLOIQKPFZSHQLYMWFEBXTWNPUDRLTBLJOWFFNVDGTVCZYBMXAPINAODJQJNYPZSCUQMCARUBOUYWMUJDRVMIYENCOJJSRKRODKWVIHRRCPNAEIMPPIKUYRLNFCCQQEAPWGKTZOIDZWGLZVVZSTCHHUAVYEWNQSJYAEGRJKVYBG");
    msg.max.assign("ZCSQIGVJFCPHLXJMQUCTYPGHLLRNXKKUJOAWGQSNEMEACLATWMD");

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
    msg.setTimeStamp(0.474292574934);
    msg.setSource(3411U);
    msg.setSourceEntity(132U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(105U);
    msg.name.assign("RLTFDLCVTATMZPFAGZBYBQOIZUVMQYQOATNWEBGSTBXOOAJPBUPJQULPRULVWHADCNHZMGDKLVFAGPMIJXRMKVE");
    msg.attr_type = 151U;
    msg.min.assign("WOKVGMLRPWJIMFVMWSVNMQLJJLCFSOWVJNJCYOPAUIGRKNBTRBMAVVKFTFMNGNYSXSXHYIZFXWBNGOMHPTAGLIPSZ");
    msg.max.assign("NIQJSHPTSBZMDGVKWFLXQVDYYWPVYWBDVDOQZNNHZIKCRTVPUXFKERUFDUYNHKVHF");

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
    msg.setTimeStamp(0.776246136699);
    msg.setSource(41030U);
    msg.setSourceEntity(216U);
    msg.setDestination(7962U);
    msg.setDestinationEntity(32U);
    msg.name.assign("KDOFZJISVNQTQLGNIRBELUGERSBHBJTPVQUNHHPLQMILYEMIDPEZNKBXXAUNVSVPDZIMBCWKFDRCDZU");
    msg.attr_type = 64U;
    msg.min.assign("FSCDGPRAGDFOINBKLFAFKEWYGXDJPQQKUVKXDYJJHFQHQSIBIPCWLEMWMBHYEYJMDTULXYSUFJKTPXFLVAVRHORMHDIFLNMUIHSSPLBHQRIDYUQLGMPAXUCRBZUBVEQZXQCZNGLSYTNSOBONECOMJKNHXKMXAVHIUZRDOGXOUHFWWCZAVKMZYZTWITRGNZVOB");
    msg.max.assign("UICBFTOZRSYDANXTKIRPALJSGPKDJBDGQETFIHDEBHQKFOTCPGORBZUBXKUQVLVALCNWHEYXQC");

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
    msg.setTimeStamp(0.433905616097);
    msg.setSource(25177U);
    msg.setSourceEntity(1U);
    msg.setDestination(6491U);
    msg.setDestinationEntity(43U);
    msg.timeline.assign("VKMPCTQCSDQTBUBCBWTJBPVZDURUGEYMNHLKJNFEWCSCZZBMUXKNANAIXJDLTCVZLFOZYSMVPWJJTBNEYRSRDMQDMFGPNOUWLVPFDHJNDFWYCIUEQZPXJTALDABPHGJPWRSNEPZHZMGIRGXQUOOAVIUSNGHGBKVUTHDWOKVQIFERAXMVKGIQROGHHHILOZEAFWYCISTROLQUFOYQCSEYMKZIABYXSOXXNXBMTJHYLFSRPKFAKAGJELTWD");
    msg.predicate.assign("YGOVRLCLSONWBSFMMROGAIBRHPLJJNCOOTCWNHUCNBCCNZEWUDFRROPAXCYNYIKNKSHSQJJBIUOIPXQPOWTFEIZZHVYUVFVZQRJPPRUAKMEBZRHKMBTXQQJZJXIPVGWSDQHAXTQOWKBAQAGIAFYGUBED");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QRLOSBHLZNMZTFTYKADYQFFPLOVQYPBXUCOKIOWIDCYGSUFZBZFPPXDANQTLTIYPPZTBFCOZWLIPFJGRSEVMLORVAMXKEYYBGPNQEEWKJGKAHXNGEDBLRMEMIEVDUHKLGMXYISJUNJMOADJAURAYFKGURVHXJTHWT");
    tmp_msg_0.attr_type = 151U;
    tmp_msg_0.min.assign("DMXXZODPMHDWJQGUYKRDOXWWYPFGNCJQIOVALYKNWIVJVYENHNHVFACRKEMHC");
    tmp_msg_0.max.assign("KGUNVTZKKER");
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
    msg.setTimeStamp(0.819520866537);
    msg.setSource(45060U);
    msg.setSourceEntity(213U);
    msg.setDestination(64034U);
    msg.setDestinationEntity(18U);
    msg.timeline.assign("HXEVOBNRPXPNCHBBABTLTEHQLUDCOOWVVSHTYCCZHYRNOADGJLRDMSCTXJ");
    msg.predicate.assign("LRXEPOZOIYXBOVXSGFCMHZQUAYMRPLATXAXCDYLBZKIOVWTPFEJNUDFS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FGYNQZUVHAXKEFFWBMLFKYVLIROLQWHYEQYHWYYLKOUMJNEAIIVNGBULEMFTXGQRCWABXMCLENJXTRWRTTIUVBFKMLYZIJRMCLUGNHAMEUZGPGBBBSVDGVTYNJNCIDWZCFUJOGRESMKIUKVQNSHNXIXIZPXZJPXGFFLCRZSJASSCSQJPZQTPJECIDDOOOJHTCAYVUTKHHDKDLPKKRVRGAASBPM");
    tmp_msg_0.attr_type = 114U;
    tmp_msg_0.min.assign("MBKVSNTZWWYTOKUMXMXKXPGGFFKDSMSNLHZKBYRXZMFPPUUAZLOFCQKFQMICYRYUBTBROHTZNISYABMIVTGHONMDSDECROHVHOJLZQUUWAQFYNVROSZUPFDGGISCHMJLSQVYLHVLJITPXQPIKGECOWNUCLZZLJAQFREVQOBQWSVCPCKGANDTGTDFEZLMRXANHDDYPXPUAXPCOKSVBVB");
    tmp_msg_0.max.assign("XUMQIWIAMYHCPJGXYBEBJOXTZZPNFHNSBTIUXDOMSSIJLBYPQTMPRBRKSLDPWHOTZQEOJDWOLCQNXLFAKC");
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
    msg.setTimeStamp(0.0750743329706);
    msg.setSource(26689U);
    msg.setSourceEntity(227U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("KRJSQYLZPAXOZTJGRCPARPVGEUNCZHMAXNMOGHMFYIFSWVMSBJGZEGTKCQIBQGCCOOQKKLWWODDUEHYKAHIFTGYZIFUJVWUPHGMNZMVXWNVDCSACWTZPXX");
    msg.predicate.assign("MJFGMHWUFXIUATNEECHPXAWCXUYIGAGYBBPCLKIXYTYHWVJHPODJFYTRQTRZEDSQGBNLJHIWBRDRKFVCIOPVBMNMSXKROWJXZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JWGLTUOARKSMKXVGVQJKVRUNNBGXDNLQBMHKEZRFWDDWAPZDZFWVJFNGIKYZRSGRCCEFIADUVAQDOWNXSBMXCLIJHLNATTCZBPLFKRTWBEYWAKHKXUVYTNNYFEHUTATGLKWHPJUBJVBSRJEQUJIRPZZCKHGZICXLUNBQFIPBDJGLHCAJXWDGFVQATDSPYPPXTHHQLIEPSIOEEPNCEOOFVCZMOBHUWSYYMRYXOV");
    tmp_msg_0.attr_type = 201U;
    tmp_msg_0.min.assign("OIBGZVHWVFDAYWDCHKJXFOBBTYQJKIHXZDXCJNZGMONCYMRWKXYNBLBTWREFLWEQFPSUZVVNDJBUIMTVCMZHI");
    tmp_msg_0.max.assign("AQOYWOIGBIUUDAQPKFHQDGIVOXKQOBQGMVVDMZPUEJKZPKUYWTJKTBUIGZDWXWGHSVAPCASCXQFAIVFXJJZSSLXYEQHYNKJEAUAGTHLXLNNHCZTJSORIQNQJTBFFLNNVUWOWTBOJFXJPIZRBNOAHLYKNBCCASUFBVGGIWGVPPVESKHRLEVDRBICXTRULZYUWTOYRMDLCJGAEFFLTRDQYRPDZSKCSBMXHDFDYEHRWM");
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
    msg.setTimeStamp(0.00202137058216);
    msg.setSource(63280U);
    msg.setSourceEntity(31U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(177U);
    msg.reactor.assign("BDMPXJMORZGLLPBSLQTHUVGYNZWDIYPTNBTZKVNFBIVLZCXQNXCVSIVOGVKXODPGXTMOYWYLFHQCIREAGWOYKXWFKJGXRSXTSCBHOQRHEDTSOHDQUSIKDUQZGAWKAYQKCVFWJPUHPMXIAEMBGBHWUITXDMQEDKK");

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
    msg.setTimeStamp(0.483687318718);
    msg.setSource(4775U);
    msg.setSourceEntity(237U);
    msg.setDestination(16181U);
    msg.setDestinationEntity(187U);
    msg.reactor.assign("QVWDHOPNNBXLKBXCEYDADNZRILZMVDRAJTHLCKRZBJKBITGKZQSHNPDTOBELOESIEZQWAHLSEDIBUOFOECYPGFDVNFQXVKJPQFNWHQYAMUGWWCKJEUUSSXUUCPGFTHXOCNTJQWPSGROXDYUONEFDEZVIJCVDJRVYBMJGXCZHHYZFNWQETSMIJMYTFQWCMJSLLQARROKSAPBYKPXMH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GLHNGBHYDYONSWTRJSZCLXDDHTJZMETRUWINKHXMCTVCZBSQOKDRUELQSHPRMHKPHJVYBZUPFHWAXSOEACQFLMXKTQSXJZSAEVDJPQSNNAXXJPCYLRVBLKWETVFPCKJMMDDPGQYXOUBYGPJDLNQOTFNMRQYDAWEUWLEITGSEUIUDKICGFROAGHFBBYYFNPERFSGJIBMRXFUUIBAWRIVUVWCCZGBFZNKOQTHIWALVEJVLIM");
    tmp_msg_0.predicate.assign("KXAKRVCCXKBZGGLGPTKMLWTHKNHDFYJPOYYKULCTTSNPNQZFFQSASBTHGOGYCWZDAUHVULYDEOHJSBOPBAZEKLFTXIUMYYVQUTMZRUNVLJFJPOQVVQBVMQEGGLYACNXWDXDETRTJMPSZVIXFIXRDDEECIWZSFBMUCNCKWHUJCMWFUHYNEMBPLHSPRUGASXIQCAVAIRLMIRBZNBNSOFQVZJFEOJRHDQXGIPDEBYWJRSLXOZ");
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
    msg.setTimeStamp(0.769357756076);
    msg.setSource(3296U);
    msg.setSourceEntity(79U);
    msg.setDestination(44529U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("PRTWGCHJDCNQWTMKXTDXMJTTKXENHEZPRQTOMRIVCPMGHFHLDBYHJVAVWPXPFPRAAZHAOZHGMVOG");

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
    msg.setTimeStamp(0.926531447992);
    msg.setSource(8231U);
    msg.setSourceEntity(85U);
    msg.setDestination(47532U);
    msg.setDestinationEntity(34U);
    msg.topic.assign("CANLLVDZUTJHBRCXNHNCWIVBCEPAOXZDYZUWMYDFWKSMSNTQKZPFFSQEIPAVRROUPNPGRMWXTSLYSAJEJYFODMKAOEFYASNZGHAPTIODKWLHXGCUFVBOLUSWKQCEPEVTHDLRVZCWWNAMBTGQGM");
    msg.data.assign("YGQESWSMNIEWABMNS");

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
    msg.setTimeStamp(0.959062540237);
    msg.setSource(37094U);
    msg.setSourceEntity(214U);
    msg.setDestination(5266U);
    msg.setDestinationEntity(218U);
    msg.topic.assign("LRHUGFIMWYTSHNZGITETDOUIZCUQRPMQKXBRLACQBMYJMHBFSOWNXCYMZFJTGUEOVCSIFSCZLRDLKIEHDTNJJULEVUBTYXOPNIFTWAFCEVUAWDPSSVTFOBGQDJCWIDUUZPXZQODPQFQUDIWSYPAJJVMPKYEFSRSGREXWLWJXHVCEMRLZKQPRLLXAMVLZAKYOOVMGNVYMGJBYTOI");
    msg.data.assign("HPQHOBSUGKISRYVYUBHXWEOXSECURRGBPPARFHQHQVJSOQHNMPOIULFOFCLVVGFCFCDETZVYASK");

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
    msg.setTimeStamp(0.932066706422);
    msg.setSource(35417U);
    msg.setSourceEntity(162U);
    msg.setDestination(26787U);
    msg.setDestinationEntity(245U);
    msg.topic.assign("WESFBLIURMSZPTRFPPFZYHXKPWUFGUOPIXQHKJLYBCXPLNZYDEZUOJDVVBGQJFMBFPWONLAHARTMZKNNVBTYBNJDOQGEVCZMAC");
    msg.data.assign("PSOCLCRYSJAPPYWOAOAORTTVXBNVVVRMLAZPJCFLJLGFRLOFJZARFPICWDFUBKECCNJVDTOKSELFRLLJUAYEMCZDWDNUKZHDLXXIXQYVVQHKQETDZSIXKXMGTRSWDPIFMBOIMGMEKJVMYQNYK");

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
    msg.setTimeStamp(0.702946127212);
    msg.setSource(41062U);
    msg.setSourceEntity(149U);
    msg.setDestination(48972U);
    msg.setDestinationEntity(136U);
    msg.frameid = 93U;
    const char tmp_msg_0[] = {55, -29, 115, -56, 12, -111, -85, 25, 12, 59, 105, 52, 48, 94, -38, 77, -33, 124, -23, -108, -81, -126, 123, -94, -91, 13, 4, -44, 14, -55, -74, 122, -119, 24, -11, -117, -73, 79, -109, -70, -29, 42, 78, 103, -126, 84, -128, 89, 90, -22, -119, 26, -61, 35, -77, -39, -122, -121, -127, 117, -27, -111, -32, -48, 122, 12, -15, 108, 75, -90, 50, 113, 92, -75, -2, -70, 106, -71, 35, 10, -44, 116, 109, 112, -51, 53, -96, 23, -53, 56, -24, -29, 18, -75, 73, 32, -108, 12, 85, 44, 17, 116, -55, 24, 53, 77, -126, 118, 106, 2, -78, -98, 53, -19, 124, 86, -83, 26, 4, -39};
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
    msg.setTimeStamp(0.801168948693);
    msg.setSource(64752U);
    msg.setSourceEntity(169U);
    msg.setDestination(34296U);
    msg.setDestinationEntity(88U);
    msg.frameid = 218U;
    const char tmp_msg_0[] = {85, -68, 0, -116, 76, 4, 81, -13, -1, 15, -19, 43, -26, 1};
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
    msg.setTimeStamp(0.939086530504);
    msg.setSource(41777U);
    msg.setSourceEntity(118U);
    msg.setDestination(475U);
    msg.setDestinationEntity(14U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {-93, -16, 117, -91, 20, 6, -115, 65, -107, -107, 106, -105, -85, 121, 103, 4, -35, 78, 77, -65, -51, -31, 75, -13, -8, 86, -39, 112, 42, 122, -60, 38, 13, -97, 30, -116, 34, -33, 26, 7, 126, 81, 28, 63, 37, -52, 111, -55, 58, -21, 121, -71, -122, 28, 61, -96, 2, -118, 16, 29, 126, -98, -62, 71, 22, 56, -98, -112, 56, -80, -108, 108, -83, 41, -50, 89, 41, -29, -33, 108, -92, -21, -85, -7, 87, 73, -41, -60, 113, 11, 113, -36, -79, -105, -59, -93, -77, -25, -10, 5, -72, -127, -13, -88, 31, -91, -109, 84, 80, 10, -50, 60, 50, -76, -38, 2, 89, 92, -57, -25, -53, -98, 122, -10, 106, -120, 121, 51, 79, -51, -2, -106, -68, -23, -81, -41, -41, 82, -24, 9, -61, -96, 3, -3, -111, -37, -51, 124, 32, -24};
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
    msg.setTimeStamp(0.714692991609);
    msg.setSource(12549U);
    msg.setSourceEntity(144U);
    msg.setDestination(27150U);
    msg.setDestinationEntity(121U);
    msg.fps = 60U;
    msg.quality = 54U;
    msg.reps = 169U;
    msg.tsize = 173U;

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
    msg.setTimeStamp(0.37943324061);
    msg.setSource(18273U);
    msg.setSourceEntity(49U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(139U);
    msg.fps = 100U;
    msg.quality = 42U;
    msg.reps = 236U;
    msg.tsize = 50U;

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
    msg.setTimeStamp(0.861969234769);
    msg.setSource(50250U);
    msg.setSourceEntity(156U);
    msg.setDestination(26985U);
    msg.setDestinationEntity(102U);
    msg.fps = 222U;
    msg.quality = 124U;
    msg.reps = 243U;
    msg.tsize = 212U;

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
    msg.setTimeStamp(0.959364164911);
    msg.setSource(7888U);
    msg.setSourceEntity(104U);
    msg.setDestination(33432U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.531654825883;
    msg.lon = 0.852960425611;
    msg.depth = 158U;
    msg.speed = 0.688638029162;
    msg.psi = 0.632613999887;

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
    msg.setTimeStamp(0.136775097287);
    msg.setSource(12687U);
    msg.setSourceEntity(80U);
    msg.setDestination(47102U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.541517862124;
    msg.lon = 0.650974385048;
    msg.depth = 237U;
    msg.speed = 0.703941809756;
    msg.psi = 0.728860234682;

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
    msg.setTimeStamp(0.770658129018);
    msg.setSource(25574U);
    msg.setSourceEntity(57U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.745450340746;
    msg.lon = 0.0543758271234;
    msg.depth = 175U;
    msg.speed = 0.321421209047;
    msg.psi = 0.294617776729;

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
    msg.setTimeStamp(0.459360612647);
    msg.setSource(58296U);
    msg.setSourceEntity(133U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(204U);
    msg.label.assign("CHPJTNJISDHRYUMEHBYBUHTZOXBQUQKFTHKZGDDFGXMXFLNSUQJKWXRCDUFJ");
    msg.lat = 0.316283995421;
    msg.lon = 0.881200168482;
    msg.z = 0.104668588575;
    msg.z_units = 4U;
    msg.cog = 0.484718730697;
    msg.sog = 0.150416790944;

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
    msg.setTimeStamp(0.988273101883);
    msg.setSource(62579U);
    msg.setSourceEntity(202U);
    msg.setDestination(24510U);
    msg.setDestinationEntity(175U);
    msg.label.assign("NVHLABLYKKJEKRDTUGCRNNEHSMFASXOHQMROIMKLVTNMWPYWXRCRVUXGCTNWFDESQJEGQAHZZDZZLJWBDSMBSOCWUNCUPCZNSXTGTZVGQUJQLQTGVEAYLKBKKFPQZHUAPWYVIFIBRKJZIEVCPIHBOPCFIRCXPVXLROKYHGDQUIDJSJBAYLKHQFMDYJRZDNTHAONBYJWGFMJEXGSAMGQFFLCTTOOTNXLEAYWXUYHPMWEXAZIDBFMUO");
    msg.lat = 0.97324175992;
    msg.lon = 0.182055765961;
    msg.z = 0.0508615596828;
    msg.z_units = 102U;
    msg.cog = 0.553892234397;
    msg.sog = 0.882313508193;

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
    msg.setTimeStamp(0.500508021149);
    msg.setSource(42060U);
    msg.setSourceEntity(96U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(239U);
    msg.label.assign("ENFXPXRDBZXQQBKGKBWVPJLYXRMSZOQZKFVLSTDOGLASWYPZCBCMHYFCYTUEOJAWVPNUMELSGWPVQGCDTOENFEWIHDKUNZFJSXUYUGBNHWVGPIHAJPWMIQOYETKWQSSQRYVOUTDFUVUNDQTLCAANPAQGARJRSLTHXMLLEGJJSNZRWKACJBGMMFJFDFHVMKLBHXZIECNTMRDVCYEFRUBEDCZDQOZLIHTXOJTBBHIKRHUAIMIAXKIZVNCI");
    msg.lat = 0.680321339841;
    msg.lon = 0.713494575502;
    msg.z = 0.41501728131;
    msg.z_units = 34U;
    msg.cog = 0.736848258752;
    msg.sog = 0.28674309186;

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
    msg.setTimeStamp(0.567328000789);
    msg.setSource(16492U);
    msg.setSourceEntity(209U);
    msg.setDestination(49073U);
    msg.setDestinationEntity(206U);
    msg.name.assign("QPANNXMUYZMCRAHBUHJPWKWNAWRLBBSJXJXGVQLASRRHKYPTSKWHRSSENLOLXFVUMOSJUEIYYXTYVYCSQVOCEBTCKQBZOVGPBHFFWIMAWXDFTPOVPIOIIHFEPZSNBQKORNTDELQFFFKNUZZMDPQVEGONPLTDMZUIJJUA");
    msg.value.assign("KMXPJTGISZIREJGAQHYDXXMBPWLYDHYCRHMOLUKOJMWYYSWGVQMIJZNDYFLXQKITOMENANZCRKBHXLNUJWKUHODKUDTVSXABBJCQVJZLHNDLVCBACYQXZIQUJBPEEZWUVSHWEIXCHHVTCHOTGGKWGSOVRBPTZSVKRAEDCMZREGRMOGOFTWRURUPELQKGDMAVEVOWFFQLNTMNYBFIPIPFBJXSPDZFFQGWXPSDAKTIUOANYPLFNJRBELI");

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
    msg.setTimeStamp(0.815248794281);
    msg.setSource(29860U);
    msg.setSourceEntity(29U);
    msg.setDestination(33831U);
    msg.setDestinationEntity(47U);
    msg.name.assign("GVNPDKOUZDGUKORPXEKGMSLZHWOBRESMCLPKSAJXCIWKWONGNTJZXXNXYYKUORIFXHVXKDTSPPDWECWNSITNLIQZFZIHQBTVUQJSGUNXACPYAMEAQMZBOUVAEOYBPTCCEQZJBAXTBWWDEPJHYBLGAKMCRYIWBDPLUHMRGWR");
    msg.value.assign("TIZOLNTYPOPVONKCLGXTUFMVDPGSEYEZQTOTYEQYHUTWJOLLIBHRXEXJCUZAUVMOXMEMWCAIONMPQGNIQLSGSYBTDBUSMWGLQLGYJQPIBUHOZPXKTRWKDVFHXSWACMZFMCFUJRFNPDLJIVFVUZALVGQGWRCODCUGLNACYERRESJDBIAQQEYARDXIFFKIADEIKFWAXFJTNHBHSMBXKJSNSJTZWKRCWRMHZAVPV");

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
    msg.setTimeStamp(0.909818240176);
    msg.setSource(29832U);
    msg.setSourceEntity(142U);
    msg.setDestination(61813U);
    msg.setDestinationEntity(98U);
    msg.name.assign("KEYMCJVOYQFSBNQJQCLEDMETDFVHTRSCMTASWOTCOIBHYPLEOLVNNMPFPAPMKEPAMHZGFRERRCBWJDBMTQNKJFRXYUVWYOYGCHVLUPVWE");
    msg.value.assign("VYZUVEZPWLAOCNOZWWYDWBHTYIYLCHZCJKKIBWLXEZEJTBHQHODNGJPRVNIAMCUOSYHWUFTLGMUWUJVSOUEZXYNFXLBTFRRQTIXAYEJVRVXBEIRAMUWDOFNVQVSCIROFKKBO");

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
    msg.setTimeStamp(0.401845064183);
    msg.setSource(1223U);
    msg.setSourceEntity(181U);
    msg.setDestination(52334U);
    msg.setDestinationEntity(101U);
    msg.name.assign("OWHLDPTAOAKLRRSNNGTFBJQZBKQKGDFDXMMVMEIXFDRYERSEFVWXFXUZARXVKQSVPDTUHRJBNIILNTQRYDHNBOXZCPOEEEIYOPUGPKLTMCPYIEQOGJBFSOQHMDHJHBZCKXAPVQLHRBZVJFACWPOCKHSQZTKG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ITOPDDUDVTWFSIQEUHUNRVAWNRLTWGUPOGHVZCEJYBGAYGV");
    tmp_msg_0.value.assign("UULKHDJCHFWLKVCAWIHHFYYQCNFZGPCSZRUUQLVCTEVSPTYTARKTQCUUESUWLAJKQKONADIMXAIXCMZGPYYOVXICGCBEHTFISGMLGVFYBTFGSG");
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
    msg.setTimeStamp(0.0338551144675);
    msg.setSource(40567U);
    msg.setSourceEntity(125U);
    msg.setDestination(24938U);
    msg.setDestinationEntity(150U);
    msg.name.assign("LMOPJBMKROLZEBWMHXGDTFXAEXWEIYLECUYYIZXZPUJBDLWFRHYUIAROLDVLWRMBBGTNMFWXFKENGFECNIOMZDBGXJTYMDKBTYPPCKQYSSKUOKNQUIDQKGNHUNMWOXJTOFKUGHVJPVYPIHQSLIGGPPLEJWZVXMQNWKDYAVGVQQSQULTAJOCOJCYAGELDPIDCA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GAUDZGZZJTSPRRURZCVEUQGFIMPGMIZOFOKKVBWXOBAZUYXFQHOQVNNKRQNACIMQFOKIIVAZPEMEGWEEABJLEOVWDRXMAVJODPXXNJIHYGBFDKSOTYUGHSLLLWCCPYBDMYAHDPJUCSVRGJGUDTOSUKTSPSPWCNWEKITHWTIUAAQPRCLEXDHSXFFJCRQUDKLXVYIXBKVNTTKWYNCGIJYFZHOLXDSRBEQLMMCB");
    tmp_msg_0.value.assign("INJVVNXAIZBKXAJNAIEFLAOHJUEV");
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
    msg.setTimeStamp(0.88041631922);
    msg.setSource(23312U);
    msg.setSourceEntity(245U);
    msg.setDestination(15608U);
    msg.setDestinationEntity(246U);
    msg.name.assign("DSXNALBXCREAFRZSUXNYHRRWTSMHBJUNBVESDSFULZIPCVKYHMXANVTSQKANCQUHEGCLBJFYDZPKDOKOVGTUWOEFQEZMEQGHBYFURWLCQQF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LDVPYOICCA");
    tmp_msg_0.value.assign("QVWFEMYFGPOIOISUYBFVKPBXFHKRGJQKDKMMIBGUWKAHBORLKTAXZSUYMCPLTNJCTEHPULRZAXELBXNOQCBSOWAXFPZYTNTAZGSZKHU");
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
    msg.setTimeStamp(0.198592448192);
    msg.setSource(25342U);
    msg.setSourceEntity(4U);
    msg.setDestination(12383U);
    msg.setDestinationEntity(64U);
    msg.name.assign("QMGFCBMZQXHHKEORHVLCHYRNMILZCUUBTXGEVACVLDAYLNMIJSYXLDYHNRTEEPZCBGZHCNCIUBIVWEMXAXIDJE");
    msg.visibility.assign("EKOUDTHQXYVALEXWCFOOTKYXIHGIBGCUEGTLDEGAZEHPZMWJRFVICITYBXVNFOBQJRMOCPESARDAHCAJWMXSNCYJZWWESO");
    msg.scope.assign("DUQZNJDILPHFHRQXFFIPJWBGMHFBAROHXUHHCYEVUSTWIOBKGBBDLAEXRPMOBECJIAUNJEOSTASGZUXQVPKYWLVSZVNICU");

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
    msg.setTimeStamp(0.693096566261);
    msg.setSource(31169U);
    msg.setSourceEntity(122U);
    msg.setDestination(8930U);
    msg.setDestinationEntity(95U);
    msg.name.assign("TCXVBHXUICRBXZYMXBDMNGQTQPKBRWDLVRFCFKDHRSKUCUDHHDCZBJNFLWJDFVIXOAITTACMOEGAHYQJBNZPDFPWAQXTPHBMUGOELWBTWKYXMSZIXAVLCJPMYYVQJQLOIMUTBVASUKLMSW");
    msg.visibility.assign("RYGRJUPEYEHJWYMLDSSBVLXSHWKWQVAQCGBKFWYVJXWQPSHIBXZOFKEGSMLJCXBHBEOEUICGRCQZMYRGJNRIDZZIVTPGIEQVHCXBPADQRSABKGSPOEJHQJRUUSDENPPFKABJPFFTGXEZDFSOBOTZNQTHCKCRVMMKWZDRLMDMFXSXGOGYNQOKUAVTLFHKQBTLZYHHNNUDWAUYTIVMMYRIWJOOUACAFAVPYTTXOIKNIVNIMULPLCDDWCAFZJXL");
    msg.scope.assign("SQILZXMNRUGYNFCXVICBYGCSOUTOHPVBVOIPAXBUXQNBAQDMHLDEKPPRYDBFPGIITZEUPAOXMZWTSENBLXNWGZTEOXCJFPYUDKAGRZARRHTMSSENDWXDKZVRFHHATWLUQJEKIZJKUWLUMYAMYJSOFBLOCUQLPCOJTJZEBT");

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
    msg.setTimeStamp(0.980822796384);
    msg.setSource(12889U);
    msg.setSourceEntity(57U);
    msg.setDestination(51800U);
    msg.setDestinationEntity(111U);
    msg.name.assign("SISXCNREQMZBSYJYFKZWEMXWLAZWDUMICDSMDZRVOBCVORCUJZYWYWTEEWKVCTABOUKOHIMSFVSXGZFYJFJQRATOKUCAMKNGUJTAVQRBYZNZIERDXKMKLDSHNNXTWRAKEVXUJTHTJPHJVKEYILQFKOOHUSLIOVGBBZHRAPGCVHDNIQNXOLYIBQDGQPPERHAPUJCHDDBLLFLMTFWMJYVXTNBILPLPCAPYSGXNCPHWEGGQGQESPFMIXUFAZUOF");
    msg.visibility.assign("SUMKGFYUDWYIJKGIBMLAATNCTNLTARMRIOCMEKMZOEHBZXDOHPWXLRKYSYUMSZKIPQJRXXYWPGPPFVMCRUOULVQBHRNXEVDXDQ");
    msg.scope.assign("UHVTWYZCYVZZCYNNXCAOFUBNYIRGSQIGKORZJWJE");

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
    msg.setTimeStamp(0.521812912778);
    msg.setSource(35708U);
    msg.setSourceEntity(241U);
    msg.setDestination(59705U);
    msg.setDestinationEntity(77U);
    msg.name.assign("LGDDHBOCNNYPADFPJBGOYZWHNABVKXWEVHHXGEWYSOYRCTPHJCUPFQIGCAIXXLOIIKEUWMVHPTGRUQZXXQEBHNMIDAZZDAZIMKWPVIKPUNNGQLMJUSTJQYCBKFWJSSENDKAROPECZHMJWYBJZNMAJVSAGWSMOBLFZTNEIYSBYFVUKOOKLQTCTLQEVGCCTMFAKCXRXTHTPEFXZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OAVMDSKSBYJALTQZSLXTBWPUYKPUJQQGGDVEFOURBICIVXHZXRJHJQYSZEHZIYAPZXNSXKIFMBBKUGTLNRKVCTXGDFWNRCPKQSVMMEYHNJFULIGDHBCTIQJWYFROEDLNVVUXARCKFTLISWGNAEJTOVQWPPOBUBRBWNJZDZSEQUASTHAEYXHFMKUQHLRIAJZECGBKEFHZICZLOWNKPDNIMWMUPODWLTOOCHRAX");
    tmp_msg_0.value.assign("RQHJVSRULSBDVOXLHYGBPOALYQYEHDKRJSFLFNIGFVAILP");
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
    msg.setTimeStamp(0.302464041646);
    msg.setSource(29000U);
    msg.setSourceEntity(205U);
    msg.setDestination(41764U);
    msg.setDestinationEntity(200U);
    msg.name.assign("RCXQYJWIVHESFNKKHJJTBAWHAGRSBGSPFNSIDLJPOFGSJHQKPYCNRBMMUOYROOQYMNYRITDFSLIUKCMMQEXLATPFGYZXETXBUNVGIKSTZACUEWWOVPMZGURVLLZKSMQQHSDLZKKUTTYABFUHUKZLGVGDUCTMPNIDOKEXDOTLRGORVFAAOQIZEFRBVWWDYZEX");

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
    msg.setTimeStamp(0.630310928185);
    msg.setSource(23060U);
    msg.setSourceEntity(109U);
    msg.setDestination(27068U);
    msg.setDestinationEntity(6U);
    msg.name.assign("STNVFSPOIFIITWLFCEZGHHONPNPVVMXQWACEPHYNKQGJLKBCHTUHEBEGXBTLHXWKWOTBCAIMGEZNBCIMNYQHFZSTYAZVICXMKKQSZGXALTBBUEJZAAVPDADKZCDYGRDMVDSMJSDWRQQKBRYLAEURSDIGPIQJYYSLZFURECKBUKZWUQMDUJDLWOWVEGPYMFSWJT");

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
    msg.setTimeStamp(0.140357162893);
    msg.setSource(41401U);
    msg.setSourceEntity(56U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(27U);
    msg.name.assign("NOKETWBIMBKECTUPEAWCREQDJADSJVJKFCFWBORLDQLYPUJKLPCJBCMOXZYDYSHHIIFLMFGESDQNFBOINMMYXVJALHYIKRANUVEGZFVZRVHCWZHDXZYA");

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
    msg.setTimeStamp(0.556083125113);
    msg.setSource(24426U);
    msg.setSourceEntity(4U);
    msg.setDestination(19834U);
    msg.setDestinationEntity(7U);
    msg.name.assign("RGICMMPJNPUVBABBMOXEZCYODXKCKPERMMYGXPVDCAJXHCBR");

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
    msg.setTimeStamp(0.857798570034);
    msg.setSource(51395U);
    msg.setSourceEntity(98U);
    msg.setDestination(39887U);
    msg.setDestinationEntity(54U);
    msg.name.assign("NCXISWDUOQARYJKICOOAMLKIFMUWPUGXVIWMJSCZDAQRVDDPJGWKJFOBCBB");

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
    msg.setTimeStamp(0.74308142134);
    msg.setSource(41839U);
    msg.setSourceEntity(21U);
    msg.setDestination(39915U);
    msg.setDestinationEntity(40U);
    msg.timeout = 3954292852U;

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
    msg.setTimeStamp(0.709212402493);
    msg.setSource(56644U);
    msg.setSourceEntity(39U);
    msg.setDestination(52102U);
    msg.setDestinationEntity(224U);
    msg.timeout = 3933305147U;

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
    msg.setTimeStamp(0.139943370998);
    msg.setSource(41859U);
    msg.setSourceEntity(85U);
    msg.setDestination(16147U);
    msg.setDestinationEntity(179U);
    msg.timeout = 4220029347U;

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
    msg.setTimeStamp(0.366978980526);
    msg.setSource(11536U);
    msg.setSourceEntity(121U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(179U);
    msg.sessid = 4201698892U;

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
    msg.setTimeStamp(0.291847025483);
    msg.setSource(62023U);
    msg.setSourceEntity(74U);
    msg.setDestination(61777U);
    msg.setDestinationEntity(11U);
    msg.sessid = 3696572791U;

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
    msg.setTimeStamp(0.658315461271);
    msg.setSource(38589U);
    msg.setSourceEntity(43U);
    msg.setDestination(9414U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1053096403U;

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
    msg.setTimeStamp(0.871838482369);
    msg.setSource(59882U);
    msg.setSourceEntity(51U);
    msg.setDestination(18793U);
    msg.setDestinationEntity(217U);
    msg.sessid = 3453368743U;
    msg.messages.assign("OHXBPXPLDEAEMZKJKFACWNFBHASDJYRWBGZIVBMMZPTQUEQELUZTXEYMDGXNITTXQIHGUQCTLDJBRHMOMMSBTTSZDCVYRQKXISVTBZOGHXLZIEFEYAXFNQQPYLAPOOCHHSGZNLDAZCULGKCRJDVRVAODWTEAAVICCVUGRWSPSBYEOGVMBYNWKNMJKLEDIUNUNJHVFGFQZJPTKRWIFPARNUVUCXYQCWODNPSKFIKHHOSWFMWJJULRXJBGQRPW");

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
    msg.setTimeStamp(0.970900136785);
    msg.setSource(917U);
    msg.setSourceEntity(155U);
    msg.setDestination(62260U);
    msg.setDestinationEntity(244U);
    msg.sessid = 1607810618U;
    msg.messages.assign("EZGJZSJEZXERIYVHELPNOFWIWIKGSZQETAULFEJRWYLHS");

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
    msg.setTimeStamp(0.908949785341);
    msg.setSource(26164U);
    msg.setSourceEntity(250U);
    msg.setDestination(10483U);
    msg.setDestinationEntity(2U);
    msg.sessid = 2915435695U;
    msg.messages.assign("ZTUJISRIPWMTSUBLXO");

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
    msg.setTimeStamp(0.370315216019);
    msg.setSource(40873U);
    msg.setSourceEntity(212U);
    msg.setDestination(47920U);
    msg.setDestinationEntity(156U);
    msg.sessid = 2387456191U;

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
    msg.setTimeStamp(0.246241803824);
    msg.setSource(28488U);
    msg.setSourceEntity(219U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(238U);
    msg.sessid = 1341396219U;

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
    msg.setTimeStamp(0.404427071966);
    msg.setSource(47289U);
    msg.setSourceEntity(239U);
    msg.setDestination(46762U);
    msg.setDestinationEntity(196U);
    msg.sessid = 1558930215U;

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
    msg.setTimeStamp(0.847054253662);
    msg.setSource(11791U);
    msg.setSourceEntity(14U);
    msg.setDestination(60903U);
    msg.setDestinationEntity(109U);
    msg.sessid = 745556319U;
    msg.status = 178U;

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
    msg.setTimeStamp(0.987460426208);
    msg.setSource(47399U);
    msg.setSourceEntity(48U);
    msg.setDestination(15544U);
    msg.setDestinationEntity(192U);
    msg.sessid = 1498260158U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.753801540469);
    msg.setSource(58020U);
    msg.setSourceEntity(235U);
    msg.setDestination(45143U);
    msg.setDestinationEntity(58U);
    msg.sessid = 1173007926U;
    msg.status = 192U;

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
    msg.setTimeStamp(0.0460430414944);
    msg.setSource(25701U);
    msg.setSourceEntity(116U);
    msg.setDestination(45838U);
    msg.setDestinationEntity(206U);
    msg.name.assign("UKGTFZPRYLHADUOEEYPJJKUEHNFWBIIHWUF");

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
    msg.setTimeStamp(0.435255235654);
    msg.setSource(57592U);
    msg.setSourceEntity(165U);
    msg.setDestination(15655U);
    msg.setDestinationEntity(19U);
    msg.name.assign("FNUOIEZQTKIAJCSWUOURVCBPNHAJJFHUZVPWUENCETJAMAJPJONYCIRDNEXPPQYZBNXTZRBETJMATADKDVKBIKNYZLBHURBOQWYHCCLKNVOSYNQFFSKWYCAGFVVLUEBDOXZGRLTPXCOHSHXGLFQSRTNSXTXSHYSRKADDEXICZYFLJQFOMZRWMZEFYOWWTKGPSLUMXQCUTEBPDGD");

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
    msg.setTimeStamp(0.129205941752);
    msg.setSource(5756U);
    msg.setSourceEntity(163U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(222U);
    msg.name.assign("TVHDWSAKQUVEJQSLJUTPFIWHQCXXGYBXDTCVKGDMNMSDZJGUUWRPOBGYXZZDAINLOPHRIVLTEYFKQPWGHVRFAXAZJTCXYJLRBFBRRTCULEXNSXBFYQTFCIOSALSUELITIMMIXEBJNOPLRFFPSBFLQVGJEDYOVNCZKMJSZZVECHKZGKCWSCWBPWPJORONUXQMHFMOYGADMQYRVTGCAPWDK");

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
    msg.setTimeStamp(0.428899061238);
    msg.setSource(40634U);
    msg.setSourceEntity(67U);
    msg.setDestination(58623U);
    msg.setDestinationEntity(73U);
    msg.name.assign("BYBOEHJVOXOCEGGN");

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
    msg.setTimeStamp(0.797215810597);
    msg.setSource(13118U);
    msg.setSourceEntity(166U);
    msg.setDestination(56388U);
    msg.setDestinationEntity(145U);
    msg.name.assign("PZFIEZMVXQGOZUSSJNCURABJMYAOFVSTKSWKOCTSQUCSKQTVQBRFQYBUYDCBVTAVVBMJUNVJFIEDYZGRMRKHNPIWIRJELEKFEVAJLZIFDWPKIYJILLJEGEMVKGTTBUNMYDDMLKXOHXOAYMUZSLYDAWOPQDFIPOUQMQQNHZCNEBUCTHZCQYIRHXBIAOJWXFZXSKLWX");

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
    msg.setTimeStamp(0.925644692442);
    msg.setSource(15767U);
    msg.setSourceEntity(3U);
    msg.setDestination(11199U);
    msg.setDestinationEntity(50U);
    msg.name.assign("IUESVXZEZMEUMITAGOOLDV");

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
    msg.setTimeStamp(0.758184696584);
    msg.setSource(54819U);
    msg.setSourceEntity(131U);
    msg.setDestination(64674U);
    msg.setDestinationEntity(194U);
    msg.type = 79U;
    msg.error.assign("FHFCOMBAZJFNFJEJPMSCRRFLOLCEPJQPJVSKWIIJULRGMBGASYAMIWLCNGOQMUKQGATDKLQYYHHZJEWGODIUHELQKIYRPDIYWXRUEQBUM");

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
    msg.setTimeStamp(0.022855599223);
    msg.setSource(11540U);
    msg.setSourceEntity(212U);
    msg.setDestination(50762U);
    msg.setDestinationEntity(181U);
    msg.type = 207U;
    msg.error.assign("OBKWALLMIFQZJNISUYWAZKBWCSSRNNWYZNMWQHPPVMBXVNHQXOYSNZSFTOLPYEGMLPONYNQJZOAALTVFHZYJODTGRIQHHGPXBGVXKJAWGCJLFXOF");

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
    msg.setTimeStamp(0.524851638294);
    msg.setSource(38889U);
    msg.setSourceEntity(62U);
    msg.setDestination(25497U);
    msg.setDestinationEntity(207U);
    msg.type = 191U;
    msg.error.assign("DGVPDREOWALDJKSMJNIZPSYFLXXYYZTORXNBJDZKJGCZTQDITURBVDARGUCSTPEVARKAYGRCAETFLBVZHRUXWIVNWUSSDJYTBPMTOUTGPPNYKCJJEFEVMHNINOOCSHIFMKSQXUKLRWQKFUBHVMJHZFIJGVZLLCGOKGDNQFWZRAHAXSQXKBJMMBNXPEIQEMRYBHZOULPAQHIWTLSVWBNUQAEBMQ");

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
    msg.setTimeStamp(0.0499121479885);
    msg.setSource(52200U);
    msg.setSourceEntity(5U);
    msg.setDestination(52729U);
    msg.setDestinationEntity(71U);
    msg.seq = 14487U;
    msg.sys_dst.assign("AYKZHAWIXKCNEOXGJVGVHECGXYDDFJZGOQLRIVXCJJTYEIHMJSGSAEZZWHFKQNUPVINIPGWBWMBNBBVVXEYBVFFOTQCKXRLOZTDIKQHQLRFRCEHLPXJAVFZFMNBMWZTCXYUAXWXIQDSSBLCARSPNMKLRYL");
    msg.flags = 199U;
    const char tmp_msg_0[] = {36, 117, 108, 62, -83, -8, -97, -112, -89, 69, 62, -40, 62, 73, -5, -7, -115, -33, -65, -35, -38, -51, 29, 76, -31, 83, -9, 27, -61, 76, -100, 5, 105, -58, -23, 47, -124, 52, 19, -15, -23, 74, -114, 36, 2, -104, 94, 111, -2, -102, 50, -118, -99, 118, -70, -120, 79, -115, 81, 62, 59, 87, 20, -24, 40, -87, -66, -52, -44, 62, 2, 98, -60, -123, 120, -2, -53, -23, 112, 124, 0, -125, -11, 97, -111, -35, 62, -94, 83, -126, 58, 10, -107, 120, -5, 96, -93, 65, 108, -44, 104, -16, -40, -107, -67, 90, 53, 105, 88, 15, 46, -26, -27, 31, 78, 9, -74, -90, -91, -112, 123, -58, 24, -40, -6, -52, 6, 111, -72, 80, 59, 121, 62};
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
    msg.setTimeStamp(0.10544486051);
    msg.setSource(19256U);
    msg.setSourceEntity(147U);
    msg.setDestination(7259U);
    msg.setDestinationEntity(163U);
    msg.seq = 42521U;
    msg.sys_dst.assign("RKRJKVFNARFAIRSHNLPWTFXFGBHCMLOOTZIOPSWGXCERPUMDXMDEBAHCXTBHOHYYAVHVFCOVPJDSJNIFLULFOMCTBGELANKXDASEUSZEQAZJDQYWKBEATJDHPTJFEYIYLYQGVTNHUBQSVCKYQOVVZGDKYTIFIMGNAQDGZWNBJSKTZVKUM");
    msg.flags = 15U;
    const char tmp_msg_0[] = {-69, -92, -124, 50, -114, 95, -126, 77, -55, -125, 115, 7, -107, -81, -104, -123, -72, -44, -81, -82, 49, 96, -58, -116, 120, 8, 28, -30, -111, -14, 10, 26, 107, 41, -8, 20, 6, -48, -112, -75, -63, -26, 107, 80, 125, 24, -128, -48, 110, -74, -90, -116, -123, -82, 9, -75, 30, 109, 116, 61, 84, -19, -9, 34, 22, 118, 50, -49, 12, 46, -112, 61, -4, -53};
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
    msg.setTimeStamp(0.589978418179);
    msg.setSource(7059U);
    msg.setSourceEntity(223U);
    msg.setDestination(30792U);
    msg.setDestinationEntity(159U);
    msg.seq = 7176U;
    msg.sys_dst.assign("MWZYOKZUAJGBATUWZMCBUWZGEWTEYCWCXNZLKNJUFKSSHUHJICZTOGZWFAYJAIUBSSEIXPBVKHYQIVPTROVYECVLFUVPKNIBGLODXKHVJQRTGOALYWILWMDHARJROHXSHXLXMKZBUFKSHEIDDCRBQRKDSTRJDSYXYNFSQCYHEOOPDDPMLGENKFZDDVBMEHVTGFQGAQQFFZIVPIMQTBNPTBLUPAOSECJFLXNJXQRCJCWWPNTIMRLRVGONMU");
    msg.flags = 21U;
    const char tmp_msg_0[] = {96, -118, -38, -128, -1, 53, 113, 109, -13, 98, 67, -43, 40, -35, -49, -79, 122, 29, -12, 68, -14, -26, 14, -102, 109, -114, 5, -72, 53, 23, 67, 0, -73, 123, 71, -9, -68, 120, 0, 53, 108, -30, 70, 69, 108, -68, -114, -83, -10, -12, -88, 114, 82, -64, 110, 79, -105, -31, 110, -30, 90, -30, 62, -120, -50, -7, 59, 123, -49, 123, 92, -4, -42, 79, -60, -55, 20, -61, 103, 90, 51, 5};
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
    msg.setTimeStamp(0.771539870462);
    msg.setSource(52118U);
    msg.setSourceEntity(213U);
    msg.setDestination(60569U);
    msg.setDestinationEntity(53U);
    msg.sys_src.assign("PXZFUBZXWEDUGTIKPXRHMYNBCCFEXHEVMITJIMSSJLZMJGDLNHEPOMZBAZDHZIOJTSUYIQPSLOEQSMENMLYAEXEYCYTVSCKONOFZIQCVBBDJANGGJZWEHASCQJPUYAP");
    msg.sys_dst.assign("SQTSDIAKXWEVTSCYDHRNBXGHQLHHZNVRBUIZNFMKFJQPCQBWNWLIGEEIHUDTFRBGHVURQZLPBIJEEVEUPFNXSOXXZRHDFMQHKMYTXRZYRYMTAABZNSJIGVLPDTMAGUWQTDJJFAZPWIXXWKBCSLSWMXICTVGQPJUCPMZP");
    msg.flags = 65U;
    const char tmp_msg_0[] = {31, 100, -16, 62, -69, -46, 99, 80, 31, -109, 86, -87, 110, -118, -99, -94, 117, -63, -64, 23, 61, -1, -5, -69, -42, -87, 38, -6, 112, 26, -53, -23, 95, -61, 118, -19, -47, 62, -102, -12, -30, 27, -102, -48, 103, -19, -47, 95, 43, -18, -63, -35, -63, -63, 90, -46, 86, 81, -29, -23, 97, -91, 23, -101, 109, -20, 100, -84, 16, -54, -16, 104, -74, -117, 59, -17, 122, 66, -108, 98, 62, 97, -8, -99, -119, -39, -40, 103, -7, -80, -47, -45, 47, -22, -40, 20, -36, -65, -20, 100, 2, -106, -9, 88, 109, -18, -123, 16, -68, 24, -16, 27, -88, -125, -112, -82, 92, -17, -68, -86, 16, -17, -39, 56, -4, 48, -2, 90, -33, -105, 110, 18, -81, 103, 34, 11, 113, 18, -91, -34, -121, 108, 16, -77, -82, 53, 31, 10, 78, 123, 95, 20, 20, 35, 107, -36, -57, -4, 99, 77, -71, 126, -117, -87, -59, -78, 63, -37, -93, -9, 82, 53, 8, 100, -68, -111, 62, -58, 96, -123, -70, 125, -36, -114, -1, -52, 23, -61, 4, -85, 112, -43, 62, -121, -7, 13, 94, -55, 124, -38, 121, -10, 39, -117, 39, 73, -122, 58, 40, -121, 10, 124, 88, -94, 110, -98, 11, 7, 17, 60, 0, -75, -127, 94, 69, 93, 61, 52, -86, 93, -48, -37};
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
    msg.setTimeStamp(0.0398301200214);
    msg.setSource(10325U);
    msg.setSourceEntity(191U);
    msg.setDestination(40720U);
    msg.setDestinationEntity(20U);
    msg.sys_src.assign("PRQCRRYCUDJPFAGYTOSPGAJLVDMOFPGLHMCUZAIVUBGVRLTEJJTITKACUJHSXBIHVZQOXYNDDNQHURBCQYKAENTBLSNLXQYSSAVUFDDPPMIHYLPIZVHZHUDJJWGEGXHEAXSJQFXFVSNPEWTWQOZWGABYMXKLBHKVWGIOGRKCUTEZOKCBXBVLSRCJMURNDMNKMIDYYUEBIPMIC");
    msg.sys_dst.assign("WSFLNWDCUMAMHZTODXTJESZOLFSTAPTCJJPXOGSPIQWIFIDIBQRGBWWCAJBAPAXPDRIKTFNYYO");
    msg.flags = 229U;
    const char tmp_msg_0[] = {-92, 121, -118, 97, 113, -43, -21, 122, 23, -58, 98, -20, 48, 29, 19, 34, -100, -47, 48, -55, 12, 123, -119, -40, 102, -7, 98, -42, -39, -76};
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
    msg.setTimeStamp(0.42546593556);
    msg.setSource(1202U);
    msg.setSourceEntity(51U);
    msg.setDestination(48247U);
    msg.setDestinationEntity(159U);
    msg.sys_src.assign("TIAXAOTPDKHWHXPYZICINYGLPWRWUVVUBLMUOFTHNGYCNDLQAEALSENIQKIKUGRCLKRKIBCXLQWCNERXUDBMYLVFCCJVWNPHWAKKJUOYXMMFSQYEVOIEQZMDBBHXBOBFAGUDVTSFGZFHJZUJWMWMMHPFCVCVZWCDMUOBZAJHJTHLTRYKYSFFDDUXNNJJOYGENPD");
    msg.sys_dst.assign("FKSWWVYUUMJICFNJEBNWGXGDIMRQEOOUDARFPCJHVDSGOMYYKLNFJFXEWARUXQABZXHAFGPIVRRFVONSHZNEDJZTPRFHGGTYWFTVLFXKDKCXMISQYGWZEMPAMTEULYADNOBMQOBNTYBCMVBYJZWTPKAIDUSHZUDNZATBSPRBSLMQWXKHVZLXWCOJIGPLEHPPLWKICSJNCEUQRRCDLLKTKECVJUBZHGMQZQEJLVIVSDSYXARIHQAOKPTNQHOGB");
    msg.flags = 204U;
    const char tmp_msg_0[] = {-76, -111, -81, -58, 52, 44, 39, -67, -94, -74, -6, -76, -17, 97, -10, 21, -74, -27, -16, -25, -78, -16, 63, -63, -123, -69, 78, -121, -48, -114, -59, -78, 39, 48, -82, 6, -96, -84, 5, 114, 104, 110, 38, -33, -53, -127, -33, 87, 114, -44, -11, 97, -55, 57, 53, 28, 48, -32, -71, 80, -91, -107, 105, 13, -108, 24, -105, -94, 39, 118, -15, -23, -120, -123, 33, -34, -111, 35, 23, 117, 66, 70, 29, 96, 19, 46, 68, 49, -59, 43, 64, 114, 2, 70, 96, 24, -18, -63, 116, -26, -2, -2, 109, 111, 46, 42, -97, 48, -123, 67, -30, -45, 116, 74, -2, 20, 11, 104, -125, -59, 91, -36, -42, -88, -118, 7, -4, 33, 72, 37, -61, 57, -5, -27, -123, 66, 121, 46, 11, 89, -37, 99, 30, 34, 41, -128, -49, -88, 54, 37, 98, 72, -42, 35, 41, -66, 5, 114, 29, 32, 66, 82, -12, 2, -125, 106, -84, 2, -60, 35, 90, 108, -3, 74, 113, 126, -39, -51, 121, -12, 124, -100, 59, 48, 125, -114, -41, 65, -104, 10, -45, 113, 16, -14, -31, 126, 89, -123, 108, 29, -108, -70, 17, 120, 49, -117, -7, -15, 11, 48, -113, -36, 84, 100, 10, -101, -55, -69, -67, 26, -66, -71, -13, 50};
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
    msg.setTimeStamp(0.76442888205);
    msg.setSource(16027U);
    msg.setSourceEntity(6U);
    msg.setDestination(65406U);
    msg.setDestinationEntity(239U);
    msg.seq = 57282U;
    msg.value = 31U;
    msg.error.assign("APVHVQDUQIQMIUSHZWOMPTFVGEVEKHBVJFIFKMLYVGYJ");

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
    msg.setTimeStamp(0.497402572679);
    msg.setSource(42980U);
    msg.setSourceEntity(217U);
    msg.setDestination(31453U);
    msg.setDestinationEntity(94U);
    msg.seq = 2259U;
    msg.value = 75U;
    msg.error.assign("QPRUYJUDHSURHBTTECRYJZSSJPJPONCGMLLIRUSTFHDULNPZFJZDTAGNXTJCNIRYAOFQLEXFETJHJAGEEUDNSVSESMZGHDWAJSSIKRITZHDVIUGRBGWMBPCGQGPZKDKAQDIEOAPXLVRLJVAIIAWCCKOXHLYMKLWNTWBGKNSHLTQCPQWCVZXWXCKHVQXOO");

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
    msg.setTimeStamp(0.379977455689);
    msg.setSource(20562U);
    msg.setSourceEntity(240U);
    msg.setDestination(46008U);
    msg.setDestinationEntity(77U);
    msg.seq = 14137U;
    msg.value = 0U;
    msg.error.assign("ARVWGEQQJKUVGFIRIZMFZDSLCYSADBPMHNWSXOFB");

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
    msg.setTimeStamp(0.823183119035);
    msg.setSource(54149U);
    msg.setSourceEntity(241U);
    msg.setDestination(52980U);
    msg.setDestinationEntity(78U);
    msg.seq = 36056U;
    msg.sys.assign("OAGKKOUWGCRUZQURUFTWSUXSLSM");
    msg.value = 0.63929915497;

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
    msg.setTimeStamp(0.647087396328);
    msg.setSource(54433U);
    msg.setSourceEntity(0U);
    msg.setDestination(32952U);
    msg.setDestinationEntity(178U);
    msg.seq = 48848U;
    msg.sys.assign("MCHVDALAIUFYFLODXUYZIQHIFANVUDOJTMPGOGAANMRVMRENHEJXWNUGPEREFBFOKJNZALQEISKUOARPFSYMOCKUCXKVBTRUHMXIPVGTZYENGUPKFCOOTIWKAJGEYSYSYKQWDXLDUQQPVCMFW");
    msg.value = 0.525976515605;

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
    msg.setTimeStamp(0.860751750976);
    msg.setSource(42507U);
    msg.setSourceEntity(175U);
    msg.setDestination(12106U);
    msg.setDestinationEntity(28U);
    msg.seq = 9439U;
    msg.sys.assign("PBSJZVOBCYAXOKGVTLQLFHVVKOCMUTHGHPVFESSDPGQMXPJIXPVJHBDAKEMGNUEYMEBWQGENRDCNOJOJUHDUWPVXFHRDERBAIVWRWWBVDZMVPHCYMCPQZGDIJRLLDABOUANWLZUOWK");
    msg.value = 0.879512455842;

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
    msg.setTimeStamp(0.0911422302123);
    msg.setSource(23530U);
    msg.setSourceEntity(40U);
    msg.setDestination(50726U);
    msg.setDestinationEntity(25U);
    msg.action = 126U;
    msg.longain = 0.916880163867;
    msg.latgain = 0.618128929609;
    msg.bondthick = 836323730U;
    msg.leadgain = 0.182429149486;
    msg.deconflgain = 0.508932528518;

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
    msg.setTimeStamp(0.280241541712);
    msg.setSource(53895U);
    msg.setSourceEntity(254U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(106U);
    msg.action = 231U;
    msg.longain = 0.27251713275;
    msg.latgain = 0.862119052191;
    msg.bondthick = 959458256U;
    msg.leadgain = 0.169273332842;
    msg.deconflgain = 0.642636603721;

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
    msg.setTimeStamp(0.156762100525);
    msg.setSource(24462U);
    msg.setSourceEntity(172U);
    msg.setDestination(24615U);
    msg.setDestinationEntity(87U);
    msg.action = 46U;
    msg.longain = 0.563856319788;
    msg.latgain = 0.800647254467;
    msg.bondthick = 320866022U;
    msg.leadgain = 0.0966160643381;
    msg.deconflgain = 0.2044678723;

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
    msg.setTimeStamp(0.33114315276);
    msg.setSource(37819U);
    msg.setSourceEntity(36U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(21U);
    msg.err_mean = 0.911545528054;
    msg.dist_min_abs = 0.0600299680114;
    msg.dist_min_mean = 0.853329081731;

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
    msg.setTimeStamp(0.795602006639);
    msg.setSource(30325U);
    msg.setSourceEntity(116U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(214U);
    msg.err_mean = 0.201906710363;
    msg.dist_min_abs = 0.907640498601;
    msg.dist_min_mean = 0.449551916062;

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
    msg.setTimeStamp(0.971536962427);
    msg.setSource(15216U);
    msg.setSourceEntity(88U);
    msg.setDestination(40644U);
    msg.setDestinationEntity(224U);
    msg.err_mean = 0.882855917351;
    msg.dist_min_abs = 0.648725898477;
    msg.dist_min_mean = 0.786568881207;

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
    msg.setTimeStamp(0.957765177005);
    msg.setSource(27101U);
    msg.setSourceEntity(208U);
    msg.setDestination(1464U);
    msg.setDestinationEntity(131U);
    msg.action = 216U;
    msg.lon_gain = 0.753251368908;
    msg.lat_gain = 0.946382632997;
    msg.bond_thick = 0.485466600108;
    msg.lead_gain = 0.937158468378;
    msg.deconfl_gain = 0.573870576479;
    msg.accel_switch_gain = 0.181726570781;
    msg.safe_dist = 0.103952078102;
    msg.deconflict_offset = 0.817242285473;
    msg.accel_safe_margin = 0.432393573419;
    msg.accel_lim_x = 0.773575110062;

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
    msg.setTimeStamp(0.110412160981);
    msg.setSource(63020U);
    msg.setSourceEntity(64U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(74U);
    msg.action = 34U;
    msg.lon_gain = 0.202466313277;
    msg.lat_gain = 0.828901760785;
    msg.bond_thick = 0.904893479995;
    msg.lead_gain = 0.872036097462;
    msg.deconfl_gain = 0.0250773424312;
    msg.accel_switch_gain = 0.370031506819;
    msg.safe_dist = 0.119119920933;
    msg.deconflict_offset = 0.358507842253;
    msg.accel_safe_margin = 0.796886891943;
    msg.accel_lim_x = 0.0284765344379;

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
    msg.setTimeStamp(0.601882237819);
    msg.setSource(57664U);
    msg.setSourceEntity(88U);
    msg.setDestination(28541U);
    msg.setDestinationEntity(244U);
    msg.action = 107U;
    msg.lon_gain = 0.346683742458;
    msg.lat_gain = 0.606412421782;
    msg.bond_thick = 0.908572082499;
    msg.lead_gain = 0.804106466543;
    msg.deconfl_gain = 0.790272464539;
    msg.accel_switch_gain = 0.298949323826;
    msg.safe_dist = 0.83957128324;
    msg.deconflict_offset = 0.157192101976;
    msg.accel_safe_margin = 0.718127591044;
    msg.accel_lim_x = 0.745085632371;

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
    msg.setTimeStamp(0.346742565764);
    msg.setSource(8124U);
    msg.setSourceEntity(88U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(7U);
    msg.type = 18U;
    msg.op = 1U;
    msg.err_mean = 0.112033517799;
    msg.dist_min_abs = 0.634653935771;
    msg.dist_min_mean = 0.460817517097;
    msg.roll_rate_mean = 0.488193901325;
    msg.time = 0.401162879752;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 13U;
    tmp_msg_0.lon_gain = 0.620787187473;
    tmp_msg_0.lat_gain = 0.871157330773;
    tmp_msg_0.bond_thick = 0.2004360151;
    tmp_msg_0.lead_gain = 0.48796148214;
    tmp_msg_0.deconfl_gain = 0.240468628062;
    tmp_msg_0.accel_switch_gain = 0.616156694635;
    tmp_msg_0.safe_dist = 0.31813178109;
    tmp_msg_0.deconflict_offset = 0.195561114811;
    tmp_msg_0.accel_safe_margin = 0.260982516124;
    tmp_msg_0.accel_lim_x = 0.655470120839;
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
    msg.setTimeStamp(0.323911468768);
    msg.setSource(61496U);
    msg.setSourceEntity(127U);
    msg.setDestination(52645U);
    msg.setDestinationEntity(59U);
    msg.type = 16U;
    msg.op = 51U;
    msg.err_mean = 0.0808784495645;
    msg.dist_min_abs = 0.454007875604;
    msg.dist_min_mean = 0.976518730755;
    msg.roll_rate_mean = 0.934980821664;
    msg.time = 0.503761640896;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 197U;
    tmp_msg_0.lon_gain = 0.282395552973;
    tmp_msg_0.lat_gain = 0.649204251675;
    tmp_msg_0.bond_thick = 0.564286773402;
    tmp_msg_0.lead_gain = 0.679051845222;
    tmp_msg_0.deconfl_gain = 0.896006657125;
    tmp_msg_0.accel_switch_gain = 0.1310659006;
    tmp_msg_0.safe_dist = 0.470222504555;
    tmp_msg_0.deconflict_offset = 0.408491680751;
    tmp_msg_0.accel_safe_margin = 0.61905159739;
    tmp_msg_0.accel_lim_x = 0.120545188645;
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
    msg.setTimeStamp(0.226087389448);
    msg.setSource(24840U);
    msg.setSourceEntity(177U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(149U);
    msg.type = 185U;
    msg.op = 82U;
    msg.err_mean = 0.373980263446;
    msg.dist_min_abs = 0.505172950534;
    msg.dist_min_mean = 0.209112620199;
    msg.roll_rate_mean = 0.505210375984;
    msg.time = 0.684660086021;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 237U;
    tmp_msg_0.lon_gain = 0.217231982476;
    tmp_msg_0.lat_gain = 0.183378790809;
    tmp_msg_0.bond_thick = 0.736561022412;
    tmp_msg_0.lead_gain = 0.861127100377;
    tmp_msg_0.deconfl_gain = 0.641319485954;
    tmp_msg_0.accel_switch_gain = 0.00408874718801;
    tmp_msg_0.safe_dist = 0.940077615726;
    tmp_msg_0.deconflict_offset = 0.902260302873;
    tmp_msg_0.accel_safe_margin = 0.424596994389;
    tmp_msg_0.accel_lim_x = 0.47882357254;
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
    msg.setTimeStamp(0.172162182923);
    msg.setSource(59137U);
    msg.setSourceEntity(230U);
    msg.setDestination(28035U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.932916550913;
    msg.lon = 0.196484420385;
    msg.eta = 627460938U;
    msg.duration = 55711U;

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
    msg.setTimeStamp(0.789754798115);
    msg.setSource(40340U);
    msg.setSourceEntity(117U);
    msg.setDestination(3208U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.738147488737;
    msg.lon = 0.00722978505722;
    msg.eta = 514655243U;
    msg.duration = 12432U;

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
    msg.setTimeStamp(0.0337635641133);
    msg.setSource(46999U);
    msg.setSourceEntity(2U);
    msg.setDestination(13991U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.563260121715;
    msg.lon = 0.398119498561;
    msg.eta = 4153506692U;
    msg.duration = 39496U;

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
    msg.setTimeStamp(0.135304325463);
    msg.setSource(41093U);
    msg.setSourceEntity(112U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(131U);
    msg.plan_id = 14522U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.529494948882;
    tmp_msg_0.lon = 0.810925914842;
    tmp_msg_0.eta = 3110746138U;
    tmp_msg_0.duration = 60598U;
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
    msg.setTimeStamp(0.868274553664);
    msg.setSource(8556U);
    msg.setSourceEntity(9U);
    msg.setDestination(58042U);
    msg.setDestinationEntity(247U);
    msg.plan_id = 56267U;

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
    msg.setTimeStamp(0.588417092293);
    msg.setSource(36523U);
    msg.setSourceEntity(52U);
    msg.setDestination(65277U);
    msg.setDestinationEntity(17U);
    msg.plan_id = 27889U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.371620582146;
    tmp_msg_0.lon = 0.436037531876;
    tmp_msg_0.eta = 2209697163U;
    tmp_msg_0.duration = 26220U;
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
    msg.setTimeStamp(0.320235755567);
    msg.setSource(16691U);
    msg.setSourceEntity(198U);
    msg.setDestination(32210U);
    msg.setDestinationEntity(82U);
    msg.type = 0U;
    msg.command = 58U;
    msg.settings.assign("GJKYOFRERFELSGSLHSVTMAHGVOWAGAXYJGFLNIBDWQBBGKIHIUTPQINFVLMDHNKDANVUTBYTIJZFVWPQA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43935U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ICWLGRYOKKAAIQGWBPZSFZUIOOTLFHZPXNODJSUPKOHHDUGMPRTGPIUXEYCDXDNRTGESWZLLTJNMJVJHXWKSTGPERHFXRQLAJXBISSQFBJFRCPGDHVTASDBMVYCJTQTYEUNKNETSNKWBGBIOKKVYDRONAWQRLNTIMZCZFGNAMXJIQYCKVWMYOFOASBXQVWLCXIYUCBFJZHSVZDUVNDCRJLIYHERPAFMBCAUOHZVBMHKLXZVDUELWPPYQ");

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
    msg.setTimeStamp(0.811625186015);
    msg.setSource(63877U);
    msg.setSourceEntity(241U);
    msg.setDestination(16162U);
    msg.setDestinationEntity(125U);
    msg.type = 212U;
    msg.command = 28U;
    msg.settings.assign("TJUHAAOZNKIETXEITQFYLPCRMMECZVSFNUGGQDJIOWWSRHBPHJEGVHGOUFYIRBMUXBDBKFVYSYJSKMRTGSNMLACTFHYPKOGRZNRAJIUPOPUJZOVAACDLZNRPDKFWUOBEZHOMNCNXKFSYSUCRETTYIOLBJAIVMLYGTCCHEWJBQFZRZEGXVHENLQUZFWPXBKDNVTNKLGWKDCQJSWQHLKHSVQVUEPVPCLWAIWTMRYDXXXBXABQQJXDQGAFW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 4830U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JABNSITPTLTDISFQRJSIAQNGMHLGJVFXDZAXIHSMKCRGKQCYJKNMDNDHFJMLZKUNMYCOPLQEHVESXYGYFHXBOXOQFDOFWSBGIRXSTVNRUKNWCSRTNOJYODACXUPVVCOAISZBHMIZKGIQELEFQWYBJAKJVZWLU");

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
    msg.setTimeStamp(0.22390339109);
    msg.setSource(52244U);
    msg.setSourceEntity(210U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(96U);
    msg.type = 95U;
    msg.command = 133U;
    msg.settings.assign("QCQHQALXQLNUNBEHDCZCQFZPROKXEJNHUZFFCGONBLNILLLSGIRGIJMDVARGJOQZWRMIQYKOTGVBMRRAMAVNWWPXEYHXUNYRAIKHSEEFGPI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 13440U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.336586331488;
    tmp_tmp_msg_0_0.lon = 0.14077049698;
    tmp_tmp_msg_0_0.eta = 238896509U;
    tmp_tmp_msg_0_0.duration = 22646U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SRQOAKZBDYUSYGRHFQFFNKINPMANOVVXKKKAGBZXTVMWRLOMMJSPGCLUGARWHEWUSYFZAPDEHNAKYEXBACVJOWXTXCBODHINBTJYIFIVJUQKWRTJORIBLLRFXUPNQQDMTCLIJIBJSASOPZTWMDNWXUIOCJRSOMKZASHREZFX");

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
    msg.setTimeStamp(0.765476113914);
    msg.setSource(28689U);
    msg.setSourceEntity(34U);
    msg.setDestination(27148U);
    msg.setDestinationEntity(84U);
    msg.state = 53U;
    msg.plan_id = 38877U;
    msg.wpt_id = 74U;
    msg.settings_chk = 50911U;

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
    msg.setTimeStamp(0.497839664586);
    msg.setSource(12663U);
    msg.setSourceEntity(158U);
    msg.setDestination(28896U);
    msg.setDestinationEntity(172U);
    msg.state = 122U;
    msg.plan_id = 18049U;
    msg.wpt_id = 46U;
    msg.settings_chk = 64910U;

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
    msg.setTimeStamp(0.339427522307);
    msg.setSource(42488U);
    msg.setSourceEntity(84U);
    msg.setDestination(32106U);
    msg.setDestinationEntity(9U);
    msg.state = 85U;
    msg.plan_id = 46915U;
    msg.wpt_id = 163U;
    msg.settings_chk = 3527U;

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
    msg.setTimeStamp(0.516386793971);
    msg.setSource(6536U);
    msg.setSourceEntity(196U);
    msg.setDestination(52211U);
    msg.setDestinationEntity(70U);
    msg.uid = 0U;
    msg.frag_number = 104U;
    msg.num_frags = 4U;
    const char tmp_msg_0[] = {-83, 38, 6, 43, 68, -2, -95, -125, 88, -72, -70, -113, 105, -76, -99, -27, -8, 30, 105, 0, 106, -6, -3, -7, 55, 79, -48, 56, -26, 87, 118, 115, 122, -121, -89, -56, 60, 40, 99, -5, 122, 112, -22, 45, -25, -9, -119, 77, 113, 57, -9, 10, -67, 108, -58, -12, 120, -8, 96, -8, -107, -90, -22, -77, 87, -83, 47, -98, 23, -56, -113, -49, 69, 29, 34, 29, 10, -43, 120, -110, -76, 88, 9, 40, 83, -77, 91, -58, 91, -91, 82, -17, 4, -43};
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
    msg.setTimeStamp(0.163464291942);
    msg.setSource(844U);
    msg.setSourceEntity(157U);
    msg.setDestination(5696U);
    msg.setDestinationEntity(203U);
    msg.uid = 65U;
    msg.frag_number = 131U;
    msg.num_frags = 82U;
    const char tmp_msg_0[] = {-21, -4, -110, 68, -97, 58, 98, -89, 86, 39, -88, 83, -35, -66, -68, -47, -7, -32, 118, 77, -13, -43, -3, -97, 111, -115, -59, -31, -75, 89, 43, 30, -18, -2, -89, -10, -18, 95, 56, -109, 60, 42, 6, 18, -32, 93, 41, 106, 49, 106, -86, 55, 50, -98, -74, -51, -39, -107, -120, -12, -12, 25, -77, 98, 40, 101, -2, 49, 53, 96, 74, 25, 116, 126, -68, 21, -3, -55, 10, -76, 84, -84, -69, -55, 88, -20, -51, 1, 42, 83, -35, -54, 101, 98, 113, 17, 6, -85, 108, -47, -114, 59, -91, -54, -60, -72, -94, 70, -59, -116, 90, 61, -61, 66, 81, 63, -75, 10, -128, 75, -11, -6, 48, -14, 97, 9, 96, -120, -63, -84, -128, 23, -96, 34, 56, 108, 0, 8, 20, 67, 94, -78, -89, -118, 57, -108, -92, -4, 118, -37, 90, 74, 65, 14, -74, 37, 106, 116, 76, -87, 100, 84, -96, -93, 105, -33, -90, -90, -62, 42, -21, 106, 76, 71, -109, 93, 110, 37, 48, -103, 54, -82, 14, 2, -104, -68, 46, -112, 64, -16, 66, -109, 83, -74, 22, 25, -15, 80, -86, 107, -108, 12, -57, 7, -38, 60, 81, 30, -36, 115, 50, -3, 105, -121, 50, -105};
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
    msg.setTimeStamp(0.694329930806);
    msg.setSource(37953U);
    msg.setSourceEntity(75U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(105U);
    msg.uid = 102U;
    msg.frag_number = 237U;
    msg.num_frags = 148U;
    const char tmp_msg_0[] = {-64, 55, -66, -42, 51, -55, 121, -84, -96, -109, 4, 15, -35, -108, -69, 7, 109, -49, 76, -36, -78, 109, -1, -28, 8, -77, 53, 98, 121, -30, -100, -62, -77, -40, -2, -35, 91, -47, -74, 45, -32, 65, -58, 102, 99, -26, 69, -41, -65, 56, 32, -32, -47, 98, -89, 48, -18, -97, -35, 126, 77, -13, -61, -82, -89, 113, 112, -98, -124, 27, -78, 79, 39, 73, -112, -83, 119, 18, -65, 51, -118, -54, -62, 33, 26, 47, 123, 45, -124, -46, -36, -78, -82, 37, 118, 44, -103, 119, 27, -43, -56, 20, 9, 36, 101, 122, 22, 59, 27, -83, -104, -96, 10, -36, -37, 126, 78, -55, 82, 121, -58, -92, -42, -51, 16, 6, 119, 110, 107, -104, 126, -97, 83, 28, 108, 9, 65, 76, -114, -121, 69, -17, -6, 41, -37, -81, 26, -47, 37, 111, -68, 114, -62, 102, -83, 6, -18, -43, -63, 71, 95, -7, -117, -41, 4, -73, -110, -85, -85, 9, 49, 89, 39, -51, -70, 76, 53, -1, 80, -54, -72, -91, 55, -48, -26, -74, 33, 65, 121, 11, 125, 14, -4};
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
    msg.setTimeStamp(0.0804005789504);
    msg.setSource(41523U);
    msg.setSourceEntity(76U);
    msg.setDestination(9656U);
    msg.setDestinationEntity(217U);
    msg.content_type.assign("KKGCZWYRTBJDREAGTDSLQIHSSGBCFZAXVWZNBYQCBRUIDSANBKVDARBJXULCSTMGHUQCRRYJMAZFIFKZ");
    const char tmp_msg_0[] = {3, -27, 77, -69, 8, 88, -21, 82, -83, -33};
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
    msg.setTimeStamp(0.779677875362);
    msg.setSource(56510U);
    msg.setSourceEntity(51U);
    msg.setDestination(25462U);
    msg.setDestinationEntity(109U);
    msg.content_type.assign("ZAJYEWBQOTKCPUZXNFNWLIRYOHZNYZDBGFSLPRMCLRJKSQHMAZVLXOHGJMGPLBPUHIVAIITTHDQUBITVZNSWGQDJEPUOFYAYHICMEOUYLTNLWXVASTBECDRIWQPUSVPCSZTHCAUSJBUNXJDWPCYEWFOEMADQHMJOKJYCGAKKKL");
    const char tmp_msg_0[] = {34, -80, 114, -19, 112, 117, -111, 36, -74, -16, 106, -22, -17, 71, 68, -39, -111, -97, -10, 32, -13, -121, -110, 120, 31, 115, 100, -27, 35, -33, 77, -64, 92, 19, 11, 27, -55, 11, 81, 69, 90, 35, 102, -10, 103, 79, -30, 74, -97, 58, -75, -61, -110, 1, 43, 64, -103, -47, -40, -15, 96, 37, 54, 47, -2, 39, -76, 29, 96, -2, 118, 114, -121, -35, -71, -110, 27, -67, -32, 36, 8, 119, -31, 101, 43, -46, -49, -113, -2, -94, 22, -73, -35, -70, -84, -84, -57, 68, -29, -5, 49, -38, -90, 17, 80, -11, 93, -125, -98, 40, 91, -43, 85, -43, 22, 69, -28, 15, -33, -106, 90, -115, -77, -117, 99, -13, 123, 15, -29, 89, -6, 81, 7, 107, -85, 4, 111, -43, 55, 126, -26, 31};
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
    msg.setTimeStamp(0.690041266186);
    msg.setSource(28697U);
    msg.setSourceEntity(110U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("LHLTPNAABTGOOIKBIXHIJVMGCDBOPYJEBWWFPFWSFEADTSLJ");
    const char tmp_msg_0[] = {6, 21, -91, 46, 45, -3, -123, 107, -120, 26, -50, 29, -84, -95, -28, 30, 2, -74, -105, -12, 52, 94, -2, 40, 88, 122, -68, 13, -112, -10, -26, -45, 109, -90, -21, 66, 94, 28, -118, -87, 81, -30, 60, 52, -87, -29, 27, -79, -103, -88, 24, -13, -14, -64, -67, -4, 54, -121, 77, 63, 60, -56, -61, -98, -2, -30, 45, -36, -49, 114, 51, 77, -113, 117, 92, 99, -97, 40, 79, -65, -89, 118, -100, -126, -7, -37, 67, -3, -24, 100, -111, -52, -80, -2, -119, -22, -106, -32, 37, -41, -48, -68, -20, -20, 125, -12, 13, 70, -74, -96, -105, -41, 33, -114, -21, -51, 70, 53, 70, 50, 16, -60, 19, -79, 92, 61, 84, -56, -84, -42, -102, -12, 104, 52, 119, -81, 1, 8, -124, 95, -3, -28, 123, -4, -43, -20, -62, -117, -77, 102, 2, 125, -51, 47, -42, -17, -45, -74, -52, 66, 24, 48, 5, -81, 39, 116, 86, -46, 75, 0, 117, 41, -100, 11, -16, -117, 94, -59, -88, -54, 108, 126, -65, 2, 5, -55, 43, 69, 7, 84, 110, -26, 15, 99, -126, 99, -74, 109, 13, 80, -81, -43, -127, 42, -72, 123, -105, -12, -65, 74, 26, 62, -126, -55, -15, 117, -19, 80, 92, -48, 81, 25, 5, -85, 71, 6, -128, -16, -16, -23, 64, 95};
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
    msg.setTimeStamp(0.618916027852);
    msg.setSource(13790U);
    msg.setSourceEntity(71U);
    msg.setDestination(61312U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.432568074087);
    msg.setSource(24202U);
    msg.setSourceEntity(249U);
    msg.setDestination(24414U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.193350886734);
    msg.setSource(44978U);
    msg.setSourceEntity(20U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.398132268917);
    msg.setSource(29505U);
    msg.setSourceEntity(149U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(104U);
    msg.target = 54503U;
    msg.bearing = 0.853855470325;
    msg.elevation = 0.657843718126;

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
    msg.setTimeStamp(0.726072749102);
    msg.setSource(25702U);
    msg.setSourceEntity(75U);
    msg.setDestination(49876U);
    msg.setDestinationEntity(120U);
    msg.target = 26954U;
    msg.bearing = 0.406274955236;
    msg.elevation = 0.81559888534;

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
    msg.setTimeStamp(0.534797599515);
    msg.setSource(51287U);
    msg.setSourceEntity(89U);
    msg.setDestination(44674U);
    msg.setDestinationEntity(54U);
    msg.target = 18722U;
    msg.bearing = 0.217218158398;
    msg.elevation = 0.466895679725;

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
    msg.setTimeStamp(0.806053396811);
    msg.setSource(64172U);
    msg.setSourceEntity(121U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(144U);
    msg.target = 28367U;
    msg.x = 0.938943068574;
    msg.y = 0.29353523544;
    msg.z = 0.268305417515;

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
    msg.setTimeStamp(0.689328644801);
    msg.setSource(47236U);
    msg.setSourceEntity(212U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(99U);
    msg.target = 59668U;
    msg.x = 0.521498730929;
    msg.y = 0.0342751855933;
    msg.z = 0.828534848821;

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
    msg.setTimeStamp(0.771444035394);
    msg.setSource(60412U);
    msg.setSourceEntity(84U);
    msg.setDestination(34607U);
    msg.setDestinationEntity(228U);
    msg.target = 5750U;
    msg.x = 0.553642236441;
    msg.y = 0.874722022177;
    msg.z = 0.04123658361;

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
    msg.setTimeStamp(0.78353054355);
    msg.setSource(5385U);
    msg.setSourceEntity(236U);
    msg.setDestination(65263U);
    msg.setDestinationEntity(148U);
    msg.target = 19448U;
    msg.lat = 0.239422091764;
    msg.lon = 0.328385733674;
    msg.z_units = 242U;
    msg.z = 0.636416446163;

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
    msg.setTimeStamp(0.341418830333);
    msg.setSource(15243U);
    msg.setSourceEntity(10U);
    msg.setDestination(32235U);
    msg.setDestinationEntity(166U);
    msg.target = 2612U;
    msg.lat = 0.278479441397;
    msg.lon = 0.260267933052;
    msg.z_units = 215U;
    msg.z = 0.453113010075;

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
    msg.setTimeStamp(0.626735683104);
    msg.setSource(16616U);
    msg.setSourceEntity(91U);
    msg.setDestination(49266U);
    msg.setDestinationEntity(27U);
    msg.target = 8523U;
    msg.lat = 0.938243247457;
    msg.lon = 0.00293418232169;
    msg.z_units = 49U;
    msg.z = 0.867443758195;

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
    msg.setTimeStamp(0.0425853141195);
    msg.setSource(57362U);
    msg.setSourceEntity(159U);
    msg.setDestination(4410U);
    msg.setDestinationEntity(230U);
    msg.locale.assign("UAQAIDDSBZDJMDRYBVYIJCYPDLYKHMOPSZATQALSRBMEXOKBLJVFROXMDJDLHMXWLUZAXNHBPUSXIEFVONJVLCFNSDQZCOWADSWGOJPJOCTKODEHLGNZXATURWRENNZUEAQWCXZZQCGKBJGKXGVYUBFMFWUGIRFBSEUXPHFPKQAWYILOXMQHVEMINUTNWTFCPPERCWVYIKZBEFFYRGGRARHQSCN");
    const char tmp_msg_0[] = {88, 59, -110, -116, 95, 84, -93, -90, 116, -95, -9, -32, -12, -110, 38, 0, 116, -79, -88, -5, 91, 126, -71, 9, 25, -127, -70, 6, -6, -6, 55, 61, -82, -106, -30, 61, -67, 50, -94};
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
    msg.setTimeStamp(0.680430517126);
    msg.setSource(21461U);
    msg.setSourceEntity(151U);
    msg.setDestination(28844U);
    msg.setDestinationEntity(147U);
    msg.locale.assign("VZZMDNBDMNAQSPYVVUZEOSUFZWNJKBLOXKFBQQZEGPFUGCPFCCUGDLUQMRLWXTYELCGIHFKGPVWCEBJJIXXNZQDRAGWYTOUCTSHERXPNYAGGUVSBTTMEMLOPSGSNSJICYAXZBWSFOKKGCMHWDHIBRPWURYLHKMRZVOPXTATUNBWNDCDHRAEAPOIFYHSQFPSZZUEOJNARIQYBTIXOKIADJLMQBHIDTFJVYI");
    const char tmp_msg_0[] = {-114, -112, 114, -31, 51, -23, -115, 14, 49, -90, 109, -89, -77, 61, -59, 48, -56, 36, 83, -17, 85, -16, -93, -32, 96, -96, -127, -86, 97, -37, 37, -116, 66, 124, -79, 10, -85, 61, -19, -35, -126, 28, -76, 34, 15, -80, -106, 43, -92, 35, -57, 32, 111, 123, -78, -110, 20, -44, 108, 126, -56, 51, -103, -1, -70, -54, -65, -99, -27, -10, 104, 97, -125, -4, 123, 29, 39, -64, 109, 67, 16, 122, -3, -112, -40, -37, 61, -33, -31, -96, -61, -47, -96, 14, 39, -38, -51, -73, 91, -113, -75, -7, -44, 66, -33, 120, -42, -48, 34, -74, -117, -27, 69, 28, 51, 66, -3, -95, 114, -6, 26, -84, 50, -6, -10, 117, 75, -96, -20};
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
    msg.setTimeStamp(0.645342810699);
    msg.setSource(61085U);
    msg.setSourceEntity(104U);
    msg.setDestination(63893U);
    msg.setDestinationEntity(227U);
    msg.locale.assign("PKTQBYXQLOLAFSNVFPENBRBUECJTS");
    const char tmp_msg_0[] = {89, -41, -69, -66, 60, -76, 111, 89, -79, 25, -27, 61, -124, -27, -74, 78, -1, 54, 27, 22, -76, -18, 60, -44, 104, 68, -10, -119, 18, 77, -4, 47, -36, 50, 25, 32, 30, 118, -37, 62, -99, 81, -35, 66, 107, -29, 112, 76, 98, -101, 71, 30, 26, 51, -21, 61, -60, -122, -66, -36, 84, 119, 117, 72, -81, 71, -101, 123, 114, 117, -106, 76, 2, -105, -81, -42, -76, 74, 10, 103, -48, 71, -13, -121, 6, 9, 83, -44, 25, 61, -113, 7, 32, -114, 28, -81, 99, 115, 32, 62, 30, 78, 70, 15, -58, -102, 126, 116, -13, -59, 85, -62, -53, 40, -71, -27, -107, -59, -98, -53, -118, 37, 31, 47, 81, 120, 82, -11, 21, -93, -111, 52, 48, -15, 5, -66, -29, -81, 103, -85, -54, 113, 23, 66, -42, -8, 43, -98, 117, -98, 8, -114, -42, 99, -58, -54, 32, -28, -122, 35, 112, 70, 15, -92, 80, 67, -35, 3, -109, -63, 116, -37, 33, 26, 44, 107, 64, -105, 126, -95, 50, -35, 107, -37};
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
    msg.setTimeStamp(0.617069475234);
    msg.setSource(62558U);
    msg.setSourceEntity(118U);
    msg.setDestination(8885U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.121795717272);
    msg.setSource(22582U);
    msg.setSourceEntity(26U);
    msg.setDestination(43718U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.146333369504);
    msg.setSource(14812U);
    msg.setSourceEntity(157U);
    msg.setDestination(55591U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.0214015659356);
    msg.setSource(11227U);
    msg.setSourceEntity(65U);
    msg.setDestination(11652U);
    msg.setDestinationEntity(67U);
    msg.camid = 182U;
    msg.x = 23604U;
    msg.y = 30981U;

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
    msg.setTimeStamp(0.972871798827);
    msg.setSource(45874U);
    msg.setSourceEntity(99U);
    msg.setDestination(6416U);
    msg.setDestinationEntity(145U);
    msg.camid = 70U;
    msg.x = 38011U;
    msg.y = 14624U;

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
    msg.setTimeStamp(0.177694338944);
    msg.setSource(36662U);
    msg.setSourceEntity(69U);
    msg.setDestination(51831U);
    msg.setDestinationEntity(1U);
    msg.camid = 148U;
    msg.x = 49484U;
    msg.y = 20435U;

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
    msg.setTimeStamp(0.951976514267);
    msg.setSource(53399U);
    msg.setSourceEntity(218U);
    msg.setDestination(18151U);
    msg.setDestinationEntity(79U);
    msg.camid = 41U;
    msg.x = 22753U;
    msg.y = 13264U;

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
    msg.setTimeStamp(0.952122068723);
    msg.setSource(12095U);
    msg.setSourceEntity(242U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(27U);
    msg.camid = 20U;
    msg.x = 26975U;
    msg.y = 30163U;

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
    msg.setTimeStamp(0.115925620674);
    msg.setSource(44031U);
    msg.setSourceEntity(46U);
    msg.setDestination(19154U);
    msg.setDestinationEntity(114U);
    msg.camid = 165U;
    msg.x = 56131U;
    msg.y = 52655U;

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
    msg.setTimeStamp(0.404443888274);
    msg.setSource(436U);
    msg.setSourceEntity(235U);
    msg.setDestination(43822U);
    msg.setDestinationEntity(199U);
    msg.tracking = 51U;
    msg.lat = 0.521561156524;
    msg.lon = 0.584457532402;
    msg.x = 0.527020030153;
    msg.y = 0.232216313773;
    msg.z = 0.630146956326;

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
    msg.setTimeStamp(0.441407357288);
    msg.setSource(33477U);
    msg.setSourceEntity(77U);
    msg.setDestination(21361U);
    msg.setDestinationEntity(229U);
    msg.tracking = 254U;
    msg.lat = 0.7677919522;
    msg.lon = 0.577005478306;
    msg.x = 0.13440318978;
    msg.y = 0.70441691221;
    msg.z = 0.402640831965;

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
    msg.setTimeStamp(0.216625744481);
    msg.setSource(37224U);
    msg.setSourceEntity(136U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(6U);
    msg.tracking = 12U;
    msg.lat = 0.065293294288;
    msg.lon = 0.593857490123;
    msg.x = 0.79708954053;
    msg.y = 0.0612138697608;
    msg.z = 0.1045650128;

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
    msg.setTimeStamp(0.91690564182);
    msg.setSource(9917U);
    msg.setSourceEntity(199U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(146U);
    msg.target.assign("HCLCPLFXUCPXMEMUJOSPWZFUDBVIVNLCIQZMWTSOKYKPPDRYETSEDQDJFUIRIUTAJCJUHAVHRBEYKBQQFDJPGAWGTAPNXYTPNCBNGYLIHLNFIZNTHBWVJYOAZFVEKEUHWDJRQGKSLTXEXFYCJKKGWMHUSTJHFKZOZMDESMTWULZBQXSXWBYECVGHLQVIX");
    msg.lbearing = 0.250074649625;
    msg.lelevation = 0.206121525869;
    msg.bearing = 0.43648637134;
    msg.elevation = 0.314460295749;
    msg.phi = 0.815193797449;
    msg.theta = 0.575672051255;
    msg.psi = 0.534158693575;
    msg.accuracy = 0.748693403926;

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
    msg.setTimeStamp(0.166115439466);
    msg.setSource(24416U);
    msg.setSourceEntity(199U);
    msg.setDestination(5780U);
    msg.setDestinationEntity(130U);
    msg.target.assign("OYNDNEGWOFBCQQMMONDXFSXDBWSPIRQKRBYTKZCATDPENZCVUWZBLHJMSVZHCRJPMCLLIRDBZEMDOUYNXJUCUPYTRJXTPYWXYSJRMLPLWXFVUWPAQARIBIICVOGAHAJNIMINSILTTRCSGDNVTGMUVFVSFWTXGHKZOOHANKQMMEYIYHAPFAZKBZFGHLIKHNVEKBUXQQDGOKEDKXQ");
    msg.lbearing = 0.710287417169;
    msg.lelevation = 0.816162945183;
    msg.bearing = 0.0095953927244;
    msg.elevation = 0.997029783244;
    msg.phi = 0.30145834178;
    msg.theta = 0.900071156626;
    msg.psi = 0.779120920982;
    msg.accuracy = 0.460093708041;

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
    msg.setTimeStamp(0.606400140677);
    msg.setSource(61281U);
    msg.setSourceEntity(250U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(172U);
    msg.target.assign("BQUSEEMGRLAHHZVIFATOCLAARVBIKLSOZNHSHPTJNKMHXBJMBVYEDNYLYQBDADVAINKXQEOUCDSGXJGWTARGLMDYUYWGQMZMOJFQGPCZYYIUNOWKYFUNTJJRCRVCWGTXJPHGSFCZBVKXKFIPWRLTPZBAETPXROPCOK");
    msg.lbearing = 0.0752849187697;
    msg.lelevation = 0.966359764672;
    msg.bearing = 0.879451228238;
    msg.elevation = 0.0146172887152;
    msg.phi = 0.291862408474;
    msg.theta = 0.366594115295;
    msg.psi = 0.664931813875;
    msg.accuracy = 0.635492105924;

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
    msg.setTimeStamp(0.214777413093);
    msg.setSource(21646U);
    msg.setSourceEntity(54U);
    msg.setDestination(52371U);
    msg.setDestinationEntity(45U);
    msg.target.assign("IUFWDPMAUSCWYMXEJFAVEEMRODQMVDWFOIVW");
    msg.x = 0.675550690334;
    msg.y = 0.95144855209;
    msg.z = 0.587924647767;
    msg.n = 0.423906076413;
    msg.e = 0.585377059056;
    msg.d = 0.403765195753;
    msg.phi = 0.189625564619;
    msg.theta = 0.318377659653;
    msg.psi = 0.284179328746;
    msg.accuracy = 0.10207549327;

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
    msg.setTimeStamp(0.45257748379);
    msg.setSource(24993U);
    msg.setSourceEntity(71U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(125U);
    msg.target.assign("NJHEYKSSCIETXLZEWNDAKYGPQKELMIVRWLDJUYOJLXCHMAWEEBQHZYDKYIAGRDKQUUJUSGFVCRIVTXDGNMEAGWGAVVHXDUQNBTSIFWSHBSBLXEIAHZCRZCBTBHKPDFMRABMFFVMUIASDOJQFRMGPWRRCWJITBOISYYVPMNCFOYXCIMHUNNRLYGVDTCKNEDTZQLFNSZVPPJOKKJZOQXOYTZZGHNWMLUVLRPPP");
    msg.x = 0.442328934698;
    msg.y = 0.531638582058;
    msg.z = 0.425496166721;
    msg.n = 0.583284049214;
    msg.e = 0.964776731438;
    msg.d = 0.352475987471;
    msg.phi = 0.952710028081;
    msg.theta = 0.796171614596;
    msg.psi = 0.811349806177;
    msg.accuracy = 0.456387539859;

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
    msg.setTimeStamp(0.730853492604);
    msg.setSource(1928U);
    msg.setSourceEntity(3U);
    msg.setDestination(2556U);
    msg.setDestinationEntity(96U);
    msg.target.assign("QKHIYOMKZVGYYAMGXIXEZHQOZJGQSQHMGUXNODECWQXRHPXFMSFFTVAHLYDBSPUKIBVUKJXBFJBFKGQXRUXWHTAAPQZPOQENVHSJRXFIJCMT");
    msg.x = 0.744542586524;
    msg.y = 0.845630285776;
    msg.z = 0.757377017869;
    msg.n = 0.227052304071;
    msg.e = 0.207147912078;
    msg.d = 0.361112993915;
    msg.phi = 0.918987718805;
    msg.theta = 0.393835730924;
    msg.psi = 0.73779470899;
    msg.accuracy = 0.028367524453;

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
    msg.setTimeStamp(0.852655387161);
    msg.setSource(42076U);
    msg.setSourceEntity(146U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(149U);
    msg.target.assign("MNMDWGIFLHZWYCORRUCLPBBKFZMKYBAGTFGKYHXMHTAQXHAXLWWDBWYEQZKNZ");
    msg.lat = 0.525252301235;
    msg.lon = 0.130736212072;
    msg.z_units = 194U;
    msg.z = 0.491841598154;
    msg.accuracy = 0.0933616598358;

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
    msg.setTimeStamp(0.228086883832);
    msg.setSource(1202U);
    msg.setSourceEntity(131U);
    msg.setDestination(11559U);
    msg.setDestinationEntity(106U);
    msg.target.assign("ROLGKDQIQLGJNVFUMNSUDOTWGJXHZSXUPPHDAVADECAVWKEIRZDVYOWLNAGPIQMJEFWLJXVIWJTFNMSRBLYGTRTOMDJVBPFGXBYFXD");
    msg.lat = 0.412346912121;
    msg.lon = 0.117025298925;
    msg.z_units = 254U;
    msg.z = 0.100062655889;
    msg.accuracy = 0.820034340323;

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
    msg.setTimeStamp(0.735992469134);
    msg.setSource(37888U);
    msg.setSourceEntity(12U);
    msg.setDestination(15189U);
    msg.setDestinationEntity(165U);
    msg.target.assign("BMNSYQNLKGOQHFZUENOWXTHGAIDNCYAIPIUMQZUYMLGJELHJTNVBGTDOHTFPCOORYZWBHSGNRVTLPHDJETPLVFXSOARHQKIXSLSAGGDOCMKVDZJSFXFZHKTXLWCQWGRZIFZYIAMDTUIMJCHCAJOBSCMLUJIYPNCR");
    msg.lat = 0.495105572851;
    msg.lon = 0.542104626871;
    msg.z_units = 27U;
    msg.z = 0.160842157663;
    msg.accuracy = 0.136602295822;

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
    msg.setTimeStamp(0.0768988588565);
    msg.setSource(31318U);
    msg.setSourceEntity(33U);
    msg.setDestination(63431U);
    msg.setDestinationEntity(214U);
    msg.name.assign("NWZRRWYVVEZFILUPWJCXRFLFFUAZLSMTJIGKWRENVSMUVXWKHBRHHUIJHDPTYFOPHROXIKOQJRTXTJBSMTQQLAPCAAKCEUVDSYSQPSMYONMNJEKIVRTYOJXVHCDTFZSBWCJHYBMEISTZZCKXEDLLLFZQRPE");
    msg.lat = 0.935715924647;
    msg.lon = 0.288242140398;
    msg.z = 0.0146532559352;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.620434461371);
    msg.setSource(61888U);
    msg.setSourceEntity(134U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(164U);
    msg.name.assign("PTUDYVMGNUXPKGEEGSXWYOZERVYXXBIDYTJFIMHICHPOUDISLGHCHSHGYVTAAPQJVQSPOEDRFWOICNXAZZKCWLIBEQGVGJTYSSMNPZLOMKPEJKQDRFMXWFZAULBJHYQRMCLMFUYPNTNDUXEZNQSZSYFBEOCKZFVTDIAHKBJJRBKIKBQWVOJGI");
    msg.lat = 0.266254553453;
    msg.lon = 0.8863892431;
    msg.z = 0.600067341291;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.552264292066);
    msg.setSource(53830U);
    msg.setSourceEntity(17U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(90U);
    msg.name.assign("ORFLGMGBLILF");
    msg.lat = 0.222409422059;
    msg.lon = 0.372764413845;
    msg.z = 0.0209471116657;
    msg.z_units = 236U;

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
    msg.setTimeStamp(0.738971603101);
    msg.setSource(3742U);
    msg.setSourceEntity(79U);
    msg.setDestination(45438U);
    msg.setDestinationEntity(149U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.105907535034);
    msg.setSource(47864U);
    msg.setSourceEntity(145U);
    msg.setDestination(59714U);
    msg.setDestinationEntity(31U);
    msg.op = 215U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DQJXTHWABADQXPIAWOADWOSEOLNIJBUCRFBYMWRQJNSVVGKFNGEHQYTYQOGTTKTBSVLRIZBLTRCQEQTYDMPWDCNFO");
    tmp_msg_0.lat = 0.172418987653;
    tmp_msg_0.lon = 0.489218247104;
    tmp_msg_0.z = 0.404694291359;
    tmp_msg_0.z_units = 55U;
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
    msg.setTimeStamp(0.0688731217736);
    msg.setSource(53850U);
    msg.setSourceEntity(235U);
    msg.setDestination(7791U);
    msg.setDestinationEntity(123U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.26180407765);
    msg.setSource(26063U);
    msg.setSourceEntity(130U);
    msg.setDestination(31233U);
    msg.setDestinationEntity(107U);
    msg.value = 0.0153207360134;
    msg.type = 177U;

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
    msg.setTimeStamp(0.986288059047);
    msg.setSource(10549U);
    msg.setSourceEntity(15U);
    msg.setDestination(9733U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0152765270765;
    msg.type = 68U;

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
    msg.setTimeStamp(0.298443067985);
    msg.setSource(65519U);
    msg.setSourceEntity(217U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(204U);
    msg.value = 0.491157570336;
    msg.type = 22U;

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
    msg.setTimeStamp(0.0681315652571);
    msg.setSource(24643U);
    msg.setSourceEntity(89U);
    msg.setDestination(48465U);
    msg.setDestinationEntity(33U);
    msg.value = 0.868374082922;

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
    msg.setTimeStamp(0.787222733871);
    msg.setSource(9057U);
    msg.setSourceEntity(42U);
    msg.setDestination(8324U);
    msg.setDestinationEntity(187U);
    msg.value = 0.473196406251;

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
    msg.setTimeStamp(0.831141742241);
    msg.setSource(8722U);
    msg.setSourceEntity(218U);
    msg.setDestination(55283U);
    msg.setDestinationEntity(46U);
    msg.value = 0.570496064541;

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
    msg.setTimeStamp(0.189564462549);
    msg.setSource(60558U);
    msg.setSourceEntity(23U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(239U);
    msg.timestamp_last_service = 0.335041711427;
    msg.time_next_service = 0.999197463795;
    msg.time_motor_next_service = 0.364430333694;
    msg.time_idle_ground = 0.291565506759;
    msg.time_idle_air = 0.347546576122;
    msg.time_idle_water = 0.253081315169;
    msg.time_idle_underwater = 0.0709162244164;
    msg.time_idle_unknown = 0.605994176338;
    msg.time_motor_ground = 0.155452312759;
    msg.time_motor_air = 0.332988835424;
    msg.time_motor_water = 0.843859376211;
    msg.time_motor_underwater = 0.674449802256;
    msg.time_motor_unknown = 0.750397570884;
    msg.rpm_min = 27829;
    msg.rpm_max = 7283;
    msg.depth_max = 0.850304486618;

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
    msg.setTimeStamp(0.250836449176);
    msg.setSource(17388U);
    msg.setSourceEntity(67U);
    msg.setDestination(34415U);
    msg.setDestinationEntity(182U);
    msg.timestamp_last_service = 0.492253584158;
    msg.time_next_service = 0.663036060253;
    msg.time_motor_next_service = 0.268357415007;
    msg.time_idle_ground = 0.959062740712;
    msg.time_idle_air = 0.931795827046;
    msg.time_idle_water = 0.677957262216;
    msg.time_idle_underwater = 0.165703759272;
    msg.time_idle_unknown = 0.540416002909;
    msg.time_motor_ground = 0.292242238558;
    msg.time_motor_air = 0.033789902893;
    msg.time_motor_water = 0.311891300312;
    msg.time_motor_underwater = 0.120366865847;
    msg.time_motor_unknown = 0.524302369647;
    msg.rpm_min = -12176;
    msg.rpm_max = 13710;
    msg.depth_max = 0.994199489754;

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
    msg.setTimeStamp(0.26173909744);
    msg.setSource(6611U);
    msg.setSourceEntity(31U);
    msg.setDestination(1672U);
    msg.setDestinationEntity(237U);
    msg.timestamp_last_service = 0.630105052301;
    msg.time_next_service = 0.560503503176;
    msg.time_motor_next_service = 0.487757361108;
    msg.time_idle_ground = 0.752922846495;
    msg.time_idle_air = 0.470163668885;
    msg.time_idle_water = 0.950221074032;
    msg.time_idle_underwater = 0.0953108761269;
    msg.time_idle_unknown = 0.171019806901;
    msg.time_motor_ground = 0.70128880696;
    msg.time_motor_air = 0.575958949481;
    msg.time_motor_water = 0.634425126205;
    msg.time_motor_underwater = 0.0154444175863;
    msg.time_motor_unknown = 0.00574834557383;
    msg.rpm_min = -21894;
    msg.rpm_max = -22815;
    msg.depth_max = 0.169800868975;

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
    msg.setTimeStamp(0.592768422528);
    msg.setSource(41747U);
    msg.setSourceEntity(241U);
    msg.setDestination(35993U);
    msg.setDestinationEntity(189U);
    msg.severity = 193U;
    msg.text.assign("ZDDPTZGVWNJKGCEIHLHQDQMIKXHMKTQNHDBARZORXPIBKPUWRNRUKZVTSUADUSZOMPMAXYLAQBCOLXWVTUOCTHEFXWUKGUN");

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
    msg.setTimeStamp(0.0441247798356);
    msg.setSource(41697U);
    msg.setSourceEntity(79U);
    msg.setDestination(22908U);
    msg.setDestinationEntity(229U);
    msg.severity = 109U;
    msg.text.assign("BPESNZLXWFCTSCSPUXZTWGAUUSVNUBLJQCJKHHJXGIWLPLHIRYEAXFFNYMRKLDVUDKNLRBPEPJSVJYSKHMLHOFMYGDRMRBMAXZC");

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
    msg.setTimeStamp(0.657844044883);
    msg.setSource(54531U);
    msg.setSourceEntity(247U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(62U);
    msg.severity = 11U;
    msg.text.assign("AYAYUMIZSUQIAJCJMYNGOKLSUTZCBAJUIISFBRKZWDOTBLIFQQHXXOYQMPVXBFBVMWPDNZJKYSTQDQQNUXNVEWDIRWZFEBKUKGHUPXEWSVDZERZ");

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
    msg.setTimeStamp(0.778608998238);
    msg.setSource(56214U);
    msg.setSourceEntity(204U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(6U);
    msg.channel = 59;
    msg.value = 401804462;
    msg.gain = 140U;

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
    msg.setTimeStamp(0.185870279742);
    msg.setSource(12434U);
    msg.setSourceEntity(212U);
    msg.setDestination(48414U);
    msg.setDestinationEntity(51U);
    msg.channel = 81;
    msg.value = 83772352;
    msg.gain = 134U;

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
    msg.setTimeStamp(0.994091248102);
    msg.setSource(36019U);
    msg.setSourceEntity(232U);
    msg.setDestination(27084U);
    msg.setDestinationEntity(220U);
    msg.channel = 56;
    msg.value = 639984300;
    msg.gain = 114U;

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
    msg.setTimeStamp(0.357547685902);
    msg.setSource(1488U);
    msg.setSourceEntity(225U);
    msg.setDestination(57059U);
    msg.setDestinationEntity(118U);
    msg.ch01 = 0.863289135008;
    msg.ch02 = 0.745663157364;
    msg.ch03 = 0.201074467386;
    msg.ch04 = 0.836125794116;
    msg.ch05 = 0.663043555287;
    msg.ch06 = 0.0124202090487;
    msg.ch07 = 0.730472825799;
    msg.ch08 = 0.100274920444;
    msg.ch09 = 0.0041471278501;
    msg.ch10 = 0.915596346312;
    msg.ch11 = 0.752941241265;
    msg.ch12 = 0.666564210545;
    msg.ch13 = 0.191651288027;
    msg.ch14 = 0.788506889411;
    msg.ch15 = 0.641901333539;
    msg.ch16 = 0.86949154946;

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
    msg.setTimeStamp(0.905416887651);
    msg.setSource(16628U);
    msg.setSourceEntity(61U);
    msg.setDestination(59139U);
    msg.setDestinationEntity(188U);
    msg.ch01 = 0.487580076509;
    msg.ch02 = 0.281592006932;
    msg.ch03 = 0.944642288749;
    msg.ch04 = 0.863056093399;
    msg.ch05 = 0.202751598117;
    msg.ch06 = 0.948750407979;
    msg.ch07 = 0.77765082689;
    msg.ch08 = 0.42967866012;
    msg.ch09 = 0.66595088274;
    msg.ch10 = 0.591935694733;
    msg.ch11 = 0.985478669877;
    msg.ch12 = 0.0525781545914;
    msg.ch13 = 0.579310852772;
    msg.ch14 = 0.644780259062;
    msg.ch15 = 0.948080787313;
    msg.ch16 = 0.869218546058;

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
    msg.setTimeStamp(0.586866716645);
    msg.setSource(2844U);
    msg.setSourceEntity(218U);
    msg.setDestination(3731U);
    msg.setDestinationEntity(233U);
    msg.ch01 = 0.0157822104626;
    msg.ch02 = 0.530598209178;
    msg.ch03 = 0.721304566965;
    msg.ch04 = 0.190803483122;
    msg.ch05 = 0.111436070704;
    msg.ch06 = 0.550611077045;
    msg.ch07 = 0.897636295092;
    msg.ch08 = 0.648296933608;
    msg.ch09 = 0.337707608555;
    msg.ch10 = 0.310336407962;
    msg.ch11 = 0.648887245182;
    msg.ch12 = 0.468177519314;
    msg.ch13 = 0.651399532937;
    msg.ch14 = 0.575700837191;
    msg.ch15 = 0.23695467508;
    msg.ch16 = 0.955802185435;

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

  return test.getReturnValue();
}
